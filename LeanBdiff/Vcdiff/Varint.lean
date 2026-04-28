/-
  Base-128 variable-length integer encoding/decoding for VCDIFF.

  Each byte contributes 7 data bits. The MSB is 1 if more bytes follow, 0 for the last byte.
  Big-endian order (most significant group first). Max 5 bytes for 32-bit values.
-/
import LeanBdiff.Vcdiff.Defs

namespace LeanBdiff.Vcdiff.Varint

/-- Read cursor: tracks position within a ByteArray. -/
structure Cursor where
  data : ByteArray
  pos  : Nat
  deriving Repr

@[inline] def Cursor.remaining (c : Cursor) : Nat :=
  c.data.size - c.pos

@[inline] def Cursor.hasBytes (c : Cursor) (n : Nat) : Bool :=
  c.pos + n ≤ c.data.size

@[inline] def Cursor.readByte (c : Cursor) : DecodeResult (UInt8 × Cursor) :=
  if c.pos < c.data.size then
    .ok (c.data[c.pos]!, { c with pos := c.pos + 1 })
  else
    .error .truncatedInput

@[inline] def Cursor.readBytes (c : Cursor) (n : Nat) : DecodeResult (ByteArray × Cursor) :=
  if c.pos + n ≤ c.data.size then
    .ok (c.data.extract c.pos (c.pos + n), { c with pos := c.pos + n })
  else
    .error .truncatedInput

@[inline] def Cursor.skip (c : Cursor) (n : Nat) : DecodeResult Cursor :=
  if c.pos + n ≤ c.data.size then
    .ok { c with pos := c.pos + n }
  else
    .error .truncatedInput

-- ## Encoding

/-- Collect base-128 digits of n in big-endian order (most significant first).
    Each digit is in [0, 128). Returns [] for n = 0. -/
def toBase128 (n : Nat) : List UInt8 :=
  if h : n = 0 then []
  else
    have : n / 128 < n := Nat.div_lt_self (by omega) (by omega)
    toBase128 (n / 128) ++ [(n % 128).toUInt8]
termination_by n

/-- Set MSB continuation bit on all bytes except the last. -/
def setContinuationBits : List UInt8 → List UInt8
  | [] => []
  | [b] => [b]
  | b :: rest => (b ||| 0x80) :: setContinuationBits rest

/-- Encode a natural number as a base-128 varint. -/
def encode (n : Nat) : ByteArray :=
  if n == 0 then ⟨#[0]⟩
  else ⟨(setContinuationBits (toBase128 n)).toArray⟩

-- ## Decoding

/-- Recursive varint decode loop that returns just `(value, newPos)`
    — no `Cursor` allocation. Preferred in hot paths that already thread
    positions as bare `Nat`. -/
def decodeLoopPos (data : ByteArray) (pos : Nat) (acc : Nat) (remaining : Nat)
    : DecodeResult (Nat × Nat) :=
  match remaining with
  | 0 => .error .varintOverflow
  | r + 1 =>
    if h : pos < data.size then
      let b := data[pos]
      let acc' := (acc <<< 7) ||| (b.toNat &&& 0x7F)
      if b &&& 0x80 == 0 then
        .ok (acc', pos + 1)
      else
        decodeLoopPos data (pos + 1) acc' r
    else
      .error .truncatedInput

/-- Recursive varint decode loop. Reads up to `remaining` bytes from `data`
    starting at `pos`, accumulating the result in `acc`. -/
def decodeLoop (data : ByteArray) (pos : Nat) (acc : Nat) (remaining : Nat)
    : DecodeResult (Nat × Cursor) :=
  match remaining with
  | 0 => .error .varintOverflow
  | r + 1 =>
    if h : pos < data.size then
      let b := data[pos]
      let acc' := (acc <<< 7) ||| (b.toNat &&& 0x7F)
      if b &&& 0x80 == 0 then
        .ok (acc', ⟨data, pos + 1⟩)
      else
        decodeLoop data (pos + 1) acc' r
    else
      .error .truncatedInput

/-- Decode a base-128 varint, returning the value and updated cursor. Max 5 bytes (32-bit). -/
@[inline] def decode (c : Cursor) : DecodeResult (Nat × Cursor) :=
  decodeLoop c.data c.pos 0 5

-- ## Size computation

/-- Count the number of base-128 digits needed for n. Returns 0 for n = 0. -/
def numDigits (n : Nat) : Nat :=
  if h : n = 0 then 0
  else
    have : n / 128 < n := Nat.div_lt_self (by omega) (by omega)
    numDigits (n / 128) + 1
termination_by n

/-- Compute the encoded size of a varint without allocating. -/
def encodedSize (n : Nat) : Nat :=
  if n == 0 then 1 else numDigits n

end LeanBdiff.Vcdiff.Varint
