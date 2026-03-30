import LeanBdiff.Vcdiff.Encoder
import LeanBdiff.Vcdiff.Decoder

namespace LeanBdiff.Ffi

-- Encode: source × target → delta (always succeeds)
@[export lean_bdiff_encode]
def encode (source : ByteArray) (target : ByteArray) : ByteArray :=
  Vcdiff.Encoder.encode source target

-- Decode: delta × source → error_code (0=ok) × result_or_message
-- We flatten the Except into a pair to avoid exposing Lean inductives to C.
-- Returns (0, target_bytes) on success, (error_code, error_message_bytes) on failure.
@[export lean_bdiff_decode]
def decode (delta : ByteArray) (source : ByteArray) : UInt32 × ByteArray :=
  match Vcdiff.Decoder.decode delta source with
  | .ok target => (0, target)
  | .error e => (1, String.toUTF8 (toString e))

end LeanBdiff.Ffi
