/-
  Tests for the VCDIFF decoder.
-/
import LeanBdiff.Vcdiff

open LeanBdiff.Vcdiff

-- ## Varint tests

-- Helper: decode a varint from a raw byte array, returning Option Nat.
def decodeVarint (bytes : Array UInt8) : Option Nat :=
  match Varint.decode ⟨⟨bytes⟩, 0⟩ with
  | .ok (v, _) => some v
  | .error _ => none

#guard decodeVarint #[0x00] == some 0
#guard decodeVarint #[0x01] == some 1
#guard decodeVarint #[0x7F] == some 127
#guard decodeVarint #[0x81, 0x00] == some 128
#guard decodeVarint #[0x81, 0x01] == some 129
#guard decodeVarint #[0x87, 0x68] == some 1000
#guard decodeVarint #[0x82, 0x2C] == some 300

-- Varint roundtrip
def varintRoundtrip (n : Nat) : Bool :=
  let encoded := Varint.encode n
  match Varint.decode ⟨encoded, 0⟩ with
  | .ok (v, c) => v == n && c.pos == encoded.size
  | .error _ => false

#guard varintRoundtrip 0
#guard varintRoundtrip 1
#guard varintRoundtrip 127
#guard varintRoundtrip 128
#guard varintRoundtrip 255
#guard varintRoundtrip 256
#guard varintRoundtrip 1000
#guard varintRoundtrip 16383
#guard varintRoundtrip 16384
#guard varintRoundtrip 1000000
#guard varintRoundtrip 268435455

-- Varint encoded size matches actual length
#guard Varint.encodedSize 0 == (Varint.encode 0).size
#guard Varint.encodedSize 1 == (Varint.encode 1).size
#guard Varint.encodedSize 127 == (Varint.encode 127).size
#guard Varint.encodedSize 128 == (Varint.encode 128).size
#guard Varint.encodedSize 1000000 == (Varint.encode 1000000).size

-- ## Code table tests

#guard CodeTable.defaultTable.size == 256

-- Index 0: RUN size=0 / NOOP
#guard (CodeTable.lookup 0).inst1.type == .run
#guard (CodeTable.lookup 0).inst1.size == 0
#guard (CodeTable.lookup 0).inst2.type == .noop

-- Index 1: ADD size=0 / NOOP
#guard (CodeTable.lookup 1).inst1.type == .add
#guard (CodeTable.lookup 1).inst1.size == 0
#guard (CodeTable.lookup 1).inst2.type == .noop

-- Index 2: ADD size=1 / NOOP
#guard (CodeTable.lookup 2).inst1.type == .add
#guard (CodeTable.lookup 2).inst1.size == 1
#guard (CodeTable.lookup 2).inst2.type == .noop

-- Index 18: ADD size=17 / NOOP
#guard (CodeTable.lookup 18).inst1.type == .add
#guard (CodeTable.lookup 18).inst1.size == 17
#guard (CodeTable.lookup 18).inst2.type == .noop

-- Index 19: COPY size=0 mode=0 / NOOP
#guard (CodeTable.lookup 19).inst1 == ⟨.copy 0, 0⟩
#guard (CodeTable.lookup 19).inst2.type == .noop

-- Index 247: COPY size=4 mode=0 / ADD size=1
#guard (CodeTable.lookup 247).inst1 == ⟨.copy 0, 4⟩
#guard (CodeTable.lookup 247).inst2 == ⟨.add, 1⟩

-- Index 255: COPY size=4 mode=8 / ADD size=1
#guard (CodeTable.lookup 255).inst1 == ⟨.copy 8, 4⟩
#guard (CodeTable.lookup 255).inst2 == ⟨.add, 1⟩

-- ## Adler32 tests

#guard Decoder.adler32 ByteArray.empty == 1
#guard Decoder.adler32 ⟨#[0x61, 0x62, 0x63]⟩ == 0x024d0127

-- ## End-to-end decoder tests

-- Helper to check decode result
def decodeOk (patch : ByteArray) (source : ByteArray := ByteArray.empty) : Option ByteArray :=
  match Decoder.decode patch source with
  | .ok result => some result
  | .error _ => none

def decodeErr (patch : ByteArray) (source : ByteArray := ByteArray.empty) : Option DecodeError :=
  match Decoder.decode patch source with
  | .ok _ => none
  | .error e => some e

-- Build a minimal VCDIFF patch with no source, containing a single ADD instruction.
def mkAddOnlyPatch (targetData : ByteArray) : ByteArray := Id.run do
  let instSection := ByteArray.mk #[1] ++ Varint.encode targetData.size
  let dataSection := targetData
  let addrSection := ByteArray.empty

  let targetLenEnc := Varint.encode targetData.size
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  -- RFC 3284 order: target_len, delta_indicator, data_len, inst_len, addr_len, then sections
  let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
    ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size
  let window := ByteArray.mk #[0x00] ++ encLenEnc ++ deltaBody
  let header := magic ++ ByteArray.mk #[0x00, 0x00]
  header ++ window

-- Build a VCDIFF patch with source and a COPY instruction.
def mkCopyPatch (sourceLen copyAddr copyLen : Nat) : ByteArray := Id.run do
  let instSection := ByteArray.mk #[19] ++ Varint.encode copyLen
  let dataSection := ByteArray.empty
  let addrSection := Varint.encode copyAddr

  let targetLenEnc := Varint.encode copyLen
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
    ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size
  let sourceSegLenEnc := Varint.encode sourceLen
  let sourceSegOffEnc := Varint.encode 0

  let window := ByteArray.mk #[0x01]
    ++ sourceSegLenEnc ++ sourceSegOffEnc
    ++ encLenEnc ++ deltaBody

  let header := magic ++ ByteArray.mk #[0x00, 0x00]
  header ++ window

-- Build a VCDIFF patch with ADD then COPY.
def mkAddThenCopyPatch (addData : ByteArray) (sourceLen copyAddr copyLen : Nat)
    : ByteArray := Id.run do
  let addInst := if addData.size ≥ 1 && addData.size ≤ 17 then
    ByteArray.mk #[(1 + addData.size).toUInt8]
  else
    ByteArray.mk #[1] ++ Varint.encode addData.size

  let copyInst := ByteArray.mk #[19] ++ Varint.encode copyLen

  let instSection := addInst ++ copyInst
  let dataSection := addData
  let addrSection := Varint.encode copyAddr

  let targetLen := addData.size + copyLen
  let targetLenEnc := Varint.encode targetLen
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
    ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size
  let sourceSegLenEnc := Varint.encode sourceLen
  let sourceSegOffEnc := Varint.encode 0

  let window := ByteArray.mk #[0x01]
    ++ sourceSegLenEnc ++ sourceSegOffEnc
    ++ encLenEnc ++ deltaBody

  let header := magic ++ ByteArray.mk #[0x00, 0x00]
  header ++ window

-- Build a VCDIFF patch with a RUN instruction.
def mkRunPatch (byte : UInt8) (count : Nat) : ByteArray := Id.run do
  let instSection := ByteArray.mk #[0] ++ Varint.encode count
  let dataSection := ByteArray.mk #[byte]
  let addrSection := ByteArray.empty

  let targetLenEnc := Varint.encode count
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
    ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size
  let window := ByteArray.mk #[0x00] ++ encLenEnc ++ deltaBody
  let header := magic ++ ByteArray.mk #[0x00, 0x00]
  header ++ window

-- Use main for runtime tests since partial functions may not evaluate in #guard
def main : IO Unit := do
  -- Test: empty patch
  let emptyPatch := magic ++ ByteArray.mk #[0x00, 0x00]
  match Decoder.decode emptyPatch with
  | .ok result =>
    if result == ByteArray.empty then IO.println "PASS: empty patch"
    else IO.println s!"FAIL: empty patch, got {result.size} bytes"
  | .error e => IO.println s!"FAIL: empty patch, error: {e}"

  -- Test: invalid magic
  let badMagic := ByteArray.mk #[0x00, 0x00, 0x00, 0x00, 0x00]
  match Decoder.decode badMagic with
  | .ok _ => IO.println "FAIL: invalid magic accepted"
  | .error .invalidMagic => IO.println "PASS: invalid magic rejected"
  | .error e => IO.println s!"FAIL: invalid magic, wrong error: {e}"

  -- Test: bad version
  let badVer := ByteArray.mk #[0xD6, 0xC3, 0xC4, 0x01, 0x00]
  match Decoder.decode badVer with
  | .ok _ => IO.println "FAIL: bad version accepted"
  | .error (.unsupportedVersion _) => IO.println "PASS: bad version rejected"
  | .error e => IO.println s!"FAIL: bad version, wrong error: {e}"

  -- Test: ADD-only patch
  let target := ByteArray.mk #[0x48, 0x65, 0x6C, 0x6C, 0x6F]  -- "Hello"
  let patch := mkAddOnlyPatch target
  match Decoder.decode patch with
  | .ok result =>
    if result == target then IO.println "PASS: ADD-only"
    else IO.println s!"FAIL: ADD-only, got {result.toList} expected {target.toList}"
  | .error e => IO.println s!"FAIL: ADD-only, error: {e}"

  -- Test: COPY from source
  let source := ByteArray.mk #[0x41, 0x42, 0x43, 0x44, 0x45]  -- "ABCDE"
  let copyPatch := mkCopyPatch source.size 1 3
  match Decoder.decode copyPatch source with
  | .ok result =>
    let expected := ByteArray.mk #[0x42, 0x43, 0x44]
    if result == expected then IO.println "PASS: COPY from source"
    else IO.println s!"FAIL: COPY, got {result.toList} expected {expected.toList}"
  | .error e => IO.println s!"FAIL: COPY, error: {e}"

  -- Test: RUN
  let runPatch := mkRunPatch 0x41 5
  match Decoder.decode runPatch with
  | .ok result =>
    let expected := ByteArray.mk #[0x41, 0x41, 0x41, 0x41, 0x41]
    if result == expected then IO.println "PASS: RUN"
    else IO.println s!"FAIL: RUN, got {result.toList} expected {expected.toList}"
  | .error e => IO.println s!"FAIL: RUN, error: {e}"

  -- Test: ADD then COPY
  let addData := ByteArray.mk #[0x58, 0x59]  -- "XY"
  let acPatch := mkAddThenCopyPatch addData source.size 2 3
  match Decoder.decode acPatch source with
  | .ok result =>
    let expected := ByteArray.mk #[0x58, 0x59, 0x43, 0x44, 0x45]
    if result == expected then IO.println "PASS: ADD then COPY"
    else IO.println s!"FAIL: ADD+COPY, got {result.toList} expected {expected.toList}"
  | .error e => IO.println s!"FAIL: ADD+COPY, error: {e}"

  -- Test: self-referential COPY (overlapping copy from target being produced)
  do
    let source := ByteArray.mk #[0x41, 0x42]  -- "AB"
    -- ADD "CD" (opcode 3 = ADD size=2), then COPY size=4 mode=0 (opcode 19 + varint 4)
    let instSection := ByteArray.mk #[3, 19] ++ Varint.encode 4
    let dataSection := ByteArray.mk #[0x43, 0x44]  -- "CD"
    let addrSection := Varint.encode 2  -- address 2 = start of target in combined window

    let targetLen := 6
    let targetLenEnc := Varint.encode targetLen
    let dataLenEnc := Varint.encode dataSection.size
    let instLenEnc := Varint.encode instSection.size
    let addrLenEnc := Varint.encode addrSection.size

    let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
      ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
      ++ dataSection ++ instSection ++ addrSection

    let encLenEnc := Varint.encode deltaBody.size
    let sourceSegLenEnc := Varint.encode source.size
    let sourceSegOffEnc := Varint.encode 0

    let window := ByteArray.mk #[0x01]
      ++ sourceSegLenEnc ++ sourceSegOffEnc
      ++ encLenEnc ++ deltaBody

    let patch := magic ++ ByteArray.mk #[0x00, 0x00] ++ window

    match Decoder.decode patch source with
    | .ok result =>
      let expected := ByteArray.mk #[0x43, 0x44, 0x43, 0x44, 0x43, 0x44]
      if result == expected then IO.println "PASS: self-referential COPY"
      else IO.println s!"FAIL: self-copy, got {result.toList} expected {expected.toList}"
    | .error e => IO.println s!"FAIL: self-copy, error: {e}"

  -- Test: double instruction opcode (COPY size=4 mode=0 / ADD size=1 = opcode 247)
  do
    let source := ByteArray.mk #[0x41, 0x42, 0x43, 0x44, 0x45]  -- "ABCDE"
    let instSection := ByteArray.mk #[247]
    let dataSection := ByteArray.mk #[0x5A]  -- 'Z' for the ADD
    let addrSection := Varint.encode 1  -- copy from source position 1

    let targetLen := 5  -- 4 (COPY) + 1 (ADD)
    let targetLenEnc := Varint.encode targetLen
    let dataLenEnc := Varint.encode dataSection.size
    let instLenEnc := Varint.encode instSection.size
    let addrLenEnc := Varint.encode addrSection.size

    let deltaBody := targetLenEnc ++ ByteArray.mk #[0x00]
      ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
      ++ dataSection ++ instSection ++ addrSection

    let encLenEnc := Varint.encode deltaBody.size
    let sourceSegLenEnc := Varint.encode source.size
    let sourceSegOffEnc := Varint.encode 0

    let window := ByteArray.mk #[0x01]
      ++ sourceSegLenEnc ++ sourceSegOffEnc
      ++ encLenEnc ++ deltaBody

    let patch := magic ++ ByteArray.mk #[0x00, 0x00] ++ window

    match Decoder.decode patch source with
    | .ok result =>
      let expected := ByteArray.mk #[0x42, 0x43, 0x44, 0x45, 0x5A]
      if result == expected then IO.println "PASS: double instruction"
      else IO.println s!"FAIL: double inst, got {result.toList} expected {expected.toList}"
    | .error e => IO.println s!"FAIL: double inst, error: {e}"

  -- ## Encoder roundtrip tests (encode then decode with our decoder)

  -- Test: encode identical files (should produce valid patch with no COPY/ADD needed)
  do
    let source := ByteArray.mk #[0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, 0x48]
    let target := source
    let patch := Encoder.encode source target
    match Decoder.decode patch source with
    | .ok result =>
      if result == target then IO.println "PASS: roundtrip identical"
      else IO.println s!"FAIL: roundtrip identical, got {result.size} bytes, expected {target.size}"
    | .error e => IO.println s!"FAIL: roundtrip identical, error: {e}"

  -- Test: encode with no source (all ADD)
  do
    let source := ByteArray.empty
    let target := ByteArray.mk #[0x48, 0x65, 0x6C, 0x6C, 0x6F]
    let patch := Encoder.encode source target
    match Decoder.decode patch source with
    | .ok result =>
      if result == target then IO.println "PASS: roundtrip no-source"
      else IO.println s!"FAIL: roundtrip no-source, got {result.toList} expected {target.toList}"
    | .error e => IO.println s!"FAIL: roundtrip no-source, error: {e}"

  -- Test: encode with partial overlap
  do
    let source := "Hello, World!".toUTF8
    let target := "Hello, Lean 4!".toUTF8
    let patch := Encoder.encode source target
    match Decoder.decode patch source with
    | .ok result =>
      if result == target then IO.println "PASS: roundtrip partial overlap"
      else IO.println s!"FAIL: roundtrip overlap, sizes {result.size} vs {target.size}"
    | .error e => IO.println s!"FAIL: roundtrip overlap, error: {e}"

  -- Test: encode with completely different content
  do
    let source := "AAAA".toUTF8
    let target := "ZZZZ".toUTF8
    let patch := Encoder.encode source target
    match Decoder.decode patch source with
    | .ok result =>
      if result == target then IO.println "PASS: roundtrip different"
      else IO.println s!"FAIL: roundtrip different"
    | .error e => IO.println s!"FAIL: roundtrip different, error: {e}"

  -- Test: encode larger data with repetition
  do
    let mut srcArr : ByteArray := ByteArray.empty
    for i in [:256] do
      srcArr := srcArr.push (i % 256).toUInt8
    let mut tgtArr : ByteArray := ByteArray.empty
    for i in [:256] do
      tgtArr := tgtArr.push ((i + 3) % 256).toUInt8
    let patch := Encoder.encode srcArr tgtArr
    match Decoder.decode patch srcArr with
    | .ok result =>
      if result == tgtArr then IO.println "PASS: roundtrip 256-byte shifted"
      else IO.println s!"FAIL: roundtrip 256-byte, sizes {result.size} vs {tgtArr.size}"
    | .error e => IO.println s!"FAIL: roundtrip 256-byte, error: {e}"

  -- ## xdelta3 compatibility tests (our encoder -> xdelta3 decoder)
  IO.println ""
  IO.println "--- xdelta3 compatibility ---"

  -- Helper: write files and test with xdelta3
  let testXdelta3 := fun (name : String) (source target : ByteArray) => do
    let srcFile := s!"/tmp/bdiff_test_src_{name}"
    let tgtFile := s!"/tmp/bdiff_test_tgt_{name}"
    let patchFile := s!"/tmp/bdiff_test_patch_{name}"
    let outFile := s!"/tmp/bdiff_test_out_{name}"

    IO.FS.writeBinFile srcFile source
    IO.FS.writeBinFile tgtFile target

    -- Encode with our encoder
    let patch := Encoder.encode source target
    IO.FS.writeBinFile patchFile patch

    -- Decode with xdelta3
    let result ← IO.Process.output {
      cmd := "xdelta3"
      args := #["-d", "-f", "-s", srcFile, patchFile, outFile]
    }
    if result.exitCode == 0 then
      let decoded ← IO.FS.readBinFile outFile
      if decoded == target then IO.println s!"PASS: xdelta3 {name}"
      else IO.println s!"FAIL: xdelta3 {name}, decoded {decoded.size} bytes vs expected {target.size}"
    else
      IO.println s!"FAIL: xdelta3 {name}, exit={result.exitCode}: {result.stderr}"

  testXdelta3 "identical" "ABCDEFGH".toUTF8 "ABCDEFGH".toUTF8
  testXdelta3 "nosource" ByteArray.empty "Hello".toUTF8
  testXdelta3 "overlap" "Hello, World!".toUTF8 "Hello, Lean 4!".toUTF8
  testXdelta3 "different" "AAAA".toUTF8 "ZZZZ".toUTF8

  -- ## Reverse: xdelta3 encoder -> our decoder
  IO.println ""
  IO.println "--- xdelta3 encode, our decode ---"

  let testXdelta3Reverse := fun (name : String) (source target : ByteArray) => do
    let srcFile := s!"/tmp/bdiff_rev_src_{name}"
    let tgtFile := s!"/tmp/bdiff_rev_tgt_{name}"
    let patchFile := s!"/tmp/bdiff_rev_patch_{name}"

    IO.FS.writeBinFile srcFile source
    IO.FS.writeBinFile tgtFile target

    -- Encode with xdelta3
    let result ← IO.Process.output {
      cmd := "xdelta3"
      args := #["-e", "-f", "-S", "none", "-s", srcFile, tgtFile, patchFile]
    }
    if result.exitCode != 0 then
      IO.println s!"FAIL: xdelta3 encode {name}, exit={result.exitCode}: {result.stderr}"
      return

    -- Decode with our decoder
    let patch ← IO.FS.readBinFile patchFile
    match Decoder.decode patch source with
    | .ok decoded =>
      if decoded == target then IO.println s!"PASS: reverse {name}"
      else IO.println s!"FAIL: reverse {name}, decoded {decoded.size} bytes vs expected {target.size}"
    | .error e => IO.println s!"FAIL: reverse {name}, error: {e}"

  testXdelta3Reverse "identical" "ABCDEFGH".toUTF8 "ABCDEFGH".toUTF8
  testXdelta3Reverse "overlap" "Hello, World!".toUTF8 "Hello, Lean 4!".toUTF8
  testXdelta3Reverse "different" "AAAA".toUTF8 "ZZZZ".toUTF8
  -- Larger test
  do
    let mut src := ByteArray.empty
    for i in [:1000] do src := src.push (i % 256).toUInt8
    let mut tgt := ByteArray.empty
    for i in [:1000] do tgt := tgt.push ((i * 3 + 7) % 256).toUInt8
    testXdelta3Reverse "1k" src tgt

  IO.println "Done."
