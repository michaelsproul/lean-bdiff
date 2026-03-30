//! Raw FFI bindings to Lean 4 runtime and lean-bdiff exported functions.

use std::sync::Once;

// Lean runtime types — lean_object is opaque
#[repr(C)]
pub struct LeanObject {
    _opaque: [u8; 0],
}

extern "C" {
    // Lean runtime initialization (real symbols in libleanrt)
    fn lean_initialize_runtime_module();
    fn lean_init_task_manager();
    fn lean_io_mark_end_initialization();
    fn lean_bdiff_shim_io_result_is_error(r: *mut LeanObject) -> u8;

    // Module initializer for our FFI export (calls all transitive deps)
    fn initialize_lean_x2dbdiff_Ffi_Export(builtin: u8) -> *mut LeanObject;

    // Our exported functions
    pub fn lean_bdiff_encode(source: *mut LeanObject, target: *mut LeanObject)
        -> *mut LeanObject;
    pub fn lean_bdiff_decode(delta: *mut LeanObject, source: *mut LeanObject)
        -> *mut LeanObject;

    // Shim wrappers for Lean inline functions
    fn lean_bdiff_shim_alloc_sarray(
        elem_size: u32, size: usize, capacity: usize,
    ) -> *mut LeanObject;
    fn lean_bdiff_shim_sarray_cptr(o: *mut LeanObject) -> *mut u8;
    fn lean_bdiff_shim_sarray_size(o: *mut LeanObject) -> usize;
    fn lean_bdiff_shim_dec_ref(o: *mut LeanObject);
    fn lean_bdiff_shim_ctor_get(o: *mut LeanObject, i: u32) -> *mut LeanObject;
    fn lean_bdiff_shim_unbox_uint32(o: *mut LeanObject) -> u32;
}

static INIT: Once = Once::new();

/// Initialize the Lean runtime. Safe to call multiple times.
pub fn ensure_init() {
    INIT.call_once(|| unsafe {
        lean_initialize_runtime_module();
        lean_init_task_manager();
        let res = initialize_lean_x2dbdiff_Ffi_Export(0);
        if lean_bdiff_shim_io_result_is_error(res) != 0 {
            panic!("failed to initialize lean-bdiff Lean modules");
        }
        lean_bdiff_shim_dec_ref(res);
        lean_io_mark_end_initialization();
    });
}

/// Create a Lean ByteArray from a Rust byte slice.
pub unsafe fn byte_array_from_slice(data: &[u8]) -> *mut LeanObject {
    let obj = lean_bdiff_shim_alloc_sarray(1, data.len(), data.len());
    let ptr = lean_bdiff_shim_sarray_cptr(obj);
    std::ptr::copy_nonoverlapping(data.as_ptr(), ptr, data.len());
    obj
}

/// Read a Lean ByteArray into a Vec<u8>. Does NOT consume the reference.
pub unsafe fn byte_array_to_vec(obj: *mut LeanObject) -> Vec<u8> {
    let len = lean_bdiff_shim_sarray_size(obj);
    let ptr = lean_bdiff_shim_sarray_cptr(obj);
    std::slice::from_raw_parts(ptr, len).to_vec()
}

/// Decrement reference count on a Lean object.
pub unsafe fn dec_ref(obj: *mut LeanObject) {
    lean_bdiff_shim_dec_ref(obj);
}

/// Get field `i` from a Lean constructor object (e.g., Prod).
pub unsafe fn ctor_get(obj: *mut LeanObject, i: u32) -> *mut LeanObject {
    lean_bdiff_shim_ctor_get(obj, i)
}

/// Unbox a Lean UInt32 scalar.
pub unsafe fn unbox_uint32(obj: *mut LeanObject) -> u32 {
    lean_bdiff_shim_unbox_uint32(obj)
}
