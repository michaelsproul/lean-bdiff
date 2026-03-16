/-
  Proofs of varint encode/decode roundtrip correctness.

  Main theorem: `decode_encode` — decoding an encoded varint returns the original value.

  Proof structure:
  1. Nat-level bitwise identities (connecting shift/or/and to arithmetic)
  2. Properties of `toBase128`, `setContinuationBits`, `numDigits`
  3. `fromBase128` algebraic roundtrip: digits → number → same digits
  4. `decodeListAux_setContinuationBits`: list-level decode roundtrip
  5. Connection to ByteArray-level `encode`/`decode`
-/
import LeanBdiff.Vcdiff.Varint
import Std.Tactic.BVDecide
import Mathlib.Data.List.Basic
import Batteries.Data.Array.Lemmas

namespace LeanBdiff.Vcdiff.Varint

-- ============================================================================
-- ## DecidableEq instances (needed for native_decide on concrete examples)
-- ============================================================================

deriving instance DecidableEq for DecodeError
deriving instance DecidableEq for Cursor

instance [DecidableEq ε] [DecidableEq α] : DecidableEq (Except ε α) := fun
  | .ok a, .ok b =>
    if h : a = b then isTrue (congrArg _ h)
    else isFalse (by intro h'; cases h'; exact h rfl)
  | .error e₁, .error e₂ =>
    if h : e₁ = e₂ then isTrue (congrArg _ h)
    else isFalse (by intro h'; cases h'; exact h rfl)
  | .ok _, .error _ => isFalse (by intro h; cases h)
  | .error _, .ok _ => isFalse (by intro h; cases h)

-- Concrete roundtrip examples (sanity checks)
example : decode ⟨encode 0, 0⟩ = .ok (0, ⟨encode 0, (encode 0).size⟩) := by native_decide
example : decode ⟨encode 1, 0⟩ = .ok (1, ⟨encode 1, (encode 1).size⟩) := by native_decide
example : decode ⟨encode 127, 0⟩ = .ok (127, ⟨encode 127, (encode 127).size⟩) := by native_decide
example : decode ⟨encode 128, 0⟩ = .ok (128, ⟨encode 128, (encode 128).size⟩) := by native_decide
example : decode ⟨encode 300, 0⟩ = .ok (300, ⟨encode 300, (encode 300).size⟩) := by native_decide
example : decode ⟨encode 16383, 0⟩ = .ok (16383, ⟨encode 16383, (encode 16383).size⟩) := by native_decide
example : decode ⟨encode 16384, 0⟩ = .ok (16384, ⟨encode 16384, (encode 16384).size⟩) := by native_decide

-- ============================================================================
-- ## Nat-level bitwise identities for base-128 varint
-- ============================================================================

-- n &&& 0x7F = n % 128 (AND with 127 = mod 128)
theorem nat_and_0x7F (n : Nat) : n &&& 0x7F = n % 128 := by
  apply Nat.eq_of_testBit_eq; intro i
  rw [Nat.testBit_and,
      show (0x7F : Nat) = 2 ^ 7 - 1 from by native_decide,
      Nat.testBit_two_pow_sub_one,
      show (128 : Nat) = 2 ^ 7 from by native_decide,
      Nat.testBit_mod_two_pow,
      Bool.and_comm]

-- n <<< 7 = n * 128
theorem nat_shiftLeft_7 (n : Nat) : n <<< 7 = n * 128 := by
  simp [Nat.shiftLeft_eq]

-- (n ||| 128) &&& 127 = n &&& 127 (setting then clearing bit 7)
theorem nat_or_128_and_127 (n : Nat) : (n ||| 128) &&& 127 = n &&& 127 := by
  apply Nat.eq_of_testBit_eq; intro i
  simp only [Nat.testBit_and, Nat.testBit_or]
  rw [show (128 : Nat) = 2 ^ 7 from by native_decide,
      show (127 : Nat) = 2 ^ 7 - 1 from by native_decide,
      Nat.testBit_two_pow, Nat.testBit_two_pow_sub_one]
  by_cases h : i = 7
  · simp [h]
  · by_cases hlt : i < 7
    · simp [h, hlt, show ¬(7 = i) from Ne.symm h]
    · simp [show ¬(i < 7) from hlt, show ¬(7 = i) from Ne.symm h]

-- (n <<< 7) &&& b = 0 when b < 128 (no bit overlap)
theorem nat_shiftLeft7_and_lt128 (n b : Nat) (hb : b < 128) :
    (n <<< 7) &&& b = 0 := by
  apply Nat.eq_of_testBit_eq; intro i
  simp only [Nat.testBit_and, Nat.testBit_shiftLeft, Nat.testBit_zero]
  by_cases hi : 7 ≤ i
  · have : b < 2 ^ i := by
      calc b < 128 := hb
        _ = 2 ^ 7 := by native_decide
        _ ≤ 2 ^ i := Nat.pow_le_pow_right (by omega) hi
    simp [Nat.testBit_lt_two_pow this]
  · simp [show ¬(i ≥ 7) from hi]

-- General: a ||| b = a + b when a &&& b = 0 (no overlapping bits)
-- Proved by binary induction: decompose into div 2 / mod 2, use Nat.or_div_two
private theorem or_mod2_00 (a b : Nat) (ha : a % 2 = 0) (hb : b % 2 = 0) :
    (a ||| b) % 2 = 0 := by
  have ht := Nat.testBit_or a b 0
  rw [Nat.testBit_zero, Nat.testBit_zero, Nat.testBit_zero, ha, hb] at ht
  have : ¬ ((a ||| b) % 2 = 1) := by intro h'; rw [h'] at ht; simp at ht
  omega

private theorem or_mod2_01 (a b : Nat) (ha : a % 2 = 0) (hb : b % 2 = 1) :
    (a ||| b) % 2 = 1 := by
  have ht := Nat.testBit_or a b 0
  rw [Nat.testBit_zero, Nat.testBit_zero, Nat.testBit_zero, ha, hb] at ht
  have : ¬ ((a ||| b) % 2 = 0) := by intro h'; rw [h'] at ht; simp at ht
  omega

private theorem or_mod2_10 (a b : Nat) (ha : a % 2 = 1) (hb : b % 2 = 0) :
    (a ||| b) % 2 = 1 := by
  have ht := Nat.testBit_or a b 0
  rw [Nat.testBit_zero, Nat.testBit_zero, Nat.testBit_zero, ha, hb] at ht
  have : ¬ ((a ||| b) % 2 = 0) := by intro h'; rw [h'] at ht; simp at ht
  omega

theorem or_eq_add_of_and_eq_zero (a b : Nat) (h : a &&& b = 0) : a ||| b = a + b := by
  induction a using Nat.strongRecOn generalizing b with
  | _ a ih =>
    by_cases ha : a = 0
    · simp [ha]
    · have ha_div : a / 2 < a := Nat.div_lt_self (by omega) (by omega)
      have hand2 : a / 2 &&& b / 2 = 0 := by
        have h1 := @Nat.and_div_two a b; rw [h] at h1; omega
      have hih := ih _ ha_div (b / 2) hand2
      have hlow : ¬(a % 2 = 1 ∧ b % 2 = 1) := by
        intro ⟨ha1, hb1⟩
        have ht := Nat.testBit_and a b 0
        rw [h, Nat.testBit_zero, Nat.testBit_zero, Nat.testBit_zero, ha1, hb1] at ht
        simp at ht
      have hor_low : (a ||| b) % 2 = a % 2 + b % 2 := by
        rcases Nat.mod_two_eq_zero_or_one a with ha0 | ha1 <;>
          rcases Nat.mod_two_eq_zero_or_one b with hb0 | hb1
        · rw [or_mod2_00 a b ha0 hb0, ha0, hb0]
        · rw [or_mod2_01 a b ha0 hb1, ha0, hb1]
        · rw [or_mod2_10 a b ha1 hb0, ha1, hb0]
        · exact absurd ⟨ha1, hb1⟩ hlow
      have hor_div : (a ||| b) / 2 = a / 2 + b / 2 := by
        rw [Nat.or_div_two, hih]
      have hdec_or := Nat.div_add_mod (a ||| b) 2
      have hdec_a := Nat.div_add_mod a 2
      have hdec_b := Nat.div_add_mod b 2
      omega

-- (n <<< 7) ||| b = n * 128 + b when b < 128
-- OR equals ADD when bits don't overlap
theorem nat_shiftLeft7_or_lt128 (n b : Nat) (hb : b < 128) :
    (n <<< 7) ||| b = n * 128 + b := by
  rw [or_eq_add_of_and_eq_zero _ _ (nat_shiftLeft7_and_lt128 n b hb), nat_shiftLeft_7]

-- ============================================================================
-- ## UInt8 bitwise lemmas
-- ============================================================================

-- (d ||| 0x80).toNat &&& 0x7F = d.toNat &&& 0x7F  (UInt8→Nat level)
theorem uint8_or_0x80_toNat_and_0x7F (d : UInt8) :
    (d ||| 0x80).toNat &&& 0x7F = d.toNat &&& 0x7F := by
  rw [UInt8.toNat_or, show (0x80 : UInt8).toNat = 128 from by native_decide]
  exact nat_or_128_and_127 d.toNat

-- d &&& 0x80 = 0 when d.toNat < 128 (MSB is clear)
theorem uint8_msb_clear (d : UInt8) (hd : d.toNat < 128) :
    d &&& 0x80 = 0 := by
  suffices h : (d &&& 0x80).toNat = (0 : UInt8).toNat by
    exact UInt8.toNat_inj.mp h
  rw [UInt8.toNat_and, show (0x80 : UInt8).toNat = 128 from by native_decide,
      show (0 : UInt8).toNat = 0 from by native_decide]
  apply Nat.eq_of_testBit_eq; intro i
  simp only [Nat.testBit_and, Nat.testBit_zero]
  rw [show (128 : Nat) = 2 ^ 7 from by native_decide, Nat.testBit_two_pow]
  by_cases h7 : i = 7
  · subst h7; simp [Nat.testBit_lt_two_pow (show d.toNat < 2^7 from hd)]
  · simp [show ¬(7 = i) from Ne.symm h7]

-- (d ||| 0x80) &&& 0x80 ≠ 0 (MSB is set after OR)
theorem uint8_msb_set_or (d : UInt8) :
    ¬((d ||| 0x80) &&& 0x80 = 0) := by
  obtain ⟨bv⟩ := d
  show ¬(UInt8.ofBitVec ((bv ||| 0x80) &&& 0x80) = UInt8.ofBitVec 0)
  intro h; have := UInt8.ofBitVec.inj h; revert this; bv_decide

-- Decode accumulator step: (acc <<< 7) ||| (d.toNat &&& 0x7F) = acc * 128 + d.toNat
theorem decode_acc_step (acc : Nat) (d : UInt8) (hd : d.toNat < 128) :
    (acc <<< 7) ||| (d.toNat &&& 0x7F) = acc * 128 + d.toNat := by
  rw [nat_and_0x7F, Nat.mod_eq_of_lt hd, nat_shiftLeft7_or_lt128 acc d.toNat hd]

-- Same for continuation byte (d ||| 0x80)
theorem decode_acc_step_cont (acc : Nat) (d : UInt8) (hd : d.toNat < 128) :
    (acc <<< 7) ||| ((d ||| 0x80).toNat &&& 0x7F) = acc * 128 + d.toNat := by
  rw [uint8_or_0x80_toNat_and_0x7F, nat_and_0x7F, Nat.mod_eq_of_lt hd,
      nat_shiftLeft7_or_lt128 acc d.toNat hd]

-- ============================================================================
-- ## Properties of toBase128
-- ============================================================================

@[simp] theorem toBase128_zero : toBase128 0 = [] := by
  simp [toBase128]

theorem toBase128_pos {n : Nat} (h : n ≠ 0) :
    toBase128 n = toBase128 (n / 128) ++ [(n % 128).toUInt8] := by
  rw [toBase128]; simp [h]

theorem toBase128_ne_nil {n : Nat} (h : n ≠ 0) : toBase128 n ≠ [] := by
  rw [toBase128_pos h]; simp

-- Every digit in toBase128 has value < 128
theorem toBase128_digit_bound {n : Nat} {d : UInt8} (hd : d ∈ toBase128 n) :
    d.toNat < 128 := by
  induction n using Nat.strongRecOn with
  | _ n ih =>
    by_cases h : n = 0
    · simp [h] at hd
    · rw [toBase128_pos h] at hd
      rw [List.mem_append] at hd
      rcases hd with hd | hd
      · exact ih _ (Nat.div_lt_self (by omega) (by omega)) hd
      · rw [List.mem_cons, List.mem_nil_iff, or_false] at hd
        rw [hd]; show (n % 128 : Nat) % 256 < 128; omega

-- ============================================================================
-- ## Properties of setContinuationBits
-- ============================================================================

@[simp] theorem setContinuationBits_nil : setContinuationBits [] = [] := by
  simp [setContinuationBits]

@[simp] theorem setContinuationBits_singleton (b : UInt8) :
    setContinuationBits [b] = [b] := by
  simp [setContinuationBits]

theorem setContinuationBits_cons_cons (b b' : UInt8) (rest : List UInt8) :
    setContinuationBits (b :: b' :: rest) =
    (b ||| 0x80) :: setContinuationBits (b' :: rest) := by
  simp [setContinuationBits]

theorem setContinuationBits_length (l : List UInt8) :
    (setContinuationBits l).length = l.length := by
  induction l with
  | nil => simp
  | cons b rest ih =>
    match rest with
    | [] => simp
    | _ :: _ => simp [setContinuationBits]; exact ih

-- ============================================================================
-- ## Properties of numDigits
-- ============================================================================

@[simp] theorem numDigits_zero : numDigits 0 = 0 := by
  simp [numDigits]

theorem numDigits_pos {n : Nat} (h : n ≠ 0) :
    numDigits n = numDigits (n / 128) + 1 := by
  rw [numDigits]; simp [h]

theorem toBase128_length {n : Nat} :
    (toBase128 n).length = numDigits n := by
  induction n using Nat.strongRecOn with
  | _ n ih =>
    by_cases h : n = 0
    · simp [h, toBase128, numDigits]
    · rw [toBase128_pos h, numDigits_pos h, List.length_append, List.length_singleton]
      have := ih (n / 128) (Nat.div_lt_self (by omega) (by omega))
      omega

-- ============================================================================
-- ## fromBase128: algebraic roundtrip
-- ============================================================================

/-- Interpret a list of base-128 digits (big-endian, accumulator-style). -/
def fromBase128 : List UInt8 → Nat → Nat
  | [], acc => acc
  | d :: rest, acc => fromBase128 rest (acc * 128 + d.toNat)

theorem fromBase128_append (l₁ l₂ : List UInt8) (acc : Nat) :
    fromBase128 (l₁ ++ l₂) acc = fromBase128 l₂ (fromBase128 l₁ acc) := by
  induction l₁ generalizing acc with
  | nil => simp [fromBase128]
  | cons d rest ih => simp [fromBase128, ih]

theorem fromBase128_acc (l : List UInt8) (acc : Nat) :
    fromBase128 l acc = fromBase128 l 0 + acc * 128 ^ l.length := by
  induction l generalizing acc with
  | nil => simp [fromBase128]
  | cons d rest ih =>
    simp only [fromBase128, List.length_cons, Nat.zero_mul, Nat.zero_add]
    rw [ih (acc * 128 + d.toNat), ih d.toNat]
    have h1 : 128 ^ (rest.length + 1) = 128 ^ rest.length * 128 :=
      Nat.pow_succ 128 rest.length
    rw [h1, Nat.mul_comm (128 ^ rest.length) 128, Nat.add_mul, Nat.mul_assoc]
    omega

-- The base-128 representation is correct: fromBase128 (toBase128 n) 0 = n
theorem fromBase128_toBase128 (n : Nat) :
    fromBase128 (toBase128 n) 0 = n := by
  induction n using Nat.strongRecOn with
  | _ n ih =>
    by_cases h : n = 0
    · subst h; simp [toBase128, fromBase128]
    · rw [toBase128_pos h, fromBase128_append]
      simp [fromBase128]
      have hdiv : n / 128 < n := Nat.div_lt_self (by omega) (by omega)
      rw [ih _ hdiv]
      show n / 128 * 128 + (n % 128 : Nat) % 256 = n
      omega

-- ============================================================================
-- ## List-level decode specification
-- ============================================================================

/-- List-level decode spec. -/
def decodeListAux : List UInt8 → Nat → Nat → Option (Nat × List UInt8)
  | _, _, 0 => none
  | [], _, _ + 1 => none
  | b :: rest, acc, fuel + 1 =>
    let acc' := (acc <<< 7) ||| (b.toNat &&& 0x7F)
    if b &&& 0x80 = (0 : UInt8) then some (acc', rest)
    else decodeListAux rest acc' fuel

-- ============================================================================
-- ## Decode roundtrip at list level
-- ============================================================================

-- Decoding setContinuationBits of toBase128 digits recovers fromBase128 value
theorem decodeListAux_setContinuationBits (digits : List UInt8)
    (hne : digits ≠ [])
    (hbound : ∀ d ∈ digits, d.toNat < 128)
    (acc : Nat) (fuel : Nat) (hfuel : digits.length ≤ fuel) :
    decodeListAux (setContinuationBits digits) acc fuel =
    some (fromBase128 digits acc, []) := by
  induction digits generalizing acc fuel with
  | nil => exact absurd rfl hne
  | cons d rest ih =>
    match rest with
    | [] =>
      simp only [setContinuationBits]
      match fuel, hfuel with
      | fuel + 1, _ =>
        simp only [decodeListAux]
        have hd : d.toNat < 128 := hbound d List.mem_cons_self
        rw [if_pos (uint8_msb_clear d hd)]
        congr 1; congr 1
        simp only [fromBase128]
        exact decode_acc_step acc d hd
    | d' :: rest' =>
      match fuel, hfuel with
      | fuel + 1, hfuel =>
        rw [setContinuationBits_cons_cons]
        simp only [decodeListAux]
        have hd : d.toNat < 128 := hbound d List.mem_cons_self
        rw [if_neg (uint8_msb_set_or d), uint8_or_0x80_toNat_and_0x7F]
        rw [decode_acc_step acc d hd]
        show decodeListAux (setContinuationBits (d' :: rest')) (acc * 128 + d.toNat) fuel =
          some (fromBase128 (d' :: rest') (acc * 128 + d.toNat), [])
        exact ih (List.cons_ne_nil d' rest')
          (fun x hx => hbound x (List.mem_cons_of_mem d hx))
          (acc * 128 + d.toNat) fuel (by simp [List.length_cons] at hfuel ⊢; omega)

-- ============================================================================
-- ## ByteArray-level bridge
-- ============================================================================

private theorem ba_get_eq_list_get (l : List UInt8) (pos : Nat) (h : pos < l.length)
    (h2 : pos < (⟨l.toArray⟩ : ByteArray).size) :
    (⟨l.toArray⟩ : ByteArray)[pos] = l[pos] := by
  show (⟨l.toArray⟩ : ByteArray).data[pos] = l[pos]
  exact List.getElem_toArray (by simp [List.size_toArray]; exact h)

-- Connect ByteArray-level decodeLoop to List-level decodeListAux
private def decodeLoop_match_decodeListAux
    (allBytes : List UInt8) (pos acc : Nat) :
    (fuel : Nat) → (v : Nat) →
    decodeListAux (allBytes.drop pos) acc fuel = some (v, []) →
    decodeLoop ⟨allBytes.toArray⟩ pos acc fuel =
    .ok (v, ⟨⟨allBytes.toArray⟩, allBytes.length⟩)
  | 0, _, h => by simp [decodeListAux] at h
  | fuel + 1, v, h => by
    have hpos : pos < allBytes.length := by
      if hge : allBytes.length ≤ pos then
        exfalso; rw [List.drop_eq_nil_of_le hge] at h; simp [decodeListAux] at h
      else omega
    have hba_size : pos < (⟨allBytes.toArray⟩ : ByteArray).size := by
      simp [ByteArray.size, List.size_toArray]; exact hpos
    unfold decodeLoop
    rw [dif_pos hba_size]
    simp only [ba_get_eq_list_get allBytes pos hpos hba_size]
    rw [List.drop_eq_getElem_cons hpos] at h
    simp only [decodeListAux] at h
    -- Both h (from decodeListAux) and goal (from decodeLoop) have if on MSB.
    -- decodeListAux uses `= 0` (Prop), decodeLoop uses `== 0` (BEq).
    -- Use split on both, handling matching/contradictory cases.
    split at h
    · next hmsb_h =>
        simp only [Option.some.injEq, Prod.mk.injEq] at h
        obtain ⟨hv, hrest⟩ := h
        -- In goal, the BEq version should also be true
        have hlen : pos + 1 = allBytes.length := by
          have := List.drop_eq_nil_iff.mp hrest; omega
        split
        · -- BEq true in goal: terminal case matches
          subst hv
          congr 1; congr 1
          exact congrArg (Cursor.mk { data := allBytes.toArray }) hlen
        · -- BEq false in goal: contradiction (MSB can't be both clear and set)
          next hmsb_g =>
            exfalso; exact hmsb_g (beq_iff_eq.mpr hmsb_h)
    · next hmsb_h =>
        split
        · -- BEq true in goal: contradiction
          next hmsb_g =>
            exfalso; exact hmsb_h (beq_iff_eq.mp hmsb_g)
        · -- BEq false in goal: continuation case matches
          exact decodeLoop_match_decodeListAux allBytes (pos + 1) _ fuel v h

-- ============================================================================
-- ## Generalized bridge: varint in the middle of a ByteArray
-- ============================================================================

-- Non-private version of the list/ByteArray index bridge
theorem ba_get_eq_list_getElem (l : List UInt8) (pos : Nat) (h : pos < l.length)
    (h2 : pos < (⟨l.toArray⟩ : ByteArray).size) :
    (⟨l.toArray⟩ : ByteArray)[pos] = l[pos] := by
  show (⟨l.toArray⟩ : ByteArray).data[pos] = l[pos]
  exact List.getElem_toArray (by simp [List.size_toArray]; exact h)

-- Generalized bridge: decodeLoop on a ByteArray where the varint is
-- embedded at an arbitrary position (not necessarily at the end).
-- The cursor ends at the position after the varint bytes.
theorem decodeLoop_match_general
    (allBytes : List UInt8) (pos acc : Nat) :
    (fuel : Nat) → (v : Nat) → (remaining : List UInt8) →
    decodeListAux (allBytes.drop pos) acc fuel = some (v, remaining) →
    decodeLoop ⟨allBytes.toArray⟩ pos acc fuel =
    .ok (v, ⟨⟨allBytes.toArray⟩, allBytes.length - remaining.length⟩)
  | 0, _, _, h => by simp [decodeListAux] at h
  | fuel + 1, v, remaining, h => by
    have hpos : pos < allBytes.length := by
      if hge : allBytes.length ≤ pos then
        exfalso; rw [List.drop_eq_nil_of_le hge] at h; simp [decodeListAux] at h
      else omega
    have hba_size : pos < (⟨allBytes.toArray⟩ : ByteArray).size := by
      simp [ByteArray.size, List.size_toArray]; exact hpos
    unfold decodeLoop
    rw [dif_pos hba_size]
    simp only [ba_get_eq_list_getElem allBytes pos hpos hba_size]
    rw [List.drop_eq_getElem_cons hpos] at h
    simp only [decodeListAux] at h
    split at h
    · next hmsb_h =>
        simp only [Option.some.injEq, Prod.mk.injEq] at h
        obtain ⟨hv, hrest⟩ := h
        -- hrest : allBytes.drop (pos + 1) = remaining
        subst hrest; subst hv
        split
        · -- BEq true: terminal case
          congr 1; congr 1; congr 1
          rw [List.length_drop]; omega
        · -- BEq false: contradiction
          next hmsb_g =>
            exfalso; exact hmsb_g (beq_iff_eq.mpr hmsb_h)
    · next hmsb_h =>
        split
        · next hmsb_g =>
            exfalso; exact hmsb_h (beq_iff_eq.mp hmsb_g)
        · exact decodeLoop_match_general allBytes (pos + 1) _ fuel v remaining h

-- decodeListAux suffix extension: if decoding l consumes all bytes,
-- then decoding l ++ suffix also succeeds and returns suffix as remaining.
theorem decodeListAux_append (l suffix : List UInt8) (acc : Nat) :
    (fuel : Nat) → (v : Nat) →
    decodeListAux l acc fuel = some (v, []) →
    decodeListAux (l ++ suffix) acc fuel = some (v, suffix)
  | 0, _, h => by simp [decodeListAux] at h
  | fuel + 1, v, h => by
    match l with
    | [] => simp [decodeListAux] at h
    | b :: rest =>
      simp only [List.cons_append]
      -- Unfold both h and goal with decodeListAux
      simp only [decodeListAux] at h ⊢
      -- Split on MSB condition
      split
      · next hmsb =>
          -- Terminal: MSB clear. h says some (acc', rest) = some (v, [])
          rw [hmsb] at h
          simp only [↓reduceIte] at h
          simp only [Option.some.injEq, Prod.mk.injEq] at h
          obtain ⟨hv, hrest⟩ := h
          -- rest = [], so rest ++ suffix = suffix
          subst hrest; subst hv
          simp
      · next hmsb =>
          -- Continuation: MSB set. Recurse.
          -- Resolve the if in h (same condition, opposite branch)
          split at h
          · next hmsb_h => exact absurd hmsb_h hmsb
          · exact decodeListAux_append rest suffix _ fuel v h

-- Make numDigits_le_5 accessible
theorem numDigits_le_5' (n : Nat) (h : n < 2 ^ 35) (hn : n ≠ 0) : numDigits n ≤ 5 := by
  rw [numDigits_pos hn]
  if h1 : n / 128 = 0 then simp [h1] else
  rw [numDigits_pos h1]
  if h2 : n / 128 / 128 = 0 then simp [h2] else
  rw [numDigits_pos h2]
  if h3 : n / 128 / 128 / 128 = 0 then simp [h3] else
  rw [numDigits_pos h3]
  if h4 : n / 128 / 128 / 128 / 128 = 0 then simp [h4] else
  rw [numDigits_pos h4]
  have : n / 128 / 128 / 128 / 128 / 128 = 0 := by omega
  simp [this]

-- Helper: the encoded list for n ≠ 0
private def encList (n : Nat) : List UInt8 := setContinuationBits (toBase128 n)

-- decodeListAux on encList succeeds (factored from decode_encode)
private theorem decodeListAux_encList (n : Nat) (h : n < 2 ^ 35) (hn : n ≠ 0) :
    decodeListAux (encList n) 0 5 = some (n, []) := by
  have := decodeListAux_setContinuationBits (toBase128 n)
    (toBase128_ne_nil hn) (fun d hd => toBase128_digit_bound hd)
    0 5 (by rw [toBase128_length]; exact numDigits_le_5' n h hn)
  rwa [fromBase128_toBase128] at this

-- encode n for n ≠ 0 has data = encList
private theorem encode_data_eq (n : Nat) (hn : n ≠ 0) :
    (encode n).data = (encList n).toArray := by
  simp [encode, show (n == 0) = false from by simp [hn], encList]

-- Helper: extract from a ByteArray matches a sublist via List.drop/take
private theorem list_drop_take_eq_of_extract
    (data : ByteArray) (pos len : Nat)
    (expected : ByteArray) (h_bound : pos + len ≤ data.size)
    (h_extract : data.extract pos (pos + len) = expected) :
    (data.data.toList.drop pos).take len = expected.data.toList := by
  subst h_extract
  rw [ByteArray.data_extract, Array.toList_extract, List.extract_eq_take_drop]
  simp [Nat.add_sub_cancel_left]

-- The key drop decomposition: when extract matches, drop pos = encoded ++ rest
private theorem list_drop_decompose
    (data : ByteArray) (pos : Nat) (encoded : List UInt8)
    (h_bound : pos + encoded.length ≤ data.size)
    (h_take : (data.data.toList.drop pos).take encoded.length = encoded) :
    data.data.toList.drop pos = encoded ++ data.data.toList.drop (pos + encoded.length) := by
  conv_lhs => rw [← List.take_append_drop encoded.length (data.data.toList.drop pos)]
  rw [h_take, List.drop_drop]

private theorem numDigits_le_5 (n : Nat) (h : n < 2 ^ 35) (hn : n ≠ 0) : numDigits n ≤ 5 := by
  rw [numDigits_pos hn]
  if h1 : n / 128 = 0 then simp [h1] else
  rw [numDigits_pos h1]
  if h2 : n / 128 / 128 = 0 then simp [h2] else
  rw [numDigits_pos h2]
  if h3 : n / 128 / 128 / 128 = 0 then simp [h3] else
  rw [numDigits_pos h3]
  if h4 : n / 128 / 128 / 128 / 128 = 0 then simp [h4] else
  rw [numDigits_pos h4]
  have : n / 128 / 128 / 128 / 128 / 128 = 0 := by omega
  simp [this]

-- ============================================================================
-- ## Main roundtrip theorem
-- ============================================================================

/-- decode (encode n) returns n, for n < 2^35 (fits in 5-byte varint). -/
theorem decode_encode (n : Nat) (h : n < 2 ^ 35) :
    decode ⟨encode n, 0⟩ = .ok (n, ⟨encode n, (encode n).size⟩) := by
  if hn : n = 0 then subst hn; native_decide else
  simp only [decode, encode, show (n == 0) = false from by simp [hn],
             show (false = true) = False from by simp, ite_false]
  have hdla : decodeListAux (setContinuationBits (toBase128 n)) 0 5 = some (n, []) := by
    have := decodeListAux_setContinuationBits (toBase128 n)
      (toBase128_ne_nil hn) (fun d hd => toBase128_digit_bound hd)
      0 5 (by rw [toBase128_length]; exact numDigits_le_5 n h hn)
    rwa [fromBase128_toBase128] at this
  rw [decodeLoop_match_decodeListAux
    (setContinuationBits (toBase128 n)) 0 0 5 n (by rwa [List.drop_zero])]
  simp [ByteArray.size, List.size_toArray]

-- ============================================================================
-- ## Varint decode at arbitrary position
-- ============================================================================

-- decodeListAux succeeds on the encoded bytes of n
-- (same proof as in decode_encode, factored out)
private theorem decodeListAux_encode (n : Nat) (h : n < 2 ^ 35) :
    decodeListAux (encode n).data.toList 0 5 = some (n, []) := by
  if hn : n = 0 then subst hn; native_decide
  else
    have heq : (encode n).data.toList = setContinuationBits (toBase128 n) := by
      simp only [encode, show (n == 0) = false from by simp [hn],
                 show (false = true) = False from by simp, ite_false]
    rw [heq]
    have := decodeListAux_setContinuationBits (toBase128 n)
      (toBase128_ne_nil hn) (fun d hd => toBase128_digit_bound hd)
      0 5 (by rw [toBase128_length]; exact numDigits_le_5' n h hn)
    rwa [fromBase128_toBase128] at this

/-- Varint decode at arbitrary position: if the bytes at [pos, pos+encSize)
    in data match encode(n), then decode succeeds. -/
theorem decode_at_pos (n : Nat) (h : n < 2 ^ 35)
    (data : ByteArray) (pos : Nat)
    (h_bound : pos + (encode n).size ≤ data.size)
    (h_extract : data.extract pos (pos + (encode n).size) = encode n) :
    decode ⟨data, pos⟩ = .ok (n, ⟨data, pos + (encode n).size⟩) := by
  simp only [decode]
  -- Abbreviations for list-level reasoning
  let encBytes := (encode n).data.toList
  let dataList := data.data.toList
  -- Size bridge: ByteArray.size = Array.size = List.length
  have henc_size : (encode n).size = encBytes.length := by
    show (encode n).data.size = (encode n).data.toList.length
    rw [Array.size_eq_length_toList]
  have hdata_size : data.size = dataList.length := by
    show data.data.size = data.data.toList.length
    rw [Array.size_eq_length_toList]
  -- decodeListAux on encoded bytes succeeds
  have hdla := decodeListAux_encode n h
  -- The bytes at [pos, pos+encSize) in data match the encoded bytes
  have h_take : (dataList.drop pos).take encBytes.length = encBytes :=
    list_drop_take_eq_of_extract data pos (encode n).size (encode n) h_bound h_extract
  -- Decompose: dataList.drop pos = encBytes ++ suffix
  have h_bound_list : pos + encBytes.length ≤ data.size := by rw [← henc_size]; exact h_bound
  have hdrop := list_drop_decompose data pos encBytes h_bound_list h_take
  -- Extend decodeListAux to the full data
  let suffix := dataList.drop (pos + encBytes.length)
  have hdla_data : decodeListAux (dataList.drop pos) 0 5 = some (n, suffix) := by
    rw [hdrop]; exact decodeListAux_append encBytes suffix 0 5 n hdla
  -- Key: data.data = dataList.toArray
  have hdata_arr : dataList.toArray = data.data :=
    @Array.toArray_toList UInt8 data.data
  have hdata_eq : (⟨dataList.toArray⟩ : ByteArray) = data := by
    cases data; exact congrArg ByteArray.mk hdata_arr
  -- Apply generalized bridge
  show decodeLoop data pos 0 5 = _
  conv_lhs => rw [← hdata_eq]
  rw [decodeLoop_match_general dataList pos 0 5 n suffix hdla_data]
  -- Rewrite ⟨dataList.toArray⟩ back to data
  rw [hdata_eq]
  -- Now: .ok (n, ⟨data, dataList.length - suffix.length⟩) = .ok (n, ⟨data, pos + (encode n).size⟩)
  congr 1; congr 1; congr 1
  -- dataList.length - suffix.length = pos + (encode n).size
  show dataList.length - (dataList.drop (pos + encBytes.length)).length = pos + (encode n).size
  rw [List.length_drop, ← henc_size, ← hdata_size]; omega

end LeanBdiff.Vcdiff.Varint
