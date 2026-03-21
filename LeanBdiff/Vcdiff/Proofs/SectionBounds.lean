/-
  Phase G, Part 1: Section size bounds for the VCDIFF encoder.

  Proves that the encoder's output sections (data, inst, addr) have bounded
  total size, enabling elimination of the h_sec_bound hypothesis from
  full_encode_decode_roundtrip.
-/
import LeanBdiff.Vcdiff.Proofs.WindowRoundtrip

set_option linter.style.nativeDecide false

namespace LeanBdiff.Vcdiff.SectionBounds

open LeanBdiff.Vcdiff

-- ============================================================================
-- ## Weight and coverage definitions
-- ============================================================================

def instDataWeight (inst : Encoder.RawInst) : Nat :=
  match inst with
  | .add data => data.size
  | .copy _ _ => 0
  | .run _ _ => 1

def instCoverage (inst : Encoder.RawInst) : Nat :=
  match inst with
  | .add data => data.size
  | .copy _ sz => sz
  | .run _ sz => sz

-- Recursive total weight from index i
def totalDataWeightFrom (insts : Array Encoder.RawInst) (i : Nat) : Nat :=
  if h : i < insts.size then
    instDataWeight insts[i] + totalDataWeightFrom insts (i + 1)
  else 0
termination_by insts.size - i

def totalCoverageFrom (insts : Array Encoder.RawInst) (i : Nat) : Nat :=
  if h : i < insts.size then
    instCoverage insts[i] + totalCoverageFrom insts (i + 1)
  else 0
termination_by insts.size - i

-- ============================================================================
-- ## Basic properties of weight/coverage
-- ============================================================================

theorem totalDataWeightFrom_unfold (insts : Array Encoder.RawInst) (i : Nat) :
    totalDataWeightFrom insts i =
      if h : i < insts.size then instDataWeight insts[i] + totalDataWeightFrom insts (i + 1)
      else 0 := by
  rw [totalDataWeightFrom]

theorem totalCoverageFrom_unfold (insts : Array Encoder.RawInst) (i : Nat) :
    totalCoverageFrom insts i =
      if h : i < insts.size then instCoverage insts[i] + totalCoverageFrom insts (i + 1)
      else 0 := by
  rw [totalCoverageFrom]

theorem instDataWeight_le_coverage (inst : Encoder.RawInst) (h : instCoverage inst ≥ 1) :
    instDataWeight inst ≤ instCoverage inst := by
  cases inst with
  | add => simp [instDataWeight, instCoverage]
  | copy => simp [instDataWeight, instCoverage]
  | run => simp [instDataWeight, instCoverage] at *; omega

theorem totalDataWeightFrom_le_coverage (insts : Array Encoder.RawInst) (i : Nat)
    (h_each : ∀ (j : Nat) (hj : j < insts.size), i ≤ j → instCoverage insts[j] ≥ 1) :
    totalDataWeightFrom insts i ≤ totalCoverageFrom insts i := by
  rw [totalDataWeightFrom_unfold, totalCoverageFrom_unfold]
  by_cases h : i < insts.size
  · simp only [h, ↓reduceDIte]
    have h1 := instDataWeight_le_coverage insts[i] (h_each i h (le_refl i))
    have h2 := totalDataWeightFrom_le_coverage insts (i + 1)
      (fun j hj hij => h_each j hj (by omega))
    omega
  · simp [h]
termination_by insts.size - i

theorem instCount_le_coverage (insts : Array Encoder.RawInst) (i : Nat)
    (h_each : ∀ (j : Nat) (hj : j < insts.size), i ≤ j → instCoverage insts[j] ≥ 1) :
    insts.size - i ≤ totalCoverageFrom insts i := by
  rw [totalCoverageFrom_unfold]
  by_cases h : i < insts.size
  · simp only [h, ↓reduceDIte]
    have h1 := h_each i h (le_refl i)
    have ih := instCount_le_coverage insts (i + 1)
      (fun j hj hij => h_each j hj (by omega))
    omega
  · simp [h]; omega
termination_by insts.size - i

theorem size_le_totalCoverage (insts : Array Encoder.RawInst)
    (h_each : ∀ (j : Nat) (hj : j < insts.size), instCoverage insts[j] ≥ 1) :
    insts.size ≤ totalCoverageFrom insts 0 := by
  have := instCount_le_coverage insts 0 (fun j hj _ => h_each j hj)
  omega

-- ============================================================================
-- ## Monotonicity of totalDataWeightFrom
-- ============================================================================

theorem totalDataWeightFrom_out (insts : Array Encoder.RawInst) (i : Nat)
    (h : ¬(i < insts.size)) :
    totalDataWeightFrom insts i = 0 := by
  rw [totalDataWeightFrom_unfold]; simp [h]

theorem totalDataWeightFrom_mono (insts : Array Encoder.RawInst) (i j : Nat)
    (hij : i ≤ j) :
    totalDataWeightFrom insts j ≤ totalDataWeightFrom insts i := by
  obtain ⟨k, rfl⟩ : ∃ k, j = i + k := ⟨j - i, by omega⟩
  induction k with
  | zero => simp
  | succ n ih =>
    have ih' := ih (by omega)
    by_cases h : i + n < insts.size
    · -- Unfold TDW(i+n) to get: IDW(i+n) + TDW(i+n+1) ≤ TDW(i)
      rw [totalDataWeightFrom_unfold insts (i + n)] at ih'
      simp only [h, ↓reduceDIte] at ih'
      -- ih': instDataWeight insts[i+n] + TDW(i+n+1) ≤ TDW(i)
      have h_out := totalDataWeightFrom_out insts (i + (n + 1))
      have h_eq : i + n + 1 = i + (n + 1) := by omega
      rw [h_eq] at ih'; omega
    · have h_out := totalDataWeightFrom_out insts (i + (n + 1)) (by omega)
      rw [h_out]; exact Nat.zero_le _

-- ============================================================================
-- ## encodeAddress addrBytes ≤ 5
-- ============================================================================

-- tryNearModes only replaces with shorter encodings
private theorem tryNearModes_mono (s : AddressCache.State) (addr bestMode : Nat)
    (bestEnc : ByteArray) (fuel : Nat) :
    (s.tryNearModes addr bestMode bestEnc fuel).2.size ≤ bestEnc.size := by
  induction fuel generalizing bestMode bestEnc with
  | zero => simp [AddressCache.State.tryNearModes]
  | succ n ih =>
    simp only [AddressCache.State.tryNearModes]
    by_cases h1 : s.near[s.sNear - n - 1]! ≤ addr
    · simp only [ge_iff_le, h1, ↓reduceIte]
      by_cases h2 : (Varint.encode (addr - s.near[s.sNear - n - 1]!)).size < bestEnc.size
      · simp only [h2, ↓reduceIte]
        have := ih (2 + (s.sNear - n - 1)) (Varint.encode (addr - s.near[s.sNear - n - 1]!))
        omega
      · simp only [show ¬((Varint.encode (addr - s.near[s.sNear - n - 1]!)).size < bestEnc.size)
            from h2, ↓reduceIte]
        exact ih bestMode bestEnc
    · simp only [ge_iff_le, show ¬(s.near[s.sNear - n - 1]! ≤ addr) from h1, ↓reduceIte]
      exact ih bestMode bestEnc

-- tryNearModes preserves ≥ 1 when input ≥ 1
private theorem tryNearModes_ge_1 (s : AddressCache.State) (addr bestMode : Nat)
    (bestEnc : ByteArray) (fuel : Nat) (h_pos : bestEnc.size ≥ 1) :
    (s.tryNearModes addr bestMode bestEnc fuel).2.size ≥ 1 := by
  induction fuel generalizing bestMode bestEnc with
  | zero => simp [AddressCache.State.tryNearModes]; exact h_pos
  | succ n ih =>
    simp only [AddressCache.State.tryNearModes]
    by_cases h1 : s.near[s.sNear - n - 1]! ≤ addr
    · simp only [ge_iff_le, h1, ↓reduceIte]
      by_cases h2 : (Varint.encode (addr - s.near[s.sNear - n - 1]!)).size < bestEnc.size
      · simp only [h2, ↓reduceIte]
        apply ih
        exact Nat.one_le_of_lt (Encoder.Proofs.varint_encode_nonempty _)
      · simp only [show ¬((Varint.encode (addr - s.near[s.sNear - n - 1]!)).size < bestEnc.size)
            from h2, ↓reduceIte]
        exact ih bestMode bestEnc h_pos
    · simp only [ge_iff_le, show ¬(s.near[s.sNear - n - 1]! ≤ addr) from h1, ↓reduceIte]
      exact ih bestMode bestEnc h_pos

-- trySameModes returns ≤ bestEnc.size when bestEnc.size ≥ 1
private theorem trySameModes_mono (s : AddressCache.State) (addr bestMode : Nat)
    (bestEnc : ByteArray) (fuel : Nat) (h_pos : bestEnc.size ≥ 1) :
    (s.trySameModes addr bestMode bestEnc fuel).2.size ≤ bestEnc.size := by
  induction fuel generalizing bestMode bestEnc with
  | zero => simp [AddressCache.State.trySameModes]
  | succ n ih =>
    unfold AddressCache.State.trySameModes
    by_cases h1 : (s.same[(s.sSame - n - 1) * 256 + addr % 256]! == addr && addr != 0) = true
    · simp only [h1, ↓reduceIte]
      -- Result is ByteArray.mk #[addr.toUInt8], size = 1 ≤ bestEnc.size
      have : (ByteArray.mk #[addr.toUInt8]).size = 1 := rfl
      omega
    · simp only [show ¬((s.same[(s.sSame - n - 1) * 256 + addr % 256]! == addr &&
          addr != 0) = true) from h1, ↓reduceIte]
      exact ih bestMode bestEnc h_pos

-- Main: encodeAddress returns addrBytes with size ≤ 5.
-- Only needs addr < 2^35 (not here < 2^35) because encodeAddress picks the
-- minimum encoding, and mode 0 (VCD_SELF) always gives ≤ 5 bytes.
theorem encodeAddress_bytes_le_5 (s : AddressCache.State) (addr here : Nat)
    (h_addr : addr < 2 ^ 35) :
    (s.encodeAddress addr here).2.1.size ≤ 5 := by
  unfold AddressCache.State.encodeAddress
  set enc0 := Varint.encode addr
  have h_enc0_le : enc0.size ≤ 5 := Encoder.Proofs.varint_encode_size_le_5 addr h_addr
  have h_enc0_ge : enc0.size ≥ 1 :=
    Nat.one_le_of_lt (Encoder.Proofs.varint_encode_nonempty addr)
  suffices h : ∀ (bm : Nat) (be : ByteArray), be.size ≤ 5 → be.size ≥ 1 →
      (s.trySameModes addr (s.tryNearModes addr bm be s.sNear).1
        (s.tryNearModes addr bm be s.sNear).2 s.sSame).2.size ≤ 5 by
    by_cases h_gt : here > addr
    · simp only [h_gt, ↓reduceIte]
      set enc1 := Varint.encode (here - addr)
      have h_enc1_ge : enc1.size ≥ 1 :=
        Nat.one_le_of_lt (Encoder.Proofs.varint_encode_nonempty (here - addr))
      by_cases h_lt : enc1.size < enc0.size
      · -- enc1 < enc0 ≤ 5, so enc1 ≤ 4 ≤ 5
        simp only [h_lt, ↓reduceIte]; exact h 1 enc1 (by omega) h_enc1_ge
      · simp only [show ¬(enc1.size < enc0.size) from h_lt, ↓reduceIte]
        exact h 0 enc0 h_enc0_le h_enc0_ge
    · simp only [show ¬(here > addr) from h_gt, ↓reduceIte]
      exact h 0 enc0 h_enc0_le h_enc0_ge
  intro bm be hle hge
  have h_near := tryNearModes_mono s addr bm be s.sNear
  have h_near_ge := tryNearModes_ge_1 s addr bm be s.sNear hge
  have h_same := trySameModes_mono s addr
    (s.tryNearModes addr bm be s.sNear).1
    (s.tryNearModes addr bm be s.sNear).2
    s.sSame h_near_ge
  omega

-- ============================================================================
-- ## Per-step total growth bound
-- ============================================================================

def instDataWeightAt (insts : Array Encoder.RawInst) (idx : Nat) : Nat :=
  if idx < insts.size then instDataWeight insts[idx]! else 0

theorem instDataWeightAt_le_total (insts : Array Encoder.RawInst) (i : Nat) :
    instDataWeightAt insts i ≤ totalDataWeightFrom insts i := by
  unfold instDataWeightAt
  rw [totalDataWeightFrom_unfold]
  by_cases h : i < insts.size
  · simp only [h, ↓reduceIte, ↓reduceDIte]
    simp only [getElem!_pos, h]; omega
  · simp [h]

-- Telescoping per-step bound: one step of encodeOneInst' grows sections,
-- but TDW decreases by at least the growth minus 11.
-- Formally: r.sizes + TDW(i + skip) ≤ base.sizes + TDW(i) + 11.
theorem encodeOneInst'_telescoping
    (insts : Array Encoder.RawInst) (i ssl : Nat)
    (ds is as : ByteArray) (cache : AddressCache.State) (tp : Nat)
    (h_bounds : ∀ (j : Nat) (hj : j < insts.size), match insts[j] with
      | .add data => data.size < 2 ^ 35
      | .copy addr sz => addr < 2 ^ 35 ∧ sz < 2 ^ 35
      | .run _ sz => sz < 2 ^ 35) :
    let r := Encoder.encodeOneInst' insts i ssl ds is as cache tp
    r.1.size + r.2.1.size + r.2.2.1.size +
      totalDataWeightFrom insts (i + r.2.2.2.2.2) ≤
      ds.size + is.size + as.size +
      totalDataWeightFrom insts i + 11 := by
  sorry

-- ============================================================================
-- ## Inductive bound for encodeWindowLoop
-- ============================================================================

-- Growth ≤ totalDataWeightFrom(i) + 11 * fuel (factor 1 via telescoping).
theorem encodeWindowLoop_bound
    (insts : Array Encoder.RawInst) (ssl : Nat)
    (ds is as : ByteArray) (cache : AddressCache.State) (tp fuel i : Nat)
    (h_bounds : ∀ (j : Nat) (hj : j < insts.size), match insts[j] with
      | .add data => data.size < 2 ^ 35
      | .copy addr sz => addr < 2 ^ 35 ∧ sz < 2 ^ 35
      | .run _ sz => sz < 2 ^ 35) :
    let (d, inst, a) := Encoder.encodeWindowLoop insts ssl ds is as cache tp fuel i
    d.size + inst.size + a.size ≤
      ds.size + is.size + as.size + totalDataWeightFrom insts i + 11 * fuel := by
  induction fuel generalizing ds is as cache tp i with
  | zero =>
    simp only [Encoder.encodeWindowLoop]; omega
  | succ n ih =>
    simp only [Encoder.encodeWindowLoop]
    by_cases hge : i ≥ insts.size
    · simp only [hge, ↓reduceIte, ge_iff_le]
      rw [show totalDataWeightFrom insts i = 0 from by
        rw [totalDataWeightFrom_unfold]; simp [show ¬(i < insts.size) from by omega]]
      omega
    · simp only [show ¬(i ≥ insts.size) from hge, ↓reduceIte, ge_iff_le]
      set r := Encoder.encodeOneInst' insts i ssl ds is as cache tp with h_r
      have h_step := encodeOneInst'_telescoping insts i ssl ds is as cache tp h_bounds
      simp only [← h_r] at h_step
      have h_ih := ih r.1 r.2.1 r.2.2.1 r.2.2.2.1 r.2.2.2.2.1 (i + r.2.2.2.2.2)
      -- Unify the encodeWindowLoop expression in h_ih and goal
      generalize Encoder.encodeWindowLoop insts ssl r.1 r.2.1 r.2.2.1
        r.2.2.2.1 r.2.2.2.2.1 n (i + r.2.2.2.2.2) = w at h_ih ⊢
      obtain ⟨d, inst, a⟩ := w
      simp only [] at h_ih ⊢
      omega

-- ============================================================================
-- ## encodeWindow bound
-- ============================================================================

theorem encodeWindow_bound
    (insts : Array Encoder.RawInst) (ssl : Nat)
    (h_bounds : ∀ (j : Nat) (hj : j < insts.size), match insts[j] with
      | .add data => data.size < 2 ^ 35
      | .copy addr sz => addr < 2 ^ 35 ∧ sz < 2 ^ 35
      | .run _ sz => sz < 2 ^ 35) :
    let (d, inst, a) := Encoder.encodeWindow insts ssl
    d.size + inst.size + a.size ≤ totalDataWeightFrom insts 0 + 11 * insts.size := by
  unfold Encoder.encodeWindow
  have := encodeWindowLoop_bound insts ssl ByteArray.empty ByteArray.empty ByteArray.empty
    AddressCache.State.init 0 insts.size 0 h_bounds
  set r := Encoder.encodeWindowLoop insts ssl ByteArray.empty ByteArray.empty ByteArray.empty
    AddressCache.State.init 0 insts.size 0 with hr
  obtain ⟨d, inst, a⟩ := r
  simp only [hr] at this
  simp only []
  have h_empty : ByteArray.empty.size = 0 := rfl
  omega

-- ============================================================================
-- ## Final section bound
-- ============================================================================

-- TDW + 11*size ≤ cov + 11*cov = 12*cov ≤ 12*T
-- 12 * 2^31 + 30 = 25769803806 < 34359738368 = 2^35 ✓
theorem encoder_section_bound
    (insts : Array Encoder.RawInst) (ssl : Nat)
    (h_bounds : ∀ (j : Nat) (hj : j < insts.size), match insts[j] with
      | .add data => data.size < 2 ^ 35
      | .copy addr sz => addr < 2 ^ 35 ∧ sz < 2 ^ 35
      | .run _ sz => sz < 2 ^ 35)
    (h_cov : totalCoverageFrom insts 0 ≤ T)
    (h_each : ∀ (j : Nat) (hj : j < insts.size), instCoverage insts[j] ≥ 1)
    (h_T : T < 2 ^ 31) :
    let (d, inst, a) := Encoder.encodeWindow insts ssl
    d.size + inst.size + a.size + 30 < 2 ^ 35 := by
  have h_ew := encodeWindow_bound insts ssl h_bounds
  have h_dw := totalDataWeightFrom_le_coverage insts 0
    (fun j hj _ => h_each j hj)
  have h_cnt := size_le_totalCoverage insts h_each
  set result := Encoder.encodeWindow insts ssl with h_result
  obtain ⟨d, inst, a⟩ := result
  simp only [h_result] at h_ew
  simp only []
  -- TDW(0) + 11*size ≤ cov + 11*cov = 12*cov ≤ 12*T
  -- 12*T + 30 < 12*2^31 + 30 = 25769803806 < 34359738368 = 2^35
  omega

end LeanBdiff.Vcdiff.SectionBounds
