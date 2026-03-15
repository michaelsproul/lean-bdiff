/-
  VCDIFF core type definitions (RFC 3284).
-/
namespace LeanBdiff.Vcdiff

/-- Error types for VCDIFF decoding. -/
inductive DecodeError where
  | invalidMagic
  | unsupportedVersion (v : UInt8)
  | unsupportedFeature (msg : String)
  | invalidHeaderIndicator (bits : UInt8)
  | invalidWindowIndicator (bits : UInt8)
  | invalidDeltaIndicator (bits : UInt8)
  | truncatedInput
  | varintOverflow
  | checksumMismatch (expected actual : UInt32)
  | invalidEncodingLength
  | invalidInstruction (opcode : UInt8)
  | copyOutOfBounds (addr size windowSize : Nat)
  | invalidAddressMode (mode : Nat)
  deriving Repr, BEq

instance : ToString DecodeError where
  toString
    | .invalidMagic => "invalid VCDIFF magic bytes"
    | .unsupportedVersion v => s!"unsupported VCDIFF version: {v}"
    | .unsupportedFeature msg => s!"unsupported feature: {msg}"
    | .invalidHeaderIndicator bits => s!"invalid header indicator bits: {bits}"
    | .invalidWindowIndicator bits => s!"invalid window indicator bits: {bits}"
    | .invalidDeltaIndicator bits => s!"invalid delta indicator bits: {bits}"
    | .truncatedInput => "truncated input"
    | .varintOverflow => "varint overflow"
    | .checksumMismatch e a => s!"checksum mismatch: expected {e}, got {a}"
    | .invalidEncodingLength => "encoding length mismatch"
    | .invalidInstruction op => s!"invalid instruction opcode: {op}"
    | .copyOutOfBounds addr sz ws => s!"COPY out of bounds: addr={addr} size={sz} window={ws}"
    | .invalidAddressMode m => s!"invalid address mode: {m}"

abbrev DecodeResult (α : Type) := Except DecodeError α

/-- VCDIFF magic bytes (excluding version): 0xD6 0xC3 0xC4 -/
def magic : ByteArray := ⟨#[0xD6, 0xC3, 0xC4]⟩

/-- Header indicator flags. -/
namespace HdrIndicator
  def secondary : UInt8 := 0x01
  def codeTable : UInt8 := 0x02
  def appData   : UInt8 := 0x04
  def reserved  : UInt8 := 0xF8  -- bits 3-7
end HdrIndicator

/-- Window indicator flags. -/
namespace WinIndicator
  def source  : UInt8 := 0x01
  def target  : UInt8 := 0x02
  def adler32 : UInt8 := 0x04
  def reserved : UInt8 := 0xF8  -- bits 3-7
end WinIndicator

/-- Delta indicator flags. -/
namespace DeltaIndicator
  def dataComp : UInt8 := 0x01
  def instComp : UInt8 := 0x02
  def addrComp : UInt8 := 0x04
  def reserved : UInt8 := 0xF8  -- bits 3-7
end DeltaIndicator

/-- Instruction types in the VCDIFF code table. -/
inductive InstType where
  | noop
  | add
  | run
  | copy (mode : UInt8)
  deriving Repr, BEq

/-- A single half-instruction from the code table. -/
structure HalfInst where
  type : InstType
  size : Nat  -- 0 means "read size from instruction stream"
  deriving Repr, BEq

/-- A code table entry: pair of half-instructions. -/
structure CodeTableEntry where
  inst1 : HalfInst
  inst2 : HalfInst
  deriving Repr, BEq

/-- Parsed VCDIFF file header. -/
structure Header where
  hdrIndicator : UInt8
  appData : Option ByteArray := none
  deriving Repr

/-- A decoded delta window. -/
structure Window where
  winIndicator  : UInt8
  sourceSegLen  : Nat := 0
  sourceSegOff  : Nat := 0
  targetLen     : Nat
  dataSection   : ByteArray
  instSection   : ByteArray
  addrSection   : ByteArray
  adler32       : Option UInt32 := none
  deriving Repr

end LeanBdiff.Vcdiff
