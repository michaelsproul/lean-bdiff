/-
  Phase C: Code table encode/decode roundtrip proofs.

  Proves that the encoder's opcode selection (findSingleOpcode, findAddCopyOpcode,
  findCopyAddOpcode) is consistent with the decoder's code table lookup.

  Main results:
  - defaultTable_size: Table has exactly 256 entries
  - lookup_*: What each opcode range decodes to
  - findSingleOpcode_*: Encoder single-opcode selection correctness
  - findAddCopyOpcode_*: Encoder ADD+COPY opcode selection correctness
  - findCopyAddOpcode_*: Encoder COPY+ADD opcode selection correctness
  - *_roundtrip: Composed encoder→decoder roundtrip theorems
-/
import LeanBdiff.Vcdiff.CodeTable
import LeanBdiff.Vcdiff.Encoder
import Mathlib.Tactic.IntervalCases

set_option linter.style.nativeDecide false

namespace LeanBdiff.Vcdiff.CodeTable.Proofs

open LeanBdiff.Vcdiff

-- ============================================================================
-- ## DecidableEq instances (needed for native_decide on table entries)
-- ============================================================================

deriving instance DecidableEq for InstType
deriving instance DecidableEq for HalfInst
deriving instance DecidableEq for CodeTableEntry

-- ============================================================================
-- ## Table well-formedness
-- ============================================================================

theorem defaultTable_size : CodeTable.defaultTable.size = 256 := by native_decide

-- ============================================================================
-- ## Opcode 0: RUN
-- ============================================================================

theorem lookup_run :
    CodeTable.lookup 0 = ⟨⟨.run, 0⟩, ⟨.noop, 0⟩⟩ := by native_decide

-- ============================================================================
-- ## Opcodes 1-18: ADD
-- ============================================================================

theorem lookup_add_unsized :
    CodeTable.lookup 1 = ⟨⟨.add, 0⟩, ⟨.noop, 0⟩⟩ := by native_decide

theorem lookup_add_sized (s : Nat) (hs1 : 1 ≤ s) (hs2 : s ≤ 17) :
    CodeTable.lookup (1 + s : Nat).toUInt8 = ⟨⟨.add, s⟩, ⟨.noop, 0⟩⟩ := by
  interval_cases s <;> native_decide

-- ============================================================================
-- ## Opcodes 19-162: COPY (single instruction)
-- ============================================================================

theorem lookup_copy_unsized (m : Nat) (hm : m ≤ 8) :
    CodeTable.lookup (19 + m * 16 : Nat).toUInt8 =
    ⟨⟨.copy m.toUInt8, 0⟩, ⟨.noop, 0⟩⟩ := by
  interval_cases m <;> native_decide

theorem lookup_copy_sized (m s : Nat) (hm : m ≤ 8) (hs1 : 4 ≤ s) (hs2 : s ≤ 18) :
    CodeTable.lookup (19 + m * 16 + s - 3 : Nat).toUInt8 =
    ⟨⟨.copy m.toUInt8, s⟩, ⟨.noop, 0⟩⟩ := by
  interval_cases m <;> interval_cases s <;> native_decide

-- ============================================================================
-- ## Opcodes 163-234: ADD + COPY (modes 0-5)
-- ============================================================================

theorem lookup_add_copy (m addSz copySz : Nat)
    (hm : m ≤ 5) (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hc1 : 4 ≤ copySz) (hc2 : copySz ≤ 6) :
    CodeTable.lookup (163 + m * 12 + (addSz - 1) * 3 + (copySz - 4) : Nat).toUInt8 =
    ⟨⟨.add, addSz⟩, ⟨.copy m.toUInt8, copySz⟩⟩ := by
  interval_cases m <;> interval_cases addSz <;> interval_cases copySz <;> native_decide

-- ============================================================================
-- ## Opcodes 235-246: ADD + COPY (modes 6-8, copySz=4)
-- ============================================================================

theorem lookup_add_copy_high (m addSz : Nat)
    (hm1 : 6 ≤ m) (hm2 : m ≤ 8) (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4) :
    CodeTable.lookup (235 + (m - 6) * 4 + (addSz - 1) : Nat).toUInt8 =
    ⟨⟨.add, addSz⟩, ⟨.copy m.toUInt8, 4⟩⟩ := by
  interval_cases m <;> interval_cases addSz <;> native_decide

-- ============================================================================
-- ## Opcodes 247-255: COPY size=4 + ADD size=1
-- ============================================================================

theorem lookup_copy_add (m : Nat) (hm : m ≤ 8) :
    CodeTable.lookup (247 + m : Nat).toUInt8 =
    ⟨⟨.copy m.toUInt8, 4⟩, ⟨.add, 1⟩⟩ := by
  interval_cases m <;> native_decide

-- ============================================================================
-- ## Encoder: findSingleOpcode correctness
-- ============================================================================

-- RUN always produces opcode 0
theorem findSingleOpcode_run (b : UInt8) (s : Nat) :
    Encoder.findSingleOpcode (.run b s) = (0, true) := rfl

-- findSingleOpcode ignores the addr field of COPY
theorem findSingleOpcode_copy_addr_irrelevant (addr1 addr2 s m : Nat) :
    Encoder.findSingleOpcode (.copy addr1 s) m =
    Encoder.findSingleOpcode (.copy addr2 s) m := rfl

-- ============================================================================
-- ## Encoder: findAddCopyOpcode correctness
-- ============================================================================

-- Modes 0-5 with copySz 4-6
theorem findAddCopyOpcode_low (addSz copySz mode : Nat)
    (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hc1 : 4 ≤ copySz) (hc2 : copySz ≤ 6) (hm : mode ≤ 5) :
    Encoder.findAddCopyOpcode addSz copySz mode =
    some (163 + mode * 12 + (addSz - 1) * 3 + (copySz - 4) : Nat).toUInt8 := by
  interval_cases mode <;> interval_cases addSz <;> interval_cases copySz <;> native_decide

-- Modes 6-8 with copySz=4
theorem findAddCopyOpcode_high (addSz mode : Nat)
    (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hm1 : 6 ≤ mode) (hm2 : mode ≤ 8) :
    Encoder.findAddCopyOpcode addSz 4 mode =
    some (235 + (mode - 6) * 4 + (addSz - 1) : Nat).toUInt8 := by
  interval_cases mode <;> interval_cases addSz <;> native_decide

-- Returns none when out of range
theorem findAddCopyOpcode_none_large_add (addSz copySz mode : Nat) (h : addSz > 4) :
    Encoder.findAddCopyOpcode addSz copySz mode = none := by
  simp only [Encoder.findAddCopyOpcode]
  split
  · rename_i hc; simp only [ge_iff_le, Bool.and_eq_true, decide_eq_true_eq] at hc; omega
  · rfl

-- ============================================================================
-- ## Encoder: findCopyAddOpcode correctness
-- ============================================================================

theorem findCopyAddOpcode_correct (mode : Nat) (hm : mode ≤ 8) :
    Encoder.findCopyAddOpcode 4 mode 1 = some (247 + mode : Nat).toUInt8 := by
  interval_cases mode <;> native_decide

-- ============================================================================
-- ## Composed roundtrip theorems
-- ============================================================================

-- RUN roundtrip: encoder opcode → decoder lookup → RUN instruction
theorem run_roundtrip :
    let (opcode, needsSize) := Encoder.findSingleOpcode (.run 0 0)
    needsSize = true ∧
    CodeTable.lookup opcode = ⟨⟨.run, 0⟩, ⟨.noop, 0⟩⟩ := by native_decide

-- ADD unsized roundtrip
theorem add_unsized_roundtrip :
    let (opcode, needsSize) := Encoder.findSingleOpcode (.add ByteArray.empty)
    needsSize = true ∧
    (CodeTable.lookup opcode).inst1.type = .add ∧
    (CodeTable.lookup opcode).inst1.size = 0 := by native_decide

-- COPY sized roundtrip: encoder opcode → decoder lookup → correct COPY
-- (addr=0 representative; findSingleOpcode ignores addr for COPY)
theorem copy_sized_roundtrip (m s : Nat) (hm : m ≤ 8) (hs1 : 4 ≤ s) (hs2 : s ≤ 18) :
    let (opcode, needsSize) := Encoder.findSingleOpcode (.copy 0 s) m
    needsSize = false ∧
    CodeTable.lookup opcode = ⟨⟨.copy m.toUInt8, s⟩, ⟨.noop, 0⟩⟩ := by
  interval_cases m <;> interval_cases s <;> native_decide

-- COPY unsized roundtrip (size outside 4..18)
theorem copy_unsized_roundtrip (m : Nat) (hm : m ≤ 8) :
    let (opcode, needsSize) := Encoder.findSingleOpcode (.copy 0 0) m
    needsSize = true ∧
    CodeTable.lookup opcode = ⟨⟨.copy m.toUInt8, 0⟩, ⟨.noop, 0⟩⟩ := by
  interval_cases m <;> native_decide

-- ADD+COPY double roundtrip (modes 0-5): opcode selection + lookup
theorem add_copy_low_roundtrip (addSz copySz mode : Nat)
    (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hc1 : 4 ≤ copySz) (hc2 : copySz ≤ 6) (hm : mode ≤ 5) :
    CodeTable.lookup ((Encoder.findAddCopyOpcode addSz copySz mode).get!) =
    ⟨⟨.add, addSz⟩, ⟨.copy mode.toUInt8, copySz⟩⟩ := by
  interval_cases mode <;> interval_cases addSz <;> interval_cases copySz <;> native_decide

-- ADD+COPY double roundtrip (modes 6-8, copySz=4)
theorem add_copy_high_roundtrip (addSz mode : Nat)
    (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hm1 : 6 ≤ mode) (hm2 : mode ≤ 8) :
    CodeTable.lookup ((Encoder.findAddCopyOpcode addSz 4 mode).get!) =
    ⟨⟨.add, addSz⟩, ⟨.copy mode.toUInt8, 4⟩⟩ := by
  interval_cases mode <;> interval_cases addSz <;> native_decide

-- COPY+ADD double roundtrip
theorem copy_add_roundtrip (mode : Nat) (hm : mode ≤ 8) :
    CodeTable.lookup ((Encoder.findCopyAddOpcode 4 mode 1).get!) =
    ⟨⟨.copy mode.toUInt8, 4⟩, ⟨.add, 1⟩⟩ := by
  interval_cases mode <;> native_decide

end LeanBdiff.Vcdiff.CodeTable.Proofs
