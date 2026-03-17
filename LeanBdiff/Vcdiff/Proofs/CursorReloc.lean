/-
  Cursor relocation lemmas: operations on ⟨pfx ++ sfx, pfx.size + k⟩
  produce the same results as on ⟨sfx, k⟩ (modulo cursor .data fields).
-/
import LeanBdiff.Vcdiff.Decoder
import LeanBdiff.Vcdiff.Proofs.Encoder
import Batteries.Data.ByteArray
import Batteries.Data.Array.Lemmas

set_option linter.unusedSimpArgs false

namespace LeanBdiff.Vcdiff.CursorReloc

open LeanBdiff.Vcdiff

-- ============================================================================
-- ## ByteArray indexing relocation
-- ============================================================================

theorem ba_getElem_append_add (pfx sfx : ByteArray) (k : Nat) (hk : k < sfx.size)
    (h : pfx.size + k < (pfx ++ sfx).size := by rw [ByteArray.size_append]; omega) :
    (pfx ++ sfx)[pfx.size + k] = sfx[k] := by
  have := ByteArray.get_append_right (show pfx.size ≤ pfx.size + k from Nat.le_add_right _ _) h
  simp only [Nat.add_sub_cancel_left] at this
  exact this

theorem ba_getElem_bang_append_add (pfx sfx : ByteArray) (k : Nat) (hk : k < sfx.size) :
    (pfx ++ sfx)[pfx.size + k]! = sfx[k]! := by
  have h1 : pfx.size + k < (pfx ++ sfx).size := by rw [ByteArray.size_append]; omega
  simp only [getElem!_pos, h1, hk]
  exact ba_getElem_append_add pfx sfx k hk

theorem ba_extract_append_right (a b : ByteArray)
    (i j : Nat) (h : a.size ≤ i) :
    (a ++ b).extract i j = b.extract (i - a.size) (j - a.size) := by
  ext1
  rw [ByteArray.data_extract, ByteArray.data_extract,
      ByteArray.data_append]
  exact Array.extract_append_of_size_left_le_start
    (by rwa [ByteArray.size] at h)

theorem ba_extract_append_add (pfx sfx : ByteArray) (k n : Nat) :
    (pfx ++ sfx).extract (pfx.size + k) (pfx.size + k + n) =
    sfx.extract k (k + n) := by
  rw [ba_extract_append_right pfx sfx
    (pfx.size + k) (pfx.size + k + n) (Nat.le_add_right _ _)]
  congr 1 <;> omega

-- ============================================================================
-- ## Cursor.readByte relocation
-- ============================================================================

theorem readByte_reloc (pfx sfx : ByteArray) (k : Nat) (hk : k < sfx.size) :
    Varint.Cursor.readByte ⟨pfx ++ sfx, pfx.size + k⟩ =
    .ok (sfx[k]!, ⟨pfx ++ sfx, pfx.size + k + 1⟩) := by
  unfold Varint.Cursor.readByte
  have hlt : pfx.size + k < (pfx ++ sfx).size := by rw [ByteArray.size_append]; omega
  simp only [hlt, ↓reduceIte, Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq, and_true,
    true_and]
  exact ba_getElem_bang_append_add pfx sfx k hk

-- ============================================================================
-- ## Cursor.readBytes relocation
-- ============================================================================

theorem readBytes_reloc (pfx sfx : ByteArray) (k n : Nat) (h : k + n ≤ sfx.size) :
    Varint.Cursor.readBytes ⟨pfx ++ sfx, pfx.size + k⟩ n =
    .ok (sfx.extract k (k + n), ⟨pfx ++ sfx, pfx.size + (k + n)⟩) := by
  unfold Varint.Cursor.readBytes
  have hle : pfx.size + k + n ≤ (pfx ++ sfx).size := by rw [ByteArray.size_append]; omega
  simp only [hle, ↓reduceIte, Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq, true_and,
    and_true]
  exact ⟨ba_extract_append_add pfx sfx k n, by omega⟩

-- ============================================================================
-- ## Cursor.hasBytes relocation
-- ============================================================================

theorem hasBytes_reloc (pfx sfx : ByteArray) (k n : Nat) :
    Varint.Cursor.hasBytes ⟨pfx ++ sfx, pfx.size + k⟩ n =
    Varint.Cursor.hasBytes ⟨sfx, k⟩ n := by
  simp only [Varint.Cursor.hasBytes, ByteArray.size_append]
  exact decide_eq_decide.mpr ⟨fun h => by omega, fun h => by omega⟩

-- ============================================================================
-- ## Varint.decodeLoop data preservation and relocation
-- ============================================================================

-- The .data field of varint decode results is always the input data
theorem varint_decodeLoop_data (data : ByteArray) (pos acc : Nat)
    : (remaining : Nat) → (v : Nat) → (c : Varint.Cursor) →
    Varint.decodeLoop data pos acc remaining = .ok (v, c) → c.data = data
  | 0, _, _, h => by simp [Varint.decodeLoop] at h
  | remaining + 1, v, c, h => by
    unfold Varint.decodeLoop at h
    by_cases hp : pos < data.size
    · rw [dif_pos hp] at h
      by_cases hcont : (data[pos] &&& 0x80 == 0) = true
      · simp only [hcont, ↓reduceIte, Except.ok.injEq, Prod.mk.injEq] at h
        exact h.2 ▸ rfl
      · simp only [hcont, ↓reduceIte] at h
        exact varint_decodeLoop_data data (pos + 1) _ remaining v c h
    · rw [dif_neg hp] at h; simp at h

theorem varint_decodeLoop_reloc_ok (pfx sfx : ByteArray) (k acc v pos : Nat)
    : (remaining : Nat) →
    Varint.decodeLoop sfx k acc remaining = .ok (v, ⟨sfx, pos⟩) →
    Varint.decodeLoop (pfx ++ sfx) (pfx.size + k) acc remaining =
      .ok (v, ⟨pfx ++ sfx, pfx.size + pos⟩)
  | 0, h => by simp [Varint.decodeLoop] at h
  | remaining + 1, h => by
    unfold Varint.decodeLoop at h ⊢
    by_cases hk : k < sfx.size
    · have hpk : pfx.size + k < (pfx ++ sfx).size := by rw [ByteArray.size_append]; omega
      rw [dif_pos hpk]; rw [dif_pos hk] at h
      have hbyte : (pfx ++ sfx)[pfx.size + k] = sfx[k] :=
        ba_getElem_append_add pfx sfx k hk
      rw [hbyte]
      by_cases hcont : (sfx[k] &&& 0x80 == 0) = true
      · simp only [hcont, ↓reduceIte] at h ⊢
        simp only [Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h
        simp [h.1, h.2.2]; omega
      · simp only [hcont, ↓reduceIte] at h ⊢
        rw [show pfx.size + k + 1 = pfx.size + (k + 1) from by omega]
        exact varint_decodeLoop_reloc_ok pfx sfx (k + 1) _ v pos remaining h
    · have hpk : ¬(pfx.size + k < (pfx ++ sfx).size) := by rw [ByteArray.size_append]; omega
      rw [dif_neg hpk]; rw [dif_neg hk] at h; simp at h

theorem varint_decodeLoop_reloc_err (pfx sfx : ByteArray) (k acc : Nat) (e : DecodeError)
    : (remaining : Nat) →
    Varint.decodeLoop sfx k acc remaining = .error e →
    Varint.decodeLoop (pfx ++ sfx) (pfx.size + k) acc remaining = .error e
  | 0, h => by simp [Varint.decodeLoop] at h ⊢; exact h
  | remaining + 1, h => by
    unfold Varint.decodeLoop at h ⊢
    by_cases hk : k < sfx.size
    · have hpk : pfx.size + k < (pfx ++ sfx).size := by rw [ByteArray.size_append]; omega
      rw [dif_pos hpk]; rw [dif_pos hk] at h
      have hbyte : (pfx ++ sfx)[pfx.size + k] = sfx[k] :=
        ba_getElem_append_add pfx sfx k hk
      rw [hbyte]
      by_cases hcont : (sfx[k] &&& 0x80 == 0) = true
      · simp only [hcont, ↓reduceIte] at h; exact absurd h (by simp)
      · simp only [hcont, ↓reduceIte] at h ⊢
        rw [show pfx.size + k + 1 = pfx.size + (k + 1) from by omega]
        exact varint_decodeLoop_reloc_err pfx sfx (k + 1) _ e remaining h
    · have hpk : ¬(pfx.size + k < (pfx ++ sfx).size) := by rw [ByteArray.size_append]; omega
      rw [dif_neg hpk]; rw [dif_neg hk] at h; exact h

-- ============================================================================
-- ## Varint.decode relocation
-- ============================================================================

theorem varint_decode_reloc_ok (pfx sfx : ByteArray) (k v pos : Nat)
    (h : Varint.decode ⟨sfx, k⟩ = .ok (v, ⟨sfx, pos⟩)) :
    Varint.decode ⟨pfx ++ sfx, pfx.size + k⟩ =
      .ok (v, ⟨pfx ++ sfx, pfx.size + pos⟩) := by
  simp only [Varint.decode] at h ⊢
  exact varint_decodeLoop_reloc_ok pfx sfx k 0 v pos 5 h

theorem varint_decode_reloc_err (pfx sfx : ByteArray) (k : Nat) (e : DecodeError)
    (h : Varint.decode ⟨sfx, k⟩ = .error e) :
    Varint.decode ⟨pfx ++ sfx, pfx.size + k⟩ = .error e := by
  simp only [Varint.decode] at h ⊢
  exact varint_decodeLoop_reloc_err pfx sfx k 0 e 5 h

-- ============================================================================
-- ## AddressCache.decode relocation
-- ============================================================================

-- General relocation for AddressCache.decode (all modes)
theorem addr_decode_reloc_ok (pfx sfx : ByteArray) (k : Nat)
    (mode here : Nat) (cache : AddressCache.State)
    (addr : Nat) (pos : Nat) (cache' : AddressCache.State)
    (h : AddressCache.decode mode here ⟨sfx, k⟩ cache =
      .ok (addr, ⟨sfx, pos⟩, cache')) :
    AddressCache.decode mode here ⟨pfx ++ sfx, pfx.size + k⟩ cache =
      .ok (addr, ⟨pfx ++ sfx, pfx.size + pos⟩, cache') := by
  unfold AddressCache.decode at h ⊢
  simp only [bind, Except.bind] at h ⊢
  by_cases hm0 : (mode == 0) = true
  · -- Mode 0: VCD_SELF
    simp only [hm0, ↓reduceIte] at h ⊢
    match hv : Varint.decode ⟨sfx, k⟩ with
    | .ok (v, c) =>
      rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq] at h
      have hcd : c.data = sfx := by
        simp only [Varint.decode] at hv
        exact varint_decodeLoop_data sfx k 0 5 v c hv
      obtain ⟨cd, cp⟩ := c; simp only [Varint.Cursor.data] at hcd; rw [hcd] at hv
      rw [varint_decode_reloc_ok pfx sfx k v cp hv]
      simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
        Varint.Cursor.mk.injEq] at h ⊢
      exact ⟨h.1, ⟨trivial, by omega⟩, h.2.2⟩
    | .error e => rw [hv] at h; simp at h
  · simp only [hm0, Bool.false_eq_true, ↓reduceIte] at h ⊢
    by_cases hm1 : (mode == 1) = true
    · -- Mode 1: VCD_HERE
      simp only [hm1, ↓reduceIte] at h ⊢
      match hv : Varint.decode ⟨sfx, k⟩ with
      | .ok (v, c) =>
        rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq] at h
        have hcd : c.data = sfx := by
          simp only [Varint.decode] at hv
          exact varint_decodeLoop_data sfx k 0 5 v c hv
        obtain ⟨cd, cp⟩ := c; simp only [Varint.Cursor.data] at hcd; rw [hcd] at hv
        rw [varint_decode_reloc_ok pfx sfx k v cp hv]
        simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
          Varint.Cursor.mk.injEq] at h ⊢
        exact ⟨h.1, ⟨trivial, by omega⟩, h.2.2⟩
      | .error e => rw [hv] at h; simp at h
    · simp only [hm1, Bool.false_eq_true, ↓reduceIte] at h ⊢
      by_cases hmn : mode < 2 + cache.sNear
      · -- NEAR cache
        simp only [if_pos hmn] at h ⊢
        match hv : Varint.decode ⟨sfx, k⟩ with
        | .ok (v, c) =>
          rw [hv] at h; simp only [pure, Except.pure, Except.ok.injEq] at h
          have hcd : c.data = sfx := by
            simp only [Varint.decode] at hv
            exact varint_decodeLoop_data sfx k 0 5 v c hv
          obtain ⟨cd, cp⟩ := c; simp only [Varint.Cursor.data] at hcd; rw [hcd] at hv
          rw [varint_decode_reloc_ok pfx sfx k v cp hv]
          simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
            Varint.Cursor.mk.injEq] at h ⊢
          exact ⟨h.1, ⟨trivial, by omega⟩, h.2.2⟩
        | .error e => rw [hv] at h; simp at h
      · simp only [if_neg hmn] at h ⊢
        by_cases hms : mode < 2 + cache.sNear + cache.sSame
        · -- SAME cache: uses readByte instead of varint
          simp only [if_pos hms] at h ⊢
          by_cases hk : k < sfx.size
          · -- readByte succeeds
            have hrb : Varint.Cursor.readByte ⟨sfx, k⟩ = .ok (sfx[k]!, ⟨sfx, k + 1⟩) := by
              unfold Varint.Cursor.readByte; simp [hk]
            rw [hrb] at h; simp only [Except.bind] at h
            rw [readByte_reloc pfx sfx k hk]; simp only [Except.bind]
            simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
              Varint.Cursor.mk.injEq] at h ⊢
            exact ⟨h.1, ⟨trivial, by omega⟩, h.2.2⟩
          · -- readByte fails → contradiction with h
            have hrb : Varint.Cursor.readByte ⟨sfx, k⟩ = .error .truncatedInput := by
              unfold Varint.Cursor.readByte; simp [hk]
            rw [hrb] at h; simp at h
        · -- Invalid mode
          simp only [if_neg hms] at h; simp at h

-- ============================================================================
-- ## Decoder.execHalfInst relocation
-- ============================================================================

-- execHalfInst with relocated data/addr cursors gives same target and
-- shifted output cursor positions.
theorem execHalfInst_reloc_ok
    (inst : HalfInst) (instSize : Nat) (sourceWindow target : ByteArray)
    (pfx_d sfx_d : ByteArray) (kd : Nat)
    (pfx_a sfx_a : ByteArray) (ka : Nat)
    (cache : AddressCache.State) (here : Nat)
    (target' : ByteArray) (od oa : Nat) (cache' : AddressCache.State)
    (h : Decoder.execHalfInst inst instSize sourceWindow target
      ⟨sfx_d, kd⟩ ⟨sfx_a, ka⟩ cache here =
      .ok (target', ⟨sfx_d, od⟩, ⟨sfx_a, oa⟩, cache')) :
    Decoder.execHalfInst inst instSize sourceWindow target
      ⟨pfx_d ++ sfx_d, pfx_d.size + kd⟩ ⟨pfx_a ++ sfx_a, pfx_a.size + ka⟩ cache here =
      .ok (target', ⟨pfx_d ++ sfx_d, pfx_d.size + od⟩,
           ⟨pfx_a ++ sfx_a, pfx_a.size + oa⟩, cache') := by
  unfold Decoder.execHalfInst at h ⊢
  rcases inst with ⟨instType, _⟩
  cases instType with
  | noop =>
    simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
      Varint.Cursor.mk.injEq] at h ⊢
    obtain ⟨rfl, ⟨_, rfl⟩, ⟨_, rfl⟩, rfl⟩ := h
    exact ⟨rfl, ⟨trivial, rfl⟩, ⟨trivial, rfl⟩, rfl⟩
  | add =>
    simp only [bind, Except.bind] at h ⊢
    rw [hasBytes_reloc]
    -- hasBytes must be true for h to succeed
    have hb : Varint.Cursor.hasBytes ⟨sfx_d, kd⟩ instSize = true := by
      by_contra hb; have := Bool.eq_false_of_not_eq_true hb; simp [this] at h
    simp only [hb, Bool.not_true, Bool.false_eq_true, ↓reduceIte] at h ⊢
    -- readBytes succeeds in h; extract its result
    have hle : kd + instSize ≤ sfx_d.size := by
      simp [Varint.Cursor.hasBytes] at hb; exact hb
    have hrb : Varint.Cursor.readBytes ⟨sfx_d, kd⟩ instSize =
        .ok (sfx_d.extract kd (kd + instSize), ⟨sfx_d, kd + instSize⟩) := by
      unfold Varint.Cursor.readBytes; simp [show kd + instSize ≤ sfx_d.size from hle]
    rw [hrb] at h
    rw [readBytes_reloc pfx_d sfx_d kd instSize hle]
    simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
      Varint.Cursor.mk.injEq] at h ⊢
    exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2⟩
  | run =>
    simp only [bind, Except.bind] at h ⊢
    by_cases hk : kd < sfx_d.size
    · have hrb : Varint.Cursor.readByte ⟨sfx_d, kd⟩ =
          .ok (sfx_d[kd]!, ⟨sfx_d, kd + 1⟩) := by
        unfold Varint.Cursor.readByte; simp [hk]
      rw [hrb] at h
      rw [readByte_reloc pfx_d sfx_d kd hk]
      simp only [pure, Except.pure, Except.ok.injEq, Prod.mk.injEq,
        Varint.Cursor.mk.injEq] at h ⊢
      exact ⟨h.1, ⟨trivial, by omega⟩, ⟨trivial, by omega⟩, h.2.2.2⟩
    · have hrb : Varint.Cursor.readByte ⟨sfx_d, kd⟩ = .error .truncatedInput := by
        unfold Varint.Cursor.readByte; simp [hk]
      rw [hrb] at h; simp at h
  | copy mode =>
    simp only [bind, Except.bind] at h ⊢
    match hd : AddressCache.decode mode.toNat here ⟨sfx_a, ka⟩ cache with
    | .ok (addr_val, ⟨acd, acp⟩, cache_new) =>
      rw [hd] at h; simp only [Except.bind] at h
      by_cases hbounds : addr_val ≥ sourceWindow.size + target.size
      · simp only [ge_iff_le, if_pos hbounds] at h; simp at h
      · simp only [ge_iff_le, if_neg hbounds, pure, Except.pure,
          Except.ok.injEq, Prod.mk.injEq, Varint.Cursor.mk.injEq] at h
        obtain ⟨rfl, ⟨_, rfl⟩, ⟨hacd, hacp⟩, hcache⟩ := h
        -- Rewrite cursor fields and cache in hd
        rw [hacd, hacp, hcache] at hd
        rw [addr_decode_reloc_ok pfx_a sfx_a ka mode.toNat here cache addr_val oa cache' hd]
        simp only [Except.bind, ge_iff_le, if_neg hbounds, pure, Except.pure]
    | .error e => rw [hd] at h; simp at h

-- The higher-level relocation lemmas (decodeOneStep, decodeLoop) are in
-- WindowRoundtrip.lean since they depend on definitions from that file.

end LeanBdiff.Vcdiff.CursorReloc
