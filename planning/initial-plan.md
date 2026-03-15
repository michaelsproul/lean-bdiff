# Feasibility Study: VCDIFF-Compatible Binary Diff in Lean 4

## Executive Summary

Implementing a VCDIFF-compatible binary diff encoder/decoder in Lean 4 is **feasible** and an
interesting fit for the language. The core challenges are (1) achieving competitive performance
for the hash-table-heavy matching algorithm and (2) correctly implementing the VCDIFF wire
format. Lean 4's `ByteArray`, compiled-native performance, and C FFI provide a viable path.
Formal verification of the decoder (roundtrip correctness) is a bonus unique to Lean.

---

## 1. VCDIFF Format Overview (RFC 3284)

VCDIFF is a generic binary delta format standardized in RFC 3284. A VCDIFF file encodes the
differences between a **source** (old) file and a **target** (new) file.

### 1.1 File Structure

```
Header:
  Magic bytes: 0xD6 0xC3 0xC4 0x00   (4 bytes)
  Hdr_Indicator: uint8               (flags: secondary compressor, code table, app data)
  [Secondary compressor ID]          (if flag set)
  [Code table length + data]         (if flag set; almost never used)
  [App data length + data]           (if flag set)

Window 1:
  Win_Indicator: uint8               (VCD_SOURCE=0x01, VCD_TARGET=0x02, or 0x00)
  [Source segment length + position] (if VCD_SOURCE or VCD_TARGET)
  Delta encoding:
    Length of delta encoding
    Target window length
    Delta_Indicator: uint8           (flags for secondary compression of sections)
    Length of data section
    Length of inst section
    Length of addr section
    Data section (raw bytes for ADD/RUN)
    Inst section (instruction opcodes)
    Addr section (addresses for COPY)

Window 2...N:
  (same structure)
```

### 1.2 Delta Instructions

Three primitive instructions:

| Instruction | Meaning |
|-------------|---------|
| **ADD(size)** | Append `size` bytes from the data section to the target |
| **COPY(size, addr)** | Copy `size` bytes from source or previously-decoded target |
| **RUN(size)** | Repeat a single byte (from data section) `size` times |

Instructions are encoded via a **code table** that maps single-byte opcodes to one or two
instructions. The default code table (used by xdelta3) encodes common instruction pairs
efficiently (e.g., COPY+ADD in a single byte for small sizes).

### 1.3 Address Encoding

COPY addresses use a **cache** system with 9 modes (default configuration):

| Mode | Name | Encoding | Description |
|------|------|----------|-------------|
| 0 | VCD_SELF | varint | Absolute address from start of source/target window |
| 1 | VCD_HERE | varint | `here - value` (relative to current decode position) |
| 2-5 | NEAR 0-3 | varint | `near_array[mode-2] + value` (offset from cached addr) |
| 6-8 | SAME 0-2 | 1 byte | `same_array[mode_idx * 256 + byte]` (exact cache hit) |

**NEAR cache**: Circular buffer of `s_near=4` entries storing recent COPY addresses. After
each COPY, the address is pushed into `near_array[next_slot]` and the slot advances.

**SAME cache**: `s_same=3` banks of 256 entries (768 total). After each COPY,
`same_array[addr % 768] = addr`. A SAME mode encodes the address as a single byte.

Both caches are **reset to zero** at the start of each window. Total modes =
`2 + s_near + s_same = 9`.

### 1.4 Default Code Table Layout

The 256-entry default code table is partitioned as:

| Index | Inst 1 | Inst 2 | Description |
|-------|--------|--------|-------------|
| 0 | RUN size=0 | NOOP | Run (size read as varint from inst stream) |
| 1 | ADD size=0 | NOOP | Add (size read as varint from inst stream) |
| 2-18 | ADD size=1..17 | NOOP | Immediate-size adds |
| 19-162 | COPY size=0,4..18 mode=0..8 | NOOP | Single copies (16 entries/mode) |
| 163-246 | ADD size=1..4 | COPY size=4..6 mode=0..8 | Double ADD+COPY |
| 247-255 | COPY size=4 mode=0..8 | ADD size=1 | Double COPY+ADD |

Key: `MIN_MATCH=4`. When table entry has `size=0`, the actual size is read as a varint
immediately following the opcode byte.

### 1.5 Integer Encoding

All variable-length integers use a **base-128 (varint)** encoding where the high bit is a
continuation flag. Big-endian order (most significant group first). A 32-bit integer
requires at most 5 bytes.

---

## 2. xdelta3 Compatibility Requirements

### 2.1 What xdelta3 Can Decode (from source code analysis)

xdelta3 is a **strict** VCDIFF decoder with notable limitations:

- **Custom code tables**: `VCD_CODETABLE` is parsed but returns `XD3_UNIMPLEMENTED` — support
  was removed. We MUST use the default code table.
- **VCD_TARGET**: Parsed but returns `XD3_UNIMPLEMENTED` — never implemented. We MUST use only
  `VCD_SOURCE` for copy windows.
- **Unknown bits**: Header indicator bits 3-7, window indicator bits 3-7, and delta indicator
  bits 3-7 must all be zero (rejected with `VCD_INVHDR`).
- **Version**: Must be exactly `0x00`.
- **Secondary compression**: Supported for IDs `1` (DJW), `2` (LZMA), `16` (FGK), but these
  are xdelta3-specific non-standard IDs. For portability, do NOT use secondary compression.
- **VCD_ADLER32**: An xdelta3 extension (bit 2 of `Win_Indicator`), not in the original RFC.
  Optional but recommended. 4-byte big-endian Adler32 of target window data.
- **Encoding length validation**: xdelta3 verifies that `enc_len` exactly equals
  `1 + sizeof(tgt_len) + sizeof(data_len) + sizeof(inst_len) + sizeof(addr_len) +
  data_len + inst_len + addr_len + (adler32 ? 4 : 0)`.
- **VCD_APPHEADER**: Safe to use; xdelta3 reads and stores it.

### 2.2 Minimal Viable Encoder Output

A minimal encoder that xdelta3 can decode needs:
1. Correct VCDIFF header with `Hdr_Indicator = 0x00`
2. One or more windows using `VCD_SOURCE` (or `0x00` for no-source)
3. Default code table opcodes
4. Standard address cache encoding
5. Correct varint encoding for all lengths

### 2.3 xdelta3's Encoder Internals

xdelta3 uses a **two-level checksum** approach:

1. **Large checksum** (source matching): Rolling polynomial hash over `LLOOK=9` bytes.
   Update: `new = multiplier * old - power * old_byte + new_byte` where
   `multiplier = 1597334677` (32-bit). Checked every `LSTEP` bytes of target.

2. **Small checksum** (target self-matching): 4-byte hash (read 4 bytes as uint32, multiply
   by LCG constant). Used with an `sprev` chain (262144 entries) for collision resolution.

**Matcher configurations by compression level:**

| Level | Name | LLOOK | LSTEP | SCHAIN | MAXLAZY | LONGENOUGH |
|-------|------|-------|-------|--------|---------|------------|
| 1 | fastest | 9 | 26 | 1 | 6 | 6 |
| 2 | faster | 9 | 15 | 1 | 18 | 18 |
| 3 | fast | 9 | 8 | 4 | 18 | 35 |
| **6** | **default** | **9** | **3** | **8** | **36** | **70** |
| 9 | slow | 9 | 2 | 44 | 90 | 70 |

**Default settings**: Target window 8 MB, source window 64 MB, IOPT buffer 32768 entries.

**Instruction optimization**: Non-greedy IOPT buffer resolves overlapping matches. Lazy
matching searches after each match for a potentially better one. Double instructions
(ADD+COPY or COPY+ADD in one opcode byte) are exploited automatically.

### 2.4 Compatibility Gotchas

1. **VCD_TARGET is dead code** in xdelta3 — despite being in RFC 3284, it was never
   implemented. Only `VCD_SOURCE` works.
2. **Custom code tables are dead code** — `VCD_CODETABLE` returns `XD3_UNIMPLEMENTED`.
3. **VCD_ADLER32 is non-standard** — other strict VCDIFF decoders may reject bit 2 of
   `Win_Indicator`. Consider making it optional in our encoder.
4. **Secondary compressor IDs are non-standard** — DJW=1, LZMA=2, FGK=16 are xdelta3-
   specific. Other VCDIFF decoders will reject them.
5. **32-bit vs 64-bit offsets** — xdelta3 can be compiled either way. Source segment offsets
   use the corresponding varint width. 32-bit builds can't handle source files > 4 GB.
6. **`XD3_HARDMAXWINSIZE`** — xdelta3 rejects windows exceeding this safety limit.
7. **MIN_MATCH = 4** — the default code table assumes this; all COPY sizes start at 4.

---

## 3. Core Algorithm Design

### 3.1 Encoder Pipeline

```
Source file ──┐
              ├──► Hash table construction ──► String matching ──► Instruction selection
Target file ──┘                                                          │
                                                                         ▼
                                                          VCDIFF encoding & output
```

**Step 1: Build hash index over source.** For each position in the source, compute a hash of
a small window (e.g., 4-16 bytes) and insert into a hash table mapping hash → source position.

**Step 2: Scan target with rolling hash.** Slide a window over the target, computing rolling
hashes. For each position, look up the hash in the source index. On a hit, extend the match
greedily in both directions.

**Step 3: Select instructions.** Convert the sequence of matches and unmatched regions into
COPY and ADD instructions. Apply the default code table to encode instruction pairs efficiently.

**Step 4: Encode.** Serialize instructions, data, and addresses into the three VCDIFF sections,
apply address caching, and emit the window.

### 3.2 Decoder Pipeline

The decoder is simpler:
1. Parse VCDIFF header
2. For each window: parse sections, replay instructions (ADD copies from data section, COPY
   copies from source or previously-decoded target, RUN repeats a byte)
3. Output reconstructed target

### 3.3 Key Data Structures

| Structure | Purpose | Size | Performance Need |
|-----------|---------|------|-----------------|
| **Large hash table** | Source fingerprint → position | `src_size / LSTEP` entries | O(1) lookup, millions of entries |
| **Small hash table** | Target self-match index | Power-of-2, ~window size | O(1) lookup with chaining |
| **sprev chain** | Hash collision linked list | 262144 entries (default) | Sequential scan, depth-limited |
| **IOPT buffer** | Instruction optimization queue | 32768 entries | Ring buffer, sequential |
| **Address cache** | NEAR (4) + SAME (768) entries | 772 entries total | Tiny, array lookup |
| **Code table** | Opcode → instruction pair mapping | 256 entries, static | Array lookup |
| **ByteArray buffers** | Source, target, data/inst/addr sections | Variable | Sequential + bulk copy |

---

## 4. Lean 4 Suitability Assessment

### 4.1 ByteArray Performance

Lean 4's `ByteArray` is backed by a C array of bytes. Key characteristics:
- **O(1) indexed access** via `ByteArray.get!` / `ByteArray.uget`
- **O(1) amortized push** via `ByteArray.push` (with reallocation)
- **Destructive update** when reference count is 1 (common in linear usage patterns)
- **`ByteArray.copySlice`** for bulk copying between arrays
- Efficient creation via `ByteArray.mkEmpty` with capacity hints

This is well-suited for binary diff workloads. The key is to ensure linear usage patterns so
Lean's reference counting triggers in-place mutation rather than copying.

### 4.2 HashMap Performance

`Std.HashMap` in Lean 4 (from Batteries/Std4) provides:
- Robin Hood hashing with linear probing
- Amortized O(1) insert and lookup
- Suitable for the source index hash table

For the source index, we need a multi-map (multiple source positions per hash). Options:
- `Std.HashMap UInt64 (Array UInt32)` — hash to list of positions
- Custom open-addressing hash table via `Array` for better cache locality
- C FFI hash table if Lean's overhead proves too high

**Assessment**: Std.HashMap should be adequate for a first implementation. If profiling shows
it's a bottleneck, a custom array-based hash table or C FFI fallback is straightforward.

### 4.3 Compiled Performance

Lean 4 compiles to C, then to native code via a system C compiler. Characteristics:
- Numeric operations on `UInt8`, `UInt32`, `UInt64` compile to native machine operations
- No garbage collection overhead for `ByteArray` in linear usage (RC-based)
- The compiler performs lambda lifting, common subexpression elimination, and dead code
  elimination
- Realistic expectation: **2-5x slower than hand-tuned C** for byte-level algorithms, which
  is acceptable for a diff tool (typically I/O bound for large files)

### 4.4 C FFI

Lean 4 has excellent C FFI support:
- `@[extern "c_function_name"]` attribute to bind Lean declarations to C functions
- Lake supports `moreLinkArgs` and `moreLeancArgs` for linking C code
- Can pass `ByteArray` to C as a pointer (via `ByteArray.data` or through the runtime API)

This provides an escape hatch: if the rolling hash or matching loop proves too slow in pure
Lean, the inner loop can be implemented in C and called from Lean.

### 4.5 IO and File Handling

- `IO.FS.readBinFile` reads an entire file into a `ByteArray`
- `IO.FS.writeBinFile` writes a `ByteArray` to a file
- `IO.FS.Handle` supports streaming reads/writes for large files
- No built-in mmap, but can be added via FFI if needed

For files up to ~100 MB, reading entirely into `ByteArray` is practical. For larger files,
streaming with windowed processing (like xdelta3's `-B` flag) is needed.

### 4.6 Unique Advantages of Lean

- **Formal verification**: We can prove that `decode (encode source target) = target`, giving
  mathematical certainty of correctness. This is uniquely valuable for a diff/patch tool where
  data integrity matters.
- **Proven bounds**: We can prove that array accesses are in-bounds, eliminating a class of
  bugs common in C diff implementations.
- **Clean specification**: The VCDIFF format can be specified as a pure function, with the
  encoder/decoder proved correct against that spec.

---

## 5. Implementation Plan

### Phase 1: VCDIFF Decoder (Foundation)

Build the decoder first — it's simpler and provides a test oracle.

1. **Varint codec**: Encode/decode base-128 variable-length integers
2. **VCDIFF parser**: Parse header, windows, and delta sections
3. **Instruction decoder**: Interpret opcodes via the default code table
4. **Address cache**: Implement SELF/NEAR address decoding
5. **Delta application**: Reconstruct target from source + delta
6. **Tests**: Decode patches produced by xdelta3 and verify output matches

### Phase 2: Basic Encoder

1. **Rolling hash**: Implement Rabin fingerprint or similar rolling hash over byte windows
2. **Source index**: Build hash table mapping fingerprints to source positions
3. **String matching**: Scan target, find matches in source, extend greedily
4. **Instruction selection**: Convert matches/literals to ADD/COPY/RUN instructions
5. **Address cache encoding**: Encode COPY addresses using SELF/NEAR cache
6. **Code table encoding**: Map instruction pairs to single-byte opcodes
7. **VCDIFF serialization**: Emit valid VCDIFF output
8. **Roundtrip tests**: Encode with our encoder, decode with xdelta3 (and vice versa)

### Phase 3: Performance Optimization

1. **Profiling**: Identify bottlenecks (likely hash table lookups and matching)
2. **Hash table tuning**: Custom array-based hash table if Std.HashMap is slow
3. **C FFI inner loops**: Rolling hash and/or match extension in C if needed
4. **Windowed processing**: Support large files via windowed source/target processing
5. **Lazy matching**: Implement look-ahead to find better matches (like xdelta3 `-6` and above)

### Phase 4: Verification (Optional but Valuable)

1. **Decoder correctness**: Prove the decoder is a left inverse of the encoder
2. **Format conformance**: Prove emitted bytes satisfy VCDIFF structural invariants
3. **Bounds safety**: Prove all array accesses are in-bounds

---

## 6. Risk Assessment

| Risk | Likelihood | Impact | Mitigation |
|------|-----------|--------|------------|
| Hash table too slow in pure Lean | Medium | High | C FFI fallback for inner loop |
| ByteArray copying overhead | Low | Medium | Ensure linear usage; use `copySlice` |
| VCDIFF encoding edge cases | Medium | Medium | Extensive roundtrip testing vs xdelta3 |
| Large file memory usage | Medium | Low | Windowed processing (Phase 3) |
| Mathlib dependency too heavy | Low | Low | Likely only need Std; can drop mathlib if unused |

---

## 7. Dependencies and Build

### Current Setup
- Lean 4 v4.29.0-rc6
- Mathlib v4.29.0-rc6 (likely overkill; may want to slim down to just Std/Batteries)

### Recommended Dependencies
- **Std4/Batteries**: For `HashMap`, `BitVec`, and other standard utilities
- **No external binary deps initially**: Pure Lean for Phase 1-2
- **Optional C shim**: For Phase 3 performance, added via Lake's `lean_lib` + `moreLinkArgs`

### Build Targets
- `LeanBdiff` library (encoder/decoder API)
- `bdiff` CLI executable (encode/decode commands)
- Test suite (roundtrip tests, conformance tests)

---

## 8. Conclusion

**Verdict: Feasible and worthwhile.**

The VCDIFF format is well-specified and not overly complex. Lean 4's `ByteArray` and compiled
performance are adequate for a practical implementation. The C FFI provides a safety net for
performance-critical sections. The unique ability to formally verify correctness makes this
an interesting project that goes beyond what a C/Rust implementation offers.

A reasonable MVP (decoder + basic encoder producing xdelta3-compatible patches) can be built
in pure Lean 4 without exotic dependencies. Performance can be iteratively improved with
profiling-guided optimization.

### Estimated Scope
- **Phase 1** (Decoder): ~10-15 source files, core VCDIFF parsing and application
- **Phase 2** (Encoder): ~10-15 additional files, matching algorithm and VCDIFF emission
- **Phase 3** (Optimization): Iterative, guided by profiling
- **Phase 4** (Verification): Optional, can be done incrementally alongside Phase 1-2
