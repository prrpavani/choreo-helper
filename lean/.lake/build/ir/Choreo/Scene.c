// Lean compiler output
// Module: Choreo.Scene
// Imports: public import Init public meta import Init public import Choreo.Planner
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
lean_object* lean_array_to_list(lean_object*);
lean_object* l_String_splitOnAux(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_addDrafts_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_List_range(lean_object*);
extern lean_object* lp_choreo_Choreo_stageRect;
extern lean_object* lp_choreo_Choreo_instInhabitedPt_default;
uint8_t lean_int_dec_le(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_instDecidableEqPt_decEq(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileWay_spec__0(lean_object*, lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_linksFor(lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_choreo_Choreo_distSq(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_isqrt(lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_curvePath(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_beatsFor(lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_wayDrafts(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_List_zipWith___at___00List_zip_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_wayDraftsAll_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_maxDist(lean_object*, lean_object*);
extern lean_object* lp_choreo_Choreo_dminMM;
lean_object* l_List_drop___redArg(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lp_choreo_Choreo_stepDrafts(lean_object*, lean_object*, lean_object*, lean_object*, uint8_t);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* l_List_range_x27TR_go(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lp_choreo_List_elem___at___00Choreo_scan_spec__1(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_wordNumber(lean_object*);
lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildPlanOnce_spec__8(lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildPlanOnce_spec__7(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
extern lean_object* lp_choreo_Choreo_vmaxMM;
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_chooseIdea_spec__0(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_List_foldl___at___00Choreo_buildPlanOnce_spec__6(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_List_foldl___at___00Choreo_stepDrafts_spec__7(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_stepsForGenre(lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lp_choreo_List_foldrTR___at___00Choreo_sortBy_x27_spec__1(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_tokenize(lean_object*);
lean_object* lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__1(lean_object*, lean_object*);
lean_object* lean_string_utf8_set(lean_object*, lean_object*, uint32_t);
lean_object* l_Char_utf8Size(uint32_t);
uint32_t lean_string_utf8_get_fast(lean_object*, lean_object*);
uint8_t lean_uint32_dec_eq(uint32_t, uint32_t);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_colX___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_colX___closed__0;
static lean_once_cell_t lp_choreo_Choreo_colX___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_colX___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_colX(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_rowY___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rowY___closed__0;
static lean_once_cell_t lp_choreo_Choreo_rowY___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rowY___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowY(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_wingStep;
static lean_once_cell_t lp_choreo_Choreo_wingStart___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_wingStart___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_wingStart;
static lean_once_cell_t lp_choreo_Choreo_sceneEnvelope___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sceneEnvelope___closed__0;
static lean_once_cell_t lp_choreo_Choreo_sceneEnvelope___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sceneEnvelope___closed__1;
static lean_once_cell_t lp_choreo_Choreo_sceneEnvelope___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sceneEnvelope___closed__2;
static lean_once_cell_t lp_choreo_Choreo_sceneEnvelope___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sceneEnvelope___closed__3;
static lean_once_cell_t lp_choreo_Choreo_sceneEnvelope___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_sceneEnvelope___closed__4;
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneEnvelope;
static lean_once_cell_t lp_choreo_Choreo_slWingRect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_slWingRect___closed__0;
static lean_once_cell_t lp_choreo_Choreo_slWingRect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_slWingRect___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_slWingRect;
static lean_once_cell_t lp_choreo_Choreo_srWingRect___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_srWingRect___closed__0;
static lean_once_cell_t lp_choreo_Choreo_srWingRect___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_srWingRect___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_srWingRect;
LEAN_EXPORT uint8_t lp_choreo_Choreo_Pt_onStage(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_onStage___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_rowLetters___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "A"};
static const lean_object* lp_choreo_Choreo_rowLetters___closed__0 = (const lean_object*)&lp_choreo_Choreo_rowLetters___closed__0_value;
static const lean_string_object lp_choreo_Choreo_rowLetters___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "B"};
static const lean_object* lp_choreo_Choreo_rowLetters___closed__1 = (const lean_object*)&lp_choreo_Choreo_rowLetters___closed__1_value;
static const lean_string_object lp_choreo_Choreo_rowLetters___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "C"};
static const lean_object* lp_choreo_Choreo_rowLetters___closed__2 = (const lean_object*)&lp_choreo_Choreo_rowLetters___closed__2_value;
static const lean_string_object lp_choreo_Choreo_rowLetters___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "D"};
static const lean_object* lp_choreo_Choreo_rowLetters___closed__3 = (const lean_object*)&lp_choreo_Choreo_rowLetters___closed__3_value;
static const lean_string_object lp_choreo_Choreo_rowLetters___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "E"};
static const lean_object* lp_choreo_Choreo_rowLetters___closed__4 = (const lean_object*)&lp_choreo_Choreo_rowLetters___closed__4_value;
static const lean_array_object lp_choreo_Choreo_rowLetters___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*5, .m_other = 0, .m_tag = 246}, .m_size = 5, .m_capacity = 5, .m_data = {((lean_object*)&lp_choreo_Choreo_rowLetters___closed__0_value),((lean_object*)&lp_choreo_Choreo_rowLetters___closed__1_value),((lean_object*)&lp_choreo_Choreo_rowLetters___closed__2_value),((lean_object*)&lp_choreo_Choreo_rowLetters___closed__3_value),((lean_object*)&lp_choreo_Choreo_rowLetters___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_rowLetters___closed__5 = (const lean_object*)&lp_choreo_Choreo_rowLetters___closed__5_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_rowLetters = (const lean_object*)&lp_choreo_Choreo_rowLetters___closed__5_value;
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rowName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rowName_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_rowName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rowName___closed__0;
static const lean_string_object lp_choreo_Choreo_rowName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "A row"};
static const lean_object* lp_choreo_Choreo_rowName___closed__1 = (const lean_object*)&lp_choreo_Choreo_rowName___closed__1_value;
static lean_once_cell_t lp_choreo_Choreo_rowName___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_rowName___closed__2;
static const lean_string_object lp_choreo_Choreo_rowName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Row \?"};
static const lean_object* lp_choreo_Choreo_rowName___closed__3 = (const lean_object*)&lp_choreo_Choreo_rowName___closed__3_value;
static const lean_string_object lp_choreo_Choreo_rowName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Row "};
static const lean_object* lp_choreo_Choreo_rowName___closed__4 = (const lean_object*)&lp_choreo_Choreo_rowName___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowName(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowName___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_colName_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_colName_spec__0___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_colName___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_colName___closed__0;
static const lean_string_object lp_choreo_Choreo_colName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "A column"};
static const lean_object* lp_choreo_Choreo_colName___closed__1 = (const lean_object*)&lp_choreo_Choreo_colName___closed__1_value;
static const lean_string_object lp_choreo_Choreo_colName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Column "};
static const lean_object* lp_choreo_Choreo_colName___closed__2 = (const lean_object*)&lp_choreo_Choreo_colName___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_colName(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_colName___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_sortBy(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_evenStep_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_evenStep_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_evenStep(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_elem___at___00Choreo_groupsBy_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_elem___at___00Choreo_groupsBy_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_groupsBy_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_groupsBy_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_groupsBy_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_groupsBy_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsBy(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsBy___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__1(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__1___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00List_all___at___00Choreo_rulesOfFrame_spec__7_spec__12(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00List_all___at___00Choreo_rulesOfFrame_spec__7_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_rulesOfFrame_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_rulesOfFrame_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_rulesOfFrame_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_rulesOfFrame_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "line"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_closure_object lp_choreo_Choreo_rulesOfFrame___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_rulesOfFrame___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_rulesOfFrame___closed__0 = (const lean_object*)&lp_choreo_Choreo_rulesOfFrame___closed__0_value;
static const lean_closure_object lp_choreo_Choreo_rulesOfFrame___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_rulesOfFrame___lam__1___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_rulesOfFrame___closed__1 = (const lean_object*)&lp_choreo_Choreo_rulesOfFrame___closed__1_value;
static const lean_array_object lp_choreo_Choreo_rulesOfFrame___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_rulesOfFrame___closed__2 = (const lean_object*)&lp_choreo_Choreo_rulesOfFrame___closed__2_value;
static const lean_string_object lp_choreo_Choreo_rulesOfFrame___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "Left-right symmetry"};
static const lean_object* lp_choreo_Choreo_rulesOfFrame___closed__3 = (const lean_object*)&lp_choreo_Choreo_rulesOfFrame___closed__3_value;
static const lean_string_object lp_choreo_Choreo_rulesOfFrame___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mirror"};
static const lean_object* lp_choreo_Choreo_rulesOfFrame___closed__4 = (const lean_object*)&lp_choreo_Choreo_rulesOfFrame___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_detectRules_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_detectRules(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_isStill(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_isStill___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_nameList_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_nameList___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_choreo_Choreo_nameList___closed__0 = (const lean_object*)&lp_choreo_Choreo_nameList___closed__0_value;
static const lean_string_object lp_choreo_Choreo_nameList___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_choreo_Choreo_nameList___closed__1 = (const lean_object*)&lp_choreo_Choreo_nameList___closed__1_value;
static const lean_string_object lp_choreo_Choreo_nameList___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* lp_choreo_Choreo_nameList___closed__2 = (const lean_object*)&lp_choreo_Choreo_nameList___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_nameList(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_transition_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_transition_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stage"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Everyone stays on stage"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_transition_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_transition_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_transition___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shape"};
static const lean_object* lp_choreo_Choreo_transition___closed__0 = (const lean_object*)&lp_choreo_Choreo_transition___closed__0_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "Everyone lands on their place in formation "};
static const lean_object* lp_choreo_Choreo_transition___closed__1 = (const lean_object*)&lp_choreo_Choreo_transition___closed__1_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = " hold their exact shape while the others move"};
static const lean_object* lp_choreo_Choreo_transition___closed__2 = (const lean_object*)&lp_choreo_Choreo_transition___closed__2_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " offstage in the stage right wing"};
static const lean_object* lp_choreo_Choreo_transition___closed__3 = (const lean_object*)&lp_choreo_Choreo_transition___closed__3_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "end"};
static const lean_object* lp_choreo_Choreo_transition___closed__4 = (const lean_object*)&lp_choreo_Choreo_transition___closed__4_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_choreo_Choreo_transition___closed__5 = (const lean_object*)&lp_choreo_Choreo_transition___closed__5_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "finish"};
static const lean_object* lp_choreo_Choreo_transition___closed__6 = (const lean_object*)&lp_choreo_Choreo_transition___closed__6_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "finishes"};
static const lean_object* lp_choreo_Choreo_transition___closed__7 = (const lean_object*)&lp_choreo_Choreo_transition___closed__7_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = " offstage in the stage left wing"};
static const lean_object* lp_choreo_Choreo_transition___closed__8 = (const lean_object*)&lp_choreo_Choreo_transition___closed__8_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " on stage"};
static const lean_object* lp_choreo_Choreo_transition___closed__9 = (const lean_object*)&lp_choreo_Choreo_transition___closed__9_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " in and "};
static const lean_object* lp_choreo_Choreo_transition___closed__10 = (const lean_object*)&lp_choreo_Choreo_transition___closed__10_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "land"};
static const lean_object* lp_choreo_Choreo_transition___closed__11 = (const lean_object*)&lp_choreo_Choreo_transition___closed__11_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lands"};
static const lean_object* lp_choreo_Choreo_transition___closed__12 = (const lean_object*)&lp_choreo_Choreo_transition___closed__12_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "come"};
static const lean_object* lp_choreo_Choreo_transition___closed__13 = (const lean_object*)&lp_choreo_Choreo_transition___closed__13_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "comes"};
static const lean_object* lp_choreo_Choreo_transition___closed__14 = (const lean_object*)&lp_choreo_Choreo_transition___closed__14_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_choreo_Choreo_transition___closed__15 = (const lean_object*)&lp_choreo_Choreo_transition___closed__15_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "starts"};
static const lean_object* lp_choreo_Choreo_transition___closed__16 = (const lean_object*)&lp_choreo_Choreo_transition___closed__16_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "walk"};
static const lean_object* lp_choreo_Choreo_transition___closed__17 = (const lean_object*)&lp_choreo_Choreo_transition___closed__17_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " in"};
static const lean_object* lp_choreo_Choreo_transition___closed__18 = (const lean_object*)&lp_choreo_Choreo_transition___closed__18_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "leave"};
static const lean_object* lp_choreo_Choreo_transition___closed__19 = (const lean_object*)&lp_choreo_Choreo_transition___closed__19_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "leaves"};
static const lean_object* lp_choreo_Choreo_transition___closed__20 = (const lean_object*)&lp_choreo_Choreo_transition___closed__20_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Move to formation "};
static const lean_object* lp_choreo_Choreo_transition___closed__21 = (const lean_object*)&lp_choreo_Choreo_transition___closed__21_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "enter"};
static const lean_object* lp_choreo_Choreo_transition___closed__22 = (const lean_object*)&lp_choreo_Choreo_transition___closed__22_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "exit"};
static const lean_object* lp_choreo_Choreo_transition___closed__23 = (const lean_object*)&lp_choreo_Choreo_transition___closed__23_value;
static const lean_string_object lp_choreo_Choreo_transition___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "form"};
static const lean_object* lp_choreo_Choreo_transition___closed__24 = (const lean_object*)&lp_choreo_Choreo_transition___closed__24_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_ruleAsks___lam__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 51, .m_capacity = 51, .m_length = 50, .m_data = ": every dancer has a partner at their mirror image"};
static const lean_object* lp_choreo_Choreo_ruleAsks___lam__0___closed__0 = (const lean_object*)&lp_choreo_Choreo_ruleAsks___lam__0___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_ruleAsks___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_ruleAsks_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_ruleAsks_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_ruleAsks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = " stays straight and evenly spaced while the others move"};
static const lean_object* lp_choreo_Choreo_ruleAsks___closed__0 = (const lean_object*)&lp_choreo_Choreo_ruleAsks___closed__0_value;
static const lean_string_object lp_choreo_Choreo_ruleAsks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = " stays straight and evenly spaced while held"};
static const lean_object* lp_choreo_Choreo_ruleAsks___closed__1 = (const lean_object*)&lp_choreo_Choreo_ruleAsks___closed__1_value;
static const lean_string_object lp_choreo_Choreo_ruleAsks___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = " lands straight and evenly spaced"};
static const lean_object* lp_choreo_Choreo_ruleAsks___closed__2 = (const lean_object*)&lp_choreo_Choreo_ruleAsks___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_ruleAsks(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneBeats;
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__11(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__4(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(lean_object*, lean_object*);
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 66, .m_capacity = 66, .m_length = 65, .m_data = "While dancing in place, everyone on stage keeps their exact shape"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5___closed__0 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__7(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__7___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 46, .m_capacity = 46, .m_length = 45, .m_data = "Everyone starts on their place in formation 1"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__0 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__0_value;
static const lean_closure_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_Pt_onStage___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__1 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__1_value;
static const lean_array_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__2 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__10(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__12(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_buildScene_spec__13_spec__14(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_buildScene_spec__13_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_buildScene___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Bollywood fusion"};
static const lean_object* lp_choreo_Choreo_buildScene___closed__0 = (const lean_object*)&lp_choreo_Choreo_buildScene___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_buildScene___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_buildScene___closed__1 = (const lean_object*)&lp_choreo_Choreo_buildScene___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_buildScene___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_buildScene___closed__1_value)}};
static const lean_object* lp_choreo_Choreo_buildScene___closed__2 = (const lean_object*)&lp_choreo_Choreo_buildScene___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildScene(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_rowOfLetter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "a"};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__0 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__0_value;
static const lean_string_object lp_choreo_Choreo_rowOfLetter___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "b"};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__1 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__1_value;
static const lean_string_object lp_choreo_Choreo_rowOfLetter___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "c"};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__2 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__2_value;
static const lean_string_object lp_choreo_Choreo_rowOfLetter___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "d"};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__3 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__3_value;
static const lean_string_object lp_choreo_Choreo_rowOfLetter___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "e"};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__4 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_rowOfLetter___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__5 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__5_value;
static const lean_ctor_object lp_choreo_Choreo_rowOfLetter___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__6 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_rowOfLetter___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__7 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__7_value;
static const lean_ctor_object lp_choreo_Choreo_rowOfLetter___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__8 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_rowOfLetter___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_rowOfLetter___closed__9 = (const lean_object*)&lp_choreo_Choreo_rowOfLetter___closed__9_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowOfLetter(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowOfLetter___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_readClause_rowAfter___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "row"};
static const lean_object* lp_choreo_Choreo_readClause_rowAfter___closed__0 = (const lean_object*)&lp_choreo_Choreo_readClause_rowAfter___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause_rowAfter(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause_rowAfter___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_readClause_hasPair(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause_hasPair___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_readClause_spec__0(lean_object*);
static const lean_string_object lp_choreo_Choreo_readClause___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "on"};
static const lean_object* lp_choreo_Choreo_readClause___closed__0 = (const lean_object*)&lp_choreo_Choreo_readClause___closed__0_value;
static const lean_string_object lp_choreo_Choreo_readClause___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* lp_choreo_Choreo_readClause___closed__1 = (const lean_object*)&lp_choreo_Choreo_readClause___closed__1_value;
static const lean_string_object lp_choreo_Choreo_readClause___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* lp_choreo_Choreo_readClause___closed__2 = (const lean_object*)&lp_choreo_Choreo_readClause___closed__2_value;
static const lean_string_object lp_choreo_Choreo_readClause___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "onstage"};
static const lean_object* lp_choreo_Choreo_readClause___closed__3 = (const lean_object*)&lp_choreo_Choreo_readClause___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_looksLikeScene(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_looksLikeScene___boxed(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_spreadCols___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_spreadCols___closed__0;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(9) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__1 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__1_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__2 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__3 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__3_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__3_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__4 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__4_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__4_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__5 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__5_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__5_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__6 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__6_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__6_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__7 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__7_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__7_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__8 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__8_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(8) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__9 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__9_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__9_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__10 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__10_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__10_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__11 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__11_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__11_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__12 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__12_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__12_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__13 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__13_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__13_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__14 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__14_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__14_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__15 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__15_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__11_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__16 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__16_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__16_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__17 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__17_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__17_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__18 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__18_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__1_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__19 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__19_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__19_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__20 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__20_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__20_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__21 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__21_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__21_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__22 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__22_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__9_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__23 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__23_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__23_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__24 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__24_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(2) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__24_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__25 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__25_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(7) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__26 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__26_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__26_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__27 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__27_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(3) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__27_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__28 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__28_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(6) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__29 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__29_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_spreadCols___closed__29_value)}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__30 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__30_value;
static const lean_ctor_object lp_choreo_Choreo_spreadCols___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(5) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_spreadCols___closed__31 = (const lean_object*)&lp_choreo_Choreo_spreadCols___closed__31_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_spreadCols(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_spreadCols___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_splitClauses_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_String_mapAux___at___00Choreo_splitClauses_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " then "};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__0 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__0_value;
static const lean_array_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__1 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_splitClauses_spec__3(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_splitClauses___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "|"};
static const lean_object* lp_choreo_Choreo_splitClauses___closed__0 = (const lean_object*)&lp_choreo_Choreo_splitClauses___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitClauses(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__13(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_parseScene_spec__11_spec__12(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__11(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__14(lean_object*, uint8_t, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__14___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_parseScene_spec__10_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__10(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__12(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__0 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__0_value;
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__1;
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16(lean_object*, lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__17(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__18(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parseScene_spec__19(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parseScene_spec__19___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_parseScene_spec__15(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_parseScene_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__4(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__4___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__6(lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_parseScene___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_parseScene___closed__0 = (const lean_object*)&lp_choreo_Choreo_parseScene___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_parseScene(lean_object*);
static lean_object* _init_lp_choreo_Choreo_colX___closed__0(void){
_start:
{
lean_object* v___x_1_; lean_object* v___x_2_; 
v___x_1_ = lean_unsigned_to_nat(5u);
v___x_2_ = lean_nat_to_int(v___x_1_);
return v___x_2_;
}
}
static lean_object* _init_lp_choreo_Choreo_colX___closed__1(void){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lean_unsigned_to_nat(1200u);
v___x_4_ = lean_nat_to_int(v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_colX(lean_object* v_c_5_){
_start:
{
lean_object* v___x_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_6_ = lean_nat_to_int(v_c_5_);
v___x_7_ = lean_obj_once(&lp_choreo_Choreo_colX___closed__0, &lp_choreo_Choreo_colX___closed__0_once, _init_lp_choreo_Choreo_colX___closed__0);
v___x_8_ = lean_int_sub(v___x_6_, v___x_7_);
lean_dec(v___x_6_);
v___x_9_ = lean_obj_once(&lp_choreo_Choreo_colX___closed__1, &lp_choreo_Choreo_colX___closed__1_once, _init_lp_choreo_Choreo_colX___closed__1);
v___x_10_ = lean_int_mul(v___x_8_, v___x_9_);
lean_dec(v___x_8_);
return v___x_10_;
}
}
static lean_object* _init_lp_choreo_Choreo_rowY___closed__0(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_unsigned_to_nat(7000u);
v___x_12_ = lean_nat_to_int(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_lp_choreo_Choreo_rowY___closed__1(void){
_start:
{
lean_object* v___x_13_; lean_object* v___x_14_; 
v___x_13_ = lean_unsigned_to_nat(1500u);
v___x_14_ = lean_nat_to_int(v___x_13_);
return v___x_14_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowY(lean_object* v_r_15_){
_start:
{
lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; lean_object* v___x_19_; lean_object* v___x_20_; 
v___x_16_ = lean_obj_once(&lp_choreo_Choreo_rowY___closed__0, &lp_choreo_Choreo_rowY___closed__0_once, _init_lp_choreo_Choreo_rowY___closed__0);
v___x_17_ = lean_nat_to_int(v_r_15_);
v___x_18_ = lean_obj_once(&lp_choreo_Choreo_rowY___closed__1, &lp_choreo_Choreo_rowY___closed__1_once, _init_lp_choreo_Choreo_rowY___closed__1);
v___x_19_ = lean_int_mul(v___x_17_, v___x_18_);
lean_dec(v___x_17_);
v___x_20_ = lean_int_sub(v___x_16_, v___x_19_);
lean_dec(v___x_19_);
return v___x_20_;
}
}
static lean_object* _init_lp_choreo_Choreo_wingStep(void){
_start:
{
lean_object* v___x_21_; 
v___x_21_ = lean_obj_once(&lp_choreo_Choreo_colX___closed__1, &lp_choreo_Choreo_colX___closed__1_once, _init_lp_choreo_Choreo_colX___closed__1);
return v___x_21_;
}
}
static lean_object* _init_lp_choreo_Choreo_wingStart___closed__0(void){
_start:
{
lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_22_ = lean_unsigned_to_nat(6900u);
v___x_23_ = lean_nat_to_int(v___x_22_);
return v___x_23_;
}
}
static lean_object* _init_lp_choreo_Choreo_wingStart(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&lp_choreo_Choreo_wingStart___closed__0, &lp_choreo_Choreo_wingStart___closed__0_once, _init_lp_choreo_Choreo_wingStart___closed__0);
return v___x_24_;
}
}
static lean_object* _init_lp_choreo_Choreo_sceneEnvelope___closed__0(void){
_start:
{
lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_25_ = lean_unsigned_to_nat(10500u);
v___x_26_ = lean_nat_to_int(v___x_25_);
return v___x_26_;
}
}
static lean_object* _init_lp_choreo_Choreo_sceneEnvelope___closed__1(void){
_start:
{
lean_object* v___x_27_; lean_object* v___x_28_; 
v___x_27_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__0, &lp_choreo_Choreo_sceneEnvelope___closed__0_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__0);
v___x_28_ = lean_int_neg(v___x_27_);
return v___x_28_;
}
}
static lean_object* _init_lp_choreo_Choreo_sceneEnvelope___closed__2(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; 
v___x_29_ = lean_unsigned_to_nat(0u);
v___x_30_ = lean_nat_to_int(v___x_29_);
return v___x_30_;
}
}
static lean_object* _init_lp_choreo_Choreo_sceneEnvelope___closed__3(void){
_start:
{
lean_object* v___x_31_; lean_object* v___x_32_; 
v___x_31_ = lean_unsigned_to_nat(8000u);
v___x_32_ = lean_nat_to_int(v___x_31_);
return v___x_32_;
}
}
static lean_object* _init_lp_choreo_Choreo_sceneEnvelope___closed__4(void){
_start:
{
lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; 
v___x_33_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__3, &lp_choreo_Choreo_sceneEnvelope___closed__3_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__3);
v___x_34_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
v___x_35_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__0, &lp_choreo_Choreo_sceneEnvelope___closed__0_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__0);
v___x_36_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__1, &lp_choreo_Choreo_sceneEnvelope___closed__1_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__1);
v___x_37_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_37_, 0, v___x_36_);
lean_ctor_set(v___x_37_, 1, v___x_35_);
lean_ctor_set(v___x_37_, 2, v___x_34_);
lean_ctor_set(v___x_37_, 3, v___x_33_);
return v___x_37_;
}
}
static lean_object* _init_lp_choreo_Choreo_sceneEnvelope(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__4, &lp_choreo_Choreo_sceneEnvelope___closed__4_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__4);
return v___x_38_;
}
}
static lean_object* _init_lp_choreo_Choreo_slWingRect___closed__0(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(6600u);
v___x_40_ = lean_nat_to_int(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_lp_choreo_Choreo_slWingRect___closed__1(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; 
v___x_41_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__3, &lp_choreo_Choreo_sceneEnvelope___closed__3_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__3);
v___x_42_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
v___x_43_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__0, &lp_choreo_Choreo_sceneEnvelope___closed__0_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__0);
v___x_44_ = lean_obj_once(&lp_choreo_Choreo_slWingRect___closed__0, &lp_choreo_Choreo_slWingRect___closed__0_once, _init_lp_choreo_Choreo_slWingRect___closed__0);
v___x_45_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_45_, 0, v___x_44_);
lean_ctor_set(v___x_45_, 1, v___x_43_);
lean_ctor_set(v___x_45_, 2, v___x_42_);
lean_ctor_set(v___x_45_, 3, v___x_41_);
return v___x_45_;
}
}
static lean_object* _init_lp_choreo_Choreo_slWingRect(void){
_start:
{
lean_object* v___x_46_; 
v___x_46_ = lean_obj_once(&lp_choreo_Choreo_slWingRect___closed__1, &lp_choreo_Choreo_slWingRect___closed__1_once, _init_lp_choreo_Choreo_slWingRect___closed__1);
return v___x_46_;
}
}
static lean_object* _init_lp_choreo_Choreo_srWingRect___closed__0(void){
_start:
{
lean_object* v___x_47_; lean_object* v___x_48_; 
v___x_47_ = lean_obj_once(&lp_choreo_Choreo_slWingRect___closed__0, &lp_choreo_Choreo_slWingRect___closed__0_once, _init_lp_choreo_Choreo_slWingRect___closed__0);
v___x_48_ = lean_int_neg(v___x_47_);
return v___x_48_;
}
}
static lean_object* _init_lp_choreo_Choreo_srWingRect___closed__1(void){
_start:
{
lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_49_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__3, &lp_choreo_Choreo_sceneEnvelope___closed__3_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__3);
v___x_50_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
v___x_51_ = lean_obj_once(&lp_choreo_Choreo_srWingRect___closed__0, &lp_choreo_Choreo_srWingRect___closed__0_once, _init_lp_choreo_Choreo_srWingRect___closed__0);
v___x_52_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__1, &lp_choreo_Choreo_sceneEnvelope___closed__1_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__1);
v___x_53_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_53_, 0, v___x_52_);
lean_ctor_set(v___x_53_, 1, v___x_51_);
lean_ctor_set(v___x_53_, 2, v___x_50_);
lean_ctor_set(v___x_53_, 3, v___x_49_);
return v___x_53_;
}
}
static lean_object* _init_lp_choreo_Choreo_srWingRect(void){
_start:
{
lean_object* v___x_54_; 
v___x_54_ = lean_obj_once(&lp_choreo_Choreo_srWingRect___closed__1, &lp_choreo_Choreo_srWingRect___closed__1_once, _init_lp_choreo_Choreo_srWingRect___closed__1);
return v___x_54_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Pt_onStage(lean_object* v_p_55_){
_start:
{
lean_object* v___x_56_; lean_object* v_xmin_57_; lean_object* v_xmax_58_; lean_object* v_x_59_; uint8_t v___x_60_; 
v___x_56_ = lp_choreo_Choreo_stageRect;
v_xmin_57_ = lean_ctor_get(v___x_56_, 0);
v_xmax_58_ = lean_ctor_get(v___x_56_, 1);
v_x_59_ = lean_ctor_get(v_p_55_, 0);
v___x_60_ = lean_int_dec_le(v_xmin_57_, v_x_59_);
if (v___x_60_ == 0)
{
return v___x_60_;
}
else
{
uint8_t v___x_61_; 
v___x_61_ = lean_int_dec_le(v_x_59_, v_xmax_58_);
return v___x_61_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_onStage___boxed(lean_object* v_p_62_){
_start:
{
uint8_t v_res_63_; lean_object* v_r_64_; 
v_res_63_ = lp_choreo_Choreo_Pt_onStage(v_p_62_);
lean_dec_ref(v_p_62_);
v_r_64_ = lean_box(v_res_63_);
return v_r_64_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rowName_spec__0(lean_object* v_y_83_, lean_object* v_x_84_){
_start:
{
if (lean_obj_tag(v_x_84_) == 0)
{
lean_object* v___x_85_; 
v___x_85_ = lean_box(0);
return v___x_85_;
}
else
{
lean_object* v_head_86_; lean_object* v_tail_87_; lean_object* v___x_88_; uint8_t v___x_89_; 
v_head_86_ = lean_ctor_get(v_x_84_, 0);
lean_inc_n(v_head_86_, 2);
v_tail_87_ = lean_ctor_get(v_x_84_, 1);
lean_inc(v_tail_87_);
lean_dec_ref_known(v_x_84_, 2);
v___x_88_ = lp_choreo_Choreo_rowY(v_head_86_);
v___x_89_ = lean_int_dec_eq(v___x_88_, v_y_83_);
lean_dec(v___x_88_);
if (v___x_89_ == 0)
{
lean_dec(v_head_86_);
v_x_84_ = v_tail_87_;
goto _start;
}
else
{
lean_object* v___x_91_; 
lean_dec(v_tail_87_);
v___x_91_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_91_, 0, v_head_86_);
return v___x_91_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rowName_spec__0___boxed(lean_object* v_y_92_, lean_object* v_x_93_){
_start:
{
lean_object* v_res_94_; 
v_res_94_ = lp_choreo_List_find_x3f___at___00Choreo_rowName_spec__0(v_y_92_, v_x_93_);
lean_dec(v_y_92_);
return v_res_94_;
}
}
static lean_object* _init_lp_choreo_Choreo_rowName___closed__0(void){
_start:
{
lean_object* v___x_95_; lean_object* v___x_96_; 
v___x_95_ = lean_unsigned_to_nat(5u);
v___x_96_ = l_List_range(v___x_95_);
return v___x_96_;
}
}
static lean_object* _init_lp_choreo_Choreo_rowName___closed__2(void){
_start:
{
lean_object* v___x_98_; lean_object* v___x_99_; 
v___x_98_ = ((lean_object*)(lp_choreo_Choreo_rowLetters));
v___x_99_ = lean_array_get_size(v___x_98_);
return v___x_99_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowName(lean_object* v_y_102_){
_start:
{
lean_object* v___x_103_; lean_object* v___x_104_; 
v___x_103_ = lean_obj_once(&lp_choreo_Choreo_rowName___closed__0, &lp_choreo_Choreo_rowName___closed__0_once, _init_lp_choreo_Choreo_rowName___closed__0);
v___x_104_ = lp_choreo_List_find_x3f___at___00Choreo_rowName_spec__0(v_y_102_, v___x_103_);
if (lean_obj_tag(v___x_104_) == 0)
{
lean_object* v___x_105_; 
v___x_105_ = ((lean_object*)(lp_choreo_Choreo_rowName___closed__1));
return v___x_105_;
}
else
{
lean_object* v_val_106_; lean_object* v___x_107_; lean_object* v___x_108_; uint8_t v___x_109_; 
v_val_106_ = lean_ctor_get(v___x_104_, 0);
lean_inc(v_val_106_);
lean_dec_ref_known(v___x_104_, 1);
v___x_107_ = ((lean_object*)(lp_choreo_Choreo_rowLetters));
v___x_108_ = lean_obj_once(&lp_choreo_Choreo_rowName___closed__2, &lp_choreo_Choreo_rowName___closed__2_once, _init_lp_choreo_Choreo_rowName___closed__2);
v___x_109_ = lean_nat_dec_lt(v_val_106_, v___x_108_);
if (v___x_109_ == 0)
{
lean_object* v___x_110_; 
lean_dec(v_val_106_);
v___x_110_ = ((lean_object*)(lp_choreo_Choreo_rowName___closed__3));
return v___x_110_;
}
else
{
lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; 
v___x_111_ = ((lean_object*)(lp_choreo_Choreo_rowName___closed__4));
v___x_112_ = lean_array_fget_borrowed(v___x_107_, v_val_106_);
lean_dec(v_val_106_);
v___x_113_ = lean_string_append(v___x_111_, v___x_112_);
return v___x_113_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowName___boxed(lean_object* v_y_114_){
_start:
{
lean_object* v_res_115_; 
v_res_115_ = lp_choreo_Choreo_rowName(v_y_114_);
lean_dec(v_y_114_);
return v_res_115_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_colName_spec__0(lean_object* v_x_116_, lean_object* v_x_117_){
_start:
{
if (lean_obj_tag(v_x_117_) == 0)
{
lean_object* v___x_118_; 
v___x_118_ = lean_box(0);
return v___x_118_;
}
else
{
lean_object* v_head_119_; lean_object* v_tail_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; 
v_head_119_ = lean_ctor_get(v_x_117_, 0);
v_tail_120_ = lean_ctor_get(v_x_117_, 1);
v___x_121_ = lean_unsigned_to_nat(1u);
v___x_122_ = lean_nat_add(v_head_119_, v___x_121_);
v___x_123_ = lp_choreo_Choreo_colX(v___x_122_);
v___x_124_ = lean_int_dec_eq(v___x_123_, v_x_116_);
lean_dec(v___x_123_);
if (v___x_124_ == 0)
{
v_x_117_ = v_tail_120_;
goto _start;
}
else
{
lean_object* v___x_126_; 
lean_inc(v_head_119_);
v___x_126_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_126_, 0, v_head_119_);
return v___x_126_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_colName_spec__0___boxed(lean_object* v_x_127_, lean_object* v_x_128_){
_start:
{
lean_object* v_res_129_; 
v_res_129_ = lp_choreo_List_find_x3f___at___00Choreo_colName_spec__0(v_x_127_, v_x_128_);
lean_dec(v_x_128_);
lean_dec(v_x_127_);
return v_res_129_;
}
}
static lean_object* _init_lp_choreo_Choreo_colName___closed__0(void){
_start:
{
lean_object* v___x_130_; lean_object* v___x_131_; 
v___x_130_ = lean_unsigned_to_nat(9u);
v___x_131_ = l_List_range(v___x_130_);
return v___x_131_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_colName(lean_object* v_x_134_){
_start:
{
lean_object* v___x_135_; lean_object* v___x_136_; 
v___x_135_ = lean_obj_once(&lp_choreo_Choreo_colName___closed__0, &lp_choreo_Choreo_colName___closed__0_once, _init_lp_choreo_Choreo_colName___closed__0);
v___x_136_ = lp_choreo_List_find_x3f___at___00Choreo_colName_spec__0(v_x_134_, v___x_135_);
if (lean_obj_tag(v___x_136_) == 0)
{
lean_object* v___x_137_; 
v___x_137_ = ((lean_object*)(lp_choreo_Choreo_colName___closed__1));
return v___x_137_;
}
else
{
lean_object* v_val_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; 
v_val_138_ = lean_ctor_get(v___x_136_, 0);
lean_inc(v_val_138_);
lean_dec_ref_known(v___x_136_, 1);
v___x_139_ = ((lean_object*)(lp_choreo_Choreo_colName___closed__2));
v___x_140_ = lean_unsigned_to_nat(1u);
v___x_141_ = lean_nat_add(v_val_138_, v___x_140_);
lean_dec(v_val_138_);
v___x_142_ = l_Nat_reprFast(v___x_141_);
v___x_143_ = lean_string_append(v___x_139_, v___x_142_);
lean_dec_ref(v___x_142_);
return v___x_143_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_colName___boxed(lean_object* v_x_144_){
_start:
{
lean_object* v_res_145_; 
v_res_145_ = lp_choreo_Choreo_colName(v_x_144_);
lean_dec(v_x_144_);
return v_res_145_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sortBy(lean_object* v_key_146_, lean_object* v_l_147_){
_start:
{
lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_148_ = lean_box(0);
v___x_149_ = lp_choreo_List_foldrTR___at___00Choreo_sortBy_x27_spec__1(v_key_146_, v___x_148_, v_l_147_);
return v___x_149_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_evenStep_spec__0(lean_object* v_step_150_, lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
uint8_t v___x_152_; 
v___x_152_ = 1;
return v___x_152_;
}
else
{
lean_object* v_head_153_; lean_object* v_tail_154_; lean_object* v_fst_155_; lean_object* v_snd_156_; lean_object* v___x_157_; uint8_t v___x_158_; 
v_head_153_ = lean_ctor_get(v_x_151_, 0);
v_tail_154_ = lean_ctor_get(v_x_151_, 1);
v_fst_155_ = lean_ctor_get(v_head_153_, 0);
v_snd_156_ = lean_ctor_get(v_head_153_, 1);
v___x_157_ = lean_int_sub(v_snd_156_, v_fst_155_);
v___x_158_ = lean_int_dec_eq(v___x_157_, v_step_150_);
lean_dec(v___x_157_);
if (v___x_158_ == 0)
{
return v___x_158_;
}
else
{
v_x_151_ = v_tail_154_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_evenStep_spec__0___boxed(lean_object* v_step_160_, lean_object* v_x_161_){
_start:
{
uint8_t v_res_162_; lean_object* v_r_163_; 
v_res_162_ = lp_choreo_List_all___at___00Choreo_evenStep_spec__0(v_step_160_, v_x_161_);
lean_dec(v_x_161_);
lean_dec(v_step_160_);
v_r_163_ = lean_box(v_res_162_);
return v_r_163_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_evenStep(lean_object* v_coords_164_){
_start:
{
if (lean_obj_tag(v_coords_164_) == 1)
{
lean_object* v_tail_165_; 
v_tail_165_ = lean_ctor_get(v_coords_164_, 1);
lean_inc(v_tail_165_);
if (lean_obj_tag(v_tail_165_) == 1)
{
lean_object* v_head_166_; lean_object* v_head_167_; lean_object* v_step_168_; uint8_t v___y_170_; lean_object* v___x_173_; uint8_t v___x_174_; 
v_head_166_ = lean_ctor_get(v_coords_164_, 0);
v_head_167_ = lean_ctor_get(v_tail_165_, 0);
v_step_168_ = lean_int_sub(v_head_167_, v_head_166_);
v___x_173_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_coords_164_, v_tail_165_);
v___x_174_ = lp_choreo_List_all___at___00Choreo_evenStep_spec__0(v_step_168_, v___x_173_);
lean_dec(v___x_173_);
if (v___x_174_ == 0)
{
v___y_170_ = v___x_174_;
goto v___jp_169_;
}
else
{
lean_object* v___x_175_; uint8_t v___x_176_; 
v___x_175_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
v___x_176_ = lean_int_dec_eq(v_step_168_, v___x_175_);
if (v___x_176_ == 0)
{
v___y_170_ = v___x_174_;
goto v___jp_169_;
}
else
{
lean_object* v___x_177_; 
lean_dec(v_step_168_);
v___x_177_ = lean_box(0);
return v___x_177_;
}
}
v___jp_169_:
{
if (v___y_170_ == 0)
{
lean_object* v___x_171_; 
lean_dec(v_step_168_);
v___x_171_ = lean_box(0);
return v___x_171_;
}
else
{
lean_object* v___x_172_; 
v___x_172_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_172_, 0, v_step_168_);
return v___x_172_;
}
}
}
else
{
lean_object* v___x_178_; 
lean_dec(v_tail_165_);
lean_dec_ref_known(v_coords_164_, 2);
v___x_178_ = lean_box(0);
return v___x_178_;
}
}
else
{
lean_object* v___x_179_; 
lean_dec(v_coords_164_);
v___x_179_ = lean_box(0);
return v___x_179_;
}
}
}
LEAN_EXPORT uint8_t lp_choreo_List_elem___at___00Choreo_groupsBy_spec__0(lean_object* v_a_180_, lean_object* v_x_181_){
_start:
{
if (lean_obj_tag(v_x_181_) == 0)
{
uint8_t v___x_182_; 
v___x_182_ = 0;
return v___x_182_;
}
else
{
lean_object* v_head_183_; lean_object* v_tail_184_; uint8_t v___x_185_; 
v_head_183_ = lean_ctor_get(v_x_181_, 0);
v_tail_184_ = lean_ctor_get(v_x_181_, 1);
v___x_185_ = lean_int_dec_eq(v_a_180_, v_head_183_);
if (v___x_185_ == 0)
{
v_x_181_ = v_tail_184_;
goto _start;
}
else
{
return v___x_185_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_elem___at___00Choreo_groupsBy_spec__0___boxed(lean_object* v_a_187_, lean_object* v_x_188_){
_start:
{
uint8_t v_res_189_; lean_object* v_r_190_; 
v_res_189_ = lp_choreo_List_elem___at___00Choreo_groupsBy_spec__0(v_a_187_, v_x_188_);
lean_dec(v_x_188_);
lean_dec(v_a_187_);
v_r_190_ = lean_box(v_res_189_);
return v_r_190_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_groupsBy_spec__3(lean_object* v_pos_191_, lean_object* v_key_192_, lean_object* v_x_193_, lean_object* v_x_194_){
_start:
{
if (lean_obj_tag(v_x_194_) == 0)
{
lean_dec_ref(v_key_192_);
return v_x_193_;
}
else
{
lean_object* v_head_195_; lean_object* v_tail_196_; lean_object* v___x_198_; uint8_t v_isShared_199_; uint8_t v_isSharedCheck_211_; 
v_head_195_ = lean_ctor_get(v_x_194_, 0);
v_tail_196_ = lean_ctor_get(v_x_194_, 1);
v_isSharedCheck_211_ = !lean_is_exclusive(v_x_194_);
if (v_isSharedCheck_211_ == 0)
{
v___x_198_ = v_x_194_;
v_isShared_199_ = v_isSharedCheck_211_;
goto v_resetjp_197_;
}
else
{
lean_inc(v_tail_196_);
lean_inc(v_head_195_);
lean_dec(v_x_194_);
v___x_198_ = lean_box(0);
v_isShared_199_ = v_isSharedCheck_211_;
goto v_resetjp_197_;
}
v_resetjp_197_:
{
lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v_v_202_; uint8_t v___x_203_; 
v___x_200_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_201_ = l_List_getD___redArg(v_pos_191_, v_head_195_, v___x_200_);
lean_inc_ref(v_key_192_);
v_v_202_ = lean_apply_1(v_key_192_, v___x_201_);
v___x_203_ = lp_choreo_List_elem___at___00Choreo_groupsBy_spec__0(v_v_202_, v_x_193_);
if (v___x_203_ == 0)
{
lean_object* v___x_204_; lean_object* v___x_206_; 
v___x_204_ = lean_box(0);
if (v_isShared_199_ == 0)
{
lean_ctor_set(v___x_198_, 1, v___x_204_);
lean_ctor_set(v___x_198_, 0, v_v_202_);
v___x_206_ = v___x_198_;
goto v_reusejp_205_;
}
else
{
lean_object* v_reuseFailAlloc_209_; 
v_reuseFailAlloc_209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_209_, 0, v_v_202_);
lean_ctor_set(v_reuseFailAlloc_209_, 1, v___x_204_);
v___x_206_ = v_reuseFailAlloc_209_;
goto v_reusejp_205_;
}
v_reusejp_205_:
{
lean_object* v___x_207_; 
v___x_207_ = l_List_appendTR___redArg(v_x_193_, v___x_206_);
v_x_193_ = v___x_207_;
v_x_194_ = v_tail_196_;
goto _start;
}
}
else
{
lean_dec(v_v_202_);
lean_del_object(v___x_198_);
v_x_194_ = v_tail_196_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_groupsBy_spec__3___boxed(lean_object* v_pos_212_, lean_object* v_key_213_, lean_object* v_x_214_, lean_object* v_x_215_){
_start:
{
lean_object* v_res_216_; 
v_res_216_ = lp_choreo_List_foldl___at___00Choreo_groupsBy_spec__3(v_pos_212_, v_key_213_, v_x_214_, v_x_215_);
lean_dec(v_pos_212_);
return v_res_216_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(lean_object* v_pos_217_, lean_object* v_a_218_, lean_object* v_a_219_){
_start:
{
if (lean_obj_tag(v_a_218_) == 0)
{
lean_object* v___x_220_; 
v___x_220_ = l_List_reverse___redArg(v_a_219_);
return v___x_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_tail_222_; lean_object* v___x_224_; uint8_t v_isShared_225_; uint8_t v_isSharedCheck_234_; 
v_head_221_ = lean_ctor_get(v_a_218_, 0);
v_tail_222_ = lean_ctor_get(v_a_218_, 1);
v_isSharedCheck_234_ = !lean_is_exclusive(v_a_218_);
if (v_isSharedCheck_234_ == 0)
{
v___x_224_ = v_a_218_;
v_isShared_225_ = v_isSharedCheck_234_;
goto v_resetjp_223_;
}
else
{
lean_inc(v_tail_222_);
lean_inc(v_head_221_);
lean_dec(v_a_218_);
v___x_224_ = lean_box(0);
v_isShared_225_ = v_isSharedCheck_234_;
goto v_resetjp_223_;
}
v_resetjp_223_:
{
lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v___x_226_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_head_221_);
v___x_227_ = l_List_getD___redArg(v_pos_217_, v_head_221_, v___x_226_);
v___x_228_ = lp_choreo_Choreo_Pt_onStage(v___x_227_);
lean_dec(v___x_227_);
if (v___x_228_ == 0)
{
lean_del_object(v___x_224_);
lean_dec(v_head_221_);
v_a_218_ = v_tail_222_;
goto _start;
}
else
{
lean_object* v___x_231_; 
if (v_isShared_225_ == 0)
{
lean_ctor_set(v___x_224_, 1, v_a_219_);
v___x_231_ = v___x_224_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_233_; 
v_reuseFailAlloc_233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_233_, 0, v_head_221_);
lean_ctor_set(v_reuseFailAlloc_233_, 1, v_a_219_);
v___x_231_ = v_reuseFailAlloc_233_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
v_a_218_ = v_tail_222_;
v_a_219_ = v___x_231_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1___boxed(lean_object* v_pos_235_, lean_object* v_a_236_, lean_object* v_a_237_){
_start:
{
lean_object* v_res_238_; 
v_res_238_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_pos_235_, v_a_236_, v_a_237_);
lean_dec(v_pos_235_);
return v_res_238_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__2(lean_object* v_pos_239_, lean_object* v_key_240_, lean_object* v_v_241_, lean_object* v_a_242_, lean_object* v_a_243_){
_start:
{
if (lean_obj_tag(v_a_242_) == 0)
{
lean_object* v___x_244_; 
lean_dec_ref(v_key_240_);
v___x_244_ = l_List_reverse___redArg(v_a_243_);
return v___x_244_;
}
else
{
lean_object* v_head_245_; lean_object* v_tail_246_; lean_object* v___x_248_; uint8_t v_isShared_249_; uint8_t v_isSharedCheck_259_; 
v_head_245_ = lean_ctor_get(v_a_242_, 0);
v_tail_246_ = lean_ctor_get(v_a_242_, 1);
v_isSharedCheck_259_ = !lean_is_exclusive(v_a_242_);
if (v_isSharedCheck_259_ == 0)
{
v___x_248_ = v_a_242_;
v_isShared_249_ = v_isSharedCheck_259_;
goto v_resetjp_247_;
}
else
{
lean_inc(v_tail_246_);
lean_inc(v_head_245_);
lean_dec(v_a_242_);
v___x_248_ = lean_box(0);
v_isShared_249_ = v_isSharedCheck_259_;
goto v_resetjp_247_;
}
v_resetjp_247_:
{
lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; uint8_t v___x_253_; 
v___x_250_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_head_245_);
v___x_251_ = l_List_getD___redArg(v_pos_239_, v_head_245_, v___x_250_);
lean_inc_ref(v_key_240_);
v___x_252_ = lean_apply_1(v_key_240_, v___x_251_);
v___x_253_ = lean_int_dec_eq(v___x_252_, v_v_241_);
lean_dec(v___x_252_);
if (v___x_253_ == 0)
{
lean_del_object(v___x_248_);
lean_dec(v_head_245_);
v_a_242_ = v_tail_246_;
goto _start;
}
else
{
lean_object* v___x_256_; 
if (v_isShared_249_ == 0)
{
lean_ctor_set(v___x_248_, 1, v_a_243_);
v___x_256_ = v___x_248_;
goto v_reusejp_255_;
}
else
{
lean_object* v_reuseFailAlloc_258_; 
v_reuseFailAlloc_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_258_, 0, v_head_245_);
lean_ctor_set(v_reuseFailAlloc_258_, 1, v_a_243_);
v___x_256_ = v_reuseFailAlloc_258_;
goto v_reusejp_255_;
}
v_reusejp_255_:
{
v_a_242_ = v_tail_246_;
v_a_243_ = v___x_256_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__2___boxed(lean_object* v_pos_260_, lean_object* v_key_261_, lean_object* v_v_262_, lean_object* v_a_263_, lean_object* v_a_264_){
_start:
{
lean_object* v_res_265_; 
v_res_265_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__2(v_pos_260_, v_key_261_, v_v_262_, v_a_263_, v_a_264_);
lean_dec(v_v_262_);
lean_dec(v_pos_260_);
return v_res_265_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_groupsBy_spec__4(lean_object* v_pos_266_, lean_object* v_key_267_, lean_object* v_on_268_, lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
if (lean_obj_tag(v_a_269_) == 0)
{
lean_object* v___x_271_; 
lean_dec(v_on_268_);
lean_dec_ref(v_key_267_);
v___x_271_ = l_List_reverse___redArg(v_a_270_);
return v___x_271_;
}
else
{
lean_object* v_head_272_; lean_object* v_tail_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_284_; 
v_head_272_ = lean_ctor_get(v_a_269_, 0);
v_tail_273_ = lean_ctor_get(v_a_269_, 1);
v_isSharedCheck_284_ = !lean_is_exclusive(v_a_269_);
if (v_isSharedCheck_284_ == 0)
{
v___x_275_ = v_a_269_;
v_isShared_276_ = v_isSharedCheck_284_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_tail_273_);
lean_inc(v_head_272_);
lean_dec(v_a_269_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_284_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v___x_277_; lean_object* v___x_278_; lean_object* v___x_279_; lean_object* v___x_281_; 
v___x_277_ = lean_box(0);
lean_inc(v_on_268_);
lean_inc_ref(v_key_267_);
v___x_278_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__2(v_pos_266_, v_key_267_, v_head_272_, v_on_268_, v___x_277_);
v___x_279_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_279_, 0, v_head_272_);
lean_ctor_set(v___x_279_, 1, v___x_278_);
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v_a_270_);
lean_ctor_set(v___x_275_, 0, v___x_279_);
v___x_281_ = v___x_275_;
goto v_reusejp_280_;
}
else
{
lean_object* v_reuseFailAlloc_283_; 
v_reuseFailAlloc_283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_283_, 0, v___x_279_);
lean_ctor_set(v_reuseFailAlloc_283_, 1, v_a_270_);
v___x_281_ = v_reuseFailAlloc_283_;
goto v_reusejp_280_;
}
v_reusejp_280_:
{
v_a_269_ = v_tail_273_;
v_a_270_ = v___x_281_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_groupsBy_spec__4___boxed(lean_object* v_pos_285_, lean_object* v_key_286_, lean_object* v_on_287_, lean_object* v_a_288_, lean_object* v_a_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = lp_choreo_List_mapTR_loop___at___00Choreo_groupsBy_spec__4(v_pos_285_, v_key_286_, v_on_287_, v_a_288_, v_a_289_);
lean_dec(v_pos_285_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsBy(lean_object* v_pos_291_, lean_object* v_key_292_){
_start:
{
lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v_on_296_; lean_object* v_vals_297_; lean_object* v___x_298_; 
v___x_293_ = l_List_lengthTR___redArg(v_pos_291_);
v___x_294_ = l_List_range(v___x_293_);
v___x_295_ = lean_box(0);
v_on_296_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_pos_291_, v___x_294_, v___x_295_);
lean_inc(v_on_296_);
lean_inc_ref(v_key_292_);
v_vals_297_ = lp_choreo_List_foldl___at___00Choreo_groupsBy_spec__3(v_pos_291_, v_key_292_, v___x_295_, v_on_296_);
v___x_298_ = lp_choreo_List_mapTR_loop___at___00Choreo_groupsBy_spec__4(v_pos_291_, v_key_292_, v_on_296_, v_vals_297_, v___x_295_);
return v___x_298_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsBy___boxed(lean_object* v_pos_299_, lean_object* v_key_300_){
_start:
{
lean_object* v_res_301_; 
v_res_301_ = lp_choreo_Choreo_groupsBy(v_pos_299_, v_key_300_);
lean_dec(v_pos_299_);
return v_res_301_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__0(lean_object* v_x_302_){
_start:
{
lean_object* v_x_303_; 
v_x_303_ = lean_ctor_get(v_x_302_, 0);
lean_inc(v_x_303_);
return v_x_303_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__0___boxed(lean_object* v_x_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = lp_choreo_Choreo_rulesOfFrame___lam__0(v_x_304_);
lean_dec_ref(v_x_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__1(lean_object* v_x_306_){
_start:
{
lean_object* v_y_307_; 
v_y_307_ = lean_ctor_get(v_x_306_, 1);
lean_inc(v_y_307_);
return v_y_307_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame___lam__1___boxed(lean_object* v_x_308_){
_start:
{
lean_object* v_res_309_; 
v_res_309_ = lp_choreo_Choreo_rulesOfFrame___lam__1(v_x_308_);
lean_dec_ref(v_x_308_);
return v_res_309_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___lam__0(lean_object* v_pos_310_, lean_object* v_i_311_){
_start:
{
lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_312_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_313_ = l_List_getD___redArg(v_pos_310_, v_i_311_, v___x_312_);
return v___x_313_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___lam__0___boxed(lean_object* v_pos_314_, lean_object* v_i_315_){
_start:
{
lean_object* v_res_316_; 
v_res_316_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___lam__0(v_pos_314_, v_i_315_);
lean_dec(v_pos_314_);
return v_res_316_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5(lean_object* v_pos_317_, lean_object* v_i_318_, lean_object* v_x_319_){
_start:
{
if (lean_obj_tag(v_x_319_) == 0)
{
lean_object* v___x_320_; 
lean_dec(v_i_318_);
v___x_320_ = lean_box(0);
return v___x_320_;
}
else
{
lean_object* v_head_321_; lean_object* v_tail_322_; lean_object* v___x_323_; lean_object* v_x_324_; lean_object* v_y_325_; lean_object* v___x_326_; lean_object* v_x_327_; lean_object* v_y_328_; lean_object* v___x_329_; uint8_t v___x_330_; 
v_head_321_ = lean_ctor_get(v_x_319_, 0);
lean_inc_n(v_head_321_, 2);
v_tail_322_ = lean_ctor_get(v_x_319_, 1);
lean_inc(v_tail_322_);
lean_dec_ref_known(v_x_319_, 2);
v___x_323_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___lam__0(v_pos_317_, v_head_321_);
v_x_324_ = lean_ctor_get(v___x_323_, 0);
lean_inc(v_x_324_);
v_y_325_ = lean_ctor_get(v___x_323_, 1);
lean_inc(v_y_325_);
lean_dec(v___x_323_);
lean_inc(v_i_318_);
v___x_326_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___lam__0(v_pos_317_, v_i_318_);
v_x_327_ = lean_ctor_get(v___x_326_, 0);
lean_inc(v_x_327_);
v_y_328_ = lean_ctor_get(v___x_326_, 1);
lean_inc(v_y_328_);
lean_dec(v___x_326_);
v___x_329_ = lean_int_neg(v_x_327_);
lean_dec(v_x_327_);
v___x_330_ = lean_int_dec_eq(v_x_324_, v___x_329_);
lean_dec(v___x_329_);
lean_dec(v_x_324_);
if (v___x_330_ == 0)
{
lean_dec(v_y_328_);
lean_dec(v_y_325_);
lean_dec(v_head_321_);
v_x_319_ = v_tail_322_;
goto _start;
}
else
{
uint8_t v___x_332_; 
v___x_332_ = lean_int_dec_eq(v_y_325_, v_y_328_);
lean_dec(v_y_328_);
lean_dec(v_y_325_);
if (v___x_332_ == 0)
{
lean_dec(v_head_321_);
v_x_319_ = v_tail_322_;
goto _start;
}
else
{
lean_object* v___x_334_; 
lean_dec(v_tail_322_);
lean_dec(v_i_318_);
v___x_334_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_334_, 0, v_head_321_);
return v___x_334_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5___boxed(lean_object* v_pos_335_, lean_object* v_i_336_, lean_object* v_x_337_){
_start:
{
lean_object* v_res_338_; 
v_res_338_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5(v_pos_335_, v_i_336_, v_x_337_);
lean_dec(v_pos_335_);
return v_res_338_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10(lean_object* v_pos_339_, lean_object* v_on_340_, lean_object* v_a_341_, lean_object* v_a_342_){
_start:
{
if (lean_obj_tag(v_a_341_) == 0)
{
lean_object* v___x_343_; 
lean_dec(v_on_340_);
v___x_343_ = lean_array_to_list(v_a_342_);
return v___x_343_;
}
else
{
lean_object* v_head_344_; lean_object* v_tail_345_; lean_object* v___x_347_; uint8_t v_isShared_348_; uint8_t v_isSharedCheck_359_; 
v_head_344_ = lean_ctor_get(v_a_341_, 0);
v_tail_345_ = lean_ctor_get(v_a_341_, 1);
v_isSharedCheck_359_ = !lean_is_exclusive(v_a_341_);
if (v_isSharedCheck_359_ == 0)
{
v___x_347_ = v_a_341_;
v_isShared_348_ = v_isSharedCheck_359_;
goto v_resetjp_346_;
}
else
{
lean_inc(v_tail_345_);
lean_inc(v_head_344_);
lean_dec(v_a_341_);
v___x_347_ = lean_box(0);
v_isShared_348_ = v_isSharedCheck_359_;
goto v_resetjp_346_;
}
v_resetjp_346_:
{
lean_object* v___x_349_; 
lean_inc(v_on_340_);
lean_inc(v_head_344_);
v___x_349_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5(v_pos_339_, v_head_344_, v_on_340_);
if (lean_obj_tag(v___x_349_) == 0)
{
lean_del_object(v___x_347_);
lean_dec(v_head_344_);
v_a_341_ = v_tail_345_;
goto _start;
}
else
{
lean_object* v_val_351_; uint8_t v___x_352_; 
v_val_351_ = lean_ctor_get(v___x_349_, 0);
lean_inc(v_val_351_);
lean_dec_ref_known(v___x_349_, 1);
v___x_352_ = lean_nat_dec_le(v_head_344_, v_val_351_);
if (v___x_352_ == 0)
{
lean_dec(v_val_351_);
lean_del_object(v___x_347_);
lean_dec(v_head_344_);
v_a_341_ = v_tail_345_;
goto _start;
}
else
{
lean_object* v___x_355_; 
if (v_isShared_348_ == 0)
{
lean_ctor_set_tag(v___x_347_, 0);
lean_ctor_set(v___x_347_, 1, v_val_351_);
v___x_355_ = v___x_347_;
goto v_reusejp_354_;
}
else
{
lean_object* v_reuseFailAlloc_358_; 
v_reuseFailAlloc_358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_358_, 0, v_head_344_);
lean_ctor_set(v_reuseFailAlloc_358_, 1, v_val_351_);
v___x_355_ = v_reuseFailAlloc_358_;
goto v_reusejp_354_;
}
v_reusejp_354_:
{
lean_object* v___x_356_; 
v___x_356_ = lean_array_push(v_a_342_, v___x_355_);
v_a_341_ = v_tail_345_;
v_a_342_ = v___x_356_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10___boxed(lean_object* v_pos_360_, lean_object* v_on_361_, lean_object* v_a_362_, lean_object* v_a_363_){
_start:
{
lean_object* v_res_364_; 
v_res_364_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10(v_pos_360_, v_on_361_, v_a_362_, v_a_363_);
lean_dec(v_pos_360_);
return v_res_364_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6(lean_object* v_pos_365_, lean_object* v_on_366_, lean_object* v_a_367_, lean_object* v_a_368_){
_start:
{
if (lean_obj_tag(v_a_367_) == 0)
{
lean_object* v___x_369_; 
lean_dec(v_on_366_);
v___x_369_ = lean_array_to_list(v_a_368_);
return v___x_369_;
}
else
{
lean_object* v_head_370_; lean_object* v_tail_371_; lean_object* v___x_373_; uint8_t v_isShared_374_; uint8_t v_isSharedCheck_385_; 
v_head_370_ = lean_ctor_get(v_a_367_, 0);
v_tail_371_ = lean_ctor_get(v_a_367_, 1);
v_isSharedCheck_385_ = !lean_is_exclusive(v_a_367_);
if (v_isSharedCheck_385_ == 0)
{
v___x_373_ = v_a_367_;
v_isShared_374_ = v_isSharedCheck_385_;
goto v_resetjp_372_;
}
else
{
lean_inc(v_tail_371_);
lean_inc(v_head_370_);
lean_dec(v_a_367_);
v___x_373_ = lean_box(0);
v_isShared_374_ = v_isSharedCheck_385_;
goto v_resetjp_372_;
}
v_resetjp_372_:
{
lean_object* v___x_375_; 
lean_inc(v_on_366_);
lean_inc(v_head_370_);
v___x_375_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5(v_pos_365_, v_head_370_, v_on_366_);
if (lean_obj_tag(v___x_375_) == 0)
{
lean_object* v___x_376_; 
lean_del_object(v___x_373_);
lean_dec(v_head_370_);
v___x_376_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10(v_pos_365_, v_on_366_, v_tail_371_, v_a_368_);
return v___x_376_;
}
else
{
lean_object* v_val_377_; uint8_t v___x_378_; 
v_val_377_ = lean_ctor_get(v___x_375_, 0);
lean_inc(v_val_377_);
lean_dec_ref_known(v___x_375_, 1);
v___x_378_ = lean_nat_dec_le(v_head_370_, v_val_377_);
if (v___x_378_ == 0)
{
lean_object* v___x_379_; 
lean_dec(v_val_377_);
lean_del_object(v___x_373_);
lean_dec(v_head_370_);
v___x_379_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10(v_pos_365_, v_on_366_, v_tail_371_, v_a_368_);
return v___x_379_;
}
else
{
lean_object* v___x_381_; 
if (v_isShared_374_ == 0)
{
lean_ctor_set_tag(v___x_373_, 0);
lean_ctor_set(v___x_373_, 1, v_val_377_);
v___x_381_ = v___x_373_;
goto v_reusejp_380_;
}
else
{
lean_object* v_reuseFailAlloc_384_; 
v_reuseFailAlloc_384_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_384_, 0, v_head_370_);
lean_ctor_set(v_reuseFailAlloc_384_, 1, v_val_377_);
v___x_381_ = v_reuseFailAlloc_384_;
goto v_reusejp_380_;
}
v_reusejp_380_:
{
lean_object* v___x_382_; lean_object* v___x_383_; 
v___x_382_ = lean_array_push(v_a_368_, v___x_381_);
v___x_383_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6_spec__10(v_pos_365_, v_on_366_, v_tail_371_, v___x_382_);
return v___x_383_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6___boxed(lean_object* v_pos_386_, lean_object* v_on_387_, lean_object* v_a_388_, lean_object* v_a_389_){
_start:
{
lean_object* v_res_390_; 
v_res_390_ = lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6(v_pos_386_, v_on_387_, v_a_388_, v_a_389_);
lean_dec(v_pos_386_);
return v_res_390_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00List_all___at___00Choreo_rulesOfFrame_spec__7_spec__12(lean_object* v_pos_391_, lean_object* v_on_392_, lean_object* v___x_393_, lean_object* v_x_394_){
_start:
{
if (lean_obj_tag(v_x_394_) == 0)
{
uint8_t v___x_395_; 
lean_dec(v_on_392_);
v___x_395_ = 1;
return v___x_395_;
}
else
{
lean_object* v_head_396_; lean_object* v_tail_397_; lean_object* v___x_398_; 
v_head_396_ = lean_ctor_get(v_x_394_, 0);
lean_inc(v_head_396_);
v_tail_397_ = lean_ctor_get(v_x_394_, 1);
lean_inc(v_tail_397_);
lean_dec_ref_known(v_x_394_, 2);
lean_inc(v_on_392_);
v___x_398_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5(v_pos_391_, v_head_396_, v_on_392_);
if (lean_obj_tag(v___x_398_) == 0)
{
uint8_t v___x_399_; 
lean_dec(v_tail_397_);
lean_dec(v_on_392_);
v___x_399_ = 0;
return v___x_399_;
}
else
{
lean_object* v___x_400_; uint8_t v___x_401_; 
lean_dec_ref_known(v___x_398_, 1);
v___x_400_ = lean_unsigned_to_nat(2u);
v___x_401_ = lean_nat_dec_le(v___x_400_, v___x_393_);
if (v___x_401_ == 0)
{
lean_dec(v_tail_397_);
lean_dec(v_on_392_);
return v___x_401_;
}
else
{
v_x_394_ = v_tail_397_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00List_all___at___00Choreo_rulesOfFrame_spec__7_spec__12___boxed(lean_object* v_pos_403_, lean_object* v_on_404_, lean_object* v___x_405_, lean_object* v_x_406_){
_start:
{
uint8_t v_res_407_; lean_object* v_r_408_; 
v_res_407_ = lp_choreo_List_all___at___00List_all___at___00Choreo_rulesOfFrame_spec__7_spec__12(v_pos_403_, v_on_404_, v___x_405_, v_x_406_);
lean_dec(v___x_405_);
lean_dec(v_pos_403_);
v_r_408_ = lean_box(v_res_407_);
return v_r_408_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_rulesOfFrame_spec__7(lean_object* v_pos_409_, lean_object* v_on_410_, lean_object* v___x_411_, lean_object* v_x_412_){
_start:
{
if (lean_obj_tag(v_x_412_) == 0)
{
uint8_t v___x_413_; 
lean_dec(v_on_410_);
v___x_413_ = 1;
return v___x_413_;
}
else
{
lean_object* v_head_414_; lean_object* v_tail_415_; lean_object* v___x_416_; 
v_head_414_ = lean_ctor_get(v_x_412_, 0);
lean_inc(v_head_414_);
v_tail_415_ = lean_ctor_get(v_x_412_, 1);
lean_inc(v_tail_415_);
lean_dec_ref_known(v_x_412_, 2);
lean_inc(v_on_410_);
v___x_416_ = lp_choreo_List_find_x3f___at___00Choreo_rulesOfFrame_spec__5(v_pos_409_, v_head_414_, v_on_410_);
if (lean_obj_tag(v___x_416_) == 0)
{
uint8_t v___x_417_; 
lean_dec(v_tail_415_);
lean_dec(v_on_410_);
v___x_417_ = 0;
return v___x_417_;
}
else
{
lean_object* v___x_418_; uint8_t v___x_419_; 
lean_dec_ref_known(v___x_416_, 1);
v___x_418_ = lean_unsigned_to_nat(2u);
v___x_419_ = lean_nat_dec_le(v___x_418_, v___x_411_);
if (v___x_419_ == 0)
{
lean_dec(v_tail_415_);
lean_dec(v_on_410_);
return v___x_419_;
}
else
{
uint8_t v___x_420_; 
v___x_420_ = lp_choreo_List_all___at___00List_all___at___00Choreo_rulesOfFrame_spec__7_spec__12(v_pos_409_, v_on_410_, v___x_411_, v_tail_415_);
return v___x_420_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_rulesOfFrame_spec__7___boxed(lean_object* v_pos_421_, lean_object* v_on_422_, lean_object* v___x_423_, lean_object* v_x_424_){
_start:
{
uint8_t v_res_425_; lean_object* v_r_426_; 
v_res_425_ = lp_choreo_List_all___at___00Choreo_rulesOfFrame_spec__7(v_pos_421_, v_on_422_, v___x_423_, v_x_424_);
lean_dec(v___x_423_);
lean_dec(v_pos_421_);
v_r_426_ = lean_box(v_res_425_);
return v_r_426_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_rulesOfFrame_spec__4(lean_object* v_pos_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
if (lean_obj_tag(v_a_428_) == 0)
{
lean_object* v___x_430_; 
v___x_430_ = l_List_reverse___redArg(v_a_429_);
return v___x_430_;
}
else
{
lean_object* v_head_431_; lean_object* v_tail_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_444_; 
v_head_431_ = lean_ctor_get(v_a_428_, 0);
v_tail_432_ = lean_ctor_get(v_a_428_, 1);
v_isSharedCheck_444_ = !lean_is_exclusive(v_a_428_);
if (v_isSharedCheck_444_ == 0)
{
v___x_434_ = v_a_428_;
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_tail_432_);
lean_inc(v_head_431_);
lean_dec(v_a_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_444_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_437_; uint8_t v___x_438_; 
v___x_436_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_head_431_);
v___x_437_ = l_List_getD___redArg(v_pos_427_, v_head_431_, v___x_436_);
v___x_438_ = lp_choreo_Choreo_Pt_onStage(v___x_437_);
lean_dec(v___x_437_);
if (v___x_438_ == 0)
{
lean_object* v___x_439_; 
lean_del_object(v___x_434_);
lean_dec(v_head_431_);
v___x_439_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_pos_427_, v_tail_432_, v_a_429_);
return v___x_439_;
}
else
{
lean_object* v___x_441_; 
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v_a_429_);
v___x_441_ = v___x_434_;
goto v_reusejp_440_;
}
else
{
lean_object* v_reuseFailAlloc_443_; 
v_reuseFailAlloc_443_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_443_, 0, v_head_431_);
lean_ctor_set(v_reuseFailAlloc_443_, 1, v_a_429_);
v___x_441_ = v_reuseFailAlloc_443_;
goto v_reusejp_440_;
}
v_reusejp_440_:
{
lean_object* v___x_442_; 
v___x_442_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_pos_427_, v_tail_432_, v___x_441_);
return v___x_442_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_rulesOfFrame_spec__4___boxed(lean_object* v_pos_445_, lean_object* v_a_446_, lean_object* v_a_447_){
_start:
{
lean_object* v_res_448_; 
v_res_448_ = lp_choreo_List_filterTR_loop___at___00Choreo_rulesOfFrame_spec__4(v_pos_445_, v_a_446_, v_a_447_);
lean_dec(v_pos_445_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2___lam__0(lean_object* v_pos_449_, lean_object* v_i_450_){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v_x_453_; 
v___x_451_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_452_ = l_List_getD___redArg(v_pos_449_, v_i_450_, v___x_451_);
v_x_453_ = lean_ctor_get(v___x_452_, 0);
lean_inc(v_x_453_);
lean_dec(v___x_452_);
return v_x_453_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2___lam__0___boxed(lean_object* v_pos_454_, lean_object* v_i_455_){
_start:
{
lean_object* v_res_456_; 
v_res_456_ = lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2___lam__0(v_pos_454_, v_i_455_);
lean_dec(v_pos_454_);
return v_res_456_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0_spec__0(lean_object* v_pos_457_, lean_object* v_a_458_, lean_object* v_a_459_){
_start:
{
if (lean_obj_tag(v_a_458_) == 0)
{
lean_object* v___x_460_; 
v___x_460_ = l_List_reverse___redArg(v_a_459_);
return v___x_460_;
}
else
{
lean_object* v_head_461_; lean_object* v_tail_462_; lean_object* v___x_464_; uint8_t v_isShared_465_; uint8_t v_isSharedCheck_473_; 
v_head_461_ = lean_ctor_get(v_a_458_, 0);
v_tail_462_ = lean_ctor_get(v_a_458_, 1);
v_isSharedCheck_473_ = !lean_is_exclusive(v_a_458_);
if (v_isSharedCheck_473_ == 0)
{
v___x_464_ = v_a_458_;
v_isShared_465_ = v_isSharedCheck_473_;
goto v_resetjp_463_;
}
else
{
lean_inc(v_tail_462_);
lean_inc(v_head_461_);
lean_dec(v_a_458_);
v___x_464_ = lean_box(0);
v_isShared_465_ = v_isSharedCheck_473_;
goto v_resetjp_463_;
}
v_resetjp_463_:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v_x_468_; lean_object* v___x_470_; 
v___x_466_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_467_ = l_List_getD___redArg(v_pos_457_, v_head_461_, v___x_466_);
v_x_468_ = lean_ctor_get(v___x_467_, 0);
lean_inc(v_x_468_);
lean_dec(v___x_467_);
if (v_isShared_465_ == 0)
{
lean_ctor_set(v___x_464_, 1, v_a_459_);
lean_ctor_set(v___x_464_, 0, v_x_468_);
v___x_470_ = v___x_464_;
goto v_reusejp_469_;
}
else
{
lean_object* v_reuseFailAlloc_472_; 
v_reuseFailAlloc_472_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_472_, 0, v_x_468_);
lean_ctor_set(v_reuseFailAlloc_472_, 1, v_a_459_);
v___x_470_ = v_reuseFailAlloc_472_;
goto v_reusejp_469_;
}
v_reusejp_469_:
{
v_a_458_ = v_tail_462_;
v_a_459_ = v___x_470_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0_spec__0___boxed(lean_object* v_pos_474_, lean_object* v_a_475_, lean_object* v_a_476_){
_start:
{
lean_object* v_res_477_; 
v_res_477_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0_spec__0(v_pos_474_, v_a_475_, v_a_476_);
lean_dec(v_pos_474_);
return v_res_477_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0(lean_object* v_pos_478_, lean_object* v_a_479_, lean_object* v_a_480_){
_start:
{
if (lean_obj_tag(v_a_479_) == 0)
{
lean_object* v___x_481_; 
v___x_481_ = l_List_reverse___redArg(v_a_480_);
return v___x_481_;
}
else
{
lean_object* v_head_482_; lean_object* v_tail_483_; lean_object* v___x_485_; uint8_t v_isShared_486_; uint8_t v_isSharedCheck_494_; 
v_head_482_ = lean_ctor_get(v_a_479_, 0);
v_tail_483_ = lean_ctor_get(v_a_479_, 1);
v_isSharedCheck_494_ = !lean_is_exclusive(v_a_479_);
if (v_isSharedCheck_494_ == 0)
{
v___x_485_ = v_a_479_;
v_isShared_486_ = v_isSharedCheck_494_;
goto v_resetjp_484_;
}
else
{
lean_inc(v_tail_483_);
lean_inc(v_head_482_);
lean_dec(v_a_479_);
v___x_485_ = lean_box(0);
v_isShared_486_ = v_isSharedCheck_494_;
goto v_resetjp_484_;
}
v_resetjp_484_:
{
lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v_x_489_; lean_object* v___x_491_; 
v___x_487_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_488_ = l_List_getD___redArg(v_pos_478_, v_head_482_, v___x_487_);
v_x_489_ = lean_ctor_get(v___x_488_, 0);
lean_inc(v_x_489_);
lean_dec(v___x_488_);
if (v_isShared_486_ == 0)
{
lean_ctor_set(v___x_485_, 1, v_a_480_);
lean_ctor_set(v___x_485_, 0, v_x_489_);
v___x_491_ = v___x_485_;
goto v_reusejp_490_;
}
else
{
lean_object* v_reuseFailAlloc_493_; 
v_reuseFailAlloc_493_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_493_, 0, v_x_489_);
lean_ctor_set(v_reuseFailAlloc_493_, 1, v_a_480_);
v___x_491_ = v_reuseFailAlloc_493_;
goto v_reusejp_490_;
}
v_reusejp_490_:
{
lean_object* v___x_492_; 
v___x_492_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0_spec__0(v_pos_478_, v_tail_483_, v___x_491_);
return v___x_492_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0___boxed(lean_object* v_pos_495_, lean_object* v_a_496_, lean_object* v_a_497_){
_start:
{
lean_object* v_res_498_; 
v_res_498_ = lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0(v_pos_495_, v_a_496_, v_a_497_);
lean_dec(v_pos_495_);
return v_res_498_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4(lean_object* v_pos_500_, lean_object* v_f_501_, lean_object* v_a_502_, lean_object* v_a_503_){
_start:
{
if (lean_obj_tag(v_a_502_) == 0)
{
lean_object* v___x_504_; 
lean_dec(v_f_501_);
lean_dec(v_pos_500_);
v___x_504_ = lean_array_to_list(v_a_503_);
return v___x_504_;
}
else
{
lean_object* v_head_505_; lean_object* v_tail_506_; lean_object* v_fst_507_; lean_object* v_snd_508_; lean_object* v___x_509_; lean_object* v___x_510_; uint8_t v___x_511_; 
v_head_505_ = lean_ctor_get(v_a_502_, 0);
lean_inc(v_head_505_);
v_tail_506_ = lean_ctor_get(v_a_502_, 1);
lean_inc(v_tail_506_);
lean_dec_ref_known(v_a_502_, 2);
v_fst_507_ = lean_ctor_get(v_head_505_, 0);
lean_inc(v_fst_507_);
v_snd_508_ = lean_ctor_get(v_head_505_, 1);
lean_inc(v_snd_508_);
lean_dec(v_head_505_);
v___x_509_ = l_List_lengthTR___redArg(v_snd_508_);
v___x_510_ = lean_unsigned_to_nat(3u);
v___x_511_ = lean_nat_dec_lt(v___x_509_, v___x_510_);
lean_dec(v___x_509_);
if (v___x_511_ == 0)
{
lean_object* v___f_512_; lean_object* v_ordered_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; 
lean_inc(v_pos_500_);
v___f_512_ = lean_alloc_closure((void*)(lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_512_, 0, v_pos_500_);
v_ordered_513_ = lp_choreo_Choreo_sortBy(v___f_512_, v_snd_508_);
v___x_514_ = lean_box(0);
lean_inc(v_ordered_513_);
v___x_515_ = lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0(v_pos_500_, v_ordered_513_, v___x_514_);
v___x_516_ = lp_choreo_Choreo_evenStep(v___x_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_dec(v_ordered_513_);
lean_dec(v_fst_507_);
v_a_502_ = v_tail_506_;
goto _start;
}
else
{
lean_object* v_val_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; 
v_val_518_ = lean_ctor_get(v___x_516_, 0);
lean_inc(v_val_518_);
lean_dec_ref_known(v___x_516_, 1);
v___x_519_ = lp_choreo_Choreo_rowName(v_fst_507_);
lean_dec(v_fst_507_);
v___x_520_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0));
v___x_521_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
lean_inc(v_f_501_);
v___x_522_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_522_, 0, v___x_519_);
lean_ctor_set(v___x_522_, 1, v___x_520_);
lean_ctor_set(v___x_522_, 2, v_f_501_);
lean_ctor_set(v___x_522_, 3, v_ordered_513_);
lean_ctor_set(v___x_522_, 4, v_val_518_);
lean_ctor_set(v___x_522_, 5, v___x_521_);
lean_ctor_set(v___x_522_, 6, v___x_514_);
lean_ctor_set(v___x_522_, 7, v___x_521_);
v___x_523_ = lean_array_push(v_a_503_, v___x_522_);
v_a_502_ = v_tail_506_;
v_a_503_ = v___x_523_;
goto _start;
}
}
else
{
lean_dec(v_snd_508_);
lean_dec(v_fst_507_);
v_a_502_ = v_tail_506_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2(lean_object* v_pos_526_, lean_object* v_f_527_, lean_object* v_a_528_, lean_object* v_a_529_){
_start:
{
if (lean_obj_tag(v_a_528_) == 0)
{
lean_object* v___x_530_; 
lean_dec(v_f_527_);
lean_dec(v_pos_526_);
v___x_530_ = lean_array_to_list(v_a_529_);
return v___x_530_;
}
else
{
lean_object* v_head_531_; lean_object* v_tail_532_; lean_object* v_fst_533_; lean_object* v_snd_534_; lean_object* v___x_535_; lean_object* v___x_536_; uint8_t v___x_537_; 
v_head_531_ = lean_ctor_get(v_a_528_, 0);
lean_inc(v_head_531_);
v_tail_532_ = lean_ctor_get(v_a_528_, 1);
lean_inc(v_tail_532_);
lean_dec_ref_known(v_a_528_, 2);
v_fst_533_ = lean_ctor_get(v_head_531_, 0);
lean_inc(v_fst_533_);
v_snd_534_ = lean_ctor_get(v_head_531_, 1);
lean_inc(v_snd_534_);
lean_dec(v_head_531_);
v___x_535_ = l_List_lengthTR___redArg(v_snd_534_);
v___x_536_ = lean_unsigned_to_nat(3u);
v___x_537_ = lean_nat_dec_lt(v___x_535_, v___x_536_);
lean_dec(v___x_535_);
if (v___x_537_ == 0)
{
lean_object* v___f_538_; lean_object* v_ordered_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
lean_inc(v_pos_526_);
v___f_538_ = lean_alloc_closure((void*)(lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2___lam__0___boxed), 2, 1);
lean_closure_set(v___f_538_, 0, v_pos_526_);
v_ordered_539_ = lp_choreo_Choreo_sortBy(v___f_538_, v_snd_534_);
v___x_540_ = lean_box(0);
lean_inc(v_ordered_539_);
v___x_541_ = lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__0(v_pos_526_, v_ordered_539_, v___x_540_);
v___x_542_ = lp_choreo_Choreo_evenStep(v___x_541_);
if (lean_obj_tag(v___x_542_) == 0)
{
lean_object* v___x_543_; 
lean_dec(v_ordered_539_);
lean_dec(v_fst_533_);
v___x_543_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4(v_pos_526_, v_f_527_, v_tail_532_, v_a_529_);
return v___x_543_;
}
else
{
lean_object* v_val_544_; lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; 
v_val_544_ = lean_ctor_get(v___x_542_, 0);
lean_inc(v_val_544_);
lean_dec_ref_known(v___x_542_, 1);
v___x_545_ = lp_choreo_Choreo_rowName(v_fst_533_);
lean_dec(v_fst_533_);
v___x_546_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0));
v___x_547_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
lean_inc(v_f_527_);
v___x_548_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_548_, 0, v___x_545_);
lean_ctor_set(v___x_548_, 1, v___x_546_);
lean_ctor_set(v___x_548_, 2, v_f_527_);
lean_ctor_set(v___x_548_, 3, v_ordered_539_);
lean_ctor_set(v___x_548_, 4, v_val_544_);
lean_ctor_set(v___x_548_, 5, v___x_547_);
lean_ctor_set(v___x_548_, 6, v___x_540_);
lean_ctor_set(v___x_548_, 7, v___x_547_);
v___x_549_ = lean_array_push(v_a_529_, v___x_548_);
v___x_550_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4(v_pos_526_, v_f_527_, v_tail_532_, v___x_549_);
return v___x_550_;
}
}
else
{
lean_object* v___x_551_; 
lean_dec(v_snd_534_);
lean_dec(v_fst_533_);
v___x_551_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4(v_pos_526_, v_f_527_, v_tail_532_, v_a_529_);
return v___x_551_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3___lam__0(lean_object* v_pos_552_, lean_object* v_i_553_){
_start:
{
lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v_y_556_; 
v___x_554_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_555_ = l_List_getD___redArg(v_pos_552_, v_i_553_, v___x_554_);
v_y_556_ = lean_ctor_get(v___x_555_, 1);
lean_inc(v_y_556_);
lean_dec(v___x_555_);
return v_y_556_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3___lam__0___boxed(lean_object* v_pos_557_, lean_object* v_i_558_){
_start:
{
lean_object* v_res_559_; 
v_res_559_ = lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3___lam__0(v_pos_557_, v_i_558_);
lean_dec(v_pos_557_);
return v_res_559_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1_spec__2(lean_object* v_pos_560_, lean_object* v_a_561_, lean_object* v_a_562_){
_start:
{
if (lean_obj_tag(v_a_561_) == 0)
{
lean_object* v___x_563_; 
v___x_563_ = l_List_reverse___redArg(v_a_562_);
return v___x_563_;
}
else
{
lean_object* v_head_564_; lean_object* v_tail_565_; lean_object* v___x_567_; uint8_t v_isShared_568_; uint8_t v_isSharedCheck_576_; 
v_head_564_ = lean_ctor_get(v_a_561_, 0);
v_tail_565_ = lean_ctor_get(v_a_561_, 1);
v_isSharedCheck_576_ = !lean_is_exclusive(v_a_561_);
if (v_isSharedCheck_576_ == 0)
{
v___x_567_ = v_a_561_;
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
else
{
lean_inc(v_tail_565_);
lean_inc(v_head_564_);
lean_dec(v_a_561_);
v___x_567_ = lean_box(0);
v_isShared_568_ = v_isSharedCheck_576_;
goto v_resetjp_566_;
}
v_resetjp_566_:
{
lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v_y_571_; lean_object* v___x_573_; 
v___x_569_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_570_ = l_List_getD___redArg(v_pos_560_, v_head_564_, v___x_569_);
v_y_571_ = lean_ctor_get(v___x_570_, 1);
lean_inc(v_y_571_);
lean_dec(v___x_570_);
if (v_isShared_568_ == 0)
{
lean_ctor_set(v___x_567_, 1, v_a_562_);
lean_ctor_set(v___x_567_, 0, v_y_571_);
v___x_573_ = v___x_567_;
goto v_reusejp_572_;
}
else
{
lean_object* v_reuseFailAlloc_575_; 
v_reuseFailAlloc_575_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_575_, 0, v_y_571_);
lean_ctor_set(v_reuseFailAlloc_575_, 1, v_a_562_);
v___x_573_ = v_reuseFailAlloc_575_;
goto v_reusejp_572_;
}
v_reusejp_572_:
{
v_a_561_ = v_tail_565_;
v_a_562_ = v___x_573_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1_spec__2___boxed(lean_object* v_pos_577_, lean_object* v_a_578_, lean_object* v_a_579_){
_start:
{
lean_object* v_res_580_; 
v_res_580_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1_spec__2(v_pos_577_, v_a_578_, v_a_579_);
lean_dec(v_pos_577_);
return v_res_580_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1(lean_object* v_pos_581_, lean_object* v_a_582_, lean_object* v_a_583_){
_start:
{
if (lean_obj_tag(v_a_582_) == 0)
{
lean_object* v___x_584_; 
v___x_584_ = l_List_reverse___redArg(v_a_583_);
return v___x_584_;
}
else
{
lean_object* v_head_585_; lean_object* v_tail_586_; lean_object* v___x_588_; uint8_t v_isShared_589_; uint8_t v_isSharedCheck_597_; 
v_head_585_ = lean_ctor_get(v_a_582_, 0);
v_tail_586_ = lean_ctor_get(v_a_582_, 1);
v_isSharedCheck_597_ = !lean_is_exclusive(v_a_582_);
if (v_isSharedCheck_597_ == 0)
{
v___x_588_ = v_a_582_;
v_isShared_589_ = v_isSharedCheck_597_;
goto v_resetjp_587_;
}
else
{
lean_inc(v_tail_586_);
lean_inc(v_head_585_);
lean_dec(v_a_582_);
v___x_588_ = lean_box(0);
v_isShared_589_ = v_isSharedCheck_597_;
goto v_resetjp_587_;
}
v_resetjp_587_:
{
lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v_y_592_; lean_object* v___x_594_; 
v___x_590_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_591_ = l_List_getD___redArg(v_pos_581_, v_head_585_, v___x_590_);
v_y_592_ = lean_ctor_get(v___x_591_, 1);
lean_inc(v_y_592_);
lean_dec(v___x_591_);
if (v_isShared_589_ == 0)
{
lean_ctor_set(v___x_588_, 1, v_a_583_);
lean_ctor_set(v___x_588_, 0, v_y_592_);
v___x_594_ = v___x_588_;
goto v_reusejp_593_;
}
else
{
lean_object* v_reuseFailAlloc_596_; 
v_reuseFailAlloc_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_596_, 0, v_y_592_);
lean_ctor_set(v_reuseFailAlloc_596_, 1, v_a_583_);
v___x_594_ = v_reuseFailAlloc_596_;
goto v_reusejp_593_;
}
v_reusejp_593_:
{
lean_object* v___x_595_; 
v___x_595_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1_spec__2(v_pos_581_, v_tail_586_, v___x_594_);
return v___x_595_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1___boxed(lean_object* v_pos_598_, lean_object* v_a_599_, lean_object* v_a_600_){
_start:
{
lean_object* v_res_601_; 
v_res_601_ = lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1(v_pos_598_, v_a_599_, v_a_600_);
lean_dec(v_pos_598_);
return v_res_601_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3_spec__6(lean_object* v_pos_602_, lean_object* v_f_603_, lean_object* v_a_604_, lean_object* v_a_605_){
_start:
{
if (lean_obj_tag(v_a_604_) == 0)
{
lean_object* v___x_606_; 
lean_dec(v_f_603_);
lean_dec(v_pos_602_);
v___x_606_ = lean_array_to_list(v_a_605_);
return v___x_606_;
}
else
{
lean_object* v_head_607_; lean_object* v_tail_608_; lean_object* v_fst_609_; lean_object* v_snd_610_; lean_object* v___x_611_; lean_object* v___x_612_; uint8_t v___x_613_; 
v_head_607_ = lean_ctor_get(v_a_604_, 0);
lean_inc(v_head_607_);
v_tail_608_ = lean_ctor_get(v_a_604_, 1);
lean_inc(v_tail_608_);
lean_dec_ref_known(v_a_604_, 2);
v_fst_609_ = lean_ctor_get(v_head_607_, 0);
lean_inc(v_fst_609_);
v_snd_610_ = lean_ctor_get(v_head_607_, 1);
lean_inc(v_snd_610_);
lean_dec(v_head_607_);
v___x_611_ = l_List_lengthTR___redArg(v_snd_610_);
v___x_612_ = lean_unsigned_to_nat(3u);
v___x_613_ = lean_nat_dec_lt(v___x_611_, v___x_612_);
lean_dec(v___x_611_);
if (v___x_613_ == 0)
{
lean_object* v___f_614_; lean_object* v_ordered_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; 
lean_inc(v_pos_602_);
v___f_614_ = lean_alloc_closure((void*)(lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3___lam__0___boxed), 2, 1);
lean_closure_set(v___f_614_, 0, v_pos_602_);
v_ordered_615_ = lp_choreo_Choreo_sortBy(v___f_614_, v_snd_610_);
v___x_616_ = lean_box(0);
lean_inc(v_ordered_615_);
v___x_617_ = lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1(v_pos_602_, v_ordered_615_, v___x_616_);
v___x_618_ = lp_choreo_Choreo_evenStep(v___x_617_);
if (lean_obj_tag(v___x_618_) == 0)
{
lean_dec(v_ordered_615_);
lean_dec(v_fst_609_);
v_a_604_ = v_tail_608_;
goto _start;
}
else
{
lean_object* v_val_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v_val_620_ = lean_ctor_get(v___x_618_, 0);
lean_inc(v_val_620_);
lean_dec_ref_known(v___x_618_, 1);
v___x_621_ = lp_choreo_Choreo_colName(v_fst_609_);
lean_dec(v_fst_609_);
v___x_622_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0));
v___x_623_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
lean_inc(v_f_603_);
v___x_624_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_624_, 0, v___x_621_);
lean_ctor_set(v___x_624_, 1, v___x_622_);
lean_ctor_set(v___x_624_, 2, v_f_603_);
lean_ctor_set(v___x_624_, 3, v_ordered_615_);
lean_ctor_set(v___x_624_, 4, v___x_623_);
lean_ctor_set(v___x_624_, 5, v_val_620_);
lean_ctor_set(v___x_624_, 6, v___x_616_);
lean_ctor_set(v___x_624_, 7, v___x_623_);
v___x_625_ = lean_array_push(v_a_605_, v___x_624_);
v_a_604_ = v_tail_608_;
v_a_605_ = v___x_625_;
goto _start;
}
}
else
{
lean_dec(v_snd_610_);
lean_dec(v_fst_609_);
v_a_604_ = v_tail_608_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3(lean_object* v_pos_628_, lean_object* v_f_629_, lean_object* v_a_630_, lean_object* v_a_631_){
_start:
{
if (lean_obj_tag(v_a_630_) == 0)
{
lean_object* v___x_632_; 
lean_dec(v_f_629_);
lean_dec(v_pos_628_);
v___x_632_ = lean_array_to_list(v_a_631_);
return v___x_632_;
}
else
{
lean_object* v_head_633_; lean_object* v_tail_634_; lean_object* v_fst_635_; lean_object* v_snd_636_; lean_object* v___x_637_; lean_object* v___x_638_; uint8_t v___x_639_; 
v_head_633_ = lean_ctor_get(v_a_630_, 0);
lean_inc(v_head_633_);
v_tail_634_ = lean_ctor_get(v_a_630_, 1);
lean_inc(v_tail_634_);
lean_dec_ref_known(v_a_630_, 2);
v_fst_635_ = lean_ctor_get(v_head_633_, 0);
lean_inc(v_fst_635_);
v_snd_636_ = lean_ctor_get(v_head_633_, 1);
lean_inc(v_snd_636_);
lean_dec(v_head_633_);
v___x_637_ = l_List_lengthTR___redArg(v_snd_636_);
v___x_638_ = lean_unsigned_to_nat(3u);
v___x_639_ = lean_nat_dec_lt(v___x_637_, v___x_638_);
lean_dec(v___x_637_);
if (v___x_639_ == 0)
{
lean_object* v___f_640_; lean_object* v_ordered_641_; lean_object* v___x_642_; lean_object* v___x_643_; lean_object* v___x_644_; 
lean_inc(v_pos_628_);
v___f_640_ = lean_alloc_closure((void*)(lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3___lam__0___boxed), 2, 1);
lean_closure_set(v___f_640_, 0, v_pos_628_);
v_ordered_641_ = lp_choreo_Choreo_sortBy(v___f_640_, v_snd_636_);
v___x_642_ = lean_box(0);
lean_inc(v_ordered_641_);
v___x_643_ = lp_choreo_List_mapTR_loop___at___00Choreo_rulesOfFrame_spec__1(v_pos_628_, v_ordered_641_, v___x_642_);
v___x_644_ = lp_choreo_Choreo_evenStep(v___x_643_);
if (lean_obj_tag(v___x_644_) == 0)
{
lean_object* v___x_645_; 
lean_dec(v_ordered_641_);
lean_dec(v_fst_635_);
v___x_645_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3_spec__6(v_pos_628_, v_f_629_, v_tail_634_, v_a_631_);
return v___x_645_;
}
else
{
lean_object* v_val_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v_val_646_ = lean_ctor_get(v___x_644_, 0);
lean_inc(v_val_646_);
lean_dec_ref_known(v___x_644_, 1);
v___x_647_ = lp_choreo_Choreo_colName(v_fst_635_);
lean_dec(v_fst_635_);
v___x_648_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0));
v___x_649_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
lean_inc(v_f_629_);
v___x_650_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_650_, 0, v___x_647_);
lean_ctor_set(v___x_650_, 1, v___x_648_);
lean_ctor_set(v___x_650_, 2, v_f_629_);
lean_ctor_set(v___x_650_, 3, v_ordered_641_);
lean_ctor_set(v___x_650_, 4, v___x_649_);
lean_ctor_set(v___x_650_, 5, v_val_646_);
lean_ctor_set(v___x_650_, 6, v___x_642_);
lean_ctor_set(v___x_650_, 7, v___x_649_);
v___x_651_ = lean_array_push(v_a_631_, v___x_650_);
v___x_652_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3_spec__6(v_pos_628_, v_f_629_, v_tail_634_, v___x_651_);
return v___x_652_;
}
}
else
{
lean_object* v___x_653_; 
lean_dec(v_snd_636_);
lean_dec(v_fst_635_);
v___x_653_ = lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3_spec__6(v_pos_628_, v_f_629_, v_tail_634_, v_a_631_);
return v___x_653_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rulesOfFrame(lean_object* v_f_660_, lean_object* v_pos_661_){
_start:
{
lean_object* v___f_662_; lean_object* v___f_663_; lean_object* v___x_664_; lean_object* v___x_665_; lean_object* v_rows_666_; lean_object* v___x_667_; lean_object* v_cols_668_; lean_object* v___x_673_; lean_object* v___x_674_; lean_object* v___x_675_; lean_object* v_on_676_; lean_object* v___x_677_; lean_object* v___x_678_; uint8_t v___x_679_; 
v___f_662_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__0));
v___f_663_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__1));
v___x_664_ = lp_choreo_Choreo_groupsBy(v_pos_661_, v___f_663_);
v___x_665_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__2));
lean_inc_n(v_f_660_, 2);
lean_inc_n(v_pos_661_, 2);
v_rows_666_ = lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2(v_pos_661_, v_f_660_, v___x_664_, v___x_665_);
v___x_667_ = lp_choreo_Choreo_groupsBy(v_pos_661_, v___f_662_);
v_cols_668_ = lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__3(v_pos_661_, v_f_660_, v___x_667_, v___x_665_);
v___x_673_ = l_List_lengthTR___redArg(v_pos_661_);
v___x_674_ = l_List_range(v___x_673_);
v___x_675_ = lean_box(0);
v_on_676_ = lp_choreo_List_filterTR_loop___at___00Choreo_rulesOfFrame_spec__4(v_pos_661_, v___x_674_, v___x_675_);
v___x_677_ = lean_unsigned_to_nat(2u);
v___x_678_ = l_List_lengthTR___redArg(v_on_676_);
v___x_679_ = lean_nat_dec_le(v___x_677_, v___x_678_);
if (v___x_679_ == 0)
{
lean_dec(v___x_678_);
lean_dec(v_on_676_);
lean_dec(v_pos_661_);
lean_dec(v_f_660_);
goto v___jp_669_;
}
else
{
lean_object* v_pairs_680_; uint8_t v___x_681_; 
lean_inc_n(v_on_676_, 3);
v_pairs_680_ = lp_choreo_List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__6(v_pos_661_, v_on_676_, v_on_676_, v___x_665_);
v___x_681_ = lp_choreo_List_all___at___00Choreo_rulesOfFrame_spec__7(v_pos_661_, v_on_676_, v___x_678_, v_on_676_);
lean_dec(v___x_678_);
lean_dec(v_pos_661_);
if (v___x_681_ == 0)
{
lean_dec(v_pairs_680_);
lean_dec(v_f_660_);
goto v___jp_669_;
}
else
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; 
v___x_682_ = l_List_appendTR___redArg(v_rows_666_, v_cols_668_);
v___x_683_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__3));
v___x_684_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__4));
v___x_685_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
v___x_686_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_686_, 0, v___x_683_);
lean_ctor_set(v___x_686_, 1, v___x_684_);
lean_ctor_set(v___x_686_, 2, v_f_660_);
lean_ctor_set(v___x_686_, 3, v___x_675_);
lean_ctor_set(v___x_686_, 4, v___x_685_);
lean_ctor_set(v___x_686_, 5, v___x_685_);
lean_ctor_set(v___x_686_, 6, v_pairs_680_);
lean_ctor_set(v___x_686_, 7, v___x_685_);
v___x_687_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_687_, 0, v___x_686_);
lean_ctor_set(v___x_687_, 1, v___x_675_);
v___x_688_ = l_List_appendTR___redArg(v___x_682_, v___x_687_);
return v___x_688_;
}
}
v___jp_669_:
{
lean_object* v___x_670_; lean_object* v___x_671_; lean_object* v___x_672_; 
v___x_670_ = l_List_appendTR___redArg(v_rows_666_, v_cols_668_);
v___x_671_ = lean_box(0);
v___x_672_ = l_List_appendTR___redArg(v___x_670_, v___x_671_);
return v___x_672_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_detectRules_spec__0(lean_object* v_a_689_, lean_object* v_a_690_){
_start:
{
if (lean_obj_tag(v_a_689_) == 0)
{
lean_object* v___x_691_; 
v___x_691_ = lean_array_to_list(v_a_690_);
return v___x_691_;
}
else
{
lean_object* v_head_692_; lean_object* v_tail_693_; lean_object* v_fst_694_; lean_object* v_snd_695_; lean_object* v___x_696_; lean_object* v___x_697_; 
v_head_692_ = lean_ctor_get(v_a_689_, 0);
lean_inc(v_head_692_);
v_tail_693_ = lean_ctor_get(v_a_689_, 1);
lean_inc(v_tail_693_);
lean_dec_ref_known(v_a_689_, 2);
v_fst_694_ = lean_ctor_get(v_head_692_, 0);
lean_inc(v_fst_694_);
v_snd_695_ = lean_ctor_get(v_head_692_, 1);
lean_inc(v_snd_695_);
lean_dec(v_head_692_);
v___x_696_ = lp_choreo_Choreo_rulesOfFrame(v_snd_695_, v_fst_694_);
v___x_697_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_690_, v___x_696_);
v_a_689_ = v_tail_693_;
v_a_690_ = v___x_697_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_detectRules(lean_object* v_frames_699_){
_start:
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; 
v___x_700_ = lean_unsigned_to_nat(0u);
v___x_701_ = l_List_zipIdxTR___redArg(v_frames_699_, v___x_700_);
v___x_702_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__2));
v___x_703_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_detectRules_spec__0(v___x_701_, v___x_702_);
return v___x_703_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_isStill(lean_object* v_a_704_, lean_object* v_b_705_, lean_object* v_i_706_){
_start:
{
lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; uint8_t v___x_710_; 
v___x_707_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_i_706_);
v___x_708_ = l_List_getD___redArg(v_a_704_, v_i_706_, v___x_707_);
v___x_709_ = l_List_getD___redArg(v_b_705_, v_i_706_, v___x_707_);
v___x_710_ = lp_choreo_Choreo_instDecidableEqPt_decEq(v___x_708_, v___x_709_);
lean_dec(v___x_709_);
lean_dec(v___x_708_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_isStill___boxed(lean_object* v_a_711_, lean_object* v_b_712_, lean_object* v_i_713_){
_start:
{
uint8_t v_res_714_; lean_object* v_r_715_; 
v_res_714_ = lp_choreo_Choreo_isStill(v_a_711_, v_b_712_, v_i_713_);
lean_dec(v_b_712_);
lean_dec(v_a_711_);
v_r_715_ = lean_box(v_res_714_);
return v_r_715_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_nameList_spec__0(lean_object* v_names_716_, lean_object* v_a_717_, lean_object* v_a_718_){
_start:
{
if (lean_obj_tag(v_a_717_) == 0)
{
lean_object* v___x_719_; 
lean_dec_ref(v_names_716_);
v___x_719_ = l_List_reverse___redArg(v_a_718_);
return v___x_719_;
}
else
{
lean_object* v_head_720_; lean_object* v_tail_721_; lean_object* v___x_723_; uint8_t v_isShared_724_; uint8_t v_isSharedCheck_730_; 
v_head_720_ = lean_ctor_get(v_a_717_, 0);
v_tail_721_ = lean_ctor_get(v_a_717_, 1);
v_isSharedCheck_730_ = !lean_is_exclusive(v_a_717_);
if (v_isSharedCheck_730_ == 0)
{
v___x_723_ = v_a_717_;
v_isShared_724_ = v_isSharedCheck_730_;
goto v_resetjp_722_;
}
else
{
lean_inc(v_tail_721_);
lean_inc(v_head_720_);
lean_dec(v_a_717_);
v___x_723_ = lean_box(0);
v_isShared_724_ = v_isSharedCheck_730_;
goto v_resetjp_722_;
}
v_resetjp_722_:
{
lean_object* v___x_725_; lean_object* v___x_727_; 
lean_inc_ref(v_names_716_);
v___x_725_ = lean_apply_1(v_names_716_, v_head_720_);
if (v_isShared_724_ == 0)
{
lean_ctor_set(v___x_723_, 1, v_a_718_);
lean_ctor_set(v___x_723_, 0, v___x_725_);
v___x_727_ = v___x_723_;
goto v_reusejp_726_;
}
else
{
lean_object* v_reuseFailAlloc_729_; 
v_reuseFailAlloc_729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_729_, 0, v___x_725_);
lean_ctor_set(v_reuseFailAlloc_729_, 1, v_a_718_);
v___x_727_ = v_reuseFailAlloc_729_;
goto v_reusejp_726_;
}
v_reusejp_726_:
{
v_a_717_ = v_tail_721_;
v_a_718_ = v___x_727_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_nameList(lean_object* v_names_734_, lean_object* v_l_735_){
_start:
{
if (lean_obj_tag(v_l_735_) == 0)
{
lean_object* v___x_736_; 
lean_dec_ref(v_names_734_);
v___x_736_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__0));
return v___x_736_;
}
else
{
lean_object* v_tail_737_; 
v_tail_737_ = lean_ctor_get(v_l_735_, 1);
if (lean_obj_tag(v_tail_737_) == 0)
{
lean_object* v_head_738_; lean_object* v___x_739_; 
v_head_738_ = lean_ctor_get(v_l_735_, 0);
lean_inc(v_head_738_);
lean_dec_ref_known(v_l_735_, 2);
v___x_739_ = lean_apply_1(v_names_734_, v_head_738_);
return v___x_739_;
}
else
{
lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; lean_object* v___y_750_; lean_object* v___x_753_; 
v___x_740_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__1));
lean_inc_ref(v_l_735_);
v___x_741_ = lean_array_mk(v_l_735_);
v___x_742_ = lean_array_pop(v___x_741_);
v___x_743_ = lean_array_to_list(v___x_742_);
v___x_744_ = lean_box(0);
lean_inc_ref(v_names_734_);
v___x_745_ = lp_choreo_List_mapTR_loop___at___00Choreo_nameList_spec__0(v_names_734_, v___x_743_, v___x_744_);
v___x_746_ = l_String_intercalate(v___x_740_, v___x_745_);
v___x_747_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__2));
v___x_748_ = lean_string_append(v___x_746_, v___x_747_);
v___x_753_ = l_List_getLast_x3f___redArg(v_l_735_);
lean_dec_ref_known(v_l_735_, 2);
if (lean_obj_tag(v___x_753_) == 0)
{
lean_object* v___x_754_; 
v___x_754_ = lean_unsigned_to_nat(0u);
v___y_750_ = v___x_754_;
goto v___jp_749_;
}
else
{
lean_object* v_val_755_; 
v_val_755_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_val_755_);
lean_dec_ref_known(v___x_753_, 1);
v___y_750_ = v_val_755_;
goto v___jp_749_;
}
v___jp_749_:
{
lean_object* v___x_751_; lean_object* v___x_752_; 
v___x_751_ = lean_apply_1(v_names_734_, v___y_750_);
v___x_752_ = lean_string_append(v___x_748_, v___x_751_);
lean_dec_ref(v___x_751_);
return v___x_752_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__0(lean_object* v_pos_756_, uint8_t v_sl_757_, lean_object* v_a_758_, lean_object* v_a_759_){
_start:
{
if (lean_obj_tag(v_a_758_) == 0)
{
lean_object* v___x_760_; 
v___x_760_ = l_List_reverse___redArg(v_a_759_);
return v___x_760_;
}
else
{
lean_object* v_head_761_; lean_object* v_tail_762_; lean_object* v___x_764_; uint8_t v_isShared_765_; uint8_t v_isSharedCheck_778_; 
v_head_761_ = lean_ctor_get(v_a_758_, 0);
v_tail_762_ = lean_ctor_get(v_a_758_, 1);
v_isSharedCheck_778_ = !lean_is_exclusive(v_a_758_);
if (v_isSharedCheck_778_ == 0)
{
v___x_764_ = v_a_758_;
v_isShared_765_ = v_isSharedCheck_778_;
goto v_resetjp_763_;
}
else
{
lean_inc(v_tail_762_);
lean_inc(v_head_761_);
lean_dec(v_a_758_);
v___x_764_ = lean_box(0);
v_isShared_765_ = v_isSharedCheck_778_;
goto v_resetjp_763_;
}
v_resetjp_763_:
{
lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v_x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v___x_771_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_head_761_);
v___x_772_ = l_List_getD___redArg(v_pos_756_, v_head_761_, v___x_771_);
v_x_773_ = lean_ctor_get(v___x_772_, 0);
lean_inc(v_x_773_);
lean_dec(v___x_772_);
v___x_774_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
v___x_775_ = lean_int_dec_lt(v___x_774_, v_x_773_);
lean_dec(v_x_773_);
if (v_sl_757_ == 0)
{
if (v___x_775_ == 0)
{
goto v___jp_766_;
}
else
{
lean_del_object(v___x_764_);
lean_dec(v_head_761_);
v_a_758_ = v_tail_762_;
goto _start;
}
}
else
{
if (v___x_775_ == 0)
{
lean_del_object(v___x_764_);
lean_dec(v_head_761_);
v_a_758_ = v_tail_762_;
goto _start;
}
else
{
goto v___jp_766_;
}
}
v___jp_766_:
{
lean_object* v___x_768_; 
if (v_isShared_765_ == 0)
{
lean_ctor_set(v___x_764_, 1, v_a_759_);
v___x_768_ = v___x_764_;
goto v_reusejp_767_;
}
else
{
lean_object* v_reuseFailAlloc_770_; 
v_reuseFailAlloc_770_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_770_, 0, v_head_761_);
lean_ctor_set(v_reuseFailAlloc_770_, 1, v_a_759_);
v___x_768_ = v_reuseFailAlloc_770_;
goto v_reusejp_767_;
}
v_reusejp_767_:
{
v_a_758_ = v_tail_762_;
v_a_759_ = v___x_768_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__0___boxed(lean_object* v_pos_779_, lean_object* v_sl_780_, lean_object* v_a_781_, lean_object* v_a_782_){
_start:
{
uint8_t v_sl_boxed_783_; lean_object* v_res_784_; 
v_sl_boxed_783_ = lean_unbox(v_sl_780_);
v_res_784_ = lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__0(v_pos_779_, v_sl_boxed_783_, v_a_781_, v_a_782_);
lean_dec(v_pos_779_);
return v_res_784_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition___lam__0(lean_object* v_l_785_, lean_object* v_pos_786_, uint8_t v_sl_787_){
_start:
{
lean_object* v___x_788_; lean_object* v___x_789_; 
v___x_788_ = lean_box(0);
v___x_789_ = lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__0(v_pos_786_, v_sl_787_, v_l_785_, v___x_788_);
return v___x_789_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition___lam__0___boxed(lean_object* v_l_790_, lean_object* v_pos_791_, lean_object* v_sl_792_){
_start:
{
uint8_t v_sl_boxed_793_; lean_object* v_res_794_; 
v_sl_boxed_793_ = lean_unbox(v_sl_792_);
v_res_794_ = lp_choreo_Choreo_transition___lam__0(v_l_790_, v_pos_791_, v_sl_boxed_793_);
lean_dec(v_pos_791_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_transition_spec__3(lean_object* v_snd_795_, lean_object* v_x_796_){
_start:
{
if (lean_obj_tag(v_x_796_) == 0)
{
lean_object* v___x_797_; 
v___x_797_ = lean_box(0);
return v___x_797_;
}
else
{
lean_object* v_head_798_; lean_object* v_tail_799_; lean_object* v_fst_800_; uint8_t v___x_801_; 
v_head_798_ = lean_ctor_get(v_x_796_, 0);
v_tail_799_ = lean_ctor_get(v_x_796_, 1);
v_fst_800_ = lean_ctor_get(v_head_798_, 0);
v___x_801_ = lean_nat_dec_eq(v_fst_800_, v_snd_795_);
if (v___x_801_ == 0)
{
v_x_796_ = v_tail_799_;
goto _start;
}
else
{
lean_object* v___x_803_; 
lean_inc(v_head_798_);
v___x_803_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_803_, 0, v_head_798_);
return v___x_803_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_transition_spec__3___boxed(lean_object* v_snd_804_, lean_object* v_x_805_){
_start:
{
lean_object* v_res_806_; 
v_res_806_ = lp_choreo_List_find_x3f___at___00Choreo_transition_spec__3(v_snd_804_, v_x_805_);
lean_dec(v_x_805_);
lean_dec(v_snd_804_);
return v_res_806_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__6(lean_object* v_bends_807_, lean_object* v_a_808_, lean_object* v_b_809_, lean_object* v___y_810_, lean_object* v_a_811_, lean_object* v_a_812_){
_start:
{
if (lean_obj_tag(v_a_811_) == 0)
{
lean_object* v___x_813_; 
lean_dec_ref(v___y_810_);
v___x_813_ = l_List_reverse___redArg(v_a_812_);
return v___x_813_;
}
else
{
lean_object* v_head_814_; lean_object* v_tail_815_; lean_object* v___x_817_; uint8_t v_isShared_818_; uint8_t v_isSharedCheck_843_; 
v_head_814_ = lean_ctor_get(v_a_811_, 0);
v_tail_815_ = lean_ctor_get(v_a_811_, 1);
v_isSharedCheck_843_ = !lean_is_exclusive(v_a_811_);
if (v_isSharedCheck_843_ == 0)
{
v___x_817_ = v_a_811_;
v_isShared_818_ = v_isSharedCheck_843_;
goto v_resetjp_816_;
}
else
{
lean_inc(v_tail_815_);
lean_inc(v_head_814_);
lean_dec(v_a_811_);
v___x_817_ = lean_box(0);
v_isShared_818_ = v_isSharedCheck_843_;
goto v_resetjp_816_;
}
v_resetjp_816_:
{
lean_object* v___y_820_; lean_object* v_fst_825_; lean_object* v_snd_826_; lean_object* v___x_827_; 
v_fst_825_ = lean_ctor_get(v_head_814_, 0);
lean_inc(v_fst_825_);
v_snd_826_ = lean_ctor_get(v_head_814_, 1);
lean_inc(v_snd_826_);
lean_dec(v_head_814_);
v___x_827_ = lp_choreo_List_find_x3f___at___00Choreo_transition_spec__3(v_snd_826_, v_bends_807_);
if (lean_obj_tag(v___x_827_) == 0)
{
lean_dec(v_snd_826_);
v___y_820_ = v_fst_825_;
goto v___jp_819_;
}
else
{
lean_object* v_val_828_; lean_object* v_snd_829_; lean_object* v_fst_830_; lean_object* v_snd_831_; lean_object* v___x_833_; uint8_t v_isShared_834_; uint8_t v_isSharedCheck_842_; 
lean_dec(v_fst_825_);
v_val_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_val_828_);
lean_dec_ref_known(v___x_827_, 1);
v_snd_829_ = lean_ctor_get(v_val_828_, 1);
lean_inc(v_snd_829_);
lean_dec(v_val_828_);
v_fst_830_ = lean_ctor_get(v_snd_829_, 0);
v_snd_831_ = lean_ctor_get(v_snd_829_, 1);
v_isSharedCheck_842_ = !lean_is_exclusive(v_snd_829_);
if (v_isSharedCheck_842_ == 0)
{
v___x_833_ = v_snd_829_;
v_isShared_834_ = v_isSharedCheck_842_;
goto v_resetjp_832_;
}
else
{
lean_inc(v_snd_831_);
lean_inc(v_fst_830_);
lean_dec(v_snd_829_);
v___x_833_ = lean_box(0);
v_isShared_834_ = v_isSharedCheck_842_;
goto v_resetjp_832_;
}
v_resetjp_832_:
{
lean_object* v___x_835_; lean_object* v___x_836_; lean_object* v___x_838_; 
v___x_835_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_snd_826_);
v___x_836_ = l_List_getD___redArg(v_a_808_, v_snd_826_, v___x_835_);
if (v_isShared_834_ == 0)
{
v___x_838_ = v___x_833_;
goto v_reusejp_837_;
}
else
{
lean_object* v_reuseFailAlloc_841_; 
v_reuseFailAlloc_841_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_841_, 0, v_fst_830_);
lean_ctor_set(v_reuseFailAlloc_841_, 1, v_snd_831_);
v___x_838_ = v_reuseFailAlloc_841_;
goto v_reusejp_837_;
}
v_reusejp_837_:
{
lean_object* v___x_839_; lean_object* v___x_840_; 
v___x_839_ = l_List_getD___redArg(v_b_809_, v_snd_826_, v___x_835_);
lean_inc_ref(v___y_810_);
v___x_840_ = lp_choreo_Choreo_curvePath(v___x_836_, v___x_838_, v___x_839_, v___y_810_);
v___y_820_ = v___x_840_;
goto v___jp_819_;
}
}
}
v___jp_819_:
{
lean_object* v___x_822_; 
if (v_isShared_818_ == 0)
{
lean_ctor_set(v___x_817_, 1, v_a_812_);
lean_ctor_set(v___x_817_, 0, v___y_820_);
v___x_822_ = v___x_817_;
goto v_reusejp_821_;
}
else
{
lean_object* v_reuseFailAlloc_824_; 
v_reuseFailAlloc_824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_824_, 0, v___y_820_);
lean_ctor_set(v_reuseFailAlloc_824_, 1, v_a_812_);
v___x_822_ = v_reuseFailAlloc_824_;
goto v_reusejp_821_;
}
v_reusejp_821_:
{
v_a_811_ = v_tail_815_;
v_a_812_ = v___x_822_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__6___boxed(lean_object* v_bends_844_, lean_object* v_a_845_, lean_object* v_b_846_, lean_object* v___y_847_, lean_object* v_a_848_, lean_object* v_a_849_){
_start:
{
lean_object* v_res_850_; 
v_res_850_ = lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__6(v_bends_844_, v_a_845_, v_b_846_, v___y_847_, v_a_848_, v_a_849_);
lean_dec(v_b_846_);
lean_dec(v_a_845_);
lean_dec(v_bends_844_);
return v_res_850_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4(lean_object* v_k_853_, lean_object* v_a_854_, lean_object* v_a_855_){
_start:
{
if (lean_obj_tag(v_a_854_) == 0)
{
lean_object* v___x_856_; 
v___x_856_ = l_List_reverse___redArg(v_a_855_);
return v___x_856_;
}
else
{
lean_object* v_head_857_; lean_object* v_tail_858_; lean_object* v___x_860_; uint8_t v_isShared_861_; uint8_t v_isSharedCheck_873_; 
v_head_857_ = lean_ctor_get(v_a_854_, 0);
v_tail_858_ = lean_ctor_get(v_a_854_, 1);
v_isSharedCheck_873_ = !lean_is_exclusive(v_a_854_);
if (v_isSharedCheck_873_ == 0)
{
v___x_860_ = v_a_854_;
v_isShared_861_ = v_isSharedCheck_873_;
goto v_resetjp_859_;
}
else
{
lean_inc(v_tail_858_);
lean_inc(v_head_857_);
lean_dec(v_a_854_);
v___x_860_ = lean_box(0);
v_isShared_861_ = v_isSharedCheck_873_;
goto v_resetjp_859_;
}
v_resetjp_859_:
{
lean_object* v___x_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_870_; 
v___x_862_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__0));
v___x_863_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__1));
v___x_864_ = lean_nat_add(v_k_853_, v_head_857_);
lean_dec(v_head_857_);
v___x_865_ = lp_choreo_Choreo_stageRect;
v___x_866_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_866_, 0, v___x_864_);
lean_ctor_set(v___x_866_, 1, v___x_865_);
v___x_867_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_867_, 0, v___x_863_);
lean_ctor_set(v___x_867_, 1, v___x_866_);
v___x_868_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_868_, 0, v___x_862_);
lean_ctor_set(v___x_868_, 1, v___x_867_);
if (v_isShared_861_ == 0)
{
lean_ctor_set(v___x_860_, 1, v_a_855_);
lean_ctor_set(v___x_860_, 0, v___x_868_);
v___x_870_ = v___x_860_;
goto v_reusejp_869_;
}
else
{
lean_object* v_reuseFailAlloc_872_; 
v_reuseFailAlloc_872_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_872_, 0, v___x_868_);
lean_ctor_set(v_reuseFailAlloc_872_, 1, v_a_855_);
v___x_870_ = v_reuseFailAlloc_872_;
goto v_reusejp_869_;
}
v_reusejp_869_:
{
v_a_854_ = v_tail_858_;
v_a_855_ = v___x_870_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___boxed(lean_object* v_k_874_, lean_object* v_a_875_, lean_object* v_a_876_){
_start:
{
lean_object* v_res_877_; 
v_res_877_ = lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4(v_k_874_, v_a_875_, v_a_876_);
lean_dec(v_k_874_);
return v_res_877_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__1(lean_object* v_a_878_, lean_object* v_a_879_, lean_object* v_a_880_){
_start:
{
if (lean_obj_tag(v_a_879_) == 0)
{
lean_object* v___x_881_; 
v___x_881_ = l_List_reverse___redArg(v_a_880_);
return v___x_881_;
}
else
{
lean_object* v_head_882_; lean_object* v_tail_883_; lean_object* v___x_885_; uint8_t v_isShared_886_; uint8_t v_isSharedCheck_895_; 
v_head_882_ = lean_ctor_get(v_a_879_, 0);
v_tail_883_ = lean_ctor_get(v_a_879_, 1);
v_isSharedCheck_895_ = !lean_is_exclusive(v_a_879_);
if (v_isSharedCheck_895_ == 0)
{
v___x_885_ = v_a_879_;
v_isShared_886_ = v_isSharedCheck_895_;
goto v_resetjp_884_;
}
else
{
lean_inc(v_tail_883_);
lean_inc(v_head_882_);
lean_dec(v_a_879_);
v___x_885_ = lean_box(0);
v_isShared_886_ = v_isSharedCheck_895_;
goto v_resetjp_884_;
}
v_resetjp_884_:
{
lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_887_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_head_882_);
v___x_888_ = l_List_getD___redArg(v_a_878_, v_head_882_, v___x_887_);
v___x_889_ = lp_choreo_Choreo_Pt_onStage(v___x_888_);
lean_dec(v___x_888_);
if (v___x_889_ == 0)
{
lean_object* v___x_891_; 
if (v_isShared_886_ == 0)
{
lean_ctor_set(v___x_885_, 1, v_a_880_);
v___x_891_ = v___x_885_;
goto v_reusejp_890_;
}
else
{
lean_object* v_reuseFailAlloc_893_; 
v_reuseFailAlloc_893_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_893_, 0, v_head_882_);
lean_ctor_set(v_reuseFailAlloc_893_, 1, v_a_880_);
v___x_891_ = v_reuseFailAlloc_893_;
goto v_reusejp_890_;
}
v_reusejp_890_:
{
v_a_879_ = v_tail_883_;
v_a_880_ = v___x_891_;
goto _start;
}
}
else
{
lean_del_object(v___x_885_);
lean_dec(v_head_882_);
v_a_879_ = v_tail_883_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__1___boxed(lean_object* v_a_896_, lean_object* v_a_897_, lean_object* v_a_898_){
_start:
{
lean_object* v_res_899_; 
v_res_899_ = lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__1(v_a_896_, v_a_897_, v_a_898_);
lean_dec(v_a_896_);
return v_res_899_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__2(lean_object* v_a_900_, lean_object* v_b_901_, lean_object* v_a_902_, lean_object* v_a_903_){
_start:
{
if (lean_obj_tag(v_a_902_) == 0)
{
lean_object* v___x_904_; 
v___x_904_ = l_List_reverse___redArg(v_a_903_);
return v___x_904_;
}
else
{
lean_object* v_head_905_; lean_object* v_tail_906_; lean_object* v___x_908_; uint8_t v_isShared_909_; uint8_t v_isSharedCheck_921_; 
v_head_905_ = lean_ctor_get(v_a_902_, 0);
v_tail_906_ = lean_ctor_get(v_a_902_, 1);
v_isSharedCheck_921_ = !lean_is_exclusive(v_a_902_);
if (v_isSharedCheck_921_ == 0)
{
v___x_908_ = v_a_902_;
v_isShared_909_ = v_isSharedCheck_921_;
goto v_resetjp_907_;
}
else
{
lean_inc(v_tail_906_);
lean_inc(v_head_905_);
lean_dec(v_a_902_);
v___x_908_ = lean_box(0);
v_isShared_909_ = v_isSharedCheck_921_;
goto v_resetjp_907_;
}
v_resetjp_907_:
{
uint8_t v___y_911_; uint8_t v___x_917_; 
lean_inc(v_head_905_);
v___x_917_ = lp_choreo_Choreo_isStill(v_a_900_, v_b_901_, v_head_905_);
if (v___x_917_ == 0)
{
v___y_911_ = v___x_917_;
goto v___jp_910_;
}
else
{
lean_object* v___x_918_; lean_object* v___x_919_; uint8_t v___x_920_; 
v___x_918_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_head_905_);
v___x_919_ = l_List_getD___redArg(v_a_900_, v_head_905_, v___x_918_);
v___x_920_ = lp_choreo_Choreo_Pt_onStage(v___x_919_);
lean_dec(v___x_919_);
v___y_911_ = v___x_920_;
goto v___jp_910_;
}
v___jp_910_:
{
if (v___y_911_ == 0)
{
lean_del_object(v___x_908_);
lean_dec(v_head_905_);
v_a_902_ = v_tail_906_;
goto _start;
}
else
{
lean_object* v___x_914_; 
if (v_isShared_909_ == 0)
{
lean_ctor_set(v___x_908_, 1, v_a_903_);
v___x_914_ = v___x_908_;
goto v_reusejp_913_;
}
else
{
lean_object* v_reuseFailAlloc_916_; 
v_reuseFailAlloc_916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_916_, 0, v_head_905_);
lean_ctor_set(v_reuseFailAlloc_916_, 1, v_a_903_);
v___x_914_ = v_reuseFailAlloc_916_;
goto v_reusejp_913_;
}
v_reusejp_913_:
{
v_a_902_ = v_tail_906_;
v_a_903_ = v___x_914_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__2___boxed(lean_object* v_a_922_, lean_object* v_b_923_, lean_object* v_a_924_, lean_object* v_a_925_){
_start:
{
lean_object* v_res_926_; 
v_res_926_ = lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__2(v_a_922_, v_b_923_, v_a_924_, v_a_925_);
lean_dec(v_b_923_);
lean_dec(v_a_922_);
return v_res_926_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_transition_spec__5(lean_object* v_a_927_, lean_object* v_b_928_, lean_object* v_x_929_, lean_object* v_x_930_){
_start:
{
if (lean_obj_tag(v_x_930_) == 0)
{
return v_x_929_;
}
else
{
lean_object* v_head_931_; lean_object* v_snd_932_; lean_object* v_tail_933_; lean_object* v_fst_934_; lean_object* v_fst_935_; lean_object* v_snd_936_; lean_object* v___x_938_; uint8_t v_isShared_939_; uint8_t v_isSharedCheck_954_; 
v_head_931_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_head_931_);
v_snd_932_ = lean_ctor_get(v_head_931_, 1);
lean_inc(v_snd_932_);
v_tail_933_ = lean_ctor_get(v_x_930_, 1);
lean_inc(v_tail_933_);
lean_dec_ref_known(v_x_930_, 2);
v_fst_934_ = lean_ctor_get(v_head_931_, 0);
lean_inc(v_fst_934_);
lean_dec(v_head_931_);
v_fst_935_ = lean_ctor_get(v_snd_932_, 0);
v_snd_936_ = lean_ctor_get(v_snd_932_, 1);
v_isSharedCheck_954_ = !lean_is_exclusive(v_snd_932_);
if (v_isSharedCheck_954_ == 0)
{
v___x_938_ = v_snd_932_;
v_isShared_939_ = v_isSharedCheck_954_;
goto v_resetjp_937_;
}
else
{
lean_inc(v_snd_936_);
lean_inc(v_fst_935_);
lean_dec(v_snd_932_);
v___x_938_ = lean_box(0);
v_isShared_939_ = v_isSharedCheck_954_;
goto v_resetjp_937_;
}
v_resetjp_937_:
{
lean_object* v_p_941_; 
if (v_isShared_939_ == 0)
{
v_p_941_ = v___x_938_;
goto v_reusejp_940_;
}
else
{
lean_object* v_reuseFailAlloc_953_; 
v_reuseFailAlloc_953_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_953_, 0, v_fst_935_);
lean_ctor_set(v_reuseFailAlloc_953_, 1, v_snd_936_);
v_p_941_ = v_reuseFailAlloc_953_;
goto v_reusejp_940_;
}
v_reusejp_940_:
{
lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v___x_944_; lean_object* v___x_945_; lean_object* v___x_946_; lean_object* v___x_947_; lean_object* v___x_948_; lean_object* v___x_949_; uint8_t v___x_950_; 
v___x_942_ = lp_choreo_Choreo_instInhabitedPt_default;
lean_inc(v_fst_934_);
v___x_943_ = l_List_getD___redArg(v_a_927_, v_fst_934_, v___x_942_);
v___x_944_ = lp_choreo_Choreo_distSq(v___x_943_, v_p_941_);
lean_dec(v___x_943_);
v___x_945_ = lp_choreo_Choreo_isqrt(v___x_944_);
lean_dec(v___x_944_);
v___x_946_ = l_List_getD___redArg(v_b_928_, v_fst_934_, v___x_942_);
v___x_947_ = lp_choreo_Choreo_distSq(v_p_941_, v___x_946_);
lean_dec(v___x_946_);
lean_dec_ref(v_p_941_);
v___x_948_ = lp_choreo_Choreo_isqrt(v___x_947_);
lean_dec(v___x_947_);
v___x_949_ = lean_int_add(v___x_945_, v___x_948_);
lean_dec(v___x_948_);
lean_dec(v___x_945_);
v___x_950_ = lean_int_dec_le(v_x_929_, v___x_949_);
if (v___x_950_ == 0)
{
lean_dec(v___x_949_);
v_x_930_ = v_tail_933_;
goto _start;
}
else
{
lean_dec(v_x_929_);
v_x_929_ = v___x_949_;
v_x_930_ = v_tail_933_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_transition_spec__5___boxed(lean_object* v_a_955_, lean_object* v_b_956_, lean_object* v_x_957_, lean_object* v_x_958_){
_start:
{
lean_object* v_res_959_; 
v_res_959_ = lp_choreo_List_foldl___at___00Choreo_transition_spec__5(v_a_955_, v_b_956_, v_x_957_, v_x_958_);
lean_dec(v_b_956_);
lean_dec(v_a_955_);
return v_res_959_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition(lean_object* v_names_985_, lean_object* v_n_986_, lean_object* v_a_987_, lean_object* v_b_988_, lean_object* v_k_989_, lean_object* v_frameNo_990_, lean_object* v_pace_991_, lean_object* v_envelope_992_, lean_object* v_slWing_993_, lean_object* v_srWing_994_, lean_object* v_way_995_, lean_object* v_gap_996_, lean_object* v_bends_997_){
_start:
{
lean_object* v___y_999_; lean_object* v___y_1000_; lean_object* v___y_1001_; lean_object* v___y_1005_; uint8_t v___y_1006_; lean_object* v___y_1007_; lean_object* v___y_1008_; lean_object* v___y_1009_; lean_object* v___y_1010_; lean_object* v_ids_1014_; lean_object* v___x_1015_; lean_object* v_offA_1016_; lean_object* v_offB_1017_; lean_object* v_entering_1018_; lean_object* v_leaving_1019_; lean_object* v_still_1020_; lean_object* v___y_1022_; uint8_t v___y_1023_; lean_object* v___y_1024_; lean_object* v___y_1025_; lean_object* v___y_1026_; uint8_t v___y_1027_; lean_object* v___y_1028_; lean_object* v___y_1054_; lean_object* v___y_1055_; uint8_t v___y_1056_; lean_object* v___y_1057_; lean_object* v___y_1058_; lean_object* v___y_1059_; lean_object* v___y_1060_; uint8_t v___y_1061_; lean_object* v___y_1062_; lean_object* v___y_1063_; lean_object* v___y_1072_; lean_object* v___y_1073_; uint8_t v___y_1074_; lean_object* v___y_1075_; lean_object* v___y_1076_; uint8_t v___y_1077_; lean_object* v___y_1078_; uint8_t v___y_1079_; lean_object* v___y_1080_; lean_object* v___y_1093_; lean_object* v___y_1094_; uint8_t v___y_1095_; lean_object* v___y_1096_; lean_object* v___y_1097_; lean_object* v___y_1098_; uint8_t v___y_1099_; lean_object* v___y_1100_; lean_object* v___y_1101_; uint8_t v___y_1102_; lean_object* v___y_1103_; lean_object* v___y_1104_; lean_object* v___y_1113_; lean_object* v___y_1114_; lean_object* v___y_1115_; uint8_t v___y_1116_; lean_object* v___y_1117_; lean_object* v___y_1118_; uint8_t v___y_1119_; uint8_t v___y_1120_; uint8_t v___y_1121_; lean_object* v___y_1122_; lean_object* v___y_1135_; uint8_t v___y_1136_; lean_object* v___y_1137_; lean_object* v___y_1138_; lean_object* v___y_1139_; lean_object* v___y_1140_; lean_object* v___y_1141_; lean_object* v___y_1142_; lean_object* v___y_1143_; lean_object* v___y_1144_; uint8_t v___y_1145_; uint8_t v___y_1146_; uint8_t v___y_1147_; lean_object* v___y_1148_; lean_object* v___y_1159_; uint8_t v___y_1160_; lean_object* v___y_1161_; lean_object* v___y_1162_; lean_object* v___y_1163_; lean_object* v___y_1164_; lean_object* v___y_1165_; lean_object* v___y_1166_; lean_object* v___y_1167_; uint8_t v___y_1168_; uint8_t v___y_1169_; uint8_t v___y_1170_; lean_object* v___y_1171_; uint8_t v___y_1172_; lean_object* v___y_1173_; lean_object* v___y_1180_; uint8_t v___y_1181_; lean_object* v___y_1182_; lean_object* v___y_1183_; lean_object* v___y_1184_; lean_object* v___y_1185_; lean_object* v___y_1186_; lean_object* v___y_1187_; uint8_t v___y_1188_; uint8_t v___y_1189_; lean_object* v___y_1190_; uint8_t v___y_1191_; uint8_t v___y_1192_; lean_object* v___y_1193_; lean_object* v___y_1204_; lean_object* v___y_1205_; uint8_t v___y_1206_; lean_object* v___y_1207_; lean_object* v___y_1208_; uint8_t v___y_1209_; uint8_t v___y_1210_; lean_object* v___y_1211_; lean_object* v___y_1223_; lean_object* v___y_1224_; uint8_t v___y_1225_; lean_object* v___y_1226_; lean_object* v___y_1227_; lean_object* v___y_1228_; uint8_t v___y_1229_; lean_object* v___y_1230_; lean_object* v___y_1231_; uint8_t v___y_1232_; lean_object* v___y_1233_; lean_object* v___y_1234_; lean_object* v___y_1245_; lean_object* v___y_1246_; uint8_t v___y_1247_; lean_object* v___y_1248_; lean_object* v___y_1249_; lean_object* v___y_1250_; uint8_t v___y_1251_; uint8_t v___y_1252_; lean_object* v___y_1253_; lean_object* v___y_1254_; lean_object* v___y_1255_; uint8_t v___y_1256_; lean_object* v___y_1257_; lean_object* v___y_1264_; lean_object* v___y_1265_; uint8_t v___y_1266_; lean_object* v___y_1267_; lean_object* v___y_1268_; lean_object* v___y_1269_; uint8_t v___y_1270_; lean_object* v___y_1271_; uint8_t v___y_1272_; lean_object* v___y_1273_; uint8_t v___y_1274_; lean_object* v___y_1275_; uint8_t v___y_1286_; uint8_t v___y_1287_; uint8_t v___y_1288_; lean_object* v___y_1289_; uint8_t v___y_1304_; uint8_t v___y_1305_; lean_object* v___y_1306_; lean_object* v___y_1307_; lean_object* v___y_1308_; lean_object* v___y_1309_; lean_object* v___y_1310_; lean_object* v___y_1311_; uint8_t v___y_1312_; lean_object* v___y_1313_; lean_object* v___y_1314_; lean_object* v___y_1315_; uint8_t v___y_1316_; lean_object* v___y_1317_; uint8_t v___y_1321_; lean_object* v___y_1322_; uint8_t v___y_1323_; uint8_t v___y_1324_; lean_object* v___y_1325_; lean_object* v___y_1326_; lean_object* v_head_1327_; lean_object* v_tail_1328_; lean_object* v___y_1348_; uint8_t v___y_1349_; lean_object* v___y_1350_; uint8_t v___y_1351_; lean_object* v___y_1352_; lean_object* v___y_1368_; uint8_t v___y_1369_; uint8_t v___y_1370_; lean_object* v___y_1371_; lean_object* v___y_1374_; uint8_t v___y_1375_; uint8_t v___y_1376_; lean_object* v___y_1377_; lean_object* v___y_1378_; lean_object* v___y_1381_; uint8_t v___y_1382_; lean_object* v___y_1383_; uint8_t v___y_1384_; lean_object* v___y_1385_; uint8_t v___y_1390_; uint8_t v___y_1391_; lean_object* v___y_1392_; uint8_t v___y_1406_; uint8_t v___x_1421_; 
lean_inc(v_n_986_);
v_ids_1014_ = l_List_range(v_n_986_);
v___x_1015_ = lean_box(0);
lean_inc_n(v_ids_1014_, 3);
v_offA_1016_ = lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__1(v_a_987_, v_ids_1014_, v___x_1015_);
v_offB_1017_ = lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__1(v_b_988_, v_ids_1014_, v___x_1015_);
lean_inc(v_offA_1016_);
v_entering_1018_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_b_988_, v_offA_1016_, v___x_1015_);
lean_inc(v_offB_1017_);
v_leaving_1019_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_a_987_, v_offB_1017_, v___x_1015_);
v_still_1020_ = lp_choreo_List_filterTR_loop___at___00Choreo_transition_spec__2(v_a_987_, v_b_988_, v_ids_1014_, v___x_1015_);
v___x_1421_ = l_List_isEmpty___redArg(v_offA_1016_);
lean_dec(v_offA_1016_);
if (v___x_1421_ == 0)
{
uint8_t v___x_1422_; 
lean_dec(v_offB_1017_);
v___x_1422_ = 1;
v___y_1406_ = v___x_1422_;
goto v___jp_1405_;
}
else
{
uint8_t v___x_1423_; 
v___x_1423_ = l_List_isEmpty___redArg(v_offB_1017_);
lean_dec(v_offB_1017_);
if (v___x_1423_ == 0)
{
v___y_1406_ = v___x_1421_;
goto v___jp_1405_;
}
else
{
uint8_t v___x_1424_; 
v___x_1424_ = 0;
v___y_1406_ = v___x_1424_;
goto v___jp_1405_;
}
}
v___jp_998_:
{
lean_object* v_asks_1002_; lean_object* v___x_1003_; 
v_asks_1002_ = l_List_appendTR___redArg(v___y_1000_, v___y_1001_);
v___x_1003_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1003_, 0, v___y_999_);
lean_ctor_set(v___x_1003_, 1, v_asks_1002_);
return v___x_1003_;
}
v___jp_1004_:
{
lean_object* v___x_1011_; 
v___x_1011_ = l_List_appendTR___redArg(v___y_1007_, v___y_1010_);
if (v___y_1006_ == 0)
{
lean_object* v___x_1012_; lean_object* v___x_1013_; 
v___x_1012_ = l_List_range(v___y_1008_);
v___x_1013_ = lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4(v_k_989_, v___x_1012_, v___y_1009_);
lean_dec(v_k_989_);
v___y_999_ = v___y_1005_;
v___y_1000_ = v___x_1011_;
v___y_1001_ = v___x_1013_;
goto v___jp_998_;
}
else
{
lean_dec(v___y_1008_);
lean_dec(v_k_989_);
v___y_999_ = v___y_1005_;
v___y_1000_ = v___x_1011_;
v___y_1001_ = v___y_1009_;
goto v___jp_998_;
}
}
v___jp_1021_:
{
lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v___x_1029_ = l_List_appendTR___redArg(v___y_1025_, v___y_1028_);
v___x_1030_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1031_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__1));
v___x_1032_ = l_Nat_reprFast(v_frameNo_990_);
v___x_1033_ = lean_string_append(v___x_1031_, v___x_1032_);
lean_dec_ref(v___x_1032_);
v___x_1034_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileWay_spec__0(v_b_988_, v___x_1015_);
v___x_1035_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_1035_, 0, v___x_1034_);
v___x_1036_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1036_, 0, v___y_1026_);
lean_ctor_set(v___x_1036_, 1, v___x_1035_);
lean_ctor_set(v___x_1036_, 2, v_ids_1014_);
v___x_1037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1037_, 0, v___x_1033_);
lean_ctor_set(v___x_1037_, 1, v___x_1036_);
v___x_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1038_, 0, v___x_1030_);
lean_ctor_set(v___x_1038_, 1, v___x_1037_);
v___x_1039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1039_, 0, v___x_1038_);
lean_ctor_set(v___x_1039_, 1, v___x_1015_);
v___x_1040_ = l_List_appendTR___redArg(v___x_1029_, v___x_1039_);
if (v___y_1027_ == 0)
{
lean_dec(v_still_1020_);
lean_dec(v_a_987_);
lean_dec(v_n_986_);
lean_dec_ref(v_names_985_);
v___y_1005_ = v___y_1022_;
v___y_1006_ = v___y_1023_;
v___y_1007_ = v___x_1040_;
v___y_1008_ = v___y_1024_;
v___y_1009_ = v___x_1015_;
v___y_1010_ = v___x_1015_;
goto v___jp_1004_;
}
else
{
lean_object* v___x_1041_; lean_object* v___x_1042_; uint8_t v___x_1043_; 
v___x_1041_ = lean_unsigned_to_nat(2u);
v___x_1042_ = l_List_lengthTR___redArg(v_still_1020_);
v___x_1043_ = lean_nat_dec_le(v___x_1041_, v___x_1042_);
if (v___x_1043_ == 0)
{
lean_dec(v___x_1042_);
lean_dec(v_still_1020_);
lean_dec(v_a_987_);
lean_dec(v_n_986_);
lean_dec_ref(v_names_985_);
v___y_1005_ = v___y_1022_;
v___y_1006_ = v___y_1023_;
v___y_1007_ = v___x_1040_;
v___y_1008_ = v___y_1024_;
v___y_1009_ = v___x_1015_;
v___y_1010_ = v___x_1015_;
goto v___jp_1004_;
}
else
{
uint8_t v___x_1044_; 
v___x_1044_ = lean_nat_dec_lt(v___x_1042_, v_n_986_);
lean_dec(v_n_986_);
lean_dec(v___x_1042_);
if (v___x_1044_ == 0)
{
lean_dec(v_still_1020_);
lean_dec(v_a_987_);
lean_dec_ref(v_names_985_);
v___y_1005_ = v___y_1022_;
v___y_1006_ = v___y_1023_;
v___y_1007_ = v___x_1040_;
v___y_1008_ = v___y_1024_;
v___y_1009_ = v___x_1015_;
v___y_1010_ = v___x_1015_;
goto v___jp_1004_;
}
else
{
lean_object* v___x_1045_; lean_object* v___x_1046_; lean_object* v___x_1047_; lean_object* v___x_1048_; lean_object* v___x_1049_; lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v___x_1052_; 
lean_inc(v_still_1020_);
v___x_1045_ = lp_choreo_Choreo_nameList(v_names_985_, v_still_1020_);
v___x_1046_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__2));
v___x_1047_ = lean_string_append(v___x_1045_, v___x_1046_);
v___x_1048_ = lp_choreo_Choreo_linksFor(v_still_1020_, v_a_987_);
lean_dec(v_a_987_);
lean_inc(v_k_989_);
v___x_1049_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1049_, 0, v_k_989_);
lean_ctor_set(v___x_1049_, 1, v___x_1048_);
v___x_1050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1050_, 0, v___x_1047_);
lean_ctor_set(v___x_1050_, 1, v___x_1049_);
v___x_1051_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1051_, 0, v___x_1030_);
lean_ctor_set(v___x_1051_, 1, v___x_1050_);
v___x_1052_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1052_, 0, v___x_1051_);
lean_ctor_set(v___x_1052_, 1, v___x_1015_);
v___y_1005_ = v___y_1022_;
v___y_1006_ = v___y_1023_;
v___y_1007_ = v___x_1040_;
v___y_1008_ = v___y_1024_;
v___y_1009_ = v___x_1015_;
v___y_1010_ = v___x_1052_;
goto v___jp_1004_;
}
}
}
}
v___jp_1053_:
{
lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; 
v___x_1064_ = lean_string_append(v___y_1054_, v___y_1063_);
v___x_1065_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__3));
v___x_1066_ = lean_string_append(v___x_1064_, v___x_1065_);
lean_inc(v___y_1060_);
v___x_1067_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1067_, 0, v___y_1060_);
lean_ctor_set(v___x_1067_, 1, v___y_1062_);
lean_ctor_set(v___x_1067_, 2, v_srWing_994_);
v___x_1068_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1068_, 0, v___x_1066_);
lean_ctor_set(v___x_1068_, 1, v___x_1067_);
lean_inc_ref(v___y_1059_);
v___x_1069_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1069_, 0, v___y_1059_);
lean_ctor_set(v___x_1069_, 1, v___x_1068_);
v___x_1070_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1070_, 0, v___x_1069_);
lean_ctor_set(v___x_1070_, 1, v___x_1015_);
v___y_1022_ = v___y_1055_;
v___y_1023_ = v___y_1056_;
v___y_1024_ = v___y_1058_;
v___y_1025_ = v___y_1057_;
v___y_1026_ = v___y_1060_;
v___y_1027_ = v___y_1061_;
v___y_1028_ = v___x_1070_;
goto v___jp_1021_;
}
v___jp_1071_:
{
lean_object* v___x_1081_; lean_object* v_g_1082_; uint8_t v___x_1083_; 
v___x_1081_ = l_List_appendTR___redArg(v___y_1078_, v___y_1080_);
v_g_1082_ = lp_choreo_Choreo_transition___lam__0(v_leaving_1019_, v_b_988_, v___y_1077_);
v___x_1083_ = l_List_isEmpty___redArg(v_g_1082_);
if (v___x_1083_ == 0)
{
lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; uint8_t v___x_1089_; 
v___x_1084_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__4));
lean_inc(v_g_1082_);
lean_inc_ref(v_names_985_);
v___x_1085_ = lp_choreo_Choreo_nameList(v_names_985_, v_g_1082_);
v___x_1086_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__5));
v___x_1087_ = lean_string_append(v___x_1085_, v___x_1086_);
v___x_1088_ = l_List_lengthTR___redArg(v_g_1082_);
v___x_1089_ = lean_nat_dec_eq(v___x_1088_, v___y_1072_);
lean_dec(v___x_1088_);
if (v___x_1089_ == 0)
{
lean_object* v___x_1090_; 
v___x_1090_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__6));
v___y_1054_ = v___x_1087_;
v___y_1055_ = v___y_1073_;
v___y_1056_ = v___y_1074_;
v___y_1057_ = v___x_1081_;
v___y_1058_ = v___y_1075_;
v___y_1059_ = v___x_1084_;
v___y_1060_ = v___y_1076_;
v___y_1061_ = v___y_1079_;
v___y_1062_ = v_g_1082_;
v___y_1063_ = v___x_1090_;
goto v___jp_1053_;
}
else
{
lean_object* v___x_1091_; 
v___x_1091_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__7));
v___y_1054_ = v___x_1087_;
v___y_1055_ = v___y_1073_;
v___y_1056_ = v___y_1074_;
v___y_1057_ = v___x_1081_;
v___y_1058_ = v___y_1075_;
v___y_1059_ = v___x_1084_;
v___y_1060_ = v___y_1076_;
v___y_1061_ = v___y_1079_;
v___y_1062_ = v_g_1082_;
v___y_1063_ = v___x_1091_;
goto v___jp_1053_;
}
}
else
{
lean_dec(v_g_1082_);
lean_dec_ref(v_srWing_994_);
v___y_1022_ = v___y_1073_;
v___y_1023_ = v___y_1074_;
v___y_1024_ = v___y_1075_;
v___y_1025_ = v___x_1081_;
v___y_1026_ = v___y_1076_;
v___y_1027_ = v___y_1079_;
v___y_1028_ = v___x_1015_;
goto v___jp_1021_;
}
}
v___jp_1092_:
{
lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; 
v___x_1105_ = lean_string_append(v___y_1103_, v___y_1104_);
v___x_1106_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__8));
v___x_1107_ = lean_string_append(v___x_1105_, v___x_1106_);
lean_inc(v___y_1097_);
v___x_1108_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1108_, 0, v___y_1097_);
lean_ctor_set(v___x_1108_, 1, v___y_1100_);
lean_ctor_set(v___x_1108_, 2, v_slWing_993_);
v___x_1109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1109_, 0, v___x_1107_);
lean_ctor_set(v___x_1109_, 1, v___x_1108_);
lean_inc_ref(v___y_1101_);
v___x_1110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1110_, 0, v___y_1101_);
lean_ctor_set(v___x_1110_, 1, v___x_1109_);
v___x_1111_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1111_, 0, v___x_1110_);
lean_ctor_set(v___x_1111_, 1, v___x_1015_);
v___y_1072_ = v___y_1093_;
v___y_1073_ = v___y_1094_;
v___y_1074_ = v___y_1095_;
v___y_1075_ = v___y_1096_;
v___y_1076_ = v___y_1097_;
v___y_1077_ = v___y_1099_;
v___y_1078_ = v___y_1098_;
v___y_1079_ = v___y_1102_;
v___y_1080_ = v___x_1111_;
goto v___jp_1071_;
}
v___jp_1112_:
{
lean_object* v___x_1123_; lean_object* v_g_1124_; uint8_t v___x_1125_; 
v___x_1123_ = l_List_appendTR___redArg(v___y_1114_, v___y_1122_);
lean_inc(v_leaving_1019_);
v_g_1124_ = lp_choreo_Choreo_transition___lam__0(v_leaving_1019_, v_b_988_, v___y_1121_);
v___x_1125_ = l_List_isEmpty___redArg(v_g_1124_);
if (v___x_1125_ == 0)
{
lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; uint8_t v___x_1131_; 
v___x_1126_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__4));
lean_inc(v_g_1124_);
lean_inc_ref(v_names_985_);
v___x_1127_ = lp_choreo_Choreo_nameList(v_names_985_, v_g_1124_);
v___x_1128_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__5));
v___x_1129_ = lean_string_append(v___x_1127_, v___x_1128_);
v___x_1130_ = l_List_lengthTR___redArg(v_g_1124_);
v___x_1131_ = lean_nat_dec_eq(v___x_1130_, v___y_1113_);
lean_dec(v___x_1130_);
if (v___x_1131_ == 0)
{
lean_object* v___x_1132_; 
v___x_1132_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__6));
v___y_1093_ = v___y_1113_;
v___y_1094_ = v___y_1115_;
v___y_1095_ = v___y_1116_;
v___y_1096_ = v___y_1117_;
v___y_1097_ = v___y_1118_;
v___y_1098_ = v___x_1123_;
v___y_1099_ = v___y_1119_;
v___y_1100_ = v_g_1124_;
v___y_1101_ = v___x_1126_;
v___y_1102_ = v___y_1120_;
v___y_1103_ = v___x_1129_;
v___y_1104_ = v___x_1132_;
goto v___jp_1092_;
}
else
{
lean_object* v___x_1133_; 
v___x_1133_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__7));
v___y_1093_ = v___y_1113_;
v___y_1094_ = v___y_1115_;
v___y_1095_ = v___y_1116_;
v___y_1096_ = v___y_1117_;
v___y_1097_ = v___y_1118_;
v___y_1098_ = v___x_1123_;
v___y_1099_ = v___y_1119_;
v___y_1100_ = v_g_1124_;
v___y_1101_ = v___x_1126_;
v___y_1102_ = v___y_1120_;
v___y_1103_ = v___x_1129_;
v___y_1104_ = v___x_1133_;
goto v___jp_1092_;
}
}
else
{
lean_dec(v_g_1124_);
lean_dec_ref(v_slWing_993_);
v___y_1072_ = v___y_1113_;
v___y_1073_ = v___y_1115_;
v___y_1074_ = v___y_1116_;
v___y_1075_ = v___y_1117_;
v___y_1076_ = v___y_1118_;
v___y_1077_ = v___y_1119_;
v___y_1078_ = v___x_1123_;
v___y_1079_ = v___y_1120_;
v___y_1080_ = v___x_1015_;
goto v___jp_1071_;
}
}
v___jp_1134_:
{
lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; 
v___x_1149_ = lean_string_append(v___y_1144_, v___y_1148_);
v___x_1150_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__9));
v___x_1151_ = lean_string_append(v___x_1149_, v___x_1150_);
v___x_1152_ = lp_choreo_Choreo_stageRect;
lean_inc(v___y_1138_);
v___x_1153_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1153_, 0, v___y_1138_);
lean_ctor_set(v___x_1153_, 1, v___y_1140_);
lean_ctor_set(v___x_1153_, 2, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1151_);
lean_ctor_set(v___x_1154_, 1, v___x_1153_);
lean_inc_ref(v___y_1141_);
v___x_1155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1155_, 0, v___y_1141_);
lean_ctor_set(v___x_1155_, 1, v___x_1154_);
v___x_1156_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1156_, 0, v___x_1155_);
lean_ctor_set(v___x_1156_, 1, v___x_1015_);
v___x_1157_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1157_, 0, v___y_1139_);
lean_ctor_set(v___x_1157_, 1, v___x_1156_);
v___y_1113_ = v___y_1135_;
v___y_1114_ = v___y_1142_;
v___y_1115_ = v___y_1143_;
v___y_1116_ = v___y_1136_;
v___y_1117_ = v___y_1137_;
v___y_1118_ = v___y_1138_;
v___y_1119_ = v___y_1145_;
v___y_1120_ = v___y_1146_;
v___y_1121_ = v___y_1147_;
v___y_1122_ = v___x_1157_;
goto v___jp_1112_;
}
v___jp_1158_:
{
lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; 
v___x_1174_ = lean_string_append(v___y_1171_, v___y_1173_);
v___x_1175_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__10));
v___x_1176_ = lean_string_append(v___x_1174_, v___x_1175_);
if (v___y_1170_ == 0)
{
lean_object* v___x_1177_; 
v___x_1177_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__11));
v___y_1135_ = v___y_1159_;
v___y_1136_ = v___y_1160_;
v___y_1137_ = v___y_1161_;
v___y_1138_ = v___y_1162_;
v___y_1139_ = v___y_1163_;
v___y_1140_ = v___y_1164_;
v___y_1141_ = v___y_1165_;
v___y_1142_ = v___y_1166_;
v___y_1143_ = v___y_1167_;
v___y_1144_ = v___x_1176_;
v___y_1145_ = v___y_1168_;
v___y_1146_ = v___y_1169_;
v___y_1147_ = v___y_1172_;
v___y_1148_ = v___x_1177_;
goto v___jp_1134_;
}
else
{
lean_object* v___x_1178_; 
v___x_1178_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__12));
v___y_1135_ = v___y_1159_;
v___y_1136_ = v___y_1160_;
v___y_1137_ = v___y_1161_;
v___y_1138_ = v___y_1162_;
v___y_1139_ = v___y_1163_;
v___y_1140_ = v___y_1164_;
v___y_1141_ = v___y_1165_;
v___y_1142_ = v___y_1166_;
v___y_1143_ = v___y_1167_;
v___y_1144_ = v___x_1176_;
v___y_1145_ = v___y_1168_;
v___y_1146_ = v___y_1169_;
v___y_1147_ = v___y_1172_;
v___y_1148_ = v___x_1178_;
goto v___jp_1134_;
}
}
v___jp_1179_:
{
lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v___x_1200_; 
lean_inc_ref(v___y_1190_);
v___x_1194_ = lean_string_append(v___y_1190_, v___y_1193_);
v___x_1195_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__3));
v___x_1196_ = lean_string_append(v___x_1194_, v___x_1195_);
lean_inc_ref(v_srWing_994_);
lean_inc(v___y_1184_);
lean_inc(v_k_989_);
v___x_1197_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1197_, 0, v_k_989_);
lean_ctor_set(v___x_1197_, 1, v___y_1184_);
lean_ctor_set(v___x_1197_, 2, v_srWing_994_);
v___x_1198_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1198_, 0, v___x_1196_);
lean_ctor_set(v___x_1198_, 1, v___x_1197_);
lean_inc_ref(v___y_1185_);
v___x_1199_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1199_, 0, v___y_1185_);
lean_ctor_set(v___x_1199_, 1, v___x_1198_);
v___x_1200_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
if (v___y_1191_ == 0)
{
lean_object* v___x_1201_; 
v___x_1201_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__13));
v___y_1159_ = v___y_1180_;
v___y_1160_ = v___y_1181_;
v___y_1161_ = v___y_1182_;
v___y_1162_ = v___y_1183_;
v___y_1163_ = v___x_1199_;
v___y_1164_ = v___y_1184_;
v___y_1165_ = v___x_1200_;
v___y_1166_ = v___y_1186_;
v___y_1167_ = v___y_1187_;
v___y_1168_ = v___y_1188_;
v___y_1169_ = v___y_1189_;
v___y_1170_ = v___y_1191_;
v___y_1171_ = v___y_1190_;
v___y_1172_ = v___y_1192_;
v___y_1173_ = v___x_1201_;
goto v___jp_1158_;
}
else
{
lean_object* v___x_1202_; 
v___x_1202_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__14));
v___y_1159_ = v___y_1180_;
v___y_1160_ = v___y_1181_;
v___y_1161_ = v___y_1182_;
v___y_1162_ = v___y_1183_;
v___y_1163_ = v___x_1199_;
v___y_1164_ = v___y_1184_;
v___y_1165_ = v___x_1200_;
v___y_1166_ = v___y_1186_;
v___y_1167_ = v___y_1187_;
v___y_1168_ = v___y_1188_;
v___y_1169_ = v___y_1189_;
v___y_1170_ = v___y_1191_;
v___y_1171_ = v___y_1190_;
v___y_1172_ = v___y_1192_;
v___y_1173_ = v___x_1202_;
goto v___jp_1158_;
}
}
v___jp_1203_:
{
uint8_t v___x_1212_; lean_object* v_g_1213_; uint8_t v___x_1214_; 
v___x_1212_ = 0;
v_g_1213_ = lp_choreo_Choreo_transition___lam__0(v_entering_1018_, v_a_987_, v___x_1212_);
v___x_1214_ = l_List_isEmpty___redArg(v_g_1213_);
if (v___x_1214_ == 0)
{
lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; uint8_t v___x_1220_; 
v___x_1215_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__15));
lean_inc(v_g_1213_);
lean_inc_ref(v_names_985_);
v___x_1216_ = lp_choreo_Choreo_nameList(v_names_985_, v_g_1213_);
v___x_1217_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__5));
v___x_1218_ = lean_string_append(v___x_1216_, v___x_1217_);
v___x_1219_ = l_List_lengthTR___redArg(v_g_1213_);
v___x_1220_ = lean_nat_dec_eq(v___x_1219_, v___y_1204_);
lean_dec(v___x_1219_);
if (v___x_1220_ == 0)
{
v___y_1180_ = v___y_1204_;
v___y_1181_ = v___y_1206_;
v___y_1182_ = v___y_1207_;
v___y_1183_ = v___y_1208_;
v___y_1184_ = v_g_1213_;
v___y_1185_ = v___x_1215_;
v___y_1186_ = v___y_1211_;
v___y_1187_ = v___y_1205_;
v___y_1188_ = v___x_1212_;
v___y_1189_ = v___y_1209_;
v___y_1190_ = v___x_1218_;
v___y_1191_ = v___x_1220_;
v___y_1192_ = v___y_1210_;
v___y_1193_ = v___x_1215_;
goto v___jp_1179_;
}
else
{
lean_object* v___x_1221_; 
v___x_1221_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__16));
v___y_1180_ = v___y_1204_;
v___y_1181_ = v___y_1206_;
v___y_1182_ = v___y_1207_;
v___y_1183_ = v___y_1208_;
v___y_1184_ = v_g_1213_;
v___y_1185_ = v___x_1215_;
v___y_1186_ = v___y_1211_;
v___y_1187_ = v___y_1205_;
v___y_1188_ = v___x_1212_;
v___y_1189_ = v___y_1209_;
v___y_1190_ = v___x_1218_;
v___y_1191_ = v___x_1220_;
v___y_1192_ = v___y_1210_;
v___y_1193_ = v___x_1221_;
goto v___jp_1179_;
}
}
else
{
lean_dec(v_g_1213_);
v___y_1113_ = v___y_1204_;
v___y_1114_ = v___y_1211_;
v___y_1115_ = v___y_1205_;
v___y_1116_ = v___y_1206_;
v___y_1117_ = v___y_1207_;
v___y_1118_ = v___y_1208_;
v___y_1119_ = v___x_1212_;
v___y_1120_ = v___y_1209_;
v___y_1121_ = v___y_1210_;
v___y_1122_ = v___x_1015_;
goto v___jp_1112_;
}
}
v___jp_1222_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; 
v___x_1235_ = lean_string_append(v___y_1226_, v___y_1234_);
v___x_1236_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__9));
v___x_1237_ = lean_string_append(v___x_1235_, v___x_1236_);
v___x_1238_ = lp_choreo_Choreo_stageRect;
lean_inc(v___y_1228_);
v___x_1239_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1239_, 0, v___y_1228_);
lean_ctor_set(v___x_1239_, 1, v___y_1230_);
lean_ctor_set(v___x_1239_, 2, v___x_1238_);
v___x_1240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1240_, 0, v___x_1237_);
lean_ctor_set(v___x_1240_, 1, v___x_1239_);
lean_inc_ref(v___y_1233_);
v___x_1241_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1241_, 0, v___y_1233_);
lean_ctor_set(v___x_1241_, 1, v___x_1240_);
v___x_1242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1242_, 0, v___x_1241_);
lean_ctor_set(v___x_1242_, 1, v___x_1015_);
v___x_1243_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1243_, 0, v___y_1231_);
lean_ctor_set(v___x_1243_, 1, v___x_1242_);
v___y_1204_ = v___y_1223_;
v___y_1205_ = v___y_1224_;
v___y_1206_ = v___y_1225_;
v___y_1207_ = v___y_1227_;
v___y_1208_ = v___y_1228_;
v___y_1209_ = v___y_1229_;
v___y_1210_ = v___y_1232_;
v___y_1211_ = v___x_1243_;
goto v___jp_1203_;
}
v___jp_1244_:
{
lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v___x_1260_; 
v___x_1258_ = lean_string_append(v___y_1254_, v___y_1257_);
v___x_1259_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__10));
v___x_1260_ = lean_string_append(v___x_1258_, v___x_1259_);
if (v___y_1252_ == 0)
{
lean_object* v___x_1261_; 
v___x_1261_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__11));
v___y_1223_ = v___y_1245_;
v___y_1224_ = v___y_1246_;
v___y_1225_ = v___y_1247_;
v___y_1226_ = v___x_1260_;
v___y_1227_ = v___y_1248_;
v___y_1228_ = v___y_1249_;
v___y_1229_ = v___y_1251_;
v___y_1230_ = v___y_1250_;
v___y_1231_ = v___y_1253_;
v___y_1232_ = v___y_1256_;
v___y_1233_ = v___y_1255_;
v___y_1234_ = v___x_1261_;
goto v___jp_1222_;
}
else
{
lean_object* v___x_1262_; 
v___x_1262_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__12));
v___y_1223_ = v___y_1245_;
v___y_1224_ = v___y_1246_;
v___y_1225_ = v___y_1247_;
v___y_1226_ = v___x_1260_;
v___y_1227_ = v___y_1248_;
v___y_1228_ = v___y_1249_;
v___y_1229_ = v___y_1251_;
v___y_1230_ = v___y_1250_;
v___y_1231_ = v___y_1253_;
v___y_1232_ = v___y_1256_;
v___y_1233_ = v___y_1255_;
v___y_1234_ = v___x_1262_;
goto v___jp_1222_;
}
}
v___jp_1263_:
{
lean_object* v___x_1276_; lean_object* v___x_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; lean_object* v___x_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
lean_inc_ref(v___y_1273_);
v___x_1276_ = lean_string_append(v___y_1273_, v___y_1275_);
v___x_1277_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__8));
v___x_1278_ = lean_string_append(v___x_1276_, v___x_1277_);
lean_inc_ref(v_slWing_993_);
lean_inc(v___y_1271_);
lean_inc(v_k_989_);
v___x_1279_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1279_, 0, v_k_989_);
lean_ctor_set(v___x_1279_, 1, v___y_1271_);
lean_ctor_set(v___x_1279_, 2, v_slWing_993_);
v___x_1280_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1280_, 0, v___x_1278_);
lean_ctor_set(v___x_1280_, 1, v___x_1279_);
lean_inc_ref(v___y_1269_);
v___x_1281_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1281_, 0, v___y_1269_);
lean_ctor_set(v___x_1281_, 1, v___x_1280_);
v___x_1282_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
if (v___y_1272_ == 0)
{
lean_object* v___x_1283_; 
v___x_1283_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__13));
v___y_1245_ = v___y_1264_;
v___y_1246_ = v___y_1265_;
v___y_1247_ = v___y_1266_;
v___y_1248_ = v___y_1267_;
v___y_1249_ = v___y_1268_;
v___y_1250_ = v___y_1271_;
v___y_1251_ = v___y_1270_;
v___y_1252_ = v___y_1272_;
v___y_1253_ = v___x_1281_;
v___y_1254_ = v___y_1273_;
v___y_1255_ = v___x_1282_;
v___y_1256_ = v___y_1274_;
v___y_1257_ = v___x_1283_;
goto v___jp_1244_;
}
else
{
lean_object* v___x_1284_; 
v___x_1284_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__14));
v___y_1245_ = v___y_1264_;
v___y_1246_ = v___y_1265_;
v___y_1247_ = v___y_1266_;
v___y_1248_ = v___y_1267_;
v___y_1249_ = v___y_1268_;
v___y_1250_ = v___y_1271_;
v___y_1251_ = v___y_1270_;
v___y_1252_ = v___y_1272_;
v___y_1253_ = v___x_1281_;
v___y_1254_ = v___y_1273_;
v___y_1255_ = v___x_1282_;
v___y_1256_ = v___y_1274_;
v___y_1257_ = v___x_1284_;
goto v___jp_1244_;
}
}
v___jp_1285_:
{
lean_object* v___x_1290_; lean_object* v___x_1291_; lean_object* v___x_1292_; lean_object* v_k_x27_1293_; lean_object* v_g_1294_; uint8_t v___x_1295_; 
v___x_1290_ = l_List_lengthTR___redArg(v___y_1289_);
v___x_1291_ = lean_nat_add(v_k_989_, v___x_1290_);
v___x_1292_ = lean_unsigned_to_nat(1u);
v_k_x27_1293_ = lean_nat_sub(v___x_1291_, v___x_1292_);
lean_dec(v___x_1291_);
lean_inc(v_entering_1018_);
v_g_1294_ = lp_choreo_Choreo_transition___lam__0(v_entering_1018_, v_a_987_, v___y_1288_);
v___x_1295_ = l_List_isEmpty___redArg(v_g_1294_);
if (v___x_1295_ == 0)
{
lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; uint8_t v___x_1301_; 
v___x_1296_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__15));
lean_inc(v_g_1294_);
lean_inc_ref(v_names_985_);
v___x_1297_ = lp_choreo_Choreo_nameList(v_names_985_, v_g_1294_);
v___x_1298_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__5));
v___x_1299_ = lean_string_append(v___x_1297_, v___x_1298_);
v___x_1300_ = l_List_lengthTR___redArg(v_g_1294_);
v___x_1301_ = lean_nat_dec_eq(v___x_1300_, v___x_1292_);
lean_dec(v___x_1300_);
if (v___x_1301_ == 0)
{
v___y_1264_ = v___x_1292_;
v___y_1265_ = v___y_1289_;
v___y_1266_ = v___y_1286_;
v___y_1267_ = v___x_1290_;
v___y_1268_ = v_k_x27_1293_;
v___y_1269_ = v___x_1296_;
v___y_1270_ = v___y_1287_;
v___y_1271_ = v_g_1294_;
v___y_1272_ = v___x_1301_;
v___y_1273_ = v___x_1299_;
v___y_1274_ = v___y_1288_;
v___y_1275_ = v___x_1296_;
goto v___jp_1263_;
}
else
{
lean_object* v___x_1302_; 
v___x_1302_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__16));
v___y_1264_ = v___x_1292_;
v___y_1265_ = v___y_1289_;
v___y_1266_ = v___y_1286_;
v___y_1267_ = v___x_1290_;
v___y_1268_ = v_k_x27_1293_;
v___y_1269_ = v___x_1296_;
v___y_1270_ = v___y_1287_;
v___y_1271_ = v_g_1294_;
v___y_1272_ = v___x_1301_;
v___y_1273_ = v___x_1299_;
v___y_1274_ = v___y_1288_;
v___y_1275_ = v___x_1302_;
goto v___jp_1263_;
}
}
else
{
lean_dec(v_g_1294_);
v___y_1204_ = v___x_1292_;
v___y_1205_ = v___y_1289_;
v___y_1206_ = v___y_1286_;
v___y_1207_ = v___x_1290_;
v___y_1208_ = v_k_x27_1293_;
v___y_1209_ = v___y_1287_;
v___y_1210_ = v___y_1288_;
v___y_1211_ = v___x_1015_;
goto v___jp_1203_;
}
}
v___jp_1303_:
{
lean_object* v___x_1318_; lean_object* v___x_1319_; 
v___x_1318_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_1318_, 0, v___y_1306_);
lean_ctor_set(v___x_1318_, 1, v___y_1310_);
lean_ctor_set(v___x_1318_, 2, v___y_1307_);
lean_ctor_set(v___x_1318_, 3, v___y_1314_);
lean_ctor_set(v___x_1318_, 4, v___y_1317_);
lean_ctor_set(v___x_1318_, 5, v___y_1315_);
lean_ctor_set(v___x_1318_, 6, v___y_1308_);
lean_ctor_set(v___x_1318_, 7, v___y_1309_);
lean_ctor_set(v___x_1318_, 8, v___y_1313_);
lean_ctor_set_uint8(v___x_1318_, sizeof(void*)*9, v___y_1305_);
v___x_1319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1319_, 0, v___x_1318_);
lean_ctor_set(v___x_1319_, 1, v___y_1311_);
v___y_1286_ = v___y_1304_;
v___y_1287_ = v___y_1312_;
v___y_1288_ = v___y_1316_;
v___y_1289_ = v___x_1319_;
goto v___jp_1285_;
}
v___jp_1320_:
{
if (lean_obj_tag(v_bends_997_) == 1)
{
lean_object* v_label_1329_; lean_object* v_kind_1330_; lean_object* v_paths_1331_; lean_object* v_bounds_1332_; lean_object* v_beats_1333_; lean_object* v_rigid_1334_; lean_object* v_orbits_1335_; lean_object* v_dmin_1336_; lean_object* v_way_1337_; uint8_t v_unison_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v_far_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; uint8_t v___x_1346_; 
lean_dec(v___y_1326_);
v_label_1329_ = lean_ctor_get(v_head_1327_, 0);
lean_inc_ref(v_label_1329_);
v_kind_1330_ = lean_ctor_get(v_head_1327_, 1);
lean_inc_ref(v_kind_1330_);
v_paths_1331_ = lean_ctor_get(v_head_1327_, 2);
lean_inc(v_paths_1331_);
v_bounds_1332_ = lean_ctor_get(v_head_1327_, 3);
lean_inc_ref(v_bounds_1332_);
v_beats_1333_ = lean_ctor_get(v_head_1327_, 4);
lean_inc(v_beats_1333_);
v_rigid_1334_ = lean_ctor_get(v_head_1327_, 5);
lean_inc(v_rigid_1334_);
v_orbits_1335_ = lean_ctor_get(v_head_1327_, 6);
lean_inc(v_orbits_1335_);
v_dmin_1336_ = lean_ctor_get(v_head_1327_, 7);
lean_inc(v_dmin_1336_);
v_way_1337_ = lean_ctor_get(v_head_1327_, 8);
lean_inc_ref(v_way_1337_);
v_unison_1338_ = lean_ctor_get_uint8(v_head_1327_, sizeof(void*)*9);
lean_dec_ref(v_head_1327_);
v___x_1339_ = lean_unsigned_to_nat(0u);
v___x_1340_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
lean_inc_ref(v_bends_997_);
v_far_1341_ = lp_choreo_List_foldl___at___00Choreo_transition_spec__5(v_a_987_, v_b_988_, v___x_1340_, v_bends_997_);
v___x_1342_ = l_List_zipIdxTR___redArg(v_paths_1331_, v___x_1339_);
v___x_1343_ = lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__6(v_bends_997_, v_a_987_, v_b_988_, v___y_1325_, v___x_1342_, v___x_1015_);
lean_dec_ref_known(v_bends_997_, 2);
v___x_1344_ = lean_unsigned_to_nat(8u);
v___x_1345_ = lp_choreo_Choreo_beatsFor(v_far_1341_, v_pace_991_, v___y_1322_, v___x_1344_);
lean_dec(v_far_1341_);
v___x_1346_ = lean_nat_dec_le(v_beats_1333_, v___x_1345_);
if (v___x_1346_ == 0)
{
lean_dec(v___x_1345_);
v___y_1304_ = v___y_1321_;
v___y_1305_ = v_unison_1338_;
v___y_1306_ = v_label_1329_;
v___y_1307_ = v___x_1343_;
v___y_1308_ = v_orbits_1335_;
v___y_1309_ = v_dmin_1336_;
v___y_1310_ = v_kind_1330_;
v___y_1311_ = v_tail_1328_;
v___y_1312_ = v___y_1323_;
v___y_1313_ = v_way_1337_;
v___y_1314_ = v_bounds_1332_;
v___y_1315_ = v_rigid_1334_;
v___y_1316_ = v___y_1324_;
v___y_1317_ = v_beats_1333_;
goto v___jp_1303_;
}
else
{
lean_dec(v_beats_1333_);
v___y_1304_ = v___y_1321_;
v___y_1305_ = v_unison_1338_;
v___y_1306_ = v_label_1329_;
v___y_1307_ = v___x_1343_;
v___y_1308_ = v_orbits_1335_;
v___y_1309_ = v_dmin_1336_;
v___y_1310_ = v_kind_1330_;
v___y_1311_ = v_tail_1328_;
v___y_1312_ = v___y_1323_;
v___y_1313_ = v_way_1337_;
v___y_1314_ = v_bounds_1332_;
v___y_1315_ = v_rigid_1334_;
v___y_1316_ = v___y_1324_;
v___y_1317_ = v___x_1345_;
goto v___jp_1303_;
}
}
else
{
lean_dec(v_tail_1328_);
lean_dec_ref(v_head_1327_);
lean_dec_ref(v___y_1325_);
lean_dec(v_bends_997_);
v___y_1286_ = v___y_1321_;
v___y_1287_ = v___y_1323_;
v___y_1288_ = v___y_1324_;
v___y_1289_ = v___y_1326_;
goto v___jp_1285_;
}
}
v___jp_1347_:
{
lean_object* v___x_1353_; lean_object* v___x_1354_; uint8_t v___x_1355_; 
v___x_1353_ = lean_unsigned_to_nat(120u);
v___x_1354_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__17));
v___x_1355_ = lean_string_dec_eq(v_way_995_, v___x_1354_);
if (v___x_1355_ == 0)
{
lean_object* v___x_1356_; 
lean_inc_ref(v___y_1348_);
lean_inc_ref(v___y_1352_);
lean_inc(v_b_988_);
lean_inc(v_a_987_);
v___x_1356_ = lp_choreo_Choreo_wayDrafts(v_way_995_, v_a_987_, v_b_988_, v_pace_991_, v___x_1353_, v___y_1352_, v_gap_996_, v___y_1350_, v___y_1348_);
if (lean_obj_tag(v___x_1356_) == 1)
{
lean_object* v_tail_1357_; 
v_tail_1357_ = lean_ctor_get(v___x_1356_, 1);
lean_inc(v_tail_1357_);
if (lean_obj_tag(v_tail_1357_) == 0)
{
lean_object* v_head_1358_; 
v_head_1358_ = lean_ctor_get(v___x_1356_, 0);
lean_inc(v_head_1358_);
v___y_1321_ = v___y_1349_;
v___y_1322_ = v___x_1353_;
v___y_1323_ = v___x_1355_;
v___y_1324_ = v___y_1351_;
v___y_1325_ = v___y_1352_;
v___y_1326_ = v___x_1356_;
v_head_1327_ = v_head_1358_;
v_tail_1328_ = v_tail_1357_;
goto v___jp_1320_;
}
else
{
lean_dec(v_tail_1357_);
lean_dec_ref(v___y_1352_);
lean_dec(v_bends_997_);
v___y_1286_ = v___y_1349_;
v___y_1287_ = v___x_1355_;
v___y_1288_ = v___y_1351_;
v___y_1289_ = v___x_1356_;
goto v___jp_1285_;
}
}
else
{
lean_dec_ref(v___y_1352_);
lean_dec(v_bends_997_);
v___y_1286_ = v___y_1349_;
v___y_1287_ = v___x_1355_;
v___y_1288_ = v___y_1351_;
v___y_1289_ = v___x_1356_;
goto v___jp_1285_;
}
}
else
{
lean_object* v___x_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v_d_1365_; lean_object* v___x_1366_; 
lean_dec_ref(v_way_995_);
lean_inc_n(v_b_988_, 2);
lean_inc_n(v_a_987_, 2);
v___x_1359_ = l_List_zipWith___at___00List_zip_spec__0___redArg(v_a_987_, v_b_988_);
v___x_1360_ = lp_choreo_List_mapTR_loop___at___00Choreo_wayDraftsAll_spec__0(v___x_1359_, v___x_1015_);
v___x_1361_ = lp_choreo_Choreo_maxDist(v_a_987_, v_b_988_);
v___x_1362_ = lean_unsigned_to_nat(16u);
v___x_1363_ = lp_choreo_Choreo_beatsFor(v___x_1361_, v_pace_991_, v___x_1353_, v___x_1362_);
lean_dec(v___x_1361_);
v___x_1364_ = lp_choreo_Choreo_dminMM;
lean_inc_ref(v___y_1352_);
lean_inc_ref(v___y_1348_);
v_d_1365_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_d_1365_, 0, v___y_1350_);
lean_ctor_set(v_d_1365_, 1, v___y_1348_);
lean_ctor_set(v_d_1365_, 2, v___x_1360_);
lean_ctor_set(v_d_1365_, 3, v___y_1352_);
lean_ctor_set(v_d_1365_, 4, v___x_1363_);
lean_ctor_set(v_d_1365_, 5, v___x_1015_);
lean_ctor_set(v_d_1365_, 6, v___x_1015_);
lean_ctor_set(v_d_1365_, 7, v___x_1364_);
lean_ctor_set(v_d_1365_, 8, v___x_1354_);
lean_ctor_set_uint8(v_d_1365_, sizeof(void*)*9, v___y_1351_);
lean_inc_ref(v_d_1365_);
v___x_1366_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1366_, 0, v_d_1365_);
lean_ctor_set(v___x_1366_, 1, v___x_1015_);
v___y_1321_ = v___y_1349_;
v___y_1322_ = v___x_1353_;
v___y_1323_ = v___x_1355_;
v___y_1324_ = v___y_1351_;
v___y_1325_ = v___y_1352_;
v___y_1326_ = v___x_1366_;
v_head_1327_ = v_d_1365_;
v_tail_1328_ = v___x_1015_;
goto v___jp_1320_;
}
}
v___jp_1367_:
{
if (v___y_1369_ == 0)
{
lean_object* v___x_1372_; 
lean_dec_ref(v_envelope_992_);
v___x_1372_ = lp_choreo_Choreo_stageRect;
v___y_1348_ = v___y_1368_;
v___y_1349_ = v___y_1369_;
v___y_1350_ = v___y_1371_;
v___y_1351_ = v___y_1370_;
v___y_1352_ = v___x_1372_;
goto v___jp_1347_;
}
else
{
v___y_1348_ = v___y_1368_;
v___y_1349_ = v___y_1369_;
v___y_1350_ = v___y_1371_;
v___y_1351_ = v___y_1370_;
v___y_1352_ = v_envelope_992_;
goto v___jp_1347_;
}
}
v___jp_1373_:
{
lean_object* v___x_1379_; 
v___x_1379_ = lean_string_append(v___y_1377_, v___y_1378_);
v___y_1368_ = v___y_1374_;
v___y_1369_ = v___y_1375_;
v___y_1370_ = v___y_1376_;
v___y_1371_ = v___x_1379_;
goto v___jp_1367_;
}
v___jp_1380_:
{
lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; 
v___x_1386_ = lean_string_append(v___y_1383_, v___y_1385_);
v___x_1387_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__18));
v___x_1388_ = lean_string_append(v___x_1386_, v___x_1387_);
v___y_1368_ = v___y_1381_;
v___y_1369_ = v___y_1382_;
v___y_1370_ = v___y_1384_;
v___y_1371_ = v___x_1388_;
goto v___jp_1367_;
}
v___jp_1389_:
{
uint8_t v___x_1393_; 
v___x_1393_ = l_List_isEmpty___redArg(v_leaving_1019_);
if (v___x_1393_ == 0)
{
lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; uint8_t v___x_1399_; 
lean_inc(v_leaving_1019_);
lean_inc_ref(v_names_985_);
v___x_1394_ = lp_choreo_Choreo_nameList(v_names_985_, v_leaving_1019_);
v___x_1395_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__5));
v___x_1396_ = lean_string_append(v___x_1394_, v___x_1395_);
v___x_1397_ = l_List_lengthTR___redArg(v_leaving_1019_);
v___x_1398_ = lean_unsigned_to_nat(1u);
v___x_1399_ = lean_nat_dec_eq(v___x_1397_, v___x_1398_);
lean_dec(v___x_1397_);
if (v___x_1399_ == 0)
{
lean_object* v___x_1400_; 
v___x_1400_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__19));
v___y_1374_ = v___y_1392_;
v___y_1375_ = v___y_1390_;
v___y_1376_ = v___y_1391_;
v___y_1377_ = v___x_1396_;
v___y_1378_ = v___x_1400_;
goto v___jp_1373_;
}
else
{
lean_object* v___x_1401_; 
v___x_1401_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__20));
v___y_1374_ = v___y_1392_;
v___y_1375_ = v___y_1390_;
v___y_1376_ = v___y_1391_;
v___y_1377_ = v___x_1396_;
v___y_1378_ = v___x_1401_;
goto v___jp_1373_;
}
}
else
{
lean_object* v___x_1402_; lean_object* v___x_1403_; lean_object* v___x_1404_; 
v___x_1402_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__21));
lean_inc(v_frameNo_990_);
v___x_1403_ = l_Nat_reprFast(v_frameNo_990_);
v___x_1404_ = lean_string_append(v___x_1402_, v___x_1403_);
lean_dec_ref(v___x_1403_);
v___y_1368_ = v___y_1392_;
v___y_1369_ = v___y_1390_;
v___y_1370_ = v___y_1391_;
v___y_1371_ = v___x_1404_;
goto v___jp_1367_;
}
}
v___jp_1405_:
{
uint8_t v___x_1407_; 
v___x_1407_ = l_List_isEmpty___redArg(v_entering_1018_);
if (v___x_1407_ == 0)
{
uint8_t v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; uint8_t v___x_1415_; 
v___x_1408_ = 1;
v___x_1409_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__22));
lean_inc(v_entering_1018_);
lean_inc_ref(v_names_985_);
v___x_1410_ = lp_choreo_Choreo_nameList(v_names_985_, v_entering_1018_);
v___x_1411_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__5));
v___x_1412_ = lean_string_append(v___x_1410_, v___x_1411_);
v___x_1413_ = l_List_lengthTR___redArg(v_entering_1018_);
v___x_1414_ = lean_unsigned_to_nat(1u);
v___x_1415_ = lean_nat_dec_eq(v___x_1413_, v___x_1414_);
lean_dec(v___x_1413_);
if (v___x_1415_ == 0)
{
lean_object* v___x_1416_; 
v___x_1416_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__13));
v___y_1381_ = v___x_1409_;
v___y_1382_ = v___y_1406_;
v___y_1383_ = v___x_1412_;
v___y_1384_ = v___x_1408_;
v___y_1385_ = v___x_1416_;
goto v___jp_1380_;
}
else
{
lean_object* v___x_1417_; 
v___x_1417_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__14));
v___y_1381_ = v___x_1409_;
v___y_1382_ = v___y_1406_;
v___y_1383_ = v___x_1412_;
v___y_1384_ = v___x_1408_;
v___y_1385_ = v___x_1417_;
goto v___jp_1380_;
}
}
else
{
uint8_t v___x_1418_; 
v___x_1418_ = l_List_isEmpty___redArg(v_leaving_1019_);
if (v___x_1418_ == 0)
{
lean_object* v___x_1419_; 
v___x_1419_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__23));
v___y_1390_ = v___y_1406_;
v___y_1391_ = v___x_1407_;
v___y_1392_ = v___x_1419_;
goto v___jp_1389_;
}
else
{
lean_object* v___x_1420_; 
v___x_1420_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__24));
v___y_1390_ = v___y_1406_;
v___y_1391_ = v___x_1407_;
v___y_1392_ = v___x_1420_;
goto v___jp_1389_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_transition___boxed(lean_object* v_names_1425_, lean_object* v_n_1426_, lean_object* v_a_1427_, lean_object* v_b_1428_, lean_object* v_k_1429_, lean_object* v_frameNo_1430_, lean_object* v_pace_1431_, lean_object* v_envelope_1432_, lean_object* v_slWing_1433_, lean_object* v_srWing_1434_, lean_object* v_way_1435_, lean_object* v_gap_1436_, lean_object* v_bends_1437_){
_start:
{
lean_object* v_res_1438_; 
v_res_1438_ = lp_choreo_Choreo_transition(v_names_1425_, v_n_1426_, v_a_1427_, v_b_1428_, v_k_1429_, v_frameNo_1430_, v_pace_1431_, v_envelope_1432_, v_slWing_1433_, v_srWing_1434_, v_way_1435_, v_gap_1436_, v_bends_1437_);
lean_dec(v_gap_1436_);
lean_dec(v_pace_1431_);
return v_res_1438_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ruleAsks___lam__0(lean_object* v_name_1440_, lean_object* v_pairs_1441_, lean_object* v_mirror_1442_, lean_object* v_k_1443_){
_start:
{
lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1449_; 
v___x_1444_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1445_ = ((lean_object*)(lp_choreo_Choreo_ruleAsks___lam__0___closed__0));
v___x_1446_ = lean_string_append(v_name_1440_, v___x_1445_);
v___x_1447_ = lean_alloc_ctor(9, 3, 0);
lean_ctor_set(v___x_1447_, 0, v_k_1443_);
lean_ctor_set(v___x_1447_, 1, v_pairs_1441_);
lean_ctor_set(v___x_1447_, 2, v_mirror_1442_);
v___x_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1448_, 0, v___x_1446_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
v___x_1449_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1449_, 0, v___x_1444_);
lean_ctor_set(v___x_1449_, 1, v___x_1448_);
return v___x_1449_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_ruleAsks_spec__0(lean_object* v_fst_1450_, lean_object* v_snd_1451_, lean_object* v_x_1452_){
_start:
{
if (lean_obj_tag(v_x_1452_) == 0)
{
uint8_t v___x_1453_; 
v___x_1453_ = 1;
return v___x_1453_;
}
else
{
lean_object* v_head_1454_; lean_object* v_tail_1455_; uint8_t v___x_1456_; 
v_head_1454_ = lean_ctor_get(v_x_1452_, 0);
lean_inc(v_head_1454_);
v_tail_1455_ = lean_ctor_get(v_x_1452_, 1);
lean_inc(v_tail_1455_);
lean_dec_ref_known(v_x_1452_, 2);
v___x_1456_ = lp_choreo_Choreo_isStill(v_fst_1450_, v_snd_1451_, v_head_1454_);
if (v___x_1456_ == 0)
{
lean_dec(v_tail_1455_);
return v___x_1456_;
}
else
{
v_x_1452_ = v_tail_1455_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_ruleAsks_spec__0___boxed(lean_object* v_fst_1458_, lean_object* v_snd_1459_, lean_object* v_x_1460_){
_start:
{
uint8_t v_res_1461_; lean_object* v_r_1462_; 
v_res_1461_ = lp_choreo_List_all___at___00Choreo_ruleAsks_spec__0(v_fst_1458_, v_snd_1459_, v_x_1460_);
lean_dec(v_snd_1459_);
lean_dec(v_fst_1458_);
v_r_1462_ = lean_box(v_res_1461_);
return v_r_1462_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ruleAsks(lean_object* v_r_1466_, lean_object* v_holdPhase_1467_, lean_object* v_landing_1468_, lean_object* v_next_1469_){
_start:
{
lean_object* v_name_1470_; lean_object* v_kind_1471_; lean_object* v_members_1472_; lean_object* v_dx_1473_; lean_object* v_dy_1474_; lean_object* v_pairs_1475_; lean_object* v_mirror_1476_; lean_object* v___y_1478_; lean_object* v___y_1479_; lean_object* v___y_1513_; lean_object* v___x_1524_; uint8_t v___x_1525_; 
v_name_1470_ = lean_ctor_get(v_r_1466_, 0);
lean_inc_ref(v_name_1470_);
v_kind_1471_ = lean_ctor_get(v_r_1466_, 1);
lean_inc_ref(v_kind_1471_);
v_members_1472_ = lean_ctor_get(v_r_1466_, 3);
lean_inc(v_members_1472_);
v_dx_1473_ = lean_ctor_get(v_r_1466_, 4);
lean_inc(v_dx_1473_);
v_dy_1474_ = lean_ctor_get(v_r_1466_, 5);
lean_inc(v_dy_1474_);
v_pairs_1475_ = lean_ctor_get(v_r_1466_, 6);
lean_inc(v_pairs_1475_);
v_mirror_1476_ = lean_ctor_get(v_r_1466_, 7);
lean_inc(v_mirror_1476_);
lean_dec_ref(v_r_1466_);
v___x_1524_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__4));
v___x_1525_ = lean_string_dec_eq(v_kind_1471_, v___x_1524_);
lean_dec_ref(v_kind_1471_);
if (v___x_1525_ == 0)
{
lean_dec(v_mirror_1476_);
lean_dec(v_pairs_1475_);
if (lean_obj_tag(v_landing_1468_) == 0)
{
lean_object* v___x_1526_; 
v___x_1526_ = lean_box(0);
v___y_1513_ = v___x_1526_;
goto v___jp_1512_;
}
else
{
lean_object* v_val_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; 
v_val_1527_ = lean_ctor_get(v_landing_1468_, 0);
lean_inc(v_val_1527_);
lean_dec_ref_known(v_landing_1468_, 1);
v___x_1528_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1529_ = ((lean_object*)(lp_choreo_Choreo_ruleAsks___closed__2));
lean_inc_ref(v_name_1470_);
v___x_1530_ = lean_string_append(v_name_1470_, v___x_1529_);
lean_inc(v_dy_1474_);
lean_inc(v_dx_1473_);
lean_inc(v_members_1472_);
v___x_1531_ = lean_alloc_ctor(8, 4, 0);
lean_ctor_set(v___x_1531_, 0, v_val_1527_);
lean_ctor_set(v___x_1531_, 1, v_members_1472_);
lean_ctor_set(v___x_1531_, 2, v_dx_1473_);
lean_ctor_set(v___x_1531_, 3, v_dy_1474_);
v___x_1532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1532_, 0, v___x_1530_);
lean_ctor_set(v___x_1532_, 1, v___x_1531_);
v___x_1533_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1533_, 0, v___x_1528_);
lean_ctor_set(v___x_1533_, 1, v___x_1532_);
v___x_1534_ = lean_box(0);
v___x_1535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1535_, 0, v___x_1533_);
lean_ctor_set(v___x_1535_, 1, v___x_1534_);
v___y_1513_ = v___x_1535_;
goto v___jp_1512_;
}
}
else
{
lean_object* v___y_1537_; 
lean_dec(v_dy_1474_);
lean_dec(v_dx_1473_);
lean_dec(v_members_1472_);
lean_dec(v_next_1469_);
if (lean_obj_tag(v_landing_1468_) == 0)
{
lean_object* v___x_1547_; 
v___x_1547_ = lean_box(0);
v___y_1537_ = v___x_1547_;
goto v___jp_1536_;
}
else
{
lean_object* v_val_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; 
v_val_1548_ = lean_ctor_get(v_landing_1468_, 0);
lean_inc(v_val_1548_);
lean_inc(v_mirror_1476_);
lean_inc(v_pairs_1475_);
lean_inc_ref(v_name_1470_);
v___x_1549_ = lp_choreo_Choreo_ruleAsks___lam__0(v_name_1470_, v_pairs_1475_, v_mirror_1476_, v_val_1548_);
v___x_1550_ = lean_box(0);
v___x_1551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1549_);
lean_ctor_set(v___x_1551_, 1, v___x_1550_);
v___y_1537_ = v___x_1551_;
goto v___jp_1536_;
}
v___jp_1536_:
{
if (lean_obj_tag(v_landing_1468_) == 0)
{
if (lean_obj_tag(v_holdPhase_1467_) == 0)
{
lean_object* v___x_1538_; lean_object* v___x_1539_; 
lean_dec(v_mirror_1476_);
lean_dec(v_pairs_1475_);
lean_dec_ref(v_name_1470_);
v___x_1538_ = lean_box(0);
v___x_1539_ = l_List_appendTR___redArg(v___y_1537_, v___x_1538_);
return v___x_1539_;
}
else
{
lean_object* v_val_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; 
v_val_1540_ = lean_ctor_get(v_holdPhase_1467_, 0);
lean_inc(v_val_1540_);
lean_dec_ref_known(v_holdPhase_1467_, 1);
v___x_1541_ = lp_choreo_Choreo_ruleAsks___lam__0(v_name_1470_, v_pairs_1475_, v_mirror_1476_, v_val_1540_);
v___x_1542_ = lean_box(0);
v___x_1543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1543_, 0, v___x_1541_);
lean_ctor_set(v___x_1543_, 1, v___x_1542_);
v___x_1544_ = l_List_appendTR___redArg(v___y_1537_, v___x_1543_);
return v___x_1544_;
}
}
else
{
lean_object* v___x_1545_; lean_object* v___x_1546_; 
lean_dec_ref_known(v_landing_1468_, 1);
lean_dec(v_mirror_1476_);
lean_dec(v_pairs_1475_);
lean_dec_ref(v_name_1470_);
lean_dec(v_holdPhase_1467_);
v___x_1545_ = lean_box(0);
v___x_1546_ = l_List_appendTR___redArg(v___y_1537_, v___x_1545_);
return v___x_1546_;
}
}
}
v___jp_1477_:
{
lean_object* v___x_1480_; 
v___x_1480_ = l_List_appendTR___redArg(v___y_1478_, v___y_1479_);
if (lean_obj_tag(v_next_1469_) == 0)
{
lean_object* v___x_1481_; lean_object* v___x_1482_; 
lean_dec(v_dy_1474_);
lean_dec(v_dx_1473_);
lean_dec(v_members_1472_);
lean_dec_ref(v_name_1470_);
v___x_1481_ = lean_box(0);
v___x_1482_ = l_List_appendTR___redArg(v___x_1480_, v___x_1481_);
return v___x_1482_;
}
else
{
lean_object* v_val_1483_; lean_object* v_snd_1484_; lean_object* v_fst_1485_; lean_object* v___x_1487_; uint8_t v_isShared_1488_; uint8_t v_isSharedCheck_1511_; 
v_val_1483_ = lean_ctor_get(v_next_1469_, 0);
lean_inc(v_val_1483_);
lean_dec_ref_known(v_next_1469_, 1);
v_snd_1484_ = lean_ctor_get(v_val_1483_, 1);
v_fst_1485_ = lean_ctor_get(v_val_1483_, 0);
v_isSharedCheck_1511_ = !lean_is_exclusive(v_val_1483_);
if (v_isSharedCheck_1511_ == 0)
{
v___x_1487_ = v_val_1483_;
v_isShared_1488_ = v_isSharedCheck_1511_;
goto v_resetjp_1486_;
}
else
{
lean_inc(v_snd_1484_);
lean_inc(v_fst_1485_);
lean_dec(v_val_1483_);
v___x_1487_ = lean_box(0);
v_isShared_1488_ = v_isSharedCheck_1511_;
goto v_resetjp_1486_;
}
v_resetjp_1486_:
{
lean_object* v_fst_1489_; lean_object* v_snd_1490_; lean_object* v___x_1492_; uint8_t v_isShared_1493_; uint8_t v_isSharedCheck_1510_; 
v_fst_1489_ = lean_ctor_get(v_snd_1484_, 0);
v_snd_1490_ = lean_ctor_get(v_snd_1484_, 1);
v_isSharedCheck_1510_ = !lean_is_exclusive(v_snd_1484_);
if (v_isSharedCheck_1510_ == 0)
{
v___x_1492_ = v_snd_1484_;
v_isShared_1493_ = v_isSharedCheck_1510_;
goto v_resetjp_1491_;
}
else
{
lean_inc(v_snd_1490_);
lean_inc(v_fst_1489_);
lean_dec(v_snd_1484_);
v___x_1492_ = lean_box(0);
v_isShared_1493_ = v_isSharedCheck_1510_;
goto v_resetjp_1491_;
}
v_resetjp_1491_:
{
uint8_t v___x_1494_; 
lean_inc(v_members_1472_);
v___x_1494_ = lp_choreo_List_all___at___00Choreo_ruleAsks_spec__0(v_fst_1489_, v_snd_1490_, v_members_1472_);
lean_dec(v_snd_1490_);
lean_dec(v_fst_1489_);
if (v___x_1494_ == 0)
{
lean_object* v___x_1495_; lean_object* v___x_1496_; 
lean_del_object(v___x_1492_);
lean_del_object(v___x_1487_);
lean_dec(v_fst_1485_);
lean_dec(v_dy_1474_);
lean_dec(v_dx_1473_);
lean_dec(v_members_1472_);
lean_dec_ref(v_name_1470_);
v___x_1495_ = lean_box(0);
v___x_1496_ = l_List_appendTR___redArg(v___x_1480_, v___x_1495_);
return v___x_1496_;
}
else
{
lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v___x_1500_; lean_object* v___x_1502_; 
v___x_1497_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1498_ = ((lean_object*)(lp_choreo_Choreo_ruleAsks___closed__0));
v___x_1499_ = lean_string_append(v_name_1470_, v___x_1498_);
v___x_1500_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1500_, 0, v_fst_1485_);
lean_ctor_set(v___x_1500_, 1, v_members_1472_);
lean_ctor_set(v___x_1500_, 2, v_dx_1473_);
lean_ctor_set(v___x_1500_, 3, v_dy_1474_);
if (v_isShared_1493_ == 0)
{
lean_ctor_set(v___x_1492_, 1, v___x_1500_);
lean_ctor_set(v___x_1492_, 0, v___x_1499_);
v___x_1502_ = v___x_1492_;
goto v_reusejp_1501_;
}
else
{
lean_object* v_reuseFailAlloc_1509_; 
v_reuseFailAlloc_1509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1509_, 0, v___x_1499_);
lean_ctor_set(v_reuseFailAlloc_1509_, 1, v___x_1500_);
v___x_1502_ = v_reuseFailAlloc_1509_;
goto v_reusejp_1501_;
}
v_reusejp_1501_:
{
lean_object* v___x_1504_; 
if (v_isShared_1488_ == 0)
{
lean_ctor_set(v___x_1487_, 1, v___x_1502_);
lean_ctor_set(v___x_1487_, 0, v___x_1497_);
v___x_1504_ = v___x_1487_;
goto v_reusejp_1503_;
}
else
{
lean_object* v_reuseFailAlloc_1508_; 
v_reuseFailAlloc_1508_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1508_, 0, v___x_1497_);
lean_ctor_set(v_reuseFailAlloc_1508_, 1, v___x_1502_);
v___x_1504_ = v_reuseFailAlloc_1508_;
goto v_reusejp_1503_;
}
v_reusejp_1503_:
{
lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; 
v___x_1505_ = lean_box(0);
v___x_1506_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1506_, 0, v___x_1504_);
lean_ctor_set(v___x_1506_, 1, v___x_1505_);
v___x_1507_ = l_List_appendTR___redArg(v___x_1480_, v___x_1506_);
return v___x_1507_;
}
}
}
}
}
}
}
v___jp_1512_:
{
if (lean_obj_tag(v_holdPhase_1467_) == 0)
{
lean_object* v___x_1514_; 
v___x_1514_ = lean_box(0);
v___y_1478_ = v___y_1513_;
v___y_1479_ = v___x_1514_;
goto v___jp_1477_;
}
else
{
lean_object* v_val_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; 
v_val_1515_ = lean_ctor_get(v_holdPhase_1467_, 0);
lean_inc(v_val_1515_);
lean_dec_ref_known(v_holdPhase_1467_, 1);
v___x_1516_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1517_ = ((lean_object*)(lp_choreo_Choreo_ruleAsks___closed__1));
lean_inc_ref(v_name_1470_);
v___x_1518_ = lean_string_append(v_name_1470_, v___x_1517_);
lean_inc(v_dy_1474_);
lean_inc(v_dx_1473_);
lean_inc(v_members_1472_);
v___x_1519_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1519_, 0, v_val_1515_);
lean_ctor_set(v___x_1519_, 1, v_members_1472_);
lean_ctor_set(v___x_1519_, 2, v_dx_1473_);
lean_ctor_set(v___x_1519_, 3, v_dy_1474_);
v___x_1520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1520_, 0, v___x_1518_);
lean_ctor_set(v___x_1520_, 1, v___x_1519_);
v___x_1521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1521_, 0, v___x_1516_);
lean_ctor_set(v___x_1521_, 1, v___x_1520_);
v___x_1522_ = lean_box(0);
v___x_1523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1523_, 0, v___x_1521_);
lean_ctor_set(v___x_1523_, 1, v___x_1522_);
v___y_1478_ = v___y_1513_;
v___y_1479_ = v___x_1523_;
goto v___jp_1477_;
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_sceneBeats(void){
_start:
{
lean_object* v___x_1552_; 
v___x_1552_ = lean_unsigned_to_nat(120u);
return v___x_1552_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__11(lean_object* v_a_1553_, lean_object* v_a_1554_){
_start:
{
if (lean_obj_tag(v_a_1553_) == 0)
{
lean_object* v___x_1555_; 
v___x_1555_ = l_List_reverse___redArg(v_a_1554_);
return v___x_1555_;
}
else
{
lean_object* v_head_1556_; lean_object* v_tail_1557_; lean_object* v___x_1559_; uint8_t v_isShared_1560_; uint8_t v_isSharedCheck_1570_; 
v_head_1556_ = lean_ctor_get(v_a_1553_, 0);
v_tail_1557_ = lean_ctor_get(v_a_1553_, 1);
v_isSharedCheck_1570_ = !lean_is_exclusive(v_a_1553_);
if (v_isSharedCheck_1570_ == 0)
{
v___x_1559_ = v_a_1553_;
v_isShared_1560_ = v_isSharedCheck_1570_;
goto v_resetjp_1558_;
}
else
{
lean_inc(v_tail_1557_);
lean_inc(v_head_1556_);
lean_dec(v_a_1553_);
v___x_1559_ = lean_box(0);
v_isShared_1560_ = v_isSharedCheck_1570_;
goto v_resetjp_1558_;
}
v_resetjp_1558_:
{
lean_object* v_x_1561_; lean_object* v___x_1562_; lean_object* v_xmin_1563_; uint8_t v___x_1564_; 
v_x_1561_ = lean_ctor_get(v_head_1556_, 0);
v___x_1562_ = lp_choreo_Choreo_stageRect;
v_xmin_1563_ = lean_ctor_get(v___x_1562_, 0);
v___x_1564_ = lean_int_dec_lt(v_x_1561_, v_xmin_1563_);
if (v___x_1564_ == 0)
{
lean_del_object(v___x_1559_);
lean_dec(v_head_1556_);
v_a_1553_ = v_tail_1557_;
goto _start;
}
else
{
lean_object* v___x_1567_; 
if (v_isShared_1560_ == 0)
{
lean_ctor_set(v___x_1559_, 1, v_a_1554_);
v___x_1567_ = v___x_1559_;
goto v_reusejp_1566_;
}
else
{
lean_object* v_reuseFailAlloc_1569_; 
v_reuseFailAlloc_1569_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1569_, 0, v_head_1556_);
lean_ctor_set(v_reuseFailAlloc_1569_, 1, v_a_1554_);
v___x_1567_ = v_reuseFailAlloc_1569_;
goto v_reusejp_1566_;
}
v_reusejp_1566_:
{
v_a_1553_ = v_tail_1557_;
v_a_1554_ = v___x_1567_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__4(lean_object* v_fst_1571_, lean_object* v_a_1572_, lean_object* v_a_1573_){
_start:
{
if (lean_obj_tag(v_a_1572_) == 0)
{
lean_object* v___x_1574_; 
v___x_1574_ = l_List_reverse___redArg(v_a_1573_);
return v___x_1574_;
}
else
{
lean_object* v_head_1575_; lean_object* v_tail_1576_; lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1586_; 
v_head_1575_ = lean_ctor_get(v_a_1572_, 0);
v_tail_1576_ = lean_ctor_get(v_a_1572_, 1);
v_isSharedCheck_1586_ = !lean_is_exclusive(v_a_1572_);
if (v_isSharedCheck_1586_ == 0)
{
v___x_1578_ = v_a_1572_;
v_isShared_1579_ = v_isSharedCheck_1586_;
goto v_resetjp_1577_;
}
else
{
lean_inc(v_tail_1576_);
lean_inc(v_head_1575_);
lean_dec(v_a_1572_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1586_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1583_; 
v___x_1580_ = l_List_lengthTR___redArg(v_fst_1571_);
v___x_1581_ = lean_nat_add(v_head_1575_, v___x_1580_);
lean_dec(v___x_1580_);
lean_dec(v_head_1575_);
if (v_isShared_1579_ == 0)
{
lean_ctor_set(v___x_1578_, 1, v_a_1573_);
lean_ctor_set(v___x_1578_, 0, v___x_1581_);
v___x_1583_ = v___x_1578_;
goto v_reusejp_1582_;
}
else
{
lean_object* v_reuseFailAlloc_1585_; 
v_reuseFailAlloc_1585_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1585_, 0, v___x_1581_);
lean_ctor_set(v_reuseFailAlloc_1585_, 1, v_a_1573_);
v___x_1583_ = v_reuseFailAlloc_1585_;
goto v_reusejp_1582_;
}
v_reusejp_1582_:
{
v_a_1572_ = v_tail_1576_;
v_a_1573_ = v___x_1583_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__4___boxed(lean_object* v_fst_1587_, lean_object* v_a_1588_, lean_object* v_a_1589_){
_start:
{
lean_object* v_res_1590_; 
v_res_1590_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__4(v_fst_1587_, v_a_1588_, v_a_1589_);
lean_dec(v_fst_1587_);
return v_res_1590_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3(lean_object* v___y_1591_, lean_object* v_current_1592_, lean_object* v_a_1593_, lean_object* v_a_1594_){
_start:
{
if (lean_obj_tag(v_a_1593_) == 0)
{
lean_object* v___x_1595_; 
v___x_1595_ = l_List_reverse___redArg(v_a_1594_);
return v___x_1595_;
}
else
{
lean_object* v_head_1596_; lean_object* v_tail_1597_; lean_object* v___x_1599_; uint8_t v_isShared_1600_; uint8_t v_isSharedCheck_1628_; 
v_head_1596_ = lean_ctor_get(v_a_1593_, 0);
v_tail_1597_ = lean_ctor_get(v_a_1593_, 1);
v_isSharedCheck_1628_ = !lean_is_exclusive(v_a_1593_);
if (v_isSharedCheck_1628_ == 0)
{
v___x_1599_ = v_a_1593_;
v_isShared_1600_ = v_isSharedCheck_1628_;
goto v_resetjp_1598_;
}
else
{
lean_inc(v_tail_1597_);
lean_inc(v_head_1596_);
lean_dec(v_a_1593_);
v___x_1599_ = lean_box(0);
v_isShared_1600_ = v_isSharedCheck_1628_;
goto v_resetjp_1598_;
}
v_resetjp_1598_:
{
lean_object* v_label_1601_; lean_object* v_kind_1602_; lean_object* v_paths_1603_; lean_object* v_bounds_1604_; lean_object* v_beats_1605_; lean_object* v_rigid_1606_; lean_object* v_orbits_1607_; lean_object* v_dmin_1608_; lean_object* v_way_1609_; uint8_t v_unison_1610_; lean_object* v___x_1612_; uint8_t v_isShared_1613_; uint8_t v_isSharedCheck_1627_; 
v_label_1601_ = lean_ctor_get(v_head_1596_, 0);
v_kind_1602_ = lean_ctor_get(v_head_1596_, 1);
v_paths_1603_ = lean_ctor_get(v_head_1596_, 2);
v_bounds_1604_ = lean_ctor_get(v_head_1596_, 3);
v_beats_1605_ = lean_ctor_get(v_head_1596_, 4);
v_rigid_1606_ = lean_ctor_get(v_head_1596_, 5);
v_orbits_1607_ = lean_ctor_get(v_head_1596_, 6);
v_dmin_1608_ = lean_ctor_get(v_head_1596_, 7);
v_way_1609_ = lean_ctor_get(v_head_1596_, 8);
v_unison_1610_ = lean_ctor_get_uint8(v_head_1596_, sizeof(void*)*9);
v_isSharedCheck_1627_ = !lean_is_exclusive(v_head_1596_);
if (v_isSharedCheck_1627_ == 0)
{
v___x_1612_ = v_head_1596_;
v_isShared_1613_ = v_isSharedCheck_1627_;
goto v_resetjp_1611_;
}
else
{
lean_inc(v_way_1609_);
lean_inc(v_dmin_1608_);
lean_inc(v_orbits_1607_);
lean_inc(v_rigid_1606_);
lean_inc(v_beats_1605_);
lean_inc(v_bounds_1604_);
lean_inc(v_paths_1603_);
lean_inc(v_kind_1602_);
lean_inc(v_label_1601_);
lean_dec(v_head_1596_);
v___x_1612_ = lean_box(0);
v_isShared_1613_ = v_isSharedCheck_1627_;
goto v_resetjp_1611_;
}
v_resetjp_1611_:
{
lean_object* v___y_1615_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; uint8_t v___x_1626_; 
v___x_1623_ = lean_unsigned_to_nat(1u);
v___x_1624_ = lean_nat_mul(v_beats_1605_, v___y_1591_);
lean_dec(v_beats_1605_);
v___x_1625_ = lean_nat_div(v___x_1624_, v_current_1592_);
lean_dec(v___x_1624_);
v___x_1626_ = lean_nat_dec_le(v___x_1623_, v___x_1625_);
if (v___x_1626_ == 0)
{
lean_dec(v___x_1625_);
v___y_1615_ = v___x_1623_;
goto v___jp_1614_;
}
else
{
v___y_1615_ = v___x_1625_;
goto v___jp_1614_;
}
v___jp_1614_:
{
lean_object* v___x_1617_; 
if (v_isShared_1613_ == 0)
{
lean_ctor_set(v___x_1612_, 4, v___y_1615_);
v___x_1617_ = v___x_1612_;
goto v_reusejp_1616_;
}
else
{
lean_object* v_reuseFailAlloc_1622_; 
v_reuseFailAlloc_1622_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1622_, 0, v_label_1601_);
lean_ctor_set(v_reuseFailAlloc_1622_, 1, v_kind_1602_);
lean_ctor_set(v_reuseFailAlloc_1622_, 2, v_paths_1603_);
lean_ctor_set(v_reuseFailAlloc_1622_, 3, v_bounds_1604_);
lean_ctor_set(v_reuseFailAlloc_1622_, 4, v___y_1615_);
lean_ctor_set(v_reuseFailAlloc_1622_, 5, v_rigid_1606_);
lean_ctor_set(v_reuseFailAlloc_1622_, 6, v_orbits_1607_);
lean_ctor_set(v_reuseFailAlloc_1622_, 7, v_dmin_1608_);
lean_ctor_set(v_reuseFailAlloc_1622_, 8, v_way_1609_);
lean_ctor_set_uint8(v_reuseFailAlloc_1622_, sizeof(void*)*9, v_unison_1610_);
v___x_1617_ = v_reuseFailAlloc_1622_;
goto v_reusejp_1616_;
}
v_reusejp_1616_:
{
lean_object* v___x_1619_; 
if (v_isShared_1600_ == 0)
{
lean_ctor_set(v___x_1599_, 1, v_a_1594_);
lean_ctor_set(v___x_1599_, 0, v___x_1617_);
v___x_1619_ = v___x_1599_;
goto v_reusejp_1618_;
}
else
{
lean_object* v_reuseFailAlloc_1621_; 
v_reuseFailAlloc_1621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1621_, 0, v___x_1617_);
lean_ctor_set(v_reuseFailAlloc_1621_, 1, v_a_1594_);
v___x_1619_ = v_reuseFailAlloc_1621_;
goto v_reusejp_1618_;
}
v_reusejp_1618_:
{
v_a_1593_ = v_tail_1597_;
v_a_1594_ = v___x_1619_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3___boxed(lean_object* v___y_1629_, lean_object* v_current_1630_, lean_object* v_a_1631_, lean_object* v_a_1632_){
_start:
{
lean_object* v_res_1633_; 
v_res_1633_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3(v___y_1629_, v_current_1630_, v_a_1631_, v_a_1632_);
lean_dec(v_current_1630_);
lean_dec(v___y_1629_);
return v_res_1633_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(lean_object* v___x_1634_, lean_object* v_ds_1635_){
_start:
{
lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; 
v___x_1636_ = lean_box(0);
v___x_1637_ = lp_choreo_List_mapTR_loop___at___00Choreo_addDrafts_spec__0(v_ds_1635_, v___x_1636_);
v___x_1638_ = lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(v___x_1634_, v___x_1637_);
lean_dec(v___x_1637_);
return v___x_1638_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5(lean_object* v_onNow_1640_, lean_object* v_pos_1641_, lean_object* v_a_1642_, lean_object* v_a_1643_){
_start:
{
if (lean_obj_tag(v_a_1642_) == 0)
{
lean_object* v___x_1644_; 
lean_dec(v_onNow_1640_);
v___x_1644_ = lean_array_to_list(v_a_1643_);
return v___x_1644_;
}
else
{
lean_object* v_head_1645_; lean_object* v_tail_1646_; lean_object* v___x_1648_; uint8_t v_isShared_1649_; uint8_t v_isSharedCheck_1668_; 
v_head_1645_ = lean_ctor_get(v_a_1642_, 0);
v_tail_1646_ = lean_ctor_get(v_a_1642_, 1);
v_isSharedCheck_1668_ = !lean_is_exclusive(v_a_1642_);
if (v_isSharedCheck_1668_ == 0)
{
v___x_1648_ = v_a_1642_;
v_isShared_1649_ = v_isSharedCheck_1668_;
goto v_resetjp_1647_;
}
else
{
lean_inc(v_tail_1646_);
lean_inc(v_head_1645_);
lean_dec(v_a_1642_);
v___x_1648_ = lean_box(0);
v_isShared_1649_ = v_isSharedCheck_1668_;
goto v_resetjp_1647_;
}
v_resetjp_1647_:
{
lean_object* v___y_1651_; lean_object* v___x_1654_; lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1654_ = lean_unsigned_to_nat(2u);
v___x_1655_ = l_List_lengthTR___redArg(v_onNow_1640_);
v___x_1656_ = lean_nat_dec_le(v___x_1654_, v___x_1655_);
lean_dec(v___x_1655_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; 
lean_del_object(v___x_1648_);
lean_dec(v_head_1645_);
v___x_1657_ = lean_box(0);
v___y_1651_ = v___x_1657_;
goto v___jp_1650_;
}
else
{
lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; lean_object* v___x_1666_; 
v___x_1658_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1659_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5___closed__0));
lean_inc(v_onNow_1640_);
v___x_1660_ = lp_choreo_Choreo_linksFor(v_onNow_1640_, v_pos_1641_);
v___x_1661_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_1661_, 0, v_head_1645_);
lean_ctor_set(v___x_1661_, 1, v___x_1660_);
v___x_1662_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1662_, 0, v___x_1659_);
lean_ctor_set(v___x_1662_, 1, v___x_1661_);
v___x_1663_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1663_, 0, v___x_1658_);
lean_ctor_set(v___x_1663_, 1, v___x_1662_);
v___x_1664_ = lean_box(0);
if (v_isShared_1649_ == 0)
{
lean_ctor_set(v___x_1648_, 1, v___x_1664_);
lean_ctor_set(v___x_1648_, 0, v___x_1663_);
v___x_1666_ = v___x_1648_;
goto v_reusejp_1665_;
}
else
{
lean_object* v_reuseFailAlloc_1667_; 
v_reuseFailAlloc_1667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1667_, 0, v___x_1663_);
lean_ctor_set(v_reuseFailAlloc_1667_, 1, v___x_1664_);
v___x_1666_ = v_reuseFailAlloc_1667_;
goto v_reusejp_1665_;
}
v_reusejp_1665_:
{
v___y_1651_ = v___x_1666_;
goto v___jp_1650_;
}
}
v___jp_1650_:
{
lean_object* v___x_1652_; 
v___x_1652_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1643_, v___y_1651_);
v_a_1642_ = v_tail_1646_;
v_a_1643_ = v___x_1652_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5___boxed(lean_object* v_onNow_1669_, lean_object* v_pos_1670_, lean_object* v_a_1671_, lean_object* v_a_1672_){
_start:
{
lean_object* v_res_1673_; 
v_res_1673_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5(v_onNow_1669_, v_pos_1670_, v_a_1671_, v_a_1672_);
lean_dec(v_pos_1670_);
return v_res_1673_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__6(lean_object* v_r_1674_, lean_object* v_a_1675_, lean_object* v_a_1676_){
_start:
{
if (lean_obj_tag(v_a_1675_) == 0)
{
lean_object* v___x_1677_; 
lean_dec_ref(v_r_1674_);
v___x_1677_ = l_List_reverse___redArg(v_a_1676_);
return v___x_1677_;
}
else
{
lean_object* v_head_1678_; lean_object* v_tail_1679_; lean_object* v___x_1681_; uint8_t v_isShared_1682_; uint8_t v_isSharedCheck_1697_; 
v_head_1678_ = lean_ctor_get(v_a_1675_, 0);
v_tail_1679_ = lean_ctor_get(v_a_1675_, 1);
v_isSharedCheck_1697_ = !lean_is_exclusive(v_a_1675_);
if (v_isSharedCheck_1697_ == 0)
{
v___x_1681_ = v_a_1675_;
v_isShared_1682_ = v_isSharedCheck_1697_;
goto v_resetjp_1680_;
}
else
{
lean_inc(v_tail_1679_);
lean_inc(v_head_1678_);
lean_dec(v_a_1675_);
v___x_1681_ = lean_box(0);
v_isShared_1682_ = v_isSharedCheck_1697_;
goto v_resetjp_1680_;
}
v_resetjp_1680_:
{
lean_object* v_name_1683_; lean_object* v_members_1684_; lean_object* v_dx_1685_; lean_object* v_dy_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1694_; 
v_name_1683_ = lean_ctor_get(v_r_1674_, 0);
v_members_1684_ = lean_ctor_get(v_r_1674_, 3);
v_dx_1685_ = lean_ctor_get(v_r_1674_, 4);
v_dy_1686_ = lean_ctor_get(v_r_1674_, 5);
v___x_1687_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1688_ = ((lean_object*)(lp_choreo_Choreo_ruleAsks___closed__1));
lean_inc_ref(v_name_1683_);
v___x_1689_ = lean_string_append(v_name_1683_, v___x_1688_);
lean_inc(v_dy_1686_);
lean_inc(v_dx_1685_);
lean_inc(v_members_1684_);
v___x_1690_ = lean_alloc_ctor(7, 4, 0);
lean_ctor_set(v___x_1690_, 0, v_head_1678_);
lean_ctor_set(v___x_1690_, 1, v_members_1684_);
lean_ctor_set(v___x_1690_, 2, v_dx_1685_);
lean_ctor_set(v___x_1690_, 3, v_dy_1686_);
v___x_1691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1691_, 0, v___x_1689_);
lean_ctor_set(v___x_1691_, 1, v___x_1690_);
v___x_1692_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1692_, 0, v___x_1687_);
lean_ctor_set(v___x_1692_, 1, v___x_1691_);
if (v_isShared_1682_ == 0)
{
lean_ctor_set(v___x_1681_, 1, v_a_1676_);
lean_ctor_set(v___x_1681_, 0, v___x_1692_);
v___x_1694_ = v___x_1681_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1696_; 
v_reuseFailAlloc_1696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1696_, 0, v___x_1692_);
lean_ctor_set(v_reuseFailAlloc_1696_, 1, v_a_1676_);
v___x_1694_ = v_reuseFailAlloc_1696_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
v_a_1675_ = v_tail_1679_;
v_a_1676_ = v___x_1694_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__8(lean_object* v___y_1698_, lean_object* v___y_1699_, lean_object* v_holdIxs_1700_, lean_object* v_a_1701_, lean_object* v_a_1702_){
_start:
{
if (lean_obj_tag(v_a_1701_) == 0)
{
lean_object* v___x_1703_; 
lean_dec(v___y_1699_);
lean_dec(v___y_1698_);
v___x_1703_ = lean_array_to_list(v_a_1702_);
return v___x_1703_;
}
else
{
lean_object* v_head_1704_; lean_object* v_tail_1705_; lean_object* v___y_1707_; lean_object* v_kind_1710_; lean_object* v___x_1711_; lean_object* v___y_1713_; lean_object* v___x_1723_; uint8_t v___x_1724_; 
v_head_1704_ = lean_ctor_get(v_a_1701_, 0);
lean_inc(v_head_1704_);
v_tail_1705_ = lean_ctor_get(v_a_1701_, 1);
lean_inc(v_tail_1705_);
lean_dec_ref_known(v_a_1701_, 2);
v_kind_1710_ = lean_ctor_get(v_head_1704_, 1);
v___x_1711_ = lean_unsigned_to_nat(1u);
v___x_1723_ = ((lean_object*)(lp_choreo_Choreo_rulesOfFrame___closed__4));
v___x_1724_ = lean_string_dec_eq(v_kind_1710_, v___x_1723_);
if (v___x_1724_ == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = l_List_head_x3f___redArg(v_holdIxs_1700_);
v___y_1713_ = v___x_1725_;
goto v___jp_1712_;
}
else
{
lean_object* v___x_1726_; 
v___x_1726_ = l_List_getLast_x3f___redArg(v_holdIxs_1700_);
v___y_1713_ = v___x_1726_;
goto v___jp_1712_;
}
v___jp_1706_:
{
lean_object* v___x_1708_; 
v___x_1708_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_1702_, v___y_1707_);
v_a_1701_ = v_tail_1705_;
v_a_1702_ = v___x_1708_;
goto _start;
}
v___jp_1712_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; uint8_t v___x_1716_; 
lean_inc(v___y_1699_);
lean_inc(v___y_1698_);
lean_inc(v_head_1704_);
v___x_1714_ = lp_choreo_Choreo_ruleAsks(v_head_1704_, v___y_1713_, v___y_1698_, v___y_1699_);
v___x_1715_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00List_filterMapTR_go___at___00Choreo_rulesOfFrame_spec__2_spec__4___closed__0));
v___x_1716_ = lean_string_dec_eq(v_kind_1710_, v___x_1715_);
if (v___x_1716_ == 0)
{
lean_object* v___x_1717_; lean_object* v___x_1718_; 
lean_dec(v_head_1704_);
v___x_1717_ = lean_box(0);
v___x_1718_ = l_List_appendTR___redArg(v___x_1714_, v___x_1717_);
v___y_1707_ = v___x_1718_;
goto v___jp_1706_;
}
else
{
lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v___x_1719_ = l_List_drop___redArg(v___x_1711_, v_holdIxs_1700_);
v___x_1720_ = lean_box(0);
v___x_1721_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__6(v_head_1704_, v___x_1719_, v___x_1720_);
v___x_1722_ = l_List_appendTR___redArg(v___x_1714_, v___x_1721_);
v___y_1707_ = v___x_1722_;
goto v___jp_1706_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__8___boxed(lean_object* v___y_1727_, lean_object* v___y_1728_, lean_object* v_holdIxs_1729_, lean_object* v_a_1730_, lean_object* v_a_1731_){
_start:
{
lean_object* v_res_1732_; 
v_res_1732_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__8(v___y_1727_, v___y_1728_, v_holdIxs_1729_, v_a_1730_, v_a_1731_);
lean_dec(v_holdIxs_1729_);
return v_res_1732_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__7(lean_object* v_f_1733_, lean_object* v_a_1734_, lean_object* v_a_1735_){
_start:
{
if (lean_obj_tag(v_a_1734_) == 0)
{
lean_object* v___x_1736_; 
v___x_1736_ = l_List_reverse___redArg(v_a_1735_);
return v___x_1736_;
}
else
{
lean_object* v_head_1737_; lean_object* v_tail_1738_; lean_object* v___x_1740_; uint8_t v_isShared_1741_; uint8_t v_isSharedCheck_1749_; 
v_head_1737_ = lean_ctor_get(v_a_1734_, 0);
v_tail_1738_ = lean_ctor_get(v_a_1734_, 1);
v_isSharedCheck_1749_ = !lean_is_exclusive(v_a_1734_);
if (v_isSharedCheck_1749_ == 0)
{
v___x_1740_ = v_a_1734_;
v_isShared_1741_ = v_isSharedCheck_1749_;
goto v_resetjp_1739_;
}
else
{
lean_inc(v_tail_1738_);
lean_inc(v_head_1737_);
lean_dec(v_a_1734_);
v___x_1740_ = lean_box(0);
v_isShared_1741_ = v_isSharedCheck_1749_;
goto v_resetjp_1739_;
}
v_resetjp_1739_:
{
lean_object* v_frame_1742_; uint8_t v___x_1743_; 
v_frame_1742_ = lean_ctor_get(v_head_1737_, 2);
v___x_1743_ = lean_nat_dec_eq(v_frame_1742_, v_f_1733_);
if (v___x_1743_ == 0)
{
lean_del_object(v___x_1740_);
lean_dec(v_head_1737_);
v_a_1734_ = v_tail_1738_;
goto _start;
}
else
{
lean_object* v___x_1746_; 
if (v_isShared_1741_ == 0)
{
lean_ctor_set(v___x_1740_, 1, v_a_1735_);
v___x_1746_ = v___x_1740_;
goto v_reusejp_1745_;
}
else
{
lean_object* v_reuseFailAlloc_1748_; 
v_reuseFailAlloc_1748_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1748_, 0, v_head_1737_);
lean_ctor_set(v_reuseFailAlloc_1748_, 1, v_a_1735_);
v___x_1746_ = v_reuseFailAlloc_1748_;
goto v_reusejp_1745_;
}
v_reusejp_1745_:
{
v_a_1734_ = v_tail_1738_;
v_a_1735_ = v___x_1746_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__7___boxed(lean_object* v_f_1750_, lean_object* v_a_1751_, lean_object* v_a_1752_){
_start:
{
lean_object* v_res_1753_; 
v_res_1753_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__7(v_f_1750_, v_a_1751_, v_a_1752_);
lean_dec(v_f_1750_);
return v_res_1753_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0(lean_object* v_f_1754_, lean_object* v_a_1755_, lean_object* v_a_1756_){
_start:
{
if (lean_obj_tag(v_a_1755_) == 0)
{
lean_object* v___x_1757_; 
v___x_1757_ = l_List_reverse___redArg(v_a_1756_);
return v___x_1757_;
}
else
{
lean_object* v_head_1758_; lean_object* v_tail_1759_; lean_object* v___x_1761_; uint8_t v_isShared_1762_; uint8_t v_isSharedCheck_1770_; 
v_head_1758_ = lean_ctor_get(v_a_1755_, 0);
v_tail_1759_ = lean_ctor_get(v_a_1755_, 1);
v_isSharedCheck_1770_ = !lean_is_exclusive(v_a_1755_);
if (v_isSharedCheck_1770_ == 0)
{
v___x_1761_ = v_a_1755_;
v_isShared_1762_ = v_isSharedCheck_1770_;
goto v_resetjp_1760_;
}
else
{
lean_inc(v_tail_1759_);
lean_inc(v_head_1758_);
lean_dec(v_a_1755_);
v___x_1761_ = lean_box(0);
v_isShared_1762_ = v_isSharedCheck_1770_;
goto v_resetjp_1760_;
}
v_resetjp_1760_:
{
lean_object* v_fst_1763_; uint8_t v___x_1764_; 
v_fst_1763_ = lean_ctor_get(v_head_1758_, 0);
v___x_1764_ = lean_nat_dec_eq(v_fst_1763_, v_f_1754_);
if (v___x_1764_ == 0)
{
lean_del_object(v___x_1761_);
lean_dec(v_head_1758_);
v_a_1755_ = v_tail_1759_;
goto _start;
}
else
{
lean_object* v___x_1767_; 
if (v_isShared_1762_ == 0)
{
lean_ctor_set(v___x_1761_, 1, v_a_1756_);
v___x_1767_ = v___x_1761_;
goto v_reusejp_1766_;
}
else
{
lean_object* v_reuseFailAlloc_1769_; 
v_reuseFailAlloc_1769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1769_, 0, v_head_1758_);
lean_ctor_set(v_reuseFailAlloc_1769_, 1, v_a_1756_);
v___x_1767_ = v_reuseFailAlloc_1769_;
goto v_reusejp_1766_;
}
v_reusejp_1766_:
{
v_a_1755_ = v_tail_1759_;
v_a_1756_ = v___x_1767_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0___boxed(lean_object* v_f_1771_, lean_object* v_a_1772_, lean_object* v_a_1773_){
_start:
{
lean_object* v_res_1774_; 
v_res_1774_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0(v_f_1771_, v_a_1772_, v_a_1773_);
lean_dec(v_f_1771_);
return v_res_1774_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__1(lean_object* v_a_1775_, lean_object* v_a_1776_){
_start:
{
if (lean_obj_tag(v_a_1775_) == 0)
{
lean_object* v___x_1777_; 
v___x_1777_ = l_List_reverse___redArg(v_a_1776_);
return v___x_1777_;
}
else
{
lean_object* v_head_1778_; lean_object* v_tail_1779_; lean_object* v___x_1781_; uint8_t v_isShared_1782_; uint8_t v_isSharedCheck_1788_; 
v_head_1778_ = lean_ctor_get(v_a_1775_, 0);
v_tail_1779_ = lean_ctor_get(v_a_1775_, 1);
v_isSharedCheck_1788_ = !lean_is_exclusive(v_a_1775_);
if (v_isSharedCheck_1788_ == 0)
{
v___x_1781_ = v_a_1775_;
v_isShared_1782_ = v_isSharedCheck_1788_;
goto v_resetjp_1780_;
}
else
{
lean_inc(v_tail_1779_);
lean_inc(v_head_1778_);
lean_dec(v_a_1775_);
v___x_1781_ = lean_box(0);
v_isShared_1782_ = v_isSharedCheck_1788_;
goto v_resetjp_1780_;
}
v_resetjp_1780_:
{
lean_object* v_snd_1783_; lean_object* v___x_1785_; 
v_snd_1783_ = lean_ctor_get(v_head_1778_, 1);
lean_inc(v_snd_1783_);
lean_dec(v_head_1778_);
if (v_isShared_1782_ == 0)
{
lean_ctor_set(v___x_1781_, 1, v_a_1776_);
lean_ctor_set(v___x_1781_, 0, v_snd_1783_);
v___x_1785_ = v___x_1781_;
goto v_reusejp_1784_;
}
else
{
lean_object* v_reuseFailAlloc_1787_; 
v_reuseFailAlloc_1787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1787_, 0, v_snd_1783_);
lean_ctor_set(v_reuseFailAlloc_1787_, 1, v_a_1776_);
v___x_1785_ = v_reuseFailAlloc_1787_;
goto v_reusejp_1784_;
}
v_reusejp_1784_:
{
v_a_1775_ = v_tail_1779_;
v_a_1776_ = v___x_1785_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0(lean_object* v_sc_1789_, lean_object* v_f_1790_){
_start:
{
lean_object* v_ways_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; 
v_ways_1791_ = lean_ctor_get(v_sc_1789_, 5);
v___x_1792_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__17));
v___x_1793_ = l_List_getD___redArg(v_ways_1791_, v_f_1790_, v___x_1792_);
return v___x_1793_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0___boxed(lean_object* v_sc_1794_, lean_object* v_f_1795_){
_start:
{
lean_object* v_res_1796_; 
v_res_1796_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0(v_sc_1794_, v_f_1795_);
lean_dec_ref(v_sc_1794_);
return v_res_1796_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9(lean_object* v_frames_1801_, lean_object* v___y_1802_, lean_object* v_n_1803_, lean_object* v___x_1804_, lean_object* v_sc_1805_, lean_object* v_names_1806_, lean_object* v_envelope_1807_, lean_object* v_slWing_1808_, lean_object* v_srWing_1809_, lean_object* v_gap_1810_, uint8_t v___y_1811_, lean_object* v___x_1812_, lean_object* v_each_1813_, lean_object* v_lastHold_1814_, lean_object* v_x_1815_, lean_object* v_x_1816_){
_start:
{
if (lean_obj_tag(v_x_1816_) == 0)
{
lean_dec(v_lastHold_1814_);
lean_dec(v_each_1813_);
lean_dec_ref(v_srWing_1809_);
lean_dec_ref(v_slWing_1808_);
lean_dec_ref(v_envelope_1807_);
lean_dec_ref(v_names_1806_);
lean_dec_ref(v_sc_1805_);
lean_dec(v_n_1803_);
return v_x_1815_;
}
else
{
lean_object* v_head_1817_; lean_object* v_tail_1818_; lean_object* v___x_1820_; uint8_t v_isShared_1821_; uint8_t v_isSharedCheck_2025_; 
v_head_1817_ = lean_ctor_get(v_x_1816_, 0);
v_tail_1818_ = lean_ctor_get(v_x_1816_, 1);
v_isSharedCheck_2025_ = !lean_is_exclusive(v_x_1816_);
if (v_isSharedCheck_2025_ == 0)
{
v___x_1820_ = v_x_1816_;
v_isShared_1821_ = v_isSharedCheck_2025_;
goto v_resetjp_1819_;
}
else
{
lean_inc(v_tail_1818_);
lean_inc(v_head_1817_);
lean_dec(v_x_1816_);
v___x_1820_ = lean_box(0);
v_isShared_1821_ = v_isSharedCheck_2025_;
goto v_resetjp_1819_;
}
v_resetjp_1819_:
{
lean_object* v___y_1823_; lean_object* v___y_1824_; lean_object* v___y_1825_; lean_object* v___y_1826_; lean_object* v___y_1827_; lean_object* v_snd_1833_; lean_object* v_fst_1834_; lean_object* v___x_1836_; uint8_t v_isShared_1837_; uint8_t v_isSharedCheck_2024_; 
v_snd_1833_ = lean_ctor_get(v_x_1815_, 1);
v_fst_1834_ = lean_ctor_get(v_x_1815_, 0);
v_isSharedCheck_2024_ = !lean_is_exclusive(v_x_1815_);
if (v_isSharedCheck_2024_ == 0)
{
v___x_1836_ = v_x_1815_;
v_isShared_1837_ = v_isSharedCheck_2024_;
goto v_resetjp_1835_;
}
else
{
lean_inc(v_snd_1833_);
lean_inc(v_fst_1834_);
lean_dec(v_x_1815_);
v___x_1836_ = lean_box(0);
v_isShared_1837_ = v_isSharedCheck_2024_;
goto v_resetjp_1835_;
}
v___jp_1822_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; 
v___x_1828_ = l_List_appendTR___redArg(v___y_1826_, v___y_1827_);
v___x_1829_ = l_List_appendTR___redArg(v___y_1825_, v___y_1824_);
v___x_1830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1830_, 0, v___x_1829_);
lean_ctor_set(v___x_1830_, 1, v___y_1823_);
v___x_1831_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1831_, 0, v___x_1828_);
lean_ctor_set(v___x_1831_, 1, v___x_1830_);
v_x_1815_ = v___x_1831_;
v_x_1816_ = v_tail_1818_;
goto _start;
}
v_resetjp_1835_:
{
lean_object* v_fst_1838_; lean_object* v_snd_1839_; lean_object* v___x_1841_; uint8_t v_isShared_1842_; uint8_t v_isSharedCheck_2023_; 
v_fst_1838_ = lean_ctor_get(v_snd_1833_, 0);
v_snd_1839_ = lean_ctor_get(v_snd_1833_, 1);
v_isSharedCheck_2023_ = !lean_is_exclusive(v_snd_1833_);
if (v_isSharedCheck_2023_ == 0)
{
v___x_1841_ = v_snd_1833_;
v_isShared_1842_ = v_isSharedCheck_2023_;
goto v_resetjp_1840_;
}
else
{
lean_inc(v_snd_1839_);
lean_inc(v_fst_1838_);
lean_dec(v_snd_1833_);
v___x_1841_ = lean_box(0);
v_isShared_1842_ = v_isSharedCheck_2023_;
goto v_resetjp_1840_;
}
v_resetjp_1840_:
{
lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___y_1846_; lean_object* v___y_1847_; lean_object* v___y_1848_; lean_object* v___y_1849_; lean_object* v___y_1850_; lean_object* v___y_1851_; lean_object* v___y_1852_; lean_object* v___y_1888_; lean_object* v___y_1889_; lean_object* v___y_1890_; lean_object* v___y_1891_; lean_object* v___y_1892_; lean_object* v___y_1893_; lean_object* v___y_1894_; lean_object* v___y_1895_; lean_object* v___x_1897_; lean_object* v_pos_1898_; lean_object* v___y_1900_; lean_object* v___y_1901_; lean_object* v___y_1902_; lean_object* v___y_1903_; uint8_t v___y_1904_; lean_object* v___y_1905_; lean_object* v___y_1906_; lean_object* v___y_1907_; lean_object* v___y_1934_; lean_object* v___y_1935_; lean_object* v___y_1936_; lean_object* v___y_1937_; uint8_t v___y_1938_; lean_object* v___y_1939_; lean_object* v___y_1940_; uint8_t v___x_1941_; lean_object* v___y_1943_; lean_object* v___y_1944_; lean_object* v___y_1945_; lean_object* v___y_1946_; lean_object* v___y_1947_; lean_object* v___y_1948_; uint8_t v___y_1949_; lean_object* v___y_1950_; lean_object* v___y_1951_; lean_object* v___y_1952_; lean_object* v___y_1974_; lean_object* v___y_1975_; lean_object* v___y_1976_; lean_object* v___y_1977_; lean_object* v___y_1978_; lean_object* v___y_1979_; uint8_t v___y_1980_; lean_object* v___y_1981_; lean_object* v___y_1982_; lean_object* v___y_1985_; lean_object* v___y_1986_; lean_object* v___y_1987_; lean_object* v___y_2010_; lean_object* v___y_2011_; 
v___x_1843_ = lean_box(0);
v___x_1844_ = lean_unsigned_to_nat(0u);
v___x_1897_ = lean_unsigned_to_nat(1u);
lean_inc(v_head_1817_);
v_pos_1898_ = l_List_getD___redArg(v_frames_1801_, v_head_1817_, v___x_1843_);
v___x_1941_ = lean_nat_dec_eq(v_head_1817_, v___x_1844_);
if (v___x_1941_ == 0)
{
lean_object* v___x_2019_; lean_object* v___x_2020_; lean_object* v___x_2021_; 
v___x_2019_ = l_List_lengthTR___redArg(v_fst_1834_);
v___x_2020_ = lean_nat_sub(v___x_2019_, v___x_1897_);
lean_dec(v___x_2019_);
lean_inc(v___x_2020_);
v___x_2021_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2021_, 0, v___x_2020_);
v___y_2010_ = v___x_2021_;
v___y_2011_ = v___x_2020_;
goto v___jp_2009_;
}
else
{
lean_object* v___x_2022_; 
v___x_2022_ = lean_box(0);
v___y_2010_ = v___x_2022_;
v___y_2011_ = v___x_1844_;
goto v___jp_2009_;
}
v___jp_1845_:
{
if (v___y_1811_ == 0)
{
lean_dec(v___y_1852_);
lean_dec(v___y_1851_);
lean_del_object(v___x_1820_);
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1847_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1850_;
v___y_1827_ = v___y_1849_;
goto v___jp_1822_;
}
else
{
uint8_t v___x_1853_; 
v___x_1853_ = lean_nat_dec_eq(v___y_1852_, v___y_1851_);
if (v___x_1853_ == 0)
{
uint8_t v___x_1854_; 
v___x_1854_ = lean_nat_dec_eq(v___y_1851_, v___x_1844_);
if (v___x_1854_ == 0)
{
lean_object* v___x_1855_; uint8_t v___x_1856_; 
v___x_1855_ = l_List_lengthTR___redArg(v___y_1849_);
v___x_1856_ = lean_nat_dec_lt(v___y_1852_, v___x_1855_);
lean_dec(v___x_1855_);
if (v___x_1856_ == 0)
{
lean_object* v_scaled_1857_; lean_object* v___x_1858_; 
v_scaled_1857_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3(v___y_1852_, v___y_1851_, v___y_1849_, v___x_1843_);
lean_dec(v___y_1851_);
v___x_1858_ = l_List_getLast_x3f___redArg(v_scaled_1857_);
if (lean_obj_tag(v___x_1858_) == 0)
{
lean_dec(v___y_1852_);
lean_del_object(v___x_1820_);
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1847_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1850_;
v___y_1827_ = v_scaled_1857_;
goto v___jp_1822_;
}
else
{
lean_object* v_val_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v_others_1863_; uint8_t v___x_1864_; 
v_val_1859_ = lean_ctor_get(v___x_1858_, 0);
lean_inc(v_val_1859_);
lean_dec_ref_known(v___x_1858_, 1);
lean_inc(v_scaled_1857_);
v___x_1860_ = lean_array_mk(v_scaled_1857_);
v___x_1861_ = lean_array_pop(v___x_1860_);
v___x_1862_ = lean_array_to_list(v___x_1861_);
lean_inc(v___x_1862_);
v_others_1863_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_1844_, v___x_1862_);
v___x_1864_ = lean_nat_dec_lt(v_others_1863_, v___y_1852_);
if (v___x_1864_ == 0)
{
lean_dec(v_others_1863_);
lean_dec(v___x_1862_);
lean_dec(v_val_1859_);
lean_dec(v___y_1852_);
lean_del_object(v___x_1820_);
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1847_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1850_;
v___y_1827_ = v_scaled_1857_;
goto v___jp_1822_;
}
else
{
lean_object* v_label_1865_; lean_object* v_kind_1866_; lean_object* v_paths_1867_; lean_object* v_bounds_1868_; lean_object* v_rigid_1869_; lean_object* v_orbits_1870_; lean_object* v_dmin_1871_; lean_object* v_way_1872_; uint8_t v_unison_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1885_; 
lean_dec(v_scaled_1857_);
v_label_1865_ = lean_ctor_get(v_val_1859_, 0);
v_kind_1866_ = lean_ctor_get(v_val_1859_, 1);
v_paths_1867_ = lean_ctor_get(v_val_1859_, 2);
v_bounds_1868_ = lean_ctor_get(v_val_1859_, 3);
v_rigid_1869_ = lean_ctor_get(v_val_1859_, 5);
v_orbits_1870_ = lean_ctor_get(v_val_1859_, 6);
v_dmin_1871_ = lean_ctor_get(v_val_1859_, 7);
v_way_1872_ = lean_ctor_get(v_val_1859_, 8);
v_unison_1873_ = lean_ctor_get_uint8(v_val_1859_, sizeof(void*)*9);
v_isSharedCheck_1885_ = !lean_is_exclusive(v_val_1859_);
if (v_isSharedCheck_1885_ == 0)
{
lean_object* v_unused_1886_; 
v_unused_1886_ = lean_ctor_get(v_val_1859_, 4);
lean_dec(v_unused_1886_);
v___x_1875_ = v_val_1859_;
v_isShared_1876_ = v_isSharedCheck_1885_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_way_1872_);
lean_inc(v_dmin_1871_);
lean_inc(v_orbits_1870_);
lean_inc(v_rigid_1869_);
lean_inc(v_bounds_1868_);
lean_inc(v_paths_1867_);
lean_inc(v_kind_1866_);
lean_inc(v_label_1865_);
lean_dec(v_val_1859_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1885_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1879_; 
v___x_1877_ = lean_nat_sub(v___y_1852_, v_others_1863_);
lean_dec(v_others_1863_);
lean_dec(v___y_1852_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 4, v___x_1877_);
v___x_1879_ = v___x_1875_;
goto v_reusejp_1878_;
}
else
{
lean_object* v_reuseFailAlloc_1884_; 
v_reuseFailAlloc_1884_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_1884_, 0, v_label_1865_);
lean_ctor_set(v_reuseFailAlloc_1884_, 1, v_kind_1866_);
lean_ctor_set(v_reuseFailAlloc_1884_, 2, v_paths_1867_);
lean_ctor_set(v_reuseFailAlloc_1884_, 3, v_bounds_1868_);
lean_ctor_set(v_reuseFailAlloc_1884_, 4, v___x_1877_);
lean_ctor_set(v_reuseFailAlloc_1884_, 5, v_rigid_1869_);
lean_ctor_set(v_reuseFailAlloc_1884_, 6, v_orbits_1870_);
lean_ctor_set(v_reuseFailAlloc_1884_, 7, v_dmin_1871_);
lean_ctor_set(v_reuseFailAlloc_1884_, 8, v_way_1872_);
lean_ctor_set_uint8(v_reuseFailAlloc_1884_, sizeof(void*)*9, v_unison_1873_);
v___x_1879_ = v_reuseFailAlloc_1884_;
goto v_reusejp_1878_;
}
v_reusejp_1878_:
{
lean_object* v___x_1881_; 
if (v_isShared_1821_ == 0)
{
lean_ctor_set(v___x_1820_, 1, v___x_1843_);
lean_ctor_set(v___x_1820_, 0, v___x_1879_);
v___x_1881_ = v___x_1820_;
goto v_reusejp_1880_;
}
else
{
lean_object* v_reuseFailAlloc_1883_; 
v_reuseFailAlloc_1883_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1883_, 0, v___x_1879_);
lean_ctor_set(v_reuseFailAlloc_1883_, 1, v___x_1843_);
v___x_1881_ = v_reuseFailAlloc_1883_;
goto v_reusejp_1880_;
}
v_reusejp_1880_:
{
lean_object* v___x_1882_; 
v___x_1882_ = l_List_appendTR___redArg(v___x_1862_, v___x_1881_);
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1847_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1850_;
v___y_1827_ = v___x_1882_;
goto v___jp_1822_;
}
}
}
}
}
}
else
{
lean_dec(v___y_1852_);
lean_dec(v___y_1851_);
lean_del_object(v___x_1820_);
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1847_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1850_;
v___y_1827_ = v___y_1849_;
goto v___jp_1822_;
}
}
else
{
lean_dec(v___y_1852_);
lean_dec(v___y_1851_);
lean_del_object(v___x_1820_);
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1847_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1850_;
v___y_1827_ = v___y_1849_;
goto v___jp_1822_;
}
}
else
{
lean_dec(v___y_1852_);
lean_dec(v___y_1851_);
lean_del_object(v___x_1820_);
v___y_1823_ = v___y_1846_;
v___y_1824_ = v___y_1847_;
v___y_1825_ = v___y_1848_;
v___y_1826_ = v___y_1850_;
v___y_1827_ = v___y_1849_;
goto v___jp_1822_;
}
}
}
v___jp_1887_:
{
uint8_t v___x_1896_; 
v___x_1896_ = lean_nat_dec_le(v___y_1892_, v___y_1895_);
if (v___x_1896_ == 0)
{
lean_dec(v___y_1895_);
v___y_1846_ = v___y_1888_;
v___y_1847_ = v___y_1889_;
v___y_1848_ = v___y_1890_;
v___y_1849_ = v___y_1891_;
v___y_1850_ = v___y_1893_;
v___y_1851_ = v___y_1894_;
v___y_1852_ = v___y_1892_;
goto v___jp_1845_;
}
else
{
lean_dec(v___y_1892_);
v___y_1846_ = v___y_1888_;
v___y_1847_ = v___y_1889_;
v___y_1848_ = v___y_1890_;
v___y_1849_ = v___y_1891_;
v___y_1850_ = v___y_1893_;
v___y_1851_ = v___y_1894_;
v___y_1852_ = v___y_1895_;
goto v___jp_1845_;
}
}
v___jp_1899_:
{
lean_object* v_ds_x27_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v_asks_x27_1911_; 
v_ds_x27_1908_ = l_List_appendTR___redArg(v_fst_1834_, v___y_1903_);
v___x_1909_ = l_List_appendTR___redArg(v_fst_1838_, v___y_1907_);
v___x_1910_ = l_List_appendTR___redArg(v___x_1909_, v___y_1902_);
v_asks_x27_1911_ = l_List_appendTR___redArg(v___x_1910_, v___y_1900_);
if (v___y_1904_ == 0)
{
lean_object* v___x_1913_; 
lean_dec(v___y_1906_);
lean_dec(v___y_1905_);
lean_dec(v_pos_1898_);
lean_del_object(v___x_1820_);
lean_dec(v_head_1817_);
if (v_isShared_1842_ == 0)
{
lean_ctor_set(v___x_1841_, 1, v___y_1901_);
lean_ctor_set(v___x_1841_, 0, v_asks_x27_1911_);
v___x_1913_ = v___x_1841_;
goto v_reusejp_1912_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v_asks_x27_1911_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v___y_1901_);
v___x_1913_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1912_;
}
v_reusejp_1912_:
{
lean_object* v___x_1915_; 
if (v_isShared_1837_ == 0)
{
lean_ctor_set(v___x_1836_, 1, v___x_1913_);
lean_ctor_set(v___x_1836_, 0, v_ds_x27_1908_);
v___x_1915_ = v___x_1836_;
goto v_reusejp_1914_;
}
else
{
lean_object* v_reuseFailAlloc_1917_; 
v_reuseFailAlloc_1917_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1917_, 0, v_ds_x27_1908_);
lean_ctor_set(v_reuseFailAlloc_1917_, 1, v___x_1913_);
v___x_1915_ = v_reuseFailAlloc_1917_;
goto v_reusejp_1914_;
}
v_reusejp_1914_:
{
v_x_1815_ = v___x_1915_;
v_x_1816_ = v_tail_1818_;
goto _start;
}
}
}
else
{
lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; lean_object* v___x_1922_; lean_object* v___x_1923_; lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; lean_object* v_fst_1928_; lean_object* v_snd_1929_; lean_object* v_current_1930_; lean_object* v___x_1931_; uint8_t v___x_1932_; 
lean_del_object(v___x_1841_);
lean_del_object(v___x_1836_);
v___x_1919_ = l_List_getD___redArg(v_frames_1801_, v___y_1906_, v___x_1843_);
v___x_1920_ = l_List_lengthTR___redArg(v_ds_x27_1908_);
v___x_1921_ = lean_unsigned_to_nat(2u);
v___x_1922_ = lean_nat_add(v_head_1817_, v___x_1921_);
v___x_1923_ = lean_obj_once(&lp_choreo_Choreo_rowY___closed__1, &lp_choreo_Choreo_rowY___closed__1_once, _init_lp_choreo_Choreo_rowY___closed__1);
lean_inc(v_head_1817_);
v___x_1924_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0(v_sc_1805_, v_head_1817_);
v___x_1925_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0(v_head_1817_, v___y_1905_, v___x_1843_);
v___x_1926_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__1(v___x_1925_, v___x_1843_);
lean_inc(v___x_1926_);
lean_inc_ref(v_srWing_1809_);
lean_inc_ref(v_slWing_1808_);
lean_inc_ref(v_envelope_1807_);
lean_inc(v_n_1803_);
lean_inc_ref(v_names_1806_);
v___x_1927_ = lp_choreo_Choreo_transition(v_names_1806_, v_n_1803_, v_pos_1898_, v___x_1919_, v___x_1920_, v___x_1922_, v___x_1923_, v_envelope_1807_, v_slWing_1808_, v_srWing_1809_, v___x_1924_, v_gap_1810_, v___x_1926_);
v_fst_1928_ = lean_ctor_get(v___x_1927_, 0);
lean_inc_n(v_fst_1928_, 2);
v_snd_1929_ = lean_ctor_get(v___x_1927_, 1);
lean_inc(v_snd_1929_);
lean_dec_ref(v___x_1927_);
v_current_1930_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_1844_, v_fst_1928_);
v___x_1931_ = l_List_getD___redArg(v___x_1812_, v_head_1817_, v_current_1930_);
v___x_1932_ = l_List_isEmpty___redArg(v___x_1926_);
lean_dec(v___x_1926_);
if (v___x_1932_ == 0)
{
lean_inc(v_current_1930_);
v___y_1888_ = v___y_1901_;
v___y_1889_ = v_snd_1929_;
v___y_1890_ = v_asks_x27_1911_;
v___y_1891_ = v_fst_1928_;
v___y_1892_ = v___x_1931_;
v___y_1893_ = v_ds_x27_1908_;
v___y_1894_ = v_current_1930_;
v___y_1895_ = v_current_1930_;
goto v___jp_1887_;
}
else
{
v___y_1888_ = v___y_1901_;
v___y_1889_ = v_snd_1929_;
v___y_1890_ = v_asks_x27_1911_;
v___y_1891_ = v_fst_1928_;
v___y_1892_ = v___x_1931_;
v___y_1893_ = v_ds_x27_1908_;
v___y_1894_ = v_current_1930_;
v___y_1895_ = v___x_1844_;
goto v___jp_1887_;
}
}
}
v___jp_1933_:
{
v___y_1900_ = v___y_1934_;
v___y_1901_ = v___y_1935_;
v___y_1902_ = v___y_1936_;
v___y_1903_ = v___y_1937_;
v___y_1904_ = v___y_1938_;
v___y_1905_ = v___y_1939_;
v___y_1906_ = v___y_1940_;
v___y_1907_ = v___x_1843_;
goto v___jp_1899_;
}
v___jp_1942_:
{
lean_object* v_rules_1953_; lean_object* v_bends_1954_; lean_object* v_rules_1955_; lean_object* v_ruleList_1956_; 
v_rules_1953_ = lean_ctor_get(v_sc_1805_, 1);
v_bends_1954_ = lean_ctor_get(v_sc_1805_, 8);
lean_inc(v_rules_1953_);
v_rules_1955_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__7(v_head_1817_, v_rules_1953_, v___x_1843_);
v_ruleList_1956_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__8(v___y_1944_, v___y_1952_, v___y_1948_, v_rules_1955_, v___y_1950_);
if (v___x_1941_ == 0)
{
lean_dec(v___y_1948_);
lean_dec(v___y_1946_);
lean_inc(v_bends_1954_);
v___y_1934_ = v_ruleList_1956_;
v___y_1935_ = v___y_1943_;
v___y_1936_ = v___y_1945_;
v___y_1937_ = v___y_1947_;
v___y_1938_ = v___y_1949_;
v___y_1939_ = v_bends_1954_;
v___y_1940_ = v___y_1951_;
goto v___jp_1933_;
}
else
{
lean_object* v___x_1957_; 
v___x_1957_ = l_List_getLast_x3f___redArg(v___y_1948_);
lean_dec(v___y_1948_);
if (lean_obj_tag(v___x_1957_) == 0)
{
lean_dec(v___y_1946_);
lean_inc(v_bends_1954_);
v___y_1934_ = v_ruleList_1956_;
v___y_1935_ = v___y_1943_;
v___y_1936_ = v___y_1945_;
v___y_1937_ = v___y_1947_;
v___y_1938_ = v___y_1949_;
v___y_1939_ = v_bends_1954_;
v___y_1940_ = v___y_1951_;
goto v___jp_1933_;
}
else
{
lean_object* v_val_1958_; lean_object* v___x_1960_; uint8_t v_isShared_1961_; uint8_t v_isSharedCheck_1972_; 
v_val_1958_ = lean_ctor_get(v___x_1957_, 0);
v_isSharedCheck_1972_ = !lean_is_exclusive(v___x_1957_);
if (v_isSharedCheck_1972_ == 0)
{
v___x_1960_ = v___x_1957_;
v_isShared_1961_ = v_isSharedCheck_1972_;
goto v_resetjp_1959_;
}
else
{
lean_inc(v_val_1958_);
lean_dec(v___x_1957_);
v___x_1960_ = lean_box(0);
v_isShared_1961_ = v_isSharedCheck_1972_;
goto v_resetjp_1959_;
}
v_resetjp_1959_:
{
lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1964_; lean_object* v___x_1966_; 
v___x_1962_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_1963_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__0));
lean_inc(v_pos_1898_);
v___x_1964_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileWay_spec__0(v_pos_1898_, v___x_1843_);
if (v_isShared_1961_ == 0)
{
lean_ctor_set_tag(v___x_1960_, 3);
lean_ctor_set(v___x_1960_, 0, v___x_1964_);
v___x_1966_ = v___x_1960_;
goto v_reusejp_1965_;
}
else
{
lean_object* v_reuseFailAlloc_1971_; 
v_reuseFailAlloc_1971_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1971_, 0, v___x_1964_);
v___x_1966_ = v_reuseFailAlloc_1971_;
goto v_reusejp_1965_;
}
v_reusejp_1965_:
{
lean_object* v___x_1967_; lean_object* v___x_1968_; lean_object* v___x_1969_; lean_object* v___x_1970_; 
v___x_1967_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_1967_, 0, v_val_1958_);
lean_ctor_set(v___x_1967_, 1, v___x_1966_);
lean_ctor_set(v___x_1967_, 2, v___y_1946_);
v___x_1968_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1968_, 0, v___x_1963_);
lean_ctor_set(v___x_1968_, 1, v___x_1967_);
v___x_1969_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1969_, 0, v___x_1962_);
lean_ctor_set(v___x_1969_, 1, v___x_1968_);
v___x_1970_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1970_, 0, v___x_1969_);
lean_ctor_set(v___x_1970_, 1, v___x_1843_);
lean_inc(v_bends_1954_);
v___y_1900_ = v_ruleList_1956_;
v___y_1901_ = v___y_1943_;
v___y_1902_ = v___y_1945_;
v___y_1903_ = v___y_1947_;
v___y_1904_ = v___y_1949_;
v___y_1905_ = v_bends_1954_;
v___y_1906_ = v___y_1951_;
v___y_1907_ = v___x_1970_;
goto v___jp_1899_;
}
}
}
}
}
v___jp_1973_:
{
lean_object* v___x_1983_; 
v___x_1983_ = lean_box(0);
v___y_1943_ = v___y_1975_;
v___y_1944_ = v___y_1974_;
v___y_1945_ = v___y_1976_;
v___y_1946_ = v___y_1979_;
v___y_1947_ = v___y_1978_;
v___y_1948_ = v___y_1977_;
v___y_1949_ = v___y_1980_;
v___y_1950_ = v___y_1981_;
v___y_1951_ = v___y_1982_;
v___y_1952_ = v___x_1983_;
goto v___jp_1942_;
}
v___jp_1984_:
{
lean_object* v___x_1988_; uint8_t v___x_1989_; lean_object* v_holds_1990_; lean_object* v___x_1991_; lean_object* v_onNow_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v_holdIxs_1995_; lean_object* v___x_1996_; lean_object* v_shapeAsks_1997_; lean_object* v___x_1998_; uint8_t v___x_1999_; 
v___x_1988_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__1));
v___x_1989_ = 0;
lean_inc(v_pos_1898_);
v_holds_1990_ = lp_choreo_Choreo_stepDrafts(v_pos_1898_, v___y_1802_, v___y_1987_, v___x_1988_, v___x_1989_);
lean_dec(v___y_1987_);
lean_inc(v_n_1803_);
v___x_1991_ = l_List_range(v_n_1803_);
lean_inc(v___x_1991_);
v_onNow_1992_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_pos_1898_, v___x_1991_, v___x_1843_);
v___x_1993_ = l_List_lengthTR___redArg(v_holds_1990_);
lean_inc(v___x_1993_);
v___x_1994_ = l_List_range(v___x_1993_);
v_holdIxs_1995_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__4(v_fst_1834_, v___x_1994_, v___x_1843_);
v___x_1996_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__2));
lean_inc(v_holdIxs_1995_);
v_shapeAsks_1997_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5(v_onNow_1992_, v_pos_1898_, v_holdIxs_1995_, v___x_1996_);
v___x_1998_ = lean_nat_add(v_head_1817_, v___x_1897_);
v___x_1999_ = lean_nat_dec_lt(v___x_1998_, v___x_1804_);
if (v___x_1999_ == 0)
{
lean_dec(v___x_1993_);
v___y_1974_ = v___y_1985_;
v___y_1975_ = v___y_1986_;
v___y_1976_ = v_shapeAsks_1997_;
v___y_1977_ = v_holdIxs_1995_;
v___y_1978_ = v_holds_1990_;
v___y_1979_ = v___x_1991_;
v___y_1980_ = v___x_1999_;
v___y_1981_ = v___x_1996_;
v___y_1982_ = v___x_1998_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2000_; lean_object* v___x_2001_; uint8_t v___x_2002_; 
lean_inc(v_head_1817_);
v___x_2000_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0(v_sc_1805_, v_head_1817_);
v___x_2001_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__17));
v___x_2002_ = lean_string_dec_eq(v___x_2000_, v___x_2001_);
lean_dec(v___x_2000_);
if (v___x_2002_ == 0)
{
lean_dec(v___x_1993_);
v___y_1974_ = v___y_1985_;
v___y_1975_ = v___y_1986_;
v___y_1976_ = v_shapeAsks_1997_;
v___y_1977_ = v_holdIxs_1995_;
v___y_1978_ = v_holds_1990_;
v___y_1979_ = v___x_1991_;
v___y_1980_ = v___x_1999_;
v___y_1981_ = v___x_1996_;
v___y_1982_ = v___x_1998_;
goto v___jp_1973_;
}
else
{
lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; 
v___x_2003_ = l_List_lengthTR___redArg(v_fst_1834_);
v___x_2004_ = lean_nat_add(v___x_2003_, v___x_1993_);
lean_dec(v___x_1993_);
lean_dec(v___x_2003_);
lean_inc(v___x_1998_);
v___x_2005_ = l_List_getD___redArg(v_frames_1801_, v___x_1998_, v___x_1843_);
lean_inc(v_pos_1898_);
v___x_2006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2006_, 0, v_pos_1898_);
lean_ctor_set(v___x_2006_, 1, v___x_2005_);
v___x_2007_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2007_, 0, v___x_2004_);
lean_ctor_set(v___x_2007_, 1, v___x_2006_);
v___x_2008_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2008_, 0, v___x_2007_);
v___y_1943_ = v___y_1986_;
v___y_1944_ = v___y_1985_;
v___y_1945_ = v_shapeAsks_1997_;
v___y_1946_ = v___x_1991_;
v___y_1947_ = v_holds_1990_;
v___y_1948_ = v_holdIxs_1995_;
v___y_1949_ = v___x_1999_;
v___y_1950_ = v___x_1996_;
v___y_1951_ = v___x_1998_;
v___y_1952_ = v___x_2008_;
goto v___jp_1942_;
}
}
}
v___jp_2009_:
{
lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v_keys_2014_; 
lean_inc(v_head_1817_);
v___x_2012_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2012_, 0, v_head_1817_);
lean_ctor_set(v___x_2012_, 1, v___y_2011_);
v___x_2013_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2013_, 0, v___x_2012_);
lean_ctor_set(v___x_2013_, 1, v___x_1843_);
v_keys_2014_ = l_List_appendTR___redArg(v_snd_1839_, v___x_2013_);
if (v___y_1811_ == 0)
{
lean_object* v___x_2015_; uint8_t v___x_2016_; 
v___x_2015_ = lean_nat_add(v_head_1817_, v___x_1897_);
v___x_2016_ = lean_nat_dec_eq(v___x_2015_, v___x_1804_);
lean_dec(v___x_2015_);
if (v___x_2016_ == 0)
{
lean_inc(v_each_1813_);
v___y_1985_ = v___y_2010_;
v___y_1986_ = v_keys_2014_;
v___y_1987_ = v_each_1813_;
goto v___jp_1984_;
}
else
{
lean_inc(v_lastHold_1814_);
v___y_1985_ = v___y_2010_;
v___y_1986_ = v_keys_2014_;
v___y_1987_ = v_lastHold_1814_;
goto v___jp_1984_;
}
}
else
{
lean_object* v_holds_2017_; lean_object* v___x_2018_; 
v_holds_2017_ = lean_ctor_get(v_sc_1805_, 2);
lean_inc(v_head_1817_);
v___x_2018_ = l_List_getD___redArg(v_holds_2017_, v_head_1817_, v___x_1844_);
v___y_1985_ = v___y_2010_;
v___y_1986_ = v_keys_2014_;
v___y_1987_ = v___x_2018_;
goto v___jp_1984_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___boxed(lean_object* v_frames_2026_, lean_object* v___y_2027_, lean_object* v_n_2028_, lean_object* v___x_2029_, lean_object* v_sc_2030_, lean_object* v_names_2031_, lean_object* v_envelope_2032_, lean_object* v_slWing_2033_, lean_object* v_srWing_2034_, lean_object* v_gap_2035_, lean_object* v___y_2036_, lean_object* v___x_2037_, lean_object* v_each_2038_, lean_object* v_lastHold_2039_, lean_object* v_x_2040_, lean_object* v_x_2041_){
_start:
{
uint8_t v___y_4374__boxed_2042_; lean_object* v_res_2043_; 
v___y_4374__boxed_2042_ = lean_unbox(v___y_2036_);
v_res_2043_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9(v_frames_2026_, v___y_2027_, v_n_2028_, v___x_2029_, v_sc_2030_, v_names_2031_, v_envelope_2032_, v_slWing_2033_, v_srWing_2034_, v_gap_2035_, v___y_4374__boxed_2042_, v___x_2037_, v_each_2038_, v_lastHold_2039_, v_x_2040_, v_x_2041_);
lean_dec(v___x_2037_);
lean_dec(v_gap_2035_);
lean_dec(v___x_2029_);
lean_dec(v___y_2027_);
lean_dec(v_frames_2026_);
return v_res_2043_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9(lean_object* v_frames_2044_, lean_object* v___y_2045_, lean_object* v_n_2046_, lean_object* v___x_2047_, lean_object* v_sc_2048_, lean_object* v_names_2049_, lean_object* v_envelope_2050_, lean_object* v_slWing_2051_, lean_object* v_srWing_2052_, lean_object* v_gap_2053_, uint8_t v___y_2054_, lean_object* v___x_2055_, lean_object* v_each_2056_, lean_object* v_lastHold_2057_, lean_object* v_x_2058_, lean_object* v_x_2059_){
_start:
{
if (lean_obj_tag(v_x_2059_) == 0)
{
lean_dec(v_lastHold_2057_);
lean_dec(v_each_2056_);
lean_dec_ref(v_srWing_2052_);
lean_dec_ref(v_slWing_2051_);
lean_dec_ref(v_envelope_2050_);
lean_dec_ref(v_names_2049_);
lean_dec_ref(v_sc_2048_);
lean_dec(v_n_2046_);
return v_x_2058_;
}
else
{
lean_object* v_head_2060_; lean_object* v_tail_2061_; lean_object* v___x_2063_; uint8_t v_isShared_2064_; uint8_t v_isSharedCheck_2268_; 
v_head_2060_ = lean_ctor_get(v_x_2059_, 0);
v_tail_2061_ = lean_ctor_get(v_x_2059_, 1);
v_isSharedCheck_2268_ = !lean_is_exclusive(v_x_2059_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2063_ = v_x_2059_;
v_isShared_2064_ = v_isSharedCheck_2268_;
goto v_resetjp_2062_;
}
else
{
lean_inc(v_tail_2061_);
lean_inc(v_head_2060_);
lean_dec(v_x_2059_);
v___x_2063_ = lean_box(0);
v_isShared_2064_ = v_isSharedCheck_2268_;
goto v_resetjp_2062_;
}
v_resetjp_2062_:
{
lean_object* v___y_2066_; lean_object* v___y_2067_; lean_object* v___y_2068_; lean_object* v___y_2069_; lean_object* v___y_2070_; lean_object* v_snd_2076_; lean_object* v_fst_2077_; lean_object* v___x_2079_; uint8_t v_isShared_2080_; uint8_t v_isSharedCheck_2267_; 
v_snd_2076_ = lean_ctor_get(v_x_2058_, 1);
v_fst_2077_ = lean_ctor_get(v_x_2058_, 0);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_x_2058_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2079_ = v_x_2058_;
v_isShared_2080_ = v_isSharedCheck_2267_;
goto v_resetjp_2078_;
}
else
{
lean_inc(v_snd_2076_);
lean_inc(v_fst_2077_);
lean_dec(v_x_2058_);
v___x_2079_ = lean_box(0);
v_isShared_2080_ = v_isSharedCheck_2267_;
goto v_resetjp_2078_;
}
v___jp_2065_:
{
lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2074_; lean_object* v___x_2075_; 
v___x_2071_ = l_List_appendTR___redArg(v___y_2069_, v___y_2070_);
v___x_2072_ = l_List_appendTR___redArg(v___y_2067_, v___y_2066_);
v___x_2073_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2073_, 0, v___x_2072_);
lean_ctor_set(v___x_2073_, 1, v___y_2068_);
v___x_2074_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2074_, 0, v___x_2071_);
lean_ctor_set(v___x_2074_, 1, v___x_2073_);
v___x_2075_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9(v_frames_2044_, v___y_2045_, v_n_2046_, v___x_2047_, v_sc_2048_, v_names_2049_, v_envelope_2050_, v_slWing_2051_, v_srWing_2052_, v_gap_2053_, v___y_2054_, v___x_2055_, v_each_2056_, v_lastHold_2057_, v___x_2074_, v_tail_2061_);
return v___x_2075_;
}
v_resetjp_2078_:
{
lean_object* v_fst_2081_; lean_object* v_snd_2082_; lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2266_; 
v_fst_2081_ = lean_ctor_get(v_snd_2076_, 0);
v_snd_2082_ = lean_ctor_get(v_snd_2076_, 1);
v_isSharedCheck_2266_ = !lean_is_exclusive(v_snd_2076_);
if (v_isSharedCheck_2266_ == 0)
{
v___x_2084_ = v_snd_2076_;
v_isShared_2085_ = v_isSharedCheck_2266_;
goto v_resetjp_2083_;
}
else
{
lean_inc(v_snd_2082_);
lean_inc(v_fst_2081_);
lean_dec(v_snd_2076_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2266_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___y_2089_; lean_object* v___y_2090_; lean_object* v___y_2091_; lean_object* v___y_2092_; lean_object* v___y_2093_; lean_object* v___y_2094_; lean_object* v___y_2095_; lean_object* v___y_2131_; lean_object* v___y_2132_; lean_object* v___y_2133_; lean_object* v___y_2134_; lean_object* v___y_2135_; lean_object* v___y_2136_; lean_object* v___y_2137_; lean_object* v___y_2138_; lean_object* v___x_2140_; lean_object* v_pos_2141_; lean_object* v___y_2143_; lean_object* v___y_2144_; lean_object* v___y_2145_; uint8_t v___y_2146_; lean_object* v___y_2147_; lean_object* v___y_2148_; lean_object* v___y_2149_; lean_object* v___y_2150_; lean_object* v___y_2177_; lean_object* v___y_2178_; lean_object* v___y_2179_; uint8_t v___y_2180_; lean_object* v___y_2181_; lean_object* v___y_2182_; lean_object* v___y_2183_; uint8_t v___x_2184_; lean_object* v___y_2186_; lean_object* v___y_2187_; lean_object* v___y_2188_; lean_object* v___y_2189_; lean_object* v___y_2190_; uint8_t v___y_2191_; lean_object* v___y_2192_; lean_object* v___y_2193_; lean_object* v___y_2194_; lean_object* v___y_2195_; lean_object* v___y_2217_; lean_object* v___y_2218_; lean_object* v___y_2219_; lean_object* v___y_2220_; lean_object* v___y_2221_; uint8_t v___y_2222_; lean_object* v___y_2223_; lean_object* v___y_2224_; lean_object* v___y_2225_; lean_object* v___y_2228_; lean_object* v___y_2229_; lean_object* v___y_2230_; lean_object* v___y_2253_; lean_object* v___y_2254_; 
v___x_2086_ = lean_box(0);
v___x_2087_ = lean_unsigned_to_nat(0u);
v___x_2140_ = lean_unsigned_to_nat(1u);
lean_inc(v_head_2060_);
v_pos_2141_ = l_List_getD___redArg(v_frames_2044_, v_head_2060_, v___x_2086_);
v___x_2184_ = lean_nat_dec_eq(v_head_2060_, v___x_2087_);
if (v___x_2184_ == 0)
{
lean_object* v___x_2262_; lean_object* v___x_2263_; lean_object* v___x_2264_; 
v___x_2262_ = l_List_lengthTR___redArg(v_fst_2077_);
v___x_2263_ = lean_nat_sub(v___x_2262_, v___x_2140_);
lean_dec(v___x_2262_);
lean_inc(v___x_2263_);
v___x_2264_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2264_, 0, v___x_2263_);
v___y_2253_ = v___x_2264_;
v___y_2254_ = v___x_2263_;
goto v___jp_2252_;
}
else
{
lean_object* v___x_2265_; 
v___x_2265_ = lean_box(0);
v___y_2253_ = v___x_2265_;
v___y_2254_ = v___x_2087_;
goto v___jp_2252_;
}
v___jp_2088_:
{
if (v___y_2054_ == 0)
{
lean_dec(v___y_2095_);
lean_dec(v___y_2092_);
lean_del_object(v___x_2063_);
v___y_2066_ = v___y_2090_;
v___y_2067_ = v___y_2089_;
v___y_2068_ = v___y_2091_;
v___y_2069_ = v___y_2093_;
v___y_2070_ = v___y_2094_;
goto v___jp_2065_;
}
else
{
uint8_t v___x_2096_; 
v___x_2096_ = lean_nat_dec_eq(v___y_2095_, v___y_2092_);
if (v___x_2096_ == 0)
{
uint8_t v___x_2097_; 
v___x_2097_ = lean_nat_dec_eq(v___y_2092_, v___x_2087_);
if (v___x_2097_ == 0)
{
lean_object* v___x_2098_; uint8_t v___x_2099_; 
v___x_2098_ = l_List_lengthTR___redArg(v___y_2094_);
v___x_2099_ = lean_nat_dec_lt(v___y_2095_, v___x_2098_);
lean_dec(v___x_2098_);
if (v___x_2099_ == 0)
{
lean_object* v_scaled_2100_; lean_object* v___x_2101_; 
v_scaled_2100_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3(v___y_2095_, v___y_2092_, v___y_2094_, v___x_2086_);
lean_dec(v___y_2092_);
v___x_2101_ = l_List_getLast_x3f___redArg(v_scaled_2100_);
if (lean_obj_tag(v___x_2101_) == 0)
{
lean_dec(v___y_2095_);
lean_del_object(v___x_2063_);
v___y_2066_ = v___y_2090_;
v___y_2067_ = v___y_2089_;
v___y_2068_ = v___y_2091_;
v___y_2069_ = v___y_2093_;
v___y_2070_ = v_scaled_2100_;
goto v___jp_2065_;
}
else
{
lean_object* v_val_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v_others_2106_; uint8_t v___x_2107_; 
v_val_2102_ = lean_ctor_get(v___x_2101_, 0);
lean_inc(v_val_2102_);
lean_dec_ref_known(v___x_2101_, 1);
lean_inc(v_scaled_2100_);
v___x_2103_ = lean_array_mk(v_scaled_2100_);
v___x_2104_ = lean_array_pop(v___x_2103_);
v___x_2105_ = lean_array_to_list(v___x_2104_);
lean_inc(v___x_2105_);
v_others_2106_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2087_, v___x_2105_);
v___x_2107_ = lean_nat_dec_lt(v_others_2106_, v___y_2095_);
if (v___x_2107_ == 0)
{
lean_dec(v_others_2106_);
lean_dec(v___x_2105_);
lean_dec(v_val_2102_);
lean_dec(v___y_2095_);
lean_del_object(v___x_2063_);
v___y_2066_ = v___y_2090_;
v___y_2067_ = v___y_2089_;
v___y_2068_ = v___y_2091_;
v___y_2069_ = v___y_2093_;
v___y_2070_ = v_scaled_2100_;
goto v___jp_2065_;
}
else
{
lean_object* v_label_2108_; lean_object* v_kind_2109_; lean_object* v_paths_2110_; lean_object* v_bounds_2111_; lean_object* v_rigid_2112_; lean_object* v_orbits_2113_; lean_object* v_dmin_2114_; lean_object* v_way_2115_; uint8_t v_unison_2116_; lean_object* v___x_2118_; uint8_t v_isShared_2119_; uint8_t v_isSharedCheck_2128_; 
lean_dec(v_scaled_2100_);
v_label_2108_ = lean_ctor_get(v_val_2102_, 0);
v_kind_2109_ = lean_ctor_get(v_val_2102_, 1);
v_paths_2110_ = lean_ctor_get(v_val_2102_, 2);
v_bounds_2111_ = lean_ctor_get(v_val_2102_, 3);
v_rigid_2112_ = lean_ctor_get(v_val_2102_, 5);
v_orbits_2113_ = lean_ctor_get(v_val_2102_, 6);
v_dmin_2114_ = lean_ctor_get(v_val_2102_, 7);
v_way_2115_ = lean_ctor_get(v_val_2102_, 8);
v_unison_2116_ = lean_ctor_get_uint8(v_val_2102_, sizeof(void*)*9);
v_isSharedCheck_2128_ = !lean_is_exclusive(v_val_2102_);
if (v_isSharedCheck_2128_ == 0)
{
lean_object* v_unused_2129_; 
v_unused_2129_ = lean_ctor_get(v_val_2102_, 4);
lean_dec(v_unused_2129_);
v___x_2118_ = v_val_2102_;
v_isShared_2119_ = v_isSharedCheck_2128_;
goto v_resetjp_2117_;
}
else
{
lean_inc(v_way_2115_);
lean_inc(v_dmin_2114_);
lean_inc(v_orbits_2113_);
lean_inc(v_rigid_2112_);
lean_inc(v_bounds_2111_);
lean_inc(v_paths_2110_);
lean_inc(v_kind_2109_);
lean_inc(v_label_2108_);
lean_dec(v_val_2102_);
v___x_2118_ = lean_box(0);
v_isShared_2119_ = v_isSharedCheck_2128_;
goto v_resetjp_2117_;
}
v_resetjp_2117_:
{
lean_object* v___x_2120_; lean_object* v___x_2122_; 
v___x_2120_ = lean_nat_sub(v___y_2095_, v_others_2106_);
lean_dec(v_others_2106_);
lean_dec(v___y_2095_);
if (v_isShared_2119_ == 0)
{
lean_ctor_set(v___x_2118_, 4, v___x_2120_);
v___x_2122_ = v___x_2118_;
goto v_reusejp_2121_;
}
else
{
lean_object* v_reuseFailAlloc_2127_; 
v_reuseFailAlloc_2127_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_2127_, 0, v_label_2108_);
lean_ctor_set(v_reuseFailAlloc_2127_, 1, v_kind_2109_);
lean_ctor_set(v_reuseFailAlloc_2127_, 2, v_paths_2110_);
lean_ctor_set(v_reuseFailAlloc_2127_, 3, v_bounds_2111_);
lean_ctor_set(v_reuseFailAlloc_2127_, 4, v___x_2120_);
lean_ctor_set(v_reuseFailAlloc_2127_, 5, v_rigid_2112_);
lean_ctor_set(v_reuseFailAlloc_2127_, 6, v_orbits_2113_);
lean_ctor_set(v_reuseFailAlloc_2127_, 7, v_dmin_2114_);
lean_ctor_set(v_reuseFailAlloc_2127_, 8, v_way_2115_);
lean_ctor_set_uint8(v_reuseFailAlloc_2127_, sizeof(void*)*9, v_unison_2116_);
v___x_2122_ = v_reuseFailAlloc_2127_;
goto v_reusejp_2121_;
}
v_reusejp_2121_:
{
lean_object* v___x_2124_; 
if (v_isShared_2064_ == 0)
{
lean_ctor_set(v___x_2063_, 1, v___x_2086_);
lean_ctor_set(v___x_2063_, 0, v___x_2122_);
v___x_2124_ = v___x_2063_;
goto v_reusejp_2123_;
}
else
{
lean_object* v_reuseFailAlloc_2126_; 
v_reuseFailAlloc_2126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2126_, 0, v___x_2122_);
lean_ctor_set(v_reuseFailAlloc_2126_, 1, v___x_2086_);
v___x_2124_ = v_reuseFailAlloc_2126_;
goto v_reusejp_2123_;
}
v_reusejp_2123_:
{
lean_object* v___x_2125_; 
v___x_2125_ = l_List_appendTR___redArg(v___x_2105_, v___x_2124_);
v___y_2066_ = v___y_2090_;
v___y_2067_ = v___y_2089_;
v___y_2068_ = v___y_2091_;
v___y_2069_ = v___y_2093_;
v___y_2070_ = v___x_2125_;
goto v___jp_2065_;
}
}
}
}
}
}
else
{
lean_dec(v___y_2095_);
lean_dec(v___y_2092_);
lean_del_object(v___x_2063_);
v___y_2066_ = v___y_2090_;
v___y_2067_ = v___y_2089_;
v___y_2068_ = v___y_2091_;
v___y_2069_ = v___y_2093_;
v___y_2070_ = v___y_2094_;
goto v___jp_2065_;
}
}
else
{
lean_dec(v___y_2095_);
lean_dec(v___y_2092_);
lean_del_object(v___x_2063_);
v___y_2066_ = v___y_2090_;
v___y_2067_ = v___y_2089_;
v___y_2068_ = v___y_2091_;
v___y_2069_ = v___y_2093_;
v___y_2070_ = v___y_2094_;
goto v___jp_2065_;
}
}
else
{
lean_dec(v___y_2095_);
lean_dec(v___y_2092_);
lean_del_object(v___x_2063_);
v___y_2066_ = v___y_2090_;
v___y_2067_ = v___y_2089_;
v___y_2068_ = v___y_2091_;
v___y_2069_ = v___y_2093_;
v___y_2070_ = v___y_2094_;
goto v___jp_2065_;
}
}
}
v___jp_2130_:
{
uint8_t v___x_2139_; 
v___x_2139_ = lean_nat_dec_le(v___y_2131_, v___y_2138_);
if (v___x_2139_ == 0)
{
lean_dec(v___y_2138_);
v___y_2089_ = v___y_2133_;
v___y_2090_ = v___y_2132_;
v___y_2091_ = v___y_2134_;
v___y_2092_ = v___y_2135_;
v___y_2093_ = v___y_2136_;
v___y_2094_ = v___y_2137_;
v___y_2095_ = v___y_2131_;
goto v___jp_2088_;
}
else
{
lean_dec(v___y_2131_);
v___y_2089_ = v___y_2133_;
v___y_2090_ = v___y_2132_;
v___y_2091_ = v___y_2134_;
v___y_2092_ = v___y_2135_;
v___y_2093_ = v___y_2136_;
v___y_2094_ = v___y_2137_;
v___y_2095_ = v___y_2138_;
goto v___jp_2088_;
}
}
v___jp_2142_:
{
lean_object* v_ds_x27_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v_asks_x27_2154_; 
v_ds_x27_2151_ = l_List_appendTR___redArg(v_fst_2077_, v___y_2145_);
v___x_2152_ = l_List_appendTR___redArg(v_fst_2081_, v___y_2150_);
v___x_2153_ = l_List_appendTR___redArg(v___x_2152_, v___y_2149_);
v_asks_x27_2154_ = l_List_appendTR___redArg(v___x_2153_, v___y_2143_);
if (v___y_2146_ == 0)
{
lean_object* v___x_2156_; 
lean_dec(v___y_2148_);
lean_dec(v___y_2147_);
lean_dec(v_pos_2141_);
lean_del_object(v___x_2063_);
lean_dec(v_head_2060_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 1, v___y_2144_);
lean_ctor_set(v___x_2084_, 0, v_asks_x27_2154_);
v___x_2156_ = v___x_2084_;
goto v_reusejp_2155_;
}
else
{
lean_object* v_reuseFailAlloc_2161_; 
v_reuseFailAlloc_2161_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2161_, 0, v_asks_x27_2154_);
lean_ctor_set(v_reuseFailAlloc_2161_, 1, v___y_2144_);
v___x_2156_ = v_reuseFailAlloc_2161_;
goto v_reusejp_2155_;
}
v_reusejp_2155_:
{
lean_object* v___x_2158_; 
if (v_isShared_2080_ == 0)
{
lean_ctor_set(v___x_2079_, 1, v___x_2156_);
lean_ctor_set(v___x_2079_, 0, v_ds_x27_2151_);
v___x_2158_ = v___x_2079_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2160_; 
v_reuseFailAlloc_2160_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2160_, 0, v_ds_x27_2151_);
lean_ctor_set(v_reuseFailAlloc_2160_, 1, v___x_2156_);
v___x_2158_ = v_reuseFailAlloc_2160_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2159_; 
v___x_2159_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9(v_frames_2044_, v___y_2045_, v_n_2046_, v___x_2047_, v_sc_2048_, v_names_2049_, v_envelope_2050_, v_slWing_2051_, v_srWing_2052_, v_gap_2053_, v___y_2054_, v___x_2055_, v_each_2056_, v_lastHold_2057_, v___x_2158_, v_tail_2061_);
return v___x_2159_;
}
}
}
else
{
lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v_fst_2171_; lean_object* v_snd_2172_; lean_object* v_current_2173_; lean_object* v___x_2174_; uint8_t v___x_2175_; 
lean_del_object(v___x_2084_);
lean_del_object(v___x_2079_);
v___x_2162_ = l_List_getD___redArg(v_frames_2044_, v___y_2148_, v___x_2086_);
v___x_2163_ = l_List_lengthTR___redArg(v_ds_x27_2151_);
v___x_2164_ = lean_unsigned_to_nat(2u);
v___x_2165_ = lean_nat_add(v_head_2060_, v___x_2164_);
v___x_2166_ = lean_obj_once(&lp_choreo_Choreo_rowY___closed__1, &lp_choreo_Choreo_rowY___closed__1_once, _init_lp_choreo_Choreo_rowY___closed__1);
lean_inc(v_head_2060_);
v___x_2167_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0(v_sc_2048_, v_head_2060_);
v___x_2168_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0(v_head_2060_, v___y_2147_, v___x_2086_);
v___x_2169_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__1(v___x_2168_, v___x_2086_);
lean_inc(v___x_2169_);
lean_inc_ref(v_srWing_2052_);
lean_inc_ref(v_slWing_2051_);
lean_inc_ref(v_envelope_2050_);
lean_inc(v_n_2046_);
lean_inc_ref(v_names_2049_);
v___x_2170_ = lp_choreo_Choreo_transition(v_names_2049_, v_n_2046_, v_pos_2141_, v___x_2162_, v___x_2163_, v___x_2165_, v___x_2166_, v_envelope_2050_, v_slWing_2051_, v_srWing_2052_, v___x_2167_, v_gap_2053_, v___x_2169_);
v_fst_2171_ = lean_ctor_get(v___x_2170_, 0);
lean_inc_n(v_fst_2171_, 2);
v_snd_2172_ = lean_ctor_get(v___x_2170_, 1);
lean_inc(v_snd_2172_);
lean_dec_ref(v___x_2170_);
v_current_2173_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2087_, v_fst_2171_);
v___x_2174_ = l_List_getD___redArg(v___x_2055_, v_head_2060_, v_current_2173_);
v___x_2175_ = l_List_isEmpty___redArg(v___x_2169_);
lean_dec(v___x_2169_);
if (v___x_2175_ == 0)
{
lean_inc(v_current_2173_);
v___y_2131_ = v___x_2174_;
v___y_2132_ = v_snd_2172_;
v___y_2133_ = v_asks_x27_2154_;
v___y_2134_ = v___y_2144_;
v___y_2135_ = v_current_2173_;
v___y_2136_ = v_ds_x27_2151_;
v___y_2137_ = v_fst_2171_;
v___y_2138_ = v_current_2173_;
goto v___jp_2130_;
}
else
{
v___y_2131_ = v___x_2174_;
v___y_2132_ = v_snd_2172_;
v___y_2133_ = v_asks_x27_2154_;
v___y_2134_ = v___y_2144_;
v___y_2135_ = v_current_2173_;
v___y_2136_ = v_ds_x27_2151_;
v___y_2137_ = v_fst_2171_;
v___y_2138_ = v___x_2087_;
goto v___jp_2130_;
}
}
}
v___jp_2176_:
{
v___y_2143_ = v___y_2177_;
v___y_2144_ = v___y_2179_;
v___y_2145_ = v___y_2178_;
v___y_2146_ = v___y_2180_;
v___y_2147_ = v___y_2182_;
v___y_2148_ = v___y_2181_;
v___y_2149_ = v___y_2183_;
v___y_2150_ = v___x_2086_;
goto v___jp_2142_;
}
v___jp_2185_:
{
lean_object* v_rules_2196_; lean_object* v_bends_2197_; lean_object* v_rules_2198_; lean_object* v_ruleList_2199_; 
v_rules_2196_ = lean_ctor_get(v_sc_2048_, 1);
v_bends_2197_ = lean_ctor_get(v_sc_2048_, 8);
lean_inc(v_rules_2196_);
v_rules_2198_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__7(v_head_2060_, v_rules_2196_, v___x_2086_);
v_ruleList_2199_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__8(v___y_2190_, v___y_2195_, v___y_2189_, v_rules_2198_, v___y_2186_);
if (v___x_2184_ == 0)
{
lean_dec(v___y_2193_);
lean_dec(v___y_2189_);
lean_inc(v_bends_2197_);
v___y_2177_ = v_ruleList_2199_;
v___y_2178_ = v___y_2187_;
v___y_2179_ = v___y_2188_;
v___y_2180_ = v___y_2191_;
v___y_2181_ = v___y_2192_;
v___y_2182_ = v_bends_2197_;
v___y_2183_ = v___y_2194_;
goto v___jp_2176_;
}
else
{
lean_object* v___x_2200_; 
v___x_2200_ = l_List_getLast_x3f___redArg(v___y_2189_);
lean_dec(v___y_2189_);
if (lean_obj_tag(v___x_2200_) == 0)
{
lean_dec(v___y_2193_);
lean_inc(v_bends_2197_);
v___y_2177_ = v_ruleList_2199_;
v___y_2178_ = v___y_2187_;
v___y_2179_ = v___y_2188_;
v___y_2180_ = v___y_2191_;
v___y_2181_ = v___y_2192_;
v___y_2182_ = v_bends_2197_;
v___y_2183_ = v___y_2194_;
goto v___jp_2176_;
}
else
{
lean_object* v_val_2201_; lean_object* v___x_2203_; uint8_t v_isShared_2204_; uint8_t v_isSharedCheck_2215_; 
v_val_2201_ = lean_ctor_get(v___x_2200_, 0);
v_isSharedCheck_2215_ = !lean_is_exclusive(v___x_2200_);
if (v_isSharedCheck_2215_ == 0)
{
v___x_2203_ = v___x_2200_;
v_isShared_2204_ = v_isSharedCheck_2215_;
goto v_resetjp_2202_;
}
else
{
lean_inc(v_val_2201_);
lean_dec(v___x_2200_);
v___x_2203_ = lean_box(0);
v_isShared_2204_ = v_isSharedCheck_2215_;
goto v_resetjp_2202_;
}
v_resetjp_2202_:
{
lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2209_; 
v___x_2205_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__0));
v___x_2206_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__0));
lean_inc(v_pos_2141_);
v___x_2207_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileWay_spec__0(v_pos_2141_, v___x_2086_);
if (v_isShared_2204_ == 0)
{
lean_ctor_set_tag(v___x_2203_, 3);
lean_ctor_set(v___x_2203_, 0, v___x_2207_);
v___x_2209_ = v___x_2203_;
goto v_reusejp_2208_;
}
else
{
lean_object* v_reuseFailAlloc_2214_; 
v_reuseFailAlloc_2214_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2214_, 0, v___x_2207_);
v___x_2209_ = v_reuseFailAlloc_2214_;
goto v_reusejp_2208_;
}
v_reusejp_2208_:
{
lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; 
v___x_2210_ = lean_alloc_ctor(3, 3, 0);
lean_ctor_set(v___x_2210_, 0, v_val_2201_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
lean_ctor_set(v___x_2210_, 2, v___y_2193_);
v___x_2211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2206_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2205_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2212_);
lean_ctor_set(v___x_2213_, 1, v___x_2086_);
lean_inc(v_bends_2197_);
v___y_2143_ = v_ruleList_2199_;
v___y_2144_ = v___y_2188_;
v___y_2145_ = v___y_2187_;
v___y_2146_ = v___y_2191_;
v___y_2147_ = v_bends_2197_;
v___y_2148_ = v___y_2192_;
v___y_2149_ = v___y_2194_;
v___y_2150_ = v___x_2213_;
goto v___jp_2142_;
}
}
}
}
}
v___jp_2216_:
{
lean_object* v___x_2226_; 
v___x_2226_ = lean_box(0);
v___y_2186_ = v___y_2217_;
v___y_2187_ = v___y_2220_;
v___y_2188_ = v___y_2219_;
v___y_2189_ = v___y_2218_;
v___y_2190_ = v___y_2221_;
v___y_2191_ = v___y_2222_;
v___y_2192_ = v___y_2223_;
v___y_2193_ = v___y_2224_;
v___y_2194_ = v___y_2225_;
v___y_2195_ = v___x_2226_;
goto v___jp_2185_;
}
v___jp_2227_:
{
lean_object* v___x_2231_; uint8_t v___x_2232_; lean_object* v_holds_2233_; lean_object* v___x_2234_; lean_object* v_onNow_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v_holdIxs_2238_; lean_object* v___x_2239_; lean_object* v_shapeAsks_2240_; lean_object* v___x_2241_; uint8_t v___x_2242_; 
v___x_2231_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__1));
v___x_2232_ = 0;
lean_inc(v_pos_2141_);
v_holds_2233_ = lp_choreo_Choreo_stepDrafts(v_pos_2141_, v___y_2045_, v___y_2230_, v___x_2231_, v___x_2232_);
lean_dec(v___y_2230_);
lean_inc(v_n_2046_);
v___x_2234_ = l_List_range(v_n_2046_);
lean_inc(v___x_2234_);
v_onNow_2235_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsBy_spec__1(v_pos_2141_, v___x_2234_, v___x_2086_);
v___x_2236_ = l_List_lengthTR___redArg(v_holds_2233_);
lean_inc(v___x_2236_);
v___x_2237_ = l_List_range(v___x_2236_);
v_holdIxs_2238_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__4(v_fst_2077_, v___x_2237_, v___x_2086_);
v___x_2239_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_buildScene_spec__9_spec__9___closed__2));
lean_inc(v_holdIxs_2238_);
v_shapeAsks_2240_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildScene_spec__5(v_onNow_2235_, v_pos_2141_, v_holdIxs_2238_, v___x_2239_);
v___x_2241_ = lean_nat_add(v_head_2060_, v___x_2140_);
v___x_2242_ = lean_nat_dec_lt(v___x_2241_, v___x_2047_);
if (v___x_2242_ == 0)
{
lean_dec(v___x_2236_);
v___y_2217_ = v___x_2239_;
v___y_2218_ = v_holdIxs_2238_;
v___y_2219_ = v___y_2228_;
v___y_2220_ = v_holds_2233_;
v___y_2221_ = v___y_2229_;
v___y_2222_ = v___x_2242_;
v___y_2223_ = v___x_2241_;
v___y_2224_ = v___x_2234_;
v___y_2225_ = v_shapeAsks_2240_;
goto v___jp_2216_;
}
else
{
lean_object* v___x_2243_; lean_object* v___x_2244_; uint8_t v___x_2245_; 
lean_inc(v_head_2060_);
v___x_2243_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__0(v_sc_2048_, v_head_2060_);
v___x_2244_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__17));
v___x_2245_ = lean_string_dec_eq(v___x_2243_, v___x_2244_);
lean_dec(v___x_2243_);
if (v___x_2245_ == 0)
{
lean_dec(v___x_2236_);
v___y_2217_ = v___x_2239_;
v___y_2218_ = v_holdIxs_2238_;
v___y_2219_ = v___y_2228_;
v___y_2220_ = v_holds_2233_;
v___y_2221_ = v___y_2229_;
v___y_2222_ = v___x_2242_;
v___y_2223_ = v___x_2241_;
v___y_2224_ = v___x_2234_;
v___y_2225_ = v_shapeAsks_2240_;
goto v___jp_2216_;
}
else
{
lean_object* v___x_2246_; lean_object* v___x_2247_; lean_object* v___x_2248_; lean_object* v___x_2249_; lean_object* v___x_2250_; lean_object* v___x_2251_; 
v___x_2246_ = l_List_lengthTR___redArg(v_fst_2077_);
v___x_2247_ = lean_nat_add(v___x_2246_, v___x_2236_);
lean_dec(v___x_2236_);
lean_dec(v___x_2246_);
lean_inc(v___x_2241_);
v___x_2248_ = l_List_getD___redArg(v_frames_2044_, v___x_2241_, v___x_2086_);
lean_inc(v_pos_2141_);
v___x_2249_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2249_, 0, v_pos_2141_);
lean_ctor_set(v___x_2249_, 1, v___x_2248_);
v___x_2250_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2250_, 0, v___x_2247_);
lean_ctor_set(v___x_2250_, 1, v___x_2249_);
v___x_2251_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2251_, 0, v___x_2250_);
v___y_2186_ = v___x_2239_;
v___y_2187_ = v_holds_2233_;
v___y_2188_ = v___y_2228_;
v___y_2189_ = v_holdIxs_2238_;
v___y_2190_ = v___y_2229_;
v___y_2191_ = v___x_2242_;
v___y_2192_ = v___x_2241_;
v___y_2193_ = v___x_2234_;
v___y_2194_ = v_shapeAsks_2240_;
v___y_2195_ = v___x_2251_;
goto v___jp_2185_;
}
}
}
v___jp_2252_:
{
lean_object* v___x_2255_; lean_object* v___x_2256_; lean_object* v_keys_2257_; 
lean_inc(v_head_2060_);
v___x_2255_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2255_, 0, v_head_2060_);
lean_ctor_set(v___x_2255_, 1, v___y_2254_);
v___x_2256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2256_, 0, v___x_2255_);
lean_ctor_set(v___x_2256_, 1, v___x_2086_);
v_keys_2257_ = l_List_appendTR___redArg(v_snd_2082_, v___x_2256_);
if (v___y_2054_ == 0)
{
lean_object* v___x_2258_; uint8_t v___x_2259_; 
v___x_2258_ = lean_nat_add(v_head_2060_, v___x_2140_);
v___x_2259_ = lean_nat_dec_eq(v___x_2258_, v___x_2047_);
lean_dec(v___x_2258_);
if (v___x_2259_ == 0)
{
lean_inc(v_each_2056_);
v___y_2228_ = v_keys_2257_;
v___y_2229_ = v___y_2253_;
v___y_2230_ = v_each_2056_;
goto v___jp_2227_;
}
else
{
lean_inc(v_lastHold_2057_);
v___y_2228_ = v_keys_2257_;
v___y_2229_ = v___y_2253_;
v___y_2230_ = v_lastHold_2057_;
goto v___jp_2227_;
}
}
else
{
lean_object* v_holds_2260_; lean_object* v___x_2261_; 
v_holds_2260_ = lean_ctor_get(v_sc_2048_, 2);
lean_inc(v_head_2060_);
v___x_2261_ = l_List_getD___redArg(v_holds_2260_, v_head_2060_, v___x_2087_);
v___y_2228_ = v_keys_2257_;
v___y_2229_ = v___y_2253_;
v___y_2230_ = v___x_2261_;
goto v___jp_2227_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___boxed(lean_object* v_frames_2269_, lean_object* v___y_2270_, lean_object* v_n_2271_, lean_object* v___x_2272_, lean_object* v_sc_2273_, lean_object* v_names_2274_, lean_object* v_envelope_2275_, lean_object* v_slWing_2276_, lean_object* v_srWing_2277_, lean_object* v_gap_2278_, lean_object* v___y_2279_, lean_object* v___x_2280_, lean_object* v_each_2281_, lean_object* v_lastHold_2282_, lean_object* v_x_2283_, lean_object* v_x_2284_){
_start:
{
uint8_t v___y_4772__boxed_2285_; lean_object* v_res_2286_; 
v___y_4772__boxed_2285_ = lean_unbox(v___y_2279_);
v_res_2286_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9(v_frames_2269_, v___y_2270_, v_n_2271_, v___x_2272_, v_sc_2273_, v_names_2274_, v_envelope_2275_, v_slWing_2276_, v_srWing_2277_, v_gap_2278_, v___y_4772__boxed_2285_, v___x_2280_, v_each_2281_, v_lastHold_2282_, v_x_2283_, v_x_2284_);
lean_dec(v___x_2280_);
lean_dec(v_gap_2278_);
lean_dec(v___x_2272_);
lean_dec(v___y_2270_);
lean_dec(v_frames_2269_);
return v_res_2286_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__2(lean_object* v_x_2287_, lean_object* v_x_2288_){
_start:
{
if (lean_obj_tag(v_x_2288_) == 0)
{
return v_x_2287_;
}
else
{
lean_object* v_head_2289_; lean_object* v_tail_2290_; lean_object* v___x_2291_; 
v_head_2289_ = lean_ctor_get(v_x_2288_, 0);
v_tail_2290_ = lean_ctor_get(v_x_2288_, 1);
v___x_2291_ = lp_choreo_List_foldl___at___00Choreo_stepDrafts_spec__7(v_x_2287_, v_head_2289_);
v_x_2287_ = v___x_2291_;
v_x_2288_ = v_tail_2290_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildScene_spec__2___boxed(lean_object* v_x_2293_, lean_object* v_x_2294_){
_start:
{
lean_object* v_res_2295_; 
v_res_2295_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__2(v_x_2293_, v_x_2294_);
lean_dec(v_x_2294_);
return v_res_2295_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__10(lean_object* v_a_2296_, lean_object* v_a_2297_){
_start:
{
if (lean_obj_tag(v_a_2296_) == 0)
{
lean_object* v___x_2298_; 
v___x_2298_ = l_List_reverse___redArg(v_a_2297_);
return v___x_2298_;
}
else
{
lean_object* v_head_2299_; lean_object* v_tail_2300_; lean_object* v___x_2302_; uint8_t v_isShared_2303_; uint8_t v_isSharedCheck_2313_; 
v_head_2299_ = lean_ctor_get(v_a_2296_, 0);
v_tail_2300_ = lean_ctor_get(v_a_2296_, 1);
v_isSharedCheck_2313_ = !lean_is_exclusive(v_a_2296_);
if (v_isSharedCheck_2313_ == 0)
{
v___x_2302_ = v_a_2296_;
v_isShared_2303_ = v_isSharedCheck_2313_;
goto v_resetjp_2301_;
}
else
{
lean_inc(v_tail_2300_);
lean_inc(v_head_2299_);
lean_dec(v_a_2296_);
v___x_2302_ = lean_box(0);
v_isShared_2303_ = v_isSharedCheck_2313_;
goto v_resetjp_2301_;
}
v_resetjp_2301_:
{
lean_object* v___x_2304_; lean_object* v_xmax_2305_; lean_object* v_x_2306_; uint8_t v___x_2307_; 
v___x_2304_ = lp_choreo_Choreo_stageRect;
v_xmax_2305_ = lean_ctor_get(v___x_2304_, 1);
v_x_2306_ = lean_ctor_get(v_head_2299_, 0);
v___x_2307_ = lean_int_dec_lt(v_xmax_2305_, v_x_2306_);
if (v___x_2307_ == 0)
{
lean_del_object(v___x_2302_);
lean_dec(v_head_2299_);
v_a_2296_ = v_tail_2300_;
goto _start;
}
else
{
lean_object* v___x_2310_; 
if (v_isShared_2303_ == 0)
{
lean_ctor_set(v___x_2302_, 1, v_a_2297_);
v___x_2310_ = v___x_2302_;
goto v_reusejp_2309_;
}
else
{
lean_object* v_reuseFailAlloc_2312_; 
v_reuseFailAlloc_2312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2312_, 0, v_head_2299_);
lean_ctor_set(v_reuseFailAlloc_2312_, 1, v_a_2297_);
v___x_2310_ = v_reuseFailAlloc_2312_;
goto v_reusejp_2309_;
}
v_reusejp_2309_:
{
v_a_2296_ = v_tail_2300_;
v_a_2297_ = v___x_2310_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__12(lean_object* v_a_2314_, lean_object* v_a_2315_){
_start:
{
if (lean_obj_tag(v_a_2314_) == 0)
{
lean_object* v___x_2316_; 
v___x_2316_ = l_List_reverse___redArg(v_a_2315_);
return v___x_2316_;
}
else
{
lean_object* v_head_2317_; lean_object* v_tail_2318_; lean_object* v___x_2320_; uint8_t v_isShared_2321_; uint8_t v_isSharedCheck_2327_; 
v_head_2317_ = lean_ctor_get(v_a_2314_, 0);
v_tail_2318_ = lean_ctor_get(v_a_2314_, 1);
v_isSharedCheck_2327_ = !lean_is_exclusive(v_a_2314_);
if (v_isSharedCheck_2327_ == 0)
{
v___x_2320_ = v_a_2314_;
v_isShared_2321_ = v_isSharedCheck_2327_;
goto v_resetjp_2319_;
}
else
{
lean_inc(v_tail_2318_);
lean_inc(v_head_2317_);
lean_dec(v_a_2314_);
v___x_2320_ = lean_box(0);
v_isShared_2321_ = v_isSharedCheck_2327_;
goto v_resetjp_2319_;
}
v_resetjp_2319_:
{
lean_object* v_label_2322_; lean_object* v___x_2324_; 
v_label_2322_ = lean_ctor_get(v_head_2317_, 0);
lean_inc_ref(v_label_2322_);
lean_dec(v_head_2317_);
if (v_isShared_2321_ == 0)
{
lean_ctor_set(v___x_2320_, 1, v_a_2315_);
lean_ctor_set(v___x_2320_, 0, v_label_2322_);
v___x_2324_ = v___x_2320_;
goto v_reusejp_2323_;
}
else
{
lean_object* v_reuseFailAlloc_2326_; 
v_reuseFailAlloc_2326_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2326_, 0, v_label_2322_);
lean_ctor_set(v_reuseFailAlloc_2326_, 1, v_a_2315_);
v___x_2324_ = v_reuseFailAlloc_2326_;
goto v_reusejp_2323_;
}
v_reusejp_2323_:
{
v_a_2314_ = v_tail_2318_;
v_a_2315_ = v___x_2324_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_buildScene_spec__13_spec__14(lean_object* v_frames_2328_, lean_object* v_sc_2329_, lean_object* v_names_2330_, lean_object* v_n_2331_, lean_object* v_envelope_2332_, lean_object* v_slWing_2333_, lean_object* v_srWing_2334_, lean_object* v_gap_2335_, uint8_t v___y_2336_, lean_object* v___x_2337_, lean_object* v_a_2338_, lean_object* v_a_2339_){
_start:
{
if (lean_obj_tag(v_a_2338_) == 0)
{
lean_object* v___x_2340_; 
lean_dec_ref(v_srWing_2334_);
lean_dec_ref(v_slWing_2333_);
lean_dec_ref(v_envelope_2332_);
lean_dec(v_n_2331_);
lean_dec_ref(v_names_2330_);
lean_dec_ref(v_sc_2329_);
v___x_2340_ = l_List_reverse___redArg(v_a_2339_);
return v___x_2340_;
}
else
{
lean_object* v_head_2341_; lean_object* v_tail_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2419_; 
v_head_2341_ = lean_ctor_get(v_a_2338_, 0);
v_tail_2342_ = lean_ctor_get(v_a_2338_, 1);
v_isSharedCheck_2419_ = !lean_is_exclusive(v_a_2338_);
if (v_isSharedCheck_2419_ == 0)
{
v___x_2344_ = v_a_2338_;
v_isShared_2345_ = v_isSharedCheck_2419_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_tail_2342_);
lean_inc(v_head_2341_);
lean_dec(v_a_2338_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2419_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___y_2347_; lean_object* v_ways_2352_; lean_object* v_bends_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; lean_object* v___x_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; lean_object* v___x_2363_; lean_object* v___x_2364_; lean_object* v___x_2365_; lean_object* v___x_2366_; lean_object* v___x_2367_; lean_object* v_fst_2368_; lean_object* v___x_2370_; uint8_t v_isShared_2371_; uint8_t v_isSharedCheck_2417_; 
v_ways_2352_ = lean_ctor_get(v_sc_2329_, 5);
v_bends_2353_ = lean_ctor_get(v_sc_2329_, 8);
v___x_2354_ = lean_box(0);
v___x_2355_ = lean_unsigned_to_nat(0u);
lean_inc_n(v_head_2341_, 2);
v___x_2356_ = l_List_getD___redArg(v_frames_2328_, v_head_2341_, v___x_2354_);
v___x_2357_ = lean_unsigned_to_nat(1u);
v___x_2358_ = lean_nat_add(v_head_2341_, v___x_2357_);
v___x_2359_ = l_List_getD___redArg(v_frames_2328_, v___x_2358_, v___x_2354_);
v___x_2360_ = lean_unsigned_to_nat(2u);
v___x_2361_ = lean_nat_add(v_head_2341_, v___x_2360_);
v___x_2362_ = lean_obj_once(&lp_choreo_Choreo_rowY___closed__1, &lp_choreo_Choreo_rowY___closed__1_once, _init_lp_choreo_Choreo_rowY___closed__1);
v___x_2363_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__17));
v___x_2364_ = l_List_getD___redArg(v_ways_2352_, v_head_2341_, v___x_2363_);
lean_inc(v_bends_2353_);
v___x_2365_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0(v_head_2341_, v_bends_2353_, v___x_2354_);
v___x_2366_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__1(v___x_2365_, v___x_2354_);
lean_inc(v___x_2366_);
lean_inc_ref(v_srWing_2334_);
lean_inc_ref(v_slWing_2333_);
lean_inc_ref(v_envelope_2332_);
lean_inc(v_n_2331_);
lean_inc_ref(v_names_2330_);
v___x_2367_ = lp_choreo_Choreo_transition(v_names_2330_, v_n_2331_, v___x_2356_, v___x_2359_, v___x_2355_, v___x_2361_, v___x_2362_, v_envelope_2332_, v_slWing_2333_, v_srWing_2334_, v___x_2364_, v_gap_2335_, v___x_2366_);
v_fst_2368_ = lean_ctor_get(v___x_2367_, 0);
v_isSharedCheck_2417_ = !lean_is_exclusive(v___x_2367_);
if (v_isSharedCheck_2417_ == 0)
{
lean_object* v_unused_2418_; 
v_unused_2418_ = lean_ctor_get(v___x_2367_, 1);
lean_dec(v_unused_2418_);
v___x_2370_ = v___x_2367_;
v_isShared_2371_ = v_isSharedCheck_2417_;
goto v_resetjp_2369_;
}
else
{
lean_inc(v_fst_2368_);
lean_dec(v___x_2367_);
v___x_2370_ = lean_box(0);
v_isShared_2371_ = v_isSharedCheck_2417_;
goto v_resetjp_2369_;
}
v___jp_2346_:
{
lean_object* v___x_2349_; 
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 1, v_a_2339_);
lean_ctor_set(v___x_2344_, 0, v___y_2347_);
v___x_2349_ = v___x_2344_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v___y_2347_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_a_2339_);
v___x_2349_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
v_a_2338_ = v_tail_2342_;
v_a_2339_ = v___x_2349_;
goto _start;
}
}
v_resetjp_2369_:
{
lean_object* v_current_2372_; lean_object* v___y_2374_; lean_object* v___x_2412_; lean_object* v___y_2414_; uint8_t v___x_2416_; 
lean_inc(v_fst_2368_);
v_current_2372_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2355_, v_fst_2368_);
v___x_2412_ = l_List_getD___redArg(v___x_2337_, v_head_2341_, v_current_2372_);
v___x_2416_ = l_List_isEmpty___redArg(v___x_2366_);
lean_dec(v___x_2366_);
if (v___x_2416_ == 0)
{
lean_inc(v_current_2372_);
v___y_2414_ = v_current_2372_;
goto v___jp_2413_;
}
else
{
v___y_2414_ = v___x_2355_;
goto v___jp_2413_;
}
v___jp_2373_:
{
if (v___y_2336_ == 0)
{
lean_dec(v___y_2374_);
lean_del_object(v___x_2370_);
lean_dec(v_fst_2368_);
v___y_2347_ = v_current_2372_;
goto v___jp_2346_;
}
else
{
uint8_t v___x_2375_; 
v___x_2375_ = lean_nat_dec_eq(v___y_2374_, v_current_2372_);
if (v___x_2375_ == 0)
{
uint8_t v___x_2376_; 
v___x_2376_ = lean_nat_dec_eq(v_current_2372_, v___x_2355_);
if (v___x_2376_ == 0)
{
lean_object* v___x_2377_; uint8_t v___x_2378_; 
v___x_2377_ = l_List_lengthTR___redArg(v_fst_2368_);
v___x_2378_ = lean_nat_dec_lt(v___y_2374_, v___x_2377_);
lean_dec(v___x_2377_);
if (v___x_2378_ == 0)
{
lean_object* v_scaled_2379_; lean_object* v___x_2380_; 
v_scaled_2379_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3(v___y_2374_, v_current_2372_, v_fst_2368_, v___x_2354_);
lean_dec(v_current_2372_);
v___x_2380_ = l_List_getLast_x3f___redArg(v_scaled_2379_);
if (lean_obj_tag(v___x_2380_) == 0)
{
lean_object* v___x_2381_; 
lean_dec(v___y_2374_);
lean_del_object(v___x_2370_);
v___x_2381_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2355_, v_scaled_2379_);
v___y_2347_ = v___x_2381_;
goto v___jp_2346_;
}
else
{
lean_object* v_val_2382_; lean_object* v___x_2383_; lean_object* v___x_2384_; lean_object* v___x_2385_; lean_object* v_others_2386_; uint8_t v___x_2387_; 
v_val_2382_ = lean_ctor_get(v___x_2380_, 0);
lean_inc(v_val_2382_);
lean_dec_ref_known(v___x_2380_, 1);
lean_inc(v_scaled_2379_);
v___x_2383_ = lean_array_mk(v_scaled_2379_);
v___x_2384_ = lean_array_pop(v___x_2383_);
v___x_2385_ = lean_array_to_list(v___x_2384_);
lean_inc(v___x_2385_);
v_others_2386_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2355_, v___x_2385_);
v___x_2387_ = lean_nat_dec_lt(v_others_2386_, v___y_2374_);
if (v___x_2387_ == 0)
{
lean_object* v___x_2388_; 
lean_dec(v_others_2386_);
lean_dec(v___x_2385_);
lean_dec(v_val_2382_);
lean_dec(v___y_2374_);
lean_del_object(v___x_2370_);
v___x_2388_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2355_, v_scaled_2379_);
v___y_2347_ = v___x_2388_;
goto v___jp_2346_;
}
else
{
lean_object* v_label_2389_; lean_object* v_kind_2390_; lean_object* v_paths_2391_; lean_object* v_bounds_2392_; lean_object* v_rigid_2393_; lean_object* v_orbits_2394_; lean_object* v_dmin_2395_; lean_object* v_way_2396_; uint8_t v_unison_2397_; lean_object* v___x_2399_; uint8_t v_isShared_2400_; uint8_t v_isSharedCheck_2410_; 
lean_dec(v_scaled_2379_);
v_label_2389_ = lean_ctor_get(v_val_2382_, 0);
v_kind_2390_ = lean_ctor_get(v_val_2382_, 1);
v_paths_2391_ = lean_ctor_get(v_val_2382_, 2);
v_bounds_2392_ = lean_ctor_get(v_val_2382_, 3);
v_rigid_2393_ = lean_ctor_get(v_val_2382_, 5);
v_orbits_2394_ = lean_ctor_get(v_val_2382_, 6);
v_dmin_2395_ = lean_ctor_get(v_val_2382_, 7);
v_way_2396_ = lean_ctor_get(v_val_2382_, 8);
v_unison_2397_ = lean_ctor_get_uint8(v_val_2382_, sizeof(void*)*9);
v_isSharedCheck_2410_ = !lean_is_exclusive(v_val_2382_);
if (v_isSharedCheck_2410_ == 0)
{
lean_object* v_unused_2411_; 
v_unused_2411_ = lean_ctor_get(v_val_2382_, 4);
lean_dec(v_unused_2411_);
v___x_2399_ = v_val_2382_;
v_isShared_2400_ = v_isSharedCheck_2410_;
goto v_resetjp_2398_;
}
else
{
lean_inc(v_way_2396_);
lean_inc(v_dmin_2395_);
lean_inc(v_orbits_2394_);
lean_inc(v_rigid_2393_);
lean_inc(v_bounds_2392_);
lean_inc(v_paths_2391_);
lean_inc(v_kind_2390_);
lean_inc(v_label_2389_);
lean_dec(v_val_2382_);
v___x_2399_ = lean_box(0);
v_isShared_2400_ = v_isSharedCheck_2410_;
goto v_resetjp_2398_;
}
v_resetjp_2398_:
{
lean_object* v___x_2401_; lean_object* v___x_2403_; 
v___x_2401_ = lean_nat_sub(v___y_2374_, v_others_2386_);
lean_dec(v_others_2386_);
lean_dec(v___y_2374_);
if (v_isShared_2400_ == 0)
{
lean_ctor_set(v___x_2399_, 4, v___x_2401_);
v___x_2403_ = v___x_2399_;
goto v_reusejp_2402_;
}
else
{
lean_object* v_reuseFailAlloc_2409_; 
v_reuseFailAlloc_2409_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_2409_, 0, v_label_2389_);
lean_ctor_set(v_reuseFailAlloc_2409_, 1, v_kind_2390_);
lean_ctor_set(v_reuseFailAlloc_2409_, 2, v_paths_2391_);
lean_ctor_set(v_reuseFailAlloc_2409_, 3, v_bounds_2392_);
lean_ctor_set(v_reuseFailAlloc_2409_, 4, v___x_2401_);
lean_ctor_set(v_reuseFailAlloc_2409_, 5, v_rigid_2393_);
lean_ctor_set(v_reuseFailAlloc_2409_, 6, v_orbits_2394_);
lean_ctor_set(v_reuseFailAlloc_2409_, 7, v_dmin_2395_);
lean_ctor_set(v_reuseFailAlloc_2409_, 8, v_way_2396_);
lean_ctor_set_uint8(v_reuseFailAlloc_2409_, sizeof(void*)*9, v_unison_2397_);
v___x_2403_ = v_reuseFailAlloc_2409_;
goto v_reusejp_2402_;
}
v_reusejp_2402_:
{
lean_object* v___x_2405_; 
if (v_isShared_2371_ == 0)
{
lean_ctor_set_tag(v___x_2370_, 1);
lean_ctor_set(v___x_2370_, 1, v___x_2354_);
lean_ctor_set(v___x_2370_, 0, v___x_2403_);
v___x_2405_ = v___x_2370_;
goto v_reusejp_2404_;
}
else
{
lean_object* v_reuseFailAlloc_2408_; 
v_reuseFailAlloc_2408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2408_, 0, v___x_2403_);
lean_ctor_set(v_reuseFailAlloc_2408_, 1, v___x_2354_);
v___x_2405_ = v_reuseFailAlloc_2408_;
goto v_reusejp_2404_;
}
v_reusejp_2404_:
{
lean_object* v___x_2406_; lean_object* v___x_2407_; 
v___x_2406_ = l_List_appendTR___redArg(v___x_2385_, v___x_2405_);
v___x_2407_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2355_, v___x_2406_);
v___y_2347_ = v___x_2407_;
goto v___jp_2346_;
}
}
}
}
}
}
else
{
lean_dec(v___y_2374_);
lean_del_object(v___x_2370_);
lean_dec(v_fst_2368_);
v___y_2347_ = v_current_2372_;
goto v___jp_2346_;
}
}
else
{
lean_dec(v___y_2374_);
lean_del_object(v___x_2370_);
lean_dec(v_fst_2368_);
v___y_2347_ = v_current_2372_;
goto v___jp_2346_;
}
}
else
{
lean_dec(v___y_2374_);
lean_del_object(v___x_2370_);
lean_dec(v_fst_2368_);
v___y_2347_ = v_current_2372_;
goto v___jp_2346_;
}
}
}
v___jp_2413_:
{
uint8_t v___x_2415_; 
v___x_2415_ = lean_nat_dec_le(v___x_2412_, v___y_2414_);
if (v___x_2415_ == 0)
{
lean_dec(v___y_2414_);
v___y_2374_ = v___x_2412_;
goto v___jp_2373_;
}
else
{
lean_dec(v___x_2412_);
v___y_2374_ = v___y_2414_;
goto v___jp_2373_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_buildScene_spec__13_spec__14___boxed(lean_object* v_frames_2420_, lean_object* v_sc_2421_, lean_object* v_names_2422_, lean_object* v_n_2423_, lean_object* v_envelope_2424_, lean_object* v_slWing_2425_, lean_object* v_srWing_2426_, lean_object* v_gap_2427_, lean_object* v___y_2428_, lean_object* v___x_2429_, lean_object* v_a_2430_, lean_object* v_a_2431_){
_start:
{
uint8_t v___y_5232__boxed_2432_; lean_object* v_res_2433_; 
v___y_5232__boxed_2432_ = lean_unbox(v___y_2428_);
v_res_2433_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_buildScene_spec__13_spec__14(v_frames_2420_, v_sc_2421_, v_names_2422_, v_n_2423_, v_envelope_2424_, v_slWing_2425_, v_srWing_2426_, v_gap_2427_, v___y_5232__boxed_2432_, v___x_2429_, v_a_2430_, v_a_2431_);
lean_dec(v___x_2429_);
lean_dec(v_gap_2427_);
lean_dec(v_frames_2420_);
return v_res_2433_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__13(lean_object* v_frames_2434_, lean_object* v_sc_2435_, lean_object* v_names_2436_, lean_object* v_n_2437_, lean_object* v_envelope_2438_, lean_object* v_slWing_2439_, lean_object* v_srWing_2440_, lean_object* v_gap_2441_, uint8_t v___y_2442_, lean_object* v___x_2443_, lean_object* v_a_2444_, lean_object* v_a_2445_){
_start:
{
if (lean_obj_tag(v_a_2444_) == 0)
{
lean_object* v___x_2446_; 
lean_dec_ref(v_srWing_2440_);
lean_dec_ref(v_slWing_2439_);
lean_dec_ref(v_envelope_2438_);
lean_dec(v_n_2437_);
lean_dec_ref(v_names_2436_);
lean_dec_ref(v_sc_2435_);
v___x_2446_ = l_List_reverse___redArg(v_a_2445_);
return v___x_2446_;
}
else
{
lean_object* v_head_2447_; lean_object* v_tail_2448_; lean_object* v___x_2450_; uint8_t v_isShared_2451_; uint8_t v_isSharedCheck_2525_; 
v_head_2447_ = lean_ctor_get(v_a_2444_, 0);
v_tail_2448_ = lean_ctor_get(v_a_2444_, 1);
v_isSharedCheck_2525_ = !lean_is_exclusive(v_a_2444_);
if (v_isSharedCheck_2525_ == 0)
{
v___x_2450_ = v_a_2444_;
v_isShared_2451_ = v_isSharedCheck_2525_;
goto v_resetjp_2449_;
}
else
{
lean_inc(v_tail_2448_);
lean_inc(v_head_2447_);
lean_dec(v_a_2444_);
v___x_2450_ = lean_box(0);
v_isShared_2451_ = v_isSharedCheck_2525_;
goto v_resetjp_2449_;
}
v_resetjp_2449_:
{
lean_object* v___y_2453_; lean_object* v_ways_2458_; lean_object* v_bends_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v_fst_2474_; lean_object* v___x_2476_; uint8_t v_isShared_2477_; uint8_t v_isSharedCheck_2523_; 
v_ways_2458_ = lean_ctor_get(v_sc_2435_, 5);
v_bends_2459_ = lean_ctor_get(v_sc_2435_, 8);
v___x_2460_ = lean_box(0);
v___x_2461_ = lean_unsigned_to_nat(0u);
lean_inc_n(v_head_2447_, 2);
v___x_2462_ = l_List_getD___redArg(v_frames_2434_, v_head_2447_, v___x_2460_);
v___x_2463_ = lean_unsigned_to_nat(1u);
v___x_2464_ = lean_nat_add(v_head_2447_, v___x_2463_);
v___x_2465_ = l_List_getD___redArg(v_frames_2434_, v___x_2464_, v___x_2460_);
v___x_2466_ = lean_unsigned_to_nat(2u);
v___x_2467_ = lean_nat_add(v_head_2447_, v___x_2466_);
v___x_2468_ = lean_obj_once(&lp_choreo_Choreo_rowY___closed__1, &lp_choreo_Choreo_rowY___closed__1_once, _init_lp_choreo_Choreo_rowY___closed__1);
v___x_2469_ = ((lean_object*)(lp_choreo_Choreo_transition___closed__17));
v___x_2470_ = l_List_getD___redArg(v_ways_2458_, v_head_2447_, v___x_2469_);
lean_inc(v_bends_2459_);
v___x_2471_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__0(v_head_2447_, v_bends_2459_, v___x_2460_);
v___x_2472_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__1(v___x_2471_, v___x_2460_);
lean_inc(v___x_2472_);
lean_inc_ref(v_srWing_2440_);
lean_inc_ref(v_slWing_2439_);
lean_inc_ref(v_envelope_2438_);
lean_inc(v_n_2437_);
lean_inc_ref(v_names_2436_);
v___x_2473_ = lp_choreo_Choreo_transition(v_names_2436_, v_n_2437_, v___x_2462_, v___x_2465_, v___x_2461_, v___x_2467_, v___x_2468_, v_envelope_2438_, v_slWing_2439_, v_srWing_2440_, v___x_2470_, v_gap_2441_, v___x_2472_);
v_fst_2474_ = lean_ctor_get(v___x_2473_, 0);
v_isSharedCheck_2523_ = !lean_is_exclusive(v___x_2473_);
if (v_isSharedCheck_2523_ == 0)
{
lean_object* v_unused_2524_; 
v_unused_2524_ = lean_ctor_get(v___x_2473_, 1);
lean_dec(v_unused_2524_);
v___x_2476_ = v___x_2473_;
v_isShared_2477_ = v_isSharedCheck_2523_;
goto v_resetjp_2475_;
}
else
{
lean_inc(v_fst_2474_);
lean_dec(v___x_2473_);
v___x_2476_ = lean_box(0);
v_isShared_2477_ = v_isSharedCheck_2523_;
goto v_resetjp_2475_;
}
v___jp_2452_:
{
lean_object* v___x_2455_; 
if (v_isShared_2451_ == 0)
{
lean_ctor_set(v___x_2450_, 1, v_a_2445_);
lean_ctor_set(v___x_2450_, 0, v___y_2453_);
v___x_2455_ = v___x_2450_;
goto v_reusejp_2454_;
}
else
{
lean_object* v_reuseFailAlloc_2457_; 
v_reuseFailAlloc_2457_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2457_, 0, v___y_2453_);
lean_ctor_set(v_reuseFailAlloc_2457_, 1, v_a_2445_);
v___x_2455_ = v_reuseFailAlloc_2457_;
goto v_reusejp_2454_;
}
v_reusejp_2454_:
{
lean_object* v___x_2456_; 
v___x_2456_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_buildScene_spec__13_spec__14(v_frames_2434_, v_sc_2435_, v_names_2436_, v_n_2437_, v_envelope_2438_, v_slWing_2439_, v_srWing_2440_, v_gap_2441_, v___y_2442_, v___x_2443_, v_tail_2448_, v___x_2455_);
return v___x_2456_;
}
}
v_resetjp_2475_:
{
lean_object* v_current_2478_; lean_object* v___y_2480_; lean_object* v___x_2518_; lean_object* v___y_2520_; uint8_t v___x_2522_; 
lean_inc(v_fst_2474_);
v_current_2478_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2461_, v_fst_2474_);
v___x_2518_ = l_List_getD___redArg(v___x_2443_, v_head_2447_, v_current_2478_);
v___x_2522_ = l_List_isEmpty___redArg(v___x_2472_);
lean_dec(v___x_2472_);
if (v___x_2522_ == 0)
{
lean_inc(v_current_2478_);
v___y_2520_ = v_current_2478_;
goto v___jp_2519_;
}
else
{
v___y_2520_ = v___x_2461_;
goto v___jp_2519_;
}
v___jp_2479_:
{
if (v___y_2442_ == 0)
{
lean_dec(v___y_2480_);
lean_del_object(v___x_2476_);
lean_dec(v_fst_2474_);
v___y_2453_ = v_current_2478_;
goto v___jp_2452_;
}
else
{
uint8_t v___x_2481_; 
v___x_2481_ = lean_nat_dec_eq(v___y_2480_, v_current_2478_);
if (v___x_2481_ == 0)
{
uint8_t v___x_2482_; 
v___x_2482_ = lean_nat_dec_eq(v_current_2478_, v___x_2461_);
if (v___x_2482_ == 0)
{
lean_object* v___x_2483_; uint8_t v___x_2484_; 
v___x_2483_ = l_List_lengthTR___redArg(v_fst_2474_);
v___x_2484_ = lean_nat_dec_lt(v___y_2480_, v___x_2483_);
lean_dec(v___x_2483_);
if (v___x_2484_ == 0)
{
lean_object* v_scaled_2485_; lean_object* v___x_2486_; 
v_scaled_2485_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__3(v___y_2480_, v_current_2478_, v_fst_2474_, v___x_2460_);
lean_dec(v_current_2478_);
v___x_2486_ = l_List_getLast_x3f___redArg(v_scaled_2485_);
if (lean_obj_tag(v___x_2486_) == 0)
{
lean_object* v___x_2487_; 
lean_dec(v___y_2480_);
lean_del_object(v___x_2476_);
v___x_2487_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2461_, v_scaled_2485_);
v___y_2453_ = v___x_2487_;
goto v___jp_2452_;
}
else
{
lean_object* v_val_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v_others_2492_; uint8_t v___x_2493_; 
v_val_2488_ = lean_ctor_get(v___x_2486_, 0);
lean_inc(v_val_2488_);
lean_dec_ref_known(v___x_2486_, 1);
lean_inc(v_scaled_2485_);
v___x_2489_ = lean_array_mk(v_scaled_2485_);
v___x_2490_ = lean_array_pop(v___x_2489_);
v___x_2491_ = lean_array_to_list(v___x_2490_);
lean_inc(v___x_2491_);
v_others_2492_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2461_, v___x_2491_);
v___x_2493_ = lean_nat_dec_lt(v_others_2492_, v___y_2480_);
if (v___x_2493_ == 0)
{
lean_object* v___x_2494_; 
lean_dec(v_others_2492_);
lean_dec(v___x_2491_);
lean_dec(v_val_2488_);
lean_dec(v___y_2480_);
lean_del_object(v___x_2476_);
v___x_2494_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2461_, v_scaled_2485_);
v___y_2453_ = v___x_2494_;
goto v___jp_2452_;
}
else
{
lean_object* v_label_2495_; lean_object* v_kind_2496_; lean_object* v_paths_2497_; lean_object* v_bounds_2498_; lean_object* v_rigid_2499_; lean_object* v_orbits_2500_; lean_object* v_dmin_2501_; lean_object* v_way_2502_; uint8_t v_unison_2503_; lean_object* v___x_2505_; uint8_t v_isShared_2506_; uint8_t v_isSharedCheck_2516_; 
lean_dec(v_scaled_2485_);
v_label_2495_ = lean_ctor_get(v_val_2488_, 0);
v_kind_2496_ = lean_ctor_get(v_val_2488_, 1);
v_paths_2497_ = lean_ctor_get(v_val_2488_, 2);
v_bounds_2498_ = lean_ctor_get(v_val_2488_, 3);
v_rigid_2499_ = lean_ctor_get(v_val_2488_, 5);
v_orbits_2500_ = lean_ctor_get(v_val_2488_, 6);
v_dmin_2501_ = lean_ctor_get(v_val_2488_, 7);
v_way_2502_ = lean_ctor_get(v_val_2488_, 8);
v_unison_2503_ = lean_ctor_get_uint8(v_val_2488_, sizeof(void*)*9);
v_isSharedCheck_2516_ = !lean_is_exclusive(v_val_2488_);
if (v_isSharedCheck_2516_ == 0)
{
lean_object* v_unused_2517_; 
v_unused_2517_ = lean_ctor_get(v_val_2488_, 4);
lean_dec(v_unused_2517_);
v___x_2505_ = v_val_2488_;
v_isShared_2506_ = v_isSharedCheck_2516_;
goto v_resetjp_2504_;
}
else
{
lean_inc(v_way_2502_);
lean_inc(v_dmin_2501_);
lean_inc(v_orbits_2500_);
lean_inc(v_rigid_2499_);
lean_inc(v_bounds_2498_);
lean_inc(v_paths_2497_);
lean_inc(v_kind_2496_);
lean_inc(v_label_2495_);
lean_dec(v_val_2488_);
v___x_2505_ = lean_box(0);
v_isShared_2506_ = v_isSharedCheck_2516_;
goto v_resetjp_2504_;
}
v_resetjp_2504_:
{
lean_object* v___x_2507_; lean_object* v___x_2509_; 
v___x_2507_ = lean_nat_sub(v___y_2480_, v_others_2492_);
lean_dec(v_others_2492_);
lean_dec(v___y_2480_);
if (v_isShared_2506_ == 0)
{
lean_ctor_set(v___x_2505_, 4, v___x_2507_);
v___x_2509_ = v___x_2505_;
goto v_reusejp_2508_;
}
else
{
lean_object* v_reuseFailAlloc_2515_; 
v_reuseFailAlloc_2515_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v_reuseFailAlloc_2515_, 0, v_label_2495_);
lean_ctor_set(v_reuseFailAlloc_2515_, 1, v_kind_2496_);
lean_ctor_set(v_reuseFailAlloc_2515_, 2, v_paths_2497_);
lean_ctor_set(v_reuseFailAlloc_2515_, 3, v_bounds_2498_);
lean_ctor_set(v_reuseFailAlloc_2515_, 4, v___x_2507_);
lean_ctor_set(v_reuseFailAlloc_2515_, 5, v_rigid_2499_);
lean_ctor_set(v_reuseFailAlloc_2515_, 6, v_orbits_2500_);
lean_ctor_set(v_reuseFailAlloc_2515_, 7, v_dmin_2501_);
lean_ctor_set(v_reuseFailAlloc_2515_, 8, v_way_2502_);
lean_ctor_set_uint8(v_reuseFailAlloc_2515_, sizeof(void*)*9, v_unison_2503_);
v___x_2509_ = v_reuseFailAlloc_2515_;
goto v_reusejp_2508_;
}
v_reusejp_2508_:
{
lean_object* v___x_2511_; 
if (v_isShared_2477_ == 0)
{
lean_ctor_set_tag(v___x_2476_, 1);
lean_ctor_set(v___x_2476_, 1, v___x_2460_);
lean_ctor_set(v___x_2476_, 0, v___x_2509_);
v___x_2511_ = v___x_2476_;
goto v_reusejp_2510_;
}
else
{
lean_object* v_reuseFailAlloc_2514_; 
v_reuseFailAlloc_2514_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2514_, 0, v___x_2509_);
lean_ctor_set(v_reuseFailAlloc_2514_, 1, v___x_2460_);
v___x_2511_ = v_reuseFailAlloc_2514_;
goto v_reusejp_2510_;
}
v_reusejp_2510_:
{
lean_object* v___x_2512_; lean_object* v___x_2513_; 
v___x_2512_ = l_List_appendTR___redArg(v___x_2491_, v___x_2511_);
v___x_2513_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9___lam__1(v___x_2461_, v___x_2512_);
v___y_2453_ = v___x_2513_;
goto v___jp_2452_;
}
}
}
}
}
}
else
{
lean_dec(v___y_2480_);
lean_del_object(v___x_2476_);
lean_dec(v_fst_2474_);
v___y_2453_ = v_current_2478_;
goto v___jp_2452_;
}
}
else
{
lean_dec(v___y_2480_);
lean_del_object(v___x_2476_);
lean_dec(v_fst_2474_);
v___y_2453_ = v_current_2478_;
goto v___jp_2452_;
}
}
else
{
lean_dec(v___y_2480_);
lean_del_object(v___x_2476_);
lean_dec(v_fst_2474_);
v___y_2453_ = v_current_2478_;
goto v___jp_2452_;
}
}
}
v___jp_2519_:
{
uint8_t v___x_2521_; 
v___x_2521_ = lean_nat_dec_le(v___x_2518_, v___y_2520_);
if (v___x_2521_ == 0)
{
lean_dec(v___y_2520_);
v___y_2480_ = v___x_2518_;
goto v___jp_2479_;
}
else
{
lean_dec(v___x_2518_);
v___y_2480_ = v___y_2520_;
goto v___jp_2479_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__13___boxed(lean_object* v_frames_2526_, lean_object* v_sc_2527_, lean_object* v_names_2528_, lean_object* v_n_2529_, lean_object* v_envelope_2530_, lean_object* v_slWing_2531_, lean_object* v_srWing_2532_, lean_object* v_gap_2533_, lean_object* v___y_2534_, lean_object* v___x_2535_, lean_object* v_a_2536_, lean_object* v_a_2537_){
_start:
{
uint8_t v___y_5378__boxed_2538_; lean_object* v_res_2539_; 
v___y_5378__boxed_2538_ = lean_unbox(v___y_2534_);
v_res_2539_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__13(v_frames_2526_, v_sc_2527_, v_names_2528_, v_n_2529_, v_envelope_2530_, v_slWing_2531_, v_srWing_2532_, v_gap_2533_, v___y_5378__boxed_2538_, v___x_2535_, v_a_2536_, v_a_2537_);
lean_dec(v___x_2535_);
lean_dec(v_gap_2533_);
lean_dec(v_frames_2526_);
return v_res_2539_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildScene(lean_object* v_sc_2546_, lean_object* v_names_2547_, lean_object* v_steps_2548_, lean_object* v_gap_2549_){
_start:
{
lean_object* v___y_2551_; lean_object* v___y_2552_; lean_object* v___y_2553_; lean_object* v___y_2554_; lean_object* v___y_2555_; lean_object* v___y_2556_; lean_object* v___y_2557_; lean_object* v___y_2558_; lean_object* v___y_2559_; lean_object* v___y_2560_; lean_object* v___y_2561_; lean_object* v___y_2562_; lean_object* v___y_2563_; lean_object* v___y_2564_; lean_object* v___y_2565_; lean_object* v_frames_2576_; lean_object* v_moves_2577_; lean_object* v_seconds_2578_; lean_object* v_genre_2579_; lean_object* v___x_2580_; lean_object* v___y_2582_; lean_object* v___y_2583_; lean_object* v___y_2584_; lean_object* v___y_2585_; lean_object* v___y_2586_; lean_object* v___y_2587_; lean_object* v___y_2588_; lean_object* v___y_2589_; lean_object* v___y_2590_; lean_object* v___y_2591_; lean_object* v___y_2592_; lean_object* v___y_2593_; lean_object* v___y_2594_; lean_object* v___y_2595_; lean_object* v___y_2605_; lean_object* v___y_2606_; lean_object* v___y_2607_; lean_object* v___y_2608_; lean_object* v___y_2609_; lean_object* v___y_2610_; lean_object* v___y_2611_; lean_object* v___y_2612_; lean_object* v___y_2613_; lean_object* v___y_2614_; lean_object* v___y_2615_; lean_object* v___y_2616_; lean_object* v___y_2617_; lean_object* v___y_2618_; lean_object* v___y_2619_; lean_object* v___y_2620_; lean_object* v___y_2625_; lean_object* v___y_2626_; lean_object* v___y_2627_; lean_object* v___y_2628_; lean_object* v___y_2629_; lean_object* v___y_2630_; lean_object* v___y_2631_; lean_object* v___y_2632_; lean_object* v___y_2633_; lean_object* v___y_2634_; lean_object* v___y_2635_; lean_object* v___y_2636_; lean_object* v___y_2637_; lean_object* v___y_2644_; lean_object* v___y_2645_; lean_object* v___y_2646_; lean_object* v___y_2647_; lean_object* v___y_2648_; uint8_t v___y_2649_; lean_object* v___y_2650_; lean_object* v___y_2651_; lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2685_; lean_object* v___y_2686_; uint8_t v___y_2687_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2717_; 
v_frames_2576_ = lean_ctor_get(v_sc_2546_, 0);
v_moves_2577_ = lean_ctor_get(v_sc_2546_, 3);
v_seconds_2578_ = lean_ctor_get(v_sc_2546_, 4);
v_genre_2579_ = lean_ctor_get(v_sc_2546_, 6);
v___x_2580_ = lean_box(0);
if (lean_obj_tag(v_frames_2576_) == 0)
{
v___y_2717_ = v___x_2580_;
goto v___jp_2716_;
}
else
{
lean_object* v_head_2721_; 
v_head_2721_ = lean_ctor_get(v_frames_2576_, 0);
lean_inc(v_head_2721_);
v___y_2717_ = v_head_2721_;
goto v___jp_2716_;
}
v___jp_2550_:
{
lean_object* v___x_2566_; uint8_t v___x_2567_; lean_object* v_plan_2568_; lean_object* v___x_2569_; lean_object* v_heard_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; 
v___x_2566_ = lean_box(0);
v___x_2567_ = 0;
lean_inc(v___y_2560_);
v_plan_2568_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_plan_2568_, 0, v___y_2555_);
lean_ctor_set(v_plan_2568_, 1, v___y_2552_);
lean_ctor_set(v_plan_2568_, 2, v___y_2565_);
lean_ctor_set(v_plan_2568_, 3, v___y_2564_);
lean_ctor_set(v_plan_2568_, 4, v___y_2557_);
lean_ctor_set(v_plan_2568_, 5, v___y_2561_);
lean_ctor_set(v_plan_2568_, 6, v___x_2566_);
lean_ctor_set(v_plan_2568_, 7, v___y_2562_);
lean_ctor_set(v_plan_2568_, 8, v_gap_2549_);
lean_ctor_set(v_plan_2568_, 9, v___x_2566_);
lean_ctor_set(v_plan_2568_, 10, v___y_2560_);
lean_ctor_set_uint8(v_plan_2568_, sizeof(void*)*11, v___x_2567_);
lean_inc(v___y_2563_);
v___x_2569_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildPlanOnce_spec__8(v___y_2563_, v___y_2554_);
v_heard_2570_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__12(v___x_2569_, v___x_2566_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v___y_2551_);
lean_ctor_set(v___x_2571_, 1, v___y_2558_);
v___x_2572_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildPlanOnce_spec__7(v___y_2563_, v___x_2566_);
v___x_2573_ = lean_box(0);
v___x_2574_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2574_, 0, v_sc_2546_);
lean_inc(v___y_2559_);
v___x_2575_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v___x_2575_, 0, v_plan_2568_);
lean_ctor_set(v___x_2575_, 1, v___x_2571_);
lean_ctor_set(v___x_2575_, 2, v___x_2572_);
lean_ctor_set(v___x_2575_, 3, v___y_2556_);
lean_ctor_set(v___x_2575_, 4, v___x_2566_);
lean_ctor_set(v___x_2575_, 5, v___y_2553_);
lean_ctor_set(v___x_2575_, 6, v___x_2573_);
lean_ctor_set(v___x_2575_, 7, v___x_2574_);
lean_ctor_set(v___x_2575_, 8, v___x_2573_);
lean_ctor_set(v___x_2575_, 9, v_heard_2570_);
lean_ctor_set(v___x_2575_, 10, v___y_2560_);
lean_ctor_set(v___x_2575_, 11, v___x_2566_);
lean_ctor_set(v___x_2575_, 12, v___y_2559_);
lean_ctor_set_uint8(v___x_2575_, sizeof(void*)*13, v___x_2567_);
return v___x_2575_;
}
v___jp_2581_:
{
lean_object* v___x_2596_; lean_object* v_leftCount_2597_; lean_object* v___x_2598_; lean_object* v_rightCount_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; uint8_t v___x_2602_; 
lean_inc(v___y_2595_);
v___x_2596_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__10(v___y_2595_, v___x_2580_);
v_leftCount_2597_ = l_List_lengthTR___redArg(v___x_2596_);
lean_dec(v___x_2596_);
v___x_2598_ = lp_choreo_List_filterTR_loop___at___00Choreo_buildScene_spec__11(v___y_2595_, v___x_2580_);
v_rightCount_2599_ = l_List_lengthTR___redArg(v___x_2598_);
lean_dec(v___x_2598_);
v___x_2600_ = lean_nat_div(v___y_2591_, v___y_2584_);
lean_dec(v___y_2584_);
lean_dec(v___y_2591_);
v___x_2601_ = lean_string_utf8_byte_size(v_genre_2579_);
v___x_2602_ = lean_nat_dec_eq(v___x_2601_, v___y_2590_);
if (v___x_2602_ == 0)
{
lean_inc_ref(v_genre_2579_);
v___y_2551_ = v___y_2582_;
v___y_2552_ = v___x_2600_;
v___y_2553_ = v___y_2583_;
v___y_2554_ = v___y_2585_;
v___y_2555_ = v___y_2586_;
v___y_2556_ = v___y_2587_;
v___y_2557_ = v_leftCount_2597_;
v___y_2558_ = v___y_2588_;
v___y_2559_ = v___y_2589_;
v___y_2560_ = v___y_2590_;
v___y_2561_ = v_rightCount_2599_;
v___y_2562_ = v___y_2592_;
v___y_2563_ = v___y_2593_;
v___y_2564_ = v___y_2594_;
v___y_2565_ = v_genre_2579_;
goto v___jp_2550_;
}
else
{
lean_object* v___x_2603_; 
v___x_2603_ = ((lean_object*)(lp_choreo_Choreo_buildScene___closed__0));
v___y_2551_ = v___y_2582_;
v___y_2552_ = v___x_2600_;
v___y_2553_ = v___y_2583_;
v___y_2554_ = v___y_2585_;
v___y_2555_ = v___y_2586_;
v___y_2556_ = v___y_2587_;
v___y_2557_ = v_leftCount_2597_;
v___y_2558_ = v___y_2588_;
v___y_2559_ = v___y_2589_;
v___y_2560_ = v___y_2590_;
v___y_2561_ = v_rightCount_2599_;
v___y_2562_ = v___y_2592_;
v___y_2563_ = v___y_2593_;
v___y_2564_ = v___y_2594_;
v___y_2565_ = v___x_2603_;
goto v___jp_2550_;
}
}
v___jp_2604_:
{
lean_object* v___x_2621_; lean_object* v_cfg_2622_; 
v___x_2621_ = lean_nat_mul(v___y_2608_, v___y_2607_);
lean_dec(v___y_2608_);
lean_inc(v___y_2611_);
lean_inc(v___y_2620_);
lean_inc(v___y_2616_);
lean_inc(v___y_2605_);
lean_inc(v_gap_2549_);
lean_inc(v___y_2619_);
v_cfg_2622_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_cfg_2622_, 0, v___y_2619_);
lean_ctor_set(v_cfg_2622_, 1, v_gap_2549_);
lean_ctor_set(v_cfg_2622_, 2, v___y_2605_);
lean_ctor_set(v_cfg_2622_, 3, v___y_2609_);
lean_ctor_set(v_cfg_2622_, 4, v___y_2607_);
lean_ctor_set(v_cfg_2622_, 5, v___y_2616_);
lean_ctor_set(v_cfg_2622_, 6, v___y_2620_);
lean_ctor_set(v_cfg_2622_, 7, v___x_2621_);
lean_ctor_set(v_cfg_2622_, 8, v___y_2611_);
if (lean_obj_tag(v_frames_2576_) == 0)
{
v___y_2582_ = v_cfg_2622_;
v___y_2583_ = v___y_2606_;
v___y_2584_ = v___y_2620_;
v___y_2585_ = v___y_2610_;
v___y_2586_ = v___y_2611_;
v___y_2587_ = v___y_2612_;
v___y_2588_ = v___y_2613_;
v___y_2589_ = v___y_2614_;
v___y_2590_ = v___y_2615_;
v___y_2591_ = v___y_2616_;
v___y_2592_ = v___y_2617_;
v___y_2593_ = v___y_2618_;
v___y_2594_ = v___y_2619_;
v___y_2595_ = v___x_2580_;
goto v___jp_2581_;
}
else
{
lean_object* v_head_2623_; 
v_head_2623_ = lean_ctor_get(v_frames_2576_, 0);
lean_inc(v_head_2623_);
v___y_2582_ = v_cfg_2622_;
v___y_2583_ = v___y_2606_;
v___y_2584_ = v___y_2620_;
v___y_2585_ = v___y_2610_;
v___y_2586_ = v___y_2611_;
v___y_2587_ = v___y_2612_;
v___y_2588_ = v___y_2613_;
v___y_2589_ = v___y_2614_;
v___y_2590_ = v___y_2615_;
v___y_2591_ = v___y_2616_;
v___y_2592_ = v___y_2617_;
v___y_2593_ = v___y_2618_;
v___y_2594_ = v___y_2619_;
v___y_2595_ = v_head_2623_;
goto v___jp_2581_;
}
}
v___jp_2624_:
{
lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2638_ = lp_choreo_Choreo_vmaxMM;
v___x_2639_ = lean_unsigned_to_nat(4u);
v___x_2640_ = lean_unsigned_to_nat(60u);
v___x_2641_ = lean_nat_mul(v___y_2635_, v___x_2640_);
v___x_2642_ = lean_nat_dec_le(v___y_2630_, v___y_2637_);
if (v___x_2642_ == 0)
{
v___y_2605_ = v___x_2638_;
v___y_2606_ = v___y_2631_;
v___y_2607_ = v___x_2639_;
v___y_2608_ = v___y_2635_;
v___y_2609_ = v___y_2634_;
v___y_2610_ = v___y_2625_;
v___y_2611_ = v___y_2637_;
v___y_2612_ = v___y_2626_;
v___y_2613_ = v___y_2627_;
v___y_2614_ = v___y_2629_;
v___y_2615_ = v___y_2628_;
v___y_2616_ = v___x_2641_;
v___y_2617_ = v___y_2632_;
v___y_2618_ = v___y_2633_;
v___y_2619_ = v___y_2636_;
v___y_2620_ = v___y_2630_;
goto v___jp_2604_;
}
else
{
lean_dec(v___y_2630_);
lean_inc(v___y_2637_);
v___y_2605_ = v___x_2638_;
v___y_2606_ = v___y_2631_;
v___y_2607_ = v___x_2639_;
v___y_2608_ = v___y_2635_;
v___y_2609_ = v___y_2634_;
v___y_2610_ = v___y_2625_;
v___y_2611_ = v___y_2637_;
v___y_2612_ = v___y_2626_;
v___y_2613_ = v___y_2627_;
v___y_2614_ = v___y_2629_;
v___y_2615_ = v___y_2628_;
v___y_2616_ = v___x_2641_;
v___y_2617_ = v___y_2632_;
v___y_2618_ = v___y_2633_;
v___y_2619_ = v___y_2636_;
v___y_2620_ = v___y_2637_;
goto v___jp_2604_;
}
}
v___jp_2643_:
{
lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v_each_2660_; lean_object* v___x_2661_; lean_object* v_lastHold_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v_built_2665_; lean_object* v_snd_2666_; lean_object* v_fst_2667_; lean_object* v_fst_2668_; lean_object* v_snd_2669_; lean_object* v___x_2671_; uint8_t v_isShared_2672_; uint8_t v_isSharedCheck_2683_; 
v___x_2656_ = lean_nat_div(v___y_2655_, v___y_2650_);
v___x_2657_ = lean_unsigned_to_nat(8u);
v___x_2658_ = lean_unsigned_to_nat(3u);
v___x_2659_ = lean_nat_shiftr(v___x_2656_, v___x_2658_);
lean_dec(v___x_2656_);
v_each_2660_ = lean_nat_mul(v___x_2659_, v___x_2657_);
lean_dec(v___x_2659_);
v___x_2661_ = lean_nat_mul(v_each_2660_, v___y_2644_);
lean_dec(v___y_2644_);
v_lastHold_2662_ = lean_nat_sub(v___y_2655_, v___x_2661_);
lean_dec(v___x_2661_);
lean_dec(v___y_2655_);
v___x_2663_ = ((lean_object*)(lp_choreo_Choreo_buildScene___closed__2));
lean_inc(v___y_2650_);
v___x_2664_ = l_List_range(v___y_2650_);
lean_inc_ref(v___y_2653_);
lean_inc_ref(v_sc_2546_);
lean_inc(v___y_2654_);
v_built_2665_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__9(v_frames_2576_, v___y_2652_, v___y_2654_, v___y_2650_, v_sc_2546_, v_names_2547_, v___y_2653_, v___y_2645_, v___y_2651_, v_gap_2549_, v___y_2649_, v_moves_2577_, v_each_2660_, v_lastHold_2662_, v___x_2663_, v___x_2664_);
lean_dec(v___y_2650_);
v_snd_2666_ = lean_ctor_get(v_built_2665_, 1);
lean_inc(v_snd_2666_);
v_fst_2667_ = lean_ctor_get(v_built_2665_, 0);
lean_inc(v_fst_2667_);
lean_dec_ref(v_built_2665_);
v_fst_2668_ = lean_ctor_get(v_snd_2666_, 0);
v_snd_2669_ = lean_ctor_get(v_snd_2666_, 1);
v_isSharedCheck_2683_ = !lean_is_exclusive(v_snd_2666_);
if (v_isSharedCheck_2683_ == 0)
{
v___x_2671_ = v_snd_2666_;
v_isShared_2672_ = v_isSharedCheck_2683_;
goto v_resetjp_2670_;
}
else
{
lean_inc(v_snd_2669_);
lean_inc(v_fst_2668_);
lean_dec(v_snd_2666_);
v___x_2671_ = lean_box(0);
v_isShared_2672_ = v_isSharedCheck_2683_;
goto v_resetjp_2670_;
}
v_resetjp_2670_:
{
lean_object* v_ds_2673_; lean_object* v___x_2675_; 
lean_inc(v_gap_2549_);
v_ds_2673_ = lp_choreo_List_mapTR_loop___at___00Choreo_chooseIdea_spec__0(v_gap_2549_, v_fst_2667_, v___x_2580_);
lean_inc(v___y_2647_);
if (v_isShared_2672_ == 0)
{
lean_ctor_set(v___x_2671_, 1, v___y_2647_);
lean_ctor_set(v___x_2671_, 0, v___x_2580_);
v___x_2675_ = v___x_2671_;
goto v_reusejp_2674_;
}
else
{
lean_object* v_reuseFailAlloc_2682_; 
v_reuseFailAlloc_2682_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2682_, 0, v___x_2580_);
lean_ctor_set(v_reuseFailAlloc_2682_, 1, v___y_2647_);
v___x_2675_ = v_reuseFailAlloc_2682_;
goto v_reusejp_2674_;
}
v_reusejp_2674_:
{
lean_object* v___x_2676_; lean_object* v_fst_2677_; lean_object* v___x_2678_; lean_object* v_total_2679_; uint8_t v___x_2680_; 
lean_inc_n(v_ds_2673_, 2);
lean_inc(v___y_2654_);
v___x_2676_ = lp_choreo_List_foldl___at___00Choreo_buildPlanOnce_spec__6(v___y_2654_, v___x_2675_, v_ds_2673_);
v_fst_2677_ = lean_ctor_get(v___x_2676_, 0);
lean_inc(v_fst_2677_);
lean_dec_ref(v___x_2676_);
v___x_2678_ = lp_choreo_List_mapTR_loop___at___00Choreo_addDrafts_spec__0(v_ds_2673_, v___x_2580_);
lean_inc(v___y_2647_);
v_total_2679_ = lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(v___y_2647_, v___x_2678_);
lean_dec(v___x_2678_);
v___x_2680_ = lean_nat_dec_lt(v___y_2647_, v_seconds_2578_);
if (v___x_2680_ == 0)
{
lean_object* v___x_2681_; 
v___x_2681_ = lean_nat_shiftr(v_total_2679_, v___y_2648_);
v___y_2625_ = v___x_2580_;
v___y_2626_ = v_fst_2668_;
v___y_2627_ = v_fst_2677_;
v___y_2628_ = v___y_2647_;
v___y_2629_ = v___y_2646_;
v___y_2630_ = v___y_2648_;
v___y_2631_ = v_snd_2669_;
v___y_2632_ = v___y_2652_;
v___y_2633_ = v_ds_2673_;
v___y_2634_ = v___y_2653_;
v___y_2635_ = v_total_2679_;
v___y_2636_ = v___y_2654_;
v___y_2637_ = v___x_2681_;
goto v___jp_2624_;
}
else
{
lean_inc(v_seconds_2578_);
v___y_2625_ = v___x_2580_;
v___y_2626_ = v_fst_2668_;
v___y_2627_ = v_fst_2677_;
v___y_2628_ = v___y_2647_;
v___y_2629_ = v___y_2646_;
v___y_2630_ = v___y_2648_;
v___y_2631_ = v_snd_2669_;
v___y_2632_ = v___y_2652_;
v___y_2633_ = v_ds_2673_;
v___y_2634_ = v___y_2653_;
v___y_2635_ = v_total_2679_;
v___y_2636_ = v___y_2654_;
v___y_2637_ = v_seconds_2578_;
goto v___jp_2624_;
}
}
}
}
v___jp_2684_:
{
lean_object* v___x_2688_; lean_object* v_wide_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v_envelope_2694_; lean_object* v___x_2695_; lean_object* v_slWing_2696_; lean_object* v___x_2697_; lean_object* v_srWing_2698_; lean_object* v___x_2699_; lean_object* v___x_2700_; lean_object* v___x_2701_; lean_object* v___x_2702_; lean_object* v___x_2703_; lean_object* v_moved_2704_; lean_object* v___x_2705_; uint8_t v___x_2706_; 
v___x_2688_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__0, &lp_choreo_Choreo_sceneEnvelope___closed__0_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__0);
v_wide_2689_ = lp_choreo_List_foldl___at___00Choreo_buildScene_spec__2(v___x_2688_, v_frames_2576_);
v___x_2690_ = lean_int_neg(v_wide_2689_);
v___x_2691_ = lean_unsigned_to_nat(0u);
v___x_2692_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__2, &lp_choreo_Choreo_sceneEnvelope___closed__2_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__2);
v___x_2693_ = lean_obj_once(&lp_choreo_Choreo_sceneEnvelope___closed__3, &lp_choreo_Choreo_sceneEnvelope___closed__3_once, _init_lp_choreo_Choreo_sceneEnvelope___closed__3);
lean_inc(v_wide_2689_);
lean_inc(v___x_2690_);
v_envelope_2694_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_envelope_2694_, 0, v___x_2690_);
lean_ctor_set(v_envelope_2694_, 1, v_wide_2689_);
lean_ctor_set(v_envelope_2694_, 2, v___x_2692_);
lean_ctor_set(v_envelope_2694_, 3, v___x_2693_);
v___x_2695_ = lean_obj_once(&lp_choreo_Choreo_slWingRect___closed__0, &lp_choreo_Choreo_slWingRect___closed__0_once, _init_lp_choreo_Choreo_slWingRect___closed__0);
v_slWing_2696_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_slWing_2696_, 0, v___x_2695_);
lean_ctor_set(v_slWing_2696_, 1, v_wide_2689_);
lean_ctor_set(v_slWing_2696_, 2, v___x_2692_);
lean_ctor_set(v_slWing_2696_, 3, v___x_2693_);
v___x_2697_ = lean_obj_once(&lp_choreo_Choreo_srWingRect___closed__0, &lp_choreo_Choreo_srWingRect___closed__0_once, _init_lp_choreo_Choreo_srWingRect___closed__0);
v_srWing_2698_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_srWing_2698_, 0, v___x_2690_);
lean_ctor_set(v_srWing_2698_, 1, v___x_2697_);
lean_ctor_set(v_srWing_2698_, 2, v___x_2692_);
lean_ctor_set(v_srWing_2698_, 3, v___x_2693_);
v___x_2699_ = l_List_lengthTR___redArg(v_frames_2576_);
v___x_2700_ = lean_unsigned_to_nat(1u);
v___x_2701_ = lean_nat_sub(v___x_2699_, v___x_2700_);
lean_inc(v___x_2701_);
v___x_2702_ = l_List_range(v___x_2701_);
lean_inc_ref(v_srWing_2698_);
lean_inc_ref(v_slWing_2696_);
lean_inc_ref(v_envelope_2694_);
lean_inc(v___y_2686_);
lean_inc_ref(v_names_2547_);
lean_inc_ref(v_sc_2546_);
v___x_2703_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildScene_spec__13(v_frames_2576_, v_sc_2546_, v_names_2547_, v___y_2686_, v_envelope_2694_, v_slWing_2696_, v_srWing_2698_, v_gap_2549_, v___y_2687_, v_moves_2577_, v___x_2702_, v___x_2580_);
v_moved_2704_ = lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(v___x_2691_, v___x_2703_);
lean_dec(v___x_2703_);
v___x_2705_ = lean_unsigned_to_nat(120u);
v___x_2706_ = lean_nat_dec_lt(v_moved_2704_, v___x_2705_);
if (v___x_2706_ == 0)
{
lean_object* v___x_2707_; lean_object* v___x_2708_; 
lean_dec(v_moved_2704_);
v___x_2707_ = lean_unsigned_to_nat(8u);
v___x_2708_ = lean_nat_mul(v___x_2707_, v___x_2699_);
v___y_2644_ = v___x_2701_;
v___y_2645_ = v_slWing_2696_;
v___y_2646_ = v___x_2692_;
v___y_2647_ = v___x_2691_;
v___y_2648_ = v___x_2700_;
v___y_2649_ = v___y_2687_;
v___y_2650_ = v___x_2699_;
v___y_2651_ = v_srWing_2698_;
v___y_2652_ = v___y_2685_;
v___y_2653_ = v_envelope_2694_;
v___y_2654_ = v___y_2686_;
v___y_2655_ = v___x_2708_;
goto v___jp_2643_;
}
else
{
lean_object* v___x_2709_; 
v___x_2709_ = lean_nat_sub(v___x_2705_, v_moved_2704_);
lean_dec(v_moved_2704_);
v___y_2644_ = v___x_2701_;
v___y_2645_ = v_slWing_2696_;
v___y_2646_ = v___x_2692_;
v___y_2647_ = v___x_2691_;
v___y_2648_ = v___x_2700_;
v___y_2649_ = v___y_2687_;
v___y_2650_ = v___x_2699_;
v___y_2651_ = v_srWing_2698_;
v___y_2652_ = v___y_2685_;
v___y_2653_ = v_envelope_2694_;
v___y_2654_ = v___y_2686_;
v___y_2655_ = v___x_2709_;
goto v___jp_2643_;
}
}
v___jp_2710_:
{
uint8_t v___x_2713_; 
v___x_2713_ = l_List_isEmpty___redArg(v_moves_2577_);
if (v___x_2713_ == 0)
{
uint8_t v___x_2714_; 
v___x_2714_ = 1;
v___y_2685_ = v___y_2712_;
v___y_2686_ = v___y_2711_;
v___y_2687_ = v___x_2714_;
goto v___jp_2684_;
}
else
{
uint8_t v___x_2715_; 
v___x_2715_ = 0;
v___y_2685_ = v___y_2712_;
v___y_2686_ = v___y_2711_;
v___y_2687_ = v___x_2715_;
goto v___jp_2684_;
}
}
v___jp_2716_:
{
lean_object* v_n_2718_; uint8_t v___x_2719_; 
v_n_2718_ = l_List_lengthTR___redArg(v___y_2717_);
lean_dec(v___y_2717_);
v___x_2719_ = l_List_isEmpty___redArg(v_steps_2548_);
if (v___x_2719_ == 0)
{
v___y_2711_ = v_n_2718_;
v___y_2712_ = v_steps_2548_;
goto v___jp_2710_;
}
else
{
lean_object* v___x_2720_; 
lean_dec(v_steps_2548_);
v___x_2720_ = lp_choreo_Choreo_stepsForGenre(v_genre_2579_);
v___y_2711_ = v_n_2718_;
v___y_2712_ = v___x_2720_;
goto v___jp_2710_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowOfLetter(lean_object* v_s_2737_){
_start:
{
lean_object* v___x_2738_; uint8_t v___x_2739_; 
v___x_2738_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__0));
v___x_2739_ = lean_string_dec_eq(v_s_2737_, v___x_2738_);
if (v___x_2739_ == 0)
{
lean_object* v___x_2740_; uint8_t v___x_2741_; 
v___x_2740_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__1));
v___x_2741_ = lean_string_dec_eq(v_s_2737_, v___x_2740_);
if (v___x_2741_ == 0)
{
lean_object* v___x_2742_; uint8_t v___x_2743_; 
v___x_2742_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__2));
v___x_2743_ = lean_string_dec_eq(v_s_2737_, v___x_2742_);
if (v___x_2743_ == 0)
{
lean_object* v___x_2744_; uint8_t v___x_2745_; 
v___x_2744_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__3));
v___x_2745_ = lean_string_dec_eq(v_s_2737_, v___x_2744_);
if (v___x_2745_ == 0)
{
lean_object* v___x_2746_; uint8_t v___x_2747_; 
v___x_2746_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__4));
v___x_2747_ = lean_string_dec_eq(v_s_2737_, v___x_2746_);
if (v___x_2747_ == 0)
{
lean_object* v___x_2748_; 
v___x_2748_ = lean_box(0);
return v___x_2748_;
}
else
{
lean_object* v___x_2749_; 
v___x_2749_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__5));
return v___x_2749_;
}
}
else
{
lean_object* v___x_2750_; 
v___x_2750_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__6));
return v___x_2750_;
}
}
else
{
lean_object* v___x_2751_; 
v___x_2751_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__7));
return v___x_2751_;
}
}
else
{
lean_object* v___x_2752_; 
v___x_2752_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__8));
return v___x_2752_;
}
}
else
{
lean_object* v___x_2753_; 
v___x_2753_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__9));
return v___x_2753_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_rowOfLetter___boxed(lean_object* v_s_2754_){
_start:
{
lean_object* v_res_2755_; 
v_res_2755_ = lp_choreo_Choreo_rowOfLetter(v_s_2754_);
lean_dec_ref(v_s_2754_);
return v_res_2755_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause_rowAfter(lean_object* v_a_2757_){
_start:
{
if (lean_obj_tag(v_a_2757_) == 0)
{
lean_object* v___x_2758_; 
v___x_2758_ = lean_box(0);
return v___x_2758_;
}
else
{
lean_object* v_head_2759_; lean_object* v_tail_2760_; lean_object* v___x_2761_; uint8_t v___x_2762_; 
v_head_2759_ = lean_ctor_get(v_a_2757_, 0);
v_tail_2760_ = lean_ctor_get(v_a_2757_, 1);
v___x_2761_ = ((lean_object*)(lp_choreo_Choreo_readClause_rowAfter___closed__0));
v___x_2762_ = lean_string_dec_eq(v_head_2759_, v___x_2761_);
if (v___x_2762_ == 0)
{
v_a_2757_ = v_tail_2760_;
goto _start;
}
else
{
if (lean_obj_tag(v_tail_2760_) == 1)
{
lean_object* v_head_2764_; lean_object* v___x_2765_; 
v_head_2764_ = lean_ctor_get(v_tail_2760_, 0);
v___x_2765_ = lp_choreo_Choreo_rowOfLetter(v_head_2764_);
return v___x_2765_;
}
else
{
v_a_2757_ = v_tail_2760_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause_rowAfter___boxed(lean_object* v_a_2767_){
_start:
{
lean_object* v_res_2768_; 
v_res_2768_ = lp_choreo_Choreo_readClause_rowAfter(v_a_2767_);
lean_dec(v_a_2767_);
return v_res_2768_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_readClause_hasPair(lean_object* v_a_2769_, lean_object* v_a_2770_, lean_object* v_a_2771_){
_start:
{
if (lean_obj_tag(v_a_2769_) == 1)
{
lean_object* v_tail_2772_; 
v_tail_2772_ = lean_ctor_get(v_a_2769_, 1);
if (lean_obj_tag(v_tail_2772_) == 1)
{
lean_object* v_head_2773_; lean_object* v_head_2774_; uint8_t v___x_2775_; 
v_head_2773_ = lean_ctor_get(v_a_2769_, 0);
v_head_2774_ = lean_ctor_get(v_tail_2772_, 0);
v___x_2775_ = lean_string_dec_eq(v_head_2773_, v_a_2770_);
if (v___x_2775_ == 0)
{
v_a_2769_ = v_tail_2772_;
goto _start;
}
else
{
uint8_t v___x_2777_; 
v___x_2777_ = lean_string_dec_eq(v_head_2774_, v_a_2771_);
if (v___x_2777_ == 0)
{
v_a_2769_ = v_tail_2772_;
goto _start;
}
else
{
return v___x_2777_;
}
}
}
else
{
uint8_t v___x_2779_; 
v___x_2779_ = 0;
return v___x_2779_;
}
}
else
{
uint8_t v___x_2780_; 
v___x_2780_ = 0;
return v___x_2780_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause_hasPair___boxed(lean_object* v_a_2781_, lean_object* v_a_2782_, lean_object* v_a_2783_){
_start:
{
uint8_t v_res_2784_; lean_object* v_r_2785_; 
v_res_2784_ = lp_choreo_Choreo_readClause_hasPair(v_a_2781_, v_a_2782_, v_a_2783_);
lean_dec_ref(v_a_2783_);
lean_dec_ref(v_a_2782_);
lean_dec(v_a_2781_);
v_r_2785_ = lean_box(v_res_2784_);
return v_r_2785_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_readClause_spec__0(lean_object* v_x_2786_){
_start:
{
if (lean_obj_tag(v_x_2786_) == 0)
{
lean_object* v___x_2787_; 
v___x_2787_ = lean_box(0);
return v___x_2787_;
}
else
{
lean_object* v_head_2788_; lean_object* v_tail_2789_; lean_object* v___x_2790_; uint8_t v___x_2791_; 
v_head_2788_ = lean_ctor_get(v_x_2786_, 0);
lean_inc(v_head_2788_);
v_tail_2789_ = lean_ctor_get(v_x_2786_, 1);
lean_inc(v_tail_2789_);
lean_dec_ref_known(v_x_2786_, 2);
v___x_2790_ = ((lean_object*)(lp_choreo_Choreo_rowOfLetter___closed__0));
v___x_2791_ = lean_string_dec_eq(v_head_2788_, v___x_2790_);
if (v___x_2791_ == 0)
{
lean_object* v___x_2792_; 
v___x_2792_ = lp_choreo_Choreo_wordNumber(v_head_2788_);
if (lean_obj_tag(v___x_2792_) == 0)
{
v_x_2786_ = v_tail_2789_;
goto _start;
}
else
{
lean_dec(v_tail_2789_);
return v___x_2792_;
}
}
else
{
lean_dec(v_head_2788_);
v_x_2786_ = v_tail_2789_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readClause(lean_object* v_words_2799_){
_start:
{
lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2807_; lean_object* v___y_2808_; lean_object* v___y_2814_; lean_object* v___y_2817_; lean_object* v___x_2828_; 
lean_inc(v_words_2799_);
v___x_2828_ = lp_choreo_List_findSome_x3f___at___00Choreo_readClause_spec__0(v_words_2799_);
if (lean_obj_tag(v___x_2828_) == 0)
{
lean_object* v___x_2829_; 
v___x_2829_ = lean_unsigned_to_nat(0u);
v___y_2817_ = v___x_2829_;
goto v___jp_2816_;
}
else
{
lean_object* v_val_2830_; 
v_val_2830_ = lean_ctor_get(v___x_2828_, 0);
lean_inc(v_val_2830_);
lean_dec_ref_known(v___x_2828_, 1);
v___y_2817_ = v_val_2830_;
goto v___jp_2816_;
}
v___jp_2800_:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; 
v___x_2803_ = lp_choreo_Choreo_readClause_rowAfter(v_words_2799_);
lean_dec(v_words_2799_);
lean_inc_ref(v___y_2801_);
v___x_2804_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_2804_, 0, v___y_2802_);
lean_ctor_set(v___x_2804_, 1, v___y_2801_);
lean_ctor_set(v___x_2804_, 2, v___x_2803_);
v___x_2805_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2805_, 0, v___x_2804_);
return v___x_2805_;
}
v___jp_2806_:
{
lean_object* v___x_2809_; uint8_t v___x_2810_; 
v___x_2809_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__0));
v___x_2810_ = lean_string_dec_eq(v___y_2808_, v___x_2809_);
if (v___x_2810_ == 0)
{
v___y_2801_ = v___y_2808_;
v___y_2802_ = v___y_2807_;
goto v___jp_2800_;
}
else
{
lean_object* v___x_2811_; 
v___x_2811_ = lp_choreo_Choreo_readClause_rowAfter(v_words_2799_);
if (lean_obj_tag(v___x_2811_) == 0)
{
lean_object* v___x_2812_; 
lean_dec(v___y_2807_);
lean_dec(v_words_2799_);
v___x_2812_ = lean_box(0);
return v___x_2812_;
}
else
{
lean_dec_ref_known(v___x_2811_, 1);
v___y_2801_ = v___y_2808_;
v___y_2802_ = v___y_2807_;
goto v___jp_2800_;
}
}
}
v___jp_2813_:
{
lean_object* v___x_2815_; 
v___x_2815_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__0));
v___y_2807_ = v___y_2814_;
v___y_2808_ = v___x_2815_;
goto v___jp_2806_;
}
v___jp_2816_:
{
lean_object* v___x_2818_; lean_object* v___x_2819_; uint8_t v___x_2820_; 
v___x_2818_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_transition_spec__4___closed__0));
v___x_2819_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__1));
v___x_2820_ = lp_choreo_Choreo_readClause_hasPair(v_words_2799_, v___x_2818_, v___x_2819_);
if (v___x_2820_ == 0)
{
lean_object* v___x_2821_; uint8_t v___x_2822_; 
v___x_2821_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__2));
v___x_2822_ = lp_choreo_Choreo_readClause_hasPair(v_words_2799_, v___x_2818_, v___x_2821_);
if (v___x_2822_ == 0)
{
lean_object* v___x_2823_; uint8_t v___x_2824_; 
v___x_2823_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__3));
v___x_2824_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2823_, v_words_2799_);
if (v___x_2824_ == 0)
{
lean_object* v___x_2825_; uint8_t v___x_2826_; 
v___x_2825_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__0));
v___x_2826_ = lp_choreo_Choreo_readClause_hasPair(v_words_2799_, v___x_2825_, v___x_2818_);
if (v___x_2826_ == 0)
{
lean_object* v___x_2827_; 
v___x_2827_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__0));
v___y_2807_ = v___y_2817_;
v___y_2808_ = v___x_2827_;
goto v___jp_2806_;
}
else
{
v___y_2814_ = v___y_2817_;
goto v___jp_2813_;
}
}
else
{
v___y_2814_ = v___y_2817_;
goto v___jp_2813_;
}
}
else
{
v___y_2807_ = v___y_2817_;
v___y_2808_ = v___x_2821_;
goto v___jp_2806_;
}
}
else
{
v___y_2807_ = v___y_2817_;
v___y_2808_ = v___x_2819_;
goto v___jp_2806_;
}
}
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_looksLikeScene(lean_object* v_ts_2831_){
_start:
{
lean_object* v___x_2832_; uint8_t v___x_2833_; 
v___x_2832_ = ((lean_object*)(lp_choreo_Choreo_readClause_rowAfter___closed__0));
v___x_2833_ = lp_choreo_List_elem___at___00Choreo_scan_spec__1(v___x_2832_, v_ts_2831_);
return v___x_2833_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_looksLikeScene___boxed(lean_object* v_ts_2834_){
_start:
{
uint8_t v_res_2835_; lean_object* v_r_2836_; 
v_res_2835_ = lp_choreo_Choreo_looksLikeScene(v_ts_2834_);
lean_dec(v_ts_2834_);
v_r_2836_ = lean_box(v_res_2835_);
return v_r_2836_;
}
}
static lean_object* _init_lp_choreo_Choreo_spreadCols___closed__0(void){
_start:
{
lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2837_ = lean_box(0);
v___x_2838_ = lean_unsigned_to_nat(10u);
v___x_2839_ = lean_unsigned_to_nat(9u);
v___x_2840_ = lean_unsigned_to_nat(1u);
v___x_2841_ = l_List_range_x27TR_go(v___x_2840_, v___x_2839_, v___x_2838_, v___x_2837_);
return v___x_2841_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_spreadCols(lean_object* v_k_2935_){
_start:
{
lean_object* v___x_2936_; uint8_t v___x_2937_; 
v___x_2936_ = lean_unsigned_to_nat(0u);
v___x_2937_ = lean_nat_dec_eq(v_k_2935_, v___x_2936_);
if (v___x_2937_ == 0)
{
lean_object* v___x_2938_; uint8_t v___x_2939_; 
v___x_2938_ = lean_unsigned_to_nat(1u);
v___x_2939_ = lean_nat_dec_eq(v_k_2935_, v___x_2938_);
if (v___x_2939_ == 0)
{
lean_object* v___x_2940_; uint8_t v___x_2941_; 
v___x_2940_ = lean_unsigned_to_nat(2u);
v___x_2941_ = lean_nat_dec_eq(v_k_2935_, v___x_2940_);
if (v___x_2941_ == 0)
{
lean_object* v___x_2942_; uint8_t v___x_2943_; 
v___x_2942_ = lean_unsigned_to_nat(3u);
v___x_2943_ = lean_nat_dec_eq(v_k_2935_, v___x_2942_);
if (v___x_2943_ == 0)
{
lean_object* v___x_2944_; uint8_t v___x_2945_; 
v___x_2944_ = lean_unsigned_to_nat(4u);
v___x_2945_ = lean_nat_dec_eq(v_k_2935_, v___x_2944_);
if (v___x_2945_ == 0)
{
lean_object* v___x_2946_; uint8_t v___x_2947_; 
v___x_2946_ = lean_unsigned_to_nat(5u);
v___x_2947_ = lean_nat_dec_eq(v_k_2935_, v___x_2946_);
if (v___x_2947_ == 0)
{
lean_object* v___x_2948_; uint8_t v___x_2949_; 
v___x_2948_ = lean_unsigned_to_nat(6u);
v___x_2949_ = lean_nat_dec_eq(v_k_2935_, v___x_2948_);
if (v___x_2949_ == 0)
{
lean_object* v___x_2950_; uint8_t v___x_2951_; 
v___x_2950_ = lean_unsigned_to_nat(7u);
v___x_2951_ = lean_nat_dec_eq(v_k_2935_, v___x_2950_);
if (v___x_2951_ == 0)
{
lean_object* v___x_2952_; uint8_t v___x_2953_; 
v___x_2952_ = lean_unsigned_to_nat(8u);
v___x_2953_ = lean_nat_dec_eq(v_k_2935_, v___x_2952_);
if (v___x_2953_ == 0)
{
lean_object* v___x_2954_; 
v___x_2954_ = lean_obj_once(&lp_choreo_Choreo_spreadCols___closed__0, &lp_choreo_Choreo_spreadCols___closed__0_once, _init_lp_choreo_Choreo_spreadCols___closed__0);
return v___x_2954_;
}
else
{
lean_object* v___x_2955_; 
v___x_2955_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__8));
return v___x_2955_;
}
}
else
{
lean_object* v___x_2956_; 
v___x_2956_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__15));
return v___x_2956_;
}
}
else
{
lean_object* v___x_2957_; 
v___x_2957_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__18));
return v___x_2957_;
}
}
else
{
lean_object* v___x_2958_; 
v___x_2958_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__22));
return v___x_2958_;
}
}
else
{
lean_object* v___x_2959_; 
v___x_2959_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__25));
return v___x_2959_;
}
}
else
{
lean_object* v___x_2960_; 
v___x_2960_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__28));
return v___x_2960_;
}
}
else
{
lean_object* v___x_2961_; 
v___x_2961_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__30));
return v___x_2961_;
}
}
else
{
lean_object* v___x_2962_; 
v___x_2962_ = ((lean_object*)(lp_choreo_Choreo_spreadCols___closed__31));
return v___x_2962_;
}
}
else
{
lean_object* v___x_2963_; 
v___x_2963_ = lean_box(0);
return v___x_2963_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_spreadCols___boxed(lean_object* v_k_2964_){
_start:
{
lean_object* v_res_2965_; 
v_res_2965_ = lp_choreo_Choreo_spreadCols(v_k_2964_);
lean_dec(v_k_2964_);
return v_res_2965_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_splitClauses_spec__2(lean_object* v_a_2966_, lean_object* v_a_2967_){
_start:
{
if (lean_obj_tag(v_a_2966_) == 0)
{
lean_object* v___x_2968_; 
v___x_2968_ = l_List_reverse___redArg(v_a_2967_);
return v___x_2968_;
}
else
{
lean_object* v_head_2969_; lean_object* v_tail_2970_; lean_object* v___x_2972_; uint8_t v_isShared_2973_; uint8_t v_isSharedCheck_2979_; 
v_head_2969_ = lean_ctor_get(v_a_2966_, 0);
v_tail_2970_ = lean_ctor_get(v_a_2966_, 1);
v_isSharedCheck_2979_ = !lean_is_exclusive(v_a_2966_);
if (v_isSharedCheck_2979_ == 0)
{
v___x_2972_ = v_a_2966_;
v_isShared_2973_ = v_isSharedCheck_2979_;
goto v_resetjp_2971_;
}
else
{
lean_inc(v_tail_2970_);
lean_inc(v_head_2969_);
lean_dec(v_a_2966_);
v___x_2972_ = lean_box(0);
v_isShared_2973_ = v_isSharedCheck_2979_;
goto v_resetjp_2971_;
}
v_resetjp_2971_:
{
lean_object* v___x_2974_; lean_object* v___x_2976_; 
v___x_2974_ = lp_choreo_Choreo_tokenize(v_head_2969_);
if (v_isShared_2973_ == 0)
{
lean_ctor_set(v___x_2972_, 1, v_a_2967_);
lean_ctor_set(v___x_2972_, 0, v___x_2974_);
v___x_2976_ = v___x_2972_;
goto v_reusejp_2975_;
}
else
{
lean_object* v_reuseFailAlloc_2978_; 
v_reuseFailAlloc_2978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2978_, 0, v___x_2974_);
lean_ctor_set(v_reuseFailAlloc_2978_, 1, v_a_2967_);
v___x_2976_ = v_reuseFailAlloc_2978_;
goto v_reusejp_2975_;
}
v_reusejp_2975_:
{
v_a_2966_ = v_tail_2970_;
v_a_2967_ = v___x_2976_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_String_mapAux___at___00Choreo_splitClauses_spec__4(lean_object* v_s_2980_, lean_object* v_p_2981_){
_start:
{
uint32_t v___y_2983_; lean_object* v___x_2988_; uint8_t v_decide_2989_; 
v___x_2988_ = lean_string_utf8_byte_size(v_s_2980_);
v_decide_2989_ = lean_nat_dec_eq(v_p_2981_, v___x_2988_);
if (v_decide_2989_ == 0)
{
uint32_t v___x_2990_; uint32_t v___x_2991_; uint8_t v___x_2992_; 
v___x_2990_ = lean_string_utf8_get_fast(v_s_2980_, v_p_2981_);
v___x_2991_ = 46;
v___x_2992_ = lean_uint32_dec_eq(v___x_2990_, v___x_2991_);
if (v___x_2992_ == 0)
{
uint32_t v___x_2993_; uint8_t v___x_2994_; 
v___x_2993_ = 44;
v___x_2994_ = lean_uint32_dec_eq(v___x_2990_, v___x_2993_);
if (v___x_2994_ == 0)
{
uint32_t v___x_2995_; uint8_t v___x_2996_; 
v___x_2995_ = 59;
v___x_2996_ = lean_uint32_dec_eq(v___x_2990_, v___x_2995_);
if (v___x_2996_ == 0)
{
v___y_2983_ = v___x_2990_;
goto v___jp_2982_;
}
else
{
uint32_t v___x_2997_; 
v___x_2997_ = 124;
v___y_2983_ = v___x_2997_;
goto v___jp_2982_;
}
}
else
{
uint32_t v___x_2998_; 
v___x_2998_ = 124;
v___y_2983_ = v___x_2998_;
goto v___jp_2982_;
}
}
else
{
uint32_t v___x_2999_; 
v___x_2999_ = 124;
v___y_2983_ = v___x_2999_;
goto v___jp_2982_;
}
}
else
{
lean_dec(v_p_2981_);
return v_s_2980_;
}
v___jp_2982_:
{
lean_object* v___x_2984_; lean_object* v___x_2985_; lean_object* v___x_2986_; 
lean_inc(v_p_2981_);
v___x_2984_ = lean_string_utf8_set(v_s_2980_, v_p_2981_, v___y_2983_);
v___x_2985_ = l_Char_utf8Size(v___y_2983_);
v___x_2986_ = lean_nat_add(v_p_2981_, v___x_2985_);
lean_dec(v___x_2985_);
lean_dec(v_p_2981_);
v_s_2980_ = v___x_2984_;
v_p_2981_ = v___x_2986_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__0(lean_object* v_a_3000_, lean_object* v_a_3001_){
_start:
{
if (lean_obj_tag(v_a_3000_) == 0)
{
lean_object* v___x_3002_; 
v___x_3002_ = lean_array_to_list(v_a_3001_);
return v___x_3002_;
}
else
{
lean_object* v_head_3003_; lean_object* v_tail_3004_; lean_object* v___x_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; 
v_head_3003_ = lean_ctor_get(v_a_3000_, 0);
v_tail_3004_ = lean_ctor_get(v_a_3000_, 1);
v___x_3005_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__2));
v___x_3006_ = lean_unsigned_to_nat(0u);
v___x_3007_ = lean_box(0);
v___x_3008_ = l_String_splitOnAux(v_head_3003_, v___x_3005_, v___x_3006_, v___x_3006_, v___x_3006_, v___x_3007_);
v___x_3009_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3001_, v___x_3008_);
v_a_3000_ = v_tail_3004_;
v_a_3001_ = v___x_3009_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__0___boxed(lean_object* v_a_3011_, lean_object* v_a_3012_){
_start:
{
lean_object* v_res_3013_; 
v_res_3013_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__0(v_a_3011_, v_a_3012_);
lean_dec(v_a_3011_);
return v_res_3013_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1(lean_object* v_a_3017_, lean_object* v_a_3018_){
_start:
{
if (lean_obj_tag(v_a_3017_) == 0)
{
lean_object* v___x_3019_; 
v___x_3019_ = lean_array_to_list(v_a_3018_);
return v___x_3019_;
}
else
{
lean_object* v_head_3020_; lean_object* v_tail_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; 
v_head_3020_ = lean_ctor_get(v_a_3017_, 0);
v_tail_3021_ = lean_ctor_get(v_a_3017_, 1);
v___x_3022_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__0));
v___x_3023_ = lean_unsigned_to_nat(0u);
v___x_3024_ = lean_box(0);
v___x_3025_ = l_String_splitOnAux(v_head_3020_, v___x_3022_, v___x_3023_, v___x_3023_, v___x_3023_, v___x_3024_);
v___x_3026_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__1));
v___x_3027_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__0(v___x_3025_, v___x_3026_);
lean_dec(v___x_3025_);
v___x_3028_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3018_, v___x_3027_);
v_a_3017_ = v_tail_3021_;
v_a_3018_ = v___x_3028_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___boxed(lean_object* v_a_3030_, lean_object* v_a_3031_){
_start:
{
lean_object* v_res_3032_; 
v_res_3032_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1(v_a_3030_, v_a_3031_);
lean_dec(v_a_3030_);
return v_res_3032_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_splitClauses_spec__3(lean_object* v_a_3033_, lean_object* v_a_3034_){
_start:
{
if (lean_obj_tag(v_a_3033_) == 0)
{
lean_object* v___x_3035_; 
v___x_3035_ = l_List_reverse___redArg(v_a_3034_);
return v___x_3035_;
}
else
{
lean_object* v_head_3036_; lean_object* v_tail_3037_; lean_object* v___x_3039_; uint8_t v_isShared_3040_; uint8_t v_isSharedCheck_3047_; 
v_head_3036_ = lean_ctor_get(v_a_3033_, 0);
v_tail_3037_ = lean_ctor_get(v_a_3033_, 1);
v_isSharedCheck_3047_ = !lean_is_exclusive(v_a_3033_);
if (v_isSharedCheck_3047_ == 0)
{
v___x_3039_ = v_a_3033_;
v_isShared_3040_ = v_isSharedCheck_3047_;
goto v_resetjp_3038_;
}
else
{
lean_inc(v_tail_3037_);
lean_inc(v_head_3036_);
lean_dec(v_a_3033_);
v___x_3039_ = lean_box(0);
v_isShared_3040_ = v_isSharedCheck_3047_;
goto v_resetjp_3038_;
}
v_resetjp_3038_:
{
uint8_t v___x_3041_; 
v___x_3041_ = l_List_isEmpty___redArg(v_head_3036_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3043_; 
if (v_isShared_3040_ == 0)
{
lean_ctor_set(v___x_3039_, 1, v_a_3034_);
v___x_3043_ = v___x_3039_;
goto v_reusejp_3042_;
}
else
{
lean_object* v_reuseFailAlloc_3045_; 
v_reuseFailAlloc_3045_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3045_, 0, v_head_3036_);
lean_ctor_set(v_reuseFailAlloc_3045_, 1, v_a_3034_);
v___x_3043_ = v_reuseFailAlloc_3045_;
goto v_reusejp_3042_;
}
v_reusejp_3042_:
{
v_a_3033_ = v_tail_3037_;
v_a_3034_ = v___x_3043_;
goto _start;
}
}
else
{
lean_del_object(v___x_3039_);
lean_dec(v_head_3036_);
v_a_3033_ = v_tail_3037_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitClauses(lean_object* v_text_3049_){
_start:
{
lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v_marked_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v_parts_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; 
v___x_3050_ = lean_unsigned_to_nat(0u);
v___x_3051_ = lp_choreo_String_mapAux___at___00Choreo_tokenize_spec__1(v_text_3049_, v___x_3050_);
v_marked_3052_ = lp_choreo_String_mapAux___at___00Choreo_splitClauses_spec__4(v___x_3051_, v___x_3050_);
v___x_3053_ = ((lean_object*)(lp_choreo_Choreo_splitClauses___closed__0));
v___x_3054_ = lean_box(0);
v___x_3055_ = l_String_splitOnAux(v_marked_3052_, v___x_3053_, v___x_3050_, v___x_3050_, v___x_3050_, v___x_3054_);
lean_dec_ref(v_marked_3052_);
v___x_3056_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1___closed__1));
v_parts_3057_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_splitClauses_spec__1(v___x_3055_, v___x_3056_);
lean_dec(v___x_3055_);
v___x_3058_ = lp_choreo_List_mapTR_loop___at___00Choreo_splitClauses_spec__2(v_parts_3057_, v___x_3054_);
v___x_3059_ = lp_choreo_List_filterTR_loop___at___00Choreo_splitClauses_spec__3(v___x_3058_, v___x_3054_);
return v___x_3059_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__9(lean_object* v_a_3060_, lean_object* v_a_3061_){
_start:
{
if (lean_obj_tag(v_a_3060_) == 0)
{
lean_object* v___x_3062_; 
v___x_3062_ = l_List_reverse___redArg(v_a_3061_);
return v___x_3062_;
}
else
{
lean_object* v_head_3063_; lean_object* v_tail_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3076_; 
v_head_3063_ = lean_ctor_get(v_a_3060_, 0);
v_tail_3064_ = lean_ctor_get(v_a_3060_, 1);
v_isSharedCheck_3076_ = !lean_is_exclusive(v_a_3060_);
if (v_isSharedCheck_3076_ == 0)
{
v___x_3066_ = v_a_3060_;
v_isShared_3067_ = v_isSharedCheck_3076_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_tail_3064_);
lean_inc(v_head_3063_);
lean_dec(v_a_3060_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3076_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v_place_3068_; lean_object* v___x_3069_; uint8_t v___x_3070_; 
v_place_3068_ = lean_ctor_get(v_head_3063_, 1);
v___x_3069_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__2));
v___x_3070_ = lean_string_dec_eq(v_place_3068_, v___x_3069_);
if (v___x_3070_ == 0)
{
lean_del_object(v___x_3066_);
lean_dec(v_head_3063_);
v_a_3060_ = v_tail_3064_;
goto _start;
}
else
{
lean_object* v___x_3073_; 
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 1, v_a_3061_);
v___x_3073_ = v___x_3066_;
goto v_reusejp_3072_;
}
else
{
lean_object* v_reuseFailAlloc_3075_; 
v_reuseFailAlloc_3075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3075_, 0, v_head_3063_);
lean_ctor_set(v_reuseFailAlloc_3075_, 1, v_a_3061_);
v___x_3073_ = v_reuseFailAlloc_3075_;
goto v_reusejp_3072_;
}
v_reusejp_3072_:
{
v_a_3060_ = v_tail_3064_;
v_a_3061_ = v___x_3073_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__8(lean_object* v_a_3077_, lean_object* v_a_3078_){
_start:
{
if (lean_obj_tag(v_a_3077_) == 0)
{
lean_object* v___x_3079_; 
v___x_3079_ = l_List_reverse___redArg(v_a_3078_);
return v___x_3079_;
}
else
{
lean_object* v_head_3080_; lean_object* v_tail_3081_; lean_object* v___x_3083_; uint8_t v_isShared_3084_; uint8_t v_isSharedCheck_3093_; 
v_head_3080_ = lean_ctor_get(v_a_3077_, 0);
v_tail_3081_ = lean_ctor_get(v_a_3077_, 1);
v_isSharedCheck_3093_ = !lean_is_exclusive(v_a_3077_);
if (v_isSharedCheck_3093_ == 0)
{
v___x_3083_ = v_a_3077_;
v_isShared_3084_ = v_isSharedCheck_3093_;
goto v_resetjp_3082_;
}
else
{
lean_inc(v_tail_3081_);
lean_inc(v_head_3080_);
lean_dec(v_a_3077_);
v___x_3083_ = lean_box(0);
v_isShared_3084_ = v_isSharedCheck_3093_;
goto v_resetjp_3082_;
}
v_resetjp_3082_:
{
lean_object* v_place_3085_; lean_object* v___x_3086_; uint8_t v___x_3087_; 
v_place_3085_ = lean_ctor_get(v_head_3080_, 1);
v___x_3086_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__1));
v___x_3087_ = lean_string_dec_eq(v_place_3085_, v___x_3086_);
if (v___x_3087_ == 0)
{
lean_del_object(v___x_3083_);
lean_dec(v_head_3080_);
v_a_3077_ = v_tail_3081_;
goto _start;
}
else
{
lean_object* v___x_3090_; 
if (v_isShared_3084_ == 0)
{
lean_ctor_set(v___x_3083_, 1, v_a_3078_);
v___x_3090_ = v___x_3083_;
goto v_reusejp_3089_;
}
else
{
lean_object* v_reuseFailAlloc_3092_; 
v_reuseFailAlloc_3092_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3092_, 0, v_head_3080_);
lean_ctor_set(v_reuseFailAlloc_3092_, 1, v_a_3078_);
v___x_3090_ = v_reuseFailAlloc_3092_;
goto v_reusejp_3089_;
}
v_reusejp_3089_:
{
v_a_3077_ = v_tail_3081_;
v_a_3078_ = v___x_3090_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__13(lean_object* v_a_3094_, lean_object* v_a_3095_){
_start:
{
if (lean_obj_tag(v_a_3094_) == 0)
{
lean_object* v___x_3096_; 
v___x_3096_ = l_List_reverse___redArg(v_a_3095_);
return v___x_3096_;
}
else
{
lean_object* v_head_3097_; lean_object* v_tail_3098_; lean_object* v___x_3100_; uint8_t v_isShared_3101_; uint8_t v_isSharedCheck_3107_; 
v_head_3097_ = lean_ctor_get(v_a_3094_, 0);
v_tail_3098_ = lean_ctor_get(v_a_3094_, 1);
v_isSharedCheck_3107_ = !lean_is_exclusive(v_a_3094_);
if (v_isSharedCheck_3107_ == 0)
{
v___x_3100_ = v_a_3094_;
v_isShared_3101_ = v_isSharedCheck_3107_;
goto v_resetjp_3099_;
}
else
{
lean_inc(v_tail_3098_);
lean_inc(v_head_3097_);
lean_dec(v_a_3094_);
v___x_3100_ = lean_box(0);
v_isShared_3101_ = v_isSharedCheck_3107_;
goto v_resetjp_3099_;
}
v_resetjp_3099_:
{
lean_object* v_x_3102_; lean_object* v___x_3104_; 
v_x_3102_ = lean_ctor_get(v_head_3097_, 0);
lean_inc(v_x_3102_);
lean_dec(v_head_3097_);
if (v_isShared_3101_ == 0)
{
lean_ctor_set(v___x_3100_, 1, v_a_3095_);
lean_ctor_set(v___x_3100_, 0, v_x_3102_);
v___x_3104_ = v___x_3100_;
goto v_reusejp_3103_;
}
else
{
lean_object* v_reuseFailAlloc_3106_; 
v_reuseFailAlloc_3106_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3106_, 0, v_x_3102_);
lean_ctor_set(v_reuseFailAlloc_3106_, 1, v_a_3095_);
v___x_3104_ = v_reuseFailAlloc_3106_;
goto v_reusejp_3103_;
}
v_reusejp_3103_:
{
v_a_3094_ = v_tail_3098_;
v_a_3095_ = v___x_3104_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_parseScene_spec__11_spec__12(lean_object* v_r_3108_, lean_object* v_a_3109_, lean_object* v_a_3110_){
_start:
{
if (lean_obj_tag(v_a_3109_) == 0)
{
lean_object* v___x_3111_; 
lean_dec(v_r_3108_);
v___x_3111_ = l_List_reverse___redArg(v_a_3110_);
return v___x_3111_;
}
else
{
lean_object* v_head_3112_; lean_object* v_tail_3113_; lean_object* v___x_3115_; uint8_t v_isShared_3116_; uint8_t v_isSharedCheck_3142_; 
v_head_3112_ = lean_ctor_get(v_a_3109_, 0);
v_tail_3113_ = lean_ctor_get(v_a_3109_, 1);
v_isSharedCheck_3142_ = !lean_is_exclusive(v_a_3109_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3115_ = v_a_3109_;
v_isShared_3116_ = v_isSharedCheck_3142_;
goto v_resetjp_3114_;
}
else
{
lean_inc(v_tail_3113_);
lean_inc(v_head_3112_);
lean_dec(v_a_3109_);
v___x_3115_ = lean_box(0);
v_isShared_3116_ = v_isSharedCheck_3142_;
goto v_resetjp_3114_;
}
v_resetjp_3114_:
{
lean_object* v_fst_3117_; lean_object* v_snd_3118_; lean_object* v___x_3120_; uint8_t v_isShared_3121_; uint8_t v_isSharedCheck_3141_; 
v_fst_3117_ = lean_ctor_get(v_head_3112_, 0);
v_snd_3118_ = lean_ctor_get(v_head_3112_, 1);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_head_3112_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3120_ = v_head_3112_;
v_isShared_3121_ = v_isSharedCheck_3141_;
goto v_resetjp_3119_;
}
else
{
lean_inc(v_snd_3118_);
lean_inc(v_fst_3117_);
lean_dec(v_head_3112_);
v___x_3120_ = lean_box(0);
v_isShared_3121_ = v_isSharedCheck_3141_;
goto v_resetjp_3119_;
}
v_resetjp_3119_:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3134_; 
v___x_3122_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__2));
v___x_3123_ = lp_choreo_Choreo_wingStart;
v___x_3124_ = lean_nat_to_int(v_snd_3118_);
v___x_3125_ = lp_choreo_Choreo_wingStep;
v___x_3126_ = lean_int_mul(v___x_3124_, v___x_3125_);
lean_dec(v___x_3124_);
v___x_3127_ = lean_int_add(v___x_3123_, v___x_3126_);
lean_dec(v___x_3126_);
v___x_3128_ = lean_int_neg(v___x_3127_);
lean_dec(v___x_3127_);
lean_inc(v_r_3108_);
v___x_3129_ = lp_choreo_Choreo_rowY(v_r_3108_);
lean_inc(v___x_3129_);
v___x_3130_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3128_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
v___x_3131_ = lp_choreo_Choreo_colX(v_fst_3117_);
v___x_3132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3131_);
lean_ctor_set(v___x_3132_, 1, v___x_3129_);
if (v_isShared_3121_ == 0)
{
lean_ctor_set(v___x_3120_, 1, v___x_3132_);
lean_ctor_set(v___x_3120_, 0, v___x_3130_);
v___x_3134_ = v___x_3120_;
goto v_reusejp_3133_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3130_);
lean_ctor_set(v_reuseFailAlloc_3140_, 1, v___x_3132_);
v___x_3134_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3133_;
}
v_reusejp_3133_:
{
lean_object* v___x_3135_; lean_object* v___x_3137_; 
v___x_3135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3122_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
if (v_isShared_3116_ == 0)
{
lean_ctor_set(v___x_3115_, 1, v_a_3110_);
lean_ctor_set(v___x_3115_, 0, v___x_3135_);
v___x_3137_ = v___x_3115_;
goto v_reusejp_3136_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3135_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v_a_3110_);
v___x_3137_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3136_;
}
v_reusejp_3136_:
{
v_a_3109_ = v_tail_3113_;
v_a_3110_ = v___x_3137_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__11(lean_object* v_r_3143_, lean_object* v_a_3144_, lean_object* v_a_3145_){
_start:
{
if (lean_obj_tag(v_a_3144_) == 0)
{
lean_object* v___x_3146_; 
lean_dec(v_r_3143_);
v___x_3146_ = l_List_reverse___redArg(v_a_3145_);
return v___x_3146_;
}
else
{
lean_object* v_head_3147_; lean_object* v_tail_3148_; lean_object* v___x_3150_; uint8_t v_isShared_3151_; uint8_t v_isSharedCheck_3177_; 
v_head_3147_ = lean_ctor_get(v_a_3144_, 0);
v_tail_3148_ = lean_ctor_get(v_a_3144_, 1);
v_isSharedCheck_3177_ = !lean_is_exclusive(v_a_3144_);
if (v_isSharedCheck_3177_ == 0)
{
v___x_3150_ = v_a_3144_;
v_isShared_3151_ = v_isSharedCheck_3177_;
goto v_resetjp_3149_;
}
else
{
lean_inc(v_tail_3148_);
lean_inc(v_head_3147_);
lean_dec(v_a_3144_);
v___x_3150_ = lean_box(0);
v_isShared_3151_ = v_isSharedCheck_3177_;
goto v_resetjp_3149_;
}
v_resetjp_3149_:
{
lean_object* v_fst_3152_; lean_object* v_snd_3153_; lean_object* v___x_3155_; uint8_t v_isShared_3156_; uint8_t v_isSharedCheck_3176_; 
v_fst_3152_ = lean_ctor_get(v_head_3147_, 0);
v_snd_3153_ = lean_ctor_get(v_head_3147_, 1);
v_isSharedCheck_3176_ = !lean_is_exclusive(v_head_3147_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3155_ = v_head_3147_;
v_isShared_3156_ = v_isSharedCheck_3176_;
goto v_resetjp_3154_;
}
else
{
lean_inc(v_snd_3153_);
lean_inc(v_fst_3152_);
lean_dec(v_head_3147_);
v___x_3155_ = lean_box(0);
v_isShared_3156_ = v_isSharedCheck_3176_;
goto v_resetjp_3154_;
}
v_resetjp_3154_:
{
lean_object* v___x_3157_; lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3169_; 
v___x_3157_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__2));
v___x_3158_ = lp_choreo_Choreo_wingStart;
v___x_3159_ = lean_nat_to_int(v_snd_3153_);
v___x_3160_ = lp_choreo_Choreo_wingStep;
v___x_3161_ = lean_int_mul(v___x_3159_, v___x_3160_);
lean_dec(v___x_3159_);
v___x_3162_ = lean_int_add(v___x_3158_, v___x_3161_);
lean_dec(v___x_3161_);
v___x_3163_ = lean_int_neg(v___x_3162_);
lean_dec(v___x_3162_);
lean_inc(v_r_3143_);
v___x_3164_ = lp_choreo_Choreo_rowY(v_r_3143_);
lean_inc(v___x_3164_);
v___x_3165_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3163_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___x_3166_ = lp_choreo_Choreo_colX(v_fst_3152_);
v___x_3167_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3166_);
lean_ctor_set(v___x_3167_, 1, v___x_3164_);
if (v_isShared_3156_ == 0)
{
lean_ctor_set(v___x_3155_, 1, v___x_3167_);
lean_ctor_set(v___x_3155_, 0, v___x_3165_);
v___x_3169_ = v___x_3155_;
goto v_reusejp_3168_;
}
else
{
lean_object* v_reuseFailAlloc_3175_; 
v_reuseFailAlloc_3175_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3175_, 0, v___x_3165_);
lean_ctor_set(v_reuseFailAlloc_3175_, 1, v___x_3167_);
v___x_3169_ = v_reuseFailAlloc_3175_;
goto v_reusejp_3168_;
}
v_reusejp_3168_:
{
lean_object* v___x_3170_; lean_object* v___x_3172_; 
v___x_3170_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3170_, 0, v___x_3157_);
lean_ctor_set(v___x_3170_, 1, v___x_3169_);
if (v_isShared_3151_ == 0)
{
lean_ctor_set(v___x_3150_, 1, v_a_3145_);
lean_ctor_set(v___x_3150_, 0, v___x_3170_);
v___x_3172_ = v___x_3150_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3174_; 
v_reuseFailAlloc_3174_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3174_, 0, v___x_3170_);
lean_ctor_set(v_reuseFailAlloc_3174_, 1, v_a_3145_);
v___x_3172_ = v_reuseFailAlloc_3174_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
lean_object* v___x_3173_; 
v___x_3173_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_parseScene_spec__11_spec__12(v_r_3143_, v_tail_3148_, v___x_3172_);
return v___x_3173_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__14(lean_object* v_taken_3178_, uint8_t v___x_3179_, uint8_t v___x_3180_, lean_object* v_a_3181_, lean_object* v_a_3182_){
_start:
{
if (lean_obj_tag(v_a_3181_) == 0)
{
lean_object* v___x_3183_; 
v___x_3183_ = l_List_reverse___redArg(v_a_3182_);
return v___x_3183_;
}
else
{
lean_object* v_head_3184_; lean_object* v_tail_3185_; lean_object* v___x_3187_; uint8_t v_isShared_3188_; uint8_t v_isSharedCheck_3198_; 
v_head_3184_ = lean_ctor_get(v_a_3181_, 0);
v_tail_3185_ = lean_ctor_get(v_a_3181_, 1);
v_isSharedCheck_3198_ = !lean_is_exclusive(v_a_3181_);
if (v_isSharedCheck_3198_ == 0)
{
v___x_3187_ = v_a_3181_;
v_isShared_3188_ = v_isSharedCheck_3198_;
goto v_resetjp_3186_;
}
else
{
lean_inc(v_tail_3185_);
lean_inc(v_head_3184_);
lean_dec(v_a_3181_);
v___x_3187_ = lean_box(0);
v_isShared_3188_ = v_isSharedCheck_3198_;
goto v_resetjp_3186_;
}
v_resetjp_3186_:
{
uint8_t v___y_3190_; lean_object* v___x_3196_; uint8_t v___x_3197_; 
lean_inc(v_head_3184_);
v___x_3196_ = lp_choreo_Choreo_colX(v_head_3184_);
v___x_3197_ = lp_choreo_List_elem___at___00Choreo_groupsBy_spec__0(v___x_3196_, v_taken_3178_);
lean_dec(v___x_3196_);
if (v___x_3197_ == 0)
{
v___y_3190_ = v___x_3179_;
goto v___jp_3189_;
}
else
{
v___y_3190_ = v___x_3180_;
goto v___jp_3189_;
}
v___jp_3189_:
{
if (v___y_3190_ == 0)
{
lean_del_object(v___x_3187_);
lean_dec(v_head_3184_);
v_a_3181_ = v_tail_3185_;
goto _start;
}
else
{
lean_object* v___x_3193_; 
if (v_isShared_3188_ == 0)
{
lean_ctor_set(v___x_3187_, 1, v_a_3182_);
v___x_3193_ = v___x_3187_;
goto v_reusejp_3192_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_head_3184_);
lean_ctor_set(v_reuseFailAlloc_3195_, 1, v_a_3182_);
v___x_3193_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3192_;
}
v_reusejp_3192_:
{
v_a_3181_ = v_tail_3185_;
v_a_3182_ = v___x_3193_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__14___boxed(lean_object* v_taken_3199_, lean_object* v___x_3200_, lean_object* v___x_3201_, lean_object* v_a_3202_, lean_object* v_a_3203_){
_start:
{
uint8_t v___x_2423__boxed_3204_; uint8_t v___x_2424__boxed_3205_; lean_object* v_res_3206_; 
v___x_2423__boxed_3204_ = lean_unbox(v___x_3200_);
v___x_2424__boxed_3205_ = lean_unbox(v___x_3201_);
v_res_3206_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__14(v_taken_3199_, v___x_2423__boxed_3204_, v___x_2424__boxed_3205_, v_a_3202_, v_a_3203_);
lean_dec(v_taken_3199_);
return v_res_3206_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_parseScene_spec__10_spec__10(lean_object* v_r_3207_, lean_object* v_a_3208_, lean_object* v_a_3209_){
_start:
{
if (lean_obj_tag(v_a_3208_) == 0)
{
lean_object* v___x_3210_; 
lean_dec(v_r_3207_);
v___x_3210_ = l_List_reverse___redArg(v_a_3209_);
return v___x_3210_;
}
else
{
lean_object* v_head_3211_; lean_object* v_tail_3212_; lean_object* v___x_3214_; uint8_t v_isShared_3215_; uint8_t v_isSharedCheck_3240_; 
v_head_3211_ = lean_ctor_get(v_a_3208_, 0);
v_tail_3212_ = lean_ctor_get(v_a_3208_, 1);
v_isSharedCheck_3240_ = !lean_is_exclusive(v_a_3208_);
if (v_isSharedCheck_3240_ == 0)
{
v___x_3214_ = v_a_3208_;
v_isShared_3215_ = v_isSharedCheck_3240_;
goto v_resetjp_3213_;
}
else
{
lean_inc(v_tail_3212_);
lean_inc(v_head_3211_);
lean_dec(v_a_3208_);
v___x_3214_ = lean_box(0);
v_isShared_3215_ = v_isSharedCheck_3240_;
goto v_resetjp_3213_;
}
v_resetjp_3213_:
{
lean_object* v_fst_3216_; lean_object* v_snd_3217_; lean_object* v___x_3219_; uint8_t v_isShared_3220_; uint8_t v_isSharedCheck_3239_; 
v_fst_3216_ = lean_ctor_get(v_head_3211_, 0);
v_snd_3217_ = lean_ctor_get(v_head_3211_, 1);
v_isSharedCheck_3239_ = !lean_is_exclusive(v_head_3211_);
if (v_isSharedCheck_3239_ == 0)
{
v___x_3219_ = v_head_3211_;
v_isShared_3220_ = v_isSharedCheck_3239_;
goto v_resetjp_3218_;
}
else
{
lean_inc(v_snd_3217_);
lean_inc(v_fst_3216_);
lean_dec(v_head_3211_);
v___x_3219_ = lean_box(0);
v_isShared_3220_ = v_isSharedCheck_3239_;
goto v_resetjp_3218_;
}
v_resetjp_3218_:
{
lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; lean_object* v___x_3226_; lean_object* v___x_3227_; lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3232_; 
v___x_3221_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__1));
v___x_3222_ = lp_choreo_Choreo_wingStart;
v___x_3223_ = lean_nat_to_int(v_snd_3217_);
v___x_3224_ = lp_choreo_Choreo_wingStep;
v___x_3225_ = lean_int_mul(v___x_3223_, v___x_3224_);
lean_dec(v___x_3223_);
v___x_3226_ = lean_int_add(v___x_3222_, v___x_3225_);
lean_dec(v___x_3225_);
lean_inc(v_r_3207_);
v___x_3227_ = lp_choreo_Choreo_rowY(v_r_3207_);
lean_inc(v___x_3227_);
v___x_3228_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3228_, 0, v___x_3226_);
lean_ctor_set(v___x_3228_, 1, v___x_3227_);
v___x_3229_ = lp_choreo_Choreo_colX(v_fst_3216_);
v___x_3230_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3230_, 0, v___x_3229_);
lean_ctor_set(v___x_3230_, 1, v___x_3227_);
if (v_isShared_3220_ == 0)
{
lean_ctor_set(v___x_3219_, 1, v___x_3230_);
lean_ctor_set(v___x_3219_, 0, v___x_3228_);
v___x_3232_ = v___x_3219_;
goto v_reusejp_3231_;
}
else
{
lean_object* v_reuseFailAlloc_3238_; 
v_reuseFailAlloc_3238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3238_, 0, v___x_3228_);
lean_ctor_set(v_reuseFailAlloc_3238_, 1, v___x_3230_);
v___x_3232_ = v_reuseFailAlloc_3238_;
goto v_reusejp_3231_;
}
v_reusejp_3231_:
{
lean_object* v___x_3233_; lean_object* v___x_3235_; 
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3221_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
if (v_isShared_3215_ == 0)
{
lean_ctor_set(v___x_3214_, 1, v_a_3209_);
lean_ctor_set(v___x_3214_, 0, v___x_3233_);
v___x_3235_ = v___x_3214_;
goto v_reusejp_3234_;
}
else
{
lean_object* v_reuseFailAlloc_3237_; 
v_reuseFailAlloc_3237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3237_, 0, v___x_3233_);
lean_ctor_set(v_reuseFailAlloc_3237_, 1, v_a_3209_);
v___x_3235_ = v_reuseFailAlloc_3237_;
goto v_reusejp_3234_;
}
v_reusejp_3234_:
{
v_a_3208_ = v_tail_3212_;
v_a_3209_ = v___x_3235_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__10(lean_object* v_r_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
if (lean_obj_tag(v_a_3242_) == 0)
{
lean_object* v___x_3244_; 
lean_dec(v_r_3241_);
v___x_3244_ = l_List_reverse___redArg(v_a_3243_);
return v___x_3244_;
}
else
{
lean_object* v_head_3245_; lean_object* v_tail_3246_; lean_object* v___x_3248_; uint8_t v_isShared_3249_; uint8_t v_isSharedCheck_3274_; 
v_head_3245_ = lean_ctor_get(v_a_3242_, 0);
v_tail_3246_ = lean_ctor_get(v_a_3242_, 1);
v_isSharedCheck_3274_ = !lean_is_exclusive(v_a_3242_);
if (v_isSharedCheck_3274_ == 0)
{
v___x_3248_ = v_a_3242_;
v_isShared_3249_ = v_isSharedCheck_3274_;
goto v_resetjp_3247_;
}
else
{
lean_inc(v_tail_3246_);
lean_inc(v_head_3245_);
lean_dec(v_a_3242_);
v___x_3248_ = lean_box(0);
v_isShared_3249_ = v_isSharedCheck_3274_;
goto v_resetjp_3247_;
}
v_resetjp_3247_:
{
lean_object* v_fst_3250_; lean_object* v_snd_3251_; lean_object* v___x_3253_; uint8_t v_isShared_3254_; uint8_t v_isSharedCheck_3273_; 
v_fst_3250_ = lean_ctor_get(v_head_3245_, 0);
v_snd_3251_ = lean_ctor_get(v_head_3245_, 1);
v_isSharedCheck_3273_ = !lean_is_exclusive(v_head_3245_);
if (v_isSharedCheck_3273_ == 0)
{
v___x_3253_ = v_head_3245_;
v_isShared_3254_ = v_isSharedCheck_3273_;
goto v_resetjp_3252_;
}
else
{
lean_inc(v_snd_3251_);
lean_inc(v_fst_3250_);
lean_dec(v_head_3245_);
v___x_3253_ = lean_box(0);
v_isShared_3254_ = v_isSharedCheck_3273_;
goto v_resetjp_3252_;
}
v_resetjp_3252_:
{
lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; lean_object* v___x_3259_; lean_object* v___x_3260_; lean_object* v___x_3261_; lean_object* v___x_3262_; lean_object* v___x_3263_; lean_object* v___x_3264_; lean_object* v___x_3266_; 
v___x_3255_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__1));
v___x_3256_ = lp_choreo_Choreo_wingStart;
v___x_3257_ = lean_nat_to_int(v_snd_3251_);
v___x_3258_ = lp_choreo_Choreo_wingStep;
v___x_3259_ = lean_int_mul(v___x_3257_, v___x_3258_);
lean_dec(v___x_3257_);
v___x_3260_ = lean_int_add(v___x_3256_, v___x_3259_);
lean_dec(v___x_3259_);
lean_inc(v_r_3241_);
v___x_3261_ = lp_choreo_Choreo_rowY(v_r_3241_);
lean_inc(v___x_3261_);
v___x_3262_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3262_, 0, v___x_3260_);
lean_ctor_set(v___x_3262_, 1, v___x_3261_);
v___x_3263_ = lp_choreo_Choreo_colX(v_fst_3250_);
v___x_3264_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3264_, 0, v___x_3263_);
lean_ctor_set(v___x_3264_, 1, v___x_3261_);
if (v_isShared_3254_ == 0)
{
lean_ctor_set(v___x_3253_, 1, v___x_3264_);
lean_ctor_set(v___x_3253_, 0, v___x_3262_);
v___x_3266_ = v___x_3253_;
goto v_reusejp_3265_;
}
else
{
lean_object* v_reuseFailAlloc_3272_; 
v_reuseFailAlloc_3272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3272_, 0, v___x_3262_);
lean_ctor_set(v_reuseFailAlloc_3272_, 1, v___x_3264_);
v___x_3266_ = v_reuseFailAlloc_3272_;
goto v_reusejp_3265_;
}
v_reusejp_3265_:
{
lean_object* v___x_3267_; lean_object* v___x_3269_; 
v___x_3267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3267_, 0, v___x_3255_);
lean_ctor_set(v___x_3267_, 1, v___x_3266_);
if (v_isShared_3249_ == 0)
{
lean_ctor_set(v___x_3248_, 1, v_a_3243_);
lean_ctor_set(v___x_3248_, 0, v___x_3267_);
v___x_3269_ = v___x_3248_;
goto v_reusejp_3268_;
}
else
{
lean_object* v_reuseFailAlloc_3271_; 
v_reuseFailAlloc_3271_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3271_, 0, v___x_3267_);
lean_ctor_set(v_reuseFailAlloc_3271_, 1, v_a_3243_);
v___x_3269_ = v_reuseFailAlloc_3271_;
goto v_reusejp_3268_;
}
v_reusejp_3268_:
{
lean_object* v___x_3270_; 
v___x_3270_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_parseScene_spec__10_spec__10(v_r_3241_, v_tail_3246_, v___x_3269_);
return v___x_3270_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__7(lean_object* v_r_3275_, lean_object* v___y_3276_, lean_object* v_a_3277_, lean_object* v_a_3278_){
_start:
{
if (lean_obj_tag(v_a_3277_) == 0)
{
lean_object* v___x_3279_; 
lean_dec(v___y_3276_);
v___x_3279_ = l_List_reverse___redArg(v_a_3278_);
return v___x_3279_;
}
else
{
lean_object* v_head_3280_; lean_object* v_tail_3281_; lean_object* v___x_3283_; uint8_t v_isShared_3284_; uint8_t v_isSharedCheck_3295_; 
v_head_3280_ = lean_ctor_get(v_a_3277_, 0);
v_tail_3281_ = lean_ctor_get(v_a_3277_, 1);
v_isSharedCheck_3295_ = !lean_is_exclusive(v_a_3277_);
if (v_isSharedCheck_3295_ == 0)
{
v___x_3283_ = v_a_3277_;
v_isShared_3284_ = v_isSharedCheck_3295_;
goto v_resetjp_3282_;
}
else
{
lean_inc(v_tail_3281_);
lean_inc(v_head_3280_);
lean_dec(v_a_3277_);
v___x_3283_ = lean_box(0);
v_isShared_3284_ = v_isSharedCheck_3295_;
goto v_resetjp_3282_;
}
v_resetjp_3282_:
{
lean_object* v___y_3286_; lean_object* v_row_3293_; 
v_row_3293_ = lean_ctor_get(v_head_3280_, 2);
if (lean_obj_tag(v_row_3293_) == 0)
{
lean_inc(v___y_3276_);
v___y_3286_ = v___y_3276_;
goto v___jp_3285_;
}
else
{
lean_object* v_val_3294_; 
v_val_3294_ = lean_ctor_get(v_row_3293_, 0);
lean_inc(v_val_3294_);
v___y_3286_ = v_val_3294_;
goto v___jp_3285_;
}
v___jp_3285_:
{
uint8_t v___x_3287_; 
v___x_3287_ = lean_nat_dec_eq(v___y_3286_, v_r_3275_);
lean_dec(v___y_3286_);
if (v___x_3287_ == 0)
{
lean_del_object(v___x_3283_);
lean_dec(v_head_3280_);
v_a_3277_ = v_tail_3281_;
goto _start;
}
else
{
lean_object* v___x_3290_; 
if (v_isShared_3284_ == 0)
{
lean_ctor_set(v___x_3283_, 1, v_a_3278_);
v___x_3290_ = v___x_3283_;
goto v_reusejp_3289_;
}
else
{
lean_object* v_reuseFailAlloc_3292_; 
v_reuseFailAlloc_3292_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3292_, 0, v_head_3280_);
lean_ctor_set(v_reuseFailAlloc_3292_, 1, v_a_3278_);
v___x_3290_ = v_reuseFailAlloc_3292_;
goto v_reusejp_3289_;
}
v_reusejp_3289_:
{
v_a_3277_ = v_tail_3281_;
v_a_3278_ = v___x_3290_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__7___boxed(lean_object* v_r_3296_, lean_object* v___y_3297_, lean_object* v_a_3298_, lean_object* v_a_3299_){
_start:
{
lean_object* v_res_3300_; 
v_res_3300_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__7(v_r_3296_, v___y_3297_, v_a_3298_, v_a_3299_);
lean_dec(v_r_3296_);
return v_res_3300_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5(lean_object* v_x_3301_, lean_object* v_x_3302_){
_start:
{
if (lean_obj_tag(v_x_3302_) == 0)
{
return v_x_3301_;
}
else
{
lean_object* v_head_3303_; lean_object* v_tail_3304_; lean_object* v_count_3305_; lean_object* v___x_3306_; 
v_head_3303_ = lean_ctor_get(v_x_3302_, 0);
v_tail_3304_ = lean_ctor_get(v_x_3302_, 1);
v_count_3305_ = lean_ctor_get(v_head_3303_, 0);
v___x_3306_ = lean_nat_add(v_x_3301_, v_count_3305_);
lean_dec(v_x_3301_);
v_x_3301_ = v___x_3306_;
v_x_3302_ = v_tail_3304_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5___boxed(lean_object* v_x_3308_, lean_object* v_x_3309_){
_start:
{
lean_object* v_res_3310_; 
v_res_3310_ = lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5(v_x_3308_, v_x_3309_);
lean_dec(v_x_3309_);
return v_res_3310_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__12(lean_object* v_r_3311_, lean_object* v_a_3312_, lean_object* v_a_3313_){
_start:
{
if (lean_obj_tag(v_a_3312_) == 0)
{
lean_object* v___x_3314_; 
lean_dec(v_r_3311_);
v___x_3314_ = l_List_reverse___redArg(v_a_3313_);
return v___x_3314_;
}
else
{
lean_object* v_head_3315_; lean_object* v_tail_3316_; lean_object* v___x_3318_; uint8_t v_isShared_3319_; uint8_t v_isSharedCheck_3328_; 
v_head_3315_ = lean_ctor_get(v_a_3312_, 0);
v_tail_3316_ = lean_ctor_get(v_a_3312_, 1);
v_isSharedCheck_3328_ = !lean_is_exclusive(v_a_3312_);
if (v_isSharedCheck_3328_ == 0)
{
v___x_3318_ = v_a_3312_;
v_isShared_3319_ = v_isSharedCheck_3328_;
goto v_resetjp_3317_;
}
else
{
lean_inc(v_tail_3316_);
lean_inc(v_head_3315_);
lean_dec(v_a_3312_);
v___x_3318_ = lean_box(0);
v_isShared_3319_ = v_isSharedCheck_3328_;
goto v_resetjp_3317_;
}
v_resetjp_3317_:
{
lean_object* v_y_3320_; lean_object* v___x_3321_; uint8_t v___x_3322_; 
v_y_3320_ = lean_ctor_get(v_head_3315_, 1);
lean_inc(v_r_3311_);
v___x_3321_ = lp_choreo_Choreo_rowY(v_r_3311_);
v___x_3322_ = lean_int_dec_eq(v_y_3320_, v___x_3321_);
lean_dec(v___x_3321_);
if (v___x_3322_ == 0)
{
lean_del_object(v___x_3318_);
lean_dec(v_head_3315_);
v_a_3312_ = v_tail_3316_;
goto _start;
}
else
{
lean_object* v___x_3325_; 
if (v_isShared_3319_ == 0)
{
lean_ctor_set(v___x_3318_, 1, v_a_3313_);
v___x_3325_ = v___x_3318_;
goto v_reusejp_3324_;
}
else
{
lean_object* v_reuseFailAlloc_3327_; 
v_reuseFailAlloc_3327_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3327_, 0, v_head_3315_);
lean_ctor_set(v_reuseFailAlloc_3327_, 1, v_a_3313_);
v___x_3325_ = v_reuseFailAlloc_3327_;
goto v_reusejp_3324_;
}
v_reusejp_3324_:
{
v_a_3312_ = v_tail_3316_;
v_a_3313_ = v___x_3325_;
goto _start;
}
}
}
}
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__1(void){
_start:
{
lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; 
v___x_3331_ = lean_box(0);
v___x_3332_ = lean_unsigned_to_nat(10u);
v___x_3333_ = lean_unsigned_to_nat(9u);
v___x_3334_ = lean_unsigned_to_nat(1u);
v___x_3335_ = l_List_range_x27TR_go(v___x_3334_, v___x_3333_, v___x_3332_, v___x_3331_);
return v___x_3335_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16(lean_object* v___y_3336_, lean_object* v_inGroups_3337_, lean_object* v_onPlaced_3338_, uint8_t v___x_3339_, lean_object* v_a_3340_, lean_object* v_a_3341_){
_start:
{
if (lean_obj_tag(v_a_3340_) == 0)
{
lean_object* v___x_3342_; 
lean_dec(v_onPlaced_3338_);
lean_dec(v_inGroups_3337_);
lean_dec(v___y_3336_);
v___x_3342_ = lean_array_to_list(v_a_3341_);
return v___x_3342_;
}
else
{
lean_object* v_head_3343_; lean_object* v_tail_3344_; lean_object* v___x_3345_; lean_object* v_gs_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v_leftN_3349_; lean_object* v___x_3350_; lean_object* v_rightN_3351_; lean_object* v___y_3353_; lean_object* v___x_3365_; lean_object* v_taken_3366_; uint8_t v___x_3367_; 
v_head_3343_ = lean_ctor_get(v_a_3340_, 0);
lean_inc_n(v_head_3343_, 2);
v_tail_3344_ = lean_ctor_get(v_a_3340_, 1);
lean_inc(v_tail_3344_);
lean_dec_ref_known(v_a_3340_, 2);
v___x_3345_ = lean_box(0);
lean_inc(v_inGroups_3337_);
lean_inc(v___y_3336_);
v_gs_3346_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__7(v_head_3343_, v___y_3336_, v_inGroups_3337_, v___x_3345_);
v___x_3347_ = lean_unsigned_to_nat(0u);
lean_inc(v_gs_3346_);
v___x_3348_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__8(v_gs_3346_, v___x_3345_);
v_leftN_3349_ = lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5(v___x_3347_, v___x_3348_);
lean_dec(v___x_3348_);
v___x_3350_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__9(v_gs_3346_, v___x_3345_);
v_rightN_3351_ = lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5(v___x_3347_, v___x_3350_);
lean_dec(v___x_3350_);
lean_inc(v_onPlaced_3338_);
v___x_3365_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__12(v_head_3343_, v_onPlaced_3338_, v___x_3345_);
v_taken_3366_ = lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__13(v___x_3365_, v___x_3345_);
v___x_3367_ = l_List_isEmpty___redArg(v_taken_3366_);
if (v___x_3367_ == 0)
{
lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; 
v___x_3368_ = lean_nat_add(v_leftN_3349_, v_rightN_3351_);
lean_dec(v_leftN_3349_);
v___x_3369_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__1, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__1_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__1);
v___x_3370_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__14(v_taken_3366_, v___x_3339_, v___x_3367_, v___x_3369_, v___x_3345_);
lean_dec(v_taken_3366_);
v___x_3371_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__0));
lean_inc(v___x_3370_);
v___x_3372_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_3370_, v___x_3370_, v___x_3368_, v___x_3371_);
lean_dec(v___x_3370_);
v___y_3353_ = v___x_3372_;
goto v___jp_3352_;
}
else
{
lean_object* v___x_3373_; lean_object* v___x_3374_; 
lean_dec(v_taken_3366_);
v___x_3373_ = lean_nat_add(v_leftN_3349_, v_rightN_3351_);
lean_dec(v_leftN_3349_);
v___x_3374_ = lp_choreo_Choreo_spreadCols(v___x_3373_);
lean_dec(v___x_3373_);
v___y_3353_ = v___x_3374_;
goto v___jp_3352_;
}
v___jp_3352_:
{
lean_object* v___x_3354_; lean_object* v_rightCols_3355_; lean_object* v_leftCols_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v___x_3354_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___closed__0));
lean_inc(v_rightN_3351_);
lean_inc(v___y_3353_);
v_rightCols_3355_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___y_3353_, v___y_3353_, v_rightN_3351_, v___x_3354_);
v_leftCols_3356_ = l_List_drop___redArg(v_rightN_3351_, v___y_3353_);
lean_dec(v___y_3353_);
v___x_3357_ = l_List_zipIdxTR___redArg(v_leftCols_3356_, v___x_3347_);
lean_inc(v_head_3343_);
v___x_3358_ = lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__10(v_head_3343_, v___x_3357_, v___x_3345_);
v___x_3359_ = l_List_reverse___redArg(v_rightCols_3355_);
v___x_3360_ = l_List_zipIdxTR___redArg(v___x_3359_, v___x_3347_);
v___x_3361_ = lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__11(v_head_3343_, v___x_3360_, v___x_3345_);
v___x_3362_ = l_List_appendTR___redArg(v___x_3358_, v___x_3361_);
v___x_3363_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3341_, v___x_3362_);
v_a_3340_ = v_tail_3344_;
v_a_3341_ = v___x_3363_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16___boxed(lean_object* v___y_3375_, lean_object* v_inGroups_3376_, lean_object* v_onPlaced_3377_, lean_object* v___x_3378_, lean_object* v_a_3379_, lean_object* v_a_3380_){
_start:
{
uint8_t v___x_2705__boxed_3381_; lean_object* v_res_3382_; 
v___x_2705__boxed_3381_ = lean_unbox(v___x_3378_);
v_res_3382_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16(v___y_3375_, v_inGroups_3376_, v_onPlaced_3377_, v___x_2705__boxed_3381_, v_a_3379_, v_a_3380_);
return v_res_3382_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__17(lean_object* v_a_3383_, lean_object* v_a_3384_){
_start:
{
if (lean_obj_tag(v_a_3383_) == 0)
{
lean_object* v___x_3385_; 
v___x_3385_ = l_List_reverse___redArg(v_a_3384_);
return v___x_3385_;
}
else
{
lean_object* v_head_3386_; lean_object* v_snd_3387_; lean_object* v_tail_3388_; lean_object* v___x_3390_; uint8_t v_isShared_3391_; uint8_t v_isSharedCheck_3397_; 
v_head_3386_ = lean_ctor_get(v_a_3383_, 0);
v_snd_3387_ = lean_ctor_get(v_head_3386_, 1);
lean_inc(v_snd_3387_);
v_tail_3388_ = lean_ctor_get(v_a_3383_, 1);
v_isSharedCheck_3397_ = !lean_is_exclusive(v_a_3383_);
if (v_isSharedCheck_3397_ == 0)
{
lean_object* v_unused_3398_; 
v_unused_3398_ = lean_ctor_get(v_a_3383_, 0);
lean_dec(v_unused_3398_);
v___x_3390_ = v_a_3383_;
v_isShared_3391_ = v_isSharedCheck_3397_;
goto v_resetjp_3389_;
}
else
{
lean_inc(v_tail_3388_);
lean_dec(v_a_3383_);
v___x_3390_ = lean_box(0);
v_isShared_3391_ = v_isSharedCheck_3397_;
goto v_resetjp_3389_;
}
v_resetjp_3389_:
{
lean_object* v_fst_3392_; lean_object* v___x_3394_; 
v_fst_3392_ = lean_ctor_get(v_snd_3387_, 0);
lean_inc(v_fst_3392_);
lean_dec(v_snd_3387_);
if (v_isShared_3391_ == 0)
{
lean_ctor_set(v___x_3390_, 1, v_a_3384_);
lean_ctor_set(v___x_3390_, 0, v_fst_3392_);
v___x_3394_ = v___x_3390_;
goto v_reusejp_3393_;
}
else
{
lean_object* v_reuseFailAlloc_3396_; 
v_reuseFailAlloc_3396_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3396_, 0, v_fst_3392_);
lean_ctor_set(v_reuseFailAlloc_3396_, 1, v_a_3384_);
v___x_3394_ = v_reuseFailAlloc_3396_;
goto v_reusejp_3393_;
}
v_reusejp_3393_:
{
v_a_3383_ = v_tail_3388_;
v_a_3384_ = v___x_3394_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__18(lean_object* v_a_3399_, lean_object* v_a_3400_){
_start:
{
if (lean_obj_tag(v_a_3399_) == 0)
{
lean_object* v___x_3401_; 
v___x_3401_ = l_List_reverse___redArg(v_a_3400_);
return v___x_3401_;
}
else
{
lean_object* v_head_3402_; lean_object* v_snd_3403_; lean_object* v_tail_3404_; lean_object* v___x_3406_; uint8_t v_isShared_3407_; uint8_t v_isSharedCheck_3413_; 
v_head_3402_ = lean_ctor_get(v_a_3399_, 0);
v_snd_3403_ = lean_ctor_get(v_head_3402_, 1);
lean_inc(v_snd_3403_);
v_tail_3404_ = lean_ctor_get(v_a_3399_, 1);
v_isSharedCheck_3413_ = !lean_is_exclusive(v_a_3399_);
if (v_isSharedCheck_3413_ == 0)
{
lean_object* v_unused_3414_; 
v_unused_3414_ = lean_ctor_get(v_a_3399_, 0);
lean_dec(v_unused_3414_);
v___x_3406_ = v_a_3399_;
v_isShared_3407_ = v_isSharedCheck_3413_;
goto v_resetjp_3405_;
}
else
{
lean_inc(v_tail_3404_);
lean_dec(v_a_3399_);
v___x_3406_ = lean_box(0);
v_isShared_3407_ = v_isSharedCheck_3413_;
goto v_resetjp_3405_;
}
v_resetjp_3405_:
{
lean_object* v_snd_3408_; lean_object* v___x_3410_; 
v_snd_3408_ = lean_ctor_get(v_snd_3403_, 1);
lean_inc(v_snd_3408_);
lean_dec(v_snd_3403_);
if (v_isShared_3407_ == 0)
{
lean_ctor_set(v___x_3406_, 1, v_a_3400_);
lean_ctor_set(v___x_3406_, 0, v_snd_3408_);
v___x_3410_ = v___x_3406_;
goto v_reusejp_3409_;
}
else
{
lean_object* v_reuseFailAlloc_3412_; 
v_reuseFailAlloc_3412_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3412_, 0, v_snd_3408_);
lean_ctor_set(v_reuseFailAlloc_3412_, 1, v_a_3400_);
v___x_3410_ = v_reuseFailAlloc_3412_;
goto v_reusejp_3409_;
}
v_reusejp_3409_:
{
v_a_3399_ = v_tail_3404_;
v_a_3400_ = v___x_3410_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parseScene_spec__19(lean_object* v_x_3415_){
_start:
{
if (lean_obj_tag(v_x_3415_) == 0)
{
lean_object* v___x_3416_; 
v___x_3416_ = lean_box(0);
return v___x_3416_;
}
else
{
lean_object* v_head_3417_; lean_object* v_row_3418_; 
v_head_3417_ = lean_ctor_get(v_x_3415_, 0);
v_row_3418_ = lean_ctor_get(v_head_3417_, 2);
if (lean_obj_tag(v_row_3418_) == 0)
{
lean_object* v_tail_3419_; 
v_tail_3419_ = lean_ctor_get(v_x_3415_, 1);
v_x_3415_ = v_tail_3419_;
goto _start;
}
else
{
lean_inc_ref(v_row_3418_);
return v_row_3418_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_parseScene_spec__19___boxed(lean_object* v_x_3421_){
_start:
{
lean_object* v_res_3422_; 
v_res_3422_ = lp_choreo_List_findSome_x3f___at___00Choreo_parseScene_spec__19(v_x_3421_);
lean_dec(v_x_3421_);
return v_res_3422_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__3(lean_object* v_a_3423_, lean_object* v_a_3424_){
_start:
{
if (lean_obj_tag(v_a_3423_) == 0)
{
lean_object* v___x_3425_; 
v___x_3425_ = l_List_reverse___redArg(v_a_3424_);
return v___x_3425_;
}
else
{
lean_object* v_head_3426_; lean_object* v_tail_3427_; lean_object* v___x_3429_; uint8_t v_isShared_3430_; uint8_t v_isSharedCheck_3439_; 
v_head_3426_ = lean_ctor_get(v_a_3423_, 0);
v_tail_3427_ = lean_ctor_get(v_a_3423_, 1);
v_isSharedCheck_3439_ = !lean_is_exclusive(v_a_3423_);
if (v_isSharedCheck_3439_ == 0)
{
v___x_3429_ = v_a_3423_;
v_isShared_3430_ = v_isSharedCheck_3439_;
goto v_resetjp_3428_;
}
else
{
lean_inc(v_tail_3427_);
lean_inc(v_head_3426_);
lean_dec(v_a_3423_);
v___x_3429_ = lean_box(0);
v_isShared_3430_ = v_isSharedCheck_3439_;
goto v_resetjp_3428_;
}
v_resetjp_3428_:
{
lean_object* v_place_3431_; lean_object* v___x_3432_; uint8_t v___x_3433_; 
v_place_3431_ = lean_ctor_get(v_head_3426_, 1);
v___x_3432_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__0));
v___x_3433_ = lean_string_dec_eq(v_place_3431_, v___x_3432_);
if (v___x_3433_ == 0)
{
lean_del_object(v___x_3429_);
lean_dec(v_head_3426_);
v_a_3423_ = v_tail_3427_;
goto _start;
}
else
{
lean_object* v___x_3436_; 
if (v_isShared_3430_ == 0)
{
lean_ctor_set(v___x_3429_, 1, v_a_3424_);
v___x_3436_ = v___x_3429_;
goto v_reusejp_3435_;
}
else
{
lean_object* v_reuseFailAlloc_3438_; 
v_reuseFailAlloc_3438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3438_, 0, v_head_3426_);
lean_ctor_set(v_reuseFailAlloc_3438_, 1, v_a_3424_);
v___x_3436_ = v_reuseFailAlloc_3438_;
goto v_reusejp_3435_;
}
v_reusejp_3435_:
{
v_a_3423_ = v_tail_3427_;
v_a_3424_ = v___x_3436_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__2(lean_object* v_a_3440_, lean_object* v_a_3441_){
_start:
{
if (lean_obj_tag(v_a_3440_) == 0)
{
lean_object* v___x_3442_; 
v___x_3442_ = l_List_reverse___redArg(v_a_3441_);
return v___x_3442_;
}
else
{
lean_object* v_head_3443_; lean_object* v_tail_3444_; lean_object* v___x_3446_; uint8_t v_isShared_3447_; uint8_t v_isSharedCheck_3460_; 
v_head_3443_ = lean_ctor_get(v_a_3440_, 0);
v_tail_3444_ = lean_ctor_get(v_a_3440_, 1);
v_isSharedCheck_3460_ = !lean_is_exclusive(v_a_3440_);
if (v_isSharedCheck_3460_ == 0)
{
v___x_3446_ = v_a_3440_;
v_isShared_3447_ = v_isSharedCheck_3460_;
goto v_resetjp_3445_;
}
else
{
lean_inc(v_tail_3444_);
lean_inc(v_head_3443_);
lean_dec(v_a_3440_);
v___x_3446_ = lean_box(0);
v_isShared_3447_ = v_isSharedCheck_3460_;
goto v_resetjp_3445_;
}
v_resetjp_3445_:
{
lean_object* v_count_3448_; lean_object* v_place_3449_; lean_object* v___x_3450_; uint8_t v___x_3451_; 
v_count_3448_ = lean_ctor_get(v_head_3443_, 0);
v_place_3449_ = lean_ctor_get(v_head_3443_, 1);
v___x_3450_ = lean_unsigned_to_nat(0u);
v___x_3451_ = lean_nat_dec_lt(v___x_3450_, v_count_3448_);
if (v___x_3451_ == 0)
{
lean_del_object(v___x_3446_);
lean_dec(v_head_3443_);
v_a_3440_ = v_tail_3444_;
goto _start;
}
else
{
lean_object* v___x_3453_; uint8_t v___x_3454_; 
v___x_3453_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__0));
v___x_3454_ = lean_string_dec_eq(v_place_3449_, v___x_3453_);
if (v___x_3454_ == 0)
{
lean_object* v___x_3456_; 
if (v_isShared_3447_ == 0)
{
lean_ctor_set(v___x_3446_, 1, v_a_3441_);
v___x_3456_ = v___x_3446_;
goto v_reusejp_3455_;
}
else
{
lean_object* v_reuseFailAlloc_3458_; 
v_reuseFailAlloc_3458_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3458_, 0, v_head_3443_);
lean_ctor_set(v_reuseFailAlloc_3458_, 1, v_a_3441_);
v___x_3456_ = v_reuseFailAlloc_3458_;
goto v_reusejp_3455_;
}
v_reusejp_3455_:
{
v_a_3440_ = v_tail_3444_;
v_a_3441_ = v___x_3456_;
goto _start;
}
}
else
{
lean_del_object(v___x_3446_);
lean_dec(v_head_3443_);
v_a_3440_ = v_tail_3444_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_parseScene_spec__15(lean_object* v___y_3461_, lean_object* v_x_3462_, lean_object* v_x_3463_){
_start:
{
if (lean_obj_tag(v_x_3463_) == 0)
{
lean_dec(v___y_3461_);
return v_x_3462_;
}
else
{
lean_object* v_head_3464_; lean_object* v_tail_3465_; lean_object* v___x_3467_; uint8_t v_isShared_3468_; uint8_t v_isSharedCheck_3481_; 
v_head_3464_ = lean_ctor_get(v_x_3463_, 0);
v_tail_3465_ = lean_ctor_get(v_x_3463_, 1);
v_isSharedCheck_3481_ = !lean_is_exclusive(v_x_3463_);
if (v_isSharedCheck_3481_ == 0)
{
v___x_3467_ = v_x_3463_;
v_isShared_3468_ = v_isSharedCheck_3481_;
goto v_resetjp_3466_;
}
else
{
lean_inc(v_tail_3465_);
lean_inc(v_head_3464_);
lean_dec(v_x_3463_);
v___x_3467_ = lean_box(0);
v_isShared_3468_ = v_isSharedCheck_3481_;
goto v_resetjp_3466_;
}
v_resetjp_3466_:
{
lean_object* v___y_3470_; lean_object* v_row_3479_; 
v_row_3479_ = lean_ctor_get(v_head_3464_, 2);
lean_inc(v_row_3479_);
lean_dec(v_head_3464_);
if (lean_obj_tag(v_row_3479_) == 0)
{
lean_inc(v___y_3461_);
v___y_3470_ = v___y_3461_;
goto v___jp_3469_;
}
else
{
lean_object* v_val_3480_; 
v_val_3480_ = lean_ctor_get(v_row_3479_, 0);
lean_inc(v_val_3480_);
lean_dec_ref_known(v_row_3479_, 1);
v___y_3470_ = v_val_3480_;
goto v___jp_3469_;
}
v___jp_3469_:
{
uint8_t v___x_3471_; 
v___x_3471_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v___y_3470_, v_x_3462_);
if (v___x_3471_ == 0)
{
lean_object* v___x_3472_; lean_object* v___x_3474_; 
v___x_3472_ = lean_box(0);
if (v_isShared_3468_ == 0)
{
lean_ctor_set(v___x_3467_, 1, v___x_3472_);
lean_ctor_set(v___x_3467_, 0, v___y_3470_);
v___x_3474_ = v___x_3467_;
goto v_reusejp_3473_;
}
else
{
lean_object* v_reuseFailAlloc_3477_; 
v_reuseFailAlloc_3477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3477_, 0, v___y_3470_);
lean_ctor_set(v_reuseFailAlloc_3477_, 1, v___x_3472_);
v___x_3474_ = v_reuseFailAlloc_3477_;
goto v_reusejp_3473_;
}
v_reusejp_3473_:
{
lean_object* v___x_3475_; 
v___x_3475_ = l_List_appendTR___redArg(v_x_3462_, v___x_3474_);
v_x_3462_ = v___x_3475_;
v_x_3463_ = v_tail_3465_;
goto _start;
}
}
else
{
lean_dec(v___y_3470_);
lean_del_object(v___x_3467_);
v_x_3463_ = v_tail_3465_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_parseScene_spec__1(lean_object* v_a_3482_, lean_object* v_a_3483_){
_start:
{
if (lean_obj_tag(v_a_3482_) == 0)
{
lean_object* v___x_3484_; 
v___x_3484_ = lean_array_to_list(v_a_3483_);
return v___x_3484_;
}
else
{
lean_object* v_head_3485_; lean_object* v_tail_3486_; lean_object* v___x_3487_; 
v_head_3485_ = lean_ctor_get(v_a_3482_, 0);
lean_inc(v_head_3485_);
v_tail_3486_ = lean_ctor_get(v_a_3482_, 1);
lean_inc(v_tail_3486_);
lean_dec_ref_known(v_a_3482_, 2);
v___x_3487_ = lp_choreo_Choreo_readClause(v_head_3485_);
if (lean_obj_tag(v___x_3487_) == 0)
{
v_a_3482_ = v_tail_3486_;
goto _start;
}
else
{
lean_object* v_val_3489_; lean_object* v___x_3490_; 
v_val_3489_ = lean_ctor_get(v___x_3487_, 0);
lean_inc(v_val_3489_);
lean_dec_ref_known(v___x_3487_, 1);
v___x_3490_ = lean_array_push(v_a_3483_, v_val_3489_);
v_a_3482_ = v_tail_3486_;
v_a_3483_ = v___x_3490_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__4(uint8_t v___x_3492_, lean_object* v_a_3493_, lean_object* v_a_3494_){
_start:
{
if (lean_obj_tag(v_a_3493_) == 0)
{
lean_object* v___x_3495_; 
v___x_3495_ = l_List_reverse___redArg(v_a_3494_);
return v___x_3495_;
}
else
{
lean_object* v_head_3496_; lean_object* v_tail_3497_; lean_object* v___x_3499_; uint8_t v_isShared_3500_; uint8_t v_isSharedCheck_3510_; 
v_head_3496_ = lean_ctor_get(v_a_3493_, 0);
v_tail_3497_ = lean_ctor_get(v_a_3493_, 1);
v_isSharedCheck_3510_ = !lean_is_exclusive(v_a_3493_);
if (v_isSharedCheck_3510_ == 0)
{
v___x_3499_ = v_a_3493_;
v_isShared_3500_ = v_isSharedCheck_3510_;
goto v_resetjp_3498_;
}
else
{
lean_inc(v_tail_3497_);
lean_inc(v_head_3496_);
lean_dec(v_a_3493_);
v___x_3499_ = lean_box(0);
v_isShared_3500_ = v_isSharedCheck_3510_;
goto v_resetjp_3498_;
}
v_resetjp_3498_:
{
lean_object* v_place_3501_; lean_object* v___x_3502_; uint8_t v___x_3503_; 
v_place_3501_ = lean_ctor_get(v_head_3496_, 1);
v___x_3502_ = ((lean_object*)(lp_choreo_Choreo_readClause___closed__0));
v___x_3503_ = lean_string_dec_eq(v_place_3501_, v___x_3502_);
if (v___x_3503_ == 0)
{
if (v___x_3492_ == 0)
{
lean_del_object(v___x_3499_);
lean_dec(v_head_3496_);
v_a_3493_ = v_tail_3497_;
goto _start;
}
else
{
lean_object* v___x_3506_; 
if (v_isShared_3500_ == 0)
{
lean_ctor_set(v___x_3499_, 1, v_a_3494_);
v___x_3506_ = v___x_3499_;
goto v_reusejp_3505_;
}
else
{
lean_object* v_reuseFailAlloc_3508_; 
v_reuseFailAlloc_3508_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3508_, 0, v_head_3496_);
lean_ctor_set(v_reuseFailAlloc_3508_, 1, v_a_3494_);
v___x_3506_ = v_reuseFailAlloc_3508_;
goto v_reusejp_3505_;
}
v_reusejp_3505_:
{
v_a_3493_ = v_tail_3497_;
v_a_3494_ = v___x_3506_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_3499_);
lean_dec(v_head_3496_);
v_a_3493_ = v_tail_3497_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__4___boxed(lean_object* v___x_3511_, lean_object* v_a_3512_, lean_object* v_a_3513_){
_start:
{
uint8_t v___x_2978__boxed_3514_; lean_object* v_res_3515_; 
v___x_2978__boxed_3514_ = lean_unbox(v___x_3511_);
v_res_3515_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__4(v___x_2978__boxed_3514_, v_a_3512_, v_a_3513_);
return v_res_3515_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__0(lean_object* v___y_3516_, lean_object* v_a_3517_, lean_object* v_a_3518_){
_start:
{
if (lean_obj_tag(v_a_3517_) == 0)
{
lean_object* v___x_3519_; 
lean_dec(v___y_3516_);
v___x_3519_ = l_List_reverse___redArg(v_a_3518_);
return v___x_3519_;
}
else
{
lean_object* v_head_3520_; lean_object* v_tail_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3532_; 
v_head_3520_ = lean_ctor_get(v_a_3517_, 0);
v_tail_3521_ = lean_ctor_get(v_a_3517_, 1);
v_isSharedCheck_3532_ = !lean_is_exclusive(v_a_3517_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3523_ = v_a_3517_;
v_isShared_3524_ = v_isSharedCheck_3532_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_tail_3521_);
lean_inc(v_head_3520_);
lean_dec(v_a_3517_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3532_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3529_; 
v___x_3525_ = lp_choreo_Choreo_colX(v_head_3520_);
lean_inc(v___y_3516_);
v___x_3526_ = lp_choreo_Choreo_rowY(v___y_3516_);
v___x_3527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3525_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 1, v_a_3518_);
lean_ctor_set(v___x_3523_, 0, v___x_3527_);
v___x_3529_ = v___x_3523_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3527_);
lean_ctor_set(v_reuseFailAlloc_3531_, 1, v_a_3518_);
v___x_3529_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
v_a_3517_ = v_tail_3521_;
v_a_3518_ = v___x_3529_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__6(lean_object* v_a_3533_, lean_object* v_a_3534_){
_start:
{
if (lean_obj_tag(v_a_3533_) == 0)
{
lean_object* v___x_3535_; 
v___x_3535_ = lean_array_to_list(v_a_3534_);
return v___x_3535_;
}
else
{
lean_object* v_head_3536_; lean_object* v_tail_3537_; lean_object* v_count_3538_; lean_object* v_row_3539_; lean_object* v___y_3541_; 
v_head_3536_ = lean_ctor_get(v_a_3533_, 0);
lean_inc(v_head_3536_);
v_tail_3537_ = lean_ctor_get(v_a_3533_, 1);
lean_inc(v_tail_3537_);
lean_dec_ref_known(v_a_3533_, 2);
v_count_3538_ = lean_ctor_get(v_head_3536_, 0);
lean_inc(v_count_3538_);
v_row_3539_ = lean_ctor_get(v_head_3536_, 2);
lean_inc(v_row_3539_);
lean_dec(v_head_3536_);
if (lean_obj_tag(v_row_3539_) == 0)
{
lean_object* v___x_3547_; 
v___x_3547_ = lean_unsigned_to_nat(1u);
v___y_3541_ = v___x_3547_;
goto v___jp_3540_;
}
else
{
lean_object* v_val_3548_; 
v_val_3548_ = lean_ctor_get(v_row_3539_, 0);
lean_inc(v_val_3548_);
lean_dec_ref_known(v_row_3539_, 1);
v___y_3541_ = v_val_3548_;
goto v___jp_3540_;
}
v___jp_3540_:
{
lean_object* v___x_3542_; lean_object* v___x_3543_; lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3542_ = lp_choreo_Choreo_spreadCols(v_count_3538_);
lean_dec(v_count_3538_);
v___x_3543_ = lean_box(0);
v___x_3544_ = lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__0(v___y_3541_, v___x_3542_, v___x_3543_);
v___x_3545_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3534_, v___x_3544_);
v_a_3533_ = v_tail_3537_;
v_a_3534_ = v___x_3545_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_parseScene(lean_object* v_text_3551_){
_start:
{
lean_object* v___x_3552_; uint8_t v___x_3553_; 
lean_inc_ref(v_text_3551_);
v___x_3552_ = lp_choreo_Choreo_tokenize(v_text_3551_);
v___x_3553_ = lp_choreo_Choreo_looksLikeScene(v___x_3552_);
lean_dec(v___x_3552_);
if (v___x_3553_ == 0)
{
lean_object* v___x_3554_; 
lean_dec_ref(v_text_3551_);
v___x_3554_ = lean_box(0);
return v___x_3554_;
}
else
{
lean_object* v___x_3555_; lean_object* v___x_3556_; lean_object* v___x_3557_; lean_object* v_clauses_3558_; lean_object* v___x_3559_; lean_object* v_groups_3560_; lean_object* v___y_3562_; lean_object* v___x_3584_; lean_object* v___x_3585_; 
v___x_3555_ = lp_choreo_Choreo_splitClauses(v_text_3551_);
v___x_3556_ = lean_unsigned_to_nat(0u);
v___x_3557_ = ((lean_object*)(lp_choreo_Choreo_parseScene___closed__0));
v_clauses_3558_ = lp_choreo_List_filterMapTR_go___at___00Choreo_parseScene_spec__1(v___x_3555_, v___x_3557_);
v___x_3559_ = lean_box(0);
lean_inc(v_clauses_3558_);
v_groups_3560_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__2(v_clauses_3558_, v___x_3559_);
v___x_3584_ = l_List_reverse___redArg(v_clauses_3558_);
v___x_3585_ = lp_choreo_List_findSome_x3f___at___00Choreo_parseScene_spec__19(v___x_3584_);
lean_dec(v___x_3584_);
if (lean_obj_tag(v___x_3585_) == 0)
{
lean_object* v___x_3586_; 
v___x_3586_ = lean_unsigned_to_nat(3u);
v___y_3562_ = v___x_3586_;
goto v___jp_3561_;
}
else
{
lean_object* v_val_3587_; 
v_val_3587_ = lean_ctor_get(v___x_3585_, 0);
lean_inc(v_val_3587_);
lean_dec_ref_known(v___x_3585_, 1);
v___y_3562_ = v_val_3587_;
goto v___jp_3561_;
}
v___jp_3561_:
{
uint8_t v___x_3563_; 
v___x_3563_ = l_List_isEmpty___redArg(v_groups_3560_);
if (v___x_3563_ == 0)
{
lean_object* v_onGroups_3564_; lean_object* v_inGroups_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; uint8_t v___x_3568_; 
lean_inc_n(v_groups_3560_, 2);
v_onGroups_3564_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__3(v_groups_3560_, v___x_3559_);
v_inGroups_3565_ = lp_choreo_List_filterTR_loop___at___00Choreo_parseScene_spec__4(v___x_3553_, v_groups_3560_, v___x_3559_);
v___x_3566_ = lean_unsigned_to_nat(16u);
v___x_3567_ = lp_choreo_List_foldl___at___00Choreo_parseScene_spec__5(v___x_3556_, v_groups_3560_);
lean_dec(v_groups_3560_);
v___x_3568_ = lean_nat_dec_lt(v___x_3566_, v___x_3567_);
lean_dec(v___x_3567_);
if (v___x_3568_ == 0)
{
lean_object* v_onPlaced_3569_; lean_object* v_targets_3570_; lean_object* v_entering_3571_; lean_object* v___x_3572_; lean_object* v_f0_3573_; lean_object* v___x_3574_; lean_object* v_f1_3575_; lean_object* v___x_3576_; lean_object* v_frames_3577_; lean_object* v___x_3578_; lean_object* v___x_3579_; lean_object* v___x_3580_; lean_object* v___x_3581_; 
v_onPlaced_3569_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__6(v_onGroups_3564_, v___x_3557_);
lean_inc(v_inGroups_3565_);
lean_inc(v___y_3562_);
v_targets_3570_ = lp_choreo_List_foldl___at___00Choreo_parseScene_spec__15(v___y_3562_, v___x_3559_, v_inGroups_3565_);
lean_inc_n(v_onPlaced_3569_, 2);
v_entering_3571_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_parseScene_spec__16(v___y_3562_, v_inGroups_3565_, v_onPlaced_3569_, v___x_3553_, v_targets_3570_, v___x_3557_);
lean_inc(v_entering_3571_);
v___x_3572_ = lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__17(v_entering_3571_, v___x_3559_);
v_f0_3573_ = l_List_appendTR___redArg(v_onPlaced_3569_, v___x_3572_);
v___x_3574_ = lp_choreo_List_mapTR_loop___at___00Choreo_parseScene_spec__18(v_entering_3571_, v___x_3559_);
v_f1_3575_ = l_List_appendTR___redArg(v_onPlaced_3569_, v___x_3574_);
v___x_3576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3576_, 0, v_f1_3575_);
lean_ctor_set(v___x_3576_, 1, v___x_3559_);
v_frames_3577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_frames_3577_, 0, v_f0_3573_);
lean_ctor_set(v_frames_3577_, 1, v___x_3576_);
lean_inc_ref(v_frames_3577_);
v___x_3578_ = lp_choreo_Choreo_detectRules(v_frames_3577_);
v___x_3579_ = ((lean_object*)(lp_choreo_Choreo_nameList___closed__0));
v___x_3580_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3580_, 0, v_frames_3577_);
lean_ctor_set(v___x_3580_, 1, v___x_3578_);
lean_ctor_set(v___x_3580_, 2, v___x_3559_);
lean_ctor_set(v___x_3580_, 3, v___x_3559_);
lean_ctor_set(v___x_3580_, 4, v___x_3556_);
lean_ctor_set(v___x_3580_, 5, v___x_3559_);
lean_ctor_set(v___x_3580_, 6, v___x_3579_);
lean_ctor_set(v___x_3580_, 7, v___x_3559_);
lean_ctor_set(v___x_3580_, 8, v___x_3559_);
v___x_3581_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3581_, 0, v___x_3580_);
return v___x_3581_;
}
else
{
lean_object* v___x_3582_; 
lean_dec(v_inGroups_3565_);
lean_dec(v_onGroups_3564_);
lean_dec(v___y_3562_);
v___x_3582_ = lean_box(0);
return v___x_3582_;
}
}
else
{
lean_object* v___x_3583_; 
lean_dec(v___y_3562_);
lean_dec(v_groups_3560_);
v___x_3583_ = lean_box(0);
return v___x_3583_;
}
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Planner(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Scene(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Planner(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_Choreo_wingStep = _init_lp_choreo_Choreo_wingStep();
lean_mark_persistent(lp_choreo_Choreo_wingStep);
lp_choreo_Choreo_wingStart = _init_lp_choreo_Choreo_wingStart();
lean_mark_persistent(lp_choreo_Choreo_wingStart);
lp_choreo_Choreo_sceneEnvelope = _init_lp_choreo_Choreo_sceneEnvelope();
lean_mark_persistent(lp_choreo_Choreo_sceneEnvelope);
lp_choreo_Choreo_slWingRect = _init_lp_choreo_Choreo_slWingRect();
lean_mark_persistent(lp_choreo_Choreo_slWingRect);
lp_choreo_Choreo_srWingRect = _init_lp_choreo_Choreo_srWingRect();
lean_mark_persistent(lp_choreo_Choreo_srWingRect);
lp_choreo_Choreo_sceneBeats = _init_lp_choreo_Choreo_sceneBeats();
lean_mark_persistent(lp_choreo_Choreo_sceneBeats);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
