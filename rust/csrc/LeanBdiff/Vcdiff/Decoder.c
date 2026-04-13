// Lean compiler output
// Module: LeanBdiff.Vcdiff.Decoder
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_size(lean_object*);
extern uint8_t l_instInhabitedUInt8;
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__2;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0;
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(lean_object*);
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "secondary compression"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "custom code table"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7_value;
uint8_t lean_uint8_land(uint8_t, uint8_t);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
extern lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_magic;
uint8_t l_ByteArray_instBEq_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader(lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0_value;
uint8_t lean_uint8_lor(uint8_t, uint8_t);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__1;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 40, .m_capacity = 40, .m_length = 39, .m_data = "secondary compression on delta sections"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__3_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__3_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__4_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__4_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "VCD_TARGET"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__6_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__6_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__7 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__7_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__7_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__8 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__8_value;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_byte_array_push(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Id_instMonad___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__0, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__0_value;
lean_object* l_Id_instMonad___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__1___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__1_value;
lean_object* l_Id_instMonad___lam__2___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__2___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__2_value;
lean_object* l_Id_instMonad___lam__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__3, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__3_value;
lean_object* l_Id_instMonad___lam__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__4___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__4_value;
lean_object* l_Id_instMonad___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__5___boxed, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__5_value;
lean_object* l_Id_instMonad___lam__6(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)l_Id_instMonad___lam__6, .m_arity = 4, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__6_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__0_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__1_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__7 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__7_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*5 + 0, .m_other = 5, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__7_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__2_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__3_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__4_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__5_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__8 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__8_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__8_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__6_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9_value;
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0_value;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0_value;
uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(lean_object*, lean_object*);
extern lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
extern lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(lean_object*, lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__0;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__1_value;
lean_object* lean_mk_empty_byte_array(lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
extern lean_object* l_ByteArray_empty;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___boxed(lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows___closed__0_value;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decode___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___redArg(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_5;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__2(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__1;
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__2;
x_3 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_3, 0, x_1);
lean_ctor_set(x_3, 1, x_2);
return x_3;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32(lean_object* x_1) {
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
x_6 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0);
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___redArg(x_1, x_5, x_6, x_3);
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___boxed(lean_object* x_1) {
_start:
{
uint32_t x_2; lean_object* x_3; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32(x_1);
lean_dec_ref(x_1);
x_3 = lean_box_uint32(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___redArg(x_1, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_adler32_spec__0(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; uint8_t x_5; lean_object* x_6; uint8_t x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; uint8_t x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; lean_object* x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; uint8_t x_59; lean_object* x_71; uint8_t x_72; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_4 = x_1;
} else {
 lean_dec_ref(x_1);
 x_4 = lean_box(0);
}
x_71 = lean_byte_array_size(x_2);
x_72 = lean_nat_dec_lt(x_3, x_71);
if (x_72 == 0)
{
lean_object* x_73; 
lean_dec(x_4);
lean_dec(x_3);
lean_dec_ref(x_2);
x_73 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_73;
}
else
{
if (x_72 == 0)
{
uint8_t x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_74 = l_instInhabitedUInt8;
x_75 = lean_box(x_74);
x_76 = l_outOfBounds___redArg(x_75);
x_77 = lean_unbox(x_76);
lean_dec(x_76);
x_59 = x_77;
goto block_70;
}
else
{
uint8_t x_78; 
x_78 = lean_byte_array_fget(x_2, x_3);
x_59 = x_78;
goto block_70;
}
}
block_29:
{
lean_object* x_11; lean_object* x_12; uint32_t x_13; uint32_t x_14; uint32_t x_15; uint32_t x_16; uint32_t x_17; uint32_t x_18; uint32_t x_19; uint32_t x_20; uint32_t x_21; uint32_t x_22; uint32_t x_23; uint32_t x_24; uint32_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_11 = lean_nat_add(x_6, x_8);
lean_dec(x_6);
if (lean_is_scalar(x_4)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_4;
}
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_uint8_to_uint32(x_9);
x_14 = 24;
x_15 = lean_uint32_shift_left(x_13, x_14);
x_16 = lean_uint8_to_uint32(x_7);
x_17 = 16;
x_18 = lean_uint32_shift_left(x_16, x_17);
x_19 = lean_uint32_lor(x_15, x_18);
x_20 = lean_uint8_to_uint32(x_5);
x_21 = 8;
x_22 = lean_uint32_shift_left(x_20, x_21);
x_23 = lean_uint32_lor(x_19, x_22);
x_24 = lean_uint8_to_uint32(x_10);
x_25 = lean_uint32_lor(x_23, x_24);
x_26 = lean_box_uint32(x_25);
x_27 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_27, 0, x_26);
lean_ctor_set(x_27, 1, x_12);
x_28 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
block_44:
{
lean_object* x_35; lean_object* x_36; uint8_t x_37; 
x_35 = lean_nat_add(x_32, x_31);
lean_dec(x_32);
x_36 = lean_byte_array_size(x_2);
x_37 = lean_nat_dec_lt(x_35, x_36);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_35);
lean_dec(x_4);
lean_dec_ref(x_2);
x_38 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_38;
}
else
{
if (x_37 == 0)
{
uint8_t x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = l_instInhabitedUInt8;
x_40 = lean_box(x_39);
x_41 = l_outOfBounds___redArg(x_40);
x_42 = lean_unbox(x_41);
lean_dec(x_41);
x_5 = x_34;
x_6 = x_35;
x_7 = x_30;
x_8 = x_31;
x_9 = x_33;
x_10 = x_42;
goto block_29;
}
else
{
uint8_t x_43; 
x_43 = lean_byte_array_fget(x_2, x_35);
x_5 = x_34;
x_6 = x_35;
x_7 = x_30;
x_8 = x_31;
x_9 = x_33;
x_10 = x_43;
goto block_29;
}
}
}
block_58:
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_nat_add(x_45, x_46);
lean_dec(x_45);
x_50 = lean_byte_array_size(x_2);
x_51 = lean_nat_dec_lt(x_49, x_50);
if (x_51 == 0)
{
lean_object* x_52; 
lean_dec(x_49);
lean_dec(x_4);
lean_dec_ref(x_2);
x_52 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_52;
}
else
{
if (x_51 == 0)
{
uint8_t x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_53 = l_instInhabitedUInt8;
x_54 = lean_box(x_53);
x_55 = l_outOfBounds___redArg(x_54);
x_56 = lean_unbox(x_55);
lean_dec(x_55);
x_30 = x_48;
x_31 = x_46;
x_32 = x_49;
x_33 = x_47;
x_34 = x_56;
goto block_44;
}
else
{
uint8_t x_57; 
x_57 = lean_byte_array_fget(x_2, x_49);
x_30 = x_48;
x_31 = x_46;
x_32 = x_49;
x_33 = x_47;
x_34 = x_57;
goto block_44;
}
}
}
block_70:
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; 
x_60 = lean_unsigned_to_nat(1u);
x_61 = lean_nat_add(x_3, x_60);
lean_dec(x_3);
x_62 = lean_byte_array_size(x_2);
x_63 = lean_nat_dec_lt(x_61, x_62);
if (x_63 == 0)
{
lean_object* x_64; 
lean_dec(x_61);
lean_dec(x_4);
lean_dec_ref(x_2);
x_64 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_64;
}
else
{
if (x_63 == 0)
{
uint8_t x_65; lean_object* x_66; lean_object* x_67; uint8_t x_68; 
x_65 = l_instInhabitedUInt8;
x_66 = lean_box(x_65);
x_67 = l_outOfBounds___redArg(x_66);
x_68 = lean_unbox(x_67);
lean_dec(x_67);
x_45 = x_61;
x_46 = x_60;
x_47 = x_59;
x_48 = x_68;
goto block_58;
}
else
{
uint8_t x_69; 
x_69 = lean_byte_array_fget(x_2, x_61);
x_45 = x_61;
x_46 = x_60;
x_47 = x_59;
x_48 = x_69;
goto block_58;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; uint8_t x_16; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
x_9 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_9);
x_10 = lean_ctor_get(x_1, 1);
lean_inc(x_10);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_11 = x_1;
} else {
 lean_dec_ref(x_1);
 x_11 = lean_box(0);
}
x_12 = lean_unsigned_to_nat(5u);
x_63 = lean_nat_add(x_10, x_12);
x_64 = lean_byte_array_size(x_9);
x_65 = lean_nat_dec_le(x_63, x_64);
lean_dec(x_63);
if (x_65 == 0)
{
lean_object* x_66; 
lean_dec(x_11);
lean_dec(x_10);
lean_dec_ref(x_9);
x_66 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6));
return x_66;
}
else
{
lean_object* x_67; lean_object* x_68; uint8_t x_69; uint8_t x_84; 
x_67 = lean_unsigned_to_nat(3u);
x_68 = lean_nat_add(x_10, x_67);
x_84 = lean_nat_dec_le(x_68, x_64);
if (x_84 == 0)
{
lean_object* x_85; 
lean_dec(x_68);
lean_dec(x_11);
lean_dec(x_10);
lean_dec_ref(x_9);
x_85 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6));
return x_85;
}
else
{
lean_object* x_86; lean_object* x_87; uint8_t x_88; 
x_86 = l_ByteArray_extract(x_9, x_10, x_68);
x_87 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_magic;
x_88 = l_ByteArray_instBEq_beq(x_86, x_87);
if (x_88 == 0)
{
lean_object* x_89; 
lean_dec(x_68);
lean_dec(x_11);
lean_dec_ref(x_9);
x_89 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7));
return x_89;
}
else
{
uint8_t x_90; 
x_90 = lean_nat_dec_lt(x_68, x_64);
if (x_90 == 0)
{
lean_object* x_91; 
lean_dec(x_68);
lean_dec(x_11);
lean_dec_ref(x_9);
x_91 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6));
return x_91;
}
else
{
if (x_90 == 0)
{
uint8_t x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_92 = l_instInhabitedUInt8;
x_93 = lean_box(x_92);
x_94 = l_outOfBounds___redArg(x_93);
x_95 = lean_unbox(x_94);
lean_dec(x_94);
x_69 = x_95;
goto block_83;
}
else
{
uint8_t x_96; 
x_96 = lean_byte_array_fget(x_9, x_68);
x_69 = x_96;
goto block_83;
}
}
}
}
block_83:
{
uint8_t x_70; uint8_t x_71; 
x_70 = 0;
x_71 = lean_uint8_dec_eq(x_69, x_70);
if (x_71 == 0)
{
lean_object* x_72; lean_object* x_73; 
lean_dec(x_68);
lean_dec(x_11);
lean_dec_ref(x_9);
x_72 = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(x_72, 0, x_69);
x_73 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_73, 0, x_72);
return x_73;
}
else
{
lean_object* x_74; lean_object* x_75; uint8_t x_76; 
x_74 = lean_unsigned_to_nat(1u);
x_75 = lean_nat_add(x_68, x_74);
lean_dec(x_68);
x_76 = lean_nat_dec_lt(x_75, x_64);
if (x_76 == 0)
{
lean_object* x_77; 
lean_dec(x_75);
lean_dec(x_11);
lean_dec_ref(x_9);
x_77 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6));
return x_77;
}
else
{
if (x_76 == 0)
{
uint8_t x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_78 = l_instInhabitedUInt8;
x_79 = lean_box(x_78);
x_80 = l_outOfBounds___redArg(x_79);
x_81 = lean_unbox(x_80);
lean_dec(x_80);
x_13 = x_74;
x_14 = x_75;
x_15 = x_70;
x_16 = x_81;
goto block_62;
}
else
{
uint8_t x_82; 
x_82 = lean_byte_array_fget(x_9, x_75);
x_13 = x_74;
x_14 = x_75;
x_15 = x_70;
x_16 = x_82;
goto block_62;
}
}
}
}
}
block_8:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_5 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_5, 0, x_3);
lean_ctor_set_uint8(x_5, sizeof(void*)*1, x_2);
x_6 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_6, 0, x_5);
lean_ctor_set(x_6, 1, x_4);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
block_62:
{
uint8_t x_17; uint8_t x_18; uint8_t x_19; 
x_17 = 248;
x_18 = lean_uint8_land(x_16, x_17);
x_19 = lean_uint8_dec_eq(x_18, x_15);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec_ref(x_9);
x_20 = lean_alloc_ctor(3, 0, 1);
lean_ctor_set_uint8(x_20, 0, x_16);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
else
{
uint8_t x_22; uint8_t x_23; uint8_t x_24; 
x_22 = 1;
x_23 = lean_uint8_land(x_16, x_22);
x_24 = lean_uint8_dec_eq(x_23, x_15);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec_ref(x_9);
x_25 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2));
return x_25;
}
else
{
uint8_t x_26; uint8_t x_27; uint8_t x_28; 
x_26 = 2;
x_27 = lean_uint8_land(x_16, x_26);
x_28 = lean_uint8_dec_eq(x_27, x_15);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_14);
lean_dec(x_11);
lean_dec_ref(x_9);
x_29 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5));
return x_29;
}
else
{
lean_object* x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; 
x_30 = lean_nat_add(x_14, x_13);
lean_dec(x_14);
x_31 = 4;
x_32 = lean_uint8_land(x_16, x_31);
x_33 = lean_uint8_dec_eq(x_32, x_15);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; 
lean_dec(x_11);
x_34 = lean_unsigned_to_nat(0u);
x_35 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_9, x_30, x_34, x_12);
if (lean_obj_tag(x_35) == 0)
{
uint8_t x_36; 
x_36 = !lean_is_exclusive(x_35);
if (x_36 == 0)
{
return x_35;
}
else
{
lean_object* x_37; lean_object* x_38; 
x_37 = lean_ctor_get(x_35, 0);
lean_inc(x_37);
lean_dec(x_35);
x_38 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_38, 0, x_37);
return x_38;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; 
x_39 = lean_ctor_get(x_35, 0);
lean_inc(x_39);
lean_dec_ref(x_35);
x_40 = lean_ctor_get(x_39, 1);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 0);
lean_inc(x_41);
lean_dec(x_39);
x_42 = !lean_is_exclusive(x_40);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; uint8_t x_47; 
x_43 = lean_ctor_get(x_40, 0);
x_44 = lean_ctor_get(x_40, 1);
x_45 = lean_nat_add(x_44, x_41);
lean_dec(x_41);
x_46 = lean_byte_array_size(x_43);
x_47 = lean_nat_dec_le(x_45, x_46);
if (x_47 == 0)
{
lean_object* x_48; 
lean_dec(x_45);
lean_free_object(x_40);
lean_dec(x_44);
lean_dec_ref(x_43);
x_48 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6));
return x_48;
}
else
{
lean_object* x_49; lean_object* x_50; 
x_49 = l_ByteArray_extract(x_43, x_44, x_45);
lean_ctor_set(x_40, 1, x_45);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
x_2 = x_16;
x_3 = x_50;
x_4 = x_40;
goto block_8;
}
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; uint8_t x_55; 
x_51 = lean_ctor_get(x_40, 0);
x_52 = lean_ctor_get(x_40, 1);
lean_inc(x_52);
lean_inc(x_51);
lean_dec(x_40);
x_53 = lean_nat_add(x_52, x_41);
lean_dec(x_41);
x_54 = lean_byte_array_size(x_51);
x_55 = lean_nat_dec_le(x_53, x_54);
if (x_55 == 0)
{
lean_object* x_56; 
lean_dec(x_53);
lean_dec(x_52);
lean_dec_ref(x_51);
x_56 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6));
return x_56;
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = l_ByteArray_extract(x_51, x_52, x_53);
x_58 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_58, 0, x_51);
lean_ctor_set(x_58, 1, x_53);
x_59 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_59, 0, x_57);
x_2 = x_16;
x_3 = x_59;
x_4 = x_58;
goto block_8;
}
}
}
}
else
{
lean_object* x_60; lean_object* x_61; 
if (lean_is_scalar(x_11)) {
 x_60 = lean_alloc_ctor(0, 2, 0);
} else {
 x_60 = x_11;
}
lean_ctor_set(x_60, 0, x_9);
lean_ctor_set(x_60, 1, x_30);
x_61 = lean_box(0);
x_2 = x_16;
x_3 = x_61;
x_4 = x_60;
goto block_8;
}
}
}
}
}
}
}
static uint8_t _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__1(void) {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; 
x_1 = 2;
x_2 = 1;
x_3 = lean_uint8_lor(x_2, x_1);
return x_3;
}
}
static uint8_t _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2(void) {
_start:
{
uint8_t x_1; uint8_t x_2; uint8_t x_3; 
x_1 = 4;
x_2 = lean_uint8_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__1, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__1_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__1);
x_3 = lean_uint8_lor(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow(lean_object* x_1) {
_start:
{
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; uint8_t x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_144; lean_object* x_145; uint8_t x_146; lean_object* x_184; uint8_t x_185; 
x_144 = lean_ctor_get(x_1, 0);
lean_inc_ref(x_144);
x_145 = lean_ctor_get(x_1, 1);
lean_inc(x_145);
lean_dec_ref(x_1);
x_184 = lean_byte_array_size(x_144);
x_185 = lean_nat_dec_lt(x_145, x_184);
if (x_185 == 0)
{
lean_object* x_186; 
lean_dec(x_145);
lean_dec_ref(x_144);
x_186 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_186;
}
else
{
if (x_185 == 0)
{
uint8_t x_187; lean_object* x_188; lean_object* x_189; uint8_t x_190; 
x_187 = l_instInhabitedUInt8;
x_188 = lean_box(x_187);
x_189 = l_outOfBounds___redArg(x_188);
x_190 = lean_unbox(x_189);
lean_dec(x_189);
x_146 = x_190;
goto block_183;
}
else
{
uint8_t x_191; 
x_191 = lean_byte_array_fget(x_144, x_145);
x_146 = x_191;
goto block_183;
}
}
block_49:
{
uint8_t x_11; 
x_11 = !lean_is_exclusive(x_10);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_12 = lean_ctor_get(x_10, 0);
x_13 = lean_ctor_get(x_10, 1);
x_14 = lean_nat_add(x_13, x_3);
lean_dec(x_3);
x_15 = lean_byte_array_size(x_12);
x_16 = lean_nat_dec_le(x_14, x_15);
if (x_16 == 0)
{
lean_object* x_17; 
lean_dec(x_14);
lean_free_object(x_10);
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_17 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_nat_add(x_14, x_7);
lean_dec(x_7);
x_19 = lean_nat_dec_le(x_18, x_15);
if (x_19 == 0)
{
lean_object* x_20; 
lean_dec(x_18);
lean_dec(x_14);
lean_free_object(x_10);
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_20 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_20;
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_nat_add(x_18, x_4);
lean_dec(x_4);
x_22 = lean_nat_dec_le(x_21, x_15);
if (x_22 == 0)
{
lean_object* x_23; 
lean_dec(x_21);
lean_dec(x_18);
lean_dec(x_14);
lean_free_object(x_10);
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_23 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_24 = l_ByteArray_extract(x_12, x_13, x_14);
x_25 = l_ByteArray_extract(x_12, x_14, x_18);
x_26 = l_ByteArray_extract(x_12, x_18, x_21);
lean_ctor_set(x_10, 1, x_21);
x_27 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_27, 0, x_5);
lean_ctor_set(x_27, 1, x_8);
lean_ctor_set(x_27, 2, x_6);
lean_ctor_set(x_27, 3, x_24);
lean_ctor_set(x_27, 4, x_25);
lean_ctor_set(x_27, 5, x_26);
lean_ctor_set(x_27, 6, x_9);
lean_ctor_set_uint8(x_27, sizeof(void*)*7, x_2);
x_28 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_10);
x_29 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_29, 0, x_28);
return x_29;
}
}
}
}
else
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_34; 
x_30 = lean_ctor_get(x_10, 0);
x_31 = lean_ctor_get(x_10, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_10);
x_32 = lean_nat_add(x_31, x_3);
lean_dec(x_3);
x_33 = lean_byte_array_size(x_30);
x_34 = lean_nat_dec_le(x_32, x_33);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_30);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_35 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_35;
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_nat_add(x_32, x_7);
lean_dec(x_7);
x_37 = lean_nat_dec_le(x_36, x_33);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_36);
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_30);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
x_38 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_nat_add(x_36, x_4);
lean_dec(x_4);
x_40 = lean_nat_dec_le(x_39, x_33);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_39);
lean_dec(x_36);
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_30);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
lean_dec(x_5);
x_41 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_41;
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; 
x_42 = l_ByteArray_extract(x_30, x_31, x_32);
x_43 = l_ByteArray_extract(x_30, x_32, x_36);
x_44 = l_ByteArray_extract(x_30, x_36, x_39);
x_45 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_45, 0, x_30);
lean_ctor_set(x_45, 1, x_39);
x_46 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_46, 0, x_5);
lean_ctor_set(x_46, 1, x_8);
lean_ctor_set(x_46, 2, x_6);
lean_ctor_set(x_46, 3, x_42);
lean_ctor_set(x_46, 4, x_43);
lean_ctor_set(x_46, 5, x_44);
lean_ctor_set(x_46, 6, x_9);
lean_ctor_set_uint8(x_46, sizeof(void*)*7, x_2);
x_47 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set(x_47, 1, x_45);
x_48 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_48, 0, x_47);
return x_48;
}
}
}
}
}
block_110:
{
uint8_t x_59; uint8_t x_60; uint8_t x_61; uint8_t x_62; 
x_59 = 248;
x_60 = lean_uint8_land(x_58, x_59);
x_61 = 0;
x_62 = lean_uint8_dec_eq(x_60, x_61);
if (x_62 == 0)
{
lean_object* x_63; lean_object* x_64; 
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec_ref(x_51);
x_63 = lean_alloc_ctor(5, 0, 1);
lean_ctor_set_uint8(x_63, 0, x_58);
x_64 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_64, 0, x_63);
return x_64;
}
else
{
uint8_t x_65; uint8_t x_66; uint8_t x_67; uint8_t x_68; 
x_65 = 4;
x_66 = lean_uint8_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2);
x_67 = lean_uint8_land(x_58, x_66);
x_68 = lean_uint8_dec_eq(x_67, x_61);
if (x_68 == 0)
{
lean_object* x_69; 
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec_ref(x_51);
x_69 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5));
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_55, x_70);
lean_dec(x_55);
lean_inc(x_57);
lean_inc(x_53);
x_72 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_51, x_71, x_53, x_57);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
x_73 = !lean_is_exclusive(x_72);
if (x_73 == 0)
{
return x_72;
}
else
{
lean_object* x_74; lean_object* x_75; 
x_74 = lean_ctor_get(x_72, 0);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_75, 0, x_74);
return x_75;
}
}
else
{
lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; 
x_76 = lean_ctor_get(x_72, 0);
lean_inc(x_76);
lean_dec_ref(x_72);
x_77 = lean_ctor_get(x_76, 1);
lean_inc(x_77);
x_78 = lean_ctor_get(x_76, 0);
lean_inc(x_78);
lean_dec(x_76);
x_79 = lean_ctor_get(x_77, 0);
lean_inc_ref(x_79);
x_80 = lean_ctor_get(x_77, 1);
lean_inc(x_80);
lean_dec(x_77);
lean_inc(x_57);
lean_inc(x_53);
x_81 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_79, x_80, x_53, x_57);
if (lean_obj_tag(x_81) == 0)
{
uint8_t x_82; 
lean_dec(x_78);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_53);
lean_dec(x_52);
x_82 = !lean_is_exclusive(x_81);
if (x_82 == 0)
{
return x_81;
}
else
{
lean_object* x_83; lean_object* x_84; 
x_83 = lean_ctor_get(x_81, 0);
lean_inc(x_83);
lean_dec(x_81);
x_84 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_84, 0, x_83);
return x_84;
}
}
else
{
lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_85 = lean_ctor_get(x_81, 0);
lean_inc(x_85);
lean_dec_ref(x_81);
x_86 = lean_ctor_get(x_85, 1);
lean_inc(x_86);
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_ctor_get(x_86, 0);
lean_inc_ref(x_88);
x_89 = lean_ctor_get(x_86, 1);
lean_inc(x_89);
lean_dec(x_86);
x_90 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_88, x_89, x_53, x_57);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
lean_dec(x_87);
lean_dec(x_78);
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_52);
x_91 = !lean_is_exclusive(x_90);
if (x_91 == 0)
{
return x_90;
}
else
{
lean_object* x_92; lean_object* x_93; 
x_92 = lean_ctor_get(x_90, 0);
lean_inc(x_92);
lean_dec(x_90);
x_93 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_93, 0, x_92);
return x_93;
}
}
else
{
lean_object* x_94; lean_object* x_95; lean_object* x_96; uint8_t x_97; uint8_t x_98; 
x_94 = lean_ctor_get(x_90, 0);
lean_inc(x_94);
lean_dec_ref(x_90);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = lean_uint8_land(x_50, x_65);
x_98 = lean_uint8_dec_eq(x_97, x_61);
if (x_98 == 0)
{
lean_object* x_99; 
x_99 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(x_96);
if (lean_obj_tag(x_99) == 0)
{
lean_object* x_100; 
lean_dec_ref(x_99);
lean_dec(x_95);
lean_dec(x_87);
lean_dec(x_78);
lean_dec(x_56);
lean_dec(x_54);
lean_dec(x_52);
x_100 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_100;
}
else
{
uint8_t x_101; 
x_101 = !lean_is_exclusive(x_99);
if (x_101 == 0)
{
lean_object* x_102; lean_object* x_103; lean_object* x_104; 
x_102 = lean_ctor_get(x_99, 0);
x_103 = lean_ctor_get(x_102, 0);
lean_inc(x_103);
x_104 = lean_ctor_get(x_102, 1);
lean_inc(x_104);
lean_dec(x_102);
lean_ctor_set(x_99, 0, x_103);
x_2 = x_50;
x_3 = x_78;
x_4 = x_95;
x_5 = x_52;
x_6 = x_54;
x_7 = x_87;
x_8 = x_56;
x_9 = x_99;
x_10 = x_104;
goto block_49;
}
else
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_105 = lean_ctor_get(x_99, 0);
lean_inc(x_105);
lean_dec(x_99);
x_106 = lean_ctor_get(x_105, 0);
lean_inc(x_106);
x_107 = lean_ctor_get(x_105, 1);
lean_inc(x_107);
lean_dec(x_105);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_106);
x_2 = x_50;
x_3 = x_78;
x_4 = x_95;
x_5 = x_52;
x_6 = x_54;
x_7 = x_87;
x_8 = x_56;
x_9 = x_108;
x_10 = x_107;
goto block_49;
}
}
}
else
{
lean_object* x_109; 
x_109 = lean_box(0);
x_2 = x_50;
x_3 = x_78;
x_4 = x_95;
x_5 = x_52;
x_6 = x_54;
x_7 = x_87;
x_8 = x_56;
x_9 = x_109;
x_10 = x_96;
goto block_49;
}
}
}
}
}
}
}
block_143:
{
lean_object* x_116; lean_object* x_117; lean_object* x_118; 
x_116 = lean_unsigned_to_nat(0u);
x_117 = lean_unsigned_to_nat(5u);
x_118 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_114, x_115, x_116, x_117);
if (lean_obj_tag(x_118) == 0)
{
uint8_t x_119; 
lean_dec(x_113);
lean_dec(x_112);
x_119 = !lean_is_exclusive(x_118);
if (x_119 == 0)
{
return x_118;
}
else
{
lean_object* x_120; lean_object* x_121; 
x_120 = lean_ctor_get(x_118, 0);
lean_inc(x_120);
lean_dec(x_118);
x_121 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_121, 0, x_120);
return x_121;
}
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; 
x_122 = lean_ctor_get(x_118, 0);
lean_inc(x_122);
lean_dec_ref(x_118);
x_123 = lean_ctor_get(x_122, 1);
lean_inc(x_123);
lean_dec(x_122);
x_124 = lean_ctor_get(x_123, 0);
lean_inc_ref(x_124);
x_125 = lean_ctor_get(x_123, 1);
lean_inc(x_125);
lean_dec(x_123);
x_126 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_124, x_125, x_116, x_117);
if (lean_obj_tag(x_126) == 0)
{
uint8_t x_127; 
lean_dec(x_113);
lean_dec(x_112);
x_127 = !lean_is_exclusive(x_126);
if (x_127 == 0)
{
return x_126;
}
else
{
lean_object* x_128; lean_object* x_129; 
x_128 = lean_ctor_get(x_126, 0);
lean_inc(x_128);
lean_dec(x_126);
x_129 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_129, 0, x_128);
return x_129;
}
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; uint8_t x_136; 
x_130 = lean_ctor_get(x_126, 0);
lean_inc(x_130);
lean_dec_ref(x_126);
x_131 = lean_ctor_get(x_130, 1);
lean_inc(x_131);
x_132 = lean_ctor_get(x_130, 0);
lean_inc(x_132);
lean_dec(x_130);
x_133 = lean_ctor_get(x_131, 0);
lean_inc_ref(x_133);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_134);
lean_dec(x_131);
x_135 = lean_byte_array_size(x_133);
x_136 = lean_nat_dec_lt(x_134, x_135);
if (x_136 == 0)
{
lean_object* x_137; 
lean_dec(x_134);
lean_dec_ref(x_133);
lean_dec(x_132);
lean_dec(x_113);
lean_dec(x_112);
x_137 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_137;
}
else
{
if (x_136 == 0)
{
uint8_t x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; 
x_138 = l_instInhabitedUInt8;
x_139 = lean_box(x_138);
x_140 = l_outOfBounds___redArg(x_139);
x_141 = lean_unbox(x_140);
lean_dec(x_140);
x_50 = x_111;
x_51 = x_133;
x_52 = x_112;
x_53 = x_116;
x_54 = x_132;
x_55 = x_134;
x_56 = x_113;
x_57 = x_117;
x_58 = x_141;
goto block_110;
}
else
{
uint8_t x_142; 
x_142 = lean_byte_array_fget(x_133, x_134);
x_50 = x_111;
x_51 = x_133;
x_52 = x_112;
x_53 = x_116;
x_54 = x_132;
x_55 = x_134;
x_56 = x_113;
x_57 = x_117;
x_58 = x_142;
goto block_110;
}
}
}
}
}
block_183:
{
uint8_t x_147; uint8_t x_148; uint8_t x_149; uint8_t x_150; 
x_147 = 248;
x_148 = lean_uint8_land(x_146, x_147);
x_149 = 0;
x_150 = lean_uint8_dec_eq(x_148, x_149);
if (x_150 == 0)
{
lean_object* x_151; lean_object* x_152; 
lean_dec(x_145);
lean_dec_ref(x_144);
x_151 = lean_alloc_ctor(4, 0, 1);
lean_ctor_set_uint8(x_151, 0, x_146);
x_152 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_152, 0, x_151);
return x_152;
}
else
{
uint8_t x_153; uint8_t x_154; uint8_t x_155; 
x_153 = 2;
x_154 = lean_uint8_land(x_146, x_153);
x_155 = lean_uint8_dec_eq(x_154, x_149);
if (x_155 == 0)
{
lean_object* x_156; 
lean_dec(x_145);
lean_dec_ref(x_144);
x_156 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__8));
return x_156;
}
else
{
lean_object* x_157; lean_object* x_158; uint8_t x_159; uint8_t x_160; uint8_t x_161; 
x_157 = lean_unsigned_to_nat(1u);
x_158 = lean_nat_add(x_145, x_157);
lean_dec(x_145);
x_159 = 1;
x_160 = lean_uint8_land(x_146, x_159);
x_161 = lean_uint8_dec_eq(x_160, x_149);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; 
x_162 = lean_unsigned_to_nat(0u);
x_163 = lean_unsigned_to_nat(5u);
x_164 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_144, x_158, x_162, x_163);
if (lean_obj_tag(x_164) == 0)
{
uint8_t x_165; 
x_165 = !lean_is_exclusive(x_164);
if (x_165 == 0)
{
return x_164;
}
else
{
lean_object* x_166; lean_object* x_167; 
x_166 = lean_ctor_get(x_164, 0);
lean_inc(x_166);
lean_dec(x_164);
x_167 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_167, 0, x_166);
return x_167;
}
}
else
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; 
x_168 = lean_ctor_get(x_164, 0);
lean_inc(x_168);
lean_dec_ref(x_164);
x_169 = lean_ctor_get(x_168, 1);
lean_inc(x_169);
x_170 = lean_ctor_get(x_168, 0);
lean_inc(x_170);
lean_dec(x_168);
x_171 = lean_ctor_get(x_169, 0);
lean_inc_ref(x_171);
x_172 = lean_ctor_get(x_169, 1);
lean_inc(x_172);
lean_dec(x_169);
x_173 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_171, x_172, x_162, x_163);
if (lean_obj_tag(x_173) == 0)
{
uint8_t x_174; 
lean_dec(x_170);
x_174 = !lean_is_exclusive(x_173);
if (x_174 == 0)
{
return x_173;
}
else
{
lean_object* x_175; lean_object* x_176; 
x_175 = lean_ctor_get(x_173, 0);
lean_inc(x_175);
lean_dec(x_173);
x_176 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_176, 0, x_175);
return x_176;
}
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; 
x_177 = lean_ctor_get(x_173, 0);
lean_inc(x_177);
lean_dec_ref(x_173);
x_178 = lean_ctor_get(x_177, 1);
lean_inc(x_178);
x_179 = lean_ctor_get(x_177, 0);
lean_inc(x_179);
lean_dec(x_177);
x_180 = lean_ctor_get(x_178, 0);
lean_inc_ref(x_180);
x_181 = lean_ctor_get(x_178, 1);
lean_inc(x_181);
lean_dec(x_178);
x_111 = x_146;
x_112 = x_170;
x_113 = x_179;
x_114 = x_180;
x_115 = x_181;
goto block_143;
}
}
}
else
{
lean_object* x_182; 
x_182 = lean_unsigned_to_nat(0u);
x_111 = x_146;
x_112 = x_182;
x_113 = x_182;
x_114 = x_144;
x_115 = x_158;
goto block_143;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 1)
{
lean_dec(x_5);
lean_dec(x_4);
return x_2;
}
else
{
lean_object* x_8; lean_object* x_9; uint8_t x_10; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_5, x_8);
lean_dec(x_5);
x_15 = lean_nat_add(x_3, x_4);
x_16 = lean_byte_array_size(x_1);
x_17 = lean_nat_dec_lt(x_15, x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_18 = lean_nat_sub(x_15, x_16);
lean_dec(x_15);
x_19 = lean_byte_array_size(x_2);
x_20 = lean_nat_dec_lt(x_18, x_19);
if (x_20 == 0)
{
uint8_t x_21; lean_object* x_22; lean_object* x_23; uint8_t x_24; 
lean_dec(x_18);
x_21 = l_instInhabitedUInt8;
x_22 = lean_box(x_21);
x_23 = l_outOfBounds___redArg(x_22);
x_24 = lean_unbox(x_23);
lean_dec(x_23);
x_10 = x_24;
goto block_14;
}
else
{
uint8_t x_25; 
x_25 = lean_byte_array_fget(x_2, x_18);
lean_dec(x_18);
x_10 = x_25;
goto block_14;
}
}
else
{
if (x_17 == 0)
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_15);
x_26 = l_instInhabitedUInt8;
x_27 = lean_box(x_26);
x_28 = l_outOfBounds___redArg(x_27);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
x_10 = x_29;
goto block_14;
}
else
{
uint8_t x_30; 
x_30 = lean_byte_array_fget(x_1, x_15);
lean_dec(x_15);
x_10 = x_30;
goto block_14;
}
}
block_14:
{
lean_object* x_11; lean_object* x_12; 
x_11 = lean_byte_array_push(x_2, x_10);
x_12 = lean_nat_add(x_4, x_8);
lean_dec(x_4);
x_2 = x_11;
x_4 = x_12;
x_5 = x_9;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyLoop(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec_ref(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
uint8_t x_6; lean_object* x_10; uint8_t x_11; 
x_10 = lean_nat_add(x_1, x_3);
x_11 = lean_nat_dec_lt(x_10, x_1);
if (x_11 == 0)
{
lean_object* x_12; lean_object* x_13; uint8_t x_14; 
x_12 = lean_nat_sub(x_10, x_1);
lean_dec(x_10);
x_13 = lean_byte_array_size(x_5);
x_14 = lean_nat_dec_lt(x_12, x_13);
if (x_14 == 0)
{
uint8_t x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
lean_dec(x_12);
x_15 = l_instInhabitedUInt8;
x_16 = lean_box(x_15);
x_17 = l_outOfBounds___redArg(x_16);
x_18 = lean_unbox(x_17);
lean_dec(x_17);
x_6 = x_18;
goto block_9;
}
else
{
uint8_t x_19; 
x_19 = lean_byte_array_fget(x_5, x_12);
lean_dec(x_12);
x_6 = x_19;
goto block_9;
}
}
else
{
if (x_11 == 0)
{
uint8_t x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
lean_dec(x_10);
x_20 = l_instInhabitedUInt8;
x_21 = lean_box(x_20);
x_22 = l_outOfBounds___redArg(x_21);
x_23 = lean_unbox(x_22);
lean_dec(x_22);
x_6 = x_23;
goto block_9;
}
else
{
uint8_t x_24; 
x_24 = lean_byte_array_fget(x_2, x_10);
lean_dec(x_10);
x_6 = x_24;
goto block_9;
}
}
block_9:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_byte_array_push(x_5, x_6);
x_8 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
uint8_t x_5; lean_object* x_9; lean_object* x_10; uint8_t x_11; 
x_9 = lean_nat_add(x_1, x_2);
x_10 = lean_byte_array_size(x_4);
x_11 = lean_nat_dec_lt(x_9, x_10);
if (x_11 == 0)
{
uint8_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
lean_dec(x_9);
x_12 = l_instInhabitedUInt8;
x_13 = lean_box(x_12);
x_14 = l_outOfBounds___redArg(x_13);
x_15 = lean_unbox(x_14);
lean_dec(x_14);
x_5 = x_15;
goto block_8;
}
else
{
uint8_t x_16; 
x_16 = lean_byte_array_fget(x_4, x_9);
lean_dec(x_9);
x_5 = x_16;
goto block_8;
}
block_8:
{
lean_object* x_6; lean_object* x_7; 
x_6 = lean_byte_array_push(x_4, x_5);
x_7 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_7, 0, x_6);
return x_7;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1(x_1, x_2, x_3, x_4);
lean_dec(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; 
x_5 = lean_nat_add(x_3, x_4);
x_6 = lean_byte_array_size(x_1);
x_7 = lean_nat_dec_le(x_5, x_6);
if (x_7 == 0)
{
uint8_t x_8; 
lean_dec(x_5);
x_8 = lean_nat_dec_le(x_6, x_3);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_9 = lean_nat_sub(x_6, x_3);
x_10 = lean_nat_sub(x_4, x_9);
lean_dec(x_9);
lean_dec(x_4);
x_11 = l_ByteArray_extract(x_1, x_3, x_6);
x_12 = lean_unsigned_to_nat(0u);
x_13 = lean_byte_array_size(x_2);
x_14 = lean_byte_array_size(x_11);
x_15 = lean_byte_array_copy_slice(x_11, x_12, x_2, x_13, x_14, x_8);
lean_dec_ref(x_11);
x_16 = lean_byte_array_size(x_15);
x_17 = lean_nat_sub(x_16, x_6);
x_18 = lean_nat_dec_le(x_10, x_17);
lean_dec(x_17);
if (x_18 == 0)
{
lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_19, 0, x_6);
lean_closure_set(x_19, 1, x_1);
x_20 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_21 = lean_unsigned_to_nat(1u);
x_22 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_22, 0, x_12);
lean_ctor_set(x_22, 1, x_10);
lean_ctor_set(x_22, 2, x_21);
x_23 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_20, x_22, x_19, x_15, x_12);
return x_23;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; 
lean_dec_ref(x_1);
x_24 = lean_nat_add(x_6, x_10);
lean_dec(x_10);
x_25 = l_ByteArray_extract(x_15, x_6, x_24);
lean_dec(x_24);
x_26 = lean_byte_array_size(x_25);
x_27 = lean_byte_array_copy_slice(x_25, x_12, x_15, x_16, x_26, x_8);
lean_dec_ref(x_25);
return x_27;
}
}
else
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; 
lean_dec_ref(x_1);
x_28 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_29 = lean_nat_add(x_28, x_4);
x_30 = lean_byte_array_size(x_2);
x_31 = lean_nat_dec_le(x_29, x_30);
if (x_31 == 0)
{
lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_29);
x_32 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed), 4, 1);
lean_closure_set(x_32, 0, x_28);
x_33 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_34 = lean_unsigned_to_nat(0u);
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_4);
lean_ctor_set(x_36, 2, x_35);
x_37 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_33, x_36, x_32, x_2, x_34);
return x_37;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_4);
x_38 = l_ByteArray_extract(x_2, x_28, x_29);
lean_dec(x_29);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_byte_array_size(x_38);
x_41 = lean_byte_array_copy_slice(x_38, x_39, x_2, x_30, x_40, x_7);
lean_dec_ref(x_38);
return x_41;
}
}
}
else
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_47; 
lean_dec(x_4);
x_42 = l_ByteArray_extract(x_1, x_3, x_5);
lean_dec(x_5);
lean_dec_ref(x_1);
x_43 = lean_unsigned_to_nat(0u);
x_44 = lean_byte_array_size(x_2);
x_45 = lean_byte_array_size(x_42);
x_46 = 0;
x_47 = lean_byte_array_copy_slice(x_42, x_43, x_2, x_44, x_45, x_46);
lean_dec_ref(x_42);
return x_47;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; lean_object* x_10; lean_object* x_15; lean_object* x_16; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_67; lean_object* x_68; 
x_67 = lean_ctor_get(x_1, 0);
lean_inc(x_67);
if (lean_is_exclusive(x_1)) {
 lean_ctor_release(x_1, 0);
 lean_ctor_release(x_1, 1);
 x_68 = x_1;
} else {
 lean_dec_ref(x_1);
 x_68 = lean_box(0);
}
switch (lean_obj_tag(x_67)) {
case 0:
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
lean_dec_ref(x_3);
lean_dec(x_2);
if (lean_is_scalar(x_68)) {
 x_69 = lean_alloc_ctor(0, 2, 0);
} else {
 x_69 = x_68;
}
lean_ctor_set(x_69, 0, x_6);
lean_ctor_set(x_69, 1, x_7);
x_70 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_70, 0, x_5);
lean_ctor_set(x_70, 1, x_69);
x_71 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_71, 0, x_4);
lean_ctor_set(x_71, 1, x_70);
x_72 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_72, 0, x_71);
return x_72;
}
case 1:
{
uint8_t x_73; 
lean_dec_ref(x_3);
x_73 = !lean_is_exclusive(x_5);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; uint8_t x_78; 
x_74 = lean_ctor_get(x_5, 0);
x_75 = lean_ctor_get(x_5, 1);
x_76 = lean_nat_add(x_75, x_2);
lean_dec(x_2);
x_77 = lean_byte_array_size(x_74);
x_78 = lean_nat_dec_le(x_76, x_77);
if (x_78 == 0)
{
lean_object* x_79; 
lean_dec(x_76);
lean_free_object(x_5);
lean_dec(x_75);
lean_dec_ref(x_74);
lean_dec(x_68);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
x_79 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_79;
}
else
{
if (x_78 == 0)
{
lean_object* x_80; 
lean_dec(x_76);
lean_free_object(x_5);
lean_dec(x_75);
lean_dec_ref(x_74);
lean_dec(x_68);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
x_80 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_80;
}
else
{
uint8_t x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_81 = 0;
x_82 = l_ByteArray_extract(x_74, x_75, x_76);
lean_ctor_set(x_5, 1, x_76);
x_83 = lean_unsigned_to_nat(0u);
x_84 = lean_byte_array_size(x_4);
x_85 = lean_byte_array_size(x_82);
x_86 = lean_byte_array_copy_slice(x_82, x_83, x_4, x_84, x_85, x_81);
lean_dec_ref(x_82);
if (lean_is_scalar(x_68)) {
 x_87 = lean_alloc_ctor(0, 2, 0);
} else {
 x_87 = x_68;
}
lean_ctor_set(x_87, 0, x_6);
lean_ctor_set(x_87, 1, x_7);
x_88 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_88, 0, x_5);
lean_ctor_set(x_88, 1, x_87);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_86);
lean_ctor_set(x_89, 1, x_88);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_89);
return x_90;
}
}
}
else
{
lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_95; 
x_91 = lean_ctor_get(x_5, 0);
x_92 = lean_ctor_get(x_5, 1);
lean_inc(x_92);
lean_inc(x_91);
lean_dec(x_5);
x_93 = lean_nat_add(x_92, x_2);
lean_dec(x_2);
x_94 = lean_byte_array_size(x_91);
x_95 = lean_nat_dec_le(x_93, x_94);
if (x_95 == 0)
{
lean_object* x_96; 
lean_dec(x_93);
lean_dec(x_92);
lean_dec_ref(x_91);
lean_dec(x_68);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
x_96 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_96;
}
else
{
if (x_95 == 0)
{
lean_object* x_97; 
lean_dec(x_93);
lean_dec(x_92);
lean_dec_ref(x_91);
lean_dec(x_68);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
x_97 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_97;
}
else
{
uint8_t x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
x_98 = 0;
x_99 = l_ByteArray_extract(x_91, x_92, x_93);
x_100 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_100, 0, x_91);
lean_ctor_set(x_100, 1, x_93);
x_101 = lean_unsigned_to_nat(0u);
x_102 = lean_byte_array_size(x_4);
x_103 = lean_byte_array_size(x_99);
x_104 = lean_byte_array_copy_slice(x_99, x_101, x_4, x_102, x_103, x_98);
lean_dec_ref(x_99);
if (lean_is_scalar(x_68)) {
 x_105 = lean_alloc_ctor(0, 2, 0);
} else {
 x_105 = x_68;
}
lean_ctor_set(x_105, 0, x_6);
lean_ctor_set(x_105, 1, x_7);
x_106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_106, 0, x_100);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_108, 0, x_107);
return x_108;
}
}
}
}
case 2:
{
lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_129; uint8_t x_130; 
lean_dec_ref(x_3);
x_109 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_109);
x_110 = lean_ctor_get(x_5, 1);
lean_inc(x_110);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_111 = x_5;
} else {
 lean_dec_ref(x_5);
 x_111 = lean_box(0);
}
x_129 = lean_byte_array_size(x_109);
x_130 = lean_nat_dec_lt(x_110, x_129);
if (x_130 == 0)
{
lean_object* x_131; 
lean_dec(x_111);
lean_dec(x_110);
lean_dec_ref(x_109);
lean_dec(x_68);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec(x_2);
x_131 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_131;
}
else
{
if (x_130 == 0)
{
uint8_t x_132; lean_object* x_133; lean_object* x_134; uint8_t x_135; 
x_132 = l_instInhabitedUInt8;
x_133 = lean_box(x_132);
x_134 = l_outOfBounds___redArg(x_133);
x_135 = lean_unbox(x_134);
lean_dec(x_134);
x_112 = x_135;
goto block_128;
}
else
{
uint8_t x_136; 
x_136 = lean_byte_array_fget(x_109, x_110);
x_112 = x_136;
goto block_128;
}
}
block_128:
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; 
x_113 = lean_unsigned_to_nat(1u);
x_114 = lean_nat_add(x_110, x_113);
lean_dec(x_110);
if (lean_is_scalar(x_111)) {
 x_115 = lean_alloc_ctor(0, 2, 0);
} else {
 x_115 = x_111;
}
lean_ctor_set(x_115, 0, x_109);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_box(x_112);
x_117 = lean_mk_array(x_2, x_116);
x_118 = lean_byte_array_mk(x_117);
x_119 = lean_unsigned_to_nat(0u);
x_120 = lean_byte_array_size(x_4);
x_121 = lean_byte_array_size(x_118);
x_122 = 0;
x_123 = lean_byte_array_copy_slice(x_118, x_119, x_4, x_120, x_121, x_122);
lean_dec_ref(x_118);
if (lean_is_scalar(x_68)) {
 x_124 = lean_alloc_ctor(0, 2, 0);
} else {
 x_124 = x_68;
}
lean_ctor_set(x_124, 0, x_6);
lean_ctor_set(x_124, 1, x_7);
x_125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_125, 0, x_115);
lean_ctor_set(x_125, 1, x_124);
x_126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_126, 0, x_123);
lean_ctor_set(x_126, 1, x_125);
x_127 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_127, 0, x_126);
return x_127;
}
}
default: 
{
uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; uint8_t x_155; 
lean_dec(x_68);
x_137 = lean_ctor_get_uint8(x_67, 0);
lean_dec_ref(x_67);
x_138 = lean_uint8_to_nat(x_137);
x_139 = lean_unsigned_to_nat(0u);
x_155 = lean_nat_dec_eq(x_138, x_139);
if (x_155 == 0)
{
lean_object* x_156; uint8_t x_157; 
x_156 = lean_unsigned_to_nat(1u);
x_157 = lean_nat_dec_eq(x_138, x_156);
if (x_157 == 0)
{
lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; 
x_158 = lean_ctor_get(x_7, 0);
lean_inc(x_158);
x_159 = lean_ctor_get(x_7, 1);
lean_inc(x_159);
x_160 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_160);
x_161 = lean_ctor_get(x_7, 3);
lean_inc(x_161);
x_162 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_162);
x_163 = lean_unsigned_to_nat(2u);
x_164 = lean_nat_add(x_163, x_158);
x_165 = lean_nat_dec_lt(x_138, x_164);
if (x_165 == 0)
{
lean_object* x_166; uint8_t x_167; 
x_166 = lean_nat_add(x_164, x_159);
lean_dec(x_164);
x_167 = lean_nat_dec_lt(x_138, x_166);
lean_dec(x_166);
if (x_167 == 0)
{
lean_object* x_168; lean_object* x_169; 
lean_dec_ref(x_162);
lean_dec(x_161);
lean_dec_ref(x_160);
lean_dec(x_159);
lean_dec(x_158);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_168 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_168, 0, x_138);
x_169 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_169, 0, x_168);
return x_169;
}
else
{
lean_object* x_170; lean_object* x_171; lean_object* x_172; uint8_t x_173; lean_object* x_198; uint8_t x_199; 
x_170 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_170);
x_171 = lean_ctor_get(x_6, 1);
lean_inc(x_171);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_172 = x_6;
} else {
 lean_dec_ref(x_6);
 x_172 = lean_box(0);
}
x_198 = lean_byte_array_size(x_170);
x_199 = lean_nat_dec_lt(x_171, x_198);
if (x_199 == 0)
{
lean_object* x_200; 
lean_dec(x_172);
lean_dec(x_171);
lean_dec_ref(x_170);
lean_dec_ref(x_162);
lean_dec(x_161);
lean_dec_ref(x_160);
lean_dec(x_159);
lean_dec(x_158);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_200 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_200;
}
else
{
if (x_199 == 0)
{
uint8_t x_201; lean_object* x_202; lean_object* x_203; uint8_t x_204; 
x_201 = l_instInhabitedUInt8;
x_202 = lean_box(x_201);
x_203 = l_outOfBounds___redArg(x_202);
x_204 = lean_unbox(x_203);
lean_dec(x_203);
x_173 = x_204;
goto block_197;
}
else
{
uint8_t x_205; 
x_205 = lean_byte_array_fget(x_170, x_171);
x_173 = x_205;
goto block_197;
}
}
block_197:
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; uint8_t x_183; 
x_174 = lean_nat_add(x_171, x_156);
lean_dec(x_171);
if (lean_is_scalar(x_172)) {
 x_175 = lean_alloc_ctor(0, 2, 0);
} else {
 x_175 = x_172;
}
lean_ctor_set(x_175, 0, x_170);
lean_ctor_set(x_175, 1, x_174);
x_176 = lean_nat_sub(x_138, x_163);
x_177 = lean_nat_sub(x_176, x_158);
lean_dec(x_176);
x_178 = lean_unsigned_to_nat(256u);
x_179 = lean_nat_mul(x_177, x_178);
lean_dec(x_177);
x_180 = lean_uint8_to_nat(x_173);
x_181 = lean_nat_add(x_179, x_180);
lean_dec(x_179);
x_182 = lean_array_get(x_139, x_162, x_181);
lean_dec(x_181);
x_183 = lean_nat_dec_lt(x_139, x_158);
if (x_183 == 0)
{
x_140 = x_175;
x_141 = x_182;
x_142 = x_178;
x_143 = x_7;
x_144 = x_158;
x_145 = x_159;
x_146 = x_160;
x_147 = x_161;
x_148 = x_162;
goto block_154;
}
else
{
uint8_t x_184; 
x_184 = !lean_is_exclusive(x_7);
if (x_184 == 0)
{
lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
x_185 = lean_ctor_get(x_7, 4);
lean_dec(x_185);
x_186 = lean_ctor_get(x_7, 3);
lean_dec(x_186);
x_187 = lean_ctor_get(x_7, 2);
lean_dec(x_187);
x_188 = lean_ctor_get(x_7, 1);
lean_dec(x_188);
x_189 = lean_ctor_get(x_7, 0);
lean_dec(x_189);
lean_inc(x_182);
x_190 = lean_array_set(x_160, x_161, x_182);
x_191 = lean_nat_add(x_161, x_156);
lean_dec(x_161);
x_192 = lean_nat_mod(x_191, x_158);
lean_dec(x_191);
lean_inc_ref(x_162);
lean_inc(x_192);
lean_inc_ref(x_190);
lean_inc(x_159);
lean_inc(x_158);
lean_ctor_set(x_7, 3, x_192);
lean_ctor_set(x_7, 2, x_190);
x_140 = x_175;
x_141 = x_182;
x_142 = x_178;
x_143 = x_7;
x_144 = x_158;
x_145 = x_159;
x_146 = x_190;
x_147 = x_192;
x_148 = x_162;
goto block_154;
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_7);
lean_inc(x_182);
x_193 = lean_array_set(x_160, x_161, x_182);
x_194 = lean_nat_add(x_161, x_156);
lean_dec(x_161);
x_195 = lean_nat_mod(x_194, x_158);
lean_dec(x_194);
lean_inc_ref(x_162);
lean_inc(x_195);
lean_inc_ref(x_193);
lean_inc(x_159);
lean_inc(x_158);
x_196 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_196, 0, x_158);
lean_ctor_set(x_196, 1, x_159);
lean_ctor_set(x_196, 2, x_193);
lean_ctor_set(x_196, 3, x_195);
lean_ctor_set(x_196, 4, x_162);
x_140 = x_175;
x_141 = x_182;
x_142 = x_178;
x_143 = x_196;
x_144 = x_158;
x_145 = x_159;
x_146 = x_193;
x_147 = x_195;
x_148 = x_162;
goto block_154;
}
}
}
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_164);
x_206 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_206);
x_207 = lean_ctor_get(x_6, 1);
lean_inc(x_207);
lean_dec_ref(x_6);
x_208 = lean_unsigned_to_nat(5u);
x_209 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_206, x_207, x_139, x_208);
if (lean_obj_tag(x_209) == 0)
{
uint8_t x_210; 
lean_dec_ref(x_162);
lean_dec(x_161);
lean_dec_ref(x_160);
lean_dec(x_159);
lean_dec(x_158);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_210 = !lean_is_exclusive(x_209);
if (x_210 == 0)
{
return x_209;
}
else
{
lean_object* x_211; lean_object* x_212; 
x_211 = lean_ctor_get(x_209, 0);
lean_inc(x_211);
lean_dec(x_209);
x_212 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_212, 0, x_211);
return x_212;
}
}
else
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; uint8_t x_236; 
x_213 = lean_ctor_get(x_209, 0);
lean_inc(x_213);
lean_dec_ref(x_209);
x_214 = lean_ctor_get(x_213, 0);
lean_inc(x_214);
x_215 = lean_ctor_get(x_213, 1);
lean_inc(x_215);
if (lean_is_exclusive(x_213)) {
 lean_ctor_release(x_213, 0);
 lean_ctor_release(x_213, 1);
 x_216 = x_213;
} else {
 lean_dec_ref(x_213);
 x_216 = lean_box(0);
}
x_217 = lean_nat_sub(x_138, x_163);
x_218 = lean_array_get_borrowed(x_139, x_160, x_217);
lean_dec(x_217);
x_219 = lean_nat_add(x_218, x_214);
lean_dec(x_214);
x_236 = lean_nat_dec_lt(x_139, x_158);
if (x_236 == 0)
{
x_223 = x_7;
x_224 = x_158;
x_225 = x_159;
x_226 = x_160;
x_227 = x_161;
x_228 = x_162;
goto block_235;
}
else
{
uint8_t x_237; 
x_237 = !lean_is_exclusive(x_7);
if (x_237 == 0)
{
lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; 
x_238 = lean_ctor_get(x_7, 4);
lean_dec(x_238);
x_239 = lean_ctor_get(x_7, 3);
lean_dec(x_239);
x_240 = lean_ctor_get(x_7, 2);
lean_dec(x_240);
x_241 = lean_ctor_get(x_7, 1);
lean_dec(x_241);
x_242 = lean_ctor_get(x_7, 0);
lean_dec(x_242);
lean_inc(x_219);
x_243 = lean_array_set(x_160, x_161, x_219);
x_244 = lean_nat_add(x_161, x_156);
lean_dec(x_161);
x_245 = lean_nat_mod(x_244, x_158);
lean_dec(x_244);
lean_inc_ref(x_162);
lean_inc(x_245);
lean_inc_ref(x_243);
lean_inc(x_159);
lean_inc(x_158);
lean_ctor_set(x_7, 3, x_245);
lean_ctor_set(x_7, 2, x_243);
x_223 = x_7;
x_224 = x_158;
x_225 = x_159;
x_226 = x_243;
x_227 = x_245;
x_228 = x_162;
goto block_235;
}
else
{
lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_7);
lean_inc(x_219);
x_246 = lean_array_set(x_160, x_161, x_219);
x_247 = lean_nat_add(x_161, x_156);
lean_dec(x_161);
x_248 = lean_nat_mod(x_247, x_158);
lean_dec(x_247);
lean_inc_ref(x_162);
lean_inc(x_248);
lean_inc_ref(x_246);
lean_inc(x_159);
lean_inc(x_158);
x_249 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_249, 0, x_158);
lean_ctor_set(x_249, 1, x_159);
lean_ctor_set(x_249, 2, x_246);
lean_ctor_set(x_249, 3, x_248);
lean_ctor_set(x_249, 4, x_162);
x_223 = x_249;
x_224 = x_158;
x_225 = x_159;
x_226 = x_246;
x_227 = x_248;
x_228 = x_162;
goto block_235;
}
}
block_222:
{
lean_object* x_221; 
if (lean_is_scalar(x_216)) {
 x_221 = lean_alloc_ctor(0, 2, 0);
} else {
 x_221 = x_216;
}
lean_ctor_set(x_221, 0, x_215);
lean_ctor_set(x_221, 1, x_220);
x_15 = x_219;
x_16 = x_221;
goto block_61;
}
block_235:
{
uint8_t x_229; 
x_229 = lean_nat_dec_lt(x_139, x_225);
if (x_229 == 0)
{
lean_dec_ref(x_228);
lean_dec(x_227);
lean_dec_ref(x_226);
lean_dec(x_225);
lean_dec(x_224);
x_220 = x_223;
goto block_222;
}
else
{
lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
lean_dec_ref(x_223);
x_230 = lean_unsigned_to_nat(256u);
x_231 = lean_nat_mul(x_225, x_230);
x_232 = lean_nat_mod(x_219, x_231);
lean_dec(x_231);
lean_inc(x_219);
x_233 = lean_array_set(x_228, x_232, x_219);
lean_dec(x_232);
x_234 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_234, 0, x_224);
lean_ctor_set(x_234, 1, x_225);
lean_ctor_set(x_234, 2, x_226);
lean_ctor_set(x_234, 3, x_227);
lean_ctor_set(x_234, 4, x_233);
x_220 = x_234;
goto block_222;
}
}
}
}
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; 
x_250 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_250);
x_251 = lean_ctor_get(x_6, 1);
lean_inc(x_251);
lean_dec_ref(x_6);
x_252 = lean_unsigned_to_nat(5u);
x_253 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_250, x_251, x_139, x_252);
if (lean_obj_tag(x_253) == 0)
{
uint8_t x_254; 
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_254 = !lean_is_exclusive(x_253);
if (x_254 == 0)
{
return x_253;
}
else
{
lean_object* x_255; lean_object* x_256; 
x_255 = lean_ctor_get(x_253, 0);
lean_inc(x_255);
lean_dec(x_253);
x_256 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_256, 0, x_255);
return x_256;
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_283; 
x_257 = lean_ctor_get(x_253, 0);
lean_inc(x_257);
lean_dec_ref(x_253);
x_258 = lean_ctor_get(x_257, 0);
lean_inc(x_258);
x_259 = lean_ctor_get(x_257, 1);
lean_inc(x_259);
if (lean_is_exclusive(x_257)) {
 lean_ctor_release(x_257, 0);
 lean_ctor_release(x_257, 1);
 x_260 = x_257;
} else {
 lean_dec_ref(x_257);
 x_260 = lean_box(0);
}
x_261 = lean_ctor_get(x_7, 0);
lean_inc(x_261);
x_262 = lean_ctor_get(x_7, 1);
lean_inc(x_262);
x_263 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_263);
x_264 = lean_ctor_get(x_7, 3);
lean_inc(x_264);
x_265 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_265);
x_266 = lean_nat_sub(x_8, x_258);
lean_dec(x_258);
x_283 = lean_nat_dec_lt(x_139, x_261);
if (x_283 == 0)
{
x_270 = x_7;
x_271 = x_261;
x_272 = x_262;
x_273 = x_263;
x_274 = x_264;
x_275 = x_265;
goto block_282;
}
else
{
uint8_t x_284; 
x_284 = !lean_is_exclusive(x_7);
if (x_284 == 0)
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; 
x_285 = lean_ctor_get(x_7, 4);
lean_dec(x_285);
x_286 = lean_ctor_get(x_7, 3);
lean_dec(x_286);
x_287 = lean_ctor_get(x_7, 2);
lean_dec(x_287);
x_288 = lean_ctor_get(x_7, 1);
lean_dec(x_288);
x_289 = lean_ctor_get(x_7, 0);
lean_dec(x_289);
lean_inc(x_266);
x_290 = lean_array_set(x_263, x_264, x_266);
x_291 = lean_nat_add(x_264, x_156);
lean_dec(x_264);
x_292 = lean_nat_mod(x_291, x_261);
lean_dec(x_291);
lean_inc_ref(x_265);
lean_inc(x_292);
lean_inc_ref(x_290);
lean_inc(x_262);
lean_inc(x_261);
lean_ctor_set(x_7, 3, x_292);
lean_ctor_set(x_7, 2, x_290);
x_270 = x_7;
x_271 = x_261;
x_272 = x_262;
x_273 = x_290;
x_274 = x_292;
x_275 = x_265;
goto block_282;
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; 
lean_dec(x_7);
lean_inc(x_266);
x_293 = lean_array_set(x_263, x_264, x_266);
x_294 = lean_nat_add(x_264, x_156);
lean_dec(x_264);
x_295 = lean_nat_mod(x_294, x_261);
lean_dec(x_294);
lean_inc_ref(x_265);
lean_inc(x_295);
lean_inc_ref(x_293);
lean_inc(x_262);
lean_inc(x_261);
x_296 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_296, 0, x_261);
lean_ctor_set(x_296, 1, x_262);
lean_ctor_set(x_296, 2, x_293);
lean_ctor_set(x_296, 3, x_295);
lean_ctor_set(x_296, 4, x_265);
x_270 = x_296;
x_271 = x_261;
x_272 = x_262;
x_273 = x_293;
x_274 = x_295;
x_275 = x_265;
goto block_282;
}
}
block_269:
{
lean_object* x_268; 
if (lean_is_scalar(x_260)) {
 x_268 = lean_alloc_ctor(0, 2, 0);
} else {
 x_268 = x_260;
}
lean_ctor_set(x_268, 0, x_259);
lean_ctor_set(x_268, 1, x_267);
x_15 = x_266;
x_16 = x_268;
goto block_61;
}
block_282:
{
uint8_t x_276; 
x_276 = lean_nat_dec_lt(x_139, x_272);
if (x_276 == 0)
{
lean_dec_ref(x_275);
lean_dec(x_274);
lean_dec_ref(x_273);
lean_dec(x_272);
lean_dec(x_271);
x_267 = x_270;
goto block_269;
}
else
{
lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; 
lean_dec_ref(x_270);
x_277 = lean_unsigned_to_nat(256u);
x_278 = lean_nat_mul(x_272, x_277);
x_279 = lean_nat_mod(x_266, x_278);
lean_dec(x_278);
lean_inc(x_266);
x_280 = lean_array_set(x_275, x_279, x_266);
lean_dec(x_279);
x_281 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_281, 0, x_271);
lean_ctor_set(x_281, 1, x_272);
lean_ctor_set(x_281, 2, x_273);
lean_ctor_set(x_281, 3, x_274);
lean_ctor_set(x_281, 4, x_280);
x_267 = x_281;
goto block_269;
}
}
}
}
}
else
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; 
x_297 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_297);
x_298 = lean_ctor_get(x_6, 1);
lean_inc(x_298);
lean_dec_ref(x_6);
x_299 = lean_unsigned_to_nat(5u);
x_300 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_297, x_298, x_139, x_299);
if (lean_obj_tag(x_300) == 0)
{
uint8_t x_301; 
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_301 = !lean_is_exclusive(x_300);
if (x_301 == 0)
{
return x_300;
}
else
{
lean_object* x_302; lean_object* x_303; 
x_302 = lean_ctor_get(x_300, 0);
lean_inc(x_302);
lean_dec(x_300);
x_303 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_303, 0, x_302);
return x_303;
}
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_328; uint8_t x_329; 
x_304 = lean_ctor_get(x_300, 0);
lean_inc(x_304);
lean_dec_ref(x_300);
x_305 = lean_ctor_get(x_304, 0);
lean_inc(x_305);
x_306 = lean_ctor_get(x_304, 1);
lean_inc(x_306);
if (lean_is_exclusive(x_304)) {
 lean_ctor_release(x_304, 0);
 lean_ctor_release(x_304, 1);
 x_307 = x_304;
} else {
 lean_dec_ref(x_304);
 x_307 = lean_box(0);
}
x_324 = lean_ctor_get(x_7, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_7, 1);
lean_inc(x_325);
x_326 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_326);
x_327 = lean_ctor_get(x_7, 3);
lean_inc(x_327);
x_328 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_328);
x_329 = lean_nat_dec_lt(x_139, x_324);
if (x_329 == 0)
{
x_311 = x_7;
x_312 = x_324;
x_313 = x_325;
x_314 = x_326;
x_315 = x_327;
x_316 = x_328;
goto block_323;
}
else
{
uint8_t x_330; 
x_330 = !lean_is_exclusive(x_7);
if (x_330 == 0)
{
lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; 
x_331 = lean_ctor_get(x_7, 4);
lean_dec(x_331);
x_332 = lean_ctor_get(x_7, 3);
lean_dec(x_332);
x_333 = lean_ctor_get(x_7, 2);
lean_dec(x_333);
x_334 = lean_ctor_get(x_7, 1);
lean_dec(x_334);
x_335 = lean_ctor_get(x_7, 0);
lean_dec(x_335);
lean_inc(x_305);
x_336 = lean_array_set(x_326, x_327, x_305);
x_337 = lean_unsigned_to_nat(1u);
x_338 = lean_nat_add(x_327, x_337);
lean_dec(x_327);
x_339 = lean_nat_mod(x_338, x_324);
lean_dec(x_338);
lean_inc_ref(x_328);
lean_inc(x_339);
lean_inc_ref(x_336);
lean_inc(x_325);
lean_inc(x_324);
lean_ctor_set(x_7, 3, x_339);
lean_ctor_set(x_7, 2, x_336);
x_311 = x_7;
x_312 = x_324;
x_313 = x_325;
x_314 = x_336;
x_315 = x_339;
x_316 = x_328;
goto block_323;
}
else
{
lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; lean_object* x_344; 
lean_dec(x_7);
lean_inc(x_305);
x_340 = lean_array_set(x_326, x_327, x_305);
x_341 = lean_unsigned_to_nat(1u);
x_342 = lean_nat_add(x_327, x_341);
lean_dec(x_327);
x_343 = lean_nat_mod(x_342, x_324);
lean_dec(x_342);
lean_inc_ref(x_328);
lean_inc(x_343);
lean_inc_ref(x_340);
lean_inc(x_325);
lean_inc(x_324);
x_344 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_344, 0, x_324);
lean_ctor_set(x_344, 1, x_325);
lean_ctor_set(x_344, 2, x_340);
lean_ctor_set(x_344, 3, x_343);
lean_ctor_set(x_344, 4, x_328);
x_311 = x_344;
x_312 = x_324;
x_313 = x_325;
x_314 = x_340;
x_315 = x_343;
x_316 = x_328;
goto block_323;
}
}
block_310:
{
lean_object* x_309; 
if (lean_is_scalar(x_307)) {
 x_309 = lean_alloc_ctor(0, 2, 0);
} else {
 x_309 = x_307;
}
lean_ctor_set(x_309, 0, x_306);
lean_ctor_set(x_309, 1, x_308);
x_15 = x_305;
x_16 = x_309;
goto block_61;
}
block_323:
{
uint8_t x_317; 
x_317 = lean_nat_dec_lt(x_139, x_313);
if (x_317 == 0)
{
lean_dec_ref(x_316);
lean_dec(x_315);
lean_dec_ref(x_314);
lean_dec(x_313);
lean_dec(x_312);
x_308 = x_311;
goto block_310;
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; lean_object* x_322; 
lean_dec_ref(x_311);
x_318 = lean_unsigned_to_nat(256u);
x_319 = lean_nat_mul(x_313, x_318);
x_320 = lean_nat_mod(x_305, x_319);
lean_dec(x_319);
lean_inc(x_305);
x_321 = lean_array_set(x_316, x_320, x_305);
lean_dec(x_320);
x_322 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_322, 0, x_312);
lean_ctor_set(x_322, 1, x_313);
lean_ctor_set(x_322, 2, x_314);
lean_ctor_set(x_322, 3, x_315);
lean_ctor_set(x_322, 4, x_321);
x_308 = x_322;
goto block_310;
}
}
}
}
block_154:
{
uint8_t x_149; 
x_149 = lean_nat_dec_lt(x_139, x_145);
if (x_149 == 0)
{
lean_dec_ref(x_148);
lean_dec(x_147);
lean_dec_ref(x_146);
lean_dec(x_145);
lean_dec(x_144);
x_62 = x_140;
x_63 = x_141;
x_64 = x_143;
goto block_66;
}
else
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec_ref(x_143);
x_150 = lean_nat_mul(x_145, x_142);
x_151 = lean_nat_mod(x_141, x_150);
lean_dec(x_150);
lean_inc(x_141);
x_152 = lean_array_set(x_148, x_151, x_141);
lean_dec(x_151);
x_153 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_153, 0, x_144);
lean_ctor_set(x_153, 1, x_145);
lean_ctor_set(x_153, 2, x_146);
lean_ctor_set(x_153, 3, x_147);
lean_ctor_set(x_153, 4, x_152);
x_62 = x_140;
x_63 = x_141;
x_64 = x_153;
goto block_66;
}
}
}
}
block_14:
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_5);
lean_ctor_set(x_11, 1, x_9);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
block_61:
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; 
x_17 = lean_byte_array_size(x_3);
x_18 = lean_byte_array_size(x_4);
x_19 = lean_nat_add(x_17, x_18);
x_20 = lean_nat_dec_le(x_19, x_15);
if (x_20 == 0)
{
lean_object* x_21; uint8_t x_22; 
lean_dec(x_19);
x_21 = lean_nat_add(x_15, x_2);
x_22 = lean_nat_dec_le(x_21, x_17);
if (x_22 == 0)
{
uint8_t x_23; 
lean_dec(x_21);
x_23 = lean_nat_dec_le(x_17, x_15);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_24 = lean_nat_sub(x_17, x_15);
x_25 = lean_nat_sub(x_2, x_24);
lean_dec(x_24);
lean_dec(x_2);
x_26 = l_ByteArray_extract(x_3, x_15, x_17);
x_27 = lean_unsigned_to_nat(0u);
x_28 = lean_byte_array_size(x_26);
x_29 = lean_byte_array_copy_slice(x_26, x_27, x_4, x_18, x_28, x_23);
lean_dec_ref(x_26);
x_30 = lean_byte_array_size(x_29);
x_31 = lean_nat_sub(x_30, x_17);
x_32 = lean_nat_dec_le(x_25, x_31);
lean_dec(x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
x_33 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_33, 0, x_17);
lean_closure_set(x_33, 1, x_3);
x_34 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_35 = lean_unsigned_to_nat(1u);
x_36 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_36, 0, x_27);
lean_ctor_set(x_36, 1, x_25);
lean_ctor_set(x_36, 2, x_35);
x_37 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_34, x_36, x_33, x_29, x_27);
x_9 = x_16;
x_10 = x_37;
goto block_14;
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec_ref(x_3);
x_38 = lean_nat_add(x_17, x_25);
lean_dec(x_25);
x_39 = l_ByteArray_extract(x_29, x_17, x_38);
lean_dec(x_38);
x_40 = lean_byte_array_size(x_39);
x_41 = lean_byte_array_copy_slice(x_39, x_27, x_29, x_30, x_40, x_23);
lean_dec_ref(x_39);
x_9 = x_16;
x_10 = x_41;
goto block_14;
}
}
else
{
lean_object* x_42; lean_object* x_43; uint8_t x_44; 
lean_dec_ref(x_3);
x_42 = lean_nat_sub(x_15, x_17);
lean_dec(x_15);
x_43 = lean_nat_add(x_42, x_2);
x_44 = lean_nat_dec_le(x_43, x_18);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
lean_dec(x_43);
x_45 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed), 4, 1);
lean_closure_set(x_45, 0, x_42);
x_46 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_47 = lean_unsigned_to_nat(0u);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_2);
lean_ctor_set(x_49, 2, x_48);
x_50 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_46, x_49, x_45, x_4, x_47);
x_9 = x_16;
x_10 = x_50;
goto block_14;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
lean_dec(x_2);
x_51 = l_ByteArray_extract(x_4, x_42, x_43);
lean_dec(x_43);
x_52 = lean_unsigned_to_nat(0u);
x_53 = lean_byte_array_size(x_51);
x_54 = lean_byte_array_copy_slice(x_51, x_52, x_4, x_18, x_53, x_22);
lean_dec_ref(x_51);
x_9 = x_16;
x_10 = x_54;
goto block_14;
}
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
lean_dec(x_2);
x_55 = l_ByteArray_extract(x_3, x_15, x_21);
lean_dec(x_21);
lean_dec_ref(x_3);
x_56 = lean_unsigned_to_nat(0u);
x_57 = lean_byte_array_size(x_55);
x_58 = lean_byte_array_copy_slice(x_55, x_56, x_4, x_18, x_57, x_20);
lean_dec_ref(x_55);
x_9 = x_16;
x_10 = x_58;
goto block_14;
}
}
else
{
lean_object* x_59; lean_object* x_60; 
lean_dec_ref(x_16);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_59 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_59, 0, x_15);
lean_ctor_set(x_59, 1, x_2);
lean_ctor_set(x_59, 2, x_19);
x_60 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_60, 0, x_59);
return x_60;
}
}
block_66:
{
lean_object* x_65; 
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_62);
lean_ctor_set(x_65, 1, x_64);
x_15 = x_63;
x_16 = x_65;
goto block_61;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_71; lean_object* x_72; lean_object* x_73; uint8_t x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; lean_object* x_149; lean_object* x_150; lean_object* x_151; uint8_t x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; uint8_t x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_186; lean_object* x_187; lean_object* x_188; uint8_t x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_199; lean_object* x_200; lean_object* x_201; uint8_t x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_236; lean_object* x_237; lean_object* x_238; uint8_t x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_260; uint8_t x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; uint8_t x_268; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; uint8_t x_475; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; uint8_t x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; uint8_t x_591; lean_object* x_592; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; uint8_t x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; uint8_t x_628; lean_object* x_629; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; uint8_t x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; uint8_t x_665; lean_object* x_666; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; uint8_t x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; uint8_t x_702; lean_object* x_703; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; uint8_t x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; uint8_t x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; uint8_t x_753; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; uint8_t x_778; uint8_t x_779; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; uint8_t x_1096; uint8_t x_1107; lean_object* x_1123; uint8_t x_1124; 
x_1088 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_1088);
x_1089 = lean_ctor_get(x_3, 1);
lean_inc(x_1089);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1090 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1090 = lean_box(0);
}
x_1123 = lean_byte_array_size(x_1088);
x_1124 = lean_nat_dec_lt(x_1089, x_1123);
if (x_1124 == 0)
{
lean_object* x_1125; 
lean_dec(x_1090);
lean_dec(x_1089);
lean_dec_ref(x_1088);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1125 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1125;
}
else
{
if (x_1124 == 0)
{
uint8_t x_1126; lean_object* x_1127; lean_object* x_1128; uint8_t x_1129; 
x_1126 = l_instInhabitedUInt8;
x_1127 = lean_box(x_1126);
x_1128 = l_outOfBounds___redArg(x_1127);
x_1129 = lean_unbox(x_1128);
lean_dec(x_1128);
x_1107 = x_1129;
goto block_1122;
}
else
{
uint8_t x_1130; 
x_1130 = lean_byte_array_fget(x_1088, x_1089);
x_1107 = x_1130;
goto block_1122;
}
}
block_13:
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_11, 0, x_8);
lean_ctor_set(x_11, 1, x_10);
x_12 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_12, 0, x_11);
return x_12;
}
block_19:
{
lean_object* x_18; 
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_15);
lean_ctor_set(x_18, 1, x_14);
x_7 = x_16;
x_8 = x_17;
x_9 = x_18;
goto block_13;
}
block_70:
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_byte_array_size(x_24);
x_31 = lean_nat_add(x_27, x_30);
x_32 = lean_nat_dec_le(x_31, x_28);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
lean_dec(x_31);
x_33 = lean_nat_add(x_28, x_25);
x_34 = lean_nat_dec_le(x_33, x_27);
if (x_34 == 0)
{
uint8_t x_35; 
lean_dec(x_33);
x_35 = lean_nat_dec_le(x_27, x_28);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_36 = lean_nat_sub(x_27, x_28);
x_37 = lean_nat_sub(x_25, x_36);
lean_dec(x_36);
lean_dec(x_25);
x_38 = l_ByteArray_extract(x_1, x_28, x_27);
lean_dec_ref(x_1);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_byte_array_size(x_38);
x_41 = lean_byte_array_copy_slice(x_38, x_39, x_24, x_30, x_40, x_23);
lean_dec_ref(x_38);
x_42 = lean_byte_array_size(x_41);
x_43 = lean_nat_sub(x_42, x_27);
x_44 = lean_nat_dec_le(x_37, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_27);
x_45 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_39);
lean_ctor_set(x_46, 1, x_37);
lean_ctor_set(x_46, 2, x_22);
x_47 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_45, x_46, x_20, x_41, x_39);
x_14 = x_29;
x_15 = x_21;
x_16 = x_26;
x_17 = x_47;
goto block_19;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_22);
lean_dec_ref(x_20);
x_48 = lean_nat_add(x_27, x_37);
lean_dec(x_37);
x_49 = l_ByteArray_extract(x_41, x_27, x_48);
lean_dec(x_48);
x_50 = lean_byte_array_size(x_49);
x_51 = lean_byte_array_copy_slice(x_49, x_39, x_41, x_42, x_50, x_23);
lean_dec_ref(x_49);
x_14 = x_29;
x_15 = x_21;
x_16 = x_26;
x_17 = x_51;
goto block_19;
}
}
else
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec_ref(x_20);
lean_dec_ref(x_1);
x_52 = lean_nat_sub(x_28, x_27);
lean_dec(x_27);
lean_dec(x_28);
x_53 = lean_nat_add(x_52, x_25);
x_54 = lean_nat_dec_le(x_53, x_30);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; 
lean_dec(x_53);
x_55 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed), 4, 1);
lean_closure_set(x_55, 0, x_52);
x_56 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_57 = lean_unsigned_to_nat(0u);
x_58 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_58, 0, x_57);
lean_ctor_set(x_58, 1, x_25);
lean_ctor_set(x_58, 2, x_22);
x_59 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_56, x_58, x_55, x_24, x_57);
x_14 = x_29;
x_15 = x_21;
x_16 = x_26;
x_17 = x_59;
goto block_19;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_25);
lean_dec(x_22);
x_60 = l_ByteArray_extract(x_24, x_52, x_53);
lean_dec(x_53);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_byte_array_size(x_60);
x_63 = lean_byte_array_copy_slice(x_60, x_61, x_24, x_30, x_62, x_23);
lean_dec_ref(x_60);
x_14 = x_29;
x_15 = x_21;
x_16 = x_26;
x_17 = x_63;
goto block_19;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_27);
lean_dec(x_25);
lean_dec(x_22);
lean_dec_ref(x_20);
x_64 = l_ByteArray_extract(x_1, x_28, x_33);
lean_dec(x_33);
lean_dec_ref(x_1);
x_65 = lean_unsigned_to_nat(0u);
x_66 = lean_byte_array_size(x_64);
x_67 = lean_byte_array_copy_slice(x_64, x_65, x_24, x_30, x_66, x_23);
lean_dec_ref(x_64);
x_14 = x_29;
x_15 = x_21;
x_16 = x_26;
x_17 = x_67;
goto block_19;
}
}
else
{
lean_object* x_68; lean_object* x_69; 
lean_dec_ref(x_29);
lean_dec(x_27);
lean_dec_ref(x_26);
lean_dec_ref(x_24);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec_ref(x_20);
lean_dec_ref(x_1);
x_68 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_68, 0, x_28);
lean_ctor_set(x_68, 1, x_25);
lean_ctor_set(x_68, 2, x_31);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
}
block_83:
{
lean_object* x_82; 
x_82 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_82, 0, x_76);
lean_ctor_set(x_82, 1, x_81);
x_20 = x_71;
x_21 = x_72;
x_22 = x_75;
x_23 = x_74;
x_24 = x_73;
x_25 = x_77;
x_26 = x_78;
x_27 = x_79;
x_28 = x_80;
x_29 = x_82;
goto block_70;
}
block_107:
{
uint8_t x_102; 
x_102 = lean_nat_dec_lt(x_92, x_98);
lean_dec(x_92);
if (x_102 == 0)
{
lean_dec_ref(x_101);
lean_dec(x_100);
lean_dec_ref(x_99);
lean_dec(x_98);
lean_dec(x_97);
x_71 = x_84;
x_72 = x_85;
x_73 = x_89;
x_74 = x_88;
x_75 = x_87;
x_76 = x_86;
x_77 = x_90;
x_78 = x_91;
x_79 = x_95;
x_80 = x_94;
x_81 = x_96;
goto block_83;
}
else
{
lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; 
lean_dec_ref(x_96);
x_103 = lean_nat_mul(x_98, x_93);
x_104 = lean_nat_mod(x_94, x_103);
lean_dec(x_103);
lean_inc(x_94);
x_105 = lean_array_set(x_101, x_104, x_94);
lean_dec(x_104);
x_106 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_106, 0, x_97);
lean_ctor_set(x_106, 1, x_98);
lean_ctor_set(x_106, 2, x_99);
lean_ctor_set(x_106, 3, x_100);
lean_ctor_set(x_106, 4, x_105);
x_71 = x_84;
x_72 = x_85;
x_73 = x_89;
x_74 = x_88;
x_75 = x_87;
x_76 = x_86;
x_77 = x_90;
x_78 = x_91;
x_79 = x_95;
x_80 = x_94;
x_81 = x_106;
goto block_83;
}
}
block_148:
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; uint8_t x_138; 
x_128 = lean_nat_add(x_117, x_110);
lean_dec(x_117);
x_129 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_129, 0, x_113);
lean_ctor_set(x_129, 1, x_128);
x_130 = lean_nat_sub(x_116, x_124);
lean_dec(x_116);
x_131 = lean_nat_sub(x_130, x_126);
lean_dec(x_130);
x_132 = lean_unsigned_to_nat(0u);
x_133 = lean_unsigned_to_nat(256u);
x_134 = lean_nat_mul(x_131, x_133);
lean_dec(x_131);
x_135 = lean_uint8_to_nat(x_127);
x_136 = lean_nat_add(x_134, x_135);
lean_dec(x_134);
x_137 = lean_array_get(x_132, x_120, x_136);
lean_dec(x_136);
x_138 = lean_nat_dec_lt(x_123, x_126);
if (x_138 == 0)
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; 
lean_dec(x_126);
lean_dec(x_122);
lean_dec_ref(x_120);
lean_dec(x_119);
lean_dec_ref(x_115);
x_139 = lean_ctor_get(x_125, 0);
lean_inc(x_139);
x_140 = lean_ctor_get(x_125, 1);
lean_inc(x_140);
x_141 = lean_ctor_get(x_125, 2);
lean_inc_ref(x_141);
x_142 = lean_ctor_get(x_125, 3);
lean_inc(x_142);
x_143 = lean_ctor_get(x_125, 4);
lean_inc_ref(x_143);
x_84 = x_108;
x_85 = x_109;
x_86 = x_129;
x_87 = x_110;
x_88 = x_112;
x_89 = x_111;
x_90 = x_114;
x_91 = x_121;
x_92 = x_123;
x_93 = x_133;
x_94 = x_137;
x_95 = x_118;
x_96 = x_125;
x_97 = x_139;
x_98 = x_140;
x_99 = x_141;
x_100 = x_142;
x_101 = x_143;
goto block_107;
}
else
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec_ref(x_125);
lean_inc(x_137);
x_144 = lean_array_set(x_115, x_122, x_137);
x_145 = lean_nat_add(x_122, x_110);
lean_dec(x_122);
x_146 = lean_nat_mod(x_145, x_126);
lean_dec(x_145);
lean_inc_ref(x_120);
lean_inc(x_146);
lean_inc_ref(x_144);
lean_inc(x_119);
lean_inc(x_126);
x_147 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_147, 0, x_126);
lean_ctor_set(x_147, 1, x_119);
lean_ctor_set(x_147, 2, x_144);
lean_ctor_set(x_147, 3, x_146);
lean_ctor_set(x_147, 4, x_120);
x_84 = x_108;
x_85 = x_109;
x_86 = x_129;
x_87 = x_110;
x_88 = x_112;
x_89 = x_111;
x_90 = x_114;
x_91 = x_121;
x_92 = x_123;
x_93 = x_133;
x_94 = x_137;
x_95 = x_118;
x_96 = x_147;
x_97 = x_126;
x_98 = x_119;
x_99 = x_144;
x_100 = x_146;
x_101 = x_120;
goto block_107;
}
}
block_161:
{
lean_object* x_160; 
x_160 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_160, 0, x_157);
lean_ctor_set(x_160, 1, x_159);
x_20 = x_149;
x_21 = x_150;
x_22 = x_153;
x_23 = x_152;
x_24 = x_151;
x_25 = x_155;
x_26 = x_156;
x_27 = x_158;
x_28 = x_154;
x_29 = x_160;
goto block_70;
}
block_185:
{
uint8_t x_179; 
x_179 = lean_nat_dec_lt(x_171, x_175);
lean_dec(x_171);
if (x_179 == 0)
{
lean_dec_ref(x_178);
lean_dec(x_177);
lean_dec_ref(x_176);
lean_dec(x_175);
lean_dec(x_174);
x_149 = x_162;
x_150 = x_163;
x_151 = x_167;
x_152 = x_166;
x_153 = x_165;
x_154 = x_164;
x_155 = x_168;
x_156 = x_169;
x_157 = x_170;
x_158 = x_172;
x_159 = x_173;
goto block_161;
}
else
{
lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; 
lean_dec_ref(x_173);
x_180 = lean_unsigned_to_nat(256u);
x_181 = lean_nat_mul(x_175, x_180);
x_182 = lean_nat_mod(x_164, x_181);
lean_dec(x_181);
lean_inc(x_164);
x_183 = lean_array_set(x_178, x_182, x_164);
lean_dec(x_182);
x_184 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_184, 0, x_174);
lean_ctor_set(x_184, 1, x_175);
lean_ctor_set(x_184, 2, x_176);
lean_ctor_set(x_184, 3, x_177);
lean_ctor_set(x_184, 4, x_183);
x_149 = x_162;
x_150 = x_163;
x_151 = x_167;
x_152 = x_166;
x_153 = x_165;
x_154 = x_164;
x_155 = x_168;
x_156 = x_169;
x_157 = x_170;
x_158 = x_172;
x_159 = x_184;
goto block_161;
}
}
block_198:
{
lean_object* x_197; 
x_197 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_197, 0, x_194);
lean_ctor_set(x_197, 1, x_196);
x_20 = x_186;
x_21 = x_187;
x_22 = x_190;
x_23 = x_189;
x_24 = x_188;
x_25 = x_191;
x_26 = x_193;
x_27 = x_195;
x_28 = x_192;
x_29 = x_197;
goto block_70;
}
block_222:
{
uint8_t x_216; 
x_216 = lean_nat_dec_lt(x_207, x_212);
lean_dec(x_207);
if (x_216 == 0)
{
lean_dec_ref(x_215);
lean_dec(x_214);
lean_dec_ref(x_213);
lean_dec(x_212);
lean_dec(x_211);
x_186 = x_199;
x_187 = x_200;
x_188 = x_203;
x_189 = x_202;
x_190 = x_201;
x_191 = x_205;
x_192 = x_204;
x_193 = x_206;
x_194 = x_208;
x_195 = x_209;
x_196 = x_210;
goto block_198;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec_ref(x_210);
x_217 = lean_unsigned_to_nat(256u);
x_218 = lean_nat_mul(x_212, x_217);
x_219 = lean_nat_mod(x_204, x_218);
lean_dec(x_218);
lean_inc(x_204);
x_220 = lean_array_set(x_215, x_219, x_204);
lean_dec(x_219);
x_221 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_221, 0, x_211);
lean_ctor_set(x_221, 1, x_212);
lean_ctor_set(x_221, 2, x_213);
lean_ctor_set(x_221, 3, x_214);
lean_ctor_set(x_221, 4, x_220);
x_186 = x_199;
x_187 = x_200;
x_188 = x_203;
x_189 = x_202;
x_190 = x_201;
x_191 = x_205;
x_192 = x_204;
x_193 = x_206;
x_194 = x_208;
x_195 = x_209;
x_196 = x_221;
goto block_198;
}
}
block_235:
{
lean_object* x_234; 
x_234 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_234, 0, x_229);
lean_ctor_set(x_234, 1, x_233);
x_20 = x_223;
x_21 = x_224;
x_22 = x_227;
x_23 = x_226;
x_24 = x_225;
x_25 = x_228;
x_26 = x_230;
x_27 = x_231;
x_28 = x_232;
x_29 = x_234;
goto block_70;
}
block_259:
{
uint8_t x_253; 
x_253 = lean_nat_dec_lt(x_244, x_249);
lean_dec(x_244);
if (x_253 == 0)
{
lean_dec_ref(x_252);
lean_dec(x_251);
lean_dec_ref(x_250);
lean_dec(x_249);
lean_dec(x_248);
x_223 = x_236;
x_224 = x_237;
x_225 = x_240;
x_226 = x_239;
x_227 = x_238;
x_228 = x_242;
x_229 = x_241;
x_230 = x_243;
x_231 = x_246;
x_232 = x_245;
x_233 = x_247;
goto block_235;
}
else
{
lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; 
lean_dec_ref(x_247);
x_254 = lean_unsigned_to_nat(256u);
x_255 = lean_nat_mul(x_249, x_254);
x_256 = lean_nat_mod(x_245, x_255);
lean_dec(x_255);
lean_inc(x_245);
x_257 = lean_array_set(x_252, x_256, x_245);
lean_dec(x_256);
x_258 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_258, 0, x_248);
lean_ctor_set(x_258, 1, x_249);
lean_ctor_set(x_258, 2, x_250);
lean_ctor_set(x_258, 3, x_251);
lean_ctor_set(x_258, 4, x_257);
x_223 = x_236;
x_224 = x_237;
x_225 = x_240;
x_226 = x_239;
x_227 = x_238;
x_228 = x_242;
x_229 = x_241;
x_230 = x_243;
x_231 = x_246;
x_232 = x_245;
x_233 = x_258;
goto block_235;
}
}
block_279:
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
x_269 = lean_nat_add(x_267, x_263);
lean_dec(x_263);
lean_dec(x_267);
x_270 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_270, 0, x_266);
lean_ctor_set(x_270, 1, x_269);
x_271 = lean_box(x_268);
x_272 = lean_mk_array(x_264, x_271);
x_273 = lean_byte_array_mk(x_272);
x_274 = lean_unsigned_to_nat(0u);
x_275 = lean_byte_array_size(x_262);
x_276 = lean_byte_array_size(x_273);
x_277 = lean_byte_array_copy_slice(x_273, x_274, x_262, x_275, x_276, x_261);
lean_dec_ref(x_273);
x_278 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_278, 0, x_270);
lean_ctor_set(x_278, 1, x_260);
x_7 = x_265;
x_8 = x_277;
x_9 = x_278;
goto block_13;
}
block_447:
{
lean_object* x_292; uint8_t x_293; 
x_292 = lean_box(0);
x_293 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_286, x_292);
if (x_293 == 0)
{
switch (lean_obj_tag(x_286)) {
case 0:
{
lean_dec(x_290);
lean_dec_ref(x_289);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_283);
lean_dec_ref(x_282);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_7 = x_291;
x_8 = x_284;
x_9 = x_281;
goto block_13;
}
case 1:
{
uint8_t x_294; 
lean_dec_ref(x_289);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_281);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_294 = !lean_is_exclusive(x_283);
if (x_294 == 0)
{
lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; uint8_t x_299; 
x_295 = lean_ctor_get(x_283, 0);
x_296 = lean_ctor_get(x_283, 1);
x_297 = lean_nat_add(x_296, x_290);
lean_dec(x_290);
x_298 = lean_byte_array_size(x_295);
x_299 = lean_nat_dec_le(x_297, x_298);
if (x_299 == 0)
{
lean_object* x_300; 
lean_dec(x_297);
lean_free_object(x_283);
lean_dec(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_291);
lean_dec_ref(x_284);
lean_dec_ref(x_282);
x_300 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_300;
}
else
{
if (x_299 == 0)
{
lean_object* x_301; 
lean_dec(x_297);
lean_free_object(x_283);
lean_dec(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_291);
lean_dec_ref(x_284);
lean_dec_ref(x_282);
x_301 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_301;
}
else
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_302 = l_ByteArray_extract(x_295, x_296, x_297);
lean_ctor_set(x_283, 1, x_297);
x_303 = lean_unsigned_to_nat(0u);
x_304 = lean_byte_array_size(x_284);
x_305 = lean_byte_array_size(x_302);
x_306 = lean_byte_array_copy_slice(x_302, x_303, x_284, x_304, x_305, x_293);
lean_dec_ref(x_302);
x_307 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_307, 0, x_283);
lean_ctor_set(x_307, 1, x_282);
x_7 = x_291;
x_8 = x_306;
x_9 = x_307;
goto block_13;
}
}
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; uint8_t x_312; 
x_308 = lean_ctor_get(x_283, 0);
x_309 = lean_ctor_get(x_283, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_283);
x_310 = lean_nat_add(x_309, x_290);
lean_dec(x_290);
x_311 = lean_byte_array_size(x_308);
x_312 = lean_nat_dec_le(x_310, x_311);
if (x_312 == 0)
{
lean_object* x_313; 
lean_dec(x_310);
lean_dec(x_309);
lean_dec_ref(x_308);
lean_dec_ref(x_291);
lean_dec_ref(x_284);
lean_dec_ref(x_282);
x_313 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_313;
}
else
{
if (x_312 == 0)
{
lean_object* x_314; 
lean_dec(x_310);
lean_dec(x_309);
lean_dec_ref(x_308);
lean_dec_ref(x_291);
lean_dec_ref(x_284);
lean_dec_ref(x_282);
x_314 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_314;
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_315 = l_ByteArray_extract(x_308, x_309, x_310);
x_316 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_316, 0, x_308);
lean_ctor_set(x_316, 1, x_310);
x_317 = lean_unsigned_to_nat(0u);
x_318 = lean_byte_array_size(x_284);
x_319 = lean_byte_array_size(x_315);
x_320 = lean_byte_array_copy_slice(x_315, x_317, x_284, x_318, x_319, x_293);
lean_dec_ref(x_315);
x_321 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_321, 0, x_316);
lean_ctor_set(x_321, 1, x_282);
x_7 = x_291;
x_8 = x_320;
x_9 = x_321;
goto block_13;
}
}
}
}
case 2:
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; 
lean_dec_ref(x_289);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec_ref(x_281);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_322 = lean_ctor_get(x_283, 0);
lean_inc_ref(x_322);
x_323 = lean_ctor_get(x_283, 1);
lean_inc(x_323);
lean_dec_ref(x_283);
x_324 = lean_byte_array_size(x_322);
x_325 = lean_nat_dec_lt(x_323, x_324);
if (x_325 == 0)
{
lean_object* x_326; 
lean_dec(x_323);
lean_dec_ref(x_322);
lean_dec_ref(x_291);
lean_dec(x_290);
lean_dec(x_285);
lean_dec_ref(x_284);
lean_dec_ref(x_282);
x_326 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_326;
}
else
{
if (x_325 == 0)
{
uint8_t x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; 
x_327 = l_instInhabitedUInt8;
x_328 = lean_box(x_327);
x_329 = l_outOfBounds___redArg(x_328);
x_330 = lean_unbox(x_329);
lean_dec(x_329);
x_260 = x_282;
x_261 = x_293;
x_262 = x_284;
x_263 = x_285;
x_264 = x_290;
x_265 = x_291;
x_266 = x_322;
x_267 = x_323;
x_268 = x_330;
goto block_279;
}
else
{
uint8_t x_331; 
x_331 = lean_byte_array_fget(x_322, x_323);
x_260 = x_282;
x_261 = x_293;
x_262 = x_284;
x_263 = x_285;
x_264 = x_290;
x_265 = x_291;
x_266 = x_322;
x_267 = x_323;
x_268 = x_331;
goto block_279;
}
}
}
default: 
{
uint8_t x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; 
lean_dec_ref(x_282);
lean_dec_ref(x_281);
x_332 = lean_ctor_get_uint8(x_286, 0);
lean_dec_ref(x_286);
x_333 = lean_uint8_to_nat(x_332);
x_334 = lean_unsigned_to_nat(0u);
x_335 = lean_nat_dec_eq(x_333, x_334);
if (x_335 == 0)
{
uint8_t x_336; 
x_336 = lean_nat_dec_eq(x_333, x_285);
if (x_336 == 0)
{
lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; lean_object* x_343; uint8_t x_344; 
x_337 = lean_ctor_get(x_287, 0);
lean_inc(x_337);
x_338 = lean_ctor_get(x_287, 1);
lean_inc(x_338);
x_339 = lean_ctor_get(x_287, 2);
lean_inc_ref(x_339);
x_340 = lean_ctor_get(x_287, 3);
lean_inc(x_340);
x_341 = lean_ctor_get(x_287, 4);
lean_inc_ref(x_341);
x_342 = lean_unsigned_to_nat(2u);
x_343 = lean_nat_add(x_342, x_337);
x_344 = lean_nat_dec_lt(x_333, x_343);
if (x_344 == 0)
{
lean_object* x_345; uint8_t x_346; 
x_345 = lean_nat_add(x_343, x_338);
lean_dec(x_343);
x_346 = lean_nat_dec_lt(x_333, x_345);
lean_dec(x_345);
if (x_346 == 0)
{
lean_object* x_347; lean_object* x_348; 
lean_dec_ref(x_341);
lean_dec(x_340);
lean_dec_ref(x_339);
lean_dec(x_338);
lean_dec(x_337);
lean_dec_ref(x_291);
lean_dec(x_290);
lean_dec_ref(x_289);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_284);
lean_dec_ref(x_283);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_347 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_347, 0, x_333);
x_348 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_348, 0, x_347);
return x_348;
}
else
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; uint8_t x_352; 
x_349 = lean_ctor_get(x_289, 0);
lean_inc_ref(x_349);
x_350 = lean_ctor_get(x_289, 1);
lean_inc(x_350);
lean_dec_ref(x_289);
x_351 = lean_byte_array_size(x_349);
x_352 = lean_nat_dec_lt(x_350, x_351);
if (x_352 == 0)
{
lean_object* x_353; 
lean_dec(x_350);
lean_dec_ref(x_349);
lean_dec_ref(x_341);
lean_dec(x_340);
lean_dec_ref(x_339);
lean_dec(x_338);
lean_dec(x_337);
lean_dec_ref(x_291);
lean_dec(x_290);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_284);
lean_dec_ref(x_283);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_353 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_353;
}
else
{
if (x_352 == 0)
{
uint8_t x_354; lean_object* x_355; lean_object* x_356; uint8_t x_357; 
x_354 = l_instInhabitedUInt8;
x_355 = lean_box(x_354);
x_356 = l_outOfBounds___redArg(x_355);
x_357 = lean_unbox(x_356);
lean_dec(x_356);
x_108 = x_280;
x_109 = x_283;
x_110 = x_285;
x_111 = x_284;
x_112 = x_293;
x_113 = x_349;
x_114 = x_290;
x_115 = x_339;
x_116 = x_333;
x_117 = x_350;
x_118 = x_288;
x_119 = x_338;
x_120 = x_341;
x_121 = x_291;
x_122 = x_340;
x_123 = x_334;
x_124 = x_342;
x_125 = x_287;
x_126 = x_337;
x_127 = x_357;
goto block_148;
}
else
{
uint8_t x_358; 
x_358 = lean_byte_array_fget(x_349, x_350);
x_108 = x_280;
x_109 = x_283;
x_110 = x_285;
x_111 = x_284;
x_112 = x_293;
x_113 = x_349;
x_114 = x_290;
x_115 = x_339;
x_116 = x_333;
x_117 = x_350;
x_118 = x_288;
x_119 = x_338;
x_120 = x_341;
x_121 = x_291;
x_122 = x_340;
x_123 = x_334;
x_124 = x_342;
x_125 = x_287;
x_126 = x_337;
x_127 = x_358;
goto block_148;
}
}
}
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; 
lean_dec(x_343);
x_359 = lean_ctor_get(x_289, 0);
lean_inc_ref(x_359);
x_360 = lean_ctor_get(x_289, 1);
lean_inc(x_360);
lean_dec_ref(x_289);
x_361 = lean_unsigned_to_nat(5u);
x_362 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_359, x_360, x_334, x_361);
if (lean_obj_tag(x_362) == 0)
{
uint8_t x_363; 
lean_dec_ref(x_341);
lean_dec(x_340);
lean_dec_ref(x_339);
lean_dec(x_338);
lean_dec(x_337);
lean_dec_ref(x_291);
lean_dec(x_290);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_284);
lean_dec_ref(x_283);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_363 = !lean_is_exclusive(x_362);
if (x_363 == 0)
{
return x_362;
}
else
{
lean_object* x_364; lean_object* x_365; 
x_364 = lean_ctor_get(x_362, 0);
lean_inc(x_364);
lean_dec(x_362);
x_365 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_365, 0, x_364);
return x_365;
}
}
else
{
lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; lean_object* x_371; uint8_t x_372; 
x_366 = lean_ctor_get(x_362, 0);
lean_inc(x_366);
lean_dec_ref(x_362);
x_367 = lean_ctor_get(x_366, 0);
lean_inc(x_367);
x_368 = lean_ctor_get(x_366, 1);
lean_inc(x_368);
lean_dec(x_366);
x_369 = lean_nat_sub(x_333, x_342);
x_370 = lean_array_get_borrowed(x_334, x_339, x_369);
lean_dec(x_369);
x_371 = lean_nat_add(x_370, x_367);
lean_dec(x_367);
x_372 = lean_nat_dec_lt(x_334, x_337);
if (x_372 == 0)
{
x_162 = x_280;
x_163 = x_283;
x_164 = x_371;
x_165 = x_285;
x_166 = x_293;
x_167 = x_284;
x_168 = x_290;
x_169 = x_291;
x_170 = x_368;
x_171 = x_334;
x_172 = x_288;
x_173 = x_287;
x_174 = x_337;
x_175 = x_338;
x_176 = x_339;
x_177 = x_340;
x_178 = x_341;
goto block_185;
}
else
{
uint8_t x_373; 
x_373 = !lean_is_exclusive(x_287);
if (x_373 == 0)
{
lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; 
x_374 = lean_ctor_get(x_287, 4);
lean_dec(x_374);
x_375 = lean_ctor_get(x_287, 3);
lean_dec(x_375);
x_376 = lean_ctor_get(x_287, 2);
lean_dec(x_376);
x_377 = lean_ctor_get(x_287, 1);
lean_dec(x_377);
x_378 = lean_ctor_get(x_287, 0);
lean_dec(x_378);
lean_inc(x_371);
x_379 = lean_array_set(x_339, x_340, x_371);
x_380 = lean_nat_add(x_340, x_285);
lean_dec(x_340);
x_381 = lean_nat_mod(x_380, x_337);
lean_dec(x_380);
lean_inc_ref(x_341);
lean_inc(x_381);
lean_inc_ref(x_379);
lean_inc(x_338);
lean_inc(x_337);
lean_ctor_set(x_287, 3, x_381);
lean_ctor_set(x_287, 2, x_379);
x_162 = x_280;
x_163 = x_283;
x_164 = x_371;
x_165 = x_285;
x_166 = x_293;
x_167 = x_284;
x_168 = x_290;
x_169 = x_291;
x_170 = x_368;
x_171 = x_334;
x_172 = x_288;
x_173 = x_287;
x_174 = x_337;
x_175 = x_338;
x_176 = x_379;
x_177 = x_381;
x_178 = x_341;
goto block_185;
}
else
{
lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
lean_dec(x_287);
lean_inc(x_371);
x_382 = lean_array_set(x_339, x_340, x_371);
x_383 = lean_nat_add(x_340, x_285);
lean_dec(x_340);
x_384 = lean_nat_mod(x_383, x_337);
lean_dec(x_383);
lean_inc_ref(x_341);
lean_inc(x_384);
lean_inc_ref(x_382);
lean_inc(x_338);
lean_inc(x_337);
x_385 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_385, 0, x_337);
lean_ctor_set(x_385, 1, x_338);
lean_ctor_set(x_385, 2, x_382);
lean_ctor_set(x_385, 3, x_384);
lean_ctor_set(x_385, 4, x_341);
x_162 = x_280;
x_163 = x_283;
x_164 = x_371;
x_165 = x_285;
x_166 = x_293;
x_167 = x_284;
x_168 = x_290;
x_169 = x_291;
x_170 = x_368;
x_171 = x_334;
x_172 = x_288;
x_173 = x_385;
x_174 = x_337;
x_175 = x_338;
x_176 = x_382;
x_177 = x_384;
x_178 = x_341;
goto block_185;
}
}
}
}
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; 
x_386 = lean_ctor_get(x_289, 0);
lean_inc_ref(x_386);
x_387 = lean_ctor_get(x_289, 1);
lean_inc(x_387);
lean_dec_ref(x_289);
x_388 = lean_unsigned_to_nat(5u);
x_389 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_386, x_387, x_334, x_388);
if (lean_obj_tag(x_389) == 0)
{
uint8_t x_390; 
lean_dec_ref(x_291);
lean_dec(x_290);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_284);
lean_dec_ref(x_283);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_390 = !lean_is_exclusive(x_389);
if (x_390 == 0)
{
return x_389;
}
else
{
lean_object* x_391; lean_object* x_392; 
x_391 = lean_ctor_get(x_389, 0);
lean_inc(x_391);
lean_dec(x_389);
x_392 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_392, 0, x_391);
return x_392;
}
}
else
{
lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; uint8_t x_404; 
x_393 = lean_ctor_get(x_389, 0);
lean_inc(x_393);
lean_dec_ref(x_389);
x_394 = lean_ctor_get(x_393, 0);
lean_inc(x_394);
x_395 = lean_ctor_get(x_393, 1);
lean_inc(x_395);
lean_dec(x_393);
x_396 = lean_ctor_get(x_287, 0);
lean_inc(x_396);
x_397 = lean_ctor_get(x_287, 1);
lean_inc(x_397);
x_398 = lean_ctor_get(x_287, 2);
lean_inc_ref(x_398);
x_399 = lean_ctor_get(x_287, 3);
lean_inc(x_399);
x_400 = lean_ctor_get(x_287, 4);
lean_inc_ref(x_400);
x_401 = lean_byte_array_size(x_284);
x_402 = lean_nat_add(x_288, x_401);
x_403 = lean_nat_sub(x_402, x_394);
lean_dec(x_394);
lean_dec(x_402);
x_404 = lean_nat_dec_lt(x_334, x_396);
if (x_404 == 0)
{
x_199 = x_280;
x_200 = x_283;
x_201 = x_285;
x_202 = x_293;
x_203 = x_284;
x_204 = x_403;
x_205 = x_290;
x_206 = x_291;
x_207 = x_334;
x_208 = x_395;
x_209 = x_288;
x_210 = x_287;
x_211 = x_396;
x_212 = x_397;
x_213 = x_398;
x_214 = x_399;
x_215 = x_400;
goto block_222;
}
else
{
uint8_t x_405; 
x_405 = !lean_is_exclusive(x_287);
if (x_405 == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; 
x_406 = lean_ctor_get(x_287, 4);
lean_dec(x_406);
x_407 = lean_ctor_get(x_287, 3);
lean_dec(x_407);
x_408 = lean_ctor_get(x_287, 2);
lean_dec(x_408);
x_409 = lean_ctor_get(x_287, 1);
lean_dec(x_409);
x_410 = lean_ctor_get(x_287, 0);
lean_dec(x_410);
lean_inc(x_403);
x_411 = lean_array_set(x_398, x_399, x_403);
x_412 = lean_nat_add(x_399, x_285);
lean_dec(x_399);
x_413 = lean_nat_mod(x_412, x_396);
lean_dec(x_412);
lean_inc_ref(x_400);
lean_inc(x_413);
lean_inc_ref(x_411);
lean_inc(x_397);
lean_inc(x_396);
lean_ctor_set(x_287, 3, x_413);
lean_ctor_set(x_287, 2, x_411);
x_199 = x_280;
x_200 = x_283;
x_201 = x_285;
x_202 = x_293;
x_203 = x_284;
x_204 = x_403;
x_205 = x_290;
x_206 = x_291;
x_207 = x_334;
x_208 = x_395;
x_209 = x_288;
x_210 = x_287;
x_211 = x_396;
x_212 = x_397;
x_213 = x_411;
x_214 = x_413;
x_215 = x_400;
goto block_222;
}
else
{
lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; 
lean_dec(x_287);
lean_inc(x_403);
x_414 = lean_array_set(x_398, x_399, x_403);
x_415 = lean_nat_add(x_399, x_285);
lean_dec(x_399);
x_416 = lean_nat_mod(x_415, x_396);
lean_dec(x_415);
lean_inc_ref(x_400);
lean_inc(x_416);
lean_inc_ref(x_414);
lean_inc(x_397);
lean_inc(x_396);
x_417 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_417, 0, x_396);
lean_ctor_set(x_417, 1, x_397);
lean_ctor_set(x_417, 2, x_414);
lean_ctor_set(x_417, 3, x_416);
lean_ctor_set(x_417, 4, x_400);
x_199 = x_280;
x_200 = x_283;
x_201 = x_285;
x_202 = x_293;
x_203 = x_284;
x_204 = x_403;
x_205 = x_290;
x_206 = x_291;
x_207 = x_334;
x_208 = x_395;
x_209 = x_288;
x_210 = x_417;
x_211 = x_396;
x_212 = x_397;
x_213 = x_414;
x_214 = x_416;
x_215 = x_400;
goto block_222;
}
}
}
}
}
else
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; 
x_418 = lean_ctor_get(x_289, 0);
lean_inc_ref(x_418);
x_419 = lean_ctor_get(x_289, 1);
lean_inc(x_419);
lean_dec_ref(x_289);
x_420 = lean_unsigned_to_nat(5u);
x_421 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_418, x_419, x_334, x_420);
if (lean_obj_tag(x_421) == 0)
{
uint8_t x_422; 
lean_dec_ref(x_291);
lean_dec(x_290);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_284);
lean_dec_ref(x_283);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_422 = !lean_is_exclusive(x_421);
if (x_422 == 0)
{
return x_421;
}
else
{
lean_object* x_423; lean_object* x_424; 
x_423 = lean_ctor_get(x_421, 0);
lean_inc(x_423);
lean_dec(x_421);
x_424 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_424, 0, x_423);
return x_424;
}
}
else
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; uint8_t x_433; 
x_425 = lean_ctor_get(x_421, 0);
lean_inc(x_425);
lean_dec_ref(x_421);
x_426 = lean_ctor_get(x_425, 0);
lean_inc(x_426);
x_427 = lean_ctor_get(x_425, 1);
lean_inc(x_427);
lean_dec(x_425);
x_428 = lean_ctor_get(x_287, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_287, 1);
lean_inc(x_429);
x_430 = lean_ctor_get(x_287, 2);
lean_inc_ref(x_430);
x_431 = lean_ctor_get(x_287, 3);
lean_inc(x_431);
x_432 = lean_ctor_get(x_287, 4);
lean_inc_ref(x_432);
x_433 = lean_nat_dec_lt(x_334, x_428);
if (x_433 == 0)
{
x_236 = x_280;
x_237 = x_283;
x_238 = x_285;
x_239 = x_293;
x_240 = x_284;
x_241 = x_427;
x_242 = x_290;
x_243 = x_291;
x_244 = x_334;
x_245 = x_426;
x_246 = x_288;
x_247 = x_287;
x_248 = x_428;
x_249 = x_429;
x_250 = x_430;
x_251 = x_431;
x_252 = x_432;
goto block_259;
}
else
{
uint8_t x_434; 
x_434 = !lean_is_exclusive(x_287);
if (x_434 == 0)
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; 
x_435 = lean_ctor_get(x_287, 4);
lean_dec(x_435);
x_436 = lean_ctor_get(x_287, 3);
lean_dec(x_436);
x_437 = lean_ctor_get(x_287, 2);
lean_dec(x_437);
x_438 = lean_ctor_get(x_287, 1);
lean_dec(x_438);
x_439 = lean_ctor_get(x_287, 0);
lean_dec(x_439);
lean_inc(x_426);
x_440 = lean_array_set(x_430, x_431, x_426);
x_441 = lean_nat_add(x_431, x_285);
lean_dec(x_431);
x_442 = lean_nat_mod(x_441, x_428);
lean_dec(x_441);
lean_inc_ref(x_432);
lean_inc(x_442);
lean_inc_ref(x_440);
lean_inc(x_429);
lean_inc(x_428);
lean_ctor_set(x_287, 3, x_442);
lean_ctor_set(x_287, 2, x_440);
x_236 = x_280;
x_237 = x_283;
x_238 = x_285;
x_239 = x_293;
x_240 = x_284;
x_241 = x_427;
x_242 = x_290;
x_243 = x_291;
x_244 = x_334;
x_245 = x_426;
x_246 = x_288;
x_247 = x_287;
x_248 = x_428;
x_249 = x_429;
x_250 = x_440;
x_251 = x_442;
x_252 = x_432;
goto block_259;
}
else
{
lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; 
lean_dec(x_287);
lean_inc(x_426);
x_443 = lean_array_set(x_430, x_431, x_426);
x_444 = lean_nat_add(x_431, x_285);
lean_dec(x_431);
x_445 = lean_nat_mod(x_444, x_428);
lean_dec(x_444);
lean_inc_ref(x_432);
lean_inc(x_445);
lean_inc_ref(x_443);
lean_inc(x_429);
lean_inc(x_428);
x_446 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_446, 0, x_428);
lean_ctor_set(x_446, 1, x_429);
lean_ctor_set(x_446, 2, x_443);
lean_ctor_set(x_446, 3, x_445);
lean_ctor_set(x_446, 4, x_432);
x_236 = x_280;
x_237 = x_283;
x_238 = x_285;
x_239 = x_293;
x_240 = x_284;
x_241 = x_427;
x_242 = x_290;
x_243 = x_291;
x_244 = x_334;
x_245 = x_426;
x_246 = x_288;
x_247 = x_446;
x_248 = x_428;
x_249 = x_429;
x_250 = x_443;
x_251 = x_445;
x_252 = x_432;
goto block_259;
}
}
}
}
}
}
}
else
{
lean_dec(x_290);
lean_dec_ref(x_289);
lean_dec(x_288);
lean_dec_ref(x_287);
lean_dec(x_286);
lean_dec(x_285);
lean_dec_ref(x_283);
lean_dec_ref(x_282);
lean_dec_ref(x_280);
lean_dec_ref(x_1);
x_7 = x_291;
x_8 = x_284;
x_9 = x_281;
goto block_13;
}
}
block_462:
{
lean_object* x_460; lean_object* x_461; 
x_460 = lean_ctor_get(x_454, 1);
lean_inc_ref(x_460);
lean_dec_ref(x_454);
x_461 = lean_ctor_get(x_460, 0);
lean_inc(x_461);
lean_dec_ref(x_460);
x_280 = x_448;
x_281 = x_449;
x_282 = x_450;
x_283 = x_451;
x_284 = x_452;
x_285 = x_453;
x_286 = x_461;
x_287 = x_455;
x_288 = x_456;
x_289 = x_457;
x_290 = x_458;
x_291 = x_459;
goto block_447;
}
block_487:
{
if (x_475 == 0)
{
x_448 = x_463;
x_449 = x_464;
x_450 = x_465;
x_451 = x_466;
x_452 = x_468;
x_453 = x_467;
x_454 = x_470;
x_455 = x_471;
x_456 = x_472;
x_457 = x_473;
x_458 = x_469;
x_459 = x_474;
goto block_462;
}
else
{
lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; 
lean_dec(x_469);
x_476 = lean_ctor_get(x_474, 0);
lean_inc_ref(x_476);
x_477 = lean_ctor_get(x_474, 1);
lean_inc(x_477);
lean_dec_ref(x_474);
x_478 = lean_unsigned_to_nat(0u);
x_479 = lean_unsigned_to_nat(5u);
x_480 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_476, x_477, x_478, x_479);
if (lean_obj_tag(x_480) == 0)
{
uint8_t x_481; 
lean_dec_ref(x_473);
lean_dec(x_472);
lean_dec_ref(x_471);
lean_dec_ref(x_470);
lean_dec_ref(x_468);
lean_dec(x_467);
lean_dec_ref(x_466);
lean_dec_ref(x_465);
lean_dec_ref(x_464);
lean_dec_ref(x_463);
lean_dec_ref(x_1);
x_481 = !lean_is_exclusive(x_480);
if (x_481 == 0)
{
return x_480;
}
else
{
lean_object* x_482; lean_object* x_483; 
x_482 = lean_ctor_get(x_480, 0);
lean_inc(x_482);
lean_dec(x_480);
x_483 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_483, 0, x_482);
return x_483;
}
}
else
{
lean_object* x_484; lean_object* x_485; lean_object* x_486; 
x_484 = lean_ctor_get(x_480, 0);
lean_inc(x_484);
lean_dec_ref(x_480);
x_485 = lean_ctor_get(x_484, 0);
lean_inc(x_485);
x_486 = lean_ctor_get(x_484, 1);
lean_inc(x_486);
lean_dec(x_484);
x_448 = x_463;
x_449 = x_464;
x_450 = x_465;
x_451 = x_466;
x_452 = x_468;
x_453 = x_467;
x_454 = x_470;
x_455 = x_471;
x_456 = x_472;
x_457 = x_473;
x_458 = x_485;
x_459 = x_486;
goto block_462;
}
}
}
block_506:
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; uint8_t x_503; 
x_500 = lean_ctor_get(x_491, 0);
lean_inc(x_500);
x_501 = lean_ctor_get(x_491, 1);
lean_inc(x_501);
lean_dec_ref(x_491);
x_502 = lean_unsigned_to_nat(0u);
x_503 = lean_nat_dec_eq(x_501, x_502);
if (x_503 == 0)
{
lean_dec(x_500);
x_463 = x_488;
x_464 = x_495;
x_465 = x_497;
x_466 = x_496;
x_467 = x_489;
x_468 = x_494;
x_469 = x_501;
x_470 = x_490;
x_471 = x_499;
x_472 = x_492;
x_473 = x_498;
x_474 = x_493;
x_475 = x_503;
goto block_487;
}
else
{
lean_object* x_504; uint8_t x_505; 
x_504 = lean_box(0);
x_505 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_500, x_504);
if (x_505 == 0)
{
lean_dec(x_500);
x_463 = x_488;
x_464 = x_495;
x_465 = x_497;
x_466 = x_496;
x_467 = x_489;
x_468 = x_494;
x_469 = x_501;
x_470 = x_490;
x_471 = x_499;
x_472 = x_492;
x_473 = x_498;
x_474 = x_493;
x_475 = x_503;
goto block_487;
}
else
{
lean_dec_ref(x_490);
x_280 = x_488;
x_281 = x_495;
x_282 = x_497;
x_283 = x_496;
x_284 = x_494;
x_285 = x_489;
x_286 = x_500;
x_287 = x_499;
x_288 = x_492;
x_289 = x_498;
x_290 = x_501;
x_291 = x_493;
goto block_447;
}
}
}
block_519:
{
lean_object* x_518; 
x_518 = lean_ctor_get(x_509, 1);
lean_inc_ref(x_518);
x_488 = x_507;
x_489 = x_508;
x_490 = x_509;
x_491 = x_518;
x_492 = x_510;
x_493 = x_511;
x_494 = x_512;
x_495 = x_513;
x_496 = x_514;
x_497 = x_515;
x_498 = x_516;
x_499 = x_517;
goto block_506;
}
block_530:
{
lean_object* x_527; lean_object* x_528; lean_object* x_529; 
x_527 = lean_ctor_get(x_521, 0);
lean_inc(x_527);
x_528 = lean_ctor_get(x_521, 1);
lean_inc(x_528);
lean_inc_ref(x_521);
lean_inc_ref(x_4);
x_529 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_529, 0, x_4);
lean_ctor_set(x_529, 1, x_521);
x_507 = x_520;
x_508 = x_522;
x_509 = x_523;
x_510 = x_524;
x_511 = x_525;
x_512 = x_526;
x_513 = x_529;
x_514 = x_4;
x_515 = x_521;
x_516 = x_527;
x_517 = x_528;
goto block_519;
}
block_581:
{
lean_object* x_541; lean_object* x_542; uint8_t x_543; 
x_541 = lean_byte_array_size(x_2);
x_542 = lean_nat_add(x_536, x_541);
x_543 = lean_nat_dec_le(x_542, x_539);
if (x_543 == 0)
{
lean_object* x_544; uint8_t x_545; 
lean_dec(x_542);
x_544 = lean_nat_add(x_539, x_535);
x_545 = lean_nat_dec_le(x_544, x_536);
if (x_545 == 0)
{
uint8_t x_546; 
lean_dec(x_544);
x_546 = lean_nat_dec_le(x_536, x_539);
if (x_546 == 0)
{
lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; uint8_t x_555; 
x_547 = lean_nat_sub(x_536, x_539);
x_548 = lean_nat_sub(x_535, x_547);
lean_dec(x_547);
lean_dec(x_535);
x_549 = l_ByteArray_extract(x_1, x_539, x_536);
x_550 = lean_unsigned_to_nat(0u);
x_551 = lean_byte_array_size(x_549);
x_552 = lean_byte_array_copy_slice(x_549, x_550, x_2, x_541, x_551, x_537);
lean_dec_ref(x_549);
x_553 = lean_byte_array_size(x_552);
x_554 = lean_nat_sub(x_553, x_536);
x_555 = lean_nat_dec_le(x_548, x_554);
lean_dec(x_554);
if (x_555 == 0)
{
lean_object* x_556; lean_object* x_557; lean_object* x_558; 
x_556 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
lean_inc(x_533);
x_557 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_557, 0, x_550);
lean_ctor_set(x_557, 1, x_548);
lean_ctor_set(x_557, 2, x_533);
x_558 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_556, x_557, x_531, x_552, x_550);
x_520 = x_532;
x_521 = x_540;
x_522 = x_533;
x_523 = x_534;
x_524 = x_536;
x_525 = x_538;
x_526 = x_558;
goto block_530;
}
else
{
lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; 
lean_dec_ref(x_531);
x_559 = lean_nat_add(x_536, x_548);
lean_dec(x_548);
lean_inc(x_536);
x_560 = l_ByteArray_extract(x_552, x_536, x_559);
lean_dec(x_559);
x_561 = lean_byte_array_size(x_560);
x_562 = lean_byte_array_copy_slice(x_560, x_550, x_552, x_553, x_561, x_537);
lean_dec_ref(x_560);
x_520 = x_532;
x_521 = x_540;
x_522 = x_533;
x_523 = x_534;
x_524 = x_536;
x_525 = x_538;
x_526 = x_562;
goto block_530;
}
}
else
{
lean_object* x_563; lean_object* x_564; uint8_t x_565; 
lean_dec_ref(x_531);
x_563 = lean_nat_sub(x_539, x_536);
lean_dec(x_539);
x_564 = lean_nat_add(x_563, x_535);
x_565 = lean_nat_dec_le(x_564, x_541);
if (x_565 == 0)
{
lean_object* x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; 
lean_dec(x_564);
x_566 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed), 4, 1);
lean_closure_set(x_566, 0, x_563);
x_567 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_568 = lean_unsigned_to_nat(0u);
lean_inc(x_533);
x_569 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_569, 0, x_568);
lean_ctor_set(x_569, 1, x_535);
lean_ctor_set(x_569, 2, x_533);
x_570 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_567, x_569, x_566, x_2, x_568);
x_520 = x_532;
x_521 = x_540;
x_522 = x_533;
x_523 = x_534;
x_524 = x_536;
x_525 = x_538;
x_526 = x_570;
goto block_530;
}
else
{
lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; 
lean_dec(x_535);
x_571 = l_ByteArray_extract(x_2, x_563, x_564);
lean_dec(x_564);
x_572 = lean_unsigned_to_nat(0u);
x_573 = lean_byte_array_size(x_571);
x_574 = lean_byte_array_copy_slice(x_571, x_572, x_2, x_541, x_573, x_537);
lean_dec_ref(x_571);
x_520 = x_532;
x_521 = x_540;
x_522 = x_533;
x_523 = x_534;
x_524 = x_536;
x_525 = x_538;
x_526 = x_574;
goto block_530;
}
}
}
else
{
lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; 
lean_dec(x_535);
lean_dec_ref(x_531);
x_575 = l_ByteArray_extract(x_1, x_539, x_544);
lean_dec(x_544);
x_576 = lean_unsigned_to_nat(0u);
x_577 = lean_byte_array_size(x_575);
x_578 = lean_byte_array_copy_slice(x_575, x_576, x_2, x_541, x_577, x_537);
lean_dec_ref(x_575);
x_520 = x_532;
x_521 = x_540;
x_522 = x_533;
x_523 = x_534;
x_524 = x_536;
x_525 = x_538;
x_526 = x_578;
goto block_530;
}
}
else
{
lean_object* x_579; lean_object* x_580; 
lean_dec_ref(x_540);
lean_dec_ref(x_538);
lean_dec(x_536);
lean_dec_ref(x_534);
lean_dec(x_533);
lean_dec_ref(x_532);
lean_dec_ref(x_531);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_579 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_579, 0, x_539);
lean_ctor_set(x_579, 1, x_535);
lean_ctor_set(x_579, 2, x_542);
x_580 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_580, 0, x_579);
return x_580;
}
}
block_594:
{
lean_object* x_593; 
x_593 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_593, 0, x_586);
lean_ctor_set(x_593, 1, x_592);
x_531 = x_582;
x_532 = x_583;
x_533 = x_584;
x_534 = x_585;
x_535 = x_587;
x_536 = x_589;
x_537 = x_591;
x_538 = x_590;
x_539 = x_588;
x_540 = x_593;
goto block_581;
}
block_618:
{
uint8_t x_612; 
x_612 = lean_nat_dec_lt(x_600, x_608);
lean_dec(x_600);
if (x_612 == 0)
{
lean_dec_ref(x_611);
lean_dec(x_610);
lean_dec_ref(x_609);
lean_dec(x_608);
lean_dec(x_607);
x_582 = x_595;
x_583 = x_596;
x_584 = x_597;
x_585 = x_598;
x_586 = x_599;
x_587 = x_601;
x_588 = x_602;
x_589 = x_603;
x_590 = x_605;
x_591 = x_604;
x_592 = x_606;
goto block_594;
}
else
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; 
lean_dec_ref(x_606);
x_613 = lean_unsigned_to_nat(256u);
x_614 = lean_nat_mul(x_608, x_613);
x_615 = lean_nat_mod(x_602, x_614);
lean_dec(x_614);
lean_inc(x_602);
x_616 = lean_array_set(x_611, x_615, x_602);
lean_dec(x_615);
x_617 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_617, 0, x_607);
lean_ctor_set(x_617, 1, x_608);
lean_ctor_set(x_617, 2, x_609);
lean_ctor_set(x_617, 3, x_610);
lean_ctor_set(x_617, 4, x_616);
x_582 = x_595;
x_583 = x_596;
x_584 = x_597;
x_585 = x_598;
x_586 = x_599;
x_587 = x_601;
x_588 = x_602;
x_589 = x_603;
x_590 = x_605;
x_591 = x_604;
x_592 = x_617;
goto block_594;
}
}
block_631:
{
lean_object* x_630; 
x_630 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_630, 0, x_623);
lean_ctor_set(x_630, 1, x_629);
x_531 = x_619;
x_532 = x_620;
x_533 = x_621;
x_534 = x_622;
x_535 = x_624;
x_536 = x_625;
x_537 = x_628;
x_538 = x_627;
x_539 = x_626;
x_540 = x_630;
goto block_581;
}
block_655:
{
uint8_t x_649; 
x_649 = lean_nat_dec_lt(x_637, x_645);
lean_dec(x_637);
if (x_649 == 0)
{
lean_dec_ref(x_648);
lean_dec(x_647);
lean_dec_ref(x_646);
lean_dec(x_645);
lean_dec(x_644);
x_619 = x_632;
x_620 = x_633;
x_621 = x_634;
x_622 = x_635;
x_623 = x_636;
x_624 = x_638;
x_625 = x_640;
x_626 = x_639;
x_627 = x_642;
x_628 = x_641;
x_629 = x_643;
goto block_631;
}
else
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; 
lean_dec_ref(x_643);
x_650 = lean_unsigned_to_nat(256u);
x_651 = lean_nat_mul(x_645, x_650);
x_652 = lean_nat_mod(x_639, x_651);
lean_dec(x_651);
lean_inc(x_639);
x_653 = lean_array_set(x_648, x_652, x_639);
lean_dec(x_652);
x_654 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_654, 0, x_644);
lean_ctor_set(x_654, 1, x_645);
lean_ctor_set(x_654, 2, x_646);
lean_ctor_set(x_654, 3, x_647);
lean_ctor_set(x_654, 4, x_653);
x_619 = x_632;
x_620 = x_633;
x_621 = x_634;
x_622 = x_635;
x_623 = x_636;
x_624 = x_638;
x_625 = x_640;
x_626 = x_639;
x_627 = x_642;
x_628 = x_641;
x_629 = x_654;
goto block_631;
}
}
block_668:
{
lean_object* x_667; 
x_667 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_667, 0, x_660);
lean_ctor_set(x_667, 1, x_666);
x_531 = x_656;
x_532 = x_657;
x_533 = x_658;
x_534 = x_659;
x_535 = x_661;
x_536 = x_663;
x_537 = x_665;
x_538 = x_664;
x_539 = x_662;
x_540 = x_667;
goto block_581;
}
block_692:
{
uint8_t x_686; 
x_686 = lean_nat_dec_lt(x_674, x_682);
lean_dec(x_674);
if (x_686 == 0)
{
lean_dec_ref(x_685);
lean_dec(x_684);
lean_dec_ref(x_683);
lean_dec(x_682);
lean_dec(x_681);
x_656 = x_670;
x_657 = x_671;
x_658 = x_672;
x_659 = x_673;
x_660 = x_669;
x_661 = x_676;
x_662 = x_675;
x_663 = x_677;
x_664 = x_679;
x_665 = x_678;
x_666 = x_680;
goto block_668;
}
else
{
lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; 
lean_dec_ref(x_680);
x_687 = lean_unsigned_to_nat(256u);
x_688 = lean_nat_mul(x_682, x_687);
x_689 = lean_nat_mod(x_675, x_688);
lean_dec(x_688);
lean_inc(x_675);
x_690 = lean_array_set(x_685, x_689, x_675);
lean_dec(x_689);
x_691 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_691, 0, x_681);
lean_ctor_set(x_691, 1, x_682);
lean_ctor_set(x_691, 2, x_683);
lean_ctor_set(x_691, 3, x_684);
lean_ctor_set(x_691, 4, x_690);
x_656 = x_670;
x_657 = x_671;
x_658 = x_672;
x_659 = x_673;
x_660 = x_669;
x_661 = x_676;
x_662 = x_675;
x_663 = x_677;
x_664 = x_679;
x_665 = x_678;
x_666 = x_691;
goto block_668;
}
}
block_705:
{
lean_object* x_704; 
x_704 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_704, 0, x_695);
lean_ctor_set(x_704, 1, x_703);
x_531 = x_693;
x_532 = x_694;
x_533 = x_697;
x_534 = x_698;
x_535 = x_699;
x_536 = x_700;
x_537 = x_702;
x_538 = x_701;
x_539 = x_696;
x_540 = x_704;
goto block_581;
}
block_729:
{
uint8_t x_724; 
x_724 = lean_nat_dec_lt(x_712, x_720);
lean_dec(x_712);
if (x_724 == 0)
{
lean_dec_ref(x_723);
lean_dec(x_722);
lean_dec_ref(x_721);
lean_dec(x_720);
lean_dec(x_719);
x_693 = x_706;
x_694 = x_707;
x_695 = x_708;
x_696 = x_709;
x_697 = x_710;
x_698 = x_711;
x_699 = x_714;
x_700 = x_715;
x_701 = x_717;
x_702 = x_716;
x_703 = x_718;
goto block_705;
}
else
{
lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; 
lean_dec_ref(x_718);
x_725 = lean_nat_mul(x_720, x_713);
x_726 = lean_nat_mod(x_709, x_725);
lean_dec(x_725);
lean_inc(x_709);
x_727 = lean_array_set(x_723, x_726, x_709);
lean_dec(x_726);
x_728 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_728, 0, x_719);
lean_ctor_set(x_728, 1, x_720);
lean_ctor_set(x_728, 2, x_721);
lean_ctor_set(x_728, 3, x_722);
lean_ctor_set(x_728, 4, x_727);
x_693 = x_706;
x_694 = x_707;
x_695 = x_708;
x_696 = x_709;
x_697 = x_710;
x_698 = x_711;
x_699 = x_714;
x_700 = x_715;
x_701 = x_717;
x_702 = x_716;
x_703 = x_728;
goto block_705;
}
}
block_769:
{
lean_object* x_754; lean_object* x_755; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; uint8_t x_764; 
x_754 = lean_nat_add(x_749, x_738);
lean_dec(x_749);
x_755 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_755, 0, x_737);
lean_ctor_set(x_755, 1, x_754);
x_756 = lean_nat_sub(x_742, x_743);
lean_dec(x_742);
x_757 = lean_nat_sub(x_756, x_750);
lean_dec(x_756);
x_758 = lean_unsigned_to_nat(0u);
x_759 = lean_unsigned_to_nat(256u);
x_760 = lean_nat_mul(x_757, x_759);
lean_dec(x_757);
x_761 = lean_uint8_to_nat(x_753);
x_762 = lean_nat_add(x_760, x_761);
lean_dec(x_760);
x_763 = lean_array_get(x_758, x_746, x_762);
lean_dec(x_762);
x_764 = lean_nat_dec_lt(x_740, x_750);
if (x_764 == 0)
{
lean_dec(x_751);
lean_dec(x_750);
lean_dec_ref(x_748);
lean_dec(x_747);
lean_dec_ref(x_746);
x_706 = x_733;
x_707 = x_734;
x_708 = x_755;
x_709 = x_763;
x_710 = x_738;
x_711 = x_739;
x_712 = x_740;
x_713 = x_759;
x_714 = x_741;
x_715 = x_744;
x_716 = x_745;
x_717 = x_752;
x_718 = x_6;
x_719 = x_735;
x_720 = x_736;
x_721 = x_732;
x_722 = x_731;
x_723 = x_730;
goto block_729;
}
else
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; 
lean_dec(x_736);
lean_dec(x_735);
lean_dec_ref(x_732);
lean_dec(x_731);
lean_dec_ref(x_730);
lean_dec_ref(x_6);
lean_inc(x_763);
x_765 = lean_array_set(x_748, x_747, x_763);
x_766 = lean_nat_add(x_747, x_738);
lean_dec(x_747);
x_767 = lean_nat_mod(x_766, x_750);
lean_dec(x_766);
lean_inc_ref(x_746);
lean_inc(x_767);
lean_inc_ref(x_765);
lean_inc(x_751);
lean_inc(x_750);
x_768 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_768, 0, x_750);
lean_ctor_set(x_768, 1, x_751);
lean_ctor_set(x_768, 2, x_765);
lean_ctor_set(x_768, 3, x_767);
lean_ctor_set(x_768, 4, x_746);
x_706 = x_733;
x_707 = x_734;
x_708 = x_755;
x_709 = x_763;
x_710 = x_738;
x_711 = x_739;
x_712 = x_740;
x_713 = x_759;
x_714 = x_741;
x_715 = x_744;
x_716 = x_745;
x_717 = x_752;
x_718 = x_768;
x_719 = x_750;
x_720 = x_751;
x_721 = x_765;
x_722 = x_767;
x_723 = x_746;
goto block_729;
}
}
block_791:
{
lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; 
x_780 = lean_nat_add(x_776, x_771);
lean_dec(x_776);
x_781 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_781, 0, x_773);
lean_ctor_set(x_781, 1, x_780);
x_782 = lean_box(x_779);
x_783 = lean_mk_array(x_774, x_782);
x_784 = lean_byte_array_mk(x_783);
x_785 = lean_unsigned_to_nat(0u);
x_786 = lean_byte_array_size(x_2);
x_787 = lean_byte_array_size(x_784);
x_788 = lean_byte_array_copy_slice(x_784, x_785, x_2, x_786, x_787, x_778);
lean_dec_ref(x_784);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_789 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_789, 0, x_5);
lean_ctor_set(x_789, 1, x_6);
lean_inc_ref(x_789);
lean_inc_ref(x_781);
x_790 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_790, 0, x_781);
lean_ctor_set(x_790, 1, x_789);
x_507 = x_770;
x_508 = x_771;
x_509 = x_772;
x_510 = x_775;
x_511 = x_777;
x_512 = x_788;
x_513 = x_790;
x_514 = x_781;
x_515 = x_789;
x_516 = x_5;
x_517 = x_6;
goto block_519;
}
block_1087:
{
lean_object* x_796; uint8_t x_797; 
x_796 = lean_ctor_get(x_793, 0);
lean_inc_ref(x_796);
x_797 = !lean_is_exclusive(x_796);
if (x_797 == 0)
{
lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; uint8_t x_804; 
x_798 = lean_ctor_get(x_793, 1);
x_799 = lean_ctor_get(x_796, 0);
x_800 = lean_ctor_get(x_796, 1);
lean_dec(x_800);
x_801 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_802 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_802, 0, x_801);
lean_closure_set(x_802, 1, x_1);
x_803 = lean_box(0);
x_804 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_799, x_803);
if (x_804 == 0)
{
switch (lean_obj_tag(x_799)) {
case 0:
{
lean_object* x_805; 
lean_inc_ref(x_798);
lean_dec(x_794);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_796, 1, x_6);
lean_ctor_set(x_796, 0, x_5);
lean_inc_ref(x_796);
lean_inc_ref(x_4);
x_805 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_805, 0, x_4);
lean_ctor_set(x_805, 1, x_796);
x_488 = x_802;
x_489 = x_792;
x_490 = x_793;
x_491 = x_798;
x_492 = x_801;
x_493 = x_795;
x_494 = x_2;
x_495 = x_805;
x_496 = x_4;
x_497 = x_796;
x_498 = x_5;
x_499 = x_6;
goto block_506;
}
case 1:
{
uint8_t x_806; 
lean_inc_ref(x_798);
x_806 = !lean_is_exclusive(x_4);
if (x_806 == 0)
{
lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; uint8_t x_811; 
x_807 = lean_ctor_get(x_4, 0);
x_808 = lean_ctor_get(x_4, 1);
x_809 = lean_nat_add(x_808, x_794);
lean_dec(x_794);
x_810 = lean_byte_array_size(x_807);
x_811 = lean_nat_dec_le(x_809, x_810);
if (x_811 == 0)
{
lean_object* x_812; 
lean_dec(x_809);
lean_free_object(x_4);
lean_dec(x_808);
lean_dec_ref(x_807);
lean_dec_ref(x_802);
lean_free_object(x_796);
lean_dec_ref(x_798);
lean_dec_ref(x_795);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_812 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_812;
}
else
{
if (x_811 == 0)
{
lean_object* x_813; 
lean_dec(x_809);
lean_free_object(x_4);
lean_dec(x_808);
lean_dec_ref(x_807);
lean_dec_ref(x_802);
lean_free_object(x_796);
lean_dec_ref(x_798);
lean_dec_ref(x_795);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_813 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_813;
}
else
{
lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; 
x_814 = l_ByteArray_extract(x_807, x_808, x_809);
lean_ctor_set(x_4, 1, x_809);
x_815 = lean_unsigned_to_nat(0u);
x_816 = lean_byte_array_size(x_2);
x_817 = lean_byte_array_size(x_814);
x_818 = lean_byte_array_copy_slice(x_814, x_815, x_2, x_816, x_817, x_804);
lean_dec_ref(x_814);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_796, 1, x_6);
lean_ctor_set(x_796, 0, x_5);
lean_inc_ref(x_796);
lean_inc_ref(x_4);
x_819 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_819, 0, x_4);
lean_ctor_set(x_819, 1, x_796);
x_488 = x_802;
x_489 = x_792;
x_490 = x_793;
x_491 = x_798;
x_492 = x_801;
x_493 = x_795;
x_494 = x_818;
x_495 = x_819;
x_496 = x_4;
x_497 = x_796;
x_498 = x_5;
x_499 = x_6;
goto block_506;
}
}
}
else
{
lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; uint8_t x_824; 
x_820 = lean_ctor_get(x_4, 0);
x_821 = lean_ctor_get(x_4, 1);
lean_inc(x_821);
lean_inc(x_820);
lean_dec(x_4);
x_822 = lean_nat_add(x_821, x_794);
lean_dec(x_794);
x_823 = lean_byte_array_size(x_820);
x_824 = lean_nat_dec_le(x_822, x_823);
if (x_824 == 0)
{
lean_object* x_825; 
lean_dec(x_822);
lean_dec(x_821);
lean_dec_ref(x_820);
lean_dec_ref(x_802);
lean_free_object(x_796);
lean_dec_ref(x_798);
lean_dec_ref(x_795);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_825 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_825;
}
else
{
if (x_824 == 0)
{
lean_object* x_826; 
lean_dec(x_822);
lean_dec(x_821);
lean_dec_ref(x_820);
lean_dec_ref(x_802);
lean_free_object(x_796);
lean_dec_ref(x_798);
lean_dec_ref(x_795);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_826 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_826;
}
else
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_833; 
x_827 = l_ByteArray_extract(x_820, x_821, x_822);
x_828 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_828, 0, x_820);
lean_ctor_set(x_828, 1, x_822);
x_829 = lean_unsigned_to_nat(0u);
x_830 = lean_byte_array_size(x_2);
x_831 = lean_byte_array_size(x_827);
x_832 = lean_byte_array_copy_slice(x_827, x_829, x_2, x_830, x_831, x_804);
lean_dec_ref(x_827);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_796, 1, x_6);
lean_ctor_set(x_796, 0, x_5);
lean_inc_ref(x_796);
lean_inc_ref(x_828);
x_833 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_833, 0, x_828);
lean_ctor_set(x_833, 1, x_796);
x_488 = x_802;
x_489 = x_792;
x_490 = x_793;
x_491 = x_798;
x_492 = x_801;
x_493 = x_795;
x_494 = x_832;
x_495 = x_833;
x_496 = x_828;
x_497 = x_796;
x_498 = x_5;
x_499 = x_6;
goto block_506;
}
}
}
}
case 2:
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; uint8_t x_837; 
lean_free_object(x_796);
x_834 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_834);
x_835 = lean_ctor_get(x_4, 1);
lean_inc(x_835);
lean_dec_ref(x_4);
x_836 = lean_byte_array_size(x_834);
x_837 = lean_nat_dec_lt(x_835, x_836);
if (x_837 == 0)
{
lean_object* x_838; 
lean_dec(x_835);
lean_dec_ref(x_834);
lean_dec_ref(x_802);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_838 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_838;
}
else
{
if (x_837 == 0)
{
uint8_t x_839; lean_object* x_840; lean_object* x_841; uint8_t x_842; 
x_839 = l_instInhabitedUInt8;
x_840 = lean_box(x_839);
x_841 = l_outOfBounds___redArg(x_840);
x_842 = lean_unbox(x_841);
lean_dec(x_841);
x_770 = x_802;
x_771 = x_792;
x_772 = x_793;
x_773 = x_834;
x_774 = x_794;
x_775 = x_801;
x_776 = x_835;
x_777 = x_795;
x_778 = x_804;
x_779 = x_842;
goto block_791;
}
else
{
uint8_t x_843; 
x_843 = lean_byte_array_fget(x_834, x_835);
x_770 = x_802;
x_771 = x_792;
x_772 = x_793;
x_773 = x_834;
x_774 = x_794;
x_775 = x_801;
x_776 = x_835;
x_777 = x_795;
x_778 = x_804;
x_779 = x_843;
goto block_791;
}
}
}
default: 
{
uint8_t x_844; lean_object* x_845; lean_object* x_846; uint8_t x_847; 
lean_free_object(x_796);
x_844 = lean_ctor_get_uint8(x_799, 0);
lean_dec_ref(x_799);
x_845 = lean_uint8_to_nat(x_844);
x_846 = lean_unsigned_to_nat(0u);
x_847 = lean_nat_dec_eq(x_845, x_846);
if (x_847 == 0)
{
uint8_t x_848; 
x_848 = lean_nat_dec_eq(x_845, x_792);
if (x_848 == 0)
{
lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; uint8_t x_856; 
x_849 = lean_ctor_get(x_6, 0);
x_850 = lean_ctor_get(x_6, 1);
x_851 = lean_ctor_get(x_6, 2);
x_852 = lean_ctor_get(x_6, 3);
x_853 = lean_ctor_get(x_6, 4);
x_854 = lean_unsigned_to_nat(2u);
x_855 = lean_nat_add(x_854, x_849);
x_856 = lean_nat_dec_lt(x_845, x_855);
if (x_856 == 0)
{
lean_object* x_857; uint8_t x_858; 
x_857 = lean_nat_add(x_855, x_850);
lean_dec(x_855);
x_858 = lean_nat_dec_lt(x_845, x_857);
lean_dec(x_857);
if (x_858 == 0)
{
lean_object* x_859; lean_object* x_860; 
lean_dec_ref(x_802);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_859 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_859, 0, x_845);
x_860 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_860, 0, x_859);
return x_860;
}
else
{
lean_object* x_861; lean_object* x_862; lean_object* x_863; uint8_t x_864; 
x_861 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_861);
x_862 = lean_ctor_get(x_5, 1);
lean_inc(x_862);
lean_dec_ref(x_5);
x_863 = lean_byte_array_size(x_861);
x_864 = lean_nat_dec_lt(x_862, x_863);
if (x_864 == 0)
{
lean_object* x_865; 
lean_dec(x_862);
lean_dec_ref(x_861);
lean_dec_ref(x_802);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_865 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_865;
}
else
{
if (x_864 == 0)
{
uint8_t x_866; lean_object* x_867; lean_object* x_868; uint8_t x_869; 
x_866 = l_instInhabitedUInt8;
x_867 = lean_box(x_866);
x_868 = l_outOfBounds___redArg(x_867);
x_869 = lean_unbox(x_868);
lean_dec(x_868);
lean_inc_n(x_850, 2);
lean_inc_n(x_849, 2);
lean_inc_ref(x_802);
lean_inc_ref_n(x_851, 2);
lean_inc_n(x_852, 2);
lean_inc_ref_n(x_853, 2);
x_730 = x_853;
x_731 = x_852;
x_732 = x_851;
x_733 = x_802;
x_734 = x_802;
x_735 = x_849;
x_736 = x_850;
x_737 = x_861;
x_738 = x_792;
x_739 = x_793;
x_740 = x_846;
x_741 = x_794;
x_742 = x_845;
x_743 = x_854;
x_744 = x_801;
x_745 = x_804;
x_746 = x_853;
x_747 = x_852;
x_748 = x_851;
x_749 = x_862;
x_750 = x_849;
x_751 = x_850;
x_752 = x_795;
x_753 = x_869;
goto block_769;
}
else
{
uint8_t x_870; 
x_870 = lean_byte_array_fget(x_861, x_862);
lean_inc_n(x_850, 2);
lean_inc_n(x_849, 2);
lean_inc_ref(x_802);
lean_inc_ref_n(x_851, 2);
lean_inc_n(x_852, 2);
lean_inc_ref_n(x_853, 2);
x_730 = x_853;
x_731 = x_852;
x_732 = x_851;
x_733 = x_802;
x_734 = x_802;
x_735 = x_849;
x_736 = x_850;
x_737 = x_861;
x_738 = x_792;
x_739 = x_793;
x_740 = x_846;
x_741 = x_794;
x_742 = x_845;
x_743 = x_854;
x_744 = x_801;
x_745 = x_804;
x_746 = x_853;
x_747 = x_852;
x_748 = x_851;
x_749 = x_862;
x_750 = x_849;
x_751 = x_850;
x_752 = x_795;
x_753 = x_870;
goto block_769;
}
}
}
}
else
{
lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; 
lean_inc_ref(x_853);
lean_inc(x_852);
lean_inc_ref(x_851);
lean_inc(x_850);
lean_inc(x_849);
lean_dec(x_855);
x_871 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_871);
x_872 = lean_ctor_get(x_5, 1);
lean_inc(x_872);
lean_dec_ref(x_5);
x_873 = lean_unsigned_to_nat(5u);
x_874 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_871, x_872, x_846, x_873);
if (lean_obj_tag(x_874) == 0)
{
uint8_t x_875; 
lean_dec_ref(x_853);
lean_dec(x_852);
lean_dec_ref(x_851);
lean_dec(x_850);
lean_dec(x_849);
lean_dec_ref(x_802);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_875 = !lean_is_exclusive(x_874);
if (x_875 == 0)
{
return x_874;
}
else
{
lean_object* x_876; lean_object* x_877; 
x_876 = lean_ctor_get(x_874, 0);
lean_inc(x_876);
lean_dec(x_874);
x_877 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_877, 0, x_876);
return x_877;
}
}
else
{
lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; uint8_t x_884; 
x_878 = lean_ctor_get(x_874, 0);
lean_inc(x_878);
lean_dec_ref(x_874);
x_879 = lean_ctor_get(x_878, 0);
lean_inc(x_879);
x_880 = lean_ctor_get(x_878, 1);
lean_inc(x_880);
lean_dec(x_878);
x_881 = lean_nat_sub(x_845, x_854);
x_882 = lean_array_get_borrowed(x_846, x_851, x_881);
lean_dec(x_881);
x_883 = lean_nat_add(x_882, x_879);
lean_dec(x_879);
x_884 = lean_nat_dec_lt(x_846, x_849);
if (x_884 == 0)
{
lean_inc_ref(x_802);
x_669 = x_880;
x_670 = x_802;
x_671 = x_802;
x_672 = x_792;
x_673 = x_793;
x_674 = x_846;
x_675 = x_883;
x_676 = x_794;
x_677 = x_801;
x_678 = x_804;
x_679 = x_795;
x_680 = x_6;
x_681 = x_849;
x_682 = x_850;
x_683 = x_851;
x_684 = x_852;
x_685 = x_853;
goto block_692;
}
else
{
uint8_t x_885; 
x_885 = !lean_is_exclusive(x_6);
if (x_885 == 0)
{
lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; 
x_886 = lean_ctor_get(x_6, 4);
lean_dec(x_886);
x_887 = lean_ctor_get(x_6, 3);
lean_dec(x_887);
x_888 = lean_ctor_get(x_6, 2);
lean_dec(x_888);
x_889 = lean_ctor_get(x_6, 1);
lean_dec(x_889);
x_890 = lean_ctor_get(x_6, 0);
lean_dec(x_890);
lean_inc(x_883);
x_891 = lean_array_set(x_851, x_852, x_883);
x_892 = lean_nat_add(x_852, x_792);
lean_dec(x_852);
x_893 = lean_nat_mod(x_892, x_849);
lean_dec(x_892);
lean_inc_ref(x_853);
lean_inc(x_893);
lean_inc_ref(x_891);
lean_inc(x_850);
lean_inc(x_849);
lean_ctor_set(x_6, 3, x_893);
lean_ctor_set(x_6, 2, x_891);
lean_inc_ref(x_802);
x_669 = x_880;
x_670 = x_802;
x_671 = x_802;
x_672 = x_792;
x_673 = x_793;
x_674 = x_846;
x_675 = x_883;
x_676 = x_794;
x_677 = x_801;
x_678 = x_804;
x_679 = x_795;
x_680 = x_6;
x_681 = x_849;
x_682 = x_850;
x_683 = x_891;
x_684 = x_893;
x_685 = x_853;
goto block_692;
}
else
{
lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; 
lean_dec(x_6);
lean_inc(x_883);
x_894 = lean_array_set(x_851, x_852, x_883);
x_895 = lean_nat_add(x_852, x_792);
lean_dec(x_852);
x_896 = lean_nat_mod(x_895, x_849);
lean_dec(x_895);
lean_inc_ref(x_853);
lean_inc(x_896);
lean_inc_ref(x_894);
lean_inc(x_850);
lean_inc(x_849);
x_897 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_897, 0, x_849);
lean_ctor_set(x_897, 1, x_850);
lean_ctor_set(x_897, 2, x_894);
lean_ctor_set(x_897, 3, x_896);
lean_ctor_set(x_897, 4, x_853);
lean_inc_ref(x_802);
x_669 = x_880;
x_670 = x_802;
x_671 = x_802;
x_672 = x_792;
x_673 = x_793;
x_674 = x_846;
x_675 = x_883;
x_676 = x_794;
x_677 = x_801;
x_678 = x_804;
x_679 = x_795;
x_680 = x_897;
x_681 = x_849;
x_682 = x_850;
x_683 = x_894;
x_684 = x_896;
x_685 = x_853;
goto block_692;
}
}
}
}
}
else
{
lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; 
x_898 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_898);
x_899 = lean_ctor_get(x_5, 1);
lean_inc(x_899);
lean_dec_ref(x_5);
x_900 = lean_unsigned_to_nat(5u);
x_901 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_898, x_899, x_846, x_900);
if (lean_obj_tag(x_901) == 0)
{
uint8_t x_902; 
lean_dec_ref(x_802);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_902 = !lean_is_exclusive(x_901);
if (x_902 == 0)
{
return x_901;
}
else
{
lean_object* x_903; lean_object* x_904; 
x_903 = lean_ctor_get(x_901, 0);
lean_inc(x_903);
lean_dec(x_901);
x_904 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_904, 0, x_903);
return x_904;
}
}
else
{
lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; uint8_t x_916; 
x_905 = lean_ctor_get(x_901, 0);
lean_inc(x_905);
lean_dec_ref(x_901);
x_906 = lean_ctor_get(x_905, 0);
lean_inc(x_906);
x_907 = lean_ctor_get(x_905, 1);
lean_inc(x_907);
lean_dec(x_905);
x_908 = lean_ctor_get(x_6, 0);
lean_inc(x_908);
x_909 = lean_ctor_get(x_6, 1);
lean_inc(x_909);
x_910 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_910);
x_911 = lean_ctor_get(x_6, 3);
lean_inc(x_911);
x_912 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_912);
x_913 = lean_byte_array_size(x_2);
x_914 = lean_nat_add(x_801, x_913);
x_915 = lean_nat_sub(x_914, x_906);
lean_dec(x_906);
lean_dec(x_914);
x_916 = lean_nat_dec_lt(x_846, x_908);
if (x_916 == 0)
{
lean_inc_ref(x_802);
x_632 = x_802;
x_633 = x_802;
x_634 = x_792;
x_635 = x_793;
x_636 = x_907;
x_637 = x_846;
x_638 = x_794;
x_639 = x_915;
x_640 = x_801;
x_641 = x_804;
x_642 = x_795;
x_643 = x_6;
x_644 = x_908;
x_645 = x_909;
x_646 = x_910;
x_647 = x_911;
x_648 = x_912;
goto block_655;
}
else
{
uint8_t x_917; 
x_917 = !lean_is_exclusive(x_6);
if (x_917 == 0)
{
lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; 
x_918 = lean_ctor_get(x_6, 4);
lean_dec(x_918);
x_919 = lean_ctor_get(x_6, 3);
lean_dec(x_919);
x_920 = lean_ctor_get(x_6, 2);
lean_dec(x_920);
x_921 = lean_ctor_get(x_6, 1);
lean_dec(x_921);
x_922 = lean_ctor_get(x_6, 0);
lean_dec(x_922);
lean_inc(x_915);
x_923 = lean_array_set(x_910, x_911, x_915);
x_924 = lean_nat_add(x_911, x_792);
lean_dec(x_911);
x_925 = lean_nat_mod(x_924, x_908);
lean_dec(x_924);
lean_inc_ref(x_912);
lean_inc(x_925);
lean_inc_ref(x_923);
lean_inc(x_909);
lean_inc(x_908);
lean_ctor_set(x_6, 3, x_925);
lean_ctor_set(x_6, 2, x_923);
lean_inc_ref(x_802);
x_632 = x_802;
x_633 = x_802;
x_634 = x_792;
x_635 = x_793;
x_636 = x_907;
x_637 = x_846;
x_638 = x_794;
x_639 = x_915;
x_640 = x_801;
x_641 = x_804;
x_642 = x_795;
x_643 = x_6;
x_644 = x_908;
x_645 = x_909;
x_646 = x_923;
x_647 = x_925;
x_648 = x_912;
goto block_655;
}
else
{
lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; 
lean_dec(x_6);
lean_inc(x_915);
x_926 = lean_array_set(x_910, x_911, x_915);
x_927 = lean_nat_add(x_911, x_792);
lean_dec(x_911);
x_928 = lean_nat_mod(x_927, x_908);
lean_dec(x_927);
lean_inc_ref(x_912);
lean_inc(x_928);
lean_inc_ref(x_926);
lean_inc(x_909);
lean_inc(x_908);
x_929 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_929, 0, x_908);
lean_ctor_set(x_929, 1, x_909);
lean_ctor_set(x_929, 2, x_926);
lean_ctor_set(x_929, 3, x_928);
lean_ctor_set(x_929, 4, x_912);
lean_inc_ref(x_802);
x_632 = x_802;
x_633 = x_802;
x_634 = x_792;
x_635 = x_793;
x_636 = x_907;
x_637 = x_846;
x_638 = x_794;
x_639 = x_915;
x_640 = x_801;
x_641 = x_804;
x_642 = x_795;
x_643 = x_929;
x_644 = x_908;
x_645 = x_909;
x_646 = x_926;
x_647 = x_928;
x_648 = x_912;
goto block_655;
}
}
}
}
}
else
{
lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; 
x_930 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_930);
x_931 = lean_ctor_get(x_5, 1);
lean_inc(x_931);
lean_dec_ref(x_5);
x_932 = lean_unsigned_to_nat(5u);
x_933 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_930, x_931, x_846, x_932);
if (lean_obj_tag(x_933) == 0)
{
uint8_t x_934; 
lean_dec_ref(x_802);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_934 = !lean_is_exclusive(x_933);
if (x_934 == 0)
{
return x_933;
}
else
{
lean_object* x_935; lean_object* x_936; 
x_935 = lean_ctor_get(x_933, 0);
lean_inc(x_935);
lean_dec(x_933);
x_936 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_936, 0, x_935);
return x_936;
}
}
else
{
lean_object* x_937; lean_object* x_938; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; uint8_t x_945; 
x_937 = lean_ctor_get(x_933, 0);
lean_inc(x_937);
lean_dec_ref(x_933);
x_938 = lean_ctor_get(x_937, 0);
lean_inc(x_938);
x_939 = lean_ctor_get(x_937, 1);
lean_inc(x_939);
lean_dec(x_937);
x_940 = lean_ctor_get(x_6, 0);
lean_inc(x_940);
x_941 = lean_ctor_get(x_6, 1);
lean_inc(x_941);
x_942 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_942);
x_943 = lean_ctor_get(x_6, 3);
lean_inc(x_943);
x_944 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_944);
x_945 = lean_nat_dec_lt(x_846, x_940);
if (x_945 == 0)
{
lean_inc_ref(x_802);
x_595 = x_802;
x_596 = x_802;
x_597 = x_792;
x_598 = x_793;
x_599 = x_939;
x_600 = x_846;
x_601 = x_794;
x_602 = x_938;
x_603 = x_801;
x_604 = x_804;
x_605 = x_795;
x_606 = x_6;
x_607 = x_940;
x_608 = x_941;
x_609 = x_942;
x_610 = x_943;
x_611 = x_944;
goto block_618;
}
else
{
uint8_t x_946; 
x_946 = !lean_is_exclusive(x_6);
if (x_946 == 0)
{
lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; 
x_947 = lean_ctor_get(x_6, 4);
lean_dec(x_947);
x_948 = lean_ctor_get(x_6, 3);
lean_dec(x_948);
x_949 = lean_ctor_get(x_6, 2);
lean_dec(x_949);
x_950 = lean_ctor_get(x_6, 1);
lean_dec(x_950);
x_951 = lean_ctor_get(x_6, 0);
lean_dec(x_951);
lean_inc(x_938);
x_952 = lean_array_set(x_942, x_943, x_938);
x_953 = lean_nat_add(x_943, x_792);
lean_dec(x_943);
x_954 = lean_nat_mod(x_953, x_940);
lean_dec(x_953);
lean_inc_ref(x_944);
lean_inc(x_954);
lean_inc_ref(x_952);
lean_inc(x_941);
lean_inc(x_940);
lean_ctor_set(x_6, 3, x_954);
lean_ctor_set(x_6, 2, x_952);
lean_inc_ref(x_802);
x_595 = x_802;
x_596 = x_802;
x_597 = x_792;
x_598 = x_793;
x_599 = x_939;
x_600 = x_846;
x_601 = x_794;
x_602 = x_938;
x_603 = x_801;
x_604 = x_804;
x_605 = x_795;
x_606 = x_6;
x_607 = x_940;
x_608 = x_941;
x_609 = x_952;
x_610 = x_954;
x_611 = x_944;
goto block_618;
}
else
{
lean_object* x_955; lean_object* x_956; lean_object* x_957; lean_object* x_958; 
lean_dec(x_6);
lean_inc(x_938);
x_955 = lean_array_set(x_942, x_943, x_938);
x_956 = lean_nat_add(x_943, x_792);
lean_dec(x_943);
x_957 = lean_nat_mod(x_956, x_940);
lean_dec(x_956);
lean_inc_ref(x_944);
lean_inc(x_957);
lean_inc_ref(x_955);
lean_inc(x_941);
lean_inc(x_940);
x_958 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_958, 0, x_940);
lean_ctor_set(x_958, 1, x_941);
lean_ctor_set(x_958, 2, x_955);
lean_ctor_set(x_958, 3, x_957);
lean_ctor_set(x_958, 4, x_944);
lean_inc_ref(x_802);
x_595 = x_802;
x_596 = x_802;
x_597 = x_792;
x_598 = x_793;
x_599 = x_939;
x_600 = x_846;
x_601 = x_794;
x_602 = x_938;
x_603 = x_801;
x_604 = x_804;
x_605 = x_795;
x_606 = x_958;
x_607 = x_940;
x_608 = x_941;
x_609 = x_955;
x_610 = x_957;
x_611 = x_944;
goto block_618;
}
}
}
}
}
}
}
else
{
lean_object* x_959; 
lean_inc_ref(x_798);
lean_dec(x_799);
lean_dec(x_794);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_796, 1, x_6);
lean_ctor_set(x_796, 0, x_5);
lean_inc_ref(x_796);
lean_inc_ref(x_4);
x_959 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_959, 0, x_4);
lean_ctor_set(x_959, 1, x_796);
x_488 = x_802;
x_489 = x_792;
x_490 = x_793;
x_491 = x_798;
x_492 = x_801;
x_493 = x_795;
x_494 = x_2;
x_495 = x_959;
x_496 = x_4;
x_497 = x_796;
x_498 = x_5;
x_499 = x_6;
goto block_506;
}
}
else
{
lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; uint8_t x_965; 
x_960 = lean_ctor_get(x_793, 1);
x_961 = lean_ctor_get(x_796, 0);
lean_inc(x_961);
lean_dec(x_796);
x_962 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_963 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_963, 0, x_962);
lean_closure_set(x_963, 1, x_1);
x_964 = lean_box(0);
x_965 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_961, x_964);
if (x_965 == 0)
{
switch (lean_obj_tag(x_961)) {
case 0:
{
lean_object* x_966; lean_object* x_967; 
lean_inc_ref(x_960);
lean_dec(x_794);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_966 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_966, 0, x_5);
lean_ctor_set(x_966, 1, x_6);
lean_inc_ref(x_966);
lean_inc_ref(x_4);
x_967 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_967, 0, x_4);
lean_ctor_set(x_967, 1, x_966);
x_488 = x_963;
x_489 = x_792;
x_490 = x_793;
x_491 = x_960;
x_492 = x_962;
x_493 = x_795;
x_494 = x_2;
x_495 = x_967;
x_496 = x_4;
x_497 = x_966;
x_498 = x_5;
x_499 = x_6;
goto block_506;
}
case 1:
{
lean_object* x_968; lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; uint8_t x_973; 
lean_inc_ref(x_960);
x_968 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_968);
x_969 = lean_ctor_get(x_4, 1);
lean_inc(x_969);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_970 = x_4;
} else {
 lean_dec_ref(x_4);
 x_970 = lean_box(0);
}
x_971 = lean_nat_add(x_969, x_794);
lean_dec(x_794);
x_972 = lean_byte_array_size(x_968);
x_973 = lean_nat_dec_le(x_971, x_972);
if (x_973 == 0)
{
lean_object* x_974; 
lean_dec(x_971);
lean_dec(x_970);
lean_dec(x_969);
lean_dec_ref(x_968);
lean_dec_ref(x_963);
lean_dec_ref(x_960);
lean_dec_ref(x_795);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_974 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_974;
}
else
{
if (x_973 == 0)
{
lean_object* x_975; 
lean_dec(x_971);
lean_dec(x_970);
lean_dec(x_969);
lean_dec_ref(x_968);
lean_dec_ref(x_963);
lean_dec_ref(x_960);
lean_dec_ref(x_795);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_975 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_975;
}
else
{
lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; lean_object* x_983; 
x_976 = l_ByteArray_extract(x_968, x_969, x_971);
if (lean_is_scalar(x_970)) {
 x_977 = lean_alloc_ctor(0, 2, 0);
} else {
 x_977 = x_970;
}
lean_ctor_set(x_977, 0, x_968);
lean_ctor_set(x_977, 1, x_971);
x_978 = lean_unsigned_to_nat(0u);
x_979 = lean_byte_array_size(x_2);
x_980 = lean_byte_array_size(x_976);
x_981 = lean_byte_array_copy_slice(x_976, x_978, x_2, x_979, x_980, x_965);
lean_dec_ref(x_976);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_982 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_982, 0, x_5);
lean_ctor_set(x_982, 1, x_6);
lean_inc_ref(x_982);
lean_inc_ref(x_977);
x_983 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_983, 0, x_977);
lean_ctor_set(x_983, 1, x_982);
x_488 = x_963;
x_489 = x_792;
x_490 = x_793;
x_491 = x_960;
x_492 = x_962;
x_493 = x_795;
x_494 = x_981;
x_495 = x_983;
x_496 = x_977;
x_497 = x_982;
x_498 = x_5;
x_499 = x_6;
goto block_506;
}
}
}
case 2:
{
lean_object* x_984; lean_object* x_985; lean_object* x_986; uint8_t x_987; 
x_984 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_984);
x_985 = lean_ctor_get(x_4, 1);
lean_inc(x_985);
lean_dec_ref(x_4);
x_986 = lean_byte_array_size(x_984);
x_987 = lean_nat_dec_lt(x_985, x_986);
if (x_987 == 0)
{
lean_object* x_988; 
lean_dec(x_985);
lean_dec_ref(x_984);
lean_dec_ref(x_963);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_988 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_988;
}
else
{
if (x_987 == 0)
{
uint8_t x_989; lean_object* x_990; lean_object* x_991; uint8_t x_992; 
x_989 = l_instInhabitedUInt8;
x_990 = lean_box(x_989);
x_991 = l_outOfBounds___redArg(x_990);
x_992 = lean_unbox(x_991);
lean_dec(x_991);
x_770 = x_963;
x_771 = x_792;
x_772 = x_793;
x_773 = x_984;
x_774 = x_794;
x_775 = x_962;
x_776 = x_985;
x_777 = x_795;
x_778 = x_965;
x_779 = x_992;
goto block_791;
}
else
{
uint8_t x_993; 
x_993 = lean_byte_array_fget(x_984, x_985);
x_770 = x_963;
x_771 = x_792;
x_772 = x_793;
x_773 = x_984;
x_774 = x_794;
x_775 = x_962;
x_776 = x_985;
x_777 = x_795;
x_778 = x_965;
x_779 = x_993;
goto block_791;
}
}
}
default: 
{
uint8_t x_994; lean_object* x_995; lean_object* x_996; uint8_t x_997; 
x_994 = lean_ctor_get_uint8(x_961, 0);
lean_dec_ref(x_961);
x_995 = lean_uint8_to_nat(x_994);
x_996 = lean_unsigned_to_nat(0u);
x_997 = lean_nat_dec_eq(x_995, x_996);
if (x_997 == 0)
{
uint8_t x_998; 
x_998 = lean_nat_dec_eq(x_995, x_792);
if (x_998 == 0)
{
lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; uint8_t x_1006; 
x_999 = lean_ctor_get(x_6, 0);
x_1000 = lean_ctor_get(x_6, 1);
x_1001 = lean_ctor_get(x_6, 2);
x_1002 = lean_ctor_get(x_6, 3);
x_1003 = lean_ctor_get(x_6, 4);
x_1004 = lean_unsigned_to_nat(2u);
x_1005 = lean_nat_add(x_1004, x_999);
x_1006 = lean_nat_dec_lt(x_995, x_1005);
if (x_1006 == 0)
{
lean_object* x_1007; uint8_t x_1008; 
x_1007 = lean_nat_add(x_1005, x_1000);
lean_dec(x_1005);
x_1008 = lean_nat_dec_lt(x_995, x_1007);
lean_dec(x_1007);
if (x_1008 == 0)
{
lean_object* x_1009; lean_object* x_1010; 
lean_dec_ref(x_963);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1009 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_1009, 0, x_995);
x_1010 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1010, 0, x_1009);
return x_1010;
}
else
{
lean_object* x_1011; lean_object* x_1012; lean_object* x_1013; uint8_t x_1014; 
x_1011 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1011);
x_1012 = lean_ctor_get(x_5, 1);
lean_inc(x_1012);
lean_dec_ref(x_5);
x_1013 = lean_byte_array_size(x_1011);
x_1014 = lean_nat_dec_lt(x_1012, x_1013);
if (x_1014 == 0)
{
lean_object* x_1015; 
lean_dec(x_1012);
lean_dec_ref(x_1011);
lean_dec_ref(x_963);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1015 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1015;
}
else
{
if (x_1014 == 0)
{
uint8_t x_1016; lean_object* x_1017; lean_object* x_1018; uint8_t x_1019; 
x_1016 = l_instInhabitedUInt8;
x_1017 = lean_box(x_1016);
x_1018 = l_outOfBounds___redArg(x_1017);
x_1019 = lean_unbox(x_1018);
lean_dec(x_1018);
lean_inc_n(x_1000, 2);
lean_inc_n(x_999, 2);
lean_inc_ref(x_963);
lean_inc_ref_n(x_1001, 2);
lean_inc_n(x_1002, 2);
lean_inc_ref_n(x_1003, 2);
x_730 = x_1003;
x_731 = x_1002;
x_732 = x_1001;
x_733 = x_963;
x_734 = x_963;
x_735 = x_999;
x_736 = x_1000;
x_737 = x_1011;
x_738 = x_792;
x_739 = x_793;
x_740 = x_996;
x_741 = x_794;
x_742 = x_995;
x_743 = x_1004;
x_744 = x_962;
x_745 = x_965;
x_746 = x_1003;
x_747 = x_1002;
x_748 = x_1001;
x_749 = x_1012;
x_750 = x_999;
x_751 = x_1000;
x_752 = x_795;
x_753 = x_1019;
goto block_769;
}
else
{
uint8_t x_1020; 
x_1020 = lean_byte_array_fget(x_1011, x_1012);
lean_inc_n(x_1000, 2);
lean_inc_n(x_999, 2);
lean_inc_ref(x_963);
lean_inc_ref_n(x_1001, 2);
lean_inc_n(x_1002, 2);
lean_inc_ref_n(x_1003, 2);
x_730 = x_1003;
x_731 = x_1002;
x_732 = x_1001;
x_733 = x_963;
x_734 = x_963;
x_735 = x_999;
x_736 = x_1000;
x_737 = x_1011;
x_738 = x_792;
x_739 = x_793;
x_740 = x_996;
x_741 = x_794;
x_742 = x_995;
x_743 = x_1004;
x_744 = x_962;
x_745 = x_965;
x_746 = x_1003;
x_747 = x_1002;
x_748 = x_1001;
x_749 = x_1012;
x_750 = x_999;
x_751 = x_1000;
x_752 = x_795;
x_753 = x_1020;
goto block_769;
}
}
}
}
else
{
lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; 
lean_inc_ref(x_1003);
lean_inc(x_1002);
lean_inc_ref(x_1001);
lean_inc(x_1000);
lean_inc(x_999);
lean_dec(x_1005);
x_1021 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1021);
x_1022 = lean_ctor_get(x_5, 1);
lean_inc(x_1022);
lean_dec_ref(x_5);
x_1023 = lean_unsigned_to_nat(5u);
x_1024 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1021, x_1022, x_996, x_1023);
if (lean_obj_tag(x_1024) == 0)
{
lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; 
lean_dec_ref(x_1003);
lean_dec(x_1002);
lean_dec_ref(x_1001);
lean_dec(x_1000);
lean_dec(x_999);
lean_dec_ref(x_963);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1025 = lean_ctor_get(x_1024, 0);
lean_inc(x_1025);
if (lean_is_exclusive(x_1024)) {
 lean_ctor_release(x_1024, 0);
 x_1026 = x_1024;
} else {
 lean_dec_ref(x_1024);
 x_1026 = lean_box(0);
}
if (lean_is_scalar(x_1026)) {
 x_1027 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1027 = x_1026;
}
lean_ctor_set(x_1027, 0, x_1025);
return x_1027;
}
else
{
lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; uint8_t x_1034; 
x_1028 = lean_ctor_get(x_1024, 0);
lean_inc(x_1028);
lean_dec_ref(x_1024);
x_1029 = lean_ctor_get(x_1028, 0);
lean_inc(x_1029);
x_1030 = lean_ctor_get(x_1028, 1);
lean_inc(x_1030);
lean_dec(x_1028);
x_1031 = lean_nat_sub(x_995, x_1004);
x_1032 = lean_array_get_borrowed(x_996, x_1001, x_1031);
lean_dec(x_1031);
x_1033 = lean_nat_add(x_1032, x_1029);
lean_dec(x_1029);
x_1034 = lean_nat_dec_lt(x_996, x_999);
if (x_1034 == 0)
{
lean_inc_ref(x_963);
x_669 = x_1030;
x_670 = x_963;
x_671 = x_963;
x_672 = x_792;
x_673 = x_793;
x_674 = x_996;
x_675 = x_1033;
x_676 = x_794;
x_677 = x_962;
x_678 = x_965;
x_679 = x_795;
x_680 = x_6;
x_681 = x_999;
x_682 = x_1000;
x_683 = x_1001;
x_684 = x_1002;
x_685 = x_1003;
goto block_692;
}
else
{
lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1035 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1035 = lean_box(0);
}
lean_inc(x_1033);
x_1036 = lean_array_set(x_1001, x_1002, x_1033);
x_1037 = lean_nat_add(x_1002, x_792);
lean_dec(x_1002);
x_1038 = lean_nat_mod(x_1037, x_999);
lean_dec(x_1037);
lean_inc_ref(x_1003);
lean_inc(x_1038);
lean_inc_ref(x_1036);
lean_inc(x_1000);
lean_inc(x_999);
if (lean_is_scalar(x_1035)) {
 x_1039 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1039 = x_1035;
}
lean_ctor_set(x_1039, 0, x_999);
lean_ctor_set(x_1039, 1, x_1000);
lean_ctor_set(x_1039, 2, x_1036);
lean_ctor_set(x_1039, 3, x_1038);
lean_ctor_set(x_1039, 4, x_1003);
lean_inc_ref(x_963);
x_669 = x_1030;
x_670 = x_963;
x_671 = x_963;
x_672 = x_792;
x_673 = x_793;
x_674 = x_996;
x_675 = x_1033;
x_676 = x_794;
x_677 = x_962;
x_678 = x_965;
x_679 = x_795;
x_680 = x_1039;
x_681 = x_999;
x_682 = x_1000;
x_683 = x_1036;
x_684 = x_1038;
x_685 = x_1003;
goto block_692;
}
}
}
}
else
{
lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; 
x_1040 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1040);
x_1041 = lean_ctor_get(x_5, 1);
lean_inc(x_1041);
lean_dec_ref(x_5);
x_1042 = lean_unsigned_to_nat(5u);
x_1043 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1040, x_1041, x_996, x_1042);
if (lean_obj_tag(x_1043) == 0)
{
lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; 
lean_dec_ref(x_963);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1044 = lean_ctor_get(x_1043, 0);
lean_inc(x_1044);
if (lean_is_exclusive(x_1043)) {
 lean_ctor_release(x_1043, 0);
 x_1045 = x_1043;
} else {
 lean_dec_ref(x_1043);
 x_1045 = lean_box(0);
}
if (lean_is_scalar(x_1045)) {
 x_1046 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1046 = x_1045;
}
lean_ctor_set(x_1046, 0, x_1044);
return x_1046;
}
else
{
lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; uint8_t x_1058; 
x_1047 = lean_ctor_get(x_1043, 0);
lean_inc(x_1047);
lean_dec_ref(x_1043);
x_1048 = lean_ctor_get(x_1047, 0);
lean_inc(x_1048);
x_1049 = lean_ctor_get(x_1047, 1);
lean_inc(x_1049);
lean_dec(x_1047);
x_1050 = lean_ctor_get(x_6, 0);
lean_inc(x_1050);
x_1051 = lean_ctor_get(x_6, 1);
lean_inc(x_1051);
x_1052 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1052);
x_1053 = lean_ctor_get(x_6, 3);
lean_inc(x_1053);
x_1054 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1054);
x_1055 = lean_byte_array_size(x_2);
x_1056 = lean_nat_add(x_962, x_1055);
x_1057 = lean_nat_sub(x_1056, x_1048);
lean_dec(x_1048);
lean_dec(x_1056);
x_1058 = lean_nat_dec_lt(x_996, x_1050);
if (x_1058 == 0)
{
lean_inc_ref(x_963);
x_632 = x_963;
x_633 = x_963;
x_634 = x_792;
x_635 = x_793;
x_636 = x_1049;
x_637 = x_996;
x_638 = x_794;
x_639 = x_1057;
x_640 = x_962;
x_641 = x_965;
x_642 = x_795;
x_643 = x_6;
x_644 = x_1050;
x_645 = x_1051;
x_646 = x_1052;
x_647 = x_1053;
x_648 = x_1054;
goto block_655;
}
else
{
lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1059 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1059 = lean_box(0);
}
lean_inc(x_1057);
x_1060 = lean_array_set(x_1052, x_1053, x_1057);
x_1061 = lean_nat_add(x_1053, x_792);
lean_dec(x_1053);
x_1062 = lean_nat_mod(x_1061, x_1050);
lean_dec(x_1061);
lean_inc_ref(x_1054);
lean_inc(x_1062);
lean_inc_ref(x_1060);
lean_inc(x_1051);
lean_inc(x_1050);
if (lean_is_scalar(x_1059)) {
 x_1063 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1063 = x_1059;
}
lean_ctor_set(x_1063, 0, x_1050);
lean_ctor_set(x_1063, 1, x_1051);
lean_ctor_set(x_1063, 2, x_1060);
lean_ctor_set(x_1063, 3, x_1062);
lean_ctor_set(x_1063, 4, x_1054);
lean_inc_ref(x_963);
x_632 = x_963;
x_633 = x_963;
x_634 = x_792;
x_635 = x_793;
x_636 = x_1049;
x_637 = x_996;
x_638 = x_794;
x_639 = x_1057;
x_640 = x_962;
x_641 = x_965;
x_642 = x_795;
x_643 = x_1063;
x_644 = x_1050;
x_645 = x_1051;
x_646 = x_1060;
x_647 = x_1062;
x_648 = x_1054;
goto block_655;
}
}
}
}
else
{
lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; 
x_1064 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1064);
x_1065 = lean_ctor_get(x_5, 1);
lean_inc(x_1065);
lean_dec_ref(x_5);
x_1066 = lean_unsigned_to_nat(5u);
x_1067 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1064, x_1065, x_996, x_1066);
if (lean_obj_tag(x_1067) == 0)
{
lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; 
lean_dec_ref(x_963);
lean_dec_ref(x_795);
lean_dec(x_794);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1068 = lean_ctor_get(x_1067, 0);
lean_inc(x_1068);
if (lean_is_exclusive(x_1067)) {
 lean_ctor_release(x_1067, 0);
 x_1069 = x_1067;
} else {
 lean_dec_ref(x_1067);
 x_1069 = lean_box(0);
}
if (lean_is_scalar(x_1069)) {
 x_1070 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1070 = x_1069;
}
lean_ctor_set(x_1070, 0, x_1068);
return x_1070;
}
else
{
lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; uint8_t x_1079; 
x_1071 = lean_ctor_get(x_1067, 0);
lean_inc(x_1071);
lean_dec_ref(x_1067);
x_1072 = lean_ctor_get(x_1071, 0);
lean_inc(x_1072);
x_1073 = lean_ctor_get(x_1071, 1);
lean_inc(x_1073);
lean_dec(x_1071);
x_1074 = lean_ctor_get(x_6, 0);
lean_inc(x_1074);
x_1075 = lean_ctor_get(x_6, 1);
lean_inc(x_1075);
x_1076 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1076);
x_1077 = lean_ctor_get(x_6, 3);
lean_inc(x_1077);
x_1078 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1078);
x_1079 = lean_nat_dec_lt(x_996, x_1074);
if (x_1079 == 0)
{
lean_inc_ref(x_963);
x_595 = x_963;
x_596 = x_963;
x_597 = x_792;
x_598 = x_793;
x_599 = x_1073;
x_600 = x_996;
x_601 = x_794;
x_602 = x_1072;
x_603 = x_962;
x_604 = x_965;
x_605 = x_795;
x_606 = x_6;
x_607 = x_1074;
x_608 = x_1075;
x_609 = x_1076;
x_610 = x_1077;
x_611 = x_1078;
goto block_618;
}
else
{
lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1080 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1080 = lean_box(0);
}
lean_inc(x_1072);
x_1081 = lean_array_set(x_1076, x_1077, x_1072);
x_1082 = lean_nat_add(x_1077, x_792);
lean_dec(x_1077);
x_1083 = lean_nat_mod(x_1082, x_1074);
lean_dec(x_1082);
lean_inc_ref(x_1078);
lean_inc(x_1083);
lean_inc_ref(x_1081);
lean_inc(x_1075);
lean_inc(x_1074);
if (lean_is_scalar(x_1080)) {
 x_1084 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1084 = x_1080;
}
lean_ctor_set(x_1084, 0, x_1074);
lean_ctor_set(x_1084, 1, x_1075);
lean_ctor_set(x_1084, 2, x_1081);
lean_ctor_set(x_1084, 3, x_1083);
lean_ctor_set(x_1084, 4, x_1078);
lean_inc_ref(x_963);
x_595 = x_963;
x_596 = x_963;
x_597 = x_792;
x_598 = x_793;
x_599 = x_1073;
x_600 = x_996;
x_601 = x_794;
x_602 = x_1072;
x_603 = x_962;
x_604 = x_965;
x_605 = x_795;
x_606 = x_1084;
x_607 = x_1074;
x_608 = x_1075;
x_609 = x_1081;
x_610 = x_1083;
x_611 = x_1078;
goto block_618;
}
}
}
}
}
}
else
{
lean_object* x_1085; lean_object* x_1086; 
lean_inc_ref(x_960);
lean_dec(x_961);
lean_dec(x_794);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1085 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1085, 0, x_5);
lean_ctor_set(x_1085, 1, x_6);
lean_inc_ref(x_1085);
lean_inc_ref(x_4);
x_1086 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1086, 0, x_4);
lean_ctor_set(x_1086, 1, x_1085);
x_488 = x_963;
x_489 = x_792;
x_490 = x_793;
x_491 = x_960;
x_492 = x_962;
x_493 = x_795;
x_494 = x_2;
x_495 = x_1086;
x_496 = x_4;
x_497 = x_1085;
x_498 = x_5;
x_499 = x_6;
goto block_506;
}
}
}
block_1106:
{
if (x_1096 == 0)
{
lean_dec(x_1094);
lean_dec_ref(x_1088);
x_792 = x_1091;
x_793 = x_1092;
x_794 = x_1095;
x_795 = x_1093;
goto block_1087;
}
else
{
lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; 
lean_dec(x_1095);
lean_dec_ref(x_1093);
x_1097 = lean_unsigned_to_nat(0u);
x_1098 = lean_unsigned_to_nat(5u);
x_1099 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1088, x_1094, x_1097, x_1098);
if (lean_obj_tag(x_1099) == 0)
{
uint8_t x_1100; 
lean_dec_ref(x_1092);
lean_dec(x_1091);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1100 = !lean_is_exclusive(x_1099);
if (x_1100 == 0)
{
return x_1099;
}
else
{
lean_object* x_1101; lean_object* x_1102; 
x_1101 = lean_ctor_get(x_1099, 0);
lean_inc(x_1101);
lean_dec(x_1099);
x_1102 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1102, 0, x_1101);
return x_1102;
}
}
else
{
lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; 
x_1103 = lean_ctor_get(x_1099, 0);
lean_inc(x_1103);
lean_dec_ref(x_1099);
x_1104 = lean_ctor_get(x_1103, 0);
lean_inc(x_1104);
x_1105 = lean_ctor_get(x_1103, 1);
lean_inc(x_1105);
lean_dec(x_1103);
x_792 = x_1091;
x_793 = x_1092;
x_794 = x_1104;
x_795 = x_1105;
goto block_1087;
}
}
}
block_1122:
{
lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; uint8_t x_1119; 
x_1108 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1109 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1110 = lean_uint8_to_nat(x_1107);
x_1111 = lean_array_get(x_1108, x_1109, x_1110);
x_1112 = lean_ctor_get(x_1111, 0);
x_1113 = lean_ctor_get(x_1112, 0);
x_1114 = lean_ctor_get(x_1112, 1);
lean_inc(x_1114);
x_1115 = lean_unsigned_to_nat(1u);
x_1116 = lean_nat_add(x_1089, x_1115);
lean_dec(x_1089);
lean_inc(x_1116);
lean_inc_ref(x_1088);
if (lean_is_scalar(x_1090)) {
 x_1117 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1117 = x_1090;
}
lean_ctor_set(x_1117, 0, x_1088);
lean_ctor_set(x_1117, 1, x_1116);
x_1118 = lean_unsigned_to_nat(0u);
x_1119 = lean_nat_dec_eq(x_1114, x_1118);
if (x_1119 == 0)
{
x_1091 = x_1115;
x_1092 = x_1111;
x_1093 = x_1117;
x_1094 = x_1116;
x_1095 = x_1114;
x_1096 = x_1119;
goto block_1106;
}
else
{
lean_object* x_1120; uint8_t x_1121; 
x_1120 = lean_box(0);
x_1121 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_1113, x_1120);
if (x_1121 == 0)
{
x_1091 = x_1115;
x_1092 = x_1111;
x_1093 = x_1117;
x_1094 = x_1116;
x_1095 = x_1114;
x_1096 = x_1119;
goto block_1106;
}
else
{
lean_dec(x_1116);
lean_dec_ref(x_1088);
x_792 = x_1115;
x_793 = x_1111;
x_794 = x_1114;
x_795 = x_1117;
goto block_1087;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; uint8_t x_8; uint8_t x_13; 
x_6 = lean_ctor_get(x_3, 1);
x_7 = lean_ctor_get(x_3, 2);
x_13 = lean_nat_dec_lt(x_5, x_6);
if (x_13 == 0)
{
lean_dec(x_5);
return x_4;
}
else
{
lean_object* x_14; uint8_t x_15; 
x_14 = lean_nat_add(x_1, x_5);
x_15 = lean_nat_dec_lt(x_14, x_1);
if (x_15 == 0)
{
lean_object* x_16; lean_object* x_17; uint8_t x_18; 
x_16 = lean_nat_sub(x_14, x_1);
lean_dec(x_14);
x_17 = lean_byte_array_size(x_4);
x_18 = lean_nat_dec_lt(x_16, x_17);
if (x_18 == 0)
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
lean_dec(x_16);
x_19 = l_instInhabitedUInt8;
x_20 = lean_box(x_19);
x_21 = l_outOfBounds___redArg(x_20);
x_22 = lean_unbox(x_21);
lean_dec(x_21);
x_8 = x_22;
goto block_12;
}
else
{
uint8_t x_23; 
x_23 = lean_byte_array_fget(x_4, x_16);
lean_dec(x_16);
x_8 = x_23;
goto block_12;
}
}
else
{
if (x_15 == 0)
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; uint8_t x_27; 
lean_dec(x_14);
x_24 = l_instInhabitedUInt8;
x_25 = lean_box(x_24);
x_26 = l_outOfBounds___redArg(x_25);
x_27 = lean_unbox(x_26);
lean_dec(x_26);
x_8 = x_27;
goto block_12;
}
else
{
uint8_t x_28; 
x_28 = lean_byte_array_fget(x_2, x_14);
lean_dec(x_14);
x_8 = x_28;
goto block_12;
}
}
}
block_12:
{
lean_object* x_9; lean_object* x_10; 
x_9 = lean_byte_array_push(x_4, x_8);
x_10 = lean_nat_add(x_5, x_7);
lean_dec(x_5);
x_4 = x_9;
x_5 = x_10;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; uint8_t x_7; uint8_t x_12; 
x_5 = lean_ctor_get(x_2, 1);
x_6 = lean_ctor_get(x_2, 2);
x_12 = lean_nat_dec_lt(x_4, x_5);
if (x_12 == 0)
{
lean_dec(x_4);
return x_3;
}
else
{
lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_13 = lean_nat_add(x_1, x_4);
x_14 = lean_byte_array_size(x_3);
x_15 = lean_nat_dec_lt(x_13, x_14);
if (x_15 == 0)
{
uint8_t x_16; lean_object* x_17; lean_object* x_18; uint8_t x_19; 
lean_dec(x_13);
x_16 = l_instInhabitedUInt8;
x_17 = lean_box(x_16);
x_18 = l_outOfBounds___redArg(x_17);
x_19 = lean_unbox(x_18);
lean_dec(x_18);
x_7 = x_19;
goto block_11;
}
else
{
uint8_t x_20; 
x_20 = lean_byte_array_fget(x_3, x_13);
lean_dec(x_13);
x_7 = x_20;
goto block_11;
}
}
block_11:
{
lean_object* x_8; lean_object* x_9; 
x_8 = lean_byte_array_push(x_3, x_7);
x_9 = lean_nat_add(x_4, x_6);
lean_dec(x_4);
x_3 = x_8;
x_4 = x_9;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; uint8_t x_9; 
x_8 = lean_unsigned_to_nat(0u);
x_9 = lean_nat_dec_eq(x_2, x_8);
if (x_9 == 1)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
lean_dec(x_2);
x_10 = lean_ctor_get(x_4, 0);
x_11 = lean_ctor_get(x_4, 1);
x_12 = lean_byte_array_size(x_10);
x_13 = lean_nat_dec_le(x_12, x_11);
if (x_13 == 0)
{
lean_object* x_14; 
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_14 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_14;
}
else
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; 
x_15 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_15, 0, x_6);
lean_ctor_set(x_15, 1, x_7);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_5);
lean_ctor_set(x_16, 1, x_15);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_4);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_3);
lean_ctor_set(x_18, 1, x_17);
x_19 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_20 = lean_ctor_get(x_4, 0);
x_21 = lean_ctor_get(x_4, 1);
x_22 = lean_byte_array_size(x_20);
x_23 = lean_nat_dec_le(x_22, x_21);
if (x_23 == 0)
{
lean_object* x_24; uint8_t x_25; 
lean_inc(x_21);
lean_inc_ref(x_20);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_24 = x_4;
} else {
 lean_dec_ref(x_4);
 x_24 = lean_box(0);
}
x_25 = lean_nat_dec_lt(x_21, x_22);
if (x_25 == 0)
{
lean_object* x_26; 
lean_dec(x_24);
lean_dec(x_21);
lean_dec_ref(x_20);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
lean_dec(x_2);
x_26 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_55; lean_object* x_56; uint8_t x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_98; lean_object* x_99; uint8_t x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; uint8_t x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; uint8_t x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_203; lean_object* x_204; lean_object* x_205; uint8_t x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint8_t x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; uint8_t x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; uint8_t x_256; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; uint8_t x_470; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_511; uint8_t x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; uint8_t x_519; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; uint8_t x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_583; uint8_t x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; uint8_t x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_616; uint8_t x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; uint8_t x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_649; uint8_t x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; uint8_t x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_682; uint8_t x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_693; uint8_t x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_715; uint8_t x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; uint8_t x_731; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; uint8_t x_1046; uint8_t x_1056; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_2, x_27);
lean_dec(x_2);
if (x_25 == 0)
{
uint8_t x_1077; lean_object* x_1078; lean_object* x_1079; uint8_t x_1080; 
x_1077 = l_instInhabitedUInt8;
x_1078 = lean_box(x_1077);
x_1079 = l_outOfBounds___redArg(x_1078);
x_1080 = lean_unbox(x_1079);
lean_dec(x_1079);
x_1056 = x_1080;
goto block_1076;
}
else
{
uint8_t x_1081; 
x_1081 = lean_byte_array_fget(x_20, x_21);
x_1056 = x_1081;
goto block_1076;
}
block_36:
{
lean_object* x_33; lean_object* x_34; 
x_33 = lean_ctor_get(x_32, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_32, 1);
lean_inc(x_34);
lean_dec_ref(x_32);
x_2 = x_28;
x_3 = x_29;
x_4 = x_30;
x_5 = x_31;
x_6 = x_33;
x_7 = x_34;
goto _start;
}
block_54:
{
lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; 
x_46 = lean_nat_add(x_39, x_44);
lean_dec(x_44);
lean_dec(x_39);
if (lean_is_scalar(x_24)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_24;
}
lean_ctor_set(x_47, 0, x_37);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_box(x_45);
x_49 = lean_mk_array(x_43, x_48);
x_50 = lean_byte_array_mk(x_49);
x_51 = lean_byte_array_size(x_42);
x_52 = lean_byte_array_size(x_50);
x_53 = lean_byte_array_copy_slice(x_50, x_8, x_42, x_51, x_52, x_40);
lean_dec_ref(x_50);
x_29 = x_53;
x_30 = x_41;
x_31 = x_47;
x_32 = x_38;
goto block_36;
}
block_97:
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_64 = lean_byte_array_size(x_59);
x_65 = lean_nat_add(x_55, x_64);
x_66 = lean_nat_dec_le(x_65, x_62);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
lean_dec(x_65);
x_67 = lean_nat_add(x_62, x_61);
x_68 = lean_nat_dec_le(x_67, x_55);
if (x_68 == 0)
{
uint8_t x_69; 
lean_dec(x_67);
x_69 = lean_nat_dec_le(x_55, x_62);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_70 = lean_nat_sub(x_55, x_62);
x_71 = lean_nat_sub(x_61, x_70);
lean_dec(x_70);
lean_dec(x_61);
x_72 = l_ByteArray_extract(x_1, x_62, x_55);
x_73 = lean_byte_array_size(x_72);
x_74 = lean_byte_array_copy_slice(x_72, x_8, x_59, x_64, x_73, x_57);
lean_dec_ref(x_72);
x_75 = lean_byte_array_size(x_74);
x_76 = lean_nat_sub(x_75, x_55);
x_77 = lean_nat_dec_le(x_71, x_76);
lean_dec(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_8);
lean_ctor_set(x_78, 1, x_71);
lean_ctor_set(x_78, 2, x_60);
x_79 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_55, x_1, x_78, x_74, x_8);
lean_dec_ref(x_78);
lean_dec(x_55);
x_29 = x_79;
x_30 = x_58;
x_31 = x_56;
x_32 = x_63;
goto block_36;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_60);
x_80 = lean_nat_add(x_55, x_71);
lean_dec(x_71);
x_81 = l_ByteArray_extract(x_74, x_55, x_80);
lean_dec(x_80);
x_82 = lean_byte_array_size(x_81);
x_83 = lean_byte_array_copy_slice(x_81, x_8, x_74, x_75, x_82, x_57);
lean_dec_ref(x_81);
x_29 = x_83;
x_30 = x_58;
x_31 = x_56;
x_32 = x_63;
goto block_36;
}
}
else
{
lean_object* x_84; lean_object* x_85; uint8_t x_86; 
x_84 = lean_nat_sub(x_62, x_55);
lean_dec(x_55);
lean_dec(x_62);
x_85 = lean_nat_add(x_84, x_61);
x_86 = lean_nat_dec_le(x_85, x_64);
if (x_86 == 0)
{
lean_object* x_87; lean_object* x_88; 
lean_dec(x_85);
x_87 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_87, 0, x_8);
lean_ctor_set(x_87, 1, x_61);
lean_ctor_set(x_87, 2, x_60);
x_88 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_84, x_87, x_59, x_8);
lean_dec_ref(x_87);
lean_dec(x_84);
x_29 = x_88;
x_30 = x_58;
x_31 = x_56;
x_32 = x_63;
goto block_36;
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; 
lean_dec(x_61);
lean_dec(x_60);
x_89 = l_ByteArray_extract(x_59, x_84, x_85);
lean_dec(x_85);
x_90 = lean_byte_array_size(x_89);
x_91 = lean_byte_array_copy_slice(x_89, x_8, x_59, x_64, x_90, x_57);
lean_dec_ref(x_89);
x_29 = x_91;
x_30 = x_58;
x_31 = x_56;
x_32 = x_63;
goto block_36;
}
}
}
else
{
lean_object* x_92; lean_object* x_93; lean_object* x_94; 
lean_dec(x_61);
lean_dec(x_60);
lean_dec(x_55);
x_92 = l_ByteArray_extract(x_1, x_62, x_67);
lean_dec(x_67);
x_93 = lean_byte_array_size(x_92);
x_94 = lean_byte_array_copy_slice(x_92, x_8, x_59, x_64, x_93, x_57);
lean_dec_ref(x_92);
x_29 = x_94;
x_30 = x_58;
x_31 = x_56;
x_32 = x_63;
goto block_36;
}
}
else
{
lean_object* x_95; lean_object* x_96; 
lean_dec_ref(x_63);
lean_dec(x_60);
lean_dec_ref(x_59);
lean_dec_ref(x_58);
lean_dec_ref(x_56);
lean_dec(x_55);
lean_dec(x_28);
x_95 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_95, 0, x_62);
lean_ctor_set(x_95, 1, x_61);
lean_ctor_set(x_95, 2, x_65);
x_96 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_96, 0, x_95);
return x_96;
}
}
block_109:
{
lean_object* x_108; 
x_108 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_108, 0, x_103);
lean_ctor_set(x_108, 1, x_107);
x_55 = x_98;
x_56 = x_99;
x_57 = x_100;
x_58 = x_102;
x_59 = x_101;
x_60 = x_105;
x_61 = x_104;
x_62 = x_106;
x_63 = x_108;
goto block_97;
}
block_132:
{
uint8_t x_126; 
x_126 = lean_nat_dec_lt(x_111, x_122);
lean_dec(x_111);
if (x_126 == 0)
{
lean_dec_ref(x_125);
lean_dec(x_124);
lean_dec_ref(x_123);
lean_dec(x_122);
lean_dec(x_121);
x_98 = x_110;
x_99 = x_112;
x_100 = x_113;
x_101 = x_116;
x_102 = x_115;
x_103 = x_114;
x_104 = x_119;
x_105 = x_118;
x_106 = x_117;
x_107 = x_120;
goto block_109;
}
else
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; 
lean_dec_ref(x_120);
x_127 = lean_unsigned_to_nat(256u);
x_128 = lean_nat_mul(x_122, x_127);
x_129 = lean_nat_mod(x_117, x_128);
lean_dec(x_128);
lean_inc(x_117);
x_130 = lean_array_set(x_125, x_129, x_117);
lean_dec(x_129);
x_131 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_131, 0, x_121);
lean_ctor_set(x_131, 1, x_122);
lean_ctor_set(x_131, 2, x_123);
lean_ctor_set(x_131, 3, x_124);
lean_ctor_set(x_131, 4, x_130);
x_98 = x_110;
x_99 = x_112;
x_100 = x_113;
x_101 = x_116;
x_102 = x_115;
x_103 = x_114;
x_104 = x_119;
x_105 = x_118;
x_106 = x_117;
x_107 = x_131;
goto block_109;
}
}
block_144:
{
lean_object* x_143; 
x_143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_143, 0, x_134);
lean_ctor_set(x_143, 1, x_142);
x_55 = x_133;
x_56 = x_136;
x_57 = x_137;
x_58 = x_139;
x_59 = x_138;
x_60 = x_141;
x_61 = x_140;
x_62 = x_135;
x_63 = x_143;
goto block_97;
}
block_167:
{
uint8_t x_161; 
x_161 = lean_nat_dec_lt(x_146, x_157);
lean_dec(x_146);
if (x_161 == 0)
{
lean_dec_ref(x_160);
lean_dec(x_159);
lean_dec_ref(x_158);
lean_dec(x_157);
lean_dec(x_156);
x_133 = x_145;
x_134 = x_147;
x_135 = x_148;
x_136 = x_149;
x_137 = x_150;
x_138 = x_152;
x_139 = x_151;
x_140 = x_154;
x_141 = x_153;
x_142 = x_155;
goto block_144;
}
else
{
lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; 
lean_dec_ref(x_155);
x_162 = lean_unsigned_to_nat(256u);
x_163 = lean_nat_mul(x_157, x_162);
x_164 = lean_nat_mod(x_148, x_163);
lean_dec(x_163);
lean_inc(x_148);
x_165 = lean_array_set(x_160, x_164, x_148);
lean_dec(x_164);
x_166 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_166, 0, x_156);
lean_ctor_set(x_166, 1, x_157);
lean_ctor_set(x_166, 2, x_158);
lean_ctor_set(x_166, 3, x_159);
lean_ctor_set(x_166, 4, x_165);
x_133 = x_145;
x_134 = x_147;
x_135 = x_148;
x_136 = x_149;
x_137 = x_150;
x_138 = x_152;
x_139 = x_151;
x_140 = x_154;
x_141 = x_153;
x_142 = x_166;
goto block_144;
}
}
block_179:
{
lean_object* x_178; 
x_178 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_178, 0, x_174);
lean_ctor_set(x_178, 1, x_177);
x_55 = x_168;
x_56 = x_170;
x_57 = x_171;
x_58 = x_173;
x_59 = x_172;
x_60 = x_176;
x_61 = x_175;
x_62 = x_169;
x_63 = x_178;
goto block_97;
}
block_202:
{
uint8_t x_196; 
x_196 = lean_nat_dec_lt(x_182, x_192);
lean_dec(x_182);
if (x_196 == 0)
{
lean_dec_ref(x_195);
lean_dec(x_194);
lean_dec_ref(x_193);
lean_dec(x_192);
lean_dec(x_191);
x_168 = x_180;
x_169 = x_181;
x_170 = x_183;
x_171 = x_184;
x_172 = x_186;
x_173 = x_185;
x_174 = x_187;
x_175 = x_189;
x_176 = x_188;
x_177 = x_190;
goto block_179;
}
else
{
lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; 
lean_dec_ref(x_190);
x_197 = lean_unsigned_to_nat(256u);
x_198 = lean_nat_mul(x_192, x_197);
x_199 = lean_nat_mod(x_181, x_198);
lean_dec(x_198);
lean_inc(x_181);
x_200 = lean_array_set(x_195, x_199, x_181);
lean_dec(x_199);
x_201 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_201, 0, x_191);
lean_ctor_set(x_201, 1, x_192);
lean_ctor_set(x_201, 2, x_193);
lean_ctor_set(x_201, 3, x_194);
lean_ctor_set(x_201, 4, x_200);
x_168 = x_180;
x_169 = x_181;
x_170 = x_183;
x_171 = x_184;
x_172 = x_186;
x_173 = x_185;
x_174 = x_187;
x_175 = x_189;
x_176 = x_188;
x_177 = x_201;
goto block_179;
}
}
block_214:
{
lean_object* x_213; 
x_213 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_213, 0, x_204);
lean_ctor_set(x_213, 1, x_212);
x_55 = x_203;
x_56 = x_205;
x_57 = x_206;
x_58 = x_208;
x_59 = x_207;
x_60 = x_211;
x_61 = x_210;
x_62 = x_209;
x_63 = x_213;
goto block_97;
}
block_237:
{
uint8_t x_232; 
x_232 = lean_nat_dec_lt(x_218, x_228);
lean_dec(x_218);
if (x_232 == 0)
{
lean_dec_ref(x_231);
lean_dec(x_230);
lean_dec_ref(x_229);
lean_dec(x_228);
lean_dec(x_227);
x_203 = x_216;
x_204 = x_217;
x_205 = x_219;
x_206 = x_220;
x_207 = x_223;
x_208 = x_222;
x_209 = x_221;
x_210 = x_225;
x_211 = x_224;
x_212 = x_226;
goto block_214;
}
else
{
lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; 
lean_dec_ref(x_226);
x_233 = lean_nat_mul(x_228, x_215);
x_234 = lean_nat_mod(x_221, x_233);
lean_dec(x_233);
lean_inc(x_221);
x_235 = lean_array_set(x_231, x_234, x_221);
lean_dec(x_234);
x_236 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_236, 0, x_227);
lean_ctor_set(x_236, 1, x_228);
lean_ctor_set(x_236, 2, x_229);
lean_ctor_set(x_236, 3, x_230);
lean_ctor_set(x_236, 4, x_235);
x_203 = x_216;
x_204 = x_217;
x_205 = x_219;
x_206 = x_220;
x_207 = x_223;
x_208 = x_222;
x_209 = x_221;
x_210 = x_225;
x_211 = x_224;
x_212 = x_236;
goto block_214;
}
}
block_276:
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; uint8_t x_266; 
x_257 = lean_nat_add(x_239, x_254);
lean_dec(x_239);
x_258 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_258, 0, x_243);
lean_ctor_set(x_258, 1, x_257);
x_259 = lean_nat_sub(x_247, x_248);
lean_dec(x_247);
x_260 = lean_nat_sub(x_259, x_245);
lean_dec(x_259);
x_261 = lean_unsigned_to_nat(256u);
x_262 = lean_nat_mul(x_260, x_261);
lean_dec(x_260);
x_263 = lean_uint8_to_nat(x_256);
x_264 = lean_nat_add(x_262, x_263);
lean_dec(x_262);
x_265 = lean_array_get(x_8, x_246, x_264);
lean_dec(x_264);
x_266 = lean_nat_dec_lt(x_241, x_245);
if (x_266 == 0)
{
lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_250);
lean_dec(x_249);
lean_dec_ref(x_246);
lean_dec(x_245);
lean_dec_ref(x_240);
x_267 = lean_ctor_get(x_252, 0);
lean_inc(x_267);
x_268 = lean_ctor_get(x_252, 1);
lean_inc(x_268);
x_269 = lean_ctor_get(x_252, 2);
lean_inc_ref(x_269);
x_270 = lean_ctor_get(x_252, 3);
lean_inc(x_270);
x_271 = lean_ctor_get(x_252, 4);
lean_inc_ref(x_271);
x_215 = x_261;
x_216 = x_238;
x_217 = x_258;
x_218 = x_241;
x_219 = x_242;
x_220 = x_251;
x_221 = x_265;
x_222 = x_244;
x_223 = x_253;
x_224 = x_254;
x_225 = x_255;
x_226 = x_252;
x_227 = x_267;
x_228 = x_268;
x_229 = x_269;
x_230 = x_270;
x_231 = x_271;
goto block_237;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
lean_dec_ref(x_252);
lean_inc(x_265);
x_272 = lean_array_set(x_240, x_250, x_265);
x_273 = lean_nat_add(x_250, x_254);
lean_dec(x_250);
x_274 = lean_nat_mod(x_273, x_245);
lean_dec(x_273);
lean_inc_ref(x_246);
lean_inc(x_274);
lean_inc_ref(x_272);
lean_inc(x_249);
lean_inc(x_245);
x_275 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_275, 0, x_245);
lean_ctor_set(x_275, 1, x_249);
lean_ctor_set(x_275, 2, x_272);
lean_ctor_set(x_275, 3, x_274);
lean_ctor_set(x_275, 4, x_246);
x_215 = x_261;
x_216 = x_238;
x_217 = x_258;
x_218 = x_241;
x_219 = x_242;
x_220 = x_251;
x_221 = x_265;
x_222 = x_244;
x_223 = x_253;
x_224 = x_254;
x_225 = x_255;
x_226 = x_275;
x_227 = x_245;
x_228 = x_249;
x_229 = x_272;
x_230 = x_274;
x_231 = x_246;
goto block_237;
}
}
block_282:
{
lean_object* x_280; lean_object* x_281; 
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
lean_dec_ref(x_279);
x_29 = x_277;
x_30 = x_278;
x_31 = x_280;
x_32 = x_281;
goto block_36;
}
block_444:
{
lean_object* x_294; uint8_t x_295; 
x_294 = lean_box(0);
x_295 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_285, x_294);
if (x_295 == 0)
{
switch (lean_obj_tag(x_285)) {
case 0:
{
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_289);
lean_dec_ref(x_288);
lean_dec_ref(x_287);
lean_dec_ref(x_284);
lean_dec(x_283);
lean_dec(x_24);
x_277 = x_290;
x_278 = x_293;
x_279 = x_286;
goto block_282;
}
case 1:
{
uint8_t x_296; 
lean_dec(x_291);
lean_dec_ref(x_289);
lean_dec_ref(x_286);
lean_dec_ref(x_284);
lean_dec(x_283);
lean_dec(x_24);
x_296 = !lean_is_exclusive(x_288);
if (x_296 == 0)
{
lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; uint8_t x_301; 
x_297 = lean_ctor_get(x_288, 0);
x_298 = lean_ctor_get(x_288, 1);
x_299 = lean_nat_add(x_298, x_292);
lean_dec(x_292);
x_300 = lean_byte_array_size(x_297);
x_301 = lean_nat_dec_le(x_299, x_300);
if (x_301 == 0)
{
lean_object* x_302; 
lean_dec(x_299);
lean_free_object(x_288);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_293);
lean_dec_ref(x_290);
lean_dec_ref(x_287);
lean_dec(x_28);
x_302 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_302;
}
else
{
if (x_301 == 0)
{
lean_object* x_303; 
lean_dec(x_299);
lean_free_object(x_288);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_293);
lean_dec_ref(x_290);
lean_dec_ref(x_287);
lean_dec(x_28);
x_303 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_303;
}
else
{
lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
x_304 = l_ByteArray_extract(x_297, x_298, x_299);
lean_ctor_set(x_288, 1, x_299);
x_305 = lean_byte_array_size(x_290);
x_306 = lean_byte_array_size(x_304);
x_307 = lean_byte_array_copy_slice(x_304, x_8, x_290, x_305, x_306, x_295);
lean_dec_ref(x_304);
x_29 = x_307;
x_30 = x_293;
x_31 = x_288;
x_32 = x_287;
goto block_36;
}
}
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; uint8_t x_312; 
x_308 = lean_ctor_get(x_288, 0);
x_309 = lean_ctor_get(x_288, 1);
lean_inc(x_309);
lean_inc(x_308);
lean_dec(x_288);
x_310 = lean_nat_add(x_309, x_292);
lean_dec(x_292);
x_311 = lean_byte_array_size(x_308);
x_312 = lean_nat_dec_le(x_310, x_311);
if (x_312 == 0)
{
lean_object* x_313; 
lean_dec(x_310);
lean_dec(x_309);
lean_dec_ref(x_308);
lean_dec_ref(x_293);
lean_dec_ref(x_290);
lean_dec_ref(x_287);
lean_dec(x_28);
x_313 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_313;
}
else
{
if (x_312 == 0)
{
lean_object* x_314; 
lean_dec(x_310);
lean_dec(x_309);
lean_dec_ref(x_308);
lean_dec_ref(x_293);
lean_dec_ref(x_290);
lean_dec_ref(x_287);
lean_dec(x_28);
x_314 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_314;
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_315 = l_ByteArray_extract(x_308, x_309, x_310);
x_316 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_316, 0, x_308);
lean_ctor_set(x_316, 1, x_310);
x_317 = lean_byte_array_size(x_290);
x_318 = lean_byte_array_size(x_315);
x_319 = lean_byte_array_copy_slice(x_315, x_8, x_290, x_317, x_318, x_295);
lean_dec_ref(x_315);
x_29 = x_319;
x_30 = x_293;
x_31 = x_316;
x_32 = x_287;
goto block_36;
}
}
}
}
case 2:
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; uint8_t x_323; 
lean_dec_ref(x_289);
lean_dec_ref(x_286);
lean_dec_ref(x_284);
lean_dec(x_283);
x_320 = lean_ctor_get(x_288, 0);
lean_inc_ref(x_320);
x_321 = lean_ctor_get(x_288, 1);
lean_inc(x_321);
lean_dec_ref(x_288);
x_322 = lean_byte_array_size(x_320);
x_323 = lean_nat_dec_lt(x_321, x_322);
if (x_323 == 0)
{
lean_object* x_324; 
lean_dec(x_321);
lean_dec_ref(x_320);
lean_dec_ref(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_287);
lean_dec(x_28);
lean_dec(x_24);
x_324 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_324;
}
else
{
if (x_323 == 0)
{
uint8_t x_325; lean_object* x_326; lean_object* x_327; uint8_t x_328; 
x_325 = l_instInhabitedUInt8;
x_326 = lean_box(x_325);
x_327 = l_outOfBounds___redArg(x_326);
x_328 = lean_unbox(x_327);
lean_dec(x_327);
x_37 = x_320;
x_38 = x_287;
x_39 = x_321;
x_40 = x_295;
x_41 = x_293;
x_42 = x_290;
x_43 = x_292;
x_44 = x_291;
x_45 = x_328;
goto block_54;
}
else
{
uint8_t x_329; 
x_329 = lean_byte_array_fget(x_320, x_321);
x_37 = x_320;
x_38 = x_287;
x_39 = x_321;
x_40 = x_295;
x_41 = x_293;
x_42 = x_290;
x_43 = x_292;
x_44 = x_291;
x_45 = x_329;
goto block_54;
}
}
}
default: 
{
uint8_t x_330; lean_object* x_331; uint8_t x_332; 
lean_dec_ref(x_287);
lean_dec_ref(x_286);
lean_dec(x_24);
x_330 = lean_ctor_get_uint8(x_285, 0);
lean_dec_ref(x_285);
x_331 = lean_uint8_to_nat(x_330);
x_332 = lean_nat_dec_eq(x_331, x_8);
if (x_332 == 0)
{
uint8_t x_333; 
x_333 = lean_nat_dec_eq(x_331, x_291);
if (x_333 == 0)
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; uint8_t x_341; 
x_334 = lean_ctor_get(x_289, 0);
lean_inc(x_334);
x_335 = lean_ctor_get(x_289, 1);
lean_inc(x_335);
x_336 = lean_ctor_get(x_289, 2);
lean_inc_ref(x_336);
x_337 = lean_ctor_get(x_289, 3);
lean_inc(x_337);
x_338 = lean_ctor_get(x_289, 4);
lean_inc_ref(x_338);
x_339 = lean_unsigned_to_nat(2u);
x_340 = lean_nat_add(x_339, x_334);
x_341 = lean_nat_dec_lt(x_331, x_340);
if (x_341 == 0)
{
lean_object* x_342; uint8_t x_343; 
x_342 = lean_nat_add(x_340, x_335);
lean_dec(x_340);
x_343 = lean_nat_dec_lt(x_331, x_342);
lean_dec(x_342);
if (x_343 == 0)
{
lean_object* x_344; lean_object* x_345; 
lean_dec_ref(x_338);
lean_dec(x_337);
lean_dec_ref(x_336);
lean_dec(x_335);
lean_dec(x_334);
lean_dec_ref(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_289);
lean_dec_ref(x_288);
lean_dec_ref(x_284);
lean_dec(x_283);
lean_dec(x_28);
x_344 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_344, 0, x_331);
x_345 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_345, 0, x_344);
return x_345;
}
else
{
lean_object* x_346; lean_object* x_347; lean_object* x_348; uint8_t x_349; 
x_346 = lean_ctor_get(x_284, 0);
lean_inc_ref(x_346);
x_347 = lean_ctor_get(x_284, 1);
lean_inc(x_347);
lean_dec_ref(x_284);
x_348 = lean_byte_array_size(x_346);
x_349 = lean_nat_dec_lt(x_347, x_348);
if (x_349 == 0)
{
lean_object* x_350; 
lean_dec(x_347);
lean_dec_ref(x_346);
lean_dec_ref(x_338);
lean_dec(x_337);
lean_dec_ref(x_336);
lean_dec(x_335);
lean_dec(x_334);
lean_dec_ref(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_289);
lean_dec_ref(x_288);
lean_dec(x_283);
lean_dec(x_28);
x_350 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_350;
}
else
{
if (x_349 == 0)
{
uint8_t x_351; lean_object* x_352; lean_object* x_353; uint8_t x_354; 
x_351 = l_instInhabitedUInt8;
x_352 = lean_box(x_351);
x_353 = l_outOfBounds___redArg(x_352);
x_354 = lean_unbox(x_353);
lean_dec(x_353);
x_238 = x_283;
x_239 = x_347;
x_240 = x_336;
x_241 = x_8;
x_242 = x_288;
x_243 = x_346;
x_244 = x_293;
x_245 = x_334;
x_246 = x_338;
x_247 = x_331;
x_248 = x_339;
x_249 = x_335;
x_250 = x_337;
x_251 = x_295;
x_252 = x_289;
x_253 = x_290;
x_254 = x_291;
x_255 = x_292;
x_256 = x_354;
goto block_276;
}
else
{
uint8_t x_355; 
x_355 = lean_byte_array_fget(x_346, x_347);
x_238 = x_283;
x_239 = x_347;
x_240 = x_336;
x_241 = x_8;
x_242 = x_288;
x_243 = x_346;
x_244 = x_293;
x_245 = x_334;
x_246 = x_338;
x_247 = x_331;
x_248 = x_339;
x_249 = x_335;
x_250 = x_337;
x_251 = x_295;
x_252 = x_289;
x_253 = x_290;
x_254 = x_291;
x_255 = x_292;
x_256 = x_355;
goto block_276;
}
}
}
}
else
{
lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
lean_dec(x_340);
x_356 = lean_ctor_get(x_284, 0);
lean_inc_ref(x_356);
x_357 = lean_ctor_get(x_284, 1);
lean_inc(x_357);
lean_dec_ref(x_284);
x_358 = lean_unsigned_to_nat(5u);
x_359 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_356, x_357, x_8, x_358);
if (lean_obj_tag(x_359) == 0)
{
uint8_t x_360; 
lean_dec_ref(x_338);
lean_dec(x_337);
lean_dec_ref(x_336);
lean_dec(x_335);
lean_dec(x_334);
lean_dec_ref(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_289);
lean_dec_ref(x_288);
lean_dec(x_283);
lean_dec(x_28);
x_360 = !lean_is_exclusive(x_359);
if (x_360 == 0)
{
return x_359;
}
else
{
lean_object* x_361; lean_object* x_362; 
x_361 = lean_ctor_get(x_359, 0);
lean_inc(x_361);
lean_dec(x_359);
x_362 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_362, 0, x_361);
return x_362;
}
}
else
{
lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_363 = lean_ctor_get(x_359, 0);
lean_inc(x_363);
lean_dec_ref(x_359);
x_364 = lean_ctor_get(x_363, 0);
lean_inc(x_364);
x_365 = lean_ctor_get(x_363, 1);
lean_inc(x_365);
lean_dec(x_363);
x_366 = lean_nat_sub(x_331, x_339);
x_367 = lean_array_get_borrowed(x_8, x_336, x_366);
lean_dec(x_366);
x_368 = lean_nat_add(x_367, x_364);
lean_dec(x_364);
x_369 = lean_nat_dec_lt(x_8, x_334);
if (x_369 == 0)
{
x_180 = x_283;
x_181 = x_368;
x_182 = x_8;
x_183 = x_288;
x_184 = x_295;
x_185 = x_293;
x_186 = x_290;
x_187 = x_365;
x_188 = x_291;
x_189 = x_292;
x_190 = x_289;
x_191 = x_334;
x_192 = x_335;
x_193 = x_336;
x_194 = x_337;
x_195 = x_338;
goto block_202;
}
else
{
uint8_t x_370; 
x_370 = !lean_is_exclusive(x_289);
if (x_370 == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; 
x_371 = lean_ctor_get(x_289, 4);
lean_dec(x_371);
x_372 = lean_ctor_get(x_289, 3);
lean_dec(x_372);
x_373 = lean_ctor_get(x_289, 2);
lean_dec(x_373);
x_374 = lean_ctor_get(x_289, 1);
lean_dec(x_374);
x_375 = lean_ctor_get(x_289, 0);
lean_dec(x_375);
lean_inc(x_368);
x_376 = lean_array_set(x_336, x_337, x_368);
x_377 = lean_nat_add(x_337, x_291);
lean_dec(x_337);
x_378 = lean_nat_mod(x_377, x_334);
lean_dec(x_377);
lean_inc_ref(x_338);
lean_inc(x_378);
lean_inc_ref(x_376);
lean_inc(x_335);
lean_inc(x_334);
lean_ctor_set(x_289, 3, x_378);
lean_ctor_set(x_289, 2, x_376);
x_180 = x_283;
x_181 = x_368;
x_182 = x_8;
x_183 = x_288;
x_184 = x_295;
x_185 = x_293;
x_186 = x_290;
x_187 = x_365;
x_188 = x_291;
x_189 = x_292;
x_190 = x_289;
x_191 = x_334;
x_192 = x_335;
x_193 = x_376;
x_194 = x_378;
x_195 = x_338;
goto block_202;
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; 
lean_dec(x_289);
lean_inc(x_368);
x_379 = lean_array_set(x_336, x_337, x_368);
x_380 = lean_nat_add(x_337, x_291);
lean_dec(x_337);
x_381 = lean_nat_mod(x_380, x_334);
lean_dec(x_380);
lean_inc_ref(x_338);
lean_inc(x_381);
lean_inc_ref(x_379);
lean_inc(x_335);
lean_inc(x_334);
x_382 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_382, 0, x_334);
lean_ctor_set(x_382, 1, x_335);
lean_ctor_set(x_382, 2, x_379);
lean_ctor_set(x_382, 3, x_381);
lean_ctor_set(x_382, 4, x_338);
x_180 = x_283;
x_181 = x_368;
x_182 = x_8;
x_183 = x_288;
x_184 = x_295;
x_185 = x_293;
x_186 = x_290;
x_187 = x_365;
x_188 = x_291;
x_189 = x_292;
x_190 = x_382;
x_191 = x_334;
x_192 = x_335;
x_193 = x_379;
x_194 = x_381;
x_195 = x_338;
goto block_202;
}
}
}
}
}
else
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; 
x_383 = lean_ctor_get(x_284, 0);
lean_inc_ref(x_383);
x_384 = lean_ctor_get(x_284, 1);
lean_inc(x_384);
lean_dec_ref(x_284);
x_385 = lean_unsigned_to_nat(5u);
x_386 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_383, x_384, x_8, x_385);
if (lean_obj_tag(x_386) == 0)
{
uint8_t x_387; 
lean_dec_ref(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_289);
lean_dec_ref(x_288);
lean_dec(x_283);
lean_dec(x_28);
x_387 = !lean_is_exclusive(x_386);
if (x_387 == 0)
{
return x_386;
}
else
{
lean_object* x_388; lean_object* x_389; 
x_388 = lean_ctor_get(x_386, 0);
lean_inc(x_388);
lean_dec(x_386);
x_389 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_389, 0, x_388);
return x_389;
}
}
else
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; uint8_t x_401; 
x_390 = lean_ctor_get(x_386, 0);
lean_inc(x_390);
lean_dec_ref(x_386);
x_391 = lean_ctor_get(x_390, 0);
lean_inc(x_391);
x_392 = lean_ctor_get(x_390, 1);
lean_inc(x_392);
lean_dec(x_390);
x_393 = lean_ctor_get(x_289, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_289, 1);
lean_inc(x_394);
x_395 = lean_ctor_get(x_289, 2);
lean_inc_ref(x_395);
x_396 = lean_ctor_get(x_289, 3);
lean_inc(x_396);
x_397 = lean_ctor_get(x_289, 4);
lean_inc_ref(x_397);
x_398 = lean_byte_array_size(x_290);
x_399 = lean_nat_add(x_283, x_398);
x_400 = lean_nat_sub(x_399, x_391);
lean_dec(x_391);
lean_dec(x_399);
x_401 = lean_nat_dec_lt(x_8, x_393);
if (x_401 == 0)
{
x_145 = x_283;
x_146 = x_8;
x_147 = x_392;
x_148 = x_400;
x_149 = x_288;
x_150 = x_295;
x_151 = x_293;
x_152 = x_290;
x_153 = x_291;
x_154 = x_292;
x_155 = x_289;
x_156 = x_393;
x_157 = x_394;
x_158 = x_395;
x_159 = x_396;
x_160 = x_397;
goto block_167;
}
else
{
uint8_t x_402; 
x_402 = !lean_is_exclusive(x_289);
if (x_402 == 0)
{
lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; 
x_403 = lean_ctor_get(x_289, 4);
lean_dec(x_403);
x_404 = lean_ctor_get(x_289, 3);
lean_dec(x_404);
x_405 = lean_ctor_get(x_289, 2);
lean_dec(x_405);
x_406 = lean_ctor_get(x_289, 1);
lean_dec(x_406);
x_407 = lean_ctor_get(x_289, 0);
lean_dec(x_407);
lean_inc(x_400);
x_408 = lean_array_set(x_395, x_396, x_400);
x_409 = lean_nat_add(x_396, x_291);
lean_dec(x_396);
x_410 = lean_nat_mod(x_409, x_393);
lean_dec(x_409);
lean_inc_ref(x_397);
lean_inc(x_410);
lean_inc_ref(x_408);
lean_inc(x_394);
lean_inc(x_393);
lean_ctor_set(x_289, 3, x_410);
lean_ctor_set(x_289, 2, x_408);
x_145 = x_283;
x_146 = x_8;
x_147 = x_392;
x_148 = x_400;
x_149 = x_288;
x_150 = x_295;
x_151 = x_293;
x_152 = x_290;
x_153 = x_291;
x_154 = x_292;
x_155 = x_289;
x_156 = x_393;
x_157 = x_394;
x_158 = x_408;
x_159 = x_410;
x_160 = x_397;
goto block_167;
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
lean_dec(x_289);
lean_inc(x_400);
x_411 = lean_array_set(x_395, x_396, x_400);
x_412 = lean_nat_add(x_396, x_291);
lean_dec(x_396);
x_413 = lean_nat_mod(x_412, x_393);
lean_dec(x_412);
lean_inc_ref(x_397);
lean_inc(x_413);
lean_inc_ref(x_411);
lean_inc(x_394);
lean_inc(x_393);
x_414 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_414, 0, x_393);
lean_ctor_set(x_414, 1, x_394);
lean_ctor_set(x_414, 2, x_411);
lean_ctor_set(x_414, 3, x_413);
lean_ctor_set(x_414, 4, x_397);
x_145 = x_283;
x_146 = x_8;
x_147 = x_392;
x_148 = x_400;
x_149 = x_288;
x_150 = x_295;
x_151 = x_293;
x_152 = x_290;
x_153 = x_291;
x_154 = x_292;
x_155 = x_414;
x_156 = x_393;
x_157 = x_394;
x_158 = x_411;
x_159 = x_413;
x_160 = x_397;
goto block_167;
}
}
}
}
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; 
x_415 = lean_ctor_get(x_284, 0);
lean_inc_ref(x_415);
x_416 = lean_ctor_get(x_284, 1);
lean_inc(x_416);
lean_dec_ref(x_284);
x_417 = lean_unsigned_to_nat(5u);
x_418 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_415, x_416, x_8, x_417);
if (lean_obj_tag(x_418) == 0)
{
uint8_t x_419; 
lean_dec_ref(x_293);
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_289);
lean_dec_ref(x_288);
lean_dec(x_283);
lean_dec(x_28);
x_419 = !lean_is_exclusive(x_418);
if (x_419 == 0)
{
return x_418;
}
else
{
lean_object* x_420; lean_object* x_421; 
x_420 = lean_ctor_get(x_418, 0);
lean_inc(x_420);
lean_dec(x_418);
x_421 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_421, 0, x_420);
return x_421;
}
}
else
{
lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; uint8_t x_430; 
x_422 = lean_ctor_get(x_418, 0);
lean_inc(x_422);
lean_dec_ref(x_418);
x_423 = lean_ctor_get(x_422, 0);
lean_inc(x_423);
x_424 = lean_ctor_get(x_422, 1);
lean_inc(x_424);
lean_dec(x_422);
x_425 = lean_ctor_get(x_289, 0);
lean_inc(x_425);
x_426 = lean_ctor_get(x_289, 1);
lean_inc(x_426);
x_427 = lean_ctor_get(x_289, 2);
lean_inc_ref(x_427);
x_428 = lean_ctor_get(x_289, 3);
lean_inc(x_428);
x_429 = lean_ctor_get(x_289, 4);
lean_inc_ref(x_429);
x_430 = lean_nat_dec_lt(x_8, x_425);
if (x_430 == 0)
{
x_110 = x_283;
x_111 = x_8;
x_112 = x_288;
x_113 = x_295;
x_114 = x_424;
x_115 = x_293;
x_116 = x_290;
x_117 = x_423;
x_118 = x_291;
x_119 = x_292;
x_120 = x_289;
x_121 = x_425;
x_122 = x_426;
x_123 = x_427;
x_124 = x_428;
x_125 = x_429;
goto block_132;
}
else
{
uint8_t x_431; 
x_431 = !lean_is_exclusive(x_289);
if (x_431 == 0)
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
x_432 = lean_ctor_get(x_289, 4);
lean_dec(x_432);
x_433 = lean_ctor_get(x_289, 3);
lean_dec(x_433);
x_434 = lean_ctor_get(x_289, 2);
lean_dec(x_434);
x_435 = lean_ctor_get(x_289, 1);
lean_dec(x_435);
x_436 = lean_ctor_get(x_289, 0);
lean_dec(x_436);
lean_inc(x_423);
x_437 = lean_array_set(x_427, x_428, x_423);
x_438 = lean_nat_add(x_428, x_291);
lean_dec(x_428);
x_439 = lean_nat_mod(x_438, x_425);
lean_dec(x_438);
lean_inc_ref(x_429);
lean_inc(x_439);
lean_inc_ref(x_437);
lean_inc(x_426);
lean_inc(x_425);
lean_ctor_set(x_289, 3, x_439);
lean_ctor_set(x_289, 2, x_437);
x_110 = x_283;
x_111 = x_8;
x_112 = x_288;
x_113 = x_295;
x_114 = x_424;
x_115 = x_293;
x_116 = x_290;
x_117 = x_423;
x_118 = x_291;
x_119 = x_292;
x_120 = x_289;
x_121 = x_425;
x_122 = x_426;
x_123 = x_437;
x_124 = x_439;
x_125 = x_429;
goto block_132;
}
else
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; 
lean_dec(x_289);
lean_inc(x_423);
x_440 = lean_array_set(x_427, x_428, x_423);
x_441 = lean_nat_add(x_428, x_291);
lean_dec(x_428);
x_442 = lean_nat_mod(x_441, x_425);
lean_dec(x_441);
lean_inc_ref(x_429);
lean_inc(x_442);
lean_inc_ref(x_440);
lean_inc(x_426);
lean_inc(x_425);
x_443 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_443, 0, x_425);
lean_ctor_set(x_443, 1, x_426);
lean_ctor_set(x_443, 2, x_440);
lean_ctor_set(x_443, 3, x_442);
lean_ctor_set(x_443, 4, x_429);
x_110 = x_283;
x_111 = x_8;
x_112 = x_288;
x_113 = x_295;
x_114 = x_424;
x_115 = x_293;
x_116 = x_290;
x_117 = x_423;
x_118 = x_291;
x_119 = x_292;
x_120 = x_443;
x_121 = x_425;
x_122 = x_426;
x_123 = x_440;
x_124 = x_442;
x_125 = x_429;
goto block_132;
}
}
}
}
}
}
}
else
{
lean_dec(x_292);
lean_dec(x_291);
lean_dec_ref(x_289);
lean_dec_ref(x_288);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec_ref(x_284);
lean_dec(x_283);
lean_dec(x_24);
x_277 = x_290;
x_278 = x_293;
x_279 = x_286;
goto block_282;
}
}
block_458:
{
lean_object* x_456; lean_object* x_457; 
x_456 = lean_ctor_get(x_447, 1);
lean_inc_ref(x_456);
lean_dec_ref(x_447);
x_457 = lean_ctor_get(x_456, 0);
lean_inc(x_457);
lean_dec_ref(x_456);
x_283 = x_445;
x_284 = x_446;
x_285 = x_457;
x_286 = x_448;
x_287 = x_449;
x_288 = x_450;
x_289 = x_451;
x_290 = x_452;
x_291 = x_453;
x_292 = x_454;
x_293 = x_455;
goto block_444;
}
block_481:
{
if (x_470 == 0)
{
x_445 = x_459;
x_446 = x_460;
x_447 = x_461;
x_448 = x_463;
x_449 = x_465;
x_450 = x_464;
x_451 = x_468;
x_452 = x_467;
x_453 = x_469;
x_454 = x_462;
x_455 = x_466;
goto block_458;
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; 
lean_dec(x_462);
x_471 = lean_ctor_get(x_466, 0);
lean_inc_ref(x_471);
x_472 = lean_ctor_get(x_466, 1);
lean_inc(x_472);
lean_dec_ref(x_466);
x_473 = lean_unsigned_to_nat(5u);
x_474 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_471, x_472, x_8, x_473);
if (lean_obj_tag(x_474) == 0)
{
uint8_t x_475; 
lean_dec(x_469);
lean_dec_ref(x_468);
lean_dec_ref(x_467);
lean_dec_ref(x_465);
lean_dec_ref(x_464);
lean_dec_ref(x_463);
lean_dec_ref(x_461);
lean_dec_ref(x_460);
lean_dec(x_459);
lean_dec(x_28);
lean_dec(x_24);
x_475 = !lean_is_exclusive(x_474);
if (x_475 == 0)
{
return x_474;
}
else
{
lean_object* x_476; lean_object* x_477; 
x_476 = lean_ctor_get(x_474, 0);
lean_inc(x_476);
lean_dec(x_474);
x_477 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_477, 0, x_476);
return x_477;
}
}
else
{
lean_object* x_478; lean_object* x_479; lean_object* x_480; 
x_478 = lean_ctor_get(x_474, 0);
lean_inc(x_478);
lean_dec_ref(x_474);
x_479 = lean_ctor_get(x_478, 0);
lean_inc(x_479);
x_480 = lean_ctor_get(x_478, 1);
lean_inc(x_480);
lean_dec(x_478);
x_445 = x_459;
x_446 = x_460;
x_447 = x_461;
x_448 = x_463;
x_449 = x_465;
x_450 = x_464;
x_451 = x_468;
x_452 = x_467;
x_453 = x_469;
x_454 = x_479;
x_455 = x_480;
goto block_458;
}
}
}
block_498:
{
lean_object* x_493; lean_object* x_494; uint8_t x_495; 
x_493 = lean_ctor_get(x_484, 0);
lean_inc(x_493);
x_494 = lean_ctor_get(x_484, 1);
lean_inc(x_494);
lean_dec_ref(x_484);
x_495 = lean_nat_dec_eq(x_494, x_8);
if (x_495 == 0)
{
lean_dec(x_493);
x_459 = x_482;
x_460 = x_491;
x_461 = x_483;
x_462 = x_494;
x_463 = x_488;
x_464 = x_489;
x_465 = x_490;
x_466 = x_485;
x_467 = x_487;
x_468 = x_492;
x_469 = x_486;
x_470 = x_495;
goto block_481;
}
else
{
lean_object* x_496; uint8_t x_497; 
x_496 = lean_box(0);
x_497 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_493, x_496);
if (x_497 == 0)
{
lean_dec(x_493);
x_459 = x_482;
x_460 = x_491;
x_461 = x_483;
x_462 = x_494;
x_463 = x_488;
x_464 = x_489;
x_465 = x_490;
x_466 = x_485;
x_467 = x_487;
x_468 = x_492;
x_469 = x_486;
x_470 = x_495;
goto block_481;
}
else
{
lean_dec_ref(x_483);
x_283 = x_482;
x_284 = x_491;
x_285 = x_493;
x_286 = x_488;
x_287 = x_490;
x_288 = x_489;
x_289 = x_492;
x_290 = x_487;
x_291 = x_486;
x_292 = x_494;
x_293 = x_485;
goto block_444;
}
}
}
block_510:
{
lean_object* x_509; 
x_509 = lean_ctor_get(x_500, 1);
lean_inc_ref(x_509);
x_482 = x_499;
x_483 = x_500;
x_484 = x_509;
x_485 = x_501;
x_486 = x_502;
x_487 = x_503;
x_488 = x_504;
x_489 = x_505;
x_490 = x_506;
x_491 = x_507;
x_492 = x_508;
goto block_498;
}
block_530:
{
lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; 
x_520 = lean_nat_add(x_513, x_518);
lean_dec(x_513);
x_521 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_521, 0, x_516);
lean_ctor_set(x_521, 1, x_520);
x_522 = lean_box(x_519);
x_523 = lean_mk_array(x_517, x_522);
x_524 = lean_byte_array_mk(x_523);
x_525 = lean_byte_array_size(x_3);
x_526 = lean_byte_array_size(x_524);
x_527 = lean_byte_array_copy_slice(x_524, x_8, x_3, x_525, x_526, x_512);
lean_dec_ref(x_524);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_528 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_528, 0, x_6);
lean_ctor_set(x_528, 1, x_7);
lean_inc_ref(x_528);
lean_inc_ref(x_521);
x_529 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_529, 0, x_521);
lean_ctor_set(x_529, 1, x_528);
x_499 = x_511;
x_500 = x_514;
x_501 = x_515;
x_502 = x_518;
x_503 = x_527;
x_504 = x_529;
x_505 = x_521;
x_506 = x_528;
x_507 = x_6;
x_508 = x_7;
goto block_510;
}
block_540:
{
lean_object* x_537; lean_object* x_538; lean_object* x_539; 
x_537 = lean_ctor_get(x_533, 0);
lean_inc(x_537);
x_538 = lean_ctor_get(x_533, 1);
lean_inc(x_538);
lean_inc_ref(x_533);
lean_inc_ref(x_5);
x_539 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_539, 0, x_5);
lean_ctor_set(x_539, 1, x_533);
x_499 = x_531;
x_500 = x_532;
x_501 = x_534;
x_502 = x_535;
x_503 = x_536;
x_504 = x_539;
x_505 = x_5;
x_506 = x_533;
x_507 = x_537;
x_508 = x_538;
goto block_510;
}
block_582:
{
lean_object* x_549; lean_object* x_550; uint8_t x_551; 
x_549 = lean_byte_array_size(x_3);
x_550 = lean_nat_add(x_542, x_549);
x_551 = lean_nat_dec_le(x_550, x_547);
if (x_551 == 0)
{
lean_object* x_552; uint8_t x_553; 
lean_dec(x_550);
x_552 = lean_nat_add(x_547, x_545);
x_553 = lean_nat_dec_le(x_552, x_542);
if (x_553 == 0)
{
uint8_t x_554; 
lean_dec(x_552);
x_554 = lean_nat_dec_le(x_542, x_547);
if (x_554 == 0)
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; uint8_t x_562; 
x_555 = lean_nat_sub(x_542, x_547);
x_556 = lean_nat_sub(x_545, x_555);
lean_dec(x_555);
lean_dec(x_545);
x_557 = l_ByteArray_extract(x_1, x_547, x_542);
x_558 = lean_byte_array_size(x_557);
x_559 = lean_byte_array_copy_slice(x_557, x_8, x_3, x_549, x_558, x_541);
lean_dec_ref(x_557);
x_560 = lean_byte_array_size(x_559);
x_561 = lean_nat_sub(x_560, x_542);
x_562 = lean_nat_dec_le(x_556, x_561);
lean_dec(x_561);
if (x_562 == 0)
{
lean_object* x_563; lean_object* x_564; 
lean_inc(x_546);
x_563 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_563, 0, x_8);
lean_ctor_set(x_563, 1, x_556);
lean_ctor_set(x_563, 2, x_546);
x_564 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_542, x_1, x_563, x_559, x_8);
lean_dec_ref(x_563);
x_531 = x_542;
x_532 = x_543;
x_533 = x_548;
x_534 = x_544;
x_535 = x_546;
x_536 = x_564;
goto block_540;
}
else
{
lean_object* x_565; lean_object* x_566; lean_object* x_567; lean_object* x_568; 
x_565 = lean_nat_add(x_542, x_556);
lean_dec(x_556);
lean_inc(x_542);
x_566 = l_ByteArray_extract(x_559, x_542, x_565);
lean_dec(x_565);
x_567 = lean_byte_array_size(x_566);
x_568 = lean_byte_array_copy_slice(x_566, x_8, x_559, x_560, x_567, x_541);
lean_dec_ref(x_566);
x_531 = x_542;
x_532 = x_543;
x_533 = x_548;
x_534 = x_544;
x_535 = x_546;
x_536 = x_568;
goto block_540;
}
}
else
{
lean_object* x_569; lean_object* x_570; uint8_t x_571; 
x_569 = lean_nat_sub(x_547, x_542);
lean_dec(x_547);
x_570 = lean_nat_add(x_569, x_545);
x_571 = lean_nat_dec_le(x_570, x_549);
if (x_571 == 0)
{
lean_object* x_572; lean_object* x_573; 
lean_dec(x_570);
lean_inc(x_546);
x_572 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_572, 0, x_8);
lean_ctor_set(x_572, 1, x_545);
lean_ctor_set(x_572, 2, x_546);
x_573 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_569, x_572, x_3, x_8);
lean_dec_ref(x_572);
lean_dec(x_569);
x_531 = x_542;
x_532 = x_543;
x_533 = x_548;
x_534 = x_544;
x_535 = x_546;
x_536 = x_573;
goto block_540;
}
else
{
lean_object* x_574; lean_object* x_575; lean_object* x_576; 
lean_dec(x_545);
x_574 = l_ByteArray_extract(x_3, x_569, x_570);
lean_dec(x_570);
x_575 = lean_byte_array_size(x_574);
x_576 = lean_byte_array_copy_slice(x_574, x_8, x_3, x_549, x_575, x_541);
lean_dec_ref(x_574);
x_531 = x_542;
x_532 = x_543;
x_533 = x_548;
x_534 = x_544;
x_535 = x_546;
x_536 = x_576;
goto block_540;
}
}
}
else
{
lean_object* x_577; lean_object* x_578; lean_object* x_579; 
lean_dec(x_545);
x_577 = l_ByteArray_extract(x_1, x_547, x_552);
lean_dec(x_552);
x_578 = lean_byte_array_size(x_577);
x_579 = lean_byte_array_copy_slice(x_577, x_8, x_3, x_549, x_578, x_541);
lean_dec_ref(x_577);
x_531 = x_542;
x_532 = x_543;
x_533 = x_548;
x_534 = x_544;
x_535 = x_546;
x_536 = x_579;
goto block_540;
}
}
else
{
lean_object* x_580; lean_object* x_581; 
lean_dec_ref(x_548);
lean_dec(x_546);
lean_dec_ref(x_544);
lean_dec_ref(x_543);
lean_dec(x_542);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_580 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_580, 0, x_547);
lean_ctor_set(x_580, 1, x_545);
lean_ctor_set(x_580, 2, x_550);
x_581 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_581, 0, x_580);
return x_581;
}
}
block_593:
{
lean_object* x_592; 
x_592 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_592, 0, x_587);
lean_ctor_set(x_592, 1, x_591);
x_541 = x_584;
x_542 = x_583;
x_543 = x_586;
x_544 = x_588;
x_545 = x_589;
x_546 = x_590;
x_547 = x_585;
x_548 = x_592;
goto block_582;
}
block_615:
{
uint8_t x_609; 
x_609 = lean_nat_dec_lt(x_599, x_605);
lean_dec(x_599);
if (x_609 == 0)
{
lean_dec_ref(x_608);
lean_dec(x_607);
lean_dec_ref(x_606);
lean_dec(x_605);
lean_dec(x_604);
x_583 = x_595;
x_584 = x_594;
x_585 = x_596;
x_586 = x_597;
x_587 = x_598;
x_588 = x_600;
x_589 = x_601;
x_590 = x_602;
x_591 = x_603;
goto block_593;
}
else
{
lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; 
lean_dec_ref(x_603);
x_610 = lean_unsigned_to_nat(256u);
x_611 = lean_nat_mul(x_605, x_610);
x_612 = lean_nat_mod(x_596, x_611);
lean_dec(x_611);
lean_inc(x_596);
x_613 = lean_array_set(x_608, x_612, x_596);
lean_dec(x_612);
x_614 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_614, 0, x_604);
lean_ctor_set(x_614, 1, x_605);
lean_ctor_set(x_614, 2, x_606);
lean_ctor_set(x_614, 3, x_607);
lean_ctor_set(x_614, 4, x_613);
x_583 = x_595;
x_584 = x_594;
x_585 = x_596;
x_586 = x_597;
x_587 = x_598;
x_588 = x_600;
x_589 = x_601;
x_590 = x_602;
x_591 = x_614;
goto block_593;
}
}
block_626:
{
lean_object* x_625; 
x_625 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_625, 0, x_618);
lean_ctor_set(x_625, 1, x_624);
x_541 = x_617;
x_542 = x_616;
x_543 = x_619;
x_544 = x_621;
x_545 = x_622;
x_546 = x_623;
x_547 = x_620;
x_548 = x_625;
goto block_582;
}
block_648:
{
uint8_t x_642; 
x_642 = lean_nat_dec_lt(x_632, x_638);
lean_dec(x_632);
if (x_642 == 0)
{
lean_dec_ref(x_641);
lean_dec(x_640);
lean_dec_ref(x_639);
lean_dec(x_638);
lean_dec(x_637);
x_616 = x_628;
x_617 = x_627;
x_618 = x_629;
x_619 = x_630;
x_620 = x_631;
x_621 = x_633;
x_622 = x_634;
x_623 = x_635;
x_624 = x_636;
goto block_626;
}
else
{
lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; 
lean_dec_ref(x_636);
x_643 = lean_unsigned_to_nat(256u);
x_644 = lean_nat_mul(x_638, x_643);
x_645 = lean_nat_mod(x_631, x_644);
lean_dec(x_644);
lean_inc(x_631);
x_646 = lean_array_set(x_641, x_645, x_631);
lean_dec(x_645);
x_647 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_647, 0, x_637);
lean_ctor_set(x_647, 1, x_638);
lean_ctor_set(x_647, 2, x_639);
lean_ctor_set(x_647, 3, x_640);
lean_ctor_set(x_647, 4, x_646);
x_616 = x_628;
x_617 = x_627;
x_618 = x_629;
x_619 = x_630;
x_620 = x_631;
x_621 = x_633;
x_622 = x_634;
x_623 = x_635;
x_624 = x_647;
goto block_626;
}
}
block_659:
{
lean_object* x_658; 
x_658 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_658, 0, x_653);
lean_ctor_set(x_658, 1, x_657);
x_541 = x_650;
x_542 = x_649;
x_543 = x_652;
x_544 = x_654;
x_545 = x_655;
x_546 = x_656;
x_547 = x_651;
x_548 = x_658;
goto block_582;
}
block_681:
{
uint8_t x_675; 
x_675 = lean_nat_dec_lt(x_665, x_671);
lean_dec(x_665);
if (x_675 == 0)
{
lean_dec_ref(x_674);
lean_dec(x_673);
lean_dec_ref(x_672);
lean_dec(x_671);
lean_dec(x_670);
x_649 = x_661;
x_650 = x_660;
x_651 = x_662;
x_652 = x_663;
x_653 = x_664;
x_654 = x_666;
x_655 = x_667;
x_656 = x_668;
x_657 = x_669;
goto block_659;
}
else
{
lean_object* x_676; lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; 
lean_dec_ref(x_669);
x_676 = lean_unsigned_to_nat(256u);
x_677 = lean_nat_mul(x_671, x_676);
x_678 = lean_nat_mod(x_662, x_677);
lean_dec(x_677);
lean_inc(x_662);
x_679 = lean_array_set(x_674, x_678, x_662);
lean_dec(x_678);
x_680 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_680, 0, x_670);
lean_ctor_set(x_680, 1, x_671);
lean_ctor_set(x_680, 2, x_672);
lean_ctor_set(x_680, 3, x_673);
lean_ctor_set(x_680, 4, x_679);
x_649 = x_661;
x_650 = x_660;
x_651 = x_662;
x_652 = x_663;
x_653 = x_664;
x_654 = x_666;
x_655 = x_667;
x_656 = x_668;
x_657 = x_680;
goto block_659;
}
}
block_692:
{
lean_object* x_691; 
x_691 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_691, 0, x_684);
lean_ctor_set(x_691, 1, x_690);
x_541 = x_683;
x_542 = x_682;
x_543 = x_685;
x_544 = x_687;
x_545 = x_688;
x_546 = x_689;
x_547 = x_686;
x_548 = x_691;
goto block_582;
}
block_714:
{
uint8_t x_709; 
x_709 = lean_nat_dec_lt(x_698, x_705);
lean_dec(x_698);
if (x_709 == 0)
{
lean_dec_ref(x_708);
lean_dec(x_707);
lean_dec_ref(x_706);
lean_dec(x_705);
lean_dec(x_704);
x_682 = x_695;
x_683 = x_694;
x_684 = x_693;
x_685 = x_696;
x_686 = x_697;
x_687 = x_699;
x_688 = x_701;
x_689 = x_702;
x_690 = x_703;
goto block_692;
}
else
{
lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; 
lean_dec_ref(x_703);
x_710 = lean_nat_mul(x_705, x_700);
x_711 = lean_nat_mod(x_697, x_710);
lean_dec(x_710);
lean_inc(x_697);
x_712 = lean_array_set(x_708, x_711, x_697);
lean_dec(x_711);
x_713 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_713, 0, x_704);
lean_ctor_set(x_713, 1, x_705);
lean_ctor_set(x_713, 2, x_706);
lean_ctor_set(x_713, 3, x_707);
lean_ctor_set(x_713, 4, x_712);
x_682 = x_695;
x_683 = x_694;
x_684 = x_693;
x_685 = x_696;
x_686 = x_697;
x_687 = x_699;
x_688 = x_701;
x_689 = x_702;
x_690 = x_713;
goto block_692;
}
}
block_751:
{
lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; uint8_t x_741; 
x_732 = lean_nat_add(x_718, x_730);
lean_dec(x_718);
x_733 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_733, 0, x_726);
lean_ctor_set(x_733, 1, x_732);
x_734 = lean_nat_sub(x_717, x_727);
lean_dec(x_717);
x_735 = lean_nat_sub(x_734, x_729);
lean_dec(x_734);
x_736 = lean_unsigned_to_nat(256u);
x_737 = lean_nat_mul(x_735, x_736);
lean_dec(x_735);
x_738 = lean_uint8_to_nat(x_731);
x_739 = lean_nat_add(x_737, x_738);
lean_dec(x_737);
x_740 = lean_array_get(x_8, x_723, x_739);
lean_dec(x_739);
x_741 = lean_nat_dec_lt(x_719, x_729);
if (x_741 == 0)
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; 
lean_dec(x_729);
lean_dec(x_728);
lean_dec(x_724);
lean_dec_ref(x_723);
lean_dec_ref(x_721);
x_742 = lean_ctor_get(x_7, 0);
lean_inc(x_742);
x_743 = lean_ctor_get(x_7, 1);
lean_inc(x_743);
x_744 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_744);
x_745 = lean_ctor_get(x_7, 3);
lean_inc(x_745);
x_746 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_746);
x_693 = x_733;
x_694 = x_716;
x_695 = x_715;
x_696 = x_725;
x_697 = x_740;
x_698 = x_719;
x_699 = x_720;
x_700 = x_736;
x_701 = x_722;
x_702 = x_730;
x_703 = x_7;
x_704 = x_742;
x_705 = x_743;
x_706 = x_744;
x_707 = x_745;
x_708 = x_746;
goto block_714;
}
else
{
lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; 
lean_dec_ref(x_7);
lean_inc(x_740);
x_747 = lean_array_set(x_721, x_724, x_740);
x_748 = lean_nat_add(x_724, x_730);
lean_dec(x_724);
x_749 = lean_nat_mod(x_748, x_729);
lean_dec(x_748);
lean_inc_ref(x_723);
lean_inc(x_749);
lean_inc_ref(x_747);
lean_inc(x_728);
lean_inc(x_729);
x_750 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_750, 0, x_729);
lean_ctor_set(x_750, 1, x_728);
lean_ctor_set(x_750, 2, x_747);
lean_ctor_set(x_750, 3, x_749);
lean_ctor_set(x_750, 4, x_723);
x_693 = x_733;
x_694 = x_716;
x_695 = x_715;
x_696 = x_725;
x_697 = x_740;
x_698 = x_719;
x_699 = x_720;
x_700 = x_736;
x_701 = x_722;
x_702 = x_730;
x_703 = x_750;
x_704 = x_729;
x_705 = x_728;
x_706 = x_747;
x_707 = x_749;
x_708 = x_723;
goto block_714;
}
}
block_1040:
{
lean_object* x_756; uint8_t x_757; 
x_756 = lean_ctor_get(x_752, 0);
lean_inc_ref(x_756);
x_757 = !lean_is_exclusive(x_756);
if (x_757 == 0)
{
lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; uint8_t x_763; 
x_758 = lean_ctor_get(x_752, 1);
x_759 = lean_ctor_get(x_756, 0);
x_760 = lean_ctor_get(x_756, 1);
lean_dec(x_760);
x_761 = lean_byte_array_size(x_1);
x_762 = lean_box(0);
x_763 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_759, x_762);
if (x_763 == 0)
{
switch (lean_obj_tag(x_759)) {
case 0:
{
lean_object* x_764; 
lean_inc_ref(x_758);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_5);
x_764 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_764, 0, x_5);
lean_ctor_set(x_764, 1, x_756);
x_482 = x_761;
x_483 = x_752;
x_484 = x_758;
x_485 = x_755;
x_486 = x_753;
x_487 = x_3;
x_488 = x_764;
x_489 = x_5;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_498;
}
case 1:
{
uint8_t x_765; 
lean_inc_ref(x_758);
x_765 = !lean_is_exclusive(x_5);
if (x_765 == 0)
{
lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; uint8_t x_770; 
x_766 = lean_ctor_get(x_5, 0);
x_767 = lean_ctor_get(x_5, 1);
x_768 = lean_nat_add(x_767, x_754);
lean_dec(x_754);
x_769 = lean_byte_array_size(x_766);
x_770 = lean_nat_dec_le(x_768, x_769);
if (x_770 == 0)
{
lean_object* x_771; 
lean_dec(x_768);
lean_free_object(x_5);
lean_dec(x_767);
lean_dec_ref(x_766);
lean_free_object(x_756);
lean_dec_ref(x_758);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_771 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_771;
}
else
{
if (x_770 == 0)
{
lean_object* x_772; 
lean_dec(x_768);
lean_free_object(x_5);
lean_dec(x_767);
lean_dec_ref(x_766);
lean_free_object(x_756);
lean_dec_ref(x_758);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_772 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_772;
}
else
{
lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; 
x_773 = l_ByteArray_extract(x_766, x_767, x_768);
lean_ctor_set(x_5, 1, x_768);
x_774 = lean_byte_array_size(x_3);
x_775 = lean_byte_array_size(x_773);
x_776 = lean_byte_array_copy_slice(x_773, x_8, x_3, x_774, x_775, x_763);
lean_dec_ref(x_773);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_5);
x_777 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_777, 0, x_5);
lean_ctor_set(x_777, 1, x_756);
x_482 = x_761;
x_483 = x_752;
x_484 = x_758;
x_485 = x_755;
x_486 = x_753;
x_487 = x_776;
x_488 = x_777;
x_489 = x_5;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_498;
}
}
}
else
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; uint8_t x_782; 
x_778 = lean_ctor_get(x_5, 0);
x_779 = lean_ctor_get(x_5, 1);
lean_inc(x_779);
lean_inc(x_778);
lean_dec(x_5);
x_780 = lean_nat_add(x_779, x_754);
lean_dec(x_754);
x_781 = lean_byte_array_size(x_778);
x_782 = lean_nat_dec_le(x_780, x_781);
if (x_782 == 0)
{
lean_object* x_783; 
lean_dec(x_780);
lean_dec(x_779);
lean_dec_ref(x_778);
lean_free_object(x_756);
lean_dec_ref(x_758);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_783 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_783;
}
else
{
if (x_782 == 0)
{
lean_object* x_784; 
lean_dec(x_780);
lean_dec(x_779);
lean_dec_ref(x_778);
lean_free_object(x_756);
lean_dec_ref(x_758);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_784 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_784;
}
else
{
lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; 
x_785 = l_ByteArray_extract(x_778, x_779, x_780);
x_786 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_786, 0, x_778);
lean_ctor_set(x_786, 1, x_780);
x_787 = lean_byte_array_size(x_3);
x_788 = lean_byte_array_size(x_785);
x_789 = lean_byte_array_copy_slice(x_785, x_8, x_3, x_787, x_788, x_763);
lean_dec_ref(x_785);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_786);
x_790 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_790, 0, x_786);
lean_ctor_set(x_790, 1, x_756);
x_482 = x_761;
x_483 = x_752;
x_484 = x_758;
x_485 = x_755;
x_486 = x_753;
x_487 = x_789;
x_488 = x_790;
x_489 = x_786;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_498;
}
}
}
}
case 2:
{
lean_object* x_791; lean_object* x_792; lean_object* x_793; uint8_t x_794; 
lean_free_object(x_756);
x_791 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_791);
x_792 = lean_ctor_get(x_5, 1);
lean_inc(x_792);
lean_dec_ref(x_5);
x_793 = lean_byte_array_size(x_791);
x_794 = lean_nat_dec_lt(x_792, x_793);
if (x_794 == 0)
{
lean_object* x_795; 
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_795 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_795;
}
else
{
if (x_794 == 0)
{
uint8_t x_796; lean_object* x_797; lean_object* x_798; uint8_t x_799; 
x_796 = l_instInhabitedUInt8;
x_797 = lean_box(x_796);
x_798 = l_outOfBounds___redArg(x_797);
x_799 = lean_unbox(x_798);
lean_dec(x_798);
x_511 = x_761;
x_512 = x_763;
x_513 = x_792;
x_514 = x_752;
x_515 = x_755;
x_516 = x_791;
x_517 = x_754;
x_518 = x_753;
x_519 = x_799;
goto block_530;
}
else
{
uint8_t x_800; 
x_800 = lean_byte_array_fget(x_791, x_792);
x_511 = x_761;
x_512 = x_763;
x_513 = x_792;
x_514 = x_752;
x_515 = x_755;
x_516 = x_791;
x_517 = x_754;
x_518 = x_753;
x_519 = x_800;
goto block_530;
}
}
}
default: 
{
uint8_t x_801; lean_object* x_802; uint8_t x_803; 
lean_free_object(x_756);
x_801 = lean_ctor_get_uint8(x_759, 0);
lean_dec_ref(x_759);
x_802 = lean_uint8_to_nat(x_801);
x_803 = lean_nat_dec_eq(x_802, x_8);
if (x_803 == 0)
{
uint8_t x_804; 
x_804 = lean_nat_dec_eq(x_802, x_753);
if (x_804 == 0)
{
lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; uint8_t x_812; 
x_805 = lean_ctor_get(x_7, 0);
x_806 = lean_ctor_get(x_7, 1);
x_807 = lean_ctor_get(x_7, 2);
x_808 = lean_ctor_get(x_7, 3);
x_809 = lean_ctor_get(x_7, 4);
x_810 = lean_unsigned_to_nat(2u);
x_811 = lean_nat_add(x_810, x_805);
x_812 = lean_nat_dec_lt(x_802, x_811);
if (x_812 == 0)
{
lean_object* x_813; uint8_t x_814; 
x_813 = lean_nat_add(x_811, x_806);
lean_dec(x_811);
x_814 = lean_nat_dec_lt(x_802, x_813);
lean_dec(x_813);
if (x_814 == 0)
{
lean_object* x_815; lean_object* x_816; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_815 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_815, 0, x_802);
x_816 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_816, 0, x_815);
return x_816;
}
else
{
lean_object* x_817; lean_object* x_818; lean_object* x_819; uint8_t x_820; 
x_817 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_817);
x_818 = lean_ctor_get(x_6, 1);
lean_inc(x_818);
lean_dec_ref(x_6);
x_819 = lean_byte_array_size(x_817);
x_820 = lean_nat_dec_lt(x_818, x_819);
if (x_820 == 0)
{
lean_object* x_821; 
lean_dec(x_818);
lean_dec_ref(x_817);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_821 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_821;
}
else
{
if (x_820 == 0)
{
uint8_t x_822; lean_object* x_823; lean_object* x_824; uint8_t x_825; 
x_822 = l_instInhabitedUInt8;
x_823 = lean_box(x_822);
x_824 = l_outOfBounds___redArg(x_823);
x_825 = lean_unbox(x_824);
lean_dec(x_824);
lean_inc(x_805);
lean_inc(x_806);
lean_inc(x_808);
lean_inc_ref(x_809);
lean_inc_ref(x_807);
x_715 = x_761;
x_716 = x_763;
x_717 = x_802;
x_718 = x_818;
x_719 = x_8;
x_720 = x_755;
x_721 = x_807;
x_722 = x_754;
x_723 = x_809;
x_724 = x_808;
x_725 = x_752;
x_726 = x_817;
x_727 = x_810;
x_728 = x_806;
x_729 = x_805;
x_730 = x_753;
x_731 = x_825;
goto block_751;
}
else
{
uint8_t x_826; 
x_826 = lean_byte_array_fget(x_817, x_818);
lean_inc(x_805);
lean_inc(x_806);
lean_inc(x_808);
lean_inc_ref(x_809);
lean_inc_ref(x_807);
x_715 = x_761;
x_716 = x_763;
x_717 = x_802;
x_718 = x_818;
x_719 = x_8;
x_720 = x_755;
x_721 = x_807;
x_722 = x_754;
x_723 = x_809;
x_724 = x_808;
x_725 = x_752;
x_726 = x_817;
x_727 = x_810;
x_728 = x_806;
x_729 = x_805;
x_730 = x_753;
x_731 = x_826;
goto block_751;
}
}
}
}
else
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; 
lean_inc_ref(x_809);
lean_inc(x_808);
lean_inc_ref(x_807);
lean_inc(x_806);
lean_inc(x_805);
lean_dec(x_811);
x_827 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_827);
x_828 = lean_ctor_get(x_6, 1);
lean_inc(x_828);
lean_dec_ref(x_6);
x_829 = lean_unsigned_to_nat(5u);
x_830 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_827, x_828, x_8, x_829);
if (lean_obj_tag(x_830) == 0)
{
uint8_t x_831; 
lean_dec_ref(x_809);
lean_dec(x_808);
lean_dec_ref(x_807);
lean_dec(x_806);
lean_dec(x_805);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_831 = !lean_is_exclusive(x_830);
if (x_831 == 0)
{
return x_830;
}
else
{
lean_object* x_832; lean_object* x_833; 
x_832 = lean_ctor_get(x_830, 0);
lean_inc(x_832);
lean_dec(x_830);
x_833 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_833, 0, x_832);
return x_833;
}
}
else
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; uint8_t x_840; 
x_834 = lean_ctor_get(x_830, 0);
lean_inc(x_834);
lean_dec_ref(x_830);
x_835 = lean_ctor_get(x_834, 0);
lean_inc(x_835);
x_836 = lean_ctor_get(x_834, 1);
lean_inc(x_836);
lean_dec(x_834);
x_837 = lean_nat_sub(x_802, x_810);
x_838 = lean_array_get_borrowed(x_8, x_807, x_837);
lean_dec(x_837);
x_839 = lean_nat_add(x_838, x_835);
lean_dec(x_835);
x_840 = lean_nat_dec_lt(x_8, x_805);
if (x_840 == 0)
{
x_660 = x_763;
x_661 = x_761;
x_662 = x_839;
x_663 = x_752;
x_664 = x_836;
x_665 = x_8;
x_666 = x_755;
x_667 = x_754;
x_668 = x_753;
x_669 = x_7;
x_670 = x_805;
x_671 = x_806;
x_672 = x_807;
x_673 = x_808;
x_674 = x_809;
goto block_681;
}
else
{
uint8_t x_841; 
x_841 = !lean_is_exclusive(x_7);
if (x_841 == 0)
{
lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; 
x_842 = lean_ctor_get(x_7, 4);
lean_dec(x_842);
x_843 = lean_ctor_get(x_7, 3);
lean_dec(x_843);
x_844 = lean_ctor_get(x_7, 2);
lean_dec(x_844);
x_845 = lean_ctor_get(x_7, 1);
lean_dec(x_845);
x_846 = lean_ctor_get(x_7, 0);
lean_dec(x_846);
lean_inc(x_839);
x_847 = lean_array_set(x_807, x_808, x_839);
x_848 = lean_nat_add(x_808, x_753);
lean_dec(x_808);
x_849 = lean_nat_mod(x_848, x_805);
lean_dec(x_848);
lean_inc_ref(x_809);
lean_inc(x_849);
lean_inc_ref(x_847);
lean_inc(x_806);
lean_inc(x_805);
lean_ctor_set(x_7, 3, x_849);
lean_ctor_set(x_7, 2, x_847);
x_660 = x_763;
x_661 = x_761;
x_662 = x_839;
x_663 = x_752;
x_664 = x_836;
x_665 = x_8;
x_666 = x_755;
x_667 = x_754;
x_668 = x_753;
x_669 = x_7;
x_670 = x_805;
x_671 = x_806;
x_672 = x_847;
x_673 = x_849;
x_674 = x_809;
goto block_681;
}
else
{
lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; 
lean_dec(x_7);
lean_inc(x_839);
x_850 = lean_array_set(x_807, x_808, x_839);
x_851 = lean_nat_add(x_808, x_753);
lean_dec(x_808);
x_852 = lean_nat_mod(x_851, x_805);
lean_dec(x_851);
lean_inc_ref(x_809);
lean_inc(x_852);
lean_inc_ref(x_850);
lean_inc(x_806);
lean_inc(x_805);
x_853 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_853, 0, x_805);
lean_ctor_set(x_853, 1, x_806);
lean_ctor_set(x_853, 2, x_850);
lean_ctor_set(x_853, 3, x_852);
lean_ctor_set(x_853, 4, x_809);
x_660 = x_763;
x_661 = x_761;
x_662 = x_839;
x_663 = x_752;
x_664 = x_836;
x_665 = x_8;
x_666 = x_755;
x_667 = x_754;
x_668 = x_753;
x_669 = x_853;
x_670 = x_805;
x_671 = x_806;
x_672 = x_850;
x_673 = x_852;
x_674 = x_809;
goto block_681;
}
}
}
}
}
else
{
lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; 
x_854 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_854);
x_855 = lean_ctor_get(x_6, 1);
lean_inc(x_855);
lean_dec_ref(x_6);
x_856 = lean_unsigned_to_nat(5u);
x_857 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_854, x_855, x_8, x_856);
if (lean_obj_tag(x_857) == 0)
{
uint8_t x_858; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_858 = !lean_is_exclusive(x_857);
if (x_858 == 0)
{
return x_857;
}
else
{
lean_object* x_859; lean_object* x_860; 
x_859 = lean_ctor_get(x_857, 0);
lean_inc(x_859);
lean_dec(x_857);
x_860 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_860, 0, x_859);
return x_860;
}
}
else
{
lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; uint8_t x_872; 
x_861 = lean_ctor_get(x_857, 0);
lean_inc(x_861);
lean_dec_ref(x_857);
x_862 = lean_ctor_get(x_861, 0);
lean_inc(x_862);
x_863 = lean_ctor_get(x_861, 1);
lean_inc(x_863);
lean_dec(x_861);
x_864 = lean_ctor_get(x_7, 0);
lean_inc(x_864);
x_865 = lean_ctor_get(x_7, 1);
lean_inc(x_865);
x_866 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_866);
x_867 = lean_ctor_get(x_7, 3);
lean_inc(x_867);
x_868 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_868);
x_869 = lean_byte_array_size(x_3);
x_870 = lean_nat_add(x_761, x_869);
x_871 = lean_nat_sub(x_870, x_862);
lean_dec(x_862);
lean_dec(x_870);
x_872 = lean_nat_dec_lt(x_8, x_864);
if (x_872 == 0)
{
x_627 = x_763;
x_628 = x_761;
x_629 = x_863;
x_630 = x_752;
x_631 = x_871;
x_632 = x_8;
x_633 = x_755;
x_634 = x_754;
x_635 = x_753;
x_636 = x_7;
x_637 = x_864;
x_638 = x_865;
x_639 = x_866;
x_640 = x_867;
x_641 = x_868;
goto block_648;
}
else
{
uint8_t x_873; 
x_873 = !lean_is_exclusive(x_7);
if (x_873 == 0)
{
lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; 
x_874 = lean_ctor_get(x_7, 4);
lean_dec(x_874);
x_875 = lean_ctor_get(x_7, 3);
lean_dec(x_875);
x_876 = lean_ctor_get(x_7, 2);
lean_dec(x_876);
x_877 = lean_ctor_get(x_7, 1);
lean_dec(x_877);
x_878 = lean_ctor_get(x_7, 0);
lean_dec(x_878);
lean_inc(x_871);
x_879 = lean_array_set(x_866, x_867, x_871);
x_880 = lean_nat_add(x_867, x_753);
lean_dec(x_867);
x_881 = lean_nat_mod(x_880, x_864);
lean_dec(x_880);
lean_inc_ref(x_868);
lean_inc(x_881);
lean_inc_ref(x_879);
lean_inc(x_865);
lean_inc(x_864);
lean_ctor_set(x_7, 3, x_881);
lean_ctor_set(x_7, 2, x_879);
x_627 = x_763;
x_628 = x_761;
x_629 = x_863;
x_630 = x_752;
x_631 = x_871;
x_632 = x_8;
x_633 = x_755;
x_634 = x_754;
x_635 = x_753;
x_636 = x_7;
x_637 = x_864;
x_638 = x_865;
x_639 = x_879;
x_640 = x_881;
x_641 = x_868;
goto block_648;
}
else
{
lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; 
lean_dec(x_7);
lean_inc(x_871);
x_882 = lean_array_set(x_866, x_867, x_871);
x_883 = lean_nat_add(x_867, x_753);
lean_dec(x_867);
x_884 = lean_nat_mod(x_883, x_864);
lean_dec(x_883);
lean_inc_ref(x_868);
lean_inc(x_884);
lean_inc_ref(x_882);
lean_inc(x_865);
lean_inc(x_864);
x_885 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_885, 0, x_864);
lean_ctor_set(x_885, 1, x_865);
lean_ctor_set(x_885, 2, x_882);
lean_ctor_set(x_885, 3, x_884);
lean_ctor_set(x_885, 4, x_868);
x_627 = x_763;
x_628 = x_761;
x_629 = x_863;
x_630 = x_752;
x_631 = x_871;
x_632 = x_8;
x_633 = x_755;
x_634 = x_754;
x_635 = x_753;
x_636 = x_885;
x_637 = x_864;
x_638 = x_865;
x_639 = x_882;
x_640 = x_884;
x_641 = x_868;
goto block_648;
}
}
}
}
}
else
{
lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; 
x_886 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_886);
x_887 = lean_ctor_get(x_6, 1);
lean_inc(x_887);
lean_dec_ref(x_6);
x_888 = lean_unsigned_to_nat(5u);
x_889 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_886, x_887, x_8, x_888);
if (lean_obj_tag(x_889) == 0)
{
uint8_t x_890; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_890 = !lean_is_exclusive(x_889);
if (x_890 == 0)
{
return x_889;
}
else
{
lean_object* x_891; lean_object* x_892; 
x_891 = lean_ctor_get(x_889, 0);
lean_inc(x_891);
lean_dec(x_889);
x_892 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_892, 0, x_891);
return x_892;
}
}
else
{
lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; uint8_t x_901; 
x_893 = lean_ctor_get(x_889, 0);
lean_inc(x_893);
lean_dec_ref(x_889);
x_894 = lean_ctor_get(x_893, 0);
lean_inc(x_894);
x_895 = lean_ctor_get(x_893, 1);
lean_inc(x_895);
lean_dec(x_893);
x_896 = lean_ctor_get(x_7, 0);
lean_inc(x_896);
x_897 = lean_ctor_get(x_7, 1);
lean_inc(x_897);
x_898 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_898);
x_899 = lean_ctor_get(x_7, 3);
lean_inc(x_899);
x_900 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_900);
x_901 = lean_nat_dec_lt(x_8, x_896);
if (x_901 == 0)
{
x_594 = x_763;
x_595 = x_761;
x_596 = x_894;
x_597 = x_752;
x_598 = x_895;
x_599 = x_8;
x_600 = x_755;
x_601 = x_754;
x_602 = x_753;
x_603 = x_7;
x_604 = x_896;
x_605 = x_897;
x_606 = x_898;
x_607 = x_899;
x_608 = x_900;
goto block_615;
}
else
{
uint8_t x_902; 
x_902 = !lean_is_exclusive(x_7);
if (x_902 == 0)
{
lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; 
x_903 = lean_ctor_get(x_7, 4);
lean_dec(x_903);
x_904 = lean_ctor_get(x_7, 3);
lean_dec(x_904);
x_905 = lean_ctor_get(x_7, 2);
lean_dec(x_905);
x_906 = lean_ctor_get(x_7, 1);
lean_dec(x_906);
x_907 = lean_ctor_get(x_7, 0);
lean_dec(x_907);
lean_inc(x_894);
x_908 = lean_array_set(x_898, x_899, x_894);
x_909 = lean_nat_add(x_899, x_753);
lean_dec(x_899);
x_910 = lean_nat_mod(x_909, x_896);
lean_dec(x_909);
lean_inc_ref(x_900);
lean_inc(x_910);
lean_inc_ref(x_908);
lean_inc(x_897);
lean_inc(x_896);
lean_ctor_set(x_7, 3, x_910);
lean_ctor_set(x_7, 2, x_908);
x_594 = x_763;
x_595 = x_761;
x_596 = x_894;
x_597 = x_752;
x_598 = x_895;
x_599 = x_8;
x_600 = x_755;
x_601 = x_754;
x_602 = x_753;
x_603 = x_7;
x_604 = x_896;
x_605 = x_897;
x_606 = x_908;
x_607 = x_910;
x_608 = x_900;
goto block_615;
}
else
{
lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; 
lean_dec(x_7);
lean_inc(x_894);
x_911 = lean_array_set(x_898, x_899, x_894);
x_912 = lean_nat_add(x_899, x_753);
lean_dec(x_899);
x_913 = lean_nat_mod(x_912, x_896);
lean_dec(x_912);
lean_inc_ref(x_900);
lean_inc(x_913);
lean_inc_ref(x_911);
lean_inc(x_897);
lean_inc(x_896);
x_914 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_914, 0, x_896);
lean_ctor_set(x_914, 1, x_897);
lean_ctor_set(x_914, 2, x_911);
lean_ctor_set(x_914, 3, x_913);
lean_ctor_set(x_914, 4, x_900);
x_594 = x_763;
x_595 = x_761;
x_596 = x_894;
x_597 = x_752;
x_598 = x_895;
x_599 = x_8;
x_600 = x_755;
x_601 = x_754;
x_602 = x_753;
x_603 = x_914;
x_604 = x_896;
x_605 = x_897;
x_606 = x_911;
x_607 = x_913;
x_608 = x_900;
goto block_615;
}
}
}
}
}
}
}
else
{
lean_object* x_915; 
lean_inc_ref(x_758);
lean_dec(x_759);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_5);
x_915 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_915, 0, x_5);
lean_ctor_set(x_915, 1, x_756);
x_482 = x_761;
x_483 = x_752;
x_484 = x_758;
x_485 = x_755;
x_486 = x_753;
x_487 = x_3;
x_488 = x_915;
x_489 = x_5;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_498;
}
}
else
{
lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; uint8_t x_920; 
x_916 = lean_ctor_get(x_752, 1);
x_917 = lean_ctor_get(x_756, 0);
lean_inc(x_917);
lean_dec(x_756);
x_918 = lean_byte_array_size(x_1);
x_919 = lean_box(0);
x_920 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_917, x_919);
if (x_920 == 0)
{
switch (lean_obj_tag(x_917)) {
case 0:
{
lean_object* x_921; lean_object* x_922; 
lean_inc_ref(x_916);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_921 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_921, 0, x_6);
lean_ctor_set(x_921, 1, x_7);
lean_inc_ref(x_921);
lean_inc_ref(x_5);
x_922 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_922, 0, x_5);
lean_ctor_set(x_922, 1, x_921);
x_482 = x_918;
x_483 = x_752;
x_484 = x_916;
x_485 = x_755;
x_486 = x_753;
x_487 = x_3;
x_488 = x_922;
x_489 = x_5;
x_490 = x_921;
x_491 = x_6;
x_492 = x_7;
goto block_498;
}
case 1:
{
lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; uint8_t x_928; 
lean_inc_ref(x_916);
x_923 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_923);
x_924 = lean_ctor_get(x_5, 1);
lean_inc(x_924);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_925 = x_5;
} else {
 lean_dec_ref(x_5);
 x_925 = lean_box(0);
}
x_926 = lean_nat_add(x_924, x_754);
lean_dec(x_754);
x_927 = lean_byte_array_size(x_923);
x_928 = lean_nat_dec_le(x_926, x_927);
if (x_928 == 0)
{
lean_object* x_929; 
lean_dec(x_926);
lean_dec(x_925);
lean_dec(x_924);
lean_dec_ref(x_923);
lean_dec_ref(x_916);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_929 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_929;
}
else
{
if (x_928 == 0)
{
lean_object* x_930; 
lean_dec(x_926);
lean_dec(x_925);
lean_dec(x_924);
lean_dec_ref(x_923);
lean_dec_ref(x_916);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_930 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_930;
}
else
{
lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; 
x_931 = l_ByteArray_extract(x_923, x_924, x_926);
if (lean_is_scalar(x_925)) {
 x_932 = lean_alloc_ctor(0, 2, 0);
} else {
 x_932 = x_925;
}
lean_ctor_set(x_932, 0, x_923);
lean_ctor_set(x_932, 1, x_926);
x_933 = lean_byte_array_size(x_3);
x_934 = lean_byte_array_size(x_931);
x_935 = lean_byte_array_copy_slice(x_931, x_8, x_3, x_933, x_934, x_920);
lean_dec_ref(x_931);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_936 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_936, 0, x_6);
lean_ctor_set(x_936, 1, x_7);
lean_inc_ref(x_936);
lean_inc_ref(x_932);
x_937 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_937, 0, x_932);
lean_ctor_set(x_937, 1, x_936);
x_482 = x_918;
x_483 = x_752;
x_484 = x_916;
x_485 = x_755;
x_486 = x_753;
x_487 = x_935;
x_488 = x_937;
x_489 = x_932;
x_490 = x_936;
x_491 = x_6;
x_492 = x_7;
goto block_498;
}
}
}
case 2:
{
lean_object* x_938; lean_object* x_939; lean_object* x_940; uint8_t x_941; 
x_938 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_938);
x_939 = lean_ctor_get(x_5, 1);
lean_inc(x_939);
lean_dec_ref(x_5);
x_940 = lean_byte_array_size(x_938);
x_941 = lean_nat_dec_lt(x_939, x_940);
if (x_941 == 0)
{
lean_object* x_942; 
lean_dec(x_939);
lean_dec_ref(x_938);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_942 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_942;
}
else
{
if (x_941 == 0)
{
uint8_t x_943; lean_object* x_944; lean_object* x_945; uint8_t x_946; 
x_943 = l_instInhabitedUInt8;
x_944 = lean_box(x_943);
x_945 = l_outOfBounds___redArg(x_944);
x_946 = lean_unbox(x_945);
lean_dec(x_945);
x_511 = x_918;
x_512 = x_920;
x_513 = x_939;
x_514 = x_752;
x_515 = x_755;
x_516 = x_938;
x_517 = x_754;
x_518 = x_753;
x_519 = x_946;
goto block_530;
}
else
{
uint8_t x_947; 
x_947 = lean_byte_array_fget(x_938, x_939);
x_511 = x_918;
x_512 = x_920;
x_513 = x_939;
x_514 = x_752;
x_515 = x_755;
x_516 = x_938;
x_517 = x_754;
x_518 = x_753;
x_519 = x_947;
goto block_530;
}
}
}
default: 
{
uint8_t x_948; lean_object* x_949; uint8_t x_950; 
x_948 = lean_ctor_get_uint8(x_917, 0);
lean_dec_ref(x_917);
x_949 = lean_uint8_to_nat(x_948);
x_950 = lean_nat_dec_eq(x_949, x_8);
if (x_950 == 0)
{
uint8_t x_951; 
x_951 = lean_nat_dec_eq(x_949, x_753);
if (x_951 == 0)
{
lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; lean_object* x_958; uint8_t x_959; 
x_952 = lean_ctor_get(x_7, 0);
x_953 = lean_ctor_get(x_7, 1);
x_954 = lean_ctor_get(x_7, 2);
x_955 = lean_ctor_get(x_7, 3);
x_956 = lean_ctor_get(x_7, 4);
x_957 = lean_unsigned_to_nat(2u);
x_958 = lean_nat_add(x_957, x_952);
x_959 = lean_nat_dec_lt(x_949, x_958);
if (x_959 == 0)
{
lean_object* x_960; uint8_t x_961; 
x_960 = lean_nat_add(x_958, x_953);
lean_dec(x_958);
x_961 = lean_nat_dec_lt(x_949, x_960);
lean_dec(x_960);
if (x_961 == 0)
{
lean_object* x_962; lean_object* x_963; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_962 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_962, 0, x_949);
x_963 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_963, 0, x_962);
return x_963;
}
else
{
lean_object* x_964; lean_object* x_965; lean_object* x_966; uint8_t x_967; 
x_964 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_964);
x_965 = lean_ctor_get(x_6, 1);
lean_inc(x_965);
lean_dec_ref(x_6);
x_966 = lean_byte_array_size(x_964);
x_967 = lean_nat_dec_lt(x_965, x_966);
if (x_967 == 0)
{
lean_object* x_968; 
lean_dec(x_965);
lean_dec_ref(x_964);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_968 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_968;
}
else
{
if (x_967 == 0)
{
uint8_t x_969; lean_object* x_970; lean_object* x_971; uint8_t x_972; 
x_969 = l_instInhabitedUInt8;
x_970 = lean_box(x_969);
x_971 = l_outOfBounds___redArg(x_970);
x_972 = lean_unbox(x_971);
lean_dec(x_971);
lean_inc(x_952);
lean_inc(x_953);
lean_inc(x_955);
lean_inc_ref(x_956);
lean_inc_ref(x_954);
x_715 = x_918;
x_716 = x_920;
x_717 = x_949;
x_718 = x_965;
x_719 = x_8;
x_720 = x_755;
x_721 = x_954;
x_722 = x_754;
x_723 = x_956;
x_724 = x_955;
x_725 = x_752;
x_726 = x_964;
x_727 = x_957;
x_728 = x_953;
x_729 = x_952;
x_730 = x_753;
x_731 = x_972;
goto block_751;
}
else
{
uint8_t x_973; 
x_973 = lean_byte_array_fget(x_964, x_965);
lean_inc(x_952);
lean_inc(x_953);
lean_inc(x_955);
lean_inc_ref(x_956);
lean_inc_ref(x_954);
x_715 = x_918;
x_716 = x_920;
x_717 = x_949;
x_718 = x_965;
x_719 = x_8;
x_720 = x_755;
x_721 = x_954;
x_722 = x_754;
x_723 = x_956;
x_724 = x_955;
x_725 = x_752;
x_726 = x_964;
x_727 = x_957;
x_728 = x_953;
x_729 = x_952;
x_730 = x_753;
x_731 = x_973;
goto block_751;
}
}
}
}
else
{
lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; 
lean_inc_ref(x_956);
lean_inc(x_955);
lean_inc_ref(x_954);
lean_inc(x_953);
lean_inc(x_952);
lean_dec(x_958);
x_974 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_974);
x_975 = lean_ctor_get(x_6, 1);
lean_inc(x_975);
lean_dec_ref(x_6);
x_976 = lean_unsigned_to_nat(5u);
x_977 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_974, x_975, x_8, x_976);
if (lean_obj_tag(x_977) == 0)
{
lean_object* x_978; lean_object* x_979; lean_object* x_980; 
lean_dec_ref(x_956);
lean_dec(x_955);
lean_dec_ref(x_954);
lean_dec(x_953);
lean_dec(x_952);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_978 = lean_ctor_get(x_977, 0);
lean_inc(x_978);
if (lean_is_exclusive(x_977)) {
 lean_ctor_release(x_977, 0);
 x_979 = x_977;
} else {
 lean_dec_ref(x_977);
 x_979 = lean_box(0);
}
if (lean_is_scalar(x_979)) {
 x_980 = lean_alloc_ctor(0, 1, 0);
} else {
 x_980 = x_979;
}
lean_ctor_set(x_980, 0, x_978);
return x_980;
}
else
{
lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; uint8_t x_987; 
x_981 = lean_ctor_get(x_977, 0);
lean_inc(x_981);
lean_dec_ref(x_977);
x_982 = lean_ctor_get(x_981, 0);
lean_inc(x_982);
x_983 = lean_ctor_get(x_981, 1);
lean_inc(x_983);
lean_dec(x_981);
x_984 = lean_nat_sub(x_949, x_957);
x_985 = lean_array_get_borrowed(x_8, x_954, x_984);
lean_dec(x_984);
x_986 = lean_nat_add(x_985, x_982);
lean_dec(x_982);
x_987 = lean_nat_dec_lt(x_8, x_952);
if (x_987 == 0)
{
x_660 = x_920;
x_661 = x_918;
x_662 = x_986;
x_663 = x_752;
x_664 = x_983;
x_665 = x_8;
x_666 = x_755;
x_667 = x_754;
x_668 = x_753;
x_669 = x_7;
x_670 = x_952;
x_671 = x_953;
x_672 = x_954;
x_673 = x_955;
x_674 = x_956;
goto block_681;
}
else
{
lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_988 = x_7;
} else {
 lean_dec_ref(x_7);
 x_988 = lean_box(0);
}
lean_inc(x_986);
x_989 = lean_array_set(x_954, x_955, x_986);
x_990 = lean_nat_add(x_955, x_753);
lean_dec(x_955);
x_991 = lean_nat_mod(x_990, x_952);
lean_dec(x_990);
lean_inc_ref(x_956);
lean_inc(x_991);
lean_inc_ref(x_989);
lean_inc(x_953);
lean_inc(x_952);
if (lean_is_scalar(x_988)) {
 x_992 = lean_alloc_ctor(0, 5, 0);
} else {
 x_992 = x_988;
}
lean_ctor_set(x_992, 0, x_952);
lean_ctor_set(x_992, 1, x_953);
lean_ctor_set(x_992, 2, x_989);
lean_ctor_set(x_992, 3, x_991);
lean_ctor_set(x_992, 4, x_956);
x_660 = x_920;
x_661 = x_918;
x_662 = x_986;
x_663 = x_752;
x_664 = x_983;
x_665 = x_8;
x_666 = x_755;
x_667 = x_754;
x_668 = x_753;
x_669 = x_992;
x_670 = x_952;
x_671 = x_953;
x_672 = x_989;
x_673 = x_991;
x_674 = x_956;
goto block_681;
}
}
}
}
else
{
lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; 
x_993 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_993);
x_994 = lean_ctor_get(x_6, 1);
lean_inc(x_994);
lean_dec_ref(x_6);
x_995 = lean_unsigned_to_nat(5u);
x_996 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_993, x_994, x_8, x_995);
if (lean_obj_tag(x_996) == 0)
{
lean_object* x_997; lean_object* x_998; lean_object* x_999; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_997 = lean_ctor_get(x_996, 0);
lean_inc(x_997);
if (lean_is_exclusive(x_996)) {
 lean_ctor_release(x_996, 0);
 x_998 = x_996;
} else {
 lean_dec_ref(x_996);
 x_998 = lean_box(0);
}
if (lean_is_scalar(x_998)) {
 x_999 = lean_alloc_ctor(0, 1, 0);
} else {
 x_999 = x_998;
}
lean_ctor_set(x_999, 0, x_997);
return x_999;
}
else
{
lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; uint8_t x_1011; 
x_1000 = lean_ctor_get(x_996, 0);
lean_inc(x_1000);
lean_dec_ref(x_996);
x_1001 = lean_ctor_get(x_1000, 0);
lean_inc(x_1001);
x_1002 = lean_ctor_get(x_1000, 1);
lean_inc(x_1002);
lean_dec(x_1000);
x_1003 = lean_ctor_get(x_7, 0);
lean_inc(x_1003);
x_1004 = lean_ctor_get(x_7, 1);
lean_inc(x_1004);
x_1005 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_1005);
x_1006 = lean_ctor_get(x_7, 3);
lean_inc(x_1006);
x_1007 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_1007);
x_1008 = lean_byte_array_size(x_3);
x_1009 = lean_nat_add(x_918, x_1008);
x_1010 = lean_nat_sub(x_1009, x_1001);
lean_dec(x_1001);
lean_dec(x_1009);
x_1011 = lean_nat_dec_lt(x_8, x_1003);
if (x_1011 == 0)
{
x_627 = x_920;
x_628 = x_918;
x_629 = x_1002;
x_630 = x_752;
x_631 = x_1010;
x_632 = x_8;
x_633 = x_755;
x_634 = x_754;
x_635 = x_753;
x_636 = x_7;
x_637 = x_1003;
x_638 = x_1004;
x_639 = x_1005;
x_640 = x_1006;
x_641 = x_1007;
goto block_648;
}
else
{
lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1012 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1012 = lean_box(0);
}
lean_inc(x_1010);
x_1013 = lean_array_set(x_1005, x_1006, x_1010);
x_1014 = lean_nat_add(x_1006, x_753);
lean_dec(x_1006);
x_1015 = lean_nat_mod(x_1014, x_1003);
lean_dec(x_1014);
lean_inc_ref(x_1007);
lean_inc(x_1015);
lean_inc_ref(x_1013);
lean_inc(x_1004);
lean_inc(x_1003);
if (lean_is_scalar(x_1012)) {
 x_1016 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1016 = x_1012;
}
lean_ctor_set(x_1016, 0, x_1003);
lean_ctor_set(x_1016, 1, x_1004);
lean_ctor_set(x_1016, 2, x_1013);
lean_ctor_set(x_1016, 3, x_1015);
lean_ctor_set(x_1016, 4, x_1007);
x_627 = x_920;
x_628 = x_918;
x_629 = x_1002;
x_630 = x_752;
x_631 = x_1010;
x_632 = x_8;
x_633 = x_755;
x_634 = x_754;
x_635 = x_753;
x_636 = x_1016;
x_637 = x_1003;
x_638 = x_1004;
x_639 = x_1013;
x_640 = x_1015;
x_641 = x_1007;
goto block_648;
}
}
}
}
else
{
lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; 
x_1017 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1017);
x_1018 = lean_ctor_get(x_6, 1);
lean_inc(x_1018);
lean_dec_ref(x_6);
x_1019 = lean_unsigned_to_nat(5u);
x_1020 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1017, x_1018, x_8, x_1019);
if (lean_obj_tag(x_1020) == 0)
{
lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1021 = lean_ctor_get(x_1020, 0);
lean_inc(x_1021);
if (lean_is_exclusive(x_1020)) {
 lean_ctor_release(x_1020, 0);
 x_1022 = x_1020;
} else {
 lean_dec_ref(x_1020);
 x_1022 = lean_box(0);
}
if (lean_is_scalar(x_1022)) {
 x_1023 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1023 = x_1022;
}
lean_ctor_set(x_1023, 0, x_1021);
return x_1023;
}
else
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; uint8_t x_1032; 
x_1024 = lean_ctor_get(x_1020, 0);
lean_inc(x_1024);
lean_dec_ref(x_1020);
x_1025 = lean_ctor_get(x_1024, 0);
lean_inc(x_1025);
x_1026 = lean_ctor_get(x_1024, 1);
lean_inc(x_1026);
lean_dec(x_1024);
x_1027 = lean_ctor_get(x_7, 0);
lean_inc(x_1027);
x_1028 = lean_ctor_get(x_7, 1);
lean_inc(x_1028);
x_1029 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_1029);
x_1030 = lean_ctor_get(x_7, 3);
lean_inc(x_1030);
x_1031 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_1031);
x_1032 = lean_nat_dec_lt(x_8, x_1027);
if (x_1032 == 0)
{
x_594 = x_920;
x_595 = x_918;
x_596 = x_1025;
x_597 = x_752;
x_598 = x_1026;
x_599 = x_8;
x_600 = x_755;
x_601 = x_754;
x_602 = x_753;
x_603 = x_7;
x_604 = x_1027;
x_605 = x_1028;
x_606 = x_1029;
x_607 = x_1030;
x_608 = x_1031;
goto block_615;
}
else
{
lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1033 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1033 = lean_box(0);
}
lean_inc(x_1025);
x_1034 = lean_array_set(x_1029, x_1030, x_1025);
x_1035 = lean_nat_add(x_1030, x_753);
lean_dec(x_1030);
x_1036 = lean_nat_mod(x_1035, x_1027);
lean_dec(x_1035);
lean_inc_ref(x_1031);
lean_inc(x_1036);
lean_inc_ref(x_1034);
lean_inc(x_1028);
lean_inc(x_1027);
if (lean_is_scalar(x_1033)) {
 x_1037 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1037 = x_1033;
}
lean_ctor_set(x_1037, 0, x_1027);
lean_ctor_set(x_1037, 1, x_1028);
lean_ctor_set(x_1037, 2, x_1034);
lean_ctor_set(x_1037, 3, x_1036);
lean_ctor_set(x_1037, 4, x_1031);
x_594 = x_920;
x_595 = x_918;
x_596 = x_1025;
x_597 = x_752;
x_598 = x_1026;
x_599 = x_8;
x_600 = x_755;
x_601 = x_754;
x_602 = x_753;
x_603 = x_1037;
x_604 = x_1027;
x_605 = x_1028;
x_606 = x_1034;
x_607 = x_1036;
x_608 = x_1031;
goto block_615;
}
}
}
}
}
}
else
{
lean_object* x_1038; lean_object* x_1039; 
lean_inc_ref(x_916);
lean_dec(x_917);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_1038 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1038, 0, x_6);
lean_ctor_set(x_1038, 1, x_7);
lean_inc_ref(x_1038);
lean_inc_ref(x_5);
x_1039 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1039, 0, x_5);
lean_ctor_set(x_1039, 1, x_1038);
x_482 = x_918;
x_483 = x_752;
x_484 = x_916;
x_485 = x_755;
x_486 = x_753;
x_487 = x_3;
x_488 = x_1039;
x_489 = x_5;
x_490 = x_1038;
x_491 = x_6;
x_492 = x_7;
goto block_498;
}
}
}
block_1055:
{
if (x_1046 == 0)
{
lean_dec(x_1044);
lean_dec_ref(x_20);
x_752 = x_1042;
x_753 = x_1045;
x_754 = x_1043;
x_755 = x_1041;
goto block_1040;
}
else
{
lean_object* x_1047; lean_object* x_1048; 
lean_dec(x_1043);
lean_dec_ref(x_1041);
x_1047 = lean_unsigned_to_nat(5u);
x_1048 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_20, x_1044, x_8, x_1047);
if (lean_obj_tag(x_1048) == 0)
{
uint8_t x_1049; 
lean_dec(x_1045);
lean_dec_ref(x_1042);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1049 = !lean_is_exclusive(x_1048);
if (x_1049 == 0)
{
return x_1048;
}
else
{
lean_object* x_1050; lean_object* x_1051; 
x_1050 = lean_ctor_get(x_1048, 0);
lean_inc(x_1050);
lean_dec(x_1048);
x_1051 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1051, 0, x_1050);
return x_1051;
}
}
else
{
lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; 
x_1052 = lean_ctor_get(x_1048, 0);
lean_inc(x_1052);
lean_dec_ref(x_1048);
x_1053 = lean_ctor_get(x_1052, 0);
lean_inc(x_1053);
x_1054 = lean_ctor_get(x_1052, 1);
lean_inc(x_1054);
lean_dec(x_1052);
x_752 = x_1042;
x_753 = x_1045;
x_754 = x_1053;
x_755 = x_1054;
goto block_1040;
}
}
}
block_1076:
{
lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; uint8_t x_1062; 
x_1057 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1058 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1059 = lean_uint8_to_nat(x_1056);
x_1060 = lean_array_get(x_1057, x_1058, x_1059);
x_1061 = lean_ctor_get(x_1060, 0);
lean_inc_ref(x_1061);
x_1062 = !lean_is_exclusive(x_1061);
if (x_1062 == 0)
{
lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; uint8_t x_1066; 
x_1063 = lean_ctor_get(x_1061, 0);
x_1064 = lean_ctor_get(x_1061, 1);
x_1065 = lean_nat_add(x_21, x_27);
lean_dec(x_21);
lean_inc(x_1065);
lean_inc_ref(x_20);
lean_ctor_set(x_1061, 1, x_1065);
lean_ctor_set(x_1061, 0, x_20);
x_1066 = lean_nat_dec_eq(x_1064, x_8);
if (x_1066 == 0)
{
lean_dec(x_1063);
x_1041 = x_1061;
x_1042 = x_1060;
x_1043 = x_1064;
x_1044 = x_1065;
x_1045 = x_27;
x_1046 = x_1066;
goto block_1055;
}
else
{
lean_object* x_1067; uint8_t x_1068; 
x_1067 = lean_box(0);
x_1068 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_1063, x_1067);
lean_dec(x_1063);
if (x_1068 == 0)
{
x_1041 = x_1061;
x_1042 = x_1060;
x_1043 = x_1064;
x_1044 = x_1065;
x_1045 = x_27;
x_1046 = x_1066;
goto block_1055;
}
else
{
lean_dec(x_1065);
lean_dec_ref(x_20);
x_752 = x_1060;
x_753 = x_27;
x_754 = x_1064;
x_755 = x_1061;
goto block_1040;
}
}
}
else
{
lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; uint8_t x_1073; 
x_1069 = lean_ctor_get(x_1061, 0);
x_1070 = lean_ctor_get(x_1061, 1);
lean_inc(x_1070);
lean_inc(x_1069);
lean_dec(x_1061);
x_1071 = lean_nat_add(x_21, x_27);
lean_dec(x_21);
lean_inc(x_1071);
lean_inc_ref(x_20);
x_1072 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1072, 0, x_20);
lean_ctor_set(x_1072, 1, x_1071);
x_1073 = lean_nat_dec_eq(x_1070, x_8);
if (x_1073 == 0)
{
lean_dec(x_1069);
x_1041 = x_1072;
x_1042 = x_1060;
x_1043 = x_1070;
x_1044 = x_1071;
x_1045 = x_27;
x_1046 = x_1073;
goto block_1055;
}
else
{
lean_object* x_1074; uint8_t x_1075; 
x_1074 = lean_box(0);
x_1075 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_1069, x_1074);
lean_dec(x_1069);
if (x_1075 == 0)
{
x_1041 = x_1072;
x_1042 = x_1060;
x_1043 = x_1070;
x_1044 = x_1071;
x_1045 = x_27;
x_1046 = x_1073;
goto block_1055;
}
else
{
lean_dec(x_1071);
lean_dec_ref(x_20);
x_752 = x_1060;
x_753 = x_27;
x_754 = x_1070;
x_755 = x_1072;
goto block_1040;
}
}
}
}
}
}
else
{
lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; 
lean_dec(x_2);
x_1082 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1082, 0, x_6);
lean_ctor_set(x_1082, 1, x_7);
x_1083 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1083, 0, x_5);
lean_ctor_set(x_1083, 1, x_1082);
x_1084 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1084, 0, x_4);
lean_ctor_set(x_1084, 1, x_1083);
x_1085 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1085, 0, x_3);
lean_ctor_set(x_1085, 1, x_1084);
x_1086 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1086, 0, x_1085);
return x_1086;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_1, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_7;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; lean_object* x_3; 
x_1 = lean_unsigned_to_nat(3u);
x_2 = lean_unsigned_to_nat(4u);
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(x_2, x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow(lean_object* x_1, lean_object* x_2) {
_start:
{
uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; uint8_t x_11; uint8_t x_12; lean_object* x_13; lean_object* x_14; uint8_t x_52; uint8_t x_53; 
x_3 = lean_ctor_get_uint8(x_1, sizeof(void*)*7);
x_4 = lean_ctor_get(x_1, 0);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 1);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 2);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 3);
lean_inc_ref(x_7);
x_8 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_8);
x_9 = lean_ctor_get(x_1, 5);
lean_inc_ref(x_9);
x_10 = lean_ctor_get(x_1, 6);
lean_inc(x_10);
lean_dec_ref(x_1);
x_11 = 1;
x_12 = lean_uint8_land(x_3, x_11);
x_13 = lean_unsigned_to_nat(0u);
x_52 = 0;
x_53 = lean_uint8_dec_eq(x_12, x_52);
if (x_53 == 0)
{
lean_object* x_54; lean_object* x_55; 
x_54 = lean_nat_add(x_5, x_4);
lean_dec(x_4);
x_55 = l_ByteArray_extract(x_2, x_5, x_54);
lean_dec(x_54);
x_14 = x_55;
goto block_51;
}
else
{
lean_object* x_56; 
lean_dec(x_5);
lean_dec(x_4);
x_56 = l_ByteArray_empty;
x_14 = x_56;
goto block_51;
}
block_51:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_15 = lean_byte_array_size(x_8);
x_16 = lean_mk_empty_byte_array(x_6);
x_17 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_17, 0, x_8);
lean_ctor_set(x_17, 1, x_13);
x_18 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_18, 0, x_7);
lean_ctor_set(x_18, 1, x_13);
x_19 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_19, 0, x_9);
lean_ctor_set(x_19, 1, x_13);
x_20 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__0);
x_21 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop(x_14, x_15, x_16, x_17, x_18, x_19, x_20);
lean_dec_ref(x_14);
if (lean_obj_tag(x_21) == 0)
{
uint8_t x_22; 
lean_dec(x_10);
lean_dec(x_6);
x_22 = !lean_is_exclusive(x_21);
if (x_22 == 0)
{
return x_21;
}
else
{
lean_object* x_23; lean_object* x_24; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec(x_21);
x_24 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_24, 0, x_23);
return x_24;
}
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_21);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_ctor_get(x_21, 0);
x_27 = lean_ctor_get(x_26, 0);
lean_inc(x_27);
lean_dec(x_26);
x_28 = lean_byte_array_size(x_27);
x_29 = lean_nat_dec_eq(x_28, x_6);
lean_dec(x_6);
if (x_29 == 0)
{
lean_object* x_30; 
lean_dec(x_27);
lean_free_object(x_21);
lean_dec(x_10);
x_30 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__1));
return x_30;
}
else
{
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_31; uint32_t x_32; uint32_t x_33; uint8_t x_34; 
x_31 = lean_ctor_get(x_10, 0);
lean_inc(x_31);
lean_dec_ref(x_10);
x_32 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32(x_27);
x_33 = lean_unbox_uint32(x_31);
x_34 = lean_uint32_dec_eq(x_33, x_32);
if (x_34 == 0)
{
lean_object* x_35; uint32_t x_36; 
lean_dec(x_27);
x_35 = lean_alloc_ctor(8, 0, 8);
x_36 = lean_unbox_uint32(x_31);
lean_dec(x_31);
lean_ctor_set_uint32(x_35, 0, x_36);
lean_ctor_set_uint32(x_35, 4, x_32);
lean_ctor_set_tag(x_21, 0);
lean_ctor_set(x_21, 0, x_35);
return x_21;
}
else
{
lean_dec(x_31);
lean_ctor_set(x_21, 0, x_27);
return x_21;
}
}
else
{
lean_dec(x_10);
lean_ctor_set(x_21, 0, x_27);
return x_21;
}
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_37 = lean_ctor_get(x_21, 0);
lean_inc(x_37);
lean_dec(x_21);
x_38 = lean_ctor_get(x_37, 0);
lean_inc(x_38);
lean_dec(x_37);
x_39 = lean_byte_array_size(x_38);
x_40 = lean_nat_dec_eq(x_39, x_6);
lean_dec(x_6);
if (x_40 == 0)
{
lean_object* x_41; 
lean_dec(x_38);
lean_dec(x_10);
x_41 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___closed__1));
return x_41;
}
else
{
if (lean_obj_tag(x_10) == 1)
{
lean_object* x_42; uint32_t x_43; uint32_t x_44; uint8_t x_45; 
x_42 = lean_ctor_get(x_10, 0);
lean_inc(x_42);
lean_dec_ref(x_10);
x_43 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32(x_38);
x_44 = lean_unbox_uint32(x_42);
x_45 = lean_uint32_dec_eq(x_44, x_43);
if (x_45 == 0)
{
lean_object* x_46; uint32_t x_47; lean_object* x_48; 
lean_dec(x_38);
x_46 = lean_alloc_ctor(8, 0, 8);
x_47 = lean_unbox_uint32(x_42);
lean_dec(x_42);
lean_ctor_set_uint32(x_46, 0, x_47);
lean_ctor_set_uint32(x_46, 4, x_43);
x_48 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_48, 0, x_46);
return x_48;
}
else
{
lean_object* x_49; 
lean_dec(x_42);
x_49 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_49, 0, x_38);
return x_49;
}
}
else
{
lean_object* x_50; 
lean_dec(x_10);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_38);
return x_50;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_2, x_5);
if (x_6 == 1)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; uint8_t x_10; 
lean_dec(x_2);
x_7 = lean_ctor_get(x_4, 0);
x_8 = lean_ctor_get(x_4, 1);
x_9 = lean_byte_array_size(x_7);
x_10 = lean_nat_dec_le(x_9, x_8);
if (x_10 == 0)
{
lean_object* x_11; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_11 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows___closed__0));
return x_11;
}
else
{
lean_object* x_12; lean_object* x_13; 
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_3);
lean_ctor_set(x_12, 1, x_4);
x_13 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_13, 0, x_12);
return x_13;
}
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; uint8_t x_17; 
x_14 = lean_ctor_get(x_4, 0);
x_15 = lean_ctor_get(x_4, 1);
x_16 = lean_byte_array_size(x_14);
x_17 = lean_nat_dec_le(x_16, x_15);
if (x_17 == 0)
{
lean_object* x_18; 
x_18 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow(x_4);
if (lean_obj_tag(x_18) == 0)
{
uint8_t x_19; 
lean_dec_ref(x_3);
lean_dec(x_2);
x_19 = !lean_is_exclusive(x_18);
if (x_19 == 0)
{
return x_18;
}
else
{
lean_object* x_20; lean_object* x_21; 
x_20 = lean_ctor_get(x_18, 0);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_21, 0, x_20);
return x_21;
}
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_ctor_get(x_18, 0);
lean_inc(x_22);
lean_dec_ref(x_18);
x_23 = lean_ctor_get(x_22, 0);
lean_inc(x_23);
x_24 = lean_ctor_get(x_22, 1);
lean_inc(x_24);
lean_dec(x_22);
x_25 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindow(x_23, x_1);
if (lean_obj_tag(x_25) == 0)
{
uint8_t x_26; 
lean_dec(x_24);
lean_dec_ref(x_3);
lean_dec(x_2);
x_26 = !lean_is_exclusive(x_25);
if (x_26 == 0)
{
return x_25;
}
else
{
lean_object* x_27; lean_object* x_28; 
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
lean_dec(x_25);
x_28 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_28, 0, x_27);
return x_28;
}
}
else
{
lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; 
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
lean_dec_ref(x_25);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_sub(x_2, x_30);
lean_dec(x_2);
x_32 = lean_byte_array_size(x_3);
x_33 = lean_byte_array_size(x_29);
x_34 = lean_byte_array_copy_slice(x_29, x_5, x_3, x_32, x_33, x_17);
lean_dec(x_29);
x_2 = x_31;
x_3 = x_34;
x_4 = x_24;
goto _start;
}
}
}
else
{
lean_object* x_36; lean_object* x_37; 
lean_dec(x_2);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_3);
lean_ctor_set(x_36, 1, x_4);
x_37 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows(x_1, x_2, x_3, x_4);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_unsigned_to_nat(0u);
lean_inc_ref(x_1);
x_4 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_4, 0, x_1);
lean_ctor_set(x_4, 1, x_3);
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader(x_4);
if (lean_obj_tag(x_5) == 0)
{
uint8_t x_6; 
lean_dec_ref(x_1);
x_6 = !lean_is_exclusive(x_5);
if (x_6 == 0)
{
return x_5;
}
else
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_ctor_get(x_5, 0);
lean_inc(x_7);
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_8, 0, x_7);
return x_8;
}
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_9 = lean_ctor_get(x_5, 0);
lean_inc(x_9);
lean_dec_ref(x_5);
x_10 = lean_ctor_get(x_9, 1);
lean_inc(x_10);
lean_dec(x_9);
x_11 = lean_byte_array_size(x_1);
lean_dec_ref(x_1);
x_12 = l_ByteArray_empty;
x_13 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeWindows(x_2, x_11, x_12, x_10);
if (lean_obj_tag(x_13) == 0)
{
uint8_t x_14; 
x_14 = !lean_is_exclusive(x_13);
if (x_14 == 0)
{
return x_13;
}
else
{
lean_object* x_15; lean_object* x_16; 
x_15 = lean_ctor_get(x_13, 0);
lean_inc(x_15);
lean_dec(x_13);
x_16 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_16, 0, x_15);
return x_16;
}
}
else
{
uint8_t x_17; 
x_17 = !lean_is_exclusive(x_13);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
x_18 = lean_ctor_get(x_13, 0);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
lean_dec(x_18);
lean_ctor_set(x_13, 0, x_19);
return x_13;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; 
x_20 = lean_ctor_get(x_13, 0);
lean_inc(x_20);
lean_dec(x_13);
x_21 = lean_ctor_get(x_20, 0);
lean_inc(x_21);
lean_dec(x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
return x_22;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decode___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decode(x_1, x_2);
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
LEAN_EXPORT lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder(uint8_t builtin) {
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
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__1 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__1);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__2 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__2();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___closed__0___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
