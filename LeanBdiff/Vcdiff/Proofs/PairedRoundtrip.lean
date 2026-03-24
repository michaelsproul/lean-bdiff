/-
  Phase G, Part 2: Paired instruction roundtrip proof.

  Proves that the encoder's paired instruction encoding (double opcodes for
  ADD+COPY and COPY+ADD) is correctly decoded by decodeLoop. This eliminates
  the h_loop hypothesis from full_encode_decode_roundtrip.

  Key results:
  - decodeOneStep_add_copy_in_concat: double opcode ADD+COPY decodes correctly
  - decodeOneStep_copy_add_in_concat: double opcode COPY+ADD decodes correctly
  - encodeOneInstPaired_decode_step: per-step decode correctness
  - encodeInstListPaired_decodeLoop_roundtrip: inductive paired roundtrip
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

theorem execInstArraySpec_step (insts : Array Encoder.RawInst) (src target : ByteArray)
    (start stop : Nat) (h1 : start < stop) (h2 : start < insts.size) :
    execInstArraySpec insts src target start stop =
    execInstArraySpec insts src (execInstSpec insts[start]! src target) (start + 1) stop := by
  rw [execInstArraySpec_unfold]; simp [h1, h2]

-- Composition: executing [start..stop) = executing [start..mid) then [mid..stop)
theorem execInstArraySpec_split (insts : Array Encoder.RawInst) (src target : ByteArray)
    (start mid stop : Nat) (h1 : start ≤ mid) (h2 : mid ≤ stop) :
    execInstArraySpec insts src target start stop =
    execInstArraySpec insts src
      (execInstArraySpec insts src target start mid) mid stop := by
  suffices h : ∀ (k : Nat) (t : ByteArray) (s : Nat),
      s + k = mid → mid ≤ stop →
      execInstArraySpec insts src t s stop =
      execInstArraySpec insts src (execInstArraySpec insts src t s mid) mid stop by
    exact h (mid - start) target start (by omega) h2
  intro k
  induction k with
  | zero =>
    intro t s hs hms
    have hsm : s = mid := by omega
    subst hsm
    rw [execInstArraySpec_base _ _ _ s s (by omega)]
  | succ n ihn =>
    intro t s hsk hms
    by_cases hs : s < insts.size ∧ s < stop
    · rw [execInstArraySpec_step _ _ _ s stop hs.2 hs.1,
           execInstArraySpec_step _ _ _ s mid (by omega) hs.1]
      exact ihn (execInstSpec insts[s]! src t) (s + 1) (by omega) hms
    · push_neg at hs
      by_cases hsi : s < insts.size
      · have := hs hsi; omega
      · rw [execInstArraySpec_base _ _ _ s stop (by omega),
             execInstArraySpec_base _ _ _ s mid (by omega),
             execInstArraySpec_base _ _ _ mid stop (by omega)]

-- ============================================================================
-- ## Array-based validity predicate
-- ============================================================================

def ValidInstArray (insts : Array Encoder.RawInst) (sourceWindow : ByteArray) : Prop :=
  ∀ (i : Nat), i < insts.size → ValidInst insts[i]! sourceWindow

-- ============================================================================
-- ## Helper lemmas
-- ============================================================================

private theorem push_eq_append_singleton (ba : ByteArray) (b : UInt8) :
    ba.push b = ba ++ ByteArray.mk #[b] := by
  apply ByteArray.ext
  simp [ByteArray.data_push, ByteArray.data_append]

private theorem bytearray_extract_size (ba : ByteArray) (start stop : Nat) (h : stop ≤ ba.size) :
    (ba.extract start stop).size = stop - start := by
  simp only [ByteArray.size]
  rw [ByteArray.data_extract, Array.size_extract]
  simp only [ByteArray.size] at h
  omega

theorem execInstArraySpec_single (insts : Array Encoder.RawInst) (src target : ByteArray)
    (i : Nat) (h_i : i < insts.size) :
    execInstArraySpec insts src target i (i + 1) =
    execInstSpec insts[i]! src target := by
  rw [execInstArraySpec_step _ _ _ i (i + 1) (by omega) h_i,
      execInstArraySpec_base _ _ _ (i + 1) (i + 1) (by omega)]

theorem execInstArraySpec_double (insts : Array Encoder.RawInst) (src target : ByteArray)
    (i : Nat) (h_i : i < insts.size) (h_i1 : i + 1 < insts.size) :
    execInstArraySpec insts src target i (i + 2) =
    execInstSpec insts[i + 1]! src (execInstSpec insts[i]! src target) := by
  rw [execInstArraySpec_step _ _ _ i (i + 2) (by omega) h_i,
      execInstArraySpec_step _ _ _ (i + 1) (i + 2) (by omega) h_i1,
      execInstArraySpec_base _ _ _ (i + 2) (i + 2) (by omega)]

-- ============================================================================
-- ## findAddCopyOpcode / findCopyAddOpcode characterization
-- ============================================================================

private theorem findAddCopyOpcode_spec (addSz copySz mode : Nat) (opcode : UInt8)
    (h : Encoder.findAddCopyOpcode addSz copySz mode = some opcode) :
    addSz ≥ 1 ∧ addSz ≤ 4 ∧
    ((mode ≤ 5 ∧ copySz ≥ 4 ∧ copySz ≤ 6 ∧
      opcode = (163 + mode * 12 + (addSz - 1) * 3 + (copySz - 4)).toUInt8) ∨
     (mode ≥ 6 ∧ mode ≤ 8 ∧ copySz = 4 ∧
      opcode = (235 + (mode - 6) * 4 + (addSz - 1)).toUInt8)) := by
  simp only [Encoder.findAddCopyOpcode] at h
  split at h
  · rename_i h_add
    simp only [Bool.and_eq_true, decide_eq_true_eq] at h_add
    split at h
    · rename_i h_low
      simp only [Bool.and_eq_true, decide_eq_true_eq] at h_low
      exact ⟨h_add.1, h_add.2, .inl ⟨h_low.1.1, h_low.1.2, h_low.2, by simpa using h.symm⟩⟩
    · split at h
      · rename_i _ h_high
        simp only [Bool.and_eq_true, decide_eq_true_eq, beq_iff_eq] at h_high
        exact ⟨h_add.1, h_add.2, .inr ⟨h_high.1.1, h_high.1.2, h_high.2, by simpa using h.symm⟩⟩
      · simp at h
  · simp at h

private theorem findCopyAddOpcode_spec (copySz mode addSz : Nat) (opcode : UInt8)
    (h : Encoder.findCopyAddOpcode copySz mode addSz = some opcode) :
    copySz = 4 ∧ addSz = 1 ∧ mode ≤ 8 ∧ opcode = (247 + mode).toUInt8 := by
  simp only [Encoder.findCopyAddOpcode] at h
  split at h
  · rename_i hcond
    simp only [Bool.and_eq_true, decide_eq_true_eq, beq_iff_eq] at hcond
    exact ⟨hcond.1.1, hcond.1.2, hcond.2, by simpa using h.symm⟩
  · simp at h

-- ============================================================================
-- ## Double-opcode decodeOneStep: ADD + COPY
-- ============================================================================

set_option maxHeartbeats 800000 in
theorem decodeOneStep_add_copy_in_concat
    (addSz copySz mode addr : Nat)
    (sourceWindow target : ByteArray)
    (instData dataAll addrAll : ByteArray)
    (instPos dataPos addrPos addrPos' : Nat)
    (cache cache' : AddressCache.State)
    (ha1 : 1 ≤ addSz) (ha2 : addSz ≤ 4)
    (hc1 : 4 ≤ copySz) (hc2 : copySz ≤ 6)
    (hm : mode ≤ 5)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! =
      (163 + mode * 12 + (addSz - 1) * 3 + (copySz - 4)).toUInt8)
    (hDataBound : dataPos + addSz ≤ dataAll.size)
    (hAddr : addr + copySz ≤ sourceWindow.size)
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
  have hne1 : addSz ≠ 0 := by omega
  have hne2 : copySz ≠ 0 := by omega
  simp only [show (addSz == 0) = false from beq_eq_false_iff_ne.mpr hne1,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show (InstType.add != InstType.noop) = true from by decide,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  rw [execHalfInst_add_general addSz addSz sourceWindow target
    ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos⟩ cache
    (sourceWindow.size + target.size) hDataBound]
  simp only [pure, Except.pure, bind, Except.bind]
  simp only [show (copySz == 0) = false from beq_eq_false_iff_ne.mpr hne2,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  rw [execHalfInst_copy_source_general mode.toUInt8 copySz copySz sourceWindow
    (target ++ dataAll.extract dataPos (dataPos + addSz))
    ⟨dataAll, dataPos + addSz⟩ addrAll addrPos cache
    (sourceWindow.size + (target ++ dataAll.extract dataPos (dataPos + addSz)).size)
    addr addrPos' cache' hAddr (by omega) hAddrDecode]

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
  simp only [show ((4 : Nat) == 0) = false from by decide,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  rw [execHalfInst_copy_source_general mode.toUInt8 4 4 sourceWindow target
    ⟨dataAll, dataPos⟩ addrAll addrPos cache
    (sourceWindow.size + target.size)
    addr addrPos' cache' hAddr (by omega) hAddrDecode]
  simp only [pure, Except.pure, bind, Except.bind]
  simp only [show ((1 : Nat) == 0) = false from by decide,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show (InstType.add != InstType.noop) = true from by decide,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  rw [execHalfInst_add_general 1 1 sourceWindow
    (target ++ sourceWindow.extract addr (addr + 4))
    ⟨dataAll, dataPos⟩ ⟨addrAll, addrPos'⟩ cache'
    (sourceWindow.size + (target ++ sourceWindow.extract addr (addr + 4)).size)
    hDataBound]

-- ============================================================================
-- ## Single COPY immediate: general mode decode
-- ============================================================================

set_option maxHeartbeats 800000 in
theorem decodeOneStep_copy_sized_general
    (addr sz mode : Nat)
    (sourceWindow target : ByteArray)
    (instData dataAll addrAll : ByteArray)
    (instPos dataPos addrPos addrPos' : Nat)
    (cache cache' : AddressCache.State)
    (hSz4 : sz ≥ 4) (hSz18 : sz ≤ 18) (hMode : mode ≤ 8)
    (hAddr : addr + sz ≤ sourceWindow.size)
    (hInstBound : instPos < instData.size)
    (hInstByte : instData[instPos]! = (19 + mode * 16 + sz - 3 : Nat).toUInt8)
    (hAddrDecode : AddressCache.decode mode
      (sourceWindow.size + target.size)
      ⟨addrAll, addrPos⟩ cache =
      .ok (addr, ⟨addrAll, addrPos'⟩, cache')) :
    decodeOneStep sourceWindow target
      ⟨instData, instPos⟩ ⟨dataAll, dataPos⟩
      ⟨addrAll, addrPos⟩ cache =
    .ok (target ++ sourceWindow.extract addr (addr + sz),
         ⟨instData, instPos + 1⟩,
         ⟨dataAll, dataPos⟩,
         ⟨addrAll, addrPos'⟩,
         cache') := by
  unfold decodeOneStep
  simp only [bind, Except.bind]
  rw [Encoder.Proofs.readByte_ok hInstBound]
  simp only [hInstByte]
  rw [CodeTable.Proofs.lookup_copy_sized mode sz hMode hSz4 hSz18]
  conv => simp only []
  have hne : sz ≠ 0 := by omega
  simp only [show (sz == 0) = false from beq_eq_false_iff_ne.mpr hne,
    Bool.false_and, Bool.false_eq_true, ite_false,
    show ((InstType.copy mode.toUInt8 != InstType.noop) = true) from rfl,
    show (InstType.noop != InstType.noop) = false from by decide,
    show ((0 : Nat) == 0 && false) = false from by decide,
    ↓reduceIte, pure, Except.pure, bind, Except.bind]
  have hModeRT : mode.toUInt8.toNat = mode := by
    simp [UInt8.toNat, Nat.toUInt8, BitVec.toNat]; omega
  rw [execHalfInst_copy_source_general mode.toUInt8 sz sz sourceWindow target
    ⟨dataAll, dataPos⟩ addrAll addrPos cache
    (sourceWindow.size + target.size) addr addrPos' cache' hAddr (by omega)
    (by rw [hModeRT]; exact hAddrDecode)]

-- ============================================================================
-- ## Per-step decode correctness
-- ============================================================================

-- Core per-step lemma: encodeOneInstPaired produces sections that
-- decodeOneStep processes correctly.
set_option maxHeartbeats 3200000 in
theorem encodeOneInstPaired_decode_step
    (insts : Array Encoder.RawInst) (i : Nat)
    (sourceWindow : ByteArray) (initTarget : ByteArray)
    (initCache : AddressCache.State)
    (iR dR aR : ByteArray)
    (h_valid : ValidInstArray insts sourceWindow)
    (h_cache : initCache.sNear + initCache.sSame ≤ 7)
    (h_i : i < insts.size) :
    let (d1, i1, a1, cache', tp', skip) :=
      encodeOneInstPaired insts i sourceWindow.size initCache initTarget.size
    i1.size ≥ 1 ∧
    skip ≥ 1 ∧
    i + skip ≤ insts.size ∧
    cache'.sNear + cache'.sSame ≤ 7 ∧
    tp' = (execInstArraySpec insts sourceWindow initTarget i (i + skip)).size ∧
    decodeOneStep sourceWindow initTarget
      ⟨i1 ++ iR, 0⟩ ⟨d1 ++ dR, 0⟩ ⟨a1 ++ aR, 0⟩ initCache =
      .ok (execInstArraySpec insts sourceWindow initTarget i (i + skip),
           ⟨i1 ++ iR, i1.size⟩, ⟨d1 ++ dR, d1.size⟩, ⟨a1 ++ aR, a1.size⟩, cache') := by
  -- Get validity and bridge insts[i]!/insts[i]
  have h_vi := h_valid i h_i
  have h_bang_i : insts[i]! = insts[i] := by simp [getElem!_pos, h_i]
  rw [h_bang_i] at h_vi
  -- Case split on instruction type
  rcases h_inst : insts[i] with ⟨data⟩ | ⟨addr, sz⟩ | ⟨byte, sz⟩
  · -- ADD case
    simp only [encodeOneInstPaired]
    unfold Encoder.encodeOneInst'
    split
    · -- i < insts.size
      simp only [h_inst]
      rw [h_inst] at h_vi; simp only [ValidInst] at h_vi
      obtain ⟨hDataSz, hDataSzBound⟩ := h_vi
      -- Split on paired result (some vs none)
      split
      · -- paired ADD+COPY
        rename_i is' ds' as' c' tp' skip' heq_paired
        -- Extract: i+1 must be in bounds
        have h_next : i + 1 < insts.size := by
          by_contra h_not; simp [show ¬(i + 1 < insts.size) from h_not] at heq_paired
        -- Next inst must be COPY
        have h_bang_i1 : insts[i + 1]! = insts[i + 1] := by simp [getElem!_pos, h_next]
        have h_next_vi := h_valid (i + 1) h_next
        rw [h_bang_i1] at h_next_vi
        rcases h_next_inst : insts[i + 1] with ⟨data'⟩ | ⟨addr', sz'⟩ | ⟨byte', sz'⟩
        · -- ADD: contradiction
          rw [h_bang_i1, h_next_inst] at heq_paired
          simp [h_next] at heq_paired
        · -- COPY: the pairing case
          rw [h_bang_i1, h_next_inst] at heq_paired
          simp only [h_next, ite_true] at heq_paired
          rw [h_next_inst] at h_next_vi; simp only [ValidInst] at h_next_vi
          obtain ⟨hSz', hSzBound', hAddr', hAddrBound'⟩ := h_next_vi
          -- Destructure encodeAddress
          set here := sourceWindow.size + initTarget.size + data.size with h_here_def
          set mode := (initCache.encodeAddress addr' here).1
          set addrBytes := (initCache.encodeAddress addr' here).2.1
          set cacheUpd := (initCache.encodeAddress addr' here).2.2
          have h_eaddr : initCache.encodeAddress addr' here = (mode, addrBytes, cacheUpd) := by
            simp [mode, addrBytes, cacheUpd]
          -- findAddCopyOpcode must have returned some
          rcases h_fac : Encoder.findAddCopyOpcode data.size sz' mode with _ | ⟨opcode⟩
          · -- none: contradiction
            simp [h_fac, h_eaddr] at heq_paired
          · -- some opcode: pairing succeeded
            simp only [h_fac, Option.some.injEq, Prod.mk.injEq] at heq_paired
            obtain ⟨rfl, rfl, rfl, rfl, rfl, rfl⟩ := heq_paired
            have h_spec := findAddCopyOpcode_spec data.size sz' mode opcode h_fac
            obtain ⟨_, _, h_case⟩ := h_spec
            -- Mode properties
            have h_mode_bound := encodeAddress_mode_bound initCache addr' here
            rw [h_eaddr] at h_mode_bound
            simp only [] at h_mode_bound
            have hMode8 : mode ≤ 8 := by omega
            have hModeRT : mode.toUInt8.toNat = mode := by
              simp [UInt8.toNat, Nat.toUInt8, BitVec.toNat]; omega
            -- Cache preservation
            have h_cache_pres := encodeAddress_preserves_cache_size initCache addr' here
            rw [h_eaddr] at h_cache_pres
            simp only [] at h_cache_pres
            -- Address roundtrip
            have hAddrRT := encodeAddress_decode_roundtrip initCache addr' here (by omega)
            rw [h_eaddr] at hAddrRT
            simp only [] at hAddrRT
            -- Suffix extension for addr decode
            have hAddrSfx := addr_decode_suffix_ok mode here addrBytes aR 0
                initCache addr' addrBytes.size cacheUpd hAddrRT
            -- Basic size facts
            have hMkSz : (ByteArray.mk #[opcode] : ByteArray).size = 1 := rfl
            have hEmptySz : ByteArray.empty.size = 0 := rfl
            -- Reduce tuple projections
            show (ByteArray.mk #[opcode]).size ≥ 1 ∧
              2 ≥ 1 ∧ i + 2 ≤ insts.size ∧
              cacheUpd.sNear + cacheUpd.sSame ≤ 7 ∧
              initTarget.size + data.size + sz' =
                (execInstArraySpec insts sourceWindow initTarget i (i + 2)).size ∧
              decodeOneStep sourceWindow initTarget
                ⟨ByteArray.mk #[opcode] ++ iR, 0⟩
                ⟨data ++ dR, 0⟩ ⟨addrBytes ++ aR, 0⟩ initCache =
              .ok (execInstArraySpec insts sourceWindow initTarget i (i + 2),
                ⟨ByteArray.mk #[opcode] ++ iR, (ByteArray.mk #[opcode]).size⟩,
                ⟨data ++ dR, data.size⟩, ⟨addrBytes ++ aR, addrBytes.size⟩, cacheUpd)
            refine ⟨by rw [hMkSz], by omega, by omega, by omega, ?_, ?_⟩
            · -- tp' = exec size
              rw [execInstArraySpec_double _ _ _ i h_i h_next, h_bang_i, h_inst,
                  h_bang_i1, h_next_inst, execInstSpec, execInstSpec,
                  ByteArray.size_append, ByteArray.size_append,
                  bytearray_extract_size sourceWindow addr' (addr' + sz') hAddr']
              omega
            · -- decodeOneStep
              rw [execInstArraySpec_double _ _ _ i h_i h_next, h_bang_i, h_inst,
                  h_bang_i1, h_next_inst, execInstSpec, execInstSpec]
              rcases h_case with ⟨hm5, hc4, hc6, rfl⟩ | ⟨hm6, hm8', hc4, rfl⟩
              · -- Low mode (0-5), copySz 4-6
                rw [decodeOneStep_add_copy_in_concat data.size sz' mode addr'
                    sourceWindow initTarget
                    (ByteArray.mk #[(163 + mode * 12 + (data.size - 1) * 3 + (sz' - 4)).toUInt8] ++ iR)
                    (data ++ dR) (addrBytes ++ aR) 0 0 0 addrBytes.size
                    initCache cacheUpd
                    hDataSz (by omega) hc4 hc6 hm5
                    (by rw [ByteArray.size_append]; omega)
                    (by rw [ba_getElem_bang_append_left _ iR 0 (by omega)]; rfl)
                    (by rw [ByteArray.size_append]; omega)
                    hAddr'
                    (by rw [hModeRT]
                        convert hAddrSfx using 2
                        simp only [ByteArray.size_append, Nat.zero_add,
                            bytearray_extract_append_left data dR 0 data.size (le_refl _),
                            bytearray_extract_full]; omega)]
                simp only [Nat.zero_add,
                    bytearray_extract_append_left data dR 0 data.size (le_refl _),
                    bytearray_extract_full, hMkSz]
              · -- High mode (6-8), copySz=4
                subst hc4
                rw [decodeOneStep_add_copy_high_in_concat data.size mode addr'
                    sourceWindow initTarget
                    (ByteArray.mk #[(235 + (mode - 6) * 4 + (data.size - 1)).toUInt8] ++ iR)
                    (data ++ dR) (addrBytes ++ aR) 0 0 0 addrBytes.size
                    initCache cacheUpd
                    hDataSz (by omega) hm6 hm8'
                    (by rw [ByteArray.size_append]; omega)
                    (by rw [ba_getElem_bang_append_left _ iR 0 (by omega)]; rfl)
                    (by rw [ByteArray.size_append]; omega)
                    hAddr'
                    (by rw [hModeRT]
                        convert hAddrSfx using 2
                        simp only [ByteArray.size_append, Nat.zero_add,
                            bytearray_extract_append_left data dR 0 data.size (le_refl _),
                            bytearray_extract_full]; omega)]
                simp only [Nat.zero_add,
                    bytearray_extract_append_left data dR 0 data.size (le_refl _),
                    bytearray_extract_full, hMkSz]
        · -- RUN: contradiction
          rw [h_bang_i1, h_next_inst] at heq_paired
          simp [h_next] at heq_paired
      · -- single ADD
        simp only [Encoder.findSingleOpcode]
        split <;> rename_i h_szcheck
        · -- immediate ADD (size 1-17)
          have h1 : data.size ≥ 1 := by
            revert h_szcheck; simp [Bool.and_eq_true, decide_eq_true_eq]; omega
          have h17 : data.size ≤ 17 := by
            revert h_szcheck; simp [Bool.and_eq_true, decide_eq_true_eq]
          have hMkSz : (ByteArray.mk #[(1 + data.size).toUInt8] : ByteArray).size = 1 := rfl
          have hEmptySz : ByteArray.empty.size = 0 := rfl
          simp only [Bool.false_eq_true, ite_false]
          refine ⟨by rw [push_eq_append_singleton, ByteArray.size_append, hMkSz]; omega,
                  le_refl 1, by omega, h_cache, ?_, ?_⟩
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec,
                ByteArray.size_append]
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec,
                push_eq_append_singleton ByteArray.empty _,
                bytearray_empty_append (ByteArray.mk #[(1 + data.size).toUInt8]),
                bytearray_empty_append data, bytearray_empty_append aR]
            rw [decodeOneStep_add_in_concat data.size sourceWindow initTarget
                (ByteArray.mk #[(1 + data.size).toUInt8] ++ iR) 0
                (data ++ dR) 0 aR 0 initCache h1 h17
                (by rw [ByteArray.size_append, hMkSz]; omega)
                (by rw [ba_getElem_bang_append_left _ iR 0 (by rw [hMkSz]; omega)]; rfl)
                (by rw [ByteArray.size_append]; omega)]
            simp only [Nat.zero_add]
            rw [bytearray_extract_append_left data dR 0 data.size (le_refl _),
                bytearray_extract_full]
            simp only [hMkSz, hEmptySz]
        · -- varint ADD (size > 17)
          simp only [show ((1 : UInt8), true).2 = true from rfl, ↓reduceIte,
                     show ((1 : UInt8), true).1 = (1 : UInt8) from rfl]
          have hMk1Sz : (ByteArray.mk #[(1 : UInt8)] : ByteArray).size = 1 := rfl
          have hEmptySz : ByteArray.empty.size = 0 := rfl
          refine ⟨by rw [push_eq_append_singleton, ByteArray.size_append,
                         ByteArray.size_append, hMk1Sz]; omega,
                  le_refl 1, by omega, h_cache, ?_, ?_⟩
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec,
                ByteArray.size_append]
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec]
            rw [push_eq_append_singleton ByteArray.empty (1 : UInt8),
                bytearray_empty_append (ByteArray.mk #[(1 : UInt8)]),
                bytearray_append_assoc (ByteArray.mk #[(1 : UInt8)]) (Varint.encode data.size) iR,
                bytearray_empty_append data, bytearray_empty_append aR]
            have hSzBound35 : data.size < 2 ^ 35 := by omega
            have hDE := Varint.decode_encode data.size hSzBound35
            have hSfx := varint_decode_suffix_ok (Varint.encode data.size) iR 0 data.size
                (Varint.encode data.size).size hDE
            have hPfx := CursorReloc.varint_decode_reloc_ok (ByteArray.mk #[(1 : UInt8)])
                (Varint.encode data.size ++ iR) 0 data.size (Varint.encode data.size).size hSfx
            simp only [ByteArray.size, Nat.add_zero] at hPfx
            rw [decodeOneStep_add_varint_in_concat data.size sourceWindow initTarget
                (ByteArray.mk #[(1 : UInt8)] ++ (Varint.encode data.size ++ iR)) 0
                (data ++ dR) 0 aR 0 initCache
                (by rw [ByteArray.size_append, hMk1Sz]; omega)
                (by rw [ba_getElem_bang_append_left _ _ 0 (by rw [hMk1Sz]; omega)]; rfl)
                (by convert hPfx using 2)
                (by rw [ByteArray.size_append]; omega)]
            simp only [Nat.zero_add]
            rw [bytearray_extract_append_left data dR 0 data.size (le_refl _),
                bytearray_extract_full]
            simp only [ByteArray.size_append, hMk1Sz, hEmptySz]
    · omega
  · -- COPY case
    simp only [encodeOneInstPaired]
    unfold Encoder.encodeOneInst'
    split
    · -- i < insts.size
      simp only [h_inst]
      rw [h_inst] at h_vi; simp only [ValidInst] at h_vi
      obtain ⟨hSz, hSzBound, hAddr_copy, hAddrBound⟩ := h_vi
      -- Destructure encodeAddress
      set here := sourceWindow.size + initTarget.size with h_here_def
      set mode := (initCache.encodeAddress addr here).1
      set addrBytes := (initCache.encodeAddress addr here).2.1
      set cacheUpd := (initCache.encodeAddress addr here).2.2
      have h_eaddr : initCache.encodeAddress addr here = (mode, addrBytes, cacheUpd) := by
        simp [mode, addrBytes, cacheUpd]
      -- Mode properties
      have h_mode_bound := encodeAddress_mode_bound initCache addr here
      rw [h_eaddr] at h_mode_bound; simp only [] at h_mode_bound
      have hMode8 : mode ≤ 8 := by omega
      have hModeRT : mode.toUInt8.toNat = mode := by
        simp [UInt8.toNat, Nat.toUInt8, BitVec.toNat]; omega
      -- Cache preservation
      have h_cache_pres := encodeAddress_preserves_cache_size initCache addr here
      rw [h_eaddr] at h_cache_pres; simp only [] at h_cache_pres
      -- Address roundtrip
      have hAddrRT := encodeAddress_decode_roundtrip initCache addr here (by omega)
      rw [h_eaddr] at hAddrRT; simp only [] at hAddrRT
      -- Suffix extension for addr decode
      have hAddrSfx := addr_decode_suffix_ok mode here addrBytes aR 0
          initCache addr addrBytes.size cacheUpd hAddrRT
      -- Split on paired result (some vs none)
      split
      · -- paired COPY+ADD
        rename_i is' ds' as' c' tp' skip' heq_paired
        -- sz must be 4 for pairing
        have h_sz4 : sz = 4 := by
          by_contra h_not
          have : (sz == 4) = false := beq_eq_false_iff_ne.mpr h_not
          simp [this] at heq_paired
        subst h_sz4
        -- i + 1 must be in bounds
        have h_next : i + 1 < insts.size := by
          by_contra h_not; simp [show ¬(i + 1 < insts.size) from h_not] at heq_paired
        have h_bang_i1 : insts[i + 1]! = insts[i + 1] := by simp [getElem!_pos, h_next]
        have h_next_vi := h_valid (i + 1) h_next
        rw [h_bang_i1] at h_next_vi
        rcases h_next_inst : insts[i + 1] with ⟨data'⟩ | ⟨addr'', sz''⟩ | ⟨byte'', sz''⟩
        · -- Next is ADD: the pairing case
          rw [h_bang_i1, h_next_inst] at heq_paired
          -- Reduce match on .add data' and simplify conditions
          simp only [h_next, beq_self_eq_true, Bool.true_and, ite_true,
                     decide_true] at heq_paired
          rw [h_next_inst] at h_next_vi; simp only [ValidInst] at h_next_vi
          obtain ⟨hDataSz', hDataSzBound'⟩ := h_next_vi
          -- data'.size must be 1
          have h_ds1 : data'.size = 1 := by
            by_contra h_not
            have : (data'.size == 1) = false := beq_eq_false_iff_ne.mpr h_not
            simp [this] at heq_paired
          simp only [h_ds1, beq_self_eq_true, ite_true] at heq_paired
          -- findCopyAddOpcode must return some
          rcases h_fca : Encoder.findCopyAddOpcode 4 mode 1 with _ | ⟨opcode⟩
          · simp [h_fca] at heq_paired
          · simp only [h_fca, Option.some.injEq, Prod.mk.injEq] at heq_paired
            obtain ⟨rfl, rfl, rfl, rfl, rfl, rfl⟩ := heq_paired
            have h_fca_spec := findCopyAddOpcode_spec 4 mode 1 opcode h_fca
            obtain ⟨_, _, hm8', rfl⟩ := h_fca_spec
            -- opcode = (247 + mode).toUInt8
            have hMkSz : (ByteArray.mk #[(247 + mode).toUInt8] : ByteArray).size = 1 := rfl
            dsimp only []
            refine ⟨by show 1 ≥ 1; omega, by omega, by omega, by omega, ?_, ?_⟩
            · -- tp' = exec size
              rw [execInstArraySpec_double _ _ _ i h_i h_next, h_bang_i, h_inst,
                  h_bang_i1, h_next_inst, execInstSpec, execInstSpec,
                  ByteArray.size_append, ByteArray.size_append,
                  bytearray_extract_size sourceWindow addr (addr + 4) hAddr_copy]
              omega
            · -- decodeOneStep
              rw [execInstArraySpec_double _ _ _ i h_i h_next, h_bang_i, h_inst,
                  h_bang_i1, h_next_inst, execInstSpec, execInstSpec]
              rw [push_eq_append_singleton ByteArray.empty (247 + mode).toUInt8,
                  bytearray_empty_append (ByteArray.mk #[(247 + mode).toUInt8]),
                  bytearray_empty_append data',
                  bytearray_empty_append addrBytes]
              rw [decodeOneStep_copy_add_in_concat mode addr
                  sourceWindow initTarget
                  (ByteArray.mk #[(247 + mode).toUInt8] ++ iR)
                  (data' ++ dR) (addrBytes ++ aR) 0 0 0 addrBytes.size
                  initCache cacheUpd
                  hm8'
                  (by rw [ByteArray.size_append]; omega)
                  (by rw [ba_getElem_bang_append_left _ iR 0 (by omega)]; rfl)
                  hAddr_copy
                  (by rw [hModeRT]; exact hAddrSfx)
                  (by rw [ByteArray.size_append]; omega)]
              simp only [Nat.zero_add, ← h_ds1,
                  bytearray_extract_append_left data' dR 0 data'.size (le_refl _),
                  bytearray_extract_full, hMkSz]
        · -- Next is COPY: contradiction
          rw [h_bang_i1, h_next_inst] at heq_paired
          simp [h_next] at heq_paired
        · -- Next is RUN: contradiction
          rw [h_bang_i1, h_next_inst] at heq_paired
          simp [h_next] at heq_paired
      · -- single COPY
        simp only [Encoder.findSingleOpcode]
        split <;> rename_i h_szcheck
        · -- immediate COPY (size 4-18)
          simp only [Bool.false_eq_true, ite_false]
          have hSz4 : sz ≥ 4 := by
            revert h_szcheck; simp [Bool.and_eq_true, decide_eq_true_eq]; omega
          have hSz18 : sz ≤ 18 := by
            revert h_szcheck; simp [Bool.and_eq_true, decide_eq_true_eq]
          have hOpEq : 19 + mode * 16 + sz - 4 + 1 = 19 + mode * 16 + sz - 3 := by omega
          have hMkSz : (ByteArray.mk #[(19 + mode * 16 + sz - 4 + 1).toUInt8] : ByteArray).size = 1 := rfl
          have hEmptySz : ByteArray.empty.size = 0 := rfl
          refine ⟨by rw [push_eq_append_singleton, ByteArray.size_append, hMkSz]; omega,
                  le_refl 1, by omega, by omega, ?_, ?_⟩
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec,
                ByteArray.size_append,
                bytearray_extract_size sourceWindow addr (addr + sz) hAddr_copy]
            omega
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec,
                push_eq_append_singleton ByteArray.empty _,
                bytearray_empty_append (ByteArray.mk #[(19 + mode * 16 + sz - 4 + 1).toUInt8]),
                bytearray_empty_append dR,
                bytearray_empty_append addrBytes]
            have hOpEq' : (19 + mode * 16 + sz - 4 + 1).toUInt8 = (19 + mode * 16 + sz - 3 : Nat).toUInt8 := by
              congr 1
            rw [decodeOneStep_copy_sized_general addr sz mode
                sourceWindow initTarget
                (ByteArray.mk #[(19 + mode * 16 + sz - 4 + 1).toUInt8] ++ iR)
                dR (addrBytes ++ aR) 0 0 0 addrBytes.size
                initCache cacheUpd
                hSz4 hSz18 hMode8 hAddr_copy
                (by rw [ByteArray.size_append, hMkSz]; omega)
                (by rw [ba_getElem_bang_append_left _ iR 0 (by rw [hMkSz]; omega)]
                    rw [hOpEq']; rfl)
                (by exact hAddrSfx)]
            simp only [hMkSz, hEmptySz]
        · -- varint COPY
          simp only [show ((19 + mode * 16 : Nat).toUInt8, true).2 = true from rfl, ↓reduceIte,
                     show ((19 + mode * 16 : Nat).toUInt8, true).1 = (19 + mode * 16 : Nat).toUInt8 from rfl]
          have hMkBaseSz : (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8] : ByteArray).size = 1 := rfl
          have hEmptySz : ByteArray.empty.size = 0 := rfl
          refine ⟨by rw [push_eq_append_singleton, ByteArray.size_append,
                         ByteArray.size_append, hMkBaseSz]; omega,
                  le_refl 1, by omega, by omega, ?_, ?_⟩
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec,
                ByteArray.size_append,
                bytearray_extract_size sourceWindow addr (addr + sz) hAddr_copy]
            omega
          · rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec]
            rw [push_eq_append_singleton ByteArray.empty (19 + mode * 16 : Nat).toUInt8,
                bytearray_empty_append (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8]),
                bytearray_append_assoc (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8]) (Varint.encode sz) iR,
                bytearray_empty_append dR, bytearray_empty_append addrBytes]
            have hSzBound35 : sz < 2 ^ 35 := by omega
            have hDE := Varint.decode_encode sz hSzBound35
            have hSfx := varint_decode_suffix_ok (Varint.encode sz) iR 0 sz
                (Varint.encode sz).size hDE
            have hPfx := CursorReloc.varint_decode_reloc_ok (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8])
                (Varint.encode sz ++ iR) 0 sz (Varint.encode sz).size hSfx
            simp only [ByteArray.size, Nat.add_zero] at hPfx
            rw [decodeOneStep_copy_varint_in_concat addr sz mode
                sourceWindow initTarget
                (ByteArray.mk #[(19 + mode * 16 : Nat).toUInt8] ++ (Varint.encode sz ++ iR)) 0
                dR 0 (addrBytes ++ aR) 0 addrBytes.size
                initCache cacheUpd
                hSz hSzBound hMode8 hAddr_copy
                (by rw [ByteArray.size_append, hMkBaseSz]; omega)
                (by rw [ba_getElem_bang_append_left _ _ 0 (by rw [hMkBaseSz]; omega)]; rfl)
                (by convert hPfx using 2)
                (by exact hAddrSfx)]
            simp only [Nat.zero_add, ByteArray.size_append, hMkBaseSz, hEmptySz]
    · omega
  · -- RUN case
    simp only [encodeOneInstPaired]
    unfold Encoder.encodeOneInst'
    split
    · -- i < insts.size case
      simp only [h_inst, Encoder.findSingleOpcode, ↓reduceIte]
      -- Get RUN validity
      rw [h_inst] at h_vi; simp only [ValidInst] at h_vi
      obtain ⟨hSz, hSzBound⟩ := h_vi
      have hRepSz : (repeatByte byte sz).size = sz := by
        simp [repeatByte, ByteArray.size, Array.size_replicate]
      have hMk0Sz : (ByteArray.mk #[0] : ByteArray).size = 1 := rfl
      have hMkBSz : (ByteArray.mk #[byte] : ByteArray).size = 1 := rfl
      have hEmptySz : ByteArray.empty.size = 0 := rfl
      -- Rewrite push to mk singleton
      show (ByteArray.empty.push 0 ++ Varint.encode sz).size ≥ 1 ∧ _
      refine ⟨by rw [ByteArray.size_append, push_eq_append_singleton,
                      ByteArray.size_append]; omega,
              le_refl 1, by omega, h_cache, ?_, ?_⟩
      · -- tp' = execInstArraySpec.size
        rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec]
        rw [ByteArray.size_append, hRepSz]
      · -- decodeOneStep
        rw [execInstArraySpec_single _ _ _ i h_i, h_bang_i, h_inst, execInstSpec]
        -- varint decode
        have hSzBound35 : sz < 2 ^ 35 := by omega
        have hDE := Varint.decode_encode sz hSzBound35
        have hSfx := varint_decode_suffix_ok (Varint.encode sz) iR 0 sz
            (Varint.encode sz).size hDE
        have hPfx := CursorReloc.varint_decode_reloc_ok (ByteArray.mk #[0])
            (Varint.encode sz ++ iR) 0 sz (Varint.encode sz).size hSfx
        simp only [ByteArray.size, Nat.add_zero] at hPfx
        rw [push_eq_append_singleton ByteArray.empty 0,
            bytearray_empty_append (ByteArray.mk #[0]),
            bytearray_append_assoc (ByteArray.mk #[0]) (Varint.encode sz) iR,
            push_eq_append_singleton ByteArray.empty byte,
            bytearray_empty_append (ByteArray.mk #[byte]),
            bytearray_empty_append aR]
        rw [decodeOneStep_run_in_concat byte sz sourceWindow initTarget
            (ByteArray.mk #[0] ++ (Varint.encode sz ++ iR)) 0
            (ByteArray.mk #[byte] ++ dR) 0 aR 0 initCache
            (by rw [ByteArray.size_append, hMk0Sz]; omega)
            (by rw [ba_getElem_bang_append_left _ _ 0 (by rw [hMk0Sz]; omega)]; rfl)
            (by convert hPfx using 2)
            (by rw [ByteArray.size_append, hMkBSz]; omega)
            (by rw [ba_getElem_bang_append_left _ dR 0 (by rw [hMkBSz]; omega)]; rfl)]
        simp only [ByteArray.size_append, hMk0Sz, hMkBSz, hEmptySz]
    · -- ¬(i < insts.size) - contradiction
      omega

-- ============================================================================
-- ## Main inductive paired roundtrip
-- ============================================================================

set_option maxHeartbeats 3200000 in
theorem encodeInstListPaired_decodeLoop_roundtrip
    (insts : Array Encoder.RawInst)
    (sourceWindow : ByteArray)
    (initTarget : ByteArray)
    (initCache : AddressCache.State)
    (h_valid : ValidInstArray insts sourceWindow)
    (h_cache : initCache.sNear + initCache.sSame ≤ 7)
    (fuel i : Nat) (h_fuel : fuel + i ≥ insts.size) :
    let (dataSec, instSec, addrSec, finalCache, _finalPos) :=
      encodeInstListPaired insts sourceWindow.size initCache initTarget.size fuel i
    ∃ n, n ≤ instSec.size ∧
    decodeLoop n sourceWindow initTarget
      ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ initCache =
    .ok (execInstArraySpec insts sourceWindow initTarget i insts.size,
         ⟨instSec, instSec.size⟩,
         ⟨dataSec, dataSec.size⟩,
         ⟨addrSec, addrSec.size⟩,
         finalCache) := by
  induction fuel generalizing i initTarget initCache with
  | zero =>
    simp only [encodeInstListPaired]
    have h_ge : i ≥ insts.size := by omega
    rw [execInstArraySpec_base _ _ _ i insts.size (by omega)]
    exact ⟨0, le_refl _, by simp [decodeLoop]⟩
  | succ m ih =>
    simp only [encodeInstListPaired]
    by_cases h_ge : i ≥ insts.size
    · simp only [h_ge, ↓reduceIte, ge_iff_le]
      rw [execInstArraySpec_base _ _ _ i insts.size (by omega)]
      exact ⟨0, le_refl _, by simp [decodeLoop]⟩
    · simp only [h_ge, ↓reduceIte, ge_iff_le]
      push_neg at h_ge
      -- Destructure encodeOneInstPaired via match
      match h_step_eq : encodeOneInstPaired insts i sourceWindow.size initCache initTarget.size with
      | (d1, i1, a1, cache', tp', skip) =>
      -- Destructure IH result via match
      -- First get step properties
      have h_step_ok := encodeOneInstPaired_decode_step insts i sourceWindow initTarget
        initCache (encodeInstListPaired insts sourceWindow.size cache' tp' m (i + skip)).2.1
        (encodeInstListPaired insts sourceWindow.size cache' tp' m (i + skip)).1
        (encodeInstListPaired insts sourceWindow.size cache' tp' m (i + skip)).2.2.1
        h_valid h_cache h_ge
      rw [h_step_eq] at h_step_ok
      simp only [] at h_step_ok
      obtain ⟨h_i1_pos, h_skip_pos, h_skip_bound, h_cache', h_tp', h_decode⟩ := h_step_ok
      -- Apply IH
      have h_fuel_rest : m + (i + skip) ≥ insts.size := by omega
      have h_ih := ih (execInstArraySpec insts sourceWindow initTarget i (i + skip))
        cache' h_cache' (i + skip) h_fuel_rest
      -- Need tp' = (execInstArraySpec ...).size to match IH
      rw [← h_tp'] at h_ih
      match h_rest_eq : encodeInstListPaired insts sourceWindow.size cache' tp' m (i + skip) with
      | (dR, iR, aR, cacheFinal, tpFinal) =>
      rw [h_rest_eq] at h_ih h_decode
      simp only [] at h_ih h_decode
      obtain ⟨nR, h_nR_le, h_ih_decode⟩ := h_ih
      -- Compose: decodeLoop_compose_step
      have h_composed := decodeLoop_compose_step nR sourceWindow initTarget
        (execInstArraySpec insts sourceWindow initTarget i (i + skip))
        (execInstArraySpec insts sourceWindow
          (execInstArraySpec insts sourceWindow initTarget i (i + skip)) (i + skip) insts.size)
        i1 iR d1 dR a1 aR initCache cache' cacheFinal
        h_decode h_i1_pos h_ih_decode
      -- Use split property
      rw [← execInstArraySpec_split insts sourceWindow initTarget i (i + skip) insts.size
        (by omega) (by omega)] at h_composed
      simp only [h_step_eq, h_rest_eq]
      exact ⟨nR + 1, by simp [ByteArray.size_append]; omega, h_composed⟩

-- ============================================================================
-- ## Bridge: discharge h_loop from full_encode_decode_roundtrip
-- ============================================================================

-- Initial cache satisfies bound
private theorem init_cache_bound :
    AddressCache.State.init.sNear + AddressCache.State.init.sSame ≤ 7 := by
  native_decide

-- Bridge: if instructions are valid and execute to target, h_loop holds
theorem h_loop_discharge
    (insts : Array Encoder.RawInst)
    (sourceWindow : ByteArray)
    (target : ByteArray)
    (h_valid : ValidInstArray insts sourceWindow)
    (h_exec : execInstArraySpec insts sourceWindow ByteArray.empty 0 insts.size = target) :
    let secs := Encoder.encodeWindow insts sourceWindow.size
    ∃ cache,
      decodeLoop secs.2.1.size sourceWindow ByteArray.empty
        ⟨secs.2.1, 0⟩ ⟨secs.1, 0⟩ ⟨secs.2.2, 0⟩ AddressCache.State.init =
      .ok (target, ⟨secs.2.1, secs.2.1.size⟩, ⟨secs.1, secs.1.size⟩,
           ⟨secs.2.2, secs.2.2.size⟩, cache) := by
  -- Rewrite encodeWindow to encodeInstListPaired
  rw [encodeWindow_eq_paired]
  -- Destructure the paired result
  match h_paired : encodeInstListPaired insts sourceWindow.size
      AddressCache.State.init 0 insts.size 0 with
  | (dataSec, instSec, addrSec, finalCache, _finalPos) =>
  simp only []
  -- Apply the inductive roundtrip theorem
  have h_rt := encodeInstListPaired_decodeLoop_roundtrip insts sourceWindow
    ByteArray.empty AddressCache.State.init h_valid init_cache_bound
    insts.size 0 (by omega)
  rw [show ByteArray.empty.size = 0 from rfl] at h_rt
  rw [h_paired] at h_rt
  simp only [] at h_rt
  obtain ⟨n, h_n_le, h_decode⟩ := h_rt
  -- Rewrite execInstArraySpec to target
  rw [h_exec] at h_decode
  -- Extend fuel from n to instSec.size
  have h_fuel := decodeLoop_fuel_add sourceWindow ByteArray.empty
    ⟨instSec, 0⟩ ⟨dataSec, 0⟩ ⟨addrSec, 0⟩ AddressCache.State.init
    n (instSec.size - n)
    (target, ⟨instSec, instSec.size⟩, ⟨dataSec, dataSec.size⟩,
     ⟨addrSec, addrSec.size⟩, finalCache)
    h_decode
  rw [show n + (instSec.size - n) = instSec.size from by omega] at h_fuel
  exact ⟨finalCache, h_fuel⟩

-- srcWin size equals source size
private theorem srcWin_size (source : ByteArray) :
    (if source.size > 0 then source else ByteArray.empty).size = source.size := by
  split
  · rfl
  · rename_i h; push_neg at h
    have hsz : source.size = 0 := by omega
    rw [show ByteArray.empty.size = 0 from rfl, hsz]

-- Stronger full roundtrip: h_loop replaced by instruction validity + execution
theorem full_encode_decode_roundtrip'
    (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31)
    (h_sec_bound :
      let secs := Encoder.encodeWindow
        (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
        source.size
      secs.1.size + secs.2.1.size + secs.2.2.size + 30 < 2 ^ 35)
    (h_valid : ValidInstArray
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      (if source.size > 0 then source else ByteArray.empty))
    (h_exec : execInstArraySpec
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      (if source.size > 0 then source else ByteArray.empty)
      ByteArray.empty 0
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target).size
      = target) :
    Decoder.decode (Encoder.encode source target) source = .ok target := by
  have h_loop := h_loop_discharge _ _ _ h_valid h_exec
  rw [srcWin_size] at h_loop
  exact full_encode_decode_roundtrip source target
    h_source_bound h_target_bound h_sec_bound h_loop

end LeanBdiff.Vcdiff.PairedRoundtrip
