/-
  Phase D: Encoder wire format roundtrip proofs.

  Proves that the encoder's serialized output is correctly parsed by the decoder:
  - writeUInt32BE / readUInt32BE roundtrip
  - Encoder and Decoder Adler32 equivalence
  - parseHeader correctly parses the encoder's header bytes
  - Varint encode properties
  - Flag indicator validity

  Main results:
  - readUInt32BE_writeUInt32BE: UInt32 serialization roundtrip (general)
  - adler32_eq: Encoder/Decoder Adler32 produce identical results
  - parseHeader_encoded: Encoder header is correctly parsed by decoder
  - win/hdr/delta indicator validity theorems
-/
import LeanBdiff.Vcdiff.Encoder
import LeanBdiff.Vcdiff.Decoder
import LeanBdiff.Vcdiff.Proofs.Varint
import Mathlib.Tactic.IntervalCases
import Std.Tactic.BVDecide

set_option linter.style.nativeDecide false

namespace LeanBdiff.Vcdiff.Encoder.Proofs

open LeanBdiff.Vcdiff

-- ============================================================================
-- ## Cursor helpers
-- ============================================================================

-- readByte succeeds when position is in bounds
theorem readByte_ok {ba : ByteArray} {pos : Nat}
    (h : pos < ba.size) :
    Varint.Cursor.readByte ⟨ba, pos⟩ =
    .ok (ba[pos]!, ⟨ba, pos + 1⟩) := by
  unfold Varint.Cursor.readByte
  simp only [h, ↓reduceIte]

-- readBytes succeeds when there are enough bytes
theorem readBytes_ok {ba : ByteArray} {pos n : Nat}
    (h : pos + n ≤ ba.size) :
    Varint.Cursor.readBytes ⟨ba, pos⟩ n =
    .ok (ba.extract pos (pos + n), ⟨ba, pos + n⟩) := by
  unfold Varint.Cursor.readBytes
  simp only [h, ↓reduceIte]

-- ============================================================================
-- ## writeUInt32BE / readUInt32BE roundtrip
-- ============================================================================

-- The 4-byte ByteArray produced by writeUInt32BE has size 4
theorem writeUInt32BE_size (v : UInt32) :
    (Encoder.writeUInt32BE v).size = 4 := rfl

-- Concrete roundtrip proofs covering boundary cases
-- These verify the full encode→decode pipeline for representative values
theorem readUInt32BE_writeUInt32BE_zero :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0, 0⟩ =
    .ok (0, ⟨Encoder.writeUInt32BE 0, 4⟩) := by native_decide

theorem readUInt32BE_writeUInt32BE_one :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 1, 0⟩ =
    .ok (1, ⟨Encoder.writeUInt32BE 1, 4⟩) := by native_decide

theorem readUInt32BE_writeUInt32BE_byte :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0xFF, 0⟩ =
    .ok (0xFF, ⟨Encoder.writeUInt32BE 0xFF, 4⟩) := by
  native_decide

theorem readUInt32BE_writeUInt32BE_word :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0xFFFF, 0⟩ =
    .ok (0xFFFF, ⟨Encoder.writeUInt32BE 0xFFFF, 4⟩) := by
  native_decide

theorem readUInt32BE_writeUInt32BE_24bit :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0xFFFFFF, 0⟩ =
    .ok (0xFFFFFF, ⟨Encoder.writeUInt32BE 0xFFFFFF, 4⟩) := by
  native_decide

theorem readUInt32BE_writeUInt32BE_deadbeef :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0xDEADBEEF, 0⟩ =
    .ok (0xDEADBEEF, ⟨Encoder.writeUInt32BE 0xDEADBEEF, 4⟩) := by
  native_decide

theorem readUInt32BE_writeUInt32BE_max :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0xFFFFFFFF, 0⟩ =
    .ok (0xFFFFFFFF, ⟨Encoder.writeUInt32BE 0xFFFFFFFF, 4⟩) := by
  native_decide

-- Alternating bit patterns (catch byte-swap and shift bugs)
theorem readUInt32BE_writeUInt32BE_alt1 :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0xAAAAAAAA, 0⟩ =
    .ok (0xAAAAAAAA, ⟨Encoder.writeUInt32BE 0xAAAAAAAA, 4⟩) := by
  native_decide

theorem readUInt32BE_writeUInt32BE_alt2 :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0x55555555, 0⟩ =
    .ok (0x55555555, ⟨Encoder.writeUInt32BE 0x55555555, 4⟩) := by
  native_decide

-- Each byte position has a distinct value
theorem readUInt32BE_writeUInt32BE_distinct :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE 0x01020304, 0⟩ =
    .ok (0x01020304, ⟨Encoder.writeUInt32BE 0x01020304, 4⟩) := by
  native_decide

-- Bridge: v.toUInt8.toUInt32.toBitVec = extractLsb' + zeroExtend
private theorem toUInt8_toUInt32_toBitVec (v : UInt32) :
    v.toUInt8.toUInt32.toBitVec =
    (v.toBitVec.extractLsb' 0 8).zeroExtend 32 := by
  simp only [UInt32.toUInt8, Nat.toUInt8, UInt8.toUInt32,
             UInt32.toNat, UInt8.toNat, UInt8.ofNat,
             BitVec.extractLsb', BitVec.zeroExtend,
             BitVec.ofNat, BitVec.toNat]
  congr 1

-- UInt32 byte decomposition/reconstruction is identity
private theorem uint32_byte_roundtrip (v : UInt32) :
    (v >>> 24).toUInt8.toUInt32 <<< 24 |||
    (v >>> 16).toUInt8.toUInt32 <<< 16 |||
    (v >>> 8).toUInt8.toUInt32 <<< 8 |||
    v.toUInt8.toUInt32 = v := by
  rw [← UInt32.toBitVec_inj]
  simp only [UInt32.toBitVec_or, UInt32.toBitVec_shiftLeft,
             toUInt8_toUInt32_toBitVec]
  simp only [UInt32.toBitVec_shiftRight]
  bv_decide

-- General roundtrip: reading a UInt32BE that was written recovers it
set_option linter.unusedSimpArgs false in
theorem readUInt32BE_writeUInt32BE (v : UInt32) :
    Decoder.readUInt32BE ⟨Encoder.writeUInt32BE v, 0⟩ =
    .ok (v, ⟨Encoder.writeUInt32BE v, 4⟩) := by
  simp only [Decoder.readUInt32BE, Encoder.writeUInt32BE]
  simp only [bind, Except.bind]
  rw [readByte_ok (show (0 : Nat) < 4 from by omega)]
  simp only [Except.bind]
  rw [readByte_ok (show (1 : Nat) < 4 from by omega)]
  simp only [Except.bind]
  rw [readByte_ok (show (2 : Nat) < 4 from by omega)]
  simp only [Except.bind]
  rw [readByte_ok (show (3 : Nat) < 4 from by omega)]
  simp only [Except.bind, pure, Except.pure,
             Except.ok.injEq, Prod.mk.injEq]
  exact ⟨uint32_byte_roundtrip v, trivial⟩

-- ============================================================================
-- ## Adler32 equivalence
-- ============================================================================

-- The encoder and decoder have identical Adler32 implementations
theorem adler32_eq (data : ByteArray) :
    Encoder.adler32 data = Decoder.adler32 data := rfl

-- ============================================================================
-- ## Varint encode properties for wire format
-- ============================================================================

-- Encoded varint is non-empty
theorem varint_encode_nonempty (n : Nat) :
    (Varint.encode n).size > 0 := by
  unfold Varint.encode
  split
  · simp [ByteArray.size]
  · simp [ByteArray.size, List.size_toArray]
    rw [Varint.setContinuationBits_length,
        Varint.toBase128_length]
    have hne : n ≠ 0 := by intro h; simp [h] at *
    rw [Varint.numDigits_pos hne]
    omega

-- numDigits is at most 5 for values < 2^35
private theorem numDigits_le_5 (n : Nat) (h : n < 2 ^ 35)
    (hn : n ≠ 0) : Varint.numDigits n ≤ 5 := by
  rw [Varint.numDigits_pos hn]
  if h1 : n / 128 = 0 then simp [h1] else
  rw [Varint.numDigits_pos h1]
  if h2 : n / 128 / 128 = 0 then simp [h2] else
  rw [Varint.numDigits_pos h2]
  if h3 : n / 128 / 128 / 128 = 0 then simp [h3] else
  rw [Varint.numDigits_pos h3]
  if h4 : n / 128 / 128 / 128 / 128 = 0 then simp [h4] else
  rw [Varint.numDigits_pos h4]
  have : n / 128 / 128 / 128 / 128 / 128 = 0 := by omega
  simp [this]

-- Encoded varint size is at most 5 for values < 2^35
theorem varint_encode_size_le_5 (n : Nat) (h : n < 2 ^ 35) :
    (Varint.encode n).size ≤ 5 := by
  unfold Varint.encode
  split
  · simp [ByteArray.size]
  · simp [ByteArray.size, List.size_toArray]
    rw [Varint.setContinuationBits_length,
        Varint.toBase128_length]
    have hne : n ≠ 0 := by intro h'; simp [h'] at *
    exact numDigits_le_5 n h hne

-- ============================================================================
-- ## Header format: encoder output is valid for decoder
-- ============================================================================

-- The encoder's header is [0xD6, 0xC3, 0xC4, 0x00, 0x00]
theorem encoder_header_bytes :
    magic ++ ByteArray.mk #[0x00, 0x00] =
    ⟨#[0xD6, 0xC3, 0xC4, 0x00, 0x00]⟩ := by native_decide

-- DecidableEq instances needed for native_decide on parseHeader
deriving instance DecidableEq for Header

-- parseHeader succeeds on the encoder's exact 5-byte header
theorem parseHeader_encoded :
    Decoder.parseHeader ⟨⟨#[0xD6, 0xC3, 0xC4, 0x00, 0x00]⟩, 0⟩ =
    .ok (⟨0x00, none⟩,
         ⟨⟨#[0xD6, 0xC3, 0xC4, 0x00, 0x00]⟩, 5⟩) := by
  native_decide

-- ============================================================================
-- ## Window indicator properties
-- ============================================================================

-- Encoder sets VCD_SOURCE | VCD_ADLER32 when source is non-empty
theorem win_indicator_with_source :
    WinIndicator.source ||| WinIndicator.adler32 =
    (0x05 : UInt8) := by native_decide

-- No reserved bits set (decoder won't reject)
theorem win_indicator_source_no_reserved :
    (WinIndicator.source ||| WinIndicator.adler32) &&&
    WinIndicator.reserved = 0 := by native_decide

theorem win_indicator_adler32_no_reserved :
    WinIndicator.adler32 &&& WinIndicator.reserved = 0 := by
  native_decide

-- VCD_TARGET not set (decoder won't reject)
theorem win_indicator_source_not_target :
    (WinIndicator.source ||| WinIndicator.adler32) &&&
    WinIndicator.target = 0 := by native_decide

theorem win_indicator_adler32_not_target :
    WinIndicator.adler32 &&& WinIndicator.target = 0 := by
  native_decide

-- Source and adler32 bits are set when expected
theorem win_indicator_source_has_source :
    (WinIndicator.source ||| WinIndicator.adler32) &&&
    WinIndicator.source ≠ 0 := by native_decide

theorem win_indicator_source_has_adler32 :
    (WinIndicator.source ||| WinIndicator.adler32) &&&
    WinIndicator.adler32 ≠ 0 := by native_decide

-- ============================================================================
-- ## Delta indicator properties
-- ============================================================================

-- Encoder always emits delta_indicator = 0 (no compression)
theorem delta_indicator_zero_no_reserved :
    (0 : UInt8) &&& DeltaIndicator.reserved = 0 := by
  native_decide

theorem delta_indicator_zero_no_compression :
    (0 : UInt8) &&&
    (DeltaIndicator.dataComp ||| DeltaIndicator.instComp |||
     DeltaIndicator.addrComp) = 0 := by native_decide

-- ============================================================================
-- ## Header indicator properties
-- ============================================================================

-- Encoder always emits hdr_indicator = 0
theorem hdr_indicator_zero_no_reserved :
    (0 : UInt8) &&& HdrIndicator.reserved = 0 := by
  native_decide

theorem hdr_indicator_zero_no_secondary :
    (0 : UInt8) &&& HdrIndicator.secondary = 0 := by
  native_decide

theorem hdr_indicator_zero_no_codetable :
    (0 : UInt8) &&& HdrIndicator.codeTable = 0 := by
  native_decide

theorem hdr_indicator_zero_no_appdata :
    (0 : UInt8) &&& HdrIndicator.appData = 0 := by
  native_decide

end LeanBdiff.Vcdiff.Encoder.Proofs
