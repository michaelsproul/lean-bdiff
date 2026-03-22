/-
  Phase G, Step 4: generateInstructions correctness proof.

  Proves that `generateInstructions` produces:
  1. Valid instructions (`ValidInstArray`)
  2. Instructions whose execution reproduces the target (`execInstArraySpec = target`)

  Key results:
  - extendForward/Backward byte equality and bounds
  - extendMatch_bytes_eq: matched bytes are equal in source and target
  - emitAddWithRuns_exec: executing emitAddWithRuns instructions = appending original data
  - generateInstructions_valid: all generated instructions are valid
  - generateInstructions_exec: executing generated instructions reproduces target
  - full_encode_decode_roundtrip_final: unconditional encode/decode roundtrip
-/
import LeanBdiff.Vcdiff.Proofs.PairedRoundtrip

namespace LeanBdiff.Vcdiff.GenerateInstructions

open LeanBdiff.Vcdiff
open LeanBdiff.Vcdiff.WindowRoundtrip
open LeanBdiff.Vcdiff.PairedRoundtrip

-- ============================================================================
-- ## ByteArray helper lemmas
-- ============================================================================

theorem bytearray_append_empty (ba : ByteArray) : ba ++ ByteArray.empty = ba := by
  apply ByteArray.ext
  simp [ByteArray.data_append, ByteArray.size]

theorem bytearray_empty_append (ba : ByteArray) : ByteArray.empty ++ ba = ba := by
  apply ByteArray.ext
  simp [ByteArray.data_append, ByteArray.size]

theorem bytearray_append_assoc (a b c : ByteArray) :
    a ++ b ++ c = a ++ (b ++ c) := by
  apply ByteArray.ext
  simp [ByteArray.data_append, List.append_assoc]

theorem bytearray_extract_full (ba : ByteArray) :
    ba.extract 0 ba.size = ba := by
  apply ByteArray.ext
  simp [ByteArray.data_extract]

-- Two ByteArrays are equal if they have the same size and same bytes
theorem bytearray_eq_of_getElem_eq (a b : ByteArray)
    (h_size : a.size = b.size)
    (h_bytes : ∀ i (hi_a : i < a.size) (hi_b : i < b.size), a[i] = b[i]) :
    a = b := by
  apply ByteArray.ext
  apply Array.ext
  · exact h_size
  · intro i hi_a hi_b
    exact h_bytes i hi_a hi_b

-- extract can be split: ba.extract a c = ba.extract a b ++ ba.extract b c
theorem bytearray_extract_split (ba : ByteArray) (a b c : Nat)
    (hab : a ≤ b) (hbc : b ≤ c) (hc : c ≤ ba.size) :
    ba.extract a c = ba.extract a b ++ ba.extract b c := by
  apply bytearray_eq_of_getElem_eq
  · -- sizes
    rw [ByteArray.size_extract, ByteArray.size_append, ByteArray.size_extract, ByteArray.size_extract]
    omega
  · intro i hi_a hi_b
    rw [ByteArray.size_extract] at hi_a
    rw [ByteArray.size_append, ByteArray.size_extract, ByteArray.size_extract] at hi_b
    by_cases h : i < b - a
    · have h1 : i < (ba.extract a b).size := by rw [ByteArray.size_extract]; omega
      rw [ByteArray.get_append_left h1]
      simp only [ByteArray.getElem_extract]
    · push_neg at h
      have h1 : (ba.extract a b).size ≤ i := by rw [ByteArray.size_extract]; omega
      rw [ByteArray.get_append_right h1]
      simp only [ByteArray.getElem_extract, ByteArray.size_extract]; congr 1; omega

-- extract of empty range (works for any i, even past end)
theorem bytearray_extract_empty_range' (ba : ByteArray) (i : Nat) :
    ba.extract i i = ByteArray.empty := by
  apply ByteArray.ext
  simp [ByteArray.data_extract, Array.size_extract]

theorem bytearray_extract_empty_range (ba : ByteArray) (i : Nat) (h : i ≤ ba.size) :
    ba.extract i i = ByteArray.empty :=
  bytearray_extract_empty_range' ba i

-- ============================================================================
-- ## extendForward properties
-- ============================================================================

-- All bytes in range [len, forwardMatchLen) match
theorem extendForward_bytes_eq (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) (len j : Nat)
    (hle : len ≤ j) (hlt : j < Encoder.extendForward source sp target tp len) :
    sp + j < source.size ∧ tp + j < target.size ∧
    source[sp + j]! = target[tp + j]! := by
  induction len using Encoder.extendForward.induct source sp target tp with
  | case1 k h ih =>
    rw [Encoder.extendForward, if_pos h] at hlt
    by_cases hj : j = k
    · subst hj; exact ⟨h.1, h.2.1, by rw [← beq_iff_eq]; exact h.2.2⟩
    · exact ih (by omega) hlt
  | case2 k h =>
    rw [Encoder.extendForward, if_neg h] at hlt; omega

-- extendForward result ≥ input
theorem extendForward_ge (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) (len : Nat) :
    len ≤ Encoder.extendForward source sp target tp len := by
  induction len using Encoder.extendForward.induct source sp target tp with
  | case1 k h ih => rw [Encoder.extendForward, if_pos h]; omega
  | case2 k h => rw [Encoder.extendForward, if_neg h]

-- extendForward from 0 is bounded by source
theorem extendForward_source_bound (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) (h_sp : sp ≤ source.size) :
    sp + Encoder.extendForward source sp target tp 0 ≤ source.size := by
  set n := Encoder.extendForward source sp target tp 0
  by_cases hn : n = 0
  · rw [hn]; omega
  · have := (extendForward_bytes_eq source sp target tp 0 (n - 1) (by omega) (by omega)).1
    omega

-- extendForward from 0 is bounded by target
theorem extendForward_target_bound (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) (h_tp : tp ≤ target.size) :
    tp + Encoder.extendForward source sp target tp 0 ≤ target.size := by
  set n := Encoder.extendForward source sp target tp 0
  by_cases hn : n = 0
  · rw [hn]; omega
  · have := (extendForward_bytes_eq source sp target tp 0 (n - 1) (by omega) (by omega)).2.1
    omega

-- ============================================================================
-- ## extendBackward properties
-- ============================================================================

-- All bytes in range [back, backwardMatchLen) match
theorem extendBackward_bytes_eq (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) (back j : Nat)
    (hle : back ≤ j) (hlt : j < Encoder.extendBackward source sp target tp back) :
    sp > j ∧ tp > j ∧
    source[sp - j - 1]! = target[tp - j - 1]! := by
  induction back using Encoder.extendBackward.induct source sp target tp with
  | case1 k h ih =>
    rw [Encoder.extendBackward, if_pos h] at hlt
    by_cases hj : j = k
    · subst hj; exact ⟨h.1, h.2.1, by rw [← beq_iff_eq]; exact h.2.2⟩
    · exact ih (by omega) hlt
  | case2 k h =>
    rw [Encoder.extendBackward, if_neg h] at hlt; omega

-- extendBackward is bounded by sp
theorem extendBackward_sp_bound (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) :
    Encoder.extendBackward source sp target tp 0 ≤ sp := by
  set n := Encoder.extendBackward source sp target tp 0
  by_cases hn : n = 0
  · omega
  · have := (extendBackward_bytes_eq source sp target tp 0 (n - 1) (by omega) (by omega)).1
    omega

-- extendBackward is bounded by tp
theorem extendBackward_tp_bound (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) :
    Encoder.extendBackward source sp target tp 0 ≤ tp := by
  set n := Encoder.extendBackward source sp target tp 0
  by_cases hn : n = 0
  · omega
  · have := (extendBackward_bytes_eq source sp target tp 0 (n - 1) (by omega) (by omega)).2.1
    omega

-- ============================================================================
-- ## extendMatch properties (combining forward + backward)
-- ============================================================================

-- extendMatch: all bytes in the match region are equal between source and target
theorem extendMatch_bytes_eq (source : ByteArray) (sp : Nat) (target : ByteArray) (tp : Nat)
    (h_sp : sp ≤ source.size) (h_tp : tp ≤ target.size) :
    let m := Encoder.extendMatch source sp target tp
    source.extract m.sourcePos (m.sourcePos + m.length) =
    target.extract m.targetPos (m.targetPos + m.length) := by
  simp only [Encoder.extendMatch]
  set fwd := Encoder.extendForward source sp target tp 0
  set bck := Encoder.extendBackward source sp target tp 0
  have h_bck_sp := extendBackward_sp_bound source sp target tp
  have h_bck_tp := extendBackward_tp_bound source sp target tp
  have h_sp_eq : sp - bck + (fwd + bck) = sp + fwd := by omega
  have h_tp_eq : tp - bck + (fwd + bck) = tp + fwd := by omega
  rw [h_sp_eq, h_tp_eq]
  apply bytearray_eq_of_getElem_eq
  · have h_fwd_src := extendForward_source_bound source sp target tp h_sp
    have h_fwd_tgt := extendForward_target_bound source sp target tp h_tp
    simp only [ByteArray.size, ByteArray.data_extract, Array.size_extract] at *
    omega
  · intro i hi_a hi_b
    have h_fwd_src := extendForward_source_bound source sp target tp h_sp
    have h_fwd_tgt := extendForward_target_bound source sp target tp h_tp
    rw [ByteArray.size_extract] at hi_a
    rw [ByteArray.size_extract] at hi_b
    rw [ByteArray.getElem_extract, ByteArray.getElem_extract]
    -- Convert dependent getElem to getElem! to allow index rewriting
    rw [← getElem!_pos source (sp - bck + i) (by omega),
        ← getElem!_pos target (tp - bck + i) (by omega)]
    by_cases h_back : i < bck
    · have h_eq := extendBackward_bytes_eq source sp target tp 0 (bck - i - 1) (by omega) (by omega)
      rw [show sp - bck + i = sp - (bck - i - 1) - 1 from by omega,
          show tp - bck + i = tp - (bck - i - 1) - 1 from by omega]
      exact h_eq.2.2
    · push_neg at h_back
      have h_eq := extendForward_bytes_eq source sp target tp 0 (i - bck) (by omega) (by omega)
      rw [show sp - bck + i = sp + (i - bck) from by omega,
          show tp - bck + i = tp + (i - bck) from by omega]
      exact h_eq.2.2

-- extendMatch result is within source bounds
theorem extendMatch_source_bound (source : ByteArray) (sp : Nat) (target : ByteArray) (tp : Nat)
    (h_sp : sp ≤ source.size) :
    let m := Encoder.extendMatch source sp target tp
    m.sourcePos + m.length ≤ source.size := by
  simp only [Encoder.extendMatch]
  have h_bck := extendBackward_sp_bound source sp target tp
  have h_fwd := extendForward_source_bound source sp target tp h_sp
  omega

-- extendMatch result is within target bounds
theorem extendMatch_target_bound (source : ByteArray) (sp : Nat) (target : ByteArray) (tp : Nat)
    (h_tp : tp ≤ target.size) :
    let m := Encoder.extendMatch source sp target tp
    m.targetPos + m.length ≤ target.size := by
  simp only [Encoder.extendMatch]
  have h_bck := extendBackward_tp_bound source sp target tp
  have h_fwd := extendForward_target_bound source sp target tp h_tp
  omega

-- extendMatch backward: sourcePos ≤ sp and targetPos ≤ tp
theorem extendMatch_backward_bound (source : ByteArray) (sp : Nat)
    (target : ByteArray) (tp : Nat) :
    let m := Encoder.extendMatch source sp target tp
    m.sourcePos ≤ sp ∧ m.targetPos ≤ tp := by
  simp only [Encoder.extendMatch]
  exact ⟨by omega, by omega⟩

-- ============================================================================
-- ## findBestMatch correctness
-- ============================================================================

-- A predicate capturing that a match was produced by extendMatch
def IsExtendMatch (source target : ByteArray) (targetPos : Nat) (m : Encoder.Match) : Prop :=
  ∃ cand : Nat,
    m = Encoder.extendMatch source cand target targetPos ∧
    m.length ≥ Encoder.hashWindow ∧
    cand ≤ source.size

-- Key invariant: findBestMatchRec returns either `best` or an extendMatch result
theorem findBestMatchRec_inv (source target : ByteArray) (targetPos : Nat)
    (candidates : List Nat) (maxChain : Nat) (best : Option Encoder.Match) (checked : Nat)
    (m : Encoder.Match)
    (h : Encoder.findBestMatchRec source target targetPos candidates maxChain best checked = some m)
    (h_best : best = some m → IsExtendMatch source target targetPos m) :
    IsExtendMatch source target targetPos m := by
  induction candidates generalizing best checked with
  | nil =>
    simp only [Encoder.findBestMatchRec] at h
    exact h_best h
  | cons cand rest ih =>
    simp only [Encoder.findBestMatchRec] at h
    by_cases h_chain : checked ≥ maxChain
    · simp only [h_chain, ↓reduceIte] at h; exact h_best h
    · simp only [h_chain, ↓reduceIte] at h
      apply ih _ _ h
      intro h_eq
      -- h_eq says the computed best' = some m; case-split to determine what best' is
      by_cases h_cand : cand + Encoder.hashWindow ≤ source.size
      · simp only [h_cand, ↓reduceIte] at h_eq
        by_cases h_len : (Encoder.extendMatch source cand target targetPos).length ≥ Encoder.hashWindow
        · simp only [h_len, ↓reduceIte] at h_eq
          match best, h_best with
          | none, _ =>
            simp only at h_eq
            have h_meq := (Option.some.inj h_eq).symm
            subst h_meq; exact ⟨cand, rfl, h_len, by omega⟩
          | some prev, h_best =>
            by_cases h_better : (Encoder.extendMatch source cand target targetPos).length > prev.length
            · simp only [h_better, ↓reduceIte] at h_eq
              have h_meq := (Option.some.inj h_eq).symm
              subst h_meq; exact ⟨cand, rfl, h_len, by omega⟩
            · simp only [h_better, ↓reduceIte] at h_eq
              exact h_best h_eq
        · simp only [h_len, ↓reduceIte] at h_eq
          exact h_best h_eq
      · simp only [h_cand, ↓reduceIte] at h_eq
        exact h_best h_eq

-- Derive: findBestMatch returns an extendMatch result
theorem findBestMatch_isExtendMatch (idx : Encoder.SourceIndex) (target : ByteArray) (pos : Nat)
    (m : Encoder.Match) (h : Encoder.findBestMatch idx target pos = some m) :
    IsExtendMatch idx.sourceData target pos m := by
  simp only [Encoder.findBestMatch] at h
  split at h
  · contradiction
  · exact findBestMatchRec_inv _ _ _ _ _ _ _ _ h (by simp)

-- If findBestMatch returns some match, source and target bytes are equal
theorem findBestMatch_bytes_eq (idx : Encoder.SourceIndex) (target : ByteArray) (pos : Nat)
    (m : Encoder.Match) (h : Encoder.findBestMatch idx target pos = some m)
    (h_tp : pos ≤ target.size) :
    idx.sourceData.extract m.sourcePos (m.sourcePos + m.length) =
    target.extract m.targetPos (m.targetPos + m.length) := by
  obtain ⟨cand, h_eq, _, h_cand⟩ := findBestMatch_isExtendMatch idx target pos m h
  rw [h_eq]; exact extendMatch_bytes_eq _ _ _ _ h_cand h_tp

-- If findBestMatch returns some match, it's within source bounds
theorem findBestMatch_source_bound (idx : Encoder.SourceIndex) (target : ByteArray) (pos : Nat)
    (m : Encoder.Match) (h : Encoder.findBestMatch idx target pos = some m) :
    m.sourcePos + m.length ≤ idx.sourceData.size := by
  obtain ⟨cand, h_eq, _, h_cand⟩ := findBestMatch_isExtendMatch idx target pos m h
  rw [h_eq]; exact extendMatch_source_bound _ _ _ _ h_cand

-- If findBestMatch returns some match, it's within target bounds
theorem findBestMatch_target_bound (idx : Encoder.SourceIndex) (target : ByteArray) (pos : Nat)
    (m : Encoder.Match) (h : Encoder.findBestMatch idx target pos = some m)
    (h_tp : pos ≤ target.size) :
    m.targetPos + m.length ≤ target.size := by
  obtain ⟨cand, h_eq, _, _⟩ := findBestMatch_isExtendMatch idx target pos m h
  rw [h_eq]; exact extendMatch_target_bound _ _ _ _ h_tp

-- If findBestMatch returns some match, length >= hashWindow
theorem findBestMatch_min_length (idx : Encoder.SourceIndex) (target : ByteArray) (pos : Nat)
    (m : Encoder.Match) (h : Encoder.findBestMatch idx target pos = some m) :
    m.length ≥ Encoder.hashWindow := by
  obtain ⟨_, _, h_len, _⟩ := findBestMatch_isExtendMatch idx target pos m h
  exact h_len

-- buildSourceIndex preserves source data
theorem buildSourceIndex_data (source : ByteArray) :
    (Encoder.buildSourceIndex source).sourceData = source := by
  unfold Encoder.buildSourceIndex
  simp [Id.run]
  split <;> rfl

-- ============================================================================
-- ## countRun properties
-- ============================================================================

-- countRun is bounded by data.size - start
theorem countRun_bound (data : ByteArray) (start : Nat) (b : UInt8) (runLen : Nat)
    (h : start + runLen ≤ data.size) :
    start + Encoder.countRun data start b runLen ≤ data.size := by
  induction runLen using Encoder.countRun.induct data start b with
  | case1 k hk ih =>
    rw [Encoder.countRun, if_pos hk]
    exact ih (by omega)
  | case2 k hk =>
    rw [Encoder.countRun, if_neg hk]
    exact h

-- All bytes in [start, start + runLen) equal b → all bytes in [start, start + countRun) equal b
theorem countRun_all_eq (data : ByteArray) (start : Nat) (b : UInt8) (runLen : Nat)
    (h_bound : start + runLen ≤ data.size)
    (h_prefix : ∀ j, j < runLen → data[start + j]! = b) :
    ∀ j, j < Encoder.countRun data start b runLen →
    data[start + j]! = b := by
  induction runLen using Encoder.countRun.induct data start b with
  | case1 k hk ih =>
    rw [Encoder.countRun, if_pos hk]
    apply ih (by omega)
    intro j hj
    by_cases hjk : j < k
    · exact h_prefix j (by omega)
    · push_neg at hjk
      have hjeq : j = k := by omega
      rw [hjeq]
      have h_beq := hk.2
      rw [beq_iff_eq] at h_beq
      exact h_beq
  | case2 k hk =>
    intro j hj
    rw [Encoder.countRun, if_neg hk] at hj
    exact h_prefix j hj

-- ============================================================================
-- ## emitAddWithRuns correctness
-- ============================================================================

-- A run of `n` identical bytes `b` equals repeatByte
theorem run_bytes_eq_repeatByte (data : ByteArray) (i n : Nat) (b : UInt8)
    (h_bound : i + n ≤ data.size)
    (h_all_eq : ∀ j, j < n → data[i + j]! = b) :
    data.extract i (i + n) = repeatByte b n := by
  apply ByteArray.ext
  rw [ByteArray.data_extract, show (repeatByte b n).data = Array.replicate n b from rfl]
  apply Array.ext
  · rw [Array.size_extract, Nat.min_eq_left (show i + n ≤ data.data.size from h_bound),
         Array.size_replicate]; omega
  · intro idx h1 h2
    rw [Array.size_replicate] at h2
    rw [Array.getElem_extract, Array.getElem_replicate]
    have hdom : i + idx < data.size := by omega
    have h_spec := h_all_eq idx h2
    rw [getElem!_pos data (i + idx) hdom] at h_spec
    exact h_spec

-- emitAddWithRunsRec is "append-linear" in result:
-- emitAddWithRunsRec (a ++ b) data i addStart = a ++ emitAddWithRunsRec b data i addStart
-- Specialized: emitAddWithRunsRec result data i addStart = result ++ emitAddWithRunsRec #[] data i addStart
private theorem emitAddWithRunsRec_append_aux (data : ByteArray) :
    ∀ (n i addStart : Nat) (result : Array Encoder.RawInst),
    data.size - i ≤ n →
    Encoder.emitAddWithRuns.emitAddWithRunsRec result data i addStart =
    result ++ Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data i addStart := by
  intro n
  induction n with
  | zero =>
    intro i addStart result hn
    have h_i : ¬(i < data.size) := by omega
    rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_i]
    conv_rhs => rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_i]
    by_cases h_as : addStart < data.size
    · simp only [h_as, ite_true]; rfl
    · simp only [h_as, ite_false]; simp
  | succ n ih =>
    intro i addStart result hn
    by_cases h_i : i < data.size
    · -- i < data.size
      have h_runLen_ge : Encoder.countRun data i data[i]! 1 ≥ 1 := Encoder.countRun_ge data i data[i]! 1
      rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_pos h_i]
      conv_rhs => rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_pos h_i]
      by_cases h_run : Encoder.minRunLength ≤ Encoder.countRun data i data[i]! 1
      · -- Run case
        simp only [h_run, ite_true]
        set rl := Encoder.countRun data i data[i]! 1
        conv_lhs => rw [ih (i + rl) (i + rl) _ (by omega)]
        conv_rhs => rw [ih (i + rl) (i + rl) _ (by omega)]
        -- Goal: result_l ++ X = result ++ (result_r ++ X)
        rw [← Array.append_assoc]
        congr 1
        -- Need: result_l = result ++ result_r
        split
        · -- i > addStart: (result.push add_inst).push run_inst = result ++ #[add_inst, run_inst]
          simp only [Array.push_eq_append, Array.append_assoc, Array.empty_append]
        · -- i <= addStart: result.push run_inst = result ++ #[run_inst]
          simp only [Array.push_eq_append, Array.empty_append]
      · -- Short run case
        simp only [h_run, ite_false]
        exact ih (i + Encoder.countRun data i data[i]! 1) addStart result (by omega)
    · -- i >= data.size
      rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_i]
      conv_rhs => rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_i]
      split
      · rfl
      · simp

private theorem emitAddWithRunsRec_append (data : ByteArray) (i addStart : Nat)
    (result : Array Encoder.RawInst) :
    Encoder.emitAddWithRuns.emitAddWithRunsRec result data i addStart =
    result ++ Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data i addStart :=
  emitAddWithRunsRec_append_aux data (data.size - i) i addStart result (le_refl _)

-- Helper: (a ++ b)[a.size + j]! = b[j]! for j < b.size
private theorem array_append_getElem_bang_right (a b : Array α) [Inhabited α] (j : Nat)
    (hj : j < b.size) :
    (a ++ b)[a.size + j]! = b[j]! := by
  have h_ab : a.size + j < (a ++ b).size := by rw [Array.size_append]; omega
  rw [getElem!_pos (c := a ++ b) (h := h_ab), getElem!_pos (c := b) (h := hj)]
  rw [Array.getElem_append_right (by omega)]
  congr 1; omega

-- Helper: execInstArraySpec on appended arrays, executing only the second part
private theorem execInstArraySpec_append_right
    (a b : Array Encoder.RawInst) (src tgt : ByteArray) :
    execInstArraySpec (a ++ b) src tgt a.size (a.size + b.size) =
    execInstArraySpec b src tgt 0 b.size := by
  -- Induction on the number of steps remaining
  suffices h : ∀ n k (tgt : ByteArray),
      k ≤ b.size → b.size - k ≤ n →
      execInstArraySpec (a ++ b) src tgt (a.size + k) (a.size + b.size) =
      execInstArraySpec b src tgt k b.size by
    have := h b.size 0 tgt (by omega) (by omega)
    rwa [Nat.add_zero] at this
  intro n
  induction n with
  | zero =>
    intro k tgt hk hn
    have hkeq : k = b.size := by omega
    subst hkeq
    rw [execInstArraySpec_base _ _ _ (a.size + b.size) _ (by omega)]
    rw [execInstArraySpec_base _ _ _ b.size _ (by omega)]
  | succ m ihm =>
    intro k tgt hk hn
    by_cases hk2 : k < b.size
    · have h_ab : a.size + k < (a ++ b).size := by rw [Array.size_append]; omega
      rw [execInstArraySpec_step _ _ _ (a.size + k) _ (by omega) h_ab]
      rw [execInstArraySpec_step _ _ _ k _ (by omega) hk2]
      rw [array_append_getElem_bang_right a b k hk2]
      have : a.size + k + 1 = a.size + (k + 1) := by omega
      rw [this]
      exact ihm (k + 1) (execInstSpec b[k]! src tgt) (by omega) (by omega)
    · have hkeq : k = b.size := by omega
      subst hkeq
      rw [execInstArraySpec_base _ _ _ (a.size + b.size) _ (by omega)]
      rw [execInstArraySpec_base _ _ _ b.size _ (by omega)]

-- Helper: (a ++ b)[j]! = a[j]! for j < a.size
private theorem array_append_getElem_bang_left (a b : Array α) [Inhabited α] (j : Nat)
    (hj : j < a.size) :
    (a ++ b)[j]! = a[j]! := by
  have h_ab : j < (a ++ b).size := by rw [Array.size_append]; omega
  rw [getElem!_pos (c := a ++ b) (h := h_ab), getElem!_pos (c := a) (h := hj)]
  rw [Array.getElem_append_left]

-- execInstArraySpec on prefix of (a ++ b) = execInstArraySpec on a
private theorem execInstArraySpec_prefix_left
    (a b : Array Encoder.RawInst) (src tgt : ByteArray) :
    execInstArraySpec (a ++ b) src tgt 0 a.size =
    execInstArraySpec a src tgt 0 a.size := by
  suffices h : ∀ n k (tgt : ByteArray),
      k ≤ a.size → a.size - k ≤ n →
      execInstArraySpec (a ++ b) src tgt k a.size =
      execInstArraySpec a src tgt k a.size by
    exact h a.size 0 tgt (by omega) (by omega)
  intro n
  induction n with
  | zero =>
    intro k tgt hk hn
    have hkeq : k = a.size := by omega
    subst hkeq
    rw [execInstArraySpec_base _ _ _ a.size a.size (by omega)]
    rw [execInstArraySpec_base _ _ _ a.size a.size (by omega)]
  | succ m ihm =>
    intro k tgt hk hn
    by_cases hk2 : k < a.size
    · have h_ab : k < (a ++ b).size := by rw [Array.size_append]; omega
      rw [execInstArraySpec_step _ _ _ k a.size (by omega) h_ab]
      rw [execInstArraySpec_step _ _ _ k a.size (by omega) hk2]
      rw [array_append_getElem_bang_left a b k hk2]
      exact ihm (k + 1) (execInstSpec a[k]! src tgt) (by omega) (by omega)
    · have hkeq : k = a.size := by omega
      subst hkeq
      rw [execInstArraySpec_base _ _ _ a.size a.size (by omega)]
      rw [execInstArraySpec_base _ _ _ a.size a.size (by omega)]

-- Main composition: executing (a ++ b) = executing a then b
private theorem execInstArraySpec_concat
    (a b : Array Encoder.RawInst) (src tgt : ByteArray) :
    execInstArraySpec (a ++ b) src tgt 0 (a.size + b.size) =
    execInstArraySpec b src
      (execInstArraySpec a src tgt 0 a.size) 0 b.size := by
  rw [execInstArraySpec_split _ _ _ 0 a.size
    (a.size + b.size) (by omega) (by omega)]
  rw [execInstArraySpec_prefix_left a b src tgt]
  exact execInstArraySpec_append_right a b src _

-- execInstArraySpec for a single ADD
private theorem exec_single_add (data_seg : ByteArray) (src tgt : ByteArray) :
    execInstArraySpec #[.add data_seg] src tgt 0 1 = tgt ++ data_seg := by
  rw [execInstArraySpec_single _ _ _ 0 (by simp)]; rfl

private theorem exec_single_run (b : UInt8) (rl : Nat) (src tgt : ByteArray) :
    execInstArraySpec #[.run b rl] src tgt 0 1 = tgt ++ repeatByte b rl := by
  rw [execInstArraySpec_single _ _ _ 0 (by simp)]; rfl

private theorem exec_add_run (data_seg : ByteArray) (b : UInt8) (rl : Nat) (src tgt : ByteArray) :
    execInstArraySpec #[.add data_seg, .run b rl] src tgt 0 2 =
    tgt ++ data_seg ++ repeatByte b rl := by
  rw [execInstArraySpec_double _ _ _ 0 (by simp) (by simp)]; rfl

set_option maxHeartbeats 400000 in
private theorem emitAddWithRunsRec_empty_exec_aux (data : ByteArray) :
    ∀ (n i addStart : Nat) (src tgt : ByteArray),
    data.size - i ≤ n → addStart ≤ i → i ≤ data.size →
    let out := Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data i addStart
    execInstArraySpec out src tgt 0 out.size = tgt ++ data.extract addStart data.size := by
  intro n
  induction n with
  | zero =>
    intro i addStart src tgt hn h_as h_i
    have h_ni : ¬(i < data.size) := by omega
    rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_ni]
    by_cases h_as2 : addStart < data.size
    · simp only [h_as2, ite_true]; exact exec_single_add _ _ _
    · simp only [h_as2, ite_false]
      have h_sz : (#[] : Array Encoder.RawInst).size = 0 := rfl
      rw [h_sz, execInstArraySpec_base _ _ _ 0 0 (by omega)]
      have h_aseq : addStart = data.size := by omega
      rw [h_aseq, bytearray_extract_empty_range data data.size (by omega), bytearray_append_empty]
  | succ m ihm =>
    intro i addStart src tgt hn h_as h_i
    by_cases h_ni : i < data.size
    · have h_rl_ge : Encoder.countRun data i data[i]! 1 ≥ 1 :=
        Encoder.countRun_ge data i data[i]! 1
      have h_rl_bound := countRun_bound data i data[i]! 1 (by omega)
      -- Unfold the let and rewrite
      show execInstArraySpec (Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data i addStart) src tgt 0
           (Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data i addStart).size =
           tgt ++ data.extract addStart data.size
      conv_lhs => rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_pos h_ni]
      -- The goal now has if-then-else with countRun ≥ minRunLength
      -- Use simp to reduce the let bindings, then split
      simp only []
      set rl := Encoder.countRun data i data[i]! 1 with hrl
      have h_all_eq : ∀ j, j < rl → data[i + j]! = data[i]! :=
        countRun_all_eq data i data[i]! 1 (by omega) (by intro j hj; have := Nat.lt_one_iff.mp hj; subst this; rfl)
      have h_run_eq : data.extract i (i + rl) = repeatByte data[i]! rl :=
        run_bytes_eq_repeatByte data i rl data[i]! (by omega) h_all_eq
      by_cases h_run : rl ≥ Encoder.minRunLength
      · simp only [ge_iff_le, h_run, ite_true]
        by_cases h_add : i > addStart
        · simp only [h_add, ite_true]
          -- Normalize pushes to literal array
          have h_push_eq : ((#[] : Array Encoder.RawInst).push (.add (data.extract addStart i))).push (.run data[i]! rl) =
              #[.add (data.extract addStart i), .run data[i]! rl] := rfl
          rw [h_push_eq, emitAddWithRunsRec_append]
          set rp := (#[Encoder.RawInst.add (data.extract addStart i),
                       Encoder.RawInst.run data[i]! rl] : Array Encoder.RawInst)
          set tail := Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data (i + rl) (i + rl)
          rw [show (rp ++ tail).size = rp.size + tail.size from
            Array.size_append]
          rw [execInstArraySpec_concat rp tail src tgt]
          have h_rpsz : rp.size = 2 := rfl
          have h_ih := ihm (i + rl) (i + rl) src
              (execInstArraySpec rp src tgt 0 rp.size) (by omega) (by omega) (by omega)
          simp only [] at h_ih
          rw [h_ih, h_rpsz, exec_add_run, ← h_run_eq]
          -- Goal: (tgt ++ extract addStart i ++ extract i (i+rl)) ++ extract (i+rl) sz = tgt ++ extract addStart sz
          rw [bytearray_append_assoc (tgt ++ _),
              ← bytearray_extract_split data i (i + rl) data.size
                (by omega) (by omega) (by omega),
              bytearray_append_assoc tgt,
              ← bytearray_extract_split data addStart i data.size
                (by omega) (by omega) (by omega)]
        · simp only [h_add, ite_false]
          push_neg at h_add
          have h_aseq : addStart = i := by omega
          subst h_aseq
          have h_push_eq2 : (#[] : Array Encoder.RawInst).push (.run data[addStart]! rl) =
              #[.run data[addStart]! rl] := rfl
          rw [h_push_eq2, emitAddWithRunsRec_append]
          set rp := (#[Encoder.RawInst.run data[addStart]! rl] : Array Encoder.RawInst)
          set tail := Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data (addStart + rl) (addStart + rl)
          rw [show (rp ++ tail).size = rp.size + tail.size from
            Array.size_append]
          rw [execInstArraySpec_concat rp tail src tgt]
          have h_rpsz : rp.size = 1 := rfl
          have h_ih := ihm (addStart + rl) (addStart + rl) src
              (execInstArraySpec rp src tgt 0 rp.size) (by omega) (by omega) (by omega)
          simp only [] at h_ih
          rw [h_ih, h_rpsz, exec_single_run, ← h_run_eq, bytearray_append_assoc]
          congr 1
          exact (bytearray_extract_split data addStart (addStart + rl)
            data.size (by omega) (by omega) (by omega)).symm
      · simp only [ge_iff_le, h_run, ite_false]
        exact ihm (i + rl) addStart src tgt (by omega) (by omega) (by omega)
    · rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_ni]
      by_cases h_as2 : addStart < data.size
      · simp only [h_as2, ite_true]; exact exec_single_add _ _ _
      · simp only [h_as2, ite_false]
        simp only [Array.size, List.length]
        rw [execInstArraySpec_base _ _ _ 0 0 (by omega)]
        have h_aseq' : addStart = data.size := by omega
        rw [h_aseq', bytearray_extract_empty_range data data.size (by omega), bytearray_append_empty]

private theorem emitAddWithRunsRec_empty_exec (data : ByteArray)
    (i addStart : Nat) (src tgt : ByteArray)
    (h_as_le_i : addStart ≤ i) (h_i_le : i ≤ data.size) :
    let out := Encoder.emitAddWithRuns.emitAddWithRunsRec #[] data i addStart
    execInstArraySpec out src tgt 0 out.size = tgt ++ data.extract addStart data.size :=
  emitAddWithRunsRec_empty_exec_aux data _ i addStart src tgt (le_refl _) h_as_le_i h_i_le

-- emitAddWithRuns: executing instructions = appending original data
theorem emitAddWithRuns_exec (data : ByteArray) (src target : ByteArray)
    (h_nonempty : data.size ≥ 1) :
    let insts := Encoder.emitAddWithRuns #[] data
    execInstArraySpec insts src target 0 insts.size = target ++ data := by
  simp only [Encoder.emitAddWithRuns]
  have h := emitAddWithRunsRec_empty_exec data 0 0 src target (by omega) (by omega)
  rw [bytearray_extract_full] at h
  exact h

-- ============================================================================
-- ## Composition helpers for execInstArraySpec
-- ============================================================================

-- emitAddWithRuns with prefix: executing = executing prefix then appending data
private theorem emitAddWithRuns_composition
    (insts : Array Encoder.RawInst) (data : ByteArray) (src tgt : ByteArray)
    (h_nonempty : data.size ≥ 1) :
    execInstArraySpec (Encoder.emitAddWithRuns insts data) src tgt 0
      (Encoder.emitAddWithRuns insts data).size =
    execInstArraySpec insts src tgt 0 insts.size ++ data := by
  -- emitAddWithRuns insts data = insts ++ emitAddWithRuns #[] data
  have h_split : Encoder.emitAddWithRuns insts data =
      insts ++ Encoder.emitAddWithRuns #[] data := by
    simp only [Encoder.emitAddWithRuns]
    exact emitAddWithRunsRec_append data 0 0 insts
  rw [h_split, show (insts ++ Encoder.emitAddWithRuns #[] data).size =
    insts.size + (Encoder.emitAddWithRuns #[] data).size from Array.size_append]
  rw [execInstArraySpec_concat]
  exact emitAddWithRuns_exec data src _ h_nonempty

-- push instruction: executing = executing prefix then applying inst
private theorem push_inst_exec
    (insts : Array Encoder.RawInst) (inst : Encoder.RawInst)
    (src tgt : ByteArray) :
    execInstArraySpec (insts.push inst) src tgt 0 (insts.push inst).size =
    execInstSpec inst src
      (execInstArraySpec insts src tgt 0 insts.size) := by
  have h_push : insts.push inst = insts ++ #[inst] := by
    rfl
  rw [h_push, show (insts ++ #[inst]).size = insts.size + #[inst].size from Array.size_append]
  rw [execInstArraySpec_concat insts #[inst] src tgt]
  have h1 : #[inst].size = 1 := rfl
  rw [h1, execInstArraySpec_single _ _ _ 0 (by omega)]
  rfl

-- Splitting target.extract at pos: extract pos sz = [target[pos]!] ++ extract (pos+1) sz
private theorem bytearray_extract_cons (ba : ByteArray) (pos : Nat)
    (h_pos : pos < ba.size) :
    ba.extract pos ba.size =
    ByteArray.mk #[ba[pos]!] ++ ba.extract (pos + 1) ba.size := by
  have h1 : ba.extract pos ba.size = ba.extract pos (pos + 1) ++ ba.extract (pos + 1) ba.size :=
    bytearray_extract_split ba pos (pos + 1) ba.size (by omega) (by omega) (by omega)
  rw [h1]
  congr 1
  apply bytearray_eq_of_getElem_eq
  · rw [ByteArray.size_extract]
    rw [show (ByteArray.mk #[ba[pos]!]).size = 1 from rfl]; omega
  · intro i hi_a hi_b
    rw [ByteArray.size_extract] at hi_a
    have hi0 : i = 0 := by omega
    subst hi0
    rw [ByteArray.getElem_extract]
    simp only [Nat.add_zero]
    rw [← getElem!_pos ba pos h_pos]
    rfl

-- pendingAdd.push target[pos]! = target.extract startPos (pos + 1)
-- when pendingAdd = target.extract startPos pos
private theorem pending_push_eq (target : ByteArray) (startPos pos : Nat)
    (pendingAdd : ByteArray) (h_pos : pos < target.size)
    (h_eq : pendingAdd = target.extract startPos pos)
    (h_start_le : startPos ≤ pos) :
    pendingAdd.push target[pos]! = target.extract startPos (pos + 1) := by
  rw [h_eq]
  have h_split : target.extract startPos (pos + 1) =
      target.extract startPos pos ++ target.extract pos (pos + 1) :=
    bytearray_extract_split target startPos pos (pos + 1) h_start_le (by omega) (by omega)
  rw [h_split]
  -- target.extract pos (pos+1) = ByteArray.mk #[target[pos]!]
  have h_single : target.extract pos (pos + 1) = ByteArray.mk #[target[pos]!] := by
    apply bytearray_eq_of_getElem_eq
    · rw [ByteArray.size_extract]
      rw [show (ByteArray.mk #[target[pos]!]).size = 1 from rfl]; omega
    · intro i hi_a hi_b
      rw [ByteArray.size_extract] at hi_a
      have hi0 : i = 0 := by omega
      subst hi0
      rw [ByteArray.getElem_extract]; simp only [Nat.add_zero]
      rw [← getElem!_pos target pos h_pos]; rfl
  rw [h_single]
  -- (extract).push x = extract ++ mk #[x]
  apply ByteArray.ext
  simp [ByteArray.data_append, ByteArray.data_push]

-- trimMatch preserves bytes_eq
private theorem trimMatch_bytes_eq (source target : ByteArray) (pos : Nat)
    (m : Encoder.Match)
    (h_bytes : source.extract m.sourcePos (m.sourcePos + m.length) =
               target.extract m.targetPos (m.targetPos + m.length))
    (h_src_bound : m.sourcePos + m.length ≤ source.size)
    (h_tgt_bound : m.targetPos + m.length ≤ target.size) :
    let tm := Encoder.trimMatch m pos
    source.extract tm.sourcePos (tm.sourcePos + tm.length) =
    target.extract tm.targetPos (tm.targetPos + tm.length) := by
  -- Extract element-wise equality from h_bytes
  have h_elem : ∀ j, j < m.length →
      source[m.sourcePos + j]! = target[m.targetPos + j]! := by
    intro j hj
    have h_src_j : m.sourcePos + j < source.size := by omega
    have h_tgt_j : m.targetPos + j < target.size := by omega
    rw [getElem!_pos source _ h_src_j, getElem!_pos target _ h_tgt_j]
    have h_ext_s : j < (source.extract m.sourcePos (m.sourcePos + m.length)).size := by
      rw [ByteArray.size_extract]; omega
    have h_ext_t : j < (target.extract m.targetPos (m.targetPos + m.length)).size := by
      rw [ByteArray.size_extract]; omega
    have h_data_eq := congrArg ByteArray.data h_bytes
    have h_arr_s : j < (source.extract m.sourcePos (m.sourcePos + m.length)).data.size := by
      rw [ByteArray.size] at h_ext_s; exact h_ext_s
    have h_arr_t : j < (target.extract m.targetPos (m.targetPos + m.length)).data.size := by
      rw [ByteArray.size] at h_ext_t; exact h_ext_t
    have h_sz_eq : (source.extract m.sourcePos (m.sourcePos + m.length)).data.size =
        (target.extract m.targetPos (m.targetPos + m.length)).data.size := by
      rw [h_data_eq]
    have h1 := (Array.ext_iff.mp h_data_eq).2 j h_arr_s (h_sz_eq ▸ h_arr_s)
    simp only [ByteArray.data_extract, Array.getElem_extract] at h1
    exact h1
  simp only [Encoder.trimMatch]
  split
  · next h_tp =>
    simp only []
    set trim := pos - m.targetPos
    split
    · next h_gt =>
      apply bytearray_eq_of_getElem_eq
      · rw [ByteArray.size_extract, ByteArray.size_extract]; omega
      · intro i hi_a hi_b
        rw [ByteArray.size_extract] at hi_a
        rw [ByteArray.getElem_extract, ByteArray.getElem_extract]
        rw [← getElem!_pos source _ (by omega), ← getElem!_pos target _ (by omega)]
        rw [show m.sourcePos + trim + i = m.sourcePos + (trim + i) from by omega,
            show pos + i = m.targetPos + (trim + i) from by omega]
        exact h_elem (trim + i) (by omega)
    · next h_not_gt =>
      push_neg at h_not_gt
      rw [Nat.add_zero, Nat.add_zero]
      rw [bytearray_extract_empty_range' source (m.sourcePos + trim),
          bytearray_extract_empty_range' target pos]
  · exact h_bytes

-- trimMatch preserves source bound (when trimmed match is non-degenerate)
private theorem trimMatch_source_bound (source : ByteArray) (pos : Nat)
    (m : Encoder.Match) (h : m.sourcePos + m.length ≤ source.size)
    (h_len : (Encoder.trimMatch m pos).length ≥ 1) :
    let tm := Encoder.trimMatch m pos
    tm.sourcePos + tm.length ≤ source.size := by
  simp only [Encoder.trimMatch]
  split
  · next h_tp =>
    simp only []
    simp only [Encoder.trimMatch] at h_len
    simp only [h_tp, ↓reduceIte] at h_len
    split
    · omega
    · next h_not_gt => simp only [h_not_gt, ↓reduceIte] at h_len; omega
  · exact h

-- trimMatch preserves target bound
private theorem trimMatch_target_bound (target : ByteArray) (pos : Nat)
    (m : Encoder.Match) (h : m.targetPos + m.length ≤ target.size)
    (h_pos : pos ≤ target.size) :
    let tm := Encoder.trimMatch m pos
    tm.targetPos + tm.length ≤ target.size := by
  simp only [Encoder.trimMatch]
  split
  · next h_tp =>
    simp only []
    split
    · omega
    · omega
  · exact h

-- A match is "good": bytes match and within bounds
def GoodMatch (src target : ByteArray) (m : Encoder.Match) : Prop :=
  src.extract m.sourcePos (m.sourcePos + m.length) =
    target.extract m.targetPos (m.targetPos + m.length) ∧
  m.sourcePos + m.length ≤ src.size ∧
  m.targetPos + m.length ≤ target.size

-- findBestMatch produces good matches
private theorem findBestMatch_good (idx : Encoder.SourceIndex) (target : ByteArray) (pos : Nat)
    (m : Encoder.Match)
    (h : Encoder.findBestMatch idx target pos = some m)
    (h_pos : pos ≤ target.size) :
    GoodMatch idx.sourceData target m :=
  ⟨findBestMatch_bytes_eq idx target pos m h h_pos,
   findBestMatch_source_bound idx target pos m h,
   findBestMatch_target_bound idx target pos m h h_pos⟩

-- Helper: if findBestMatch at pos+k returns some m2, and the "chosen" match
-- is either prev or m2, then it's good (given prev is good)
private theorem choose_match_good (src target : ByteArray) (prev m2 : Encoder.Match)
    (h_prev : GoodMatch src target prev) (h_m2 : GoodMatch src target m2)
    (b : Bool) :
    GoodMatch src target (if b then m2 else prev) := by
  split <;> assumption

-- Helper for lazy matching case analysis: if findBestMatch returns some, it's good
private theorem findBestMatch_at_good (idx : Encoder.SourceIndex) (target : ByteArray) (pos k : Nat)
    (m : Encoder.Match)
    (h_eq : (if pos + k < target.size then Encoder.findBestMatch idx target (pos + k) else none) = some m) :
    GoodMatch idx.sourceData target m := by
  by_cases h : pos + k < target.size
  · simp only [h, ↓reduceIte] at h_eq
    exact findBestMatch_good _ _ _ _ h_eq (by omega)
  · simp only [h, ↓reduceIte] at h_eq; contradiction

-- lazyBestMatch preserves GoodMatch
-- Helper: any findBestMatch or the original is good
private theorem any_or_orig_good (idx : Encoder.SourceIndex) (target : ByteArray)
    (a b : Encoder.Match) (h_a : GoodMatch idx.sourceData target a)
    (h_b : GoodMatch idx.sourceData target b) (p : Prop) [Decidable p] :
    GoodMatch idx.sourceData target (if p then a else b) := by
  split <;> assumption

set_option maxHeartbeats 800000 in
private theorem lazyBestMatch_good
    (idx : Encoder.SourceIndex) (target : ByteArray) (pos : Nat)
    (m : Encoder.Match)
    (h_good : GoodMatch idx.sourceData target m) :
    GoodMatch idx.sourceData target (Encoder.lazyBestMatch idx target pos m) := by
  unfold Encoder.lazyBestMatch
  split
  · exact h_good
  · -- Suffices to show each intermediate "best" is good
    -- best1 from step 1
    suffices h_best1 : ∀ (best : Encoder.Match),
        GoodMatch idx.sourceData target best →
        GoodMatch idx.sourceData target
          (match (if pos + 3 < target.size then Encoder.findBestMatch idx target (pos + 3) else none) with
           | some m2 => if m2.length > best.length + Encoder.lazyThreshold then m2 else best
           | none => best) by
      suffices h_best2 : ∀ (best : Encoder.Match),
          GoodMatch idx.sourceData target best →
          GoodMatch idx.sourceData target
            (match (if pos + 2 < target.size then Encoder.findBestMatch idx target (pos + 2) else none) with
             | some m2 => if m2.length > best.length + Encoder.lazyThreshold then m2 else best
             | none => best) by
        apply h_best1
        apply h_best2
        match h_opt1 : (if pos + 1 < target.size then Encoder.findBestMatch idx target (pos + 1) else none) with
        | none => exact h_good
        | some m1 => exact any_or_orig_good _ _ _ _ (findBestMatch_at_good _ _ _ 1 _ h_opt1) h_good _
      · intro best h_best
        match h_opt2 : (if pos + 2 < target.size then Encoder.findBestMatch idx target (pos + 2) else none) with
        | none => exact h_best
        | some m2 => exact any_or_orig_good _ _ _ _ (findBestMatch_at_good _ _ _ 2 _ h_opt2) h_best _
    · intro best h_best
      match h_opt3 : (if pos + 3 < target.size then Encoder.findBestMatch idx target (pos + 3) else none) with
      | none => exact h_best
      | some m3 => exact any_or_orig_good _ _ _ _ (findBestMatch_at_good _ _ _ 3 _ h_opt3) h_best _

-- ============================================================================
-- ## emitAddWithRuns validity
-- ============================================================================

-- ValidInstArray is preserved by push
private theorem validInstArray_push (insts : Array Encoder.RawInst) (inst : Encoder.RawInst) (src : ByteArray)
    (h_arr : ValidInstArray insts src) (h_inst : ValidInst inst src) :
    ValidInstArray (insts.push inst) src := by
  intro i hi
  rw [Array.size_push] at hi
  by_cases h : i < insts.size
  · have : (insts.push inst)[i]! = insts[i]! :=
      array_append_getElem_bang_left insts #[inst] i h
    rw [this]; exact h_arr i h
  · have hi_eq : i = insts.size := by omega
    subst hi_eq
    have : (insts.push inst)[insts.size]! = inst := by
      rw [getElem!_pos _ _ (by rw [Array.size_push]; omega)]
      exact Array.getElem_push_eq
    rw [this]; exact h_inst

-- ADD extract validity: extract has 1 ≤ size < 2^31
private theorem add_extract_valid (data : ByteArray) (src : ByteArray)
    (h_bound : data.size < 2 ^ 31) (a b : Nat) (hab : a < b) (hb : b ≤ data.size) :
    ValidInst (.add (data.extract a b)) src := by
  constructor
  · rw [ByteArray.size_extract]; omega
  · rw [ByteArray.size_extract]; omega

-- RUN countRun validity: rl has 1 ≤ size < 2^31
private theorem run_countRun_valid (data : ByteArray) (src : ByteArray) (i : Nat) (b : UInt8)
    (h_bound : data.size < 2 ^ 31) (h_i : i < data.size)
    (h_ge : Encoder.countRun data i b 1 ≥ Encoder.minRunLength) :
    ValidInst (.run b (Encoder.countRun data i b 1)) src := by
  have h_rl_bound := countRun_bound data i b 1 (by omega)
  constructor
  · have := Encoder.countRun_ge data i b 1; simp [Encoder.minRunLength] at h_ge; omega
  · omega

-- emitAddWithRunsRec validity with invariant
set_option maxHeartbeats 400000 in
private theorem emitAddWithRunsRec_valid_aux (data : ByteArray) (src : ByteArray)
    (h_bound : data.size < 2 ^ 31) :
    ∀ (n i addStart : Nat) (result : Array Encoder.RawInst),
    data.size - i ≤ n → addStart ≤ i → i ≤ data.size →
    ValidInstArray result src →
    ValidInstArray (Encoder.emitAddWithRuns.emitAddWithRunsRec result data i addStart) src := by
  intro n
  induction n with
  | zero =>
    intro i addStart result hn h_as h_i h_valid
    have h_ni : ¬(i < data.size) := by omega
    rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_ni]
    by_cases h_as2 : addStart < data.size
    · simp only [h_as2, ite_true]
      exact validInstArray_push _ _ _ h_valid (add_extract_valid data src h_bound addStart data.size h_as2 (by omega))
    · simp only [h_as2, ite_false]; exact h_valid
  | succ m ihm =>
    intro i addStart result hn h_as h_i h_valid
    by_cases h_ni : i < data.size
    · have h_rl_ge : Encoder.countRun data i data[i]! 1 ≥ 1 := Encoder.countRun_ge data i data[i]! 1
      have h_rl_bound := countRun_bound data i data[i]! 1 (by omega)
      rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_pos h_ni]
      simp only []
      set rl := Encoder.countRun data i data[i]! 1
      by_cases h_run : rl ≥ Encoder.minRunLength
      · simp only [ge_iff_le, h_run, ite_true]
        by_cases h_add : i > addStart
        · simp only [h_add, ite_true]
          apply ihm _ _ _ (by omega) (by omega) (by omega)
          apply validInstArray_push _ _ _
            (validInstArray_push _ _ _ h_valid (add_extract_valid data src h_bound addStart i h_add (by omega)))
          exact run_countRun_valid data src i data[i]! h_bound h_ni h_run
        · simp only [h_add, ite_false]
          apply ihm _ _ _ (by omega) (by omega) (by omega)
          exact validInstArray_push _ _ _ h_valid (run_countRun_valid data src i data[i]! h_bound h_ni h_run)
      · simp only [ge_iff_le, h_run, ite_false]
        exact ihm (i + rl) addStart result (by omega) (by omega) (by omega) h_valid
    · rw [Encoder.emitAddWithRuns.emitAddWithRunsRec, dif_neg h_ni]
      by_cases h_as2 : addStart < data.size
      · simp only [h_as2, ite_true]
        exact validInstArray_push _ _ _ h_valid (add_extract_valid data src h_bound addStart data.size h_as2 (by omega))
      · simp only [h_as2, ite_false]; exact h_valid

-- emitAddWithRuns: all instructions are valid
theorem emitAddWithRuns_valid (data : ByteArray) (src : ByteArray)
    (h_nonempty : data.size ≥ 1) (h_bound : data.size < 2 ^ 31) :
    let insts := Encoder.emitAddWithRuns #[] data
    ValidInstArray insts src := by
  simp only [Encoder.emitAddWithRuns]
  exact emitAddWithRunsRec_valid_aux data src h_bound _ 0 0 #[]
    (le_refl _) (by omega) (by omega)
    (fun i hi => by simp [Array.size] at hi)

-- ============================================================================
-- ## generateInstructionsLoop main invariant
-- ============================================================================

-- The source window used in the final theorem
def sourceWindow (source : ByteArray) : ByteArray :=
  if source.size > 0 then source else ByteArray.empty

-- sourceWindow = source when buildSourceIndex is used
private theorem sourceWindow_eq_sourceData (source : ByteArray) :
    (Encoder.buildSourceIndex source).sourceData = sourceWindow source := by
  simp only [sourceWindow]
  rw [buildSourceIndex_data]
  split
  · rfl
  · next h => simp at h; exact ByteArray.ext (by simp [ByteArray.size, h])

-- Helper: base case of loop (pos ≥ target.size)
private theorem loop_base_case
    (idx : Encoder.SourceIndex) (target src : ByteArray) (pendingAdd : ByteArray)
    (insts : Array Encoder.RawInst) (tgt₀ : ByteArray)
    (h_pa_le : pendingAdd.size ≤ target.size)
    (h_pa_eq : pendingAdd = target.extract (target.size - pendingAdd.size) target.size) :
    execInstArraySpec (Encoder.generateInstructionsLoop idx target target.size pendingAdd insts) src tgt₀ 0
      (Encoder.generateInstructionsLoop idx target target.size pendingAdd insts).size =
    execInstArraySpec insts src tgt₀ 0 insts.size ++ pendingAdd ++ target.extract target.size target.size := by
  rw [bytearray_extract_empty_range' target target.size, bytearray_append_empty]
  conv_lhs => rw [Encoder.generateInstructionsLoop, dif_neg (by omega : ¬(target.size < target.size))]
  by_cases h_pa : pendingAdd.size > 0
  · simp only [h_pa, ↓reduceIte]
    exact emitAddWithRuns_composition insts pendingAdd src tgt₀ h_pa
  · push_neg at h_pa
    have h_pa_empty : pendingAdd = ByteArray.empty := by
      have hsz : pendingAdd.data.size = 0 := by
        have := h_pa; rw [ByteArray.size] at this; omega
      exact ByteArray.ext (Array.ext (by rw [hsz]; rfl) (by intro i hi; rw [hsz] at hi; omega))
    rw [h_pa_empty, bytearray_append_empty]
    simp only [show ByteArray.empty.size > 0 ↔ False from by simp [ByteArray.size], ↓reduceIte]

-- Helper: no-match equational step
-- From: exec ++ push_result ++ extract(pos+1, sz) = exec ++ pendingAdd ++ extract(pos, sz)
private theorem no_match_eq_step
    (target : ByteArray) (pos : Nat) (pendingAdd : ByteArray)
    (h_pos_lt : pos < target.size) (h_pa_le : pendingAdd.size ≤ pos)
    (h_pa_eq : pendingAdd = target.extract (pos - pendingAdd.size) pos)
    (prefix_val : ByteArray) :
    prefix_val ++ (pendingAdd.push target[pos]!) ++ target.extract (pos + 1) target.size =
    prefix_val ++ pendingAdd ++ target.extract pos target.size := by
  have h_push := pending_push_eq target (pos - pendingAdd.size) pos pendingAdd h_pos_lt h_pa_eq (by omega)
  rw [h_push]
  -- LHS: pv ++ extract(s, p+1) ++ extract(p+1, sz)
  -- RHS: pv ++ pa ++ extract(p, sz)
  -- Both = pv ++ extract(s, sz)
  set s := pos - pendingAdd.size with hs_def
  rw [bytearray_append_assoc prefix_val,
      ← bytearray_extract_split target s (pos + 1) target.size (by omega) (by omega) (by omega)]
  rw [h_pa_eq, hs_def, bytearray_append_assoc prefix_val,
      ← bytearray_extract_split target (pos - pendingAdd.size) pos target.size (by omega) (by omega) (by omega)]

-- Helper: pendingAdd' ++ extract bm.tp sz = pendingAdd ++ extract pos sz
private theorem pendingAdd'_merge (target : ByteArray) (pos : Nat) (bm_tp : Nat)
    (pendingAdd : ByteArray)
    (h_bm_tp_ge : bm_tp ≥ pos)
    (h_tgt : bm_tp ≤ target.size) :
    (if bm_tp > pos then pendingAdd ++ target.extract pos bm_tp else pendingAdd) ++
      target.extract bm_tp target.size =
    pendingAdd ++ target.extract pos target.size := by
  by_cases h : bm_tp > pos
  · simp only [h, ite_true]
    rw [bytearray_append_assoc,
        ← bytearray_extract_split target pos bm_tp target.size (by omega) h_tgt (le_refl _)]
  · simp only [h, ite_false]
    have : bm_tp = pos := by omega
    rw [this]

-- Helper: exec insts' = exec insts ++ pendingAdd' (when insts' comes from emitAddWithRuns branching)
private theorem exec_insts'_eq (insts : Array Encoder.RawInst) (pendingAdd' : ByteArray)
    (src tgt₀ : ByteArray) :
    let insts' := if pendingAdd'.size > 0 then Encoder.emitAddWithRuns insts pendingAdd' else insts
    execInstArraySpec insts' src tgt₀ 0 insts'.size =
    execInstArraySpec insts src tgt₀ 0 insts.size ++ pendingAdd' := by
  by_cases h : pendingAdd'.size > 0
  · simp only [h, ite_true]
    exact emitAddWithRuns_composition insts pendingAdd' src tgt₀ h
  · push_neg at h
    simp only [show ¬(pendingAdd'.size > 0) from by omega, ite_false]
    have h_empty : pendingAdd' = ByteArray.empty := by
      apply ByteArray.ext; apply Array.ext
      · rw [show pendingAdd'.data.size = 0 from by rw [ByteArray.size] at h; omega]; rfl
      · intro i hi; rw [show pendingAdd'.data.size = 0 from by rw [ByteArray.size] at h; omega] at hi; omega
    rw [h_empty, bytearray_append_empty]

-- Main loop invariant for generateInstructionsLoop
set_option maxHeartbeats 800000 in
private theorem generateInstructionsLoop_spec
    (idx : Encoder.SourceIndex) (target : ByteArray)
    (src : ByteArray) (h_idx : idx.sourceData = src) :
    ∀ (fuel pos : Nat) (pendingAdd : ByteArray) (insts : Array Encoder.RawInst)
    (tgt₀ : ByteArray),
    target.size - pos ≤ fuel →
    pos ≤ target.size →
    pendingAdd.size ≤ pos →
    pendingAdd = target.extract (pos - pendingAdd.size) pos →
    let output := Encoder.generateInstructionsLoop idx target pos pendingAdd insts
    execInstArraySpec output src tgt₀ 0 output.size =
    execInstArraySpec insts src tgt₀ 0 insts.size ++
      pendingAdd ++ target.extract pos target.size := by
  intro fuel
  induction fuel with
  | zero =>
    intro pos pendingAdd insts tgt₀ h_fuel h_pos h_pa_le h_pa_eq
    have h_pos_eq : pos = target.size := by omega
    subst h_pos_eq
    exact loop_base_case idx target src pendingAdd insts tgt₀ h_pa_le h_pa_eq
  | succ n ih =>
    intro pos pendingAdd insts tgt₀ h_fuel h_pos h_pa_le h_pa_eq
    by_cases h_pos_lt : pos < target.size
    · -- pos < target.size: unfold loop
      show execInstArraySpec (Encoder.generateInstructionsLoop idx target pos pendingAdd insts) src tgt₀ 0
        (Encoder.generateInstructionsLoop idx target pos pendingAdd insts).size =
        execInstArraySpec insts src tgt₀ 0 insts.size ++ pendingAdd ++ target.extract pos target.size
      conv_lhs => rw [Encoder.generateInstructionsLoop, dif_pos h_pos_lt]
      -- Case split on findBestMatch
      match h_find : Encoder.findBestMatch idx target pos with
      | none =>
        -- No match: push byte and recurse
        simp only [h_find]
        have h_pa_le' : (pendingAdd.push target[pos]!).size ≤ pos + 1 := by
          rw [ByteArray.size_push]; omega
        have h_pa_eq' : pendingAdd.push target[pos]! = target.extract (pos + 1 - (pendingAdd.push target[pos]!).size) (pos + 1) := by
          rw [pending_push_eq target (pos - pendingAdd.size) pos pendingAdd h_pos_lt h_pa_eq (by omega)]
          congr 1; rw [ByteArray.size_extract]; omega
        have h_ih := ih (pos + 1) (pendingAdd.push target[pos]!) insts tgt₀
          (by omega) (by omega) h_pa_le' h_pa_eq'
        simp only [] at h_ih
        rw [h_ih]
        exact no_match_eq_step target pos pendingAdd h_pos_lt h_pa_le h_pa_eq _
      | some m =>
        -- Match found
        simp only [h_find]
        set bestMatch := Encoder.trimMatch (Encoder.lazyBestMatch idx target pos m) pos with h_bm_def
        -- Case split on match length
        by_cases h_short : bestMatch.length < Encoder.hashWindow
        · -- Short match: skip, push byte (same as no-match)
          rw [dif_pos h_short]
          have h_pa_le' : (pendingAdd.push target[pos]!).size ≤ pos + 1 := by
            rw [ByteArray.size_push]; omega
          have h_pa_eq' : pendingAdd.push target[pos]! = target.extract (pos + 1 - (pendingAdd.push target[pos]!).size) (pos + 1) := by
            rw [pending_push_eq target (pos - pendingAdd.size) pos pendingAdd h_pos_lt h_pa_eq (by omega)]
            congr 1; rw [ByteArray.size_extract]; omega
          have h_ih := ih (pos + 1) (pendingAdd.push target[pos]!) insts tgt₀
            (by omega) (by omega) h_pa_le' h_pa_eq'
          simp only [] at h_ih
          rw [h_ih]
          exact no_match_eq_step target pos pendingAdd h_pos_lt h_pa_le h_pa_eq _
        · -- Good match: flush pending, emit COPY, recurse
          rw [dif_neg h_short]
          -- Properties of the match
          have h_bm_tp_ge : bestMatch.targetPos ≥ pos := by
            rw [h_bm_def]; exact Encoder.trimMatch_targetPos_ge _ pos
          have h_good_m := findBestMatch_good idx target pos m h_find (by omega)
          have h_good_lazy := lazyBestMatch_good idx target pos m h_good_m
          have h_bm_len_ge : bestMatch.length ≥ 4 := by
            simp only [Encoder.hashWindow] at h_short; omega
          have h_good_trim_bytes : src.extract bestMatch.sourcePos (bestMatch.sourcePos + bestMatch.length) =
              target.extract bestMatch.targetPos (bestMatch.targetPos + bestMatch.length) := by
            rw [h_bm_def, ← h_idx]
            exact trimMatch_bytes_eq idx.sourceData target pos _ h_good_lazy.1 h_good_lazy.2.1 h_good_lazy.2.2
          have h_trim_src : bestMatch.sourcePos + bestMatch.length ≤ src.size := by
            rw [h_bm_def, ← h_idx]
            exact trimMatch_source_bound _ pos _ h_good_lazy.2.1 (by rw [← h_bm_def]; omega)
          have h_trim_tgt : bestMatch.targetPos + bestMatch.length ≤ target.size := by
            rw [h_bm_def]
            exact trimMatch_target_bound target pos _ h_good_lazy.2.2 (by omega)
          -- Set up names for intermediate values
          set newPos := bestMatch.targetPos + bestMatch.length with h_newPos
          set pendingAdd' := if bestMatch.targetPos > pos then
            pendingAdd ++ target.extract pos bestMatch.targetPos else pendingAdd with h_pa'_def
          -- Apply IH to the recursive call
          have h_empty_eq : ByteArray.empty =
              target.extract (newPos - ByteArray.empty.size) newPos := by
            rw [show ByteArray.empty.size = 0 from rfl, Nat.sub_zero]
            exact (bytearray_extract_empty_range' target newPos).symm
          have h_ih := ih newPos ByteArray.empty
            ((if pendingAdd'.size > 0 then Encoder.emitAddWithRuns insts pendingAdd'
              else insts).push (.copy bestMatch.sourcePos bestMatch.length))
            tgt₀ (by rw [h_newPos]; omega) h_trim_tgt
            (by rw [show ByteArray.empty.size = 0 from rfl]; omega) h_empty_eq
          simp only [] at h_ih
          rw [h_ih]
          -- LHS = exec insts'' ++ empty ++ extract newPos sz
          -- Simplify ++ empty
          rw [bytearray_append_empty]
          -- Expand push_inst_exec
          rw [push_inst_exec _ (.copy bestMatch.sourcePos bestMatch.length) src tgt₀]
          -- execInstSpec (.copy addr sz) = tgt ++ src.extract addr (addr+sz)
          simp only [execInstSpec]
          -- Replace src extract with target extract
          rw [h_good_trim_bytes]
          -- Combine target extracts
          rw [h_newPos, bytearray_append_assoc
                (execInstArraySpec (if pendingAdd'.size > 0 then _ else _) src tgt₀ 0 _),
              ← bytearray_extract_split target bestMatch.targetPos
                (bestMatch.targetPos + bestMatch.length) target.size
                (by omega) (by omega) (le_refl _)]
          -- Now: exec insts' ++ extract bm.tp sz = exec insts ++ pendingAdd ++ extract pos sz
          -- Use exec_insts'_eq to get: exec insts ++ pendingAdd' ++ extract bm.tp sz
          rw [exec_insts'_eq insts pendingAdd' src tgt₀]
          -- Now: (exec insts ++ pendingAdd') ++ extract bm.tp sz = exec insts ++ pendingAdd ++ extract pos sz
          simp only [bytearray_append_assoc]
          -- Both sides: exec insts ++ (pa?? ++ extract ?? sz)
          congr 1
          exact pendingAdd'_merge target pos bestMatch.targetPos pendingAdd h_bm_tp_ge (by omega)
    · -- pos >= target.size: same as base case
      have h_pos_eq : pos = target.size := by omega
      subst h_pos_eq
      exact loop_base_case idx target src pendingAdd insts tgt₀ h_pa_le h_pa_eq

-- generateInstructions execution reproduces the target
theorem generateInstructions_exec (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31) :
    let insts := Encoder.generateInstructions (Encoder.buildSourceIndex source) target
    execInstArraySpec insts (sourceWindow source) ByteArray.empty 0 insts.size = target := by
  simp only [Encoder.generateInstructions]
  set idx := Encoder.buildSourceIndex source
  have h_idx : idx.sourceData = sourceWindow source := sourceWindow_eq_sourceData source
  have h_spec := generateInstructionsLoop_spec idx target (sourceWindow source) h_idx
    target.size 0 ByteArray.empty #[] ByteArray.empty
    (by omega) (by omega) (by rw [show ByteArray.empty.size = 0 from rfl])
    (by rw [show ByteArray.empty.size = 0 from rfl, Nat.sub_zero]; exact (bytearray_extract_empty_range' target 0).symm)
  simp only [] at h_spec; rw [h_spec]
  have h0 : (#[] : Array Encoder.RawInst).size = 0 := rfl
  rw [h0, execInstArraySpec_base _ _ _ 0 0 (by omega),
      bytearray_empty_append, bytearray_empty_append, bytearray_extract_full]

-- emitAddWithRuns validity with prefix array
private theorem emitAddWithRuns_valid_general (insts : Array Encoder.RawInst)
    (data src : ByteArray)
    (h_nonempty : data.size ≥ 1) (h_bound : data.size < 2 ^ 31)
    (h_valid : ValidInstArray insts src) :
    ValidInstArray (Encoder.emitAddWithRuns insts data) src := by
  simp only [Encoder.emitAddWithRuns]
  exact emitAddWithRunsRec_valid_aux data src h_bound _ 0 0 insts
    (le_refl _) (by omega) (by omega) h_valid

-- COPY instruction validity
private theorem copy_valid (src : ByteArray) (addr sz : Nat)
    (h_sz_ge : sz ≥ 1) (h_sz_lt : sz < 2 ^ 31)
    (h_bound : addr + sz ≤ src.size) (h_addr_lt : addr < 2 ^ 31) :
    ValidInst (.copy addr sz) src :=
  ⟨h_sz_ge, h_sz_lt, h_bound, h_addr_lt⟩

-- Loop validity invariant
set_option maxHeartbeats 800000 in
private theorem generateInstructionsLoop_valid
    (idx : Encoder.SourceIndex) (target src : ByteArray) (h_idx : idx.sourceData = src)
    (h_src_bound : src.size < 2 ^ 31) (h_tgt_bound : target.size < 2 ^ 31) :
    ∀ (fuel pos : Nat) (pendingAdd : ByteArray) (insts : Array Encoder.RawInst),
    target.size - pos ≤ fuel →
    pos ≤ target.size →
    pendingAdd.size ≤ pos →
    ValidInstArray insts src →
    ValidInstArray (Encoder.generateInstructionsLoop idx target pos pendingAdd insts) src := by
  intro fuel
  induction fuel with
  | zero =>
    intro pos pendingAdd insts h_fuel h_pos h_pa_le h_valid
    have h_pos_eq : pos = target.size := by omega
    subst h_pos_eq
    conv_lhs => rw [Encoder.generateInstructionsLoop, dif_neg (by omega : ¬(target.size < target.size))]
    by_cases h_pa : pendingAdd.size > 0
    · simp only [h_pa, ↓reduceIte]
      exact emitAddWithRuns_valid_general insts pendingAdd src h_pa (by omega) h_valid
    · simp only [h_pa, ↓reduceIte]; exact h_valid
  | succ n ih =>
    intro pos pendingAdd insts h_fuel h_pos h_pa_le h_valid
    by_cases h_pos_lt : pos < target.size
    · conv_lhs => rw [Encoder.generateInstructionsLoop, dif_pos h_pos_lt]
      match h_find : Encoder.findBestMatch idx target pos with
      | none =>
        simp only [h_find]
        exact ih (pos + 1) (pendingAdd.push target[pos]!) insts
          (by omega) (by omega) (by rw [ByteArray.size_push]; omega) h_valid
      | some m =>
        simp only [h_find]
        set bestMatch := Encoder.trimMatch (Encoder.lazyBestMatch idx target pos m) pos with h_bm_def
        by_cases h_short : bestMatch.length < Encoder.hashWindow
        · rw [dif_pos h_short]
          exact ih (pos + 1) (pendingAdd.push target[pos]!) insts
            (by omega) (by omega) (by rw [ByteArray.size_push]; omega) h_valid
        · rw [dif_neg h_short]
          -- Match properties
          have h_bm_tp_ge : bestMatch.targetPos ≥ pos := by
            rw [h_bm_def]; exact Encoder.trimMatch_targetPos_ge _ pos
          have h_good_lazy := lazyBestMatch_good idx target pos m
            (findBestMatch_good idx target pos m h_find (by omega))
          have h_bm_len_ge : bestMatch.length ≥ 4 := by
            simp only [Encoder.hashWindow] at h_short; omega
          have h_trim_src : bestMatch.sourcePos + bestMatch.length ≤ src.size := by
            rw [h_bm_def, ← h_idx]
            exact trimMatch_source_bound _ pos _ h_good_lazy.2.1 (by rw [← h_bm_def]; omega)
          have h_trim_tgt : bestMatch.targetPos + bestMatch.length ≤ target.size := by
            rw [h_bm_def]
            exact trimMatch_target_bound target pos _ h_good_lazy.2.2 (by omega)
          -- Determine insts' validity
          set pendingAdd' := if bestMatch.targetPos > pos then
            pendingAdd ++ target.extract pos bestMatch.targetPos else pendingAdd with h_pa'_def
          have h_pa'_bound : pendingAdd'.size ≤ target.size := by
            rw [h_pa'_def]; split
            · rw [ByteArray.size_append, ByteArray.size_extract]; omega
            · omega
          have h_insts'_valid : ValidInstArray
              (if pendingAdd'.size > 0 then Encoder.emitAddWithRuns insts pendingAdd' else insts) src := by
            split
            · next h => exact emitAddWithRuns_valid_general insts pendingAdd' src h (by omega) h_valid
            · exact h_valid
          have h_copy_valid : ValidInst (.copy bestMatch.sourcePos bestMatch.length) src :=
            ⟨by omega, by omega, h_trim_src, by omega⟩
          apply ih _ ByteArray.empty
          · rw [show bestMatch.targetPos + bestMatch.length = bestMatch.targetPos + bestMatch.length from rfl]; omega
          · exact h_trim_tgt
          · rw [show ByteArray.empty.size = 0 from rfl]; omega
          · exact validInstArray_push _ _ _ h_insts'_valid h_copy_valid
    · have h_pos_eq : pos = target.size := by omega
      subst h_pos_eq
      conv_lhs => rw [Encoder.generateInstructionsLoop, dif_neg (by omega : ¬(target.size < target.size))]
      by_cases h_pa : pendingAdd.size > 0
      · simp only [h_pa, ↓reduceIte]
        exact emitAddWithRuns_valid_general insts pendingAdd src h_pa (by omega) h_valid
      · simp only [h_pa, ↓reduceIte]; exact h_valid

-- generateInstructions produces valid instructions
theorem generateInstructions_valid (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31) :
    ValidInstArray
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      (sourceWindow source) := by
  simp only [Encoder.generateInstructions]
  set idx := Encoder.buildSourceIndex source
  have h_idx : idx.sourceData = sourceWindow source := sourceWindow_eq_sourceData source
  exact generateInstructionsLoop_valid idx target (sourceWindow source) h_idx
    (by unfold sourceWindow; split
        · exact h_source_bound
        · rw [show ByteArray.empty.size = 0 from rfl]; omega) h_target_bound
    target.size 0 ByteArray.empty #[]
    (by omega) (by omega) (by rw [show ByteArray.empty.size = 0 from rfl])
    (fun i hi => by rw [show (#[] : Array Encoder.RawInst).size = 0 from rfl] at hi; omega)

-- ============================================================================
-- ## Size lemmas for execInstArraySpec → totalCoverageFrom
-- ============================================================================

open SectionBounds in
private theorem execInstSpec_size (inst : Encoder.RawInst) (src tgt : ByteArray)
    (h : ValidInst inst src) :
    (execInstSpec inst src tgt).size = tgt.size + instCoverage inst := by
  cases inst with
  | add data =>
    simp only [execInstSpec, instCoverage, ByteArray.size_append]
  | run b sz =>
    simp only [execInstSpec, instCoverage, ByteArray.size_append]
    rw [show (repeatByte b sz).size = sz from by
      simp [repeatByte, ByteArray.size, Array.size_replicate]]
  | copy addr sz =>
    simp only [execInstSpec, instCoverage, ByteArray.size_append, ByteArray.size_extract]
    have := h.2.2.1; omega

open SectionBounds in
private theorem execInstArraySpec_totalCoverage
    (insts : Array Encoder.RawInst) (src : ByteArray)
    (h_valid : ValidInstArray insts src) :
    ∀ (n k : Nat) (tgt : ByteArray), k ≤ insts.size → insts.size - k ≤ n →
    (execInstArraySpec insts src tgt k insts.size).size =
    tgt.size + totalCoverageFrom insts k := by
  intro n
  induction n with
  | zero =>
    intro k tgt hk hn
    have hkeq : k = insts.size := by omega
    subst hkeq
    rw [execInstArraySpec_base _ _ _ insts.size insts.size (by omega),
        totalCoverageFrom, dif_neg (by omega)]; omega
  | succ m ihm =>
    intro k tgt hk hn
    by_cases hk2 : k < insts.size
    · rw [execInstArraySpec_step _ _ _ k insts.size (by omega) hk2,
          totalCoverageFrom, dif_pos hk2]
      have h_inst_valid : ValidInst insts[k]! src := h_valid k hk2
      have h_bang : insts[k]! = insts[k] := getElem!_pos insts k hk2
      rw [h_bang] at h_inst_valid
      rw [ihm (k + 1) (execInstSpec insts[k]! src tgt) (by omega) (by omega)]
      rw [h_bang, execInstSpec_size insts[k] src tgt h_inst_valid]; omega
    · have hkeq : k = insts.size := by omega
      subst hkeq
      rw [execInstArraySpec_base _ _ _ insts.size insts.size (by omega),
          totalCoverageFrom, dif_neg (by omega)]; omega

open SectionBounds in
private theorem totalCoverage_eq_target_size (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31) :
    let insts := Encoder.generateInstructions (Encoder.buildSourceIndex source) target
    totalCoverageFrom insts 0 = target.size := by
  set insts := Encoder.generateInstructions (Encoder.buildSourceIndex source) target
  have h_exec := generateInstructions_exec source target h_source_bound h_target_bound
  simp only [] at h_exec
  have h_valid := generateInstructions_valid source target h_source_bound h_target_bound
  have h_size := execInstArraySpec_totalCoverage insts (sourceWindow source)
    h_valid insts.size 0 ByteArray.empty (by omega) (by omega)
  rw [h_exec] at h_size
  rw [show ByteArray.empty.size = 0 from rfl] at h_size
  omega

-- ============================================================================
-- ## Deriving h_sec_bound from size constraints
-- ============================================================================

open SectionBounds in
private theorem derive_sec_bound (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31) :
    let secs := Encoder.encodeWindow
      (Encoder.generateInstructions (Encoder.buildSourceIndex source) target)
      source.size
    secs.1.size + secs.2.1.size + secs.2.2.size + 30 < 2 ^ 35 := by
  set insts := Encoder.generateInstructions (Encoder.buildSourceIndex source) target
  have h_valid := generateInstructions_valid source target h_source_bound h_target_bound
  have h_cov := totalCoverage_eq_target_size source target h_source_bound h_target_bound
  simp only [] at h_cov
  apply encoder_section_bound insts source.size
    (fun j hj => by
      have hv := h_valid j hj
      have h_bang : insts[j]! = insts[j] := getElem!_pos insts j hj
      rw [h_bang] at hv
      cases h : insts[j] with
      | add data => simp [ValidInst, h] at hv; omega
      | copy addr sz => simp [ValidInst, h] at hv; exact ⟨by omega, by omega⟩
      | run _ sz => simp [ValidInst, h] at hv; omega)
    (h_cov ▸ le_refl _)
    (fun j hj => by
      have hv := h_valid j hj
      have h_bang : insts[j]! = insts[j] := getElem!_pos insts j hj
      rw [h_bang] at hv
      cases h : insts[j] with
      | add data => simp [instCoverage, ValidInst, h] at *; omega
      | copy _ sz => simp [instCoverage, ValidInst, h] at *; omega
      | run _ sz => simp [instCoverage, ValidInst, h] at *; omega)
    h_target_bound

-- ============================================================================
-- ## Final composition: unconditional full roundtrip
-- ============================================================================

theorem full_encode_decode_roundtrip_final
    (source target : ByteArray)
    (h_source_bound : source.size < 2 ^ 31)
    (h_target_bound : target.size < 2 ^ 31) :
    Decoder.decode (Encoder.encode source target) source = .ok target := by
  exact full_encode_decode_roundtrip' source target
    h_source_bound h_target_bound
    (derive_sec_bound source target h_source_bound h_target_bound)
    (generateInstructions_valid source target h_source_bound h_target_bound)
    (generateInstructions_exec source target h_source_bound h_target_bound)

end LeanBdiff.Vcdiff.GenerateInstructions
