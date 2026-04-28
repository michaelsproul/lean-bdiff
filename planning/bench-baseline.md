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
