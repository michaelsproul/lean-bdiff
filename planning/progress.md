# Progress Tracker

## Phase 1: VCDIFF Decoder

### Completed
- [x] Core types and error definitions (`LeanBdiff/Vcdiff/Defs.lean`)
- [x] Varint codec (`LeanBdiff/Vcdiff/Varint.lean`)
- [x] Default code table (`LeanBdiff/Vcdiff/CodeTable.lean`)
- [x] Address cache (`LeanBdiff/Vcdiff/AddressCache.lean`)
- [x] Decoder (`LeanBdiff/Vcdiff/Decoder.lean`)
- [x] Unit tests (`Test/VcdiffTest.lean`)
- [x] Build and fix compilation errors
- [x] Run tests and fix failures (9/9 pass)

### Deferred
- [ ] Test with real xdelta3-produced patches (xdelta3 not available in sandbox)

## Phase 2: Basic Encoder

### Next Steps (in order)
1. Rolling hash for source fingerprinting
2. Source index (hash table mapping fingerprints to positions)
3. String matching (scan target, find matches, extend greedily)
4. Instruction selection (matches/literals -> ADD/COPY/RUN)
5. Address cache encoding
6. Code table encoding (instruction pairs -> opcodes)
7. VCDIFF serialization
8. Roundtrip tests (encode with ours, decode with xdelta3 and vice versa)

## Phase 3: Performance Optimization
Not started.
