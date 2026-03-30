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
lean_object* l_Nat_reprFast(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "#["};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__0_value;
static const lean_string_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__1_value;
static const lean_ctor_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__1_value)}};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__2_value;
static const lean_ctor_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__2_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__3_value;
static const lean_string_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "]"};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__4_value;
lean_object* lean_string_length(lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__5;
lean_object* lean_nat_to_int(lean_object*);
static lean_once_cell_t lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__6;
static const lean_ctor_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__0_value)}};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__7 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__7_value;
static const lean_ctor_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__4_value)}};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__8 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__8_value;
static const lean_string_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "#[]"};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__9 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__9_value;
static const lean_ctor_object lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__9_value)}};
static const lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__10 = (const lean_object*)&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__10_value;
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_Std_Format_fill(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0(lean_object*);
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__0_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sNear"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__1 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__1_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__1_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__2 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__2_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__2_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__3 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__3_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__4 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__4_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__4_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__5 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__5_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__3_value),((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__5_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__6 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__6_value;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__7;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "sSame"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__8 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__8_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__8_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__9 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__9_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "near"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__10 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__10_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__10_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__11 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__11_value;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__12;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "nearIdx"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__13 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__13_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__13_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__14 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__14_value;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__15;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "same"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__16 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__16_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__16_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__17 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__17_value;
static const lean_string_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__18 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__18_value;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__19_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__19;
static lean_once_cell_t lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__20_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__20;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__0_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__21 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__21_value;
static const lean_ctor_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__18_value)}};
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__22 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__22_value;
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState___closed__0 = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState___closed__0_value;
LEAN_EXPORT const lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState = (const lean_object*)&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState___closed__0_value;
lean_object* lean_mk_array(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_numModes(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_numModes___boxed(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lean_array_set(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get_borrowed(lean_object*, lean_object*, lean_object*);
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
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(lean_object*);
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0_spec__1_spec__2(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 5);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
x_7 = l_Nat_reprFast(x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_2 = x_9;
x_3 = x_6;
goto _start;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_1);
x_14 = l_Nat_reprFast(x_11);
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_2 = x_16;
x_3 = x_12;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0_spec__1(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
if (lean_obj_tag(x_3) == 0)
{
lean_dec(x_1);
return x_2;
}
else
{
uint8_t x_4; 
x_4 = !lean_is_exclusive(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_3, 0);
x_6 = lean_ctor_get(x_3, 1);
lean_inc(x_1);
lean_ctor_set_tag(x_3, 5);
lean_ctor_set(x_3, 1, x_1);
lean_ctor_set(x_3, 0, x_2);
x_7 = l_Nat_reprFast(x_5);
x_8 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_8, 0, x_7);
x_9 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_9, 0, x_3);
lean_ctor_set(x_9, 1, x_8);
x_10 = lp_lean_x2dbdiff_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0_spec__1_spec__2(x_1, x_9, x_6);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_3, 0);
x_12 = lean_ctor_get(x_3, 1);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_3);
lean_inc(x_1);
x_13 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_13, 0, x_2);
lean_ctor_set(x_13, 1, x_1);
x_14 = l_Nat_reprFast(x_11);
x_15 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_15, 0, x_14);
x_16 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = lp_lean_x2dbdiff_List_foldl___at___00List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0_spec__1_spec__2(x_1, x_16, x_12);
return x_17;
}
}
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0___lam__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; 
x_2 = l_Nat_reprFast(x_1);
x_3 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_3, 0, x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0(lean_object* x_1, lean_object* x_2) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
lean_object* x_3; 
lean_dec(x_2);
x_3 = lean_box(0);
return x_3;
}
else
{
lean_object* x_4; 
x_4 = lean_ctor_get(x_1, 1);
if (lean_obj_tag(x_4) == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_2);
x_5 = lean_ctor_get(x_1, 0);
lean_inc(x_5);
lean_dec_ref(x_1);
x_6 = lp_lean_x2dbdiff_Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0___lam__0(x_5);
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; 
lean_inc(x_4);
x_7 = lean_ctor_get(x_1, 0);
lean_inc(x_7);
lean_dec_ref(x_1);
x_8 = lp_lean_x2dbdiff_Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0___lam__0(x_7);
x_9 = lp_lean_x2dbdiff_List_foldl___at___00Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0_spec__1(x_2, x_8, x_4);
return x_9;
}
}
}
}
static lean_object* _init_lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__5(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__0));
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__6(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__5, &lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__5_once, _init_lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__5);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; uint8_t x_4; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(0u);
x_4 = lean_nat_dec_eq(x_2, x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; 
x_5 = lean_array_to_list(x_1);
x_6 = ((lean_object*)(lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__3));
x_7 = lp_lean_x2dbdiff_Std_Format_joinSep___at___00Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0_spec__0(x_5, x_6);
x_8 = lean_obj_once(&lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__6, &lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__6_once, _init_lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__6);
x_9 = ((lean_object*)(lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__7));
x_10 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_10, 0, x_9);
lean_ctor_set(x_10, 1, x_7);
x_11 = ((lean_object*)(lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__8));
x_12 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_12, 0, x_10);
lean_ctor_set(x_12, 1, x_11);
x_13 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_13, 0, x_8);
lean_ctor_set(x_13, 1, x_12);
x_14 = l_Std_Format_fill(x_13);
return x_14;
}
else
{
lean_object* x_15; 
lean_dec_ref(x_1);
x_15 = ((lean_object*)(lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__10));
return x_15;
}
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__7(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(9u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__12(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(8u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__15(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_unsigned_to_nat(11u);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__19(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__0));
x_2 = lean_string_length(x_1);
return x_2;
}
}
static lean_object* _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__20(void) {
_start:
{
lean_object* x_1; lean_object* x_2; 
x_1 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__19, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__19_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__19);
x_2 = lean_nat_to_int(x_1);
return x_2;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; 
x_2 = lean_ctor_get(x_1, 0);
lean_inc(x_2);
x_3 = lean_ctor_get(x_1, 1);
lean_inc(x_3);
x_4 = lean_ctor_get(x_1, 2);
lean_inc_ref(x_4);
x_5 = lean_ctor_get(x_1, 3);
lean_inc(x_5);
x_6 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_6);
lean_dec_ref(x_1);
x_7 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__5));
x_8 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__6));
x_9 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__7, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__7_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__7);
x_10 = l_Nat_reprFast(x_2);
x_11 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_11, 0, x_10);
x_12 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_12, 0, x_9);
lean_ctor_set(x_12, 1, x_11);
x_13 = 0;
x_14 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_14, 0, x_12);
lean_ctor_set_uint8(x_14, sizeof(void*)*1, x_13);
x_15 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_15, 0, x_8);
lean_ctor_set(x_15, 1, x_14);
x_16 = ((lean_object*)(lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0___closed__2));
x_17 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_17, 0, x_15);
lean_ctor_set(x_17, 1, x_16);
x_18 = lean_box(1);
x_19 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_19, 0, x_17);
lean_ctor_set(x_19, 1, x_18);
x_20 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__9));
x_21 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_21, 0, x_19);
lean_ctor_set(x_21, 1, x_20);
x_22 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_22, 0, x_21);
lean_ctor_set(x_22, 1, x_7);
x_23 = l_Nat_reprFast(x_3);
x_24 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_24, 0, x_23);
x_25 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_25, 0, x_9);
lean_ctor_set(x_25, 1, x_24);
x_26 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_26, 0, x_25);
lean_ctor_set_uint8(x_26, sizeof(void*)*1, x_13);
x_27 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_27, 0, x_22);
lean_ctor_set(x_27, 1, x_26);
x_28 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_28, 0, x_27);
lean_ctor_set(x_28, 1, x_16);
x_29 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_29, 0, x_28);
lean_ctor_set(x_29, 1, x_18);
x_30 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__11));
x_31 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_31, 0, x_29);
lean_ctor_set(x_31, 1, x_30);
x_32 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_32, 0, x_31);
lean_ctor_set(x_32, 1, x_7);
x_33 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__12, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__12_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__12);
x_34 = lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0(x_4);
x_35 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_35, 0, x_33);
lean_ctor_set(x_35, 1, x_34);
x_36 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_36, 0, x_35);
lean_ctor_set_uint8(x_36, sizeof(void*)*1, x_13);
x_37 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_37, 0, x_32);
lean_ctor_set(x_37, 1, x_36);
x_38 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_38, 0, x_37);
lean_ctor_set(x_38, 1, x_16);
x_39 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_39, 0, x_38);
lean_ctor_set(x_39, 1, x_18);
x_40 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__14));
x_41 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_41, 0, x_39);
lean_ctor_set(x_41, 1, x_40);
x_42 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_42, 0, x_41);
lean_ctor_set(x_42, 1, x_7);
x_43 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__15, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__15_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__15);
x_44 = l_Nat_reprFast(x_5);
x_45 = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(x_45, 0, x_44);
x_46 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_46, 0, x_43);
lean_ctor_set(x_46, 1, x_45);
x_47 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_47, 0, x_46);
lean_ctor_set_uint8(x_47, sizeof(void*)*1, x_13);
x_48 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_48, 0, x_42);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_49, 0, x_48);
lean_ctor_set(x_49, 1, x_16);
x_50 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_50, 0, x_49);
lean_ctor_set(x_50, 1, x_18);
x_51 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__17));
x_52 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_52, 0, x_50);
lean_ctor_set(x_52, 1, x_51);
x_53 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_53, 0, x_52);
lean_ctor_set(x_53, 1, x_7);
x_54 = lp_lean_x2dbdiff_Array_repr___at___00LeanBdiff_Vcdiff_AddressCache_instReprState_repr_spec__0(x_6);
x_55 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_55, 0, x_33);
lean_ctor_set(x_55, 1, x_54);
x_56 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_56, 0, x_55);
lean_ctor_set_uint8(x_56, sizeof(void*)*1, x_13);
x_57 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_57, 0, x_53);
lean_ctor_set(x_57, 1, x_56);
x_58 = lean_obj_once(&lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__20, &lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__20_once, _init_lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__20);
x_59 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__21));
x_60 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_60, 0, x_59);
lean_ctor_set(x_60, 1, x_57);
x_61 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg___closed__22));
x_62 = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(x_62, 0, x_60);
lean_ctor_set(x_62, 1, x_61);
x_63 = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(x_63, 0, x_58);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(x_64, 0, x_63);
lean_ctor_set_uint8(x_64, sizeof(void*)*1, x_13);
return x_64;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___redArg(x_1);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr___boxed(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; 
x_3 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_instReprState_repr(x_1, x_2);
lean_dec(x_2);
return x_3;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_init(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; 
x_3 = lean_unsigned_to_nat(0u);
lean_inc(x_1);
x_4 = lean_mk_array(x_1, x_3);
x_5 = lean_unsigned_to_nat(256u);
x_6 = lean_nat_mul(x_2, x_5);
x_7 = lean_mk_array(x_6, x_3);
x_8 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_8, 0, x_1);
lean_ctor_set(x_8, 1, x_2);
lean_ctor_set(x_8, 2, x_4);
lean_ctor_set(x_8, 3, x_3);
lean_ctor_set(x_8, 4, x_7);
return x_8;
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
lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_22; 
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
x_8 = lean_unsigned_to_nat(0u);
x_22 = lean_nat_dec_lt(x_8, x_3);
if (x_22 == 0)
{
x_9 = x_1;
x_10 = x_3;
x_11 = x_4;
x_12 = x_5;
x_13 = x_6;
x_14 = x_7;
goto block_21;
}
else
{
uint8_t x_23; 
x_23 = !lean_is_exclusive(x_1);
if (x_23 == 0)
{
lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; 
x_24 = lean_ctor_get(x_1, 4);
lean_dec(x_24);
x_25 = lean_ctor_get(x_1, 3);
lean_dec(x_25);
x_26 = lean_ctor_get(x_1, 2);
lean_dec(x_26);
x_27 = lean_ctor_get(x_1, 1);
lean_dec(x_27);
x_28 = lean_ctor_get(x_1, 0);
lean_dec(x_28);
lean_inc(x_2);
x_29 = lean_array_set(x_5, x_6, x_2);
x_30 = lean_unsigned_to_nat(1u);
x_31 = lean_nat_add(x_6, x_30);
lean_dec(x_6);
x_32 = lean_nat_mod(x_31, x_3);
lean_dec(x_31);
lean_inc_ref(x_7);
lean_inc(x_32);
lean_inc_ref(x_29);
lean_inc(x_4);
lean_inc(x_3);
lean_ctor_set(x_1, 3, x_32);
lean_ctor_set(x_1, 2, x_29);
x_9 = x_1;
x_10 = x_3;
x_11 = x_4;
x_12 = x_29;
x_13 = x_32;
x_14 = x_7;
goto block_21;
}
else
{
lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; 
lean_dec(x_1);
lean_inc(x_2);
x_33 = lean_array_set(x_5, x_6, x_2);
x_34 = lean_unsigned_to_nat(1u);
x_35 = lean_nat_add(x_6, x_34);
lean_dec(x_6);
x_36 = lean_nat_mod(x_35, x_3);
lean_dec(x_35);
lean_inc_ref(x_7);
lean_inc(x_36);
lean_inc_ref(x_33);
lean_inc(x_4);
lean_inc(x_3);
x_37 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_37, 0, x_3);
lean_ctor_set(x_37, 1, x_4);
lean_ctor_set(x_37, 2, x_33);
lean_ctor_set(x_37, 3, x_36);
lean_ctor_set(x_37, 4, x_7);
x_9 = x_37;
x_10 = x_3;
x_11 = x_4;
x_12 = x_33;
x_13 = x_36;
x_14 = x_7;
goto block_21;
}
}
block_21:
{
uint8_t x_15; 
x_15 = lean_nat_dec_lt(x_8, x_11);
if (x_15 == 0)
{
lean_dec_ref(x_14);
lean_dec(x_13);
lean_dec_ref(x_12);
lean_dec(x_11);
lean_dec(x_10);
lean_dec(x_2);
return x_9;
}
else
{
lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
lean_dec_ref(x_9);
x_16 = lean_unsigned_to_nat(256u);
x_17 = lean_nat_mul(x_11, x_16);
x_18 = lean_nat_mod(x_2, x_17);
lean_dec(x_17);
x_19 = lean_array_set(x_14, x_18, x_2);
lean_dec(x_18);
x_20 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_20, 0, x_10);
lean_ctor_set(x_20, 1, x_11);
lean_ctor_set(x_20, 2, x_12);
lean_ctor_set(x_20, 3, x_13);
lean_ctor_set(x_20, 4, x_19);
return x_20;
}
}
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
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; 
x_9 = lean_ctor_get(x_1, 0);
x_10 = lean_ctor_get(x_1, 2);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_sub(x_5, x_11);
lean_dec(x_5);
x_13 = lean_nat_sub(x_9, x_12);
x_14 = lean_nat_sub(x_13, x_11);
lean_dec(x_13);
x_15 = lean_array_get_borrowed(x_6, x_10, x_14);
x_16 = lean_nat_dec_le(x_15, x_2);
if (x_16 == 0)
{
lean_dec(x_14);
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_22; 
x_18 = lean_nat_sub(x_2, x_15);
x_19 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_18);
lean_dec(x_18);
x_20 = lean_byte_array_size(x_19);
x_21 = lean_byte_array_size(x_4);
x_22 = lean_nat_dec_lt(x_20, x_21);
if (x_22 == 0)
{
lean_dec_ref(x_19);
lean_dec(x_14);
x_5 = x_12;
goto _start;
}
else
{
lean_object* x_24; lean_object* x_25; 
lean_dec_ref(x_4);
lean_dec(x_3);
x_24 = lean_unsigned_to_nat(2u);
x_25 = lean_nat_add(x_24, x_14);
lean_dec(x_14);
x_3 = x_25;
x_4 = x_19;
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
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; uint8_t x_16; lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; uint8_t x_33; 
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
x_32 = lean_array_get_borrowed(x_6, x_11, x_31);
lean_dec(x_31);
x_33 = lean_nat_dec_eq(x_32, x_2);
if (x_33 == 0)
{
x_16 = x_33;
goto block_27;
}
else
{
uint8_t x_34; 
x_34 = lean_nat_dec_eq(x_2, x_6);
if (x_34 == 0)
{
x_16 = x_33;
goto block_27;
}
else
{
lean_dec(x_15);
x_5 = x_13;
goto _start;
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
lean_object* x_4; lean_object* x_5; lean_object* x_31; uint8_t x_32; 
x_31 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_2);
x_32 = lean_nat_dec_lt(x_2, x_3);
if (x_32 == 0)
{
lean_object* x_33; 
x_33 = lean_unsigned_to_nat(0u);
x_4 = x_33;
x_5 = x_31;
goto block_30;
}
else
{
lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_34 = lean_nat_sub(x_3, x_2);
x_35 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_34);
lean_dec(x_34);
x_36 = lean_byte_array_size(x_35);
x_37 = lean_byte_array_size(x_31);
x_38 = lean_nat_dec_lt(x_36, x_37);
if (x_38 == 0)
{
lean_object* x_39; 
lean_dec_ref(x_35);
x_39 = lean_unsigned_to_nat(0u);
x_4 = x_39;
x_5 = x_31;
goto block_30;
}
else
{
lean_object* x_40; 
lean_dec_ref(x_31);
x_40 = lean_unsigned_to_nat(1u);
x_4 = x_40;
x_5 = x_35;
goto block_30;
}
}
block_30:
{
lean_object* x_6; lean_object* x_7; lean_object* x_8; uint8_t x_9; 
x_6 = lean_ctor_get(x_1, 0);
x_7 = lean_ctor_get(x_1, 1);
lean_inc(x_6);
x_8 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes(x_1, x_2, x_4, x_5, x_6);
x_9 = !lean_is_exclusive(x_8);
if (x_9 == 0)
{
lean_object* x_10; lean_object* x_11; lean_object* x_12; uint8_t x_13; 
x_10 = lean_ctor_get(x_8, 0);
x_11 = lean_ctor_get(x_8, 1);
lean_inc(x_7);
x_12 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes(x_1, x_2, x_10, x_11, x_7);
x_13 = !lean_is_exclusive(x_12);
if (x_13 == 0)
{
lean_object* x_14; lean_object* x_15; lean_object* x_16; 
x_14 = lean_ctor_get(x_12, 0);
x_15 = lean_ctor_get(x_12, 1);
x_16 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_1, x_2);
lean_ctor_set(x_12, 1, x_16);
lean_ctor_set(x_12, 0, x_15);
lean_ctor_set(x_8, 1, x_12);
lean_ctor_set(x_8, 0, x_14);
return x_8;
}
else
{
lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; 
x_17 = lean_ctor_get(x_12, 0);
x_18 = lean_ctor_get(x_12, 1);
lean_inc(x_18);
lean_inc(x_17);
lean_dec(x_12);
x_19 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_1, x_2);
x_20 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_20, 0, x_18);
lean_ctor_set(x_20, 1, x_19);
lean_ctor_set(x_8, 1, x_20);
lean_ctor_set(x_8, 0, x_17);
return x_8;
}
}
else
{
lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; 
x_21 = lean_ctor_get(x_8, 0);
x_22 = lean_ctor_get(x_8, 1);
lean_inc(x_22);
lean_inc(x_21);
lean_dec(x_8);
lean_inc(x_7);
x_23 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes(x_1, x_2, x_21, x_22, x_7);
x_24 = lean_ctor_get(x_23, 0);
lean_inc(x_24);
x_25 = lean_ctor_get(x_23, 1);
lean_inc(x_25);
if (lean_is_exclusive(x_23)) {
 lean_ctor_release(x_23, 0);
 lean_ctor_release(x_23, 1);
 x_26 = x_23;
} else {
 lean_dec_ref(x_23);
 x_26 = lean_box(0);
}
x_27 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_1, x_2);
if (lean_is_scalar(x_26)) {
 x_28 = lean_alloc_ctor(0, 2, 0);
} else {
 x_28 = x_26;
}
lean_ctor_set(x_28, 0, x_25);
lean_ctor_set(x_28, 1, x_27);
x_29 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_29, 0, x_24);
lean_ctor_set(x_29, 1, x_28);
return x_29;
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
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; uint8_t x_6; 
x_5 = lean_unsigned_to_nat(0u);
x_6 = lean_nat_dec_eq(x_1, x_5);
if (x_6 == 0)
{
lean_object* x_7; uint8_t x_8; 
x_7 = lean_unsigned_to_nat(1u);
x_8 = lean_nat_dec_eq(x_1, x_7);
if (x_8 == 0)
{
lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; uint8_t x_15; 
x_9 = lean_ctor_get(x_4, 0);
x_10 = lean_ctor_get(x_4, 1);
x_11 = lean_ctor_get(x_4, 2);
x_12 = lean_ctor_get(x_4, 4);
x_13 = lean_unsigned_to_nat(2u);
x_14 = lean_nat_add(x_13, x_9);
x_15 = lean_nat_dec_lt(x_1, x_14);
if (x_15 == 0)
{
lean_object* x_16; uint8_t x_17; 
x_16 = lean_nat_add(x_14, x_10);
lean_dec(x_14);
x_17 = lean_nat_dec_lt(x_1, x_16);
lean_dec(x_16);
if (x_17 == 0)
{
lean_object* x_18; lean_object* x_19; 
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_18 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_18, 0, x_1);
x_19 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_19, 0, x_18);
return x_19;
}
else
{
lean_object* x_20; 
x_20 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_Cursor_readByte(x_3);
if (lean_obj_tag(x_20) == 0)
{
lean_object* x_21; 
lean_dec_ref(x_20);
lean_dec_ref(x_4);
lean_dec(x_1);
x_21 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___closed__0));
return x_21;
}
else
{
uint8_t x_22; 
x_22 = !lean_is_exclusive(x_20);
if (x_22 == 0)
{
lean_object* x_23; uint8_t x_24; 
x_23 = lean_ctor_get(x_20, 0);
x_24 = !lean_is_exclusive(x_23);
if (x_24 == 0)
{
lean_object* x_25; lean_object* x_26; lean_object* x_27; lean_object* x_28; lean_object* x_29; lean_object* x_30; uint8_t x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; 
x_25 = lean_ctor_get(x_23, 0);
x_26 = lean_ctor_get(x_23, 1);
x_27 = lean_nat_sub(x_1, x_13);
lean_dec(x_1);
x_28 = lean_nat_sub(x_27, x_9);
lean_dec(x_27);
x_29 = lean_unsigned_to_nat(256u);
x_30 = lean_nat_mul(x_28, x_29);
lean_dec(x_28);
x_31 = lean_unbox(x_25);
lean_dec(x_25);
x_32 = lean_uint8_to_nat(x_31);
x_33 = lean_nat_add(x_30, x_32);
lean_dec(x_30);
x_34 = lean_array_get(x_5, x_12, x_33);
lean_dec(x_33);
lean_inc(x_34);
x_35 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_34);
lean_ctor_set(x_23, 1, x_35);
lean_ctor_set(x_23, 0, x_26);
x_36 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_36, 0, x_34);
lean_ctor_set(x_36, 1, x_23);
lean_ctor_set(x_20, 0, x_36);
return x_20;
}
else
{
lean_object* x_37; lean_object* x_38; lean_object* x_39; lean_object* x_40; lean_object* x_41; lean_object* x_42; uint8_t x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; 
x_37 = lean_ctor_get(x_23, 0);
x_38 = lean_ctor_get(x_23, 1);
lean_inc(x_38);
lean_inc(x_37);
lean_dec(x_23);
x_39 = lean_nat_sub(x_1, x_13);
lean_dec(x_1);
x_40 = lean_nat_sub(x_39, x_9);
lean_dec(x_39);
x_41 = lean_unsigned_to_nat(256u);
x_42 = lean_nat_mul(x_40, x_41);
lean_dec(x_40);
x_43 = lean_unbox(x_37);
lean_dec(x_37);
x_44 = lean_uint8_to_nat(x_43);
x_45 = lean_nat_add(x_42, x_44);
lean_dec(x_42);
x_46 = lean_array_get(x_5, x_12, x_45);
lean_dec(x_45);
lean_inc(x_46);
x_47 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_46);
x_48 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_48, 0, x_38);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_49, 0, x_46);
lean_ctor_set(x_49, 1, x_48);
lean_ctor_set(x_20, 0, x_49);
return x_20;
}
}
else
{
lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; lean_object* x_56; lean_object* x_57; uint8_t x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_50 = lean_ctor_get(x_20, 0);
lean_inc(x_50);
lean_dec(x_20);
x_51 = lean_ctor_get(x_50, 0);
lean_inc(x_51);
x_52 = lean_ctor_get(x_50, 1);
lean_inc(x_52);
if (lean_is_exclusive(x_50)) {
 lean_ctor_release(x_50, 0);
 lean_ctor_release(x_50, 1);
 x_53 = x_50;
} else {
 lean_dec_ref(x_50);
 x_53 = lean_box(0);
}
x_54 = lean_nat_sub(x_1, x_13);
lean_dec(x_1);
x_55 = lean_nat_sub(x_54, x_9);
lean_dec(x_54);
x_56 = lean_unsigned_to_nat(256u);
x_57 = lean_nat_mul(x_55, x_56);
lean_dec(x_55);
x_58 = lean_unbox(x_51);
lean_dec(x_51);
x_59 = lean_uint8_to_nat(x_58);
x_60 = lean_nat_add(x_57, x_59);
lean_dec(x_57);
x_61 = lean_array_get(x_5, x_12, x_60);
lean_dec(x_60);
lean_inc(x_61);
x_62 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_61);
if (lean_is_scalar(x_53)) {
 x_63 = lean_alloc_ctor(0, 2, 0);
} else {
 x_63 = x_53;
}
lean_ctor_set(x_63, 0, x_52);
lean_ctor_set(x_63, 1, x_62);
x_64 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_64, 0, x_61);
lean_ctor_set(x_64, 1, x_63);
x_65 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_65, 0, x_64);
return x_65;
}
}
}
}
else
{
lean_object* x_66; 
lean_dec(x_14);
x_66 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_3);
if (lean_obj_tag(x_66) == 0)
{
uint8_t x_67; 
lean_dec_ref(x_4);
lean_dec(x_1);
x_67 = !lean_is_exclusive(x_66);
if (x_67 == 0)
{
return x_66;
}
else
{
lean_object* x_68; lean_object* x_69; 
x_68 = lean_ctor_get(x_66, 0);
lean_inc(x_68);
lean_dec(x_66);
x_69 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_69, 0, x_68);
return x_69;
}
}
else
{
uint8_t x_70; 
x_70 = !lean_is_exclusive(x_66);
if (x_70 == 0)
{
lean_object* x_71; uint8_t x_72; 
x_71 = lean_ctor_get(x_66, 0);
x_72 = !lean_is_exclusive(x_71);
if (x_72 == 0)
{
lean_object* x_73; lean_object* x_74; lean_object* x_75; lean_object* x_76; lean_object* x_77; lean_object* x_78; lean_object* x_79; 
x_73 = lean_ctor_get(x_71, 0);
x_74 = lean_ctor_get(x_71, 1);
x_75 = lean_nat_sub(x_1, x_13);
lean_dec(x_1);
x_76 = lean_array_get_borrowed(x_5, x_11, x_75);
lean_dec(x_75);
x_77 = lean_nat_add(x_76, x_73);
lean_dec(x_73);
lean_inc(x_77);
x_78 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_77);
lean_ctor_set(x_71, 1, x_78);
lean_ctor_set(x_71, 0, x_74);
x_79 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_79, 0, x_77);
lean_ctor_set(x_79, 1, x_71);
lean_ctor_set(x_66, 0, x_79);
return x_66;
}
else
{
lean_object* x_80; lean_object* x_81; lean_object* x_82; lean_object* x_83; lean_object* x_84; lean_object* x_85; lean_object* x_86; lean_object* x_87; 
x_80 = lean_ctor_get(x_71, 0);
x_81 = lean_ctor_get(x_71, 1);
lean_inc(x_81);
lean_inc(x_80);
lean_dec(x_71);
x_82 = lean_nat_sub(x_1, x_13);
lean_dec(x_1);
x_83 = lean_array_get_borrowed(x_5, x_11, x_82);
lean_dec(x_82);
x_84 = lean_nat_add(x_83, x_80);
lean_dec(x_80);
lean_inc(x_84);
x_85 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_84);
x_86 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_86, 0, x_81);
lean_ctor_set(x_86, 1, x_85);
x_87 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_87, 0, x_84);
lean_ctor_set(x_87, 1, x_86);
lean_ctor_set(x_66, 0, x_87);
return x_66;
}
}
else
{
lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_95; lean_object* x_96; lean_object* x_97; lean_object* x_98; 
x_88 = lean_ctor_get(x_66, 0);
lean_inc(x_88);
lean_dec(x_66);
x_89 = lean_ctor_get(x_88, 0);
lean_inc(x_89);
x_90 = lean_ctor_get(x_88, 1);
lean_inc(x_90);
if (lean_is_exclusive(x_88)) {
 lean_ctor_release(x_88, 0);
 lean_ctor_release(x_88, 1);
 x_91 = x_88;
} else {
 lean_dec_ref(x_88);
 x_91 = lean_box(0);
}
x_92 = lean_nat_sub(x_1, x_13);
lean_dec(x_1);
x_93 = lean_array_get_borrowed(x_5, x_11, x_92);
lean_dec(x_92);
x_94 = lean_nat_add(x_93, x_89);
lean_dec(x_89);
lean_inc(x_94);
x_95 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_94);
if (lean_is_scalar(x_91)) {
 x_96 = lean_alloc_ctor(0, 2, 0);
} else {
 x_96 = x_91;
}
lean_ctor_set(x_96, 0, x_90);
lean_ctor_set(x_96, 1, x_95);
x_97 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_97, 0, x_94);
lean_ctor_set(x_97, 1, x_96);
x_98 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_98, 0, x_97);
return x_98;
}
}
}
}
else
{
lean_object* x_99; 
lean_dec(x_1);
x_99 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_3);
if (lean_obj_tag(x_99) == 0)
{
uint8_t x_100; 
lean_dec_ref(x_4);
x_100 = !lean_is_exclusive(x_99);
if (x_100 == 0)
{
return x_99;
}
else
{
lean_object* x_101; lean_object* x_102; 
x_101 = lean_ctor_get(x_99, 0);
lean_inc(x_101);
lean_dec(x_99);
x_102 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_102, 0, x_101);
return x_102;
}
}
else
{
uint8_t x_103; 
x_103 = !lean_is_exclusive(x_99);
if (x_103 == 0)
{
lean_object* x_104; uint8_t x_105; 
x_104 = lean_ctor_get(x_99, 0);
x_105 = !lean_is_exclusive(x_104);
if (x_105 == 0)
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
x_106 = lean_ctor_get(x_104, 0);
x_107 = lean_ctor_get(x_104, 1);
x_108 = lean_nat_sub(x_2, x_106);
lean_dec(x_106);
lean_inc(x_108);
x_109 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_108);
lean_ctor_set(x_104, 1, x_109);
lean_ctor_set(x_104, 0, x_107);
x_110 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_110, 0, x_108);
lean_ctor_set(x_110, 1, x_104);
lean_ctor_set(x_99, 0, x_110);
return x_99;
}
else
{
lean_object* x_111; lean_object* x_112; lean_object* x_113; lean_object* x_114; lean_object* x_115; lean_object* x_116; 
x_111 = lean_ctor_get(x_104, 0);
x_112 = lean_ctor_get(x_104, 1);
lean_inc(x_112);
lean_inc(x_111);
lean_dec(x_104);
x_113 = lean_nat_sub(x_2, x_111);
lean_dec(x_111);
lean_inc(x_113);
x_114 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_113);
x_115 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_115, 0, x_112);
lean_ctor_set(x_115, 1, x_114);
x_116 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_116, 0, x_113);
lean_ctor_set(x_116, 1, x_115);
lean_ctor_set(x_99, 0, x_116);
return x_99;
}
}
else
{
lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
x_117 = lean_ctor_get(x_99, 0);
lean_inc(x_117);
lean_dec(x_99);
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
x_121 = lean_nat_sub(x_2, x_118);
lean_dec(x_118);
lean_inc(x_121);
x_122 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_121);
if (lean_is_scalar(x_120)) {
 x_123 = lean_alloc_ctor(0, 2, 0);
} else {
 x_123 = x_120;
}
lean_ctor_set(x_123, 0, x_119);
lean_ctor_set(x_123, 1, x_122);
x_124 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_124, 0, x_121);
lean_ctor_set(x_124, 1, x_123);
x_125 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_125, 0, x_124);
return x_125;
}
}
}
}
else
{
lean_object* x_126; 
lean_dec(x_1);
x_126 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decode(x_3);
if (lean_obj_tag(x_126) == 0)
{
uint8_t x_127; 
lean_dec_ref(x_4);
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
uint8_t x_130; 
x_130 = !lean_is_exclusive(x_126);
if (x_130 == 0)
{
lean_object* x_131; uint8_t x_132; 
x_131 = lean_ctor_get(x_126, 0);
x_132 = !lean_is_exclusive(x_131);
if (x_132 == 0)
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; 
x_133 = lean_ctor_get(x_131, 0);
x_134 = lean_ctor_get(x_131, 1);
lean_inc(x_133);
x_135 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_133);
lean_ctor_set(x_131, 1, x_135);
lean_ctor_set(x_131, 0, x_134);
x_136 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_136, 0, x_133);
lean_ctor_set(x_136, 1, x_131);
lean_ctor_set(x_126, 0, x_136);
return x_126;
}
else
{
lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; 
x_137 = lean_ctor_get(x_131, 0);
x_138 = lean_ctor_get(x_131, 1);
lean_inc(x_138);
lean_inc(x_137);
lean_dec(x_131);
lean_inc(x_137);
x_139 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_137);
x_140 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_140, 0, x_138);
lean_ctor_set(x_140, 1, x_139);
x_141 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_141, 0, x_137);
lean_ctor_set(x_141, 1, x_140);
lean_ctor_set(x_126, 0, x_141);
return x_126;
}
}
else
{
lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_145; lean_object* x_146; lean_object* x_147; lean_object* x_148; lean_object* x_149; 
x_142 = lean_ctor_get(x_126, 0);
lean_inc(x_142);
lean_dec(x_126);
x_143 = lean_ctor_get(x_142, 0);
lean_inc(x_143);
x_144 = lean_ctor_get(x_142, 1);
lean_inc(x_144);
if (lean_is_exclusive(x_142)) {
 lean_ctor_release(x_142, 0);
 lean_ctor_release(x_142, 1);
 x_145 = x_142;
} else {
 lean_dec_ref(x_142);
 x_145 = lean_box(0);
}
lean_inc(x_143);
x_146 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_update(x_4, x_143);
if (lean_is_scalar(x_145)) {
 x_147 = lean_alloc_ctor(0, 2, 0);
} else {
 x_147 = x_145;
}
lean_ctor_set(x_147, 0, x_144);
lean_ctor_set(x_147, 1, x_146);
x_148 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_148, 0, x_143);
lean_ctor_set(x_148, 1, x_147);
x_149 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_149, 0, x_148);
return x_149;
}
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
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
