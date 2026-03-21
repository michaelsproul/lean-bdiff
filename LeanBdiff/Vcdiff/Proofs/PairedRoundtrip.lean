/-
  Phase G, Part 2: Paired instruction roundtrip proof.

  Proves that the encoder's paired instruction encoding (double opcodes for
  ADD+COPY and COPY+ADD) is correctly decoded by decodeLoop. This eliminates
  the h_loop hypothesis from full_encode_decode_roundtrip.

  Key results:
  - decodeOneStep_add_copy_in_concat: double opcode ADD+COPY decodes correctly
  - decodeOneStep_copy_add_in_concat: double opcode COPY+ADD decodes correctly
  - encodeInstListPaired_decodeLoop_roundtrip: inductive paired roundtrip
  - full_roundtrip: complete encode→decode roundtrip without h_loop/h_sec_bound
-/
import LeanBdiff.Vcdiff.Proofs.WindowRoundtrip
import LeanBdiff.Vcdiff.Proofs.SectionBounds

set_option linter.style.nativeDecide false

namespace LeanBdiff.Vcdiff.PairedRoundtrip

open LeanBdiff.Vcdiff
open LeanBdiff.Vcdiff.WindowRoundtrip

-- ============================================================================
-- ## Array-based execution spec
-- ============================================================================

def execInstArraySpec (insts : Array Encoder.RawInst) (src target : ByteArray)
    (start stop : Nat) : ByteArray :=
  if start < stop ∧ start < insts.size then
    execInstArraySpec insts src (execInstSpec insts[start]! src target) (start + 1) stop
  else target
termination_by stop - start

theorem execInstArraySpec_unfold (insts : Array Encoder.RawInst) (src target : ByteArray)
    (start stop : Nat) :
    execInstArraySpec insts src target start stop =
      if start < stop ∧ start < insts.size then
        execInstArraySpec insts src (execInstSpec insts[start]! src target) (start + 1) stop
      else target := by
  rw [execInstArraySpec]

theorem execInstArraySpec_base (insts : Array Encoder.RawInst) (src target : ByteArray)
    (start stop : Nat) (h : ¬(start < stop ∧ start < insts.size)) :
    execInstArraySpec insts src target start stop = target := by
  rw [execInstArraySpec_unfold]; simp [h]

-- ============================================================================
-- ## Array-based validity predicate
-- ============================================================================

def ValidInstArray (insts : Array Encoder.RawInst) (sourceWindow : ByteArray) : Prop :=
  ∀ (i : Nat), i < insts.size → ValidInst insts[i]! sourceWindow

-- ============================================================================
-- ## Double-opcode decodeOneStep: ADD + COPY
-- ============================================================================

-- ADD+COPY double opcode (modes 0-5, addSz 1-4, copySz 4-6): opcodes 163-234
-- Entry: inst1 = ⟨.add, addSz⟩, inst2 = ⟨.copy mode.toUInt8, copySz⟩
-- Both sizes non-zero → no varints read from inst section
set_option maxHeartbeats 800000 in
theorem decodeOneStep_add_copy_in_concat
    (addSz copySz mode addr : Nat)
    (sourceWindow target : ByteArray)
    (instData dataAll addrAll : ByteArray)
    (instPos dataPos addrPos addrPos' : Nat)
    (cache cache' : AddressCache.State)
    -- Size and mode constraints
    (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hc1 : 4 ≤ copySz) (hc2 : copySz ≤ 6)
    (hm : mode ≤ 5)
    -- Inst section has the double opcode
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! =
      (163 + mode * 12 + (addSz - 1) * 3 + (copySz - 4)).toUInt8)
    -- Data section has addSz bytes
    (hDataBound : dataPos + addSz ≤ dataAll.size)
    -- Source bounds for copy
    (hAddr : addr + copySz ≤ sourceWindow.size)
    -- Address decode succeeds
    (hAddrDecode : AddressCache.decode mode.toUInt8.toNat
      (sourceWindow.size + (target ++ dataAll.extract dataPos (dataPos + addSz)).size)
      ⟨addrAll, addrPos⟩ cache =
      .ok (addr, ⟨addrAll, addrPos'⟩, cache')) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ dataAll.extract dataPos (dataPos + addSz)
           ++ sourceWindow.extract addr (addr + copySz),
         ⟨instData, instPos + 1⟩,
         ⟨dataAll, dataPos + addSz⟩,
         ⟨addrAll, addrPos'⟩,
         cache') := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [CodeTable.Proofs.lookup_add_copy mode addSz copySz hm ha1 ha2 hc1 hc2]
  conv => simp only []
  -- inst1: addSz ≠ 0 → no varint, type = .add ≠ .noop → execute
  have hne1 : addSz ≠ 0 := by omega
  have hne2 : copySz ≠ 0 := by omega
  simp only [show (addSz == 0) = false from beq_eq_false_iff_ne.mpr hne1,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show (InstType.add != InstType.noop) = true from by decide,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  -- Execute inst1 (ADD)
  rw [execHalfInst_add_general addSz addSz sourceWindow target
    ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos⟩ cache
    (sourceWindow.size + target.size) hDataBound]
  simp only [pure, Except.pure, bind, Except.bind]
  -- inst2: copySz ≠ 0 → no varint, type = .copy ≠ .noop → execute
  simp only [show (copySz == 0) = false from beq_eq_false_iff_ne.mpr hne2,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  -- Execute inst2 (COPY)
  rw [execHalfInst_copy_source_general mode.toUInt8 copySz copySz sourceWindow
    (target ++ dataAll.extract dataPos (dataPos + addSz))
    ⟨dataAll, dataPos + addSz⟩ addrAll addrPos cache
    (sourceWindow.size + (target ++ dataAll.extract dataPos (dataPos + addSz)).size)
    addr addrPos' cache' hAddr (by omega) hAddrDecode]

-- ADD+COPY double opcode (modes 6-8, copySz=4): opcodes 235-246
set_option maxHeartbeats 800000 in
theorem decodeOneStep_add_copy_high_in_concat
    (addSz mode addr : Nat)
    (sourceWindow target : ByteArray)
    (instData dataAll addrAll : ByteArray)
    (instPos dataPos addrPos addrPos' : Nat)
    (cache cache' : AddressCache.State)
    (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hm1 : 6 ≤ mode) (hm2 : mode ≤ 8)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! =
      (235 + (mode - 6) * 4 + (addSz - 1)).toUInt8)
    (hDataBound : dataPos + addSz ≤ dataAll.size)
    (hAddr : addr + 4 ≤ sourceWindow.size)
    (hAddrDecode : AddressCache.decode mode.toUInt8.toNat
      (sourceWindow.size + (target ++ dataAll.extract dataPos (dataPos + addSz)).size)
      ⟨addrAll, addrPos⟩ cache =
      .ok (addr, ⟨addrAll, addrPos'⟩, cache')) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ dataAll.extract dataPos (dataPos + addSz)
           ++ sourceWindow.extract addr (addr + 4),
         ⟨instData, instPos + 1⟩,
         ⟨dataAll, dataPos + addSz⟩,
         ⟨addrAll, addrPos'⟩,
         cache') := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [CodeTable.Proofs.lookup_add_copy_high mode addSz hm1 hm2 ha1 ha2]
  conv => simp only []
  have hne1 : addSz ≠ 0 := by omega
  simp only [show (addSz == 0) = false from beq_eq_false_iff_ne.mpr hne1,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show (InstType.add != InstType.noop) = true from by decide,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  rw [execHalfInst_add_general addSz addSz sourceWindow target
    ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos⟩ cache
    (sourceWindow.size + target.size) hDataBound]
  simp only [pure, Except.pure, bind, Except.bind]
  simp only [show ((4 : Nat) == 0) = false from by decide,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  rw [execHalfInst_copy_source_general mode.toUInt8 4 4 sourceWindow
    (target ++ dataAll.extract dataPos (dataPos + addSz))
    ⟨dataAll, dataPos + addSz⟩ addrAll addrPos cache
    (sourceWindow.size + (target ++ dataAll.extract dataPos (dataPos + addSz)).size)
    addr addrPos' cache' hAddr (by omega) hAddrDecode]

-- ============================================================================
-- ## Double-opcode decodeOneStep: COPY + ADD
-- ============================================================================

-- COPY+ADD double opcode (copySz=4, addSz=1, modes 0-8): opcodes 247-255
set_option maxHeartbeats 800000 in
theorem decodeOneStep_copy_add_in_concat
    (mode addr : Nat)
    (sourceWindow target : ByteArray)
    (instData dataAll addrAll : ByteArray)
    (instPos dataPos addrPos addrPos' : Nat)
    (cache cache' : AddressCache.State)
    (hm : mode ≤ 8)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! = (247 + mode).toUInt8)
    (hAddr : addr + 4 ≤ sourceWindow.size)
    (hAddrDecode : AddressCache.decode mode.toUInt8.toNat
      (sourceWindow.size + target.size)
      ⟨addrAll, addrPos⟩ cache =
      .ok (addr, ⟨addrAll, addrPos'⟩, cache'))
    (hDataBound : dataPos + 1 ≤ dataAll.size) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ sourceWindow.extract addr (addr + 4)
           ++ dataAll.extract dataPos (dataPos + 1),
         ⟨instData, instPos + 1⟩,
         ⟨dataAll, dataPos + 1⟩,
         ⟨addrAll, addrPos'⟩,
         cache') := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [CodeTable.Proofs.lookup_copy_add mode hm]
  conv => simp only []
  -- inst1: 4 ≠ 0, .copy ≠ .noop → execute
  simp only [show ((4 : Nat) == 0) = false from by decide,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  -- Execute inst1 (COPY)
  rw [execHalfInst_copy_source_general mode.toUInt8 4 4 sourceWindow target
    ⟨dataAll, dataPos⟩ addrAll addrPos cache
    (sourceWindow.size + target.size)
    addr addrPos' cache' hAddr (by omega) hAddrDecode]
  simp only [pure, Except.pure, bind, Except.bind]
  -- inst2: 1 ≠ 0, .add ≠ .noop → execute
  simp only [show ((1 : Nat) == 0) = false from by decide,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show (InstType.add != InstType.noop) = true from by decide,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  -- Execute inst2 (ADD)
  rw [execHalfInst_add_general 1 1 sourceWindow
    (target ++ sourceWindow.extract addr (addr + 4))
    ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos'⟩ cache'
    (sourceWindow.size + (target ++ sourceWindow.extract addr (addr + 4)).size)
    hDataBound]

-- ============================================================================
-- ## Placeholder: inductive paired roundtrip
-- ============================================================================

-- TODO: The full inductive proof goes here. For now, state the key bridge theorem.

end LeanBdiff.Vcdiff.PairedRoundtrip
