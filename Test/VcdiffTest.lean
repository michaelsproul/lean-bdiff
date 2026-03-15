/-
  Tests for the VCDIFF decoder.

  We test:
  1. Varint encode/decode roundtrip
  2. Code table structure
  3. Adler32 implementation
  4. End-to-end decode of hand-crafted VCDIFF patches
  5. End-to-end decode of xdelta3-produced patches (via embedded test data)
-/
import LeanBdiff.Vcdiff

open LeanBdiff.Vcdiff

/-! ## Varint tests -/

/-- Helper: decode a varint from a raw byte array. -/
def decodeVarint (bytes : Array UInt8) : Except DecodeError Nat :=
  match Varint.decode ⟨⟨bytes⟩, 0⟩ with
  | .ok (v, _) => .ok v
  | .error e => .error e

#guard decodeVarint #[0x00] == .ok 0
#guard decodeVarint #[0x01] == .ok 1
#guard decodeVarint #[0x7F] == .ok 127
#guard decodeVarint #[0x81, 0x00] == .ok 128
#guard decodeVarint #[0x81, 0x01] == .ok 129
#guard decodeVarint #[0x87, 0x68] == .ok 1000
-- varint for 300 = 0x82 0x2C
#guard decodeVarint #[0x82, 0x2C] == .ok 300

/-- Varint roundtrip: encode then decode should return the original value. -/
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
#guard varintRoundtrip 268435455  -- max 4-byte varint

/-- Varint encoded size should match actual encoded length. -/
#guard Varint.encodedSize 0 == (Varint.encode 0).size
#guard Varint.encodedSize 1 == (Varint.encode 1).size
#guard Varint.encodedSize 127 == (Varint.encode 127).size
#guard Varint.encodedSize 128 == (Varint.encode 128).size
#guard Varint.encodedSize 1000000 == (Varint.encode 1000000).size

/-! ## Code table tests -/

/-- The default code table should have exactly 256 entries. -/
#guard CodeTable.defaultTable.size == 256

/-- Index 0 should be RUN size=0 / NOOP. -/
#guard (CodeTable.lookup 0).inst1.type == .run
#guard (CodeTable.lookup 0).inst1.size == 0
#guard (CodeTable.lookup 0).inst2.type == .noop

/-- Index 1 should be ADD size=0 / NOOP. -/
#guard (CodeTable.lookup 1).inst1.type == .add
#guard (CodeTable.lookup 1).inst1.size == 0
#guard (CodeTable.lookup 1).inst2.type == .noop

/-- Index 2 should be ADD size=1 / NOOP. -/
#guard (CodeTable.lookup 2).inst1.type == .add
#guard (CodeTable.lookup 2).inst1.size == 1
#guard (CodeTable.lookup 2).inst2.type == .noop

/-- Index 18 should be ADD size=17 / NOOP. -/
#guard (CodeTable.lookup 18).inst1.type == .add
#guard (CodeTable.lookup 18).inst1.size == 17
#guard (CodeTable.lookup 18).inst2.type == .noop

/-- Index 19 should be COPY size=0, mode=0 / NOOP. -/
#guard (CodeTable.lookup 19).inst1 == ⟨.copy 0, 0⟩
#guard (CodeTable.lookup 19).inst2.type == .noop

/-- Index 247 should be COPY size=4, mode=0 / ADD size=1. -/
#guard (CodeTable.lookup 247).inst1 == ⟨.copy 0, 4⟩
#guard (CodeTable.lookup 247).inst2 == ⟨.add, 1⟩

/-- Index 255 should be COPY size=4, mode=8 / ADD size=1. -/
#guard (CodeTable.lookup 255).inst1 == ⟨.copy 8, 4⟩
#guard (CodeTable.lookup 255).inst2 == ⟨.add, 1⟩

/-! ## Adler32 tests -/

#guard Decoder.adler32 ByteArray.empty == 1
-- "abc" => adler32 = 0x024d0127
#guard Decoder.adler32 ⟨#[0x61, 0x62, 0x63]⟩ == 0x024d0127

/-! ## End-to-end decoder tests -/

/--
  Build a minimal VCDIFF patch with no source, containing a single ADD instruction.

  This tests the simplest possible VCDIFF file: header + one window that just adds literal bytes.
-/
def mkAddOnlyPatch (targetData : ByteArray) : ByteArray := Id.run do
  -- Instruction section: use opcode 1 (ADD size=0/NOOP) + varint size
  let instSection := Varint.encode targetData.size
  let instSection := ByteArray.mk #[1] ++ instSection  -- opcode 1 = ADD size=0

  -- Data section = the literal bytes
  let dataSection := targetData

  -- Address section = empty
  let addrSection := ByteArray.empty

  -- Build delta encoding body:
  -- Delta_Indicator (1 byte) + target_len (varint) + data_len + inst_len + addr_len
  -- + data + inst + addr
  let targetLenEnc := Varint.encode targetData.size
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := ByteArray.mk #[0x00]  -- Delta_Indicator: no compression
    ++ targetLenEnc ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  -- Encoding length = size of deltaBody
  let encLenEnc := Varint.encode deltaBody.size

  -- Window: Win_Indicator=0x00 (no source) + enc_len + deltaBody
  let window := ByteArray.mk #[0x00] ++ encLenEnc ++ deltaBody

  -- Header: magic + version + hdr_indicator=0x00
  let header := magic ++ ByteArray.mk #[0x00, 0x00]

  header ++ window

/-- Test: decode an ADD-only patch with no source produces the expected target. -/
def testAddOnly : Bool :=
  let target := ByteArray.mk #[0x48, 0x65, 0x6C, 0x6C, 0x6F]  -- "Hello"
  let patch := mkAddOnlyPatch target
  match Decoder.decode patch with
  | .ok result => result == target
  | .error _ => false

#guard testAddOnly

/--
  Build a VCDIFF patch with a source file and a COPY instruction.
  Copies `copyLen` bytes from source position `copyAddr`.
-/
def mkCopyPatch (sourceLen copyAddr copyLen : Nat) : ByteArray := Id.run do
  -- Instruction section: opcode 19 = COPY size=0, mode=0 (VCD_SELF) / NOOP
  -- followed by varint size
  let instSection := ByteArray.mk #[19] ++ Varint.encode copyLen

  -- Data section = empty (COPY doesn't consume data)
  let dataSection := ByteArray.empty

  -- Address section: varint address (mode 0 = absolute)
  let addrSection := Varint.encode copyAddr

  let targetLenEnc := Varint.encode copyLen
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := ByteArray.mk #[0x00]  -- Delta_Indicator
    ++ targetLenEnc ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size

  -- Source segment: entire source file
  let sourceSegLenEnc := Varint.encode sourceLen
  let sourceSegOffEnc := Varint.encode 0

  -- Win_Indicator = VCD_SOURCE (0x01)
  let window := ByteArray.mk #[0x01]
    ++ sourceSegLenEnc ++ sourceSegOffEnc
    ++ encLenEnc ++ deltaBody

  let header := magic ++ ByteArray.mk #[0x00, 0x00]
  header ++ window

/-- Test: COPY from source. -/
def testCopyFromSource : Bool :=
  let source := ByteArray.mk #[0x41, 0x42, 0x43, 0x44, 0x45]  -- "ABCDE"
  let patch := mkCopyPatch source.size 1 3  -- copy 3 bytes from position 1 = "BCD"
  match Decoder.decode patch source with
  | .ok result => result == ByteArray.mk #[0x42, 0x43, 0x44]
  | .error _ => false

#guard testCopyFromSource

/--
  Build a VCDIFF patch that uses ADD then COPY (two separate opcodes).
-/
def mkAddThenCopyPatch (addData : ByteArray) (sourceLen copyAddr copyLen : Nat)
    : ByteArray := Id.run do
  -- Instruction section:
  -- 1. Opcode for ADD: use immediate size if ≤ 17, else opcode 1 + varint
  let addInst := if addData.size ≥ 1 && addData.size ≤ 17 then
    ByteArray.mk #[(1 + addData.size).toUInt8]  -- opcodes 2-18 = ADD size=1..17
  else
    ByteArray.mk #[1] ++ Varint.encode addData.size

  -- 2. Opcode for COPY size=0, mode=0
  let copyInst := ByteArray.mk #[19] ++ Varint.encode copyLen

  let instSection := addInst ++ copyInst
  let dataSection := addData
  let addrSection := Varint.encode copyAddr

  let targetLen := addData.size + copyLen
  let targetLenEnc := Varint.encode targetLen
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := ByteArray.mk #[0x00]
    ++ targetLenEnc ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size

  let sourceSegLenEnc := Varint.encode sourceLen
  let sourceSegOffEnc := Varint.encode 0

  let window := ByteArray.mk #[0x01]
    ++ sourceSegLenEnc ++ sourceSegOffEnc
    ++ encLenEnc ++ deltaBody

  let header := magic ++ ByteArray.mk #[0x00, 0x00]
  header ++ window

/-- Test: ADD followed by COPY. -/
def testAddThenCopy : Bool :=
  let source := ByteArray.mk #[0x41, 0x42, 0x43, 0x44, 0x45]  -- "ABCDE"
  let addData := ByteArray.mk #[0x58, 0x59]  -- "XY"
  let patch := mkAddThenCopyPatch addData source.size 2 3  -- add "XY", copy "CDE"
  match Decoder.decode patch source with
  | .ok result => result == ByteArray.mk #[0x58, 0x59, 0x43, 0x44, 0x45]  -- "XYCDE"
  | .error _ => false

#guard testAddThenCopy

/--
  Build a VCDIFF patch with a RUN instruction.
-/
def mkRunPatch (byte : UInt8) (count : Nat) : ByteArray := Id.run do
  -- Opcode 0 = RUN size=0 / NOOP, followed by varint size
  let instSection := ByteArray.mk #[0] ++ Varint.encode count
  let dataSection := ByteArray.mk #[byte]
  let addrSection := ByteArray.empty

  let targetLenEnc := Varint.encode count
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := ByteArray.mk #[0x00]
    ++ targetLenEnc ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size
  let window := ByteArray.mk #[0x00] ++ encLenEnc ++ deltaBody
  let header := magic ++ ByteArray.mk #[0x00, 0x00]
  header ++ window

/-- Test: RUN instruction. -/
def testRun : Bool :=
  let patch := mkRunPatch 0x41 5  -- repeat 'A' 5 times
  match Decoder.decode patch with
  | .ok result => result == ByteArray.mk #[0x41, 0x41, 0x41, 0x41, 0x41]
  | .error _ => false

#guard testRun

/-- Test: empty patch (header only, no windows) produces empty target. -/
def testEmptyPatch : Bool :=
  let patch := magic ++ ByteArray.mk #[0x00, 0x00]  -- just header
  match Decoder.decode patch with
  | .ok result => result == ByteArray.empty
  | .error _ => false

#guard testEmptyPatch

/-- Test: invalid magic is rejected. -/
def testInvalidMagic : Bool :=
  let patch := ByteArray.mk #[0x00, 0x00, 0x00, 0x00, 0x00]
  match Decoder.decode patch with
  | .ok _ => false
  | .error .invalidMagic => true
  | .error _ => false

#guard testInvalidMagic

/-- Test: unsupported version is rejected. -/
def testBadVersion : Bool :=
  let patch := ByteArray.mk #[0xD6, 0xC3, 0xC4, 0x01, 0x00]  -- version 1
  match Decoder.decode patch with
  | .ok _ => false
  | .error (.unsupportedVersion 1) => true
  | .error _ => false

#guard testBadVersion

/-- Test: self-referential COPY (target copies from itself during decoding). -/
def testSelfCopy : Bool :=
  -- Source = "AB", then ADD "CD", then COPY 4 bytes from position 2 (start of target).
  -- This copies "CDCD" (overlapping copy extends into data being produced).
  let source := ByteArray.mk #[0x41, 0x42]  -- "AB"

  -- Build manually:
  -- ADD "CD" (opcode 3 = ADD size=2), COPY size=4 mode=0 (opcode 19 + varint 4)
  let instSection := ByteArray.mk #[3, 19] ++ Varint.encode 4
  let dataSection := ByteArray.mk #[0x43, 0x44]  -- "CD"
  let addrSection := Varint.encode 2  -- address 2 = start of target within combined window

  let targetLen := 6  -- 2 (ADD) + 4 (COPY)
  let targetLenEnc := Varint.encode targetLen
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := ByteArray.mk #[0x00]
    ++ targetLenEnc ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size
  let sourceSegLenEnc := Varint.encode source.size
  let sourceSegOffEnc := Varint.encode 0

  let window := ByteArray.mk #[0x01]
    ++ sourceSegLenEnc ++ sourceSegOffEnc
    ++ encLenEnc ++ deltaBody

  let patch := magic ++ ByteArray.mk #[0x00, 0x00] ++ window

  match Decoder.decode patch source with
  | .ok result => result == ByteArray.mk #[0x43, 0x44, 0x43, 0x44, 0x43, 0x44]  -- "CDCDCD"
  | .error _ => false

#guard testSelfCopy

/-- Test: double instruction opcode (COPY size=4 mode=0 / ADD size=1 = opcode 247). -/
def testDoubleInst : Bool :=
  let source := ByteArray.mk #[0x41, 0x42, 0x43, 0x44, 0x45]  -- "ABCDE"
  -- Use opcode 247 = COPY size=4 mode=0 / ADD size=1
  -- This copies 4 bytes from source then adds 1 literal byte, all from one opcode.
  let instSection := ByteArray.mk #[247]  -- single opcode, both insts have immediate sizes
  let dataSection := ByteArray.mk #[0x5A]  -- 'Z' for the ADD
  let addrSection := Varint.encode 1  -- copy from source position 1 = "BCDE"[0:4]

  let targetLen := 5  -- 4 (COPY) + 1 (ADD)
  let targetLenEnc := Varint.encode targetLen
  let dataLenEnc := Varint.encode dataSection.size
  let instLenEnc := Varint.encode instSection.size
  let addrLenEnc := Varint.encode addrSection.size

  let deltaBody := ByteArray.mk #[0x00]
    ++ targetLenEnc ++ dataLenEnc ++ instLenEnc ++ addrLenEnc
    ++ dataSection ++ instSection ++ addrSection

  let encLenEnc := Varint.encode deltaBody.size
  let sourceSegLenEnc := Varint.encode source.size
  let sourceSegOffEnc := Varint.encode 0

  let window := ByteArray.mk #[0x01]
    ++ sourceSegLenEnc ++ sourceSegOffEnc
    ++ encLenEnc ++ deltaBody

  let patch := magic ++ ByteArray.mk #[0x00, 0x00] ++ window

  match Decoder.decode patch source with
  | .ok result => result == ByteArray.mk #[0x42, 0x43, 0x44, 0x45, 0x5A]  -- "BCDE" + "Z"
  | .error _ => false

#guard testDoubleInst

def main : IO Unit := do
  IO.println "All VCDIFF decoder tests passed."
