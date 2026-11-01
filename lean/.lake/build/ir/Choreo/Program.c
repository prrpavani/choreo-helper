// Lean compiler output
// Module: Choreo.Program
// Imports: public import Init public meta import Init public import Choreo.Planner public import Choreo.Language public import Choreo.Composition public import Lean.Data.Json
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
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* l_Lean_Json_getInt_x3f(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* l_Lean_Json_getBool_x3f(lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
double lean_float_of_nat(lean_object*);
double lean_float_add(double, double);
double lean_float_mul(double, double);
double lean_float_div(double, double);
double cos(double);
double lean_float_negate(double);
uint64_t lean_float_to_int64(double);
lean_object* lean_int64_to_int_sint(uint64_t);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
double sin(double);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
extern lean_object* lp_choreo_Choreo_instInhabitedPt_default;
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Nat_cast___at___00Dyadic_toRat_spec__0(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_State_at(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Op_next(lean_object*, lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
extern lean_object* lp_choreo_Choreo_centre;
lean_object* lp_choreo_Choreo_distSq(lean_object*, lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_improveAssign(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lp_choreo_Choreo_stepMoves(lean_object*);
lean_object* lp_choreo_Choreo_stepTitle(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lp_choreo_Choreo_Shape_formation(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Formation_slots(lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileEnter_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_ringPoints(lean_object*, lean_object*, lean_object*, double);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_wayDrafts_spec__3(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_gapSq_x27(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Draft_toPhase(lean_object*, lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Op_enabled(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
uint8_t lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildPlanOnce_spec__7(lean_object*, lean_object*);
extern lean_object* lp_choreo_Choreo_vmaxMM;
lean_object* l_List_head_x3f___redArg(lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_at(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_at___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0 = (const lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2;
static const lean_string_object lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "circle"};
static const lean_object* lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3 = (const lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3_value;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__4;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedSurfaceOp_default;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedSurfaceOp;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0;
static const lean_string_object lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rows"};
static const lean_object* lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1 = (const lean_object*)&lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1_value;
static lean_once_cell_t lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedProgramSpec_default;
LEAN_EXPORT lean_object* lp_choreo_Choreo_instInhabitedProgramSpec;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__1_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__1_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_evenLanes___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_evenLanes___closed__0;
static lean_once_cell_t lp_choreo_Choreo_evenLanes___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_evenLanes___closed__1;
static lean_once_cell_t lp_choreo_Choreo_evenLanes___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_evenLanes___closed__2;
static lean_once_cell_t lp_choreo_Choreo_evenLanes___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_evenLanes___closed__3;
LEAN_EXPORT lean_object* lp_choreo_Choreo_evenLanes(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_evenLanes___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__0;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__1;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__2;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__4;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__5;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_arcPlaces(lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitPlaces(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitPlaces___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_mirroredPlaces(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_staggeredLines___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_staggeredLines___closed__0;
static lean_once_cell_t lp_choreo_Choreo_staggeredLines___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_staggeredLines___closed__1;
static lean_once_cell_t lp_choreo_Choreo_staggeredLines___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_staggeredLines___closed__2;
static lean_once_cell_t lp_choreo_Choreo_staggeredLines___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_staggeredLines___closed__3;
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "grid"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__0 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__0_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "line"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__1 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__1_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "diagonal"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__2 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__2_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "wide circle"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__3 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__3_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rings"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__4 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__4_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "vee"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__5 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__5_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "diamond"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__6 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__6_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "windows"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__7 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__7_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "square"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__8 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__8_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "cross"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__9 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__9_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "spiral"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__10 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__10_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "lanes"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__11 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__11_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "split"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__12 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__12_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arc"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__13 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__13_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "symmetric"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__14 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__14_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "staggered"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__15 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__15_value;
static lean_once_cell_t lp_choreo_Choreo_namedPlaces___closed__16_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_namedPlaces___closed__16;
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith___boxed(lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_choreo_Choreo_instInhabitedCStep___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instInhabitedCStep___closed__0 = (const lean_object*)&lp_choreo_Choreo_instInhabitedCStep___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_instInhabitedCStep___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instInhabitedCStep___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instInhabitedCStep___closed__1 = (const lean_object*)&lp_choreo_Choreo_instInhabitedCStep___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_instInhabitedCStep___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*11 + 0, .m_other = 11, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value),((lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value),((lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value),((lean_object*)&lp_choreo_Choreo_instInhabitedCStep___closed__1_value),((lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value),((lean_object*)&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_instInhabitedCStep___closed__2 = (const lean_object*)&lp_choreo_Choreo_instInhabitedCStep___closed__2_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_instInhabitedCStep = (const lean_object*)&lp_choreo_Choreo_instInhabitedCStep___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Rotate "};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__0 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__0_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "°"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__1 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__1_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rotate"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__2 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__2_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Rotate"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__3 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__3_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Everyone is at least "};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = " cm apart to begin with."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__5 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__5_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 107, .m_capacity = 107, .m_length = 106, .m_data = "Every gap stays exactly as it was, at every moment of the turn, and each dancer stays on their own circle."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__6 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__6_value;
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hold"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__0 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__0_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " cm apart."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__1 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__1_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "They dance in unison, so every gap stays exactly as it was."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__2 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__6(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_compileOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Move to "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__0 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__0_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "form"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__1 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__1_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 125, .m_capacity = 125, .m_length = 124, .m_data = "Dancers are on their own paths, so every pair must stay apart the whole way. Lean works out each pair's exact closest point."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__2 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__2_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Everyone stands on their place in the "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__3 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__3_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__4 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__4_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "Everyone stands exactly on one circle."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__5 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__5_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "move"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__6 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__6_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "translate"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__7 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__7_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "exchange"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__8 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__8_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "wait"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__9 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__9_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__10 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__10_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mirror"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__11 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__11_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scale"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__12 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__12_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "parallel"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__13 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__13_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Two groups move at once"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__14 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__14_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Parallel"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__15 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__15_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "A line keeps the two groups apart: everyone on one side, everyone else at least "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__16 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__16_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " cm past it."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__17 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__17_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Each group has formed its shape on its own side, on the same count."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__18 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__18_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Scale"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__19 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__19_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "burst"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__20 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__20_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 90, .m_capacity = 90, .m_length = 89, .m_data = "Every pair must stay apart the whole way. Lean works out each pair's exact closest point."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__21 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__21_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Every gap has grown or shrunk by the same factor."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__22 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__22_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Mirror"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__23 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__23_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "flip"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__24 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__24_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "Dancers crossing to the other side each have their own lane: at least "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__25 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__25_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = " cm upstage or downstage of anyone crossing the other way."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__26 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__26_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "Everyone stands at the mirror image of where they began. Every gap in the formation is what it was."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__27 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__27_value;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__28;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__29;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__30_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__30;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Hold"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__31 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__31_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Nobody moves."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__32 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__32_value;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__33;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__34_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__34;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Exchange groups"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__35 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__35_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "swap"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__36 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__36_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Two groups in separate lanes: every member of one is at least "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__37 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__37_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = " cm upstage or downstage of every member of the other."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__38 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__38_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "The groups have traded sides, still in their lanes. Nobody meets anybody on the way."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__39 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__39_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Move everyone together"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__40 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__40_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Translate"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__41 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__41_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Every gap stays exactly as it was, at every moment."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__42 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__42_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__43_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "trade"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__43 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__43_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_Pt_mapT___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "half"};
static const lean_object* lp_choreo_Choreo_Pt_mapT___closed__0 = (const lean_object*)&lp_choreo_Choreo_Pt_mapT___closed__0_value;
static const lean_string_object lp_choreo_Choreo_Pt_mapT___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "upstage"};
static const lean_object* lp_choreo_Choreo_Pt_mapT___closed__1 = (const lean_object*)&lp_choreo_Choreo_Pt_mapT___closed__1_value;
static lean_once_cell_t lp_choreo_Choreo_Pt_mapT___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Pt_mapT___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___redArg___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", reversed"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_whyNot_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Pred_whyNot_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = "The two groups are not in separate lanes"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__0 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__0_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__1 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__1_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = " are in different groups but only "};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__2 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__2_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = " cm apart front to back, so they don't have separate lanes"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__3 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__3_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = " is on the wrong side of the line between the groups"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__4 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__4_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = " is too close to the line between the groups"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__5 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__5_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "The groups are not on their own sides"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__6 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__6_value;
static const lean_array_object lp_choreo_Choreo_Pred_whyNot___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__7 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__7_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "Dancers start too close"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__8 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__8_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " start closer than "};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__9 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__9_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " cm"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__10 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__10_value;
static const lean_string_object lp_choreo_Choreo_Pred_whyNot___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 56, .m_capacity = 56, .m_length = 55, .m_data = "The state before this step doesn't meet its requirement"};
static const lean_object* lp_choreo_Choreo_Pred_whyNot___closed__11 = (const lean_object*)&lp_choreo_Choreo_Pred_whyNot___closed__11_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_buildProgram_allOk(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram_allOk___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__5(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "walk"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__8(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildProgram_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_buildProgram___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Cinematic"};
static const lean_object* lp_choreo_Choreo_buildProgram___redArg___closed__0 = (const lean_object*)&lp_choreo_Choreo_buildProgram___redArg___closed__0_value;
static const lean_string_object lp_choreo_Choreo_buildProgram___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reverse"};
static const lean_object* lp_choreo_Choreo_buildProgram___redArg___closed__1 = (const lean_object*)&lp_choreo_Choreo_buildProgram___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___redArg(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_jsonState___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_jsonState___closed__0 = (const lean_object*)&lp_choreo_Choreo_jsonState___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_jsonState(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "index"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_readOps_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1___boxed(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_readOps___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_readOps___closed__0 = (const lean_object*)&lp_choreo_Choreo_readOps___closed__0_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "section"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "repeat"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "shape"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "counts"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "quarters"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "leftShape"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "rightShape"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dx"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dy"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "num"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "den"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "places"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ccw"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "times"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15_value;
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "ops"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16_value;
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0___boxed(lean_object*, lean_object*);
static const lean_array_object lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__0 = (const lean_object*)&lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__0_value;
static const lean_ctor_object lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 4}, .m_objs = {((lean_object*)&lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__0_value)}};
static const lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__1 = (const lean_object*)&lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__1_value;
static const lean_string_object lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__2 = (const lean_object*)&lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_readProgram___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "transform"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__0 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__0_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "program"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__1 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__1_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "startPlaces"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__2 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__2_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "start"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__3 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__3_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "genre"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__4 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__4_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gap"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__5 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__5_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bpm"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__6 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__6_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__7 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__7_value;
static const lean_ctor_object lp_choreo_Choreo_readProgram___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_readProgram___closed__8 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__8_value;
static const lean_string_object lp_choreo_Choreo_readProgram___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "sections"};
static const lean_object* lp_choreo_Choreo_readProgram___closed__9 = (const lean_object*)&lp_choreo_Choreo_readProgram___closed__9_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_readProgram(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_at(lean_object* v_s_1_, lean_object* v_i_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_4_ = l_List_getD___redArg(v_s_1_, v_i_2_, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_at___boxed(lean_object* v_s_5_, lean_object* v_i_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = lp_choreo_List_at(v_s_5_, v_i_6_);
lean_dec(v_s_5_);
return v_res_7_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1(void){
_start:
{
lean_object* v___x_9_; lean_object* v___x_10_; 
v___x_9_ = lean_unsigned_to_nat(0u);
v___x_10_ = lean_nat_to_int(v___x_9_);
return v___x_10_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2(void){
_start:
{
lean_object* v___x_11_; lean_object* v___x_12_; 
v___x_11_ = lean_unsigned_to_nat(1u);
v___x_12_ = lean_nat_to_int(v___x_11_);
return v___x_12_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__4(void){
_start:
{
lean_object* v___x_14_; lean_object* v___x_15_; lean_object* v___x_16_; lean_object* v___x_17_; lean_object* v___x_18_; uint8_t v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v___x_14_ = lean_unsigned_to_nat(0u);
v___x_15_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_16_ = lean_box(0);
v___x_17_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_18_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_19_ = 1;
v___x_20_ = lean_unsigned_to_nat(1u);
v___x_21_ = lean_unsigned_to_nat(8u);
v___x_22_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___x_23_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v___x_23_, 0, v___x_22_);
lean_ctor_set(v___x_23_, 1, v___x_22_);
lean_ctor_set(v___x_23_, 2, v___x_22_);
lean_ctor_set(v___x_23_, 3, v___x_22_);
lean_ctor_set(v___x_23_, 4, v___x_21_);
lean_ctor_set(v___x_23_, 5, v___x_20_);
lean_ctor_set(v___x_23_, 6, v___x_18_);
lean_ctor_set(v___x_23_, 7, v___x_18_);
lean_ctor_set(v___x_23_, 8, v___x_17_);
lean_ctor_set(v___x_23_, 9, v___x_17_);
lean_ctor_set(v___x_23_, 10, v___x_22_);
lean_ctor_set(v___x_23_, 11, v___x_16_);
lean_ctor_set(v___x_23_, 12, v___x_18_);
lean_ctor_set(v___x_23_, 13, v___x_15_);
lean_ctor_set(v___x_23_, 14, v___x_15_);
lean_ctor_set(v___x_23_, 15, v___x_14_);
lean_ctor_set_uint8(v___x_23_, sizeof(void*)*16, v___x_19_);
return v___x_23_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default(void){
_start:
{
lean_object* v___x_24_; 
v___x_24_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__4, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__4_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__4);
return v___x_24_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedSurfaceOp(void){
_start:
{
lean_object* v___x_25_; 
v___x_25_ = lp_choreo_Choreo_instInhabitedSurfaceOp_default;
return v___x_25_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0(void){
_start:
{
lean_object* v___x_26_; lean_object* v___x_27_; 
v___x_26_ = lean_unsigned_to_nat(600u);
v___x_27_ = lean_nat_to_int(v___x_26_);
return v___x_27_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__2(void){
_start:
{
lean_object* v___x_29_; lean_object* v___x_30_; lean_object* v___x_31_; lean_object* v___x_32_; lean_object* v___x_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; 
v___x_29_ = lean_box(0);
v___x_30_ = lean_box(0);
v___x_31_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_32_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0, &lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0);
v___x_33_ = lean_unsigned_to_nat(120u);
v___x_34_ = lean_unsigned_to_nat(8u);
v___x_35_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___x_36_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_36_, 0, v___x_35_);
lean_ctor_set(v___x_36_, 1, v___x_34_);
lean_ctor_set(v___x_36_, 2, v___x_33_);
lean_ctor_set(v___x_36_, 3, v___x_32_);
lean_ctor_set(v___x_36_, 4, v___x_35_);
lean_ctor_set(v___x_36_, 5, v___x_31_);
lean_ctor_set(v___x_36_, 6, v___x_30_);
lean_ctor_set(v___x_36_, 7, v___x_29_);
lean_ctor_set(v___x_36_, 8, v___x_35_);
return v___x_36_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProgramSpec_default(void){
_start:
{
lean_object* v___x_37_; 
v___x_37_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__2, &lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__2);
return v___x_37_;
}
}
static lean_object* _init_lp_choreo_Choreo_instInhabitedProgramSpec(void){
_start:
{
lean_object* v___x_38_; 
v___x_38_ = lp_choreo_Choreo_instInhabitedProgramSpec_default;
return v___x_38_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_39_; lean_object* v___x_40_; 
v___x_39_ = lean_unsigned_to_nat(2u);
v___x_40_ = lean_nat_to_int(v___x_39_);
return v___x_40_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_41_; lean_object* v___x_42_; 
v___x_41_ = lean_unsigned_to_nat(3000u);
v___x_42_ = lean_nat_to_int(v___x_41_);
return v___x_42_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_43_; lean_object* v___x_44_; 
v___x_43_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_44_ = lean_int_neg(v___x_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0(lean_object* v___y_45_, lean_object* v_y0_46_, lean_object* v_a_47_, lean_object* v_a_48_){
_start:
{
if (lean_obj_tag(v_a_47_) == 0)
{
lean_object* v___x_49_; 
v___x_49_ = l_List_reverse___redArg(v_a_48_);
return v___x_49_;
}
else
{
lean_object* v_head_50_; lean_object* v_tail_51_; lean_object* v___x_53_; uint8_t v_isShared_54_; uint8_t v_isSharedCheck_66_; 
v_head_50_ = lean_ctor_get(v_a_47_, 0);
v_tail_51_ = lean_ctor_get(v_a_47_, 1);
v_isSharedCheck_66_ = !lean_is_exclusive(v_a_47_);
if (v_isSharedCheck_66_ == 0)
{
v___x_53_ = v_a_47_;
v_isShared_54_ = v_isSharedCheck_66_;
goto v_resetjp_52_;
}
else
{
lean_inc(v_tail_51_);
lean_inc(v_head_50_);
lean_dec(v_a_47_);
v___x_53_ = lean_box(0);
v_isShared_54_ = v_isSharedCheck_66_;
goto v_resetjp_52_;
}
v_resetjp_52_:
{
lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; lean_object* v___x_58_; lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_63_; 
v___x_55_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_56_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2);
v___x_57_ = lean_nat_to_int(v_head_50_);
v___x_58_ = lean_int_mul(v___x_55_, v___x_57_);
lean_dec(v___x_57_);
v___x_59_ = lean_int_mul(v___y_45_, v___x_58_);
lean_dec(v___x_58_);
v___x_60_ = lean_int_add(v_y0_46_, v___x_59_);
lean_dec(v___x_59_);
v___x_61_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_61_, 0, v___x_56_);
lean_ctor_set(v___x_61_, 1, v___x_60_);
if (v_isShared_54_ == 0)
{
lean_ctor_set(v___x_53_, 1, v_a_48_);
lean_ctor_set(v___x_53_, 0, v___x_61_);
v___x_63_ = v___x_53_;
goto v_reusejp_62_;
}
else
{
lean_object* v_reuseFailAlloc_65_; 
v_reuseFailAlloc_65_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_65_, 0, v___x_61_);
lean_ctor_set(v_reuseFailAlloc_65_, 1, v_a_48_);
v___x_63_ = v_reuseFailAlloc_65_;
goto v_reusejp_62_;
}
v_reusejp_62_:
{
v_a_47_ = v_tail_51_;
v_a_48_ = v___x_63_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___boxed(lean_object* v___y_67_, lean_object* v_y0_68_, lean_object* v_a_69_, lean_object* v_a_70_){
_start:
{
lean_object* v_res_71_; 
v_res_71_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0(v___y_67_, v_y0_68_, v_a_69_, v_a_70_);
lean_dec(v_y0_68_);
lean_dec(v___y_67_);
return v_res_71_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__0(lean_object* v___y_72_, lean_object* v_y0_73_, lean_object* v_a_74_, lean_object* v_a_75_){
_start:
{
if (lean_obj_tag(v_a_74_) == 0)
{
lean_object* v___x_76_; 
v___x_76_ = l_List_reverse___redArg(v_a_75_);
return v___x_76_;
}
else
{
lean_object* v_head_77_; lean_object* v_tail_78_; lean_object* v___x_80_; uint8_t v_isShared_81_; uint8_t v_isSharedCheck_93_; 
v_head_77_ = lean_ctor_get(v_a_74_, 0);
v_tail_78_ = lean_ctor_get(v_a_74_, 1);
v_isSharedCheck_93_ = !lean_is_exclusive(v_a_74_);
if (v_isSharedCheck_93_ == 0)
{
v___x_80_ = v_a_74_;
v_isShared_81_ = v_isSharedCheck_93_;
goto v_resetjp_79_;
}
else
{
lean_inc(v_tail_78_);
lean_inc(v_head_77_);
lean_dec(v_a_74_);
v___x_80_ = lean_box(0);
v_isShared_81_ = v_isSharedCheck_93_;
goto v_resetjp_79_;
}
v_resetjp_79_:
{
lean_object* v___x_82_; lean_object* v___x_83_; lean_object* v___x_84_; lean_object* v___x_85_; lean_object* v___x_86_; lean_object* v___x_87_; lean_object* v___x_88_; lean_object* v___x_90_; 
v___x_82_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_83_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__2);
v___x_84_ = lean_nat_to_int(v_head_77_);
v___x_85_ = lean_int_mul(v___x_82_, v___x_84_);
lean_dec(v___x_84_);
v___x_86_ = lean_int_mul(v___y_72_, v___x_85_);
lean_dec(v___x_85_);
v___x_87_ = lean_int_add(v_y0_73_, v___x_86_);
lean_dec(v___x_86_);
v___x_88_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_88_, 0, v___x_83_);
lean_ctor_set(v___x_88_, 1, v___x_87_);
if (v_isShared_81_ == 0)
{
lean_ctor_set(v___x_80_, 1, v_a_75_);
lean_ctor_set(v___x_80_, 0, v___x_88_);
v___x_90_ = v___x_80_;
goto v_reusejp_89_;
}
else
{
lean_object* v_reuseFailAlloc_92_; 
v_reuseFailAlloc_92_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_92_, 0, v___x_88_);
lean_ctor_set(v_reuseFailAlloc_92_, 1, v_a_75_);
v___x_90_ = v_reuseFailAlloc_92_;
goto v_reusejp_89_;
}
v_reusejp_89_:
{
lean_object* v___x_91_; 
v___x_91_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0(v___y_72_, v_y0_73_, v_tail_78_, v___x_90_);
return v___x_91_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__0___boxed(lean_object* v___y_94_, lean_object* v_y0_95_, lean_object* v_a_96_, lean_object* v_a_97_){
_start:
{
lean_object* v_res_98_; 
v_res_98_ = lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__0(v___y_94_, v_y0_95_, v_a_96_, v_a_97_);
lean_dec(v_y0_95_);
lean_dec(v___y_94_);
return v_res_98_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__1_spec__2(lean_object* v___y_99_, lean_object* v_y0_100_, lean_object* v_a_101_, lean_object* v_a_102_){
_start:
{
if (lean_obj_tag(v_a_101_) == 0)
{
lean_object* v___x_103_; 
v___x_103_ = l_List_reverse___redArg(v_a_102_);
return v___x_103_;
}
else
{
lean_object* v_head_104_; lean_object* v_tail_105_; lean_object* v___x_107_; uint8_t v_isShared_108_; uint8_t v_isSharedCheck_122_; 
v_head_104_ = lean_ctor_get(v_a_101_, 0);
v_tail_105_ = lean_ctor_get(v_a_101_, 1);
v_isSharedCheck_122_ = !lean_is_exclusive(v_a_101_);
if (v_isSharedCheck_122_ == 0)
{
v___x_107_ = v_a_101_;
v_isShared_108_ = v_isSharedCheck_122_;
goto v_resetjp_106_;
}
else
{
lean_inc(v_tail_105_);
lean_inc(v_head_104_);
lean_dec(v_a_101_);
v___x_107_ = lean_box(0);
v_isShared_108_ = v_isSharedCheck_122_;
goto v_resetjp_106_;
}
v_resetjp_106_:
{
lean_object* v___x_109_; lean_object* v___x_110_; lean_object* v___x_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_119_; 
v___x_109_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_110_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_111_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_112_ = lean_nat_to_int(v_head_104_);
v___x_113_ = lean_int_mul(v___x_109_, v___x_112_);
lean_dec(v___x_112_);
v___x_114_ = lean_int_add(v___x_113_, v___x_110_);
lean_dec(v___x_113_);
v___x_115_ = lean_int_mul(v___y_99_, v___x_114_);
lean_dec(v___x_114_);
v___x_116_ = lean_int_add(v_y0_100_, v___x_115_);
lean_dec(v___x_115_);
v___x_117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_117_, 0, v___x_111_);
lean_ctor_set(v___x_117_, 1, v___x_116_);
if (v_isShared_108_ == 0)
{
lean_ctor_set(v___x_107_, 1, v_a_102_);
lean_ctor_set(v___x_107_, 0, v___x_117_);
v___x_119_ = v___x_107_;
goto v_reusejp_118_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v___x_117_);
lean_ctor_set(v_reuseFailAlloc_121_, 1, v_a_102_);
v___x_119_ = v_reuseFailAlloc_121_;
goto v_reusejp_118_;
}
v_reusejp_118_:
{
v_a_101_ = v_tail_105_;
v_a_102_ = v___x_119_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__1_spec__2___boxed(lean_object* v___y_123_, lean_object* v_y0_124_, lean_object* v_a_125_, lean_object* v_a_126_){
_start:
{
lean_object* v_res_127_; 
v_res_127_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__1_spec__2(v___y_123_, v_y0_124_, v_a_125_, v_a_126_);
lean_dec(v_y0_124_);
lean_dec(v___y_123_);
return v_res_127_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__1(lean_object* v___y_128_, lean_object* v_y0_129_, lean_object* v_a_130_, lean_object* v_a_131_){
_start:
{
if (lean_obj_tag(v_a_130_) == 0)
{
lean_object* v___x_132_; 
v___x_132_ = l_List_reverse___redArg(v_a_131_);
return v___x_132_;
}
else
{
lean_object* v_head_133_; lean_object* v_tail_134_; lean_object* v___x_136_; uint8_t v_isShared_137_; uint8_t v_isSharedCheck_151_; 
v_head_133_ = lean_ctor_get(v_a_130_, 0);
v_tail_134_ = lean_ctor_get(v_a_130_, 1);
v_isSharedCheck_151_ = !lean_is_exclusive(v_a_130_);
if (v_isSharedCheck_151_ == 0)
{
v___x_136_ = v_a_130_;
v_isShared_137_ = v_isSharedCheck_151_;
goto v_resetjp_135_;
}
else
{
lean_inc(v_tail_134_);
lean_inc(v_head_133_);
lean_dec(v_a_130_);
v___x_136_ = lean_box(0);
v_isShared_137_ = v_isSharedCheck_151_;
goto v_resetjp_135_;
}
v_resetjp_135_:
{
lean_object* v___x_138_; lean_object* v___x_139_; lean_object* v___x_140_; lean_object* v___x_141_; lean_object* v___x_142_; lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_148_; 
v___x_138_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_139_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_140_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_141_ = lean_nat_to_int(v_head_133_);
v___x_142_ = lean_int_mul(v___x_138_, v___x_141_);
lean_dec(v___x_141_);
v___x_143_ = lean_int_add(v___x_142_, v___x_139_);
lean_dec(v___x_142_);
v___x_144_ = lean_int_mul(v___y_128_, v___x_143_);
lean_dec(v___x_143_);
v___x_145_ = lean_int_add(v_y0_129_, v___x_144_);
lean_dec(v___x_144_);
v___x_146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_146_, 0, v___x_140_);
lean_ctor_set(v___x_146_, 1, v___x_145_);
if (v_isShared_137_ == 0)
{
lean_ctor_set(v___x_136_, 1, v_a_131_);
lean_ctor_set(v___x_136_, 0, v___x_146_);
v___x_148_ = v___x_136_;
goto v_reusejp_147_;
}
else
{
lean_object* v_reuseFailAlloc_150_; 
v_reuseFailAlloc_150_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_150_, 0, v___x_146_);
lean_ctor_set(v_reuseFailAlloc_150_, 1, v_a_131_);
v___x_148_ = v_reuseFailAlloc_150_;
goto v_reusejp_147_;
}
v_reusejp_147_:
{
lean_object* v___x_149_; 
v___x_149_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__1_spec__2(v___y_128_, v_y0_129_, v_tail_134_, v___x_148_);
return v___x_149_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__1___boxed(lean_object* v___y_152_, lean_object* v_y0_153_, lean_object* v_a_154_, lean_object* v_a_155_){
_start:
{
lean_object* v_res_156_; 
v_res_156_ = lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__1(v___y_152_, v_y0_153_, v_a_154_, v_a_155_);
lean_dec(v_y0_153_);
lean_dec(v___y_152_);
return v_res_156_;
}
}
static lean_object* _init_lp_choreo_Choreo_evenLanes___closed__0(void){
_start:
{
lean_object* v___x_157_; lean_object* v___x_158_; 
v___x_157_ = lean_unsigned_to_nat(100u);
v___x_158_ = lean_nat_to_int(v___x_157_);
return v___x_158_;
}
}
static lean_object* _init_lp_choreo_Choreo_evenLanes___closed__1(void){
_start:
{
lean_object* v___x_159_; lean_object* v___x_160_; 
v___x_159_ = lean_unsigned_to_nat(900u);
v___x_160_ = lean_nat_to_int(v___x_159_);
return v___x_160_;
}
}
static lean_object* _init_lp_choreo_Choreo_evenLanes___closed__2(void){
_start:
{
lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_161_ = lean_unsigned_to_nat(6000u);
v___x_162_ = lean_nat_to_int(v___x_161_);
return v___x_162_;
}
}
static lean_object* _init_lp_choreo_Choreo_evenLanes___closed__3(void){
_start:
{
lean_object* v___x_163_; lean_object* v___x_164_; 
v___x_163_ = lean_unsigned_to_nat(4000u);
v___x_164_ = lean_nat_to_int(v___x_163_);
return v___x_164_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_evenLanes(lean_object* v_n_165_, lean_object* v_gap_166_){
_start:
{
lean_object* v___x_167_; lean_object* v_right_168_; lean_object* v_left_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; lean_object* v___x_174_; lean_object* v___x_175_; lean_object* v___x_176_; lean_object* v___y_178_; lean_object* v___y_191_; lean_object* v___y_194_; uint8_t v___x_197_; 
v___x_167_ = lean_unsigned_to_nat(1u);
v_right_168_ = lean_nat_shiftr(v_n_165_, v___x_167_);
v_left_169_ = lean_nat_sub(v_n_165_, v_right_168_);
v___x_170_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__0, &lp_choreo_Choreo_evenLanes___closed__0_once, _init_lp_choreo_Choreo_evenLanes___closed__0);
v___x_171_ = lean_int_add(v_gap_166_, v___x_170_);
v___x_172_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__1, &lp_choreo_Choreo_evenLanes___closed__1_once, _init_lp_choreo_Choreo_evenLanes___closed__1);
v___x_173_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__2, &lp_choreo_Choreo_evenLanes___closed__2_once, _init_lp_choreo_Choreo_evenLanes___closed__2);
v___x_174_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_175_ = lean_nat_to_int(v_n_165_);
v___x_176_ = lean_int_sub(v___x_175_, v___x_174_);
lean_dec(v___x_175_);
v___x_197_ = lean_int_dec_le(v___x_174_, v___x_176_);
if (v___x_197_ == 0)
{
v___y_194_ = v___x_174_;
goto v___jp_193_;
}
else
{
lean_inc(v___x_176_);
v___y_194_ = v___x_176_;
goto v___jp_193_;
}
v___jp_177_:
{
lean_object* v___x_179_; lean_object* v___x_180_; lean_object* v___x_181_; lean_object* v___x_182_; lean_object* v_y0_183_; lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; 
v___x_179_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_180_ = lean_int_mul(v___y_178_, v___x_176_);
lean_dec(v___x_176_);
v___x_181_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_182_ = lean_int_ediv(v___x_180_, v___x_181_);
lean_dec(v___x_180_);
v_y0_183_ = lean_int_sub(v___x_179_, v___x_182_);
lean_dec(v___x_182_);
v___x_184_ = l_List_range(v_left_169_);
v___x_185_ = lean_box(0);
v___x_186_ = lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__0(v___y_178_, v_y0_183_, v___x_184_, v___x_185_);
v___x_187_ = l_List_range(v_right_168_);
v___x_188_ = lp_choreo_List_mapTR_loop___at___00Choreo_evenLanes_spec__1(v___y_178_, v_y0_183_, v___x_187_, v___x_185_);
lean_dec(v_y0_183_);
lean_dec(v___y_178_);
v___x_189_ = l_List_appendTR___redArg(v___x_186_, v___x_188_);
return v___x_189_;
}
v___jp_190_:
{
uint8_t v___x_192_; 
v___x_192_ = lean_int_dec_le(v___x_171_, v___y_191_);
if (v___x_192_ == 0)
{
lean_dec(v___y_191_);
v___y_178_ = v___x_171_;
goto v___jp_177_;
}
else
{
lean_dec(v___x_171_);
v___y_178_ = v___y_191_;
goto v___jp_177_;
}
}
v___jp_193_:
{
lean_object* v___x_195_; uint8_t v___x_196_; 
v___x_195_ = lean_int_ediv(v___x_173_, v___y_194_);
lean_dec(v___y_194_);
v___x_196_ = lean_int_dec_le(v___x_172_, v___x_195_);
if (v___x_196_ == 0)
{
v___y_191_ = v___x_195_;
goto v___jp_190_;
}
else
{
lean_dec(v___x_195_);
v___y_191_ = v___x_172_;
goto v___jp_190_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_evenLanes___boxed(lean_object* v_n_198_, lean_object* v_gap_199_){
_start:
{
lean_object* v_res_200_; 
v_res_200_ = lp_choreo_Choreo_evenLanes(v_n_198_, v_gap_199_);
lean_dec(v_gap_199_);
return v_res_200_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__0(void){
_start:
{
lean_object* v___x_201_; uint8_t v___x_202_; lean_object* v___x_203_; double v___x_204_; 
v___x_201_ = lean_unsigned_to_nat(14u);
v___x_202_ = 1;
v___x_203_ = lean_cstr_to_nat("314159265358979");
v___x_204_ = l_Float_ofScientific(v___x_203_, v___x_202_, v___x_201_);
return v___x_204_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__1(void){
_start:
{
lean_object* v___x_205_; uint8_t v___x_206_; lean_object* v___x_207_; double v___x_208_; 
v___x_205_ = lean_unsigned_to_nat(1u);
v___x_206_ = 1;
v___x_207_ = lean_unsigned_to_nat(5u);
v___x_208_ = l_Float_ofScientific(v___x_207_, v___x_206_, v___x_205_);
return v___x_208_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__2(void){
_start:
{
lean_object* v___x_209_; uint8_t v___x_210_; lean_object* v___x_211_; double v___x_212_; 
v___x_209_ = lean_unsigned_to_nat(1u);
v___x_210_ = 1;
v___x_211_ = lean_unsigned_to_nat(42000u);
v___x_212_ = l_Float_ofScientific(v___x_211_, v___x_210_, v___x_209_);
return v___x_212_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3(void){
_start:
{
lean_object* v___x_213_; lean_object* v___x_214_; 
v___x_213_ = lean_unsigned_to_nat(10u);
v___x_214_ = lean_nat_to_int(v___x_213_);
return v___x_214_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__4(void){
_start:
{
lean_object* v___x_215_; uint8_t v___x_216_; lean_object* v___x_217_; double v___x_218_; 
v___x_215_ = lean_unsigned_to_nat(1u);
v___x_216_ = 1;
v___x_217_ = lean_unsigned_to_nat(18000u);
v___x_218_ = l_Float_ofScientific(v___x_217_, v___x_216_, v___x_215_);
return v___x_218_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__5(void){
_start:
{
lean_object* v___x_219_; uint8_t v___x_220_; lean_object* v___x_221_; double v___x_222_; 
v___x_219_ = lean_unsigned_to_nat(1u);
v___x_220_ = 1;
v___x_221_ = lean_unsigned_to_nat(36000u);
v___x_222_ = l_Float_ofScientific(v___x_221_, v___x_220_, v___x_219_);
return v___x_222_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0(lean_object* v_n_223_, lean_object* v_a_224_, lean_object* v_a_225_){
_start:
{
if (lean_obj_tag(v_a_224_) == 0)
{
lean_object* v___x_226_; 
lean_dec(v_n_223_);
v___x_226_ = l_List_reverse___redArg(v_a_225_);
return v___x_226_;
}
else
{
lean_object* v_head_227_; lean_object* v_tail_228_; lean_object* v___x_230_; uint8_t v_isShared_231_; uint8_t v_isSharedCheck_262_; 
v_head_227_ = lean_ctor_get(v_a_224_, 0);
v_tail_228_ = lean_ctor_get(v_a_224_, 1);
v_isSharedCheck_262_ = !lean_is_exclusive(v_a_224_);
if (v_isSharedCheck_262_ == 0)
{
v___x_230_ = v_a_224_;
v_isShared_231_ = v_isSharedCheck_262_;
goto v_resetjp_229_;
}
else
{
lean_inc(v_tail_228_);
lean_inc(v_head_227_);
lean_dec(v_a_224_);
v___x_230_ = lean_box(0);
v_isShared_231_ = v_isSharedCheck_262_;
goto v_resetjp_229_;
}
v_resetjp_229_:
{
double v___x_232_; double v___x_233_; double v___x_234_; double v___x_235_; double v___x_236_; double v___x_237_; double v_a_238_; double v___x_239_; double v___x_240_; double v___x_241_; double v___x_242_; uint64_t v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; double v___x_248_; double v___x_249_; double v___x_250_; double v___x_251_; double v___x_252_; uint64_t v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_259_; 
v___x_232_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__0);
v___x_233_ = lean_float_of_nat(v_head_227_);
v___x_234_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__1);
v___x_235_ = lean_float_add(v___x_233_, v___x_234_);
v___x_236_ = lean_float_mul(v___x_232_, v___x_235_);
lean_inc(v_n_223_);
v___x_237_ = lean_float_of_nat(v_n_223_);
v_a_238_ = lean_float_div(v___x_236_, v___x_237_);
v___x_239_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__2);
v___x_240_ = cos(v_a_238_);
v___x_241_ = lean_float_mul(v___x_239_, v___x_240_);
v___x_242_ = lean_float_negate(v___x_241_);
v___x_243_ = lean_float_to_int64(v___x_242_);
v___x_244_ = lean_int64_to_int_sint(v___x_243_);
v___x_245_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_246_ = lean_int_ediv(v___x_244_, v___x_245_);
lean_dec(v___x_244_);
v___x_247_ = lean_int_mul(v___x_246_, v___x_245_);
lean_dec(v___x_246_);
v___x_248_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__4);
v___x_249_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__5, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__5_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__5);
v___x_250_ = sin(v_a_238_);
v___x_251_ = lean_float_mul(v___x_249_, v___x_250_);
v___x_252_ = lean_float_add(v___x_248_, v___x_251_);
v___x_253_ = lean_float_to_int64(v___x_252_);
v___x_254_ = lean_int64_to_int_sint(v___x_253_);
v___x_255_ = lean_int_ediv(v___x_254_, v___x_245_);
lean_dec(v___x_254_);
v___x_256_ = lean_int_mul(v___x_255_, v___x_245_);
lean_dec(v___x_255_);
v___x_257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_247_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
if (v_isShared_231_ == 0)
{
lean_ctor_set(v___x_230_, 1, v_a_225_);
lean_ctor_set(v___x_230_, 0, v___x_257_);
v___x_259_ = v___x_230_;
goto v_reusejp_258_;
}
else
{
lean_object* v_reuseFailAlloc_261_; 
v_reuseFailAlloc_261_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_261_, 0, v___x_257_);
lean_ctor_set(v_reuseFailAlloc_261_, 1, v_a_225_);
v___x_259_ = v_reuseFailAlloc_261_;
goto v_reusejp_258_;
}
v_reusejp_258_:
{
v_a_224_ = v_tail_228_;
v_a_225_ = v___x_259_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_arcPlaces(lean_object* v_n_263_){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; lean_object* v___x_266_; 
lean_inc(v_n_263_);
v___x_264_ = l_List_range(v_n_263_);
v___x_265_ = lean_box(0);
v___x_266_ = lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0(v_n_263_, v___x_264_, v___x_265_);
return v___x_266_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1500u);
v___x_268_ = lean_nat_to_int(v___x_267_);
return v___x_268_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0(lean_object* v_a_269_, lean_object* v_a_270_){
_start:
{
if (lean_obj_tag(v_a_269_) == 0)
{
lean_object* v___x_271_; 
v___x_271_ = l_List_reverse___redArg(v_a_270_);
return v___x_271_;
}
else
{
lean_object* v_head_272_; lean_object* v_tail_273_; lean_object* v___x_275_; uint8_t v_isShared_276_; uint8_t v_isSharedCheck_298_; 
v_head_272_ = lean_ctor_get(v_a_269_, 0);
v_tail_273_ = lean_ctor_get(v_a_269_, 1);
v_isSharedCheck_298_ = !lean_is_exclusive(v_a_269_);
if (v_isSharedCheck_298_ == 0)
{
v___x_275_ = v_a_269_;
v_isShared_276_ = v_isSharedCheck_298_;
goto v_resetjp_274_;
}
else
{
lean_inc(v_tail_273_);
lean_inc(v_head_272_);
lean_dec(v_a_269_);
v___x_275_ = lean_box(0);
v_isShared_276_ = v_isSharedCheck_298_;
goto v_resetjp_274_;
}
v_resetjp_274_:
{
lean_object* v_x_277_; lean_object* v_y_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_297_; 
v_x_277_ = lean_ctor_get(v_head_272_, 0);
v_y_278_ = lean_ctor_get(v_head_272_, 1);
v_isSharedCheck_297_ = !lean_is_exclusive(v_head_272_);
if (v_isSharedCheck_297_ == 0)
{
v___x_280_ = v_head_272_;
v_isShared_281_ = v_isSharedCheck_297_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_y_278_);
lean_inc(v_x_277_);
lean_dec(v_head_272_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_297_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___y_283_; lean_object* v___x_291_; uint8_t v___x_292_; 
v___x_291_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_292_ = lean_int_dec_lt(v_x_277_, v___x_291_);
if (v___x_292_ == 0)
{
lean_object* v___x_293_; lean_object* v___x_294_; 
v___x_293_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0);
v___x_294_ = lean_int_add(v_x_277_, v___x_293_);
lean_dec(v_x_277_);
v___y_283_ = v___x_294_;
goto v___jp_282_;
}
else
{
lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_295_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0___closed__0);
v___x_296_ = lean_int_sub(v_x_277_, v___x_295_);
lean_dec(v_x_277_);
v___y_283_ = v___x_296_;
goto v___jp_282_;
}
v___jp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 0, v___y_283_);
v___x_285_ = v___x_280_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_290_; 
v_reuseFailAlloc_290_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_290_, 0, v___y_283_);
lean_ctor_set(v_reuseFailAlloc_290_, 1, v_y_278_);
v___x_285_ = v_reuseFailAlloc_290_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
lean_object* v___x_287_; 
if (v_isShared_276_ == 0)
{
lean_ctor_set(v___x_275_, 1, v_a_270_);
lean_ctor_set(v___x_275_, 0, v___x_285_);
v___x_287_ = v___x_275_;
goto v_reusejp_286_;
}
else
{
lean_object* v_reuseFailAlloc_289_; 
v_reuseFailAlloc_289_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_289_, 0, v___x_285_);
lean_ctor_set(v_reuseFailAlloc_289_, 1, v_a_270_);
v___x_287_ = v_reuseFailAlloc_289_;
goto v_reusejp_286_;
}
v_reusejp_286_:
{
v_a_269_ = v_tail_273_;
v_a_270_ = v___x_287_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitPlaces(lean_object* v_n_299_, lean_object* v_gap_300_){
_start:
{
lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_301_ = lp_choreo_Choreo_evenLanes(v_n_299_, v_gap_300_);
v___x_302_ = lean_box(0);
v___x_303_ = lp_choreo_List_mapTR_loop___at___00Choreo_splitPlaces_spec__0(v___x_301_, v___x_302_);
return v___x_303_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_splitPlaces___boxed(lean_object* v_n_304_, lean_object* v_gap_305_){
_start:
{
lean_object* v_res_306_; 
v_res_306_ = lp_choreo_Choreo_splitPlaces(v_n_304_, v_gap_305_);
lean_dec(v_gap_305_);
return v_res_306_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_307_; lean_object* v___x_308_; 
v___x_307_ = lean_unsigned_to_nat(1000u);
v___x_308_ = lean_nat_to_int(v___x_307_);
return v___x_308_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_309_; lean_object* v___x_310_; 
v___x_309_ = lean_unsigned_to_nat(800u);
v___x_310_ = lean_nat_to_int(v___x_309_);
return v___x_310_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_311_; lean_object* v___x_312_; 
v___x_311_ = lean_unsigned_to_nat(2000u);
v___x_312_ = lean_nat_to_int(v___x_311_);
return v___x_312_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_313_; lean_object* v___x_314_; 
v___x_313_ = lean_unsigned_to_nat(1100u);
v___x_314_ = lean_nat_to_int(v___x_313_);
return v___x_314_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_315_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_316_ = lean_int_neg(v___x_315_);
return v___x_316_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0(lean_object* v_a_317_, lean_object* v_a_318_){
_start:
{
if (lean_obj_tag(v_a_317_) == 0)
{
lean_object* v___x_319_; 
v___x_319_ = l_List_reverse___redArg(v_a_318_);
return v___x_319_;
}
else
{
lean_object* v_head_320_; lean_object* v_tail_321_; lean_object* v___x_323_; uint8_t v_isShared_324_; uint8_t v_isSharedCheck_350_; 
v_head_320_ = lean_ctor_get(v_a_317_, 0);
v_tail_321_ = lean_ctor_get(v_a_317_, 1);
v_isSharedCheck_350_ = !lean_is_exclusive(v_a_317_);
if (v_isSharedCheck_350_ == 0)
{
v___x_323_ = v_a_317_;
v_isShared_324_ = v_isSharedCheck_350_;
goto v_resetjp_322_;
}
else
{
lean_inc(v_tail_321_);
lean_inc(v_head_320_);
lean_dec(v_a_317_);
v___x_323_ = lean_box(0);
v_isShared_324_ = v_isSharedCheck_350_;
goto v_resetjp_322_;
}
v_resetjp_322_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v_k_328_; lean_object* v___y_330_; lean_object* v___x_345_; lean_object* v___x_346_; uint8_t v___x_347_; 
v___x_325_ = lean_unsigned_to_nat(2u);
v___x_326_ = lean_unsigned_to_nat(1u);
v___x_327_ = lean_nat_shiftr(v_head_320_, v___x_326_);
v_k_328_ = lean_nat_to_int(v___x_327_);
v___x_345_ = lean_nat_mod(v_head_320_, v___x_325_);
lean_dec(v_head_320_);
v___x_346_ = lean_unsigned_to_nat(0u);
v___x_347_ = lean_nat_dec_eq(v___x_345_, v___x_346_);
lean_dec(v___x_345_);
if (v___x_347_ == 0)
{
lean_object* v___x_348_; 
v___x_348_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___y_330_ = v___x_348_;
goto v___jp_329_;
}
else
{
lean_object* v___x_349_; 
v___x_349_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4);
v___y_330_ = v___x_349_;
goto v___jp_329_;
}
v___jp_329_:
{
lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v___x_342_; 
v___x_331_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0);
v___x_332_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1);
v___x_333_ = lean_int_mul(v_k_328_, v___x_332_);
v___x_334_ = lean_int_add(v___x_331_, v___x_333_);
lean_dec(v___x_333_);
v___x_335_ = lean_int_mul(v___y_330_, v___x_334_);
lean_dec(v___x_334_);
v___x_336_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2);
v___x_337_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3);
v___x_338_ = lean_int_mul(v_k_328_, v___x_337_);
lean_dec(v_k_328_);
v___x_339_ = lean_int_add(v___x_336_, v___x_338_);
lean_dec(v___x_338_);
v___x_340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_340_, 0, v___x_335_);
lean_ctor_set(v___x_340_, 1, v___x_339_);
if (v_isShared_324_ == 0)
{
lean_ctor_set(v___x_323_, 1, v_a_318_);
lean_ctor_set(v___x_323_, 0, v___x_340_);
v___x_342_ = v___x_323_;
goto v_reusejp_341_;
}
else
{
lean_object* v_reuseFailAlloc_344_; 
v_reuseFailAlloc_344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_344_, 0, v___x_340_);
lean_ctor_set(v_reuseFailAlloc_344_, 1, v_a_318_);
v___x_342_ = v_reuseFailAlloc_344_;
goto v_reusejp_341_;
}
v_reusejp_341_:
{
v_a_317_ = v_tail_321_;
v_a_318_ = v___x_342_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0(lean_object* v_a_351_, lean_object* v_a_352_){
_start:
{
if (lean_obj_tag(v_a_351_) == 0)
{
lean_object* v___x_353_; 
v___x_353_ = l_List_reverse___redArg(v_a_352_);
return v___x_353_;
}
else
{
lean_object* v_head_354_; lean_object* v_tail_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_384_; 
v_head_354_ = lean_ctor_get(v_a_351_, 0);
v_tail_355_ = lean_ctor_get(v_a_351_, 1);
v_isSharedCheck_384_ = !lean_is_exclusive(v_a_351_);
if (v_isSharedCheck_384_ == 0)
{
v___x_357_ = v_a_351_;
v_isShared_358_ = v_isSharedCheck_384_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_tail_355_);
lean_inc(v_head_354_);
lean_dec(v_a_351_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_384_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_359_; lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_k_362_; lean_object* v___y_364_; lean_object* v___x_379_; lean_object* v___x_380_; uint8_t v___x_381_; 
v___x_359_ = lean_unsigned_to_nat(2u);
v___x_360_ = lean_unsigned_to_nat(1u);
v___x_361_ = lean_nat_shiftr(v_head_354_, v___x_360_);
v_k_362_ = lean_nat_to_int(v___x_361_);
v___x_379_ = lean_nat_mod(v_head_354_, v___x_359_);
lean_dec(v_head_354_);
v___x_380_ = lean_unsigned_to_nat(0u);
v___x_381_ = lean_nat_dec_eq(v___x_379_, v___x_380_);
lean_dec(v___x_379_);
if (v___x_381_ == 0)
{
lean_object* v___x_382_; 
v___x_382_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___y_364_ = v___x_382_;
goto v___jp_363_;
}
else
{
lean_object* v___x_383_; 
v___x_383_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4);
v___y_364_ = v___x_383_;
goto v___jp_363_;
}
v___jp_363_:
{
lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; lean_object* v___x_374_; lean_object* v___x_376_; 
v___x_365_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0);
v___x_366_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1);
v___x_367_ = lean_int_mul(v_k_362_, v___x_366_);
v___x_368_ = lean_int_add(v___x_365_, v___x_367_);
lean_dec(v___x_367_);
v___x_369_ = lean_int_mul(v___y_364_, v___x_368_);
lean_dec(v___x_368_);
v___x_370_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2);
v___x_371_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3);
v___x_372_ = lean_int_mul(v_k_362_, v___x_371_);
lean_dec(v_k_362_);
v___x_373_ = lean_int_add(v___x_370_, v___x_372_);
lean_dec(v___x_372_);
v___x_374_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_374_, 0, v___x_369_);
lean_ctor_set(v___x_374_, 1, v___x_373_);
if (v_isShared_358_ == 0)
{
lean_ctor_set(v___x_357_, 1, v_a_352_);
lean_ctor_set(v___x_357_, 0, v___x_374_);
v___x_376_ = v___x_357_;
goto v_reusejp_375_;
}
else
{
lean_object* v_reuseFailAlloc_378_; 
v_reuseFailAlloc_378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_378_, 0, v___x_374_);
lean_ctor_set(v_reuseFailAlloc_378_, 1, v_a_352_);
v___x_376_ = v_reuseFailAlloc_378_;
goto v_reusejp_375_;
}
v_reusejp_375_:
{
lean_object* v___x_377_; 
v___x_377_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0(v_tail_355_, v___x_376_);
return v___x_377_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_mirroredPlaces(lean_object* v_n_385_){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; 
v___x_386_ = l_List_range(v_n_385_);
v___x_387_ = lean_box(0);
v___x_388_ = lp_choreo_List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0(v___x_386_, v___x_387_);
return v___x_388_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(lean_object* v_count_389_, lean_object* v___y_390_, lean_object* v_shift_391_, lean_object* v_y_392_, lean_object* v_a_393_, lean_object* v_a_394_){
_start:
{
if (lean_obj_tag(v_a_393_) == 0)
{
lean_object* v___x_395_; 
lean_dec(v_y_392_);
lean_dec(v_count_389_);
v___x_395_ = l_List_reverse___redArg(v_a_394_);
return v___x_395_;
}
else
{
lean_object* v_head_396_; lean_object* v_tail_397_; lean_object* v___x_399_; uint8_t v_isShared_400_; uint8_t v_isSharedCheck_416_; 
v_head_396_ = lean_ctor_get(v_a_393_, 0);
v_tail_397_ = lean_ctor_get(v_a_393_, 1);
v_isSharedCheck_416_ = !lean_is_exclusive(v_a_393_);
if (v_isSharedCheck_416_ == 0)
{
v___x_399_ = v_a_393_;
v_isShared_400_ = v_isSharedCheck_416_;
goto v_resetjp_398_;
}
else
{
lean_inc(v_tail_397_);
lean_inc(v_head_396_);
lean_dec(v_a_393_);
v___x_399_ = lean_box(0);
v_isShared_400_ = v_isSharedCheck_416_;
goto v_resetjp_398_;
}
v_resetjp_398_:
{
lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; lean_object* v___x_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_413_; 
v___x_401_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_402_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_403_ = lean_nat_to_int(v_head_396_);
v___x_404_ = lean_int_mul(v___x_402_, v___x_403_);
lean_dec(v___x_403_);
v___x_405_ = lean_int_add(v___x_404_, v___x_401_);
lean_dec(v___x_404_);
lean_inc(v_count_389_);
v___x_406_ = lean_nat_to_int(v_count_389_);
v___x_407_ = lean_int_sub(v___x_405_, v___x_406_);
lean_dec(v___x_406_);
lean_dec(v___x_405_);
v___x_408_ = lean_int_mul(v___x_407_, v___y_390_);
lean_dec(v___x_407_);
v___x_409_ = lean_int_ediv(v___x_408_, v___x_402_);
lean_dec(v___x_408_);
v___x_410_ = lean_int_add(v___x_409_, v_shift_391_);
lean_dec(v___x_409_);
lean_inc(v_y_392_);
v___x_411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_411_, 0, v___x_410_);
lean_ctor_set(v___x_411_, 1, v_y_392_);
if (v_isShared_400_ == 0)
{
lean_ctor_set(v___x_399_, 1, v_a_394_);
lean_ctor_set(v___x_399_, 0, v___x_411_);
v___x_413_ = v___x_399_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_a_394_);
v___x_413_ = v_reuseFailAlloc_415_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
v_a_393_ = v_tail_397_;
v_a_394_ = v___x_413_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0___boxed(lean_object* v_count_417_, lean_object* v___y_418_, lean_object* v_shift_419_, lean_object* v_y_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(v_count_417_, v___y_418_, v_shift_419_, v_y_420_, v_a_421_, v_a_422_);
lean_dec(v_shift_419_);
lean_dec(v___y_418_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(lean_object* v_count_424_, lean_object* v___y_425_, lean_object* v_shift_426_, lean_object* v_y_427_, lean_object* v_a_428_, lean_object* v_a_429_){
_start:
{
if (lean_obj_tag(v_a_428_) == 0)
{
lean_object* v___x_430_; 
lean_dec(v_y_427_);
lean_dec(v_count_424_);
v___x_430_ = l_List_reverse___redArg(v_a_429_);
return v___x_430_;
}
else
{
lean_object* v_head_431_; lean_object* v_tail_432_; lean_object* v___x_434_; uint8_t v_isShared_435_; uint8_t v_isSharedCheck_451_; 
v_head_431_ = lean_ctor_get(v_a_428_, 0);
v_tail_432_ = lean_ctor_get(v_a_428_, 1);
v_isSharedCheck_451_ = !lean_is_exclusive(v_a_428_);
if (v_isSharedCheck_451_ == 0)
{
v___x_434_ = v_a_428_;
v_isShared_435_ = v_isSharedCheck_451_;
goto v_resetjp_433_;
}
else
{
lean_inc(v_tail_432_);
lean_inc(v_head_431_);
lean_dec(v_a_428_);
v___x_434_ = lean_box(0);
v_isShared_435_ = v_isSharedCheck_451_;
goto v_resetjp_433_;
}
v_resetjp_433_:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_448_; 
v___x_436_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_437_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_438_ = lean_nat_to_int(v_head_431_);
v___x_439_ = lean_int_mul(v___x_437_, v___x_438_);
lean_dec(v___x_438_);
v___x_440_ = lean_int_add(v___x_439_, v___x_436_);
lean_dec(v___x_439_);
lean_inc(v_count_424_);
v___x_441_ = lean_nat_to_int(v_count_424_);
v___x_442_ = lean_int_sub(v___x_440_, v___x_441_);
lean_dec(v___x_441_);
lean_dec(v___x_440_);
v___x_443_ = lean_int_mul(v___x_442_, v___y_425_);
lean_dec(v___x_442_);
v___x_444_ = lean_int_ediv(v___x_443_, v___x_437_);
lean_dec(v___x_443_);
v___x_445_ = lean_int_add(v___x_444_, v_shift_426_);
lean_dec(v___x_444_);
lean_inc(v_y_427_);
v___x_446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_446_, 0, v___x_445_);
lean_ctor_set(v___x_446_, 1, v_y_427_);
if (v_isShared_435_ == 0)
{
lean_ctor_set(v___x_434_, 1, v_a_429_);
lean_ctor_set(v___x_434_, 0, v___x_446_);
v___x_448_ = v___x_434_;
goto v_reusejp_447_;
}
else
{
lean_object* v_reuseFailAlloc_450_; 
v_reuseFailAlloc_450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_450_, 0, v___x_446_);
lean_ctor_set(v_reuseFailAlloc_450_, 1, v_a_429_);
v___x_448_ = v_reuseFailAlloc_450_;
goto v_reusejp_447_;
}
v_reusejp_447_:
{
lean_object* v___x_449_; 
v___x_449_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(v_count_424_, v___y_425_, v_shift_426_, v_y_427_, v_tail_432_, v___x_448_);
return v___x_449_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0___boxed(lean_object* v_count_452_, lean_object* v___y_453_, lean_object* v_shift_454_, lean_object* v_y_455_, lean_object* v_a_456_, lean_object* v_a_457_){
_start:
{
lean_object* v_res_458_; 
v_res_458_ = lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(v_count_452_, v___y_453_, v_shift_454_, v_y_455_, v_a_456_, v_a_457_);
lean_dec(v_shift_454_);
lean_dec(v___y_453_);
return v_res_458_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0(lean_object* v___y_459_, lean_object* v_count_460_, lean_object* v_y_461_, lean_object* v_shift_462_){
_start:
{
lean_object* v___x_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
lean_inc(v_count_460_);
v___x_463_ = l_List_range(v_count_460_);
v___x_464_ = lean_box(0);
v___x_465_ = lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(v_count_460_, v___y_459_, v_shift_462_, v_y_461_, v___x_463_, v___x_464_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0___boxed(lean_object* v___y_466_, lean_object* v_count_467_, lean_object* v_y_468_, lean_object* v_shift_469_){
_start:
{
lean_object* v_res_470_; 
v_res_470_ = lp_choreo_Choreo_staggeredLines___lam__0(v___y_466_, v_count_467_, v_y_468_, v_shift_469_);
lean_dec(v_shift_469_);
lean_dec(v___y_466_);
return v_res_470_;
}
}
static lean_object* _init_lp_choreo_Choreo_staggeredLines___closed__0(void){
_start:
{
lean_object* v___x_471_; lean_object* v___x_472_; 
v___x_471_ = lean_unsigned_to_nat(4u);
v___x_472_ = lean_nat_to_int(v___x_471_);
return v___x_472_;
}
}
static lean_object* _init_lp_choreo_Choreo_staggeredLines___closed__1(void){
_start:
{
lean_object* v___x_473_; lean_object* v___x_474_; 
v___x_473_ = lean_unsigned_to_nat(5000u);
v___x_474_ = lean_nat_to_int(v___x_473_);
return v___x_474_;
}
}
static lean_object* _init_lp_choreo_Choreo_staggeredLines___closed__2(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; 
v___x_475_ = lean_unsigned_to_nat(1800u);
v___x_476_ = lean_nat_to_int(v___x_475_);
return v___x_476_;
}
}
static lean_object* _init_lp_choreo_Choreo_staggeredLines___closed__3(void){
_start:
{
lean_object* v___x_477_; lean_object* v___x_478_; 
v___x_477_ = lean_unsigned_to_nat(6400u);
v___x_478_ = lean_nat_to_int(v___x_477_);
return v___x_478_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines(lean_object* v_n_479_){
_start:
{
lean_object* v___x_480_; lean_object* v_back_481_; lean_object* v_front_482_; lean_object* v___y_484_; lean_object* v___x_494_; lean_object* v___x_495_; lean_object* v___y_497_; lean_object* v___x_500_; lean_object* v___x_501_; uint8_t v___x_502_; 
v___x_480_ = lean_unsigned_to_nat(1u);
v_back_481_ = lean_nat_shiftr(v_n_479_, v___x_480_);
v_front_482_ = lean_nat_sub(v_n_479_, v_back_481_);
v___x_494_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__2, &lp_choreo_Choreo_staggeredLines___closed__2_once, _init_lp_choreo_Choreo_staggeredLines___closed__2);
v___x_495_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__3, &lp_choreo_Choreo_staggeredLines___closed__3_once, _init_lp_choreo_Choreo_staggeredLines___closed__3);
v___x_500_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
lean_inc(v_front_482_);
v___x_501_ = lean_nat_to_int(v_front_482_);
v___x_502_ = lean_int_dec_le(v___x_500_, v___x_501_);
if (v___x_502_ == 0)
{
lean_dec(v___x_501_);
v___y_497_ = v___x_500_;
goto v___jp_496_;
}
else
{
v___y_497_ = v___x_501_;
goto v___jp_496_;
}
v___jp_483_:
{
lean_object* v___x_485_; lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_485_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_486_ = lean_int_neg(v___y_484_);
v___x_487_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__0, &lp_choreo_Choreo_staggeredLines___closed__0_once, _init_lp_choreo_Choreo_staggeredLines___closed__0);
v___x_488_ = lean_int_ediv(v___x_486_, v___x_487_);
lean_dec(v___x_486_);
v___x_489_ = lp_choreo_Choreo_staggeredLines___lam__0(v___y_484_, v_front_482_, v___x_485_, v___x_488_);
lean_dec(v___x_488_);
v___x_490_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__1, &lp_choreo_Choreo_staggeredLines___closed__1_once, _init_lp_choreo_Choreo_staggeredLines___closed__1);
v___x_491_ = lean_int_ediv(v___y_484_, v___x_487_);
v___x_492_ = lp_choreo_Choreo_staggeredLines___lam__0(v___y_484_, v_back_481_, v___x_490_, v___x_491_);
lean_dec(v___x_491_);
lean_dec(v___y_484_);
v___x_493_ = l_List_appendTR___redArg(v___x_489_, v___x_492_);
return v___x_493_;
}
v___jp_496_:
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = lean_int_ediv(v___x_495_, v___y_497_);
lean_dec(v___y_497_);
v___x_499_ = lean_int_dec_le(v___x_494_, v___x_498_);
if (v___x_499_ == 0)
{
v___y_484_ = v___x_498_;
goto v___jp_483_;
}
else
{
lean_dec(v___x_498_);
v___y_484_ = v___x_494_;
goto v___jp_483_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___boxed(lean_object* v_n_503_){
_start:
{
lean_object* v_res_504_; 
v_res_504_ = lp_choreo_Choreo_staggeredLines(v_n_503_);
lean_dec(v_n_503_);
return v_res_504_;
}
}
static lean_object* _init_lp_choreo_Choreo_namedPlaces___closed__16(void){
_start:
{
lean_object* v___x_521_; lean_object* v___x_522_; 
v___x_521_ = lean_unsigned_to_nat(3315u);
v___x_522_ = lean_nat_to_int(v___x_521_);
return v___x_522_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces(lean_object* v_name_523_, lean_object* v_n_524_, lean_object* v_gap_525_){
_start:
{
lean_object* v_s_527_; lean_object* v___y_533_; lean_object* v___y_534_; lean_object* v___x_544_; uint8_t v___x_545_; 
v___x_544_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_545_ = lean_string_dec_eq(v_name_523_, v___x_544_);
if (v___x_545_ == 0)
{
lean_object* v___x_546_; uint8_t v___x_547_; 
v___x_546_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__0));
v___x_547_ = lean_string_dec_eq(v_name_523_, v___x_546_);
if (v___x_547_ == 0)
{
lean_object* v___x_548_; uint8_t v___x_549_; 
v___x_548_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_549_ = lean_string_dec_eq(v_name_523_, v___x_548_);
if (v___x_549_ == 0)
{
lean_object* v___x_550_; uint8_t v___x_551_; 
v___x_550_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__2));
v___x_551_ = lean_string_dec_eq(v_name_523_, v___x_550_);
if (v___x_551_ == 0)
{
lean_object* v___x_552_; uint8_t v___x_553_; 
v___x_552_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_553_ = lean_string_dec_eq(v_name_523_, v___x_552_);
if (v___x_553_ == 0)
{
lean_object* v___x_554_; uint8_t v___x_555_; 
v___x_554_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__3));
v___x_555_ = lean_string_dec_eq(v_name_523_, v___x_554_);
if (v___x_555_ == 0)
{
lean_object* v___x_556_; uint8_t v___x_557_; 
v___x_556_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__4));
v___x_557_ = lean_string_dec_eq(v_name_523_, v___x_556_);
if (v___x_557_ == 0)
{
lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_558_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__5));
v___x_559_ = lean_string_dec_eq(v_name_523_, v___x_558_);
if (v___x_559_ == 0)
{
lean_object* v___x_560_; uint8_t v___x_561_; 
v___x_560_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__6));
v___x_561_ = lean_string_dec_eq(v_name_523_, v___x_560_);
if (v___x_561_ == 0)
{
lean_object* v___x_562_; uint8_t v___x_563_; 
v___x_562_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__7));
v___x_563_ = lean_string_dec_eq(v_name_523_, v___x_562_);
if (v___x_563_ == 0)
{
lean_object* v___x_564_; uint8_t v___x_565_; 
v___x_564_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__8));
v___x_565_ = lean_string_dec_eq(v_name_523_, v___x_564_);
if (v___x_565_ == 0)
{
lean_object* v___x_566_; uint8_t v___x_567_; 
v___x_566_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__9));
v___x_567_ = lean_string_dec_eq(v_name_523_, v___x_566_);
if (v___x_567_ == 0)
{
lean_object* v___x_568_; uint8_t v___x_569_; 
v___x_568_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__10));
v___x_569_ = lean_string_dec_eq(v_name_523_, v___x_568_);
if (v___x_569_ == 0)
{
lean_object* v___x_570_; uint8_t v___x_571_; 
v___x_570_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__11));
v___x_571_ = lean_string_dec_eq(v_name_523_, v___x_570_);
if (v___x_571_ == 0)
{
lean_object* v___x_572_; uint8_t v___x_573_; 
v___x_572_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__12));
v___x_573_ = lean_string_dec_eq(v_name_523_, v___x_572_);
if (v___x_573_ == 0)
{
lean_object* v___x_574_; uint8_t v___x_575_; 
v___x_574_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__13));
v___x_575_ = lean_string_dec_eq(v_name_523_, v___x_574_);
if (v___x_575_ == 0)
{
lean_object* v___x_576_; uint8_t v___x_577_; 
v___x_576_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__14));
v___x_577_ = lean_string_dec_eq(v_name_523_, v___x_576_);
if (v___x_577_ == 0)
{
lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_578_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__15));
v___x_579_ = lean_string_dec_eq(v_name_523_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; 
v___x_580_ = lean_box(3);
v_s_527_ = v___x_580_;
goto v___jp_526_;
}
else
{
lean_object* v___x_581_; 
v___x_581_ = lp_choreo_Choreo_staggeredLines(v_n_524_);
lean_dec(v_n_524_);
return v___x_581_;
}
}
else
{
lean_object* v___x_582_; 
v___x_582_ = lp_choreo_Choreo_mirroredPlaces(v_n_524_);
return v___x_582_;
}
}
else
{
lean_object* v___x_583_; 
v___x_583_ = lp_choreo_Choreo_arcPlaces(v_n_524_);
return v___x_583_;
}
}
else
{
lean_object* v___x_584_; 
v___x_584_ = lp_choreo_Choreo_splitPlaces(v_n_524_, v_gap_525_);
return v___x_584_;
}
}
else
{
lean_object* v___x_585_; 
v___x_585_ = lp_choreo_Choreo_evenLanes(v_n_524_, v_gap_525_);
return v___x_585_;
}
}
else
{
lean_object* v___x_586_; 
v___x_586_ = lean_box(10);
v_s_527_ = v___x_586_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_587_; 
v___x_587_ = lean_box(9);
v_s_527_ = v___x_587_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_588_; 
v___x_588_ = lean_box(8);
v_s_527_ = v___x_588_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_589_; 
v___x_589_ = lean_box(6);
v_s_527_ = v___x_589_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_590_; 
v___x_590_ = lean_box(5);
v_s_527_ = v___x_590_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_591_; 
v___x_591_ = lean_box(4);
v_s_527_ = v___x_591_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_592_; 
v___x_592_ = lean_box(7);
v_s_527_ = v___x_592_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; double v___x_597_; lean_object* v___x_598_; 
v___x_593_ = lp_choreo_Choreo_centre;
v___x_594_ = lean_obj_once(&lp_choreo_Choreo_namedPlaces___closed__16, &lp_choreo_Choreo_namedPlaces___closed__16_once, _init_lp_choreo_Choreo_namedPlaces___closed__16);
v___x_595_ = lean_unsigned_to_nat(0u);
v___x_596_ = lean_unsigned_to_nat(1u);
v___x_597_ = l_Float_ofScientific(v___x_595_, v___x_555_, v___x_596_);
v___x_598_ = lp_choreo_Choreo_ringPoints(v_n_524_, v___x_593_, v___x_594_, v___x_597_);
return v___x_598_;
}
}
else
{
lean_object* v___x_599_; 
v___x_599_ = lean_box(3);
v_s_527_ = v___x_599_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_600_; 
v___x_600_ = lean_box(2);
v_s_527_ = v___x_600_;
goto v___jp_526_;
}
}
else
{
lean_object* v___x_601_; 
v___x_601_ = lean_box(1);
v_s_527_ = v___x_601_;
goto v___jp_526_;
}
}
else
{
goto v___jp_536_;
}
}
else
{
goto v___jp_536_;
}
v___jp_526_:
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; 
v___x_528_ = lp_choreo_Choreo_Shape_formation(v_s_527_, v_n_524_);
v___x_529_ = lp_choreo_Choreo_Formation_slots(v___x_528_);
v___x_530_ = lean_box(0);
v___x_531_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileEnter_spec__0(v___x_529_, v___x_530_);
return v___x_531_;
}
v___jp_532_:
{
lean_object* v___x_535_; 
v___x_535_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_535_, 0, v___y_533_);
lean_ctor_set(v___x_535_, 1, v___y_534_);
v_s_527_ = v___x_535_;
goto v___jp_526_;
}
v___jp_536_:
{
lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; uint8_t v___x_543_; 
v___x_537_ = lean_unsigned_to_nat(2u);
v___x_538_ = lean_unsigned_to_nat(1u);
v___x_539_ = lean_nat_shiftr(v_n_524_, v___x_538_);
v___x_540_ = lean_nat_mod(v_n_524_, v___x_537_);
v___x_541_ = lean_nat_add(v___x_539_, v___x_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_unsigned_to_nat(0u);
v___x_543_ = lean_nat_dec_eq(v___x_540_, v___x_542_);
lean_dec(v___x_540_);
if (v___x_543_ == 0)
{
v___y_533_ = v___x_541_;
v___y_534_ = v___x_538_;
goto v___jp_532_;
}
else
{
v___y_533_ = v___x_541_;
v___y_534_ = v___x_537_;
goto v___jp_532_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces___boxed(lean_object* v_name_602_, lean_object* v_n_603_, lean_object* v_gap_604_){
_start:
{
lean_object* v_res_605_; 
v_res_605_ = lp_choreo_Choreo_namedPlaces(v_name_602_, v_n_603_, v_gap_604_);
lean_dec(v_gap_604_);
lean_dec_ref(v_name_602_);
return v_res_605_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_606_; uint8_t v___x_607_; lean_object* v___x_608_; double v___x_609_; 
v___x_606_ = lean_unsigned_to_nat(11u);
v___x_607_ = 1;
v___x_608_ = lean_cstr_to_nat("628318530718");
v___x_609_ = l_Float_ofScientific(v___x_608_, v___x_607_, v___x_606_);
return v___x_609_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_610_; uint8_t v___x_611_; lean_object* v___x_612_; double v___x_613_; 
v___x_610_ = lean_unsigned_to_nat(1u);
v___x_611_ = 1;
v___x_612_ = lean_unsigned_to_nat(14000u);
v___x_613_ = l_Float_ofScientific(v___x_612_, v___x_611_, v___x_610_);
return v___x_613_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_614_; lean_object* v___x_615_; 
v___x_614_ = lean_unsigned_to_nat(650u);
v___x_615_ = lean_nat_to_int(v___x_614_);
return v___x_615_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_616_; lean_object* v___x_617_; 
v___x_616_ = lean_unsigned_to_nat(500u);
v___x_617_ = lean_nat_to_int(v___x_616_);
return v___x_617_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_618_; lean_object* v___x_619_; 
v___x_618_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_619_ = lean_int_neg(v___x_618_);
return v___x_619_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(lean_object* v_name_620_, lean_object* v_cx_621_, lean_object* v_k_622_, lean_object* v_a_623_, lean_object* v_a_624_){
_start:
{
if (lean_obj_tag(v_a_623_) == 0)
{
lean_object* v___x_625_; 
lean_dec(v_k_622_);
lean_dec(v_cx_621_);
v___x_625_ = l_List_reverse___redArg(v_a_624_);
return v___x_625_;
}
else
{
lean_object* v_head_626_; lean_object* v_tail_627_; lean_object* v___x_629_; uint8_t v_isShared_630_; uint8_t v_isSharedCheck_708_; 
v_head_626_ = lean_ctor_get(v_a_623_, 0);
v_tail_627_ = lean_ctor_get(v_a_623_, 1);
v_isSharedCheck_708_ = !lean_is_exclusive(v_a_623_);
if (v_isSharedCheck_708_ == 0)
{
v___x_629_ = v_a_623_;
v_isShared_630_ = v_isSharedCheck_708_;
goto v_resetjp_628_;
}
else
{
lean_inc(v_tail_627_);
lean_inc(v_head_626_);
lean_dec(v_a_623_);
v___x_629_ = lean_box(0);
v_isShared_630_ = v_isSharedCheck_708_;
goto v_resetjp_628_;
}
v_resetjp_628_:
{
lean_object* v_fst_631_; lean_object* v_snd_632_; lean_object* v___x_634_; uint8_t v_isShared_635_; uint8_t v_isSharedCheck_707_; 
v_fst_631_ = lean_ctor_get(v_head_626_, 0);
v_snd_632_ = lean_ctor_get(v_head_626_, 1);
v_isSharedCheck_707_ = !lean_is_exclusive(v_head_626_);
if (v_isSharedCheck_707_ == 0)
{
v___x_634_ = v_head_626_;
v_isShared_635_ = v_isSharedCheck_707_;
goto v_resetjp_633_;
}
else
{
lean_inc(v_snd_632_);
lean_inc(v_fst_631_);
lean_dec(v_head_626_);
v___x_634_ = lean_box(0);
v_isShared_635_ = v_isSharedCheck_707_;
goto v_resetjp_633_;
}
v_resetjp_633_:
{
lean_object* v_fst_637_; lean_object* v_snd_638_; lean_object* v___x_647_; uint8_t v___x_648_; 
v___x_647_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_648_ = lean_string_dec_eq(v_name_620_, v___x_647_);
if (v___x_648_ == 0)
{
lean_object* v___x_649_; uint8_t v___x_650_; 
v___x_649_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_650_ = lean_string_dec_eq(v_name_620_, v___x_649_);
if (v___x_650_ == 0)
{
double v___x_651_; double v___x_652_; double v___x_653_; lean_object* v___x_654_; lean_object* v___y_656_; uint8_t v___x_671_; 
v___x_651_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0);
v___x_652_ = lean_float_of_nat(v_snd_632_);
v___x_653_ = lean_float_mul(v___x_651_, v___x_652_);
v___x_654_ = lean_unsigned_to_nat(1u);
v___x_671_ = lean_nat_dec_le(v___x_654_, v_k_622_);
if (v___x_671_ == 0)
{
v___y_656_ = v___x_654_;
goto v___jp_655_;
}
else
{
lean_inc(v_k_622_);
v___y_656_ = v_k_622_;
goto v___jp_655_;
}
v___jp_655_:
{
double v___x_657_; double v_a_658_; double v___x_659_; double v___x_660_; double v___x_661_; uint64_t v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; lean_object* v___x_665_; double v___x_666_; double v___x_667_; uint64_t v___x_668_; lean_object* v___x_669_; lean_object* v___x_670_; 
v___x_657_ = lean_float_of_nat(v___y_656_);
v_a_658_ = lean_float_div(v___x_653_, v___x_657_);
v___x_659_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1);
v___x_660_ = cos(v_a_658_);
v___x_661_ = lean_float_mul(v___x_659_, v___x_660_);
v___x_662_ = lean_float_to_int64(v___x_661_);
v___x_663_ = lean_int64_to_int_sint(v___x_662_);
v___x_664_ = lean_int_add(v_cx_621_, v___x_663_);
lean_dec(v___x_663_);
v___x_665_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_666_ = sin(v_a_658_);
v___x_667_ = lean_float_mul(v___x_659_, v___x_666_);
v___x_668_ = lean_float_to_int64(v___x_667_);
v___x_669_ = lean_int64_to_int_sint(v___x_668_);
v___x_670_ = lean_int_add(v___x_665_, v___x_669_);
lean_dec(v___x_669_);
v_fst_637_ = v___x_664_;
v_snd_638_ = v___x_670_;
goto v___jp_636_;
}
}
else
{
lean_object* v___x_672_; lean_object* v___y_674_; lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_672_ = lean_unsigned_to_nat(2u);
v___x_691_ = lean_nat_mod(v_snd_632_, v___x_672_);
v___x_692_ = lean_unsigned_to_nat(0u);
v___x_693_ = lean_nat_dec_eq(v___x_691_, v___x_692_);
lean_dec(v___x_691_);
if (v___x_693_ == 0)
{
lean_object* v___x_694_; 
v___x_694_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___y_674_ = v___x_694_;
goto v___jp_673_;
}
else
{
lean_object* v___x_695_; 
v___x_695_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4);
v___y_674_ = v___x_695_;
goto v___jp_673_;
}
v___jp_673_:
{
lean_object* v___x_675_; lean_object* v___x_676_; lean_object* v___x_677_; lean_object* v___x_678_; lean_object* v___x_679_; lean_object* v___x_680_; lean_object* v___x_681_; lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; lean_object* v___x_687_; lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; 
v___x_675_ = lean_int_add(v_cx_621_, v___y_674_);
v___x_676_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_677_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_678_ = lean_unsigned_to_nat(1u);
v___x_679_ = lean_nat_shiftr(v_snd_632_, v___x_678_);
lean_dec(v_snd_632_);
v___x_680_ = lean_nat_to_int(v___x_679_);
v___x_681_ = lean_int_mul(v___x_677_, v___x_680_);
lean_dec(v___x_680_);
v___x_682_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_683_ = lean_int_add(v___x_681_, v___x_682_);
lean_dec(v___x_681_);
v___x_684_ = lean_nat_add(v_k_622_, v___x_678_);
v___x_685_ = lean_nat_shiftr(v___x_684_, v___x_678_);
lean_dec(v___x_684_);
v___x_686_ = lean_nat_to_int(v___x_685_);
v___x_687_ = lean_int_sub(v___x_683_, v___x_686_);
lean_dec(v___x_686_);
lean_dec(v___x_683_);
v___x_688_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2);
v___x_689_ = lean_int_mul(v___x_687_, v___x_688_);
lean_dec(v___x_687_);
v___x_690_ = lean_int_add(v___x_676_, v___x_689_);
lean_dec(v___x_689_);
v_fst_637_ = v___x_675_;
v_snd_638_ = v___x_690_;
goto v___jp_636_;
}
}
}
else
{
lean_object* v___x_696_; lean_object* v___x_697_; lean_object* v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_696_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_697_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_698_ = lean_nat_to_int(v_snd_632_);
v___x_699_ = lean_int_mul(v___x_697_, v___x_698_);
lean_dec(v___x_698_);
v___x_700_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_701_ = lean_int_add(v___x_699_, v___x_700_);
lean_dec(v___x_699_);
lean_inc(v_k_622_);
v___x_702_ = lean_nat_to_int(v_k_622_);
v___x_703_ = lean_int_sub(v___x_701_, v___x_702_);
lean_dec(v___x_702_);
lean_dec(v___x_701_);
v___x_704_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_705_ = lean_int_mul(v___x_703_, v___x_704_);
lean_dec(v___x_703_);
v___x_706_ = lean_int_add(v___x_696_, v___x_705_);
lean_dec(v___x_705_);
lean_inc(v_cx_621_);
v_fst_637_ = v_cx_621_;
v_snd_638_ = v___x_706_;
goto v___jp_636_;
}
v___jp_636_:
{
lean_object* v___x_639_; lean_object* v___x_641_; 
v___x_639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_639_, 0, v_fst_637_);
lean_ctor_set(v___x_639_, 1, v_snd_638_);
if (v_isShared_635_ == 0)
{
lean_ctor_set(v___x_634_, 1, v___x_639_);
v___x_641_ = v___x_634_;
goto v_reusejp_640_;
}
else
{
lean_object* v_reuseFailAlloc_646_; 
v_reuseFailAlloc_646_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_646_, 0, v_fst_631_);
lean_ctor_set(v_reuseFailAlloc_646_, 1, v___x_639_);
v___x_641_ = v_reuseFailAlloc_646_;
goto v_reusejp_640_;
}
v_reusejp_640_:
{
lean_object* v___x_643_; 
if (v_isShared_630_ == 0)
{
lean_ctor_set(v___x_629_, 1, v_a_624_);
lean_ctor_set(v___x_629_, 0, v___x_641_);
v___x_643_ = v___x_629_;
goto v_reusejp_642_;
}
else
{
lean_object* v_reuseFailAlloc_645_; 
v_reuseFailAlloc_645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_645_, 0, v___x_641_);
lean_ctor_set(v_reuseFailAlloc_645_, 1, v_a_624_);
v___x_643_ = v_reuseFailAlloc_645_;
goto v_reusejp_642_;
}
v_reusejp_642_:
{
v_a_623_ = v_tail_627_;
v_a_624_ = v___x_643_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___boxed(lean_object* v_name_709_, lean_object* v_cx_710_, lean_object* v_k_711_, lean_object* v_a_712_, lean_object* v_a_713_){
_start:
{
lean_object* v_res_714_; 
v_res_714_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(v_name_709_, v_cx_710_, v_k_711_, v_a_712_, v_a_713_);
lean_dec_ref(v_name_709_);
return v_res_714_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(lean_object* v_name_715_, lean_object* v_cx_716_, lean_object* v_k_717_, lean_object* v_a_718_, lean_object* v_a_719_){
_start:
{
if (lean_obj_tag(v_a_718_) == 0)
{
lean_object* v___x_720_; 
lean_dec(v_k_717_);
lean_dec(v_cx_716_);
v___x_720_ = l_List_reverse___redArg(v_a_719_);
return v___x_720_;
}
else
{
lean_object* v_head_721_; lean_object* v_tail_722_; lean_object* v___x_724_; uint8_t v_isShared_725_; uint8_t v_isSharedCheck_803_; 
v_head_721_ = lean_ctor_get(v_a_718_, 0);
v_tail_722_ = lean_ctor_get(v_a_718_, 1);
v_isSharedCheck_803_ = !lean_is_exclusive(v_a_718_);
if (v_isSharedCheck_803_ == 0)
{
v___x_724_ = v_a_718_;
v_isShared_725_ = v_isSharedCheck_803_;
goto v_resetjp_723_;
}
else
{
lean_inc(v_tail_722_);
lean_inc(v_head_721_);
lean_dec(v_a_718_);
v___x_724_ = lean_box(0);
v_isShared_725_ = v_isSharedCheck_803_;
goto v_resetjp_723_;
}
v_resetjp_723_:
{
lean_object* v_fst_726_; lean_object* v_snd_727_; lean_object* v___x_729_; uint8_t v_isShared_730_; uint8_t v_isSharedCheck_802_; 
v_fst_726_ = lean_ctor_get(v_head_721_, 0);
v_snd_727_ = lean_ctor_get(v_head_721_, 1);
v_isSharedCheck_802_ = !lean_is_exclusive(v_head_721_);
if (v_isSharedCheck_802_ == 0)
{
v___x_729_ = v_head_721_;
v_isShared_730_ = v_isSharedCheck_802_;
goto v_resetjp_728_;
}
else
{
lean_inc(v_snd_727_);
lean_inc(v_fst_726_);
lean_dec(v_head_721_);
v___x_729_ = lean_box(0);
v_isShared_730_ = v_isSharedCheck_802_;
goto v_resetjp_728_;
}
v_resetjp_728_:
{
lean_object* v_fst_732_; lean_object* v_snd_733_; lean_object* v___x_742_; uint8_t v___x_743_; 
v___x_742_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_743_ = lean_string_dec_eq(v_name_715_, v___x_742_);
if (v___x_743_ == 0)
{
lean_object* v___x_744_; uint8_t v___x_745_; 
v___x_744_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_745_ = lean_string_dec_eq(v_name_715_, v___x_744_);
if (v___x_745_ == 0)
{
double v___x_746_; double v___x_747_; double v___x_748_; lean_object* v___x_749_; lean_object* v___y_751_; uint8_t v___x_766_; 
v___x_746_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0);
v___x_747_ = lean_float_of_nat(v_snd_727_);
v___x_748_ = lean_float_mul(v___x_746_, v___x_747_);
v___x_749_ = lean_unsigned_to_nat(1u);
v___x_766_ = lean_nat_dec_le(v___x_749_, v_k_717_);
if (v___x_766_ == 0)
{
v___y_751_ = v___x_749_;
goto v___jp_750_;
}
else
{
lean_inc(v_k_717_);
v___y_751_ = v_k_717_;
goto v___jp_750_;
}
v___jp_750_:
{
double v___x_752_; double v_a_753_; double v___x_754_; double v___x_755_; double v___x_756_; uint64_t v___x_757_; lean_object* v___x_758_; lean_object* v___x_759_; lean_object* v___x_760_; double v___x_761_; double v___x_762_; uint64_t v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; 
v___x_752_ = lean_float_of_nat(v___y_751_);
v_a_753_ = lean_float_div(v___x_748_, v___x_752_);
v___x_754_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1);
v___x_755_ = cos(v_a_753_);
v___x_756_ = lean_float_mul(v___x_754_, v___x_755_);
v___x_757_ = lean_float_to_int64(v___x_756_);
v___x_758_ = lean_int64_to_int_sint(v___x_757_);
v___x_759_ = lean_int_add(v_cx_716_, v___x_758_);
lean_dec(v___x_758_);
v___x_760_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_761_ = sin(v_a_753_);
v___x_762_ = lean_float_mul(v___x_754_, v___x_761_);
v___x_763_ = lean_float_to_int64(v___x_762_);
v___x_764_ = lean_int64_to_int_sint(v___x_763_);
v___x_765_ = lean_int_add(v___x_760_, v___x_764_);
lean_dec(v___x_764_);
v_fst_732_ = v___x_759_;
v_snd_733_ = v___x_765_;
goto v___jp_731_;
}
}
else
{
lean_object* v___x_767_; lean_object* v___y_769_; lean_object* v___x_786_; lean_object* v___x_787_; uint8_t v___x_788_; 
v___x_767_ = lean_unsigned_to_nat(2u);
v___x_786_ = lean_nat_mod(v_snd_727_, v___x_767_);
v___x_787_ = lean_unsigned_to_nat(0u);
v___x_788_ = lean_nat_dec_eq(v___x_786_, v___x_787_);
lean_dec(v___x_786_);
if (v___x_788_ == 0)
{
lean_object* v___x_789_; 
v___x_789_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___y_769_ = v___x_789_;
goto v___jp_768_;
}
else
{
lean_object* v___x_790_; 
v___x_790_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4);
v___y_769_ = v___x_790_;
goto v___jp_768_;
}
v___jp_768_:
{
lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; lean_object* v___x_775_; lean_object* v___x_776_; lean_object* v___x_777_; lean_object* v___x_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; 
v___x_770_ = lean_int_add(v_cx_716_, v___y_769_);
v___x_771_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_772_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_773_ = lean_unsigned_to_nat(1u);
v___x_774_ = lean_nat_shiftr(v_snd_727_, v___x_773_);
lean_dec(v_snd_727_);
v___x_775_ = lean_nat_to_int(v___x_774_);
v___x_776_ = lean_int_mul(v___x_772_, v___x_775_);
lean_dec(v___x_775_);
v___x_777_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_778_ = lean_int_add(v___x_776_, v___x_777_);
lean_dec(v___x_776_);
v___x_779_ = lean_nat_add(v_k_717_, v___x_773_);
v___x_780_ = lean_nat_shiftr(v___x_779_, v___x_773_);
lean_dec(v___x_779_);
v___x_781_ = lean_nat_to_int(v___x_780_);
v___x_782_ = lean_int_sub(v___x_778_, v___x_781_);
lean_dec(v___x_781_);
lean_dec(v___x_778_);
v___x_783_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2);
v___x_784_ = lean_int_mul(v___x_782_, v___x_783_);
lean_dec(v___x_782_);
v___x_785_ = lean_int_add(v___x_771_, v___x_784_);
lean_dec(v___x_784_);
v_fst_732_ = v___x_770_;
v_snd_733_ = v___x_785_;
goto v___jp_731_;
}
}
}
else
{
lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; lean_object* v___x_797_; lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; lean_object* v___x_801_; 
v___x_791_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_792_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_793_ = lean_nat_to_int(v_snd_727_);
v___x_794_ = lean_int_mul(v___x_792_, v___x_793_);
lean_dec(v___x_793_);
v___x_795_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_796_ = lean_int_add(v___x_794_, v___x_795_);
lean_dec(v___x_794_);
lean_inc(v_k_717_);
v___x_797_ = lean_nat_to_int(v_k_717_);
v___x_798_ = lean_int_sub(v___x_796_, v___x_797_);
lean_dec(v___x_797_);
lean_dec(v___x_796_);
v___x_799_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_800_ = lean_int_mul(v___x_798_, v___x_799_);
lean_dec(v___x_798_);
v___x_801_ = lean_int_add(v___x_791_, v___x_800_);
lean_dec(v___x_800_);
lean_inc(v_cx_716_);
v_fst_732_ = v_cx_716_;
v_snd_733_ = v___x_801_;
goto v___jp_731_;
}
v___jp_731_:
{
lean_object* v___x_734_; lean_object* v___x_736_; 
v___x_734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_734_, 0, v_fst_732_);
lean_ctor_set(v___x_734_, 1, v_snd_733_);
if (v_isShared_730_ == 0)
{
lean_ctor_set(v___x_729_, 1, v___x_734_);
v___x_736_ = v___x_729_;
goto v_reusejp_735_;
}
else
{
lean_object* v_reuseFailAlloc_741_; 
v_reuseFailAlloc_741_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_741_, 0, v_fst_726_);
lean_ctor_set(v_reuseFailAlloc_741_, 1, v___x_734_);
v___x_736_ = v_reuseFailAlloc_741_;
goto v_reusejp_735_;
}
v_reusejp_735_:
{
lean_object* v___x_738_; 
if (v_isShared_725_ == 0)
{
lean_ctor_set(v___x_724_, 1, v_a_719_);
lean_ctor_set(v___x_724_, 0, v___x_736_);
v___x_738_ = v___x_724_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v___x_736_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_a_719_);
v___x_738_ = v_reuseFailAlloc_740_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
lean_object* v___x_739_; 
v___x_739_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(v_name_715_, v_cx_716_, v_k_717_, v_tail_722_, v___x_738_);
return v___x_739_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0___boxed(lean_object* v_name_804_, lean_object* v_cx_805_, lean_object* v_k_806_, lean_object* v_a_807_, lean_object* v_a_808_){
_start:
{
lean_object* v_res_809_; 
v_res_809_ = lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(v_name_804_, v_cx_805_, v_k_806_, v_a_807_, v_a_808_);
lean_dec_ref(v_name_804_);
return v_res_809_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces(lean_object* v_name_810_, lean_object* v_ids_811_, lean_object* v_cx_812_){
_start:
{
lean_object* v_k_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; 
v_k_813_ = l_List_lengthTR___redArg(v_ids_811_);
v___x_814_ = lean_unsigned_to_nat(0u);
v___x_815_ = l_List_zipIdxTR___redArg(v_ids_811_, v___x_814_);
v___x_816_ = lean_box(0);
v___x_817_ = lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(v_name_810_, v_cx_812_, v_k_813_, v___x_815_, v___x_816_);
return v___x_817_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces___boxed(lean_object* v_name_818_, lean_object* v_ids_819_, lean_object* v_cx_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = lp_choreo_Choreo_halfPlaces(v_name_818_, v_ids_819_, v_cx_820_);
lean_dec_ref(v_name_818_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(lean_object* v_i_822_, lean_object* v_x_823_){
_start:
{
if (lean_obj_tag(v_x_823_) == 0)
{
lean_object* v___x_824_; 
v___x_824_ = lean_box(0);
return v___x_824_;
}
else
{
lean_object* v_head_825_; lean_object* v_tail_826_; lean_object* v_fst_827_; uint8_t v___x_828_; 
v_head_825_ = lean_ctor_get(v_x_823_, 0);
v_tail_826_ = lean_ctor_get(v_x_823_, 1);
v_fst_827_ = lean_ctor_get(v_head_825_, 0);
v___x_828_ = lean_nat_dec_eq(v_fst_827_, v_i_822_);
if (v___x_828_ == 0)
{
v_x_823_ = v_tail_826_;
goto _start;
}
else
{
lean_object* v___x_830_; 
lean_inc(v_head_825_);
v___x_830_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_830_, 0, v_head_825_);
return v___x_830_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0___boxed(lean_object* v_i_831_, lean_object* v_x_832_){
_start:
{
lean_object* v_res_833_; 
v_res_833_ = lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(v_i_831_, v_x_832_);
lean_dec(v_x_832_);
lean_dec(v_i_831_);
return v_res_833_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(lean_object* v_l_834_, lean_object* v_s_835_, lean_object* v_a_836_, lean_object* v_a_837_){
_start:
{
if (lean_obj_tag(v_a_836_) == 0)
{
lean_object* v___x_838_; 
v___x_838_ = l_List_reverse___redArg(v_a_837_);
return v___x_838_;
}
else
{
lean_object* v_head_839_; lean_object* v_tail_840_; lean_object* v___x_842_; uint8_t v_isShared_843_; uint8_t v_isSharedCheck_854_; 
v_head_839_ = lean_ctor_get(v_a_836_, 0);
v_tail_840_ = lean_ctor_get(v_a_836_, 1);
v_isSharedCheck_854_ = !lean_is_exclusive(v_a_836_);
if (v_isSharedCheck_854_ == 0)
{
v___x_842_ = v_a_836_;
v_isShared_843_ = v_isSharedCheck_854_;
goto v_resetjp_841_;
}
else
{
lean_inc(v_tail_840_);
lean_inc(v_head_839_);
lean_dec(v_a_836_);
v___x_842_ = lean_box(0);
v_isShared_843_ = v_isSharedCheck_854_;
goto v_resetjp_841_;
}
v_resetjp_841_:
{
lean_object* v___y_845_; lean_object* v___x_850_; 
v___x_850_ = lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(v_head_839_, v_l_834_);
if (lean_obj_tag(v___x_850_) == 0)
{
lean_object* v___x_851_; 
v___x_851_ = lp_choreo_Choreo_State_at(v_s_835_, v_head_839_);
v___y_845_ = v___x_851_;
goto v___jp_844_;
}
else
{
lean_object* v_val_852_; lean_object* v_snd_853_; 
lean_dec(v_head_839_);
v_val_852_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_val_852_);
lean_dec_ref_known(v___x_850_, 1);
v_snd_853_ = lean_ctor_get(v_val_852_, 1);
lean_inc(v_snd_853_);
lean_dec(v_val_852_);
v___y_845_ = v_snd_853_;
goto v___jp_844_;
}
v___jp_844_:
{
lean_object* v___x_847_; 
if (v_isShared_843_ == 0)
{
lean_ctor_set(v___x_842_, 1, v_a_837_);
lean_ctor_set(v___x_842_, 0, v___y_845_);
v___x_847_ = v___x_842_;
goto v_reusejp_846_;
}
else
{
lean_object* v_reuseFailAlloc_849_; 
v_reuseFailAlloc_849_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_849_, 0, v___y_845_);
lean_ctor_set(v_reuseFailAlloc_849_, 1, v_a_837_);
v___x_847_ = v_reuseFailAlloc_849_;
goto v_reusejp_846_;
}
v_reusejp_846_:
{
v_a_836_ = v_tail_840_;
v_a_837_ = v___x_847_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1___boxed(lean_object* v_l_855_, lean_object* v_s_856_, lean_object* v_a_857_, lean_object* v_a_858_){
_start:
{
lean_object* v_res_859_; 
v_res_859_ = lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(v_l_855_, v_s_856_, v_a_857_, v_a_858_);
lean_dec(v_s_856_);
lean_dec(v_l_855_);
return v_res_859_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith(lean_object* v_n_860_, lean_object* v_l_861_, lean_object* v_s_862_){
_start:
{
lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; 
v___x_863_ = l_List_range(v_n_860_);
v___x_864_ = lean_box(0);
v___x_865_ = lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(v_l_861_, v_s_862_, v___x_863_, v___x_864_);
return v___x_865_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith___boxed(lean_object* v_n_866_, lean_object* v_l_867_, lean_object* v_s_868_){
_start:
{
lean_object* v_res_869_; 
v_res_869_ = lp_choreo_Choreo_placesWith(v_n_866_, v_l_867_, v_s_868_);
lean_dec(v_s_868_);
lean_dec(v_l_867_);
return v_res_869_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(lean_object* v_s_883_, lean_object* v_a_884_, lean_object* v_a_885_){
_start:
{
if (lean_obj_tag(v_a_884_) == 0)
{
lean_object* v___x_886_; 
v___x_886_ = l_List_reverse___redArg(v_a_885_);
return v___x_886_;
}
else
{
lean_object* v_head_887_; lean_object* v_tail_888_; lean_object* v___x_890_; uint8_t v_isShared_891_; uint8_t v_isSharedCheck_901_; 
v_head_887_ = lean_ctor_get(v_a_884_, 0);
v_tail_888_ = lean_ctor_get(v_a_884_, 1);
v_isSharedCheck_901_ = !lean_is_exclusive(v_a_884_);
if (v_isSharedCheck_901_ == 0)
{
v___x_890_ = v_a_884_;
v_isShared_891_ = v_isSharedCheck_901_;
goto v_resetjp_889_;
}
else
{
lean_inc(v_tail_888_);
lean_inc(v_head_887_);
lean_dec(v_a_884_);
v___x_890_ = lean_box(0);
v_isShared_891_ = v_isSharedCheck_901_;
goto v_resetjp_889_;
}
v_resetjp_889_:
{
lean_object* v___x_892_; lean_object* v_x_893_; lean_object* v___x_894_; uint8_t v___x_895_; 
lean_inc(v_head_887_);
v___x_892_ = lp_choreo_Choreo_State_at(v_s_883_, v_head_887_);
v_x_893_ = lean_ctor_get(v___x_892_, 0);
lean_inc(v_x_893_);
lean_dec_ref(v___x_892_);
v___x_894_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_895_ = lean_int_dec_lt(v_x_893_, v___x_894_);
lean_dec(v_x_893_);
if (v___x_895_ == 0)
{
lean_del_object(v___x_890_);
lean_dec(v_head_887_);
v_a_884_ = v_tail_888_;
goto _start;
}
else
{
lean_object* v___x_898_; 
if (v_isShared_891_ == 0)
{
lean_ctor_set(v___x_890_, 1, v_a_885_);
v___x_898_ = v___x_890_;
goto v_reusejp_897_;
}
else
{
lean_object* v_reuseFailAlloc_900_; 
v_reuseFailAlloc_900_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_900_, 0, v_head_887_);
lean_ctor_set(v_reuseFailAlloc_900_, 1, v_a_885_);
v___x_898_ = v_reuseFailAlloc_900_;
goto v_reusejp_897_;
}
v_reusejp_897_:
{
v_a_884_ = v_tail_888_;
v_a_885_ = v___x_898_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0___boxed(lean_object* v_s_902_, lean_object* v_a_903_, lean_object* v_a_904_){
_start:
{
lean_object* v_res_905_; 
v_res_905_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(v_s_902_, v_a_903_, v_a_904_);
lean_dec(v_s_902_);
return v_res_905_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(lean_object* v_s_906_, lean_object* v_a_907_, lean_object* v_a_908_){
_start:
{
if (lean_obj_tag(v_a_907_) == 0)
{
lean_object* v___x_909_; 
v___x_909_ = l_List_reverse___redArg(v_a_908_);
return v___x_909_;
}
else
{
lean_object* v_head_910_; lean_object* v_tail_911_; lean_object* v___x_913_; uint8_t v_isShared_914_; uint8_t v_isSharedCheck_924_; 
v_head_910_ = lean_ctor_get(v_a_907_, 0);
v_tail_911_ = lean_ctor_get(v_a_907_, 1);
v_isSharedCheck_924_ = !lean_is_exclusive(v_a_907_);
if (v_isSharedCheck_924_ == 0)
{
v___x_913_ = v_a_907_;
v_isShared_914_ = v_isSharedCheck_924_;
goto v_resetjp_912_;
}
else
{
lean_inc(v_tail_911_);
lean_inc(v_head_910_);
lean_dec(v_a_907_);
v___x_913_ = lean_box(0);
v_isShared_914_ = v_isSharedCheck_924_;
goto v_resetjp_912_;
}
v_resetjp_912_:
{
lean_object* v___x_915_; lean_object* v_x_916_; lean_object* v___x_917_; uint8_t v___x_918_; 
lean_inc(v_head_910_);
v___x_915_ = lp_choreo_Choreo_State_at(v_s_906_, v_head_910_);
v_x_916_ = lean_ctor_get(v___x_915_, 0);
lean_inc(v_x_916_);
lean_dec_ref(v___x_915_);
v___x_917_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_918_ = lean_int_dec_le(v___x_917_, v_x_916_);
lean_dec(v_x_916_);
if (v___x_918_ == 0)
{
lean_del_object(v___x_913_);
lean_dec(v_head_910_);
v_a_907_ = v_tail_911_;
goto _start;
}
else
{
lean_object* v___x_921_; 
if (v_isShared_914_ == 0)
{
lean_ctor_set(v___x_913_, 1, v_a_908_);
v___x_921_ = v___x_913_;
goto v_reusejp_920_;
}
else
{
lean_object* v_reuseFailAlloc_923_; 
v_reuseFailAlloc_923_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_923_, 0, v_head_910_);
lean_ctor_set(v_reuseFailAlloc_923_, 1, v_a_908_);
v___x_921_ = v_reuseFailAlloc_923_;
goto v_reusejp_920_;
}
v_reusejp_920_:
{
v_a_907_ = v_tail_911_;
v_a_908_ = v___x_921_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1___boxed(lean_object* v_s_925_, lean_object* v_a_926_, lean_object* v_a_927_){
_start:
{
lean_object* v_res_928_; 
v_res_928_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(v_s_925_, v_a_926_, v_a_927_);
lean_dec(v_s_925_);
return v_res_928_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf(lean_object* v_s_929_, lean_object* v_n_930_){
_start:
{
lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; lean_object* v___x_935_; 
v___x_931_ = l_List_range(v_n_930_);
v___x_932_ = lean_box(0);
lean_inc(v___x_931_);
v___x_933_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(v_s_929_, v___x_931_, v___x_932_);
v___x_934_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(v_s_929_, v___x_931_, v___x_932_);
v___x_935_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_935_, 0, v___x_933_);
lean_ctor_set(v___x_935_, 1, v___x_934_);
return v___x_935_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf___boxed(lean_object* v_s_936_, lean_object* v_n_937_){
_start:
{
lean_object* v_res_938_; 
v_res_938_ = lp_choreo_Choreo_groupsOf(v_s_936_, v_n_937_);
lean_dec(v_s_936_);
return v_res_938_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo(lean_object* v_from_x27_939_, lean_object* v_places_940_){
_start:
{
lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; lean_object* v_idx_944_; lean_object* v___x_945_; lean_object* v___x_946_; 
v___x_941_ = lean_unsigned_to_nat(6u);
v___x_942_ = l_List_lengthTR___redArg(v_from_x27_939_);
v___x_943_ = l_List_range(v___x_942_);
v_idx_944_ = lp_choreo_Choreo_improveAssign(v_from_x27_939_, v_places_940_, v___x_941_, v___x_943_);
v___x_945_ = lean_box(0);
v___x_946_ = lp_choreo_List_mapTR_loop___at___00Choreo_wayDrafts_spec__3(v_places_940_, v_idx_944_, v___x_945_);
return v___x_946_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo___boxed(lean_object* v_from_x27_947_, lean_object* v_places_948_){
_start:
{
lean_object* v_res_949_; 
v_res_949_ = lp_choreo_Choreo_assignTo(v_from_x27_947_, v_places_948_);
lean_dec(v_places_948_);
lean_dec(v_from_x27_947_);
return v_res_949_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0(lean_object* v_title_950_, lean_object* v_fallback_951_){
_start:
{
lean_object* v___x_952_; lean_object* v___x_953_; uint8_t v___x_954_; 
v___x_952_ = lean_string_utf8_byte_size(v_title_950_);
v___x_953_ = lean_unsigned_to_nat(0u);
v___x_954_ = lean_nat_dec_eq(v___x_952_, v___x_953_);
if (v___x_954_ == 0)
{
lean_inc_ref(v_title_950_);
return v_title_950_;
}
else
{
lean_inc_ref(v_fallback_951_);
return v_fallback_951_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0___boxed(lean_object* v_title_955_, lean_object* v_fallback_956_){
_start:
{
lean_object* v_res_957_; 
v_res_957_ = lp_choreo_Choreo_compileOp___lam__0(v_title_955_, v_fallback_956_);
lean_dec_ref(v_fallback_956_);
lean_dec_ref(v_title_955_);
return v_res_957_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(lean_object* v_dx_958_, lean_object* v_dy_959_, lean_object* v_a_960_, lean_object* v_a_961_){
_start:
{
if (lean_obj_tag(v_a_960_) == 0)
{
lean_object* v___x_962_; 
lean_dec(v_dy_959_);
lean_dec(v_dx_958_);
v___x_962_ = l_List_reverse___redArg(v_a_961_);
return v___x_962_;
}
else
{
lean_object* v_tail_963_; lean_object* v___x_965_; uint8_t v_isShared_966_; uint8_t v_isSharedCheck_972_; 
v_tail_963_ = lean_ctor_get(v_a_960_, 1);
v_isSharedCheck_972_ = !lean_is_exclusive(v_a_960_);
if (v_isSharedCheck_972_ == 0)
{
lean_object* v_unused_973_; 
v_unused_973_ = lean_ctor_get(v_a_960_, 0);
lean_dec(v_unused_973_);
v___x_965_ = v_a_960_;
v_isShared_966_ = v_isSharedCheck_972_;
goto v_resetjp_964_;
}
else
{
lean_inc(v_tail_963_);
lean_dec(v_a_960_);
v___x_965_ = lean_box(0);
v_isShared_966_ = v_isSharedCheck_972_;
goto v_resetjp_964_;
}
v_resetjp_964_:
{
lean_object* v___x_967_; lean_object* v___x_969_; 
lean_inc(v_dy_959_);
lean_inc(v_dx_958_);
v___x_967_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_967_, 0, v_dx_958_);
lean_ctor_set(v___x_967_, 1, v_dy_959_);
if (v_isShared_966_ == 0)
{
lean_ctor_set(v___x_965_, 1, v_a_961_);
lean_ctor_set(v___x_965_, 0, v___x_967_);
v___x_969_ = v___x_965_;
goto v_reusejp_968_;
}
else
{
lean_object* v_reuseFailAlloc_971_; 
v_reuseFailAlloc_971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_971_, 0, v___x_967_);
lean_ctor_set(v_reuseFailAlloc_971_, 1, v_a_961_);
v___x_969_ = v_reuseFailAlloc_971_;
goto v_reusejp_968_;
}
v_reusejp_968_:
{
v_a_960_ = v_tail_963_;
v_a_961_ = v___x_969_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__1(lean_object* v_n_974_, lean_object* v_dx_975_, lean_object* v_dy_976_){
_start:
{
lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; 
v___x_977_ = l_List_range(v_n_974_);
v___x_978_ = lean_box(0);
v___x_979_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_dx_975_, v_dy_976_, v___x_977_, v___x_978_);
return v___x_979_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(lean_object* v_s_980_, lean_object* v_a_981_, lean_object* v_a_982_){
_start:
{
if (lean_obj_tag(v_a_981_) == 0)
{
lean_object* v___x_983_; 
v___x_983_ = l_List_reverse___redArg(v_a_982_);
return v___x_983_;
}
else
{
lean_object* v_head_984_; lean_object* v_tail_985_; lean_object* v___x_987_; uint8_t v_isShared_988_; uint8_t v_isSharedCheck_994_; 
v_head_984_ = lean_ctor_get(v_a_981_, 0);
v_tail_985_ = lean_ctor_get(v_a_981_, 1);
v_isSharedCheck_994_ = !lean_is_exclusive(v_a_981_);
if (v_isSharedCheck_994_ == 0)
{
v___x_987_ = v_a_981_;
v_isShared_988_ = v_isSharedCheck_994_;
goto v_resetjp_986_;
}
else
{
lean_inc(v_tail_985_);
lean_inc(v_head_984_);
lean_dec(v_a_981_);
v___x_987_ = lean_box(0);
v_isShared_988_ = v_isSharedCheck_994_;
goto v_resetjp_986_;
}
v_resetjp_986_:
{
lean_object* v___x_989_; lean_object* v___x_991_; 
v___x_989_ = lp_choreo_Choreo_State_at(v_s_980_, v_head_984_);
if (v_isShared_988_ == 0)
{
lean_ctor_set(v___x_987_, 1, v_a_982_);
lean_ctor_set(v___x_987_, 0, v___x_989_);
v___x_991_ = v___x_987_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v___x_989_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v_a_982_);
v___x_991_ = v_reuseFailAlloc_993_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
v_a_981_ = v_tail_985_;
v_a_982_ = v___x_991_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2___boxed(lean_object* v_s_995_, lean_object* v_a_996_, lean_object* v_a_997_){
_start:
{
lean_object* v_res_998_; 
v_res_998_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(v_s_995_, v_a_996_, v_a_997_);
lean_dec(v_s_995_);
return v_res_998_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__1(lean_object* v_a_999_, lean_object* v_a_1000_){
_start:
{
if (lean_obj_tag(v_a_999_) == 0)
{
lean_object* v___x_1001_; 
v___x_1001_ = l_List_reverse___redArg(v_a_1000_);
return v___x_1001_;
}
else
{
lean_object* v_head_1002_; lean_object* v_tail_1003_; lean_object* v___x_1005_; uint8_t v_isShared_1006_; uint8_t v_isSharedCheck_1012_; 
v_head_1002_ = lean_ctor_get(v_a_999_, 0);
v_tail_1003_ = lean_ctor_get(v_a_999_, 1);
v_isSharedCheck_1012_ = !lean_is_exclusive(v_a_999_);
if (v_isSharedCheck_1012_ == 0)
{
v___x_1005_ = v_a_999_;
v_isShared_1006_ = v_isSharedCheck_1012_;
goto v_resetjp_1004_;
}
else
{
lean_inc(v_tail_1003_);
lean_inc(v_head_1002_);
lean_dec(v_a_999_);
v___x_1005_ = lean_box(0);
v_isShared_1006_ = v_isSharedCheck_1012_;
goto v_resetjp_1004_;
}
v_resetjp_1004_:
{
lean_object* v_snd_1007_; lean_object* v___x_1009_; 
v_snd_1007_ = lean_ctor_get(v_head_1002_, 1);
lean_inc(v_snd_1007_);
lean_dec(v_head_1002_);
if (v_isShared_1006_ == 0)
{
lean_ctor_set(v___x_1005_, 1, v_a_1000_);
lean_ctor_set(v___x_1005_, 0, v_snd_1007_);
v___x_1009_ = v___x_1005_;
goto v_reusejp_1008_;
}
else
{
lean_object* v_reuseFailAlloc_1011_; 
v_reuseFailAlloc_1011_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1011_, 0, v_snd_1007_);
lean_ctor_set(v_reuseFailAlloc_1011_, 1, v_a_1000_);
v___x_1009_ = v_reuseFailAlloc_1011_;
goto v_reusejp_1008_;
}
v_reusejp_1008_:
{
v_a_999_ = v_tail_1003_;
v_a_1000_ = v___x_1009_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(lean_object* v_idx_1013_, lean_object* v_places_1014_, lean_object* v_a_1015_, lean_object* v_a_1016_){
_start:
{
if (lean_obj_tag(v_a_1015_) == 0)
{
lean_object* v___x_1017_; 
v___x_1017_ = l_List_reverse___redArg(v_a_1016_);
return v___x_1017_;
}
else
{
lean_object* v_head_1018_; lean_object* v_tail_1019_; lean_object* v___x_1021_; uint8_t v_isShared_1022_; uint8_t v_isSharedCheck_1040_; 
v_head_1018_ = lean_ctor_get(v_a_1015_, 0);
v_tail_1019_ = lean_ctor_get(v_a_1015_, 1);
v_isSharedCheck_1040_ = !lean_is_exclusive(v_a_1015_);
if (v_isSharedCheck_1040_ == 0)
{
v___x_1021_ = v_a_1015_;
v_isShared_1022_ = v_isSharedCheck_1040_;
goto v_resetjp_1020_;
}
else
{
lean_inc(v_tail_1019_);
lean_inc(v_head_1018_);
lean_dec(v_a_1015_);
v___x_1021_ = lean_box(0);
v_isShared_1022_ = v_isSharedCheck_1040_;
goto v_resetjp_1020_;
}
v_resetjp_1020_:
{
lean_object* v_fst_1023_; lean_object* v_snd_1024_; lean_object* v___x_1026_; uint8_t v_isShared_1027_; uint8_t v_isSharedCheck_1039_; 
v_fst_1023_ = lean_ctor_get(v_head_1018_, 0);
v_snd_1024_ = lean_ctor_get(v_head_1018_, 1);
v_isSharedCheck_1039_ = !lean_is_exclusive(v_head_1018_);
if (v_isSharedCheck_1039_ == 0)
{
v___x_1026_ = v_head_1018_;
v_isShared_1027_ = v_isSharedCheck_1039_;
goto v_resetjp_1025_;
}
else
{
lean_inc(v_snd_1024_);
lean_inc(v_fst_1023_);
lean_dec(v_head_1018_);
v___x_1026_ = lean_box(0);
v_isShared_1027_ = v_isSharedCheck_1039_;
goto v_resetjp_1025_;
}
v_resetjp_1025_:
{
lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1033_; 
v___x_1028_ = lean_unsigned_to_nat(0u);
v___x_1029_ = l_List_getD___redArg(v_idx_1013_, v_snd_1024_, v___x_1028_);
v___x_1030_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_1031_ = l_List_getD___redArg(v_places_1014_, v___x_1029_, v___x_1030_);
if (v_isShared_1027_ == 0)
{
lean_ctor_set(v___x_1026_, 1, v___x_1031_);
v___x_1033_ = v___x_1026_;
goto v_reusejp_1032_;
}
else
{
lean_object* v_reuseFailAlloc_1038_; 
v_reuseFailAlloc_1038_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1038_, 0, v_fst_1023_);
lean_ctor_set(v_reuseFailAlloc_1038_, 1, v___x_1031_);
v___x_1033_ = v_reuseFailAlloc_1038_;
goto v_reusejp_1032_;
}
v_reusejp_1032_:
{
lean_object* v___x_1035_; 
if (v_isShared_1022_ == 0)
{
lean_ctor_set(v___x_1021_, 1, v_a_1016_);
lean_ctor_set(v___x_1021_, 0, v___x_1033_);
v___x_1035_ = v___x_1021_;
goto v_reusejp_1034_;
}
else
{
lean_object* v_reuseFailAlloc_1037_; 
v_reuseFailAlloc_1037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1037_, 0, v___x_1033_);
lean_ctor_set(v_reuseFailAlloc_1037_, 1, v_a_1016_);
v___x_1035_ = v_reuseFailAlloc_1037_;
goto v_reusejp_1034_;
}
v_reusejp_1034_:
{
v_a_1015_ = v_tail_1019_;
v_a_1016_ = v___x_1035_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3___boxed(lean_object* v_idx_1041_, lean_object* v_places_1042_, lean_object* v_a_1043_, lean_object* v_a_1044_){
_start:
{
lean_object* v_res_1045_; 
v_res_1045_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(v_idx_1041_, v_places_1042_, v_a_1043_, v_a_1044_);
lean_dec(v_places_1042_);
lean_dec(v_idx_1041_);
return v_res_1045_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2(lean_object* v_pos_1046_, lean_object* v_g_1047_, lean_object* v_name_1048_, lean_object* v_cx_1049_){
_start:
{
lean_object* v___x_1050_; lean_object* v___x_1051_; lean_object* v_places_1052_; lean_object* v___x_1053_; lean_object* v___x_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v_idx_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; 
lean_inc_n(v_g_1047_, 2);
v___x_1050_ = lp_choreo_Choreo_halfPlaces(v_name_1048_, v_g_1047_, v_cx_1049_);
v___x_1051_ = lean_box(0);
v_places_1052_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__1(v___x_1050_, v___x_1051_);
v___x_1053_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(v_pos_1046_, v_g_1047_, v___x_1051_);
v___x_1054_ = lean_unsigned_to_nat(6u);
v___x_1055_ = l_List_lengthTR___redArg(v_g_1047_);
v___x_1056_ = l_List_range(v___x_1055_);
v_idx_1057_ = lp_choreo_Choreo_improveAssign(v___x_1053_, v_places_1052_, v___x_1054_, v___x_1056_);
lean_dec(v___x_1053_);
v___x_1058_ = lean_unsigned_to_nat(0u);
v___x_1059_ = l_List_zipIdxTR___redArg(v_g_1047_, v___x_1058_);
v___x_1060_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(v_idx_1057_, v_places_1052_, v___x_1059_, v___x_1051_);
lean_dec(v_places_1052_);
lean_dec(v_idx_1057_);
return v___x_1060_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2___boxed(lean_object* v_pos_1061_, lean_object* v_g_1062_, lean_object* v_name_1063_, lean_object* v_cx_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_1061_, v_g_1062_, v_name_1063_, v_cx_1064_);
lean_dec_ref(v_name_1063_);
lean_dec(v_pos_1061_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8___lam__1(lean_object* v_n_1066_, lean_object* v_section_x27_1067_, lean_object* v_index_1068_, lean_object* v_name_1069_, lean_object* v_kind_1070_, lean_object* v_label_1071_, lean_object* v_step_1072_, lean_object* v_rq_1073_, lean_object* v_en_1074_, lean_object* v_st_1075_, lean_object* v_algebra_1076_){
_start:
{
lean_object* v_op_1077_; lean_object* v_pos_1078_; lean_object* v_steps_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1091_; 
v_op_1077_ = lean_ctor_get(v_step_1072_, 0);
v_pos_1078_ = lean_ctor_get(v_st_1075_, 0);
v_steps_1079_ = lean_ctor_get(v_st_1075_, 1);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_st_1075_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1081_ = v_st_1075_;
v_isShared_1082_ = v_isSharedCheck_1091_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_steps_1079_);
lean_inc(v_pos_1078_);
lean_dec(v_st_1075_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1091_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v_next_1083_; lean_object* v___x_1084_; lean_object* v___x_1085_; lean_object* v___x_1086_; lean_object* v___x_1087_; lean_object* v___x_1089_; 
lean_inc_ref(v_op_1077_);
v_next_1083_ = lp_choreo_Choreo_Op_next(v_op_1077_, v_n_1066_, v_pos_1078_);
lean_inc(v_next_1083_);
v___x_1084_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1084_, 0, v_name_1069_);
lean_ctor_set(v___x_1084_, 1, v_section_x27_1067_);
lean_ctor_set(v___x_1084_, 2, v_index_1068_);
lean_ctor_set(v___x_1084_, 3, v_kind_1070_);
lean_ctor_set(v___x_1084_, 4, v_label_1071_);
lean_ctor_set(v___x_1084_, 5, v_step_1072_);
lean_ctor_set(v___x_1084_, 6, v_rq_1073_);
lean_ctor_set(v___x_1084_, 7, v_en_1074_);
lean_ctor_set(v___x_1084_, 8, v_pos_1078_);
lean_ctor_set(v___x_1084_, 9, v_next_1083_);
lean_ctor_set(v___x_1084_, 10, v_algebra_1076_);
v___x_1085_ = lean_box(0);
v___x_1086_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1086_, 0, v___x_1084_);
lean_ctor_set(v___x_1086_, 1, v___x_1085_);
v___x_1087_ = l_List_appendTR___redArg(v_steps_1079_, v___x_1086_);
if (v_isShared_1082_ == 0)
{
lean_ctor_set(v___x_1081_, 1, v___x_1087_);
lean_ctor_set(v___x_1081_, 0, v_next_1083_);
v___x_1089_ = v___x_1081_;
goto v_reusejp_1088_;
}
else
{
lean_object* v_reuseFailAlloc_1090_; 
v_reuseFailAlloc_1090_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1090_, 0, v_next_1083_);
lean_ctor_set(v_reuseFailAlloc_1090_, 1, v___x_1087_);
v___x_1089_ = v_reuseFailAlloc_1090_;
goto v_reusejp_1088_;
}
v_reusejp_1088_:
{
return v___x_1089_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9(lean_object* v_o_1099_, lean_object* v_n_1100_, lean_object* v_gap_1101_, lean_object* v_x_1102_, lean_object* v_x_1103_){
_start:
{
if (lean_obj_tag(v_x_1103_) == 0)
{
lean_dec(v_gap_1101_);
lean_dec(v_n_1100_);
lean_dec_ref(v_o_1099_);
return v_x_1102_;
}
else
{
lean_object* v_tail_1104_; lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1158_; 
v_tail_1104_ = lean_ctor_get(v_x_1103_, 1);
v_isSharedCheck_1158_ = !lean_is_exclusive(v_x_1103_);
if (v_isSharedCheck_1158_ == 0)
{
lean_object* v_unused_1159_; 
v_unused_1159_ = lean_ctor_get(v_x_1103_, 0);
lean_dec(v_unused_1159_);
v___x_1106_ = v_x_1103_;
v_isShared_1107_ = v_isSharedCheck_1158_;
goto v_resetjp_1105_;
}
else
{
lean_inc(v_tail_1104_);
lean_dec(v_x_1103_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1158_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v_section_x27_1108_; lean_object* v_title_1109_; lean_object* v_counts_1110_; lean_object* v_quarters_1111_; uint8_t v_ccw_1112_; lean_object* v_index_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; lean_object* v___x_1124_; lean_object* v___x_1125_; lean_object* v___x_1126_; lean_object* v___x_1128_; 
v_section_x27_1108_ = lean_ctor_get(v_o_1099_, 1);
v_title_1109_ = lean_ctor_get(v_o_1099_, 2);
v_counts_1110_ = lean_ctor_get(v_o_1099_, 4);
v_quarters_1111_ = lean_ctor_get(v_o_1099_, 5);
v_ccw_1112_ = lean_ctor_get_uint8(v_o_1099_, sizeof(void*)*16);
v_index_1113_ = lean_ctor_get(v_o_1099_, 15);
v___x_1114_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__0));
v___x_1115_ = lean_unsigned_to_nat(90u);
v___x_1116_ = lean_nat_mul(v_quarters_1111_, v___x_1115_);
v___x_1117_ = l_Nat_reprFast(v___x_1116_);
v___x_1118_ = lean_string_append(v___x_1114_, v___x_1117_);
lean_dec_ref(v___x_1117_);
v___x_1119_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__1));
v___x_1120_ = lean_string_append(v___x_1118_, v___x_1119_);
v___x_1121_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1109_, v___x_1120_);
lean_dec_ref(v___x_1120_);
v___x_1122_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__2));
v___x_1123_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__3));
v___x_1124_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1109_, v___x_1123_);
v___x_1125_ = lp_choreo_Choreo_centre;
lean_inc(v_counts_1110_);
v___x_1126_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_1126_, 0, v___x_1125_);
lean_ctor_set(v___x_1126_, 1, v_counts_1110_);
lean_ctor_set_uint8(v___x_1126_, sizeof(void*)*2, v_ccw_1112_);
lean_inc(v_gap_1101_);
lean_inc(v_n_1100_);
if (v_isShared_1107_ == 0)
{
lean_ctor_set_tag(v___x_1106_, 2);
lean_ctor_set(v___x_1106_, 1, v_gap_1101_);
lean_ctor_set(v___x_1106_, 0, v_n_1100_);
v___x_1128_ = v___x_1106_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_n_1100_);
lean_ctor_set(v_reuseFailAlloc_1157_, 1, v_gap_1101_);
v___x_1128_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; 
v___x_1129_ = lean_box(0);
v___x_1130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1126_);
lean_ctor_set(v___x_1130_, 1, v___x_1128_);
lean_ctor_set(v___x_1130_, 2, v___x_1129_);
v___x_1131_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4));
v___x_1132_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1133_ = lean_int_ediv(v_gap_1101_, v___x_1132_);
v___x_1134_ = l_Int_repr(v___x_1133_);
lean_dec(v___x_1133_);
v___x_1135_ = lean_string_append(v___x_1131_, v___x_1134_);
lean_dec_ref(v___x_1134_);
v___x_1136_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__5));
v___x_1137_ = lean_string_append(v___x_1135_, v___x_1136_);
v___x_1138_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__6));
if (v_ccw_1112_ == 0)
{
lean_object* v_x_1139_; lean_object* v_y_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; 
v_x_1139_ = lean_ctor_get(v___x_1125_, 0);
v_y_1140_ = lean_ctor_get(v___x_1125_, 1);
lean_inc(v_x_1139_);
v___x_1141_ = l_Rat_ofInt(v_x_1139_);
lean_inc(v_y_1140_);
v___x_1142_ = l_Rat_ofInt(v_y_1140_);
v___x_1143_ = lean_unsigned_to_nat(3u);
v___x_1144_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1144_, 0, v___x_1141_);
lean_ctor_set(v___x_1144_, 1, v___x_1142_);
lean_ctor_set(v___x_1144_, 2, v___x_1143_);
v___x_1145_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1145_, 0, v___x_1144_);
lean_inc(v_index_1113_);
lean_inc_ref(v_section_x27_1108_);
lean_inc(v_n_1100_);
v___x_1146_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8___lam__1(v_n_1100_, v_section_x27_1108_, v_index_1113_, v___x_1121_, v___x_1122_, v___x_1124_, v___x_1130_, v___x_1137_, v___x_1138_, v_x_1102_, v___x_1145_);
v_x_1102_ = v___x_1146_;
v_x_1103_ = v_tail_1104_;
goto _start;
}
else
{
lean_object* v_x_1148_; lean_object* v_y_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v___x_1155_; 
v_x_1148_ = lean_ctor_get(v___x_1125_, 0);
v_y_1149_ = lean_ctor_get(v___x_1125_, 1);
lean_inc(v_x_1148_);
v___x_1150_ = l_Rat_ofInt(v_x_1148_);
lean_inc(v_y_1149_);
v___x_1151_ = l_Rat_ofInt(v_y_1149_);
v___x_1152_ = lean_unsigned_to_nat(1u);
v___x_1153_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1153_, 0, v___x_1150_);
lean_ctor_set(v___x_1153_, 1, v___x_1151_);
lean_ctor_set(v___x_1153_, 2, v___x_1152_);
v___x_1154_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1154_, 0, v___x_1153_);
lean_inc(v_index_1113_);
lean_inc_ref(v_section_x27_1108_);
lean_inc(v_n_1100_);
v___x_1155_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8___lam__1(v_n_1100_, v_section_x27_1108_, v_index_1113_, v___x_1121_, v___x_1122_, v___x_1124_, v___x_1130_, v___x_1137_, v___x_1138_, v_x_1102_, v___x_1154_);
v_x_1102_ = v___x_1155_;
v_x_1103_ = v_tail_1104_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8(lean_object* v_o_1160_, lean_object* v_n_1161_, lean_object* v_gap_1162_, lean_object* v_x_1163_, lean_object* v_x_1164_){
_start:
{
if (lean_obj_tag(v_x_1164_) == 0)
{
lean_dec(v_gap_1162_);
lean_dec(v_n_1161_);
lean_dec_ref(v_o_1160_);
return v_x_1163_;
}
else
{
lean_object* v_tail_1165_; lean_object* v___x_1167_; uint8_t v_isShared_1168_; uint8_t v_isSharedCheck_1219_; 
v_tail_1165_ = lean_ctor_get(v_x_1164_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_x_1164_);
if (v_isSharedCheck_1219_ == 0)
{
lean_object* v_unused_1220_; 
v_unused_1220_ = lean_ctor_get(v_x_1164_, 0);
lean_dec(v_unused_1220_);
v___x_1167_ = v_x_1164_;
v_isShared_1168_ = v_isSharedCheck_1219_;
goto v_resetjp_1166_;
}
else
{
lean_inc(v_tail_1165_);
lean_dec(v_x_1164_);
v___x_1167_ = lean_box(0);
v_isShared_1168_ = v_isSharedCheck_1219_;
goto v_resetjp_1166_;
}
v_resetjp_1166_:
{
lean_object* v_section_x27_1169_; lean_object* v_title_1170_; lean_object* v_counts_1171_; lean_object* v_quarters_1172_; uint8_t v_ccw_1173_; lean_object* v_index_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1189_; 
v_section_x27_1169_ = lean_ctor_get(v_o_1160_, 1);
v_title_1170_ = lean_ctor_get(v_o_1160_, 2);
v_counts_1171_ = lean_ctor_get(v_o_1160_, 4);
v_quarters_1172_ = lean_ctor_get(v_o_1160_, 5);
v_ccw_1173_ = lean_ctor_get_uint8(v_o_1160_, sizeof(void*)*16);
v_index_1174_ = lean_ctor_get(v_o_1160_, 15);
v___x_1175_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__0));
v___x_1176_ = lean_unsigned_to_nat(90u);
v___x_1177_ = lean_nat_mul(v_quarters_1172_, v___x_1176_);
v___x_1178_ = l_Nat_reprFast(v___x_1177_);
v___x_1179_ = lean_string_append(v___x_1175_, v___x_1178_);
lean_dec_ref(v___x_1178_);
v___x_1180_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__1));
v___x_1181_ = lean_string_append(v___x_1179_, v___x_1180_);
v___x_1182_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1170_, v___x_1181_);
lean_dec_ref(v___x_1181_);
v___x_1183_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__2));
v___x_1184_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__3));
v___x_1185_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1170_, v___x_1184_);
v___x_1186_ = lp_choreo_Choreo_centre;
lean_inc(v_counts_1171_);
v___x_1187_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v___x_1187_, 0, v___x_1186_);
lean_ctor_set(v___x_1187_, 1, v_counts_1171_);
lean_ctor_set_uint8(v___x_1187_, sizeof(void*)*2, v_ccw_1173_);
lean_inc(v_gap_1162_);
lean_inc(v_n_1161_);
if (v_isShared_1168_ == 0)
{
lean_ctor_set_tag(v___x_1167_, 2);
lean_ctor_set(v___x_1167_, 1, v_gap_1162_);
lean_ctor_set(v___x_1167_, 0, v_n_1161_);
v___x_1189_ = v___x_1167_;
goto v_reusejp_1188_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_n_1161_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_gap_1162_);
v___x_1189_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1188_;
}
v_reusejp_1188_:
{
lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; 
v___x_1190_ = lean_box(0);
v___x_1191_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1191_, 0, v___x_1187_);
lean_ctor_set(v___x_1191_, 1, v___x_1189_);
lean_ctor_set(v___x_1191_, 2, v___x_1190_);
v___x_1192_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4));
v___x_1193_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1194_ = lean_int_ediv(v_gap_1162_, v___x_1193_);
v___x_1195_ = l_Int_repr(v___x_1194_);
lean_dec(v___x_1194_);
v___x_1196_ = lean_string_append(v___x_1192_, v___x_1195_);
lean_dec_ref(v___x_1195_);
v___x_1197_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__5));
v___x_1198_ = lean_string_append(v___x_1196_, v___x_1197_);
v___x_1199_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__6));
if (v_ccw_1173_ == 0)
{
lean_object* v_x_1200_; lean_object* v_y_1201_; lean_object* v___x_1202_; lean_object* v___x_1203_; lean_object* v___x_1204_; lean_object* v___x_1205_; lean_object* v___x_1206_; lean_object* v___x_1207_; lean_object* v___x_1208_; 
v_x_1200_ = lean_ctor_get(v___x_1186_, 0);
v_y_1201_ = lean_ctor_get(v___x_1186_, 1);
lean_inc(v_x_1200_);
v___x_1202_ = l_Rat_ofInt(v_x_1200_);
lean_inc(v_y_1201_);
v___x_1203_ = l_Rat_ofInt(v_y_1201_);
v___x_1204_ = lean_unsigned_to_nat(3u);
v___x_1205_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1205_, 0, v___x_1202_);
lean_ctor_set(v___x_1205_, 1, v___x_1203_);
lean_ctor_set(v___x_1205_, 2, v___x_1204_);
v___x_1206_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1206_, 0, v___x_1205_);
lean_inc(v_index_1174_);
lean_inc_ref(v_section_x27_1169_);
lean_inc(v_n_1161_);
v___x_1207_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8___lam__1(v_n_1161_, v_section_x27_1169_, v_index_1174_, v___x_1182_, v___x_1183_, v___x_1185_, v___x_1191_, v___x_1198_, v___x_1199_, v_x_1163_, v___x_1206_);
v___x_1208_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9(v_o_1160_, v_n_1161_, v_gap_1162_, v___x_1207_, v_tail_1165_);
return v___x_1208_;
}
else
{
lean_object* v_x_1209_; lean_object* v_y_1210_; lean_object* v___x_1211_; lean_object* v___x_1212_; lean_object* v___x_1213_; lean_object* v___x_1214_; lean_object* v___x_1215_; lean_object* v___x_1216_; lean_object* v___x_1217_; 
v_x_1209_ = lean_ctor_get(v___x_1186_, 0);
v_y_1210_ = lean_ctor_get(v___x_1186_, 1);
lean_inc(v_x_1209_);
v___x_1211_ = l_Rat_ofInt(v_x_1209_);
lean_inc(v_y_1210_);
v___x_1212_ = l_Rat_ofInt(v_y_1210_);
v___x_1213_ = lean_unsigned_to_nat(1u);
v___x_1214_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1214_, 0, v___x_1211_);
lean_ctor_set(v___x_1214_, 1, v___x_1212_);
lean_ctor_set(v___x_1214_, 2, v___x_1213_);
v___x_1215_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1215_, 0, v___x_1214_);
lean_inc(v_index_1174_);
lean_inc_ref(v_section_x27_1169_);
lean_inc(v_n_1161_);
v___x_1216_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8___lam__1(v_n_1161_, v_section_x27_1169_, v_index_1174_, v___x_1182_, v___x_1183_, v___x_1185_, v___x_1191_, v___x_1198_, v___x_1199_, v_x_1163_, v___x_1215_);
v___x_1217_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9(v_o_1160_, v_n_1161_, v_gap_1162_, v___x_1216_, v_tail_1165_);
return v___x_1217_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(lean_object* v_s_1221_, lean_object* v_o_1222_, lean_object* v_a_1223_, lean_object* v_a_1224_){
_start:
{
if (lean_obj_tag(v_a_1223_) == 0)
{
lean_object* v___x_1225_; 
v___x_1225_ = l_List_reverse___redArg(v_a_1224_);
return v___x_1225_;
}
else
{
lean_object* v_head_1226_; lean_object* v_tail_1227_; lean_object* v___x_1229_; uint8_t v_isShared_1230_; uint8_t v_isSharedCheck_1262_; 
v_head_1226_ = lean_ctor_get(v_a_1223_, 0);
v_tail_1227_ = lean_ctor_get(v_a_1223_, 1);
v_isSharedCheck_1262_ = !lean_is_exclusive(v_a_1223_);
if (v_isSharedCheck_1262_ == 0)
{
v___x_1229_ = v_a_1223_;
v_isShared_1230_ = v_isSharedCheck_1262_;
goto v_resetjp_1228_;
}
else
{
lean_inc(v_tail_1227_);
lean_inc(v_head_1226_);
lean_dec(v_a_1223_);
v___x_1229_ = lean_box(0);
v_isShared_1230_ = v_isSharedCheck_1262_;
goto v_resetjp_1228_;
}
v_resetjp_1228_:
{
lean_object* v___x_1231_; lean_object* v_x_1232_; lean_object* v_y_1233_; lean_object* v_p_1234_; lean_object* v_x_1235_; lean_object* v_y_1236_; lean_object* v___x_1238_; uint8_t v_isShared_1239_; uint8_t v_isSharedCheck_1261_; 
v___x_1231_ = lp_choreo_Choreo_centre;
v_x_1232_ = lean_ctor_get(v___x_1231_, 0);
v_y_1233_ = lean_ctor_get(v___x_1231_, 1);
v_p_1234_ = lp_choreo_Choreo_State_at(v_s_1221_, v_head_1226_);
v_x_1235_ = lean_ctor_get(v_p_1234_, 0);
v_y_1236_ = lean_ctor_get(v_p_1234_, 1);
v_isSharedCheck_1261_ = !lean_is_exclusive(v_p_1234_);
if (v_isSharedCheck_1261_ == 0)
{
v___x_1238_ = v_p_1234_;
v_isShared_1239_ = v_isSharedCheck_1261_;
goto v_resetjp_1237_;
}
else
{
lean_inc(v_y_1236_);
lean_inc(v_x_1235_);
lean_dec(v_p_1234_);
v___x_1238_ = lean_box(0);
v_isShared_1239_ = v_isSharedCheck_1261_;
goto v_resetjp_1237_;
}
v_resetjp_1237_:
{
lean_object* v_num_1240_; lean_object* v_den_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___y_1245_; lean_object* v___x_1259_; uint8_t v___x_1260_; 
v_num_1240_ = lean_ctor_get(v_o_1222_, 8);
v_den_1241_ = lean_ctor_get(v_o_1222_, 9);
v___x_1242_ = lean_int_sub(v_x_1235_, v_x_1232_);
lean_dec(v_x_1235_);
v___x_1243_ = lean_int_mul(v___x_1242_, v_num_1240_);
lean_dec(v___x_1242_);
v___x_1259_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_1260_ = lean_int_dec_le(v___x_1259_, v_den_1241_);
if (v___x_1260_ == 0)
{
v___y_1245_ = v___x_1259_;
goto v___jp_1244_;
}
else
{
v___y_1245_ = v_den_1241_;
goto v___jp_1244_;
}
v___jp_1244_:
{
lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1253_; 
v___x_1246_ = lean_int_ediv(v___x_1243_, v___y_1245_);
lean_dec(v___x_1243_);
v___x_1247_ = lean_int_add(v_x_1232_, v___x_1246_);
lean_dec(v___x_1246_);
v___x_1248_ = lean_int_sub(v_y_1236_, v_y_1233_);
lean_dec(v_y_1236_);
v___x_1249_ = lean_int_mul(v___x_1248_, v_num_1240_);
lean_dec(v___x_1248_);
v___x_1250_ = lean_int_ediv(v___x_1249_, v___y_1245_);
lean_dec(v___x_1249_);
v___x_1251_ = lean_int_add(v_y_1233_, v___x_1250_);
lean_dec(v___x_1250_);
if (v_isShared_1239_ == 0)
{
lean_ctor_set(v___x_1238_, 1, v___x_1251_);
lean_ctor_set(v___x_1238_, 0, v___x_1247_);
v___x_1253_ = v___x_1238_;
goto v_reusejp_1252_;
}
else
{
lean_object* v_reuseFailAlloc_1258_; 
v_reuseFailAlloc_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1258_, 0, v___x_1247_);
lean_ctor_set(v_reuseFailAlloc_1258_, 1, v___x_1251_);
v___x_1253_ = v_reuseFailAlloc_1258_;
goto v_reusejp_1252_;
}
v_reusejp_1252_:
{
lean_object* v___x_1255_; 
if (v_isShared_1230_ == 0)
{
lean_ctor_set(v___x_1229_, 1, v_a_1224_);
lean_ctor_set(v___x_1229_, 0, v___x_1253_);
v___x_1255_ = v___x_1229_;
goto v_reusejp_1254_;
}
else
{
lean_object* v_reuseFailAlloc_1257_; 
v_reuseFailAlloc_1257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1257_, 0, v___x_1253_);
lean_ctor_set(v_reuseFailAlloc_1257_, 1, v_a_1224_);
v___x_1255_ = v_reuseFailAlloc_1257_;
goto v_reusejp_1254_;
}
v_reusejp_1254_:
{
v_a_1223_ = v_tail_1227_;
v_a_1224_ = v___x_1255_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4___boxed(lean_object* v_s_1263_, lean_object* v_o_1264_, lean_object* v_a_1265_, lean_object* v_a_1266_){
_start:
{
lean_object* v_res_1267_; 
v_res_1267_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_s_1263_, v_o_1264_, v_a_1265_, v_a_1266_);
lean_dec_ref(v_o_1264_);
lean_dec(v_s_1263_);
return v_res_1267_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(lean_object* v_fst_1268_, lean_object* v_dist_1269_, lean_object* v_a_1270_, lean_object* v_a_1271_){
_start:
{
if (lean_obj_tag(v_a_1270_) == 0)
{
lean_object* v___x_1272_; 
lean_dec(v_dist_1269_);
v___x_1272_ = l_List_reverse___redArg(v_a_1271_);
return v___x_1272_;
}
else
{
lean_object* v_head_1273_; lean_object* v_tail_1274_; lean_object* v___x_1276_; uint8_t v_isShared_1277_; uint8_t v_isSharedCheck_1290_; 
v_head_1273_ = lean_ctor_get(v_a_1270_, 0);
v_tail_1274_ = lean_ctor_get(v_a_1270_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_a_1270_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1276_ = v_a_1270_;
v_isShared_1277_ = v_isSharedCheck_1290_;
goto v_resetjp_1275_;
}
else
{
lean_inc(v_tail_1274_);
lean_inc(v_head_1273_);
lean_dec(v_a_1270_);
v___x_1276_ = lean_box(0);
v_isShared_1277_ = v_isSharedCheck_1290_;
goto v_resetjp_1275_;
}
v_resetjp_1275_:
{
lean_object* v___y_1279_; uint8_t v___x_1284_; 
v___x_1284_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_1273_, v_fst_1268_);
lean_dec(v_head_1273_);
if (v___x_1284_ == 0)
{
lean_object* v___x_1285_; lean_object* v___x_1286_; lean_object* v___x_1287_; 
v___x_1285_ = lean_int_neg(v_dist_1269_);
v___x_1286_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_1287_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1287_, 0, v___x_1285_);
lean_ctor_set(v___x_1287_, 1, v___x_1286_);
v___y_1279_ = v___x_1287_;
goto v___jp_1278_;
}
else
{
lean_object* v___x_1288_; lean_object* v___x_1289_; 
v___x_1288_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc(v_dist_1269_);
v___x_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1289_, 0, v_dist_1269_);
lean_ctor_set(v___x_1289_, 1, v___x_1288_);
v___y_1279_ = v___x_1289_;
goto v___jp_1278_;
}
v___jp_1278_:
{
lean_object* v___x_1281_; 
if (v_isShared_1277_ == 0)
{
lean_ctor_set(v___x_1276_, 1, v_a_1271_);
lean_ctor_set(v___x_1276_, 0, v___y_1279_);
v___x_1281_ = v___x_1276_;
goto v_reusejp_1280_;
}
else
{
lean_object* v_reuseFailAlloc_1283_; 
v_reuseFailAlloc_1283_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1283_, 0, v___y_1279_);
lean_ctor_set(v_reuseFailAlloc_1283_, 1, v_a_1271_);
v___x_1281_ = v_reuseFailAlloc_1283_;
goto v_reusejp_1280_;
}
v_reusejp_1280_:
{
v_a_1270_ = v_tail_1274_;
v_a_1271_ = v___x_1281_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7___boxed(lean_object* v_fst_1291_, lean_object* v_dist_1292_, lean_object* v_a_1293_, lean_object* v_a_1294_){
_start:
{
lean_object* v_res_1295_; 
v_res_1295_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(v_fst_1291_, v_dist_1292_, v_a_1293_, v_a_1294_);
lean_dec(v_fst_1291_);
return v_res_1295_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___closed__0(void){
_start:
{
lean_object* v___x_1296_; lean_object* v___x_1297_; 
v___x_1296_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_1297_ = lean_int_neg(v___x_1296_);
return v___x_1297_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(lean_object* v_s_1298_, lean_object* v_a_1299_, lean_object* v_a_1300_){
_start:
{
if (lean_obj_tag(v_a_1299_) == 0)
{
lean_object* v___x_1301_; 
v___x_1301_ = l_List_reverse___redArg(v_a_1300_);
return v___x_1301_;
}
else
{
lean_object* v_head_1302_; lean_object* v_tail_1303_; lean_object* v___x_1305_; uint8_t v_isShared_1306_; uint8_t v_isSharedCheck_1324_; 
v_head_1302_ = lean_ctor_get(v_a_1299_, 0);
v_tail_1303_ = lean_ctor_get(v_a_1299_, 1);
v_isSharedCheck_1324_ = !lean_is_exclusive(v_a_1299_);
if (v_isSharedCheck_1324_ == 0)
{
v___x_1305_ = v_a_1299_;
v_isShared_1306_ = v_isSharedCheck_1324_;
goto v_resetjp_1304_;
}
else
{
lean_inc(v_tail_1303_);
lean_inc(v_head_1302_);
lean_dec(v_a_1299_);
v___x_1305_ = lean_box(0);
v_isShared_1306_ = v_isSharedCheck_1324_;
goto v_resetjp_1304_;
}
v_resetjp_1304_:
{
lean_object* v___x_1307_; lean_object* v_x_1308_; lean_object* v___x_1310_; uint8_t v_isShared_1311_; uint8_t v_isSharedCheck_1322_; 
v___x_1307_ = lp_choreo_Choreo_State_at(v_s_1298_, v_head_1302_);
v_x_1308_ = lean_ctor_get(v___x_1307_, 0);
v_isSharedCheck_1322_ = !lean_is_exclusive(v___x_1307_);
if (v_isSharedCheck_1322_ == 0)
{
lean_object* v_unused_1323_; 
v_unused_1323_ = lean_ctor_get(v___x_1307_, 1);
lean_dec(v_unused_1323_);
v___x_1310_ = v___x_1307_;
v_isShared_1311_ = v_isSharedCheck_1322_;
goto v_resetjp_1309_;
}
else
{
lean_inc(v_x_1308_);
lean_dec(v___x_1307_);
v___x_1310_ = lean_box(0);
v_isShared_1311_ = v_isSharedCheck_1322_;
goto v_resetjp_1309_;
}
v_resetjp_1309_:
{
lean_object* v___x_1312_; lean_object* v___x_1313_; lean_object* v___x_1314_; lean_object* v___x_1316_; 
v___x_1312_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___closed__0);
v___x_1313_ = lean_int_mul(v___x_1312_, v_x_1308_);
lean_dec(v_x_1308_);
v___x_1314_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
if (v_isShared_1311_ == 0)
{
lean_ctor_set(v___x_1310_, 1, v___x_1314_);
lean_ctor_set(v___x_1310_, 0, v___x_1313_);
v___x_1316_ = v___x_1310_;
goto v_reusejp_1315_;
}
else
{
lean_object* v_reuseFailAlloc_1321_; 
v_reuseFailAlloc_1321_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1321_, 0, v___x_1313_);
lean_ctor_set(v_reuseFailAlloc_1321_, 1, v___x_1314_);
v___x_1316_ = v_reuseFailAlloc_1321_;
goto v_reusejp_1315_;
}
v_reusejp_1315_:
{
lean_object* v___x_1318_; 
if (v_isShared_1306_ == 0)
{
lean_ctor_set(v___x_1305_, 1, v_a_1300_);
lean_ctor_set(v___x_1305_, 0, v___x_1316_);
v___x_1318_ = v___x_1305_;
goto v_reusejp_1317_;
}
else
{
lean_object* v_reuseFailAlloc_1320_; 
v_reuseFailAlloc_1320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1320_, 0, v___x_1316_);
lean_ctor_set(v_reuseFailAlloc_1320_, 1, v_a_1300_);
v___x_1318_ = v_reuseFailAlloc_1320_;
goto v_reusejp_1317_;
}
v_reusejp_1317_:
{
v_a_1299_ = v_tail_1303_;
v_a_1300_ = v___x_1318_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___boxed(lean_object* v_s_1325_, lean_object* v_a_1326_, lean_object* v_a_1327_){
_start:
{
lean_object* v_res_1328_; 
v_res_1328_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_s_1325_, v_a_1326_, v_a_1327_);
lean_dec(v_s_1325_);
return v_res_1328_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(lean_object* v_s_1329_, lean_object* v_a_1330_, lean_object* v_a_1331_){
_start:
{
if (lean_obj_tag(v_a_1330_) == 0)
{
lean_object* v___x_1332_; 
v___x_1332_ = l_List_reverse___redArg(v_a_1331_);
return v___x_1332_;
}
else
{
lean_object* v_head_1333_; lean_object* v_tail_1334_; lean_object* v___x_1336_; uint8_t v_isShared_1337_; uint8_t v_isSharedCheck_1353_; 
v_head_1333_ = lean_ctor_get(v_a_1330_, 0);
v_tail_1334_ = lean_ctor_get(v_a_1330_, 1);
v_isSharedCheck_1353_ = !lean_is_exclusive(v_a_1330_);
if (v_isSharedCheck_1353_ == 0)
{
v___x_1336_ = v_a_1330_;
v_isShared_1337_ = v_isSharedCheck_1353_;
goto v_resetjp_1335_;
}
else
{
lean_inc(v_tail_1334_);
lean_inc(v_head_1333_);
lean_dec(v_a_1330_);
v___x_1336_ = lean_box(0);
v_isShared_1337_ = v_isSharedCheck_1353_;
goto v_resetjp_1335_;
}
v_resetjp_1335_:
{
lean_object* v___y_1339_; lean_object* v_fst_1344_; lean_object* v_snd_1345_; lean_object* v___x_1346_; uint8_t v___x_1347_; 
v_fst_1344_ = lean_ctor_get(v_head_1333_, 0);
lean_inc(v_fst_1344_);
v_snd_1345_ = lean_ctor_get(v_head_1333_, 1);
lean_inc(v_snd_1345_);
lean_dec(v_head_1333_);
v___x_1346_ = lean_unsigned_to_nat(0u);
v___x_1347_ = lean_nat_dec_eq(v_snd_1345_, v___x_1346_);
if (v___x_1347_ == 0)
{
lean_object* v___x_1348_; uint8_t v___x_1349_; 
v___x_1348_ = lean_unsigned_to_nat(1u);
v___x_1349_ = lean_nat_dec_eq(v_snd_1345_, v___x_1348_);
lean_dec(v_snd_1345_);
if (v___x_1349_ == 0)
{
v___y_1339_ = v_fst_1344_;
goto v___jp_1338_;
}
else
{
lean_object* v___x_1350_; 
lean_dec(v_fst_1344_);
v___x_1350_ = lp_choreo_Choreo_State_at(v_s_1329_, v___x_1346_);
v___y_1339_ = v___x_1350_;
goto v___jp_1338_;
}
}
else
{
lean_object* v___x_1351_; lean_object* v___x_1352_; 
lean_dec(v_snd_1345_);
lean_dec(v_fst_1344_);
v___x_1351_ = lean_unsigned_to_nat(1u);
v___x_1352_ = lp_choreo_Choreo_State_at(v_s_1329_, v___x_1351_);
v___y_1339_ = v___x_1352_;
goto v___jp_1338_;
}
v___jp_1338_:
{
lean_object* v___x_1341_; 
if (v_isShared_1337_ == 0)
{
lean_ctor_set(v___x_1336_, 1, v_a_1331_);
lean_ctor_set(v___x_1336_, 0, v___y_1339_);
v___x_1341_ = v___x_1336_;
goto v_reusejp_1340_;
}
else
{
lean_object* v_reuseFailAlloc_1343_; 
v_reuseFailAlloc_1343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1343_, 0, v___y_1339_);
lean_ctor_set(v_reuseFailAlloc_1343_, 1, v_a_1331_);
v___x_1341_ = v_reuseFailAlloc_1343_;
goto v_reusejp_1340_;
}
v_reusejp_1340_:
{
v_a_1330_ = v_tail_1334_;
v_a_1331_ = v___x_1341_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___boxed(lean_object* v_s_1354_, lean_object* v_a_1355_, lean_object* v_a_1356_){
_start:
{
lean_object* v_res_1357_; 
v_res_1357_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(v_s_1354_, v_a_1355_, v_a_1356_);
lean_dec(v_s_1354_);
return v_res_1357_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6(lean_object* v_n_1361_, lean_object* v_gap_1362_, lean_object* v_o_1363_, lean_object* v_title_1364_, lean_object* v_x_1365_, lean_object* v_x_1366_){
_start:
{
if (lean_obj_tag(v_x_1366_) == 0)
{
lean_dec_ref(v_title_1364_);
lean_dec_ref(v_o_1363_);
lean_dec(v_gap_1362_);
lean_dec(v_n_1361_);
return v_x_1365_;
}
else
{
lean_object* v_head_1367_; lean_object* v_tail_1368_; lean_object* v___x_1370_; uint8_t v_isShared_1371_; uint8_t v_isSharedCheck_1442_; 
v_head_1367_ = lean_ctor_get(v_x_1366_, 0);
v_tail_1368_ = lean_ctor_get(v_x_1366_, 1);
v_isSharedCheck_1442_ = !lean_is_exclusive(v_x_1366_);
if (v_isSharedCheck_1442_ == 0)
{
v___x_1370_ = v_x_1366_;
v_isShared_1371_ = v_isSharedCheck_1442_;
goto v_resetjp_1369_;
}
else
{
lean_inc(v_tail_1368_);
lean_inc(v_head_1367_);
lean_dec(v_x_1366_);
v___x_1370_ = lean_box(0);
v_isShared_1371_ = v_isSharedCheck_1442_;
goto v_resetjp_1369_;
}
v_resetjp_1369_:
{
lean_object* v_fst_1372_; lean_object* v___x_1374_; uint8_t v_isShared_1375_; uint8_t v_isSharedCheck_1440_; 
v_fst_1372_ = lean_ctor_get(v_x_1365_, 0);
v_isSharedCheck_1440_ = !lean_is_exclusive(v_x_1365_);
if (v_isSharedCheck_1440_ == 0)
{
lean_object* v_unused_1441_; 
v_unused_1441_ = lean_ctor_get(v_x_1365_, 1);
lean_dec(v_unused_1441_);
v___x_1374_ = v_x_1365_;
v_isShared_1375_ = v_isSharedCheck_1440_;
goto v_resetjp_1373_;
}
else
{
lean_inc(v_fst_1372_);
lean_dec(v_x_1365_);
v___x_1374_ = lean_box(0);
v_isShared_1375_ = v_isSharedCheck_1440_;
goto v_resetjp_1373_;
}
v_resetjp_1373_:
{
lean_object* v_section_x27_1376_; lean_object* v_title_1377_; lean_object* v_index_1378_; lean_object* v___y_1380_; lean_object* v___x_1437_; lean_object* v___x_1438_; uint8_t v___x_1439_; 
v_section_x27_1376_ = lean_ctor_get(v_o_1363_, 1);
v_title_1377_ = lean_ctor_get(v_o_1363_, 2);
v_index_1378_ = lean_ctor_get(v_o_1363_, 15);
v___x_1437_ = lean_string_utf8_byte_size(v_title_1377_);
v___x_1438_ = lean_unsigned_to_nat(0u);
v___x_1439_ = lean_nat_dec_eq(v___x_1437_, v___x_1438_);
if (v___x_1439_ == 0)
{
lean_inc_ref(v_title_1377_);
v___y_1380_ = v_title_1377_;
goto v___jp_1379_;
}
else
{
lean_inc_ref(v_title_1364_);
v___y_1380_ = v_title_1364_;
goto v___jp_1379_;
}
v___jp_1379_:
{
lean_object* v_snd_1381_; lean_object* v_fst_1382_; lean_object* v___x_1384_; uint8_t v_isShared_1385_; uint8_t v_isSharedCheck_1436_; 
v_snd_1381_ = lean_ctor_get(v_head_1367_, 1);
v_fst_1382_ = lean_ctor_get(v_head_1367_, 0);
v_isSharedCheck_1436_ = !lean_is_exclusive(v_head_1367_);
if (v_isSharedCheck_1436_ == 0)
{
v___x_1384_ = v_head_1367_;
v_isShared_1385_ = v_isSharedCheck_1436_;
goto v_resetjp_1383_;
}
else
{
lean_inc(v_snd_1381_);
lean_inc(v_fst_1382_);
lean_dec(v_head_1367_);
v___x_1384_ = lean_box(0);
v_isShared_1385_ = v_isSharedCheck_1436_;
goto v_resetjp_1383_;
}
v_resetjp_1383_:
{
lean_object* v_fst_1386_; lean_object* v_snd_1387_; lean_object* v___x_1389_; uint8_t v_isShared_1390_; uint8_t v_isSharedCheck_1435_; 
v_fst_1386_ = lean_ctor_get(v_snd_1381_, 0);
v_snd_1387_ = lean_ctor_get(v_snd_1381_, 1);
v_isSharedCheck_1435_ = !lean_is_exclusive(v_snd_1381_);
if (v_isSharedCheck_1435_ == 0)
{
v___x_1389_ = v_snd_1381_;
v_isShared_1390_ = v_isSharedCheck_1435_;
goto v_resetjp_1388_;
}
else
{
lean_inc(v_snd_1387_);
lean_inc(v_fst_1386_);
lean_dec(v_snd_1381_);
v___x_1389_ = lean_box(0);
v_isShared_1390_ = v_isSharedCheck_1435_;
goto v_resetjp_1388_;
}
v_resetjp_1388_:
{
lean_object* v_pos_1391_; lean_object* v_steps_1392_; lean_object* v___x_1394_; uint8_t v_isShared_1395_; uint8_t v_isSharedCheck_1434_; 
v_pos_1391_ = lean_ctor_get(v_fst_1372_, 0);
v_steps_1392_ = lean_ctor_get(v_fst_1372_, 1);
v_isSharedCheck_1434_ = !lean_is_exclusive(v_fst_1372_);
if (v_isSharedCheck_1434_ == 0)
{
v___x_1394_ = v_fst_1372_;
v_isShared_1395_ = v_isSharedCheck_1434_;
goto v_resetjp_1393_;
}
else
{
lean_inc(v_steps_1392_);
lean_inc(v_pos_1391_);
lean_dec(v_fst_1372_);
v___x_1394_ = lean_box(0);
v_isShared_1395_ = v_isSharedCheck_1434_;
goto v_resetjp_1393_;
}
v_resetjp_1393_:
{
lean_object* v___x_1396_; lean_object* v___x_1397_; lean_object* v___x_1398_; lean_object* v___x_1400_; 
lean_inc(v_n_1361_);
v___x_1396_ = l_List_range(v_n_1361_);
v___x_1397_ = lean_box(0);
lean_inc(v_fst_1386_);
lean_inc(v_fst_1382_);
v___x_1398_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_fst_1382_, v_fst_1386_, v___x_1396_, v___x_1397_);
if (v_isShared_1385_ == 0)
{
lean_ctor_set_tag(v___x_1384_, 2);
lean_ctor_set(v___x_1384_, 1, v_snd_1387_);
lean_ctor_set(v___x_1384_, 0, v___x_1398_);
v___x_1400_ = v___x_1384_;
goto v_reusejp_1399_;
}
else
{
lean_object* v_reuseFailAlloc_1433_; 
v_reuseFailAlloc_1433_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1433_, 0, v___x_1398_);
lean_ctor_set(v_reuseFailAlloc_1433_, 1, v_snd_1387_);
v___x_1400_ = v_reuseFailAlloc_1433_;
goto v_reusejp_1399_;
}
v_reusejp_1399_:
{
lean_object* v___x_1402_; 
lean_inc(v_gap_1362_);
lean_inc(v_n_1361_);
if (v_isShared_1375_ == 0)
{
lean_ctor_set_tag(v___x_1374_, 2);
lean_ctor_set(v___x_1374_, 1, v_gap_1362_);
lean_ctor_set(v___x_1374_, 0, v_n_1361_);
v___x_1402_ = v___x_1374_;
goto v_reusejp_1401_;
}
else
{
lean_object* v_reuseFailAlloc_1432_; 
v_reuseFailAlloc_1432_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1432_, 0, v_n_1361_);
lean_ctor_set(v_reuseFailAlloc_1432_, 1, v_gap_1362_);
v___x_1402_ = v_reuseFailAlloc_1432_;
goto v_reusejp_1401_;
}
v_reusejp_1401_:
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v_next_1418_; lean_object* v___x_1419_; lean_object* v___x_1421_; 
v___x_1403_ = lean_box(0);
lean_inc_ref(v___x_1400_);
v___x_1404_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1404_, 0, v___x_1400_);
lean_ctor_set(v___x_1404_, 1, v___x_1402_);
lean_ctor_set(v___x_1404_, 2, v___x_1403_);
v___x_1405_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__0));
v___x_1406_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4));
v___x_1407_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1408_ = lean_int_ediv(v_gap_1362_, v___x_1407_);
v___x_1409_ = l_Int_repr(v___x_1408_);
lean_dec(v___x_1408_);
v___x_1410_ = lean_string_append(v___x_1406_, v___x_1409_);
lean_dec_ref(v___x_1409_);
v___x_1411_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__1));
v___x_1412_ = lean_string_append(v___x_1410_, v___x_1411_);
v___x_1413_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__2));
v___x_1414_ = l_Rat_ofInt(v_fst_1382_);
v___x_1415_ = l_Rat_ofInt(v_fst_1386_);
v___x_1416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1416_, 0, v___x_1414_);
lean_ctor_set(v___x_1416_, 1, v___x_1415_);
v___x_1417_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1417_, 0, v___x_1416_);
lean_inc(v_n_1361_);
v_next_1418_ = lp_choreo_Choreo_Op_next(v___x_1400_, v_n_1361_, v_pos_1391_);
lean_inc(v_next_1418_);
lean_inc_ref(v_title_1364_);
lean_inc(v_index_1378_);
lean_inc_ref(v_section_x27_1376_);
v___x_1419_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1419_, 0, v___y_1380_);
lean_ctor_set(v___x_1419_, 1, v_section_x27_1376_);
lean_ctor_set(v___x_1419_, 2, v_index_1378_);
lean_ctor_set(v___x_1419_, 3, v___x_1405_);
lean_ctor_set(v___x_1419_, 4, v_title_1364_);
lean_ctor_set(v___x_1419_, 5, v___x_1404_);
lean_ctor_set(v___x_1419_, 6, v___x_1412_);
lean_ctor_set(v___x_1419_, 7, v___x_1413_);
lean_ctor_set(v___x_1419_, 8, v_pos_1391_);
lean_ctor_set(v___x_1419_, 9, v_next_1418_);
lean_ctor_set(v___x_1419_, 10, v___x_1417_);
if (v_isShared_1371_ == 0)
{
lean_ctor_set(v___x_1370_, 1, v___x_1397_);
lean_ctor_set(v___x_1370_, 0, v___x_1419_);
v___x_1421_ = v___x_1370_;
goto v_reusejp_1420_;
}
else
{
lean_object* v_reuseFailAlloc_1431_; 
v_reuseFailAlloc_1431_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1431_, 0, v___x_1419_);
lean_ctor_set(v_reuseFailAlloc_1431_, 1, v___x_1397_);
v___x_1421_ = v_reuseFailAlloc_1431_;
goto v_reusejp_1420_;
}
v_reusejp_1420_:
{
lean_object* v___x_1422_; lean_object* v___x_1424_; 
v___x_1422_ = l_List_appendTR___redArg(v_steps_1392_, v___x_1421_);
if (v_isShared_1395_ == 0)
{
lean_ctor_set(v___x_1394_, 1, v___x_1422_);
lean_ctor_set(v___x_1394_, 0, v_next_1418_);
v___x_1424_ = v___x_1394_;
goto v_reusejp_1423_;
}
else
{
lean_object* v_reuseFailAlloc_1430_; 
v_reuseFailAlloc_1430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1430_, 0, v_next_1418_);
lean_ctor_set(v_reuseFailAlloc_1430_, 1, v___x_1422_);
v___x_1424_ = v_reuseFailAlloc_1430_;
goto v_reusejp_1423_;
}
v_reusejp_1423_:
{
lean_object* v___x_1425_; lean_object* v___x_1427_; 
v___x_1425_ = lean_unsigned_to_nat(0u);
if (v_isShared_1390_ == 0)
{
lean_ctor_set(v___x_1389_, 1, v___x_1425_);
lean_ctor_set(v___x_1389_, 0, v___x_1424_);
v___x_1427_ = v___x_1389_;
goto v_reusejp_1426_;
}
else
{
lean_object* v_reuseFailAlloc_1429_; 
v_reuseFailAlloc_1429_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1429_, 0, v___x_1424_);
lean_ctor_set(v_reuseFailAlloc_1429_, 1, v___x_1425_);
v___x_1427_ = v_reuseFailAlloc_1429_;
goto v_reusejp_1426_;
}
v_reusejp_1426_:
{
v_x_1365_ = v___x_1427_;
v_x_1366_ = v_tail_1368_;
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
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__6(lean_object* v_o_1443_, lean_object* v_title_1444_, lean_object* v_n_1445_, lean_object* v_gap_1446_, lean_object* v_x_1447_, lean_object* v_x_1448_){
_start:
{
if (lean_obj_tag(v_x_1448_) == 0)
{
lean_dec(v_gap_1446_);
lean_dec(v_n_1445_);
lean_dec_ref(v_title_1444_);
lean_dec_ref(v_o_1443_);
return v_x_1447_;
}
else
{
lean_object* v_head_1449_; lean_object* v_tail_1450_; lean_object* v___x_1452_; uint8_t v_isShared_1453_; uint8_t v_isSharedCheck_1524_; 
v_head_1449_ = lean_ctor_get(v_x_1448_, 0);
v_tail_1450_ = lean_ctor_get(v_x_1448_, 1);
v_isSharedCheck_1524_ = !lean_is_exclusive(v_x_1448_);
if (v_isSharedCheck_1524_ == 0)
{
v___x_1452_ = v_x_1448_;
v_isShared_1453_ = v_isSharedCheck_1524_;
goto v_resetjp_1451_;
}
else
{
lean_inc(v_tail_1450_);
lean_inc(v_head_1449_);
lean_dec(v_x_1448_);
v___x_1452_ = lean_box(0);
v_isShared_1453_ = v_isSharedCheck_1524_;
goto v_resetjp_1451_;
}
v_resetjp_1451_:
{
lean_object* v_fst_1454_; lean_object* v___x_1456_; uint8_t v_isShared_1457_; uint8_t v_isSharedCheck_1522_; 
v_fst_1454_ = lean_ctor_get(v_x_1447_, 0);
v_isSharedCheck_1522_ = !lean_is_exclusive(v_x_1447_);
if (v_isSharedCheck_1522_ == 0)
{
lean_object* v_unused_1523_; 
v_unused_1523_ = lean_ctor_get(v_x_1447_, 1);
lean_dec(v_unused_1523_);
v___x_1456_ = v_x_1447_;
v_isShared_1457_ = v_isSharedCheck_1522_;
goto v_resetjp_1455_;
}
else
{
lean_inc(v_fst_1454_);
lean_dec(v_x_1447_);
v___x_1456_ = lean_box(0);
v_isShared_1457_ = v_isSharedCheck_1522_;
goto v_resetjp_1455_;
}
v_resetjp_1455_:
{
lean_object* v_section_x27_1458_; lean_object* v_title_1459_; lean_object* v_index_1460_; lean_object* v___y_1462_; lean_object* v___x_1519_; lean_object* v___x_1520_; uint8_t v___x_1521_; 
v_section_x27_1458_ = lean_ctor_get(v_o_1443_, 1);
v_title_1459_ = lean_ctor_get(v_o_1443_, 2);
v_index_1460_ = lean_ctor_get(v_o_1443_, 15);
v___x_1519_ = lean_string_utf8_byte_size(v_title_1459_);
v___x_1520_ = lean_unsigned_to_nat(0u);
v___x_1521_ = lean_nat_dec_eq(v___x_1519_, v___x_1520_);
if (v___x_1521_ == 0)
{
lean_inc_ref(v_title_1459_);
v___y_1462_ = v_title_1459_;
goto v___jp_1461_;
}
else
{
lean_inc_ref(v_title_1444_);
v___y_1462_ = v_title_1444_;
goto v___jp_1461_;
}
v___jp_1461_:
{
lean_object* v_snd_1463_; lean_object* v_fst_1464_; lean_object* v___x_1466_; uint8_t v_isShared_1467_; uint8_t v_isSharedCheck_1518_; 
v_snd_1463_ = lean_ctor_get(v_head_1449_, 1);
v_fst_1464_ = lean_ctor_get(v_head_1449_, 0);
v_isSharedCheck_1518_ = !lean_is_exclusive(v_head_1449_);
if (v_isSharedCheck_1518_ == 0)
{
v___x_1466_ = v_head_1449_;
v_isShared_1467_ = v_isSharedCheck_1518_;
goto v_resetjp_1465_;
}
else
{
lean_inc(v_snd_1463_);
lean_inc(v_fst_1464_);
lean_dec(v_head_1449_);
v___x_1466_ = lean_box(0);
v_isShared_1467_ = v_isSharedCheck_1518_;
goto v_resetjp_1465_;
}
v_resetjp_1465_:
{
lean_object* v_fst_1468_; lean_object* v_snd_1469_; lean_object* v___x_1471_; uint8_t v_isShared_1472_; uint8_t v_isSharedCheck_1517_; 
v_fst_1468_ = lean_ctor_get(v_snd_1463_, 0);
v_snd_1469_ = lean_ctor_get(v_snd_1463_, 1);
v_isSharedCheck_1517_ = !lean_is_exclusive(v_snd_1463_);
if (v_isSharedCheck_1517_ == 0)
{
v___x_1471_ = v_snd_1463_;
v_isShared_1472_ = v_isSharedCheck_1517_;
goto v_resetjp_1470_;
}
else
{
lean_inc(v_snd_1469_);
lean_inc(v_fst_1468_);
lean_dec(v_snd_1463_);
v___x_1471_ = lean_box(0);
v_isShared_1472_ = v_isSharedCheck_1517_;
goto v_resetjp_1470_;
}
v_resetjp_1470_:
{
lean_object* v_pos_1473_; lean_object* v_steps_1474_; lean_object* v___x_1476_; uint8_t v_isShared_1477_; uint8_t v_isSharedCheck_1516_; 
v_pos_1473_ = lean_ctor_get(v_fst_1454_, 0);
v_steps_1474_ = lean_ctor_get(v_fst_1454_, 1);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_fst_1454_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1476_ = v_fst_1454_;
v_isShared_1477_ = v_isSharedCheck_1516_;
goto v_resetjp_1475_;
}
else
{
lean_inc(v_steps_1474_);
lean_inc(v_pos_1473_);
lean_dec(v_fst_1454_);
v___x_1476_ = lean_box(0);
v_isShared_1477_ = v_isSharedCheck_1516_;
goto v_resetjp_1475_;
}
v_resetjp_1475_:
{
lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1482_; 
lean_inc(v_n_1445_);
v___x_1478_ = l_List_range(v_n_1445_);
v___x_1479_ = lean_box(0);
lean_inc(v_fst_1468_);
lean_inc(v_fst_1464_);
v___x_1480_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_fst_1464_, v_fst_1468_, v___x_1478_, v___x_1479_);
if (v_isShared_1467_ == 0)
{
lean_ctor_set_tag(v___x_1466_, 2);
lean_ctor_set(v___x_1466_, 1, v_snd_1469_);
lean_ctor_set(v___x_1466_, 0, v___x_1480_);
v___x_1482_ = v___x_1466_;
goto v_reusejp_1481_;
}
else
{
lean_object* v_reuseFailAlloc_1515_; 
v_reuseFailAlloc_1515_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1515_, 0, v___x_1480_);
lean_ctor_set(v_reuseFailAlloc_1515_, 1, v_snd_1469_);
v___x_1482_ = v_reuseFailAlloc_1515_;
goto v_reusejp_1481_;
}
v_reusejp_1481_:
{
lean_object* v___x_1484_; 
lean_inc(v_gap_1446_);
lean_inc(v_n_1445_);
if (v_isShared_1457_ == 0)
{
lean_ctor_set_tag(v___x_1456_, 2);
lean_ctor_set(v___x_1456_, 1, v_gap_1446_);
lean_ctor_set(v___x_1456_, 0, v_n_1445_);
v___x_1484_ = v___x_1456_;
goto v_reusejp_1483_;
}
else
{
lean_object* v_reuseFailAlloc_1514_; 
v_reuseFailAlloc_1514_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1514_, 0, v_n_1445_);
lean_ctor_set(v_reuseFailAlloc_1514_, 1, v_gap_1446_);
v___x_1484_ = v_reuseFailAlloc_1514_;
goto v_reusejp_1483_;
}
v_reusejp_1483_:
{
lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; lean_object* v___x_1495_; lean_object* v___x_1496_; lean_object* v___x_1497_; lean_object* v___x_1498_; lean_object* v___x_1499_; lean_object* v_next_1500_; lean_object* v___x_1501_; lean_object* v___x_1503_; 
v___x_1485_ = lean_box(0);
lean_inc_ref(v___x_1482_);
v___x_1486_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1486_, 0, v___x_1482_);
lean_ctor_set(v___x_1486_, 1, v___x_1484_);
lean_ctor_set(v___x_1486_, 2, v___x_1485_);
v___x_1487_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__0));
v___x_1488_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4));
v___x_1489_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1490_ = lean_int_ediv(v_gap_1446_, v___x_1489_);
v___x_1491_ = l_Int_repr(v___x_1490_);
lean_dec(v___x_1490_);
v___x_1492_ = lean_string_append(v___x_1488_, v___x_1491_);
lean_dec_ref(v___x_1491_);
v___x_1493_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__1));
v___x_1494_ = lean_string_append(v___x_1492_, v___x_1493_);
v___x_1495_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__2));
v___x_1496_ = l_Rat_ofInt(v_fst_1464_);
v___x_1497_ = l_Rat_ofInt(v_fst_1468_);
v___x_1498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1498_, 0, v___x_1496_);
lean_ctor_set(v___x_1498_, 1, v___x_1497_);
v___x_1499_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1499_, 0, v___x_1498_);
lean_inc(v_n_1445_);
v_next_1500_ = lp_choreo_Choreo_Op_next(v___x_1482_, v_n_1445_, v_pos_1473_);
lean_inc(v_next_1500_);
lean_inc_ref(v_title_1444_);
lean_inc(v_index_1460_);
lean_inc_ref(v_section_x27_1458_);
v___x_1501_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1501_, 0, v___y_1462_);
lean_ctor_set(v___x_1501_, 1, v_section_x27_1458_);
lean_ctor_set(v___x_1501_, 2, v_index_1460_);
lean_ctor_set(v___x_1501_, 3, v___x_1487_);
lean_ctor_set(v___x_1501_, 4, v_title_1444_);
lean_ctor_set(v___x_1501_, 5, v___x_1486_);
lean_ctor_set(v___x_1501_, 6, v___x_1494_);
lean_ctor_set(v___x_1501_, 7, v___x_1495_);
lean_ctor_set(v___x_1501_, 8, v_pos_1473_);
lean_ctor_set(v___x_1501_, 9, v_next_1500_);
lean_ctor_set(v___x_1501_, 10, v___x_1499_);
if (v_isShared_1453_ == 0)
{
lean_ctor_set(v___x_1452_, 1, v___x_1479_);
lean_ctor_set(v___x_1452_, 0, v___x_1501_);
v___x_1503_ = v___x_1452_;
goto v_reusejp_1502_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1501_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v___x_1479_);
v___x_1503_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1502_;
}
v_reusejp_1502_:
{
lean_object* v___x_1504_; lean_object* v___x_1506_; 
v___x_1504_ = l_List_appendTR___redArg(v_steps_1474_, v___x_1503_);
if (v_isShared_1477_ == 0)
{
lean_ctor_set(v___x_1476_, 1, v___x_1504_);
lean_ctor_set(v___x_1476_, 0, v_next_1500_);
v___x_1506_ = v___x_1476_;
goto v_reusejp_1505_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v_next_1500_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v___x_1504_);
v___x_1506_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1505_;
}
v_reusejp_1505_:
{
lean_object* v___x_1507_; lean_object* v___x_1509_; 
v___x_1507_ = lean_unsigned_to_nat(0u);
if (v_isShared_1472_ == 0)
{
lean_ctor_set(v___x_1471_, 1, v___x_1507_);
lean_ctor_set(v___x_1471_, 0, v___x_1506_);
v___x_1509_ = v___x_1471_;
goto v_reusejp_1508_;
}
else
{
lean_object* v_reuseFailAlloc_1511_; 
v_reuseFailAlloc_1511_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1511_, 0, v___x_1506_);
lean_ctor_set(v_reuseFailAlloc_1511_, 1, v___x_1507_);
v___x_1509_ = v_reuseFailAlloc_1511_;
goto v_reusejp_1508_;
}
v_reusejp_1508_:
{
lean_object* v___x_1510_; 
v___x_1510_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6(v_n_1445_, v_gap_1446_, v_o_1443_, v_title_1444_, v___x_1509_, v_tail_1450_);
return v___x_1510_;
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
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__28(void){
_start:
{
lean_object* v___x_1553_; lean_object* v___x_1554_; 
v___x_1553_ = lean_unsigned_to_nat(0u);
v___x_1554_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_1553_);
return v___x_1554_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__29(void){
_start:
{
lean_object* v___x_1555_; lean_object* v___x_1556_; 
v___x_1555_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__28, &lp_choreo_Choreo_compileOp___closed__28_once, _init_lp_choreo_Choreo_compileOp___closed__28);
v___x_1556_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1556_, 0, v___x_1555_);
return v___x_1556_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__30(void){
_start:
{
lean_object* v___x_1557_; lean_object* v___x_1558_; 
v___x_1557_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__29, &lp_choreo_Choreo_compileOp___closed__29_once, _init_lp_choreo_Choreo_compileOp___closed__29);
v___x_1558_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1558_, 0, v___x_1557_);
return v___x_1558_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__33(void){
_start:
{
lean_object* v___x_1561_; lean_object* v___x_1562_; 
v___x_1561_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__28, &lp_choreo_Choreo_compileOp___closed__28_once, _init_lp_choreo_Choreo_compileOp___closed__28);
v___x_1562_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1562_, 0, v___x_1561_);
lean_ctor_set(v___x_1562_, 1, v___x_1561_);
return v___x_1562_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__34(void){
_start:
{
lean_object* v___x_1563_; lean_object* v___x_1564_; 
v___x_1563_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__33, &lp_choreo_Choreo_compileOp___closed__33_once, _init_lp_choreo_Choreo_compileOp___closed__33);
v___x_1564_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1564_, 0, v___x_1563_);
return v___x_1564_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp(lean_object* v_sp_1574_, lean_object* v_st_1575_, lean_object* v_o_1576_){
_start:
{
lean_object* v_n_1577_; lean_object* v_gap_1578_; lean_object* v_pos_1579_; lean_object* v_steps_1580_; lean_object* v_kind_1581_; lean_object* v_section_x27_1582_; lean_object* v_title_1583_; lean_object* v_shape_1584_; lean_object* v_counts_1585_; lean_object* v_quarters_1586_; lean_object* v_dx_1587_; lean_object* v_dy_1588_; lean_object* v_step_1589_; lean_object* v_places_1590_; lean_object* v_line_1591_; lean_object* v_leftShape_1592_; lean_object* v_rightShape_1593_; lean_object* v_index_1594_; lean_object* v_name_1596_; lean_object* v_kind_1597_; lean_object* v_label_1598_; lean_object* v_step_1599_; lean_object* v_op_1600_; lean_object* v_rq_1601_; lean_object* v_en_1602_; lean_object* v_pos_1603_; lean_object* v_steps_1604_; lean_object* v_algebra_1605_; lean_object* v___y_1613_; lean_object* v___y_1614_; lean_object* v___y_1615_; lean_object* v_op_1616_; lean_object* v___y_1617_; lean_object* v___y_1618_; uint8_t v___y_1621_; lean_object* v___y_1622_; lean_object* v___y_1623_; lean_object* v___y_1638_; uint8_t v___y_1639_; lean_object* v___y_1642_; uint8_t v___y_1643_; lean_object* v___y_1654_; lean_object* v___x_1659_; uint8_t v___x_1660_; 
v_n_1577_ = lean_ctor_get(v_sp_1574_, 1);
lean_inc(v_n_1577_);
v_gap_1578_ = lean_ctor_get(v_sp_1574_, 3);
lean_inc(v_gap_1578_);
lean_dec_ref(v_sp_1574_);
v_pos_1579_ = lean_ctor_get(v_st_1575_, 0);
v_steps_1580_ = lean_ctor_get(v_st_1575_, 1);
v_kind_1581_ = lean_ctor_get(v_o_1576_, 0);
v_section_x27_1582_ = lean_ctor_get(v_o_1576_, 1);
v_title_1583_ = lean_ctor_get(v_o_1576_, 2);
v_shape_1584_ = lean_ctor_get(v_o_1576_, 3);
v_counts_1585_ = lean_ctor_get(v_o_1576_, 4);
v_quarters_1586_ = lean_ctor_get(v_o_1576_, 5);
v_dx_1587_ = lean_ctor_get(v_o_1576_, 6);
v_dy_1588_ = lean_ctor_get(v_o_1576_, 7);
v_step_1589_ = lean_ctor_get(v_o_1576_, 10);
v_places_1590_ = lean_ctor_get(v_o_1576_, 11);
v_line_1591_ = lean_ctor_get(v_o_1576_, 12);
v_leftShape_1592_ = lean_ctor_get(v_o_1576_, 13);
v_rightShape_1593_ = lean_ctor_get(v_o_1576_, 14);
v_index_1594_ = lean_ctor_get(v_o_1576_, 15);
v___x_1659_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__6));
v___x_1660_ = lean_string_dec_eq(v_kind_1581_, v___x_1659_);
if (v___x_1660_ == 0)
{
lean_object* v___x_1661_; uint8_t v___x_1662_; 
v___x_1661_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__2));
v___x_1662_ = lean_string_dec_eq(v_kind_1581_, v___x_1661_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1663_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__7));
v___x_1664_ = lean_string_dec_eq(v_kind_1581_, v___x_1663_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; uint8_t v___x_1666_; 
v___x_1665_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__8));
v___x_1666_ = lean_string_dec_eq(v_kind_1581_, v___x_1665_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__9));
v___x_1668_ = lean_string_dec_eq(v_kind_1581_, v___x_1667_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_1670_ = lean_string_dec_eq(v_kind_1581_, v___x_1669_);
if (v___x_1670_ == 0)
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
lean_inc(v_index_1594_);
lean_inc(v_counts_1585_);
lean_inc_ref(v_title_1583_);
lean_inc_ref(v_section_x27_1582_);
v___x_1671_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1672_ = lean_string_dec_eq(v_kind_1581_, v___x_1671_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
v___x_1673_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__12));
v___x_1674_ = lean_string_dec_eq(v_kind_1581_, v___x_1673_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; uint8_t v___x_1676_; 
lean_inc_ref(v_rightShape_1593_);
lean_inc_ref(v_leftShape_1592_);
lean_inc(v_line_1591_);
lean_inc_ref(v_kind_1581_);
lean_dec_ref(v_o_1576_);
v___x_1675_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__13));
v___x_1676_ = lean_string_dec_eq(v_kind_1581_, v___x_1675_);
lean_dec_ref(v_kind_1581_);
if (v___x_1676_ == 0)
{
lean_dec(v_index_1594_);
lean_dec_ref(v_rightShape_1593_);
lean_dec_ref(v_leftShape_1592_);
lean_dec(v_line_1591_);
lean_dec(v_counts_1585_);
lean_dec_ref(v_title_1583_);
lean_dec_ref(v_section_x27_1582_);
lean_dec(v_gap_1578_);
lean_dec(v_n_1577_);
return v_st_1575_;
}
else
{
lean_object* v___x_1677_; lean_object* v_fst_1678_; lean_object* v_snd_1679_; lean_object* v___x_1680_; lean_object* v___x_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v_target_1686_; lean_object* v_pre_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; 
lean_inc(v_steps_1580_);
lean_inc(v_pos_1579_);
lean_dec_ref(v_st_1575_);
lean_inc_n(v_n_1577_, 2);
v___x_1677_ = lp_choreo_Choreo_groupsOf(v_pos_1579_, v_n_1577_);
v_fst_1678_ = lean_ctor_get(v___x_1677_, 0);
lean_inc_n(v_fst_1678_, 3);
v_snd_1679_ = lean_ctor_get(v___x_1677_, 1);
lean_inc_n(v_snd_1679_, 3);
lean_dec_ref(v___x_1677_);
v___x_1680_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_1681_ = lean_int_sub(v_line_1591_, v___x_1680_);
v___x_1682_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_1579_, v_fst_1678_, v_leftShape_1592_, v___x_1681_);
lean_dec_ref(v_leftShape_1592_);
v___x_1683_ = lean_int_add(v_line_1591_, v___x_1680_);
v___x_1684_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_1579_, v_snd_1679_, v_rightShape_1593_, v___x_1683_);
lean_dec_ref(v_rightShape_1593_);
v___x_1685_ = l_List_appendTR___redArg(v___x_1682_, v___x_1684_);
v_target_1686_ = lp_choreo_Choreo_placesWith(v_n_1577_, v___x_1685_, v_pos_1579_);
lean_dec(v___x_1685_);
lean_inc(v_gap_1578_);
lean_inc(v_line_1591_);
v_pre_1687_ = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(v_pre_1687_, 0, v_fst_1678_);
lean_ctor_set(v_pre_1687_, 1, v_snd_1679_);
lean_ctor_set(v_pre_1687_, 2, v_line_1591_);
lean_ctor_set(v_pre_1687_, 3, v_gap_1578_);
v___x_1688_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__14));
v___x_1689_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1688_);
v___x_1690_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__15));
v___x_1691_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1690_);
lean_dec_ref(v_title_1583_);
v___x_1692_ = lean_alloc_ctor(3, 5, 0);
lean_ctor_set(v___x_1692_, 0, v_fst_1678_);
lean_ctor_set(v___x_1692_, 1, v_snd_1679_);
lean_ctor_set(v___x_1692_, 2, v_line_1591_);
lean_ctor_set(v___x_1692_, 3, v_target_1686_);
lean_ctor_set(v___x_1692_, 4, v_counts_1585_);
lean_inc_ref(v_pre_1687_);
lean_inc_ref(v___x_1692_);
v___x_1693_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1693_, 0, v___x_1692_);
lean_ctor_set(v___x_1693_, 1, v_pre_1687_);
lean_ctor_set(v___x_1693_, 2, v_pre_1687_);
v___x_1694_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__16));
v___x_1695_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1696_ = lean_int_ediv(v_gap_1578_, v___x_1695_);
lean_dec(v_gap_1578_);
v___x_1697_ = l_Int_repr(v___x_1696_);
lean_dec(v___x_1696_);
v___x_1698_ = lean_string_append(v___x_1694_, v___x_1697_);
lean_dec_ref(v___x_1697_);
v___x_1699_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__17));
v___x_1700_ = lean_string_append(v___x_1698_, v___x_1699_);
v___x_1701_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__18));
v___x_1702_ = lean_box(0);
v_name_1596_ = v___x_1689_;
v_kind_1597_ = v___x_1675_;
v_label_1598_ = v___x_1691_;
v_step_1599_ = v___x_1693_;
v_op_1600_ = v___x_1692_;
v_rq_1601_ = v___x_1700_;
v_en_1602_ = v___x_1701_;
v_pos_1603_ = v_pos_1579_;
v_steps_1604_ = v_steps_1580_;
v_algebra_1605_ = v___x_1702_;
goto v___jp_1595_;
}
}
else
{
lean_object* v___x_1704_; uint8_t v_isShared_1705_; uint8_t v_isSharedCheck_1721_; 
lean_inc(v_steps_1580_);
lean_inc(v_pos_1579_);
lean_dec(v_gap_1578_);
v_isSharedCheck_1721_ = !lean_is_exclusive(v_st_1575_);
if (v_isSharedCheck_1721_ == 0)
{
lean_object* v_unused_1722_; lean_object* v_unused_1723_; 
v_unused_1722_ = lean_ctor_get(v_st_1575_, 1);
lean_dec(v_unused_1722_);
v_unused_1723_ = lean_ctor_get(v_st_1575_, 0);
lean_dec(v_unused_1723_);
v___x_1704_ = v_st_1575_;
v_isShared_1705_ = v_isSharedCheck_1721_;
goto v_resetjp_1703_;
}
else
{
lean_dec(v_st_1575_);
v___x_1704_ = lean_box(0);
v_isShared_1705_ = v_isSharedCheck_1721_;
goto v_resetjp_1703_;
}
v_resetjp_1703_:
{
lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v_target_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1713_; 
lean_inc(v_n_1577_);
v___x_1706_ = l_List_range(v_n_1577_);
v___x_1707_ = lean_box(0);
v_target_1708_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_pos_1579_, v_o_1576_, v___x_1706_, v___x_1707_);
lean_dec_ref(v_o_1576_);
v___x_1709_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__19));
v___x_1710_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1709_);
lean_dec_ref(v_title_1583_);
v___x_1711_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__20));
lean_inc(v_target_1708_);
if (v_isShared_1705_ == 0)
{
lean_ctor_set(v___x_1704_, 1, v_counts_1585_);
lean_ctor_set(v___x_1704_, 0, v_target_1708_);
v___x_1713_ = v___x_1704_;
goto v_reusejp_1712_;
}
else
{
lean_object* v_reuseFailAlloc_1720_; 
v_reuseFailAlloc_1720_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1720_, 0, v_target_1708_);
lean_ctor_set(v_reuseFailAlloc_1720_, 1, v_counts_1585_);
v___x_1713_ = v_reuseFailAlloc_1720_;
goto v_reusejp_1712_;
}
v_reusejp_1712_:
{
lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; 
v___x_1714_ = lean_box(0);
v___x_1715_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1715_, 0, v_target_1708_);
lean_inc_ref(v___x_1713_);
v___x_1716_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1716_, 0, v___x_1713_);
lean_ctor_set(v___x_1716_, 1, v___x_1714_);
lean_ctor_set(v___x_1716_, 2, v___x_1715_);
v___x_1717_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__21));
v___x_1718_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__22));
v___x_1719_ = lean_box(0);
lean_inc_ref(v___x_1710_);
v_name_1596_ = v___x_1710_;
v_kind_1597_ = v___x_1711_;
v_label_1598_ = v___x_1710_;
v_step_1599_ = v___x_1716_;
v_op_1600_ = v___x_1713_;
v_rq_1601_ = v___x_1717_;
v_en_1602_ = v___x_1718_;
v_pos_1603_ = v_pos_1579_;
v_steps_1604_ = v_steps_1580_;
v_algebra_1605_ = v___x_1719_;
goto v___jp_1595_;
}
}
}
}
else
{
lean_object* v___x_1724_; lean_object* v_fst_1725_; lean_object* v_snd_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1750_; 
lean_inc(v_steps_1580_);
lean_inc(v_pos_1579_);
lean_dec_ref(v_o_1576_);
lean_dec_ref(v_st_1575_);
lean_inc(v_n_1577_);
v___x_1724_ = lp_choreo_Choreo_groupsOf(v_pos_1579_, v_n_1577_);
v_fst_1725_ = lean_ctor_get(v___x_1724_, 0);
v_snd_1726_ = lean_ctor_get(v___x_1724_, 1);
v_isSharedCheck_1750_ = !lean_is_exclusive(v___x_1724_);
if (v_isSharedCheck_1750_ == 0)
{
v___x_1728_ = v___x_1724_;
v_isShared_1729_ = v_isSharedCheck_1750_;
goto v_resetjp_1727_;
}
else
{
lean_inc(v_snd_1726_);
lean_inc(v_fst_1725_);
lean_dec(v___x_1724_);
v___x_1728_ = lean_box(0);
v_isShared_1729_ = v_isSharedCheck_1750_;
goto v_resetjp_1727_;
}
v_resetjp_1727_:
{
lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v_ds_1732_; lean_object* v___x_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1737_; 
lean_inc(v_n_1577_);
v___x_1730_ = l_List_range(v_n_1577_);
v___x_1731_ = lean_box(0);
v_ds_1732_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_pos_1579_, v___x_1730_, v___x_1731_);
v___x_1733_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__23));
v___x_1734_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1733_);
lean_dec_ref(v_title_1583_);
v___x_1735_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__24));
if (v_isShared_1729_ == 0)
{
lean_ctor_set_tag(v___x_1728_, 2);
lean_ctor_set(v___x_1728_, 1, v_counts_1585_);
lean_ctor_set(v___x_1728_, 0, v_ds_1732_);
v___x_1737_ = v___x_1728_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_ds_1732_);
lean_ctor_set(v_reuseFailAlloc_1749_, 1, v_counts_1585_);
v___x_1737_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
lean_inc(v_gap_1578_);
v___x_1738_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_1738_, 0, v_fst_1725_);
lean_ctor_set(v___x_1738_, 1, v_snd_1726_);
lean_ctor_set(v___x_1738_, 2, v_gap_1578_);
lean_inc_ref(v___x_1738_);
lean_inc_ref(v___x_1737_);
v___x_1739_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1737_);
lean_ctor_set(v___x_1739_, 1, v___x_1738_);
lean_ctor_set(v___x_1739_, 2, v___x_1738_);
v___x_1740_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__25));
v___x_1741_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1742_ = lean_int_ediv(v_gap_1578_, v___x_1741_);
lean_dec(v_gap_1578_);
v___x_1743_ = l_Int_repr(v___x_1742_);
lean_dec(v___x_1742_);
v___x_1744_ = lean_string_append(v___x_1740_, v___x_1743_);
lean_dec_ref(v___x_1743_);
v___x_1745_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__26));
v___x_1746_ = lean_string_append(v___x_1744_, v___x_1745_);
v___x_1747_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__27));
v___x_1748_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__30, &lp_choreo_Choreo_compileOp___closed__30_once, _init_lp_choreo_Choreo_compileOp___closed__30);
lean_inc_ref(v___x_1734_);
v_name_1596_ = v___x_1734_;
v_kind_1597_ = v___x_1735_;
v_label_1598_ = v___x_1734_;
v_step_1599_ = v___x_1739_;
v_op_1600_ = v___x_1737_;
v_rq_1601_ = v___x_1746_;
v_en_1602_ = v___x_1747_;
v_pos_1603_ = v_pos_1579_;
v_steps_1604_ = v_steps_1580_;
v_algebra_1605_ = v___x_1748_;
goto v___jp_1595_;
}
}
}
}
else
{
lean_object* v_moves_1751_; lean_object* v_title_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v_fst_1756_; 
v_moves_1751_ = lp_choreo_Choreo_stepMoves(v_step_1589_);
v_title_1752_ = lp_choreo_Choreo_stepTitle(v_step_1589_);
v___x_1753_ = lean_unsigned_to_nat(0u);
v___x_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1754_, 0, v_st_1575_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__6(v_o_1576_, v_title_1752_, v_n_1577_, v_gap_1578_, v___x_1754_, v_moves_1751_);
v_fst_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_fst_1756_);
lean_dec_ref(v___x_1755_);
return v_fst_1756_;
}
}
else
{
lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1780_; 
lean_inc(v_index_1594_);
lean_inc(v_counts_1585_);
lean_inc_ref(v_title_1583_);
lean_inc_ref(v_section_x27_1582_);
lean_inc(v_steps_1580_);
lean_inc(v_pos_1579_);
lean_dec_ref(v_o_1576_);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_st_1575_);
if (v_isSharedCheck_1780_ == 0)
{
lean_object* v_unused_1781_; lean_object* v_unused_1782_; 
v_unused_1781_ = lean_ctor_get(v_st_1575_, 1);
lean_dec(v_unused_1781_);
v_unused_1782_ = lean_ctor_get(v_st_1575_, 0);
lean_dec(v_unused_1782_);
v___x_1758_ = v_st_1575_;
v_isShared_1759_ = v_isSharedCheck_1780_;
goto v_resetjp_1757_;
}
else
{
lean_dec(v_st_1575_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1780_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1760_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__31));
v___x_1761_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1760_);
lean_dec_ref(v_title_1583_);
v___x_1762_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__0));
v___x_1763_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc(v_n_1577_);
v___x_1764_ = lp_choreo_Choreo_compileOp___lam__1(v_n_1577_, v___x_1763_, v___x_1763_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 2);
lean_ctor_set(v___x_1758_, 1, v_counts_1585_);
lean_ctor_set(v___x_1758_, 0, v___x_1764_);
v___x_1766_ = v___x_1758_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v_counts_1585_);
v___x_1766_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_inc(v_gap_1578_);
lean_inc(v_n_1577_);
v___x_1767_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1767_, 0, v_n_1577_);
lean_ctor_set(v___x_1767_, 1, v_gap_1578_);
v___x_1768_ = lean_box(0);
lean_inc_ref(v___x_1766_);
v___x_1769_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1766_);
lean_ctor_set(v___x_1769_, 1, v___x_1767_);
lean_ctor_set(v___x_1769_, 2, v___x_1768_);
v___x_1770_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4));
v___x_1771_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1772_ = lean_int_ediv(v_gap_1578_, v___x_1771_);
lean_dec(v_gap_1578_);
v___x_1773_ = l_Int_repr(v___x_1772_);
lean_dec(v___x_1772_);
v___x_1774_ = lean_string_append(v___x_1770_, v___x_1773_);
lean_dec_ref(v___x_1773_);
v___x_1775_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__6_spec__6___closed__1));
v___x_1776_ = lean_string_append(v___x_1774_, v___x_1775_);
v___x_1777_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__32));
v___x_1778_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__34, &lp_choreo_Choreo_compileOp___closed__34_once, _init_lp_choreo_Choreo_compileOp___closed__34);
v_name_1596_ = v___x_1761_;
v_kind_1597_ = v___x_1762_;
v_label_1598_ = v___x_1760_;
v_step_1599_ = v___x_1769_;
v_op_1600_ = v___x_1766_;
v_rq_1601_ = v___x_1776_;
v_en_1602_ = v___x_1777_;
v_pos_1603_ = v_pos_1579_;
v_steps_1604_ = v_steps_1580_;
v_algebra_1605_ = v___x_1778_;
goto v___jp_1595_;
}
}
}
}
else
{
lean_object* v___x_1783_; lean_object* v_fst_1784_; lean_object* v_snd_1785_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___x_1817_; lean_object* v___y_1819_; 
lean_inc(v_index_1594_);
lean_inc(v_counts_1585_);
lean_inc_ref(v_title_1583_);
lean_inc_ref(v_section_x27_1582_);
lean_inc(v_steps_1580_);
lean_inc(v_pos_1579_);
lean_dec_ref(v_o_1576_);
lean_dec_ref(v_st_1575_);
lean_inc(v_n_1577_);
v___x_1783_ = lp_choreo_Choreo_groupsOf(v_pos_1579_, v_n_1577_);
v_fst_1784_ = lean_ctor_get(v___x_1783_, 0);
lean_inc(v_fst_1784_);
v_snd_1785_ = lean_ctor_get(v___x_1783_, 1);
lean_inc(v_snd_1785_);
lean_dec_ref(v___x_1783_);
v___x_1817_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_snd_1785_) == 0)
{
v___y_1819_ = v___x_1817_;
goto v___jp_1818_;
}
else
{
lean_object* v_head_1824_; 
v_head_1824_ = lean_ctor_get(v_snd_1785_, 0);
lean_inc(v_head_1824_);
v___y_1819_ = v_head_1824_;
goto v___jp_1818_;
}
v___jp_1786_:
{
lean_object* v___x_1789_; lean_object* v_x_1790_; lean_object* v___x_1792_; uint8_t v_isShared_1793_; uint8_t v_isSharedCheck_1815_; 
v___x_1789_ = lp_choreo_Choreo_State_at(v_pos_1579_, v___y_1788_);
v_x_1790_ = lean_ctor_get(v___x_1789_, 0);
v_isSharedCheck_1815_ = !lean_is_exclusive(v___x_1789_);
if (v_isSharedCheck_1815_ == 0)
{
lean_object* v_unused_1816_; 
v_unused_1816_ = lean_ctor_get(v___x_1789_, 1);
lean_dec(v_unused_1816_);
v___x_1792_ = v___x_1789_;
v_isShared_1793_ = v_isSharedCheck_1815_;
goto v_resetjp_1791_;
}
else
{
lean_inc(v_x_1790_);
lean_dec(v___x_1789_);
v___x_1792_ = lean_box(0);
v_isShared_1793_ = v_isSharedCheck_1815_;
goto v_resetjp_1791_;
}
v_resetjp_1791_:
{
lean_object* v_dist_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; lean_object* v_ds_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1802_; 
v_dist_1794_ = lean_int_sub(v___y_1787_, v_x_1790_);
lean_dec(v_x_1790_);
lean_dec(v___y_1787_);
lean_inc(v_n_1577_);
v___x_1795_ = l_List_range(v_n_1577_);
v___x_1796_ = lean_box(0);
v_ds_1797_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(v_fst_1784_, v_dist_1794_, v___x_1795_, v___x_1796_);
v___x_1798_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__35));
v___x_1799_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1798_);
lean_dec_ref(v_title_1583_);
v___x_1800_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__36));
if (v_isShared_1793_ == 0)
{
lean_ctor_set_tag(v___x_1792_, 2);
lean_ctor_set(v___x_1792_, 1, v_counts_1585_);
lean_ctor_set(v___x_1792_, 0, v_ds_1797_);
v___x_1802_ = v___x_1792_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_ds_1797_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_counts_1585_);
v___x_1802_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
lean_inc(v_gap_1578_);
v___x_1803_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_1803_, 0, v_fst_1784_);
lean_ctor_set(v___x_1803_, 1, v_snd_1785_);
lean_ctor_set(v___x_1803_, 2, v_gap_1578_);
lean_inc_ref(v___x_1803_);
lean_inc_ref(v___x_1802_);
v___x_1804_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1802_);
lean_ctor_set(v___x_1804_, 1, v___x_1803_);
lean_ctor_set(v___x_1804_, 2, v___x_1803_);
v___x_1805_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__37));
v___x_1806_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1807_ = lean_int_ediv(v_gap_1578_, v___x_1806_);
lean_dec(v_gap_1578_);
v___x_1808_ = l_Int_repr(v___x_1807_);
lean_dec(v___x_1807_);
v___x_1809_ = lean_string_append(v___x_1805_, v___x_1808_);
lean_dec_ref(v___x_1808_);
v___x_1810_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__38));
v___x_1811_ = lean_string_append(v___x_1809_, v___x_1810_);
v___x_1812_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__39));
v___x_1813_ = lean_box(0);
lean_inc_ref(v___x_1799_);
v_name_1596_ = v___x_1799_;
v_kind_1597_ = v___x_1800_;
v_label_1598_ = v___x_1799_;
v_step_1599_ = v___x_1804_;
v_op_1600_ = v___x_1802_;
v_rq_1601_ = v___x_1811_;
v_en_1602_ = v___x_1812_;
v_pos_1603_ = v_pos_1579_;
v_steps_1604_ = v_steps_1580_;
v_algebra_1605_ = v___x_1813_;
goto v___jp_1595_;
}
}
}
v___jp_1818_:
{
lean_object* v___x_1820_; 
v___x_1820_ = lp_choreo_Choreo_State_at(v_pos_1579_, v___y_1819_);
if (lean_obj_tag(v_fst_1784_) == 0)
{
lean_object* v_x_1821_; 
v_x_1821_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_x_1821_);
lean_dec_ref(v___x_1820_);
v___y_1787_ = v_x_1821_;
v___y_1788_ = v___x_1817_;
goto v___jp_1786_;
}
else
{
lean_object* v_x_1822_; lean_object* v_head_1823_; 
v_x_1822_ = lean_ctor_get(v___x_1820_, 0);
lean_inc(v_x_1822_);
lean_dec_ref(v___x_1820_);
v_head_1823_ = lean_ctor_get(v_fst_1784_, 0);
lean_inc(v_head_1823_);
v___y_1787_ = v_x_1822_;
v___y_1788_ = v_head_1823_;
goto v___jp_1786_;
}
}
}
}
else
{
lean_object* v___x_1826_; uint8_t v_isShared_1827_; uint8_t v_isSharedCheck_1852_; 
lean_inc(v_index_1594_);
lean_inc(v_dy_1588_);
lean_inc(v_dx_1587_);
lean_inc(v_counts_1585_);
lean_inc_ref(v_title_1583_);
lean_inc_ref(v_section_x27_1582_);
lean_inc(v_steps_1580_);
lean_inc(v_pos_1579_);
lean_dec_ref(v_o_1576_);
v_isSharedCheck_1852_ = !lean_is_exclusive(v_st_1575_);
if (v_isSharedCheck_1852_ == 0)
{
lean_object* v_unused_1853_; lean_object* v_unused_1854_; 
v_unused_1853_ = lean_ctor_get(v_st_1575_, 1);
lean_dec(v_unused_1853_);
v_unused_1854_ = lean_ctor_get(v_st_1575_, 0);
lean_dec(v_unused_1854_);
v___x_1826_ = v_st_1575_;
v_isShared_1827_ = v_isSharedCheck_1852_;
goto v_resetjp_1825_;
}
else
{
lean_dec(v_st_1575_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1852_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1828_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__40));
v___x_1829_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1828_);
v___x_1830_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__1));
v___x_1831_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__41));
v___x_1832_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1831_);
lean_dec_ref(v_title_1583_);
lean_inc(v_dy_1588_);
lean_inc(v_dx_1587_);
lean_inc(v_n_1577_);
v___x_1833_ = lp_choreo_Choreo_compileOp___lam__1(v_n_1577_, v_dx_1587_, v_dy_1588_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set_tag(v___x_1826_, 2);
lean_ctor_set(v___x_1826_, 1, v_counts_1585_);
lean_ctor_set(v___x_1826_, 0, v___x_1833_);
v___x_1835_ = v___x_1826_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_counts_1585_);
v___x_1835_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_inc(v_gap_1578_);
lean_inc(v_n_1577_);
v___x_1836_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1836_, 0, v_n_1577_);
lean_ctor_set(v___x_1836_, 1, v_gap_1578_);
v___x_1837_ = lean_box(0);
lean_inc_ref(v___x_1835_);
v___x_1838_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1835_);
lean_ctor_set(v___x_1838_, 1, v___x_1836_);
lean_ctor_set(v___x_1838_, 2, v___x_1837_);
v___x_1839_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__4));
v___x_1840_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1841_ = lean_int_ediv(v_gap_1578_, v___x_1840_);
lean_dec(v_gap_1578_);
v___x_1842_ = l_Int_repr(v___x_1841_);
lean_dec(v___x_1841_);
v___x_1843_ = lean_string_append(v___x_1839_, v___x_1842_);
lean_dec_ref(v___x_1842_);
v___x_1844_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__8_spec__9___closed__5));
v___x_1845_ = lean_string_append(v___x_1843_, v___x_1844_);
v___x_1846_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__42));
v___x_1847_ = l_Rat_ofInt(v_dx_1587_);
v___x_1848_ = l_Rat_ofInt(v_dy_1588_);
v___x_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1847_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
v_name_1596_ = v___x_1829_;
v_kind_1597_ = v___x_1830_;
v_label_1598_ = v___x_1832_;
v_step_1599_ = v___x_1838_;
v_op_1600_ = v___x_1835_;
v_rq_1601_ = v___x_1845_;
v_en_1602_ = v___x_1846_;
v_pos_1603_ = v_pos_1579_;
v_steps_1604_ = v_steps_1580_;
v_algebra_1605_ = v___x_1850_;
goto v___jp_1595_;
}
}
}
}
else
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_inc(v_quarters_1586_);
v___x_1855_ = l_List_range(v_quarters_1586_);
v___x_1856_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__8(v_o_1576_, v_n_1577_, v_gap_1578_, v_st_1575_, v___x_1855_);
return v___x_1856_;
}
}
else
{
lean_inc(v_index_1594_);
lean_inc(v_places_1590_);
lean_inc(v_counts_1585_);
lean_inc_ref(v_shape_1584_);
lean_inc_ref(v_title_1583_);
lean_inc_ref(v_section_x27_1582_);
lean_inc(v_steps_1580_);
lean_inc(v_pos_1579_);
lean_dec_ref(v_o_1576_);
lean_dec_ref(v_st_1575_);
if (lean_obj_tag(v_places_1590_) == 0)
{
lean_object* v___x_1857_; uint8_t v___x_1858_; 
v___x_1857_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__43));
v___x_1858_ = lean_string_dec_eq(v_shape_1584_, v___x_1857_);
if (v___x_1858_ == 0)
{
lean_object* v___x_1859_; lean_object* v___x_1860_; 
lean_inc(v_n_1577_);
v___x_1859_ = lp_choreo_Choreo_namedPlaces(v_shape_1584_, v_n_1577_, v_gap_1578_);
lean_dec(v_gap_1578_);
v___x_1860_ = lp_choreo_Choreo_assignTo(v_pos_1579_, v___x_1859_);
lean_dec(v___x_1859_);
v___y_1654_ = v___x_1860_;
goto v___jp_1653_;
}
else
{
lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; 
lean_dec(v_gap_1578_);
v___x_1861_ = lean_unsigned_to_nat(0u);
lean_inc(v_pos_1579_);
v___x_1862_ = l_List_zipIdxTR___redArg(v_pos_1579_, v___x_1861_);
v___x_1863_ = lean_box(0);
v___x_1864_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(v_pos_1579_, v___x_1862_, v___x_1863_);
v___y_1654_ = v___x_1864_;
goto v___jp_1653_;
}
}
else
{
lean_object* v_val_1865_; 
lean_dec(v_gap_1578_);
v_val_1865_ = lean_ctor_get(v_places_1590_, 0);
lean_inc(v_val_1865_);
v___y_1654_ = v_val_1865_;
goto v___jp_1653_;
}
}
v___jp_1595_:
{
lean_object* v_next_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; 
v_next_1606_ = lp_choreo_Choreo_Op_next(v_op_1600_, v_n_1577_, v_pos_1603_);
lean_inc(v_next_1606_);
lean_inc_ref(v_kind_1597_);
v___x_1607_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1607_, 0, v_name_1596_);
lean_ctor_set(v___x_1607_, 1, v_section_x27_1582_);
lean_ctor_set(v___x_1607_, 2, v_index_1594_);
lean_ctor_set(v___x_1607_, 3, v_kind_1597_);
lean_ctor_set(v___x_1607_, 4, v_label_1598_);
lean_ctor_set(v___x_1607_, 5, v_step_1599_);
lean_ctor_set(v___x_1607_, 6, v_rq_1601_);
lean_ctor_set(v___x_1607_, 7, v_en_1602_);
lean_ctor_set(v___x_1607_, 8, v_pos_1603_);
lean_ctor_set(v___x_1607_, 9, v_next_1606_);
lean_ctor_set(v___x_1607_, 10, v_algebra_1605_);
v___x_1608_ = lean_box(0);
v___x_1609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1609_, 0, v___x_1607_);
lean_ctor_set(v___x_1609_, 1, v___x_1608_);
v___x_1610_ = l_List_appendTR___redArg(v_steps_1604_, v___x_1609_);
v___x_1611_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1611_, 0, v_next_1606_);
lean_ctor_set(v___x_1611_, 1, v___x_1610_);
return v___x_1611_;
}
v___jp_1612_:
{
lean_object* v___x_1619_; 
v___x_1619_ = lean_box(0);
lean_inc_ref(v___y_1617_);
lean_inc_ref(v___y_1613_);
v_name_1596_ = v___y_1613_;
v_kind_1597_ = v___y_1614_;
v_label_1598_ = v___y_1613_;
v_step_1599_ = v___y_1615_;
v_op_1600_ = v_op_1616_;
v_rq_1601_ = v___y_1617_;
v_en_1602_ = v___y_1618_;
v_pos_1603_ = v_pos_1579_;
v_steps_1604_ = v_steps_1580_;
v_algebra_1605_ = v___x_1619_;
goto v___jp_1595_;
}
v___jp_1620_:
{
lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
v___x_1624_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__0));
v___x_1625_ = lean_string_append(v___x_1624_, v_shape_1584_);
v___x_1626_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1583_, v___x_1625_);
lean_dec_ref(v___x_1625_);
lean_dec_ref(v_title_1583_);
v___x_1627_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__1));
v___x_1628_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1628_, 0, v___y_1622_);
lean_ctor_set(v___x_1628_, 1, v_counts_1585_);
v___x_1629_ = lean_box(0);
lean_inc_ref(v___x_1628_);
v___x_1630_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1630_, 0, v___x_1628_);
lean_ctor_set(v___x_1630_, 1, v___x_1629_);
lean_ctor_set(v___x_1630_, 2, v___y_1623_);
v___x_1631_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__2));
if (v___y_1621_ == 0)
{
lean_object* v___x_1632_; lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; 
v___x_1632_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__3));
v___x_1633_ = lean_string_append(v___x_1632_, v_shape_1584_);
lean_dec_ref(v_shape_1584_);
v___x_1634_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__4));
v___x_1635_ = lean_string_append(v___x_1633_, v___x_1634_);
v___y_1613_ = v___x_1626_;
v___y_1614_ = v___x_1627_;
v___y_1615_ = v___x_1630_;
v_op_1616_ = v___x_1628_;
v___y_1617_ = v___x_1631_;
v___y_1618_ = v___x_1635_;
goto v___jp_1612_;
}
else
{
lean_object* v___x_1636_; 
lean_dec_ref(v_shape_1584_);
v___x_1636_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__5));
v___y_1613_ = v___x_1626_;
v___y_1614_ = v___x_1627_;
v___y_1615_ = v___x_1630_;
v_op_1616_ = v___x_1628_;
v___y_1617_ = v___x_1631_;
v___y_1618_ = v___x_1636_;
goto v___jp_1612_;
}
}
v___jp_1637_:
{
lean_object* v___x_1640_; 
lean_inc(v___y_1638_);
v___x_1640_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1640_, 0, v___y_1638_);
v___y_1621_ = v___y_1639_;
v___y_1622_ = v___y_1638_;
v___y_1623_ = v___x_1640_;
goto v___jp_1620_;
}
v___jp_1641_:
{
if (lean_obj_tag(v_places_1590_) == 0)
{
if (v___y_1643_ == 0)
{
v___y_1638_ = v___y_1642_;
v___y_1639_ = v___y_1643_;
goto v___jp_1637_;
}
else
{
lean_object* v___x_1644_; lean_object* v_x_1645_; lean_object* v_y_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v_r2_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; 
v___x_1644_ = lp_choreo_Choreo_centre;
v_x_1645_ = lean_ctor_get(v___x_1644_, 0);
v_y_1646_ = lean_ctor_get(v___x_1644_, 1);
v___x_1647_ = lean_unsigned_to_nat(0u);
v___x_1648_ = lp_choreo_Choreo_State_at(v___y_1642_, v___x_1647_);
v_r2_1649_ = lp_choreo_Choreo_distSq(v___x_1648_, v___x_1644_);
lean_dec_ref(v___x_1648_);
lean_inc(v_n_1577_);
v___x_1650_ = l_List_range(v_n_1577_);
lean_inc(v_y_1646_);
lean_inc(v_x_1645_);
v___x_1651_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1651_, 0, v___x_1650_);
lean_ctor_set(v___x_1651_, 1, v_x_1645_);
lean_ctor_set(v___x_1651_, 2, v_y_1646_);
lean_ctor_set(v___x_1651_, 3, v_r2_1649_);
v___y_1621_ = v___y_1643_;
v___y_1622_ = v___y_1642_;
v___y_1623_ = v___x_1651_;
goto v___jp_1620_;
}
}
else
{
uint8_t v___x_1652_; 
lean_dec_ref_known(v_places_1590_, 1);
v___x_1652_ = 0;
v___y_1638_ = v___y_1642_;
v___y_1639_ = v___x_1652_;
goto v___jp_1637_;
}
}
v___jp_1653_:
{
lean_object* v___x_1655_; uint8_t v___x_1656_; 
v___x_1655_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_1656_ = lean_string_dec_eq(v_shape_1584_, v___x_1655_);
if (v___x_1656_ == 0)
{
lean_object* v___x_1657_; uint8_t v___x_1658_; 
v___x_1657_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__3));
v___x_1658_ = lean_string_dec_eq(v_shape_1584_, v___x_1657_);
v___y_1642_ = v___y_1654_;
v___y_1643_ = v___x_1658_;
goto v___jp_1641_;
}
else
{
v___y_1642_ = v___y_1654_;
v___y_1643_ = v___x_1656_;
goto v___jp_1641_;
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_Pt_mapT___closed__2(void){
_start:
{
lean_object* v___x_1868_; lean_object* v___x_1869_; 
v___x_1868_ = lean_unsigned_to_nat(8000u);
v___x_1869_ = lean_nat_to_int(v___x_1868_);
return v___x_1869_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT(lean_object* v_t_1870_, lean_object* v_p_1871_){
_start:
{
lean_object* v___x_1872_; uint8_t v___x_1873_; 
v___x_1872_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1873_ = lean_string_dec_eq(v_t_1870_, v___x_1872_);
if (v___x_1873_ == 0)
{
lean_object* v___x_1874_; uint8_t v___x_1875_; 
v___x_1874_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_1875_ = lean_string_dec_eq(v_t_1870_, v___x_1874_);
if (v___x_1875_ == 0)
{
lean_object* v___x_1876_; uint8_t v___x_1877_; 
v___x_1876_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__1));
v___x_1877_ = lean_string_dec_eq(v_t_1870_, v___x_1876_);
if (v___x_1877_ == 0)
{
return v_p_1871_;
}
else
{
lean_object* v_x_1878_; lean_object* v_y_1879_; lean_object* v___x_1881_; uint8_t v_isShared_1882_; uint8_t v_isSharedCheck_1888_; 
v_x_1878_ = lean_ctor_get(v_p_1871_, 0);
v_y_1879_ = lean_ctor_get(v_p_1871_, 1);
v_isSharedCheck_1888_ = !lean_is_exclusive(v_p_1871_);
if (v_isSharedCheck_1888_ == 0)
{
v___x_1881_ = v_p_1871_;
v_isShared_1882_ = v_isSharedCheck_1888_;
goto v_resetjp_1880_;
}
else
{
lean_inc(v_y_1879_);
lean_inc(v_x_1878_);
lean_dec(v_p_1871_);
v___x_1881_ = lean_box(0);
v_isShared_1882_ = v_isSharedCheck_1888_;
goto v_resetjp_1880_;
}
v_resetjp_1880_:
{
lean_object* v___x_1883_; lean_object* v___x_1884_; lean_object* v___x_1886_; 
v___x_1883_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_1884_ = lean_int_add(v_y_1879_, v___x_1883_);
lean_dec(v_y_1879_);
if (v_isShared_1882_ == 0)
{
lean_ctor_set(v___x_1881_, 1, v___x_1884_);
v___x_1886_ = v___x_1881_;
goto v_reusejp_1885_;
}
else
{
lean_object* v_reuseFailAlloc_1887_; 
v_reuseFailAlloc_1887_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1887_, 0, v_x_1878_);
lean_ctor_set(v_reuseFailAlloc_1887_, 1, v___x_1884_);
v___x_1886_ = v_reuseFailAlloc_1887_;
goto v_reusejp_1885_;
}
v_reusejp_1885_:
{
return v___x_1886_;
}
}
}
}
else
{
lean_object* v_x_1889_; lean_object* v_y_1890_; lean_object* v___x_1892_; uint8_t v_isShared_1893_; uint8_t v_isSharedCheck_1900_; 
v_x_1889_ = lean_ctor_get(v_p_1871_, 0);
v_y_1890_ = lean_ctor_get(v_p_1871_, 1);
v_isSharedCheck_1900_ = !lean_is_exclusive(v_p_1871_);
if (v_isSharedCheck_1900_ == 0)
{
v___x_1892_ = v_p_1871_;
v_isShared_1893_ = v_isSharedCheck_1900_;
goto v_resetjp_1891_;
}
else
{
lean_inc(v_y_1890_);
lean_inc(v_x_1889_);
lean_dec(v_p_1871_);
v___x_1892_ = lean_box(0);
v_isShared_1893_ = v_isSharedCheck_1900_;
goto v_resetjp_1891_;
}
v_resetjp_1891_:
{
lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1898_; 
v___x_1894_ = lean_int_neg(v_x_1889_);
lean_dec(v_x_1889_);
v___x_1895_ = lean_obj_once(&lp_choreo_Choreo_Pt_mapT___closed__2, &lp_choreo_Choreo_Pt_mapT___closed__2_once, _init_lp_choreo_Choreo_Pt_mapT___closed__2);
v___x_1896_ = lean_int_sub(v___x_1895_, v_y_1890_);
lean_dec(v_y_1890_);
if (v_isShared_1893_ == 0)
{
lean_ctor_set(v___x_1892_, 1, v___x_1896_);
lean_ctor_set(v___x_1892_, 0, v___x_1894_);
v___x_1898_ = v___x_1892_;
goto v_reusejp_1897_;
}
else
{
lean_object* v_reuseFailAlloc_1899_; 
v_reuseFailAlloc_1899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1899_, 0, v___x_1894_);
lean_ctor_set(v_reuseFailAlloc_1899_, 1, v___x_1896_);
v___x_1898_ = v_reuseFailAlloc_1899_;
goto v_reusejp_1897_;
}
v_reusejp_1897_:
{
return v___x_1898_;
}
}
}
}
else
{
lean_object* v_x_1901_; lean_object* v_y_1902_; lean_object* v___x_1904_; uint8_t v_isShared_1905_; uint8_t v_isSharedCheck_1910_; 
v_x_1901_ = lean_ctor_get(v_p_1871_, 0);
v_y_1902_ = lean_ctor_get(v_p_1871_, 1);
v_isSharedCheck_1910_ = !lean_is_exclusive(v_p_1871_);
if (v_isSharedCheck_1910_ == 0)
{
v___x_1904_ = v_p_1871_;
v_isShared_1905_ = v_isSharedCheck_1910_;
goto v_resetjp_1903_;
}
else
{
lean_inc(v_y_1902_);
lean_inc(v_x_1901_);
lean_dec(v_p_1871_);
v___x_1904_ = lean_box(0);
v_isShared_1905_ = v_isSharedCheck_1910_;
goto v_resetjp_1903_;
}
v_resetjp_1903_:
{
lean_object* v___x_1906_; lean_object* v___x_1908_; 
v___x_1906_ = lean_int_neg(v_x_1901_);
lean_dec(v_x_1901_);
if (v_isShared_1905_ == 0)
{
lean_ctor_set(v___x_1904_, 0, v___x_1906_);
v___x_1908_ = v___x_1904_;
goto v_reusejp_1907_;
}
else
{
lean_object* v_reuseFailAlloc_1909_; 
v_reuseFailAlloc_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1909_, 0, v___x_1906_);
lean_ctor_set(v_reuseFailAlloc_1909_, 1, v_y_1902_);
v___x_1908_ = v_reuseFailAlloc_1909_;
goto v_reusejp_1907_;
}
v_reusejp_1907_:
{
return v___x_1908_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT___boxed(lean_object* v_t_1911_, lean_object* v_p_1912_){
_start:
{
lean_object* v_res_1913_; 
v_res_1913_ = lp_choreo_Choreo_Pt_mapT(v_t_1911_, v_p_1912_);
lean_dec_ref(v_t_1911_);
return v_res_1913_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(lean_object* v_t_1914_, lean_object* v_a_1915_, lean_object* v_a_1916_){
_start:
{
if (lean_obj_tag(v_a_1915_) == 0)
{
lean_object* v___x_1917_; 
v___x_1917_ = l_List_reverse___redArg(v_a_1916_);
return v___x_1917_;
}
else
{
lean_object* v_head_1918_; lean_object* v_tail_1919_; lean_object* v___x_1921_; uint8_t v_isShared_1922_; uint8_t v_isSharedCheck_1928_; 
v_head_1918_ = lean_ctor_get(v_a_1915_, 0);
v_tail_1919_ = lean_ctor_get(v_a_1915_, 1);
v_isSharedCheck_1928_ = !lean_is_exclusive(v_a_1915_);
if (v_isSharedCheck_1928_ == 0)
{
v___x_1921_ = v_a_1915_;
v_isShared_1922_ = v_isSharedCheck_1928_;
goto v_resetjp_1920_;
}
else
{
lean_inc(v_tail_1919_);
lean_inc(v_head_1918_);
lean_dec(v_a_1915_);
v___x_1921_ = lean_box(0);
v_isShared_1922_ = v_isSharedCheck_1928_;
goto v_resetjp_1920_;
}
v_resetjp_1920_:
{
lean_object* v___x_1923_; lean_object* v___x_1925_; 
v___x_1923_ = lp_choreo_Choreo_Pt_mapT(v_t_1914_, v_head_1918_);
if (v_isShared_1922_ == 0)
{
lean_ctor_set(v___x_1921_, 1, v_a_1916_);
lean_ctor_set(v___x_1921_, 0, v___x_1923_);
v___x_1925_ = v___x_1921_;
goto v_reusejp_1924_;
}
else
{
lean_object* v_reuseFailAlloc_1927_; 
v_reuseFailAlloc_1927_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1927_, 0, v___x_1923_);
lean_ctor_set(v_reuseFailAlloc_1927_, 1, v_a_1916_);
v___x_1925_ = v_reuseFailAlloc_1927_;
goto v_reusejp_1924_;
}
v_reusejp_1924_:
{
v_a_1915_ = v_tail_1919_;
v_a_1916_ = v___x_1925_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0___boxed(lean_object* v_t_1929_, lean_object* v_a_1930_, lean_object* v_a_1931_){
_start:
{
lean_object* v_res_1932_; 
v_res_1932_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1929_, v_a_1930_, v_a_1931_);
lean_dec_ref(v_t_1929_);
return v_res_1932_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT(lean_object* v_t_1933_, lean_object* v_x_1934_){
_start:
{
switch(lean_obj_tag(v_x_1934_))
{
case 1:
{
lean_object* v_places_1935_; lean_object* v___x_1937_; uint8_t v_isShared_1938_; uint8_t v_isSharedCheck_1944_; 
v_places_1935_ = lean_ctor_get(v_x_1934_, 0);
v_isSharedCheck_1944_ = !lean_is_exclusive(v_x_1934_);
if (v_isSharedCheck_1944_ == 0)
{
v___x_1937_ = v_x_1934_;
v_isShared_1938_ = v_isSharedCheck_1944_;
goto v_resetjp_1936_;
}
else
{
lean_inc(v_places_1935_);
lean_dec(v_x_1934_);
v___x_1937_ = lean_box(0);
v_isShared_1938_ = v_isSharedCheck_1944_;
goto v_resetjp_1936_;
}
v_resetjp_1936_:
{
lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1942_; 
v___x_1939_ = lean_box(0);
v___x_1940_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1933_, v_places_1935_, v___x_1939_);
if (v_isShared_1938_ == 0)
{
lean_ctor_set(v___x_1937_, 0, v___x_1940_);
v___x_1942_ = v___x_1937_;
goto v_reusejp_1941_;
}
else
{
lean_object* v_reuseFailAlloc_1943_; 
v_reuseFailAlloc_1943_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1943_, 0, v___x_1940_);
v___x_1942_ = v_reuseFailAlloc_1943_;
goto v_reusejp_1941_;
}
v_reusejp_1941_:
{
return v___x_1942_;
}
}
}
case 3:
{
lean_object* v_who_1945_; lean_object* v_cx_1946_; lean_object* v_cy_1947_; lean_object* v_r2_1948_; lean_object* v___x_1950_; uint8_t v_isShared_1951_; uint8_t v_isSharedCheck_1959_; 
v_who_1945_ = lean_ctor_get(v_x_1934_, 0);
v_cx_1946_ = lean_ctor_get(v_x_1934_, 1);
v_cy_1947_ = lean_ctor_get(v_x_1934_, 2);
v_r2_1948_ = lean_ctor_get(v_x_1934_, 3);
v_isSharedCheck_1959_ = !lean_is_exclusive(v_x_1934_);
if (v_isSharedCheck_1959_ == 0)
{
v___x_1950_ = v_x_1934_;
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
else
{
lean_inc(v_r2_1948_);
lean_inc(v_cy_1947_);
lean_inc(v_cx_1946_);
lean_inc(v_who_1945_);
lean_dec(v_x_1934_);
v___x_1950_ = lean_box(0);
v_isShared_1951_ = v_isSharedCheck_1959_;
goto v_resetjp_1949_;
}
v_resetjp_1949_:
{
lean_object* v___x_1952_; lean_object* v_c_1953_; lean_object* v_x_1954_; lean_object* v_y_1955_; lean_object* v___x_1957_; 
v___x_1952_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1952_, 0, v_cx_1946_);
lean_ctor_set(v___x_1952_, 1, v_cy_1947_);
v_c_1953_ = lp_choreo_Choreo_Pt_mapT(v_t_1933_, v___x_1952_);
v_x_1954_ = lean_ctor_get(v_c_1953_, 0);
lean_inc(v_x_1954_);
v_y_1955_ = lean_ctor_get(v_c_1953_, 1);
lean_inc(v_y_1955_);
lean_dec_ref(v_c_1953_);
if (v_isShared_1951_ == 0)
{
lean_ctor_set(v___x_1950_, 2, v_y_1955_);
lean_ctor_set(v___x_1950_, 1, v_x_1954_);
v___x_1957_ = v___x_1950_;
goto v_reusejp_1956_;
}
else
{
lean_object* v_reuseFailAlloc_1958_; 
v_reuseFailAlloc_1958_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1958_, 0, v_who_1945_);
lean_ctor_set(v_reuseFailAlloc_1958_, 1, v_x_1954_);
lean_ctor_set(v_reuseFailAlloc_1958_, 2, v_y_1955_);
lean_ctor_set(v_reuseFailAlloc_1958_, 3, v_r2_1948_);
v___x_1957_ = v_reuseFailAlloc_1958_;
goto v_reusejp_1956_;
}
v_reusejp_1956_:
{
return v___x_1957_;
}
}
}
case 6:
{
lean_object* v_p_1960_; lean_object* v_q_1961_; lean_object* v___x_1963_; uint8_t v_isShared_1964_; uint8_t v_isSharedCheck_1970_; 
v_p_1960_ = lean_ctor_get(v_x_1934_, 0);
v_q_1961_ = lean_ctor_get(v_x_1934_, 1);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_x_1934_);
if (v_isSharedCheck_1970_ == 0)
{
v___x_1963_ = v_x_1934_;
v_isShared_1964_ = v_isSharedCheck_1970_;
goto v_resetjp_1962_;
}
else
{
lean_inc(v_q_1961_);
lean_inc(v_p_1960_);
lean_dec(v_x_1934_);
v___x_1963_ = lean_box(0);
v_isShared_1964_ = v_isSharedCheck_1970_;
goto v_resetjp_1962_;
}
v_resetjp_1962_:
{
lean_object* v___x_1965_; lean_object* v___x_1966_; lean_object* v___x_1968_; 
v___x_1965_ = lp_choreo_Choreo_Pred_mapT(v_t_1933_, v_p_1960_);
v___x_1966_ = lp_choreo_Choreo_Pred_mapT(v_t_1933_, v_q_1961_);
if (v_isShared_1964_ == 0)
{
lean_ctor_set(v___x_1963_, 1, v___x_1966_);
lean_ctor_set(v___x_1963_, 0, v___x_1965_);
v___x_1968_ = v___x_1963_;
goto v_reusejp_1967_;
}
else
{
lean_object* v_reuseFailAlloc_1969_; 
v_reuseFailAlloc_1969_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1969_, 0, v___x_1965_);
lean_ctor_set(v_reuseFailAlloc_1969_, 1, v___x_1966_);
v___x_1968_ = v_reuseFailAlloc_1969_;
goto v_reusejp_1967_;
}
v_reusejp_1967_:
{
return v___x_1968_;
}
}
}
case 5:
{
lean_object* v_A_1971_; lean_object* v_B_1972_; lean_object* v_line_1973_; lean_object* v_d_1974_; lean_object* v___x_1979_; uint8_t v___x_1980_; 
v_A_1971_ = lean_ctor_get(v_x_1934_, 0);
v_B_1972_ = lean_ctor_get(v_x_1934_, 1);
v_line_1973_ = lean_ctor_get(v_x_1934_, 2);
v_d_1974_ = lean_ctor_get(v_x_1934_, 3);
v___x_1979_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1980_ = lean_string_dec_eq(v_t_1933_, v___x_1979_);
if (v___x_1980_ == 0)
{
lean_object* v___x_1981_; uint8_t v___x_1982_; 
v___x_1981_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_1982_ = lean_string_dec_eq(v_t_1933_, v___x_1981_);
if (v___x_1982_ == 0)
{
return v_x_1934_;
}
else
{
lean_inc(v_d_1974_);
lean_inc(v_line_1973_);
lean_inc(v_B_1972_);
lean_inc(v_A_1971_);
lean_dec_ref_known(v_x_1934_, 4);
goto v___jp_1975_;
}
}
else
{
lean_inc(v_d_1974_);
lean_inc(v_line_1973_);
lean_inc(v_B_1972_);
lean_inc(v_A_1971_);
lean_dec_ref_known(v_x_1934_, 4);
goto v___jp_1975_;
}
v___jp_1975_:
{
lean_object* v___x_1976_; lean_object* v___x_1977_; lean_object* v___x_1978_; 
v___x_1976_ = lean_int_neg(v_line_1973_);
lean_dec(v_line_1973_);
v___x_1977_ = lean_int_sub(v___x_1976_, v_d_1974_);
lean_dec(v___x_1976_);
v___x_1978_ = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(v___x_1978_, 0, v_B_1972_);
lean_ctor_set(v___x_1978_, 1, v_A_1971_);
lean_ctor_set(v___x_1978_, 2, v___x_1977_);
lean_ctor_set(v___x_1978_, 3, v_d_1974_);
return v___x_1978_;
}
}
default: 
{
return v_x_1934_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT___boxed(lean_object* v_t_1983_, lean_object* v_x_1984_){
_start:
{
lean_object* v_res_1985_; 
v_res_1985_ = lp_choreo_Choreo_Pred_mapT(v_t_1983_, v_x_1984_);
lean_dec_ref(v_t_1983_);
return v_res_1985_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(lean_object* v_a_1986_, lean_object* v_a_1987_){
_start:
{
if (lean_obj_tag(v_a_1986_) == 0)
{
lean_object* v___x_1988_; 
v___x_1988_ = l_List_reverse___redArg(v_a_1987_);
return v___x_1988_;
}
else
{
lean_object* v_head_1989_; lean_object* v_tail_1990_; lean_object* v___x_1992_; uint8_t v_isShared_1993_; uint8_t v_isSharedCheck_2008_; 
v_head_1989_ = lean_ctor_get(v_a_1986_, 0);
v_tail_1990_ = lean_ctor_get(v_a_1986_, 1);
v_isSharedCheck_2008_ = !lean_is_exclusive(v_a_1986_);
if (v_isSharedCheck_2008_ == 0)
{
v___x_1992_ = v_a_1986_;
v_isShared_1993_ = v_isSharedCheck_2008_;
goto v_resetjp_1991_;
}
else
{
lean_inc(v_tail_1990_);
lean_inc(v_head_1989_);
lean_dec(v_a_1986_);
v___x_1992_ = lean_box(0);
v_isShared_1993_ = v_isSharedCheck_2008_;
goto v_resetjp_1991_;
}
v_resetjp_1991_:
{
lean_object* v_fst_1994_; lean_object* v_snd_1995_; lean_object* v___x_1997_; uint8_t v_isShared_1998_; uint8_t v_isSharedCheck_2007_; 
v_fst_1994_ = lean_ctor_get(v_head_1989_, 0);
v_snd_1995_ = lean_ctor_get(v_head_1989_, 1);
v_isSharedCheck_2007_ = !lean_is_exclusive(v_head_1989_);
if (v_isSharedCheck_2007_ == 0)
{
v___x_1997_ = v_head_1989_;
v_isShared_1998_ = v_isSharedCheck_2007_;
goto v_resetjp_1996_;
}
else
{
lean_inc(v_snd_1995_);
lean_inc(v_fst_1994_);
lean_dec(v_head_1989_);
v___x_1997_ = lean_box(0);
v_isShared_1998_ = v_isSharedCheck_2007_;
goto v_resetjp_1996_;
}
v_resetjp_1996_:
{
lean_object* v___x_1999_; lean_object* v___x_2001_; 
v___x_1999_ = lean_int_neg(v_fst_1994_);
lean_dec(v_fst_1994_);
if (v_isShared_1998_ == 0)
{
lean_ctor_set(v___x_1997_, 0, v___x_1999_);
v___x_2001_ = v___x_1997_;
goto v_reusejp_2000_;
}
else
{
lean_object* v_reuseFailAlloc_2006_; 
v_reuseFailAlloc_2006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2006_, 0, v___x_1999_);
lean_ctor_set(v_reuseFailAlloc_2006_, 1, v_snd_1995_);
v___x_2001_ = v_reuseFailAlloc_2006_;
goto v_reusejp_2000_;
}
v_reusejp_2000_:
{
lean_object* v___x_2003_; 
if (v_isShared_1993_ == 0)
{
lean_ctor_set(v___x_1992_, 1, v_a_1987_);
lean_ctor_set(v___x_1992_, 0, v___x_2001_);
v___x_2003_ = v___x_1992_;
goto v_reusejp_2002_;
}
else
{
lean_object* v_reuseFailAlloc_2005_; 
v_reuseFailAlloc_2005_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2005_, 0, v___x_2001_);
lean_ctor_set(v_reuseFailAlloc_2005_, 1, v_a_1987_);
v___x_2003_ = v_reuseFailAlloc_2005_;
goto v_reusejp_2002_;
}
v_reusejp_2002_:
{
v_a_1986_ = v_tail_1990_;
v_a_1987_ = v___x_2003_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(lean_object* v_a_2009_, lean_object* v_a_2010_){
_start:
{
if (lean_obj_tag(v_a_2009_) == 0)
{
lean_object* v___x_2011_; 
v___x_2011_ = l_List_reverse___redArg(v_a_2010_);
return v___x_2011_;
}
else
{
lean_object* v_head_2012_; lean_object* v_tail_2013_; lean_object* v___x_2015_; uint8_t v_isShared_2016_; uint8_t v_isSharedCheck_2032_; 
v_head_2012_ = lean_ctor_get(v_a_2009_, 0);
v_tail_2013_ = lean_ctor_get(v_a_2009_, 1);
v_isSharedCheck_2032_ = !lean_is_exclusive(v_a_2009_);
if (v_isSharedCheck_2032_ == 0)
{
v___x_2015_ = v_a_2009_;
v_isShared_2016_ = v_isSharedCheck_2032_;
goto v_resetjp_2014_;
}
else
{
lean_inc(v_tail_2013_);
lean_inc(v_head_2012_);
lean_dec(v_a_2009_);
v___x_2015_ = lean_box(0);
v_isShared_2016_ = v_isSharedCheck_2032_;
goto v_resetjp_2014_;
}
v_resetjp_2014_:
{
lean_object* v_fst_2017_; lean_object* v_snd_2018_; lean_object* v___x_2020_; uint8_t v_isShared_2021_; uint8_t v_isSharedCheck_2031_; 
v_fst_2017_ = lean_ctor_get(v_head_2012_, 0);
v_snd_2018_ = lean_ctor_get(v_head_2012_, 1);
v_isSharedCheck_2031_ = !lean_is_exclusive(v_head_2012_);
if (v_isSharedCheck_2031_ == 0)
{
v___x_2020_ = v_head_2012_;
v_isShared_2021_ = v_isSharedCheck_2031_;
goto v_resetjp_2019_;
}
else
{
lean_inc(v_snd_2018_);
lean_inc(v_fst_2017_);
lean_dec(v_head_2012_);
v___x_2020_ = lean_box(0);
v_isShared_2021_ = v_isSharedCheck_2031_;
goto v_resetjp_2019_;
}
v_resetjp_2019_:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2025_; 
v___x_2022_ = lean_int_neg(v_fst_2017_);
lean_dec(v_fst_2017_);
v___x_2023_ = lean_int_neg(v_snd_2018_);
lean_dec(v_snd_2018_);
if (v_isShared_2021_ == 0)
{
lean_ctor_set(v___x_2020_, 1, v___x_2023_);
lean_ctor_set(v___x_2020_, 0, v___x_2022_);
v___x_2025_ = v___x_2020_;
goto v_reusejp_2024_;
}
else
{
lean_object* v_reuseFailAlloc_2030_; 
v_reuseFailAlloc_2030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2030_, 0, v___x_2022_);
lean_ctor_set(v_reuseFailAlloc_2030_, 1, v___x_2023_);
v___x_2025_ = v_reuseFailAlloc_2030_;
goto v_reusejp_2024_;
}
v_reusejp_2024_:
{
lean_object* v___x_2027_; 
if (v_isShared_2016_ == 0)
{
lean_ctor_set(v___x_2015_, 1, v_a_2010_);
lean_ctor_set(v___x_2015_, 0, v___x_2025_);
v___x_2027_ = v___x_2015_;
goto v_reusejp_2026_;
}
else
{
lean_object* v_reuseFailAlloc_2029_; 
v_reuseFailAlloc_2029_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2029_, 0, v___x_2025_);
lean_ctor_set(v_reuseFailAlloc_2029_, 1, v_a_2010_);
v___x_2027_ = v_reuseFailAlloc_2029_;
goto v_reusejp_2026_;
}
v_reusejp_2026_:
{
v_a_2009_ = v_tail_2013_;
v_a_2010_ = v___x_2027_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT(lean_object* v_t_2033_, lean_object* v_x_2034_){
_start:
{
switch(lean_obj_tag(v_x_2034_))
{
case 0:
{
lean_object* v_target_2035_; lean_object* v_beats_2036_; lean_object* v___x_2038_; uint8_t v_isShared_2039_; uint8_t v_isSharedCheck_2045_; 
v_target_2035_ = lean_ctor_get(v_x_2034_, 0);
v_beats_2036_ = lean_ctor_get(v_x_2034_, 1);
v_isSharedCheck_2045_ = !lean_is_exclusive(v_x_2034_);
if (v_isSharedCheck_2045_ == 0)
{
v___x_2038_ = v_x_2034_;
v_isShared_2039_ = v_isSharedCheck_2045_;
goto v_resetjp_2037_;
}
else
{
lean_inc(v_beats_2036_);
lean_inc(v_target_2035_);
lean_dec(v_x_2034_);
v___x_2038_ = lean_box(0);
v_isShared_2039_ = v_isSharedCheck_2045_;
goto v_resetjp_2037_;
}
v_resetjp_2037_:
{
lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2043_; 
v___x_2040_ = lean_box(0);
v___x_2041_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2033_, v_target_2035_, v___x_2040_);
if (v_isShared_2039_ == 0)
{
lean_ctor_set(v___x_2038_, 0, v___x_2041_);
v___x_2043_ = v___x_2038_;
goto v_reusejp_2042_;
}
else
{
lean_object* v_reuseFailAlloc_2044_; 
v_reuseFailAlloc_2044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2044_, 0, v___x_2041_);
lean_ctor_set(v_reuseFailAlloc_2044_, 1, v_beats_2036_);
v___x_2043_ = v_reuseFailAlloc_2044_;
goto v_reusejp_2042_;
}
v_reusejp_2042_:
{
return v___x_2043_;
}
}
}
case 1:
{
lean_object* v_centre_2046_; uint8_t v_ccw_2047_; lean_object* v_beats_2048_; lean_object* v___x_2050_; uint8_t v_isShared_2051_; uint8_t v_isSharedCheck_2065_; 
v_centre_2046_ = lean_ctor_get(v_x_2034_, 0);
v_ccw_2047_ = lean_ctor_get_uint8(v_x_2034_, sizeof(void*)*2);
v_beats_2048_ = lean_ctor_get(v_x_2034_, 1);
v_isSharedCheck_2065_ = !lean_is_exclusive(v_x_2034_);
if (v_isSharedCheck_2065_ == 0)
{
v___x_2050_ = v_x_2034_;
v_isShared_2051_ = v_isSharedCheck_2065_;
goto v_resetjp_2049_;
}
else
{
lean_inc(v_beats_2048_);
lean_inc(v_centre_2046_);
lean_dec(v_x_2034_);
v___x_2050_ = lean_box(0);
v_isShared_2051_ = v_isSharedCheck_2065_;
goto v_resetjp_2049_;
}
v_resetjp_2049_:
{
lean_object* v___x_2052_; lean_object* v___x_2053_; uint8_t v___x_2054_; 
v___x_2052_ = lp_choreo_Choreo_Pt_mapT(v_t_2033_, v_centre_2046_);
v___x_2053_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2054_ = lean_string_dec_eq(v_t_2033_, v___x_2053_);
if (v___x_2054_ == 0)
{
lean_object* v___x_2056_; 
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2052_);
v___x_2056_ = v___x_2050_;
goto v_reusejp_2055_;
}
else
{
lean_object* v_reuseFailAlloc_2057_; 
v_reuseFailAlloc_2057_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2057_, 0, v___x_2052_);
lean_ctor_set(v_reuseFailAlloc_2057_, 1, v_beats_2048_);
lean_ctor_set_uint8(v_reuseFailAlloc_2057_, sizeof(void*)*2, v_ccw_2047_);
v___x_2056_ = v_reuseFailAlloc_2057_;
goto v_reusejp_2055_;
}
v_reusejp_2055_:
{
return v___x_2056_;
}
}
else
{
if (v_ccw_2047_ == 0)
{
lean_object* v___x_2059_; 
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2052_);
v___x_2059_ = v___x_2050_;
goto v_reusejp_2058_;
}
else
{
lean_object* v_reuseFailAlloc_2060_; 
v_reuseFailAlloc_2060_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2060_, 0, v___x_2052_);
lean_ctor_set(v_reuseFailAlloc_2060_, 1, v_beats_2048_);
v___x_2059_ = v_reuseFailAlloc_2060_;
goto v_reusejp_2058_;
}
v_reusejp_2058_:
{
lean_ctor_set_uint8(v___x_2059_, sizeof(void*)*2, v___x_2054_);
return v___x_2059_;
}
}
else
{
uint8_t v___x_2061_; lean_object* v___x_2063_; 
v___x_2061_ = 0;
if (v_isShared_2051_ == 0)
{
lean_ctor_set(v___x_2050_, 0, v___x_2052_);
v___x_2063_ = v___x_2050_;
goto v_reusejp_2062_;
}
else
{
lean_object* v_reuseFailAlloc_2064_; 
v_reuseFailAlloc_2064_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2064_, 0, v___x_2052_);
lean_ctor_set(v_reuseFailAlloc_2064_, 1, v_beats_2048_);
v___x_2063_ = v_reuseFailAlloc_2064_;
goto v_reusejp_2062_;
}
v_reusejp_2062_:
{
lean_ctor_set_uint8(v___x_2063_, sizeof(void*)*2, v___x_2061_);
return v___x_2063_;
}
}
}
}
}
case 2:
{
lean_object* v_deltas_2066_; lean_object* v_beats_2067_; lean_object* v___x_2068_; uint8_t v___x_2069_; 
v_deltas_2066_ = lean_ctor_get(v_x_2034_, 0);
v_beats_2067_ = lean_ctor_get(v_x_2034_, 1);
v___x_2068_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2069_ = lean_string_dec_eq(v_t_2033_, v___x_2068_);
if (v___x_2069_ == 0)
{
lean_object* v___x_2070_; uint8_t v___x_2071_; 
v___x_2070_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2071_ = lean_string_dec_eq(v_t_2033_, v___x_2070_);
if (v___x_2071_ == 0)
{
return v_x_2034_;
}
else
{
lean_object* v___x_2073_; uint8_t v_isShared_2074_; uint8_t v_isSharedCheck_2080_; 
lean_inc(v_beats_2067_);
lean_inc(v_deltas_2066_);
v_isSharedCheck_2080_ = !lean_is_exclusive(v_x_2034_);
if (v_isSharedCheck_2080_ == 0)
{
lean_object* v_unused_2081_; lean_object* v_unused_2082_; 
v_unused_2081_ = lean_ctor_get(v_x_2034_, 1);
lean_dec(v_unused_2081_);
v_unused_2082_ = lean_ctor_get(v_x_2034_, 0);
lean_dec(v_unused_2082_);
v___x_2073_ = v_x_2034_;
v_isShared_2074_ = v_isSharedCheck_2080_;
goto v_resetjp_2072_;
}
else
{
lean_dec(v_x_2034_);
v___x_2073_ = lean_box(0);
v_isShared_2074_ = v_isSharedCheck_2080_;
goto v_resetjp_2072_;
}
v_resetjp_2072_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___x_2075_ = lean_box(0);
v___x_2076_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_deltas_2066_, v___x_2075_);
if (v_isShared_2074_ == 0)
{
lean_ctor_set(v___x_2073_, 0, v___x_2076_);
v___x_2078_ = v___x_2073_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2079_; 
v_reuseFailAlloc_2079_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2079_, 0, v___x_2076_);
lean_ctor_set(v_reuseFailAlloc_2079_, 1, v_beats_2067_);
v___x_2078_ = v_reuseFailAlloc_2079_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
return v___x_2078_;
}
}
}
}
else
{
lean_object* v___x_2084_; uint8_t v_isShared_2085_; uint8_t v_isSharedCheck_2091_; 
lean_inc(v_beats_2067_);
lean_inc(v_deltas_2066_);
v_isSharedCheck_2091_ = !lean_is_exclusive(v_x_2034_);
if (v_isSharedCheck_2091_ == 0)
{
lean_object* v_unused_2092_; lean_object* v_unused_2093_; 
v_unused_2092_ = lean_ctor_get(v_x_2034_, 1);
lean_dec(v_unused_2092_);
v_unused_2093_ = lean_ctor_get(v_x_2034_, 0);
lean_dec(v_unused_2093_);
v___x_2084_ = v_x_2034_;
v_isShared_2085_ = v_isSharedCheck_2091_;
goto v_resetjp_2083_;
}
else
{
lean_dec(v_x_2034_);
v___x_2084_ = lean_box(0);
v_isShared_2085_ = v_isSharedCheck_2091_;
goto v_resetjp_2083_;
}
v_resetjp_2083_:
{
lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2089_; 
v___x_2086_ = lean_box(0);
v___x_2087_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(v_deltas_2066_, v___x_2086_);
if (v_isShared_2085_ == 0)
{
lean_ctor_set(v___x_2084_, 0, v___x_2087_);
v___x_2089_ = v___x_2084_;
goto v_reusejp_2088_;
}
else
{
lean_object* v_reuseFailAlloc_2090_; 
v_reuseFailAlloc_2090_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2090_, 0, v___x_2087_);
lean_ctor_set(v_reuseFailAlloc_2090_, 1, v_beats_2067_);
v___x_2089_ = v_reuseFailAlloc_2090_;
goto v_reusejp_2088_;
}
v_reusejp_2088_:
{
return v___x_2089_;
}
}
}
}
default: 
{
lean_object* v_left_2094_; lean_object* v_right_2095_; lean_object* v_line_2096_; lean_object* v_target_2097_; lean_object* v_beats_2098_; lean_object* v___x_2100_; uint8_t v_isShared_2101_; uint8_t v_isSharedCheck_2116_; 
v_left_2094_ = lean_ctor_get(v_x_2034_, 0);
v_right_2095_ = lean_ctor_get(v_x_2034_, 1);
v_line_2096_ = lean_ctor_get(v_x_2034_, 2);
v_target_2097_ = lean_ctor_get(v_x_2034_, 3);
v_beats_2098_ = lean_ctor_get(v_x_2034_, 4);
v_isSharedCheck_2116_ = !lean_is_exclusive(v_x_2034_);
if (v_isSharedCheck_2116_ == 0)
{
v___x_2100_ = v_x_2034_;
v_isShared_2101_ = v_isSharedCheck_2116_;
goto v_resetjp_2099_;
}
else
{
lean_inc(v_beats_2098_);
lean_inc(v_target_2097_);
lean_inc(v_line_2096_);
lean_inc(v_right_2095_);
lean_inc(v_left_2094_);
lean_dec(v_x_2034_);
v___x_2100_ = lean_box(0);
v_isShared_2101_ = v_isSharedCheck_2116_;
goto v_resetjp_2099_;
}
v_resetjp_2099_:
{
lean_object* v___x_2102_; lean_object* v_tg_2103_; lean_object* v___x_2111_; uint8_t v___x_2112_; 
v___x_2102_ = lean_box(0);
v_tg_2103_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2033_, v_target_2097_, v___x_2102_);
v___x_2111_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2112_ = lean_string_dec_eq(v_t_2033_, v___x_2111_);
if (v___x_2112_ == 0)
{
lean_object* v___x_2113_; uint8_t v___x_2114_; 
v___x_2113_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2114_ = lean_string_dec_eq(v_t_2033_, v___x_2113_);
if (v___x_2114_ == 0)
{
lean_object* v___x_2115_; 
lean_del_object(v___x_2100_);
v___x_2115_ = lean_alloc_ctor(3, 5, 0);
lean_ctor_set(v___x_2115_, 0, v_left_2094_);
lean_ctor_set(v___x_2115_, 1, v_right_2095_);
lean_ctor_set(v___x_2115_, 2, v_line_2096_);
lean_ctor_set(v___x_2115_, 3, v_tg_2103_);
lean_ctor_set(v___x_2115_, 4, v_beats_2098_);
return v___x_2115_;
}
else
{
goto v___jp_2104_;
}
}
else
{
goto v___jp_2104_;
}
v___jp_2104_:
{
lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2109_; 
v___x_2105_ = lean_int_neg(v_line_2096_);
lean_dec(v_line_2096_);
v___x_2106_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0, &lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0);
v___x_2107_ = lean_int_sub(v___x_2105_, v___x_2106_);
lean_dec(v___x_2105_);
if (v_isShared_2101_ == 0)
{
lean_ctor_set(v___x_2100_, 3, v_tg_2103_);
lean_ctor_set(v___x_2100_, 2, v___x_2107_);
lean_ctor_set(v___x_2100_, 1, v_left_2094_);
lean_ctor_set(v___x_2100_, 0, v_right_2095_);
v___x_2109_ = v___x_2100_;
goto v_reusejp_2108_;
}
else
{
lean_object* v_reuseFailAlloc_2110_; 
v_reuseFailAlloc_2110_ = lean_alloc_ctor(3, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2110_, 0, v_right_2095_);
lean_ctor_set(v_reuseFailAlloc_2110_, 1, v_left_2094_);
lean_ctor_set(v_reuseFailAlloc_2110_, 2, v___x_2107_);
lean_ctor_set(v_reuseFailAlloc_2110_, 3, v_tg_2103_);
lean_ctor_set(v_reuseFailAlloc_2110_, 4, v_beats_2098_);
v___x_2109_ = v_reuseFailAlloc_2110_;
goto v_reusejp_2108_;
}
v_reusejp_2108_:
{
return v___x_2109_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT___boxed(lean_object* v_t_2117_, lean_object* v_x_2118_){
_start:
{
lean_object* v_res_2119_; 
v_res_2119_ = lp_choreo_Choreo_Op_mapT(v_t_2117_, v_x_2118_);
lean_dec_ref(v_t_2117_);
return v_res_2119_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(lean_object* v_t_2120_, lean_object* v_a_2121_, lean_object* v_a_2122_){
_start:
{
if (lean_obj_tag(v_a_2121_) == 0)
{
lean_object* v___x_2123_; 
v___x_2123_ = l_List_reverse___redArg(v_a_2122_);
return v___x_2123_;
}
else
{
lean_object* v_head_2124_; lean_object* v_step_2125_; lean_object* v_tail_2126_; lean_object* v___x_2128_; uint8_t v_isShared_2129_; uint8_t v_isSharedCheck_2168_; 
v_head_2124_ = lean_ctor_get(v_a_2121_, 0);
lean_inc(v_head_2124_);
v_step_2125_ = lean_ctor_get(v_head_2124_, 5);
lean_inc_ref(v_step_2125_);
v_tail_2126_ = lean_ctor_get(v_a_2121_, 1);
v_isSharedCheck_2168_ = !lean_is_exclusive(v_a_2121_);
if (v_isSharedCheck_2168_ == 0)
{
lean_object* v_unused_2169_; 
v_unused_2169_ = lean_ctor_get(v_a_2121_, 0);
lean_dec(v_unused_2169_);
v___x_2128_ = v_a_2121_;
v_isShared_2129_ = v_isSharedCheck_2168_;
goto v_resetjp_2127_;
}
else
{
lean_inc(v_tail_2126_);
lean_dec(v_a_2121_);
v___x_2128_ = lean_box(0);
v_isShared_2129_ = v_isSharedCheck_2168_;
goto v_resetjp_2127_;
}
v_resetjp_2127_:
{
lean_object* v_name_2130_; lean_object* v_sectionName_2131_; lean_object* v_surface_2132_; lean_object* v_kind_2133_; lean_object* v_label_2134_; lean_object* v_requiresText_2135_; lean_object* v_ensuresText_2136_; lean_object* v_before_2137_; lean_object* v_after_2138_; lean_object* v_algebra_2139_; lean_object* v___x_2141_; uint8_t v_isShared_2142_; uint8_t v_isSharedCheck_2166_; 
v_name_2130_ = lean_ctor_get(v_head_2124_, 0);
v_sectionName_2131_ = lean_ctor_get(v_head_2124_, 1);
v_surface_2132_ = lean_ctor_get(v_head_2124_, 2);
v_kind_2133_ = lean_ctor_get(v_head_2124_, 3);
v_label_2134_ = lean_ctor_get(v_head_2124_, 4);
v_requiresText_2135_ = lean_ctor_get(v_head_2124_, 6);
v_ensuresText_2136_ = lean_ctor_get(v_head_2124_, 7);
v_before_2137_ = lean_ctor_get(v_head_2124_, 8);
v_after_2138_ = lean_ctor_get(v_head_2124_, 9);
v_algebra_2139_ = lean_ctor_get(v_head_2124_, 10);
v_isSharedCheck_2166_ = !lean_is_exclusive(v_head_2124_);
if (v_isSharedCheck_2166_ == 0)
{
lean_object* v_unused_2167_; 
v_unused_2167_ = lean_ctor_get(v_head_2124_, 5);
lean_dec(v_unused_2167_);
v___x_2141_ = v_head_2124_;
v_isShared_2142_ = v_isSharedCheck_2166_;
goto v_resetjp_2140_;
}
else
{
lean_inc(v_algebra_2139_);
lean_inc(v_after_2138_);
lean_inc(v_before_2137_);
lean_inc(v_ensuresText_2136_);
lean_inc(v_requiresText_2135_);
lean_inc(v_label_2134_);
lean_inc(v_kind_2133_);
lean_inc(v_surface_2132_);
lean_inc(v_sectionName_2131_);
lean_inc(v_name_2130_);
lean_dec(v_head_2124_);
v___x_2141_ = lean_box(0);
v_isShared_2142_ = v_isSharedCheck_2166_;
goto v_resetjp_2140_;
}
v_resetjp_2140_:
{
lean_object* v_op_2143_; lean_object* v_requires_2144_; lean_object* v_ensures_2145_; lean_object* v___x_2147_; uint8_t v_isShared_2148_; uint8_t v_isSharedCheck_2165_; 
v_op_2143_ = lean_ctor_get(v_step_2125_, 0);
v_requires_2144_ = lean_ctor_get(v_step_2125_, 1);
v_ensures_2145_ = lean_ctor_get(v_step_2125_, 2);
v_isSharedCheck_2165_ = !lean_is_exclusive(v_step_2125_);
if (v_isSharedCheck_2165_ == 0)
{
v___x_2147_ = v_step_2125_;
v_isShared_2148_ = v_isSharedCheck_2165_;
goto v_resetjp_2146_;
}
else
{
lean_inc(v_ensures_2145_);
lean_inc(v_requires_2144_);
lean_inc(v_op_2143_);
lean_dec(v_step_2125_);
v___x_2147_ = lean_box(0);
v_isShared_2148_ = v_isSharedCheck_2165_;
goto v_resetjp_2146_;
}
v_resetjp_2146_:
{
lean_object* v___x_2149_; lean_object* v_before_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; lean_object* v___x_2153_; lean_object* v___x_2155_; 
v___x_2149_ = lean_box(0);
v_before_2150_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2120_, v_before_2137_, v___x_2149_);
v___x_2151_ = lp_choreo_Choreo_Op_mapT(v_t_2120_, v_op_2143_);
v___x_2152_ = lp_choreo_Choreo_Pred_mapT(v_t_2120_, v_requires_2144_);
v___x_2153_ = lp_choreo_Choreo_Pred_mapT(v_t_2120_, v_ensures_2145_);
if (v_isShared_2148_ == 0)
{
lean_ctor_set(v___x_2147_, 2, v___x_2153_);
lean_ctor_set(v___x_2147_, 1, v___x_2152_);
lean_ctor_set(v___x_2147_, 0, v___x_2151_);
v___x_2155_ = v___x_2147_;
goto v_reusejp_2154_;
}
else
{
lean_object* v_reuseFailAlloc_2164_; 
v_reuseFailAlloc_2164_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2164_, 0, v___x_2151_);
lean_ctor_set(v_reuseFailAlloc_2164_, 1, v___x_2152_);
lean_ctor_set(v_reuseFailAlloc_2164_, 2, v___x_2153_);
v___x_2155_ = v_reuseFailAlloc_2164_;
goto v_reusejp_2154_;
}
v_reusejp_2154_:
{
lean_object* v___x_2156_; lean_object* v___x_2158_; 
v___x_2156_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2120_, v_after_2138_, v___x_2149_);
if (v_isShared_2142_ == 0)
{
lean_ctor_set(v___x_2141_, 9, v___x_2156_);
lean_ctor_set(v___x_2141_, 8, v_before_2150_);
lean_ctor_set(v___x_2141_, 5, v___x_2155_);
v___x_2158_ = v___x_2141_;
goto v_reusejp_2157_;
}
else
{
lean_object* v_reuseFailAlloc_2163_; 
v_reuseFailAlloc_2163_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2163_, 0, v_name_2130_);
lean_ctor_set(v_reuseFailAlloc_2163_, 1, v_sectionName_2131_);
lean_ctor_set(v_reuseFailAlloc_2163_, 2, v_surface_2132_);
lean_ctor_set(v_reuseFailAlloc_2163_, 3, v_kind_2133_);
lean_ctor_set(v_reuseFailAlloc_2163_, 4, v_label_2134_);
lean_ctor_set(v_reuseFailAlloc_2163_, 5, v___x_2155_);
lean_ctor_set(v_reuseFailAlloc_2163_, 6, v_requiresText_2135_);
lean_ctor_set(v_reuseFailAlloc_2163_, 7, v_ensuresText_2136_);
lean_ctor_set(v_reuseFailAlloc_2163_, 8, v_before_2150_);
lean_ctor_set(v_reuseFailAlloc_2163_, 9, v___x_2156_);
lean_ctor_set(v_reuseFailAlloc_2163_, 10, v_algebra_2139_);
v___x_2158_ = v_reuseFailAlloc_2163_;
goto v_reusejp_2157_;
}
v_reusejp_2157_:
{
lean_object* v___x_2160_; 
if (v_isShared_2129_ == 0)
{
lean_ctor_set(v___x_2128_, 1, v_a_2122_);
lean_ctor_set(v___x_2128_, 0, v___x_2158_);
v___x_2160_ = v___x_2128_;
goto v_reusejp_2159_;
}
else
{
lean_object* v_reuseFailAlloc_2162_; 
v_reuseFailAlloc_2162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2162_, 0, v___x_2158_);
lean_ctor_set(v_reuseFailAlloc_2162_, 1, v_a_2122_);
v___x_2160_ = v_reuseFailAlloc_2162_;
goto v_reusejp_2159_;
}
v_reusejp_2159_:
{
v_a_2121_ = v_tail_2126_;
v_a_2122_ = v___x_2160_;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0___boxed(lean_object* v_t_2170_, lean_object* v_a_2171_, lean_object* v_a_2172_){
_start:
{
lean_object* v_res_2173_; 
v_res_2173_ = lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(v_t_2170_, v_a_2171_, v_a_2172_);
lean_dec_ref(v_t_2170_);
return v_res_2173_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___redArg(lean_object* v_t_2174_, lean_object* v_steps_2175_){
_start:
{
lean_object* v___x_2179_; uint8_t v___x_2180_; 
v___x_2179_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2180_ = lean_string_dec_eq(v_t_2174_, v___x_2179_);
if (v___x_2180_ == 0)
{
lean_object* v___x_2181_; uint8_t v___x_2182_; 
v___x_2181_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2182_ = lean_string_dec_eq(v_t_2174_, v___x_2181_);
if (v___x_2182_ == 0)
{
lean_object* v___x_2183_; uint8_t v___x_2184_; 
v___x_2183_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__1));
v___x_2184_ = lean_string_dec_eq(v_t_2174_, v___x_2183_);
if (v___x_2184_ == 0)
{
return v_steps_2175_;
}
else
{
goto v___jp_2176_;
}
}
else
{
goto v___jp_2176_;
}
}
else
{
goto v___jp_2176_;
}
v___jp_2176_:
{
lean_object* v___x_2177_; lean_object* v___x_2178_; 
v___x_2177_ = lean_box(0);
v___x_2178_ = lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(v_t_2174_, v_steps_2175_, v___x_2177_);
return v___x_2178_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___redArg___boxed(lean_object* v_t_2185_, lean_object* v_steps_2186_){
_start:
{
lean_object* v_res_2187_; 
v_res_2187_ = lp_choreo_Choreo_applyTransform___redArg(v_t_2185_, v_steps_2186_);
lean_dec_ref(v_t_2185_);
return v_res_2187_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform(lean_object* v_sp_2188_, lean_object* v_t_2189_, lean_object* v_steps_2190_){
_start:
{
lean_object* v___x_2191_; 
v___x_2191_ = lp_choreo_Choreo_applyTransform___redArg(v_t_2189_, v_steps_2190_);
return v___x_2191_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___boxed(lean_object* v_sp_2192_, lean_object* v_t_2193_, lean_object* v_steps_2194_){
_start:
{
lean_object* v_res_2195_; 
v_res_2195_ = lp_choreo_Choreo_applyTransform(v_sp_2192_, v_t_2193_, v_steps_2194_);
lean_dec_ref(v_t_2193_);
lean_dec_ref(v_sp_2192_);
return v_res_2195_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(lean_object* v_a_2197_, lean_object* v_a_2198_){
_start:
{
if (lean_obj_tag(v_a_2197_) == 0)
{
lean_object* v___x_2199_; 
v___x_2199_ = l_List_reverse___redArg(v_a_2198_);
return v___x_2199_;
}
else
{
lean_object* v_head_2200_; lean_object* v_step_2201_; lean_object* v_tail_2202_; lean_object* v___x_2204_; uint8_t v_isShared_2205_; uint8_t v_isSharedCheck_2295_; 
v_head_2200_ = lean_ctor_get(v_a_2197_, 0);
lean_inc(v_head_2200_);
v_step_2201_ = lean_ctor_get(v_head_2200_, 5);
lean_inc_ref(v_step_2201_);
v_tail_2202_ = lean_ctor_get(v_a_2197_, 1);
v_isSharedCheck_2295_ = !lean_is_exclusive(v_a_2197_);
if (v_isSharedCheck_2295_ == 0)
{
lean_object* v_unused_2296_; 
v_unused_2296_ = lean_ctor_get(v_a_2197_, 0);
lean_dec(v_unused_2296_);
v___x_2204_ = v_a_2197_;
v_isShared_2205_ = v_isSharedCheck_2295_;
goto v_resetjp_2203_;
}
else
{
lean_inc(v_tail_2202_);
lean_dec(v_a_2197_);
v___x_2204_ = lean_box(0);
v_isShared_2205_ = v_isSharedCheck_2295_;
goto v_resetjp_2203_;
}
v_resetjp_2203_:
{
lean_object* v_name_2206_; lean_object* v_sectionName_2207_; lean_object* v_surface_2208_; lean_object* v_kind_2209_; lean_object* v_label_2210_; lean_object* v_requiresText_2211_; lean_object* v_ensuresText_2212_; lean_object* v_before_2213_; lean_object* v_after_2214_; lean_object* v_algebra_2215_; lean_object* v___x_2217_; uint8_t v_isShared_2218_; uint8_t v_isSharedCheck_2293_; 
v_name_2206_ = lean_ctor_get(v_head_2200_, 0);
v_sectionName_2207_ = lean_ctor_get(v_head_2200_, 1);
v_surface_2208_ = lean_ctor_get(v_head_2200_, 2);
v_kind_2209_ = lean_ctor_get(v_head_2200_, 3);
v_label_2210_ = lean_ctor_get(v_head_2200_, 4);
v_requiresText_2211_ = lean_ctor_get(v_head_2200_, 6);
v_ensuresText_2212_ = lean_ctor_get(v_head_2200_, 7);
v_before_2213_ = lean_ctor_get(v_head_2200_, 8);
v_after_2214_ = lean_ctor_get(v_head_2200_, 9);
v_algebra_2215_ = lean_ctor_get(v_head_2200_, 10);
v_isSharedCheck_2293_ = !lean_is_exclusive(v_head_2200_);
if (v_isSharedCheck_2293_ == 0)
{
lean_object* v_unused_2294_; 
v_unused_2294_ = lean_ctor_get(v_head_2200_, 5);
lean_dec(v_unused_2294_);
v___x_2217_ = v_head_2200_;
v_isShared_2218_ = v_isSharedCheck_2293_;
goto v_resetjp_2216_;
}
else
{
lean_inc(v_algebra_2215_);
lean_inc(v_after_2214_);
lean_inc(v_before_2213_);
lean_inc(v_ensuresText_2212_);
lean_inc(v_requiresText_2211_);
lean_inc(v_label_2210_);
lean_inc(v_kind_2209_);
lean_inc(v_surface_2208_);
lean_inc(v_sectionName_2207_);
lean_inc(v_name_2206_);
lean_dec(v_head_2200_);
v___x_2217_ = lean_box(0);
v_isShared_2218_ = v_isSharedCheck_2293_;
goto v_resetjp_2216_;
}
v_resetjp_2216_:
{
lean_object* v_op_2219_; lean_object* v_requires_2220_; lean_object* v_ensures_2221_; lean_object* v___x_2223_; uint8_t v_isShared_2224_; uint8_t v_isSharedCheck_2292_; 
v_op_2219_ = lean_ctor_get(v_step_2201_, 0);
v_requires_2220_ = lean_ctor_get(v_step_2201_, 1);
v_ensures_2221_ = lean_ctor_get(v_step_2201_, 2);
v_isSharedCheck_2292_ = !lean_is_exclusive(v_step_2201_);
if (v_isSharedCheck_2292_ == 0)
{
v___x_2223_ = v_step_2201_;
v_isShared_2224_ = v_isSharedCheck_2292_;
goto v_resetjp_2222_;
}
else
{
lean_inc(v_ensures_2221_);
lean_inc(v_requires_2220_);
lean_inc(v_op_2219_);
lean_dec(v_step_2201_);
v___x_2223_ = lean_box(0);
v_isShared_2224_ = v_isSharedCheck_2292_;
goto v_resetjp_2222_;
}
v_resetjp_2222_:
{
lean_object* v___y_2226_; 
switch(lean_obj_tag(v_op_2219_))
{
case 0:
{
lean_object* v_beats_2239_; lean_object* v___x_2241_; uint8_t v_isShared_2242_; uint8_t v_isSharedCheck_2246_; 
v_beats_2239_ = lean_ctor_get(v_op_2219_, 1);
v_isSharedCheck_2246_ = !lean_is_exclusive(v_op_2219_);
if (v_isSharedCheck_2246_ == 0)
{
lean_object* v_unused_2247_; 
v_unused_2247_ = lean_ctor_get(v_op_2219_, 0);
lean_dec(v_unused_2247_);
v___x_2241_ = v_op_2219_;
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
else
{
lean_inc(v_beats_2239_);
lean_dec(v_op_2219_);
v___x_2241_ = lean_box(0);
v_isShared_2242_ = v_isSharedCheck_2246_;
goto v_resetjp_2240_;
}
v_resetjp_2240_:
{
lean_object* v___x_2244_; 
lean_inc(v_before_2213_);
if (v_isShared_2242_ == 0)
{
lean_ctor_set(v___x_2241_, 0, v_before_2213_);
v___x_2244_ = v___x_2241_;
goto v_reusejp_2243_;
}
else
{
lean_object* v_reuseFailAlloc_2245_; 
v_reuseFailAlloc_2245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2245_, 0, v_before_2213_);
lean_ctor_set(v_reuseFailAlloc_2245_, 1, v_beats_2239_);
v___x_2244_ = v_reuseFailAlloc_2245_;
goto v_reusejp_2243_;
}
v_reusejp_2243_:
{
v___y_2226_ = v___x_2244_;
goto v___jp_2225_;
}
}
}
case 1:
{
uint8_t v_ccw_2248_; 
v_ccw_2248_ = lean_ctor_get_uint8(v_op_2219_, sizeof(void*)*2);
if (v_ccw_2248_ == 0)
{
lean_object* v_centre_2249_; lean_object* v_beats_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2258_; 
v_centre_2249_ = lean_ctor_get(v_op_2219_, 0);
v_beats_2250_ = lean_ctor_get(v_op_2219_, 1);
v_isSharedCheck_2258_ = !lean_is_exclusive(v_op_2219_);
if (v_isSharedCheck_2258_ == 0)
{
v___x_2252_ = v_op_2219_;
v_isShared_2253_ = v_isSharedCheck_2258_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_beats_2250_);
lean_inc(v_centre_2249_);
lean_dec(v_op_2219_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2258_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
uint8_t v___x_2254_; lean_object* v___x_2256_; 
v___x_2254_ = 1;
if (v_isShared_2253_ == 0)
{
v___x_2256_ = v___x_2252_;
goto v_reusejp_2255_;
}
else
{
lean_object* v_reuseFailAlloc_2257_; 
v_reuseFailAlloc_2257_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2257_, 0, v_centre_2249_);
lean_ctor_set(v_reuseFailAlloc_2257_, 1, v_beats_2250_);
v___x_2256_ = v_reuseFailAlloc_2257_;
goto v_reusejp_2255_;
}
v_reusejp_2255_:
{
lean_ctor_set_uint8(v___x_2256_, sizeof(void*)*2, v___x_2254_);
v___y_2226_ = v___x_2256_;
goto v___jp_2225_;
}
}
}
else
{
lean_object* v_centre_2259_; lean_object* v_beats_2260_; lean_object* v___x_2262_; uint8_t v_isShared_2263_; uint8_t v_isSharedCheck_2268_; 
v_centre_2259_ = lean_ctor_get(v_op_2219_, 0);
v_beats_2260_ = lean_ctor_get(v_op_2219_, 1);
v_isSharedCheck_2268_ = !lean_is_exclusive(v_op_2219_);
if (v_isSharedCheck_2268_ == 0)
{
v___x_2262_ = v_op_2219_;
v_isShared_2263_ = v_isSharedCheck_2268_;
goto v_resetjp_2261_;
}
else
{
lean_inc(v_beats_2260_);
lean_inc(v_centre_2259_);
lean_dec(v_op_2219_);
v___x_2262_ = lean_box(0);
v_isShared_2263_ = v_isSharedCheck_2268_;
goto v_resetjp_2261_;
}
v_resetjp_2261_:
{
uint8_t v___x_2264_; lean_object* v___x_2266_; 
v___x_2264_ = 0;
if (v_isShared_2263_ == 0)
{
v___x_2266_ = v___x_2262_;
goto v_reusejp_2265_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(1, 2, 1);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_centre_2259_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v_beats_2260_);
v___x_2266_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2265_;
}
v_reusejp_2265_:
{
lean_ctor_set_uint8(v___x_2266_, sizeof(void*)*2, v___x_2264_);
v___y_2226_ = v___x_2266_;
goto v___jp_2225_;
}
}
}
}
case 2:
{
lean_object* v_deltas_2269_; lean_object* v_beats_2270_; lean_object* v___x_2272_; uint8_t v_isShared_2273_; uint8_t v_isSharedCheck_2279_; 
v_deltas_2269_ = lean_ctor_get(v_op_2219_, 0);
v_beats_2270_ = lean_ctor_get(v_op_2219_, 1);
v_isSharedCheck_2279_ = !lean_is_exclusive(v_op_2219_);
if (v_isSharedCheck_2279_ == 0)
{
v___x_2272_ = v_op_2219_;
v_isShared_2273_ = v_isSharedCheck_2279_;
goto v_resetjp_2271_;
}
else
{
lean_inc(v_beats_2270_);
lean_inc(v_deltas_2269_);
lean_dec(v_op_2219_);
v___x_2272_ = lean_box(0);
v_isShared_2273_ = v_isSharedCheck_2279_;
goto v_resetjp_2271_;
}
v_resetjp_2271_:
{
lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2277_; 
v___x_2274_ = lean_box(0);
v___x_2275_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_deltas_2269_, v___x_2274_);
if (v_isShared_2273_ == 0)
{
lean_ctor_set(v___x_2272_, 0, v___x_2275_);
v___x_2277_ = v___x_2272_;
goto v_reusejp_2276_;
}
else
{
lean_object* v_reuseFailAlloc_2278_; 
v_reuseFailAlloc_2278_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2278_, 0, v___x_2275_);
lean_ctor_set(v_reuseFailAlloc_2278_, 1, v_beats_2270_);
v___x_2277_ = v_reuseFailAlloc_2278_;
goto v_reusejp_2276_;
}
v_reusejp_2276_:
{
v___y_2226_ = v___x_2277_;
goto v___jp_2225_;
}
}
}
default: 
{
lean_object* v_left_2280_; lean_object* v_right_2281_; lean_object* v_line_2282_; lean_object* v_beats_2283_; lean_object* v___x_2285_; uint8_t v_isShared_2286_; uint8_t v_isSharedCheck_2290_; 
v_left_2280_ = lean_ctor_get(v_op_2219_, 0);
v_right_2281_ = lean_ctor_get(v_op_2219_, 1);
v_line_2282_ = lean_ctor_get(v_op_2219_, 2);
v_beats_2283_ = lean_ctor_get(v_op_2219_, 4);
v_isSharedCheck_2290_ = !lean_is_exclusive(v_op_2219_);
if (v_isSharedCheck_2290_ == 0)
{
lean_object* v_unused_2291_; 
v_unused_2291_ = lean_ctor_get(v_op_2219_, 3);
lean_dec(v_unused_2291_);
v___x_2285_ = v_op_2219_;
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
else
{
lean_inc(v_beats_2283_);
lean_inc(v_line_2282_);
lean_inc(v_right_2281_);
lean_inc(v_left_2280_);
lean_dec(v_op_2219_);
v___x_2285_ = lean_box(0);
v_isShared_2286_ = v_isSharedCheck_2290_;
goto v_resetjp_2284_;
}
v_resetjp_2284_:
{
lean_object* v___x_2288_; 
lean_inc(v_before_2213_);
if (v_isShared_2286_ == 0)
{
lean_ctor_set(v___x_2285_, 3, v_before_2213_);
v___x_2288_ = v___x_2285_;
goto v_reusejp_2287_;
}
else
{
lean_object* v_reuseFailAlloc_2289_; 
v_reuseFailAlloc_2289_ = lean_alloc_ctor(3, 5, 0);
lean_ctor_set(v_reuseFailAlloc_2289_, 0, v_left_2280_);
lean_ctor_set(v_reuseFailAlloc_2289_, 1, v_right_2281_);
lean_ctor_set(v_reuseFailAlloc_2289_, 2, v_line_2282_);
lean_ctor_set(v_reuseFailAlloc_2289_, 3, v_before_2213_);
lean_ctor_set(v_reuseFailAlloc_2289_, 4, v_beats_2283_);
v___x_2288_ = v_reuseFailAlloc_2289_;
goto v_reusejp_2287_;
}
v_reusejp_2287_:
{
v___y_2226_ = v___x_2288_;
goto v___jp_2225_;
}
}
}
}
v___jp_2225_:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2230_; 
v___x_2227_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0___closed__0));
v___x_2228_ = lean_string_append(v_name_2206_, v___x_2227_);
if (v_isShared_2224_ == 0)
{
lean_ctor_set(v___x_2223_, 2, v_requires_2220_);
lean_ctor_set(v___x_2223_, 1, v_ensures_2221_);
lean_ctor_set(v___x_2223_, 0, v___y_2226_);
v___x_2230_ = v___x_2223_;
goto v_reusejp_2229_;
}
else
{
lean_object* v_reuseFailAlloc_2238_; 
v_reuseFailAlloc_2238_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2238_, 0, v___y_2226_);
lean_ctor_set(v_reuseFailAlloc_2238_, 1, v_ensures_2221_);
lean_ctor_set(v_reuseFailAlloc_2238_, 2, v_requires_2220_);
v___x_2230_ = v_reuseFailAlloc_2238_;
goto v_reusejp_2229_;
}
v_reusejp_2229_:
{
lean_object* v___x_2232_; 
if (v_isShared_2218_ == 0)
{
lean_ctor_set(v___x_2217_, 9, v_before_2213_);
lean_ctor_set(v___x_2217_, 8, v_after_2214_);
lean_ctor_set(v___x_2217_, 5, v___x_2230_);
lean_ctor_set(v___x_2217_, 0, v___x_2228_);
v___x_2232_ = v___x_2217_;
goto v_reusejp_2231_;
}
else
{
lean_object* v_reuseFailAlloc_2237_; 
v_reuseFailAlloc_2237_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2237_, 0, v___x_2228_);
lean_ctor_set(v_reuseFailAlloc_2237_, 1, v_sectionName_2207_);
lean_ctor_set(v_reuseFailAlloc_2237_, 2, v_surface_2208_);
lean_ctor_set(v_reuseFailAlloc_2237_, 3, v_kind_2209_);
lean_ctor_set(v_reuseFailAlloc_2237_, 4, v_label_2210_);
lean_ctor_set(v_reuseFailAlloc_2237_, 5, v___x_2230_);
lean_ctor_set(v_reuseFailAlloc_2237_, 6, v_requiresText_2211_);
lean_ctor_set(v_reuseFailAlloc_2237_, 7, v_ensuresText_2212_);
lean_ctor_set(v_reuseFailAlloc_2237_, 8, v_after_2214_);
lean_ctor_set(v_reuseFailAlloc_2237_, 9, v_before_2213_);
lean_ctor_set(v_reuseFailAlloc_2237_, 10, v_algebra_2215_);
v___x_2232_ = v_reuseFailAlloc_2237_;
goto v_reusejp_2231_;
}
v_reusejp_2231_:
{
lean_object* v___x_2234_; 
if (v_isShared_2205_ == 0)
{
lean_ctor_set(v___x_2204_, 1, v_a_2198_);
lean_ctor_set(v___x_2204_, 0, v___x_2232_);
v___x_2234_ = v___x_2204_;
goto v_reusejp_2233_;
}
else
{
lean_object* v_reuseFailAlloc_2236_; 
v_reuseFailAlloc_2236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2236_, 0, v___x_2232_);
lean_ctor_set(v_reuseFailAlloc_2236_, 1, v_a_2198_);
v___x_2234_ = v_reuseFailAlloc_2236_;
goto v_reusejp_2233_;
}
v_reusejp_2233_:
{
v_a_2197_ = v_tail_2202_;
v_a_2198_ = v___x_2234_;
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
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps___redArg(lean_object* v_steps_2297_){
_start:
{
lean_object* v___x_2298_; lean_object* v___x_2299_; lean_object* v___x_2300_; 
v___x_2298_ = l_List_reverse___redArg(v_steps_2297_);
v___x_2299_ = lean_box(0);
v___x_2300_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(v___x_2298_, v___x_2299_);
return v___x_2300_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps(lean_object* v_sp_2301_, lean_object* v_steps_2302_){
_start:
{
lean_object* v___x_2303_; 
v___x_2303_ = lp_choreo_Choreo_reverseSteps___redArg(v_steps_2302_);
return v___x_2303_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps___boxed(lean_object* v_sp_2304_, lean_object* v_steps_2305_){
_start:
{
lean_object* v_res_2306_; 
v_res_2306_ = lp_choreo_Choreo_reverseSteps(v_sp_2304_, v_steps_2305_);
lean_dec_ref(v_sp_2304_);
return v_res_2306_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(lean_object* v_s_2307_, lean_object* v_x_2308_, lean_object* v_d_2309_, lean_object* v_x_2310_){
_start:
{
if (lean_obj_tag(v_x_2310_) == 0)
{
lean_object* v___x_2311_; 
lean_dec(v_x_2308_);
v___x_2311_ = lean_box(0);
return v___x_2311_;
}
else
{
lean_object* v_head_2312_; lean_object* v_tail_2313_; lean_object* v___x_2314_; lean_object* v_y_2315_; lean_object* v___x_2316_; lean_object* v_y_2317_; lean_object* v___x_2318_; uint8_t v___x_2319_; 
v_head_2312_ = lean_ctor_get(v_x_2310_, 0);
lean_inc_n(v_head_2312_, 2);
v_tail_2313_ = lean_ctor_get(v_x_2310_, 1);
lean_inc(v_tail_2313_);
lean_dec_ref_known(v_x_2310_, 2);
lean_inc(v_x_2308_);
v___x_2314_ = lp_choreo_Choreo_State_at(v_s_2307_, v_x_2308_);
v_y_2315_ = lean_ctor_get(v___x_2314_, 1);
lean_inc(v_y_2315_);
lean_dec_ref(v___x_2314_);
v___x_2316_ = lp_choreo_Choreo_State_at(v_s_2307_, v_head_2312_);
v_y_2317_ = lean_ctor_get(v___x_2316_, 1);
lean_inc(v_y_2317_);
lean_dec_ref(v___x_2316_);
v___x_2318_ = lean_int_sub(v_y_2315_, v_y_2317_);
v___x_2319_ = lean_int_dec_le(v_d_2309_, v___x_2318_);
lean_dec(v___x_2318_);
if (v___x_2319_ == 0)
{
lean_object* v___x_2320_; uint8_t v___x_2321_; 
v___x_2320_ = lean_int_sub(v_y_2317_, v_y_2315_);
lean_dec(v_y_2315_);
lean_dec(v_y_2317_);
v___x_2321_ = lean_int_dec_le(v_d_2309_, v___x_2320_);
lean_dec(v___x_2320_);
if (v___x_2321_ == 0)
{
lean_object* v___x_2322_; 
lean_dec(v_tail_2313_);
lean_dec(v_x_2308_);
v___x_2322_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2322_, 0, v_head_2312_);
return v___x_2322_;
}
else
{
lean_dec(v_head_2312_);
v_x_2310_ = v_tail_2313_;
goto _start;
}
}
else
{
lean_dec(v_y_2317_);
lean_dec(v_y_2315_);
lean_dec(v_head_2312_);
v_x_2310_ = v_tail_2313_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1___boxed(lean_object* v_s_2325_, lean_object* v_x_2326_, lean_object* v_d_2327_, lean_object* v_x_2328_){
_start:
{
lean_object* v_res_2329_; 
v_res_2329_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(v_s_2325_, v_x_2326_, v_d_2327_, v_x_2328_);
lean_dec(v_d_2327_);
lean_dec(v_s_2325_);
return v_res_2329_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(lean_object* v_s_2330_, lean_object* v_d_2331_, lean_object* v_B_2332_, lean_object* v_x_2333_){
_start:
{
if (lean_obj_tag(v_x_2333_) == 0)
{
lean_object* v___x_2334_; 
lean_dec(v_B_2332_);
v___x_2334_ = lean_box(0);
return v___x_2334_;
}
else
{
lean_object* v_head_2335_; lean_object* v_tail_2336_; lean_object* v___x_2338_; uint8_t v_isShared_2339_; uint8_t v_isSharedCheck_2353_; 
v_head_2335_ = lean_ctor_get(v_x_2333_, 0);
v_tail_2336_ = lean_ctor_get(v_x_2333_, 1);
v_isSharedCheck_2353_ = !lean_is_exclusive(v_x_2333_);
if (v_isSharedCheck_2353_ == 0)
{
v___x_2338_ = v_x_2333_;
v_isShared_2339_ = v_isSharedCheck_2353_;
goto v_resetjp_2337_;
}
else
{
lean_inc(v_tail_2336_);
lean_inc(v_head_2335_);
lean_dec(v_x_2333_);
v___x_2338_ = lean_box(0);
v_isShared_2339_ = v_isSharedCheck_2353_;
goto v_resetjp_2337_;
}
v_resetjp_2337_:
{
lean_object* v___x_2340_; 
lean_inc(v_B_2332_);
lean_inc(v_head_2335_);
v___x_2340_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(v_s_2330_, v_head_2335_, v_d_2331_, v_B_2332_);
if (lean_obj_tag(v___x_2340_) == 0)
{
lean_del_object(v___x_2338_);
lean_dec(v_head_2335_);
v_x_2333_ = v_tail_2336_;
goto _start;
}
else
{
lean_object* v_val_2342_; lean_object* v___x_2344_; uint8_t v_isShared_2345_; uint8_t v_isSharedCheck_2352_; 
lean_dec(v_tail_2336_);
lean_dec(v_B_2332_);
v_val_2342_ = lean_ctor_get(v___x_2340_, 0);
v_isSharedCheck_2352_ = !lean_is_exclusive(v___x_2340_);
if (v_isSharedCheck_2352_ == 0)
{
v___x_2344_ = v___x_2340_;
v_isShared_2345_ = v_isSharedCheck_2352_;
goto v_resetjp_2343_;
}
else
{
lean_inc(v_val_2342_);
lean_dec(v___x_2340_);
v___x_2344_ = lean_box(0);
v_isShared_2345_ = v_isSharedCheck_2352_;
goto v_resetjp_2343_;
}
v_resetjp_2343_:
{
lean_object* v___x_2347_; 
if (v_isShared_2339_ == 0)
{
lean_ctor_set_tag(v___x_2338_, 0);
lean_ctor_set(v___x_2338_, 1, v_val_2342_);
v___x_2347_ = v___x_2338_;
goto v_reusejp_2346_;
}
else
{
lean_object* v_reuseFailAlloc_2351_; 
v_reuseFailAlloc_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2351_, 0, v_head_2335_);
lean_ctor_set(v_reuseFailAlloc_2351_, 1, v_val_2342_);
v___x_2347_ = v_reuseFailAlloc_2351_;
goto v_reusejp_2346_;
}
v_reusejp_2346_:
{
lean_object* v___x_2349_; 
if (v_isShared_2345_ == 0)
{
lean_ctor_set(v___x_2344_, 0, v___x_2347_);
v___x_2349_ = v___x_2344_;
goto v_reusejp_2348_;
}
else
{
lean_object* v_reuseFailAlloc_2350_; 
v_reuseFailAlloc_2350_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2350_, 0, v___x_2347_);
v___x_2349_ = v_reuseFailAlloc_2350_;
goto v_reusejp_2348_;
}
v_reusejp_2348_:
{
return v___x_2349_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2___boxed(lean_object* v_s_2354_, lean_object* v_d_2355_, lean_object* v_B_2356_, lean_object* v_x_2357_){
_start:
{
lean_object* v_res_2358_; 
v_res_2358_ = lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(v_s_2354_, v_d_2355_, v_B_2356_, v_x_2357_);
lean_dec(v_d_2355_);
lean_dec(v_s_2354_);
return v_res_2358_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_whyNot_spec__0(lean_object* v_i_2359_, lean_object* v_a_2360_, lean_object* v_a_2361_){
_start:
{
if (lean_obj_tag(v_a_2360_) == 0)
{
lean_object* v___x_2362_; 
lean_dec(v_i_2359_);
v___x_2362_ = l_List_reverse___redArg(v_a_2361_);
return v___x_2362_;
}
else
{
lean_object* v_head_2363_; lean_object* v_tail_2364_; lean_object* v___x_2366_; uint8_t v_isShared_2367_; uint8_t v_isSharedCheck_2373_; 
v_head_2363_ = lean_ctor_get(v_a_2360_, 0);
v_tail_2364_ = lean_ctor_get(v_a_2360_, 1);
v_isSharedCheck_2373_ = !lean_is_exclusive(v_a_2360_);
if (v_isSharedCheck_2373_ == 0)
{
v___x_2366_ = v_a_2360_;
v_isShared_2367_ = v_isSharedCheck_2373_;
goto v_resetjp_2365_;
}
else
{
lean_inc(v_tail_2364_);
lean_inc(v_head_2363_);
lean_dec(v_a_2360_);
v___x_2366_ = lean_box(0);
v_isShared_2367_ = v_isSharedCheck_2373_;
goto v_resetjp_2365_;
}
v_resetjp_2365_:
{
lean_object* v___x_2368_; lean_object* v___x_2370_; 
lean_inc(v_i_2359_);
v___x_2368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2368_, 0, v_i_2359_);
lean_ctor_set(v___x_2368_, 1, v_head_2363_);
if (v_isShared_2367_ == 0)
{
lean_ctor_set(v___x_2366_, 1, v_a_2361_);
lean_ctor_set(v___x_2366_, 0, v___x_2368_);
v___x_2370_ = v___x_2366_;
goto v_reusejp_2369_;
}
else
{
lean_object* v_reuseFailAlloc_2372_; 
v_reuseFailAlloc_2372_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2372_, 0, v___x_2368_);
lean_ctor_set(v_reuseFailAlloc_2372_, 1, v_a_2361_);
v___x_2370_ = v_reuseFailAlloc_2372_;
goto v_reusejp_2369_;
}
v_reusejp_2369_:
{
v_a_2360_ = v_tail_2364_;
v_a_2361_ = v___x_2370_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Pred_whyNot_spec__5(lean_object* v_a_2374_, lean_object* v_a_2375_){
_start:
{
if (lean_obj_tag(v_a_2374_) == 0)
{
lean_object* v___x_2376_; 
v___x_2376_ = lean_array_to_list(v_a_2375_);
return v___x_2376_;
}
else
{
lean_object* v_head_2377_; lean_object* v_tail_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; lean_object* v___x_2382_; 
v_head_2377_ = lean_ctor_get(v_a_2374_, 0);
lean_inc_n(v_head_2377_, 2);
v_tail_2378_ = lean_ctor_get(v_a_2374_, 1);
lean_inc(v_tail_2378_);
lean_dec_ref_known(v_a_2374_, 2);
v___x_2379_ = l_List_range(v_head_2377_);
v___x_2380_ = lean_box(0);
v___x_2381_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_whyNot_spec__0(v_head_2377_, v___x_2379_, v___x_2380_);
v___x_2382_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2375_, v___x_2381_);
v_a_2374_ = v_tail_2378_;
v_a_2375_ = v___x_2382_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(lean_object* v_line_2384_, lean_object* v_d_2385_, lean_object* v_s_2386_, lean_object* v_x_2387_){
_start:
{
if (lean_obj_tag(v_x_2387_) == 0)
{
lean_object* v___x_2388_; 
v___x_2388_ = lean_box(0);
return v___x_2388_;
}
else
{
lean_object* v_head_2389_; lean_object* v_tail_2390_; lean_object* v___x_2391_; lean_object* v_x_2392_; lean_object* v___x_2393_; uint8_t v___x_2394_; 
v_head_2389_ = lean_ctor_get(v_x_2387_, 0);
lean_inc_n(v_head_2389_, 2);
v_tail_2390_ = lean_ctor_get(v_x_2387_, 1);
lean_inc(v_tail_2390_);
lean_dec_ref_known(v_x_2387_, 2);
v___x_2391_ = lp_choreo_Choreo_State_at(v_s_2386_, v_head_2389_);
v_x_2392_ = lean_ctor_get(v___x_2391_, 0);
lean_inc(v_x_2392_);
lean_dec_ref(v___x_2391_);
v___x_2393_ = lean_int_add(v_line_2384_, v_d_2385_);
v___x_2394_ = lean_int_dec_le(v___x_2393_, v_x_2392_);
lean_dec(v_x_2392_);
lean_dec(v___x_2393_);
if (v___x_2394_ == 0)
{
lean_object* v___x_2395_; 
lean_dec(v_tail_2390_);
v___x_2395_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2395_, 0, v_head_2389_);
return v___x_2395_;
}
else
{
lean_dec(v_head_2389_);
v_x_2387_ = v_tail_2390_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4___boxed(lean_object* v_line_2397_, lean_object* v_d_2398_, lean_object* v_s_2399_, lean_object* v_x_2400_){
_start:
{
lean_object* v_res_2401_; 
v_res_2401_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(v_line_2397_, v_d_2398_, v_s_2399_, v_x_2400_);
lean_dec(v_s_2399_);
lean_dec(v_d_2398_);
lean_dec(v_line_2397_);
return v_res_2401_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(lean_object* v_d_2402_, lean_object* v_s_2403_, lean_object* v_x_2404_){
_start:
{
if (lean_obj_tag(v_x_2404_) == 0)
{
lean_object* v___x_2405_; 
v___x_2405_ = lean_box(0);
return v___x_2405_;
}
else
{
lean_object* v_head_2406_; lean_object* v_tail_2407_; lean_object* v_fst_2408_; lean_object* v_snd_2409_; lean_object* v___x_2410_; lean_object* v___x_2411_; lean_object* v___x_2412_; lean_object* v___x_2413_; uint8_t v___x_2414_; 
v_head_2406_ = lean_ctor_get(v_x_2404_, 0);
lean_inc(v_head_2406_);
v_tail_2407_ = lean_ctor_get(v_x_2404_, 1);
lean_inc(v_tail_2407_);
lean_dec_ref_known(v_x_2404_, 2);
v_fst_2408_ = lean_ctor_get(v_head_2406_, 0);
v_snd_2409_ = lean_ctor_get(v_head_2406_, 1);
v___x_2410_ = lean_int_mul(v_d_2402_, v_d_2402_);
lean_inc(v_fst_2408_);
v___x_2411_ = lp_choreo_Choreo_State_at(v_s_2403_, v_fst_2408_);
lean_inc(v_snd_2409_);
v___x_2412_ = lp_choreo_Choreo_State_at(v_s_2403_, v_snd_2409_);
v___x_2413_ = lp_choreo_Choreo_gapSq_x27(v___x_2411_, v___x_2412_);
lean_dec_ref(v___x_2412_);
lean_dec_ref(v___x_2411_);
v___x_2414_ = lean_int_dec_le(v___x_2410_, v___x_2413_);
lean_dec(v___x_2413_);
lean_dec(v___x_2410_);
if (v___x_2414_ == 0)
{
lean_object* v___x_2415_; 
lean_dec(v_tail_2407_);
v___x_2415_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2415_, 0, v_head_2406_);
return v___x_2415_;
}
else
{
lean_dec(v_head_2406_);
v_x_2404_ = v_tail_2407_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6___boxed(lean_object* v_d_2417_, lean_object* v_s_2418_, lean_object* v_x_2419_){
_start:
{
lean_object* v_res_2420_; 
v_res_2420_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(v_d_2417_, v_s_2418_, v_x_2419_);
lean_dec(v_s_2418_);
lean_dec(v_d_2417_);
return v_res_2420_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(lean_object* v_s_2421_, lean_object* v_line_2422_, lean_object* v_x_2423_){
_start:
{
if (lean_obj_tag(v_x_2423_) == 0)
{
lean_object* v___x_2424_; 
v___x_2424_ = lean_box(0);
return v___x_2424_;
}
else
{
lean_object* v_head_2425_; lean_object* v_tail_2426_; lean_object* v___x_2427_; lean_object* v_x_2428_; uint8_t v___x_2429_; 
v_head_2425_ = lean_ctor_get(v_x_2423_, 0);
lean_inc_n(v_head_2425_, 2);
v_tail_2426_ = lean_ctor_get(v_x_2423_, 1);
lean_inc(v_tail_2426_);
lean_dec_ref_known(v_x_2423_, 2);
v___x_2427_ = lp_choreo_Choreo_State_at(v_s_2421_, v_head_2425_);
v_x_2428_ = lean_ctor_get(v___x_2427_, 0);
lean_inc(v_x_2428_);
lean_dec_ref(v___x_2427_);
v___x_2429_ = lean_int_dec_le(v_x_2428_, v_line_2422_);
lean_dec(v_x_2428_);
if (v___x_2429_ == 0)
{
lean_object* v___x_2430_; 
lean_dec(v_tail_2426_);
v___x_2430_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2430_, 0, v_head_2425_);
return v___x_2430_;
}
else
{
lean_dec(v_head_2425_);
v_x_2423_ = v_tail_2426_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3___boxed(lean_object* v_s_2432_, lean_object* v_line_2433_, lean_object* v_x_2434_){
_start:
{
lean_object* v_res_2435_; 
v_res_2435_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(v_s_2432_, v_line_2433_, v_x_2434_);
lean_dec(v_line_2433_);
lean_dec(v_s_2432_);
return v_res_2435_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot(lean_object* v_names_2449_, lean_object* v_s_2450_, lean_object* v_x_2451_){
_start:
{
switch(lean_obj_tag(v_x_2451_))
{
case 4:
{
lean_object* v_A_2452_; lean_object* v_B_2453_; lean_object* v_d_2454_; lean_object* v_bad_2455_; 
v_A_2452_ = lean_ctor_get(v_x_2451_, 0);
lean_inc(v_A_2452_);
v_B_2453_ = lean_ctor_get(v_x_2451_, 1);
lean_inc(v_B_2453_);
v_d_2454_ = lean_ctor_get(v_x_2451_, 2);
lean_inc(v_d_2454_);
lean_dec_ref_known(v_x_2451_, 3);
v_bad_2455_ = lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(v_s_2450_, v_d_2454_, v_B_2453_, v_A_2452_);
lean_dec(v_d_2454_);
if (lean_obj_tag(v_bad_2455_) == 0)
{
lean_object* v___x_2456_; 
lean_dec_ref(v_names_2449_);
v___x_2456_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__0));
return v___x_2456_;
}
else
{
lean_object* v_val_2457_; lean_object* v_fst_2458_; lean_object* v_snd_2459_; lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v_y_2462_; lean_object* v___x_2463_; lean_object* v___x_2464_; lean_object* v_y_2465_; lean_object* v___x_2466_; lean_object* v___x_2467_; lean_object* v___x_2468_; lean_object* v___x_2469_; lean_object* v___x_2470_; lean_object* v___x_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; 
v_val_2457_ = lean_ctor_get(v_bad_2455_, 0);
lean_inc(v_val_2457_);
lean_dec_ref_known(v_bad_2455_, 1);
v_fst_2458_ = lean_ctor_get(v_val_2457_, 0);
lean_inc_n(v_fst_2458_, 2);
v_snd_2459_ = lean_ctor_get(v_val_2457_, 1);
lean_inc_n(v_snd_2459_, 2);
lean_dec(v_val_2457_);
lean_inc_ref(v_names_2449_);
v___x_2460_ = lean_apply_1(v_names_2449_, v_fst_2458_);
v___x_2461_ = lp_choreo_Choreo_State_at(v_s_2450_, v_fst_2458_);
v_y_2462_ = lean_ctor_get(v___x_2461_, 1);
lean_inc(v_y_2462_);
lean_dec_ref(v___x_2461_);
v___x_2463_ = lean_apply_1(v_names_2449_, v_snd_2459_);
v___x_2464_ = lp_choreo_Choreo_State_at(v_s_2450_, v_snd_2459_);
v_y_2465_ = lean_ctor_get(v___x_2464_, 1);
lean_inc(v_y_2465_);
lean_dec_ref(v___x_2464_);
v___x_2466_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__1));
v___x_2467_ = lean_string_append(v___x_2460_, v___x_2466_);
v___x_2468_ = lean_string_append(v___x_2467_, v___x_2463_);
lean_dec_ref(v___x_2463_);
v___x_2469_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__2));
v___x_2470_ = lean_string_append(v___x_2468_, v___x_2469_);
v___x_2471_ = lean_int_sub(v_y_2462_, v_y_2465_);
lean_dec(v_y_2465_);
lean_dec(v_y_2462_);
v___x_2472_ = lean_nat_abs(v___x_2471_);
lean_dec(v___x_2471_);
v___x_2473_ = lean_unsigned_to_nat(10u);
v___x_2474_ = lean_nat_div(v___x_2472_, v___x_2473_);
lean_dec(v___x_2472_);
v___x_2475_ = l_Nat_reprFast(v___x_2474_);
v___x_2476_ = lean_string_append(v___x_2470_, v___x_2475_);
lean_dec_ref(v___x_2475_);
v___x_2477_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__3));
v___x_2478_ = lean_string_append(v___x_2476_, v___x_2477_);
return v___x_2478_;
}
}
case 5:
{
lean_object* v_A_2479_; lean_object* v_B_2480_; lean_object* v_line_2481_; lean_object* v_d_2482_; lean_object* v___x_2483_; 
v_A_2479_ = lean_ctor_get(v_x_2451_, 0);
lean_inc(v_A_2479_);
v_B_2480_ = lean_ctor_get(v_x_2451_, 1);
lean_inc(v_B_2480_);
v_line_2481_ = lean_ctor_get(v_x_2451_, 2);
lean_inc(v_line_2481_);
v_d_2482_ = lean_ctor_get(v_x_2451_, 3);
lean_inc(v_d_2482_);
lean_dec_ref_known(v_x_2451_, 4);
v___x_2483_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(v_s_2450_, v_line_2481_, v_A_2479_);
if (lean_obj_tag(v___x_2483_) == 1)
{
lean_object* v_val_2484_; lean_object* v___x_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; 
lean_dec(v_d_2482_);
lean_dec(v_line_2481_);
lean_dec(v_B_2480_);
v_val_2484_ = lean_ctor_get(v___x_2483_, 0);
lean_inc(v_val_2484_);
lean_dec_ref_known(v___x_2483_, 1);
v___x_2485_ = lean_apply_1(v_names_2449_, v_val_2484_);
v___x_2486_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__4));
v___x_2487_ = lean_string_append(v___x_2485_, v___x_2486_);
return v___x_2487_;
}
else
{
lean_object* v___x_2488_; 
lean_dec(v___x_2483_);
v___x_2488_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(v_line_2481_, v_d_2482_, v_s_2450_, v_B_2480_);
lean_dec(v_d_2482_);
lean_dec(v_line_2481_);
if (lean_obj_tag(v___x_2488_) == 1)
{
lean_object* v_val_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; 
v_val_2489_ = lean_ctor_get(v___x_2488_, 0);
lean_inc(v_val_2489_);
lean_dec_ref_known(v___x_2488_, 1);
v___x_2490_ = lean_apply_1(v_names_2449_, v_val_2489_);
v___x_2491_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__5));
v___x_2492_ = lean_string_append(v___x_2490_, v___x_2491_);
return v___x_2492_;
}
else
{
lean_object* v___x_2493_; 
lean_dec(v___x_2488_);
lean_dec_ref(v_names_2449_);
v___x_2493_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__6));
return v___x_2493_;
}
}
}
case 2:
{
lean_object* v_n_2494_; lean_object* v_d_2495_; lean_object* v___x_2496_; lean_object* v___x_2497_; lean_object* v_pairs_2498_; lean_object* v___x_2499_; 
v_n_2494_ = lean_ctor_get(v_x_2451_, 0);
lean_inc(v_n_2494_);
v_d_2495_ = lean_ctor_get(v_x_2451_, 1);
lean_inc(v_d_2495_);
lean_dec_ref_known(v_x_2451_, 2);
v___x_2496_ = l_List_range(v_n_2494_);
v___x_2497_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__7));
v_pairs_2498_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Pred_whyNot_spec__5(v___x_2496_, v___x_2497_);
v___x_2499_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(v_d_2495_, v_s_2450_, v_pairs_2498_);
if (lean_obj_tag(v___x_2499_) == 0)
{
lean_object* v___x_2500_; 
lean_dec(v_d_2495_);
lean_dec_ref(v_names_2449_);
v___x_2500_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__8));
return v___x_2500_;
}
else
{
lean_object* v_val_2501_; lean_object* v_fst_2502_; lean_object* v_snd_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; lean_object* v___x_2509_; lean_object* v___x_2510_; lean_object* v___x_2511_; lean_object* v___x_2512_; lean_object* v___x_2513_; lean_object* v___x_2514_; lean_object* v___x_2515_; lean_object* v___x_2516_; 
v_val_2501_ = lean_ctor_get(v___x_2499_, 0);
lean_inc(v_val_2501_);
lean_dec_ref_known(v___x_2499_, 1);
v_fst_2502_ = lean_ctor_get(v_val_2501_, 0);
lean_inc(v_fst_2502_);
v_snd_2503_ = lean_ctor_get(v_val_2501_, 1);
lean_inc(v_snd_2503_);
lean_dec(v_val_2501_);
lean_inc_ref(v_names_2449_);
v___x_2504_ = lean_apply_1(v_names_2449_, v_fst_2502_);
v___x_2505_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__1));
v___x_2506_ = lean_string_append(v___x_2504_, v___x_2505_);
v___x_2507_ = lean_apply_1(v_names_2449_, v_snd_2503_);
v___x_2508_ = lean_string_append(v___x_2506_, v___x_2507_);
lean_dec_ref(v___x_2507_);
v___x_2509_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__9));
v___x_2510_ = lean_string_append(v___x_2508_, v___x_2509_);
v___x_2511_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_2512_ = lean_int_ediv(v_d_2495_, v___x_2511_);
lean_dec(v_d_2495_);
v___x_2513_ = l_Int_repr(v___x_2512_);
lean_dec(v___x_2512_);
v___x_2514_ = lean_string_append(v___x_2510_, v___x_2513_);
lean_dec_ref(v___x_2513_);
v___x_2515_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__10));
v___x_2516_ = lean_string_append(v___x_2514_, v___x_2515_);
return v___x_2516_;
}
}
default: 
{
lean_object* v___x_2517_; 
lean_dec(v_x_2451_);
lean_dec_ref(v_names_2449_);
v___x_2517_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__11));
return v___x_2517_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot___boxed(lean_object* v_names_2518_, lean_object* v_s_2519_, lean_object* v_x_2520_){
_start:
{
lean_object* v_res_2521_; 
v_res_2521_ = lp_choreo_Choreo_Pred_whyNot(v_names_2518_, v_s_2519_, v_x_2520_);
lean_dec(v_s_2519_);
return v_res_2521_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_buildProgram_allOk(lean_object* v_cfg_2522_, lean_object* v_a_2523_, lean_object* v_a_2524_){
_start:
{
if (lean_obj_tag(v_a_2523_) == 0)
{
uint8_t v___x_2525_; 
lean_dec(v_a_2524_);
lean_dec_ref(v_cfg_2522_);
v___x_2525_ = 1;
return v___x_2525_;
}
else
{
lean_object* v_head_2526_; lean_object* v_step_2527_; lean_object* v_tail_2528_; lean_object* v_after_2529_; lean_object* v_op_2530_; uint8_t v___x_2531_; 
v_head_2526_ = lean_ctor_get(v_a_2523_, 0);
lean_inc(v_head_2526_);
v_step_2527_ = lean_ctor_get(v_head_2526_, 5);
lean_inc_ref(v_step_2527_);
v_tail_2528_ = lean_ctor_get(v_a_2523_, 1);
lean_inc(v_tail_2528_);
lean_dec_ref_known(v_a_2523_, 2);
v_after_2529_ = lean_ctor_get(v_head_2526_, 9);
lean_inc(v_after_2529_);
lean_dec(v_head_2526_);
v_op_2530_ = lean_ctor_get(v_step_2527_, 0);
lean_inc_ref(v_op_2530_);
lean_dec_ref(v_step_2527_);
lean_inc_ref(v_cfg_2522_);
v___x_2531_ = lp_choreo_Choreo_Op_enabled(v_op_2530_, v_cfg_2522_, v_a_2524_);
lean_dec(v_a_2524_);
if (v___x_2531_ == 0)
{
lean_dec(v_after_2529_);
lean_dec(v_tail_2528_);
lean_dec_ref(v_cfg_2522_);
return v___x_2531_;
}
else
{
v_a_2523_ = v_tail_2528_;
v_a_2524_ = v_after_2529_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram_allOk___boxed(lean_object* v_cfg_2533_, lean_object* v_a_2534_, lean_object* v_a_2535_){
_start:
{
uint8_t v_res_2536_; lean_object* v_r_2537_; 
v_res_2536_ = lp_choreo_Choreo_buildProgram_allOk(v_cfg_2533_, v_a_2534_, v_a_2535_);
v_r_2537_ = lean_box(v_res_2536_);
return v_r_2537_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__1(lean_object* v_a_2538_, lean_object* v_a_2539_){
_start:
{
if (lean_obj_tag(v_a_2538_) == 0)
{
lean_object* v___x_2540_; 
v___x_2540_ = l_List_reverse___redArg(v_a_2539_);
return v___x_2540_;
}
else
{
lean_object* v_head_2541_; lean_object* v_tail_2542_; lean_object* v___x_2544_; uint8_t v_isShared_2545_; uint8_t v_isSharedCheck_2556_; 
v_head_2541_ = lean_ctor_get(v_a_2538_, 0);
v_tail_2542_ = lean_ctor_get(v_a_2538_, 1);
v_isSharedCheck_2556_ = !lean_is_exclusive(v_a_2538_);
if (v_isSharedCheck_2556_ == 0)
{
v___x_2544_ = v_a_2538_;
v_isShared_2545_ = v_isSharedCheck_2556_;
goto v_resetjp_2543_;
}
else
{
lean_inc(v_tail_2542_);
lean_inc(v_head_2541_);
lean_dec(v_a_2538_);
v___x_2544_ = lean_box(0);
v_isShared_2545_ = v_isSharedCheck_2556_;
goto v_resetjp_2543_;
}
v_resetjp_2543_:
{
lean_object* v___y_2547_; lean_object* v_step_2552_; lean_object* v_op_2553_; 
v_step_2552_ = lean_ctor_get(v_head_2541_, 5);
lean_inc_ref(v_step_2552_);
lean_dec(v_head_2541_);
v_op_2553_ = lean_ctor_get(v_step_2552_, 0);
lean_inc_ref(v_op_2553_);
lean_dec_ref(v_step_2552_);
if (lean_obj_tag(v_op_2553_) == 3)
{
lean_object* v_beats_2554_; 
v_beats_2554_ = lean_ctor_get(v_op_2553_, 4);
lean_inc(v_beats_2554_);
lean_dec_ref_known(v_op_2553_, 5);
v___y_2547_ = v_beats_2554_;
goto v___jp_2546_;
}
else
{
lean_object* v_beats_2555_; 
v_beats_2555_ = lean_ctor_get(v_op_2553_, 1);
lean_inc(v_beats_2555_);
lean_dec_ref(v_op_2553_);
v___y_2547_ = v_beats_2555_;
goto v___jp_2546_;
}
v___jp_2546_:
{
lean_object* v___x_2549_; 
if (v_isShared_2545_ == 0)
{
lean_ctor_set(v___x_2544_, 1, v_a_2539_);
lean_ctor_set(v___x_2544_, 0, v___y_2547_);
v___x_2549_ = v___x_2544_;
goto v_reusejp_2548_;
}
else
{
lean_object* v_reuseFailAlloc_2551_; 
v_reuseFailAlloc_2551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2551_, 0, v___y_2547_);
lean_ctor_set(v_reuseFailAlloc_2551_, 1, v_a_2539_);
v___x_2549_ = v_reuseFailAlloc_2551_;
goto v_reusejp_2548_;
}
v_reusejp_2548_:
{
v_a_2538_ = v_tail_2542_;
v_a_2539_ = v___x_2549_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__5(lean_object* v___x_2557_, lean_object* v_x_2558_, lean_object* v_x_2559_){
_start:
{
if (lean_obj_tag(v_x_2559_) == 0)
{
lean_dec(v___x_2557_);
return v_x_2558_;
}
else
{
lean_object* v_head_2560_; lean_object* v_tail_2561_; lean_object* v___x_2563_; uint8_t v_isShared_2564_; uint8_t v_isSharedCheck_2585_; 
v_head_2560_ = lean_ctor_get(v_x_2559_, 0);
v_tail_2561_ = lean_ctor_get(v_x_2559_, 1);
v_isSharedCheck_2585_ = !lean_is_exclusive(v_x_2559_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2563_ = v_x_2559_;
v_isShared_2564_ = v_isSharedCheck_2585_;
goto v_resetjp_2562_;
}
else
{
lean_inc(v_tail_2561_);
lean_inc(v_head_2560_);
lean_dec(v_x_2559_);
v___x_2563_ = lean_box(0);
v_isShared_2564_ = v_isSharedCheck_2585_;
goto v_resetjp_2562_;
}
v_resetjp_2562_:
{
lean_object* v_fst_2565_; lean_object* v_snd_2566_; lean_object* v___x_2568_; uint8_t v_isShared_2569_; uint8_t v_isSharedCheck_2584_; 
v_fst_2565_ = lean_ctor_get(v_x_2558_, 0);
v_snd_2566_ = lean_ctor_get(v_x_2558_, 1);
v_isSharedCheck_2584_ = !lean_is_exclusive(v_x_2558_);
if (v_isSharedCheck_2584_ == 0)
{
v___x_2568_ = v_x_2558_;
v_isShared_2569_ = v_isSharedCheck_2584_;
goto v_resetjp_2567_;
}
else
{
lean_inc(v_snd_2566_);
lean_inc(v_fst_2565_);
lean_dec(v_x_2558_);
v___x_2568_ = lean_box(0);
v_isShared_2569_ = v_isSharedCheck_2584_;
goto v_resetjp_2567_;
}
v_resetjp_2567_:
{
lean_object* v_beats_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2575_; 
v_beats_2570_ = lean_ctor_get(v_head_2560_, 4);
lean_inc(v_beats_2570_);
v___x_2571_ = lean_unsigned_to_nat(4u);
lean_inc(v_snd_2566_);
lean_inc(v___x_2557_);
v___x_2572_ = lp_choreo_Choreo_Draft_toPhase(v_head_2560_, v___x_2557_, v_snd_2566_);
lean_dec(v_head_2560_);
v___x_2573_ = lean_box(0);
if (v_isShared_2564_ == 0)
{
lean_ctor_set(v___x_2563_, 1, v___x_2573_);
lean_ctor_set(v___x_2563_, 0, v___x_2572_);
v___x_2575_ = v___x_2563_;
goto v_reusejp_2574_;
}
else
{
lean_object* v_reuseFailAlloc_2583_; 
v_reuseFailAlloc_2583_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2583_, 0, v___x_2572_);
lean_ctor_set(v_reuseFailAlloc_2583_, 1, v___x_2573_);
v___x_2575_ = v_reuseFailAlloc_2583_;
goto v_reusejp_2574_;
}
v_reusejp_2574_:
{
lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2580_; 
v___x_2576_ = l_List_appendTR___redArg(v_fst_2565_, v___x_2575_);
v___x_2577_ = lean_nat_mul(v_beats_2570_, v___x_2571_);
lean_dec(v_beats_2570_);
v___x_2578_ = lean_nat_add(v_snd_2566_, v___x_2577_);
lean_dec(v___x_2577_);
lean_dec(v_snd_2566_);
if (v_isShared_2569_ == 0)
{
lean_ctor_set(v___x_2568_, 1, v___x_2578_);
lean_ctor_set(v___x_2568_, 0, v___x_2576_);
v___x_2580_ = v___x_2568_;
goto v_reusejp_2579_;
}
else
{
lean_object* v_reuseFailAlloc_2582_; 
v_reuseFailAlloc_2582_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2582_, 0, v___x_2576_);
lean_ctor_set(v_reuseFailAlloc_2582_, 1, v___x_2578_);
v___x_2580_ = v_reuseFailAlloc_2582_;
goto v_reusejp_2579_;
}
v_reusejp_2579_:
{
v_x_2558_ = v___x_2580_;
v_x_2559_ = v_tail_2561_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4(lean_object* v___x_2587_, lean_object* v_env_2588_, lean_object* v___x_2589_, lean_object* v_a_2590_, lean_object* v_a_2591_){
_start:
{
if (lean_obj_tag(v_a_2590_) == 0)
{
lean_object* v___x_2592_; 
lean_dec(v___x_2589_);
lean_dec_ref(v_env_2588_);
lean_dec(v___x_2587_);
v___x_2592_ = l_List_reverse___redArg(v_a_2591_);
return v___x_2592_;
}
else
{
lean_object* v_head_2593_; lean_object* v_step_2594_; lean_object* v_tail_2595_; lean_object* v___x_2597_; uint8_t v_isShared_2598_; uint8_t v_isSharedCheck_2617_; 
v_head_2593_ = lean_ctor_get(v_a_2590_, 0);
lean_inc(v_head_2593_);
v_step_2594_ = lean_ctor_get(v_head_2593_, 5);
lean_inc_ref(v_step_2594_);
v_tail_2595_ = lean_ctor_get(v_a_2590_, 1);
v_isSharedCheck_2617_ = !lean_is_exclusive(v_a_2590_);
if (v_isSharedCheck_2617_ == 0)
{
lean_object* v_unused_2618_; 
v_unused_2618_ = lean_ctor_get(v_a_2590_, 0);
lean_dec(v_unused_2618_);
v___x_2597_ = v_a_2590_;
v_isShared_2598_ = v_isSharedCheck_2617_;
goto v_resetjp_2596_;
}
else
{
lean_inc(v_tail_2595_);
lean_dec(v_a_2590_);
v___x_2597_ = lean_box(0);
v_isShared_2598_ = v_isSharedCheck_2617_;
goto v_resetjp_2596_;
}
v_resetjp_2596_:
{
lean_object* v_kind_2599_; lean_object* v_label_2600_; lean_object* v_before_2601_; lean_object* v_op_2602_; uint8_t v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___y_2608_; 
v_kind_2599_ = lean_ctor_get(v_head_2593_, 3);
lean_inc_ref(v_kind_2599_);
v_label_2600_ = lean_ctor_get(v_head_2593_, 4);
lean_inc_ref(v_label_2600_);
v_before_2601_ = lean_ctor_get(v_head_2593_, 8);
lean_inc(v_before_2601_);
lean_dec(v_head_2593_);
v_op_2602_ = lean_ctor_get(v_step_2594_, 0);
lean_inc_ref_n(v_op_2602_, 2);
lean_dec_ref(v_step_2594_);
v___x_2603_ = 1;
lean_inc_n(v___x_2587_, 2);
v___x_2604_ = l_List_range(v___x_2587_);
v___x_2605_ = lean_box(0);
v___x_2606_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(v_op_2602_, v___x_2587_, v_before_2601_, v___x_2604_, v___x_2605_);
lean_dec(v_before_2601_);
if (lean_obj_tag(v_op_2602_) == 3)
{
lean_object* v_beats_2615_; 
v_beats_2615_ = lean_ctor_get(v_op_2602_, 4);
lean_inc(v_beats_2615_);
lean_dec_ref_known(v_op_2602_, 5);
v___y_2608_ = v_beats_2615_;
goto v___jp_2607_;
}
else
{
lean_object* v_beats_2616_; 
v_beats_2616_ = lean_ctor_get(v_op_2602_, 1);
lean_inc(v_beats_2616_);
lean_dec_ref(v_op_2602_);
v___y_2608_ = v_beats_2616_;
goto v___jp_2607_;
}
v___jp_2607_:
{
lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2612_; 
v___x_2609_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4___closed__0));
lean_inc(v___x_2589_);
lean_inc_ref(v_env_2588_);
v___x_2610_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_2610_, 0, v_label_2600_);
lean_ctor_set(v___x_2610_, 1, v_kind_2599_);
lean_ctor_set(v___x_2610_, 2, v___x_2606_);
lean_ctor_set(v___x_2610_, 3, v_env_2588_);
lean_ctor_set(v___x_2610_, 4, v___y_2608_);
lean_ctor_set(v___x_2610_, 5, v___x_2605_);
lean_ctor_set(v___x_2610_, 6, v___x_2605_);
lean_ctor_set(v___x_2610_, 7, v___x_2589_);
lean_ctor_set(v___x_2610_, 8, v___x_2609_);
lean_ctor_set_uint8(v___x_2610_, sizeof(void*)*9, v___x_2603_);
if (v_isShared_2598_ == 0)
{
lean_ctor_set(v___x_2597_, 1, v_a_2591_);
lean_ctor_set(v___x_2597_, 0, v___x_2610_);
v___x_2612_ = v___x_2597_;
goto v_reusejp_2611_;
}
else
{
lean_object* v_reuseFailAlloc_2614_; 
v_reuseFailAlloc_2614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2614_, 0, v___x_2610_);
lean_ctor_set(v_reuseFailAlloc_2614_, 1, v_a_2591_);
v___x_2612_ = v_reuseFailAlloc_2614_;
goto v_reusejp_2611_;
}
v_reusejp_2611_:
{
v_a_2590_ = v_tail_2595_;
v_a_2591_ = v___x_2612_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__6(lean_object* v_a_2619_, lean_object* v_a_2620_){
_start:
{
if (lean_obj_tag(v_a_2619_) == 0)
{
lean_object* v___x_2621_; 
v___x_2621_ = l_List_reverse___redArg(v_a_2620_);
return v___x_2621_;
}
else
{
lean_object* v_head_2622_; lean_object* v_tail_2623_; lean_object* v___x_2625_; uint8_t v_isShared_2626_; uint8_t v_isSharedCheck_2632_; 
v_head_2622_ = lean_ctor_get(v_a_2619_, 0);
v_tail_2623_ = lean_ctor_get(v_a_2619_, 1);
v_isSharedCheck_2632_ = !lean_is_exclusive(v_a_2619_);
if (v_isSharedCheck_2632_ == 0)
{
v___x_2625_ = v_a_2619_;
v_isShared_2626_ = v_isSharedCheck_2632_;
goto v_resetjp_2624_;
}
else
{
lean_inc(v_tail_2623_);
lean_inc(v_head_2622_);
lean_dec(v_a_2619_);
v___x_2625_ = lean_box(0);
v_isShared_2626_ = v_isSharedCheck_2632_;
goto v_resetjp_2624_;
}
v_resetjp_2624_:
{
lean_object* v_after_2627_; lean_object* v___x_2629_; 
v_after_2627_ = lean_ctor_get(v_head_2622_, 9);
lean_inc(v_after_2627_);
lean_dec(v_head_2622_);
if (v_isShared_2626_ == 0)
{
lean_ctor_set(v___x_2625_, 1, v_a_2620_);
lean_ctor_set(v___x_2625_, 0, v_after_2627_);
v___x_2629_ = v___x_2625_;
goto v_reusejp_2628_;
}
else
{
lean_object* v_reuseFailAlloc_2631_; 
v_reuseFailAlloc_2631_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2631_, 0, v_after_2627_);
lean_ctor_set(v_reuseFailAlloc_2631_, 1, v_a_2620_);
v___x_2629_ = v_reuseFailAlloc_2631_;
goto v_reusejp_2628_;
}
v_reusejp_2628_:
{
v_a_2619_ = v_tail_2623_;
v_a_2620_ = v___x_2629_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__8(lean_object* v_x_2633_, lean_object* v_x_2634_){
_start:
{
if (lean_obj_tag(v_x_2634_) == 0)
{
return v_x_2633_;
}
else
{
lean_object* v_head_2635_; lean_object* v_tail_2636_; lean_object* v___x_2638_; uint8_t v_isShared_2639_; uint8_t v_isSharedCheck_2650_; 
v_head_2635_ = lean_ctor_get(v_x_2634_, 0);
v_tail_2636_ = lean_ctor_get(v_x_2634_, 1);
v_isSharedCheck_2650_ = !lean_is_exclusive(v_x_2634_);
if (v_isSharedCheck_2650_ == 0)
{
v___x_2638_ = v_x_2634_;
v_isShared_2639_ = v_isSharedCheck_2650_;
goto v_resetjp_2637_;
}
else
{
lean_inc(v_tail_2636_);
lean_inc(v_head_2635_);
lean_dec(v_x_2634_);
v___x_2638_ = lean_box(0);
v_isShared_2639_ = v_isSharedCheck_2650_;
goto v_resetjp_2637_;
}
v_resetjp_2637_:
{
lean_object* v___x_2640_; lean_object* v___x_2641_; uint8_t v___x_2642_; 
v___x_2640_ = l_List_getLast_x3f___redArg(v_x_2633_);
lean_inc(v_head_2635_);
v___x_2641_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2641_, 0, v_head_2635_);
v___x_2642_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2640_, v___x_2641_);
lean_dec_ref_known(v___x_2641_, 1);
lean_dec(v___x_2640_);
if (v___x_2642_ == 0)
{
lean_object* v___x_2643_; lean_object* v___x_2645_; 
v___x_2643_ = lean_box(0);
if (v_isShared_2639_ == 0)
{
lean_ctor_set(v___x_2638_, 1, v___x_2643_);
v___x_2645_ = v___x_2638_;
goto v_reusejp_2644_;
}
else
{
lean_object* v_reuseFailAlloc_2648_; 
v_reuseFailAlloc_2648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2648_, 0, v_head_2635_);
lean_ctor_set(v_reuseFailAlloc_2648_, 1, v___x_2643_);
v___x_2645_ = v_reuseFailAlloc_2648_;
goto v_reusejp_2644_;
}
v_reusejp_2644_:
{
lean_object* v___x_2646_; 
v___x_2646_ = l_List_appendTR___redArg(v_x_2633_, v___x_2645_);
v_x_2633_ = v___x_2646_;
v_x_2634_ = v_tail_2636_;
goto _start;
}
}
else
{
lean_del_object(v___x_2638_);
lean_dec(v_head_2635_);
v_x_2634_ = v_tail_2636_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__0(lean_object* v_sp_2651_, lean_object* v_x_2652_, lean_object* v_x_2653_){
_start:
{
if (lean_obj_tag(v_x_2653_) == 0)
{
lean_dec_ref(v_sp_2651_);
return v_x_2652_;
}
else
{
lean_object* v_head_2654_; lean_object* v_tail_2655_; lean_object* v___x_2656_; 
v_head_2654_ = lean_ctor_get(v_x_2653_, 0);
lean_inc(v_head_2654_);
v_tail_2655_ = lean_ctor_get(v_x_2653_, 1);
lean_inc(v_tail_2655_);
lean_dec_ref_known(v_x_2653_, 2);
lean_inc_ref(v_sp_2651_);
v___x_2656_ = lp_choreo_Choreo_compileOp(v_sp_2651_, v_x_2652_, v_head_2654_);
v_x_2652_ = v___x_2656_;
v_x_2653_ = v_tail_2655_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(lean_object* v_x_2658_, lean_object* v_x_2659_){
_start:
{
if (lean_obj_tag(v_x_2659_) == 0)
{
return v_x_2658_;
}
else
{
lean_object* v_head_2660_; lean_object* v_tail_2661_; lean_object* v_x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; uint8_t v___x_2665_; 
v_head_2660_ = lean_ctor_get(v_x_2659_, 0);
v_tail_2661_ = lean_ctor_get(v_x_2659_, 1);
v_x_2662_ = lean_ctor_get(v_head_2660_, 0);
v___x_2663_ = lean_nat_abs(v_x_2662_);
v___x_2664_ = lean_nat_to_int(v___x_2663_);
v___x_2665_ = lean_int_dec_le(v_x_2658_, v___x_2664_);
if (v___x_2665_ == 0)
{
lean_object* v___x_2666_; 
lean_dec(v___x_2664_);
v___x_2666_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(v_x_2658_, v_tail_2661_);
return v___x_2666_;
}
else
{
lean_object* v___x_2667_; 
lean_dec(v_x_2658_);
v___x_2667_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(v___x_2664_, v_tail_2661_);
return v___x_2667_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3___boxed(lean_object* v_x_2668_, lean_object* v_x_2669_){
_start:
{
lean_object* v_res_2670_; 
v_res_2670_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(v_x_2668_, v_x_2669_);
lean_dec(v_x_2669_);
return v_res_2670_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__9(lean_object* v_a_2671_, lean_object* v_a_2672_){
_start:
{
if (lean_obj_tag(v_a_2671_) == 0)
{
lean_object* v___x_2673_; 
v___x_2673_ = l_List_reverse___redArg(v_a_2672_);
return v___x_2673_;
}
else
{
lean_object* v_head_2674_; lean_object* v_tail_2675_; lean_object* v___x_2677_; uint8_t v_isShared_2678_; uint8_t v_isSharedCheck_2702_; 
v_head_2674_ = lean_ctor_get(v_a_2671_, 0);
v_tail_2675_ = lean_ctor_get(v_a_2671_, 1);
v_isSharedCheck_2702_ = !lean_is_exclusive(v_a_2671_);
if (v_isSharedCheck_2702_ == 0)
{
v___x_2677_ = v_a_2671_;
v_isShared_2678_ = v_isSharedCheck_2702_;
goto v_resetjp_2676_;
}
else
{
lean_inc(v_tail_2675_);
lean_inc(v_head_2674_);
lean_dec(v_a_2671_);
v___x_2677_ = lean_box(0);
v_isShared_2678_ = v_isSharedCheck_2702_;
goto v_resetjp_2676_;
}
v_resetjp_2676_:
{
lean_object* v_name_2679_; lean_object* v_sectionName_2680_; lean_object* v_surface_2681_; lean_object* v_kind_2682_; lean_object* v_label_2683_; lean_object* v_step_2684_; lean_object* v_requiresText_2685_; lean_object* v_ensuresText_2686_; lean_object* v_before_2687_; lean_object* v_after_2688_; lean_object* v___x_2690_; uint8_t v_isShared_2691_; uint8_t v_isSharedCheck_2700_; 
v_name_2679_ = lean_ctor_get(v_head_2674_, 0);
v_sectionName_2680_ = lean_ctor_get(v_head_2674_, 1);
v_surface_2681_ = lean_ctor_get(v_head_2674_, 2);
v_kind_2682_ = lean_ctor_get(v_head_2674_, 3);
v_label_2683_ = lean_ctor_get(v_head_2674_, 4);
v_step_2684_ = lean_ctor_get(v_head_2674_, 5);
v_requiresText_2685_ = lean_ctor_get(v_head_2674_, 6);
v_ensuresText_2686_ = lean_ctor_get(v_head_2674_, 7);
v_before_2687_ = lean_ctor_get(v_head_2674_, 8);
v_after_2688_ = lean_ctor_get(v_head_2674_, 9);
v_isSharedCheck_2700_ = !lean_is_exclusive(v_head_2674_);
if (v_isSharedCheck_2700_ == 0)
{
lean_object* v_unused_2701_; 
v_unused_2701_ = lean_ctor_get(v_head_2674_, 10);
lean_dec(v_unused_2701_);
v___x_2690_ = v_head_2674_;
v_isShared_2691_ = v_isSharedCheck_2700_;
goto v_resetjp_2689_;
}
else
{
lean_inc(v_after_2688_);
lean_inc(v_before_2687_);
lean_inc(v_ensuresText_2686_);
lean_inc(v_requiresText_2685_);
lean_inc(v_step_2684_);
lean_inc(v_label_2683_);
lean_inc(v_kind_2682_);
lean_inc(v_surface_2681_);
lean_inc(v_sectionName_2680_);
lean_inc(v_name_2679_);
lean_dec(v_head_2674_);
v___x_2690_ = lean_box(0);
v_isShared_2691_ = v_isSharedCheck_2700_;
goto v_resetjp_2689_;
}
v_resetjp_2689_:
{
lean_object* v___x_2692_; lean_object* v___x_2694_; 
v___x_2692_ = lean_box(0);
if (v_isShared_2691_ == 0)
{
lean_ctor_set(v___x_2690_, 10, v___x_2692_);
v___x_2694_ = v___x_2690_;
goto v_reusejp_2693_;
}
else
{
lean_object* v_reuseFailAlloc_2699_; 
v_reuseFailAlloc_2699_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2699_, 0, v_name_2679_);
lean_ctor_set(v_reuseFailAlloc_2699_, 1, v_sectionName_2680_);
lean_ctor_set(v_reuseFailAlloc_2699_, 2, v_surface_2681_);
lean_ctor_set(v_reuseFailAlloc_2699_, 3, v_kind_2682_);
lean_ctor_set(v_reuseFailAlloc_2699_, 4, v_label_2683_);
lean_ctor_set(v_reuseFailAlloc_2699_, 5, v_step_2684_);
lean_ctor_set(v_reuseFailAlloc_2699_, 6, v_requiresText_2685_);
lean_ctor_set(v_reuseFailAlloc_2699_, 7, v_ensuresText_2686_);
lean_ctor_set(v_reuseFailAlloc_2699_, 8, v_before_2687_);
lean_ctor_set(v_reuseFailAlloc_2699_, 9, v_after_2688_);
lean_ctor_set(v_reuseFailAlloc_2699_, 10, v___x_2692_);
v___x_2694_ = v_reuseFailAlloc_2699_;
goto v_reusejp_2693_;
}
v_reusejp_2693_:
{
lean_object* v___x_2696_; 
if (v_isShared_2678_ == 0)
{
lean_ctor_set(v___x_2677_, 1, v_a_2672_);
lean_ctor_set(v___x_2677_, 0, v___x_2694_);
v___x_2696_ = v___x_2677_;
goto v_reusejp_2695_;
}
else
{
lean_object* v_reuseFailAlloc_2698_; 
v_reuseFailAlloc_2698_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2698_, 0, v___x_2694_);
lean_ctor_set(v_reuseFailAlloc_2698_, 1, v_a_2672_);
v___x_2696_ = v_reuseFailAlloc_2698_;
goto v_reusejp_2695_;
}
v_reusejp_2695_:
{
v_a_2671_ = v_tail_2675_;
v_a_2672_ = v___x_2696_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildProgram_spec__2(lean_object* v_a_2703_, lean_object* v_a_2704_){
_start:
{
if (lean_obj_tag(v_a_2703_) == 0)
{
lean_object* v___x_2705_; 
v___x_2705_ = lean_array_to_list(v_a_2704_);
return v___x_2705_;
}
else
{
lean_object* v_head_2706_; lean_object* v_tail_2707_; lean_object* v_before_2708_; lean_object* v_after_2709_; lean_object* v___x_2710_; lean_object* v___x_2711_; 
v_head_2706_ = lean_ctor_get(v_a_2703_, 0);
lean_inc(v_head_2706_);
v_tail_2707_ = lean_ctor_get(v_a_2703_, 1);
lean_inc(v_tail_2707_);
lean_dec_ref_known(v_a_2703_, 2);
v_before_2708_ = lean_ctor_get(v_head_2706_, 8);
lean_inc(v_before_2708_);
v_after_2709_ = lean_ctor_get(v_head_2706_, 9);
lean_inc(v_after_2709_);
lean_dec(v_head_2706_);
v___x_2710_ = l_List_appendTR___redArg(v_before_2708_, v_after_2709_);
v___x_2711_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2704_, v___x_2710_);
v_a_2703_ = v_tail_2707_;
v_a_2704_ = v___x_2711_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(lean_object* v_a_2713_, lean_object* v_a_2714_){
_start:
{
if (lean_obj_tag(v_a_2713_) == 0)
{
lean_object* v___x_2715_; 
v___x_2715_ = l_List_reverse___redArg(v_a_2714_);
return v___x_2715_;
}
else
{
lean_object* v_head_2716_; lean_object* v_tail_2717_; lean_object* v___x_2719_; uint8_t v_isShared_2720_; uint8_t v_isSharedCheck_2726_; 
v_head_2716_ = lean_ctor_get(v_a_2713_, 0);
v_tail_2717_ = lean_ctor_get(v_a_2713_, 1);
v_isSharedCheck_2726_ = !lean_is_exclusive(v_a_2713_);
if (v_isSharedCheck_2726_ == 0)
{
v___x_2719_ = v_a_2713_;
v_isShared_2720_ = v_isSharedCheck_2726_;
goto v_resetjp_2718_;
}
else
{
lean_inc(v_tail_2717_);
lean_inc(v_head_2716_);
lean_dec(v_a_2713_);
v___x_2719_ = lean_box(0);
v_isShared_2720_ = v_isSharedCheck_2726_;
goto v_resetjp_2718_;
}
v_resetjp_2718_:
{
lean_object* v_name_2721_; lean_object* v___x_2723_; 
v_name_2721_ = lean_ctor_get(v_head_2716_, 0);
lean_inc_ref(v_name_2721_);
lean_dec(v_head_2716_);
if (v_isShared_2720_ == 0)
{
lean_ctor_set(v___x_2719_, 1, v_a_2714_);
lean_ctor_set(v___x_2719_, 0, v_name_2721_);
v___x_2723_ = v___x_2719_;
goto v_reusejp_2722_;
}
else
{
lean_object* v_reuseFailAlloc_2725_; 
v_reuseFailAlloc_2725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2725_, 0, v_name_2721_);
lean_ctor_set(v_reuseFailAlloc_2725_, 1, v_a_2714_);
v___x_2723_ = v_reuseFailAlloc_2725_;
goto v_reusejp_2722_;
}
v_reusejp_2722_:
{
v_a_2713_ = v_tail_2717_;
v_a_2714_ = v___x_2723_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___redArg(lean_object* v_sp_2729_){
_start:
{
lean_object* v___y_2731_; lean_object* v___y_2732_; lean_object* v___y_2733_; lean_object* v___y_2734_; lean_object* v___y_2735_; lean_object* v___y_2736_; lean_object* v___y_2737_; lean_object* v___y_2738_; lean_object* v___y_2739_; lean_object* v___y_2740_; lean_object* v___y_2741_; lean_object* v___y_2742_; lean_object* v___y_2743_; lean_object* v___y_2744_; uint8_t v___y_2745_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; uint8_t v___y_2756_; lean_object* v___y_2757_; lean_object* v___y_2758_; lean_object* v___y_2759_; lean_object* v___y_2760_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v___y_2783_; lean_object* v___y_2784_; lean_object* v___y_2785_; uint8_t v___y_2786_; lean_object* v___y_2787_; lean_object* v___y_2788_; lean_object* v___y_2789_; lean_object* v___y_2790_; lean_object* v___y_2791_; lean_object* v___y_2792_; lean_object* v___y_2793_; lean_object* v___y_2794_; lean_object* v___y_2795_; lean_object* v___y_2801_; lean_object* v___y_2802_; lean_object* v___y_2803_; lean_object* v___y_2804_; lean_object* v___y_2805_; lean_object* v___y_2806_; lean_object* v___y_2807_; lean_object* v___y_2808_; uint8_t v___y_2809_; lean_object* v___y_2810_; lean_object* v___y_2811_; lean_object* v___y_2812_; lean_object* v___y_2813_; lean_object* v___y_2814_; lean_object* v___y_2815_; lean_object* v___y_2816_; lean_object* v___y_2822_; lean_object* v___y_2823_; lean_object* v___y_2824_; lean_object* v___y_2825_; lean_object* v___y_2826_; lean_object* v___y_2827_; lean_object* v___y_2828_; lean_object* v___y_2829_; uint8_t v___y_2830_; lean_object* v___y_2831_; lean_object* v___y_2832_; lean_object* v___y_2833_; lean_object* v___y_2834_; lean_object* v___y_2835_; lean_object* v___y_2836_; lean_object* v___y_2859_; lean_object* v___y_2860_; lean_object* v___y_2861_; lean_object* v___y_2862_; lean_object* v___y_2863_; lean_object* v___y_2864_; lean_object* v___y_2865_; lean_object* v___y_2866_; lean_object* v___y_2867_; lean_object* v___y_2868_; lean_object* v___y_2869_; lean_object* v___y_2870_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2886_; lean_object* v___y_2887_; lean_object* v___y_2888_; lean_object* v___y_2892_; lean_object* v___y_2893_; lean_object* v___y_2894_; lean_object* v___y_2895_; lean_object* v___y_2896_; lean_object* v___y_2897_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2916_; lean_object* v_n_2921_; lean_object* v_bpm_2922_; lean_object* v_gap_2923_; lean_object* v_genre_2924_; lean_object* v_start_2925_; lean_object* v_startPlaces_2926_; lean_object* v_ops_2927_; lean_object* v_transform_2928_; lean_object* v___y_2930_; 
v_n_2921_ = lean_ctor_get(v_sp_2729_, 1);
lean_inc(v_n_2921_);
v_bpm_2922_ = lean_ctor_get(v_sp_2729_, 2);
lean_inc(v_bpm_2922_);
v_gap_2923_ = lean_ctor_get(v_sp_2729_, 3);
lean_inc(v_gap_2923_);
v_genre_2924_ = lean_ctor_get(v_sp_2729_, 4);
lean_inc_ref(v_genre_2924_);
v_start_2925_ = lean_ctor_get(v_sp_2729_, 5);
v_startPlaces_2926_ = lean_ctor_get(v_sp_2729_, 6);
v_ops_2927_ = lean_ctor_get(v_sp_2729_, 7);
lean_inc(v_ops_2927_);
v_transform_2928_ = lean_ctor_get(v_sp_2729_, 8);
lean_inc_ref(v_transform_2928_);
if (lean_obj_tag(v_startPlaces_2926_) == 0)
{
lean_object* v___x_2939_; 
lean_inc(v_n_2921_);
v___x_2939_ = lp_choreo_Choreo_namedPlaces(v_start_2925_, v_n_2921_, v_gap_2923_);
v___y_2930_ = v___x_2939_;
goto v___jp_2929_;
}
else
{
lean_object* v_val_2940_; 
v_val_2940_ = lean_ctor_get(v_startPlaces_2926_, 0);
lean_inc(v_val_2940_);
v___y_2930_ = v_val_2940_;
goto v___jp_2929_;
}
v___jp_2730_:
{
lean_object* v___x_2746_; lean_object* v___x_2747_; 
lean_inc(v___y_2731_);
lean_inc(v___y_2736_);
v___x_2746_ = lean_alloc_ctor(0, 13, 1);
lean_ctor_set(v___x_2746_, 0, v___y_2733_);
lean_ctor_set(v___x_2746_, 1, v___y_2741_);
lean_ctor_set(v___x_2746_, 2, v___y_2735_);
lean_ctor_set(v___x_2746_, 3, v___y_2744_);
lean_ctor_set(v___x_2746_, 4, v___y_2740_);
lean_ctor_set(v___x_2746_, 5, v___y_2738_);
lean_ctor_set(v___x_2746_, 6, v___y_2736_);
lean_ctor_set(v___x_2746_, 7, v___y_2731_);
lean_ctor_set(v___x_2746_, 8, v___y_2743_);
lean_ctor_set(v___x_2746_, 9, v___y_2739_);
lean_ctor_set(v___x_2746_, 10, v___y_2734_);
lean_ctor_set(v___x_2746_, 11, v___y_2742_);
lean_ctor_set(v___x_2746_, 12, v___y_2737_);
lean_ctor_set_uint8(v___x_2746_, sizeof(void*)*13, v___y_2745_);
v___x_2747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2747_, 0, v___x_2746_);
lean_ctor_set(v___x_2747_, 1, v___y_2732_);
return v___x_2747_;
}
v___jp_2748_:
{
lean_object* v___x_2765_; uint8_t v___x_2766_; lean_object* v_plan_2767_; lean_object* v___x_2768_; lean_object* v___x_2769_; lean_object* v___x_2770_; lean_object* v___x_2771_; lean_object* v___x_2772_; lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; 
v___x_2765_ = lean_box(0);
v___x_2766_ = 0;
lean_inc_n(v___y_2751_, 3);
lean_inc_ref(v___y_2764_);
lean_inc(v___y_2762_);
v_plan_2767_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_plan_2767_, 0, v___y_2762_);
lean_ctor_set(v_plan_2767_, 1, v___y_2750_);
lean_ctor_set(v_plan_2767_, 2, v___y_2764_);
lean_ctor_set(v_plan_2767_, 3, v___y_2757_);
lean_ctor_set(v_plan_2767_, 4, v___y_2751_);
lean_ctor_set(v_plan_2767_, 5, v___y_2751_);
lean_ctor_set(v_plan_2767_, 6, v___x_2765_);
lean_ctor_set(v_plan_2767_, 7, v___x_2765_);
lean_ctor_set(v_plan_2767_, 8, v___y_2752_);
lean_ctor_set(v_plan_2767_, 9, v___x_2765_);
lean_ctor_set(v_plan_2767_, 10, v___y_2751_);
lean_ctor_set_uint8(v_plan_2767_, sizeof(void*)*11, v___x_2766_);
lean_inc_ref(v___y_2758_);
v___x_2768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2768_, 0, v___y_2758_);
lean_ctor_set(v___x_2768_, 1, v___y_2753_);
v___x_2769_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildPlanOnce_spec__7(v___y_2754_, v___x_2765_);
v___x_2770_ = lean_box(0);
v___x_2771_ = l_List_lengthTR___redArg(v___y_2749_);
v___x_2772_ = l_List_range(v___x_2771_);
v___x_2773_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2773_, 0, v___y_2761_);
lean_ctor_set(v___x_2773_, 1, v___x_2765_);
lean_ctor_set(v___x_2773_, 2, v___y_2763_);
lean_ctor_set(v___x_2773_, 3, v___y_2759_);
lean_ctor_set(v___x_2773_, 4, v___y_2762_);
lean_ctor_set(v___x_2773_, 5, v___x_2765_);
lean_ctor_set(v___x_2773_, 6, v___y_2764_);
lean_ctor_set(v___x_2773_, 7, v___x_2772_);
lean_ctor_set(v___x_2773_, 8, v___x_2765_);
v___x_2774_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2774_, 0, v___x_2773_);
lean_inc(v___y_2749_);
v___x_2775_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(v___y_2749_, v___x_2765_);
v___x_2776_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__8(v___x_2765_, v___x_2775_);
if (v___y_2756_ == 0)
{
uint8_t v___x_2777_; 
lean_inc(v___y_2749_);
v___x_2777_ = lp_choreo_Choreo_buildProgram_allOk(v___y_2758_, v___y_2749_, v___y_2760_);
v___y_2731_ = v___x_2770_;
v___y_2732_ = v___y_2749_;
v___y_2733_ = v_plan_2767_;
v___y_2734_ = v___y_2751_;
v___y_2735_ = v___x_2769_;
v___y_2736_ = v___x_2770_;
v___y_2737_ = v___y_2755_;
v___y_2738_ = v___x_2765_;
v___y_2739_ = v___x_2776_;
v___y_2740_ = v___x_2765_;
v___y_2741_ = v___x_2768_;
v___y_2742_ = v___x_2765_;
v___y_2743_ = v___x_2774_;
v___y_2744_ = v___x_2765_;
v___y_2745_ = v___x_2777_;
goto v___jp_2730_;
}
else
{
lean_dec(v___y_2760_);
lean_dec_ref(v___y_2758_);
v___y_2731_ = v___x_2770_;
v___y_2732_ = v___y_2749_;
v___y_2733_ = v_plan_2767_;
v___y_2734_ = v___y_2751_;
v___y_2735_ = v___x_2769_;
v___y_2736_ = v___x_2770_;
v___y_2737_ = v___y_2755_;
v___y_2738_ = v___x_2765_;
v___y_2739_ = v___x_2776_;
v___y_2740_ = v___x_2765_;
v___y_2741_ = v___x_2768_;
v___y_2742_ = v___x_2765_;
v___y_2743_ = v___x_2774_;
v___y_2744_ = v___x_2765_;
v___y_2745_ = v___x_2766_;
goto v___jp_2730_;
}
}
v___jp_2778_:
{
lean_object* v___x_2796_; lean_object* v___x_2797_; uint8_t v___x_2798_; 
v___x_2796_ = lean_nat_div(v___y_2784_, v___y_2795_);
lean_dec(v___y_2795_);
lean_dec(v___y_2784_);
v___x_2797_ = lean_string_utf8_byte_size(v___y_2789_);
v___x_2798_ = lean_nat_dec_eq(v___x_2797_, v___y_2780_);
if (v___x_2798_ == 0)
{
v___y_2749_ = v___y_2779_;
v___y_2750_ = v___x_2796_;
v___y_2751_ = v___y_2780_;
v___y_2752_ = v___y_2781_;
v___y_2753_ = v___y_2782_;
v___y_2754_ = v___y_2783_;
v___y_2755_ = v___y_2785_;
v___y_2756_ = v___y_2786_;
v___y_2757_ = v___y_2787_;
v___y_2758_ = v___y_2788_;
v___y_2759_ = v___y_2790_;
v___y_2760_ = v___y_2791_;
v___y_2761_ = v___y_2792_;
v___y_2762_ = v___y_2794_;
v___y_2763_ = v___y_2793_;
v___y_2764_ = v___y_2789_;
goto v___jp_2748_;
}
else
{
lean_object* v___x_2799_; 
lean_dec_ref(v___y_2789_);
v___x_2799_ = ((lean_object*)(lp_choreo_Choreo_buildProgram___redArg___closed__0));
v___y_2749_ = v___y_2779_;
v___y_2750_ = v___x_2796_;
v___y_2751_ = v___y_2780_;
v___y_2752_ = v___y_2781_;
v___y_2753_ = v___y_2782_;
v___y_2754_ = v___y_2783_;
v___y_2755_ = v___y_2785_;
v___y_2756_ = v___y_2786_;
v___y_2757_ = v___y_2787_;
v___y_2758_ = v___y_2788_;
v___y_2759_ = v___y_2790_;
v___y_2760_ = v___y_2791_;
v___y_2761_ = v___y_2792_;
v___y_2762_ = v___y_2794_;
v___y_2763_ = v___y_2793_;
v___y_2764_ = v___x_2799_;
goto v___jp_2748_;
}
}
v___jp_2800_:
{
lean_object* v___x_2817_; lean_object* v___x_2818_; lean_object* v_frames_2819_; uint8_t v___x_2820_; 
v___x_2817_ = lean_box(0);
lean_inc(v___y_2801_);
v___x_2818_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__6(v___y_2801_, v___x_2817_);
lean_inc(v___y_2816_);
v_frames_2819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_frames_2819_, 0, v___y_2816_);
lean_ctor_set(v_frames_2819_, 1, v___x_2818_);
v___x_2820_ = lean_nat_dec_le(v___y_2808_, v___y_2814_);
if (v___x_2820_ == 0)
{
v___y_2779_ = v___y_2801_;
v___y_2780_ = v___y_2802_;
v___y_2781_ = v___y_2803_;
v___y_2782_ = v___y_2804_;
v___y_2783_ = v___y_2805_;
v___y_2784_ = v___y_2806_;
v___y_2785_ = v___y_2807_;
v___y_2786_ = v___y_2809_;
v___y_2787_ = v___y_2810_;
v___y_2788_ = v___y_2811_;
v___y_2789_ = v___y_2812_;
v___y_2790_ = v___y_2813_;
v___y_2791_ = v___y_2816_;
v___y_2792_ = v_frames_2819_;
v___y_2793_ = v___y_2815_;
v___y_2794_ = v___y_2814_;
v___y_2795_ = v___y_2808_;
goto v___jp_2778_;
}
else
{
lean_dec(v___y_2808_);
lean_inc(v___y_2814_);
v___y_2779_ = v___y_2801_;
v___y_2780_ = v___y_2802_;
v___y_2781_ = v___y_2803_;
v___y_2782_ = v___y_2804_;
v___y_2783_ = v___y_2805_;
v___y_2784_ = v___y_2806_;
v___y_2785_ = v___y_2807_;
v___y_2786_ = v___y_2809_;
v___y_2787_ = v___y_2810_;
v___y_2788_ = v___y_2811_;
v___y_2789_ = v___y_2812_;
v___y_2790_ = v___y_2813_;
v___y_2791_ = v___y_2816_;
v___y_2792_ = v_frames_2819_;
v___y_2793_ = v___y_2815_;
v___y_2794_ = v___y_2814_;
v___y_2795_ = v___y_2814_;
goto v___jp_2778_;
}
}
v___jp_2821_:
{
lean_object* v_every_2837_; lean_object* v___x_2838_; lean_object* v_wide_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; lean_object* v___x_2844_; lean_object* v_env_2845_; lean_object* v___x_2846_; lean_object* v___x_2847_; lean_object* v___x_2848_; lean_object* v_cfg_2849_; lean_object* v___x_2850_; lean_object* v_drafts_2851_; lean_object* v___x_2852_; lean_object* v___x_2853_; lean_object* v_fst_2854_; lean_object* v___x_2855_; 
v_every_2837_ = l_List_appendTR___redArg(v___y_2833_, v___y_2836_);
v___x_2838_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__2, &lp_choreo_Choreo_evenLanes___closed__2_once, _init_lp_choreo_Choreo_evenLanes___closed__2);
v_wide_2839_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(v___x_2838_, v_every_2837_);
lean_dec(v_every_2837_);
v___x_2840_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_2841_ = lean_int_add(v_wide_2839_, v___x_2840_);
lean_dec(v_wide_2839_);
v___x_2842_ = lean_int_neg(v___x_2841_);
lean_inc_n(v___y_2823_, 2);
v___x_2843_ = lean_nat_to_int(v___y_2823_);
v___x_2844_ = lean_obj_once(&lp_choreo_Choreo_Pt_mapT___closed__2, &lp_choreo_Choreo_Pt_mapT___closed__2_once, _init_lp_choreo_Choreo_Pt_mapT___closed__2);
lean_inc(v___x_2843_);
v_env_2845_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_env_2845_, 0, v___x_2842_);
lean_ctor_set(v_env_2845_, 1, v___x_2841_);
lean_ctor_set(v_env_2845_, 2, v___x_2843_);
lean_ctor_set(v_env_2845_, 3, v___x_2844_);
v___x_2846_ = lp_choreo_Choreo_vmaxMM;
v___x_2847_ = lean_unsigned_to_nat(4u);
v___x_2848_ = lean_nat_mul(v___y_2827_, v___x_2847_);
lean_dec(v___y_2827_);
lean_inc_n(v___y_2834_, 2);
lean_inc(v___y_2826_);
lean_inc_ref(v_env_2845_);
lean_inc_n(v___y_2824_, 2);
lean_inc_n(v___y_2828_, 3);
v_cfg_2849_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_cfg_2849_, 0, v___y_2828_);
lean_ctor_set(v_cfg_2849_, 1, v___y_2824_);
lean_ctor_set(v_cfg_2849_, 2, v___x_2846_);
lean_ctor_set(v_cfg_2849_, 3, v_env_2845_);
lean_ctor_set(v_cfg_2849_, 4, v___x_2847_);
lean_ctor_set(v_cfg_2849_, 5, v___y_2826_);
lean_ctor_set(v_cfg_2849_, 6, v___y_2834_);
lean_ctor_set(v_cfg_2849_, 7, v___x_2848_);
lean_ctor_set(v_cfg_2849_, 8, v___y_2834_);
v___x_2850_ = lean_box(0);
lean_inc(v___y_2822_);
v_drafts_2851_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4(v___y_2828_, v_env_2845_, v___y_2824_, v___y_2822_, v___x_2850_);
v___x_2852_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2852_, 0, v___x_2850_);
lean_ctor_set(v___x_2852_, 1, v___y_2823_);
lean_inc(v_drafts_2851_);
v___x_2853_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__5(v___y_2828_, v___x_2852_, v_drafts_2851_);
v_fst_2854_ = lean_ctor_get(v___x_2853_, 0);
lean_inc(v_fst_2854_);
lean_dec_ref(v___x_2853_);
v___x_2855_ = l_List_head_x3f___redArg(v___y_2822_);
if (lean_obj_tag(v___x_2855_) == 0)
{
v___y_2801_ = v___y_2822_;
v___y_2802_ = v___y_2823_;
v___y_2803_ = v___y_2824_;
v___y_2804_ = v_fst_2854_;
v___y_2805_ = v_drafts_2851_;
v___y_2806_ = v___y_2826_;
v___y_2807_ = v___x_2843_;
v___y_2808_ = v___y_2829_;
v___y_2809_ = v___y_2830_;
v___y_2810_ = v___y_2828_;
v___y_2811_ = v_cfg_2849_;
v___y_2812_ = v___y_2831_;
v___y_2813_ = v___y_2832_;
v___y_2814_ = v___y_2834_;
v___y_2815_ = v___y_2835_;
v___y_2816_ = v___y_2825_;
goto v___jp_2800_;
}
else
{
lean_object* v_val_2856_; lean_object* v_before_2857_; 
lean_dec(v___y_2825_);
v_val_2856_ = lean_ctor_get(v___x_2855_, 0);
lean_inc(v_val_2856_);
lean_dec_ref_known(v___x_2855_, 1);
v_before_2857_ = lean_ctor_get(v_val_2856_, 8);
lean_inc(v_before_2857_);
lean_dec(v_val_2856_);
v___y_2801_ = v___y_2822_;
v___y_2802_ = v___y_2823_;
v___y_2803_ = v___y_2824_;
v___y_2804_ = v_fst_2854_;
v___y_2805_ = v_drafts_2851_;
v___y_2806_ = v___y_2826_;
v___y_2807_ = v___x_2843_;
v___y_2808_ = v___y_2829_;
v___y_2809_ = v___y_2830_;
v___y_2810_ = v___y_2828_;
v___y_2811_ = v_cfg_2849_;
v___y_2812_ = v___y_2831_;
v___y_2813_ = v___y_2832_;
v___y_2814_ = v___y_2834_;
v___y_2815_ = v___y_2835_;
v___y_2816_ = v_before_2857_;
goto v___jp_2800_;
}
}
v___jp_2858_:
{
lean_object* v___x_2871_; lean_object* v___x_2872_; uint8_t v___x_2873_; 
v___x_2871_ = lean_mk_empty_array_with_capacity(v___y_2863_);
lean_inc(v___y_2861_);
v___x_2872_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildProgram_spec__2(v___y_2861_, v___x_2871_);
v___x_2873_ = l_List_isEmpty___redArg(v___y_2861_);
if (v___x_2873_ == 0)
{
lean_object* v___x_2874_; 
v___x_2874_ = lean_box(0);
v___y_2822_ = v___y_2861_;
v___y_2823_ = v___y_2863_;
v___y_2824_ = v___y_2862_;
v___y_2825_ = v___y_2864_;
v___y_2826_ = v___y_2866_;
v___y_2827_ = v___y_2868_;
v___y_2828_ = v___y_2860_;
v___y_2829_ = v___y_2859_;
v___y_2830_ = v___x_2873_;
v___y_2831_ = v___y_2865_;
v___y_2832_ = v___y_2867_;
v___y_2833_ = v___x_2872_;
v___y_2834_ = v___y_2870_;
v___y_2835_ = v___y_2869_;
v___y_2836_ = v___x_2874_;
goto v___jp_2821_;
}
else
{
lean_inc(v___y_2864_);
v___y_2822_ = v___y_2861_;
v___y_2823_ = v___y_2863_;
v___y_2824_ = v___y_2862_;
v___y_2825_ = v___y_2864_;
v___y_2826_ = v___y_2866_;
v___y_2827_ = v___y_2868_;
v___y_2828_ = v___y_2860_;
v___y_2829_ = v___y_2859_;
v___y_2830_ = v___x_2873_;
v___y_2831_ = v___y_2865_;
v___y_2832_ = v___y_2867_;
v___y_2833_ = v___x_2872_;
v___y_2834_ = v___y_2870_;
v___y_2835_ = v___y_2869_;
v___y_2836_ = v___y_2864_;
goto v___jp_2821_;
}
}
v___jp_2875_:
{
lean_object* v___x_2889_; uint8_t v___x_2890_; 
v___x_2889_ = lean_nat_div(v___y_2884_, v___y_2888_);
lean_dec(v___y_2888_);
lean_dec(v___y_2884_);
v___x_2890_ = lean_nat_dec_le(v___y_2877_, v___x_2889_);
if (v___x_2890_ == 0)
{
lean_dec(v___x_2889_);
lean_inc(v___y_2877_);
v___y_2859_ = v___y_2877_;
v___y_2860_ = v___y_2876_;
v___y_2861_ = v___y_2878_;
v___y_2862_ = v___y_2880_;
v___y_2863_ = v___y_2879_;
v___y_2864_ = v___y_2881_;
v___y_2865_ = v___y_2882_;
v___y_2866_ = v___y_2883_;
v___y_2867_ = v___y_2885_;
v___y_2868_ = v___y_2886_;
v___y_2869_ = v___y_2887_;
v___y_2870_ = v___y_2877_;
goto v___jp_2858_;
}
else
{
v___y_2859_ = v___y_2877_;
v___y_2860_ = v___y_2876_;
v___y_2861_ = v___y_2878_;
v___y_2862_ = v___y_2880_;
v___y_2863_ = v___y_2879_;
v___y_2864_ = v___y_2881_;
v___y_2865_ = v___y_2882_;
v___y_2866_ = v___y_2883_;
v___y_2867_ = v___y_2885_;
v___y_2868_ = v___y_2886_;
v___y_2869_ = v___y_2887_;
v___y_2870_ = v___x_2889_;
goto v___jp_2858_;
}
}
v___jp_2891_:
{
lean_object* v___x_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v_beats_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; uint8_t v___x_2907_; 
v___x_2898_ = lean_unsigned_to_nat(0u);
v___x_2899_ = lean_box(0);
lean_inc(v___y_2897_);
v___x_2900_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__1(v___y_2897_, v___x_2899_);
v_beats_2901_ = lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(v___x_2898_, v___x_2900_);
v___x_2902_ = lean_unsigned_to_nat(1u);
v___x_2903_ = lean_unsigned_to_nat(60u);
v___x_2904_ = lean_nat_mul(v_beats_2901_, v___x_2903_);
v___x_2905_ = lean_nat_shiftr(v___y_2892_, v___x_2902_);
v___x_2906_ = lean_nat_add(v___x_2904_, v___x_2905_);
lean_dec(v___x_2905_);
v___x_2907_ = lean_nat_dec_le(v___x_2902_, v___y_2892_);
if (v___x_2907_ == 0)
{
lean_dec(v___y_2892_);
v___y_2876_ = v___y_2893_;
v___y_2877_ = v___x_2902_;
v___y_2878_ = v___y_2897_;
v___y_2879_ = v___x_2898_;
v___y_2880_ = v___y_2894_;
v___y_2881_ = v___y_2895_;
v___y_2882_ = v___y_2896_;
v___y_2883_ = v___x_2904_;
v___y_2884_ = v___x_2906_;
v___y_2885_ = v___x_2900_;
v___y_2886_ = v_beats_2901_;
v___y_2887_ = v___x_2899_;
v___y_2888_ = v___x_2902_;
goto v___jp_2875_;
}
else
{
v___y_2876_ = v___y_2893_;
v___y_2877_ = v___x_2902_;
v___y_2878_ = v___y_2897_;
v___y_2879_ = v___x_2898_;
v___y_2880_ = v___y_2894_;
v___y_2881_ = v___y_2895_;
v___y_2882_ = v___y_2896_;
v___y_2883_ = v___x_2904_;
v___y_2884_ = v___x_2906_;
v___y_2885_ = v___x_2900_;
v___y_2886_ = v_beats_2901_;
v___y_2887_ = v___x_2899_;
v___y_2888_ = v___y_2892_;
goto v___jp_2875_;
}
}
v___jp_2908_:
{
lean_object* v___x_2917_; lean_object* v___x_2918_; uint8_t v___x_2919_; 
v___x_2917_ = lean_string_utf8_byte_size(v___y_2914_);
lean_dec_ref(v___y_2914_);
v___x_2918_ = lean_unsigned_to_nat(0u);
v___x_2919_ = lean_nat_dec_eq(v___x_2917_, v___x_2918_);
if (v___x_2919_ == 0)
{
lean_object* v___x_2920_; 
lean_inc(v___y_2913_);
v___x_2920_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__9(v___y_2916_, v___y_2913_);
v___y_2892_ = v___y_2909_;
v___y_2893_ = v___y_2910_;
v___y_2894_ = v___y_2911_;
v___y_2895_ = v___y_2912_;
v___y_2896_ = v___y_2915_;
v___y_2897_ = v___x_2920_;
goto v___jp_2891_;
}
else
{
v___y_2892_ = v___y_2909_;
v___y_2893_ = v___y_2910_;
v___y_2894_ = v___y_2911_;
v___y_2895_ = v___y_2912_;
v___y_2896_ = v___y_2915_;
v___y_2897_ = v___y_2916_;
goto v___jp_2891_;
}
}
v___jp_2929_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; lean_object* v___x_2933_; lean_object* v_steps_2934_; lean_object* v___x_2935_; uint8_t v___x_2936_; 
v___x_2931_ = lean_box(0);
lean_inc(v___y_2930_);
v___x_2932_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2932_, 0, v___y_2930_);
lean_ctor_set(v___x_2932_, 1, v___x_2931_);
v___x_2933_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__0(v_sp_2729_, v___x_2932_, v_ops_2927_);
v_steps_2934_ = lean_ctor_get(v___x_2933_, 1);
lean_inc(v_steps_2934_);
lean_dec_ref(v___x_2933_);
v___x_2935_ = ((lean_object*)(lp_choreo_Choreo_buildProgram___redArg___closed__1));
v___x_2936_ = lean_string_dec_eq(v_transform_2928_, v___x_2935_);
if (v___x_2936_ == 0)
{
lean_object* v___x_2937_; 
v___x_2937_ = lp_choreo_Choreo_applyTransform___redArg(v_transform_2928_, v_steps_2934_);
v___y_2909_ = v_bpm_2922_;
v___y_2910_ = v_n_2921_;
v___y_2911_ = v_gap_2923_;
v___y_2912_ = v___y_2930_;
v___y_2913_ = v___x_2931_;
v___y_2914_ = v_transform_2928_;
v___y_2915_ = v_genre_2924_;
v___y_2916_ = v___x_2937_;
goto v___jp_2908_;
}
else
{
lean_object* v___x_2938_; 
v___x_2938_ = lp_choreo_Choreo_reverseSteps___redArg(v_steps_2934_);
v___y_2909_ = v_bpm_2922_;
v___y_2910_ = v_n_2921_;
v___y_2911_ = v_gap_2923_;
v___y_2912_ = v___y_2930_;
v___y_2913_ = v___x_2931_;
v___y_2914_ = v_transform_2928_;
v___y_2915_ = v_genre_2924_;
v___y_2916_ = v___x_2938_;
goto v___jp_2908_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram(lean_object* v_sp_2941_, lean_object* v___names_2942_){
_start:
{
lean_object* v___x_2943_; 
v___x_2943_ = lp_choreo_Choreo_buildProgram___redArg(v_sp_2941_);
return v___x_2943_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___boxed(lean_object* v_sp_2944_, lean_object* v___names_2945_){
_start:
{
lean_object* v_res_2946_; 
v_res_2946_ = lp_choreo_Choreo_buildProgram(v_sp_2944_, v___names_2945_);
lean_dec_ref(v___names_2945_);
return v_res_2946_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(lean_object* v_a_2947_, lean_object* v_a_2948_){
_start:
{
if (lean_obj_tag(v_a_2947_) == 0)
{
lean_object* v___x_2949_; 
v___x_2949_ = lean_array_to_list(v_a_2948_);
return v___x_2949_;
}
else
{
lean_object* v_head_2950_; 
v_head_2950_ = lean_ctor_get(v_a_2947_, 0);
if (lean_obj_tag(v_head_2950_) == 4)
{
lean_object* v_tail_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2975_; 
lean_inc_ref(v_head_2950_);
v_tail_2951_ = lean_ctor_get(v_a_2947_, 1);
v_isSharedCheck_2975_ = !lean_is_exclusive(v_a_2947_);
if (v_isSharedCheck_2975_ == 0)
{
lean_object* v_unused_2976_; 
v_unused_2976_ = lean_ctor_get(v_a_2947_, 0);
lean_dec(v_unused_2976_);
v___x_2953_ = v_a_2947_;
v_isShared_2954_ = v_isSharedCheck_2975_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_tail_2951_);
lean_dec(v_a_2947_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2975_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v_elems_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; uint8_t v___x_2958_; 
v_elems_2955_ = lean_ctor_get(v_head_2950_, 0);
lean_inc_ref(v_elems_2955_);
lean_dec_ref_known(v_head_2950_, 1);
v___x_2956_ = lean_array_get_size(v_elems_2955_);
v___x_2957_ = lean_unsigned_to_nat(2u);
v___x_2958_ = lean_nat_dec_eq(v___x_2956_, v___x_2957_);
if (v___x_2958_ == 0)
{
lean_dec_ref(v_elems_2955_);
lean_del_object(v___x_2953_);
v_a_2947_ = v_tail_2951_;
goto _start;
}
else
{
lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; 
v___x_2960_ = lean_unsigned_to_nat(0u);
v___x_2961_ = lean_array_fget_borrowed(v_elems_2955_, v___x_2960_);
lean_inc(v___x_2961_);
v___x_2962_ = l_Lean_Json_getInt_x3f(v___x_2961_);
if (lean_obj_tag(v___x_2962_) == 1)
{
lean_object* v_a_2963_; lean_object* v___x_2964_; lean_object* v___x_2965_; lean_object* v___x_2966_; 
v_a_2963_ = lean_ctor_get(v___x_2962_, 0);
lean_inc(v_a_2963_);
lean_dec_ref_known(v___x_2962_, 1);
v___x_2964_ = lean_unsigned_to_nat(1u);
v___x_2965_ = lean_array_fget(v_elems_2955_, v___x_2964_);
lean_dec_ref(v_elems_2955_);
v___x_2966_ = l_Lean_Json_getInt_x3f(v___x_2965_);
if (lean_obj_tag(v___x_2966_) == 1)
{
lean_object* v_a_2967_; lean_object* v___x_2969_; 
v_a_2967_ = lean_ctor_get(v___x_2966_, 0);
lean_inc(v_a_2967_);
lean_dec_ref_known(v___x_2966_, 1);
if (v_isShared_2954_ == 0)
{
lean_ctor_set_tag(v___x_2953_, 0);
lean_ctor_set(v___x_2953_, 1, v_a_2967_);
lean_ctor_set(v___x_2953_, 0, v_a_2963_);
v___x_2969_ = v___x_2953_;
goto v_reusejp_2968_;
}
else
{
lean_object* v_reuseFailAlloc_2972_; 
v_reuseFailAlloc_2972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2972_, 0, v_a_2963_);
lean_ctor_set(v_reuseFailAlloc_2972_, 1, v_a_2967_);
v___x_2969_ = v_reuseFailAlloc_2972_;
goto v_reusejp_2968_;
}
v_reusejp_2968_:
{
lean_object* v___x_2970_; 
v___x_2970_ = lean_array_push(v_a_2948_, v___x_2969_);
v_a_2947_ = v_tail_2951_;
v_a_2948_ = v___x_2970_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_2966_);
lean_dec(v_a_2963_);
lean_del_object(v___x_2953_);
v_a_2947_ = v_tail_2951_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_2962_);
lean_dec_ref(v_elems_2955_);
lean_del_object(v___x_2953_);
v_a_2947_ = v_tail_2951_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_2977_; 
v_tail_2977_ = lean_ctor_get(v_a_2947_, 1);
lean_inc(v_tail_2977_);
lean_dec_ref_known(v_a_2947_, 2);
v_a_2947_ = v_tail_2977_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jsonState(lean_object* v_j_2981_){
_start:
{
if (lean_obj_tag(v_j_2981_) == 4)
{
lean_object* v_elems_2982_; lean_object* v___x_2984_; uint8_t v_isShared_2985_; uint8_t v_isSharedCheck_2992_; 
v_elems_2982_ = lean_ctor_get(v_j_2981_, 0);
v_isSharedCheck_2992_ = !lean_is_exclusive(v_j_2981_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2984_ = v_j_2981_;
v_isShared_2985_ = v_isSharedCheck_2992_;
goto v_resetjp_2983_;
}
else
{
lean_inc(v_elems_2982_);
lean_dec(v_j_2981_);
v___x_2984_ = lean_box(0);
v_isShared_2985_ = v_isSharedCheck_2992_;
goto v_resetjp_2983_;
}
v_resetjp_2983_:
{
lean_object* v___x_2986_; lean_object* v___x_2987_; lean_object* v___x_2988_; lean_object* v___x_2990_; 
v___x_2986_ = lean_array_to_list(v_elems_2982_);
v___x_2987_ = ((lean_object*)(lp_choreo_Choreo_jsonState___closed__0));
v___x_2988_ = lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(v___x_2986_, v___x_2987_);
if (v_isShared_2985_ == 0)
{
lean_ctor_set_tag(v___x_2984_, 1);
lean_ctor_set(v___x_2984_, 0, v___x_2988_);
v___x_2990_ = v___x_2984_;
goto v_reusejp_2989_;
}
else
{
lean_object* v_reuseFailAlloc_2991_; 
v_reuseFailAlloc_2991_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2991_, 0, v___x_2988_);
v___x_2990_ = v_reuseFailAlloc_2991_;
goto v_reusejp_2989_;
}
v_reusejp_2989_:
{
return v___x_2990_;
}
}
}
else
{
lean_object* v___x_2993_; 
lean_dec(v_j_2981_);
v___x_2993_ = lean_box(0);
return v___x_2993_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(lean_object* v_j_2994_, lean_object* v_k_2995_){
_start:
{
lean_object* v___x_2996_; lean_object* v___x_2997_; 
v___x_2996_ = l_Lean_Json_getObjValD(v_j_2994_, v_k_2995_);
v___x_2997_ = l_Lean_Json_getStr_x3f(v___x_2996_);
return v___x_2997_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0___boxed(lean_object* v_j_2998_, lean_object* v_k_2999_){
_start:
{
lean_object* v_res_3000_; 
v_res_3000_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_j_2998_, v_k_2999_);
lean_dec_ref(v_k_2999_);
return v_res_3000_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(lean_object* v_j_3001_, lean_object* v_k_3002_){
_start:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; 
v___x_3003_ = l_Lean_Json_getObjValD(v_j_3001_, v_k_3002_);
v___x_3004_ = l_Lean_Json_getNat_x3f(v___x_3003_);
return v___x_3004_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1___boxed(lean_object* v_j_3005_, lean_object* v_k_3006_){
_start:
{
lean_object* v_res_3007_; 
v_res_3007_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_j_3005_, v_k_3006_);
lean_dec_ref(v_k_3006_);
return v_res_3007_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(lean_object* v_j_3008_, lean_object* v_k_3009_){
_start:
{
lean_object* v___x_3010_; lean_object* v___x_3011_; 
v___x_3010_ = l_Lean_Json_getObjValD(v_j_3008_, v_k_3009_);
v___x_3011_ = l_Lean_Json_getInt_x3f(v___x_3010_);
return v___x_3011_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2___boxed(lean_object* v_j_3012_, lean_object* v_k_3013_){
_start:
{
lean_object* v_res_3014_; 
v_res_3014_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_j_3012_, v_k_3013_);
lean_dec_ref(v_k_3013_);
return v_res_3014_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(lean_object* v_j_3015_, lean_object* v_k_3016_){
_start:
{
lean_object* v___x_3017_; lean_object* v___x_3018_; 
v___x_3017_ = l_Lean_Json_getObjValD(v_j_3015_, v_k_3016_);
v___x_3018_ = l_Lean_Json_getBool_x3f(v___x_3017_);
lean_dec(v___x_3017_);
return v___x_3018_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3___boxed(lean_object* v_j_3019_, lean_object* v_k_3020_){
_start:
{
lean_object* v_res_3021_; 
v_res_3021_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_j_3019_, v_k_3020_);
lean_dec_ref(v_k_3020_);
return v_res_3021_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4(lean_object* v_next_3023_, lean_object* v_snd_3024_, lean_object* v_fst_3025_, lean_object* v_a_3026_, lean_object* v_a_3027_){
_start:
{
if (lean_obj_tag(v_a_3026_) == 0)
{
lean_object* v___x_3028_; 
lean_dec(v_fst_3025_);
lean_dec(v_snd_3024_);
lean_dec_ref(v_next_3023_);
v___x_3028_ = l_List_reverse___redArg(v_a_3027_);
return v___x_3028_;
}
else
{
lean_object* v_head_3029_; lean_object* v_tail_3030_; lean_object* v___x_3032_; uint8_t v_isShared_3033_; uint8_t v_isSharedCheck_3071_; 
v_head_3029_ = lean_ctor_get(v_a_3026_, 0);
v_tail_3030_ = lean_ctor_get(v_a_3026_, 1);
v_isSharedCheck_3071_ = !lean_is_exclusive(v_a_3026_);
if (v_isSharedCheck_3071_ == 0)
{
v___x_3032_ = v_a_3026_;
v_isShared_3033_ = v_isSharedCheck_3071_;
goto v_resetjp_3031_;
}
else
{
lean_inc(v_tail_3030_);
lean_inc(v_head_3029_);
lean_dec(v_a_3026_);
v___x_3032_ = lean_box(0);
v_isShared_3033_ = v_isSharedCheck_3071_;
goto v_resetjp_3031_;
}
v_resetjp_3031_:
{
lean_object* v___y_3035_; lean_object* v_kind_3040_; lean_object* v_section_x27_3041_; lean_object* v_title_3042_; lean_object* v_shape_3043_; lean_object* v_counts_3044_; lean_object* v_quarters_3045_; uint8_t v_ccw_3046_; lean_object* v_dx_3047_; lean_object* v_dy_3048_; lean_object* v_num_3049_; lean_object* v_den_3050_; lean_object* v_step_3051_; lean_object* v_places_3052_; lean_object* v_line_3053_; lean_object* v_leftShape_3054_; lean_object* v_rightShape_3055_; lean_object* v___x_3057_; uint8_t v_isShared_3058_; uint8_t v_isSharedCheck_3069_; 
v_kind_3040_ = lean_ctor_get(v_head_3029_, 0);
v_section_x27_3041_ = lean_ctor_get(v_head_3029_, 1);
v_title_3042_ = lean_ctor_get(v_head_3029_, 2);
v_shape_3043_ = lean_ctor_get(v_head_3029_, 3);
v_counts_3044_ = lean_ctor_get(v_head_3029_, 4);
v_quarters_3045_ = lean_ctor_get(v_head_3029_, 5);
v_ccw_3046_ = lean_ctor_get_uint8(v_head_3029_, sizeof(void*)*16);
v_dx_3047_ = lean_ctor_get(v_head_3029_, 6);
v_dy_3048_ = lean_ctor_get(v_head_3029_, 7);
v_num_3049_ = lean_ctor_get(v_head_3029_, 8);
v_den_3050_ = lean_ctor_get(v_head_3029_, 9);
v_step_3051_ = lean_ctor_get(v_head_3029_, 10);
v_places_3052_ = lean_ctor_get(v_head_3029_, 11);
v_line_3053_ = lean_ctor_get(v_head_3029_, 12);
v_leftShape_3054_ = lean_ctor_get(v_head_3029_, 13);
v_rightShape_3055_ = lean_ctor_get(v_head_3029_, 14);
v_isSharedCheck_3069_ = !lean_is_exclusive(v_head_3029_);
if (v_isSharedCheck_3069_ == 0)
{
lean_object* v_unused_3070_; 
v_unused_3070_ = lean_ctor_get(v_head_3029_, 15);
lean_dec(v_unused_3070_);
v___x_3057_ = v_head_3029_;
v_isShared_3058_ = v_isSharedCheck_3069_;
goto v_resetjp_3056_;
}
else
{
lean_inc(v_rightShape_3055_);
lean_inc(v_leftShape_3054_);
lean_inc(v_line_3053_);
lean_inc(v_places_3052_);
lean_inc(v_step_3051_);
lean_inc(v_den_3050_);
lean_inc(v_num_3049_);
lean_inc(v_dy_3048_);
lean_inc(v_dx_3047_);
lean_inc(v_quarters_3045_);
lean_inc(v_counts_3044_);
lean_inc(v_shape_3043_);
lean_inc(v_title_3042_);
lean_inc(v_section_x27_3041_);
lean_inc(v_kind_3040_);
lean_dec(v_head_3029_);
v___x_3057_ = lean_box(0);
v_isShared_3058_ = v_isSharedCheck_3069_;
goto v_resetjp_3056_;
}
v___jp_3034_:
{
lean_object* v___x_3037_; 
if (v_isShared_3033_ == 0)
{
lean_ctor_set(v___x_3032_, 1, v_a_3027_);
lean_ctor_set(v___x_3032_, 0, v___y_3035_);
v___x_3037_ = v___x_3032_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3039_; 
v_reuseFailAlloc_3039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3039_, 0, v___y_3035_);
lean_ctor_set(v_reuseFailAlloc_3039_, 1, v_a_3027_);
v___x_3037_ = v_reuseFailAlloc_3039_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
v_a_3026_ = v_tail_3030_;
v_a_3027_ = v___x_3037_;
goto _start;
}
}
v_resetjp_3056_:
{
lean_object* v___x_3059_; lean_object* v___x_3060_; 
v___x_3059_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc(v_fst_3025_);
v___x_3060_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_3025_, v___x_3059_);
if (lean_obj_tag(v___x_3060_) == 0)
{
lean_object* v___x_3061_; lean_object* v___x_3063_; 
lean_dec_ref_known(v___x_3060_, 1);
lean_inc_ref(v_next_3023_);
lean_inc(v_snd_3024_);
v___x_3061_ = lean_apply_1(v_next_3023_, v_snd_3024_);
if (v_isShared_3058_ == 0)
{
lean_ctor_set(v___x_3057_, 15, v___x_3061_);
v___x_3063_ = v___x_3057_;
goto v_reusejp_3062_;
}
else
{
lean_object* v_reuseFailAlloc_3064_; 
v_reuseFailAlloc_3064_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3064_, 0, v_kind_3040_);
lean_ctor_set(v_reuseFailAlloc_3064_, 1, v_section_x27_3041_);
lean_ctor_set(v_reuseFailAlloc_3064_, 2, v_title_3042_);
lean_ctor_set(v_reuseFailAlloc_3064_, 3, v_shape_3043_);
lean_ctor_set(v_reuseFailAlloc_3064_, 4, v_counts_3044_);
lean_ctor_set(v_reuseFailAlloc_3064_, 5, v_quarters_3045_);
lean_ctor_set(v_reuseFailAlloc_3064_, 6, v_dx_3047_);
lean_ctor_set(v_reuseFailAlloc_3064_, 7, v_dy_3048_);
lean_ctor_set(v_reuseFailAlloc_3064_, 8, v_num_3049_);
lean_ctor_set(v_reuseFailAlloc_3064_, 9, v_den_3050_);
lean_ctor_set(v_reuseFailAlloc_3064_, 10, v_step_3051_);
lean_ctor_set(v_reuseFailAlloc_3064_, 11, v_places_3052_);
lean_ctor_set(v_reuseFailAlloc_3064_, 12, v_line_3053_);
lean_ctor_set(v_reuseFailAlloc_3064_, 13, v_leftShape_3054_);
lean_ctor_set(v_reuseFailAlloc_3064_, 14, v_rightShape_3055_);
lean_ctor_set(v_reuseFailAlloc_3064_, 15, v___x_3061_);
lean_ctor_set_uint8(v_reuseFailAlloc_3064_, sizeof(void*)*16, v_ccw_3046_);
v___x_3063_ = v_reuseFailAlloc_3064_;
goto v_reusejp_3062_;
}
v_reusejp_3062_:
{
v___y_3035_ = v___x_3063_;
goto v___jp_3034_;
}
}
else
{
lean_object* v_a_3065_; lean_object* v___x_3067_; 
v_a_3065_ = lean_ctor_get(v___x_3060_, 0);
lean_inc(v_a_3065_);
lean_dec_ref_known(v___x_3060_, 1);
if (v_isShared_3058_ == 0)
{
lean_ctor_set(v___x_3057_, 15, v_a_3065_);
v___x_3067_ = v___x_3057_;
goto v_reusejp_3066_;
}
else
{
lean_object* v_reuseFailAlloc_3068_; 
v_reuseFailAlloc_3068_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3068_, 0, v_kind_3040_);
lean_ctor_set(v_reuseFailAlloc_3068_, 1, v_section_x27_3041_);
lean_ctor_set(v_reuseFailAlloc_3068_, 2, v_title_3042_);
lean_ctor_set(v_reuseFailAlloc_3068_, 3, v_shape_3043_);
lean_ctor_set(v_reuseFailAlloc_3068_, 4, v_counts_3044_);
lean_ctor_set(v_reuseFailAlloc_3068_, 5, v_quarters_3045_);
lean_ctor_set(v_reuseFailAlloc_3068_, 6, v_dx_3047_);
lean_ctor_set(v_reuseFailAlloc_3068_, 7, v_dy_3048_);
lean_ctor_set(v_reuseFailAlloc_3068_, 8, v_num_3049_);
lean_ctor_set(v_reuseFailAlloc_3068_, 9, v_den_3050_);
lean_ctor_set(v_reuseFailAlloc_3068_, 10, v_step_3051_);
lean_ctor_set(v_reuseFailAlloc_3068_, 11, v_places_3052_);
lean_ctor_set(v_reuseFailAlloc_3068_, 12, v_line_3053_);
lean_ctor_set(v_reuseFailAlloc_3068_, 13, v_leftShape_3054_);
lean_ctor_set(v_reuseFailAlloc_3068_, 14, v_rightShape_3055_);
lean_ctor_set(v_reuseFailAlloc_3068_, 15, v_a_3065_);
lean_ctor_set_uint8(v_reuseFailAlloc_3068_, sizeof(void*)*16, v_ccw_3046_);
v___x_3067_ = v_reuseFailAlloc_3068_;
goto v_reusejp_3066_;
}
v_reusejp_3066_:
{
v___y_3035_ = v___x_3067_;
goto v___jp_3034_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_readOps_spec__4(lean_object* v_next_3072_, lean_object* v_snd_3073_, lean_object* v_fst_3074_, lean_object* v_a_3075_, lean_object* v_a_3076_){
_start:
{
if (lean_obj_tag(v_a_3075_) == 0)
{
lean_object* v___x_3077_; 
lean_dec(v_fst_3074_);
lean_dec(v_snd_3073_);
lean_dec_ref(v_next_3072_);
v___x_3077_ = l_List_reverse___redArg(v_a_3076_);
return v___x_3077_;
}
else
{
lean_object* v_head_3078_; lean_object* v_tail_3079_; lean_object* v___x_3081_; uint8_t v_isShared_3082_; uint8_t v_isSharedCheck_3120_; 
v_head_3078_ = lean_ctor_get(v_a_3075_, 0);
v_tail_3079_ = lean_ctor_get(v_a_3075_, 1);
v_isSharedCheck_3120_ = !lean_is_exclusive(v_a_3075_);
if (v_isSharedCheck_3120_ == 0)
{
v___x_3081_ = v_a_3075_;
v_isShared_3082_ = v_isSharedCheck_3120_;
goto v_resetjp_3080_;
}
else
{
lean_inc(v_tail_3079_);
lean_inc(v_head_3078_);
lean_dec(v_a_3075_);
v___x_3081_ = lean_box(0);
v_isShared_3082_ = v_isSharedCheck_3120_;
goto v_resetjp_3080_;
}
v_resetjp_3080_:
{
lean_object* v___y_3084_; lean_object* v_kind_3089_; lean_object* v_section_x27_3090_; lean_object* v_title_3091_; lean_object* v_shape_3092_; lean_object* v_counts_3093_; lean_object* v_quarters_3094_; uint8_t v_ccw_3095_; lean_object* v_dx_3096_; lean_object* v_dy_3097_; lean_object* v_num_3098_; lean_object* v_den_3099_; lean_object* v_step_3100_; lean_object* v_places_3101_; lean_object* v_line_3102_; lean_object* v_leftShape_3103_; lean_object* v_rightShape_3104_; lean_object* v___x_3106_; uint8_t v_isShared_3107_; uint8_t v_isSharedCheck_3118_; 
v_kind_3089_ = lean_ctor_get(v_head_3078_, 0);
v_section_x27_3090_ = lean_ctor_get(v_head_3078_, 1);
v_title_3091_ = lean_ctor_get(v_head_3078_, 2);
v_shape_3092_ = lean_ctor_get(v_head_3078_, 3);
v_counts_3093_ = lean_ctor_get(v_head_3078_, 4);
v_quarters_3094_ = lean_ctor_get(v_head_3078_, 5);
v_ccw_3095_ = lean_ctor_get_uint8(v_head_3078_, sizeof(void*)*16);
v_dx_3096_ = lean_ctor_get(v_head_3078_, 6);
v_dy_3097_ = lean_ctor_get(v_head_3078_, 7);
v_num_3098_ = lean_ctor_get(v_head_3078_, 8);
v_den_3099_ = lean_ctor_get(v_head_3078_, 9);
v_step_3100_ = lean_ctor_get(v_head_3078_, 10);
v_places_3101_ = lean_ctor_get(v_head_3078_, 11);
v_line_3102_ = lean_ctor_get(v_head_3078_, 12);
v_leftShape_3103_ = lean_ctor_get(v_head_3078_, 13);
v_rightShape_3104_ = lean_ctor_get(v_head_3078_, 14);
v_isSharedCheck_3118_ = !lean_is_exclusive(v_head_3078_);
if (v_isSharedCheck_3118_ == 0)
{
lean_object* v_unused_3119_; 
v_unused_3119_ = lean_ctor_get(v_head_3078_, 15);
lean_dec(v_unused_3119_);
v___x_3106_ = v_head_3078_;
v_isShared_3107_ = v_isSharedCheck_3118_;
goto v_resetjp_3105_;
}
else
{
lean_inc(v_rightShape_3104_);
lean_inc(v_leftShape_3103_);
lean_inc(v_line_3102_);
lean_inc(v_places_3101_);
lean_inc(v_step_3100_);
lean_inc(v_den_3099_);
lean_inc(v_num_3098_);
lean_inc(v_dy_3097_);
lean_inc(v_dx_3096_);
lean_inc(v_quarters_3094_);
lean_inc(v_counts_3093_);
lean_inc(v_shape_3092_);
lean_inc(v_title_3091_);
lean_inc(v_section_x27_3090_);
lean_inc(v_kind_3089_);
lean_dec(v_head_3078_);
v___x_3106_ = lean_box(0);
v_isShared_3107_ = v_isSharedCheck_3118_;
goto v_resetjp_3105_;
}
v___jp_3083_:
{
lean_object* v___x_3086_; 
if (v_isShared_3082_ == 0)
{
lean_ctor_set(v___x_3081_, 1, v_a_3076_);
lean_ctor_set(v___x_3081_, 0, v___y_3084_);
v___x_3086_ = v___x_3081_;
goto v_reusejp_3085_;
}
else
{
lean_object* v_reuseFailAlloc_3088_; 
v_reuseFailAlloc_3088_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3088_, 0, v___y_3084_);
lean_ctor_set(v_reuseFailAlloc_3088_, 1, v_a_3076_);
v___x_3086_ = v_reuseFailAlloc_3088_;
goto v_reusejp_3085_;
}
v_reusejp_3085_:
{
lean_object* v___x_3087_; 
v___x_3087_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4(v_next_3072_, v_snd_3073_, v_fst_3074_, v_tail_3079_, v___x_3086_);
return v___x_3087_;
}
}
v_resetjp_3105_:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc(v_fst_3074_);
v___x_3109_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_3074_, v___x_3108_);
if (lean_obj_tag(v___x_3109_) == 0)
{
lean_object* v___x_3110_; lean_object* v___x_3112_; 
lean_dec_ref_known(v___x_3109_, 1);
lean_inc_ref(v_next_3072_);
lean_inc(v_snd_3073_);
v___x_3110_ = lean_apply_1(v_next_3072_, v_snd_3073_);
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 15, v___x_3110_);
v___x_3112_ = v___x_3106_;
goto v_reusejp_3111_;
}
else
{
lean_object* v_reuseFailAlloc_3113_; 
v_reuseFailAlloc_3113_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3113_, 0, v_kind_3089_);
lean_ctor_set(v_reuseFailAlloc_3113_, 1, v_section_x27_3090_);
lean_ctor_set(v_reuseFailAlloc_3113_, 2, v_title_3091_);
lean_ctor_set(v_reuseFailAlloc_3113_, 3, v_shape_3092_);
lean_ctor_set(v_reuseFailAlloc_3113_, 4, v_counts_3093_);
lean_ctor_set(v_reuseFailAlloc_3113_, 5, v_quarters_3094_);
lean_ctor_set(v_reuseFailAlloc_3113_, 6, v_dx_3096_);
lean_ctor_set(v_reuseFailAlloc_3113_, 7, v_dy_3097_);
lean_ctor_set(v_reuseFailAlloc_3113_, 8, v_num_3098_);
lean_ctor_set(v_reuseFailAlloc_3113_, 9, v_den_3099_);
lean_ctor_set(v_reuseFailAlloc_3113_, 10, v_step_3100_);
lean_ctor_set(v_reuseFailAlloc_3113_, 11, v_places_3101_);
lean_ctor_set(v_reuseFailAlloc_3113_, 12, v_line_3102_);
lean_ctor_set(v_reuseFailAlloc_3113_, 13, v_leftShape_3103_);
lean_ctor_set(v_reuseFailAlloc_3113_, 14, v_rightShape_3104_);
lean_ctor_set(v_reuseFailAlloc_3113_, 15, v___x_3110_);
lean_ctor_set_uint8(v_reuseFailAlloc_3113_, sizeof(void*)*16, v_ccw_3095_);
v___x_3112_ = v_reuseFailAlloc_3113_;
goto v_reusejp_3111_;
}
v_reusejp_3111_:
{
v___y_3084_ = v___x_3112_;
goto v___jp_3083_;
}
}
else
{
lean_object* v_a_3114_; lean_object* v___x_3116_; 
v_a_3114_ = lean_ctor_get(v___x_3109_, 0);
lean_inc(v_a_3114_);
lean_dec_ref_known(v___x_3109_, 1);
if (v_isShared_3107_ == 0)
{
lean_ctor_set(v___x_3106_, 15, v_a_3114_);
v___x_3116_ = v___x_3106_;
goto v_reusejp_3115_;
}
else
{
lean_object* v_reuseFailAlloc_3117_; 
v_reuseFailAlloc_3117_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3117_, 0, v_kind_3089_);
lean_ctor_set(v_reuseFailAlloc_3117_, 1, v_section_x27_3090_);
lean_ctor_set(v_reuseFailAlloc_3117_, 2, v_title_3091_);
lean_ctor_set(v_reuseFailAlloc_3117_, 3, v_shape_3092_);
lean_ctor_set(v_reuseFailAlloc_3117_, 4, v_counts_3093_);
lean_ctor_set(v_reuseFailAlloc_3117_, 5, v_quarters_3094_);
lean_ctor_set(v_reuseFailAlloc_3117_, 6, v_dx_3096_);
lean_ctor_set(v_reuseFailAlloc_3117_, 7, v_dy_3097_);
lean_ctor_set(v_reuseFailAlloc_3117_, 8, v_num_3098_);
lean_ctor_set(v_reuseFailAlloc_3117_, 9, v_den_3099_);
lean_ctor_set(v_reuseFailAlloc_3117_, 10, v_step_3100_);
lean_ctor_set(v_reuseFailAlloc_3117_, 11, v_places_3101_);
lean_ctor_set(v_reuseFailAlloc_3117_, 12, v_line_3102_);
lean_ctor_set(v_reuseFailAlloc_3117_, 13, v_leftShape_3103_);
lean_ctor_set(v_reuseFailAlloc_3117_, 14, v_rightShape_3104_);
lean_ctor_set(v_reuseFailAlloc_3117_, 15, v_a_3114_);
lean_ctor_set_uint8(v_reuseFailAlloc_3117_, sizeof(void*)*16, v_ccw_3095_);
v___x_3116_ = v_reuseFailAlloc_3117_;
goto v_reusejp_3115_;
}
v_reusejp_3115_:
{
v___y_3084_ = v___x_3116_;
goto v___jp_3083_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(lean_object* v_next_3121_, lean_object* v_snd_3122_, lean_object* v_fst_3123_, lean_object* v___y_3124_, lean_object* v_a_3125_, lean_object* v_a_3126_){
_start:
{
if (lean_obj_tag(v_a_3125_) == 0)
{
lean_object* v___x_3127_; 
lean_dec(v___y_3124_);
lean_dec(v_fst_3123_);
lean_dec(v_snd_3122_);
lean_dec_ref(v_next_3121_);
v___x_3127_ = lean_array_to_list(v_a_3126_);
return v___x_3127_;
}
else
{
lean_object* v_tail_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; 
v_tail_3128_ = lean_ctor_get(v_a_3125_, 1);
v___x_3129_ = lean_box(0);
lean_inc(v___y_3124_);
lean_inc(v_fst_3123_);
lean_inc(v_snd_3122_);
lean_inc_ref(v_next_3121_);
v___x_3130_ = lp_choreo_List_mapTR_loop___at___00Choreo_readOps_spec__4(v_next_3121_, v_snd_3122_, v_fst_3123_, v___y_3124_, v___x_3129_);
v___x_3131_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3126_, v___x_3130_);
v_a_3125_ = v_tail_3128_;
v_a_3126_ = v___x_3131_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5___boxed(lean_object* v_next_3133_, lean_object* v_snd_3134_, lean_object* v_fst_3135_, lean_object* v___y_3136_, lean_object* v_a_3137_, lean_object* v_a_3138_){
_start:
{
lean_object* v_res_3139_; 
v_res_3139_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3133_, v_snd_3134_, v_fst_3135_, v___y_3136_, v_a_3137_, v_a_3138_);
lean_dec(v_a_3137_);
return v_res_3139_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(lean_object* v_fst_3140_, lean_object* v_f_3141_, lean_object* v_d_3142_){
_start:
{
lean_object* v___x_3143_; 
v___x_3143_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_fst_3140_, v_f_3141_);
if (lean_obj_tag(v___x_3143_) == 0)
{
lean_dec_ref_known(v___x_3143_, 1);
lean_inc_ref(v_d_3142_);
return v_d_3142_;
}
else
{
lean_object* v_a_3144_; 
v_a_3144_ = lean_ctor_get(v___x_3143_, 0);
lean_inc(v_a_3144_);
lean_dec_ref_known(v___x_3143_, 1);
return v_a_3144_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0___boxed(lean_object* v_fst_3145_, lean_object* v_f_3146_, lean_object* v_d_3147_){
_start:
{
lean_object* v_res_3148_; 
v_res_3148_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3145_, v_f_3146_, v_d_3147_);
lean_dec_ref(v_d_3147_);
lean_dec_ref(v_f_3146_);
return v_res_3148_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(lean_object* v_fst_3149_, lean_object* v_f_3150_, lean_object* v_d_3151_){
_start:
{
lean_object* v___x_3152_; 
v___x_3152_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_fst_3149_, v_f_3150_);
if (lean_obj_tag(v___x_3152_) == 0)
{
lean_dec_ref_known(v___x_3152_, 1);
lean_inc(v_d_3151_);
return v_d_3151_;
}
else
{
lean_object* v_a_3153_; 
v_a_3153_ = lean_ctor_get(v___x_3152_, 0);
lean_inc(v_a_3153_);
lean_dec_ref_known(v___x_3152_, 1);
return v_a_3153_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2___boxed(lean_object* v_fst_3154_, lean_object* v_f_3155_, lean_object* v_d_3156_){
_start:
{
lean_object* v_res_3157_; 
v_res_3157_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3154_, v_f_3155_, v_d_3156_);
lean_dec(v_d_3156_);
lean_dec_ref(v_f_3155_);
return v_res_3157_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(lean_object* v_fst_3158_, lean_object* v_f_3159_, lean_object* v_d_3160_){
_start:
{
lean_object* v___x_3161_; 
v___x_3161_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_3158_, v_f_3159_);
if (lean_obj_tag(v___x_3161_) == 0)
{
lean_dec_ref_known(v___x_3161_, 1);
lean_inc(v_d_3160_);
return v_d_3160_;
}
else
{
lean_object* v_a_3162_; 
v_a_3162_ = lean_ctor_get(v___x_3161_, 0);
lean_inc(v_a_3162_);
lean_dec_ref_known(v___x_3161_, 1);
return v_a_3162_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1___boxed(lean_object* v_fst_3163_, lean_object* v_f_3164_, lean_object* v_d_3165_){
_start:
{
lean_object* v_res_3166_; 
v_res_3166_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3163_, v_f_3164_, v_d_3165_);
lean_dec(v_d_3165_);
lean_dec_ref(v_f_3164_);
return v_res_3166_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(lean_object* v_sectionName_3186_, lean_object* v_next_3187_, lean_object* v_a_3188_, lean_object* v_a_3189_){
_start:
{
if (lean_obj_tag(v_a_3188_) == 0)
{
lean_object* v___x_3190_; 
lean_dec_ref(v_next_3187_);
v___x_3190_ = lean_array_to_list(v_a_3189_);
return v___x_3190_;
}
else
{
lean_object* v_head_3191_; lean_object* v_tail_3192_; lean_object* v___x_3194_; uint8_t v_isShared_3195_; uint8_t v_isSharedCheck_3280_; 
v_head_3191_ = lean_ctor_get(v_a_3188_, 0);
v_tail_3192_ = lean_ctor_get(v_a_3188_, 1);
v_isSharedCheck_3280_ = !lean_is_exclusive(v_a_3188_);
if (v_isSharedCheck_3280_ == 0)
{
v___x_3194_ = v_a_3188_;
v_isShared_3195_ = v_isSharedCheck_3280_;
goto v_resetjp_3193_;
}
else
{
lean_inc(v_tail_3192_);
lean_inc(v_head_3191_);
lean_dec(v_a_3188_);
v___x_3194_ = lean_box(0);
v_isShared_3195_ = v_isSharedCheck_3280_;
goto v_resetjp_3193_;
}
v_resetjp_3193_:
{
lean_object* v___y_3197_; lean_object* v_fst_3200_; lean_object* v_snd_3201_; lean_object* v___x_3202_; lean_object* v_sec_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v_kind_3206_; lean_object* v___x_3207_; uint8_t v___x_3208_; 
v_fst_3200_ = lean_ctor_get(v_head_3191_, 0);
lean_inc_n(v_fst_3200_, 3);
v_snd_3201_ = lean_ctor_get(v_head_3191_, 1);
lean_inc(v_snd_3201_);
lean_dec(v_head_3191_);
v___x_3202_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0));
v_sec_3203_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3200_, v___x_3202_, v_sectionName_3186_);
v___x_3204_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1));
v___x_3205_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v_kind_3206_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3200_, v___x_3204_, v___x_3205_);
v___x_3207_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2));
v___x_3208_ = lean_string_dec_eq(v_kind_3206_, v___x_3207_);
if (v___x_3208_ == 0)
{
lean_object* v___x_3209_; lean_object* v___x_3210_; lean_object* v___x_3211_; lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___y_3220_; uint8_t v___y_3221_; lean_object* v___y_3222_; lean_object* v___y_3223_; lean_object* v___y_3224_; lean_object* v___y_3225_; lean_object* v___y_3226_; lean_object* v___y_3227_; uint8_t v___y_3244_; lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3209_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc_n(v_fst_3200_, 5);
v___x_3210_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3200_, v___x_3209_, v___x_3205_);
v___x_3211_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4));
v___x_3212_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3200_, v___x_3211_, v___x_3205_);
v___x_3213_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5));
v___x_3214_ = lean_unsigned_to_nat(8u);
v___x_3215_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3200_, v___x_3213_, v___x_3214_);
v___x_3216_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6));
v___x_3217_ = lean_unsigned_to_nat(1u);
v___x_3218_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3200_, v___x_3216_, v___x_3217_);
v___x_3262_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14));
v___x_3263_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_fst_3200_, v___x_3262_);
if (lean_obj_tag(v___x_3263_) == 0)
{
uint8_t v___x_3264_; 
lean_dec_ref_known(v___x_3263_, 1);
v___x_3264_ = 1;
v___y_3244_ = v___x_3264_;
goto v___jp_3243_;
}
else
{
lean_object* v_a_3265_; uint8_t v___x_3266_; 
v_a_3265_ = lean_ctor_get(v___x_3263_, 0);
lean_inc(v_a_3265_);
lean_dec_ref_known(v___x_3263_, 1);
v___x_3266_ = lean_unbox(v_a_3265_);
lean_dec(v_a_3265_);
v___y_3244_ = v___x_3266_;
goto v___jp_3243_;
}
v___jp_3219_:
{
lean_object* v___x_3228_; lean_object* v___x_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3241_; 
v___x_3228_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
lean_inc_n(v_fst_3200_, 3);
v___x_3229_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3200_, v___x_3228_, v___y_3226_);
v___x_3230_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7));
v___x_3231_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_3232_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3200_, v___x_3230_, v___x_3231_);
v___x_3233_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8));
v___x_3234_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3200_, v___x_3233_, v___x_3231_);
v___x_3235_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc_ref(v_next_3187_);
v___x_3236_ = lean_apply_1(v_next_3187_, v_snd_3201_);
v___x_3237_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3200_, v___x_3235_, v___x_3236_);
lean_dec(v___x_3236_);
v___x_3238_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v___x_3238_, 0, v_kind_3206_);
lean_ctor_set(v___x_3238_, 1, v_sec_3203_);
lean_ctor_set(v___x_3238_, 2, v___x_3210_);
lean_ctor_set(v___x_3238_, 3, v___x_3212_);
lean_ctor_set(v___x_3238_, 4, v___x_3215_);
lean_ctor_set(v___x_3238_, 5, v___x_3218_);
lean_ctor_set(v___x_3238_, 6, v___y_3222_);
lean_ctor_set(v___x_3238_, 7, v___y_3220_);
lean_ctor_set(v___x_3238_, 8, v___y_3224_);
lean_ctor_set(v___x_3238_, 9, v___y_3225_);
lean_ctor_set(v___x_3238_, 10, v___y_3223_);
lean_ctor_set(v___x_3238_, 11, v___y_3227_);
lean_ctor_set(v___x_3238_, 12, v___x_3229_);
lean_ctor_set(v___x_3238_, 13, v___x_3232_);
lean_ctor_set(v___x_3238_, 14, v___x_3234_);
lean_ctor_set(v___x_3238_, 15, v___x_3237_);
lean_ctor_set_uint8(v___x_3238_, sizeof(void*)*16, v___y_3221_);
v___x_3239_ = lean_box(0);
if (v_isShared_3195_ == 0)
{
lean_ctor_set(v___x_3194_, 1, v___x_3239_);
lean_ctor_set(v___x_3194_, 0, v___x_3238_);
v___x_3241_ = v___x_3194_;
goto v_reusejp_3240_;
}
else
{
lean_object* v_reuseFailAlloc_3242_; 
v_reuseFailAlloc_3242_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3242_, 0, v___x_3238_);
lean_ctor_set(v_reuseFailAlloc_3242_, 1, v___x_3239_);
v___x_3241_ = v_reuseFailAlloc_3242_;
goto v_reusejp_3240_;
}
v_reusejp_3240_:
{
v___y_3197_ = v___x_3241_;
goto v___jp_3196_;
}
}
v___jp_3243_:
{
lean_object* v___x_3245_; lean_object* v___x_3246_; lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; lean_object* v___x_3257_; lean_object* v___x_3258_; 
v___x_3245_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9));
v___x_3246_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc_n(v_fst_3200_, 6);
v___x_3247_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3200_, v___x_3245_, v___x_3246_);
v___x_3248_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10));
v___x_3249_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3200_, v___x_3248_, v___x_3246_);
v___x_3250_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11));
v___x_3251_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_3252_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3200_, v___x_3250_, v___x_3251_);
v___x_3253_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12));
v___x_3254_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3200_, v___x_3253_, v___x_3251_);
v___x_3255_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_3256_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3200_, v___x_3255_, v___x_3205_);
v___x_3257_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13));
v___x_3258_ = l_Lean_Json_getObjVal_x3f(v_fst_3200_, v___x_3257_);
if (lean_obj_tag(v___x_3258_) == 0)
{
lean_object* v___x_3259_; 
lean_dec_ref_known(v___x_3258_, 1);
v___x_3259_ = lean_box(0);
v___y_3220_ = v___x_3249_;
v___y_3221_ = v___y_3244_;
v___y_3222_ = v___x_3247_;
v___y_3223_ = v___x_3256_;
v___y_3224_ = v___x_3252_;
v___y_3225_ = v___x_3254_;
v___y_3226_ = v___x_3246_;
v___y_3227_ = v___x_3259_;
goto v___jp_3219_;
}
else
{
lean_object* v_a_3260_; lean_object* v___x_3261_; 
v_a_3260_ = lean_ctor_get(v___x_3258_, 0);
lean_inc(v_a_3260_);
lean_dec_ref_known(v___x_3258_, 1);
v___x_3261_ = lp_choreo_Choreo_jsonState(v_a_3260_);
v___y_3220_ = v___x_3249_;
v___y_3221_ = v___y_3244_;
v___y_3222_ = v___x_3247_;
v___y_3223_ = v___x_3256_;
v___y_3224_ = v___x_3252_;
v___y_3225_ = v___x_3254_;
v___y_3226_ = v___x_3246_;
v___y_3227_ = v___x_3261_;
goto v___jp_3219_;
}
}
}
else
{
lean_object* v___x_3267_; lean_object* v___x_3268_; lean_object* v_times_3269_; lean_object* v___y_3271_; lean_object* v___x_3275_; lean_object* v___x_3276_; 
lean_dec_ref(v_kind_3206_);
lean_del_object(v___x_3194_);
v___x_3267_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15));
v___x_3268_ = lean_unsigned_to_nat(2u);
lean_inc_n(v_fst_3200_, 2);
v_times_3269_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3200_, v___x_3267_, v___x_3268_);
v___x_3275_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3276_ = l_Lean_Json_getObjVal_x3f(v_fst_3200_, v___x_3275_);
if (lean_obj_tag(v___x_3276_) == 1)
{
lean_object* v_a_3277_; lean_object* v___x_3278_; 
v_a_3277_ = lean_ctor_get(v___x_3276_, 0);
lean_inc(v_a_3277_);
lean_dec_ref_known(v___x_3276_, 1);
lean_inc_ref(v_next_3187_);
v___x_3278_ = lp_choreo_Choreo_readOps(v_sec_3203_, v_next_3187_, v_a_3277_);
lean_dec_ref(v_sec_3203_);
v___y_3271_ = v___x_3278_;
goto v___jp_3270_;
}
else
{
lean_object* v___x_3279_; 
lean_dec_ref(v___x_3276_);
lean_dec_ref(v_sec_3203_);
v___x_3279_ = lean_box(0);
v___y_3271_ = v___x_3279_;
goto v___jp_3270_;
}
v___jp_3270_:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3272_ = l_List_range(v_times_3269_);
v___x_3273_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
lean_inc_ref(v_next_3187_);
v___x_3274_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3187_, v_snd_3201_, v_fst_3200_, v___y_3271_, v___x_3272_, v___x_3273_);
lean_dec(v___x_3272_);
v___y_3197_ = v___x_3274_;
goto v___jp_3196_;
}
}
v___jp_3196_:
{
lean_object* v___x_3198_; 
v___x_3198_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3189_, v___y_3197_);
v_a_3188_ = v_tail_3192_;
v_a_3189_ = v___x_3198_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(lean_object* v_next_3281_, lean_object* v_sectionName_3282_, lean_object* v_a_3283_, lean_object* v_a_3284_){
_start:
{
if (lean_obj_tag(v_a_3283_) == 0)
{
lean_object* v___x_3285_; 
lean_dec_ref(v_next_3281_);
v___x_3285_ = lean_array_to_list(v_a_3284_);
return v___x_3285_;
}
else
{
lean_object* v_head_3286_; lean_object* v_tail_3287_; lean_object* v___x_3289_; uint8_t v_isShared_3290_; uint8_t v_isSharedCheck_3375_; 
v_head_3286_ = lean_ctor_get(v_a_3283_, 0);
v_tail_3287_ = lean_ctor_get(v_a_3283_, 1);
v_isSharedCheck_3375_ = !lean_is_exclusive(v_a_3283_);
if (v_isSharedCheck_3375_ == 0)
{
v___x_3289_ = v_a_3283_;
v_isShared_3290_ = v_isSharedCheck_3375_;
goto v_resetjp_3288_;
}
else
{
lean_inc(v_tail_3287_);
lean_inc(v_head_3286_);
lean_dec(v_a_3283_);
v___x_3289_ = lean_box(0);
v_isShared_3290_ = v_isSharedCheck_3375_;
goto v_resetjp_3288_;
}
v_resetjp_3288_:
{
lean_object* v___y_3292_; lean_object* v_fst_3295_; lean_object* v_snd_3296_; lean_object* v___x_3297_; lean_object* v_sec_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v_kind_3301_; lean_object* v___x_3302_; uint8_t v___x_3303_; 
v_fst_3295_ = lean_ctor_get(v_head_3286_, 0);
lean_inc_n(v_fst_3295_, 3);
v_snd_3296_ = lean_ctor_get(v_head_3286_, 1);
lean_inc(v_snd_3296_);
lean_dec(v_head_3286_);
v___x_3297_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0));
v_sec_3298_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3295_, v___x_3297_, v_sectionName_3282_);
v___x_3299_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1));
v___x_3300_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v_kind_3301_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3295_, v___x_3299_, v___x_3300_);
v___x_3302_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2));
v___x_3303_ = lean_string_dec_eq(v_kind_3301_, v___x_3302_);
if (v___x_3303_ == 0)
{
lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___y_3315_; lean_object* v___y_3316_; lean_object* v___y_3317_; uint8_t v___y_3318_; lean_object* v___y_3319_; lean_object* v___y_3320_; lean_object* v___y_3321_; lean_object* v___y_3322_; uint8_t v___y_3339_; lean_object* v___x_3357_; lean_object* v___x_3358_; 
v___x_3304_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc_n(v_fst_3295_, 5);
v___x_3305_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3295_, v___x_3304_, v___x_3300_);
v___x_3306_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4));
v___x_3307_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3295_, v___x_3306_, v___x_3300_);
v___x_3308_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5));
v___x_3309_ = lean_unsigned_to_nat(8u);
v___x_3310_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3295_, v___x_3308_, v___x_3309_);
v___x_3311_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6));
v___x_3312_ = lean_unsigned_to_nat(1u);
v___x_3313_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3295_, v___x_3311_, v___x_3312_);
v___x_3357_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14));
v___x_3358_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_fst_3295_, v___x_3357_);
if (lean_obj_tag(v___x_3358_) == 0)
{
uint8_t v___x_3359_; 
lean_dec_ref_known(v___x_3358_, 1);
v___x_3359_ = 1;
v___y_3339_ = v___x_3359_;
goto v___jp_3338_;
}
else
{
lean_object* v_a_3360_; uint8_t v___x_3361_; 
v_a_3360_ = lean_ctor_get(v___x_3358_, 0);
lean_inc(v_a_3360_);
lean_dec_ref_known(v___x_3358_, 1);
v___x_3361_ = lean_unbox(v_a_3360_);
lean_dec(v_a_3360_);
v___y_3339_ = v___x_3361_;
goto v___jp_3338_;
}
v___jp_3314_:
{
lean_object* v___x_3323_; lean_object* v___x_3324_; lean_object* v___x_3325_; lean_object* v___x_3326_; lean_object* v___x_3327_; lean_object* v___x_3328_; lean_object* v___x_3329_; lean_object* v___x_3330_; lean_object* v___x_3331_; lean_object* v___x_3332_; lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3336_; 
v___x_3323_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
lean_inc_n(v_fst_3295_, 3);
v___x_3324_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3295_, v___x_3323_, v___y_3315_);
v___x_3325_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7));
v___x_3326_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_3327_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3295_, v___x_3325_, v___x_3326_);
v___x_3328_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8));
v___x_3329_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3295_, v___x_3328_, v___x_3326_);
v___x_3330_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc_ref(v_next_3281_);
v___x_3331_ = lean_apply_1(v_next_3281_, v_snd_3296_);
v___x_3332_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3295_, v___x_3330_, v___x_3331_);
lean_dec(v___x_3331_);
v___x_3333_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v___x_3333_, 0, v_kind_3301_);
lean_ctor_set(v___x_3333_, 1, v_sec_3298_);
lean_ctor_set(v___x_3333_, 2, v___x_3305_);
lean_ctor_set(v___x_3333_, 3, v___x_3307_);
lean_ctor_set(v___x_3333_, 4, v___x_3310_);
lean_ctor_set(v___x_3333_, 5, v___x_3313_);
lean_ctor_set(v___x_3333_, 6, v___y_3320_);
lean_ctor_set(v___x_3333_, 7, v___y_3321_);
lean_ctor_set(v___x_3333_, 8, v___y_3317_);
lean_ctor_set(v___x_3333_, 9, v___y_3319_);
lean_ctor_set(v___x_3333_, 10, v___y_3316_);
lean_ctor_set(v___x_3333_, 11, v___y_3322_);
lean_ctor_set(v___x_3333_, 12, v___x_3324_);
lean_ctor_set(v___x_3333_, 13, v___x_3327_);
lean_ctor_set(v___x_3333_, 14, v___x_3329_);
lean_ctor_set(v___x_3333_, 15, v___x_3332_);
lean_ctor_set_uint8(v___x_3333_, sizeof(void*)*16, v___y_3318_);
v___x_3334_ = lean_box(0);
if (v_isShared_3290_ == 0)
{
lean_ctor_set(v___x_3289_, 1, v___x_3334_);
lean_ctor_set(v___x_3289_, 0, v___x_3333_);
v___x_3336_ = v___x_3289_;
goto v_reusejp_3335_;
}
else
{
lean_object* v_reuseFailAlloc_3337_; 
v_reuseFailAlloc_3337_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3337_, 0, v___x_3333_);
lean_ctor_set(v_reuseFailAlloc_3337_, 1, v___x_3334_);
v___x_3336_ = v_reuseFailAlloc_3337_;
goto v_reusejp_3335_;
}
v_reusejp_3335_:
{
v___y_3292_ = v___x_3336_;
goto v___jp_3291_;
}
}
v___jp_3338_:
{
lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; lean_object* v___x_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; 
v___x_3340_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9));
v___x_3341_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc_n(v_fst_3295_, 6);
v___x_3342_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3295_, v___x_3340_, v___x_3341_);
v___x_3343_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10));
v___x_3344_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3295_, v___x_3343_, v___x_3341_);
v___x_3345_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11));
v___x_3346_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_3347_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3295_, v___x_3345_, v___x_3346_);
v___x_3348_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12));
v___x_3349_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3295_, v___x_3348_, v___x_3346_);
v___x_3350_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_3351_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3295_, v___x_3350_, v___x_3300_);
v___x_3352_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13));
v___x_3353_ = l_Lean_Json_getObjVal_x3f(v_fst_3295_, v___x_3352_);
if (lean_obj_tag(v___x_3353_) == 0)
{
lean_object* v___x_3354_; 
lean_dec_ref_known(v___x_3353_, 1);
v___x_3354_ = lean_box(0);
v___y_3315_ = v___x_3341_;
v___y_3316_ = v___x_3351_;
v___y_3317_ = v___x_3347_;
v___y_3318_ = v___y_3339_;
v___y_3319_ = v___x_3349_;
v___y_3320_ = v___x_3342_;
v___y_3321_ = v___x_3344_;
v___y_3322_ = v___x_3354_;
goto v___jp_3314_;
}
else
{
lean_object* v_a_3355_; lean_object* v___x_3356_; 
v_a_3355_ = lean_ctor_get(v___x_3353_, 0);
lean_inc(v_a_3355_);
lean_dec_ref_known(v___x_3353_, 1);
v___x_3356_ = lp_choreo_Choreo_jsonState(v_a_3355_);
v___y_3315_ = v___x_3341_;
v___y_3316_ = v___x_3351_;
v___y_3317_ = v___x_3347_;
v___y_3318_ = v___y_3339_;
v___y_3319_ = v___x_3349_;
v___y_3320_ = v___x_3342_;
v___y_3321_ = v___x_3344_;
v___y_3322_ = v___x_3356_;
goto v___jp_3314_;
}
}
}
else
{
lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v_times_3364_; lean_object* v___y_3366_; lean_object* v___x_3370_; lean_object* v___x_3371_; 
lean_dec_ref(v_kind_3301_);
lean_del_object(v___x_3289_);
v___x_3362_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15));
v___x_3363_ = lean_unsigned_to_nat(2u);
lean_inc_n(v_fst_3295_, 2);
v_times_3364_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3295_, v___x_3362_, v___x_3363_);
v___x_3370_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3371_ = l_Lean_Json_getObjVal_x3f(v_fst_3295_, v___x_3370_);
if (lean_obj_tag(v___x_3371_) == 1)
{
lean_object* v_a_3372_; lean_object* v___x_3373_; 
v_a_3372_ = lean_ctor_get(v___x_3371_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3371_, 1);
lean_inc_ref(v_next_3281_);
v___x_3373_ = lp_choreo_Choreo_readOps(v_sec_3298_, v_next_3281_, v_a_3372_);
lean_dec_ref(v_sec_3298_);
v___y_3366_ = v___x_3373_;
goto v___jp_3365_;
}
else
{
lean_object* v___x_3374_; 
lean_dec_ref(v___x_3371_);
lean_dec_ref(v_sec_3298_);
v___x_3374_ = lean_box(0);
v___y_3366_ = v___x_3374_;
goto v___jp_3365_;
}
v___jp_3365_:
{
lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; 
v___x_3367_ = l_List_range(v_times_3364_);
v___x_3368_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
lean_inc_ref(v_next_3281_);
v___x_3369_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3281_, v_snd_3296_, v_fst_3295_, v___y_3366_, v___x_3367_, v___x_3368_);
lean_dec(v___x_3367_);
v___y_3292_ = v___x_3369_;
goto v___jp_3291_;
}
}
v___jp_3291_:
{
lean_object* v___x_3293_; lean_object* v___x_3294_; 
v___x_3293_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3284_, v___y_3292_);
v___x_3294_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(v_sectionName_3282_, v_next_3281_, v_tail_3287_, v___x_3293_);
return v___x_3294_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps(lean_object* v_sectionName_3376_, lean_object* v_next_3377_, lean_object* v_j_3378_){
_start:
{
if (lean_obj_tag(v_j_3378_) == 4)
{
lean_object* v_elems_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v_elems_3379_ = lean_ctor_get(v_j_3378_, 0);
lean_inc_ref(v_elems_3379_);
lean_dec_ref_known(v_j_3378_, 1);
v___x_3380_ = lean_array_to_list(v_elems_3379_);
v___x_3381_ = lean_unsigned_to_nat(0u);
v___x_3382_ = l_List_zipIdxTR___redArg(v___x_3380_, v___x_3381_);
v___x_3383_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
v___x_3384_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(v_next_3377_, v_sectionName_3376_, v___x_3382_, v___x_3383_);
return v___x_3384_;
}
else
{
lean_object* v___x_3385_; 
lean_dec(v_j_3378_);
lean_dec_ref(v_next_3377_);
v___x_3385_ = lean_box(0);
return v___x_3385_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps___boxed(lean_object* v_sectionName_3386_, lean_object* v_next_3387_, lean_object* v_j_3388_){
_start:
{
lean_object* v_res_3389_; 
v_res_3389_ = lp_choreo_Choreo_readOps(v_sectionName_3386_, v_next_3387_, v_j_3388_);
lean_dec_ref(v_sectionName_3386_);
return v_res_3389_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___boxed(lean_object* v_next_3390_, lean_object* v_sectionName_3391_, lean_object* v_a_3392_, lean_object* v_a_3393_){
_start:
{
lean_object* v_res_3394_; 
v_res_3394_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(v_next_3390_, v_sectionName_3391_, v_a_3392_, v_a_3393_);
lean_dec_ref(v_sectionName_3391_);
return v_res_3394_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7___boxed(lean_object* v_sectionName_3395_, lean_object* v_next_3396_, lean_object* v_a_3397_, lean_object* v_a_3398_){
_start:
{
lean_object* v_res_3399_; 
v_res_3399_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(v_sectionName_3395_, v_next_3396_, v_a_3397_, v_a_3398_);
lean_dec_ref(v_sectionName_3395_);
return v_res_3399_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0(lean_object* v_snd_3400_, lean_object* v_x_3401_){
_start:
{
lean_object* v___x_3402_; 
v___x_3402_ = lean_nat_add(v_x_3401_, v_snd_3400_);
return v___x_3402_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0___boxed(lean_object* v_snd_3403_, lean_object* v_x_3404_){
_start:
{
lean_object* v_res_3405_; 
v_res_3405_ = lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0(v_snd_3403_, v_x_3404_);
lean_dec(v_x_3404_);
lean_dec(v_snd_3403_);
return v_res_3405_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0(lean_object* v_x_3411_, lean_object* v_x_3412_){
_start:
{
if (lean_obj_tag(v_x_3412_) == 0)
{
return v_x_3411_;
}
else
{
lean_object* v_head_3413_; lean_object* v_tail_3414_; lean_object* v_fst_3415_; lean_object* v_snd_3416_; lean_object* v___x_3418_; uint8_t v_isShared_3419_; uint8_t v_isSharedCheck_3447_; 
v_head_3413_ = lean_ctor_get(v_x_3412_, 0);
lean_inc(v_head_3413_);
v_tail_3414_ = lean_ctor_get(v_x_3412_, 1);
lean_inc(v_tail_3414_);
lean_dec_ref_known(v_x_3412_, 2);
v_fst_3415_ = lean_ctor_get(v_x_3411_, 0);
v_snd_3416_ = lean_ctor_get(v_x_3411_, 1);
v_isSharedCheck_3447_ = !lean_is_exclusive(v_x_3411_);
if (v_isSharedCheck_3447_ == 0)
{
v___x_3418_ = v_x_3411_;
v_isShared_3419_ = v_isSharedCheck_3447_;
goto v_resetjp_3417_;
}
else
{
lean_inc(v_snd_3416_);
lean_inc(v_fst_3415_);
lean_dec(v_x_3411_);
v___x_3418_ = lean_box(0);
v_isShared_3419_ = v_isSharedCheck_3447_;
goto v_resetjp_3417_;
}
v_resetjp_3417_:
{
lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___f_3428_; lean_object* v___y_3430_; lean_object* v___y_3431_; lean_object* v___y_3438_; lean_object* v___x_3443_; lean_object* v___x_3444_; 
lean_inc(v_snd_3416_);
v___f_3428_ = lean_alloc_closure((void*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3428_, 0, v_snd_3416_);
v___x_3443_ = ((lean_object*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__2));
lean_inc(v_head_3413_);
v___x_3444_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_head_3413_, v___x_3443_);
if (lean_obj_tag(v___x_3444_) == 0)
{
lean_object* v___x_3445_; 
lean_dec_ref_known(v___x_3444_, 1);
v___x_3445_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3438_ = v___x_3445_;
goto v___jp_3437_;
}
else
{
lean_object* v_a_3446_; 
v_a_3446_ = lean_ctor_get(v___x_3444_, 0);
lean_inc(v_a_3446_);
lean_dec_ref_known(v___x_3444_, 1);
v___y_3438_ = v_a_3446_;
goto v___jp_3437_;
}
v___jp_3420_:
{
lean_object* v___x_3423_; lean_object* v___x_3425_; 
v___x_3423_ = lean_nat_add(v_snd_3416_, v___y_3422_);
lean_dec(v___y_3422_);
lean_dec(v_snd_3416_);
if (v_isShared_3419_ == 0)
{
lean_ctor_set(v___x_3418_, 1, v___x_3423_);
lean_ctor_set(v___x_3418_, 0, v___y_3421_);
v___x_3425_ = v___x_3418_;
goto v_reusejp_3424_;
}
else
{
lean_object* v_reuseFailAlloc_3427_; 
v_reuseFailAlloc_3427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3427_, 0, v___y_3421_);
lean_ctor_set(v_reuseFailAlloc_3427_, 1, v___x_3423_);
v___x_3425_ = v_reuseFailAlloc_3427_;
goto v_reusejp_3424_;
}
v_reusejp_3424_:
{
v_x_3411_ = v___x_3425_;
v_x_3412_ = v_tail_3414_;
goto _start;
}
}
v___jp_3429_:
{
lean_object* v_got_3432_; lean_object* v___x_3433_; 
lean_inc(v___y_3431_);
v_got_3432_ = lp_choreo_Choreo_readOps(v___y_3430_, v___f_3428_, v___y_3431_);
lean_dec_ref(v___y_3430_);
v___x_3433_ = l_List_appendTR___redArg(v_fst_3415_, v_got_3432_);
if (lean_obj_tag(v___y_3431_) == 4)
{
lean_object* v_elems_3434_; lean_object* v___x_3435_; 
v_elems_3434_ = lean_ctor_get(v___y_3431_, 0);
lean_inc_ref(v_elems_3434_);
lean_dec_ref_known(v___y_3431_, 1);
v___x_3435_ = lean_array_get_size(v_elems_3434_);
lean_dec_ref(v_elems_3434_);
v___y_3421_ = v___x_3433_;
v___y_3422_ = v___x_3435_;
goto v___jp_3420_;
}
else
{
lean_object* v___x_3436_; 
lean_dec(v___y_3431_);
v___x_3436_ = lean_unsigned_to_nat(0u);
v___y_3421_ = v___x_3433_;
v___y_3422_ = v___x_3436_;
goto v___jp_3420_;
}
}
v___jp_3437_:
{
lean_object* v___x_3439_; lean_object* v___x_3440_; 
v___x_3439_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3440_ = l_Lean_Json_getObjVal_x3f(v_head_3413_, v___x_3439_);
if (lean_obj_tag(v___x_3440_) == 1)
{
lean_object* v_a_3441_; 
v_a_3441_ = lean_ctor_get(v___x_3440_, 0);
lean_inc(v_a_3441_);
lean_dec_ref_known(v___x_3440_, 1);
v___y_3430_ = v___y_3438_;
v___y_3431_ = v_a_3441_;
goto v___jp_3429_;
}
else
{
lean_object* v___x_3442_; 
lean_dec_ref(v___x_3440_);
v___x_3442_ = ((lean_object*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__1));
v___y_3430_ = v___y_3438_;
v___y_3431_ = v___x_3442_;
goto v___jp_3429_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readProgram(lean_object* v_j_3460_){
_start:
{
lean_object* v___y_3462_; lean_object* v___y_3463_; lean_object* v___y_3464_; lean_object* v___y_3465_; lean_object* v___y_3466_; lean_object* v___y_3467_; lean_object* v___y_3468_; lean_object* v___y_3469_; lean_object* v___y_3470_; lean_object* v___y_3474_; lean_object* v___y_3475_; lean_object* v___y_3476_; lean_object* v___y_3477_; lean_object* v___y_3478_; lean_object* v___y_3479_; lean_object* v___y_3480_; lean_object* v___y_3481_; lean_object* v___x_3486_; lean_object* v___x_3487_; 
v___x_3486_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__1));
lean_inc(v_j_3460_);
v___x_3487_ = l_Lean_Json_getObjVal_x3f(v_j_3460_, v___x_3486_);
if (lean_obj_tag(v___x_3487_) == 1)
{
lean_object* v_a_3488_; lean_object* v___y_3490_; lean_object* v___y_3491_; lean_object* v___y_3492_; lean_object* v___y_3493_; lean_object* v___y_3494_; lean_object* v___y_3495_; lean_object* v___y_3496_; lean_object* v___y_3503_; lean_object* v___y_3504_; lean_object* v___y_3505_; lean_object* v___y_3506_; lean_object* v___y_3507_; lean_object* v___y_3508_; lean_object* v___y_3514_; lean_object* v___y_3515_; lean_object* v___y_3516_; lean_object* v___y_3517_; lean_object* v___y_3518_; lean_object* v___y_3524_; lean_object* v___y_3525_; lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___y_3533_; lean_object* v___y_3534_; lean_object* v___y_3535_; lean_object* v___y_3541_; lean_object* v___y_3542_; lean_object* v___y_3548_; lean_object* v___x_3558_; lean_object* v___x_3559_; 
v_a_3488_ = lean_ctor_get(v___x_3487_, 0);
lean_inc_n(v_a_3488_, 2);
lean_dec_ref_known(v___x_3487_, 1);
v___x_3558_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__9));
v___x_3559_ = l_Lean_Json_getObjVal_x3f(v_a_3488_, v___x_3558_);
if (lean_obj_tag(v___x_3559_) == 1)
{
lean_object* v_a_3560_; 
v_a_3560_ = lean_ctor_get(v___x_3559_, 0);
lean_inc(v_a_3560_);
lean_dec_ref_known(v___x_3559_, 1);
if (lean_obj_tag(v_a_3560_) == 4)
{
lean_object* v_elems_3561_; lean_object* v___x_3562_; 
v_elems_3561_ = lean_ctor_get(v_a_3560_, 0);
lean_inc_ref(v_elems_3561_);
lean_dec_ref_known(v_a_3560_, 1);
v___x_3562_ = lean_array_to_list(v_elems_3561_);
v___y_3548_ = v___x_3562_;
goto v___jp_3547_;
}
else
{
lean_dec(v_a_3560_);
goto v___jp_3556_;
}
}
else
{
lean_dec_ref(v___x_3559_);
goto v___jp_3556_;
}
v___jp_3489_:
{
lean_object* v___x_3497_; lean_object* v___x_3498_; 
v___x_3497_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__2));
v___x_3498_ = l_Lean_Json_getObjVal_x3f(v_a_3488_, v___x_3497_);
if (lean_obj_tag(v___x_3498_) == 0)
{
lean_object* v___x_3499_; 
lean_dec_ref_known(v___x_3498_, 1);
v___x_3499_ = lean_box(0);
v___y_3474_ = v___y_3490_;
v___y_3475_ = v___y_3491_;
v___y_3476_ = v___y_3492_;
v___y_3477_ = v___y_3496_;
v___y_3478_ = v___y_3493_;
v___y_3479_ = v___y_3495_;
v___y_3480_ = v___y_3494_;
v___y_3481_ = v___x_3499_;
goto v___jp_3473_;
}
else
{
lean_object* v_a_3500_; lean_object* v___x_3501_; 
v_a_3500_ = lean_ctor_get(v___x_3498_, 0);
lean_inc(v_a_3500_);
lean_dec_ref_known(v___x_3498_, 1);
v___x_3501_ = lp_choreo_Choreo_jsonState(v_a_3500_);
v___y_3474_ = v___y_3490_;
v___y_3475_ = v___y_3491_;
v___y_3476_ = v___y_3492_;
v___y_3477_ = v___y_3496_;
v___y_3478_ = v___y_3493_;
v___y_3479_ = v___y_3495_;
v___y_3480_ = v___y_3494_;
v___y_3481_ = v___x_3501_;
goto v___jp_3473_;
}
}
v___jp_3502_:
{
lean_object* v___x_3509_; lean_object* v___x_3510_; 
v___x_3509_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__3));
lean_inc(v_a_3488_);
v___x_3510_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3488_, v___x_3509_);
if (lean_obj_tag(v___x_3510_) == 0)
{
lean_object* v___x_3511_; 
lean_dec_ref_known(v___x_3510_, 1);
v___x_3511_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___y_3490_ = v___y_3503_;
v___y_3491_ = v___y_3504_;
v___y_3492_ = v___y_3505_;
v___y_3493_ = v___y_3508_;
v___y_3494_ = v___y_3507_;
v___y_3495_ = v___y_3506_;
v___y_3496_ = v___x_3511_;
goto v___jp_3489_;
}
else
{
lean_object* v_a_3512_; 
v_a_3512_ = lean_ctor_get(v___x_3510_, 0);
lean_inc(v_a_3512_);
lean_dec_ref_known(v___x_3510_, 1);
v___y_3490_ = v___y_3503_;
v___y_3491_ = v___y_3504_;
v___y_3492_ = v___y_3505_;
v___y_3493_ = v___y_3508_;
v___y_3494_ = v___y_3507_;
v___y_3495_ = v___y_3506_;
v___y_3496_ = v_a_3512_;
goto v___jp_3489_;
}
}
v___jp_3513_:
{
lean_object* v___x_3519_; lean_object* v___x_3520_; 
v___x_3519_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__4));
lean_inc(v_a_3488_);
v___x_3520_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3488_, v___x_3519_);
if (lean_obj_tag(v___x_3520_) == 0)
{
lean_object* v___x_3521_; 
lean_dec_ref_known(v___x_3520_, 1);
v___x_3521_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3503_ = v___y_3514_;
v___y_3504_ = v___y_3515_;
v___y_3505_ = v___y_3518_;
v___y_3506_ = v___y_3517_;
v___y_3507_ = v___y_3516_;
v___y_3508_ = v___x_3521_;
goto v___jp_3502_;
}
else
{
lean_object* v_a_3522_; 
v_a_3522_ = lean_ctor_get(v___x_3520_, 0);
lean_inc(v_a_3522_);
lean_dec_ref_known(v___x_3520_, 1);
v___y_3503_ = v___y_3514_;
v___y_3504_ = v___y_3515_;
v___y_3505_ = v___y_3518_;
v___y_3506_ = v___y_3517_;
v___y_3507_ = v___y_3516_;
v___y_3508_ = v_a_3522_;
goto v___jp_3502_;
}
}
v___jp_3523_:
{
lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3528_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__5));
lean_inc(v_a_3488_);
v___x_3529_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_a_3488_, v___x_3528_);
if (lean_obj_tag(v___x_3529_) == 0)
{
lean_object* v___x_3530_; 
lean_dec_ref_known(v___x_3529_, 1);
v___x_3530_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0, &lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0);
v___y_3514_ = v___y_3527_;
v___y_3515_ = v___y_3524_;
v___y_3516_ = v___y_3526_;
v___y_3517_ = v___y_3525_;
v___y_3518_ = v___x_3530_;
goto v___jp_3513_;
}
else
{
lean_object* v_a_3531_; 
v_a_3531_ = lean_ctor_get(v___x_3529_, 0);
lean_inc(v_a_3531_);
lean_dec_ref_known(v___x_3529_, 1);
v___y_3514_ = v___y_3527_;
v___y_3515_ = v___y_3524_;
v___y_3516_ = v___y_3526_;
v___y_3517_ = v___y_3525_;
v___y_3518_ = v_a_3531_;
goto v___jp_3513_;
}
}
v___jp_3532_:
{
lean_object* v___x_3536_; lean_object* v___x_3537_; 
v___x_3536_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__6));
lean_inc(v_a_3488_);
v___x_3537_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_a_3488_, v___x_3536_);
if (lean_obj_tag(v___x_3537_) == 0)
{
lean_object* v___x_3538_; 
lean_dec_ref_known(v___x_3537_, 1);
v___x_3538_ = lean_unsigned_to_nat(120u);
v___y_3524_ = v___y_3535_;
v___y_3525_ = v___y_3534_;
v___y_3526_ = v___y_3533_;
v___y_3527_ = v___x_3538_;
goto v___jp_3523_;
}
else
{
lean_object* v_a_3539_; 
v_a_3539_ = lean_ctor_get(v___x_3537_, 0);
lean_inc(v_a_3539_);
lean_dec_ref_known(v___x_3537_, 1);
v___y_3524_ = v___y_3535_;
v___y_3525_ = v___y_3534_;
v___y_3526_ = v___y_3533_;
v___y_3527_ = v_a_3539_;
goto v___jp_3523_;
}
}
v___jp_3540_:
{
lean_object* v___x_3543_; lean_object* v___x_3544_; 
v___x_3543_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__7));
lean_inc(v_a_3488_);
v___x_3544_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_a_3488_, v___x_3543_);
if (lean_obj_tag(v___x_3544_) == 0)
{
lean_object* v___x_3545_; 
lean_dec_ref_known(v___x_3544_, 1);
v___x_3545_ = lean_unsigned_to_nat(8u);
v___y_3533_ = v___y_3541_;
v___y_3534_ = v___y_3542_;
v___y_3535_ = v___x_3545_;
goto v___jp_3532_;
}
else
{
lean_object* v_a_3546_; 
v_a_3546_ = lean_ctor_get(v___x_3544_, 0);
lean_inc(v_a_3546_);
lean_dec_ref_known(v___x_3544_, 1);
v___y_3533_ = v___y_3541_;
v___y_3534_ = v___y_3542_;
v___y_3535_ = v_a_3546_;
goto v___jp_3532_;
}
}
v___jp_3547_:
{
lean_object* v___x_3549_; lean_object* v___x_3550_; lean_object* v_fst_3551_; lean_object* v___x_3552_; lean_object* v___x_3553_; 
v___x_3549_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__8));
v___x_3550_ = lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0(v___x_3549_, v___y_3548_);
v_fst_3551_ = lean_ctor_get(v___x_3550_, 0);
lean_inc(v_fst_3551_);
lean_dec_ref(v___x_3550_);
v___x_3552_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc(v_a_3488_);
v___x_3553_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3488_, v___x_3552_);
if (lean_obj_tag(v___x_3553_) == 0)
{
lean_object* v___x_3554_; 
lean_dec_ref_known(v___x_3553_, 1);
v___x_3554_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3541_ = v_fst_3551_;
v___y_3542_ = v___x_3554_;
goto v___jp_3540_;
}
else
{
lean_object* v_a_3555_; 
v_a_3555_ = lean_ctor_get(v___x_3553_, 0);
lean_inc(v_a_3555_);
lean_dec_ref_known(v___x_3553_, 1);
v___y_3541_ = v_fst_3551_;
v___y_3542_ = v_a_3555_;
goto v___jp_3540_;
}
}
v___jp_3556_:
{
lean_object* v___x_3557_; 
v___x_3557_ = lean_box(0);
v___y_3548_ = v___x_3557_;
goto v___jp_3547_;
}
}
else
{
lean_object* v___x_3563_; 
lean_dec_ref(v___x_3487_);
lean_dec(v_j_3460_);
v___x_3563_ = lean_box(0);
return v___x_3563_;
}
v___jp_3461_:
{
lean_object* v___x_3471_; lean_object* v___x_3472_; 
v___x_3471_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3471_, 0, v___y_3469_);
lean_ctor_set(v___x_3471_, 1, v___y_3463_);
lean_ctor_set(v___x_3471_, 2, v___y_3462_);
lean_ctor_set(v___x_3471_, 3, v___y_3464_);
lean_ctor_set(v___x_3471_, 4, v___y_3466_);
lean_ctor_set(v___x_3471_, 5, v___y_3465_);
lean_ctor_set(v___x_3471_, 6, v___y_3467_);
lean_ctor_set(v___x_3471_, 7, v___y_3468_);
lean_ctor_set(v___x_3471_, 8, v___y_3470_);
v___x_3472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3472_, 0, v___x_3471_);
return v___x_3472_;
}
v___jp_3473_:
{
lean_object* v___x_3482_; lean_object* v___x_3483_; 
v___x_3482_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__0));
v___x_3483_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_j_3460_, v___x_3482_);
if (lean_obj_tag(v___x_3483_) == 0)
{
lean_object* v___x_3484_; 
lean_dec_ref_known(v___x_3483_, 1);
v___x_3484_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3462_ = v___y_3474_;
v___y_3463_ = v___y_3475_;
v___y_3464_ = v___y_3476_;
v___y_3465_ = v___y_3477_;
v___y_3466_ = v___y_3478_;
v___y_3467_ = v___y_3481_;
v___y_3468_ = v___y_3480_;
v___y_3469_ = v___y_3479_;
v___y_3470_ = v___x_3484_;
goto v___jp_3461_;
}
else
{
lean_object* v_a_3485_; 
v_a_3485_ = lean_ctor_get(v___x_3483_, 0);
lean_inc(v_a_3485_);
lean_dec_ref_known(v___x_3483_, 1);
v___y_3462_ = v___y_3474_;
v___y_3463_ = v___y_3475_;
v___y_3464_ = v___y_3476_;
v___y_3465_ = v___y_3477_;
v___y_3466_ = v___y_3478_;
v___y_3467_ = v___y_3481_;
v___y_3468_ = v___y_3480_;
v___y_3469_ = v___y_3479_;
v___y_3470_ = v_a_3485_;
goto v___jp_3461_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Planner(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Language(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Composition(uint8_t builtin);
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Program(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Planner(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Language(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Composition(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_Choreo_instInhabitedSurfaceOp_default = _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedSurfaceOp_default);
lp_choreo_Choreo_instInhabitedSurfaceOp = _init_lp_choreo_Choreo_instInhabitedSurfaceOp();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedSurfaceOp);
lp_choreo_Choreo_instInhabitedProgramSpec_default = _init_lp_choreo_Choreo_instInhabitedProgramSpec_default();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedProgramSpec_default);
lp_choreo_Choreo_instInhabitedProgramSpec = _init_lp_choreo_Choreo_instInhabitedProgramSpec();
lean_mark_persistent(lp_choreo_Choreo_instInhabitedProgramSpec);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
