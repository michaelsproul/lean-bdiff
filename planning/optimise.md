# Performance Optimisation Plan: Toward Parity With xdelta3

## Goal

Reduce the ~7x performance gap between `lean-bdiff` and the reference C `xdelta3`
implementation to **1.5–2x**, without abandoning the formal verification story.
No unverified C code in the hot path; all hot loops stay in pure Lean 4 so the
proof chain from `full_encode_decode_roundtrip_final` remains valid.

## Strategy (Three-Stage)

1. **Rewrite for speed, proofs stale.** Aggressively change memory-usage
   patterns in the encoder/decoder. Let the proofs fall behind (retain them in
   `Proofs/` unchanged; they will fail to compile against the new definitions
   and that is acceptable for this stage). Benchmark relentlessly against
   `xdelta3` after each meaningful change.
2. **Simplify for verifiability.** Once perf is within target, examine every
   optimisation for what it costs the proofs. Remove complexity that doesn't
   buy measurable perf. Re-benchmark to verify no regression.
3. **Restore proofs.** Port/rewrite the proof chain to match the new
   definitions, keeping the top-level theorem statement identical.

---

## Stage 0 — Baseline Measurements (No Code Changes)

Before touching any code, establish reliable baselines so every later change
has a number attached to it.

### Step 0.1 — xdelta3 reference numbers

Use the existing benchmark inputs (`test-data/case01/*.bin`,
`Test/Bench.lean`'s synthetic 1MB case) and measure `xdelta3 -e -S none -f`
and `xdelta3 -d -S none -f` wall-clock time with `/usr/bin/time -v`. Capture:

- Encode time, decode time
- Max RSS
- Output size (for relative compression, just to catch regressions)

Run each input 5 times, record median. Store results in
`planning/bench-baseline.md` (new file).

### Step 0.2 — Current Lean numbers, same inputs

Extend `Test/Bench.lean` to match the xdelta3 inputs exactly (it currently
benchmarks `case01` for decode, and a synthetic 1MB 10%-mod target for
encode+decode). Add a CLI mode that runs each operation `N=5` times and prints
median ms. Record results in the same file.

### Step 0.3 — Profiling setup

Write a script (`scripts/profile.sh`) that:

- Builds `bench-vcdiff` in release mode (`lake build -Kbuildtype=release`)
- Runs it under `perf record --call-graph=dwarf`
- Emits `perf report --stdio` top-30 into `planning/profile-<date>.txt`

The output lets us identify the hottest Lean-generated C functions. Expected
top hitters today (educated guess based on the code):

- `LeanBdiff_Vcdiff_Encoder_buildSourceIndex___lambda*` (`Array.set!` on boxed lists)
- `LeanBdiff_Vcdiff_Encoder_hashBytes` (recomputes full hash per position)
- `lean_array_set`, `lean_apply_*` (list cons + box overhead)
- `ByteArray_copySlice` / `lean_byte_array_push` (for `++` on encoder sections)
- `LeanBdiff_Vcdiff_Decoder_copyLoop`/`copyBytes` overlap path

### Step 0.4 — Pin the target

Commit the baseline numbers. Pick one canonical workload as the "north star"
metric (proposed: `case01` decode, since it's a real 15 MB target and
representative of intended use). Optimisations that don't move it don't ship.

---

## Stage 1 — Memory-Pattern Rewrites (Proofs Allowed To Break)

Each substep below is a standalone optimisation with an expected impact. Land
them in roughly descending expected-impact order so early numbers look good.
After each, re-run Step 0.2 + 0.3; if no improvement, revert.

**Ground rule:** The public API (`Encoder.encode`, `Decoder.decode`, their
signatures, and the top-level theorem statement) does not change. Internal
helper shapes are fair game.

### Step 1.1 — Replace the source index with a flat chain table

**Current:** `SourceIndex.buckets : Array (List Nat)` — each bucket is a linked
list of boxed `Nat` positions. Building it at 15 MB source size allocates
millions of list cells.

**Target:** Two flat `ByteArray`-backed `UInt32` arrays, mirroring xdelta3's
`large_table` + chain:

```
head  : Array UInt32  -- size = 2^bucketBits; head[h] = first position with hash h, or sentinel
chain : Array UInt32  -- size = source.size; chain[p] = previous position sharing a bucket, or sentinel
```

Insert is O(1) linear-use `Array.set` on unboxed `UInt32`, no allocation.
Walking the chain during lookup avoids any list traversal overhead.

**Risk:** Array linearity. Build with a single `for` loop that threads `head`
and `chain` through `Id.run do` so RC stays at 1 and `Array.set` mutates in
place.

**Expected impact:** Large, particularly on encode. This data structure alone
accounts for the bulk of the source-index cost per 1 MB of source.

### Step 1.2 — Rolling hash instead of recomputation

**Current:** `hashBytes` loops over `hashWindow=4` bytes at every target
position. For each target-scan position we do 4 multiplies + 4 adds.

**Target:** True rolling hash:

```
h' = h * hashMultiplier - dropped * hashPow + added
```

with `hashPow = hashMultiplier ^ hashWindow` precomputed. Keeps the same hash
family (so `buildSourceIndex` and `findBestMatch` agree). This drops a
per-byte multiply-add chain.

**Implementation note:** Track `h` across calls to `findBestMatch` rather than
recomputing. This means `generateInstructionsLoop` passes the current `h`
through its state.

**Expected impact:** Meaningful on encode, especially for cases with many
literal (non-matching) bytes.

### Step 1.3 — Pre-sized, append-in-place output buffers

**Current:** `encodeWindowLoop` builds `dataSection`, `instSection`,
`addrSection` by `ByteArray.push` on one branch and `++` on another. The `++`
path allocates a new array each time. At 1 MB target this is ~10^5 small
appends.

**Target:**

- Pre-compute an over-estimate for each section size (e.g. `target.size` for
  `instSection` is a safe upper bound on opcode bytes; `target.size` works for
  `dataSection` too since ADD data is bounded by target size; `addrSection`
  is bounded by `5 * numCopies ≤ 5 * target.size / 4`).
- Allocate `ByteArray.emptyWithCapacity capacity` for each.
- Use `ByteArray.push` / `copySlice` exclusively.

Crucially, thread them as linear values so Lean's RC triggers in-place append.

**Expected impact:** Large constant factor on encode; also simplifies the
proof of `.data` equality since we're no longer composing `++` chains.

### Step 1.4 — Remove the `RawInst` intermediate

**Current:** `generateInstructions` builds `Array RawInst`, each element of
which is either `.add (data : ByteArray)` (a copied slice of target!) or
`.copy addr size` or `.run byte size`. A million-entry array of `ByteArray`
slices is enormous.

**Target:** Fuse generation and encoding: the match loop writes directly into
the three section buffers (data/inst/addr) as decisions are made. Pending
ADD runs are tracked as `(startPos, length)` against the target buffer
instead of being materialised as a `ByteArray`.

**Risk:** This is the biggest structural rewrite. It requires moving
`emitAddWithRuns` + `findAddCopyOpcode` + `findCopyAddOpcode` into the same
loop body. Prototype behind a feature flag (`encodeV2`) and compare output
byte-for-byte against `encodeV1` on all existing tests before switching.

**Expected impact:** Large on encode (allocation pressure + cache locality).
Probably the single biggest win for large inputs.

### Step 1.5 — `copyBytes` overlap loop

**Current:** The overlapping self-copy branch in `Decoder.copyBytes` uses
`target.push t[srcPos]!` in a loop; `t` is read after each push, so the
compiler can't obviously hoist anything. For VCDIFF RUN-like overlapping
copies this can dominate decode time on patches with many self-copies.

**Target:** One of:

- Detect the "pure repeat" special case (addr + 1 == here, i.e. single-byte
  replication) and `copySlice` the byte forward in a pre-sized buffer; or
- Switch to `USize`-indexed manual loop that pre-extends the array to
  `target.size + n` and writes directly via `ByteArray.set!`, avoiding the
  `push` resize check.

**Expected impact:** Medium on decode. Matters more on xdelta3-generated
patches than on ours (xdelta3 uses RUN-style self-copy aggressively).

### Step 1.6 — `UInt32` for positions in hot loops

**Current:** `Nat` is used for all positions. Any `Nat` that exceeds the
native small-int threshold is heap-allocated. At 15 MB source, every position
is above threshold.

**Target:** In inner loops (source-index insert, rolling hash, match extend,
encode loop), use `UInt32` for positions and sizes. Convert at function
boundaries.

**Risk:** Overflow if sources exceed 4 GB. We already declare
`h_source_bound : source.size < 2 ^ 31`, so `UInt32` is safe; tighten to
`UInt32` throughout and convert at the public API.

**Expected impact:** Medium-large on both encode and decode hot loops.

### Step 1.7 — `Varint.encode` without `List`

**Current:** `encode` → `toBase128` (builds a `List UInt8`) →
`setContinuationBits` (builds another `List UInt8`) →
`.toArray`. Three allocations per integer, and we encode one per instruction.

**Target:** Write directly into a small `ByteArray` via two passes: first
determine `numDigits n` (cheap, tail-recursive on `n`), then write the bytes
from MSB to LSB with continuation bits applied inline.

**Expected impact:** Small-medium. Many small wins accumulate across ~10^5
varints per 1 MB encode.

### Step 1.8 — Adler32 unrolled loop

**Current:** Byte-at-a-time `% 65521` per byte. On large targets this is a
lot of modulo ops.

**Target:** Standard Adler32 optimisation — batch 5552 iterations between
modulos. Pure Lean, just fewer `%` instructions.

**Expected impact:** Small on encode, medium on decode for checksummed
patches.

---

## Stage 1 Exit Criteria

After each substep, record in `planning/bench-baseline.md`:

- Wall-clock encode/decode ms on the north-star workload
- Ratio vs xdelta3

Stop optimising when the north-star ratio hits **≤ 2.0x**. If at ratio > 2.0x
we've exhausted the list above, profile again and extend. Do **not** move to
Stage 2 with proofs broken and ratio > 2.0x — that guarantees we'll
re-optimise during the proof stage.

---

## Stage 2 — Simplify For Verifiability

With a fast implementation in hand, re-read every change from Stage 1
critically. Goals:

1. **Cap complexity** — if an optimisation is worth <5% perf and adds
   significant proof burden, roll it back.
2. **Extract pure specs** — each new helper that replaces old code should have
   a one-line functional spec (e.g. `SourceIndex.insert idx p = { idx with
   head := idx.head.set bucket p, chain := idx.chain.set p (idx.head.get
   bucket) }`). Write those specs as Lean definitions even if the actual
   implementation has `Id.run do` plumbing around them, so proofs can
   reference the spec directly.
3. **Re-check termination** — prefer structural recursion or fuel over
   `Nat.rec` tricks. The proof cost of a hand-rolled `termination_by` adds up.
4. **Re-benchmark** — every simplification must be validated against the
   north-star number. If a "simpler" variant regresses perf, keep the fast
   variant and accept the proof cost.

Concrete candidates likely to need simplification:

- **Rolling hash state threading (Step 1.2)** — if it infects every
  `generateInstructionsLoop` argument, consider packaging into a single
  `MatchingState` record. Proofs can then be about `MatchingState.advance`
  rather than 7 argument positions.
- **`encodeV2` fused loop (Step 1.4)** — if the fused loop is hard to prove
  equivalent to `generateInstructions ∘ encodeWindow`, add a helper
  `encodeV2_spec` that defines the section outputs declaratively, prove
  `encodeV2 = encodeV2_spec` structurally, then use the spec in higher proofs.
- **`UInt32` positions (Step 1.6)** — provide `Nat`-level specifications for
  every `UInt32` helper and prove the two agree under the
  `< 2^31` hypothesis we already carry.

---

## Stage 3 — Restore The Proof Chain

The proof chain today is (bottom up):

```
Varint.decode_encode
  → AddressCache roundtrip
  → CodeTable roundtrip
  → InstructionSemantics
  → CursorReloc (sorry-free)
  → Encoder.Proofs (wire format roundtrip)
  → WindowRoundtrip (encodeInstList_decodeLoop_roundtrip)
  → PairedRoundtrip (encodeWindowLoop bridge, h_loop_discharge)
  → SectionBounds (derive_sec_bound)
  → GenerateInstructions (generateInstructions_exec/valid)
  → full_encode_decode_roundtrip_final
```

Restore in the same bottom-up order — each layer's breakage is triggered by
definition changes in the layer it abstracts over.

### Step 3.1 — Varint layer

Affected by Step 1.7 (varint encode rewrite). Re-establish
`Varint.decode_encode` against the new direct-write `encode`. The existing
`fromBase128_toBase128` lemma is about the pure base-128 representation and
should survive unchanged — the rewrite mostly replaces the `List`→`ByteArray`
conversion with a direct write; bridge via a `toBase128_eq_…` lemma that
shows the new write loop produces the same bytes.

### Step 3.2 — AddressCache, CodeTable

Largely unaffected. CodeTable is a static lookup — no changes. AddressCache
only changes if we refactor `encodeAddress` (we probably don't need to in
Stage 1; leave it alone).

### Step 3.3 — InstructionSemantics + WindowRoundtrip

Affected by any change to `Decoder.execHalfInst`, `Decoder.decodeOneStep`,
`Decoder.applyWindowLoop`. Step 1.5 (`copyBytes` overlap loop) is the main
risk here — the new variant must preserve the same byte sequence. Use the
existing `InstructionSemantics` lemmas as regression oracles: if
`execHalfInst_copy_source_general` still holds, most of the chain survives.

### Step 3.4 — Encoder wire format

Affected by Steps 1.3 (pre-sized buffers) and 1.4 (`encodeV2` fused loop).
The `parseWindow_encoded_sections` proof walks through the exact byte layout
of the window, so the output must be byte-identical. That's enforced by our
pre-switch byte-for-byte compare against `encodeV1` (part of Step 1.4).

If `encodeV2` is byte-identical to `encodeV1` on all inputs, the cleanest
route is:

1. Keep `encodeV1` as the _specification_ used by all proofs.
2. Prove `encodeV2 = encodeV1` (structural, one-shot).
3. Replace `encode` to call `encodeV2`, then derive the top-level theorem via
   the `encodeV2 = encodeV1` bridge.

This lets us preserve the entire existing proof chain with zero rewriting in
the upper layers.

### Step 3.5 — `generateInstructions` and final theorem

Affected by Step 1.1 (flat chain table) and 1.2 (rolling hash) through
`findBestMatch`. The proof structure in `GenerateInstructions.lean` is built
around:

- `extendMatch_bytes_eq`
- `findBestMatch_good`
- `lazyBestMatch_good`
- `trimMatch_bytes_eq`

`findBestMatch_good` establishes `matched bytes are equal in source and
target`. That property does not depend on *how* the hash table is
implemented, only on the fact that `extendMatch` checks byte equality at
runtime. So as long as `extendMatch` is unchanged (Stage 1 does not rewrite
it), Step 1.1 is invisible to this proof — we only need a new
`findBestMatch_sound` lemma saying "any candidate returned by the new chain
lookup, extended, still byte-matches", which is trivial because `extendMatch`
re-verifies byte-by-byte.

The rolling hash (Step 1.2) is similarly invisible: `findBestMatch_good`
only cares that `extendMatch` was applied, not how candidates were chosen.

**This is the key insight that makes the proof restoration tractable.** The
match-finding heuristic is completely decoupled from correctness — we could
`findBestMatch` return `none` always and the encoder would still be correct
(just output nothing but ADDs). Changing the heuristic for speed is free, as
long as the type signatures are preserved.

### Step 3.6 — Final composition

`full_encode_decode_roundtrip_final`'s statement is unchanged. If Steps 3.1–
3.5 are clean, this should just re-typecheck.

---

## Risks and Mitigations

| Risk | Likelihood | Mitigation |
|------|-----------|------------|
| Stage 1 rewrite accidentally changes wire output | Medium | Byte-for-byte compare against current encoder on all existing tests + a fuzzer (random source/target pairs, 1000 iters) |
| `UInt32` position change introduces overflow bug at 2^31-bytes boundary | Low | Unit test at exactly the bound; proofs already carry `< 2^31` hypothesis |
| `encodeV2 = encodeV1` proof too expensive | Medium | Fall back to rewriting the wire-format proof for `encodeV2` directly. Budget: 1 week; if not done, revert to encodeV1 and take the perf hit |
| Linear-use RC violated by closure capture, silently disabling in-place update | High | After each rewrite, check a small-input compile with `set_option trace.compiler.ir.reset_reuse true` to verify IR uses `Array.set` not `Array.set!` fallback |
| Perf target still > 2x after Stage 1 is exhausted | Low-Medium | Re-profile, extend Stage 1 with additional optimisations (e.g. smarter IOPT buffer, match-depth heuristics). Do NOT ship with proofs broken |

---

## Deliverables

- `planning/bench-baseline.md` — numbers for each stage
- `planning/profile-<date>.txt` — perf reports at key milestones
- `scripts/profile.sh` — reproducible profiling harness
- `Test/Bench.lean` — extended to match xdelta3 workloads and emit medians
- Fuzzer test in `Test/VcdiffTest.lean` — random encode/decode roundtrip, to
  catch wire-format regressions during Stage 1
- Updated `LeanBdiff/Vcdiff/Encoder.lean`, `Decoder.lean`, `Varint.lean`,
  `AddressCache.lean` — fast variants
- Restored `LeanBdiff/Vcdiff/Proofs/*` — same top-level theorem, zero
  `sorry`s, after Stage 3

---

## Non-Goals

- No C FFI, no `@[extern]`, no `implemented_by`, no `unsafe`, no `partial` —
  per project instructions.
- No change to the VCDIFF output format or xdelta3 compatibility.
- No change to the public API shape or the `full_encode_decode_roundtrip_final`
  theorem statement.
- No windowed streaming (>100 MB files) — tracked separately as future work.
