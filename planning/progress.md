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

#### Phase B: Address Cache Roundtrip - COMPLETE
Prove that `AddressCache.decode` inverts `AddressCache.State.encodeAddress`.

- [x] Prove roundtrip for mode 0 (VCD_SELF): varint(addr) — `decode_mode0`
- [x] Prove roundtrip for mode 1 (VCD_HERE): varint(here - addr) — `decode_mode1`
- [x] Prove roundtrip for NEAR modes 2..5: varint(addr - near[i]) — `decode_near_mode`
- [x] Prove roundtrip for SAME modes 6..8: single-byte lookup — `decode_same_mode`
- [x] Prove cache state consistency (encode then decode updates cache identically) — embedded in theorem conclusions

Depends on: Phase A (varint roundtrip)

Key techniques:
- `beq_false_of_ne` + `omega` for BEq conditions on mode dispatch
- `if_pos`/`if_neg` for Decidable propositions in if-then-else
- `Varint.decode_encode` from Phase A for varint roundtrip
- `simp only [hsub]` for Nat subtraction cancellation (here - (here - addr) = addr)

#### Phase C: Code Table Roundtrip - COMPLETE
Prove that decoder code table lookups invert encoder opcode selection.

- [x] Table well-formedness: `defaultTable_size` (256 entries)
- [x] Single instruction lookups: RUN (opcode 0), ADD (1-18), COPY (19-162)
- [x] Double instruction lookups: ADD+COPY (163-246), COPY+ADD (247-255)
- [x] Prove `findSingleOpcode` roundtrip: lookup returns matching InstType and size
- [x] Prove `findAddCopyOpcode` roundtrip: lookup returns ADD+COPY pair
- [x] Prove `findCopyAddOpcode` roundtrip: lookup returns COPY+ADD pair
- [x] Composed encoder→decoder roundtrip theorems for all instruction types

Strategy: `interval_cases` + `native_decide` for exhaustive case analysis over bounded ranges.
Depends on: None (standalone, uses only CodeTable and Encoder definitions)

#### Phase D: Wire Format Roundtrip - COMPLETE
Prove that `parseHeader`/`parseWindow` correctly extract what `encode` serialized.

- [x] Prove UInt32 big-endian serialization roundtrip (`readUInt32BE_writeUInt32BE`)
- [x] Prove byte decomposition identity (`uint32_byte_roundtrip`) via `bv_decide`
- [x] Prove Adler32 equivalence between encoder/decoder (`adler32_eq`)
- [x] Prove header serialization/parsing roundtrip (`parseHeader_encoded`)
- [x] Prove varint encoding properties (nonempty, size ≤ 5)
- [x] Prove all indicator flags validity (no reserved bits, correct bits set)

Key techniques:
- `bv_decide` for UInt32 byte decomposition via BitVec
- `readByte_ok` chain with `simp only [Except.bind]` for cursor stepping
- `native_decide` for concrete flag properties

#### Phase E: Instruction Semantics - IN PROGRESS
Prove that executing the generated instructions against the source reproduces the target.

- [x] `DecidableEq` instances for `DecodeError`, `Varint.Cursor`, `AddressCache.State`
- [x] `execHalfInst_noop`: NOOP leaves target unchanged (general)
- [x] `execHalfInst_add`: ADD appends correct bytes from data section (general)
- [x] `execHalfInst_add_zero`: ADD with 0 bytes is identity (general)
- [x] Concrete ADD examples (3 bytes, 1 byte appending)
- [x] Concrete RUN examples (4 bytes 0xFF, 1 byte 0x00, 3 bytes appending)
- [x] Concrete COPY examples (mode 0 addr=0, mode 0 addr=2, appending, mode 1 VCD_HERE)
- [x] ADD single-instruction roundtrip (sizes 1, 5, 17): opcode → lookup → exec
- [x] RUN single-instruction roundtrip: opcode 0 → exec with resolved size
- [x] COPY single-instruction roundtrip: mode 0 sizes 4/8, mode 1 size 4
  - Split: opcode proof + entry proof + execution proof (Decidable workaround)
- [x] ADD+COPY double-instruction roundtrip (opcode 166)
- [x] COPY+ADD double-instruction roundtrip (opcode 247)
- [x] `findSingleOpcode_add_immediate`: general ADD opcode selection for sizes 1..17
- [x] `lookup_add_opcode_*`: code table entries 2..18 map to ADD with correct size
- [x] `lookup_add_opcode_noop`: ADD opcodes 2..18 have inst2 = NOOP
- [x] Non-partial spec functions: `encodeOneInst`, `encodeInstList`, `decodeOneStep`, `decodeLoop`
- [x] Concrete single-instruction section roundtrips (ADD sizes 1/3/17, RUN, COPY mode 0)
- [x] Multi-instruction section roundtrips (2 ADDs, ADD+RUN, COPY+ADD, 3 instructions)
- [x] General ADD section roundtrip for sizes 1..17 (`encodeOneInst_add_sections`)
- [x] Edge cases: empty instruction list, exhausted cursor, fuel sufficiency
- [x] General code table lookup for ADD: `lookup_add_entry` (sizes 1..17)
- [x] General `execHalfInst` for ADD with arbitrary HalfInst size field
- [x] General `decodeOneStep` for single ADD: `decodeOneStep_add_general` (all sizes 1..17)
- [x] Composed encode→decode roundtrip: `encodeOneInst_decodeOneStep_add` (general)
- [x] `decodeLoop` single ADD roundtrip: `decodeLoop_single_add` (general)
- [ ] General section roundtrip theorem for arbitrary instruction lists
- [ ] Prove overall instruction execution produces target

Key techniques:
- `native_decide` for concrete instruction execution examples
- Split COPY/RUN roundtrips into opcode + entry + execution proofs (for loops block `Decidable` synthesis through `CodeTable.lookup`)
- `deriving instance DecidableEq for` on `DecodeError`, `Varint.Cursor`, `AddressCache.State`
- `interval_cases` + `native_decide` for ADD opcode properties over ranges

#### Phase F: Full Composition
Compose all layers into the top-level `roundtrip` theorem.

- [ ] Compose wire format + instruction + section roundtrips
- [ ] Handle Adler32 checksum verification

### Remaining Potential Work (non-verification)
- [ ] Windowed processing for very large files (>100MB)
- [ ] C FFI inner loops for hash table / matching (if needed)
