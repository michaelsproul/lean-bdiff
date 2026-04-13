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
lean_object* lean_uint8_to_nat(uint8_t);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
extern uint8_t l_instInhabitedUInt8;
lean_object* l_outOfBounds___redArg(lean_object*);
uint8_t lean_byte_array_fget(lean_object*, lean_object*);
lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(lean_object*, lean_object*, lean_object*, lean_object*);
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
lean_object* x_4; lean_object* x_5; lean_object* x_6; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_26; lean_object* x_27; lean_object* x_57; uint8_t x_58; 
x_57 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_2);
x_58 = lean_nat_dec_lt(x_2, x_3);
if (x_58 == 0)
{
lean_object* x_59; 
x_59 = lean_unsigned_to_nat(0u);
x_26 = x_59;
x_27 = x_57;
goto block_56;
}
else
{
lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; uint8_t x_64; 
x_60 = lean_nat_sub(x_3, x_2);
x_61 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_encode(x_60);
lean_dec(x_60);
x_62 = lean_byte_array_size(x_61);
x_63 = lean_byte_array_size(x_57);
x_64 = lean_nat_dec_lt(x_62, x_63);
if (x_64 == 0)
{
lean_object* x_65; 
lean_dec_ref(x_61);
x_65 = lean_unsigned_to_nat(0u);
x_26 = x_65;
x_27 = x_57;
goto block_56;
}
else
{
lean_object* x_66; 
lean_dec_ref(x_57);
x_66 = lean_unsigned_to_nat(1u);
x_26 = x_66;
x_27 = x_61;
goto block_56;
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
block_25:
{
uint8_t x_19; 
x_19 = lean_nat_dec_lt(x_12, x_15);
if (x_19 == 0)
{
lean_dec_ref(x_18);
lean_dec(x_17);
lean_dec_ref(x_16);
lean_dec(x_15);
lean_dec(x_14);
lean_dec(x_2);
x_4 = x_10;
x_5 = x_11;
x_6 = x_13;
goto block_9;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
lean_dec_ref(x_13);
x_20 = lean_unsigned_to_nat(256u);
x_21 = lean_nat_mul(x_15, x_20);
x_22 = lean_nat_mod(x_2, x_21);
lean_dec(x_21);
x_23 = lean_array_set(x_18, x_22, x_2);
lean_dec(x_22);
x_24 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_24, 0, x_14);
lean_ctor_set(x_24, 1, x_15);
lean_ctor_set(x_24, 2, x_16);
lean_ctor_set(x_24, 3, x_17);
lean_ctor_set(x_24, 4, x_23);
x_4 = x_10;
x_5 = x_11;
x_6 = x_24;
goto block_9;
}
}
block_56:
{
lean_object* x_28; lean_object* x_29; lean_object* x_30; lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; lean_object* x_38; lean_object* x_39; uint8_t x_40; 
x_28 = lean_ctor_get(x_1, 0);
lean_inc(x_28);
x_29 = lean_ctor_get(x_1, 1);
lean_inc(x_29);
x_30 = lean_ctor_get(x_1, 2);
lean_inc_ref(x_30);
x_31 = lean_ctor_get(x_1, 3);
lean_inc(x_31);
x_32 = lean_ctor_get(x_1, 4);
lean_inc_ref(x_32);
lean_inc(x_28);
x_33 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_tryNearModes(x_1, x_2, x_26, x_27, x_28);
x_34 = lean_ctor_get(x_33, 0);
lean_inc(x_34);
x_35 = lean_ctor_get(x_33, 1);
lean_inc(x_35);
lean_dec_ref(x_33);
lean_inc(x_29);
x_36 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_State_trySameModes(x_1, x_2, x_34, x_35, x_29);
x_37 = lean_ctor_get(x_36, 0);
lean_inc(x_37);
x_38 = lean_ctor_get(x_36, 1);
lean_inc(x_38);
lean_dec_ref(x_36);
x_39 = lean_unsigned_to_nat(0u);
x_40 = lean_nat_dec_lt(x_39, x_28);
if (x_40 == 0)
{
x_10 = x_37;
x_11 = x_38;
x_12 = x_39;
x_13 = x_1;
x_14 = x_28;
x_15 = x_29;
x_16 = x_30;
x_17 = x_31;
x_18 = x_32;
goto block_25;
}
else
{
uint8_t x_41; 
x_41 = !lean_is_exclusive(x_1);
if (x_41 == 0)
{
lean_object* x_42; lean_object* x_43; lean_object* x_44; lean_object* x_45; lean_object* x_46; lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; 
x_42 = lean_ctor_get(x_1, 4);
lean_dec(x_42);
x_43 = lean_ctor_get(x_1, 3);
lean_dec(x_43);
x_44 = lean_ctor_get(x_1, 2);
lean_dec(x_44);
x_45 = lean_ctor_get(x_1, 1);
lean_dec(x_45);
x_46 = lean_ctor_get(x_1, 0);
lean_dec(x_46);
lean_inc(x_2);
x_47 = lean_array_set(x_30, x_31, x_2);
x_48 = lean_unsigned_to_nat(1u);
x_49 = lean_nat_add(x_31, x_48);
lean_dec(x_31);
x_50 = lean_nat_mod(x_49, x_28);
lean_dec(x_49);
lean_inc_ref(x_32);
lean_inc(x_50);
lean_inc_ref(x_47);
lean_inc(x_29);
lean_inc(x_28);
lean_ctor_set(x_1, 3, x_50);
lean_ctor_set(x_1, 2, x_47);
x_10 = x_37;
x_11 = x_38;
x_12 = x_39;
x_13 = x_1;
x_14 = x_28;
x_15 = x_29;
x_16 = x_47;
x_17 = x_50;
x_18 = x_32;
goto block_25;
}
else
{
lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; 
lean_dec(x_1);
lean_inc(x_2);
x_51 = lean_array_set(x_30, x_31, x_2);
x_52 = lean_unsigned_to_nat(1u);
x_53 = lean_nat_add(x_31, x_52);
lean_dec(x_31);
x_54 = lean_nat_mod(x_53, x_28);
lean_dec(x_53);
lean_inc_ref(x_32);
lean_inc(x_54);
lean_inc_ref(x_51);
lean_inc(x_29);
lean_inc(x_28);
x_55 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_55, 0, x_28);
lean_ctor_set(x_55, 1, x_29);
lean_ctor_set(x_55, 2, x_51);
lean_ctor_set(x_55, 3, x_54);
lean_ctor_set(x_55, 4, x_32);
x_10 = x_37;
x_11 = x_38;
x_12 = x_39;
x_13 = x_55;
x_14 = x_28;
x_15 = x_29;
x_16 = x_51;
x_17 = x_54;
x_18 = x_32;
goto block_25;
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
return x_4;
}
}
LEAN_EXPORT lean_object* lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode(lean_object* x_1, lean_object* x_2, lean_object* x_3, lean_object* x_4) {
_start:
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; uint8_t x_28; 
x_12 = lean_unsigned_to_nat(0u);
x_28 = lean_nat_dec_eq(x_1, x_12);
if (x_28 == 0)
{
lean_object* x_29; uint8_t x_30; 
x_29 = lean_unsigned_to_nat(1u);
x_30 = lean_nat_dec_eq(x_1, x_29);
if (x_30 == 0)
{
lean_object* x_31; lean_object* x_32; lean_object* x_33; lean_object* x_34; lean_object* x_35; lean_object* x_36; lean_object* x_37; uint8_t x_38; 
x_31 = lean_ctor_get(x_4, 0);
lean_inc(x_31);
x_32 = lean_ctor_get(x_4, 1);
lean_inc(x_32);
x_33 = lean_ctor_get(x_4, 2);
lean_inc_ref(x_33);
x_34 = lean_ctor_get(x_4, 3);
lean_inc(x_34);
x_35 = lean_ctor_get(x_4, 4);
lean_inc_ref(x_35);
x_36 = lean_unsigned_to_nat(2u);
x_37 = lean_nat_add(x_36, x_31);
x_38 = lean_nat_dec_lt(x_1, x_37);
if (x_38 == 0)
{
lean_object* x_39; uint8_t x_40; 
x_39 = lean_nat_add(x_37, x_32);
lean_dec(x_37);
x_40 = lean_nat_dec_lt(x_1, x_39);
lean_dec(x_39);
if (x_40 == 0)
{
lean_object* x_41; lean_object* x_42; 
lean_dec_ref(x_35);
lean_dec(x_34);
lean_dec_ref(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_4);
lean_dec_ref(x_3);
x_41 = lean_alloc_ctor(12, 1, 0);
lean_ctor_set(x_41, 0, x_1);
x_42 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_42, 0, x_41);
return x_42;
}
else
{
lean_object* x_43; lean_object* x_44; lean_object* x_45; uint8_t x_46; lean_object* x_71; uint8_t x_72; 
x_43 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_43);
x_44 = lean_ctor_get(x_3, 1);
lean_inc(x_44);
if (lean_is_exclusive(x_3)) {
 lean_ctor_release(x_3, 0);
 lean_ctor_release(x_3, 1);
 x_45 = x_3;
} else {
 lean_dec_ref(x_3);
 x_45 = lean_box(0);
}
x_71 = lean_byte_array_size(x_43);
x_72 = lean_nat_dec_lt(x_44, x_71);
if (x_72 == 0)
{
lean_object* x_73; 
lean_dec(x_45);
lean_dec(x_44);
lean_dec_ref(x_43);
lean_dec_ref(x_35);
lean_dec(x_34);
lean_dec_ref(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_4);
lean_dec(x_1);
x_73 = ((lean_object*)(lp_lean_x2dbdiff_LeanBdiff_Vcdiff_AddressCache_decode___closed__0));
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
x_46 = x_77;
goto block_70;
}
else
{
uint8_t x_78; 
x_78 = lean_byte_array_fget(x_43, x_44);
x_46 = x_78;
goto block_70;
}
}
block_70:
{
lean_object* x_47; lean_object* x_48; lean_object* x_49; lean_object* x_50; lean_object* x_51; lean_object* x_52; lean_object* x_53; lean_object* x_54; lean_object* x_55; uint8_t x_56; 
x_47 = lean_nat_add(x_44, x_29);
lean_dec(x_44);
if (lean_is_scalar(x_45)) {
 x_48 = lean_alloc_ctor(0, 2, 0);
} else {
 x_48 = x_45;
}
lean_ctor_set(x_48, 0, x_43);
lean_ctor_set(x_48, 1, x_47);
x_49 = lean_nat_sub(x_1, x_36);
lean_dec(x_1);
x_50 = lean_nat_sub(x_49, x_31);
lean_dec(x_49);
x_51 = lean_unsigned_to_nat(256u);
x_52 = lean_nat_mul(x_50, x_51);
lean_dec(x_50);
x_53 = lean_uint8_to_nat(x_46);
x_54 = lean_nat_add(x_52, x_53);
lean_dec(x_52);
x_55 = lean_array_get(x_12, x_35, x_54);
lean_dec(x_54);
x_56 = lean_nat_dec_lt(x_12, x_31);
if (x_56 == 0)
{
x_13 = x_51;
x_14 = x_48;
x_15 = x_55;
x_16 = x_4;
x_17 = x_31;
x_18 = x_32;
x_19 = x_33;
x_20 = x_34;
x_21 = x_35;
goto block_27;
}
else
{
uint8_t x_57; 
x_57 = !lean_is_exclusive(x_4);
if (x_57 == 0)
{
lean_object* x_58; lean_object* x_59; lean_object* x_60; lean_object* x_61; lean_object* x_62; lean_object* x_63; lean_object* x_64; lean_object* x_65; 
x_58 = lean_ctor_get(x_4, 4);
lean_dec(x_58);
x_59 = lean_ctor_get(x_4, 3);
lean_dec(x_59);
x_60 = lean_ctor_get(x_4, 2);
lean_dec(x_60);
x_61 = lean_ctor_get(x_4, 1);
lean_dec(x_61);
x_62 = lean_ctor_get(x_4, 0);
lean_dec(x_62);
lean_inc(x_55);
x_63 = lean_array_set(x_33, x_34, x_55);
x_64 = lean_nat_add(x_34, x_29);
lean_dec(x_34);
x_65 = lean_nat_mod(x_64, x_31);
lean_dec(x_64);
lean_inc_ref(x_35);
lean_inc(x_65);
lean_inc_ref(x_63);
lean_inc(x_32);
lean_inc(x_31);
lean_ctor_set(x_4, 3, x_65);
lean_ctor_set(x_4, 2, x_63);
x_13 = x_51;
x_14 = x_48;
x_15 = x_55;
x_16 = x_4;
x_17 = x_31;
x_18 = x_32;
x_19 = x_63;
x_20 = x_65;
x_21 = x_35;
goto block_27;
}
else
{
lean_object* x_66; lean_object* x_67; lean_object* x_68; lean_object* x_69; 
lean_dec(x_4);
lean_inc(x_55);
x_66 = lean_array_set(x_33, x_34, x_55);
x_67 = lean_nat_add(x_34, x_29);
lean_dec(x_34);
x_68 = lean_nat_mod(x_67, x_31);
lean_dec(x_67);
lean_inc_ref(x_35);
lean_inc(x_68);
lean_inc_ref(x_66);
lean_inc(x_32);
lean_inc(x_31);
x_69 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_69, 0, x_31);
lean_ctor_set(x_69, 1, x_32);
lean_ctor_set(x_69, 2, x_66);
lean_ctor_set(x_69, 3, x_68);
lean_ctor_set(x_69, 4, x_35);
x_13 = x_51;
x_14 = x_48;
x_15 = x_55;
x_16 = x_69;
x_17 = x_31;
x_18 = x_32;
x_19 = x_66;
x_20 = x_68;
x_21 = x_35;
goto block_27;
}
}
}
}
}
else
{
lean_object* x_79; lean_object* x_80; lean_object* x_81; lean_object* x_82; 
lean_dec(x_37);
x_79 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_79);
x_80 = lean_ctor_get(x_3, 1);
lean_inc(x_80);
lean_dec_ref(x_3);
x_81 = lean_unsigned_to_nat(5u);
x_82 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_79, x_80, x_12, x_81);
if (lean_obj_tag(x_82) == 0)
{
uint8_t x_83; 
lean_dec_ref(x_35);
lean_dec(x_34);
lean_dec_ref(x_33);
lean_dec(x_32);
lean_dec(x_31);
lean_dec_ref(x_4);
lean_dec(x_1);
x_83 = !lean_is_exclusive(x_82);
if (x_83 == 0)
{
return x_82;
}
else
{
lean_object* x_84; lean_object* x_85; 
x_84 = lean_ctor_get(x_82, 0);
lean_inc(x_84);
lean_dec(x_82);
x_85 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_85, 0, x_84);
return x_85;
}
}
else
{
lean_object* x_86; lean_object* x_87; lean_object* x_88; lean_object* x_89; lean_object* x_90; lean_object* x_91; lean_object* x_92; lean_object* x_93; lean_object* x_94; lean_object* x_99; lean_object* x_100; lean_object* x_101; lean_object* x_102; lean_object* x_103; lean_object* x_104; uint8_t x_112; 
x_86 = lean_ctor_get(x_82, 0);
lean_inc(x_86);
if (lean_is_exclusive(x_82)) {
 lean_ctor_release(x_82, 0);
 x_87 = x_82;
} else {
 lean_dec_ref(x_82);
 x_87 = lean_box(0);
}
x_88 = lean_ctor_get(x_86, 0);
lean_inc(x_88);
x_89 = lean_ctor_get(x_86, 1);
lean_inc(x_89);
if (lean_is_exclusive(x_86)) {
 lean_ctor_release(x_86, 0);
 lean_ctor_release(x_86, 1);
 x_90 = x_86;
} else {
 lean_dec_ref(x_86);
 x_90 = lean_box(0);
}
x_91 = lean_nat_sub(x_1, x_36);
lean_dec(x_1);
x_92 = lean_array_get_borrowed(x_12, x_33, x_91);
lean_dec(x_91);
x_93 = lean_nat_add(x_92, x_88);
lean_dec(x_88);
x_112 = lean_nat_dec_lt(x_12, x_31);
if (x_112 == 0)
{
x_99 = x_4;
x_100 = x_31;
x_101 = x_32;
x_102 = x_33;
x_103 = x_34;
x_104 = x_35;
goto block_111;
}
else
{
uint8_t x_113; 
x_113 = !lean_is_exclusive(x_4);
if (x_113 == 0)
{
lean_object* x_114; lean_object* x_115; lean_object* x_116; lean_object* x_117; lean_object* x_118; lean_object* x_119; lean_object* x_120; lean_object* x_121; 
x_114 = lean_ctor_get(x_4, 4);
lean_dec(x_114);
x_115 = lean_ctor_get(x_4, 3);
lean_dec(x_115);
x_116 = lean_ctor_get(x_4, 2);
lean_dec(x_116);
x_117 = lean_ctor_get(x_4, 1);
lean_dec(x_117);
x_118 = lean_ctor_get(x_4, 0);
lean_dec(x_118);
lean_inc(x_93);
x_119 = lean_array_set(x_33, x_34, x_93);
x_120 = lean_nat_add(x_34, x_29);
lean_dec(x_34);
x_121 = lean_nat_mod(x_120, x_31);
lean_dec(x_120);
lean_inc_ref(x_35);
lean_inc(x_121);
lean_inc_ref(x_119);
lean_inc(x_32);
lean_inc(x_31);
lean_ctor_set(x_4, 3, x_121);
lean_ctor_set(x_4, 2, x_119);
x_99 = x_4;
x_100 = x_31;
x_101 = x_32;
x_102 = x_119;
x_103 = x_121;
x_104 = x_35;
goto block_111;
}
else
{
lean_object* x_122; lean_object* x_123; lean_object* x_124; lean_object* x_125; 
lean_dec(x_4);
lean_inc(x_93);
x_122 = lean_array_set(x_33, x_34, x_93);
x_123 = lean_nat_add(x_34, x_29);
lean_dec(x_34);
x_124 = lean_nat_mod(x_123, x_31);
lean_dec(x_123);
lean_inc_ref(x_35);
lean_inc(x_124);
lean_inc_ref(x_122);
lean_inc(x_32);
lean_inc(x_31);
x_125 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_125, 0, x_31);
lean_ctor_set(x_125, 1, x_32);
lean_ctor_set(x_125, 2, x_122);
lean_ctor_set(x_125, 3, x_124);
lean_ctor_set(x_125, 4, x_35);
x_99 = x_125;
x_100 = x_31;
x_101 = x_32;
x_102 = x_122;
x_103 = x_124;
x_104 = x_35;
goto block_111;
}
}
block_98:
{
lean_object* x_95; lean_object* x_96; lean_object* x_97; 
if (lean_is_scalar(x_90)) {
 x_95 = lean_alloc_ctor(0, 2, 0);
} else {
 x_95 = x_90;
}
lean_ctor_set(x_95, 0, x_89);
lean_ctor_set(x_95, 1, x_94);
x_96 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_96, 0, x_93);
lean_ctor_set(x_96, 1, x_95);
if (lean_is_scalar(x_87)) {
 x_97 = lean_alloc_ctor(1, 1, 0);
} else {
 x_97 = x_87;
}
lean_ctor_set(x_97, 0, x_96);
return x_97;
}
block_111:
{
uint8_t x_105; 
x_105 = lean_nat_dec_lt(x_12, x_101);
if (x_105 == 0)
{
lean_dec_ref(x_104);
lean_dec(x_103);
lean_dec_ref(x_102);
lean_dec(x_101);
lean_dec(x_100);
x_94 = x_99;
goto block_98;
}
else
{
lean_object* x_106; lean_object* x_107; lean_object* x_108; lean_object* x_109; lean_object* x_110; 
lean_dec_ref(x_99);
x_106 = lean_unsigned_to_nat(256u);
x_107 = lean_nat_mul(x_101, x_106);
x_108 = lean_nat_mod(x_93, x_107);
lean_dec(x_107);
lean_inc(x_93);
x_109 = lean_array_set(x_104, x_108, x_93);
lean_dec(x_108);
x_110 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_110, 0, x_100);
lean_ctor_set(x_110, 1, x_101);
lean_ctor_set(x_110, 2, x_102);
lean_ctor_set(x_110, 3, x_103);
lean_ctor_set(x_110, 4, x_109);
x_94 = x_110;
goto block_98;
}
}
}
}
}
else
{
lean_object* x_126; lean_object* x_127; lean_object* x_128; lean_object* x_129; 
lean_dec(x_1);
x_126 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_126);
x_127 = lean_ctor_get(x_3, 1);
lean_inc(x_127);
lean_dec_ref(x_3);
x_128 = lean_unsigned_to_nat(5u);
x_129 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_126, x_127, x_12, x_128);
if (lean_obj_tag(x_129) == 0)
{
uint8_t x_130; 
lean_dec_ref(x_4);
x_130 = !lean_is_exclusive(x_129);
if (x_130 == 0)
{
return x_129;
}
else
{
lean_object* x_131; lean_object* x_132; 
x_131 = lean_ctor_get(x_129, 0);
lean_inc(x_131);
lean_dec(x_129);
x_132 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_132, 0, x_131);
return x_132;
}
}
else
{
lean_object* x_133; lean_object* x_134; lean_object* x_135; lean_object* x_136; lean_object* x_137; lean_object* x_138; lean_object* x_139; lean_object* x_140; lean_object* x_141; lean_object* x_142; lean_object* x_143; lean_object* x_144; lean_object* x_149; lean_object* x_150; lean_object* x_151; lean_object* x_152; lean_object* x_153; lean_object* x_154; uint8_t x_162; 
x_133 = lean_ctor_get(x_129, 0);
lean_inc(x_133);
if (lean_is_exclusive(x_129)) {
 lean_ctor_release(x_129, 0);
 x_134 = x_129;
} else {
 lean_dec_ref(x_129);
 x_134 = lean_box(0);
}
x_135 = lean_ctor_get(x_133, 0);
lean_inc(x_135);
x_136 = lean_ctor_get(x_133, 1);
lean_inc(x_136);
if (lean_is_exclusive(x_133)) {
 lean_ctor_release(x_133, 0);
 lean_ctor_release(x_133, 1);
 x_137 = x_133;
} else {
 lean_dec_ref(x_133);
 x_137 = lean_box(0);
}
x_138 = lean_ctor_get(x_4, 0);
lean_inc(x_138);
x_139 = lean_ctor_get(x_4, 1);
lean_inc(x_139);
x_140 = lean_ctor_get(x_4, 2);
lean_inc_ref(x_140);
x_141 = lean_ctor_get(x_4, 3);
lean_inc(x_141);
x_142 = lean_ctor_get(x_4, 4);
lean_inc_ref(x_142);
x_143 = lean_nat_sub(x_2, x_135);
lean_dec(x_135);
x_162 = lean_nat_dec_lt(x_12, x_138);
if (x_162 == 0)
{
x_149 = x_4;
x_150 = x_138;
x_151 = x_139;
x_152 = x_140;
x_153 = x_141;
x_154 = x_142;
goto block_161;
}
else
{
uint8_t x_163; 
x_163 = !lean_is_exclusive(x_4);
if (x_163 == 0)
{
lean_object* x_164; lean_object* x_165; lean_object* x_166; lean_object* x_167; lean_object* x_168; lean_object* x_169; lean_object* x_170; lean_object* x_171; 
x_164 = lean_ctor_get(x_4, 4);
lean_dec(x_164);
x_165 = lean_ctor_get(x_4, 3);
lean_dec(x_165);
x_166 = lean_ctor_get(x_4, 2);
lean_dec(x_166);
x_167 = lean_ctor_get(x_4, 1);
lean_dec(x_167);
x_168 = lean_ctor_get(x_4, 0);
lean_dec(x_168);
lean_inc(x_143);
x_169 = lean_array_set(x_140, x_141, x_143);
x_170 = lean_nat_add(x_141, x_29);
lean_dec(x_141);
x_171 = lean_nat_mod(x_170, x_138);
lean_dec(x_170);
lean_inc_ref(x_142);
lean_inc(x_171);
lean_inc_ref(x_169);
lean_inc(x_139);
lean_inc(x_138);
lean_ctor_set(x_4, 3, x_171);
lean_ctor_set(x_4, 2, x_169);
x_149 = x_4;
x_150 = x_138;
x_151 = x_139;
x_152 = x_169;
x_153 = x_171;
x_154 = x_142;
goto block_161;
}
else
{
lean_object* x_172; lean_object* x_173; lean_object* x_174; lean_object* x_175; 
lean_dec(x_4);
lean_inc(x_143);
x_172 = lean_array_set(x_140, x_141, x_143);
x_173 = lean_nat_add(x_141, x_29);
lean_dec(x_141);
x_174 = lean_nat_mod(x_173, x_138);
lean_dec(x_173);
lean_inc_ref(x_142);
lean_inc(x_174);
lean_inc_ref(x_172);
lean_inc(x_139);
lean_inc(x_138);
x_175 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_175, 0, x_138);
lean_ctor_set(x_175, 1, x_139);
lean_ctor_set(x_175, 2, x_172);
lean_ctor_set(x_175, 3, x_174);
lean_ctor_set(x_175, 4, x_142);
x_149 = x_175;
x_150 = x_138;
x_151 = x_139;
x_152 = x_172;
x_153 = x_174;
x_154 = x_142;
goto block_161;
}
}
block_148:
{
lean_object* x_145; lean_object* x_146; lean_object* x_147; 
if (lean_is_scalar(x_137)) {
 x_145 = lean_alloc_ctor(0, 2, 0);
} else {
 x_145 = x_137;
}
lean_ctor_set(x_145, 0, x_136);
lean_ctor_set(x_145, 1, x_144);
x_146 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_146, 0, x_143);
lean_ctor_set(x_146, 1, x_145);
if (lean_is_scalar(x_134)) {
 x_147 = lean_alloc_ctor(1, 1, 0);
} else {
 x_147 = x_134;
}
lean_ctor_set(x_147, 0, x_146);
return x_147;
}
block_161:
{
uint8_t x_155; 
x_155 = lean_nat_dec_lt(x_12, x_151);
if (x_155 == 0)
{
lean_dec_ref(x_154);
lean_dec(x_153);
lean_dec_ref(x_152);
lean_dec(x_151);
lean_dec(x_150);
x_144 = x_149;
goto block_148;
}
else
{
lean_object* x_156; lean_object* x_157; lean_object* x_158; lean_object* x_159; lean_object* x_160; 
lean_dec_ref(x_149);
x_156 = lean_unsigned_to_nat(256u);
x_157 = lean_nat_mul(x_151, x_156);
x_158 = lean_nat_mod(x_143, x_157);
lean_dec(x_157);
lean_inc(x_143);
x_159 = lean_array_set(x_154, x_158, x_143);
lean_dec(x_158);
x_160 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_160, 0, x_150);
lean_ctor_set(x_160, 1, x_151);
lean_ctor_set(x_160, 2, x_152);
lean_ctor_set(x_160, 3, x_153);
lean_ctor_set(x_160, 4, x_159);
x_144 = x_160;
goto block_148;
}
}
}
}
}
else
{
lean_object* x_176; lean_object* x_177; lean_object* x_178; lean_object* x_179; 
lean_dec(x_1);
x_176 = lean_ctor_get(x_3, 0);
lean_inc_ref(x_176);
x_177 = lean_ctor_get(x_3, 1);
lean_inc(x_177);
lean_dec_ref(x_3);
x_178 = lean_unsigned_to_nat(5u);
x_179 = lp_lean_x2dbdiff_LeanBdiff_Vcdiff_Varint_decodeLoop(x_176, x_177, x_12, x_178);
if (lean_obj_tag(x_179) == 0)
{
uint8_t x_180; 
lean_dec_ref(x_4);
x_180 = !lean_is_exclusive(x_179);
if (x_180 == 0)
{
return x_179;
}
else
{
lean_object* x_181; lean_object* x_182; 
x_181 = lean_ctor_get(x_179, 0);
lean_inc(x_181);
lean_dec(x_179);
x_182 = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(x_182, 0, x_181);
return x_182;
}
}
else
{
lean_object* x_183; lean_object* x_184; lean_object* x_185; lean_object* x_186; lean_object* x_187; lean_object* x_188; lean_object* x_193; lean_object* x_194; lean_object* x_195; lean_object* x_196; lean_object* x_197; lean_object* x_198; lean_object* x_206; lean_object* x_207; lean_object* x_208; lean_object* x_209; lean_object* x_210; uint8_t x_211; 
x_183 = lean_ctor_get(x_179, 0);
lean_inc(x_183);
if (lean_is_exclusive(x_179)) {
 lean_ctor_release(x_179, 0);
 x_184 = x_179;
} else {
 lean_dec_ref(x_179);
 x_184 = lean_box(0);
}
x_185 = lean_ctor_get(x_183, 0);
lean_inc(x_185);
x_186 = lean_ctor_get(x_183, 1);
lean_inc(x_186);
if (lean_is_exclusive(x_183)) {
 lean_ctor_release(x_183, 0);
 lean_ctor_release(x_183, 1);
 x_187 = x_183;
} else {
 lean_dec_ref(x_183);
 x_187 = lean_box(0);
}
x_206 = lean_ctor_get(x_4, 0);
lean_inc(x_206);
x_207 = lean_ctor_get(x_4, 1);
lean_inc(x_207);
x_208 = lean_ctor_get(x_4, 2);
lean_inc_ref(x_208);
x_209 = lean_ctor_get(x_4, 3);
lean_inc(x_209);
x_210 = lean_ctor_get(x_4, 4);
lean_inc_ref(x_210);
x_211 = lean_nat_dec_lt(x_12, x_206);
if (x_211 == 0)
{
x_193 = x_4;
x_194 = x_206;
x_195 = x_207;
x_196 = x_208;
x_197 = x_209;
x_198 = x_210;
goto block_205;
}
else
{
uint8_t x_212; 
x_212 = !lean_is_exclusive(x_4);
if (x_212 == 0)
{
lean_object* x_213; lean_object* x_214; lean_object* x_215; lean_object* x_216; lean_object* x_217; lean_object* x_218; lean_object* x_219; lean_object* x_220; lean_object* x_221; 
x_213 = lean_ctor_get(x_4, 4);
lean_dec(x_213);
x_214 = lean_ctor_get(x_4, 3);
lean_dec(x_214);
x_215 = lean_ctor_get(x_4, 2);
lean_dec(x_215);
x_216 = lean_ctor_get(x_4, 1);
lean_dec(x_216);
x_217 = lean_ctor_get(x_4, 0);
lean_dec(x_217);
lean_inc(x_185);
x_218 = lean_array_set(x_208, x_209, x_185);
x_219 = lean_unsigned_to_nat(1u);
x_220 = lean_nat_add(x_209, x_219);
lean_dec(x_209);
x_221 = lean_nat_mod(x_220, x_206);
lean_dec(x_220);
lean_inc_ref(x_210);
lean_inc(x_221);
lean_inc_ref(x_218);
lean_inc(x_207);
lean_inc(x_206);
lean_ctor_set(x_4, 3, x_221);
lean_ctor_set(x_4, 2, x_218);
x_193 = x_4;
x_194 = x_206;
x_195 = x_207;
x_196 = x_218;
x_197 = x_221;
x_198 = x_210;
goto block_205;
}
else
{
lean_object* x_222; lean_object* x_223; lean_object* x_224; lean_object* x_225; lean_object* x_226; 
lean_dec(x_4);
lean_inc(x_185);
x_222 = lean_array_set(x_208, x_209, x_185);
x_223 = lean_unsigned_to_nat(1u);
x_224 = lean_nat_add(x_209, x_223);
lean_dec(x_209);
x_225 = lean_nat_mod(x_224, x_206);
lean_dec(x_224);
lean_inc_ref(x_210);
lean_inc(x_225);
lean_inc_ref(x_222);
lean_inc(x_207);
lean_inc(x_206);
x_226 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_226, 0, x_206);
lean_ctor_set(x_226, 1, x_207);
lean_ctor_set(x_226, 2, x_222);
lean_ctor_set(x_226, 3, x_225);
lean_ctor_set(x_226, 4, x_210);
x_193 = x_226;
x_194 = x_206;
x_195 = x_207;
x_196 = x_222;
x_197 = x_225;
x_198 = x_210;
goto block_205;
}
}
block_192:
{
lean_object* x_189; lean_object* x_190; lean_object* x_191; 
if (lean_is_scalar(x_187)) {
 x_189 = lean_alloc_ctor(0, 2, 0);
} else {
 x_189 = x_187;
}
lean_ctor_set(x_189, 0, x_186);
lean_ctor_set(x_189, 1, x_188);
x_190 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_190, 0, x_185);
lean_ctor_set(x_190, 1, x_189);
if (lean_is_scalar(x_184)) {
 x_191 = lean_alloc_ctor(1, 1, 0);
} else {
 x_191 = x_184;
}
lean_ctor_set(x_191, 0, x_190);
return x_191;
}
block_205:
{
uint8_t x_199; 
x_199 = lean_nat_dec_lt(x_12, x_195);
if (x_199 == 0)
{
lean_dec_ref(x_198);
lean_dec(x_197);
lean_dec_ref(x_196);
lean_dec(x_195);
lean_dec(x_194);
x_188 = x_193;
goto block_192;
}
else
{
lean_object* x_200; lean_object* x_201; lean_object* x_202; lean_object* x_203; lean_object* x_204; 
lean_dec_ref(x_193);
x_200 = lean_unsigned_to_nat(256u);
x_201 = lean_nat_mul(x_195, x_200);
x_202 = lean_nat_mod(x_185, x_201);
lean_dec(x_201);
lean_inc(x_185);
x_203 = lean_array_set(x_198, x_202, x_185);
lean_dec(x_202);
x_204 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_204, 0, x_194);
lean_ctor_set(x_204, 1, x_195);
lean_ctor_set(x_204, 2, x_196);
lean_ctor_set(x_204, 3, x_197);
lean_ctor_set(x_204, 4, x_203);
x_188 = x_204;
goto block_192;
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
block_27:
{
uint8_t x_22; 
x_22 = lean_nat_dec_lt(x_12, x_18);
if (x_22 == 0)
{
lean_dec_ref(x_21);
lean_dec(x_20);
lean_dec_ref(x_19);
lean_dec(x_18);
lean_dec(x_17);
x_5 = x_14;
x_6 = x_15;
x_7 = x_16;
goto block_11;
}
else
{
lean_object* x_23; lean_object* x_24; lean_object* x_25; lean_object* x_26; 
lean_dec_ref(x_16);
x_23 = lean_nat_mul(x_18, x_13);
x_24 = lean_nat_mod(x_15, x_23);
lean_dec(x_23);
lean_inc(x_15);
x_25 = lean_array_set(x_21, x_24, x_15);
lean_dec(x_24);
x_26 = lean_alloc_ctor(0, 5, 0);
lean_ctor_set(x_26, 0, x_17);
lean_ctor_set(x_26, 1, x_18);
lean_ctor_set(x_26, 2, x_19);
lean_ctor_set(x_26, 3, x_20);
lean_ctor_set(x_26, 4, x_25);
x_5 = x_14;
x_6 = x_15;
x_7 = x_26;
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
