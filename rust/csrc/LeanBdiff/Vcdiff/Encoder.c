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
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___redArg(lean_object*, lean_object*, lean_object*, uint32_t, lean_object*);
uint32_t lean_uint32_mul(uint32_t, uint32_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0(lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* lean_nat_sub(lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0___boxed(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
lean_object* lean_array_get_size(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(lean_object*, lean_object*, lean_object*, lean_object*, uint32_t, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* l_ByteArray_toList(lean_object*);
lean_object* lp_lean_x2dbdiff_List_repr_x27___at___00Option_repr___at___00LeanBdiff_Vcdiff_instReprHeader_repr_spec__0_spec__0___redArg(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst___closed__0_value;
extern lean_object* l_ByteArray_empty;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun(lean_object*, lean_object*, uint8_t, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_trimMatch(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
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
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___boxed(lean_object*, lean_object*);
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
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint32_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint32_t x_8; uint8_t x_12; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_12 = lean_nat_dec_lt(x_5, x_6);
if (x_12 == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_nat_add(x_1, x_5);
x_14 = lean_byte_array_size(x_2);
x_15 = lean_nat_dec_lt(x_13, x_14);
if (x_15 == 0)
{
lean_dec(x_13);
x_8 = x_4;
goto block_11;
}
else
{
uint32_t x_16; uint32_t x_17; uint8_t x_18; 
x_16 = 1597334677;
x_17 = lean_uint32_mul(x_4, x_16);
if (x_15 == 0)
{
uint8_t x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_13);
x_22 = l_instInhabitedUInt8;
x_23 = lean_box(x_22);
x_24 = l_outOfBounds___redArg(x_23);
x_25 = lean_unbox(x_24);
lean_dec(x_24);
x_18 = x_25;
goto block_21;
}
else
{
uint8_t x_26; 
x_26 = lean_byte_array_fget(x_2, x_13);
lean_dec(x_13);
x_18 = x_26;
goto block_21;
}
block_21:
{
uint32_t x_19; uint32_t x_20; 
x_19 = lean_uint8_to_uint32(x_18);
x_20 = lean_uint32_add(x_17, x_19);
x_8 = x_20;
goto block_11;
}
}
}
block_11:
{
lean_object* x_9; 
x_9 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_8;
x_5 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint32_t x_6; uint32_t x_7; lean_object* x_8; 
x_6 = lean_unbox_uint32(x_4);
lean_dec(x_4);
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___redArg(x_1, x_2, x_3, x_6, x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
x_8 = lean_box_uint32(x_7);
return x_8;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint32_t x_5; lean_object* x_6; lean_object* x_7; uint32_t x_8; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = 0;
x_6 = lean_unsigned_to_nat(1u);
x_7 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_7, 0, x_4);
lean_ctor_set(x_7, 1, x_3);
lean_ctor_set(x_7, 2, x_6);
x_8 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___redArg(x_2, x_1, x_7, x_5, x_4);
lean_dec_ref(x_7);
return x_8;
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
LEAN_EXPORT uint32_t lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, uint32_t x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint32_t x_8; 
x_8 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___redArg(x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint32_t x_8; uint32_t x_9; lean_object* x_10; 
x_8 = lean_unbox_uint32(x_4);
lean_dec(x_4);
x_9 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_hashBytes_spec__0(x_1, x_2, x_3, x_8, x_5, x_6, x_7);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
x_10 = lean_box_uint32(x_9);
return x_10;
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
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint32_t x_13; uint32_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint32_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
x_12 = lean_unsigned_to_nat(4u);
x_13 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_1, x_5, x_12);
x_14 = lean_uint32_land(x_13, x_2);
x_15 = lean_uint32_to_nat(x_14);
x_16 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_17 = lean_array_get_borrowed(x_16, x_11, x_15);
lean_inc(x_17);
x_18 = lean_array_set(x_10, x_5, x_17);
x_19 = lean_uint32_of_nat(x_5);
x_20 = lean_box_uint32(x_19);
x_21 = lean_array_set(x_11, x_15, x_20);
lean_dec(x_15);
lean_ctor_set(x_4, 1, x_21);
lean_ctor_set(x_4, 0, x_18);
x_22 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_5 = x_22;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; uint32_t x_27; uint32_t x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint32_t x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_24 = lean_ctor_get(x_4, 0);
x_25 = lean_ctor_get(x_4, 1);
lean_inc(x_25);
lean_inc(x_24);
lean_dec(x_4);
x_26 = lean_unsigned_to_nat(4u);
x_27 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_1, x_5, x_26);
x_28 = lean_uint32_land(x_27, x_2);
x_29 = lean_uint32_to_nat(x_28);
x_30 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_31 = lean_array_get_borrowed(x_30, x_25, x_29);
lean_inc(x_31);
x_32 = lean_array_set(x_24, x_5, x_31);
x_33 = lean_uint32_of_nat(x_5);
x_34 = lean_box_uint32(x_33);
x_35 = lean_array_set(x_25, x_29, x_34);
lean_dec(x_29);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_32);
lean_ctor_set(x_36, 1, x_35);
x_37 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_36;
x_5 = x_37;
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
LEAN_EXPORT uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_byte_array_size(x_1);
x_4 = lean_nat_dec_lt(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
x_4 = lean_box(x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; uint8_t x_7; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_nat_add(x_2, x_5);
x_14 = lean_byte_array_size(x_1);
x_15 = lean_nat_dec_lt(x_13, x_14);
if (x_15 == 0)
{
lean_dec(x_13);
return x_5;
}
else
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_nat_add(x_4, x_5);
x_17 = lean_byte_array_size(x_3);
x_18 = lean_nat_dec_lt(x_16, x_17);
if (x_18 == 0)
{
lean_dec(x_16);
lean_dec(x_13);
return x_5;
}
else
{
uint8_t x_19; uint8_t x_20; uint8_t x_27; 
x_19 = l_instInhabitedUInt8;
x_27 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0(x_1, x_13);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_13);
x_28 = lean_box(x_19);
x_29 = l_outOfBounds___redArg(x_28);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
x_20 = x_30;
goto block_26;
}
else
{
uint8_t x_31; 
x_31 = lean_byte_array_fget(x_1, x_13);
lean_dec(x_13);
x_20 = x_31;
goto block_26;
}
block_26:
{
uint8_t x_21; 
x_21 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0(x_3, x_16);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_16);
x_22 = lean_box(x_19);
x_23 = l_outOfBounds___redArg(x_22);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
x_6 = x_20;
x_7 = x_24;
goto block_12;
}
else
{
uint8_t x_25; 
x_25 = lean_byte_array_fget(x_3, x_16);
lean_dec(x_16);
x_6 = x_20;
x_7 = x_25;
goto block_12;
}
}
}
}
block_12:
{
uint8_t x_8; 
x_8 = lean_uint8_dec_eq(x_6, x_7);
if (x_8 == 0)
{
return x_5;
}
else
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_unsigned_to_nat(1u);
x_10 = lean_nat_add(x_5, x_9);
lean_dec(x_5);
x_5 = x_10;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; 
x_6 = lean_nat_dec_lt(x_5, x_2);
if (x_6 == 0)
{
return x_5;
}
else
{
uint8_t x_7; 
x_7 = lean_nat_dec_lt(x_5, x_4);
if (x_7 == 0)
{
return x_5;
}
else
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; uint8_t x_17; lean_object* x_26; uint8_t x_27; 
x_8 = l_instInhabitedUInt8;
x_9 = lean_nat_sub(x_2, x_5);
x_10 = lean_unsigned_to_nat(1u);
x_26 = lean_nat_sub(x_9, x_10);
lean_dec(x_9);
x_27 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0(x_1, x_26);
if (x_27 == 0)
{
lean_object* x_28; lean_object* x_29; uint8_t x_30; 
lean_dec(x_26);
x_28 = lean_box(x_8);
x_29 = l_outOfBounds___redArg(x_28);
x_30 = lean_unbox(x_29);
lean_dec(x_29);
x_17 = x_30;
goto block_25;
}
else
{
uint8_t x_31; 
x_31 = lean_byte_array_fget(x_1, x_26);
lean_dec(x_26);
x_17 = x_31;
goto block_25;
}
block_16:
{
uint8_t x_13; 
x_13 = lean_uint8_dec_eq(x_11, x_12);
if (x_13 == 0)
{
return x_5;
}
else
{
lean_object* x_14; 
x_14 = lean_nat_add(x_5, x_10);
lean_dec(x_5);
x_5 = x_14;
goto _start;
}
}
block_25:
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_nat_sub(x_4, x_5);
x_19 = lean_nat_sub(x_18, x_10);
lean_dec(x_18);
x_20 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward___lam__0(x_3, x_19);
if (x_20 == 0)
{
lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_19);
x_21 = lean_box(x_8);
x_22 = l_outOfBounds___redArg(x_21);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
x_11 = x_17;
x_12 = x_23;
goto block_16;
}
else
{
uint8_t x_24; 
x_24 = lean_byte_array_fget(x_3, x_19);
lean_dec(x_19);
x_11 = x_17;
x_12 = x_24;
goto block_16;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendForward(x_1, x_2, x_3, x_4, x_5);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendBackward(x_1, x_2, x_3, x_4, x_5);
x_8 = lean_nat_sub(x_2, x_7);
x_9 = lean_nat_sub(x_4, x_7);
x_10 = lean_nat_add(x_6, x_7);
lean_dec(x_7);
lean_dec(x_6);
x_11 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_9);
lean_ctor_set(x_11, 2, x_10);
return x_11;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch(x_1, x_2, x_3, x_4);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, uint32_t x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_6, x_8);
if (x_9 == 1)
{
lean_dec(x_6);
return x_7;
}
else
{
uint32_t x_10; uint8_t x_11; 
x_10 = 4294967295;
x_11 = lean_uint32_dec_eq(x_5, x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_23; lean_object* x_24; lean_object* x_25; uint8_t x_26; 
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_6, x_12);
lean_dec(x_6);
x_14 = lean_uint32_to_nat(x_5);
x_23 = lean_unsigned_to_nat(4u);
x_24 = lean_nat_add(x_14, x_23);
x_25 = lean_byte_array_size(x_1);
x_26 = lean_nat_dec_le(x_24, x_25);
lean_dec(x_24);
if (x_26 == 0)
{
x_15 = x_7;
goto block_22;
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_extendMatch(x_1, x_14, x_3, x_4);
x_28 = lean_ctor_get(x_27, 2);
lean_inc(x_28);
x_29 = lean_nat_dec_le(x_23, x_28);
if (x_29 == 0)
{
lean_dec(x_28);
lean_dec_ref(x_27);
x_15 = x_7;
goto block_22;
}
else
{
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_30; 
lean_dec(x_28);
x_30 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_30, 0, x_27);
x_15 = x_30;
goto block_22;
}
else
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_7, 0);
x_32 = lean_ctor_get(x_31, 2);
x_33 = lean_nat_dec_lt(x_32, x_28);
lean_dec(x_28);
if (x_33 == 0)
{
lean_dec_ref(x_27);
x_15 = x_7;
goto block_22;
}
else
{
uint8_t x_34; 
x_34 = !lean_is_exclusive(x_7);
if (x_34 == 0)
{
lean_object* x_35; 
x_35 = lean_ctor_get(x_7, 0);
lean_dec(x_35);
lean_ctor_set(x_7, 0, x_27);
x_15 = x_7;
goto block_22;
}
else
{
lean_object* x_36; 
lean_dec(x_7);
x_36 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_36, 0, x_27);
x_15 = x_36;
goto block_22;
}
}
}
}
}
block_22:
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_array_get_size(x_2);
x_17 = lean_nat_dec_lt(x_14, x_16);
if (x_17 == 0)
{
lean_dec(x_14);
x_5 = x_10;
x_6 = x_13;
x_7 = x_15;
goto _start;
}
else
{
lean_object* x_19; uint32_t x_20; 
x_19 = lean_array_fget_borrowed(x_2, x_14);
lean_dec(x_14);
x_20 = lean_unbox_uint32(x_19);
x_5 = x_20;
x_6 = x_13;
x_7 = x_15;
goto _start;
}
}
}
else
{
lean_dec(x_6);
return x_7;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
uint32_t x_8; lean_object* x_9; 
x_8 = lean_unbox_uint32(x_5);
lean_dec(x_5);
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_1, x_2, x_3, x_4, x_8, x_6, x_7);
lean_dec(x_4);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_9;
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
lean_object* x_9; lean_object* x_10; uint32_t x_11; lean_object* x_12; uint32_t x_13; uint32_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; uint32_t x_19; lean_object* x_20; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_12 = lean_ctor_get(x_1, 2);
x_13 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_2, x_3, x_6);
x_14 = lean_uint32_land(x_13, x_11);
x_15 = lean_uint32_to_nat(x_14);
x_16 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_17 = lean_array_get_borrowed(x_16, x_9, x_15);
lean_dec(x_15);
x_18 = lean_box(0);
x_19 = lean_unbox_uint32(x_17);
x_20 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_12, x_10, x_2, x_3, x_19, x_4, x_18);
return x_20;
}
else
{
lean_object* x_21; 
lean_dec(x_4);
x_21 = lean_box(0);
return x_21;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatch___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatch(x_1, x_2, x_3, x_4);
lean_dec(x_3);
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
switch (lean_obj_tag(x_1)) {
case 0:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
lean_dec_ref(x_1);
x_4 = lean_apply_1(x_2, x_3);
return x_4;
}
case 1:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
lean_dec_ref(x_1);
x_7 = lean_apply_2(x_2, x_5, x_6);
return x_7;
}
default: 
{
uint8_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_8 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_9 = lean_ctor_get(x_1, 0);
lean_inc(x_9);
lean_dec_ref(x_1);
x_10 = lean_box(x_8);
x_11 = lean_apply_2(x_2, x_10, x_9);
return x_11;
}
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
lean_object* x_3; lean_object* x_4; lean_object* x_14; uint8_t x_15; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
lean_dec_ref(x_1);
x_14 = lean_unsigned_to_nat(1024u);
x_15 = lean_nat_dec_le(x_14, x_2);
if (x_15 == 0)
{
lean_object* x_16; 
x_16 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3);
x_4 = x_16;
goto block_13;
}
else
{
lean_object* x_17; 
x_17 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4);
x_4 = x_17;
goto block_13;
}
block_13:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; 
x_5 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__2));
x_6 = l_ByteArray_toList(x_3);
lean_dec_ref(x_3);
x_7 = lp_lean_x2dbdiff_List_repr_x27___at___00Option_repr___at___00LeanBdiff_Vcdiff_instReprHeader_repr_spec__0_spec__0___redArg(x_6);
x_8 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_9, 0, x_4);
lean_ctor_set(x_9, 1, x_8);
x_10 = 0;
x_11 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_11, 0, x_9);
lean_ctor_set_uint8(x_11, sizeof(void*)*1, x_10);
x_12 = l_Repr_addAppParen(x_11, x_2);
return x_12;
}
}
case 1:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_36; uint8_t x_37; 
x_18 = lean_ctor_get(x_1, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_1, 1);
lean_inc(x_19);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_20 = x_1;
} else {
 lean_dec_ref(x_1);
 x_20 = lean_box(0);
}
x_36 = lean_unsigned_to_nat(1024u);
x_37 = lean_nat_dec_le(x_36, x_2);
if (x_37 == 0)
{
lean_object* x_38; 
x_38 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3);
x_21 = x_38;
goto block_35;
}
else
{
lean_object* x_39; 
x_39 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4);
x_21 = x_39;
goto block_35;
}
block_35:
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; 
x_22 = lean_box(1);
x_23 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__7));
x_24 = l_Nat_reprFast(x_18);
x_25 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_25, 0, x_24);
if (lean_is_scalar(x_20)) {
 x_26 = lean_alloc_ctor(5, 2, 0);
} else {
 x_26 = x_20;
 lean_ctor_set_tag(x_26, 5);
}
lean_ctor_set(x_26, 0, x_23);
lean_ctor_set(x_26, 1, x_25);
x_27 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_22);
x_28 = l_Nat_reprFast(x_19);
x_29 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_30, 0, x_27);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_31, 0, x_21);
lean_ctor_set(x_31, 1, x_30);
x_32 = 0;
x_33 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_33, 0, x_31);
lean_ctor_set_uint8(x_33, sizeof(void*)*1, x_32);
x_34 = l_Repr_addAppParen(x_33, x_2);
return x_34;
}
}
default: 
{
uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_59; uint8_t x_60; 
x_40 = lean_ctor_get_uint8(x_1, sizeof(void*)*1);
x_41 = lean_ctor_get(x_1, 0);
lean_inc(x_41);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 x_42 = x_1;
} else {
 lean_dec_ref(x_1);
 x_42 = lean_box(0);
}
x_59 = lean_unsigned_to_nat(1024u);
x_60 = lean_nat_dec_le(x_59, x_2);
if (x_60 == 0)
{
lean_object* x_61; 
x_61 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__3);
x_43 = x_61;
goto block_58;
}
else
{
lean_object* x_62; 
x_62 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__4);
x_43 = x_62;
goto block_58;
}
block_58:
{
lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; lean_object* x_56; lean_object* x_57; 
x_44 = lean_box(1);
x_45 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instReprRawInst_repr___closed__10));
x_46 = lean_uint8_to_nat(x_40);
x_47 = l_Nat_reprFast(x_46);
x_48 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_48, 0, x_47);
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_45);
lean_ctor_set(x_49, 1, x_48);
x_50 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_44);
x_51 = l_Nat_reprFast(x_41);
x_52 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_52, 0, x_51);
x_53 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_53, 0, x_50);
lean_ctor_set(x_53, 1, x_52);
x_54 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_54, 0, x_43);
lean_ctor_set(x_54, 1, x_53);
x_55 = 0;
if (lean_is_scalar(x_42)) {
 x_56 = lean_alloc_ctor(6, 1, 1);
} else {
 x_56 = x_42;
 lean_ctor_set_tag(x_56, 6);
}
lean_ctor_set(x_56, 0, x_54);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_55);
x_57 = l_Repr_addAppParen(x_56, x_2);
return x_57;
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
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = l_ByteArray_empty;
x_2 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_2, 0, x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default___closed__0);
return x_1;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst(void) {
_start:
{
lean_object* x_1; 
x_1 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default;
return x_1;
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; lean_object* x_7; uint8_t x_13; lean_object* x_25; uint8_t x_26; 
x_25 = lean_byte_array_size(x_2);
x_26 = lean_nat_dec_lt(x_3, x_25);
if (x_26 == 0)
{
uint8_t x_27; 
lean_dec(x_3);
x_27 = lean_nat_dec_lt(x_4, x_25);
if (x_27 == 0)
{
lean_dec(x_4);
return x_1;
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; 
x_28 = l_ByteArray_extract(x_2, x_4, x_25);
x_29 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_29, 0, x_28);
x_30 = lean_array_push(x_1, x_29);
return x_30;
}
}
else
{
if (x_26 == 0)
{
uint8_t x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_31 = l_instInhabitedUInt8;
x_32 = lean_box(x_31);
x_33 = l_outOfBounds___redArg(x_32);
x_34 = lean_unbox(x_33);
lean_dec(x_33);
x_13 = x_34;
goto block_24;
}
else
{
uint8_t x_35; 
x_35 = lean_byte_array_fget(x_2, x_3);
x_13 = x_35;
goto block_24;
}
}
block_12:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_inc(x_5);
x_8 = lean_alloc_ctor(2, 1, 1);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set_uint8(x_8, sizeof(void*)*1, x_6);
x_9 = lean_array_push(x_7, x_8);
x_10 = lean_nat_add(x_3, x_5);
lean_dec(x_5);
lean_dec(x_3);
lean_inc(x_10);
x_1 = x_9;
x_3 = x_10;
x_4 = x_10;
goto _start;
}
block_24:
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_unsigned_to_nat(1u);
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_countRun(x_2, x_3, x_13, x_14);
x_16 = lean_unsigned_to_nat(4u);
x_17 = lean_nat_dec_le(x_16, x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lean_nat_add(x_3, x_15);
lean_dec(x_15);
lean_dec(x_3);
x_3 = x_18;
goto _start;
}
else
{
uint8_t x_20; 
x_20 = lean_nat_dec_lt(x_4, x_3);
if (x_20 == 0)
{
lean_dec(x_4);
x_5 = x_15;
x_6 = x_13;
x_7 = x_1;
goto block_12;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_21 = l_ByteArray_extract(x_2, x_4, x_3);
x_22 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = lean_array_push(x_1, x_22);
x_5 = x_15;
x_6 = x_13;
x_7 = x_23;
goto block_12;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns_emitAddWithRunsRec(x_1, x_2, x_3, x_3);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
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
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_38; uint8_t x_64; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_add(x_3, x_8);
x_10 = lean_byte_array_size(x_2);
x_64 = lean_nat_dec_lt(x_9, x_10);
if (x_64 == 0)
{
lean_dec(x_9);
x_38 = x_4;
goto block_63;
}
else
{
lean_object* x_65; lean_object* x_66; uint8_t x_67; 
x_65 = lean_unsigned_to_nat(4u);
x_66 = lean_nat_add(x_9, x_65);
x_67 = lean_nat_dec_lt(x_10, x_66);
lean_dec(x_66);
if (x_67 == 0)
{
lean_object* x_68; lean_object* x_69; uint32_t x_70; lean_object* x_71; lean_object* x_72; uint32_t x_73; uint32_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; uint32_t x_79; lean_object* x_80; 
x_68 = lean_ctor_get(x_1, 0);
x_69 = lean_ctor_get(x_1, 1);
x_70 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_71 = lean_ctor_get(x_1, 2);
x_72 = lean_unsigned_to_nat(8u);
x_73 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_2, x_9, x_65);
x_74 = lean_uint32_land(x_73, x_70);
x_75 = lean_uint32_to_nat(x_74);
x_76 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_77 = lean_array_get_borrowed(x_76, x_68, x_75);
lean_dec(x_75);
x_78 = lean_box(0);
x_79 = lean_unbox_uint32(x_77);
x_80 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_71, x_69, x_2, x_9, x_79, x_72, x_78);
lean_dec(x_9);
if (lean_obj_tag(x_80) == 0)
{
x_38 = x_4;
goto block_63;
}
else
{
lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_81 = lean_ctor_get(x_80, 0);
lean_inc(x_81);
lean_dec_ref(x_80);
x_82 = lean_ctor_get(x_81, 2);
x_83 = lean_unsigned_to_nat(2u);
x_84 = lean_nat_add(x_5, x_83);
x_85 = lean_nat_dec_lt(x_84, x_82);
lean_dec(x_84);
if (x_85 == 0)
{
lean_dec(x_81);
x_38 = x_4;
goto block_63;
}
else
{
lean_dec_ref(x_4);
x_38 = x_81;
goto block_63;
}
}
}
else
{
lean_dec(x_9);
x_38 = x_4;
goto block_63;
}
}
block_37:
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
lean_object* x_18; lean_object* x_19; uint32_t x_20; lean_object* x_21; lean_object* x_22; uint32_t x_23; uint32_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; uint32_t x_29; lean_object* x_30; 
x_18 = lean_ctor_get(x_1, 0);
x_19 = lean_ctor_get(x_1, 1);
x_20 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_21 = lean_ctor_get(x_1, 2);
x_22 = lean_unsigned_to_nat(8u);
x_23 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_2, x_13, x_15);
x_24 = lean_uint32_land(x_23, x_20);
x_25 = lean_uint32_to_nat(x_24);
x_26 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_27 = lean_array_get_borrowed(x_26, x_18, x_25);
lean_dec(x_25);
x_28 = lean_box(0);
x_29 = lean_unbox_uint32(x_27);
x_30 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_21, x_19, x_2, x_13, x_29, x_22, x_28);
lean_dec(x_13);
if (lean_obj_tag(x_30) == 0)
{
return x_11;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; uint8_t x_36; 
x_31 = lean_ctor_get(x_30, 0);
lean_inc(x_31);
lean_dec_ref(x_30);
x_32 = lean_ctor_get(x_11, 2);
x_33 = lean_ctor_get(x_31, 2);
x_34 = lean_unsigned_to_nat(2u);
x_35 = lean_nat_add(x_32, x_34);
x_36 = lean_nat_dec_lt(x_35, x_33);
lean_dec(x_35);
if (x_36 == 0)
{
lean_dec(x_31);
return x_11;
}
else
{
lean_dec_ref(x_11);
return x_31;
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
block_63:
{
lean_object* x_39; lean_object* x_40; uint8_t x_41; 
x_39 = lean_unsigned_to_nat(2u);
x_40 = lean_nat_add(x_3, x_39);
x_41 = lean_nat_dec_lt(x_40, x_10);
if (x_41 == 0)
{
lean_dec(x_40);
x_11 = x_38;
goto block_37;
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_42 = lean_unsigned_to_nat(4u);
x_43 = lean_nat_add(x_40, x_42);
x_44 = lean_nat_dec_lt(x_10, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; uint32_t x_47; lean_object* x_48; lean_object* x_49; uint32_t x_50; uint32_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint32_t x_56; lean_object* x_57; 
x_45 = lean_ctor_get(x_1, 0);
x_46 = lean_ctor_get(x_1, 1);
x_47 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_48 = lean_ctor_get(x_1, 2);
x_49 = lean_unsigned_to_nat(8u);
x_50 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_2, x_40, x_42);
x_51 = lean_uint32_land(x_50, x_47);
x_52 = lean_uint32_to_nat(x_51);
x_53 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_54 = lean_array_get_borrowed(x_53, x_45, x_52);
lean_dec(x_52);
x_55 = lean_box(0);
x_56 = lean_unbox_uint32(x_54);
x_57 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_48, x_46, x_2, x_40, x_56, x_49, x_55);
lean_dec(x_40);
if (lean_obj_tag(x_57) == 0)
{
x_11 = x_38;
goto block_37;
}
else
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; uint8_t x_62; 
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
lean_dec_ref(x_57);
x_59 = lean_ctor_get(x_38, 2);
x_60 = lean_ctor_get(x_58, 2);
x_61 = lean_nat_add(x_59, x_39);
x_62 = lean_nat_dec_lt(x_61, x_60);
lean_dec(x_61);
if (x_62 == 0)
{
lean_dec(x_58);
x_11 = x_38;
goto block_37;
}
else
{
lean_dec_ref(x_38);
x_11 = x_58;
goto block_37;
}
}
}
else
{
lean_dec(x_40);
x_11 = x_38;
goto block_37;
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
lean_object* x_6; uint8_t x_7; lean_object* x_21; uint8_t x_22; 
x_21 = lean_byte_array_size(x_2);
x_22 = lean_nat_dec_lt(x_3, x_21);
if (x_22 == 0)
{
lean_object* x_23; lean_object* x_24; uint8_t x_25; 
lean_dec(x_3);
x_23 = lean_unsigned_to_nat(0u);
x_24 = lean_byte_array_size(x_4);
x_25 = lean_nat_dec_lt(x_23, x_24);
if (x_25 == 0)
{
lean_dec_ref(x_4);
return x_5;
}
else
{
lean_object* x_26; 
x_26 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(x_5, x_4);
lean_dec_ref(x_4);
return x_26;
}
}
else
{
lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_27 = lean_unsigned_to_nat(4u);
x_28 = lean_nat_add(x_3, x_27);
x_29 = lean_nat_dec_lt(x_21, x_28);
lean_dec(x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; uint32_t x_32; lean_object* x_33; lean_object* x_34; uint32_t x_35; uint32_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint32_t x_41; lean_object* x_42; 
x_30 = lean_ctor_get(x_1, 0);
x_31 = lean_ctor_get(x_1, 1);
x_32 = lean_ctor_get_uint32(x_1, sizeof(void*)*3);
x_33 = lean_ctor_get(x_1, 2);
x_34 = lean_unsigned_to_nat(8u);
x_35 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_hashBytes(x_2, x_3, x_27);
x_36 = lean_uint32_land(x_35, x_32);
x_37 = lean_uint32_to_nat(x_36);
x_38 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Encoder_buildSourceIndex_spec__0___redArg___boxed__const__1;
x_39 = lean_array_get_borrowed(x_38, x_30, x_37);
lean_dec(x_37);
x_40 = lean_box(0);
x_41 = lean_unbox_uint32(x_39);
x_42 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findBestMatchRec(x_33, x_31, x_2, x_3, x_41, x_34, x_40);
if (lean_obj_tag(x_42) == 0)
{
goto block_20;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_56; uint8_t x_62; 
x_43 = lean_ctor_get(x_42, 0);
lean_inc(x_43);
lean_dec_ref(x_42);
x_44 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyBestMatch(x_1, x_2, x_3, x_43);
lean_inc(x_3);
x_45 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_trimMatch(x_44, x_3);
x_46 = lean_ctor_get(x_45, 0);
lean_inc(x_46);
x_47 = lean_ctor_get(x_45, 1);
lean_inc(x_47);
x_48 = lean_ctor_get(x_45, 2);
lean_inc(x_48);
lean_dec_ref(x_45);
x_62 = lean_nat_dec_lt(x_48, x_27);
if (x_62 == 0)
{
uint8_t x_63; 
x_63 = lean_nat_dec_lt(x_3, x_47);
if (x_63 == 0)
{
lean_dec(x_3);
x_56 = x_4;
goto block_61;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_64 = l_ByteArray_extract(x_2, x_3, x_47);
x_65 = lean_unsigned_to_nat(0u);
x_66 = lean_byte_array_size(x_4);
x_67 = lean_byte_array_size(x_64);
x_68 = lean_byte_array_copy_slice(x_64, x_65, x_4, x_66, x_67, x_62);
lean_dec_ref(x_64);
x_56 = x_68;
goto block_61;
}
}
else
{
lean_object* x_69; lean_object* x_70; uint8_t x_71; 
lean_dec(x_48);
lean_dec(x_47);
lean_dec(x_46);
x_69 = lean_unsigned_to_nat(1u);
x_70 = lean_nat_add(x_3, x_69);
if (x_22 == 0)
{
uint8_t x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
lean_dec(x_3);
x_75 = l_instInhabitedUInt8;
x_76 = lean_box(x_75);
x_77 = l_outOfBounds___redArg(x_76);
x_78 = lean_unbox(x_77);
lean_dec(x_77);
x_71 = x_78;
goto block_74;
}
else
{
uint8_t x_79; 
x_79 = lean_byte_array_fget(x_2, x_3);
lean_dec(x_3);
x_71 = x_79;
goto block_74;
}
block_74:
{
lean_object* x_72; 
x_72 = lean_byte_array_push(x_4, x_71);
x_3 = x_70;
x_4 = x_72;
goto _start;
}
}
block_55:
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
lean_inc(x_48);
x_50 = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(x_50, 0, x_46);
lean_ctor_set(x_50, 1, x_48);
x_51 = lean_array_push(x_49, x_50);
x_52 = lean_nat_add(x_47, x_48);
lean_dec(x_48);
lean_dec(x_47);
x_53 = l_ByteArray_empty;
x_3 = x_52;
x_4 = x_53;
x_5 = x_51;
goto _start;
}
block_61:
{
lean_object* x_57; lean_object* x_58; uint8_t x_59; 
x_57 = lean_unsigned_to_nat(0u);
x_58 = lean_byte_array_size(x_56);
x_59 = lean_nat_dec_lt(x_57, x_58);
if (x_59 == 0)
{
lean_dec_ref(x_56);
x_49 = x_5;
goto block_55;
}
else
{
lean_object* x_60; 
x_60 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_emitAddWithRuns(x_5, x_56);
lean_dec_ref(x_56);
x_49 = x_60;
goto block_55;
}
}
}
}
else
{
goto block_20;
}
}
block_10:
{
lean_object* x_8; 
x_8 = lean_byte_array_push(x_4, x_7);
x_3 = x_6;
x_4 = x_8;
goto _start;
}
block_20:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_3, x_11);
x_13 = lean_byte_array_size(x_2);
x_14 = lean_nat_dec_lt(x_3, x_13);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_3);
x_15 = l_instInhabitedUInt8;
x_16 = lean_box(x_15);
x_17 = l_outOfBounds___redArg(x_16);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
x_6 = x_12;
x_7 = x_18;
goto block_10;
}
else
{
uint8_t x_19; 
x_19 = lean_byte_array_fget(x_2, x_3);
lean_dec(x_3);
x_6 = x_12;
x_7 = x_19;
goto block_10;
}
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = l_ByteArray_empty;
x_5 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructions___closed__0);
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_generateInstructionsLoop(x_1, x_2, x_3, x_4, x_5);
return x_6;
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_15; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_3);
lean_dec_ref(x_1);
x_4 = lean_unsigned_to_nat(1u);
x_5 = lean_byte_array_size(x_3);
lean_dec_ref(x_3);
x_15 = lean_nat_dec_le(x_4, x_5);
if (x_15 == 0)
{
x_6 = x_15;
goto block_14;
}
else
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_unsigned_to_nat(17u);
x_17 = lean_nat_dec_le(x_5, x_16);
x_6 = x_17;
goto block_14;
}
block_14:
{
if (x_6 == 0)
{
lean_object* x_7; 
x_7 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__0);
return x_7;
}
else
{
lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_8 = lean_nat_add(x_4, x_5);
x_9 = lean_uint8_of_nat(x_8);
lean_dec(x_8);
x_10 = 0;
x_11 = lean_box(x_9);
x_12 = lean_box(x_10);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_11);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
}
}
case 1:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; uint8_t x_41; 
x_18 = lean_ctor_get(x_1, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_19 = x_1;
} else {
 lean_dec_ref(x_1);
 x_19 = lean_box(0);
}
x_20 = lean_unsigned_to_nat(19u);
x_21 = lean_unsigned_to_nat(16u);
x_22 = lean_nat_mul(x_2, x_21);
x_23 = lean_nat_add(x_20, x_22);
lean_dec(x_22);
x_24 = lean_unsigned_to_nat(4u);
x_41 = lean_nat_dec_le(x_24, x_18);
if (x_41 == 0)
{
x_25 = x_41;
goto block_40;
}
else
{
lean_object* x_42; uint8_t x_43; 
x_42 = lean_unsigned_to_nat(18u);
x_43 = lean_nat_dec_le(x_18, x_42);
x_25 = x_43;
goto block_40;
}
block_40:
{
if (x_25 == 0)
{
uint8_t x_26; uint8_t x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; 
lean_dec(x_18);
x_26 = 1;
x_27 = lean_uint8_of_nat(x_23);
lean_dec(x_23);
x_28 = lean_box(x_27);
x_29 = lean_box(x_26);
if (lean_is_scalar(x_19)) {
 x_30 = lean_alloc_ctor(0, 2, 0);
} else {
 x_30 = x_19;
 lean_ctor_set_tag(x_30, 0);
}
lean_ctor_set(x_30, 0, x_28);
lean_ctor_set(x_30, 1, x_29);
return x_30;
}
else
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; uint8_t x_35; uint8_t x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; 
x_31 = lean_nat_add(x_23, x_18);
lean_dec(x_18);
lean_dec(x_23);
x_32 = lean_nat_sub(x_31, x_24);
lean_dec(x_31);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_32, x_33);
lean_dec(x_32);
x_35 = lean_uint8_of_nat(x_34);
lean_dec(x_34);
x_36 = 0;
x_37 = lean_box(x_35);
x_38 = lean_box(x_36);
if (lean_is_scalar(x_19)) {
 x_39 = lean_alloc_ctor(0, 2, 0);
} else {
 x_39 = x_19;
 lean_ctor_set_tag(x_39, 0);
}
lean_ctor_set(x_39, 0, x_37);
lean_ctor_set(x_39, 1, x_38);
return x_39;
}
}
}
default: 
{
lean_object* x_44; 
lean_dec_ref(x_1);
x_44 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode___closed__1);
return x_44;
}
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; uint8_t x_10; 
x_9 = lean_array_get_size(x_1);
x_10 = lean_nat_dec_lt(x_2, x_9);
if (x_10 == 0)
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_unsigned_to_nat(0u);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_8);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_7);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_14, 0, x_6);
lean_ctor_set(x_14, 1, x_13);
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_5);
lean_ctor_set(x_15, 1, x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_4);
lean_ctor_set(x_16, 1, x_15);
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lean_array_fget(x_1, x_2);
switch (lean_obj_tag(x_17)) {
case 0:
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_47; uint8_t x_48; 
x_18 = lean_ctor_get(x_17, 0);
lean_inc_ref(x_18);
x_19 = lean_unsigned_to_nat(1u);
x_47 = lean_nat_add(x_2, x_19);
x_48 = lean_nat_dec_lt(x_47, x_9);
if (x_48 == 0)
{
lean_dec(x_47);
goto block_46;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default;
x_50 = lean_array_get(x_49, x_1, x_47);
lean_dec(x_47);
if (lean_obj_tag(x_50) == 1)
{
uint8_t x_51; 
x_51 = !lean_is_exclusive(x_50);
if (x_51 == 0)
{
lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; 
x_52 = lean_ctor_get(x_50, 0);
x_53 = lean_ctor_get(x_50, 1);
x_54 = lean_nat_add(x_3, x_8);
x_55 = lean_byte_array_size(x_18);
x_56 = lean_nat_add(x_54, x_55);
lean_dec(x_54);
lean_inc_ref(x_7);
x_57 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(x_7, x_52, x_56);
lean_dec(x_56);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
lean_object* x_59; uint8_t x_60; 
x_59 = lean_ctor_get(x_57, 1);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_57, 0);
x_62 = lean_ctor_get(x_59, 0);
x_63 = lean_ctor_get(x_59, 1);
x_64 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_55, x_53, x_61);
lean_dec(x_61);
if (lean_obj_tag(x_64) == 0)
{
lean_free_object(x_59);
lean_dec(x_63);
lean_dec(x_62);
lean_free_object(x_57);
lean_free_object(x_50);
lean_dec(x_53);
goto block_46;
}
else
{
lean_object* x_65; uint8_t x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
lean_dec_ref(x_17);
lean_dec_ref(x_7);
x_65 = lean_ctor_get(x_64, 0);
lean_inc(x_65);
lean_dec_ref(x_64);
x_66 = lean_unbox(x_65);
lean_dec(x_65);
x_67 = lean_byte_array_push(x_5, x_66);
x_68 = lean_unsigned_to_nat(0u);
x_69 = lean_byte_array_size(x_4);
x_70 = 0;
x_71 = lean_byte_array_copy_slice(x_18, x_68, x_4, x_69, x_55, x_70);
lean_dec_ref(x_18);
x_72 = lean_byte_array_size(x_6);
x_73 = lean_byte_array_size(x_62);
x_74 = lean_byte_array_copy_slice(x_62, x_68, x_6, x_72, x_73, x_70);
lean_dec(x_62);
x_75 = lean_nat_add(x_8, x_55);
lean_dec(x_8);
x_76 = lean_nat_add(x_75, x_53);
lean_dec(x_53);
lean_dec(x_75);
x_77 = lean_unsigned_to_nat(2u);
lean_ctor_set(x_59, 1, x_77);
lean_ctor_set(x_59, 0, x_76);
lean_ctor_set(x_57, 0, x_63);
lean_ctor_set_tag(x_50, 0);
lean_ctor_set(x_50, 1, x_57);
lean_ctor_set(x_50, 0, x_74);
x_78 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_78, 0, x_67);
lean_ctor_set(x_78, 1, x_50);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_71);
lean_ctor_set(x_79, 1, x_78);
return x_79;
}
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
x_80 = lean_ctor_get(x_57, 0);
x_81 = lean_ctor_get(x_59, 0);
x_82 = lean_ctor_get(x_59, 1);
lean_inc(x_82);
lean_inc(x_81);
lean_dec(x_59);
x_83 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_55, x_53, x_80);
lean_dec(x_80);
if (lean_obj_tag(x_83) == 0)
{
lean_dec(x_82);
lean_dec(x_81);
lean_free_object(x_57);
lean_free_object(x_50);
lean_dec(x_53);
goto block_46;
}
else
{
lean_object* x_84; uint8_t x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; uint8_t x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; 
lean_dec_ref(x_17);
lean_dec_ref(x_7);
x_84 = lean_ctor_get(x_83, 0);
lean_inc(x_84);
lean_dec_ref(x_83);
x_85 = lean_unbox(x_84);
lean_dec(x_84);
x_86 = lean_byte_array_push(x_5, x_85);
x_87 = lean_unsigned_to_nat(0u);
x_88 = lean_byte_array_size(x_4);
x_89 = 0;
x_90 = lean_byte_array_copy_slice(x_18, x_87, x_4, x_88, x_55, x_89);
lean_dec_ref(x_18);
x_91 = lean_byte_array_size(x_6);
x_92 = lean_byte_array_size(x_81);
x_93 = lean_byte_array_copy_slice(x_81, x_87, x_6, x_91, x_92, x_89);
lean_dec(x_81);
x_94 = lean_nat_add(x_8, x_55);
lean_dec(x_8);
x_95 = lean_nat_add(x_94, x_53);
lean_dec(x_53);
lean_dec(x_94);
x_96 = lean_unsigned_to_nat(2u);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_96);
lean_ctor_set(x_57, 1, x_97);
lean_ctor_set(x_57, 0, x_82);
lean_ctor_set_tag(x_50, 0);
lean_ctor_set(x_50, 1, x_57);
lean_ctor_set(x_50, 0, x_93);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_86);
lean_ctor_set(x_98, 1, x_50);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_90);
lean_ctor_set(x_99, 1, x_98);
return x_99;
}
}
}
else
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; 
x_100 = lean_ctor_get(x_57, 1);
x_101 = lean_ctor_get(x_57, 0);
lean_inc(x_100);
lean_inc(x_101);
lean_dec(x_57);
x_102 = lean_ctor_get(x_100, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_100, 1);
lean_inc(x_103);
if (lean_is_exclusive(x_100)) {
 lean_ctor_release(x_100, 0);
 lean_ctor_release(x_100, 1);
 x_104 = x_100;
} else {
 lean_dec_ref(x_100);
 x_104 = lean_box(0);
}
x_105 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_55, x_53, x_101);
lean_dec(x_101);
if (lean_obj_tag(x_105) == 0)
{
lean_dec(x_104);
lean_dec(x_103);
lean_dec(x_102);
lean_free_object(x_50);
lean_dec(x_53);
goto block_46;
}
else
{
lean_object* x_106; uint8_t x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; uint8_t x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; 
lean_dec_ref(x_17);
lean_dec_ref(x_7);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
lean_dec_ref(x_105);
x_107 = lean_unbox(x_106);
lean_dec(x_106);
x_108 = lean_byte_array_push(x_5, x_107);
x_109 = lean_unsigned_to_nat(0u);
x_110 = lean_byte_array_size(x_4);
x_111 = 0;
x_112 = lean_byte_array_copy_slice(x_18, x_109, x_4, x_110, x_55, x_111);
lean_dec_ref(x_18);
x_113 = lean_byte_array_size(x_6);
x_114 = lean_byte_array_size(x_102);
x_115 = lean_byte_array_copy_slice(x_102, x_109, x_6, x_113, x_114, x_111);
lean_dec(x_102);
x_116 = lean_nat_add(x_8, x_55);
lean_dec(x_8);
x_117 = lean_nat_add(x_116, x_53);
lean_dec(x_53);
lean_dec(x_116);
x_118 = lean_unsigned_to_nat(2u);
if (lean_is_scalar(x_104)) {
 x_119 = lean_alloc_ctor(0, 2, 0);
} else {
 x_119 = x_104;
}
lean_ctor_set(x_119, 0, x_117);
lean_ctor_set(x_119, 1, x_118);
x_120 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_120, 0, x_103);
lean_ctor_set(x_120, 1, x_119);
lean_ctor_set_tag(x_50, 0);
lean_ctor_set(x_50, 1, x_120);
lean_ctor_set(x_50, 0, x_115);
x_121 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_121, 0, x_108);
lean_ctor_set(x_121, 1, x_50);
x_122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_122, 0, x_112);
lean_ctor_set(x_122, 1, x_121);
return x_122;
}
}
}
else
{
lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_123 = lean_ctor_get(x_50, 0);
x_124 = lean_ctor_get(x_50, 1);
lean_inc(x_124);
lean_inc(x_123);
lean_dec(x_50);
x_125 = lean_nat_add(x_3, x_8);
x_126 = lean_byte_array_size(x_18);
x_127 = lean_nat_add(x_125, x_126);
lean_dec(x_125);
lean_inc_ref(x_7);
x_128 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(x_7, x_123, x_127);
lean_dec(x_127);
x_129 = lean_ctor_get(x_128, 1);
lean_inc(x_129);
x_130 = lean_ctor_get(x_128, 0);
lean_inc(x_130);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 lean_ctor_release(x_128, 1);
 x_131 = x_128;
} else {
 lean_dec_ref(x_128);
 x_131 = lean_box(0);
}
x_132 = lean_ctor_get(x_129, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_129, 1);
lean_inc(x_133);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 lean_ctor_release(x_129, 1);
 x_134 = x_129;
} else {
 lean_dec_ref(x_129);
 x_134 = lean_box(0);
}
x_135 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findAddCopyOpcode(x_126, x_124, x_130);
lean_dec(x_130);
if (lean_obj_tag(x_135) == 0)
{
lean_dec(x_134);
lean_dec(x_133);
lean_dec(x_132);
lean_dec(x_131);
lean_dec(x_124);
goto block_46;
}
else
{
lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec_ref(x_17);
lean_dec_ref(x_7);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
lean_dec_ref(x_135);
x_137 = lean_unbox(x_136);
lean_dec(x_136);
x_138 = lean_byte_array_push(x_5, x_137);
x_139 = lean_unsigned_to_nat(0u);
x_140 = lean_byte_array_size(x_4);
x_141 = 0;
x_142 = lean_byte_array_copy_slice(x_18, x_139, x_4, x_140, x_126, x_141);
lean_dec_ref(x_18);
x_143 = lean_byte_array_size(x_6);
x_144 = lean_byte_array_size(x_132);
x_145 = lean_byte_array_copy_slice(x_132, x_139, x_6, x_143, x_144, x_141);
lean_dec(x_132);
x_146 = lean_nat_add(x_8, x_126);
lean_dec(x_8);
x_147 = lean_nat_add(x_146, x_124);
lean_dec(x_124);
lean_dec(x_146);
x_148 = lean_unsigned_to_nat(2u);
if (lean_is_scalar(x_134)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_134;
}
lean_ctor_set(x_149, 0, x_147);
lean_ctor_set(x_149, 1, x_148);
if (lean_is_scalar(x_131)) {
 x_150 = lean_alloc_ctor(0, 2, 0);
} else {
 x_150 = x_131;
}
lean_ctor_set(x_150, 0, x_133);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_145);
lean_ctor_set(x_151, 1, x_150);
x_152 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_152, 0, x_138);
lean_ctor_set(x_152, 1, x_151);
x_153 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_153, 0, x_142);
lean_ctor_set(x_153, 1, x_152);
return x_153;
}
}
}
else
{
lean_dec(x_50);
goto block_46;
}
}
block_32:
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; 
x_21 = lean_unsigned_to_nat(0u);
x_22 = lean_byte_array_size(x_4);
x_23 = lean_byte_array_size(x_18);
x_24 = 0;
x_25 = lean_byte_array_copy_slice(x_18, x_21, x_4, x_22, x_23, x_24);
lean_dec_ref(x_18);
x_26 = lean_nat_add(x_8, x_23);
lean_dec(x_8);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_19);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_7);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_6);
lean_ctor_set(x_29, 1, x_28);
x_30 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_30, 0, x_20);
lean_ctor_set(x_30, 1, x_29);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_25);
lean_ctor_set(x_31, 1, x_30);
return x_31;
}
block_46:
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; uint8_t x_39; 
x_33 = lean_unsigned_to_nat(0u);
x_34 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(x_17, x_33);
x_35 = lean_ctor_get(x_34, 0);
lean_inc(x_35);
x_36 = lean_ctor_get(x_34, 1);
lean_inc(x_36);
lean_dec_ref(x_34);
x_37 = lean_unbox(x_35);
lean_dec(x_35);
x_38 = lean_byte_array_push(x_5, x_37);
x_39 = lean_unbox(x_36);
lean_dec(x_36);
if (x_39 == 0)
{
x_20 = x_38;
goto block_32;
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; 
x_40 = lean_byte_array_size(x_18);
x_41 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_40);
x_42 = lean_byte_array_size(x_38);
x_43 = lean_byte_array_size(x_41);
x_44 = 0;
x_45 = lean_byte_array_copy_slice(x_41, x_33, x_38, x_42, x_43, x_44);
lean_dec_ref(x_41);
x_20 = x_45;
goto block_32;
}
}
}
case 1:
{
lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_191; lean_object* x_239; uint8_t x_240; 
x_154 = lean_ctor_get(x_17, 0);
x_155 = lean_ctor_get(x_17, 1);
lean_inc(x_155);
x_156 = lean_nat_add(x_3, x_8);
lean_inc(x_154);
x_157 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(x_7, x_154, x_156);
lean_dec(x_156);
x_158 = lean_ctor_get(x_157, 1);
lean_inc(x_158);
x_159 = lean_ctor_get(x_157, 0);
lean_inc(x_159);
if (lean_is_exclusive(x_157)) {
 lean_ctor_release(x_157, 0);
 lean_ctor_release(x_157, 1);
 x_160 = x_157;
} else {
 lean_dec_ref(x_157);
 x_160 = lean_box(0);
}
x_161 = lean_ctor_get(x_158, 0);
lean_inc(x_161);
x_162 = lean_ctor_get(x_158, 1);
lean_inc(x_162);
if (lean_is_exclusive(x_158)) {
 lean_ctor_release(x_158, 0);
 lean_ctor_release(x_158, 1);
 x_163 = x_158;
} else {
 lean_dec_ref(x_158);
 x_163 = lean_box(0);
}
x_239 = lean_unsigned_to_nat(4u);
x_240 = lean_nat_dec_eq(x_155, x_239);
if (x_240 == 0)
{
x_191 = x_240;
goto block_238;
}
else
{
lean_object* x_241; lean_object* x_242; uint8_t x_243; 
x_241 = lean_unsigned_to_nat(1u);
x_242 = lean_nat_add(x_2, x_241);
x_243 = lean_nat_dec_lt(x_242, x_9);
lean_dec(x_242);
x_191 = x_243;
goto block_238;
}
block_177:
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; uint8_t x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; 
x_165 = lean_unsigned_to_nat(0u);
x_166 = lean_byte_array_size(x_6);
x_167 = lean_byte_array_size(x_161);
x_168 = 0;
x_169 = lean_byte_array_copy_slice(x_161, x_165, x_6, x_166, x_167, x_168);
lean_dec(x_161);
x_170 = lean_nat_add(x_8, x_155);
lean_dec(x_155);
lean_dec(x_8);
x_171 = lean_unsigned_to_nat(1u);
if (lean_is_scalar(x_163)) {
 x_172 = lean_alloc_ctor(0, 2, 0);
} else {
 x_172 = x_163;
}
lean_ctor_set(x_172, 0, x_170);
lean_ctor_set(x_172, 1, x_171);
if (lean_is_scalar(x_160)) {
 x_173 = lean_alloc_ctor(0, 2, 0);
} else {
 x_173 = x_160;
}
lean_ctor_set(x_173, 0, x_162);
lean_ctor_set(x_173, 1, x_172);
x_174 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_174, 0, x_169);
lean_ctor_set(x_174, 1, x_173);
x_175 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_175, 0, x_164);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_176, 0, x_4);
lean_ctor_set(x_176, 1, x_175);
return x_176;
}
block_190:
{
lean_object* x_178; lean_object* x_179; lean_object* x_180; uint8_t x_181; lean_object* x_182; uint8_t x_183; 
x_178 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(x_17, x_159);
lean_dec(x_159);
x_179 = lean_ctor_get(x_178, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_178, 1);
lean_inc(x_180);
lean_dec_ref(x_178);
x_181 = lean_unbox(x_179);
lean_dec(x_179);
x_182 = lean_byte_array_push(x_5, x_181);
x_183 = lean_unbox(x_180);
lean_dec(x_180);
if (x_183 == 0)
{
x_164 = x_182;
goto block_177;
}
else
{
lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; uint8_t x_188; lean_object* x_189; 
x_184 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_155);
x_185 = lean_unsigned_to_nat(0u);
x_186 = lean_byte_array_size(x_182);
x_187 = lean_byte_array_size(x_184);
x_188 = 0;
x_189 = lean_byte_array_copy_slice(x_184, x_185, x_182, x_186, x_187, x_188);
lean_dec_ref(x_184);
x_164 = x_189;
goto block_177;
}
}
block_238:
{
if (x_191 == 0)
{
goto block_190;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; 
x_192 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default;
x_193 = lean_unsigned_to_nat(1u);
x_194 = lean_nat_add(x_2, x_193);
x_195 = lean_array_get_borrowed(x_192, x_1, x_194);
lean_dec(x_194);
if (lean_obj_tag(x_195) == 0)
{
lean_object* x_196; lean_object* x_197; uint8_t x_198; 
x_196 = lean_ctor_get(x_195, 0);
x_197 = lean_byte_array_size(x_196);
x_198 = lean_nat_dec_eq(x_197, x_193);
if (x_198 == 0)
{
goto block_190;
}
else
{
lean_object* x_199; 
x_199 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findCopyAddOpcode(x_155, x_159, x_197);
if (lean_obj_tag(x_199) == 0)
{
goto block_190;
}
else
{
uint8_t x_200; 
lean_dec(x_163);
lean_dec(x_160);
lean_dec(x_159);
x_200 = !lean_is_exclusive(x_17);
if (x_200 == 0)
{
lean_object* x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint8_t x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; 
x_201 = lean_ctor_get(x_17, 1);
lean_dec(x_201);
x_202 = lean_ctor_get(x_17, 0);
lean_dec(x_202);
x_203 = lean_ctor_get(x_199, 0);
lean_inc(x_203);
lean_dec_ref(x_199);
x_204 = lean_unbox(x_203);
lean_dec(x_203);
x_205 = lean_byte_array_push(x_5, x_204);
x_206 = lean_unsigned_to_nat(0u);
x_207 = lean_byte_array_size(x_4);
x_208 = 0;
x_209 = lean_byte_array_copy_slice(x_196, x_206, x_4, x_207, x_197, x_208);
x_210 = lean_byte_array_size(x_6);
x_211 = lean_byte_array_size(x_161);
x_212 = lean_byte_array_copy_slice(x_161, x_206, x_6, x_210, x_211, x_208);
lean_dec(x_161);
x_213 = lean_nat_add(x_8, x_155);
lean_dec(x_155);
lean_dec(x_8);
x_214 = lean_nat_add(x_213, x_197);
lean_dec(x_213);
x_215 = lean_unsigned_to_nat(2u);
lean_ctor_set_tag(x_17, 0);
lean_ctor_set(x_17, 1, x_215);
lean_ctor_set(x_17, 0, x_214);
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_162);
lean_ctor_set(x_216, 1, x_17);
x_217 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_217, 0, x_212);
lean_ctor_set(x_217, 1, x_216);
x_218 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_218, 0, x_205);
lean_ctor_set(x_218, 1, x_217);
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_209);
lean_ctor_set(x_219, 1, x_218);
return x_219;
}
else
{
lean_object* x_220; uint8_t x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; uint8_t x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; 
lean_dec(x_17);
x_220 = lean_ctor_get(x_199, 0);
lean_inc(x_220);
lean_dec_ref(x_199);
x_221 = lean_unbox(x_220);
lean_dec(x_220);
x_222 = lean_byte_array_push(x_5, x_221);
x_223 = lean_unsigned_to_nat(0u);
x_224 = lean_byte_array_size(x_4);
x_225 = 0;
x_226 = lean_byte_array_copy_slice(x_196, x_223, x_4, x_224, x_197, x_225);
x_227 = lean_byte_array_size(x_6);
x_228 = lean_byte_array_size(x_161);
x_229 = lean_byte_array_copy_slice(x_161, x_223, x_6, x_227, x_228, x_225);
lean_dec(x_161);
x_230 = lean_nat_add(x_8, x_155);
lean_dec(x_155);
lean_dec(x_8);
x_231 = lean_nat_add(x_230, x_197);
lean_dec(x_230);
x_232 = lean_unsigned_to_nat(2u);
x_233 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_233, 0, x_231);
lean_ctor_set(x_233, 1, x_232);
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_162);
lean_ctor_set(x_234, 1, x_233);
x_235 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_235, 0, x_229);
lean_ctor_set(x_235, 1, x_234);
x_236 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_236, 0, x_222);
lean_ctor_set(x_236, 1, x_235);
x_237 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_237, 0, x_226);
lean_ctor_set(x_237, 1, x_236);
return x_237;
}
}
}
}
else
{
goto block_190;
}
}
}
}
default: 
{
uint8_t x_244; lean_object* x_245; lean_object* x_246; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; uint8_t x_260; lean_object* x_261; uint8_t x_262; 
x_244 = lean_ctor_get_uint8(x_17, sizeof(void*)*1);
x_245 = lean_ctor_get(x_17, 0);
lean_inc(x_245);
x_256 = lean_unsigned_to_nat(0u);
x_257 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_findSingleOpcode(x_17, x_256);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
lean_dec_ref(x_257);
x_260 = lean_unbox(x_258);
lean_dec(x_258);
x_261 = lean_byte_array_push(x_5, x_260);
x_262 = lean_unbox(x_259);
lean_dec(x_259);
if (x_262 == 0)
{
x_246 = x_261;
goto block_255;
}
else
{
lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; lean_object* x_267; 
x_263 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_245);
x_264 = lean_byte_array_size(x_261);
x_265 = lean_byte_array_size(x_263);
x_266 = 0;
x_267 = lean_byte_array_copy_slice(x_263, x_256, x_261, x_264, x_265, x_266);
lean_dec_ref(x_263);
x_246 = x_267;
goto block_255;
}
block_255:
{
lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; 
x_247 = lean_byte_array_push(x_4, x_244);
x_248 = lean_nat_add(x_8, x_245);
lean_dec(x_245);
lean_dec(x_8);
x_249 = lean_unsigned_to_nat(1u);
x_250 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_250, 0, x_248);
lean_ctor_set(x_250, 1, x_249);
x_251 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_251, 0, x_7);
lean_ctor_set(x_251, 1, x_250);
x_252 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_252, 0, x_6);
lean_ctor_set(x_252, 1, x_251);
x_253 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_253, 0, x_246);
lean_ctor_set(x_253, 1, x_252);
x_254 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_254, 0, x_247);
lean_ctor_set(x_254, 1, x_253);
return x_254;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_3);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; uint8_t x_11; 
x_10 = lean_unsigned_to_nat(0u);
x_11 = lean_nat_dec_eq(x_8, x_10);
if (x_11 == 1)
{
lean_object* x_12; lean_object* x_13; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec_ref(x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_4);
lean_ctor_set(x_12, 1, x_5);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_3);
lean_ctor_set(x_13, 1, x_12);
return x_13;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_array_get_size(x_1);
x_15 = lean_nat_dec_le(x_14, x_9);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_16 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeOneInst_x27(x_1, x_9, x_2, x_3, x_4, x_5, x_6, x_7);
x_17 = lean_ctor_get(x_16, 1);
lean_inc(x_17);
x_18 = lean_ctor_get(x_17, 1);
lean_inc(x_18);
x_19 = lean_ctor_get(x_18, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_19, 1);
lean_inc(x_20);
x_21 = lean_ctor_get(x_16, 0);
lean_inc(x_21);
lean_dec_ref(x_16);
x_22 = lean_ctor_get(x_17, 0);
lean_inc(x_22);
lean_dec(x_17);
x_23 = lean_ctor_get(x_18, 0);
lean_inc(x_23);
lean_dec(x_18);
x_24 = lean_ctor_get(x_19, 0);
lean_inc(x_24);
lean_dec(x_19);
x_25 = lean_ctor_get(x_20, 0);
lean_inc(x_25);
x_26 = lean_ctor_get(x_20, 1);
lean_inc(x_26);
lean_dec(x_20);
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_8, x_27);
lean_dec(x_8);
x_29 = lean_nat_add(x_9, x_26);
lean_dec(x_26);
lean_dec(x_9);
x_3 = x_21;
x_4 = x_22;
x_5 = x_23;
x_6 = x_24;
x_7 = x_25;
x_8 = x_28;
x_9 = x_29;
goto _start;
}
else
{
lean_object* x_31; lean_object* x_32; 
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec_ref(x_6);
x_31 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_31, 0, x_4);
lean_ctor_set(x_31, 1, x_5);
x_32 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_32, 0, x_3);
lean_ctor_set(x_32, 1, x_31);
return x_32;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8, lean_object* x_9) {
_start:
{
lean_object* x_10; 
x_10 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8, x_9);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_10;
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_3 = l_ByteArray_empty;
x_4 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___closed__0);
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_array_get_size(x_1);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindowLoop(x_1, x_2, x_3, x_3, x_3, x_4, x_5, x_6, x_5);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(x_1, x_2);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_3;
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
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encodeWindow(x_5, x_6);
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
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst_default);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_instInhabitedRawInst);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_minRunLength);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_lazyThreshold);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
