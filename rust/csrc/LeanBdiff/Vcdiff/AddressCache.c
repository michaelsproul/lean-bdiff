// Lean compiler output
// Module: LeanBdiff.Vcdiff.AddressCache
// Imports: public import Init public import LeanBdiff.Vcdiff.Defs public import LeanBdiff.Vcdiff.Varint
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultNearSize;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultSameSize;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init___boxed__const__1;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_numModes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_numModes___boxed(lean_object*);
uint32_t lean_uint32_of_nat(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update___boxed(lean_object*, lean_object*);
extern uint32_t l_instInhabitedUInt32;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1;
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
lean_object* lean_uint32_to_nat(uint32_t);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(lean_object*);
lean_object* lean_byte_array_size(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___closed__0;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_uint8_of_nat(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_byte_array_mk(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___closed__0_value;
lean_object* lean_uint8_to_nat(uint8_t);
extern uint8_t l_instInhabitedUInt8;
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos___closed__0_value;
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoopPos(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultNearSize(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(4u);
return x_1;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultSameSize(void) {
_start:
{
lean_object* x_1; 
x_1 = lean_unsigned_to_nat(3u);
return x_1;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = 0;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_3 = lean_unsigned_to_nat(0u);
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init___boxed__const__1;
lean_inc(x_1);
x_5 = lean_mk_array(x_1, x_4);
x_6 = lean_unsigned_to_nat(256u);
x_7 = lean_nat_mul(x_2, x_6);
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init___boxed__const__1;
x_9 = lean_mk_array(x_7, x_8);
x_10 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_10, 0, x_1);
lean_ctor_set(x_10, 1, x_2);
lean_ctor_set(x_10, 2, x_5);
lean_ctor_set(x_10, 3, x_3);
lean_ctor_set(x_10, 4, x_9);
return x_10;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_numModes(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_ctor_get(x_1, 0);
x_3 = lean_ctor_get(x_1, 1);
x_4 = lean_unsigned_to_nat(2u);
x_5 = lean_nat_add(x_4, x_2);
x_6 = lean_nat_add(x_5, x_3);
lean_dec(x_5);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_numModes___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_numModes(x_1);
lean_dec_ref(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; uint32_t x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_24; 
x_3 = lean_ctor_get(x_1, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 1);
lean_inc(x_4);
x_5 = lean_ctor_get(x_1, 2);
lean_inc_ref(x_5);
x_6 = lean_ctor_get(x_1, 3);
lean_inc(x_6);
x_7 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_7);
x_8 = lean_uint32_of_nat(x_2);
x_9 = lean_unsigned_to_nat(0u);
x_24 = lean_nat_dec_lt(x_9, x_3);
if (x_24 == 0)
{
x_10 = x_1;
x_11 = x_3;
x_12 = x_4;
x_13 = x_5;
x_14 = x_6;
x_15 = x_7;
goto block_23;
}
else
{
uint8_t x_25; 
x_25 = !lean_is_exclusive(x_1);
if (x_25 == 0)
{
lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; 
x_26 = lean_ctor_get(x_1, 4);
lean_dec(x_26);
x_27 = lean_ctor_get(x_1, 3);
lean_dec(x_27);
x_28 = lean_ctor_get(x_1, 2);
lean_dec(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_dec(x_29);
x_30 = lean_ctor_get(x_1, 0);
lean_dec(x_30);
x_31 = lean_box_uint32(x_8);
x_32 = lean_array_set(x_5, x_6, x_31);
x_33 = lean_unsigned_to_nat(1u);
x_34 = lean_nat_add(x_6, x_33);
lean_dec(x_6);
x_35 = lean_nat_mod(x_34, x_3);
lean_dec(x_34);
lean_inc_ref(x_7);
lean_inc(x_35);
lean_inc_ref(x_32);
lean_inc(x_4);
lean_inc(x_3);
lean_ctor_set(x_1, 3, x_35);
lean_ctor_set(x_1, 2, x_32);
x_10 = x_1;
x_11 = x_3;
x_12 = x_4;
x_13 = x_32;
x_14 = x_35;
x_15 = x_7;
goto block_23;
}
else
{
lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; 
lean_dec(x_1);
x_36 = lean_box_uint32(x_8);
x_37 = lean_array_set(x_5, x_6, x_36);
x_38 = lean_unsigned_to_nat(1u);
x_39 = lean_nat_add(x_6, x_38);
lean_dec(x_6);
x_40 = lean_nat_mod(x_39, x_3);
lean_dec(x_39);
lean_inc_ref(x_7);
lean_inc(x_40);
lean_inc_ref(x_37);
lean_inc(x_4);
lean_inc(x_3);
x_41 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_41, 0, x_3);
lean_ctor_set(x_41, 1, x_4);
lean_ctor_set(x_41, 2, x_37);
lean_ctor_set(x_41, 3, x_40);
lean_ctor_set(x_41, 4, x_7);
x_10 = x_41;
x_11 = x_3;
x_12 = x_4;
x_13 = x_37;
x_14 = x_40;
x_15 = x_7;
goto block_23;
}
}
block_23:
{
uint8_t x_16; 
x_16 = lean_nat_dec_lt(x_9, x_12);
if (x_16 == 0)
{
lean_dec_ref(x_15);
lean_dec(x_14);
lean_dec_ref(x_13);
lean_dec(x_12);
lean_dec(x_11);
return x_10;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; 
lean_dec_ref(x_10);
x_17 = lean_unsigned_to_nat(256u);
x_18 = lean_nat_mul(x_12, x_17);
x_19 = lean_nat_mod(x_2, x_18);
lean_dec(x_18);
x_20 = lean_box_uint32(x_8);
x_21 = lean_array_set(x_15, x_19, x_20);
lean_dec(x_19);
x_22 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_22, 0, x_11);
lean_ctor_set(x_22, 1, x_12);
lean_ctor_set(x_22, 2, x_13);
lean_ctor_set(x_22, 3, x_14);
lean_ctor_set(x_22, 4, x_21);
return x_22;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1(void) {
_start:
{
uint32_t x_1; lean_object* x_2; 
x_1 = l_instInhabitedUInt32;
x_2 = lean_box_uint32(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 1)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; uint32_t x_17; lean_object* x_18; uint8_t x_19; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_13 = lean_nat_sub(x_9, x_12);
x_14 = lean_nat_sub(x_13, x_11);
lean_dec(x_13);
x_15 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1;
x_16 = lean_array_get_borrowed(x_15, x_10, x_14);
x_17 = lean_unbox_uint32(x_16);
x_18 = lean_uint32_to_nat(x_17);
x_19 = lean_nat_dec_le(x_18, x_2);
if (x_19 == 0)
{
lean_dec(x_18);
lean_dec(x_14);
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; uint8_t x_25; 
x_21 = lean_nat_sub(x_2, x_18);
lean_dec(x_18);
x_22 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_21);
lean_dec(x_21);
x_23 = lean_byte_array_size(x_22);
x_24 = lean_byte_array_size(x_4);
x_25 = lean_nat_dec_lt(x_23, x_24);
if (x_25 == 0)
{
lean_dec_ref(x_22);
lean_dec(x_14);
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_27; lean_object* x_28; 
lean_dec_ref(x_4);
lean_dec(x_3);
x_27 = lean_unsigned_to_nat(2u);
x_28 = lean_nat_add(x_27, x_14);
lean_dec(x_14);
x_3 = x_28;
x_4 = x_22;
x_5 = x_12;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___closed__0(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(1u);
x_2 = lean_mk_empty_array_with_capacity(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; uint8_t x_7; 
x_6 = lean_unsigned_to_nat(0u);
x_7 = lean_nat_dec_eq(x_5, x_6);
if (x_7 == 1)
{
lean_object* x_8; 
lean_dec(x_5);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_3);
lean_ctor_set(x_8, 1, x_4);
return x_8;
}
else
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; uint32_t x_34; lean_object* x_35; uint8_t x_36; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 1);
x_11 = lean_ctor_get(x_1, 4);
x_12 = lean_unsigned_to_nat(1u);
x_13 = lean_nat_sub(x_5, x_12);
lean_dec(x_5);
x_14 = lean_nat_sub(x_10, x_13);
x_15 = lean_nat_sub(x_14, x_12);
lean_dec(x_14);
x_28 = lean_unsigned_to_nat(256u);
x_29 = lean_nat_mul(x_15, x_28);
x_30 = lean_nat_mod(x_2, x_28);
x_31 = lean_nat_add(x_29, x_30);
lean_dec(x_30);
lean_dec(x_29);
x_32 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1;
x_33 = lean_array_get_borrowed(x_32, x_11, x_31);
lean_dec(x_31);
x_34 = lean_unbox_uint32(x_33);
x_35 = lean_uint32_to_nat(x_34);
x_36 = lean_nat_dec_eq(x_35, x_2);
lean_dec(x_35);
if (x_36 == 0)
{
lean_dec(x_15);
x_5 = x_13;
goto _start;
}
else
{
uint8_t x_38; 
x_38 = lean_nat_dec_eq(x_2, x_6);
if (x_38 == 0)
{
x_16 = x_36;
goto block_27;
}
else
{
x_16 = x_7;
goto block_27;
}
}
block_27:
{
if (x_16 == 0)
{
lean_dec(x_15);
x_5 = x_13;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; uint8_t x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec(x_13);
lean_dec_ref(x_4);
lean_dec(x_3);
x_18 = lean_unsigned_to_nat(2u);
x_19 = lean_nat_add(x_18, x_9);
x_20 = lean_nat_add(x_19, x_15);
lean_dec(x_15);
lean_dec(x_19);
x_21 = lean_uint8_of_nat(x_2);
x_22 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___closed__0, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___closed__0_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___closed__0);
x_23 = lean_box(x_21);
x_24 = lean_array_push(x_22, x_23);
x_25 = lean_byte_array_mk(x_24);
x_26 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_26, 0, x_20);
lean_ctor_set(x_26, 1, x_25);
return x_26;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes(x_1, x_2, x_3, x_4, x_5);
lean_dec(x_2);
lean_dec_ref(x_1);
return x_6;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_10; lean_object* x_11; uint32_t x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_28; lean_object* x_29; lean_object* x_62; uint8_t x_63; 
x_62 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_2);
x_63 = lean_nat_dec_lt(x_2, x_3);
if (x_63 == 0)
{
lean_object* x_64; 
x_64 = lean_unsigned_to_nat(0u);
x_28 = x_64;
x_29 = x_62;
goto block_61;
}
else
{
lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; uint8_t x_69; 
x_65 = lean_nat_sub(x_3, x_2);
x_66 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_65);
lean_dec(x_65);
x_67 = lean_byte_array_size(x_66);
x_68 = lean_byte_array_size(x_62);
x_69 = lean_nat_dec_lt(x_67, x_68);
if (x_69 == 0)
{
lean_object* x_70; 
lean_dec_ref(x_66);
x_70 = lean_unsigned_to_nat(0u);
x_28 = x_70;
x_29 = x_62;
goto block_61;
}
else
{
lean_object* x_71; 
lean_dec_ref(x_62);
x_71 = lean_unsigned_to_nat(1u);
x_28 = x_71;
x_29 = x_66;
goto block_61;
}
}
block_9:
{
lean_object* x_7; lean_object* x_8; 
x_7 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_7, 0, x_5);
lean_ctor_set(x_7, 1, x_6);
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_4);
lean_ctor_set(x_8, 1, x_7);
return x_8;
}
block_27:
{
uint8_t x_20; 
x_20 = lean_nat_dec_lt(x_10, x_16);
if (x_20 == 0)
{
lean_dec_ref(x_19);
lean_dec(x_18);
lean_dec_ref(x_17);
lean_dec(x_16);
lean_dec(x_15);
x_4 = x_11;
x_5 = x_13;
x_6 = x_14;
goto block_9;
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec_ref(x_14);
x_21 = lean_unsigned_to_nat(256u);
x_22 = lean_nat_mul(x_16, x_21);
x_23 = lean_nat_mod(x_2, x_22);
lean_dec(x_22);
x_24 = lean_box_uint32(x_12);
x_25 = lean_array_set(x_19, x_23, x_24);
lean_dec(x_23);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_15);
lean_ctor_set(x_26, 1, x_16);
lean_ctor_set(x_26, 2, x_17);
lean_ctor_set(x_26, 3, x_18);
lean_ctor_set(x_26, 4, x_25);
x_4 = x_11;
x_5 = x_13;
x_6 = x_26;
goto block_9;
}
}
block_61:
{
lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; uint32_t x_41; lean_object* x_42; uint8_t x_43; 
x_30 = lean_ctor_get(x_1, 0);
lean_inc(x_30);
x_31 = lean_ctor_get(x_1, 1);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 2);
lean_inc_ref(x_32);
x_33 = lean_ctor_get(x_1, 3);
lean_inc(x_33);
x_34 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_34);
lean_inc(x_30);
x_35 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes(x_1, x_2, x_28, x_29, x_30);
x_36 = lean_ctor_get(x_35, 0);
lean_inc(x_36);
x_37 = lean_ctor_get(x_35, 1);
lean_inc(x_37);
lean_dec_ref(x_35);
lean_inc(x_31);
x_38 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes(x_1, x_2, x_36, x_37, x_31);
x_39 = lean_ctor_get(x_38, 0);
lean_inc(x_39);
x_40 = lean_ctor_get(x_38, 1);
lean_inc(x_40);
lean_dec_ref(x_38);
x_41 = lean_uint32_of_nat(x_2);
x_42 = lean_unsigned_to_nat(0u);
x_43 = lean_nat_dec_lt(x_42, x_30);
if (x_43 == 0)
{
x_10 = x_42;
x_11 = x_39;
x_12 = x_41;
x_13 = x_40;
x_14 = x_1;
x_15 = x_30;
x_16 = x_31;
x_17 = x_32;
x_18 = x_33;
x_19 = x_34;
goto block_27;
}
else
{
uint8_t x_44; 
x_44 = !lean_is_exclusive(x_1);
if (x_44 == 0)
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; 
x_45 = lean_ctor_get(x_1, 4);
lean_dec(x_45);
x_46 = lean_ctor_get(x_1, 3);
lean_dec(x_46);
x_47 = lean_ctor_get(x_1, 2);
lean_dec(x_47);
x_48 = lean_ctor_get(x_1, 1);
lean_dec(x_48);
x_49 = lean_ctor_get(x_1, 0);
lean_dec(x_49);
x_50 = lean_box_uint32(x_41);
x_51 = lean_array_set(x_32, x_33, x_50);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_33, x_52);
lean_dec(x_33);
x_54 = lean_nat_mod(x_53, x_30);
lean_dec(x_53);
lean_inc_ref(x_34);
lean_inc(x_54);
lean_inc_ref(x_51);
lean_inc(x_31);
lean_inc(x_30);
lean_ctor_set(x_1, 3, x_54);
lean_ctor_set(x_1, 2, x_51);
x_10 = x_42;
x_11 = x_39;
x_12 = x_41;
x_13 = x_40;
x_14 = x_1;
x_15 = x_30;
x_16 = x_31;
x_17 = x_51;
x_18 = x_54;
x_19 = x_34;
goto block_27;
}
else
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; 
lean_dec(x_1);
x_55 = lean_box_uint32(x_41);
x_56 = lean_array_set(x_32, x_33, x_55);
x_57 = lean_unsigned_to_nat(1u);
x_58 = lean_nat_add(x_33, x_57);
lean_dec(x_33);
x_59 = lean_nat_mod(x_58, x_30);
lean_dec(x_58);
lean_inc_ref(x_34);
lean_inc(x_59);
lean_inc_ref(x_56);
lean_inc(x_31);
lean_inc(x_30);
x_60 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_60, 0, x_30);
lean_ctor_set(x_60, 1, x_31);
lean_ctor_set(x_60, 2, x_56);
lean_ctor_set(x_60, 3, x_59);
lean_ctor_set(x_60, 4, x_34);
x_10 = x_42;
x_11 = x_39;
x_12 = x_41;
x_13 = x_40;
x_14 = x_60;
x_15 = x_30;
x_16 = x_31;
x_17 = x_56;
x_18 = x_59;
x_19 = x_34;
goto block_27;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_encodeAddress(x_1, x_2, x_3);
lean_dec(x_3);
lean_dec(x_2);
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_12; uint32_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; uint8_t x_30; 
x_12 = lean_unsigned_to_nat(0u);
x_30 = lean_nat_dec_eq(x_1, x_12);
if (x_30 == 0)
{
lean_object* x_31; uint8_t x_32; 
x_31 = lean_unsigned_to_nat(1u);
x_32 = lean_nat_dec_eq(x_1, x_31);
if (x_32 == 0)
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_33 = lean_ctor_get(x_4, 0);
lean_inc(x_33);
x_34 = lean_ctor_get(x_4, 1);
lean_inc(x_34);
x_35 = lean_ctor_get(x_4, 2);
lean_inc_ref(x_35);
x_36 = lean_ctor_get(x_4, 3);
lean_inc(x_36);
x_37 = lean_ctor_get(x_4, 4);
lean_inc_ref(x_37);
x_38 = lean_unsigned_to_nat(2u);
x_39 = lean_nat_add(x_38, x_33);
x_40 = lean_nat_dec_lt(x_1, x_39);
if (x_40 == 0)
{
lean_object* x_41; uint8_t x_42; 
x_41 = lean_nat_add(x_39, x_34);
lean_dec(x_39);
x_42 = lean_nat_dec_lt(x_1, x_41);
lean_dec(x_41);
if (x_42 == 0)
{
lean_object* x_43; lean_object* x_44; 
lean_dec_ref(x_37);
lean_dec(x_36);
lean_dec_ref(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_43 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_43, 0, x_1);
x_44 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_44, 0, x_43);
return x_44;
}
else
{
lean_object* x_45; lean_object* x_46; lean_object* x_47; uint8_t x_48; lean_object* x_79; uint8_t x_80; 
x_45 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_45);
x_46 = lean_ctor_get(x_3, 1);
lean_inc(x_46);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_47 = x_3;
} else {
 lean_dec_ref(x_3);
 x_47 = lean_box(0);
}
x_79 = lean_byte_array_size(x_45);
x_80 = lean_nat_dec_lt(x_46, x_79);
if (x_80 == 0)
{
lean_object* x_81; 
lean_dec(x_47);
lean_dec(x_46);
lean_dec_ref(x_45);
lean_dec_ref(x_37);
lean_dec(x_36);
lean_dec_ref(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec_ref(x_4);
lean_dec(x_1);
x_81 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___closed__0));
return x_81;
}
else
{
if (x_80 == 0)
{
uint8_t x_82; lean_object* x_83; lean_object* x_84; uint8_t x_85; 
x_82 = l_instInhabitedUInt8;
x_83 = lean_box(x_82);
x_84 = l_outOfBounds___redArg(x_83);
x_85 = lean_unbox(x_84);
lean_dec(x_84);
x_48 = x_85;
goto block_78;
}
else
{
uint8_t x_86; 
x_86 = lean_byte_array_fget(x_45, x_46);
x_48 = x_86;
goto block_78;
}
}
block_78:
{
lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; uint32_t x_59; lean_object* x_60; uint32_t x_61; uint8_t x_62; 
x_49 = lean_nat_add(x_46, x_31);
lean_dec(x_46);
if (lean_is_scalar(x_47)) {
 x_50 = lean_alloc_ctor(0, 2, 0);
} else {
 x_50 = x_47;
}
lean_ctor_set(x_50, 0, x_45);
lean_ctor_set(x_50, 1, x_49);
x_51 = lean_nat_sub(x_1, x_38);
lean_dec(x_1);
x_52 = lean_nat_sub(x_51, x_33);
lean_dec(x_51);
x_53 = lean_unsigned_to_nat(256u);
x_54 = lean_nat_mul(x_52, x_53);
lean_dec(x_52);
x_55 = lean_uint8_to_nat(x_48);
x_56 = lean_nat_add(x_54, x_55);
lean_dec(x_54);
x_57 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1;
x_58 = lean_array_get_borrowed(x_57, x_37, x_56);
lean_dec(x_56);
x_59 = lean_unbox_uint32(x_58);
x_60 = lean_uint32_to_nat(x_59);
x_61 = lean_uint32_of_nat(x_60);
x_62 = lean_nat_dec_lt(x_12, x_33);
if (x_62 == 0)
{
x_13 = x_61;
x_14 = x_50;
x_15 = x_53;
x_16 = x_60;
x_17 = x_4;
x_18 = x_33;
x_19 = x_34;
x_20 = x_35;
x_21 = x_36;
x_22 = x_37;
goto block_29;
}
else
{
uint8_t x_63; 
x_63 = !lean_is_exclusive(x_4);
if (x_63 == 0)
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; lean_object* x_70; lean_object* x_71; lean_object* x_72; 
x_64 = lean_ctor_get(x_4, 4);
lean_dec(x_64);
x_65 = lean_ctor_get(x_4, 3);
lean_dec(x_65);
x_66 = lean_ctor_get(x_4, 2);
lean_dec(x_66);
x_67 = lean_ctor_get(x_4, 1);
lean_dec(x_67);
x_68 = lean_ctor_get(x_4, 0);
lean_dec(x_68);
x_69 = lean_box_uint32(x_61);
x_70 = lean_array_set(x_35, x_36, x_69);
x_71 = lean_nat_add(x_36, x_31);
lean_dec(x_36);
x_72 = lean_nat_mod(x_71, x_33);
lean_dec(x_71);
lean_inc_ref(x_37);
lean_inc(x_72);
lean_inc_ref(x_70);
lean_inc(x_34);
lean_inc(x_33);
lean_ctor_set(x_4, 3, x_72);
lean_ctor_set(x_4, 2, x_70);
x_13 = x_61;
x_14 = x_50;
x_15 = x_53;
x_16 = x_60;
x_17 = x_4;
x_18 = x_33;
x_19 = x_34;
x_20 = x_70;
x_21 = x_72;
x_22 = x_37;
goto block_29;
}
else
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; 
lean_dec(x_4);
x_73 = lean_box_uint32(x_61);
x_74 = lean_array_set(x_35, x_36, x_73);
x_75 = lean_nat_add(x_36, x_31);
lean_dec(x_36);
x_76 = lean_nat_mod(x_75, x_33);
lean_dec(x_75);
lean_inc_ref(x_37);
lean_inc(x_76);
lean_inc_ref(x_74);
lean_inc(x_34);
lean_inc(x_33);
x_77 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_77, 0, x_33);
lean_ctor_set(x_77, 1, x_34);
lean_ctor_set(x_77, 2, x_74);
lean_ctor_set(x_77, 3, x_76);
lean_ctor_set(x_77, 4, x_37);
x_13 = x_61;
x_14 = x_50;
x_15 = x_53;
x_16 = x_60;
x_17 = x_77;
x_18 = x_33;
x_19 = x_34;
x_20 = x_74;
x_21 = x_76;
x_22 = x_37;
goto block_29;
}
}
}
}
}
else
{
lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; 
lean_dec(x_39);
x_87 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_87);
x_88 = lean_ctor_get(x_3, 1);
lean_inc(x_88);
lean_dec_ref(x_3);
x_89 = lean_unsigned_to_nat(5u);
x_90 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_87, x_88, x_12, x_89);
if (lean_obj_tag(x_90) == 0)
{
uint8_t x_91; 
lean_dec_ref(x_37);
lean_dec(x_36);
lean_dec_ref(x_35);
lean_dec(x_34);
lean_dec(x_33);
lean_dec_ref(x_4);
lean_dec(x_1);
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
lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; lean_object* x_101; uint32_t x_102; lean_object* x_103; lean_object* x_104; lean_object* x_105; uint32_t x_110; lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; uint8_t x_125; 
x_94 = lean_ctor_get(x_90, 0);
lean_inc(x_94);
if (lean_is_exclusive(x_90)) {
 lean_ctor_release(x_90, 0);
 x_95 = x_90;
} else {
 lean_dec_ref(x_90);
 x_95 = lean_box(0);
}
x_96 = lean_ctor_get(x_94, 0);
lean_inc(x_96);
x_97 = lean_ctor_get(x_94, 1);
lean_inc(x_97);
if (lean_is_exclusive(x_94)) {
 lean_ctor_release(x_94, 0);
 lean_ctor_release(x_94, 1);
 x_98 = x_94;
} else {
 lean_dec_ref(x_94);
 x_98 = lean_box(0);
}
x_99 = lean_nat_sub(x_1, x_38);
lean_dec(x_1);
x_100 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1;
x_101 = lean_array_get_borrowed(x_100, x_35, x_99);
lean_dec(x_99);
x_102 = lean_unbox_uint32(x_101);
x_103 = lean_uint32_to_nat(x_102);
x_104 = lean_nat_add(x_103, x_96);
lean_dec(x_96);
lean_dec(x_103);
x_110 = lean_uint32_of_nat(x_104);
x_125 = lean_nat_dec_lt(x_12, x_33);
if (x_125 == 0)
{
x_111 = x_4;
x_112 = x_33;
x_113 = x_34;
x_114 = x_35;
x_115 = x_36;
x_116 = x_37;
goto block_124;
}
else
{
uint8_t x_126; 
x_126 = !lean_is_exclusive(x_4);
if (x_126 == 0)
{
lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
x_127 = lean_ctor_get(x_4, 4);
lean_dec(x_127);
x_128 = lean_ctor_get(x_4, 3);
lean_dec(x_128);
x_129 = lean_ctor_get(x_4, 2);
lean_dec(x_129);
x_130 = lean_ctor_get(x_4, 1);
lean_dec(x_130);
x_131 = lean_ctor_get(x_4, 0);
lean_dec(x_131);
x_132 = lean_box_uint32(x_110);
x_133 = lean_array_set(x_35, x_36, x_132);
x_134 = lean_nat_add(x_36, x_31);
lean_dec(x_36);
x_135 = lean_nat_mod(x_134, x_33);
lean_dec(x_134);
lean_inc_ref(x_37);
lean_inc(x_135);
lean_inc_ref(x_133);
lean_inc(x_34);
lean_inc(x_33);
lean_ctor_set(x_4, 3, x_135);
lean_ctor_set(x_4, 2, x_133);
x_111 = x_4;
x_112 = x_33;
x_113 = x_34;
x_114 = x_133;
x_115 = x_135;
x_116 = x_37;
goto block_124;
}
else
{
lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; 
lean_dec(x_4);
x_136 = lean_box_uint32(x_110);
x_137 = lean_array_set(x_35, x_36, x_136);
x_138 = lean_nat_add(x_36, x_31);
lean_dec(x_36);
x_139 = lean_nat_mod(x_138, x_33);
lean_dec(x_138);
lean_inc_ref(x_37);
lean_inc(x_139);
lean_inc_ref(x_137);
lean_inc(x_34);
lean_inc(x_33);
x_140 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_140, 0, x_33);
lean_ctor_set(x_140, 1, x_34);
lean_ctor_set(x_140, 2, x_137);
lean_ctor_set(x_140, 3, x_139);
lean_ctor_set(x_140, 4, x_37);
x_111 = x_140;
x_112 = x_33;
x_113 = x_34;
x_114 = x_137;
x_115 = x_139;
x_116 = x_37;
goto block_124;
}
}
block_109:
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; 
if (lean_is_scalar(x_98)) {
 x_106 = lean_alloc_ctor(0, 2, 0);
} else {
 x_106 = x_98;
}
lean_ctor_set(x_106, 0, x_97);
lean_ctor_set(x_106, 1, x_105);
x_107 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_107, 0, x_104);
lean_ctor_set(x_107, 1, x_106);
if (lean_is_scalar(x_95)) {
 x_108 = lean_alloc_ctor(1, 1, 0);
} else {
 x_108 = x_95;
}
lean_ctor_set(x_108, 0, x_107);
return x_108;
}
block_124:
{
uint8_t x_117; 
x_117 = lean_nat_dec_lt(x_12, x_113);
if (x_117 == 0)
{
lean_dec_ref(x_116);
lean_dec(x_115);
lean_dec_ref(x_114);
lean_dec(x_113);
lean_dec(x_112);
x_105 = x_111;
goto block_109;
}
else
{
lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; 
lean_dec_ref(x_111);
x_118 = lean_unsigned_to_nat(256u);
x_119 = lean_nat_mul(x_113, x_118);
x_120 = lean_nat_mod(x_104, x_119);
lean_dec(x_119);
x_121 = lean_box_uint32(x_110);
x_122 = lean_array_set(x_116, x_120, x_121);
lean_dec(x_120);
x_123 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_123, 0, x_112);
lean_ctor_set(x_123, 1, x_113);
lean_ctor_set(x_123, 2, x_114);
lean_ctor_set(x_123, 3, x_115);
lean_ctor_set(x_123, 4, x_122);
x_105 = x_123;
goto block_109;
}
}
}
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; 
lean_dec(x_1);
x_141 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_141);
x_142 = lean_ctor_get(x_3, 1);
lean_inc(x_142);
lean_dec_ref(x_3);
x_143 = lean_unsigned_to_nat(5u);
x_144 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_141, x_142, x_12, x_143);
if (lean_obj_tag(x_144) == 0)
{
uint8_t x_145; 
lean_dec_ref(x_4);
x_145 = !lean_is_exclusive(x_144);
if (x_145 == 0)
{
return x_144;
}
else
{
lean_object* x_146; lean_object* x_147; 
x_146 = lean_ctor_get(x_144, 0);
lean_inc(x_146);
lean_dec(x_144);
x_147 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_147, 0, x_146);
return x_147;
}
}
else
{
lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; lean_object* x_155; lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; uint32_t x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; uint8_t x_179; 
x_148 = lean_ctor_get(x_144, 0);
lean_inc(x_148);
if (lean_is_exclusive(x_144)) {
 lean_ctor_release(x_144, 0);
 x_149 = x_144;
} else {
 lean_dec_ref(x_144);
 x_149 = lean_box(0);
}
x_150 = lean_ctor_get(x_148, 0);
lean_inc(x_150);
x_151 = lean_ctor_get(x_148, 1);
lean_inc(x_151);
if (lean_is_exclusive(x_148)) {
 lean_ctor_release(x_148, 0);
 lean_ctor_release(x_148, 1);
 x_152 = x_148;
} else {
 lean_dec_ref(x_148);
 x_152 = lean_box(0);
}
x_153 = lean_ctor_get(x_4, 0);
lean_inc(x_153);
x_154 = lean_ctor_get(x_4, 1);
lean_inc(x_154);
x_155 = lean_ctor_get(x_4, 2);
lean_inc_ref(x_155);
x_156 = lean_ctor_get(x_4, 3);
lean_inc(x_156);
x_157 = lean_ctor_get(x_4, 4);
lean_inc_ref(x_157);
x_158 = lean_nat_sub(x_2, x_150);
lean_dec(x_150);
x_164 = lean_uint32_of_nat(x_158);
x_179 = lean_nat_dec_lt(x_12, x_153);
if (x_179 == 0)
{
x_165 = x_4;
x_166 = x_153;
x_167 = x_154;
x_168 = x_155;
x_169 = x_156;
x_170 = x_157;
goto block_178;
}
else
{
uint8_t x_180; 
x_180 = !lean_is_exclusive(x_4);
if (x_180 == 0)
{
lean_object* x_181; lean_object* x_182; lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_189; 
x_181 = lean_ctor_get(x_4, 4);
lean_dec(x_181);
x_182 = lean_ctor_get(x_4, 3);
lean_dec(x_182);
x_183 = lean_ctor_get(x_4, 2);
lean_dec(x_183);
x_184 = lean_ctor_get(x_4, 1);
lean_dec(x_184);
x_185 = lean_ctor_get(x_4, 0);
lean_dec(x_185);
x_186 = lean_box_uint32(x_164);
x_187 = lean_array_set(x_155, x_156, x_186);
x_188 = lean_nat_add(x_156, x_31);
lean_dec(x_156);
x_189 = lean_nat_mod(x_188, x_153);
lean_dec(x_188);
lean_inc_ref(x_157);
lean_inc(x_189);
lean_inc_ref(x_187);
lean_inc(x_154);
lean_inc(x_153);
lean_ctor_set(x_4, 3, x_189);
lean_ctor_set(x_4, 2, x_187);
x_165 = x_4;
x_166 = x_153;
x_167 = x_154;
x_168 = x_187;
x_169 = x_189;
x_170 = x_157;
goto block_178;
}
else
{
lean_object* x_190; lean_object* x_191; lean_object* x_192; lean_object* x_193; lean_object* x_194; 
lean_dec(x_4);
x_190 = lean_box_uint32(x_164);
x_191 = lean_array_set(x_155, x_156, x_190);
x_192 = lean_nat_add(x_156, x_31);
lean_dec(x_156);
x_193 = lean_nat_mod(x_192, x_153);
lean_dec(x_192);
lean_inc_ref(x_157);
lean_inc(x_193);
lean_inc_ref(x_191);
lean_inc(x_154);
lean_inc(x_153);
x_194 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_194, 0, x_153);
lean_ctor_set(x_194, 1, x_154);
lean_ctor_set(x_194, 2, x_191);
lean_ctor_set(x_194, 3, x_193);
lean_ctor_set(x_194, 4, x_157);
x_165 = x_194;
x_166 = x_153;
x_167 = x_154;
x_168 = x_191;
x_169 = x_193;
x_170 = x_157;
goto block_178;
}
}
block_163:
{
lean_object* x_160; lean_object* x_161; lean_object* x_162; 
if (lean_is_scalar(x_152)) {
 x_160 = lean_alloc_ctor(0, 2, 0);
} else {
 x_160 = x_152;
}
lean_ctor_set(x_160, 0, x_151);
lean_ctor_set(x_160, 1, x_159);
x_161 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_161, 0, x_158);
lean_ctor_set(x_161, 1, x_160);
if (lean_is_scalar(x_149)) {
 x_162 = lean_alloc_ctor(1, 1, 0);
} else {
 x_162 = x_149;
}
lean_ctor_set(x_162, 0, x_161);
return x_162;
}
block_178:
{
uint8_t x_171; 
x_171 = lean_nat_dec_lt(x_12, x_167);
if (x_171 == 0)
{
lean_dec_ref(x_170);
lean_dec(x_169);
lean_dec_ref(x_168);
lean_dec(x_167);
lean_dec(x_166);
x_159 = x_165;
goto block_163;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; 
lean_dec_ref(x_165);
x_172 = lean_unsigned_to_nat(256u);
x_173 = lean_nat_mul(x_167, x_172);
x_174 = lean_nat_mod(x_158, x_173);
lean_dec(x_173);
x_175 = lean_box_uint32(x_164);
x_176 = lean_array_set(x_170, x_174, x_175);
lean_dec(x_174);
x_177 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_177, 0, x_166);
lean_ctor_set(x_177, 1, x_167);
lean_ctor_set(x_177, 2, x_168);
lean_ctor_set(x_177, 3, x_169);
lean_ctor_set(x_177, 4, x_176);
x_159 = x_177;
goto block_163;
}
}
}
}
}
else
{
lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; 
lean_dec(x_1);
x_195 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_195);
x_196 = lean_ctor_get(x_3, 1);
lean_inc(x_196);
lean_dec_ref(x_3);
x_197 = lean_unsigned_to_nat(5u);
x_198 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_195, x_196, x_12, x_197);
if (lean_obj_tag(x_198) == 0)
{
uint8_t x_199; 
lean_dec_ref(x_4);
x_199 = !lean_is_exclusive(x_198);
if (x_199 == 0)
{
return x_198;
}
else
{
lean_object* x_200; lean_object* x_201; 
x_200 = lean_ctor_get(x_198, 0);
lean_inc(x_200);
lean_dec(x_198);
x_201 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_201, 0, x_200);
return x_201;
}
}
else
{
lean_object* x_202; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; lean_object* x_212; lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; uint32_t x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; lean_object* x_222; lean_object* x_223; uint8_t x_232; 
x_202 = lean_ctor_get(x_198, 0);
lean_inc(x_202);
if (lean_is_exclusive(x_198)) {
 lean_ctor_release(x_198, 0);
 x_203 = x_198;
} else {
 lean_dec_ref(x_198);
 x_203 = lean_box(0);
}
x_204 = lean_ctor_get(x_202, 0);
lean_inc(x_204);
x_205 = lean_ctor_get(x_202, 1);
lean_inc(x_205);
if (lean_is_exclusive(x_202)) {
 lean_ctor_release(x_202, 0);
 lean_ctor_release(x_202, 1);
 x_206 = x_202;
} else {
 lean_dec_ref(x_202);
 x_206 = lean_box(0);
}
x_212 = lean_ctor_get(x_4, 0);
lean_inc(x_212);
x_213 = lean_ctor_get(x_4, 1);
lean_inc(x_213);
x_214 = lean_ctor_get(x_4, 2);
lean_inc_ref(x_214);
x_215 = lean_ctor_get(x_4, 3);
lean_inc(x_215);
x_216 = lean_ctor_get(x_4, 4);
lean_inc_ref(x_216);
x_217 = lean_uint32_of_nat(x_204);
x_232 = lean_nat_dec_lt(x_12, x_212);
if (x_232 == 0)
{
x_218 = x_4;
x_219 = x_212;
x_220 = x_213;
x_221 = x_214;
x_222 = x_215;
x_223 = x_216;
goto block_231;
}
else
{
uint8_t x_233; 
x_233 = !lean_is_exclusive(x_4);
if (x_233 == 0)
{
lean_object* x_234; lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; lean_object* x_241; lean_object* x_242; lean_object* x_243; 
x_234 = lean_ctor_get(x_4, 4);
lean_dec(x_234);
x_235 = lean_ctor_get(x_4, 3);
lean_dec(x_235);
x_236 = lean_ctor_get(x_4, 2);
lean_dec(x_236);
x_237 = lean_ctor_get(x_4, 1);
lean_dec(x_237);
x_238 = lean_ctor_get(x_4, 0);
lean_dec(x_238);
x_239 = lean_box_uint32(x_217);
x_240 = lean_array_set(x_214, x_215, x_239);
x_241 = lean_unsigned_to_nat(1u);
x_242 = lean_nat_add(x_215, x_241);
lean_dec(x_215);
x_243 = lean_nat_mod(x_242, x_212);
lean_dec(x_242);
lean_inc_ref(x_216);
lean_inc(x_243);
lean_inc_ref(x_240);
lean_inc(x_213);
lean_inc(x_212);
lean_ctor_set(x_4, 3, x_243);
lean_ctor_set(x_4, 2, x_240);
x_218 = x_4;
x_219 = x_212;
x_220 = x_213;
x_221 = x_240;
x_222 = x_243;
x_223 = x_216;
goto block_231;
}
else
{
lean_object* x_244; lean_object* x_245; lean_object* x_246; lean_object* x_247; lean_object* x_248; lean_object* x_249; 
lean_dec(x_4);
x_244 = lean_box_uint32(x_217);
x_245 = lean_array_set(x_214, x_215, x_244);
x_246 = lean_unsigned_to_nat(1u);
x_247 = lean_nat_add(x_215, x_246);
lean_dec(x_215);
x_248 = lean_nat_mod(x_247, x_212);
lean_dec(x_247);
lean_inc_ref(x_216);
lean_inc(x_248);
lean_inc_ref(x_245);
lean_inc(x_213);
lean_inc(x_212);
x_249 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_249, 0, x_212);
lean_ctor_set(x_249, 1, x_213);
lean_ctor_set(x_249, 2, x_245);
lean_ctor_set(x_249, 3, x_248);
lean_ctor_set(x_249, 4, x_216);
x_218 = x_249;
x_219 = x_212;
x_220 = x_213;
x_221 = x_245;
x_222 = x_248;
x_223 = x_216;
goto block_231;
}
}
block_211:
{
lean_object* x_208; lean_object* x_209; lean_object* x_210; 
if (lean_is_scalar(x_206)) {
 x_208 = lean_alloc_ctor(0, 2, 0);
} else {
 x_208 = x_206;
}
lean_ctor_set(x_208, 0, x_205);
lean_ctor_set(x_208, 1, x_207);
x_209 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_209, 0, x_204);
lean_ctor_set(x_209, 1, x_208);
if (lean_is_scalar(x_203)) {
 x_210 = lean_alloc_ctor(1, 1, 0);
} else {
 x_210 = x_203;
}
lean_ctor_set(x_210, 0, x_209);
return x_210;
}
block_231:
{
uint8_t x_224; 
x_224 = lean_nat_dec_lt(x_12, x_220);
if (x_224 == 0)
{
lean_dec_ref(x_223);
lean_dec(x_222);
lean_dec_ref(x_221);
lean_dec(x_220);
lean_dec(x_219);
x_207 = x_218;
goto block_211;
}
else
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; 
lean_dec_ref(x_218);
x_225 = lean_unsigned_to_nat(256u);
x_226 = lean_nat_mul(x_220, x_225);
x_227 = lean_nat_mod(x_204, x_226);
lean_dec(x_226);
x_228 = lean_box_uint32(x_217);
x_229 = lean_array_set(x_223, x_227, x_228);
lean_dec(x_227);
x_230 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_230, 0, x_219);
lean_ctor_set(x_230, 1, x_220);
lean_ctor_set(x_230, 2, x_221);
lean_ctor_set(x_230, 3, x_222);
lean_ctor_set(x_230, 4, x_229);
x_207 = x_230;
goto block_211;
}
}
}
}
block_11:
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_8, 0, x_5);
lean_ctor_set(x_8, 1, x_7);
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_10, 0, x_9);
return x_10;
}
block_29:
{
uint8_t x_23; 
x_23 = lean_nat_dec_lt(x_12, x_19);
if (x_23 == 0)
{
lean_dec_ref(x_22);
lean_dec(x_21);
lean_dec_ref(x_20);
lean_dec(x_19);
lean_dec(x_18);
x_5 = x_14;
x_6 = x_16;
x_7 = x_17;
goto block_11;
}
else
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; 
lean_dec_ref(x_17);
x_24 = lean_nat_mul(x_19, x_15);
x_25 = lean_nat_mod(x_16, x_24);
lean_dec(x_24);
x_26 = lean_box_uint32(x_13);
x_27 = lean_array_set(x_22, x_25, x_26);
lean_dec(x_25);
x_28 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_28, 0, x_18);
lean_ctor_set(x_28, 1, x_19);
lean_ctor_set(x_28, 2, x_20);
lean_ctor_set(x_28, 3, x_21);
lean_ctor_set(x_28, 4, x_27);
x_5 = x_14;
x_6 = x_16;
x_7 = x_28;
goto block_11;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; 
x_5 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(x_1, x_2, x_3, x_4);
lean_dec(x_2);
return x_5;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_13; uint32_t x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; uint8_t x_31; 
x_13 = lean_unsigned_to_nat(0u);
x_31 = lean_nat_dec_eq(x_1, x_13);
if (x_31 == 0)
{
lean_object* x_32; uint8_t x_33; 
x_32 = lean_unsigned_to_nat(1u);
x_33 = lean_nat_dec_eq(x_1, x_32);
if (x_33 == 0)
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; lean_object* x_70; uint8_t x_71; 
x_34 = lean_ctor_get(x_5, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_5, 1);
lean_inc(x_35);
x_36 = lean_ctor_get(x_5, 2);
lean_inc_ref(x_36);
x_37 = lean_ctor_get(x_5, 3);
lean_inc(x_37);
x_38 = lean_ctor_get(x_5, 4);
lean_inc_ref(x_38);
x_39 = lean_unsigned_to_nat(2u);
x_70 = lean_nat_add(x_39, x_34);
x_71 = lean_nat_dec_lt(x_1, x_70);
if (x_71 == 0)
{
lean_object* x_72; uint8_t x_73; 
x_72 = lean_nat_add(x_70, x_35);
lean_dec(x_70);
x_73 = lean_nat_dec_lt(x_1, x_72);
lean_dec(x_72);
if (x_73 == 0)
{
lean_object* x_74; lean_object* x_75; 
lean_dec_ref(x_38);
lean_dec(x_37);
lean_dec_ref(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec_ref(x_5);
lean_dec(x_4);
x_74 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_74, 0, x_1);
x_75 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_75, 0, x_74);
return x_75;
}
else
{
lean_object* x_76; uint8_t x_77; 
x_76 = lean_byte_array_size(x_3);
x_77 = lean_nat_dec_lt(x_4, x_76);
if (x_77 == 0)
{
lean_object* x_78; 
lean_dec_ref(x_38);
lean_dec(x_37);
lean_dec_ref(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec_ref(x_5);
lean_dec(x_4);
lean_dec(x_1);
x_78 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos___closed__0));
return x_78;
}
else
{
if (x_77 == 0)
{
uint8_t x_79; lean_object* x_80; lean_object* x_81; uint8_t x_82; 
x_79 = l_instInhabitedUInt8;
x_80 = lean_box(x_79);
x_81 = l_outOfBounds___redArg(x_80);
x_82 = lean_unbox(x_81);
lean_dec(x_81);
x_40 = x_82;
goto block_69;
}
else
{
uint8_t x_83; 
x_83 = lean_byte_array_fget(x_3, x_4);
x_40 = x_83;
goto block_69;
}
}
}
}
else
{
lean_object* x_84; lean_object* x_85; 
lean_dec(x_70);
x_84 = lean_unsigned_to_nat(5u);
x_85 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoopPos(x_3, x_4, x_13, x_84);
if (lean_obj_tag(x_85) == 0)
{
uint8_t x_86; 
lean_dec_ref(x_38);
lean_dec(x_37);
lean_dec_ref(x_36);
lean_dec(x_35);
lean_dec(x_34);
lean_dec_ref(x_5);
lean_dec(x_1);
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
lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; uint32_t x_97; lean_object* x_98; lean_object* x_99; lean_object* x_100; uint32_t x_105; lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; lean_object* x_111; uint8_t x_120; 
x_89 = lean_ctor_get(x_85, 0);
lean_inc(x_89);
if (lean_is_exclusive(x_85)) {
 lean_ctor_release(x_85, 0);
 x_90 = x_85;
} else {
 lean_dec_ref(x_85);
 x_90 = lean_box(0);
}
x_91 = lean_ctor_get(x_89, 0);
lean_inc(x_91);
x_92 = lean_ctor_get(x_89, 1);
lean_inc(x_92);
if (lean_is_exclusive(x_89)) {
 lean_ctor_release(x_89, 0);
 lean_ctor_release(x_89, 1);
 x_93 = x_89;
} else {
 lean_dec_ref(x_89);
 x_93 = lean_box(0);
}
x_94 = lean_nat_sub(x_1, x_39);
lean_dec(x_1);
x_95 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1;
x_96 = lean_array_get_borrowed(x_95, x_36, x_94);
lean_dec(x_94);
x_97 = lean_unbox_uint32(x_96);
x_98 = lean_uint32_to_nat(x_97);
x_99 = lean_nat_add(x_98, x_91);
lean_dec(x_91);
lean_dec(x_98);
x_105 = lean_uint32_of_nat(x_99);
x_120 = lean_nat_dec_lt(x_13, x_34);
if (x_120 == 0)
{
x_106 = x_5;
x_107 = x_34;
x_108 = x_35;
x_109 = x_36;
x_110 = x_37;
x_111 = x_38;
goto block_119;
}
else
{
uint8_t x_121; 
x_121 = !lean_is_exclusive(x_5);
if (x_121 == 0)
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; lean_object* x_130; 
x_122 = lean_ctor_get(x_5, 4);
lean_dec(x_122);
x_123 = lean_ctor_get(x_5, 3);
lean_dec(x_123);
x_124 = lean_ctor_get(x_5, 2);
lean_dec(x_124);
x_125 = lean_ctor_get(x_5, 1);
lean_dec(x_125);
x_126 = lean_ctor_get(x_5, 0);
lean_dec(x_126);
x_127 = lean_box_uint32(x_105);
x_128 = lean_array_set(x_36, x_37, x_127);
x_129 = lean_nat_add(x_37, x_32);
lean_dec(x_37);
x_130 = lean_nat_mod(x_129, x_34);
lean_dec(x_129);
lean_inc_ref(x_38);
lean_inc(x_130);
lean_inc_ref(x_128);
lean_inc(x_35);
lean_inc(x_34);
lean_ctor_set(x_5, 3, x_130);
lean_ctor_set(x_5, 2, x_128);
x_106 = x_5;
x_107 = x_34;
x_108 = x_35;
x_109 = x_128;
x_110 = x_130;
x_111 = x_38;
goto block_119;
}
else
{
lean_object* x_131; lean_object* x_132; lean_object* x_133; lean_object* x_134; lean_object* x_135; 
lean_dec(x_5);
x_131 = lean_box_uint32(x_105);
x_132 = lean_array_set(x_36, x_37, x_131);
x_133 = lean_nat_add(x_37, x_32);
lean_dec(x_37);
x_134 = lean_nat_mod(x_133, x_34);
lean_dec(x_133);
lean_inc_ref(x_38);
lean_inc(x_134);
lean_inc_ref(x_132);
lean_inc(x_35);
lean_inc(x_34);
x_135 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_135, 0, x_34);
lean_ctor_set(x_135, 1, x_35);
lean_ctor_set(x_135, 2, x_132);
lean_ctor_set(x_135, 3, x_134);
lean_ctor_set(x_135, 4, x_38);
x_106 = x_135;
x_107 = x_34;
x_108 = x_35;
x_109 = x_132;
x_110 = x_134;
x_111 = x_38;
goto block_119;
}
}
block_104:
{
lean_object* x_101; lean_object* x_102; lean_object* x_103; 
if (lean_is_scalar(x_93)) {
 x_101 = lean_alloc_ctor(0, 2, 0);
} else {
 x_101 = x_93;
}
lean_ctor_set(x_101, 0, x_92);
lean_ctor_set(x_101, 1, x_100);
x_102 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_102, 0, x_99);
lean_ctor_set(x_102, 1, x_101);
if (lean_is_scalar(x_90)) {
 x_103 = lean_alloc_ctor(1, 1, 0);
} else {
 x_103 = x_90;
}
lean_ctor_set(x_103, 0, x_102);
return x_103;
}
block_119:
{
uint8_t x_112; 
x_112 = lean_nat_dec_lt(x_13, x_108);
if (x_112 == 0)
{
lean_dec_ref(x_111);
lean_dec(x_110);
lean_dec_ref(x_109);
lean_dec(x_108);
lean_dec(x_107);
x_100 = x_106;
goto block_104;
}
else
{
lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; 
lean_dec_ref(x_106);
x_113 = lean_unsigned_to_nat(256u);
x_114 = lean_nat_mul(x_108, x_113);
x_115 = lean_nat_mod(x_99, x_114);
lean_dec(x_114);
x_116 = lean_box_uint32(x_105);
x_117 = lean_array_set(x_111, x_115, x_116);
lean_dec(x_115);
x_118 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_118, 0, x_107);
lean_ctor_set(x_118, 1, x_108);
lean_ctor_set(x_118, 2, x_109);
lean_ctor_set(x_118, 3, x_110);
lean_ctor_set(x_118, 4, x_117);
x_100 = x_118;
goto block_104;
}
}
}
}
block_69:
{
lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; uint32_t x_49; lean_object* x_50; lean_object* x_51; uint32_t x_52; uint8_t x_53; 
x_41 = lean_nat_sub(x_1, x_39);
lean_dec(x_1);
x_42 = lean_nat_sub(x_41, x_34);
lean_dec(x_41);
x_43 = lean_unsigned_to_nat(256u);
x_44 = lean_nat_mul(x_42, x_43);
lean_dec(x_42);
x_45 = lean_uint8_to_nat(x_40);
x_46 = lean_nat_add(x_44, x_45);
lean_dec(x_44);
x_47 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1;
x_48 = lean_array_get_borrowed(x_47, x_38, x_46);
lean_dec(x_46);
x_49 = lean_unbox_uint32(x_48);
x_50 = lean_uint32_to_nat(x_49);
x_51 = lean_nat_add(x_4, x_32);
lean_dec(x_4);
x_52 = lean_uint32_of_nat(x_50);
x_53 = lean_nat_dec_lt(x_13, x_34);
if (x_53 == 0)
{
x_14 = x_52;
x_15 = x_51;
x_16 = x_43;
x_17 = x_50;
x_18 = x_5;
x_19 = x_34;
x_20 = x_35;
x_21 = x_36;
x_22 = x_37;
x_23 = x_38;
goto block_30;
}
else
{
uint8_t x_54; 
x_54 = !lean_is_exclusive(x_5);
if (x_54 == 0)
{
lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; 
x_55 = lean_ctor_get(x_5, 4);
lean_dec(x_55);
x_56 = lean_ctor_get(x_5, 3);
lean_dec(x_56);
x_57 = lean_ctor_get(x_5, 2);
lean_dec(x_57);
x_58 = lean_ctor_get(x_5, 1);
lean_dec(x_58);
x_59 = lean_ctor_get(x_5, 0);
lean_dec(x_59);
x_60 = lean_box_uint32(x_52);
x_61 = lean_array_set(x_36, x_37, x_60);
x_62 = lean_nat_add(x_37, x_32);
lean_dec(x_37);
x_63 = lean_nat_mod(x_62, x_34);
lean_dec(x_62);
lean_inc_ref(x_38);
lean_inc(x_63);
lean_inc_ref(x_61);
lean_inc(x_35);
lean_inc(x_34);
lean_ctor_set(x_5, 3, x_63);
lean_ctor_set(x_5, 2, x_61);
x_14 = x_52;
x_15 = x_51;
x_16 = x_43;
x_17 = x_50;
x_18 = x_5;
x_19 = x_34;
x_20 = x_35;
x_21 = x_61;
x_22 = x_63;
x_23 = x_38;
goto block_30;
}
else
{
lean_object* x_64; lean_object* x_65; lean_object* x_66; lean_object* x_67; lean_object* x_68; 
lean_dec(x_5);
x_64 = lean_box_uint32(x_52);
x_65 = lean_array_set(x_36, x_37, x_64);
x_66 = lean_nat_add(x_37, x_32);
lean_dec(x_37);
x_67 = lean_nat_mod(x_66, x_34);
lean_dec(x_66);
lean_inc_ref(x_38);
lean_inc(x_67);
lean_inc_ref(x_65);
lean_inc(x_35);
lean_inc(x_34);
x_68 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_68, 0, x_34);
lean_ctor_set(x_68, 1, x_35);
lean_ctor_set(x_68, 2, x_65);
lean_ctor_set(x_68, 3, x_67);
lean_ctor_set(x_68, 4, x_38);
x_14 = x_52;
x_15 = x_51;
x_16 = x_43;
x_17 = x_50;
x_18 = x_68;
x_19 = x_34;
x_20 = x_35;
x_21 = x_65;
x_22 = x_67;
x_23 = x_38;
goto block_30;
}
}
}
}
else
{
lean_object* x_136; lean_object* x_137; 
lean_dec(x_1);
x_136 = lean_unsigned_to_nat(5u);
x_137 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoopPos(x_3, x_4, x_13, x_136);
if (lean_obj_tag(x_137) == 0)
{
uint8_t x_138; 
lean_dec_ref(x_5);
x_138 = !lean_is_exclusive(x_137);
if (x_138 == 0)
{
return x_137;
}
else
{
lean_object* x_139; lean_object* x_140; 
x_139 = lean_ctor_get(x_137, 0);
lean_inc(x_139);
lean_dec(x_137);
x_140 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_140, 0, x_139);
return x_140;
}
}
else
{
lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; uint32_t x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; lean_object* x_161; lean_object* x_162; lean_object* x_163; uint8_t x_172; 
x_141 = lean_ctor_get(x_137, 0);
lean_inc(x_141);
if (lean_is_exclusive(x_137)) {
 lean_ctor_release(x_137, 0);
 x_142 = x_137;
} else {
 lean_dec_ref(x_137);
 x_142 = lean_box(0);
}
x_143 = lean_ctor_get(x_141, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_141, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_141)) {
 lean_ctor_release(x_141, 0);
 lean_ctor_release(x_141, 1);
 x_145 = x_141;
} else {
 lean_dec_ref(x_141);
 x_145 = lean_box(0);
}
x_146 = lean_ctor_get(x_5, 0);
lean_inc(x_146);
x_147 = lean_ctor_get(x_5, 1);
lean_inc(x_147);
x_148 = lean_ctor_get(x_5, 2);
lean_inc_ref(x_148);
x_149 = lean_ctor_get(x_5, 3);
lean_inc(x_149);
x_150 = lean_ctor_get(x_5, 4);
lean_inc_ref(x_150);
x_151 = lean_nat_sub(x_2, x_143);
lean_dec(x_143);
x_157 = lean_uint32_of_nat(x_151);
x_172 = lean_nat_dec_lt(x_13, x_146);
if (x_172 == 0)
{
x_158 = x_5;
x_159 = x_146;
x_160 = x_147;
x_161 = x_148;
x_162 = x_149;
x_163 = x_150;
goto block_171;
}
else
{
uint8_t x_173; 
x_173 = !lean_is_exclusive(x_5);
if (x_173 == 0)
{
lean_object* x_174; lean_object* x_175; lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; lean_object* x_180; lean_object* x_181; lean_object* x_182; 
x_174 = lean_ctor_get(x_5, 4);
lean_dec(x_174);
x_175 = lean_ctor_get(x_5, 3);
lean_dec(x_175);
x_176 = lean_ctor_get(x_5, 2);
lean_dec(x_176);
x_177 = lean_ctor_get(x_5, 1);
lean_dec(x_177);
x_178 = lean_ctor_get(x_5, 0);
lean_dec(x_178);
x_179 = lean_box_uint32(x_157);
x_180 = lean_array_set(x_148, x_149, x_179);
x_181 = lean_nat_add(x_149, x_32);
lean_dec(x_149);
x_182 = lean_nat_mod(x_181, x_146);
lean_dec(x_181);
lean_inc_ref(x_150);
lean_inc(x_182);
lean_inc_ref(x_180);
lean_inc(x_147);
lean_inc(x_146);
lean_ctor_set(x_5, 3, x_182);
lean_ctor_set(x_5, 2, x_180);
x_158 = x_5;
x_159 = x_146;
x_160 = x_147;
x_161 = x_180;
x_162 = x_182;
x_163 = x_150;
goto block_171;
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; 
lean_dec(x_5);
x_183 = lean_box_uint32(x_157);
x_184 = lean_array_set(x_148, x_149, x_183);
x_185 = lean_nat_add(x_149, x_32);
lean_dec(x_149);
x_186 = lean_nat_mod(x_185, x_146);
lean_dec(x_185);
lean_inc_ref(x_150);
lean_inc(x_186);
lean_inc_ref(x_184);
lean_inc(x_147);
lean_inc(x_146);
x_187 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_187, 0, x_146);
lean_ctor_set(x_187, 1, x_147);
lean_ctor_set(x_187, 2, x_184);
lean_ctor_set(x_187, 3, x_186);
lean_ctor_set(x_187, 4, x_150);
x_158 = x_187;
x_159 = x_146;
x_160 = x_147;
x_161 = x_184;
x_162 = x_186;
x_163 = x_150;
goto block_171;
}
}
block_156:
{
lean_object* x_153; lean_object* x_154; lean_object* x_155; 
if (lean_is_scalar(x_145)) {
 x_153 = lean_alloc_ctor(0, 2, 0);
} else {
 x_153 = x_145;
}
lean_ctor_set(x_153, 0, x_144);
lean_ctor_set(x_153, 1, x_152);
x_154 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_154, 0, x_151);
lean_ctor_set(x_154, 1, x_153);
if (lean_is_scalar(x_142)) {
 x_155 = lean_alloc_ctor(1, 1, 0);
} else {
 x_155 = x_142;
}
lean_ctor_set(x_155, 0, x_154);
return x_155;
}
block_171:
{
uint8_t x_164; 
x_164 = lean_nat_dec_lt(x_13, x_160);
if (x_164 == 0)
{
lean_dec_ref(x_163);
lean_dec(x_162);
lean_dec_ref(x_161);
lean_dec(x_160);
lean_dec(x_159);
x_152 = x_158;
goto block_156;
}
else
{
lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; 
lean_dec_ref(x_158);
x_165 = lean_unsigned_to_nat(256u);
x_166 = lean_nat_mul(x_160, x_165);
x_167 = lean_nat_mod(x_151, x_166);
lean_dec(x_166);
x_168 = lean_box_uint32(x_157);
x_169 = lean_array_set(x_163, x_167, x_168);
lean_dec(x_167);
x_170 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_170, 0, x_159);
lean_ctor_set(x_170, 1, x_160);
lean_ctor_set(x_170, 2, x_161);
lean_ctor_set(x_170, 3, x_162);
lean_ctor_set(x_170, 4, x_169);
x_152 = x_170;
goto block_156;
}
}
}
}
}
else
{
lean_object* x_188; lean_object* x_189; 
lean_dec(x_1);
x_188 = lean_unsigned_to_nat(5u);
x_189 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoopPos(x_3, x_4, x_13, x_188);
if (lean_obj_tag(x_189) == 0)
{
uint8_t x_190; 
lean_dec_ref(x_5);
x_190 = !lean_is_exclusive(x_189);
if (x_190 == 0)
{
return x_189;
}
else
{
lean_object* x_191; lean_object* x_192; 
x_191 = lean_ctor_get(x_189, 0);
lean_inc(x_191);
lean_dec(x_189);
x_192 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_192, 0, x_191);
return x_192;
}
}
else
{
lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_203; lean_object* x_204; lean_object* x_205; lean_object* x_206; lean_object* x_207; uint32_t x_208; lean_object* x_209; lean_object* x_210; lean_object* x_211; lean_object* x_212; lean_object* x_213; lean_object* x_214; uint8_t x_223; 
x_193 = lean_ctor_get(x_189, 0);
lean_inc(x_193);
if (lean_is_exclusive(x_189)) {
 lean_ctor_release(x_189, 0);
 x_194 = x_189;
} else {
 lean_dec_ref(x_189);
 x_194 = lean_box(0);
}
x_195 = lean_ctor_get(x_193, 0);
lean_inc(x_195);
x_196 = lean_ctor_get(x_193, 1);
lean_inc(x_196);
if (lean_is_exclusive(x_193)) {
 lean_ctor_release(x_193, 0);
 lean_ctor_release(x_193, 1);
 x_197 = x_193;
} else {
 lean_dec_ref(x_193);
 x_197 = lean_box(0);
}
x_203 = lean_ctor_get(x_5, 0);
lean_inc(x_203);
x_204 = lean_ctor_get(x_5, 1);
lean_inc(x_204);
x_205 = lean_ctor_get(x_5, 2);
lean_inc_ref(x_205);
x_206 = lean_ctor_get(x_5, 3);
lean_inc(x_206);
x_207 = lean_ctor_get(x_5, 4);
lean_inc_ref(x_207);
x_208 = lean_uint32_of_nat(x_195);
x_223 = lean_nat_dec_lt(x_13, x_203);
if (x_223 == 0)
{
x_209 = x_5;
x_210 = x_203;
x_211 = x_204;
x_212 = x_205;
x_213 = x_206;
x_214 = x_207;
goto block_222;
}
else
{
uint8_t x_224; 
x_224 = !lean_is_exclusive(x_5);
if (x_224 == 0)
{
lean_object* x_225; lean_object* x_226; lean_object* x_227; lean_object* x_228; lean_object* x_229; lean_object* x_230; lean_object* x_231; lean_object* x_232; lean_object* x_233; lean_object* x_234; 
x_225 = lean_ctor_get(x_5, 4);
lean_dec(x_225);
x_226 = lean_ctor_get(x_5, 3);
lean_dec(x_226);
x_227 = lean_ctor_get(x_5, 2);
lean_dec(x_227);
x_228 = lean_ctor_get(x_5, 1);
lean_dec(x_228);
x_229 = lean_ctor_get(x_5, 0);
lean_dec(x_229);
x_230 = lean_box_uint32(x_208);
x_231 = lean_array_set(x_205, x_206, x_230);
x_232 = lean_unsigned_to_nat(1u);
x_233 = lean_nat_add(x_206, x_232);
lean_dec(x_206);
x_234 = lean_nat_mod(x_233, x_203);
lean_dec(x_233);
lean_inc_ref(x_207);
lean_inc(x_234);
lean_inc_ref(x_231);
lean_inc(x_204);
lean_inc(x_203);
lean_ctor_set(x_5, 3, x_234);
lean_ctor_set(x_5, 2, x_231);
x_209 = x_5;
x_210 = x_203;
x_211 = x_204;
x_212 = x_231;
x_213 = x_234;
x_214 = x_207;
goto block_222;
}
else
{
lean_object* x_235; lean_object* x_236; lean_object* x_237; lean_object* x_238; lean_object* x_239; lean_object* x_240; 
lean_dec(x_5);
x_235 = lean_box_uint32(x_208);
x_236 = lean_array_set(x_205, x_206, x_235);
x_237 = lean_unsigned_to_nat(1u);
x_238 = lean_nat_add(x_206, x_237);
lean_dec(x_206);
x_239 = lean_nat_mod(x_238, x_203);
lean_dec(x_238);
lean_inc_ref(x_207);
lean_inc(x_239);
lean_inc_ref(x_236);
lean_inc(x_204);
lean_inc(x_203);
x_240 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_240, 0, x_203);
lean_ctor_set(x_240, 1, x_204);
lean_ctor_set(x_240, 2, x_236);
lean_ctor_set(x_240, 3, x_239);
lean_ctor_set(x_240, 4, x_207);
x_209 = x_240;
x_210 = x_203;
x_211 = x_204;
x_212 = x_236;
x_213 = x_239;
x_214 = x_207;
goto block_222;
}
}
block_202:
{
lean_object* x_199; lean_object* x_200; lean_object* x_201; 
if (lean_is_scalar(x_197)) {
 x_199 = lean_alloc_ctor(0, 2, 0);
} else {
 x_199 = x_197;
}
lean_ctor_set(x_199, 0, x_196);
lean_ctor_set(x_199, 1, x_198);
x_200 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_200, 0, x_195);
lean_ctor_set(x_200, 1, x_199);
if (lean_is_scalar(x_194)) {
 x_201 = lean_alloc_ctor(1, 1, 0);
} else {
 x_201 = x_194;
}
lean_ctor_set(x_201, 0, x_200);
return x_201;
}
block_222:
{
uint8_t x_215; 
x_215 = lean_nat_dec_lt(x_13, x_211);
if (x_215 == 0)
{
lean_dec_ref(x_214);
lean_dec(x_213);
lean_dec_ref(x_212);
lean_dec(x_211);
lean_dec(x_210);
x_198 = x_209;
goto block_202;
}
else
{
lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
lean_dec_ref(x_209);
x_216 = lean_unsigned_to_nat(256u);
x_217 = lean_nat_mul(x_211, x_216);
x_218 = lean_nat_mod(x_195, x_217);
lean_dec(x_217);
x_219 = lean_box_uint32(x_208);
x_220 = lean_array_set(x_214, x_218, x_219);
lean_dec(x_218);
x_221 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_221, 0, x_210);
lean_ctor_set(x_221, 1, x_211);
lean_ctor_set(x_221, 2, x_212);
lean_ctor_set(x_221, 3, x_213);
lean_ctor_set(x_221, 4, x_220);
x_198 = x_221;
goto block_202;
}
}
}
}
block_12:
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; 
x_9 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_9, 0, x_6);
lean_ctor_set(x_9, 1, x_8);
x_10 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_10, 0, x_7);
lean_ctor_set(x_10, 1, x_9);
x_11 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_11, 0, x_10);
return x_11;
}
block_30:
{
uint8_t x_24; 
x_24 = lean_nat_dec_lt(x_13, x_20);
if (x_24 == 0)
{
lean_dec_ref(x_23);
lean_dec(x_22);
lean_dec_ref(x_21);
lean_dec(x_20);
lean_dec(x_19);
x_6 = x_15;
x_7 = x_17;
x_8 = x_18;
goto block_12;
}
else
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
lean_dec_ref(x_18);
x_25 = lean_nat_mul(x_20, x_16);
x_26 = lean_nat_mod(x_17, x_25);
lean_dec(x_25);
x_27 = lean_box_uint32(x_14);
x_28 = lean_array_set(x_23, x_26, x_27);
lean_dec(x_26);
x_29 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_29, 0, x_19);
lean_ctor_set(x_29, 1, x_20);
lean_ctor_set(x_29, 2, x_21);
lean_ctor_set(x_29, 3, x_22);
lean_ctor_set(x_29, 4, x_28);
x_6 = x_15;
x_7 = x_17;
x_8 = x_29;
goto block_12;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos___boxed(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4, lean_object* x_5) {
_start:
{
lean_object* x_6; 
x_6 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decodePos(x_1, x_2, x_3, x_4, x_5);
lean_dec_ref(x_3);
lean_dec(x_2);
return x_6;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Defs(uint8_t builtin);
lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint(uint8_t builtin);
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache(uint8_t builtin) {
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
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultNearSize = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultNearSize();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultNearSize);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultSameSize = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultSameSize();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_defaultSameSize);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init___boxed__const__1 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init___boxed__const__1);
lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1 = _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1();
lean_mark_persistent(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes___boxed__const__1);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
