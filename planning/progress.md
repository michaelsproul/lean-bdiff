# Progress Tracker

## Phase 1: VCDIFF Decoder - COMPLETE
- [x] Core types and error definitions
- [x] Varint codec
- [x] Default code table
- [x] Address cache
- [x] Decoder
- [x] Unit tests (9 pass)
- [x] xdelta3 reverse compatibility (xdelta3 encode -> our decode, 4 tests)

## Phase 2: Basic Encoder - COMPLETE (MVP)
- [x] Rolling hash source index
- [x] Greedy string matching
- [x] Instruction generation (ADD/COPY)
- [x] VCDIFF serialization (mode 0 / VCD_SELF only)
- [x] Internal roundtrip tests (5 pass)
- [x] xdelta3 forward compatibility (our encode -> xdelta3 decode, 4 tests)

## Phase 3: Performance Optimization - COMPLETE
- [x] Address cache encoding (NEAR/SAME modes for smaller patches)
- [x] Double-instruction opcodes (ADD+COPY / COPY+ADD in one byte)
- [x] RUN detection for repeated bytes
- [x] Lazy matching for better match selection
- [x] VCD_ADLER32 checksum support
- [x] Fixed code table loop order for entries 163-246 (RFC 3284 compliance)
- [x] Fixed lazy matching backward extension bug at 1MB+ scale
- [x] Larger file tests (10KB, 100KB, 1MB roundtrip + xdelta3 compat)
- [x] Profiling and benchmark
- Total: 29/29 tests passing

### Performance (pure Lean 4, compiled native)
| Size  | Mod Rate | Encode | Decode | Patch Size |
|-------|----------|--------|--------|------------|
| 10KB  | 20%      | 3ms    | <1ms   | 6KB (60%)  |
| 100KB | 10%      | 28ms   | 3ms    | 40KB (40%) |
| 100KB | 20%      | 35ms   | 5ms    | 60KB (60%) |
| 1MB   | 10%      | 465ms  | 29ms   | 597KB (59%)|
| 1MB   | 20%      | 519ms  | 34ms   | 818KB (81%)|
| 1MB   | all new  | 35ms   | 4ms    | 1MB (100%) |

### Remaining Potential Work
- [ ] Windowed processing for very large files (>100MB)
- [ ] C FFI inner loops for hash table / matching (if needed)
- [ ] Phase 4: Formal verification (optional)
