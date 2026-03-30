// C shim to expose Lean's inline functions as callable symbols for Rust FFI.
#include <lean/lean.h>

lean_obj_res lean_bdiff_shim_alloc_sarray(unsigned elem_size, size_t size, size_t capacity) {
    return lean_alloc_sarray(elem_size, size, capacity);
}

uint8_t* lean_bdiff_shim_sarray_cptr(b_lean_obj_arg o) {
    return lean_sarray_cptr(o);
}

size_t lean_bdiff_shim_sarray_size(b_lean_obj_arg o) {
    return lean_sarray_size(o);
}

void lean_bdiff_shim_inc_ref(lean_object* o) {
    lean_inc_ref(o);
}

void lean_bdiff_shim_dec_ref(lean_object* o) {
    lean_dec_ref(o);
}

b_lean_obj_res lean_bdiff_shim_ctor_get(b_lean_obj_arg o, unsigned i) {
    return lean_ctor_get(o, i);
}

uint32_t lean_bdiff_shim_unbox_uint32(b_lean_obj_arg o) {
    return lean_unbox_uint32(o);
}

uint8_t lean_bdiff_shim_io_result_is_error(b_lean_obj_arg r) {
    return lean_io_result_is_error(r) ? 1 : 0;
}
