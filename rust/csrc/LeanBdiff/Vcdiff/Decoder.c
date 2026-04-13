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
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "secondary compression"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__2_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__3_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "custom code table"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 2}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__5_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__6_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7_value;
uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_hasBytes(lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(lean_object*, lean_object*);
extern lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_magic;
uint8_t l_ByteArray_instBEq_beq(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
uint8_t lean_uint8_land(uint8_t, uint8_t);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(lean_object*);
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_ByteArray_extract(lean_object*, lean_object*, lean_object*);
lean_object* lean_byte_array_copy_slice(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0_value;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0_value;
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_CodeTable_lookup(uint8_t);
uint8_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_applyWindowLoop___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* x_2; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec_ref(x_2);
x_3 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_3;
}
else
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; 
x_4 = lean_ctor_get(x_2, 0);
lean_inc(x_4);
lean_dec_ref(x_2);
x_5 = lean_ctor_get(x_4, 0);
lean_inc(x_5);
x_6 = lean_ctor_get(x_4, 1);
lean_inc(x_6);
lean_dec(x_4);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_6);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_8; 
lean_dec_ref(x_7);
lean_dec(x_5);
x_8 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_9 = lean_ctor_get(x_7, 0);
lean_inc(x_9);
lean_dec_ref(x_7);
x_10 = lean_ctor_get(x_9, 0);
lean_inc(x_10);
x_11 = lean_ctor_get(x_9, 1);
lean_inc(x_11);
lean_dec(x_9);
x_12 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_11);
if (lean_obj_tag(x_12) == 0)
{
lean_object* x_13; 
lean_dec_ref(x_12);
lean_dec(x_10);
lean_dec(x_5);
x_13 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_13;
}
else
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_14 = lean_ctor_get(x_12, 0);
lean_inc(x_14);
lean_dec_ref(x_12);
x_15 = lean_ctor_get(x_14, 0);
lean_inc(x_15);
x_16 = lean_ctor_get(x_14, 1);
lean_inc(x_16);
lean_dec(x_14);
x_17 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_16);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec_ref(x_17);
lean_dec(x_15);
lean_dec(x_10);
lean_dec(x_5);
x_18 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE___closed__0));
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; uint8_t x_23; uint32_t x_24; uint32_t x_25; uint32_t x_26; uint8_t x_27; uint32_t x_28; uint32_t x_29; uint32_t x_30; uint32_t x_31; uint8_t x_32; uint32_t x_33; uint32_t x_34; uint32_t x_35; uint32_t x_36; uint8_t x_37; uint32_t x_38; uint32_t x_39; lean_object* x_40; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_unbox(x_5);
lean_dec(x_5);
x_24 = lean_uint8_to_uint32(x_23);
x_25 = 24;
x_26 = lean_uint32_shift_left(x_24, x_25);
x_27 = lean_unbox(x_10);
lean_dec(x_10);
x_28 = lean_uint8_to_uint32(x_27);
x_29 = 16;
x_30 = lean_uint32_shift_left(x_28, x_29);
x_31 = lean_uint32_lor(x_26, x_30);
x_32 = lean_unbox(x_15);
lean_dec(x_15);
x_33 = lean_uint8_to_uint32(x_32);
x_34 = 8;
x_35 = lean_uint32_shift_left(x_33, x_34);
x_36 = lean_uint32_lor(x_31, x_35);
x_37 = lean_unbox(x_22);
lean_dec(x_22);
x_38 = lean_uint8_to_uint32(x_37);
x_39 = lean_uint32_lor(x_36, x_38);
x_40 = lean_box_uint32(x_39);
lean_ctor_set(x_20, 0, x_40);
return x_17;
}
else
{
lean_object* x_41; lean_object* x_42; uint8_t x_43; uint32_t x_44; uint32_t x_45; uint32_t x_46; uint8_t x_47; uint32_t x_48; uint32_t x_49; uint32_t x_50; uint32_t x_51; uint8_t x_52; uint32_t x_53; uint32_t x_54; uint32_t x_55; uint32_t x_56; uint8_t x_57; uint32_t x_58; uint32_t x_59; lean_object* x_60; lean_object* x_61; 
x_41 = lean_ctor_get(x_20, 0);
x_42 = lean_ctor_get(x_20, 1);
lean_inc(x_42);
lean_inc(x_41);
lean_dec(x_20);
x_43 = lean_unbox(x_5);
lean_dec(x_5);
x_44 = lean_uint8_to_uint32(x_43);
x_45 = 24;
x_46 = lean_uint32_shift_left(x_44, x_45);
x_47 = lean_unbox(x_10);
lean_dec(x_10);
x_48 = lean_uint8_to_uint32(x_47);
x_49 = 16;
x_50 = lean_uint32_shift_left(x_48, x_49);
x_51 = lean_uint32_lor(x_46, x_50);
x_52 = lean_unbox(x_15);
lean_dec(x_15);
x_53 = lean_uint8_to_uint32(x_52);
x_54 = 8;
x_55 = lean_uint32_shift_left(x_53, x_54);
x_56 = lean_uint32_lor(x_51, x_55);
x_57 = lean_unbox(x_41);
lean_dec(x_41);
x_58 = lean_uint8_to_uint32(x_57);
x_59 = lean_uint32_lor(x_56, x_58);
x_60 = lean_box_uint32(x_59);
x_61 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_61, 0, x_60);
lean_ctor_set(x_61, 1, x_42);
lean_ctor_set(x_17, 0, x_61);
return x_17;
}
}
else
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; uint8_t x_66; uint32_t x_67; uint32_t x_68; uint32_t x_69; uint8_t x_70; uint32_t x_71; uint32_t x_72; uint32_t x_73; uint32_t x_74; uint8_t x_75; uint32_t x_76; uint32_t x_77; uint32_t x_78; uint32_t x_79; uint8_t x_80; uint32_t x_81; uint32_t x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; 
x_62 = lean_ctor_get(x_17, 0);
lean_inc(x_62);
lean_dec(x_17);
x_63 = lean_ctor_get(x_62, 0);
lean_inc(x_63);
x_64 = lean_ctor_get(x_62, 1);
lean_inc(x_64);
if (lean_is_exclusive(x_62)) {
 lean_ctor_release(x_62, 0);
 lean_ctor_release(x_62, 1);
 x_65 = x_62;
} else {
 lean_dec_ref(x_62);
 x_65 = lean_box(0);
}
x_66 = lean_unbox(x_5);
lean_dec(x_5);
x_67 = lean_uint8_to_uint32(x_66);
x_68 = 24;
x_69 = lean_uint32_shift_left(x_67, x_68);
x_70 = lean_unbox(x_10);
lean_dec(x_10);
x_71 = lean_uint8_to_uint32(x_70);
x_72 = 16;
x_73 = lean_uint32_shift_left(x_71, x_72);
x_74 = lean_uint32_lor(x_69, x_73);
x_75 = lean_unbox(x_15);
lean_dec(x_15);
x_76 = lean_uint8_to_uint32(x_75);
x_77 = 8;
x_78 = lean_uint32_shift_left(x_76, x_77);
x_79 = lean_uint32_lor(x_74, x_78);
x_80 = lean_unbox(x_63);
lean_dec(x_63);
x_81 = lean_uint8_to_uint32(x_80);
x_82 = lean_uint32_lor(x_79, x_81);
x_83 = lean_box_uint32(x_82);
if (lean_is_scalar(x_65)) {
 x_84 = lean_alloc_ctor(0, 2, 0);
} else {
 x_84 = x_65;
}
lean_ctor_set(x_84, 0, x_83);
lean_ctor_set(x_84, 1, x_64);
x_85 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_85, 0, x_84);
return x_85;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader(lean_object* x_1) {
_start:
{
lean_object* x_2; uint8_t x_3; 
x_2 = lean_unsigned_to_nat(5u);
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_hasBytes(x_1, x_2);
if (x_3 == 0)
{
lean_object* x_4; 
lean_dec_ref(x_1);
x_4 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0));
return x_4;
}
else
{
lean_object* x_5; lean_object* x_6; 
x_5 = lean_unsigned_to_nat(3u);
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_1, x_5);
if (lean_obj_tag(x_6) == 0)
{
lean_object* x_7; 
lean_dec_ref(x_6);
x_7 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0));
return x_7;
}
else
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; uint8_t x_12; 
x_8 = lean_ctor_get(x_6, 0);
lean_inc(x_8);
lean_dec_ref(x_6);
x_9 = lean_ctor_get(x_8, 0);
lean_inc(x_9);
x_10 = lean_ctor_get(x_8, 1);
lean_inc(x_10);
lean_dec(x_8);
x_11 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_magic;
x_12 = l_ByteArray_instBEq_beq(x_9, x_11);
if (x_12 == 0)
{
lean_object* x_13; 
lean_dec(x_10);
x_13 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__1));
return x_13;
}
else
{
lean_object* x_14; 
x_14 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_10);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec_ref(x_14);
x_15 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0));
return x_15;
}
else
{
uint8_t x_16; 
x_16 = !lean_is_exclusive(x_14);
if (x_16 == 0)
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; uint8_t x_21; uint8_t x_22; 
x_17 = lean_ctor_get(x_14, 0);
x_18 = lean_ctor_get(x_17, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_17, 1);
lean_inc(x_19);
lean_dec(x_17);
x_20 = 0;
x_21 = lean_unbox(x_18);
x_22 = lean_uint8_dec_eq(x_21, x_20);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
lean_dec(x_19);
x_23 = lean_alloc_ctor(1, 0, 1);
x_24 = lean_unbox(x_18);
lean_dec(x_18);
lean_ctor_set_uint8(x_23, 0, x_24);
lean_ctor_set_tag(x_14, 0);
lean_ctor_set(x_14, 0, x_23);
return x_14;
}
else
{
lean_object* x_25; 
lean_dec(x_18);
x_25 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_19);
if (lean_obj_tag(x_25) == 0)
{
lean_object* x_26; 
lean_dec_ref(x_25);
lean_free_object(x_14);
x_26 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0));
return x_26;
}
else
{
lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint8_t x_39; uint8_t x_40; uint8_t x_41; uint8_t x_42; 
x_27 = lean_ctor_get(x_25, 0);
lean_inc(x_27);
if (lean_is_exclusive(x_25)) {
 lean_ctor_release(x_25, 0);
 x_28 = x_25;
} else {
 lean_dec_ref(x_25);
 x_28 = lean_box(0);
}
x_29 = lean_ctor_get(x_27, 0);
lean_inc(x_29);
x_30 = lean_ctor_get(x_27, 1);
lean_inc(x_30);
if (lean_is_exclusive(x_27)) {
 lean_ctor_release(x_27, 0);
 lean_ctor_release(x_27, 1);
 x_31 = x_27;
} else {
 lean_dec_ref(x_27);
 x_31 = lean_box(0);
}
x_39 = 248;
x_40 = lean_unbox(x_29);
x_41 = lean_uint8_land(x_40, x_39);
x_42 = lean_uint8_dec_eq(x_41, x_20);
if (x_42 == 0)
{
lean_object* x_43; uint8_t x_44; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_28);
x_43 = lean_alloc_ctor(3, 0, 1);
x_44 = lean_unbox(x_29);
lean_dec(x_29);
lean_ctor_set_uint8(x_43, 0, x_44);
lean_ctor_set_tag(x_14, 0);
lean_ctor_set(x_14, 0, x_43);
return x_14;
}
else
{
uint8_t x_45; uint8_t x_46; uint8_t x_47; uint8_t x_48; 
lean_free_object(x_14);
x_45 = 1;
x_46 = lean_unbox(x_29);
x_47 = lean_uint8_land(x_46, x_45);
x_48 = lean_uint8_dec_eq(x_47, x_20);
if (x_48 == 0)
{
lean_object* x_49; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
x_49 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4));
return x_49;
}
else
{
uint8_t x_50; uint8_t x_51; uint8_t x_52; uint8_t x_53; 
x_50 = 2;
x_51 = lean_unbox(x_29);
x_52 = lean_uint8_land(x_51, x_50);
x_53 = lean_uint8_dec_eq(x_52, x_20);
if (x_53 == 0)
{
lean_object* x_54; 
lean_dec(x_31);
lean_dec(x_30);
lean_dec(x_29);
lean_dec(x_28);
x_54 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7));
return x_54;
}
else
{
uint8_t x_55; uint8_t x_56; uint8_t x_57; uint8_t x_58; 
x_55 = 4;
x_56 = lean_unbox(x_29);
x_57 = lean_uint8_land(x_56, x_55);
x_58 = lean_uint8_dec_eq(x_57, x_20);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_30);
if (lean_obj_tag(x_59) == 0)
{
uint8_t x_60; 
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_28);
x_60 = !lean_is_exclusive(x_59);
if (x_60 == 0)
{
return x_59;
}
else
{
lean_object* x_61; lean_object* x_62; 
x_61 = lean_ctor_get(x_59, 0);
lean_inc(x_61);
lean_dec(x_59);
x_62 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_62, 0, x_61);
return x_62;
}
}
else
{
lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; 
x_63 = lean_ctor_get(x_59, 0);
lean_inc(x_63);
lean_dec_ref(x_59);
x_64 = lean_ctor_get(x_63, 0);
lean_inc(x_64);
x_65 = lean_ctor_get(x_63, 1);
lean_inc(x_65);
lean_dec(x_63);
x_66 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_65, x_64);
lean_dec(x_64);
if (lean_obj_tag(x_66) == 0)
{
lean_object* x_67; 
lean_dec_ref(x_66);
lean_dec(x_31);
lean_dec(x_29);
lean_dec(x_28);
x_67 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0));
return x_67;
}
else
{
uint8_t x_68; 
x_68 = !lean_is_exclusive(x_66);
if (x_68 == 0)
{
lean_object* x_69; lean_object* x_70; lean_object* x_71; 
x_69 = lean_ctor_get(x_66, 0);
x_70 = lean_ctor_get(x_69, 0);
lean_inc(x_70);
x_71 = lean_ctor_get(x_69, 1);
lean_inc(x_71);
lean_dec(x_69);
lean_ctor_set(x_66, 0, x_70);
x_32 = x_66;
x_33 = x_71;
goto block_38;
}
else
{
lean_object* x_72; lean_object* x_73; lean_object* x_74; lean_object* x_75; 
x_72 = lean_ctor_get(x_66, 0);
lean_inc(x_72);
lean_dec(x_66);
x_73 = lean_ctor_get(x_72, 0);
lean_inc(x_73);
x_74 = lean_ctor_get(x_72, 1);
lean_inc(x_74);
lean_dec(x_72);
x_75 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_75, 0, x_73);
x_32 = x_75;
x_33 = x_74;
goto block_38;
}
}
}
}
else
{
lean_object* x_76; 
x_76 = lean_box(0);
x_32 = x_76;
x_33 = x_30;
goto block_38;
}
}
}
}
block_38:
{
lean_object* x_34; uint8_t x_35; lean_object* x_36; lean_object* x_37; 
x_34 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_34, 0, x_32);
x_35 = lean_unbox(x_29);
lean_dec(x_29);
lean_ctor_set_uint8(x_34, sizeof(void*)*1, x_35);
if (lean_is_scalar(x_31)) {
 x_36 = lean_alloc_ctor(0, 2, 0);
} else {
 x_36 = x_31;
}
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_33);
if (lean_is_scalar(x_28)) {
 x_37 = lean_alloc_ctor(1, 1, 0);
} else {
 x_37 = x_28;
}
lean_ctor_set(x_37, 0, x_36);
return x_37;
}
}
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; uint8_t x_80; uint8_t x_81; uint8_t x_82; 
x_77 = lean_ctor_get(x_14, 0);
lean_inc(x_77);
lean_dec(x_14);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
lean_dec(x_77);
x_80 = 0;
x_81 = lean_unbox(x_78);
x_82 = lean_uint8_dec_eq(x_81, x_80);
if (x_82 == 0)
{
lean_object* x_83; uint8_t x_84; lean_object* x_85; 
lean_dec(x_79);
x_83 = lean_alloc_ctor(1, 0, 1);
x_84 = lean_unbox(x_78);
lean_dec(x_78);
lean_ctor_set_uint8(x_83, 0, x_84);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_83);
return x_85;
}
else
{
lean_object* x_86; 
lean_dec(x_78);
x_86 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_79);
if (lean_obj_tag(x_86) == 0)
{
lean_object* x_87; 
lean_dec_ref(x_86);
x_87 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0));
return x_87;
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; uint8_t x_100; uint8_t x_101; uint8_t x_102; uint8_t x_103; 
x_88 = lean_ctor_get(x_86, 0);
lean_inc(x_88);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 x_89 = x_86;
} else {
 lean_dec_ref(x_86);
 x_89 = lean_box(0);
}
x_90 = lean_ctor_get(x_88, 0);
lean_inc(x_90);
x_91 = lean_ctor_get(x_88, 1);
lean_inc(x_91);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_92 = x_88;
} else {
 lean_dec_ref(x_88);
 x_92 = lean_box(0);
}
x_100 = 248;
x_101 = lean_unbox(x_90);
x_102 = lean_uint8_land(x_101, x_100);
x_103 = lean_uint8_dec_eq(x_102, x_80);
if (x_103 == 0)
{
lean_object* x_104; uint8_t x_105; lean_object* x_106; 
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_89);
x_104 = lean_alloc_ctor(3, 0, 1);
x_105 = lean_unbox(x_90);
lean_dec(x_90);
lean_ctor_set_uint8(x_104, 0, x_105);
x_106 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_106, 0, x_104);
return x_106;
}
else
{
uint8_t x_107; uint8_t x_108; uint8_t x_109; uint8_t x_110; 
x_107 = 1;
x_108 = lean_unbox(x_90);
x_109 = lean_uint8_land(x_108, x_107);
x_110 = lean_uint8_dec_eq(x_109, x_80);
if (x_110 == 0)
{
lean_object* x_111; 
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
x_111 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__4));
return x_111;
}
else
{
uint8_t x_112; uint8_t x_113; uint8_t x_114; uint8_t x_115; 
x_112 = 2;
x_113 = lean_unbox(x_90);
x_114 = lean_uint8_land(x_113, x_112);
x_115 = lean_uint8_dec_eq(x_114, x_80);
if (x_115 == 0)
{
lean_object* x_116; 
lean_dec(x_92);
lean_dec(x_91);
lean_dec(x_90);
lean_dec(x_89);
x_116 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__7));
return x_116;
}
else
{
uint8_t x_117; uint8_t x_118; uint8_t x_119; uint8_t x_120; 
x_117 = 4;
x_118 = lean_unbox(x_90);
x_119 = lean_uint8_land(x_118, x_117);
x_120 = lean_uint8_dec_eq(x_119, x_80);
if (x_120 == 0)
{
lean_object* x_121; 
x_121 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_91);
if (lean_obj_tag(x_121) == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; 
lean_dec(x_92);
lean_dec(x_90);
lean_dec(x_89);
x_122 = lean_ctor_get(x_121, 0);
lean_inc(x_122);
if (lean_is_exclusive(x_121)) {
 lean_ctor_release(x_121, 0);
 x_123 = x_121;
} else {
 lean_dec_ref(x_121);
 x_123 = lean_box(0);
}
if (lean_is_scalar(x_123)) {
 x_124 = lean_alloc_ctor(0, 1, 0);
} else {
 x_124 = x_123;
}
lean_ctor_set(x_124, 0, x_122);
return x_124;
}
else
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; 
x_125 = lean_ctor_get(x_121, 0);
lean_inc(x_125);
lean_dec_ref(x_121);
x_126 = lean_ctor_get(x_125, 0);
lean_inc(x_126);
x_127 = lean_ctor_get(x_125, 1);
lean_inc(x_127);
lean_dec(x_125);
x_128 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_127, x_126);
lean_dec(x_126);
if (lean_obj_tag(x_128) == 0)
{
lean_object* x_129; 
lean_dec_ref(x_128);
lean_dec(x_92);
lean_dec(x_90);
lean_dec(x_89);
x_129 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseHeader___closed__0));
return x_129;
}
else
{
lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
x_130 = lean_ctor_get(x_128, 0);
lean_inc(x_130);
if (lean_is_exclusive(x_128)) {
 lean_ctor_release(x_128, 0);
 x_131 = x_128;
} else {
 lean_dec_ref(x_128);
 x_131 = lean_box(0);
}
x_132 = lean_ctor_get(x_130, 0);
lean_inc(x_132);
x_133 = lean_ctor_get(x_130, 1);
lean_inc(x_133);
lean_dec(x_130);
if (lean_is_scalar(x_131)) {
 x_134 = lean_alloc_ctor(1, 1, 0);
} else {
 x_134 = x_131;
}
lean_ctor_set(x_134, 0, x_132);
x_93 = x_134;
x_94 = x_133;
goto block_99;
}
}
}
else
{
lean_object* x_135; 
x_135 = lean_box(0);
x_93 = x_135;
x_94 = x_91;
goto block_99;
}
}
}
}
block_99:
{
lean_object* x_95; uint8_t x_96; lean_object* x_97; lean_object* x_98; 
x_95 = lean_alloc_ctor(0, 1, 1);
lean_ctor_set(x_95, 0, x_93);
x_96 = lean_unbox(x_90);
lean_dec(x_90);
lean_ctor_set_uint8(x_95, sizeof(void*)*1, x_96);
if (lean_is_scalar(x_92)) {
 x_97 = lean_alloc_ctor(0, 2, 0);
} else {
 x_97 = x_92;
}
lean_ctor_set(x_97, 0, x_95);
lean_ctor_set(x_97, 1, x_94);
if (lean_is_scalar(x_89)) {
 x_98 = lean_alloc_ctor(1, 1, 0);
} else {
 x_98 = x_89;
}
lean_ctor_set(x_98, 0, x_97);
return x_98;
}
}
}
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
lean_object* x_2; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_1);
if (lean_obj_tag(x_2) == 0)
{
lean_object* x_3; 
lean_dec_ref(x_2);
x_3 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_3;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_2);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_48; lean_object* x_49; lean_object* x_50; uint8_t x_168; uint8_t x_169; uint8_t x_170; uint8_t x_171; uint8_t x_172; 
x_5 = lean_ctor_get(x_2, 0);
x_6 = lean_ctor_get(x_5, 0);
lean_inc(x_6);
x_7 = lean_ctor_get(x_5, 1);
lean_inc(x_7);
lean_dec(x_5);
x_168 = 248;
x_169 = lean_unbox(x_6);
x_170 = lean_uint8_land(x_169, x_168);
x_171 = 0;
x_172 = lean_uint8_dec_eq(x_170, x_171);
if (x_172 == 0)
{
lean_object* x_173; uint8_t x_174; 
lean_dec(x_7);
x_173 = lean_alloc_ctor(4, 0, 1);
x_174 = lean_unbox(x_6);
lean_dec(x_6);
lean_ctor_set_uint8(x_173, 0, x_174);
lean_ctor_set_tag(x_2, 0);
lean_ctor_set(x_2, 0, x_173);
return x_2;
}
else
{
uint8_t x_175; uint8_t x_176; uint8_t x_177; uint8_t x_178; 
lean_free_object(x_2);
x_175 = 2;
x_176 = lean_unbox(x_6);
x_177 = lean_uint8_land(x_176, x_175);
x_178 = lean_uint8_dec_eq(x_177, x_171);
if (x_178 == 0)
{
lean_object* x_179; 
lean_dec(x_7);
lean_dec(x_6);
x_179 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__8));
return x_179;
}
else
{
uint8_t x_180; uint8_t x_181; uint8_t x_182; uint8_t x_183; 
x_180 = 1;
x_181 = lean_unbox(x_6);
x_182 = lean_uint8_land(x_181, x_180);
x_183 = lean_uint8_dec_eq(x_182, x_171);
if (x_183 == 0)
{
lean_object* x_184; 
x_184 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_7);
if (lean_obj_tag(x_184) == 0)
{
uint8_t x_185; 
lean_dec(x_6);
x_185 = !lean_is_exclusive(x_184);
if (x_185 == 0)
{
return x_184;
}
else
{
lean_object* x_186; lean_object* x_187; 
x_186 = lean_ctor_get(x_184, 0);
lean_inc(x_186);
lean_dec(x_184);
x_187 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_187, 0, x_186);
return x_187;
}
}
else
{
lean_object* x_188; lean_object* x_189; lean_object* x_190; lean_object* x_191; 
x_188 = lean_ctor_get(x_184, 0);
lean_inc(x_188);
lean_dec_ref(x_184);
x_189 = lean_ctor_get(x_188, 0);
lean_inc(x_189);
x_190 = lean_ctor_get(x_188, 1);
lean_inc(x_190);
lean_dec(x_188);
x_191 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_190);
if (lean_obj_tag(x_191) == 0)
{
uint8_t x_192; 
lean_dec(x_189);
lean_dec(x_6);
x_192 = !lean_is_exclusive(x_191);
if (x_192 == 0)
{
return x_191;
}
else
{
lean_object* x_193; lean_object* x_194; 
x_193 = lean_ctor_get(x_191, 0);
lean_inc(x_193);
lean_dec(x_191);
x_194 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_194, 0, x_193);
return x_194;
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; 
x_195 = lean_ctor_get(x_191, 0);
lean_inc(x_195);
lean_dec_ref(x_191);
x_196 = lean_ctor_get(x_195, 0);
lean_inc(x_196);
x_197 = lean_ctor_get(x_195, 1);
lean_inc(x_197);
lean_dec(x_195);
x_48 = x_189;
x_49 = x_196;
x_50 = x_197;
goto block_167;
}
}
}
else
{
lean_object* x_198; 
x_198 = lean_unsigned_to_nat(0u);
x_48 = x_198;
x_49 = x_198;
x_50 = x_7;
goto block_167;
}
}
}
block_47:
{
lean_object* x_16; 
x_16 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_15, x_12);
lean_dec(x_12);
if (lean_obj_tag(x_16) == 0)
{
lean_object* x_17; 
lean_dec_ref(x_16);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_17 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_17;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_18 = lean_ctor_get(x_16, 0);
lean_inc(x_18);
lean_dec_ref(x_16);
x_19 = lean_ctor_get(x_18, 0);
lean_inc(x_19);
x_20 = lean_ctor_get(x_18, 1);
lean_inc(x_20);
lean_dec(x_18);
x_21 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_20, x_11);
lean_dec(x_11);
if (lean_obj_tag(x_21) == 0)
{
lean_object* x_22; 
lean_dec_ref(x_21);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_13);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_22 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_22;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
x_23 = lean_ctor_get(x_21, 0);
lean_inc(x_23);
lean_dec_ref(x_21);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
lean_dec(x_23);
x_26 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_25, x_13);
lean_dec(x_13);
if (lean_obj_tag(x_26) == 0)
{
lean_object* x_27; 
lean_dec_ref(x_26);
lean_dec(x_24);
lean_dec(x_19);
lean_dec(x_14);
lean_dec(x_10);
lean_dec(x_9);
lean_dec(x_8);
lean_dec(x_6);
x_27 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_27;
}
else
{
uint8_t x_28; 
x_28 = !lean_is_exclusive(x_26);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_ctor_get(x_26, 0);
x_30 = !lean_is_exclusive(x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_31 = lean_ctor_get(x_29, 0);
x_32 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_32, 0, x_10);
lean_ctor_set(x_32, 1, x_8);
lean_ctor_set(x_32, 2, x_9);
lean_ctor_set(x_32, 3, x_19);
lean_ctor_set(x_32, 4, x_24);
lean_ctor_set(x_32, 5, x_31);
lean_ctor_set(x_32, 6, x_14);
x_33 = lean_unbox(x_6);
lean_dec(x_6);
lean_ctor_set_uint8(x_32, sizeof(void*)*7, x_33);
lean_ctor_set(x_29, 0, x_32);
return x_26;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; uint8_t x_37; lean_object* x_38; 
x_34 = lean_ctor_get(x_29, 0);
x_35 = lean_ctor_get(x_29, 1);
lean_inc(x_35);
lean_inc(x_34);
lean_dec(x_29);
x_36 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_36, 0, x_10);
lean_ctor_set(x_36, 1, x_8);
lean_ctor_set(x_36, 2, x_9);
lean_ctor_set(x_36, 3, x_19);
lean_ctor_set(x_36, 4, x_24);
lean_ctor_set(x_36, 5, x_34);
lean_ctor_set(x_36, 6, x_14);
x_37 = lean_unbox(x_6);
lean_dec(x_6);
lean_ctor_set_uint8(x_36, sizeof(void*)*7, x_37);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_35);
lean_ctor_set(x_26, 0, x_38);
return x_26;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; uint8_t x_44; lean_object* x_45; lean_object* x_46; 
x_39 = lean_ctor_get(x_26, 0);
lean_inc(x_39);
lean_dec(x_26);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
x_43 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_43, 0, x_10);
lean_ctor_set(x_43, 1, x_8);
lean_ctor_set(x_43, 2, x_9);
lean_ctor_set(x_43, 3, x_19);
lean_ctor_set(x_43, 4, x_24);
lean_ctor_set(x_43, 5, x_40);
lean_ctor_set(x_43, 6, x_14);
x_44 = lean_unbox(x_6);
lean_dec(x_6);
lean_ctor_set_uint8(x_43, sizeof(void*)*7, x_44);
if (lean_is_scalar(x_42)) {
 x_45 = lean_alloc_ctor(0, 2, 0);
} else {
 x_45 = x_42;
}
lean_ctor_set(x_45, 0, x_43);
lean_ctor_set(x_45, 1, x_41);
x_46 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_46, 0, x_45);
return x_46;
}
}
}
}
}
block_167:
{
lean_object* x_51; 
x_51 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_50);
if (lean_obj_tag(x_51) == 0)
{
uint8_t x_52; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_52 = !lean_is_exclusive(x_51);
if (x_52 == 0)
{
return x_51;
}
else
{
lean_object* x_53; lean_object* x_54; 
x_53 = lean_ctor_get(x_51, 0);
lean_inc(x_53);
lean_dec(x_51);
x_54 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_54, 0, x_53);
return x_54;
}
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; 
x_55 = lean_ctor_get(x_51, 0);
lean_inc(x_55);
lean_dec_ref(x_51);
x_56 = lean_ctor_get(x_55, 1);
lean_inc(x_56);
lean_dec(x_55);
x_57 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_56);
if (lean_obj_tag(x_57) == 0)
{
uint8_t x_58; 
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_58 = !lean_is_exclusive(x_57);
if (x_58 == 0)
{
return x_57;
}
else
{
lean_object* x_59; lean_object* x_60; 
x_59 = lean_ctor_get(x_57, 0);
lean_inc(x_59);
lean_dec(x_57);
x_60 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_60, 0, x_59);
return x_60;
}
}
else
{
lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_61 = lean_ctor_get(x_57, 0);
lean_inc(x_61);
lean_dec_ref(x_57);
x_62 = lean_ctor_get(x_61, 0);
lean_inc(x_62);
x_63 = lean_ctor_get(x_61, 1);
lean_inc(x_63);
lean_dec(x_61);
x_64 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_63);
if (lean_obj_tag(x_64) == 0)
{
lean_object* x_65; 
lean_dec_ref(x_64);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_65 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_65;
}
else
{
uint8_t x_66; 
x_66 = !lean_is_exclusive(x_64);
if (x_66 == 0)
{
lean_object* x_67; lean_object* x_68; lean_object* x_69; uint8_t x_70; uint8_t x_71; uint8_t x_72; uint8_t x_73; uint8_t x_74; 
x_67 = lean_ctor_get(x_64, 0);
x_68 = lean_ctor_get(x_67, 0);
lean_inc(x_68);
x_69 = lean_ctor_get(x_67, 1);
lean_inc(x_69);
lean_dec(x_67);
x_70 = 248;
x_71 = lean_unbox(x_68);
x_72 = lean_uint8_land(x_71, x_70);
x_73 = 0;
x_74 = lean_uint8_dec_eq(x_72, x_73);
if (x_74 == 0)
{
lean_object* x_75; uint8_t x_76; 
lean_dec(x_69);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_75 = lean_alloc_ctor(5, 0, 1);
x_76 = lean_unbox(x_68);
lean_dec(x_68);
lean_ctor_set_uint8(x_75, 0, x_76);
lean_ctor_set_tag(x_64, 0);
lean_ctor_set(x_64, 0, x_75);
return x_64;
}
else
{
uint8_t x_77; uint8_t x_78; uint8_t x_79; uint8_t x_80; uint8_t x_81; 
lean_free_object(x_64);
x_77 = 4;
x_78 = lean_uint8_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2);
x_79 = lean_unbox(x_68);
lean_dec(x_68);
x_80 = lean_uint8_land(x_79, x_78);
x_81 = lean_uint8_dec_eq(x_80, x_73);
if (x_81 == 0)
{
lean_object* x_82; 
lean_dec(x_69);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_82 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5));
return x_82;
}
else
{
lean_object* x_83; 
x_83 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_69);
if (lean_obj_tag(x_83) == 0)
{
uint8_t x_84; 
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_84 = !lean_is_exclusive(x_83);
if (x_84 == 0)
{
return x_83;
}
else
{
lean_object* x_85; lean_object* x_86; 
x_85 = lean_ctor_get(x_83, 0);
lean_inc(x_85);
lean_dec(x_83);
x_86 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_86, 0, x_85);
return x_86;
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_87 = lean_ctor_get(x_83, 0);
lean_inc(x_87);
lean_dec_ref(x_83);
x_88 = lean_ctor_get(x_87, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_87, 1);
lean_inc(x_89);
lean_dec(x_87);
x_90 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_89);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
lean_dec(x_88);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
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
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; 
x_94 = lean_ctor_get(x_90, 0);
lean_inc(x_94);
lean_dec_ref(x_90);
x_95 = lean_ctor_get(x_94, 0);
lean_inc(x_95);
x_96 = lean_ctor_get(x_94, 1);
lean_inc(x_96);
lean_dec(x_94);
x_97 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_96);
if (lean_obj_tag(x_97) == 0)
{
uint8_t x_98; 
lean_dec(x_95);
lean_dec(x_88);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_98 = !lean_is_exclusive(x_97);
if (x_98 == 0)
{
return x_97;
}
else
{
lean_object* x_99; lean_object* x_100; 
x_99 = lean_ctor_get(x_97, 0);
lean_inc(x_99);
lean_dec(x_97);
x_100 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_100, 0, x_99);
return x_100;
}
}
else
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; uint8_t x_104; uint8_t x_105; uint8_t x_106; 
x_101 = lean_ctor_get(x_97, 0);
lean_inc(x_101);
lean_dec_ref(x_97);
x_102 = lean_ctor_get(x_101, 0);
lean_inc(x_102);
x_103 = lean_ctor_get(x_101, 1);
lean_inc(x_103);
lean_dec(x_101);
x_104 = lean_unbox(x_6);
x_105 = lean_uint8_land(x_104, x_77);
x_106 = lean_uint8_dec_eq(x_105, x_73);
if (x_106 == 0)
{
lean_object* x_107; 
x_107 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(x_103);
if (lean_obj_tag(x_107) == 0)
{
lean_object* x_108; 
lean_dec_ref(x_107);
lean_dec(x_102);
lean_dec(x_95);
lean_dec(x_88);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_108 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_108;
}
else
{
uint8_t x_109; 
x_109 = !lean_is_exclusive(x_107);
if (x_109 == 0)
{
lean_object* x_110; lean_object* x_111; lean_object* x_112; 
x_110 = lean_ctor_get(x_107, 0);
x_111 = lean_ctor_get(x_110, 0);
lean_inc(x_111);
x_112 = lean_ctor_get(x_110, 1);
lean_inc(x_112);
lean_dec(x_110);
lean_ctor_set(x_107, 0, x_111);
x_8 = x_49;
x_9 = x_62;
x_10 = x_48;
x_11 = x_95;
x_12 = x_88;
x_13 = x_102;
x_14 = x_107;
x_15 = x_112;
goto block_47;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_113 = lean_ctor_get(x_107, 0);
lean_inc(x_113);
lean_dec(x_107);
x_114 = lean_ctor_get(x_113, 0);
lean_inc(x_114);
x_115 = lean_ctor_get(x_113, 1);
lean_inc(x_115);
lean_dec(x_113);
x_116 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_116, 0, x_114);
x_8 = x_49;
x_9 = x_62;
x_10 = x_48;
x_11 = x_95;
x_12 = x_88;
x_13 = x_102;
x_14 = x_116;
x_15 = x_115;
goto block_47;
}
}
}
else
{
lean_object* x_117; 
x_117 = lean_box(0);
x_8 = x_49;
x_9 = x_62;
x_10 = x_48;
x_11 = x_95;
x_12 = x_88;
x_13 = x_102;
x_14 = x_117;
x_15 = x_103;
goto block_47;
}
}
}
}
}
}
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; uint8_t x_121; uint8_t x_122; uint8_t x_123; uint8_t x_124; uint8_t x_125; 
x_118 = lean_ctor_get(x_64, 0);
lean_inc(x_118);
lean_dec(x_64);
x_119 = lean_ctor_get(x_118, 0);
lean_inc(x_119);
x_120 = lean_ctor_get(x_118, 1);
lean_inc(x_120);
lean_dec(x_118);
x_121 = 248;
x_122 = lean_unbox(x_119);
x_123 = lean_uint8_land(x_122, x_121);
x_124 = 0;
x_125 = lean_uint8_dec_eq(x_123, x_124);
if (x_125 == 0)
{
lean_object* x_126; uint8_t x_127; lean_object* x_128; 
lean_dec(x_120);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_126 = lean_alloc_ctor(5, 0, 1);
x_127 = lean_unbox(x_119);
lean_dec(x_119);
lean_ctor_set_uint8(x_126, 0, x_127);
x_128 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_128, 0, x_126);
return x_128;
}
else
{
uint8_t x_129; uint8_t x_130; uint8_t x_131; uint8_t x_132; uint8_t x_133; 
x_129 = 4;
x_130 = lean_uint8_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2);
x_131 = lean_unbox(x_119);
lean_dec(x_119);
x_132 = lean_uint8_land(x_131, x_130);
x_133 = lean_uint8_dec_eq(x_132, x_124);
if (x_133 == 0)
{
lean_object* x_134; 
lean_dec(x_120);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_134 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5));
return x_134;
}
else
{
lean_object* x_135; 
x_135 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_120);
if (lean_obj_tag(x_135) == 0)
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; 
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_136 = lean_ctor_get(x_135, 0);
lean_inc(x_136);
if (lean_is_exclusive(x_135)) {
 lean_ctor_release(x_135, 0);
 x_137 = x_135;
} else {
 lean_dec_ref(x_135);
 x_137 = lean_box(0);
}
if (lean_is_scalar(x_137)) {
 x_138 = lean_alloc_ctor(0, 1, 0);
} else {
 x_138 = x_137;
}
lean_ctor_set(x_138, 0, x_136);
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; 
x_139 = lean_ctor_get(x_135, 0);
lean_inc(x_139);
lean_dec_ref(x_135);
x_140 = lean_ctor_get(x_139, 0);
lean_inc(x_140);
x_141 = lean_ctor_get(x_139, 1);
lean_inc(x_141);
lean_dec(x_139);
x_142 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_141);
if (lean_obj_tag(x_142) == 0)
{
lean_object* x_143; lean_object* x_144; lean_object* x_145; 
lean_dec(x_140);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 x_144 = x_142;
} else {
 lean_dec_ref(x_142);
 x_144 = lean_box(0);
}
if (lean_is_scalar(x_144)) {
 x_145 = lean_alloc_ctor(0, 1, 0);
} else {
 x_145 = x_144;
}
lean_ctor_set(x_145, 0, x_143);
return x_145;
}
else
{
lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_146 = lean_ctor_get(x_142, 0);
lean_inc(x_146);
lean_dec_ref(x_142);
x_147 = lean_ctor_get(x_146, 0);
lean_inc(x_147);
x_148 = lean_ctor_get(x_146, 1);
lean_inc(x_148);
lean_dec(x_146);
x_149 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_148);
if (lean_obj_tag(x_149) == 0)
{
lean_object* x_150; lean_object* x_151; lean_object* x_152; 
lean_dec(x_147);
lean_dec(x_140);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_150 = lean_ctor_get(x_149, 0);
lean_inc(x_150);
if (lean_is_exclusive(x_149)) {
 lean_ctor_release(x_149, 0);
 x_151 = x_149;
} else {
 lean_dec_ref(x_149);
 x_151 = lean_box(0);
}
if (lean_is_scalar(x_151)) {
 x_152 = lean_alloc_ctor(0, 1, 0);
} else {
 x_152 = x_151;
}
lean_ctor_set(x_152, 0, x_150);
return x_152;
}
else
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; uint8_t x_156; uint8_t x_157; uint8_t x_158; 
x_153 = lean_ctor_get(x_149, 0);
lean_inc(x_153);
lean_dec_ref(x_149);
x_154 = lean_ctor_get(x_153, 0);
lean_inc(x_154);
x_155 = lean_ctor_get(x_153, 1);
lean_inc(x_155);
lean_dec(x_153);
x_156 = lean_unbox(x_6);
x_157 = lean_uint8_land(x_156, x_129);
x_158 = lean_uint8_dec_eq(x_157, x_124);
if (x_158 == 0)
{
lean_object* x_159; 
x_159 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(x_155);
if (lean_obj_tag(x_159) == 0)
{
lean_object* x_160; 
lean_dec_ref(x_159);
lean_dec(x_154);
lean_dec(x_147);
lean_dec(x_140);
lean_dec(x_62);
lean_dec(x_49);
lean_dec(x_48);
lean_dec(x_6);
x_160 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_160;
}
else
{
lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; lean_object* x_165; 
x_161 = lean_ctor_get(x_159, 0);
lean_inc(x_161);
if (lean_is_exclusive(x_159)) {
 lean_ctor_release(x_159, 0);
 x_162 = x_159;
} else {
 lean_dec_ref(x_159);
 x_162 = lean_box(0);
}
x_163 = lean_ctor_get(x_161, 0);
lean_inc(x_163);
x_164 = lean_ctor_get(x_161, 1);
lean_inc(x_164);
lean_dec(x_161);
if (lean_is_scalar(x_162)) {
 x_165 = lean_alloc_ctor(1, 1, 0);
} else {
 x_165 = x_162;
}
lean_ctor_set(x_165, 0, x_163);
x_8 = x_49;
x_9 = x_62;
x_10 = x_48;
x_11 = x_147;
x_12 = x_140;
x_13 = x_154;
x_14 = x_165;
x_15 = x_164;
goto block_47;
}
}
else
{
lean_object* x_166; 
x_166 = lean_box(0);
x_8 = x_49;
x_9 = x_62;
x_10 = x_48;
x_11 = x_147;
x_12 = x_140;
x_13 = x_154;
x_14 = x_166;
x_15 = x_155;
goto block_47;
}
}
}
}
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
lean_object* x_199; lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_232; lean_object* x_233; lean_object* x_234; uint8_t x_301; uint8_t x_302; uint8_t x_303; uint8_t x_304; uint8_t x_305; 
x_199 = lean_ctor_get(x_2, 0);
lean_inc(x_199);
lean_dec(x_2);
x_200 = lean_ctor_get(x_199, 0);
lean_inc(x_200);
x_201 = lean_ctor_get(x_199, 1);
lean_inc(x_201);
lean_dec(x_199);
x_301 = 248;
x_302 = lean_unbox(x_200);
x_303 = lean_uint8_land(x_302, x_301);
x_304 = 0;
x_305 = lean_uint8_dec_eq(x_303, x_304);
if (x_305 == 0)
{
lean_object* x_306; uint8_t x_307; lean_object* x_308; 
lean_dec(x_201);
x_306 = lean_alloc_ctor(4, 0, 1);
x_307 = lean_unbox(x_200);
lean_dec(x_200);
lean_ctor_set_uint8(x_306, 0, x_307);
x_308 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_308, 0, x_306);
return x_308;
}
else
{
uint8_t x_309; uint8_t x_310; uint8_t x_311; uint8_t x_312; 
x_309 = 2;
x_310 = lean_unbox(x_200);
x_311 = lean_uint8_land(x_310, x_309);
x_312 = lean_uint8_dec_eq(x_311, x_304);
if (x_312 == 0)
{
lean_object* x_313; 
lean_dec(x_201);
lean_dec(x_200);
x_313 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__8));
return x_313;
}
else
{
uint8_t x_314; uint8_t x_315; uint8_t x_316; uint8_t x_317; 
x_314 = 1;
x_315 = lean_unbox(x_200);
x_316 = lean_uint8_land(x_315, x_314);
x_317 = lean_uint8_dec_eq(x_316, x_304);
if (x_317 == 0)
{
lean_object* x_318; 
x_318 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_201);
if (lean_obj_tag(x_318) == 0)
{
lean_object* x_319; lean_object* x_320; lean_object* x_321; 
lean_dec(x_200);
x_319 = lean_ctor_get(x_318, 0);
lean_inc(x_319);
if (lean_is_exclusive(x_318)) {
 lean_ctor_release(x_318, 0);
 x_320 = x_318;
} else {
 lean_dec_ref(x_318);
 x_320 = lean_box(0);
}
if (lean_is_scalar(x_320)) {
 x_321 = lean_alloc_ctor(0, 1, 0);
} else {
 x_321 = x_320;
}
lean_ctor_set(x_321, 0, x_319);
return x_321;
}
else
{
lean_object* x_322; lean_object* x_323; lean_object* x_324; lean_object* x_325; 
x_322 = lean_ctor_get(x_318, 0);
lean_inc(x_322);
lean_dec_ref(x_318);
x_323 = lean_ctor_get(x_322, 0);
lean_inc(x_323);
x_324 = lean_ctor_get(x_322, 1);
lean_inc(x_324);
lean_dec(x_322);
x_325 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_324);
if (lean_obj_tag(x_325) == 0)
{
lean_object* x_326; lean_object* x_327; lean_object* x_328; 
lean_dec(x_323);
lean_dec(x_200);
x_326 = lean_ctor_get(x_325, 0);
lean_inc(x_326);
if (lean_is_exclusive(x_325)) {
 lean_ctor_release(x_325, 0);
 x_327 = x_325;
} else {
 lean_dec_ref(x_325);
 x_327 = lean_box(0);
}
if (lean_is_scalar(x_327)) {
 x_328 = lean_alloc_ctor(0, 1, 0);
} else {
 x_328 = x_327;
}
lean_ctor_set(x_328, 0, x_326);
return x_328;
}
else
{
lean_object* x_329; lean_object* x_330; lean_object* x_331; 
x_329 = lean_ctor_get(x_325, 0);
lean_inc(x_329);
lean_dec_ref(x_325);
x_330 = lean_ctor_get(x_329, 0);
lean_inc(x_330);
x_331 = lean_ctor_get(x_329, 1);
lean_inc(x_331);
lean_dec(x_329);
x_232 = x_323;
x_233 = x_330;
x_234 = x_331;
goto block_300;
}
}
}
else
{
lean_object* x_332; 
x_332 = lean_unsigned_to_nat(0u);
x_232 = x_332;
x_233 = x_332;
x_234 = x_201;
goto block_300;
}
}
}
block_231:
{
lean_object* x_210; 
x_210 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_209, x_206);
lean_dec(x_206);
if (lean_obj_tag(x_210) == 0)
{
lean_object* x_211; 
lean_dec_ref(x_210);
lean_dec(x_208);
lean_dec(x_207);
lean_dec(x_205);
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_200);
x_211 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_211;
}
else
{
lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; 
x_212 = lean_ctor_get(x_210, 0);
lean_inc(x_212);
lean_dec_ref(x_210);
x_213 = lean_ctor_get(x_212, 0);
lean_inc(x_213);
x_214 = lean_ctor_get(x_212, 1);
lean_inc(x_214);
lean_dec(x_212);
x_215 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_214, x_205);
lean_dec(x_205);
if (lean_obj_tag(x_215) == 0)
{
lean_object* x_216; 
lean_dec_ref(x_215);
lean_dec(x_213);
lean_dec(x_208);
lean_dec(x_207);
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_200);
x_216 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_216;
}
else
{
lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; 
x_217 = lean_ctor_get(x_215, 0);
lean_inc(x_217);
lean_dec_ref(x_215);
x_218 = lean_ctor_get(x_217, 0);
lean_inc(x_218);
x_219 = lean_ctor_get(x_217, 1);
lean_inc(x_219);
lean_dec(x_217);
x_220 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_219, x_207);
lean_dec(x_207);
if (lean_obj_tag(x_220) == 0)
{
lean_object* x_221; 
lean_dec_ref(x_220);
lean_dec(x_218);
lean_dec(x_213);
lean_dec(x_208);
lean_dec(x_204);
lean_dec(x_203);
lean_dec(x_202);
lean_dec(x_200);
x_221 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_221;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; lean_object* x_227; uint8_t x_228; lean_object* x_229; lean_object* x_230; 
x_222 = lean_ctor_get(x_220, 0);
lean_inc(x_222);
if (lean_is_exclusive(x_220)) {
 lean_ctor_release(x_220, 0);
 x_223 = x_220;
} else {
 lean_dec_ref(x_220);
 x_223 = lean_box(0);
}
x_224 = lean_ctor_get(x_222, 0);
lean_inc(x_224);
x_225 = lean_ctor_get(x_222, 1);
lean_inc(x_225);
if (lean_is_exclusive(x_222)) {
 lean_ctor_release(x_222, 0);
 lean_ctor_release(x_222, 1);
 x_226 = x_222;
} else {
 lean_dec_ref(x_222);
 x_226 = lean_box(0);
}
x_227 = lean_alloc_ctor(0, 7, 1);
lean_ctor_set(x_227, 0, x_204);
lean_ctor_set(x_227, 1, x_202);
lean_ctor_set(x_227, 2, x_203);
lean_ctor_set(x_227, 3, x_213);
lean_ctor_set(x_227, 4, x_218);
lean_ctor_set(x_227, 5, x_224);
lean_ctor_set(x_227, 6, x_208);
x_228 = lean_unbox(x_200);
lean_dec(x_200);
lean_ctor_set_uint8(x_227, sizeof(void*)*7, x_228);
if (lean_is_scalar(x_226)) {
 x_229 = lean_alloc_ctor(0, 2, 0);
} else {
 x_229 = x_226;
}
lean_ctor_set(x_229, 0, x_227);
lean_ctor_set(x_229, 1, x_225);
if (lean_is_scalar(x_223)) {
 x_230 = lean_alloc_ctor(1, 1, 0);
} else {
 x_230 = x_223;
}
lean_ctor_set(x_230, 0, x_229);
return x_230;
}
}
}
}
block_300:
{
lean_object* x_235; 
x_235 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_234);
if (lean_obj_tag(x_235) == 0)
{
lean_object* x_236; lean_object* x_237; lean_object* x_238; 
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_236 = lean_ctor_get(x_235, 0);
lean_inc(x_236);
if (lean_is_exclusive(x_235)) {
 lean_ctor_release(x_235, 0);
 x_237 = x_235;
} else {
 lean_dec_ref(x_235);
 x_237 = lean_box(0);
}
if (lean_is_scalar(x_237)) {
 x_238 = lean_alloc_ctor(0, 1, 0);
} else {
 x_238 = x_237;
}
lean_ctor_set(x_238, 0, x_236);
return x_238;
}
else
{
lean_object* x_239; lean_object* x_240; lean_object* x_241; 
x_239 = lean_ctor_get(x_235, 0);
lean_inc(x_239);
lean_dec_ref(x_235);
x_240 = lean_ctor_get(x_239, 1);
lean_inc(x_240);
lean_dec(x_239);
x_241 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_240);
if (lean_obj_tag(x_241) == 0)
{
lean_object* x_242; lean_object* x_243; lean_object* x_244; 
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_242 = lean_ctor_get(x_241, 0);
lean_inc(x_242);
if (lean_is_exclusive(x_241)) {
 lean_ctor_release(x_241, 0);
 x_243 = x_241;
} else {
 lean_dec_ref(x_241);
 x_243 = lean_box(0);
}
if (lean_is_scalar(x_243)) {
 x_244 = lean_alloc_ctor(0, 1, 0);
} else {
 x_244 = x_243;
}
lean_ctor_set(x_244, 0, x_242);
return x_244;
}
else
{
lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; 
x_245 = lean_ctor_get(x_241, 0);
lean_inc(x_245);
lean_dec_ref(x_241);
x_246 = lean_ctor_get(x_245, 0);
lean_inc(x_246);
x_247 = lean_ctor_get(x_245, 1);
lean_inc(x_247);
lean_dec(x_245);
x_248 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_247);
if (lean_obj_tag(x_248) == 0)
{
lean_object* x_249; 
lean_dec_ref(x_248);
lean_dec(x_246);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_249 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_249;
}
else
{
lean_object* x_250; lean_object* x_251; lean_object* x_252; lean_object* x_253; uint8_t x_254; uint8_t x_255; uint8_t x_256; uint8_t x_257; uint8_t x_258; 
x_250 = lean_ctor_get(x_248, 0);
lean_inc(x_250);
if (lean_is_exclusive(x_248)) {
 lean_ctor_release(x_248, 0);
 x_251 = x_248;
} else {
 lean_dec_ref(x_248);
 x_251 = lean_box(0);
}
x_252 = lean_ctor_get(x_250, 0);
lean_inc(x_252);
x_253 = lean_ctor_get(x_250, 1);
lean_inc(x_253);
lean_dec(x_250);
x_254 = 248;
x_255 = lean_unbox(x_252);
x_256 = lean_uint8_land(x_255, x_254);
x_257 = 0;
x_258 = lean_uint8_dec_eq(x_256, x_257);
if (x_258 == 0)
{
lean_object* x_259; uint8_t x_260; lean_object* x_261; 
lean_dec(x_253);
lean_dec(x_246);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_259 = lean_alloc_ctor(5, 0, 1);
x_260 = lean_unbox(x_252);
lean_dec(x_252);
lean_ctor_set_uint8(x_259, 0, x_260);
if (lean_is_scalar(x_251)) {
 x_261 = lean_alloc_ctor(0, 1, 0);
} else {
 x_261 = x_251;
 lean_ctor_set_tag(x_261, 0);
}
lean_ctor_set(x_261, 0, x_259);
return x_261;
}
else
{
uint8_t x_262; uint8_t x_263; uint8_t x_264; uint8_t x_265; uint8_t x_266; 
lean_dec(x_251);
x_262 = 4;
x_263 = lean_uint8_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__2);
x_264 = lean_unbox(x_252);
lean_dec(x_252);
x_265 = lean_uint8_land(x_264, x_263);
x_266 = lean_uint8_dec_eq(x_265, x_257);
if (x_266 == 0)
{
lean_object* x_267; 
lean_dec(x_253);
lean_dec(x_246);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_267 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__5));
return x_267;
}
else
{
lean_object* x_268; 
x_268 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_253);
if (lean_obj_tag(x_268) == 0)
{
lean_object* x_269; lean_object* x_270; lean_object* x_271; 
lean_dec(x_246);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_269 = lean_ctor_get(x_268, 0);
lean_inc(x_269);
if (lean_is_exclusive(x_268)) {
 lean_ctor_release(x_268, 0);
 x_270 = x_268;
} else {
 lean_dec_ref(x_268);
 x_270 = lean_box(0);
}
if (lean_is_scalar(x_270)) {
 x_271 = lean_alloc_ctor(0, 1, 0);
} else {
 x_271 = x_270;
}
lean_ctor_set(x_271, 0, x_269);
return x_271;
}
else
{
lean_object* x_272; lean_object* x_273; lean_object* x_274; lean_object* x_275; 
x_272 = lean_ctor_get(x_268, 0);
lean_inc(x_272);
lean_dec_ref(x_268);
x_273 = lean_ctor_get(x_272, 0);
lean_inc(x_273);
x_274 = lean_ctor_get(x_272, 1);
lean_inc(x_274);
lean_dec(x_272);
x_275 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_274);
if (lean_obj_tag(x_275) == 0)
{
lean_object* x_276; lean_object* x_277; lean_object* x_278; 
lean_dec(x_273);
lean_dec(x_246);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_276 = lean_ctor_get(x_275, 0);
lean_inc(x_276);
if (lean_is_exclusive(x_275)) {
 lean_ctor_release(x_275, 0);
 x_277 = x_275;
} else {
 lean_dec_ref(x_275);
 x_277 = lean_box(0);
}
if (lean_is_scalar(x_277)) {
 x_278 = lean_alloc_ctor(0, 1, 0);
} else {
 x_278 = x_277;
}
lean_ctor_set(x_278, 0, x_276);
return x_278;
}
else
{
lean_object* x_279; lean_object* x_280; lean_object* x_281; lean_object* x_282; 
x_279 = lean_ctor_get(x_275, 0);
lean_inc(x_279);
lean_dec_ref(x_275);
x_280 = lean_ctor_get(x_279, 0);
lean_inc(x_280);
x_281 = lean_ctor_get(x_279, 1);
lean_inc(x_281);
lean_dec(x_279);
x_282 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_281);
if (lean_obj_tag(x_282) == 0)
{
lean_object* x_283; lean_object* x_284; lean_object* x_285; 
lean_dec(x_280);
lean_dec(x_273);
lean_dec(x_246);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_283 = lean_ctor_get(x_282, 0);
lean_inc(x_283);
if (lean_is_exclusive(x_282)) {
 lean_ctor_release(x_282, 0);
 x_284 = x_282;
} else {
 lean_dec_ref(x_282);
 x_284 = lean_box(0);
}
if (lean_is_scalar(x_284)) {
 x_285 = lean_alloc_ctor(0, 1, 0);
} else {
 x_285 = x_284;
}
lean_ctor_set(x_285, 0, x_283);
return x_285;
}
else
{
lean_object* x_286; lean_object* x_287; lean_object* x_288; uint8_t x_289; uint8_t x_290; uint8_t x_291; 
x_286 = lean_ctor_get(x_282, 0);
lean_inc(x_286);
lean_dec_ref(x_282);
x_287 = lean_ctor_get(x_286, 0);
lean_inc(x_287);
x_288 = lean_ctor_get(x_286, 1);
lean_inc(x_288);
lean_dec(x_286);
x_289 = lean_unbox(x_200);
x_290 = lean_uint8_land(x_289, x_262);
x_291 = lean_uint8_dec_eq(x_290, x_257);
if (x_291 == 0)
{
lean_object* x_292; 
x_292 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_readUInt32BE(x_288);
if (lean_obj_tag(x_292) == 0)
{
lean_object* x_293; 
lean_dec_ref(x_292);
lean_dec(x_287);
lean_dec(x_280);
lean_dec(x_273);
lean_dec(x_246);
lean_dec(x_233);
lean_dec(x_232);
lean_dec(x_200);
x_293 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_parseWindow___closed__0));
return x_293;
}
else
{
lean_object* x_294; lean_object* x_295; lean_object* x_296; lean_object* x_297; lean_object* x_298; 
x_294 = lean_ctor_get(x_292, 0);
lean_inc(x_294);
if (lean_is_exclusive(x_292)) {
 lean_ctor_release(x_292, 0);
 x_295 = x_292;
} else {
 lean_dec_ref(x_292);
 x_295 = lean_box(0);
}
x_296 = lean_ctor_get(x_294, 0);
lean_inc(x_296);
x_297 = lean_ctor_get(x_294, 1);
lean_inc(x_297);
lean_dec(x_294);
if (lean_is_scalar(x_295)) {
 x_298 = lean_alloc_ctor(1, 1, 0);
} else {
 x_298 = x_295;
}
lean_ctor_set(x_298, 0, x_296);
x_202 = x_233;
x_203 = x_246;
x_204 = x_232;
x_205 = x_280;
x_206 = x_273;
x_207 = x_287;
x_208 = x_298;
x_209 = x_297;
goto block_231;
}
}
else
{
lean_object* x_299; 
x_299 = lean_box(0);
x_202 = x_233;
x_203 = x_246;
x_204 = x_232;
x_205 = x_280;
x_206 = x_273;
x_207 = x_287;
x_208 = x_299;
x_209 = x_288;
goto block_231;
}
}
}
}
}
}
}
}
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___redArg(x_1, x_2, x_3, x_4);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___redArg(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
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
lean_object* x_24; uint8_t x_25; 
x_24 = lean_byte_array_size(x_2);
x_25 = lean_nat_dec_lt(x_14, x_24);
if (x_25 == 0)
{
uint8_t x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
lean_dec(x_14);
x_26 = l_instInhabitedUInt8;
x_27 = lean_box(x_26);
x_28 = l_outOfBounds___redArg(x_27);
x_29 = lean_unbox(x_28);
lean_dec(x_28);
x_8 = x_29;
goto block_12;
}
else
{
uint8_t x_30; 
x_30 = lean_byte_array_fget(x_2, x_14);
lean_dec(x_14);
x_8 = x_30;
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___redArg___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___redArg(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_6;
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
lean_object* x_19; lean_object* x_20; lean_object* x_21; 
x_19 = lean_unsigned_to_nat(1u);
x_20 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_20, 0, x_12);
lean_ctor_set(x_20, 1, x_10);
lean_ctor_set(x_20, 2, x_19);
x_21 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___redArg(x_6, x_1, x_20, x_15, x_12);
lean_dec_ref(x_20);
return x_21;
}
else
{
lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; 
x_22 = lean_nat_add(x_6, x_10);
lean_dec(x_10);
x_23 = l_ByteArray_extract(x_15, x_6, x_22);
lean_dec(x_22);
x_24 = lean_byte_array_size(x_23);
x_25 = lean_byte_array_copy_slice(x_23, x_12, x_15, x_16, x_24, x_8);
lean_dec_ref(x_23);
return x_25;
}
}
else
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; uint8_t x_29; 
x_26 = lean_nat_sub(x_3, x_6);
lean_dec(x_3);
x_27 = lean_nat_add(x_26, x_4);
x_28 = lean_byte_array_size(x_2);
x_29 = lean_nat_dec_le(x_27, x_28);
if (x_29 == 0)
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
lean_dec(x_27);
x_30 = lean_unsigned_to_nat(0u);
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(x_32, 0, x_30);
lean_ctor_set(x_32, 1, x_4);
lean_ctor_set(x_32, 2, x_31);
x_33 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___redArg(x_26, x_32, x_2, x_30);
lean_dec_ref(x_32);
lean_dec(x_26);
return x_33;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_4);
x_34 = l_ByteArray_extract(x_2, x_26, x_27);
lean_dec(x_27);
x_35 = lean_unsigned_to_nat(0u);
x_36 = lean_byte_array_size(x_34);
x_37 = lean_byte_array_copy_slice(x_34, x_35, x_2, x_28, x_36, x_7);
lean_dec_ref(x_34);
return x_37;
}
}
}
else
{
lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; uint8_t x_42; lean_object* x_43; 
lean_dec(x_4);
x_38 = l_ByteArray_extract(x_1, x_3, x_5);
lean_dec(x_5);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_byte_array_size(x_2);
x_41 = lean_byte_array_size(x_38);
x_42 = 0;
x_43 = lean_byte_array_copy_slice(x_38, x_39, x_2, x_40, x_41, x_42);
lean_dec_ref(x_38);
return x_43;
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(x_1, x_2, x_3, x_4);
lean_dec_ref(x_1);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___redArg(x_1, x_2, x_3, x_4, x_5);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7) {
_start:
{
lean_object* x_8; 
x_8 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__0(x_1, x_2, x_3, x_4, x_5, x_6, x_7);
lean_dec_ref(x_3);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_8;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___redArg(x_1, x_2, x_3, x_4);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff___private_Init_Data_Range_Basic_0__Std_Legacy_Range_forIn_x27_loop___at___00LeanBdiff_Vcdiff_Decoder_copyBytes_spec__1(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_2);
lean_dec(x_1);
return x_7;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
uint8_t x_9; 
x_9 = !lean_is_exclusive(x_1);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; 
x_10 = lean_ctor_get(x_1, 0);
x_11 = lean_ctor_get(x_1, 1);
lean_dec(x_11);
switch (lean_obj_tag(x_10)) {
case 0:
{
lean_object* x_12; lean_object* x_13; lean_object* x_14; 
lean_dec(x_2);
lean_ctor_set(x_1, 1, x_7);
lean_ctor_set(x_1, 0, x_6);
x_12 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_12, 0, x_5);
lean_ctor_set(x_12, 1, x_1);
x_13 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_13, 0, x_4);
lean_ctor_set(x_13, 1, x_12);
x_14 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_14, 0, x_13);
return x_14;
}
case 1:
{
uint8_t x_15; 
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_hasBytes(x_5, x_2);
if (x_15 == 0)
{
lean_object* x_16; 
lean_free_object(x_1);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
x_16 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_16;
}
else
{
lean_object* x_17; 
x_17 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_5, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_17) == 0)
{
lean_object* x_18; 
lean_dec_ref(x_17);
lean_free_object(x_1);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
x_18 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_18;
}
else
{
uint8_t x_19; 
x_19 = !lean_is_exclusive(x_17);
if (x_19 == 0)
{
lean_object* x_20; uint8_t x_21; 
x_20 = lean_ctor_get(x_17, 0);
x_21 = !lean_is_exclusive(x_20);
if (x_21 == 0)
{
lean_object* x_22; lean_object* x_23; uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_22 = lean_ctor_get(x_20, 0);
x_23 = lean_ctor_get(x_20, 1);
x_24 = 0;
x_25 = lean_unsigned_to_nat(0u);
x_26 = lean_byte_array_size(x_4);
x_27 = lean_byte_array_size(x_22);
x_28 = lean_byte_array_copy_slice(x_22, x_25, x_4, x_26, x_27, x_24);
lean_dec(x_22);
lean_ctor_set(x_20, 1, x_7);
lean_ctor_set(x_20, 0, x_6);
lean_ctor_set(x_1, 1, x_20);
lean_ctor_set(x_1, 0, x_23);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_1);
lean_ctor_set(x_17, 0, x_29);
return x_17;
}
else
{
lean_object* x_30; lean_object* x_31; uint8_t x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; 
x_30 = lean_ctor_get(x_20, 0);
x_31 = lean_ctor_get(x_20, 1);
lean_inc(x_31);
lean_inc(x_30);
lean_dec(x_20);
x_32 = 0;
x_33 = lean_unsigned_to_nat(0u);
x_34 = lean_byte_array_size(x_4);
x_35 = lean_byte_array_size(x_30);
x_36 = lean_byte_array_copy_slice(x_30, x_33, x_4, x_34, x_35, x_32);
lean_dec(x_30);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_6);
lean_ctor_set(x_37, 1, x_7);
lean_ctor_set(x_1, 1, x_37);
lean_ctor_set(x_1, 0, x_31);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_36);
lean_ctor_set(x_38, 1, x_1);
lean_ctor_set(x_17, 0, x_38);
return x_17;
}
}
else
{
lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_39 = lean_ctor_get(x_17, 0);
lean_inc(x_39);
lean_dec(x_17);
x_40 = lean_ctor_get(x_39, 0);
lean_inc(x_40);
x_41 = lean_ctor_get(x_39, 1);
lean_inc(x_41);
if (lean_is_exclusive(x_39)) {
 lean_ctor_release(x_39, 0);
 lean_ctor_release(x_39, 1);
 x_42 = x_39;
} else {
 lean_dec_ref(x_39);
 x_42 = lean_box(0);
}
x_43 = 0;
x_44 = lean_unsigned_to_nat(0u);
x_45 = lean_byte_array_size(x_4);
x_46 = lean_byte_array_size(x_40);
x_47 = lean_byte_array_copy_slice(x_40, x_44, x_4, x_45, x_46, x_43);
lean_dec(x_40);
if (lean_is_scalar(x_42)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_42;
}
lean_ctor_set(x_48, 0, x_6);
lean_ctor_set(x_48, 1, x_7);
lean_ctor_set(x_1, 1, x_48);
lean_ctor_set(x_1, 0, x_41);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_47);
lean_ctor_set(x_49, 1, x_1);
x_50 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_50, 0, x_49);
return x_50;
}
}
}
}
case 2:
{
lean_object* x_51; 
x_51 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_5);
if (lean_obj_tag(x_51) == 0)
{
lean_object* x_52; 
lean_dec_ref(x_51);
lean_free_object(x_1);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec(x_2);
x_52 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_52;
}
else
{
uint8_t x_53; 
x_53 = !lean_is_exclusive(x_51);
if (x_53 == 0)
{
lean_object* x_54; uint8_t x_55; 
x_54 = lean_ctor_get(x_51, 0);
x_55 = !lean_is_exclusive(x_54);
if (x_55 == 0)
{
lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; uint8_t x_63; lean_object* x_64; lean_object* x_65; 
x_56 = lean_ctor_get(x_54, 0);
x_57 = lean_ctor_get(x_54, 1);
x_58 = lean_mk_array(x_2, x_56);
x_59 = lean_byte_array_mk(x_58);
x_60 = lean_unsigned_to_nat(0u);
x_61 = lean_byte_array_size(x_4);
x_62 = lean_byte_array_size(x_59);
x_63 = 0;
x_64 = lean_byte_array_copy_slice(x_59, x_60, x_4, x_61, x_62, x_63);
lean_dec_ref(x_59);
lean_ctor_set(x_54, 1, x_7);
lean_ctor_set(x_54, 0, x_6);
lean_ctor_set(x_1, 1, x_54);
lean_ctor_set(x_1, 0, x_57);
x_65 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_65, 0, x_64);
lean_ctor_set(x_65, 1, x_1);
lean_ctor_set(x_51, 0, x_65);
return x_51;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; uint8_t x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; 
x_66 = lean_ctor_get(x_54, 0);
x_67 = lean_ctor_get(x_54, 1);
lean_inc(x_67);
lean_inc(x_66);
lean_dec(x_54);
x_68 = lean_mk_array(x_2, x_66);
x_69 = lean_byte_array_mk(x_68);
x_70 = lean_unsigned_to_nat(0u);
x_71 = lean_byte_array_size(x_4);
x_72 = lean_byte_array_size(x_69);
x_73 = 0;
x_74 = lean_byte_array_copy_slice(x_69, x_70, x_4, x_71, x_72, x_73);
lean_dec_ref(x_69);
x_75 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_75, 0, x_6);
lean_ctor_set(x_75, 1, x_7);
lean_ctor_set(x_1, 1, x_75);
lean_ctor_set(x_1, 0, x_67);
x_76 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_76, 0, x_74);
lean_ctor_set(x_76, 1, x_1);
lean_ctor_set(x_51, 0, x_76);
return x_51;
}
}
else
{
lean_object* x_77; lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; uint8_t x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
x_77 = lean_ctor_get(x_51, 0);
lean_inc(x_77);
lean_dec(x_51);
x_78 = lean_ctor_get(x_77, 0);
lean_inc(x_78);
x_79 = lean_ctor_get(x_77, 1);
lean_inc(x_79);
if (lean_is_exclusive(x_77)) {
 lean_ctor_release(x_77, 0);
 lean_ctor_release(x_77, 1);
 x_80 = x_77;
} else {
 lean_dec_ref(x_77);
 x_80 = lean_box(0);
}
x_81 = lean_mk_array(x_2, x_78);
x_82 = lean_byte_array_mk(x_81);
x_83 = lean_unsigned_to_nat(0u);
x_84 = lean_byte_array_size(x_4);
x_85 = lean_byte_array_size(x_82);
x_86 = 0;
x_87 = lean_byte_array_copy_slice(x_82, x_83, x_4, x_84, x_85, x_86);
lean_dec_ref(x_82);
if (lean_is_scalar(x_80)) {
 x_88 = lean_alloc_ctor(0, 2, 0);
} else {
 x_88 = x_80;
}
lean_ctor_set(x_88, 0, x_6);
lean_ctor_set(x_88, 1, x_7);
lean_ctor_set(x_1, 1, x_88);
lean_ctor_set(x_1, 0, x_79);
x_89 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_89, 0, x_87);
lean_ctor_set(x_89, 1, x_1);
x_90 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_90, 0, x_89);
return x_90;
}
}
}
default: 
{
uint8_t x_91; lean_object* x_92; lean_object* x_93; 
x_91 = lean_ctor_get_uint8(x_10, 0);
lean_dec_ref(x_10);
x_92 = lean_uint8_to_nat(x_91);
x_93 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(x_92, x_8, x_6, x_7);
if (lean_obj_tag(x_93) == 0)
{
uint8_t x_94; 
lean_free_object(x_1);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
x_94 = !lean_is_exclusive(x_93);
if (x_94 == 0)
{
return x_93;
}
else
{
lean_object* x_95; lean_object* x_96; 
x_95 = lean_ctor_get(x_93, 0);
lean_inc(x_95);
lean_dec(x_93);
x_96 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_96, 0, x_95);
return x_96;
}
}
else
{
uint8_t x_97; 
x_97 = !lean_is_exclusive(x_93);
if (x_97 == 0)
{
lean_object* x_98; uint8_t x_99; 
x_98 = lean_ctor_get(x_93, 0);
x_99 = !lean_is_exclusive(x_98);
if (x_99 == 0)
{
lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_105; 
x_100 = lean_ctor_get(x_98, 0);
x_101 = lean_ctor_get(x_98, 1);
x_102 = lean_byte_array_size(x_3);
x_103 = lean_byte_array_size(x_4);
x_104 = lean_nat_add(x_102, x_103);
x_105 = lean_nat_dec_le(x_104, x_100);
if (x_105 == 0)
{
lean_object* x_106; 
lean_dec(x_104);
x_106 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(x_3, x_4, x_100, x_2);
lean_ctor_set(x_98, 0, x_5);
lean_ctor_set(x_1, 1, x_98);
lean_ctor_set(x_1, 0, x_106);
lean_ctor_set(x_93, 0, x_1);
return x_93;
}
else
{
lean_object* x_107; 
lean_free_object(x_98);
lean_dec(x_101);
lean_free_object(x_1);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
x_107 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_107, 0, x_100);
lean_ctor_set(x_107, 1, x_2);
lean_ctor_set(x_107, 2, x_104);
lean_ctor_set_tag(x_93, 0);
lean_ctor_set(x_93, 0, x_107);
return x_93;
}
}
else
{
lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; lean_object* x_112; uint8_t x_113; 
x_108 = lean_ctor_get(x_98, 0);
x_109 = lean_ctor_get(x_98, 1);
lean_inc(x_109);
lean_inc(x_108);
lean_dec(x_98);
x_110 = lean_byte_array_size(x_3);
x_111 = lean_byte_array_size(x_4);
x_112 = lean_nat_add(x_110, x_111);
x_113 = lean_nat_dec_le(x_112, x_108);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; 
lean_dec(x_112);
x_114 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(x_3, x_4, x_108, x_2);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_5);
lean_ctor_set(x_115, 1, x_109);
lean_ctor_set(x_1, 1, x_115);
lean_ctor_set(x_1, 0, x_114);
lean_ctor_set(x_93, 0, x_1);
return x_93;
}
else
{
lean_object* x_116; 
lean_dec(x_109);
lean_free_object(x_1);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
x_116 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_116, 0, x_108);
lean_ctor_set(x_116, 1, x_2);
lean_ctor_set(x_116, 2, x_112);
lean_ctor_set_tag(x_93, 0);
lean_ctor_set(x_93, 0, x_116);
return x_93;
}
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; uint8_t x_124; 
x_117 = lean_ctor_get(x_93, 0);
lean_inc(x_117);
lean_dec(x_93);
x_118 = lean_ctor_get(x_117, 0);
lean_inc(x_118);
x_119 = lean_ctor_get(x_117, 1);
lean_inc(x_119);
if (lean_is_exclusive(x_117)) {
 lean_ctor_release(x_117, 0);
 lean_ctor_release(x_117, 1);
 x_120 = x_117;
} else {
 lean_dec_ref(x_117);
 x_120 = lean_box(0);
}
x_121 = lean_byte_array_size(x_3);
x_122 = lean_byte_array_size(x_4);
x_123 = lean_nat_add(x_121, x_122);
x_124 = lean_nat_dec_le(x_123, x_118);
if (x_124 == 0)
{
lean_object* x_125; lean_object* x_126; lean_object* x_127; 
lean_dec(x_123);
x_125 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(x_3, x_4, x_118, x_2);
if (lean_is_scalar(x_120)) {
 x_126 = lean_alloc_ctor(0, 2, 0);
} else {
 x_126 = x_120;
}
lean_ctor_set(x_126, 0, x_5);
lean_ctor_set(x_126, 1, x_119);
lean_ctor_set(x_1, 1, x_126);
lean_ctor_set(x_1, 0, x_125);
x_127 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_127, 0, x_1);
return x_127;
}
else
{
lean_object* x_128; lean_object* x_129; 
lean_dec(x_120);
lean_dec(x_119);
lean_free_object(x_1);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
x_128 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_128, 0, x_118);
lean_ctor_set(x_128, 1, x_2);
lean_ctor_set(x_128, 2, x_123);
x_129 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_129, 0, x_128);
return x_129;
}
}
}
}
}
}
else
{
lean_object* x_130; 
x_130 = lean_ctor_get(x_1, 0);
lean_inc(x_130);
lean_dec(x_1);
switch (lean_obj_tag(x_130)) {
case 0:
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; 
lean_dec(x_2);
x_131 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_131, 0, x_6);
lean_ctor_set(x_131, 1, x_7);
x_132 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_132, 0, x_5);
lean_ctor_set(x_132, 1, x_131);
x_133 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_133, 0, x_4);
lean_ctor_set(x_133, 1, x_132);
x_134 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_134, 0, x_133);
return x_134;
}
case 1:
{
uint8_t x_135; 
x_135 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_hasBytes(x_5, x_2);
if (x_135 == 0)
{
lean_object* x_136; 
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
x_136 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_136;
}
else
{
lean_object* x_137; 
x_137 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readBytes(x_5, x_2);
lean_dec(x_2);
if (lean_obj_tag(x_137) == 0)
{
lean_object* x_138; 
lean_dec_ref(x_137);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
x_138 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_138;
}
else
{
lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; uint8_t x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; 
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 x_140 = x_137;
} else {
 lean_dec_ref(x_137);
 x_140 = lean_box(0);
}
x_141 = lean_ctor_get(x_139, 0);
lean_inc(x_141);
x_142 = lean_ctor_get(x_139, 1);
lean_inc(x_142);
if (lean_is_exclusive(x_139)) {
 lean_ctor_release(x_139, 0);
 lean_ctor_release(x_139, 1);
 x_143 = x_139;
} else {
 lean_dec_ref(x_139);
 x_143 = lean_box(0);
}
x_144 = 0;
x_145 = lean_unsigned_to_nat(0u);
x_146 = lean_byte_array_size(x_4);
x_147 = lean_byte_array_size(x_141);
x_148 = lean_byte_array_copy_slice(x_141, x_145, x_4, x_146, x_147, x_144);
lean_dec(x_141);
if (lean_is_scalar(x_143)) {
 x_149 = lean_alloc_ctor(0, 2, 0);
} else {
 x_149 = x_143;
}
lean_ctor_set(x_149, 0, x_6);
lean_ctor_set(x_149, 1, x_7);
x_150 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_150, 0, x_142);
lean_ctor_set(x_150, 1, x_149);
x_151 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_151, 0, x_148);
lean_ctor_set(x_151, 1, x_150);
if (lean_is_scalar(x_140)) {
 x_152 = lean_alloc_ctor(1, 1, 0);
} else {
 x_152 = x_140;
}
lean_ctor_set(x_152, 0, x_151);
return x_152;
}
}
}
case 2:
{
lean_object* x_153; 
x_153 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_5);
if (lean_obj_tag(x_153) == 0)
{
lean_object* x_154; 
lean_dec_ref(x_153);
lean_dec_ref(x_7);
lean_dec_ref(x_6);
lean_dec_ref(x_4);
lean_dec(x_2);
x_154 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___closed__0));
return x_154;
}
else
{
lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; lean_object* x_164; uint8_t x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
x_155 = lean_ctor_get(x_153, 0);
lean_inc(x_155);
if (lean_is_exclusive(x_153)) {
 lean_ctor_release(x_153, 0);
 x_156 = x_153;
} else {
 lean_dec_ref(x_153);
 x_156 = lean_box(0);
}
x_157 = lean_ctor_get(x_155, 0);
lean_inc(x_157);
x_158 = lean_ctor_get(x_155, 1);
lean_inc(x_158);
if (lean_is_exclusive(x_155)) {
 lean_ctor_release(x_155, 0);
 lean_ctor_release(x_155, 1);
 x_159 = x_155;
} else {
 lean_dec_ref(x_155);
 x_159 = lean_box(0);
}
x_160 = lean_mk_array(x_2, x_157);
x_161 = lean_byte_array_mk(x_160);
x_162 = lean_unsigned_to_nat(0u);
x_163 = lean_byte_array_size(x_4);
x_164 = lean_byte_array_size(x_161);
x_165 = 0;
x_166 = lean_byte_array_copy_slice(x_161, x_162, x_4, x_163, x_164, x_165);
lean_dec_ref(x_161);
if (lean_is_scalar(x_159)) {
 x_167 = lean_alloc_ctor(0, 2, 0);
} else {
 x_167 = x_159;
}
lean_ctor_set(x_167, 0, x_6);
lean_ctor_set(x_167, 1, x_7);
x_168 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_168, 0, x_158);
lean_ctor_set(x_168, 1, x_167);
x_169 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_169, 0, x_166);
lean_ctor_set(x_169, 1, x_168);
if (lean_is_scalar(x_156)) {
 x_170 = lean_alloc_ctor(1, 1, 0);
} else {
 x_170 = x_156;
}
lean_ctor_set(x_170, 0, x_169);
return x_170;
}
}
default: 
{
uint8_t x_171; lean_object* x_172; lean_object* x_173; 
x_171 = lean_ctor_get_uint8(x_130, 0);
lean_dec_ref(x_130);
x_172 = lean_uint8_to_nat(x_171);
x_173 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(x_172, x_8, x_6, x_7);
if (lean_obj_tag(x_173) == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; 
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec(x_2);
x_174 = lean_ctor_get(x_173, 0);
lean_inc(x_174);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 x_175 = x_173;
} else {
 lean_dec_ref(x_173);
 x_175 = lean_box(0);
}
if (lean_is_scalar(x_175)) {
 x_176 = lean_alloc_ctor(0, 1, 0);
} else {
 x_176 = x_175;
}
lean_ctor_set(x_176, 0, x_174);
return x_176;
}
else
{
lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; uint8_t x_185; 
x_177 = lean_ctor_get(x_173, 0);
lean_inc(x_177);
if (lean_is_exclusive(x_173)) {
 lean_ctor_release(x_173, 0);
 x_178 = x_173;
} else {
 lean_dec_ref(x_173);
 x_178 = lean_box(0);
}
x_179 = lean_ctor_get(x_177, 0);
lean_inc(x_179);
x_180 = lean_ctor_get(x_177, 1);
lean_inc(x_180);
if (lean_is_exclusive(x_177)) {
 lean_ctor_release(x_177, 0);
 lean_ctor_release(x_177, 1);
 x_181 = x_177;
} else {
 lean_dec_ref(x_177);
 x_181 = lean_box(0);
}
x_182 = lean_byte_array_size(x_3);
x_183 = lean_byte_array_size(x_4);
x_184 = lean_nat_add(x_182, x_183);
x_185 = lean_nat_dec_le(x_184, x_179);
if (x_185 == 0)
{
lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
lean_dec(x_184);
x_186 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_copyBytes(x_3, x_4, x_179, x_2);
if (lean_is_scalar(x_181)) {
 x_187 = lean_alloc_ctor(0, 2, 0);
} else {
 x_187 = x_181;
}
lean_ctor_set(x_187, 0, x_5);
lean_ctor_set(x_187, 1, x_180);
x_188 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_188, 0, x_186);
lean_ctor_set(x_188, 1, x_187);
if (lean_is_scalar(x_178)) {
 x_189 = lean_alloc_ctor(1, 1, 0);
} else {
 x_189 = x_178;
}
lean_ctor_set(x_189, 0, x_188);
return x_189;
}
else
{
lean_object* x_190; lean_object* x_191; 
lean_dec(x_181);
lean_dec(x_180);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
x_190 = lean_alloc_ctor(11, 3, 0);
lean_ctor_set(x_190, 0, x_179);
lean_ctor_set(x_190, 1, x_2);
lean_ctor_set(x_190, 2, x_184);
if (lean_is_scalar(x_178)) {
 x_191 = lean_alloc_ctor(0, 1, 0);
} else {
 x_191 = x_178;
 lean_ctor_set_tag(x_191, 0);
}
lean_ctor_set(x_191, 0, x_190);
return x_191;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6, lean_object* x_7, lean_object* x_8) {
_start:
{
lean_object* x_9; 
x_9 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(x_1, x_2, x_3, x_4, x_5, x_6, x_7, x_8);
lean_dec(x_8);
lean_dec_ref(x_3);
return x_9;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_14; 
x_14 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_3);
if (lean_obj_tag(x_14) == 0)
{
lean_object* x_15; 
lean_dec_ref(x_14);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
x_15 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___closed__0));
return x_15;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; uint8_t x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; uint8_t x_52; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_76; lean_object* x_77; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint8_t x_106; lean_object* x_115; uint8_t x_116; 
x_16 = lean_ctor_get(x_14, 0);
lean_inc(x_16);
lean_dec_ref(x_14);
x_17 = lean_ctor_get(x_16, 0);
lean_inc(x_17);
x_18 = lean_ctor_get(x_16, 1);
lean_inc(x_18);
if (lean_is_exclusive(x_16)) {
 lean_ctor_release(x_16, 0);
 lean_ctor_release(x_16, 1);
 x_19 = x_16;
} else {
 lean_dec_ref(x_16);
 x_19 = lean_box(0);
}
x_20 = lean_unbox(x_17);
lean_dec(x_17);
x_21 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_CodeTable_lookup(x_20);
x_103 = lean_ctor_get(x_21, 0);
lean_inc_ref(x_103);
x_104 = lean_ctor_get(x_103, 0);
lean_inc(x_104);
x_105 = lean_ctor_get(x_103, 1);
lean_inc(x_105);
lean_dec_ref(x_103);
x_115 = lean_unsigned_to_nat(0u);
x_116 = lean_nat_dec_eq(x_105, x_115);
if (x_116 == 0)
{
lean_dec(x_104);
x_106 = x_116;
goto block_114;
}
else
{
lean_object* x_117; uint8_t x_118; 
x_117 = lean_box(0);
x_118 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_104, x_117);
lean_dec(x_104);
if (x_118 == 0)
{
x_106 = x_116;
goto block_114;
}
else
{
x_76 = x_105;
x_77 = x_18;
goto block_102;
}
}
block_43:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
x_30 = lean_ctor_get(x_21, 1);
lean_inc_ref(x_30);
lean_dec_ref(x_21);
x_31 = lean_ctor_get(x_30, 0);
x_32 = lean_box(0);
x_33 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_31, x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; 
lean_dec_ref(x_25);
x_34 = lean_byte_array_size(x_26);
x_35 = lean_nat_add(x_27, x_34);
lean_dec(x_27);
x_36 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(x_30, x_28, x_1, x_26, x_23, x_24, x_22, x_35);
lean_dec(x_35);
if (lean_obj_tag(x_36) == 0)
{
uint8_t x_37; 
lean_dec_ref(x_29);
x_37 = !lean_is_exclusive(x_36);
if (x_37 == 0)
{
return x_36;
}
else
{
lean_object* x_38; lean_object* x_39; 
x_38 = lean_ctor_get(x_36, 0);
lean_inc(x_38);
lean_dec(x_36);
x_39 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_39, 0, x_38);
return x_39;
}
}
else
{
lean_object* x_40; lean_object* x_41; lean_object* x_42; 
x_40 = lean_ctor_get(x_36, 0);
lean_inc(x_40);
lean_dec_ref(x_36);
x_41 = lean_ctor_get(x_40, 0);
lean_inc(x_41);
x_42 = lean_ctor_get(x_40, 1);
lean_inc(x_42);
lean_dec(x_40);
x_7 = x_29;
x_8 = x_41;
x_9 = x_42;
goto block_13;
}
}
else
{
lean_dec_ref(x_30);
lean_dec(x_28);
lean_dec(x_27);
lean_dec_ref(x_24);
lean_dec_ref(x_23);
lean_dec_ref(x_22);
x_7 = x_29;
x_8 = x_26;
x_9 = x_25;
goto block_13;
}
}
block_60:
{
if (x_52 == 0)
{
x_22 = x_45;
x_23 = x_44;
x_24 = x_48;
x_25 = x_49;
x_26 = x_50;
x_27 = x_51;
x_28 = x_46;
x_29 = x_47;
goto block_43;
}
else
{
lean_object* x_53; 
lean_dec(x_46);
x_53 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_47);
if (lean_obj_tag(x_53) == 0)
{
uint8_t x_54; 
lean_dec(x_51);
lean_dec_ref(x_50);
lean_dec_ref(x_49);
lean_dec_ref(x_48);
lean_dec_ref(x_45);
lean_dec_ref(x_44);
lean_dec_ref(x_21);
x_54 = !lean_is_exclusive(x_53);
if (x_54 == 0)
{
return x_53;
}
else
{
lean_object* x_55; lean_object* x_56; 
x_55 = lean_ctor_get(x_53, 0);
lean_inc(x_55);
lean_dec(x_53);
x_56 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_56, 0, x_55);
return x_56;
}
}
else
{
lean_object* x_57; lean_object* x_58; lean_object* x_59; 
x_57 = lean_ctor_get(x_53, 0);
lean_inc(x_57);
lean_dec_ref(x_53);
x_58 = lean_ctor_get(x_57, 0);
lean_inc(x_58);
x_59 = lean_ctor_get(x_57, 1);
lean_inc(x_59);
lean_dec(x_57);
x_22 = x_45;
x_23 = x_44;
x_24 = x_48;
x_25 = x_49;
x_26 = x_50;
x_27 = x_51;
x_28 = x_58;
x_29 = x_59;
goto block_43;
}
}
}
block_75:
{
lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; uint8_t x_72; 
x_68 = lean_ctor_get(x_21, 1);
lean_inc_ref(x_68);
x_69 = lean_ctor_get(x_68, 0);
lean_inc(x_69);
x_70 = lean_ctor_get(x_68, 1);
lean_inc(x_70);
lean_dec_ref(x_68);
x_71 = lean_unsigned_to_nat(0u);
x_72 = lean_nat_dec_eq(x_70, x_71);
if (x_72 == 0)
{
lean_dec(x_69);
x_44 = x_65;
x_45 = x_67;
x_46 = x_70;
x_47 = x_61;
x_48 = x_66;
x_49 = x_64;
x_50 = x_63;
x_51 = x_62;
x_52 = x_72;
goto block_60;
}
else
{
lean_object* x_73; uint8_t x_74; 
x_73 = lean_box(0);
x_74 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_69, x_73);
lean_dec(x_69);
if (x_74 == 0)
{
x_44 = x_65;
x_45 = x_67;
x_46 = x_70;
x_47 = x_61;
x_48 = x_66;
x_49 = x_64;
x_50 = x_63;
x_51 = x_62;
x_52 = x_72;
goto block_60;
}
else
{
x_22 = x_67;
x_23 = x_65;
x_24 = x_66;
x_25 = x_64;
x_26 = x_63;
x_27 = x_62;
x_28 = x_70;
x_29 = x_61;
goto block_43;
}
}
}
block_102:
{
lean_object* x_78; lean_object* x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_78 = lean_ctor_get(x_21, 0);
lean_inc_ref(x_78);
x_79 = lean_ctor_get(x_78, 0);
x_80 = lean_byte_array_size(x_1);
x_81 = lean_box(0);
x_82 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_instBEqInstType_beq(x_79, x_81);
if (x_82 == 0)
{
lean_object* x_83; lean_object* x_84; lean_object* x_85; 
lean_dec(x_19);
x_83 = lean_byte_array_size(x_2);
x_84 = lean_nat_add(x_80, x_83);
x_85 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_execHalfInst(x_78, x_76, x_1, x_2, x_4, x_5, x_6, x_84);
lean_dec(x_84);
if (lean_obj_tag(x_85) == 0)
{
uint8_t x_86; 
lean_dec_ref(x_77);
lean_dec_ref(x_21);
x_86 = !lean_is_exclusive(x_85);
if (x_86 == 0)
{
return x_85;
}
else
{
lean_object* x_87; lean_object* x_88; 
x_87 = lean_ctor_get(x_85, 0);
lean_inc(x_87);
lean_dec(x_85);
x_88 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_88, 0, x_87);
return x_88;
}
}
else
{
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; 
x_89 = lean_ctor_get(x_85, 0);
lean_inc(x_89);
lean_dec_ref(x_85);
x_90 = lean_ctor_get(x_89, 1);
lean_inc(x_90);
x_91 = lean_ctor_get(x_90, 1);
x_92 = lean_ctor_get(x_89, 0);
lean_inc(x_92);
lean_dec(x_89);
x_93 = lean_ctor_get(x_90, 0);
lean_inc(x_93);
x_94 = lean_ctor_get(x_91, 0);
lean_inc(x_94);
x_95 = lean_ctor_get(x_91, 1);
lean_inc(x_95);
x_61 = x_77;
x_62 = x_80;
x_63 = x_92;
x_64 = x_90;
x_65 = x_93;
x_66 = x_94;
x_67 = x_95;
goto block_75;
}
}
else
{
uint8_t x_96; 
lean_dec(x_76);
x_96 = !lean_is_exclusive(x_78);
if (x_96 == 0)
{
lean_object* x_97; lean_object* x_98; lean_object* x_99; 
x_97 = lean_ctor_get(x_78, 1);
lean_dec(x_97);
x_98 = lean_ctor_get(x_78, 0);
lean_dec(x_98);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
if (lean_is_scalar(x_19)) {
 x_99 = lean_alloc_ctor(0, 2, 0);
} else {
 x_99 = x_19;
}
lean_ctor_set(x_99, 0, x_5);
lean_ctor_set(x_99, 1, x_6);
lean_inc_ref(x_4);
lean_ctor_set(x_78, 1, x_99);
lean_ctor_set(x_78, 0, x_4);
x_61 = x_77;
x_62 = x_80;
x_63 = x_2;
x_64 = x_78;
x_65 = x_4;
x_66 = x_5;
x_67 = x_6;
goto block_75;
}
else
{
lean_object* x_100; lean_object* x_101; 
lean_dec(x_78);
lean_inc_ref(x_6);
lean_inc_ref(x_5);
if (lean_is_scalar(x_19)) {
 x_100 = lean_alloc_ctor(0, 2, 0);
} else {
 x_100 = x_19;
}
lean_ctor_set(x_100, 0, x_5);
lean_ctor_set(x_100, 1, x_6);
lean_inc_ref(x_4);
x_101 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_101, 0, x_4);
lean_ctor_set(x_101, 1, x_100);
x_61 = x_77;
x_62 = x_80;
x_63 = x_2;
x_64 = x_101;
x_65 = x_4;
x_66 = x_5;
x_67 = x_6;
goto block_75;
}
}
}
block_114:
{
if (x_106 == 0)
{
x_76 = x_105;
x_77 = x_18;
goto block_102;
}
else
{
lean_object* x_107; 
lean_dec(x_105);
x_107 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_18);
if (lean_obj_tag(x_107) == 0)
{
uint8_t x_108; 
lean_dec_ref(x_21);
lean_dec(x_19);
lean_dec_ref(x_6);
lean_dec_ref(x_5);
lean_dec_ref(x_4);
lean_dec_ref(x_2);
x_108 = !lean_is_exclusive(x_107);
if (x_108 == 0)
{
return x_107;
}
else
{
lean_object* x_109; lean_object* x_110; 
x_109 = lean_ctor_get(x_107, 0);
lean_inc(x_109);
lean_dec(x_107);
x_110 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_110, 0, x_109);
return x_110;
}
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; 
x_111 = lean_ctor_get(x_107, 0);
lean_inc(x_111);
lean_dec_ref(x_107);
x_112 = lean_ctor_get(x_111, 0);
lean_inc(x_112);
x_113 = lean_ctor_get(x_111, 1);
lean_inc(x_113);
lean_dec(x_111);
x_76 = x_112;
x_77 = x_113;
goto block_102;
}
}
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
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5, lean_object* x_6) {
_start:
{
lean_object* x_7; 
x_7 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep(x_1, x_2, x_3, x_4, x_5, x_6);
lean_dec_ref(x_1);
return x_7;
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
lean_object* x_24; 
x_24 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decodeOneStep(x_1, x_3, x_4, x_5, x_6, x_7);
if (lean_obj_tag(x_24) == 0)
{
lean_dec(x_2);
return x_24;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_25 = lean_ctor_get(x_24, 0);
lean_inc(x_25);
lean_dec_ref(x_24);
x_26 = lean_ctor_get(x_25, 1);
lean_inc(x_26);
x_27 = lean_ctor_get(x_26, 1);
lean_inc(x_27);
x_28 = lean_ctor_get(x_27, 1);
lean_inc(x_28);
x_29 = lean_ctor_get(x_25, 0);
lean_inc(x_29);
lean_dec(x_25);
x_30 = lean_ctor_get(x_26, 0);
lean_inc(x_30);
lean_dec(x_26);
x_31 = lean_ctor_get(x_27, 0);
lean_inc(x_31);
lean_dec(x_27);
x_32 = lean_ctor_get(x_28, 0);
lean_inc(x_32);
x_33 = lean_ctor_get(x_28, 1);
lean_inc(x_33);
lean_dec(x_28);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_sub(x_2, x_34);
lean_dec(x_2);
x_2 = x_35;
x_3 = x_29;
x_4 = x_30;
x_5 = x_31;
x_6 = x_32;
x_7 = x_33;
goto _start;
}
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_2);
x_37 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_37, 0, x_6);
lean_ctor_set(x_37, 1, x_7);
x_38 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_38, 0, x_5);
lean_ctor_set(x_38, 1, x_37);
x_39 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_39, 0, x_4);
lean_ctor_set(x_39, 1, x_38);
x_40 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_40, 0, x_3);
lean_ctor_set(x_40, 1, x_39);
x_41 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_41, 0, x_40);
return x_41;
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
