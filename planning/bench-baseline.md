# Baseline Measurements (Stage 0)

Captured 2026-04-28 on `geralt` (Linux 6.8.0-110-generic, x86_64) with:

- xdelta3 3.0.11 (system package)
- Lean 4 v4.29.0-rc6, lean-bdiff at commit `bbb384b`
- Iterations: 5 per measurement, median reported, 1 warmup run

Reproduce:
```
scripts/bench-xdelta3.sh 5
.lake/build/bin/bench-vcdiff all 5     # after `lake build bench-vcdiff`
scripts/profile.sh case01-encode       # writes planning/profile-*-<workload>.txt
```

## Workloads

| Workload | Source | Target | Notes |
|---|---|---|---|
| `case01-encode` | `test-data/case01/source_state_bytes.bin` (8.0 MiB) | `test-data/case01/target_state_bytes.bin` (15.0 MiB) | Real-world VCDIFF workload from upstream |
| `case01-decode` | same source | same target via `test-data/case01/state_diff_bytes.bin` (8.4 MiB, xdelta3-produced) | Straight decode of the shipped diff |
| `synthetic-1MB` | 1 MB pseudo-random, seed=42 | same bytes with every 10th byte +1 | 10% modification rate |

## Results

### case01 encode

| Tool | Median time | Ratio | Patch size | Notes |
|---|---|---|---|---|
| xdelta3 | 462 ms | 1.00x | 8,820,977 B (56%) | |
| lean-bdiff | **5,779 ms** | **12.51x** | 11,593,659 B (73%) | **north-star metric** |

### case01 decode

| Tool | Median time | Ratio | Notes |
|---|---|---|---|
| xdelta3 (repo diff) | 35 ms | 1.00x | |
| xdelta3 (own diff, 8.8 MB) | 39 ms | 1.11x | |
| lean-bdiff (repo diff) | **49.9 ms** | **1.43x** | Already close to target ratio |

### synthetic 1MB 10%-mod

| Tool | Encode | Decode | Encode ratio | Decode ratio |
|---|---|---|---|---|
| xdelta3 | 58 ms | 5 ms | 1.00x | 1.00x |
| lean-bdiff | 429 ms | 19 ms | 7.40x | 3.87x |

### Process-startup floor

The xdelta3 numbers measure full `xdelta3 ...` invocations including process
launch, file-open, and file-write. `strace` on an empty `xdelta3 -e` shows
~10 ms of syscall floor. For case01 encode (462 ms) this is 2% noise; for
synthetic decode (5 ms) it's half the measurement. Ratios on small decode
workloads are therefore approximate upper bounds on the real ratio.

The lean-bdiff numbers come from `timeMedian` which wraps `Encoder.encode` /
`Decoder.decode` directly and excludes file I/O. So the quoted ratios are
**conservative** — the lean-bdiff cost is purely compute.

## North-star metric

**`case01-encode` median time**, target ratio ≤ 2.0x. Baseline 12.51x.

Rationale: (1) encode is the outlier; decode is already acceptable; (2) the
case01 target is representative of intended usage (15 MiB real data); (3)
encode spans every hot path (source index, rolling hash, match extend,
section emission), so optimisations targeting it will also lift decode.

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

Decode is already within 1.43x of xdelta3; we don't need to micro-optimise
it at this stage.

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

| Date | Change | case01-encode median | Ratio vs xdelta3 |
|---|---|---|---|
| 2026-04-28 | baseline (bbb384b) | 5779 ms | 12.51x |
