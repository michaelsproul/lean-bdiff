// Lean compiler output
// Module: Ffi.Export
// Imports: public import Init public import LeanBdiff.Vcdiff.Encoder public import LeanBdiff.Vcdiff.Decoder
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
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_bdiff_encode(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "invalid VCDIFF magic bytes"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__0_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "unsupported VCDIFF version: "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__1_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "unsupported feature: "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__2_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid header indicator bits: "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__3_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "invalid window indicator bits: "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__4_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "invalid delta indicator bits: "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__5_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "truncated input"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__6_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "varint overflow"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__7 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__7_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "checksum mismatch: expected "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__8 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__8_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = ", got "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__9 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__9_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "encoding length mismatch"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__10 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__10_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "COPY out of bounds: addr="};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__11 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__11_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " size="};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__12 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__12_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " window="};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__13 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__13_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "invalid address mode: "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__14 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__14_value;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__1;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__2;
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decode(lean_object*, lean_object*);
lean_object* lean_string_to_utf8(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
LEAN_EXPORT lean_object* lean_bdiff_decode(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lean_bdiff_encode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder_encode(x_1, x_2);
lean_dec_ref(x_2);
return x_3;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 1;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__2(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lean_bdiff_decode(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder_decode(x_1, x_2);
lean_dec_ref(x_2);
if (lean_obj_tag(x_3) == 0)
{
lean_object* x_4; lean_object* x_5; 
x_4 = lean_ctor_get(x_3, 0);
lean_inc(x_4);
lean_dec_ref(x_3);
switch (lean_obj_tag(x_4)) {
case 0:
{
lean_object* x_10; 
x_10 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__0));
x_5 = x_10;
goto block_9;
}
case 1:
{
uint8_t x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; 
x_11 = lean_ctor_get_uint8(x_4, 0);
lean_dec_ref(x_4);
x_12 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__1));
x_13 = lean_uint8_to_nat(x_11);
x_14 = l_Nat_reprFast(x_13);
x_15 = lean_string_append(x_12, x_14);
lean_dec_ref(x_14);
x_5 = x_15;
goto block_9;
}
case 2:
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_16 = lean_ctor_get(x_4, 0);
lean_inc_ref(x_16);
lean_dec_ref(x_4);
x_17 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__2));
x_18 = lean_string_append(x_17, x_16);
lean_dec_ref(x_16);
x_5 = x_18;
goto block_9;
}
case 3:
{
uint8_t x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_19 = lean_ctor_get_uint8(x_4, 0);
lean_dec_ref(x_4);
x_20 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__3));
x_21 = lean_uint8_to_nat(x_19);
x_22 = l_Nat_reprFast(x_21);
x_23 = lean_string_append(x_20, x_22);
lean_dec_ref(x_22);
x_5 = x_23;
goto block_9;
}
case 4:
{
uint8_t x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
x_24 = lean_ctor_get_uint8(x_4, 0);
lean_dec_ref(x_4);
x_25 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__4));
x_26 = lean_uint8_to_nat(x_24);
x_27 = l_Nat_reprFast(x_26);
x_28 = lean_string_append(x_25, x_27);
lean_dec_ref(x_27);
x_5 = x_28;
goto block_9;
}
case 5:
{
uint8_t x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; 
x_29 = lean_ctor_get_uint8(x_4, 0);
lean_dec_ref(x_4);
x_30 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__5));
x_31 = lean_uint8_to_nat(x_29);
x_32 = l_Nat_reprFast(x_31);
x_33 = lean_string_append(x_30, x_32);
lean_dec_ref(x_32);
x_5 = x_33;
goto block_9;
}
case 6:
{
lean_object* x_34; 
x_34 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__6));
x_5 = x_34;
goto block_9;
}
case 7:
{
lean_object* x_35; 
x_35 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__7));
x_5 = x_35;
goto block_9;
}
case 8:
{
uint32_t x_36; uint32_t x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; 
x_36 = lean_ctor_get_uint32(x_4, 0);
x_37 = lean_ctor_get_uint32(x_4, 4);
lean_dec_ref(x_4);
x_38 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__8));
x_39 = lean_uint32_to_nat(x_36);
x_40 = l_Nat_reprFast(x_39);
x_41 = lean_string_append(x_38, x_40);
lean_dec_ref(x_40);
x_42 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__9));
x_43 = lean_string_append(x_41, x_42);
x_44 = lean_uint32_to_nat(x_37);
x_45 = l_Nat_reprFast(x_44);
x_46 = lean_string_append(x_43, x_45);
lean_dec_ref(x_45);
x_5 = x_46;
goto block_9;
}
case 9:
{
lean_object* x_47; 
x_47 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__10));
x_5 = x_47;
goto block_9;
}
case 11:
{
lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; 
x_48 = lean_ctor_get(x_4, 0);
lean_inc(x_48);
x_49 = lean_ctor_get(x_4, 1);
lean_inc(x_49);
x_50 = lean_ctor_get(x_4, 2);
lean_inc(x_50);
lean_dec_ref(x_4);
x_51 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__11));
x_52 = l_Nat_reprFast(x_48);
x_53 = lean_string_append(x_51, x_52);
lean_dec_ref(x_52);
x_54 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__12));
x_55 = lean_string_append(x_53, x_54);
x_56 = l_Nat_reprFast(x_49);
x_57 = lean_string_append(x_55, x_56);
lean_dec_ref(x_56);
x_58 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__13));
x_59 = lean_string_append(x_57, x_58);
x_60 = l_Nat_reprFast(x_50);
x_61 = lean_string_append(x_59, x_60);
lean_dec_ref(x_60);
x_5 = x_61;
goto block_9;
}
default: 
{
lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_62 = lean_ctor_get(x_4, 0);
lean_inc(x_62);
lean_dec_ref(x_4);
x_63 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___closed__14));
x_64 = l_Nat_reprFast(x_62);
x_65 = lean_string_append(x_63, x_64);
lean_dec_ref(x_64);
x_5 = x_65;
goto block_9;
}
}
block_9:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_6 = lean_string_to_utf8(x_5);
lean_dec_ref(x_5);
x_7 = lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__1;
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_7);
lean_ctor_set(x_8, 1, x_6);
return x_8;
}
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; 
x_66 = lean_ctor_get(x_3, 0);
lean_inc(x_66);
lean_dec_ref(x_3);
x_67 = lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__2;
x_68 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_68, 0, x_67);
lean_ctor_set(x_68, 1, x_66);
return x_68;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dbdiff_Ffi_Export(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Encoder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Decoder(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__1 = _init_lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__1);
lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__2 = _init_lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__2();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Ffi_decode___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
