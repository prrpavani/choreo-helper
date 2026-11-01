// Lean compiler output
// Module: Choreo.Build
// Imports: public import Init public meta import Init public import Choreo.QuickRefute public import Choreo.Compose
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
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_array_to_list(lean_object*);
extern lean_object* lp_choreo_Choreo_Path_rest;
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_first(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Cert_check(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Nat_cast___at___00Dyadic_toRat_spec__0(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* l_Rat_pow(lean_object*, lean_object*);
lean_object* l_Rat_mul(lean_object*, lean_object*);
lean_object* l_Rat_add(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Config_durNum(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Config_durDen(lean_object*);
lean_object* lp_choreo_Choreo_speedPoly(lean_object*, lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Poly_bern(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
lean_object* l_Rat_sub(lean_object*, lean_object*);
uint8_t l_Rat_blt(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
uint8_t lp_choreo_Choreo_Path_inRect(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_pairCert(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_length(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* l_Repr_addAppParen(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_mul(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_choreo_Choreo_Poly_add(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_sub(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_scale(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_instDecidableEqPt_decEq(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instDecidableEqPt_decEq___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_instDecidableEqPt(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instDecidableEqPt___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_instInhabitedPt_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedPt_default___closed__0;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedPt_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedPt_default___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedPt_default;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedPt;
static const lean_string_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "{ "};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__0_value;
static const lean_string_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__1 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__1_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__2 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__3 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__3_value;
static const lean_string_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " := "};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__4 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__5 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__5_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__3_value),((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__5_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__6 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__6_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPt_repr___redArg___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__7;
static const lean_string_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " }"};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__8 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__8_value;
static lean_once_cell_t lp_choreo_Choreo_instReprPt_repr___redArg___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__9;
static lean_once_cell_t lp_choreo_Choreo_instReprPt_repr___redArg___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__10;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__0_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__11 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__11_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__8_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__12 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__12_value;
static const lean_string_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ","};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__13 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__13_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__13_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__14 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__14_value;
static const lean_string_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__15 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__15_value;
static const lean_ctor_object lp_choreo_Choreo_instReprPt_repr___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__15_value)}};
static const lean_object* lp_choreo_Choreo_instReprPt_repr___redArg___closed__16 = (const lean_object*)&lp_choreo_Choreo_instReprPt_repr___redArg___closed__16_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPt_repr___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPt_repr(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPt_repr___boxed(lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_instReprPt___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_instReprPt_repr___boxed, .m_arity = 2, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_instReprPt___closed__0 = (const lean_object*)&lp_choreo_Choreo_instReprPt___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instReprPt = (const lean_object*)&lp_choreo_Choreo_instReprPt___closed__0_value;
static lean_once_cell_t lp_choreo_Choreo_easePath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_easePath___closed__0;
static lean_once_cell_t lp_choreo_Choreo_easePath___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_easePath___closed__1;
static lean_once_cell_t lp_choreo_Choreo_easePath___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_easePath___closed__2;
static lean_once_cell_t lp_choreo_Choreo_easePath___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_easePath___closed__3;
static lean_once_cell_t lp_choreo_Choreo_easePath___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_easePath___closed__4;
static lean_once_cell_t lp_choreo_Choreo_easePath___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_easePath___closed__5;
LEAN_EXPORT lean_object* lp_choreo_Choreo_easePath(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_curvePath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_curvePath___closed__0;
static lean_once_cell_t lp_choreo_Choreo_curvePath___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_curvePath___closed__1;
static lean_once_cell_t lp_choreo_Choreo_curvePath___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_curvePath___closed__2;
static lean_once_cell_t lp_choreo_Choreo_curvePath___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_curvePath___closed__3;
static lean_once_cell_t lp_choreo_Choreo_curvePath___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_curvePath___closed__4;
static lean_once_cell_t lp_choreo_Choreo_curvePath___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_curvePath___closed__5;
static lean_once_cell_t lp_choreo_Choreo_curvePath___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_curvePath___closed__6;
LEAN_EXPORT lean_object* lp_choreo_Choreo_curvePath(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__0;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__1;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__2;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__3;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__4;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__5;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__6;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__7;
static lean_once_cell_t lp_choreo_Choreo_rotatePath___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rotatePath___closed__8;
LEAN_EXPORT lean_object* lp_choreo_Choreo_rotatePath(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rotatePath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_chooseCert_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_chooseCert_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCert_spec__1(lean_object*, lean_object*);
static const lean_ctor_object lp_choreo_Choreo_chooseCert___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 8, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),LEAN_SCALAR_PTR_LITERAL(1, 1, 0, 0, 0, 0, 0, 0)}};
static const lean_object* lp_choreo_Choreo_chooseCert___closed__0 = (const lean_object*)&lp_choreo_Choreo_chooseCert___closed__0_value;
static lean_once_cell_t lp_choreo_Choreo_chooseCert___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_chooseCert___closed__1;
static lean_once_cell_t lp_choreo_Choreo_chooseCert___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_chooseCert___closed__2;
static const lean_ctor_object lp_choreo_Choreo_chooseCert___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_chooseCert___closed__3 = (const lean_object*)&lp_choreo_Choreo_chooseCert___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCert(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCert___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_chooseCerts_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_chooseCerts_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_chooseCerts___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_chooseCerts___closed__0 = (const lean_object*)&lp_choreo_Choreo_chooseCerts___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCerts(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCerts___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_collision_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_collision_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_offStage_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_offStage_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_tooFast_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_tooFast_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_unproved_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_unproved_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_other_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_other_elim(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_instInhabitedProblem_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedProblem_default___closed__0;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedProblem_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedProblem_default___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedProblem_default;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedProblem;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sampleTimes_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_sampleTimes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sampleTimes___closed__0;
static lean_once_cell_t lp_choreo_Choreo_sampleTimes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sampleTimes___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_sampleTimes;
static lean_once_cell_t lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_clearanceAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Int_cast___at___00Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Phase_diagnose_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_Phase_diagnose_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00List_find_x3f___at___00Choreo_Phase_diagnose_spec__3_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Phase_diagnose_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_diagnose(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_instDecidableEqPt_decEq(lean_object* v_x_1_, lean_object* v_x_2_){
_start:
{
lean_object* v_x_3_; lean_object* v_y_4_; lean_object* v_x_5_; lean_object* v_y_6_; uint8_t v___x_7_; 
v_x_3_ = lean_ctor_get(v_x_1_, 0);
v_y_4_ = lean_ctor_get(v_x_1_, 1);
v_x_5_ = lean_ctor_get(v_x_2_, 0);
v_y_6_ = lean_ctor_get(v_x_2_, 1);
v___x_7_ = lean_int_dec_eq(v_x_3_, v_x_5_);
if (v___x_7_ == 0)
{
return v___x_7_;
}
else
{
uint8_t v___x_8_; 
v___x_8_ = lean_int_dec_eq(v_y_4_, v_y_6_);
return v___x_8_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instDecidableEqPt_decEq___boxed(lean_object* v_x_9_, lean_object* v_x_10_){
_start:
{
uint8_t v_res_11_; lean_object* v_r_12_; 
v_res_11_ = lp_choreo_Choreo_instDecidableEqPt_decEq(v_x_9_, v_x_10_);
lean_dec_ref(v_x_10_);
lean_dec_ref(v_x_9_);
v_r_12_ = lean_box(v_res_11_);
return v_r_12_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_instDecidableEqPt(lean_object* v_x_13_, lean_object* v_x_14_){
_start:
{
uint8_t v___x_15_; 
v___x_15_ = lp_choreo_Choreo_instDecidableEqPt_decEq(v_x_13_, v_x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instDecidableEqPt___boxed(lean_object* v_x_16_, lean_object* v_x_17_){
_start:
{
uint8_t v_res_18_; lean_object* v_r_19_; 
v_res_18_ = lp_choreo_Choreo_instDecidableEqPt(v_x_16_, v_x_17_);
lean_dec_ref(v_x_17_);
lean_dec_ref(v_x_16_);
v_r_19_ = lean_box(v_res_18_);
return v_r_19_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0(void){
_start:
{
lean_object* v___x_20_; lean_object* v___x_21_; 
v___x_20_ = lean_unsigned_to_nat(0u);
v___x_21_ = lean_nat_to_int(v___x_20_);
return v___x_21_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPt_default___closed__1(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__0, &lp_choreo_Choreo_instInhabitedPt_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0);
v___x_23_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPt_default(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__1, &lp_choreo_Choreo_instInhabitedPt_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__1);
return v___x_24_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPt(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lp_choreo_Choreo_instInhabitedPt_default;
return v___x_25_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPt_repr___redArg___closed__7(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(5u);
v___x_40_ = lean_nat_to_int(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPt_repr___redArg___closed__9(void){
_start:
{
lean_object* v___x_42_; lean_object* v___x_43_; 
v___x_42_ = ((lean_object*)(lp_choreo_Choreo_instReprPt_repr___redArg___closed__0));
v___x_43_ = lean_string_length(v___x_42_);
return v___x_43_;
}
}
static lean_object* _init_lp_choreo_Choreo_instReprPt_repr___redArg___closed__10(void){
_start:
{
lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_44_ = lean_obj_once(&lp_choreo_Choreo_instReprPt_repr___redArg___closed__9, &lp_choreo_Choreo_instReprPt_repr___redArg___closed__9_once, _init_lp_choreo_Choreo_instReprPt_repr___redArg___closed__9);
v___x_45_ = lean_nat_to_int(v___x_44_);
return v___x_45_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPt_repr___redArg(lean_object* v_x_56_){
_start:
{
lean_object* v_x_57_; lean_object* v_y_58_; lean_object* v___x_60_; uint8_t v_isShared_61_; uint8_t v_isSharedCheck_110_; 
v_x_57_ = lean_ctor_get(v_x_56_, 0);
v_y_58_ = lean_ctor_get(v_x_56_, 1);
v_isSharedCheck_110_ = !lean_is_exclusive(v_x_56_);
if (v_isSharedCheck_110_ == 0)
{
v___x_60_ = v_x_56_;
v_isShared_61_ = v_isSharedCheck_110_;
goto v_resetjp_59_;
}
else
{
lean_inc(v_y_58_);
lean_inc(v_x_57_);
lean_dec(v_x_56_);
v___x_60_ = lean_box(0);
v_isShared_61_ = v_isSharedCheck_110_;
goto v_resetjp_59_;
}
v_resetjp_59_:
{
lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___y_66_; uint8_t v___y_67_; lean_object* v___y_68_; lean_object* v___y_82_; lean_object* v___x_102_; lean_object* v___x_103_; uint8_t v___x_104_; 
v___x_62_ = ((lean_object*)(lp_choreo_Choreo_instReprPt_repr___redArg___closed__5));
v___x_63_ = ((lean_object*)(lp_choreo_Choreo_instReprPt_repr___redArg___closed__6));
v___x_64_ = lean_obj_once(&lp_choreo_Choreo_instReprPt_repr___redArg___closed__7, &lp_choreo_Choreo_instReprPt_repr___redArg___closed__7_once, _init_lp_choreo_Choreo_instReprPt_repr___redArg___closed__7);
v___x_102_ = lean_unsigned_to_nat(0u);
v___x_103_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__0, &lp_choreo_Choreo_instInhabitedPt_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0);
v___x_104_ = lean_int_dec_lt(v_x_57_, v___x_103_);
if (v___x_104_ == 0)
{
lean_object* v___x_105_; lean_object* v___x_106_; 
v___x_105_ = l_Int_repr(v_x_57_);
lean_dec(v_x_57_);
v___x_106_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_106_, 0, v___x_105_);
v___y_82_ = v___x_106_;
goto v___jp_81_;
}
else
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_109_; 
v___x_107_ = l_Int_repr(v_x_57_);
lean_dec(v_x_57_);
v___x_108_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_108_, 0, v___x_107_);
v___x_109_ = l_Repr_addAppParen(v___x_108_, v___x_102_);
v___y_82_ = v___x_109_;
goto v___jp_81_;
}
v___jp_65_:
{
lean_object* v___x_70_; 
if (v_isShared_61_ == 0)
{
lean_ctor_set_tag(v___x_60_, 4);
lean_ctor_set(v___x_60_, 1, v___y_68_);
lean_ctor_set(v___x_60_, 0, v___x_64_);
v___x_70_ = v___x_60_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_80_; 
v_reuseFailAlloc_80_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_80_, 0, v___x_64_);
lean_ctor_set(v_reuseFailAlloc_80_, 1, v___y_68_);
v___x_70_ = v_reuseFailAlloc_80_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; lean_object* v___x_76_; lean_object* v___x_77_; lean_object* v___x_78_; lean_object* v___x_79_; 
v___x_71_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_71_, 0, v___x_70_);
lean_ctor_set_uint8(v___x_71_, sizeof(void*)*1, v___y_67_);
v___x_72_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_72_, 0, v___y_66_);
lean_ctor_set(v___x_72_, 1, v___x_71_);
v___x_73_ = lean_obj_once(&lp_choreo_Choreo_instReprPt_repr___redArg___closed__10, &lp_choreo_Choreo_instReprPt_repr___redArg___closed__10_once, _init_lp_choreo_Choreo_instReprPt_repr___redArg___closed__10);
v___x_74_ = ((lean_object*)(lp_choreo_Choreo_instReprPt_repr___redArg___closed__11));
v___x_75_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
lean_ctor_set(v___x_75_, 1, v___x_72_);
v___x_76_ = ((lean_object*)(lp_choreo_Choreo_instReprPt_repr___redArg___closed__12));
v___x_77_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_77_, 0, v___x_75_);
lean_ctor_set(v___x_77_, 1, v___x_76_);
v___x_78_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_78_, 0, v___x_73_);
lean_ctor_set(v___x_78_, 1, v___x_77_);
v___x_79_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_79_, 0, v___x_78_);
lean_ctor_set_uint8(v___x_79_, sizeof(void*)*1, v___y_67_);
return v___x_79_;
}
}
v___jp_81_:
{
lean_object* v___x_83_; uint8_t v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_89_; lean_object* v___x_90_; lean_object* v___x_91_; lean_object* v___x_92_; lean_object* v___x_93_; lean_object* v___x_94_; lean_object* v___x_95_; uint8_t v___x_96_; 
v___x_83_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v___x_83_, 0, v___x_64_);
lean_ctor_set(v___x_83_, 1, v___y_82_);
v___x_84_ = 0;
v___x_85_ = lean_alloc_ctor(6, 1, 1);
lean_ctor_set(v___x_85_, 0, v___x_83_);
lean_ctor_set_uint8(v___x_85_, sizeof(void*)*1, v___x_84_);
v___x_86_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_86_, 0, v___x_63_);
lean_ctor_set(v___x_86_, 1, v___x_85_);
v___x_87_ = ((lean_object*)(lp_choreo_Choreo_instReprPt_repr___redArg___closed__14));
v___x_88_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_86_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
v___x_89_ = lean_box(1);
v___x_90_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_90_, 0, v___x_88_);
lean_ctor_set(v___x_90_, 1, v___x_89_);
v___x_91_ = ((lean_object*)(lp_choreo_Choreo_instReprPt_repr___redArg___closed__16));
v___x_92_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_92_, 0, v___x_90_);
lean_ctor_set(v___x_92_, 1, v___x_91_);
v___x_93_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_93_, 0, v___x_92_);
lean_ctor_set(v___x_93_, 1, v___x_62_);
v___x_94_ = lean_unsigned_to_nat(0u);
v___x_95_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__0, &lp_choreo_Choreo_instInhabitedPt_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0);
v___x_96_ = lean_int_dec_lt(v_y_58_, v___x_95_);
if (v___x_96_ == 0)
{
lean_object* v___x_97_; lean_object* v___x_98_; 
v___x_97_ = l_Int_repr(v_y_58_);
lean_dec(v_y_58_);
v___x_98_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_98_, 0, v___x_97_);
v___y_66_ = v___x_93_;
v___y_67_ = v___x_84_;
v___y_68_ = v___x_98_;
goto v___jp_65_;
}
else
{
lean_object* v___x_99_; lean_object* v___x_100_; lean_object* v___x_101_; 
v___x_99_ = l_Int_repr(v_y_58_);
lean_dec(v_y_58_);
v___x_100_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_100_, 0, v___x_99_);
v___x_101_ = l_Repr_addAppParen(v___x_100_, v___x_94_);
v___y_66_ = v___x_93_;
v___y_67_ = v___x_84_;
v___y_68_ = v___x_101_;
goto v___jp_65_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPt_repr(lean_object* v_x_111_, lean_object* v_prec_112_){
_start:
{
lean_object* v___x_113_; 
v___x_113_ = lp_choreo_Choreo_instReprPt_repr___redArg(v_x_111_);
return v___x_113_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_instReprPt_repr___boxed(lean_object* v_x_114_, lean_object* v_prec_115_){
_start:
{
lean_object* v_res_116_; 
v_res_116_ = lp_choreo_Choreo_instReprPt_repr(v_x_114_, v_prec_115_);
lean_dec(v_prec_115_);
return v_res_116_;
}
}
static lean_object* _init_lp_choreo_Choreo_easePath___closed__0(void){
_start:
{
lean_object* v___x_119_; lean_object* v___x_120_; 
v___x_119_ = lean_unsigned_to_nat(3u);
v___x_120_ = lean_nat_to_int(v___x_119_);
return v___x_120_;
}
}
static lean_object* _init_lp_choreo_Choreo_easePath___closed__1(void){
_start:
{
lean_object* v___x_121_; lean_object* v___x_122_; 
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_to_int(v___x_121_);
return v___x_122_;
}
}
static lean_object* _init_lp_choreo_Choreo_easePath___closed__2(void){
_start:
{
lean_object* v___x_123_; lean_object* v___x_124_; lean_object* v___x_125_; 
v___x_123_ = lean_box(0);
v___x_124_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__1, &lp_choreo_Choreo_easePath___closed__1_once, _init_lp_choreo_Choreo_easePath___closed__1);
v___x_125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_125_, 0, v___x_124_);
lean_ctor_set(v___x_125_, 1, v___x_123_);
return v___x_125_;
}
}
static lean_object* _init_lp_choreo_Choreo_easePath___closed__3(void){
_start:
{
lean_object* v___x_126_; lean_object* v___x_127_; lean_object* v___x_128_; 
v___x_126_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__2, &lp_choreo_Choreo_easePath___closed__2_once, _init_lp_choreo_Choreo_easePath___closed__2);
v___x_127_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__0, &lp_choreo_Choreo_easePath___closed__0_once, _init_lp_choreo_Choreo_easePath___closed__0);
v___x_128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_128_, 0, v___x_127_);
lean_ctor_set(v___x_128_, 1, v___x_126_);
return v___x_128_;
}
}
static lean_object* _init_lp_choreo_Choreo_easePath___closed__4(void){
_start:
{
lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_129_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__3, &lp_choreo_Choreo_easePath___closed__3_once, _init_lp_choreo_Choreo_easePath___closed__3);
v___x_130_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__0, &lp_choreo_Choreo_easePath___closed__0_once, _init_lp_choreo_Choreo_easePath___closed__0);
v___x_131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_131_, 0, v___x_130_);
lean_ctor_set(v___x_131_, 1, v___x_129_);
return v___x_131_;
}
}
static lean_object* _init_lp_choreo_Choreo_easePath___closed__5(void){
_start:
{
lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v___x_132_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__4, &lp_choreo_Choreo_easePath___closed__4_once, _init_lp_choreo_Choreo_easePath___closed__4);
v___x_133_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__1, &lp_choreo_Choreo_easePath___closed__1_once, _init_lp_choreo_Choreo_easePath___closed__1);
v___x_134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_133_);
lean_ctor_set(v___x_134_, 1, v___x_132_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_easePath(lean_object* v_a_135_, lean_object* v_b_136_){
_start:
{
lean_object* v_x_137_; lean_object* v_y_138_; lean_object* v___x_140_; uint8_t v_isShared_141_; uint8_t v_isSharedCheck_168_; 
v_x_137_ = lean_ctor_get(v_a_135_, 0);
v_y_138_ = lean_ctor_get(v_a_135_, 1);
v_isSharedCheck_168_ = !lean_is_exclusive(v_a_135_);
if (v_isSharedCheck_168_ == 0)
{
v___x_140_ = v_a_135_;
v_isShared_141_ = v_isSharedCheck_168_;
goto v_resetjp_139_;
}
else
{
lean_inc(v_y_138_);
lean_inc(v_x_137_);
lean_dec(v_a_135_);
v___x_140_ = lean_box(0);
v_isShared_141_ = v_isSharedCheck_168_;
goto v_resetjp_139_;
}
v_resetjp_139_:
{
lean_object* v_x_142_; lean_object* v_y_143_; lean_object* v___x_145_; uint8_t v_isShared_146_; uint8_t v_isSharedCheck_167_; 
v_x_142_ = lean_ctor_get(v_b_136_, 0);
v_y_143_ = lean_ctor_get(v_b_136_, 1);
v_isSharedCheck_167_ = !lean_is_exclusive(v_b_136_);
if (v_isSharedCheck_167_ == 0)
{
v___x_145_ = v_b_136_;
v_isShared_146_ = v_isSharedCheck_167_;
goto v_resetjp_144_;
}
else
{
lean_inc(v_y_143_);
lean_inc(v_x_142_);
lean_dec(v_b_136_);
v___x_145_ = lean_box(0);
v_isShared_146_ = v_isSharedCheck_167_;
goto v_resetjp_144_;
}
v_resetjp_144_:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; lean_object* v___x_150_; lean_object* v___x_152_; 
v___x_147_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__0, &lp_choreo_Choreo_easePath___closed__0_once, _init_lp_choreo_Choreo_easePath___closed__0);
v___x_148_ = lean_int_mul(v___x_147_, v_x_137_);
v___x_149_ = lean_int_mul(v___x_147_, v_x_142_);
v___x_150_ = lean_box(0);
if (v_isShared_146_ == 0)
{
lean_ctor_set_tag(v___x_145_, 1);
lean_ctor_set(v___x_145_, 1, v___x_150_);
v___x_152_ = v___x_145_;
goto v_reusejp_151_;
}
else
{
lean_object* v_reuseFailAlloc_166_; 
v_reuseFailAlloc_166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_166_, 0, v_x_142_);
lean_ctor_set(v_reuseFailAlloc_166_, 1, v___x_150_);
v___x_152_ = v_reuseFailAlloc_166_;
goto v_reusejp_151_;
}
v_reusejp_151_:
{
lean_object* v___x_154_; 
if (v_isShared_141_ == 0)
{
lean_ctor_set_tag(v___x_140_, 1);
lean_ctor_set(v___x_140_, 1, v___x_152_);
lean_ctor_set(v___x_140_, 0, v___x_149_);
v___x_154_ = v___x_140_;
goto v_reusejp_153_;
}
else
{
lean_object* v_reuseFailAlloc_165_; 
v_reuseFailAlloc_165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_165_, 0, v___x_149_);
lean_ctor_set(v_reuseFailAlloc_165_, 1, v___x_152_);
v___x_154_ = v_reuseFailAlloc_165_;
goto v_reusejp_153_;
}
v_reusejp_153_:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_155_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_155_, 0, v___x_148_);
lean_ctor_set(v___x_155_, 1, v___x_154_);
v___x_156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_156_, 0, v_x_137_);
lean_ctor_set(v___x_156_, 1, v___x_155_);
v___x_157_ = lean_int_mul(v___x_147_, v_y_138_);
v___x_158_ = lean_int_mul(v___x_147_, v_y_143_);
v___x_159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_159_, 0, v_y_143_);
lean_ctor_set(v___x_159_, 1, v___x_150_);
v___x_160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_160_, 0, v___x_158_);
lean_ctor_set(v___x_160_, 1, v___x_159_);
v___x_161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_161_, 0, v___x_157_);
lean_ctor_set(v___x_161_, 1, v___x_160_);
v___x_162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_162_, 0, v_y_138_);
lean_ctor_set(v___x_162_, 1, v___x_161_);
v___x_163_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__5, &lp_choreo_Choreo_easePath___closed__5_once, _init_lp_choreo_Choreo_easePath___closed__5);
v___x_164_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_164_, 0, v___x_156_);
lean_ctor_set(v___x_164_, 1, v___x_162_);
lean_ctor_set(v___x_164_, 2, v___x_163_);
return v___x_164_;
}
}
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_curvePath___closed__0(void){
_start:
{
lean_object* v___x_169_; lean_object* v___x_170_; 
v___x_169_ = lean_unsigned_to_nat(16u);
v___x_170_ = lean_nat_to_int(v___x_169_);
return v___x_170_;
}
}
static lean_object* _init_lp_choreo_Choreo_curvePath___closed__1(void){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = lean_unsigned_to_nat(6u);
v___x_172_ = lean_nat_to_int(v___x_171_);
return v___x_172_;
}
}
static lean_object* _init_lp_choreo_Choreo_curvePath___closed__2(void){
_start:
{
lean_object* v___x_173_; lean_object* v___x_174_; 
v___x_173_ = lean_unsigned_to_nat(4u);
v___x_174_ = lean_nat_to_int(v___x_173_);
return v___x_174_;
}
}
static lean_object* _init_lp_choreo_Choreo_curvePath___closed__3(void){
_start:
{
lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; 
v___x_175_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__2, &lp_choreo_Choreo_easePath___closed__2_once, _init_lp_choreo_Choreo_easePath___closed__2);
v___x_176_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__2, &lp_choreo_Choreo_curvePath___closed__2_once, _init_lp_choreo_Choreo_curvePath___closed__2);
v___x_177_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_177_, 0, v___x_176_);
lean_ctor_set(v___x_177_, 1, v___x_175_);
return v___x_177_;
}
}
static lean_object* _init_lp_choreo_Choreo_curvePath___closed__4(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; lean_object* v___x_180_; 
v___x_178_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__3, &lp_choreo_Choreo_curvePath___closed__3_once, _init_lp_choreo_Choreo_curvePath___closed__3);
v___x_179_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__1, &lp_choreo_Choreo_curvePath___closed__1_once, _init_lp_choreo_Choreo_curvePath___closed__1);
v___x_180_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_180_, 0, v___x_179_);
lean_ctor_set(v___x_180_, 1, v___x_178_);
return v___x_180_;
}
}
static lean_object* _init_lp_choreo_Choreo_curvePath___closed__5(void){
_start:
{
lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v___x_183_; 
v___x_181_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__4, &lp_choreo_Choreo_curvePath___closed__4_once, _init_lp_choreo_Choreo_curvePath___closed__4);
v___x_182_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__2, &lp_choreo_Choreo_curvePath___closed__2_once, _init_lp_choreo_Choreo_curvePath___closed__2);
v___x_183_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_183_, 0, v___x_182_);
lean_ctor_set(v___x_183_, 1, v___x_181_);
return v___x_183_;
}
}
static lean_object* _init_lp_choreo_Choreo_curvePath___closed__6(void){
_start:
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; 
v___x_184_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__5, &lp_choreo_Choreo_curvePath___closed__5_once, _init_lp_choreo_Choreo_curvePath___closed__5);
v___x_185_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__1, &lp_choreo_Choreo_easePath___closed__1_once, _init_lp_choreo_Choreo_easePath___closed__1);
v___x_186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_186_, 0, v___x_185_);
lean_ctor_set(v___x_186_, 1, v___x_184_);
return v___x_186_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_curvePath(lean_object* v_a_187_, lean_object* v_peak_188_, lean_object* v_b_189_, lean_object* v_bounds_190_){
_start:
{
lean_object* v_xmin_191_; lean_object* v_xmax_192_; lean_object* v_ymin_193_; lean_object* v_ymax_194_; lean_object* v_x_195_; lean_object* v_y_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_267_; 
v_xmin_191_ = lean_ctor_get(v_bounds_190_, 0);
lean_inc(v_xmin_191_);
v_xmax_192_ = lean_ctor_get(v_bounds_190_, 1);
lean_inc(v_xmax_192_);
v_ymin_193_ = lean_ctor_get(v_bounds_190_, 2);
lean_inc(v_ymin_193_);
v_ymax_194_ = lean_ctor_get(v_bounds_190_, 3);
lean_inc(v_ymax_194_);
lean_dec_ref(v_bounds_190_);
v_x_195_ = lean_ctor_get(v_peak_188_, 0);
v_y_196_ = lean_ctor_get(v_peak_188_, 1);
v_isSharedCheck_267_ = !lean_is_exclusive(v_peak_188_);
if (v_isSharedCheck_267_ == 0)
{
v___x_198_ = v_peak_188_;
v_isShared_199_ = v_isSharedCheck_267_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_y_196_);
lean_inc(v_x_195_);
lean_dec(v_peak_188_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_267_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v_x_200_; lean_object* v_y_201_; lean_object* v___x_203_; uint8_t v_isShared_204_; uint8_t v_isSharedCheck_266_; 
v_x_200_ = lean_ctor_get(v_a_187_, 0);
v_y_201_ = lean_ctor_get(v_a_187_, 1);
v_isSharedCheck_266_ = !lean_is_exclusive(v_a_187_);
if (v_isSharedCheck_266_ == 0)
{
v___x_203_ = v_a_187_;
v_isShared_204_ = v_isSharedCheck_266_;
goto v_resetjp_202_;
}
else
{
lean_inc(v_y_201_);
lean_inc(v_x_200_);
lean_dec(v_a_187_);
v___x_203_ = lean_box(0);
v_isShared_204_ = v_isSharedCheck_266_;
goto v_resetjp_202_;
}
v_resetjp_202_:
{
lean_object* v_x_205_; lean_object* v_y_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_265_; 
v_x_205_ = lean_ctor_get(v_b_189_, 0);
v_y_206_ = lean_ctor_get(v_b_189_, 1);
v_isSharedCheck_265_ = !lean_is_exclusive(v_b_189_);
if (v_isSharedCheck_265_ == 0)
{
v___x_208_ = v_b_189_;
v_isShared_209_ = v_isSharedCheck_265_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_y_206_);
lean_inc(v_x_205_);
lean_dec(v_b_189_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_265_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; lean_object* v___x_213_; lean_object* v___x_214_; lean_object* v___x_215_; lean_object* v___x_216_; lean_object* v___x_217_; lean_object* v___y_219_; lean_object* v___y_220_; lean_object* v___y_248_; lean_object* v___y_249_; lean_object* v___y_252_; lean_object* v___y_261_; lean_object* v___x_263_; uint8_t v___x_264_; 
v___x_210_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__0, &lp_choreo_Choreo_curvePath___closed__0_once, _init_lp_choreo_Choreo_curvePath___closed__0);
v___x_211_ = lean_int_mul(v___x_210_, v_x_195_);
lean_dec(v_x_195_);
v___x_212_ = lean_obj_once(&lp_choreo_Choreo_instReprPt_repr___redArg___closed__7, &lp_choreo_Choreo_instReprPt_repr___redArg___closed__7_once, _init_lp_choreo_Choreo_instReprPt_repr___redArg___closed__7);
v___x_213_ = lean_int_mul(v___x_212_, v_x_200_);
v___x_214_ = lean_int_sub(v___x_211_, v___x_213_);
lean_dec(v___x_213_);
lean_dec(v___x_211_);
v___x_215_ = lean_int_mul(v___x_212_, v_x_205_);
v___x_216_ = lean_int_sub(v___x_214_, v___x_215_);
lean_dec(v___x_215_);
lean_dec(v___x_214_);
v___x_217_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__1, &lp_choreo_Choreo_curvePath___closed__1_once, _init_lp_choreo_Choreo_curvePath___closed__1);
v___x_263_ = lean_int_ediv(v___x_216_, v___x_217_);
lean_dec(v___x_216_);
v___x_264_ = lean_int_dec_le(v_xmax_192_, v___x_263_);
if (v___x_264_ == 0)
{
lean_dec(v_xmax_192_);
v___y_261_ = v___x_263_;
goto v___jp_260_;
}
else
{
lean_dec(v___x_263_);
v___y_261_ = v_xmax_192_;
goto v___jp_260_;
}
v___jp_218_:
{
lean_object* v___x_221_; lean_object* v___x_222_; lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_227_; 
v___x_221_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__2, &lp_choreo_Choreo_curvePath___closed__2_once, _init_lp_choreo_Choreo_curvePath___closed__2);
v___x_222_ = lean_int_mul(v___x_221_, v_x_200_);
v___x_223_ = lean_int_mul(v___x_217_, v___y_219_);
lean_dec(v___y_219_);
v___x_224_ = lean_int_mul(v___x_221_, v_x_205_);
v___x_225_ = lean_box(0);
if (v_isShared_209_ == 0)
{
lean_ctor_set_tag(v___x_208_, 1);
lean_ctor_set(v___x_208_, 1, v___x_225_);
v___x_227_ = v___x_208_;
goto v_reusejp_226_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v_x_205_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v___x_225_);
v___x_227_ = v_reuseFailAlloc_246_;
goto v_reusejp_226_;
}
v_reusejp_226_:
{
lean_object* v___x_229_; 
if (v_isShared_204_ == 0)
{
lean_ctor_set_tag(v___x_203_, 1);
lean_ctor_set(v___x_203_, 1, v___x_227_);
lean_ctor_set(v___x_203_, 0, v___x_224_);
v___x_229_ = v___x_203_;
goto v_reusejp_228_;
}
else
{
lean_object* v_reuseFailAlloc_245_; 
v_reuseFailAlloc_245_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_245_, 0, v___x_224_);
lean_ctor_set(v_reuseFailAlloc_245_, 1, v___x_227_);
v___x_229_ = v_reuseFailAlloc_245_;
goto v_reusejp_228_;
}
v_reusejp_228_:
{
lean_object* v___x_231_; 
if (v_isShared_199_ == 0)
{
lean_ctor_set_tag(v___x_198_, 1);
lean_ctor_set(v___x_198_, 1, v___x_229_);
lean_ctor_set(v___x_198_, 0, v___x_223_);
v___x_231_ = v___x_198_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_244_; 
v_reuseFailAlloc_244_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_244_, 0, v___x_223_);
lean_ctor_set(v_reuseFailAlloc_244_, 1, v___x_229_);
v___x_231_ = v_reuseFailAlloc_244_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; 
v___x_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_222_);
lean_ctor_set(v___x_232_, 1, v___x_231_);
v___x_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_233_, 0, v_x_200_);
lean_ctor_set(v___x_233_, 1, v___x_232_);
v___x_234_ = lean_int_mul(v___x_221_, v_y_201_);
v___x_235_ = lean_int_mul(v___x_217_, v___y_220_);
lean_dec(v___y_220_);
v___x_236_ = lean_int_mul(v___x_221_, v_y_206_);
v___x_237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_237_, 0, v_y_206_);
lean_ctor_set(v___x_237_, 1, v___x_225_);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_236_);
lean_ctor_set(v___x_238_, 1, v___x_237_);
v___x_239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_239_, 0, v___x_235_);
lean_ctor_set(v___x_239_, 1, v___x_238_);
v___x_240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_240_, 0, v___x_234_);
lean_ctor_set(v___x_240_, 1, v___x_239_);
v___x_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_241_, 0, v_y_201_);
lean_ctor_set(v___x_241_, 1, v___x_240_);
v___x_242_ = lean_obj_once(&lp_choreo_Choreo_curvePath___closed__6, &lp_choreo_Choreo_curvePath___closed__6_once, _init_lp_choreo_Choreo_curvePath___closed__6);
v___x_243_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_243_, 0, v___x_233_);
lean_ctor_set(v___x_243_, 1, v___x_241_);
lean_ctor_set(v___x_243_, 2, v___x_242_);
return v___x_243_;
}
}
}
}
v___jp_247_:
{
uint8_t v___x_250_; 
v___x_250_ = lean_int_dec_le(v_ymin_193_, v___y_249_);
if (v___x_250_ == 0)
{
lean_dec(v___y_249_);
v___y_219_ = v___y_248_;
v___y_220_ = v_ymin_193_;
goto v___jp_218_;
}
else
{
lean_dec(v_ymin_193_);
v___y_219_ = v___y_248_;
v___y_220_ = v___y_249_;
goto v___jp_218_;
}
}
v___jp_251_:
{
lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v___x_253_ = lean_int_mul(v___x_210_, v_y_196_);
lean_dec(v_y_196_);
v___x_254_ = lean_int_mul(v___x_212_, v_y_201_);
v___x_255_ = lean_int_sub(v___x_253_, v___x_254_);
lean_dec(v___x_254_);
lean_dec(v___x_253_);
v___x_256_ = lean_int_mul(v___x_212_, v_y_206_);
v___x_257_ = lean_int_sub(v___x_255_, v___x_256_);
lean_dec(v___x_256_);
lean_dec(v___x_255_);
v___x_258_ = lean_int_ediv(v___x_257_, v___x_217_);
lean_dec(v___x_257_);
v___x_259_ = lean_int_dec_le(v_ymax_194_, v___x_258_);
if (v___x_259_ == 0)
{
lean_dec(v_ymax_194_);
v___y_248_ = v___y_252_;
v___y_249_ = v___x_258_;
goto v___jp_247_;
}
else
{
lean_dec(v___x_258_);
v___y_248_ = v___y_252_;
v___y_249_ = v_ymax_194_;
goto v___jp_247_;
}
}
v___jp_260_:
{
uint8_t v___x_262_; 
v___x_262_ = lean_int_dec_le(v_xmin_191_, v___y_261_);
if (v___x_262_ == 0)
{
lean_dec(v___y_261_);
v___y_252_ = v_xmin_191_;
goto v___jp_251_;
}
else
{
lean_dec(v_xmin_191_);
v___y_252_ = v___y_261_;
goto v___jp_251_;
}
}
}
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__0(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_268_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__3, &lp_choreo_Choreo_easePath___closed__3_once, _init_lp_choreo_Choreo_easePath___closed__3);
v___x_269_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__0, &lp_choreo_Choreo_instInhabitedPt_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0);
v___x_270_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_270_, 0, v___x_269_);
lean_ctor_set(v___x_270_, 1, v___x_268_);
return v___x_270_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__1(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v_P_273_; 
v___x_271_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__0, &lp_choreo_Choreo_rotatePath___closed__0_once, _init_lp_choreo_Choreo_rotatePath___closed__0);
v___x_272_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__0, &lp_choreo_Choreo_instInhabitedPt_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0);
v_P_273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_P_273_, 0, v___x_272_);
lean_ctor_set(v_P_273_, 1, v___x_271_);
return v_P_273_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__2(void){
_start:
{
lean_object* v_Q_274_; lean_object* v_QQ_275_; 
v_Q_274_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__5, &lp_choreo_Choreo_easePath___closed__5_once, _init_lp_choreo_Choreo_easePath___closed__5);
v_QQ_275_ = lp_choreo_Choreo_Poly_mul(v_Q_274_, v_Q_274_);
return v_QQ_275_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__3(void){
_start:
{
lean_object* v_P_276_; lean_object* v_PP_277_; 
v_P_276_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__1, &lp_choreo_Choreo_rotatePath___closed__1_once, _init_lp_choreo_Choreo_rotatePath___closed__1);
v_PP_277_ = lp_choreo_Choreo_Poly_mul(v_P_276_, v_P_276_);
return v_PP_277_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__4(void){
_start:
{
lean_object* v_PP_278_; lean_object* v_QQ_279_; lean_object* v_W_280_; 
v_PP_278_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__3, &lp_choreo_Choreo_rotatePath___closed__3_once, _init_lp_choreo_Choreo_rotatePath___closed__3);
v_QQ_279_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__2, &lp_choreo_Choreo_rotatePath___closed__2_once, _init_lp_choreo_Choreo_rotatePath___closed__2);
v_W_280_ = lp_choreo_Choreo_Poly_add(v_QQ_279_, v_PP_278_);
return v_W_280_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__5(void){
_start:
{
lean_object* v_PP_281_; lean_object* v_QQ_282_; lean_object* v_A_283_; 
v_PP_281_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__3, &lp_choreo_Choreo_rotatePath___closed__3_once, _init_lp_choreo_Choreo_rotatePath___closed__3);
v_QQ_282_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__2, &lp_choreo_Choreo_rotatePath___closed__2_once, _init_lp_choreo_Choreo_rotatePath___closed__2);
v_A_283_ = lp_choreo_Choreo_Poly_sub(v_QQ_282_, v_PP_281_);
return v_A_283_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__6(void){
_start:
{
lean_object* v___x_284_; lean_object* v___x_285_; 
v___x_284_ = lean_unsigned_to_nat(2u);
v___x_285_ = lean_nat_to_int(v___x_284_);
return v___x_285_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__7(void){
_start:
{
lean_object* v_Q_286_; lean_object* v_P_287_; lean_object* v___x_288_; 
v_Q_286_ = lean_obj_once(&lp_choreo_Choreo_easePath___closed__5, &lp_choreo_Choreo_easePath___closed__5_once, _init_lp_choreo_Choreo_easePath___closed__5);
v_P_287_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__1, &lp_choreo_Choreo_rotatePath___closed__1_once, _init_lp_choreo_Choreo_rotatePath___closed__1);
v___x_288_ = lp_choreo_Choreo_Poly_mul(v_P_287_, v_Q_286_);
return v___x_288_;
}
}
static lean_object* _init_lp_choreo_Choreo_rotatePath___closed__8(void){
_start:
{
lean_object* v___x_289_; lean_object* v___x_290_; lean_object* v_B_291_; 
v___x_289_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__7, &lp_choreo_Choreo_rotatePath___closed__7_once, _init_lp_choreo_Choreo_rotatePath___closed__7);
v___x_290_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__6, &lp_choreo_Choreo_rotatePath___closed__6_once, _init_lp_choreo_Choreo_rotatePath___closed__6);
v_B_291_ = lp_choreo_Choreo_Poly_scale(v___x_290_, v___x_289_);
return v_B_291_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rotatePath(lean_object* v_c_292_, lean_object* v_a_293_, uint8_t v_ccw_294_){
_start:
{
lean_object* v_x_295_; lean_object* v_y_296_; lean_object* v_x_297_; lean_object* v_y_298_; lean_object* v_W_299_; lean_object* v_A_300_; lean_object* v_B_301_; lean_object* v_dx_302_; lean_object* v___y_304_; 
v_x_295_ = lean_ctor_get(v_a_293_, 0);
v_y_296_ = lean_ctor_get(v_a_293_, 1);
v_x_297_ = lean_ctor_get(v_c_292_, 0);
v_y_298_ = lean_ctor_get(v_c_292_, 1);
v_W_299_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__4, &lp_choreo_Choreo_rotatePath___closed__4_once, _init_lp_choreo_Choreo_rotatePath___closed__4);
v_A_300_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__5, &lp_choreo_Choreo_rotatePath___closed__5_once, _init_lp_choreo_Choreo_rotatePath___closed__5);
v_B_301_ = lean_obj_once(&lp_choreo_Choreo_rotatePath___closed__8, &lp_choreo_Choreo_rotatePath___closed__8_once, _init_lp_choreo_Choreo_rotatePath___closed__8);
v_dx_302_ = lean_int_sub(v_x_295_, v_x_297_);
if (v_ccw_294_ == 0)
{
lean_object* v___x_319_; 
v___x_319_ = lean_int_sub(v_y_298_, v_y_296_);
v___y_304_ = v___x_319_;
goto v___jp_303_;
}
else
{
lean_object* v___x_320_; 
v___x_320_ = lean_int_sub(v_y_296_, v_y_298_);
v___y_304_ = v___x_320_;
goto v___jp_303_;
}
v___jp_303_:
{
lean_object* v___x_305_; lean_object* v___x_306_; lean_object* v___x_307_; lean_object* v___x_308_; lean_object* v_X_309_; lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v_Yr_312_; 
v___x_305_ = lp_choreo_Choreo_Poly_scale(v_x_297_, v_W_299_);
v___x_306_ = lp_choreo_Choreo_Poly_scale(v_dx_302_, v_A_300_);
v___x_307_ = lp_choreo_Choreo_Poly_scale(v___y_304_, v_B_301_);
v___x_308_ = lp_choreo_Choreo_Poly_sub(v___x_306_, v___x_307_);
lean_dec(v___x_306_);
v_X_309_ = lp_choreo_Choreo_Poly_add(v___x_305_, v___x_308_);
lean_dec(v___x_305_);
v___x_310_ = lp_choreo_Choreo_Poly_scale(v_dx_302_, v_B_301_);
lean_dec(v_dx_302_);
v___x_311_ = lp_choreo_Choreo_Poly_scale(v___y_304_, v_A_300_);
lean_dec(v___y_304_);
v_Yr_312_ = lp_choreo_Choreo_Poly_add(v___x_310_, v___x_311_);
lean_dec(v___x_310_);
if (v_ccw_294_ == 0)
{
lean_object* v___x_313_; lean_object* v___x_314_; lean_object* v___x_315_; 
v___x_313_ = lp_choreo_Choreo_Poly_scale(v_y_298_, v_W_299_);
v___x_314_ = lp_choreo_Choreo_Poly_sub(v___x_313_, v_Yr_312_);
lean_dec(v___x_313_);
v___x_315_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_315_, 0, v_X_309_);
lean_ctor_set(v___x_315_, 1, v___x_314_);
lean_ctor_set(v___x_315_, 2, v_W_299_);
return v___x_315_;
}
else
{
lean_object* v___x_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v___x_316_ = lp_choreo_Choreo_Poly_scale(v_y_298_, v_W_299_);
v___x_317_ = lp_choreo_Choreo_Poly_add(v___x_316_, v_Yr_312_);
lean_dec(v___x_316_);
v___x_318_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_318_, 0, v_X_309_);
lean_ctor_set(v___x_318_, 1, v___x_317_);
lean_ctor_set(v___x_318_, 2, v_W_299_);
return v___x_318_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rotatePath___boxed(lean_object* v_c_321_, lean_object* v_a_322_, lean_object* v_ccw_323_){
_start:
{
uint8_t v_ccw_boxed_324_; lean_object* v_res_325_; 
v_ccw_boxed_324_ = lean_unbox(v_ccw_323_);
v_res_325_ = lp_choreo_Choreo_rotatePath(v_c_321_, v_a_322_, v_ccw_boxed_324_);
lean_dec_ref(v_a_322_);
lean_dec_ref(v_c_321_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_chooseCert_spec__0(lean_object* v_a_326_, lean_object* v_b_327_, lean_object* v_d_328_, lean_object* v_x_329_){
_start:
{
if (lean_obj_tag(v_x_329_) == 0)
{
lean_object* v___x_330_; 
lean_dec_ref(v_b_327_);
lean_dec_ref(v_a_326_);
v___x_330_ = lean_box(0);
return v___x_330_;
}
else
{
lean_object* v_head_331_; lean_object* v_tail_332_; uint8_t v___x_333_; 
v_head_331_ = lean_ctor_get(v_x_329_, 0);
lean_inc_n(v_head_331_, 2);
v_tail_332_ = lean_ctor_get(v_x_329_, 1);
lean_inc(v_tail_332_);
lean_dec_ref_known(v_x_329_, 2);
lean_inc_ref(v_b_327_);
lean_inc_ref(v_a_326_);
v___x_333_ = lp_choreo_Choreo_Cert_check(v_head_331_, v_a_326_, v_b_327_, v_d_328_);
if (v___x_333_ == 0)
{
lean_dec(v_head_331_);
v_x_329_ = v_tail_332_;
goto _start;
}
else
{
lean_object* v___x_335_; 
lean_dec(v_tail_332_);
lean_dec_ref(v_b_327_);
lean_dec_ref(v_a_326_);
v___x_335_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_335_, 0, v_head_331_);
return v___x_335_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_chooseCert_spec__0___boxed(lean_object* v_a_336_, lean_object* v_b_337_, lean_object* v_d_338_, lean_object* v_x_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = lp_choreo_List_find_x3f___at___00Choreo_chooseCert_spec__0(v_a_336_, v_b_337_, v_d_338_, v_x_339_);
lean_dec(v_d_338_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCert_spec__1(lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
if (lean_obj_tag(v_a_341_) == 0)
{
lean_object* v___x_343_; 
v___x_343_ = l_List_reverse___redArg(v_a_342_);
return v___x_343_;
}
else
{
lean_object* v_head_344_; lean_object* v_tail_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_354_; 
v_head_344_ = lean_ctor_get(v_a_341_, 0);
v_tail_345_ = lean_ctor_get(v_a_341_, 1);
v_isSharedCheck_354_ = !lean_is_exclusive(v_a_341_);
if (v_isSharedCheck_354_ == 0)
{
v___x_347_ = v_a_341_;
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_tail_345_);
lean_inc(v_head_344_);
lean_dec(v_a_341_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_354_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; lean_object* v___x_351_; 
v___x_349_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_349_, 0, v_head_344_);
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v_a_342_);
lean_ctor_set(v___x_347_, 0, v___x_349_);
v___x_351_ = v___x_347_;
goto v_reusejp_350_;
}
else
{
lean_object* v_reuseFailAlloc_353_; 
v_reuseFailAlloc_353_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_353_, 0, v___x_349_);
lean_ctor_set(v_reuseFailAlloc_353_, 1, v_a_342_);
v___x_351_ = v_reuseFailAlloc_353_;
goto v_reusejp_350_;
}
v_reusejp_350_:
{
v_a_341_ = v_tail_345_;
v_a_342_ = v___x_351_;
goto _start;
}
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_chooseCert___closed__1(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_unsigned_to_nat(8u);
v___x_359_ = l_List_range(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_lp_choreo_Choreo_chooseCert___closed__2(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_tries_362_; 
v___x_360_ = lean_box(0);
v___x_361_ = lean_obj_once(&lp_choreo_Choreo_chooseCert___closed__1, &lp_choreo_Choreo_chooseCert___closed__1_once, _init_lp_choreo_Choreo_chooseCert___closed__1);
v_tries_362_ = lp_choreo_List_mapTR_loop___at___00Choreo_chooseCert_spec__1(v___x_361_, v___x_360_);
return v_tries_362_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCert(lean_object* v_a_365_, lean_object* v_b_366_, lean_object* v_d_367_){
_start:
{
lean_object* v_X_368_; lean_object* v_Y_369_; lean_object* v_W_370_; lean_object* v_X_371_; lean_object* v_Y_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v_cx_375_; lean_object* v___x_376_; lean_object* v___x_377_; lean_object* v_cy_378_; lean_object* v_w_379_; lean_object* v___x_380_; lean_object* v___x_381_; uint8_t v___x_382_; uint8_t v___x_383_; lean_object* v___y_385_; lean_object* v___y_404_; lean_object* v___y_405_; lean_object* v___y_414_; 
v_X_368_ = lean_ctor_get(v_a_365_, 0);
v_Y_369_ = lean_ctor_get(v_a_365_, 1);
v_W_370_ = lean_ctor_get(v_a_365_, 2);
v_X_371_ = lean_ctor_get(v_b_366_, 0);
v_Y_372_ = lean_ctor_get(v_b_366_, 1);
v___x_373_ = lp_choreo_Choreo_Poly_first(v_X_368_);
v___x_374_ = lp_choreo_Choreo_Poly_first(v_X_371_);
v_cx_375_ = lean_int_sub(v___x_373_, v___x_374_);
lean_dec(v___x_374_);
lean_dec(v___x_373_);
v___x_376_ = lp_choreo_Choreo_Poly_first(v_Y_369_);
v___x_377_ = lp_choreo_Choreo_Poly_first(v_Y_372_);
v_cy_378_ = lean_int_sub(v___x_376_, v___x_377_);
lean_dec(v___x_377_);
lean_dec(v___x_376_);
v_w_379_ = lp_choreo_Choreo_Poly_first(v_W_370_);
v___x_380_ = lean_unsigned_to_nat(0u);
v___x_381_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__0, &lp_choreo_Choreo_instInhabitedPt_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0);
v___x_382_ = lean_int_dec_eq(v_w_379_, v___x_381_);
v___x_383_ = 1;
if (v___x_382_ == 0)
{
lean_object* v___x_416_; 
v___x_416_ = lean_int_ediv(v_cx_375_, v_w_379_);
v___y_414_ = v___x_416_;
goto v___jp_413_;
}
else
{
v___y_414_ = v___x_381_;
goto v___jp_413_;
}
v___jp_384_:
{
lean_object* v_fixedAt_386_; uint8_t v___x_387_; 
v_fixedAt_386_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_fixedAt_386_, 0, v___y_385_);
lean_inc_ref(v_b_366_);
lean_inc_ref(v_a_365_);
lean_inc_ref(v_fixedAt_386_);
v___x_387_ = lp_choreo_Choreo_Cert_check(v_fixedAt_386_, v_a_365_, v_b_366_, v_d_367_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_392_; lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v_seps_396_; lean_object* v___x_397_; 
lean_dec_ref_known(v_fixedAt_386_, 1);
v___x_388_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_388_, 0, v___x_380_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*1, v___x_387_);
lean_ctor_set_uint8(v___x_388_, sizeof(void*)*1 + 1, v___x_383_);
v___x_389_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_389_, 0, v___x_380_);
lean_ctor_set_uint8(v___x_389_, sizeof(void*)*1, v___x_387_);
lean_ctor_set_uint8(v___x_389_, sizeof(void*)*1 + 1, v___x_387_);
v___x_390_ = ((lean_object*)(lp_choreo_Choreo_chooseCert___closed__0));
v___x_391_ = lean_alloc_ctor(0, 1, 2);
lean_ctor_set(v___x_391_, 0, v___x_380_);
lean_ctor_set_uint8(v___x_391_, sizeof(void*)*1, v___x_383_);
lean_ctor_set_uint8(v___x_391_, sizeof(void*)*1 + 1, v___x_387_);
v___x_392_ = lean_box(0);
v___x_393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_393_, 0, v___x_391_);
lean_ctor_set(v___x_393_, 1, v___x_392_);
v___x_394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_394_, 0, v___x_390_);
lean_ctor_set(v___x_394_, 1, v___x_393_);
v___x_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_389_);
lean_ctor_set(v___x_395_, 1, v___x_394_);
v_seps_396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_seps_396_, 0, v___x_388_);
lean_ctor_set(v_seps_396_, 1, v___x_395_);
lean_inc_ref(v_b_366_);
lean_inc_ref(v_a_365_);
v___x_397_ = lp_choreo_List_find_x3f___at___00Choreo_chooseCert_spec__0(v_a_365_, v_b_366_, v_d_367_, v_seps_396_);
if (lean_obj_tag(v___x_397_) == 0)
{
lean_object* v_tries_398_; lean_object* v___x_399_; 
v_tries_398_ = lean_obj_once(&lp_choreo_Choreo_chooseCert___closed__2, &lp_choreo_Choreo_chooseCert___closed__2_once, _init_lp_choreo_Choreo_chooseCert___closed__2);
v___x_399_ = lp_choreo_List_find_x3f___at___00Choreo_chooseCert_spec__0(v_a_365_, v_b_366_, v_d_367_, v_tries_398_);
if (lean_obj_tag(v___x_399_) == 0)
{
lean_object* v___x_400_; 
v___x_400_ = ((lean_object*)(lp_choreo_Choreo_chooseCert___closed__3));
return v___x_400_;
}
else
{
lean_object* v_val_401_; 
v_val_401_ = lean_ctor_get(v___x_399_, 0);
lean_inc(v_val_401_);
lean_dec_ref_known(v___x_399_, 1);
return v_val_401_;
}
}
else
{
lean_object* v_val_402_; 
lean_dec_ref(v_b_366_);
lean_dec_ref(v_a_365_);
v_val_402_ = lean_ctor_get(v___x_397_, 0);
lean_inc(v_val_402_);
lean_dec_ref_known(v___x_397_, 1);
return v_val_402_;
}
}
else
{
lean_dec_ref(v_b_366_);
lean_dec_ref(v_a_365_);
return v_fixedAt_386_;
}
}
v___jp_403_:
{
lean_object* v_off_406_; uint8_t v___x_407_; 
v_off_406_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_off_406_, 0, v___y_404_);
lean_ctor_set(v_off_406_, 1, v___y_405_);
lean_inc_ref(v_b_366_);
lean_inc_ref(v_a_365_);
lean_inc_ref(v_off_406_);
v___x_407_ = lp_choreo_Choreo_Cert_check(v_off_406_, v_a_365_, v_b_366_, v_d_367_);
if (v___x_407_ == 0)
{
lean_dec_ref_known(v_off_406_, 2);
if (v___x_382_ == 0)
{
lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; 
v___x_408_ = lean_int_mul(v_cx_375_, v_cx_375_);
lean_dec(v_cx_375_);
v___x_409_ = lean_int_mul(v_cy_378_, v_cy_378_);
lean_dec(v_cy_378_);
v___x_410_ = lean_int_add(v___x_408_, v___x_409_);
lean_dec(v___x_409_);
lean_dec(v___x_408_);
v___x_411_ = lean_int_mul(v_w_379_, v_w_379_);
lean_dec(v_w_379_);
v___x_412_ = lean_int_ediv(v___x_410_, v___x_411_);
lean_dec(v___x_411_);
lean_dec(v___x_410_);
v___y_385_ = v___x_412_;
goto v___jp_384_;
}
else
{
lean_dec(v_w_379_);
lean_dec(v_cy_378_);
lean_dec(v_cx_375_);
v___y_385_ = v___x_381_;
goto v___jp_384_;
}
}
else
{
lean_dec(v_w_379_);
lean_dec(v_cy_378_);
lean_dec(v_cx_375_);
lean_dec_ref(v_b_366_);
lean_dec_ref(v_a_365_);
return v_off_406_;
}
}
v___jp_413_:
{
if (v___x_382_ == 0)
{
lean_object* v___x_415_; 
v___x_415_ = lean_int_ediv(v_cy_378_, v_w_379_);
v___y_404_ = v___y_414_;
v___y_405_ = v___x_415_;
goto v___jp_403_;
}
else
{
v___y_404_ = v___y_414_;
v___y_405_ = v___x_381_;
goto v___jp_403_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCert___boxed(lean_object* v_a_417_, lean_object* v_b_418_, lean_object* v_d_419_){
_start:
{
lean_object* v_res_420_; 
v_res_420_ = lp_choreo_Choreo_chooseCert(v_a_417_, v_b_418_, v_d_419_);
lean_dec(v_d_419_);
return v_res_420_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___lam__0(lean_object* v_paths_421_, lean_object* v_i_422_){
_start:
{
lean_object* v___x_423_; lean_object* v___x_424_; 
v___x_423_ = lp_choreo_Choreo_Path_rest;
v___x_424_ = l_List_getD___redArg(v_paths_421_, v_i_422_, v___x_423_);
return v___x_424_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___lam__0___boxed(lean_object* v_paths_425_, lean_object* v_i_426_){
_start:
{
lean_object* v_res_427_; 
v_res_427_ = lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___lam__0(v_paths_425_, v_i_426_);
lean_dec(v_paths_425_);
return v_res_427_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0(lean_object* v_paths_428_, lean_object* v_i_429_, lean_object* v_d_430_, lean_object* v_a_431_, lean_object* v_a_432_){
_start:
{
if (lean_obj_tag(v_a_431_) == 0)
{
lean_object* v___x_433_; 
lean_dec(v_i_429_);
v___x_433_ = l_List_reverse___redArg(v_a_432_);
return v___x_433_;
}
else
{
lean_object* v_head_434_; lean_object* v_tail_435_; lean_object* v___x_437_; uint8_t v_isShared_438_; uint8_t v_isSharedCheck_446_; 
v_head_434_ = lean_ctor_get(v_a_431_, 0);
v_tail_435_ = lean_ctor_get(v_a_431_, 1);
v_isSharedCheck_446_ = !lean_is_exclusive(v_a_431_);
if (v_isSharedCheck_446_ == 0)
{
v___x_437_ = v_a_431_;
v_isShared_438_ = v_isSharedCheck_446_;
goto v_resetjp_436_;
}
else
{
lean_inc(v_tail_435_);
lean_inc(v_head_434_);
lean_dec(v_a_431_);
v___x_437_ = lean_box(0);
v_isShared_438_ = v_isSharedCheck_446_;
goto v_resetjp_436_;
}
v_resetjp_436_:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_443_; 
lean_inc(v_i_429_);
v___x_439_ = lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___lam__0(v_paths_428_, v_i_429_);
v___x_440_ = lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___lam__0(v_paths_428_, v_head_434_);
v___x_441_ = lp_choreo_Choreo_chooseCert(v___x_439_, v___x_440_, v_d_430_);
if (v_isShared_438_ == 0)
{
lean_ctor_set(v___x_437_, 1, v_a_432_);
lean_ctor_set(v___x_437_, 0, v___x_441_);
v___x_443_ = v___x_437_;
goto v_reusejp_442_;
}
else
{
lean_object* v_reuseFailAlloc_445_; 
v_reuseFailAlloc_445_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_445_, 0, v___x_441_);
lean_ctor_set(v_reuseFailAlloc_445_, 1, v_a_432_);
v___x_443_ = v_reuseFailAlloc_445_;
goto v_reusejp_442_;
}
v_reusejp_442_:
{
v_a_431_ = v_tail_435_;
v_a_432_ = v___x_443_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0___boxed(lean_object* v_paths_447_, lean_object* v_i_448_, lean_object* v_d_449_, lean_object* v_a_450_, lean_object* v_a_451_){
_start:
{
lean_object* v_res_452_; 
v_res_452_ = lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0(v_paths_447_, v_i_448_, v_d_449_, v_a_450_, v_a_451_);
lean_dec(v_d_449_);
lean_dec(v_paths_447_);
return v_res_452_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_chooseCerts_spec__1(lean_object* v_paths_453_, lean_object* v_d_454_, lean_object* v_a_455_, lean_object* v_a_456_){
_start:
{
if (lean_obj_tag(v_a_455_) == 0)
{
lean_object* v___x_457_; 
v___x_457_ = lean_array_to_list(v_a_456_);
return v___x_457_;
}
else
{
lean_object* v_head_458_; lean_object* v_tail_459_; lean_object* v___x_460_; lean_object* v___x_461_; lean_object* v___x_462_; lean_object* v___x_463_; 
v_head_458_ = lean_ctor_get(v_a_455_, 0);
lean_inc_n(v_head_458_, 2);
v_tail_459_ = lean_ctor_get(v_a_455_, 1);
lean_inc(v_tail_459_);
lean_dec_ref_known(v_a_455_, 2);
v___x_460_ = l_List_range(v_head_458_);
v___x_461_ = lean_box(0);
v___x_462_ = lp_choreo_List_mapTR_loop___at___00Choreo_chooseCerts_spec__0(v_paths_453_, v_head_458_, v_d_454_, v___x_460_, v___x_461_);
v___x_463_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_456_, v___x_462_);
v_a_455_ = v_tail_459_;
v_a_456_ = v___x_463_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_chooseCerts_spec__1___boxed(lean_object* v_paths_465_, lean_object* v_d_466_, lean_object* v_a_467_, lean_object* v_a_468_){
_start:
{
lean_object* v_res_469_; 
v_res_469_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_chooseCerts_spec__1(v_paths_465_, v_d_466_, v_a_467_, v_a_468_);
lean_dec(v_d_466_);
lean_dec(v_paths_465_);
return v_res_469_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCerts(lean_object* v_n_472_, lean_object* v_paths_473_, lean_object* v_d_474_){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = l_List_range(v_n_472_);
v___x_476_ = ((lean_object*)(lp_choreo_Choreo_chooseCerts___closed__0));
v___x_477_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_chooseCerts_spec__1(v_paths_473_, v_d_474_, v___x_475_, v___x_476_);
return v___x_477_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_chooseCerts___boxed(lean_object* v_n_478_, lean_object* v_paths_479_, lean_object* v_d_480_){
_start:
{
lean_object* v_res_481_; 
v_res_481_ = lp_choreo_Choreo_chooseCerts(v_n_478_, v_paths_479_, v_d_480_);
lean_dec(v_d_480_);
lean_dec(v_paths_479_);
return v_res_481_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorIdx(lean_object* v_x_482_){
_start:
{
switch(lean_obj_tag(v_x_482_))
{
case 0:
{
lean_object* v___x_483_; 
v___x_483_ = lean_unsigned_to_nat(0u);
return v___x_483_;
}
case 1:
{
lean_object* v___x_484_; 
v___x_484_ = lean_unsigned_to_nat(1u);
return v___x_484_;
}
case 2:
{
lean_object* v___x_485_; 
v___x_485_ = lean_unsigned_to_nat(2u);
return v___x_485_;
}
case 3:
{
lean_object* v___x_486_; 
v___x_486_ = lean_unsigned_to_nat(3u);
return v___x_486_;
}
default: 
{
lean_object* v___x_487_; 
v___x_487_ = lean_unsigned_to_nat(4u);
return v___x_487_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorIdx___boxed(lean_object* v_x_488_){
_start:
{
lean_object* v_res_489_; 
v_res_489_ = lp_choreo_Choreo_Problem_ctorIdx(v_x_488_);
lean_dec_ref(v_x_488_);
return v_res_489_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorElim___redArg(lean_object* v_t_490_, lean_object* v_k_491_){
_start:
{
switch(lean_obj_tag(v_t_490_))
{
case 0:
{
lean_object* v_phase_492_; lean_object* v_i_493_; lean_object* v_j_494_; lean_object* v_t_495_; lean_object* v___x_496_; 
v_phase_492_ = lean_ctor_get(v_t_490_, 0);
lean_inc(v_phase_492_);
v_i_493_ = lean_ctor_get(v_t_490_, 1);
lean_inc(v_i_493_);
v_j_494_ = lean_ctor_get(v_t_490_, 2);
lean_inc(v_j_494_);
v_t_495_ = lean_ctor_get(v_t_490_, 3);
lean_inc_ref(v_t_495_);
lean_dec_ref_known(v_t_490_, 4);
v___x_496_ = lean_apply_4(v_k_491_, v_phase_492_, v_i_493_, v_j_494_, v_t_495_);
return v___x_496_;
}
case 1:
{
lean_object* v_phase_497_; lean_object* v_i_498_; lean_object* v_t_499_; lean_object* v___x_500_; 
v_phase_497_ = lean_ctor_get(v_t_490_, 0);
lean_inc(v_phase_497_);
v_i_498_ = lean_ctor_get(v_t_490_, 1);
lean_inc(v_i_498_);
v_t_499_ = lean_ctor_get(v_t_490_, 2);
lean_inc_ref(v_t_499_);
lean_dec_ref_known(v_t_490_, 3);
v___x_500_ = lean_apply_3(v_k_491_, v_phase_497_, v_i_498_, v_t_499_);
return v___x_500_;
}
case 2:
{
lean_object* v_phase_501_; lean_object* v_i_502_; lean_object* v___x_503_; 
v_phase_501_ = lean_ctor_get(v_t_490_, 0);
lean_inc(v_phase_501_);
v_i_502_ = lean_ctor_get(v_t_490_, 1);
lean_inc(v_i_502_);
lean_dec_ref_known(v_t_490_, 2);
v___x_503_ = lean_apply_2(v_k_491_, v_phase_501_, v_i_502_);
return v___x_503_;
}
case 3:
{
lean_object* v_phase_504_; lean_object* v_i_505_; lean_object* v_j_506_; lean_object* v___x_507_; 
v_phase_504_ = lean_ctor_get(v_t_490_, 0);
lean_inc(v_phase_504_);
v_i_505_ = lean_ctor_get(v_t_490_, 1);
lean_inc(v_i_505_);
v_j_506_ = lean_ctor_get(v_t_490_, 2);
lean_inc(v_j_506_);
lean_dec_ref_known(v_t_490_, 3);
v___x_507_ = lean_apply_3(v_k_491_, v_phase_504_, v_i_505_, v_j_506_);
return v___x_507_;
}
default: 
{
lean_object* v_phase_508_; lean_object* v_why_509_; lean_object* v___x_510_; 
v_phase_508_ = lean_ctor_get(v_t_490_, 0);
lean_inc(v_phase_508_);
v_why_509_ = lean_ctor_get(v_t_490_, 1);
lean_inc_ref(v_why_509_);
lean_dec_ref_known(v_t_490_, 2);
v___x_510_ = lean_apply_2(v_k_491_, v_phase_508_, v_why_509_);
return v___x_510_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorElim(lean_object* v_motive_511_, lean_object* v_ctorIdx_512_, lean_object* v_t_513_, lean_object* v_h_514_, lean_object* v_k_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_513_, v_k_515_);
return v___x_516_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_ctorElim___boxed(lean_object* v_motive_517_, lean_object* v_ctorIdx_518_, lean_object* v_t_519_, lean_object* v_h_520_, lean_object* v_k_521_){
_start:
{
lean_object* v_res_522_; 
v_res_522_ = lp_choreo_Choreo_Problem_ctorElim(v_motive_517_, v_ctorIdx_518_, v_t_519_, v_h_520_, v_k_521_);
lean_dec(v_ctorIdx_518_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_collision_elim___redArg(lean_object* v_t_523_, lean_object* v_collision_524_){
_start:
{
lean_object* v___x_525_; 
v___x_525_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_523_, v_collision_524_);
return v___x_525_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_collision_elim(lean_object* v_motive_526_, lean_object* v_t_527_, lean_object* v_h_528_, lean_object* v_collision_529_){
_start:
{
lean_object* v___x_530_; 
v___x_530_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_527_, v_collision_529_);
return v___x_530_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_offStage_elim___redArg(lean_object* v_t_531_, lean_object* v_offStage_532_){
_start:
{
lean_object* v___x_533_; 
v___x_533_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_531_, v_offStage_532_);
return v___x_533_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_offStage_elim(lean_object* v_motive_534_, lean_object* v_t_535_, lean_object* v_h_536_, lean_object* v_offStage_537_){
_start:
{
lean_object* v___x_538_; 
v___x_538_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_535_, v_offStage_537_);
return v___x_538_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_tooFast_elim___redArg(lean_object* v_t_539_, lean_object* v_tooFast_540_){
_start:
{
lean_object* v___x_541_; 
v___x_541_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_539_, v_tooFast_540_);
return v___x_541_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_tooFast_elim(lean_object* v_motive_542_, lean_object* v_t_543_, lean_object* v_h_544_, lean_object* v_tooFast_545_){
_start:
{
lean_object* v___x_546_; 
v___x_546_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_543_, v_tooFast_545_);
return v___x_546_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_unproved_elim___redArg(lean_object* v_t_547_, lean_object* v_unproved_548_){
_start:
{
lean_object* v___x_549_; 
v___x_549_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_547_, v_unproved_548_);
return v___x_549_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_unproved_elim(lean_object* v_motive_550_, lean_object* v_t_551_, lean_object* v_h_552_, lean_object* v_unproved_553_){
_start:
{
lean_object* v___x_554_; 
v___x_554_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_551_, v_unproved_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_other_elim___redArg(lean_object* v_t_555_, lean_object* v_other_556_){
_start:
{
lean_object* v___x_557_; 
v___x_557_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_555_, v_other_556_);
return v___x_557_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_other_elim(lean_object* v_motive_558_, lean_object* v_t_559_, lean_object* v_h_560_, lean_object* v_other_561_){
_start:
{
lean_object* v___x_562_; 
v___x_562_ = lp_choreo_Choreo_Problem_ctorElim___redArg(v_t_559_, v_other_561_);
return v___x_562_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProblem_default___closed__0(void){
_start:
{
lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_563_ = lean_unsigned_to_nat(1u);
v___x_564_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPt_default___closed__0, &lp_choreo_Choreo_instInhabitedPt_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPt_default___closed__0);
v___x_565_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set(v___x_565_, 1, v___x_563_);
return v___x_565_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProblem_default___closed__1(void){
_start:
{
lean_object* v___x_566_; lean_object* v___x_567_; lean_object* v___x_568_; 
v___x_566_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProblem_default___closed__0, &lp_choreo_Choreo_instInhabitedProblem_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedProblem_default___closed__0);
v___x_567_ = lean_unsigned_to_nat(0u);
v___x_568_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_568_, 0, v___x_567_);
lean_ctor_set(v___x_568_, 1, v___x_567_);
lean_ctor_set(v___x_568_, 2, v___x_567_);
lean_ctor_set(v___x_568_, 3, v___x_566_);
return v___x_568_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProblem_default(void){
_start:
{
lean_object* v___x_569_; 
v___x_569_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProblem_default___closed__1, &lp_choreo_Choreo_instInhabitedProblem_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedProblem_default___closed__1);
return v___x_569_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProblem(void){
_start:
{
lean_object* v___x_570_; 
v___x_570_ = lp_choreo_Choreo_instInhabitedProblem_default;
return v___x_570_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; 
v___x_571_ = lean_unsigned_to_nat(128u);
v___x_572_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_571_);
return v___x_572_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0(lean_object* v_a_573_, lean_object* v_a_574_){
_start:
{
if (lean_obj_tag(v_a_573_) == 0)
{
lean_object* v___x_575_; 
v___x_575_ = l_List_reverse___redArg(v_a_574_);
return v___x_575_;
}
else
{
lean_object* v_head_576_; lean_object* v_tail_577_; lean_object* v___x_579_; uint8_t v_isShared_580_; uint8_t v_isSharedCheck_589_; 
v_head_576_ = lean_ctor_get(v_a_573_, 0);
v_tail_577_ = lean_ctor_get(v_a_573_, 1);
v_isSharedCheck_589_ = !lean_is_exclusive(v_a_573_);
if (v_isSharedCheck_589_ == 0)
{
v___x_579_ = v_a_573_;
v_isShared_580_ = v_isSharedCheck_589_;
goto v_resetjp_578_;
}
else
{
lean_inc(v_tail_577_);
lean_inc(v_head_576_);
lean_dec(v_a_573_);
v___x_579_ = lean_box(0);
v_isShared_580_ = v_isSharedCheck_589_;
goto v_resetjp_578_;
}
v_resetjp_578_:
{
lean_object* v___x_581_; lean_object* v___x_582_; lean_object* v___x_583_; lean_object* v___x_584_; lean_object* v___x_586_; 
v___x_581_ = lean_nat_to_int(v_head_576_);
v___x_582_ = l_Rat_ofInt(v___x_581_);
v___x_583_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0);
v___x_584_ = l_Rat_div(v___x_582_, v___x_583_);
lean_dec_ref(v___x_582_);
if (v_isShared_580_ == 0)
{
lean_ctor_set(v___x_579_, 1, v_a_574_);
lean_ctor_set(v___x_579_, 0, v___x_584_);
v___x_586_ = v___x_579_;
goto v_reusejp_585_;
}
else
{
lean_object* v_reuseFailAlloc_588_; 
v_reuseFailAlloc_588_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_588_, 0, v___x_584_);
lean_ctor_set(v_reuseFailAlloc_588_, 1, v_a_574_);
v___x_586_ = v_reuseFailAlloc_588_;
goto v_reusejp_585_;
}
v_reusejp_585_:
{
v_a_573_ = v_tail_577_;
v_a_574_ = v___x_586_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sampleTimes_spec__0(lean_object* v_a_590_, lean_object* v_a_591_){
_start:
{
if (lean_obj_tag(v_a_590_) == 0)
{
lean_object* v___x_592_; 
v___x_592_ = l_List_reverse___redArg(v_a_591_);
return v___x_592_;
}
else
{
lean_object* v_head_593_; lean_object* v_tail_594_; lean_object* v___x_596_; uint8_t v_isShared_597_; uint8_t v_isSharedCheck_606_; 
v_head_593_ = lean_ctor_get(v_a_590_, 0);
v_tail_594_ = lean_ctor_get(v_a_590_, 1);
v_isSharedCheck_606_ = !lean_is_exclusive(v_a_590_);
if (v_isSharedCheck_606_ == 0)
{
v___x_596_ = v_a_590_;
v_isShared_597_ = v_isSharedCheck_606_;
goto v_resetjp_595_;
}
else
{
lean_inc(v_tail_594_);
lean_inc(v_head_593_);
lean_dec(v_a_590_);
v___x_596_ = lean_box(0);
v_isShared_597_ = v_isSharedCheck_606_;
goto v_resetjp_595_;
}
v_resetjp_595_:
{
lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; lean_object* v___x_603_; 
v___x_598_ = lean_nat_to_int(v_head_593_);
v___x_599_ = l_Rat_ofInt(v___x_598_);
v___x_600_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0___closed__0);
v___x_601_ = l_Rat_div(v___x_599_, v___x_600_);
lean_dec_ref(v___x_599_);
if (v_isShared_597_ == 0)
{
lean_ctor_set(v___x_596_, 1, v_a_591_);
lean_ctor_set(v___x_596_, 0, v___x_601_);
v___x_603_ = v___x_596_;
goto v_reusejp_602_;
}
else
{
lean_object* v_reuseFailAlloc_605_; 
v_reuseFailAlloc_605_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_605_, 0, v___x_601_);
lean_ctor_set(v_reuseFailAlloc_605_, 1, v_a_591_);
v___x_603_ = v_reuseFailAlloc_605_;
goto v_reusejp_602_;
}
v_reusejp_602_:
{
lean_object* v___x_604_; 
v___x_604_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_sampleTimes_spec__0_spec__0(v_tail_594_, v___x_603_);
return v___x_604_;
}
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_sampleTimes___closed__0(void){
_start:
{
lean_object* v___x_607_; lean_object* v___x_608_; 
v___x_607_ = lean_unsigned_to_nat(129u);
v___x_608_ = l_List_range(v___x_607_);
return v___x_608_;
}
}
static lean_object* _init_lp_choreo_Choreo_sampleTimes___closed__1(void){
_start:
{
lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; 
v___x_609_ = lean_box(0);
v___x_610_ = lean_obj_once(&lp_choreo_Choreo_sampleTimes___closed__0, &lp_choreo_Choreo_sampleTimes___closed__0_once, _init_lp_choreo_Choreo_sampleTimes___closed__0);
v___x_611_ = lp_choreo_List_mapTR_loop___at___00Choreo_sampleTimes_spec__0(v___x_610_, v___x_609_);
return v___x_611_;
}
}
static lean_object* _init_lp_choreo_Choreo_sampleTimes(void){
_start:
{
lean_object* v___x_612_; 
v___x_612_ = lean_obj_once(&lp_choreo_Choreo_sampleTimes___closed__1, &lp_choreo_Choreo_sampleTimes___closed__1_once, _init_lp_choreo_Choreo_sampleTimes___closed__1);
return v___x_612_;
}
}
static lean_object* _init_lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_613_; lean_object* v___x_614_; 
v___x_613_ = lean_unsigned_to_nat(0u);
v___x_614_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_613_);
return v___x_614_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(lean_object* v_p_615_, lean_object* v_s_616_, lean_object* v_t_617_){
_start:
{
if (lean_obj_tag(v_p_615_) == 0)
{
lean_object* v___x_618_; 
lean_dec_ref(v_s_616_);
v___x_618_ = lean_obj_once(&lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0, &lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0_once, _init_lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0);
return v___x_618_;
}
else
{
lean_object* v_head_619_; lean_object* v_tail_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v___x_627_; 
v_head_619_ = lean_ctor_get(v_p_615_, 0);
lean_inc(v_head_619_);
v_tail_620_ = lean_ctor_get(v_p_615_, 1);
lean_inc(v_tail_620_);
lean_dec_ref_known(v_p_615_, 2);
v___x_621_ = l_Rat_ofInt(v_head_619_);
v___x_622_ = l_List_lengthTR___redArg(v_tail_620_);
lean_inc_ref(v_s_616_);
v___x_623_ = l_Rat_pow(v_s_616_, v___x_622_);
lean_dec(v___x_622_);
v___x_624_ = l_Rat_mul(v___x_621_, v___x_623_);
lean_dec_ref(v___x_621_);
v___x_625_ = lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(v_tail_620_, v_s_616_, v_t_617_);
v___x_626_ = l_Rat_mul(v_t_617_, v___x_625_);
v___x_627_ = l_Rat_add(v___x_624_, v___x_626_);
return v___x_627_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___boxed(lean_object* v_p_628_, lean_object* v_s_629_, lean_object* v_t_630_){
_start:
{
lean_object* v_res_631_; 
v_res_631_ = lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(v_p_628_, v_s_629_, v_t_630_);
lean_dec_ref(v_t_630_);
return v_res_631_;
}
}
static lean_object* _init_lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0(void){
_start:
{
lean_object* v___x_632_; lean_object* v___x_633_; 
v___x_632_ = lean_unsigned_to_nat(1u);
v___x_633_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_632_);
return v___x_633_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(lean_object* v_p_634_, lean_object* v_t_635_){
_start:
{
lean_object* v_Y_636_; lean_object* v_W_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v___x_642_; 
v_Y_636_ = lean_ctor_get(v_p_634_, 1);
lean_inc(v_Y_636_);
v_W_637_ = lean_ctor_get(v_p_634_, 2);
lean_inc(v_W_637_);
lean_dec_ref(v_p_634_);
v___x_638_ = lean_obj_once(&lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0, &lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0_once, _init_lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0);
lean_inc_ref(v_t_635_);
v___x_639_ = l_Rat_sub(v___x_638_, v_t_635_);
lean_inc_ref(v___x_639_);
v___x_640_ = lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(v_Y_636_, v___x_639_, v_t_635_);
v___x_641_ = lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(v_W_637_, v___x_639_, v_t_635_);
lean_dec_ref(v_t_635_);
v___x_642_ = l_Rat_div(v___x_640_, v___x_641_);
lean_dec_ref(v___x_640_);
return v___x_642_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(lean_object* v_p_643_, lean_object* v_t_644_){
_start:
{
lean_object* v_X_645_; lean_object* v_W_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; 
v_X_645_ = lean_ctor_get(v_p_643_, 0);
lean_inc(v_X_645_);
v_W_646_ = lean_ctor_get(v_p_643_, 2);
lean_inc(v_W_646_);
lean_dec_ref(v_p_643_);
v___x_647_ = lean_obj_once(&lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0, &lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0_once, _init_lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1___closed__0);
lean_inc_ref(v_t_644_);
v___x_648_ = l_Rat_sub(v___x_647_, v_t_644_);
lean_inc_ref(v___x_648_);
v___x_649_ = lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(v_X_645_, v___x_648_, v_t_644_);
v___x_650_ = lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1(v_W_646_, v___x_648_, v_t_644_);
lean_dec_ref(v_t_644_);
v___x_651_ = l_Rat_div(v___x_649_, v___x_650_);
lean_dec_ref(v___x_649_);
return v___x_651_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(lean_object* v_a_652_, lean_object* v_b_653_, lean_object* v_t_654_){
_start:
{
lean_object* v___x_655_; lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v___x_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
lean_inc_ref_n(v_t_654_, 3);
lean_inc_ref(v_a_652_);
v___x_655_ = lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(v_a_652_, v_t_654_);
lean_inc_ref(v_b_653_);
v___x_656_ = lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(v_b_653_, v_t_654_);
v___x_657_ = l_Rat_sub(v___x_655_, v___x_656_);
v___x_658_ = lean_unsigned_to_nat(2u);
v___x_659_ = l_Rat_pow(v___x_657_, v___x_658_);
v___x_660_ = lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(v_a_652_, v_t_654_);
v___x_661_ = lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(v_b_653_, v_t_654_);
v___x_662_ = l_Rat_sub(v___x_660_, v___x_661_);
v___x_663_ = l_Rat_pow(v___x_662_, v___x_658_);
v___x_664_ = l_Rat_add(v___x_659_, v___x_663_);
return v___x_664_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_clearanceAt(lean_object* v_a_665_, lean_object* v_b_666_, lean_object* v_t_667_){
_start:
{
lean_object* v___x_668_; 
v___x_668_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v_a_665_, v_b_666_, v_t_667_);
return v___x_668_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Int_cast___at___00Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1_spec__2(lean_object* v_a_669_){
_start:
{
lean_object* v___x_670_; 
v___x_670_ = l_Rat_ofInt(v_a_669_);
return v___x_670_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Phase_diagnose_spec__0(lean_object* v___x_671_, lean_object* v___x_672_, lean_object* v_a_673_, lean_object* v_a_674_){
_start:
{
if (lean_obj_tag(v_a_673_) == 0)
{
lean_object* v___x_675_; 
lean_dec_ref(v___x_672_);
lean_dec_ref(v___x_671_);
v___x_675_ = l_List_reverse___redArg(v_a_674_);
return v___x_675_;
}
else
{
lean_object* v_head_676_; lean_object* v_tail_677_; lean_object* v___x_679_; uint8_t v_isShared_680_; uint8_t v_isSharedCheck_687_; 
v_head_676_ = lean_ctor_get(v_a_673_, 0);
v_tail_677_ = lean_ctor_get(v_a_673_, 1);
v_isSharedCheck_687_ = !lean_is_exclusive(v_a_673_);
if (v_isSharedCheck_687_ == 0)
{
v___x_679_ = v_a_673_;
v_isShared_680_ = v_isSharedCheck_687_;
goto v_resetjp_678_;
}
else
{
lean_inc(v_tail_677_);
lean_inc(v_head_676_);
lean_dec(v_a_673_);
v___x_679_ = lean_box(0);
v_isShared_680_ = v_isSharedCheck_687_;
goto v_resetjp_678_;
}
v_resetjp_678_:
{
lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_684_; 
lean_inc(v_head_676_);
lean_inc_ref(v___x_672_);
lean_inc_ref(v___x_671_);
v___x_681_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v___x_671_, v___x_672_, v_head_676_);
v___x_682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_682_, 0, v_head_676_);
lean_ctor_set(v___x_682_, 1, v___x_681_);
if (v_isShared_680_ == 0)
{
lean_ctor_set(v___x_679_, 1, v_a_674_);
lean_ctor_set(v___x_679_, 0, v___x_682_);
v___x_684_ = v___x_679_;
goto v_reusejp_683_;
}
else
{
lean_object* v_reuseFailAlloc_686_; 
v_reuseFailAlloc_686_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_686_, 0, v___x_682_);
lean_ctor_set(v_reuseFailAlloc_686_, 1, v_a_674_);
v___x_684_ = v_reuseFailAlloc_686_;
goto v_reusejp_683_;
}
v_reusejp_683_:
{
v_a_673_ = v_tail_677_;
v_a_674_ = v___x_684_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_Phase_diagnose_spec__1(lean_object* v_x_688_, lean_object* v_x_689_){
_start:
{
if (lean_obj_tag(v_x_689_) == 0)
{
return v_x_688_;
}
else
{
lean_object* v_head_690_; lean_object* v_tail_691_; lean_object* v_snd_692_; lean_object* v_snd_693_; uint8_t v___x_694_; 
v_head_690_ = lean_ctor_get(v_x_689_, 0);
lean_inc(v_head_690_);
v_tail_691_ = lean_ctor_get(v_x_689_, 1);
lean_inc(v_tail_691_);
lean_dec_ref_known(v_x_689_, 2);
v_snd_692_ = lean_ctor_get(v_head_690_, 1);
v_snd_693_ = lean_ctor_get(v_x_688_, 1);
lean_inc(v_snd_693_);
lean_inc(v_snd_692_);
v___x_694_ = l_Rat_blt(v_snd_692_, v_snd_693_);
if (v___x_694_ == 0)
{
lean_dec(v_head_690_);
v_x_689_ = v_tail_691_;
goto _start;
}
else
{
lean_dec_ref(v_x_688_);
v_x_688_ = v_head_690_;
v_x_689_ = v_tail_691_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg(lean_object* v_ph_697_, lean_object* v_a_698_, lean_object* v_c_699_, lean_object* v_index_700_, lean_object* v_as_x27_701_, lean_object* v_b_702_){
_start:
{
if (lean_obj_tag(v_as_x27_701_) == 0)
{
lean_dec(v_index_700_);
lean_dec_ref(v_c_699_);
lean_dec(v_a_698_);
return v_b_702_;
}
else
{
lean_object* v_head_703_; lean_object* v_tail_704_; lean_object* v_dmin_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; uint8_t v___x_709_; 
v_head_703_ = lean_ctor_get(v_as_x27_701_, 0);
v_tail_704_ = lean_ctor_get(v_as_x27_701_, 1);
v_dmin_705_ = lean_ctor_get(v_c_699_, 1);
v___x_706_ = lp_choreo_Choreo_Phase_pairCert(v_ph_697_, v_a_698_, v_head_703_);
lean_inc(v_a_698_);
v___x_707_ = lp_choreo_Choreo_Phase_path(v_ph_697_, v_a_698_);
lean_inc(v_head_703_);
v___x_708_ = lp_choreo_Choreo_Phase_path(v_ph_697_, v_head_703_);
lean_inc_ref(v___x_708_);
lean_inc_ref(v___x_707_);
v___x_709_ = lp_choreo_Choreo_Cert_check(v___x_706_, v___x_707_, v___x_708_, v_dmin_705_);
if (v___x_709_ == 0)
{
lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v_fst_717_; lean_object* v_snd_718_; lean_object* v___x_720_; uint8_t v_isShared_721_; uint8_t v_isSharedCheck_738_; 
v___x_710_ = lp_choreo_Choreo_sampleTimes;
v___x_711_ = lean_box(0);
lean_inc_ref(v___x_708_);
lean_inc_ref(v___x_707_);
v___x_712_ = lp_choreo_List_mapTR_loop___at___00Choreo_Phase_diagnose_spec__0(v___x_707_, v___x_708_, v___x_710_, v___x_711_);
v___x_713_ = lean_obj_once(&lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0, &lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0_once, _init_lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0);
v___x_714_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v___x_707_, v___x_708_, v___x_713_);
v___x_715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_715_, 0, v___x_713_);
lean_ctor_set(v___x_715_, 1, v___x_714_);
v___x_716_ = lp_choreo_List_foldl___at___00Choreo_Phase_diagnose_spec__1(v___x_715_, v___x_712_);
v_fst_717_ = lean_ctor_get(v___x_716_, 0);
v_snd_718_ = lean_ctor_get(v___x_716_, 1);
v_isSharedCheck_738_ = !lean_is_exclusive(v___x_716_);
if (v_isSharedCheck_738_ == 0)
{
v___x_720_ = v___x_716_;
v_isShared_721_ = v_isSharedCheck_738_;
goto v_resetjp_719_;
}
else
{
lean_inc(v_snd_718_);
lean_inc(v_fst_717_);
lean_dec(v___x_716_);
v___x_720_ = lean_box(0);
v_isShared_721_ = v_isSharedCheck_738_;
goto v_resetjp_719_;
}
v_resetjp_719_:
{
lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; uint8_t v___x_725_; 
lean_inc(v_dmin_705_);
v___x_722_ = l_Rat_ofInt(v_dmin_705_);
v___x_723_ = lean_unsigned_to_nat(2u);
v___x_724_ = l_Rat_pow(v___x_722_, v___x_723_);
v___x_725_ = l_Rat_blt(v_snd_718_, v___x_724_);
if (v___x_725_ == 0)
{
lean_object* v___x_726_; lean_object* v___x_728_; 
lean_dec(v_fst_717_);
lean_inc(v_head_703_);
lean_inc(v_a_698_);
lean_inc(v_index_700_);
v___x_726_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_726_, 0, v_index_700_);
lean_ctor_set(v___x_726_, 1, v_a_698_);
lean_ctor_set(v___x_726_, 2, v_head_703_);
if (v_isShared_721_ == 0)
{
lean_ctor_set_tag(v___x_720_, 1);
lean_ctor_set(v___x_720_, 1, v___x_711_);
lean_ctor_set(v___x_720_, 0, v___x_726_);
v___x_728_ = v___x_720_;
goto v_reusejp_727_;
}
else
{
lean_object* v_reuseFailAlloc_731_; 
v_reuseFailAlloc_731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_731_, 0, v___x_726_);
lean_ctor_set(v_reuseFailAlloc_731_, 1, v___x_711_);
v___x_728_ = v_reuseFailAlloc_731_;
goto v_reusejp_727_;
}
v_reusejp_727_:
{
lean_object* v___x_729_; 
v___x_729_ = l_List_appendTR___redArg(v_b_702_, v___x_728_);
v_as_x27_701_ = v_tail_704_;
v_b_702_ = v___x_729_;
goto _start;
}
}
else
{
lean_object* v___x_732_; lean_object* v___x_734_; 
lean_inc(v_head_703_);
lean_inc(v_a_698_);
lean_inc(v_index_700_);
v___x_732_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_732_, 0, v_index_700_);
lean_ctor_set(v___x_732_, 1, v_a_698_);
lean_ctor_set(v___x_732_, 2, v_head_703_);
lean_ctor_set(v___x_732_, 3, v_fst_717_);
if (v_isShared_721_ == 0)
{
lean_ctor_set_tag(v___x_720_, 1);
lean_ctor_set(v___x_720_, 1, v___x_711_);
lean_ctor_set(v___x_720_, 0, v___x_732_);
v___x_734_ = v___x_720_;
goto v_reusejp_733_;
}
else
{
lean_object* v_reuseFailAlloc_737_; 
v_reuseFailAlloc_737_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_737_, 0, v___x_732_);
lean_ctor_set(v_reuseFailAlloc_737_, 1, v___x_711_);
v___x_734_ = v_reuseFailAlloc_737_;
goto v_reusejp_733_;
}
v_reusejp_733_:
{
lean_object* v___x_735_; 
v___x_735_ = l_List_appendTR___redArg(v_b_702_, v___x_734_);
v_as_x27_701_ = v_tail_704_;
v_b_702_ = v___x_735_;
goto _start;
}
}
}
}
else
{
lean_dec_ref(v___x_708_);
lean_dec_ref(v___x_707_);
v_as_x27_701_ = v_tail_704_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg___boxed(lean_object* v_ph_740_, lean_object* v_a_741_, lean_object* v_c_742_, lean_object* v_index_743_, lean_object* v_as_x27_744_, lean_object* v_b_745_){
_start:
{
lean_object* v_res_746_; 
v_res_746_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg(v_ph_740_, v_a_741_, v_c_742_, v_index_743_, v_as_x27_744_, v_b_745_);
lean_dec(v_as_x27_744_);
lean_dec_ref(v_ph_740_);
return v_res_746_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___redArg(lean_object* v_ph_747_, lean_object* v_a_748_, lean_object* v_c_749_, lean_object* v_index_750_, lean_object* v_as_751_, lean_object* v_as_x27_752_, lean_object* v_b_753_){
_start:
{
if (lean_obj_tag(v_as_x27_752_) == 0)
{
lean_dec(v_index_750_);
lean_dec_ref(v_c_749_);
lean_dec(v_a_748_);
return v_b_753_;
}
else
{
lean_object* v_head_754_; lean_object* v_tail_755_; lean_object* v_dmin_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_head_754_ = lean_ctor_get(v_as_x27_752_, 0);
v_tail_755_ = lean_ctor_get(v_as_x27_752_, 1);
v_dmin_756_ = lean_ctor_get(v_c_749_, 1);
v___x_757_ = lp_choreo_Choreo_Phase_pairCert(v_ph_747_, v_a_748_, v_head_754_);
lean_inc(v_a_748_);
v___x_758_ = lp_choreo_Choreo_Phase_path(v_ph_747_, v_a_748_);
lean_inc(v_head_754_);
v___x_759_ = lp_choreo_Choreo_Phase_path(v_ph_747_, v_head_754_);
lean_inc_ref(v___x_759_);
lean_inc_ref(v___x_758_);
v___x_760_ = lp_choreo_Choreo_Cert_check(v___x_757_, v___x_758_, v___x_759_, v_dmin_756_);
if (v___x_760_ == 0)
{
lean_object* v___x_761_; lean_object* v___x_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v_fst_768_; lean_object* v_snd_769_; lean_object* v___x_771_; uint8_t v_isShared_772_; uint8_t v_isSharedCheck_789_; 
v___x_761_ = lp_choreo_Choreo_sampleTimes;
v___x_762_ = lean_box(0);
lean_inc_ref(v___x_759_);
lean_inc_ref(v___x_758_);
v___x_763_ = lp_choreo_List_mapTR_loop___at___00Choreo_Phase_diagnose_spec__0(v___x_758_, v___x_759_, v___x_761_, v___x_762_);
v___x_764_ = lean_obj_once(&lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0, &lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0_once, _init_lp_choreo_Choreo_ev___at___00Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0_spec__1___closed__0);
v___x_765_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v___x_758_, v___x_759_, v___x_764_);
v___x_766_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_766_, 0, v___x_764_);
lean_ctor_set(v___x_766_, 1, v___x_765_);
v___x_767_ = lp_choreo_List_foldl___at___00Choreo_Phase_diagnose_spec__1(v___x_766_, v___x_763_);
v_fst_768_ = lean_ctor_get(v___x_767_, 0);
v_snd_769_ = lean_ctor_get(v___x_767_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v___x_767_);
if (v_isSharedCheck_789_ == 0)
{
v___x_771_ = v___x_767_;
v_isShared_772_ = v_isSharedCheck_789_;
goto v_resetjp_770_;
}
else
{
lean_inc(v_snd_769_);
lean_inc(v_fst_768_);
lean_dec(v___x_767_);
v___x_771_ = lean_box(0);
v_isShared_772_ = v_isSharedCheck_789_;
goto v_resetjp_770_;
}
v_resetjp_770_:
{
lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; uint8_t v___x_776_; 
lean_inc(v_dmin_756_);
v___x_773_ = l_Rat_ofInt(v_dmin_756_);
v___x_774_ = lean_unsigned_to_nat(2u);
v___x_775_ = l_Rat_pow(v___x_773_, v___x_774_);
v___x_776_ = l_Rat_blt(v_snd_769_, v___x_775_);
if (v___x_776_ == 0)
{
lean_object* v___x_777_; lean_object* v___x_779_; 
lean_dec(v_fst_768_);
lean_inc(v_head_754_);
lean_inc(v_a_748_);
lean_inc(v_index_750_);
v___x_777_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_777_, 0, v_index_750_);
lean_ctor_set(v___x_777_, 1, v_a_748_);
lean_ctor_set(v___x_777_, 2, v_head_754_);
if (v_isShared_772_ == 0)
{
lean_ctor_set_tag(v___x_771_, 1);
lean_ctor_set(v___x_771_, 1, v___x_762_);
lean_ctor_set(v___x_771_, 0, v___x_777_);
v___x_779_ = v___x_771_;
goto v_reusejp_778_;
}
else
{
lean_object* v_reuseFailAlloc_782_; 
v_reuseFailAlloc_782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_782_, 0, v___x_777_);
lean_ctor_set(v_reuseFailAlloc_782_, 1, v___x_762_);
v___x_779_ = v_reuseFailAlloc_782_;
goto v_reusejp_778_;
}
v_reusejp_778_:
{
lean_object* v___x_780_; lean_object* v___x_781_; 
v___x_780_ = l_List_appendTR___redArg(v_b_753_, v___x_779_);
v___x_781_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg(v_ph_747_, v_a_748_, v_c_749_, v_index_750_, v_tail_755_, v___x_780_);
return v___x_781_;
}
}
else
{
lean_object* v___x_783_; lean_object* v___x_785_; 
lean_inc(v_head_754_);
lean_inc(v_a_748_);
lean_inc(v_index_750_);
v___x_783_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_783_, 0, v_index_750_);
lean_ctor_set(v___x_783_, 1, v_a_748_);
lean_ctor_set(v___x_783_, 2, v_head_754_);
lean_ctor_set(v___x_783_, 3, v_fst_768_);
if (v_isShared_772_ == 0)
{
lean_ctor_set_tag(v___x_771_, 1);
lean_ctor_set(v___x_771_, 1, v___x_762_);
lean_ctor_set(v___x_771_, 0, v___x_783_);
v___x_785_ = v___x_771_;
goto v_reusejp_784_;
}
else
{
lean_object* v_reuseFailAlloc_788_; 
v_reuseFailAlloc_788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_788_, 0, v___x_783_);
lean_ctor_set(v_reuseFailAlloc_788_, 1, v___x_762_);
v___x_785_ = v_reuseFailAlloc_788_;
goto v_reusejp_784_;
}
v_reusejp_784_:
{
lean_object* v___x_786_; lean_object* v___x_787_; 
v___x_786_ = l_List_appendTR___redArg(v_b_753_, v___x_785_);
v___x_787_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg(v_ph_747_, v_a_748_, v_c_749_, v_index_750_, v_tail_755_, v___x_786_);
return v___x_787_;
}
}
}
}
else
{
lean_object* v___x_790_; 
lean_dec_ref(v___x_759_);
lean_dec_ref(v___x_758_);
v___x_790_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg(v_ph_747_, v_a_748_, v_c_749_, v_index_750_, v_tail_755_, v_b_753_);
return v___x_790_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___redArg___boxed(lean_object* v_ph_791_, lean_object* v_a_792_, lean_object* v_c_793_, lean_object* v_index_794_, lean_object* v_as_795_, lean_object* v_as_x27_796_, lean_object* v_b_797_){
_start:
{
lean_object* v_res_798_; 
v_res_798_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___redArg(v_ph_791_, v_a_792_, v_c_793_, v_index_794_, v_as_795_, v_as_x27_796_, v_b_797_);
lean_dec(v_as_x27_796_);
lean_dec(v_as_795_);
lean_dec_ref(v_ph_791_);
return v_res_798_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___redArg(lean_object* v_ph_799_, lean_object* v_c_800_, lean_object* v_index_801_, lean_object* v_as_x27_802_, lean_object* v_b_803_){
_start:
{
if (lean_obj_tag(v_as_x27_802_) == 0)
{
lean_dec(v_index_801_);
lean_dec_ref(v_c_800_);
return v_b_803_;
}
else
{
lean_object* v_head_804_; lean_object* v_tail_805_; lean_object* v___x_806_; lean_object* v___x_807_; 
v_head_804_ = lean_ctor_get(v_as_x27_802_, 0);
v_tail_805_ = lean_ctor_get(v_as_x27_802_, 1);
lean_inc_n(v_head_804_, 2);
v___x_806_ = l_List_range(v_head_804_);
lean_inc(v_index_801_);
lean_inc_ref(v_c_800_);
v___x_807_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___redArg(v_ph_799_, v_head_804_, v_c_800_, v_index_801_, v___x_806_, v___x_806_, v_b_803_);
lean_dec(v___x_806_);
v_as_x27_802_ = v_tail_805_;
v_b_803_ = v___x_807_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___redArg___boxed(lean_object* v_ph_809_, lean_object* v_c_810_, lean_object* v_index_811_, lean_object* v_as_x27_812_, lean_object* v_b_813_){
_start:
{
lean_object* v_res_814_; 
v_res_814_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___redArg(v_ph_809_, v_c_810_, v_index_811_, v_as_x27_812_, v_b_813_);
lean_dec(v_as_x27_812_);
lean_dec_ref(v_ph_809_);
return v_res_814_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00List_find_x3f___at___00Choreo_Phase_diagnose_spec__3_spec__4(lean_object* v___x_815_, lean_object* v_ph_816_, lean_object* v_x_817_){
_start:
{
if (lean_obj_tag(v_x_817_) == 0)
{
lean_object* v___x_818_; 
lean_dec_ref(v_ph_816_);
lean_dec_ref(v___x_815_);
v___x_818_ = lean_box(0);
return v___x_818_;
}
else
{
lean_object* v_bounds_819_; lean_object* v_head_820_; lean_object* v_tail_821_; lean_object* v_xmin_822_; lean_object* v_xmax_823_; lean_object* v_ymin_824_; lean_object* v_ymax_825_; lean_object* v___x_826_; lean_object* v___x_827_; uint8_t v___x_828_; 
v_bounds_819_ = lean_ctor_get(v_ph_816_, 3);
v_head_820_ = lean_ctor_get(v_x_817_, 0);
lean_inc_n(v_head_820_, 2);
v_tail_821_ = lean_ctor_get(v_x_817_, 1);
lean_inc(v_tail_821_);
lean_dec_ref_known(v_x_817_, 2);
v_xmin_822_ = lean_ctor_get(v_bounds_819_, 0);
v_xmax_823_ = lean_ctor_get(v_bounds_819_, 1);
v_ymin_824_ = lean_ctor_get(v_bounds_819_, 2);
v_ymax_825_ = lean_ctor_get(v_bounds_819_, 3);
lean_inc_ref(v___x_815_);
v___x_826_ = lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(v___x_815_, v_head_820_);
lean_inc(v_xmin_822_);
v___x_827_ = l_Rat_ofInt(v_xmin_822_);
lean_inc_ref(v___x_826_);
v___x_828_ = l_Rat_blt(v___x_826_, v___x_827_);
if (v___x_828_ == 0)
{
lean_object* v___x_829_; uint8_t v___x_830_; 
lean_inc(v_xmax_823_);
v___x_829_ = l_Rat_ofInt(v_xmax_823_);
v___x_830_ = l_Rat_blt(v___x_829_, v___x_826_);
if (v___x_830_ == 0)
{
lean_object* v___x_831_; lean_object* v___x_832_; uint8_t v___x_833_; 
lean_inc(v_head_820_);
lean_inc_ref(v___x_815_);
v___x_831_ = lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(v___x_815_, v_head_820_);
lean_inc(v_ymin_824_);
v___x_832_ = l_Rat_ofInt(v_ymin_824_);
lean_inc_ref(v___x_831_);
v___x_833_ = l_Rat_blt(v___x_831_, v___x_832_);
if (v___x_833_ == 0)
{
lean_object* v___x_834_; uint8_t v___x_835_; 
lean_inc(v_ymax_825_);
v___x_834_ = l_Rat_ofInt(v_ymax_825_);
v___x_835_ = l_Rat_blt(v___x_834_, v___x_831_);
if (v___x_835_ == 0)
{
lean_dec(v_head_820_);
v_x_817_ = v_tail_821_;
goto _start;
}
else
{
lean_object* v___x_837_; 
lean_dec(v_tail_821_);
lean_dec_ref(v_ph_816_);
lean_dec_ref(v___x_815_);
v___x_837_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_837_, 0, v_head_820_);
return v___x_837_;
}
}
else
{
lean_object* v___x_838_; 
lean_dec_ref(v___x_831_);
lean_dec(v_tail_821_);
lean_dec_ref(v_ph_816_);
lean_dec_ref(v___x_815_);
v___x_838_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_838_, 0, v_head_820_);
return v___x_838_;
}
}
else
{
lean_object* v___x_839_; 
lean_dec(v_tail_821_);
lean_dec_ref(v_ph_816_);
lean_dec_ref(v___x_815_);
v___x_839_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_839_, 0, v_head_820_);
return v___x_839_;
}
}
else
{
lean_object* v___x_840_; 
lean_dec_ref(v___x_826_);
lean_dec(v_tail_821_);
lean_dec_ref(v_ph_816_);
lean_dec_ref(v___x_815_);
v___x_840_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_840_, 0, v_head_820_);
return v___x_840_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Phase_diagnose_spec__3(lean_object* v___x_841_, lean_object* v_ph_842_, lean_object* v_x_843_){
_start:
{
if (lean_obj_tag(v_x_843_) == 0)
{
lean_object* v___x_844_; 
lean_dec_ref(v_ph_842_);
lean_dec_ref(v___x_841_);
v___x_844_ = lean_box(0);
return v___x_844_;
}
else
{
lean_object* v_bounds_845_; lean_object* v_head_846_; lean_object* v_tail_847_; lean_object* v_xmin_848_; lean_object* v_xmax_849_; lean_object* v_ymin_850_; lean_object* v_ymax_851_; lean_object* v___x_852_; lean_object* v___x_853_; uint8_t v___x_854_; 
v_bounds_845_ = lean_ctor_get(v_ph_842_, 3);
v_head_846_ = lean_ctor_get(v_x_843_, 0);
lean_inc_n(v_head_846_, 2);
v_tail_847_ = lean_ctor_get(v_x_843_, 1);
lean_inc(v_tail_847_);
lean_dec_ref_known(v_x_843_, 2);
v_xmin_848_ = lean_ctor_get(v_bounds_845_, 0);
v_xmax_849_ = lean_ctor_get(v_bounds_845_, 1);
v_ymin_850_ = lean_ctor_get(v_bounds_845_, 2);
v_ymax_851_ = lean_ctor_get(v_bounds_845_, 3);
lean_inc_ref(v___x_841_);
v___x_852_ = lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(v___x_841_, v_head_846_);
lean_inc(v_xmin_848_);
v___x_853_ = l_Rat_ofInt(v_xmin_848_);
lean_inc_ref(v___x_852_);
v___x_854_ = l_Rat_blt(v___x_852_, v___x_853_);
if (v___x_854_ == 0)
{
lean_object* v___x_855_; uint8_t v___x_856_; 
lean_inc(v_xmax_849_);
v___x_855_ = l_Rat_ofInt(v_xmax_849_);
v___x_856_ = l_Rat_blt(v___x_855_, v___x_852_);
if (v___x_856_ == 0)
{
lean_object* v___x_857_; lean_object* v___x_858_; uint8_t v___x_859_; 
lean_inc(v_head_846_);
lean_inc_ref(v___x_841_);
v___x_857_ = lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(v___x_841_, v_head_846_);
lean_inc(v_ymin_850_);
v___x_858_ = l_Rat_ofInt(v_ymin_850_);
lean_inc_ref(v___x_857_);
v___x_859_ = l_Rat_blt(v___x_857_, v___x_858_);
if (v___x_859_ == 0)
{
lean_object* v___x_860_; uint8_t v___x_861_; 
lean_inc(v_ymax_851_);
v___x_860_ = l_Rat_ofInt(v_ymax_851_);
v___x_861_ = l_Rat_blt(v___x_860_, v___x_857_);
if (v___x_861_ == 0)
{
lean_object* v___x_862_; 
lean_dec(v_head_846_);
v___x_862_ = lp_choreo_List_find_x3f___at___00List_find_x3f___at___00Choreo_Phase_diagnose_spec__3_spec__4(v___x_841_, v_ph_842_, v_tail_847_);
return v___x_862_;
}
else
{
lean_object* v___x_863_; 
lean_dec(v_tail_847_);
lean_dec_ref(v_ph_842_);
lean_dec_ref(v___x_841_);
v___x_863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_863_, 0, v_head_846_);
return v___x_863_;
}
}
else
{
lean_object* v___x_864_; 
lean_dec_ref(v___x_857_);
lean_dec(v_tail_847_);
lean_dec_ref(v_ph_842_);
lean_dec_ref(v___x_841_);
v___x_864_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_864_, 0, v_head_846_);
return v___x_864_;
}
}
else
{
lean_object* v___x_865_; 
lean_dec(v_tail_847_);
lean_dec_ref(v_ph_842_);
lean_dec_ref(v___x_841_);
v___x_865_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_865_, 0, v_head_846_);
return v___x_865_;
}
}
else
{
lean_object* v___x_866_; 
lean_dec_ref(v___x_852_);
lean_dec(v_tail_847_);
lean_dec_ref(v_ph_842_);
lean_dec_ref(v___x_841_);
v___x_866_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_866_, 0, v_head_846_);
return v___x_866_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___redArg(lean_object* v_ph_867_, lean_object* v_c_868_, lean_object* v_index_869_, lean_object* v_as_x27_870_, lean_object* v_b_871_){
_start:
{
if (lean_obj_tag(v_as_x27_870_) == 0)
{
lean_dec(v_index_869_);
lean_dec_ref(v_c_868_);
lean_dec_ref(v_ph_867_);
return v_b_871_;
}
else
{
lean_object* v_head_872_; lean_object* v_tail_873_; lean_object* v_out_874_; lean_object* v___x_875_; lean_object* v_out_877_; uint8_t v___y_894_; uint8_t v___x_901_; 
v_head_872_ = lean_ctor_get(v_as_x27_870_, 0);
v_tail_873_ = lean_ctor_get(v_as_x27_870_, 1);
v_out_874_ = lean_box(0);
lean_inc(v_head_872_);
v___x_875_ = lp_choreo_Choreo_Phase_path(v_ph_867_, v_head_872_);
v___x_901_ = lp_choreo_Choreo_Path_wf(v___x_875_);
if (v___x_901_ == 0)
{
v___y_894_ = v___x_901_;
goto v___jp_893_;
}
else
{
lean_object* v_bounds_902_; uint8_t v___x_903_; 
v_bounds_902_ = lean_ctor_get(v_ph_867_, 3);
lean_inc_ref(v___x_875_);
v___x_903_ = lp_choreo_Choreo_Path_inRect(v___x_875_, v_bounds_902_);
v___y_894_ = v___x_903_;
goto v___jp_893_;
}
v___jp_876_:
{
lean_object* v_vmax_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; uint8_t v___x_887_; 
v_vmax_878_ = lean_ctor_get(v_c_868_, 2);
v___x_879_ = lean_unsigned_to_nat(5u);
v___x_880_ = lean_int_mul(v_vmax_878_, v_vmax_878_);
lean_inc_ref_n(v_c_868_, 2);
v___x_881_ = lp_choreo_Choreo_Config_durNum(v_c_868_, v_ph_867_);
v___x_882_ = lean_int_mul(v___x_881_, v___x_881_);
lean_dec(v___x_881_);
v___x_883_ = lean_int_mul(v___x_880_, v___x_882_);
lean_dec(v___x_882_);
lean_dec(v___x_880_);
v___x_884_ = lp_choreo_Choreo_Config_durDen(v_c_868_);
v___x_885_ = lean_int_mul(v___x_884_, v___x_884_);
lean_dec(v___x_884_);
v___x_886_ = lp_choreo_Choreo_speedPoly(v___x_875_, v___x_883_, v___x_885_);
lean_dec(v___x_885_);
lean_dec(v___x_883_);
v___x_887_ = lp_choreo_Choreo_Poly_bern(v___x_879_, v___x_886_);
if (v___x_887_ == 0)
{
lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; 
lean_inc(v_head_872_);
lean_inc(v_index_869_);
v___x_888_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_888_, 0, v_index_869_);
lean_ctor_set(v___x_888_, 1, v_head_872_);
v___x_889_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_889_, 0, v___x_888_);
lean_ctor_set(v___x_889_, 1, v_out_874_);
v___x_890_ = l_List_appendTR___redArg(v_out_877_, v___x_889_);
v_as_x27_870_ = v_tail_873_;
v_b_871_ = v___x_890_;
goto _start;
}
else
{
v_as_x27_870_ = v_tail_873_;
v_b_871_ = v_out_877_;
goto _start;
}
}
v___jp_893_:
{
if (v___y_894_ == 0)
{
lean_object* v___x_895_; lean_object* v___x_896_; 
v___x_895_ = lp_choreo_Choreo_sampleTimes;
lean_inc_ref(v_ph_867_);
lean_inc_ref(v___x_875_);
v___x_896_ = lp_choreo_List_find_x3f___at___00Choreo_Phase_diagnose_spec__3(v___x_875_, v_ph_867_, v___x_895_);
if (lean_obj_tag(v___x_896_) == 0)
{
v_out_877_ = v_b_871_;
goto v___jp_876_;
}
else
{
lean_object* v_val_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; 
v_val_897_ = lean_ctor_get(v___x_896_, 0);
lean_inc(v_val_897_);
lean_dec_ref_known(v___x_896_, 1);
lean_inc(v_head_872_);
lean_inc(v_index_869_);
v___x_898_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_898_, 0, v_index_869_);
lean_ctor_set(v___x_898_, 1, v_head_872_);
lean_ctor_set(v___x_898_, 2, v_val_897_);
v___x_899_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_899_, 0, v___x_898_);
lean_ctor_set(v___x_899_, 1, v_out_874_);
v___x_900_ = l_List_appendTR___redArg(v_b_871_, v___x_899_);
v_out_877_ = v___x_900_;
goto v___jp_876_;
}
}
else
{
v_out_877_ = v_b_871_;
goto v___jp_876_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___redArg___boxed(lean_object* v_ph_904_, lean_object* v_c_905_, lean_object* v_index_906_, lean_object* v_as_x27_907_, lean_object* v_b_908_){
_start:
{
lean_object* v_res_909_; 
v_res_909_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___redArg(v_ph_904_, v_c_905_, v_index_906_, v_as_x27_907_, v_b_908_);
lean_dec(v_as_x27_907_);
return v_res_909_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Phase_diagnose(lean_object* v_c_910_, lean_object* v_index_911_, lean_object* v_ph_912_){
_start:
{
lean_object* v_n_913_; lean_object* v_out_914_; lean_object* v_ds_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v_n_913_ = lean_ctor_get(v_c_910_, 0);
v_out_914_ = lean_box(0);
lean_inc(v_n_913_);
v_ds_915_ = l_List_range(v_n_913_);
lean_inc(v_index_911_);
lean_inc_ref(v_c_910_);
lean_inc_ref(v_ph_912_);
v___x_916_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___redArg(v_ph_912_, v_c_910_, v_index_911_, v_ds_915_, v_out_914_);
v___x_917_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___redArg(v_ph_912_, v_c_910_, v_index_911_, v_ds_915_, v___x_916_);
lean_dec(v_ds_915_);
lean_dec_ref(v_ph_912_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2(lean_object* v_ph_918_, lean_object* v_a_919_, lean_object* v_c_920_, lean_object* v_index_921_, lean_object* v_as_922_, lean_object* v_as_x27_923_, lean_object* v_b_924_, lean_object* v_a_925_){
_start:
{
lean_object* v___x_926_; 
v___x_926_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___redArg(v_ph_918_, v_a_919_, v_c_920_, v_index_921_, v_as_922_, v_as_x27_923_, v_b_924_);
return v___x_926_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2___boxed(lean_object* v_ph_927_, lean_object* v_a_928_, lean_object* v_c_929_, lean_object* v_index_930_, lean_object* v_as_931_, lean_object* v_as_x27_932_, lean_object* v_b_933_, lean_object* v_a_934_){
_start:
{
lean_object* v_res_935_; 
v_res_935_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2(v_ph_927_, v_a_928_, v_c_929_, v_index_930_, v_as_931_, v_as_x27_932_, v_b_933_, v_a_934_);
lean_dec(v_as_x27_932_);
lean_dec(v_as_931_);
lean_dec_ref(v_ph_927_);
return v_res_935_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4(lean_object* v_ph_936_, lean_object* v_c_937_, lean_object* v_index_938_, lean_object* v_as_939_, lean_object* v_as_x27_940_, lean_object* v_b_941_, lean_object* v_a_942_){
_start:
{
lean_object* v___x_943_; 
v___x_943_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___redArg(v_ph_936_, v_c_937_, v_index_938_, v_as_x27_940_, v_b_941_);
return v___x_943_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4___boxed(lean_object* v_ph_944_, lean_object* v_c_945_, lean_object* v_index_946_, lean_object* v_as_947_, lean_object* v_as_x27_948_, lean_object* v_b_949_, lean_object* v_a_950_){
_start:
{
lean_object* v_res_951_; 
v_res_951_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__4(v_ph_944_, v_c_945_, v_index_946_, v_as_947_, v_as_x27_948_, v_b_949_, v_a_950_);
lean_dec(v_as_x27_948_);
lean_dec(v_as_947_);
return v_res_951_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5(lean_object* v_ph_952_, lean_object* v_c_953_, lean_object* v_index_954_, lean_object* v_as_955_, lean_object* v_as_x27_956_, lean_object* v_b_957_, lean_object* v_a_958_){
_start:
{
lean_object* v___x_959_; 
v___x_959_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___redArg(v_ph_952_, v_c_953_, v_index_954_, v_as_x27_956_, v_b_957_);
return v___x_959_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5___boxed(lean_object* v_ph_960_, lean_object* v_c_961_, lean_object* v_index_962_, lean_object* v_as_963_, lean_object* v_as_x27_964_, lean_object* v_b_965_, lean_object* v_a_966_){
_start:
{
lean_object* v_res_967_; 
v_res_967_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__5(v_ph_960_, v_c_961_, v_index_962_, v_as_963_, v_as_x27_964_, v_b_965_, v_a_966_);
lean_dec(v_as_x27_964_);
lean_dec(v_as_963_);
lean_dec_ref(v_ph_960_);
return v_res_967_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2(lean_object* v_ph_968_, lean_object* v_a_969_, lean_object* v_c_970_, lean_object* v_index_971_, lean_object* v_as_972_, lean_object* v_as_x27_973_, lean_object* v_b_974_, lean_object* v_a_975_){
_start:
{
lean_object* v___x_976_; 
v___x_976_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___redArg(v_ph_968_, v_a_969_, v_c_970_, v_index_971_, v_as_x27_973_, v_b_974_);
return v___x_976_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2___boxed(lean_object* v_ph_977_, lean_object* v_a_978_, lean_object* v_c_979_, lean_object* v_index_980_, lean_object* v_as_981_, lean_object* v_as_x27_982_, lean_object* v_b_983_, lean_object* v_a_984_){
_start:
{
lean_object* v_res_985_; 
v_res_985_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_Phase_diagnose_spec__2_spec__2(v_ph_977_, v_a_978_, v_c_979_, v_index_980_, v_as_981_, v_as_x27_982_, v_b_983_, v_a_984_);
lean_dec(v_as_x27_982_);
lean_dec(v_as_981_);
lean_dec_ref(v_ph_977_);
return v_res_985_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_QuickRefute(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Compose(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Build(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize_runtime_module();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_QuickRefute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Compose(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_Choreo_instInhabitedPt_default = _init_lp_choreo_Choreo_instInhabitedPt_default();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedPt_default);
lp_choreo_Choreo_instInhabitedPt = _init_lp_choreo_Choreo_instInhabitedPt();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedPt);
lp_choreo_Choreo_instInhabitedProblem_default = _init_lp_choreo_Choreo_instInhabitedProblem_default();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedProblem_default);
lp_choreo_Choreo_instInhabitedProblem = _init_lp_choreo_Choreo_instInhabitedProblem();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedProblem);
lp_choreo_Choreo_sampleTimes = _init_lp_choreo_Choreo_sampleTimes();
lean_mark_persistent(lp_choreo_Choreo_sampleTimes);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
