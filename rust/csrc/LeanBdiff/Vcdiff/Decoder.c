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
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_20; lean_object* x_21; uint8_t x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_84; lean_object* x_85; lean_object* x_86; uint8_t x_87; uint32_t x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; uint8_t x_129; lean_object* x_155; lean_object* x_156; uint8_t x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_171; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; uint32_t x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; uint8_t x_198; lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; uint8_t x_212; lean_object* x_213; uint32_t x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_233; lean_object* x_234; lean_object* x_235; uint8_t x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; uint32_t x_250; uint8_t x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; lean_object* x_259; lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_272; uint8_t x_273; lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; lean_object* x_279; uint8_t x_280; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; lean_object* x_303; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_605; lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; lean_object* x_611; uint8_t x_612; lean_object* x_625; lean_object* x_626; lean_object* x_627; lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; lean_object* x_652; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; lean_object* x_661; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; uint8_t x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_717; lean_object* x_718; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; uint8_t x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; lean_object* x_727; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; uint32_t x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; uint8_t x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_744; lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_756; lean_object* x_757; lean_object* x_758; lean_object* x_759; lean_object* x_760; uint8_t x_761; lean_object* x_762; lean_object* x_763; lean_object* x_764; lean_object* x_765; lean_object* x_766; lean_object* x_769; lean_object* x_770; uint32_t x_771; lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; uint8_t x_776; lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; lean_object* x_781; lean_object* x_782; lean_object* x_783; lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_795; lean_object* x_796; lean_object* x_797; lean_object* x_798; lean_object* x_799; uint8_t x_800; lean_object* x_801; lean_object* x_802; lean_object* x_803; lean_object* x_804; lean_object* x_805; lean_object* x_808; lean_object* x_809; lean_object* x_810; lean_object* x_811; lean_object* x_812; lean_object* x_813; lean_object* x_814; uint32_t x_815; uint8_t x_816; lean_object* x_817; lean_object* x_818; lean_object* x_819; lean_object* x_820; lean_object* x_821; lean_object* x_822; lean_object* x_823; lean_object* x_824; lean_object* x_825; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; lean_object* x_839; uint8_t x_840; lean_object* x_841; lean_object* x_842; lean_object* x_843; lean_object* x_844; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; uint8_t x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; uint32_t x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; lean_object* x_863; lean_object* x_864; lean_object* x_865; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; lean_object* x_877; lean_object* x_878; lean_object* x_879; lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; lean_object* x_889; uint8_t x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; lean_object* x_894; lean_object* x_895; uint8_t x_896; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; lean_object* x_921; uint8_t x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; uint8_t x_926; lean_object* x_939; lean_object* x_940; lean_object* x_941; lean_object* x_942; lean_object* x_1254; lean_object* x_1255; lean_object* x_1256; lean_object* x_1257; lean_object* x_1258; lean_object* x_1259; lean_object* x_1260; lean_object* x_1261; uint8_t x_1262; uint8_t x_1273; lean_object* x_1287; uint8_t x_1288; 
x_1254 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_1254);
x_1255 = lean_ctor_get(x_3, 1);
lean_inc(x_1255);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_1256 = x_3;
} else {
 lean_dec_ref(x_3);
 x_1256 = lean_box(0);
}
x_1287 = lean_byte_array_size(x_1254);
x_1288 = lean_nat_dec_lt(x_1255, x_1287);
if (x_1288 == 0)
{
lean_object* x_1289; 
lean_dec(x_1256);
lean_dec(x_1255);
lean_dec_ref(x_1254);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1289 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1289;
}
else
{
if (x_1288 == 0)
{
uint8_t x_1290; lean_object* x_1291; lean_object* x_1292; uint8_t x_1293; 
x_1290 = l_instInhabitedUInt8;
x_1291 = lean_box(x_1290);
x_1292 = l_outOfBounds___redArg(x_1291);
x_1293 = lean_unbox(x_1292);
lean_dec(x_1292);
x_1273 = x_1293;
goto block_1286;
}
else
{
uint8_t x_1294; 
x_1294 = lean_byte_array_fget(x_1254, x_1255);
x_1273 = x_1294;
goto block_1286;
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
x_30 = lean_byte_array_size(x_26);
x_31 = lean_nat_add(x_25, x_30);
x_32 = lean_nat_dec_le(x_31, x_28);
if (x_32 == 0)
{
lean_object* x_33; uint8_t x_34; 
lean_dec(x_31);
x_33 = lean_nat_add(x_28, x_27);
x_34 = lean_nat_dec_le(x_33, x_25);
if (x_34 == 0)
{
uint8_t x_35; 
lean_dec(x_33);
x_35 = lean_nat_dec_le(x_25, x_28);
if (x_35 == 0)
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; 
x_36 = lean_nat_sub(x_25, x_28);
x_37 = lean_nat_sub(x_27, x_36);
lean_dec(x_36);
lean_dec(x_27);
x_38 = l_ByteArray_extract(x_1, x_28, x_25);
lean_dec_ref(x_1);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_byte_array_size(x_38);
x_41 = lean_byte_array_copy_slice(x_38, x_39, x_26, x_30, x_40, x_22);
lean_dec_ref(x_38);
x_42 = lean_byte_array_size(x_41);
x_43 = lean_nat_sub(x_42, x_25);
x_44 = lean_nat_dec_le(x_37, x_43);
lean_dec(x_43);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; 
lean_dec(x_25);
x_45 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_46 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_46, 0, x_39);
lean_ctor_set(x_46, 1, x_37);
lean_ctor_set(x_46, 2, x_21);
x_47 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_45, x_46, x_20, x_41, x_39);
x_14 = x_23;
x_15 = x_24;
x_16 = x_29;
x_17 = x_47;
goto block_19;
}
else
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; 
lean_dec(x_21);
lean_dec_ref(x_20);
x_48 = lean_nat_add(x_25, x_37);
lean_dec(x_37);
x_49 = l_ByteArray_extract(x_41, x_25, x_48);
lean_dec(x_48);
x_50 = lean_byte_array_size(x_49);
x_51 = lean_byte_array_copy_slice(x_49, x_39, x_41, x_42, x_50, x_22);
lean_dec_ref(x_49);
x_14 = x_23;
x_15 = x_24;
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
x_52 = lean_nat_sub(x_28, x_25);
lean_dec(x_25);
lean_dec(x_28);
x_53 = lean_nat_add(x_52, x_27);
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
lean_ctor_set(x_58, 1, x_27);
lean_ctor_set(x_58, 2, x_21);
x_59 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_56, x_58, x_55, x_26, x_57);
x_14 = x_23;
x_15 = x_24;
x_16 = x_29;
x_17 = x_59;
goto block_19;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
lean_dec(x_27);
lean_dec(x_21);
x_60 = l_ByteArray_extract(x_26, x_52, x_53);
lean_dec(x_53);
x_61 = lean_unsigned_to_nat(0u);
x_62 = lean_byte_array_size(x_60);
x_63 = lean_byte_array_copy_slice(x_60, x_61, x_26, x_30, x_62, x_22);
lean_dec_ref(x_60);
x_14 = x_23;
x_15 = x_24;
x_16 = x_29;
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
lean_dec(x_21);
lean_dec_ref(x_20);
x_64 = l_ByteArray_extract(x_1, x_28, x_33);
lean_dec(x_33);
lean_dec_ref(x_1);
x_65 = lean_unsigned_to_nat(0u);
x_66 = lean_byte_array_size(x_64);
x_67 = lean_byte_array_copy_slice(x_64, x_65, x_26, x_30, x_66, x_22);
lean_dec_ref(x_64);
x_14 = x_23;
x_15 = x_24;
x_16 = x_29;
x_17 = x_67;
goto block_19;
}
}
else
{
lean_object* x_68; lean_object* x_69; 
lean_dec_ref(x_29);
lean_dec_ref(x_26);
lean_dec(x_25);
lean_dec_ref(x_24);
lean_dec_ref(x_23);
lean_dec(x_21);
lean_dec_ref(x_20);
lean_dec_ref(x_1);
x_68 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_68, 0, x_28);
lean_ctor_set(x_68, 1, x_27);
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
lean_ctor_set(x_82, 0, x_79);
lean_ctor_set(x_82, 1, x_81);
x_20 = x_71;
x_21 = x_72;
x_22 = x_73;
x_23 = x_74;
x_24 = x_75;
x_25 = x_76;
x_26 = x_77;
x_27 = x_78;
x_28 = x_80;
x_29 = x_82;
goto block_70;
}
block_109:
{
uint8_t x_103; 
x_103 = lean_nat_dec_lt(x_86, x_99);
lean_dec(x_86);
if (x_103 == 0)
{
lean_dec_ref(x_102);
lean_dec(x_101);
lean_dec_ref(x_100);
lean_dec(x_99);
lean_dec(x_98);
x_71 = x_84;
x_72 = x_85;
x_73 = x_87;
x_74 = x_89;
x_75 = x_90;
x_76 = x_92;
x_77 = x_93;
x_78 = x_95;
x_79 = x_94;
x_80 = x_96;
x_81 = x_97;
goto block_83;
}
else
{
lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; 
lean_dec_ref(x_97);
x_104 = lean_nat_mul(x_99, x_91);
x_105 = lean_nat_mod(x_96, x_104);
lean_dec(x_104);
x_106 = lean_box_uint32(x_88);
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
x_73 = x_87;
x_74 = x_89;
x_75 = x_90;
x_76 = x_92;
x_77 = x_93;
x_78 = x_95;
x_79 = x_94;
x_80 = x_96;
x_81 = x_108;
goto block_83;
}
}
block_154:
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; uint32_t x_140; lean_object* x_141; uint32_t x_142; uint8_t x_143; 
x_130 = lean_nat_add(x_119, x_113);
lean_dec(x_119);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_115);
lean_ctor_set(x_131, 1, x_130);
x_132 = lean_nat_sub(x_125, x_122);
lean_dec(x_125);
x_133 = lean_nat_sub(x_132, x_117);
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
x_143 = lean_nat_dec_lt(x_112, x_117);
if (x_143 == 0)
{
lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; 
lean_dec(x_120);
lean_dec(x_118);
lean_dec(x_117);
lean_dec_ref(x_116);
lean_dec_ref(x_111);
x_144 = lean_ctor_get(x_114, 0);
lean_inc(x_144);
x_145 = lean_ctor_get(x_114, 1);
lean_inc(x_145);
x_146 = lean_ctor_get(x_114, 2);
lean_inc_ref(x_146);
x_147 = lean_ctor_get(x_114, 3);
lean_inc(x_147);
x_148 = lean_ctor_get(x_114, 4);
lean_inc_ref(x_148);
x_84 = x_110;
x_85 = x_113;
x_86 = x_112;
x_87 = x_121;
x_88 = x_142;
x_89 = x_123;
x_90 = x_124;
x_91 = x_134;
x_92 = x_126;
x_93 = x_127;
x_94 = x_131;
x_95 = x_128;
x_96 = x_141;
x_97 = x_114;
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
lean_dec_ref(x_114);
x_149 = lean_box_uint32(x_142);
x_150 = lean_array_set(x_111, x_118, x_149);
x_151 = lean_nat_add(x_118, x_113);
lean_dec(x_118);
x_152 = lean_nat_mod(x_151, x_117);
lean_dec(x_151);
lean_inc_ref(x_116);
lean_inc(x_152);
lean_inc_ref(x_150);
lean_inc(x_120);
lean_inc(x_117);
x_153 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_153, 0, x_117);
lean_ctor_set(x_153, 1, x_120);
lean_ctor_set(x_153, 2, x_150);
lean_ctor_set(x_153, 3, x_152);
lean_ctor_set(x_153, 4, x_116);
x_84 = x_110;
x_85 = x_113;
x_86 = x_112;
x_87 = x_121;
x_88 = x_142;
x_89 = x_123;
x_90 = x_124;
x_91 = x_134;
x_92 = x_126;
x_93 = x_127;
x_94 = x_131;
x_95 = x_128;
x_96 = x_141;
x_97 = x_153;
x_98 = x_117;
x_99 = x_120;
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
lean_ctor_set(x_166, 0, x_160);
lean_ctor_set(x_166, 1, x_165);
x_20 = x_155;
x_21 = x_156;
x_22 = x_157;
x_23 = x_159;
x_24 = x_161;
x_25 = x_162;
x_26 = x_163;
x_27 = x_164;
x_28 = x_158;
x_29 = x_166;
goto block_70;
}
block_193:
{
uint8_t x_186; 
x_186 = lean_nat_dec_lt(x_170, x_182);
lean_dec(x_170);
if (x_186 == 0)
{
lean_dec_ref(x_185);
lean_dec(x_184);
lean_dec_ref(x_183);
lean_dec(x_182);
lean_dec(x_181);
x_155 = x_168;
x_156 = x_169;
x_157 = x_171;
x_158 = x_172;
x_159 = x_173;
x_160 = x_174;
x_161 = x_175;
x_162 = x_176;
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
x_189 = lean_nat_mod(x_172, x_188);
lean_dec(x_188);
x_190 = lean_box_uint32(x_177);
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
x_157 = x_171;
x_158 = x_172;
x_159 = x_173;
x_160 = x_174;
x_161 = x_175;
x_162 = x_176;
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
lean_ctor_set(x_205, 0, x_197);
lean_ctor_set(x_205, 1, x_204);
x_20 = x_194;
x_21 = x_195;
x_22 = x_198;
x_23 = x_199;
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
x_225 = lean_nat_dec_lt(x_209, x_221);
lean_dec(x_209);
if (x_225 == 0)
{
lean_dec_ref(x_224);
lean_dec(x_223);
lean_dec_ref(x_222);
lean_dec(x_221);
lean_dec(x_220);
x_194 = x_207;
x_195 = x_208;
x_196 = x_211;
x_197 = x_210;
x_198 = x_212;
x_199 = x_213;
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
x_228 = lean_nat_mod(x_211, x_227);
lean_dec(x_227);
x_229 = lean_box_uint32(x_214);
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
x_196 = x_211;
x_197 = x_210;
x_198 = x_212;
x_199 = x_213;
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
lean_ctor_set(x_244, 0, x_235);
lean_ctor_set(x_244, 1, x_243);
x_20 = x_233;
x_21 = x_234;
x_22 = x_236;
x_23 = x_237;
x_24 = x_239;
x_25 = x_240;
x_26 = x_241;
x_27 = x_242;
x_28 = x_238;
x_29 = x_244;
goto block_70;
}
block_271:
{
uint8_t x_264; 
x_264 = lean_nat_dec_lt(x_248, x_260);
lean_dec(x_248);
if (x_264 == 0)
{
lean_dec_ref(x_263);
lean_dec(x_262);
lean_dec_ref(x_261);
lean_dec(x_260);
lean_dec(x_259);
x_233 = x_246;
x_234 = x_247;
x_235 = x_249;
x_236 = x_251;
x_237 = x_252;
x_238 = x_253;
x_239 = x_254;
x_240 = x_255;
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
x_267 = lean_nat_mod(x_253, x_266);
lean_dec(x_266);
x_268 = lean_box_uint32(x_250);
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
x_235 = x_249;
x_236 = x_251;
x_237 = x_252;
x_238 = x_253;
x_239 = x_254;
x_240 = x_255;
x_241 = x_256;
x_242 = x_257;
x_243 = x_270;
goto block_245;
}
}
block_291:
{
lean_object* x_281; lean_object* x_282; lean_object* x_283; lean_object* x_284; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; 
x_281 = lean_nat_add(x_279, x_272);
lean_dec(x_272);
lean_dec(x_279);
x_282 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_282, 0, x_278);
lean_ctor_set(x_282, 1, x_281);
x_283 = lean_box(x_280);
x_284 = lean_mk_array(x_277, x_283);
x_285 = lean_byte_array_mk(x_284);
x_286 = lean_unsigned_to_nat(0u);
x_287 = lean_byte_array_size(x_276);
x_288 = lean_byte_array_size(x_285);
x_289 = lean_byte_array_copy_slice(x_285, x_286, x_276, x_287, x_288, x_273);
lean_dec_ref(x_285);
x_290 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_290, 0, x_282);
lean_ctor_set(x_290, 1, x_274);
x_7 = x_275;
x_8 = x_289;
x_9 = x_290;
goto block_13;
}
block_599:
{
lean_object* x_304; uint8_t x_305; 
x_304 = lean_ctor_get(x_299, 1);
lean_inc_ref(x_304);
lean_dec_ref(x_299);
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
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_301;
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
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_301;
goto block_13;
}
case 1:
{
uint8_t x_309; 
lean_dec_ref(x_301);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec(x_294);
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
lean_dec(x_302);
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
lean_dec_ref(x_300);
lean_dec_ref(x_296);
x_315 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_315;
}
else
{
if (x_314 == 0)
{
lean_object* x_316; 
lean_dec(x_312);
lean_free_object(x_295);
lean_dec(x_311);
lean_dec_ref(x_310);
lean_free_object(x_304);
lean_dec_ref(x_303);
lean_dec_ref(x_300);
lean_dec_ref(x_296);
x_316 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_316;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_317 = l_ByteArray_extract(x_310, x_311, x_312);
lean_ctor_set(x_295, 1, x_312);
x_318 = lean_unsigned_to_nat(0u);
x_319 = lean_byte_array_size(x_300);
x_320 = lean_byte_array_size(x_317);
x_321 = lean_byte_array_copy_slice(x_317, x_318, x_300, x_319, x_320, x_308);
lean_dec_ref(x_317);
lean_ctor_set(x_304, 1, x_296);
lean_ctor_set(x_304, 0, x_295);
x_7 = x_303;
x_8 = x_321;
x_9 = x_304;
goto block_13;
}
}
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; uint8_t x_326; 
x_322 = lean_ctor_get(x_295, 0);
x_323 = lean_ctor_get(x_295, 1);
lean_inc(x_323);
lean_inc(x_322);
lean_dec(x_295);
x_324 = lean_nat_add(x_323, x_302);
lean_dec(x_302);
x_325 = lean_byte_array_size(x_322);
x_326 = lean_nat_dec_le(x_324, x_325);
if (x_326 == 0)
{
lean_object* x_327; 
lean_dec(x_324);
lean_dec(x_323);
lean_dec_ref(x_322);
lean_free_object(x_304);
lean_dec_ref(x_303);
lean_dec_ref(x_300);
lean_dec_ref(x_296);
x_327 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_327;
}
else
{
if (x_326 == 0)
{
lean_object* x_328; 
lean_dec(x_324);
lean_dec(x_323);
lean_dec_ref(x_322);
lean_free_object(x_304);
lean_dec_ref(x_303);
lean_dec_ref(x_300);
lean_dec_ref(x_296);
x_328 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_328;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; lean_object* x_332; lean_object* x_333; lean_object* x_334; 
x_329 = l_ByteArray_extract(x_322, x_323, x_324);
x_330 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_330, 0, x_322);
lean_ctor_set(x_330, 1, x_324);
x_331 = lean_unsigned_to_nat(0u);
x_332 = lean_byte_array_size(x_300);
x_333 = lean_byte_array_size(x_329);
x_334 = lean_byte_array_copy_slice(x_329, x_331, x_300, x_332, x_333, x_308);
lean_dec_ref(x_329);
lean_ctor_set(x_304, 1, x_296);
lean_ctor_set(x_304, 0, x_330);
x_7 = x_303;
x_8 = x_334;
x_9 = x_304;
goto block_13;
}
}
}
}
case 2:
{
lean_object* x_335; lean_object* x_336; lean_object* x_337; uint8_t x_338; 
lean_free_object(x_304);
lean_dec_ref(x_301);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_335 = lean_ctor_get(x_295, 0);
lean_inc_ref(x_335);
x_336 = lean_ctor_get(x_295, 1);
lean_inc(x_336);
lean_dec_ref(x_295);
x_337 = lean_byte_array_size(x_335);
x_338 = lean_nat_dec_lt(x_336, x_337);
if (x_338 == 0)
{
lean_object* x_339; 
lean_dec(x_336);
lean_dec_ref(x_335);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec_ref(x_296);
lean_dec(x_294);
x_339 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_339;
}
else
{
if (x_338 == 0)
{
uint8_t x_340; lean_object* x_341; lean_object* x_342; uint8_t x_343; 
x_340 = l_instInhabitedUInt8;
x_341 = lean_box(x_340);
x_342 = l_outOfBounds___redArg(x_341);
x_343 = lean_unbox(x_342);
lean_dec(x_342);
x_272 = x_294;
x_273 = x_308;
x_274 = x_296;
x_275 = x_303;
x_276 = x_300;
x_277 = x_302;
x_278 = x_335;
x_279 = x_336;
x_280 = x_343;
goto block_291;
}
else
{
uint8_t x_344; 
x_344 = lean_byte_array_fget(x_335, x_336);
x_272 = x_294;
x_273 = x_308;
x_274 = x_296;
x_275 = x_303;
x_276 = x_300;
x_277 = x_302;
x_278 = x_335;
x_279 = x_336;
x_280 = x_344;
goto block_291;
}
}
}
default: 
{
uint8_t x_345; lean_object* x_346; lean_object* x_347; uint8_t x_348; 
lean_free_object(x_304);
lean_dec_ref(x_301);
lean_dec_ref(x_296);
x_345 = lean_ctor_get_uint8(x_306, 0);
lean_dec_ref(x_306);
x_346 = lean_uint8_to_nat(x_345);
x_347 = lean_unsigned_to_nat(0u);
x_348 = lean_nat_dec_eq(x_346, x_347);
if (x_348 == 0)
{
uint8_t x_349; 
x_349 = lean_nat_dec_eq(x_346, x_294);
if (x_349 == 0)
{
lean_object* x_350; lean_object* x_351; lean_object* x_352; lean_object* x_353; lean_object* x_354; lean_object* x_355; lean_object* x_356; uint8_t x_357; 
x_350 = lean_ctor_get(x_297, 0);
lean_inc(x_350);
x_351 = lean_ctor_get(x_297, 1);
lean_inc(x_351);
x_352 = lean_ctor_get(x_297, 2);
lean_inc_ref(x_352);
x_353 = lean_ctor_get(x_297, 3);
lean_inc(x_353);
x_354 = lean_ctor_get(x_297, 4);
lean_inc_ref(x_354);
x_355 = lean_unsigned_to_nat(2u);
x_356 = lean_nat_add(x_355, x_350);
x_357 = lean_nat_dec_lt(x_346, x_356);
if (x_357 == 0)
{
lean_object* x_358; uint8_t x_359; 
x_358 = lean_nat_add(x_356, x_351);
lean_dec(x_356);
x_359 = lean_nat_dec_lt(x_346, x_358);
lean_dec(x_358);
if (x_359 == 0)
{
lean_object* x_360; lean_object* x_361; 
lean_dec_ref(x_354);
lean_dec(x_353);
lean_dec_ref(x_352);
lean_dec(x_351);
lean_dec(x_350);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_360 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_360, 0, x_346);
x_361 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_361, 0, x_360);
return x_361;
}
else
{
lean_object* x_362; lean_object* x_363; lean_object* x_364; uint8_t x_365; 
x_362 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_362);
x_363 = lean_ctor_get(x_293, 1);
lean_inc(x_363);
lean_dec_ref(x_293);
x_364 = lean_byte_array_size(x_362);
x_365 = lean_nat_dec_lt(x_363, x_364);
if (x_365 == 0)
{
lean_object* x_366; 
lean_dec(x_363);
lean_dec_ref(x_362);
lean_dec_ref(x_354);
lean_dec(x_353);
lean_dec_ref(x_352);
lean_dec(x_351);
lean_dec(x_350);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_366 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_366;
}
else
{
if (x_365 == 0)
{
uint8_t x_367; lean_object* x_368; lean_object* x_369; uint8_t x_370; 
x_367 = l_instInhabitedUInt8;
x_368 = lean_box(x_367);
x_369 = l_outOfBounds___redArg(x_368);
x_370 = lean_unbox(x_369);
lean_dec(x_369);
x_110 = x_292;
x_111 = x_352;
x_112 = x_347;
x_113 = x_294;
x_114 = x_297;
x_115 = x_362;
x_116 = x_354;
x_117 = x_350;
x_118 = x_353;
x_119 = x_363;
x_120 = x_351;
x_121 = x_308;
x_122 = x_355;
x_123 = x_295;
x_124 = x_303;
x_125 = x_346;
x_126 = x_298;
x_127 = x_300;
x_128 = x_302;
x_129 = x_370;
goto block_154;
}
else
{
uint8_t x_371; 
x_371 = lean_byte_array_fget(x_362, x_363);
x_110 = x_292;
x_111 = x_352;
x_112 = x_347;
x_113 = x_294;
x_114 = x_297;
x_115 = x_362;
x_116 = x_354;
x_117 = x_350;
x_118 = x_353;
x_119 = x_363;
x_120 = x_351;
x_121 = x_308;
x_122 = x_355;
x_123 = x_295;
x_124 = x_303;
x_125 = x_346;
x_126 = x_298;
x_127 = x_300;
x_128 = x_302;
x_129 = x_371;
goto block_154;
}
}
}
}
else
{
lean_object* x_372; lean_object* x_373; lean_object* x_374; lean_object* x_375; 
lean_dec(x_356);
x_372 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_372);
x_373 = lean_ctor_get(x_293, 1);
lean_inc(x_373);
lean_dec_ref(x_293);
x_374 = lean_unsigned_to_nat(5u);
x_375 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_372, x_373, x_347, x_374);
if (lean_obj_tag(x_375) == 0)
{
uint8_t x_376; 
lean_dec_ref(x_354);
lean_dec(x_353);
lean_dec_ref(x_352);
lean_dec(x_351);
lean_dec(x_350);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_376 = !lean_is_exclusive(x_375);
if (x_376 == 0)
{
return x_375;
}
else
{
lean_object* x_377; lean_object* x_378; 
x_377 = lean_ctor_get(x_375, 0);
lean_inc(x_377);
lean_dec(x_375);
x_378 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_378, 0, x_377);
return x_378;
}
}
else
{
lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; uint32_t x_385; lean_object* x_386; lean_object* x_387; uint32_t x_388; uint8_t x_389; 
x_379 = lean_ctor_get(x_375, 0);
lean_inc(x_379);
lean_dec_ref(x_375);
x_380 = lean_ctor_get(x_379, 0);
lean_inc(x_380);
x_381 = lean_ctor_get(x_379, 1);
lean_inc(x_381);
lean_dec(x_379);
x_382 = lean_nat_sub(x_346, x_355);
x_383 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_384 = lean_array_get_borrowed(x_383, x_352, x_382);
lean_dec(x_382);
x_385 = lean_unbox_uint32(x_384);
x_386 = lean_uint32_to_nat(x_385);
x_387 = lean_nat_add(x_386, x_380);
lean_dec(x_380);
lean_dec(x_386);
x_388 = lean_uint32_of_nat(x_387);
x_389 = lean_nat_dec_lt(x_347, x_350);
if (x_389 == 0)
{
x_168 = x_292;
x_169 = x_294;
x_170 = x_347;
x_171 = x_308;
x_172 = x_387;
x_173 = x_295;
x_174 = x_381;
x_175 = x_303;
x_176 = x_298;
x_177 = x_388;
x_178 = x_300;
x_179 = x_302;
x_180 = x_297;
x_181 = x_350;
x_182 = x_351;
x_183 = x_352;
x_184 = x_353;
x_185 = x_354;
goto block_193;
}
else
{
uint8_t x_390; 
x_390 = !lean_is_exclusive(x_297);
if (x_390 == 0)
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; lean_object* x_395; lean_object* x_396; lean_object* x_397; lean_object* x_398; lean_object* x_399; 
x_391 = lean_ctor_get(x_297, 4);
lean_dec(x_391);
x_392 = lean_ctor_get(x_297, 3);
lean_dec(x_392);
x_393 = lean_ctor_get(x_297, 2);
lean_dec(x_393);
x_394 = lean_ctor_get(x_297, 1);
lean_dec(x_394);
x_395 = lean_ctor_get(x_297, 0);
lean_dec(x_395);
x_396 = lean_box_uint32(x_388);
x_397 = lean_array_set(x_352, x_353, x_396);
x_398 = lean_nat_add(x_353, x_294);
lean_dec(x_353);
x_399 = lean_nat_mod(x_398, x_350);
lean_dec(x_398);
lean_inc_ref(x_354);
lean_inc(x_399);
lean_inc_ref(x_397);
lean_inc(x_351);
lean_inc(x_350);
lean_ctor_set(x_297, 3, x_399);
lean_ctor_set(x_297, 2, x_397);
x_168 = x_292;
x_169 = x_294;
x_170 = x_347;
x_171 = x_308;
x_172 = x_387;
x_173 = x_295;
x_174 = x_381;
x_175 = x_303;
x_176 = x_298;
x_177 = x_388;
x_178 = x_300;
x_179 = x_302;
x_180 = x_297;
x_181 = x_350;
x_182 = x_351;
x_183 = x_397;
x_184 = x_399;
x_185 = x_354;
goto block_193;
}
else
{
lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; 
lean_dec(x_297);
x_400 = lean_box_uint32(x_388);
x_401 = lean_array_set(x_352, x_353, x_400);
x_402 = lean_nat_add(x_353, x_294);
lean_dec(x_353);
x_403 = lean_nat_mod(x_402, x_350);
lean_dec(x_402);
lean_inc_ref(x_354);
lean_inc(x_403);
lean_inc_ref(x_401);
lean_inc(x_351);
lean_inc(x_350);
x_404 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_404, 0, x_350);
lean_ctor_set(x_404, 1, x_351);
lean_ctor_set(x_404, 2, x_401);
lean_ctor_set(x_404, 3, x_403);
lean_ctor_set(x_404, 4, x_354);
x_168 = x_292;
x_169 = x_294;
x_170 = x_347;
x_171 = x_308;
x_172 = x_387;
x_173 = x_295;
x_174 = x_381;
x_175 = x_303;
x_176 = x_298;
x_177 = x_388;
x_178 = x_300;
x_179 = x_302;
x_180 = x_404;
x_181 = x_350;
x_182 = x_351;
x_183 = x_401;
x_184 = x_403;
x_185 = x_354;
goto block_193;
}
}
}
}
}
else
{
lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; 
x_405 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_405);
x_406 = lean_ctor_get(x_293, 1);
lean_inc(x_406);
lean_dec_ref(x_293);
x_407 = lean_unsigned_to_nat(5u);
x_408 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_405, x_406, x_347, x_407);
if (lean_obj_tag(x_408) == 0)
{
uint8_t x_409; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_409 = !lean_is_exclusive(x_408);
if (x_409 == 0)
{
return x_408;
}
else
{
lean_object* x_410; lean_object* x_411; 
x_410 = lean_ctor_get(x_408, 0);
lean_inc(x_410);
lean_dec(x_408);
x_411 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_411, 0, x_410);
return x_411;
}
}
else
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; lean_object* x_421; lean_object* x_422; uint32_t x_423; uint8_t x_424; 
x_412 = lean_ctor_get(x_408, 0);
lean_inc(x_412);
lean_dec_ref(x_408);
x_413 = lean_ctor_get(x_412, 0);
lean_inc(x_413);
x_414 = lean_ctor_get(x_412, 1);
lean_inc(x_414);
lean_dec(x_412);
x_415 = lean_ctor_get(x_297, 0);
lean_inc(x_415);
x_416 = lean_ctor_get(x_297, 1);
lean_inc(x_416);
x_417 = lean_ctor_get(x_297, 2);
lean_inc_ref(x_417);
x_418 = lean_ctor_get(x_297, 3);
lean_inc(x_418);
x_419 = lean_ctor_get(x_297, 4);
lean_inc_ref(x_419);
x_420 = lean_byte_array_size(x_300);
x_421 = lean_nat_add(x_298, x_420);
x_422 = lean_nat_sub(x_421, x_413);
lean_dec(x_413);
lean_dec(x_421);
x_423 = lean_uint32_of_nat(x_422);
x_424 = lean_nat_dec_lt(x_347, x_415);
if (x_424 == 0)
{
x_207 = x_292;
x_208 = x_294;
x_209 = x_347;
x_210 = x_414;
x_211 = x_422;
x_212 = x_308;
x_213 = x_295;
x_214 = x_423;
x_215 = x_303;
x_216 = x_298;
x_217 = x_300;
x_218 = x_302;
x_219 = x_297;
x_220 = x_415;
x_221 = x_416;
x_222 = x_417;
x_223 = x_418;
x_224 = x_419;
goto block_232;
}
else
{
uint8_t x_425; 
x_425 = !lean_is_exclusive(x_297);
if (x_425 == 0)
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; lean_object* x_430; lean_object* x_431; lean_object* x_432; lean_object* x_433; lean_object* x_434; 
x_426 = lean_ctor_get(x_297, 4);
lean_dec(x_426);
x_427 = lean_ctor_get(x_297, 3);
lean_dec(x_427);
x_428 = lean_ctor_get(x_297, 2);
lean_dec(x_428);
x_429 = lean_ctor_get(x_297, 1);
lean_dec(x_429);
x_430 = lean_ctor_get(x_297, 0);
lean_dec(x_430);
x_431 = lean_box_uint32(x_423);
x_432 = lean_array_set(x_417, x_418, x_431);
x_433 = lean_nat_add(x_418, x_294);
lean_dec(x_418);
x_434 = lean_nat_mod(x_433, x_415);
lean_dec(x_433);
lean_inc_ref(x_419);
lean_inc(x_434);
lean_inc_ref(x_432);
lean_inc(x_416);
lean_inc(x_415);
lean_ctor_set(x_297, 3, x_434);
lean_ctor_set(x_297, 2, x_432);
x_207 = x_292;
x_208 = x_294;
x_209 = x_347;
x_210 = x_414;
x_211 = x_422;
x_212 = x_308;
x_213 = x_295;
x_214 = x_423;
x_215 = x_303;
x_216 = x_298;
x_217 = x_300;
x_218 = x_302;
x_219 = x_297;
x_220 = x_415;
x_221 = x_416;
x_222 = x_432;
x_223 = x_434;
x_224 = x_419;
goto block_232;
}
else
{
lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; 
lean_dec(x_297);
x_435 = lean_box_uint32(x_423);
x_436 = lean_array_set(x_417, x_418, x_435);
x_437 = lean_nat_add(x_418, x_294);
lean_dec(x_418);
x_438 = lean_nat_mod(x_437, x_415);
lean_dec(x_437);
lean_inc_ref(x_419);
lean_inc(x_438);
lean_inc_ref(x_436);
lean_inc(x_416);
lean_inc(x_415);
x_439 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_439, 0, x_415);
lean_ctor_set(x_439, 1, x_416);
lean_ctor_set(x_439, 2, x_436);
lean_ctor_set(x_439, 3, x_438);
lean_ctor_set(x_439, 4, x_419);
x_207 = x_292;
x_208 = x_294;
x_209 = x_347;
x_210 = x_414;
x_211 = x_422;
x_212 = x_308;
x_213 = x_295;
x_214 = x_423;
x_215 = x_303;
x_216 = x_298;
x_217 = x_300;
x_218 = x_302;
x_219 = x_439;
x_220 = x_415;
x_221 = x_416;
x_222 = x_436;
x_223 = x_438;
x_224 = x_419;
goto block_232;
}
}
}
}
}
else
{
lean_object* x_440; lean_object* x_441; lean_object* x_442; lean_object* x_443; 
x_440 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_440);
x_441 = lean_ctor_get(x_293, 1);
lean_inc(x_441);
lean_dec_ref(x_293);
x_442 = lean_unsigned_to_nat(5u);
x_443 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_440, x_441, x_347, x_442);
if (lean_obj_tag(x_443) == 0)
{
uint8_t x_444; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_444 = !lean_is_exclusive(x_443);
if (x_444 == 0)
{
return x_443;
}
else
{
lean_object* x_445; lean_object* x_446; 
x_445 = lean_ctor_get(x_443, 0);
lean_inc(x_445);
lean_dec(x_443);
x_446 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_446, 0, x_445);
return x_446;
}
}
else
{
lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; lean_object* x_453; lean_object* x_454; uint32_t x_455; uint8_t x_456; 
x_447 = lean_ctor_get(x_443, 0);
lean_inc(x_447);
lean_dec_ref(x_443);
x_448 = lean_ctor_get(x_447, 0);
lean_inc(x_448);
x_449 = lean_ctor_get(x_447, 1);
lean_inc(x_449);
lean_dec(x_447);
x_450 = lean_ctor_get(x_297, 0);
lean_inc(x_450);
x_451 = lean_ctor_get(x_297, 1);
lean_inc(x_451);
x_452 = lean_ctor_get(x_297, 2);
lean_inc_ref(x_452);
x_453 = lean_ctor_get(x_297, 3);
lean_inc(x_453);
x_454 = lean_ctor_get(x_297, 4);
lean_inc_ref(x_454);
x_455 = lean_uint32_of_nat(x_448);
x_456 = lean_nat_dec_lt(x_347, x_450);
if (x_456 == 0)
{
x_246 = x_292;
x_247 = x_294;
x_248 = x_347;
x_249 = x_449;
x_250 = x_455;
x_251 = x_308;
x_252 = x_295;
x_253 = x_448;
x_254 = x_303;
x_255 = x_298;
x_256 = x_300;
x_257 = x_302;
x_258 = x_297;
x_259 = x_450;
x_260 = x_451;
x_261 = x_452;
x_262 = x_453;
x_263 = x_454;
goto block_271;
}
else
{
uint8_t x_457; 
x_457 = !lean_is_exclusive(x_297);
if (x_457 == 0)
{
lean_object* x_458; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; 
x_458 = lean_ctor_get(x_297, 4);
lean_dec(x_458);
x_459 = lean_ctor_get(x_297, 3);
lean_dec(x_459);
x_460 = lean_ctor_get(x_297, 2);
lean_dec(x_460);
x_461 = lean_ctor_get(x_297, 1);
lean_dec(x_461);
x_462 = lean_ctor_get(x_297, 0);
lean_dec(x_462);
x_463 = lean_box_uint32(x_455);
x_464 = lean_array_set(x_452, x_453, x_463);
x_465 = lean_nat_add(x_453, x_294);
lean_dec(x_453);
x_466 = lean_nat_mod(x_465, x_450);
lean_dec(x_465);
lean_inc_ref(x_454);
lean_inc(x_466);
lean_inc_ref(x_464);
lean_inc(x_451);
lean_inc(x_450);
lean_ctor_set(x_297, 3, x_466);
lean_ctor_set(x_297, 2, x_464);
x_246 = x_292;
x_247 = x_294;
x_248 = x_347;
x_249 = x_449;
x_250 = x_455;
x_251 = x_308;
x_252 = x_295;
x_253 = x_448;
x_254 = x_303;
x_255 = x_298;
x_256 = x_300;
x_257 = x_302;
x_258 = x_297;
x_259 = x_450;
x_260 = x_451;
x_261 = x_464;
x_262 = x_466;
x_263 = x_454;
goto block_271;
}
else
{
lean_object* x_467; lean_object* x_468; lean_object* x_469; lean_object* x_470; lean_object* x_471; 
lean_dec(x_297);
x_467 = lean_box_uint32(x_455);
x_468 = lean_array_set(x_452, x_453, x_467);
x_469 = lean_nat_add(x_453, x_294);
lean_dec(x_453);
x_470 = lean_nat_mod(x_469, x_450);
lean_dec(x_469);
lean_inc_ref(x_454);
lean_inc(x_470);
lean_inc_ref(x_468);
lean_inc(x_451);
lean_inc(x_450);
x_471 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_471, 0, x_450);
lean_ctor_set(x_471, 1, x_451);
lean_ctor_set(x_471, 2, x_468);
lean_ctor_set(x_471, 3, x_470);
lean_ctor_set(x_471, 4, x_454);
x_246 = x_292;
x_247 = x_294;
x_248 = x_347;
x_249 = x_449;
x_250 = x_455;
x_251 = x_308;
x_252 = x_295;
x_253 = x_448;
x_254 = x_303;
x_255 = x_298;
x_256 = x_300;
x_257 = x_302;
x_258 = x_471;
x_259 = x_450;
x_260 = x_451;
x_261 = x_468;
x_262 = x_470;
x_263 = x_454;
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
lean_object* x_472; 
x_472 = lean_ctor_get(x_304, 0);
lean_inc(x_472);
lean_dec(x_304);
if (lean_obj_tag(x_472) == 0)
{
lean_dec(x_302);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_301;
goto block_13;
}
else
{
uint8_t x_473; 
x_473 = 0;
switch (lean_obj_tag(x_472)) {
case 0:
{
lean_dec(x_302);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_296);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_7 = x_303;
x_8 = x_300;
x_9 = x_301;
goto block_13;
}
case 1:
{
lean_object* x_474; lean_object* x_475; lean_object* x_476; lean_object* x_477; lean_object* x_478; uint8_t x_479; 
lean_dec_ref(x_301);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_474 = lean_ctor_get(x_295, 0);
lean_inc_ref(x_474);
x_475 = lean_ctor_get(x_295, 1);
lean_inc(x_475);
if (lean_is_exclusive(x_295)) {
 lean_ctor_release(x_295, 0);
 lean_ctor_release(x_295, 1);
 x_476 = x_295;
} else {
 lean_dec_ref(x_295);
 x_476 = lean_box(0);
}
x_477 = lean_nat_add(x_475, x_302);
lean_dec(x_302);
x_478 = lean_byte_array_size(x_474);
x_479 = lean_nat_dec_le(x_477, x_478);
if (x_479 == 0)
{
lean_object* x_480; 
lean_dec(x_477);
lean_dec(x_476);
lean_dec(x_475);
lean_dec_ref(x_474);
lean_dec_ref(x_303);
lean_dec_ref(x_300);
lean_dec_ref(x_296);
x_480 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_480;
}
else
{
if (x_479 == 0)
{
lean_object* x_481; 
lean_dec(x_477);
lean_dec(x_476);
lean_dec(x_475);
lean_dec_ref(x_474);
lean_dec_ref(x_303);
lean_dec_ref(x_300);
lean_dec_ref(x_296);
x_481 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_481;
}
else
{
lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; 
x_482 = l_ByteArray_extract(x_474, x_475, x_477);
if (lean_is_scalar(x_476)) {
 x_483 = lean_alloc_ctor(0, 2, 0);
} else {
 x_483 = x_476;
}
lean_ctor_set(x_483, 0, x_474);
lean_ctor_set(x_483, 1, x_477);
x_484 = lean_unsigned_to_nat(0u);
x_485 = lean_byte_array_size(x_300);
x_486 = lean_byte_array_size(x_482);
x_487 = lean_byte_array_copy_slice(x_482, x_484, x_300, x_485, x_486, x_473);
lean_dec_ref(x_482);
x_488 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_488, 0, x_483);
lean_ctor_set(x_488, 1, x_296);
x_7 = x_303;
x_8 = x_487;
x_9 = x_488;
goto block_13;
}
}
}
case 2:
{
lean_object* x_489; lean_object* x_490; lean_object* x_491; uint8_t x_492; 
lean_dec_ref(x_301);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_489 = lean_ctor_get(x_295, 0);
lean_inc_ref(x_489);
x_490 = lean_ctor_get(x_295, 1);
lean_inc(x_490);
lean_dec_ref(x_295);
x_491 = lean_byte_array_size(x_489);
x_492 = lean_nat_dec_lt(x_490, x_491);
if (x_492 == 0)
{
lean_object* x_493; 
lean_dec(x_490);
lean_dec_ref(x_489);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec_ref(x_296);
lean_dec(x_294);
x_493 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_493;
}
else
{
if (x_492 == 0)
{
uint8_t x_494; lean_object* x_495; lean_object* x_496; uint8_t x_497; 
x_494 = l_instInhabitedUInt8;
x_495 = lean_box(x_494);
x_496 = l_outOfBounds___redArg(x_495);
x_497 = lean_unbox(x_496);
lean_dec(x_496);
x_272 = x_294;
x_273 = x_473;
x_274 = x_296;
x_275 = x_303;
x_276 = x_300;
x_277 = x_302;
x_278 = x_489;
x_279 = x_490;
x_280 = x_497;
goto block_291;
}
else
{
uint8_t x_498; 
x_498 = lean_byte_array_fget(x_489, x_490);
x_272 = x_294;
x_273 = x_473;
x_274 = x_296;
x_275 = x_303;
x_276 = x_300;
x_277 = x_302;
x_278 = x_489;
x_279 = x_490;
x_280 = x_498;
goto block_291;
}
}
}
default: 
{
uint8_t x_499; lean_object* x_500; lean_object* x_501; uint8_t x_502; 
lean_dec_ref(x_301);
lean_dec_ref(x_296);
x_499 = lean_ctor_get_uint8(x_472, 0);
lean_dec_ref(x_472);
x_500 = lean_uint8_to_nat(x_499);
x_501 = lean_unsigned_to_nat(0u);
x_502 = lean_nat_dec_eq(x_500, x_501);
if (x_502 == 0)
{
uint8_t x_503; 
x_503 = lean_nat_dec_eq(x_500, x_294);
if (x_503 == 0)
{
lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_507; lean_object* x_508; lean_object* x_509; lean_object* x_510; uint8_t x_511; 
x_504 = lean_ctor_get(x_297, 0);
lean_inc(x_504);
x_505 = lean_ctor_get(x_297, 1);
lean_inc(x_505);
x_506 = lean_ctor_get(x_297, 2);
lean_inc_ref(x_506);
x_507 = lean_ctor_get(x_297, 3);
lean_inc(x_507);
x_508 = lean_ctor_get(x_297, 4);
lean_inc_ref(x_508);
x_509 = lean_unsigned_to_nat(2u);
x_510 = lean_nat_add(x_509, x_504);
x_511 = lean_nat_dec_lt(x_500, x_510);
if (x_511 == 0)
{
lean_object* x_512; uint8_t x_513; 
x_512 = lean_nat_add(x_510, x_505);
lean_dec(x_510);
x_513 = lean_nat_dec_lt(x_500, x_512);
lean_dec(x_512);
if (x_513 == 0)
{
lean_object* x_514; lean_object* x_515; 
lean_dec_ref(x_508);
lean_dec(x_507);
lean_dec_ref(x_506);
lean_dec(x_505);
lean_dec(x_504);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_293);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_514 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_514, 0, x_500);
x_515 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_515, 0, x_514);
return x_515;
}
else
{
lean_object* x_516; lean_object* x_517; lean_object* x_518; uint8_t x_519; 
x_516 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_516);
x_517 = lean_ctor_get(x_293, 1);
lean_inc(x_517);
lean_dec_ref(x_293);
x_518 = lean_byte_array_size(x_516);
x_519 = lean_nat_dec_lt(x_517, x_518);
if (x_519 == 0)
{
lean_object* x_520; 
lean_dec(x_517);
lean_dec_ref(x_516);
lean_dec_ref(x_508);
lean_dec(x_507);
lean_dec_ref(x_506);
lean_dec(x_505);
lean_dec(x_504);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_520 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_520;
}
else
{
if (x_519 == 0)
{
uint8_t x_521; lean_object* x_522; lean_object* x_523; uint8_t x_524; 
x_521 = l_instInhabitedUInt8;
x_522 = lean_box(x_521);
x_523 = l_outOfBounds___redArg(x_522);
x_524 = lean_unbox(x_523);
lean_dec(x_523);
x_110 = x_292;
x_111 = x_506;
x_112 = x_501;
x_113 = x_294;
x_114 = x_297;
x_115 = x_516;
x_116 = x_508;
x_117 = x_504;
x_118 = x_507;
x_119 = x_517;
x_120 = x_505;
x_121 = x_473;
x_122 = x_509;
x_123 = x_295;
x_124 = x_303;
x_125 = x_500;
x_126 = x_298;
x_127 = x_300;
x_128 = x_302;
x_129 = x_524;
goto block_154;
}
else
{
uint8_t x_525; 
x_525 = lean_byte_array_fget(x_516, x_517);
x_110 = x_292;
x_111 = x_506;
x_112 = x_501;
x_113 = x_294;
x_114 = x_297;
x_115 = x_516;
x_116 = x_508;
x_117 = x_504;
x_118 = x_507;
x_119 = x_517;
x_120 = x_505;
x_121 = x_473;
x_122 = x_509;
x_123 = x_295;
x_124 = x_303;
x_125 = x_500;
x_126 = x_298;
x_127 = x_300;
x_128 = x_302;
x_129 = x_525;
goto block_154;
}
}
}
}
else
{
lean_object* x_526; lean_object* x_527; lean_object* x_528; lean_object* x_529; 
lean_dec(x_510);
x_526 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_526);
x_527 = lean_ctor_get(x_293, 1);
lean_inc(x_527);
lean_dec_ref(x_293);
x_528 = lean_unsigned_to_nat(5u);
x_529 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_526, x_527, x_501, x_528);
if (lean_obj_tag(x_529) == 0)
{
lean_object* x_530; lean_object* x_531; lean_object* x_532; 
lean_dec_ref(x_508);
lean_dec(x_507);
lean_dec_ref(x_506);
lean_dec(x_505);
lean_dec(x_504);
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_530 = lean_ctor_get(x_529, 0);
lean_inc(x_530);
if (lean_is_exclusive(x_529)) {
 lean_ctor_release(x_529, 0);
 x_531 = x_529;
} else {
 lean_dec_ref(x_529);
 x_531 = lean_box(0);
}
if (lean_is_scalar(x_531)) {
 x_532 = lean_alloc_ctor(0, 1, 0);
} else {
 x_532 = x_531;
}
lean_ctor_set(x_532, 0, x_530);
return x_532;
}
else
{
lean_object* x_533; lean_object* x_534; lean_object* x_535; lean_object* x_536; lean_object* x_537; lean_object* x_538; uint32_t x_539; lean_object* x_540; lean_object* x_541; uint32_t x_542; uint8_t x_543; 
x_533 = lean_ctor_get(x_529, 0);
lean_inc(x_533);
lean_dec_ref(x_529);
x_534 = lean_ctor_get(x_533, 0);
lean_inc(x_534);
x_535 = lean_ctor_get(x_533, 1);
lean_inc(x_535);
lean_dec(x_533);
x_536 = lean_nat_sub(x_500, x_509);
x_537 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_538 = lean_array_get_borrowed(x_537, x_506, x_536);
lean_dec(x_536);
x_539 = lean_unbox_uint32(x_538);
x_540 = lean_uint32_to_nat(x_539);
x_541 = lean_nat_add(x_540, x_534);
lean_dec(x_534);
lean_dec(x_540);
x_542 = lean_uint32_of_nat(x_541);
x_543 = lean_nat_dec_lt(x_501, x_504);
if (x_543 == 0)
{
x_168 = x_292;
x_169 = x_294;
x_170 = x_501;
x_171 = x_473;
x_172 = x_541;
x_173 = x_295;
x_174 = x_535;
x_175 = x_303;
x_176 = x_298;
x_177 = x_542;
x_178 = x_300;
x_179 = x_302;
x_180 = x_297;
x_181 = x_504;
x_182 = x_505;
x_183 = x_506;
x_184 = x_507;
x_185 = x_508;
goto block_193;
}
else
{
lean_object* x_544; lean_object* x_545; lean_object* x_546; lean_object* x_547; lean_object* x_548; lean_object* x_549; 
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 lean_ctor_release(x_297, 2);
 lean_ctor_release(x_297, 3);
 lean_ctor_release(x_297, 4);
 x_544 = x_297;
} else {
 lean_dec_ref(x_297);
 x_544 = lean_box(0);
}
x_545 = lean_box_uint32(x_542);
x_546 = lean_array_set(x_506, x_507, x_545);
x_547 = lean_nat_add(x_507, x_294);
lean_dec(x_507);
x_548 = lean_nat_mod(x_547, x_504);
lean_dec(x_547);
lean_inc_ref(x_508);
lean_inc(x_548);
lean_inc_ref(x_546);
lean_inc(x_505);
lean_inc(x_504);
if (lean_is_scalar(x_544)) {
 x_549 = lean_alloc_ctor(0, 5, 0);
} else {
 x_549 = x_544;
}
lean_ctor_set(x_549, 0, x_504);
lean_ctor_set(x_549, 1, x_505);
lean_ctor_set(x_549, 2, x_546);
lean_ctor_set(x_549, 3, x_548);
lean_ctor_set(x_549, 4, x_508);
x_168 = x_292;
x_169 = x_294;
x_170 = x_501;
x_171 = x_473;
x_172 = x_541;
x_173 = x_295;
x_174 = x_535;
x_175 = x_303;
x_176 = x_298;
x_177 = x_542;
x_178 = x_300;
x_179 = x_302;
x_180 = x_549;
x_181 = x_504;
x_182 = x_505;
x_183 = x_546;
x_184 = x_548;
x_185 = x_508;
goto block_193;
}
}
}
}
else
{
lean_object* x_550; lean_object* x_551; lean_object* x_552; lean_object* x_553; 
x_550 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_550);
x_551 = lean_ctor_get(x_293, 1);
lean_inc(x_551);
lean_dec_ref(x_293);
x_552 = lean_unsigned_to_nat(5u);
x_553 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_550, x_551, x_501, x_552);
if (lean_obj_tag(x_553) == 0)
{
lean_object* x_554; lean_object* x_555; lean_object* x_556; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_554 = lean_ctor_get(x_553, 0);
lean_inc(x_554);
if (lean_is_exclusive(x_553)) {
 lean_ctor_release(x_553, 0);
 x_555 = x_553;
} else {
 lean_dec_ref(x_553);
 x_555 = lean_box(0);
}
if (lean_is_scalar(x_555)) {
 x_556 = lean_alloc_ctor(0, 1, 0);
} else {
 x_556 = x_555;
}
lean_ctor_set(x_556, 0, x_554);
return x_556;
}
else
{
lean_object* x_557; lean_object* x_558; lean_object* x_559; lean_object* x_560; lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; lean_object* x_565; lean_object* x_566; lean_object* x_567; uint32_t x_568; uint8_t x_569; 
x_557 = lean_ctor_get(x_553, 0);
lean_inc(x_557);
lean_dec_ref(x_553);
x_558 = lean_ctor_get(x_557, 0);
lean_inc(x_558);
x_559 = lean_ctor_get(x_557, 1);
lean_inc(x_559);
lean_dec(x_557);
x_560 = lean_ctor_get(x_297, 0);
lean_inc(x_560);
x_561 = lean_ctor_get(x_297, 1);
lean_inc(x_561);
x_562 = lean_ctor_get(x_297, 2);
lean_inc_ref(x_562);
x_563 = lean_ctor_get(x_297, 3);
lean_inc(x_563);
x_564 = lean_ctor_get(x_297, 4);
lean_inc_ref(x_564);
x_565 = lean_byte_array_size(x_300);
x_566 = lean_nat_add(x_298, x_565);
x_567 = lean_nat_sub(x_566, x_558);
lean_dec(x_558);
lean_dec(x_566);
x_568 = lean_uint32_of_nat(x_567);
x_569 = lean_nat_dec_lt(x_501, x_560);
if (x_569 == 0)
{
x_207 = x_292;
x_208 = x_294;
x_209 = x_501;
x_210 = x_559;
x_211 = x_567;
x_212 = x_473;
x_213 = x_295;
x_214 = x_568;
x_215 = x_303;
x_216 = x_298;
x_217 = x_300;
x_218 = x_302;
x_219 = x_297;
x_220 = x_560;
x_221 = x_561;
x_222 = x_562;
x_223 = x_563;
x_224 = x_564;
goto block_232;
}
else
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; lean_object* x_573; lean_object* x_574; lean_object* x_575; 
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 lean_ctor_release(x_297, 2);
 lean_ctor_release(x_297, 3);
 lean_ctor_release(x_297, 4);
 x_570 = x_297;
} else {
 lean_dec_ref(x_297);
 x_570 = lean_box(0);
}
x_571 = lean_box_uint32(x_568);
x_572 = lean_array_set(x_562, x_563, x_571);
x_573 = lean_nat_add(x_563, x_294);
lean_dec(x_563);
x_574 = lean_nat_mod(x_573, x_560);
lean_dec(x_573);
lean_inc_ref(x_564);
lean_inc(x_574);
lean_inc_ref(x_572);
lean_inc(x_561);
lean_inc(x_560);
if (lean_is_scalar(x_570)) {
 x_575 = lean_alloc_ctor(0, 5, 0);
} else {
 x_575 = x_570;
}
lean_ctor_set(x_575, 0, x_560);
lean_ctor_set(x_575, 1, x_561);
lean_ctor_set(x_575, 2, x_572);
lean_ctor_set(x_575, 3, x_574);
lean_ctor_set(x_575, 4, x_564);
x_207 = x_292;
x_208 = x_294;
x_209 = x_501;
x_210 = x_559;
x_211 = x_567;
x_212 = x_473;
x_213 = x_295;
x_214 = x_568;
x_215 = x_303;
x_216 = x_298;
x_217 = x_300;
x_218 = x_302;
x_219 = x_575;
x_220 = x_560;
x_221 = x_561;
x_222 = x_572;
x_223 = x_574;
x_224 = x_564;
goto block_232;
}
}
}
}
else
{
lean_object* x_576; lean_object* x_577; lean_object* x_578; lean_object* x_579; 
x_576 = lean_ctor_get(x_293, 0);
lean_inc_ref(x_576);
x_577 = lean_ctor_get(x_293, 1);
lean_inc(x_577);
lean_dec_ref(x_293);
x_578 = lean_unsigned_to_nat(5u);
x_579 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_576, x_577, x_501, x_578);
if (lean_obj_tag(x_579) == 0)
{
lean_object* x_580; lean_object* x_581; lean_object* x_582; 
lean_dec_ref(x_303);
lean_dec(x_302);
lean_dec_ref(x_300);
lean_dec(x_298);
lean_dec_ref(x_297);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec_ref(x_292);
lean_dec_ref(x_1);
x_580 = lean_ctor_get(x_579, 0);
lean_inc(x_580);
if (lean_is_exclusive(x_579)) {
 lean_ctor_release(x_579, 0);
 x_581 = x_579;
} else {
 lean_dec_ref(x_579);
 x_581 = lean_box(0);
}
if (lean_is_scalar(x_581)) {
 x_582 = lean_alloc_ctor(0, 1, 0);
} else {
 x_582 = x_581;
}
lean_ctor_set(x_582, 0, x_580);
return x_582;
}
else
{
lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; lean_object* x_587; lean_object* x_588; lean_object* x_589; lean_object* x_590; uint32_t x_591; uint8_t x_592; 
x_583 = lean_ctor_get(x_579, 0);
lean_inc(x_583);
lean_dec_ref(x_579);
x_584 = lean_ctor_get(x_583, 0);
lean_inc(x_584);
x_585 = lean_ctor_get(x_583, 1);
lean_inc(x_585);
lean_dec(x_583);
x_586 = lean_ctor_get(x_297, 0);
lean_inc(x_586);
x_587 = lean_ctor_get(x_297, 1);
lean_inc(x_587);
x_588 = lean_ctor_get(x_297, 2);
lean_inc_ref(x_588);
x_589 = lean_ctor_get(x_297, 3);
lean_inc(x_589);
x_590 = lean_ctor_get(x_297, 4);
lean_inc_ref(x_590);
x_591 = lean_uint32_of_nat(x_584);
x_592 = lean_nat_dec_lt(x_501, x_586);
if (x_592 == 0)
{
x_246 = x_292;
x_247 = x_294;
x_248 = x_501;
x_249 = x_585;
x_250 = x_591;
x_251 = x_473;
x_252 = x_295;
x_253 = x_584;
x_254 = x_303;
x_255 = x_298;
x_256 = x_300;
x_257 = x_302;
x_258 = x_297;
x_259 = x_586;
x_260 = x_587;
x_261 = x_588;
x_262 = x_589;
x_263 = x_590;
goto block_271;
}
else
{
lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; 
if (lean_is_exclusive(x_297)) {
 lean_ctor_release(x_297, 0);
 lean_ctor_release(x_297, 1);
 lean_ctor_release(x_297, 2);
 lean_ctor_release(x_297, 3);
 lean_ctor_release(x_297, 4);
 x_593 = x_297;
} else {
 lean_dec_ref(x_297);
 x_593 = lean_box(0);
}
x_594 = lean_box_uint32(x_591);
x_595 = lean_array_set(x_588, x_589, x_594);
x_596 = lean_nat_add(x_589, x_294);
lean_dec(x_589);
x_597 = lean_nat_mod(x_596, x_586);
lean_dec(x_596);
lean_inc_ref(x_590);
lean_inc(x_597);
lean_inc_ref(x_595);
lean_inc(x_587);
lean_inc(x_586);
if (lean_is_scalar(x_593)) {
 x_598 = lean_alloc_ctor(0, 5, 0);
} else {
 x_598 = x_593;
}
lean_ctor_set(x_598, 0, x_586);
lean_ctor_set(x_598, 1, x_587);
lean_ctor_set(x_598, 2, x_595);
lean_ctor_set(x_598, 3, x_597);
lean_ctor_set(x_598, 4, x_590);
x_246 = x_292;
x_247 = x_294;
x_248 = x_501;
x_249 = x_585;
x_250 = x_591;
x_251 = x_473;
x_252 = x_295;
x_253 = x_584;
x_254 = x_303;
x_255 = x_298;
x_256 = x_300;
x_257 = x_302;
x_258 = x_598;
x_259 = x_586;
x_260 = x_587;
x_261 = x_595;
x_262 = x_597;
x_263 = x_590;
goto block_271;
}
}
}
}
}
}
}
}
block_624:
{
if (x_612 == 0)
{
x_292 = x_600;
x_293 = x_602;
x_294 = x_601;
x_295 = x_604;
x_296 = x_605;
x_297 = x_606;
x_298 = x_608;
x_299 = x_607;
x_300 = x_610;
x_301 = x_611;
x_302 = x_609;
x_303 = x_603;
goto block_599;
}
else
{
lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; 
lean_dec(x_609);
x_613 = lean_ctor_get(x_603, 0);
lean_inc_ref(x_613);
x_614 = lean_ctor_get(x_603, 1);
lean_inc(x_614);
lean_dec_ref(x_603);
x_615 = lean_unsigned_to_nat(0u);
x_616 = lean_unsigned_to_nat(5u);
x_617 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_613, x_614, x_615, x_616);
if (lean_obj_tag(x_617) == 0)
{
uint8_t x_618; 
lean_dec_ref(x_611);
lean_dec_ref(x_610);
lean_dec(x_608);
lean_dec_ref(x_607);
lean_dec_ref(x_606);
lean_dec_ref(x_605);
lean_dec_ref(x_604);
lean_dec_ref(x_602);
lean_dec(x_601);
lean_dec_ref(x_600);
lean_dec_ref(x_1);
x_618 = !lean_is_exclusive(x_617);
if (x_618 == 0)
{
return x_617;
}
else
{
lean_object* x_619; lean_object* x_620; 
x_619 = lean_ctor_get(x_617, 0);
lean_inc(x_619);
lean_dec(x_617);
x_620 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_620, 0, x_619);
return x_620;
}
}
else
{
lean_object* x_621; lean_object* x_622; lean_object* x_623; 
x_621 = lean_ctor_get(x_617, 0);
lean_inc(x_621);
lean_dec_ref(x_617);
x_622 = lean_ctor_get(x_621, 0);
lean_inc(x_622);
x_623 = lean_ctor_get(x_621, 1);
lean_inc(x_623);
lean_dec(x_621);
x_292 = x_600;
x_293 = x_602;
x_294 = x_601;
x_295 = x_604;
x_296 = x_605;
x_297 = x_606;
x_298 = x_608;
x_299 = x_607;
x_300 = x_610;
x_301 = x_611;
x_302 = x_622;
x_303 = x_623;
goto block_599;
}
}
}
block_641:
{
lean_object* x_637; lean_object* x_638; lean_object* x_639; uint8_t x_640; 
x_637 = lean_ctor_get(x_629, 0);
lean_inc(x_637);
x_638 = lean_ctor_get(x_629, 1);
lean_inc(x_638);
lean_dec_ref(x_629);
x_639 = lean_unsigned_to_nat(0u);
x_640 = lean_nat_dec_eq(x_638, x_639);
if (x_640 == 0)
{
lean_dec(x_637);
x_600 = x_625;
x_601 = x_627;
x_602 = x_635;
x_603 = x_626;
x_604 = x_633;
x_605 = x_634;
x_606 = x_636;
x_607 = x_628;
x_608 = x_630;
x_609 = x_638;
x_610 = x_631;
x_611 = x_632;
x_612 = x_640;
goto block_624;
}
else
{
if (lean_obj_tag(x_637) == 0)
{
if (x_640 == 0)
{
x_600 = x_625;
x_601 = x_627;
x_602 = x_635;
x_603 = x_626;
x_604 = x_633;
x_605 = x_634;
x_606 = x_636;
x_607 = x_628;
x_608 = x_630;
x_609 = x_638;
x_610 = x_631;
x_611 = x_632;
x_612 = x_640;
goto block_624;
}
else
{
lean_dec(x_638);
lean_dec_ref(x_636);
lean_dec_ref(x_635);
lean_dec_ref(x_634);
lean_dec_ref(x_633);
lean_dec(x_630);
lean_dec_ref(x_628);
lean_dec(x_627);
lean_dec_ref(x_625);
lean_dec_ref(x_1);
x_7 = x_626;
x_8 = x_631;
x_9 = x_632;
goto block_13;
}
}
else
{
lean_dec(x_637);
x_600 = x_625;
x_601 = x_627;
x_602 = x_635;
x_603 = x_626;
x_604 = x_633;
x_605 = x_634;
x_606 = x_636;
x_607 = x_628;
x_608 = x_630;
x_609 = x_638;
x_610 = x_631;
x_611 = x_632;
x_612 = x_640;
goto block_624;
}
}
}
block_654:
{
lean_object* x_653; 
x_653 = lean_ctor_get(x_645, 1);
lean_inc_ref(x_653);
x_625 = x_642;
x_626 = x_643;
x_627 = x_644;
x_628 = x_645;
x_629 = x_653;
x_630 = x_646;
x_631 = x_647;
x_632 = x_648;
x_633 = x_649;
x_634 = x_650;
x_635 = x_651;
x_636 = x_652;
goto block_641;
}
block_665:
{
lean_object* x_662; lean_object* x_663; lean_object* x_664; 
x_662 = lean_ctor_get(x_660, 0);
lean_inc(x_662);
x_663 = lean_ctor_get(x_660, 1);
lean_inc(x_663);
lean_inc_ref(x_660);
lean_inc_ref(x_4);
x_664 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_664, 0, x_4);
lean_ctor_set(x_664, 1, x_660);
x_642 = x_655;
x_643 = x_657;
x_644 = x_656;
x_645 = x_659;
x_646 = x_658;
x_647 = x_661;
x_648 = x_664;
x_649 = x_4;
x_650 = x_660;
x_651 = x_662;
x_652 = x_663;
goto block_654;
}
block_716:
{
lean_object* x_676; lean_object* x_677; uint8_t x_678; 
x_676 = lean_byte_array_size(x_2);
x_677 = lean_nat_add(x_673, x_676);
x_678 = lean_nat_dec_le(x_677, x_674);
if (x_678 == 0)
{
lean_object* x_679; uint8_t x_680; 
lean_dec(x_677);
x_679 = lean_nat_add(x_674, x_670);
x_680 = lean_nat_dec_le(x_679, x_673);
if (x_680 == 0)
{
uint8_t x_681; 
lean_dec(x_679);
x_681 = lean_nat_dec_le(x_673, x_674);
if (x_681 == 0)
{
lean_object* x_682; lean_object* x_683; lean_object* x_684; lean_object* x_685; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; uint8_t x_690; 
x_682 = lean_nat_sub(x_673, x_674);
x_683 = lean_nat_sub(x_670, x_682);
lean_dec(x_682);
lean_dec(x_670);
x_684 = l_ByteArray_extract(x_1, x_674, x_673);
x_685 = lean_unsigned_to_nat(0u);
x_686 = lean_byte_array_size(x_684);
x_687 = lean_byte_array_copy_slice(x_684, x_685, x_2, x_676, x_686, x_671);
lean_dec_ref(x_684);
x_688 = lean_byte_array_size(x_687);
x_689 = lean_nat_sub(x_688, x_673);
x_690 = lean_nat_dec_le(x_683, x_689);
lean_dec(x_689);
if (x_690 == 0)
{
lean_object* x_691; lean_object* x_692; lean_object* x_693; 
x_691 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
lean_inc(x_669);
x_692 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_692, 0, x_685);
lean_ctor_set(x_692, 1, x_683);
lean_ctor_set(x_692, 2, x_669);
x_693 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_691, x_692, x_667, x_687, x_685);
x_655 = x_666;
x_656 = x_669;
x_657 = x_668;
x_658 = x_673;
x_659 = x_672;
x_660 = x_675;
x_661 = x_693;
goto block_665;
}
else
{
lean_object* x_694; lean_object* x_695; lean_object* x_696; lean_object* x_697; 
lean_dec_ref(x_667);
x_694 = lean_nat_add(x_673, x_683);
lean_dec(x_683);
lean_inc(x_673);
x_695 = l_ByteArray_extract(x_687, x_673, x_694);
lean_dec(x_694);
x_696 = lean_byte_array_size(x_695);
x_697 = lean_byte_array_copy_slice(x_695, x_685, x_687, x_688, x_696, x_671);
lean_dec_ref(x_695);
x_655 = x_666;
x_656 = x_669;
x_657 = x_668;
x_658 = x_673;
x_659 = x_672;
x_660 = x_675;
x_661 = x_697;
goto block_665;
}
}
else
{
lean_object* x_698; lean_object* x_699; uint8_t x_700; 
lean_dec_ref(x_667);
x_698 = lean_nat_sub(x_674, x_673);
lean_dec(x_674);
x_699 = lean_nat_add(x_698, x_670);
x_700 = lean_nat_dec_le(x_699, x_676);
if (x_700 == 0)
{
lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; 
lean_dec(x_699);
x_701 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__1___boxed), 4, 1);
lean_closure_set(x_701, 0, x_698);
x_702 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___closed__9));
x_703 = lean_unsigned_to_nat(0u);
lean_inc(x_669);
x_704 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_704, 0, x_703);
lean_ctor_set(x_704, 1, x_670);
lean_ctor_set(x_704, 2, x_669);
x_705 = l___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___redArg(x_702, x_704, x_701, x_2, x_703);
x_655 = x_666;
x_656 = x_669;
x_657 = x_668;
x_658 = x_673;
x_659 = x_672;
x_660 = x_675;
x_661 = x_705;
goto block_665;
}
else
{
lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; 
lean_dec(x_670);
x_706 = l_ByteArray_extract(x_2, x_698, x_699);
lean_dec(x_699);
x_707 = lean_unsigned_to_nat(0u);
x_708 = lean_byte_array_size(x_706);
x_709 = lean_byte_array_copy_slice(x_706, x_707, x_2, x_676, x_708, x_671);
lean_dec_ref(x_706);
x_655 = x_666;
x_656 = x_669;
x_657 = x_668;
x_658 = x_673;
x_659 = x_672;
x_660 = x_675;
x_661 = x_709;
goto block_665;
}
}
}
else
{
lean_object* x_710; lean_object* x_711; lean_object* x_712; lean_object* x_713; 
lean_dec(x_670);
lean_dec_ref(x_667);
x_710 = l_ByteArray_extract(x_1, x_674, x_679);
lean_dec(x_679);
x_711 = lean_unsigned_to_nat(0u);
x_712 = lean_byte_array_size(x_710);
x_713 = lean_byte_array_copy_slice(x_710, x_711, x_2, x_676, x_712, x_671);
lean_dec_ref(x_710);
x_655 = x_666;
x_656 = x_669;
x_657 = x_668;
x_658 = x_673;
x_659 = x_672;
x_660 = x_675;
x_661 = x_713;
goto block_665;
}
}
else
{
lean_object* x_714; lean_object* x_715; 
lean_dec_ref(x_675);
lean_dec(x_673);
lean_dec_ref(x_672);
lean_dec(x_669);
lean_dec_ref(x_668);
lean_dec_ref(x_667);
lean_dec_ref(x_666);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_714 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_714, 0, x_674);
lean_ctor_set(x_714, 1, x_670);
lean_ctor_set(x_714, 2, x_677);
x_715 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_715, 0, x_714);
return x_715;
}
}
block_729:
{
lean_object* x_728; 
x_728 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_728, 0, x_726);
lean_ctor_set(x_728, 1, x_727);
x_666 = x_718;
x_667 = x_717;
x_668 = x_720;
x_669 = x_719;
x_670 = x_722;
x_671 = x_723;
x_672 = x_725;
x_673 = x_724;
x_674 = x_721;
x_675 = x_728;
goto block_716;
}
block_755:
{
uint8_t x_748; 
x_748 = lean_nat_dec_lt(x_735, x_744);
lean_dec(x_735);
if (x_748 == 0)
{
lean_dec_ref(x_747);
lean_dec(x_746);
lean_dec_ref(x_745);
lean_dec(x_744);
lean_dec(x_743);
x_717 = x_731;
x_718 = x_730;
x_719 = x_733;
x_720 = x_732;
x_721 = x_736;
x_722 = x_737;
x_723 = x_738;
x_724 = x_740;
x_725 = x_739;
x_726 = x_741;
x_727 = x_742;
goto block_729;
}
else
{
lean_object* x_749; lean_object* x_750; lean_object* x_751; lean_object* x_752; lean_object* x_753; lean_object* x_754; 
lean_dec_ref(x_742);
x_749 = lean_unsigned_to_nat(256u);
x_750 = lean_nat_mul(x_744, x_749);
x_751 = lean_nat_mod(x_736, x_750);
lean_dec(x_750);
x_752 = lean_box_uint32(x_734);
x_753 = lean_array_set(x_747, x_751, x_752);
lean_dec(x_751);
x_754 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_754, 0, x_743);
lean_ctor_set(x_754, 1, x_744);
lean_ctor_set(x_754, 2, x_745);
lean_ctor_set(x_754, 3, x_746);
lean_ctor_set(x_754, 4, x_753);
x_717 = x_731;
x_718 = x_730;
x_719 = x_733;
x_720 = x_732;
x_721 = x_736;
x_722 = x_737;
x_723 = x_738;
x_724 = x_740;
x_725 = x_739;
x_726 = x_741;
x_727 = x_754;
goto block_729;
}
}
block_768:
{
lean_object* x_767; 
x_767 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_767, 0, x_765);
lean_ctor_set(x_767, 1, x_766);
x_666 = x_757;
x_667 = x_756;
x_668 = x_759;
x_669 = x_758;
x_670 = x_760;
x_671 = x_761;
x_672 = x_763;
x_673 = x_762;
x_674 = x_764;
x_675 = x_767;
goto block_716;
}
block_794:
{
uint8_t x_787; 
x_787 = lean_nat_dec_lt(x_774, x_783);
lean_dec(x_774);
if (x_787 == 0)
{
lean_dec_ref(x_786);
lean_dec(x_785);
lean_dec_ref(x_784);
lean_dec(x_783);
lean_dec(x_782);
x_756 = x_770;
x_757 = x_769;
x_758 = x_773;
x_759 = x_772;
x_760 = x_775;
x_761 = x_776;
x_762 = x_779;
x_763 = x_778;
x_764 = x_777;
x_765 = x_780;
x_766 = x_781;
goto block_768;
}
else
{
lean_object* x_788; lean_object* x_789; lean_object* x_790; lean_object* x_791; lean_object* x_792; lean_object* x_793; 
lean_dec_ref(x_781);
x_788 = lean_unsigned_to_nat(256u);
x_789 = lean_nat_mul(x_783, x_788);
x_790 = lean_nat_mod(x_777, x_789);
lean_dec(x_789);
x_791 = lean_box_uint32(x_771);
x_792 = lean_array_set(x_786, x_790, x_791);
lean_dec(x_790);
x_793 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_793, 0, x_782);
lean_ctor_set(x_793, 1, x_783);
lean_ctor_set(x_793, 2, x_784);
lean_ctor_set(x_793, 3, x_785);
lean_ctor_set(x_793, 4, x_792);
x_756 = x_770;
x_757 = x_769;
x_758 = x_773;
x_759 = x_772;
x_760 = x_775;
x_761 = x_776;
x_762 = x_779;
x_763 = x_778;
x_764 = x_777;
x_765 = x_780;
x_766 = x_793;
goto block_768;
}
}
block_807:
{
lean_object* x_806; 
x_806 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_806, 0, x_803);
lean_ctor_set(x_806, 1, x_805);
x_666 = x_796;
x_667 = x_795;
x_668 = x_798;
x_669 = x_797;
x_670 = x_799;
x_671 = x_800;
x_672 = x_802;
x_673 = x_801;
x_674 = x_804;
x_675 = x_806;
goto block_716;
}
block_833:
{
uint8_t x_826; 
x_826 = lean_nat_dec_lt(x_813, x_822);
lean_dec(x_813);
if (x_826 == 0)
{
lean_dec_ref(x_825);
lean_dec(x_824);
lean_dec_ref(x_823);
lean_dec(x_822);
lean_dec(x_821);
x_795 = x_809;
x_796 = x_808;
x_797 = x_812;
x_798 = x_811;
x_799 = x_814;
x_800 = x_816;
x_801 = x_818;
x_802 = x_817;
x_803 = x_810;
x_804 = x_819;
x_805 = x_820;
goto block_807;
}
else
{
lean_object* x_827; lean_object* x_828; lean_object* x_829; lean_object* x_830; lean_object* x_831; lean_object* x_832; 
lean_dec_ref(x_820);
x_827 = lean_unsigned_to_nat(256u);
x_828 = lean_nat_mul(x_822, x_827);
x_829 = lean_nat_mod(x_819, x_828);
lean_dec(x_828);
x_830 = lean_box_uint32(x_815);
x_831 = lean_array_set(x_825, x_829, x_830);
lean_dec(x_829);
x_832 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_832, 0, x_821);
lean_ctor_set(x_832, 1, x_822);
lean_ctor_set(x_832, 2, x_823);
lean_ctor_set(x_832, 3, x_824);
lean_ctor_set(x_832, 4, x_831);
x_795 = x_809;
x_796 = x_808;
x_797 = x_812;
x_798 = x_811;
x_799 = x_814;
x_800 = x_816;
x_801 = x_818;
x_802 = x_817;
x_803 = x_810;
x_804 = x_819;
x_805 = x_832;
goto block_807;
}
}
block_846:
{
lean_object* x_845; 
x_845 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_845, 0, x_839);
lean_ctor_set(x_845, 1, x_844);
x_666 = x_835;
x_667 = x_834;
x_668 = x_837;
x_669 = x_836;
x_670 = x_838;
x_671 = x_840;
x_672 = x_843;
x_673 = x_842;
x_674 = x_841;
x_675 = x_845;
goto block_716;
}
block_872:
{
uint8_t x_866; 
x_866 = lean_nat_dec_lt(x_851, x_862);
lean_dec(x_851);
if (x_866 == 0)
{
lean_dec_ref(x_865);
lean_dec(x_864);
lean_dec_ref(x_863);
lean_dec(x_862);
lean_dec(x_861);
x_834 = x_848;
x_835 = x_847;
x_836 = x_850;
x_837 = x_849;
x_838 = x_853;
x_839 = x_852;
x_840 = x_854;
x_841 = x_855;
x_842 = x_858;
x_843 = x_857;
x_844 = x_860;
goto block_846;
}
else
{
lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; 
lean_dec_ref(x_860);
x_867 = lean_nat_mul(x_862, x_856);
x_868 = lean_nat_mod(x_855, x_867);
lean_dec(x_867);
x_869 = lean_box_uint32(x_859);
x_870 = lean_array_set(x_865, x_868, x_869);
lean_dec(x_868);
x_871 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_871, 0, x_861);
lean_ctor_set(x_871, 1, x_862);
lean_ctor_set(x_871, 2, x_863);
lean_ctor_set(x_871, 3, x_864);
lean_ctor_set(x_871, 4, x_870);
x_834 = x_848;
x_835 = x_847;
x_836 = x_850;
x_837 = x_849;
x_838 = x_853;
x_839 = x_852;
x_840 = x_854;
x_841 = x_855;
x_842 = x_858;
x_843 = x_857;
x_844 = x_871;
goto block_846;
}
}
block_916:
{
lean_object* x_897; lean_object* x_898; lean_object* x_899; lean_object* x_900; lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; uint32_t x_907; lean_object* x_908; uint32_t x_909; uint8_t x_910; 
x_897 = lean_nat_add(x_885, x_880);
lean_dec(x_885);
x_898 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_898, 0, x_895);
lean_ctor_set(x_898, 1, x_897);
x_899 = lean_nat_sub(x_894, x_882);
lean_dec(x_894);
x_900 = lean_nat_sub(x_899, x_881);
lean_dec(x_899);
x_901 = lean_unsigned_to_nat(256u);
x_902 = lean_nat_mul(x_900, x_901);
lean_dec(x_900);
x_903 = lean_uint8_to_nat(x_896);
x_904 = lean_nat_add(x_902, x_903);
lean_dec(x_902);
x_905 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_906 = lean_array_get_borrowed(x_905, x_887, x_904);
lean_dec(x_904);
x_907 = lean_unbox_uint32(x_906);
x_908 = lean_uint32_to_nat(x_907);
x_909 = lean_uint32_of_nat(x_908);
x_910 = lean_nat_dec_lt(x_889, x_881);
if (x_910 == 0)
{
lean_dec(x_892);
lean_dec_ref(x_891);
lean_dec_ref(x_887);
lean_dec(x_884);
lean_dec(x_881);
x_847 = x_875;
x_848 = x_874;
x_849 = x_888;
x_850 = x_880;
x_851 = x_889;
x_852 = x_898;
x_853 = x_883;
x_854 = x_890;
x_855 = x_908;
x_856 = x_901;
x_857 = x_886;
x_858 = x_893;
x_859 = x_909;
x_860 = x_6;
x_861 = x_873;
x_862 = x_876;
x_863 = x_877;
x_864 = x_878;
x_865 = x_879;
goto block_872;
}
else
{
lean_object* x_911; lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; 
lean_dec_ref(x_879);
lean_dec(x_878);
lean_dec_ref(x_877);
lean_dec(x_876);
lean_dec(x_873);
lean_dec_ref(x_6);
x_911 = lean_box_uint32(x_909);
x_912 = lean_array_set(x_891, x_892, x_911);
x_913 = lean_nat_add(x_892, x_880);
lean_dec(x_892);
x_914 = lean_nat_mod(x_913, x_881);
lean_dec(x_913);
lean_inc_ref(x_887);
lean_inc(x_914);
lean_inc_ref(x_912);
lean_inc(x_884);
lean_inc(x_881);
x_915 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_915, 0, x_881);
lean_ctor_set(x_915, 1, x_884);
lean_ctor_set(x_915, 2, x_912);
lean_ctor_set(x_915, 3, x_914);
lean_ctor_set(x_915, 4, x_887);
x_847 = x_875;
x_848 = x_874;
x_849 = x_888;
x_850 = x_880;
x_851 = x_889;
x_852 = x_898;
x_853 = x_883;
x_854 = x_890;
x_855 = x_908;
x_856 = x_901;
x_857 = x_886;
x_858 = x_893;
x_859 = x_909;
x_860 = x_915;
x_861 = x_881;
x_862 = x_884;
x_863 = x_912;
x_864 = x_914;
x_865 = x_887;
goto block_872;
}
}
block_938:
{
lean_object* x_927; lean_object* x_928; lean_object* x_929; lean_object* x_930; lean_object* x_931; lean_object* x_932; lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; 
x_927 = lean_nat_add(x_921, x_919);
lean_dec(x_921);
x_928 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_928, 0, x_925);
lean_ctor_set(x_928, 1, x_927);
x_929 = lean_box(x_926);
x_930 = lean_mk_array(x_920, x_929);
x_931 = lean_byte_array_mk(x_930);
x_932 = lean_unsigned_to_nat(0u);
x_933 = lean_byte_array_size(x_2);
x_934 = lean_byte_array_size(x_931);
x_935 = lean_byte_array_copy_slice(x_931, x_932, x_2, x_933, x_934, x_922);
lean_dec_ref(x_931);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_936 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_936, 0, x_5);
lean_ctor_set(x_936, 1, x_6);
lean_inc_ref(x_936);
lean_inc_ref(x_928);
x_937 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_937, 0, x_928);
lean_ctor_set(x_937, 1, x_936);
x_642 = x_917;
x_643 = x_918;
x_644 = x_919;
x_645 = x_924;
x_646 = x_923;
x_647 = x_935;
x_648 = x_937;
x_649 = x_928;
x_650 = x_936;
x_651 = x_5;
x_652 = x_6;
goto block_654;
}
block_1253:
{
lean_object* x_943; uint8_t x_944; 
x_943 = lean_ctor_get(x_940, 0);
lean_inc_ref(x_943);
x_944 = !lean_is_exclusive(x_943);
if (x_944 == 0)
{
lean_object* x_945; lean_object* x_946; lean_object* x_947; lean_object* x_948; lean_object* x_949; 
x_945 = lean_ctor_get(x_940, 1);
x_946 = lean_ctor_get(x_943, 0);
x_947 = lean_ctor_get(x_943, 1);
lean_dec(x_947);
x_948 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_949 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_949, 0, x_948);
lean_closure_set(x_949, 1, x_1);
if (lean_obj_tag(x_946) == 0)
{
lean_object* x_950; 
lean_inc_ref(x_945);
lean_dec(x_941);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_943, 1, x_6);
lean_ctor_set(x_943, 0, x_5);
lean_inc_ref(x_943);
lean_inc_ref(x_4);
x_950 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_950, 0, x_4);
lean_ctor_set(x_950, 1, x_943);
x_625 = x_949;
x_626 = x_942;
x_627 = x_939;
x_628 = x_940;
x_629 = x_945;
x_630 = x_948;
x_631 = x_2;
x_632 = x_950;
x_633 = x_4;
x_634 = x_943;
x_635 = x_5;
x_636 = x_6;
goto block_641;
}
else
{
uint8_t x_951; 
x_951 = 0;
switch (lean_obj_tag(x_946)) {
case 0:
{
lean_object* x_952; 
lean_inc_ref(x_945);
lean_dec(x_941);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_943, 1, x_6);
lean_ctor_set(x_943, 0, x_5);
lean_inc_ref(x_943);
lean_inc_ref(x_4);
x_952 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_952, 0, x_4);
lean_ctor_set(x_952, 1, x_943);
x_625 = x_949;
x_626 = x_942;
x_627 = x_939;
x_628 = x_940;
x_629 = x_945;
x_630 = x_948;
x_631 = x_2;
x_632 = x_952;
x_633 = x_4;
x_634 = x_943;
x_635 = x_5;
x_636 = x_6;
goto block_641;
}
case 1:
{
uint8_t x_953; 
lean_inc_ref(x_945);
x_953 = !lean_is_exclusive(x_4);
if (x_953 == 0)
{
lean_object* x_954; lean_object* x_955; lean_object* x_956; lean_object* x_957; uint8_t x_958; 
x_954 = lean_ctor_get(x_4, 0);
x_955 = lean_ctor_get(x_4, 1);
x_956 = lean_nat_add(x_955, x_941);
lean_dec(x_941);
x_957 = lean_byte_array_size(x_954);
x_958 = lean_nat_dec_le(x_956, x_957);
if (x_958 == 0)
{
lean_object* x_959; 
lean_dec(x_956);
lean_free_object(x_4);
lean_dec(x_955);
lean_dec_ref(x_954);
lean_dec_ref(x_949);
lean_free_object(x_943);
lean_dec_ref(x_945);
lean_dec_ref(x_942);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_959 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_959;
}
else
{
if (x_958 == 0)
{
lean_object* x_960; 
lean_dec(x_956);
lean_free_object(x_4);
lean_dec(x_955);
lean_dec_ref(x_954);
lean_dec_ref(x_949);
lean_free_object(x_943);
lean_dec_ref(x_945);
lean_dec_ref(x_942);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_960 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_960;
}
else
{
lean_object* x_961; lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; 
x_961 = l_ByteArray_extract(x_954, x_955, x_956);
lean_ctor_set(x_4, 1, x_956);
x_962 = lean_unsigned_to_nat(0u);
x_963 = lean_byte_array_size(x_2);
x_964 = lean_byte_array_size(x_961);
x_965 = lean_byte_array_copy_slice(x_961, x_962, x_2, x_963, x_964, x_951);
lean_dec_ref(x_961);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_943, 1, x_6);
lean_ctor_set(x_943, 0, x_5);
lean_inc_ref(x_943);
lean_inc_ref(x_4);
x_966 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_966, 0, x_4);
lean_ctor_set(x_966, 1, x_943);
x_625 = x_949;
x_626 = x_942;
x_627 = x_939;
x_628 = x_940;
x_629 = x_945;
x_630 = x_948;
x_631 = x_965;
x_632 = x_966;
x_633 = x_4;
x_634 = x_943;
x_635 = x_5;
x_636 = x_6;
goto block_641;
}
}
}
else
{
lean_object* x_967; lean_object* x_968; lean_object* x_969; lean_object* x_970; uint8_t x_971; 
x_967 = lean_ctor_get(x_4, 0);
x_968 = lean_ctor_get(x_4, 1);
lean_inc(x_968);
lean_inc(x_967);
lean_dec(x_4);
x_969 = lean_nat_add(x_968, x_941);
lean_dec(x_941);
x_970 = lean_byte_array_size(x_967);
x_971 = lean_nat_dec_le(x_969, x_970);
if (x_971 == 0)
{
lean_object* x_972; 
lean_dec(x_969);
lean_dec(x_968);
lean_dec_ref(x_967);
lean_dec_ref(x_949);
lean_free_object(x_943);
lean_dec_ref(x_945);
lean_dec_ref(x_942);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_972 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_972;
}
else
{
if (x_971 == 0)
{
lean_object* x_973; 
lean_dec(x_969);
lean_dec(x_968);
lean_dec_ref(x_967);
lean_dec_ref(x_949);
lean_free_object(x_943);
lean_dec_ref(x_945);
lean_dec_ref(x_942);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_973 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_973;
}
else
{
lean_object* x_974; lean_object* x_975; lean_object* x_976; lean_object* x_977; lean_object* x_978; lean_object* x_979; lean_object* x_980; 
x_974 = l_ByteArray_extract(x_967, x_968, x_969);
x_975 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_975, 0, x_967);
lean_ctor_set(x_975, 1, x_969);
x_976 = lean_unsigned_to_nat(0u);
x_977 = lean_byte_array_size(x_2);
x_978 = lean_byte_array_size(x_974);
x_979 = lean_byte_array_copy_slice(x_974, x_976, x_2, x_977, x_978, x_951);
lean_dec_ref(x_974);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
lean_ctor_set(x_943, 1, x_6);
lean_ctor_set(x_943, 0, x_5);
lean_inc_ref(x_943);
lean_inc_ref(x_975);
x_980 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_980, 0, x_975);
lean_ctor_set(x_980, 1, x_943);
x_625 = x_949;
x_626 = x_942;
x_627 = x_939;
x_628 = x_940;
x_629 = x_945;
x_630 = x_948;
x_631 = x_979;
x_632 = x_980;
x_633 = x_975;
x_634 = x_943;
x_635 = x_5;
x_636 = x_6;
goto block_641;
}
}
}
}
case 2:
{
lean_object* x_981; lean_object* x_982; lean_object* x_983; uint8_t x_984; 
lean_free_object(x_943);
x_981 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_981);
x_982 = lean_ctor_get(x_4, 1);
lean_inc(x_982);
lean_dec_ref(x_4);
x_983 = lean_byte_array_size(x_981);
x_984 = lean_nat_dec_lt(x_982, x_983);
if (x_984 == 0)
{
lean_object* x_985; 
lean_dec(x_982);
lean_dec_ref(x_981);
lean_dec_ref(x_949);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_985 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_985;
}
else
{
if (x_984 == 0)
{
uint8_t x_986; lean_object* x_987; lean_object* x_988; uint8_t x_989; 
x_986 = l_instInhabitedUInt8;
x_987 = lean_box(x_986);
x_988 = l_outOfBounds___redArg(x_987);
x_989 = lean_unbox(x_988);
lean_dec(x_988);
x_917 = x_949;
x_918 = x_942;
x_919 = x_939;
x_920 = x_941;
x_921 = x_982;
x_922 = x_951;
x_923 = x_948;
x_924 = x_940;
x_925 = x_981;
x_926 = x_989;
goto block_938;
}
else
{
uint8_t x_990; 
x_990 = lean_byte_array_fget(x_981, x_982);
x_917 = x_949;
x_918 = x_942;
x_919 = x_939;
x_920 = x_941;
x_921 = x_982;
x_922 = x_951;
x_923 = x_948;
x_924 = x_940;
x_925 = x_981;
x_926 = x_990;
goto block_938;
}
}
}
default: 
{
uint8_t x_991; lean_object* x_992; lean_object* x_993; uint8_t x_994; 
lean_free_object(x_943);
x_991 = lean_ctor_get_uint8(x_946, 0);
lean_dec_ref(x_946);
x_992 = lean_uint8_to_nat(x_991);
x_993 = lean_unsigned_to_nat(0u);
x_994 = lean_nat_dec_eq(x_992, x_993);
if (x_994 == 0)
{
uint8_t x_995; 
x_995 = lean_nat_dec_eq(x_992, x_939);
if (x_995 == 0)
{
lean_object* x_996; lean_object* x_997; lean_object* x_998; lean_object* x_999; lean_object* x_1000; lean_object* x_1001; lean_object* x_1002; uint8_t x_1003; 
x_996 = lean_ctor_get(x_6, 0);
x_997 = lean_ctor_get(x_6, 1);
x_998 = lean_ctor_get(x_6, 2);
x_999 = lean_ctor_get(x_6, 3);
x_1000 = lean_ctor_get(x_6, 4);
x_1001 = lean_unsigned_to_nat(2u);
x_1002 = lean_nat_add(x_1001, x_996);
x_1003 = lean_nat_dec_lt(x_992, x_1002);
if (x_1003 == 0)
{
lean_object* x_1004; uint8_t x_1005; 
x_1004 = lean_nat_add(x_1002, x_997);
lean_dec(x_1002);
x_1005 = lean_nat_dec_lt(x_992, x_1004);
lean_dec(x_1004);
if (x_1005 == 0)
{
lean_object* x_1006; lean_object* x_1007; 
lean_dec_ref(x_949);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1006 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_1006, 0, x_992);
x_1007 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1007, 0, x_1006);
return x_1007;
}
else
{
lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; uint8_t x_1011; 
x_1008 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1008);
x_1009 = lean_ctor_get(x_5, 1);
lean_inc(x_1009);
lean_dec_ref(x_5);
x_1010 = lean_byte_array_size(x_1008);
x_1011 = lean_nat_dec_lt(x_1009, x_1010);
if (x_1011 == 0)
{
lean_object* x_1012; 
lean_dec(x_1009);
lean_dec_ref(x_1008);
lean_dec_ref(x_949);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1012 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1012;
}
else
{
if (x_1011 == 0)
{
uint8_t x_1013; lean_object* x_1014; lean_object* x_1015; uint8_t x_1016; 
x_1013 = l_instInhabitedUInt8;
x_1014 = lean_box(x_1013);
x_1015 = l_outOfBounds___redArg(x_1014);
x_1016 = lean_unbox(x_1015);
lean_dec(x_1015);
lean_inc_ref_n(x_1000, 2);
lean_inc_n(x_999, 2);
lean_inc_ref_n(x_998, 2);
lean_inc_n(x_997, 2);
lean_inc_ref(x_949);
lean_inc_n(x_996, 2);
x_873 = x_996;
x_874 = x_949;
x_875 = x_949;
x_876 = x_997;
x_877 = x_998;
x_878 = x_999;
x_879 = x_1000;
x_880 = x_939;
x_881 = x_996;
x_882 = x_1001;
x_883 = x_941;
x_884 = x_997;
x_885 = x_1009;
x_886 = x_940;
x_887 = x_1000;
x_888 = x_942;
x_889 = x_993;
x_890 = x_951;
x_891 = x_998;
x_892 = x_999;
x_893 = x_948;
x_894 = x_992;
x_895 = x_1008;
x_896 = x_1016;
goto block_916;
}
else
{
uint8_t x_1017; 
x_1017 = lean_byte_array_fget(x_1008, x_1009);
lean_inc_ref_n(x_1000, 2);
lean_inc_n(x_999, 2);
lean_inc_ref_n(x_998, 2);
lean_inc_n(x_997, 2);
lean_inc_ref(x_949);
lean_inc_n(x_996, 2);
x_873 = x_996;
x_874 = x_949;
x_875 = x_949;
x_876 = x_997;
x_877 = x_998;
x_878 = x_999;
x_879 = x_1000;
x_880 = x_939;
x_881 = x_996;
x_882 = x_1001;
x_883 = x_941;
x_884 = x_997;
x_885 = x_1009;
x_886 = x_940;
x_887 = x_1000;
x_888 = x_942;
x_889 = x_993;
x_890 = x_951;
x_891 = x_998;
x_892 = x_999;
x_893 = x_948;
x_894 = x_992;
x_895 = x_1008;
x_896 = x_1017;
goto block_916;
}
}
}
}
else
{
lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; 
lean_inc_ref(x_1000);
lean_inc(x_999);
lean_inc_ref(x_998);
lean_inc(x_997);
lean_inc(x_996);
lean_dec(x_1002);
x_1018 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1018);
x_1019 = lean_ctor_get(x_5, 1);
lean_inc(x_1019);
lean_dec_ref(x_5);
x_1020 = lean_unsigned_to_nat(5u);
x_1021 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1018, x_1019, x_993, x_1020);
if (lean_obj_tag(x_1021) == 0)
{
uint8_t x_1022; 
lean_dec_ref(x_1000);
lean_dec(x_999);
lean_dec_ref(x_998);
lean_dec(x_997);
lean_dec(x_996);
lean_dec_ref(x_949);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1022 = !lean_is_exclusive(x_1021);
if (x_1022 == 0)
{
return x_1021;
}
else
{
lean_object* x_1023; lean_object* x_1024; 
x_1023 = lean_ctor_get(x_1021, 0);
lean_inc(x_1023);
lean_dec(x_1021);
x_1024 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1024, 0, x_1023);
return x_1024;
}
}
else
{
lean_object* x_1025; lean_object* x_1026; lean_object* x_1027; lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; uint32_t x_1031; lean_object* x_1032; lean_object* x_1033; uint32_t x_1034; uint8_t x_1035; 
x_1025 = lean_ctor_get(x_1021, 0);
lean_inc(x_1025);
lean_dec_ref(x_1021);
x_1026 = lean_ctor_get(x_1025, 0);
lean_inc(x_1026);
x_1027 = lean_ctor_get(x_1025, 1);
lean_inc(x_1027);
lean_dec(x_1025);
x_1028 = lean_nat_sub(x_992, x_1001);
x_1029 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_1030 = lean_array_get_borrowed(x_1029, x_998, x_1028);
lean_dec(x_1028);
x_1031 = lean_unbox_uint32(x_1030);
x_1032 = lean_uint32_to_nat(x_1031);
x_1033 = lean_nat_add(x_1032, x_1026);
lean_dec(x_1026);
lean_dec(x_1032);
x_1034 = lean_uint32_of_nat(x_1033);
x_1035 = lean_nat_dec_lt(x_993, x_996);
if (x_1035 == 0)
{
lean_inc_ref(x_949);
x_808 = x_949;
x_809 = x_949;
x_810 = x_1027;
x_811 = x_942;
x_812 = x_939;
x_813 = x_993;
x_814 = x_941;
x_815 = x_1034;
x_816 = x_951;
x_817 = x_940;
x_818 = x_948;
x_819 = x_1033;
x_820 = x_6;
x_821 = x_996;
x_822 = x_997;
x_823 = x_998;
x_824 = x_999;
x_825 = x_1000;
goto block_833;
}
else
{
uint8_t x_1036; 
x_1036 = !lean_is_exclusive(x_6);
if (x_1036 == 0)
{
lean_object* x_1037; lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; 
x_1037 = lean_ctor_get(x_6, 4);
lean_dec(x_1037);
x_1038 = lean_ctor_get(x_6, 3);
lean_dec(x_1038);
x_1039 = lean_ctor_get(x_6, 2);
lean_dec(x_1039);
x_1040 = lean_ctor_get(x_6, 1);
lean_dec(x_1040);
x_1041 = lean_ctor_get(x_6, 0);
lean_dec(x_1041);
x_1042 = lean_box_uint32(x_1034);
x_1043 = lean_array_set(x_998, x_999, x_1042);
x_1044 = lean_nat_add(x_999, x_939);
lean_dec(x_999);
x_1045 = lean_nat_mod(x_1044, x_996);
lean_dec(x_1044);
lean_inc_ref(x_1000);
lean_inc(x_1045);
lean_inc_ref(x_1043);
lean_inc(x_997);
lean_inc(x_996);
lean_ctor_set(x_6, 3, x_1045);
lean_ctor_set(x_6, 2, x_1043);
lean_inc_ref(x_949);
x_808 = x_949;
x_809 = x_949;
x_810 = x_1027;
x_811 = x_942;
x_812 = x_939;
x_813 = x_993;
x_814 = x_941;
x_815 = x_1034;
x_816 = x_951;
x_817 = x_940;
x_818 = x_948;
x_819 = x_1033;
x_820 = x_6;
x_821 = x_996;
x_822 = x_997;
x_823 = x_1043;
x_824 = x_1045;
x_825 = x_1000;
goto block_833;
}
else
{
lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; lean_object* x_1049; lean_object* x_1050; 
lean_dec(x_6);
x_1046 = lean_box_uint32(x_1034);
x_1047 = lean_array_set(x_998, x_999, x_1046);
x_1048 = lean_nat_add(x_999, x_939);
lean_dec(x_999);
x_1049 = lean_nat_mod(x_1048, x_996);
lean_dec(x_1048);
lean_inc_ref(x_1000);
lean_inc(x_1049);
lean_inc_ref(x_1047);
lean_inc(x_997);
lean_inc(x_996);
x_1050 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1050, 0, x_996);
lean_ctor_set(x_1050, 1, x_997);
lean_ctor_set(x_1050, 2, x_1047);
lean_ctor_set(x_1050, 3, x_1049);
lean_ctor_set(x_1050, 4, x_1000);
lean_inc_ref(x_949);
x_808 = x_949;
x_809 = x_949;
x_810 = x_1027;
x_811 = x_942;
x_812 = x_939;
x_813 = x_993;
x_814 = x_941;
x_815 = x_1034;
x_816 = x_951;
x_817 = x_940;
x_818 = x_948;
x_819 = x_1033;
x_820 = x_1050;
x_821 = x_996;
x_822 = x_997;
x_823 = x_1047;
x_824 = x_1049;
x_825 = x_1000;
goto block_833;
}
}
}
}
}
else
{
lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; 
x_1051 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1051);
x_1052 = lean_ctor_get(x_5, 1);
lean_inc(x_1052);
lean_dec_ref(x_5);
x_1053 = lean_unsigned_to_nat(5u);
x_1054 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1051, x_1052, x_993, x_1053);
if (lean_obj_tag(x_1054) == 0)
{
uint8_t x_1055; 
lean_dec_ref(x_949);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1055 = !lean_is_exclusive(x_1054);
if (x_1055 == 0)
{
return x_1054;
}
else
{
lean_object* x_1056; lean_object* x_1057; 
x_1056 = lean_ctor_get(x_1054, 0);
lean_inc(x_1056);
lean_dec(x_1054);
x_1057 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1057, 0, x_1056);
return x_1057;
}
}
else
{
lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; lean_object* x_1063; lean_object* x_1064; lean_object* x_1065; lean_object* x_1066; lean_object* x_1067; lean_object* x_1068; uint32_t x_1069; uint8_t x_1070; 
x_1058 = lean_ctor_get(x_1054, 0);
lean_inc(x_1058);
lean_dec_ref(x_1054);
x_1059 = lean_ctor_get(x_1058, 0);
lean_inc(x_1059);
x_1060 = lean_ctor_get(x_1058, 1);
lean_inc(x_1060);
lean_dec(x_1058);
x_1061 = lean_ctor_get(x_6, 0);
lean_inc(x_1061);
x_1062 = lean_ctor_get(x_6, 1);
lean_inc(x_1062);
x_1063 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1063);
x_1064 = lean_ctor_get(x_6, 3);
lean_inc(x_1064);
x_1065 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1065);
x_1066 = lean_byte_array_size(x_2);
x_1067 = lean_nat_add(x_948, x_1066);
x_1068 = lean_nat_sub(x_1067, x_1059);
lean_dec(x_1059);
lean_dec(x_1067);
x_1069 = lean_uint32_of_nat(x_1068);
x_1070 = lean_nat_dec_lt(x_993, x_1061);
if (x_1070 == 0)
{
lean_inc_ref(x_949);
x_769 = x_949;
x_770 = x_949;
x_771 = x_1069;
x_772 = x_942;
x_773 = x_939;
x_774 = x_993;
x_775 = x_941;
x_776 = x_951;
x_777 = x_1068;
x_778 = x_940;
x_779 = x_948;
x_780 = x_1060;
x_781 = x_6;
x_782 = x_1061;
x_783 = x_1062;
x_784 = x_1063;
x_785 = x_1064;
x_786 = x_1065;
goto block_794;
}
else
{
uint8_t x_1071; 
x_1071 = !lean_is_exclusive(x_6);
if (x_1071 == 0)
{
lean_object* x_1072; lean_object* x_1073; lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; lean_object* x_1079; lean_object* x_1080; 
x_1072 = lean_ctor_get(x_6, 4);
lean_dec(x_1072);
x_1073 = lean_ctor_get(x_6, 3);
lean_dec(x_1073);
x_1074 = lean_ctor_get(x_6, 2);
lean_dec(x_1074);
x_1075 = lean_ctor_get(x_6, 1);
lean_dec(x_1075);
x_1076 = lean_ctor_get(x_6, 0);
lean_dec(x_1076);
x_1077 = lean_box_uint32(x_1069);
x_1078 = lean_array_set(x_1063, x_1064, x_1077);
x_1079 = lean_nat_add(x_1064, x_939);
lean_dec(x_1064);
x_1080 = lean_nat_mod(x_1079, x_1061);
lean_dec(x_1079);
lean_inc_ref(x_1065);
lean_inc(x_1080);
lean_inc_ref(x_1078);
lean_inc(x_1062);
lean_inc(x_1061);
lean_ctor_set(x_6, 3, x_1080);
lean_ctor_set(x_6, 2, x_1078);
lean_inc_ref(x_949);
x_769 = x_949;
x_770 = x_949;
x_771 = x_1069;
x_772 = x_942;
x_773 = x_939;
x_774 = x_993;
x_775 = x_941;
x_776 = x_951;
x_777 = x_1068;
x_778 = x_940;
x_779 = x_948;
x_780 = x_1060;
x_781 = x_6;
x_782 = x_1061;
x_783 = x_1062;
x_784 = x_1078;
x_785 = x_1080;
x_786 = x_1065;
goto block_794;
}
else
{
lean_object* x_1081; lean_object* x_1082; lean_object* x_1083; lean_object* x_1084; lean_object* x_1085; 
lean_dec(x_6);
x_1081 = lean_box_uint32(x_1069);
x_1082 = lean_array_set(x_1063, x_1064, x_1081);
x_1083 = lean_nat_add(x_1064, x_939);
lean_dec(x_1064);
x_1084 = lean_nat_mod(x_1083, x_1061);
lean_dec(x_1083);
lean_inc_ref(x_1065);
lean_inc(x_1084);
lean_inc_ref(x_1082);
lean_inc(x_1062);
lean_inc(x_1061);
x_1085 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1085, 0, x_1061);
lean_ctor_set(x_1085, 1, x_1062);
lean_ctor_set(x_1085, 2, x_1082);
lean_ctor_set(x_1085, 3, x_1084);
lean_ctor_set(x_1085, 4, x_1065);
lean_inc_ref(x_949);
x_769 = x_949;
x_770 = x_949;
x_771 = x_1069;
x_772 = x_942;
x_773 = x_939;
x_774 = x_993;
x_775 = x_941;
x_776 = x_951;
x_777 = x_1068;
x_778 = x_940;
x_779 = x_948;
x_780 = x_1060;
x_781 = x_1085;
x_782 = x_1061;
x_783 = x_1062;
x_784 = x_1082;
x_785 = x_1084;
x_786 = x_1065;
goto block_794;
}
}
}
}
}
else
{
lean_object* x_1086; lean_object* x_1087; lean_object* x_1088; lean_object* x_1089; 
x_1086 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1086);
x_1087 = lean_ctor_get(x_5, 1);
lean_inc(x_1087);
lean_dec_ref(x_5);
x_1088 = lean_unsigned_to_nat(5u);
x_1089 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1086, x_1087, x_993, x_1088);
if (lean_obj_tag(x_1089) == 0)
{
uint8_t x_1090; 
lean_dec_ref(x_949);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1090 = !lean_is_exclusive(x_1089);
if (x_1090 == 0)
{
return x_1089;
}
else
{
lean_object* x_1091; lean_object* x_1092; 
x_1091 = lean_ctor_get(x_1089, 0);
lean_inc(x_1091);
lean_dec(x_1089);
x_1092 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1092, 0, x_1091);
return x_1092;
}
}
else
{
lean_object* x_1093; lean_object* x_1094; lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; lean_object* x_1100; uint32_t x_1101; uint8_t x_1102; 
x_1093 = lean_ctor_get(x_1089, 0);
lean_inc(x_1093);
lean_dec_ref(x_1089);
x_1094 = lean_ctor_get(x_1093, 0);
lean_inc(x_1094);
x_1095 = lean_ctor_get(x_1093, 1);
lean_inc(x_1095);
lean_dec(x_1093);
x_1096 = lean_ctor_get(x_6, 0);
lean_inc(x_1096);
x_1097 = lean_ctor_get(x_6, 1);
lean_inc(x_1097);
x_1098 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1098);
x_1099 = lean_ctor_get(x_6, 3);
lean_inc(x_1099);
x_1100 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1100);
x_1101 = lean_uint32_of_nat(x_1094);
x_1102 = lean_nat_dec_lt(x_993, x_1096);
if (x_1102 == 0)
{
lean_inc_ref(x_949);
x_730 = x_949;
x_731 = x_949;
x_732 = x_942;
x_733 = x_939;
x_734 = x_1101;
x_735 = x_993;
x_736 = x_1094;
x_737 = x_941;
x_738 = x_951;
x_739 = x_940;
x_740 = x_948;
x_741 = x_1095;
x_742 = x_6;
x_743 = x_1096;
x_744 = x_1097;
x_745 = x_1098;
x_746 = x_1099;
x_747 = x_1100;
goto block_755;
}
else
{
uint8_t x_1103; 
x_1103 = !lean_is_exclusive(x_6);
if (x_1103 == 0)
{
lean_object* x_1104; lean_object* x_1105; lean_object* x_1106; lean_object* x_1107; lean_object* x_1108; lean_object* x_1109; lean_object* x_1110; lean_object* x_1111; lean_object* x_1112; 
x_1104 = lean_ctor_get(x_6, 4);
lean_dec(x_1104);
x_1105 = lean_ctor_get(x_6, 3);
lean_dec(x_1105);
x_1106 = lean_ctor_get(x_6, 2);
lean_dec(x_1106);
x_1107 = lean_ctor_get(x_6, 1);
lean_dec(x_1107);
x_1108 = lean_ctor_get(x_6, 0);
lean_dec(x_1108);
x_1109 = lean_box_uint32(x_1101);
x_1110 = lean_array_set(x_1098, x_1099, x_1109);
x_1111 = lean_nat_add(x_1099, x_939);
lean_dec(x_1099);
x_1112 = lean_nat_mod(x_1111, x_1096);
lean_dec(x_1111);
lean_inc_ref(x_1100);
lean_inc(x_1112);
lean_inc_ref(x_1110);
lean_inc(x_1097);
lean_inc(x_1096);
lean_ctor_set(x_6, 3, x_1112);
lean_ctor_set(x_6, 2, x_1110);
lean_inc_ref(x_949);
x_730 = x_949;
x_731 = x_949;
x_732 = x_942;
x_733 = x_939;
x_734 = x_1101;
x_735 = x_993;
x_736 = x_1094;
x_737 = x_941;
x_738 = x_951;
x_739 = x_940;
x_740 = x_948;
x_741 = x_1095;
x_742 = x_6;
x_743 = x_1096;
x_744 = x_1097;
x_745 = x_1110;
x_746 = x_1112;
x_747 = x_1100;
goto block_755;
}
else
{
lean_object* x_1113; lean_object* x_1114; lean_object* x_1115; lean_object* x_1116; lean_object* x_1117; 
lean_dec(x_6);
x_1113 = lean_box_uint32(x_1101);
x_1114 = lean_array_set(x_1098, x_1099, x_1113);
x_1115 = lean_nat_add(x_1099, x_939);
lean_dec(x_1099);
x_1116 = lean_nat_mod(x_1115, x_1096);
lean_dec(x_1115);
lean_inc_ref(x_1100);
lean_inc(x_1116);
lean_inc_ref(x_1114);
lean_inc(x_1097);
lean_inc(x_1096);
x_1117 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_1117, 0, x_1096);
lean_ctor_set(x_1117, 1, x_1097);
lean_ctor_set(x_1117, 2, x_1114);
lean_ctor_set(x_1117, 3, x_1116);
lean_ctor_set(x_1117, 4, x_1100);
lean_inc_ref(x_949);
x_730 = x_949;
x_731 = x_949;
x_732 = x_942;
x_733 = x_939;
x_734 = x_1101;
x_735 = x_993;
x_736 = x_1094;
x_737 = x_941;
x_738 = x_951;
x_739 = x_940;
x_740 = x_948;
x_741 = x_1095;
x_742 = x_1117;
x_743 = x_1096;
x_744 = x_1097;
x_745 = x_1114;
x_746 = x_1116;
x_747 = x_1100;
goto block_755;
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
lean_object* x_1118; lean_object* x_1119; lean_object* x_1120; lean_object* x_1121; 
x_1118 = lean_ctor_get(x_940, 1);
x_1119 = lean_ctor_get(x_943, 0);
lean_inc(x_1119);
lean_dec(x_943);
x_1120 = lean_byte_array_size(x_1);
lean_inc_ref(x_1);
x_1121 = lean_alloc_closure((void*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___lam__0___boxed), 5, 2);
lean_closure_set(x_1121, 0, x_1120);
lean_closure_set(x_1121, 1, x_1);
if (lean_obj_tag(x_1119) == 0)
{
lean_object* x_1122; lean_object* x_1123; 
lean_inc_ref(x_1118);
lean_dec(x_941);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1122 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1122, 0, x_5);
lean_ctor_set(x_1122, 1, x_6);
lean_inc_ref(x_1122);
lean_inc_ref(x_4);
x_1123 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1123, 0, x_4);
lean_ctor_set(x_1123, 1, x_1122);
x_625 = x_1121;
x_626 = x_942;
x_627 = x_939;
x_628 = x_940;
x_629 = x_1118;
x_630 = x_1120;
x_631 = x_2;
x_632 = x_1123;
x_633 = x_4;
x_634 = x_1122;
x_635 = x_5;
x_636 = x_6;
goto block_641;
}
else
{
uint8_t x_1124; 
x_1124 = 0;
switch (lean_obj_tag(x_1119)) {
case 0:
{
lean_object* x_1125; lean_object* x_1126; 
lean_inc_ref(x_1118);
lean_dec(x_941);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1125 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1125, 0, x_5);
lean_ctor_set(x_1125, 1, x_6);
lean_inc_ref(x_1125);
lean_inc_ref(x_4);
x_1126 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1126, 0, x_4);
lean_ctor_set(x_1126, 1, x_1125);
x_625 = x_1121;
x_626 = x_942;
x_627 = x_939;
x_628 = x_940;
x_629 = x_1118;
x_630 = x_1120;
x_631 = x_2;
x_632 = x_1126;
x_633 = x_4;
x_634 = x_1125;
x_635 = x_5;
x_636 = x_6;
goto block_641;
}
case 1:
{
lean_object* x_1127; lean_object* x_1128; lean_object* x_1129; lean_object* x_1130; lean_object* x_1131; uint8_t x_1132; 
lean_inc_ref(x_1118);
x_1127 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_1127);
x_1128 = lean_ctor_get(x_4, 1);
lean_inc(x_1128);
if (lean_is_exclusive(x_4)) {
 lean_ctor_release(x_4, 0);
 lean_ctor_release(x_4, 1);
 x_1129 = x_4;
} else {
 lean_dec_ref(x_4);
 x_1129 = lean_box(0);
}
x_1130 = lean_nat_add(x_1128, x_941);
lean_dec(x_941);
x_1131 = lean_byte_array_size(x_1127);
x_1132 = lean_nat_dec_le(x_1130, x_1131);
if (x_1132 == 0)
{
lean_object* x_1133; 
lean_dec(x_1130);
lean_dec(x_1129);
lean_dec(x_1128);
lean_dec_ref(x_1127);
lean_dec_ref(x_1121);
lean_dec_ref(x_1118);
lean_dec_ref(x_942);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1133 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1133;
}
else
{
if (x_1132 == 0)
{
lean_object* x_1134; 
lean_dec(x_1130);
lean_dec(x_1129);
lean_dec(x_1128);
lean_dec_ref(x_1127);
lean_dec_ref(x_1121);
lean_dec_ref(x_1118);
lean_dec_ref(x_942);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1134 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1134;
}
else
{
lean_object* x_1135; lean_object* x_1136; lean_object* x_1137; lean_object* x_1138; lean_object* x_1139; lean_object* x_1140; lean_object* x_1141; lean_object* x_1142; 
x_1135 = l_ByteArray_extract(x_1127, x_1128, x_1130);
if (lean_is_scalar(x_1129)) {
 x_1136 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1136 = x_1129;
}
lean_ctor_set(x_1136, 0, x_1127);
lean_ctor_set(x_1136, 1, x_1130);
x_1137 = lean_unsigned_to_nat(0u);
x_1138 = lean_byte_array_size(x_2);
x_1139 = lean_byte_array_size(x_1135);
x_1140 = lean_byte_array_copy_slice(x_1135, x_1137, x_2, x_1138, x_1139, x_1124);
lean_dec_ref(x_1135);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
x_1141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1141, 0, x_5);
lean_ctor_set(x_1141, 1, x_6);
lean_inc_ref(x_1141);
lean_inc_ref(x_1136);
x_1142 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1142, 0, x_1136);
lean_ctor_set(x_1142, 1, x_1141);
x_625 = x_1121;
x_626 = x_942;
x_627 = x_939;
x_628 = x_940;
x_629 = x_1118;
x_630 = x_1120;
x_631 = x_1140;
x_632 = x_1142;
x_633 = x_1136;
x_634 = x_1141;
x_635 = x_5;
x_636 = x_6;
goto block_641;
}
}
}
case 2:
{
lean_object* x_1143; lean_object* x_1144; lean_object* x_1145; uint8_t x_1146; 
x_1143 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_1143);
x_1144 = lean_ctor_get(x_4, 1);
lean_inc(x_1144);
lean_dec_ref(x_4);
x_1145 = lean_byte_array_size(x_1143);
x_1146 = lean_nat_dec_lt(x_1144, x_1145);
if (x_1146 == 0)
{
lean_object* x_1147; 
lean_dec(x_1144);
lean_dec_ref(x_1143);
lean_dec_ref(x_1121);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1147 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1147;
}
else
{
if (x_1146 == 0)
{
uint8_t x_1148; lean_object* x_1149; lean_object* x_1150; uint8_t x_1151; 
x_1148 = l_instInhabitedUInt8;
x_1149 = lean_box(x_1148);
x_1150 = l_outOfBounds___redArg(x_1149);
x_1151 = lean_unbox(x_1150);
lean_dec(x_1150);
x_917 = x_1121;
x_918 = x_942;
x_919 = x_939;
x_920 = x_941;
x_921 = x_1144;
x_922 = x_1124;
x_923 = x_1120;
x_924 = x_940;
x_925 = x_1143;
x_926 = x_1151;
goto block_938;
}
else
{
uint8_t x_1152; 
x_1152 = lean_byte_array_fget(x_1143, x_1144);
x_917 = x_1121;
x_918 = x_942;
x_919 = x_939;
x_920 = x_941;
x_921 = x_1144;
x_922 = x_1124;
x_923 = x_1120;
x_924 = x_940;
x_925 = x_1143;
x_926 = x_1152;
goto block_938;
}
}
}
default: 
{
uint8_t x_1153; lean_object* x_1154; lean_object* x_1155; uint8_t x_1156; 
x_1153 = lean_ctor_get_uint8(x_1119, 0);
lean_dec_ref(x_1119);
x_1154 = lean_uint8_to_nat(x_1153);
x_1155 = lean_unsigned_to_nat(0u);
x_1156 = lean_nat_dec_eq(x_1154, x_1155);
if (x_1156 == 0)
{
uint8_t x_1157; 
x_1157 = lean_nat_dec_eq(x_1154, x_939);
if (x_1157 == 0)
{
lean_object* x_1158; lean_object* x_1159; lean_object* x_1160; lean_object* x_1161; lean_object* x_1162; lean_object* x_1163; lean_object* x_1164; uint8_t x_1165; 
x_1158 = lean_ctor_get(x_6, 0);
x_1159 = lean_ctor_get(x_6, 1);
x_1160 = lean_ctor_get(x_6, 2);
x_1161 = lean_ctor_get(x_6, 3);
x_1162 = lean_ctor_get(x_6, 4);
x_1163 = lean_unsigned_to_nat(2u);
x_1164 = lean_nat_add(x_1163, x_1158);
x_1165 = lean_nat_dec_lt(x_1154, x_1164);
if (x_1165 == 0)
{
lean_object* x_1166; uint8_t x_1167; 
x_1166 = lean_nat_add(x_1164, x_1159);
lean_dec(x_1164);
x_1167 = lean_nat_dec_lt(x_1154, x_1166);
lean_dec(x_1166);
if (x_1167 == 0)
{
lean_object* x_1168; lean_object* x_1169; 
lean_dec_ref(x_1121);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1168 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_1168, 0, x_1154);
x_1169 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1169, 0, x_1168);
return x_1169;
}
else
{
lean_object* x_1170; lean_object* x_1171; lean_object* x_1172; uint8_t x_1173; 
x_1170 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1170);
x_1171 = lean_ctor_get(x_5, 1);
lean_inc(x_1171);
lean_dec_ref(x_5);
x_1172 = lean_byte_array_size(x_1170);
x_1173 = lean_nat_dec_lt(x_1171, x_1172);
if (x_1173 == 0)
{
lean_object* x_1174; 
lean_dec(x_1171);
lean_dec_ref(x_1170);
lean_dec_ref(x_1121);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1174 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_1174;
}
else
{
if (x_1173 == 0)
{
uint8_t x_1175; lean_object* x_1176; lean_object* x_1177; uint8_t x_1178; 
x_1175 = l_instInhabitedUInt8;
x_1176 = lean_box(x_1175);
x_1177 = l_outOfBounds___redArg(x_1176);
x_1178 = lean_unbox(x_1177);
lean_dec(x_1177);
lean_inc_ref_n(x_1162, 2);
lean_inc_n(x_1161, 2);
lean_inc_ref_n(x_1160, 2);
lean_inc_n(x_1159, 2);
lean_inc_ref(x_1121);
lean_inc_n(x_1158, 2);
x_873 = x_1158;
x_874 = x_1121;
x_875 = x_1121;
x_876 = x_1159;
x_877 = x_1160;
x_878 = x_1161;
x_879 = x_1162;
x_880 = x_939;
x_881 = x_1158;
x_882 = x_1163;
x_883 = x_941;
x_884 = x_1159;
x_885 = x_1171;
x_886 = x_940;
x_887 = x_1162;
x_888 = x_942;
x_889 = x_1155;
x_890 = x_1124;
x_891 = x_1160;
x_892 = x_1161;
x_893 = x_1120;
x_894 = x_1154;
x_895 = x_1170;
x_896 = x_1178;
goto block_916;
}
else
{
uint8_t x_1179; 
x_1179 = lean_byte_array_fget(x_1170, x_1171);
lean_inc_ref_n(x_1162, 2);
lean_inc_n(x_1161, 2);
lean_inc_ref_n(x_1160, 2);
lean_inc_n(x_1159, 2);
lean_inc_ref(x_1121);
lean_inc_n(x_1158, 2);
x_873 = x_1158;
x_874 = x_1121;
x_875 = x_1121;
x_876 = x_1159;
x_877 = x_1160;
x_878 = x_1161;
x_879 = x_1162;
x_880 = x_939;
x_881 = x_1158;
x_882 = x_1163;
x_883 = x_941;
x_884 = x_1159;
x_885 = x_1171;
x_886 = x_940;
x_887 = x_1162;
x_888 = x_942;
x_889 = x_1155;
x_890 = x_1124;
x_891 = x_1160;
x_892 = x_1161;
x_893 = x_1120;
x_894 = x_1154;
x_895 = x_1170;
x_896 = x_1179;
goto block_916;
}
}
}
}
else
{
lean_object* x_1180; lean_object* x_1181; lean_object* x_1182; lean_object* x_1183; 
lean_inc_ref(x_1162);
lean_inc(x_1161);
lean_inc_ref(x_1160);
lean_inc(x_1159);
lean_inc(x_1158);
lean_dec(x_1164);
x_1180 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1180);
x_1181 = lean_ctor_get(x_5, 1);
lean_inc(x_1181);
lean_dec_ref(x_5);
x_1182 = lean_unsigned_to_nat(5u);
x_1183 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1180, x_1181, x_1155, x_1182);
if (lean_obj_tag(x_1183) == 0)
{
lean_object* x_1184; lean_object* x_1185; lean_object* x_1186; 
lean_dec_ref(x_1162);
lean_dec(x_1161);
lean_dec_ref(x_1160);
lean_dec(x_1159);
lean_dec(x_1158);
lean_dec_ref(x_1121);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
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
lean_object* x_1187; lean_object* x_1188; lean_object* x_1189; lean_object* x_1190; lean_object* x_1191; lean_object* x_1192; uint32_t x_1193; lean_object* x_1194; lean_object* x_1195; uint32_t x_1196; uint8_t x_1197; 
x_1187 = lean_ctor_get(x_1183, 0);
lean_inc(x_1187);
lean_dec_ref(x_1183);
x_1188 = lean_ctor_get(x_1187, 0);
lean_inc(x_1188);
x_1189 = lean_ctor_get(x_1187, 1);
lean_inc(x_1189);
lean_dec(x_1187);
x_1190 = lean_nat_sub(x_1154, x_1163);
x_1191 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_1192 = lean_array_get_borrowed(x_1191, x_1160, x_1190);
lean_dec(x_1190);
x_1193 = lean_unbox_uint32(x_1192);
x_1194 = lean_uint32_to_nat(x_1193);
x_1195 = lean_nat_add(x_1194, x_1188);
lean_dec(x_1188);
lean_dec(x_1194);
x_1196 = lean_uint32_of_nat(x_1195);
x_1197 = lean_nat_dec_lt(x_1155, x_1158);
if (x_1197 == 0)
{
lean_inc_ref(x_1121);
x_808 = x_1121;
x_809 = x_1121;
x_810 = x_1189;
x_811 = x_942;
x_812 = x_939;
x_813 = x_1155;
x_814 = x_941;
x_815 = x_1196;
x_816 = x_1124;
x_817 = x_940;
x_818 = x_1120;
x_819 = x_1195;
x_820 = x_6;
x_821 = x_1158;
x_822 = x_1159;
x_823 = x_1160;
x_824 = x_1161;
x_825 = x_1162;
goto block_833;
}
else
{
lean_object* x_1198; lean_object* x_1199; lean_object* x_1200; lean_object* x_1201; lean_object* x_1202; lean_object* x_1203; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1198 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1198 = lean_box(0);
}
x_1199 = lean_box_uint32(x_1196);
x_1200 = lean_array_set(x_1160, x_1161, x_1199);
x_1201 = lean_nat_add(x_1161, x_939);
lean_dec(x_1161);
x_1202 = lean_nat_mod(x_1201, x_1158);
lean_dec(x_1201);
lean_inc_ref(x_1162);
lean_inc(x_1202);
lean_inc_ref(x_1200);
lean_inc(x_1159);
lean_inc(x_1158);
if (lean_is_scalar(x_1198)) {
 x_1203 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1203 = x_1198;
}
lean_ctor_set(x_1203, 0, x_1158);
lean_ctor_set(x_1203, 1, x_1159);
lean_ctor_set(x_1203, 2, x_1200);
lean_ctor_set(x_1203, 3, x_1202);
lean_ctor_set(x_1203, 4, x_1162);
lean_inc_ref(x_1121);
x_808 = x_1121;
x_809 = x_1121;
x_810 = x_1189;
x_811 = x_942;
x_812 = x_939;
x_813 = x_1155;
x_814 = x_941;
x_815 = x_1196;
x_816 = x_1124;
x_817 = x_940;
x_818 = x_1120;
x_819 = x_1195;
x_820 = x_1203;
x_821 = x_1158;
x_822 = x_1159;
x_823 = x_1200;
x_824 = x_1202;
x_825 = x_1162;
goto block_833;
}
}
}
}
else
{
lean_object* x_1204; lean_object* x_1205; lean_object* x_1206; lean_object* x_1207; 
x_1204 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1204);
x_1205 = lean_ctor_get(x_5, 1);
lean_inc(x_1205);
lean_dec_ref(x_5);
x_1206 = lean_unsigned_to_nat(5u);
x_1207 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1204, x_1205, x_1155, x_1206);
if (lean_obj_tag(x_1207) == 0)
{
lean_object* x_1208; lean_object* x_1209; lean_object* x_1210; 
lean_dec_ref(x_1121);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1208 = lean_ctor_get(x_1207, 0);
lean_inc(x_1208);
if (lean_is_exclusive(x_1207)) {
 lean_ctor_release(x_1207, 0);
 x_1209 = x_1207;
} else {
 lean_dec_ref(x_1207);
 x_1209 = lean_box(0);
}
if (lean_is_scalar(x_1209)) {
 x_1210 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1210 = x_1209;
}
lean_ctor_set(x_1210, 0, x_1208);
return x_1210;
}
else
{
lean_object* x_1211; lean_object* x_1212; lean_object* x_1213; lean_object* x_1214; lean_object* x_1215; lean_object* x_1216; lean_object* x_1217; lean_object* x_1218; lean_object* x_1219; lean_object* x_1220; lean_object* x_1221; uint32_t x_1222; uint8_t x_1223; 
x_1211 = lean_ctor_get(x_1207, 0);
lean_inc(x_1211);
lean_dec_ref(x_1207);
x_1212 = lean_ctor_get(x_1211, 0);
lean_inc(x_1212);
x_1213 = lean_ctor_get(x_1211, 1);
lean_inc(x_1213);
lean_dec(x_1211);
x_1214 = lean_ctor_get(x_6, 0);
lean_inc(x_1214);
x_1215 = lean_ctor_get(x_6, 1);
lean_inc(x_1215);
x_1216 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1216);
x_1217 = lean_ctor_get(x_6, 3);
lean_inc(x_1217);
x_1218 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1218);
x_1219 = lean_byte_array_size(x_2);
x_1220 = lean_nat_add(x_1120, x_1219);
x_1221 = lean_nat_sub(x_1220, x_1212);
lean_dec(x_1212);
lean_dec(x_1220);
x_1222 = lean_uint32_of_nat(x_1221);
x_1223 = lean_nat_dec_lt(x_1155, x_1214);
if (x_1223 == 0)
{
lean_inc_ref(x_1121);
x_769 = x_1121;
x_770 = x_1121;
x_771 = x_1222;
x_772 = x_942;
x_773 = x_939;
x_774 = x_1155;
x_775 = x_941;
x_776 = x_1124;
x_777 = x_1221;
x_778 = x_940;
x_779 = x_1120;
x_780 = x_1213;
x_781 = x_6;
x_782 = x_1214;
x_783 = x_1215;
x_784 = x_1216;
x_785 = x_1217;
x_786 = x_1218;
goto block_794;
}
else
{
lean_object* x_1224; lean_object* x_1225; lean_object* x_1226; lean_object* x_1227; lean_object* x_1228; lean_object* x_1229; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1224 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1224 = lean_box(0);
}
x_1225 = lean_box_uint32(x_1222);
x_1226 = lean_array_set(x_1216, x_1217, x_1225);
x_1227 = lean_nat_add(x_1217, x_939);
lean_dec(x_1217);
x_1228 = lean_nat_mod(x_1227, x_1214);
lean_dec(x_1227);
lean_inc_ref(x_1218);
lean_inc(x_1228);
lean_inc_ref(x_1226);
lean_inc(x_1215);
lean_inc(x_1214);
if (lean_is_scalar(x_1224)) {
 x_1229 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1229 = x_1224;
}
lean_ctor_set(x_1229, 0, x_1214);
lean_ctor_set(x_1229, 1, x_1215);
lean_ctor_set(x_1229, 2, x_1226);
lean_ctor_set(x_1229, 3, x_1228);
lean_ctor_set(x_1229, 4, x_1218);
lean_inc_ref(x_1121);
x_769 = x_1121;
x_770 = x_1121;
x_771 = x_1222;
x_772 = x_942;
x_773 = x_939;
x_774 = x_1155;
x_775 = x_941;
x_776 = x_1124;
x_777 = x_1221;
x_778 = x_940;
x_779 = x_1120;
x_780 = x_1213;
x_781 = x_1229;
x_782 = x_1214;
x_783 = x_1215;
x_784 = x_1226;
x_785 = x_1228;
x_786 = x_1218;
goto block_794;
}
}
}
}
else
{
lean_object* x_1230; lean_object* x_1231; lean_object* x_1232; lean_object* x_1233; 
x_1230 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_1230);
x_1231 = lean_ctor_get(x_5, 1);
lean_inc(x_1231);
lean_dec_ref(x_5);
x_1232 = lean_unsigned_to_nat(5u);
x_1233 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1230, x_1231, x_1155, x_1232);
if (lean_obj_tag(x_1233) == 0)
{
lean_object* x_1234; lean_object* x_1235; lean_object* x_1236; 
lean_dec_ref(x_1121);
lean_dec_ref(x_942);
lean_dec(x_941);
lean_dec_ref(x_940);
lean_dec(x_939);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1234 = lean_ctor_get(x_1233, 0);
lean_inc(x_1234);
if (lean_is_exclusive(x_1233)) {
 lean_ctor_release(x_1233, 0);
 x_1235 = x_1233;
} else {
 lean_dec_ref(x_1233);
 x_1235 = lean_box(0);
}
if (lean_is_scalar(x_1235)) {
 x_1236 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1236 = x_1235;
}
lean_ctor_set(x_1236, 0, x_1234);
return x_1236;
}
else
{
lean_object* x_1237; lean_object* x_1238; lean_object* x_1239; lean_object* x_1240; lean_object* x_1241; lean_object* x_1242; lean_object* x_1243; lean_object* x_1244; uint32_t x_1245; uint8_t x_1246; 
x_1237 = lean_ctor_get(x_1233, 0);
lean_inc(x_1237);
lean_dec_ref(x_1233);
x_1238 = lean_ctor_get(x_1237, 0);
lean_inc(x_1238);
x_1239 = lean_ctor_get(x_1237, 1);
lean_inc(x_1239);
lean_dec(x_1237);
x_1240 = lean_ctor_get(x_6, 0);
lean_inc(x_1240);
x_1241 = lean_ctor_get(x_6, 1);
lean_inc(x_1241);
x_1242 = lean_ctor_get(x_6, 2);
lean_inc_ref(x_1242);
x_1243 = lean_ctor_get(x_6, 3);
lean_inc(x_1243);
x_1244 = lean_ctor_get(x_6, 4);
lean_inc_ref(x_1244);
x_1245 = lean_uint32_of_nat(x_1238);
x_1246 = lean_nat_dec_lt(x_1155, x_1240);
if (x_1246 == 0)
{
lean_inc_ref(x_1121);
x_730 = x_1121;
x_731 = x_1121;
x_732 = x_942;
x_733 = x_939;
x_734 = x_1245;
x_735 = x_1155;
x_736 = x_1238;
x_737 = x_941;
x_738 = x_1124;
x_739 = x_940;
x_740 = x_1120;
x_741 = x_1239;
x_742 = x_6;
x_743 = x_1240;
x_744 = x_1241;
x_745 = x_1242;
x_746 = x_1243;
x_747 = x_1244;
goto block_755;
}
else
{
lean_object* x_1247; lean_object* x_1248; lean_object* x_1249; lean_object* x_1250; lean_object* x_1251; lean_object* x_1252; 
if (lean_is_exclusive(x_6)) {
 lean_ctor_release(x_6, 0);
 lean_ctor_release(x_6, 1);
 lean_ctor_release(x_6, 2);
 lean_ctor_release(x_6, 3);
 lean_ctor_release(x_6, 4);
 x_1247 = x_6;
} else {
 lean_dec_ref(x_6);
 x_1247 = lean_box(0);
}
x_1248 = lean_box_uint32(x_1245);
x_1249 = lean_array_set(x_1242, x_1243, x_1248);
x_1250 = lean_nat_add(x_1243, x_939);
lean_dec(x_1243);
x_1251 = lean_nat_mod(x_1250, x_1240);
lean_dec(x_1250);
lean_inc_ref(x_1244);
lean_inc(x_1251);
lean_inc_ref(x_1249);
lean_inc(x_1241);
lean_inc(x_1240);
if (lean_is_scalar(x_1247)) {
 x_1252 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1252 = x_1247;
}
lean_ctor_set(x_1252, 0, x_1240);
lean_ctor_set(x_1252, 1, x_1241);
lean_ctor_set(x_1252, 2, x_1249);
lean_ctor_set(x_1252, 3, x_1251);
lean_ctor_set(x_1252, 4, x_1244);
lean_inc_ref(x_1121);
x_730 = x_1121;
x_731 = x_1121;
x_732 = x_942;
x_733 = x_939;
x_734 = x_1245;
x_735 = x_1155;
x_736 = x_1238;
x_737 = x_941;
x_738 = x_1124;
x_739 = x_940;
x_740 = x_1120;
x_741 = x_1239;
x_742 = x_1252;
x_743 = x_1240;
x_744 = x_1241;
x_745 = x_1249;
x_746 = x_1251;
x_747 = x_1244;
goto block_755;
}
}
}
}
}
}
}
}
block_1272:
{
if (x_1262 == 0)
{
lean_dec(x_1259);
lean_dec_ref(x_1254);
x_939 = x_1257;
x_940 = x_1261;
x_941 = x_1260;
x_942 = x_1258;
goto block_1253;
}
else
{
lean_object* x_1263; lean_object* x_1264; lean_object* x_1265; 
lean_dec(x_1260);
lean_dec_ref(x_1258);
x_1263 = lean_unsigned_to_nat(0u);
x_1264 = lean_unsigned_to_nat(5u);
x_1265 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1254, x_1259, x_1263, x_1264);
if (lean_obj_tag(x_1265) == 0)
{
uint8_t x_1266; 
lean_dec_ref(x_1261);
lean_dec(x_1257);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
lean_dec_ref(x_1);
x_1266 = !lean_is_exclusive(x_1265);
if (x_1266 == 0)
{
return x_1265;
}
else
{
lean_object* x_1267; lean_object* x_1268; 
x_1267 = lean_ctor_get(x_1265, 0);
lean_inc(x_1267);
lean_dec(x_1265);
x_1268 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1268, 0, x_1267);
return x_1268;
}
}
else
{
lean_object* x_1269; lean_object* x_1270; lean_object* x_1271; 
x_1269 = lean_ctor_get(x_1265, 0);
lean_inc(x_1269);
lean_dec_ref(x_1265);
x_1270 = lean_ctor_get(x_1269, 0);
lean_inc(x_1270);
x_1271 = lean_ctor_get(x_1269, 1);
lean_inc(x_1271);
lean_dec(x_1269);
x_939 = x_1257;
x_940 = x_1261;
x_941 = x_1270;
x_942 = x_1271;
goto block_1253;
}
}
}
block_1286:
{
lean_object* x_1274; lean_object* x_1275; lean_object* x_1276; lean_object* x_1277; lean_object* x_1278; lean_object* x_1279; lean_object* x_1280; lean_object* x_1281; lean_object* x_1282; lean_object* x_1283; lean_object* x_1284; uint8_t x_1285; 
x_1274 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1275 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1276 = lean_uint8_to_nat(x_1273);
x_1277 = lean_array_get(x_1274, x_1275, x_1276);
x_1278 = lean_ctor_get(x_1277, 0);
x_1279 = lean_ctor_get(x_1278, 0);
x_1280 = lean_ctor_get(x_1278, 1);
lean_inc(x_1280);
x_1281 = lean_unsigned_to_nat(1u);
x_1282 = lean_nat_add(x_1255, x_1281);
lean_dec(x_1255);
lean_inc(x_1282);
lean_inc_ref(x_1254);
if (lean_is_scalar(x_1256)) {
 x_1283 = lean_alloc_ctor(0, 2, 0);
} else {
 x_1283 = x_1256;
}
lean_ctor_set(x_1283, 0, x_1254);
lean_ctor_set(x_1283, 1, x_1282);
x_1284 = lean_unsigned_to_nat(0u);
x_1285 = lean_nat_dec_eq(x_1280, x_1284);
if (x_1285 == 0)
{
x_1257 = x_1281;
x_1258 = x_1283;
x_1259 = x_1282;
x_1260 = x_1280;
x_1261 = x_1277;
x_1262 = x_1285;
goto block_1272;
}
else
{
if (lean_obj_tag(x_1279) == 0)
{
if (x_1285 == 0)
{
x_1257 = x_1281;
x_1258 = x_1283;
x_1259 = x_1282;
x_1260 = x_1280;
x_1261 = x_1277;
x_1262 = x_1285;
goto block_1272;
}
else
{
lean_dec(x_1282);
lean_dec_ref(x_1254);
x_939 = x_1281;
x_940 = x_1277;
x_941 = x_1280;
x_942 = x_1283;
goto block_1253;
}
}
else
{
x_1257 = x_1281;
x_1258 = x_1283;
x_1259 = x_1282;
x_1260 = x_1280;
x_1261 = x_1277;
x_1262 = x_1285;
goto block_1272;
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
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; uint8_t x_50; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint32_t x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_148; lean_object* x_149; lean_object* x_150; uint32_t x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; uint32_t x_187; lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_218; lean_object* x_219; lean_object* x_220; uint32_t x_221; lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; lean_object* x_242; lean_object* x_243; lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; lean_object* x_254; lean_object* x_255; lean_object* x_256; lean_object* x_257; lean_object* x_258; uint8_t x_259; lean_object* x_285; lean_object* x_286; lean_object* x_287; lean_object* x_288; lean_object* x_289; lean_object* x_290; lean_object* x_291; lean_object* x_292; lean_object* x_293; lean_object* x_294; lean_object* x_295; lean_object* x_459; lean_object* x_460; lean_object* x_461; lean_object* x_462; lean_object* x_463; lean_object* x_464; lean_object* x_465; lean_object* x_466; lean_object* x_467; lean_object* x_468; lean_object* x_469; uint8_t x_470; lean_object* x_482; lean_object* x_483; lean_object* x_484; lean_object* x_485; lean_object* x_486; lean_object* x_487; lean_object* x_488; lean_object* x_489; lean_object* x_490; lean_object* x_491; lean_object* x_492; lean_object* x_497; lean_object* x_498; lean_object* x_499; lean_object* x_500; lean_object* x_501; lean_object* x_502; lean_object* x_503; lean_object* x_504; lean_object* x_505; lean_object* x_506; lean_object* x_509; lean_object* x_510; lean_object* x_511; lean_object* x_512; lean_object* x_513; lean_object* x_514; lean_object* x_515; uint8_t x_516; lean_object* x_528; lean_object* x_529; lean_object* x_530; lean_object* x_531; lean_object* x_532; lean_object* x_533; lean_object* x_538; lean_object* x_539; lean_object* x_540; lean_object* x_541; lean_object* x_542; lean_object* x_543; lean_object* x_544; lean_object* x_579; lean_object* x_580; lean_object* x_581; lean_object* x_582; lean_object* x_583; lean_object* x_584; lean_object* x_585; lean_object* x_586; uint32_t x_589; lean_object* x_590; lean_object* x_591; lean_object* x_592; lean_object* x_593; lean_object* x_594; lean_object* x_595; lean_object* x_596; lean_object* x_597; lean_object* x_598; lean_object* x_599; lean_object* x_600; lean_object* x_601; lean_object* x_602; lean_object* x_603; lean_object* x_604; lean_object* x_612; lean_object* x_613; lean_object* x_614; lean_object* x_615; lean_object* x_616; lean_object* x_617; lean_object* x_618; lean_object* x_619; lean_object* x_620; lean_object* x_621; lean_object* x_622; lean_object* x_623; lean_object* x_624; lean_object* x_625; lean_object* x_626; uint8_t x_627; lean_object* x_653; lean_object* x_654; lean_object* x_655; lean_object* x_656; lean_object* x_657; lean_object* x_658; lean_object* x_659; lean_object* x_660; uint32_t x_663; lean_object* x_664; lean_object* x_665; lean_object* x_666; lean_object* x_667; lean_object* x_668; lean_object* x_669; lean_object* x_670; lean_object* x_671; lean_object* x_672; lean_object* x_673; lean_object* x_674; lean_object* x_675; lean_object* x_676; lean_object* x_677; lean_object* x_686; lean_object* x_687; lean_object* x_688; lean_object* x_689; lean_object* x_690; lean_object* x_691; lean_object* x_692; lean_object* x_693; lean_object* x_696; uint32_t x_697; lean_object* x_698; lean_object* x_699; lean_object* x_700; lean_object* x_701; lean_object* x_702; lean_object* x_703; lean_object* x_704; lean_object* x_705; lean_object* x_706; lean_object* x_707; lean_object* x_708; lean_object* x_709; lean_object* x_710; lean_object* x_719; lean_object* x_720; lean_object* x_721; lean_object* x_722; lean_object* x_723; lean_object* x_724; lean_object* x_725; lean_object* x_726; uint32_t x_729; lean_object* x_730; lean_object* x_731; lean_object* x_732; lean_object* x_733; lean_object* x_734; lean_object* x_735; lean_object* x_736; lean_object* x_737; lean_object* x_738; lean_object* x_739; lean_object* x_740; lean_object* x_741; lean_object* x_742; lean_object* x_743; lean_object* x_752; lean_object* x_753; lean_object* x_754; lean_object* x_755; lean_object* x_1058; lean_object* x_1059; lean_object* x_1060; lean_object* x_1061; lean_object* x_1062; uint8_t x_1063; uint8_t x_1073; 
x_27 = lean_unsigned_to_nat(1u);
x_28 = lean_nat_sub(x_2, x_27);
lean_dec(x_2);
if (x_25 == 0)
{
uint8_t x_1090; lean_object* x_1091; lean_object* x_1092; uint8_t x_1093; 
x_1090 = l_instInhabitedUInt8;
x_1091 = lean_box(x_1090);
x_1092 = l_outOfBounds___redArg(x_1091);
x_1093 = lean_unbox(x_1092);
lean_dec(x_1092);
x_1073 = x_1093;
goto block_1089;
}
else
{
uint8_t x_1094; 
x_1094 = lean_byte_array_fget(x_20, x_21);
x_1073 = x_1094;
goto block_1089;
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
x_51 = lean_nat_add(x_45, x_49);
lean_dec(x_49);
lean_dec(x_45);
if (lean_is_scalar(x_24)) {
 x_52 = lean_alloc_ctor(0, 2, 0);
} else {
 x_52 = x_24;
}
lean_ctor_set(x_52, 0, x_47);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_box(x_50);
x_54 = lean_mk_array(x_48, x_53);
x_55 = lean_byte_array_mk(x_54);
x_56 = lean_byte_array_size(x_44);
x_57 = lean_byte_array_size(x_55);
x_58 = lean_byte_array_copy_slice(x_55, x_8, x_44, x_56, x_57, x_23);
lean_dec_ref(x_55);
x_29 = x_58;
x_30 = x_43;
x_31 = x_52;
x_32 = x_46;
goto block_36;
}
block_101:
{
lean_object* x_68; lean_object* x_69; uint8_t x_70; 
x_68 = lean_byte_array_size(x_62);
x_69 = lean_nat_add(x_65, x_68);
x_70 = lean_nat_dec_le(x_69, x_66);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
lean_dec(x_69);
x_71 = lean_nat_add(x_66, x_64);
x_72 = lean_nat_dec_le(x_71, x_65);
if (x_72 == 0)
{
uint8_t x_73; 
lean_dec(x_71);
x_73 = lean_nat_dec_le(x_65, x_66);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; uint8_t x_81; 
x_74 = lean_nat_sub(x_65, x_66);
x_75 = lean_nat_sub(x_64, x_74);
lean_dec(x_74);
lean_dec(x_64);
x_76 = l_ByteArray_extract(x_1, x_66, x_65);
x_77 = lean_byte_array_size(x_76);
x_78 = lean_byte_array_copy_slice(x_76, x_8, x_62, x_68, x_77, x_23);
lean_dec_ref(x_76);
x_79 = lean_byte_array_size(x_78);
x_80 = lean_nat_sub(x_79, x_65);
x_81 = lean_nat_dec_le(x_75, x_80);
lean_dec(x_80);
if (x_81 == 0)
{
lean_object* x_82; lean_object* x_83; 
x_82 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_82, 0, x_8);
lean_ctor_set(x_82, 1, x_75);
lean_ctor_set(x_82, 2, x_63);
x_83 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_65, x_1, x_82, x_78, x_8);
lean_dec_ref(x_82);
lean_dec(x_65);
x_29 = x_83;
x_30 = x_60;
x_31 = x_61;
x_32 = x_67;
goto block_36;
}
else
{
lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
lean_dec(x_63);
x_84 = lean_nat_add(x_65, x_75);
lean_dec(x_75);
x_85 = l_ByteArray_extract(x_78, x_65, x_84);
lean_dec(x_84);
x_86 = lean_byte_array_size(x_85);
x_87 = lean_byte_array_copy_slice(x_85, x_8, x_78, x_79, x_86, x_23);
lean_dec_ref(x_85);
x_29 = x_87;
x_30 = x_60;
x_31 = x_61;
x_32 = x_67;
goto block_36;
}
}
else
{
lean_object* x_88; lean_object* x_89; uint8_t x_90; 
x_88 = lean_nat_sub(x_66, x_65);
lean_dec(x_65);
lean_dec(x_66);
x_89 = lean_nat_add(x_88, x_64);
x_90 = lean_nat_dec_le(x_89, x_68);
if (x_90 == 0)
{
lean_object* x_91; lean_object* x_92; 
lean_dec(x_89);
x_91 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_91, 0, x_8);
lean_ctor_set(x_91, 1, x_64);
lean_ctor_set(x_91, 2, x_63);
x_92 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_88, x_91, x_62, x_8);
lean_dec_ref(x_91);
lean_dec(x_88);
x_29 = x_92;
x_30 = x_60;
x_31 = x_61;
x_32 = x_67;
goto block_36;
}
else
{
lean_object* x_93; lean_object* x_94; lean_object* x_95; 
lean_dec(x_64);
lean_dec(x_63);
x_93 = l_ByteArray_extract(x_62, x_88, x_89);
lean_dec(x_89);
x_94 = lean_byte_array_size(x_93);
x_95 = lean_byte_array_copy_slice(x_93, x_8, x_62, x_68, x_94, x_23);
lean_dec_ref(x_93);
x_29 = x_95;
x_30 = x_60;
x_31 = x_61;
x_32 = x_67;
goto block_36;
}
}
}
else
{
lean_object* x_96; lean_object* x_97; lean_object* x_98; 
lean_dec(x_65);
lean_dec(x_64);
lean_dec(x_63);
x_96 = l_ByteArray_extract(x_1, x_66, x_71);
lean_dec(x_71);
x_97 = lean_byte_array_size(x_96);
x_98 = lean_byte_array_copy_slice(x_96, x_8, x_62, x_68, x_97, x_23);
lean_dec_ref(x_96);
x_29 = x_98;
x_30 = x_60;
x_31 = x_61;
x_32 = x_67;
goto block_36;
}
}
else
{
lean_object* x_99; lean_object* x_100; 
lean_dec_ref(x_67);
lean_dec(x_65);
lean_dec(x_63);
lean_dec_ref(x_62);
lean_dec_ref(x_61);
lean_dec_ref(x_60);
lean_dec(x_28);
x_99 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_99, 0, x_66);
lean_ctor_set(x_99, 1, x_64);
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
lean_ctor_set(x_111, 0, x_103);
lean_ctor_set(x_111, 1, x_110);
x_60 = x_102;
x_61 = x_104;
x_62 = x_105;
x_63 = x_107;
x_64 = x_106;
x_65 = x_109;
x_66 = x_108;
x_67 = x_111;
goto block_101;
}
block_136:
{
uint8_t x_129; 
x_129 = lean_nat_dec_lt(x_122, x_125);
lean_dec(x_122);
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
x_105 = x_116;
x_106 = x_120;
x_107 = x_119;
x_108 = x_118;
x_109 = x_121;
x_110 = x_123;
goto block_112;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec_ref(x_123);
x_130 = lean_unsigned_to_nat(256u);
x_131 = lean_nat_mul(x_125, x_130);
x_132 = lean_nat_mod(x_118, x_131);
lean_dec(x_131);
x_133 = lean_box_uint32(x_117);
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
x_105 = x_116;
x_106 = x_120;
x_107 = x_119;
x_108 = x_118;
x_109 = x_121;
x_110 = x_135;
goto block_112;
}
}
block_147:
{
lean_object* x_146; 
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_139);
lean_ctor_set(x_146, 1, x_145);
x_60 = x_138;
x_61 = x_140;
x_62 = x_141;
x_63 = x_143;
x_64 = x_142;
x_65 = x_144;
x_66 = x_137;
x_67 = x_146;
goto block_101;
}
block_171:
{
uint8_t x_164; 
x_164 = lean_nat_dec_lt(x_157, x_160);
lean_dec(x_157);
if (x_164 == 0)
{
lean_dec_ref(x_163);
lean_dec(x_162);
lean_dec_ref(x_161);
lean_dec(x_160);
lean_dec(x_159);
x_137 = x_148;
x_138 = x_150;
x_139 = x_149;
x_140 = x_152;
x_141 = x_153;
x_142 = x_155;
x_143 = x_154;
x_144 = x_156;
x_145 = x_158;
goto block_147;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec_ref(x_158);
x_165 = lean_unsigned_to_nat(256u);
x_166 = lean_nat_mul(x_160, x_165);
x_167 = lean_nat_mod(x_148, x_166);
lean_dec(x_166);
x_168 = lean_box_uint32(x_151);
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
x_139 = x_149;
x_140 = x_152;
x_141 = x_153;
x_142 = x_155;
x_143 = x_154;
x_144 = x_156;
x_145 = x_170;
goto block_147;
}
}
block_182:
{
lean_object* x_181; 
x_181 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_181, 0, x_178);
lean_ctor_set(x_181, 1, x_180);
x_60 = x_172;
x_61 = x_173;
x_62 = x_174;
x_63 = x_177;
x_64 = x_176;
x_65 = x_179;
x_66 = x_175;
x_67 = x_181;
goto block_101;
}
block_206:
{
uint8_t x_199; 
x_199 = lean_nat_dec_lt(x_192, x_195);
lean_dec(x_192);
if (x_199 == 0)
{
lean_dec_ref(x_198);
lean_dec(x_197);
lean_dec_ref(x_196);
lean_dec(x_195);
lean_dec(x_194);
x_172 = x_183;
x_173 = x_184;
x_174 = x_185;
x_175 = x_186;
x_176 = x_190;
x_177 = x_189;
x_178 = x_188;
x_179 = x_191;
x_180 = x_193;
goto block_182;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; 
lean_dec_ref(x_193);
x_200 = lean_unsigned_to_nat(256u);
x_201 = lean_nat_mul(x_195, x_200);
x_202 = lean_nat_mod(x_186, x_201);
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
x_174 = x_185;
x_175 = x_186;
x_176 = x_190;
x_177 = x_189;
x_178 = x_188;
x_179 = x_191;
x_180 = x_205;
goto block_182;
}
}
block_217:
{
lean_object* x_216; 
x_216 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_216, 0, x_207);
lean_ctor_set(x_216, 1, x_215);
x_60 = x_208;
x_61 = x_209;
x_62 = x_210;
x_63 = x_213;
x_64 = x_212;
x_65 = x_214;
x_66 = x_211;
x_67 = x_216;
goto block_101;
}
block_241:
{
uint8_t x_235; 
x_235 = lean_nat_dec_lt(x_228, x_231);
lean_dec(x_228);
if (x_235 == 0)
{
lean_dec_ref(x_234);
lean_dec(x_233);
lean_dec_ref(x_232);
lean_dec(x_231);
lean_dec(x_230);
x_207 = x_218;
x_208 = x_220;
x_209 = x_222;
x_210 = x_223;
x_211 = x_224;
x_212 = x_226;
x_213 = x_225;
x_214 = x_227;
x_215 = x_229;
goto block_217;
}
else
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec_ref(x_229);
x_236 = lean_nat_mul(x_231, x_219);
x_237 = lean_nat_mod(x_224, x_236);
lean_dec(x_236);
x_238 = lean_box_uint32(x_221);
x_239 = lean_array_set(x_234, x_237, x_238);
lean_dec(x_237);
x_240 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_240, 0, x_230);
lean_ctor_set(x_240, 1, x_231);
lean_ctor_set(x_240, 2, x_232);
lean_ctor_set(x_240, 3, x_233);
lean_ctor_set(x_240, 4, x_239);
x_207 = x_218;
x_208 = x_220;
x_209 = x_222;
x_210 = x_223;
x_211 = x_224;
x_212 = x_226;
x_213 = x_225;
x_214 = x_227;
x_215 = x_240;
goto block_217;
}
}
block_284:
{
lean_object* x_260; lean_object* x_261; lean_object* x_262; lean_object* x_263; lean_object* x_264; lean_object* x_265; lean_object* x_266; lean_object* x_267; lean_object* x_268; lean_object* x_269; uint32_t x_270; lean_object* x_271; uint32_t x_272; uint8_t x_273; 
x_260 = lean_nat_add(x_242, x_256);
lean_dec(x_242);
x_261 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_261, 0, x_248);
lean_ctor_set(x_261, 1, x_260);
x_262 = lean_nat_sub(x_246, x_250);
lean_dec(x_246);
x_263 = lean_nat_sub(x_262, x_244);
lean_dec(x_262);
x_264 = lean_unsigned_to_nat(256u);
x_265 = lean_nat_mul(x_263, x_264);
lean_dec(x_263);
x_266 = lean_uint8_to_nat(x_259);
x_267 = lean_nat_add(x_265, x_266);
lean_dec(x_265);
x_268 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_269 = lean_array_get_borrowed(x_268, x_253, x_267);
lean_dec(x_267);
x_270 = lean_unbox_uint32(x_269);
x_271 = lean_uint32_to_nat(x_270);
x_272 = lean_uint32_of_nat(x_271);
x_273 = lean_nat_dec_lt(x_249, x_244);
if (x_273 == 0)
{
lean_object* x_274; lean_object* x_275; lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_255);
lean_dec_ref(x_253);
lean_dec(x_252);
lean_dec_ref(x_245);
lean_dec(x_244);
x_274 = lean_ctor_get(x_247, 0);
lean_inc(x_274);
x_275 = lean_ctor_get(x_247, 1);
lean_inc(x_275);
x_276 = lean_ctor_get(x_247, 2);
lean_inc_ref(x_276);
x_277 = lean_ctor_get(x_247, 3);
lean_inc(x_277);
x_278 = lean_ctor_get(x_247, 4);
lean_inc_ref(x_278);
x_218 = x_261;
x_219 = x_264;
x_220 = x_243;
x_221 = x_272;
x_222 = x_251;
x_223 = x_254;
x_224 = x_271;
x_225 = x_256;
x_226 = x_257;
x_227 = x_258;
x_228 = x_249;
x_229 = x_247;
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
lean_dec_ref(x_247);
x_279 = lean_box_uint32(x_272);
x_280 = lean_array_set(x_245, x_255, x_279);
x_281 = lean_nat_add(x_255, x_256);
lean_dec(x_255);
x_282 = lean_nat_mod(x_281, x_244);
lean_dec(x_281);
lean_inc_ref(x_253);
lean_inc(x_282);
lean_inc_ref(x_280);
lean_inc(x_252);
lean_inc(x_244);
x_283 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_283, 0, x_244);
lean_ctor_set(x_283, 1, x_252);
lean_ctor_set(x_283, 2, x_280);
lean_ctor_set(x_283, 3, x_282);
lean_ctor_set(x_283, 4, x_253);
x_218 = x_261;
x_219 = x_264;
x_220 = x_243;
x_221 = x_272;
x_222 = x_251;
x_223 = x_254;
x_224 = x_271;
x_225 = x_256;
x_226 = x_257;
x_227 = x_258;
x_228 = x_249;
x_229 = x_283;
x_230 = x_244;
x_231 = x_252;
x_232 = x_280;
x_233 = x_282;
x_234 = x_253;
goto block_241;
}
}
block_458:
{
lean_object* x_296; lean_object* x_297; 
x_296 = lean_ctor_get(x_289, 1);
lean_inc_ref(x_296);
lean_dec_ref(x_289);
x_297 = lean_ctor_get(x_296, 0);
lean_inc(x_297);
lean_dec_ref(x_296);
if (lean_obj_tag(x_297) == 0)
{
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_288);
lean_dec_ref(x_285);
lean_dec(x_24);
x_37 = x_286;
x_38 = x_295;
x_39 = x_287;
goto block_42;
}
else
{
switch (lean_obj_tag(x_297)) {
case 0:
{
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_291);
lean_dec_ref(x_290);
lean_dec_ref(x_288);
lean_dec_ref(x_285);
lean_dec(x_24);
x_37 = x_286;
x_38 = x_295;
x_39 = x_287;
goto block_42;
}
case 1:
{
uint8_t x_298; 
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_290);
lean_dec_ref(x_288);
lean_dec_ref(x_287);
lean_dec(x_24);
x_298 = !lean_is_exclusive(x_285);
if (x_298 == 0)
{
lean_object* x_299; lean_object* x_300; lean_object* x_301; lean_object* x_302; uint8_t x_303; 
x_299 = lean_ctor_get(x_285, 0);
x_300 = lean_ctor_get(x_285, 1);
x_301 = lean_nat_add(x_300, x_294);
lean_dec(x_294);
x_302 = lean_byte_array_size(x_299);
x_303 = lean_nat_dec_le(x_301, x_302);
if (x_303 == 0)
{
lean_object* x_304; 
lean_dec(x_301);
lean_free_object(x_285);
lean_dec(x_300);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
lean_dec_ref(x_291);
lean_dec_ref(x_286);
lean_dec(x_28);
x_304 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_304;
}
else
{
if (x_303 == 0)
{
lean_object* x_305; 
lean_dec(x_301);
lean_free_object(x_285);
lean_dec(x_300);
lean_dec_ref(x_299);
lean_dec_ref(x_295);
lean_dec_ref(x_291);
lean_dec_ref(x_286);
lean_dec(x_28);
x_305 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_305;
}
else
{
lean_object* x_306; lean_object* x_307; lean_object* x_308; lean_object* x_309; 
x_306 = l_ByteArray_extract(x_299, x_300, x_301);
lean_ctor_set(x_285, 1, x_301);
x_307 = lean_byte_array_size(x_286);
x_308 = lean_byte_array_size(x_306);
x_309 = lean_byte_array_copy_slice(x_306, x_8, x_286, x_307, x_308, x_23);
lean_dec_ref(x_306);
x_29 = x_309;
x_30 = x_295;
x_31 = x_285;
x_32 = x_291;
goto block_36;
}
}
}
else
{
lean_object* x_310; lean_object* x_311; lean_object* x_312; lean_object* x_313; uint8_t x_314; 
x_310 = lean_ctor_get(x_285, 0);
x_311 = lean_ctor_get(x_285, 1);
lean_inc(x_311);
lean_inc(x_310);
lean_dec(x_285);
x_312 = lean_nat_add(x_311, x_294);
lean_dec(x_294);
x_313 = lean_byte_array_size(x_310);
x_314 = lean_nat_dec_le(x_312, x_313);
if (x_314 == 0)
{
lean_object* x_315; 
lean_dec(x_312);
lean_dec(x_311);
lean_dec_ref(x_310);
lean_dec_ref(x_295);
lean_dec_ref(x_291);
lean_dec_ref(x_286);
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
lean_dec(x_311);
lean_dec_ref(x_310);
lean_dec_ref(x_295);
lean_dec_ref(x_291);
lean_dec_ref(x_286);
lean_dec(x_28);
x_316 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_316;
}
else
{
lean_object* x_317; lean_object* x_318; lean_object* x_319; lean_object* x_320; lean_object* x_321; 
x_317 = l_ByteArray_extract(x_310, x_311, x_312);
x_318 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_318, 0, x_310);
lean_ctor_set(x_318, 1, x_312);
x_319 = lean_byte_array_size(x_286);
x_320 = lean_byte_array_size(x_317);
x_321 = lean_byte_array_copy_slice(x_317, x_8, x_286, x_319, x_320, x_23);
lean_dec_ref(x_317);
x_29 = x_321;
x_30 = x_295;
x_31 = x_318;
x_32 = x_291;
goto block_36;
}
}
}
}
case 2:
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; uint8_t x_325; 
lean_dec(x_293);
lean_dec_ref(x_290);
lean_dec_ref(x_288);
lean_dec_ref(x_287);
x_322 = lean_ctor_get(x_285, 0);
lean_inc_ref(x_322);
x_323 = lean_ctor_get(x_285, 1);
lean_inc(x_323);
lean_dec_ref(x_285);
x_324 = lean_byte_array_size(x_322);
x_325 = lean_nat_dec_lt(x_323, x_324);
if (x_325 == 0)
{
lean_object* x_326; 
lean_dec(x_323);
lean_dec_ref(x_322);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec(x_292);
lean_dec_ref(x_291);
lean_dec_ref(x_286);
lean_dec(x_28);
lean_dec(x_24);
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
x_43 = x_295;
x_44 = x_286;
x_45 = x_323;
x_46 = x_291;
x_47 = x_322;
x_48 = x_294;
x_49 = x_292;
x_50 = x_330;
goto block_59;
}
else
{
uint8_t x_331; 
x_331 = lean_byte_array_fget(x_322, x_323);
x_43 = x_295;
x_44 = x_286;
x_45 = x_323;
x_46 = x_291;
x_47 = x_322;
x_48 = x_294;
x_49 = x_292;
x_50 = x_331;
goto block_59;
}
}
}
default: 
{
uint8_t x_332; lean_object* x_333; uint8_t x_334; 
lean_dec_ref(x_291);
lean_dec_ref(x_287);
lean_dec(x_24);
x_332 = lean_ctor_get_uint8(x_297, 0);
lean_dec_ref(x_297);
x_333 = lean_uint8_to_nat(x_332);
x_334 = lean_nat_dec_eq(x_333, x_8);
if (x_334 == 0)
{
uint8_t x_335; 
x_335 = lean_nat_dec_eq(x_333, x_292);
if (x_335 == 0)
{
lean_object* x_336; lean_object* x_337; lean_object* x_338; lean_object* x_339; lean_object* x_340; lean_object* x_341; lean_object* x_342; uint8_t x_343; 
x_336 = lean_ctor_get(x_290, 0);
lean_inc(x_336);
x_337 = lean_ctor_get(x_290, 1);
lean_inc(x_337);
x_338 = lean_ctor_get(x_290, 2);
lean_inc_ref(x_338);
x_339 = lean_ctor_get(x_290, 3);
lean_inc(x_339);
x_340 = lean_ctor_get(x_290, 4);
lean_inc_ref(x_340);
x_341 = lean_unsigned_to_nat(2u);
x_342 = lean_nat_add(x_341, x_336);
x_343 = lean_nat_dec_lt(x_333, x_342);
if (x_343 == 0)
{
lean_object* x_344; uint8_t x_345; 
x_344 = lean_nat_add(x_342, x_337);
lean_dec(x_342);
x_345 = lean_nat_dec_lt(x_333, x_344);
lean_dec(x_344);
if (x_345 == 0)
{
lean_object* x_346; lean_object* x_347; 
lean_dec_ref(x_340);
lean_dec(x_339);
lean_dec_ref(x_338);
lean_dec(x_337);
lean_dec(x_336);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_290);
lean_dec_ref(x_288);
lean_dec_ref(x_286);
lean_dec_ref(x_285);
lean_dec(x_28);
x_346 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_346, 0, x_333);
x_347 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_347, 0, x_346);
return x_347;
}
else
{
lean_object* x_348; lean_object* x_349; lean_object* x_350; uint8_t x_351; 
x_348 = lean_ctor_get(x_288, 0);
lean_inc_ref(x_348);
x_349 = lean_ctor_get(x_288, 1);
lean_inc(x_349);
lean_dec_ref(x_288);
x_350 = lean_byte_array_size(x_348);
x_351 = lean_nat_dec_lt(x_349, x_350);
if (x_351 == 0)
{
lean_object* x_352; 
lean_dec(x_349);
lean_dec_ref(x_348);
lean_dec_ref(x_340);
lean_dec(x_339);
lean_dec_ref(x_338);
lean_dec(x_337);
lean_dec(x_336);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_290);
lean_dec_ref(x_286);
lean_dec_ref(x_285);
lean_dec(x_28);
x_352 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_352;
}
else
{
if (x_351 == 0)
{
uint8_t x_353; lean_object* x_354; lean_object* x_355; uint8_t x_356; 
x_353 = l_instInhabitedUInt8;
x_354 = lean_box(x_353);
x_355 = l_outOfBounds___redArg(x_354);
x_356 = lean_unbox(x_355);
lean_dec(x_355);
x_242 = x_349;
x_243 = x_295;
x_244 = x_336;
x_245 = x_338;
x_246 = x_333;
x_247 = x_290;
x_248 = x_348;
x_249 = x_8;
x_250 = x_341;
x_251 = x_285;
x_252 = x_337;
x_253 = x_340;
x_254 = x_286;
x_255 = x_339;
x_256 = x_292;
x_257 = x_294;
x_258 = x_293;
x_259 = x_356;
goto block_284;
}
else
{
uint8_t x_357; 
x_357 = lean_byte_array_fget(x_348, x_349);
x_242 = x_349;
x_243 = x_295;
x_244 = x_336;
x_245 = x_338;
x_246 = x_333;
x_247 = x_290;
x_248 = x_348;
x_249 = x_8;
x_250 = x_341;
x_251 = x_285;
x_252 = x_337;
x_253 = x_340;
x_254 = x_286;
x_255 = x_339;
x_256 = x_292;
x_257 = x_294;
x_258 = x_293;
x_259 = x_357;
goto block_284;
}
}
}
}
else
{
lean_object* x_358; lean_object* x_359; lean_object* x_360; lean_object* x_361; 
lean_dec(x_342);
x_358 = lean_ctor_get(x_288, 0);
lean_inc_ref(x_358);
x_359 = lean_ctor_get(x_288, 1);
lean_inc(x_359);
lean_dec_ref(x_288);
x_360 = lean_unsigned_to_nat(5u);
x_361 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_358, x_359, x_8, x_360);
if (lean_obj_tag(x_361) == 0)
{
uint8_t x_362; 
lean_dec_ref(x_340);
lean_dec(x_339);
lean_dec_ref(x_338);
lean_dec(x_337);
lean_dec(x_336);
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_290);
lean_dec_ref(x_286);
lean_dec_ref(x_285);
lean_dec(x_28);
x_362 = !lean_is_exclusive(x_361);
if (x_362 == 0)
{
return x_361;
}
else
{
lean_object* x_363; lean_object* x_364; 
x_363 = lean_ctor_get(x_361, 0);
lean_inc(x_363);
lean_dec(x_361);
x_364 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_364, 0, x_363);
return x_364;
}
}
else
{
lean_object* x_365; lean_object* x_366; lean_object* x_367; lean_object* x_368; lean_object* x_369; lean_object* x_370; uint32_t x_371; lean_object* x_372; lean_object* x_373; uint32_t x_374; uint8_t x_375; 
x_365 = lean_ctor_get(x_361, 0);
lean_inc(x_365);
lean_dec_ref(x_361);
x_366 = lean_ctor_get(x_365, 0);
lean_inc(x_366);
x_367 = lean_ctor_get(x_365, 1);
lean_inc(x_367);
lean_dec(x_365);
x_368 = lean_nat_sub(x_333, x_341);
x_369 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_370 = lean_array_get_borrowed(x_369, x_338, x_368);
lean_dec(x_368);
x_371 = lean_unbox_uint32(x_370);
x_372 = lean_uint32_to_nat(x_371);
x_373 = lean_nat_add(x_372, x_366);
lean_dec(x_366);
lean_dec(x_372);
x_374 = lean_uint32_of_nat(x_373);
x_375 = lean_nat_dec_lt(x_8, x_336);
if (x_375 == 0)
{
x_183 = x_295;
x_184 = x_285;
x_185 = x_286;
x_186 = x_373;
x_187 = x_374;
x_188 = x_367;
x_189 = x_292;
x_190 = x_294;
x_191 = x_293;
x_192 = x_8;
x_193 = x_290;
x_194 = x_336;
x_195 = x_337;
x_196 = x_338;
x_197 = x_339;
x_198 = x_340;
goto block_206;
}
else
{
uint8_t x_376; 
x_376 = !lean_is_exclusive(x_290);
if (x_376 == 0)
{
lean_object* x_377; lean_object* x_378; lean_object* x_379; lean_object* x_380; lean_object* x_381; lean_object* x_382; lean_object* x_383; lean_object* x_384; lean_object* x_385; 
x_377 = lean_ctor_get(x_290, 4);
lean_dec(x_377);
x_378 = lean_ctor_get(x_290, 3);
lean_dec(x_378);
x_379 = lean_ctor_get(x_290, 2);
lean_dec(x_379);
x_380 = lean_ctor_get(x_290, 1);
lean_dec(x_380);
x_381 = lean_ctor_get(x_290, 0);
lean_dec(x_381);
x_382 = lean_box_uint32(x_374);
x_383 = lean_array_set(x_338, x_339, x_382);
x_384 = lean_nat_add(x_339, x_292);
lean_dec(x_339);
x_385 = lean_nat_mod(x_384, x_336);
lean_dec(x_384);
lean_inc_ref(x_340);
lean_inc(x_385);
lean_inc_ref(x_383);
lean_inc(x_337);
lean_inc(x_336);
lean_ctor_set(x_290, 3, x_385);
lean_ctor_set(x_290, 2, x_383);
x_183 = x_295;
x_184 = x_285;
x_185 = x_286;
x_186 = x_373;
x_187 = x_374;
x_188 = x_367;
x_189 = x_292;
x_190 = x_294;
x_191 = x_293;
x_192 = x_8;
x_193 = x_290;
x_194 = x_336;
x_195 = x_337;
x_196 = x_383;
x_197 = x_385;
x_198 = x_340;
goto block_206;
}
else
{
lean_object* x_386; lean_object* x_387; lean_object* x_388; lean_object* x_389; lean_object* x_390; 
lean_dec(x_290);
x_386 = lean_box_uint32(x_374);
x_387 = lean_array_set(x_338, x_339, x_386);
x_388 = lean_nat_add(x_339, x_292);
lean_dec(x_339);
x_389 = lean_nat_mod(x_388, x_336);
lean_dec(x_388);
lean_inc_ref(x_340);
lean_inc(x_389);
lean_inc_ref(x_387);
lean_inc(x_337);
lean_inc(x_336);
x_390 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_390, 0, x_336);
lean_ctor_set(x_390, 1, x_337);
lean_ctor_set(x_390, 2, x_387);
lean_ctor_set(x_390, 3, x_389);
lean_ctor_set(x_390, 4, x_340);
x_183 = x_295;
x_184 = x_285;
x_185 = x_286;
x_186 = x_373;
x_187 = x_374;
x_188 = x_367;
x_189 = x_292;
x_190 = x_294;
x_191 = x_293;
x_192 = x_8;
x_193 = x_390;
x_194 = x_336;
x_195 = x_337;
x_196 = x_387;
x_197 = x_389;
x_198 = x_340;
goto block_206;
}
}
}
}
}
else
{
lean_object* x_391; lean_object* x_392; lean_object* x_393; lean_object* x_394; 
x_391 = lean_ctor_get(x_288, 0);
lean_inc_ref(x_391);
x_392 = lean_ctor_get(x_288, 1);
lean_inc(x_392);
lean_dec_ref(x_288);
x_393 = lean_unsigned_to_nat(5u);
x_394 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_391, x_392, x_8, x_393);
if (lean_obj_tag(x_394) == 0)
{
uint8_t x_395; 
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_290);
lean_dec_ref(x_286);
lean_dec_ref(x_285);
lean_dec(x_28);
x_395 = !lean_is_exclusive(x_394);
if (x_395 == 0)
{
return x_394;
}
else
{
lean_object* x_396; lean_object* x_397; 
x_396 = lean_ctor_get(x_394, 0);
lean_inc(x_396);
lean_dec(x_394);
x_397 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_397, 0, x_396);
return x_397;
}
}
else
{
lean_object* x_398; lean_object* x_399; lean_object* x_400; lean_object* x_401; lean_object* x_402; lean_object* x_403; lean_object* x_404; lean_object* x_405; lean_object* x_406; lean_object* x_407; lean_object* x_408; uint32_t x_409; uint8_t x_410; 
x_398 = lean_ctor_get(x_394, 0);
lean_inc(x_398);
lean_dec_ref(x_394);
x_399 = lean_ctor_get(x_398, 0);
lean_inc(x_399);
x_400 = lean_ctor_get(x_398, 1);
lean_inc(x_400);
lean_dec(x_398);
x_401 = lean_ctor_get(x_290, 0);
lean_inc(x_401);
x_402 = lean_ctor_get(x_290, 1);
lean_inc(x_402);
x_403 = lean_ctor_get(x_290, 2);
lean_inc_ref(x_403);
x_404 = lean_ctor_get(x_290, 3);
lean_inc(x_404);
x_405 = lean_ctor_get(x_290, 4);
lean_inc_ref(x_405);
x_406 = lean_byte_array_size(x_286);
x_407 = lean_nat_add(x_293, x_406);
x_408 = lean_nat_sub(x_407, x_399);
lean_dec(x_399);
lean_dec(x_407);
x_409 = lean_uint32_of_nat(x_408);
x_410 = lean_nat_dec_lt(x_8, x_401);
if (x_410 == 0)
{
x_148 = x_408;
x_149 = x_400;
x_150 = x_295;
x_151 = x_409;
x_152 = x_285;
x_153 = x_286;
x_154 = x_292;
x_155 = x_294;
x_156 = x_293;
x_157 = x_8;
x_158 = x_290;
x_159 = x_401;
x_160 = x_402;
x_161 = x_403;
x_162 = x_404;
x_163 = x_405;
goto block_171;
}
else
{
uint8_t x_411; 
x_411 = !lean_is_exclusive(x_290);
if (x_411 == 0)
{
lean_object* x_412; lean_object* x_413; lean_object* x_414; lean_object* x_415; lean_object* x_416; lean_object* x_417; lean_object* x_418; lean_object* x_419; lean_object* x_420; 
x_412 = lean_ctor_get(x_290, 4);
lean_dec(x_412);
x_413 = lean_ctor_get(x_290, 3);
lean_dec(x_413);
x_414 = lean_ctor_get(x_290, 2);
lean_dec(x_414);
x_415 = lean_ctor_get(x_290, 1);
lean_dec(x_415);
x_416 = lean_ctor_get(x_290, 0);
lean_dec(x_416);
x_417 = lean_box_uint32(x_409);
x_418 = lean_array_set(x_403, x_404, x_417);
x_419 = lean_nat_add(x_404, x_292);
lean_dec(x_404);
x_420 = lean_nat_mod(x_419, x_401);
lean_dec(x_419);
lean_inc_ref(x_405);
lean_inc(x_420);
lean_inc_ref(x_418);
lean_inc(x_402);
lean_inc(x_401);
lean_ctor_set(x_290, 3, x_420);
lean_ctor_set(x_290, 2, x_418);
x_148 = x_408;
x_149 = x_400;
x_150 = x_295;
x_151 = x_409;
x_152 = x_285;
x_153 = x_286;
x_154 = x_292;
x_155 = x_294;
x_156 = x_293;
x_157 = x_8;
x_158 = x_290;
x_159 = x_401;
x_160 = x_402;
x_161 = x_418;
x_162 = x_420;
x_163 = x_405;
goto block_171;
}
else
{
lean_object* x_421; lean_object* x_422; lean_object* x_423; lean_object* x_424; lean_object* x_425; 
lean_dec(x_290);
x_421 = lean_box_uint32(x_409);
x_422 = lean_array_set(x_403, x_404, x_421);
x_423 = lean_nat_add(x_404, x_292);
lean_dec(x_404);
x_424 = lean_nat_mod(x_423, x_401);
lean_dec(x_423);
lean_inc_ref(x_405);
lean_inc(x_424);
lean_inc_ref(x_422);
lean_inc(x_402);
lean_inc(x_401);
x_425 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_425, 0, x_401);
lean_ctor_set(x_425, 1, x_402);
lean_ctor_set(x_425, 2, x_422);
lean_ctor_set(x_425, 3, x_424);
lean_ctor_set(x_425, 4, x_405);
x_148 = x_408;
x_149 = x_400;
x_150 = x_295;
x_151 = x_409;
x_152 = x_285;
x_153 = x_286;
x_154 = x_292;
x_155 = x_294;
x_156 = x_293;
x_157 = x_8;
x_158 = x_425;
x_159 = x_401;
x_160 = x_402;
x_161 = x_422;
x_162 = x_424;
x_163 = x_405;
goto block_171;
}
}
}
}
}
else
{
lean_object* x_426; lean_object* x_427; lean_object* x_428; lean_object* x_429; 
x_426 = lean_ctor_get(x_288, 0);
lean_inc_ref(x_426);
x_427 = lean_ctor_get(x_288, 1);
lean_inc(x_427);
lean_dec_ref(x_288);
x_428 = lean_unsigned_to_nat(5u);
x_429 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_426, x_427, x_8, x_428);
if (lean_obj_tag(x_429) == 0)
{
uint8_t x_430; 
lean_dec_ref(x_295);
lean_dec(x_294);
lean_dec(x_293);
lean_dec(x_292);
lean_dec_ref(x_290);
lean_dec_ref(x_286);
lean_dec_ref(x_285);
lean_dec(x_28);
x_430 = !lean_is_exclusive(x_429);
if (x_430 == 0)
{
return x_429;
}
else
{
lean_object* x_431; lean_object* x_432; 
x_431 = lean_ctor_get(x_429, 0);
lean_inc(x_431);
lean_dec(x_429);
x_432 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_432, 0, x_431);
return x_432;
}
}
else
{
lean_object* x_433; lean_object* x_434; lean_object* x_435; lean_object* x_436; lean_object* x_437; lean_object* x_438; lean_object* x_439; lean_object* x_440; uint32_t x_441; uint8_t x_442; 
x_433 = lean_ctor_get(x_429, 0);
lean_inc(x_433);
lean_dec_ref(x_429);
x_434 = lean_ctor_get(x_433, 0);
lean_inc(x_434);
x_435 = lean_ctor_get(x_433, 1);
lean_inc(x_435);
lean_dec(x_433);
x_436 = lean_ctor_get(x_290, 0);
lean_inc(x_436);
x_437 = lean_ctor_get(x_290, 1);
lean_inc(x_437);
x_438 = lean_ctor_get(x_290, 2);
lean_inc_ref(x_438);
x_439 = lean_ctor_get(x_290, 3);
lean_inc(x_439);
x_440 = lean_ctor_get(x_290, 4);
lean_inc_ref(x_440);
x_441 = lean_uint32_of_nat(x_434);
x_442 = lean_nat_dec_lt(x_8, x_436);
if (x_442 == 0)
{
x_113 = x_295;
x_114 = x_435;
x_115 = x_285;
x_116 = x_286;
x_117 = x_441;
x_118 = x_434;
x_119 = x_292;
x_120 = x_294;
x_121 = x_293;
x_122 = x_8;
x_123 = x_290;
x_124 = x_436;
x_125 = x_437;
x_126 = x_438;
x_127 = x_439;
x_128 = x_440;
goto block_136;
}
else
{
uint8_t x_443; 
x_443 = !lean_is_exclusive(x_290);
if (x_443 == 0)
{
lean_object* x_444; lean_object* x_445; lean_object* x_446; lean_object* x_447; lean_object* x_448; lean_object* x_449; lean_object* x_450; lean_object* x_451; lean_object* x_452; 
x_444 = lean_ctor_get(x_290, 4);
lean_dec(x_444);
x_445 = lean_ctor_get(x_290, 3);
lean_dec(x_445);
x_446 = lean_ctor_get(x_290, 2);
lean_dec(x_446);
x_447 = lean_ctor_get(x_290, 1);
lean_dec(x_447);
x_448 = lean_ctor_get(x_290, 0);
lean_dec(x_448);
x_449 = lean_box_uint32(x_441);
x_450 = lean_array_set(x_438, x_439, x_449);
x_451 = lean_nat_add(x_439, x_292);
lean_dec(x_439);
x_452 = lean_nat_mod(x_451, x_436);
lean_dec(x_451);
lean_inc_ref(x_440);
lean_inc(x_452);
lean_inc_ref(x_450);
lean_inc(x_437);
lean_inc(x_436);
lean_ctor_set(x_290, 3, x_452);
lean_ctor_set(x_290, 2, x_450);
x_113 = x_295;
x_114 = x_435;
x_115 = x_285;
x_116 = x_286;
x_117 = x_441;
x_118 = x_434;
x_119 = x_292;
x_120 = x_294;
x_121 = x_293;
x_122 = x_8;
x_123 = x_290;
x_124 = x_436;
x_125 = x_437;
x_126 = x_450;
x_127 = x_452;
x_128 = x_440;
goto block_136;
}
else
{
lean_object* x_453; lean_object* x_454; lean_object* x_455; lean_object* x_456; lean_object* x_457; 
lean_dec(x_290);
x_453 = lean_box_uint32(x_441);
x_454 = lean_array_set(x_438, x_439, x_453);
x_455 = lean_nat_add(x_439, x_292);
lean_dec(x_439);
x_456 = lean_nat_mod(x_455, x_436);
lean_dec(x_455);
lean_inc_ref(x_440);
lean_inc(x_456);
lean_inc_ref(x_454);
lean_inc(x_437);
lean_inc(x_436);
x_457 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_457, 0, x_436);
lean_ctor_set(x_457, 1, x_437);
lean_ctor_set(x_457, 2, x_454);
lean_ctor_set(x_457, 3, x_456);
lean_ctor_set(x_457, 4, x_440);
x_113 = x_295;
x_114 = x_435;
x_115 = x_285;
x_116 = x_286;
x_117 = x_441;
x_118 = x_434;
x_119 = x_292;
x_120 = x_294;
x_121 = x_293;
x_122 = x_8;
x_123 = x_457;
x_124 = x_436;
x_125 = x_437;
x_126 = x_454;
x_127 = x_456;
x_128 = x_440;
goto block_136;
}
}
}
}
}
}
}
}
block_481:
{
if (x_470 == 0)
{
x_285 = x_459;
x_286 = x_460;
x_287 = x_461;
x_288 = x_463;
x_289 = x_462;
x_290 = x_466;
x_291 = x_467;
x_292 = x_468;
x_293 = x_469;
x_294 = x_465;
x_295 = x_464;
goto block_458;
}
else
{
lean_object* x_471; lean_object* x_472; lean_object* x_473; lean_object* x_474; 
lean_dec(x_465);
x_471 = lean_ctor_get(x_464, 0);
lean_inc_ref(x_471);
x_472 = lean_ctor_get(x_464, 1);
lean_inc(x_472);
lean_dec_ref(x_464);
x_473 = lean_unsigned_to_nat(5u);
x_474 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_471, x_472, x_8, x_473);
if (lean_obj_tag(x_474) == 0)
{
uint8_t x_475; 
lean_dec(x_469);
lean_dec(x_468);
lean_dec_ref(x_467);
lean_dec_ref(x_466);
lean_dec_ref(x_463);
lean_dec_ref(x_462);
lean_dec_ref(x_461);
lean_dec_ref(x_460);
lean_dec_ref(x_459);
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
x_285 = x_459;
x_286 = x_460;
x_287 = x_461;
x_288 = x_463;
x_289 = x_462;
x_290 = x_466;
x_291 = x_467;
x_292 = x_468;
x_293 = x_469;
x_294 = x_479;
x_295 = x_480;
goto block_458;
}
}
}
block_496:
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
x_459 = x_489;
x_460 = x_487;
x_461 = x_488;
x_462 = x_483;
x_463 = x_491;
x_464 = x_482;
x_465 = x_494;
x_466 = x_492;
x_467 = x_490;
x_468 = x_485;
x_469 = x_486;
x_470 = x_495;
goto block_481;
}
else
{
if (lean_obj_tag(x_493) == 0)
{
if (x_495 == 0)
{
x_459 = x_489;
x_460 = x_487;
x_461 = x_488;
x_462 = x_483;
x_463 = x_491;
x_464 = x_482;
x_465 = x_494;
x_466 = x_492;
x_467 = x_490;
x_468 = x_485;
x_469 = x_486;
x_470 = x_495;
goto block_481;
}
else
{
lean_dec(x_494);
lean_dec_ref(x_492);
lean_dec_ref(x_491);
lean_dec_ref(x_490);
lean_dec_ref(x_489);
lean_dec(x_486);
lean_dec(x_485);
lean_dec_ref(x_483);
lean_dec(x_24);
x_37 = x_487;
x_38 = x_482;
x_39 = x_488;
goto block_42;
}
}
else
{
lean_dec(x_493);
x_459 = x_489;
x_460 = x_487;
x_461 = x_488;
x_462 = x_483;
x_463 = x_491;
x_464 = x_482;
x_465 = x_494;
x_466 = x_492;
x_467 = x_490;
x_468 = x_485;
x_469 = x_486;
x_470 = x_495;
goto block_481;
}
}
}
block_508:
{
lean_object* x_507; 
x_507 = lean_ctor_get(x_498, 1);
lean_inc_ref(x_507);
x_482 = x_497;
x_483 = x_498;
x_484 = x_507;
x_485 = x_499;
x_486 = x_500;
x_487 = x_501;
x_488 = x_502;
x_489 = x_503;
x_490 = x_504;
x_491 = x_505;
x_492 = x_506;
goto block_496;
}
block_527:
{
lean_object* x_517; lean_object* x_518; lean_object* x_519; lean_object* x_520; lean_object* x_521; lean_object* x_522; lean_object* x_523; lean_object* x_524; lean_object* x_525; lean_object* x_526; 
x_517 = lean_nat_add(x_515, x_513);
lean_dec(x_515);
x_518 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_518, 0, x_512);
lean_ctor_set(x_518, 1, x_517);
x_519 = lean_box(x_516);
x_520 = lean_mk_array(x_511, x_519);
x_521 = lean_byte_array_mk(x_520);
x_522 = lean_byte_array_size(x_3);
x_523 = lean_byte_array_size(x_521);
x_524 = lean_byte_array_copy_slice(x_521, x_8, x_3, x_522, x_523, x_23);
lean_dec_ref(x_521);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_525 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_525, 0, x_6);
lean_ctor_set(x_525, 1, x_7);
lean_inc_ref(x_525);
lean_inc_ref(x_518);
x_526 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_526, 0, x_518);
lean_ctor_set(x_526, 1, x_525);
x_497 = x_510;
x_498 = x_509;
x_499 = x_513;
x_500 = x_514;
x_501 = x_524;
x_502 = x_526;
x_503 = x_518;
x_504 = x_525;
x_505 = x_6;
x_506 = x_7;
goto block_508;
}
block_537:
{
lean_object* x_534; lean_object* x_535; lean_object* x_536; 
x_534 = lean_ctor_get(x_528, 0);
lean_inc(x_534);
x_535 = lean_ctor_get(x_528, 1);
lean_inc(x_535);
lean_inc_ref(x_528);
lean_inc_ref(x_5);
x_536 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_536, 0, x_5);
lean_ctor_set(x_536, 1, x_528);
x_497 = x_530;
x_498 = x_529;
x_499 = x_531;
x_500 = x_532;
x_501 = x_533;
x_502 = x_536;
x_503 = x_5;
x_504 = x_528;
x_505 = x_534;
x_506 = x_535;
goto block_508;
}
block_578:
{
lean_object* x_545; lean_object* x_546; uint8_t x_547; 
x_545 = lean_byte_array_size(x_3);
x_546 = lean_nat_add(x_542, x_545);
x_547 = lean_nat_dec_le(x_546, x_543);
if (x_547 == 0)
{
lean_object* x_548; uint8_t x_549; 
lean_dec(x_546);
x_548 = lean_nat_add(x_543, x_538);
x_549 = lean_nat_dec_le(x_548, x_542);
if (x_549 == 0)
{
uint8_t x_550; 
lean_dec(x_548);
x_550 = lean_nat_dec_le(x_542, x_543);
if (x_550 == 0)
{
lean_object* x_551; lean_object* x_552; lean_object* x_553; lean_object* x_554; lean_object* x_555; lean_object* x_556; lean_object* x_557; uint8_t x_558; 
x_551 = lean_nat_sub(x_542, x_543);
x_552 = lean_nat_sub(x_538, x_551);
lean_dec(x_551);
lean_dec(x_538);
x_553 = l_ByteArray_extract(x_1, x_543, x_542);
x_554 = lean_byte_array_size(x_553);
x_555 = lean_byte_array_copy_slice(x_553, x_8, x_3, x_545, x_554, x_23);
lean_dec_ref(x_553);
x_556 = lean_byte_array_size(x_555);
x_557 = lean_nat_sub(x_556, x_542);
x_558 = lean_nat_dec_le(x_552, x_557);
lean_dec(x_557);
if (x_558 == 0)
{
lean_object* x_559; lean_object* x_560; 
lean_inc(x_541);
x_559 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_559, 0, x_8);
lean_ctor_set(x_559, 1, x_552);
lean_ctor_set(x_559, 2, x_541);
x_560 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__0___redArg(x_542, x_1, x_559, x_555, x_8);
lean_dec_ref(x_559);
x_528 = x_544;
x_529 = x_540;
x_530 = x_539;
x_531 = x_541;
x_532 = x_542;
x_533 = x_560;
goto block_537;
}
else
{
lean_object* x_561; lean_object* x_562; lean_object* x_563; lean_object* x_564; 
x_561 = lean_nat_add(x_542, x_552);
lean_dec(x_552);
lean_inc(x_542);
x_562 = l_ByteArray_extract(x_555, x_542, x_561);
lean_dec(x_561);
x_563 = lean_byte_array_size(x_562);
x_564 = lean_byte_array_copy_slice(x_562, x_8, x_555, x_556, x_563, x_23);
lean_dec_ref(x_562);
x_528 = x_544;
x_529 = x_540;
x_530 = x_539;
x_531 = x_541;
x_532 = x_542;
x_533 = x_564;
goto block_537;
}
}
else
{
lean_object* x_565; lean_object* x_566; uint8_t x_567; 
x_565 = lean_nat_sub(x_543, x_542);
lean_dec(x_543);
x_566 = lean_nat_add(x_565, x_538);
x_567 = lean_nat_dec_le(x_566, x_545);
if (x_567 == 0)
{
lean_object* x_568; lean_object* x_569; 
lean_dec(x_566);
lean_inc(x_541);
x_568 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_568, 0, x_8);
lean_ctor_set(x_568, 1, x_538);
lean_ctor_set(x_568, 2, x_541);
x_569 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_applyWindowLoop_spec__1___redArg(x_565, x_568, x_3, x_8);
lean_dec_ref(x_568);
lean_dec(x_565);
x_528 = x_544;
x_529 = x_540;
x_530 = x_539;
x_531 = x_541;
x_532 = x_542;
x_533 = x_569;
goto block_537;
}
else
{
lean_object* x_570; lean_object* x_571; lean_object* x_572; 
lean_dec(x_538);
x_570 = l_ByteArray_extract(x_3, x_565, x_566);
lean_dec(x_566);
x_571 = lean_byte_array_size(x_570);
x_572 = lean_byte_array_copy_slice(x_570, x_8, x_3, x_545, x_571, x_23);
lean_dec_ref(x_570);
x_528 = x_544;
x_529 = x_540;
x_530 = x_539;
x_531 = x_541;
x_532 = x_542;
x_533 = x_572;
goto block_537;
}
}
}
else
{
lean_object* x_573; lean_object* x_574; lean_object* x_575; 
lean_dec(x_538);
x_573 = l_ByteArray_extract(x_1, x_543, x_548);
lean_dec(x_548);
x_574 = lean_byte_array_size(x_573);
x_575 = lean_byte_array_copy_slice(x_573, x_8, x_3, x_545, x_574, x_23);
lean_dec_ref(x_573);
x_528 = x_544;
x_529 = x_540;
x_530 = x_539;
x_531 = x_541;
x_532 = x_542;
x_533 = x_575;
goto block_537;
}
}
else
{
lean_object* x_576; lean_object* x_577; 
lean_dec_ref(x_544);
lean_dec(x_542);
lean_dec(x_541);
lean_dec_ref(x_540);
lean_dec_ref(x_539);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_576 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_576, 0, x_543);
lean_ctor_set(x_576, 1, x_538);
lean_ctor_set(x_576, 2, x_546);
x_577 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_577, 0, x_576);
return x_577;
}
}
block_588:
{
lean_object* x_587; 
x_587 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_587, 0, x_585);
lean_ctor_set(x_587, 1, x_586);
x_538 = x_581;
x_539 = x_580;
x_540 = x_579;
x_541 = x_583;
x_542 = x_584;
x_543 = x_582;
x_544 = x_587;
goto block_578;
}
block_611:
{
uint8_t x_605; 
x_605 = lean_nat_dec_lt(x_595, x_601);
lean_dec(x_595);
if (x_605 == 0)
{
lean_dec_ref(x_604);
lean_dec(x_603);
lean_dec_ref(x_602);
lean_dec(x_601);
lean_dec(x_600);
x_579 = x_593;
x_580 = x_592;
x_581 = x_591;
x_582 = x_590;
x_583 = x_596;
x_584 = x_598;
x_585 = x_597;
x_586 = x_599;
goto block_588;
}
else
{
lean_object* x_606; lean_object* x_607; lean_object* x_608; lean_object* x_609; lean_object* x_610; 
lean_dec_ref(x_599);
x_606 = lean_nat_mul(x_601, x_594);
x_607 = lean_nat_mod(x_590, x_606);
lean_dec(x_606);
x_608 = lean_box_uint32(x_589);
x_609 = lean_array_set(x_604, x_607, x_608);
lean_dec(x_607);
x_610 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_610, 0, x_600);
lean_ctor_set(x_610, 1, x_601);
lean_ctor_set(x_610, 2, x_602);
lean_ctor_set(x_610, 3, x_603);
lean_ctor_set(x_610, 4, x_609);
x_579 = x_593;
x_580 = x_592;
x_581 = x_591;
x_582 = x_590;
x_583 = x_596;
x_584 = x_598;
x_585 = x_597;
x_586 = x_610;
goto block_588;
}
}
block_652:
{
lean_object* x_628; lean_object* x_629; lean_object* x_630; lean_object* x_631; lean_object* x_632; lean_object* x_633; lean_object* x_634; lean_object* x_635; lean_object* x_636; lean_object* x_637; uint32_t x_638; lean_object* x_639; uint32_t x_640; uint8_t x_641; 
x_628 = lean_nat_add(x_622, x_625);
lean_dec(x_622);
x_629 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_629, 0, x_619);
lean_ctor_set(x_629, 1, x_628);
x_630 = lean_nat_sub(x_617, x_621);
lean_dec(x_617);
x_631 = lean_nat_sub(x_630, x_618);
lean_dec(x_630);
x_632 = lean_unsigned_to_nat(256u);
x_633 = lean_nat_mul(x_631, x_632);
lean_dec(x_631);
x_634 = lean_uint8_to_nat(x_627);
x_635 = lean_nat_add(x_633, x_634);
lean_dec(x_633);
x_636 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_637 = lean_array_get_borrowed(x_636, x_612, x_635);
lean_dec(x_635);
x_638 = lean_unbox_uint32(x_637);
x_639 = lean_uint32_to_nat(x_638);
x_640 = lean_uint32_of_nat(x_639);
x_641 = lean_nat_dec_lt(x_624, x_618);
if (x_641 == 0)
{
lean_object* x_642; lean_object* x_643; lean_object* x_644; lean_object* x_645; lean_object* x_646; 
lean_dec(x_620);
lean_dec(x_618);
lean_dec(x_614);
lean_dec_ref(x_613);
lean_dec_ref(x_612);
x_642 = lean_ctor_get(x_7, 0);
lean_inc(x_642);
x_643 = lean_ctor_get(x_7, 1);
lean_inc(x_643);
x_644 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_644);
x_645 = lean_ctor_get(x_7, 3);
lean_inc(x_645);
x_646 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_646);
x_589 = x_640;
x_590 = x_639;
x_591 = x_623;
x_592 = x_616;
x_593 = x_615;
x_594 = x_632;
x_595 = x_624;
x_596 = x_625;
x_597 = x_629;
x_598 = x_626;
x_599 = x_7;
x_600 = x_642;
x_601 = x_643;
x_602 = x_644;
x_603 = x_645;
x_604 = x_646;
goto block_611;
}
else
{
lean_object* x_647; lean_object* x_648; lean_object* x_649; lean_object* x_650; lean_object* x_651; 
lean_dec_ref(x_7);
x_647 = lean_box_uint32(x_640);
x_648 = lean_array_set(x_613, x_614, x_647);
x_649 = lean_nat_add(x_614, x_625);
lean_dec(x_614);
x_650 = lean_nat_mod(x_649, x_618);
lean_dec(x_649);
lean_inc_ref(x_612);
lean_inc(x_650);
lean_inc_ref(x_648);
lean_inc(x_620);
lean_inc(x_618);
x_651 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_651, 0, x_618);
lean_ctor_set(x_651, 1, x_620);
lean_ctor_set(x_651, 2, x_648);
lean_ctor_set(x_651, 3, x_650);
lean_ctor_set(x_651, 4, x_612);
x_589 = x_640;
x_590 = x_639;
x_591 = x_623;
x_592 = x_616;
x_593 = x_615;
x_594 = x_632;
x_595 = x_624;
x_596 = x_625;
x_597 = x_629;
x_598 = x_626;
x_599 = x_651;
x_600 = x_618;
x_601 = x_620;
x_602 = x_648;
x_603 = x_650;
x_604 = x_612;
goto block_611;
}
}
block_662:
{
lean_object* x_661; 
x_661 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_661, 0, x_656);
lean_ctor_set(x_661, 1, x_660);
x_538 = x_655;
x_539 = x_654;
x_540 = x_653;
x_541 = x_657;
x_542 = x_659;
x_543 = x_658;
x_544 = x_661;
goto block_578;
}
block_685:
{
uint8_t x_678; 
x_678 = lean_nat_dec_lt(x_667, x_674);
lean_dec(x_667);
if (x_678 == 0)
{
lean_dec_ref(x_677);
lean_dec(x_676);
lean_dec_ref(x_675);
lean_dec(x_674);
lean_dec(x_673);
x_653 = x_666;
x_654 = x_665;
x_655 = x_664;
x_656 = x_668;
x_657 = x_670;
x_658 = x_669;
x_659 = x_671;
x_660 = x_672;
goto block_662;
}
else
{
lean_object* x_679; lean_object* x_680; lean_object* x_681; lean_object* x_682; lean_object* x_683; lean_object* x_684; 
lean_dec_ref(x_672);
x_679 = lean_unsigned_to_nat(256u);
x_680 = lean_nat_mul(x_674, x_679);
x_681 = lean_nat_mod(x_669, x_680);
lean_dec(x_680);
x_682 = lean_box_uint32(x_663);
x_683 = lean_array_set(x_677, x_681, x_682);
lean_dec(x_681);
x_684 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_684, 0, x_673);
lean_ctor_set(x_684, 1, x_674);
lean_ctor_set(x_684, 2, x_675);
lean_ctor_set(x_684, 3, x_676);
lean_ctor_set(x_684, 4, x_683);
x_653 = x_666;
x_654 = x_665;
x_655 = x_664;
x_656 = x_668;
x_657 = x_670;
x_658 = x_669;
x_659 = x_671;
x_660 = x_684;
goto block_662;
}
}
block_695:
{
lean_object* x_694; 
x_694 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_694, 0, x_686);
lean_ctor_set(x_694, 1, x_693);
x_538 = x_689;
x_539 = x_688;
x_540 = x_687;
x_541 = x_691;
x_542 = x_692;
x_543 = x_690;
x_544 = x_694;
goto block_578;
}
block_718:
{
uint8_t x_711; 
x_711 = lean_nat_dec_lt(x_701, x_707);
lean_dec(x_701);
if (x_711 == 0)
{
lean_dec_ref(x_710);
lean_dec(x_709);
lean_dec_ref(x_708);
lean_dec(x_707);
lean_dec(x_706);
x_686 = x_696;
x_687 = x_700;
x_688 = x_699;
x_689 = x_698;
x_690 = x_702;
x_691 = x_703;
x_692 = x_704;
x_693 = x_705;
goto block_695;
}
else
{
lean_object* x_712; lean_object* x_713; lean_object* x_714; lean_object* x_715; lean_object* x_716; lean_object* x_717; 
lean_dec_ref(x_705);
x_712 = lean_unsigned_to_nat(256u);
x_713 = lean_nat_mul(x_707, x_712);
x_714 = lean_nat_mod(x_702, x_713);
lean_dec(x_713);
x_715 = lean_box_uint32(x_697);
x_716 = lean_array_set(x_710, x_714, x_715);
lean_dec(x_714);
x_717 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_717, 0, x_706);
lean_ctor_set(x_717, 1, x_707);
lean_ctor_set(x_717, 2, x_708);
lean_ctor_set(x_717, 3, x_709);
lean_ctor_set(x_717, 4, x_716);
x_686 = x_696;
x_687 = x_700;
x_688 = x_699;
x_689 = x_698;
x_690 = x_702;
x_691 = x_703;
x_692 = x_704;
x_693 = x_717;
goto block_695;
}
}
block_728:
{
lean_object* x_727; 
x_727 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_727, 0, x_723);
lean_ctor_set(x_727, 1, x_726);
x_538 = x_722;
x_539 = x_721;
x_540 = x_720;
x_541 = x_724;
x_542 = x_725;
x_543 = x_719;
x_544 = x_727;
goto block_578;
}
block_751:
{
uint8_t x_744; 
x_744 = lean_nat_dec_lt(x_735, x_740);
lean_dec(x_735);
if (x_744 == 0)
{
lean_dec_ref(x_743);
lean_dec(x_742);
lean_dec_ref(x_741);
lean_dec(x_740);
lean_dec(x_739);
x_719 = x_730;
x_720 = x_734;
x_721 = x_733;
x_722 = x_732;
x_723 = x_731;
x_724 = x_736;
x_725 = x_737;
x_726 = x_738;
goto block_728;
}
else
{
lean_object* x_745; lean_object* x_746; lean_object* x_747; lean_object* x_748; lean_object* x_749; lean_object* x_750; 
lean_dec_ref(x_738);
x_745 = lean_unsigned_to_nat(256u);
x_746 = lean_nat_mul(x_740, x_745);
x_747 = lean_nat_mod(x_730, x_746);
lean_dec(x_746);
x_748 = lean_box_uint32(x_729);
x_749 = lean_array_set(x_743, x_747, x_748);
lean_dec(x_747);
x_750 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_750, 0, x_739);
lean_ctor_set(x_750, 1, x_740);
lean_ctor_set(x_750, 2, x_741);
lean_ctor_set(x_750, 3, x_742);
lean_ctor_set(x_750, 4, x_749);
x_719 = x_730;
x_720 = x_734;
x_721 = x_733;
x_722 = x_732;
x_723 = x_731;
x_724 = x_736;
x_725 = x_737;
x_726 = x_750;
goto block_728;
}
}
block_1057:
{
lean_object* x_756; uint8_t x_757; 
x_756 = lean_ctor_get(x_752, 0);
lean_inc_ref(x_756);
x_757 = !lean_is_exclusive(x_756);
if (x_757 == 0)
{
lean_object* x_758; lean_object* x_759; lean_object* x_760; lean_object* x_761; 
x_758 = lean_ctor_get(x_752, 1);
x_759 = lean_ctor_get(x_756, 0);
x_760 = lean_ctor_get(x_756, 1);
lean_dec(x_760);
x_761 = lean_byte_array_size(x_1);
if (lean_obj_tag(x_759) == 0)
{
lean_object* x_762; 
lean_inc_ref(x_758);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_5);
x_762 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_762, 0, x_5);
lean_ctor_set(x_762, 1, x_756);
x_482 = x_755;
x_483 = x_752;
x_484 = x_758;
x_485 = x_753;
x_486 = x_761;
x_487 = x_3;
x_488 = x_762;
x_489 = x_5;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_496;
}
else
{
switch (lean_obj_tag(x_759)) {
case 0:
{
lean_object* x_763; 
lean_inc_ref(x_758);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_5);
x_763 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_763, 0, x_5);
lean_ctor_set(x_763, 1, x_756);
x_482 = x_755;
x_483 = x_752;
x_484 = x_758;
x_485 = x_753;
x_486 = x_761;
x_487 = x_3;
x_488 = x_763;
x_489 = x_5;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_496;
}
case 1:
{
uint8_t x_764; 
lean_inc_ref(x_758);
x_764 = !lean_is_exclusive(x_5);
if (x_764 == 0)
{
lean_object* x_765; lean_object* x_766; lean_object* x_767; lean_object* x_768; uint8_t x_769; 
x_765 = lean_ctor_get(x_5, 0);
x_766 = lean_ctor_get(x_5, 1);
x_767 = lean_nat_add(x_766, x_754);
lean_dec(x_754);
x_768 = lean_byte_array_size(x_765);
x_769 = lean_nat_dec_le(x_767, x_768);
if (x_769 == 0)
{
lean_object* x_770; 
lean_dec(x_767);
lean_free_object(x_5);
lean_dec(x_766);
lean_dec_ref(x_765);
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
x_770 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_770;
}
else
{
if (x_769 == 0)
{
lean_object* x_771; 
lean_dec(x_767);
lean_free_object(x_5);
lean_dec(x_766);
lean_dec_ref(x_765);
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
lean_object* x_772; lean_object* x_773; lean_object* x_774; lean_object* x_775; lean_object* x_776; 
x_772 = l_ByteArray_extract(x_765, x_766, x_767);
lean_ctor_set(x_5, 1, x_767);
x_773 = lean_byte_array_size(x_3);
x_774 = lean_byte_array_size(x_772);
x_775 = lean_byte_array_copy_slice(x_772, x_8, x_3, x_773, x_774, x_23);
lean_dec_ref(x_772);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_5);
x_776 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_776, 0, x_5);
lean_ctor_set(x_776, 1, x_756);
x_482 = x_755;
x_483 = x_752;
x_484 = x_758;
x_485 = x_753;
x_486 = x_761;
x_487 = x_775;
x_488 = x_776;
x_489 = x_5;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_496;
}
}
}
else
{
lean_object* x_777; lean_object* x_778; lean_object* x_779; lean_object* x_780; uint8_t x_781; 
x_777 = lean_ctor_get(x_5, 0);
x_778 = lean_ctor_get(x_5, 1);
lean_inc(x_778);
lean_inc(x_777);
lean_dec(x_5);
x_779 = lean_nat_add(x_778, x_754);
lean_dec(x_754);
x_780 = lean_byte_array_size(x_777);
x_781 = lean_nat_dec_le(x_779, x_780);
if (x_781 == 0)
{
lean_object* x_782; 
lean_dec(x_779);
lean_dec(x_778);
lean_dec_ref(x_777);
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
x_782 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_782;
}
else
{
if (x_781 == 0)
{
lean_object* x_783; 
lean_dec(x_779);
lean_dec(x_778);
lean_dec_ref(x_777);
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
lean_object* x_784; lean_object* x_785; lean_object* x_786; lean_object* x_787; lean_object* x_788; lean_object* x_789; 
x_784 = l_ByteArray_extract(x_777, x_778, x_779);
x_785 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_785, 0, x_777);
lean_ctor_set(x_785, 1, x_779);
x_786 = lean_byte_array_size(x_3);
x_787 = lean_byte_array_size(x_784);
x_788 = lean_byte_array_copy_slice(x_784, x_8, x_3, x_786, x_787, x_23);
lean_dec_ref(x_784);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
lean_ctor_set(x_756, 1, x_7);
lean_ctor_set(x_756, 0, x_6);
lean_inc_ref(x_756);
lean_inc_ref(x_785);
x_789 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_789, 0, x_785);
lean_ctor_set(x_789, 1, x_756);
x_482 = x_755;
x_483 = x_752;
x_484 = x_758;
x_485 = x_753;
x_486 = x_761;
x_487 = x_788;
x_488 = x_789;
x_489 = x_785;
x_490 = x_756;
x_491 = x_6;
x_492 = x_7;
goto block_496;
}
}
}
}
case 2:
{
lean_object* x_790; lean_object* x_791; lean_object* x_792; uint8_t x_793; 
lean_free_object(x_756);
x_790 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_790);
x_791 = lean_ctor_get(x_5, 1);
lean_inc(x_791);
lean_dec_ref(x_5);
x_792 = lean_byte_array_size(x_790);
x_793 = lean_nat_dec_lt(x_791, x_792);
if (x_793 == 0)
{
lean_object* x_794; 
lean_dec(x_791);
lean_dec_ref(x_790);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_794 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_794;
}
else
{
if (x_793 == 0)
{
uint8_t x_795; lean_object* x_796; lean_object* x_797; uint8_t x_798; 
x_795 = l_instInhabitedUInt8;
x_796 = lean_box(x_795);
x_797 = l_outOfBounds___redArg(x_796);
x_798 = lean_unbox(x_797);
lean_dec(x_797);
x_509 = x_752;
x_510 = x_755;
x_511 = x_754;
x_512 = x_790;
x_513 = x_753;
x_514 = x_761;
x_515 = x_791;
x_516 = x_798;
goto block_527;
}
else
{
uint8_t x_799; 
x_799 = lean_byte_array_fget(x_790, x_791);
x_509 = x_752;
x_510 = x_755;
x_511 = x_754;
x_512 = x_790;
x_513 = x_753;
x_514 = x_761;
x_515 = x_791;
x_516 = x_799;
goto block_527;
}
}
}
default: 
{
uint8_t x_800; lean_object* x_801; uint8_t x_802; 
lean_free_object(x_756);
x_800 = lean_ctor_get_uint8(x_759, 0);
lean_dec_ref(x_759);
x_801 = lean_uint8_to_nat(x_800);
x_802 = lean_nat_dec_eq(x_801, x_8);
if (x_802 == 0)
{
uint8_t x_803; 
x_803 = lean_nat_dec_eq(x_801, x_753);
if (x_803 == 0)
{
lean_object* x_804; lean_object* x_805; lean_object* x_806; lean_object* x_807; lean_object* x_808; lean_object* x_809; lean_object* x_810; uint8_t x_811; 
x_804 = lean_ctor_get(x_7, 0);
x_805 = lean_ctor_get(x_7, 1);
x_806 = lean_ctor_get(x_7, 2);
x_807 = lean_ctor_get(x_7, 3);
x_808 = lean_ctor_get(x_7, 4);
x_809 = lean_unsigned_to_nat(2u);
x_810 = lean_nat_add(x_809, x_804);
x_811 = lean_nat_dec_lt(x_801, x_810);
if (x_811 == 0)
{
lean_object* x_812; uint8_t x_813; 
x_812 = lean_nat_add(x_810, x_805);
lean_dec(x_810);
x_813 = lean_nat_dec_lt(x_801, x_812);
lean_dec(x_812);
if (x_813 == 0)
{
lean_object* x_814; lean_object* x_815; 
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
x_814 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_814, 0, x_801);
x_815 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_815, 0, x_814);
return x_815;
}
else
{
lean_object* x_816; lean_object* x_817; lean_object* x_818; uint8_t x_819; 
x_816 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_816);
x_817 = lean_ctor_get(x_6, 1);
lean_inc(x_817);
lean_dec_ref(x_6);
x_818 = lean_byte_array_size(x_816);
x_819 = lean_nat_dec_lt(x_817, x_818);
if (x_819 == 0)
{
lean_object* x_820; 
lean_dec(x_817);
lean_dec_ref(x_816);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_820 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_820;
}
else
{
if (x_819 == 0)
{
uint8_t x_821; lean_object* x_822; lean_object* x_823; uint8_t x_824; 
x_821 = l_instInhabitedUInt8;
x_822 = lean_box(x_821);
x_823 = l_outOfBounds___redArg(x_822);
x_824 = lean_unbox(x_823);
lean_dec(x_823);
lean_inc(x_805);
lean_inc(x_804);
lean_inc(x_807);
lean_inc_ref(x_806);
lean_inc_ref(x_808);
x_612 = x_808;
x_613 = x_806;
x_614 = x_807;
x_615 = x_752;
x_616 = x_755;
x_617 = x_801;
x_618 = x_804;
x_619 = x_816;
x_620 = x_805;
x_621 = x_809;
x_622 = x_817;
x_623 = x_754;
x_624 = x_8;
x_625 = x_753;
x_626 = x_761;
x_627 = x_824;
goto block_652;
}
else
{
uint8_t x_825; 
x_825 = lean_byte_array_fget(x_816, x_817);
lean_inc(x_805);
lean_inc(x_804);
lean_inc(x_807);
lean_inc_ref(x_806);
lean_inc_ref(x_808);
x_612 = x_808;
x_613 = x_806;
x_614 = x_807;
x_615 = x_752;
x_616 = x_755;
x_617 = x_801;
x_618 = x_804;
x_619 = x_816;
x_620 = x_805;
x_621 = x_809;
x_622 = x_817;
x_623 = x_754;
x_624 = x_8;
x_625 = x_753;
x_626 = x_761;
x_627 = x_825;
goto block_652;
}
}
}
}
else
{
lean_object* x_826; lean_object* x_827; lean_object* x_828; lean_object* x_829; 
lean_inc_ref(x_808);
lean_inc(x_807);
lean_inc_ref(x_806);
lean_inc(x_805);
lean_inc(x_804);
lean_dec(x_810);
x_826 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_826);
x_827 = lean_ctor_get(x_6, 1);
lean_inc(x_827);
lean_dec_ref(x_6);
x_828 = lean_unsigned_to_nat(5u);
x_829 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_826, x_827, x_8, x_828);
if (lean_obj_tag(x_829) == 0)
{
uint8_t x_830; 
lean_dec_ref(x_808);
lean_dec(x_807);
lean_dec_ref(x_806);
lean_dec(x_805);
lean_dec(x_804);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_830 = !lean_is_exclusive(x_829);
if (x_830 == 0)
{
return x_829;
}
else
{
lean_object* x_831; lean_object* x_832; 
x_831 = lean_ctor_get(x_829, 0);
lean_inc(x_831);
lean_dec(x_829);
x_832 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_832, 0, x_831);
return x_832;
}
}
else
{
lean_object* x_833; lean_object* x_834; lean_object* x_835; lean_object* x_836; lean_object* x_837; lean_object* x_838; uint32_t x_839; lean_object* x_840; lean_object* x_841; uint32_t x_842; uint8_t x_843; 
x_833 = lean_ctor_get(x_829, 0);
lean_inc(x_833);
lean_dec_ref(x_829);
x_834 = lean_ctor_get(x_833, 0);
lean_inc(x_834);
x_835 = lean_ctor_get(x_833, 1);
lean_inc(x_835);
lean_dec(x_833);
x_836 = lean_nat_sub(x_801, x_809);
x_837 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_838 = lean_array_get_borrowed(x_837, x_806, x_836);
lean_dec(x_836);
x_839 = lean_unbox_uint32(x_838);
x_840 = lean_uint32_to_nat(x_839);
x_841 = lean_nat_add(x_840, x_834);
lean_dec(x_834);
lean_dec(x_840);
x_842 = lean_uint32_of_nat(x_841);
x_843 = lean_nat_dec_lt(x_8, x_804);
if (x_843 == 0)
{
x_663 = x_842;
x_664 = x_754;
x_665 = x_755;
x_666 = x_752;
x_667 = x_8;
x_668 = x_835;
x_669 = x_841;
x_670 = x_753;
x_671 = x_761;
x_672 = x_7;
x_673 = x_804;
x_674 = x_805;
x_675 = x_806;
x_676 = x_807;
x_677 = x_808;
goto block_685;
}
else
{
uint8_t x_844; 
x_844 = !lean_is_exclusive(x_7);
if (x_844 == 0)
{
lean_object* x_845; lean_object* x_846; lean_object* x_847; lean_object* x_848; lean_object* x_849; lean_object* x_850; lean_object* x_851; lean_object* x_852; lean_object* x_853; 
x_845 = lean_ctor_get(x_7, 4);
lean_dec(x_845);
x_846 = lean_ctor_get(x_7, 3);
lean_dec(x_846);
x_847 = lean_ctor_get(x_7, 2);
lean_dec(x_847);
x_848 = lean_ctor_get(x_7, 1);
lean_dec(x_848);
x_849 = lean_ctor_get(x_7, 0);
lean_dec(x_849);
x_850 = lean_box_uint32(x_842);
x_851 = lean_array_set(x_806, x_807, x_850);
x_852 = lean_nat_add(x_807, x_753);
lean_dec(x_807);
x_853 = lean_nat_mod(x_852, x_804);
lean_dec(x_852);
lean_inc_ref(x_808);
lean_inc(x_853);
lean_inc_ref(x_851);
lean_inc(x_805);
lean_inc(x_804);
lean_ctor_set(x_7, 3, x_853);
lean_ctor_set(x_7, 2, x_851);
x_663 = x_842;
x_664 = x_754;
x_665 = x_755;
x_666 = x_752;
x_667 = x_8;
x_668 = x_835;
x_669 = x_841;
x_670 = x_753;
x_671 = x_761;
x_672 = x_7;
x_673 = x_804;
x_674 = x_805;
x_675 = x_851;
x_676 = x_853;
x_677 = x_808;
goto block_685;
}
else
{
lean_object* x_854; lean_object* x_855; lean_object* x_856; lean_object* x_857; lean_object* x_858; 
lean_dec(x_7);
x_854 = lean_box_uint32(x_842);
x_855 = lean_array_set(x_806, x_807, x_854);
x_856 = lean_nat_add(x_807, x_753);
lean_dec(x_807);
x_857 = lean_nat_mod(x_856, x_804);
lean_dec(x_856);
lean_inc_ref(x_808);
lean_inc(x_857);
lean_inc_ref(x_855);
lean_inc(x_805);
lean_inc(x_804);
x_858 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_858, 0, x_804);
lean_ctor_set(x_858, 1, x_805);
lean_ctor_set(x_858, 2, x_855);
lean_ctor_set(x_858, 3, x_857);
lean_ctor_set(x_858, 4, x_808);
x_663 = x_842;
x_664 = x_754;
x_665 = x_755;
x_666 = x_752;
x_667 = x_8;
x_668 = x_835;
x_669 = x_841;
x_670 = x_753;
x_671 = x_761;
x_672 = x_858;
x_673 = x_804;
x_674 = x_805;
x_675 = x_855;
x_676 = x_857;
x_677 = x_808;
goto block_685;
}
}
}
}
}
else
{
lean_object* x_859; lean_object* x_860; lean_object* x_861; lean_object* x_862; 
x_859 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_859);
x_860 = lean_ctor_get(x_6, 1);
lean_inc(x_860);
lean_dec_ref(x_6);
x_861 = lean_unsigned_to_nat(5u);
x_862 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_859, x_860, x_8, x_861);
if (lean_obj_tag(x_862) == 0)
{
uint8_t x_863; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_863 = !lean_is_exclusive(x_862);
if (x_863 == 0)
{
return x_862;
}
else
{
lean_object* x_864; lean_object* x_865; 
x_864 = lean_ctor_get(x_862, 0);
lean_inc(x_864);
lean_dec(x_862);
x_865 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_865, 0, x_864);
return x_865;
}
}
else
{
lean_object* x_866; lean_object* x_867; lean_object* x_868; lean_object* x_869; lean_object* x_870; lean_object* x_871; lean_object* x_872; lean_object* x_873; lean_object* x_874; lean_object* x_875; lean_object* x_876; uint32_t x_877; uint8_t x_878; 
x_866 = lean_ctor_get(x_862, 0);
lean_inc(x_866);
lean_dec_ref(x_862);
x_867 = lean_ctor_get(x_866, 0);
lean_inc(x_867);
x_868 = lean_ctor_get(x_866, 1);
lean_inc(x_868);
lean_dec(x_866);
x_869 = lean_ctor_get(x_7, 0);
lean_inc(x_869);
x_870 = lean_ctor_get(x_7, 1);
lean_inc(x_870);
x_871 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_871);
x_872 = lean_ctor_get(x_7, 3);
lean_inc(x_872);
x_873 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_873);
x_874 = lean_byte_array_size(x_3);
x_875 = lean_nat_add(x_761, x_874);
x_876 = lean_nat_sub(x_875, x_867);
lean_dec(x_867);
lean_dec(x_875);
x_877 = lean_uint32_of_nat(x_876);
x_878 = lean_nat_dec_lt(x_8, x_869);
if (x_878 == 0)
{
x_696 = x_868;
x_697 = x_877;
x_698 = x_754;
x_699 = x_755;
x_700 = x_752;
x_701 = x_8;
x_702 = x_876;
x_703 = x_753;
x_704 = x_761;
x_705 = x_7;
x_706 = x_869;
x_707 = x_870;
x_708 = x_871;
x_709 = x_872;
x_710 = x_873;
goto block_718;
}
else
{
uint8_t x_879; 
x_879 = !lean_is_exclusive(x_7);
if (x_879 == 0)
{
lean_object* x_880; lean_object* x_881; lean_object* x_882; lean_object* x_883; lean_object* x_884; lean_object* x_885; lean_object* x_886; lean_object* x_887; lean_object* x_888; 
x_880 = lean_ctor_get(x_7, 4);
lean_dec(x_880);
x_881 = lean_ctor_get(x_7, 3);
lean_dec(x_881);
x_882 = lean_ctor_get(x_7, 2);
lean_dec(x_882);
x_883 = lean_ctor_get(x_7, 1);
lean_dec(x_883);
x_884 = lean_ctor_get(x_7, 0);
lean_dec(x_884);
x_885 = lean_box_uint32(x_877);
x_886 = lean_array_set(x_871, x_872, x_885);
x_887 = lean_nat_add(x_872, x_753);
lean_dec(x_872);
x_888 = lean_nat_mod(x_887, x_869);
lean_dec(x_887);
lean_inc_ref(x_873);
lean_inc(x_888);
lean_inc_ref(x_886);
lean_inc(x_870);
lean_inc(x_869);
lean_ctor_set(x_7, 3, x_888);
lean_ctor_set(x_7, 2, x_886);
x_696 = x_868;
x_697 = x_877;
x_698 = x_754;
x_699 = x_755;
x_700 = x_752;
x_701 = x_8;
x_702 = x_876;
x_703 = x_753;
x_704 = x_761;
x_705 = x_7;
x_706 = x_869;
x_707 = x_870;
x_708 = x_886;
x_709 = x_888;
x_710 = x_873;
goto block_718;
}
else
{
lean_object* x_889; lean_object* x_890; lean_object* x_891; lean_object* x_892; lean_object* x_893; 
lean_dec(x_7);
x_889 = lean_box_uint32(x_877);
x_890 = lean_array_set(x_871, x_872, x_889);
x_891 = lean_nat_add(x_872, x_753);
lean_dec(x_872);
x_892 = lean_nat_mod(x_891, x_869);
lean_dec(x_891);
lean_inc_ref(x_873);
lean_inc(x_892);
lean_inc_ref(x_890);
lean_inc(x_870);
lean_inc(x_869);
x_893 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_893, 0, x_869);
lean_ctor_set(x_893, 1, x_870);
lean_ctor_set(x_893, 2, x_890);
lean_ctor_set(x_893, 3, x_892);
lean_ctor_set(x_893, 4, x_873);
x_696 = x_868;
x_697 = x_877;
x_698 = x_754;
x_699 = x_755;
x_700 = x_752;
x_701 = x_8;
x_702 = x_876;
x_703 = x_753;
x_704 = x_761;
x_705 = x_893;
x_706 = x_869;
x_707 = x_870;
x_708 = x_890;
x_709 = x_892;
x_710 = x_873;
goto block_718;
}
}
}
}
}
else
{
lean_object* x_894; lean_object* x_895; lean_object* x_896; lean_object* x_897; 
x_894 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_894);
x_895 = lean_ctor_get(x_6, 1);
lean_inc(x_895);
lean_dec_ref(x_6);
x_896 = lean_unsigned_to_nat(5u);
x_897 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_894, x_895, x_8, x_896);
if (lean_obj_tag(x_897) == 0)
{
uint8_t x_898; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_898 = !lean_is_exclusive(x_897);
if (x_898 == 0)
{
return x_897;
}
else
{
lean_object* x_899; lean_object* x_900; 
x_899 = lean_ctor_get(x_897, 0);
lean_inc(x_899);
lean_dec(x_897);
x_900 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_900, 0, x_899);
return x_900;
}
}
else
{
lean_object* x_901; lean_object* x_902; lean_object* x_903; lean_object* x_904; lean_object* x_905; lean_object* x_906; lean_object* x_907; lean_object* x_908; uint32_t x_909; uint8_t x_910; 
x_901 = lean_ctor_get(x_897, 0);
lean_inc(x_901);
lean_dec_ref(x_897);
x_902 = lean_ctor_get(x_901, 0);
lean_inc(x_902);
x_903 = lean_ctor_get(x_901, 1);
lean_inc(x_903);
lean_dec(x_901);
x_904 = lean_ctor_get(x_7, 0);
lean_inc(x_904);
x_905 = lean_ctor_get(x_7, 1);
lean_inc(x_905);
x_906 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_906);
x_907 = lean_ctor_get(x_7, 3);
lean_inc(x_907);
x_908 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_908);
x_909 = lean_uint32_of_nat(x_902);
x_910 = lean_nat_dec_lt(x_8, x_904);
if (x_910 == 0)
{
x_729 = x_909;
x_730 = x_902;
x_731 = x_903;
x_732 = x_754;
x_733 = x_755;
x_734 = x_752;
x_735 = x_8;
x_736 = x_753;
x_737 = x_761;
x_738 = x_7;
x_739 = x_904;
x_740 = x_905;
x_741 = x_906;
x_742 = x_907;
x_743 = x_908;
goto block_751;
}
else
{
uint8_t x_911; 
x_911 = !lean_is_exclusive(x_7);
if (x_911 == 0)
{
lean_object* x_912; lean_object* x_913; lean_object* x_914; lean_object* x_915; lean_object* x_916; lean_object* x_917; lean_object* x_918; lean_object* x_919; lean_object* x_920; 
x_912 = lean_ctor_get(x_7, 4);
lean_dec(x_912);
x_913 = lean_ctor_get(x_7, 3);
lean_dec(x_913);
x_914 = lean_ctor_get(x_7, 2);
lean_dec(x_914);
x_915 = lean_ctor_get(x_7, 1);
lean_dec(x_915);
x_916 = lean_ctor_get(x_7, 0);
lean_dec(x_916);
x_917 = lean_box_uint32(x_909);
x_918 = lean_array_set(x_906, x_907, x_917);
x_919 = lean_nat_add(x_907, x_753);
lean_dec(x_907);
x_920 = lean_nat_mod(x_919, x_904);
lean_dec(x_919);
lean_inc_ref(x_908);
lean_inc(x_920);
lean_inc_ref(x_918);
lean_inc(x_905);
lean_inc(x_904);
lean_ctor_set(x_7, 3, x_920);
lean_ctor_set(x_7, 2, x_918);
x_729 = x_909;
x_730 = x_902;
x_731 = x_903;
x_732 = x_754;
x_733 = x_755;
x_734 = x_752;
x_735 = x_8;
x_736 = x_753;
x_737 = x_761;
x_738 = x_7;
x_739 = x_904;
x_740 = x_905;
x_741 = x_918;
x_742 = x_920;
x_743 = x_908;
goto block_751;
}
else
{
lean_object* x_921; lean_object* x_922; lean_object* x_923; lean_object* x_924; lean_object* x_925; 
lean_dec(x_7);
x_921 = lean_box_uint32(x_909);
x_922 = lean_array_set(x_906, x_907, x_921);
x_923 = lean_nat_add(x_907, x_753);
lean_dec(x_907);
x_924 = lean_nat_mod(x_923, x_904);
lean_dec(x_923);
lean_inc_ref(x_908);
lean_inc(x_924);
lean_inc_ref(x_922);
lean_inc(x_905);
lean_inc(x_904);
x_925 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_925, 0, x_904);
lean_ctor_set(x_925, 1, x_905);
lean_ctor_set(x_925, 2, x_922);
lean_ctor_set(x_925, 3, x_924);
lean_ctor_set(x_925, 4, x_908);
x_729 = x_909;
x_730 = x_902;
x_731 = x_903;
x_732 = x_754;
x_733 = x_755;
x_734 = x_752;
x_735 = x_8;
x_736 = x_753;
x_737 = x_761;
x_738 = x_925;
x_739 = x_904;
x_740 = x_905;
x_741 = x_922;
x_742 = x_924;
x_743 = x_908;
goto block_751;
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
lean_object* x_926; lean_object* x_927; lean_object* x_928; 
x_926 = lean_ctor_get(x_752, 1);
x_927 = lean_ctor_get(x_756, 0);
lean_inc(x_927);
lean_dec(x_756);
x_928 = lean_byte_array_size(x_1);
if (lean_obj_tag(x_927) == 0)
{
lean_object* x_929; lean_object* x_930; 
lean_inc_ref(x_926);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_929 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_929, 0, x_6);
lean_ctor_set(x_929, 1, x_7);
lean_inc_ref(x_929);
lean_inc_ref(x_5);
x_930 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_930, 0, x_5);
lean_ctor_set(x_930, 1, x_929);
x_482 = x_755;
x_483 = x_752;
x_484 = x_926;
x_485 = x_753;
x_486 = x_928;
x_487 = x_3;
x_488 = x_930;
x_489 = x_5;
x_490 = x_929;
x_491 = x_6;
x_492 = x_7;
goto block_496;
}
else
{
switch (lean_obj_tag(x_927)) {
case 0:
{
lean_object* x_931; lean_object* x_932; 
lean_inc_ref(x_926);
lean_dec(x_754);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_931 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_931, 0, x_6);
lean_ctor_set(x_931, 1, x_7);
lean_inc_ref(x_931);
lean_inc_ref(x_5);
x_932 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_932, 0, x_5);
lean_ctor_set(x_932, 1, x_931);
x_482 = x_755;
x_483 = x_752;
x_484 = x_926;
x_485 = x_753;
x_486 = x_928;
x_487 = x_3;
x_488 = x_932;
x_489 = x_5;
x_490 = x_931;
x_491 = x_6;
x_492 = x_7;
goto block_496;
}
case 1:
{
lean_object* x_933; lean_object* x_934; lean_object* x_935; lean_object* x_936; lean_object* x_937; uint8_t x_938; 
lean_inc_ref(x_926);
x_933 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_933);
x_934 = lean_ctor_get(x_5, 1);
lean_inc(x_934);
if (lean_is_exclusive(x_5)) {
 lean_ctor_release(x_5, 0);
 lean_ctor_release(x_5, 1);
 x_935 = x_5;
} else {
 lean_dec_ref(x_5);
 x_935 = lean_box(0);
}
x_936 = lean_nat_add(x_934, x_754);
lean_dec(x_754);
x_937 = lean_byte_array_size(x_933);
x_938 = lean_nat_dec_le(x_936, x_937);
if (x_938 == 0)
{
lean_object* x_939; 
lean_dec(x_936);
lean_dec(x_935);
lean_dec(x_934);
lean_dec_ref(x_933);
lean_dec_ref(x_926);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_939 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_939;
}
else
{
if (x_938 == 0)
{
lean_object* x_940; 
lean_dec(x_936);
lean_dec(x_935);
lean_dec(x_934);
lean_dec_ref(x_933);
lean_dec_ref(x_926);
lean_dec_ref(x_755);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_940 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_940;
}
else
{
lean_object* x_941; lean_object* x_942; lean_object* x_943; lean_object* x_944; lean_object* x_945; lean_object* x_946; lean_object* x_947; 
x_941 = l_ByteArray_extract(x_933, x_934, x_936);
if (lean_is_scalar(x_935)) {
 x_942 = lean_alloc_ctor(0, 2, 0);
} else {
 x_942 = x_935;
}
lean_ctor_set(x_942, 0, x_933);
lean_ctor_set(x_942, 1, x_936);
x_943 = lean_byte_array_size(x_3);
x_944 = lean_byte_array_size(x_941);
x_945 = lean_byte_array_copy_slice(x_941, x_8, x_3, x_943, x_944, x_23);
lean_dec_ref(x_941);
lean_inc_ref(x_7);
lean_inc_ref(x_6);
x_946 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_946, 0, x_6);
lean_ctor_set(x_946, 1, x_7);
lean_inc_ref(x_946);
lean_inc_ref(x_942);
x_947 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_947, 0, x_942);
lean_ctor_set(x_947, 1, x_946);
x_482 = x_755;
x_483 = x_752;
x_484 = x_926;
x_485 = x_753;
x_486 = x_928;
x_487 = x_945;
x_488 = x_947;
x_489 = x_942;
x_490 = x_946;
x_491 = x_6;
x_492 = x_7;
goto block_496;
}
}
}
case 2:
{
lean_object* x_948; lean_object* x_949; lean_object* x_950; uint8_t x_951; 
x_948 = lean_ctor_get(x_5, 0);
lean_inc_ref(x_948);
x_949 = lean_ctor_get(x_5, 1);
lean_inc(x_949);
lean_dec_ref(x_5);
x_950 = lean_byte_array_size(x_948);
x_951 = lean_nat_dec_lt(x_949, x_950);
if (x_951 == 0)
{
lean_object* x_952; 
lean_dec(x_949);
lean_dec_ref(x_948);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_3);
x_952 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_952;
}
else
{
if (x_951 == 0)
{
uint8_t x_953; lean_object* x_954; lean_object* x_955; uint8_t x_956; 
x_953 = l_instInhabitedUInt8;
x_954 = lean_box(x_953);
x_955 = l_outOfBounds___redArg(x_954);
x_956 = lean_unbox(x_955);
lean_dec(x_955);
x_509 = x_752;
x_510 = x_755;
x_511 = x_754;
x_512 = x_948;
x_513 = x_753;
x_514 = x_928;
x_515 = x_949;
x_516 = x_956;
goto block_527;
}
else
{
uint8_t x_957; 
x_957 = lean_byte_array_fget(x_948, x_949);
x_509 = x_752;
x_510 = x_755;
x_511 = x_754;
x_512 = x_948;
x_513 = x_753;
x_514 = x_928;
x_515 = x_949;
x_516 = x_957;
goto block_527;
}
}
}
default: 
{
uint8_t x_958; lean_object* x_959; uint8_t x_960; 
x_958 = lean_ctor_get_uint8(x_927, 0);
lean_dec_ref(x_927);
x_959 = lean_uint8_to_nat(x_958);
x_960 = lean_nat_dec_eq(x_959, x_8);
if (x_960 == 0)
{
uint8_t x_961; 
x_961 = lean_nat_dec_eq(x_959, x_753);
if (x_961 == 0)
{
lean_object* x_962; lean_object* x_963; lean_object* x_964; lean_object* x_965; lean_object* x_966; lean_object* x_967; lean_object* x_968; uint8_t x_969; 
x_962 = lean_ctor_get(x_7, 0);
x_963 = lean_ctor_get(x_7, 1);
x_964 = lean_ctor_get(x_7, 2);
x_965 = lean_ctor_get(x_7, 3);
x_966 = lean_ctor_get(x_7, 4);
x_967 = lean_unsigned_to_nat(2u);
x_968 = lean_nat_add(x_967, x_962);
x_969 = lean_nat_dec_lt(x_959, x_968);
if (x_969 == 0)
{
lean_object* x_970; uint8_t x_971; 
x_970 = lean_nat_add(x_968, x_963);
lean_dec(x_968);
x_971 = lean_nat_dec_lt(x_959, x_970);
lean_dec(x_970);
if (x_971 == 0)
{
lean_object* x_972; lean_object* x_973; 
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
x_972 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_972, 0, x_959);
x_973 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_973, 0, x_972);
return x_973;
}
else
{
lean_object* x_974; lean_object* x_975; lean_object* x_976; uint8_t x_977; 
x_974 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_974);
x_975 = lean_ctor_get(x_6, 1);
lean_inc(x_975);
lean_dec_ref(x_6);
x_976 = lean_byte_array_size(x_974);
x_977 = lean_nat_dec_lt(x_975, x_976);
if (x_977 == 0)
{
lean_object* x_978; 
lean_dec(x_975);
lean_dec_ref(x_974);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_978 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_978;
}
else
{
if (x_977 == 0)
{
uint8_t x_979; lean_object* x_980; lean_object* x_981; uint8_t x_982; 
x_979 = l_instInhabitedUInt8;
x_980 = lean_box(x_979);
x_981 = l_outOfBounds___redArg(x_980);
x_982 = lean_unbox(x_981);
lean_dec(x_981);
lean_inc(x_963);
lean_inc(x_962);
lean_inc(x_965);
lean_inc_ref(x_964);
lean_inc_ref(x_966);
x_612 = x_966;
x_613 = x_964;
x_614 = x_965;
x_615 = x_752;
x_616 = x_755;
x_617 = x_959;
x_618 = x_962;
x_619 = x_974;
x_620 = x_963;
x_621 = x_967;
x_622 = x_975;
x_623 = x_754;
x_624 = x_8;
x_625 = x_753;
x_626 = x_928;
x_627 = x_982;
goto block_652;
}
else
{
uint8_t x_983; 
x_983 = lean_byte_array_fget(x_974, x_975);
lean_inc(x_963);
lean_inc(x_962);
lean_inc(x_965);
lean_inc_ref(x_964);
lean_inc_ref(x_966);
x_612 = x_966;
x_613 = x_964;
x_614 = x_965;
x_615 = x_752;
x_616 = x_755;
x_617 = x_959;
x_618 = x_962;
x_619 = x_974;
x_620 = x_963;
x_621 = x_967;
x_622 = x_975;
x_623 = x_754;
x_624 = x_8;
x_625 = x_753;
x_626 = x_928;
x_627 = x_983;
goto block_652;
}
}
}
}
else
{
lean_object* x_984; lean_object* x_985; lean_object* x_986; lean_object* x_987; 
lean_inc_ref(x_966);
lean_inc(x_965);
lean_inc_ref(x_964);
lean_inc(x_963);
lean_inc(x_962);
lean_dec(x_968);
x_984 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_984);
x_985 = lean_ctor_get(x_6, 1);
lean_inc(x_985);
lean_dec_ref(x_6);
x_986 = lean_unsigned_to_nat(5u);
x_987 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_984, x_985, x_8, x_986);
if (lean_obj_tag(x_987) == 0)
{
lean_object* x_988; lean_object* x_989; lean_object* x_990; 
lean_dec_ref(x_966);
lean_dec(x_965);
lean_dec_ref(x_964);
lean_dec(x_963);
lean_dec(x_962);
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_988 = lean_ctor_get(x_987, 0);
lean_inc(x_988);
if (lean_is_exclusive(x_987)) {
 lean_ctor_release(x_987, 0);
 x_989 = x_987;
} else {
 lean_dec_ref(x_987);
 x_989 = lean_box(0);
}
if (lean_is_scalar(x_989)) {
 x_990 = lean_alloc_ctor(0, 1, 0);
} else {
 x_990 = x_989;
}
lean_ctor_set(x_990, 0, x_988);
return x_990;
}
else
{
lean_object* x_991; lean_object* x_992; lean_object* x_993; lean_object* x_994; lean_object* x_995; lean_object* x_996; uint32_t x_997; lean_object* x_998; lean_object* x_999; uint32_t x_1000; uint8_t x_1001; 
x_991 = lean_ctor_get(x_987, 0);
lean_inc(x_991);
lean_dec_ref(x_987);
x_992 = lean_ctor_get(x_991, 0);
lean_inc(x_992);
x_993 = lean_ctor_get(x_991, 1);
lean_inc(x_993);
lean_dec(x_991);
x_994 = lean_nat_sub(x_959, x_967);
x_995 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed__const__1;
x_996 = lean_array_get_borrowed(x_995, x_964, x_994);
lean_dec(x_994);
x_997 = lean_unbox_uint32(x_996);
x_998 = lean_uint32_to_nat(x_997);
x_999 = lean_nat_add(x_998, x_992);
lean_dec(x_992);
lean_dec(x_998);
x_1000 = lean_uint32_of_nat(x_999);
x_1001 = lean_nat_dec_lt(x_8, x_962);
if (x_1001 == 0)
{
x_663 = x_1000;
x_664 = x_754;
x_665 = x_755;
x_666 = x_752;
x_667 = x_8;
x_668 = x_993;
x_669 = x_999;
x_670 = x_753;
x_671 = x_928;
x_672 = x_7;
x_673 = x_962;
x_674 = x_963;
x_675 = x_964;
x_676 = x_965;
x_677 = x_966;
goto block_685;
}
else
{
lean_object* x_1002; lean_object* x_1003; lean_object* x_1004; lean_object* x_1005; lean_object* x_1006; lean_object* x_1007; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1002 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1002 = lean_box(0);
}
x_1003 = lean_box_uint32(x_1000);
x_1004 = lean_array_set(x_964, x_965, x_1003);
x_1005 = lean_nat_add(x_965, x_753);
lean_dec(x_965);
x_1006 = lean_nat_mod(x_1005, x_962);
lean_dec(x_1005);
lean_inc_ref(x_966);
lean_inc(x_1006);
lean_inc_ref(x_1004);
lean_inc(x_963);
lean_inc(x_962);
if (lean_is_scalar(x_1002)) {
 x_1007 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1007 = x_1002;
}
lean_ctor_set(x_1007, 0, x_962);
lean_ctor_set(x_1007, 1, x_963);
lean_ctor_set(x_1007, 2, x_1004);
lean_ctor_set(x_1007, 3, x_1006);
lean_ctor_set(x_1007, 4, x_966);
x_663 = x_1000;
x_664 = x_754;
x_665 = x_755;
x_666 = x_752;
x_667 = x_8;
x_668 = x_993;
x_669 = x_999;
x_670 = x_753;
x_671 = x_928;
x_672 = x_1007;
x_673 = x_962;
x_674 = x_963;
x_675 = x_1004;
x_676 = x_1006;
x_677 = x_966;
goto block_685;
}
}
}
}
else
{
lean_object* x_1008; lean_object* x_1009; lean_object* x_1010; lean_object* x_1011; 
x_1008 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1008);
x_1009 = lean_ctor_get(x_6, 1);
lean_inc(x_1009);
lean_dec_ref(x_6);
x_1010 = lean_unsigned_to_nat(5u);
x_1011 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1008, x_1009, x_8, x_1010);
if (lean_obj_tag(x_1011) == 0)
{
lean_object* x_1012; lean_object* x_1013; lean_object* x_1014; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1012 = lean_ctor_get(x_1011, 0);
lean_inc(x_1012);
if (lean_is_exclusive(x_1011)) {
 lean_ctor_release(x_1011, 0);
 x_1013 = x_1011;
} else {
 lean_dec_ref(x_1011);
 x_1013 = lean_box(0);
}
if (lean_is_scalar(x_1013)) {
 x_1014 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1014 = x_1013;
}
lean_ctor_set(x_1014, 0, x_1012);
return x_1014;
}
else
{
lean_object* x_1015; lean_object* x_1016; lean_object* x_1017; lean_object* x_1018; lean_object* x_1019; lean_object* x_1020; lean_object* x_1021; lean_object* x_1022; lean_object* x_1023; lean_object* x_1024; lean_object* x_1025; uint32_t x_1026; uint8_t x_1027; 
x_1015 = lean_ctor_get(x_1011, 0);
lean_inc(x_1015);
lean_dec_ref(x_1011);
x_1016 = lean_ctor_get(x_1015, 0);
lean_inc(x_1016);
x_1017 = lean_ctor_get(x_1015, 1);
lean_inc(x_1017);
lean_dec(x_1015);
x_1018 = lean_ctor_get(x_7, 0);
lean_inc(x_1018);
x_1019 = lean_ctor_get(x_7, 1);
lean_inc(x_1019);
x_1020 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_1020);
x_1021 = lean_ctor_get(x_7, 3);
lean_inc(x_1021);
x_1022 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_1022);
x_1023 = lean_byte_array_size(x_3);
x_1024 = lean_nat_add(x_928, x_1023);
x_1025 = lean_nat_sub(x_1024, x_1016);
lean_dec(x_1016);
lean_dec(x_1024);
x_1026 = lean_uint32_of_nat(x_1025);
x_1027 = lean_nat_dec_lt(x_8, x_1018);
if (x_1027 == 0)
{
x_696 = x_1017;
x_697 = x_1026;
x_698 = x_754;
x_699 = x_755;
x_700 = x_752;
x_701 = x_8;
x_702 = x_1025;
x_703 = x_753;
x_704 = x_928;
x_705 = x_7;
x_706 = x_1018;
x_707 = x_1019;
x_708 = x_1020;
x_709 = x_1021;
x_710 = x_1022;
goto block_718;
}
else
{
lean_object* x_1028; lean_object* x_1029; lean_object* x_1030; lean_object* x_1031; lean_object* x_1032; lean_object* x_1033; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1028 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1028 = lean_box(0);
}
x_1029 = lean_box_uint32(x_1026);
x_1030 = lean_array_set(x_1020, x_1021, x_1029);
x_1031 = lean_nat_add(x_1021, x_753);
lean_dec(x_1021);
x_1032 = lean_nat_mod(x_1031, x_1018);
lean_dec(x_1031);
lean_inc_ref(x_1022);
lean_inc(x_1032);
lean_inc_ref(x_1030);
lean_inc(x_1019);
lean_inc(x_1018);
if (lean_is_scalar(x_1028)) {
 x_1033 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1033 = x_1028;
}
lean_ctor_set(x_1033, 0, x_1018);
lean_ctor_set(x_1033, 1, x_1019);
lean_ctor_set(x_1033, 2, x_1030);
lean_ctor_set(x_1033, 3, x_1032);
lean_ctor_set(x_1033, 4, x_1022);
x_696 = x_1017;
x_697 = x_1026;
x_698 = x_754;
x_699 = x_755;
x_700 = x_752;
x_701 = x_8;
x_702 = x_1025;
x_703 = x_753;
x_704 = x_928;
x_705 = x_1033;
x_706 = x_1018;
x_707 = x_1019;
x_708 = x_1030;
x_709 = x_1032;
x_710 = x_1022;
goto block_718;
}
}
}
}
else
{
lean_object* x_1034; lean_object* x_1035; lean_object* x_1036; lean_object* x_1037; 
x_1034 = lean_ctor_get(x_6, 0);
lean_inc_ref(x_1034);
x_1035 = lean_ctor_get(x_6, 1);
lean_inc(x_1035);
lean_dec_ref(x_6);
x_1036 = lean_unsigned_to_nat(5u);
x_1037 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_1034, x_1035, x_8, x_1036);
if (lean_obj_tag(x_1037) == 0)
{
lean_object* x_1038; lean_object* x_1039; lean_object* x_1040; 
lean_dec_ref(x_755);
lean_dec(x_754);
lean_dec(x_753);
lean_dec_ref(x_752);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1038 = lean_ctor_get(x_1037, 0);
lean_inc(x_1038);
if (lean_is_exclusive(x_1037)) {
 lean_ctor_release(x_1037, 0);
 x_1039 = x_1037;
} else {
 lean_dec_ref(x_1037);
 x_1039 = lean_box(0);
}
if (lean_is_scalar(x_1039)) {
 x_1040 = lean_alloc_ctor(0, 1, 0);
} else {
 x_1040 = x_1039;
}
lean_ctor_set(x_1040, 0, x_1038);
return x_1040;
}
else
{
lean_object* x_1041; lean_object* x_1042; lean_object* x_1043; lean_object* x_1044; lean_object* x_1045; lean_object* x_1046; lean_object* x_1047; lean_object* x_1048; uint32_t x_1049; uint8_t x_1050; 
x_1041 = lean_ctor_get(x_1037, 0);
lean_inc(x_1041);
lean_dec_ref(x_1037);
x_1042 = lean_ctor_get(x_1041, 0);
lean_inc(x_1042);
x_1043 = lean_ctor_get(x_1041, 1);
lean_inc(x_1043);
lean_dec(x_1041);
x_1044 = lean_ctor_get(x_7, 0);
lean_inc(x_1044);
x_1045 = lean_ctor_get(x_7, 1);
lean_inc(x_1045);
x_1046 = lean_ctor_get(x_7, 2);
lean_inc_ref(x_1046);
x_1047 = lean_ctor_get(x_7, 3);
lean_inc(x_1047);
x_1048 = lean_ctor_get(x_7, 4);
lean_inc_ref(x_1048);
x_1049 = lean_uint32_of_nat(x_1042);
x_1050 = lean_nat_dec_lt(x_8, x_1044);
if (x_1050 == 0)
{
x_729 = x_1049;
x_730 = x_1042;
x_731 = x_1043;
x_732 = x_754;
x_733 = x_755;
x_734 = x_752;
x_735 = x_8;
x_736 = x_753;
x_737 = x_928;
x_738 = x_7;
x_739 = x_1044;
x_740 = x_1045;
x_741 = x_1046;
x_742 = x_1047;
x_743 = x_1048;
goto block_751;
}
else
{
lean_object* x_1051; lean_object* x_1052; lean_object* x_1053; lean_object* x_1054; lean_object* x_1055; lean_object* x_1056; 
if (lean_is_exclusive(x_7)) {
 lean_ctor_release(x_7, 0);
 lean_ctor_release(x_7, 1);
 lean_ctor_release(x_7, 2);
 lean_ctor_release(x_7, 3);
 lean_ctor_release(x_7, 4);
 x_1051 = x_7;
} else {
 lean_dec_ref(x_7);
 x_1051 = lean_box(0);
}
x_1052 = lean_box_uint32(x_1049);
x_1053 = lean_array_set(x_1046, x_1047, x_1052);
x_1054 = lean_nat_add(x_1047, x_753);
lean_dec(x_1047);
x_1055 = lean_nat_mod(x_1054, x_1044);
lean_dec(x_1054);
lean_inc_ref(x_1048);
lean_inc(x_1055);
lean_inc_ref(x_1053);
lean_inc(x_1045);
lean_inc(x_1044);
if (lean_is_scalar(x_1051)) {
 x_1056 = lean_alloc_ctor(0, 5, 0);
} else {
 x_1056 = x_1051;
}
lean_ctor_set(x_1056, 0, x_1044);
lean_ctor_set(x_1056, 1, x_1045);
lean_ctor_set(x_1056, 2, x_1053);
lean_ctor_set(x_1056, 3, x_1055);
lean_ctor_set(x_1056, 4, x_1048);
x_729 = x_1049;
x_730 = x_1042;
x_731 = x_1043;
x_732 = x_754;
x_733 = x_755;
x_734 = x_752;
x_735 = x_8;
x_736 = x_753;
x_737 = x_928;
x_738 = x_1056;
x_739 = x_1044;
x_740 = x_1045;
x_741 = x_1053;
x_742 = x_1055;
x_743 = x_1048;
goto block_751;
}
}
}
}
}
}
}
}
block_1072:
{
if (x_1063 == 0)
{
lean_dec(x_1059);
lean_dec_ref(x_20);
x_752 = x_1060;
x_753 = x_1062;
x_754 = x_1061;
x_755 = x_1058;
goto block_1057;
}
else
{
lean_object* x_1064; lean_object* x_1065; 
lean_dec(x_1061);
lean_dec_ref(x_1058);
x_1064 = lean_unsigned_to_nat(5u);
x_1065 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_20, x_1059, x_8, x_1064);
if (lean_obj_tag(x_1065) == 0)
{
uint8_t x_1066; 
lean_dec(x_1062);
lean_dec_ref(x_1060);
lean_dec(x_28);
lean_dec(x_24);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_3);
x_1066 = !lean_is_exclusive(x_1065);
if (x_1066 == 0)
{
return x_1065;
}
else
{
lean_object* x_1067; lean_object* x_1068; 
x_1067 = lean_ctor_get(x_1065, 0);
lean_inc(x_1067);
lean_dec(x_1065);
x_1068 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_1068, 0, x_1067);
return x_1068;
}
}
else
{
lean_object* x_1069; lean_object* x_1070; lean_object* x_1071; 
x_1069 = lean_ctor_get(x_1065, 0);
lean_inc(x_1069);
lean_dec_ref(x_1065);
x_1070 = lean_ctor_get(x_1069, 0);
lean_inc(x_1070);
x_1071 = lean_ctor_get(x_1069, 1);
lean_inc(x_1071);
lean_dec(x_1069);
x_752 = x_1060;
x_753 = x_1062;
x_754 = x_1070;
x_755 = x_1071;
goto block_1057;
}
}
}
block_1089:
{
lean_object* x_1074; lean_object* x_1075; lean_object* x_1076; lean_object* x_1077; lean_object* x_1078; uint8_t x_1079; 
x_1074 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instInhabitedCodeTableEntry_default;
x_1075 = lp_lean_x2dbdiff___private_LeanBdiff_Vcdiff_CodeTable_0__LeanBdiff_Vcdiff_CodeTable_buildDefaultTable;
x_1076 = lean_uint8_to_nat(x_1073);
x_1077 = lean_array_get(x_1074, x_1075, x_1076);
x_1078 = lean_ctor_get(x_1077, 0);
lean_inc_ref(x_1078);
x_1079 = !lean_is_exclusive(x_1078);
if (x_1079 == 0)
{
lean_object* x_1080; lean_object* x_1081; lean_object* x_1082; uint8_t x_1083; 
x_1080 = lean_ctor_get(x_1078, 0);
x_1081 = lean_ctor_get(x_1078, 1);
x_1082 = lean_nat_add(x_21, x_27);
lean_dec(x_21);
lean_inc(x_1082);
lean_inc_ref(x_20);
lean_ctor_set(x_1078, 1, x_1082);
lean_ctor_set(x_1078, 0, x_20);
x_1083 = lean_nat_dec_eq(x_1081, x_8);
if (x_1083 == 0)
{
lean_dec(x_1080);
x_1058 = x_1078;
x_1059 = x_1082;
x_1060 = x_1077;
x_1061 = x_1081;
x_1062 = x_27;
x_1063 = x_1083;
goto block_1072;
}
else
{
if (lean_obj_tag(x_1080) == 0)
{
if (x_1083 == 0)
{
x_1058 = x_1078;
x_1059 = x_1082;
x_1060 = x_1077;
x_1061 = x_1081;
x_1062 = x_27;
x_1063 = x_1083;
goto block_1072;
}
else
{
lean_dec(x_1082);
lean_dec_ref(x_20);
x_752 = x_1077;
x_753 = x_27;
x_754 = x_1081;
x_755 = x_1078;
goto block_1057;
}
}
else
{
lean_dec(x_1080);
x_1058 = x_1078;
x_1059 = x_1082;
x_1060 = x_1077;
x_1061 = x_1081;
x_1062 = x_27;
x_1063 = x_1083;
goto block_1072;
}
}
}
else
{
lean_object* x_1084; lean_object* x_1085; lean_object* x_1086; lean_object* x_1087; uint8_t x_1088; 
x_1084 = lean_ctor_get(x_1078, 0);
x_1085 = lean_ctor_get(x_1078, 1);
lean_inc(x_1085);
lean_inc(x_1084);
lean_dec(x_1078);
x_1086 = lean_nat_add(x_21, x_27);
lean_dec(x_21);
lean_inc(x_1086);
lean_inc_ref(x_20);
x_1087 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1087, 0, x_20);
lean_ctor_set(x_1087, 1, x_1086);
x_1088 = lean_nat_dec_eq(x_1085, x_8);
if (x_1088 == 0)
{
lean_dec(x_1084);
x_1058 = x_1087;
x_1059 = x_1086;
x_1060 = x_1077;
x_1061 = x_1085;
x_1062 = x_27;
x_1063 = x_1088;
goto block_1072;
}
else
{
if (lean_obj_tag(x_1084) == 0)
{
if (x_1088 == 0)
{
x_1058 = x_1087;
x_1059 = x_1086;
x_1060 = x_1077;
x_1061 = x_1085;
x_1062 = x_27;
x_1063 = x_1088;
goto block_1072;
}
else
{
lean_dec(x_1086);
lean_dec_ref(x_20);
x_752 = x_1077;
x_753 = x_27;
x_754 = x_1085;
x_755 = x_1087;
goto block_1057;
}
}
else
{
lean_dec(x_1084);
x_1058 = x_1087;
x_1059 = x_1086;
x_1060 = x_1077;
x_1061 = x_1085;
x_1062 = x_27;
x_1063 = x_1088;
goto block_1072;
}
}
}
}
}
}
else
{
lean_object* x_1095; lean_object* x_1096; lean_object* x_1097; lean_object* x_1098; lean_object* x_1099; 
lean_dec(x_2);
x_1095 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1095, 0, x_6);
lean_ctor_set(x_1095, 1, x_7);
x_1096 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1096, 0, x_5);
lean_ctor_set(x_1096, 1, x_1095);
x_1097 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1097, 0, x_4);
lean_ctor_set(x_1097, 1, x_1096);
x_1098 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_1098, 0, x_3);
lean_ctor_set(x_1098, 1, x_1097);
x_1099 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_1099, 0, x_1098);
return x_1099;
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
