/-
  VCDIFF address cache for COPY instruction address encoding/decoding.

  Two cache types:
  - NEAR cache: circular buffer of `s_near` (default 4) recent addresses.
    Modes 2..2+s_near-1 encode as `near[i] + offset` (offset is a varint).
  - SAME cache: `s_same` (default 3) banks × 256 entries.
    Modes 2+s_near..2+s_near+s_same-1 encode as a single byte lookup.

  Modes 0 (VCD_SELF) and 1 (VCD_HERE) are absolute/relative varints.
-/
import LeanBdiff.Vcdiff.Defs
import LeanBdiff.Vcdiff.Varint

namespace LeanBdiff.Vcdiff.AddressCache

open LeanBdiff.Vcdiff

/-- Default cache parameters per RFC 3284. -/
def defaultNearSize : Nat := 4
def defaultSameSize : Nat := 3

/-- Mutable address cache state. -/
structure State where
  sNear    : Nat := defaultNearSize
  sSame    : Nat := defaultSameSize
  near     : Array Nat    -- circular buffer of size sNear
  nearIdx  : Nat := 0     -- next write position in near
  same     : Array Nat    -- flat array of size sSame * 256
  deriving Repr

/-- Create a fresh cache with all entries zeroed. -/
def State.init (sNear := defaultNearSize) (sSame := defaultSameSize) : State :=
  { sNear, sSame,
    near := Array.replicate sNear 0,
    nearIdx := 0,
    same := Array.replicate (sSame * 256) 0 }

/-- Total number of address modes. -/
def State.numModes (s : State) : Nat := 2 + s.sNear + s.sSame

/-- Update the cache after decoding an address. -/
@[inline] def State.update (s : State) (addr : Nat) : State :=
  let s := if s.sNear > 0 then
    { s with
      near := s.near.set! s.nearIdx addr,
      nearIdx := (s.nearIdx + 1) % s.sNear }
  else s
  if s.sSame > 0 then
    { s with same := s.same.set! (addr % (s.sSame * 256)) addr }
  else s

/-- Check NEAR modes, returning best mode/encoding found so far. -/
def State.tryNearModes (s : State) (addr : Nat) (bestMode : Nat) (bestEnc : ByteArray)
    : Nat → Nat × ByteArray
  | 0 => (bestMode, bestEnc)
  | fuel + 1 =>
    let i := s.sNear - fuel - 1
    let base := s.near[i]!
    let (m, e) := if addr >= base then
      let encN := Varint.encode (addr - base)
      if encN.size < bestEnc.size then (2 + i, encN) else (bestMode, bestEnc)
    else (bestMode, bestEnc)
    s.tryNearModes addr m e fuel

/-- Check SAME modes, returning best mode/encoding found so far. -/
def State.trySameModes (s : State) (addr : Nat) (bestMode : Nat) (bestEnc : ByteArray)
    : Nat → Nat × ByteArray
  | 0 => (bestMode, bestEnc)
  | fuel + 1 =>
    let bank := s.sSame - fuel - 1
    let slot := bank * 256 + (addr % 256)
    if s.same[slot]! == addr && addr != 0 then
      (2 + s.sNear + bank, ByteArray.mk #[addr.toUInt8])
    else
      s.trySameModes addr bestMode bestEnc fuel

/-- Encode a COPY address, choosing the mode that produces the smallest output.
    Returns (mode, encodedBytes, updatedCache). -/
def State.encodeAddress (s : State) (addr : Nat) (here : Nat)
    : Nat × ByteArray × State :=
  -- Mode 0 (VCD_SELF): varint(addr)
  let enc0 := Varint.encode addr
  let (bestMode, bestEnc) :=
    -- Mode 1 (VCD_HERE): varint(here - addr), only valid if here > addr
    if here > addr then
      let enc1 := Varint.encode (here - addr)
      if enc1.size < enc0.size then (1, enc1) else (0, enc0)
    else (0, enc0)
  -- NEAR modes
  let (bestMode, bestEnc) := s.tryNearModes addr bestMode bestEnc s.sNear
  -- SAME modes (check from last to first; first hit wins)
  let (bestMode, bestEnc) := s.trySameModes addr bestMode bestEnc s.sSame
  (bestMode, bestEnc, s.update addr)

-- Decode a COPY address given the mode, address cursor, and current "here" position.
-- Returns the decoded address and updated cursor and cache state.
@[inline] def decode (mode : Nat) (here : Nat) (addrCursor : Varint.Cursor) (cache : State)
    : DecodeResult (Nat × Varint.Cursor × State) := do
  if mode == 0 then
    -- VCD_SELF: absolute address
    let (addr, cur') ← Varint.decode addrCursor
    return (addr, cur', cache.update addr)
  else if mode == 1 then
    -- VCD_HERE: relative to current position
    let (offset, cur') ← Varint.decode addrCursor
    let addr := here - offset
    return (addr, cur', cache.update addr)
  else if mode < 2 + cache.sNear then
    -- NEAR cache: offset from cached address
    let nearIdx := mode - 2
    let (offset, cur') ← Varint.decode addrCursor
    let base := cache.near[nearIdx]!
    let addr := base + offset
    return (addr, cur', cache.update addr)
  else if mode < 2 + cache.sNear + cache.sSame then
    -- SAME cache: single byte lookup
    let (b, cur') ← addrCursor.readByte
    let sameIdx := mode - 2 - cache.sNear
    let addr := cache.same[sameIdx * 256 + b.toNat]!
    return (addr, cur', cache.update addr)
  else
    .error (.invalidAddressMode mode)

end LeanBdiff.Vcdiff.AddressCache
