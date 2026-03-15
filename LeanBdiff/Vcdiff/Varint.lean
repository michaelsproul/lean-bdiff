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

def Cursor.remaining (c : Cursor) : Nat :=
  c.data.size - c.pos

def Cursor.hasBytes (c : Cursor) (n : Nat) : Bool :=
  c.pos + n ≤ c.data.size

def Cursor.readByte (c : Cursor) : DecodeResult (UInt8 × Cursor) :=
  if c.pos < c.data.size then
    .ok (c.data[c.pos]!, { c with pos := c.pos + 1 })
  else
    .error .truncatedInput

def Cursor.readBytes (c : Cursor) (n : Nat) : DecodeResult (ByteArray × Cursor) :=
  if c.pos + n ≤ c.data.size then
    .ok (c.data.extract c.pos (c.pos + n), { c with pos := c.pos + n })
  else
    .error .truncatedInput

def Cursor.skip (c : Cursor) (n : Nat) : DecodeResult Cursor :=
  if c.pos + n ≤ c.data.size then
    .ok { c with pos := c.pos + n }
  else
    .error .truncatedInput

/-- Decode a base-128 varint, returning the value and updated cursor. Max 5 bytes (32-bit). -/
def decode (c : Cursor) : DecodeResult (Nat × Cursor) := do
  let mut result : Nat := 0
  let mut cur := c
  for _ in [:5] do
    let (b, cur') ← cur.readByte
    cur := cur'
    result := (result <<< 7) ||| (b.toNat &&& 0x7F)
    if b &&& 0x80 == 0 then
      return (result, cur)
  .error .varintOverflow

/-- Encode a natural number as a base-128 varint. -/
partial def encode (n : Nat) : ByteArray := Id.run do
  if n == 0 then
    return ⟨#[0]⟩
  -- First, collect bytes in reverse order
  let mut bytes : Array UInt8 := #[]
  let mut val := n
  while val > 0 do
    bytes := bytes.push (val % 128).toUInt8
    val := val / 128
  -- Reverse and set continuation bits
  let mut result := ByteArray.empty
  for i in [:bytes.size] do
    let idx := bytes.size - 1 - i
    let b := bytes[idx]!
    if i < bytes.size - 1 then
      result := result.push (b ||| 0x80)
    else
      result := result.push b
  return result

/-- Compute the encoded size of a varint without allocating. -/
partial def encodedSize (n : Nat) : Nat := Id.run do
  if n == 0 then
    return 1
  let mut count := 0
  let mut val := n
  while val > 0 do
    count := count + 1
    val := val / 128
  return count

end LeanBdiff.Vcdiff.Varint
