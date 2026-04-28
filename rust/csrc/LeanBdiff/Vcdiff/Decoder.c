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
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint32_t lean_uint8_to_uint32(uint8_t);
uint32_t lean_uint32_add(uint32_t, uint32_t);
size_t lean_usize_add(size_t, size_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Run(lean_object*, size_t, uint32_t, uint32_t, lean_object*);
lean_object* lean_usize_to_nat(size_t);
lean_object* lean_byte_array_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
uint8_t lean_byte_array_uget(lean_object*, size_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Run___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint32_t lean_uint32_shift_left(uint32_t, uint32_t);
uint32_t lean_uint32_lor(uint32_t, uint32_t);
lean_object* lean_nat_add(lean_object*, lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint32_t lean_uint32_mod(uint32_t, uint32_t);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Chunks(lean_object*, size_t, uint32_t, uint32_t, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Chunks___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Chunks_match__1_splitter___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Chunks_match__1_splitter(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32___boxed(lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0_value;
extern uint8_t l_instInhabitedUInt8;
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
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
extern uint32_t l_instInhabitedUInt32;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint32_t lean_uint32_of_nat(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0_value;
uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(lean_object*, lean_object*);
extern lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
extern lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Run(lean_object* x_1, size_t x_2, uint32_t x_3, uint32_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 1)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_5);
x_8 = lean_box_uint32(x_3);
x_9 = lean_box_uint32(x_4);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_8);
lean_ctor_set(x_10, 1, x_9);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_21; lean_object* x_22; uint8_t x_23; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_21 = lean_usize_to_nat(x_2);
x_22 = lean_byte_array_size(x_1);
x_23 = lean_nat_dec_lt(x_21, x_22);
lean_dec(x_21);
if (x_23 == 0)
{
uint8_t x_24; 
x_24 = 0;
x_13 = x_24;
goto block_20;
}
else
{
uint8_t x_25; 
x_25 = lean_byte_array_uget(x_1, x_2);
x_13 = x_25;
goto block_20;
}
block_20:
{
uint32_t x_14; uint32_t x_15; uint32_t x_16; size_t x_17; size_t x_18; 
x_14 = lean_uint8_to_uint32(x_13);
x_15 = lean_uint32_add(x_3, x_14);
x_16 = lean_uint32_add(x_4, x_15);
x_17 = 1;
x_18 = lean_usize_add(x_2, x_17);
x_2 = x_18;
x_3 = x_15;
x_4 = x_16;
x_5 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Run___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; uint32_t x_7; uint32_t x_8; lean_object* x_9; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_8 = lean_unbox_uint32(x_4);
lean_dec(x_4);
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Run(x_1, x_6, x_7, x_8, x_5);
lean_dec_ref(x_1);
return x_9;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Chunks(lean_object* x_1, size_t x_2, uint32_t x_3, uint32_t x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 1)
{
uint32_t x_8; uint32_t x_9; uint32_t x_10; 
lean_dec(x_5);
x_8 = 16;
x_9 = lean_uint32_shift_left(x_4, x_8);
x_10 = lean_uint32_lor(x_9, x_3);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_28; uint8_t x_29; 
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_13 = lean_nat_add(x_12, x_11);
lean_dec(x_12);
x_28 = lean_unsigned_to_nat(5552u);
x_29 = lean_nat_dec_le(x_13, x_28);
if (x_29 == 0)
{
x_14 = x_28;
goto block_27;
}
else
{
lean_inc(x_13);
x_14 = x_13;
goto block_27;
}
block_27:
{
lean_object* x_15; lean_object* x_16; lean_object* x_17; uint32_t x_18; size_t x_19; size_t x_20; uint32_t x_21; uint32_t x_22; uint32_t x_23; uint32_t x_24; lean_object* x_25; 
lean_inc(x_14);
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Run(x_1, x_2, x_3, x_4, x_14);
x_16 = lean_ctor_get(x_15, 0);
lean_inc(x_16);
x_17 = lean_ctor_get(x_15, 1);
lean_inc(x_17);
lean_dec_ref(x_15);
x_18 = 65521;
x_19 = lean_usize_of_nat(x_14);
x_20 = lean_usize_add(x_2, x_19);
x_21 = lean_unbox_uint32(x_16);
lean_dec(x_16);
x_22 = lean_uint32_mod(x_21, x_18);
x_23 = lean_unbox_uint32(x_17);
lean_dec(x_17);
x_24 = lean_uint32_mod(x_23, x_18);
x_25 = lean_nat_sub(x_13, x_14);
lean_dec(x_14);
lean_dec(x_13);
x_2 = x_20;
x_3 = x_22;
x_4 = x_24;
x_5 = x_25;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Chunks___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
size_t x_6; uint32_t x_7; uint32_t x_8; uint32_t x_9; lean_object* x_10; 
x_6 = lean_unbox_usize(x_2);
lean_dec(x_2);
x_7 = lean_unbox_uint32(x_3);
lean_dec(x_3);
x_8 = lean_unbox_uint32(x_4);
lean_dec(x_4);
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Chunks(x_1, x_6, x_7, x_8, x_5);
lean_dec_ref(x_1);
x_10 = lean_box_uint32(x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; uint8_t x_5; 
x_4 = lean_unsigned_to_nat(0u);
x_5 = lean_nat_dec_eq(x_1, x_4);
if (x_5 == 1)
{
lean_object* x_6; lean_object* x_7; 
lean_dec(x_3);
x_6 = lean_box(0);
x_7 = lean_apply_1(x_2, x_6);
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
lean_dec(x_2);
x_8 = lean_unsigned_to_nat(1u);
x_9 = lean_nat_sub(x_1, x_8);
x_10 = lean_apply_1(x_3, x_9);
return x_10;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___redArg(x_1, x_2, x_3);
lean_dec(x_1);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___redArg(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Run_match__1_splitter(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Chunks_match__1_splitter___redArg(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
lean_dec_ref(x_1);
x_5 = lean_apply_2(x_2, x_3, x_4);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Chunks_match__1_splitter(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_Decoder_0__LeanBdiff_Vcdiff_Decoder_adler32Chunks_match__1_splitter___redArg(x_2, x_3);
return x_4;
}
}
LEAN_EXPORT uint32_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32(lean_object* x_1) {
_start:
{
size_t x_2; uint32_t x_3; uint32_t x_4; lean_object* x_5; uint32_t x_6; 
x_2 = 0;
x_3 = 1;
x_4 = 0;
x_5 = lean_byte_array_size(x_1);
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_adler32Chunks(x_1, x_2, x_3, x_4, x_5);
return x_6;
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; uint8_t x_6; uint8_t x_7; lean_object* x_8; uint8_t x_9; uint8_t x_10; lean_object* x_30; uint8_t x_31; lean_object* x_32; uint8_t x_33; uint8_t x_34; lean_object* x_45; lean_object* x_46; uint8_t x_47; uint8_t x_48; uint8_t x_59; lean_object* x_71; uint8_t x_72; 
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
x_11 = lean_nat_add(x_8, x_5);
lean_dec(x_8);
if (lean_is_scalar(x_4)) {
 x_12 = lean_alloc_ctor(0, 2, 0);
} else {
 x_12 = x_4;
}
lean_ctor_set(x_12, 0, x_2);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_uint8_to_uint32(x_7);
x_14 = 24;
x_15 = lean_uint32_shift_left(x_13, x_14);
x_16 = lean_uint8_to_uint32(x_9);
x_17 = 16;
x_18 = lean_uint32_shift_left(x_16, x_17);
x_19 = lean_uint32_lor(x_15, x_18);
x_20 = lean_uint8_to_uint32(x_6);
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
x_35 = lean_nat_add(x_32, x_30);
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
x_5 = x_30;
x_6 = x_34;
x_7 = x_31;
x_8 = x_35;
x_9 = x_33;
x_10 = x_42;
goto block_29;
}
else
{
uint8_t x_43; 
x_43 = lean_byte_array_fget(x_2, x_35);
x_5 = x_30;
x_6 = x_34;
x_7 = x_31;
x_8 = x_35;
x_9 = x_33;
x_10 = x_43;
goto block_29;
}
}
}
block_58:
{
lean_object* x_49; lean_object* x_50; uint8_t x_51; 
x_49 = lean_nat_add(x_46, x_45);
lean_dec(x_46);
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
x_30 = x_45;
x_31 = x_47;
x_32 = x_49;
x_33 = x_48;
x_34 = x_56;
goto block_44;
}
else
{
uint8_t x_57; 
x_57 = lean_byte_array_fget(x_2, x_49);
x_30 = x_45;
x_31 = x_47;
x_32 = x_49;
x_33 = x_48;
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
x_45 = x_60;
x_46 = x_61;
x_47 = x_59;
x_48 = x_68;
goto block_58;
}
else
{
uint8_t x_69; 
x_69 = lean_byte_array_fget(x_2, x_61);
x_45 = x_60;
x_46 = x_61;
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
uint8_t x_2; lean_object* x_3; lean_object* x_4; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_63; lean_object* x_64; uint8_t x_65; 
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
x_13 = x_70;
x_14 = x_74;
x_15 = x_75;
x_16 = x_81;
goto block_62;
}
else
{
uint8_t x_82; 
x_82 = lean_byte_array_fget(x_9, x_75);
x_13 = x_70;
x_14 = x_74;
x_15 = x_75;
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
x_19 = lean_uint8_dec_eq(x_18, x_13);
if (x_19 == 0)
{
lean_object* x_20; lean_object* x_21; 
lean_dec(x_15);
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
x_24 = lean_uint8_dec_eq(x_23, x_13);
if (x_24 == 0)
{
lean_object* x_25; 
lean_dec(x_15);
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
x_28 = lean_uint8_dec_eq(x_27, x_13);
if (x_28 == 0)
{
lean_object* x_29; 
lean_dec(x_15);
lean_dec(x_11);
lean_dec_ref(x_9);
x_29 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5));
return x_29;
}
else
{
lean_object* x_30; uint8_t x_31; uint8_t x_32; uint8_t x_33; 
x_30 = lean_nat_add(x_15, x_14);
lean_dec(x_15);
x_31 = 4;
x_32 = lean_uint8_land(x_16, x_31);
x_33 = lean_uint8_dec_eq(x_32, x_13);
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
lean_object* x_2; uint8_t x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_50; uint8_t x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; uint8_t x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_144; lean_object* x_145; uint8_t x_146; lean_object* x_184; uint8_t x_185; 
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
x_14 = lean_nat_add(x_13, x_8);
lean_dec(x_8);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_17 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_17;
}
else
{
lean_object* x_18; uint8_t x_19; 
x_18 = lean_nat_add(x_14, x_5);
lean_dec(x_5);
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
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_20 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_20;
}
else
{
lean_object* x_21; uint8_t x_22; 
x_21 = lean_nat_add(x_18, x_6);
lean_dec(x_6);
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
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
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
lean_ctor_set(x_27, 0, x_7);
lean_ctor_set(x_27, 1, x_4);
lean_ctor_set(x_27, 2, x_2);
lean_ctor_set(x_27, 3, x_24);
lean_ctor_set(x_27, 4, x_25);
lean_ctor_set(x_27, 5, x_26);
lean_ctor_set(x_27, 6, x_9);
lean_ctor_set_uint8(x_27, sizeof(void*)*7, x_3);
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
x_32 = lean_nat_add(x_31, x_8);
lean_dec(x_8);
x_33 = lean_byte_array_size(x_30);
x_34 = lean_nat_dec_le(x_32, x_33);
if (x_34 == 0)
{
lean_object* x_35; 
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_30);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_5);
lean_dec(x_4);
lean_dec(x_2);
x_35 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_35;
}
else
{
lean_object* x_36; uint8_t x_37; 
x_36 = lean_nat_add(x_32, x_5);
lean_dec(x_5);
x_37 = lean_nat_dec_le(x_36, x_33);
if (x_37 == 0)
{
lean_object* x_38; 
lean_dec(x_36);
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_30);
lean_dec(x_9);
lean_dec(x_7);
lean_dec(x_6);
lean_dec(x_4);
lean_dec(x_2);
x_38 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_38;
}
else
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_nat_add(x_36, x_6);
lean_dec(x_6);
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
lean_dec(x_7);
lean_dec(x_4);
lean_dec(x_2);
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
lean_ctor_set(x_46, 0, x_7);
lean_ctor_set(x_46, 1, x_4);
lean_ctor_set(x_46, 2, x_2);
lean_ctor_set(x_46, 3, x_42);
lean_ctor_set(x_46, 4, x_43);
lean_ctor_set(x_46, 5, x_44);
lean_ctor_set(x_46, 6, x_9);
lean_ctor_set_uint8(x_46, sizeof(void*)*7, x_3);
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
lean_dec_ref(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_50);
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
lean_dec_ref(x_54);
lean_dec(x_53);
lean_dec(x_52);
lean_dec(x_50);
x_69 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5));
return x_69;
}
else
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_70 = lean_unsigned_to_nat(1u);
x_71 = lean_nat_add(x_53, x_70);
lean_dec(x_53);
lean_inc(x_57);
lean_inc(x_50);
x_72 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_54, x_71, x_50, x_57);
if (lean_obj_tag(x_72) == 0)
{
uint8_t x_73; 
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_50);
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
lean_inc(x_50);
x_81 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_79, x_80, x_50, x_57);
if (lean_obj_tag(x_81) == 0)
{
uint8_t x_82; 
lean_dec(x_78);
lean_dec(x_57);
lean_dec(x_56);
lean_dec(x_55);
lean_dec(x_52);
lean_dec(x_50);
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
x_90 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_88, x_89, x_50, x_57);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
lean_dec(x_87);
lean_dec(x_78);
lean_dec(x_56);
lean_dec(x_55);
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
x_97 = lean_uint8_land(x_51, x_65);
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
lean_dec(x_55);
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
x_2 = x_52;
x_3 = x_51;
x_4 = x_55;
x_5 = x_87;
x_6 = x_95;
x_7 = x_56;
x_8 = x_78;
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
x_2 = x_52;
x_3 = x_51;
x_4 = x_55;
x_5 = x_87;
x_6 = x_95;
x_7 = x_56;
x_8 = x_78;
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
x_2 = x_52;
x_3 = x_51;
x_4 = x_55;
x_5 = x_87;
x_6 = x_95;
x_7 = x_56;
x_8 = x_78;
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
x_50 = x_116;
x_51 = x_111;
x_52 = x_132;
x_53 = x_134;
x_54 = x_133;
x_55 = x_113;
x_56 = x_112;
x_57 = x_117;
x_58 = x_141;
goto block_110;
}
else
{
uint8_t x_142; 
x_142 = lean_byte_array_fget(x_133, x_134);
x_50 = x_116;
x_51 = x_111;
x_52 = x_132;
x_53 = x_134;
x_54 = x_133;
x_55 = x_113;
x_56 = x_112;
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
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_instInhabitedUInt32;
x_2 = lean_box_uint32(x_1);
return x_2;
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
uint8_t x_137; lean_object* x_138; lean_object* x_139; uint32_t x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; uint8_t x_157; 
lean_dec(x_68);
x_137 = lean_ctor_get_uint8(x_67, 0);
lean_dec_ref(x_67);
x_138 = lean_uint8_to_nat(x_137);
x_139 = lean_unsigned_to_nat(0u);
x_157 = lean_nat_dec_eq(x_138, x_139);
if (x_157 == 0)
{
lean_object* x_158; uint8_t x_159; 
x_158 = lean_unsigned_to_nat(1u);
x_159 = lean_nat_dec_eq(x_138, x_158);
if (x_159 == 0)
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; 
x_160 = lean_ctor_get(x_7, 0);
lean_inc(x_160);
x_161 = lean_ctor_get(x_7, 1);
lean_inc(x_161);
x_162 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_162);
x_163 = lean_ctor_get(x_7, 3);
lean_inc(x_163);
x_164 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_164);
x_165 = lean_unsigned_to_nat(2u);
x_166 = lean_nat_add(x_165, x_160);
x_167 = lean_nat_dec_lt(x_138, x_166);
if (x_167 == 0)
{
lean_object* x_168; uint8_t x_169; 
x_168 = lean_nat_add(x_166, x_161);
lean_dec(x_166);
x_169 = lean_nat_dec_lt(x_138, x_168);
lean_dec(x_168);
if (x_169 == 0)
{
lean_object* x_170; lean_object* x_171; 
lean_dec_ref(x_164);
lean_dec(x_163);
lean_dec_ref(x_162);
lean_dec(x_161);
lean_dec(x_160);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_170 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_170, 0, x_138);
x_171 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_171, 0, x_170);
return x_171;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; uint8_t x_175; lean_object* x_206; uint8_t x_207; 
x_172 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_172);
x_173 = lean_ctor_get(x_6, 1);
lean_inc(x_173);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_174 = x_6;
} else {
 lean_dec_ref(x_6);
 x_174 = lean_box(0);
}
x_206 = lean_byte_array_size(x_172);
x_207 = lean_nat_dec_lt(x_173, x_206);
if (x_207 == 0)
{
lean_object* x_208; 
lean_dec(x_174);
lean_dec(x_173);
lean_dec_ref(x_172);
lean_dec_ref(x_164);
lean_dec(x_163);
lean_dec_ref(x_162);
lean_dec(x_161);
lean_dec(x_160);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_208 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_208;
}
else
{
if (x_207 == 0)
{
uint8_t x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; 
x_209 = l_instInhabitedUInt8;
x_210 = lean_box(x_209);
x_211 = l_outOfBounds___redArg(x_210);
x_212 = lean_unbox(x_211);
lean_dec(x_211);
x_175 = x_212;
goto block_205;
}
else
{
uint8_t x_213; 
x_213 = lean_byte_array_fget(x_172, x_173);
x_175 = x_213;
goto block_205;
}
}
block_205:
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; uint32_t x_186; lean_object* x_187; uint32_t x_188; uint8_t x_189; 
x_176 = lean_nat_add(x_173, x_158);
lean_dec(x_173);
if (lean_is_scalar(x_174)) {
 x_177 = lean_alloc_ctor(0, 2, 0);
} else {
 x_177 = x_174;
}
lean_ctor_set(x_177, 0, x_172);
lean_ctor_set(x_177, 1, x_176);
x_178 = lean_nat_sub(x_138, x_165);
x_179 = lean_nat_sub(x_178, x_160);
lean_dec(x_178);
x_180 = lean_unsigned_to_nat(256u);
x_181 = lean_nat_mul(x_179, x_180);
lean_dec(x_179);
x_182 = lean_uint8_to_nat(x_175);
x_183 = lean_nat_add(x_181, x_182);
lean_dec(x_181);
x_184 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_185 = lean_array_get_borrowed(x_184, x_164, x_183);
lean_dec(x_183);
x_186 = lean_unbox_uint32(x_185);
x_187 = lean_uint32_to_nat(x_186);
x_188 = lean_uint32_of_nat(x_187);
x_189 = lean_nat_dec_lt(x_139, x_160);
if (x_189 == 0)
{
x_140 = x_188;
x_141 = x_187;
x_142 = x_177;
x_143 = x_180;
x_144 = x_7;
x_145 = x_160;
x_146 = x_161;
x_147 = x_162;
x_148 = x_163;
x_149 = x_164;
goto block_156;
}
else
{
uint8_t x_190; 
x_190 = !lean_is_exclusive(x_7);
if (x_190 == 0)
{
lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; 
x_191 = lean_ctor_get(x_7, 4);
lean_dec(x_191);
x_192 = lean_ctor_get(x_7, 3);
lean_dec(x_192);
x_193 = lean_ctor_get(x_7, 2);
lean_dec(x_193);
x_194 = lean_ctor_get(x_7, 1);
lean_dec(x_194);
x_195 = lean_ctor_get(x_7, 0);
lean_dec(x_195);
x_196 = lean_box_uint32(x_188);
x_197 = lean_array_set(x_162, x_163, x_196);
x_198 = lean_nat_add(x_163, x_158);
lean_dec(x_163);
x_199 = lean_nat_mod(x_198, x_160);
lean_dec(x_198);
lean_inc_ref(x_164);
lean_inc(x_199);
lean_inc_ref(x_197);
lean_inc(x_161);
lean_inc(x_160);
lean_ctor_set(x_7, 3, x_199);
lean_ctor_set(x_7, 2, x_197);
x_140 = x_188;
x_141 = x_187;
x_142 = x_177;
x_143 = x_180;
x_144 = x_7;
x_145 = x_160;
x_146 = x_161;
x_147 = x_197;
x_148 = x_199;
x_149 = x_164;
goto block_156;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec(x_7);
x_200 = lean_box_uint32(x_188);
x_201 = lean_array_set(x_162, x_163, x_200);
x_202 = lean_nat_add(x_163, x_158);
lean_dec(x_163);
x_203 = lean_nat_mod(x_202, x_160);
lean_dec(x_202);
lean_inc_ref(x_164);
lean_inc(x_203);
lean_inc_ref(x_201);
lean_inc(x_161);
lean_inc(x_160);
x_204 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_204, 0, x_160);
lean_ctor_set(x_204, 1, x_161);
lean_ctor_set(x_204, 2, x_201);
lean_ctor_set(x_204, 3, x_203);
lean_ctor_set(x_204, 4, x_164);
x_140 = x_188;
x_141 = x_187;
x_142 = x_177;
x_143 = x_180;
x_144 = x_204;
x_145 = x_160;
x_146 = x_161;
x_147 = x_201;
x_148 = x_203;
x_149 = x_164;
goto block_156;
}
}
}
}
}
else
{
lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; 
lean_dec(x_166);
x_214 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_214);
x_215 = lean_ctor_get(x_6, 1);
lean_inc(x_215);
lean_dec_ref(x_6);
x_216 = lean_unsigned_to_nat(5u);
x_217 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_214, x_215, x_139, x_216);
if (lean_obj_tag(x_217) == 0)
{
uint8_t x_218; 
lean_dec_ref(x_164);
lean_dec(x_163);
lean_dec_ref(x_162);
lean_dec(x_161);
lean_dec(x_160);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_218 = !lean_is_exclusive(x_217);
if (x_218 == 0)
{
return x_217;
}
else
{
lean_object* x_219; lean_object* x_220; 
x_219 = lean_ctor_get(x_217, 0);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_220, 0, x_219);
return x_220;
}
}
else
{
lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; uint32_t x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; uint32_t x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; uint8_t x_249; 
x_221 = lean_ctor_get(x_217, 0);
lean_inc(x_221);
lean_dec_ref(x_217);
x_222 = lean_ctor_get(x_221, 0);
lean_inc(x_222);
x_223 = lean_ctor_get(x_221, 1);
lean_inc(x_223);
if (lean_is_exclusive(x_221)) {
 lean_ctor_release(x_221, 0);
 lean_ctor_release(x_221, 1);
 x_224 = x_221;
} else {
 lean_dec_ref(x_221);
 x_224 = lean_box(0);
}
x_225 = lean_nat_sub(x_138, x_165);
x_226 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_227 = lean_array_get_borrowed(x_226, x_162, x_225);
lean_dec(x_225);
x_228 = lean_unbox_uint32(x_227);
x_229 = lean_uint32_to_nat(x_228);
x_230 = lean_nat_add(x_229, x_222);
lean_dec(x_222);
lean_dec(x_229);
x_234 = lean_uint32_of_nat(x_230);
x_249 = lean_nat_dec_lt(x_139, x_160);
if (x_249 == 0)
{
x_235 = x_7;
x_236 = x_160;
x_237 = x_161;
x_238 = x_162;
x_239 = x_163;
x_240 = x_164;
goto block_248;
}
else
{
uint8_t x_250; 
x_250 = !lean_is_exclusive(x_7);
if (x_250 == 0)
{
lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; 
x_251 = lean_ctor_get(x_7, 4);
lean_dec(x_251);
x_252 = lean_ctor_get(x_7, 3);
lean_dec(x_252);
x_253 = lean_ctor_get(x_7, 2);
lean_dec(x_253);
x_254 = lean_ctor_get(x_7, 1);
lean_dec(x_254);
x_255 = lean_ctor_get(x_7, 0);
lean_dec(x_255);
x_256 = lean_box_uint32(x_234);
x_257 = lean_array_set(x_162, x_163, x_256);
x_258 = lean_nat_add(x_163, x_158);
lean_dec(x_163);
x_259 = lean_nat_mod(x_258, x_160);
lean_dec(x_258);
lean_inc_ref(x_164);
lean_inc(x_259);
lean_inc_ref(x_257);
lean_inc(x_161);
lean_inc(x_160);
lean_ctor_set(x_7, 3, x_259);
lean_ctor_set(x_7, 2, x_257);
x_235 = x_7;
x_236 = x_160;
x_237 = x_161;
x_238 = x_257;
x_239 = x_259;
x_240 = x_164;
goto block_248;
}
else
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; 
lean_dec(x_7);
x_260 = lean_box_uint32(x_234);
x_261 = lean_array_set(x_162, x_163, x_260);
x_262 = lean_nat_add(x_163, x_158);
lean_dec(x_163);
x_263 = lean_nat_mod(x_262, x_160);
lean_dec(x_262);
lean_inc_ref(x_164);
lean_inc(x_263);
lean_inc_ref(x_261);
lean_inc(x_161);
lean_inc(x_160);
x_264 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_264, 0, x_160);
lean_ctor_set(x_264, 1, x_161);
lean_ctor_set(x_264, 2, x_261);
lean_ctor_set(x_264, 3, x_263);
lean_ctor_set(x_264, 4, x_164);
x_235 = x_264;
x_236 = x_160;
x_237 = x_161;
x_238 = x_261;
x_239 = x_263;
x_240 = x_164;
goto block_248;
}
}
block_233:
{
lean_object* x_232; 
if (lean_is_scalar(x_224)) {
 x_232 = lean_alloc_ctor(0, 2, 0);
} else {
 x_232 = x_224;
}
lean_ctor_set(x_232, 0, x_223);
lean_ctor_set(x_232, 1, x_231);
x_15 = x_230;
x_16 = x_232;
goto block_61;
}
block_248:
{
uint8_t x_241; 
x_241 = lean_nat_dec_lt(x_139, x_237);
if (x_241 == 0)
{
lean_dec_ref(x_240);
lean_dec(x_239);
lean_dec_ref(x_238);
lean_dec(x_237);
lean_dec(x_236);
x_231 = x_235;
goto block_233;
}
else
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; 
lean_dec_ref(x_235);
x_242 = lean_unsigned_to_nat(256u);
x_243 = lean_nat_mul(x_237, x_242);
x_244 = lean_nat_mod(x_230, x_243);
lean_dec(x_243);
x_245 = lean_box_uint32(x_234);
x_246 = lean_array_set(x_240, x_244, x_245);
lean_dec(x_244);
x_247 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_247, 0, x_236);
lean_ctor_set(x_247, 1, x_237);
lean_ctor_set(x_247, 2, x_238);
lean_ctor_set(x_247, 3, x_239);
lean_ctor_set(x_247, 4, x_246);
x_231 = x_247;
goto block_233;
}
}
}
}
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; 
x_265 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_265);
x_266 = lean_ctor_get(x_6, 1);
lean_inc(x_266);
lean_dec_ref(x_6);
x_267 = lean_unsigned_to_nat(5u);
x_268 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_265, x_266, x_139, x_267);
if (lean_obj_tag(x_268) == 0)
{
uint8_t x_269; 
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_269 = !lean_is_exclusive(x_268);
if (x_269 == 0)
{
return x_268;
}
else
{
lean_object* x_270; lean_object* x_271; 
x_270 = lean_ctor_get(x_268, 0);
lean_inc(x_270);
lean_dec(x_268);
x_271 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_271, 0, x_270);
return x_271;
}
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; uint32_t x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; uint8_t x_300; 
x_272 = lean_ctor_get(x_268, 0);
lean_inc(x_272);
lean_dec_ref(x_268);
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_272, 1);
lean_inc(x_274);
if (lean_is_exclusive(x_272)) {
 lean_ctor_release(x_272, 0);
 lean_ctor_release(x_272, 1);
 x_275 = x_272;
} else {
 lean_dec_ref(x_272);
 x_275 = lean_box(0);
}
x_276 = lean_ctor_get(x_7, 0);
lean_inc(x_276);
x_277 = lean_ctor_get(x_7, 1);
lean_inc(x_277);
x_278 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_278);
x_279 = lean_ctor_get(x_7, 3);
lean_inc(x_279);
x_280 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_280);
x_281 = lean_nat_sub(x_8, x_273);
lean_dec(x_273);
x_285 = lean_uint32_of_nat(x_281);
x_300 = lean_nat_dec_lt(x_139, x_276);
if (x_300 == 0)
{
x_286 = x_7;
x_287 = x_276;
x_288 = x_277;
x_289 = x_278;
x_290 = x_279;
x_291 = x_280;
goto block_299;
}
else
{
uint8_t x_301; 
x_301 = !lean_is_exclusive(x_7);
if (x_301 == 0)
{
lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; 
x_302 = lean_ctor_get(x_7, 4);
lean_dec(x_302);
x_303 = lean_ctor_get(x_7, 3);
lean_dec(x_303);
x_304 = lean_ctor_get(x_7, 2);
lean_dec(x_304);
x_305 = lean_ctor_get(x_7, 1);
lean_dec(x_305);
x_306 = lean_ctor_get(x_7, 0);
lean_dec(x_306);
x_307 = lean_box_uint32(x_285);
x_308 = lean_array_set(x_278, x_279, x_307);
x_309 = lean_nat_add(x_279, x_158);
lean_dec(x_279);
x_310 = lean_nat_mod(x_309, x_276);
lean_dec(x_309);
lean_inc_ref(x_280);
lean_inc(x_310);
lean_inc_ref(x_308);
lean_inc(x_277);
lean_inc(x_276);
lean_ctor_set(x_7, 3, x_310);
lean_ctor_set(x_7, 2, x_308);
x_286 = x_7;
x_287 = x_276;
x_288 = x_277;
x_289 = x_308;
x_290 = x_310;
x_291 = x_280;
goto block_299;
}
else
{
lean_object* x_311; lean_object* x_312; lean_object* x_313; lean_object* x_314; lean_object* x_315; 
lean_dec(x_7);
x_311 = lean_box_uint32(x_285);
x_312 = lean_array_set(x_278, x_279, x_311);
x_313 = lean_nat_add(x_279, x_158);
lean_dec(x_279);
x_314 = lean_nat_mod(x_313, x_276);
lean_dec(x_313);
lean_inc_ref(x_280);
lean_inc(x_314);
lean_inc_ref(x_312);
lean_inc(x_277);
lean_inc(x_276);
x_315 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_315, 0, x_276);
lean_ctor_set(x_315, 1, x_277);
lean_ctor_set(x_315, 2, x_312);
lean_ctor_set(x_315, 3, x_314);
lean_ctor_set(x_315, 4, x_280);
x_286 = x_315;
x_287 = x_276;
x_288 = x_277;
x_289 = x_312;
x_290 = x_314;
x_291 = x_280;
goto block_299;
}
}
block_284:
{
lean_object* x_283; 
if (lean_is_scalar(x_275)) {
 x_283 = lean_alloc_ctor(0, 2, 0);
} else {
 x_283 = x_275;
}
lean_ctor_set(x_283, 0, x_274);
lean_ctor_set(x_283, 1, x_282);
x_15 = x_281;
x_16 = x_283;
goto block_61;
}
block_299:
{
uint8_t x_292; 
x_292 = lean_nat_dec_lt(x_139, x_288);
if (x_292 == 0)
{
lean_dec_ref(x_291);
lean_dec(x_290);
lean_dec_ref(x_289);
lean_dec(x_288);
lean_dec(x_287);
x_282 = x_286;
goto block_284;
}
else
{
lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
lean_dec_ref(x_286);
x_293 = lean_unsigned_to_nat(256u);
x_294 = lean_nat_mul(x_288, x_293);
x_295 = lean_nat_mod(x_281, x_294);
lean_dec(x_294);
x_296 = lean_box_uint32(x_285);
x_297 = lean_array_set(x_291, x_295, x_296);
lean_dec(x_295);
x_298 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_298, 0, x_287);
lean_ctor_set(x_298, 1, x_288);
lean_ctor_set(x_298, 2, x_289);
lean_ctor_set(x_298, 3, x_290);
lean_ctor_set(x_298, 4, x_297);
x_282 = x_298;
goto block_284;
}
}
}
}
}
else
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_316 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_316);
x_317 = lean_ctor_get(x_6, 1);
lean_inc(x_317);
lean_dec_ref(x_6);
x_318 = lean_unsigned_to_nat(5u);
x_319 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_316, x_317, x_139, x_318);
if (lean_obj_tag(x_319) == 0)
{
uint8_t x_320; 
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_320 = !lean_is_exclusive(x_319);
if (x_320 == 0)
{
return x_319;
}
else
{
lean_object* x_321; lean_object* x_322; 
x_321 = lean_ctor_get(x_319, 0);
lean_inc(x_321);
lean_dec(x_319);
x_322 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_322, 0, x_321);
return x_322;
}
}
else
{
lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; lean_object* x_327; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; uint32_t x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; uint8_t x_350; 
x_323 = lean_ctor_get(x_319, 0);
lean_inc(x_323);
lean_dec_ref(x_319);
x_324 = lean_ctor_get(x_323, 0);
lean_inc(x_324);
x_325 = lean_ctor_get(x_323, 1);
lean_inc(x_325);
if (lean_is_exclusive(x_323)) {
 lean_ctor_release(x_323, 0);
 lean_ctor_release(x_323, 1);
 x_326 = x_323;
} else {
 lean_dec_ref(x_323);
 x_326 = lean_box(0);
}
x_330 = lean_ctor_get(x_7, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_7, 1);
lean_inc(x_331);
x_332 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_332);
x_333 = lean_ctor_get(x_7, 3);
lean_inc(x_333);
x_334 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_334);
x_335 = lean_uint32_of_nat(x_324);
x_350 = lean_nat_dec_lt(x_139, x_330);
if (x_350 == 0)
{
x_336 = x_7;
x_337 = x_330;
x_338 = x_331;
x_339 = x_332;
x_340 = x_333;
x_341 = x_334;
goto block_349;
}
else
{
uint8_t x_351; 
x_351 = !lean_is_exclusive(x_7);
if (x_351 == 0)
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; 
x_352 = lean_ctor_get(x_7, 4);
lean_dec(x_352);
x_353 = lean_ctor_get(x_7, 3);
lean_dec(x_353);
x_354 = lean_ctor_get(x_7, 2);
lean_dec(x_354);
x_355 = lean_ctor_get(x_7, 1);
lean_dec(x_355);
x_356 = lean_ctor_get(x_7, 0);
lean_dec(x_356);
x_357 = lean_box_uint32(x_335);
x_358 = lean_array_set(x_332, x_333, x_357);
x_359 = lean_unsigned_to_nat(1u);
x_360 = lean_nat_add(x_333, x_359);
lean_dec(x_333);
x_361 = lean_nat_mod(x_360, x_330);
lean_dec(x_360);
lean_inc_ref(x_334);
lean_inc(x_361);
lean_inc_ref(x_358);
lean_inc(x_331);
lean_inc(x_330);
lean_ctor_set(x_7, 3, x_361);
lean_ctor_set(x_7, 2, x_358);
x_336 = x_7;
x_337 = x_330;
x_338 = x_331;
x_339 = x_358;
x_340 = x_361;
x_341 = x_334;
goto block_349;
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
lean_dec(x_7);
x_362 = lean_box_uint32(x_335);
x_363 = lean_array_set(x_332, x_333, x_362);
x_364 = lean_unsigned_to_nat(1u);
x_365 = lean_nat_add(x_333, x_364);
lean_dec(x_333);
x_366 = lean_nat_mod(x_365, x_330);
lean_dec(x_365);
lean_inc_ref(x_334);
lean_inc(x_366);
lean_inc_ref(x_363);
lean_inc(x_331);
lean_inc(x_330);
x_367 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_367, 0, x_330);
lean_ctor_set(x_367, 1, x_331);
lean_ctor_set(x_367, 2, x_363);
lean_ctor_set(x_367, 3, x_366);
lean_ctor_set(x_367, 4, x_334);
x_336 = x_367;
x_337 = x_330;
x_338 = x_331;
x_339 = x_363;
x_340 = x_366;
x_341 = x_334;
goto block_349;
}
}
block_329:
{
lean_object* x_328; 
if (lean_is_scalar(x_326)) {
 x_328 = lean_alloc_ctor(0, 2, 0);
} else {
 x_328 = x_326;
}
lean_ctor_set(x_328, 0, x_325);
lean_ctor_set(x_328, 1, x_327);
x_15 = x_324;
x_16 = x_328;
goto block_61;
}
block_349:
{
uint8_t x_342; 
x_342 = lean_nat_dec_lt(x_139, x_338);
if (x_342 == 0)
{
lean_dec_ref(x_341);
lean_dec(x_340);
lean_dec_ref(x_339);
lean_dec(x_338);
lean_dec(x_337);
x_327 = x_336;
goto block_329;
}
else
{
lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; 
lean_dec_ref(x_336);
x_343 = lean_unsigned_to_nat(256u);
x_344 = lean_nat_mul(x_338, x_343);
x_345 = lean_nat_mod(x_324, x_344);
lean_dec(x_344);
x_346 = lean_box_uint32(x_335);
x_347 = lean_array_set(x_341, x_345, x_346);
lean_dec(x_345);
x_348 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_348, 0, x_337);
lean_ctor_set(x_348, 1, x_338);
lean_ctor_set(x_348, 2, x_339);
lean_ctor_set(x_348, 3, x_340);
lean_ctor_set(x_348, 4, x_347);
x_327 = x_348;
goto block_329;
}
}
}
}
block_156:
{
uint8_t x_150; 
x_150 = lean_nat_dec_lt(x_139, x_146);
if (x_150 == 0)
{
lean_dec_ref(x_149);
lean_dec(x_148);
lean_dec_ref(x_147);
lean_dec(x_146);
lean_dec(x_145);
x_62 = x_141;
x_63 = x_142;
x_64 = x_144;
goto block_66;
}
else
{
lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; 
lean_dec_ref(x_144);
x_151 = lean_nat_mul(x_146, x_143);
x_152 = lean_nat_mod(x_141, x_151);
lean_dec(x_151);
x_153 = lean_box_uint32(x_140);
x_154 = lean_array_set(x_149, x_152, x_153);
lean_dec(x_152);
x_155 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_155, 0, x_145);
lean_ctor_set(x_155, 1, x_146);
lean_ctor_set(x_155, 2, x_147);
lean_ctor_set(x_155, 3, x_148);
lean_ctor_set(x_155, 4, x_154);
x_62 = x_141;
x_63 = x_142;
x_64 = x_155;
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
lean_ctor_set(x_65, 0, x_63);
lean_ctor_set(x_65, 1, x_64);
x_15 = x_62;
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; uint8_t x_93; uint32_t x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; uint8_t x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; uint8_t x_176; lean_object* x_177; uint32_t x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; uint8_t x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; uint32_t x_213; lean_object* x_214; lean_object* x_215; uint8_t x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; uint8_t x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; uint32_t x_252; lean_object* x_253; uint8_t x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; uint8_t x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; uint8_t x_280; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; uint8_t x_499; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_555; lean_object* x_556; lean_object* x_557; uint8_t x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_606; lean_object* x_607; lean_object* x_608; uint8_t x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_619; lean_object* x_620; lean_object* x_621; uint32_t x_622; lean_object* x_623; uint8_t x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; uint8_t x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; uint32_t x_662; lean_object* x_663; uint8_t x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_684; lean_object* x_685; lean_object* x_686; uint8_t x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_694; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; uint8_t x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; uint32_t x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; uint8_t x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; uint8_t x_741; lean_object* x_742; lean_object* x_743; uint32_t x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; uint8_t x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; uint8_t x_785; lean_object* x_806; lean_object* x_807; lean_object* x_808; uint8_t x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; uint8_t x_815; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_1145; lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; lean_object* x_1149; lean_object* x_1150; lean_object* x_1151; lean_object* x_1152; uint8_t x_1153; uint8_t x_1164; lean_object* x_1180; uint8_t x_1181; 
x_1145 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_1145);
x_1146 = lean_ctor_get(x_3, 1);
lean_inc(x_1146);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1147 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1147 = lean_box(0);
}
x_1180 = lean_byte_array_size(x_1145);
x_1181 = lean_nat_dec_lt(x_1146, x_1180);
if (x_1181 == 0)
{
lean_object* x_1182; 
lean_dec(x_1147);
lean_dec(x_1146);
lean_dec_ref(x_1145);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1182 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1182;
}
else
{
if (x_1181 == 0)
{
uint8_t x_1183; lean_object* x_1184; lean_object* x_1185; uint8_t x_1186; 
x_1183 = l_instInhabitedUInt8;
x_1184 = lean_box(x_1183);
x_1185 = l_outOfBounds___redArg(x_1184);
x_1186 = lean_unbox(x_1185);
lean_dec(x_1185);
x_1164 = x_1186;
goto block_1179;
}
else
{
uint8_t x_1187; 
x_1187 = lean_byte_array_fget(x_1145, x_1146);
x_1164 = x_1187;
goto block_1179;
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
lean_ctor_set(x_18, 0, x_14);
lean_ctor_set(x_18, 1, x_15);
x_7 = x_16;
x_8 = x_17;
x_9 = x_18;
goto block_13;
}
block_70:
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_byte_array_size(x_22);
x_31 = lean_nat_add(x_23, x_30);
x_32 = lean_nat_dec_le(x_31, x_28);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
lean_dec(x_31);
x_33 = lean_nat_add(x_28, x_26);
x_34 = lean_nat_dec_le(x_33, x_23);
if (x_34 == 0)
{
uint8_t x_35; 
lean_dec(x_33);
x_35 = lean_nat_dec_le(x_23, x_28);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_36 = lean_nat_sub(x_23, x_28);
x_37 = lean_nat_sub(x_26, x_36);
lean_dec(x_36);
lean_dec(x_26);
x_38 = l_ByteArray_extract(x_1, x_28, x_23);
lean_dec_ref(x_1);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_byte_array_size(x_38);
x_41 = lean_byte_array_copy_slice(x_38, x_39, x_22, x_30, x_40, x_25);
lean_dec_ref(x_38);
x_42 = lean_byte_array_size(x_41);
x_43 = lean_nat_sub(x_42, x_23);
x_44 = lean_nat_dec_le(x_37, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_23);
x_45 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_39);
lean_ctor_set(x_46, 1, x_37);
lean_ctor_set(x_46, 2, x_24);
x_47 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_45, x_46, x_20, x_41, x_39);
x_14 = x_21;
x_15 = x_29;
x_16 = x_27;
x_17 = x_47;
goto block_19;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_24);
lean_dec_ref(x_20);
x_48 = lean_nat_add(x_23, x_37);
lean_dec(x_37);
x_49 = l_ByteArray_extract(x_41, x_23, x_48);
lean_dec(x_48);
x_50 = lean_byte_array_size(x_49);
x_51 = lean_byte_array_copy_slice(x_49, x_39, x_41, x_42, x_50, x_25);
lean_dec_ref(x_49);
x_14 = x_21;
x_15 = x_29;
x_16 = x_27;
x_17 = x_51;
goto block_19;
}
}
else
{
lean_object* x_52; lean_object* x_53; uint8_t x_54; 
lean_dec_ref(x_20);
lean_dec_ref(x_1);
x_52 = lean_nat_sub(x_28, x_23);
lean_dec(x_23);
lean_dec(x_28);
x_53 = lean_nat_add(x_52, x_26);
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
lean_ctor_set(x_58, 1, x_26);
lean_ctor_set(x_58, 2, x_24);
x_59 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_56, x_58, x_55, x_22, x_57);
x_14 = x_21;
x_15 = x_29;
x_16 = x_27;
x_17 = x_59;
goto block_19;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_26);
lean_dec(x_24);
x_60 = l_ByteArray_extract(x_22, x_52, x_53);
lean_dec(x_53);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_byte_array_size(x_60);
x_63 = lean_byte_array_copy_slice(x_60, x_61, x_22, x_30, x_62, x_25);
lean_dec_ref(x_60);
x_14 = x_21;
x_15 = x_29;
x_16 = x_27;
x_17 = x_63;
goto block_19;
}
}
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; 
lean_dec(x_26);
lean_dec(x_24);
lean_dec(x_23);
lean_dec_ref(x_20);
x_64 = l_ByteArray_extract(x_1, x_28, x_33);
lean_dec(x_33);
lean_dec_ref(x_1);
x_65 = lean_unsigned_to_nat(0u);
x_66 = lean_byte_array_size(x_64);
x_67 = lean_byte_array_copy_slice(x_64, x_65, x_22, x_30, x_66, x_25);
lean_dec_ref(x_64);
x_14 = x_21;
x_15 = x_29;
x_16 = x_27;
x_17 = x_67;
goto block_19;
}
}
else
{
lean_object* x_68; lean_object* x_69; 
lean_dec_ref(x_29);
lean_dec_ref(x_27);
lean_dec(x_24);
lean_dec(x_23);
lean_dec_ref(x_22);
lean_dec_ref(x_21);
lean_dec_ref(x_20);
lean_dec_ref(x_1);
x_68 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_68, 0, x_28);
lean_ctor_set(x_68, 1, x_26);
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
lean_ctor_set(x_82, 0, x_75);
lean_ctor_set(x_82, 1, x_81);
x_20 = x_71;
x_21 = x_72;
x_22 = x_73;
x_23 = x_76;
x_24 = x_78;
x_25 = x_77;
x_26 = x_79;
x_27 = x_80;
x_28 = x_74;
x_29 = x_82;
goto block_70;
}
block_109:
{
uint8_t x_103; 
x_103 = lean_nat_dec_lt(x_91, x_99);
lean_dec(x_91);
if (x_103 == 0)
{
lean_dec_ref(x_102);
lean_dec(x_101);
lean_dec_ref(x_100);
lean_dec(x_99);
lean_dec(x_98);
x_71 = x_84;
x_72 = x_85;
x_73 = x_86;
x_74 = x_89;
x_75 = x_88;
x_76 = x_90;
x_77 = x_93;
x_78 = x_92;
x_79 = x_95;
x_80 = x_96;
x_81 = x_97;
goto block_83;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec_ref(x_97);
x_104 = lean_nat_mul(x_99, x_87);
x_105 = lean_nat_mod(x_89, x_104);
lean_dec(x_104);
x_106 = lean_box_uint32(x_94);
x_107 = lean_array_set(x_102, x_105, x_106);
lean_dec(x_105);
x_108 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_108, 0, x_98);
lean_ctor_set(x_108, 1, x_99);
lean_ctor_set(x_108, 2, x_100);
lean_ctor_set(x_108, 3, x_101);
lean_ctor_set(x_108, 4, x_107);
x_71 = x_84;
x_72 = x_85;
x_73 = x_86;
x_74 = x_89;
x_75 = x_88;
x_76 = x_90;
x_77 = x_93;
x_78 = x_92;
x_79 = x_95;
x_80 = x_96;
x_81 = x_108;
goto block_83;
}
}
block_154:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint32_t x_140; lean_object* x_141; uint32_t x_142; uint8_t x_143; 
x_130 = lean_nat_add(x_124, x_126);
lean_dec(x_124);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_112);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_nat_sub(x_128, x_121);
lean_dec(x_128);
x_133 = lean_nat_sub(x_132, x_125);
lean_dec(x_132);
x_134 = lean_unsigned_to_nat(256u);
x_135 = lean_nat_mul(x_133, x_134);
lean_dec(x_133);
x_136 = lean_uint8_to_nat(x_129);
x_137 = lean_nat_add(x_135, x_136);
lean_dec(x_135);
x_138 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_139 = lean_array_get_borrowed(x_138, x_120, x_137);
lean_dec(x_137);
x_140 = lean_unbox_uint32(x_139);
x_141 = lean_uint32_to_nat(x_140);
x_142 = lean_uint32_of_nat(x_141);
x_143 = lean_nat_dec_lt(x_123, x_125);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_127);
lean_dec(x_125);
lean_dec_ref(x_120);
lean_dec(x_118);
lean_dec_ref(x_114);
x_144 = lean_ctor_get(x_111, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_111, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_111, 2);
lean_inc_ref(x_146);
x_147 = lean_ctor_get(x_111, 3);
lean_inc(x_147);
x_148 = lean_ctor_get(x_111, 4);
lean_inc_ref(x_148);
x_84 = x_110;
x_85 = x_117;
x_86 = x_119;
x_87 = x_134;
x_88 = x_131;
x_89 = x_141;
x_90 = x_122;
x_91 = x_123;
x_92 = x_126;
x_93 = x_113;
x_94 = x_142;
x_95 = x_115;
x_96 = x_116;
x_97 = x_111;
x_98 = x_144;
x_99 = x_145;
x_100 = x_146;
x_101 = x_147;
x_102 = x_148;
goto block_109;
}
else
{
lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; 
lean_dec_ref(x_111);
x_149 = lean_box_uint32(x_142);
x_150 = lean_array_set(x_114, x_118, x_149);
x_151 = lean_nat_add(x_118, x_126);
lean_dec(x_118);
x_152 = lean_nat_mod(x_151, x_125);
lean_dec(x_151);
lean_inc_ref(x_120);
lean_inc(x_152);
lean_inc_ref(x_150);
lean_inc(x_127);
lean_inc(x_125);
x_153 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_153, 0, x_125);
lean_ctor_set(x_153, 1, x_127);
lean_ctor_set(x_153, 2, x_150);
lean_ctor_set(x_153, 3, x_152);
lean_ctor_set(x_153, 4, x_120);
x_84 = x_110;
x_85 = x_117;
x_86 = x_119;
x_87 = x_134;
x_88 = x_131;
x_89 = x_141;
x_90 = x_122;
x_91 = x_123;
x_92 = x_126;
x_93 = x_113;
x_94 = x_142;
x_95 = x_115;
x_96 = x_116;
x_97 = x_153;
x_98 = x_125;
x_99 = x_127;
x_100 = x_150;
x_101 = x_152;
x_102 = x_120;
goto block_109;
}
}
block_167:
{
lean_object* x_166; 
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_159);
lean_ctor_set(x_166, 1, x_165);
x_20 = x_155;
x_21 = x_156;
x_22 = x_157;
x_23 = x_160;
x_24 = x_162;
x_25 = x_161;
x_26 = x_163;
x_27 = x_164;
x_28 = x_158;
x_29 = x_166;
goto block_70;
}
block_193:
{
uint8_t x_186; 
x_186 = lean_nat_dec_lt(x_174, x_182);
lean_dec(x_174);
if (x_186 == 0)
{
lean_dec_ref(x_185);
lean_dec(x_184);
lean_dec_ref(x_183);
lean_dec(x_182);
lean_dec(x_181);
x_155 = x_168;
x_156 = x_169;
x_157 = x_170;
x_158 = x_171;
x_159 = x_172;
x_160 = x_173;
x_161 = x_176;
x_162 = x_175;
x_163 = x_177;
x_164 = x_179;
x_165 = x_180;
goto block_167;
}
else
{
lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; 
lean_dec_ref(x_180);
x_187 = lean_unsigned_to_nat(256u);
x_188 = lean_nat_mul(x_182, x_187);
x_189 = lean_nat_mod(x_171, x_188);
lean_dec(x_188);
x_190 = lean_box_uint32(x_178);
x_191 = lean_array_set(x_185, x_189, x_190);
lean_dec(x_189);
x_192 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_192, 0, x_181);
lean_ctor_set(x_192, 1, x_182);
lean_ctor_set(x_192, 2, x_183);
lean_ctor_set(x_192, 3, x_184);
lean_ctor_set(x_192, 4, x_191);
x_155 = x_168;
x_156 = x_169;
x_157 = x_170;
x_158 = x_171;
x_159 = x_172;
x_160 = x_173;
x_161 = x_176;
x_162 = x_175;
x_163 = x_177;
x_164 = x_179;
x_165 = x_192;
goto block_167;
}
}
block_206:
{
lean_object* x_205; 
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_197);
lean_ctor_set(x_205, 1, x_204);
x_20 = x_194;
x_21 = x_195;
x_22 = x_196;
x_23 = x_198;
x_24 = x_200;
x_25 = x_199;
x_26 = x_202;
x_27 = x_203;
x_28 = x_201;
x_29 = x_205;
goto block_70;
}
block_232:
{
uint8_t x_225; 
x_225 = lean_nat_dec_lt(x_212, x_221);
lean_dec(x_212);
if (x_225 == 0)
{
lean_dec_ref(x_224);
lean_dec(x_223);
lean_dec_ref(x_222);
lean_dec(x_221);
lean_dec(x_220);
x_194 = x_207;
x_195 = x_208;
x_196 = x_209;
x_197 = x_210;
x_198 = x_211;
x_199 = x_216;
x_200 = x_215;
x_201 = x_214;
x_202 = x_217;
x_203 = x_218;
x_204 = x_219;
goto block_206;
}
else
{
lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; 
lean_dec_ref(x_219);
x_226 = lean_unsigned_to_nat(256u);
x_227 = lean_nat_mul(x_221, x_226);
x_228 = lean_nat_mod(x_214, x_227);
lean_dec(x_227);
x_229 = lean_box_uint32(x_213);
x_230 = lean_array_set(x_224, x_228, x_229);
lean_dec(x_228);
x_231 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_231, 0, x_220);
lean_ctor_set(x_231, 1, x_221);
lean_ctor_set(x_231, 2, x_222);
lean_ctor_set(x_231, 3, x_223);
lean_ctor_set(x_231, 4, x_230);
x_194 = x_207;
x_195 = x_208;
x_196 = x_209;
x_197 = x_210;
x_198 = x_211;
x_199 = x_216;
x_200 = x_215;
x_201 = x_214;
x_202 = x_217;
x_203 = x_218;
x_204 = x_231;
goto block_206;
}
}
block_245:
{
lean_object* x_244; 
x_244 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_244, 0, x_235);
lean_ctor_set(x_244, 1, x_243);
x_20 = x_233;
x_21 = x_234;
x_22 = x_236;
x_23 = x_237;
x_24 = x_239;
x_25 = x_238;
x_26 = x_240;
x_27 = x_241;
x_28 = x_242;
x_29 = x_244;
goto block_70;
}
block_271:
{
uint8_t x_264; 
x_264 = lean_nat_dec_lt(x_251, x_260);
lean_dec(x_251);
if (x_264 == 0)
{
lean_dec_ref(x_263);
lean_dec(x_262);
lean_dec_ref(x_261);
lean_dec(x_260);
lean_dec(x_259);
x_233 = x_246;
x_234 = x_248;
x_235 = x_247;
x_236 = x_249;
x_237 = x_250;
x_238 = x_254;
x_239 = x_253;
x_240 = x_255;
x_241 = x_257;
x_242 = x_256;
x_243 = x_258;
goto block_245;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec_ref(x_258);
x_265 = lean_unsigned_to_nat(256u);
x_266 = lean_nat_mul(x_260, x_265);
x_267 = lean_nat_mod(x_256, x_266);
lean_dec(x_266);
x_268 = lean_box_uint32(x_252);
x_269 = lean_array_set(x_263, x_267, x_268);
lean_dec(x_267);
x_270 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_270, 0, x_259);
lean_ctor_set(x_270, 1, x_260);
lean_ctor_set(x_270, 2, x_261);
lean_ctor_set(x_270, 3, x_262);
lean_ctor_set(x_270, 4, x_269);
x_233 = x_246;
x_234 = x_248;
x_235 = x_247;
x_236 = x_249;
x_237 = x_250;
x_238 = x_254;
x_239 = x_253;
x_240 = x_255;
x_241 = x_257;
x_242 = x_256;
x_243 = x_270;
goto block_245;
}
}
block_291:
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_281 = lean_nat_add(x_274, x_277);
lean_dec(x_277);
lean_dec(x_274);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_272);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_box(x_280);
x_284 = lean_mk_array(x_278, x_283);
x_285 = lean_byte_array_mk(x_284);
x_286 = lean_unsigned_to_nat(0u);
x_287 = lean_byte_array_size(x_273);
x_288 = lean_byte_array_size(x_285);
x_289 = lean_byte_array_copy_slice(x_285, x_286, x_273, x_287, x_288, x_276);
lean_dec_ref(x_285);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_282);
lean_ctor_set(x_290, 1, x_275);
x_7 = x_279;
x_8 = x_289;
x_9 = x_290;
goto block_13;
}
block_471:
{
lean_object* x_304; uint8_t x_305; 
x_304 = lean_box(0);
x_305 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_296, x_304);
if (x_305 == 0)
{
switch (lean_obj_tag(x_296)) {
case 0:
{
lean_dec(x_302);
lean_dec(x_300);
lean_dec_ref(x_299);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_295;
x_9 = x_301;
goto block_13;
}
case 1:
{
uint8_t x_306; 
lean_dec_ref(x_301);
lean_dec(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_306 = !lean_is_exclusive(x_293);
if (x_306 == 0)
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; uint8_t x_311; 
x_307 = lean_ctor_get(x_293, 0);
x_308 = lean_ctor_get(x_293, 1);
x_309 = lean_nat_add(x_308, x_302);
lean_dec(x_302);
x_310 = lean_byte_array_size(x_307);
x_311 = lean_nat_dec_le(x_309, x_310);
if (x_311 == 0)
{
lean_object* x_312; 
lean_dec(x_309);
lean_free_object(x_293);
lean_dec(x_308);
lean_dec_ref(x_307);
lean_dec_ref(x_303);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
x_312 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_312;
}
else
{
if (x_311 == 0)
{
lean_object* x_313; 
lean_dec(x_309);
lean_free_object(x_293);
lean_dec(x_308);
lean_dec_ref(x_307);
lean_dec_ref(x_303);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
x_313 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_313;
}
else
{
lean_object* x_314; lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; 
x_314 = l_ByteArray_extract(x_307, x_308, x_309);
lean_ctor_set(x_293, 1, x_309);
x_315 = lean_unsigned_to_nat(0u);
x_316 = lean_byte_array_size(x_295);
x_317 = lean_byte_array_size(x_314);
x_318 = lean_byte_array_copy_slice(x_314, x_315, x_295, x_316, x_317, x_305);
lean_dec_ref(x_314);
x_319 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_319, 0, x_293);
lean_ctor_set(x_319, 1, x_299);
x_7 = x_303;
x_8 = x_318;
x_9 = x_319;
goto block_13;
}
}
}
else
{
lean_object* x_320; lean_object* x_321; lean_object* x_322; lean_object* x_323; uint8_t x_324; 
x_320 = lean_ctor_get(x_293, 0);
x_321 = lean_ctor_get(x_293, 1);
lean_inc(x_321);
lean_inc(x_320);
lean_dec(x_293);
x_322 = lean_nat_add(x_321, x_302);
lean_dec(x_302);
x_323 = lean_byte_array_size(x_320);
x_324 = lean_nat_dec_le(x_322, x_323);
if (x_324 == 0)
{
lean_object* x_325; 
lean_dec(x_322);
lean_dec(x_321);
lean_dec_ref(x_320);
lean_dec_ref(x_303);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
x_325 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_325;
}
else
{
if (x_324 == 0)
{
lean_object* x_326; 
lean_dec(x_322);
lean_dec(x_321);
lean_dec_ref(x_320);
lean_dec_ref(x_303);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
x_326 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_326;
}
else
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; 
x_327 = l_ByteArray_extract(x_320, x_321, x_322);
x_328 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_328, 0, x_320);
lean_ctor_set(x_328, 1, x_322);
x_329 = lean_unsigned_to_nat(0u);
x_330 = lean_byte_array_size(x_295);
x_331 = lean_byte_array_size(x_327);
x_332 = lean_byte_array_copy_slice(x_327, x_329, x_295, x_330, x_331, x_305);
lean_dec_ref(x_327);
x_333 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_333, 0, x_328);
lean_ctor_set(x_333, 1, x_299);
x_7 = x_303;
x_8 = x_332;
x_9 = x_333;
goto block_13;
}
}
}
}
case 2:
{
lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; 
lean_dec_ref(x_301);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_334 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_334);
x_335 = lean_ctor_get(x_293, 1);
lean_inc(x_335);
lean_dec_ref(x_293);
x_336 = lean_byte_array_size(x_334);
x_337 = lean_nat_dec_lt(x_335, x_336);
if (x_337 == 0)
{
lean_object* x_338; 
lean_dec(x_335);
lean_dec_ref(x_334);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec(x_300);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
x_338 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_338;
}
else
{
if (x_337 == 0)
{
uint8_t x_339; lean_object* x_340; lean_object* x_341; uint8_t x_342; 
x_339 = l_instInhabitedUInt8;
x_340 = lean_box(x_339);
x_341 = l_outOfBounds___redArg(x_340);
x_342 = lean_unbox(x_341);
lean_dec(x_341);
x_272 = x_334;
x_273 = x_295;
x_274 = x_335;
x_275 = x_299;
x_276 = x_305;
x_277 = x_300;
x_278 = x_302;
x_279 = x_303;
x_280 = x_342;
goto block_291;
}
else
{
uint8_t x_343; 
x_343 = lean_byte_array_fget(x_334, x_335);
x_272 = x_334;
x_273 = x_295;
x_274 = x_335;
x_275 = x_299;
x_276 = x_305;
x_277 = x_300;
x_278 = x_302;
x_279 = x_303;
x_280 = x_343;
goto block_291;
}
}
}
default: 
{
uint8_t x_344; lean_object* x_345; lean_object* x_346; uint8_t x_347; 
lean_dec_ref(x_301);
lean_dec_ref(x_299);
x_344 = lean_ctor_get_uint8(x_296, 0);
lean_dec_ref(x_296);
x_345 = lean_uint8_to_nat(x_344);
x_346 = lean_unsigned_to_nat(0u);
x_347 = lean_nat_dec_eq(x_345, x_346);
if (x_347 == 0)
{
uint8_t x_348; 
x_348 = lean_nat_dec_eq(x_345, x_300);
if (x_348 == 0)
{
lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; uint8_t x_356; 
x_349 = lean_ctor_get(x_294, 0);
lean_inc(x_349);
x_350 = lean_ctor_get(x_294, 1);
lean_inc(x_350);
x_351 = lean_ctor_get(x_294, 2);
lean_inc_ref(x_351);
x_352 = lean_ctor_get(x_294, 3);
lean_inc(x_352);
x_353 = lean_ctor_get(x_294, 4);
lean_inc_ref(x_353);
x_354 = lean_unsigned_to_nat(2u);
x_355 = lean_nat_add(x_354, x_349);
x_356 = lean_nat_dec_lt(x_345, x_355);
if (x_356 == 0)
{
lean_object* x_357; uint8_t x_358; 
x_357 = lean_nat_add(x_355, x_350);
lean_dec(x_355);
x_358 = lean_nat_dec_lt(x_345, x_357);
lean_dec(x_357);
if (x_358 == 0)
{
lean_object* x_359; lean_object* x_360; 
lean_dec_ref(x_353);
lean_dec(x_352);
lean_dec_ref(x_351);
lean_dec(x_350);
lean_dec(x_349);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec_ref(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_359 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_359, 0, x_345);
x_360 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_360, 0, x_359);
return x_360;
}
else
{
lean_object* x_361; lean_object* x_362; lean_object* x_363; uint8_t x_364; 
x_361 = lean_ctor_get(x_297, 0);
lean_inc_ref(x_361);
x_362 = lean_ctor_get(x_297, 1);
lean_inc(x_362);
lean_dec_ref(x_297);
x_363 = lean_byte_array_size(x_361);
x_364 = lean_nat_dec_lt(x_362, x_363);
if (x_364 == 0)
{
lean_object* x_365; 
lean_dec(x_362);
lean_dec_ref(x_361);
lean_dec_ref(x_353);
lean_dec(x_352);
lean_dec_ref(x_351);
lean_dec(x_350);
lean_dec(x_349);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec(x_300);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_365 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_365;
}
else
{
if (x_364 == 0)
{
uint8_t x_366; lean_object* x_367; lean_object* x_368; uint8_t x_369; 
x_366 = l_instInhabitedUInt8;
x_367 = lean_box(x_366);
x_368 = l_outOfBounds___redArg(x_367);
x_369 = lean_unbox(x_368);
lean_dec(x_368);
x_110 = x_292;
x_111 = x_294;
x_112 = x_361;
x_113 = x_305;
x_114 = x_351;
x_115 = x_302;
x_116 = x_303;
x_117 = x_293;
x_118 = x_352;
x_119 = x_295;
x_120 = x_353;
x_121 = x_354;
x_122 = x_298;
x_123 = x_346;
x_124 = x_362;
x_125 = x_349;
x_126 = x_300;
x_127 = x_350;
x_128 = x_345;
x_129 = x_369;
goto block_154;
}
else
{
uint8_t x_370; 
x_370 = lean_byte_array_fget(x_361, x_362);
x_110 = x_292;
x_111 = x_294;
x_112 = x_361;
x_113 = x_305;
x_114 = x_351;
x_115 = x_302;
x_116 = x_303;
x_117 = x_293;
x_118 = x_352;
x_119 = x_295;
x_120 = x_353;
x_121 = x_354;
x_122 = x_298;
x_123 = x_346;
x_124 = x_362;
x_125 = x_349;
x_126 = x_300;
x_127 = x_350;
x_128 = x_345;
x_129 = x_370;
goto block_154;
}
}
}
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; 
lean_dec(x_355);
x_371 = lean_ctor_get(x_297, 0);
lean_inc_ref(x_371);
x_372 = lean_ctor_get(x_297, 1);
lean_inc(x_372);
lean_dec_ref(x_297);
x_373 = lean_unsigned_to_nat(5u);
x_374 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_371, x_372, x_346, x_373);
if (lean_obj_tag(x_374) == 0)
{
uint8_t x_375; 
lean_dec_ref(x_353);
lean_dec(x_352);
lean_dec_ref(x_351);
lean_dec(x_350);
lean_dec(x_349);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec(x_300);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_375 = !lean_is_exclusive(x_374);
if (x_375 == 0)
{
return x_374;
}
else
{
lean_object* x_376; lean_object* x_377; 
x_376 = lean_ctor_get(x_374, 0);
lean_inc(x_376);
lean_dec(x_374);
x_377 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_377, 0, x_376);
return x_377;
}
}
else
{
lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; uint32_t x_384; lean_object* x_385; lean_object* x_386; uint32_t x_387; uint8_t x_388; 
x_378 = lean_ctor_get(x_374, 0);
lean_inc(x_378);
lean_dec_ref(x_374);
x_379 = lean_ctor_get(x_378, 0);
lean_inc(x_379);
x_380 = lean_ctor_get(x_378, 1);
lean_inc(x_380);
lean_dec(x_378);
x_381 = lean_nat_sub(x_345, x_354);
x_382 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_383 = lean_array_get_borrowed(x_382, x_351, x_381);
lean_dec(x_381);
x_384 = lean_unbox_uint32(x_383);
x_385 = lean_uint32_to_nat(x_384);
x_386 = lean_nat_add(x_385, x_379);
lean_dec(x_379);
lean_dec(x_385);
x_387 = lean_uint32_of_nat(x_386);
x_388 = lean_nat_dec_lt(x_346, x_349);
if (x_388 == 0)
{
x_168 = x_292;
x_169 = x_293;
x_170 = x_295;
x_171 = x_386;
x_172 = x_380;
x_173 = x_298;
x_174 = x_346;
x_175 = x_300;
x_176 = x_305;
x_177 = x_302;
x_178 = x_387;
x_179 = x_303;
x_180 = x_294;
x_181 = x_349;
x_182 = x_350;
x_183 = x_351;
x_184 = x_352;
x_185 = x_353;
goto block_193;
}
else
{
uint8_t x_389; 
x_389 = !lean_is_exclusive(x_294);
if (x_389 == 0)
{
lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; 
x_390 = lean_ctor_get(x_294, 4);
lean_dec(x_390);
x_391 = lean_ctor_get(x_294, 3);
lean_dec(x_391);
x_392 = lean_ctor_get(x_294, 2);
lean_dec(x_392);
x_393 = lean_ctor_get(x_294, 1);
lean_dec(x_393);
x_394 = lean_ctor_get(x_294, 0);
lean_dec(x_394);
x_395 = lean_box_uint32(x_387);
x_396 = lean_array_set(x_351, x_352, x_395);
x_397 = lean_nat_add(x_352, x_300);
lean_dec(x_352);
x_398 = lean_nat_mod(x_397, x_349);
lean_dec(x_397);
lean_inc_ref(x_353);
lean_inc(x_398);
lean_inc_ref(x_396);
lean_inc(x_350);
lean_inc(x_349);
lean_ctor_set(x_294, 3, x_398);
lean_ctor_set(x_294, 2, x_396);
x_168 = x_292;
x_169 = x_293;
x_170 = x_295;
x_171 = x_386;
x_172 = x_380;
x_173 = x_298;
x_174 = x_346;
x_175 = x_300;
x_176 = x_305;
x_177 = x_302;
x_178 = x_387;
x_179 = x_303;
x_180 = x_294;
x_181 = x_349;
x_182 = x_350;
x_183 = x_396;
x_184 = x_398;
x_185 = x_353;
goto block_193;
}
else
{
lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; 
lean_dec(x_294);
x_399 = lean_box_uint32(x_387);
x_400 = lean_array_set(x_351, x_352, x_399);
x_401 = lean_nat_add(x_352, x_300);
lean_dec(x_352);
x_402 = lean_nat_mod(x_401, x_349);
lean_dec(x_401);
lean_inc_ref(x_353);
lean_inc(x_402);
lean_inc_ref(x_400);
lean_inc(x_350);
lean_inc(x_349);
x_403 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_403, 0, x_349);
lean_ctor_set(x_403, 1, x_350);
lean_ctor_set(x_403, 2, x_400);
lean_ctor_set(x_403, 3, x_402);
lean_ctor_set(x_403, 4, x_353);
x_168 = x_292;
x_169 = x_293;
x_170 = x_295;
x_171 = x_386;
x_172 = x_380;
x_173 = x_298;
x_174 = x_346;
x_175 = x_300;
x_176 = x_305;
x_177 = x_302;
x_178 = x_387;
x_179 = x_303;
x_180 = x_403;
x_181 = x_349;
x_182 = x_350;
x_183 = x_400;
x_184 = x_402;
x_185 = x_353;
goto block_193;
}
}
}
}
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; 
x_404 = lean_ctor_get(x_297, 0);
lean_inc_ref(x_404);
x_405 = lean_ctor_get(x_297, 1);
lean_inc(x_405);
lean_dec_ref(x_297);
x_406 = lean_unsigned_to_nat(5u);
x_407 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_404, x_405, x_346, x_406);
if (lean_obj_tag(x_407) == 0)
{
uint8_t x_408; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec(x_300);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_408 = !lean_is_exclusive(x_407);
if (x_408 == 0)
{
return x_407;
}
else
{
lean_object* x_409; lean_object* x_410; 
x_409 = lean_ctor_get(x_407, 0);
lean_inc(x_409);
lean_dec(x_407);
x_410 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_410, 0, x_409);
return x_410;
}
}
else
{
lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; uint32_t x_422; uint8_t x_423; 
x_411 = lean_ctor_get(x_407, 0);
lean_inc(x_411);
lean_dec_ref(x_407);
x_412 = lean_ctor_get(x_411, 0);
lean_inc(x_412);
x_413 = lean_ctor_get(x_411, 1);
lean_inc(x_413);
lean_dec(x_411);
x_414 = lean_ctor_get(x_294, 0);
lean_inc(x_414);
x_415 = lean_ctor_get(x_294, 1);
lean_inc(x_415);
x_416 = lean_ctor_get(x_294, 2);
lean_inc_ref(x_416);
x_417 = lean_ctor_get(x_294, 3);
lean_inc(x_417);
x_418 = lean_ctor_get(x_294, 4);
lean_inc_ref(x_418);
x_419 = lean_byte_array_size(x_295);
x_420 = lean_nat_add(x_298, x_419);
x_421 = lean_nat_sub(x_420, x_412);
lean_dec(x_412);
lean_dec(x_420);
x_422 = lean_uint32_of_nat(x_421);
x_423 = lean_nat_dec_lt(x_346, x_414);
if (x_423 == 0)
{
x_207 = x_292;
x_208 = x_293;
x_209 = x_295;
x_210 = x_413;
x_211 = x_298;
x_212 = x_346;
x_213 = x_422;
x_214 = x_421;
x_215 = x_300;
x_216 = x_305;
x_217 = x_302;
x_218 = x_303;
x_219 = x_294;
x_220 = x_414;
x_221 = x_415;
x_222 = x_416;
x_223 = x_417;
x_224 = x_418;
goto block_232;
}
else
{
uint8_t x_424; 
x_424 = !lean_is_exclusive(x_294);
if (x_424 == 0)
{
lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; 
x_425 = lean_ctor_get(x_294, 4);
lean_dec(x_425);
x_426 = lean_ctor_get(x_294, 3);
lean_dec(x_426);
x_427 = lean_ctor_get(x_294, 2);
lean_dec(x_427);
x_428 = lean_ctor_get(x_294, 1);
lean_dec(x_428);
x_429 = lean_ctor_get(x_294, 0);
lean_dec(x_429);
x_430 = lean_box_uint32(x_422);
x_431 = lean_array_set(x_416, x_417, x_430);
x_432 = lean_nat_add(x_417, x_300);
lean_dec(x_417);
x_433 = lean_nat_mod(x_432, x_414);
lean_dec(x_432);
lean_inc_ref(x_418);
lean_inc(x_433);
lean_inc_ref(x_431);
lean_inc(x_415);
lean_inc(x_414);
lean_ctor_set(x_294, 3, x_433);
lean_ctor_set(x_294, 2, x_431);
x_207 = x_292;
x_208 = x_293;
x_209 = x_295;
x_210 = x_413;
x_211 = x_298;
x_212 = x_346;
x_213 = x_422;
x_214 = x_421;
x_215 = x_300;
x_216 = x_305;
x_217 = x_302;
x_218 = x_303;
x_219 = x_294;
x_220 = x_414;
x_221 = x_415;
x_222 = x_431;
x_223 = x_433;
x_224 = x_418;
goto block_232;
}
else
{
lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; 
lean_dec(x_294);
x_434 = lean_box_uint32(x_422);
x_435 = lean_array_set(x_416, x_417, x_434);
x_436 = lean_nat_add(x_417, x_300);
lean_dec(x_417);
x_437 = lean_nat_mod(x_436, x_414);
lean_dec(x_436);
lean_inc_ref(x_418);
lean_inc(x_437);
lean_inc_ref(x_435);
lean_inc(x_415);
lean_inc(x_414);
x_438 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_438, 0, x_414);
lean_ctor_set(x_438, 1, x_415);
lean_ctor_set(x_438, 2, x_435);
lean_ctor_set(x_438, 3, x_437);
lean_ctor_set(x_438, 4, x_418);
x_207 = x_292;
x_208 = x_293;
x_209 = x_295;
x_210 = x_413;
x_211 = x_298;
x_212 = x_346;
x_213 = x_422;
x_214 = x_421;
x_215 = x_300;
x_216 = x_305;
x_217 = x_302;
x_218 = x_303;
x_219 = x_438;
x_220 = x_414;
x_221 = x_415;
x_222 = x_435;
x_223 = x_437;
x_224 = x_418;
goto block_232;
}
}
}
}
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; 
x_439 = lean_ctor_get(x_297, 0);
lean_inc_ref(x_439);
x_440 = lean_ctor_get(x_297, 1);
lean_inc(x_440);
lean_dec_ref(x_297);
x_441 = lean_unsigned_to_nat(5u);
x_442 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_439, x_440, x_346, x_441);
if (lean_obj_tag(x_442) == 0)
{
uint8_t x_443; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec(x_300);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_443 = !lean_is_exclusive(x_442);
if (x_443 == 0)
{
return x_442;
}
else
{
lean_object* x_444; lean_object* x_445; 
x_444 = lean_ctor_get(x_442, 0);
lean_inc(x_444);
lean_dec(x_442);
x_445 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_445, 0, x_444);
return x_445;
}
}
else
{
lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; uint32_t x_454; uint8_t x_455; 
x_446 = lean_ctor_get(x_442, 0);
lean_inc(x_446);
lean_dec_ref(x_442);
x_447 = lean_ctor_get(x_446, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_446, 1);
lean_inc(x_448);
lean_dec(x_446);
x_449 = lean_ctor_get(x_294, 0);
lean_inc(x_449);
x_450 = lean_ctor_get(x_294, 1);
lean_inc(x_450);
x_451 = lean_ctor_get(x_294, 2);
lean_inc_ref(x_451);
x_452 = lean_ctor_get(x_294, 3);
lean_inc(x_452);
x_453 = lean_ctor_get(x_294, 4);
lean_inc_ref(x_453);
x_454 = lean_uint32_of_nat(x_447);
x_455 = lean_nat_dec_lt(x_346, x_449);
if (x_455 == 0)
{
x_246 = x_292;
x_247 = x_448;
x_248 = x_293;
x_249 = x_295;
x_250 = x_298;
x_251 = x_346;
x_252 = x_454;
x_253 = x_300;
x_254 = x_305;
x_255 = x_302;
x_256 = x_447;
x_257 = x_303;
x_258 = x_294;
x_259 = x_449;
x_260 = x_450;
x_261 = x_451;
x_262 = x_452;
x_263 = x_453;
goto block_271;
}
else
{
uint8_t x_456; 
x_456 = !lean_is_exclusive(x_294);
if (x_456 == 0)
{
lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; 
x_457 = lean_ctor_get(x_294, 4);
lean_dec(x_457);
x_458 = lean_ctor_get(x_294, 3);
lean_dec(x_458);
x_459 = lean_ctor_get(x_294, 2);
lean_dec(x_459);
x_460 = lean_ctor_get(x_294, 1);
lean_dec(x_460);
x_461 = lean_ctor_get(x_294, 0);
lean_dec(x_461);
x_462 = lean_box_uint32(x_454);
x_463 = lean_array_set(x_451, x_452, x_462);
x_464 = lean_nat_add(x_452, x_300);
lean_dec(x_452);
x_465 = lean_nat_mod(x_464, x_449);
lean_dec(x_464);
lean_inc_ref(x_453);
lean_inc(x_465);
lean_inc_ref(x_463);
lean_inc(x_450);
lean_inc(x_449);
lean_ctor_set(x_294, 3, x_465);
lean_ctor_set(x_294, 2, x_463);
x_246 = x_292;
x_247 = x_448;
x_248 = x_293;
x_249 = x_295;
x_250 = x_298;
x_251 = x_346;
x_252 = x_454;
x_253 = x_300;
x_254 = x_305;
x_255 = x_302;
x_256 = x_447;
x_257 = x_303;
x_258 = x_294;
x_259 = x_449;
x_260 = x_450;
x_261 = x_463;
x_262 = x_465;
x_263 = x_453;
goto block_271;
}
else
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; 
lean_dec(x_294);
x_466 = lean_box_uint32(x_454);
x_467 = lean_array_set(x_451, x_452, x_466);
x_468 = lean_nat_add(x_452, x_300);
lean_dec(x_452);
x_469 = lean_nat_mod(x_468, x_449);
lean_dec(x_468);
lean_inc_ref(x_453);
lean_inc(x_469);
lean_inc_ref(x_467);
lean_inc(x_450);
lean_inc(x_449);
x_470 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_470, 0, x_449);
lean_ctor_set(x_470, 1, x_450);
lean_ctor_set(x_470, 2, x_467);
lean_ctor_set(x_470, 3, x_469);
lean_ctor_set(x_470, 4, x_453);
x_246 = x_292;
x_247 = x_448;
x_248 = x_293;
x_249 = x_295;
x_250 = x_298;
x_251 = x_346;
x_252 = x_454;
x_253 = x_300;
x_254 = x_305;
x_255 = x_302;
x_256 = x_447;
x_257 = x_303;
x_258 = x_470;
x_259 = x_449;
x_260 = x_450;
x_261 = x_467;
x_262 = x_469;
x_263 = x_453;
goto block_271;
}
}
}
}
}
}
}
else
{
lean_dec(x_302);
lean_dec(x_300);
lean_dec_ref(x_299);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec(x_296);
lean_dec_ref(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_295;
x_9 = x_301;
goto block_13;
}
}
block_486:
{
lean_object* x_484; lean_object* x_485; 
x_484 = lean_ctor_get(x_476, 1);
lean_inc_ref(x_484);
lean_dec_ref(x_476);
x_485 = lean_ctor_get(x_484, 0);
lean_inc(x_485);
lean_dec_ref(x_484);
x_292 = x_472;
x_293 = x_473;
x_294 = x_474;
x_295 = x_475;
x_296 = x_485;
x_297 = x_477;
x_298 = x_478;
x_299 = x_479;
x_300 = x_480;
x_301 = x_481;
x_302 = x_482;
x_303 = x_483;
goto block_471;
}
block_511:
{
if (x_499 == 0)
{
x_472 = x_487;
x_473 = x_488;
x_474 = x_489;
x_475 = x_491;
x_476 = x_490;
x_477 = x_492;
x_478 = x_493;
x_479 = x_495;
x_480 = x_496;
x_481 = x_497;
x_482 = x_498;
x_483 = x_494;
goto block_486;
}
else
{
lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; 
lean_dec(x_498);
x_500 = lean_ctor_get(x_494, 0);
lean_inc_ref(x_500);
x_501 = lean_ctor_get(x_494, 1);
lean_inc(x_501);
lean_dec_ref(x_494);
x_502 = lean_unsigned_to_nat(0u);
x_503 = lean_unsigned_to_nat(5u);
x_504 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_500, x_501, x_502, x_503);
if (lean_obj_tag(x_504) == 0)
{
uint8_t x_505; 
lean_dec_ref(x_497);
lean_dec(x_496);
lean_dec_ref(x_495);
lean_dec(x_493);
lean_dec_ref(x_492);
lean_dec_ref(x_491);
lean_dec_ref(x_490);
lean_dec_ref(x_489);
lean_dec_ref(x_488);
lean_dec_ref(x_487);
lean_dec_ref(x_1);
x_505 = !lean_is_exclusive(x_504);
if (x_505 == 0)
{
return x_504;
}
else
{
lean_object* x_506; lean_object* x_507; 
x_506 = lean_ctor_get(x_504, 0);
lean_inc(x_506);
lean_dec(x_504);
x_507 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_507, 0, x_506);
return x_507;
}
}
else
{
lean_object* x_508; lean_object* x_509; lean_object* x_510; 
x_508 = lean_ctor_get(x_504, 0);
lean_inc(x_508);
lean_dec_ref(x_504);
x_509 = lean_ctor_get(x_508, 0);
lean_inc(x_509);
x_510 = lean_ctor_get(x_508, 1);
lean_inc(x_510);
lean_dec(x_508);
x_472 = x_487;
x_473 = x_488;
x_474 = x_489;
x_475 = x_491;
x_476 = x_490;
x_477 = x_492;
x_478 = x_493;
x_479 = x_495;
x_480 = x_496;
x_481 = x_497;
x_482 = x_509;
x_483 = x_510;
goto block_486;
}
}
}
block_530:
{
lean_object* x_524; lean_object* x_525; lean_object* x_526; uint8_t x_527; 
x_524 = lean_ctor_get(x_514, 0);
lean_inc(x_524);
x_525 = lean_ctor_get(x_514, 1);
lean_inc(x_525);
lean_dec_ref(x_514);
x_526 = lean_unsigned_to_nat(0u);
x_527 = lean_nat_dec_eq(x_525, x_526);
if (x_527 == 0)
{
lean_dec(x_524);
x_487 = x_512;
x_488 = x_520;
x_489 = x_523;
x_490 = x_513;
x_491 = x_518;
x_492 = x_522;
x_493 = x_516;
x_494 = x_515;
x_495 = x_521;
x_496 = x_517;
x_497 = x_519;
x_498 = x_525;
x_499 = x_527;
goto block_511;
}
else
{
lean_object* x_528; uint8_t x_529; 
x_528 = lean_box(0);
x_529 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_524, x_528);
if (x_529 == 0)
{
lean_dec(x_524);
x_487 = x_512;
x_488 = x_520;
x_489 = x_523;
x_490 = x_513;
x_491 = x_518;
x_492 = x_522;
x_493 = x_516;
x_494 = x_515;
x_495 = x_521;
x_496 = x_517;
x_497 = x_519;
x_498 = x_525;
x_499 = x_527;
goto block_511;
}
else
{
lean_dec_ref(x_513);
x_292 = x_512;
x_293 = x_520;
x_294 = x_523;
x_295 = x_518;
x_296 = x_524;
x_297 = x_522;
x_298 = x_516;
x_299 = x_521;
x_300 = x_517;
x_301 = x_519;
x_302 = x_525;
x_303 = x_515;
goto block_471;
}
}
}
block_543:
{
lean_object* x_542; 
x_542 = lean_ctor_get(x_532, 1);
lean_inc_ref(x_542);
x_512 = x_531;
x_513 = x_532;
x_514 = x_542;
x_515 = x_533;
x_516 = x_534;
x_517 = x_535;
x_518 = x_536;
x_519 = x_537;
x_520 = x_538;
x_521 = x_539;
x_522 = x_540;
x_523 = x_541;
goto block_530;
}
block_554:
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; 
x_551 = lean_ctor_get(x_545, 0);
lean_inc(x_551);
x_552 = lean_ctor_get(x_545, 1);
lean_inc(x_552);
lean_inc_ref(x_545);
lean_inc_ref(x_4);
x_553 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_553, 0, x_4);
lean_ctor_set(x_553, 1, x_545);
x_531 = x_544;
x_532 = x_546;
x_533 = x_548;
x_534 = x_547;
x_535 = x_549;
x_536 = x_550;
x_537 = x_553;
x_538 = x_4;
x_539 = x_545;
x_540 = x_551;
x_541 = x_552;
goto block_543;
}
block_605:
{
lean_object* x_565; lean_object* x_566; uint8_t x_567; 
x_565 = lean_byte_array_size(x_2);
x_566 = lean_nat_add(x_560, x_565);
x_567 = lean_nat_dec_le(x_566, x_563);
if (x_567 == 0)
{
lean_object* x_568; uint8_t x_569; 
lean_dec(x_566);
x_568 = lean_nat_add(x_563, x_562);
x_569 = lean_nat_dec_le(x_568, x_560);
if (x_569 == 0)
{
uint8_t x_570; 
lean_dec(x_568);
x_570 = lean_nat_dec_le(x_560, x_563);
if (x_570 == 0)
{
lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; uint8_t x_579; 
x_571 = lean_nat_sub(x_560, x_563);
x_572 = lean_nat_sub(x_562, x_571);
lean_dec(x_571);
lean_dec(x_562);
x_573 = l_ByteArray_extract(x_1, x_563, x_560);
x_574 = lean_unsigned_to_nat(0u);
x_575 = lean_byte_array_size(x_573);
x_576 = lean_byte_array_copy_slice(x_573, x_574, x_2, x_565, x_575, x_558);
lean_dec_ref(x_573);
x_577 = lean_byte_array_size(x_576);
x_578 = lean_nat_sub(x_577, x_560);
x_579 = lean_nat_dec_le(x_572, x_578);
lean_dec(x_578);
if (x_579 == 0)
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; 
x_580 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
lean_inc(x_561);
x_581 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_581, 0, x_574);
lean_ctor_set(x_581, 1, x_572);
lean_ctor_set(x_581, 2, x_561);
x_582 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_580, x_581, x_555, x_576, x_574);
x_544 = x_556;
x_545 = x_564;
x_546 = x_557;
x_547 = x_560;
x_548 = x_559;
x_549 = x_561;
x_550 = x_582;
goto block_554;
}
else
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; 
lean_dec_ref(x_555);
x_583 = lean_nat_add(x_560, x_572);
lean_dec(x_572);
lean_inc(x_560);
x_584 = l_ByteArray_extract(x_576, x_560, x_583);
lean_dec(x_583);
x_585 = lean_byte_array_size(x_584);
x_586 = lean_byte_array_copy_slice(x_584, x_574, x_576, x_577, x_585, x_558);
lean_dec_ref(x_584);
x_544 = x_556;
x_545 = x_564;
x_546 = x_557;
x_547 = x_560;
x_548 = x_559;
x_549 = x_561;
x_550 = x_586;
goto block_554;
}
}
else
{
lean_object* x_587; lean_object* x_588; uint8_t x_589; 
lean_dec_ref(x_555);
x_587 = lean_nat_sub(x_563, x_560);
lean_dec(x_563);
x_588 = lean_nat_add(x_587, x_562);
x_589 = lean_nat_dec_le(x_588, x_565);
if (x_589 == 0)
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; 
lean_dec(x_588);
x_590 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed), 4, 1);
lean_closure_set(x_590, 0, x_587);
x_591 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_592 = lean_unsigned_to_nat(0u);
lean_inc(x_561);
x_593 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_593, 0, x_592);
lean_ctor_set(x_593, 1, x_562);
lean_ctor_set(x_593, 2, x_561);
x_594 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_591, x_593, x_590, x_2, x_592);
x_544 = x_556;
x_545 = x_564;
x_546 = x_557;
x_547 = x_560;
x_548 = x_559;
x_549 = x_561;
x_550 = x_594;
goto block_554;
}
else
{
lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; 
lean_dec(x_562);
x_595 = l_ByteArray_extract(x_2, x_587, x_588);
lean_dec(x_588);
x_596 = lean_unsigned_to_nat(0u);
x_597 = lean_byte_array_size(x_595);
x_598 = lean_byte_array_copy_slice(x_595, x_596, x_2, x_565, x_597, x_558);
lean_dec_ref(x_595);
x_544 = x_556;
x_545 = x_564;
x_546 = x_557;
x_547 = x_560;
x_548 = x_559;
x_549 = x_561;
x_550 = x_598;
goto block_554;
}
}
}
else
{
lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; 
lean_dec(x_562);
lean_dec_ref(x_555);
x_599 = l_ByteArray_extract(x_1, x_563, x_568);
lean_dec(x_568);
x_600 = lean_unsigned_to_nat(0u);
x_601 = lean_byte_array_size(x_599);
x_602 = lean_byte_array_copy_slice(x_599, x_600, x_2, x_565, x_601, x_558);
lean_dec_ref(x_599);
x_544 = x_556;
x_545 = x_564;
x_546 = x_557;
x_547 = x_560;
x_548 = x_559;
x_549 = x_561;
x_550 = x_602;
goto block_554;
}
}
else
{
lean_object* x_603; lean_object* x_604; 
lean_dec_ref(x_564);
lean_dec(x_561);
lean_dec(x_560);
lean_dec_ref(x_559);
lean_dec_ref(x_557);
lean_dec_ref(x_556);
lean_dec_ref(x_555);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_603 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_603, 0, x_563);
lean_ctor_set(x_603, 1, x_562);
lean_ctor_set(x_603, 2, x_566);
x_604 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_604, 0, x_603);
return x_604;
}
}
block_618:
{
lean_object* x_617; 
x_617 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_617, 0, x_614);
lean_ctor_set(x_617, 1, x_616);
x_555 = x_606;
x_556 = x_607;
x_557 = x_608;
x_558 = x_609;
x_559 = x_612;
x_560 = x_611;
x_561 = x_613;
x_562 = x_615;
x_563 = x_610;
x_564 = x_617;
goto block_605;
}
block_644:
{
uint8_t x_637; 
x_637 = lean_nat_dec_lt(x_630, x_633);
lean_dec(x_630);
if (x_637 == 0)
{
lean_dec_ref(x_636);
lean_dec(x_635);
lean_dec_ref(x_634);
lean_dec(x_633);
lean_dec(x_632);
x_606 = x_619;
x_607 = x_620;
x_608 = x_621;
x_609 = x_624;
x_610 = x_623;
x_611 = x_626;
x_612 = x_625;
x_613 = x_628;
x_614 = x_627;
x_615 = x_629;
x_616 = x_631;
goto block_618;
}
else
{
lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; lean_object* x_642; lean_object* x_643; 
lean_dec_ref(x_631);
x_638 = lean_unsigned_to_nat(256u);
x_639 = lean_nat_mul(x_633, x_638);
x_640 = lean_nat_mod(x_623, x_639);
lean_dec(x_639);
x_641 = lean_box_uint32(x_622);
x_642 = lean_array_set(x_636, x_640, x_641);
lean_dec(x_640);
x_643 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_643, 0, x_632);
lean_ctor_set(x_643, 1, x_633);
lean_ctor_set(x_643, 2, x_634);
lean_ctor_set(x_643, 3, x_635);
lean_ctor_set(x_643, 4, x_642);
x_606 = x_619;
x_607 = x_620;
x_608 = x_621;
x_609 = x_624;
x_610 = x_623;
x_611 = x_626;
x_612 = x_625;
x_613 = x_628;
x_614 = x_627;
x_615 = x_629;
x_616 = x_643;
goto block_618;
}
}
block_657:
{
lean_object* x_656; 
x_656 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_656, 0, x_650);
lean_ctor_set(x_656, 1, x_655);
x_555 = x_645;
x_556 = x_646;
x_557 = x_647;
x_558 = x_649;
x_559 = x_652;
x_560 = x_651;
x_561 = x_653;
x_562 = x_654;
x_563 = x_648;
x_564 = x_656;
goto block_605;
}
block_683:
{
uint8_t x_676; 
x_676 = lean_nat_dec_lt(x_669, x_672);
lean_dec(x_669);
if (x_676 == 0)
{
lean_dec_ref(x_675);
lean_dec(x_674);
lean_dec_ref(x_673);
lean_dec(x_672);
lean_dec(x_671);
x_645 = x_658;
x_646 = x_659;
x_647 = x_661;
x_648 = x_660;
x_649 = x_664;
x_650 = x_663;
x_651 = x_666;
x_652 = x_665;
x_653 = x_667;
x_654 = x_668;
x_655 = x_670;
goto block_657;
}
else
{
lean_object* x_677; lean_object* x_678; lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; 
lean_dec_ref(x_670);
x_677 = lean_unsigned_to_nat(256u);
x_678 = lean_nat_mul(x_672, x_677);
x_679 = lean_nat_mod(x_660, x_678);
lean_dec(x_678);
x_680 = lean_box_uint32(x_662);
x_681 = lean_array_set(x_675, x_679, x_680);
lean_dec(x_679);
x_682 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_682, 0, x_671);
lean_ctor_set(x_682, 1, x_672);
lean_ctor_set(x_682, 2, x_673);
lean_ctor_set(x_682, 3, x_674);
lean_ctor_set(x_682, 4, x_681);
x_645 = x_658;
x_646 = x_659;
x_647 = x_661;
x_648 = x_660;
x_649 = x_664;
x_650 = x_663;
x_651 = x_666;
x_652 = x_665;
x_653 = x_667;
x_654 = x_668;
x_655 = x_682;
goto block_657;
}
}
block_696:
{
lean_object* x_695; 
x_695 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_695, 0, x_692);
lean_ctor_set(x_695, 1, x_694);
x_555 = x_684;
x_556 = x_685;
x_557 = x_686;
x_558 = x_687;
x_559 = x_689;
x_560 = x_688;
x_561 = x_690;
x_562 = x_693;
x_563 = x_691;
x_564 = x_695;
goto block_605;
}
block_722:
{
uint8_t x_715; 
x_715 = lean_nat_dec_lt(x_708, x_711);
lean_dec(x_708);
if (x_715 == 0)
{
lean_dec_ref(x_714);
lean_dec(x_713);
lean_dec_ref(x_712);
lean_dec(x_711);
lean_dec(x_710);
x_684 = x_698;
x_685 = x_699;
x_686 = x_700;
x_687 = x_701;
x_688 = x_703;
x_689 = x_702;
x_690 = x_705;
x_691 = x_704;
x_692 = x_697;
x_693 = x_707;
x_694 = x_709;
goto block_696;
}
else
{
lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; 
lean_dec_ref(x_709);
x_716 = lean_unsigned_to_nat(256u);
x_717 = lean_nat_mul(x_711, x_716);
x_718 = lean_nat_mod(x_704, x_717);
lean_dec(x_717);
x_719 = lean_box_uint32(x_706);
x_720 = lean_array_set(x_714, x_718, x_719);
lean_dec(x_718);
x_721 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_721, 0, x_710);
lean_ctor_set(x_721, 1, x_711);
lean_ctor_set(x_721, 2, x_712);
lean_ctor_set(x_721, 3, x_713);
lean_ctor_set(x_721, 4, x_720);
x_684 = x_698;
x_685 = x_699;
x_686 = x_700;
x_687 = x_701;
x_688 = x_703;
x_689 = x_702;
x_690 = x_705;
x_691 = x_704;
x_692 = x_697;
x_693 = x_707;
x_694 = x_721;
goto block_696;
}
}
block_735:
{
lean_object* x_734; 
x_734 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_734, 0, x_727);
lean_ctor_set(x_734, 1, x_733);
x_555 = x_723;
x_556 = x_724;
x_557 = x_725;
x_558 = x_728;
x_559 = x_730;
x_560 = x_729;
x_561 = x_731;
x_562 = x_732;
x_563 = x_726;
x_564 = x_734;
goto block_605;
}
block_761:
{
uint8_t x_755; 
x_755 = lean_nat_dec_lt(x_748, x_751);
lean_dec(x_748);
if (x_755 == 0)
{
lean_dec_ref(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_751);
lean_dec(x_750);
x_723 = x_736;
x_724 = x_737;
x_725 = x_739;
x_726 = x_738;
x_727 = x_740;
x_728 = x_741;
x_729 = x_743;
x_730 = x_742;
x_731 = x_745;
x_732 = x_747;
x_733 = x_749;
goto block_735;
}
else
{
lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; 
lean_dec_ref(x_749);
x_756 = lean_nat_mul(x_751, x_746);
x_757 = lean_nat_mod(x_738, x_756);
lean_dec(x_756);
x_758 = lean_box_uint32(x_744);
x_759 = lean_array_set(x_754, x_757, x_758);
lean_dec(x_757);
x_760 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_760, 0, x_750);
lean_ctor_set(x_760, 1, x_751);
lean_ctor_set(x_760, 2, x_752);
lean_ctor_set(x_760, 3, x_753);
lean_ctor_set(x_760, 4, x_759);
x_723 = x_736;
x_724 = x_737;
x_725 = x_739;
x_726 = x_738;
x_727 = x_740;
x_728 = x_741;
x_729 = x_743;
x_730 = x_742;
x_731 = x_745;
x_732 = x_747;
x_733 = x_760;
goto block_735;
}
}
block_805:
{
lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; uint32_t x_796; lean_object* x_797; uint32_t x_798; uint8_t x_799; 
x_786 = lean_nat_add(x_770, x_782);
lean_dec(x_770);
x_787 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_787, 0, x_784);
lean_ctor_set(x_787, 1, x_786);
x_788 = lean_nat_sub(x_771, x_774);
lean_dec(x_771);
x_789 = lean_nat_sub(x_788, x_773);
lean_dec(x_788);
x_790 = lean_unsigned_to_nat(256u);
x_791 = lean_nat_mul(x_789, x_790);
lean_dec(x_789);
x_792 = lean_uint8_to_nat(x_785);
x_793 = lean_nat_add(x_791, x_792);
lean_dec(x_791);
x_794 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_795 = lean_array_get_borrowed(x_794, x_775, x_793);
lean_dec(x_793);
x_796 = lean_unbox_uint32(x_795);
x_797 = lean_uint32_to_nat(x_796);
x_798 = lean_uint32_of_nat(x_797);
x_799 = lean_nat_dec_lt(x_776, x_773);
if (x_799 == 0)
{
lean_dec(x_778);
lean_dec(x_777);
lean_dec_ref(x_775);
lean_dec(x_773);
lean_dec_ref(x_769);
x_736 = x_766;
x_737 = x_768;
x_738 = x_797;
x_739 = x_779;
x_740 = x_787;
x_741 = x_772;
x_742 = x_781;
x_743 = x_780;
x_744 = x_798;
x_745 = x_782;
x_746 = x_790;
x_747 = x_783;
x_748 = x_776;
x_749 = x_6;
x_750 = x_764;
x_751 = x_763;
x_752 = x_762;
x_753 = x_767;
x_754 = x_765;
goto block_761;
}
else
{
lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; 
lean_dec(x_767);
lean_dec_ref(x_765);
lean_dec(x_764);
lean_dec(x_763);
lean_dec_ref(x_762);
lean_dec_ref(x_6);
x_800 = lean_box_uint32(x_798);
x_801 = lean_array_set(x_769, x_777, x_800);
x_802 = lean_nat_add(x_777, x_782);
lean_dec(x_777);
x_803 = lean_nat_mod(x_802, x_773);
lean_dec(x_802);
lean_inc_ref(x_775);
lean_inc(x_803);
lean_inc_ref(x_801);
lean_inc(x_778);
lean_inc(x_773);
x_804 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_804, 0, x_773);
lean_ctor_set(x_804, 1, x_778);
lean_ctor_set(x_804, 2, x_801);
lean_ctor_set(x_804, 3, x_803);
lean_ctor_set(x_804, 4, x_775);
x_736 = x_766;
x_737 = x_768;
x_738 = x_797;
x_739 = x_779;
x_740 = x_787;
x_741 = x_772;
x_742 = x_781;
x_743 = x_780;
x_744 = x_798;
x_745 = x_782;
x_746 = x_790;
x_747 = x_783;
x_748 = x_776;
x_749 = x_804;
x_750 = x_773;
x_751 = x_778;
x_752 = x_801;
x_753 = x_803;
x_754 = x_775;
goto block_761;
}
}
block_827:
{
lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; 
x_816 = lean_nat_add(x_812, x_813);
lean_dec(x_812);
x_817 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_817, 0, x_807);
lean_ctor_set(x_817, 1, x_816);
x_818 = lean_box(x_815);
x_819 = lean_mk_array(x_814, x_818);
x_820 = lean_byte_array_mk(x_819);
x_821 = lean_unsigned_to_nat(0u);
x_822 = lean_byte_array_size(x_2);
x_823 = lean_byte_array_size(x_820);
x_824 = lean_byte_array_copy_slice(x_820, x_821, x_2, x_822, x_823, x_809);
lean_dec_ref(x_820);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_825 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_825, 0, x_5);
lean_ctor_set(x_825, 1, x_6);
lean_inc_ref(x_825);
lean_inc_ref(x_817);
x_826 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_826, 0, x_817);
lean_ctor_set(x_826, 1, x_825);
x_531 = x_806;
x_532 = x_808;
x_533 = x_811;
x_534 = x_810;
x_535 = x_813;
x_536 = x_824;
x_537 = x_826;
x_538 = x_817;
x_539 = x_825;
x_540 = x_5;
x_541 = x_6;
goto block_543;
}
block_1144:
{
lean_object* x_832; uint8_t x_833; 
x_832 = lean_ctor_get(x_828, 0);
lean_inc_ref(x_832);
x_833 = !lean_is_exclusive(x_832);
if (x_833 == 0)
{
lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; uint8_t x_840; 
x_834 = lean_ctor_get(x_828, 1);
x_835 = lean_ctor_get(x_832, 0);
x_836 = lean_ctor_get(x_832, 1);
lean_dec(x_836);
x_837 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_838 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_838, 0, x_837);
lean_closure_set(x_838, 1, x_1);
x_839 = lean_box(0);
x_840 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_835, x_839);
if (x_840 == 0)
{
switch (lean_obj_tag(x_835)) {
case 0:
{
lean_object* x_841; 
lean_inc_ref(x_834);
lean_dec(x_830);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_832, 1, x_6);
lean_ctor_set(x_832, 0, x_5);
lean_inc_ref(x_832);
lean_inc_ref(x_4);
x_841 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_841, 0, x_4);
lean_ctor_set(x_841, 1, x_832);
x_512 = x_838;
x_513 = x_828;
x_514 = x_834;
x_515 = x_831;
x_516 = x_837;
x_517 = x_829;
x_518 = x_2;
x_519 = x_841;
x_520 = x_4;
x_521 = x_832;
x_522 = x_5;
x_523 = x_6;
goto block_530;
}
case 1:
{
uint8_t x_842; 
lean_inc_ref(x_834);
x_842 = !lean_is_exclusive(x_4);
if (x_842 == 0)
{
lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; uint8_t x_847; 
x_843 = lean_ctor_get(x_4, 0);
x_844 = lean_ctor_get(x_4, 1);
x_845 = lean_nat_add(x_844, x_830);
lean_dec(x_830);
x_846 = lean_byte_array_size(x_843);
x_847 = lean_nat_dec_le(x_845, x_846);
if (x_847 == 0)
{
lean_object* x_848; 
lean_dec(x_845);
lean_free_object(x_4);
lean_dec(x_844);
lean_dec_ref(x_843);
lean_dec_ref(x_838);
lean_free_object(x_832);
lean_dec_ref(x_834);
lean_dec_ref(x_831);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_848 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_848;
}
else
{
if (x_847 == 0)
{
lean_object* x_849; 
lean_dec(x_845);
lean_free_object(x_4);
lean_dec(x_844);
lean_dec_ref(x_843);
lean_dec_ref(x_838);
lean_free_object(x_832);
lean_dec_ref(x_834);
lean_dec_ref(x_831);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_849 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_849;
}
else
{
lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_854; lean_object* x_855; 
x_850 = l_ByteArray_extract(x_843, x_844, x_845);
lean_ctor_set(x_4, 1, x_845);
x_851 = lean_unsigned_to_nat(0u);
x_852 = lean_byte_array_size(x_2);
x_853 = lean_byte_array_size(x_850);
x_854 = lean_byte_array_copy_slice(x_850, x_851, x_2, x_852, x_853, x_840);
lean_dec_ref(x_850);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_832, 1, x_6);
lean_ctor_set(x_832, 0, x_5);
lean_inc_ref(x_832);
lean_inc_ref(x_4);
x_855 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_855, 0, x_4);
lean_ctor_set(x_855, 1, x_832);
x_512 = x_838;
x_513 = x_828;
x_514 = x_834;
x_515 = x_831;
x_516 = x_837;
x_517 = x_829;
x_518 = x_854;
x_519 = x_855;
x_520 = x_4;
x_521 = x_832;
x_522 = x_5;
x_523 = x_6;
goto block_530;
}
}
}
else
{
lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; uint8_t x_860; 
x_856 = lean_ctor_get(x_4, 0);
x_857 = lean_ctor_get(x_4, 1);
lean_inc(x_857);
lean_inc(x_856);
lean_dec(x_4);
x_858 = lean_nat_add(x_857, x_830);
lean_dec(x_830);
x_859 = lean_byte_array_size(x_856);
x_860 = lean_nat_dec_le(x_858, x_859);
if (x_860 == 0)
{
lean_object* x_861; 
lean_dec(x_858);
lean_dec(x_857);
lean_dec_ref(x_856);
lean_dec_ref(x_838);
lean_free_object(x_832);
lean_dec_ref(x_834);
lean_dec_ref(x_831);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_861 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_861;
}
else
{
if (x_860 == 0)
{
lean_object* x_862; 
lean_dec(x_858);
lean_dec(x_857);
lean_dec_ref(x_856);
lean_dec_ref(x_838);
lean_free_object(x_832);
lean_dec_ref(x_834);
lean_dec_ref(x_831);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_862 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_862;
}
else
{
lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; 
x_863 = l_ByteArray_extract(x_856, x_857, x_858);
x_864 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_864, 0, x_856);
lean_ctor_set(x_864, 1, x_858);
x_865 = lean_unsigned_to_nat(0u);
x_866 = lean_byte_array_size(x_2);
x_867 = lean_byte_array_size(x_863);
x_868 = lean_byte_array_copy_slice(x_863, x_865, x_2, x_866, x_867, x_840);
lean_dec_ref(x_863);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_832, 1, x_6);
lean_ctor_set(x_832, 0, x_5);
lean_inc_ref(x_832);
lean_inc_ref(x_864);
x_869 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_869, 0, x_864);
lean_ctor_set(x_869, 1, x_832);
x_512 = x_838;
x_513 = x_828;
x_514 = x_834;
x_515 = x_831;
x_516 = x_837;
x_517 = x_829;
x_518 = x_868;
x_519 = x_869;
x_520 = x_864;
x_521 = x_832;
x_522 = x_5;
x_523 = x_6;
goto block_530;
}
}
}
}
case 2:
{
lean_object* x_870; lean_object* x_871; lean_object* x_872; uint8_t x_873; 
lean_free_object(x_832);
x_870 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_870);
x_871 = lean_ctor_get(x_4, 1);
lean_inc(x_871);
lean_dec_ref(x_4);
x_872 = lean_byte_array_size(x_870);
x_873 = lean_nat_dec_lt(x_871, x_872);
if (x_873 == 0)
{
lean_object* x_874; 
lean_dec(x_871);
lean_dec_ref(x_870);
lean_dec_ref(x_838);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_874 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_874;
}
else
{
if (x_873 == 0)
{
uint8_t x_875; lean_object* x_876; lean_object* x_877; uint8_t x_878; 
x_875 = l_instInhabitedUInt8;
x_876 = lean_box(x_875);
x_877 = l_outOfBounds___redArg(x_876);
x_878 = lean_unbox(x_877);
lean_dec(x_877);
x_806 = x_838;
x_807 = x_870;
x_808 = x_828;
x_809 = x_840;
x_810 = x_837;
x_811 = x_831;
x_812 = x_871;
x_813 = x_829;
x_814 = x_830;
x_815 = x_878;
goto block_827;
}
else
{
uint8_t x_879; 
x_879 = lean_byte_array_fget(x_870, x_871);
x_806 = x_838;
x_807 = x_870;
x_808 = x_828;
x_809 = x_840;
x_810 = x_837;
x_811 = x_831;
x_812 = x_871;
x_813 = x_829;
x_814 = x_830;
x_815 = x_879;
goto block_827;
}
}
}
default: 
{
uint8_t x_880; lean_object* x_881; lean_object* x_882; uint8_t x_883; 
lean_free_object(x_832);
x_880 = lean_ctor_get_uint8(x_835, 0);
lean_dec_ref(x_835);
x_881 = lean_uint8_to_nat(x_880);
x_882 = lean_unsigned_to_nat(0u);
x_883 = lean_nat_dec_eq(x_881, x_882);
if (x_883 == 0)
{
uint8_t x_884; 
x_884 = lean_nat_dec_eq(x_881, x_829);
if (x_884 == 0)
{
lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; uint8_t x_892; 
x_885 = lean_ctor_get(x_6, 0);
x_886 = lean_ctor_get(x_6, 1);
x_887 = lean_ctor_get(x_6, 2);
x_888 = lean_ctor_get(x_6, 3);
x_889 = lean_ctor_get(x_6, 4);
x_890 = lean_unsigned_to_nat(2u);
x_891 = lean_nat_add(x_890, x_885);
x_892 = lean_nat_dec_lt(x_881, x_891);
if (x_892 == 0)
{
lean_object* x_893; uint8_t x_894; 
x_893 = lean_nat_add(x_891, x_886);
lean_dec(x_891);
x_894 = lean_nat_dec_lt(x_881, x_893);
lean_dec(x_893);
if (x_894 == 0)
{
lean_object* x_895; lean_object* x_896; 
lean_dec_ref(x_838);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_895 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_895, 0, x_881);
x_896 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_896, 0, x_895);
return x_896;
}
else
{
lean_object* x_897; lean_object* x_898; lean_object* x_899; uint8_t x_900; 
x_897 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_897);
x_898 = lean_ctor_get(x_5, 1);
lean_inc(x_898);
lean_dec_ref(x_5);
x_899 = lean_byte_array_size(x_897);
x_900 = lean_nat_dec_lt(x_898, x_899);
if (x_900 == 0)
{
lean_object* x_901; 
lean_dec(x_898);
lean_dec_ref(x_897);
lean_dec_ref(x_838);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_901 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_901;
}
else
{
if (x_900 == 0)
{
uint8_t x_902; lean_object* x_903; lean_object* x_904; uint8_t x_905; 
x_902 = l_instInhabitedUInt8;
x_903 = lean_box(x_902);
x_904 = l_outOfBounds___redArg(x_903);
x_905 = lean_unbox(x_904);
lean_dec(x_904);
lean_inc_n(x_888, 2);
lean_inc_ref(x_838);
lean_inc_ref_n(x_889, 2);
lean_inc_n(x_885, 2);
lean_inc_n(x_886, 2);
lean_inc_ref_n(x_887, 2);
x_762 = x_887;
x_763 = x_886;
x_764 = x_885;
x_765 = x_889;
x_766 = x_838;
x_767 = x_888;
x_768 = x_838;
x_769 = x_887;
x_770 = x_898;
x_771 = x_881;
x_772 = x_840;
x_773 = x_885;
x_774 = x_890;
x_775 = x_889;
x_776 = x_882;
x_777 = x_888;
x_778 = x_886;
x_779 = x_828;
x_780 = x_837;
x_781 = x_831;
x_782 = x_829;
x_783 = x_830;
x_784 = x_897;
x_785 = x_905;
goto block_805;
}
else
{
uint8_t x_906; 
x_906 = lean_byte_array_fget(x_897, x_898);
lean_inc_n(x_888, 2);
lean_inc_ref(x_838);
lean_inc_ref_n(x_889, 2);
lean_inc_n(x_885, 2);
lean_inc_n(x_886, 2);
lean_inc_ref_n(x_887, 2);
x_762 = x_887;
x_763 = x_886;
x_764 = x_885;
x_765 = x_889;
x_766 = x_838;
x_767 = x_888;
x_768 = x_838;
x_769 = x_887;
x_770 = x_898;
x_771 = x_881;
x_772 = x_840;
x_773 = x_885;
x_774 = x_890;
x_775 = x_889;
x_776 = x_882;
x_777 = x_888;
x_778 = x_886;
x_779 = x_828;
x_780 = x_837;
x_781 = x_831;
x_782 = x_829;
x_783 = x_830;
x_784 = x_897;
x_785 = x_906;
goto block_805;
}
}
}
}
else
{
lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; 
lean_inc_ref(x_889);
lean_inc(x_888);
lean_inc_ref(x_887);
lean_inc(x_886);
lean_inc(x_885);
lean_dec(x_891);
x_907 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_907);
x_908 = lean_ctor_get(x_5, 1);
lean_inc(x_908);
lean_dec_ref(x_5);
x_909 = lean_unsigned_to_nat(5u);
x_910 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_907, x_908, x_882, x_909);
if (lean_obj_tag(x_910) == 0)
{
uint8_t x_911; 
lean_dec_ref(x_889);
lean_dec(x_888);
lean_dec_ref(x_887);
lean_dec(x_886);
lean_dec(x_885);
lean_dec_ref(x_838);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_911 = !lean_is_exclusive(x_910);
if (x_911 == 0)
{
return x_910;
}
else
{
lean_object* x_912; lean_object* x_913; 
x_912 = lean_ctor_get(x_910, 0);
lean_inc(x_912);
lean_dec(x_910);
x_913 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_913, 0, x_912);
return x_913;
}
}
else
{
lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; uint32_t x_920; lean_object* x_921; lean_object* x_922; uint32_t x_923; uint8_t x_924; 
x_914 = lean_ctor_get(x_910, 0);
lean_inc(x_914);
lean_dec_ref(x_910);
x_915 = lean_ctor_get(x_914, 0);
lean_inc(x_915);
x_916 = lean_ctor_get(x_914, 1);
lean_inc(x_916);
lean_dec(x_914);
x_917 = lean_nat_sub(x_881, x_890);
x_918 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_919 = lean_array_get_borrowed(x_918, x_887, x_917);
lean_dec(x_917);
x_920 = lean_unbox_uint32(x_919);
x_921 = lean_uint32_to_nat(x_920);
x_922 = lean_nat_add(x_921, x_915);
lean_dec(x_915);
lean_dec(x_921);
x_923 = lean_uint32_of_nat(x_922);
x_924 = lean_nat_dec_lt(x_882, x_885);
if (x_924 == 0)
{
lean_inc_ref(x_838);
x_697 = x_916;
x_698 = x_838;
x_699 = x_838;
x_700 = x_828;
x_701 = x_840;
x_702 = x_831;
x_703 = x_837;
x_704 = x_922;
x_705 = x_829;
x_706 = x_923;
x_707 = x_830;
x_708 = x_882;
x_709 = x_6;
x_710 = x_885;
x_711 = x_886;
x_712 = x_887;
x_713 = x_888;
x_714 = x_889;
goto block_722;
}
else
{
uint8_t x_925; 
x_925 = !lean_is_exclusive(x_6);
if (x_925 == 0)
{
lean_object* x_926; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; 
x_926 = lean_ctor_get(x_6, 4);
lean_dec(x_926);
x_927 = lean_ctor_get(x_6, 3);
lean_dec(x_927);
x_928 = lean_ctor_get(x_6, 2);
lean_dec(x_928);
x_929 = lean_ctor_get(x_6, 1);
lean_dec(x_929);
x_930 = lean_ctor_get(x_6, 0);
lean_dec(x_930);
x_931 = lean_box_uint32(x_923);
x_932 = lean_array_set(x_887, x_888, x_931);
x_933 = lean_nat_add(x_888, x_829);
lean_dec(x_888);
x_934 = lean_nat_mod(x_933, x_885);
lean_dec(x_933);
lean_inc_ref(x_889);
lean_inc(x_934);
lean_inc_ref(x_932);
lean_inc(x_886);
lean_inc(x_885);
lean_ctor_set(x_6, 3, x_934);
lean_ctor_set(x_6, 2, x_932);
lean_inc_ref(x_838);
x_697 = x_916;
x_698 = x_838;
x_699 = x_838;
x_700 = x_828;
x_701 = x_840;
x_702 = x_831;
x_703 = x_837;
x_704 = x_922;
x_705 = x_829;
x_706 = x_923;
x_707 = x_830;
x_708 = x_882;
x_709 = x_6;
x_710 = x_885;
x_711 = x_886;
x_712 = x_932;
x_713 = x_934;
x_714 = x_889;
goto block_722;
}
else
{
lean_object* x_935; lean_object* x_936; lean_object* x_937; lean_object* x_938; lean_object* x_939; 
lean_dec(x_6);
x_935 = lean_box_uint32(x_923);
x_936 = lean_array_set(x_887, x_888, x_935);
x_937 = lean_nat_add(x_888, x_829);
lean_dec(x_888);
x_938 = lean_nat_mod(x_937, x_885);
lean_dec(x_937);
lean_inc_ref(x_889);
lean_inc(x_938);
lean_inc_ref(x_936);
lean_inc(x_886);
lean_inc(x_885);
x_939 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_939, 0, x_885);
lean_ctor_set(x_939, 1, x_886);
lean_ctor_set(x_939, 2, x_936);
lean_ctor_set(x_939, 3, x_938);
lean_ctor_set(x_939, 4, x_889);
lean_inc_ref(x_838);
x_697 = x_916;
x_698 = x_838;
x_699 = x_838;
x_700 = x_828;
x_701 = x_840;
x_702 = x_831;
x_703 = x_837;
x_704 = x_922;
x_705 = x_829;
x_706 = x_923;
x_707 = x_830;
x_708 = x_882;
x_709 = x_939;
x_710 = x_885;
x_711 = x_886;
x_712 = x_936;
x_713 = x_938;
x_714 = x_889;
goto block_722;
}
}
}
}
}
else
{
lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; 
x_940 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_940);
x_941 = lean_ctor_get(x_5, 1);
lean_inc(x_941);
lean_dec_ref(x_5);
x_942 = lean_unsigned_to_nat(5u);
x_943 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_940, x_941, x_882, x_942);
if (lean_obj_tag(x_943) == 0)
{
uint8_t x_944; 
lean_dec_ref(x_838);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_944 = !lean_is_exclusive(x_943);
if (x_944 == 0)
{
return x_943;
}
else
{
lean_object* x_945; lean_object* x_946; 
x_945 = lean_ctor_get(x_943, 0);
lean_inc(x_945);
lean_dec(x_943);
x_946 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_946, 0, x_945);
return x_946;
}
}
else
{
lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; uint32_t x_958; uint8_t x_959; 
x_947 = lean_ctor_get(x_943, 0);
lean_inc(x_947);
lean_dec_ref(x_943);
x_948 = lean_ctor_get(x_947, 0);
lean_inc(x_948);
x_949 = lean_ctor_get(x_947, 1);
lean_inc(x_949);
lean_dec(x_947);
x_950 = lean_ctor_get(x_6, 0);
lean_inc(x_950);
x_951 = lean_ctor_get(x_6, 1);
lean_inc(x_951);
x_952 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_952);
x_953 = lean_ctor_get(x_6, 3);
lean_inc(x_953);
x_954 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_954);
x_955 = lean_byte_array_size(x_2);
x_956 = lean_nat_add(x_837, x_955);
x_957 = lean_nat_sub(x_956, x_948);
lean_dec(x_948);
lean_dec(x_956);
x_958 = lean_uint32_of_nat(x_957);
x_959 = lean_nat_dec_lt(x_882, x_950);
if (x_959 == 0)
{
lean_inc_ref(x_838);
x_658 = x_838;
x_659 = x_838;
x_660 = x_957;
x_661 = x_828;
x_662 = x_958;
x_663 = x_949;
x_664 = x_840;
x_665 = x_831;
x_666 = x_837;
x_667 = x_829;
x_668 = x_830;
x_669 = x_882;
x_670 = x_6;
x_671 = x_950;
x_672 = x_951;
x_673 = x_952;
x_674 = x_953;
x_675 = x_954;
goto block_683;
}
else
{
uint8_t x_960; 
x_960 = !lean_is_exclusive(x_6);
if (x_960 == 0)
{
lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; 
x_961 = lean_ctor_get(x_6, 4);
lean_dec(x_961);
x_962 = lean_ctor_get(x_6, 3);
lean_dec(x_962);
x_963 = lean_ctor_get(x_6, 2);
lean_dec(x_963);
x_964 = lean_ctor_get(x_6, 1);
lean_dec(x_964);
x_965 = lean_ctor_get(x_6, 0);
lean_dec(x_965);
x_966 = lean_box_uint32(x_958);
x_967 = lean_array_set(x_952, x_953, x_966);
x_968 = lean_nat_add(x_953, x_829);
lean_dec(x_953);
x_969 = lean_nat_mod(x_968, x_950);
lean_dec(x_968);
lean_inc_ref(x_954);
lean_inc(x_969);
lean_inc_ref(x_967);
lean_inc(x_951);
lean_inc(x_950);
lean_ctor_set(x_6, 3, x_969);
lean_ctor_set(x_6, 2, x_967);
lean_inc_ref(x_838);
x_658 = x_838;
x_659 = x_838;
x_660 = x_957;
x_661 = x_828;
x_662 = x_958;
x_663 = x_949;
x_664 = x_840;
x_665 = x_831;
x_666 = x_837;
x_667 = x_829;
x_668 = x_830;
x_669 = x_882;
x_670 = x_6;
x_671 = x_950;
x_672 = x_951;
x_673 = x_967;
x_674 = x_969;
x_675 = x_954;
goto block_683;
}
else
{
lean_object* x_970; lean_object* x_971; lean_object* x_972; lean_object* x_973; lean_object* x_974; 
lean_dec(x_6);
x_970 = lean_box_uint32(x_958);
x_971 = lean_array_set(x_952, x_953, x_970);
x_972 = lean_nat_add(x_953, x_829);
lean_dec(x_953);
x_973 = lean_nat_mod(x_972, x_950);
lean_dec(x_972);
lean_inc_ref(x_954);
lean_inc(x_973);
lean_inc_ref(x_971);
lean_inc(x_951);
lean_inc(x_950);
x_974 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_974, 0, x_950);
lean_ctor_set(x_974, 1, x_951);
lean_ctor_set(x_974, 2, x_971);
lean_ctor_set(x_974, 3, x_973);
lean_ctor_set(x_974, 4, x_954);
lean_inc_ref(x_838);
x_658 = x_838;
x_659 = x_838;
x_660 = x_957;
x_661 = x_828;
x_662 = x_958;
x_663 = x_949;
x_664 = x_840;
x_665 = x_831;
x_666 = x_837;
x_667 = x_829;
x_668 = x_830;
x_669 = x_882;
x_670 = x_974;
x_671 = x_950;
x_672 = x_951;
x_673 = x_971;
x_674 = x_973;
x_675 = x_954;
goto block_683;
}
}
}
}
}
else
{
lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; 
x_975 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_975);
x_976 = lean_ctor_get(x_5, 1);
lean_inc(x_976);
lean_dec_ref(x_5);
x_977 = lean_unsigned_to_nat(5u);
x_978 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_975, x_976, x_882, x_977);
if (lean_obj_tag(x_978) == 0)
{
uint8_t x_979; 
lean_dec_ref(x_838);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_979 = !lean_is_exclusive(x_978);
if (x_979 == 0)
{
return x_978;
}
else
{
lean_object* x_980; lean_object* x_981; 
x_980 = lean_ctor_get(x_978, 0);
lean_inc(x_980);
lean_dec(x_978);
x_981 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_981, 0, x_980);
return x_981;
}
}
else
{
lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; lean_object* x_988; lean_object* x_989; uint32_t x_990; uint8_t x_991; 
x_982 = lean_ctor_get(x_978, 0);
lean_inc(x_982);
lean_dec_ref(x_978);
x_983 = lean_ctor_get(x_982, 0);
lean_inc(x_983);
x_984 = lean_ctor_get(x_982, 1);
lean_inc(x_984);
lean_dec(x_982);
x_985 = lean_ctor_get(x_6, 0);
lean_inc(x_985);
x_986 = lean_ctor_get(x_6, 1);
lean_inc(x_986);
x_987 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_987);
x_988 = lean_ctor_get(x_6, 3);
lean_inc(x_988);
x_989 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_989);
x_990 = lean_uint32_of_nat(x_983);
x_991 = lean_nat_dec_lt(x_882, x_985);
if (x_991 == 0)
{
lean_inc_ref(x_838);
x_619 = x_838;
x_620 = x_838;
x_621 = x_828;
x_622 = x_990;
x_623 = x_983;
x_624 = x_840;
x_625 = x_831;
x_626 = x_837;
x_627 = x_984;
x_628 = x_829;
x_629 = x_830;
x_630 = x_882;
x_631 = x_6;
x_632 = x_985;
x_633 = x_986;
x_634 = x_987;
x_635 = x_988;
x_636 = x_989;
goto block_644;
}
else
{
uint8_t x_992; 
x_992 = !lean_is_exclusive(x_6);
if (x_992 == 0)
{
lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; 
x_993 = lean_ctor_get(x_6, 4);
lean_dec(x_993);
x_994 = lean_ctor_get(x_6, 3);
lean_dec(x_994);
x_995 = lean_ctor_get(x_6, 2);
lean_dec(x_995);
x_996 = lean_ctor_get(x_6, 1);
lean_dec(x_996);
x_997 = lean_ctor_get(x_6, 0);
lean_dec(x_997);
x_998 = lean_box_uint32(x_990);
x_999 = lean_array_set(x_987, x_988, x_998);
x_1000 = lean_nat_add(x_988, x_829);
lean_dec(x_988);
x_1001 = lean_nat_mod(x_1000, x_985);
lean_dec(x_1000);
lean_inc_ref(x_989);
lean_inc(x_1001);
lean_inc_ref(x_999);
lean_inc(x_986);
lean_inc(x_985);
lean_ctor_set(x_6, 3, x_1001);
lean_ctor_set(x_6, 2, x_999);
lean_inc_ref(x_838);
x_619 = x_838;
x_620 = x_838;
x_621 = x_828;
x_622 = x_990;
x_623 = x_983;
x_624 = x_840;
x_625 = x_831;
x_626 = x_837;
x_627 = x_984;
x_628 = x_829;
x_629 = x_830;
x_630 = x_882;
x_631 = x_6;
x_632 = x_985;
x_633 = x_986;
x_634 = x_999;
x_635 = x_1001;
x_636 = x_989;
goto block_644;
}
else
{
lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; 
lean_dec(x_6);
x_1002 = lean_box_uint32(x_990);
x_1003 = lean_array_set(x_987, x_988, x_1002);
x_1004 = lean_nat_add(x_988, x_829);
lean_dec(x_988);
x_1005 = lean_nat_mod(x_1004, x_985);
lean_dec(x_1004);
lean_inc_ref(x_989);
lean_inc(x_1005);
lean_inc_ref(x_1003);
lean_inc(x_986);
lean_inc(x_985);
x_1006 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1006, 0, x_985);
lean_ctor_set(x_1006, 1, x_986);
lean_ctor_set(x_1006, 2, x_1003);
lean_ctor_set(x_1006, 3, x_1005);
lean_ctor_set(x_1006, 4, x_989);
lean_inc_ref(x_838);
x_619 = x_838;
x_620 = x_838;
x_621 = x_828;
x_622 = x_990;
x_623 = x_983;
x_624 = x_840;
x_625 = x_831;
x_626 = x_837;
x_627 = x_984;
x_628 = x_829;
x_629 = x_830;
x_630 = x_882;
x_631 = x_1006;
x_632 = x_985;
x_633 = x_986;
x_634 = x_1003;
x_635 = x_1005;
x_636 = x_989;
goto block_644;
}
}
}
}
}
}
}
else
{
lean_object* x_1007; 
lean_inc_ref(x_834);
lean_dec(x_835);
lean_dec(x_830);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_832, 1, x_6);
lean_ctor_set(x_832, 0, x_5);
lean_inc_ref(x_832);
lean_inc_ref(x_4);
x_1007 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1007, 0, x_4);
lean_ctor_set(x_1007, 1, x_832);
x_512 = x_838;
x_513 = x_828;
x_514 = x_834;
x_515 = x_831;
x_516 = x_837;
x_517 = x_829;
x_518 = x_2;
x_519 = x_1007;
x_520 = x_4;
x_521 = x_832;
x_522 = x_5;
x_523 = x_6;
goto block_530;
}
}
else
{
lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; lean_object* x_1012; uint8_t x_1013; 
x_1008 = lean_ctor_get(x_828, 1);
x_1009 = lean_ctor_get(x_832, 0);
lean_inc(x_1009);
lean_dec(x_832);
x_1010 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_1011 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_1011, 0, x_1010);
lean_closure_set(x_1011, 1, x_1);
x_1012 = lean_box(0);
x_1013 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_1009, x_1012);
if (x_1013 == 0)
{
switch (lean_obj_tag(x_1009)) {
case 0:
{
lean_object* x_1014; lean_object* x_1015; 
lean_inc_ref(x_1008);
lean_dec(x_830);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1014 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1014, 0, x_5);
lean_ctor_set(x_1014, 1, x_6);
lean_inc_ref(x_1014);
lean_inc_ref(x_4);
x_1015 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1015, 0, x_4);
lean_ctor_set(x_1015, 1, x_1014);
x_512 = x_1011;
x_513 = x_828;
x_514 = x_1008;
x_515 = x_831;
x_516 = x_1010;
x_517 = x_829;
x_518 = x_2;
x_519 = x_1015;
x_520 = x_4;
x_521 = x_1014;
x_522 = x_5;
x_523 = x_6;
goto block_530;
}
case 1:
{
lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; uint8_t x_1021; 
lean_inc_ref(x_1008);
x_1016 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_1016);
x_1017 = lean_ctor_get(x_4, 1);
lean_inc(x_1017);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_1018 = x_4;
} else {
 lean_dec_ref(x_4);
 x_1018 = lean_box(0);
}
x_1019 = lean_nat_add(x_1017, x_830);
lean_dec(x_830);
x_1020 = lean_byte_array_size(x_1016);
x_1021 = lean_nat_dec_le(x_1019, x_1020);
if (x_1021 == 0)
{
lean_object* x_1022; 
lean_dec(x_1019);
lean_dec(x_1018);
lean_dec(x_1017);
lean_dec_ref(x_1016);
lean_dec_ref(x_1011);
lean_dec_ref(x_1008);
lean_dec_ref(x_831);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1022 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1022;
}
else
{
if (x_1021 == 0)
{
lean_object* x_1023; 
lean_dec(x_1019);
lean_dec(x_1018);
lean_dec(x_1017);
lean_dec_ref(x_1016);
lean_dec_ref(x_1011);
lean_dec_ref(x_1008);
lean_dec_ref(x_831);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1023 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1023;
}
else
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; 
x_1024 = l_ByteArray_extract(x_1016, x_1017, x_1019);
if (lean_is_scalar(x_1018)) {
 x_1025 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1025 = x_1018;
}
lean_ctor_set(x_1025, 0, x_1016);
lean_ctor_set(x_1025, 1, x_1019);
x_1026 = lean_unsigned_to_nat(0u);
x_1027 = lean_byte_array_size(x_2);
x_1028 = lean_byte_array_size(x_1024);
x_1029 = lean_byte_array_copy_slice(x_1024, x_1026, x_2, x_1027, x_1028, x_1013);
lean_dec_ref(x_1024);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1030 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1030, 0, x_5);
lean_ctor_set(x_1030, 1, x_6);
lean_inc_ref(x_1030);
lean_inc_ref(x_1025);
x_1031 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1031, 0, x_1025);
lean_ctor_set(x_1031, 1, x_1030);
x_512 = x_1011;
x_513 = x_828;
x_514 = x_1008;
x_515 = x_831;
x_516 = x_1010;
x_517 = x_829;
x_518 = x_1029;
x_519 = x_1031;
x_520 = x_1025;
x_521 = x_1030;
x_522 = x_5;
x_523 = x_6;
goto block_530;
}
}
}
case 2:
{
lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; uint8_t x_1035; 
x_1032 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_1032);
x_1033 = lean_ctor_get(x_4, 1);
lean_inc(x_1033);
lean_dec_ref(x_4);
x_1034 = lean_byte_array_size(x_1032);
x_1035 = lean_nat_dec_lt(x_1033, x_1034);
if (x_1035 == 0)
{
lean_object* x_1036; 
lean_dec(x_1033);
lean_dec_ref(x_1032);
lean_dec_ref(x_1011);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1036 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1036;
}
else
{
if (x_1035 == 0)
{
uint8_t x_1037; lean_object* x_1038; lean_object* x_1039; uint8_t x_1040; 
x_1037 = l_instInhabitedUInt8;
x_1038 = lean_box(x_1037);
x_1039 = l_outOfBounds___redArg(x_1038);
x_1040 = lean_unbox(x_1039);
lean_dec(x_1039);
x_806 = x_1011;
x_807 = x_1032;
x_808 = x_828;
x_809 = x_1013;
x_810 = x_1010;
x_811 = x_831;
x_812 = x_1033;
x_813 = x_829;
x_814 = x_830;
x_815 = x_1040;
goto block_827;
}
else
{
uint8_t x_1041; 
x_1041 = lean_byte_array_fget(x_1032, x_1033);
x_806 = x_1011;
x_807 = x_1032;
x_808 = x_828;
x_809 = x_1013;
x_810 = x_1010;
x_811 = x_831;
x_812 = x_1033;
x_813 = x_829;
x_814 = x_830;
x_815 = x_1041;
goto block_827;
}
}
}
default: 
{
uint8_t x_1042; lean_object* x_1043; lean_object* x_1044; uint8_t x_1045; 
x_1042 = lean_ctor_get_uint8(x_1009, 0);
lean_dec_ref(x_1009);
x_1043 = lean_uint8_to_nat(x_1042);
x_1044 = lean_unsigned_to_nat(0u);
x_1045 = lean_nat_dec_eq(x_1043, x_1044);
if (x_1045 == 0)
{
uint8_t x_1046; 
x_1046 = lean_nat_dec_eq(x_1043, x_829);
if (x_1046 == 0)
{
lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; uint8_t x_1054; 
x_1047 = lean_ctor_get(x_6, 0);
x_1048 = lean_ctor_get(x_6, 1);
x_1049 = lean_ctor_get(x_6, 2);
x_1050 = lean_ctor_get(x_6, 3);
x_1051 = lean_ctor_get(x_6, 4);
x_1052 = lean_unsigned_to_nat(2u);
x_1053 = lean_nat_add(x_1052, x_1047);
x_1054 = lean_nat_dec_lt(x_1043, x_1053);
if (x_1054 == 0)
{
lean_object* x_1055; uint8_t x_1056; 
x_1055 = lean_nat_add(x_1053, x_1048);
lean_dec(x_1053);
x_1056 = lean_nat_dec_lt(x_1043, x_1055);
lean_dec(x_1055);
if (x_1056 == 0)
{
lean_object* x_1057; lean_object* x_1058; 
lean_dec_ref(x_1011);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1057 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_1057, 0, x_1043);
x_1058 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1058, 0, x_1057);
return x_1058;
}
else
{
lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; uint8_t x_1062; 
x_1059 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1059);
x_1060 = lean_ctor_get(x_5, 1);
lean_inc(x_1060);
lean_dec_ref(x_5);
x_1061 = lean_byte_array_size(x_1059);
x_1062 = lean_nat_dec_lt(x_1060, x_1061);
if (x_1062 == 0)
{
lean_object* x_1063; 
lean_dec(x_1060);
lean_dec_ref(x_1059);
lean_dec_ref(x_1011);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1063 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1063;
}
else
{
if (x_1062 == 0)
{
uint8_t x_1064; lean_object* x_1065; lean_object* x_1066; uint8_t x_1067; 
x_1064 = l_instInhabitedUInt8;
x_1065 = lean_box(x_1064);
x_1066 = l_outOfBounds___redArg(x_1065);
x_1067 = lean_unbox(x_1066);
lean_dec(x_1066);
lean_inc_n(x_1050, 2);
lean_inc_ref(x_1011);
lean_inc_ref_n(x_1051, 2);
lean_inc_n(x_1047, 2);
lean_inc_n(x_1048, 2);
lean_inc_ref_n(x_1049, 2);
x_762 = x_1049;
x_763 = x_1048;
x_764 = x_1047;
x_765 = x_1051;
x_766 = x_1011;
x_767 = x_1050;
x_768 = x_1011;
x_769 = x_1049;
x_770 = x_1060;
x_771 = x_1043;
x_772 = x_1013;
x_773 = x_1047;
x_774 = x_1052;
x_775 = x_1051;
x_776 = x_1044;
x_777 = x_1050;
x_778 = x_1048;
x_779 = x_828;
x_780 = x_1010;
x_781 = x_831;
x_782 = x_829;
x_783 = x_830;
x_784 = x_1059;
x_785 = x_1067;
goto block_805;
}
else
{
uint8_t x_1068; 
x_1068 = lean_byte_array_fget(x_1059, x_1060);
lean_inc_n(x_1050, 2);
lean_inc_ref(x_1011);
lean_inc_ref_n(x_1051, 2);
lean_inc_n(x_1047, 2);
lean_inc_n(x_1048, 2);
lean_inc_ref_n(x_1049, 2);
x_762 = x_1049;
x_763 = x_1048;
x_764 = x_1047;
x_765 = x_1051;
x_766 = x_1011;
x_767 = x_1050;
x_768 = x_1011;
x_769 = x_1049;
x_770 = x_1060;
x_771 = x_1043;
x_772 = x_1013;
x_773 = x_1047;
x_774 = x_1052;
x_775 = x_1051;
x_776 = x_1044;
x_777 = x_1050;
x_778 = x_1048;
x_779 = x_828;
x_780 = x_1010;
x_781 = x_831;
x_782 = x_829;
x_783 = x_830;
x_784 = x_1059;
x_785 = x_1068;
goto block_805;
}
}
}
}
else
{
lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; 
lean_inc_ref(x_1051);
lean_inc(x_1050);
lean_inc_ref(x_1049);
lean_inc(x_1048);
lean_inc(x_1047);
lean_dec(x_1053);
x_1069 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1069);
x_1070 = lean_ctor_get(x_5, 1);
lean_inc(x_1070);
lean_dec_ref(x_5);
x_1071 = lean_unsigned_to_nat(5u);
x_1072 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1069, x_1070, x_1044, x_1071);
if (lean_obj_tag(x_1072) == 0)
{
lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; 
lean_dec_ref(x_1051);
lean_dec(x_1050);
lean_dec_ref(x_1049);
lean_dec(x_1048);
lean_dec(x_1047);
lean_dec_ref(x_1011);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1073 = lean_ctor_get(x_1072, 0);
lean_inc(x_1073);
if (lean_is_exclusive(x_1072)) {
 lean_ctor_release(x_1072, 0);
 x_1074 = x_1072;
} else {
 lean_dec_ref(x_1072);
 x_1074 = lean_box(0);
}
if (lean_is_scalar(x_1074)) {
 x_1075 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1075 = x_1074;
}
lean_ctor_set(x_1075, 0, x_1073);
return x_1075;
}
else
{
lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; lean_object* x_1081; uint32_t x_1082; lean_object* x_1083; lean_object* x_1084; uint32_t x_1085; uint8_t x_1086; 
x_1076 = lean_ctor_get(x_1072, 0);
lean_inc(x_1076);
lean_dec_ref(x_1072);
x_1077 = lean_ctor_get(x_1076, 0);
lean_inc(x_1077);
x_1078 = lean_ctor_get(x_1076, 1);
lean_inc(x_1078);
lean_dec(x_1076);
x_1079 = lean_nat_sub(x_1043, x_1052);
x_1080 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_1081 = lean_array_get_borrowed(x_1080, x_1049, x_1079);
lean_dec(x_1079);
x_1082 = lean_unbox_uint32(x_1081);
x_1083 = lean_uint32_to_nat(x_1082);
x_1084 = lean_nat_add(x_1083, x_1077);
lean_dec(x_1077);
lean_dec(x_1083);
x_1085 = lean_uint32_of_nat(x_1084);
x_1086 = lean_nat_dec_lt(x_1044, x_1047);
if (x_1086 == 0)
{
lean_inc_ref(x_1011);
x_697 = x_1078;
x_698 = x_1011;
x_699 = x_1011;
x_700 = x_828;
x_701 = x_1013;
x_702 = x_831;
x_703 = x_1010;
x_704 = x_1084;
x_705 = x_829;
x_706 = x_1085;
x_707 = x_830;
x_708 = x_1044;
x_709 = x_6;
x_710 = x_1047;
x_711 = x_1048;
x_712 = x_1049;
x_713 = x_1050;
x_714 = x_1051;
goto block_722;
}
else
{
lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1087 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1087 = lean_box(0);
}
x_1088 = lean_box_uint32(x_1085);
x_1089 = lean_array_set(x_1049, x_1050, x_1088);
x_1090 = lean_nat_add(x_1050, x_829);
lean_dec(x_1050);
x_1091 = lean_nat_mod(x_1090, x_1047);
lean_dec(x_1090);
lean_inc_ref(x_1051);
lean_inc(x_1091);
lean_inc_ref(x_1089);
lean_inc(x_1048);
lean_inc(x_1047);
if (lean_is_scalar(x_1087)) {
 x_1092 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1092 = x_1087;
}
lean_ctor_set(x_1092, 0, x_1047);
lean_ctor_set(x_1092, 1, x_1048);
lean_ctor_set(x_1092, 2, x_1089);
lean_ctor_set(x_1092, 3, x_1091);
lean_ctor_set(x_1092, 4, x_1051);
lean_inc_ref(x_1011);
x_697 = x_1078;
x_698 = x_1011;
x_699 = x_1011;
x_700 = x_828;
x_701 = x_1013;
x_702 = x_831;
x_703 = x_1010;
x_704 = x_1084;
x_705 = x_829;
x_706 = x_1085;
x_707 = x_830;
x_708 = x_1044;
x_709 = x_1092;
x_710 = x_1047;
x_711 = x_1048;
x_712 = x_1089;
x_713 = x_1091;
x_714 = x_1051;
goto block_722;
}
}
}
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; 
x_1093 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1093);
x_1094 = lean_ctor_get(x_5, 1);
lean_inc(x_1094);
lean_dec_ref(x_5);
x_1095 = lean_unsigned_to_nat(5u);
x_1096 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1093, x_1094, x_1044, x_1095);
if (lean_obj_tag(x_1096) == 0)
{
lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; 
lean_dec_ref(x_1011);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1097 = lean_ctor_get(x_1096, 0);
lean_inc(x_1097);
if (lean_is_exclusive(x_1096)) {
 lean_ctor_release(x_1096, 0);
 x_1098 = x_1096;
} else {
 lean_dec_ref(x_1096);
 x_1098 = lean_box(0);
}
if (lean_is_scalar(x_1098)) {
 x_1099 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1099 = x_1098;
}
lean_ctor_set(x_1099, 0, x_1097);
return x_1099;
}
else
{
lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; uint32_t x_1111; uint8_t x_1112; 
x_1100 = lean_ctor_get(x_1096, 0);
lean_inc(x_1100);
lean_dec_ref(x_1096);
x_1101 = lean_ctor_get(x_1100, 0);
lean_inc(x_1101);
x_1102 = lean_ctor_get(x_1100, 1);
lean_inc(x_1102);
lean_dec(x_1100);
x_1103 = lean_ctor_get(x_6, 0);
lean_inc(x_1103);
x_1104 = lean_ctor_get(x_6, 1);
lean_inc(x_1104);
x_1105 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1105);
x_1106 = lean_ctor_get(x_6, 3);
lean_inc(x_1106);
x_1107 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1107);
x_1108 = lean_byte_array_size(x_2);
x_1109 = lean_nat_add(x_1010, x_1108);
x_1110 = lean_nat_sub(x_1109, x_1101);
lean_dec(x_1101);
lean_dec(x_1109);
x_1111 = lean_uint32_of_nat(x_1110);
x_1112 = lean_nat_dec_lt(x_1044, x_1103);
if (x_1112 == 0)
{
lean_inc_ref(x_1011);
x_658 = x_1011;
x_659 = x_1011;
x_660 = x_1110;
x_661 = x_828;
x_662 = x_1111;
x_663 = x_1102;
x_664 = x_1013;
x_665 = x_831;
x_666 = x_1010;
x_667 = x_829;
x_668 = x_830;
x_669 = x_1044;
x_670 = x_6;
x_671 = x_1103;
x_672 = x_1104;
x_673 = x_1105;
x_674 = x_1106;
x_675 = x_1107;
goto block_683;
}
else
{
lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1113 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1113 = lean_box(0);
}
x_1114 = lean_box_uint32(x_1111);
x_1115 = lean_array_set(x_1105, x_1106, x_1114);
x_1116 = lean_nat_add(x_1106, x_829);
lean_dec(x_1106);
x_1117 = lean_nat_mod(x_1116, x_1103);
lean_dec(x_1116);
lean_inc_ref(x_1107);
lean_inc(x_1117);
lean_inc_ref(x_1115);
lean_inc(x_1104);
lean_inc(x_1103);
if (lean_is_scalar(x_1113)) {
 x_1118 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1118 = x_1113;
}
lean_ctor_set(x_1118, 0, x_1103);
lean_ctor_set(x_1118, 1, x_1104);
lean_ctor_set(x_1118, 2, x_1115);
lean_ctor_set(x_1118, 3, x_1117);
lean_ctor_set(x_1118, 4, x_1107);
lean_inc_ref(x_1011);
x_658 = x_1011;
x_659 = x_1011;
x_660 = x_1110;
x_661 = x_828;
x_662 = x_1111;
x_663 = x_1102;
x_664 = x_1013;
x_665 = x_831;
x_666 = x_1010;
x_667 = x_829;
x_668 = x_830;
x_669 = x_1044;
x_670 = x_1118;
x_671 = x_1103;
x_672 = x_1104;
x_673 = x_1115;
x_674 = x_1117;
x_675 = x_1107;
goto block_683;
}
}
}
}
else
{
lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; lean_object* x_1122; 
x_1119 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1119);
x_1120 = lean_ctor_get(x_5, 1);
lean_inc(x_1120);
lean_dec_ref(x_5);
x_1121 = lean_unsigned_to_nat(5u);
x_1122 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1119, x_1120, x_1044, x_1121);
if (lean_obj_tag(x_1122) == 0)
{
lean_object* x_1123; lean_object* x_1124; lean_object* x_1125; 
lean_dec_ref(x_1011);
lean_dec_ref(x_831);
lean_dec(x_830);
lean_dec(x_829);
lean_dec_ref(x_828);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1123 = lean_ctor_get(x_1122, 0);
lean_inc(x_1123);
if (lean_is_exclusive(x_1122)) {
 lean_ctor_release(x_1122, 0);
 x_1124 = x_1122;
} else {
 lean_dec_ref(x_1122);
 x_1124 = lean_box(0);
}
if (lean_is_scalar(x_1124)) {
 x_1125 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1125 = x_1124;
}
lean_ctor_set(x_1125, 0, x_1123);
return x_1125;
}
else
{
lean_object* x_1126; lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; lean_object* x_1132; lean_object* x_1133; uint32_t x_1134; uint8_t x_1135; 
x_1126 = lean_ctor_get(x_1122, 0);
lean_inc(x_1126);
lean_dec_ref(x_1122);
x_1127 = lean_ctor_get(x_1126, 0);
lean_inc(x_1127);
x_1128 = lean_ctor_get(x_1126, 1);
lean_inc(x_1128);
lean_dec(x_1126);
x_1129 = lean_ctor_get(x_6, 0);
lean_inc(x_1129);
x_1130 = lean_ctor_get(x_6, 1);
lean_inc(x_1130);
x_1131 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1131);
x_1132 = lean_ctor_get(x_6, 3);
lean_inc(x_1132);
x_1133 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1133);
x_1134 = lean_uint32_of_nat(x_1127);
x_1135 = lean_nat_dec_lt(x_1044, x_1129);
if (x_1135 == 0)
{
lean_inc_ref(x_1011);
x_619 = x_1011;
x_620 = x_1011;
x_621 = x_828;
x_622 = x_1134;
x_623 = x_1127;
x_624 = x_1013;
x_625 = x_831;
x_626 = x_1010;
x_627 = x_1128;
x_628 = x_829;
x_629 = x_830;
x_630 = x_1044;
x_631 = x_6;
x_632 = x_1129;
x_633 = x_1130;
x_634 = x_1131;
x_635 = x_1132;
x_636 = x_1133;
goto block_644;
}
else
{
lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1136 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1136 = lean_box(0);
}
x_1137 = lean_box_uint32(x_1134);
x_1138 = lean_array_set(x_1131, x_1132, x_1137);
x_1139 = lean_nat_add(x_1132, x_829);
lean_dec(x_1132);
x_1140 = lean_nat_mod(x_1139, x_1129);
lean_dec(x_1139);
lean_inc_ref(x_1133);
lean_inc(x_1140);
lean_inc_ref(x_1138);
lean_inc(x_1130);
lean_inc(x_1129);
if (lean_is_scalar(x_1136)) {
 x_1141 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1141 = x_1136;
}
lean_ctor_set(x_1141, 0, x_1129);
lean_ctor_set(x_1141, 1, x_1130);
lean_ctor_set(x_1141, 2, x_1138);
lean_ctor_set(x_1141, 3, x_1140);
lean_ctor_set(x_1141, 4, x_1133);
lean_inc_ref(x_1011);
x_619 = x_1011;
x_620 = x_1011;
x_621 = x_828;
x_622 = x_1134;
x_623 = x_1127;
x_624 = x_1013;
x_625 = x_831;
x_626 = x_1010;
x_627 = x_1128;
x_628 = x_829;
x_629 = x_830;
x_630 = x_1044;
x_631 = x_1141;
x_632 = x_1129;
x_633 = x_1130;
x_634 = x_1138;
x_635 = x_1140;
x_636 = x_1133;
goto block_644;
}
}
}
}
}
}
else
{
lean_object* x_1142; lean_object* x_1143; 
lean_inc_ref(x_1008);
lean_dec(x_1009);
lean_dec(x_830);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1142, 0, x_5);
lean_ctor_set(x_1142, 1, x_6);
lean_inc_ref(x_1142);
lean_inc_ref(x_4);
x_1143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1143, 0, x_4);
lean_ctor_set(x_1143, 1, x_1142);
x_512 = x_1011;
x_513 = x_828;
x_514 = x_1008;
x_515 = x_831;
x_516 = x_1010;
x_517 = x_829;
x_518 = x_2;
x_519 = x_1143;
x_520 = x_4;
x_521 = x_1142;
x_522 = x_5;
x_523 = x_6;
goto block_530;
}
}
}
block_1163:
{
if (x_1153 == 0)
{
lean_dec(x_1150);
lean_dec_ref(x_1145);
x_828 = x_1148;
x_829 = x_1151;
x_830 = x_1152;
x_831 = x_1149;
goto block_1144;
}
else
{
lean_object* x_1154; lean_object* x_1155; lean_object* x_1156; 
lean_dec(x_1152);
lean_dec_ref(x_1149);
x_1154 = lean_unsigned_to_nat(0u);
x_1155 = lean_unsigned_to_nat(5u);
x_1156 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1145, x_1150, x_1154, x_1155);
if (lean_obj_tag(x_1156) == 0)
{
uint8_t x_1157; 
lean_dec(x_1151);
lean_dec_ref(x_1148);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1157 = !lean_is_exclusive(x_1156);
if (x_1157 == 0)
{
return x_1156;
}
else
{
lean_object* x_1158; lean_object* x_1159; 
x_1158 = lean_ctor_get(x_1156, 0);
lean_inc(x_1158);
lean_dec(x_1156);
x_1159 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1159, 0, x_1158);
return x_1159;
}
}
else
{
lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; 
x_1160 = lean_ctor_get(x_1156, 0);
lean_inc(x_1160);
lean_dec_ref(x_1156);
x_1161 = lean_ctor_get(x_1160, 0);
lean_inc(x_1161);
x_1162 = lean_ctor_get(x_1160, 1);
lean_inc(x_1162);
lean_dec(x_1160);
x_828 = x_1148;
x_829 = x_1151;
x_830 = x_1161;
x_831 = x_1162;
goto block_1144;
}
}
}
block_1179:
{
lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; lean_object* x_1169; lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; lean_object* x_1173; lean_object* x_1174; lean_object* x_1175; uint8_t x_1176; 
x_1165 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1166 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1167 = lean_uint8_to_nat(x_1164);
x_1168 = lean_array_get(x_1165, x_1166, x_1167);
x_1169 = lean_ctor_get(x_1168, 0);
x_1170 = lean_ctor_get(x_1169, 0);
x_1171 = lean_ctor_get(x_1169, 1);
lean_inc(x_1171);
x_1172 = lean_unsigned_to_nat(1u);
x_1173 = lean_nat_add(x_1146, x_1172);
lean_dec(x_1146);
lean_inc(x_1173);
lean_inc_ref(x_1145);
if (lean_is_scalar(x_1147)) {
 x_1174 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1174 = x_1147;
}
lean_ctor_set(x_1174, 0, x_1145);
lean_ctor_set(x_1174, 1, x_1173);
x_1175 = lean_unsigned_to_nat(0u);
x_1176 = lean_nat_dec_eq(x_1171, x_1175);
if (x_1176 == 0)
{
x_1148 = x_1168;
x_1149 = x_1174;
x_1150 = x_1173;
x_1151 = x_1172;
x_1152 = x_1171;
x_1153 = x_1176;
goto block_1163;
}
else
{
lean_object* x_1177; uint8_t x_1178; 
x_1177 = lean_box(0);
x_1178 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_1170, x_1177);
if (x_1178 == 0)
{
x_1148 = x_1168;
x_1149 = x_1174;
x_1150 = x_1173;
x_1151 = x_1172;
x_1152 = x_1171;
x_1153 = x_1176;
goto block_1163;
}
else
{
lean_dec(x_1173);
lean_dec_ref(x_1145);
x_828 = x_1168;
x_829 = x_1172;
x_830 = x_1171;
x_831 = x_1174;
goto block_1144;
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
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; uint8_t x_45; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; uint8_t x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_117; lean_object* x_118; uint32_t x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; uint8_t x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint32_t x_153; lean_object* x_154; uint8_t x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; uint8_t x_179; lean_object* x_180; lean_object* x_181; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; uint8_t x_191; uint32_t x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_199; lean_object* x_200; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; uint8_t x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint8_t x_226; uint32_t x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; uint8_t x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; uint8_t x_264; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_470; lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; uint8_t x_495; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; uint8_t x_536; lean_object* x_537; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; uint8_t x_544; lean_object* x_556; lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; uint8_t x_566; lean_object* x_567; lean_object* x_568; lean_object* x_569; lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_608; lean_object* x_609; uint8_t x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_619; uint32_t x_620; uint8_t x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_643; lean_object* x_644; uint8_t x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_654; uint8_t x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; uint32_t x_662; lean_object* x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_678; uint8_t x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; uint8_t x_689; lean_object* x_690; lean_object* x_691; uint32_t x_692; lean_object* x_693; lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_713; uint8_t x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; uint32_t x_724; lean_object* x_725; uint8_t x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_748; lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_756; uint8_t x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; lean_object* x_763; uint8_t x_764; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_1100; lean_object* x_1101; lean_object* x_1102; lean_object* x_1103; lean_object* x_1104; uint8_t x_1105; uint8_t x_1115; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_2, x_27);
lean_dec(x_2);
if (x_25 == 0)
{
uint8_t x_1136; lean_object* x_1137; lean_object* x_1138; uint8_t x_1139; 
x_1136 = l_instInhabitedUInt8;
x_1137 = lean_box(x_1136);
x_1138 = l_outOfBounds___redArg(x_1137);
x_1139 = lean_unbox(x_1138);
lean_dec(x_1138);
x_1115 = x_1139;
goto block_1135;
}
else
{
uint8_t x_1140; 
x_1140 = lean_byte_array_fget(x_20, x_21);
x_1115 = x_1140;
goto block_1135;
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
x_46 = lean_nat_add(x_42, x_38);
lean_dec(x_38);
lean_dec(x_42);
if (lean_is_scalar(x_24)) {
 x_47 = lean_alloc_ctor(0, 2, 0);
} else {
 x_47 = x_24;
}
lean_ctor_set(x_47, 0, x_41);
lean_ctor_set(x_47, 1, x_46);
x_48 = lean_box(x_45);
x_49 = lean_mk_array(x_44, x_48);
x_50 = lean_byte_array_mk(x_49);
x_51 = lean_byte_array_size(x_37);
x_52 = lean_byte_array_size(x_50);
x_53 = lean_byte_array_copy_slice(x_50, x_8, x_37, x_51, x_52, x_40);
lean_dec_ref(x_50);
x_29 = x_53;
x_30 = x_39;
x_31 = x_47;
x_32 = x_43;
goto block_36;
}
block_97:
{
lean_object* x_64; lean_object* x_65; uint8_t x_66; 
x_64 = lean_byte_array_size(x_55);
x_65 = lean_nat_add(x_59, x_64);
x_66 = lean_nat_dec_le(x_65, x_62);
if (x_66 == 0)
{
lean_object* x_67; uint8_t x_68; 
lean_dec(x_65);
x_67 = lean_nat_add(x_62, x_61);
x_68 = lean_nat_dec_le(x_67, x_59);
if (x_68 == 0)
{
uint8_t x_69; 
lean_dec(x_67);
x_69 = lean_nat_dec_le(x_59, x_62);
if (x_69 == 0)
{
lean_object* x_70; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; uint8_t x_77; 
x_70 = lean_nat_sub(x_59, x_62);
x_71 = lean_nat_sub(x_61, x_70);
lean_dec(x_70);
lean_dec(x_61);
x_72 = l_ByteArray_extract(x_1, x_62, x_59);
x_73 = lean_byte_array_size(x_72);
x_74 = lean_byte_array_copy_slice(x_72, x_8, x_55, x_64, x_73, x_60);
lean_dec_ref(x_72);
x_75 = lean_byte_array_size(x_74);
x_76 = lean_nat_sub(x_75, x_59);
x_77 = lean_nat_dec_le(x_71, x_76);
lean_dec(x_76);
if (x_77 == 0)
{
lean_object* x_78; lean_object* x_79; 
x_78 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_78, 0, x_8);
lean_ctor_set(x_78, 1, x_71);
lean_ctor_set(x_78, 2, x_57);
x_79 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_59, x_1, x_78, x_74, x_8);
lean_dec_ref(x_78);
lean_dec(x_59);
x_29 = x_79;
x_30 = x_58;
x_31 = x_56;
x_32 = x_63;
goto block_36;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; 
lean_dec(x_57);
x_80 = lean_nat_add(x_59, x_71);
lean_dec(x_71);
x_81 = l_ByteArray_extract(x_74, x_59, x_80);
lean_dec(x_80);
x_82 = lean_byte_array_size(x_81);
x_83 = lean_byte_array_copy_slice(x_81, x_8, x_74, x_75, x_82, x_60);
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
x_84 = lean_nat_sub(x_62, x_59);
lean_dec(x_59);
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
lean_ctor_set(x_87, 2, x_57);
x_88 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_84, x_87, x_55, x_8);
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
lean_dec(x_57);
x_89 = l_ByteArray_extract(x_55, x_84, x_85);
lean_dec(x_85);
x_90 = lean_byte_array_size(x_89);
x_91 = lean_byte_array_copy_slice(x_89, x_8, x_55, x_64, x_90, x_60);
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
lean_dec(x_59);
lean_dec(x_57);
x_92 = l_ByteArray_extract(x_1, x_62, x_67);
lean_dec(x_67);
x_93 = lean_byte_array_size(x_92);
x_94 = lean_byte_array_copy_slice(x_92, x_8, x_55, x_64, x_93, x_60);
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
lean_dec(x_59);
lean_dec_ref(x_58);
lean_dec(x_57);
lean_dec_ref(x_56);
lean_dec_ref(x_55);
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
lean_ctor_set(x_108, 0, x_100);
lean_ctor_set(x_108, 1, x_107);
x_55 = x_98;
x_56 = x_99;
x_57 = x_101;
x_58 = x_103;
x_59 = x_102;
x_60 = x_105;
x_61 = x_106;
x_62 = x_104;
x_63 = x_108;
goto block_97;
}
block_134:
{
uint8_t x_127; 
x_127 = lean_nat_dec_lt(x_118, x_123);
lean_dec(x_118);
if (x_127 == 0)
{
lean_dec_ref(x_126);
lean_dec(x_125);
lean_dec_ref(x_124);
lean_dec(x_123);
lean_dec(x_122);
x_98 = x_110;
x_99 = x_111;
x_100 = x_112;
x_101 = x_113;
x_102 = x_116;
x_103 = x_115;
x_104 = x_114;
x_105 = x_117;
x_106 = x_120;
x_107 = x_121;
goto block_109;
}
else
{
lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; 
lean_dec_ref(x_121);
x_128 = lean_unsigned_to_nat(256u);
x_129 = lean_nat_mul(x_123, x_128);
x_130 = lean_nat_mod(x_114, x_129);
lean_dec(x_129);
x_131 = lean_box_uint32(x_119);
x_132 = lean_array_set(x_126, x_130, x_131);
lean_dec(x_130);
x_133 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_133, 0, x_122);
lean_ctor_set(x_133, 1, x_123);
lean_ctor_set(x_133, 2, x_124);
lean_ctor_set(x_133, 3, x_125);
lean_ctor_set(x_133, 4, x_132);
x_98 = x_110;
x_99 = x_111;
x_100 = x_112;
x_101 = x_113;
x_102 = x_116;
x_103 = x_115;
x_104 = x_114;
x_105 = x_117;
x_106 = x_120;
x_107 = x_133;
goto block_109;
}
}
block_146:
{
lean_object* x_145; 
x_145 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_145, 0, x_142);
lean_ctor_set(x_145, 1, x_144);
x_55 = x_135;
x_56 = x_136;
x_57 = x_137;
x_58 = x_139;
x_59 = x_138;
x_60 = x_141;
x_61 = x_143;
x_62 = x_140;
x_63 = x_145;
goto block_97;
}
block_171:
{
uint8_t x_164; 
x_164 = lean_nat_dec_lt(x_156, x_160);
lean_dec(x_156);
if (x_164 == 0)
{
lean_dec_ref(x_163);
lean_dec(x_162);
lean_dec_ref(x_161);
lean_dec(x_160);
lean_dec(x_159);
x_135 = x_147;
x_136 = x_148;
x_137 = x_149;
x_138 = x_152;
x_139 = x_151;
x_140 = x_150;
x_141 = x_155;
x_142 = x_154;
x_143 = x_157;
x_144 = x_158;
goto block_146;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec_ref(x_158);
x_165 = lean_unsigned_to_nat(256u);
x_166 = lean_nat_mul(x_160, x_165);
x_167 = lean_nat_mod(x_150, x_166);
lean_dec(x_166);
x_168 = lean_box_uint32(x_153);
x_169 = lean_array_set(x_163, x_167, x_168);
lean_dec(x_167);
x_170 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_170, 0, x_159);
lean_ctor_set(x_170, 1, x_160);
lean_ctor_set(x_170, 2, x_161);
lean_ctor_set(x_170, 3, x_162);
lean_ctor_set(x_170, 4, x_169);
x_135 = x_147;
x_136 = x_148;
x_137 = x_149;
x_138 = x_152;
x_139 = x_151;
x_140 = x_150;
x_141 = x_155;
x_142 = x_154;
x_143 = x_157;
x_144 = x_170;
goto block_146;
}
}
block_183:
{
lean_object* x_182; 
x_182 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_182, 0, x_176);
lean_ctor_set(x_182, 1, x_181);
x_55 = x_172;
x_56 = x_173;
x_57 = x_174;
x_58 = x_178;
x_59 = x_177;
x_60 = x_179;
x_61 = x_180;
x_62 = x_175;
x_63 = x_182;
goto block_97;
}
block_208:
{
uint8_t x_201; 
x_201 = lean_nat_dec_lt(x_193, x_197);
lean_dec(x_193);
if (x_201 == 0)
{
lean_dec_ref(x_200);
lean_dec(x_199);
lean_dec_ref(x_198);
lean_dec(x_197);
lean_dec(x_196);
x_172 = x_184;
x_173 = x_185;
x_174 = x_188;
x_175 = x_187;
x_176 = x_186;
x_177 = x_190;
x_178 = x_189;
x_179 = x_191;
x_180 = x_194;
x_181 = x_195;
goto block_183;
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; 
lean_dec_ref(x_195);
x_202 = lean_unsigned_to_nat(256u);
x_203 = lean_nat_mul(x_197, x_202);
x_204 = lean_nat_mod(x_187, x_203);
lean_dec(x_203);
x_205 = lean_box_uint32(x_192);
x_206 = lean_array_set(x_200, x_204, x_205);
lean_dec(x_204);
x_207 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_207, 0, x_196);
lean_ctor_set(x_207, 1, x_197);
lean_ctor_set(x_207, 2, x_198);
lean_ctor_set(x_207, 3, x_199);
lean_ctor_set(x_207, 4, x_206);
x_172 = x_184;
x_173 = x_185;
x_174 = x_188;
x_175 = x_187;
x_176 = x_186;
x_177 = x_190;
x_178 = x_189;
x_179 = x_191;
x_180 = x_194;
x_181 = x_207;
goto block_183;
}
}
block_220:
{
lean_object* x_219; 
x_219 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_219, 0, x_216);
lean_ctor_set(x_219, 1, x_218);
x_55 = x_209;
x_56 = x_210;
x_57 = x_211;
x_58 = x_213;
x_59 = x_212;
x_60 = x_214;
x_61 = x_217;
x_62 = x_215;
x_63 = x_219;
goto block_97;
}
block_245:
{
uint8_t x_239; 
x_239 = lean_nat_dec_lt(x_229, x_235);
lean_dec(x_229);
if (x_239 == 0)
{
lean_dec_ref(x_238);
lean_dec(x_237);
lean_dec_ref(x_236);
lean_dec(x_235);
lean_dec(x_234);
x_209 = x_221;
x_210 = x_222;
x_211 = x_223;
x_212 = x_225;
x_213 = x_224;
x_214 = x_226;
x_215 = x_228;
x_216 = x_231;
x_217 = x_232;
x_218 = x_233;
goto block_220;
}
else
{
lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec_ref(x_233);
x_240 = lean_nat_mul(x_235, x_230);
x_241 = lean_nat_mod(x_228, x_240);
lean_dec(x_240);
x_242 = lean_box_uint32(x_227);
x_243 = lean_array_set(x_238, x_241, x_242);
lean_dec(x_241);
x_244 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_244, 0, x_234);
lean_ctor_set(x_244, 1, x_235);
lean_ctor_set(x_244, 2, x_236);
lean_ctor_set(x_244, 3, x_237);
lean_ctor_set(x_244, 4, x_243);
x_209 = x_221;
x_210 = x_222;
x_211 = x_223;
x_212 = x_225;
x_213 = x_224;
x_214 = x_226;
x_215 = x_228;
x_216 = x_231;
x_217 = x_232;
x_218 = x_244;
goto block_220;
}
}
block_289:
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; uint32_t x_275; lean_object* x_276; uint32_t x_277; uint8_t x_278; 
x_265 = lean_nat_add(x_259, x_247);
lean_dec(x_259);
x_266 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_266, 0, x_262);
lean_ctor_set(x_266, 1, x_265);
x_267 = lean_nat_sub(x_256, x_260);
lean_dec(x_256);
x_268 = lean_nat_sub(x_267, x_261);
lean_dec(x_267);
x_269 = lean_unsigned_to_nat(256u);
x_270 = lean_nat_mul(x_268, x_269);
lean_dec(x_268);
x_271 = lean_uint8_to_nat(x_264);
x_272 = lean_nat_add(x_270, x_271);
lean_dec(x_270);
x_273 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_274 = lean_array_get_borrowed(x_273, x_263, x_272);
lean_dec(x_272);
x_275 = lean_unbox_uint32(x_274);
x_276 = lean_uint32_to_nat(x_275);
x_277 = lean_uint32_of_nat(x_276);
x_278 = lean_nat_dec_lt(x_249, x_261);
if (x_278 == 0)
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec_ref(x_263);
lean_dec(x_261);
lean_dec_ref(x_258);
lean_dec(x_257);
lean_dec(x_252);
x_279 = lean_ctor_get(x_251, 0);
lean_inc(x_279);
x_280 = lean_ctor_get(x_251, 1);
lean_inc(x_280);
x_281 = lean_ctor_get(x_251, 2);
lean_inc_ref(x_281);
x_282 = lean_ctor_get(x_251, 3);
lean_inc(x_282);
x_283 = lean_ctor_get(x_251, 4);
lean_inc_ref(x_283);
x_221 = x_246;
x_222 = x_253;
x_223 = x_247;
x_224 = x_254;
x_225 = x_248;
x_226 = x_255;
x_227 = x_277;
x_228 = x_276;
x_229 = x_249;
x_230 = x_269;
x_231 = x_266;
x_232 = x_250;
x_233 = x_251;
x_234 = x_279;
x_235 = x_280;
x_236 = x_281;
x_237 = x_282;
x_238 = x_283;
goto block_245;
}
else
{
lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; 
lean_dec_ref(x_251);
x_284 = lean_box_uint32(x_277);
x_285 = lean_array_set(x_258, x_252, x_284);
x_286 = lean_nat_add(x_252, x_247);
lean_dec(x_252);
x_287 = lean_nat_mod(x_286, x_261);
lean_dec(x_286);
lean_inc_ref(x_263);
lean_inc(x_287);
lean_inc_ref(x_285);
lean_inc(x_257);
lean_inc(x_261);
x_288 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_288, 0, x_261);
lean_ctor_set(x_288, 1, x_257);
lean_ctor_set(x_288, 2, x_285);
lean_ctor_set(x_288, 3, x_287);
lean_ctor_set(x_288, 4, x_263);
x_221 = x_246;
x_222 = x_253;
x_223 = x_247;
x_224 = x_254;
x_225 = x_248;
x_226 = x_255;
x_227 = x_277;
x_228 = x_276;
x_229 = x_249;
x_230 = x_269;
x_231 = x_266;
x_232 = x_250;
x_233 = x_288;
x_234 = x_261;
x_235 = x_257;
x_236 = x_285;
x_237 = x_287;
x_238 = x_263;
goto block_245;
}
}
block_295:
{
lean_object* x_293; lean_object* x_294; 
x_293 = lean_ctor_get(x_292, 0);
lean_inc(x_293);
x_294 = lean_ctor_get(x_292, 1);
lean_inc(x_294);
lean_dec_ref(x_292);
x_29 = x_290;
x_30 = x_291;
x_31 = x_293;
x_32 = x_294;
goto block_36;
}
block_469:
{
lean_object* x_307; uint8_t x_308; 
x_307 = lean_box(0);
x_308 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_304, x_307);
if (x_308 == 0)
{
switch (lean_obj_tag(x_304)) {
case 0:
{
lean_dec(x_305);
lean_dec_ref(x_302);
lean_dec_ref(x_301);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_298);
lean_dec_ref(x_296);
lean_dec(x_24);
x_290 = x_297;
x_291 = x_306;
x_292 = x_303;
goto block_295;
}
case 1:
{
uint8_t x_309; 
lean_dec_ref(x_303);
lean_dec_ref(x_301);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_296);
lean_dec(x_24);
x_309 = !lean_is_exclusive(x_298);
if (x_309 == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; uint8_t x_314; 
x_310 = lean_ctor_get(x_298, 0);
x_311 = lean_ctor_get(x_298, 1);
x_312 = lean_nat_add(x_311, x_305);
lean_dec(x_305);
x_313 = lean_byte_array_size(x_310);
x_314 = lean_nat_dec_le(x_312, x_313);
if (x_314 == 0)
{
lean_object* x_315; 
lean_dec(x_312);
lean_free_object(x_298);
lean_dec(x_311);
lean_dec_ref(x_310);
lean_dec_ref(x_306);
lean_dec_ref(x_302);
lean_dec_ref(x_297);
lean_dec(x_28);
x_315 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_315;
}
else
{
if (x_314 == 0)
{
lean_object* x_316; 
lean_dec(x_312);
lean_free_object(x_298);
lean_dec(x_311);
lean_dec_ref(x_310);
lean_dec_ref(x_306);
lean_dec_ref(x_302);
lean_dec_ref(x_297);
lean_dec(x_28);
x_316 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_316;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; 
x_317 = l_ByteArray_extract(x_310, x_311, x_312);
lean_ctor_set(x_298, 1, x_312);
x_318 = lean_byte_array_size(x_297);
x_319 = lean_byte_array_size(x_317);
x_320 = lean_byte_array_copy_slice(x_317, x_8, x_297, x_318, x_319, x_308);
lean_dec_ref(x_317);
x_29 = x_320;
x_30 = x_306;
x_31 = x_298;
x_32 = x_302;
goto block_36;
}
}
}
else
{
lean_object* x_321; lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; 
x_321 = lean_ctor_get(x_298, 0);
x_322 = lean_ctor_get(x_298, 1);
lean_inc(x_322);
lean_inc(x_321);
lean_dec(x_298);
x_323 = lean_nat_add(x_322, x_305);
lean_dec(x_305);
x_324 = lean_byte_array_size(x_321);
x_325 = lean_nat_dec_le(x_323, x_324);
if (x_325 == 0)
{
lean_object* x_326; 
lean_dec(x_323);
lean_dec(x_322);
lean_dec_ref(x_321);
lean_dec_ref(x_306);
lean_dec_ref(x_302);
lean_dec_ref(x_297);
lean_dec(x_28);
x_326 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_326;
}
else
{
if (x_325 == 0)
{
lean_object* x_327; 
lean_dec(x_323);
lean_dec(x_322);
lean_dec_ref(x_321);
lean_dec_ref(x_306);
lean_dec_ref(x_302);
lean_dec_ref(x_297);
lean_dec(x_28);
x_327 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_327;
}
else
{
lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; 
x_328 = l_ByteArray_extract(x_321, x_322, x_323);
x_329 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_329, 0, x_321);
lean_ctor_set(x_329, 1, x_323);
x_330 = lean_byte_array_size(x_297);
x_331 = lean_byte_array_size(x_328);
x_332 = lean_byte_array_copy_slice(x_328, x_8, x_297, x_330, x_331, x_308);
lean_dec_ref(x_328);
x_29 = x_332;
x_30 = x_306;
x_31 = x_329;
x_32 = x_302;
goto block_36;
}
}
}
}
case 2:
{
lean_object* x_333; lean_object* x_334; lean_object* x_335; uint8_t x_336; 
lean_dec_ref(x_303);
lean_dec_ref(x_301);
lean_dec(x_300);
lean_dec_ref(x_296);
x_333 = lean_ctor_get(x_298, 0);
lean_inc_ref(x_333);
x_334 = lean_ctor_get(x_298, 1);
lean_inc(x_334);
lean_dec_ref(x_298);
x_335 = lean_byte_array_size(x_333);
x_336 = lean_nat_dec_lt(x_334, x_335);
if (x_336 == 0)
{
lean_object* x_337; 
lean_dec(x_334);
lean_dec_ref(x_333);
lean_dec_ref(x_306);
lean_dec(x_305);
lean_dec_ref(x_302);
lean_dec(x_299);
lean_dec_ref(x_297);
lean_dec(x_28);
lean_dec(x_24);
x_337 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_337;
}
else
{
if (x_336 == 0)
{
uint8_t x_338; lean_object* x_339; lean_object* x_340; uint8_t x_341; 
x_338 = l_instInhabitedUInt8;
x_339 = lean_box(x_338);
x_340 = l_outOfBounds___redArg(x_339);
x_341 = lean_unbox(x_340);
lean_dec(x_340);
x_37 = x_297;
x_38 = x_299;
x_39 = x_306;
x_40 = x_308;
x_41 = x_333;
x_42 = x_334;
x_43 = x_302;
x_44 = x_305;
x_45 = x_341;
goto block_54;
}
else
{
uint8_t x_342; 
x_342 = lean_byte_array_fget(x_333, x_334);
x_37 = x_297;
x_38 = x_299;
x_39 = x_306;
x_40 = x_308;
x_41 = x_333;
x_42 = x_334;
x_43 = x_302;
x_44 = x_305;
x_45 = x_342;
goto block_54;
}
}
}
default: 
{
uint8_t x_343; lean_object* x_344; uint8_t x_345; 
lean_dec_ref(x_303);
lean_dec_ref(x_302);
lean_dec(x_24);
x_343 = lean_ctor_get_uint8(x_304, 0);
lean_dec_ref(x_304);
x_344 = lean_uint8_to_nat(x_343);
x_345 = lean_nat_dec_eq(x_344, x_8);
if (x_345 == 0)
{
uint8_t x_346; 
x_346 = lean_nat_dec_eq(x_344, x_299);
if (x_346 == 0)
{
lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; uint8_t x_354; 
x_347 = lean_ctor_get(x_296, 0);
lean_inc(x_347);
x_348 = lean_ctor_get(x_296, 1);
lean_inc(x_348);
x_349 = lean_ctor_get(x_296, 2);
lean_inc_ref(x_349);
x_350 = lean_ctor_get(x_296, 3);
lean_inc(x_350);
x_351 = lean_ctor_get(x_296, 4);
lean_inc_ref(x_351);
x_352 = lean_unsigned_to_nat(2u);
x_353 = lean_nat_add(x_352, x_347);
x_354 = lean_nat_dec_lt(x_344, x_353);
if (x_354 == 0)
{
lean_object* x_355; uint8_t x_356; 
x_355 = lean_nat_add(x_353, x_348);
lean_dec(x_353);
x_356 = lean_nat_dec_lt(x_344, x_355);
lean_dec(x_355);
if (x_356 == 0)
{
lean_object* x_357; lean_object* x_358; 
lean_dec_ref(x_351);
lean_dec(x_350);
lean_dec_ref(x_349);
lean_dec(x_348);
lean_dec(x_347);
lean_dec_ref(x_306);
lean_dec(x_305);
lean_dec_ref(x_301);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec(x_28);
x_357 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_357, 0, x_344);
x_358 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_358, 0, x_357);
return x_358;
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; 
x_359 = lean_ctor_get(x_301, 0);
lean_inc_ref(x_359);
x_360 = lean_ctor_get(x_301, 1);
lean_inc(x_360);
lean_dec_ref(x_301);
x_361 = lean_byte_array_size(x_359);
x_362 = lean_nat_dec_lt(x_360, x_361);
if (x_362 == 0)
{
lean_object* x_363; 
lean_dec(x_360);
lean_dec_ref(x_359);
lean_dec_ref(x_351);
lean_dec(x_350);
lean_dec_ref(x_349);
lean_dec(x_348);
lean_dec(x_347);
lean_dec_ref(x_306);
lean_dec(x_305);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec(x_28);
x_363 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_363;
}
else
{
if (x_362 == 0)
{
uint8_t x_364; lean_object* x_365; lean_object* x_366; uint8_t x_367; 
x_364 = l_instInhabitedUInt8;
x_365 = lean_box(x_364);
x_366 = l_outOfBounds___redArg(x_365);
x_367 = lean_unbox(x_366);
lean_dec(x_366);
x_246 = x_297;
x_247 = x_299;
x_248 = x_300;
x_249 = x_8;
x_250 = x_305;
x_251 = x_296;
x_252 = x_350;
x_253 = x_298;
x_254 = x_306;
x_255 = x_308;
x_256 = x_344;
x_257 = x_348;
x_258 = x_349;
x_259 = x_360;
x_260 = x_352;
x_261 = x_347;
x_262 = x_359;
x_263 = x_351;
x_264 = x_367;
goto block_289;
}
else
{
uint8_t x_368; 
x_368 = lean_byte_array_fget(x_359, x_360);
x_246 = x_297;
x_247 = x_299;
x_248 = x_300;
x_249 = x_8;
x_250 = x_305;
x_251 = x_296;
x_252 = x_350;
x_253 = x_298;
x_254 = x_306;
x_255 = x_308;
x_256 = x_344;
x_257 = x_348;
x_258 = x_349;
x_259 = x_360;
x_260 = x_352;
x_261 = x_347;
x_262 = x_359;
x_263 = x_351;
x_264 = x_368;
goto block_289;
}
}
}
}
else
{
lean_object* x_369; lean_object* x_370; lean_object* x_371; lean_object* x_372; 
lean_dec(x_353);
x_369 = lean_ctor_get(x_301, 0);
lean_inc_ref(x_369);
x_370 = lean_ctor_get(x_301, 1);
lean_inc(x_370);
lean_dec_ref(x_301);
x_371 = lean_unsigned_to_nat(5u);
x_372 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_369, x_370, x_8, x_371);
if (lean_obj_tag(x_372) == 0)
{
uint8_t x_373; 
lean_dec_ref(x_351);
lean_dec(x_350);
lean_dec_ref(x_349);
lean_dec(x_348);
lean_dec(x_347);
lean_dec_ref(x_306);
lean_dec(x_305);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec(x_28);
x_373 = !lean_is_exclusive(x_372);
if (x_373 == 0)
{
return x_372;
}
else
{
lean_object* x_374; lean_object* x_375; 
x_374 = lean_ctor_get(x_372, 0);
lean_inc(x_374);
lean_dec(x_372);
x_375 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_375, 0, x_374);
return x_375;
}
}
else
{
lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; uint32_t x_382; lean_object* x_383; lean_object* x_384; uint32_t x_385; uint8_t x_386; 
x_376 = lean_ctor_get(x_372, 0);
lean_inc(x_376);
lean_dec_ref(x_372);
x_377 = lean_ctor_get(x_376, 0);
lean_inc(x_377);
x_378 = lean_ctor_get(x_376, 1);
lean_inc(x_378);
lean_dec(x_376);
x_379 = lean_nat_sub(x_344, x_352);
x_380 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_381 = lean_array_get_borrowed(x_380, x_349, x_379);
lean_dec(x_379);
x_382 = lean_unbox_uint32(x_381);
x_383 = lean_uint32_to_nat(x_382);
x_384 = lean_nat_add(x_383, x_377);
lean_dec(x_377);
lean_dec(x_383);
x_385 = lean_uint32_of_nat(x_384);
x_386 = lean_nat_dec_lt(x_8, x_347);
if (x_386 == 0)
{
x_184 = x_297;
x_185 = x_298;
x_186 = x_378;
x_187 = x_384;
x_188 = x_299;
x_189 = x_306;
x_190 = x_300;
x_191 = x_308;
x_192 = x_385;
x_193 = x_8;
x_194 = x_305;
x_195 = x_296;
x_196 = x_347;
x_197 = x_348;
x_198 = x_349;
x_199 = x_350;
x_200 = x_351;
goto block_208;
}
else
{
uint8_t x_387; 
x_387 = !lean_is_exclusive(x_296);
if (x_387 == 0)
{
lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; 
x_388 = lean_ctor_get(x_296, 4);
lean_dec(x_388);
x_389 = lean_ctor_get(x_296, 3);
lean_dec(x_389);
x_390 = lean_ctor_get(x_296, 2);
lean_dec(x_390);
x_391 = lean_ctor_get(x_296, 1);
lean_dec(x_391);
x_392 = lean_ctor_get(x_296, 0);
lean_dec(x_392);
x_393 = lean_box_uint32(x_385);
x_394 = lean_array_set(x_349, x_350, x_393);
x_395 = lean_nat_add(x_350, x_299);
lean_dec(x_350);
x_396 = lean_nat_mod(x_395, x_347);
lean_dec(x_395);
lean_inc_ref(x_351);
lean_inc(x_396);
lean_inc_ref(x_394);
lean_inc(x_348);
lean_inc(x_347);
lean_ctor_set(x_296, 3, x_396);
lean_ctor_set(x_296, 2, x_394);
x_184 = x_297;
x_185 = x_298;
x_186 = x_378;
x_187 = x_384;
x_188 = x_299;
x_189 = x_306;
x_190 = x_300;
x_191 = x_308;
x_192 = x_385;
x_193 = x_8;
x_194 = x_305;
x_195 = x_296;
x_196 = x_347;
x_197 = x_348;
x_198 = x_394;
x_199 = x_396;
x_200 = x_351;
goto block_208;
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; 
lean_dec(x_296);
x_397 = lean_box_uint32(x_385);
x_398 = lean_array_set(x_349, x_350, x_397);
x_399 = lean_nat_add(x_350, x_299);
lean_dec(x_350);
x_400 = lean_nat_mod(x_399, x_347);
lean_dec(x_399);
lean_inc_ref(x_351);
lean_inc(x_400);
lean_inc_ref(x_398);
lean_inc(x_348);
lean_inc(x_347);
x_401 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_401, 0, x_347);
lean_ctor_set(x_401, 1, x_348);
lean_ctor_set(x_401, 2, x_398);
lean_ctor_set(x_401, 3, x_400);
lean_ctor_set(x_401, 4, x_351);
x_184 = x_297;
x_185 = x_298;
x_186 = x_378;
x_187 = x_384;
x_188 = x_299;
x_189 = x_306;
x_190 = x_300;
x_191 = x_308;
x_192 = x_385;
x_193 = x_8;
x_194 = x_305;
x_195 = x_401;
x_196 = x_347;
x_197 = x_348;
x_198 = x_398;
x_199 = x_400;
x_200 = x_351;
goto block_208;
}
}
}
}
}
else
{
lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; 
x_402 = lean_ctor_get(x_301, 0);
lean_inc_ref(x_402);
x_403 = lean_ctor_get(x_301, 1);
lean_inc(x_403);
lean_dec_ref(x_301);
x_404 = lean_unsigned_to_nat(5u);
x_405 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_402, x_403, x_8, x_404);
if (lean_obj_tag(x_405) == 0)
{
uint8_t x_406; 
lean_dec_ref(x_306);
lean_dec(x_305);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec(x_28);
x_406 = !lean_is_exclusive(x_405);
if (x_406 == 0)
{
return x_405;
}
else
{
lean_object* x_407; lean_object* x_408; 
x_407 = lean_ctor_get(x_405, 0);
lean_inc(x_407);
lean_dec(x_405);
x_408 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_408, 0, x_407);
return x_408;
}
}
else
{
lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; uint32_t x_420; uint8_t x_421; 
x_409 = lean_ctor_get(x_405, 0);
lean_inc(x_409);
lean_dec_ref(x_405);
x_410 = lean_ctor_get(x_409, 0);
lean_inc(x_410);
x_411 = lean_ctor_get(x_409, 1);
lean_inc(x_411);
lean_dec(x_409);
x_412 = lean_ctor_get(x_296, 0);
lean_inc(x_412);
x_413 = lean_ctor_get(x_296, 1);
lean_inc(x_413);
x_414 = lean_ctor_get(x_296, 2);
lean_inc_ref(x_414);
x_415 = lean_ctor_get(x_296, 3);
lean_inc(x_415);
x_416 = lean_ctor_get(x_296, 4);
lean_inc_ref(x_416);
x_417 = lean_byte_array_size(x_297);
x_418 = lean_nat_add(x_300, x_417);
x_419 = lean_nat_sub(x_418, x_410);
lean_dec(x_410);
lean_dec(x_418);
x_420 = lean_uint32_of_nat(x_419);
x_421 = lean_nat_dec_lt(x_8, x_412);
if (x_421 == 0)
{
x_147 = x_297;
x_148 = x_298;
x_149 = x_299;
x_150 = x_419;
x_151 = x_306;
x_152 = x_300;
x_153 = x_420;
x_154 = x_411;
x_155 = x_308;
x_156 = x_8;
x_157 = x_305;
x_158 = x_296;
x_159 = x_412;
x_160 = x_413;
x_161 = x_414;
x_162 = x_415;
x_163 = x_416;
goto block_171;
}
else
{
uint8_t x_422; 
x_422 = !lean_is_exclusive(x_296);
if (x_422 == 0)
{
lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
x_423 = lean_ctor_get(x_296, 4);
lean_dec(x_423);
x_424 = lean_ctor_get(x_296, 3);
lean_dec(x_424);
x_425 = lean_ctor_get(x_296, 2);
lean_dec(x_425);
x_426 = lean_ctor_get(x_296, 1);
lean_dec(x_426);
x_427 = lean_ctor_get(x_296, 0);
lean_dec(x_427);
x_428 = lean_box_uint32(x_420);
x_429 = lean_array_set(x_414, x_415, x_428);
x_430 = lean_nat_add(x_415, x_299);
lean_dec(x_415);
x_431 = lean_nat_mod(x_430, x_412);
lean_dec(x_430);
lean_inc_ref(x_416);
lean_inc(x_431);
lean_inc_ref(x_429);
lean_inc(x_413);
lean_inc(x_412);
lean_ctor_set(x_296, 3, x_431);
lean_ctor_set(x_296, 2, x_429);
x_147 = x_297;
x_148 = x_298;
x_149 = x_299;
x_150 = x_419;
x_151 = x_306;
x_152 = x_300;
x_153 = x_420;
x_154 = x_411;
x_155 = x_308;
x_156 = x_8;
x_157 = x_305;
x_158 = x_296;
x_159 = x_412;
x_160 = x_413;
x_161 = x_429;
x_162 = x_431;
x_163 = x_416;
goto block_171;
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; 
lean_dec(x_296);
x_432 = lean_box_uint32(x_420);
x_433 = lean_array_set(x_414, x_415, x_432);
x_434 = lean_nat_add(x_415, x_299);
lean_dec(x_415);
x_435 = lean_nat_mod(x_434, x_412);
lean_dec(x_434);
lean_inc_ref(x_416);
lean_inc(x_435);
lean_inc_ref(x_433);
lean_inc(x_413);
lean_inc(x_412);
x_436 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_436, 0, x_412);
lean_ctor_set(x_436, 1, x_413);
lean_ctor_set(x_436, 2, x_433);
lean_ctor_set(x_436, 3, x_435);
lean_ctor_set(x_436, 4, x_416);
x_147 = x_297;
x_148 = x_298;
x_149 = x_299;
x_150 = x_419;
x_151 = x_306;
x_152 = x_300;
x_153 = x_420;
x_154 = x_411;
x_155 = x_308;
x_156 = x_8;
x_157 = x_305;
x_158 = x_436;
x_159 = x_412;
x_160 = x_413;
x_161 = x_433;
x_162 = x_435;
x_163 = x_416;
goto block_171;
}
}
}
}
}
else
{
lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; 
x_437 = lean_ctor_get(x_301, 0);
lean_inc_ref(x_437);
x_438 = lean_ctor_get(x_301, 1);
lean_inc(x_438);
lean_dec_ref(x_301);
x_439 = lean_unsigned_to_nat(5u);
x_440 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_437, x_438, x_8, x_439);
if (lean_obj_tag(x_440) == 0)
{
uint8_t x_441; 
lean_dec_ref(x_306);
lean_dec(x_305);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec(x_28);
x_441 = !lean_is_exclusive(x_440);
if (x_441 == 0)
{
return x_440;
}
else
{
lean_object* x_442; lean_object* x_443; 
x_442 = lean_ctor_get(x_440, 0);
lean_inc(x_442);
lean_dec(x_440);
x_443 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_443, 0, x_442);
return x_443;
}
}
else
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; uint32_t x_452; uint8_t x_453; 
x_444 = lean_ctor_get(x_440, 0);
lean_inc(x_444);
lean_dec_ref(x_440);
x_445 = lean_ctor_get(x_444, 0);
lean_inc(x_445);
x_446 = lean_ctor_get(x_444, 1);
lean_inc(x_446);
lean_dec(x_444);
x_447 = lean_ctor_get(x_296, 0);
lean_inc(x_447);
x_448 = lean_ctor_get(x_296, 1);
lean_inc(x_448);
x_449 = lean_ctor_get(x_296, 2);
lean_inc_ref(x_449);
x_450 = lean_ctor_get(x_296, 3);
lean_inc(x_450);
x_451 = lean_ctor_get(x_296, 4);
lean_inc_ref(x_451);
x_452 = lean_uint32_of_nat(x_445);
x_453 = lean_nat_dec_lt(x_8, x_447);
if (x_453 == 0)
{
x_110 = x_297;
x_111 = x_298;
x_112 = x_446;
x_113 = x_299;
x_114 = x_445;
x_115 = x_306;
x_116 = x_300;
x_117 = x_308;
x_118 = x_8;
x_119 = x_452;
x_120 = x_305;
x_121 = x_296;
x_122 = x_447;
x_123 = x_448;
x_124 = x_449;
x_125 = x_450;
x_126 = x_451;
goto block_134;
}
else
{
uint8_t x_454; 
x_454 = !lean_is_exclusive(x_296);
if (x_454 == 0)
{
lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
x_455 = lean_ctor_get(x_296, 4);
lean_dec(x_455);
x_456 = lean_ctor_get(x_296, 3);
lean_dec(x_456);
x_457 = lean_ctor_get(x_296, 2);
lean_dec(x_457);
x_458 = lean_ctor_get(x_296, 1);
lean_dec(x_458);
x_459 = lean_ctor_get(x_296, 0);
lean_dec(x_459);
x_460 = lean_box_uint32(x_452);
x_461 = lean_array_set(x_449, x_450, x_460);
x_462 = lean_nat_add(x_450, x_299);
lean_dec(x_450);
x_463 = lean_nat_mod(x_462, x_447);
lean_dec(x_462);
lean_inc_ref(x_451);
lean_inc(x_463);
lean_inc_ref(x_461);
lean_inc(x_448);
lean_inc(x_447);
lean_ctor_set(x_296, 3, x_463);
lean_ctor_set(x_296, 2, x_461);
x_110 = x_297;
x_111 = x_298;
x_112 = x_446;
x_113 = x_299;
x_114 = x_445;
x_115 = x_306;
x_116 = x_300;
x_117 = x_308;
x_118 = x_8;
x_119 = x_452;
x_120 = x_305;
x_121 = x_296;
x_122 = x_447;
x_123 = x_448;
x_124 = x_461;
x_125 = x_463;
x_126 = x_451;
goto block_134;
}
else
{
lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
lean_dec(x_296);
x_464 = lean_box_uint32(x_452);
x_465 = lean_array_set(x_449, x_450, x_464);
x_466 = lean_nat_add(x_450, x_299);
lean_dec(x_450);
x_467 = lean_nat_mod(x_466, x_447);
lean_dec(x_466);
lean_inc_ref(x_451);
lean_inc(x_467);
lean_inc_ref(x_465);
lean_inc(x_448);
lean_inc(x_447);
x_468 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_468, 0, x_447);
lean_ctor_set(x_468, 1, x_448);
lean_ctor_set(x_468, 2, x_465);
lean_ctor_set(x_468, 3, x_467);
lean_ctor_set(x_468, 4, x_451);
x_110 = x_297;
x_111 = x_298;
x_112 = x_446;
x_113 = x_299;
x_114 = x_445;
x_115 = x_306;
x_116 = x_300;
x_117 = x_308;
x_118 = x_8;
x_119 = x_452;
x_120 = x_305;
x_121 = x_468;
x_122 = x_447;
x_123 = x_448;
x_124 = x_465;
x_125 = x_467;
x_126 = x_451;
goto block_134;
}
}
}
}
}
}
}
else
{
lean_dec(x_305);
lean_dec(x_304);
lean_dec_ref(x_302);
lean_dec_ref(x_301);
lean_dec(x_300);
lean_dec(x_299);
lean_dec_ref(x_298);
lean_dec_ref(x_296);
lean_dec(x_24);
x_290 = x_297;
x_291 = x_306;
x_292 = x_303;
goto block_295;
}
}
block_483:
{
lean_object* x_481; lean_object* x_482; 
x_481 = lean_ctor_get(x_478, 1);
lean_inc_ref(x_481);
lean_dec_ref(x_478);
x_482 = lean_ctor_get(x_481, 0);
lean_inc(x_482);
lean_dec_ref(x_481);
x_296 = x_470;
x_297 = x_471;
x_298 = x_472;
x_299 = x_473;
x_300 = x_474;
x_301 = x_475;
x_302 = x_476;
x_303 = x_477;
x_304 = x_482;
x_305 = x_479;
x_306 = x_480;
goto block_469;
}
block_506:
{
if (x_495 == 0)
{
x_470 = x_485;
x_471 = x_484;
x_472 = x_486;
x_473 = x_487;
x_474 = x_488;
x_475 = x_490;
x_476 = x_492;
x_477 = x_491;
x_478 = x_494;
x_479 = x_489;
x_480 = x_493;
goto block_483;
}
else
{
lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; 
lean_dec(x_489);
x_496 = lean_ctor_get(x_493, 0);
lean_inc_ref(x_496);
x_497 = lean_ctor_get(x_493, 1);
lean_inc(x_497);
lean_dec_ref(x_493);
x_498 = lean_unsigned_to_nat(5u);
x_499 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_496, x_497, x_8, x_498);
if (lean_obj_tag(x_499) == 0)
{
uint8_t x_500; 
lean_dec_ref(x_494);
lean_dec_ref(x_492);
lean_dec_ref(x_491);
lean_dec_ref(x_490);
lean_dec(x_488);
lean_dec(x_487);
lean_dec_ref(x_486);
lean_dec_ref(x_485);
lean_dec_ref(x_484);
lean_dec(x_28);
lean_dec(x_24);
x_500 = !lean_is_exclusive(x_499);
if (x_500 == 0)
{
return x_499;
}
else
{
lean_object* x_501; lean_object* x_502; 
x_501 = lean_ctor_get(x_499, 0);
lean_inc(x_501);
lean_dec(x_499);
x_502 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_502, 0, x_501);
return x_502;
}
}
else
{
lean_object* x_503; lean_object* x_504; lean_object* x_505; 
x_503 = lean_ctor_get(x_499, 0);
lean_inc(x_503);
lean_dec_ref(x_499);
x_504 = lean_ctor_get(x_503, 0);
lean_inc(x_504);
x_505 = lean_ctor_get(x_503, 1);
lean_inc(x_505);
lean_dec(x_503);
x_470 = x_485;
x_471 = x_484;
x_472 = x_486;
x_473 = x_487;
x_474 = x_488;
x_475 = x_490;
x_476 = x_492;
x_477 = x_491;
x_478 = x_494;
x_479 = x_504;
x_480 = x_505;
goto block_483;
}
}
}
block_523:
{
lean_object* x_518; lean_object* x_519; uint8_t x_520; 
x_518 = lean_ctor_get(x_511, 0);
lean_inc(x_518);
x_519 = lean_ctor_get(x_511, 1);
lean_inc(x_519);
lean_dec_ref(x_511);
x_520 = lean_nat_dec_eq(x_519, x_8);
if (x_520 == 0)
{
lean_dec(x_518);
x_484 = x_512;
x_485 = x_517;
x_486 = x_514;
x_487 = x_507;
x_488 = x_508;
x_489 = x_519;
x_490 = x_516;
x_491 = x_513;
x_492 = x_515;
x_493 = x_509;
x_494 = x_510;
x_495 = x_520;
goto block_506;
}
else
{
lean_object* x_521; uint8_t x_522; 
x_521 = lean_box(0);
x_522 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_518, x_521);
if (x_522 == 0)
{
lean_dec(x_518);
x_484 = x_512;
x_485 = x_517;
x_486 = x_514;
x_487 = x_507;
x_488 = x_508;
x_489 = x_519;
x_490 = x_516;
x_491 = x_513;
x_492 = x_515;
x_493 = x_509;
x_494 = x_510;
x_495 = x_520;
goto block_506;
}
else
{
lean_dec_ref(x_510);
x_296 = x_517;
x_297 = x_512;
x_298 = x_514;
x_299 = x_507;
x_300 = x_508;
x_301 = x_516;
x_302 = x_515;
x_303 = x_513;
x_304 = x_518;
x_305 = x_519;
x_306 = x_509;
goto block_469;
}
}
}
block_535:
{
lean_object* x_534; 
x_534 = lean_ctor_get(x_527, 1);
lean_inc_ref(x_534);
x_507 = x_524;
x_508 = x_525;
x_509 = x_526;
x_510 = x_527;
x_511 = x_534;
x_512 = x_528;
x_513 = x_529;
x_514 = x_530;
x_515 = x_531;
x_516 = x_532;
x_517 = x_533;
goto block_523;
}
block_555:
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; 
x_545 = lean_nat_add(x_543, x_537);
lean_dec(x_543);
x_546 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_546, 0, x_539);
lean_ctor_set(x_546, 1, x_545);
x_547 = lean_box(x_544);
x_548 = lean_mk_array(x_540, x_547);
x_549 = lean_byte_array_mk(x_548);
x_550 = lean_byte_array_size(x_3);
x_551 = lean_byte_array_size(x_549);
x_552 = lean_byte_array_copy_slice(x_549, x_8, x_3, x_550, x_551, x_536);
lean_dec_ref(x_549);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_553 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_553, 0, x_6);
lean_ctor_set(x_553, 1, x_7);
lean_inc_ref(x_553);
lean_inc_ref(x_546);
x_554 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_554, 0, x_546);
lean_ctor_set(x_554, 1, x_553);
x_524 = x_537;
x_525 = x_538;
x_526 = x_541;
x_527 = x_542;
x_528 = x_552;
x_529 = x_554;
x_530 = x_546;
x_531 = x_553;
x_532 = x_6;
x_533 = x_7;
goto block_535;
}
block_565:
{
lean_object* x_562; lean_object* x_563; lean_object* x_564; 
x_562 = lean_ctor_get(x_559, 0);
lean_inc(x_562);
x_563 = lean_ctor_get(x_559, 1);
lean_inc(x_563);
lean_inc_ref(x_559);
lean_inc_ref(x_5);
x_564 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_564, 0, x_5);
lean_ctor_set(x_564, 1, x_559);
x_524 = x_556;
x_525 = x_557;
x_526 = x_558;
x_527 = x_560;
x_528 = x_561;
x_529 = x_564;
x_530 = x_5;
x_531 = x_559;
x_532 = x_562;
x_533 = x_563;
goto block_535;
}
block_607:
{
lean_object* x_574; lean_object* x_575; uint8_t x_576; 
x_574 = lean_byte_array_size(x_3);
x_575 = lean_nat_add(x_568, x_574);
x_576 = lean_nat_dec_le(x_575, x_572);
if (x_576 == 0)
{
lean_object* x_577; uint8_t x_578; 
lean_dec(x_575);
x_577 = lean_nat_add(x_572, x_569);
x_578 = lean_nat_dec_le(x_577, x_568);
if (x_578 == 0)
{
uint8_t x_579; 
lean_dec(x_577);
x_579 = lean_nat_dec_le(x_568, x_572);
if (x_579 == 0)
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; uint8_t x_587; 
x_580 = lean_nat_sub(x_568, x_572);
x_581 = lean_nat_sub(x_569, x_580);
lean_dec(x_580);
lean_dec(x_569);
x_582 = l_ByteArray_extract(x_1, x_572, x_568);
x_583 = lean_byte_array_size(x_582);
x_584 = lean_byte_array_copy_slice(x_582, x_8, x_3, x_574, x_583, x_566);
lean_dec_ref(x_582);
x_585 = lean_byte_array_size(x_584);
x_586 = lean_nat_sub(x_585, x_568);
x_587 = lean_nat_dec_le(x_581, x_586);
lean_dec(x_586);
if (x_587 == 0)
{
lean_object* x_588; lean_object* x_589; 
lean_inc(x_567);
x_588 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_588, 0, x_8);
lean_ctor_set(x_588, 1, x_581);
lean_ctor_set(x_588, 2, x_567);
x_589 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_568, x_1, x_588, x_584, x_8);
lean_dec_ref(x_588);
x_556 = x_567;
x_557 = x_568;
x_558 = x_570;
x_559 = x_573;
x_560 = x_571;
x_561 = x_589;
goto block_565;
}
else
{
lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; 
x_590 = lean_nat_add(x_568, x_581);
lean_dec(x_581);
lean_inc(x_568);
x_591 = l_ByteArray_extract(x_584, x_568, x_590);
lean_dec(x_590);
x_592 = lean_byte_array_size(x_591);
x_593 = lean_byte_array_copy_slice(x_591, x_8, x_584, x_585, x_592, x_566);
lean_dec_ref(x_591);
x_556 = x_567;
x_557 = x_568;
x_558 = x_570;
x_559 = x_573;
x_560 = x_571;
x_561 = x_593;
goto block_565;
}
}
else
{
lean_object* x_594; lean_object* x_595; uint8_t x_596; 
x_594 = lean_nat_sub(x_572, x_568);
lean_dec(x_572);
x_595 = lean_nat_add(x_594, x_569);
x_596 = lean_nat_dec_le(x_595, x_574);
if (x_596 == 0)
{
lean_object* x_597; lean_object* x_598; 
lean_dec(x_595);
lean_inc(x_567);
x_597 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_597, 0, x_8);
lean_ctor_set(x_597, 1, x_569);
lean_ctor_set(x_597, 2, x_567);
x_598 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_594, x_597, x_3, x_8);
lean_dec_ref(x_597);
lean_dec(x_594);
x_556 = x_567;
x_557 = x_568;
x_558 = x_570;
x_559 = x_573;
x_560 = x_571;
x_561 = x_598;
goto block_565;
}
else
{
lean_object* x_599; lean_object* x_600; lean_object* x_601; 
lean_dec(x_569);
x_599 = l_ByteArray_extract(x_3, x_594, x_595);
lean_dec(x_595);
x_600 = lean_byte_array_size(x_599);
x_601 = lean_byte_array_copy_slice(x_599, x_8, x_3, x_574, x_600, x_566);
lean_dec_ref(x_599);
x_556 = x_567;
x_557 = x_568;
x_558 = x_570;
x_559 = x_573;
x_560 = x_571;
x_561 = x_601;
goto block_565;
}
}
}
else
{
lean_object* x_602; lean_object* x_603; lean_object* x_604; 
lean_dec(x_569);
x_602 = l_ByteArray_extract(x_1, x_572, x_577);
lean_dec(x_577);
x_603 = lean_byte_array_size(x_602);
x_604 = lean_byte_array_copy_slice(x_602, x_8, x_3, x_574, x_603, x_566);
lean_dec_ref(x_602);
x_556 = x_567;
x_557 = x_568;
x_558 = x_570;
x_559 = x_573;
x_560 = x_571;
x_561 = x_604;
goto block_565;
}
}
else
{
lean_object* x_605; lean_object* x_606; 
lean_dec_ref(x_573);
lean_dec_ref(x_571);
lean_dec_ref(x_570);
lean_dec(x_568);
lean_dec(x_567);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_605 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_605, 0, x_572);
lean_ctor_set(x_605, 1, x_569);
lean_ctor_set(x_605, 2, x_575);
x_606 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_606, 0, x_605);
return x_606;
}
}
block_618:
{
lean_object* x_617; 
x_617 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_617, 0, x_613);
lean_ctor_set(x_617, 1, x_616);
x_566 = x_610;
x_567 = x_609;
x_568 = x_611;
x_569 = x_612;
x_570 = x_614;
x_571 = x_615;
x_572 = x_608;
x_573 = x_617;
goto block_607;
}
block_642:
{
uint8_t x_635; 
x_635 = lean_nat_dec_lt(x_623, x_631);
lean_dec(x_623);
if (x_635 == 0)
{
lean_dec_ref(x_634);
lean_dec(x_633);
lean_dec_ref(x_632);
lean_dec(x_631);
lean_dec(x_630);
x_608 = x_619;
x_609 = x_622;
x_610 = x_621;
x_611 = x_624;
x_612 = x_625;
x_613 = x_626;
x_614 = x_627;
x_615 = x_628;
x_616 = x_629;
goto block_618;
}
else
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_641; 
lean_dec_ref(x_629);
x_636 = lean_unsigned_to_nat(256u);
x_637 = lean_nat_mul(x_631, x_636);
x_638 = lean_nat_mod(x_619, x_637);
lean_dec(x_637);
x_639 = lean_box_uint32(x_620);
x_640 = lean_array_set(x_634, x_638, x_639);
lean_dec(x_638);
x_641 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_641, 0, x_630);
lean_ctor_set(x_641, 1, x_631);
lean_ctor_set(x_641, 2, x_632);
lean_ctor_set(x_641, 3, x_633);
lean_ctor_set(x_641, 4, x_640);
x_608 = x_619;
x_609 = x_622;
x_610 = x_621;
x_611 = x_624;
x_612 = x_625;
x_613 = x_626;
x_614 = x_627;
x_615 = x_628;
x_616 = x_641;
goto block_618;
}
}
block_653:
{
lean_object* x_652; 
x_652 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_652, 0, x_643);
lean_ctor_set(x_652, 1, x_651);
x_566 = x_645;
x_567 = x_644;
x_568 = x_646;
x_569 = x_647;
x_570 = x_649;
x_571 = x_650;
x_572 = x_648;
x_573 = x_652;
goto block_607;
}
block_677:
{
uint8_t x_670; 
x_670 = lean_nat_dec_lt(x_657, x_666);
lean_dec(x_657);
if (x_670 == 0)
{
lean_dec_ref(x_669);
lean_dec(x_668);
lean_dec_ref(x_667);
lean_dec(x_666);
lean_dec(x_665);
x_643 = x_654;
x_644 = x_656;
x_645 = x_655;
x_646 = x_658;
x_647 = x_659;
x_648 = x_660;
x_649 = x_661;
x_650 = x_663;
x_651 = x_664;
goto block_653;
}
else
{
lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; 
lean_dec_ref(x_664);
x_671 = lean_unsigned_to_nat(256u);
x_672 = lean_nat_mul(x_666, x_671);
x_673 = lean_nat_mod(x_660, x_672);
lean_dec(x_672);
x_674 = lean_box_uint32(x_662);
x_675 = lean_array_set(x_669, x_673, x_674);
lean_dec(x_673);
x_676 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_676, 0, x_665);
lean_ctor_set(x_676, 1, x_666);
lean_ctor_set(x_676, 2, x_667);
lean_ctor_set(x_676, 3, x_668);
lean_ctor_set(x_676, 4, x_675);
x_643 = x_654;
x_644 = x_656;
x_645 = x_655;
x_646 = x_658;
x_647 = x_659;
x_648 = x_660;
x_649 = x_661;
x_650 = x_663;
x_651 = x_676;
goto block_653;
}
}
block_688:
{
lean_object* x_687; 
x_687 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_687, 0, x_684);
lean_ctor_set(x_687, 1, x_686);
x_566 = x_679;
x_567 = x_678;
x_568 = x_680;
x_569 = x_681;
x_570 = x_683;
x_571 = x_685;
x_572 = x_682;
x_573 = x_687;
goto block_607;
}
block_712:
{
uint8_t x_705; 
x_705 = lean_nat_dec_lt(x_691, x_701);
lean_dec(x_691);
if (x_705 == 0)
{
lean_dec_ref(x_704);
lean_dec(x_703);
lean_dec_ref(x_702);
lean_dec(x_701);
lean_dec(x_700);
x_678 = x_690;
x_679 = x_689;
x_680 = x_693;
x_681 = x_694;
x_682 = x_695;
x_683 = x_697;
x_684 = x_696;
x_685 = x_698;
x_686 = x_699;
goto block_688;
}
else
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
lean_dec_ref(x_699);
x_706 = lean_unsigned_to_nat(256u);
x_707 = lean_nat_mul(x_701, x_706);
x_708 = lean_nat_mod(x_695, x_707);
lean_dec(x_707);
x_709 = lean_box_uint32(x_692);
x_710 = lean_array_set(x_704, x_708, x_709);
lean_dec(x_708);
x_711 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_711, 0, x_700);
lean_ctor_set(x_711, 1, x_701);
lean_ctor_set(x_711, 2, x_702);
lean_ctor_set(x_711, 3, x_703);
lean_ctor_set(x_711, 4, x_710);
x_678 = x_690;
x_679 = x_689;
x_680 = x_693;
x_681 = x_694;
x_682 = x_695;
x_683 = x_697;
x_684 = x_696;
x_685 = x_698;
x_686 = x_711;
goto block_688;
}
}
block_723:
{
lean_object* x_722; 
x_722 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_722, 0, x_718);
lean_ctor_set(x_722, 1, x_721);
x_566 = x_714;
x_567 = x_713;
x_568 = x_715;
x_569 = x_716;
x_570 = x_719;
x_571 = x_720;
x_572 = x_717;
x_573 = x_722;
goto block_607;
}
block_747:
{
uint8_t x_741; 
x_741 = lean_nat_dec_lt(x_728, x_737);
lean_dec(x_728);
if (x_741 == 0)
{
lean_dec_ref(x_740);
lean_dec(x_739);
lean_dec_ref(x_738);
lean_dec(x_737);
lean_dec(x_736);
x_713 = x_727;
x_714 = x_726;
x_715 = x_729;
x_716 = x_730;
x_717 = x_732;
x_718 = x_731;
x_719 = x_733;
x_720 = x_734;
x_721 = x_735;
goto block_723;
}
else
{
lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; 
lean_dec_ref(x_735);
x_742 = lean_nat_mul(x_737, x_725);
x_743 = lean_nat_mod(x_732, x_742);
lean_dec(x_742);
x_744 = lean_box_uint32(x_724);
x_745 = lean_array_set(x_740, x_743, x_744);
lean_dec(x_743);
x_746 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_746, 0, x_736);
lean_ctor_set(x_746, 1, x_737);
lean_ctor_set(x_746, 2, x_738);
lean_ctor_set(x_746, 3, x_739);
lean_ctor_set(x_746, 4, x_745);
x_713 = x_727;
x_714 = x_726;
x_715 = x_729;
x_716 = x_730;
x_717 = x_732;
x_718 = x_731;
x_719 = x_733;
x_720 = x_734;
x_721 = x_746;
goto block_723;
}
}
block_789:
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; uint32_t x_775; lean_object* x_776; uint32_t x_777; uint8_t x_778; 
x_765 = lean_nat_add(x_752, x_749);
lean_dec(x_752);
x_766 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_766, 0, x_759);
lean_ctor_set(x_766, 1, x_765);
x_767 = lean_nat_sub(x_754, x_753);
lean_dec(x_754);
x_768 = lean_nat_sub(x_767, x_755);
lean_dec(x_767);
x_769 = lean_unsigned_to_nat(256u);
x_770 = lean_nat_mul(x_768, x_769);
lean_dec(x_768);
x_771 = lean_uint8_to_nat(x_764);
x_772 = lean_nat_add(x_770, x_771);
lean_dec(x_770);
x_773 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_774 = lean_array_get_borrowed(x_773, x_760, x_772);
lean_dec(x_772);
x_775 = lean_unbox_uint32(x_774);
x_776 = lean_uint32_to_nat(x_775);
x_777 = lean_uint32_of_nat(x_776);
x_778 = lean_nat_dec_lt(x_758, x_755);
if (x_778 == 0)
{
lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; 
lean_dec_ref(x_761);
lean_dec_ref(x_760);
lean_dec(x_756);
lean_dec(x_755);
lean_dec(x_748);
x_779 = lean_ctor_get(x_7, 0);
lean_inc(x_779);
x_780 = lean_ctor_get(x_7, 1);
lean_inc(x_780);
x_781 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_781);
x_782 = lean_ctor_get(x_7, 3);
lean_inc(x_782);
x_783 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_783);
x_724 = x_777;
x_725 = x_769;
x_726 = x_757;
x_727 = x_749;
x_728 = x_758;
x_729 = x_750;
x_730 = x_751;
x_731 = x_766;
x_732 = x_776;
x_733 = x_762;
x_734 = x_763;
x_735 = x_7;
x_736 = x_779;
x_737 = x_780;
x_738 = x_781;
x_739 = x_782;
x_740 = x_783;
goto block_747;
}
else
{
lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; 
lean_dec_ref(x_7);
x_784 = lean_box_uint32(x_777);
x_785 = lean_array_set(x_761, x_748, x_784);
x_786 = lean_nat_add(x_748, x_749);
lean_dec(x_748);
x_787 = lean_nat_mod(x_786, x_755);
lean_dec(x_786);
lean_inc_ref(x_760);
lean_inc(x_787);
lean_inc_ref(x_785);
lean_inc(x_756);
lean_inc(x_755);
x_788 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_788, 0, x_755);
lean_ctor_set(x_788, 1, x_756);
lean_ctor_set(x_788, 2, x_785);
lean_ctor_set(x_788, 3, x_787);
lean_ctor_set(x_788, 4, x_760);
x_724 = x_777;
x_725 = x_769;
x_726 = x_757;
x_727 = x_749;
x_728 = x_758;
x_729 = x_750;
x_730 = x_751;
x_731 = x_766;
x_732 = x_776;
x_733 = x_762;
x_734 = x_763;
x_735 = x_788;
x_736 = x_755;
x_737 = x_756;
x_738 = x_785;
x_739 = x_787;
x_740 = x_760;
goto block_747;
}
}
block_1099:
{
lean_object* x_794; uint8_t x_795; 
x_794 = lean_ctor_get(x_791, 0);
lean_inc_ref(x_794);
x_795 = !lean_is_exclusive(x_794);
if (x_795 == 0)
{
lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; uint8_t x_801; 
x_796 = lean_ctor_get(x_791, 1);
x_797 = lean_ctor_get(x_794, 0);
x_798 = lean_ctor_get(x_794, 1);
lean_dec(x_798);
x_799 = lean_byte_array_size(x_1);
x_800 = lean_box(0);
x_801 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_797, x_800);
if (x_801 == 0)
{
switch (lean_obj_tag(x_797)) {
case 0:
{
lean_object* x_802; 
lean_inc_ref(x_796);
lean_dec(x_792);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_794, 1, x_7);
lean_ctor_set(x_794, 0, x_6);
lean_inc_ref(x_794);
lean_inc_ref(x_5);
x_802 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_802, 0, x_5);
lean_ctor_set(x_802, 1, x_794);
x_507 = x_790;
x_508 = x_799;
x_509 = x_793;
x_510 = x_791;
x_511 = x_796;
x_512 = x_3;
x_513 = x_802;
x_514 = x_5;
x_515 = x_794;
x_516 = x_6;
x_517 = x_7;
goto block_523;
}
case 1:
{
uint8_t x_803; 
lean_inc_ref(x_796);
x_803 = !lean_is_exclusive(x_5);
if (x_803 == 0)
{
lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; uint8_t x_808; 
x_804 = lean_ctor_get(x_5, 0);
x_805 = lean_ctor_get(x_5, 1);
x_806 = lean_nat_add(x_805, x_792);
lean_dec(x_792);
x_807 = lean_byte_array_size(x_804);
x_808 = lean_nat_dec_le(x_806, x_807);
if (x_808 == 0)
{
lean_object* x_809; 
lean_dec(x_806);
lean_free_object(x_5);
lean_dec(x_805);
lean_dec_ref(x_804);
lean_free_object(x_794);
lean_dec_ref(x_796);
lean_dec_ref(x_793);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_809 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_809;
}
else
{
if (x_808 == 0)
{
lean_object* x_810; 
lean_dec(x_806);
lean_free_object(x_5);
lean_dec(x_805);
lean_dec_ref(x_804);
lean_free_object(x_794);
lean_dec_ref(x_796);
lean_dec_ref(x_793);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_810 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_810;
}
else
{
lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; lean_object* x_815; 
x_811 = l_ByteArray_extract(x_804, x_805, x_806);
lean_ctor_set(x_5, 1, x_806);
x_812 = lean_byte_array_size(x_3);
x_813 = lean_byte_array_size(x_811);
x_814 = lean_byte_array_copy_slice(x_811, x_8, x_3, x_812, x_813, x_801);
lean_dec_ref(x_811);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_794, 1, x_7);
lean_ctor_set(x_794, 0, x_6);
lean_inc_ref(x_794);
lean_inc_ref(x_5);
x_815 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_815, 0, x_5);
lean_ctor_set(x_815, 1, x_794);
x_507 = x_790;
x_508 = x_799;
x_509 = x_793;
x_510 = x_791;
x_511 = x_796;
x_512 = x_814;
x_513 = x_815;
x_514 = x_5;
x_515 = x_794;
x_516 = x_6;
x_517 = x_7;
goto block_523;
}
}
}
else
{
lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; uint8_t x_820; 
x_816 = lean_ctor_get(x_5, 0);
x_817 = lean_ctor_get(x_5, 1);
lean_inc(x_817);
lean_inc(x_816);
lean_dec(x_5);
x_818 = lean_nat_add(x_817, x_792);
lean_dec(x_792);
x_819 = lean_byte_array_size(x_816);
x_820 = lean_nat_dec_le(x_818, x_819);
if (x_820 == 0)
{
lean_object* x_821; 
lean_dec(x_818);
lean_dec(x_817);
lean_dec_ref(x_816);
lean_free_object(x_794);
lean_dec_ref(x_796);
lean_dec_ref(x_793);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_821 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_821;
}
else
{
if (x_820 == 0)
{
lean_object* x_822; 
lean_dec(x_818);
lean_dec(x_817);
lean_dec_ref(x_816);
lean_free_object(x_794);
lean_dec_ref(x_796);
lean_dec_ref(x_793);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_822 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_822;
}
else
{
lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; 
x_823 = l_ByteArray_extract(x_816, x_817, x_818);
x_824 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_824, 0, x_816);
lean_ctor_set(x_824, 1, x_818);
x_825 = lean_byte_array_size(x_3);
x_826 = lean_byte_array_size(x_823);
x_827 = lean_byte_array_copy_slice(x_823, x_8, x_3, x_825, x_826, x_801);
lean_dec_ref(x_823);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_794, 1, x_7);
lean_ctor_set(x_794, 0, x_6);
lean_inc_ref(x_794);
lean_inc_ref(x_824);
x_828 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_828, 0, x_824);
lean_ctor_set(x_828, 1, x_794);
x_507 = x_790;
x_508 = x_799;
x_509 = x_793;
x_510 = x_791;
x_511 = x_796;
x_512 = x_827;
x_513 = x_828;
x_514 = x_824;
x_515 = x_794;
x_516 = x_6;
x_517 = x_7;
goto block_523;
}
}
}
}
case 2:
{
lean_object* x_829; lean_object* x_830; lean_object* x_831; uint8_t x_832; 
lean_free_object(x_794);
x_829 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_829);
x_830 = lean_ctor_get(x_5, 1);
lean_inc(x_830);
lean_dec_ref(x_5);
x_831 = lean_byte_array_size(x_829);
x_832 = lean_nat_dec_lt(x_830, x_831);
if (x_832 == 0)
{
lean_object* x_833; 
lean_dec(x_830);
lean_dec_ref(x_829);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_833 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_833;
}
else
{
if (x_832 == 0)
{
uint8_t x_834; lean_object* x_835; lean_object* x_836; uint8_t x_837; 
x_834 = l_instInhabitedUInt8;
x_835 = lean_box(x_834);
x_836 = l_outOfBounds___redArg(x_835);
x_837 = lean_unbox(x_836);
lean_dec(x_836);
x_536 = x_801;
x_537 = x_790;
x_538 = x_799;
x_539 = x_829;
x_540 = x_792;
x_541 = x_793;
x_542 = x_791;
x_543 = x_830;
x_544 = x_837;
goto block_555;
}
else
{
uint8_t x_838; 
x_838 = lean_byte_array_fget(x_829, x_830);
x_536 = x_801;
x_537 = x_790;
x_538 = x_799;
x_539 = x_829;
x_540 = x_792;
x_541 = x_793;
x_542 = x_791;
x_543 = x_830;
x_544 = x_838;
goto block_555;
}
}
}
default: 
{
uint8_t x_839; lean_object* x_840; uint8_t x_841; 
lean_free_object(x_794);
x_839 = lean_ctor_get_uint8(x_797, 0);
lean_dec_ref(x_797);
x_840 = lean_uint8_to_nat(x_839);
x_841 = lean_nat_dec_eq(x_840, x_8);
if (x_841 == 0)
{
uint8_t x_842; 
x_842 = lean_nat_dec_eq(x_840, x_790);
if (x_842 == 0)
{
lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; uint8_t x_850; 
x_843 = lean_ctor_get(x_7, 0);
x_844 = lean_ctor_get(x_7, 1);
x_845 = lean_ctor_get(x_7, 2);
x_846 = lean_ctor_get(x_7, 3);
x_847 = lean_ctor_get(x_7, 4);
x_848 = lean_unsigned_to_nat(2u);
x_849 = lean_nat_add(x_848, x_843);
x_850 = lean_nat_dec_lt(x_840, x_849);
if (x_850 == 0)
{
lean_object* x_851; uint8_t x_852; 
x_851 = lean_nat_add(x_849, x_844);
lean_dec(x_849);
x_852 = lean_nat_dec_lt(x_840, x_851);
lean_dec(x_851);
if (x_852 == 0)
{
lean_object* x_853; lean_object* x_854; 
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_853 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_853, 0, x_840);
x_854 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_854, 0, x_853);
return x_854;
}
else
{
lean_object* x_855; lean_object* x_856; lean_object* x_857; uint8_t x_858; 
x_855 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_855);
x_856 = lean_ctor_get(x_6, 1);
lean_inc(x_856);
lean_dec_ref(x_6);
x_857 = lean_byte_array_size(x_855);
x_858 = lean_nat_dec_lt(x_856, x_857);
if (x_858 == 0)
{
lean_object* x_859; 
lean_dec(x_856);
lean_dec_ref(x_855);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_859 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_859;
}
else
{
if (x_858 == 0)
{
uint8_t x_860; lean_object* x_861; lean_object* x_862; uint8_t x_863; 
x_860 = l_instInhabitedUInt8;
x_861 = lean_box(x_860);
x_862 = l_outOfBounds___redArg(x_861);
x_863 = lean_unbox(x_862);
lean_dec(x_862);
lean_inc_ref(x_845);
lean_inc_ref(x_847);
lean_inc(x_844);
lean_inc(x_843);
lean_inc(x_846);
x_748 = x_846;
x_749 = x_790;
x_750 = x_799;
x_751 = x_792;
x_752 = x_856;
x_753 = x_848;
x_754 = x_840;
x_755 = x_843;
x_756 = x_844;
x_757 = x_801;
x_758 = x_8;
x_759 = x_855;
x_760 = x_847;
x_761 = x_845;
x_762 = x_793;
x_763 = x_791;
x_764 = x_863;
goto block_789;
}
else
{
uint8_t x_864; 
x_864 = lean_byte_array_fget(x_855, x_856);
lean_inc_ref(x_845);
lean_inc_ref(x_847);
lean_inc(x_844);
lean_inc(x_843);
lean_inc(x_846);
x_748 = x_846;
x_749 = x_790;
x_750 = x_799;
x_751 = x_792;
x_752 = x_856;
x_753 = x_848;
x_754 = x_840;
x_755 = x_843;
x_756 = x_844;
x_757 = x_801;
x_758 = x_8;
x_759 = x_855;
x_760 = x_847;
x_761 = x_845;
x_762 = x_793;
x_763 = x_791;
x_764 = x_864;
goto block_789;
}
}
}
}
else
{
lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; 
lean_inc_ref(x_847);
lean_inc(x_846);
lean_inc_ref(x_845);
lean_inc(x_844);
lean_inc(x_843);
lean_dec(x_849);
x_865 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_865);
x_866 = lean_ctor_get(x_6, 1);
lean_inc(x_866);
lean_dec_ref(x_6);
x_867 = lean_unsigned_to_nat(5u);
x_868 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_865, x_866, x_8, x_867);
if (lean_obj_tag(x_868) == 0)
{
uint8_t x_869; 
lean_dec_ref(x_847);
lean_dec(x_846);
lean_dec_ref(x_845);
lean_dec(x_844);
lean_dec(x_843);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_869 = !lean_is_exclusive(x_868);
if (x_869 == 0)
{
return x_868;
}
else
{
lean_object* x_870; lean_object* x_871; 
x_870 = lean_ctor_get(x_868, 0);
lean_inc(x_870);
lean_dec(x_868);
x_871 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_871, 0, x_870);
return x_871;
}
}
else
{
lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; uint32_t x_878; lean_object* x_879; lean_object* x_880; uint32_t x_881; uint8_t x_882; 
x_872 = lean_ctor_get(x_868, 0);
lean_inc(x_872);
lean_dec_ref(x_868);
x_873 = lean_ctor_get(x_872, 0);
lean_inc(x_873);
x_874 = lean_ctor_get(x_872, 1);
lean_inc(x_874);
lean_dec(x_872);
x_875 = lean_nat_sub(x_840, x_848);
x_876 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_877 = lean_array_get_borrowed(x_876, x_845, x_875);
lean_dec(x_875);
x_878 = lean_unbox_uint32(x_877);
x_879 = lean_uint32_to_nat(x_878);
x_880 = lean_nat_add(x_879, x_873);
lean_dec(x_873);
lean_dec(x_879);
x_881 = lean_uint32_of_nat(x_880);
x_882 = lean_nat_dec_lt(x_8, x_843);
if (x_882 == 0)
{
x_689 = x_801;
x_690 = x_790;
x_691 = x_8;
x_692 = x_881;
x_693 = x_799;
x_694 = x_792;
x_695 = x_880;
x_696 = x_874;
x_697 = x_793;
x_698 = x_791;
x_699 = x_7;
x_700 = x_843;
x_701 = x_844;
x_702 = x_845;
x_703 = x_846;
x_704 = x_847;
goto block_712;
}
else
{
uint8_t x_883; 
x_883 = !lean_is_exclusive(x_7);
if (x_883 == 0)
{
lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; 
x_884 = lean_ctor_get(x_7, 4);
lean_dec(x_884);
x_885 = lean_ctor_get(x_7, 3);
lean_dec(x_885);
x_886 = lean_ctor_get(x_7, 2);
lean_dec(x_886);
x_887 = lean_ctor_get(x_7, 1);
lean_dec(x_887);
x_888 = lean_ctor_get(x_7, 0);
lean_dec(x_888);
x_889 = lean_box_uint32(x_881);
x_890 = lean_array_set(x_845, x_846, x_889);
x_891 = lean_nat_add(x_846, x_790);
lean_dec(x_846);
x_892 = lean_nat_mod(x_891, x_843);
lean_dec(x_891);
lean_inc_ref(x_847);
lean_inc(x_892);
lean_inc_ref(x_890);
lean_inc(x_844);
lean_inc(x_843);
lean_ctor_set(x_7, 3, x_892);
lean_ctor_set(x_7, 2, x_890);
x_689 = x_801;
x_690 = x_790;
x_691 = x_8;
x_692 = x_881;
x_693 = x_799;
x_694 = x_792;
x_695 = x_880;
x_696 = x_874;
x_697 = x_793;
x_698 = x_791;
x_699 = x_7;
x_700 = x_843;
x_701 = x_844;
x_702 = x_890;
x_703 = x_892;
x_704 = x_847;
goto block_712;
}
else
{
lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; 
lean_dec(x_7);
x_893 = lean_box_uint32(x_881);
x_894 = lean_array_set(x_845, x_846, x_893);
x_895 = lean_nat_add(x_846, x_790);
lean_dec(x_846);
x_896 = lean_nat_mod(x_895, x_843);
lean_dec(x_895);
lean_inc_ref(x_847);
lean_inc(x_896);
lean_inc_ref(x_894);
lean_inc(x_844);
lean_inc(x_843);
x_897 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_897, 0, x_843);
lean_ctor_set(x_897, 1, x_844);
lean_ctor_set(x_897, 2, x_894);
lean_ctor_set(x_897, 3, x_896);
lean_ctor_set(x_897, 4, x_847);
x_689 = x_801;
x_690 = x_790;
x_691 = x_8;
x_692 = x_881;
x_693 = x_799;
x_694 = x_792;
x_695 = x_880;
x_696 = x_874;
x_697 = x_793;
x_698 = x_791;
x_699 = x_897;
x_700 = x_843;
x_701 = x_844;
x_702 = x_894;
x_703 = x_896;
x_704 = x_847;
goto block_712;
}
}
}
}
}
else
{
lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; 
x_898 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_898);
x_899 = lean_ctor_get(x_6, 1);
lean_inc(x_899);
lean_dec_ref(x_6);
x_900 = lean_unsigned_to_nat(5u);
x_901 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_898, x_899, x_8, x_900);
if (lean_obj_tag(x_901) == 0)
{
uint8_t x_902; 
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
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
lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; uint32_t x_916; uint8_t x_917; 
x_905 = lean_ctor_get(x_901, 0);
lean_inc(x_905);
lean_dec_ref(x_901);
x_906 = lean_ctor_get(x_905, 0);
lean_inc(x_906);
x_907 = lean_ctor_get(x_905, 1);
lean_inc(x_907);
lean_dec(x_905);
x_908 = lean_ctor_get(x_7, 0);
lean_inc(x_908);
x_909 = lean_ctor_get(x_7, 1);
lean_inc(x_909);
x_910 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_910);
x_911 = lean_ctor_get(x_7, 3);
lean_inc(x_911);
x_912 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_912);
x_913 = lean_byte_array_size(x_3);
x_914 = lean_nat_add(x_799, x_913);
x_915 = lean_nat_sub(x_914, x_906);
lean_dec(x_906);
lean_dec(x_914);
x_916 = lean_uint32_of_nat(x_915);
x_917 = lean_nat_dec_lt(x_8, x_908);
if (x_917 == 0)
{
x_654 = x_907;
x_655 = x_801;
x_656 = x_790;
x_657 = x_8;
x_658 = x_799;
x_659 = x_792;
x_660 = x_915;
x_661 = x_793;
x_662 = x_916;
x_663 = x_791;
x_664 = x_7;
x_665 = x_908;
x_666 = x_909;
x_667 = x_910;
x_668 = x_911;
x_669 = x_912;
goto block_677;
}
else
{
uint8_t x_918; 
x_918 = !lean_is_exclusive(x_7);
if (x_918 == 0)
{
lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; lean_object* x_926; lean_object* x_927; 
x_919 = lean_ctor_get(x_7, 4);
lean_dec(x_919);
x_920 = lean_ctor_get(x_7, 3);
lean_dec(x_920);
x_921 = lean_ctor_get(x_7, 2);
lean_dec(x_921);
x_922 = lean_ctor_get(x_7, 1);
lean_dec(x_922);
x_923 = lean_ctor_get(x_7, 0);
lean_dec(x_923);
x_924 = lean_box_uint32(x_916);
x_925 = lean_array_set(x_910, x_911, x_924);
x_926 = lean_nat_add(x_911, x_790);
lean_dec(x_911);
x_927 = lean_nat_mod(x_926, x_908);
lean_dec(x_926);
lean_inc_ref(x_912);
lean_inc(x_927);
lean_inc_ref(x_925);
lean_inc(x_909);
lean_inc(x_908);
lean_ctor_set(x_7, 3, x_927);
lean_ctor_set(x_7, 2, x_925);
x_654 = x_907;
x_655 = x_801;
x_656 = x_790;
x_657 = x_8;
x_658 = x_799;
x_659 = x_792;
x_660 = x_915;
x_661 = x_793;
x_662 = x_916;
x_663 = x_791;
x_664 = x_7;
x_665 = x_908;
x_666 = x_909;
x_667 = x_925;
x_668 = x_927;
x_669 = x_912;
goto block_677;
}
else
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; 
lean_dec(x_7);
x_928 = lean_box_uint32(x_916);
x_929 = lean_array_set(x_910, x_911, x_928);
x_930 = lean_nat_add(x_911, x_790);
lean_dec(x_911);
x_931 = lean_nat_mod(x_930, x_908);
lean_dec(x_930);
lean_inc_ref(x_912);
lean_inc(x_931);
lean_inc_ref(x_929);
lean_inc(x_909);
lean_inc(x_908);
x_932 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_932, 0, x_908);
lean_ctor_set(x_932, 1, x_909);
lean_ctor_set(x_932, 2, x_929);
lean_ctor_set(x_932, 3, x_931);
lean_ctor_set(x_932, 4, x_912);
x_654 = x_907;
x_655 = x_801;
x_656 = x_790;
x_657 = x_8;
x_658 = x_799;
x_659 = x_792;
x_660 = x_915;
x_661 = x_793;
x_662 = x_916;
x_663 = x_791;
x_664 = x_932;
x_665 = x_908;
x_666 = x_909;
x_667 = x_929;
x_668 = x_931;
x_669 = x_912;
goto block_677;
}
}
}
}
}
else
{
lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; 
x_933 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_933);
x_934 = lean_ctor_get(x_6, 1);
lean_inc(x_934);
lean_dec_ref(x_6);
x_935 = lean_unsigned_to_nat(5u);
x_936 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_933, x_934, x_8, x_935);
if (lean_obj_tag(x_936) == 0)
{
uint8_t x_937; 
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_937 = !lean_is_exclusive(x_936);
if (x_937 == 0)
{
return x_936;
}
else
{
lean_object* x_938; lean_object* x_939; 
x_938 = lean_ctor_get(x_936, 0);
lean_inc(x_938);
lean_dec(x_936);
x_939 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_939, 0, x_938);
return x_939;
}
}
else
{
lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; uint32_t x_948; uint8_t x_949; 
x_940 = lean_ctor_get(x_936, 0);
lean_inc(x_940);
lean_dec_ref(x_936);
x_941 = lean_ctor_get(x_940, 0);
lean_inc(x_941);
x_942 = lean_ctor_get(x_940, 1);
lean_inc(x_942);
lean_dec(x_940);
x_943 = lean_ctor_get(x_7, 0);
lean_inc(x_943);
x_944 = lean_ctor_get(x_7, 1);
lean_inc(x_944);
x_945 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_945);
x_946 = lean_ctor_get(x_7, 3);
lean_inc(x_946);
x_947 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_947);
x_948 = lean_uint32_of_nat(x_941);
x_949 = lean_nat_dec_lt(x_8, x_943);
if (x_949 == 0)
{
x_619 = x_941;
x_620 = x_948;
x_621 = x_801;
x_622 = x_790;
x_623 = x_8;
x_624 = x_799;
x_625 = x_792;
x_626 = x_942;
x_627 = x_793;
x_628 = x_791;
x_629 = x_7;
x_630 = x_943;
x_631 = x_944;
x_632 = x_945;
x_633 = x_946;
x_634 = x_947;
goto block_642;
}
else
{
uint8_t x_950; 
x_950 = !lean_is_exclusive(x_7);
if (x_950 == 0)
{
lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; lean_object* x_958; lean_object* x_959; 
x_951 = lean_ctor_get(x_7, 4);
lean_dec(x_951);
x_952 = lean_ctor_get(x_7, 3);
lean_dec(x_952);
x_953 = lean_ctor_get(x_7, 2);
lean_dec(x_953);
x_954 = lean_ctor_get(x_7, 1);
lean_dec(x_954);
x_955 = lean_ctor_get(x_7, 0);
lean_dec(x_955);
x_956 = lean_box_uint32(x_948);
x_957 = lean_array_set(x_945, x_946, x_956);
x_958 = lean_nat_add(x_946, x_790);
lean_dec(x_946);
x_959 = lean_nat_mod(x_958, x_943);
lean_dec(x_958);
lean_inc_ref(x_947);
lean_inc(x_959);
lean_inc_ref(x_957);
lean_inc(x_944);
lean_inc(x_943);
lean_ctor_set(x_7, 3, x_959);
lean_ctor_set(x_7, 2, x_957);
x_619 = x_941;
x_620 = x_948;
x_621 = x_801;
x_622 = x_790;
x_623 = x_8;
x_624 = x_799;
x_625 = x_792;
x_626 = x_942;
x_627 = x_793;
x_628 = x_791;
x_629 = x_7;
x_630 = x_943;
x_631 = x_944;
x_632 = x_957;
x_633 = x_959;
x_634 = x_947;
goto block_642;
}
else
{
lean_object* x_960; lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; 
lean_dec(x_7);
x_960 = lean_box_uint32(x_948);
x_961 = lean_array_set(x_945, x_946, x_960);
x_962 = lean_nat_add(x_946, x_790);
lean_dec(x_946);
x_963 = lean_nat_mod(x_962, x_943);
lean_dec(x_962);
lean_inc_ref(x_947);
lean_inc(x_963);
lean_inc_ref(x_961);
lean_inc(x_944);
lean_inc(x_943);
x_964 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_964, 0, x_943);
lean_ctor_set(x_964, 1, x_944);
lean_ctor_set(x_964, 2, x_961);
lean_ctor_set(x_964, 3, x_963);
lean_ctor_set(x_964, 4, x_947);
x_619 = x_941;
x_620 = x_948;
x_621 = x_801;
x_622 = x_790;
x_623 = x_8;
x_624 = x_799;
x_625 = x_792;
x_626 = x_942;
x_627 = x_793;
x_628 = x_791;
x_629 = x_964;
x_630 = x_943;
x_631 = x_944;
x_632 = x_961;
x_633 = x_963;
x_634 = x_947;
goto block_642;
}
}
}
}
}
}
}
else
{
lean_object* x_965; 
lean_inc_ref(x_796);
lean_dec(x_797);
lean_dec(x_792);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_794, 1, x_7);
lean_ctor_set(x_794, 0, x_6);
lean_inc_ref(x_794);
lean_inc_ref(x_5);
x_965 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_965, 0, x_5);
lean_ctor_set(x_965, 1, x_794);
x_507 = x_790;
x_508 = x_799;
x_509 = x_793;
x_510 = x_791;
x_511 = x_796;
x_512 = x_3;
x_513 = x_965;
x_514 = x_5;
x_515 = x_794;
x_516 = x_6;
x_517 = x_7;
goto block_523;
}
}
else
{
lean_object* x_966; lean_object* x_967; lean_object* x_968; lean_object* x_969; uint8_t x_970; 
x_966 = lean_ctor_get(x_791, 1);
x_967 = lean_ctor_get(x_794, 0);
lean_inc(x_967);
lean_dec(x_794);
x_968 = lean_byte_array_size(x_1);
x_969 = lean_box(0);
x_970 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_967, x_969);
if (x_970 == 0)
{
switch (lean_obj_tag(x_967)) {
case 0:
{
lean_object* x_971; lean_object* x_972; 
lean_inc_ref(x_966);
lean_dec(x_792);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_971 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_971, 0, x_6);
lean_ctor_set(x_971, 1, x_7);
lean_inc_ref(x_971);
lean_inc_ref(x_5);
x_972 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_972, 0, x_5);
lean_ctor_set(x_972, 1, x_971);
x_507 = x_790;
x_508 = x_968;
x_509 = x_793;
x_510 = x_791;
x_511 = x_966;
x_512 = x_3;
x_513 = x_972;
x_514 = x_5;
x_515 = x_971;
x_516 = x_6;
x_517 = x_7;
goto block_523;
}
case 1:
{
lean_object* x_973; lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; uint8_t x_978; 
lean_inc_ref(x_966);
x_973 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_973);
x_974 = lean_ctor_get(x_5, 1);
lean_inc(x_974);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_975 = x_5;
} else {
 lean_dec_ref(x_5);
 x_975 = lean_box(0);
}
x_976 = lean_nat_add(x_974, x_792);
lean_dec(x_792);
x_977 = lean_byte_array_size(x_973);
x_978 = lean_nat_dec_le(x_976, x_977);
if (x_978 == 0)
{
lean_object* x_979; 
lean_dec(x_976);
lean_dec(x_975);
lean_dec(x_974);
lean_dec_ref(x_973);
lean_dec_ref(x_966);
lean_dec_ref(x_793);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_979 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_979;
}
else
{
if (x_978 == 0)
{
lean_object* x_980; 
lean_dec(x_976);
lean_dec(x_975);
lean_dec(x_974);
lean_dec_ref(x_973);
lean_dec_ref(x_966);
lean_dec_ref(x_793);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_980 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_980;
}
else
{
lean_object* x_981; lean_object* x_982; lean_object* x_983; lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; 
x_981 = l_ByteArray_extract(x_973, x_974, x_976);
if (lean_is_scalar(x_975)) {
 x_982 = lean_alloc_ctor(0, 2, 0);
} else {
 x_982 = x_975;
}
lean_ctor_set(x_982, 0, x_973);
lean_ctor_set(x_982, 1, x_976);
x_983 = lean_byte_array_size(x_3);
x_984 = lean_byte_array_size(x_981);
x_985 = lean_byte_array_copy_slice(x_981, x_8, x_3, x_983, x_984, x_970);
lean_dec_ref(x_981);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_986 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_986, 0, x_6);
lean_ctor_set(x_986, 1, x_7);
lean_inc_ref(x_986);
lean_inc_ref(x_982);
x_987 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_987, 0, x_982);
lean_ctor_set(x_987, 1, x_986);
x_507 = x_790;
x_508 = x_968;
x_509 = x_793;
x_510 = x_791;
x_511 = x_966;
x_512 = x_985;
x_513 = x_987;
x_514 = x_982;
x_515 = x_986;
x_516 = x_6;
x_517 = x_7;
goto block_523;
}
}
}
case 2:
{
lean_object* x_988; lean_object* x_989; lean_object* x_990; uint8_t x_991; 
x_988 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_988);
x_989 = lean_ctor_get(x_5, 1);
lean_inc(x_989);
lean_dec_ref(x_5);
x_990 = lean_byte_array_size(x_988);
x_991 = lean_nat_dec_lt(x_989, x_990);
if (x_991 == 0)
{
lean_object* x_992; 
lean_dec(x_989);
lean_dec_ref(x_988);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_992 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_992;
}
else
{
if (x_991 == 0)
{
uint8_t x_993; lean_object* x_994; lean_object* x_995; uint8_t x_996; 
x_993 = l_instInhabitedUInt8;
x_994 = lean_box(x_993);
x_995 = l_outOfBounds___redArg(x_994);
x_996 = lean_unbox(x_995);
lean_dec(x_995);
x_536 = x_970;
x_537 = x_790;
x_538 = x_968;
x_539 = x_988;
x_540 = x_792;
x_541 = x_793;
x_542 = x_791;
x_543 = x_989;
x_544 = x_996;
goto block_555;
}
else
{
uint8_t x_997; 
x_997 = lean_byte_array_fget(x_988, x_989);
x_536 = x_970;
x_537 = x_790;
x_538 = x_968;
x_539 = x_988;
x_540 = x_792;
x_541 = x_793;
x_542 = x_791;
x_543 = x_989;
x_544 = x_997;
goto block_555;
}
}
}
default: 
{
uint8_t x_998; lean_object* x_999; uint8_t x_1000; 
x_998 = lean_ctor_get_uint8(x_967, 0);
lean_dec_ref(x_967);
x_999 = lean_uint8_to_nat(x_998);
x_1000 = lean_nat_dec_eq(x_999, x_8);
if (x_1000 == 0)
{
uint8_t x_1001; 
x_1001 = lean_nat_dec_eq(x_999, x_790);
if (x_1001 == 0)
{
lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; uint8_t x_1009; 
x_1002 = lean_ctor_get(x_7, 0);
x_1003 = lean_ctor_get(x_7, 1);
x_1004 = lean_ctor_get(x_7, 2);
x_1005 = lean_ctor_get(x_7, 3);
x_1006 = lean_ctor_get(x_7, 4);
x_1007 = lean_unsigned_to_nat(2u);
x_1008 = lean_nat_add(x_1007, x_1002);
x_1009 = lean_nat_dec_lt(x_999, x_1008);
if (x_1009 == 0)
{
lean_object* x_1010; uint8_t x_1011; 
x_1010 = lean_nat_add(x_1008, x_1003);
lean_dec(x_1008);
x_1011 = lean_nat_dec_lt(x_999, x_1010);
lean_dec(x_1010);
if (x_1011 == 0)
{
lean_object* x_1012; lean_object* x_1013; 
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1012 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_1012, 0, x_999);
x_1013 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1013, 0, x_1012);
return x_1013;
}
else
{
lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; uint8_t x_1017; 
x_1014 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1014);
x_1015 = lean_ctor_get(x_6, 1);
lean_inc(x_1015);
lean_dec_ref(x_6);
x_1016 = lean_byte_array_size(x_1014);
x_1017 = lean_nat_dec_lt(x_1015, x_1016);
if (x_1017 == 0)
{
lean_object* x_1018; 
lean_dec(x_1015);
lean_dec_ref(x_1014);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1018 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1018;
}
else
{
if (x_1017 == 0)
{
uint8_t x_1019; lean_object* x_1020; lean_object* x_1021; uint8_t x_1022; 
x_1019 = l_instInhabitedUInt8;
x_1020 = lean_box(x_1019);
x_1021 = l_outOfBounds___redArg(x_1020);
x_1022 = lean_unbox(x_1021);
lean_dec(x_1021);
lean_inc_ref(x_1004);
lean_inc_ref(x_1006);
lean_inc(x_1003);
lean_inc(x_1002);
lean_inc(x_1005);
x_748 = x_1005;
x_749 = x_790;
x_750 = x_968;
x_751 = x_792;
x_752 = x_1015;
x_753 = x_1007;
x_754 = x_999;
x_755 = x_1002;
x_756 = x_1003;
x_757 = x_970;
x_758 = x_8;
x_759 = x_1014;
x_760 = x_1006;
x_761 = x_1004;
x_762 = x_793;
x_763 = x_791;
x_764 = x_1022;
goto block_789;
}
else
{
uint8_t x_1023; 
x_1023 = lean_byte_array_fget(x_1014, x_1015);
lean_inc_ref(x_1004);
lean_inc_ref(x_1006);
lean_inc(x_1003);
lean_inc(x_1002);
lean_inc(x_1005);
x_748 = x_1005;
x_749 = x_790;
x_750 = x_968;
x_751 = x_792;
x_752 = x_1015;
x_753 = x_1007;
x_754 = x_999;
x_755 = x_1002;
x_756 = x_1003;
x_757 = x_970;
x_758 = x_8;
x_759 = x_1014;
x_760 = x_1006;
x_761 = x_1004;
x_762 = x_793;
x_763 = x_791;
x_764 = x_1023;
goto block_789;
}
}
}
}
else
{
lean_object* x_1024; lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; 
lean_inc_ref(x_1006);
lean_inc(x_1005);
lean_inc_ref(x_1004);
lean_inc(x_1003);
lean_inc(x_1002);
lean_dec(x_1008);
x_1024 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1024);
x_1025 = lean_ctor_get(x_6, 1);
lean_inc(x_1025);
lean_dec_ref(x_6);
x_1026 = lean_unsigned_to_nat(5u);
x_1027 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1024, x_1025, x_8, x_1026);
if (lean_obj_tag(x_1027) == 0)
{
lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; 
lean_dec_ref(x_1006);
lean_dec(x_1005);
lean_dec_ref(x_1004);
lean_dec(x_1003);
lean_dec(x_1002);
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1028 = lean_ctor_get(x_1027, 0);
lean_inc(x_1028);
if (lean_is_exclusive(x_1027)) {
 lean_ctor_release(x_1027, 0);
 x_1029 = x_1027;
} else {
 lean_dec_ref(x_1027);
 x_1029 = lean_box(0);
}
if (lean_is_scalar(x_1029)) {
 x_1030 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1030 = x_1029;
}
lean_ctor_set(x_1030, 0, x_1028);
return x_1030;
}
else
{
lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; uint32_t x_1037; lean_object* x_1038; lean_object* x_1039; uint32_t x_1040; uint8_t x_1041; 
x_1031 = lean_ctor_get(x_1027, 0);
lean_inc(x_1031);
lean_dec_ref(x_1027);
x_1032 = lean_ctor_get(x_1031, 0);
lean_inc(x_1032);
x_1033 = lean_ctor_get(x_1031, 1);
lean_inc(x_1033);
lean_dec(x_1031);
x_1034 = lean_nat_sub(x_999, x_1007);
x_1035 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_1036 = lean_array_get_borrowed(x_1035, x_1004, x_1034);
lean_dec(x_1034);
x_1037 = lean_unbox_uint32(x_1036);
x_1038 = lean_uint32_to_nat(x_1037);
x_1039 = lean_nat_add(x_1038, x_1032);
lean_dec(x_1032);
lean_dec(x_1038);
x_1040 = lean_uint32_of_nat(x_1039);
x_1041 = lean_nat_dec_lt(x_8, x_1002);
if (x_1041 == 0)
{
x_689 = x_970;
x_690 = x_790;
x_691 = x_8;
x_692 = x_1040;
x_693 = x_968;
x_694 = x_792;
x_695 = x_1039;
x_696 = x_1033;
x_697 = x_793;
x_698 = x_791;
x_699 = x_7;
x_700 = x_1002;
x_701 = x_1003;
x_702 = x_1004;
x_703 = x_1005;
x_704 = x_1006;
goto block_712;
}
else
{
lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1042 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1042 = lean_box(0);
}
x_1043 = lean_box_uint32(x_1040);
x_1044 = lean_array_set(x_1004, x_1005, x_1043);
x_1045 = lean_nat_add(x_1005, x_790);
lean_dec(x_1005);
x_1046 = lean_nat_mod(x_1045, x_1002);
lean_dec(x_1045);
lean_inc_ref(x_1006);
lean_inc(x_1046);
lean_inc_ref(x_1044);
lean_inc(x_1003);
lean_inc(x_1002);
if (lean_is_scalar(x_1042)) {
 x_1047 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1047 = x_1042;
}
lean_ctor_set(x_1047, 0, x_1002);
lean_ctor_set(x_1047, 1, x_1003);
lean_ctor_set(x_1047, 2, x_1044);
lean_ctor_set(x_1047, 3, x_1046);
lean_ctor_set(x_1047, 4, x_1006);
x_689 = x_970;
x_690 = x_790;
x_691 = x_8;
x_692 = x_1040;
x_693 = x_968;
x_694 = x_792;
x_695 = x_1039;
x_696 = x_1033;
x_697 = x_793;
x_698 = x_791;
x_699 = x_1047;
x_700 = x_1002;
x_701 = x_1003;
x_702 = x_1044;
x_703 = x_1046;
x_704 = x_1006;
goto block_712;
}
}
}
}
else
{
lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; lean_object* x_1051; 
x_1048 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1048);
x_1049 = lean_ctor_get(x_6, 1);
lean_inc(x_1049);
lean_dec_ref(x_6);
x_1050 = lean_unsigned_to_nat(5u);
x_1051 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1048, x_1049, x_8, x_1050);
if (lean_obj_tag(x_1051) == 0)
{
lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; 
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1052 = lean_ctor_get(x_1051, 0);
lean_inc(x_1052);
if (lean_is_exclusive(x_1051)) {
 lean_ctor_release(x_1051, 0);
 x_1053 = x_1051;
} else {
 lean_dec_ref(x_1051);
 x_1053 = lean_box(0);
}
if (lean_is_scalar(x_1053)) {
 x_1054 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1054 = x_1053;
}
lean_ctor_set(x_1054, 0, x_1052);
return x_1054;
}
else
{
lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; uint32_t x_1066; uint8_t x_1067; 
x_1055 = lean_ctor_get(x_1051, 0);
lean_inc(x_1055);
lean_dec_ref(x_1051);
x_1056 = lean_ctor_get(x_1055, 0);
lean_inc(x_1056);
x_1057 = lean_ctor_get(x_1055, 1);
lean_inc(x_1057);
lean_dec(x_1055);
x_1058 = lean_ctor_get(x_7, 0);
lean_inc(x_1058);
x_1059 = lean_ctor_get(x_7, 1);
lean_inc(x_1059);
x_1060 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_1060);
x_1061 = lean_ctor_get(x_7, 3);
lean_inc(x_1061);
x_1062 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_1062);
x_1063 = lean_byte_array_size(x_3);
x_1064 = lean_nat_add(x_968, x_1063);
x_1065 = lean_nat_sub(x_1064, x_1056);
lean_dec(x_1056);
lean_dec(x_1064);
x_1066 = lean_uint32_of_nat(x_1065);
x_1067 = lean_nat_dec_lt(x_8, x_1058);
if (x_1067 == 0)
{
x_654 = x_1057;
x_655 = x_970;
x_656 = x_790;
x_657 = x_8;
x_658 = x_968;
x_659 = x_792;
x_660 = x_1065;
x_661 = x_793;
x_662 = x_1066;
x_663 = x_791;
x_664 = x_7;
x_665 = x_1058;
x_666 = x_1059;
x_667 = x_1060;
x_668 = x_1061;
x_669 = x_1062;
goto block_677;
}
else
{
lean_object* x_1068; lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; lean_object* x_1073; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1068 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1068 = lean_box(0);
}
x_1069 = lean_box_uint32(x_1066);
x_1070 = lean_array_set(x_1060, x_1061, x_1069);
x_1071 = lean_nat_add(x_1061, x_790);
lean_dec(x_1061);
x_1072 = lean_nat_mod(x_1071, x_1058);
lean_dec(x_1071);
lean_inc_ref(x_1062);
lean_inc(x_1072);
lean_inc_ref(x_1070);
lean_inc(x_1059);
lean_inc(x_1058);
if (lean_is_scalar(x_1068)) {
 x_1073 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1073 = x_1068;
}
lean_ctor_set(x_1073, 0, x_1058);
lean_ctor_set(x_1073, 1, x_1059);
lean_ctor_set(x_1073, 2, x_1070);
lean_ctor_set(x_1073, 3, x_1072);
lean_ctor_set(x_1073, 4, x_1062);
x_654 = x_1057;
x_655 = x_970;
x_656 = x_790;
x_657 = x_8;
x_658 = x_968;
x_659 = x_792;
x_660 = x_1065;
x_661 = x_793;
x_662 = x_1066;
x_663 = x_791;
x_664 = x_1073;
x_665 = x_1058;
x_666 = x_1059;
x_667 = x_1070;
x_668 = x_1072;
x_669 = x_1062;
goto block_677;
}
}
}
}
else
{
lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; 
x_1074 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1074);
x_1075 = lean_ctor_get(x_6, 1);
lean_inc(x_1075);
lean_dec_ref(x_6);
x_1076 = lean_unsigned_to_nat(5u);
x_1077 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1074, x_1075, x_8, x_1076);
if (lean_obj_tag(x_1077) == 0)
{
lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; 
lean_dec_ref(x_793);
lean_dec(x_792);
lean_dec_ref(x_791);
lean_dec(x_790);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1078 = lean_ctor_get(x_1077, 0);
lean_inc(x_1078);
if (lean_is_exclusive(x_1077)) {
 lean_ctor_release(x_1077, 0);
 x_1079 = x_1077;
} else {
 lean_dec_ref(x_1077);
 x_1079 = lean_box(0);
}
if (lean_is_scalar(x_1079)) {
 x_1080 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1080 = x_1079;
}
lean_ctor_set(x_1080, 0, x_1078);
return x_1080;
}
else
{
lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; uint32_t x_1089; uint8_t x_1090; 
x_1081 = lean_ctor_get(x_1077, 0);
lean_inc(x_1081);
lean_dec_ref(x_1077);
x_1082 = lean_ctor_get(x_1081, 0);
lean_inc(x_1082);
x_1083 = lean_ctor_get(x_1081, 1);
lean_inc(x_1083);
lean_dec(x_1081);
x_1084 = lean_ctor_get(x_7, 0);
lean_inc(x_1084);
x_1085 = lean_ctor_get(x_7, 1);
lean_inc(x_1085);
x_1086 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_1086);
x_1087 = lean_ctor_get(x_7, 3);
lean_inc(x_1087);
x_1088 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_1088);
x_1089 = lean_uint32_of_nat(x_1082);
x_1090 = lean_nat_dec_lt(x_8, x_1084);
if (x_1090 == 0)
{
x_619 = x_1082;
x_620 = x_1089;
x_621 = x_970;
x_622 = x_790;
x_623 = x_8;
x_624 = x_968;
x_625 = x_792;
x_626 = x_1083;
x_627 = x_793;
x_628 = x_791;
x_629 = x_7;
x_630 = x_1084;
x_631 = x_1085;
x_632 = x_1086;
x_633 = x_1087;
x_634 = x_1088;
goto block_642;
}
else
{
lean_object* x_1091; lean_object* x_1092; lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1091 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1091 = lean_box(0);
}
x_1092 = lean_box_uint32(x_1089);
x_1093 = lean_array_set(x_1086, x_1087, x_1092);
x_1094 = lean_nat_add(x_1087, x_790);
lean_dec(x_1087);
x_1095 = lean_nat_mod(x_1094, x_1084);
lean_dec(x_1094);
lean_inc_ref(x_1088);
lean_inc(x_1095);
lean_inc_ref(x_1093);
lean_inc(x_1085);
lean_inc(x_1084);
if (lean_is_scalar(x_1091)) {
 x_1096 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1096 = x_1091;
}
lean_ctor_set(x_1096, 0, x_1084);
lean_ctor_set(x_1096, 1, x_1085);
lean_ctor_set(x_1096, 2, x_1093);
lean_ctor_set(x_1096, 3, x_1095);
lean_ctor_set(x_1096, 4, x_1088);
x_619 = x_1082;
x_620 = x_1089;
x_621 = x_970;
x_622 = x_790;
x_623 = x_8;
x_624 = x_968;
x_625 = x_792;
x_626 = x_1083;
x_627 = x_793;
x_628 = x_791;
x_629 = x_1096;
x_630 = x_1084;
x_631 = x_1085;
x_632 = x_1093;
x_633 = x_1095;
x_634 = x_1088;
goto block_642;
}
}
}
}
}
}
else
{
lean_object* x_1097; lean_object* x_1098; 
lean_inc_ref(x_966);
lean_dec(x_967);
lean_dec(x_792);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_1097 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1097, 0, x_6);
lean_ctor_set(x_1097, 1, x_7);
lean_inc_ref(x_1097);
lean_inc_ref(x_5);
x_1098 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1098, 0, x_5);
lean_ctor_set(x_1098, 1, x_1097);
x_507 = x_790;
x_508 = x_968;
x_509 = x_793;
x_510 = x_791;
x_511 = x_966;
x_512 = x_3;
x_513 = x_1098;
x_514 = x_5;
x_515 = x_1097;
x_516 = x_6;
x_517 = x_7;
goto block_523;
}
}
}
block_1114:
{
if (x_1105 == 0)
{
lean_dec(x_1103);
lean_dec_ref(x_20);
x_790 = x_1100;
x_791 = x_1104;
x_792 = x_1102;
x_793 = x_1101;
goto block_1099;
}
else
{
lean_object* x_1106; lean_object* x_1107; 
lean_dec(x_1102);
lean_dec_ref(x_1101);
x_1106 = lean_unsigned_to_nat(5u);
x_1107 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_20, x_1103, x_8, x_1106);
if (lean_obj_tag(x_1107) == 0)
{
uint8_t x_1108; 
lean_dec_ref(x_1104);
lean_dec(x_1100);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1108 = !lean_is_exclusive(x_1107);
if (x_1108 == 0)
{
return x_1107;
}
else
{
lean_object* x_1109; lean_object* x_1110; 
x_1109 = lean_ctor_get(x_1107, 0);
lean_inc(x_1109);
lean_dec(x_1107);
x_1110 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1110, 0, x_1109);
return x_1110;
}
}
else
{
lean_object* x_1111; lean_object* x_1112; lean_object* x_1113; 
x_1111 = lean_ctor_get(x_1107, 0);
lean_inc(x_1111);
lean_dec_ref(x_1107);
x_1112 = lean_ctor_get(x_1111, 0);
lean_inc(x_1112);
x_1113 = lean_ctor_get(x_1111, 1);
lean_inc(x_1113);
lean_dec(x_1111);
x_790 = x_1100;
x_791 = x_1104;
x_792 = x_1112;
x_793 = x_1113;
goto block_1099;
}
}
}
block_1135:
{
lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; uint8_t x_1121; 
x_1116 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1117 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1118 = lean_uint8_to_nat(x_1115);
x_1119 = lean_array_get(x_1116, x_1117, x_1118);
x_1120 = lean_ctor_get(x_1119, 0);
lean_inc_ref(x_1120);
x_1121 = !lean_is_exclusive(x_1120);
if (x_1121 == 0)
{
lean_object* x_1122; lean_object* x_1123; lean_object* x_1124; uint8_t x_1125; 
x_1122 = lean_ctor_get(x_1120, 0);
x_1123 = lean_ctor_get(x_1120, 1);
x_1124 = lean_nat_add(x_21, x_27);
lean_dec(x_21);
lean_inc(x_1124);
lean_inc_ref(x_20);
lean_ctor_set(x_1120, 1, x_1124);
lean_ctor_set(x_1120, 0, x_20);
x_1125 = lean_nat_dec_eq(x_1123, x_8);
if (x_1125 == 0)
{
lean_dec(x_1122);
x_1100 = x_27;
x_1101 = x_1120;
x_1102 = x_1123;
x_1103 = x_1124;
x_1104 = x_1119;
x_1105 = x_1125;
goto block_1114;
}
else
{
lean_object* x_1126; uint8_t x_1127; 
x_1126 = lean_box(0);
x_1127 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_1122, x_1126);
lean_dec(x_1122);
if (x_1127 == 0)
{
x_1100 = x_27;
x_1101 = x_1120;
x_1102 = x_1123;
x_1103 = x_1124;
x_1104 = x_1119;
x_1105 = x_1125;
goto block_1114;
}
else
{
lean_dec(x_1124);
lean_dec_ref(x_20);
x_790 = x_27;
x_791 = x_1119;
x_792 = x_1123;
x_793 = x_1120;
goto block_1099;
}
}
}
else
{
lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; uint8_t x_1132; 
x_1128 = lean_ctor_get(x_1120, 0);
x_1129 = lean_ctor_get(x_1120, 1);
lean_inc(x_1129);
lean_inc(x_1128);
lean_dec(x_1120);
x_1130 = lean_nat_add(x_21, x_27);
lean_dec(x_21);
lean_inc(x_1130);
lean_inc_ref(x_20);
x_1131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1131, 0, x_20);
lean_ctor_set(x_1131, 1, x_1130);
x_1132 = lean_nat_dec_eq(x_1129, x_8);
if (x_1132 == 0)
{
lean_dec(x_1128);
x_1100 = x_27;
x_1101 = x_1131;
x_1102 = x_1129;
x_1103 = x_1130;
x_1104 = x_1119;
x_1105 = x_1132;
goto block_1114;
}
else
{
lean_object* x_1133; uint8_t x_1134; 
x_1133 = lean_box(0);
x_1134 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_1128, x_1133);
lean_dec(x_1128);
if (x_1134 == 0)
{
x_1100 = x_27;
x_1101 = x_1131;
x_1102 = x_1129;
x_1103 = x_1130;
x_1104 = x_1119;
x_1105 = x_1132;
goto block_1114;
}
else
{
lean_dec(x_1130);
lean_dec_ref(x_20);
x_790 = x_27;
x_791 = x_1119;
x_792 = x_1129;
x_793 = x_1131;
goto block_1099;
}
}
}
}
}
}
else
{
lean_object* x_1141; lean_object* x_1142; lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; 
lean_dec(x_2);
x_1141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1141, 0, x_6);
lean_ctor_set(x_1141, 1, x_7);
x_1142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1142, 0, x_5);
lean_ctor_set(x_1142, 1, x_1141);
x_1143 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1143, 0, x_4);
lean_ctor_set(x_1143, 1, x_1142);
x_1144 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1144, 0, x_3);
lean_ctor_set(x_1144, 1, x_1143);
x_1145 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1145, 0, x_1144);
return x_1145;
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
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
