# Baseline Measurements (Stage 0)

Captured 2026-04-28 on `geralt` (Linux 6.8.0-110-generic, x86_64) with:

- xdelta3 3.0.11 (system package `libxdelta` + CLI)
- `xdelta3-rs` 0.1.5 — Rust bindings, statically linked libxdelta3.a
- Lean 4 v4.29.0-rc6, lean-bdiff at commit `bbb384b`
- Iterations: 5 per measurement, median reported, 1 warmup run
- Release build (`cargo --release`)

Reproduce:
```
# In-process comparison (authoritative — eliminates process/IO overhead)
cd rust && cargo run --release --bin bench-compare --features bench -- all 5

# Lean-only numbers (same timing harness as bench-compare for lean side)
.lake/build/bin/bench-vcdiff all 5     # after `lake build bench-vcdiff`

# Profile
scripts/profile.sh case01-encode       # writes planning/profile-*-<workload>.txt
```

## Workloads

| Workload | Source | Target | Notes |
|---|---|---|---|
| `case01-encode` | `test-data/case01/source_state_bytes.bin` (8.0 MiB) | `test-data/case01/target_state_bytes.bin` (15.0 MiB) | Real-world VCDIFF workload from upstream |
| `case01-decode` | same source | same target via `test-data/case01/state_diff_bytes.bin` (8.4 MiB, xdelta3-produced) | Straight decode of the shipped diff |
| `synthetic-1MB` | 1 MB pseudo-random, seed=42 | same bytes with every 10th byte +1 | 10% modification rate |

## Results — in-process (authoritative)

Both sides timed with `std::time::Instant` around single function calls —
no process startup, no file I/O, inputs pre-loaded into memory.

`xdelta3` is called via raw FFI with `XD3_COMPLEVEL_6` to match CLI default
(`xd3_encode_memory` with `flags=0` would use level 3, which is faster but
worse compression — not apples-to-apples).

### case01 encode

| Tool | Median time | Ratio | Patch size |
|---|---|---|---|
| xdelta3 -6 (libxdelta3.a) | 551 ms | 1.00x | 8,807,950 B (56%) |
| lean-bdiff (via Rust FFI) | **8,354 ms** | **15.16x** | 11,593,659 B (73%) |
| lean-bdiff (direct, no FFI memcpy) | 5,920 ms | 10.74x | 11,593,659 B |

### case01 decode

| Tool | Median time | Ratio |
|---|---|---|
| xdelta3 (libxdelta3.a) | **9.2 ms** | 1.00x |
| lean-bdiff (via Rust FFI) | 69.1 ms | 7.49x |
| lean-bdiff (direct) | 49.9 ms | 5.40x |

### synthetic 1MB 10%-mod

| Tool | Encode | Decode | Encode ratio | Decode ratio |
|---|---|---|---|---|
| xdelta3 | 40.5 ms | **0.42 ms** | 1.00x | 1.00x |
| lean-bdiff (via Rust FFI) | 528 ms | 24.6 ms | 13.04x | **58.67x** |
| lean-bdiff (direct) | 429 ms | 19.3 ms | 10.59x | 45.94x |

### Rust FFI overhead

The 40%+ slowdown when calling lean-bdiff through the Rust FFI
(`lean_bdiff::encode`) is from `byte_array_from_slice`: it memcpys the
input bytes into a fresh Lean `ByteArray` on every call. For case01
encode that's 23 MB of memcpy per iteration (~2.4 s total per 5 iters).
The direct-Lean numbers are what a Lean caller would see and are the
relevant ones for evaluating our optimisation progress. The FFI numbers
are relevant for a Rust-calling-lean-bdiff use case and would be improved
by a zero-copy ByteArray-from-slice path, which is out of scope for this
plan.

### Earlier CLI numbers (replaced)

An earlier version of this file listed numbers from `xdelta3` CLI
invocations measured with `time`. Those are **misleading** because process
launch + file I/O adds ~10–30 ms per call — overwhelming decode entirely.
The in-process numbers above are authoritative.

For reference, the process-invocation numbers were:

| Workload | xdelta3 CLI | ratio (wrong) | xdelta3 in-proc | ratio (correct) |
|---|---|---|---|---|
| case01 encode | 462 ms | 12.81x | 551 ms | 10.74x |
| case01 decode | 35 ms | 1.43x | 9.2 ms | 5.40x |
| synthetic decode | 5 ms | 3.87x | 0.42 ms | 45.94x |

## North-star metric

**`case01-encode` direct-Lean median time**, target ratio ≤ 2.0x vs in-proc
xdelta3. Baseline **10.74x** (5920 ms vs 551 ms).

Rationale: (1) encode is the outlier and touches every hot path; (2) the
case01 target is representative of intended usage (15 MiB real data); (3)
using direct-Lean timing (not FFI) isolates the optimisation target from
Rust-interop concerns.

Secondary metric: **`case01-decode` direct-Lean**, currently 5.40x. Once
encode is in range, revisit decode.

## Profile summary (baseline)

Full output: `planning/profile-baseline-case01-encode.txt`,
`planning/profile-baseline-case01-decode.txt`.

### `case01-encode` top flat symbols (self time)

| % self | Symbol | Category |
|---|---|---|
| 29.1% | `findBestMatchRec` | Candidate chain walk (boxed-Nat list cons/dec) |
| 11.3% | `extendForward` | Match extension loop |
|  8.7% | `extendMatch` | Wraps forward+backward extend |
|  8.3% | `extendBackward` | Match extension loop |
|  6.2% | `hashBytes` inner loop | Full-window recompute per position |
| 10.7% | `lean_dec_ref_cold` | RC decrement (allocator pressure) |
|  6.3% | `mi_free` | mimalloc free (allocator pressure) |
|  2.0% | `mi_malloc_small` | mimalloc small-alloc |
|  1.3% | `buildSourceIndex` fold | List cons at index-build time |

Total "allocator/RC" line items: **~19%** of runtime. Combined with the
28.3% spent in match-extension loops and 29.1% in the candidate walk, there
is very little runtime *not* explained by the Stage 1 plan.

### `case01-decode` top flat symbols

Skewed by the extra adler32-only benchmark running inside `benchCase01Decode`
(for instrument calibration). The first entry, 45% in an
`adler32_spec__0___redArg` forIn loop, is the stand-alone adler32 benchmark
rather than `Decoder.decode` itself. Excluding that:

| % self (excl. adler32 probe) | Symbol |
|---|---|
|  9.0% | `applyWindowLoop` |
|  6.2% | `lean_dec_ref_cold` |
|  2.5% | `__memmove_avx_unaligned_erms` |
|  1.7% | `mi_free` |
|  1.5% | `Varint.decodeLoop` |
|  1.5% | `lean_byte_array_data` |
|  1.3% | `mi_malloc_small` |
|  1.3% | `lean_byte_array_copy_slice` |

With the corrected in-process numbers, decode is 5.40x slower than xdelta3
on case01 and 46x slower on synthetic — **not** close to parity, and
deserves attention once encode is in range.

## Implications for Stage 1 ordering

The profile confirms the plan's expected-impact order with one adjustment:
**`extendForward`/`extendBackward` collectively (19.6%) are hotter than
the rolling-hash recompute (6.2%)**. So consider adding a Stage 1 step that
strips the `Nat.add` / `ByteArray.get!`-with-Nat-index overhead from the
match-extension loops (uses `UInt32`/`USize` and unrolled compare) — this is
Step 1.6 (UInt32 in hot loops) applied specifically to `extendMatch`.

Reordered priorities:
1. **Step 1.1** (flat chain source index) — removes list-cons path *and*
   most of the 19% allocator overhead
2. **Step 1.6** (UInt32 positions), applied first to `extendForward`/
   `extendBackward` — directly attacks the 19.6% match-extend cost
3. **Step 1.4** (remove `RawInst` intermediate) — removes per-instruction
   allocation
4. **Step 1.2** (rolling hash) — 6.2%, smaller but easy
5. **Steps 1.3, 1.5, 1.7, 1.8** — remaining minor wins

## History

| Date | Change | case01-encode median (direct) | Ratio vs xdelta3 in-proc |
|---|---|---|---|
| 2026-04-28 | baseline (bbb384b) | 5920 ms | 10.74x |
| 2026-04-28 | Step 1.1 flat chain source index | 4165 ms | 7.55x |
| 2026-04-28 | Step 1.6 USize extend loops | 3253 ms | 5.90x |
| 2026-04-28 | Step 1.6 ext: hashBytes + no-alloc findBestMatchRec | 3042 ms | 5.52x |
| 2026-04-28 | Step 1.4 (partial): RawInst.add carries indices, not ByteArray | 2981 ms | 5.41x |
| 2026-04-28 | Decode opts (unboxed AddressCache, batched-mod Adler32, isNoop tag check, ADD via copySlice) | 2830 ms / 44 ms decode / 13 ms synthetic decode | encode 5.10x / decode case01 4.49x / decode synthetic 28.6x |
| 2026-04-28 | Decode opts 2 (scalar cursors in applyWindowFast, per-case exec helpers) | 2830 ms / 36 ms decode / 9.6 ms synthetic decode | encode 5.10x / decode case01 3.67x / decode synthetic 21.1x |
| 2026-04-28 | Decode opts 3 (USize-free varint, addr-cache decodePos, CPS-style afterInst1) | 2830 ms / 31 ms decode / 7.9 ms synthetic decode | encode 5.10x / decode case01 3.16x / decode synthetic 17.3x |

### Decode optimisation notes (round 3)

Three further changes landed:

7. **`Varint.decodeLoopPos`** returns `(value, newPos)` instead of
   `(value, Cursor)`. Skips one Cursor allocation per varint decode in
   the hot path. Case01 36 → 35 ms.
8. **`AddressCache.decodePos`** takes `addrSec + aPos` directly as a
   scalar pair, skips Cursor construction. Called once per COPY opcode
   from `execCopy`. Case01 35 → 35 ms (within noise); synthetic decode
   9.6 → 9.3 ms.
9. **CPS-style `afterInst1` inline continuation**: previously the post-
   inst1 state was boxed as `DecodeResult (ByteArray × Nat × Nat ×
   AddressCache.State)` between inst1 and inst2. Rewritten with a local
   closure that takes the 4 fields as bound args; Lean inlines it at
   each inst1 case (noop/add/run/copy) so the state lives in variables
   rather than a heap tuple. Case01 35 → 31 ms (11%); synthetic 9.3 →
   7.9 ms (15%).

**Decode summary after all three rounds:**

| Workload | Pre-opt | Current | Total speedup | Direct-Lean ratio |
|---|---|---|---|---|
| case01 decode | 54 ms | **31 ms** | 43% | **3.16x** vs xdelta3 |
| synthetic decode | 19 ms | **7.9 ms** | 58% | 17.3x vs xdelta3 |

In-process (via FFI):

| Workload | xdelta3 | lean-bdiff | Ratio |
|---|---|---|---|
| case01 decode | 9.1 ms | 42 ms | **4.66x** |
| synthetic decode | 0.41 ms | 9.9 ms | 24.2x |

Case01 decode is now at ~3x direct-Lean vs xdelta3, close to the 2x
Stage 1 target. Synthetic is still dominated by per-call Lean runtime
overhead (setup/initialisation + FFI ByteArray copy-in).

### Decode optimisation notes (round 2)

Two further changes landed:

5. **`applyWindowFast` with scalar positions**: replaced `Cursor` struct
   triples in the main decode loop with bare `Nat` positions
   (`iPos`, `dPos`, `aPos`). The three section ByteArrays are passed as
   fixed args that never change. Eliminates 3-6 Cursor struct allocations
   per opcode. Case01 44 → 43 ms; synthetic unchanged at 13 ms.
6. **Per-case exec helpers (`execAdd`, `execRun`, `execCopy`)**: replaced
   the unified `execHalfInstFast : DecodeResult (ByteArray × Nat × Nat ×
   State)` with three helpers whose return types match exactly what each
   case updates (ADD/RUN: `ByteArray × Nat`; COPY: `ByteArray × Nat ×
   State`; NOOP: no exec call at all). This let the Lean compiler elide
   the per-case 4-tuple + Except.ok wrapping that previously cost ~5
   allocations per half-instruction. Case01 43 → 36 ms (16%); synthetic
   13 → 9.6 ms (26%).

**Decode summary after both rounds:**

| Workload | Pre-opt | Current | Total speedup | Direct-Lean ratio |
|---|---|---|---|---|
| case01 decode | 54 ms | **36 ms** | 33% | **3.67x** vs xdelta3 |
| synthetic decode | 19 ms | **9.6 ms** | 49% | 21.1x vs xdelta3 |

In-process (via FFI, comparable measurement with xdelta3):

| Workload | xdelta3 in-proc | lean-bdiff in-proc | Ratio |
|---|---|---|---|
| case01 decode | 9.6 ms | 51 ms | **5.31x** |
| synthetic decode | 0.44 ms | 14 ms | 32.3x |

Case01 decode is now in the 3.7–5.3x range vs xdelta3, substantially closer
to the 2x target than the encoder's 5.1–7.5x. Synthetic decode still bears
per-call Lean runtime overhead that dominates at tiny workloads.

### Decode optimisation notes

Series of small decode-targeted changes:

1. **`AddressCache.State.near/.same : Array UInt32`** (was `Array Nat`). Each
   cache update previously boxed the address via gmp; now stays as unboxed
   scalars. Decode 54 → 50 ms.
2. **Batched-modulus Adler32 with USize index** (`Decoder.adler32`). Follows
   RFC 1950's standard technique of running 5552 byte accumulations between
   modulus applications. Inner loop is now tight USize arithmetic. Synthetic
   decode 20% of samples were in the old Adler32; now 5%. Synthetic decode
   19 → 15 ms.
3. **`InstType.isNoop` tag check** replacing `!= .noop`. Eliminates the
   derived-BEq switch from decodeOneStep's noop checks. Synthetic decode
   5.6% of samples were in `instBEqInstType_beq`; now 0%.
4. **ADD via direct `copySlice`** (was `readBytes + ++`). Previously did
   two allocations + two memcpys per ADD; now one memcpy direct from the
   data section into target at offset `target.size`. Case01 decode 50 → 44
   ms; synthetic 15 → 14 ms.

**Decode at this point:** case01 direct-Lean 44 ms (4.49x vs xdelta3
in-process 9.8 ms); synthetic 13 ms (28.6x vs xdelta3 0.45 ms).

The case01 in-process ratio via FFI is 6.18x (60 ms vs xdelta3's 9.8 ms),
inflated by the ByteArray FFI copy-in overhead.

The synthetic 28-40x decode gap reflects per-call Lean runtime overhead
being significant for tiny workloads (<20 ms). Reduced but still
dominant; fundamental improvements there would need streaming-level
optimisations.

### Skipped decode optimisations

- **`copyBytes` via `copySlice target tgtOff target ...` for self-copies**:
  unexpectedly regressed case01 decode from 44 → 52 ms despite being the
  theoretically-faster path. Suspected reason: `copySlice src=target dest=target`
  has different RC semantics in the extern than `target ++ target.extract ...`
  where the `extract` creates a small fresh RC=1 buffer. Kept the original.
- **`runPush` for RUN**: byte-by-byte push was slower than
  `target ++ ByteArray.mk (Array.replicate n b)` for large runs. Kept the
  bulk-replicate approach.
- **Compute `here` only when needed in decodeOneStep**: no measurable
  effect because `sourceWindow.size + target.size` is already scalar-tag-arithmetic
  for our working sizes. Kept the simple version.

### Step 1.4 notes (partial: index-based RawInst.add)

- `RawInst.add` now carries `(start endIdx : Nat)` indices into `target`
  instead of a `ByteArray` slice. The bytes are materialised exactly once
  at final section emission via `target.copySlice addStart dataSection
  dataSection.size sz false` — one `lean_byte_array_copy_slice` call,
  no intermediate `extract` allocation.
- `generateInstructionsLoop` tracks pending ADD as `addStart : Nat`, not a
  `ByteArray` accumulator. `emitAddWithRuns` now scans `target[start..end)`
  in place.
- Modest win: 3042 ms → 2981 ms (2%). The match-finding hot loop
  (`findBestMatchRec` + `extendForwardAux` + `extendBackwardAux` = 58.7%)
  dominates; reducing allocator load around it only helps at the margins.
- The **proof simplification** from this change is significant — ADD data
  bytes no longer exist as a distinct ByteArray, so the "encode = decode's
  left inverse" chain gains a clean equation:
  `decodeLoop (emitAdd target s e) = target.extract s e`.
- Full fusion (dropping `RawInst`/`Array RawInst` entirely) is possible
  but requires 1-slot lookahead for double opcodes; deferred because
  profile shows the remaining allocator cost is ~8% (`lean_dec_ref_cold`),
  not dominated by RawInst construction.

### Stage 1 exit readiness

The remaining gap is dominated by byte-compare inner loops in
`extendForwardAux` / `extendBackwardAux`. Investigation revealed:

1. **xdelta3 does NOT use SIMD** (despite my earlier claim). Its
   `xd3_forward_match` reads 4 bytes at a time as `int` via
   `*(int*)s1c == *(int*)s2c`, gated on `UNALIGNED_OK` (set on x86_64).
   gcc at `-O3` compiles this to scalar `MOV %eax, (%rsi)` + `CMP`
   without auto-vectorising to SSE — but the 4x-per-iter throughput
   is the key speedup.

2. **Attempting the same 4-byte-at-a-time strategy in Lean regressed
   perf** (2981 → 4200 ms, +40%). Root cause: Lean's `getElem!` on
   `ByteArray USize` emits an `outOfBounds → box → unbox` dance in
   generated C even when the OOB branch is unreachable. The direct
   `uget` requires a static proof of `idx.toNat < data.size`, which
   for pointer arithmetic like `si + 3` under USize overflow semantics
   needs a multi-step proof (via `USize.toNat_add` mod, plus the
   `source.size < 2^31` invariant) that hasn't been packaged as a
   reusable Lean lemma yet.

3. Getting 4x-per-iter would require either:
   - Writing/importing a lemma `si.toNat + k < 2^63 → (si + k).toNat =
     si.toNat + k` (standard and likely in mathlib but not trivially
     found) so that `uget (si + k) _` has a clean proof
   - Exposing a `ByteArray.getUInt32LE!` primitive via `@[extern]`
     (single C function reading 4 bytes with one bounds check) —
     this is still pure Lean at the user-code level but adds a
     small external C helper, arguably within the "no unverified C"
     rule since the helper is trivial
   - Accepting the `getElem!` overhead and hoping gcc coalesces 4
     bounds checks into one (current evidence: it does not)

For now, **Stage 1 exits at 5.41x** (50% speedup from baseline). The
remaining Stage 1 candidates (1.5 copyBytes, 1.7 varint write, 1.8
Adler32 batching) are small wins that don't change the fundamental
ratio. Recommended path:

- **Stage 2** (simplify for verifiability) — consolidate helper lemmas,
  package the `USize + k` bound as reusable infrastructure that both
  proofs and a potential word-compare fast path can share.
- **Stage 3** (restore proofs) — the canonical goal of the whole
  effort.
- **Re-visit word-compare** later, once the `USize + k` infrastructure
  exists.

### Step 1.6 notes (partial: extend loops only)

- Replaced `extendForward`/`extendBackward` `Nat`-recursive definitions with
  fuel-driven `USize` auxiliary loops (`extendForwardAux`, `extendBackwardAux`)
  that use `ByteArray.uget` for scalar-indexed reads.
- Fuel is bounded by `min (source.size - sp) (target.size - tp)` (or
  `min sp tp` for backward), passed in from an `@[inline]` entry point.
- case01 encode 4165 ms → 3253 ms (22% further, cumulative 45%).
- Profile (`planning/profile-step1.6-case01-encode.txt`) shows extend loops
  dropped from 36.6% → 36.0% self-time but the **total** shrank, so absolute
  cost fell; the loops are now doing real work at near-native speed.
- `lean_dec_ref_cold` still 10% — likely from `Nat`-valued `Match` fields
  and per-call `findBestMatchRec` state. Will shrink further once more
  inner paths move off boxed `Nat`.

### Step 1.1 notes

- Replaced `SourceIndex.buckets : Array (List Nat)` with `head + chain : Array UInt32`
  (xdelta3-style `large_table` + `large_prev`). `findBestMatchRec` walks the chain
  via fuel recursion instead of consuming a `List`.
- All 29 tests pass, case01 and synthetic patches are byte-identical to baseline.
- Profile (`planning/profile-step1.1-case01-encode.txt`) shows match-extension
  cost now dominates at 36.6% (`extendForward` 16.0% + `extendBackward` 11.7% +
  `extendMatch` 8.9%). `findBestMatchRec` dropped from 29.1% → 20.5%.
- `mi_free` halved (6.3% → 3.9%), confirming the list-cons allocation pressure
  is gone. `lean_dec_ref_cold` stayed elevated (10.7% → 12.4%) — likely
  ByteArray RC in `extractForward`/`hashBytes`. Addressed by Step 1.6 next.
