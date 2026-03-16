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

## Phase 4: Formal Verification of Roundtrip Correctness - IN PROGRESS

### Top-Level Goal
```lean
theorem roundtrip (source target : ByteArray) :
  Decoder.decode (Encoder.encode source target) source = .ok target
```

### Decomposition Strategy (Bottom-Up)

#### Phase A: Varint Roundtrip - COMPLETE
Remove `partial` from varint functions and prove encode/decode roundtrip.

- [x] Make `Varint.encode` non-partial (uses `toBase128` with termination_by + `setContinuationBits`)
- [x] Make `Varint.decode` non-partial (rewritten as recursive `decodeLoop`)
- [x] Make `Varint.encodedSize` non-partial (uses `numDigits` with termination_by)
- [x] Concrete roundtrip examples via `native_decide` (0, 1, 127, 128, 300, 16383, 16384)
- [x] `fromBase128_toBase128`: base-128 representation recovers original number
- [x] Nat bitwise identities: `nat_and_0x7F`, `nat_or_128_and_127`, `nat_shiftLeft7_and_lt128`
- [x] UInt8 bitwise: `uint8_msb_clear`, `uint8_msb_set_or`, `decode_acc_step`, `decode_acc_step_cont`
- [x] `or_eq_add_of_and_eq_zero`: OR = ADD when bits don't overlap (binary induction)
- [x] `nat_shiftLeft7_or_lt128`: shift-left-7 OR with <128 = multiply + add
- [x] `decodeListAux_setContinuationBits`: list-level decode roundtrip
- [x] `decodeLoop_match_decodeListAux`: ByteArray↔List bridge (BEq/Prop mismatch handling)
- [x] `numDigits_le_5`: 5-byte bound for n < 2^35
- [x] `decode_encode`: full ByteArray-level roundtrip theorem (0 sorry)

Key sub-lemmas proved:
- `toBase128_pos`, `toBase128_ne_nil`, `toBase128_digit_bound`, `toBase128_length`
- `setContinuationBits_length`, `setContinuationBits_cons_cons`
- `fromBase128_append`, `fromBase128_acc`, `fromBase128_toBase128`
- `or_eq_add_of_and_eq_zero` via binary induction on `Nat.or_div_two`/`Nat.and_div_two`
- Nat testBit extensionality for bitwise identities via `Nat.eq_of_testBit_eq`
- `bv_decide` for UInt8/BitVec-level proofs
- `decodeLoop_match_decodeListAux` recursive def bridging ByteArray decodeLoop to List decodeListAux

#### Phase B: Address Cache Roundtrip
Prove that `AddressCache.decode` inverts `AddressCache.State.encodeAddress`.

- [ ] Prove roundtrip for mode 0 (VCD_SELF): varint(addr)
- [ ] Prove roundtrip for mode 1 (VCD_HERE): varint(here - addr)
- [ ] Prove roundtrip for NEAR modes 2..5: varint(addr - near[i])
- [ ] Prove roundtrip for SAME modes 6..8: single-byte lookup
- [ ] Prove cache state consistency (encode then decode updates cache identically)

Depends on: Phase A (varint roundtrip)

#### Phase C: Code Table Roundtrip
Prove that decoder code table lookups invert encoder opcode selection.

- [ ] Prove `findSingleOpcode` roundtrip: lookup returns matching InstType and size
- [ ] Prove `findAddCopyOpcode` roundtrip: lookup returns ADD+COPY pair
- [ ] Prove `findCopyAddOpcode` roundtrip: lookup returns COPY+ADD pair

Strategy: These are finite/decidable — use `native_decide` or exhaustive case analysis.

#### Phase D: Instruction Semantics
Prove that executing the generated instructions against the source reproduces the target.

- [ ] Define pure spec function `executeRawInsts` for instruction execution
- [ ] Prove `generateInstructions` invariant: ADD data comes from target, COPY ranges match source
- [ ] Prove `encodeWindow`/`applyWindow` roundtrip: decoding encoded sections reproduces instructions
- [ ] Prove overall instruction execution produces target

This is the hardest phase — requires reasoning about imperative loops and mutable state.

#### Phase E: Wire Format Roundtrip
Prove that `parseHeader`/`parseWindow` correctly extract what `encode` serialized.

- [ ] Prove header serialization/parsing roundtrip
- [ ] Prove window metadata serialization/parsing roundtrip
- [ ] Prove section extraction correctness

#### Phase F: Full Composition
Compose all layers into the top-level `roundtrip` theorem.

- [ ] Compose wire format + instruction + section roundtrips
- [ ] Handle Adler32 checksum verification

### Remaining Potential Work (non-verification)
- [ ] Windowed processing for very large files (>100MB)
- [ ] C FFI inner loops for hash table / matching (if needed)
