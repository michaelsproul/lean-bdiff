//! VCDIFF binary diff (RFC 3284), powered by formally verified Lean 4.
//!
//! API-compatible with [xdelta3-rs](https://github.com/sigp/xdelta3-rs).

mod sys;

use std::fmt;

/// Error type for encode/decode operations.
#[derive(Debug, Clone)]
pub enum Error {
    /// The Lean decoder returned an error with this message.
    Decode(String),
}

impl fmt::Display for Error {
    fn fmt(&self, f: &mut fmt::Formatter<'_>) -> fmt::Result {
        match self {
            Error::Decode(msg) => write!(f, "{}", msg),
        }
    }
}

impl std::error::Error for Error {}

/// Encode a binary diff between `src` (source/original) and `input` (target/new).
///
/// Returns the VCDIFF delta that, when applied to `src`, produces `input`.
///
/// Parameter order matches xdelta3-rs: `input` is the new data, `src` is the original.
pub fn encode(input: &[u8], src: &[u8]) -> Result<Vec<u8>, Error> {
    sys::ensure_init();
    unsafe {
        let lean_src = sys::byte_array_from_slice(src);
        let lean_input = sys::byte_array_from_slice(input);
        let result = sys::lean_bdiff_encode(lean_src, lean_input);
        let out = sys::byte_array_to_vec(result);
        sys::dec_ref(result);
        Ok(out)
    }
}

/// Decode a VCDIFF delta, applying it to `src` to produce the original target.
///
/// `input` is the VCDIFF delta, `src` is the source/original data.
///
/// Parameter order matches xdelta3-rs: `input` is the delta, `src` is the original.
pub fn decode(input: &[u8], src: &[u8]) -> Result<Vec<u8>, Error> {
    sys::ensure_init();
    unsafe {
        let lean_delta = sys::byte_array_from_slice(input);
        let lean_src = sys::byte_array_from_slice(src);
        let result = sys::lean_bdiff_decode(lean_delta, lean_src);

        // Result is a Lean Prod (ctor 0): field 0 = boxed UInt32, field 1 = ByteArray
        let error_code_obj = sys::ctor_get(result, 0);
        let error_code = sys::unbox_uint32(error_code_obj);
        let data_obj = sys::ctor_get(result, 1);

        if error_code == 0 {
            let out = sys::byte_array_to_vec(data_obj);
            sys::dec_ref(result);
            Ok(out)
        } else {
            let msg_bytes = sys::byte_array_to_vec(data_obj);
            sys::dec_ref(result);
            let msg = String::from_utf8_lossy(&msg_bytes).into_owned();
            Err(Error::Decode(msg))
        }
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn roundtrip_simple() {
        let src = b"hello world";
        let target = b"hello rust world";
        let delta = encode(target, src).unwrap();
        let recovered = decode(&delta, src).unwrap();
        assert_eq!(recovered, target);
    }

    #[test]
    fn roundtrip_empty_source() {
        let target = b"brand new data";
        let delta = encode(target, b"").unwrap();
        let recovered = decode(&delta, b"").unwrap();
        assert_eq!(recovered, target);
    }

    #[test]
    fn roundtrip_identical() {
        let data = b"same same same";
        let delta = encode(data, data).unwrap();
        let recovered = decode(&delta, data).unwrap();
        assert_eq!(recovered, data);
    }

    #[test]
    fn decode_garbage_fails() {
        let result = decode(b"not a vcdiff delta", b"");
        assert!(result.is_err());
    }

    #[test]
    fn roundtrip_large() {
        let src: Vec<u8> = (0..10_000).map(|i| (i % 256) as u8).collect();
        let mut target = src.clone();
        for i in (0..target.len()).step_by(100) {
            target[i] = target[i].wrapping_add(1);
        }
        let delta = encode(&target, &src).unwrap();
        let recovered = decode(&delta, &src).unwrap();
        assert_eq!(recovered, target);
    }
}
