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
lean_dec(x_2);
x_79 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_79;
}
else
{
uint8_t x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; 
x_80 = 0;
x_81 = lean_byte_array_size(x_4);
x_82 = lean_byte_array_copy_slice(x_74, x_75, x_4, x_81, x_2, x_80);
lean_ctor_set(x_5, 1, x_76);
if (lean_is_scalar(x_68)) {
 x_83 = lean_alloc_ctor(0, 2, 0);
} else {
 x_83 = x_68;
}
lean_ctor_set(x_83, 0, x_6);
lean_ctor_set(x_83, 1, x_7);
x_84 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_84, 0, x_5);
lean_ctor_set(x_84, 1, x_83);
x_85 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_85, 0, x_82);
lean_ctor_set(x_85, 1, x_84);
x_86 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_86, 0, x_85);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; uint8_t x_91; 
x_87 = lean_ctor_get(x_5, 0);
x_88 = lean_ctor_get(x_5, 1);
lean_inc(x_88);
lean_inc(x_87);
lean_dec(x_5);
x_89 = lean_nat_add(x_88, x_2);
x_90 = lean_byte_array_size(x_87);
x_91 = lean_nat_dec_le(x_89, x_90);
if (x_91 == 0)
{
lean_object* x_92; 
lean_dec(x_89);
lean_dec(x_88);
lean_dec_ref(x_87);
lean_dec(x_68);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec(x_2);
x_92 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_92;
}
else
{
uint8_t x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; 
x_93 = 0;
x_94 = lean_byte_array_size(x_4);
x_95 = lean_byte_array_copy_slice(x_87, x_88, x_4, x_94, x_2, x_93);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_87);
lean_ctor_set(x_96, 1, x_89);
if (lean_is_scalar(x_68)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_68;
}
lean_ctor_set(x_97, 0, x_6);
lean_ctor_set(x_97, 1, x_7);
x_98 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_98, 0, x_96);
lean_ctor_set(x_98, 1, x_97);
x_99 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_99, 0, x_95);
lean_ctor_set(x_99, 1, x_98);
x_100 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_100, 0, x_99);
return x_100;
}
}
}
case 2:
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; lean_object* x_121; uint8_t x_122; 
lean_dec_ref(x_3);
x_101 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_101);
x_102 = lean_ctor_get(x_5, 1);
lean_inc(x_102);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_103 = x_5;
} else {
 lean_dec_ref(x_5);
 x_103 = lean_box(0);
}
x_121 = lean_byte_array_size(x_101);
x_122 = lean_nat_dec_lt(x_102, x_121);
if (x_122 == 0)
{
lean_object* x_123; 
lean_dec(x_103);
lean_dec(x_102);
lean_dec_ref(x_101);
lean_dec(x_68);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec(x_2);
x_123 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_123;
}
else
{
if (x_122 == 0)
{
uint8_t x_124; lean_object* x_125; lean_object* x_126; uint8_t x_127; 
x_124 = l_instInhabitedUInt8;
x_125 = lean_box(x_124);
x_126 = l_outOfBounds___redArg(x_125);
x_127 = lean_unbox(x_126);
lean_dec(x_126);
x_104 = x_127;
goto block_120;
}
else
{
uint8_t x_128; 
x_128 = lean_byte_array_fget(x_101, x_102);
x_104 = x_128;
goto block_120;
}
}
block_120:
{
lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; uint8_t x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; 
x_105 = lean_unsigned_to_nat(1u);
x_106 = lean_nat_add(x_102, x_105);
lean_dec(x_102);
if (lean_is_scalar(x_103)) {
 x_107 = lean_alloc_ctor(0, 2, 0);
} else {
 x_107 = x_103;
}
lean_ctor_set(x_107, 0, x_101);
lean_ctor_set(x_107, 1, x_106);
x_108 = lean_box(x_104);
x_109 = lean_mk_array(x_2, x_108);
x_110 = lean_byte_array_mk(x_109);
x_111 = lean_unsigned_to_nat(0u);
x_112 = lean_byte_array_size(x_4);
x_113 = lean_byte_array_size(x_110);
x_114 = 0;
x_115 = lean_byte_array_copy_slice(x_110, x_111, x_4, x_112, x_113, x_114);
lean_dec_ref(x_110);
if (lean_is_scalar(x_68)) {
 x_116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_116 = x_68;
}
lean_ctor_set(x_116, 0, x_6);
lean_ctor_set(x_116, 1, x_7);
x_117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_117, 0, x_107);
lean_ctor_set(x_117, 1, x_116);
x_118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_118, 0, x_115);
lean_ctor_set(x_118, 1, x_117);
x_119 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_119, 0, x_118);
return x_119;
}
}
default: 
{
uint8_t x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; uint32_t x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; uint8_t x_149; 
lean_dec(x_68);
x_129 = lean_ctor_get_uint8(x_67, 0);
lean_dec_ref(x_67);
x_130 = lean_uint8_to_nat(x_129);
x_131 = lean_unsigned_to_nat(0u);
x_149 = lean_nat_dec_eq(x_130, x_131);
if (x_149 == 0)
{
lean_object* x_150; uint8_t x_151; 
x_150 = lean_unsigned_to_nat(1u);
x_151 = lean_nat_dec_eq(x_130, x_150);
if (x_151 == 0)
{
lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; 
x_152 = lean_ctor_get(x_7, 0);
lean_inc(x_152);
x_153 = lean_ctor_get(x_7, 1);
lean_inc(x_153);
x_154 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_154);
x_155 = lean_ctor_get(x_7, 3);
lean_inc(x_155);
x_156 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_156);
x_157 = lean_unsigned_to_nat(2u);
x_158 = lean_nat_add(x_157, x_152);
x_159 = lean_nat_dec_lt(x_130, x_158);
if (x_159 == 0)
{
lean_object* x_160; uint8_t x_161; 
x_160 = lean_nat_add(x_158, x_153);
lean_dec(x_158);
x_161 = lean_nat_dec_lt(x_130, x_160);
lean_dec(x_160);
if (x_161 == 0)
{
lean_object* x_162; lean_object* x_163; 
lean_dec_ref(x_156);
lean_dec(x_155);
lean_dec_ref(x_154);
lean_dec(x_153);
lean_dec(x_152);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_162 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_162, 0, x_130);
x_163 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_163, 0, x_162);
return x_163;
}
else
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; uint8_t x_167; lean_object* x_198; uint8_t x_199; 
x_164 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_164);
x_165 = lean_ctor_get(x_6, 1);
lean_inc(x_165);
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 x_166 = x_6;
} else {
 lean_dec_ref(x_6);
 x_166 = lean_box(0);
}
x_198 = lean_byte_array_size(x_164);
x_199 = lean_nat_dec_lt(x_165, x_198);
if (x_199 == 0)
{
lean_object* x_200; 
lean_dec(x_166);
lean_dec(x_165);
lean_dec_ref(x_164);
lean_dec_ref(x_156);
lean_dec(x_155);
lean_dec_ref(x_154);
lean_dec(x_153);
lean_dec(x_152);
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
x_167 = x_204;
goto block_197;
}
else
{
uint8_t x_205; 
x_205 = lean_byte_array_fget(x_164, x_165);
x_167 = x_205;
goto block_197;
}
}
block_197:
{
lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; uint32_t x_178; lean_object* x_179; uint32_t x_180; uint8_t x_181; 
x_168 = lean_nat_add(x_165, x_150);
lean_dec(x_165);
if (lean_is_scalar(x_166)) {
 x_169 = lean_alloc_ctor(0, 2, 0);
} else {
 x_169 = x_166;
}
lean_ctor_set(x_169, 0, x_164);
lean_ctor_set(x_169, 1, x_168);
x_170 = lean_nat_sub(x_130, x_157);
x_171 = lean_nat_sub(x_170, x_152);
lean_dec(x_170);
x_172 = lean_unsigned_to_nat(256u);
x_173 = lean_nat_mul(x_171, x_172);
lean_dec(x_171);
x_174 = lean_uint8_to_nat(x_167);
x_175 = lean_nat_add(x_173, x_174);
lean_dec(x_173);
x_176 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_177 = lean_array_get_borrowed(x_176, x_156, x_175);
lean_dec(x_175);
x_178 = lean_unbox_uint32(x_177);
x_179 = lean_uint32_to_nat(x_178);
x_180 = lean_uint32_of_nat(x_179);
x_181 = lean_nat_dec_lt(x_131, x_152);
if (x_181 == 0)
{
x_132 = x_172;
x_133 = x_169;
x_134 = x_180;
x_135 = x_179;
x_136 = x_7;
x_137 = x_152;
x_138 = x_153;
x_139 = x_154;
x_140 = x_155;
x_141 = x_156;
goto block_148;
}
else
{
uint8_t x_182; 
x_182 = !lean_is_exclusive(x_7);
if (x_182 == 0)
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_183 = lean_ctor_get(x_7, 4);
lean_dec(x_183);
x_184 = lean_ctor_get(x_7, 3);
lean_dec(x_184);
x_185 = lean_ctor_get(x_7, 2);
lean_dec(x_185);
x_186 = lean_ctor_get(x_7, 1);
lean_dec(x_186);
x_187 = lean_ctor_get(x_7, 0);
lean_dec(x_187);
x_188 = lean_box_uint32(x_180);
x_189 = lean_array_set(x_154, x_155, x_188);
x_190 = lean_nat_add(x_155, x_150);
lean_dec(x_155);
x_191 = lean_nat_mod(x_190, x_152);
lean_dec(x_190);
lean_inc_ref(x_156);
lean_inc(x_191);
lean_inc_ref(x_189);
lean_inc(x_153);
lean_inc(x_152);
lean_ctor_set(x_7, 3, x_191);
lean_ctor_set(x_7, 2, x_189);
x_132 = x_172;
x_133 = x_169;
x_134 = x_180;
x_135 = x_179;
x_136 = x_7;
x_137 = x_152;
x_138 = x_153;
x_139 = x_189;
x_140 = x_191;
x_141 = x_156;
goto block_148;
}
else
{
lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; 
lean_dec(x_7);
x_192 = lean_box_uint32(x_180);
x_193 = lean_array_set(x_154, x_155, x_192);
x_194 = lean_nat_add(x_155, x_150);
lean_dec(x_155);
x_195 = lean_nat_mod(x_194, x_152);
lean_dec(x_194);
lean_inc_ref(x_156);
lean_inc(x_195);
lean_inc_ref(x_193);
lean_inc(x_153);
lean_inc(x_152);
x_196 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_196, 0, x_152);
lean_ctor_set(x_196, 1, x_153);
lean_ctor_set(x_196, 2, x_193);
lean_ctor_set(x_196, 3, x_195);
lean_ctor_set(x_196, 4, x_156);
x_132 = x_172;
x_133 = x_169;
x_134 = x_180;
x_135 = x_179;
x_136 = x_196;
x_137 = x_152;
x_138 = x_153;
x_139 = x_193;
x_140 = x_195;
x_141 = x_156;
goto block_148;
}
}
}
}
}
else
{
lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; 
lean_dec(x_158);
x_206 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_206);
x_207 = lean_ctor_get(x_6, 1);
lean_inc(x_207);
lean_dec_ref(x_6);
x_208 = lean_unsigned_to_nat(5u);
x_209 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_206, x_207, x_131, x_208);
if (lean_obj_tag(x_209) == 0)
{
uint8_t x_210; 
lean_dec_ref(x_156);
lean_dec(x_155);
lean_dec_ref(x_154);
lean_dec(x_153);
lean_dec(x_152);
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
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; uint32_t x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; uint32_t x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; uint8_t x_241; 
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
x_217 = lean_nat_sub(x_130, x_157);
x_218 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_219 = lean_array_get_borrowed(x_218, x_154, x_217);
lean_dec(x_217);
x_220 = lean_unbox_uint32(x_219);
x_221 = lean_uint32_to_nat(x_220);
x_222 = lean_nat_add(x_221, x_214);
lean_dec(x_214);
lean_dec(x_221);
x_226 = lean_uint32_of_nat(x_222);
x_241 = lean_nat_dec_lt(x_131, x_152);
if (x_241 == 0)
{
x_227 = x_7;
x_228 = x_152;
x_229 = x_153;
x_230 = x_154;
x_231 = x_155;
x_232 = x_156;
goto block_240;
}
else
{
uint8_t x_242; 
x_242 = !lean_is_exclusive(x_7);
if (x_242 == 0)
{
lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; 
x_243 = lean_ctor_get(x_7, 4);
lean_dec(x_243);
x_244 = lean_ctor_get(x_7, 3);
lean_dec(x_244);
x_245 = lean_ctor_get(x_7, 2);
lean_dec(x_245);
x_246 = lean_ctor_get(x_7, 1);
lean_dec(x_246);
x_247 = lean_ctor_get(x_7, 0);
lean_dec(x_247);
x_248 = lean_box_uint32(x_226);
x_249 = lean_array_set(x_154, x_155, x_248);
x_250 = lean_nat_add(x_155, x_150);
lean_dec(x_155);
x_251 = lean_nat_mod(x_250, x_152);
lean_dec(x_250);
lean_inc_ref(x_156);
lean_inc(x_251);
lean_inc_ref(x_249);
lean_inc(x_153);
lean_inc(x_152);
lean_ctor_set(x_7, 3, x_251);
lean_ctor_set(x_7, 2, x_249);
x_227 = x_7;
x_228 = x_152;
x_229 = x_153;
x_230 = x_249;
x_231 = x_251;
x_232 = x_156;
goto block_240;
}
else
{
lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; 
lean_dec(x_7);
x_252 = lean_box_uint32(x_226);
x_253 = lean_array_set(x_154, x_155, x_252);
x_254 = lean_nat_add(x_155, x_150);
lean_dec(x_155);
x_255 = lean_nat_mod(x_254, x_152);
lean_dec(x_254);
lean_inc_ref(x_156);
lean_inc(x_255);
lean_inc_ref(x_253);
lean_inc(x_153);
lean_inc(x_152);
x_256 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_256, 0, x_152);
lean_ctor_set(x_256, 1, x_153);
lean_ctor_set(x_256, 2, x_253);
lean_ctor_set(x_256, 3, x_255);
lean_ctor_set(x_256, 4, x_156);
x_227 = x_256;
x_228 = x_152;
x_229 = x_153;
x_230 = x_253;
x_231 = x_255;
x_232 = x_156;
goto block_240;
}
}
block_225:
{
lean_object* x_224; 
if (lean_is_scalar(x_216)) {
 x_224 = lean_alloc_ctor(0, 2, 0);
} else {
 x_224 = x_216;
}
lean_ctor_set(x_224, 0, x_215);
lean_ctor_set(x_224, 1, x_223);
x_15 = x_222;
x_16 = x_224;
goto block_61;
}
block_240:
{
uint8_t x_233; 
x_233 = lean_nat_dec_lt(x_131, x_229);
if (x_233 == 0)
{
lean_dec_ref(x_232);
lean_dec(x_231);
lean_dec_ref(x_230);
lean_dec(x_229);
lean_dec(x_228);
x_223 = x_227;
goto block_225;
}
else
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; 
lean_dec_ref(x_227);
x_234 = lean_unsigned_to_nat(256u);
x_235 = lean_nat_mul(x_229, x_234);
x_236 = lean_nat_mod(x_222, x_235);
lean_dec(x_235);
x_237 = lean_box_uint32(x_226);
x_238 = lean_array_set(x_232, x_236, x_237);
lean_dec(x_236);
x_239 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_239, 0, x_228);
lean_ctor_set(x_239, 1, x_229);
lean_ctor_set(x_239, 2, x_230);
lean_ctor_set(x_239, 3, x_231);
lean_ctor_set(x_239, 4, x_238);
x_223 = x_239;
goto block_225;
}
}
}
}
}
else
{
lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; 
x_257 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_257);
x_258 = lean_ctor_get(x_6, 1);
lean_inc(x_258);
lean_dec_ref(x_6);
x_259 = lean_unsigned_to_nat(5u);
x_260 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_257, x_258, x_131, x_259);
if (lean_obj_tag(x_260) == 0)
{
uint8_t x_261; 
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_261 = !lean_is_exclusive(x_260);
if (x_261 == 0)
{
return x_260;
}
else
{
lean_object* x_262; lean_object* x_263; 
x_262 = lean_ctor_get(x_260, 0);
lean_inc(x_262);
lean_dec(x_260);
x_263 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_263, 0, x_262);
return x_263;
}
}
else
{
lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; lean_object* x_271; lean_object* x_272; lean_object* x_273; lean_object* x_274; uint32_t x_277; lean_object* x_278; lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; uint8_t x_292; 
x_264 = lean_ctor_get(x_260, 0);
lean_inc(x_264);
lean_dec_ref(x_260);
x_265 = lean_ctor_get(x_264, 0);
lean_inc(x_265);
x_266 = lean_ctor_get(x_264, 1);
lean_inc(x_266);
if (lean_is_exclusive(x_264)) {
 lean_ctor_release(x_264, 0);
 lean_ctor_release(x_264, 1);
 x_267 = x_264;
} else {
 lean_dec_ref(x_264);
 x_267 = lean_box(0);
}
x_268 = lean_ctor_get(x_7, 0);
lean_inc(x_268);
x_269 = lean_ctor_get(x_7, 1);
lean_inc(x_269);
x_270 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_270);
x_271 = lean_ctor_get(x_7, 3);
lean_inc(x_271);
x_272 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_272);
x_273 = lean_nat_sub(x_8, x_265);
lean_dec(x_265);
x_277 = lean_uint32_of_nat(x_273);
x_292 = lean_nat_dec_lt(x_131, x_268);
if (x_292 == 0)
{
x_278 = x_7;
x_279 = x_268;
x_280 = x_269;
x_281 = x_270;
x_282 = x_271;
x_283 = x_272;
goto block_291;
}
else
{
uint8_t x_293; 
x_293 = !lean_is_exclusive(x_7);
if (x_293 == 0)
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; 
x_294 = lean_ctor_get(x_7, 4);
lean_dec(x_294);
x_295 = lean_ctor_get(x_7, 3);
lean_dec(x_295);
x_296 = lean_ctor_get(x_7, 2);
lean_dec(x_296);
x_297 = lean_ctor_get(x_7, 1);
lean_dec(x_297);
x_298 = lean_ctor_get(x_7, 0);
lean_dec(x_298);
x_299 = lean_box_uint32(x_277);
x_300 = lean_array_set(x_270, x_271, x_299);
x_301 = lean_nat_add(x_271, x_150);
lean_dec(x_271);
x_302 = lean_nat_mod(x_301, x_268);
lean_dec(x_301);
lean_inc_ref(x_272);
lean_inc(x_302);
lean_inc_ref(x_300);
lean_inc(x_269);
lean_inc(x_268);
lean_ctor_set(x_7, 3, x_302);
lean_ctor_set(x_7, 2, x_300);
x_278 = x_7;
x_279 = x_268;
x_280 = x_269;
x_281 = x_300;
x_282 = x_302;
x_283 = x_272;
goto block_291;
}
else
{
lean_object* x_303; lean_object* x_304; lean_object* x_305; lean_object* x_306; lean_object* x_307; 
lean_dec(x_7);
x_303 = lean_box_uint32(x_277);
x_304 = lean_array_set(x_270, x_271, x_303);
x_305 = lean_nat_add(x_271, x_150);
lean_dec(x_271);
x_306 = lean_nat_mod(x_305, x_268);
lean_dec(x_305);
lean_inc_ref(x_272);
lean_inc(x_306);
lean_inc_ref(x_304);
lean_inc(x_269);
lean_inc(x_268);
x_307 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_307, 0, x_268);
lean_ctor_set(x_307, 1, x_269);
lean_ctor_set(x_307, 2, x_304);
lean_ctor_set(x_307, 3, x_306);
lean_ctor_set(x_307, 4, x_272);
x_278 = x_307;
x_279 = x_268;
x_280 = x_269;
x_281 = x_304;
x_282 = x_306;
x_283 = x_272;
goto block_291;
}
}
block_276:
{
lean_object* x_275; 
if (lean_is_scalar(x_267)) {
 x_275 = lean_alloc_ctor(0, 2, 0);
} else {
 x_275 = x_267;
}
lean_ctor_set(x_275, 0, x_266);
lean_ctor_set(x_275, 1, x_274);
x_15 = x_273;
x_16 = x_275;
goto block_61;
}
block_291:
{
uint8_t x_284; 
x_284 = lean_nat_dec_lt(x_131, x_280);
if (x_284 == 0)
{
lean_dec_ref(x_283);
lean_dec(x_282);
lean_dec_ref(x_281);
lean_dec(x_280);
lean_dec(x_279);
x_274 = x_278;
goto block_276;
}
else
{
lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
lean_dec_ref(x_278);
x_285 = lean_unsigned_to_nat(256u);
x_286 = lean_nat_mul(x_280, x_285);
x_287 = lean_nat_mod(x_273, x_286);
lean_dec(x_286);
x_288 = lean_box_uint32(x_277);
x_289 = lean_array_set(x_283, x_287, x_288);
lean_dec(x_287);
x_290 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_290, 0, x_279);
lean_ctor_set(x_290, 1, x_280);
lean_ctor_set(x_290, 2, x_281);
lean_ctor_set(x_290, 3, x_282);
lean_ctor_set(x_290, 4, x_289);
x_274 = x_290;
goto block_276;
}
}
}
}
}
else
{
lean_object* x_308; lean_object* x_309; lean_object* x_310; lean_object* x_311; 
x_308 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_308);
x_309 = lean_ctor_get(x_6, 1);
lean_inc(x_309);
lean_dec_ref(x_6);
x_310 = lean_unsigned_to_nat(5u);
x_311 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_308, x_309, x_131, x_310);
if (lean_obj_tag(x_311) == 0)
{
uint8_t x_312; 
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
lean_dec(x_2);
x_312 = !lean_is_exclusive(x_311);
if (x_312 == 0)
{
return x_311;
}
else
{
lean_object* x_313; lean_object* x_314; 
x_313 = lean_ctor_get(x_311, 0);
lean_inc(x_313);
lean_dec(x_311);
x_314 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_314, 0, x_313);
return x_314;
}
}
else
{
lean_object* x_315; lean_object* x_316; lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; lean_object* x_326; uint32_t x_327; lean_object* x_328; lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; uint8_t x_342; 
x_315 = lean_ctor_get(x_311, 0);
lean_inc(x_315);
lean_dec_ref(x_311);
x_316 = lean_ctor_get(x_315, 0);
lean_inc(x_316);
x_317 = lean_ctor_get(x_315, 1);
lean_inc(x_317);
if (lean_is_exclusive(x_315)) {
 lean_ctor_release(x_315, 0);
 lean_ctor_release(x_315, 1);
 x_318 = x_315;
} else {
 lean_dec_ref(x_315);
 x_318 = lean_box(0);
}
x_322 = lean_ctor_get(x_7, 0);
lean_inc(x_322);
x_323 = lean_ctor_get(x_7, 1);
lean_inc(x_323);
x_324 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_324);
x_325 = lean_ctor_get(x_7, 3);
lean_inc(x_325);
x_326 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_326);
x_327 = lean_uint32_of_nat(x_316);
x_342 = lean_nat_dec_lt(x_131, x_322);
if (x_342 == 0)
{
x_328 = x_7;
x_329 = x_322;
x_330 = x_323;
x_331 = x_324;
x_332 = x_325;
x_333 = x_326;
goto block_341;
}
else
{
uint8_t x_343; 
x_343 = !lean_is_exclusive(x_7);
if (x_343 == 0)
{
lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; lean_object* x_349; lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; 
x_344 = lean_ctor_get(x_7, 4);
lean_dec(x_344);
x_345 = lean_ctor_get(x_7, 3);
lean_dec(x_345);
x_346 = lean_ctor_get(x_7, 2);
lean_dec(x_346);
x_347 = lean_ctor_get(x_7, 1);
lean_dec(x_347);
x_348 = lean_ctor_get(x_7, 0);
lean_dec(x_348);
x_349 = lean_box_uint32(x_327);
x_350 = lean_array_set(x_324, x_325, x_349);
x_351 = lean_unsigned_to_nat(1u);
x_352 = lean_nat_add(x_325, x_351);
lean_dec(x_325);
x_353 = lean_nat_mod(x_352, x_322);
lean_dec(x_352);
lean_inc_ref(x_326);
lean_inc(x_353);
lean_inc_ref(x_350);
lean_inc(x_323);
lean_inc(x_322);
lean_ctor_set(x_7, 3, x_353);
lean_ctor_set(x_7, 2, x_350);
x_328 = x_7;
x_329 = x_322;
x_330 = x_323;
x_331 = x_350;
x_332 = x_353;
x_333 = x_326;
goto block_341;
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; lean_object* x_357; lean_object* x_358; lean_object* x_359; 
lean_dec(x_7);
x_354 = lean_box_uint32(x_327);
x_355 = lean_array_set(x_324, x_325, x_354);
x_356 = lean_unsigned_to_nat(1u);
x_357 = lean_nat_add(x_325, x_356);
lean_dec(x_325);
x_358 = lean_nat_mod(x_357, x_322);
lean_dec(x_357);
lean_inc_ref(x_326);
lean_inc(x_358);
lean_inc_ref(x_355);
lean_inc(x_323);
lean_inc(x_322);
x_359 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_359, 0, x_322);
lean_ctor_set(x_359, 1, x_323);
lean_ctor_set(x_359, 2, x_355);
lean_ctor_set(x_359, 3, x_358);
lean_ctor_set(x_359, 4, x_326);
x_328 = x_359;
x_329 = x_322;
x_330 = x_323;
x_331 = x_355;
x_332 = x_358;
x_333 = x_326;
goto block_341;
}
}
block_321:
{
lean_object* x_320; 
if (lean_is_scalar(x_318)) {
 x_320 = lean_alloc_ctor(0, 2, 0);
} else {
 x_320 = x_318;
}
lean_ctor_set(x_320, 0, x_317);
lean_ctor_set(x_320, 1, x_319);
x_15 = x_316;
x_16 = x_320;
goto block_61;
}
block_341:
{
uint8_t x_334; 
x_334 = lean_nat_dec_lt(x_131, x_330);
if (x_334 == 0)
{
lean_dec_ref(x_333);
lean_dec(x_332);
lean_dec_ref(x_331);
lean_dec(x_330);
lean_dec(x_329);
x_319 = x_328;
goto block_321;
}
else
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; 
lean_dec_ref(x_328);
x_335 = lean_unsigned_to_nat(256u);
x_336 = lean_nat_mul(x_330, x_335);
x_337 = lean_nat_mod(x_316, x_336);
lean_dec(x_336);
x_338 = lean_box_uint32(x_327);
x_339 = lean_array_set(x_333, x_337, x_338);
lean_dec(x_337);
x_340 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_340, 0, x_329);
lean_ctor_set(x_340, 1, x_330);
lean_ctor_set(x_340, 2, x_331);
lean_ctor_set(x_340, 3, x_332);
lean_ctor_set(x_340, 4, x_339);
x_319 = x_340;
goto block_321;
}
}
}
}
block_148:
{
uint8_t x_142; 
x_142 = lean_nat_dec_lt(x_131, x_138);
if (x_142 == 0)
{
lean_dec_ref(x_141);
lean_dec(x_140);
lean_dec_ref(x_139);
lean_dec(x_138);
lean_dec(x_137);
x_62 = x_133;
x_63 = x_135;
x_64 = x_136;
goto block_66;
}
else
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; 
lean_dec_ref(x_136);
x_143 = lean_nat_mul(x_138, x_132);
x_144 = lean_nat_mod(x_135, x_143);
lean_dec(x_143);
x_145 = lean_box_uint32(x_134);
x_146 = lean_array_set(x_141, x_144, x_145);
lean_dec(x_144);
x_147 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_147, 0, x_137);
lean_ctor_set(x_147, 1, x_138);
lean_ctor_set(x_147, 2, x_139);
lean_ctor_set(x_147, 3, x_140);
lean_ctor_set(x_147, 4, x_146);
x_62 = x_133;
x_63 = x_135;
x_64 = x_147;
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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_71; lean_object* x_72; lean_object* x_73; lean_object* x_74; uint8_t x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; uint8_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; uint32_t x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; uint8_t x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; uint8_t x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; uint32_t x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_207; uint32_t x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_233; lean_object* x_234; lean_object* x_235; lean_object* x_236; uint8_t x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint8_t x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; uint32_t x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_272; uint8_t x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; uint8_t x_280; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_588; lean_object* x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; uint8_t x_600; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; uint8_t x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; lean_object* x_712; uint8_t x_713; lean_object* x_714; lean_object* x_715; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; uint8_t x_727; uint32_t x_728; lean_object* x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; uint8_t x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; uint32_t x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; uint8_t x_766; lean_object* x_767; lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; uint8_t x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; lean_object* x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; uint8_t x_804; lean_object* x_805; uint32_t x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; lean_object* x_827; lean_object* x_828; uint8_t x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; uint32_t x_841; lean_object* x_842; lean_object* x_843; uint8_t x_844; lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; uint8_t x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; uint8_t x_884; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; lean_object* x_909; lean_object* x_910; uint8_t x_911; lean_object* x_912; lean_object* x_913; uint8_t x_914; lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; lean_object* x_1237; uint8_t x_1238; uint8_t x_1249; lean_object* x_1263; uint8_t x_1264; 
x_1230 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_1230);
x_1231 = lean_ctor_get(x_3, 1);
lean_inc(x_1231);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1232 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1232 = lean_box(0);
}
x_1263 = lean_byte_array_size(x_1230);
x_1264 = lean_nat_dec_lt(x_1231, x_1263);
if (x_1264 == 0)
{
lean_object* x_1265; 
lean_dec(x_1232);
lean_dec(x_1231);
lean_dec_ref(x_1230);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1265 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1265;
}
else
{
if (x_1264 == 0)
{
uint8_t x_1266; lean_object* x_1267; lean_object* x_1268; uint8_t x_1269; 
x_1266 = l_instInhabitedUInt8;
x_1267 = lean_box(x_1266);
x_1268 = l_outOfBounds___redArg(x_1267);
x_1269 = lean_unbox(x_1268);
lean_dec(x_1268);
x_1249 = x_1269;
goto block_1262;
}
else
{
uint8_t x_1270; 
x_1270 = lean_byte_array_fget(x_1230, x_1231);
x_1249 = x_1270;
goto block_1262;
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
lean_ctor_set(x_18, 1, x_16);
x_7 = x_15;
x_8 = x_17;
x_9 = x_18;
goto block_13;
}
block_70:
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; 
x_30 = lean_byte_array_size(x_27);
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
x_41 = lean_byte_array_copy_slice(x_38, x_39, x_27, x_30, x_40, x_22);
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
x_15 = x_25;
x_16 = x_29;
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
x_51 = lean_byte_array_copy_slice(x_49, x_39, x_41, x_42, x_50, x_22);
lean_dec_ref(x_49);
x_14 = x_21;
x_15 = x_25;
x_16 = x_29;
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
x_59 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_56, x_58, x_55, x_27, x_57);
x_14 = x_21;
x_15 = x_25;
x_16 = x_29;
x_17 = x_59;
goto block_19;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_26);
lean_dec(x_24);
x_60 = l_ByteArray_extract(x_27, x_52, x_53);
lean_dec(x_53);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_byte_array_size(x_60);
x_63 = lean_byte_array_copy_slice(x_60, x_61, x_27, x_30, x_62, x_22);
lean_dec_ref(x_60);
x_14 = x_21;
x_15 = x_25;
x_16 = x_29;
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
x_67 = lean_byte_array_copy_slice(x_64, x_65, x_27, x_30, x_66, x_22);
lean_dec_ref(x_64);
x_14 = x_21;
x_15 = x_25;
x_16 = x_29;
x_17 = x_67;
goto block_19;
}
}
else
{
lean_object* x_68; lean_object* x_69; 
lean_dec_ref(x_29);
lean_dec_ref(x_27);
lean_dec_ref(x_25);
lean_dec(x_24);
lean_dec(x_23);
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
lean_ctor_set(x_82, 0, x_80);
lean_ctor_set(x_82, 1, x_81);
x_20 = x_71;
x_21 = x_72;
x_22 = x_75;
x_23 = x_74;
x_24 = x_76;
x_25 = x_77;
x_26 = x_78;
x_27 = x_79;
x_28 = x_73;
x_29 = x_82;
goto block_70;
}
block_109:
{
uint8_t x_103; 
x_103 = lean_nat_dec_lt(x_90, x_99);
lean_dec(x_90);
if (x_103 == 0)
{
lean_dec_ref(x_102);
lean_dec(x_101);
lean_dec_ref(x_100);
lean_dec(x_99);
lean_dec(x_98);
x_71 = x_84;
x_72 = x_86;
x_73 = x_85;
x_74 = x_89;
x_75 = x_88;
x_76 = x_91;
x_77 = x_92;
x_78 = x_93;
x_79 = x_96;
x_80 = x_95;
x_81 = x_97;
goto block_83;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec_ref(x_97);
x_104 = lean_nat_mul(x_99, x_87);
x_105 = lean_nat_mod(x_85, x_104);
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
x_72 = x_86;
x_73 = x_85;
x_74 = x_89;
x_75 = x_88;
x_76 = x_91;
x_77 = x_92;
x_78 = x_93;
x_79 = x_96;
x_80 = x_95;
x_81 = x_108;
goto block_83;
}
}
block_154:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint32_t x_140; lean_object* x_141; uint32_t x_142; uint8_t x_143; 
x_130 = lean_nat_add(x_124, x_113);
lean_dec(x_124);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_119);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_nat_sub(x_126, x_115);
lean_dec(x_126);
x_133 = lean_nat_sub(x_132, x_127);
lean_dec(x_132);
x_134 = lean_unsigned_to_nat(256u);
x_135 = lean_nat_mul(x_133, x_134);
lean_dec(x_133);
x_136 = lean_uint8_to_nat(x_129);
x_137 = lean_nat_add(x_135, x_136);
lean_dec(x_135);
x_138 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_139 = lean_array_get_borrowed(x_138, x_116, x_137);
lean_dec(x_137);
x_140 = lean_unbox_uint32(x_139);
x_141 = lean_uint32_to_nat(x_140);
x_142 = lean_uint32_of_nat(x_141);
x_143 = lean_nat_dec_lt(x_120, x_127);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_127);
lean_dec(x_125);
lean_dec_ref(x_123);
lean_dec_ref(x_116);
lean_dec(x_112);
x_144 = lean_ctor_get(x_128, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_128, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_128, 2);
lean_inc_ref(x_146);
x_147 = lean_ctor_get(x_128, 3);
lean_inc(x_147);
x_148 = lean_ctor_get(x_128, 4);
lean_inc_ref(x_148);
x_84 = x_110;
x_85 = x_141;
x_86 = x_111;
x_87 = x_134;
x_88 = x_122;
x_89 = x_121;
x_90 = x_120;
x_91 = x_113;
x_92 = x_114;
x_93 = x_117;
x_94 = x_142;
x_95 = x_131;
x_96 = x_118;
x_97 = x_128;
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
lean_dec_ref(x_128);
x_149 = lean_box_uint32(x_142);
x_150 = lean_array_set(x_123, x_112, x_149);
x_151 = lean_nat_add(x_112, x_113);
lean_dec(x_112);
x_152 = lean_nat_mod(x_151, x_127);
lean_dec(x_151);
lean_inc_ref(x_116);
lean_inc(x_152);
lean_inc_ref(x_150);
lean_inc(x_125);
lean_inc(x_127);
x_153 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_153, 0, x_127);
lean_ctor_set(x_153, 1, x_125);
lean_ctor_set(x_153, 2, x_150);
lean_ctor_set(x_153, 3, x_152);
lean_ctor_set(x_153, 4, x_116);
x_84 = x_110;
x_85 = x_141;
x_86 = x_111;
x_87 = x_134;
x_88 = x_122;
x_89 = x_121;
x_90 = x_120;
x_91 = x_113;
x_92 = x_114;
x_93 = x_117;
x_94 = x_142;
x_95 = x_131;
x_96 = x_118;
x_97 = x_153;
x_98 = x_127;
x_99 = x_125;
x_100 = x_150;
x_101 = x_152;
x_102 = x_116;
goto block_109;
}
}
block_167:
{
lean_object* x_166; 
x_166 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_166, 0, x_164);
lean_ctor_set(x_166, 1, x_165);
x_20 = x_155;
x_21 = x_156;
x_22 = x_159;
x_23 = x_158;
x_24 = x_160;
x_25 = x_161;
x_26 = x_162;
x_27 = x_163;
x_28 = x_157;
x_29 = x_166;
goto block_70;
}
block_193:
{
uint8_t x_186; 
x_186 = lean_nat_dec_lt(x_173, x_182);
lean_dec(x_173);
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
x_158 = x_172;
x_159 = x_171;
x_160 = x_174;
x_161 = x_176;
x_162 = x_177;
x_163 = x_178;
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
x_189 = lean_nat_mod(x_170, x_188);
lean_dec(x_188);
x_190 = lean_box_uint32(x_175);
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
x_158 = x_172;
x_159 = x_171;
x_160 = x_174;
x_161 = x_176;
x_162 = x_177;
x_163 = x_178;
x_164 = x_179;
x_165 = x_192;
goto block_167;
}
}
block_206:
{
lean_object* x_205; 
x_205 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_205, 0, x_199);
lean_ctor_set(x_205, 1, x_204);
x_20 = x_194;
x_21 = x_195;
x_22 = x_198;
x_23 = x_197;
x_24 = x_200;
x_25 = x_201;
x_26 = x_202;
x_27 = x_203;
x_28 = x_196;
x_29 = x_205;
goto block_70;
}
block_232:
{
uint8_t x_225; 
x_225 = lean_nat_dec_lt(x_214, x_221);
lean_dec(x_214);
if (x_225 == 0)
{
lean_dec_ref(x_224);
lean_dec(x_223);
lean_dec_ref(x_222);
lean_dec(x_221);
lean_dec(x_220);
x_194 = x_207;
x_195 = x_209;
x_196 = x_210;
x_197 = x_213;
x_198 = x_212;
x_199 = x_211;
x_200 = x_215;
x_201 = x_216;
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
x_228 = lean_nat_mod(x_210, x_227);
lean_dec(x_227);
x_229 = lean_box_uint32(x_208);
x_230 = lean_array_set(x_224, x_228, x_229);
lean_dec(x_228);
x_231 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_231, 0, x_220);
lean_ctor_set(x_231, 1, x_221);
lean_ctor_set(x_231, 2, x_222);
lean_ctor_set(x_231, 3, x_223);
lean_ctor_set(x_231, 4, x_230);
x_194 = x_207;
x_195 = x_209;
x_196 = x_210;
x_197 = x_213;
x_198 = x_212;
x_199 = x_211;
x_200 = x_215;
x_201 = x_216;
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
lean_ctor_set(x_244, 0, x_238);
lean_ctor_set(x_244, 1, x_243);
x_20 = x_233;
x_21 = x_234;
x_22 = x_237;
x_23 = x_236;
x_24 = x_239;
x_25 = x_240;
x_26 = x_241;
x_27 = x_242;
x_28 = x_235;
x_29 = x_244;
goto block_70;
}
block_271:
{
uint8_t x_264; 
x_264 = lean_nat_dec_lt(x_252, x_260);
lean_dec(x_252);
if (x_264 == 0)
{
lean_dec_ref(x_263);
lean_dec(x_262);
lean_dec_ref(x_261);
lean_dec(x_260);
lean_dec(x_259);
x_233 = x_246;
x_234 = x_247;
x_235 = x_248;
x_236 = x_251;
x_237 = x_250;
x_238 = x_249;
x_239 = x_253;
x_240 = x_254;
x_241 = x_256;
x_242 = x_257;
x_243 = x_258;
goto block_245;
}
else
{
lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; lean_object* x_270; 
lean_dec_ref(x_258);
x_265 = lean_unsigned_to_nat(256u);
x_266 = lean_nat_mul(x_260, x_265);
x_267 = lean_nat_mod(x_248, x_266);
lean_dec(x_266);
x_268 = lean_box_uint32(x_255);
x_269 = lean_array_set(x_263, x_267, x_268);
lean_dec(x_267);
x_270 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_270, 0, x_259);
lean_ctor_set(x_270, 1, x_260);
lean_ctor_set(x_270, 2, x_261);
lean_ctor_set(x_270, 3, x_262);
lean_ctor_set(x_270, 4, x_269);
x_233 = x_246;
x_234 = x_247;
x_235 = x_248;
x_236 = x_251;
x_237 = x_250;
x_238 = x_249;
x_239 = x_253;
x_240 = x_254;
x_241 = x_256;
x_242 = x_257;
x_243 = x_270;
goto block_245;
}
}
block_291:
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_281 = lean_nat_add(x_279, x_274);
lean_dec(x_274);
lean_dec(x_279);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_276);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_box(x_280);
x_284 = lean_mk_array(x_277, x_283);
x_285 = lean_byte_array_mk(x_284);
x_286 = lean_unsigned_to_nat(0u);
x_287 = lean_byte_array_size(x_278);
x_288 = lean_byte_array_size(x_285);
x_289 = lean_byte_array_copy_slice(x_285, x_286, x_278, x_287, x_288, x_273);
lean_dec_ref(x_285);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_282);
lean_ctor_set(x_290, 1, x_272);
x_7 = x_275;
x_8 = x_289;
x_9 = x_290;
goto block_13;
}
block_587:
{
lean_object* x_304; uint8_t x_305; 
x_304 = lean_ctor_get(x_294, 1);
lean_inc_ref(x_304);
lean_dec_ref(x_294);
x_305 = !lean_is_exclusive(x_304);
if (x_305 == 0)
{
lean_object* x_306; lean_object* x_307; 
x_306 = lean_ctor_get(x_304, 0);
x_307 = lean_ctor_get(x_304, 1);
lean_dec(x_307);
if (lean_obj_tag(x_306) == 0)
{
lean_free_object(x_304);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_293;
goto block_13;
}
else
{
uint8_t x_308; 
x_308 = 0;
switch (lean_obj_tag(x_306)) {
case 0:
{
lean_free_object(x_304);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_293;
goto block_13;
}
case 1:
{
uint8_t x_309; 
lean_dec_ref(x_301);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_296);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_309 = !lean_is_exclusive(x_295);
if (x_309 == 0)
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; uint8_t x_314; 
x_310 = lean_ctor_get(x_295, 0);
x_311 = lean_ctor_get(x_295, 1);
x_312 = lean_nat_add(x_311, x_302);
x_313 = lean_byte_array_size(x_310);
x_314 = lean_nat_dec_le(x_312, x_313);
if (x_314 == 0)
{
lean_object* x_315; 
lean_dec(x_312);
lean_free_object(x_295);
lean_dec(x_311);
lean_dec_ref(x_310);
lean_free_object(x_304);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec_ref(x_297);
x_315 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_315;
}
else
{
lean_object* x_316; lean_object* x_317; 
x_316 = lean_byte_array_size(x_300);
x_317 = lean_byte_array_copy_slice(x_310, x_311, x_300, x_316, x_302, x_308);
lean_ctor_set(x_295, 1, x_312);
lean_ctor_set(x_304, 1, x_297);
lean_ctor_set(x_304, 0, x_295);
x_7 = x_303;
x_8 = x_317;
x_9 = x_304;
goto block_13;
}
}
else
{
lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; uint8_t x_322; 
x_318 = lean_ctor_get(x_295, 0);
x_319 = lean_ctor_get(x_295, 1);
lean_inc(x_319);
lean_inc(x_318);
lean_dec(x_295);
x_320 = lean_nat_add(x_319, x_302);
x_321 = lean_byte_array_size(x_318);
x_322 = lean_nat_dec_le(x_320, x_321);
if (x_322 == 0)
{
lean_object* x_323; 
lean_dec(x_320);
lean_dec(x_319);
lean_dec_ref(x_318);
lean_free_object(x_304);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec_ref(x_297);
x_323 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_323;
}
else
{
lean_object* x_324; lean_object* x_325; lean_object* x_326; 
x_324 = lean_byte_array_size(x_300);
x_325 = lean_byte_array_copy_slice(x_318, x_319, x_300, x_324, x_302, x_308);
x_326 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_326, 0, x_318);
lean_ctor_set(x_326, 1, x_320);
lean_ctor_set(x_304, 1, x_297);
lean_ctor_set(x_304, 0, x_326);
x_7 = x_303;
x_8 = x_325;
x_9 = x_304;
goto block_13;
}
}
}
case 2:
{
lean_object* x_327; lean_object* x_328; lean_object* x_329; uint8_t x_330; 
lean_free_object(x_304);
lean_dec_ref(x_301);
lean_dec(x_298);
lean_dec_ref(x_296);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_327 = lean_ctor_get(x_295, 0);
lean_inc_ref(x_327);
x_328 = lean_ctor_get(x_295, 1);
lean_inc(x_328);
lean_dec_ref(x_295);
x_329 = lean_byte_array_size(x_327);
x_330 = lean_nat_dec_lt(x_328, x_329);
if (x_330 == 0)
{
lean_object* x_331; 
lean_dec(x_328);
lean_dec_ref(x_327);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec_ref(x_297);
x_331 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_331;
}
else
{
if (x_330 == 0)
{
uint8_t x_332; lean_object* x_333; lean_object* x_334; uint8_t x_335; 
x_332 = l_instInhabitedUInt8;
x_333 = lean_box(x_332);
x_334 = l_outOfBounds___redArg(x_333);
x_335 = lean_unbox(x_334);
lean_dec(x_334);
x_272 = x_297;
x_273 = x_308;
x_274 = x_299;
x_275 = x_303;
x_276 = x_327;
x_277 = x_302;
x_278 = x_300;
x_279 = x_328;
x_280 = x_335;
goto block_291;
}
else
{
uint8_t x_336; 
x_336 = lean_byte_array_fget(x_327, x_328);
x_272 = x_297;
x_273 = x_308;
x_274 = x_299;
x_275 = x_303;
x_276 = x_327;
x_277 = x_302;
x_278 = x_300;
x_279 = x_328;
x_280 = x_336;
goto block_291;
}
}
}
default: 
{
uint8_t x_337; lean_object* x_338; lean_object* x_339; uint8_t x_340; 
lean_free_object(x_304);
lean_dec_ref(x_297);
lean_dec_ref(x_293);
x_337 = lean_ctor_get_uint8(x_306, 0);
lean_dec_ref(x_306);
x_338 = lean_uint8_to_nat(x_337);
x_339 = lean_unsigned_to_nat(0u);
x_340 = lean_nat_dec_eq(x_338, x_339);
if (x_340 == 0)
{
uint8_t x_341; 
x_341 = lean_nat_dec_eq(x_338, x_299);
if (x_341 == 0)
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; lean_object* x_345; lean_object* x_346; lean_object* x_347; lean_object* x_348; uint8_t x_349; 
x_342 = lean_ctor_get(x_301, 0);
lean_inc(x_342);
x_343 = lean_ctor_get(x_301, 1);
lean_inc(x_343);
x_344 = lean_ctor_get(x_301, 2);
lean_inc_ref(x_344);
x_345 = lean_ctor_get(x_301, 3);
lean_inc(x_345);
x_346 = lean_ctor_get(x_301, 4);
lean_inc_ref(x_346);
x_347 = lean_unsigned_to_nat(2u);
x_348 = lean_nat_add(x_347, x_342);
x_349 = lean_nat_dec_lt(x_338, x_348);
if (x_349 == 0)
{
lean_object* x_350; uint8_t x_351; 
x_350 = lean_nat_add(x_348, x_343);
lean_dec(x_348);
x_351 = lean_nat_dec_lt(x_338, x_350);
lean_dec(x_350);
if (x_351 == 0)
{
lean_object* x_352; lean_object* x_353; 
lean_dec_ref(x_346);
lean_dec(x_345);
lean_dec_ref(x_344);
lean_dec(x_343);
lean_dec(x_342);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_352 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_352, 0, x_338);
x_353 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_353, 0, x_352);
return x_353;
}
else
{
lean_object* x_354; lean_object* x_355; lean_object* x_356; uint8_t x_357; 
x_354 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_354);
x_355 = lean_ctor_get(x_296, 1);
lean_inc(x_355);
lean_dec_ref(x_296);
x_356 = lean_byte_array_size(x_354);
x_357 = lean_nat_dec_lt(x_355, x_356);
if (x_357 == 0)
{
lean_object* x_358; 
lean_dec(x_355);
lean_dec_ref(x_354);
lean_dec_ref(x_346);
lean_dec(x_345);
lean_dec_ref(x_344);
lean_dec(x_343);
lean_dec(x_342);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_358 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_358;
}
else
{
if (x_357 == 0)
{
uint8_t x_359; lean_object* x_360; lean_object* x_361; uint8_t x_362; 
x_359 = l_instInhabitedUInt8;
x_360 = lean_box(x_359);
x_361 = l_outOfBounds___redArg(x_360);
x_362 = lean_unbox(x_361);
lean_dec(x_361);
x_110 = x_292;
x_111 = x_295;
x_112 = x_345;
x_113 = x_299;
x_114 = x_303;
x_115 = x_347;
x_116 = x_346;
x_117 = x_302;
x_118 = x_300;
x_119 = x_354;
x_120 = x_339;
x_121 = x_298;
x_122 = x_308;
x_123 = x_344;
x_124 = x_355;
x_125 = x_343;
x_126 = x_338;
x_127 = x_342;
x_128 = x_301;
x_129 = x_362;
goto block_154;
}
else
{
uint8_t x_363; 
x_363 = lean_byte_array_fget(x_354, x_355);
x_110 = x_292;
x_111 = x_295;
x_112 = x_345;
x_113 = x_299;
x_114 = x_303;
x_115 = x_347;
x_116 = x_346;
x_117 = x_302;
x_118 = x_300;
x_119 = x_354;
x_120 = x_339;
x_121 = x_298;
x_122 = x_308;
x_123 = x_344;
x_124 = x_355;
x_125 = x_343;
x_126 = x_338;
x_127 = x_342;
x_128 = x_301;
x_129 = x_363;
goto block_154;
}
}
}
}
else
{
lean_object* x_364; lean_object* x_365; lean_object* x_366; lean_object* x_367; 
lean_dec(x_348);
x_364 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_364);
x_365 = lean_ctor_get(x_296, 1);
lean_inc(x_365);
lean_dec_ref(x_296);
x_366 = lean_unsigned_to_nat(5u);
x_367 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_364, x_365, x_339, x_366);
if (lean_obj_tag(x_367) == 0)
{
uint8_t x_368; 
lean_dec_ref(x_346);
lean_dec(x_345);
lean_dec_ref(x_344);
lean_dec(x_343);
lean_dec(x_342);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_368 = !lean_is_exclusive(x_367);
if (x_368 == 0)
{
return x_367;
}
else
{
lean_object* x_369; lean_object* x_370; 
x_369 = lean_ctor_get(x_367, 0);
lean_inc(x_369);
lean_dec(x_367);
x_370 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_370, 0, x_369);
return x_370;
}
}
else
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; uint32_t x_377; lean_object* x_378; lean_object* x_379; uint32_t x_380; uint8_t x_381; 
x_371 = lean_ctor_get(x_367, 0);
lean_inc(x_371);
lean_dec_ref(x_367);
x_372 = lean_ctor_get(x_371, 0);
lean_inc(x_372);
x_373 = lean_ctor_get(x_371, 1);
lean_inc(x_373);
lean_dec(x_371);
x_374 = lean_nat_sub(x_338, x_347);
x_375 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_376 = lean_array_get_borrowed(x_375, x_344, x_374);
lean_dec(x_374);
x_377 = lean_unbox_uint32(x_376);
x_378 = lean_uint32_to_nat(x_377);
x_379 = lean_nat_add(x_378, x_372);
lean_dec(x_372);
lean_dec(x_378);
x_380 = lean_uint32_of_nat(x_379);
x_381 = lean_nat_dec_lt(x_339, x_342);
if (x_381 == 0)
{
x_168 = x_292;
x_169 = x_295;
x_170 = x_379;
x_171 = x_308;
x_172 = x_298;
x_173 = x_339;
x_174 = x_299;
x_175 = x_380;
x_176 = x_303;
x_177 = x_302;
x_178 = x_300;
x_179 = x_373;
x_180 = x_301;
x_181 = x_342;
x_182 = x_343;
x_183 = x_344;
x_184 = x_345;
x_185 = x_346;
goto block_193;
}
else
{
uint8_t x_382; 
x_382 = !lean_is_exclusive(x_301);
if (x_382 == 0)
{
lean_object* x_383; lean_object* x_384; lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; lean_object* x_391; 
x_383 = lean_ctor_get(x_301, 4);
lean_dec(x_383);
x_384 = lean_ctor_get(x_301, 3);
lean_dec(x_384);
x_385 = lean_ctor_get(x_301, 2);
lean_dec(x_385);
x_386 = lean_ctor_get(x_301, 1);
lean_dec(x_386);
x_387 = lean_ctor_get(x_301, 0);
lean_dec(x_387);
x_388 = lean_box_uint32(x_380);
x_389 = lean_array_set(x_344, x_345, x_388);
x_390 = lean_nat_add(x_345, x_299);
lean_dec(x_345);
x_391 = lean_nat_mod(x_390, x_342);
lean_dec(x_390);
lean_inc_ref(x_346);
lean_inc(x_391);
lean_inc_ref(x_389);
lean_inc(x_343);
lean_inc(x_342);
lean_ctor_set(x_301, 3, x_391);
lean_ctor_set(x_301, 2, x_389);
x_168 = x_292;
x_169 = x_295;
x_170 = x_379;
x_171 = x_308;
x_172 = x_298;
x_173 = x_339;
x_174 = x_299;
x_175 = x_380;
x_176 = x_303;
x_177 = x_302;
x_178 = x_300;
x_179 = x_373;
x_180 = x_301;
x_181 = x_342;
x_182 = x_343;
x_183 = x_389;
x_184 = x_391;
x_185 = x_346;
goto block_193;
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; 
lean_dec(x_301);
x_392 = lean_box_uint32(x_380);
x_393 = lean_array_set(x_344, x_345, x_392);
x_394 = lean_nat_add(x_345, x_299);
lean_dec(x_345);
x_395 = lean_nat_mod(x_394, x_342);
lean_dec(x_394);
lean_inc_ref(x_346);
lean_inc(x_395);
lean_inc_ref(x_393);
lean_inc(x_343);
lean_inc(x_342);
x_396 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_396, 0, x_342);
lean_ctor_set(x_396, 1, x_343);
lean_ctor_set(x_396, 2, x_393);
lean_ctor_set(x_396, 3, x_395);
lean_ctor_set(x_396, 4, x_346);
x_168 = x_292;
x_169 = x_295;
x_170 = x_379;
x_171 = x_308;
x_172 = x_298;
x_173 = x_339;
x_174 = x_299;
x_175 = x_380;
x_176 = x_303;
x_177 = x_302;
x_178 = x_300;
x_179 = x_373;
x_180 = x_396;
x_181 = x_342;
x_182 = x_343;
x_183 = x_393;
x_184 = x_395;
x_185 = x_346;
goto block_193;
}
}
}
}
}
else
{
lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; 
x_397 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_397);
x_398 = lean_ctor_get(x_296, 1);
lean_inc(x_398);
lean_dec_ref(x_296);
x_399 = lean_unsigned_to_nat(5u);
x_400 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_397, x_398, x_339, x_399);
if (lean_obj_tag(x_400) == 0)
{
uint8_t x_401; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_401 = !lean_is_exclusive(x_400);
if (x_401 == 0)
{
return x_400;
}
else
{
lean_object* x_402; lean_object* x_403; 
x_402 = lean_ctor_get(x_400, 0);
lean_inc(x_402);
lean_dec(x_400);
x_403 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_403, 0, x_402);
return x_403;
}
}
else
{
lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; uint32_t x_415; uint8_t x_416; 
x_404 = lean_ctor_get(x_400, 0);
lean_inc(x_404);
lean_dec_ref(x_400);
x_405 = lean_ctor_get(x_404, 0);
lean_inc(x_405);
x_406 = lean_ctor_get(x_404, 1);
lean_inc(x_406);
lean_dec(x_404);
x_407 = lean_ctor_get(x_301, 0);
lean_inc(x_407);
x_408 = lean_ctor_get(x_301, 1);
lean_inc(x_408);
x_409 = lean_ctor_get(x_301, 2);
lean_inc_ref(x_409);
x_410 = lean_ctor_get(x_301, 3);
lean_inc(x_410);
x_411 = lean_ctor_get(x_301, 4);
lean_inc_ref(x_411);
x_412 = lean_byte_array_size(x_300);
x_413 = lean_nat_add(x_298, x_412);
x_414 = lean_nat_sub(x_413, x_405);
lean_dec(x_405);
lean_dec(x_413);
x_415 = lean_uint32_of_nat(x_414);
x_416 = lean_nat_dec_lt(x_339, x_407);
if (x_416 == 0)
{
x_207 = x_292;
x_208 = x_415;
x_209 = x_295;
x_210 = x_414;
x_211 = x_406;
x_212 = x_308;
x_213 = x_298;
x_214 = x_339;
x_215 = x_299;
x_216 = x_303;
x_217 = x_302;
x_218 = x_300;
x_219 = x_301;
x_220 = x_407;
x_221 = x_408;
x_222 = x_409;
x_223 = x_410;
x_224 = x_411;
goto block_232;
}
else
{
uint8_t x_417; 
x_417 = !lean_is_exclusive(x_301);
if (x_417 == 0)
{
lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; lean_object* x_426; 
x_418 = lean_ctor_get(x_301, 4);
lean_dec(x_418);
x_419 = lean_ctor_get(x_301, 3);
lean_dec(x_419);
x_420 = lean_ctor_get(x_301, 2);
lean_dec(x_420);
x_421 = lean_ctor_get(x_301, 1);
lean_dec(x_421);
x_422 = lean_ctor_get(x_301, 0);
lean_dec(x_422);
x_423 = lean_box_uint32(x_415);
x_424 = lean_array_set(x_409, x_410, x_423);
x_425 = lean_nat_add(x_410, x_299);
lean_dec(x_410);
x_426 = lean_nat_mod(x_425, x_407);
lean_dec(x_425);
lean_inc_ref(x_411);
lean_inc(x_426);
lean_inc_ref(x_424);
lean_inc(x_408);
lean_inc(x_407);
lean_ctor_set(x_301, 3, x_426);
lean_ctor_set(x_301, 2, x_424);
x_207 = x_292;
x_208 = x_415;
x_209 = x_295;
x_210 = x_414;
x_211 = x_406;
x_212 = x_308;
x_213 = x_298;
x_214 = x_339;
x_215 = x_299;
x_216 = x_303;
x_217 = x_302;
x_218 = x_300;
x_219 = x_301;
x_220 = x_407;
x_221 = x_408;
x_222 = x_424;
x_223 = x_426;
x_224 = x_411;
goto block_232;
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; 
lean_dec(x_301);
x_427 = lean_box_uint32(x_415);
x_428 = lean_array_set(x_409, x_410, x_427);
x_429 = lean_nat_add(x_410, x_299);
lean_dec(x_410);
x_430 = lean_nat_mod(x_429, x_407);
lean_dec(x_429);
lean_inc_ref(x_411);
lean_inc(x_430);
lean_inc_ref(x_428);
lean_inc(x_408);
lean_inc(x_407);
x_431 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_431, 0, x_407);
lean_ctor_set(x_431, 1, x_408);
lean_ctor_set(x_431, 2, x_428);
lean_ctor_set(x_431, 3, x_430);
lean_ctor_set(x_431, 4, x_411);
x_207 = x_292;
x_208 = x_415;
x_209 = x_295;
x_210 = x_414;
x_211 = x_406;
x_212 = x_308;
x_213 = x_298;
x_214 = x_339;
x_215 = x_299;
x_216 = x_303;
x_217 = x_302;
x_218 = x_300;
x_219 = x_431;
x_220 = x_407;
x_221 = x_408;
x_222 = x_428;
x_223 = x_430;
x_224 = x_411;
goto block_232;
}
}
}
}
}
else
{
lean_object* x_432; lean_object* x_433; lean_object* x_434; lean_object* x_435; 
x_432 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_432);
x_433 = lean_ctor_get(x_296, 1);
lean_inc(x_433);
lean_dec_ref(x_296);
x_434 = lean_unsigned_to_nat(5u);
x_435 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_432, x_433, x_339, x_434);
if (lean_obj_tag(x_435) == 0)
{
uint8_t x_436; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_436 = !lean_is_exclusive(x_435);
if (x_436 == 0)
{
return x_435;
}
else
{
lean_object* x_437; lean_object* x_438; 
x_437 = lean_ctor_get(x_435, 0);
lean_inc(x_437);
lean_dec(x_435);
x_438 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_438, 0, x_437);
return x_438;
}
}
else
{
lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; uint32_t x_447; uint8_t x_448; 
x_439 = lean_ctor_get(x_435, 0);
lean_inc(x_439);
lean_dec_ref(x_435);
x_440 = lean_ctor_get(x_439, 0);
lean_inc(x_440);
x_441 = lean_ctor_get(x_439, 1);
lean_inc(x_441);
lean_dec(x_439);
x_442 = lean_ctor_get(x_301, 0);
lean_inc(x_442);
x_443 = lean_ctor_get(x_301, 1);
lean_inc(x_443);
x_444 = lean_ctor_get(x_301, 2);
lean_inc_ref(x_444);
x_445 = lean_ctor_get(x_301, 3);
lean_inc(x_445);
x_446 = lean_ctor_get(x_301, 4);
lean_inc_ref(x_446);
x_447 = lean_uint32_of_nat(x_440);
x_448 = lean_nat_dec_lt(x_339, x_442);
if (x_448 == 0)
{
x_246 = x_292;
x_247 = x_295;
x_248 = x_440;
x_249 = x_441;
x_250 = x_308;
x_251 = x_298;
x_252 = x_339;
x_253 = x_299;
x_254 = x_303;
x_255 = x_447;
x_256 = x_302;
x_257 = x_300;
x_258 = x_301;
x_259 = x_442;
x_260 = x_443;
x_261 = x_444;
x_262 = x_445;
x_263 = x_446;
goto block_271;
}
else
{
uint8_t x_449; 
x_449 = !lean_is_exclusive(x_301);
if (x_449 == 0)
{
lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; 
x_450 = lean_ctor_get(x_301, 4);
lean_dec(x_450);
x_451 = lean_ctor_get(x_301, 3);
lean_dec(x_451);
x_452 = lean_ctor_get(x_301, 2);
lean_dec(x_452);
x_453 = lean_ctor_get(x_301, 1);
lean_dec(x_453);
x_454 = lean_ctor_get(x_301, 0);
lean_dec(x_454);
x_455 = lean_box_uint32(x_447);
x_456 = lean_array_set(x_444, x_445, x_455);
x_457 = lean_nat_add(x_445, x_299);
lean_dec(x_445);
x_458 = lean_nat_mod(x_457, x_442);
lean_dec(x_457);
lean_inc_ref(x_446);
lean_inc(x_458);
lean_inc_ref(x_456);
lean_inc(x_443);
lean_inc(x_442);
lean_ctor_set(x_301, 3, x_458);
lean_ctor_set(x_301, 2, x_456);
x_246 = x_292;
x_247 = x_295;
x_248 = x_440;
x_249 = x_441;
x_250 = x_308;
x_251 = x_298;
x_252 = x_339;
x_253 = x_299;
x_254 = x_303;
x_255 = x_447;
x_256 = x_302;
x_257 = x_300;
x_258 = x_301;
x_259 = x_442;
x_260 = x_443;
x_261 = x_456;
x_262 = x_458;
x_263 = x_446;
goto block_271;
}
else
{
lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; 
lean_dec(x_301);
x_459 = lean_box_uint32(x_447);
x_460 = lean_array_set(x_444, x_445, x_459);
x_461 = lean_nat_add(x_445, x_299);
lean_dec(x_445);
x_462 = lean_nat_mod(x_461, x_442);
lean_dec(x_461);
lean_inc_ref(x_446);
lean_inc(x_462);
lean_inc_ref(x_460);
lean_inc(x_443);
lean_inc(x_442);
x_463 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_463, 0, x_442);
lean_ctor_set(x_463, 1, x_443);
lean_ctor_set(x_463, 2, x_460);
lean_ctor_set(x_463, 3, x_462);
lean_ctor_set(x_463, 4, x_446);
x_246 = x_292;
x_247 = x_295;
x_248 = x_440;
x_249 = x_441;
x_250 = x_308;
x_251 = x_298;
x_252 = x_339;
x_253 = x_299;
x_254 = x_303;
x_255 = x_447;
x_256 = x_302;
x_257 = x_300;
x_258 = x_463;
x_259 = x_442;
x_260 = x_443;
x_261 = x_460;
x_262 = x_462;
x_263 = x_446;
goto block_271;
}
}
}
}
}
}
}
}
else
{
lean_object* x_464; 
x_464 = lean_ctor_get(x_304, 0);
lean_inc(x_464);
lean_dec(x_304);
if (lean_obj_tag(x_464) == 0)
{
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_293;
goto block_13;
}
else
{
uint8_t x_465; 
x_465 = 0;
switch (lean_obj_tag(x_464)) {
case 0:
{
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_293;
goto block_13;
}
case 1:
{
lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; uint8_t x_471; 
lean_dec_ref(x_301);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_296);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_466 = lean_ctor_get(x_295, 0);
lean_inc_ref(x_466);
x_467 = lean_ctor_get(x_295, 1);
lean_inc(x_467);
if (lean_is_exclusive(x_295)) {
 lean_ctor_release(x_295, 0);
 lean_ctor_release(x_295, 1);
 x_468 = x_295;
} else {
 lean_dec_ref(x_295);
 x_468 = lean_box(0);
}
x_469 = lean_nat_add(x_467, x_302);
x_470 = lean_byte_array_size(x_466);
x_471 = lean_nat_dec_le(x_469, x_470);
if (x_471 == 0)
{
lean_object* x_472; 
lean_dec(x_469);
lean_dec(x_468);
lean_dec(x_467);
lean_dec_ref(x_466);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec_ref(x_297);
x_472 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_472;
}
else
{
lean_object* x_473; lean_object* x_474; lean_object* x_475; lean_object* x_476; 
x_473 = lean_byte_array_size(x_300);
x_474 = lean_byte_array_copy_slice(x_466, x_467, x_300, x_473, x_302, x_465);
if (lean_is_scalar(x_468)) {
 x_475 = lean_alloc_ctor(0, 2, 0);
} else {
 x_475 = x_468;
}
lean_ctor_set(x_475, 0, x_466);
lean_ctor_set(x_475, 1, x_469);
x_476 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_476, 0, x_475);
lean_ctor_set(x_476, 1, x_297);
x_7 = x_303;
x_8 = x_474;
x_9 = x_476;
goto block_13;
}
}
case 2:
{
lean_object* x_477; lean_object* x_478; lean_object* x_479; uint8_t x_480; 
lean_dec_ref(x_301);
lean_dec(x_298);
lean_dec_ref(x_296);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_477 = lean_ctor_get(x_295, 0);
lean_inc_ref(x_477);
x_478 = lean_ctor_get(x_295, 1);
lean_inc(x_478);
lean_dec_ref(x_295);
x_479 = lean_byte_array_size(x_477);
x_480 = lean_nat_dec_lt(x_478, x_479);
if (x_480 == 0)
{
lean_object* x_481; 
lean_dec(x_478);
lean_dec_ref(x_477);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec_ref(x_297);
x_481 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_481;
}
else
{
if (x_480 == 0)
{
uint8_t x_482; lean_object* x_483; lean_object* x_484; uint8_t x_485; 
x_482 = l_instInhabitedUInt8;
x_483 = lean_box(x_482);
x_484 = l_outOfBounds___redArg(x_483);
x_485 = lean_unbox(x_484);
lean_dec(x_484);
x_272 = x_297;
x_273 = x_465;
x_274 = x_299;
x_275 = x_303;
x_276 = x_477;
x_277 = x_302;
x_278 = x_300;
x_279 = x_478;
x_280 = x_485;
goto block_291;
}
else
{
uint8_t x_486; 
x_486 = lean_byte_array_fget(x_477, x_478);
x_272 = x_297;
x_273 = x_465;
x_274 = x_299;
x_275 = x_303;
x_276 = x_477;
x_277 = x_302;
x_278 = x_300;
x_279 = x_478;
x_280 = x_486;
goto block_291;
}
}
}
default: 
{
uint8_t x_487; lean_object* x_488; lean_object* x_489; uint8_t x_490; 
lean_dec_ref(x_297);
lean_dec_ref(x_293);
x_487 = lean_ctor_get_uint8(x_464, 0);
lean_dec_ref(x_464);
x_488 = lean_uint8_to_nat(x_487);
x_489 = lean_unsigned_to_nat(0u);
x_490 = lean_nat_dec_eq(x_488, x_489);
if (x_490 == 0)
{
uint8_t x_491; 
x_491 = lean_nat_dec_eq(x_488, x_299);
if (x_491 == 0)
{
lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; uint8_t x_499; 
x_492 = lean_ctor_get(x_301, 0);
lean_inc(x_492);
x_493 = lean_ctor_get(x_301, 1);
lean_inc(x_493);
x_494 = lean_ctor_get(x_301, 2);
lean_inc_ref(x_494);
x_495 = lean_ctor_get(x_301, 3);
lean_inc(x_495);
x_496 = lean_ctor_get(x_301, 4);
lean_inc_ref(x_496);
x_497 = lean_unsigned_to_nat(2u);
x_498 = lean_nat_add(x_497, x_492);
x_499 = lean_nat_dec_lt(x_488, x_498);
if (x_499 == 0)
{
lean_object* x_500; uint8_t x_501; 
x_500 = lean_nat_add(x_498, x_493);
lean_dec(x_498);
x_501 = lean_nat_dec_lt(x_488, x_500);
lean_dec(x_500);
if (x_501 == 0)
{
lean_object* x_502; lean_object* x_503; 
lean_dec_ref(x_496);
lean_dec(x_495);
lean_dec_ref(x_494);
lean_dec(x_493);
lean_dec(x_492);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_502 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_502, 0, x_488);
x_503 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_503, 0, x_502);
return x_503;
}
else
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; uint8_t x_507; 
x_504 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_504);
x_505 = lean_ctor_get(x_296, 1);
lean_inc(x_505);
lean_dec_ref(x_296);
x_506 = lean_byte_array_size(x_504);
x_507 = lean_nat_dec_lt(x_505, x_506);
if (x_507 == 0)
{
lean_object* x_508; 
lean_dec(x_505);
lean_dec_ref(x_504);
lean_dec_ref(x_496);
lean_dec(x_495);
lean_dec_ref(x_494);
lean_dec(x_493);
lean_dec(x_492);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_508 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_508;
}
else
{
if (x_507 == 0)
{
uint8_t x_509; lean_object* x_510; lean_object* x_511; uint8_t x_512; 
x_509 = l_instInhabitedUInt8;
x_510 = lean_box(x_509);
x_511 = l_outOfBounds___redArg(x_510);
x_512 = lean_unbox(x_511);
lean_dec(x_511);
x_110 = x_292;
x_111 = x_295;
x_112 = x_495;
x_113 = x_299;
x_114 = x_303;
x_115 = x_497;
x_116 = x_496;
x_117 = x_302;
x_118 = x_300;
x_119 = x_504;
x_120 = x_489;
x_121 = x_298;
x_122 = x_465;
x_123 = x_494;
x_124 = x_505;
x_125 = x_493;
x_126 = x_488;
x_127 = x_492;
x_128 = x_301;
x_129 = x_512;
goto block_154;
}
else
{
uint8_t x_513; 
x_513 = lean_byte_array_fget(x_504, x_505);
x_110 = x_292;
x_111 = x_295;
x_112 = x_495;
x_113 = x_299;
x_114 = x_303;
x_115 = x_497;
x_116 = x_496;
x_117 = x_302;
x_118 = x_300;
x_119 = x_504;
x_120 = x_489;
x_121 = x_298;
x_122 = x_465;
x_123 = x_494;
x_124 = x_505;
x_125 = x_493;
x_126 = x_488;
x_127 = x_492;
x_128 = x_301;
x_129 = x_513;
goto block_154;
}
}
}
}
else
{
lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; 
lean_dec(x_498);
x_514 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_514);
x_515 = lean_ctor_get(x_296, 1);
lean_inc(x_515);
lean_dec_ref(x_296);
x_516 = lean_unsigned_to_nat(5u);
x_517 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_514, x_515, x_489, x_516);
if (lean_obj_tag(x_517) == 0)
{
lean_object* x_518; lean_object* x_519; lean_object* x_520; 
lean_dec_ref(x_496);
lean_dec(x_495);
lean_dec_ref(x_494);
lean_dec(x_493);
lean_dec(x_492);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_518 = lean_ctor_get(x_517, 0);
lean_inc(x_518);
if (lean_is_exclusive(x_517)) {
 lean_ctor_release(x_517, 0);
 x_519 = x_517;
} else {
 lean_dec_ref(x_517);
 x_519 = lean_box(0);
}
if (lean_is_scalar(x_519)) {
 x_520 = lean_alloc_ctor(0, 1, 0);
} else {
 x_520 = x_519;
}
lean_ctor_set(x_520, 0, x_518);
return x_520;
}
else
{
lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; uint32_t x_527; lean_object* x_528; lean_object* x_529; uint32_t x_530; uint8_t x_531; 
x_521 = lean_ctor_get(x_517, 0);
lean_inc(x_521);
lean_dec_ref(x_517);
x_522 = lean_ctor_get(x_521, 0);
lean_inc(x_522);
x_523 = lean_ctor_get(x_521, 1);
lean_inc(x_523);
lean_dec(x_521);
x_524 = lean_nat_sub(x_488, x_497);
x_525 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_526 = lean_array_get_borrowed(x_525, x_494, x_524);
lean_dec(x_524);
x_527 = lean_unbox_uint32(x_526);
x_528 = lean_uint32_to_nat(x_527);
x_529 = lean_nat_add(x_528, x_522);
lean_dec(x_522);
lean_dec(x_528);
x_530 = lean_uint32_of_nat(x_529);
x_531 = lean_nat_dec_lt(x_489, x_492);
if (x_531 == 0)
{
x_168 = x_292;
x_169 = x_295;
x_170 = x_529;
x_171 = x_465;
x_172 = x_298;
x_173 = x_489;
x_174 = x_299;
x_175 = x_530;
x_176 = x_303;
x_177 = x_302;
x_178 = x_300;
x_179 = x_523;
x_180 = x_301;
x_181 = x_492;
x_182 = x_493;
x_183 = x_494;
x_184 = x_495;
x_185 = x_496;
goto block_193;
}
else
{
lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; 
if (lean_is_exclusive(x_301)) {
 lean_ctor_release(x_301, 0);
 lean_ctor_release(x_301, 1);
 lean_ctor_release(x_301, 2);
 lean_ctor_release(x_301, 3);
 lean_ctor_release(x_301, 4);
 x_532 = x_301;
} else {
 lean_dec_ref(x_301);
 x_532 = lean_box(0);
}
x_533 = lean_box_uint32(x_530);
x_534 = lean_array_set(x_494, x_495, x_533);
x_535 = lean_nat_add(x_495, x_299);
lean_dec(x_495);
x_536 = lean_nat_mod(x_535, x_492);
lean_dec(x_535);
lean_inc_ref(x_496);
lean_inc(x_536);
lean_inc_ref(x_534);
lean_inc(x_493);
lean_inc(x_492);
if (lean_is_scalar(x_532)) {
 x_537 = lean_alloc_ctor(0, 5, 0);
} else {
 x_537 = x_532;
}
lean_ctor_set(x_537, 0, x_492);
lean_ctor_set(x_537, 1, x_493);
lean_ctor_set(x_537, 2, x_534);
lean_ctor_set(x_537, 3, x_536);
lean_ctor_set(x_537, 4, x_496);
x_168 = x_292;
x_169 = x_295;
x_170 = x_529;
x_171 = x_465;
x_172 = x_298;
x_173 = x_489;
x_174 = x_299;
x_175 = x_530;
x_176 = x_303;
x_177 = x_302;
x_178 = x_300;
x_179 = x_523;
x_180 = x_537;
x_181 = x_492;
x_182 = x_493;
x_183 = x_534;
x_184 = x_536;
x_185 = x_496;
goto block_193;
}
}
}
}
else
{
lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; 
x_538 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_538);
x_539 = lean_ctor_get(x_296, 1);
lean_inc(x_539);
lean_dec_ref(x_296);
x_540 = lean_unsigned_to_nat(5u);
x_541 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_538, x_539, x_489, x_540);
if (lean_obj_tag(x_541) == 0)
{
lean_object* x_542; lean_object* x_543; lean_object* x_544; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_542 = lean_ctor_get(x_541, 0);
lean_inc(x_542);
if (lean_is_exclusive(x_541)) {
 lean_ctor_release(x_541, 0);
 x_543 = x_541;
} else {
 lean_dec_ref(x_541);
 x_543 = lean_box(0);
}
if (lean_is_scalar(x_543)) {
 x_544 = lean_alloc_ctor(0, 1, 0);
} else {
 x_544 = x_543;
}
lean_ctor_set(x_544, 0, x_542);
return x_544;
}
else
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; uint32_t x_556; uint8_t x_557; 
x_545 = lean_ctor_get(x_541, 0);
lean_inc(x_545);
lean_dec_ref(x_541);
x_546 = lean_ctor_get(x_545, 0);
lean_inc(x_546);
x_547 = lean_ctor_get(x_545, 1);
lean_inc(x_547);
lean_dec(x_545);
x_548 = lean_ctor_get(x_301, 0);
lean_inc(x_548);
x_549 = lean_ctor_get(x_301, 1);
lean_inc(x_549);
x_550 = lean_ctor_get(x_301, 2);
lean_inc_ref(x_550);
x_551 = lean_ctor_get(x_301, 3);
lean_inc(x_551);
x_552 = lean_ctor_get(x_301, 4);
lean_inc_ref(x_552);
x_553 = lean_byte_array_size(x_300);
x_554 = lean_nat_add(x_298, x_553);
x_555 = lean_nat_sub(x_554, x_546);
lean_dec(x_546);
lean_dec(x_554);
x_556 = lean_uint32_of_nat(x_555);
x_557 = lean_nat_dec_lt(x_489, x_548);
if (x_557 == 0)
{
x_207 = x_292;
x_208 = x_556;
x_209 = x_295;
x_210 = x_555;
x_211 = x_547;
x_212 = x_465;
x_213 = x_298;
x_214 = x_489;
x_215 = x_299;
x_216 = x_303;
x_217 = x_302;
x_218 = x_300;
x_219 = x_301;
x_220 = x_548;
x_221 = x_549;
x_222 = x_550;
x_223 = x_551;
x_224 = x_552;
goto block_232;
}
else
{
lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; 
if (lean_is_exclusive(x_301)) {
 lean_ctor_release(x_301, 0);
 lean_ctor_release(x_301, 1);
 lean_ctor_release(x_301, 2);
 lean_ctor_release(x_301, 3);
 lean_ctor_release(x_301, 4);
 x_558 = x_301;
} else {
 lean_dec_ref(x_301);
 x_558 = lean_box(0);
}
x_559 = lean_box_uint32(x_556);
x_560 = lean_array_set(x_550, x_551, x_559);
x_561 = lean_nat_add(x_551, x_299);
lean_dec(x_551);
x_562 = lean_nat_mod(x_561, x_548);
lean_dec(x_561);
lean_inc_ref(x_552);
lean_inc(x_562);
lean_inc_ref(x_560);
lean_inc(x_549);
lean_inc(x_548);
if (lean_is_scalar(x_558)) {
 x_563 = lean_alloc_ctor(0, 5, 0);
} else {
 x_563 = x_558;
}
lean_ctor_set(x_563, 0, x_548);
lean_ctor_set(x_563, 1, x_549);
lean_ctor_set(x_563, 2, x_560);
lean_ctor_set(x_563, 3, x_562);
lean_ctor_set(x_563, 4, x_552);
x_207 = x_292;
x_208 = x_556;
x_209 = x_295;
x_210 = x_555;
x_211 = x_547;
x_212 = x_465;
x_213 = x_298;
x_214 = x_489;
x_215 = x_299;
x_216 = x_303;
x_217 = x_302;
x_218 = x_300;
x_219 = x_563;
x_220 = x_548;
x_221 = x_549;
x_222 = x_560;
x_223 = x_562;
x_224 = x_552;
goto block_232;
}
}
}
}
else
{
lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; 
x_564 = lean_ctor_get(x_296, 0);
lean_inc_ref(x_564);
x_565 = lean_ctor_get(x_296, 1);
lean_inc(x_565);
lean_dec_ref(x_296);
x_566 = lean_unsigned_to_nat(5u);
x_567 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_564, x_565, x_489, x_566);
if (lean_obj_tag(x_567) == 0)
{
lean_object* x_568; lean_object* x_569; lean_object* x_570; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_301);
lean_dec_ref(x_300);
lean_dec(x_299);
lean_dec(x_298);
lean_dec_ref(x_295);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_568 = lean_ctor_get(x_567, 0);
lean_inc(x_568);
if (lean_is_exclusive(x_567)) {
 lean_ctor_release(x_567, 0);
 x_569 = x_567;
} else {
 lean_dec_ref(x_567);
 x_569 = lean_box(0);
}
if (lean_is_scalar(x_569)) {
 x_570 = lean_alloc_ctor(0, 1, 0);
} else {
 x_570 = x_569;
}
lean_ctor_set(x_570, 0, x_568);
return x_570;
}
else
{
lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; uint32_t x_579; uint8_t x_580; 
x_571 = lean_ctor_get(x_567, 0);
lean_inc(x_571);
lean_dec_ref(x_567);
x_572 = lean_ctor_get(x_571, 0);
lean_inc(x_572);
x_573 = lean_ctor_get(x_571, 1);
lean_inc(x_573);
lean_dec(x_571);
x_574 = lean_ctor_get(x_301, 0);
lean_inc(x_574);
x_575 = lean_ctor_get(x_301, 1);
lean_inc(x_575);
x_576 = lean_ctor_get(x_301, 2);
lean_inc_ref(x_576);
x_577 = lean_ctor_get(x_301, 3);
lean_inc(x_577);
x_578 = lean_ctor_get(x_301, 4);
lean_inc_ref(x_578);
x_579 = lean_uint32_of_nat(x_572);
x_580 = lean_nat_dec_lt(x_489, x_574);
if (x_580 == 0)
{
x_246 = x_292;
x_247 = x_295;
x_248 = x_572;
x_249 = x_573;
x_250 = x_465;
x_251 = x_298;
x_252 = x_489;
x_253 = x_299;
x_254 = x_303;
x_255 = x_579;
x_256 = x_302;
x_257 = x_300;
x_258 = x_301;
x_259 = x_574;
x_260 = x_575;
x_261 = x_576;
x_262 = x_577;
x_263 = x_578;
goto block_271;
}
else
{
lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; 
if (lean_is_exclusive(x_301)) {
 lean_ctor_release(x_301, 0);
 lean_ctor_release(x_301, 1);
 lean_ctor_release(x_301, 2);
 lean_ctor_release(x_301, 3);
 lean_ctor_release(x_301, 4);
 x_581 = x_301;
} else {
 lean_dec_ref(x_301);
 x_581 = lean_box(0);
}
x_582 = lean_box_uint32(x_579);
x_583 = lean_array_set(x_576, x_577, x_582);
x_584 = lean_nat_add(x_577, x_299);
lean_dec(x_577);
x_585 = lean_nat_mod(x_584, x_574);
lean_dec(x_584);
lean_inc_ref(x_578);
lean_inc(x_585);
lean_inc_ref(x_583);
lean_inc(x_575);
lean_inc(x_574);
if (lean_is_scalar(x_581)) {
 x_586 = lean_alloc_ctor(0, 5, 0);
} else {
 x_586 = x_581;
}
lean_ctor_set(x_586, 0, x_574);
lean_ctor_set(x_586, 1, x_575);
lean_ctor_set(x_586, 2, x_583);
lean_ctor_set(x_586, 3, x_585);
lean_ctor_set(x_586, 4, x_578);
x_246 = x_292;
x_247 = x_295;
x_248 = x_572;
x_249 = x_573;
x_250 = x_465;
x_251 = x_298;
x_252 = x_489;
x_253 = x_299;
x_254 = x_303;
x_255 = x_579;
x_256 = x_302;
x_257 = x_300;
x_258 = x_586;
x_259 = x_574;
x_260 = x_575;
x_261 = x_583;
x_262 = x_585;
x_263 = x_578;
goto block_271;
}
}
}
}
}
}
}
}
block_612:
{
if (x_600 == 0)
{
x_292 = x_588;
x_293 = x_590;
x_294 = x_589;
x_295 = x_591;
x_296 = x_593;
x_297 = x_592;
x_298 = x_594;
x_299 = x_596;
x_300 = x_597;
x_301 = x_598;
x_302 = x_595;
x_303 = x_599;
goto block_587;
}
else
{
lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; 
lean_dec(x_595);
x_601 = lean_ctor_get(x_599, 0);
lean_inc_ref(x_601);
x_602 = lean_ctor_get(x_599, 1);
lean_inc(x_602);
lean_dec_ref(x_599);
x_603 = lean_unsigned_to_nat(0u);
x_604 = lean_unsigned_to_nat(5u);
x_605 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_601, x_602, x_603, x_604);
if (lean_obj_tag(x_605) == 0)
{
uint8_t x_606; 
lean_dec_ref(x_598);
lean_dec_ref(x_597);
lean_dec(x_596);
lean_dec(x_594);
lean_dec_ref(x_593);
lean_dec_ref(x_592);
lean_dec_ref(x_591);
lean_dec_ref(x_590);
lean_dec_ref(x_589);
lean_dec_ref(x_588);
lean_dec_ref(x_1);
x_606 = !lean_is_exclusive(x_605);
if (x_606 == 0)
{
return x_605;
}
else
{
lean_object* x_607; lean_object* x_608; 
x_607 = lean_ctor_get(x_605, 0);
lean_inc(x_607);
lean_dec(x_605);
x_608 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_608, 0, x_607);
return x_608;
}
}
else
{
lean_object* x_609; lean_object* x_610; lean_object* x_611; 
x_609 = lean_ctor_get(x_605, 0);
lean_inc(x_609);
lean_dec_ref(x_605);
x_610 = lean_ctor_get(x_609, 0);
lean_inc(x_610);
x_611 = lean_ctor_get(x_609, 1);
lean_inc(x_611);
lean_dec(x_609);
x_292 = x_588;
x_293 = x_590;
x_294 = x_589;
x_295 = x_591;
x_296 = x_593;
x_297 = x_592;
x_298 = x_594;
x_299 = x_596;
x_300 = x_597;
x_301 = x_598;
x_302 = x_610;
x_303 = x_611;
goto block_587;
}
}
}
block_629:
{
lean_object* x_625; lean_object* x_626; lean_object* x_627; uint8_t x_628; 
x_625 = lean_ctor_get(x_615, 0);
lean_inc(x_625);
x_626 = lean_ctor_get(x_615, 1);
lean_inc(x_626);
lean_dec_ref(x_615);
x_627 = lean_unsigned_to_nat(0u);
x_628 = lean_nat_dec_eq(x_626, x_627);
if (x_628 == 0)
{
lean_dec(x_625);
x_588 = x_613;
x_589 = x_614;
x_590 = x_620;
x_591 = x_621;
x_592 = x_622;
x_593 = x_623;
x_594 = x_616;
x_595 = x_626;
x_596 = x_617;
x_597 = x_619;
x_598 = x_624;
x_599 = x_618;
x_600 = x_628;
goto block_612;
}
else
{
if (lean_obj_tag(x_625) == 0)
{
if (x_628 == 0)
{
x_588 = x_613;
x_589 = x_614;
x_590 = x_620;
x_591 = x_621;
x_592 = x_622;
x_593 = x_623;
x_594 = x_616;
x_595 = x_626;
x_596 = x_617;
x_597 = x_619;
x_598 = x_624;
x_599 = x_618;
x_600 = x_628;
goto block_612;
}
else
{
lean_dec(x_626);
lean_dec_ref(x_624);
lean_dec_ref(x_623);
lean_dec_ref(x_622);
lean_dec_ref(x_621);
lean_dec(x_617);
lean_dec(x_616);
lean_dec_ref(x_614);
lean_dec_ref(x_613);
lean_dec_ref(x_1);
x_7 = x_618;
x_8 = x_619;
x_9 = x_620;
goto block_13;
}
}
else
{
lean_dec(x_625);
x_588 = x_613;
x_589 = x_614;
x_590 = x_620;
x_591 = x_621;
x_592 = x_622;
x_593 = x_623;
x_594 = x_616;
x_595 = x_626;
x_596 = x_617;
x_597 = x_619;
x_598 = x_624;
x_599 = x_618;
x_600 = x_628;
goto block_612;
}
}
}
block_642:
{
lean_object* x_641; 
x_641 = lean_ctor_get(x_631, 1);
lean_inc_ref(x_641);
x_613 = x_630;
x_614 = x_631;
x_615 = x_641;
x_616 = x_632;
x_617 = x_633;
x_618 = x_634;
x_619 = x_635;
x_620 = x_636;
x_621 = x_637;
x_622 = x_638;
x_623 = x_639;
x_624 = x_640;
goto block_629;
}
block_653:
{
lean_object* x_650; lean_object* x_651; lean_object* x_652; 
x_650 = lean_ctor_get(x_647, 0);
lean_inc(x_650);
x_651 = lean_ctor_get(x_647, 1);
lean_inc(x_651);
lean_inc_ref(x_647);
lean_inc_ref(x_4);
x_652 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_652, 0, x_4);
lean_ctor_set(x_652, 1, x_647);
x_630 = x_643;
x_631 = x_644;
x_632 = x_645;
x_633 = x_646;
x_634 = x_648;
x_635 = x_649;
x_636 = x_652;
x_637 = x_4;
x_638 = x_647;
x_639 = x_650;
x_640 = x_651;
goto block_642;
}
block_704:
{
lean_object* x_664; lean_object* x_665; uint8_t x_666; 
x_664 = lean_byte_array_size(x_2);
x_665 = lean_nat_add(x_657, x_664);
x_666 = lean_nat_dec_le(x_665, x_662);
if (x_666 == 0)
{
lean_object* x_667; uint8_t x_668; 
lean_dec(x_665);
x_667 = lean_nat_add(x_662, x_658);
x_668 = lean_nat_dec_le(x_667, x_657);
if (x_668 == 0)
{
uint8_t x_669; 
lean_dec(x_667);
x_669 = lean_nat_dec_le(x_657, x_662);
if (x_669 == 0)
{
lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; uint8_t x_678; 
x_670 = lean_nat_sub(x_657, x_662);
x_671 = lean_nat_sub(x_658, x_670);
lean_dec(x_670);
lean_dec(x_658);
x_672 = l_ByteArray_extract(x_1, x_662, x_657);
x_673 = lean_unsigned_to_nat(0u);
x_674 = lean_byte_array_size(x_672);
x_675 = lean_byte_array_copy_slice(x_672, x_673, x_2, x_664, x_674, x_660);
lean_dec_ref(x_672);
x_676 = lean_byte_array_size(x_675);
x_677 = lean_nat_sub(x_676, x_657);
x_678 = lean_nat_dec_le(x_671, x_677);
lean_dec(x_677);
if (x_678 == 0)
{
lean_object* x_679; lean_object* x_680; lean_object* x_681; 
x_679 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
lean_inc(x_659);
x_680 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_680, 0, x_673);
lean_ctor_set(x_680, 1, x_671);
lean_ctor_set(x_680, 2, x_659);
x_681 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_679, x_680, x_655, x_675, x_673);
x_643 = x_654;
x_644 = x_656;
x_645 = x_657;
x_646 = x_659;
x_647 = x_663;
x_648 = x_661;
x_649 = x_681;
goto block_653;
}
else
{
lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; 
lean_dec_ref(x_655);
x_682 = lean_nat_add(x_657, x_671);
lean_dec(x_671);
lean_inc(x_657);
x_683 = l_ByteArray_extract(x_675, x_657, x_682);
lean_dec(x_682);
x_684 = lean_byte_array_size(x_683);
x_685 = lean_byte_array_copy_slice(x_683, x_673, x_675, x_676, x_684, x_660);
lean_dec_ref(x_683);
x_643 = x_654;
x_644 = x_656;
x_645 = x_657;
x_646 = x_659;
x_647 = x_663;
x_648 = x_661;
x_649 = x_685;
goto block_653;
}
}
else
{
lean_object* x_686; lean_object* x_687; uint8_t x_688; 
lean_dec_ref(x_655);
x_686 = lean_nat_sub(x_662, x_657);
lean_dec(x_662);
x_687 = lean_nat_add(x_686, x_658);
x_688 = lean_nat_dec_le(x_687, x_664);
if (x_688 == 0)
{
lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; 
lean_dec(x_687);
x_689 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed), 4, 1);
lean_closure_set(x_689, 0, x_686);
x_690 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_691 = lean_unsigned_to_nat(0u);
lean_inc(x_659);
x_692 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_692, 0, x_691);
lean_ctor_set(x_692, 1, x_658);
lean_ctor_set(x_692, 2, x_659);
x_693 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_690, x_692, x_689, x_2, x_691);
x_643 = x_654;
x_644 = x_656;
x_645 = x_657;
x_646 = x_659;
x_647 = x_663;
x_648 = x_661;
x_649 = x_693;
goto block_653;
}
else
{
lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; 
lean_dec(x_658);
x_694 = l_ByteArray_extract(x_2, x_686, x_687);
lean_dec(x_687);
x_695 = lean_unsigned_to_nat(0u);
x_696 = lean_byte_array_size(x_694);
x_697 = lean_byte_array_copy_slice(x_694, x_695, x_2, x_664, x_696, x_660);
lean_dec_ref(x_694);
x_643 = x_654;
x_644 = x_656;
x_645 = x_657;
x_646 = x_659;
x_647 = x_663;
x_648 = x_661;
x_649 = x_697;
goto block_653;
}
}
}
else
{
lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; 
lean_dec(x_658);
lean_dec_ref(x_655);
x_698 = l_ByteArray_extract(x_1, x_662, x_667);
lean_dec(x_667);
x_699 = lean_unsigned_to_nat(0u);
x_700 = lean_byte_array_size(x_698);
x_701 = lean_byte_array_copy_slice(x_698, x_699, x_2, x_664, x_700, x_660);
lean_dec_ref(x_698);
x_643 = x_654;
x_644 = x_656;
x_645 = x_657;
x_646 = x_659;
x_647 = x_663;
x_648 = x_661;
x_649 = x_701;
goto block_653;
}
}
else
{
lean_object* x_702; lean_object* x_703; 
lean_dec_ref(x_663);
lean_dec_ref(x_661);
lean_dec(x_659);
lean_dec(x_657);
lean_dec_ref(x_656);
lean_dec_ref(x_655);
lean_dec_ref(x_654);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_702 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_702, 0, x_662);
lean_ctor_set(x_702, 1, x_658);
lean_ctor_set(x_702, 2, x_665);
x_703 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_703, 0, x_702);
return x_703;
}
}
block_717:
{
lean_object* x_716; 
x_716 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_716, 0, x_710);
lean_ctor_set(x_716, 1, x_715);
x_654 = x_705;
x_655 = x_706;
x_656 = x_707;
x_657 = x_709;
x_658 = x_712;
x_659 = x_711;
x_660 = x_713;
x_661 = x_714;
x_662 = x_708;
x_663 = x_716;
goto block_704;
}
block_743:
{
uint8_t x_736; 
x_736 = lean_nat_dec_lt(x_723, x_732);
lean_dec(x_723);
if (x_736 == 0)
{
lean_dec_ref(x_735);
lean_dec(x_734);
lean_dec_ref(x_733);
lean_dec(x_732);
lean_dec(x_731);
x_705 = x_718;
x_706 = x_719;
x_707 = x_720;
x_708 = x_721;
x_709 = x_722;
x_710 = x_724;
x_711 = x_726;
x_712 = x_725;
x_713 = x_727;
x_714 = x_729;
x_715 = x_730;
goto block_717;
}
else
{
lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; 
lean_dec_ref(x_730);
x_737 = lean_unsigned_to_nat(256u);
x_738 = lean_nat_mul(x_732, x_737);
x_739 = lean_nat_mod(x_721, x_738);
lean_dec(x_738);
x_740 = lean_box_uint32(x_728);
x_741 = lean_array_set(x_735, x_739, x_740);
lean_dec(x_739);
x_742 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_742, 0, x_731);
lean_ctor_set(x_742, 1, x_732);
lean_ctor_set(x_742, 2, x_733);
lean_ctor_set(x_742, 3, x_734);
lean_ctor_set(x_742, 4, x_741);
x_705 = x_718;
x_706 = x_719;
x_707 = x_720;
x_708 = x_721;
x_709 = x_722;
x_710 = x_724;
x_711 = x_726;
x_712 = x_725;
x_713 = x_727;
x_714 = x_729;
x_715 = x_742;
goto block_717;
}
}
block_756:
{
lean_object* x_755; 
x_755 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_755, 0, x_753);
lean_ctor_set(x_755, 1, x_754);
x_654 = x_744;
x_655 = x_745;
x_656 = x_746;
x_657 = x_747;
x_658 = x_750;
x_659 = x_749;
x_660 = x_751;
x_661 = x_752;
x_662 = x_748;
x_663 = x_755;
goto block_704;
}
block_782:
{
uint8_t x_775; 
x_775 = lean_nat_dec_lt(x_763, x_771);
lean_dec(x_763);
if (x_775 == 0)
{
lean_dec_ref(x_774);
lean_dec(x_773);
lean_dec_ref(x_772);
lean_dec(x_771);
lean_dec(x_770);
x_744 = x_757;
x_745 = x_758;
x_746 = x_759;
x_747 = x_760;
x_748 = x_762;
x_749 = x_765;
x_750 = x_764;
x_751 = x_766;
x_752 = x_768;
x_753 = x_767;
x_754 = x_769;
goto block_756;
}
else
{
lean_object* x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; 
lean_dec_ref(x_769);
x_776 = lean_unsigned_to_nat(256u);
x_777 = lean_nat_mul(x_771, x_776);
x_778 = lean_nat_mod(x_762, x_777);
lean_dec(x_777);
x_779 = lean_box_uint32(x_761);
x_780 = lean_array_set(x_774, x_778, x_779);
lean_dec(x_778);
x_781 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_781, 0, x_770);
lean_ctor_set(x_781, 1, x_771);
lean_ctor_set(x_781, 2, x_772);
lean_ctor_set(x_781, 3, x_773);
lean_ctor_set(x_781, 4, x_780);
x_744 = x_757;
x_745 = x_758;
x_746 = x_759;
x_747 = x_760;
x_748 = x_762;
x_749 = x_765;
x_750 = x_764;
x_751 = x_766;
x_752 = x_768;
x_753 = x_767;
x_754 = x_781;
goto block_756;
}
}
block_795:
{
lean_object* x_794; 
x_794 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_794, 0, x_791);
lean_ctor_set(x_794, 1, x_793);
x_654 = x_783;
x_655 = x_784;
x_656 = x_785;
x_657 = x_786;
x_658 = x_788;
x_659 = x_787;
x_660 = x_789;
x_661 = x_792;
x_662 = x_790;
x_663 = x_794;
goto block_704;
}
block_821:
{
uint8_t x_814; 
x_814 = lean_nat_dec_lt(x_801, x_810);
lean_dec(x_801);
if (x_814 == 0)
{
lean_dec_ref(x_813);
lean_dec(x_812);
lean_dec_ref(x_811);
lean_dec(x_810);
lean_dec(x_809);
x_783 = x_796;
x_784 = x_797;
x_785 = x_799;
x_786 = x_800;
x_787 = x_803;
x_788 = x_802;
x_789 = x_804;
x_790 = x_805;
x_791 = x_798;
x_792 = x_807;
x_793 = x_808;
goto block_795;
}
else
{
lean_object* x_815; lean_object* x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; 
lean_dec_ref(x_808);
x_815 = lean_unsigned_to_nat(256u);
x_816 = lean_nat_mul(x_810, x_815);
x_817 = lean_nat_mod(x_805, x_816);
lean_dec(x_816);
x_818 = lean_box_uint32(x_806);
x_819 = lean_array_set(x_813, x_817, x_818);
lean_dec(x_817);
x_820 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_820, 0, x_809);
lean_ctor_set(x_820, 1, x_810);
lean_ctor_set(x_820, 2, x_811);
lean_ctor_set(x_820, 3, x_812);
lean_ctor_set(x_820, 4, x_819);
x_783 = x_796;
x_784 = x_797;
x_785 = x_799;
x_786 = x_800;
x_787 = x_803;
x_788 = x_802;
x_789 = x_804;
x_790 = x_805;
x_791 = x_798;
x_792 = x_807;
x_793 = x_820;
goto block_795;
}
}
block_834:
{
lean_object* x_833; 
x_833 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_833, 0, x_830);
lean_ctor_set(x_833, 1, x_832);
x_654 = x_822;
x_655 = x_823;
x_656 = x_824;
x_657 = x_825;
x_658 = x_828;
x_659 = x_827;
x_660 = x_829;
x_661 = x_831;
x_662 = x_826;
x_663 = x_833;
goto block_704;
}
block_860:
{
uint8_t x_854; 
x_854 = lean_nat_dec_lt(x_840, x_850);
lean_dec(x_840);
if (x_854 == 0)
{
lean_dec_ref(x_853);
lean_dec(x_852);
lean_dec_ref(x_851);
lean_dec(x_850);
lean_dec(x_849);
x_822 = x_835;
x_823 = x_836;
x_824 = x_837;
x_825 = x_838;
x_826 = x_839;
x_827 = x_843;
x_828 = x_842;
x_829 = x_844;
x_830 = x_846;
x_831 = x_847;
x_832 = x_848;
goto block_834;
}
else
{
lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; 
lean_dec_ref(x_848);
x_855 = lean_nat_mul(x_850, x_845);
x_856 = lean_nat_mod(x_839, x_855);
lean_dec(x_855);
x_857 = lean_box_uint32(x_841);
x_858 = lean_array_set(x_853, x_856, x_857);
lean_dec(x_856);
x_859 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_859, 0, x_849);
lean_ctor_set(x_859, 1, x_850);
lean_ctor_set(x_859, 2, x_851);
lean_ctor_set(x_859, 3, x_852);
lean_ctor_set(x_859, 4, x_858);
x_822 = x_835;
x_823 = x_836;
x_824 = x_837;
x_825 = x_838;
x_826 = x_839;
x_827 = x_843;
x_828 = x_842;
x_829 = x_844;
x_830 = x_846;
x_831 = x_847;
x_832 = x_859;
goto block_834;
}
}
block_904:
{
lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; uint32_t x_895; lean_object* x_896; uint32_t x_897; uint8_t x_898; 
x_885 = lean_nat_add(x_876, x_871);
lean_dec(x_876);
x_886 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_886, 0, x_869);
lean_ctor_set(x_886, 1, x_885);
x_887 = lean_nat_sub(x_878, x_870);
lean_dec(x_878);
x_888 = lean_nat_sub(x_887, x_883);
lean_dec(x_887);
x_889 = lean_unsigned_to_nat(256u);
x_890 = lean_nat_mul(x_888, x_889);
lean_dec(x_888);
x_891 = lean_uint8_to_nat(x_884);
x_892 = lean_nat_add(x_890, x_891);
lean_dec(x_890);
x_893 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_894 = lean_array_get_borrowed(x_893, x_881, x_892);
lean_dec(x_892);
x_895 = lean_unbox_uint32(x_894);
x_896 = lean_uint32_to_nat(x_895);
x_897 = lean_uint32_of_nat(x_896);
x_898 = lean_nat_dec_lt(x_877, x_883);
if (x_898 == 0)
{
lean_dec(x_883);
lean_dec_ref(x_882);
lean_dec_ref(x_881);
lean_dec(x_879);
lean_dec(x_874);
x_835 = x_862;
x_836 = x_863;
x_837 = x_868;
x_838 = x_875;
x_839 = x_896;
x_840 = x_877;
x_841 = x_897;
x_842 = x_880;
x_843 = x_871;
x_844 = x_872;
x_845 = x_889;
x_846 = x_886;
x_847 = x_873;
x_848 = x_6;
x_849 = x_867;
x_850 = x_861;
x_851 = x_866;
x_852 = x_864;
x_853 = x_865;
goto block_860;
}
else
{
lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; 
lean_dec(x_867);
lean_dec_ref(x_866);
lean_dec_ref(x_865);
lean_dec(x_864);
lean_dec(x_861);
lean_dec_ref(x_6);
x_899 = lean_box_uint32(x_897);
x_900 = lean_array_set(x_882, x_879, x_899);
x_901 = lean_nat_add(x_879, x_871);
lean_dec(x_879);
x_902 = lean_nat_mod(x_901, x_883);
lean_dec(x_901);
lean_inc_ref(x_881);
lean_inc(x_902);
lean_inc_ref(x_900);
lean_inc(x_874);
lean_inc(x_883);
x_903 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_903, 0, x_883);
lean_ctor_set(x_903, 1, x_874);
lean_ctor_set(x_903, 2, x_900);
lean_ctor_set(x_903, 3, x_902);
lean_ctor_set(x_903, 4, x_881);
x_835 = x_862;
x_836 = x_863;
x_837 = x_868;
x_838 = x_875;
x_839 = x_896;
x_840 = x_877;
x_841 = x_897;
x_842 = x_880;
x_843 = x_871;
x_844 = x_872;
x_845 = x_889;
x_846 = x_886;
x_847 = x_873;
x_848 = x_903;
x_849 = x_883;
x_850 = x_874;
x_851 = x_900;
x_852 = x_902;
x_853 = x_881;
goto block_860;
}
}
block_926:
{
lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; 
x_915 = lean_nat_add(x_908, x_910);
lean_dec(x_908);
x_916 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_916, 0, x_912);
lean_ctor_set(x_916, 1, x_915);
x_917 = lean_box(x_914);
x_918 = lean_mk_array(x_909, x_917);
x_919 = lean_byte_array_mk(x_918);
x_920 = lean_unsigned_to_nat(0u);
x_921 = lean_byte_array_size(x_2);
x_922 = lean_byte_array_size(x_919);
x_923 = lean_byte_array_copy_slice(x_919, x_920, x_2, x_921, x_922, x_911);
lean_dec_ref(x_919);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_924 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_924, 0, x_5);
lean_ctor_set(x_924, 1, x_6);
lean_inc_ref(x_924);
lean_inc_ref(x_916);
x_925 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_925, 0, x_916);
lean_ctor_set(x_925, 1, x_924);
x_630 = x_905;
x_631 = x_906;
x_632 = x_907;
x_633 = x_910;
x_634 = x_913;
x_635 = x_923;
x_636 = x_925;
x_637 = x_916;
x_638 = x_924;
x_639 = x_5;
x_640 = x_6;
goto block_642;
}
block_1229:
{
lean_object* x_931; uint8_t x_932; 
x_931 = lean_ctor_get(x_927, 0);
lean_inc_ref(x_931);
x_932 = !lean_is_exclusive(x_931);
if (x_932 == 0)
{
lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; 
x_933 = lean_ctor_get(x_927, 1);
x_934 = lean_ctor_get(x_931, 0);
x_935 = lean_ctor_get(x_931, 1);
lean_dec(x_935);
x_936 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_937 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_937, 0, x_936);
lean_closure_set(x_937, 1, x_1);
if (lean_obj_tag(x_934) == 0)
{
lean_object* x_938; 
lean_inc_ref(x_933);
lean_dec(x_929);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_931, 1, x_6);
lean_ctor_set(x_931, 0, x_5);
lean_inc_ref(x_931);
lean_inc_ref(x_4);
x_938 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_938, 0, x_4);
lean_ctor_set(x_938, 1, x_931);
x_613 = x_937;
x_614 = x_927;
x_615 = x_933;
x_616 = x_936;
x_617 = x_928;
x_618 = x_930;
x_619 = x_2;
x_620 = x_938;
x_621 = x_4;
x_622 = x_931;
x_623 = x_5;
x_624 = x_6;
goto block_629;
}
else
{
uint8_t x_939; 
x_939 = 0;
switch (lean_obj_tag(x_934)) {
case 0:
{
lean_object* x_940; 
lean_inc_ref(x_933);
lean_dec(x_929);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_931, 1, x_6);
lean_ctor_set(x_931, 0, x_5);
lean_inc_ref(x_931);
lean_inc_ref(x_4);
x_940 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_940, 0, x_4);
lean_ctor_set(x_940, 1, x_931);
x_613 = x_937;
x_614 = x_927;
x_615 = x_933;
x_616 = x_936;
x_617 = x_928;
x_618 = x_930;
x_619 = x_2;
x_620 = x_940;
x_621 = x_4;
x_622 = x_931;
x_623 = x_5;
x_624 = x_6;
goto block_629;
}
case 1:
{
uint8_t x_941; 
lean_inc_ref(x_933);
x_941 = !lean_is_exclusive(x_4);
if (x_941 == 0)
{
lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; uint8_t x_946; 
x_942 = lean_ctor_get(x_4, 0);
x_943 = lean_ctor_get(x_4, 1);
x_944 = lean_nat_add(x_943, x_929);
x_945 = lean_byte_array_size(x_942);
x_946 = lean_nat_dec_le(x_944, x_945);
if (x_946 == 0)
{
lean_object* x_947; 
lean_dec(x_944);
lean_free_object(x_4);
lean_dec(x_943);
lean_dec_ref(x_942);
lean_dec_ref(x_937);
lean_free_object(x_931);
lean_dec_ref(x_933);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_947 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_947;
}
else
{
lean_object* x_948; lean_object* x_949; lean_object* x_950; 
x_948 = lean_byte_array_size(x_2);
x_949 = lean_byte_array_copy_slice(x_942, x_943, x_2, x_948, x_929, x_939);
lean_ctor_set(x_4, 1, x_944);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_931, 1, x_6);
lean_ctor_set(x_931, 0, x_5);
lean_inc_ref(x_931);
lean_inc_ref(x_4);
x_950 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_950, 0, x_4);
lean_ctor_set(x_950, 1, x_931);
x_613 = x_937;
x_614 = x_927;
x_615 = x_933;
x_616 = x_936;
x_617 = x_928;
x_618 = x_930;
x_619 = x_949;
x_620 = x_950;
x_621 = x_4;
x_622 = x_931;
x_623 = x_5;
x_624 = x_6;
goto block_629;
}
}
else
{
lean_object* x_951; lean_object* x_952; lean_object* x_953; lean_object* x_954; uint8_t x_955; 
x_951 = lean_ctor_get(x_4, 0);
x_952 = lean_ctor_get(x_4, 1);
lean_inc(x_952);
lean_inc(x_951);
lean_dec(x_4);
x_953 = lean_nat_add(x_952, x_929);
x_954 = lean_byte_array_size(x_951);
x_955 = lean_nat_dec_le(x_953, x_954);
if (x_955 == 0)
{
lean_object* x_956; 
lean_dec(x_953);
lean_dec(x_952);
lean_dec_ref(x_951);
lean_dec_ref(x_937);
lean_free_object(x_931);
lean_dec_ref(x_933);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_956 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_956;
}
else
{
lean_object* x_957; lean_object* x_958; lean_object* x_959; lean_object* x_960; 
x_957 = lean_byte_array_size(x_2);
x_958 = lean_byte_array_copy_slice(x_951, x_952, x_2, x_957, x_929, x_939);
x_959 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_959, 0, x_951);
lean_ctor_set(x_959, 1, x_953);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_931, 1, x_6);
lean_ctor_set(x_931, 0, x_5);
lean_inc_ref(x_931);
lean_inc_ref(x_959);
x_960 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_960, 0, x_959);
lean_ctor_set(x_960, 1, x_931);
x_613 = x_937;
x_614 = x_927;
x_615 = x_933;
x_616 = x_936;
x_617 = x_928;
x_618 = x_930;
x_619 = x_958;
x_620 = x_960;
x_621 = x_959;
x_622 = x_931;
x_623 = x_5;
x_624 = x_6;
goto block_629;
}
}
}
case 2:
{
lean_object* x_961; lean_object* x_962; lean_object* x_963; uint8_t x_964; 
lean_free_object(x_931);
x_961 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_961);
x_962 = lean_ctor_get(x_4, 1);
lean_inc(x_962);
lean_dec_ref(x_4);
x_963 = lean_byte_array_size(x_961);
x_964 = lean_nat_dec_lt(x_962, x_963);
if (x_964 == 0)
{
lean_object* x_965; 
lean_dec(x_962);
lean_dec_ref(x_961);
lean_dec_ref(x_937);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_965 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_965;
}
else
{
if (x_964 == 0)
{
uint8_t x_966; lean_object* x_967; lean_object* x_968; uint8_t x_969; 
x_966 = l_instInhabitedUInt8;
x_967 = lean_box(x_966);
x_968 = l_outOfBounds___redArg(x_967);
x_969 = lean_unbox(x_968);
lean_dec(x_968);
x_905 = x_937;
x_906 = x_927;
x_907 = x_936;
x_908 = x_962;
x_909 = x_929;
x_910 = x_928;
x_911 = x_939;
x_912 = x_961;
x_913 = x_930;
x_914 = x_969;
goto block_926;
}
else
{
uint8_t x_970; 
x_970 = lean_byte_array_fget(x_961, x_962);
x_905 = x_937;
x_906 = x_927;
x_907 = x_936;
x_908 = x_962;
x_909 = x_929;
x_910 = x_928;
x_911 = x_939;
x_912 = x_961;
x_913 = x_930;
x_914 = x_970;
goto block_926;
}
}
}
default: 
{
uint8_t x_971; lean_object* x_972; lean_object* x_973; uint8_t x_974; 
lean_free_object(x_931);
x_971 = lean_ctor_get_uint8(x_934, 0);
lean_dec_ref(x_934);
x_972 = lean_uint8_to_nat(x_971);
x_973 = lean_unsigned_to_nat(0u);
x_974 = lean_nat_dec_eq(x_972, x_973);
if (x_974 == 0)
{
uint8_t x_975; 
x_975 = lean_nat_dec_eq(x_972, x_928);
if (x_975 == 0)
{
lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; lean_object* x_982; uint8_t x_983; 
x_976 = lean_ctor_get(x_6, 0);
x_977 = lean_ctor_get(x_6, 1);
x_978 = lean_ctor_get(x_6, 2);
x_979 = lean_ctor_get(x_6, 3);
x_980 = lean_ctor_get(x_6, 4);
x_981 = lean_unsigned_to_nat(2u);
x_982 = lean_nat_add(x_981, x_976);
x_983 = lean_nat_dec_lt(x_972, x_982);
if (x_983 == 0)
{
lean_object* x_984; uint8_t x_985; 
x_984 = lean_nat_add(x_982, x_977);
lean_dec(x_982);
x_985 = lean_nat_dec_lt(x_972, x_984);
lean_dec(x_984);
if (x_985 == 0)
{
lean_object* x_986; lean_object* x_987; 
lean_dec_ref(x_937);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_986 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_986, 0, x_972);
x_987 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_987, 0, x_986);
return x_987;
}
else
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
lean_dec_ref(x_937);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
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
lean_inc_n(x_976, 2);
lean_inc_ref_n(x_978, 2);
lean_inc_ref_n(x_980, 2);
lean_inc_n(x_979, 2);
lean_inc_ref(x_937);
lean_inc_n(x_977, 2);
x_861 = x_977;
x_862 = x_937;
x_863 = x_937;
x_864 = x_979;
x_865 = x_980;
x_866 = x_978;
x_867 = x_976;
x_868 = x_927;
x_869 = x_988;
x_870 = x_981;
x_871 = x_928;
x_872 = x_939;
x_873 = x_930;
x_874 = x_977;
x_875 = x_936;
x_876 = x_989;
x_877 = x_973;
x_878 = x_972;
x_879 = x_979;
x_880 = x_929;
x_881 = x_980;
x_882 = x_978;
x_883 = x_976;
x_884 = x_996;
goto block_904;
}
else
{
uint8_t x_997; 
x_997 = lean_byte_array_fget(x_988, x_989);
lean_inc_n(x_976, 2);
lean_inc_ref_n(x_978, 2);
lean_inc_ref_n(x_980, 2);
lean_inc_n(x_979, 2);
lean_inc_ref(x_937);
lean_inc_n(x_977, 2);
x_861 = x_977;
x_862 = x_937;
x_863 = x_937;
x_864 = x_979;
x_865 = x_980;
x_866 = x_978;
x_867 = x_976;
x_868 = x_927;
x_869 = x_988;
x_870 = x_981;
x_871 = x_928;
x_872 = x_939;
x_873 = x_930;
x_874 = x_977;
x_875 = x_936;
x_876 = x_989;
x_877 = x_973;
x_878 = x_972;
x_879 = x_979;
x_880 = x_929;
x_881 = x_980;
x_882 = x_978;
x_883 = x_976;
x_884 = x_997;
goto block_904;
}
}
}
}
else
{
lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; 
lean_inc_ref(x_980);
lean_inc(x_979);
lean_inc_ref(x_978);
lean_inc(x_977);
lean_inc(x_976);
lean_dec(x_982);
x_998 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_998);
x_999 = lean_ctor_get(x_5, 1);
lean_inc(x_999);
lean_dec_ref(x_5);
x_1000 = lean_unsigned_to_nat(5u);
x_1001 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_998, x_999, x_973, x_1000);
if (lean_obj_tag(x_1001) == 0)
{
uint8_t x_1002; 
lean_dec_ref(x_980);
lean_dec(x_979);
lean_dec_ref(x_978);
lean_dec(x_977);
lean_dec(x_976);
lean_dec_ref(x_937);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1002 = !lean_is_exclusive(x_1001);
if (x_1002 == 0)
{
return x_1001;
}
else
{
lean_object* x_1003; lean_object* x_1004; 
x_1003 = lean_ctor_get(x_1001, 0);
lean_inc(x_1003);
lean_dec(x_1001);
x_1004 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1004, 0, x_1003);
return x_1004;
}
}
else
{
lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; uint32_t x_1011; lean_object* x_1012; lean_object* x_1013; uint32_t x_1014; uint8_t x_1015; 
x_1005 = lean_ctor_get(x_1001, 0);
lean_inc(x_1005);
lean_dec_ref(x_1001);
x_1006 = lean_ctor_get(x_1005, 0);
lean_inc(x_1006);
x_1007 = lean_ctor_get(x_1005, 1);
lean_inc(x_1007);
lean_dec(x_1005);
x_1008 = lean_nat_sub(x_972, x_981);
x_1009 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_1010 = lean_array_get_borrowed(x_1009, x_978, x_1008);
lean_dec(x_1008);
x_1011 = lean_unbox_uint32(x_1010);
x_1012 = lean_uint32_to_nat(x_1011);
x_1013 = lean_nat_add(x_1012, x_1006);
lean_dec(x_1006);
lean_dec(x_1012);
x_1014 = lean_uint32_of_nat(x_1013);
x_1015 = lean_nat_dec_lt(x_973, x_976);
if (x_1015 == 0)
{
lean_inc_ref(x_937);
x_796 = x_937;
x_797 = x_937;
x_798 = x_1007;
x_799 = x_927;
x_800 = x_936;
x_801 = x_973;
x_802 = x_929;
x_803 = x_928;
x_804 = x_939;
x_805 = x_1013;
x_806 = x_1014;
x_807 = x_930;
x_808 = x_6;
x_809 = x_976;
x_810 = x_977;
x_811 = x_978;
x_812 = x_979;
x_813 = x_980;
goto block_821;
}
else
{
uint8_t x_1016; 
x_1016 = !lean_is_exclusive(x_6);
if (x_1016 == 0)
{
lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; 
x_1017 = lean_ctor_get(x_6, 4);
lean_dec(x_1017);
x_1018 = lean_ctor_get(x_6, 3);
lean_dec(x_1018);
x_1019 = lean_ctor_get(x_6, 2);
lean_dec(x_1019);
x_1020 = lean_ctor_get(x_6, 1);
lean_dec(x_1020);
x_1021 = lean_ctor_get(x_6, 0);
lean_dec(x_1021);
x_1022 = lean_box_uint32(x_1014);
x_1023 = lean_array_set(x_978, x_979, x_1022);
x_1024 = lean_nat_add(x_979, x_928);
lean_dec(x_979);
x_1025 = lean_nat_mod(x_1024, x_976);
lean_dec(x_1024);
lean_inc_ref(x_980);
lean_inc(x_1025);
lean_inc_ref(x_1023);
lean_inc(x_977);
lean_inc(x_976);
lean_ctor_set(x_6, 3, x_1025);
lean_ctor_set(x_6, 2, x_1023);
lean_inc_ref(x_937);
x_796 = x_937;
x_797 = x_937;
x_798 = x_1007;
x_799 = x_927;
x_800 = x_936;
x_801 = x_973;
x_802 = x_929;
x_803 = x_928;
x_804 = x_939;
x_805 = x_1013;
x_806 = x_1014;
x_807 = x_930;
x_808 = x_6;
x_809 = x_976;
x_810 = x_977;
x_811 = x_1023;
x_812 = x_1025;
x_813 = x_980;
goto block_821;
}
else
{
lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; 
lean_dec(x_6);
x_1026 = lean_box_uint32(x_1014);
x_1027 = lean_array_set(x_978, x_979, x_1026);
x_1028 = lean_nat_add(x_979, x_928);
lean_dec(x_979);
x_1029 = lean_nat_mod(x_1028, x_976);
lean_dec(x_1028);
lean_inc_ref(x_980);
lean_inc(x_1029);
lean_inc_ref(x_1027);
lean_inc(x_977);
lean_inc(x_976);
x_1030 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1030, 0, x_976);
lean_ctor_set(x_1030, 1, x_977);
lean_ctor_set(x_1030, 2, x_1027);
lean_ctor_set(x_1030, 3, x_1029);
lean_ctor_set(x_1030, 4, x_980);
lean_inc_ref(x_937);
x_796 = x_937;
x_797 = x_937;
x_798 = x_1007;
x_799 = x_927;
x_800 = x_936;
x_801 = x_973;
x_802 = x_929;
x_803 = x_928;
x_804 = x_939;
x_805 = x_1013;
x_806 = x_1014;
x_807 = x_930;
x_808 = x_1030;
x_809 = x_976;
x_810 = x_977;
x_811 = x_1027;
x_812 = x_1029;
x_813 = x_980;
goto block_821;
}
}
}
}
}
else
{
lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; lean_object* x_1034; 
x_1031 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1031);
x_1032 = lean_ctor_get(x_5, 1);
lean_inc(x_1032);
lean_dec_ref(x_5);
x_1033 = lean_unsigned_to_nat(5u);
x_1034 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1031, x_1032, x_973, x_1033);
if (lean_obj_tag(x_1034) == 0)
{
uint8_t x_1035; 
lean_dec_ref(x_937);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1035 = !lean_is_exclusive(x_1034);
if (x_1035 == 0)
{
return x_1034;
}
else
{
lean_object* x_1036; lean_object* x_1037; 
x_1036 = lean_ctor_get(x_1034, 0);
lean_inc(x_1036);
lean_dec(x_1034);
x_1037 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1037, 0, x_1036);
return x_1037;
}
}
else
{
lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; uint32_t x_1049; uint8_t x_1050; 
x_1038 = lean_ctor_get(x_1034, 0);
lean_inc(x_1038);
lean_dec_ref(x_1034);
x_1039 = lean_ctor_get(x_1038, 0);
lean_inc(x_1039);
x_1040 = lean_ctor_get(x_1038, 1);
lean_inc(x_1040);
lean_dec(x_1038);
x_1041 = lean_ctor_get(x_6, 0);
lean_inc(x_1041);
x_1042 = lean_ctor_get(x_6, 1);
lean_inc(x_1042);
x_1043 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1043);
x_1044 = lean_ctor_get(x_6, 3);
lean_inc(x_1044);
x_1045 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1045);
x_1046 = lean_byte_array_size(x_2);
x_1047 = lean_nat_add(x_936, x_1046);
x_1048 = lean_nat_sub(x_1047, x_1039);
lean_dec(x_1039);
lean_dec(x_1047);
x_1049 = lean_uint32_of_nat(x_1048);
x_1050 = lean_nat_dec_lt(x_973, x_1041);
if (x_1050 == 0)
{
lean_inc_ref(x_937);
x_757 = x_937;
x_758 = x_937;
x_759 = x_927;
x_760 = x_936;
x_761 = x_1049;
x_762 = x_1048;
x_763 = x_973;
x_764 = x_929;
x_765 = x_928;
x_766 = x_939;
x_767 = x_1040;
x_768 = x_930;
x_769 = x_6;
x_770 = x_1041;
x_771 = x_1042;
x_772 = x_1043;
x_773 = x_1044;
x_774 = x_1045;
goto block_782;
}
else
{
uint8_t x_1051; 
x_1051 = !lean_is_exclusive(x_6);
if (x_1051 == 0)
{
lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; lean_object* x_1057; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; 
x_1052 = lean_ctor_get(x_6, 4);
lean_dec(x_1052);
x_1053 = lean_ctor_get(x_6, 3);
lean_dec(x_1053);
x_1054 = lean_ctor_get(x_6, 2);
lean_dec(x_1054);
x_1055 = lean_ctor_get(x_6, 1);
lean_dec(x_1055);
x_1056 = lean_ctor_get(x_6, 0);
lean_dec(x_1056);
x_1057 = lean_box_uint32(x_1049);
x_1058 = lean_array_set(x_1043, x_1044, x_1057);
x_1059 = lean_nat_add(x_1044, x_928);
lean_dec(x_1044);
x_1060 = lean_nat_mod(x_1059, x_1041);
lean_dec(x_1059);
lean_inc_ref(x_1045);
lean_inc(x_1060);
lean_inc_ref(x_1058);
lean_inc(x_1042);
lean_inc(x_1041);
lean_ctor_set(x_6, 3, x_1060);
lean_ctor_set(x_6, 2, x_1058);
lean_inc_ref(x_937);
x_757 = x_937;
x_758 = x_937;
x_759 = x_927;
x_760 = x_936;
x_761 = x_1049;
x_762 = x_1048;
x_763 = x_973;
x_764 = x_929;
x_765 = x_928;
x_766 = x_939;
x_767 = x_1040;
x_768 = x_930;
x_769 = x_6;
x_770 = x_1041;
x_771 = x_1042;
x_772 = x_1058;
x_773 = x_1060;
x_774 = x_1045;
goto block_782;
}
else
{
lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; 
lean_dec(x_6);
x_1061 = lean_box_uint32(x_1049);
x_1062 = lean_array_set(x_1043, x_1044, x_1061);
x_1063 = lean_nat_add(x_1044, x_928);
lean_dec(x_1044);
x_1064 = lean_nat_mod(x_1063, x_1041);
lean_dec(x_1063);
lean_inc_ref(x_1045);
lean_inc(x_1064);
lean_inc_ref(x_1062);
lean_inc(x_1042);
lean_inc(x_1041);
x_1065 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1065, 0, x_1041);
lean_ctor_set(x_1065, 1, x_1042);
lean_ctor_set(x_1065, 2, x_1062);
lean_ctor_set(x_1065, 3, x_1064);
lean_ctor_set(x_1065, 4, x_1045);
lean_inc_ref(x_937);
x_757 = x_937;
x_758 = x_937;
x_759 = x_927;
x_760 = x_936;
x_761 = x_1049;
x_762 = x_1048;
x_763 = x_973;
x_764 = x_929;
x_765 = x_928;
x_766 = x_939;
x_767 = x_1040;
x_768 = x_930;
x_769 = x_1065;
x_770 = x_1041;
x_771 = x_1042;
x_772 = x_1062;
x_773 = x_1064;
x_774 = x_1045;
goto block_782;
}
}
}
}
}
else
{
lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; lean_object* x_1069; 
x_1066 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1066);
x_1067 = lean_ctor_get(x_5, 1);
lean_inc(x_1067);
lean_dec_ref(x_5);
x_1068 = lean_unsigned_to_nat(5u);
x_1069 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1066, x_1067, x_973, x_1068);
if (lean_obj_tag(x_1069) == 0)
{
uint8_t x_1070; 
lean_dec_ref(x_937);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1070 = !lean_is_exclusive(x_1069);
if (x_1070 == 0)
{
return x_1069;
}
else
{
lean_object* x_1071; lean_object* x_1072; 
x_1071 = lean_ctor_get(x_1069, 0);
lean_inc(x_1071);
lean_dec(x_1069);
x_1072 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1072, 0, x_1071);
return x_1072;
}
}
else
{
lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; uint32_t x_1081; uint8_t x_1082; 
x_1073 = lean_ctor_get(x_1069, 0);
lean_inc(x_1073);
lean_dec_ref(x_1069);
x_1074 = lean_ctor_get(x_1073, 0);
lean_inc(x_1074);
x_1075 = lean_ctor_get(x_1073, 1);
lean_inc(x_1075);
lean_dec(x_1073);
x_1076 = lean_ctor_get(x_6, 0);
lean_inc(x_1076);
x_1077 = lean_ctor_get(x_6, 1);
lean_inc(x_1077);
x_1078 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1078);
x_1079 = lean_ctor_get(x_6, 3);
lean_inc(x_1079);
x_1080 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1080);
x_1081 = lean_uint32_of_nat(x_1074);
x_1082 = lean_nat_dec_lt(x_973, x_1076);
if (x_1082 == 0)
{
lean_inc_ref(x_937);
x_718 = x_937;
x_719 = x_937;
x_720 = x_927;
x_721 = x_1074;
x_722 = x_936;
x_723 = x_973;
x_724 = x_1075;
x_725 = x_929;
x_726 = x_928;
x_727 = x_939;
x_728 = x_1081;
x_729 = x_930;
x_730 = x_6;
x_731 = x_1076;
x_732 = x_1077;
x_733 = x_1078;
x_734 = x_1079;
x_735 = x_1080;
goto block_743;
}
else
{
uint8_t x_1083; 
x_1083 = !lean_is_exclusive(x_6);
if (x_1083 == 0)
{
lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; lean_object* x_1090; lean_object* x_1091; lean_object* x_1092; 
x_1084 = lean_ctor_get(x_6, 4);
lean_dec(x_1084);
x_1085 = lean_ctor_get(x_6, 3);
lean_dec(x_1085);
x_1086 = lean_ctor_get(x_6, 2);
lean_dec(x_1086);
x_1087 = lean_ctor_get(x_6, 1);
lean_dec(x_1087);
x_1088 = lean_ctor_get(x_6, 0);
lean_dec(x_1088);
x_1089 = lean_box_uint32(x_1081);
x_1090 = lean_array_set(x_1078, x_1079, x_1089);
x_1091 = lean_nat_add(x_1079, x_928);
lean_dec(x_1079);
x_1092 = lean_nat_mod(x_1091, x_1076);
lean_dec(x_1091);
lean_inc_ref(x_1080);
lean_inc(x_1092);
lean_inc_ref(x_1090);
lean_inc(x_1077);
lean_inc(x_1076);
lean_ctor_set(x_6, 3, x_1092);
lean_ctor_set(x_6, 2, x_1090);
lean_inc_ref(x_937);
x_718 = x_937;
x_719 = x_937;
x_720 = x_927;
x_721 = x_1074;
x_722 = x_936;
x_723 = x_973;
x_724 = x_1075;
x_725 = x_929;
x_726 = x_928;
x_727 = x_939;
x_728 = x_1081;
x_729 = x_930;
x_730 = x_6;
x_731 = x_1076;
x_732 = x_1077;
x_733 = x_1090;
x_734 = x_1092;
x_735 = x_1080;
goto block_743;
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; 
lean_dec(x_6);
x_1093 = lean_box_uint32(x_1081);
x_1094 = lean_array_set(x_1078, x_1079, x_1093);
x_1095 = lean_nat_add(x_1079, x_928);
lean_dec(x_1079);
x_1096 = lean_nat_mod(x_1095, x_1076);
lean_dec(x_1095);
lean_inc_ref(x_1080);
lean_inc(x_1096);
lean_inc_ref(x_1094);
lean_inc(x_1077);
lean_inc(x_1076);
x_1097 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1097, 0, x_1076);
lean_ctor_set(x_1097, 1, x_1077);
lean_ctor_set(x_1097, 2, x_1094);
lean_ctor_set(x_1097, 3, x_1096);
lean_ctor_set(x_1097, 4, x_1080);
lean_inc_ref(x_937);
x_718 = x_937;
x_719 = x_937;
x_720 = x_927;
x_721 = x_1074;
x_722 = x_936;
x_723 = x_973;
x_724 = x_1075;
x_725 = x_929;
x_726 = x_928;
x_727 = x_939;
x_728 = x_1081;
x_729 = x_930;
x_730 = x_1097;
x_731 = x_1076;
x_732 = x_1077;
x_733 = x_1094;
x_734 = x_1096;
x_735 = x_1080;
goto block_743;
}
}
}
}
}
}
}
}
else
{
lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; lean_object* x_1101; 
x_1098 = lean_ctor_get(x_927, 1);
x_1099 = lean_ctor_get(x_931, 0);
lean_inc(x_1099);
lean_dec(x_931);
x_1100 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_1101 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_1101, 0, x_1100);
lean_closure_set(x_1101, 1, x_1);
if (lean_obj_tag(x_1099) == 0)
{
lean_object* x_1102; lean_object* x_1103; 
lean_inc_ref(x_1098);
lean_dec(x_929);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1102, 0, x_5);
lean_ctor_set(x_1102, 1, x_6);
lean_inc_ref(x_1102);
lean_inc_ref(x_4);
x_1103 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1103, 0, x_4);
lean_ctor_set(x_1103, 1, x_1102);
x_613 = x_1101;
x_614 = x_927;
x_615 = x_1098;
x_616 = x_1100;
x_617 = x_928;
x_618 = x_930;
x_619 = x_2;
x_620 = x_1103;
x_621 = x_4;
x_622 = x_1102;
x_623 = x_5;
x_624 = x_6;
goto block_629;
}
else
{
uint8_t x_1104; 
x_1104 = 0;
switch (lean_obj_tag(x_1099)) {
case 0:
{
lean_object* x_1105; lean_object* x_1106; 
lean_inc_ref(x_1098);
lean_dec(x_929);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1105 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1105, 0, x_5);
lean_ctor_set(x_1105, 1, x_6);
lean_inc_ref(x_1105);
lean_inc_ref(x_4);
x_1106 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1106, 0, x_4);
lean_ctor_set(x_1106, 1, x_1105);
x_613 = x_1101;
x_614 = x_927;
x_615 = x_1098;
x_616 = x_1100;
x_617 = x_928;
x_618 = x_930;
x_619 = x_2;
x_620 = x_1106;
x_621 = x_4;
x_622 = x_1105;
x_623 = x_5;
x_624 = x_6;
goto block_629;
}
case 1:
{
lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; uint8_t x_1112; 
lean_inc_ref(x_1098);
x_1107 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_1107);
x_1108 = lean_ctor_get(x_4, 1);
lean_inc(x_1108);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_1109 = x_4;
} else {
 lean_dec_ref(x_4);
 x_1109 = lean_box(0);
}
x_1110 = lean_nat_add(x_1108, x_929);
x_1111 = lean_byte_array_size(x_1107);
x_1112 = lean_nat_dec_le(x_1110, x_1111);
if (x_1112 == 0)
{
lean_object* x_1113; 
lean_dec(x_1110);
lean_dec(x_1109);
lean_dec(x_1108);
lean_dec_ref(x_1107);
lean_dec_ref(x_1101);
lean_dec_ref(x_1098);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1113 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1113;
}
else
{
lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; lean_object* x_1118; 
x_1114 = lean_byte_array_size(x_2);
x_1115 = lean_byte_array_copy_slice(x_1107, x_1108, x_2, x_1114, x_929, x_1104);
if (lean_is_scalar(x_1109)) {
 x_1116 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1116 = x_1109;
}
lean_ctor_set(x_1116, 0, x_1107);
lean_ctor_set(x_1116, 1, x_1110);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1117 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1117, 0, x_5);
lean_ctor_set(x_1117, 1, x_6);
lean_inc_ref(x_1117);
lean_inc_ref(x_1116);
x_1118 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1118, 0, x_1116);
lean_ctor_set(x_1118, 1, x_1117);
x_613 = x_1101;
x_614 = x_927;
x_615 = x_1098;
x_616 = x_1100;
x_617 = x_928;
x_618 = x_930;
x_619 = x_1115;
x_620 = x_1118;
x_621 = x_1116;
x_622 = x_1117;
x_623 = x_5;
x_624 = x_6;
goto block_629;
}
}
case 2:
{
lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; uint8_t x_1122; 
x_1119 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_1119);
x_1120 = lean_ctor_get(x_4, 1);
lean_inc(x_1120);
lean_dec_ref(x_4);
x_1121 = lean_byte_array_size(x_1119);
x_1122 = lean_nat_dec_lt(x_1120, x_1121);
if (x_1122 == 0)
{
lean_object* x_1123; 
lean_dec(x_1120);
lean_dec_ref(x_1119);
lean_dec_ref(x_1101);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1123 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1123;
}
else
{
if (x_1122 == 0)
{
uint8_t x_1124; lean_object* x_1125; lean_object* x_1126; uint8_t x_1127; 
x_1124 = l_instInhabitedUInt8;
x_1125 = lean_box(x_1124);
x_1126 = l_outOfBounds___redArg(x_1125);
x_1127 = lean_unbox(x_1126);
lean_dec(x_1126);
x_905 = x_1101;
x_906 = x_927;
x_907 = x_1100;
x_908 = x_1120;
x_909 = x_929;
x_910 = x_928;
x_911 = x_1104;
x_912 = x_1119;
x_913 = x_930;
x_914 = x_1127;
goto block_926;
}
else
{
uint8_t x_1128; 
x_1128 = lean_byte_array_fget(x_1119, x_1120);
x_905 = x_1101;
x_906 = x_927;
x_907 = x_1100;
x_908 = x_1120;
x_909 = x_929;
x_910 = x_928;
x_911 = x_1104;
x_912 = x_1119;
x_913 = x_930;
x_914 = x_1128;
goto block_926;
}
}
}
default: 
{
uint8_t x_1129; lean_object* x_1130; lean_object* x_1131; uint8_t x_1132; 
x_1129 = lean_ctor_get_uint8(x_1099, 0);
lean_dec_ref(x_1099);
x_1130 = lean_uint8_to_nat(x_1129);
x_1131 = lean_unsigned_to_nat(0u);
x_1132 = lean_nat_dec_eq(x_1130, x_1131);
if (x_1132 == 0)
{
uint8_t x_1133; 
x_1133 = lean_nat_dec_eq(x_1130, x_928);
if (x_1133 == 0)
{
lean_object* x_1134; lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; uint8_t x_1141; 
x_1134 = lean_ctor_get(x_6, 0);
x_1135 = lean_ctor_get(x_6, 1);
x_1136 = lean_ctor_get(x_6, 2);
x_1137 = lean_ctor_get(x_6, 3);
x_1138 = lean_ctor_get(x_6, 4);
x_1139 = lean_unsigned_to_nat(2u);
x_1140 = lean_nat_add(x_1139, x_1134);
x_1141 = lean_nat_dec_lt(x_1130, x_1140);
if (x_1141 == 0)
{
lean_object* x_1142; uint8_t x_1143; 
x_1142 = lean_nat_add(x_1140, x_1135);
lean_dec(x_1140);
x_1143 = lean_nat_dec_lt(x_1130, x_1142);
lean_dec(x_1142);
if (x_1143 == 0)
{
lean_object* x_1144; lean_object* x_1145; 
lean_dec_ref(x_1101);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1144 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_1144, 0, x_1130);
x_1145 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1145, 0, x_1144);
return x_1145;
}
else
{
lean_object* x_1146; lean_object* x_1147; lean_object* x_1148; uint8_t x_1149; 
x_1146 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1146);
x_1147 = lean_ctor_get(x_5, 1);
lean_inc(x_1147);
lean_dec_ref(x_5);
x_1148 = lean_byte_array_size(x_1146);
x_1149 = lean_nat_dec_lt(x_1147, x_1148);
if (x_1149 == 0)
{
lean_object* x_1150; 
lean_dec(x_1147);
lean_dec_ref(x_1146);
lean_dec_ref(x_1101);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1150 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1150;
}
else
{
if (x_1149 == 0)
{
uint8_t x_1151; lean_object* x_1152; lean_object* x_1153; uint8_t x_1154; 
x_1151 = l_instInhabitedUInt8;
x_1152 = lean_box(x_1151);
x_1153 = l_outOfBounds___redArg(x_1152);
x_1154 = lean_unbox(x_1153);
lean_dec(x_1153);
lean_inc_n(x_1134, 2);
lean_inc_ref_n(x_1136, 2);
lean_inc_ref_n(x_1138, 2);
lean_inc_n(x_1137, 2);
lean_inc_ref(x_1101);
lean_inc_n(x_1135, 2);
x_861 = x_1135;
x_862 = x_1101;
x_863 = x_1101;
x_864 = x_1137;
x_865 = x_1138;
x_866 = x_1136;
x_867 = x_1134;
x_868 = x_927;
x_869 = x_1146;
x_870 = x_1139;
x_871 = x_928;
x_872 = x_1104;
x_873 = x_930;
x_874 = x_1135;
x_875 = x_1100;
x_876 = x_1147;
x_877 = x_1131;
x_878 = x_1130;
x_879 = x_1137;
x_880 = x_929;
x_881 = x_1138;
x_882 = x_1136;
x_883 = x_1134;
x_884 = x_1154;
goto block_904;
}
else
{
uint8_t x_1155; 
x_1155 = lean_byte_array_fget(x_1146, x_1147);
lean_inc_n(x_1134, 2);
lean_inc_ref_n(x_1136, 2);
lean_inc_ref_n(x_1138, 2);
lean_inc_n(x_1137, 2);
lean_inc_ref(x_1101);
lean_inc_n(x_1135, 2);
x_861 = x_1135;
x_862 = x_1101;
x_863 = x_1101;
x_864 = x_1137;
x_865 = x_1138;
x_866 = x_1136;
x_867 = x_1134;
x_868 = x_927;
x_869 = x_1146;
x_870 = x_1139;
x_871 = x_928;
x_872 = x_1104;
x_873 = x_930;
x_874 = x_1135;
x_875 = x_1100;
x_876 = x_1147;
x_877 = x_1131;
x_878 = x_1130;
x_879 = x_1137;
x_880 = x_929;
x_881 = x_1138;
x_882 = x_1136;
x_883 = x_1134;
x_884 = x_1155;
goto block_904;
}
}
}
}
else
{
lean_object* x_1156; lean_object* x_1157; lean_object* x_1158; lean_object* x_1159; 
lean_inc_ref(x_1138);
lean_inc(x_1137);
lean_inc_ref(x_1136);
lean_inc(x_1135);
lean_inc(x_1134);
lean_dec(x_1140);
x_1156 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1156);
x_1157 = lean_ctor_get(x_5, 1);
lean_inc(x_1157);
lean_dec_ref(x_5);
x_1158 = lean_unsigned_to_nat(5u);
x_1159 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1156, x_1157, x_1131, x_1158);
if (lean_obj_tag(x_1159) == 0)
{
lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; 
lean_dec_ref(x_1138);
lean_dec(x_1137);
lean_dec_ref(x_1136);
lean_dec(x_1135);
lean_dec(x_1134);
lean_dec_ref(x_1101);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1160 = lean_ctor_get(x_1159, 0);
lean_inc(x_1160);
if (lean_is_exclusive(x_1159)) {
 lean_ctor_release(x_1159, 0);
 x_1161 = x_1159;
} else {
 lean_dec_ref(x_1159);
 x_1161 = lean_box(0);
}
if (lean_is_scalar(x_1161)) {
 x_1162 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1162 = x_1161;
}
lean_ctor_set(x_1162, 0, x_1160);
return x_1162;
}
else
{
lean_object* x_1163; lean_object* x_1164; lean_object* x_1165; lean_object* x_1166; lean_object* x_1167; lean_object* x_1168; uint32_t x_1169; lean_object* x_1170; lean_object* x_1171; uint32_t x_1172; uint8_t x_1173; 
x_1163 = lean_ctor_get(x_1159, 0);
lean_inc(x_1163);
lean_dec_ref(x_1159);
x_1164 = lean_ctor_get(x_1163, 0);
lean_inc(x_1164);
x_1165 = lean_ctor_get(x_1163, 1);
lean_inc(x_1165);
lean_dec(x_1163);
x_1166 = lean_nat_sub(x_1130, x_1139);
x_1167 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_1168 = lean_array_get_borrowed(x_1167, x_1136, x_1166);
lean_dec(x_1166);
x_1169 = lean_unbox_uint32(x_1168);
x_1170 = lean_uint32_to_nat(x_1169);
x_1171 = lean_nat_add(x_1170, x_1164);
lean_dec(x_1164);
lean_dec(x_1170);
x_1172 = lean_uint32_of_nat(x_1171);
x_1173 = lean_nat_dec_lt(x_1131, x_1134);
if (x_1173 == 0)
{
lean_inc_ref(x_1101);
x_796 = x_1101;
x_797 = x_1101;
x_798 = x_1165;
x_799 = x_927;
x_800 = x_1100;
x_801 = x_1131;
x_802 = x_929;
x_803 = x_928;
x_804 = x_1104;
x_805 = x_1171;
x_806 = x_1172;
x_807 = x_930;
x_808 = x_6;
x_809 = x_1134;
x_810 = x_1135;
x_811 = x_1136;
x_812 = x_1137;
x_813 = x_1138;
goto block_821;
}
else
{
lean_object* x_1174; lean_object* x_1175; lean_object* x_1176; lean_object* x_1177; lean_object* x_1178; lean_object* x_1179; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1174 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1174 = lean_box(0);
}
x_1175 = lean_box_uint32(x_1172);
x_1176 = lean_array_set(x_1136, x_1137, x_1175);
x_1177 = lean_nat_add(x_1137, x_928);
lean_dec(x_1137);
x_1178 = lean_nat_mod(x_1177, x_1134);
lean_dec(x_1177);
lean_inc_ref(x_1138);
lean_inc(x_1178);
lean_inc_ref(x_1176);
lean_inc(x_1135);
lean_inc(x_1134);
if (lean_is_scalar(x_1174)) {
 x_1179 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1179 = x_1174;
}
lean_ctor_set(x_1179, 0, x_1134);
lean_ctor_set(x_1179, 1, x_1135);
lean_ctor_set(x_1179, 2, x_1176);
lean_ctor_set(x_1179, 3, x_1178);
lean_ctor_set(x_1179, 4, x_1138);
lean_inc_ref(x_1101);
x_796 = x_1101;
x_797 = x_1101;
x_798 = x_1165;
x_799 = x_927;
x_800 = x_1100;
x_801 = x_1131;
x_802 = x_929;
x_803 = x_928;
x_804 = x_1104;
x_805 = x_1171;
x_806 = x_1172;
x_807 = x_930;
x_808 = x_1179;
x_809 = x_1134;
x_810 = x_1135;
x_811 = x_1176;
x_812 = x_1178;
x_813 = x_1138;
goto block_821;
}
}
}
}
else
{
lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; 
x_1180 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1180);
x_1181 = lean_ctor_get(x_5, 1);
lean_inc(x_1181);
lean_dec_ref(x_5);
x_1182 = lean_unsigned_to_nat(5u);
x_1183 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1180, x_1181, x_1131, x_1182);
if (lean_obj_tag(x_1183) == 0)
{
lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; 
lean_dec_ref(x_1101);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1184 = lean_ctor_get(x_1183, 0);
lean_inc(x_1184);
if (lean_is_exclusive(x_1183)) {
 lean_ctor_release(x_1183, 0);
 x_1185 = x_1183;
} else {
 lean_dec_ref(x_1183);
 x_1185 = lean_box(0);
}
if (lean_is_scalar(x_1185)) {
 x_1186 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1186 = x_1185;
}
lean_ctor_set(x_1186, 0, x_1184);
return x_1186;
}
else
{
lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; lean_object* x_1193; lean_object* x_1194; lean_object* x_1195; lean_object* x_1196; lean_object* x_1197; uint32_t x_1198; uint8_t x_1199; 
x_1187 = lean_ctor_get(x_1183, 0);
lean_inc(x_1187);
lean_dec_ref(x_1183);
x_1188 = lean_ctor_get(x_1187, 0);
lean_inc(x_1188);
x_1189 = lean_ctor_get(x_1187, 1);
lean_inc(x_1189);
lean_dec(x_1187);
x_1190 = lean_ctor_get(x_6, 0);
lean_inc(x_1190);
x_1191 = lean_ctor_get(x_6, 1);
lean_inc(x_1191);
x_1192 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1192);
x_1193 = lean_ctor_get(x_6, 3);
lean_inc(x_1193);
x_1194 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1194);
x_1195 = lean_byte_array_size(x_2);
x_1196 = lean_nat_add(x_1100, x_1195);
x_1197 = lean_nat_sub(x_1196, x_1188);
lean_dec(x_1188);
lean_dec(x_1196);
x_1198 = lean_uint32_of_nat(x_1197);
x_1199 = lean_nat_dec_lt(x_1131, x_1190);
if (x_1199 == 0)
{
lean_inc_ref(x_1101);
x_757 = x_1101;
x_758 = x_1101;
x_759 = x_927;
x_760 = x_1100;
x_761 = x_1198;
x_762 = x_1197;
x_763 = x_1131;
x_764 = x_929;
x_765 = x_928;
x_766 = x_1104;
x_767 = x_1189;
x_768 = x_930;
x_769 = x_6;
x_770 = x_1190;
x_771 = x_1191;
x_772 = x_1192;
x_773 = x_1193;
x_774 = x_1194;
goto block_782;
}
else
{
lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; lean_object* x_1204; lean_object* x_1205; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1200 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1200 = lean_box(0);
}
x_1201 = lean_box_uint32(x_1198);
x_1202 = lean_array_set(x_1192, x_1193, x_1201);
x_1203 = lean_nat_add(x_1193, x_928);
lean_dec(x_1193);
x_1204 = lean_nat_mod(x_1203, x_1190);
lean_dec(x_1203);
lean_inc_ref(x_1194);
lean_inc(x_1204);
lean_inc_ref(x_1202);
lean_inc(x_1191);
lean_inc(x_1190);
if (lean_is_scalar(x_1200)) {
 x_1205 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1205 = x_1200;
}
lean_ctor_set(x_1205, 0, x_1190);
lean_ctor_set(x_1205, 1, x_1191);
lean_ctor_set(x_1205, 2, x_1202);
lean_ctor_set(x_1205, 3, x_1204);
lean_ctor_set(x_1205, 4, x_1194);
lean_inc_ref(x_1101);
x_757 = x_1101;
x_758 = x_1101;
x_759 = x_927;
x_760 = x_1100;
x_761 = x_1198;
x_762 = x_1197;
x_763 = x_1131;
x_764 = x_929;
x_765 = x_928;
x_766 = x_1104;
x_767 = x_1189;
x_768 = x_930;
x_769 = x_1205;
x_770 = x_1190;
x_771 = x_1191;
x_772 = x_1202;
x_773 = x_1204;
x_774 = x_1194;
goto block_782;
}
}
}
}
else
{
lean_object* x_1206; lean_object* x_1207; lean_object* x_1208; lean_object* x_1209; 
x_1206 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1206);
x_1207 = lean_ctor_get(x_5, 1);
lean_inc(x_1207);
lean_dec_ref(x_5);
x_1208 = lean_unsigned_to_nat(5u);
x_1209 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1206, x_1207, x_1131, x_1208);
if (lean_obj_tag(x_1209) == 0)
{
lean_object* x_1210; lean_object* x_1211; lean_object* x_1212; 
lean_dec_ref(x_1101);
lean_dec_ref(x_930);
lean_dec(x_929);
lean_dec(x_928);
lean_dec_ref(x_927);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1210 = lean_ctor_get(x_1209, 0);
lean_inc(x_1210);
if (lean_is_exclusive(x_1209)) {
 lean_ctor_release(x_1209, 0);
 x_1211 = x_1209;
} else {
 lean_dec_ref(x_1209);
 x_1211 = lean_box(0);
}
if (lean_is_scalar(x_1211)) {
 x_1212 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1212 = x_1211;
}
lean_ctor_set(x_1212, 0, x_1210);
return x_1212;
}
else
{
lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; uint32_t x_1221; uint8_t x_1222; 
x_1213 = lean_ctor_get(x_1209, 0);
lean_inc(x_1213);
lean_dec_ref(x_1209);
x_1214 = lean_ctor_get(x_1213, 0);
lean_inc(x_1214);
x_1215 = lean_ctor_get(x_1213, 1);
lean_inc(x_1215);
lean_dec(x_1213);
x_1216 = lean_ctor_get(x_6, 0);
lean_inc(x_1216);
x_1217 = lean_ctor_get(x_6, 1);
lean_inc(x_1217);
x_1218 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1218);
x_1219 = lean_ctor_get(x_6, 3);
lean_inc(x_1219);
x_1220 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1220);
x_1221 = lean_uint32_of_nat(x_1214);
x_1222 = lean_nat_dec_lt(x_1131, x_1216);
if (x_1222 == 0)
{
lean_inc_ref(x_1101);
x_718 = x_1101;
x_719 = x_1101;
x_720 = x_927;
x_721 = x_1214;
x_722 = x_1100;
x_723 = x_1131;
x_724 = x_1215;
x_725 = x_929;
x_726 = x_928;
x_727 = x_1104;
x_728 = x_1221;
x_729 = x_930;
x_730 = x_6;
x_731 = x_1216;
x_732 = x_1217;
x_733 = x_1218;
x_734 = x_1219;
x_735 = x_1220;
goto block_743;
}
else
{
lean_object* x_1223; lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1223 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1223 = lean_box(0);
}
x_1224 = lean_box_uint32(x_1221);
x_1225 = lean_array_set(x_1218, x_1219, x_1224);
x_1226 = lean_nat_add(x_1219, x_928);
lean_dec(x_1219);
x_1227 = lean_nat_mod(x_1226, x_1216);
lean_dec(x_1226);
lean_inc_ref(x_1220);
lean_inc(x_1227);
lean_inc_ref(x_1225);
lean_inc(x_1217);
lean_inc(x_1216);
if (lean_is_scalar(x_1223)) {
 x_1228 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1228 = x_1223;
}
lean_ctor_set(x_1228, 0, x_1216);
lean_ctor_set(x_1228, 1, x_1217);
lean_ctor_set(x_1228, 2, x_1225);
lean_ctor_set(x_1228, 3, x_1227);
lean_ctor_set(x_1228, 4, x_1220);
lean_inc_ref(x_1101);
x_718 = x_1101;
x_719 = x_1101;
x_720 = x_927;
x_721 = x_1214;
x_722 = x_1100;
x_723 = x_1131;
x_724 = x_1215;
x_725 = x_929;
x_726 = x_928;
x_727 = x_1104;
x_728 = x_1221;
x_729 = x_930;
x_730 = x_1228;
x_731 = x_1216;
x_732 = x_1217;
x_733 = x_1225;
x_734 = x_1227;
x_735 = x_1220;
goto block_743;
}
}
}
}
}
}
}
}
block_1248:
{
if (x_1238 == 0)
{
lean_dec(x_1237);
lean_dec_ref(x_1230);
x_927 = x_1233;
x_928 = x_1235;
x_929 = x_1234;
x_930 = x_1236;
goto block_1229;
}
else
{
lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; 
lean_dec_ref(x_1236);
lean_dec(x_1234);
x_1239 = lean_unsigned_to_nat(0u);
x_1240 = lean_unsigned_to_nat(5u);
x_1241 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1230, x_1237, x_1239, x_1240);
if (lean_obj_tag(x_1241) == 0)
{
uint8_t x_1242; 
lean_dec(x_1235);
lean_dec_ref(x_1233);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1242 = !lean_is_exclusive(x_1241);
if (x_1242 == 0)
{
return x_1241;
}
else
{
lean_object* x_1243; lean_object* x_1244; 
x_1243 = lean_ctor_get(x_1241, 0);
lean_inc(x_1243);
lean_dec(x_1241);
x_1244 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1244, 0, x_1243);
return x_1244;
}
}
else
{
lean_object* x_1245; lean_object* x_1246; lean_object* x_1247; 
x_1245 = lean_ctor_get(x_1241, 0);
lean_inc(x_1245);
lean_dec_ref(x_1241);
x_1246 = lean_ctor_get(x_1245, 0);
lean_inc(x_1246);
x_1247 = lean_ctor_get(x_1245, 1);
lean_inc(x_1247);
lean_dec(x_1245);
x_927 = x_1233;
x_928 = x_1235;
x_929 = x_1246;
x_930 = x_1247;
goto block_1229;
}
}
}
block_1262:
{
lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; lean_object* x_1253; lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; uint8_t x_1261; 
x_1250 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1251 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1252 = lean_uint8_to_nat(x_1249);
x_1253 = lean_array_get(x_1250, x_1251, x_1252);
x_1254 = lean_ctor_get(x_1253, 0);
x_1255 = lean_ctor_get(x_1254, 0);
x_1256 = lean_ctor_get(x_1254, 1);
lean_inc(x_1256);
x_1257 = lean_unsigned_to_nat(1u);
x_1258 = lean_nat_add(x_1231, x_1257);
lean_dec(x_1231);
lean_inc(x_1258);
lean_inc_ref(x_1230);
if (lean_is_scalar(x_1232)) {
 x_1259 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1259 = x_1232;
}
lean_ctor_set(x_1259, 0, x_1230);
lean_ctor_set(x_1259, 1, x_1258);
x_1260 = lean_unsigned_to_nat(0u);
x_1261 = lean_nat_dec_eq(x_1256, x_1260);
if (x_1261 == 0)
{
x_1233 = x_1253;
x_1234 = x_1256;
x_1235 = x_1257;
x_1236 = x_1259;
x_1237 = x_1258;
x_1238 = x_1261;
goto block_1248;
}
else
{
if (lean_obj_tag(x_1255) == 0)
{
if (x_1261 == 0)
{
x_1233 = x_1253;
x_1234 = x_1256;
x_1235 = x_1257;
x_1236 = x_1259;
x_1237 = x_1258;
x_1238 = x_1261;
goto block_1248;
}
else
{
lean_dec(x_1258);
lean_dec_ref(x_1230);
x_927 = x_1253;
x_928 = x_1257;
x_929 = x_1256;
x_930 = x_1259;
goto block_1229;
}
}
else
{
x_1233 = x_1253;
x_1234 = x_1256;
x_1235 = x_1257;
x_1236 = x_1259;
x_1237 = x_1258;
x_1238 = x_1261;
goto block_1248;
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
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; uint32_t x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_148; uint32_t x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint32_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; uint32_t x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; uint8_t x_464; lean_object* x_476; lean_object* x_477; lean_object* x_478; lean_object* x_479; lean_object* x_480; lean_object* x_481; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_491; lean_object* x_492; lean_object* x_493; lean_object* x_494; lean_object* x_495; lean_object* x_496; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; uint8_t x_510; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; lean_object* x_527; lean_object* x_532; lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; lean_object* x_573; lean_object* x_574; lean_object* x_575; lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; lean_object* x_580; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; uint32_t x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; uint8_t x_621; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_653; lean_object* x_654; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_662; lean_object* x_663; uint32_t x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; uint32_t x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_728; lean_object* x_729; uint32_t x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; uint8_t x_1048; uint8_t x_1058; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_2, x_27);
lean_dec(x_2);
if (x_25 == 0)
{
uint8_t x_1075; lean_object* x_1076; lean_object* x_1077; uint8_t x_1078; 
x_1075 = l_instInhabitedUInt8;
x_1076 = lean_box(x_1075);
x_1077 = l_outOfBounds___redArg(x_1076);
x_1078 = lean_unbox(x_1077);
lean_dec(x_1077);
x_1058 = x_1078;
goto block_1074;
}
else
{
uint8_t x_1079; 
x_1079 = lean_byte_array_fget(x_20, x_21);
x_1058 = x_1079;
goto block_1074;
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
block_42:
{
lean_object* x_40; lean_object* x_41; 
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
lean_dec_ref(x_39);
x_29 = x_37;
x_30 = x_38;
x_31 = x_40;
x_32 = x_41;
goto block_36;
}
block_59:
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; 
x_51 = lean_nat_add(x_49, x_43);
lean_dec(x_43);
lean_dec(x_49);
if (lean_is_scalar(x_24)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_24;
}
lean_ctor_set(x_52, 0, x_48);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_box(x_50);
x_54 = lean_mk_array(x_45, x_53);
x_55 = lean_byte_array_mk(x_54);
x_56 = lean_byte_array_size(x_47);
x_57 = lean_byte_array_size(x_55);
x_58 = lean_byte_array_copy_slice(x_55, x_8, x_47, x_56, x_57, x_23);
lean_dec_ref(x_55);
x_29 = x_58;
x_30 = x_46;
x_31 = x_52;
x_32 = x_44;
goto block_36;
}
block_101:
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_byte_array_size(x_65);
x_69 = lean_nat_add(x_62, x_68);
x_70 = lean_nat_dec_le(x_69, x_66);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
lean_dec(x_69);
x_71 = lean_nat_add(x_66, x_61);
x_72 = lean_nat_dec_le(x_71, x_62);
if (x_72 == 0)
{
uint8_t x_73; 
lean_dec(x_71);
x_73 = lean_nat_dec_le(x_62, x_66);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_74 = lean_nat_sub(x_62, x_66);
x_75 = lean_nat_sub(x_61, x_74);
lean_dec(x_74);
lean_dec(x_61);
x_76 = l_ByteArray_extract(x_1, x_66, x_62);
x_77 = lean_byte_array_size(x_76);
x_78 = lean_byte_array_copy_slice(x_76, x_8, x_65, x_68, x_77, x_23);
lean_dec_ref(x_76);
x_79 = lean_byte_array_size(x_78);
x_80 = lean_nat_sub(x_79, x_62);
x_81 = lean_nat_dec_le(x_75, x_80);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_82, 0, x_8);
lean_ctor_set(x_82, 1, x_75);
lean_ctor_set(x_82, 2, x_60);
x_83 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_62, x_1, x_82, x_78, x_8);
lean_dec_ref(x_82);
lean_dec(x_62);
x_29 = x_83;
x_30 = x_64;
x_31 = x_63;
x_32 = x_67;
goto block_36;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_60);
x_84 = lean_nat_add(x_62, x_75);
lean_dec(x_75);
x_85 = l_ByteArray_extract(x_78, x_62, x_84);
lean_dec(x_84);
x_86 = lean_byte_array_size(x_85);
x_87 = lean_byte_array_copy_slice(x_85, x_8, x_78, x_79, x_86, x_23);
lean_dec_ref(x_85);
x_29 = x_87;
x_30 = x_64;
x_31 = x_63;
x_32 = x_67;
goto block_36;
}
}
else
{
lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_88 = lean_nat_sub(x_66, x_62);
lean_dec(x_62);
lean_dec(x_66);
x_89 = lean_nat_add(x_88, x_61);
x_90 = lean_nat_dec_le(x_89, x_68);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_89);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_8);
lean_ctor_set(x_91, 1, x_61);
lean_ctor_set(x_91, 2, x_60);
x_92 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_88, x_91, x_65, x_8);
lean_dec_ref(x_91);
lean_dec(x_88);
x_29 = x_92;
x_30 = x_64;
x_31 = x_63;
x_32 = x_67;
goto block_36;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_61);
lean_dec(x_60);
x_93 = l_ByteArray_extract(x_65, x_88, x_89);
lean_dec(x_89);
x_94 = lean_byte_array_size(x_93);
x_95 = lean_byte_array_copy_slice(x_93, x_8, x_65, x_68, x_94, x_23);
lean_dec_ref(x_93);
x_29 = x_95;
x_30 = x_64;
x_31 = x_63;
x_32 = x_67;
goto block_36;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_62);
lean_dec(x_61);
lean_dec(x_60);
x_96 = l_ByteArray_extract(x_1, x_66, x_71);
lean_dec(x_71);
x_97 = lean_byte_array_size(x_96);
x_98 = lean_byte_array_copy_slice(x_96, x_8, x_65, x_68, x_97, x_23);
lean_dec_ref(x_96);
x_29 = x_98;
x_30 = x_64;
x_31 = x_63;
x_32 = x_67;
goto block_36;
}
}
else
{
lean_object* x_99; lean_object* x_100; 
lean_dec_ref(x_67);
lean_dec_ref(x_65);
lean_dec_ref(x_64);
lean_dec_ref(x_63);
lean_dec(x_62);
lean_dec(x_60);
lean_dec(x_28);
x_99 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_99, 0, x_66);
lean_ctor_set(x_99, 1, x_61);
lean_ctor_set(x_99, 2, x_69);
x_100 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_100, 0, x_99);
return x_100;
}
}
block_112:
{
lean_object* x_111; 
x_111 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_111, 0, x_104);
lean_ctor_set(x_111, 1, x_110);
x_60 = x_102;
x_61 = x_105;
x_62 = x_106;
x_63 = x_107;
x_64 = x_108;
x_65 = x_109;
x_66 = x_103;
x_67 = x_111;
goto block_101;
}
block_136:
{
uint8_t x_129; 
x_129 = lean_nat_dec_lt(x_116, x_125);
lean_dec(x_116);
if (x_129 == 0)
{
lean_dec_ref(x_128);
lean_dec(x_127);
lean_dec_ref(x_126);
lean_dec(x_125);
lean_dec(x_124);
x_102 = x_113;
x_103 = x_114;
x_104 = x_115;
x_105 = x_117;
x_106 = x_118;
x_107 = x_120;
x_108 = x_121;
x_109 = x_122;
x_110 = x_123;
goto block_112;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec_ref(x_123);
x_130 = lean_unsigned_to_nat(256u);
x_131 = lean_nat_mul(x_125, x_130);
x_132 = lean_nat_mod(x_114, x_131);
lean_dec(x_131);
x_133 = lean_box_uint32(x_119);
x_134 = lean_array_set(x_128, x_132, x_133);
lean_dec(x_132);
x_135 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_135, 0, x_124);
lean_ctor_set(x_135, 1, x_125);
lean_ctor_set(x_135, 2, x_126);
lean_ctor_set(x_135, 3, x_127);
lean_ctor_set(x_135, 4, x_134);
x_102 = x_113;
x_103 = x_114;
x_104 = x_115;
x_105 = x_117;
x_106 = x_118;
x_107 = x_120;
x_108 = x_121;
x_109 = x_122;
x_110 = x_135;
goto block_112;
}
}
block_147:
{
lean_object* x_146; 
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_138);
lean_ctor_set(x_146, 1, x_145);
x_60 = x_137;
x_61 = x_139;
x_62 = x_140;
x_63 = x_141;
x_64 = x_142;
x_65 = x_143;
x_66 = x_144;
x_67 = x_146;
goto block_101;
}
block_171:
{
uint8_t x_164; 
x_164 = lean_nat_dec_lt(x_151, x_160);
lean_dec(x_151);
if (x_164 == 0)
{
lean_dec_ref(x_163);
lean_dec(x_162);
lean_dec_ref(x_161);
lean_dec(x_160);
lean_dec(x_159);
x_137 = x_148;
x_138 = x_150;
x_139 = x_152;
x_140 = x_153;
x_141 = x_154;
x_142 = x_155;
x_143 = x_156;
x_144 = x_157;
x_145 = x_158;
goto block_147;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec_ref(x_158);
x_165 = lean_unsigned_to_nat(256u);
x_166 = lean_nat_mul(x_160, x_165);
x_167 = lean_nat_mod(x_157, x_166);
lean_dec(x_166);
x_168 = lean_box_uint32(x_149);
x_169 = lean_array_set(x_163, x_167, x_168);
lean_dec(x_167);
x_170 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_170, 0, x_159);
lean_ctor_set(x_170, 1, x_160);
lean_ctor_set(x_170, 2, x_161);
lean_ctor_set(x_170, 3, x_162);
lean_ctor_set(x_170, 4, x_169);
x_137 = x_148;
x_138 = x_150;
x_139 = x_152;
x_140 = x_153;
x_141 = x_154;
x_142 = x_155;
x_143 = x_156;
x_144 = x_157;
x_145 = x_170;
goto block_147;
}
}
block_182:
{
lean_object* x_181; 
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_175);
lean_ctor_set(x_181, 1, x_180);
x_60 = x_172;
x_61 = x_174;
x_62 = x_176;
x_63 = x_177;
x_64 = x_178;
x_65 = x_179;
x_66 = x_173;
x_67 = x_181;
goto block_101;
}
block_206:
{
uint8_t x_199; 
x_199 = lean_nat_dec_lt(x_185, x_195);
lean_dec(x_185);
if (x_199 == 0)
{
lean_dec_ref(x_198);
lean_dec(x_197);
lean_dec_ref(x_196);
lean_dec(x_195);
lean_dec(x_194);
x_172 = x_183;
x_173 = x_184;
x_174 = x_186;
x_175 = x_188;
x_176 = x_189;
x_177 = x_190;
x_178 = x_191;
x_179 = x_192;
x_180 = x_193;
goto block_182;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec_ref(x_193);
x_200 = lean_unsigned_to_nat(256u);
x_201 = lean_nat_mul(x_195, x_200);
x_202 = lean_nat_mod(x_184, x_201);
lean_dec(x_201);
x_203 = lean_box_uint32(x_187);
x_204 = lean_array_set(x_198, x_202, x_203);
lean_dec(x_202);
x_205 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_205, 0, x_194);
lean_ctor_set(x_205, 1, x_195);
lean_ctor_set(x_205, 2, x_196);
lean_ctor_set(x_205, 3, x_197);
lean_ctor_set(x_205, 4, x_204);
x_172 = x_183;
x_173 = x_184;
x_174 = x_186;
x_175 = x_188;
x_176 = x_189;
x_177 = x_190;
x_178 = x_191;
x_179 = x_192;
x_180 = x_205;
goto block_182;
}
}
block_217:
{
lean_object* x_216; 
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_209);
lean_ctor_set(x_216, 1, x_215);
x_60 = x_207;
x_61 = x_208;
x_62 = x_211;
x_63 = x_212;
x_64 = x_213;
x_65 = x_214;
x_66 = x_210;
x_67 = x_216;
goto block_101;
}
block_241:
{
uint8_t x_235; 
x_235 = lean_nat_dec_lt(x_220, x_231);
lean_dec(x_220);
if (x_235 == 0)
{
lean_dec_ref(x_234);
lean_dec(x_233);
lean_dec_ref(x_232);
lean_dec(x_231);
lean_dec(x_230);
x_207 = x_218;
x_208 = x_221;
x_209 = x_222;
x_210 = x_223;
x_211 = x_224;
x_212 = x_225;
x_213 = x_227;
x_214 = x_228;
x_215 = x_229;
goto block_217;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec_ref(x_229);
x_236 = lean_nat_mul(x_231, x_219);
x_237 = lean_nat_mod(x_223, x_236);
lean_dec(x_236);
x_238 = lean_box_uint32(x_226);
x_239 = lean_array_set(x_234, x_237, x_238);
lean_dec(x_237);
x_240 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_240, 0, x_230);
lean_ctor_set(x_240, 1, x_231);
lean_ctor_set(x_240, 2, x_232);
lean_ctor_set(x_240, 3, x_233);
lean_ctor_set(x_240, 4, x_239);
x_207 = x_218;
x_208 = x_221;
x_209 = x_222;
x_210 = x_223;
x_211 = x_224;
x_212 = x_225;
x_213 = x_227;
x_214 = x_228;
x_215 = x_240;
goto block_217;
}
}
block_284:
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; uint32_t x_270; lean_object* x_271; uint32_t x_272; uint8_t x_273; 
x_260 = lean_nat_add(x_256, x_242);
lean_dec(x_256);
x_261 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_261, 0, x_243);
lean_ctor_set(x_261, 1, x_260);
x_262 = lean_nat_sub(x_244, x_245);
lean_dec(x_244);
x_263 = lean_nat_sub(x_262, x_258);
lean_dec(x_262);
x_264 = lean_unsigned_to_nat(256u);
x_265 = lean_nat_mul(x_263, x_264);
lean_dec(x_263);
x_266 = lean_uint8_to_nat(x_259);
x_267 = lean_nat_add(x_265, x_266);
lean_dec(x_265);
x_268 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_269 = lean_array_get_borrowed(x_268, x_249, x_267);
lean_dec(x_267);
x_270 = lean_unbox_uint32(x_269);
x_271 = lean_uint32_to_nat(x_270);
x_272 = lean_uint32_of_nat(x_271);
x_273 = lean_nat_dec_lt(x_250, x_258);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_258);
lean_dec(x_253);
lean_dec_ref(x_252);
lean_dec(x_251);
lean_dec_ref(x_249);
x_274 = lean_ctor_get(x_257, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_257, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_257, 2);
lean_inc_ref(x_276);
x_277 = lean_ctor_get(x_257, 3);
lean_inc(x_277);
x_278 = lean_ctor_get(x_257, 4);
lean_inc_ref(x_278);
x_218 = x_242;
x_219 = x_264;
x_220 = x_250;
x_221 = x_246;
x_222 = x_261;
x_223 = x_271;
x_224 = x_247;
x_225 = x_254;
x_226 = x_272;
x_227 = x_255;
x_228 = x_248;
x_229 = x_257;
x_230 = x_274;
x_231 = x_275;
x_232 = x_276;
x_233 = x_277;
x_234 = x_278;
goto block_241;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; lean_object* x_283; 
lean_dec_ref(x_257);
x_279 = lean_box_uint32(x_272);
x_280 = lean_array_set(x_252, x_253, x_279);
x_281 = lean_nat_add(x_253, x_242);
lean_dec(x_253);
x_282 = lean_nat_mod(x_281, x_258);
lean_dec(x_281);
lean_inc_ref(x_249);
lean_inc(x_282);
lean_inc_ref(x_280);
lean_inc(x_251);
lean_inc(x_258);
x_283 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_283, 0, x_258);
lean_ctor_set(x_283, 1, x_251);
lean_ctor_set(x_283, 2, x_280);
lean_ctor_set(x_283, 3, x_282);
lean_ctor_set(x_283, 4, x_249);
x_218 = x_242;
x_219 = x_264;
x_220 = x_250;
x_221 = x_246;
x_222 = x_261;
x_223 = x_271;
x_224 = x_247;
x_225 = x_254;
x_226 = x_272;
x_227 = x_255;
x_228 = x_248;
x_229 = x_283;
x_230 = x_258;
x_231 = x_251;
x_232 = x_280;
x_233 = x_282;
x_234 = x_249;
goto block_241;
}
}
block_452:
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_288, 1);
lean_inc_ref(x_296);
lean_dec_ref(x_288);
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
lean_dec_ref(x_296);
if (lean_obj_tag(x_297) == 0)
{
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_290);
lean_dec(x_289);
lean_dec_ref(x_287);
lean_dec_ref(x_286);
lean_dec(x_285);
lean_dec(x_24);
x_37 = x_292;
x_38 = x_295;
x_39 = x_291;
goto block_42;
}
else
{
switch (lean_obj_tag(x_297)) {
case 0:
{
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_290);
lean_dec(x_289);
lean_dec_ref(x_287);
lean_dec_ref(x_286);
lean_dec(x_285);
lean_dec(x_24);
x_37 = x_292;
x_38 = x_295;
x_39 = x_291;
goto block_42;
}
case 1:
{
uint8_t x_298; 
lean_dec_ref(x_293);
lean_dec_ref(x_291);
lean_dec(x_289);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec(x_24);
x_298 = !lean_is_exclusive(x_290);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; uint8_t x_303; 
x_299 = lean_ctor_get(x_290, 0);
x_300 = lean_ctor_get(x_290, 1);
x_301 = lean_nat_add(x_300, x_294);
x_302 = lean_byte_array_size(x_299);
x_303 = lean_nat_dec_le(x_301, x_302);
if (x_303 == 0)
{
lean_object* x_304; 
lean_dec(x_301);
lean_free_object(x_290);
lean_dec(x_300);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_286);
lean_dec(x_28);
x_304 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_304;
}
else
{
lean_object* x_305; lean_object* x_306; 
x_305 = lean_byte_array_size(x_292);
x_306 = lean_byte_array_copy_slice(x_299, x_300, x_292, x_305, x_294, x_23);
lean_ctor_set(x_290, 1, x_301);
x_29 = x_306;
x_30 = x_295;
x_31 = x_290;
x_32 = x_286;
goto block_36;
}
}
else
{
lean_object* x_307; lean_object* x_308; lean_object* x_309; lean_object* x_310; uint8_t x_311; 
x_307 = lean_ctor_get(x_290, 0);
x_308 = lean_ctor_get(x_290, 1);
lean_inc(x_308);
lean_inc(x_307);
lean_dec(x_290);
x_309 = lean_nat_add(x_308, x_294);
x_310 = lean_byte_array_size(x_307);
x_311 = lean_nat_dec_le(x_309, x_310);
if (x_311 == 0)
{
lean_object* x_312; 
lean_dec(x_309);
lean_dec(x_308);
lean_dec_ref(x_307);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_286);
lean_dec(x_28);
x_312 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_312;
}
else
{
lean_object* x_313; lean_object* x_314; lean_object* x_315; 
x_313 = lean_byte_array_size(x_292);
x_314 = lean_byte_array_copy_slice(x_307, x_308, x_292, x_313, x_294, x_23);
x_315 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_315, 0, x_307);
lean_ctor_set(x_315, 1, x_309);
x_29 = x_314;
x_30 = x_295;
x_31 = x_315;
x_32 = x_286;
goto block_36;
}
}
}
case 2:
{
lean_object* x_316; lean_object* x_317; lean_object* x_318; uint8_t x_319; 
lean_dec_ref(x_293);
lean_dec_ref(x_291);
lean_dec(x_289);
lean_dec_ref(x_287);
x_316 = lean_ctor_get(x_290, 0);
lean_inc_ref(x_316);
x_317 = lean_ctor_get(x_290, 1);
lean_inc(x_317);
lean_dec_ref(x_290);
x_318 = lean_byte_array_size(x_316);
x_319 = lean_nat_dec_lt(x_317, x_318);
if (x_319 == 0)
{
lean_object* x_320; 
lean_dec(x_317);
lean_dec_ref(x_316);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_286);
lean_dec(x_285);
lean_dec(x_28);
lean_dec(x_24);
x_320 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_320;
}
else
{
if (x_319 == 0)
{
uint8_t x_321; lean_object* x_322; lean_object* x_323; uint8_t x_324; 
x_321 = l_instInhabitedUInt8;
x_322 = lean_box(x_321);
x_323 = l_outOfBounds___redArg(x_322);
x_324 = lean_unbox(x_323);
lean_dec(x_323);
x_43 = x_285;
x_44 = x_286;
x_45 = x_294;
x_46 = x_295;
x_47 = x_292;
x_48 = x_316;
x_49 = x_317;
x_50 = x_324;
goto block_59;
}
else
{
uint8_t x_325; 
x_325 = lean_byte_array_fget(x_316, x_317);
x_43 = x_285;
x_44 = x_286;
x_45 = x_294;
x_46 = x_295;
x_47 = x_292;
x_48 = x_316;
x_49 = x_317;
x_50 = x_325;
goto block_59;
}
}
}
default: 
{
uint8_t x_326; lean_object* x_327; uint8_t x_328; 
lean_dec_ref(x_291);
lean_dec_ref(x_286);
lean_dec(x_24);
x_326 = lean_ctor_get_uint8(x_297, 0);
lean_dec_ref(x_297);
x_327 = lean_uint8_to_nat(x_326);
x_328 = lean_nat_dec_eq(x_327, x_8);
if (x_328 == 0)
{
uint8_t x_329; 
x_329 = lean_nat_dec_eq(x_327, x_285);
if (x_329 == 0)
{
lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; lean_object* x_335; lean_object* x_336; uint8_t x_337; 
x_330 = lean_ctor_get(x_293, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_293, 1);
lean_inc(x_331);
x_332 = lean_ctor_get(x_293, 2);
lean_inc_ref(x_332);
x_333 = lean_ctor_get(x_293, 3);
lean_inc(x_333);
x_334 = lean_ctor_get(x_293, 4);
lean_inc_ref(x_334);
x_335 = lean_unsigned_to_nat(2u);
x_336 = lean_nat_add(x_335, x_330);
x_337 = lean_nat_dec_lt(x_327, x_336);
if (x_337 == 0)
{
lean_object* x_338; uint8_t x_339; 
x_338 = lean_nat_add(x_336, x_331);
lean_dec(x_336);
x_339 = lean_nat_dec_lt(x_327, x_338);
lean_dec(x_338);
if (x_339 == 0)
{
lean_object* x_340; lean_object* x_341; 
lean_dec_ref(x_334);
lean_dec(x_333);
lean_dec_ref(x_332);
lean_dec(x_331);
lean_dec(x_330);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_290);
lean_dec(x_289);
lean_dec_ref(x_287);
lean_dec(x_285);
lean_dec(x_28);
x_340 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_340, 0, x_327);
x_341 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_341, 0, x_340);
return x_341;
}
else
{
lean_object* x_342; lean_object* x_343; lean_object* x_344; uint8_t x_345; 
x_342 = lean_ctor_get(x_287, 0);
lean_inc_ref(x_342);
x_343 = lean_ctor_get(x_287, 1);
lean_inc(x_343);
lean_dec_ref(x_287);
x_344 = lean_byte_array_size(x_342);
x_345 = lean_nat_dec_lt(x_343, x_344);
if (x_345 == 0)
{
lean_object* x_346; 
lean_dec(x_343);
lean_dec_ref(x_342);
lean_dec_ref(x_334);
lean_dec(x_333);
lean_dec_ref(x_332);
lean_dec(x_331);
lean_dec(x_330);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_290);
lean_dec(x_289);
lean_dec(x_285);
lean_dec(x_28);
x_346 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_346;
}
else
{
if (x_345 == 0)
{
uint8_t x_347; lean_object* x_348; lean_object* x_349; uint8_t x_350; 
x_347 = l_instInhabitedUInt8;
x_348 = lean_box(x_347);
x_349 = l_outOfBounds___redArg(x_348);
x_350 = lean_unbox(x_349);
lean_dec(x_349);
x_242 = x_285;
x_243 = x_342;
x_244 = x_327;
x_245 = x_335;
x_246 = x_294;
x_247 = x_289;
x_248 = x_292;
x_249 = x_334;
x_250 = x_8;
x_251 = x_331;
x_252 = x_332;
x_253 = x_333;
x_254 = x_290;
x_255 = x_295;
x_256 = x_343;
x_257 = x_293;
x_258 = x_330;
x_259 = x_350;
goto block_284;
}
else
{
uint8_t x_351; 
x_351 = lean_byte_array_fget(x_342, x_343);
x_242 = x_285;
x_243 = x_342;
x_244 = x_327;
x_245 = x_335;
x_246 = x_294;
x_247 = x_289;
x_248 = x_292;
x_249 = x_334;
x_250 = x_8;
x_251 = x_331;
x_252 = x_332;
x_253 = x_333;
x_254 = x_290;
x_255 = x_295;
x_256 = x_343;
x_257 = x_293;
x_258 = x_330;
x_259 = x_351;
goto block_284;
}
}
}
}
else
{
lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; 
lean_dec(x_336);
x_352 = lean_ctor_get(x_287, 0);
lean_inc_ref(x_352);
x_353 = lean_ctor_get(x_287, 1);
lean_inc(x_353);
lean_dec_ref(x_287);
x_354 = lean_unsigned_to_nat(5u);
x_355 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_352, x_353, x_8, x_354);
if (lean_obj_tag(x_355) == 0)
{
uint8_t x_356; 
lean_dec_ref(x_334);
lean_dec(x_333);
lean_dec_ref(x_332);
lean_dec(x_331);
lean_dec(x_330);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_290);
lean_dec(x_289);
lean_dec(x_285);
lean_dec(x_28);
x_356 = !lean_is_exclusive(x_355);
if (x_356 == 0)
{
return x_355;
}
else
{
lean_object* x_357; lean_object* x_358; 
x_357 = lean_ctor_get(x_355, 0);
lean_inc(x_357);
lean_dec(x_355);
x_358 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_358, 0, x_357);
return x_358;
}
}
else
{
lean_object* x_359; lean_object* x_360; lean_object* x_361; lean_object* x_362; lean_object* x_363; lean_object* x_364; uint32_t x_365; lean_object* x_366; lean_object* x_367; uint32_t x_368; uint8_t x_369; 
x_359 = lean_ctor_get(x_355, 0);
lean_inc(x_359);
lean_dec_ref(x_355);
x_360 = lean_ctor_get(x_359, 0);
lean_inc(x_360);
x_361 = lean_ctor_get(x_359, 1);
lean_inc(x_361);
lean_dec(x_359);
x_362 = lean_nat_sub(x_327, x_335);
x_363 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_364 = lean_array_get_borrowed(x_363, x_332, x_362);
lean_dec(x_362);
x_365 = lean_unbox_uint32(x_364);
x_366 = lean_uint32_to_nat(x_365);
x_367 = lean_nat_add(x_366, x_360);
lean_dec(x_360);
lean_dec(x_366);
x_368 = lean_uint32_of_nat(x_367);
x_369 = lean_nat_dec_lt(x_8, x_330);
if (x_369 == 0)
{
x_183 = x_285;
x_184 = x_367;
x_185 = x_8;
x_186 = x_294;
x_187 = x_368;
x_188 = x_361;
x_189 = x_289;
x_190 = x_290;
x_191 = x_295;
x_192 = x_292;
x_193 = x_293;
x_194 = x_330;
x_195 = x_331;
x_196 = x_332;
x_197 = x_333;
x_198 = x_334;
goto block_206;
}
else
{
uint8_t x_370; 
x_370 = !lean_is_exclusive(x_293);
if (x_370 == 0)
{
lean_object* x_371; lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; lean_object* x_376; lean_object* x_377; lean_object* x_378; lean_object* x_379; 
x_371 = lean_ctor_get(x_293, 4);
lean_dec(x_371);
x_372 = lean_ctor_get(x_293, 3);
lean_dec(x_372);
x_373 = lean_ctor_get(x_293, 2);
lean_dec(x_373);
x_374 = lean_ctor_get(x_293, 1);
lean_dec(x_374);
x_375 = lean_ctor_get(x_293, 0);
lean_dec(x_375);
x_376 = lean_box_uint32(x_368);
x_377 = lean_array_set(x_332, x_333, x_376);
x_378 = lean_nat_add(x_333, x_285);
lean_dec(x_333);
x_379 = lean_nat_mod(x_378, x_330);
lean_dec(x_378);
lean_inc_ref(x_334);
lean_inc(x_379);
lean_inc_ref(x_377);
lean_inc(x_331);
lean_inc(x_330);
lean_ctor_set(x_293, 3, x_379);
lean_ctor_set(x_293, 2, x_377);
x_183 = x_285;
x_184 = x_367;
x_185 = x_8;
x_186 = x_294;
x_187 = x_368;
x_188 = x_361;
x_189 = x_289;
x_190 = x_290;
x_191 = x_295;
x_192 = x_292;
x_193 = x_293;
x_194 = x_330;
x_195 = x_331;
x_196 = x_377;
x_197 = x_379;
x_198 = x_334;
goto block_206;
}
else
{
lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; 
lean_dec(x_293);
x_380 = lean_box_uint32(x_368);
x_381 = lean_array_set(x_332, x_333, x_380);
x_382 = lean_nat_add(x_333, x_285);
lean_dec(x_333);
x_383 = lean_nat_mod(x_382, x_330);
lean_dec(x_382);
lean_inc_ref(x_334);
lean_inc(x_383);
lean_inc_ref(x_381);
lean_inc(x_331);
lean_inc(x_330);
x_384 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_384, 0, x_330);
lean_ctor_set(x_384, 1, x_331);
lean_ctor_set(x_384, 2, x_381);
lean_ctor_set(x_384, 3, x_383);
lean_ctor_set(x_384, 4, x_334);
x_183 = x_285;
x_184 = x_367;
x_185 = x_8;
x_186 = x_294;
x_187 = x_368;
x_188 = x_361;
x_189 = x_289;
x_190 = x_290;
x_191 = x_295;
x_192 = x_292;
x_193 = x_384;
x_194 = x_330;
x_195 = x_331;
x_196 = x_381;
x_197 = x_383;
x_198 = x_334;
goto block_206;
}
}
}
}
}
else
{
lean_object* x_385; lean_object* x_386; lean_object* x_387; lean_object* x_388; 
x_385 = lean_ctor_get(x_287, 0);
lean_inc_ref(x_385);
x_386 = lean_ctor_get(x_287, 1);
lean_inc(x_386);
lean_dec_ref(x_287);
x_387 = lean_unsigned_to_nat(5u);
x_388 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_385, x_386, x_8, x_387);
if (lean_obj_tag(x_388) == 0)
{
uint8_t x_389; 
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_290);
lean_dec(x_289);
lean_dec(x_285);
lean_dec(x_28);
x_389 = !lean_is_exclusive(x_388);
if (x_389 == 0)
{
return x_388;
}
else
{
lean_object* x_390; lean_object* x_391; 
x_390 = lean_ctor_get(x_388, 0);
lean_inc(x_390);
lean_dec(x_388);
x_391 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_391, 0, x_390);
return x_391;
}
}
else
{
lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; uint32_t x_403; uint8_t x_404; 
x_392 = lean_ctor_get(x_388, 0);
lean_inc(x_392);
lean_dec_ref(x_388);
x_393 = lean_ctor_get(x_392, 0);
lean_inc(x_393);
x_394 = lean_ctor_get(x_392, 1);
lean_inc(x_394);
lean_dec(x_392);
x_395 = lean_ctor_get(x_293, 0);
lean_inc(x_395);
x_396 = lean_ctor_get(x_293, 1);
lean_inc(x_396);
x_397 = lean_ctor_get(x_293, 2);
lean_inc_ref(x_397);
x_398 = lean_ctor_get(x_293, 3);
lean_inc(x_398);
x_399 = lean_ctor_get(x_293, 4);
lean_inc_ref(x_399);
x_400 = lean_byte_array_size(x_292);
x_401 = lean_nat_add(x_289, x_400);
x_402 = lean_nat_sub(x_401, x_393);
lean_dec(x_393);
lean_dec(x_401);
x_403 = lean_uint32_of_nat(x_402);
x_404 = lean_nat_dec_lt(x_8, x_395);
if (x_404 == 0)
{
x_148 = x_285;
x_149 = x_403;
x_150 = x_394;
x_151 = x_8;
x_152 = x_294;
x_153 = x_289;
x_154 = x_290;
x_155 = x_295;
x_156 = x_292;
x_157 = x_402;
x_158 = x_293;
x_159 = x_395;
x_160 = x_396;
x_161 = x_397;
x_162 = x_398;
x_163 = x_399;
goto block_171;
}
else
{
uint8_t x_405; 
x_405 = !lean_is_exclusive(x_293);
if (x_405 == 0)
{
lean_object* x_406; lean_object* x_407; lean_object* x_408; lean_object* x_409; lean_object* x_410; lean_object* x_411; lean_object* x_412; lean_object* x_413; lean_object* x_414; 
x_406 = lean_ctor_get(x_293, 4);
lean_dec(x_406);
x_407 = lean_ctor_get(x_293, 3);
lean_dec(x_407);
x_408 = lean_ctor_get(x_293, 2);
lean_dec(x_408);
x_409 = lean_ctor_get(x_293, 1);
lean_dec(x_409);
x_410 = lean_ctor_get(x_293, 0);
lean_dec(x_410);
x_411 = lean_box_uint32(x_403);
x_412 = lean_array_set(x_397, x_398, x_411);
x_413 = lean_nat_add(x_398, x_285);
lean_dec(x_398);
x_414 = lean_nat_mod(x_413, x_395);
lean_dec(x_413);
lean_inc_ref(x_399);
lean_inc(x_414);
lean_inc_ref(x_412);
lean_inc(x_396);
lean_inc(x_395);
lean_ctor_set(x_293, 3, x_414);
lean_ctor_set(x_293, 2, x_412);
x_148 = x_285;
x_149 = x_403;
x_150 = x_394;
x_151 = x_8;
x_152 = x_294;
x_153 = x_289;
x_154 = x_290;
x_155 = x_295;
x_156 = x_292;
x_157 = x_402;
x_158 = x_293;
x_159 = x_395;
x_160 = x_396;
x_161 = x_412;
x_162 = x_414;
x_163 = x_399;
goto block_171;
}
else
{
lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; 
lean_dec(x_293);
x_415 = lean_box_uint32(x_403);
x_416 = lean_array_set(x_397, x_398, x_415);
x_417 = lean_nat_add(x_398, x_285);
lean_dec(x_398);
x_418 = lean_nat_mod(x_417, x_395);
lean_dec(x_417);
lean_inc_ref(x_399);
lean_inc(x_418);
lean_inc_ref(x_416);
lean_inc(x_396);
lean_inc(x_395);
x_419 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_419, 0, x_395);
lean_ctor_set(x_419, 1, x_396);
lean_ctor_set(x_419, 2, x_416);
lean_ctor_set(x_419, 3, x_418);
lean_ctor_set(x_419, 4, x_399);
x_148 = x_285;
x_149 = x_403;
x_150 = x_394;
x_151 = x_8;
x_152 = x_294;
x_153 = x_289;
x_154 = x_290;
x_155 = x_295;
x_156 = x_292;
x_157 = x_402;
x_158 = x_419;
x_159 = x_395;
x_160 = x_396;
x_161 = x_416;
x_162 = x_418;
x_163 = x_399;
goto block_171;
}
}
}
}
}
else
{
lean_object* x_420; lean_object* x_421; lean_object* x_422; lean_object* x_423; 
x_420 = lean_ctor_get(x_287, 0);
lean_inc_ref(x_420);
x_421 = lean_ctor_get(x_287, 1);
lean_inc(x_421);
lean_dec_ref(x_287);
x_422 = lean_unsigned_to_nat(5u);
x_423 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_420, x_421, x_8, x_422);
if (lean_obj_tag(x_423) == 0)
{
uint8_t x_424; 
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_290);
lean_dec(x_289);
lean_dec(x_285);
lean_dec(x_28);
x_424 = !lean_is_exclusive(x_423);
if (x_424 == 0)
{
return x_423;
}
else
{
lean_object* x_425; lean_object* x_426; 
x_425 = lean_ctor_get(x_423, 0);
lean_inc(x_425);
lean_dec(x_423);
x_426 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_426, 0, x_425);
return x_426;
}
}
else
{
lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; uint32_t x_435; uint8_t x_436; 
x_427 = lean_ctor_get(x_423, 0);
lean_inc(x_427);
lean_dec_ref(x_423);
x_428 = lean_ctor_get(x_427, 0);
lean_inc(x_428);
x_429 = lean_ctor_get(x_427, 1);
lean_inc(x_429);
lean_dec(x_427);
x_430 = lean_ctor_get(x_293, 0);
lean_inc(x_430);
x_431 = lean_ctor_get(x_293, 1);
lean_inc(x_431);
x_432 = lean_ctor_get(x_293, 2);
lean_inc_ref(x_432);
x_433 = lean_ctor_get(x_293, 3);
lean_inc(x_433);
x_434 = lean_ctor_get(x_293, 4);
lean_inc_ref(x_434);
x_435 = lean_uint32_of_nat(x_428);
x_436 = lean_nat_dec_lt(x_8, x_430);
if (x_436 == 0)
{
x_113 = x_285;
x_114 = x_428;
x_115 = x_429;
x_116 = x_8;
x_117 = x_294;
x_118 = x_289;
x_119 = x_435;
x_120 = x_290;
x_121 = x_295;
x_122 = x_292;
x_123 = x_293;
x_124 = x_430;
x_125 = x_431;
x_126 = x_432;
x_127 = x_433;
x_128 = x_434;
goto block_136;
}
else
{
uint8_t x_437; 
x_437 = !lean_is_exclusive(x_293);
if (x_437 == 0)
{
lean_object* x_438; lean_object* x_439; lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; lean_object* x_444; lean_object* x_445; lean_object* x_446; 
x_438 = lean_ctor_get(x_293, 4);
lean_dec(x_438);
x_439 = lean_ctor_get(x_293, 3);
lean_dec(x_439);
x_440 = lean_ctor_get(x_293, 2);
lean_dec(x_440);
x_441 = lean_ctor_get(x_293, 1);
lean_dec(x_441);
x_442 = lean_ctor_get(x_293, 0);
lean_dec(x_442);
x_443 = lean_box_uint32(x_435);
x_444 = lean_array_set(x_432, x_433, x_443);
x_445 = lean_nat_add(x_433, x_285);
lean_dec(x_433);
x_446 = lean_nat_mod(x_445, x_430);
lean_dec(x_445);
lean_inc_ref(x_434);
lean_inc(x_446);
lean_inc_ref(x_444);
lean_inc(x_431);
lean_inc(x_430);
lean_ctor_set(x_293, 3, x_446);
lean_ctor_set(x_293, 2, x_444);
x_113 = x_285;
x_114 = x_428;
x_115 = x_429;
x_116 = x_8;
x_117 = x_294;
x_118 = x_289;
x_119 = x_435;
x_120 = x_290;
x_121 = x_295;
x_122 = x_292;
x_123 = x_293;
x_124 = x_430;
x_125 = x_431;
x_126 = x_444;
x_127 = x_446;
x_128 = x_434;
goto block_136;
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; 
lean_dec(x_293);
x_447 = lean_box_uint32(x_435);
x_448 = lean_array_set(x_432, x_433, x_447);
x_449 = lean_nat_add(x_433, x_285);
lean_dec(x_433);
x_450 = lean_nat_mod(x_449, x_430);
lean_dec(x_449);
lean_inc_ref(x_434);
lean_inc(x_450);
lean_inc_ref(x_448);
lean_inc(x_431);
lean_inc(x_430);
x_451 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_451, 0, x_430);
lean_ctor_set(x_451, 1, x_431);
lean_ctor_set(x_451, 2, x_448);
lean_ctor_set(x_451, 3, x_450);
lean_ctor_set(x_451, 4, x_434);
x_113 = x_285;
x_114 = x_428;
x_115 = x_429;
x_116 = x_8;
x_117 = x_294;
x_118 = x_289;
x_119 = x_435;
x_120 = x_290;
x_121 = x_295;
x_122 = x_292;
x_123 = x_451;
x_124 = x_430;
x_125 = x_431;
x_126 = x_448;
x_127 = x_450;
x_128 = x_434;
goto block_136;
}
}
}
}
}
}
}
}
block_475:
{
if (x_464 == 0)
{
x_285 = x_453;
x_286 = x_454;
x_287 = x_456;
x_288 = x_457;
x_289 = x_458;
x_290 = x_460;
x_291 = x_461;
x_292 = x_462;
x_293 = x_463;
x_294 = x_459;
x_295 = x_455;
goto block_452;
}
else
{
lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; 
lean_dec(x_459);
x_465 = lean_ctor_get(x_455, 0);
lean_inc_ref(x_465);
x_466 = lean_ctor_get(x_455, 1);
lean_inc(x_466);
lean_dec_ref(x_455);
x_467 = lean_unsigned_to_nat(5u);
x_468 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_465, x_466, x_8, x_467);
if (lean_obj_tag(x_468) == 0)
{
uint8_t x_469; 
lean_dec_ref(x_463);
lean_dec_ref(x_462);
lean_dec_ref(x_461);
lean_dec_ref(x_460);
lean_dec(x_458);
lean_dec_ref(x_457);
lean_dec_ref(x_456);
lean_dec_ref(x_454);
lean_dec(x_453);
lean_dec(x_28);
lean_dec(x_24);
x_469 = !lean_is_exclusive(x_468);
if (x_469 == 0)
{
return x_468;
}
else
{
lean_object* x_470; lean_object* x_471; 
x_470 = lean_ctor_get(x_468, 0);
lean_inc(x_470);
lean_dec(x_468);
x_471 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_471, 0, x_470);
return x_471;
}
}
else
{
lean_object* x_472; lean_object* x_473; lean_object* x_474; 
x_472 = lean_ctor_get(x_468, 0);
lean_inc(x_472);
lean_dec_ref(x_468);
x_473 = lean_ctor_get(x_472, 0);
lean_inc(x_473);
x_474 = lean_ctor_get(x_472, 1);
lean_inc(x_474);
lean_dec(x_472);
x_285 = x_453;
x_286 = x_454;
x_287 = x_456;
x_288 = x_457;
x_289 = x_458;
x_290 = x_460;
x_291 = x_461;
x_292 = x_462;
x_293 = x_463;
x_294 = x_473;
x_295 = x_474;
goto block_452;
}
}
}
block_490:
{
lean_object* x_487; lean_object* x_488; uint8_t x_489; 
x_487 = lean_ctor_get(x_479, 0);
lean_inc(x_487);
x_488 = lean_ctor_get(x_479, 1);
lean_inc(x_488);
lean_dec_ref(x_479);
x_489 = lean_nat_dec_eq(x_488, x_8);
if (x_489 == 0)
{
lean_dec(x_487);
x_453 = x_476;
x_454 = x_484;
x_455 = x_477;
x_456 = x_485;
x_457 = x_478;
x_458 = x_480;
x_459 = x_488;
x_460 = x_483;
x_461 = x_482;
x_462 = x_481;
x_463 = x_486;
x_464 = x_489;
goto block_475;
}
else
{
if (lean_obj_tag(x_487) == 0)
{
if (x_489 == 0)
{
x_453 = x_476;
x_454 = x_484;
x_455 = x_477;
x_456 = x_485;
x_457 = x_478;
x_458 = x_480;
x_459 = x_488;
x_460 = x_483;
x_461 = x_482;
x_462 = x_481;
x_463 = x_486;
x_464 = x_489;
goto block_475;
}
else
{
lean_dec(x_488);
lean_dec_ref(x_486);
lean_dec_ref(x_485);
lean_dec_ref(x_484);
lean_dec_ref(x_483);
lean_dec(x_480);
lean_dec_ref(x_478);
lean_dec(x_476);
lean_dec(x_24);
x_37 = x_481;
x_38 = x_477;
x_39 = x_482;
goto block_42;
}
}
else
{
lean_dec(x_487);
x_453 = x_476;
x_454 = x_484;
x_455 = x_477;
x_456 = x_485;
x_457 = x_478;
x_458 = x_480;
x_459 = x_488;
x_460 = x_483;
x_461 = x_482;
x_462 = x_481;
x_463 = x_486;
x_464 = x_489;
goto block_475;
}
}
}
block_502:
{
lean_object* x_501; 
x_501 = lean_ctor_get(x_493, 1);
lean_inc_ref(x_501);
x_476 = x_491;
x_477 = x_492;
x_478 = x_493;
x_479 = x_501;
x_480 = x_494;
x_481 = x_495;
x_482 = x_496;
x_483 = x_497;
x_484 = x_498;
x_485 = x_499;
x_486 = x_500;
goto block_490;
}
block_521:
{
lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; lean_object* x_516; lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; 
x_511 = lean_nat_add(x_506, x_504);
lean_dec(x_506);
x_512 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_512, 0, x_507);
lean_ctor_set(x_512, 1, x_511);
x_513 = lean_box(x_510);
x_514 = lean_mk_array(x_503, x_513);
x_515 = lean_byte_array_mk(x_514);
x_516 = lean_byte_array_size(x_3);
x_517 = lean_byte_array_size(x_515);
x_518 = lean_byte_array_copy_slice(x_515, x_8, x_3, x_516, x_517, x_23);
lean_dec_ref(x_515);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_519 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_519, 0, x_6);
lean_ctor_set(x_519, 1, x_7);
lean_inc_ref(x_519);
lean_inc_ref(x_512);
x_520 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_520, 0, x_512);
lean_ctor_set(x_520, 1, x_519);
x_491 = x_504;
x_492 = x_505;
x_493 = x_508;
x_494 = x_509;
x_495 = x_518;
x_496 = x_520;
x_497 = x_512;
x_498 = x_519;
x_499 = x_6;
x_500 = x_7;
goto block_502;
}
block_531:
{
lean_object* x_528; lean_object* x_529; lean_object* x_530; 
x_528 = lean_ctor_get(x_526, 0);
lean_inc(x_528);
x_529 = lean_ctor_get(x_526, 1);
lean_inc(x_529);
lean_inc_ref(x_526);
lean_inc_ref(x_5);
x_530 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_530, 0, x_5);
lean_ctor_set(x_530, 1, x_526);
x_491 = x_522;
x_492 = x_523;
x_493 = x_524;
x_494 = x_525;
x_495 = x_527;
x_496 = x_530;
x_497 = x_5;
x_498 = x_526;
x_499 = x_528;
x_500 = x_529;
goto block_502;
}
block_572:
{
lean_object* x_539; lean_object* x_540; uint8_t x_541; 
x_539 = lean_byte_array_size(x_3);
x_540 = lean_nat_add(x_536, x_539);
x_541 = lean_nat_dec_le(x_540, x_537);
if (x_541 == 0)
{
lean_object* x_542; uint8_t x_543; 
lean_dec(x_540);
x_542 = lean_nat_add(x_537, x_532);
x_543 = lean_nat_dec_le(x_542, x_536);
if (x_543 == 0)
{
uint8_t x_544; 
lean_dec(x_542);
x_544 = lean_nat_dec_le(x_536, x_537);
if (x_544 == 0)
{
lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; lean_object* x_550; lean_object* x_551; uint8_t x_552; 
x_545 = lean_nat_sub(x_536, x_537);
x_546 = lean_nat_sub(x_532, x_545);
lean_dec(x_545);
lean_dec(x_532);
x_547 = l_ByteArray_extract(x_1, x_537, x_536);
x_548 = lean_byte_array_size(x_547);
x_549 = lean_byte_array_copy_slice(x_547, x_8, x_3, x_539, x_548, x_23);
lean_dec_ref(x_547);
x_550 = lean_byte_array_size(x_549);
x_551 = lean_nat_sub(x_550, x_536);
x_552 = lean_nat_dec_le(x_546, x_551);
lean_dec(x_551);
if (x_552 == 0)
{
lean_object* x_553; lean_object* x_554; 
lean_inc(x_533);
x_553 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_553, 0, x_8);
lean_ctor_set(x_553, 1, x_546);
lean_ctor_set(x_553, 2, x_533);
x_554 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_536, x_1, x_553, x_549, x_8);
lean_dec_ref(x_553);
x_522 = x_533;
x_523 = x_534;
x_524 = x_535;
x_525 = x_536;
x_526 = x_538;
x_527 = x_554;
goto block_531;
}
else
{
lean_object* x_555; lean_object* x_556; lean_object* x_557; lean_object* x_558; 
x_555 = lean_nat_add(x_536, x_546);
lean_dec(x_546);
lean_inc(x_536);
x_556 = l_ByteArray_extract(x_549, x_536, x_555);
lean_dec(x_555);
x_557 = lean_byte_array_size(x_556);
x_558 = lean_byte_array_copy_slice(x_556, x_8, x_549, x_550, x_557, x_23);
lean_dec_ref(x_556);
x_522 = x_533;
x_523 = x_534;
x_524 = x_535;
x_525 = x_536;
x_526 = x_538;
x_527 = x_558;
goto block_531;
}
}
else
{
lean_object* x_559; lean_object* x_560; uint8_t x_561; 
x_559 = lean_nat_sub(x_537, x_536);
lean_dec(x_537);
x_560 = lean_nat_add(x_559, x_532);
x_561 = lean_nat_dec_le(x_560, x_539);
if (x_561 == 0)
{
lean_object* x_562; lean_object* x_563; 
lean_dec(x_560);
lean_inc(x_533);
x_562 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_562, 0, x_8);
lean_ctor_set(x_562, 1, x_532);
lean_ctor_set(x_562, 2, x_533);
x_563 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_559, x_562, x_3, x_8);
lean_dec_ref(x_562);
lean_dec(x_559);
x_522 = x_533;
x_523 = x_534;
x_524 = x_535;
x_525 = x_536;
x_526 = x_538;
x_527 = x_563;
goto block_531;
}
else
{
lean_object* x_564; lean_object* x_565; lean_object* x_566; 
lean_dec(x_532);
x_564 = l_ByteArray_extract(x_3, x_559, x_560);
lean_dec(x_560);
x_565 = lean_byte_array_size(x_564);
x_566 = lean_byte_array_copy_slice(x_564, x_8, x_3, x_539, x_565, x_23);
lean_dec_ref(x_564);
x_522 = x_533;
x_523 = x_534;
x_524 = x_535;
x_525 = x_536;
x_526 = x_538;
x_527 = x_566;
goto block_531;
}
}
}
else
{
lean_object* x_567; lean_object* x_568; lean_object* x_569; 
lean_dec(x_532);
x_567 = l_ByteArray_extract(x_1, x_537, x_542);
lean_dec(x_542);
x_568 = lean_byte_array_size(x_567);
x_569 = lean_byte_array_copy_slice(x_567, x_8, x_3, x_539, x_568, x_23);
lean_dec_ref(x_567);
x_522 = x_533;
x_523 = x_534;
x_524 = x_535;
x_525 = x_536;
x_526 = x_538;
x_527 = x_569;
goto block_531;
}
}
else
{
lean_object* x_570; lean_object* x_571; 
lean_dec_ref(x_538);
lean_dec(x_536);
lean_dec_ref(x_535);
lean_dec_ref(x_534);
lean_dec(x_533);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_570 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_570, 0, x_537);
lean_ctor_set(x_570, 1, x_532);
lean_ctor_set(x_570, 2, x_540);
x_571 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_571, 0, x_570);
return x_571;
}
}
block_582:
{
lean_object* x_581; 
x_581 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_581, 0, x_576);
lean_ctor_set(x_581, 1, x_580);
x_532 = x_574;
x_533 = x_573;
x_534 = x_575;
x_535 = x_577;
x_536 = x_578;
x_537 = x_579;
x_538 = x_581;
goto block_572;
}
block_605:
{
uint8_t x_599; 
x_599 = lean_nat_dec_lt(x_588, x_595);
lean_dec(x_588);
if (x_599 == 0)
{
lean_dec_ref(x_598);
lean_dec(x_597);
lean_dec_ref(x_596);
lean_dec(x_595);
lean_dec(x_594);
x_573 = x_584;
x_574 = x_583;
x_575 = x_586;
x_576 = x_585;
x_577 = x_587;
x_578 = x_591;
x_579 = x_592;
x_580 = x_593;
goto block_582;
}
else
{
lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; 
lean_dec_ref(x_593);
x_600 = lean_nat_mul(x_595, x_590);
x_601 = lean_nat_mod(x_592, x_600);
lean_dec(x_600);
x_602 = lean_box_uint32(x_589);
x_603 = lean_array_set(x_598, x_601, x_602);
lean_dec(x_601);
x_604 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_604, 0, x_594);
lean_ctor_set(x_604, 1, x_595);
lean_ctor_set(x_604, 2, x_596);
lean_ctor_set(x_604, 3, x_597);
lean_ctor_set(x_604, 4, x_603);
x_573 = x_584;
x_574 = x_583;
x_575 = x_586;
x_576 = x_585;
x_577 = x_587;
x_578 = x_591;
x_579 = x_592;
x_580 = x_604;
goto block_582;
}
}
block_646:
{
lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; uint32_t x_632; lean_object* x_633; uint32_t x_634; uint8_t x_635; 
x_622 = lean_nat_add(x_618, x_606);
lean_dec(x_618);
x_623 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_623, 0, x_607);
lean_ctor_set(x_623, 1, x_622);
x_624 = lean_nat_sub(x_620, x_615);
lean_dec(x_620);
x_625 = lean_nat_sub(x_624, x_608);
lean_dec(x_624);
x_626 = lean_unsigned_to_nat(256u);
x_627 = lean_nat_mul(x_625, x_626);
lean_dec(x_625);
x_628 = lean_uint8_to_nat(x_621);
x_629 = lean_nat_add(x_627, x_628);
lean_dec(x_627);
x_630 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_631 = lean_array_get_borrowed(x_630, x_612, x_629);
lean_dec(x_629);
x_632 = lean_unbox_uint32(x_631);
x_633 = lean_uint32_to_nat(x_632);
x_634 = lean_uint32_of_nat(x_633);
x_635 = lean_nat_dec_lt(x_619, x_608);
if (x_635 == 0)
{
lean_object* x_636; lean_object* x_637; lean_object* x_638; lean_object* x_639; lean_object* x_640; 
lean_dec(x_613);
lean_dec_ref(x_612);
lean_dec_ref(x_610);
lean_dec(x_609);
lean_dec(x_608);
x_636 = lean_ctor_get(x_7, 0);
lean_inc(x_636);
x_637 = lean_ctor_get(x_7, 1);
lean_inc(x_637);
x_638 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_638);
x_639 = lean_ctor_get(x_7, 3);
lean_inc(x_639);
x_640 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_640);
x_583 = x_616;
x_584 = x_606;
x_585 = x_623;
x_586 = x_617;
x_587 = x_611;
x_588 = x_619;
x_589 = x_634;
x_590 = x_626;
x_591 = x_614;
x_592 = x_633;
x_593 = x_7;
x_594 = x_636;
x_595 = x_637;
x_596 = x_638;
x_597 = x_639;
x_598 = x_640;
goto block_605;
}
else
{
lean_object* x_641; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; 
lean_dec_ref(x_7);
x_641 = lean_box_uint32(x_634);
x_642 = lean_array_set(x_610, x_613, x_641);
x_643 = lean_nat_add(x_613, x_606);
lean_dec(x_613);
x_644 = lean_nat_mod(x_643, x_608);
lean_dec(x_643);
lean_inc_ref(x_612);
lean_inc(x_644);
lean_inc_ref(x_642);
lean_inc(x_609);
lean_inc(x_608);
x_645 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_645, 0, x_608);
lean_ctor_set(x_645, 1, x_609);
lean_ctor_set(x_645, 2, x_642);
lean_ctor_set(x_645, 3, x_644);
lean_ctor_set(x_645, 4, x_612);
x_583 = x_616;
x_584 = x_606;
x_585 = x_623;
x_586 = x_617;
x_587 = x_611;
x_588 = x_619;
x_589 = x_634;
x_590 = x_626;
x_591 = x_614;
x_592 = x_633;
x_593 = x_645;
x_594 = x_608;
x_595 = x_609;
x_596 = x_642;
x_597 = x_644;
x_598 = x_612;
goto block_605;
}
}
block_656:
{
lean_object* x_655; 
x_655 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_655, 0, x_653);
lean_ctor_set(x_655, 1, x_654);
x_532 = x_648;
x_533 = x_647;
x_534 = x_649;
x_535 = x_650;
x_536 = x_651;
x_537 = x_652;
x_538 = x_655;
goto block_572;
}
block_679:
{
uint8_t x_672; 
x_672 = lean_nat_dec_lt(x_661, x_668);
lean_dec(x_661);
if (x_672 == 0)
{
lean_dec_ref(x_671);
lean_dec(x_670);
lean_dec_ref(x_669);
lean_dec(x_668);
lean_dec(x_667);
x_647 = x_658;
x_648 = x_657;
x_649 = x_659;
x_650 = x_660;
x_651 = x_663;
x_652 = x_662;
x_653 = x_665;
x_654 = x_666;
goto block_656;
}
else
{
lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_678; 
lean_dec_ref(x_666);
x_673 = lean_unsigned_to_nat(256u);
x_674 = lean_nat_mul(x_668, x_673);
x_675 = lean_nat_mod(x_662, x_674);
lean_dec(x_674);
x_676 = lean_box_uint32(x_664);
x_677 = lean_array_set(x_671, x_675, x_676);
lean_dec(x_675);
x_678 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_678, 0, x_667);
lean_ctor_set(x_678, 1, x_668);
lean_ctor_set(x_678, 2, x_669);
lean_ctor_set(x_678, 3, x_670);
lean_ctor_set(x_678, 4, x_677);
x_647 = x_658;
x_648 = x_657;
x_649 = x_659;
x_650 = x_660;
x_651 = x_663;
x_652 = x_662;
x_653 = x_665;
x_654 = x_678;
goto block_656;
}
}
block_689:
{
lean_object* x_688; 
x_688 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_688, 0, x_686);
lean_ctor_set(x_688, 1, x_687);
x_532 = x_681;
x_533 = x_680;
x_534 = x_682;
x_535 = x_684;
x_536 = x_685;
x_537 = x_683;
x_538 = x_688;
goto block_572;
}
block_712:
{
uint8_t x_705; 
x_705 = lean_nat_dec_lt(x_696, x_701);
lean_dec(x_696);
if (x_705 == 0)
{
lean_dec_ref(x_704);
lean_dec(x_703);
lean_dec_ref(x_702);
lean_dec(x_701);
lean_dec(x_700);
x_680 = x_691;
x_681 = x_690;
x_682 = x_692;
x_683 = x_693;
x_684 = x_695;
x_685 = x_697;
x_686 = x_698;
x_687 = x_699;
goto block_689;
}
else
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_711; 
lean_dec_ref(x_699);
x_706 = lean_unsigned_to_nat(256u);
x_707 = lean_nat_mul(x_701, x_706);
x_708 = lean_nat_mod(x_693, x_707);
lean_dec(x_707);
x_709 = lean_box_uint32(x_694);
x_710 = lean_array_set(x_704, x_708, x_709);
lean_dec(x_708);
x_711 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_711, 0, x_700);
lean_ctor_set(x_711, 1, x_701);
lean_ctor_set(x_711, 2, x_702);
lean_ctor_set(x_711, 3, x_703);
lean_ctor_set(x_711, 4, x_710);
x_680 = x_691;
x_681 = x_690;
x_682 = x_692;
x_683 = x_693;
x_684 = x_695;
x_685 = x_697;
x_686 = x_698;
x_687 = x_711;
goto block_689;
}
}
block_722:
{
lean_object* x_721; 
x_721 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_721, 0, x_717);
lean_ctor_set(x_721, 1, x_720);
x_532 = x_714;
x_533 = x_713;
x_534 = x_715;
x_535 = x_718;
x_536 = x_719;
x_537 = x_716;
x_538 = x_721;
goto block_572;
}
block_745:
{
uint8_t x_738; 
x_738 = lean_nat_dec_lt(x_729, x_734);
lean_dec(x_729);
if (x_738 == 0)
{
lean_dec_ref(x_737);
lean_dec(x_736);
lean_dec_ref(x_735);
lean_dec(x_734);
lean_dec(x_733);
x_713 = x_724;
x_714 = x_723;
x_715 = x_725;
x_716 = x_726;
x_717 = x_727;
x_718 = x_728;
x_719 = x_731;
x_720 = x_732;
goto block_722;
}
else
{
lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; 
lean_dec_ref(x_732);
x_739 = lean_unsigned_to_nat(256u);
x_740 = lean_nat_mul(x_734, x_739);
x_741 = lean_nat_mod(x_726, x_740);
lean_dec(x_740);
x_742 = lean_box_uint32(x_730);
x_743 = lean_array_set(x_737, x_741, x_742);
lean_dec(x_741);
x_744 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_744, 0, x_733);
lean_ctor_set(x_744, 1, x_734);
lean_ctor_set(x_744, 2, x_735);
lean_ctor_set(x_744, 3, x_736);
lean_ctor_set(x_744, 4, x_743);
x_713 = x_724;
x_714 = x_723;
x_715 = x_725;
x_716 = x_726;
x_717 = x_727;
x_718 = x_728;
x_719 = x_731;
x_720 = x_744;
goto block_722;
}
}
block_1042:
{
lean_object* x_750; uint8_t x_751; 
x_750 = lean_ctor_get(x_747, 0);
lean_inc_ref(x_750);
x_751 = !lean_is_exclusive(x_750);
if (x_751 == 0)
{
lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; 
x_752 = lean_ctor_get(x_747, 1);
x_753 = lean_ctor_get(x_750, 0);
x_754 = lean_ctor_get(x_750, 1);
lean_dec(x_754);
x_755 = lean_byte_array_size(x_1);
if (lean_obj_tag(x_753) == 0)
{
lean_object* x_756; 
lean_inc_ref(x_752);
lean_dec(x_748);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_750, 1, x_7);
lean_ctor_set(x_750, 0, x_6);
lean_inc_ref(x_750);
lean_inc_ref(x_5);
x_756 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_756, 0, x_5);
lean_ctor_set(x_756, 1, x_750);
x_476 = x_746;
x_477 = x_749;
x_478 = x_747;
x_479 = x_752;
x_480 = x_755;
x_481 = x_3;
x_482 = x_756;
x_483 = x_5;
x_484 = x_750;
x_485 = x_6;
x_486 = x_7;
goto block_490;
}
else
{
switch (lean_obj_tag(x_753)) {
case 0:
{
lean_object* x_757; 
lean_inc_ref(x_752);
lean_dec(x_748);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_750, 1, x_7);
lean_ctor_set(x_750, 0, x_6);
lean_inc_ref(x_750);
lean_inc_ref(x_5);
x_757 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_757, 0, x_5);
lean_ctor_set(x_757, 1, x_750);
x_476 = x_746;
x_477 = x_749;
x_478 = x_747;
x_479 = x_752;
x_480 = x_755;
x_481 = x_3;
x_482 = x_757;
x_483 = x_5;
x_484 = x_750;
x_485 = x_6;
x_486 = x_7;
goto block_490;
}
case 1:
{
uint8_t x_758; 
lean_inc_ref(x_752);
x_758 = !lean_is_exclusive(x_5);
if (x_758 == 0)
{
lean_object* x_759; lean_object* x_760; lean_object* x_761; lean_object* x_762; uint8_t x_763; 
x_759 = lean_ctor_get(x_5, 0);
x_760 = lean_ctor_get(x_5, 1);
x_761 = lean_nat_add(x_760, x_748);
x_762 = lean_byte_array_size(x_759);
x_763 = lean_nat_dec_le(x_761, x_762);
if (x_763 == 0)
{
lean_object* x_764; 
lean_dec(x_761);
lean_free_object(x_5);
lean_dec(x_760);
lean_dec_ref(x_759);
lean_free_object(x_750);
lean_dec_ref(x_752);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_764 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_764;
}
else
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; 
x_765 = lean_byte_array_size(x_3);
x_766 = lean_byte_array_copy_slice(x_759, x_760, x_3, x_765, x_748, x_23);
lean_ctor_set(x_5, 1, x_761);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_750, 1, x_7);
lean_ctor_set(x_750, 0, x_6);
lean_inc_ref(x_750);
lean_inc_ref(x_5);
x_767 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_767, 0, x_5);
lean_ctor_set(x_767, 1, x_750);
x_476 = x_746;
x_477 = x_749;
x_478 = x_747;
x_479 = x_752;
x_480 = x_755;
x_481 = x_766;
x_482 = x_767;
x_483 = x_5;
x_484 = x_750;
x_485 = x_6;
x_486 = x_7;
goto block_490;
}
}
else
{
lean_object* x_768; lean_object* x_769; lean_object* x_770; lean_object* x_771; uint8_t x_772; 
x_768 = lean_ctor_get(x_5, 0);
x_769 = lean_ctor_get(x_5, 1);
lean_inc(x_769);
lean_inc(x_768);
lean_dec(x_5);
x_770 = lean_nat_add(x_769, x_748);
x_771 = lean_byte_array_size(x_768);
x_772 = lean_nat_dec_le(x_770, x_771);
if (x_772 == 0)
{
lean_object* x_773; 
lean_dec(x_770);
lean_dec(x_769);
lean_dec_ref(x_768);
lean_free_object(x_750);
lean_dec_ref(x_752);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_773 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_773;
}
else
{
lean_object* x_774; lean_object* x_775; lean_object* x_776; lean_object* x_777; 
x_774 = lean_byte_array_size(x_3);
x_775 = lean_byte_array_copy_slice(x_768, x_769, x_3, x_774, x_748, x_23);
x_776 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_776, 0, x_768);
lean_ctor_set(x_776, 1, x_770);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_750, 1, x_7);
lean_ctor_set(x_750, 0, x_6);
lean_inc_ref(x_750);
lean_inc_ref(x_776);
x_777 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_777, 0, x_776);
lean_ctor_set(x_777, 1, x_750);
x_476 = x_746;
x_477 = x_749;
x_478 = x_747;
x_479 = x_752;
x_480 = x_755;
x_481 = x_775;
x_482 = x_777;
x_483 = x_776;
x_484 = x_750;
x_485 = x_6;
x_486 = x_7;
goto block_490;
}
}
}
case 2:
{
lean_object* x_778; lean_object* x_779; lean_object* x_780; uint8_t x_781; 
lean_free_object(x_750);
x_778 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_778);
x_779 = lean_ctor_get(x_5, 1);
lean_inc(x_779);
lean_dec_ref(x_5);
x_780 = lean_byte_array_size(x_778);
x_781 = lean_nat_dec_lt(x_779, x_780);
if (x_781 == 0)
{
lean_object* x_782; 
lean_dec(x_779);
lean_dec_ref(x_778);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_782 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_782;
}
else
{
if (x_781 == 0)
{
uint8_t x_783; lean_object* x_784; lean_object* x_785; uint8_t x_786; 
x_783 = l_instInhabitedUInt8;
x_784 = lean_box(x_783);
x_785 = l_outOfBounds___redArg(x_784);
x_786 = lean_unbox(x_785);
lean_dec(x_785);
x_503 = x_748;
x_504 = x_746;
x_505 = x_749;
x_506 = x_779;
x_507 = x_778;
x_508 = x_747;
x_509 = x_755;
x_510 = x_786;
goto block_521;
}
else
{
uint8_t x_787; 
x_787 = lean_byte_array_fget(x_778, x_779);
x_503 = x_748;
x_504 = x_746;
x_505 = x_749;
x_506 = x_779;
x_507 = x_778;
x_508 = x_747;
x_509 = x_755;
x_510 = x_787;
goto block_521;
}
}
}
default: 
{
uint8_t x_788; lean_object* x_789; uint8_t x_790; 
lean_free_object(x_750);
x_788 = lean_ctor_get_uint8(x_753, 0);
lean_dec_ref(x_753);
x_789 = lean_uint8_to_nat(x_788);
x_790 = lean_nat_dec_eq(x_789, x_8);
if (x_790 == 0)
{
uint8_t x_791; 
x_791 = lean_nat_dec_eq(x_789, x_746);
if (x_791 == 0)
{
lean_object* x_792; lean_object* x_793; lean_object* x_794; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; uint8_t x_799; 
x_792 = lean_ctor_get(x_7, 0);
x_793 = lean_ctor_get(x_7, 1);
x_794 = lean_ctor_get(x_7, 2);
x_795 = lean_ctor_get(x_7, 3);
x_796 = lean_ctor_get(x_7, 4);
x_797 = lean_unsigned_to_nat(2u);
x_798 = lean_nat_add(x_797, x_792);
x_799 = lean_nat_dec_lt(x_789, x_798);
if (x_799 == 0)
{
lean_object* x_800; uint8_t x_801; 
x_800 = lean_nat_add(x_798, x_793);
lean_dec(x_798);
x_801 = lean_nat_dec_lt(x_789, x_800);
lean_dec(x_800);
if (x_801 == 0)
{
lean_object* x_802; lean_object* x_803; 
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_802 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_802, 0, x_789);
x_803 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_803, 0, x_802);
return x_803;
}
else
{
lean_object* x_804; lean_object* x_805; lean_object* x_806; uint8_t x_807; 
x_804 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_804);
x_805 = lean_ctor_get(x_6, 1);
lean_inc(x_805);
lean_dec_ref(x_6);
x_806 = lean_byte_array_size(x_804);
x_807 = lean_nat_dec_lt(x_805, x_806);
if (x_807 == 0)
{
lean_object* x_808; 
lean_dec(x_805);
lean_dec_ref(x_804);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_808 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_808;
}
else
{
if (x_807 == 0)
{
uint8_t x_809; lean_object* x_810; lean_object* x_811; uint8_t x_812; 
x_809 = l_instInhabitedUInt8;
x_810 = lean_box(x_809);
x_811 = l_outOfBounds___redArg(x_810);
x_812 = lean_unbox(x_811);
lean_dec(x_811);
lean_inc(x_795);
lean_inc_ref(x_796);
lean_inc_ref(x_794);
lean_inc(x_793);
lean_inc(x_792);
x_606 = x_746;
x_607 = x_804;
x_608 = x_792;
x_609 = x_793;
x_610 = x_794;
x_611 = x_747;
x_612 = x_796;
x_613 = x_795;
x_614 = x_755;
x_615 = x_797;
x_616 = x_748;
x_617 = x_749;
x_618 = x_805;
x_619 = x_8;
x_620 = x_789;
x_621 = x_812;
goto block_646;
}
else
{
uint8_t x_813; 
x_813 = lean_byte_array_fget(x_804, x_805);
lean_inc(x_795);
lean_inc_ref(x_796);
lean_inc_ref(x_794);
lean_inc(x_793);
lean_inc(x_792);
x_606 = x_746;
x_607 = x_804;
x_608 = x_792;
x_609 = x_793;
x_610 = x_794;
x_611 = x_747;
x_612 = x_796;
x_613 = x_795;
x_614 = x_755;
x_615 = x_797;
x_616 = x_748;
x_617 = x_749;
x_618 = x_805;
x_619 = x_8;
x_620 = x_789;
x_621 = x_813;
goto block_646;
}
}
}
}
else
{
lean_object* x_814; lean_object* x_815; lean_object* x_816; lean_object* x_817; 
lean_inc_ref(x_796);
lean_inc(x_795);
lean_inc_ref(x_794);
lean_inc(x_793);
lean_inc(x_792);
lean_dec(x_798);
x_814 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_814);
x_815 = lean_ctor_get(x_6, 1);
lean_inc(x_815);
lean_dec_ref(x_6);
x_816 = lean_unsigned_to_nat(5u);
x_817 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_814, x_815, x_8, x_816);
if (lean_obj_tag(x_817) == 0)
{
uint8_t x_818; 
lean_dec_ref(x_796);
lean_dec(x_795);
lean_dec_ref(x_794);
lean_dec(x_793);
lean_dec(x_792);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_818 = !lean_is_exclusive(x_817);
if (x_818 == 0)
{
return x_817;
}
else
{
lean_object* x_819; lean_object* x_820; 
x_819 = lean_ctor_get(x_817, 0);
lean_inc(x_819);
lean_dec(x_817);
x_820 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_820, 0, x_819);
return x_820;
}
}
else
{
lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_826; uint32_t x_827; lean_object* x_828; lean_object* x_829; uint32_t x_830; uint8_t x_831; 
x_821 = lean_ctor_get(x_817, 0);
lean_inc(x_821);
lean_dec_ref(x_817);
x_822 = lean_ctor_get(x_821, 0);
lean_inc(x_822);
x_823 = lean_ctor_get(x_821, 1);
lean_inc(x_823);
lean_dec(x_821);
x_824 = lean_nat_sub(x_789, x_797);
x_825 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_826 = lean_array_get_borrowed(x_825, x_794, x_824);
lean_dec(x_824);
x_827 = lean_unbox_uint32(x_826);
x_828 = lean_uint32_to_nat(x_827);
x_829 = lean_nat_add(x_828, x_822);
lean_dec(x_822);
lean_dec(x_828);
x_830 = lean_uint32_of_nat(x_829);
x_831 = lean_nat_dec_lt(x_8, x_792);
if (x_831 == 0)
{
x_657 = x_748;
x_658 = x_746;
x_659 = x_749;
x_660 = x_747;
x_661 = x_8;
x_662 = x_829;
x_663 = x_755;
x_664 = x_830;
x_665 = x_823;
x_666 = x_7;
x_667 = x_792;
x_668 = x_793;
x_669 = x_794;
x_670 = x_795;
x_671 = x_796;
goto block_679;
}
else
{
uint8_t x_832; 
x_832 = !lean_is_exclusive(x_7);
if (x_832 == 0)
{
lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; lean_object* x_840; lean_object* x_841; 
x_833 = lean_ctor_get(x_7, 4);
lean_dec(x_833);
x_834 = lean_ctor_get(x_7, 3);
lean_dec(x_834);
x_835 = lean_ctor_get(x_7, 2);
lean_dec(x_835);
x_836 = lean_ctor_get(x_7, 1);
lean_dec(x_836);
x_837 = lean_ctor_get(x_7, 0);
lean_dec(x_837);
x_838 = lean_box_uint32(x_830);
x_839 = lean_array_set(x_794, x_795, x_838);
x_840 = lean_nat_add(x_795, x_746);
lean_dec(x_795);
x_841 = lean_nat_mod(x_840, x_792);
lean_dec(x_840);
lean_inc_ref(x_796);
lean_inc(x_841);
lean_inc_ref(x_839);
lean_inc(x_793);
lean_inc(x_792);
lean_ctor_set(x_7, 3, x_841);
lean_ctor_set(x_7, 2, x_839);
x_657 = x_748;
x_658 = x_746;
x_659 = x_749;
x_660 = x_747;
x_661 = x_8;
x_662 = x_829;
x_663 = x_755;
x_664 = x_830;
x_665 = x_823;
x_666 = x_7;
x_667 = x_792;
x_668 = x_793;
x_669 = x_839;
x_670 = x_841;
x_671 = x_796;
goto block_679;
}
else
{
lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_845; lean_object* x_846; 
lean_dec(x_7);
x_842 = lean_box_uint32(x_830);
x_843 = lean_array_set(x_794, x_795, x_842);
x_844 = lean_nat_add(x_795, x_746);
lean_dec(x_795);
x_845 = lean_nat_mod(x_844, x_792);
lean_dec(x_844);
lean_inc_ref(x_796);
lean_inc(x_845);
lean_inc_ref(x_843);
lean_inc(x_793);
lean_inc(x_792);
x_846 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_846, 0, x_792);
lean_ctor_set(x_846, 1, x_793);
lean_ctor_set(x_846, 2, x_843);
lean_ctor_set(x_846, 3, x_845);
lean_ctor_set(x_846, 4, x_796);
x_657 = x_748;
x_658 = x_746;
x_659 = x_749;
x_660 = x_747;
x_661 = x_8;
x_662 = x_829;
x_663 = x_755;
x_664 = x_830;
x_665 = x_823;
x_666 = x_846;
x_667 = x_792;
x_668 = x_793;
x_669 = x_843;
x_670 = x_845;
x_671 = x_796;
goto block_679;
}
}
}
}
}
else
{
lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; 
x_847 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_847);
x_848 = lean_ctor_get(x_6, 1);
lean_inc(x_848);
lean_dec_ref(x_6);
x_849 = lean_unsigned_to_nat(5u);
x_850 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_847, x_848, x_8, x_849);
if (lean_obj_tag(x_850) == 0)
{
uint8_t x_851; 
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_851 = !lean_is_exclusive(x_850);
if (x_851 == 0)
{
return x_850;
}
else
{
lean_object* x_852; lean_object* x_853; 
x_852 = lean_ctor_get(x_850, 0);
lean_inc(x_852);
lean_dec(x_850);
x_853 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_853, 0, x_852);
return x_853;
}
}
else
{
lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; uint32_t x_865; uint8_t x_866; 
x_854 = lean_ctor_get(x_850, 0);
lean_inc(x_854);
lean_dec_ref(x_850);
x_855 = lean_ctor_get(x_854, 0);
lean_inc(x_855);
x_856 = lean_ctor_get(x_854, 1);
lean_inc(x_856);
lean_dec(x_854);
x_857 = lean_ctor_get(x_7, 0);
lean_inc(x_857);
x_858 = lean_ctor_get(x_7, 1);
lean_inc(x_858);
x_859 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_859);
x_860 = lean_ctor_get(x_7, 3);
lean_inc(x_860);
x_861 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_861);
x_862 = lean_byte_array_size(x_3);
x_863 = lean_nat_add(x_755, x_862);
x_864 = lean_nat_sub(x_863, x_855);
lean_dec(x_855);
lean_dec(x_863);
x_865 = lean_uint32_of_nat(x_864);
x_866 = lean_nat_dec_lt(x_8, x_857);
if (x_866 == 0)
{
x_690 = x_748;
x_691 = x_746;
x_692 = x_749;
x_693 = x_864;
x_694 = x_865;
x_695 = x_747;
x_696 = x_8;
x_697 = x_755;
x_698 = x_856;
x_699 = x_7;
x_700 = x_857;
x_701 = x_858;
x_702 = x_859;
x_703 = x_860;
x_704 = x_861;
goto block_712;
}
else
{
uint8_t x_867; 
x_867 = !lean_is_exclusive(x_7);
if (x_867 == 0)
{
lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; 
x_868 = lean_ctor_get(x_7, 4);
lean_dec(x_868);
x_869 = lean_ctor_get(x_7, 3);
lean_dec(x_869);
x_870 = lean_ctor_get(x_7, 2);
lean_dec(x_870);
x_871 = lean_ctor_get(x_7, 1);
lean_dec(x_871);
x_872 = lean_ctor_get(x_7, 0);
lean_dec(x_872);
x_873 = lean_box_uint32(x_865);
x_874 = lean_array_set(x_859, x_860, x_873);
x_875 = lean_nat_add(x_860, x_746);
lean_dec(x_860);
x_876 = lean_nat_mod(x_875, x_857);
lean_dec(x_875);
lean_inc_ref(x_861);
lean_inc(x_876);
lean_inc_ref(x_874);
lean_inc(x_858);
lean_inc(x_857);
lean_ctor_set(x_7, 3, x_876);
lean_ctor_set(x_7, 2, x_874);
x_690 = x_748;
x_691 = x_746;
x_692 = x_749;
x_693 = x_864;
x_694 = x_865;
x_695 = x_747;
x_696 = x_8;
x_697 = x_755;
x_698 = x_856;
x_699 = x_7;
x_700 = x_857;
x_701 = x_858;
x_702 = x_874;
x_703 = x_876;
x_704 = x_861;
goto block_712;
}
else
{
lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; 
lean_dec(x_7);
x_877 = lean_box_uint32(x_865);
x_878 = lean_array_set(x_859, x_860, x_877);
x_879 = lean_nat_add(x_860, x_746);
lean_dec(x_860);
x_880 = lean_nat_mod(x_879, x_857);
lean_dec(x_879);
lean_inc_ref(x_861);
lean_inc(x_880);
lean_inc_ref(x_878);
lean_inc(x_858);
lean_inc(x_857);
x_881 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_881, 0, x_857);
lean_ctor_set(x_881, 1, x_858);
lean_ctor_set(x_881, 2, x_878);
lean_ctor_set(x_881, 3, x_880);
lean_ctor_set(x_881, 4, x_861);
x_690 = x_748;
x_691 = x_746;
x_692 = x_749;
x_693 = x_864;
x_694 = x_865;
x_695 = x_747;
x_696 = x_8;
x_697 = x_755;
x_698 = x_856;
x_699 = x_881;
x_700 = x_857;
x_701 = x_858;
x_702 = x_878;
x_703 = x_880;
x_704 = x_861;
goto block_712;
}
}
}
}
}
else
{
lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; 
x_882 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_882);
x_883 = lean_ctor_get(x_6, 1);
lean_inc(x_883);
lean_dec_ref(x_6);
x_884 = lean_unsigned_to_nat(5u);
x_885 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_882, x_883, x_8, x_884);
if (lean_obj_tag(x_885) == 0)
{
uint8_t x_886; 
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_886 = !lean_is_exclusive(x_885);
if (x_886 == 0)
{
return x_885;
}
else
{
lean_object* x_887; lean_object* x_888; 
x_887 = lean_ctor_get(x_885, 0);
lean_inc(x_887);
lean_dec(x_885);
x_888 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_888, 0, x_887);
return x_888;
}
}
else
{
lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; lean_object* x_896; uint32_t x_897; uint8_t x_898; 
x_889 = lean_ctor_get(x_885, 0);
lean_inc(x_889);
lean_dec_ref(x_885);
x_890 = lean_ctor_get(x_889, 0);
lean_inc(x_890);
x_891 = lean_ctor_get(x_889, 1);
lean_inc(x_891);
lean_dec(x_889);
x_892 = lean_ctor_get(x_7, 0);
lean_inc(x_892);
x_893 = lean_ctor_get(x_7, 1);
lean_inc(x_893);
x_894 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_894);
x_895 = lean_ctor_get(x_7, 3);
lean_inc(x_895);
x_896 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_896);
x_897 = lean_uint32_of_nat(x_890);
x_898 = lean_nat_dec_lt(x_8, x_892);
if (x_898 == 0)
{
x_723 = x_748;
x_724 = x_746;
x_725 = x_749;
x_726 = x_890;
x_727 = x_891;
x_728 = x_747;
x_729 = x_8;
x_730 = x_897;
x_731 = x_755;
x_732 = x_7;
x_733 = x_892;
x_734 = x_893;
x_735 = x_894;
x_736 = x_895;
x_737 = x_896;
goto block_745;
}
else
{
uint8_t x_899; 
x_899 = !lean_is_exclusive(x_7);
if (x_899 == 0)
{
lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; 
x_900 = lean_ctor_get(x_7, 4);
lean_dec(x_900);
x_901 = lean_ctor_get(x_7, 3);
lean_dec(x_901);
x_902 = lean_ctor_get(x_7, 2);
lean_dec(x_902);
x_903 = lean_ctor_get(x_7, 1);
lean_dec(x_903);
x_904 = lean_ctor_get(x_7, 0);
lean_dec(x_904);
x_905 = lean_box_uint32(x_897);
x_906 = lean_array_set(x_894, x_895, x_905);
x_907 = lean_nat_add(x_895, x_746);
lean_dec(x_895);
x_908 = lean_nat_mod(x_907, x_892);
lean_dec(x_907);
lean_inc_ref(x_896);
lean_inc(x_908);
lean_inc_ref(x_906);
lean_inc(x_893);
lean_inc(x_892);
lean_ctor_set(x_7, 3, x_908);
lean_ctor_set(x_7, 2, x_906);
x_723 = x_748;
x_724 = x_746;
x_725 = x_749;
x_726 = x_890;
x_727 = x_891;
x_728 = x_747;
x_729 = x_8;
x_730 = x_897;
x_731 = x_755;
x_732 = x_7;
x_733 = x_892;
x_734 = x_893;
x_735 = x_906;
x_736 = x_908;
x_737 = x_896;
goto block_745;
}
else
{
lean_object* x_909; lean_object* x_910; lean_object* x_911; lean_object* x_912; lean_object* x_913; 
lean_dec(x_7);
x_909 = lean_box_uint32(x_897);
x_910 = lean_array_set(x_894, x_895, x_909);
x_911 = lean_nat_add(x_895, x_746);
lean_dec(x_895);
x_912 = lean_nat_mod(x_911, x_892);
lean_dec(x_911);
lean_inc_ref(x_896);
lean_inc(x_912);
lean_inc_ref(x_910);
lean_inc(x_893);
lean_inc(x_892);
x_913 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_913, 0, x_892);
lean_ctor_set(x_913, 1, x_893);
lean_ctor_set(x_913, 2, x_910);
lean_ctor_set(x_913, 3, x_912);
lean_ctor_set(x_913, 4, x_896);
x_723 = x_748;
x_724 = x_746;
x_725 = x_749;
x_726 = x_890;
x_727 = x_891;
x_728 = x_747;
x_729 = x_8;
x_730 = x_897;
x_731 = x_755;
x_732 = x_913;
x_733 = x_892;
x_734 = x_893;
x_735 = x_910;
x_736 = x_912;
x_737 = x_896;
goto block_745;
}
}
}
}
}
}
}
}
else
{
lean_object* x_914; lean_object* x_915; lean_object* x_916; 
x_914 = lean_ctor_get(x_747, 1);
x_915 = lean_ctor_get(x_750, 0);
lean_inc(x_915);
lean_dec(x_750);
x_916 = lean_byte_array_size(x_1);
if (lean_obj_tag(x_915) == 0)
{
lean_object* x_917; lean_object* x_918; 
lean_inc_ref(x_914);
lean_dec(x_748);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_917 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_917, 0, x_6);
lean_ctor_set(x_917, 1, x_7);
lean_inc_ref(x_917);
lean_inc_ref(x_5);
x_918 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_918, 0, x_5);
lean_ctor_set(x_918, 1, x_917);
x_476 = x_746;
x_477 = x_749;
x_478 = x_747;
x_479 = x_914;
x_480 = x_916;
x_481 = x_3;
x_482 = x_918;
x_483 = x_5;
x_484 = x_917;
x_485 = x_6;
x_486 = x_7;
goto block_490;
}
else
{
switch (lean_obj_tag(x_915)) {
case 0:
{
lean_object* x_919; lean_object* x_920; 
lean_inc_ref(x_914);
lean_dec(x_748);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_919 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_919, 0, x_6);
lean_ctor_set(x_919, 1, x_7);
lean_inc_ref(x_919);
lean_inc_ref(x_5);
x_920 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_920, 0, x_5);
lean_ctor_set(x_920, 1, x_919);
x_476 = x_746;
x_477 = x_749;
x_478 = x_747;
x_479 = x_914;
x_480 = x_916;
x_481 = x_3;
x_482 = x_920;
x_483 = x_5;
x_484 = x_919;
x_485 = x_6;
x_486 = x_7;
goto block_490;
}
case 1:
{
lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; uint8_t x_926; 
lean_inc_ref(x_914);
x_921 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_921);
x_922 = lean_ctor_get(x_5, 1);
lean_inc(x_922);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_923 = x_5;
} else {
 lean_dec_ref(x_5);
 x_923 = lean_box(0);
}
x_924 = lean_nat_add(x_922, x_748);
x_925 = lean_byte_array_size(x_921);
x_926 = lean_nat_dec_le(x_924, x_925);
if (x_926 == 0)
{
lean_object* x_927; 
lean_dec(x_924);
lean_dec(x_923);
lean_dec(x_922);
lean_dec_ref(x_921);
lean_dec_ref(x_914);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_927 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_927;
}
else
{
lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; 
x_928 = lean_byte_array_size(x_3);
x_929 = lean_byte_array_copy_slice(x_921, x_922, x_3, x_928, x_748, x_23);
if (lean_is_scalar(x_923)) {
 x_930 = lean_alloc_ctor(0, 2, 0);
} else {
 x_930 = x_923;
}
lean_ctor_set(x_930, 0, x_921);
lean_ctor_set(x_930, 1, x_924);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_931 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_931, 0, x_6);
lean_ctor_set(x_931, 1, x_7);
lean_inc_ref(x_931);
lean_inc_ref(x_930);
x_932 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_932, 0, x_930);
lean_ctor_set(x_932, 1, x_931);
x_476 = x_746;
x_477 = x_749;
x_478 = x_747;
x_479 = x_914;
x_480 = x_916;
x_481 = x_929;
x_482 = x_932;
x_483 = x_930;
x_484 = x_931;
x_485 = x_6;
x_486 = x_7;
goto block_490;
}
}
case 2:
{
lean_object* x_933; lean_object* x_934; lean_object* x_935; uint8_t x_936; 
x_933 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_933);
x_934 = lean_ctor_get(x_5, 1);
lean_inc(x_934);
lean_dec_ref(x_5);
x_935 = lean_byte_array_size(x_933);
x_936 = lean_nat_dec_lt(x_934, x_935);
if (x_936 == 0)
{
lean_object* x_937; 
lean_dec(x_934);
lean_dec_ref(x_933);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_937 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_937;
}
else
{
if (x_936 == 0)
{
uint8_t x_938; lean_object* x_939; lean_object* x_940; uint8_t x_941; 
x_938 = l_instInhabitedUInt8;
x_939 = lean_box(x_938);
x_940 = l_outOfBounds___redArg(x_939);
x_941 = lean_unbox(x_940);
lean_dec(x_940);
x_503 = x_748;
x_504 = x_746;
x_505 = x_749;
x_506 = x_934;
x_507 = x_933;
x_508 = x_747;
x_509 = x_916;
x_510 = x_941;
goto block_521;
}
else
{
uint8_t x_942; 
x_942 = lean_byte_array_fget(x_933, x_934);
x_503 = x_748;
x_504 = x_746;
x_505 = x_749;
x_506 = x_934;
x_507 = x_933;
x_508 = x_747;
x_509 = x_916;
x_510 = x_942;
goto block_521;
}
}
}
default: 
{
uint8_t x_943; lean_object* x_944; uint8_t x_945; 
x_943 = lean_ctor_get_uint8(x_915, 0);
lean_dec_ref(x_915);
x_944 = lean_uint8_to_nat(x_943);
x_945 = lean_nat_dec_eq(x_944, x_8);
if (x_945 == 0)
{
uint8_t x_946; 
x_946 = lean_nat_dec_eq(x_944, x_746);
if (x_946 == 0)
{
lean_object* x_947; lean_object* x_948; lean_object* x_949; lean_object* x_950; lean_object* x_951; lean_object* x_952; lean_object* x_953; uint8_t x_954; 
x_947 = lean_ctor_get(x_7, 0);
x_948 = lean_ctor_get(x_7, 1);
x_949 = lean_ctor_get(x_7, 2);
x_950 = lean_ctor_get(x_7, 3);
x_951 = lean_ctor_get(x_7, 4);
x_952 = lean_unsigned_to_nat(2u);
x_953 = lean_nat_add(x_952, x_947);
x_954 = lean_nat_dec_lt(x_944, x_953);
if (x_954 == 0)
{
lean_object* x_955; uint8_t x_956; 
x_955 = lean_nat_add(x_953, x_948);
lean_dec(x_953);
x_956 = lean_nat_dec_lt(x_944, x_955);
lean_dec(x_955);
if (x_956 == 0)
{
lean_object* x_957; lean_object* x_958; 
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_957 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_957, 0, x_944);
x_958 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_958, 0, x_957);
return x_958;
}
else
{
lean_object* x_959; lean_object* x_960; lean_object* x_961; uint8_t x_962; 
x_959 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_959);
x_960 = lean_ctor_get(x_6, 1);
lean_inc(x_960);
lean_dec_ref(x_6);
x_961 = lean_byte_array_size(x_959);
x_962 = lean_nat_dec_lt(x_960, x_961);
if (x_962 == 0)
{
lean_object* x_963; 
lean_dec(x_960);
lean_dec_ref(x_959);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_963 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_963;
}
else
{
if (x_962 == 0)
{
uint8_t x_964; lean_object* x_965; lean_object* x_966; uint8_t x_967; 
x_964 = l_instInhabitedUInt8;
x_965 = lean_box(x_964);
x_966 = l_outOfBounds___redArg(x_965);
x_967 = lean_unbox(x_966);
lean_dec(x_966);
lean_inc(x_950);
lean_inc_ref(x_951);
lean_inc_ref(x_949);
lean_inc(x_948);
lean_inc(x_947);
x_606 = x_746;
x_607 = x_959;
x_608 = x_947;
x_609 = x_948;
x_610 = x_949;
x_611 = x_747;
x_612 = x_951;
x_613 = x_950;
x_614 = x_916;
x_615 = x_952;
x_616 = x_748;
x_617 = x_749;
x_618 = x_960;
x_619 = x_8;
x_620 = x_944;
x_621 = x_967;
goto block_646;
}
else
{
uint8_t x_968; 
x_968 = lean_byte_array_fget(x_959, x_960);
lean_inc(x_950);
lean_inc_ref(x_951);
lean_inc_ref(x_949);
lean_inc(x_948);
lean_inc(x_947);
x_606 = x_746;
x_607 = x_959;
x_608 = x_947;
x_609 = x_948;
x_610 = x_949;
x_611 = x_747;
x_612 = x_951;
x_613 = x_950;
x_614 = x_916;
x_615 = x_952;
x_616 = x_748;
x_617 = x_749;
x_618 = x_960;
x_619 = x_8;
x_620 = x_944;
x_621 = x_968;
goto block_646;
}
}
}
}
else
{
lean_object* x_969; lean_object* x_970; lean_object* x_971; lean_object* x_972; 
lean_inc_ref(x_951);
lean_inc(x_950);
lean_inc_ref(x_949);
lean_inc(x_948);
lean_inc(x_947);
lean_dec(x_953);
x_969 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_969);
x_970 = lean_ctor_get(x_6, 1);
lean_inc(x_970);
lean_dec_ref(x_6);
x_971 = lean_unsigned_to_nat(5u);
x_972 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_969, x_970, x_8, x_971);
if (lean_obj_tag(x_972) == 0)
{
lean_object* x_973; lean_object* x_974; lean_object* x_975; 
lean_dec_ref(x_951);
lean_dec(x_950);
lean_dec_ref(x_949);
lean_dec(x_948);
lean_dec(x_947);
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_973 = lean_ctor_get(x_972, 0);
lean_inc(x_973);
if (lean_is_exclusive(x_972)) {
 lean_ctor_release(x_972, 0);
 x_974 = x_972;
} else {
 lean_dec_ref(x_972);
 x_974 = lean_box(0);
}
if (lean_is_scalar(x_974)) {
 x_975 = lean_alloc_ctor(0, 1, 0);
} else {
 x_975 = x_974;
}
lean_ctor_set(x_975, 0, x_973);
return x_975;
}
else
{
lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; lean_object* x_981; uint32_t x_982; lean_object* x_983; lean_object* x_984; uint32_t x_985; uint8_t x_986; 
x_976 = lean_ctor_get(x_972, 0);
lean_inc(x_976);
lean_dec_ref(x_972);
x_977 = lean_ctor_get(x_976, 0);
lean_inc(x_977);
x_978 = lean_ctor_get(x_976, 1);
lean_inc(x_978);
lean_dec(x_976);
x_979 = lean_nat_sub(x_944, x_952);
x_980 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_981 = lean_array_get_borrowed(x_980, x_949, x_979);
lean_dec(x_979);
x_982 = lean_unbox_uint32(x_981);
x_983 = lean_uint32_to_nat(x_982);
x_984 = lean_nat_add(x_983, x_977);
lean_dec(x_977);
lean_dec(x_983);
x_985 = lean_uint32_of_nat(x_984);
x_986 = lean_nat_dec_lt(x_8, x_947);
if (x_986 == 0)
{
x_657 = x_748;
x_658 = x_746;
x_659 = x_749;
x_660 = x_747;
x_661 = x_8;
x_662 = x_984;
x_663 = x_916;
x_664 = x_985;
x_665 = x_978;
x_666 = x_7;
x_667 = x_947;
x_668 = x_948;
x_669 = x_949;
x_670 = x_950;
x_671 = x_951;
goto block_679;
}
else
{
lean_object* x_987; lean_object* x_988; lean_object* x_989; lean_object* x_990; lean_object* x_991; lean_object* x_992; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_987 = x_7;
} else {
 lean_dec_ref(x_7);
 x_987 = lean_box(0);
}
x_988 = lean_box_uint32(x_985);
x_989 = lean_array_set(x_949, x_950, x_988);
x_990 = lean_nat_add(x_950, x_746);
lean_dec(x_950);
x_991 = lean_nat_mod(x_990, x_947);
lean_dec(x_990);
lean_inc_ref(x_951);
lean_inc(x_991);
lean_inc_ref(x_989);
lean_inc(x_948);
lean_inc(x_947);
if (lean_is_scalar(x_987)) {
 x_992 = lean_alloc_ctor(0, 5, 0);
} else {
 x_992 = x_987;
}
lean_ctor_set(x_992, 0, x_947);
lean_ctor_set(x_992, 1, x_948);
lean_ctor_set(x_992, 2, x_989);
lean_ctor_set(x_992, 3, x_991);
lean_ctor_set(x_992, 4, x_951);
x_657 = x_748;
x_658 = x_746;
x_659 = x_749;
x_660 = x_747;
x_661 = x_8;
x_662 = x_984;
x_663 = x_916;
x_664 = x_985;
x_665 = x_978;
x_666 = x_992;
x_667 = x_947;
x_668 = x_948;
x_669 = x_989;
x_670 = x_991;
x_671 = x_951;
goto block_679;
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
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
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
lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; uint32_t x_1011; uint8_t x_1012; 
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
x_1009 = lean_nat_add(x_916, x_1008);
x_1010 = lean_nat_sub(x_1009, x_1001);
lean_dec(x_1001);
lean_dec(x_1009);
x_1011 = lean_uint32_of_nat(x_1010);
x_1012 = lean_nat_dec_lt(x_8, x_1003);
if (x_1012 == 0)
{
x_690 = x_748;
x_691 = x_746;
x_692 = x_749;
x_693 = x_1010;
x_694 = x_1011;
x_695 = x_747;
x_696 = x_8;
x_697 = x_916;
x_698 = x_1002;
x_699 = x_7;
x_700 = x_1003;
x_701 = x_1004;
x_702 = x_1005;
x_703 = x_1006;
x_704 = x_1007;
goto block_712;
}
else
{
lean_object* x_1013; lean_object* x_1014; lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1013 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1013 = lean_box(0);
}
x_1014 = lean_box_uint32(x_1011);
x_1015 = lean_array_set(x_1005, x_1006, x_1014);
x_1016 = lean_nat_add(x_1006, x_746);
lean_dec(x_1006);
x_1017 = lean_nat_mod(x_1016, x_1003);
lean_dec(x_1016);
lean_inc_ref(x_1007);
lean_inc(x_1017);
lean_inc_ref(x_1015);
lean_inc(x_1004);
lean_inc(x_1003);
if (lean_is_scalar(x_1013)) {
 x_1018 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1018 = x_1013;
}
lean_ctor_set(x_1018, 0, x_1003);
lean_ctor_set(x_1018, 1, x_1004);
lean_ctor_set(x_1018, 2, x_1015);
lean_ctor_set(x_1018, 3, x_1017);
lean_ctor_set(x_1018, 4, x_1007);
x_690 = x_748;
x_691 = x_746;
x_692 = x_749;
x_693 = x_1010;
x_694 = x_1011;
x_695 = x_747;
x_696 = x_8;
x_697 = x_916;
x_698 = x_1002;
x_699 = x_1018;
x_700 = x_1003;
x_701 = x_1004;
x_702 = x_1015;
x_703 = x_1017;
x_704 = x_1007;
goto block_712;
}
}
}
}
else
{
lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; 
x_1019 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1019);
x_1020 = lean_ctor_get(x_6, 1);
lean_inc(x_1020);
lean_dec_ref(x_6);
x_1021 = lean_unsigned_to_nat(5u);
x_1022 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1019, x_1020, x_8, x_1021);
if (lean_obj_tag(x_1022) == 0)
{
lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; 
lean_dec_ref(x_749);
lean_dec(x_748);
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1023 = lean_ctor_get(x_1022, 0);
lean_inc(x_1023);
if (lean_is_exclusive(x_1022)) {
 lean_ctor_release(x_1022, 0);
 x_1024 = x_1022;
} else {
 lean_dec_ref(x_1022);
 x_1024 = lean_box(0);
}
if (lean_is_scalar(x_1024)) {
 x_1025 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1025 = x_1024;
}
lean_ctor_set(x_1025, 0, x_1023);
return x_1025;
}
else
{
lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; uint32_t x_1034; uint8_t x_1035; 
x_1026 = lean_ctor_get(x_1022, 0);
lean_inc(x_1026);
lean_dec_ref(x_1022);
x_1027 = lean_ctor_get(x_1026, 0);
lean_inc(x_1027);
x_1028 = lean_ctor_get(x_1026, 1);
lean_inc(x_1028);
lean_dec(x_1026);
x_1029 = lean_ctor_get(x_7, 0);
lean_inc(x_1029);
x_1030 = lean_ctor_get(x_7, 1);
lean_inc(x_1030);
x_1031 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_1031);
x_1032 = lean_ctor_get(x_7, 3);
lean_inc(x_1032);
x_1033 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_1033);
x_1034 = lean_uint32_of_nat(x_1027);
x_1035 = lean_nat_dec_lt(x_8, x_1029);
if (x_1035 == 0)
{
x_723 = x_748;
x_724 = x_746;
x_725 = x_749;
x_726 = x_1027;
x_727 = x_1028;
x_728 = x_747;
x_729 = x_8;
x_730 = x_1034;
x_731 = x_916;
x_732 = x_7;
x_733 = x_1029;
x_734 = x_1030;
x_735 = x_1031;
x_736 = x_1032;
x_737 = x_1033;
goto block_745;
}
else
{
lean_object* x_1036; lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1036 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1036 = lean_box(0);
}
x_1037 = lean_box_uint32(x_1034);
x_1038 = lean_array_set(x_1031, x_1032, x_1037);
x_1039 = lean_nat_add(x_1032, x_746);
lean_dec(x_1032);
x_1040 = lean_nat_mod(x_1039, x_1029);
lean_dec(x_1039);
lean_inc_ref(x_1033);
lean_inc(x_1040);
lean_inc_ref(x_1038);
lean_inc(x_1030);
lean_inc(x_1029);
if (lean_is_scalar(x_1036)) {
 x_1041 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1041 = x_1036;
}
lean_ctor_set(x_1041, 0, x_1029);
lean_ctor_set(x_1041, 1, x_1030);
lean_ctor_set(x_1041, 2, x_1038);
lean_ctor_set(x_1041, 3, x_1040);
lean_ctor_set(x_1041, 4, x_1033);
x_723 = x_748;
x_724 = x_746;
x_725 = x_749;
x_726 = x_1027;
x_727 = x_1028;
x_728 = x_747;
x_729 = x_8;
x_730 = x_1034;
x_731 = x_916;
x_732 = x_1041;
x_733 = x_1029;
x_734 = x_1030;
x_735 = x_1038;
x_736 = x_1040;
x_737 = x_1033;
goto block_745;
}
}
}
}
}
}
}
}
block_1057:
{
if (x_1048 == 0)
{
lean_dec(x_1046);
lean_dec_ref(x_20);
x_746 = x_1043;
x_747 = x_1045;
x_748 = x_1044;
x_749 = x_1047;
goto block_1042;
}
else
{
lean_object* x_1049; lean_object* x_1050; 
lean_dec_ref(x_1047);
lean_dec(x_1044);
x_1049 = lean_unsigned_to_nat(5u);
x_1050 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_20, x_1046, x_8, x_1049);
if (lean_obj_tag(x_1050) == 0)
{
uint8_t x_1051; 
lean_dec_ref(x_1045);
lean_dec(x_1043);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1051 = !lean_is_exclusive(x_1050);
if (x_1051 == 0)
{
return x_1050;
}
else
{
lean_object* x_1052; lean_object* x_1053; 
x_1052 = lean_ctor_get(x_1050, 0);
lean_inc(x_1052);
lean_dec(x_1050);
x_1053 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1053, 0, x_1052);
return x_1053;
}
}
else
{
lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; 
x_1054 = lean_ctor_get(x_1050, 0);
lean_inc(x_1054);
lean_dec_ref(x_1050);
x_1055 = lean_ctor_get(x_1054, 0);
lean_inc(x_1055);
x_1056 = lean_ctor_get(x_1054, 1);
lean_inc(x_1056);
lean_dec(x_1054);
x_746 = x_1043;
x_747 = x_1045;
x_748 = x_1055;
x_749 = x_1056;
goto block_1042;
}
}
}
block_1074:
{
lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; uint8_t x_1064; 
x_1059 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1060 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1061 = lean_uint8_to_nat(x_1058);
x_1062 = lean_array_get(x_1059, x_1060, x_1061);
x_1063 = lean_ctor_get(x_1062, 0);
lean_inc_ref(x_1063);
x_1064 = !lean_is_exclusive(x_1063);
if (x_1064 == 0)
{
lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; uint8_t x_1068; 
x_1065 = lean_ctor_get(x_1063, 0);
x_1066 = lean_ctor_get(x_1063, 1);
x_1067 = lean_nat_add(x_21, x_27);
lean_dec(x_21);
lean_inc(x_1067);
lean_inc_ref(x_20);
lean_ctor_set(x_1063, 1, x_1067);
lean_ctor_set(x_1063, 0, x_20);
x_1068 = lean_nat_dec_eq(x_1066, x_8);
if (x_1068 == 0)
{
lean_dec(x_1065);
x_1043 = x_27;
x_1044 = x_1066;
x_1045 = x_1062;
x_1046 = x_1067;
x_1047 = x_1063;
x_1048 = x_1068;
goto block_1057;
}
else
{
if (lean_obj_tag(x_1065) == 0)
{
if (x_1068 == 0)
{
x_1043 = x_27;
x_1044 = x_1066;
x_1045 = x_1062;
x_1046 = x_1067;
x_1047 = x_1063;
x_1048 = x_1068;
goto block_1057;
}
else
{
lean_dec(x_1067);
lean_dec_ref(x_20);
x_746 = x_27;
x_747 = x_1062;
x_748 = x_1066;
x_749 = x_1063;
goto block_1042;
}
}
else
{
lean_dec(x_1065);
x_1043 = x_27;
x_1044 = x_1066;
x_1045 = x_1062;
x_1046 = x_1067;
x_1047 = x_1063;
x_1048 = x_1068;
goto block_1057;
}
}
}
else
{
lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; lean_object* x_1072; uint8_t x_1073; 
x_1069 = lean_ctor_get(x_1063, 0);
x_1070 = lean_ctor_get(x_1063, 1);
lean_inc(x_1070);
lean_inc(x_1069);
lean_dec(x_1063);
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
x_1043 = x_27;
x_1044 = x_1070;
x_1045 = x_1062;
x_1046 = x_1071;
x_1047 = x_1072;
x_1048 = x_1073;
goto block_1057;
}
else
{
if (lean_obj_tag(x_1069) == 0)
{
if (x_1073 == 0)
{
x_1043 = x_27;
x_1044 = x_1070;
x_1045 = x_1062;
x_1046 = x_1071;
x_1047 = x_1072;
x_1048 = x_1073;
goto block_1057;
}
else
{
lean_dec(x_1071);
lean_dec_ref(x_20);
x_746 = x_27;
x_747 = x_1062;
x_748 = x_1070;
x_749 = x_1072;
goto block_1042;
}
}
else
{
lean_dec(x_1069);
x_1043 = x_27;
x_1044 = x_1070;
x_1045 = x_1062;
x_1046 = x_1071;
x_1047 = x_1072;
x_1048 = x_1073;
goto block_1057;
}
}
}
}
}
}
else
{
lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; 
lean_dec(x_2);
x_1080 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1080, 0, x_6);
lean_ctor_set(x_1080, 1, x_7);
x_1081 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1081, 0, x_5);
lean_ctor_set(x_1081, 1, x_1080);
x_1082 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1082, 0, x_4);
lean_ctor_set(x_1082, 1, x_1081);
x_1083 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1083, 0, x_3);
lean_ctor_set(x_1083, 1, x_1082);
x_1084 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1084, 0, x_1083);
return x_1084;
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
