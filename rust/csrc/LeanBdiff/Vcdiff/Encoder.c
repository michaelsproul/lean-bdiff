// Lean compiler output
// Module: LeanBdiff.Vcdiff.Encoder
// Imports: public import Init public import LeanBdiff.Vcdiff.Defs public import LeanBdiff.Vcdiff.Varint public import LeanBdiff.Vcdiff.CodeTable public import LeanBdiff.Vcdiff.AddressCache
#include <lean/lean.h>
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
uint32_t lean_uint32_mod(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
extern uint8_t l_instInhabitedUInt8;
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__2;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0;
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___closed__0;
uint32_t lean_uint32_shift_right(uint32_t, uint32_t);
uint8_t lean_uint32_to_uint8(uint32_t);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE(uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___boxed(lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashMultiplier;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashWindow;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(lean_object*, size_t, uint32_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
uint32_t lean_uint32_mul(uint32_t, uint32_t);
uint8_t lean_byte_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___redArg(lean_object*, uint32_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashPower(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashPower___boxed(lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_sourceIdxSentinel;
extern uint32_t l_instInhabitedUInt32;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
uint32_t lean_uint32_land(uint32_t, uint32_t);
lean_object* lean_uint32_to_nat(uint32_t);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed__const__1;
lean_object* lean_nat_shiftl(lean_object*, lean_object*);
lean_object* lean_mk_array(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0(lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_SourceIndex_lookup(lean_object*, uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_SourceIndex_lookup___boxed(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "sourcePos"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__3_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__6_value;
lean_object* lean_nat_to_int(lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__7;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__8_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__9_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "targetPos"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__10 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__10_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__10_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__11 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__11_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "length"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__12 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__12_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__12_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__13 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__13_value;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__14;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__15 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__15_value;
lean_object* lean_string_length(lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__16;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__17_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__17;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__18 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__18_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__15_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__19 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__19_value;
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch___closed__0_value;
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
LEAN_EXPORT size_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
size_t lean_usize_sub(size_t, size_t);
LEAN_EXPORT size_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux(lean_object*, lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_add_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_add_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_copy_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_copy_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_run_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_run_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanBdiff.Vcdiff.Encoder.RawInst.add"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__0_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__0_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__1_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__1_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__2_value;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "LeanBdiff.Vcdiff.Encoder.RawInst.copy"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__5_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__5_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__6_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__6_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__7 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__7_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 37, .m_capacity = 37, .m_length = 36, .m_data = "LeanBdiff.Vcdiff.Encoder.RawInst.run"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__8 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__8_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__8_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__9 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__9_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__9_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__10 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__10_value;
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_addSize(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_addSize___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_trimMatch(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Encoder_0__LeanBdiff_Vcdiff_Encoder_lazyBestMatch_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Encoder_0__LeanBdiff_Vcdiff_Encoder_lazyBestMatch_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1;
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode___boxed(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0;
extern lean_object* l_ByteArray_empty;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__1;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__3;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__5;
uint8_t lean_uint8_lor(uint8_t, uint8_t);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__6;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__0;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__1;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__2;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3;
extern lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_magic;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__4;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__5;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__7;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_7 = lean_nat_dec_lt(x_4, x_5);
if (x_7 == 0)
{
lean_dec(x_4);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; uint32_t x_11; uint8_t x_12; lean_object* x_26; uint8_t x_27; 
x_8 = lean_ctor_get(x_3, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_3, 1);
lean_inc(x_9);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_10 = x_3;
} else {
 lean_dec_ref(x_3);
 x_10 = lean_box(0);
}
x_11 = 65521;
x_26 = lean_byte_array_size(x_1);
x_27 = lean_nat_dec_lt(x_4, x_26);
if (x_27 == 0)
{
uint8_t x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
x_28 = l_instInhabitedUInt8;
x_29 = lean_box(x_28);
x_30 = l_outOfBounds___redArg(x_29);
x_31 = lean_unbox(x_30);
lean_dec(x_30);
x_12 = x_31;
goto block_25;
}
else
{
uint8_t x_32; 
x_32 = lean_byte_array_fget(x_1, x_4);
x_12 = x_32;
goto block_25;
}
block_25:
{
uint32_t x_13; uint32_t x_14; uint32_t x_15; uint32_t x_16; uint32_t x_17; uint32_t x_18; uint32_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_13 = lean_uint8_to_uint32(x_12);
x_14 = lean_unbox_uint32(x_8);
lean_dec(x_8);
x_15 = lean_uint32_add(x_14, x_13);
x_16 = lean_uint32_mod(x_15, x_11);
x_17 = lean_unbox_uint32(x_9);
lean_dec(x_9);
x_18 = lean_uint32_add(x_17, x_16);
x_19 = lean_uint32_mod(x_18, x_11);
x_20 = lean_box_uint32(x_16);
x_21 = lean_box_uint32(x_19);
if (lean_is_scalar(x_10)) {
 x_22 = lean_alloc_ctor(0, 2, 0);
} else {
 x_22 = x_10;
}
lean_ctor_set(x_22, 0, x_20);
lean_ctor_set(x_22, 1, x_21);
x_23 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_22;
x_4 = x_23;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___redArg(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__2(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__1;
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint32_t x_10; uint32_t x_11; uint32_t x_12; uint32_t x_13; uint32_t x_14; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_byte_array_size(x_1);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
lean_ctor_set(x_5, 2, x_2);
x_6 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0);
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___redArg(x_1, x_5, x_6, x_3);
lean_dec_ref(x_5);
x_8 = lean_ctor_get(x_7, 0);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 1);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = 16;
x_11 = lean_unbox_uint32(x_9);
lean_dec(x_9);
x_12 = lean_uint32_shift_left(x_11, x_10);
x_13 = lean_unbox_uint32(x_8);
lean_dec(x_8);
x_14 = lean_uint32_lor(x_12, x_13);
return x_14;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32(x_1);
lean_dec_ref(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___redArg(x_1, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_adler32_spec__0(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_7;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(4u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE(uint32_t x_1) {
_start:
{
uint32_t x_2; uint32_t x_3; uint8_t x_4; uint32_t x_5; uint32_t x_6; uint8_t x_7; uint32_t x_8; uint32_t x_9; uint8_t x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_2 = 24;
x_3 = lean_uint32_shift_right(x_1, x_2);
x_4 = lean_uint32_to_uint8(x_3);
x_5 = 16;
x_6 = lean_uint32_shift_right(x_1, x_5);
x_7 = lean_uint32_to_uint8(x_6);
x_8 = 8;
x_9 = lean_uint32_shift_right(x_1, x_8);
x_10 = lean_uint32_to_uint8(x_9);
x_11 = lean_uint32_to_uint8(x_1);
x_12 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___closed__0);
x_13 = lean_box(x_4);
x_14 = lean_array_push(x_12, x_13);
x_15 = lean_box(x_7);
x_16 = lean_array_push(x_14, x_15);
x_17 = lean_box(x_10);
x_18 = lean_array_push(x_16, x_17);
x_19 = lean_box(x_11);
x_20 = lean_array_push(x_18, x_19);
x_21 = lean_byte_array_mk(x_20);
return x_21;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lean_unbox_uint32(x_1);
lean_dec(x_1);
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE(x_2);
return x_3;
}
}
static uint32_t _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashMultiplier(void) {
_start:
{
uint32_t x_1; 
x_1 = 1597334677;
return x_1;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashWindow(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(4u);
return x_1;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(lean_object* x_1, size_t x_2, uint32_t x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_4, x_5);
if (x_6 == 1)
{
lean_dec(x_4);
return x_3;
}
else
{
lean_object* x_7; lean_object* x_8; uint32_t x_9; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_sub(x_4, x_7);
lean_dec(x_4);
x_14 = lean_usize_to_nat(x_2);
x_15 = lean_byte_array_size(x_1);
x_16 = lean_nat_dec_lt(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
uint32_t x_17; uint32_t x_18; 
x_17 = 1597334677;
x_18 = lean_uint32_mul(x_3, x_17);
x_9 = x_18;
goto block_13;
}
else
{
uint32_t x_19; uint32_t x_20; uint8_t x_21; uint32_t x_22; uint32_t x_23; 
x_19 = 1597334677;
x_20 = lean_uint32_mul(x_3, x_19);
x_21 = lean_byte_array_uget(x_1, x_2);
x_22 = lean_uint8_to_uint32(x_21);
x_23 = lean_uint32_add(x_20, x_22);
x_9 = x_23;
goto block_13;
}
block_13:
{
size_t x_10; size_t x_11; 
x_10 = 1;
x_11 = lean_usize_add(x_2, x_10);
x_2 = x_11;
x_3 = x_9;
x_4 = x_8;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; uint32_t x_6; uint32_t x_7; lean_object* x_8; 
x_5 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_6 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_1, x_5, x_6, x_4);
lean_dec_ref(x_1);
x_8 = lean_box_uint32(x_7);
return x_8;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
size_t x_4; uint32_t x_5; uint32_t x_6; 
x_4 = lean_usize_of_nat(x_2);
x_5 = 0;
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_1, x_4, x_5, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; lean_object* x_5; 
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_1, x_2, x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
x_5 = lean_box_uint32(x_4);
return x_5;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___redArg(lean_object* x_1, uint32_t x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_nat_dec_lt(x_3, x_4);
if (x_6 == 0)
{
lean_dec(x_3);
return x_2;
}
else
{
uint32_t x_7; uint32_t x_8; lean_object* x_9; 
x_7 = 1597334677;
x_8 = lean_uint32_mul(x_2, x_7);
x_9 = lean_nat_add(x_3, x_5);
lean_dec(x_3);
x_2 = x_8;
x_3 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint32_t x_4; uint32_t x_5; lean_object* x_6; 
x_4 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_5 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___redArg(x_1, x_4, x_3);
lean_dec_ref(x_1);
x_6 = lean_box_uint32(x_5);
return x_6;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashPower(lean_object* x_1) {
_start:
{
lean_object* x_2; uint32_t x_3; lean_object* x_4; lean_object* x_5; uint32_t x_6; 
x_2 = lean_unsigned_to_nat(1u);
x_3 = 1;
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_5, 0, x_4);
lean_ctor_set(x_5, 1, x_1);
lean_ctor_set(x_5, 2, x_2);
x_6 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___redArg(x_5, x_3, x_4);
lean_dec_ref(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashPower___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashPower(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0(lean_object* x_1, uint32_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; 
x_6 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___redArg(x_1, x_2, x_3);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; uint32_t x_7; lean_object* x_8; 
x_6 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashPower_spec__0(x_1, x_6, x_3, x_4, x_5);
lean_dec_ref(x_1);
x_8 = lean_box_uint32(x_7);
return x_8;
}
}
static uint32_t _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_sourceIdxSentinel(void) {
_start:
{
uint32_t x_1; 
x_1 = 4294967295;
return x_1;
}
}
static lean_object* _init_lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_instInhabitedUInt32;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg(lean_object* x_1, uint32_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_8 = lean_nat_dec_lt(x_5, x_6);
if (x_8 == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_4);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; size_t x_13; uint32_t x_14; uint32_t x_15; uint32_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint32_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
x_12 = lean_unsigned_to_nat(4u);
x_13 = lean_usize_of_nat(x_5);
x_14 = 0;
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_1, x_13, x_14, x_12);
x_16 = lean_uint32_land(x_15, x_2);
x_17 = lean_uint32_to_nat(x_16);
x_18 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_19 = lean_array_get_borrowed(x_18, x_11, x_17);
lean_inc(x_19);
x_20 = lean_array_set(x_10, x_5, x_19);
x_21 = lean_uint32_of_nat(x_5);
x_22 = lean_box_uint32(x_21);
x_23 = lean_array_set(x_11, x_17, x_22);
lean_dec(x_17);
lean_ctor_set(x_4, 1, x_23);
lean_ctor_set(x_4, 0, x_20);
x_24 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_5 = x_24;
goto _start;
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; size_t x_29; uint32_t x_30; uint32_t x_31; uint32_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint32_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_26 = lean_ctor_get(x_4, 0);
x_27 = lean_ctor_get(x_4, 1);
lean_inc(x_27);
lean_inc(x_26);
lean_dec(x_4);
x_28 = lean_unsigned_to_nat(4u);
x_29 = lean_usize_of_nat(x_5);
x_30 = 0;
x_31 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_1, x_29, x_30, x_28);
x_32 = lean_uint32_land(x_31, x_2);
x_33 = lean_uint32_to_nat(x_32);
x_34 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_35 = lean_array_get_borrowed(x_34, x_27, x_33);
lean_inc(x_35);
x_36 = lean_array_set(x_26, x_5, x_35);
x_37 = lean_uint32_of_nat(x_5);
x_38 = lean_box_uint32(x_37);
x_39 = lean_array_set(x_27, x_33, x_38);
lean_dec(x_33);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_36);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_40;
x_5 = x_41;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; lean_object* x_7; 
x_6 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg(x_1, x_6, x_3, x_4, x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_1);
return x_7;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 4294967295;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint32_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_shiftl(x_3, x_2);
x_5 = lean_nat_sub(x_4, x_3);
x_6 = lean_uint32_of_nat(x_5);
lean_dec(x_5);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed__const__1;
x_8 = lean_mk_array(x_4, x_7);
x_9 = lean_byte_array_size(x_1);
x_10 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed__const__1;
x_11 = lean_mk_array(x_9, x_10);
x_12 = lean_unsigned_to_nat(4u);
x_13 = lean_nat_dec_le(x_12, x_9);
if (x_13 == 0)
{
lean_object* x_14; 
x_14 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_11);
lean_ctor_set(x_14, 2, x_1);
lean_ctor_set_uint32(x_14, sizeof(void*)*3, x_6);
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_15 = lean_unsigned_to_nat(0u);
x_16 = lean_nat_sub(x_9, x_12);
x_17 = lean_nat_add(x_16, x_3);
lean_dec(x_16);
x_18 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_17);
lean_ctor_set(x_18, 2, x_3);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_11);
lean_ctor_set(x_19, 1, x_8);
x_20 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg(x_1, x_6, x_18, x_19, x_15);
lean_dec_ref(x_18);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
x_22 = lean_ctor_get(x_20, 1);
lean_inc(x_22);
lean_dec_ref(x_20);
x_23 = lean_alloc_ctor(0, 3, 4);
lean_ctor_set(x_23, 0, x_22);
lean_ctor_set(x_23, 1, x_21);
lean_ctor_set(x_23, 2, x_1);
lean_ctor_set_uint32(x_23, sizeof(void*)*3, x_6);
return x_23;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0(lean_object* x_1, uint32_t x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg(x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint32_t x_8; lean_object* x_9; 
x_8 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_9 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0(x_1, x_8, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_3);
lean_dec_ref(x_1);
return x_9;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_SourceIndex_lookup(lean_object* x_1, uint32_t x_2) {
_start:
{
lean_object* x_3; uint32_t x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; uint32_t x_9; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_5 = lean_uint32_land(x_2, x_4);
x_6 = lean_uint32_to_nat(x_5);
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_8 = lean_array_get_borrowed(x_7, x_3, x_6);
lean_dec(x_6);
x_9 = lean_unbox_uint32(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_SourceIndex_lookup___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint32_t x_3; uint32_t x_4; lean_object* x_5; 
x_3 = lean_unbox_uint32(x_2);
lean_dec(x_2);
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_SourceIndex_lookup(x_1, x_3);
lean_dec_ref(x_1);
x_5 = lean_box_uint32(x_4);
return x_5;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(13u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__14(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(10u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__16(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__0));
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__17(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__16, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__16_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__16);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__5));
x_6 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__6));
x_7 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__7, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__7_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__7);
x_8 = l_Nat_reprFast(x_2);
x_9 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_9, 0, x_8);
x_10 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = 0;
x_12 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set_uint8(x_12, sizeof(void*)*1, x_11);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_6);
lean_ctor_set(x_13, 1, x_12);
x_14 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__9));
x_15 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_15, 0, x_13);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_box(1);
x_17 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__11));
x_19 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_20, 0, x_19);
lean_ctor_set(x_20, 1, x_5);
x_21 = l_Nat_reprFast(x_3);
x_22 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_23, 0, x_7);
lean_ctor_set(x_23, 1, x_22);
x_24 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_24, 0, x_23);
lean_ctor_set_uint8(x_24, sizeof(void*)*1, x_11);
x_25 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_25, 0, x_20);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set(x_26, 1, x_14);
x_27 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_16);
x_28 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__13));
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_27);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_30, 0, x_29);
lean_ctor_set(x_30, 1, x_5);
x_31 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__14, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__14_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__14);
x_32 = l_Nat_reprFast(x_4);
x_33 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_33, 0, x_32);
x_34 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_34, 0, x_31);
lean_ctor_set(x_34, 1, x_33);
x_35 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_35, 0, x_34);
lean_ctor_set_uint8(x_35, sizeof(void*)*1, x_11);
x_36 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_36, 0, x_30);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__17, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__17_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__17);
x_38 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__18));
x_39 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_36);
x_40 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg___closed__19));
x_41 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_42, 0, x_37);
lean_ctor_set(x_42, 1, x_41);
x_43 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_43, 0, x_42);
lean_ctor_set_uint8(x_43, sizeof(void*)*1, x_11);
return x_43;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprMatch_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT size_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 1)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_8 = lean_usize_to_nat(x_3);
x_9 = lean_byte_array_size(x_1);
x_10 = lean_nat_dec_lt(x_8, x_9);
lean_dec(x_8);
if (x_10 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_usize_to_nat(x_4);
x_12 = lean_byte_array_size(x_2);
x_13 = lean_nat_dec_lt(x_11, x_12);
lean_dec(x_11);
if (x_13 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
uint8_t x_14; uint8_t x_15; uint8_t x_16; 
x_14 = lean_byte_array_uget(x_1, x_3);
x_15 = lean_byte_array_uget(x_2, x_4);
x_16 = lean_uint8_dec_eq(x_14, x_15);
if (x_16 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_17; lean_object* x_18; size_t x_19; size_t x_20; size_t x_21; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_sub(x_5, x_17);
lean_dec(x_5);
x_19 = 1;
x_20 = lean_usize_add(x_3, x_19);
x_21 = lean_usize_add(x_4, x_19);
x_3 = x_20;
x_4 = x_21;
x_5 = x_18;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux(x_1, x_2, x_6, x_7, x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_9 = lean_box_usize(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_byte_array_size(x_1);
x_13 = lean_nat_sub(x_12, x_2);
x_14 = lean_byte_array_size(x_3);
x_15 = lean_nat_sub(x_14, x_4);
x_16 = lean_nat_dec_le(x_13, x_15);
if (x_16 == 0)
{
lean_dec(x_13);
x_5 = x_15;
goto block_11;
}
else
{
lean_dec(x_15);
x_5 = x_13;
goto block_11;
}
block_11:
{
size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_usize_of_nat(x_2);
x_7 = lean_usize_of_nat(x_4);
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux(x_1, x_3, x_6, x_7, x_5);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_nat_sub(x_9, x_2);
lean_dec(x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT size_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux(lean_object* x_1, lean_object* x_2, size_t x_3, size_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 1)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_usize_to_nat(x_3);
x_9 = lean_nat_dec_lt(x_6, x_8);
lean_dec(x_8);
if (x_9 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_usize_to_nat(x_4);
x_11 = lean_nat_dec_lt(x_6, x_10);
lean_dec(x_10);
if (x_11 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
size_t x_12; size_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = 1;
x_13 = lean_usize_sub(x_3, x_12);
x_14 = lean_usize_to_nat(x_13);
x_15 = lean_byte_array_size(x_1);
x_16 = lean_nat_dec_lt(x_14, x_15);
lean_dec(x_14);
if (x_16 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
size_t x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_usize_sub(x_4, x_12);
x_18 = lean_usize_to_nat(x_17);
x_19 = lean_byte_array_size(x_2);
x_20 = lean_nat_dec_lt(x_18, x_19);
lean_dec(x_18);
if (x_20 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
uint8_t x_21; uint8_t x_22; uint8_t x_23; 
x_21 = lean_byte_array_uget(x_1, x_13);
x_22 = lean_byte_array_uget(x_2, x_17);
x_23 = lean_uint8_dec_eq(x_21, x_22);
if (x_23 == 0)
{
lean_dec(x_5);
return x_3;
}
else
{
lean_object* x_24; lean_object* x_25; 
x_24 = lean_unsigned_to_nat(1u);
x_25 = lean_nat_sub(x_5, x_24);
lean_dec(x_5);
x_3 = x_13;
x_4 = x_17;
x_5 = x_25;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; 
x_6 = lean_unbox_usize(x_3);
lean_dec(x_3);
x_7 = lean_unbox_usize(x_4);
lean_dec(x_4);
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux(x_1, x_2, x_6, x_7, x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_9 = lean_box_usize(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_12; 
x_12 = lean_nat_dec_le(x_2, x_4);
if (x_12 == 0)
{
lean_inc(x_4);
x_5 = x_4;
goto block_11;
}
else
{
lean_inc(x_2);
x_5 = x_2;
goto block_11;
}
block_11:
{
size_t x_6; size_t x_7; size_t x_8; lean_object* x_9; lean_object* x_10; 
x_6 = lean_usize_of_nat(x_2);
x_7 = lean_usize_of_nat(x_4);
lean_dec(x_4);
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux(x_1, x_3, x_6, x_7, x_5);
x_9 = lean_usize_to_nat(x_8);
x_10 = lean_nat_sub(x_2, x_9);
lean_dec(x_9);
lean_dec(x_2);
return x_10;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward(x_1, x_2, x_3, x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
size_t x_5; lean_object* x_6; size_t x_7; lean_object* x_8; lean_object* x_17; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_25 = lean_byte_array_size(x_1);
x_26 = lean_nat_sub(x_25, x_2);
x_27 = lean_byte_array_size(x_3);
x_28 = lean_nat_sub(x_27, x_4);
x_29 = lean_nat_dec_le(x_26, x_28);
if (x_29 == 0)
{
lean_dec(x_26);
x_17 = x_28;
goto block_24;
}
else
{
lean_dec(x_28);
x_17 = x_26;
goto block_24;
}
block_16:
{
size_t x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux(x_1, x_3, x_7, x_5, x_8);
x_10 = lean_usize_to_nat(x_9);
x_11 = lean_nat_sub(x_2, x_10);
lean_dec(x_10);
x_12 = lean_nat_sub(x_2, x_11);
lean_dec(x_2);
x_13 = lean_nat_sub(x_4, x_11);
lean_dec(x_4);
x_14 = lean_nat_add(x_6, x_11);
lean_dec(x_11);
lean_dec(x_6);
x_15 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_13);
lean_ctor_set(x_15, 2, x_14);
return x_15;
}
block_24:
{
size_t x_18; size_t x_19; size_t x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_18 = lean_usize_of_nat(x_2);
x_19 = lean_usize_of_nat(x_4);
x_20 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux(x_1, x_3, x_18, x_19, x_17);
x_21 = lean_usize_to_nat(x_20);
x_22 = lean_nat_sub(x_21, x_2);
lean_dec(x_21);
x_23 = lean_nat_dec_le(x_2, x_4);
if (x_23 == 0)
{
lean_inc(x_4);
x_5 = x_19;
x_6 = x_22;
x_7 = x_18;
x_8 = x_4;
goto block_16;
}
else
{
lean_inc(x_2);
x_5 = x_19;
x_6 = x_22;
x_7 = x_18;
x_8 = x_2;
goto block_16;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch(x_1, x_2, x_3, x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint32_t x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_6, x_10);
if (x_11 == 1)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_6);
lean_dec(x_4);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_9);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
uint32_t x_14; uint8_t x_15; 
x_14 = 4294967295;
x_15 = lean_uint32_dec_eq(x_5, x_14);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_29; size_t x_30; size_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_43; lean_object* x_51; lean_object* x_52; uint8_t x_53; 
x_16 = lean_unsigned_to_nat(1u);
x_17 = lean_nat_sub(x_6, x_16);
lean_dec(x_6);
x_18 = lean_uint32_to_nat(x_5);
x_29 = lean_unsigned_to_nat(4u);
x_51 = lean_nat_add(x_18, x_29);
x_52 = lean_byte_array_size(x_1);
x_53 = lean_nat_dec_le(x_51, x_52);
lean_dec(x_51);
if (x_53 == 0)
{
x_19 = x_7;
x_20 = x_8;
x_21 = x_9;
goto block_28;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_54 = lean_nat_sub(x_52, x_18);
x_55 = lean_byte_array_size(x_3);
x_56 = lean_nat_sub(x_55, x_4);
x_57 = lean_nat_dec_le(x_54, x_56);
if (x_57 == 0)
{
lean_dec(x_54);
x_43 = x_56;
goto block_50;
}
else
{
lean_dec(x_56);
x_43 = x_54;
goto block_50;
}
}
block_28:
{
lean_object* x_22; uint8_t x_23; 
x_22 = lean_array_get_size(x_2);
x_23 = lean_nat_dec_lt(x_18, x_22);
if (x_23 == 0)
{
lean_dec(x_18);
x_5 = x_14;
x_6 = x_17;
x_7 = x_19;
x_8 = x_20;
x_9 = x_21;
goto _start;
}
else
{
lean_object* x_25; uint32_t x_26; 
x_25 = lean_array_fget_borrowed(x_2, x_18);
lean_dec(x_18);
x_26 = lean_unbox_uint32(x_25);
x_5 = x_26;
x_6 = x_17;
x_7 = x_19;
x_8 = x_20;
x_9 = x_21;
goto _start;
}
}
block_42:
{
size_t x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackwardAux(x_1, x_3, x_31, x_30, x_33);
x_35 = lean_usize_to_nat(x_34);
x_36 = lean_nat_sub(x_18, x_35);
lean_dec(x_35);
x_37 = lean_nat_add(x_32, x_36);
lean_dec(x_32);
x_38 = lean_nat_dec_le(x_29, x_37);
if (x_38 == 0)
{
lean_dec(x_37);
lean_dec(x_36);
x_19 = x_7;
x_20 = x_8;
x_21 = x_9;
goto block_28;
}
else
{
uint8_t x_39; 
x_39 = lean_nat_dec_lt(x_9, x_37);
if (x_39 == 0)
{
lean_dec(x_37);
lean_dec(x_36);
x_19 = x_7;
x_20 = x_8;
x_21 = x_9;
goto block_28;
}
else
{
lean_object* x_40; lean_object* x_41; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
x_40 = lean_nat_sub(x_18, x_36);
x_41 = lean_nat_sub(x_4, x_36);
lean_dec(x_36);
x_19 = x_40;
x_20 = x_41;
x_21 = x_37;
goto block_28;
}
}
}
block_50:
{
size_t x_44; size_t x_45; size_t x_46; lean_object* x_47; lean_object* x_48; uint8_t x_49; 
x_44 = lean_usize_of_nat(x_18);
x_45 = lean_usize_of_nat(x_4);
x_46 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForwardAux(x_1, x_3, x_44, x_45, x_43);
x_47 = lean_usize_to_nat(x_46);
x_48 = lean_nat_sub(x_47, x_18);
lean_dec(x_47);
x_49 = lean_nat_dec_le(x_18, x_4);
if (x_49 == 0)
{
lean_inc(x_4);
x_30 = x_45;
x_31 = x_44;
x_32 = x_48;
x_33 = x_4;
goto block_42;
}
else
{
lean_inc(x_18);
x_30 = x_45;
x_31 = x_44;
x_32 = x_48;
x_33 = x_18;
goto block_42;
}
}
}
else
{
lean_object* x_58; lean_object* x_59; 
lean_dec(x_6);
lean_dec(x_4);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_8);
lean_ctor_set(x_58, 1, x_9);
x_59 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_59, 0, x_7);
lean_ctor_set(x_59, 1, x_58);
return x_59;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
uint32_t x_10; lean_object* x_11; 
x_10 = lean_unbox_uint32(x_5);
lean_dec(x_5);
x_11 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_1, x_2, x_3, x_4, x_10, x_6, x_7, x_8, x_9);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_11;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; uint8_t x_8; 
x_5 = lean_byte_array_size(x_2);
x_6 = lean_unsigned_to_nat(4u);
x_7 = lean_nat_add(x_3, x_6);
x_8 = lean_nat_dec_lt(x_5, x_7);
lean_dec(x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; uint32_t x_11; lean_object* x_12; size_t x_13; uint32_t x_14; uint32_t x_15; uint32_t x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint32_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lean_usize_of_nat(x_3);
x_14 = 0;
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_2, x_13, x_14, x_6);
x_16 = lean_uint32_land(x_15, x_11);
x_17 = lean_uint32_to_nat(x_16);
x_18 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_19 = lean_array_get_borrowed(x_18, x_9, x_17);
lean_dec(x_17);
x_20 = lean_unsigned_to_nat(0u);
x_21 = lean_unbox_uint32(x_19);
x_22 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_12, x_10, x_2, x_3, x_21, x_4, x_20, x_20, x_20);
x_23 = lean_ctor_get(x_22, 1);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 0);
lean_inc(x_24);
lean_dec_ref(x_22);
x_25 = lean_ctor_get(x_23, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_23, 1);
lean_inc(x_26);
lean_dec(x_23);
x_27 = lean_nat_dec_le(x_6, x_26);
if (x_27 == 0)
{
lean_object* x_28; 
lean_dec(x_26);
lean_dec(x_25);
lean_dec(x_24);
x_28 = lean_box(0);
return x_28;
}
else
{
lean_object* x_29; lean_object* x_30; 
x_29 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_25);
lean_ctor_set(x_29, 2, x_26);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_29);
return x_30;
}
}
else
{
lean_object* x_31; 
lean_dec(x_4);
lean_dec(x_3);
x_31 = lean_box(0);
return x_31;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatch(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorIdx(lean_object* x_1) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_2; 
x_2 = lean_unsigned_to_nat(0u);
return x_2;
}
case 1:
{
lean_object* x_3; 
x_3 = lean_unsigned_to_nat(1u);
return x_3;
}
default: 
{
lean_object* x_4; 
x_4 = lean_unsigned_to_nat(2u);
return x_4;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorIdx___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorIdx(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 2)
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = lean_box(x_3);
x_6 = lean_apply_2(x_2, x_5, x_4);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
x_8 = lean_ctor_get(x_1, 1);
lean_inc(x_8);
lean_dec_ref(x_1);
x_9 = lean_apply_2(x_2, x_7, x_8);
return x_9;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(x_3, x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_add_elim___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_add_elim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_copy_elim___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_copy_elim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(x_2, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_run_elim___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(x_1, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_run_elim(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_ctorElim___redArg(x_2, x_4);
return x_5;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_21; uint8_t x_22; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_5 = x_1;
} else {
 lean_dec_ref(x_1);
 x_5 = lean_box(0);
}
x_21 = lean_unsigned_to_nat(1024u);
x_22 = lean_nat_dec_le(x_21, x_2);
if (x_22 == 0)
{
lean_object* x_23; 
x_23 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3);
x_6 = x_23;
goto block_20;
}
else
{
lean_object* x_24; 
x_24 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4);
x_6 = x_24;
goto block_20;
}
block_20:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_7 = lean_box(1);
x_8 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__2));
x_9 = l_Nat_reprFast(x_3);
x_10 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_10, 0, x_9);
if (lean_is_scalar(x_5)) {
 x_11 = lean_alloc_ctor(5, 2, 0);
} else {
 x_11 = x_5;
 lean_ctor_set_tag(x_11, 5);
}
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_12, 0, x_11);
lean_ctor_set(x_12, 1, x_7);
x_13 = l_Nat_reprFast(x_4);
x_14 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_14, 0, x_13);
x_15 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_15, 0, x_12);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_16, 0, x_6);
lean_ctor_set(x_16, 1, x_15);
x_17 = 0;
x_18 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_18, 0, x_16);
lean_ctor_set_uint8(x_18, sizeof(void*)*1, x_17);
x_19 = l_Repr_addAppParen(x_18, x_2);
return x_19;
}
}
case 1:
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_43; uint8_t x_44; 
x_25 = lean_ctor_get(x_1, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_1, 1);
lean_inc(x_26);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_27 = x_1;
} else {
 lean_dec_ref(x_1);
 x_27 = lean_box(0);
}
x_43 = lean_unsigned_to_nat(1024u);
x_44 = lean_nat_dec_le(x_43, x_2);
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3);
x_28 = x_45;
goto block_42;
}
else
{
lean_object* x_46; 
x_46 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4);
x_28 = x_46;
goto block_42;
}
block_42:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; uint8_t x_39; lean_object* x_40; lean_object* x_41; 
x_29 = lean_box(1);
x_30 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__7));
x_31 = l_Nat_reprFast(x_25);
x_32 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_32, 0, x_31);
if (lean_is_scalar(x_27)) {
 x_33 = lean_alloc_ctor(5, 2, 0);
} else {
 x_33 = x_27;
 lean_ctor_set_tag(x_33, 5);
}
lean_ctor_set(x_33, 0, x_30);
lean_ctor_set(x_33, 1, x_32);
x_34 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_34, 0, x_33);
lean_ctor_set(x_34, 1, x_29);
x_35 = l_Nat_reprFast(x_26);
x_36 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_36, 0, x_35);
x_37 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_37, 0, x_34);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_38, 0, x_28);
lean_ctor_set(x_38, 1, x_37);
x_39 = 0;
x_40 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_40, 0, x_38);
lean_ctor_set_uint8(x_40, sizeof(void*)*1, x_39);
x_41 = l_Repr_addAppParen(x_40, x_2);
return x_41;
}
}
default: 
{
uint8_t x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_66; uint8_t x_67; 
x_47 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_48 = lean_ctor_get(x_1, 0);
lean_inc(x_48);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_49 = x_1;
} else {
 lean_dec_ref(x_1);
 x_49 = lean_box(0);
}
x_66 = lean_unsigned_to_nat(1024u);
x_67 = lean_nat_dec_le(x_66, x_2);
if (x_67 == 0)
{
lean_object* x_68; 
x_68 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3);
x_50 = x_68;
goto block_65;
}
else
{
lean_object* x_69; 
x_69 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4);
x_50 = x_69;
goto block_65;
}
block_65:
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; lean_object* x_63; lean_object* x_64; 
x_51 = lean_box(1);
x_52 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__10));
x_53 = lean_uint8_to_nat(x_47);
x_54 = l_Nat_reprFast(x_53);
x_55 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_55, 0, x_54);
x_56 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_56, 0, x_52);
lean_ctor_set(x_56, 1, x_55);
x_57 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_57, 0, x_56);
lean_ctor_set(x_57, 1, x_51);
x_58 = l_Nat_reprFast(x_48);
x_59 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_59, 0, x_58);
x_60 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_60, 0, x_57);
lean_ctor_set(x_60, 1, x_59);
x_61 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_61, 0, x_50);
lean_ctor_set(x_61, 1, x_60);
x_62 = 0;
if (lean_is_scalar(x_49)) {
 x_63 = lean_alloc_ctor(6, 1, 1);
} else {
 x_63 = x_49;
 lean_ctor_set_tag(x_63, 6);
}
lean_ctor_set(x_63, 0, x_61);
lean_ctor_set_uint8(x_63, sizeof(void*)*1, x_62);
x_64 = l_Repr_addAppParen(x_63, x_2);
return x_64;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_addSize(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_nat_sub(x_3, x_2);
return x_4;
}
else
{
lean_object* x_5; 
x_5 = lean_unsigned_to_nat(0u);
return x_5;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_addSize___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_RawInst_addSize(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(4u);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun(lean_object* x_1, lean_object* x_2, uint8_t x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_11 = lean_nat_add(x_2, x_4);
x_12 = lean_byte_array_size(x_1);
x_13 = lean_nat_dec_lt(x_11, x_12);
if (x_13 == 0)
{
lean_dec(x_11);
return x_4;
}
else
{
if (x_13 == 0)
{
uint8_t x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
lean_dec(x_11);
x_14 = l_instInhabitedUInt8;
x_15 = lean_box(x_14);
x_16 = l_outOfBounds___redArg(x_15);
x_17 = lean_unbox(x_16);
lean_dec(x_16);
x_5 = x_17;
goto block_10;
}
else
{
uint8_t x_18; 
x_18 = lean_byte_array_fget(x_1, x_11);
lean_dec(x_11);
x_5 = x_18;
goto block_10;
}
}
block_10:
{
uint8_t x_6; 
x_6 = lean_uint8_dec_eq(x_5, x_3);
if (x_6 == 0)
{
return x_4;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_add(x_4, x_7);
lean_dec(x_4);
x_4 = x_8;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_6; 
x_5 = lean_unbox(x_3);
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun(x_1, x_2, x_5, x_4);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_10; uint8_t x_11; lean_object* x_12; uint8_t x_18; lean_object* x_19; uint8_t x_28; uint8_t x_35; 
x_35 = lean_nat_dec_lt(x_4, x_3);
if (x_35 == 0)
{
lean_dec(x_4);
goto block_9;
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_byte_array_size(x_2);
x_37 = lean_nat_dec_lt(x_4, x_36);
if (x_37 == 0)
{
lean_dec(x_4);
goto block_9;
}
else
{
if (x_37 == 0)
{
uint8_t x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = l_instInhabitedUInt8;
x_39 = lean_box(x_38);
x_40 = l_outOfBounds___redArg(x_39);
x_41 = lean_unbox(x_40);
lean_dec(x_40);
x_28 = x_41;
goto block_34;
}
else
{
uint8_t x_42; 
x_42 = lean_byte_array_fget(x_2, x_4);
x_28 = x_42;
goto block_34;
}
}
}
block_9:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_3);
if (x_6 == 0)
{
lean_dec(x_5);
lean_dec(x_3);
return x_1;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_3);
x_8 = lean_array_push(x_1, x_7);
return x_8;
}
}
block_17:
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; 
lean_inc(x_10);
x_13 = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(x_13, 0, x_10);
lean_ctor_set_uint8(x_13, sizeof(void*)*1, x_11);
x_14 = lean_array_push(x_12, x_13);
x_15 = lean_nat_add(x_4, x_10);
lean_dec(x_10);
lean_dec(x_4);
lean_inc(x_15);
x_1 = x_14;
x_4 = x_15;
x_5 = x_15;
goto _start;
}
block_27:
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_unsigned_to_nat(4u);
x_21 = lean_nat_dec_le(x_20, x_19);
if (x_21 == 0)
{
lean_object* x_22; 
x_22 = lean_nat_add(x_4, x_19);
lean_dec(x_19);
lean_dec(x_4);
x_4 = x_22;
goto _start;
}
else
{
uint8_t x_24; 
x_24 = lean_nat_dec_lt(x_5, x_4);
if (x_24 == 0)
{
lean_dec(x_5);
x_10 = x_19;
x_11 = x_18;
x_12 = x_1;
goto block_17;
}
else
{
lean_object* x_25; lean_object* x_26; 
lean_inc(x_4);
x_25 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_25, 0, x_5);
lean_ctor_set(x_25, 1, x_4);
x_26 = lean_array_push(x_1, x_25);
x_10 = x_19;
x_11 = x_18;
x_12 = x_26;
goto block_17;
}
}
}
block_34:
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun(x_2, x_4, x_28, x_29);
x_31 = lean_nat_add(x_4, x_30);
x_32 = lean_nat_dec_lt(x_3, x_31);
lean_dec(x_31);
if (x_32 == 0)
{
x_18 = x_28;
x_19 = x_30;
goto block_27;
}
else
{
lean_object* x_33; 
lean_dec(x_30);
x_33 = lean_nat_sub(x_3, x_4);
x_18 = x_28;
x_19 = x_33;
goto block_27;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_2);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
lean_inc(x_3);
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(x_1, x_2, x_4, x_3, x_3);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
return x_5;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(2u);
return x_1;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_ctor_get(x_4, 2);
x_6 = lean_unsigned_to_nat(64u);
x_7 = lean_nat_dec_le(x_6, x_5);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_48; uint8_t x_84; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
x_10 = lean_byte_array_size(x_2);
x_84 = lean_nat_dec_lt(x_9, x_10);
if (x_84 == 0)
{
lean_dec(x_9);
x_48 = x_4;
goto block_83;
}
else
{
lean_object* x_85; lean_object* x_86; uint8_t x_87; 
x_85 = lean_unsigned_to_nat(4u);
x_86 = lean_nat_add(x_9, x_85);
x_87 = lean_nat_dec_lt(x_10, x_86);
lean_dec(x_86);
if (x_87 == 0)
{
lean_object* x_88; lean_object* x_89; uint32_t x_90; lean_object* x_91; lean_object* x_92; size_t x_93; uint32_t x_94; uint32_t x_95; uint32_t x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint32_t x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; uint8_t x_107; 
x_88 = lean_ctor_get(x_1, 0);
x_89 = lean_ctor_get(x_1, 1);
x_90 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_91 = lean_ctor_get(x_1, 2);
x_92 = lean_unsigned_to_nat(8u);
x_93 = lean_usize_of_nat(x_9);
x_94 = 0;
x_95 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_2, x_93, x_94, x_85);
x_96 = lean_uint32_land(x_95, x_90);
x_97 = lean_uint32_to_nat(x_96);
x_98 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_99 = lean_array_get_borrowed(x_98, x_88, x_97);
lean_dec(x_97);
x_100 = lean_unsigned_to_nat(0u);
x_101 = lean_unbox_uint32(x_99);
x_102 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_91, x_89, x_2, x_9, x_101, x_92, x_100, x_100, x_100);
x_103 = lean_ctor_get(x_102, 1);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 0);
lean_inc(x_104);
lean_dec_ref(x_102);
x_105 = lean_ctor_get(x_103, 0);
lean_inc(x_105);
x_106 = lean_ctor_get(x_103, 1);
lean_inc(x_106);
lean_dec(x_103);
x_107 = lean_nat_dec_le(x_85, x_106);
if (x_107 == 0)
{
lean_dec(x_106);
lean_dec(x_105);
lean_dec(x_104);
x_48 = x_4;
goto block_83;
}
else
{
lean_object* x_108; lean_object* x_109; uint8_t x_110; 
x_108 = lean_unsigned_to_nat(2u);
x_109 = lean_nat_add(x_5, x_108);
x_110 = lean_nat_dec_lt(x_109, x_106);
lean_dec(x_109);
if (x_110 == 0)
{
lean_dec(x_106);
lean_dec(x_105);
lean_dec(x_104);
x_48 = x_4;
goto block_83;
}
else
{
uint8_t x_111; 
x_111 = !lean_is_exclusive(x_4);
if (x_111 == 0)
{
lean_object* x_112; lean_object* x_113; lean_object* x_114; 
x_112 = lean_ctor_get(x_4, 2);
lean_dec(x_112);
x_113 = lean_ctor_get(x_4, 1);
lean_dec(x_113);
x_114 = lean_ctor_get(x_4, 0);
lean_dec(x_114);
lean_ctor_set(x_4, 2, x_106);
lean_ctor_set(x_4, 1, x_105);
lean_ctor_set(x_4, 0, x_104);
x_48 = x_4;
goto block_83;
}
else
{
lean_object* x_115; 
lean_dec(x_4);
x_115 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_115, 0, x_104);
lean_ctor_set(x_115, 1, x_105);
lean_ctor_set(x_115, 2, x_106);
x_48 = x_115;
goto block_83;
}
}
}
}
else
{
lean_dec(x_9);
x_48 = x_4;
goto block_83;
}
}
block_47:
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_unsigned_to_nat(3u);
x_13 = lean_nat_add(x_3, x_12);
x_14 = lean_nat_dec_lt(x_13, x_10);
if (x_14 == 0)
{
lean_dec(x_13);
return x_11;
}
else
{
lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_15 = lean_unsigned_to_nat(4u);
x_16 = lean_nat_add(x_13, x_15);
x_17 = lean_nat_dec_lt(x_10, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint32_t x_20; lean_object* x_21; lean_object* x_22; size_t x_23; uint32_t x_24; uint32_t x_25; uint32_t x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint32_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_21 = lean_ctor_get(x_1, 2);
x_22 = lean_unsigned_to_nat(8u);
x_23 = lean_usize_of_nat(x_13);
x_24 = 0;
x_25 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_2, x_23, x_24, x_15);
x_26 = lean_uint32_land(x_25, x_20);
x_27 = lean_uint32_to_nat(x_26);
x_28 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_29 = lean_array_get_borrowed(x_28, x_18, x_27);
lean_dec(x_27);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_unbox_uint32(x_29);
x_32 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_21, x_19, x_2, x_13, x_31, x_22, x_30, x_30, x_30);
x_33 = lean_ctor_get(x_32, 1);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
lean_dec_ref(x_32);
x_35 = lean_ctor_get(x_33, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_33, 1);
lean_inc(x_36);
lean_dec(x_33);
x_37 = lean_nat_dec_le(x_15, x_36);
if (x_37 == 0)
{
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
return x_11;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_38 = lean_ctor_get(x_11, 2);
x_39 = lean_unsigned_to_nat(2u);
x_40 = lean_nat_add(x_38, x_39);
x_41 = lean_nat_dec_lt(x_40, x_36);
lean_dec(x_40);
if (x_41 == 0)
{
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
return x_11;
}
else
{
uint8_t x_42; 
x_42 = !lean_is_exclusive(x_11);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; 
x_43 = lean_ctor_get(x_11, 2);
lean_dec(x_43);
x_44 = lean_ctor_get(x_11, 1);
lean_dec(x_44);
x_45 = lean_ctor_get(x_11, 0);
lean_dec(x_45);
lean_ctor_set(x_11, 2, x_36);
lean_ctor_set(x_11, 1, x_35);
lean_ctor_set(x_11, 0, x_34);
return x_11;
}
else
{
lean_object* x_46; 
lean_dec(x_11);
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_34);
lean_ctor_set(x_46, 1, x_35);
lean_ctor_set(x_46, 2, x_36);
return x_46;
}
}
}
}
else
{
lean_dec(x_13);
return x_11;
}
}
}
block_83:
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_unsigned_to_nat(2u);
x_50 = lean_nat_add(x_3, x_49);
x_51 = lean_nat_dec_lt(x_50, x_10);
if (x_51 == 0)
{
lean_dec(x_50);
x_11 = x_48;
goto block_47;
}
else
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
x_52 = lean_unsigned_to_nat(4u);
x_53 = lean_nat_add(x_50, x_52);
x_54 = lean_nat_dec_lt(x_10, x_53);
lean_dec(x_53);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; uint32_t x_57; lean_object* x_58; lean_object* x_59; size_t x_60; uint32_t x_61; uint32_t x_62; uint32_t x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; uint32_t x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; 
x_55 = lean_ctor_get(x_1, 0);
x_56 = lean_ctor_get(x_1, 1);
x_57 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_58 = lean_ctor_get(x_1, 2);
x_59 = lean_unsigned_to_nat(8u);
x_60 = lean_usize_of_nat(x_50);
x_61 = 0;
x_62 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_2, x_60, x_61, x_52);
x_63 = lean_uint32_land(x_62, x_57);
x_64 = lean_uint32_to_nat(x_63);
x_65 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_66 = lean_array_get_borrowed(x_65, x_55, x_64);
lean_dec(x_64);
x_67 = lean_unsigned_to_nat(0u);
x_68 = lean_unbox_uint32(x_66);
x_69 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_58, x_56, x_2, x_50, x_68, x_59, x_67, x_67, x_67);
x_70 = lean_ctor_get(x_69, 1);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 0);
lean_inc(x_71);
lean_dec_ref(x_69);
x_72 = lean_ctor_get(x_70, 0);
lean_inc(x_72);
x_73 = lean_ctor_get(x_70, 1);
lean_inc(x_73);
lean_dec(x_70);
x_74 = lean_nat_dec_le(x_52, x_73);
if (x_74 == 0)
{
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
x_11 = x_48;
goto block_47;
}
else
{
lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_75 = lean_ctor_get(x_48, 2);
x_76 = lean_nat_add(x_75, x_49);
x_77 = lean_nat_dec_lt(x_76, x_73);
lean_dec(x_76);
if (x_77 == 0)
{
lean_dec(x_73);
lean_dec(x_72);
lean_dec(x_71);
x_11 = x_48;
goto block_47;
}
else
{
uint8_t x_78; 
x_78 = !lean_is_exclusive(x_48);
if (x_78 == 0)
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_79 = lean_ctor_get(x_48, 2);
lean_dec(x_79);
x_80 = lean_ctor_get(x_48, 1);
lean_dec(x_80);
x_81 = lean_ctor_get(x_48, 0);
lean_dec(x_81);
lean_ctor_set(x_48, 2, x_73);
lean_ctor_set(x_48, 1, x_72);
lean_ctor_set(x_48, 0, x_71);
x_11 = x_48;
goto block_47;
}
else
{
lean_object* x_82; 
lean_dec(x_48);
x_82 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_82, 0, x_71);
lean_ctor_set(x_82, 1, x_72);
lean_ctor_set(x_82, 2, x_73);
x_11 = x_82;
goto block_47;
}
}
}
}
else
{
lean_dec(x_50);
x_11 = x_48;
goto block_47;
}
}
}
}
else
{
return x_4;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch(x_1, x_2, x_3, x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_trimMatch(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; 
x_3 = lean_ctor_get(x_1, 0);
x_4 = lean_ctor_get(x_1, 1);
x_5 = lean_ctor_get(x_1, 2);
x_6 = lean_nat_dec_lt(x_4, x_2);
if (x_6 == 0)
{
lean_dec(x_2);
return x_1;
}
else
{
uint8_t x_7; 
lean_inc(x_5);
lean_inc(x_4);
lean_inc(x_3);
x_7 = !lean_is_exclusive(x_1);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_8 = lean_ctor_get(x_1, 2);
lean_dec(x_8);
x_9 = lean_ctor_get(x_1, 1);
lean_dec(x_9);
x_10 = lean_ctor_get(x_1, 0);
lean_dec(x_10);
x_11 = lean_nat_sub(x_2, x_4);
lean_dec(x_4);
x_12 = lean_nat_add(x_3, x_11);
lean_dec(x_3);
x_13 = lean_nat_dec_lt(x_11, x_5);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec(x_11);
lean_dec(x_5);
x_14 = lean_unsigned_to_nat(0u);
lean_ctor_set(x_1, 2, x_14);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
else
{
lean_object* x_15; 
x_15 = lean_nat_sub(x_5, x_11);
lean_dec(x_11);
lean_dec(x_5);
lean_ctor_set(x_1, 2, x_15);
lean_ctor_set(x_1, 1, x_2);
lean_ctor_set(x_1, 0, x_12);
return x_1;
}
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_1);
x_16 = lean_nat_sub(x_2, x_4);
lean_dec(x_4);
x_17 = lean_nat_add(x_3, x_16);
lean_dec(x_3);
x_18 = lean_nat_dec_lt(x_16, x_5);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; 
lean_dec(x_16);
lean_dec(x_5);
x_19 = lean_unsigned_to_nat(0u);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_17);
lean_ctor_set(x_20, 1, x_2);
lean_ctor_set(x_20, 2, x_19);
return x_20;
}
else
{
lean_object* x_21; lean_object* x_22; 
x_21 = lean_nat_sub(x_5, x_16);
lean_dec(x_16);
lean_dec(x_5);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_17);
lean_ctor_set(x_22, 1, x_2);
lean_ctor_set(x_22, 2, x_21);
return x_22;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_byte_array_size(x_2);
x_11 = lean_nat_dec_lt(x_3, x_10);
if (x_11 == 0)
{
uint8_t x_12; 
lean_dec(x_3);
x_12 = lean_nat_dec_lt(x_4, x_10);
if (x_12 == 0)
{
lean_dec(x_4);
return x_5;
}
else
{
lean_object* x_13; 
lean_inc(x_4);
x_13 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(x_5, x_2, x_10, x_4, x_4);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_14 = lean_unsigned_to_nat(4u);
x_15 = lean_nat_add(x_3, x_14);
x_16 = lean_nat_dec_lt(x_10, x_15);
lean_dec(x_15);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; uint32_t x_19; lean_object* x_20; lean_object* x_21; size_t x_22; uint32_t x_23; uint32_t x_24; uint32_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; uint32_t x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_17 = lean_ctor_get(x_1, 0);
x_18 = lean_ctor_get(x_1, 1);
x_19 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_20 = lean_ctor_get(x_1, 2);
x_21 = lean_unsigned_to_nat(8u);
x_22 = lean_usize_of_nat(x_3);
x_23 = 0;
x_24 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytesAux(x_2, x_22, x_23, x_14);
x_25 = lean_uint32_land(x_24, x_19);
x_26 = lean_uint32_to_nat(x_25);
x_27 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_28 = lean_array_get_borrowed(x_27, x_17, x_26);
lean_dec(x_26);
x_29 = lean_unsigned_to_nat(0u);
x_30 = lean_unbox_uint32(x_28);
lean_inc(x_3);
x_31 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_20, x_18, x_2, x_3, x_30, x_21, x_29, x_29, x_29);
x_32 = lean_ctor_get(x_31, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_31, 0);
lean_inc(x_33);
lean_dec_ref(x_31);
x_34 = lean_ctor_get(x_32, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_32, 1);
lean_inc(x_35);
if (lean_is_exclusive(x_32)) {
 lean_ctor_release(x_32, 0);
 lean_ctor_release(x_32, 1);
 x_36 = x_32;
} else {
 lean_dec_ref(x_32);
 x_36 = lean_box(0);
}
x_37 = lean_nat_dec_le(x_14, x_35);
if (x_37 == 0)
{
lean_dec(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec(x_33);
goto block_9;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_50; 
x_38 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_38, 0, x_33);
lean_ctor_set(x_38, 1, x_34);
lean_ctor_set(x_38, 2, x_35);
x_39 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch(x_1, x_2, x_3, x_38);
lean_inc(x_3);
x_40 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_trimMatch(x_39, x_3);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
x_43 = lean_ctor_get(x_40, 2);
lean_inc(x_43);
lean_dec_ref(x_40);
x_50 = lean_nat_dec_lt(x_43, x_14);
if (x_50 == 0)
{
uint8_t x_51; 
lean_dec(x_3);
x_51 = lean_nat_dec_lt(x_4, x_42);
if (x_51 == 0)
{
lean_dec(x_4);
x_44 = x_5;
goto block_49;
}
else
{
lean_object* x_52; 
lean_inc(x_4);
lean_inc(x_42);
x_52 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(x_5, x_2, x_42, x_4, x_4);
x_44 = x_52;
goto block_49;
}
}
else
{
lean_object* x_53; lean_object* x_54; 
lean_dec(x_43);
lean_dec(x_42);
lean_dec(x_41);
lean_dec(x_36);
x_53 = lean_unsigned_to_nat(1u);
x_54 = lean_nat_add(x_3, x_53);
lean_dec(x_3);
x_3 = x_54;
goto _start;
}
block_49:
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_inc(x_43);
if (lean_is_scalar(x_36)) {
 x_45 = lean_alloc_ctor(1, 2, 0);
} else {
 x_45 = x_36;
 lean_ctor_set_tag(x_45, 1);
}
lean_ctor_set(x_45, 0, x_41);
lean_ctor_set(x_45, 1, x_43);
x_46 = lean_array_push(x_44, x_45);
x_47 = lean_nat_add(x_42, x_43);
lean_dec(x_43);
lean_dec(x_42);
lean_inc(x_47);
x_3 = x_47;
x_4 = x_47;
x_5 = x_46;
goto _start;
}
}
}
else
{
goto block_9;
}
}
block_9:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_nat_add(x_3, x_6);
lean_dec(x_3);
x_3 = x_7;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Encoder_0__LeanBdiff_Vcdiff_Encoder_lazyBestMatch_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_4; lean_object* x_5; 
lean_dec(x_2);
x_4 = lean_box(0);
x_5 = lean_apply_1(x_3, x_4);
return x_5;
}
else
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_ctor_get(x_1, 0);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Encoder_0__LeanBdiff_Vcdiff_Encoder_lazyBestMatch_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Encoder_0__LeanBdiff_Vcdiff_Encoder_lazyBestMatch_match__1_splitter___redArg(x_2, x_3, x_4);
return x_5;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0);
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop(x_1, x_2, x_3, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions(x_1, x_2);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_3;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0(void) {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 1;
x_2 = 1;
x_3 = lean_box(x_2);
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1(void) {
_start:
{
uint8_t x_1; uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_1 = 1;
x_2 = 0;
x_3 = lean_box(x_2);
x_4 = lean_box(x_1);
x_5 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set(x_5, 1, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(lean_object* x_1, lean_object* x_2) {
_start:
{
switch (lean_obj_tag(x_1)) {
case 0:
{
uint8_t x_5; 
x_5 = !lean_is_exclusive(x_1);
if (x_5 == 0)
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
x_8 = lean_nat_sub(x_7, x_6);
lean_dec(x_6);
lean_dec(x_7);
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_dec_le(x_9, x_8);
if (x_10 == 0)
{
lean_dec(x_8);
lean_free_object(x_1);
goto block_4;
}
else
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(17u);
x_12 = lean_nat_dec_le(x_8, x_11);
if (x_12 == 0)
{
lean_dec(x_8);
lean_free_object(x_1);
goto block_4;
}
else
{
lean_object* x_13; uint8_t x_14; uint8_t x_15; lean_object* x_16; lean_object* x_17; 
x_13 = lean_nat_add(x_9, x_8);
lean_dec(x_8);
x_14 = lean_uint8_of_nat(x_13);
lean_dec(x_13);
x_15 = 0;
x_16 = lean_box(x_14);
x_17 = lean_box(x_15);
lean_ctor_set(x_1, 1, x_17);
lean_ctor_set(x_1, 0, x_16);
return x_1;
}
}
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
lean_inc(x_18);
lean_dec(x_1);
x_20 = lean_nat_sub(x_19, x_18);
lean_dec(x_18);
lean_dec(x_19);
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_nat_dec_le(x_21, x_20);
if (x_22 == 0)
{
lean_dec(x_20);
goto block_4;
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(17u);
x_24 = lean_nat_dec_le(x_20, x_23);
if (x_24 == 0)
{
lean_dec(x_20);
goto block_4;
}
else
{
lean_object* x_25; uint8_t x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_25 = lean_nat_add(x_21, x_20);
lean_dec(x_20);
x_26 = lean_uint8_of_nat(x_25);
lean_dec(x_25);
x_27 = 0;
x_28 = lean_box(x_26);
x_29 = lean_box(x_27);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
}
}
}
case 1:
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_43; uint8_t x_44; 
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_32 = x_1;
} else {
 lean_dec_ref(x_1);
 x_32 = lean_box(0);
}
x_33 = lean_unsigned_to_nat(19u);
x_34 = lean_unsigned_to_nat(16u);
x_35 = lean_nat_mul(x_2, x_34);
x_36 = lean_nat_add(x_33, x_35);
lean_dec(x_35);
x_43 = lean_unsigned_to_nat(4u);
x_44 = lean_nat_dec_le(x_43, x_31);
if (x_44 == 0)
{
lean_dec(x_31);
goto block_42;
}
else
{
lean_object* x_45; uint8_t x_46; 
x_45 = lean_unsigned_to_nat(18u);
x_46 = lean_nat_dec_le(x_31, x_45);
if (x_46 == 0)
{
lean_dec(x_31);
goto block_42;
}
else
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_51; uint8_t x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_32);
x_47 = lean_nat_add(x_36, x_31);
lean_dec(x_31);
lean_dec(x_36);
x_48 = lean_nat_sub(x_47, x_43);
lean_dec(x_47);
x_49 = lean_unsigned_to_nat(1u);
x_50 = lean_nat_add(x_48, x_49);
lean_dec(x_48);
x_51 = lean_uint8_of_nat(x_50);
lean_dec(x_50);
x_52 = 0;
x_53 = lean_box(x_51);
x_54 = lean_box(x_52);
x_55 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_55, 0, x_53);
lean_ctor_set(x_55, 1, x_54);
return x_55;
}
}
block_42:
{
uint8_t x_37; uint8_t x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
x_37 = lean_uint8_of_nat(x_36);
lean_dec(x_36);
x_38 = 1;
x_39 = lean_box(x_37);
x_40 = lean_box(x_38);
if (lean_is_scalar(x_32)) {
 x_41 = lean_alloc_ctor(0, 2, 0);
} else {
 x_41 = x_32;
 lean_ctor_set_tag(x_41, 0);
}
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
return x_41;
}
}
default: 
{
lean_object* x_56; 
lean_dec_ref(x_1);
x_56 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1);
return x_56;
}
}
block_4:
{
lean_object* x_3; 
x_3 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0);
return x_3;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_26; uint8_t x_44; uint8_t x_51; 
x_4 = lean_unsigned_to_nat(1u);
x_51 = lean_nat_dec_le(x_4, x_1);
if (x_51 == 0)
{
x_44 = x_51;
goto block_50;
}
else
{
lean_object* x_52; uint8_t x_53; 
x_52 = lean_unsigned_to_nat(4u);
x_53 = lean_nat_dec_le(x_1, x_52);
x_44 = x_53;
goto block_50;
}
block_20:
{
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_box(0);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(4u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 0)
{
lean_object* x_10; 
x_10 = lean_box(0);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; lean_object* x_18; lean_object* x_19; 
x_11 = lean_unsigned_to_nat(235u);
x_12 = lean_nat_sub(x_3, x_5);
x_13 = lean_nat_mul(x_12, x_8);
lean_dec(x_12);
x_14 = lean_nat_add(x_11, x_13);
lean_dec(x_13);
x_15 = lean_nat_sub(x_1, x_4);
x_16 = lean_nat_add(x_14, x_15);
lean_dec(x_15);
lean_dec(x_14);
x_17 = lean_uint8_of_nat(x_16);
lean_dec(x_16);
x_18 = lean_box(x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
}
block_25:
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_unsigned_to_nat(6u);
x_22 = lean_nat_dec_le(x_21, x_3);
if (x_22 == 0)
{
x_5 = x_21;
x_6 = x_22;
goto block_20;
}
else
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_unsigned_to_nat(8u);
x_24 = lean_nat_dec_le(x_3, x_23);
x_5 = x_21;
x_6 = x_24;
goto block_20;
}
}
block_43:
{
if (x_26 == 0)
{
goto block_25;
}
else
{
lean_object* x_27; uint8_t x_28; 
x_27 = lean_unsigned_to_nat(6u);
x_28 = lean_nat_dec_le(x_2, x_27);
if (x_28 == 0)
{
goto block_25;
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; 
x_29 = lean_unsigned_to_nat(163u);
x_30 = lean_unsigned_to_nat(12u);
x_31 = lean_nat_mul(x_3, x_30);
x_32 = lean_nat_add(x_29, x_31);
lean_dec(x_31);
x_33 = lean_nat_sub(x_1, x_4);
x_34 = lean_unsigned_to_nat(3u);
x_35 = lean_nat_mul(x_33, x_34);
lean_dec(x_33);
x_36 = lean_nat_add(x_32, x_35);
lean_dec(x_35);
lean_dec(x_32);
x_37 = lean_unsigned_to_nat(4u);
x_38 = lean_nat_sub(x_2, x_37);
x_39 = lean_nat_add(x_36, x_38);
lean_dec(x_38);
lean_dec(x_36);
x_40 = lean_uint8_of_nat(x_39);
lean_dec(x_39);
x_41 = lean_box(x_40);
x_42 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
}
}
block_50:
{
if (x_44 == 0)
{
lean_object* x_45; 
x_45 = lean_box(0);
return x_45;
}
else
{
lean_object* x_46; uint8_t x_47; 
x_46 = lean_unsigned_to_nat(5u);
x_47 = lean_nat_dec_le(x_3, x_46);
if (x_47 == 0)
{
x_26 = x_47;
goto block_43;
}
else
{
lean_object* x_48; uint8_t x_49; 
x_48 = lean_unsigned_to_nat(4u);
x_49 = lean_nat_dec_le(x_48, x_2);
x_26 = x_49;
goto block_43;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; lean_object* x_15; uint8_t x_16; 
x_15 = lean_unsigned_to_nat(4u);
x_16 = lean_nat_dec_eq(x_1, x_15);
if (x_16 == 0)
{
x_4 = x_16;
goto block_14;
}
else
{
lean_object* x_17; uint8_t x_18; 
x_17 = lean_unsigned_to_nat(1u);
x_18 = lean_nat_dec_eq(x_3, x_17);
x_4 = x_18;
goto block_14;
}
block_14:
{
if (x_4 == 0)
{
lean_object* x_5; 
x_5 = lean_box(0);
return x_5;
}
else
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(8u);
x_7 = lean_nat_dec_le(x_2, x_6);
if (x_7 == 0)
{
lean_object* x_8; 
x_8 = lean_box(0);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; uint8_t x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_unsigned_to_nat(247u);
x_10 = lean_nat_add(x_9, x_2);
x_11 = lean_uint8_of_nat(x_10);
lean_dec(x_10);
x_12 = lean_box(x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_array_get_size(x_1);
x_11 = lean_nat_dec_lt(x_2, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_9);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_8);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_7);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_6);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_5);
lean_ctor_set(x_17, 1, x_16);
return x_17;
}
else
{
lean_object* x_18; 
x_18 = lean_array_fget(x_1, x_2);
switch (lean_obj_tag(x_18)) {
case 0:
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_47; uint8_t x_48; 
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
x_21 = lean_nat_sub(x_20, x_19);
x_22 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_2, x_22);
x_48 = lean_nat_dec_lt(x_47, x_10);
if (x_48 == 0)
{
lean_dec(x_47);
goto block_46;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default));
x_50 = lean_array_get(x_49, x_1, x_47);
lean_dec(x_47);
if (lean_obj_tag(x_50) == 1)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; uint8_t x_57; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_50, 1);
x_54 = lean_nat_add(x_3, x_9);
x_55 = lean_nat_add(x_54, x_21);
lean_dec(x_54);
lean_inc_ref(x_8);
x_56 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(x_8, x_52, x_55);
lean_dec(x_55);
x_57 = !lean_is_exclusive(x_56);
if (x_57 == 0)
{
lean_object* x_58; uint8_t x_59; 
x_58 = lean_ctor_get(x_56, 1);
x_59 = !lean_is_exclusive(x_58);
if (x_59 == 0)
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_60 = lean_ctor_get(x_56, 0);
x_61 = lean_ctor_get(x_58, 0);
x_62 = lean_ctor_get(x_58, 1);
x_63 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_21, x_53, x_60);
lean_dec(x_60);
if (lean_obj_tag(x_63) == 0)
{
lean_free_object(x_58);
lean_dec(x_62);
lean_dec(x_61);
lean_free_object(x_56);
lean_free_object(x_50);
lean_dec(x_53);
goto block_46;
}
else
{
uint8_t x_64; 
lean_dec_ref(x_8);
x_64 = !lean_is_exclusive(x_18);
if (x_64 == 0)
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; lean_object* x_69; lean_object* x_70; uint8_t x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; 
x_65 = lean_ctor_get(x_18, 1);
lean_dec(x_65);
x_66 = lean_ctor_get(x_18, 0);
lean_dec(x_66);
x_67 = lean_ctor_get(x_63, 0);
lean_inc(x_67);
lean_dec_ref(x_63);
x_68 = lean_unbox(x_67);
lean_dec(x_67);
x_69 = lean_byte_array_push(x_6, x_68);
x_70 = lean_byte_array_size(x_5);
x_71 = 0;
lean_inc(x_21);
x_72 = lean_byte_array_copy_slice(x_4, x_19, x_5, x_70, x_21, x_71);
x_73 = lean_unsigned_to_nat(0u);
x_74 = lean_byte_array_size(x_7);
x_75 = lean_byte_array_size(x_61);
x_76 = lean_byte_array_copy_slice(x_61, x_73, x_7, x_74, x_75, x_71);
lean_dec(x_61);
x_77 = lean_nat_add(x_9, x_21);
lean_dec(x_21);
lean_dec(x_9);
x_78 = lean_nat_add(x_77, x_53);
lean_dec(x_53);
lean_dec(x_77);
x_79 = lean_unsigned_to_nat(2u);
lean_ctor_set(x_58, 1, x_79);
lean_ctor_set(x_58, 0, x_78);
lean_ctor_set(x_56, 0, x_62);
lean_ctor_set_tag(x_50, 0);
lean_ctor_set(x_50, 1, x_56);
lean_ctor_set(x_50, 0, x_76);
lean_ctor_set(x_18, 1, x_50);
lean_ctor_set(x_18, 0, x_69);
x_80 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_80, 0, x_72);
lean_ctor_set(x_80, 1, x_18);
return x_80;
}
else
{
lean_object* x_81; uint8_t x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_18);
x_81 = lean_ctor_get(x_63, 0);
lean_inc(x_81);
lean_dec_ref(x_63);
x_82 = lean_unbox(x_81);
lean_dec(x_81);
x_83 = lean_byte_array_push(x_6, x_82);
x_84 = lean_byte_array_size(x_5);
x_85 = 0;
lean_inc(x_21);
x_86 = lean_byte_array_copy_slice(x_4, x_19, x_5, x_84, x_21, x_85);
x_87 = lean_unsigned_to_nat(0u);
x_88 = lean_byte_array_size(x_7);
x_89 = lean_byte_array_size(x_61);
x_90 = lean_byte_array_copy_slice(x_61, x_87, x_7, x_88, x_89, x_85);
lean_dec(x_61);
x_91 = lean_nat_add(x_9, x_21);
lean_dec(x_21);
lean_dec(x_9);
x_92 = lean_nat_add(x_91, x_53);
lean_dec(x_53);
lean_dec(x_91);
x_93 = lean_unsigned_to_nat(2u);
lean_ctor_set(x_58, 1, x_93);
lean_ctor_set(x_58, 0, x_92);
lean_ctor_set(x_56, 0, x_62);
lean_ctor_set_tag(x_50, 0);
lean_ctor_set(x_50, 1, x_56);
lean_ctor_set(x_50, 0, x_90);
x_94 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_94, 0, x_83);
lean_ctor_set(x_94, 1, x_50);
x_95 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_95, 0, x_86);
lean_ctor_set(x_95, 1, x_94);
return x_95;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_96 = lean_ctor_get(x_56, 0);
x_97 = lean_ctor_get(x_58, 0);
x_98 = lean_ctor_get(x_58, 1);
lean_inc(x_98);
lean_inc(x_97);
lean_dec(x_58);
x_99 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_21, x_53, x_96);
lean_dec(x_96);
if (lean_obj_tag(x_99) == 0)
{
lean_dec(x_98);
lean_dec(x_97);
lean_free_object(x_56);
lean_free_object(x_50);
lean_dec(x_53);
goto block_46;
}
else
{
lean_object* x_100; lean_object* x_101; uint8_t x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
lean_dec_ref(x_8);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_100 = x_18;
} else {
 lean_dec_ref(x_18);
 x_100 = lean_box(0);
}
x_101 = lean_ctor_get(x_99, 0);
lean_inc(x_101);
lean_dec_ref(x_99);
x_102 = lean_unbox(x_101);
lean_dec(x_101);
x_103 = lean_byte_array_push(x_6, x_102);
x_104 = lean_byte_array_size(x_5);
x_105 = 0;
lean_inc(x_21);
x_106 = lean_byte_array_copy_slice(x_4, x_19, x_5, x_104, x_21, x_105);
x_107 = lean_unsigned_to_nat(0u);
x_108 = lean_byte_array_size(x_7);
x_109 = lean_byte_array_size(x_97);
x_110 = lean_byte_array_copy_slice(x_97, x_107, x_7, x_108, x_109, x_105);
lean_dec(x_97);
x_111 = lean_nat_add(x_9, x_21);
lean_dec(x_21);
lean_dec(x_9);
x_112 = lean_nat_add(x_111, x_53);
lean_dec(x_53);
lean_dec(x_111);
x_113 = lean_unsigned_to_nat(2u);
x_114 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_114, 0, x_112);
lean_ctor_set(x_114, 1, x_113);
lean_ctor_set(x_56, 1, x_114);
lean_ctor_set(x_56, 0, x_98);
lean_ctor_set_tag(x_50, 0);
lean_ctor_set(x_50, 1, x_56);
lean_ctor_set(x_50, 0, x_110);
if (lean_is_scalar(x_100)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_100;
}
lean_ctor_set(x_115, 0, x_103);
lean_ctor_set(x_115, 1, x_50);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_106);
lean_ctor_set(x_116, 1, x_115);
return x_116;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
x_117 = lean_ctor_get(x_56, 1);
x_118 = lean_ctor_get(x_56, 0);
lean_inc(x_117);
lean_inc(x_118);
lean_dec(x_56);
x_119 = lean_ctor_get(x_117, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_117, 1);
lean_inc(x_120);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_121 = x_117;
} else {
 lean_dec_ref(x_117);
 x_121 = lean_box(0);
}
x_122 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_21, x_53, x_118);
lean_dec(x_118);
if (lean_obj_tag(x_122) == 0)
{
lean_dec(x_121);
lean_dec(x_120);
lean_dec(x_119);
lean_free_object(x_50);
lean_dec(x_53);
goto block_46;
}
else
{
lean_object* x_123; lean_object* x_124; uint8_t x_125; lean_object* x_126; lean_object* x_127; uint8_t x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec_ref(x_8);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_123 = x_18;
} else {
 lean_dec_ref(x_18);
 x_123 = lean_box(0);
}
x_124 = lean_ctor_get(x_122, 0);
lean_inc(x_124);
lean_dec_ref(x_122);
x_125 = lean_unbox(x_124);
lean_dec(x_124);
x_126 = lean_byte_array_push(x_6, x_125);
x_127 = lean_byte_array_size(x_5);
x_128 = 0;
lean_inc(x_21);
x_129 = lean_byte_array_copy_slice(x_4, x_19, x_5, x_127, x_21, x_128);
x_130 = lean_unsigned_to_nat(0u);
x_131 = lean_byte_array_size(x_7);
x_132 = lean_byte_array_size(x_119);
x_133 = lean_byte_array_copy_slice(x_119, x_130, x_7, x_131, x_132, x_128);
lean_dec(x_119);
x_134 = lean_nat_add(x_9, x_21);
lean_dec(x_21);
lean_dec(x_9);
x_135 = lean_nat_add(x_134, x_53);
lean_dec(x_53);
lean_dec(x_134);
x_136 = lean_unsigned_to_nat(2u);
if (lean_is_scalar(x_121)) {
 x_137 = lean_alloc_ctor(0, 2, 0);
} else {
 x_137 = x_121;
}
lean_ctor_set(x_137, 0, x_135);
lean_ctor_set(x_137, 1, x_136);
x_138 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_138, 0, x_120);
lean_ctor_set(x_138, 1, x_137);
lean_ctor_set_tag(x_50, 0);
lean_ctor_set(x_50, 1, x_138);
lean_ctor_set(x_50, 0, x_133);
if (lean_is_scalar(x_123)) {
 x_139 = lean_alloc_ctor(0, 2, 0);
} else {
 x_139 = x_123;
}
lean_ctor_set(x_139, 0, x_126);
lean_ctor_set(x_139, 1, x_50);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_129);
lean_ctor_set(x_140, 1, x_139);
return x_140;
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_141 = lean_ctor_get(x_50, 0);
x_142 = lean_ctor_get(x_50, 1);
lean_inc(x_142);
lean_inc(x_141);
lean_dec(x_50);
x_143 = lean_nat_add(x_3, x_9);
x_144 = lean_nat_add(x_143, x_21);
lean_dec(x_143);
lean_inc_ref(x_8);
x_145 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(x_8, x_141, x_144);
lean_dec(x_144);
x_146 = lean_ctor_get(x_145, 1);
lean_inc(x_146);
x_147 = lean_ctor_get(x_145, 0);
lean_inc(x_147);
if (lean_is_exclusive(x_145)) {
 lean_ctor_release(x_145, 0);
 lean_ctor_release(x_145, 1);
 x_148 = x_145;
} else {
 lean_dec_ref(x_145);
 x_148 = lean_box(0);
}
x_149 = lean_ctor_get(x_146, 0);
lean_inc(x_149);
x_150 = lean_ctor_get(x_146, 1);
lean_inc(x_150);
if (lean_is_exclusive(x_146)) {
 lean_ctor_release(x_146, 0);
 lean_ctor_release(x_146, 1);
 x_151 = x_146;
} else {
 lean_dec_ref(x_146);
 x_151 = lean_box(0);
}
x_152 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_21, x_142, x_147);
lean_dec(x_147);
if (lean_obj_tag(x_152) == 0)
{
lean_dec(x_151);
lean_dec(x_150);
lean_dec(x_149);
lean_dec(x_148);
lean_dec(x_142);
goto block_46;
}
else
{
lean_object* x_153; lean_object* x_154; uint8_t x_155; lean_object* x_156; lean_object* x_157; uint8_t x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
lean_dec_ref(x_8);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_153 = x_18;
} else {
 lean_dec_ref(x_18);
 x_153 = lean_box(0);
}
x_154 = lean_ctor_get(x_152, 0);
lean_inc(x_154);
lean_dec_ref(x_152);
x_155 = lean_unbox(x_154);
lean_dec(x_154);
x_156 = lean_byte_array_push(x_6, x_155);
x_157 = lean_byte_array_size(x_5);
x_158 = 0;
lean_inc(x_21);
x_159 = lean_byte_array_copy_slice(x_4, x_19, x_5, x_157, x_21, x_158);
x_160 = lean_unsigned_to_nat(0u);
x_161 = lean_byte_array_size(x_7);
x_162 = lean_byte_array_size(x_149);
x_163 = lean_byte_array_copy_slice(x_149, x_160, x_7, x_161, x_162, x_158);
lean_dec(x_149);
x_164 = lean_nat_add(x_9, x_21);
lean_dec(x_21);
lean_dec(x_9);
x_165 = lean_nat_add(x_164, x_142);
lean_dec(x_142);
lean_dec(x_164);
x_166 = lean_unsigned_to_nat(2u);
if (lean_is_scalar(x_151)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_151;
}
lean_ctor_set(x_167, 0, x_165);
lean_ctor_set(x_167, 1, x_166);
if (lean_is_scalar(x_148)) {
 x_168 = lean_alloc_ctor(0, 2, 0);
} else {
 x_168 = x_148;
}
lean_ctor_set(x_168, 0, x_150);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_163);
lean_ctor_set(x_169, 1, x_168);
if (lean_is_scalar(x_153)) {
 x_170 = lean_alloc_ctor(0, 2, 0);
} else {
 x_170 = x_153;
}
lean_ctor_set(x_170, 0, x_156);
lean_ctor_set(x_170, 1, x_169);
x_171 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_171, 0, x_159);
lean_ctor_set(x_171, 1, x_170);
return x_171;
}
}
}
else
{
lean_dec(x_50);
goto block_46;
}
}
block_33:
{
lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_byte_array_size(x_5);
x_25 = 0;
lean_inc(x_21);
x_26 = lean_byte_array_copy_slice(x_4, x_19, x_5, x_24, x_21, x_25);
x_27 = lean_nat_add(x_9, x_21);
lean_dec(x_21);
lean_dec(x_9);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_22);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_8);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_7);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_23);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_26);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
block_46:
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; lean_object* x_39; uint8_t x_40; 
x_34 = lean_unsigned_to_nat(0u);
x_35 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(x_18, x_34);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec_ref(x_35);
x_38 = lean_unbox(x_36);
lean_dec(x_36);
x_39 = lean_byte_array_push(x_6, x_38);
x_40 = lean_unbox(x_37);
lean_dec(x_37);
if (x_40 == 0)
{
x_23 = x_39;
goto block_33;
}
else
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_41 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_21);
x_42 = lean_byte_array_size(x_39);
x_43 = lean_byte_array_size(x_41);
x_44 = 0;
x_45 = lean_byte_array_copy_slice(x_41, x_34, x_39, x_42, x_43, x_44);
lean_dec_ref(x_41);
x_23 = x_45;
goto block_33;
}
}
}
case 1:
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_209; lean_object* x_281; uint8_t x_282; 
x_172 = lean_ctor_get(x_18, 0);
x_173 = lean_ctor_get(x_18, 1);
lean_inc(x_173);
x_174 = lean_nat_add(x_3, x_9);
lean_inc(x_172);
x_175 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(x_8, x_172, x_174);
lean_dec(x_174);
x_176 = lean_ctor_get(x_175, 1);
lean_inc(x_176);
x_177 = lean_ctor_get(x_175, 0);
lean_inc(x_177);
if (lean_is_exclusive(x_175)) {
 lean_ctor_release(x_175, 0);
 lean_ctor_release(x_175, 1);
 x_178 = x_175;
} else {
 lean_dec_ref(x_175);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_176, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_176, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_176)) {
 lean_ctor_release(x_176, 0);
 lean_ctor_release(x_176, 1);
 x_181 = x_176;
} else {
 lean_dec_ref(x_176);
 x_181 = lean_box(0);
}
x_281 = lean_unsigned_to_nat(4u);
x_282 = lean_nat_dec_eq(x_173, x_281);
if (x_282 == 0)
{
x_209 = x_282;
goto block_280;
}
else
{
lean_object* x_283; lean_object* x_284; uint8_t x_285; 
x_283 = lean_unsigned_to_nat(1u);
x_284 = lean_nat_add(x_2, x_283);
x_285 = lean_nat_dec_lt(x_284, x_10);
lean_dec(x_284);
x_209 = x_285;
goto block_280;
}
block_195:
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; uint8_t x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
x_183 = lean_unsigned_to_nat(0u);
x_184 = lean_byte_array_size(x_7);
x_185 = lean_byte_array_size(x_179);
x_186 = 0;
x_187 = lean_byte_array_copy_slice(x_179, x_183, x_7, x_184, x_185, x_186);
lean_dec(x_179);
x_188 = lean_nat_add(x_9, x_173);
lean_dec(x_173);
lean_dec(x_9);
x_189 = lean_unsigned_to_nat(1u);
if (lean_is_scalar(x_181)) {
 x_190 = lean_alloc_ctor(0, 2, 0);
} else {
 x_190 = x_181;
}
lean_ctor_set(x_190, 0, x_188);
lean_ctor_set(x_190, 1, x_189);
if (lean_is_scalar(x_178)) {
 x_191 = lean_alloc_ctor(0, 2, 0);
} else {
 x_191 = x_178;
}
lean_ctor_set(x_191, 0, x_180);
lean_ctor_set(x_191, 1, x_190);
x_192 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_192, 0, x_187);
lean_ctor_set(x_192, 1, x_191);
x_193 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_193, 0, x_182);
lean_ctor_set(x_193, 1, x_192);
x_194 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_194, 0, x_5);
lean_ctor_set(x_194, 1, x_193);
return x_194;
}
block_208:
{
lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; uint8_t x_201; 
x_196 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(x_18, x_177);
lean_dec(x_177);
x_197 = lean_ctor_get(x_196, 0);
lean_inc(x_197);
x_198 = lean_ctor_get(x_196, 1);
lean_inc(x_198);
lean_dec_ref(x_196);
x_199 = lean_unbox(x_197);
lean_dec(x_197);
x_200 = lean_byte_array_push(x_6, x_199);
x_201 = lean_unbox(x_198);
lean_dec(x_198);
if (x_201 == 0)
{
x_182 = x_200;
goto block_195;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; lean_object* x_207; 
x_202 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_173);
x_203 = lean_unsigned_to_nat(0u);
x_204 = lean_byte_array_size(x_200);
x_205 = lean_byte_array_size(x_202);
x_206 = 0;
x_207 = lean_byte_array_copy_slice(x_202, x_203, x_200, x_204, x_205, x_206);
lean_dec_ref(x_202);
x_182 = x_207;
goto block_195;
}
}
block_280:
{
if (x_209 == 0)
{
goto block_208;
}
else
{
lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; 
x_210 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default));
x_211 = lean_unsigned_to_nat(1u);
x_212 = lean_nat_add(x_2, x_211);
x_213 = lean_array_get(x_210, x_1, x_212);
lean_dec(x_212);
if (lean_obj_tag(x_213) == 0)
{
uint8_t x_214; 
x_214 = !lean_is_exclusive(x_213);
if (x_214 == 0)
{
lean_object* x_215; lean_object* x_216; lean_object* x_217; uint8_t x_218; 
x_215 = lean_ctor_get(x_213, 0);
x_216 = lean_ctor_get(x_213, 1);
x_217 = lean_nat_sub(x_216, x_215);
lean_dec(x_216);
x_218 = lean_nat_dec_eq(x_217, x_211);
if (x_218 == 0)
{
lean_dec(x_217);
lean_free_object(x_213);
lean_dec(x_215);
goto block_208;
}
else
{
lean_object* x_219; 
x_219 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode(x_173, x_177, x_217);
if (lean_obj_tag(x_219) == 0)
{
lean_dec(x_217);
lean_free_object(x_213);
lean_dec(x_215);
goto block_208;
}
else
{
uint8_t x_220; 
lean_dec(x_181);
lean_dec(x_178);
lean_dec(x_177);
x_220 = !lean_is_exclusive(x_18);
if (x_220 == 0)
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_224; lean_object* x_225; lean_object* x_226; uint8_t x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; 
x_221 = lean_ctor_get(x_18, 1);
lean_dec(x_221);
x_222 = lean_ctor_get(x_18, 0);
lean_dec(x_222);
x_223 = lean_ctor_get(x_219, 0);
lean_inc(x_223);
lean_dec_ref(x_219);
x_224 = lean_unbox(x_223);
lean_dec(x_223);
x_225 = lean_byte_array_push(x_6, x_224);
x_226 = lean_byte_array_size(x_5);
x_227 = 0;
lean_inc(x_217);
x_228 = lean_byte_array_copy_slice(x_4, x_215, x_5, x_226, x_217, x_227);
x_229 = lean_unsigned_to_nat(0u);
x_230 = lean_byte_array_size(x_7);
x_231 = lean_byte_array_size(x_179);
x_232 = lean_byte_array_copy_slice(x_179, x_229, x_7, x_230, x_231, x_227);
lean_dec(x_179);
x_233 = lean_nat_add(x_9, x_173);
lean_dec(x_173);
lean_dec(x_9);
x_234 = lean_nat_add(x_233, x_217);
lean_dec(x_217);
lean_dec(x_233);
x_235 = lean_unsigned_to_nat(2u);
lean_ctor_set(x_213, 1, x_235);
lean_ctor_set(x_213, 0, x_234);
lean_ctor_set_tag(x_18, 0);
lean_ctor_set(x_18, 1, x_213);
lean_ctor_set(x_18, 0, x_180);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_232);
lean_ctor_set(x_236, 1, x_18);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_225);
lean_ctor_set(x_237, 1, x_236);
x_238 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_238, 0, x_228);
lean_ctor_set(x_238, 1, x_237);
return x_238;
}
else
{
lean_object* x_239; uint8_t x_240; lean_object* x_241; lean_object* x_242; uint8_t x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; 
lean_dec(x_18);
x_239 = lean_ctor_get(x_219, 0);
lean_inc(x_239);
lean_dec_ref(x_219);
x_240 = lean_unbox(x_239);
lean_dec(x_239);
x_241 = lean_byte_array_push(x_6, x_240);
x_242 = lean_byte_array_size(x_5);
x_243 = 0;
lean_inc(x_217);
x_244 = lean_byte_array_copy_slice(x_4, x_215, x_5, x_242, x_217, x_243);
x_245 = lean_unsigned_to_nat(0u);
x_246 = lean_byte_array_size(x_7);
x_247 = lean_byte_array_size(x_179);
x_248 = lean_byte_array_copy_slice(x_179, x_245, x_7, x_246, x_247, x_243);
lean_dec(x_179);
x_249 = lean_nat_add(x_9, x_173);
lean_dec(x_173);
lean_dec(x_9);
x_250 = lean_nat_add(x_249, x_217);
lean_dec(x_217);
lean_dec(x_249);
x_251 = lean_unsigned_to_nat(2u);
lean_ctor_set(x_213, 1, x_251);
lean_ctor_set(x_213, 0, x_250);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_180);
lean_ctor_set(x_252, 1, x_213);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_248);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_241);
lean_ctor_set(x_254, 1, x_253);
x_255 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_255, 0, x_244);
lean_ctor_set(x_255, 1, x_254);
return x_255;
}
}
}
}
else
{
lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; 
x_256 = lean_ctor_get(x_213, 0);
x_257 = lean_ctor_get(x_213, 1);
lean_inc(x_257);
lean_inc(x_256);
lean_dec(x_213);
x_258 = lean_nat_sub(x_257, x_256);
lean_dec(x_257);
x_259 = lean_nat_dec_eq(x_258, x_211);
if (x_259 == 0)
{
lean_dec(x_258);
lean_dec(x_256);
goto block_208;
}
else
{
lean_object* x_260; 
x_260 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode(x_173, x_177, x_258);
if (lean_obj_tag(x_260) == 0)
{
lean_dec(x_258);
lean_dec(x_256);
goto block_208;
}
else
{
lean_object* x_261; lean_object* x_262; uint8_t x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; 
lean_dec(x_181);
lean_dec(x_178);
lean_dec(x_177);
if (lean_is_exclusive(x_18)) {
 lean_ctor_release(x_18, 0);
 lean_ctor_release(x_18, 1);
 x_261 = x_18;
} else {
 lean_dec_ref(x_18);
 x_261 = lean_box(0);
}
x_262 = lean_ctor_get(x_260, 0);
lean_inc(x_262);
lean_dec_ref(x_260);
x_263 = lean_unbox(x_262);
lean_dec(x_262);
x_264 = lean_byte_array_push(x_6, x_263);
x_265 = lean_byte_array_size(x_5);
x_266 = 0;
lean_inc(x_258);
x_267 = lean_byte_array_copy_slice(x_4, x_256, x_5, x_265, x_258, x_266);
x_268 = lean_unsigned_to_nat(0u);
x_269 = lean_byte_array_size(x_7);
x_270 = lean_byte_array_size(x_179);
x_271 = lean_byte_array_copy_slice(x_179, x_268, x_7, x_269, x_270, x_266);
lean_dec(x_179);
x_272 = lean_nat_add(x_9, x_173);
lean_dec(x_173);
lean_dec(x_9);
x_273 = lean_nat_add(x_272, x_258);
lean_dec(x_258);
lean_dec(x_272);
x_274 = lean_unsigned_to_nat(2u);
x_275 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_275, 0, x_273);
lean_ctor_set(x_275, 1, x_274);
if (lean_is_scalar(x_261)) {
 x_276 = lean_alloc_ctor(0, 2, 0);
} else {
 x_276 = x_261;
 lean_ctor_set_tag(x_276, 0);
}
lean_ctor_set(x_276, 0, x_180);
lean_ctor_set(x_276, 1, x_275);
x_277 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_277, 0, x_271);
lean_ctor_set(x_277, 1, x_276);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_264);
lean_ctor_set(x_278, 1, x_277);
x_279 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_279, 0, x_267);
lean_ctor_set(x_279, 1, x_278);
return x_279;
}
}
}
}
else
{
lean_dec(x_213);
goto block_208;
}
}
}
}
default: 
{
uint8_t x_286; lean_object* x_287; lean_object* x_288; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; uint8_t x_302; lean_object* x_303; uint8_t x_304; 
x_286 = lean_ctor_get_uint8(x_18, sizeof(void*)*1);
x_287 = lean_ctor_get(x_18, 0);
lean_inc(x_287);
x_298 = lean_unsigned_to_nat(0u);
x_299 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(x_18, x_298);
x_300 = lean_ctor_get(x_299, 0);
lean_inc(x_300);
x_301 = lean_ctor_get(x_299, 1);
lean_inc(x_301);
lean_dec_ref(x_299);
x_302 = lean_unbox(x_300);
lean_dec(x_300);
x_303 = lean_byte_array_push(x_6, x_302);
x_304 = lean_unbox(x_301);
lean_dec(x_301);
if (x_304 == 0)
{
x_288 = x_303;
goto block_297;
}
else
{
lean_object* x_305; lean_object* x_306; lean_object* x_307; uint8_t x_308; lean_object* x_309; 
x_305 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_287);
x_306 = lean_byte_array_size(x_303);
x_307 = lean_byte_array_size(x_305);
x_308 = 0;
x_309 = lean_byte_array_copy_slice(x_305, x_298, x_303, x_306, x_307, x_308);
lean_dec_ref(x_305);
x_288 = x_309;
goto block_297;
}
block_297:
{
lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
x_289 = lean_byte_array_push(x_5, x_286);
x_290 = lean_nat_add(x_9, x_287);
lean_dec(x_287);
lean_dec(x_9);
x_291 = lean_unsigned_to_nat(1u);
x_292 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_292, 0, x_290);
lean_ctor_set(x_292, 1, x_291);
x_293 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_293, 0, x_8);
lean_ctor_set(x_293, 1, x_292);
x_294 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_294, 0, x_7);
lean_ctor_set(x_294, 1, x_293);
x_295 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_295, 0, x_288);
lean_ctor_set(x_295, 1, x_294);
x_296 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_296, 0, x_289);
lean_ctor_set(x_296, 1, x_295);
return x_296;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec_ref(x_4);
lean_dec(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; uint8_t x_12; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_nat_dec_eq(x_9, x_11);
if (x_12 == 1)
{
lean_object* x_13; lean_object* x_14; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_5);
lean_ctor_set(x_13, 1, x_6);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_4);
lean_ctor_set(x_14, 1, x_13);
return x_14;
}
else
{
lean_object* x_15; uint8_t x_16; 
x_15 = lean_array_get_size(x_1);
x_16 = lean_nat_dec_le(x_15, x_10);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_17 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(x_1, x_10, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_20, 1);
lean_inc(x_21);
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec_ref(x_17);
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
lean_dec(x_20);
x_26 = lean_ctor_get(x_21, 0);
lean_inc(x_26);
x_27 = lean_ctor_get(x_21, 1);
lean_inc(x_27);
lean_dec(x_21);
x_28 = lean_unsigned_to_nat(1u);
x_29 = lean_nat_sub(x_9, x_28);
lean_dec(x_9);
x_30 = lean_nat_add(x_10, x_27);
lean_dec(x_27);
lean_dec(x_10);
x_4 = x_22;
x_5 = x_23;
x_6 = x_24;
x_7 = x_25;
x_8 = x_26;
x_9 = x_29;
x_10 = x_30;
goto _start;
}
else
{
lean_object* x_32; lean_object* x_33; 
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec_ref(x_7);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_5);
lean_ctor_set(x_32, 1, x_6);
x_33 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_33, 0, x_4);
lean_ctor_set(x_33, 1, x_32);
return x_33;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9, lean_object* x_10) {
_start:
{
lean_object* x_11; 
x_11 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9, x_10);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_11;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(4u);
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_4 = l_ByteArray_empty;
x_5 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0);
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_array_get_size(x_1);
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(x_1, x_2, x_3, x_4, x_4, x_4, x_5, x_6, x_7, x_6);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(x_1, x_2, x_3);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_4;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__1(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0);
x_3 = lean_box(x_1);
x_4 = lean_array_push(x_2, x_3);
return x_4;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__1, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__1_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__1);
x_2 = lean_byte_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2);
x_2 = lean_byte_array_size(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(0u);
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4);
x_2 = lean_byte_array_size(x_1);
return x_2;
}
}
static uint8_t _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__6(void) {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; 
x_1 = 4;
x_2 = 1;
x_3 = lean_uint8_lor(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; uint8_t x_45; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32(x_2);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_writeUInt32BE(x_6);
x_8 = lean_byte_array_size(x_2);
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_8);
x_10 = lean_byte_array_size(x_3);
x_11 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_10);
x_12 = lean_byte_array_size(x_4);
x_13 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_12);
x_14 = lean_byte_array_size(x_5);
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_14);
x_16 = lean_unsigned_to_nat(0u);
x_17 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__0);
x_18 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__2);
x_19 = lean_byte_array_size(x_9);
x_20 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__3);
x_21 = 0;
x_22 = lean_byte_array_copy_slice(x_18, x_16, x_9, x_19, x_20, x_21);
x_23 = lean_byte_array_size(x_22);
x_24 = lean_byte_array_size(x_11);
x_25 = lean_byte_array_copy_slice(x_11, x_16, x_22, x_23, x_24, x_21);
lean_dec_ref(x_11);
x_26 = lean_byte_array_size(x_25);
x_27 = lean_byte_array_size(x_13);
x_28 = lean_byte_array_copy_slice(x_13, x_16, x_25, x_26, x_27, x_21);
lean_dec_ref(x_13);
x_29 = lean_byte_array_size(x_28);
x_30 = lean_byte_array_size(x_15);
x_31 = lean_byte_array_copy_slice(x_15, x_16, x_28, x_29, x_30, x_21);
lean_dec_ref(x_15);
x_32 = lean_byte_array_size(x_31);
x_33 = lean_byte_array_size(x_7);
x_34 = lean_byte_array_copy_slice(x_7, x_16, x_31, x_32, x_33, x_21);
lean_dec_ref(x_7);
x_35 = lean_byte_array_size(x_34);
x_36 = lean_byte_array_copy_slice(x_3, x_16, x_34, x_35, x_10, x_21);
x_37 = lean_byte_array_size(x_36);
x_38 = lean_byte_array_copy_slice(x_4, x_16, x_36, x_37, x_12, x_21);
x_39 = lean_byte_array_size(x_38);
x_40 = lean_byte_array_copy_slice(x_5, x_16, x_38, x_39, x_14, x_21);
x_41 = lean_byte_array_size(x_40);
x_42 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_41);
x_43 = lean_byte_array_size(x_1);
x_44 = lean_nat_dec_lt(x_16, x_43);
if (x_44 == 0)
{
uint8_t x_71; 
x_71 = 4;
x_45 = x_71;
goto block_70;
}
else
{
uint8_t x_72; 
x_72 = lean_uint8_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__6, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__6_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__6);
x_45 = x_72;
goto block_70;
}
block_70:
{
if (x_44 == 0)
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_46 = lean_box(x_45);
x_47 = lean_array_push(x_17, x_46);
x_48 = lean_byte_array_mk(x_47);
x_49 = lean_byte_array_size(x_48);
x_50 = lean_byte_array_size(x_42);
x_51 = lean_byte_array_copy_slice(x_42, x_16, x_48, x_49, x_50, x_21);
lean_dec_ref(x_42);
x_52 = lean_byte_array_size(x_51);
x_53 = lean_byte_array_copy_slice(x_40, x_16, x_51, x_52, x_41, x_21);
lean_dec_ref(x_40);
return x_53;
}
else
{
lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
x_54 = lean_box(x_45);
x_55 = lean_array_push(x_17, x_54);
x_56 = lean_byte_array_mk(x_55);
x_57 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_43);
x_58 = lean_byte_array_size(x_56);
x_59 = lean_byte_array_size(x_57);
x_60 = lean_byte_array_copy_slice(x_57, x_16, x_56, x_58, x_59, x_21);
lean_dec_ref(x_57);
x_61 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__4);
x_62 = lean_byte_array_size(x_60);
x_63 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__5, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__5_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___closed__5);
x_64 = lean_byte_array_copy_slice(x_61, x_16, x_60, x_62, x_63, x_21);
x_65 = lean_byte_array_size(x_64);
x_66 = lean_byte_array_size(x_42);
x_67 = lean_byte_array_copy_slice(x_42, x_16, x_64, x_65, x_66, x_21);
lean_dec_ref(x_42);
x_68 = lean_byte_array_size(x_67);
x_69 = lean_byte_array_copy_slice(x_40, x_16, x_67, x_68, x_41, x_21);
lean_dec_ref(x_40);
return x_69;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(2u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__1(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__0);
x_3 = lean_box(x_1);
x_4 = lean_array_push(x_2, x_3);
return x_4;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__2(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; 
x_1 = 0;
x_2 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__1, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__1_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__1);
x_3 = lean_box(x_1);
x_4 = lean_array_push(x_2, x_3);
return x_4;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__2, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__2_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__2);
x_2 = lean_byte_array_mk(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__4(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_magic;
x_2 = lean_byte_array_size(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3);
x_2 = lean_byte_array_size(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6(void) {
_start:
{
uint8_t x_1; lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_1 = 0;
x_2 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__5, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__5_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__5);
x_3 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__4);
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_magic;
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__3);
x_7 = lean_byte_array_copy_slice(x_6, x_5, x_4, x_3, x_2, x_1);
return x_7;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6);
x_2 = lean_byte_array_size(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_3 = lean_unsigned_to_nat(16u);
lean_inc_ref(x_1);
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex(x_1, x_3);
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions(x_4, x_2);
lean_dec_ref(x_4);
x_6 = lean_byte_array_size(x_1);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(x_5, x_6, x_2);
lean_dec_ref(x_5);
x_8 = lean_ctor_get(x_7, 1);
lean_inc(x_8);
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = lean_ctor_get(x_8, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_11);
lean_dec(x_8);
x_12 = lean_unsigned_to_nat(0u);
x_13 = 0;
x_14 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__6);
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_serializeWindow(x_1, x_2, x_9, x_10, x_11);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec_ref(x_1);
x_16 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__7, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__7_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___closed__7);
x_17 = lean_byte_array_size(x_15);
x_18 = lean_byte_array_copy_slice(x_15, x_12, x_14, x_16, x_17, x_13);
lean_dec_ref(x_15);
return x_18;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Defs(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_CodeTable(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Defs(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_CodeTable(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__1 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__1);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__2 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__2();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_adler32___closed__0___boxed__const__2);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashMultiplier = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashMultiplier();
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashWindow = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashWindow();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashWindow);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_sourceIdxSentinel = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_sourceIdxSentinel();
lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1 = _init_lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed__const__1 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_buildSourceIndex___boxed__const__1);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
