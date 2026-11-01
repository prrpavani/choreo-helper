// Lean compiler output
// Module: Choreo.Stress
// Imports: public import Init public meta import Init public import Choreo.Emit
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
lean_object* lean_nat_to_int(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_String_Slice_slice_x21(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_extract_fast(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_string_utf8_next_fast(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_String_Slice_pos_x21(lean_object*, lean_object*);
uint8_t lean_string_get_byte_fast(lean_object*, lean_object*);
uint8_t lean_uint8_dec_eq(uint8_t, uint8_t);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* l_String_Slice_posGE___redArg(lean_object*, lean_object*);
lean_object* l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_mul(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lp_choreo_Choreo_Poly_add(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_phaseL(lean_object*);
lean_object* lp_choreo_Choreo_Poly_neg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_lineBrokenAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_first(lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_easePath(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_scale(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_last(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_chooseCerts(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_askL(lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_nextPairs(lean_object*);
lean_object* lp_choreo_Choreo_natsL(lean_object*);
lean_object* lp_choreo_Choreo_intL(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lp_choreo_Choreo_Phase_diagnose(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_ratL(lean_object*);
lean_object* lp_choreo_Choreo_tightestPair(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
extern lean_object* lp_choreo_Choreo_stageRect;
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* lp_choreo_Choreo_configL(lean_object*);
lean_object* lp_choreo_Choreo_listL___redArg(lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Routine_setPhase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Routine_setPhase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_setPhase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_setPhase___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_recert_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_recert(lean_object*);
static const lean_array_object lp_choreo_Choreo_setPath___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_setPath___closed__0 = (const lean_object*)&lp_choreo_Choreo_setPath___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_setPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_startOf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_startOf___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_endOf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_endOf___boxed(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__0;
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__1;
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__2;
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__3;
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__4;
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__5;
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__6;
static lean_once_cell_t lp_choreo_Choreo_sprintPath___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sprintPath___closed__7;
LEAN_EXPORT lean_object* lp_choreo_Choreo_sprintPath(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_shiftPath(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_shiftPath___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_reflectPath(lean_object*);
static const lean_string_object lp_choreo_Choreo_rejectedPhase___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "Phase.check R.cfg (R.phases.getD "};
static const lean_object* lp_choreo_Choreo_rejectedPhase___closed__0 = (const lean_object*)&lp_choreo_Choreo_rejectedPhase___closed__0_value;
static const lean_string_object lp_choreo_Choreo_rejectedPhase___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = " default) = false := by decide +kernel"};
static const lean_object* lp_choreo_Choreo_rejectedPhase___closed__1 = (const lean_object*)&lp_choreo_Choreo_rejectedPhase___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_rejectedPhase(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_instInhabitedPhase___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedPhase___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedPhase;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__0;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__1;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_allMutationsOf___lam__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_allMutationsOf___lam__2___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__2(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_allMutationsOf___lam__3___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_allMutationsOf___lam__3___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__10(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__10___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__2(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hold"};
static const lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__0 = (const lean_object*)&lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__0_value;
static const lean_string_object lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1 = (const lean_object*)&lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__5(lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__3(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__3___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__9(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__9___boxed(lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__8(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__8___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__7(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 98, .m_capacity = 98, .m_length = 97, .m_data = "(R.phases.all (Phase.check R.cfg) && R.checkMovement && R.checkMusic) = true := by decide +kernel"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__0 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__0_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Ask for less space"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__1 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__1_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 83, .m_capacity = 83, .m_length = 82, .m_data = "The required gap drops by 10 cm. Anything that kept the bigger gap keeps this one."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__2 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__2_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "none"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__3 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__3_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kept"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__4 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__4_value;
static lean_once_cell_t lp_choreo_Choreo_allMutationsOf___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_allMutationsOf___closed__5;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Allow a higher speed limit"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__6 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__6_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = "The limit rises by 1 m/s. Nobody has to change."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__7 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__7_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Halve the tempo"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__8 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__8_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Same steps, half the speed, twice the length."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__9 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__9_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "Mirror the whole routine"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__10 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__10_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "Left becomes right. Every gap stays the same (reflect_keeps_gap)."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__11 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__11_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Break the symmetry"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__12 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__12_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 76, .m_capacity = 76, .m_length = 75, .m_data = "One dancer ends 10 cm to the side, so the left no longer mirrors the right."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__13 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__13_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formation"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__14 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__14_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Ask.endsMirrored"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__15 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__15_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Ask.check R "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__16 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__16_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = " = false := by decide +kernel"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__17 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__17_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Claim the wrong length"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__18 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__18_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "The routine says it lasts one second longer than its counts do."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__19 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__19_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "musicality"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__20 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__20_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "refuted"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__21 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__21_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "MusicalityProved.duration"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__22 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__22_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 58, .m_data = "¬ MusicalityProved R := not_musicality (by decide +kernel)"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__23 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__23_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Nudge a dancer out of line"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__24 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__24_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "One dancer lands 15 cm off the line. It's hard to see, and it isn't straight."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__25 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__25_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Ask.endsInLine"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__26 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__26_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 31, .m_data = "¬ Ask.Holds Rat R (.endsInLine "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__27 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__27_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__28 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__28_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = ") := refute_line (ph := R.phases.getD "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__29 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__29_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " default) (a := "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__30 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__30_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (b := "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__31 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__31_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = ") rfl (by decide +kernel) (by decide +kernel)"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__32 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__32_value;
static const lean_closure_object lp_choreo_Choreo_allMutationsOf___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_allMutationsOf___lam__0, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__33 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__33_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "Add a sprint"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__34 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__34_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 74, .m_capacity = 74, .m_length = 73, .m_data = "One dancer takes a wild detour in the same counts, faster than the limit."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__35 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__35_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "movement"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__36 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__36_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rejected"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__37 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__37_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "PhaseSpec.speedLimit"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__38 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__38_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 49, .m_capacity = 49, .m_length = 48, .m_data = "Poly.bern splitLimit (speedPoly ((R.phases.getD "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__39 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__39_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = " default).path "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__40 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__40_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = ") (R.cfg.vmax * R.cfg.vmax * (R.cfg.durNum (R.phases.getD "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__41 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__41_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = " default) * R.cfg.durNum (R.phases.getD "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__42 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__42_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 72, .m_capacity = 72, .m_length = 71, .m_data = " default))) (R.cfg.durDen * R.cfg.durDen)) = false := by decide +kernel"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__43 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__43_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__44_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Forge a certificate"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__44 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__44_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__45_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "The routine is untouched, but its evidence claims every pair stays 5 m apart."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__45 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__45_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__46_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "Cert.check"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__46 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__46_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__47_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 26, .m_capacity = 26, .m_length = 25, .m_data = "Start a move off the beat"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__47 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__47_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__48_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "One move begins a sixteenth of a beat early."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__48 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__48_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__49_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "MusicalityProved.onBeat"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__49 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__49_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__50_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Make a dancer teleport"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__50 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__50_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__51_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 64, .m_capacity = 64, .m_length = 63, .m_data = "The next phase starts 40 cm away from where the last one ended."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__51 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__51_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__52_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "RoutineSpec.continuous"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__52 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__52_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__53_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "R.checkMovement = false := by decide +kernel"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__53 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__53_value;
static lean_once_cell_t lp_choreo_Choreo_allMutationsOf___closed__54_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_allMutationsOf___closed__54;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__55_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Run a dancer past the edge"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__55 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__55_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__56_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 54, .m_capacity = 54, .m_length = 53, .m_data = "One dancer's destination is outside the allowed area."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__56 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__56_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__57_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "PhaseSpec.onStage"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__57 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__57_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__58_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 37, .m_data = "¬ PhaseSpec Rat R.cfg (R.phases.getD "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__58 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__58_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__59_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = " default) := refute_stage (i := "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__59 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__59_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__60_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (t := "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__60 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__60_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__61_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = ") (by decide +kernel) (by decide +kernel) (by decide +kernel) (by decide +kernel)"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__61 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__61_value;
static const lean_closure_object lp_choreo_Choreo_allMutationsOf___closed__62_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*1, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_allMutationsOf___lam__4, .m_arity = 3, .m_num_fixed = 1, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))} };
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__62 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__62_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__63_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Send a dancer onto someone else's mark"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__63 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__63_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__64_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = "One dancer's destination becomes another dancer's."};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__64 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__64_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__65_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "PhaseSpec.noCollision"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__65 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__65_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__66_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = " default) := refute_quick (i := "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__66 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__66_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__67_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (j := "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__67 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__67_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__68_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (a := "};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__68 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__68_value;
static const lean_string_object lp_choreo_Choreo_allMutationsOf___closed__69_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ") (by decide +kernel)"};
static const lean_object* lp_choreo_Choreo_allMutationsOf___closed__69 = (const lean_object*)&lp_choreo_Choreo_allMutationsOf___closed__69_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_mutationsOf_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_mutationsOf(lean_object*);
static const lean_string_object lp_choreo_Choreo_stressSource___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "m"};
static const lean_object* lp_choreo_Choreo_stressSource___lam__0___closed__0 = (const lean_object*)&lp_choreo_Choreo_stressSource___lam__0___closed__0_value;
static const lean_string_object lp_choreo_Choreo_stressSource___lam__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "p"};
static const lean_object* lp_choreo_Choreo_stressSource___lam__0___closed__1 = (const lean_object*)&lp_choreo_Choreo_stressSource___lam__0___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressSource___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressSource___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressSource_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "R.checkMovement"};
static const lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__0 = (const lean_object*)&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__0_value;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__2;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__4;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__5;
static const lean_ctor_object lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6 = (const lean_object*)&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6_value;
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "def m"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " : Phase := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "R.phases"};
static const lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__0 = (const lean_object*)&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__0_value;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__2;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__4;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__5;
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " R "};
static const lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__0 = (const lean_object*)&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__0_value;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__2;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__4;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__5;
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "R.cfg"};
static const lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__0 = (const lean_object*)&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__0_value;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__2;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__4;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__5;
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "R.checkMusic"};
static const lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__0 = (const lean_object*)&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__0_value;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static uint8_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__2;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__4;
static lean_once_cell_t lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__5;
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_stressSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 234, .m_capacity = 234, .m_length = 225, .m_data = "import Choreo.Source\nimport Choreo.QuickRefute\nopen Choreo\n\nnamespace Stress\n\ninstance : Inhabited Phase := ⟨{ t0 := 0, t1 := 1, paths := [], bounds := ⟨0, 0, 0, 0⟩, certs := [], rigid := [], orbits := [], target := none }⟩\n\n"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__0 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__0_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 15, .m_data = " : Routine := ⟨"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__1 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__1_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_choreo_Choreo_stressSource___closed__2 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__2_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⟩\n"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__3 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__3_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = ".cfg"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__4 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__4_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ".phases"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__5 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__5_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ".checkMovement"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__6 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__6_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = ".checkMusic"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__7 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__7_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = " m"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__8 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__8_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "theorem verdict"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__9 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__9_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " : "};
static const lean_object* lp_choreo_Choreo_stressSource___closed__10 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__10_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "\n#eval IO.println \"MUTATION "};
static const lean_object* lp_choreo_Choreo_stressSource___closed__11 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__11_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\"\n\n"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__12 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__12_value;
static const lean_string_object lp_choreo_Choreo_stressSource___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "end Stress\n"};
static const lean_object* lp_choreo_Choreo_stressSource___closed__13 = (const lean_object*)&lp_choreo_Choreo_stressSource___closed__13_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressSource(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "index"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "what"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__2_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "family"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__3 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__3_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tier"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__4 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__4_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "catches"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__5 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__5_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "theorem"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__6 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__6_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verdict"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__7 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__7_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "statement"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__8 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__8_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressJson(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Routine_setPhase_spec__0(lean_object* v_k_1_, lean_object* v_f_2_, lean_object* v_a_3_, lean_object* v_a_4_){
_start:
{
if (lean_obj_tag(v_a_3_) == 0)
{
lean_object* v___x_5_; 
lean_dec_ref(v_f_2_);
v___x_5_ = l_List_reverse___redArg(v_a_4_);
return v___x_5_;
}
else
{
lean_object* v_head_6_; lean_object* v_tail_7_; lean_object* v___x_9_; uint8_t v_isShared_10_; uint8_t v_isSharedCheck_21_; 
v_head_6_ = lean_ctor_get(v_a_3_, 0);
v_tail_7_ = lean_ctor_get(v_a_3_, 1);
v_isSharedCheck_21_ = !lean_is_exclusive(v_a_3_);
if (v_isSharedCheck_21_ == 0)
{
v___x_9_ = v_a_3_;
v_isShared_10_ = v_isSharedCheck_21_;
goto v_resetjp_8_;
}
else
{
lean_inc(v_tail_7_);
lean_inc(v_head_6_);
lean_dec(v_a_3_);
v___x_9_ = lean_box(0);
v_isShared_10_ = v_isSharedCheck_21_;
goto v_resetjp_8_;
}
v_resetjp_8_:
{
lean_object* v___y_12_; lean_object* v_fst_17_; lean_object* v_snd_18_; uint8_t v___x_19_; 
v_fst_17_ = lean_ctor_get(v_head_6_, 0);
lean_inc(v_fst_17_);
v_snd_18_ = lean_ctor_get(v_head_6_, 1);
lean_inc(v_snd_18_);
lean_dec(v_head_6_);
v___x_19_ = lean_nat_dec_eq(v_snd_18_, v_k_1_);
lean_dec(v_snd_18_);
if (v___x_19_ == 0)
{
v___y_12_ = v_fst_17_;
goto v___jp_11_;
}
else
{
lean_object* v___x_20_; 
lean_inc_ref(v_f_2_);
v___x_20_ = lean_apply_1(v_f_2_, v_fst_17_);
v___y_12_ = v___x_20_;
goto v___jp_11_;
}
v___jp_11_:
{
lean_object* v___x_14_; 
if (v_isShared_10_ == 0)
{
lean_ctor_set(v___x_9_, 1, v_a_4_);
lean_ctor_set(v___x_9_, 0, v___y_12_);
v___x_14_ = v___x_9_;
goto v_reusejp_13_;
}
else
{
lean_object* v_reuseFailAlloc_16_; 
v_reuseFailAlloc_16_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_16_, 0, v___y_12_);
lean_ctor_set(v_reuseFailAlloc_16_, 1, v_a_4_);
v___x_14_ = v_reuseFailAlloc_16_;
goto v_reusejp_13_;
}
v_reusejp_13_:
{
v_a_3_ = v_tail_7_;
v_a_4_ = v___x_14_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Routine_setPhase_spec__0___boxed(lean_object* v_k_22_, lean_object* v_f_23_, lean_object* v_a_24_, lean_object* v_a_25_){
_start:
{
lean_object* v_res_26_; 
v_res_26_ = lp_choreo_List_mapTR_loop___at___00Choreo_Routine_setPhase_spec__0(v_k_22_, v_f_23_, v_a_24_, v_a_25_);
lean_dec(v_k_22_);
return v_res_26_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_setPhase(lean_object* v_r_27_, lean_object* v_k_28_, lean_object* v_f_29_){
_start:
{
lean_object* v_cfg_30_; lean_object* v_phases_31_; lean_object* v___x_33_; uint8_t v_isShared_34_; uint8_t v_isSharedCheck_42_; 
v_cfg_30_ = lean_ctor_get(v_r_27_, 0);
v_phases_31_ = lean_ctor_get(v_r_27_, 1);
v_isSharedCheck_42_ = !lean_is_exclusive(v_r_27_);
if (v_isSharedCheck_42_ == 0)
{
v___x_33_ = v_r_27_;
v_isShared_34_ = v_isSharedCheck_42_;
goto v_resetjp_32_;
}
else
{
lean_inc(v_phases_31_);
lean_inc(v_cfg_30_);
lean_dec(v_r_27_);
v___x_33_ = lean_box(0);
v_isShared_34_ = v_isSharedCheck_42_;
goto v_resetjp_32_;
}
v_resetjp_32_:
{
lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_40_; 
v___x_35_ = lean_unsigned_to_nat(0u);
v___x_36_ = l_List_zipIdxTR___redArg(v_phases_31_, v___x_35_);
v___x_37_ = lean_box(0);
v___x_38_ = lp_choreo_List_mapTR_loop___at___00Choreo_Routine_setPhase_spec__0(v_k_28_, v_f_29_, v___x_36_, v___x_37_);
if (v_isShared_34_ == 0)
{
lean_ctor_set(v___x_33_, 1, v___x_38_);
v___x_40_ = v___x_33_;
goto v_reusejp_39_;
}
else
{
lean_object* v_reuseFailAlloc_41_; 
v_reuseFailAlloc_41_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_41_, 0, v_cfg_30_);
lean_ctor_set(v_reuseFailAlloc_41_, 1, v___x_38_);
v___x_40_ = v_reuseFailAlloc_41_;
goto v_reusejp_39_;
}
v_reusejp_39_:
{
return v___x_40_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_setPhase___boxed(lean_object* v_r_43_, lean_object* v_k_44_, lean_object* v_f_45_){
_start:
{
lean_object* v_res_46_; 
v_res_46_ = lp_choreo_Choreo_Routine_setPhase(v_r_43_, v_k_44_, v_f_45_);
lean_dec(v_k_44_);
return v_res_46_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_recert_spec__0(lean_object* v___x_47_, lean_object* v_a_48_, lean_object* v_a_49_){
_start:
{
if (lean_obj_tag(v_a_48_) == 0)
{
lean_object* v___x_50_; 
lean_dec_ref(v___x_47_);
v___x_50_ = l_List_reverse___redArg(v_a_49_);
return v___x_50_;
}
else
{
lean_object* v_head_51_; lean_object* v_tail_52_; lean_object* v___x_54_; uint8_t v_isShared_55_; uint8_t v_isSharedCheck_78_; 
v_head_51_ = lean_ctor_get(v_a_48_, 0);
v_tail_52_ = lean_ctor_get(v_a_48_, 1);
v_isSharedCheck_78_ = !lean_is_exclusive(v_a_48_);
if (v_isSharedCheck_78_ == 0)
{
v___x_54_ = v_a_48_;
v_isShared_55_ = v_isSharedCheck_78_;
goto v_resetjp_53_;
}
else
{
lean_inc(v_tail_52_);
lean_inc(v_head_51_);
lean_dec(v_a_48_);
v___x_54_ = lean_box(0);
v_isShared_55_ = v_isSharedCheck_78_;
goto v_resetjp_53_;
}
v_resetjp_53_:
{
lean_object* v_t0_56_; lean_object* v_t1_57_; lean_object* v_paths_58_; lean_object* v_bounds_59_; lean_object* v_rigid_60_; lean_object* v_orbits_61_; lean_object* v_target_62_; lean_object* v___x_64_; uint8_t v_isShared_65_; uint8_t v_isSharedCheck_76_; 
v_t0_56_ = lean_ctor_get(v_head_51_, 0);
v_t1_57_ = lean_ctor_get(v_head_51_, 1);
v_paths_58_ = lean_ctor_get(v_head_51_, 2);
v_bounds_59_ = lean_ctor_get(v_head_51_, 3);
v_rigid_60_ = lean_ctor_get(v_head_51_, 5);
v_orbits_61_ = lean_ctor_get(v_head_51_, 6);
v_target_62_ = lean_ctor_get(v_head_51_, 7);
v_isSharedCheck_76_ = !lean_is_exclusive(v_head_51_);
if (v_isSharedCheck_76_ == 0)
{
lean_object* v_unused_77_; 
v_unused_77_ = lean_ctor_get(v_head_51_, 4);
lean_dec(v_unused_77_);
v___x_64_ = v_head_51_;
v_isShared_65_ = v_isSharedCheck_76_;
goto v_resetjp_63_;
}
else
{
lean_inc(v_target_62_);
lean_inc(v_orbits_61_);
lean_inc(v_rigid_60_);
lean_inc(v_bounds_59_);
lean_inc(v_paths_58_);
lean_inc(v_t1_57_);
lean_inc(v_t0_56_);
lean_dec(v_head_51_);
v___x_64_ = lean_box(0);
v_isShared_65_ = v_isSharedCheck_76_;
goto v_resetjp_63_;
}
v_resetjp_63_:
{
lean_object* v_n_66_; lean_object* v_dmin_67_; lean_object* v___x_68_; lean_object* v___x_70_; 
v_n_66_ = lean_ctor_get(v___x_47_, 0);
v_dmin_67_ = lean_ctor_get(v___x_47_, 1);
lean_inc(v_n_66_);
v___x_68_ = lp_choreo_Choreo_chooseCerts(v_n_66_, v_paths_58_, v_dmin_67_);
if (v_isShared_65_ == 0)
{
lean_ctor_set(v___x_64_, 4, v___x_68_);
v___x_70_ = v___x_64_;
goto v_reusejp_69_;
}
else
{
lean_object* v_reuseFailAlloc_75_; 
v_reuseFailAlloc_75_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_75_, 0, v_t0_56_);
lean_ctor_set(v_reuseFailAlloc_75_, 1, v_t1_57_);
lean_ctor_set(v_reuseFailAlloc_75_, 2, v_paths_58_);
lean_ctor_set(v_reuseFailAlloc_75_, 3, v_bounds_59_);
lean_ctor_set(v_reuseFailAlloc_75_, 4, v___x_68_);
lean_ctor_set(v_reuseFailAlloc_75_, 5, v_rigid_60_);
lean_ctor_set(v_reuseFailAlloc_75_, 6, v_orbits_61_);
lean_ctor_set(v_reuseFailAlloc_75_, 7, v_target_62_);
v___x_70_ = v_reuseFailAlloc_75_;
goto v_reusejp_69_;
}
v_reusejp_69_:
{
lean_object* v___x_72_; 
if (v_isShared_55_ == 0)
{
lean_ctor_set(v___x_54_, 1, v_a_49_);
lean_ctor_set(v___x_54_, 0, v___x_70_);
v___x_72_ = v___x_54_;
goto v_reusejp_71_;
}
else
{
lean_object* v_reuseFailAlloc_74_; 
v_reuseFailAlloc_74_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_74_, 0, v___x_70_);
lean_ctor_set(v_reuseFailAlloc_74_, 1, v_a_49_);
v___x_72_ = v_reuseFailAlloc_74_;
goto v_reusejp_71_;
}
v_reusejp_71_:
{
v_a_48_ = v_tail_52_;
v_a_49_ = v___x_72_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_recert(lean_object* v_r_79_){
_start:
{
lean_object* v_cfg_80_; lean_object* v_phases_81_; lean_object* v___x_83_; uint8_t v_isShared_84_; uint8_t v_isSharedCheck_90_; 
v_cfg_80_ = lean_ctor_get(v_r_79_, 0);
v_phases_81_ = lean_ctor_get(v_r_79_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_r_79_);
if (v_isSharedCheck_90_ == 0)
{
v___x_83_ = v_r_79_;
v_isShared_84_ = v_isSharedCheck_90_;
goto v_resetjp_82_;
}
else
{
lean_inc(v_phases_81_);
lean_inc(v_cfg_80_);
lean_dec(v_r_79_);
v___x_83_ = lean_box(0);
v_isShared_84_ = v_isSharedCheck_90_;
goto v_resetjp_82_;
}
v_resetjp_82_:
{
lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_88_; 
v___x_85_ = lean_box(0);
lean_inc_ref(v_cfg_80_);
v___x_86_ = lp_choreo_List_mapTR_loop___at___00Choreo_recert_spec__0(v_cfg_80_, v_phases_81_, v___x_85_);
if (v_isShared_84_ == 0)
{
lean_ctor_set(v___x_83_, 1, v___x_86_);
v___x_88_ = v___x_83_;
goto v_reusejp_87_;
}
else
{
lean_object* v_reuseFailAlloc_89_; 
v_reuseFailAlloc_89_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_89_, 0, v_cfg_80_);
lean_ctor_set(v_reuseFailAlloc_89_, 1, v___x_86_);
v___x_88_ = v_reuseFailAlloc_89_;
goto v_reusejp_87_;
}
v_reusejp_87_:
{
return v___x_88_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_setPath(lean_object* v_ph_93_, lean_object* v_i_94_, lean_object* v_p_95_){
_start:
{
lean_object* v_t0_96_; lean_object* v_t1_97_; lean_object* v_paths_98_; lean_object* v_bounds_99_; lean_object* v_certs_100_; lean_object* v_rigid_101_; lean_object* v_orbits_102_; lean_object* v_target_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_112_; 
v_t0_96_ = lean_ctor_get(v_ph_93_, 0);
v_t1_97_ = lean_ctor_get(v_ph_93_, 1);
v_paths_98_ = lean_ctor_get(v_ph_93_, 2);
v_bounds_99_ = lean_ctor_get(v_ph_93_, 3);
v_certs_100_ = lean_ctor_get(v_ph_93_, 4);
v_rigid_101_ = lean_ctor_get(v_ph_93_, 5);
v_orbits_102_ = lean_ctor_get(v_ph_93_, 6);
v_target_103_ = lean_ctor_get(v_ph_93_, 7);
v_isSharedCheck_112_ = !lean_is_exclusive(v_ph_93_);
if (v_isSharedCheck_112_ == 0)
{
v___x_105_ = v_ph_93_;
v_isShared_106_ = v_isSharedCheck_112_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_target_103_);
lean_inc(v_orbits_102_);
lean_inc(v_rigid_101_);
lean_inc(v_certs_100_);
lean_inc(v_bounds_99_);
lean_inc(v_paths_98_);
lean_inc(v_t1_97_);
lean_inc(v_t0_96_);
lean_dec(v_ph_93_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_112_;
goto v_resetjp_104_;
}
v_resetjp_104_:
{
lean_object* v___x_107_; lean_object* v___x_108_; lean_object* v___x_110_; 
v___x_107_ = ((lean_object*)(lp_choreo_Choreo_setPath___closed__0));
lean_inc(v_paths_98_);
v___x_108_ = l___private_Init_Data_List_Impl_0__List_setTR_go___redArg(v_paths_98_, v_p_95_, v_paths_98_, v_i_94_, v___x_107_);
lean_dec(v_paths_98_);
if (v_isShared_106_ == 0)
{
lean_ctor_set(v___x_105_, 2, v___x_108_);
v___x_110_ = v___x_105_;
goto v_reusejp_109_;
}
else
{
lean_object* v_reuseFailAlloc_111_; 
v_reuseFailAlloc_111_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_111_, 0, v_t0_96_);
lean_ctor_set(v_reuseFailAlloc_111_, 1, v_t1_97_);
lean_ctor_set(v_reuseFailAlloc_111_, 2, v___x_108_);
lean_ctor_set(v_reuseFailAlloc_111_, 3, v_bounds_99_);
lean_ctor_set(v_reuseFailAlloc_111_, 4, v_certs_100_);
lean_ctor_set(v_reuseFailAlloc_111_, 5, v_rigid_101_);
lean_ctor_set(v_reuseFailAlloc_111_, 6, v_orbits_102_);
lean_ctor_set(v_reuseFailAlloc_111_, 7, v_target_103_);
v___x_110_ = v_reuseFailAlloc_111_;
goto v_reusejp_109_;
}
v_reusejp_109_:
{
return v___x_110_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_startOf(lean_object* v_p_113_){
_start:
{
lean_object* v_X_114_; lean_object* v_Y_115_; lean_object* v_W_116_; lean_object* v___x_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; 
v_X_114_ = lean_ctor_get(v_p_113_, 0);
v_Y_115_ = lean_ctor_get(v_p_113_, 1);
v_W_116_ = lean_ctor_get(v_p_113_, 2);
v___x_117_ = lp_choreo_Choreo_Poly_first(v_X_114_);
v___x_118_ = lp_choreo_Choreo_Poly_first(v_W_116_);
v___x_119_ = lean_int_ediv(v___x_117_, v___x_118_);
lean_dec(v___x_117_);
v___x_120_ = lp_choreo_Choreo_Poly_first(v_Y_115_);
v___x_121_ = lean_int_ediv(v___x_120_, v___x_118_);
lean_dec(v___x_118_);
lean_dec(v___x_120_);
v___x_122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_122_, 0, v___x_119_);
lean_ctor_set(v___x_122_, 1, v___x_121_);
return v___x_122_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_startOf___boxed(lean_object* v_p_123_){
_start:
{
lean_object* v_res_124_; 
v_res_124_ = lp_choreo_Choreo_startOf(v_p_123_);
lean_dec_ref(v_p_123_);
return v_res_124_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_endOf(lean_object* v_p_125_){
_start:
{
lean_object* v_X_126_; lean_object* v_Y_127_; lean_object* v_W_128_; lean_object* v___x_129_; lean_object* v___x_130_; lean_object* v___x_131_; lean_object* v___x_132_; lean_object* v___x_133_; lean_object* v___x_134_; 
v_X_126_ = lean_ctor_get(v_p_125_, 0);
v_Y_127_ = lean_ctor_get(v_p_125_, 1);
v_W_128_ = lean_ctor_get(v_p_125_, 2);
v___x_129_ = lp_choreo_Choreo_Poly_last(v_X_126_);
v___x_130_ = lp_choreo_Choreo_Poly_last(v_W_128_);
v___x_131_ = lean_int_ediv(v___x_129_, v___x_130_);
lean_dec(v___x_129_);
v___x_132_ = lp_choreo_Choreo_Poly_last(v_Y_127_);
v___x_133_ = lean_int_ediv(v___x_132_, v___x_130_);
lean_dec(v___x_130_);
lean_dec(v___x_132_);
v___x_134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_134_, 0, v___x_131_);
lean_ctor_set(v___x_134_, 1, v___x_133_);
return v___x_134_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_endOf___boxed(lean_object* v_p_135_){
_start:
{
lean_object* v_res_136_; 
v_res_136_ = lp_choreo_Choreo_endOf(v_p_135_);
lean_dec_ref(v_p_135_);
return v_res_136_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__0(void){
_start:
{
lean_object* v___x_137_; lean_object* v___x_138_; 
v___x_137_ = lean_unsigned_to_nat(1u);
v___x_138_ = lean_nat_to_int(v___x_137_);
return v___x_138_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__1(void){
_start:
{
lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; 
v___x_139_ = lean_box(0);
v___x_140_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__0, &lp_choreo_Choreo_sprintPath___closed__0_once, _init_lp_choreo_Choreo_sprintPath___closed__0);
v___x_141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_141_, 0, v___x_140_);
lean_ctor_set(v___x_141_, 1, v___x_139_);
return v___x_141_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__2(void){
_start:
{
lean_object* v___x_142_; lean_object* v___x_143_; 
v___x_142_ = lean_unsigned_to_nat(2u);
v___x_143_ = lean_nat_to_int(v___x_142_);
return v___x_143_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__3(void){
_start:
{
lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; 
v___x_144_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__1, &lp_choreo_Choreo_sprintPath___closed__1_once, _init_lp_choreo_Choreo_sprintPath___closed__1);
v___x_145_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__2, &lp_choreo_Choreo_sprintPath___closed__2_once, _init_lp_choreo_Choreo_sprintPath___closed__2);
v___x_146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_145_);
lean_ctor_set(v___x_146_, 1, v___x_144_);
return v___x_146_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__4(void){
_start:
{
lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v_e_149_; 
v___x_147_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__3, &lp_choreo_Choreo_sprintPath___closed__3_once, _init_lp_choreo_Choreo_sprintPath___closed__3);
v___x_148_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__0, &lp_choreo_Choreo_sprintPath___closed__0_once, _init_lp_choreo_Choreo_sprintPath___closed__0);
v_e_149_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_e_149_, 0, v___x_148_);
lean_ctor_set(v_e_149_, 1, v___x_147_);
return v_e_149_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__5(void){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; 
v___x_150_ = lean_unsigned_to_nat(0u);
v___x_151_ = lean_nat_to_int(v___x_150_);
return v___x_151_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__6(void){
_start:
{
lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v___x_152_ = lean_box(0);
v___x_153_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__5, &lp_choreo_Choreo_sprintPath___closed__5_once, _init_lp_choreo_Choreo_sprintPath___closed__5);
v___x_154_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_154_, 0, v___x_153_);
lean_ctor_set(v___x_154_, 1, v___x_152_);
return v___x_154_;
}
}
static lean_object* _init_lp_choreo_Choreo_sprintPath___closed__7(void){
_start:
{
lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; 
v___x_155_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__6, &lp_choreo_Choreo_sprintPath___closed__6_once, _init_lp_choreo_Choreo_sprintPath___closed__6);
v___x_156_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__5, &lp_choreo_Choreo_sprintPath___closed__5_once, _init_lp_choreo_Choreo_sprintPath___closed__5);
v___x_157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_157_, 0, v___x_156_);
lean_ctor_set(v___x_157_, 1, v___x_155_);
return v___x_157_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sprintPath(lean_object* v_p_158_, lean_object* v_size_159_){
_start:
{
lean_object* v_X_160_; lean_object* v_Y_161_; lean_object* v_W_162_; lean_object* v___x_164_; uint8_t v_isShared_165_; uint8_t v_isSharedCheck_181_; 
v_X_160_ = lean_ctor_get(v_p_158_, 0);
v_Y_161_ = lean_ctor_get(v_p_158_, 1);
v_W_162_ = lean_ctor_get(v_p_158_, 2);
v_isSharedCheck_181_ = !lean_is_exclusive(v_p_158_);
if (v_isSharedCheck_181_ == 0)
{
v___x_164_ = v_p_158_;
v_isShared_165_ = v_isSharedCheck_181_;
goto v_resetjp_163_;
}
else
{
lean_inc(v_W_162_);
lean_inc(v_Y_161_);
lean_inc(v_X_160_);
lean_dec(v_p_158_);
v___x_164_ = lean_box(0);
v_isShared_165_ = v_isSharedCheck_181_;
goto v_resetjp_163_;
}
v_resetjp_163_:
{
lean_object* v_e_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___x_177_; lean_object* v___x_179_; 
v_e_166_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__4, &lp_choreo_Choreo_sprintPath___closed__4_once, _init_lp_choreo_Choreo_sprintPath___closed__4);
v___x_167_ = lp_choreo_Choreo_Poly_mul(v_X_160_, v_e_166_);
v___x_168_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__5, &lp_choreo_Choreo_sprintPath___closed__5_once, _init_lp_choreo_Choreo_sprintPath___closed__5);
v___x_169_ = lean_int_neg(v_size_159_);
v___x_170_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__7, &lp_choreo_Choreo_sprintPath___closed__7_once, _init_lp_choreo_Choreo_sprintPath___closed__7);
v___x_171_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_171_, 0, v___x_169_);
lean_ctor_set(v___x_171_, 1, v___x_170_);
v___x_172_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_172_, 0, v_size_159_);
lean_ctor_set(v___x_172_, 1, v___x_171_);
v___x_173_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_173_, 0, v___x_168_);
lean_ctor_set(v___x_173_, 1, v___x_172_);
v___x_174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_174_, 0, v___x_168_);
lean_ctor_set(v___x_174_, 1, v___x_173_);
v___x_175_ = lp_choreo_Choreo_Poly_add(v___x_167_, v___x_174_);
lean_dec(v___x_167_);
v___x_176_ = lp_choreo_Choreo_Poly_mul(v_Y_161_, v_e_166_);
v___x_177_ = lp_choreo_Choreo_Poly_mul(v_W_162_, v_e_166_);
if (v_isShared_165_ == 0)
{
lean_ctor_set(v___x_164_, 2, v___x_177_);
lean_ctor_set(v___x_164_, 1, v___x_176_);
lean_ctor_set(v___x_164_, 0, v___x_175_);
v___x_179_ = v___x_164_;
goto v_reusejp_178_;
}
else
{
lean_object* v_reuseFailAlloc_180_; 
v_reuseFailAlloc_180_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_180_, 0, v___x_175_);
lean_ctor_set(v_reuseFailAlloc_180_, 1, v___x_176_);
lean_ctor_set(v_reuseFailAlloc_180_, 2, v___x_177_);
v___x_179_ = v_reuseFailAlloc_180_;
goto v_reusejp_178_;
}
v_reusejp_178_:
{
return v___x_179_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_shiftPath(lean_object* v_p_182_, lean_object* v_dx_183_, lean_object* v_dy_184_){
_start:
{
lean_object* v_X_185_; lean_object* v_Y_186_; lean_object* v_W_187_; lean_object* v___x_189_; uint8_t v_isShared_190_; uint8_t v_isSharedCheck_198_; 
v_X_185_ = lean_ctor_get(v_p_182_, 0);
v_Y_186_ = lean_ctor_get(v_p_182_, 1);
v_W_187_ = lean_ctor_get(v_p_182_, 2);
v_isSharedCheck_198_ = !lean_is_exclusive(v_p_182_);
if (v_isSharedCheck_198_ == 0)
{
v___x_189_ = v_p_182_;
v_isShared_190_ = v_isSharedCheck_198_;
goto v_resetjp_188_;
}
else
{
lean_inc(v_W_187_);
lean_inc(v_Y_186_);
lean_inc(v_X_185_);
lean_dec(v_p_182_);
v___x_189_ = lean_box(0);
v_isShared_190_ = v_isSharedCheck_198_;
goto v_resetjp_188_;
}
v_resetjp_188_:
{
lean_object* v___x_191_; lean_object* v___x_192_; lean_object* v___x_193_; lean_object* v___x_194_; lean_object* v___x_196_; 
lean_inc_n(v_W_187_, 2);
v___x_191_ = lp_choreo_Choreo_Poly_scale(v_dx_183_, v_W_187_);
v___x_192_ = lp_choreo_Choreo_Poly_add(v_X_185_, v___x_191_);
lean_dec(v_X_185_);
v___x_193_ = lp_choreo_Choreo_Poly_scale(v_dy_184_, v_W_187_);
v___x_194_ = lp_choreo_Choreo_Poly_add(v_Y_186_, v___x_193_);
lean_dec(v_Y_186_);
if (v_isShared_190_ == 0)
{
lean_ctor_set(v___x_189_, 1, v___x_194_);
lean_ctor_set(v___x_189_, 0, v___x_192_);
v___x_196_ = v___x_189_;
goto v_reusejp_195_;
}
else
{
lean_object* v_reuseFailAlloc_197_; 
v_reuseFailAlloc_197_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_197_, 0, v___x_192_);
lean_ctor_set(v_reuseFailAlloc_197_, 1, v___x_194_);
lean_ctor_set(v_reuseFailAlloc_197_, 2, v_W_187_);
v___x_196_ = v_reuseFailAlloc_197_;
goto v_reusejp_195_;
}
v_reusejp_195_:
{
return v___x_196_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_shiftPath___boxed(lean_object* v_p_199_, lean_object* v_dx_200_, lean_object* v_dy_201_){
_start:
{
lean_object* v_res_202_; 
v_res_202_ = lp_choreo_Choreo_shiftPath(v_p_199_, v_dx_200_, v_dy_201_);
lean_dec(v_dy_201_);
lean_dec(v_dx_200_);
return v_res_202_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_reflectPath(lean_object* v_p_203_){
_start:
{
lean_object* v_X_204_; lean_object* v_Y_205_; lean_object* v_W_206_; lean_object* v___x_208_; uint8_t v_isShared_209_; uint8_t v_isSharedCheck_214_; 
v_X_204_ = lean_ctor_get(v_p_203_, 0);
v_Y_205_ = lean_ctor_get(v_p_203_, 1);
v_W_206_ = lean_ctor_get(v_p_203_, 2);
v_isSharedCheck_214_ = !lean_is_exclusive(v_p_203_);
if (v_isSharedCheck_214_ == 0)
{
v___x_208_ = v_p_203_;
v_isShared_209_ = v_isSharedCheck_214_;
goto v_resetjp_207_;
}
else
{
lean_inc(v_W_206_);
lean_inc(v_Y_205_);
lean_inc(v_X_204_);
lean_dec(v_p_203_);
v___x_208_ = lean_box(0);
v_isShared_209_ = v_isSharedCheck_214_;
goto v_resetjp_207_;
}
v_resetjp_207_:
{
lean_object* v___x_210_; lean_object* v___x_212_; 
v___x_210_ = lp_choreo_Choreo_Poly_neg(v_X_204_);
if (v_isShared_209_ == 0)
{
lean_ctor_set(v___x_208_, 0, v___x_210_);
v___x_212_ = v___x_208_;
goto v_reusejp_211_;
}
else
{
lean_object* v_reuseFailAlloc_213_; 
v_reuseFailAlloc_213_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_213_, 0, v___x_210_);
lean_ctor_set(v_reuseFailAlloc_213_, 1, v_Y_205_);
lean_ctor_set(v_reuseFailAlloc_213_, 2, v_W_206_);
v___x_212_ = v_reuseFailAlloc_213_;
goto v_reusejp_211_;
}
v_reusejp_211_:
{
return v___x_212_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rejectedPhase(lean_object* v_k_217_){
_start:
{
lean_object* v___x_218_; lean_object* v___x_219_; lean_object* v___x_220_; lean_object* v___x_221_; lean_object* v___x_222_; 
v___x_218_ = ((lean_object*)(lp_choreo_Choreo_rejectedPhase___closed__0));
v___x_219_ = l_Nat_reprFast(v_k_217_);
v___x_220_ = lean_string_append(v___x_218_, v___x_219_);
lean_dec_ref(v___x_219_);
v___x_221_ = ((lean_object*)(lp_choreo_Choreo_rejectedPhase___closed__1));
v___x_222_ = lean_string_append(v___x_220_, v___x_221_);
return v___x_222_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPhase___closed__0(void){
_start:
{
lean_object* v___x_223_; lean_object* v___x_224_; lean_object* v___x_225_; lean_object* v___x_226_; lean_object* v___x_227_; lean_object* v___x_228_; 
v___x_223_ = lean_box(0);
v___x_224_ = lp_choreo_Choreo_stageRect;
v___x_225_ = lean_box(0);
v___x_226_ = lean_unsigned_to_nat(1u);
v___x_227_ = lean_unsigned_to_nat(0u);
v___x_228_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_228_, 0, v___x_227_);
lean_ctor_set(v___x_228_, 1, v___x_226_);
lean_ctor_set(v___x_228_, 2, v___x_225_);
lean_ctor_set(v___x_228_, 3, v___x_224_);
lean_ctor_set(v___x_228_, 4, v___x_225_);
lean_ctor_set(v___x_228_, 5, v___x_225_);
lean_ctor_set(v___x_228_, 6, v___x_225_);
lean_ctor_set(v___x_228_, 7, v___x_223_);
return v___x_228_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedPhase(void){
_start:
{
lean_object* v___x_229_; 
v___x_229_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPhase___closed__0, &lp_choreo_Choreo_instInhabitedPhase___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPhase___closed__0);
return v___x_229_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__0(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; 
v___x_230_ = lean_unsigned_to_nat(5000u);
v___x_231_ = lean_nat_to_int(v___x_230_);
return v___x_231_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__1(void){
_start:
{
lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; 
v___x_232_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__5, &lp_choreo_Choreo_sprintPath___closed__5_once, _init_lp_choreo_Choreo_sprintPath___closed__5);
v___x_233_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__0);
v___x_234_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_234_, 0, v___x_233_);
lean_ctor_set(v___x_234_, 1, v___x_232_);
return v___x_234_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1(lean_object* v_a_235_, lean_object* v_a_236_){
_start:
{
if (lean_obj_tag(v_a_235_) == 0)
{
lean_object* v___x_237_; 
v___x_237_ = l_List_reverse___redArg(v_a_236_);
return v___x_237_;
}
else
{
lean_object* v_tail_238_; lean_object* v___x_240_; uint8_t v_isShared_241_; uint8_t v_isSharedCheck_247_; 
v_tail_238_ = lean_ctor_get(v_a_235_, 1);
v_isSharedCheck_247_ = !lean_is_exclusive(v_a_235_);
if (v_isSharedCheck_247_ == 0)
{
lean_object* v_unused_248_; 
v_unused_248_ = lean_ctor_get(v_a_235_, 0);
lean_dec(v_unused_248_);
v___x_240_ = v_a_235_;
v_isShared_241_ = v_isSharedCheck_247_;
goto v_resetjp_239_;
}
else
{
lean_inc(v_tail_238_);
lean_dec(v_a_235_);
v___x_240_ = lean_box(0);
v_isShared_241_ = v_isSharedCheck_247_;
goto v_resetjp_239_;
}
v_resetjp_239_:
{
lean_object* v___x_242_; lean_object* v___x_244_; 
v___x_242_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__1, &lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1___closed__1);
if (v_isShared_241_ == 0)
{
lean_ctor_set(v___x_240_, 1, v_a_236_);
lean_ctor_set(v___x_240_, 0, v___x_242_);
v___x_244_ = v___x_240_;
goto v_reusejp_243_;
}
else
{
lean_object* v_reuseFailAlloc_246_; 
v_reuseFailAlloc_246_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_246_, 0, v___x_242_);
lean_ctor_set(v_reuseFailAlloc_246_, 1, v_a_236_);
v___x_244_ = v_reuseFailAlloc_246_;
goto v_reusejp_243_;
}
v_reusejp_243_:
{
v_a_235_ = v_tail_238_;
v_a_236_ = v___x_244_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__0(lean_object* v_ph_249_){
_start:
{
lean_object* v_t0_250_; lean_object* v_t1_251_; lean_object* v_paths_252_; lean_object* v_bounds_253_; lean_object* v_certs_254_; lean_object* v_rigid_255_; lean_object* v_orbits_256_; lean_object* v_target_257_; lean_object* v___x_259_; uint8_t v_isShared_260_; uint8_t v_isSharedCheck_266_; 
v_t0_250_ = lean_ctor_get(v_ph_249_, 0);
v_t1_251_ = lean_ctor_get(v_ph_249_, 1);
v_paths_252_ = lean_ctor_get(v_ph_249_, 2);
v_bounds_253_ = lean_ctor_get(v_ph_249_, 3);
v_certs_254_ = lean_ctor_get(v_ph_249_, 4);
v_rigid_255_ = lean_ctor_get(v_ph_249_, 5);
v_orbits_256_ = lean_ctor_get(v_ph_249_, 6);
v_target_257_ = lean_ctor_get(v_ph_249_, 7);
v_isSharedCheck_266_ = !lean_is_exclusive(v_ph_249_);
if (v_isSharedCheck_266_ == 0)
{
v___x_259_ = v_ph_249_;
v_isShared_260_ = v_isSharedCheck_266_;
goto v_resetjp_258_;
}
else
{
lean_inc(v_target_257_);
lean_inc(v_orbits_256_);
lean_inc(v_rigid_255_);
lean_inc(v_certs_254_);
lean_inc(v_bounds_253_);
lean_inc(v_paths_252_);
lean_inc(v_t1_251_);
lean_inc(v_t0_250_);
lean_dec(v_ph_249_);
v___x_259_ = lean_box(0);
v_isShared_260_ = v_isSharedCheck_266_;
goto v_resetjp_258_;
}
v_resetjp_258_:
{
lean_object* v___x_261_; lean_object* v___x_262_; lean_object* v___x_264_; 
v___x_261_ = lean_box(0);
v___x_262_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__1(v_certs_254_, v___x_261_);
if (v_isShared_260_ == 0)
{
lean_ctor_set(v___x_259_, 4, v___x_262_);
v___x_264_ = v___x_259_;
goto v_reusejp_263_;
}
else
{
lean_object* v_reuseFailAlloc_265_; 
v_reuseFailAlloc_265_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_265_, 0, v_t0_250_);
lean_ctor_set(v_reuseFailAlloc_265_, 1, v_t1_251_);
lean_ctor_set(v_reuseFailAlloc_265_, 2, v_paths_252_);
lean_ctor_set(v_reuseFailAlloc_265_, 3, v_bounds_253_);
lean_ctor_set(v_reuseFailAlloc_265_, 4, v___x_262_);
lean_ctor_set(v_reuseFailAlloc_265_, 5, v_rigid_255_);
lean_ctor_set(v_reuseFailAlloc_265_, 6, v_orbits_256_);
lean_ctor_set(v_reuseFailAlloc_265_, 7, v_target_257_);
v___x_264_ = v_reuseFailAlloc_265_;
goto v_reusejp_263_;
}
v_reusejp_263_:
{
return v___x_264_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__1(lean_object* v_aPath_267_, lean_object* v___y_268_, lean_object* v_fst_269_, lean_object* v_fst_270_, lean_object* v_ph_271_){
_start:
{
lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_272_ = lp_choreo_Choreo_startOf(v_aPath_267_);
v___x_273_ = lp_choreo_Choreo_Phase_path(v___y_268_, v_fst_269_);
v___x_274_ = lp_choreo_Choreo_endOf(v___x_273_);
lean_dec_ref(v___x_273_);
v___x_275_ = lp_choreo_Choreo_easePath(v___x_272_, v___x_274_);
v___x_276_ = lp_choreo_Choreo_setPath(v_ph_271_, v_fst_270_, v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__1___boxed(lean_object* v_aPath_277_, lean_object* v___y_278_, lean_object* v_fst_279_, lean_object* v_fst_280_, lean_object* v_ph_281_){
_start:
{
lean_object* v_res_282_; 
v_res_282_ = lp_choreo_Choreo_allMutationsOf___lam__1(v_aPath_277_, v___y_278_, v_fst_279_, v_fst_280_, v_ph_281_);
lean_dec_ref(v___y_278_);
lean_dec_ref(v_aPath_277_);
return v_res_282_;
}
}
static lean_object* _init_lp_choreo_Choreo_allMutationsOf___lam__2___closed__0(void){
_start:
{
lean_object* v___x_283_; lean_object* v___x_284_; 
v___x_283_ = lean_unsigned_to_nat(240000u);
v___x_284_ = lean_nat_to_int(v___x_283_);
return v___x_284_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__2(lean_object* v_fst_285_, lean_object* v_ph_286_){
_start:
{
lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; lean_object* v___x_290_; 
lean_inc(v_fst_285_);
v___x_287_ = lp_choreo_Choreo_Phase_path(v_ph_286_, v_fst_285_);
v___x_288_ = lean_obj_once(&lp_choreo_Choreo_allMutationsOf___lam__2___closed__0, &lp_choreo_Choreo_allMutationsOf___lam__2___closed__0_once, _init_lp_choreo_Choreo_allMutationsOf___lam__2___closed__0);
v___x_289_ = lp_choreo_Choreo_sprintPath(v___x_287_, v___x_288_);
v___x_290_ = lp_choreo_Choreo_setPath(v_ph_286_, v_fst_285_, v___x_289_);
return v___x_290_;
}
}
static lean_object* _init_lp_choreo_Choreo_allMutationsOf___lam__3___closed__0(void){
_start:
{
lean_object* v___x_291_; lean_object* v___x_292_; 
v___x_291_ = lean_unsigned_to_nat(400u);
v___x_292_ = lean_nat_to_int(v___x_291_);
return v___x_292_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__3(lean_object* v_fst_293_, lean_object* v___x_294_, lean_object* v_ph_295_){
_start:
{
lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; 
lean_inc(v_fst_293_);
v___x_296_ = lp_choreo_Choreo_Phase_path(v_ph_295_, v_fst_293_);
v___x_297_ = lean_obj_once(&lp_choreo_Choreo_allMutationsOf___lam__3___closed__0, &lp_choreo_Choreo_allMutationsOf___lam__3___closed__0_once, _init_lp_choreo_Choreo_allMutationsOf___lam__3___closed__0);
v___x_298_ = lean_nat_to_int(v___x_294_);
v___x_299_ = lp_choreo_Choreo_shiftPath(v___x_296_, v___x_297_, v___x_298_);
lean_dec(v___x_298_);
v___x_300_ = lp_choreo_Choreo_setPath(v_ph_295_, v_fst_293_, v___x_299_);
return v___x_300_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__4(lean_object* v_out_301_, lean_object* v_m_302_, lean_object* v_l_303_){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_304_, 0, v_m_302_);
lean_ctor_set(v___x_304_, 1, v_out_301_);
v___x_305_ = l_List_appendTR___redArg(v_l_303_, v___x_304_);
return v___x_305_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__5(lean_object* v_aPath_306_, lean_object* v_offEnd_307_, lean_object* v_fst_308_, lean_object* v_ph_309_){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_310_ = lp_choreo_Choreo_startOf(v_aPath_306_);
v___x_311_ = lp_choreo_Choreo_easePath(v___x_310_, v_offEnd_307_);
v___x_312_ = lp_choreo_Choreo_setPath(v_ph_309_, v_fst_308_, v___x_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf___lam__5___boxed(lean_object* v_aPath_313_, lean_object* v_offEnd_314_, lean_object* v_fst_315_, lean_object* v_ph_316_){
_start:
{
lean_object* v_res_317_; 
v_res_317_ = lp_choreo_Choreo_allMutationsOf___lam__5(v_aPath_313_, v_offEnd_314_, v_fst_315_, v_ph_316_);
lean_dec_ref(v_aPath_313_);
return v_res_317_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__10(lean_object* v_x_318_){
_start:
{
if (lean_obj_tag(v_x_318_) == 0)
{
lean_object* v___x_319_; 
v___x_319_ = lean_box(0);
return v___x_319_;
}
else
{
lean_object* v_head_320_; 
v_head_320_ = lean_ctor_get(v_x_318_, 0);
if (lean_obj_tag(v_head_320_) == 0)
{
lean_object* v___x_321_; 
lean_inc_ref(v_head_320_);
v___x_321_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_321_, 0, v_head_320_);
return v___x_321_;
}
else
{
lean_object* v_tail_322_; 
v_tail_322_ = lean_ctor_get(v_x_318_, 1);
v_x_318_ = v_tail_322_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__10___boxed(lean_object* v_x_324_){
_start:
{
lean_object* v_res_325_; 
v_res_325_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__10(v_x_324_);
lean_dec(v_x_324_);
return v_res_325_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__0(lean_object* v_a_326_, lean_object* v_a_327_){
_start:
{
if (lean_obj_tag(v_a_326_) == 0)
{
lean_object* v___x_328_; 
v___x_328_ = l_List_reverse___redArg(v_a_327_);
return v___x_328_;
}
else
{
lean_object* v_head_329_; lean_object* v_tail_330_; lean_object* v___x_332_; uint8_t v_isShared_333_; uint8_t v_isSharedCheck_339_; 
v_head_329_ = lean_ctor_get(v_a_326_, 0);
v_tail_330_ = lean_ctor_get(v_a_326_, 1);
v_isSharedCheck_339_ = !lean_is_exclusive(v_a_326_);
if (v_isSharedCheck_339_ == 0)
{
v___x_332_ = v_a_326_;
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
else
{
lean_inc(v_tail_330_);
lean_inc(v_head_329_);
lean_dec(v_a_326_);
v___x_332_ = lean_box(0);
v_isShared_333_ = v_isSharedCheck_339_;
goto v_resetjp_331_;
}
v_resetjp_331_:
{
lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_334_ = lp_choreo_Choreo_reflectPath(v_head_329_);
if (v_isShared_333_ == 0)
{
lean_ctor_set(v___x_332_, 1, v_a_327_);
lean_ctor_set(v___x_332_, 0, v___x_334_);
v___x_336_ = v___x_332_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_a_327_);
v___x_336_ = v_reuseFailAlloc_338_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
v_a_326_ = v_tail_330_;
v_a_327_ = v___x_336_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__2(lean_object* v_a_340_, lean_object* v_a_341_){
_start:
{
if (lean_obj_tag(v_a_340_) == 0)
{
lean_object* v___x_342_; 
v___x_342_ = l_List_reverse___redArg(v_a_341_);
return v___x_342_;
}
else
{
lean_object* v_head_343_; lean_object* v_bounds_344_; lean_object* v_tail_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_383_; 
v_head_343_ = lean_ctor_get(v_a_340_, 0);
lean_inc(v_head_343_);
v_bounds_344_ = lean_ctor_get(v_head_343_, 3);
lean_inc_ref(v_bounds_344_);
v_tail_345_ = lean_ctor_get(v_a_340_, 1);
v_isSharedCheck_383_ = !lean_is_exclusive(v_a_340_);
if (v_isSharedCheck_383_ == 0)
{
lean_object* v_unused_384_; 
v_unused_384_ = lean_ctor_get(v_a_340_, 0);
lean_dec(v_unused_384_);
v___x_347_ = v_a_340_;
v_isShared_348_ = v_isSharedCheck_383_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_tail_345_);
lean_dec(v_a_340_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_383_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v_t0_349_; lean_object* v_t1_350_; lean_object* v_paths_351_; lean_object* v_certs_352_; lean_object* v_rigid_353_; lean_object* v_orbits_354_; lean_object* v_target_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_381_; 
v_t0_349_ = lean_ctor_get(v_head_343_, 0);
v_t1_350_ = lean_ctor_get(v_head_343_, 1);
v_paths_351_ = lean_ctor_get(v_head_343_, 2);
v_certs_352_ = lean_ctor_get(v_head_343_, 4);
v_rigid_353_ = lean_ctor_get(v_head_343_, 5);
v_orbits_354_ = lean_ctor_get(v_head_343_, 6);
v_target_355_ = lean_ctor_get(v_head_343_, 7);
v_isSharedCheck_381_ = !lean_is_exclusive(v_head_343_);
if (v_isSharedCheck_381_ == 0)
{
lean_object* v_unused_382_; 
v_unused_382_ = lean_ctor_get(v_head_343_, 3);
lean_dec(v_unused_382_);
v___x_357_ = v_head_343_;
v_isShared_358_ = v_isSharedCheck_381_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_target_355_);
lean_inc(v_orbits_354_);
lean_inc(v_rigid_353_);
lean_inc(v_certs_352_);
lean_inc(v_paths_351_);
lean_inc(v_t1_350_);
lean_inc(v_t0_349_);
lean_dec(v_head_343_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_381_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v_xmin_359_; lean_object* v_xmax_360_; lean_object* v_ymin_361_; lean_object* v_ymax_362_; lean_object* v___x_364_; uint8_t v_isShared_365_; uint8_t v_isSharedCheck_380_; 
v_xmin_359_ = lean_ctor_get(v_bounds_344_, 0);
v_xmax_360_ = lean_ctor_get(v_bounds_344_, 1);
v_ymin_361_ = lean_ctor_get(v_bounds_344_, 2);
v_ymax_362_ = lean_ctor_get(v_bounds_344_, 3);
v_isSharedCheck_380_ = !lean_is_exclusive(v_bounds_344_);
if (v_isSharedCheck_380_ == 0)
{
v___x_364_ = v_bounds_344_;
v_isShared_365_ = v_isSharedCheck_380_;
goto v_resetjp_363_;
}
else
{
lean_inc(v_ymax_362_);
lean_inc(v_ymin_361_);
lean_inc(v_xmax_360_);
lean_inc(v_xmin_359_);
lean_dec(v_bounds_344_);
v___x_364_ = lean_box(0);
v_isShared_365_ = v_isSharedCheck_380_;
goto v_resetjp_363_;
}
v_resetjp_363_:
{
lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_366_ = lean_box(0);
v___x_367_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__0(v_paths_351_, v___x_366_);
v___x_368_ = lean_int_neg(v_xmax_360_);
lean_dec(v_xmax_360_);
v___x_369_ = lean_int_neg(v_xmin_359_);
lean_dec(v_xmin_359_);
if (v_isShared_365_ == 0)
{
lean_ctor_set(v___x_364_, 1, v___x_369_);
lean_ctor_set(v___x_364_, 0, v___x_368_);
v___x_371_ = v___x_364_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_379_; 
v_reuseFailAlloc_379_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_379_, 0, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_379_, 1, v___x_369_);
lean_ctor_set(v_reuseFailAlloc_379_, 2, v_ymin_361_);
lean_ctor_set(v_reuseFailAlloc_379_, 3, v_ymax_362_);
v___x_371_ = v_reuseFailAlloc_379_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
lean_object* v___x_373_; 
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 3, v___x_371_);
lean_ctor_set(v___x_357_, 2, v___x_367_);
v___x_373_ = v___x_357_;
goto v_reusejp_372_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v_t0_349_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_t1_350_);
lean_ctor_set(v_reuseFailAlloc_378_, 2, v___x_367_);
lean_ctor_set(v_reuseFailAlloc_378_, 3, v___x_371_);
lean_ctor_set(v_reuseFailAlloc_378_, 4, v_certs_352_);
lean_ctor_set(v_reuseFailAlloc_378_, 5, v_rigid_353_);
lean_ctor_set(v_reuseFailAlloc_378_, 6, v_orbits_354_);
lean_ctor_set(v_reuseFailAlloc_378_, 7, v_target_355_);
v___x_373_ = v_reuseFailAlloc_378_;
goto v_reusejp_372_;
}
v_reusejp_372_:
{
lean_object* v___x_375_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set(v___x_347_, 1, v_a_341_);
lean_ctor_set(v___x_347_, 0, v___x_373_);
v___x_375_ = v___x_347_;
goto v_reusejp_374_;
}
else
{
lean_object* v_reuseFailAlloc_377_; 
v_reuseFailAlloc_377_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_377_, 0, v___x_373_);
lean_ctor_set(v_reuseFailAlloc_377_, 1, v_a_341_);
v___x_375_ = v_reuseFailAlloc_377_;
goto v_reusejp_374_;
}
v_reusejp_374_:
{
v_a_340_ = v_tail_345_;
v_a_341_ = v___x_375_;
goto _start;
}
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11(lean_object* v_labels_387_, lean_object* v_x_388_){
_start:
{
if (lean_obj_tag(v_x_388_) == 0)
{
lean_object* v___x_389_; 
v___x_389_ = lean_box(0);
return v___x_389_;
}
else
{
lean_object* v_head_390_; lean_object* v_tail_391_; lean_object* v_snd_393_; lean_object* v___x_398_; uint8_t v___x_399_; 
v_head_390_ = lean_ctor_get(v_x_388_, 0);
v_tail_391_ = lean_ctor_get(v_x_388_, 1);
v___x_398_ = lean_array_get_size(v_labels_387_);
v___x_399_ = lean_nat_dec_lt(v_head_390_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; 
v___x_400_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1));
v_snd_393_ = v___x_400_;
goto v___jp_392_;
}
else
{
lean_object* v___x_401_; lean_object* v_snd_402_; 
v___x_401_ = lean_array_fget_borrowed(v_labels_387_, v_head_390_);
v_snd_402_ = lean_ctor_get(v___x_401_, 1);
v_snd_393_ = v_snd_402_;
goto v___jp_392_;
}
v___jp_392_:
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__0));
v___x_395_ = lean_string_dec_eq(v_snd_393_, v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; 
lean_inc(v_head_390_);
v___x_396_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_396_, 0, v_head_390_);
return v___x_396_;
}
else
{
v_x_388_ = v_tail_391_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___boxed(lean_object* v_labels_403_, lean_object* v_x_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11(v_labels_403_, v_x_404_);
lean_dec(v_x_404_);
lean_dec_ref(v_labels_403_);
return v_res_405_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__5(lean_object* v_x_406_){
_start:
{
if (lean_obj_tag(v_x_406_) == 0)
{
lean_object* v___x_407_; 
v___x_407_ = lean_box(0);
return v___x_407_;
}
else
{
lean_object* v_head_408_; lean_object* v_snd_409_; lean_object* v___x_411_; uint8_t v_isShared_412_; uint8_t v_isSharedCheck_441_; 
v_head_408_ = lean_ctor_get(v_x_406_, 0);
lean_inc(v_head_408_);
v_snd_409_ = lean_ctor_get(v_head_408_, 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v_head_408_);
if (v_isSharedCheck_441_ == 0)
{
lean_object* v_unused_442_; 
v_unused_442_ = lean_ctor_get(v_head_408_, 0);
lean_dec(v_unused_442_);
v___x_411_ = v_head_408_;
v_isShared_412_ = v_isSharedCheck_441_;
goto v_resetjp_410_;
}
else
{
lean_inc(v_snd_409_);
lean_dec(v_head_408_);
v___x_411_ = lean_box(0);
v_isShared_412_ = v_isSharedCheck_441_;
goto v_resetjp_410_;
}
v_resetjp_410_:
{
lean_object* v_snd_413_; lean_object* v___x_415_; uint8_t v_isShared_416_; uint8_t v_isSharedCheck_439_; 
v_snd_413_ = lean_ctor_get(v_snd_409_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v_snd_409_);
if (v_isSharedCheck_439_ == 0)
{
lean_object* v_unused_440_; 
v_unused_440_ = lean_ctor_get(v_snd_409_, 0);
lean_dec(v_unused_440_);
v___x_415_ = v_snd_409_;
v_isShared_416_ = v_isSharedCheck_439_;
goto v_resetjp_414_;
}
else
{
lean_inc(v_snd_413_);
lean_dec(v_snd_409_);
v___x_415_ = lean_box(0);
v_isShared_416_ = v_isSharedCheck_439_;
goto v_resetjp_414_;
}
v_resetjp_414_:
{
if (lean_obj_tag(v_snd_413_) == 8)
{
lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_434_; 
v_isSharedCheck_434_ = !lean_is_exclusive(v_x_406_);
if (v_isSharedCheck_434_ == 0)
{
lean_object* v_unused_435_; lean_object* v_unused_436_; 
v_unused_435_ = lean_ctor_get(v_x_406_, 1);
lean_dec(v_unused_435_);
v_unused_436_ = lean_ctor_get(v_x_406_, 0);
lean_dec(v_unused_436_);
v___x_418_ = v_x_406_;
v_isShared_419_ = v_isSharedCheck_434_;
goto v_resetjp_417_;
}
else
{
lean_dec(v_x_406_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_434_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v_k_420_; lean_object* v_dancers_421_; lean_object* v_dx_422_; lean_object* v_dy_423_; lean_object* v___x_425_; 
v_k_420_ = lean_ctor_get(v_snd_413_, 0);
lean_inc(v_k_420_);
v_dancers_421_ = lean_ctor_get(v_snd_413_, 1);
lean_inc(v_dancers_421_);
v_dx_422_ = lean_ctor_get(v_snd_413_, 2);
lean_inc(v_dx_422_);
v_dy_423_ = lean_ctor_get(v_snd_413_, 3);
lean_inc(v_dy_423_);
lean_dec_ref_known(v_snd_413_, 4);
if (v_isShared_416_ == 0)
{
lean_ctor_set(v___x_415_, 1, v_dy_423_);
lean_ctor_set(v___x_415_, 0, v_dx_422_);
v___x_425_ = v___x_415_;
goto v_reusejp_424_;
}
else
{
lean_object* v_reuseFailAlloc_433_; 
v_reuseFailAlloc_433_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_433_, 0, v_dx_422_);
lean_ctor_set(v_reuseFailAlloc_433_, 1, v_dy_423_);
v___x_425_ = v_reuseFailAlloc_433_;
goto v_reusejp_424_;
}
v_reusejp_424_:
{
lean_object* v___x_427_; 
if (v_isShared_412_ == 0)
{
lean_ctor_set(v___x_411_, 1, v___x_425_);
lean_ctor_set(v___x_411_, 0, v_dancers_421_);
v___x_427_ = v___x_411_;
goto v_reusejp_426_;
}
else
{
lean_object* v_reuseFailAlloc_432_; 
v_reuseFailAlloc_432_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_432_, 0, v_dancers_421_);
lean_ctor_set(v_reuseFailAlloc_432_, 1, v___x_425_);
v___x_427_ = v_reuseFailAlloc_432_;
goto v_reusejp_426_;
}
v_reusejp_426_:
{
lean_object* v___x_429_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set_tag(v___x_418_, 0);
lean_ctor_set(v___x_418_, 1, v___x_427_);
lean_ctor_set(v___x_418_, 0, v_k_420_);
v___x_429_ = v___x_418_;
goto v_reusejp_428_;
}
else
{
lean_object* v_reuseFailAlloc_431_; 
v_reuseFailAlloc_431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_431_, 0, v_k_420_);
lean_ctor_set(v_reuseFailAlloc_431_, 1, v___x_427_);
v___x_429_ = v_reuseFailAlloc_431_;
goto v_reusejp_428_;
}
v_reusejp_428_:
{
lean_object* v___x_430_; 
v___x_430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
return v___x_430_;
}
}
}
}
}
else
{
lean_object* v_tail_437_; 
lean_del_object(v___x_415_);
lean_dec(v_snd_413_);
lean_del_object(v___x_411_);
v_tail_437_ = lean_ctor_get(v_x_406_, 1);
lean_inc(v_tail_437_);
lean_dec_ref_known(v_x_406_, 2);
v_x_406_ = v_tail_437_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___closed__0(void){
_start:
{
lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_443_ = lean_unsigned_to_nat(150u);
v___x_444_ = lean_nat_to_int(v___x_443_);
return v___x_444_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6(lean_object* v___y_445_, lean_object* v_i_446_, lean_object* v_a_447_, lean_object* v_a_448_){
_start:
{
if (lean_obj_tag(v_a_447_) == 0)
{
lean_object* v___x_449_; 
lean_dec(v_i_446_);
v___x_449_ = l_List_reverse___redArg(v_a_448_);
return v___x_449_;
}
else
{
lean_object* v_head_450_; lean_object* v_tail_451_; lean_object* v___x_453_; uint8_t v_isShared_454_; uint8_t v_isSharedCheck_485_; 
v_head_450_ = lean_ctor_get(v_a_447_, 0);
v_tail_451_ = lean_ctor_get(v_a_447_, 1);
v_isSharedCheck_485_ = !lean_is_exclusive(v_a_447_);
if (v_isSharedCheck_485_ == 0)
{
v___x_453_ = v_a_447_;
v_isShared_454_ = v_isSharedCheck_485_;
goto v_resetjp_452_;
}
else
{
lean_inc(v_tail_451_);
lean_inc(v_head_450_);
lean_dec(v_a_447_);
v___x_453_ = lean_box(0);
v_isShared_454_ = v_isSharedCheck_485_;
goto v_resetjp_452_;
}
v_resetjp_452_:
{
lean_object* v___y_456_; lean_object* v_fst_461_; lean_object* v_snd_462_; uint8_t v___x_463_; 
v_fst_461_ = lean_ctor_get(v_head_450_, 0);
lean_inc(v_fst_461_);
v_snd_462_ = lean_ctor_get(v_head_450_, 1);
lean_inc(v_snd_462_);
lean_dec(v_head_450_);
v___x_463_ = lean_nat_dec_lt(v_snd_462_, v___y_445_);
if (v___x_463_ == 0)
{
lean_object* v___x_464_; uint8_t v___x_465_; 
v___x_464_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___closed__0);
v___x_465_ = lean_nat_dec_eq(v_snd_462_, v___y_445_);
lean_dec(v_snd_462_);
if (v___x_465_ == 0)
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
lean_inc_n(v_i_446_, 2);
v___x_466_ = lp_choreo_Choreo_Phase_path(v_fst_461_, v_i_446_);
v___x_467_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__5, &lp_choreo_Choreo_sprintPath___closed__5_once, _init_lp_choreo_Choreo_sprintPath___closed__5);
v___x_468_ = lp_choreo_Choreo_shiftPath(v___x_466_, v___x_464_, v___x_467_);
v___x_469_ = lp_choreo_Choreo_setPath(v_fst_461_, v_i_446_, v___x_468_);
v___y_456_ = v___x_469_;
goto v___jp_455_;
}
else
{
lean_object* v___x_470_; lean_object* v___x_471_; lean_object* v_x_472_; lean_object* v_y_473_; lean_object* v___x_475_; uint8_t v_isShared_476_; uint8_t v_isSharedCheck_484_; 
lean_inc(v_i_446_);
v___x_470_ = lp_choreo_Choreo_Phase_path(v_fst_461_, v_i_446_);
v___x_471_ = lp_choreo_Choreo_endOf(v___x_470_);
v_x_472_ = lean_ctor_get(v___x_471_, 0);
v_y_473_ = lean_ctor_get(v___x_471_, 1);
v_isSharedCheck_484_ = !lean_is_exclusive(v___x_471_);
if (v_isSharedCheck_484_ == 0)
{
v___x_475_ = v___x_471_;
v_isShared_476_ = v_isSharedCheck_484_;
goto v_resetjp_474_;
}
else
{
lean_inc(v_y_473_);
lean_inc(v_x_472_);
lean_dec(v___x_471_);
v___x_475_ = lean_box(0);
v_isShared_476_ = v_isSharedCheck_484_;
goto v_resetjp_474_;
}
v_resetjp_474_:
{
lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_480_; 
v___x_477_ = lp_choreo_Choreo_startOf(v___x_470_);
lean_dec_ref(v___x_470_);
v___x_478_ = lean_int_add(v_x_472_, v___x_464_);
lean_dec(v_x_472_);
if (v_isShared_476_ == 0)
{
lean_ctor_set(v___x_475_, 0, v___x_478_);
v___x_480_ = v___x_475_;
goto v_reusejp_479_;
}
else
{
lean_object* v_reuseFailAlloc_483_; 
v_reuseFailAlloc_483_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_483_, 0, v___x_478_);
lean_ctor_set(v_reuseFailAlloc_483_, 1, v_y_473_);
v___x_480_ = v_reuseFailAlloc_483_;
goto v_reusejp_479_;
}
v_reusejp_479_:
{
lean_object* v___x_481_; lean_object* v___x_482_; 
v___x_481_ = lp_choreo_Choreo_easePath(v___x_477_, v___x_480_);
lean_inc(v_i_446_);
v___x_482_ = lp_choreo_Choreo_setPath(v_fst_461_, v_i_446_, v___x_481_);
v___y_456_ = v___x_482_;
goto v___jp_455_;
}
}
}
}
else
{
lean_dec(v_snd_462_);
v___y_456_ = v_fst_461_;
goto v___jp_455_;
}
v___jp_455_:
{
lean_object* v___x_458_; 
if (v_isShared_454_ == 0)
{
lean_ctor_set(v___x_453_, 1, v_a_448_);
lean_ctor_set(v___x_453_, 0, v___y_456_);
v___x_458_ = v___x_453_;
goto v_reusejp_457_;
}
else
{
lean_object* v_reuseFailAlloc_460_; 
v_reuseFailAlloc_460_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_460_, 0, v___y_456_);
lean_ctor_set(v_reuseFailAlloc_460_, 1, v_a_448_);
v___x_458_ = v_reuseFailAlloc_460_;
goto v_reusejp_457_;
}
v_reusejp_457_:
{
v_a_447_ = v_tail_451_;
v_a_448_ = v___x_458_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6___boxed(lean_object* v___y_486_, lean_object* v_i_487_, lean_object* v_a_488_, lean_object* v_a_489_){
_start:
{
lean_object* v_res_490_; 
v_res_490_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6(v___y_486_, v_i_487_, v_a_488_, v_a_489_);
lean_dec(v___y_486_);
return v_res_490_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__3(lean_object* v_x_491_){
_start:
{
if (lean_obj_tag(v_x_491_) == 0)
{
lean_object* v___x_492_; 
v___x_492_ = lean_box(0);
return v___x_492_;
}
else
{
lean_object* v_head_493_; lean_object* v_snd_494_; lean_object* v_snd_495_; 
v_head_493_ = lean_ctor_get(v_x_491_, 0);
v_snd_494_ = lean_ctor_get(v_head_493_, 1);
v_snd_495_ = lean_ctor_get(v_snd_494_, 1);
if (lean_obj_tag(v_snd_495_) == 9)
{
lean_object* v___x_496_; 
lean_inc_ref(v_snd_495_);
v___x_496_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_496_, 0, v_snd_495_);
return v___x_496_;
}
else
{
lean_object* v_tail_497_; 
v_tail_497_ = lean_ctor_get(v_x_491_, 1);
v_x_491_ = v_tail_497_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__3___boxed(lean_object* v_x_499_){
_start:
{
lean_object* v_res_500_; 
v_res_500_ = lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__3(v_x_499_);
lean_dec(v_x_499_);
return v_res_500_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__9(lean_object* v_x_501_){
_start:
{
if (lean_obj_tag(v_x_501_) == 0)
{
lean_object* v___x_502_; 
v___x_502_ = lean_box(0);
return v___x_502_;
}
else
{
lean_object* v_head_503_; 
v_head_503_ = lean_ctor_get(v_x_501_, 0);
if (lean_obj_tag(v_head_503_) == 1)
{
lean_object* v___x_504_; 
lean_inc_ref(v_head_503_);
v___x_504_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_504_, 0, v_head_503_);
return v___x_504_;
}
else
{
lean_object* v_tail_505_; 
v_tail_505_ = lean_ctor_get(v_x_501_, 1);
v_x_501_ = v_tail_505_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__9___boxed(lean_object* v_x_507_){
_start:
{
lean_object* v_res_508_; 
v_res_508_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__9(v_x_507_);
lean_dec(v_x_507_);
return v_res_508_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0(void){
_start:
{
lean_object* v___x_509_; lean_object* v___x_510_; 
v___x_509_ = lean_unsigned_to_nat(100u);
v___x_510_ = lean_nat_to_int(v___x_509_);
return v___x_510_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4(lean_object* v___y_511_, lean_object* v___y_512_, lean_object* v_a_513_, lean_object* v_a_514_){
_start:
{
if (lean_obj_tag(v_a_513_) == 0)
{
lean_object* v___x_515_; 
lean_dec(v___y_512_);
v___x_515_ = l_List_reverse___redArg(v_a_514_);
return v___x_515_;
}
else
{
lean_object* v_head_516_; lean_object* v_tail_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_535_; 
v_head_516_ = lean_ctor_get(v_a_513_, 0);
v_tail_517_ = lean_ctor_get(v_a_513_, 1);
v_isSharedCheck_535_ = !lean_is_exclusive(v_a_513_);
if (v_isSharedCheck_535_ == 0)
{
v___x_519_ = v_a_513_;
v_isShared_520_ = v_isSharedCheck_535_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_tail_517_);
lean_inc(v_head_516_);
lean_dec(v_a_513_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_535_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___y_522_; lean_object* v_fst_527_; lean_object* v_snd_528_; uint8_t v___x_529_; 
v_fst_527_ = lean_ctor_get(v_head_516_, 0);
lean_inc(v_fst_527_);
v_snd_528_ = lean_ctor_get(v_head_516_, 1);
lean_inc(v_snd_528_);
lean_dec(v_head_516_);
v___x_529_ = lean_nat_dec_eq(v_snd_528_, v___y_511_);
lean_dec(v_snd_528_);
if (v___x_529_ == 0)
{
v___y_522_ = v_fst_527_;
goto v___jp_521_;
}
else
{
lean_object* v___x_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
lean_inc_n(v___y_512_, 2);
v___x_530_ = lp_choreo_Choreo_Phase_path(v_fst_527_, v___y_512_);
v___x_531_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0);
v___x_532_ = lean_obj_once(&lp_choreo_Choreo_sprintPath___closed__5, &lp_choreo_Choreo_sprintPath___closed__5_once, _init_lp_choreo_Choreo_sprintPath___closed__5);
v___x_533_ = lp_choreo_Choreo_shiftPath(v___x_530_, v___x_531_, v___x_532_);
v___x_534_ = lp_choreo_Choreo_setPath(v_fst_527_, v___y_512_, v___x_533_);
v___y_522_ = v___x_534_;
goto v___jp_521_;
}
v___jp_521_:
{
lean_object* v___x_524_; 
if (v_isShared_520_ == 0)
{
lean_ctor_set(v___x_519_, 1, v_a_514_);
lean_ctor_set(v___x_519_, 0, v___y_522_);
v___x_524_ = v___x_519_;
goto v_reusejp_523_;
}
else
{
lean_object* v_reuseFailAlloc_526_; 
v_reuseFailAlloc_526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_526_, 0, v___y_522_);
lean_ctor_set(v_reuseFailAlloc_526_, 1, v_a_514_);
v___x_524_ = v_reuseFailAlloc_526_;
goto v_reusejp_523_;
}
v_reusejp_523_:
{
v_a_513_ = v_tail_517_;
v_a_514_ = v___x_524_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___boxed(lean_object* v___y_536_, lean_object* v___y_537_, lean_object* v_a_538_, lean_object* v_a_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4(v___y_536_, v___y_537_, v_a_538_, v_a_539_);
lean_dec(v___y_536_);
return v_res_540_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__8(lean_object* v___y_541_, lean_object* v_a_542_, lean_object* v_a_543_){
_start:
{
if (lean_obj_tag(v_a_542_) == 0)
{
lean_object* v___x_544_; 
v___x_544_ = l_List_reverse___redArg(v_a_543_);
return v___x_544_;
}
else
{
lean_object* v_head_545_; lean_object* v_tail_546_; lean_object* v___x_548_; uint8_t v_isShared_549_; uint8_t v_isSharedCheck_594_; 
v_head_545_ = lean_ctor_get(v_a_542_, 0);
v_tail_546_ = lean_ctor_get(v_a_542_, 1);
v_isSharedCheck_594_ = !lean_is_exclusive(v_a_542_);
if (v_isSharedCheck_594_ == 0)
{
v___x_548_ = v_a_542_;
v_isShared_549_ = v_isSharedCheck_594_;
goto v_resetjp_547_;
}
else
{
lean_inc(v_tail_546_);
lean_inc(v_head_545_);
lean_dec(v_a_542_);
v___x_548_ = lean_box(0);
v_isShared_549_ = v_isSharedCheck_594_;
goto v_resetjp_547_;
}
v_resetjp_547_:
{
lean_object* v___y_551_; lean_object* v_fst_556_; lean_object* v_snd_557_; lean_object* v___x_558_; lean_object* v___x_559_; uint8_t v___x_560_; 
v_fst_556_ = lean_ctor_get(v_head_545_, 0);
lean_inc(v_fst_556_);
v_snd_557_ = lean_ctor_get(v_head_545_, 1);
lean_inc(v_snd_557_);
lean_dec(v_head_545_);
v___x_558_ = lean_unsigned_to_nat(1u);
v___x_559_ = lean_nat_add(v_snd_557_, v___x_558_);
v___x_560_ = lean_nat_dec_eq(v___x_559_, v___y_541_);
lean_dec(v___x_559_);
if (v___x_560_ == 0)
{
uint8_t v___x_561_; 
v___x_561_ = lean_nat_dec_eq(v_snd_557_, v___y_541_);
lean_dec(v_snd_557_);
if (v___x_561_ == 0)
{
v___y_551_ = v_fst_556_;
goto v___jp_550_;
}
else
{
lean_object* v_t0_562_; lean_object* v_t1_563_; lean_object* v_paths_564_; lean_object* v_bounds_565_; lean_object* v_certs_566_; lean_object* v_rigid_567_; lean_object* v_orbits_568_; lean_object* v_target_569_; lean_object* v___x_571_; uint8_t v_isShared_572_; uint8_t v_isSharedCheck_577_; 
v_t0_562_ = lean_ctor_get(v_fst_556_, 0);
v_t1_563_ = lean_ctor_get(v_fst_556_, 1);
v_paths_564_ = lean_ctor_get(v_fst_556_, 2);
v_bounds_565_ = lean_ctor_get(v_fst_556_, 3);
v_certs_566_ = lean_ctor_get(v_fst_556_, 4);
v_rigid_567_ = lean_ctor_get(v_fst_556_, 5);
v_orbits_568_ = lean_ctor_get(v_fst_556_, 6);
v_target_569_ = lean_ctor_get(v_fst_556_, 7);
v_isSharedCheck_577_ = !lean_is_exclusive(v_fst_556_);
if (v_isSharedCheck_577_ == 0)
{
v___x_571_ = v_fst_556_;
v_isShared_572_ = v_isSharedCheck_577_;
goto v_resetjp_570_;
}
else
{
lean_inc(v_target_569_);
lean_inc(v_orbits_568_);
lean_inc(v_rigid_567_);
lean_inc(v_certs_566_);
lean_inc(v_bounds_565_);
lean_inc(v_paths_564_);
lean_inc(v_t1_563_);
lean_inc(v_t0_562_);
lean_dec(v_fst_556_);
v___x_571_ = lean_box(0);
v_isShared_572_ = v_isSharedCheck_577_;
goto v_resetjp_570_;
}
v_resetjp_570_:
{
lean_object* v___x_573_; lean_object* v___x_575_; 
v___x_573_ = lean_nat_sub(v_t0_562_, v___x_558_);
lean_dec(v_t0_562_);
if (v_isShared_572_ == 0)
{
lean_ctor_set(v___x_571_, 0, v___x_573_);
v___x_575_ = v___x_571_;
goto v_reusejp_574_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_573_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_t1_563_);
lean_ctor_set(v_reuseFailAlloc_576_, 2, v_paths_564_);
lean_ctor_set(v_reuseFailAlloc_576_, 3, v_bounds_565_);
lean_ctor_set(v_reuseFailAlloc_576_, 4, v_certs_566_);
lean_ctor_set(v_reuseFailAlloc_576_, 5, v_rigid_567_);
lean_ctor_set(v_reuseFailAlloc_576_, 6, v_orbits_568_);
lean_ctor_set(v_reuseFailAlloc_576_, 7, v_target_569_);
v___x_575_ = v_reuseFailAlloc_576_;
goto v_reusejp_574_;
}
v_reusejp_574_:
{
v___y_551_ = v___x_575_;
goto v___jp_550_;
}
}
}
}
else
{
lean_object* v_t0_578_; lean_object* v_t1_579_; lean_object* v_paths_580_; lean_object* v_bounds_581_; lean_object* v_certs_582_; lean_object* v_rigid_583_; lean_object* v_orbits_584_; lean_object* v_target_585_; lean_object* v___x_587_; uint8_t v_isShared_588_; uint8_t v_isSharedCheck_593_; 
lean_dec(v_snd_557_);
v_t0_578_ = lean_ctor_get(v_fst_556_, 0);
v_t1_579_ = lean_ctor_get(v_fst_556_, 1);
v_paths_580_ = lean_ctor_get(v_fst_556_, 2);
v_bounds_581_ = lean_ctor_get(v_fst_556_, 3);
v_certs_582_ = lean_ctor_get(v_fst_556_, 4);
v_rigid_583_ = lean_ctor_get(v_fst_556_, 5);
v_orbits_584_ = lean_ctor_get(v_fst_556_, 6);
v_target_585_ = lean_ctor_get(v_fst_556_, 7);
v_isSharedCheck_593_ = !lean_is_exclusive(v_fst_556_);
if (v_isSharedCheck_593_ == 0)
{
v___x_587_ = v_fst_556_;
v_isShared_588_ = v_isSharedCheck_593_;
goto v_resetjp_586_;
}
else
{
lean_inc(v_target_585_);
lean_inc(v_orbits_584_);
lean_inc(v_rigid_583_);
lean_inc(v_certs_582_);
lean_inc(v_bounds_581_);
lean_inc(v_paths_580_);
lean_inc(v_t1_579_);
lean_inc(v_t0_578_);
lean_dec(v_fst_556_);
v___x_587_ = lean_box(0);
v_isShared_588_ = v_isSharedCheck_593_;
goto v_resetjp_586_;
}
v_resetjp_586_:
{
lean_object* v___x_589_; lean_object* v___x_591_; 
v___x_589_ = lean_nat_sub(v_t1_579_, v___x_558_);
lean_dec(v_t1_579_);
if (v_isShared_588_ == 0)
{
lean_ctor_set(v___x_587_, 1, v___x_589_);
v___x_591_ = v___x_587_;
goto v_reusejp_590_;
}
else
{
lean_object* v_reuseFailAlloc_592_; 
v_reuseFailAlloc_592_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v_reuseFailAlloc_592_, 0, v_t0_578_);
lean_ctor_set(v_reuseFailAlloc_592_, 1, v___x_589_);
lean_ctor_set(v_reuseFailAlloc_592_, 2, v_paths_580_);
lean_ctor_set(v_reuseFailAlloc_592_, 3, v_bounds_581_);
lean_ctor_set(v_reuseFailAlloc_592_, 4, v_certs_582_);
lean_ctor_set(v_reuseFailAlloc_592_, 5, v_rigid_583_);
lean_ctor_set(v_reuseFailAlloc_592_, 6, v_orbits_584_);
lean_ctor_set(v_reuseFailAlloc_592_, 7, v_target_585_);
v___x_591_ = v_reuseFailAlloc_592_;
goto v_reusejp_590_;
}
v_reusejp_590_:
{
v___y_551_ = v___x_591_;
goto v___jp_550_;
}
}
}
v___jp_550_:
{
lean_object* v___x_553_; 
if (v_isShared_549_ == 0)
{
lean_ctor_set(v___x_548_, 1, v_a_543_);
lean_ctor_set(v___x_548_, 0, v___y_551_);
v___x_553_ = v___x_548_;
goto v_reusejp_552_;
}
else
{
lean_object* v_reuseFailAlloc_555_; 
v_reuseFailAlloc_555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_555_, 0, v___y_551_);
lean_ctor_set(v_reuseFailAlloc_555_, 1, v_a_543_);
v___x_553_ = v_reuseFailAlloc_555_;
goto v_reusejp_552_;
}
v_reusejp_552_:
{
v_a_542_ = v_tail_546_;
v_a_543_ = v___x_553_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__8___boxed(lean_object* v___y_595_, lean_object* v_a_596_, lean_object* v_a_597_){
_start:
{
lean_object* v_res_598_; 
v_res_598_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__8(v___y_595_, v_a_596_, v_a_597_);
lean_dec(v___y_595_);
return v_res_598_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__7(lean_object* v_bentRoutine_599_, lean_object* v_fst_600_, lean_object* v_c_601_, lean_object* v_fst_602_, lean_object* v_snd_603_, lean_object* v_x_604_){
_start:
{
if (lean_obj_tag(v_x_604_) == 0)
{
lean_object* v___x_605_; 
lean_dec(v_fst_600_);
v___x_605_ = lean_box(0);
return v___x_605_;
}
else
{
lean_object* v_head_606_; lean_object* v_tail_607_; lean_object* v_fst_608_; lean_object* v_snd_609_; lean_object* v_phases_610_; lean_object* v___x_611_; 
v_head_606_ = lean_ctor_get(v_x_604_, 0);
lean_inc(v_head_606_);
v_tail_607_ = lean_ctor_get(v_x_604_, 1);
lean_inc(v_tail_607_);
lean_dec_ref_known(v_x_604_, 2);
v_fst_608_ = lean_ctor_get(v_head_606_, 0);
v_snd_609_ = lean_ctor_get(v_head_606_, 1);
v_phases_610_ = lean_ctor_get(v_bentRoutine_599_, 1);
lean_inc(v_fst_600_);
v___x_611_ = l_List_get_x3fInternal___redArg(v_phases_610_, v_fst_600_);
if (lean_obj_tag(v___x_611_) == 0)
{
lean_dec(v_head_606_);
v_x_604_ = v_tail_607_;
goto _start;
}
else
{
lean_object* v_val_613_; lean_object* v___x_615_; uint8_t v_isShared_616_; uint8_t v_isSharedCheck_622_; 
v_val_613_ = lean_ctor_get(v___x_611_, 0);
v_isSharedCheck_622_ = !lean_is_exclusive(v___x_611_);
if (v_isSharedCheck_622_ == 0)
{
v___x_615_ = v___x_611_;
v_isShared_616_ = v_isSharedCheck_622_;
goto v_resetjp_614_;
}
else
{
lean_inc(v_val_613_);
lean_dec(v___x_611_);
v___x_615_ = lean_box(0);
v_isShared_616_ = v_isSharedCheck_622_;
goto v_resetjp_614_;
}
v_resetjp_614_:
{
uint8_t v___x_617_; 
lean_inc(v_snd_609_);
lean_inc(v_fst_608_);
v___x_617_ = lp_choreo_Choreo_lineBrokenAt(v_c_601_, v_val_613_, v_fst_608_, v_snd_609_, v_fst_602_, v_snd_603_);
lean_dec(v_val_613_);
if (v___x_617_ == 0)
{
lean_del_object(v___x_615_);
lean_dec(v_head_606_);
v_x_604_ = v_tail_607_;
goto _start;
}
else
{
lean_object* v___x_620_; 
lean_dec(v_tail_607_);
lean_dec(v_fst_600_);
if (v_isShared_616_ == 0)
{
lean_ctor_set(v___x_615_, 0, v_head_606_);
v___x_620_ = v___x_615_;
goto v_reusejp_619_;
}
else
{
lean_object* v_reuseFailAlloc_621_; 
v_reuseFailAlloc_621_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_621_, 0, v_head_606_);
v___x_620_ = v_reuseFailAlloc_621_;
goto v_reusejp_619_;
}
v_reusejp_619_:
{
return v___x_620_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__7___boxed(lean_object* v_bentRoutine_623_, lean_object* v_fst_624_, lean_object* v_c_625_, lean_object* v_fst_626_, lean_object* v_snd_627_, lean_object* v_x_628_){
_start:
{
lean_object* v_res_629_; 
v_res_629_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__7(v_bentRoutine_623_, v_fst_624_, v_c_625_, v_fst_626_, v_snd_627_, v_x_628_);
lean_dec(v_snd_627_);
lean_dec(v_fst_626_);
lean_dec_ref(v_c_625_);
lean_dec_ref(v_bentRoutine_623_);
return v_res_629_;
}
}
static lean_object* _init_lp_choreo_Choreo_allMutationsOf___closed__5(void){
_start:
{
lean_object* v___x_635_; lean_object* v___x_636_; 
v___x_635_ = lean_unsigned_to_nat(1000u);
v___x_636_ = lean_nat_to_int(v___x_635_);
return v___x_636_;
}
}
static lean_object* _init_lp_choreo_Choreo_allMutationsOf___closed__54(void){
_start:
{
lean_object* v___x_685_; lean_object* v___x_686_; 
v___x_685_ = lean_unsigned_to_nat(1500u);
v___x_686_ = lean_nat_to_int(v___x_685_);
return v___x_686_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_allMutationsOf(lean_object* v_b_703_){
_start:
{
lean_object* v_routine_704_; lean_object* v_cfg_705_; lean_object* v_labels_706_; lean_object* v_asks_707_; lean_object* v_phases_708_; lean_object* v_n_709_; lean_object* v_dmin_710_; lean_object* v_vmax_711_; lean_object* v_stage_712_; lean_object* v_ticksPerBeat_713_; lean_object* v_bpmNum_714_; lean_object* v_bpmDen_715_; lean_object* v_total_716_; lean_object* v_seconds_717_; lean_object* v___y_719_; lean_object* v___y_720_; lean_object* v___y_721_; lean_object* v___y_722_; lean_object* v___y_723_; lean_object* v_out_724_; lean_object* v___y_768_; lean_object* v___y_769_; lean_object* v___y_770_; lean_object* v___y_771_; lean_object* v___y_772_; lean_object* v___y_773_; lean_object* v___y_774_; lean_object* v___y_775_; lean_object* v___y_776_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_795_; lean_object* v___y_796_; lean_object* v___y_797_; lean_object* v___y_798_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v___y_803_; lean_object* v___y_804_; lean_object* v___y_805_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_812_; lean_object* v___y_813_; lean_object* v___y_814_; lean_object* v___y_815_; lean_object* v___y_816_; lean_object* v_out_817_; lean_object* v___y_826_; lean_object* v___y_827_; lean_object* v___y_828_; lean_object* v___y_829_; lean_object* v___y_830_; lean_object* v___y_831_; lean_object* v___y_832_; lean_object* v___y_833_; lean_object* v___y_834_; lean_object* v_out_835_; lean_object* v___f_904_; lean_object* v___y_906_; lean_object* v___y_907_; lean_object* v___y_908_; lean_object* v___y_909_; lean_object* v___y_910_; lean_object* v___y_911_; lean_object* v___y_912_; lean_object* v___y_913_; lean_object* v___y_914_; lean_object* v___y_915_; lean_object* v_out_916_; lean_object* v_phases_961_; lean_object* v_labels_962_; lean_object* v___x_963_; lean_object* v___y_965_; lean_object* v___y_966_; lean_object* v___y_967_; lean_object* v___y_968_; lean_object* v___y_969_; lean_object* v___y_970_; lean_object* v___y_971_; lean_object* v___y_972_; lean_object* v___y_973_; lean_object* v___y_974_; lean_object* v___y_975_; lean_object* v_out_976_; lean_object* v___y_989_; lean_object* v___y_990_; lean_object* v___y_991_; lean_object* v___y_992_; lean_object* v___y_993_; lean_object* v___y_994_; lean_object* v___y_995_; lean_object* v___y_996_; lean_object* v___y_997_; lean_object* v___y_998_; lean_object* v___y_999_; lean_object* v_out_1000_; lean_object* v___y_1048_; lean_object* v___y_1049_; lean_object* v___y_1050_; lean_object* v___y_1051_; lean_object* v___y_1052_; lean_object* v___y_1104_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v_routine_704_ = lean_ctor_get(v_b_703_, 1);
lean_inc_ref(v_routine_704_);
v_cfg_705_ = lean_ctor_get(v_routine_704_, 0);
lean_inc_ref(v_cfg_705_);
v_labels_706_ = lean_ctor_get(v_b_703_, 2);
lean_inc(v_labels_706_);
v_asks_707_ = lean_ctor_get(v_b_703_, 3);
lean_inc(v_asks_707_);
lean_dec_ref(v_b_703_);
v_phases_708_ = lean_ctor_get(v_routine_704_, 1);
lean_inc_n(v_phases_708_, 2);
v_n_709_ = lean_ctor_get(v_cfg_705_, 0);
lean_inc(v_n_709_);
v_dmin_710_ = lean_ctor_get(v_cfg_705_, 1);
lean_inc(v_dmin_710_);
v_vmax_711_ = lean_ctor_get(v_cfg_705_, 2);
lean_inc(v_vmax_711_);
v_stage_712_ = lean_ctor_get(v_cfg_705_, 3);
lean_inc_ref(v_stage_712_);
v_ticksPerBeat_713_ = lean_ctor_get(v_cfg_705_, 4);
lean_inc(v_ticksPerBeat_713_);
v_bpmNum_714_ = lean_ctor_get(v_cfg_705_, 5);
lean_inc(v_bpmNum_714_);
v_bpmDen_715_ = lean_ctor_get(v_cfg_705_, 6);
lean_inc(v_bpmDen_715_);
v_total_716_ = lean_ctor_get(v_cfg_705_, 7);
lean_inc(v_total_716_);
v_seconds_717_ = lean_ctor_get(v_cfg_705_, 8);
lean_inc(v_seconds_717_);
v___f_904_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__33));
v_phases_961_ = lean_array_mk(v_phases_708_);
v_labels_962_ = lean_array_mk(v_labels_706_);
v___x_963_ = lean_array_get_size(v_phases_961_);
v___x_1110_ = l_List_range(v___x_963_);
v___x_1111_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11(v_labels_962_, v___x_1110_);
lean_dec(v___x_1110_);
lean_dec_ref(v_labels_962_);
if (lean_obj_tag(v___x_1111_) == 0)
{
lean_object* v___x_1112_; 
v___x_1112_ = lean_unsigned_to_nat(0u);
v___y_1104_ = v___x_1112_;
goto v___jp_1103_;
}
else
{
lean_object* v_val_1113_; 
v_val_1113_ = lean_ctor_get(v___x_1111_, 0);
lean_inc(v_val_1113_);
lean_dec_ref_known(v___x_1111_, 1);
v___y_1104_ = v_val_1113_;
goto v___jp_1103_;
}
v___jp_718_:
{
lean_object* v_safety_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v_loose_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; lean_object* v_out_737_; lean_object* v___x_738_; lean_object* v___x_739_; lean_object* v___x_740_; lean_object* v_faster_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v_out_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___x_749_; lean_object* v_slow_750_; lean_object* v___x_751_; lean_object* v___x_752_; lean_object* v___x_753_; lean_object* v_out_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; lean_object* v___x_761_; lean_object* v_mirrored_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v_out_766_; 
v_safety_725_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__0));
v___x_726_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4___closed__0);
v___x_727_ = lean_int_sub(v_dmin_710_, v___x_726_);
lean_inc_n(v_seconds_717_, 2);
lean_inc_n(v_total_716_, 3);
lean_inc_n(v_bpmDen_715_, 2);
lean_inc_n(v_bpmNum_714_, 3);
lean_inc_n(v_ticksPerBeat_713_, 3);
lean_inc_ref_n(v_stage_712_, 2);
lean_inc_n(v_vmax_711_, 2);
lean_inc_n(v_n_709_, 3);
v___x_728_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_728_, 0, v_n_709_);
lean_ctor_set(v___x_728_, 1, v___x_727_);
lean_ctor_set(v___x_728_, 2, v_vmax_711_);
lean_ctor_set(v___x_728_, 3, v_stage_712_);
lean_ctor_set(v___x_728_, 4, v_ticksPerBeat_713_);
lean_ctor_set(v___x_728_, 5, v_bpmNum_714_);
lean_ctor_set(v___x_728_, 6, v_bpmDen_715_);
lean_ctor_set(v___x_728_, 7, v_total_716_);
lean_ctor_set(v___x_728_, 8, v_seconds_717_);
lean_inc_n(v_phases_708_, 3);
v___x_729_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_729_, 0, v___x_728_);
lean_ctor_set(v___x_729_, 1, v_phases_708_);
v_loose_730_ = lp_choreo_Choreo_recert(v___x_729_);
v___x_731_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__1));
v___x_732_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__2));
v___x_733_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__3));
v___x_734_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__4));
v___x_735_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1));
v___x_736_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_736_, 0, v___x_731_);
lean_ctor_set(v___x_736_, 1, v___x_732_);
lean_ctor_set(v___x_736_, 2, v___x_733_);
lean_ctor_set(v___x_736_, 3, v___x_734_);
lean_ctor_set(v___x_736_, 4, v___x_735_);
lean_ctor_set(v___x_736_, 5, v_loose_730_);
lean_ctor_set(v___x_736_, 6, v_safety_725_);
lean_inc_ref_n(v___y_721_, 4);
v_out_737_ = lean_apply_2(v___y_721_, v___x_736_, v_out_724_);
v___x_738_ = lean_obj_once(&lp_choreo_Choreo_allMutationsOf___closed__5, &lp_choreo_Choreo_allMutationsOf___closed__5_once, _init_lp_choreo_Choreo_allMutationsOf___closed__5);
v___x_739_ = lean_int_add(v_vmax_711_, v___x_738_);
lean_inc_n(v_dmin_710_, 2);
v___x_740_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_740_, 0, v_n_709_);
lean_ctor_set(v___x_740_, 1, v_dmin_710_);
lean_ctor_set(v___x_740_, 2, v___x_739_);
lean_ctor_set(v___x_740_, 3, v_stage_712_);
lean_ctor_set(v___x_740_, 4, v_ticksPerBeat_713_);
lean_ctor_set(v___x_740_, 5, v_bpmNum_714_);
lean_ctor_set(v___x_740_, 6, v_bpmDen_715_);
lean_ctor_set(v___x_740_, 7, v_total_716_);
lean_ctor_set(v___x_740_, 8, v_seconds_717_);
v_faster_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_faster_741_, 0, v___x_740_);
lean_ctor_set(v_faster_741_, 1, v_phases_708_);
v___x_742_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__6));
v___x_743_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__7));
v___x_744_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_744_, 0, v___x_742_);
lean_ctor_set(v___x_744_, 1, v___x_743_);
lean_ctor_set(v___x_744_, 2, v___x_733_);
lean_ctor_set(v___x_744_, 3, v___x_734_);
lean_ctor_set(v___x_744_, 4, v___x_735_);
lean_ctor_set(v___x_744_, 5, v_faster_741_);
lean_ctor_set(v___x_744_, 6, v_safety_725_);
v_out_745_ = lean_apply_2(v___y_721_, v___x_744_, v_out_737_);
v___x_746_ = lean_unsigned_to_nat(2u);
v___x_747_ = lean_nat_mul(v_bpmDen_715_, v___x_746_);
v___x_748_ = lean_nat_mul(v_seconds_717_, v___x_746_);
v___x_749_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_749_, 0, v_n_709_);
lean_ctor_set(v___x_749_, 1, v_dmin_710_);
lean_ctor_set(v___x_749_, 2, v_vmax_711_);
lean_ctor_set(v___x_749_, 3, v_stage_712_);
lean_ctor_set(v___x_749_, 4, v_ticksPerBeat_713_);
lean_ctor_set(v___x_749_, 5, v_bpmNum_714_);
lean_ctor_set(v___x_749_, 6, v___x_747_);
lean_ctor_set(v___x_749_, 7, v_total_716_);
lean_ctor_set(v___x_749_, 8, v___x_748_);
v_slow_750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_slow_750_, 0, v___x_749_);
lean_ctor_set(v_slow_750_, 1, v_phases_708_);
v___x_751_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__8));
v___x_752_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__9));
v___x_753_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_753_, 0, v___x_751_);
lean_ctor_set(v___x_753_, 1, v___x_752_);
lean_ctor_set(v___x_753_, 2, v___x_733_);
lean_ctor_set(v___x_753_, 3, v___x_734_);
lean_ctor_set(v___x_753_, 4, v___x_735_);
lean_ctor_set(v___x_753_, 5, v_slow_750_);
lean_ctor_set(v___x_753_, 6, v_safety_725_);
v_out_754_ = lean_apply_2(v___y_721_, v___x_753_, v_out_745_);
v___x_755_ = lean_int_neg(v___y_723_);
lean_dec(v___y_723_);
v___x_756_ = lean_int_neg(v___y_720_);
lean_dec(v___y_720_);
v___x_757_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_757_, 0, v___x_755_);
lean_ctor_set(v___x_757_, 1, v___x_756_);
lean_ctor_set(v___x_757_, 2, v___y_722_);
lean_ctor_set(v___x_757_, 3, v___y_719_);
v___x_758_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_758_, 0, v_n_709_);
lean_ctor_set(v___x_758_, 1, v_dmin_710_);
lean_ctor_set(v___x_758_, 2, v_vmax_711_);
lean_ctor_set(v___x_758_, 3, v___x_757_);
lean_ctor_set(v___x_758_, 4, v_ticksPerBeat_713_);
lean_ctor_set(v___x_758_, 5, v_bpmNum_714_);
lean_ctor_set(v___x_758_, 6, v_bpmDen_715_);
lean_ctor_set(v___x_758_, 7, v_total_716_);
lean_ctor_set(v___x_758_, 8, v_seconds_717_);
v___x_759_ = lean_box(0);
v___x_760_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__2(v_phases_708_, v___x_759_);
v___x_761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_761_, 0, v___x_758_);
lean_ctor_set(v___x_761_, 1, v___x_760_);
v_mirrored_762_ = lp_choreo_Choreo_recert(v___x_761_);
v___x_763_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__10));
v___x_764_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__11));
v___x_765_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_765_, 0, v___x_763_);
lean_ctor_set(v___x_765_, 1, v___x_764_);
lean_ctor_set(v___x_765_, 2, v___x_733_);
lean_ctor_set(v___x_765_, 3, v___x_734_);
lean_ctor_set(v___x_765_, 4, v___x_735_);
lean_ctor_set(v___x_765_, 5, v_mirrored_762_);
lean_ctor_set(v___x_765_, 6, v_safety_725_);
v_out_766_ = lean_apply_2(v___y_721_, v___x_765_, v_out_754_);
return v_out_766_;
}
v___jp_767_:
{
lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v_off_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v_out_793_; 
lean_inc(v_phases_708_);
v___x_779_ = l_List_zipIdxTR___redArg(v_phases_708_, v___y_772_);
lean_dec(v___y_772_);
v___x_780_ = lean_box(0);
v___x_781_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__4(v___y_768_, v___y_778_, v___x_779_, v___x_780_);
lean_dec(v___y_768_);
v_off_782_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_off_782_, 0, v_cfg_705_);
lean_ctor_set(v_off_782_, 1, v___x_781_);
v___x_783_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__12));
v___x_784_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__13));
v___x_785_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__14));
v___x_786_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__15));
v___x_787_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__16));
v___x_788_ = lp_choreo_Choreo_askL(v___y_771_);
v___x_789_ = lean_string_append(v___x_787_, v___x_788_);
lean_dec_ref(v___x_788_);
v___x_790_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__17));
v___x_791_ = lean_string_append(v___x_789_, v___x_790_);
lean_inc_ref(v___y_776_);
v___x_792_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_792_, 0, v___x_783_);
lean_ctor_set(v___x_792_, 1, v___x_784_);
lean_ctor_set(v___x_792_, 2, v___x_785_);
lean_ctor_set(v___x_792_, 3, v___y_776_);
lean_ctor_set(v___x_792_, 4, v___x_786_);
lean_ctor_set(v___x_792_, 5, v_off_782_);
lean_ctor_set(v___x_792_, 6, v___x_791_);
lean_inc_ref(v___y_773_);
v_out_793_ = lean_apply_2(v___y_773_, v___x_792_, v___y_777_);
v___y_719_ = v___y_769_;
v___y_720_ = v___y_770_;
v___y_721_ = v___y_773_;
v___y_722_ = v___y_774_;
v___y_723_ = v___y_775_;
v_out_724_ = v_out_793_;
goto v___jp_718_;
}
v___jp_794_:
{
lean_object* v___x_806_; 
v___x_806_ = l_List_head_x3f___redArg(v___y_805_);
lean_dec(v___y_805_);
if (lean_obj_tag(v___x_806_) == 0)
{
lean_inc(v___y_799_);
v___y_768_ = v___y_795_;
v___y_769_ = v___y_796_;
v___y_770_ = v___y_797_;
v___y_771_ = v___y_798_;
v___y_772_ = v___y_799_;
v___y_773_ = v___y_800_;
v___y_774_ = v___y_801_;
v___y_775_ = v___y_802_;
v___y_776_ = v___y_803_;
v___y_777_ = v___y_804_;
v___y_778_ = v___y_799_;
goto v___jp_767_;
}
else
{
lean_object* v_val_807_; lean_object* v_fst_808_; 
v_val_807_ = lean_ctor_get(v___x_806_, 0);
lean_inc(v_val_807_);
lean_dec_ref_known(v___x_806_, 1);
v_fst_808_ = lean_ctor_get(v_val_807_, 0);
lean_inc(v_fst_808_);
lean_dec(v_val_807_);
v___y_768_ = v___y_795_;
v___y_769_ = v___y_796_;
v___y_770_ = v___y_797_;
v___y_771_ = v___y_798_;
v___y_772_ = v___y_799_;
v___y_773_ = v___y_800_;
v___y_774_ = v___y_801_;
v___y_775_ = v___y_802_;
v___y_776_ = v___y_803_;
v___y_777_ = v___y_804_;
v___y_778_ = v_fst_808_;
goto v___jp_767_;
}
}
v___jp_809_:
{
lean_object* v___x_818_; lean_object* v_findMirror_819_; 
v___x_818_ = l_List_reverse___redArg(v_asks_707_);
v_findMirror_819_ = lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__3(v___x_818_);
lean_dec(v___x_818_);
if (lean_obj_tag(v_findMirror_819_) == 0)
{
lean_dec(v___y_812_);
lean_dec_ref(v_cfg_705_);
v___y_719_ = v___y_810_;
v___y_720_ = v___y_811_;
v___y_721_ = v___y_813_;
v___y_722_ = v___y_814_;
v___y_723_ = v___y_815_;
v_out_724_ = v_out_817_;
goto v___jp_718_;
}
else
{
lean_object* v_val_820_; 
v_val_820_ = lean_ctor_get(v_findMirror_819_, 0);
lean_inc(v_val_820_);
lean_dec_ref_known(v_findMirror_819_, 1);
if (lean_obj_tag(v_val_820_) == 9)
{
lean_object* v_k_821_; lean_object* v_pairs_822_; 
v_k_821_ = lean_ctor_get(v_val_820_, 0);
lean_inc(v_k_821_);
v_pairs_822_ = lean_ctor_get(v_val_820_, 1);
lean_inc(v_pairs_822_);
v___y_795_ = v_k_821_;
v___y_796_ = v___y_810_;
v___y_797_ = v___y_811_;
v___y_798_ = v_val_820_;
v___y_799_ = v___y_812_;
v___y_800_ = v___y_813_;
v___y_801_ = v___y_814_;
v___y_802_ = v___y_815_;
v___y_803_ = v___y_816_;
v___y_804_ = v_out_817_;
v___y_805_ = v_pairs_822_;
goto v___jp_794_;
}
else
{
if (lean_obj_tag(v_val_820_) == 9)
{
lean_object* v_pairs_823_; 
v_pairs_823_ = lean_ctor_get(v_val_820_, 1);
lean_inc(v_pairs_823_);
lean_inc(v___y_812_);
v___y_795_ = v___y_812_;
v___y_796_ = v___y_810_;
v___y_797_ = v___y_811_;
v___y_798_ = v_val_820_;
v___y_799_ = v___y_812_;
v___y_800_ = v___y_813_;
v___y_801_ = v___y_814_;
v___y_802_ = v___y_815_;
v___y_803_ = v___y_816_;
v___y_804_ = v_out_817_;
v___y_805_ = v_pairs_823_;
goto v___jp_794_;
}
else
{
lean_object* v___x_824_; 
v___x_824_ = lean_box(0);
lean_inc(v___y_812_);
v___y_795_ = v___y_812_;
v___y_796_ = v___y_810_;
v___y_797_ = v___y_811_;
v___y_798_ = v_val_820_;
v___y_799_ = v___y_812_;
v___y_800_ = v___y_813_;
v___y_801_ = v___y_814_;
v___y_802_ = v___y_815_;
v___y_803_ = v___y_816_;
v___y_804_ = v_out_817_;
v___y_805_ = v___x_824_;
goto v___jp_794_;
}
}
}
}
v___jp_825_:
{
lean_object* v___x_836_; lean_object* v___x_837_; lean_object* v_long_838_; lean_object* v___x_839_; lean_object* v___x_840_; lean_object* v___x_841_; lean_object* v___x_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v_out_846_; lean_object* v_findLine_847_; 
v___x_836_ = lean_nat_add(v_seconds_717_, v___y_833_);
lean_inc(v_total_716_);
lean_inc(v_bpmDen_715_);
lean_inc(v_bpmNum_714_);
lean_inc(v_ticksPerBeat_713_);
lean_inc_ref(v_stage_712_);
lean_inc(v_vmax_711_);
lean_inc(v_dmin_710_);
lean_inc(v_n_709_);
v___x_837_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_837_, 0, v_n_709_);
lean_ctor_set(v___x_837_, 1, v_dmin_710_);
lean_ctor_set(v___x_837_, 2, v_vmax_711_);
lean_ctor_set(v___x_837_, 3, v_stage_712_);
lean_ctor_set(v___x_837_, 4, v_ticksPerBeat_713_);
lean_ctor_set(v___x_837_, 5, v_bpmNum_714_);
lean_ctor_set(v___x_837_, 6, v_bpmDen_715_);
lean_ctor_set(v___x_837_, 7, v_total_716_);
lean_ctor_set(v___x_837_, 8, v___x_836_);
lean_inc(v_phases_708_);
v_long_838_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_long_838_, 0, v___x_837_);
lean_ctor_set(v_long_838_, 1, v_phases_708_);
v___x_839_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__18));
v___x_840_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__19));
v___x_841_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__20));
v___x_842_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__21));
v___x_843_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__22));
v___x_844_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__23));
v___x_845_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_845_, 0, v___x_839_);
lean_ctor_set(v___x_845_, 1, v___x_840_);
lean_ctor_set(v___x_845_, 2, v___x_841_);
lean_ctor_set(v___x_845_, 3, v___x_842_);
lean_ctor_set(v___x_845_, 4, v___x_843_);
lean_ctor_set(v___x_845_, 5, v_long_838_);
lean_ctor_set(v___x_845_, 6, v___x_844_);
lean_inc_ref(v___y_829_);
v_out_846_ = lean_apply_2(v___y_829_, v___x_845_, v_out_835_);
lean_inc(v_asks_707_);
v_findLine_847_ = lp_choreo_List_findSome_x3f___at___00Choreo_allMutationsOf_spec__5(v_asks_707_);
if (lean_obj_tag(v_findLine_847_) == 0)
{
lean_dec(v___y_834_);
lean_dec(v___y_833_);
v___y_810_ = v___y_826_;
v___y_811_ = v___y_827_;
v___y_812_ = v___y_828_;
v___y_813_ = v___y_829_;
v___y_814_ = v___y_830_;
v___y_815_ = v___y_831_;
v___y_816_ = v___y_832_;
v_out_817_ = v_out_846_;
goto v___jp_809_;
}
else
{
lean_object* v_val_848_; lean_object* v_snd_849_; lean_object* v_snd_850_; lean_object* v_fst_851_; lean_object* v_fst_852_; lean_object* v_fst_853_; lean_object* v_snd_854_; lean_object* v___x_856_; uint8_t v_isShared_857_; uint8_t v_isSharedCheck_903_; 
v_val_848_ = lean_ctor_get(v_findLine_847_, 0);
lean_inc(v_val_848_);
lean_dec_ref_known(v_findLine_847_, 1);
v_snd_849_ = lean_ctor_get(v_val_848_, 1);
lean_inc(v_snd_849_);
v_snd_850_ = lean_ctor_get(v_snd_849_, 1);
lean_inc(v_snd_850_);
v_fst_851_ = lean_ctor_get(v_val_848_, 0);
lean_inc(v_fst_851_);
lean_dec(v_val_848_);
v_fst_852_ = lean_ctor_get(v_snd_849_, 0);
lean_inc(v_fst_852_);
lean_dec(v_snd_849_);
v_fst_853_ = lean_ctor_get(v_snd_850_, 0);
v_snd_854_ = lean_ctor_get(v_snd_850_, 1);
v_isSharedCheck_903_ = !lean_is_exclusive(v_snd_850_);
if (v_isSharedCheck_903_ == 0)
{
v___x_856_ = v_snd_850_;
v_isShared_857_ = v_isSharedCheck_903_;
goto v_resetjp_855_;
}
else
{
lean_inc(v_snd_854_);
lean_inc(v_fst_853_);
lean_dec(v_snd_850_);
v___x_856_ = lean_box(0);
v_isShared_857_ = v_isSharedCheck_903_;
goto v_resetjp_855_;
}
v_resetjp_855_:
{
lean_object* v_i_858_; lean_object* v___x_859_; lean_object* v___x_860_; lean_object* v___x_861_; lean_object* v___x_863_; 
v_i_858_ = l_List_getD___redArg(v_fst_852_, v___y_833_, v___y_828_);
lean_inc(v_phases_708_);
v___x_859_ = l_List_zipIdxTR___redArg(v_phases_708_, v___y_828_);
v___x_860_ = lean_box(0);
v___x_861_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__6(v___y_834_, v_i_858_, v___x_859_, v___x_860_);
lean_dec(v___y_834_);
lean_inc_ref(v_cfg_705_);
if (v_isShared_857_ == 0)
{
lean_ctor_set(v___x_856_, 1, v___x_861_);
lean_ctor_set(v___x_856_, 0, v_cfg_705_);
v___x_863_ = v___x_856_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_902_; 
v_reuseFailAlloc_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_902_, 0, v_cfg_705_);
lean_ctor_set(v_reuseFailAlloc_902_, 1, v___x_861_);
v___x_863_ = v_reuseFailAlloc_902_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
lean_object* v_bentRoutine_864_; lean_object* v___x_865_; lean_object* v___x_866_; 
v_bentRoutine_864_ = lp_choreo_Choreo_recert(v___x_863_);
lean_inc(v_fst_852_);
v___x_865_ = lp_choreo_Choreo_nextPairs(v_fst_852_);
lean_inc(v_fst_851_);
v___x_866_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__7(v_bentRoutine_864_, v_fst_851_, v_cfg_705_, v_fst_853_, v_snd_854_, v___x_865_);
if (lean_obj_tag(v___x_866_) == 0)
{
lean_dec_ref(v_bentRoutine_864_);
lean_dec(v_snd_854_);
lean_dec(v_fst_853_);
lean_dec(v_fst_852_);
lean_dec(v_fst_851_);
v___y_810_ = v___y_826_;
v___y_811_ = v___y_827_;
v___y_812_ = v___y_828_;
v___y_813_ = v___y_829_;
v___y_814_ = v___y_830_;
v___y_815_ = v___y_831_;
v___y_816_ = v___y_832_;
v_out_817_ = v_out_846_;
goto v___jp_809_;
}
else
{
lean_object* v_val_867_; lean_object* v_fst_868_; lean_object* v_snd_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v___x_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v_out_901_; 
v_val_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_val_867_);
lean_dec_ref_known(v___x_866_, 1);
v_fst_868_ = lean_ctor_get(v_val_867_, 0);
lean_inc(v_fst_868_);
v_snd_869_ = lean_ctor_get(v_val_867_, 1);
lean_inc(v_snd_869_);
lean_dec(v_val_867_);
v___x_870_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__24));
v___x_871_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__25));
v___x_872_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__14));
v___x_873_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__26));
v___x_874_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__27));
v___x_875_ = l_Nat_reprFast(v_fst_851_);
v___x_876_ = lean_string_append(v___x_874_, v___x_875_);
v___x_877_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__28));
v___x_878_ = lean_string_append(v___x_876_, v___x_877_);
v___x_879_ = lp_choreo_Choreo_natsL(v_fst_852_);
v___x_880_ = lean_string_append(v___x_878_, v___x_879_);
lean_dec_ref(v___x_879_);
v___x_881_ = lean_string_append(v___x_880_, v___x_877_);
v___x_882_ = lp_choreo_Choreo_intL(v_fst_853_);
lean_dec(v_fst_853_);
v___x_883_ = lean_string_append(v___x_881_, v___x_882_);
lean_dec_ref(v___x_882_);
v___x_884_ = lean_string_append(v___x_883_, v___x_877_);
v___x_885_ = lp_choreo_Choreo_intL(v_snd_854_);
lean_dec(v_snd_854_);
v___x_886_ = lean_string_append(v___x_884_, v___x_885_);
lean_dec_ref(v___x_885_);
v___x_887_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__29));
v___x_888_ = lean_string_append(v___x_886_, v___x_887_);
v___x_889_ = lean_string_append(v___x_888_, v___x_875_);
lean_dec_ref(v___x_875_);
v___x_890_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__30));
v___x_891_ = lean_string_append(v___x_889_, v___x_890_);
v___x_892_ = l_Nat_reprFast(v_fst_868_);
v___x_893_ = lean_string_append(v___x_891_, v___x_892_);
lean_dec_ref(v___x_892_);
v___x_894_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__31));
v___x_895_ = lean_string_append(v___x_893_, v___x_894_);
v___x_896_ = l_Nat_reprFast(v_snd_869_);
v___x_897_ = lean_string_append(v___x_895_, v___x_896_);
lean_dec_ref(v___x_896_);
v___x_898_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__32));
v___x_899_ = lean_string_append(v___x_897_, v___x_898_);
v___x_900_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_900_, 0, v___x_870_);
lean_ctor_set(v___x_900_, 1, v___x_871_);
lean_ctor_set(v___x_900_, 2, v___x_872_);
lean_ctor_set(v___x_900_, 3, v___x_842_);
lean_ctor_set(v___x_900_, 4, v___x_873_);
lean_ctor_set(v___x_900_, 5, v_bentRoutine_864_);
lean_ctor_set(v___x_900_, 6, v___x_899_);
lean_inc_ref(v___y_829_);
v_out_901_ = lean_apply_2(v___y_829_, v___x_900_, v_out_846_);
v___y_810_ = v___y_826_;
v___y_811_ = v___y_827_;
v___y_812_ = v___y_828_;
v___y_813_ = v___y_829_;
v___y_814_ = v___y_830_;
v___y_815_ = v___y_831_;
v___y_816_ = v___y_832_;
v_out_817_ = v_out_901_;
goto v___jp_809_;
}
}
}
}
}
v___jp_905_:
{
lean_object* v___x_917_; lean_object* v_sprint_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; lean_object* v___x_923_; lean_object* v___x_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_928_; lean_object* v___x_929_; lean_object* v___x_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v_out_940_; lean_object* v_forged_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v_out_947_; uint8_t v___x_948_; 
lean_inc_ref(v_routine_704_);
v___x_917_ = lp_choreo_Choreo_Routine_setPhase(v_routine_704_, v___y_915_, v___y_914_);
v_sprint_918_ = lp_choreo_Choreo_recert(v___x_917_);
v___x_919_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__34));
v___x_920_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__35));
v___x_921_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__36));
v___x_922_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__37));
v___x_923_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__38));
v___x_924_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__39));
lean_inc_n(v___y_915_, 2);
v___x_925_ = l_Nat_reprFast(v___y_915_);
v___x_926_ = lean_string_append(v___x_924_, v___x_925_);
v___x_927_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__40));
v___x_928_ = lean_string_append(v___x_926_, v___x_927_);
v___x_929_ = l_Nat_reprFast(v___y_907_);
v___x_930_ = lean_string_append(v___x_928_, v___x_929_);
lean_dec_ref(v___x_929_);
v___x_931_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__41));
v___x_932_ = lean_string_append(v___x_930_, v___x_931_);
v___x_933_ = lean_string_append(v___x_932_, v___x_925_);
v___x_934_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__42));
v___x_935_ = lean_string_append(v___x_933_, v___x_934_);
v___x_936_ = lean_string_append(v___x_935_, v___x_925_);
lean_dec_ref(v___x_925_);
v___x_937_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__43));
v___x_938_ = lean_string_append(v___x_936_, v___x_937_);
v___x_939_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_939_, 0, v___x_919_);
lean_ctor_set(v___x_939_, 1, v___x_920_);
lean_ctor_set(v___x_939_, 2, v___x_921_);
lean_ctor_set(v___x_939_, 3, v___x_922_);
lean_ctor_set(v___x_939_, 4, v___x_923_);
lean_ctor_set(v___x_939_, 5, v_sprint_918_);
lean_ctor_set(v___x_939_, 6, v___x_938_);
lean_inc_ref_n(v___y_910_, 2);
v_out_940_ = lean_apply_2(v___y_910_, v___x_939_, v_out_916_);
v_forged_941_ = lp_choreo_Choreo_Routine_setPhase(v_routine_704_, v___y_915_, v___f_904_);
v___x_942_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__44));
v___x_943_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__45));
v___x_944_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__46));
v___x_945_ = lp_choreo_Choreo_rejectedPhase(v___y_915_);
v___x_946_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_946_, 0, v___x_942_);
lean_ctor_set(v___x_946_, 1, v___x_943_);
lean_ctor_set(v___x_946_, 2, v___x_921_);
lean_ctor_set(v___x_946_, 3, v___x_922_);
lean_ctor_set(v___x_946_, 4, v___x_944_);
lean_ctor_set(v___x_946_, 5, v_forged_941_);
lean_ctor_set(v___x_946_, 6, v___x_945_);
v_out_947_ = lean_apply_2(v___y_910_, v___x_946_, v_out_940_);
v___x_948_ = lean_nat_dec_lt(v___y_909_, v___y_915_);
if (v___x_948_ == 0)
{
v___y_826_ = v___y_906_;
v___y_827_ = v___y_908_;
v___y_828_ = v___y_909_;
v___y_829_ = v___y_910_;
v___y_830_ = v___y_911_;
v___y_831_ = v___y_912_;
v___y_832_ = v___x_922_;
v___y_833_ = v___y_913_;
v___y_834_ = v___y_915_;
v_out_835_ = v_out_947_;
goto v___jp_825_;
}
else
{
lean_object* v___x_949_; lean_object* v___x_950_; lean_object* v___x_951_; lean_object* v_late_952_; lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v___x_955_; lean_object* v___x_956_; lean_object* v___x_957_; lean_object* v___x_958_; lean_object* v___x_959_; lean_object* v_out_960_; 
lean_inc(v_phases_708_);
v___x_949_ = l_List_zipIdxTR___redArg(v_phases_708_, v___y_909_);
v___x_950_ = lean_box(0);
v___x_951_ = lp_choreo_List_mapTR_loop___at___00Choreo_allMutationsOf_spec__8(v___y_915_, v___x_949_, v___x_950_);
lean_inc_ref(v_cfg_705_);
v_late_952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_late_952_, 0, v_cfg_705_);
lean_ctor_set(v_late_952_, 1, v___x_951_);
v___x_953_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__47));
v___x_954_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__48));
v___x_955_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__20));
v___x_956_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__21));
v___x_957_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__49));
v___x_958_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__23));
v___x_959_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_959_, 0, v___x_953_);
lean_ctor_set(v___x_959_, 1, v___x_954_);
lean_ctor_set(v___x_959_, 2, v___x_955_);
lean_ctor_set(v___x_959_, 3, v___x_956_);
lean_ctor_set(v___x_959_, 4, v___x_957_);
lean_ctor_set(v___x_959_, 5, v_late_952_);
lean_ctor_set(v___x_959_, 6, v___x_958_);
lean_inc_ref(v___y_910_);
v_out_960_ = lean_apply_2(v___y_910_, v___x_959_, v_out_947_);
v___y_826_ = v___y_906_;
v___y_827_ = v___y_908_;
v___y_828_ = v___y_909_;
v___y_829_ = v___y_910_;
v___y_830_ = v___y_911_;
v___y_831_ = v___y_912_;
v___y_832_ = v___x_922_;
v___y_833_ = v___y_913_;
v___y_834_ = v___y_915_;
v_out_835_ = v_out_960_;
goto v___jp_825_;
}
}
v___jp_964_:
{
lean_object* v___x_977_; uint8_t v___x_978_; 
v___x_977_ = lean_nat_add(v___y_975_, v___y_973_);
v___x_978_ = lean_nat_dec_lt(v___x_977_, v___x_963_);
if (v___x_978_ == 0)
{
lean_dec(v___x_977_);
lean_dec_ref(v___y_972_);
v___y_906_ = v___y_965_;
v___y_907_ = v___y_967_;
v___y_908_ = v___y_966_;
v___y_909_ = v___y_968_;
v___y_910_ = v___y_969_;
v___y_911_ = v___y_970_;
v___y_912_ = v___y_971_;
v___y_913_ = v___y_973_;
v___y_914_ = v___y_974_;
v___y_915_ = v___y_975_;
v_out_916_ = v_out_976_;
goto v___jp_905_;
}
else
{
lean_object* v_tele_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v_out_987_; 
lean_inc_ref(v_routine_704_);
v_tele_979_ = lp_choreo_Choreo_Routine_setPhase(v_routine_704_, v___x_977_, v___y_972_);
lean_dec(v___x_977_);
v___x_980_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__50));
v___x_981_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__51));
v___x_982_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__36));
v___x_983_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__37));
v___x_984_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__52));
v___x_985_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__53));
v___x_986_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_986_, 0, v___x_980_);
lean_ctor_set(v___x_986_, 1, v___x_981_);
lean_ctor_set(v___x_986_, 2, v___x_982_);
lean_ctor_set(v___x_986_, 3, v___x_983_);
lean_ctor_set(v___x_986_, 4, v___x_984_);
lean_ctor_set(v___x_986_, 5, v_tele_979_);
lean_ctor_set(v___x_986_, 6, v___x_985_);
lean_inc_ref(v___y_969_);
v_out_987_ = lean_apply_2(v___y_969_, v___x_986_, v_out_976_);
v___y_906_ = v___y_965_;
v___y_907_ = v___y_967_;
v___y_908_ = v___y_966_;
v___y_909_ = v___y_968_;
v___y_910_ = v___y_969_;
v___y_911_ = v___y_970_;
v___y_912_ = v___y_971_;
v___y_913_ = v___y_973_;
v___y_914_ = v___y_974_;
v___y_915_ = v___y_975_;
v_out_916_ = v_out_987_;
goto v___jp_905_;
}
}
v___jp_988_:
{
lean_object* v_xmin_1001_; lean_object* v_xmax_1002_; lean_object* v_ymin_1003_; lean_object* v_ymax_1004_; lean_object* v___x_1005_; lean_object* v_y_1006_; lean_object* v___x_1008_; uint8_t v_isShared_1009_; uint8_t v_isSharedCheck_1045_; 
v_xmin_1001_ = lean_ctor_get(v_stage_712_, 0);
v_xmax_1002_ = lean_ctor_get(v_stage_712_, 1);
v_ymin_1003_ = lean_ctor_get(v_stage_712_, 2);
v_ymax_1004_ = lean_ctor_get(v_stage_712_, 3);
v___x_1005_ = lp_choreo_Choreo_endOf(v___y_997_);
lean_dec_ref(v___y_997_);
v_y_1006_ = lean_ctor_get(v___x_1005_, 1);
v_isSharedCheck_1045_ = !lean_is_exclusive(v___x_1005_);
if (v_isSharedCheck_1045_ == 0)
{
lean_object* v_unused_1046_; 
v_unused_1046_ = lean_ctor_get(v___x_1005_, 0);
lean_dec(v_unused_1046_);
v___x_1008_ = v___x_1005_;
v_isShared_1009_ = v_isSharedCheck_1045_;
goto v_resetjp_1007_;
}
else
{
lean_inc(v_y_1006_);
lean_dec(v___x_1005_);
v___x_1008_ = lean_box(0);
v_isShared_1009_ = v_isSharedCheck_1045_;
goto v_resetjp_1007_;
}
v_resetjp_1007_:
{
lean_object* v___x_1010_; lean_object* v___x_1011_; lean_object* v_offEnd_1013_; 
v___x_1010_ = lean_obj_once(&lp_choreo_Choreo_allMutationsOf___closed__54, &lp_choreo_Choreo_allMutationsOf___closed__54_once, _init_lp_choreo_Choreo_allMutationsOf___closed__54);
v___x_1011_ = lean_int_add(v_xmax_1002_, v___x_1010_);
if (v_isShared_1009_ == 0)
{
lean_ctor_set(v___x_1008_, 0, v___x_1011_);
v_offEnd_1013_ = v___x_1008_;
goto v_reusejp_1012_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1011_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_y_1006_);
v_offEnd_1013_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1012_;
}
v_reusejp_1012_:
{
lean_object* v___f_1014_; lean_object* v___x_1015_; lean_object* v_off_1016_; lean_object* v_phases_1017_; lean_object* v_offPh_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; 
v___f_1014_ = lean_alloc_closure((void*)(lp_choreo_Choreo_allMutationsOf___lam__5___boxed), 4, 3);
lean_closure_set(v___f_1014_, 0, v___y_991_);
lean_closure_set(v___f_1014_, 1, v_offEnd_1013_);
lean_closure_set(v___f_1014_, 2, v___y_989_);
lean_inc_ref(v_routine_704_);
v___x_1015_ = lp_choreo_Choreo_Routine_setPhase(v_routine_704_, v___y_999_, v___f_1014_);
v_off_1016_ = lp_choreo_Choreo_recert(v___x_1015_);
v_phases_1017_ = lean_ctor_get(v_off_1016_, 1);
lean_inc(v_phases_1017_);
lean_inc_n(v___y_999_, 2);
v_offPh_1018_ = l_List_getD___redArg(v_phases_1017_, v___y_999_, v___y_995_);
lean_dec_ref(v___y_995_);
lean_dec(v_phases_1017_);
lean_inc_ref(v_cfg_705_);
v___x_1019_ = lp_choreo_Choreo_Phase_diagnose(v_cfg_705_, v___y_999_, v_offPh_1018_);
v___x_1020_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__9(v___x_1019_);
lean_dec(v___x_1019_);
if (lean_obj_tag(v___x_1020_) == 1)
{
lean_object* v_val_1021_; 
v_val_1021_ = lean_ctor_get(v___x_1020_, 0);
lean_inc(v_val_1021_);
lean_dec_ref_known(v___x_1020_, 1);
if (lean_obj_tag(v_val_1021_) == 1)
{
lean_object* v_i_1022_; lean_object* v_t_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v___x_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v_out_1043_; 
v_i_1022_ = lean_ctor_get(v_val_1021_, 1);
lean_inc(v_i_1022_);
v_t_1023_ = lean_ctor_get(v_val_1021_, 2);
lean_inc_ref(v_t_1023_);
lean_dec_ref_known(v_val_1021_, 3);
v___x_1024_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__55));
v___x_1025_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__56));
v___x_1026_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__36));
v___x_1027_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__21));
v___x_1028_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__57));
v___x_1029_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__58));
lean_inc(v___y_999_);
v___x_1030_ = l_Nat_reprFast(v___y_999_);
v___x_1031_ = lean_string_append(v___x_1029_, v___x_1030_);
lean_dec_ref(v___x_1030_);
v___x_1032_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__59));
v___x_1033_ = lean_string_append(v___x_1031_, v___x_1032_);
v___x_1034_ = l_Nat_reprFast(v_i_1022_);
v___x_1035_ = lean_string_append(v___x_1033_, v___x_1034_);
lean_dec_ref(v___x_1034_);
v___x_1036_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__60));
v___x_1037_ = lean_string_append(v___x_1035_, v___x_1036_);
v___x_1038_ = lp_choreo_Choreo_ratL(v_t_1023_);
v___x_1039_ = lean_string_append(v___x_1037_, v___x_1038_);
lean_dec_ref(v___x_1038_);
v___x_1040_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__61));
v___x_1041_ = lean_string_append(v___x_1039_, v___x_1040_);
v___x_1042_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1042_, 0, v___x_1024_);
lean_ctor_set(v___x_1042_, 1, v___x_1025_);
lean_ctor_set(v___x_1042_, 2, v___x_1026_);
lean_ctor_set(v___x_1042_, 3, v___x_1027_);
lean_ctor_set(v___x_1042_, 4, v___x_1028_);
lean_ctor_set(v___x_1042_, 5, v_off_1016_);
lean_ctor_set(v___x_1042_, 6, v___x_1041_);
lean_inc_ref(v___y_990_);
v_out_1043_ = lean_apply_2(v___y_990_, v___x_1042_, v_out_1000_);
lean_inc(v_xmax_1002_);
lean_inc(v_ymin_1003_);
lean_inc(v_xmin_1001_);
lean_inc(v_ymax_1004_);
v___y_965_ = v_ymax_1004_;
v___y_966_ = v_xmin_1001_;
v___y_967_ = v___y_994_;
v___y_968_ = v___y_996_;
v___y_969_ = v___y_990_;
v___y_970_ = v_ymin_1003_;
v___y_971_ = v_xmax_1002_;
v___y_972_ = v___y_992_;
v___y_973_ = v___y_998_;
v___y_974_ = v___y_993_;
v___y_975_ = v___y_999_;
v_out_976_ = v_out_1043_;
goto v___jp_964_;
}
else
{
lean_dec(v_val_1021_);
lean_dec_ref(v_off_1016_);
lean_inc(v_xmax_1002_);
lean_inc(v_ymin_1003_);
lean_inc(v_xmin_1001_);
lean_inc(v_ymax_1004_);
v___y_965_ = v_ymax_1004_;
v___y_966_ = v_xmin_1001_;
v___y_967_ = v___y_994_;
v___y_968_ = v___y_996_;
v___y_969_ = v___y_990_;
v___y_970_ = v_ymin_1003_;
v___y_971_ = v_xmax_1002_;
v___y_972_ = v___y_992_;
v___y_973_ = v___y_998_;
v___y_974_ = v___y_993_;
v___y_975_ = v___y_999_;
v_out_976_ = v_out_1000_;
goto v___jp_964_;
}
}
else
{
lean_dec(v___x_1020_);
lean_dec_ref(v_off_1016_);
lean_inc(v_xmax_1002_);
lean_inc(v_ymin_1003_);
lean_inc(v_xmin_1001_);
lean_inc(v_ymax_1004_);
v___y_965_ = v_ymax_1004_;
v___y_966_ = v_xmin_1001_;
v___y_967_ = v___y_994_;
v___y_968_ = v___y_996_;
v___y_969_ = v___y_990_;
v___y_970_ = v_ymin_1003_;
v___y_971_ = v_xmax_1002_;
v___y_972_ = v___y_992_;
v___y_973_ = v___y_998_;
v___y_974_ = v___y_993_;
v___y_975_ = v___y_999_;
v_out_976_ = v_out_1000_;
goto v___jp_964_;
}
}
}
}
v___jp_1047_:
{
lean_object* v___x_1053_; lean_object* v_snd_1054_; lean_object* v_fst_1055_; lean_object* v_fst_1056_; lean_object* v_aPath_1057_; lean_object* v___f_1058_; lean_object* v___x_1059_; lean_object* v_onto_1060_; lean_object* v_phases_1061_; lean_object* v___f_1062_; lean_object* v___f_1063_; lean_object* v_out_1064_; lean_object* v_add_1065_; lean_object* v_ontoPh_1066_; lean_object* v___x_1067_; lean_object* v_wit_1068_; 
lean_inc_ref_n(v_cfg_705_, 2);
v___x_1053_ = lp_choreo_Choreo_tightestPair(v_cfg_705_, v___y_1052_);
v_snd_1054_ = lean_ctor_get(v___x_1053_, 1);
lean_inc(v_snd_1054_);
v_fst_1055_ = lean_ctor_get(v___x_1053_, 0);
lean_inc_n(v_fst_1055_, 5);
lean_dec_ref(v___x_1053_);
v_fst_1056_ = lean_ctor_get(v_snd_1054_, 0);
lean_inc(v_fst_1056_);
lean_dec(v_snd_1054_);
v_aPath_1057_ = lp_choreo_Choreo_Phase_path(v___y_1052_, v_fst_1055_);
lean_inc_ref(v_aPath_1057_);
v___f_1058_ = lean_alloc_closure((void*)(lp_choreo_Choreo_allMutationsOf___lam__1___boxed), 5, 4);
lean_closure_set(v___f_1058_, 0, v_aPath_1057_);
lean_closure_set(v___f_1058_, 1, v___y_1052_);
lean_closure_set(v___f_1058_, 2, v_fst_1056_);
lean_closure_set(v___f_1058_, 3, v_fst_1055_);
lean_inc_ref(v_routine_704_);
v___x_1059_ = lp_choreo_Choreo_Routine_setPhase(v_routine_704_, v___y_1049_, v___f_1058_);
v_onto_1060_ = lp_choreo_Choreo_recert(v___x_1059_);
v_phases_1061_ = lean_ctor_get(v_onto_1060_, 1);
lean_inc(v_phases_1061_);
v___f_1062_ = lean_alloc_closure((void*)(lp_choreo_Choreo_allMutationsOf___lam__2), 2, 1);
lean_closure_set(v___f_1062_, 0, v_fst_1055_);
lean_inc(v___y_1048_);
v___f_1063_ = lean_alloc_closure((void*)(lp_choreo_Choreo_allMutationsOf___lam__3), 3, 2);
lean_closure_set(v___f_1063_, 0, v_fst_1055_);
lean_closure_set(v___f_1063_, 1, v___y_1048_);
v_out_1064_ = lean_box(0);
v_add_1065_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__62));
lean_inc_n(v___y_1049_, 2);
v_ontoPh_1066_ = l_List_getD___redArg(v_phases_1061_, v___y_1049_, v___y_1050_);
lean_dec(v_phases_1061_);
v___x_1067_ = lp_choreo_Choreo_Phase_diagnose(v_cfg_705_, v___y_1049_, v_ontoPh_1066_);
v_wit_1068_ = lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__10(v___x_1067_);
lean_dec(v___x_1067_);
if (lean_obj_tag(v_wit_1068_) == 1)
{
lean_object* v_val_1069_; 
v_val_1069_ = lean_ctor_get(v_wit_1068_, 0);
lean_inc(v_val_1069_);
lean_dec_ref_known(v_wit_1068_, 1);
if (lean_obj_tag(v_val_1069_) == 0)
{
lean_object* v_t_1070_; lean_object* v_i_1071_; lean_object* v_j_1072_; lean_object* v_num_1073_; lean_object* v_den_1074_; lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; lean_object* v___x_1078_; lean_object* v___x_1079_; lean_object* v___x_1080_; lean_object* v___x_1081_; lean_object* v___x_1082_; lean_object* v___x_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; lean_object* v___x_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; lean_object* v___x_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v_out_1102_; 
v_t_1070_ = lean_ctor_get(v_val_1069_, 3);
lean_inc_ref(v_t_1070_);
v_i_1071_ = lean_ctor_get(v_val_1069_, 1);
lean_inc(v_i_1071_);
v_j_1072_ = lean_ctor_get(v_val_1069_, 2);
lean_inc(v_j_1072_);
lean_dec_ref_known(v_val_1069_, 4);
v_num_1073_ = lean_ctor_get(v_t_1070_, 0);
lean_inc(v_num_1073_);
v_den_1074_ = lean_ctor_get(v_t_1070_, 1);
lean_inc(v_den_1074_);
lean_dec_ref(v_t_1070_);
v___x_1075_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__63));
v___x_1076_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__64));
v___x_1077_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__36));
v___x_1078_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__21));
v___x_1079_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__65));
v___x_1080_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__58));
lean_inc(v___y_1049_);
v___x_1081_ = l_Nat_reprFast(v___y_1049_);
v___x_1082_ = lean_string_append(v___x_1080_, v___x_1081_);
lean_dec_ref(v___x_1081_);
v___x_1083_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__66));
v___x_1084_ = lean_string_append(v___x_1082_, v___x_1083_);
v___x_1085_ = l_Nat_reprFast(v_i_1071_);
v___x_1086_ = lean_string_append(v___x_1084_, v___x_1085_);
lean_dec_ref(v___x_1085_);
v___x_1087_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__67));
v___x_1088_ = lean_string_append(v___x_1086_, v___x_1087_);
v___x_1089_ = l_Nat_reprFast(v_j_1072_);
v___x_1090_ = lean_string_append(v___x_1088_, v___x_1089_);
lean_dec_ref(v___x_1089_);
v___x_1091_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__68));
v___x_1092_ = lean_string_append(v___x_1090_, v___x_1091_);
v___x_1093_ = l_Int_repr(v_num_1073_);
lean_dec(v_num_1073_);
v___x_1094_ = lean_string_append(v___x_1092_, v___x_1093_);
lean_dec_ref(v___x_1093_);
v___x_1095_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__31));
v___x_1096_ = lean_string_append(v___x_1094_, v___x_1095_);
v___x_1097_ = l_Nat_reprFast(v_den_1074_);
v___x_1098_ = lean_string_append(v___x_1096_, v___x_1097_);
lean_dec_ref(v___x_1097_);
v___x_1099_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__69));
v___x_1100_ = lean_string_append(v___x_1098_, v___x_1099_);
v___x_1101_ = lean_alloc_ctor(0, 7, 0);
lean_ctor_set(v___x_1101_, 0, v___x_1075_);
lean_ctor_set(v___x_1101_, 1, v___x_1076_);
lean_ctor_set(v___x_1101_, 2, v___x_1077_);
lean_ctor_set(v___x_1101_, 3, v___x_1078_);
lean_ctor_set(v___x_1101_, 4, v___x_1079_);
lean_ctor_set(v___x_1101_, 5, v_onto_1060_);
lean_ctor_set(v___x_1101_, 6, v___x_1100_);
v_out_1102_ = lp_choreo_Choreo_allMutationsOf___lam__4(v_out_1064_, v___x_1101_, v_out_1064_);
lean_inc_ref(v_aPath_1057_);
lean_inc(v_fst_1055_);
v___y_989_ = v_fst_1055_;
v___y_990_ = v_add_1065_;
v___y_991_ = v_aPath_1057_;
v___y_992_ = v___f_1063_;
v___y_993_ = v___f_1062_;
v___y_994_ = v_fst_1055_;
v___y_995_ = v___y_1050_;
v___y_996_ = v___y_1048_;
v___y_997_ = v_aPath_1057_;
v___y_998_ = v___y_1051_;
v___y_999_ = v___y_1049_;
v_out_1000_ = v_out_1102_;
goto v___jp_988_;
}
else
{
lean_dec(v_val_1069_);
lean_dec_ref(v_onto_1060_);
lean_inc_ref(v_aPath_1057_);
lean_inc(v_fst_1055_);
v___y_989_ = v_fst_1055_;
v___y_990_ = v_add_1065_;
v___y_991_ = v_aPath_1057_;
v___y_992_ = v___f_1063_;
v___y_993_ = v___f_1062_;
v___y_994_ = v_fst_1055_;
v___y_995_ = v___y_1050_;
v___y_996_ = v___y_1048_;
v___y_997_ = v_aPath_1057_;
v___y_998_ = v___y_1051_;
v___y_999_ = v___y_1049_;
v_out_1000_ = v_out_1064_;
goto v___jp_988_;
}
}
else
{
lean_dec(v_wit_1068_);
lean_dec_ref(v_onto_1060_);
lean_inc_ref(v_aPath_1057_);
lean_inc(v_fst_1055_);
v___y_989_ = v_fst_1055_;
v___y_990_ = v_add_1065_;
v___y_991_ = v_aPath_1057_;
v___y_992_ = v___f_1063_;
v___y_993_ = v___f_1062_;
v___y_994_ = v_fst_1055_;
v___y_995_ = v___y_1050_;
v___y_996_ = v___y_1048_;
v___y_997_ = v_aPath_1057_;
v___y_998_ = v___y_1051_;
v___y_999_ = v___y_1049_;
v_out_1000_ = v_out_1064_;
goto v___jp_988_;
}
}
v___jp_1103_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; uint8_t v___x_1108_; 
v___x_1105_ = lean_unsigned_to_nat(0u);
v___x_1106_ = lean_unsigned_to_nat(1u);
v___x_1107_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedPhase___closed__0, &lp_choreo_Choreo_instInhabitedPhase___closed__0_once, _init_lp_choreo_Choreo_instInhabitedPhase___closed__0);
v___x_1108_ = lean_nat_dec_lt(v___y_1104_, v___x_963_);
if (v___x_1108_ == 0)
{
lean_dec_ref(v_phases_961_);
v___y_1048_ = v___x_1105_;
v___y_1049_ = v___y_1104_;
v___y_1050_ = v___x_1107_;
v___y_1051_ = v___x_1106_;
v___y_1052_ = v___x_1107_;
goto v___jp_1047_;
}
else
{
lean_object* v___x_1109_; 
v___x_1109_ = lean_array_fget(v_phases_961_, v___y_1104_);
lean_dec_ref(v_phases_961_);
v___y_1048_ = v___x_1105_;
v___y_1049_ = v___y_1104_;
v___y_1050_ = v___x_1107_;
v___y_1051_ = v___x_1106_;
v___y_1052_ = v___x_1109_;
goto v___jp_1047_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_mutationsOf_spec__0(lean_object* v_a_1114_, lean_object* v_a_1115_){
_start:
{
if (lean_obj_tag(v_a_1114_) == 0)
{
lean_object* v___x_1116_; 
v___x_1116_ = l_List_reverse___redArg(v_a_1115_);
return v___x_1116_;
}
else
{
lean_object* v_head_1117_; lean_object* v_tail_1118_; lean_object* v___x_1120_; uint8_t v_isShared_1121_; uint8_t v_isSharedCheck_1130_; 
v_head_1117_ = lean_ctor_get(v_a_1114_, 0);
v_tail_1118_ = lean_ctor_get(v_a_1114_, 1);
v_isSharedCheck_1130_ = !lean_is_exclusive(v_a_1114_);
if (v_isSharedCheck_1130_ == 0)
{
v___x_1120_ = v_a_1114_;
v_isShared_1121_ = v_isSharedCheck_1130_;
goto v_resetjp_1119_;
}
else
{
lean_inc(v_tail_1118_);
lean_inc(v_head_1117_);
lean_dec(v_a_1114_);
v___x_1120_ = lean_box(0);
v_isShared_1121_ = v_isSharedCheck_1130_;
goto v_resetjp_1119_;
}
v_resetjp_1119_:
{
lean_object* v_family_1122_; lean_object* v___x_1123_; uint8_t v___x_1124_; 
v_family_1122_ = lean_ctor_get(v_head_1117_, 2);
v___x_1123_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__20));
v___x_1124_ = lean_string_dec_eq(v_family_1122_, v___x_1123_);
if (v___x_1124_ == 0)
{
lean_object* v___x_1126_; 
if (v_isShared_1121_ == 0)
{
lean_ctor_set(v___x_1120_, 1, v_a_1115_);
v___x_1126_ = v___x_1120_;
goto v_reusejp_1125_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_head_1117_);
lean_ctor_set(v_reuseFailAlloc_1128_, 1, v_a_1115_);
v___x_1126_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1125_;
}
v_reusejp_1125_:
{
v_a_1114_ = v_tail_1118_;
v_a_1115_ = v___x_1126_;
goto _start;
}
}
else
{
lean_del_object(v___x_1120_);
lean_dec(v_head_1117_);
v_a_1114_ = v_tail_1118_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_mutationsOf(lean_object* v_b_1131_){
_start:
{
lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; 
v___x_1132_ = lp_choreo_Choreo_allMutationsOf(v_b_1131_);
v___x_1133_ = lean_box(0);
v___x_1134_ = lp_choreo_List_filterTR_loop___at___00Choreo_mutationsOf_spec__0(v___x_1132_, v___x_1133_);
return v___x_1134_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressSource___lam__0(lean_object* v___x_1137_, lean_object* v_x_1138_){
_start:
{
lean_object* v_snd_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; 
v_snd_1139_ = lean_ctor_get(v_x_1138_, 1);
lean_inc(v_snd_1139_);
lean_dec_ref(v_x_1138_);
v___x_1140_ = ((lean_object*)(lp_choreo_Choreo_stressSource___lam__0___closed__0));
v___x_1141_ = lean_string_append(v___x_1140_, v___x_1137_);
v___x_1142_ = ((lean_object*)(lp_choreo_Choreo_stressSource___lam__0___closed__1));
v___x_1143_ = lean_string_append(v___x_1141_, v___x_1142_);
v___x_1144_ = l_Nat_reprFast(v_snd_1139_);
v___x_1145_ = lean_string_append(v___x_1143_, v___x_1144_);
lean_dec_ref(v___x_1144_);
return v___x_1145_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressSource___lam__0___boxed(lean_object* v___x_1146_, lean_object* v_x_1147_){
_start:
{
lean_object* v_res_1148_; 
v_res_1148_ = lp_choreo_Choreo_stressSource___lam__0(v___x_1146_, v_x_1147_);
lean_dec_ref(v___x_1146_);
return v_res_1148_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressSource_spec__0(lean_object* v_a_1149_, lean_object* v_a_1150_){
_start:
{
if (lean_obj_tag(v_a_1149_) == 0)
{
lean_object* v___x_1151_; 
v___x_1151_ = l_List_reverse___redArg(v_a_1150_);
return v___x_1151_;
}
else
{
lean_object* v_head_1152_; lean_object* v_tail_1153_; lean_object* v___x_1155_; uint8_t v_isShared_1156_; uint8_t v_isSharedCheck_1161_; 
v_head_1152_ = lean_ctor_get(v_a_1149_, 0);
v_tail_1153_ = lean_ctor_get(v_a_1149_, 1);
v_isSharedCheck_1161_ = !lean_is_exclusive(v_a_1149_);
if (v_isSharedCheck_1161_ == 0)
{
v___x_1155_ = v_a_1149_;
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
else
{
lean_inc(v_tail_1153_);
lean_inc(v_head_1152_);
lean_dec(v_a_1149_);
v___x_1155_ = lean_box(0);
v_isShared_1156_ = v_isSharedCheck_1161_;
goto v_resetjp_1154_;
}
v_resetjp_1154_:
{
lean_object* v___x_1158_; 
if (v_isShared_1156_ == 0)
{
lean_ctor_set(v___x_1155_, 1, v_a_1150_);
v___x_1158_ = v___x_1155_;
goto v_reusejp_1157_;
}
else
{
lean_object* v_reuseFailAlloc_1160_; 
v_reuseFailAlloc_1160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1160_, 0, v_head_1152_);
lean_ctor_set(v_reuseFailAlloc_1160_, 1, v_a_1150_);
v___x_1158_ = v_reuseFailAlloc_1160_;
goto v_reusejp_1157_;
}
v_reusejp_1157_:
{
v_a_1149_ = v_tail_1153_;
v_a_1150_ = v___x_1158_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(lean_object* v_s_1162_, lean_object* v_replacement_1163_, lean_object* v_a_1164_, lean_object* v_b_1165_){
_start:
{
lean_object* v_it_1167_; lean_object* v_startPos_1168_; lean_object* v_endPos_1169_; lean_object* v_it_1178_; 
switch(lean_obj_tag(v_a_1164_))
{
case 0:
{
lean_object* v_pos_1184_; lean_object* v___x_1186_; uint8_t v_isShared_1187_; uint8_t v_isSharedCheck_1196_; 
v_pos_1184_ = lean_ctor_get(v_a_1164_, 0);
v_isSharedCheck_1196_ = !lean_is_exclusive(v_a_1164_);
if (v_isSharedCheck_1196_ == 0)
{
v___x_1186_ = v_a_1164_;
v_isShared_1187_ = v_isSharedCheck_1196_;
goto v_resetjp_1185_;
}
else
{
lean_inc(v_pos_1184_);
lean_dec(v_a_1164_);
v___x_1186_ = lean_box(0);
v_isShared_1187_ = v_isSharedCheck_1196_;
goto v_resetjp_1185_;
}
v_resetjp_1185_:
{
lean_object* v_startInclusive_1188_; lean_object* v_endExclusive_1189_; lean_object* v___x_1190_; uint8_t v_decide_1191_; 
v_startInclusive_1188_ = lean_ctor_get(v_s_1162_, 1);
v_endExclusive_1189_ = lean_ctor_get(v_s_1162_, 2);
v___x_1190_ = lean_nat_sub(v_endExclusive_1189_, v_startInclusive_1188_);
v_decide_1191_ = lean_nat_dec_eq(v_pos_1184_, v___x_1190_);
lean_dec(v___x_1190_);
if (v_decide_1191_ == 0)
{
lean_object* v___x_1193_; 
if (v_isShared_1187_ == 0)
{
lean_ctor_set_tag(v___x_1186_, 1);
v___x_1193_ = v___x_1186_;
goto v_reusejp_1192_;
}
else
{
lean_object* v_reuseFailAlloc_1194_; 
v_reuseFailAlloc_1194_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1194_, 0, v_pos_1184_);
v___x_1193_ = v_reuseFailAlloc_1194_;
goto v_reusejp_1192_;
}
v_reusejp_1192_:
{
v_it_1178_ = v___x_1193_;
goto v___jp_1177_;
}
}
else
{
lean_object* v___x_1195_; 
lean_del_object(v___x_1186_);
lean_dec(v_pos_1184_);
v___x_1195_ = lean_box(3);
v_it_1178_ = v___x_1195_;
goto v___jp_1177_;
}
}
}
case 1:
{
lean_object* v_pos_1197_; lean_object* v___x_1199_; uint8_t v_isShared_1200_; uint8_t v_isSharedCheck_1209_; 
v_pos_1197_ = lean_ctor_get(v_a_1164_, 0);
v_isSharedCheck_1209_ = !lean_is_exclusive(v_a_1164_);
if (v_isSharedCheck_1209_ == 0)
{
v___x_1199_ = v_a_1164_;
v_isShared_1200_ = v_isSharedCheck_1209_;
goto v_resetjp_1198_;
}
else
{
lean_inc(v_pos_1197_);
lean_dec(v_a_1164_);
v___x_1199_ = lean_box(0);
v_isShared_1200_ = v_isSharedCheck_1209_;
goto v_resetjp_1198_;
}
v_resetjp_1198_:
{
lean_object* v_str_1201_; lean_object* v_startInclusive_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1207_; 
v_str_1201_ = lean_ctor_get(v_s_1162_, 0);
v_startInclusive_1202_ = lean_ctor_get(v_s_1162_, 1);
v___x_1203_ = lean_nat_add(v_startInclusive_1202_, v_pos_1197_);
v___x_1204_ = lean_string_utf8_next_fast(v_str_1201_, v___x_1203_);
lean_dec(v___x_1203_);
v___x_1205_ = lean_nat_sub(v___x_1204_, v_startInclusive_1202_);
lean_inc(v___x_1205_);
if (v_isShared_1200_ == 0)
{
lean_ctor_set_tag(v___x_1199_, 0);
lean_ctor_set(v___x_1199_, 0, v___x_1205_);
v___x_1207_ = v___x_1199_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1208_; 
v_reuseFailAlloc_1208_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1208_, 0, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1208_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
v_it_1167_ = v___x_1207_;
v_startPos_1168_ = v_pos_1197_;
v_endPos_1169_ = v___x_1205_;
goto v___jp_1166_;
}
}
}
case 2:
{
lean_object* v_needle_1210_; lean_object* v_table_1211_; lean_object* v_stackPos_1212_; lean_object* v_needlePos_1213_; lean_object* v___x_1215_; uint8_t v_isShared_1216_; uint8_t v_isSharedCheck_1274_; 
v_needle_1210_ = lean_ctor_get(v_a_1164_, 0);
v_table_1211_ = lean_ctor_get(v_a_1164_, 1);
v_stackPos_1212_ = lean_ctor_get(v_a_1164_, 2);
v_needlePos_1213_ = lean_ctor_get(v_a_1164_, 3);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_a_1164_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1215_ = v_a_1164_;
v_isShared_1216_ = v_isSharedCheck_1274_;
goto v_resetjp_1214_;
}
else
{
lean_inc(v_needlePos_1213_);
lean_inc(v_stackPos_1212_);
lean_inc(v_table_1211_);
lean_inc(v_needle_1210_);
lean_dec(v_a_1164_);
v___x_1215_ = lean_box(0);
v_isShared_1216_ = v_isSharedCheck_1274_;
goto v_resetjp_1214_;
}
v_resetjp_1214_:
{
lean_object* v_str_1217_; lean_object* v_startInclusive_1218_; lean_object* v_endExclusive_1219_; lean_object* v_str_1220_; lean_object* v_startInclusive_1221_; lean_object* v_endExclusive_1222_; lean_object* v_basePos_1223_; lean_object* v___x_1224_; lean_object* v___x_1225_; lean_object* v___x_1226_; uint8_t v___x_1227_; 
v_str_1217_ = lean_ctor_get(v_needle_1210_, 0);
v_startInclusive_1218_ = lean_ctor_get(v_needle_1210_, 1);
v_endExclusive_1219_ = lean_ctor_get(v_needle_1210_, 2);
v_str_1220_ = lean_ctor_get(v_s_1162_, 0);
v_startInclusive_1221_ = lean_ctor_get(v_s_1162_, 1);
v_endExclusive_1222_ = lean_ctor_get(v_s_1162_, 2);
v_basePos_1223_ = lean_nat_sub(v_stackPos_1212_, v_needlePos_1213_);
v___x_1224_ = lean_nat_sub(v_endExclusive_1219_, v_startInclusive_1218_);
v___x_1225_ = lean_nat_add(v_basePos_1223_, v___x_1224_);
v___x_1226_ = lean_nat_sub(v_endExclusive_1222_, v_startInclusive_1221_);
v___x_1227_ = lean_nat_dec_le(v___x_1225_, v___x_1226_);
lean_dec(v___x_1225_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1228_; lean_object* v___x_1229_; uint8_t v___x_1230_; 
lean_dec(v___x_1224_);
lean_del_object(v___x_1215_);
lean_dec(v_needlePos_1213_);
lean_dec(v_stackPos_1212_);
lean_dec_ref(v_table_1211_);
lean_dec_ref(v_needle_1210_);
v___x_1228_ = lean_unsigned_to_nat(1u);
v___x_1229_ = lean_nat_add(v_basePos_1223_, v___x_1228_);
v___x_1230_ = lean_nat_dec_le(v___x_1229_, v___x_1226_);
lean_dec(v___x_1229_);
if (v___x_1230_ == 0)
{
lean_dec(v___x_1226_);
lean_dec(v_basePos_1223_);
lean_dec_ref(v_s_1162_);
return v_b_1165_;
}
else
{
lean_object* v___x_1231_; lean_object* v___x_1232_; 
v___x_1231_ = l_String_Slice_pos_x21(v_s_1162_, v_basePos_1223_);
lean_dec(v_basePos_1223_);
v___x_1232_ = lean_box(3);
v_it_1167_ = v___x_1232_;
v_startPos_1168_ = v___x_1231_;
v_endPos_1169_ = v___x_1226_;
goto v___jp_1166_;
}
}
else
{
lean_object* v___x_1233_; uint8_t v_stackByte_1234_; lean_object* v___x_1235_; uint8_t v_patByte_1236_; uint8_t v___x_1237_; 
lean_dec(v___x_1226_);
v___x_1233_ = lean_nat_add(v_startInclusive_1221_, v_stackPos_1212_);
v_stackByte_1234_ = lean_string_get_byte_fast(v_str_1220_, v___x_1233_);
v___x_1235_ = lean_nat_add(v_startInclusive_1218_, v_needlePos_1213_);
v_patByte_1236_ = lean_string_get_byte_fast(v_str_1217_, v___x_1235_);
v___x_1237_ = lean_uint8_dec_eq(v_stackByte_1234_, v_patByte_1236_);
if (v___x_1237_ == 0)
{
lean_object* v___x_1238_; uint8_t v_decide_1239_; 
lean_dec(v___x_1224_);
v___x_1238_ = lean_unsigned_to_nat(0u);
v_decide_1239_ = lean_nat_dec_eq(v_needlePos_1213_, v___x_1238_);
if (v_decide_1239_ == 0)
{
lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v_newNeedlePos_1242_; uint8_t v___x_1243_; 
v___x_1240_ = lean_unsigned_to_nat(1u);
v___x_1241_ = lean_nat_sub(v_needlePos_1213_, v___x_1240_);
lean_dec(v_needlePos_1213_);
v_newNeedlePos_1242_ = lean_array_fget_borrowed(v_table_1211_, v___x_1241_);
lean_dec(v___x_1241_);
v___x_1243_ = lean_nat_dec_eq(v_newNeedlePos_1242_, v___x_1238_);
if (v___x_1243_ == 0)
{
lean_object* v_oldBasePos_1244_; lean_object* v___x_1245_; lean_object* v_newBasePos_1246_; lean_object* v___x_1248_; 
lean_inc(v_newNeedlePos_1242_);
v_oldBasePos_1244_ = l_String_Slice_pos_x21(v_s_1162_, v_basePos_1223_);
lean_dec(v_basePos_1223_);
v___x_1245_ = lean_nat_sub(v_stackPos_1212_, v_newNeedlePos_1242_);
v_newBasePos_1246_ = l_String_Slice_pos_x21(v_s_1162_, v___x_1245_);
lean_dec(v___x_1245_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 3, v_newNeedlePos_1242_);
v___x_1248_ = v___x_1215_;
goto v_reusejp_1247_;
}
else
{
lean_object* v_reuseFailAlloc_1249_; 
v_reuseFailAlloc_1249_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1249_, 0, v_needle_1210_);
lean_ctor_set(v_reuseFailAlloc_1249_, 1, v_table_1211_);
lean_ctor_set(v_reuseFailAlloc_1249_, 2, v_stackPos_1212_);
lean_ctor_set(v_reuseFailAlloc_1249_, 3, v_newNeedlePos_1242_);
v___x_1248_ = v_reuseFailAlloc_1249_;
goto v_reusejp_1247_;
}
v_reusejp_1247_:
{
v_it_1167_ = v___x_1248_;
v_startPos_1168_ = v_oldBasePos_1244_;
v_endPos_1169_ = v_newBasePos_1246_;
goto v___jp_1166_;
}
}
else
{
lean_object* v_basePos_1250_; lean_object* v_nextStackPos_1251_; lean_object* v___x_1253_; 
v_basePos_1250_ = l_String_Slice_pos_x21(v_s_1162_, v_basePos_1223_);
lean_dec(v_basePos_1223_);
v_nextStackPos_1251_ = l_String_Slice_posGE___redArg(v_s_1162_, v_stackPos_1212_);
lean_inc(v_nextStackPos_1251_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 3, v___x_1238_);
lean_ctor_set(v___x_1215_, 2, v_nextStackPos_1251_);
v___x_1253_ = v___x_1215_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1254_; 
v_reuseFailAlloc_1254_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1254_, 0, v_needle_1210_);
lean_ctor_set(v_reuseFailAlloc_1254_, 1, v_table_1211_);
lean_ctor_set(v_reuseFailAlloc_1254_, 2, v_nextStackPos_1251_);
lean_ctor_set(v_reuseFailAlloc_1254_, 3, v___x_1238_);
v___x_1253_ = v_reuseFailAlloc_1254_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
v_it_1167_ = v___x_1253_;
v_startPos_1168_ = v_basePos_1250_;
v_endPos_1169_ = v_nextStackPos_1251_;
goto v___jp_1166_;
}
}
}
else
{
lean_object* v_basePos_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v_nextStackPos_1258_; lean_object* v___x_1260_; 
lean_dec(v_basePos_1223_);
lean_dec(v_needlePos_1213_);
v_basePos_1255_ = l_String_Slice_pos_x21(v_s_1162_, v_stackPos_1212_);
v___x_1256_ = lean_unsigned_to_nat(1u);
v___x_1257_ = lean_nat_add(v_stackPos_1212_, v___x_1256_);
lean_dec(v_stackPos_1212_);
v_nextStackPos_1258_ = l_String_Slice_posGE___redArg(v_s_1162_, v___x_1257_);
lean_inc(v_nextStackPos_1258_);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 3, v___x_1238_);
lean_ctor_set(v___x_1215_, 2, v_nextStackPos_1258_);
v___x_1260_ = v___x_1215_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1261_; 
v_reuseFailAlloc_1261_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1261_, 0, v_needle_1210_);
lean_ctor_set(v_reuseFailAlloc_1261_, 1, v_table_1211_);
lean_ctor_set(v_reuseFailAlloc_1261_, 2, v_nextStackPos_1258_);
lean_ctor_set(v_reuseFailAlloc_1261_, 3, v___x_1238_);
v___x_1260_ = v_reuseFailAlloc_1261_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
v_it_1167_ = v___x_1260_;
v_startPos_1168_ = v_basePos_1255_;
v_endPos_1169_ = v_nextStackPos_1258_;
goto v___jp_1166_;
}
}
}
else
{
lean_object* v___x_1262_; lean_object* v_nextStackPos_1263_; lean_object* v_nextNeedlePos_1264_; uint8_t v_decide_1265_; 
lean_dec(v_basePos_1223_);
v___x_1262_ = lean_unsigned_to_nat(1u);
v_nextStackPos_1263_ = lean_nat_add(v_stackPos_1212_, v___x_1262_);
lean_dec(v_stackPos_1212_);
v_nextNeedlePos_1264_ = lean_nat_add(v_needlePos_1213_, v___x_1262_);
lean_dec(v_needlePos_1213_);
v_decide_1265_ = lean_nat_dec_eq(v_nextNeedlePos_1264_, v___x_1224_);
lean_dec(v___x_1224_);
if (v_decide_1265_ == 0)
{
lean_object* v___x_1267_; 
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 3, v_nextNeedlePos_1264_);
lean_ctor_set(v___x_1215_, 2, v_nextStackPos_1263_);
v___x_1267_ = v___x_1215_;
goto v_reusejp_1266_;
}
else
{
lean_object* v_reuseFailAlloc_1269_; 
v_reuseFailAlloc_1269_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1269_, 0, v_needle_1210_);
lean_ctor_set(v_reuseFailAlloc_1269_, 1, v_table_1211_);
lean_ctor_set(v_reuseFailAlloc_1269_, 2, v_nextStackPos_1263_);
lean_ctor_set(v_reuseFailAlloc_1269_, 3, v_nextNeedlePos_1264_);
v___x_1267_ = v_reuseFailAlloc_1269_;
goto v_reusejp_1266_;
}
v_reusejp_1266_:
{
v_a_1164_ = v___x_1267_;
goto _start;
}
}
else
{
lean_object* v___x_1270_; lean_object* v___x_1272_; 
lean_dec(v_nextNeedlePos_1264_);
v___x_1270_ = lean_unsigned_to_nat(0u);
if (v_isShared_1216_ == 0)
{
lean_ctor_set(v___x_1215_, 3, v___x_1270_);
lean_ctor_set(v___x_1215_, 2, v_nextStackPos_1263_);
v___x_1272_ = v___x_1215_;
goto v_reusejp_1271_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_needle_1210_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_table_1211_);
lean_ctor_set(v_reuseFailAlloc_1273_, 2, v_nextStackPos_1263_);
lean_ctor_set(v_reuseFailAlloc_1273_, 3, v___x_1270_);
v___x_1272_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1271_;
}
v_reusejp_1271_:
{
v_it_1178_ = v___x_1272_;
goto v___jp_1177_;
}
}
}
}
}
}
default: 
{
lean_dec_ref(v_s_1162_);
return v_b_1165_;
}
}
v___jp_1166_:
{
lean_object* v___x_1170_; lean_object* v_str_1171_; lean_object* v_startInclusive_1172_; lean_object* v_endExclusive_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; 
lean_inc_ref(v_s_1162_);
v___x_1170_ = l_String_Slice_slice_x21(v_s_1162_, v_startPos_1168_, v_endPos_1169_);
lean_dec(v_endPos_1169_);
lean_dec(v_startPos_1168_);
v_str_1171_ = lean_ctor_get(v___x_1170_, 0);
lean_inc_ref(v_str_1171_);
v_startInclusive_1172_ = lean_ctor_get(v___x_1170_, 1);
lean_inc(v_startInclusive_1172_);
v_endExclusive_1173_ = lean_ctor_get(v___x_1170_, 2);
lean_inc(v_endExclusive_1173_);
lean_dec_ref(v___x_1170_);
v___x_1174_ = lean_string_utf8_extract_fast(v_str_1171_, v_startInclusive_1172_, v_endExclusive_1173_);
lean_dec(v_endExclusive_1173_);
lean_dec(v_startInclusive_1172_);
lean_dec_ref(v_str_1171_);
v___x_1175_ = lean_string_append(v_b_1165_, v___x_1174_);
lean_dec_ref(v___x_1174_);
v_a_1164_ = v_it_1167_;
v_b_1165_ = v___x_1175_;
goto _start;
}
v___jp_1177_:
{
lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
v___x_1179_ = lean_unsigned_to_nat(0u);
v___x_1180_ = lean_string_utf8_byte_size(v_replacement_1163_);
v___x_1181_ = lean_string_utf8_extract_fast(v_replacement_1163_, v___x_1179_, v___x_1180_);
v___x_1182_ = lean_string_append(v_b_1165_, v___x_1181_);
lean_dec_ref(v___x_1181_);
v_a_1164_ = v_it_1178_;
v_b_1165_ = v___x_1182_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg___boxed(lean_object* v_s_1275_, lean_object* v_replacement_1276_, lean_object* v_a_1277_, lean_object* v_b_1278_){
_start:
{
lean_object* v_res_1279_; 
v_res_1279_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1275_, v_replacement_1276_, v_a_1277_, v_b_1278_);
lean_dec_ref(v_replacement_1276_);
return v_res_1279_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1(void){
_start:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; 
v___x_1281_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__0));
v___x_1282_ = lean_string_utf8_byte_size(v___x_1281_);
return v___x_1282_;
}
}
static uint8_t _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__2(void){
_start:
{
lean_object* v___x_1283_; lean_object* v___x_1284_; uint8_t v___x_1285_; 
v___x_1283_ = lean_unsigned_to_nat(0u);
v___x_1284_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1);
v___x_1285_ = lean_nat_dec_eq(v___x_1284_, v___x_1283_);
return v___x_1285_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3(void){
_start:
{
lean_object* v___x_1286_; lean_object* v___x_1287_; lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1286_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__1);
v___x_1287_ = lean_unsigned_to_nat(0u);
v___x_1288_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__0));
v___x_1289_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1289_, 0, v___x_1288_);
lean_ctor_set(v___x_1289_, 1, v___x_1287_);
lean_ctor_set(v___x_1289_, 2, v___x_1286_);
return v___x_1289_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__4(void){
_start:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; 
v___x_1290_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3);
v___x_1291_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1290_);
return v___x_1291_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__5(void){
_start:
{
lean_object* v___x_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; 
v___x_1292_ = lean_unsigned_to_nat(0u);
v___x_1293_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__4, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__4_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__4);
v___x_1294_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__3);
v___x_1295_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1295_, 0, v___x_1294_);
lean_ctor_set(v___x_1295_, 1, v___x_1293_);
lean_ctor_set(v___x_1295_, 2, v___x_1292_);
lean_ctor_set(v___x_1295_, 3, v___x_1292_);
return v___x_1295_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg(lean_object* v_s_1298_, lean_object* v_replacement_1299_){
_start:
{
lean_object* v___x_1300_; uint8_t v___x_1301_; 
v___x_1300_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1));
v___x_1301_ = lean_uint8_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__2, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__2_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__2);
if (v___x_1301_ == 0)
{
lean_object* v___x_1302_; lean_object* v___x_1303_; 
v___x_1302_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__5, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__5_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__5);
v___x_1303_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1298_, v_replacement_1299_, v___x_1302_, v___x_1300_);
return v___x_1303_;
}
else
{
lean_object* v___x_1304_; lean_object* v___x_1305_; 
v___x_1304_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6));
v___x_1305_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1298_, v_replacement_1299_, v___x_1304_, v___x_1300_);
return v___x_1305_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___boxed(lean_object* v_s_1306_, lean_object* v_replacement_1307_){
_start:
{
lean_object* v_res_1308_; 
v_res_1308_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg(v_s_1306_, v_replacement_1307_);
lean_dec_ref(v_replacement_1307_);
return v_res_1308_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg(lean_object* v_k_1312_, lean_object* v_as_x27_1313_, lean_object* v_b_1314_){
_start:
{
if (lean_obj_tag(v_as_x27_1313_) == 0)
{
lean_dec(v_k_1312_);
return v_b_1314_;
}
else
{
lean_object* v_head_1315_; lean_object* v_tail_1316_; lean_object* v_fst_1317_; lean_object* v_snd_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; 
v_head_1315_ = lean_ctor_get(v_as_x27_1313_, 0);
v_tail_1316_ = lean_ctor_get(v_as_x27_1313_, 1);
v_fst_1317_ = lean_ctor_get(v_head_1315_, 0);
v_snd_1318_ = lean_ctor_get(v_head_1315_, 1);
v___x_1319_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__0));
lean_inc(v_k_1312_);
v___x_1320_ = l_Nat_reprFast(v_k_1312_);
v___x_1321_ = lean_string_append(v___x_1319_, v___x_1320_);
lean_dec_ref(v___x_1320_);
v___x_1322_ = ((lean_object*)(lp_choreo_Choreo_stressSource___lam__0___closed__1));
v___x_1323_ = lean_string_append(v___x_1321_, v___x_1322_);
lean_inc(v_snd_1318_);
v___x_1324_ = l_Nat_reprFast(v_snd_1318_);
v___x_1325_ = lean_string_append(v___x_1323_, v___x_1324_);
lean_dec_ref(v___x_1324_);
v___x_1326_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__1));
v___x_1327_ = lean_string_append(v___x_1325_, v___x_1326_);
lean_inc(v_fst_1317_);
v___x_1328_ = lp_choreo_Choreo_phaseL(v_fst_1317_);
v___x_1329_ = lean_string_append(v___x_1327_, v___x_1328_);
lean_dec_ref(v___x_1328_);
v___x_1330_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__2));
v___x_1331_ = lean_string_append(v___x_1329_, v___x_1330_);
v___x_1332_ = lean_string_append(v_b_1314_, v___x_1331_);
lean_dec_ref(v___x_1331_);
v_as_x27_1313_ = v_tail_1316_;
v_b_1314_ = v___x_1332_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___boxed(lean_object* v_k_1334_, lean_object* v_as_x27_1335_, lean_object* v_b_1336_){
_start:
{
lean_object* v_res_1337_; 
v_res_1337_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg(v_k_1334_, v_as_x27_1335_, v_b_1336_);
lean_dec(v_as_x27_1335_);
return v_res_1337_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1(void){
_start:
{
lean_object* v___x_1339_; lean_object* v___x_1340_; 
v___x_1339_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__0));
v___x_1340_ = lean_string_utf8_byte_size(v___x_1339_);
return v___x_1340_;
}
}
static uint8_t _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__2(void){
_start:
{
lean_object* v___x_1341_; lean_object* v___x_1342_; uint8_t v___x_1343_; 
v___x_1341_ = lean_unsigned_to_nat(0u);
v___x_1342_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1);
v___x_1343_ = lean_nat_dec_eq(v___x_1342_, v___x_1341_);
return v___x_1343_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3(void){
_start:
{
lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; 
v___x_1344_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__1);
v___x_1345_ = lean_unsigned_to_nat(0u);
v___x_1346_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__0));
v___x_1347_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1347_, 0, v___x_1346_);
lean_ctor_set(v___x_1347_, 1, v___x_1345_);
lean_ctor_set(v___x_1347_, 2, v___x_1344_);
return v___x_1347_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__4(void){
_start:
{
lean_object* v___x_1348_; lean_object* v___x_1349_; 
v___x_1348_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3);
v___x_1349_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1348_);
return v___x_1349_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__5(void){
_start:
{
lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; 
v___x_1350_ = lean_unsigned_to_nat(0u);
v___x_1351_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__4, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__4_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__4);
v___x_1352_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__3);
v___x_1353_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1353_, 0, v___x_1352_);
lean_ctor_set(v___x_1353_, 1, v___x_1351_);
lean_ctor_set(v___x_1353_, 2, v___x_1350_);
lean_ctor_set(v___x_1353_, 3, v___x_1350_);
return v___x_1353_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg(lean_object* v_s_1354_, lean_object* v_replacement_1355_){
_start:
{
lean_object* v___x_1356_; uint8_t v___x_1357_; 
v___x_1356_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1));
v___x_1357_ = lean_uint8_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__2, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__2_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__2);
if (v___x_1357_ == 0)
{
lean_object* v___x_1358_; lean_object* v___x_1359_; 
v___x_1358_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__5, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__5_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___closed__5);
v___x_1359_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1354_, v_replacement_1355_, v___x_1358_, v___x_1356_);
return v___x_1359_;
}
else
{
lean_object* v___x_1360_; lean_object* v___x_1361_; 
v___x_1360_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6));
v___x_1361_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1354_, v_replacement_1355_, v___x_1360_, v___x_1356_);
return v___x_1361_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg___boxed(lean_object* v_s_1362_, lean_object* v_replacement_1363_){
_start:
{
lean_object* v_res_1364_; 
v_res_1364_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg(v_s_1362_, v_replacement_1363_);
lean_dec_ref(v_replacement_1363_);
return v_res_1364_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1(void){
_start:
{
lean_object* v___x_1366_; lean_object* v___x_1367_; 
v___x_1366_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__0));
v___x_1367_ = lean_string_utf8_byte_size(v___x_1366_);
return v___x_1367_;
}
}
static uint8_t _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__2(void){
_start:
{
lean_object* v___x_1368_; lean_object* v___x_1369_; uint8_t v___x_1370_; 
v___x_1368_ = lean_unsigned_to_nat(0u);
v___x_1369_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1);
v___x_1370_ = lean_nat_dec_eq(v___x_1369_, v___x_1368_);
return v___x_1370_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3(void){
_start:
{
lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; 
v___x_1371_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__1);
v___x_1372_ = lean_unsigned_to_nat(0u);
v___x_1373_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__0));
v___x_1374_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1374_, 0, v___x_1373_);
lean_ctor_set(v___x_1374_, 1, v___x_1372_);
lean_ctor_set(v___x_1374_, 2, v___x_1371_);
return v___x_1374_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__4(void){
_start:
{
lean_object* v___x_1375_; lean_object* v___x_1376_; 
v___x_1375_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3);
v___x_1376_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1375_);
return v___x_1376_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__5(void){
_start:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; 
v___x_1377_ = lean_unsigned_to_nat(0u);
v___x_1378_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__4, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__4_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__4);
v___x_1379_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__3);
v___x_1380_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1380_, 0, v___x_1379_);
lean_ctor_set(v___x_1380_, 1, v___x_1378_);
lean_ctor_set(v___x_1380_, 2, v___x_1377_);
lean_ctor_set(v___x_1380_, 3, v___x_1377_);
return v___x_1380_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg(lean_object* v_s_1381_, lean_object* v_replacement_1382_){
_start:
{
lean_object* v___x_1383_; uint8_t v___x_1384_; 
v___x_1383_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1));
v___x_1384_ = lean_uint8_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__2, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__2_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__2);
if (v___x_1384_ == 0)
{
lean_object* v___x_1385_; lean_object* v___x_1386_; 
v___x_1385_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__5, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__5_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___closed__5);
v___x_1386_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1381_, v_replacement_1382_, v___x_1385_, v___x_1383_);
return v___x_1386_;
}
else
{
lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1387_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6));
v___x_1388_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1381_, v_replacement_1382_, v___x_1387_, v___x_1383_);
return v___x_1388_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg___boxed(lean_object* v_s_1389_, lean_object* v_replacement_1390_){
_start:
{
lean_object* v_res_1391_; 
v_res_1391_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg(v_s_1389_, v_replacement_1390_);
lean_dec_ref(v_replacement_1390_);
return v_res_1391_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_1393_; lean_object* v___x_1394_; 
v___x_1393_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__0));
v___x_1394_ = lean_string_utf8_byte_size(v___x_1393_);
return v___x_1394_;
}
}
static uint8_t _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__2(void){
_start:
{
lean_object* v___x_1395_; lean_object* v___x_1396_; uint8_t v___x_1397_; 
v___x_1395_ = lean_unsigned_to_nat(0u);
v___x_1396_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1);
v___x_1397_ = lean_nat_dec_eq(v___x_1396_, v___x_1395_);
return v___x_1397_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3(void){
_start:
{
lean_object* v___x_1398_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
v___x_1398_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__1);
v___x_1399_ = lean_unsigned_to_nat(0u);
v___x_1400_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__0));
v___x_1401_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1401_, 0, v___x_1400_);
lean_ctor_set(v___x_1401_, 1, v___x_1399_);
lean_ctor_set(v___x_1401_, 2, v___x_1398_);
return v___x_1401_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__4(void){
_start:
{
lean_object* v___x_1402_; lean_object* v___x_1403_; 
v___x_1402_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3);
v___x_1403_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1402_);
return v___x_1403_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__5(void){
_start:
{
lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; 
v___x_1404_ = lean_unsigned_to_nat(0u);
v___x_1405_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__4, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__4_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__4);
v___x_1406_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__3);
v___x_1407_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1407_, 0, v___x_1406_);
lean_ctor_set(v___x_1407_, 1, v___x_1405_);
lean_ctor_set(v___x_1407_, 2, v___x_1404_);
lean_ctor_set(v___x_1407_, 3, v___x_1404_);
return v___x_1407_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg(lean_object* v_s_1408_, lean_object* v_replacement_1409_){
_start:
{
lean_object* v___x_1410_; uint8_t v___x_1411_; 
v___x_1410_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1));
v___x_1411_ = lean_uint8_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__2, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__2_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__2);
if (v___x_1411_ == 0)
{
lean_object* v___x_1412_; lean_object* v___x_1413_; 
v___x_1412_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__5, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__5_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___closed__5);
v___x_1413_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1408_, v_replacement_1409_, v___x_1412_, v___x_1410_);
return v___x_1413_;
}
else
{
lean_object* v___x_1414_; lean_object* v___x_1415_; 
v___x_1414_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6));
v___x_1415_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1408_, v_replacement_1409_, v___x_1414_, v___x_1410_);
return v___x_1415_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg___boxed(lean_object* v_s_1416_, lean_object* v_replacement_1417_){
_start:
{
lean_object* v_res_1418_; 
v_res_1418_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg(v_s_1416_, v_replacement_1417_);
lean_dec_ref(v_replacement_1417_);
return v_res_1418_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1(void){
_start:
{
lean_object* v___x_1420_; lean_object* v___x_1421_; 
v___x_1420_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__0));
v___x_1421_ = lean_string_utf8_byte_size(v___x_1420_);
return v___x_1421_;
}
}
static uint8_t _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__2(void){
_start:
{
lean_object* v___x_1422_; lean_object* v___x_1423_; uint8_t v___x_1424_; 
v___x_1422_ = lean_unsigned_to_nat(0u);
v___x_1423_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1);
v___x_1424_ = lean_nat_dec_eq(v___x_1423_, v___x_1422_);
return v___x_1424_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3(void){
_start:
{
lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; 
v___x_1425_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__1);
v___x_1426_ = lean_unsigned_to_nat(0u);
v___x_1427_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__0));
v___x_1428_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1428_, 0, v___x_1427_);
lean_ctor_set(v___x_1428_, 1, v___x_1426_);
lean_ctor_set(v___x_1428_, 2, v___x_1425_);
return v___x_1428_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__4(void){
_start:
{
lean_object* v___x_1429_; lean_object* v___x_1430_; 
v___x_1429_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3);
v___x_1430_ = l_String_Slice_Pattern_ForwardSliceSearcher_buildTable(v___x_1429_);
return v___x_1430_;
}
}
static lean_object* _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__5(void){
_start:
{
lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; 
v___x_1431_ = lean_unsigned_to_nat(0u);
v___x_1432_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__4, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__4_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__4);
v___x_1433_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__3);
v___x_1434_ = lean_alloc_ctor(2, 4, 0);
lean_ctor_set(v___x_1434_, 0, v___x_1433_);
lean_ctor_set(v___x_1434_, 1, v___x_1432_);
lean_ctor_set(v___x_1434_, 2, v___x_1431_);
lean_ctor_set(v___x_1434_, 3, v___x_1431_);
return v___x_1434_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg(lean_object* v_s_1435_, lean_object* v_replacement_1436_){
_start:
{
lean_object* v___x_1437_; uint8_t v___x_1438_; 
v___x_1437_ = ((lean_object*)(lp_choreo_List_find_x3f___at___00Choreo_allMutationsOf_spec__11___closed__1));
v___x_1438_ = lean_uint8_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__2, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__2_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__2);
if (v___x_1438_ == 0)
{
lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1439_ = lean_obj_once(&lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__5, &lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__5_once, _init_lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___closed__5);
v___x_1440_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1435_, v_replacement_1436_, v___x_1439_, v___x_1437_);
return v___x_1440_;
}
else
{
lean_object* v___x_1441_; lean_object* v___x_1442_; 
v___x_1441_ = ((lean_object*)(lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg___closed__6));
v___x_1442_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1435_, v_replacement_1436_, v___x_1441_, v___x_1437_);
return v___x_1442_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg___boxed(lean_object* v_s_1443_, lean_object* v_replacement_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg(v_s_1443_, v_replacement_1444_);
lean_dec_ref(v_replacement_1444_);
return v_res_1445_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressSource(lean_object* v_m_1460_, lean_object* v_k_1461_){
_start:
{
lean_object* v_routine_1462_; lean_object* v_verdict_1463_; lean_object* v_cfg_1464_; lean_object* v_phases_1465_; lean_object* v_out_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v_phaseNames_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___f_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; 
v_routine_1462_ = lean_ctor_get(v_m_1460_, 5);
lean_inc_ref(v_routine_1462_);
v_verdict_1463_ = lean_ctor_get(v_m_1460_, 6);
lean_inc_ref(v_verdict_1463_);
lean_dec_ref(v_m_1460_);
v_cfg_1464_ = lean_ctor_get(v_routine_1462_, 0);
lean_inc_ref(v_cfg_1464_);
v_phases_1465_ = lean_ctor_get(v_routine_1462_, 1);
lean_inc(v_phases_1465_);
lean_dec_ref(v_routine_1462_);
v_out_1466_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__0));
v___x_1467_ = lean_unsigned_to_nat(0u);
v___x_1468_ = l_List_zipIdxTR___redArg(v_phases_1465_, v___x_1467_);
v___x_1469_ = lean_box(0);
v_phaseNames_1470_ = lp_choreo_List_mapTR_loop___at___00Choreo_stressSource_spec__0(v___x_1468_, v___x_1469_);
lean_inc(v_k_1461_);
v___x_1471_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg(v_k_1461_, v_phaseNames_1470_, v_out_1466_);
v___x_1472_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg___closed__0));
v___x_1473_ = l_Nat_reprFast(v_k_1461_);
lean_inc_ref(v___x_1473_);
v___f_1474_ = lean_alloc_closure((void*)(lp_choreo_Choreo_stressSource___lam__0___boxed), 2, 1);
lean_closure_set(v___f_1474_, 0, v___x_1473_);
v___x_1475_ = lean_string_append(v___x_1472_, v___x_1473_);
v___x_1476_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__1));
v___x_1477_ = lean_string_append(v___x_1475_, v___x_1476_);
v___x_1478_ = lp_choreo_Choreo_configL(v_cfg_1464_);
v___x_1479_ = lean_string_append(v___x_1477_, v___x_1478_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__2));
v___x_1481_ = lean_string_append(v___x_1479_, v___x_1480_);
v___x_1482_ = lp_choreo_Choreo_listL___redArg(v___f_1474_, v_phaseNames_1470_);
v___x_1483_ = lean_string_append(v___x_1481_, v___x_1482_);
lean_dec_ref(v___x_1482_);
v___x_1484_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__3));
v___x_1485_ = lean_string_append(v___x_1483_, v___x_1484_);
v___x_1486_ = lean_string_append(v___x_1471_, v___x_1485_);
lean_dec_ref(v___x_1485_);
v___x_1487_ = ((lean_object*)(lp_choreo_Choreo_stressSource___lam__0___closed__0));
v___x_1488_ = lean_string_append(v___x_1487_, v___x_1473_);
v___x_1489_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__4));
lean_inc_ref_n(v___x_1488_, 3);
v___x_1490_ = lean_string_append(v___x_1488_, v___x_1489_);
v___x_1491_ = lean_string_utf8_byte_size(v_verdict_1463_);
v___x_1492_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1492_, 0, v_verdict_1463_);
lean_ctor_set(v___x_1492_, 1, v___x_1467_);
lean_ctor_set(v___x_1492_, 2, v___x_1491_);
v___x_1493_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg(v___x_1492_, v___x_1490_);
lean_dec_ref(v___x_1490_);
v___x_1494_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__5));
v___x_1495_ = lean_string_append(v___x_1488_, v___x_1494_);
v___x_1496_ = lean_string_utf8_byte_size(v___x_1493_);
v___x_1497_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1497_, 0, v___x_1493_);
lean_ctor_set(v___x_1497_, 1, v___x_1467_);
lean_ctor_set(v___x_1497_, 2, v___x_1496_);
v___x_1498_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg(v___x_1497_, v___x_1495_);
lean_dec_ref(v___x_1495_);
v___x_1499_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__6));
v___x_1500_ = lean_string_append(v___x_1488_, v___x_1499_);
v___x_1501_ = lean_string_utf8_byte_size(v___x_1498_);
v___x_1502_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1502_, 0, v___x_1498_);
lean_ctor_set(v___x_1502_, 1, v___x_1467_);
lean_ctor_set(v___x_1502_, 2, v___x_1501_);
v___x_1503_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg(v___x_1502_, v___x_1500_);
lean_dec_ref(v___x_1500_);
v___x_1504_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__7));
v___x_1505_ = lean_string_append(v___x_1488_, v___x_1504_);
v___x_1506_ = lean_string_utf8_byte_size(v___x_1503_);
v___x_1507_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1507_, 0, v___x_1503_);
lean_ctor_set(v___x_1507_, 1, v___x_1467_);
lean_ctor_set(v___x_1507_, 2, v___x_1506_);
v___x_1508_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg(v___x_1507_, v___x_1505_);
lean_dec_ref(v___x_1505_);
v___x_1509_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__8));
v___x_1510_ = lean_string_append(v___x_1509_, v___x_1473_);
v___x_1511_ = ((lean_object*)(lp_choreo_Choreo_allMutationsOf___closed__28));
v___x_1512_ = lean_string_append(v___x_1510_, v___x_1511_);
v___x_1513_ = lean_string_utf8_byte_size(v___x_1508_);
v___x_1514_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1514_, 0, v___x_1508_);
lean_ctor_set(v___x_1514_, 1, v___x_1467_);
lean_ctor_set(v___x_1514_, 2, v___x_1513_);
v___x_1515_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg(v___x_1514_, v___x_1512_);
lean_dec_ref(v___x_1512_);
v___x_1516_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__9));
v___x_1517_ = lean_string_append(v___x_1516_, v___x_1473_);
v___x_1518_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__10));
v___x_1519_ = lean_string_append(v___x_1517_, v___x_1518_);
v___x_1520_ = lean_string_append(v___x_1519_, v___x_1515_);
lean_dec_ref(v___x_1515_);
v___x_1521_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__11));
v___x_1522_ = lean_string_append(v___x_1520_, v___x_1521_);
v___x_1523_ = lean_string_append(v___x_1522_, v___x_1473_);
lean_dec_ref(v___x_1473_);
v___x_1524_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__12));
v___x_1525_ = lean_string_append(v___x_1523_, v___x_1524_);
v___x_1526_ = lean_string_append(v___x_1486_, v___x_1525_);
lean_dec_ref(v___x_1525_);
v___x_1527_ = ((lean_object*)(lp_choreo_Choreo_stressSource___closed__13));
v___x_1528_ = lean_string_append(v___x_1526_, v___x_1527_);
return v___x_1528_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1(lean_object* v_k_1529_, lean_object* v_as_1530_, lean_object* v_as_x27_1531_, lean_object* v_b_1532_, lean_object* v_a_1533_){
_start:
{
lean_object* v___x_1534_; 
v___x_1534_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___redArg(v_k_1529_, v_as_x27_1531_, v_b_1532_);
return v___x_1534_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1___boxed(lean_object* v_k_1535_, lean_object* v_as_1536_, lean_object* v_as_x27_1537_, lean_object* v_b_1538_, lean_object* v_a_1539_){
_start:
{
lean_object* v_res_1540_; 
v_res_1540_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_stressSource_spec__1(v_k_1535_, v_as_1536_, v_as_x27_1537_, v_b_1538_, v_a_1539_);
lean_dec(v_as_x27_1537_);
lean_dec(v_as_1536_);
return v_res_1540_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2(lean_object* v_s_1541_, lean_object* v_pattern_1542_, lean_object* v_replacement_1543_){
_start:
{
lean_object* v___x_1544_; 
v___x_1544_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___redArg(v_s_1541_, v_replacement_1543_);
return v___x_1544_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2___boxed(lean_object* v_s_1545_, lean_object* v_pattern_1546_, lean_object* v_replacement_1547_){
_start:
{
lean_object* v_res_1548_; 
v_res_1548_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__2(v_s_1545_, v_pattern_1546_, v_replacement_1547_);
lean_dec_ref(v_replacement_1547_);
lean_dec_ref(v_pattern_1546_);
return v_res_1548_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3(lean_object* v_s_1549_, lean_object* v_pattern_1550_, lean_object* v_replacement_1551_){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___redArg(v_s_1549_, v_replacement_1551_);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3___boxed(lean_object* v_s_1553_, lean_object* v_pattern_1554_, lean_object* v_replacement_1555_){
_start:
{
lean_object* v_res_1556_; 
v_res_1556_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__3(v_s_1553_, v_pattern_1554_, v_replacement_1555_);
lean_dec_ref(v_replacement_1555_);
lean_dec_ref(v_pattern_1554_);
return v_res_1556_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4(lean_object* v_s_1557_, lean_object* v_pattern_1558_, lean_object* v_replacement_1559_){
_start:
{
lean_object* v___x_1560_; 
v___x_1560_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___redArg(v_s_1557_, v_replacement_1559_);
return v___x_1560_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4___boxed(lean_object* v_s_1561_, lean_object* v_pattern_1562_, lean_object* v_replacement_1563_){
_start:
{
lean_object* v_res_1564_; 
v_res_1564_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__4(v_s_1561_, v_pattern_1562_, v_replacement_1563_);
lean_dec_ref(v_replacement_1563_);
lean_dec_ref(v_pattern_1562_);
return v_res_1564_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5(lean_object* v_s_1565_, lean_object* v_pattern_1566_, lean_object* v_replacement_1567_){
_start:
{
lean_object* v___x_1568_; 
v___x_1568_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___redArg(v_s_1565_, v_replacement_1567_);
return v___x_1568_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5___boxed(lean_object* v_s_1569_, lean_object* v_pattern_1570_, lean_object* v_replacement_1571_){
_start:
{
lean_object* v_res_1572_; 
v_res_1572_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__5(v_s_1569_, v_pattern_1570_, v_replacement_1571_);
lean_dec_ref(v_replacement_1571_);
lean_dec_ref(v_pattern_1570_);
return v_res_1572_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6(lean_object* v_s_1573_, lean_object* v_pattern_1574_, lean_object* v_replacement_1575_){
_start:
{
lean_object* v___x_1576_; 
v___x_1576_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___redArg(v_s_1573_, v_replacement_1575_);
return v___x_1576_;
}
}
LEAN_EXPORT lean_object* lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6___boxed(lean_object* v_s_1577_, lean_object* v_pattern_1578_, lean_object* v_replacement_1579_){
_start:
{
lean_object* v_res_1580_; 
v_res_1580_ = lp_choreo_String_Slice_replace___at___00Choreo_stressSource_spec__6(v_s_1577_, v_pattern_1578_, v_replacement_1579_);
lean_dec_ref(v_replacement_1579_);
lean_dec_ref(v_pattern_1578_);
return v_res_1580_;
}
}
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2(lean_object* v_s_1581_, lean_object* v_replacement_1582_, lean_object* v_inst_1583_, lean_object* v_R_1584_, lean_object* v_a_1585_, lean_object* v_b_1586_, lean_object* v_c_1587_){
_start:
{
lean_object* v___x_1588_; 
v___x_1588_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___redArg(v_s_1581_, v_replacement_1582_, v_a_1585_, v_b_1586_);
return v___x_1588_;
}
}
LEAN_EXPORT lean_object* lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2___boxed(lean_object* v_s_1589_, lean_object* v_replacement_1590_, lean_object* v_inst_1591_, lean_object* v_R_1592_, lean_object* v_a_1593_, lean_object* v_b_1594_, lean_object* v_c_1595_){
_start:
{
lean_object* v_res_1596_; 
v_res_1596_ = lp_choreo_WellFounded_opaqueFix_u2083___at___00String_Slice_replace___at___00Choreo_stressSource_spec__2_spec__2(v_s_1589_, v_replacement_1590_, v_inst_1591_, v_R_1592_, v_a_1593_, v_b_1594_, v_c_1595_);
lean_dec_ref(v_replacement_1590_);
return v_res_1596_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0(lean_object* v_a_1606_, lean_object* v_a_1607_){
_start:
{
if (lean_obj_tag(v_a_1606_) == 0)
{
lean_object* v___x_1608_; 
v___x_1608_ = l_List_reverse___redArg(v_a_1607_);
return v___x_1608_;
}
else
{
lean_object* v_head_1609_; lean_object* v_fst_1610_; lean_object* v_tail_1611_; lean_object* v___x_1613_; uint8_t v_isShared_1614_; uint8_t v_isSharedCheck_1671_; 
v_head_1609_ = lean_ctor_get(v_a_1606_, 0);
lean_inc(v_head_1609_);
v_fst_1610_ = lean_ctor_get(v_head_1609_, 0);
lean_inc(v_fst_1610_);
v_tail_1611_ = lean_ctor_get(v_a_1606_, 1);
v_isSharedCheck_1671_ = !lean_is_exclusive(v_a_1606_);
if (v_isSharedCheck_1671_ == 0)
{
lean_object* v_unused_1672_; 
v_unused_1672_ = lean_ctor_get(v_a_1606_, 0);
lean_dec(v_unused_1672_);
v___x_1613_ = v_a_1606_;
v_isShared_1614_ = v_isSharedCheck_1671_;
goto v_resetjp_1612_;
}
else
{
lean_inc(v_tail_1611_);
lean_dec(v_a_1606_);
v___x_1613_ = lean_box(0);
v_isShared_1614_ = v_isSharedCheck_1671_;
goto v_resetjp_1612_;
}
v_resetjp_1612_:
{
lean_object* v_snd_1615_; lean_object* v___x_1617_; uint8_t v_isShared_1618_; uint8_t v_isSharedCheck_1669_; 
v_snd_1615_ = lean_ctor_get(v_head_1609_, 1);
v_isSharedCheck_1669_ = !lean_is_exclusive(v_head_1609_);
if (v_isSharedCheck_1669_ == 0)
{
lean_object* v_unused_1670_; 
v_unused_1670_ = lean_ctor_get(v_head_1609_, 0);
lean_dec(v_unused_1670_);
v___x_1617_ = v_head_1609_;
v_isShared_1618_ = v_isSharedCheck_1669_;
goto v_resetjp_1616_;
}
else
{
lean_inc(v_snd_1615_);
lean_dec(v_head_1609_);
v___x_1617_ = lean_box(0);
v_isShared_1618_ = v_isSharedCheck_1669_;
goto v_resetjp_1616_;
}
v_resetjp_1616_:
{
lean_object* v_title_1619_; lean_object* v_what_1620_; lean_object* v_family_1621_; lean_object* v_tier_1622_; lean_object* v_catches_1623_; lean_object* v_verdict_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1629_; 
v_title_1619_ = lean_ctor_get(v_fst_1610_, 0);
lean_inc_ref(v_title_1619_);
v_what_1620_ = lean_ctor_get(v_fst_1610_, 1);
lean_inc_ref(v_what_1620_);
v_family_1621_ = lean_ctor_get(v_fst_1610_, 2);
lean_inc_ref(v_family_1621_);
v_tier_1622_ = lean_ctor_get(v_fst_1610_, 3);
lean_inc_ref(v_tier_1622_);
v_catches_1623_ = lean_ctor_get(v_fst_1610_, 4);
lean_inc_ref(v_catches_1623_);
v_verdict_1624_ = lean_ctor_get(v_fst_1610_, 6);
lean_inc_ref(v_verdict_1624_);
lean_dec(v_fst_1610_);
v___x_1625_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__0));
lean_inc(v_snd_1615_);
v___x_1626_ = l_Lean_JsonNumber_fromNat(v_snd_1615_);
v___x_1627_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1626_);
if (v_isShared_1618_ == 0)
{
lean_ctor_set(v___x_1617_, 1, v___x_1627_);
lean_ctor_set(v___x_1617_, 0, v___x_1625_);
v___x_1629_ = v___x_1617_;
goto v_reusejp_1628_;
}
else
{
lean_object* v_reuseFailAlloc_1668_; 
v_reuseFailAlloc_1668_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1668_, 0, v___x_1625_);
lean_ctor_set(v_reuseFailAlloc_1668_, 1, v___x_1627_);
v___x_1629_ = v_reuseFailAlloc_1668_;
goto v_reusejp_1628_;
}
v_reusejp_1628_:
{
lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1656_; 
v___x_1630_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__1));
v___x_1631_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1631_, 0, v_title_1619_);
v___x_1632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1632_, 0, v___x_1630_);
lean_ctor_set(v___x_1632_, 1, v___x_1631_);
v___x_1633_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__2));
v___x_1634_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1634_, 0, v_what_1620_);
v___x_1635_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1635_, 0, v___x_1633_);
lean_ctor_set(v___x_1635_, 1, v___x_1634_);
v___x_1636_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__3));
v___x_1637_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1637_, 0, v_family_1621_);
v___x_1638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1638_, 0, v___x_1636_);
lean_ctor_set(v___x_1638_, 1, v___x_1637_);
v___x_1639_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__4));
v___x_1640_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1640_, 0, v_tier_1622_);
v___x_1641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1641_, 0, v___x_1639_);
lean_ctor_set(v___x_1641_, 1, v___x_1640_);
v___x_1642_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__5));
v___x_1643_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1643_, 0, v_catches_1623_);
v___x_1644_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1644_, 0, v___x_1642_);
lean_ctor_set(v___x_1644_, 1, v___x_1643_);
v___x_1645_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__6));
v___x_1646_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__7));
v___x_1647_ = l_Nat_reprFast(v_snd_1615_);
v___x_1648_ = lean_string_append(v___x_1646_, v___x_1647_);
lean_dec_ref(v___x_1647_);
v___x_1649_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1649_, 0, v___x_1648_);
v___x_1650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1650_, 0, v___x_1645_);
lean_ctor_set(v___x_1650_, 1, v___x_1649_);
v___x_1651_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0___closed__8));
v___x_1652_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1652_, 0, v_verdict_1624_);
v___x_1653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1653_, 0, v___x_1651_);
lean_ctor_set(v___x_1653_, 1, v___x_1652_);
v___x_1654_ = lean_box(0);
if (v_isShared_1614_ == 0)
{
lean_ctor_set(v___x_1613_, 1, v___x_1654_);
lean_ctor_set(v___x_1613_, 0, v___x_1653_);
v___x_1656_ = v___x_1613_;
goto v_reusejp_1655_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1653_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v___x_1654_);
v___x_1656_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1655_;
}
v_reusejp_1655_:
{
lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1665_; 
v___x_1657_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1657_, 0, v___x_1650_);
lean_ctor_set(v___x_1657_, 1, v___x_1656_);
v___x_1658_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1658_, 0, v___x_1644_);
lean_ctor_set(v___x_1658_, 1, v___x_1657_);
v___x_1659_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1659_, 0, v___x_1641_);
lean_ctor_set(v___x_1659_, 1, v___x_1658_);
v___x_1660_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1660_, 0, v___x_1638_);
lean_ctor_set(v___x_1660_, 1, v___x_1659_);
v___x_1661_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1661_, 0, v___x_1635_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
v___x_1662_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1632_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1629_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = l_Lean_Json_mkObj(v___x_1663_);
lean_dec_ref_known(v___x_1663_, 2);
v___x_1665_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1665_, 0, v___x_1664_);
lean_ctor_set(v___x_1665_, 1, v_a_1607_);
v_a_1606_ = v_tail_1611_;
v_a_1607_ = v___x_1665_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_stressJson(lean_object* v_ms_1673_){
_start:
{
lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; lean_object* v___x_1679_; 
v___x_1674_ = lean_unsigned_to_nat(0u);
v___x_1675_ = l_List_zipIdxTR___redArg(v_ms_1673_, v___x_1674_);
v___x_1676_ = lean_box(0);
v___x_1677_ = lp_choreo_List_mapTR_loop___at___00Choreo_stressJson_spec__0(v___x_1675_, v___x_1676_);
v___x_1678_ = lean_array_mk(v___x_1677_);
v___x_1679_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1679_, 0, v___x_1678_);
return v___x_1679_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Emit(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Stress(uint8_t builtin) {
lean_object * res;
if (_G_initialized) return lean_io_result_mk_ok(lean_box(0));
_G_initialized = true;
lean_initialize();
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Emit(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_Choreo_instInhabitedPhase = _init_lp_choreo_Choreo_instInhabitedPhase();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedPhase);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
