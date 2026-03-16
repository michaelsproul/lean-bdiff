/-
  Phase B: Address cache encode/decode roundtrip proofs.

  Main results:
  - decode_mode0: Mode 0 (VCD_SELF) roundtrip
  - decode_mode1: Mode 1 (VCD_HERE) roundtrip
  - decode_near_mode: NEAR cache mode roundtrip
  - decode_same_mode: SAME cache mode roundtrip
-/
import LeanBdiff.Vcdiff.AddressCache
import LeanBdiff.Vcdiff.Proofs.Varint

namespace LeanBdiff.Vcdiff.AddressCache

open LeanBdiff.Vcdiff

private theorem nat_beq_false {a b : Nat} (h : a ≠ b) : (a == b) = false :=
  beq_false_of_ne h

-- ============================================================================
-- ## Mode 0 (VCD_SELF): decode(0, varint(addr)) = addr
-- ============================================================================

theorem decode_mode0 (addr : Nat) (haddr : addr < 2 ^ 35) (cache : State) (here : Nat) :
    decode 0 here ⟨Varint.encode addr, 0⟩ cache =
    .ok (addr, ⟨Varint.encode addr, (Varint.encode addr).size⟩, cache.update addr) := by
  unfold decode
  simp only [beq_self_eq_true, ite_true, bind, Except.bind]
  rw [Varint.decode_encode addr haddr]
  rfl

-- ============================================================================
-- ## Mode 1 (VCD_HERE): decode(1, varint(here - addr)) = addr
-- ============================================================================

theorem decode_mode1 (addr here : Nat) (hle : addr ≤ here)
    (hdiff : here - addr < 2 ^ 35) (cache : State) :
    decode 1 here ⟨Varint.encode (here - addr), 0⟩ cache =
    .ok (addr, ⟨Varint.encode (here - addr), (Varint.encode (here - addr)).size⟩,
         cache.update addr) := by
  unfold decode
  simp only [nat_beq_false (by omega : (1 : Nat) ≠ 0),
             beq_self_eq_true, ite_true, ite_false, bind, Except.bind]
  rw [Varint.decode_encode (here - addr) hdiff]
  have hsub : here - (here - addr) = addr := by omega
  simp only [hsub]
  rfl

-- ============================================================================
-- ## NEAR modes 2..2+sNear-1: decode(2+i, varint(addr - base)) = addr
-- ============================================================================

theorem decode_near_mode (i addr base : Nat)
    (hbase_le : base ≤ addr)
    (hdiff : addr - base < 2 ^ 35)
    (cache : State)
    (hi : i < cache.sNear)
    (hnear : cache.near[i]! = base)
    (here : Nat) :
    decode (2 + i) here ⟨Varint.encode (addr - base), 0⟩ cache =
    .ok (addr, ⟨Varint.encode (addr - base), (Varint.encode (addr - base)).size⟩,
         cache.update addr) := by
  unfold decode
  simp only [nat_beq_false (by omega : 2 + i ≠ 0),
             nat_beq_false (by omega : 2 + i ≠ 1), ite_false]
  rw [if_pos (show 2 + i < 2 + cache.sNear by omega)]
  simp only [bind, Except.bind]
  rw [Varint.decode_encode (addr - base) hdiff]
  have hval : cache.near[2 + i - 2]! + (addr - base) = addr := by
    rw [show 2 + i - 2 = i from by omega, hnear]; omega
  simp only [hval]
  rfl

-- ============================================================================
-- ## SAME modes: decode(2+sNear+bank, byte) = addr via cache lookup
-- ============================================================================

private theorem readByte_singleton (b : UInt8) :
    Varint.Cursor.readByte ⟨ByteArray.mk #[b], 0⟩ =
    .ok (b, ⟨ByteArray.mk #[b], 1⟩) := by
  unfold Varint.Cursor.readByte
  split
  · rfl
  · next h => exact absurd (show 0 < 1 from by omega) (by rwa [show (ByteArray.mk #[b]).size = 1 from rfl] at h)

private theorem nat_toUInt8_toNat (n : Nat) : n.toUInt8.toNat = n % 256 := by
  simp only [Nat.toUInt8, UInt8.toNat, UInt8.ofNat, Fin.val, Nat.mod_mod_of_dvd,
             -UInt8.toNat.eq_1]
  rfl

theorem decode_same_mode (bank addr : Nat) (cache : State)
    (hbank : bank < cache.sSame)
    (hslot : cache.same[bank * 256 + addr % 256]! = addr)
    (here : Nat) :
    decode (2 + cache.sNear + bank) here
      ⟨ByteArray.mk #[addr.toUInt8], 0⟩ cache =
    .ok (addr, ⟨ByteArray.mk #[addr.toUInt8], 1⟩,
         cache.update addr) := by
  unfold decode
  simp only [nat_beq_false (by omega : 2 + cache.sNear + bank ≠ 0),
             nat_beq_false (by omega : 2 + cache.sNear + bank ≠ 1), ite_false]
  rw [if_neg (show ¬(2 + cache.sNear + bank < 2 + cache.sNear) by omega)]
  rw [if_pos (show 2 + cache.sNear + bank < 2 + cache.sNear + cache.sSame by omega)]
  simp only [bind, Except.bind]
  rw [readByte_singleton]
  have hval : cache.same[(2 + cache.sNear + bank - 2 - cache.sNear) * 256 +
      addr.toUInt8.toNat]! = addr := by
    rw [show 2 + cache.sNear + bank - 2 - cache.sNear = bank from by omega,
        nat_toUInt8_toNat, hslot]
  simp only [hval]
  rfl

-- ============================================================================
-- ## Cache state consistency
-- ============================================================================

-- All decode paths call State.update with the decoded address.
-- The per-mode roundtrip theorems above show the decoded address equals
-- the original address, so both encode and decode produce cache.update addr.
-- This is verified by each theorem's conclusion including `cache.update addr`.

end LeanBdiff.Vcdiff.AddressCache
