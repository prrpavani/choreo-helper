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
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_choreo_Choreo_State_at(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_easePath(lean_object*, lean_object*);
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
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
lean_object* lp_choreo_Choreo_Op_next(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Op_orbits(lean_object*);
extern lean_object* lp_choreo_Choreo_instInhabitedPt_default;
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_chooseCerts(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_rotatePath(lean_object*, lean_object*, uint8_t);
lean_object* lean_int_neg(lean_object*);
extern lean_object* lp_choreo_Choreo_centre;
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* l_Nat_cast___at___00Dyadic_toRat_spec__0(lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_distSq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_improveAssign(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lp_choreo_Choreo_stepMoves(lean_object*);
lean_object* lp_choreo_Choreo_stepTitle(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Shape_formation(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Formation_slots(lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileEnter_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_ringPoints(lean_object*, lean_object*, lean_object*, double);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_wayDrafts_spec__3(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_gapSq_x27(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Draft_toPhase(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
uint8_t lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(lean_object*, lean_object*);
lean_object* lean_nat_abs(lean_object*);
lean_object* lean_nat_div(lean_object*, lean_object*);
lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildPlanOnce_spec__7(lean_object*, lean_object*);
extern lean_object* lp_choreo_Choreo_vmaxMM;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_staggeredLines___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_staggeredLines___closed__0;
static lean_once_cell_t lp_choreo_Choreo_staggeredLines___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_staggeredLines___closed__1;
static lean_once_cell_t lp_choreo_Choreo_staggeredLines___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_staggeredLines___closed__2;
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
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "arc"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__12 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__12_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "symmetric"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__13 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__13_value;
static const lean_string_object lp_choreo_Choreo_namedPlaces___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "staggered"};
static const lean_object* lp_choreo_Choreo_namedPlaces___closed__14 = (const lean_object*)&lp_choreo_Choreo_namedPlaces___closed__14_value;
static lean_once_cell_t lp_choreo_Choreo_namedPlaces___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_namedPlaces___closed__15;
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
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___lam__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Rotate "};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__0 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__0_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 1, .m_data = "°"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__1 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__1_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rotate"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Rotate"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__3 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__3_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "Lean's checker passes these exact arcs from where everyone stands."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__4 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__4_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 78, .m_capacity = 78, .m_length = 77, .m_data = "Each dancer stays exactly the same distance from the centre, at every moment."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__5 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__5_value;
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hold"};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "Everyone is at least "};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = " cm apart."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2_value;
static const lean_string_object lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 60, .m_capacity = 60, .m_length = 59, .m_data = "They dance in unison, so every gap stays exactly as it was."};
static const lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__3 = (const lean_object*)&lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_compileOp___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Move to "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__0 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__0_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "form"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__1 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__1_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Lean's checker passes these exact paths from where everyone stands."};
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
static const lean_string_object lp_choreo_Choreo_compileOp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Every gap has grown or shrunk by the same factor."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__21 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__21_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Mirror"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__22 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__22_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "flip"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__23 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__23_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 71, .m_capacity = 71, .m_length = 70, .m_data = "Dancers crossing to the other side each have their own lane: at least "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__24 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__24_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 59, .m_capacity = 59, .m_length = 58, .m_data = " cm upstage or downstage of anyone crossing the other way."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__25 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__25_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 100, .m_capacity = 100, .m_length = 99, .m_data = "Everyone stands at the mirror image of where they began. Every gap in the formation is what it was."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__26 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__26_value;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__27_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__27;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__28;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__29;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Hold"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__30 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__30_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Nobody moves."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__31 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__31_value;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__32_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__32;
static lean_once_cell_t lp_choreo_Choreo_compileOp___closed__33_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_compileOp___closed__33;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Exchange groups"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__34 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__34_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "swap"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__35 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__35_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Two groups in separate lanes: every member of one is at least "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__36 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__36_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = " cm upstage or downstage of every member of the other."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__37 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__37_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__38_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "The groups have traded sides, still in their lanes. Nobody meets anybody on the way."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__38 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__38_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__39_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Move everyone together"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__39 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__39_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__40_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Translate"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__40 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__40_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__41_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = " cm apart to begin with."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__41 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__41_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__42_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Every gap stays exactly as it was, at every moment."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__42 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__42_value;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ", reversed"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps(lean_object*, lean_object*);
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
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_267_; lean_object* v___x_268_; 
v___x_267_ = lean_unsigned_to_nat(1000u);
v___x_268_ = lean_nat_to_int(v___x_267_);
return v___x_268_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_269_; lean_object* v___x_270_; 
v___x_269_ = lean_unsigned_to_nat(800u);
v___x_270_ = lean_nat_to_int(v___x_269_);
return v___x_270_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_271_; lean_object* v___x_272_; 
v___x_271_ = lean_unsigned_to_nat(2000u);
v___x_272_ = lean_nat_to_int(v___x_271_);
return v___x_272_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_273_ = lean_unsigned_to_nat(1100u);
v___x_274_ = lean_nat_to_int(v___x_273_);
return v___x_274_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_275_; lean_object* v___x_276_; 
v___x_275_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_276_ = lean_int_neg(v___x_275_);
return v___x_276_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0(lean_object* v_a_277_, lean_object* v_a_278_){
_start:
{
if (lean_obj_tag(v_a_277_) == 0)
{
lean_object* v___x_279_; 
v___x_279_ = l_List_reverse___redArg(v_a_278_);
return v___x_279_;
}
else
{
lean_object* v_head_280_; lean_object* v_tail_281_; lean_object* v___x_283_; uint8_t v_isShared_284_; uint8_t v_isSharedCheck_310_; 
v_head_280_ = lean_ctor_get(v_a_277_, 0);
v_tail_281_ = lean_ctor_get(v_a_277_, 1);
v_isSharedCheck_310_ = !lean_is_exclusive(v_a_277_);
if (v_isSharedCheck_310_ == 0)
{
v___x_283_ = v_a_277_;
v_isShared_284_ = v_isSharedCheck_310_;
goto v_resetjp_282_;
}
else
{
lean_inc(v_tail_281_);
lean_inc(v_head_280_);
lean_dec(v_a_277_);
v___x_283_ = lean_box(0);
v_isShared_284_ = v_isSharedCheck_310_;
goto v_resetjp_282_;
}
v_resetjp_282_:
{
lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v_k_288_; lean_object* v___y_290_; lean_object* v___x_305_; lean_object* v___x_306_; uint8_t v___x_307_; 
v___x_285_ = lean_unsigned_to_nat(2u);
v___x_286_ = lean_unsigned_to_nat(1u);
v___x_287_ = lean_nat_shiftr(v_head_280_, v___x_286_);
v_k_288_ = lean_nat_to_int(v___x_287_);
v___x_305_ = lean_nat_mod(v_head_280_, v___x_285_);
lean_dec(v_head_280_);
v___x_306_ = lean_unsigned_to_nat(0u);
v___x_307_ = lean_nat_dec_eq(v___x_305_, v___x_306_);
lean_dec(v___x_305_);
if (v___x_307_ == 0)
{
lean_object* v___x_308_; 
v___x_308_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___y_290_ = v___x_308_;
goto v___jp_289_;
}
else
{
lean_object* v___x_309_; 
v___x_309_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4);
v___y_290_ = v___x_309_;
goto v___jp_289_;
}
v___jp_289_:
{
lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_302_; 
v___x_291_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0);
v___x_292_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1);
v___x_293_ = lean_int_mul(v_k_288_, v___x_292_);
v___x_294_ = lean_int_add(v___x_291_, v___x_293_);
lean_dec(v___x_293_);
v___x_295_ = lean_int_mul(v___y_290_, v___x_294_);
lean_dec(v___x_294_);
v___x_296_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2);
v___x_297_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3);
v___x_298_ = lean_int_mul(v_k_288_, v___x_297_);
lean_dec(v_k_288_);
v___x_299_ = lean_int_add(v___x_296_, v___x_298_);
lean_dec(v___x_298_);
v___x_300_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_300_, 0, v___x_295_);
lean_ctor_set(v___x_300_, 1, v___x_299_);
if (v_isShared_284_ == 0)
{
lean_ctor_set(v___x_283_, 1, v_a_278_);
lean_ctor_set(v___x_283_, 0, v___x_300_);
v___x_302_ = v___x_283_;
goto v_reusejp_301_;
}
else
{
lean_object* v_reuseFailAlloc_304_; 
v_reuseFailAlloc_304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_304_, 0, v___x_300_);
lean_ctor_set(v_reuseFailAlloc_304_, 1, v_a_278_);
v___x_302_ = v_reuseFailAlloc_304_;
goto v_reusejp_301_;
}
v_reusejp_301_:
{
v_a_277_ = v_tail_281_;
v_a_278_ = v___x_302_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0(lean_object* v_a_311_, lean_object* v_a_312_){
_start:
{
if (lean_obj_tag(v_a_311_) == 0)
{
lean_object* v___x_313_; 
v___x_313_ = l_List_reverse___redArg(v_a_312_);
return v___x_313_;
}
else
{
lean_object* v_head_314_; lean_object* v_tail_315_; lean_object* v___x_317_; uint8_t v_isShared_318_; uint8_t v_isSharedCheck_344_; 
v_head_314_ = lean_ctor_get(v_a_311_, 0);
v_tail_315_ = lean_ctor_get(v_a_311_, 1);
v_isSharedCheck_344_ = !lean_is_exclusive(v_a_311_);
if (v_isSharedCheck_344_ == 0)
{
v___x_317_ = v_a_311_;
v_isShared_318_ = v_isSharedCheck_344_;
goto v_resetjp_316_;
}
else
{
lean_inc(v_tail_315_);
lean_inc(v_head_314_);
lean_dec(v_a_311_);
v___x_317_ = lean_box(0);
v_isShared_318_ = v_isSharedCheck_344_;
goto v_resetjp_316_;
}
v_resetjp_316_:
{
lean_object* v___x_319_; lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v_k_322_; lean_object* v___y_324_; lean_object* v___x_339_; lean_object* v___x_340_; uint8_t v___x_341_; 
v___x_319_ = lean_unsigned_to_nat(2u);
v___x_320_ = lean_unsigned_to_nat(1u);
v___x_321_ = lean_nat_shiftr(v_head_314_, v___x_320_);
v_k_322_ = lean_nat_to_int(v___x_321_);
v___x_339_ = lean_nat_mod(v_head_314_, v___x_319_);
lean_dec(v_head_314_);
v___x_340_ = lean_unsigned_to_nat(0u);
v___x_341_ = lean_nat_dec_eq(v___x_339_, v___x_340_);
lean_dec(v___x_339_);
if (v___x_341_ == 0)
{
lean_object* v___x_342_; 
v___x_342_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___y_324_ = v___x_342_;
goto v___jp_323_;
}
else
{
lean_object* v___x_343_; 
v___x_343_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__4);
v___y_324_ = v___x_343_;
goto v___jp_323_;
}
v___jp_323_:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; lean_object* v___x_334_; lean_object* v___x_336_; 
v___x_325_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__0);
v___x_326_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__1);
v___x_327_ = lean_int_mul(v_k_322_, v___x_326_);
v___x_328_ = lean_int_add(v___x_325_, v___x_327_);
lean_dec(v___x_327_);
v___x_329_ = lean_int_mul(v___y_324_, v___x_328_);
lean_dec(v___x_328_);
v___x_330_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__2);
v___x_331_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0___closed__3);
v___x_332_ = lean_int_mul(v_k_322_, v___x_331_);
lean_dec(v_k_322_);
v___x_333_ = lean_int_add(v___x_330_, v___x_332_);
lean_dec(v___x_332_);
v___x_334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_334_, 0, v___x_329_);
lean_ctor_set(v___x_334_, 1, v___x_333_);
if (v_isShared_318_ == 0)
{
lean_ctor_set(v___x_317_, 1, v_a_312_);
lean_ctor_set(v___x_317_, 0, v___x_334_);
v___x_336_ = v___x_317_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_338_; 
v_reuseFailAlloc_338_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_338_, 0, v___x_334_);
lean_ctor_set(v_reuseFailAlloc_338_, 1, v_a_312_);
v___x_336_ = v_reuseFailAlloc_338_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; 
v___x_337_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0_spec__0(v_tail_315_, v___x_336_);
return v___x_337_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_mirroredPlaces(lean_object* v_n_345_){
_start:
{
lean_object* v___x_346_; lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_346_ = l_List_range(v_n_345_);
v___x_347_ = lean_box(0);
v___x_348_ = lp_choreo_List_mapTR_loop___at___00Choreo_mirroredPlaces_spec__0(v___x_346_, v___x_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(lean_object* v_count_349_, lean_object* v_shift_350_, lean_object* v_y_351_, lean_object* v_a_352_, lean_object* v_a_353_){
_start:
{
if (lean_obj_tag(v_a_352_) == 0)
{
lean_object* v___x_354_; 
lean_dec(v_y_351_);
lean_dec(v_count_349_);
v___x_354_ = l_List_reverse___redArg(v_a_353_);
return v___x_354_;
}
else
{
lean_object* v_head_355_; lean_object* v_tail_356_; lean_object* v___x_358_; uint8_t v_isShared_359_; uint8_t v_isSharedCheck_375_; 
v_head_355_ = lean_ctor_get(v_a_352_, 0);
v_tail_356_ = lean_ctor_get(v_a_352_, 1);
v_isSharedCheck_375_ = !lean_is_exclusive(v_a_352_);
if (v_isSharedCheck_375_ == 0)
{
v___x_358_ = v_a_352_;
v_isShared_359_ = v_isSharedCheck_375_;
goto v_resetjp_357_;
}
else
{
lean_inc(v_tail_356_);
lean_inc(v_head_355_);
lean_dec(v_a_352_);
v___x_358_ = lean_box(0);
v_isShared_359_ = v_isSharedCheck_375_;
goto v_resetjp_357_;
}
v_resetjp_357_:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v___x_362_; lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_365_; lean_object* v___x_366_; lean_object* v___x_367_; lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_372_; 
v___x_360_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_361_ = lean_nat_to_int(v_head_355_);
v___x_362_ = lean_int_mul(v___x_360_, v___x_361_);
lean_dec(v___x_361_);
v___x_363_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_364_ = lean_int_add(v___x_362_, v___x_363_);
lean_dec(v___x_362_);
lean_inc(v_count_349_);
v___x_365_ = lean_nat_to_int(v_count_349_);
v___x_366_ = lean_int_sub(v___x_364_, v___x_365_);
lean_dec(v___x_365_);
lean_dec(v___x_364_);
v___x_367_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__1, &lp_choreo_Choreo_evenLanes___closed__1_once, _init_lp_choreo_Choreo_evenLanes___closed__1);
v___x_368_ = lean_int_mul(v___x_366_, v___x_367_);
lean_dec(v___x_366_);
v___x_369_ = lean_int_add(v___x_368_, v_shift_350_);
lean_dec(v___x_368_);
lean_inc(v_y_351_);
v___x_370_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_370_, 0, v___x_369_);
lean_ctor_set(v___x_370_, 1, v_y_351_);
if (v_isShared_359_ == 0)
{
lean_ctor_set(v___x_358_, 1, v_a_353_);
lean_ctor_set(v___x_358_, 0, v___x_370_);
v___x_372_ = v___x_358_;
goto v_reusejp_371_;
}
else
{
lean_object* v_reuseFailAlloc_374_; 
v_reuseFailAlloc_374_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_374_, 0, v___x_370_);
lean_ctor_set(v_reuseFailAlloc_374_, 1, v_a_353_);
v___x_372_ = v_reuseFailAlloc_374_;
goto v_reusejp_371_;
}
v_reusejp_371_:
{
v_a_352_ = v_tail_356_;
v_a_353_ = v___x_372_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0___boxed(lean_object* v_count_376_, lean_object* v_shift_377_, lean_object* v_y_378_, lean_object* v_a_379_, lean_object* v_a_380_){
_start:
{
lean_object* v_res_381_; 
v_res_381_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(v_count_376_, v_shift_377_, v_y_378_, v_a_379_, v_a_380_);
lean_dec(v_shift_377_);
return v_res_381_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(lean_object* v_count_382_, lean_object* v_shift_383_, lean_object* v_y_384_, lean_object* v_a_385_, lean_object* v_a_386_){
_start:
{
if (lean_obj_tag(v_a_385_) == 0)
{
lean_object* v___x_387_; 
lean_dec(v_y_384_);
lean_dec(v_count_382_);
v___x_387_ = l_List_reverse___redArg(v_a_386_);
return v___x_387_;
}
else
{
lean_object* v_head_388_; lean_object* v_tail_389_; lean_object* v___x_391_; uint8_t v_isShared_392_; uint8_t v_isSharedCheck_408_; 
v_head_388_ = lean_ctor_get(v_a_385_, 0);
v_tail_389_ = lean_ctor_get(v_a_385_, 1);
v_isSharedCheck_408_ = !lean_is_exclusive(v_a_385_);
if (v_isSharedCheck_408_ == 0)
{
v___x_391_ = v_a_385_;
v_isShared_392_ = v_isSharedCheck_408_;
goto v_resetjp_390_;
}
else
{
lean_inc(v_tail_389_);
lean_inc(v_head_388_);
lean_dec(v_a_385_);
v___x_391_ = lean_box(0);
v_isShared_392_ = v_isSharedCheck_408_;
goto v_resetjp_390_;
}
v_resetjp_390_:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_402_; lean_object* v___x_403_; lean_object* v___x_405_; 
v___x_393_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_394_ = lean_nat_to_int(v_head_388_);
v___x_395_ = lean_int_mul(v___x_393_, v___x_394_);
lean_dec(v___x_394_);
v___x_396_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_397_ = lean_int_add(v___x_395_, v___x_396_);
lean_dec(v___x_395_);
lean_inc(v_count_382_);
v___x_398_ = lean_nat_to_int(v_count_382_);
v___x_399_ = lean_int_sub(v___x_397_, v___x_398_);
lean_dec(v___x_398_);
lean_dec(v___x_397_);
v___x_400_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__1, &lp_choreo_Choreo_evenLanes___closed__1_once, _init_lp_choreo_Choreo_evenLanes___closed__1);
v___x_401_ = lean_int_mul(v___x_399_, v___x_400_);
lean_dec(v___x_399_);
v___x_402_ = lean_int_add(v___x_401_, v_shift_383_);
lean_dec(v___x_401_);
lean_inc(v_y_384_);
v___x_403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_403_, 0, v___x_402_);
lean_ctor_set(v___x_403_, 1, v_y_384_);
if (v_isShared_392_ == 0)
{
lean_ctor_set(v___x_391_, 1, v_a_386_);
lean_ctor_set(v___x_391_, 0, v___x_403_);
v___x_405_ = v___x_391_;
goto v_reusejp_404_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___x_403_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v_a_386_);
v___x_405_ = v_reuseFailAlloc_407_;
goto v_reusejp_404_;
}
v_reusejp_404_:
{
lean_object* v___x_406_; 
v___x_406_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_staggeredLines_spec__0_spec__0(v_count_382_, v_shift_383_, v_y_384_, v_tail_389_, v___x_405_);
return v___x_406_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0___boxed(lean_object* v_count_409_, lean_object* v_shift_410_, lean_object* v_y_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
lean_object* v_res_414_; 
v_res_414_ = lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(v_count_409_, v_shift_410_, v_y_411_, v_a_412_, v_a_413_);
lean_dec(v_shift_410_);
return v_res_414_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0(lean_object* v_count_415_, lean_object* v_y_416_, lean_object* v_shift_417_){
_start:
{
lean_object* v___x_418_; lean_object* v___x_419_; lean_object* v___x_420_; 
lean_inc(v_count_415_);
v___x_418_ = l_List_range(v_count_415_);
v___x_419_ = lean_box(0);
v___x_420_ = lp_choreo_List_mapTR_loop___at___00Choreo_staggeredLines_spec__0(v_count_415_, v_shift_417_, v_y_416_, v___x_418_, v___x_419_);
return v___x_420_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___lam__0___boxed(lean_object* v_count_421_, lean_object* v_y_422_, lean_object* v_shift_423_){
_start:
{
lean_object* v_res_424_; 
v_res_424_ = lp_choreo_Choreo_staggeredLines___lam__0(v_count_421_, v_y_422_, v_shift_423_);
lean_dec(v_shift_423_);
return v_res_424_;
}
}
static lean_object* _init_lp_choreo_Choreo_staggeredLines___closed__0(void){
_start:
{
lean_object* v___x_425_; lean_object* v___x_426_; 
v___x_425_ = lean_unsigned_to_nat(450u);
v___x_426_ = lean_nat_to_int(v___x_425_);
return v___x_426_;
}
}
static lean_object* _init_lp_choreo_Choreo_staggeredLines___closed__1(void){
_start:
{
lean_object* v___x_427_; lean_object* v___x_428_; 
v___x_427_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__0, &lp_choreo_Choreo_staggeredLines___closed__0_once, _init_lp_choreo_Choreo_staggeredLines___closed__0);
v___x_428_ = lean_int_neg(v___x_427_);
return v___x_428_;
}
}
static lean_object* _init_lp_choreo_Choreo_staggeredLines___closed__2(void){
_start:
{
lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_429_ = lean_unsigned_to_nat(5000u);
v___x_430_ = lean_nat_to_int(v___x_429_);
return v___x_430_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines(lean_object* v_n_431_){
_start:
{
lean_object* v___x_432_; lean_object* v_back_433_; lean_object* v_front_434_; lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_432_ = lean_unsigned_to_nat(1u);
v_back_433_ = lean_nat_shiftr(v_n_431_, v___x_432_);
v_front_434_ = lean_nat_sub(v_n_431_, v_back_433_);
v___x_435_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_436_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__0, &lp_choreo_Choreo_staggeredLines___closed__0_once, _init_lp_choreo_Choreo_staggeredLines___closed__0);
v___x_437_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__1, &lp_choreo_Choreo_staggeredLines___closed__1_once, _init_lp_choreo_Choreo_staggeredLines___closed__1);
v___x_438_ = lp_choreo_Choreo_staggeredLines___lam__0(v_front_434_, v___x_435_, v___x_437_);
v___x_439_ = lean_obj_once(&lp_choreo_Choreo_staggeredLines___closed__2, &lp_choreo_Choreo_staggeredLines___closed__2_once, _init_lp_choreo_Choreo_staggeredLines___closed__2);
v___x_440_ = lp_choreo_Choreo_staggeredLines___lam__0(v_back_433_, v___x_439_, v___x_436_);
v___x_441_ = l_List_appendTR___redArg(v___x_438_, v___x_440_);
return v___x_441_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_staggeredLines___boxed(lean_object* v_n_442_){
_start:
{
lean_object* v_res_443_; 
v_res_443_ = lp_choreo_Choreo_staggeredLines(v_n_442_);
lean_dec(v_n_442_);
return v_res_443_;
}
}
static lean_object* _init_lp_choreo_Choreo_namedPlaces___closed__15(void){
_start:
{
lean_object* v___x_459_; lean_object* v___x_460_; 
v___x_459_ = lean_unsigned_to_nat(3315u);
v___x_460_ = lean_nat_to_int(v___x_459_);
return v___x_460_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces(lean_object* v_name_461_, lean_object* v_n_462_, lean_object* v_gap_463_){
_start:
{
lean_object* v_s_465_; lean_object* v___y_471_; lean_object* v___y_472_; lean_object* v___x_482_; uint8_t v___x_483_; 
v___x_482_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_483_ = lean_string_dec_eq(v_name_461_, v___x_482_);
if (v___x_483_ == 0)
{
lean_object* v___x_484_; uint8_t v___x_485_; 
v___x_484_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__0));
v___x_485_ = lean_string_dec_eq(v_name_461_, v___x_484_);
if (v___x_485_ == 0)
{
lean_object* v___x_486_; uint8_t v___x_487_; 
v___x_486_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_487_ = lean_string_dec_eq(v_name_461_, v___x_486_);
if (v___x_487_ == 0)
{
lean_object* v___x_488_; uint8_t v___x_489_; 
v___x_488_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__2));
v___x_489_ = lean_string_dec_eq(v_name_461_, v___x_488_);
if (v___x_489_ == 0)
{
lean_object* v___x_490_; uint8_t v___x_491_; 
v___x_490_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_491_ = lean_string_dec_eq(v_name_461_, v___x_490_);
if (v___x_491_ == 0)
{
lean_object* v___x_492_; uint8_t v___x_493_; 
v___x_492_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__3));
v___x_493_ = lean_string_dec_eq(v_name_461_, v___x_492_);
if (v___x_493_ == 0)
{
lean_object* v___x_494_; uint8_t v___x_495_; 
v___x_494_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__4));
v___x_495_ = lean_string_dec_eq(v_name_461_, v___x_494_);
if (v___x_495_ == 0)
{
lean_object* v___x_496_; uint8_t v___x_497_; 
v___x_496_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__5));
v___x_497_ = lean_string_dec_eq(v_name_461_, v___x_496_);
if (v___x_497_ == 0)
{
lean_object* v___x_498_; uint8_t v___x_499_; 
v___x_498_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__6));
v___x_499_ = lean_string_dec_eq(v_name_461_, v___x_498_);
if (v___x_499_ == 0)
{
lean_object* v___x_500_; uint8_t v___x_501_; 
v___x_500_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__7));
v___x_501_ = lean_string_dec_eq(v_name_461_, v___x_500_);
if (v___x_501_ == 0)
{
lean_object* v___x_502_; uint8_t v___x_503_; 
v___x_502_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__8));
v___x_503_ = lean_string_dec_eq(v_name_461_, v___x_502_);
if (v___x_503_ == 0)
{
lean_object* v___x_504_; uint8_t v___x_505_; 
v___x_504_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__9));
v___x_505_ = lean_string_dec_eq(v_name_461_, v___x_504_);
if (v___x_505_ == 0)
{
lean_object* v___x_506_; uint8_t v___x_507_; 
v___x_506_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__10));
v___x_507_ = lean_string_dec_eq(v_name_461_, v___x_506_);
if (v___x_507_ == 0)
{
lean_object* v___x_508_; uint8_t v___x_509_; 
v___x_508_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__11));
v___x_509_ = lean_string_dec_eq(v_name_461_, v___x_508_);
if (v___x_509_ == 0)
{
lean_object* v___x_510_; uint8_t v___x_511_; 
v___x_510_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__12));
v___x_511_ = lean_string_dec_eq(v_name_461_, v___x_510_);
if (v___x_511_ == 0)
{
lean_object* v___x_512_; uint8_t v___x_513_; 
v___x_512_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__13));
v___x_513_ = lean_string_dec_eq(v_name_461_, v___x_512_);
if (v___x_513_ == 0)
{
lean_object* v___x_514_; uint8_t v___x_515_; 
v___x_514_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__14));
v___x_515_ = lean_string_dec_eq(v_name_461_, v___x_514_);
if (v___x_515_ == 0)
{
lean_object* v___x_516_; 
v___x_516_ = lean_box(3);
v_s_465_ = v___x_516_;
goto v___jp_464_;
}
else
{
lean_object* v___x_517_; 
v___x_517_ = lp_choreo_Choreo_staggeredLines(v_n_462_);
lean_dec(v_n_462_);
return v___x_517_;
}
}
else
{
lean_object* v___x_518_; 
v___x_518_ = lp_choreo_Choreo_mirroredPlaces(v_n_462_);
return v___x_518_;
}
}
else
{
lean_object* v___x_519_; 
v___x_519_ = lp_choreo_Choreo_arcPlaces(v_n_462_);
return v___x_519_;
}
}
else
{
lean_object* v___x_520_; 
v___x_520_ = lp_choreo_Choreo_evenLanes(v_n_462_, v_gap_463_);
return v___x_520_;
}
}
else
{
lean_object* v___x_521_; 
v___x_521_ = lean_box(10);
v_s_465_ = v___x_521_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_522_; 
v___x_522_ = lean_box(9);
v_s_465_ = v___x_522_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_523_; 
v___x_523_ = lean_box(8);
v_s_465_ = v___x_523_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_524_; 
v___x_524_ = lean_box(6);
v_s_465_ = v___x_524_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_525_; 
v___x_525_ = lean_box(5);
v_s_465_ = v___x_525_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_526_; 
v___x_526_ = lean_box(4);
v_s_465_ = v___x_526_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_527_; 
v___x_527_ = lean_box(7);
v_s_465_ = v___x_527_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_528_; lean_object* v___x_529_; lean_object* v___x_530_; lean_object* v___x_531_; double v___x_532_; lean_object* v___x_533_; 
v___x_528_ = lp_choreo_Choreo_centre;
v___x_529_ = lean_obj_once(&lp_choreo_Choreo_namedPlaces___closed__15, &lp_choreo_Choreo_namedPlaces___closed__15_once, _init_lp_choreo_Choreo_namedPlaces___closed__15);
v___x_530_ = lean_unsigned_to_nat(0u);
v___x_531_ = lean_unsigned_to_nat(1u);
v___x_532_ = l_Float_ofScientific(v___x_530_, v___x_493_, v___x_531_);
v___x_533_ = lp_choreo_Choreo_ringPoints(v_n_462_, v___x_528_, v___x_529_, v___x_532_);
return v___x_533_;
}
}
else
{
lean_object* v___x_534_; 
v___x_534_ = lean_box(3);
v_s_465_ = v___x_534_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_535_; 
v___x_535_ = lean_box(2);
v_s_465_ = v___x_535_;
goto v___jp_464_;
}
}
else
{
lean_object* v___x_536_; 
v___x_536_ = lean_box(1);
v_s_465_ = v___x_536_;
goto v___jp_464_;
}
}
else
{
goto v___jp_474_;
}
}
else
{
goto v___jp_474_;
}
v___jp_464_:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; lean_object* v___x_469_; 
v___x_466_ = lp_choreo_Choreo_Shape_formation(v_s_465_, v_n_462_);
v___x_467_ = lp_choreo_Choreo_Formation_slots(v___x_466_);
v___x_468_ = lean_box(0);
v___x_469_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileEnter_spec__0(v___x_467_, v___x_468_);
return v___x_469_;
}
v___jp_470_:
{
lean_object* v___x_473_; 
v___x_473_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_473_, 0, v___y_471_);
lean_ctor_set(v___x_473_, 1, v___y_472_);
v_s_465_ = v___x_473_;
goto v___jp_464_;
}
v___jp_474_:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; uint8_t v___x_481_; 
v___x_475_ = lean_unsigned_to_nat(2u);
v___x_476_ = lean_unsigned_to_nat(1u);
v___x_477_ = lean_nat_shiftr(v_n_462_, v___x_476_);
v___x_478_ = lean_nat_mod(v_n_462_, v___x_475_);
v___x_479_ = lean_nat_add(v___x_477_, v___x_478_);
lean_dec(v___x_477_);
v___x_480_ = lean_unsigned_to_nat(0u);
v___x_481_ = lean_nat_dec_eq(v___x_478_, v___x_480_);
lean_dec(v___x_478_);
if (v___x_481_ == 0)
{
v___y_471_ = v___x_479_;
v___y_472_ = v___x_476_;
goto v___jp_470_;
}
else
{
v___y_471_ = v___x_479_;
v___y_472_ = v___x_475_;
goto v___jp_470_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces___boxed(lean_object* v_name_537_, lean_object* v_n_538_, lean_object* v_gap_539_){
_start:
{
lean_object* v_res_540_; 
v_res_540_ = lp_choreo_Choreo_namedPlaces(v_name_537_, v_n_538_, v_gap_539_);
lean_dec(v_gap_539_);
lean_dec_ref(v_name_537_);
return v_res_540_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_541_; uint8_t v___x_542_; lean_object* v___x_543_; double v___x_544_; 
v___x_541_ = lean_unsigned_to_nat(11u);
v___x_542_ = 1;
v___x_543_ = lean_cstr_to_nat("628318530718");
v___x_544_ = l_Float_ofScientific(v___x_543_, v___x_542_, v___x_541_);
return v___x_544_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_545_; uint8_t v___x_546_; lean_object* v___x_547_; double v___x_548_; 
v___x_545_ = lean_unsigned_to_nat(1u);
v___x_546_ = 1;
v___x_547_ = lean_unsigned_to_nat(14000u);
v___x_548_ = l_Float_ofScientific(v___x_547_, v___x_546_, v___x_545_);
return v___x_548_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_549_; lean_object* v___x_550_; 
v___x_549_ = lean_unsigned_to_nat(650u);
v___x_550_ = lean_nat_to_int(v___x_549_);
return v___x_550_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_551_; lean_object* v___x_552_; 
v___x_551_ = lean_unsigned_to_nat(500u);
v___x_552_ = lean_nat_to_int(v___x_551_);
return v___x_552_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_553_; lean_object* v___x_554_; 
v___x_553_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_554_ = lean_int_neg(v___x_553_);
return v___x_554_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(lean_object* v_name_555_, lean_object* v_cx_556_, lean_object* v_k_557_, lean_object* v_a_558_, lean_object* v_a_559_){
_start:
{
if (lean_obj_tag(v_a_558_) == 0)
{
lean_object* v___x_560_; 
lean_dec(v_k_557_);
lean_dec(v_cx_556_);
v___x_560_ = l_List_reverse___redArg(v_a_559_);
return v___x_560_;
}
else
{
lean_object* v_head_561_; lean_object* v_tail_562_; lean_object* v___x_564_; uint8_t v_isShared_565_; uint8_t v_isSharedCheck_643_; 
v_head_561_ = lean_ctor_get(v_a_558_, 0);
v_tail_562_ = lean_ctor_get(v_a_558_, 1);
v_isSharedCheck_643_ = !lean_is_exclusive(v_a_558_);
if (v_isSharedCheck_643_ == 0)
{
v___x_564_ = v_a_558_;
v_isShared_565_ = v_isSharedCheck_643_;
goto v_resetjp_563_;
}
else
{
lean_inc(v_tail_562_);
lean_inc(v_head_561_);
lean_dec(v_a_558_);
v___x_564_ = lean_box(0);
v_isShared_565_ = v_isSharedCheck_643_;
goto v_resetjp_563_;
}
v_resetjp_563_:
{
lean_object* v_fst_566_; lean_object* v_snd_567_; lean_object* v___x_569_; uint8_t v_isShared_570_; uint8_t v_isSharedCheck_642_; 
v_fst_566_ = lean_ctor_get(v_head_561_, 0);
v_snd_567_ = lean_ctor_get(v_head_561_, 1);
v_isSharedCheck_642_ = !lean_is_exclusive(v_head_561_);
if (v_isSharedCheck_642_ == 0)
{
v___x_569_ = v_head_561_;
v_isShared_570_ = v_isSharedCheck_642_;
goto v_resetjp_568_;
}
else
{
lean_inc(v_snd_567_);
lean_inc(v_fst_566_);
lean_dec(v_head_561_);
v___x_569_ = lean_box(0);
v_isShared_570_ = v_isSharedCheck_642_;
goto v_resetjp_568_;
}
v_resetjp_568_:
{
lean_object* v_fst_572_; lean_object* v_snd_573_; lean_object* v___x_582_; uint8_t v___x_583_; 
v___x_582_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_583_ = lean_string_dec_eq(v_name_555_, v___x_582_);
if (v___x_583_ == 0)
{
lean_object* v___x_584_; uint8_t v___x_585_; 
v___x_584_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_585_ = lean_string_dec_eq(v_name_555_, v___x_584_);
if (v___x_585_ == 0)
{
double v___x_586_; double v___x_587_; double v___x_588_; lean_object* v___x_589_; lean_object* v___y_591_; uint8_t v___x_606_; 
v___x_586_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0);
v___x_587_ = lean_float_of_nat(v_snd_567_);
v___x_588_ = lean_float_mul(v___x_586_, v___x_587_);
v___x_589_ = lean_unsigned_to_nat(1u);
v___x_606_ = lean_nat_dec_le(v___x_589_, v_k_557_);
if (v___x_606_ == 0)
{
v___y_591_ = v___x_589_;
goto v___jp_590_;
}
else
{
lean_inc(v_k_557_);
v___y_591_ = v_k_557_;
goto v___jp_590_;
}
v___jp_590_:
{
double v___x_592_; double v_a_593_; double v___x_594_; double v___x_595_; double v___x_596_; uint64_t v___x_597_; lean_object* v___x_598_; lean_object* v___x_599_; lean_object* v___x_600_; double v___x_601_; double v___x_602_; uint64_t v___x_603_; lean_object* v___x_604_; lean_object* v___x_605_; 
v___x_592_ = lean_float_of_nat(v___y_591_);
v_a_593_ = lean_float_div(v___x_588_, v___x_592_);
v___x_594_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1);
v___x_595_ = cos(v_a_593_);
v___x_596_ = lean_float_mul(v___x_594_, v___x_595_);
v___x_597_ = lean_float_to_int64(v___x_596_);
v___x_598_ = lean_int64_to_int_sint(v___x_597_);
v___x_599_ = lean_int_add(v_cx_556_, v___x_598_);
lean_dec(v___x_598_);
v___x_600_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_601_ = sin(v_a_593_);
v___x_602_ = lean_float_mul(v___x_594_, v___x_601_);
v___x_603_ = lean_float_to_int64(v___x_602_);
v___x_604_ = lean_int64_to_int_sint(v___x_603_);
v___x_605_ = lean_int_add(v___x_600_, v___x_604_);
lean_dec(v___x_604_);
v_fst_572_ = v___x_599_;
v_snd_573_ = v___x_605_;
goto v___jp_571_;
}
}
else
{
lean_object* v___x_607_; lean_object* v___y_609_; lean_object* v___x_626_; lean_object* v___x_627_; uint8_t v___x_628_; 
v___x_607_ = lean_unsigned_to_nat(2u);
v___x_626_ = lean_nat_mod(v_snd_567_, v___x_607_);
v___x_627_ = lean_unsigned_to_nat(0u);
v___x_628_ = lean_nat_dec_eq(v___x_626_, v___x_627_);
lean_dec(v___x_626_);
if (v___x_628_ == 0)
{
lean_object* v___x_629_; 
v___x_629_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___y_609_ = v___x_629_;
goto v___jp_608_;
}
else
{
lean_object* v___x_630_; 
v___x_630_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4);
v___y_609_ = v___x_630_;
goto v___jp_608_;
}
v___jp_608_:
{
lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; lean_object* v___x_622_; lean_object* v___x_623_; lean_object* v___x_624_; lean_object* v___x_625_; 
v___x_610_ = lean_int_add(v_cx_556_, v___y_609_);
v___x_611_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_612_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_613_ = lean_unsigned_to_nat(1u);
v___x_614_ = lean_nat_shiftr(v_snd_567_, v___x_613_);
lean_dec(v_snd_567_);
v___x_615_ = lean_nat_to_int(v___x_614_);
v___x_616_ = lean_int_mul(v___x_612_, v___x_615_);
lean_dec(v___x_615_);
v___x_617_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_618_ = lean_int_add(v___x_616_, v___x_617_);
lean_dec(v___x_616_);
v___x_619_ = lean_nat_add(v_k_557_, v___x_613_);
v___x_620_ = lean_nat_shiftr(v___x_619_, v___x_613_);
lean_dec(v___x_619_);
v___x_621_ = lean_nat_to_int(v___x_620_);
v___x_622_ = lean_int_sub(v___x_618_, v___x_621_);
lean_dec(v___x_621_);
lean_dec(v___x_618_);
v___x_623_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2);
v___x_624_ = lean_int_mul(v___x_622_, v___x_623_);
lean_dec(v___x_622_);
v___x_625_ = lean_int_add(v___x_611_, v___x_624_);
lean_dec(v___x_624_);
v_fst_572_ = v___x_610_;
v_snd_573_ = v___x_625_;
goto v___jp_571_;
}
}
}
else
{
lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v___x_639_; lean_object* v___x_640_; lean_object* v___x_641_; 
v___x_631_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_632_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_633_ = lean_nat_to_int(v_snd_567_);
v___x_634_ = lean_int_mul(v___x_632_, v___x_633_);
lean_dec(v___x_633_);
v___x_635_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_636_ = lean_int_add(v___x_634_, v___x_635_);
lean_dec(v___x_634_);
lean_inc(v_k_557_);
v___x_637_ = lean_nat_to_int(v_k_557_);
v___x_638_ = lean_int_sub(v___x_636_, v___x_637_);
lean_dec(v___x_637_);
lean_dec(v___x_636_);
v___x_639_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_640_ = lean_int_mul(v___x_638_, v___x_639_);
lean_dec(v___x_638_);
v___x_641_ = lean_int_add(v___x_631_, v___x_640_);
lean_dec(v___x_640_);
lean_inc(v_cx_556_);
v_fst_572_ = v_cx_556_;
v_snd_573_ = v___x_641_;
goto v___jp_571_;
}
v___jp_571_:
{
lean_object* v___x_574_; lean_object* v___x_576_; 
v___x_574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_574_, 0, v_fst_572_);
lean_ctor_set(v___x_574_, 1, v_snd_573_);
if (v_isShared_570_ == 0)
{
lean_ctor_set(v___x_569_, 1, v___x_574_);
v___x_576_ = v___x_569_;
goto v_reusejp_575_;
}
else
{
lean_object* v_reuseFailAlloc_581_; 
v_reuseFailAlloc_581_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_581_, 0, v_fst_566_);
lean_ctor_set(v_reuseFailAlloc_581_, 1, v___x_574_);
v___x_576_ = v_reuseFailAlloc_581_;
goto v_reusejp_575_;
}
v_reusejp_575_:
{
lean_object* v___x_578_; 
if (v_isShared_565_ == 0)
{
lean_ctor_set(v___x_564_, 1, v_a_559_);
lean_ctor_set(v___x_564_, 0, v___x_576_);
v___x_578_ = v___x_564_;
goto v_reusejp_577_;
}
else
{
lean_object* v_reuseFailAlloc_580_; 
v_reuseFailAlloc_580_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_580_, 0, v___x_576_);
lean_ctor_set(v_reuseFailAlloc_580_, 1, v_a_559_);
v___x_578_ = v_reuseFailAlloc_580_;
goto v_reusejp_577_;
}
v_reusejp_577_:
{
v_a_558_ = v_tail_562_;
v_a_559_ = v___x_578_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___boxed(lean_object* v_name_644_, lean_object* v_cx_645_, lean_object* v_k_646_, lean_object* v_a_647_, lean_object* v_a_648_){
_start:
{
lean_object* v_res_649_; 
v_res_649_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(v_name_644_, v_cx_645_, v_k_646_, v_a_647_, v_a_648_);
lean_dec_ref(v_name_644_);
return v_res_649_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(lean_object* v_name_650_, lean_object* v_cx_651_, lean_object* v_k_652_, lean_object* v_a_653_, lean_object* v_a_654_){
_start:
{
if (lean_obj_tag(v_a_653_) == 0)
{
lean_object* v___x_655_; 
lean_dec(v_k_652_);
lean_dec(v_cx_651_);
v___x_655_ = l_List_reverse___redArg(v_a_654_);
return v___x_655_;
}
else
{
lean_object* v_head_656_; lean_object* v_tail_657_; lean_object* v___x_659_; uint8_t v_isShared_660_; uint8_t v_isSharedCheck_738_; 
v_head_656_ = lean_ctor_get(v_a_653_, 0);
v_tail_657_ = lean_ctor_get(v_a_653_, 1);
v_isSharedCheck_738_ = !lean_is_exclusive(v_a_653_);
if (v_isSharedCheck_738_ == 0)
{
v___x_659_ = v_a_653_;
v_isShared_660_ = v_isSharedCheck_738_;
goto v_resetjp_658_;
}
else
{
lean_inc(v_tail_657_);
lean_inc(v_head_656_);
lean_dec(v_a_653_);
v___x_659_ = lean_box(0);
v_isShared_660_ = v_isSharedCheck_738_;
goto v_resetjp_658_;
}
v_resetjp_658_:
{
lean_object* v_fst_661_; lean_object* v_snd_662_; lean_object* v___x_664_; uint8_t v_isShared_665_; uint8_t v_isSharedCheck_737_; 
v_fst_661_ = lean_ctor_get(v_head_656_, 0);
v_snd_662_ = lean_ctor_get(v_head_656_, 1);
v_isSharedCheck_737_ = !lean_is_exclusive(v_head_656_);
if (v_isSharedCheck_737_ == 0)
{
v___x_664_ = v_head_656_;
v_isShared_665_ = v_isSharedCheck_737_;
goto v_resetjp_663_;
}
else
{
lean_inc(v_snd_662_);
lean_inc(v_fst_661_);
lean_dec(v_head_656_);
v___x_664_ = lean_box(0);
v_isShared_665_ = v_isSharedCheck_737_;
goto v_resetjp_663_;
}
v_resetjp_663_:
{
lean_object* v_fst_667_; lean_object* v_snd_668_; lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_677_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_678_ = lean_string_dec_eq(v_name_650_, v___x_677_);
if (v___x_678_ == 0)
{
lean_object* v___x_679_; uint8_t v___x_680_; 
v___x_679_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_680_ = lean_string_dec_eq(v_name_650_, v___x_679_);
if (v___x_680_ == 0)
{
double v___x_681_; double v___x_682_; double v___x_683_; lean_object* v___x_684_; lean_object* v___y_686_; uint8_t v___x_701_; 
v___x_681_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0);
v___x_682_ = lean_float_of_nat(v_snd_662_);
v___x_683_ = lean_float_mul(v___x_681_, v___x_682_);
v___x_684_ = lean_unsigned_to_nat(1u);
v___x_701_ = lean_nat_dec_le(v___x_684_, v_k_652_);
if (v___x_701_ == 0)
{
v___y_686_ = v___x_684_;
goto v___jp_685_;
}
else
{
lean_inc(v_k_652_);
v___y_686_ = v_k_652_;
goto v___jp_685_;
}
v___jp_685_:
{
double v___x_687_; double v_a_688_; double v___x_689_; double v___x_690_; double v___x_691_; uint64_t v___x_692_; lean_object* v___x_693_; lean_object* v___x_694_; lean_object* v___x_695_; double v___x_696_; double v___x_697_; uint64_t v___x_698_; lean_object* v___x_699_; lean_object* v___x_700_; 
v___x_687_ = lean_float_of_nat(v___y_686_);
v_a_688_ = lean_float_div(v___x_683_, v___x_687_);
v___x_689_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1);
v___x_690_ = cos(v_a_688_);
v___x_691_ = lean_float_mul(v___x_689_, v___x_690_);
v___x_692_ = lean_float_to_int64(v___x_691_);
v___x_693_ = lean_int64_to_int_sint(v___x_692_);
v___x_694_ = lean_int_add(v_cx_651_, v___x_693_);
lean_dec(v___x_693_);
v___x_695_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_696_ = sin(v_a_688_);
v___x_697_ = lean_float_mul(v___x_689_, v___x_696_);
v___x_698_ = lean_float_to_int64(v___x_697_);
v___x_699_ = lean_int64_to_int_sint(v___x_698_);
v___x_700_ = lean_int_add(v___x_695_, v___x_699_);
lean_dec(v___x_699_);
v_fst_667_ = v___x_694_;
v_snd_668_ = v___x_700_;
goto v___jp_666_;
}
}
else
{
lean_object* v___x_702_; lean_object* v___y_704_; lean_object* v___x_721_; lean_object* v___x_722_; uint8_t v___x_723_; 
v___x_702_ = lean_unsigned_to_nat(2u);
v___x_721_ = lean_nat_mod(v_snd_662_, v___x_702_);
v___x_722_ = lean_unsigned_to_nat(0u);
v___x_723_ = lean_nat_dec_eq(v___x_721_, v___x_722_);
lean_dec(v___x_721_);
if (v___x_723_ == 0)
{
lean_object* v___x_724_; 
v___x_724_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___y_704_ = v___x_724_;
goto v___jp_703_;
}
else
{
lean_object* v___x_725_; 
v___x_725_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4);
v___y_704_ = v___x_725_;
goto v___jp_703_;
}
v___jp_703_:
{
lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; lean_object* v___x_711_; lean_object* v___x_712_; lean_object* v___x_713_; lean_object* v___x_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; lean_object* v___x_720_; 
v___x_705_ = lean_int_add(v_cx_651_, v___y_704_);
v___x_706_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_707_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_708_ = lean_unsigned_to_nat(1u);
v___x_709_ = lean_nat_shiftr(v_snd_662_, v___x_708_);
lean_dec(v_snd_662_);
v___x_710_ = lean_nat_to_int(v___x_709_);
v___x_711_ = lean_int_mul(v___x_707_, v___x_710_);
lean_dec(v___x_710_);
v___x_712_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_713_ = lean_int_add(v___x_711_, v___x_712_);
lean_dec(v___x_711_);
v___x_714_ = lean_nat_add(v_k_652_, v___x_708_);
v___x_715_ = lean_nat_shiftr(v___x_714_, v___x_708_);
lean_dec(v___x_714_);
v___x_716_ = lean_nat_to_int(v___x_715_);
v___x_717_ = lean_int_sub(v___x_713_, v___x_716_);
lean_dec(v___x_716_);
lean_dec(v___x_713_);
v___x_718_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2);
v___x_719_ = lean_int_mul(v___x_717_, v___x_718_);
lean_dec(v___x_717_);
v___x_720_ = lean_int_add(v___x_706_, v___x_719_);
lean_dec(v___x_719_);
v_fst_667_ = v___x_705_;
v_snd_668_ = v___x_720_;
goto v___jp_666_;
}
}
}
else
{
lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v___x_726_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_727_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_728_ = lean_nat_to_int(v_snd_662_);
v___x_729_ = lean_int_mul(v___x_727_, v___x_728_);
lean_dec(v___x_728_);
v___x_730_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_731_ = lean_int_add(v___x_729_, v___x_730_);
lean_dec(v___x_729_);
lean_inc(v_k_652_);
v___x_732_ = lean_nat_to_int(v_k_652_);
v___x_733_ = lean_int_sub(v___x_731_, v___x_732_);
lean_dec(v___x_732_);
lean_dec(v___x_731_);
v___x_734_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_735_ = lean_int_mul(v___x_733_, v___x_734_);
lean_dec(v___x_733_);
v___x_736_ = lean_int_add(v___x_726_, v___x_735_);
lean_dec(v___x_735_);
lean_inc(v_cx_651_);
v_fst_667_ = v_cx_651_;
v_snd_668_ = v___x_736_;
goto v___jp_666_;
}
v___jp_666_:
{
lean_object* v___x_669_; lean_object* v___x_671_; 
v___x_669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_669_, 0, v_fst_667_);
lean_ctor_set(v___x_669_, 1, v_snd_668_);
if (v_isShared_665_ == 0)
{
lean_ctor_set(v___x_664_, 1, v___x_669_);
v___x_671_ = v___x_664_;
goto v_reusejp_670_;
}
else
{
lean_object* v_reuseFailAlloc_676_; 
v_reuseFailAlloc_676_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_676_, 0, v_fst_661_);
lean_ctor_set(v_reuseFailAlloc_676_, 1, v___x_669_);
v___x_671_ = v_reuseFailAlloc_676_;
goto v_reusejp_670_;
}
v_reusejp_670_:
{
lean_object* v___x_673_; 
if (v_isShared_660_ == 0)
{
lean_ctor_set(v___x_659_, 1, v_a_654_);
lean_ctor_set(v___x_659_, 0, v___x_671_);
v___x_673_ = v___x_659_;
goto v_reusejp_672_;
}
else
{
lean_object* v_reuseFailAlloc_675_; 
v_reuseFailAlloc_675_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_675_, 0, v___x_671_);
lean_ctor_set(v_reuseFailAlloc_675_, 1, v_a_654_);
v___x_673_ = v_reuseFailAlloc_675_;
goto v_reusejp_672_;
}
v_reusejp_672_:
{
lean_object* v___x_674_; 
v___x_674_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(v_name_650_, v_cx_651_, v_k_652_, v_tail_657_, v___x_673_);
return v___x_674_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0___boxed(lean_object* v_name_739_, lean_object* v_cx_740_, lean_object* v_k_741_, lean_object* v_a_742_, lean_object* v_a_743_){
_start:
{
lean_object* v_res_744_; 
v_res_744_ = lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(v_name_739_, v_cx_740_, v_k_741_, v_a_742_, v_a_743_);
lean_dec_ref(v_name_739_);
return v_res_744_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces(lean_object* v_name_745_, lean_object* v_ids_746_, lean_object* v_cx_747_){
_start:
{
lean_object* v_k_748_; lean_object* v___x_749_; lean_object* v___x_750_; lean_object* v___x_751_; lean_object* v___x_752_; 
v_k_748_ = l_List_lengthTR___redArg(v_ids_746_);
v___x_749_ = lean_unsigned_to_nat(0u);
v___x_750_ = l_List_zipIdxTR___redArg(v_ids_746_, v___x_749_);
v___x_751_ = lean_box(0);
v___x_752_ = lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(v_name_745_, v_cx_747_, v_k_748_, v___x_750_, v___x_751_);
return v___x_752_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces___boxed(lean_object* v_name_753_, lean_object* v_ids_754_, lean_object* v_cx_755_){
_start:
{
lean_object* v_res_756_; 
v_res_756_ = lp_choreo_Choreo_halfPlaces(v_name_753_, v_ids_754_, v_cx_755_);
lean_dec_ref(v_name_753_);
return v_res_756_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(lean_object* v_i_757_, lean_object* v_x_758_){
_start:
{
if (lean_obj_tag(v_x_758_) == 0)
{
lean_object* v___x_759_; 
v___x_759_ = lean_box(0);
return v___x_759_;
}
else
{
lean_object* v_head_760_; lean_object* v_tail_761_; lean_object* v_fst_762_; uint8_t v___x_763_; 
v_head_760_ = lean_ctor_get(v_x_758_, 0);
v_tail_761_ = lean_ctor_get(v_x_758_, 1);
v_fst_762_ = lean_ctor_get(v_head_760_, 0);
v___x_763_ = lean_nat_dec_eq(v_fst_762_, v_i_757_);
if (v___x_763_ == 0)
{
v_x_758_ = v_tail_761_;
goto _start;
}
else
{
lean_object* v___x_765_; 
lean_inc(v_head_760_);
v___x_765_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_765_, 0, v_head_760_);
return v___x_765_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0___boxed(lean_object* v_i_766_, lean_object* v_x_767_){
_start:
{
lean_object* v_res_768_; 
v_res_768_ = lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(v_i_766_, v_x_767_);
lean_dec(v_x_767_);
lean_dec(v_i_766_);
return v_res_768_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(lean_object* v_l_769_, lean_object* v_s_770_, lean_object* v_a_771_, lean_object* v_a_772_){
_start:
{
if (lean_obj_tag(v_a_771_) == 0)
{
lean_object* v___x_773_; 
v___x_773_ = l_List_reverse___redArg(v_a_772_);
return v___x_773_;
}
else
{
lean_object* v_head_774_; lean_object* v_tail_775_; lean_object* v___x_777_; uint8_t v_isShared_778_; uint8_t v_isSharedCheck_789_; 
v_head_774_ = lean_ctor_get(v_a_771_, 0);
v_tail_775_ = lean_ctor_get(v_a_771_, 1);
v_isSharedCheck_789_ = !lean_is_exclusive(v_a_771_);
if (v_isSharedCheck_789_ == 0)
{
v___x_777_ = v_a_771_;
v_isShared_778_ = v_isSharedCheck_789_;
goto v_resetjp_776_;
}
else
{
lean_inc(v_tail_775_);
lean_inc(v_head_774_);
lean_dec(v_a_771_);
v___x_777_ = lean_box(0);
v_isShared_778_ = v_isSharedCheck_789_;
goto v_resetjp_776_;
}
v_resetjp_776_:
{
lean_object* v___y_780_; lean_object* v___x_785_; 
v___x_785_ = lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(v_head_774_, v_l_769_);
if (lean_obj_tag(v___x_785_) == 0)
{
lean_object* v___x_786_; 
v___x_786_ = lp_choreo_Choreo_State_at(v_s_770_, v_head_774_);
v___y_780_ = v___x_786_;
goto v___jp_779_;
}
else
{
lean_object* v_val_787_; lean_object* v_snd_788_; 
lean_dec(v_head_774_);
v_val_787_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_val_787_);
lean_dec_ref_known(v___x_785_, 1);
v_snd_788_ = lean_ctor_get(v_val_787_, 1);
lean_inc(v_snd_788_);
lean_dec(v_val_787_);
v___y_780_ = v_snd_788_;
goto v___jp_779_;
}
v___jp_779_:
{
lean_object* v___x_782_; 
if (v_isShared_778_ == 0)
{
lean_ctor_set(v___x_777_, 1, v_a_772_);
lean_ctor_set(v___x_777_, 0, v___y_780_);
v___x_782_ = v___x_777_;
goto v_reusejp_781_;
}
else
{
lean_object* v_reuseFailAlloc_784_; 
v_reuseFailAlloc_784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_784_, 0, v___y_780_);
lean_ctor_set(v_reuseFailAlloc_784_, 1, v_a_772_);
v___x_782_ = v_reuseFailAlloc_784_;
goto v_reusejp_781_;
}
v_reusejp_781_:
{
v_a_771_ = v_tail_775_;
v_a_772_ = v___x_782_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1___boxed(lean_object* v_l_790_, lean_object* v_s_791_, lean_object* v_a_792_, lean_object* v_a_793_){
_start:
{
lean_object* v_res_794_; 
v_res_794_ = lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(v_l_790_, v_s_791_, v_a_792_, v_a_793_);
lean_dec(v_s_791_);
lean_dec(v_l_790_);
return v_res_794_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith(lean_object* v_n_795_, lean_object* v_l_796_, lean_object* v_s_797_){
_start:
{
lean_object* v___x_798_; lean_object* v___x_799_; lean_object* v___x_800_; 
v___x_798_ = l_List_range(v_n_795_);
v___x_799_ = lean_box(0);
v___x_800_ = lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(v_l_796_, v_s_797_, v___x_798_, v___x_799_);
return v___x_800_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith___boxed(lean_object* v_n_801_, lean_object* v_l_802_, lean_object* v_s_803_){
_start:
{
lean_object* v_res_804_; 
v_res_804_ = lp_choreo_Choreo_placesWith(v_n_801_, v_l_802_, v_s_803_);
lean_dec(v_s_803_);
lean_dec(v_l_802_);
return v_res_804_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(lean_object* v_s_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
if (lean_obj_tag(v_a_819_) == 0)
{
lean_object* v___x_821_; 
v___x_821_ = l_List_reverse___redArg(v_a_820_);
return v___x_821_;
}
else
{
lean_object* v_head_822_; lean_object* v_tail_823_; lean_object* v___x_825_; uint8_t v_isShared_826_; uint8_t v_isSharedCheck_836_; 
v_head_822_ = lean_ctor_get(v_a_819_, 0);
v_tail_823_ = lean_ctor_get(v_a_819_, 1);
v_isSharedCheck_836_ = !lean_is_exclusive(v_a_819_);
if (v_isSharedCheck_836_ == 0)
{
v___x_825_ = v_a_819_;
v_isShared_826_ = v_isSharedCheck_836_;
goto v_resetjp_824_;
}
else
{
lean_inc(v_tail_823_);
lean_inc(v_head_822_);
lean_dec(v_a_819_);
v___x_825_ = lean_box(0);
v_isShared_826_ = v_isSharedCheck_836_;
goto v_resetjp_824_;
}
v_resetjp_824_:
{
lean_object* v___x_827_; lean_object* v_x_828_; lean_object* v___x_829_; uint8_t v___x_830_; 
lean_inc(v_head_822_);
v___x_827_ = lp_choreo_Choreo_State_at(v_s_818_, v_head_822_);
v_x_828_ = lean_ctor_get(v___x_827_, 0);
lean_inc(v_x_828_);
lean_dec_ref(v___x_827_);
v___x_829_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_830_ = lean_int_dec_lt(v_x_828_, v___x_829_);
lean_dec(v_x_828_);
if (v___x_830_ == 0)
{
lean_del_object(v___x_825_);
lean_dec(v_head_822_);
v_a_819_ = v_tail_823_;
goto _start;
}
else
{
lean_object* v___x_833_; 
if (v_isShared_826_ == 0)
{
lean_ctor_set(v___x_825_, 1, v_a_820_);
v___x_833_ = v___x_825_;
goto v_reusejp_832_;
}
else
{
lean_object* v_reuseFailAlloc_835_; 
v_reuseFailAlloc_835_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_835_, 0, v_head_822_);
lean_ctor_set(v_reuseFailAlloc_835_, 1, v_a_820_);
v___x_833_ = v_reuseFailAlloc_835_;
goto v_reusejp_832_;
}
v_reusejp_832_:
{
v_a_819_ = v_tail_823_;
v_a_820_ = v___x_833_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0___boxed(lean_object* v_s_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
lean_object* v_res_840_; 
v_res_840_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(v_s_837_, v_a_838_, v_a_839_);
lean_dec(v_s_837_);
return v_res_840_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(lean_object* v_s_841_, lean_object* v_a_842_, lean_object* v_a_843_){
_start:
{
if (lean_obj_tag(v_a_842_) == 0)
{
lean_object* v___x_844_; 
v___x_844_ = l_List_reverse___redArg(v_a_843_);
return v___x_844_;
}
else
{
lean_object* v_head_845_; lean_object* v_tail_846_; lean_object* v___x_848_; uint8_t v_isShared_849_; uint8_t v_isSharedCheck_859_; 
v_head_845_ = lean_ctor_get(v_a_842_, 0);
v_tail_846_ = lean_ctor_get(v_a_842_, 1);
v_isSharedCheck_859_ = !lean_is_exclusive(v_a_842_);
if (v_isSharedCheck_859_ == 0)
{
v___x_848_ = v_a_842_;
v_isShared_849_ = v_isSharedCheck_859_;
goto v_resetjp_847_;
}
else
{
lean_inc(v_tail_846_);
lean_inc(v_head_845_);
lean_dec(v_a_842_);
v___x_848_ = lean_box(0);
v_isShared_849_ = v_isSharedCheck_859_;
goto v_resetjp_847_;
}
v_resetjp_847_:
{
lean_object* v___x_850_; lean_object* v_x_851_; lean_object* v___x_852_; uint8_t v___x_853_; 
lean_inc(v_head_845_);
v___x_850_ = lp_choreo_Choreo_State_at(v_s_841_, v_head_845_);
v_x_851_ = lean_ctor_get(v___x_850_, 0);
lean_inc(v_x_851_);
lean_dec_ref(v___x_850_);
v___x_852_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_853_ = lean_int_dec_le(v___x_852_, v_x_851_);
lean_dec(v_x_851_);
if (v___x_853_ == 0)
{
lean_del_object(v___x_848_);
lean_dec(v_head_845_);
v_a_842_ = v_tail_846_;
goto _start;
}
else
{
lean_object* v___x_856_; 
if (v_isShared_849_ == 0)
{
lean_ctor_set(v___x_848_, 1, v_a_843_);
v___x_856_ = v___x_848_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_858_; 
v_reuseFailAlloc_858_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_858_, 0, v_head_845_);
lean_ctor_set(v_reuseFailAlloc_858_, 1, v_a_843_);
v___x_856_ = v_reuseFailAlloc_858_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
v_a_842_ = v_tail_846_;
v_a_843_ = v___x_856_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1___boxed(lean_object* v_s_860_, lean_object* v_a_861_, lean_object* v_a_862_){
_start:
{
lean_object* v_res_863_; 
v_res_863_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(v_s_860_, v_a_861_, v_a_862_);
lean_dec(v_s_860_);
return v_res_863_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf(lean_object* v_s_864_, lean_object* v_n_865_){
_start:
{
lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; 
v___x_866_ = l_List_range(v_n_865_);
v___x_867_ = lean_box(0);
lean_inc(v___x_866_);
v___x_868_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(v_s_864_, v___x_866_, v___x_867_);
v___x_869_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(v_s_864_, v___x_866_, v___x_867_);
v___x_870_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_870_, 0, v___x_868_);
lean_ctor_set(v___x_870_, 1, v___x_869_);
return v___x_870_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf___boxed(lean_object* v_s_871_, lean_object* v_n_872_){
_start:
{
lean_object* v_res_873_; 
v_res_873_ = lp_choreo_Choreo_groupsOf(v_s_871_, v_n_872_);
lean_dec(v_s_871_);
return v_res_873_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo(lean_object* v_from_x27_874_, lean_object* v_places_875_){
_start:
{
lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v_idx_879_; lean_object* v___x_880_; lean_object* v___x_881_; 
v___x_876_ = lean_unsigned_to_nat(6u);
v___x_877_ = l_List_lengthTR___redArg(v_from_x27_874_);
v___x_878_ = l_List_range(v___x_877_);
v_idx_879_ = lp_choreo_Choreo_improveAssign(v_from_x27_874_, v_places_875_, v___x_876_, v___x_878_);
v___x_880_ = lean_box(0);
v___x_881_ = lp_choreo_List_mapTR_loop___at___00Choreo_wayDrafts_spec__3(v_places_875_, v_idx_879_, v___x_880_);
return v___x_881_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo___boxed(lean_object* v_from_x27_882_, lean_object* v_places_883_){
_start:
{
lean_object* v_res_884_; 
v_res_884_ = lp_choreo_Choreo_assignTo(v_from_x27_882_, v_places_883_);
lean_dec(v_places_883_);
lean_dec(v_from_x27_882_);
return v_res_884_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0(lean_object* v_title_885_, lean_object* v_fallback_886_){
_start:
{
lean_object* v___x_887_; lean_object* v___x_888_; uint8_t v___x_889_; 
v___x_887_ = lean_string_utf8_byte_size(v_title_885_);
v___x_888_ = lean_unsigned_to_nat(0u);
v___x_889_ = lean_nat_dec_eq(v___x_887_, v___x_888_);
if (v___x_889_ == 0)
{
lean_inc_ref(v_title_885_);
return v_title_885_;
}
else
{
lean_inc_ref(v_fallback_886_);
return v_fallback_886_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0___boxed(lean_object* v_title_890_, lean_object* v_fallback_891_){
_start:
{
lean_object* v_res_892_; 
v_res_892_ = lp_choreo_Choreo_compileOp___lam__0(v_title_890_, v_fallback_891_);
lean_dec_ref(v_fallback_891_);
lean_dec_ref(v_title_890_);
return v_res_892_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(lean_object* v_dx_893_, lean_object* v_dy_894_, lean_object* v_a_895_, lean_object* v_a_896_){
_start:
{
if (lean_obj_tag(v_a_895_) == 0)
{
lean_object* v___x_897_; 
lean_dec(v_dy_894_);
lean_dec(v_dx_893_);
v___x_897_ = l_List_reverse___redArg(v_a_896_);
return v___x_897_;
}
else
{
lean_object* v_tail_898_; lean_object* v___x_900_; uint8_t v_isShared_901_; uint8_t v_isSharedCheck_907_; 
v_tail_898_ = lean_ctor_get(v_a_895_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_a_895_);
if (v_isSharedCheck_907_ == 0)
{
lean_object* v_unused_908_; 
v_unused_908_ = lean_ctor_get(v_a_895_, 0);
lean_dec(v_unused_908_);
v___x_900_ = v_a_895_;
v_isShared_901_ = v_isSharedCheck_907_;
goto v_resetjp_899_;
}
else
{
lean_inc(v_tail_898_);
lean_dec(v_a_895_);
v___x_900_ = lean_box(0);
v_isShared_901_ = v_isSharedCheck_907_;
goto v_resetjp_899_;
}
v_resetjp_899_:
{
lean_object* v___x_902_; lean_object* v___x_904_; 
lean_inc(v_dy_894_);
lean_inc(v_dx_893_);
v___x_902_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_902_, 0, v_dx_893_);
lean_ctor_set(v___x_902_, 1, v_dy_894_);
if (v_isShared_901_ == 0)
{
lean_ctor_set(v___x_900_, 1, v_a_896_);
lean_ctor_set(v___x_900_, 0, v___x_902_);
v___x_904_ = v___x_900_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_a_896_);
v___x_904_ = v_reuseFailAlloc_906_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v_a_895_ = v_tail_898_;
v_a_896_ = v___x_904_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__1(lean_object* v_n_909_, lean_object* v_dx_910_, lean_object* v_dy_911_){
_start:
{
lean_object* v___x_912_; lean_object* v___x_913_; lean_object* v___x_914_; 
v___x_912_ = l_List_range(v_n_909_);
v___x_913_ = lean_box(0);
v___x_914_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_dx_910_, v_dy_911_, v___x_912_, v___x_913_);
return v___x_914_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(lean_object* v_s_915_, lean_object* v_a_916_, lean_object* v_a_917_){
_start:
{
if (lean_obj_tag(v_a_916_) == 0)
{
lean_object* v___x_918_; 
v___x_918_ = l_List_reverse___redArg(v_a_917_);
return v___x_918_;
}
else
{
lean_object* v_head_919_; lean_object* v_tail_920_; lean_object* v___x_922_; uint8_t v_isShared_923_; uint8_t v_isSharedCheck_929_; 
v_head_919_ = lean_ctor_get(v_a_916_, 0);
v_tail_920_ = lean_ctor_get(v_a_916_, 1);
v_isSharedCheck_929_ = !lean_is_exclusive(v_a_916_);
if (v_isSharedCheck_929_ == 0)
{
v___x_922_ = v_a_916_;
v_isShared_923_ = v_isSharedCheck_929_;
goto v_resetjp_921_;
}
else
{
lean_inc(v_tail_920_);
lean_inc(v_head_919_);
lean_dec(v_a_916_);
v___x_922_ = lean_box(0);
v_isShared_923_ = v_isSharedCheck_929_;
goto v_resetjp_921_;
}
v_resetjp_921_:
{
lean_object* v___x_924_; lean_object* v___x_926_; 
v___x_924_ = lp_choreo_Choreo_State_at(v_s_915_, v_head_919_);
if (v_isShared_923_ == 0)
{
lean_ctor_set(v___x_922_, 1, v_a_917_);
lean_ctor_set(v___x_922_, 0, v___x_924_);
v___x_926_ = v___x_922_;
goto v_reusejp_925_;
}
else
{
lean_object* v_reuseFailAlloc_928_; 
v_reuseFailAlloc_928_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_928_, 0, v___x_924_);
lean_ctor_set(v_reuseFailAlloc_928_, 1, v_a_917_);
v___x_926_ = v_reuseFailAlloc_928_;
goto v_reusejp_925_;
}
v_reusejp_925_:
{
v_a_916_ = v_tail_920_;
v_a_917_ = v___x_926_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2___boxed(lean_object* v_s_930_, lean_object* v_a_931_, lean_object* v_a_932_){
_start:
{
lean_object* v_res_933_; 
v_res_933_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(v_s_930_, v_a_931_, v_a_932_);
lean_dec(v_s_930_);
return v_res_933_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__1(lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
if (lean_obj_tag(v_a_934_) == 0)
{
lean_object* v___x_936_; 
v___x_936_ = l_List_reverse___redArg(v_a_935_);
return v___x_936_;
}
else
{
lean_object* v_head_937_; lean_object* v_tail_938_; lean_object* v___x_940_; uint8_t v_isShared_941_; uint8_t v_isSharedCheck_947_; 
v_head_937_ = lean_ctor_get(v_a_934_, 0);
v_tail_938_ = lean_ctor_get(v_a_934_, 1);
v_isSharedCheck_947_ = !lean_is_exclusive(v_a_934_);
if (v_isSharedCheck_947_ == 0)
{
v___x_940_ = v_a_934_;
v_isShared_941_ = v_isSharedCheck_947_;
goto v_resetjp_939_;
}
else
{
lean_inc(v_tail_938_);
lean_inc(v_head_937_);
lean_dec(v_a_934_);
v___x_940_ = lean_box(0);
v_isShared_941_ = v_isSharedCheck_947_;
goto v_resetjp_939_;
}
v_resetjp_939_:
{
lean_object* v_snd_942_; lean_object* v___x_944_; 
v_snd_942_ = lean_ctor_get(v_head_937_, 1);
lean_inc(v_snd_942_);
lean_dec(v_head_937_);
if (v_isShared_941_ == 0)
{
lean_ctor_set(v___x_940_, 1, v_a_935_);
lean_ctor_set(v___x_940_, 0, v_snd_942_);
v___x_944_ = v___x_940_;
goto v_reusejp_943_;
}
else
{
lean_object* v_reuseFailAlloc_946_; 
v_reuseFailAlloc_946_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_946_, 0, v_snd_942_);
lean_ctor_set(v_reuseFailAlloc_946_, 1, v_a_935_);
v___x_944_ = v_reuseFailAlloc_946_;
goto v_reusejp_943_;
}
v_reusejp_943_:
{
v_a_934_ = v_tail_938_;
v_a_935_ = v___x_944_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(lean_object* v_idx_948_, lean_object* v_places_949_, lean_object* v_a_950_, lean_object* v_a_951_){
_start:
{
if (lean_obj_tag(v_a_950_) == 0)
{
lean_object* v___x_952_; 
v___x_952_ = l_List_reverse___redArg(v_a_951_);
return v___x_952_;
}
else
{
lean_object* v_head_953_; lean_object* v_tail_954_; lean_object* v___x_956_; uint8_t v_isShared_957_; uint8_t v_isSharedCheck_975_; 
v_head_953_ = lean_ctor_get(v_a_950_, 0);
v_tail_954_ = lean_ctor_get(v_a_950_, 1);
v_isSharedCheck_975_ = !lean_is_exclusive(v_a_950_);
if (v_isSharedCheck_975_ == 0)
{
v___x_956_ = v_a_950_;
v_isShared_957_ = v_isSharedCheck_975_;
goto v_resetjp_955_;
}
else
{
lean_inc(v_tail_954_);
lean_inc(v_head_953_);
lean_dec(v_a_950_);
v___x_956_ = lean_box(0);
v_isShared_957_ = v_isSharedCheck_975_;
goto v_resetjp_955_;
}
v_resetjp_955_:
{
lean_object* v_fst_958_; lean_object* v_snd_959_; lean_object* v___x_961_; uint8_t v_isShared_962_; uint8_t v_isSharedCheck_974_; 
v_fst_958_ = lean_ctor_get(v_head_953_, 0);
v_snd_959_ = lean_ctor_get(v_head_953_, 1);
v_isSharedCheck_974_ = !lean_is_exclusive(v_head_953_);
if (v_isSharedCheck_974_ == 0)
{
v___x_961_ = v_head_953_;
v_isShared_962_ = v_isSharedCheck_974_;
goto v_resetjp_960_;
}
else
{
lean_inc(v_snd_959_);
lean_inc(v_fst_958_);
lean_dec(v_head_953_);
v___x_961_ = lean_box(0);
v_isShared_962_ = v_isSharedCheck_974_;
goto v_resetjp_960_;
}
v_resetjp_960_:
{
lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_968_; 
v___x_963_ = lean_unsigned_to_nat(0u);
v___x_964_ = l_List_getD___redArg(v_idx_948_, v_snd_959_, v___x_963_);
v___x_965_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_966_ = l_List_getD___redArg(v_places_949_, v___x_964_, v___x_965_);
if (v_isShared_962_ == 0)
{
lean_ctor_set(v___x_961_, 1, v___x_966_);
v___x_968_ = v___x_961_;
goto v_reusejp_967_;
}
else
{
lean_object* v_reuseFailAlloc_973_; 
v_reuseFailAlloc_973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_973_, 0, v_fst_958_);
lean_ctor_set(v_reuseFailAlloc_973_, 1, v___x_966_);
v___x_968_ = v_reuseFailAlloc_973_;
goto v_reusejp_967_;
}
v_reusejp_967_:
{
lean_object* v___x_970_; 
if (v_isShared_957_ == 0)
{
lean_ctor_set(v___x_956_, 1, v_a_951_);
lean_ctor_set(v___x_956_, 0, v___x_968_);
v___x_970_ = v___x_956_;
goto v_reusejp_969_;
}
else
{
lean_object* v_reuseFailAlloc_972_; 
v_reuseFailAlloc_972_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_972_, 0, v___x_968_);
lean_ctor_set(v_reuseFailAlloc_972_, 1, v_a_951_);
v___x_970_ = v_reuseFailAlloc_972_;
goto v_reusejp_969_;
}
v_reusejp_969_:
{
v_a_950_ = v_tail_954_;
v_a_951_ = v___x_970_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3___boxed(lean_object* v_idx_976_, lean_object* v_places_977_, lean_object* v_a_978_, lean_object* v_a_979_){
_start:
{
lean_object* v_res_980_; 
v_res_980_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(v_idx_976_, v_places_977_, v_a_978_, v_a_979_);
lean_dec(v_places_977_);
lean_dec(v_idx_976_);
return v_res_980_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2(lean_object* v_pos_981_, lean_object* v_g_982_, lean_object* v_name_983_, lean_object* v_cx_984_){
_start:
{
lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v_places_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v_idx_992_; lean_object* v___x_993_; lean_object* v___x_994_; lean_object* v___x_995_; 
lean_inc_n(v_g_982_, 2);
v___x_985_ = lp_choreo_Choreo_halfPlaces(v_name_983_, v_g_982_, v_cx_984_);
v___x_986_ = lean_box(0);
v_places_987_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__1(v___x_985_, v___x_986_);
v___x_988_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(v_pos_981_, v_g_982_, v___x_986_);
v___x_989_ = lean_unsigned_to_nat(6u);
v___x_990_ = l_List_lengthTR___redArg(v_g_982_);
v___x_991_ = l_List_range(v___x_990_);
v_idx_992_ = lp_choreo_Choreo_improveAssign(v___x_988_, v_places_987_, v___x_989_, v___x_991_);
lean_dec(v___x_988_);
v___x_993_ = lean_unsigned_to_nat(0u);
v___x_994_ = l_List_zipIdxTR___redArg(v_g_982_, v___x_993_);
v___x_995_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(v_idx_992_, v_places_987_, v___x_994_, v___x_986_);
lean_dec(v_places_987_);
lean_dec(v_idx_992_);
return v___x_995_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2___boxed(lean_object* v_pos_996_, lean_object* v_g_997_, lean_object* v_name_998_, lean_object* v_cx_999_){
_start:
{
lean_object* v_res_1000_; 
v_res_1000_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_996_, v_g_997_, v_name_998_, v_cx_999_);
lean_dec_ref(v_name_998_);
lean_dec(v_pos_996_);
return v_res_1000_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___lam__1(lean_object* v_n_1001_, lean_object* v_section_x27_1002_, lean_object* v_index_1003_, lean_object* v_name_1004_, lean_object* v_kind_1005_, lean_object* v_label_1006_, lean_object* v_step_1007_, lean_object* v_rq_1008_, lean_object* v_en_1009_, lean_object* v_st_1010_, lean_object* v_algebra_1011_){
_start:
{
lean_object* v_op_1012_; lean_object* v_pos_1013_; lean_object* v_steps_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1026_; 
v_op_1012_ = lean_ctor_get(v_step_1007_, 0);
v_pos_1013_ = lean_ctor_get(v_st_1010_, 0);
v_steps_1014_ = lean_ctor_get(v_st_1010_, 1);
v_isSharedCheck_1026_ = !lean_is_exclusive(v_st_1010_);
if (v_isSharedCheck_1026_ == 0)
{
v___x_1016_ = v_st_1010_;
v_isShared_1017_ = v_isSharedCheck_1026_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_steps_1014_);
lean_inc(v_pos_1013_);
lean_dec(v_st_1010_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1026_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v_next_1018_; lean_object* v___x_1019_; lean_object* v___x_1020_; lean_object* v___x_1021_; lean_object* v___x_1022_; lean_object* v___x_1024_; 
lean_inc_ref(v_op_1012_);
v_next_1018_ = lp_choreo_Choreo_Op_next(v_op_1012_, v_n_1001_, v_pos_1013_);
lean_inc(v_next_1018_);
v___x_1019_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1019_, 0, v_name_1004_);
lean_ctor_set(v___x_1019_, 1, v_section_x27_1002_);
lean_ctor_set(v___x_1019_, 2, v_index_1003_);
lean_ctor_set(v___x_1019_, 3, v_kind_1005_);
lean_ctor_set(v___x_1019_, 4, v_label_1006_);
lean_ctor_set(v___x_1019_, 5, v_step_1007_);
lean_ctor_set(v___x_1019_, 6, v_rq_1008_);
lean_ctor_set(v___x_1019_, 7, v_en_1009_);
lean_ctor_set(v___x_1019_, 8, v_pos_1013_);
lean_ctor_set(v___x_1019_, 9, v_next_1018_);
lean_ctor_set(v___x_1019_, 10, v_algebra_1011_);
v___x_1020_ = lean_box(0);
v___x_1021_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1021_, 0, v___x_1019_);
lean_ctor_set(v___x_1021_, 1, v___x_1020_);
v___x_1022_ = l_List_appendTR___redArg(v_steps_1014_, v___x_1021_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 1, v___x_1022_);
lean_ctor_set(v___x_1016_, 0, v_next_1018_);
v___x_1024_ = v___x_1016_;
goto v_reusejp_1023_;
}
else
{
lean_object* v_reuseFailAlloc_1025_; 
v_reuseFailAlloc_1025_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1025_, 0, v_next_1018_);
lean_ctor_set(v_reuseFailAlloc_1025_, 1, v___x_1022_);
v___x_1024_ = v_reuseFailAlloc_1025_;
goto v_reusejp_1023_;
}
v_reusejp_1023_:
{
return v___x_1024_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(lean_object* v_cur_1027_, lean_object* v_o_1028_, lean_object* v_a_1029_, lean_object* v_a_1030_){
_start:
{
if (lean_obj_tag(v_a_1029_) == 0)
{
lean_object* v___x_1031_; 
v___x_1031_ = l_List_reverse___redArg(v_a_1030_);
return v___x_1031_;
}
else
{
lean_object* v_head_1032_; lean_object* v_tail_1033_; lean_object* v___x_1035_; uint8_t v_isShared_1036_; uint8_t v_isSharedCheck_1045_; 
v_head_1032_ = lean_ctor_get(v_a_1029_, 0);
v_tail_1033_ = lean_ctor_get(v_a_1029_, 1);
v_isSharedCheck_1045_ = !lean_is_exclusive(v_a_1029_);
if (v_isSharedCheck_1045_ == 0)
{
v___x_1035_ = v_a_1029_;
v_isShared_1036_ = v_isSharedCheck_1045_;
goto v_resetjp_1034_;
}
else
{
lean_inc(v_tail_1033_);
lean_inc(v_head_1032_);
lean_dec(v_a_1029_);
v___x_1035_ = lean_box(0);
v_isShared_1036_ = v_isSharedCheck_1045_;
goto v_resetjp_1034_;
}
v_resetjp_1034_:
{
uint8_t v_ccw_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1042_; 
v_ccw_1037_ = lean_ctor_get_uint8(v_o_1028_, sizeof(void*)*16);
v___x_1038_ = lp_choreo_Choreo_centre;
v___x_1039_ = lp_choreo_Choreo_State_at(v_cur_1027_, v_head_1032_);
v___x_1040_ = lp_choreo_Choreo_rotatePath(v___x_1038_, v___x_1039_, v_ccw_1037_);
lean_dec_ref(v___x_1039_);
if (v_isShared_1036_ == 0)
{
lean_ctor_set(v___x_1035_, 1, v_a_1030_);
lean_ctor_set(v___x_1035_, 0, v___x_1040_);
v___x_1042_ = v___x_1035_;
goto v_reusejp_1041_;
}
else
{
lean_object* v_reuseFailAlloc_1044_; 
v_reuseFailAlloc_1044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1044_, 0, v___x_1040_);
lean_ctor_set(v_reuseFailAlloc_1044_, 1, v_a_1030_);
v___x_1042_ = v_reuseFailAlloc_1044_;
goto v_reusejp_1041_;
}
v_reusejp_1041_:
{
v_a_1029_ = v_tail_1033_;
v_a_1030_ = v___x_1042_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4___boxed(lean_object* v_cur_1046_, lean_object* v_o_1047_, lean_object* v_a_1048_, lean_object* v_a_1049_){
_start:
{
lean_object* v_res_1050_; 
v_res_1050_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_cur_1046_, v_o_1047_, v_a_1048_, v_a_1049_);
lean_dec_ref(v_o_1047_);
lean_dec(v_cur_1046_);
return v_res_1050_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(lean_object* v_cur_1051_, lean_object* v_a_1052_, lean_object* v_a_1053_){
_start:
{
if (lean_obj_tag(v_a_1052_) == 0)
{
lean_object* v___x_1054_; 
v___x_1054_ = l_List_reverse___redArg(v_a_1053_);
return v___x_1054_;
}
else
{
lean_object* v_head_1055_; lean_object* v_tail_1056_; lean_object* v___x_1058_; uint8_t v_isShared_1059_; uint8_t v_isSharedCheck_1070_; 
v_head_1055_ = lean_ctor_get(v_a_1052_, 0);
v_tail_1056_ = lean_ctor_get(v_a_1052_, 1);
v_isSharedCheck_1070_ = !lean_is_exclusive(v_a_1052_);
if (v_isSharedCheck_1070_ == 0)
{
v___x_1058_ = v_a_1052_;
v_isShared_1059_ = v_isSharedCheck_1070_;
goto v_resetjp_1057_;
}
else
{
lean_inc(v_tail_1056_);
lean_inc(v_head_1055_);
lean_dec(v_a_1052_);
v___x_1058_ = lean_box(0);
v_isShared_1059_ = v_isSharedCheck_1070_;
goto v_resetjp_1057_;
}
v_resetjp_1057_:
{
lean_object* v___x_1060_; lean_object* v_x_1061_; lean_object* v_y_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; lean_object* v___x_1067_; 
v___x_1060_ = lp_choreo_Choreo_centre;
v_x_1061_ = lean_ctor_get(v___x_1060_, 0);
v_y_1062_ = lean_ctor_get(v___x_1060_, 1);
lean_inc(v_head_1055_);
v___x_1063_ = lp_choreo_Choreo_State_at(v_cur_1051_, v_head_1055_);
v___x_1064_ = lp_choreo_Choreo_distSq(v___x_1063_, v___x_1060_);
lean_dec_ref(v___x_1063_);
lean_inc(v_y_1062_);
lean_inc(v_x_1061_);
v___x_1065_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_1065_, 0, v_head_1055_);
lean_ctor_set(v___x_1065_, 1, v_x_1061_);
lean_ctor_set(v___x_1065_, 2, v_y_1062_);
lean_ctor_set(v___x_1065_, 3, v___x_1064_);
if (v_isShared_1059_ == 0)
{
lean_ctor_set(v___x_1058_, 1, v_a_1053_);
lean_ctor_set(v___x_1058_, 0, v___x_1065_);
v___x_1067_ = v___x_1058_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1069_; 
v_reuseFailAlloc_1069_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1069_, 0, v___x_1065_);
lean_ctor_set(v_reuseFailAlloc_1069_, 1, v_a_1053_);
v___x_1067_ = v_reuseFailAlloc_1069_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
v_a_1052_ = v_tail_1056_;
v_a_1053_ = v___x_1067_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___boxed(lean_object* v_cur_1071_, lean_object* v_a_1072_, lean_object* v_a_1073_){
_start:
{
lean_object* v_res_1074_; 
v_res_1074_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_cur_1071_, v_a_1072_, v_a_1073_);
lean_dec(v_cur_1071_);
return v_res_1074_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(lean_object* v_n_1081_, lean_object* v_o_1082_, lean_object* v_gap_1083_, lean_object* v_x_1084_, lean_object* v_x_1085_){
_start:
{
if (lean_obj_tag(v_x_1085_) == 0)
{
lean_dec_ref(v_o_1082_);
lean_dec(v_n_1081_);
return v_x_1084_;
}
else
{
lean_object* v_tail_1086_; lean_object* v_pos_1087_; lean_object* v_section_x27_1088_; lean_object* v_title_1089_; lean_object* v_counts_1090_; lean_object* v_quarters_1091_; uint8_t v_ccw_1092_; lean_object* v_index_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v_paths_1096_; lean_object* v_orbits_1097_; lean_object* v___x_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___x_1109_; lean_object* v___x_1110_; lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; 
v_tail_1086_ = lean_ctor_get(v_x_1085_, 1);
v_pos_1087_ = lean_ctor_get(v_x_1084_, 0);
v_section_x27_1088_ = lean_ctor_get(v_o_1082_, 1);
v_title_1089_ = lean_ctor_get(v_o_1082_, 2);
v_counts_1090_ = lean_ctor_get(v_o_1082_, 4);
v_quarters_1091_ = lean_ctor_get(v_o_1082_, 5);
v_ccw_1092_ = lean_ctor_get_uint8(v_o_1082_, sizeof(void*)*16);
v_index_1093_ = lean_ctor_get(v_o_1082_, 15);
lean_inc_n(v_n_1081_, 2);
v___x_1094_ = l_List_range(v_n_1081_);
v___x_1095_ = lean_box(0);
lean_inc(v___x_1094_);
v_paths_1096_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_pos_1087_, v_o_1082_, v___x_1094_, v___x_1095_);
v_orbits_1097_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_pos_1087_, v___x_1094_, v___x_1095_);
v___x_1098_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__0));
v___x_1099_ = lean_unsigned_to_nat(90u);
v___x_1100_ = lean_nat_mul(v_quarters_1091_, v___x_1099_);
v___x_1101_ = l_Nat_reprFast(v___x_1100_);
v___x_1102_ = lean_string_append(v___x_1098_, v___x_1101_);
lean_dec_ref(v___x_1101_);
v___x_1103_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__1));
v___x_1104_ = lean_string_append(v___x_1102_, v___x_1103_);
v___x_1105_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1089_, v___x_1104_);
lean_dec_ref(v___x_1104_);
v___x_1106_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2));
v___x_1107_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__3));
v___x_1108_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1089_, v___x_1107_);
v___x_1109_ = lp_choreo_Choreo_centre;
v___x_1110_ = lp_choreo_Choreo_chooseCerts(v_n_1081_, v_paths_1096_, v_gap_1083_);
lean_dec(v_paths_1096_);
lean_inc(v_counts_1090_);
v___x_1111_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1111_, 0, v___x_1109_);
lean_ctor_set(v___x_1111_, 1, v_counts_1090_);
lean_ctor_set(v___x_1111_, 2, v___x_1110_);
lean_ctor_set(v___x_1111_, 3, v_orbits_1097_);
lean_ctor_set_uint8(v___x_1111_, sizeof(void*)*4, v_ccw_1092_);
v___x_1112_ = lean_box(0);
v___x_1113_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1113_, 0, v___x_1111_);
lean_ctor_set(v___x_1113_, 1, v___x_1112_);
lean_ctor_set(v___x_1113_, 2, v___x_1112_);
v___x_1114_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__4));
v___x_1115_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__5));
if (v_ccw_1092_ == 0)
{
lean_object* v_x_1116_; lean_object* v_y_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v___x_1122_; lean_object* v___x_1123_; 
v_x_1116_ = lean_ctor_get(v___x_1109_, 0);
v_y_1117_ = lean_ctor_get(v___x_1109_, 1);
lean_inc(v_x_1116_);
v___x_1118_ = l_Rat_ofInt(v_x_1116_);
lean_inc(v_y_1117_);
v___x_1119_ = l_Rat_ofInt(v_y_1117_);
v___x_1120_ = lean_unsigned_to_nat(3u);
v___x_1121_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1121_, 0, v___x_1118_);
lean_ctor_set(v___x_1121_, 1, v___x_1119_);
lean_ctor_set(v___x_1121_, 2, v___x_1120_);
v___x_1122_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1122_, 0, v___x_1121_);
lean_inc(v_index_1093_);
lean_inc_ref(v_section_x27_1088_);
lean_inc(v_n_1081_);
v___x_1123_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___lam__1(v_n_1081_, v_section_x27_1088_, v_index_1093_, v___x_1105_, v___x_1106_, v___x_1108_, v___x_1113_, v___x_1114_, v___x_1115_, v_x_1084_, v___x_1122_);
v_x_1084_ = v___x_1123_;
v_x_1085_ = v_tail_1086_;
goto _start;
}
else
{
lean_object* v_x_1125_; lean_object* v_y_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; 
v_x_1125_ = lean_ctor_get(v___x_1109_, 0);
v_y_1126_ = lean_ctor_get(v___x_1109_, 1);
lean_inc(v_x_1125_);
v___x_1127_ = l_Rat_ofInt(v_x_1125_);
lean_inc(v_y_1126_);
v___x_1128_ = l_Rat_ofInt(v_y_1126_);
v___x_1129_ = lean_unsigned_to_nat(1u);
v___x_1130_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1130_, 0, v___x_1127_);
lean_ctor_set(v___x_1130_, 1, v___x_1128_);
lean_ctor_set(v___x_1130_, 2, v___x_1129_);
v___x_1131_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1131_, 0, v___x_1130_);
lean_inc(v_index_1093_);
lean_inc_ref(v_section_x27_1088_);
lean_inc(v_n_1081_);
v___x_1132_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___lam__1(v_n_1081_, v_section_x27_1088_, v_index_1093_, v___x_1105_, v___x_1106_, v___x_1108_, v___x_1113_, v___x_1114_, v___x_1115_, v_x_1084_, v___x_1131_);
v_x_1084_ = v___x_1132_;
v_x_1085_ = v_tail_1086_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___boxed(lean_object* v_n_1134_, lean_object* v_o_1135_, lean_object* v_gap_1136_, lean_object* v_x_1137_, lean_object* v_x_1138_){
_start:
{
lean_object* v_res_1139_; 
v_res_1139_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(v_n_1134_, v_o_1135_, v_gap_1136_, v_x_1137_, v_x_1138_);
lean_dec(v_x_1138_);
lean_dec(v_gap_1136_);
return v_res_1139_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12(lean_object* v_o_1140_, lean_object* v_n_1141_, lean_object* v_gap_1142_, lean_object* v_x_1143_, lean_object* v_x_1144_){
_start:
{
if (lean_obj_tag(v_x_1144_) == 0)
{
lean_dec(v_n_1141_);
lean_dec_ref(v_o_1140_);
return v_x_1143_;
}
else
{
lean_object* v_tail_1145_; lean_object* v_pos_1146_; lean_object* v_section_x27_1147_; lean_object* v_title_1148_; lean_object* v_counts_1149_; lean_object* v_quarters_1150_; uint8_t v_ccw_1151_; lean_object* v_index_1152_; lean_object* v___x_1153_; lean_object* v___x_1154_; lean_object* v_paths_1155_; lean_object* v_orbits_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; 
v_tail_1145_ = lean_ctor_get(v_x_1144_, 1);
v_pos_1146_ = lean_ctor_get(v_x_1143_, 0);
v_section_x27_1147_ = lean_ctor_get(v_o_1140_, 1);
v_title_1148_ = lean_ctor_get(v_o_1140_, 2);
v_counts_1149_ = lean_ctor_get(v_o_1140_, 4);
v_quarters_1150_ = lean_ctor_get(v_o_1140_, 5);
v_ccw_1151_ = lean_ctor_get_uint8(v_o_1140_, sizeof(void*)*16);
v_index_1152_ = lean_ctor_get(v_o_1140_, 15);
lean_inc_n(v_n_1141_, 2);
v___x_1153_ = l_List_range(v_n_1141_);
v___x_1154_ = lean_box(0);
lean_inc(v___x_1153_);
v_paths_1155_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_pos_1146_, v_o_1140_, v___x_1153_, v___x_1154_);
v_orbits_1156_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_pos_1146_, v___x_1153_, v___x_1154_);
v___x_1157_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__0));
v___x_1158_ = lean_unsigned_to_nat(90u);
v___x_1159_ = lean_nat_mul(v_quarters_1150_, v___x_1158_);
v___x_1160_ = l_Nat_reprFast(v___x_1159_);
v___x_1161_ = lean_string_append(v___x_1157_, v___x_1160_);
lean_dec_ref(v___x_1160_);
v___x_1162_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__1));
v___x_1163_ = lean_string_append(v___x_1161_, v___x_1162_);
v___x_1164_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1148_, v___x_1163_);
lean_dec_ref(v___x_1163_);
v___x_1165_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2));
v___x_1166_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__3));
v___x_1167_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1148_, v___x_1166_);
v___x_1168_ = lp_choreo_Choreo_centre;
v___x_1169_ = lp_choreo_Choreo_chooseCerts(v_n_1141_, v_paths_1155_, v_gap_1142_);
lean_dec(v_paths_1155_);
lean_inc(v_counts_1149_);
v___x_1170_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1170_, 0, v___x_1168_);
lean_ctor_set(v___x_1170_, 1, v_counts_1149_);
lean_ctor_set(v___x_1170_, 2, v___x_1169_);
lean_ctor_set(v___x_1170_, 3, v_orbits_1156_);
lean_ctor_set_uint8(v___x_1170_, sizeof(void*)*4, v_ccw_1151_);
v___x_1171_ = lean_box(0);
v___x_1172_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1172_, 0, v___x_1170_);
lean_ctor_set(v___x_1172_, 1, v___x_1171_);
lean_ctor_set(v___x_1172_, 2, v___x_1171_);
v___x_1173_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__4));
v___x_1174_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__5));
if (v_ccw_1151_ == 0)
{
lean_object* v_x_1175_; lean_object* v_y_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; lean_object* v___x_1183_; 
v_x_1175_ = lean_ctor_get(v___x_1168_, 0);
v_y_1176_ = lean_ctor_get(v___x_1168_, 1);
lean_inc(v_x_1175_);
v___x_1177_ = l_Rat_ofInt(v_x_1175_);
lean_inc(v_y_1176_);
v___x_1178_ = l_Rat_ofInt(v_y_1176_);
v___x_1179_ = lean_unsigned_to_nat(3u);
v___x_1180_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1180_, 0, v___x_1177_);
lean_ctor_set(v___x_1180_, 1, v___x_1178_);
lean_ctor_set(v___x_1180_, 2, v___x_1179_);
v___x_1181_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1181_, 0, v___x_1180_);
lean_inc(v_index_1152_);
lean_inc_ref(v_section_x27_1147_);
lean_inc(v_n_1141_);
v___x_1182_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___lam__1(v_n_1141_, v_section_x27_1147_, v_index_1152_, v___x_1164_, v___x_1165_, v___x_1167_, v___x_1172_, v___x_1173_, v___x_1174_, v_x_1143_, v___x_1181_);
v___x_1183_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(v_n_1141_, v_o_1140_, v_gap_1142_, v___x_1182_, v_tail_1145_);
return v___x_1183_;
}
else
{
lean_object* v_x_1184_; lean_object* v_y_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; 
v_x_1184_ = lean_ctor_get(v___x_1168_, 0);
v_y_1185_ = lean_ctor_get(v___x_1168_, 1);
lean_inc(v_x_1184_);
v___x_1186_ = l_Rat_ofInt(v_x_1184_);
lean_inc(v_y_1185_);
v___x_1187_ = l_Rat_ofInt(v_y_1185_);
v___x_1188_ = lean_unsigned_to_nat(1u);
v___x_1189_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_1189_, 0, v___x_1186_);
lean_ctor_set(v___x_1189_, 1, v___x_1187_);
lean_ctor_set(v___x_1189_, 2, v___x_1188_);
v___x_1190_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1189_);
lean_inc(v_index_1152_);
lean_inc_ref(v_section_x27_1147_);
lean_inc(v_n_1141_);
v___x_1191_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___lam__1(v_n_1141_, v_section_x27_1147_, v_index_1152_, v___x_1164_, v___x_1165_, v___x_1167_, v___x_1172_, v___x_1173_, v___x_1174_, v_x_1143_, v___x_1190_);
v___x_1192_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(v_n_1141_, v_o_1140_, v_gap_1142_, v___x_1191_, v_tail_1145_);
return v___x_1192_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___boxed(lean_object* v_o_1193_, lean_object* v_n_1194_, lean_object* v_gap_1195_, lean_object* v_x_1196_, lean_object* v_x_1197_){
_start:
{
lean_object* v_res_1198_; 
v_res_1198_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12(v_o_1193_, v_n_1194_, v_gap_1195_, v_x_1196_, v_x_1197_);
lean_dec(v_x_1197_);
lean_dec(v_gap_1195_);
return v_res_1198_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10(lean_object* v_n_1203_, lean_object* v_gap_1204_, lean_object* v_o_1205_, lean_object* v_title_1206_, lean_object* v_x_1207_, lean_object* v_x_1208_){
_start:
{
if (lean_obj_tag(v_x_1208_) == 0)
{
lean_dec_ref(v_title_1206_);
lean_dec_ref(v_o_1205_);
lean_dec(v_gap_1204_);
lean_dec(v_n_1203_);
return v_x_1207_;
}
else
{
lean_object* v_head_1209_; lean_object* v_tail_1210_; lean_object* v___x_1212_; uint8_t v_isShared_1213_; uint8_t v_isSharedCheck_1284_; 
v_head_1209_ = lean_ctor_get(v_x_1208_, 0);
v_tail_1210_ = lean_ctor_get(v_x_1208_, 1);
v_isSharedCheck_1284_ = !lean_is_exclusive(v_x_1208_);
if (v_isSharedCheck_1284_ == 0)
{
v___x_1212_ = v_x_1208_;
v_isShared_1213_ = v_isSharedCheck_1284_;
goto v_resetjp_1211_;
}
else
{
lean_inc(v_tail_1210_);
lean_inc(v_head_1209_);
lean_dec(v_x_1208_);
v___x_1212_ = lean_box(0);
v_isShared_1213_ = v_isSharedCheck_1284_;
goto v_resetjp_1211_;
}
v_resetjp_1211_:
{
lean_object* v_fst_1214_; lean_object* v___x_1216_; uint8_t v_isShared_1217_; uint8_t v_isSharedCheck_1282_; 
v_fst_1214_ = lean_ctor_get(v_x_1207_, 0);
v_isSharedCheck_1282_ = !lean_is_exclusive(v_x_1207_);
if (v_isSharedCheck_1282_ == 0)
{
lean_object* v_unused_1283_; 
v_unused_1283_ = lean_ctor_get(v_x_1207_, 1);
lean_dec(v_unused_1283_);
v___x_1216_ = v_x_1207_;
v_isShared_1217_ = v_isSharedCheck_1282_;
goto v_resetjp_1215_;
}
else
{
lean_inc(v_fst_1214_);
lean_dec(v_x_1207_);
v___x_1216_ = lean_box(0);
v_isShared_1217_ = v_isSharedCheck_1282_;
goto v_resetjp_1215_;
}
v_resetjp_1215_:
{
lean_object* v_section_x27_1218_; lean_object* v_title_1219_; lean_object* v_index_1220_; lean_object* v___y_1222_; lean_object* v___x_1279_; lean_object* v___x_1280_; uint8_t v___x_1281_; 
v_section_x27_1218_ = lean_ctor_get(v_o_1205_, 1);
v_title_1219_ = lean_ctor_get(v_o_1205_, 2);
v_index_1220_ = lean_ctor_get(v_o_1205_, 15);
v___x_1279_ = lean_string_utf8_byte_size(v_title_1219_);
v___x_1280_ = lean_unsigned_to_nat(0u);
v___x_1281_ = lean_nat_dec_eq(v___x_1279_, v___x_1280_);
if (v___x_1281_ == 0)
{
lean_inc_ref(v_title_1219_);
v___y_1222_ = v_title_1219_;
goto v___jp_1221_;
}
else
{
lean_inc_ref(v_title_1206_);
v___y_1222_ = v_title_1206_;
goto v___jp_1221_;
}
v___jp_1221_:
{
lean_object* v_snd_1223_; lean_object* v_fst_1224_; lean_object* v___x_1226_; uint8_t v_isShared_1227_; uint8_t v_isSharedCheck_1278_; 
v_snd_1223_ = lean_ctor_get(v_head_1209_, 1);
v_fst_1224_ = lean_ctor_get(v_head_1209_, 0);
v_isSharedCheck_1278_ = !lean_is_exclusive(v_head_1209_);
if (v_isSharedCheck_1278_ == 0)
{
v___x_1226_ = v_head_1209_;
v_isShared_1227_ = v_isSharedCheck_1278_;
goto v_resetjp_1225_;
}
else
{
lean_inc(v_snd_1223_);
lean_inc(v_fst_1224_);
lean_dec(v_head_1209_);
v___x_1226_ = lean_box(0);
v_isShared_1227_ = v_isSharedCheck_1278_;
goto v_resetjp_1225_;
}
v_resetjp_1225_:
{
lean_object* v_fst_1228_; lean_object* v_snd_1229_; lean_object* v___x_1231_; uint8_t v_isShared_1232_; uint8_t v_isSharedCheck_1277_; 
v_fst_1228_ = lean_ctor_get(v_snd_1223_, 0);
v_snd_1229_ = lean_ctor_get(v_snd_1223_, 1);
v_isSharedCheck_1277_ = !lean_is_exclusive(v_snd_1223_);
if (v_isSharedCheck_1277_ == 0)
{
v___x_1231_ = v_snd_1223_;
v_isShared_1232_ = v_isSharedCheck_1277_;
goto v_resetjp_1230_;
}
else
{
lean_inc(v_snd_1229_);
lean_inc(v_fst_1228_);
lean_dec(v_snd_1223_);
v___x_1231_ = lean_box(0);
v_isShared_1232_ = v_isSharedCheck_1277_;
goto v_resetjp_1230_;
}
v_resetjp_1230_:
{
lean_object* v_pos_1233_; lean_object* v_steps_1234_; lean_object* v___x_1236_; uint8_t v_isShared_1237_; uint8_t v_isSharedCheck_1276_; 
v_pos_1233_ = lean_ctor_get(v_fst_1214_, 0);
v_steps_1234_ = lean_ctor_get(v_fst_1214_, 1);
v_isSharedCheck_1276_ = !lean_is_exclusive(v_fst_1214_);
if (v_isSharedCheck_1276_ == 0)
{
v___x_1236_ = v_fst_1214_;
v_isShared_1237_ = v_isSharedCheck_1276_;
goto v_resetjp_1235_;
}
else
{
lean_inc(v_steps_1234_);
lean_inc(v_pos_1233_);
lean_dec(v_fst_1214_);
v___x_1236_ = lean_box(0);
v_isShared_1237_ = v_isSharedCheck_1276_;
goto v_resetjp_1235_;
}
v_resetjp_1235_:
{
lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1242_; 
lean_inc(v_n_1203_);
v___x_1238_ = l_List_range(v_n_1203_);
v___x_1239_ = lean_box(0);
lean_inc(v_fst_1228_);
lean_inc(v_fst_1224_);
v___x_1240_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_fst_1224_, v_fst_1228_, v___x_1238_, v___x_1239_);
if (v_isShared_1227_ == 0)
{
lean_ctor_set_tag(v___x_1226_, 2);
lean_ctor_set(v___x_1226_, 1, v_snd_1229_);
lean_ctor_set(v___x_1226_, 0, v___x_1240_);
v___x_1242_ = v___x_1226_;
goto v_reusejp_1241_;
}
else
{
lean_object* v_reuseFailAlloc_1275_; 
v_reuseFailAlloc_1275_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1275_, 0, v___x_1240_);
lean_ctor_set(v_reuseFailAlloc_1275_, 1, v_snd_1229_);
v___x_1242_ = v_reuseFailAlloc_1275_;
goto v_reusejp_1241_;
}
v_reusejp_1241_:
{
lean_object* v___x_1244_; 
lean_inc(v_gap_1204_);
lean_inc(v_n_1203_);
if (v_isShared_1217_ == 0)
{
lean_ctor_set_tag(v___x_1216_, 2);
lean_ctor_set(v___x_1216_, 1, v_gap_1204_);
lean_ctor_set(v___x_1216_, 0, v_n_1203_);
v___x_1244_ = v___x_1216_;
goto v_reusejp_1243_;
}
else
{
lean_object* v_reuseFailAlloc_1274_; 
v_reuseFailAlloc_1274_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1274_, 0, v_n_1203_);
lean_ctor_set(v_reuseFailAlloc_1274_, 1, v_gap_1204_);
v___x_1244_ = v_reuseFailAlloc_1274_;
goto v_reusejp_1243_;
}
v_reusejp_1243_:
{
lean_object* v___x_1245_; lean_object* v___x_1246_; lean_object* v___x_1247_; lean_object* v___x_1248_; lean_object* v___x_1249_; lean_object* v___x_1250_; lean_object* v___x_1251_; lean_object* v___x_1252_; lean_object* v___x_1253_; lean_object* v___x_1254_; lean_object* v___x_1255_; lean_object* v___x_1256_; lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1259_; lean_object* v_next_1260_; lean_object* v___x_1261_; lean_object* v___x_1263_; 
v___x_1245_ = lean_box(0);
lean_inc_ref(v___x_1242_);
v___x_1246_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1242_);
lean_ctor_set(v___x_1246_, 1, v___x_1244_);
lean_ctor_set(v___x_1246_, 2, v___x_1245_);
v___x_1247_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0));
v___x_1248_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1249_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1250_ = lean_int_ediv(v_gap_1204_, v___x_1249_);
v___x_1251_ = l_Int_repr(v___x_1250_);
lean_dec(v___x_1250_);
v___x_1252_ = lean_string_append(v___x_1248_, v___x_1251_);
lean_dec_ref(v___x_1251_);
v___x_1253_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2));
v___x_1254_ = lean_string_append(v___x_1252_, v___x_1253_);
v___x_1255_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__3));
v___x_1256_ = l_Rat_ofInt(v_fst_1224_);
v___x_1257_ = l_Rat_ofInt(v_fst_1228_);
v___x_1258_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1258_, 0, v___x_1256_);
lean_ctor_set(v___x_1258_, 1, v___x_1257_);
v___x_1259_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1259_, 0, v___x_1258_);
lean_inc(v_n_1203_);
v_next_1260_ = lp_choreo_Choreo_Op_next(v___x_1242_, v_n_1203_, v_pos_1233_);
lean_inc(v_next_1260_);
lean_inc_ref(v_title_1206_);
lean_inc(v_index_1220_);
lean_inc_ref(v_section_x27_1218_);
v___x_1261_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1261_, 0, v___y_1222_);
lean_ctor_set(v___x_1261_, 1, v_section_x27_1218_);
lean_ctor_set(v___x_1261_, 2, v_index_1220_);
lean_ctor_set(v___x_1261_, 3, v___x_1247_);
lean_ctor_set(v___x_1261_, 4, v_title_1206_);
lean_ctor_set(v___x_1261_, 5, v___x_1246_);
lean_ctor_set(v___x_1261_, 6, v___x_1254_);
lean_ctor_set(v___x_1261_, 7, v___x_1255_);
lean_ctor_set(v___x_1261_, 8, v_pos_1233_);
lean_ctor_set(v___x_1261_, 9, v_next_1260_);
lean_ctor_set(v___x_1261_, 10, v___x_1259_);
if (v_isShared_1213_ == 0)
{
lean_ctor_set(v___x_1212_, 1, v___x_1239_);
lean_ctor_set(v___x_1212_, 0, v___x_1261_);
v___x_1263_ = v___x_1212_;
goto v_reusejp_1262_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v___x_1261_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v___x_1239_);
v___x_1263_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1262_;
}
v_reusejp_1262_:
{
lean_object* v___x_1264_; lean_object* v___x_1266_; 
v___x_1264_ = l_List_appendTR___redArg(v_steps_1234_, v___x_1263_);
if (v_isShared_1237_ == 0)
{
lean_ctor_set(v___x_1236_, 1, v___x_1264_);
lean_ctor_set(v___x_1236_, 0, v_next_1260_);
v___x_1266_ = v___x_1236_;
goto v_reusejp_1265_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v_next_1260_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v___x_1264_);
v___x_1266_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1265_;
}
v_reusejp_1265_:
{
lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1267_ = lean_unsigned_to_nat(0u);
if (v_isShared_1232_ == 0)
{
lean_ctor_set(v___x_1231_, 1, v___x_1267_);
lean_ctor_set(v___x_1231_, 0, v___x_1266_);
v___x_1269_ = v___x_1231_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1271_; 
v_reuseFailAlloc_1271_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1271_, 0, v___x_1266_);
lean_ctor_set(v_reuseFailAlloc_1271_, 1, v___x_1267_);
v___x_1269_ = v_reuseFailAlloc_1271_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
v_x_1207_ = v___x_1269_;
v_x_1208_ = v_tail_1210_;
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
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__10(lean_object* v_o_1285_, lean_object* v_title_1286_, lean_object* v_n_1287_, lean_object* v_gap_1288_, lean_object* v_x_1289_, lean_object* v_x_1290_){
_start:
{
if (lean_obj_tag(v_x_1290_) == 0)
{
lean_dec(v_gap_1288_);
lean_dec(v_n_1287_);
lean_dec_ref(v_title_1286_);
lean_dec_ref(v_o_1285_);
return v_x_1289_;
}
else
{
lean_object* v_head_1291_; lean_object* v_tail_1292_; lean_object* v___x_1294_; uint8_t v_isShared_1295_; uint8_t v_isSharedCheck_1366_; 
v_head_1291_ = lean_ctor_get(v_x_1290_, 0);
v_tail_1292_ = lean_ctor_get(v_x_1290_, 1);
v_isSharedCheck_1366_ = !lean_is_exclusive(v_x_1290_);
if (v_isSharedCheck_1366_ == 0)
{
v___x_1294_ = v_x_1290_;
v_isShared_1295_ = v_isSharedCheck_1366_;
goto v_resetjp_1293_;
}
else
{
lean_inc(v_tail_1292_);
lean_inc(v_head_1291_);
lean_dec(v_x_1290_);
v___x_1294_ = lean_box(0);
v_isShared_1295_ = v_isSharedCheck_1366_;
goto v_resetjp_1293_;
}
v_resetjp_1293_:
{
lean_object* v_fst_1296_; lean_object* v___x_1298_; uint8_t v_isShared_1299_; uint8_t v_isSharedCheck_1364_; 
v_fst_1296_ = lean_ctor_get(v_x_1289_, 0);
v_isSharedCheck_1364_ = !lean_is_exclusive(v_x_1289_);
if (v_isSharedCheck_1364_ == 0)
{
lean_object* v_unused_1365_; 
v_unused_1365_ = lean_ctor_get(v_x_1289_, 1);
lean_dec(v_unused_1365_);
v___x_1298_ = v_x_1289_;
v_isShared_1299_ = v_isSharedCheck_1364_;
goto v_resetjp_1297_;
}
else
{
lean_inc(v_fst_1296_);
lean_dec(v_x_1289_);
v___x_1298_ = lean_box(0);
v_isShared_1299_ = v_isSharedCheck_1364_;
goto v_resetjp_1297_;
}
v_resetjp_1297_:
{
lean_object* v_section_x27_1300_; lean_object* v_title_1301_; lean_object* v_index_1302_; lean_object* v___y_1304_; lean_object* v___x_1361_; lean_object* v___x_1362_; uint8_t v___x_1363_; 
v_section_x27_1300_ = lean_ctor_get(v_o_1285_, 1);
v_title_1301_ = lean_ctor_get(v_o_1285_, 2);
v_index_1302_ = lean_ctor_get(v_o_1285_, 15);
v___x_1361_ = lean_string_utf8_byte_size(v_title_1301_);
v___x_1362_ = lean_unsigned_to_nat(0u);
v___x_1363_ = lean_nat_dec_eq(v___x_1361_, v___x_1362_);
if (v___x_1363_ == 0)
{
lean_inc_ref(v_title_1301_);
v___y_1304_ = v_title_1301_;
goto v___jp_1303_;
}
else
{
lean_inc_ref(v_title_1286_);
v___y_1304_ = v_title_1286_;
goto v___jp_1303_;
}
v___jp_1303_:
{
lean_object* v_snd_1305_; lean_object* v_fst_1306_; lean_object* v___x_1308_; uint8_t v_isShared_1309_; uint8_t v_isSharedCheck_1360_; 
v_snd_1305_ = lean_ctor_get(v_head_1291_, 1);
v_fst_1306_ = lean_ctor_get(v_head_1291_, 0);
v_isSharedCheck_1360_ = !lean_is_exclusive(v_head_1291_);
if (v_isSharedCheck_1360_ == 0)
{
v___x_1308_ = v_head_1291_;
v_isShared_1309_ = v_isSharedCheck_1360_;
goto v_resetjp_1307_;
}
else
{
lean_inc(v_snd_1305_);
lean_inc(v_fst_1306_);
lean_dec(v_head_1291_);
v___x_1308_ = lean_box(0);
v_isShared_1309_ = v_isSharedCheck_1360_;
goto v_resetjp_1307_;
}
v_resetjp_1307_:
{
lean_object* v_fst_1310_; lean_object* v_snd_1311_; lean_object* v___x_1313_; uint8_t v_isShared_1314_; uint8_t v_isSharedCheck_1359_; 
v_fst_1310_ = lean_ctor_get(v_snd_1305_, 0);
v_snd_1311_ = lean_ctor_get(v_snd_1305_, 1);
v_isSharedCheck_1359_ = !lean_is_exclusive(v_snd_1305_);
if (v_isSharedCheck_1359_ == 0)
{
v___x_1313_ = v_snd_1305_;
v_isShared_1314_ = v_isSharedCheck_1359_;
goto v_resetjp_1312_;
}
else
{
lean_inc(v_snd_1311_);
lean_inc(v_fst_1310_);
lean_dec(v_snd_1305_);
v___x_1313_ = lean_box(0);
v_isShared_1314_ = v_isSharedCheck_1359_;
goto v_resetjp_1312_;
}
v_resetjp_1312_:
{
lean_object* v_pos_1315_; lean_object* v_steps_1316_; lean_object* v___x_1318_; uint8_t v_isShared_1319_; uint8_t v_isSharedCheck_1358_; 
v_pos_1315_ = lean_ctor_get(v_fst_1296_, 0);
v_steps_1316_ = lean_ctor_get(v_fst_1296_, 1);
v_isSharedCheck_1358_ = !lean_is_exclusive(v_fst_1296_);
if (v_isSharedCheck_1358_ == 0)
{
v___x_1318_ = v_fst_1296_;
v_isShared_1319_ = v_isSharedCheck_1358_;
goto v_resetjp_1317_;
}
else
{
lean_inc(v_steps_1316_);
lean_inc(v_pos_1315_);
lean_dec(v_fst_1296_);
v___x_1318_ = lean_box(0);
v_isShared_1319_ = v_isSharedCheck_1358_;
goto v_resetjp_1317_;
}
v_resetjp_1317_:
{
lean_object* v___x_1320_; lean_object* v___x_1321_; lean_object* v___x_1322_; lean_object* v___x_1324_; 
lean_inc(v_n_1287_);
v___x_1320_ = l_List_range(v_n_1287_);
v___x_1321_ = lean_box(0);
lean_inc(v_fst_1310_);
lean_inc(v_fst_1306_);
v___x_1322_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_fst_1306_, v_fst_1310_, v___x_1320_, v___x_1321_);
if (v_isShared_1309_ == 0)
{
lean_ctor_set_tag(v___x_1308_, 2);
lean_ctor_set(v___x_1308_, 1, v_snd_1311_);
lean_ctor_set(v___x_1308_, 0, v___x_1322_);
v___x_1324_ = v___x_1308_;
goto v_reusejp_1323_;
}
else
{
lean_object* v_reuseFailAlloc_1357_; 
v_reuseFailAlloc_1357_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1357_, 0, v___x_1322_);
lean_ctor_set(v_reuseFailAlloc_1357_, 1, v_snd_1311_);
v___x_1324_ = v_reuseFailAlloc_1357_;
goto v_reusejp_1323_;
}
v_reusejp_1323_:
{
lean_object* v___x_1326_; 
lean_inc(v_gap_1288_);
lean_inc(v_n_1287_);
if (v_isShared_1299_ == 0)
{
lean_ctor_set_tag(v___x_1298_, 2);
lean_ctor_set(v___x_1298_, 1, v_gap_1288_);
lean_ctor_set(v___x_1298_, 0, v_n_1287_);
v___x_1326_ = v___x_1298_;
goto v_reusejp_1325_;
}
else
{
lean_object* v_reuseFailAlloc_1356_; 
v_reuseFailAlloc_1356_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1356_, 0, v_n_1287_);
lean_ctor_set(v_reuseFailAlloc_1356_, 1, v_gap_1288_);
v___x_1326_ = v_reuseFailAlloc_1356_;
goto v_reusejp_1325_;
}
v_reusejp_1325_:
{
lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v_next_1342_; lean_object* v___x_1343_; lean_object* v___x_1345_; 
v___x_1327_ = lean_box(0);
lean_inc_ref(v___x_1324_);
v___x_1328_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1328_, 0, v___x_1324_);
lean_ctor_set(v___x_1328_, 1, v___x_1326_);
lean_ctor_set(v___x_1328_, 2, v___x_1327_);
v___x_1329_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0));
v___x_1330_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1331_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1332_ = lean_int_ediv(v_gap_1288_, v___x_1331_);
v___x_1333_ = l_Int_repr(v___x_1332_);
lean_dec(v___x_1332_);
v___x_1334_ = lean_string_append(v___x_1330_, v___x_1333_);
lean_dec_ref(v___x_1333_);
v___x_1335_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2));
v___x_1336_ = lean_string_append(v___x_1334_, v___x_1335_);
v___x_1337_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__3));
v___x_1338_ = l_Rat_ofInt(v_fst_1306_);
v___x_1339_ = l_Rat_ofInt(v_fst_1310_);
v___x_1340_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1340_, 0, v___x_1338_);
lean_ctor_set(v___x_1340_, 1, v___x_1339_);
v___x_1341_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1341_, 0, v___x_1340_);
lean_inc(v_n_1287_);
v_next_1342_ = lp_choreo_Choreo_Op_next(v___x_1324_, v_n_1287_, v_pos_1315_);
lean_inc(v_next_1342_);
lean_inc_ref(v_title_1286_);
lean_inc(v_index_1302_);
lean_inc_ref(v_section_x27_1300_);
v___x_1343_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1343_, 0, v___y_1304_);
lean_ctor_set(v___x_1343_, 1, v_section_x27_1300_);
lean_ctor_set(v___x_1343_, 2, v_index_1302_);
lean_ctor_set(v___x_1343_, 3, v___x_1329_);
lean_ctor_set(v___x_1343_, 4, v_title_1286_);
lean_ctor_set(v___x_1343_, 5, v___x_1328_);
lean_ctor_set(v___x_1343_, 6, v___x_1336_);
lean_ctor_set(v___x_1343_, 7, v___x_1337_);
lean_ctor_set(v___x_1343_, 8, v_pos_1315_);
lean_ctor_set(v___x_1343_, 9, v_next_1342_);
lean_ctor_set(v___x_1343_, 10, v___x_1341_);
if (v_isShared_1295_ == 0)
{
lean_ctor_set(v___x_1294_, 1, v___x_1321_);
lean_ctor_set(v___x_1294_, 0, v___x_1343_);
v___x_1345_ = v___x_1294_;
goto v_reusejp_1344_;
}
else
{
lean_object* v_reuseFailAlloc_1355_; 
v_reuseFailAlloc_1355_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1355_, 0, v___x_1343_);
lean_ctor_set(v_reuseFailAlloc_1355_, 1, v___x_1321_);
v___x_1345_ = v_reuseFailAlloc_1355_;
goto v_reusejp_1344_;
}
v_reusejp_1344_:
{
lean_object* v___x_1346_; lean_object* v___x_1348_; 
v___x_1346_ = l_List_appendTR___redArg(v_steps_1316_, v___x_1345_);
if (v_isShared_1319_ == 0)
{
lean_ctor_set(v___x_1318_, 1, v___x_1346_);
lean_ctor_set(v___x_1318_, 0, v_next_1342_);
v___x_1348_ = v___x_1318_;
goto v_reusejp_1347_;
}
else
{
lean_object* v_reuseFailAlloc_1354_; 
v_reuseFailAlloc_1354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1354_, 0, v_next_1342_);
lean_ctor_set(v_reuseFailAlloc_1354_, 1, v___x_1346_);
v___x_1348_ = v_reuseFailAlloc_1354_;
goto v_reusejp_1347_;
}
v_reusejp_1347_:
{
lean_object* v___x_1349_; lean_object* v___x_1351_; 
v___x_1349_ = lean_unsigned_to_nat(0u);
if (v_isShared_1314_ == 0)
{
lean_ctor_set(v___x_1313_, 1, v___x_1349_);
lean_ctor_set(v___x_1313_, 0, v___x_1348_);
v___x_1351_ = v___x_1313_;
goto v_reusejp_1350_;
}
else
{
lean_object* v_reuseFailAlloc_1353_; 
v_reuseFailAlloc_1353_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1353_, 0, v___x_1348_);
lean_ctor_set(v_reuseFailAlloc_1353_, 1, v___x_1349_);
v___x_1351_ = v_reuseFailAlloc_1353_;
goto v_reusejp_1350_;
}
v_reusejp_1350_:
{
lean_object* v___x_1352_; 
v___x_1352_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10(v_n_1287_, v_gap_1288_, v_o_1285_, v_title_1286_, v___x_1351_, v_tail_1292_);
return v___x_1352_;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(lean_object* v_s_1367_, lean_object* v_target_1368_, lean_object* v_a_1369_, lean_object* v_a_1370_){
_start:
{
if (lean_obj_tag(v_a_1369_) == 0)
{
lean_object* v___x_1371_; 
v___x_1371_ = l_List_reverse___redArg(v_a_1370_);
return v___x_1371_;
}
else
{
lean_object* v_head_1372_; lean_object* v_tail_1373_; lean_object* v___x_1375_; uint8_t v_isShared_1376_; uint8_t v_isSharedCheck_1384_; 
v_head_1372_ = lean_ctor_get(v_a_1369_, 0);
v_tail_1373_ = lean_ctor_get(v_a_1369_, 1);
v_isSharedCheck_1384_ = !lean_is_exclusive(v_a_1369_);
if (v_isSharedCheck_1384_ == 0)
{
v___x_1375_ = v_a_1369_;
v_isShared_1376_ = v_isSharedCheck_1384_;
goto v_resetjp_1374_;
}
else
{
lean_inc(v_tail_1373_);
lean_inc(v_head_1372_);
lean_dec(v_a_1369_);
v___x_1375_ = lean_box(0);
v_isShared_1376_ = v_isSharedCheck_1384_;
goto v_resetjp_1374_;
}
v_resetjp_1374_:
{
lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1381_; 
lean_inc(v_head_1372_);
v___x_1377_ = lp_choreo_Choreo_State_at(v_s_1367_, v_head_1372_);
v___x_1378_ = lp_choreo_List_at(v_target_1368_, v_head_1372_);
v___x_1379_ = lp_choreo_Choreo_easePath(v___x_1377_, v___x_1378_);
if (v_isShared_1376_ == 0)
{
lean_ctor_set(v___x_1375_, 1, v_a_1370_);
lean_ctor_set(v___x_1375_, 0, v___x_1379_);
v___x_1381_ = v___x_1375_;
goto v_reusejp_1380_;
}
else
{
lean_object* v_reuseFailAlloc_1383_; 
v_reuseFailAlloc_1383_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1383_, 0, v___x_1379_);
lean_ctor_set(v_reuseFailAlloc_1383_, 1, v_a_1370_);
v___x_1381_ = v_reuseFailAlloc_1383_;
goto v_reusejp_1380_;
}
v_reusejp_1380_:
{
v_a_1369_ = v_tail_1373_;
v_a_1370_ = v___x_1381_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8___boxed(lean_object* v_s_1385_, lean_object* v_target_1386_, lean_object* v_a_1387_, lean_object* v_a_1388_){
_start:
{
lean_object* v_res_1389_; 
v_res_1389_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(v_s_1385_, v_target_1386_, v_a_1387_, v_a_1388_);
lean_dec(v_target_1386_);
lean_dec(v_s_1385_);
return v_res_1389_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11(lean_object* v_fst_1390_, lean_object* v_dist_1391_, lean_object* v_a_1392_, lean_object* v_a_1393_){
_start:
{
if (lean_obj_tag(v_a_1392_) == 0)
{
lean_object* v___x_1394_; 
lean_dec(v_dist_1391_);
v___x_1394_ = l_List_reverse___redArg(v_a_1393_);
return v___x_1394_;
}
else
{
lean_object* v_head_1395_; lean_object* v_tail_1396_; lean_object* v___x_1398_; uint8_t v_isShared_1399_; uint8_t v_isSharedCheck_1412_; 
v_head_1395_ = lean_ctor_get(v_a_1392_, 0);
v_tail_1396_ = lean_ctor_get(v_a_1392_, 1);
v_isSharedCheck_1412_ = !lean_is_exclusive(v_a_1392_);
if (v_isSharedCheck_1412_ == 0)
{
v___x_1398_ = v_a_1392_;
v_isShared_1399_ = v_isSharedCheck_1412_;
goto v_resetjp_1397_;
}
else
{
lean_inc(v_tail_1396_);
lean_inc(v_head_1395_);
lean_dec(v_a_1392_);
v___x_1398_ = lean_box(0);
v_isShared_1399_ = v_isSharedCheck_1412_;
goto v_resetjp_1397_;
}
v_resetjp_1397_:
{
lean_object* v___y_1401_; uint8_t v___x_1406_; 
v___x_1406_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_1395_, v_fst_1390_);
lean_dec(v_head_1395_);
if (v___x_1406_ == 0)
{
lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; 
v___x_1407_ = lean_int_neg(v_dist_1391_);
v___x_1408_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_1409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1409_, 0, v___x_1407_);
lean_ctor_set(v___x_1409_, 1, v___x_1408_);
v___y_1401_ = v___x_1409_;
goto v___jp_1400_;
}
else
{
lean_object* v___x_1410_; lean_object* v___x_1411_; 
v___x_1410_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc(v_dist_1391_);
v___x_1411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1411_, 0, v_dist_1391_);
lean_ctor_set(v___x_1411_, 1, v___x_1410_);
v___y_1401_ = v___x_1411_;
goto v___jp_1400_;
}
v___jp_1400_:
{
lean_object* v___x_1403_; 
if (v_isShared_1399_ == 0)
{
lean_ctor_set(v___x_1398_, 1, v_a_1393_);
lean_ctor_set(v___x_1398_, 0, v___y_1401_);
v___x_1403_ = v___x_1398_;
goto v_reusejp_1402_;
}
else
{
lean_object* v_reuseFailAlloc_1405_; 
v_reuseFailAlloc_1405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1405_, 0, v___y_1401_);
lean_ctor_set(v_reuseFailAlloc_1405_, 1, v_a_1393_);
v___x_1403_ = v_reuseFailAlloc_1405_;
goto v_reusejp_1402_;
}
v_reusejp_1402_:
{
v_a_1392_ = v_tail_1396_;
v_a_1393_ = v___x_1403_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11___boxed(lean_object* v_fst_1413_, lean_object* v_dist_1414_, lean_object* v_a_1415_, lean_object* v_a_1416_){
_start:
{
lean_object* v_res_1417_; 
v_res_1417_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11(v_fst_1413_, v_dist_1414_, v_a_1415_, v_a_1416_);
lean_dec(v_fst_1413_);
return v_res_1417_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(lean_object* v_s_1418_, lean_object* v_o_1419_, lean_object* v_a_1420_, lean_object* v_a_1421_){
_start:
{
if (lean_obj_tag(v_a_1420_) == 0)
{
lean_object* v___x_1422_; 
v___x_1422_ = l_List_reverse___redArg(v_a_1421_);
return v___x_1422_;
}
else
{
lean_object* v_head_1423_; lean_object* v_tail_1424_; lean_object* v___x_1426_; uint8_t v_isShared_1427_; uint8_t v_isSharedCheck_1459_; 
v_head_1423_ = lean_ctor_get(v_a_1420_, 0);
v_tail_1424_ = lean_ctor_get(v_a_1420_, 1);
v_isSharedCheck_1459_ = !lean_is_exclusive(v_a_1420_);
if (v_isSharedCheck_1459_ == 0)
{
v___x_1426_ = v_a_1420_;
v_isShared_1427_ = v_isSharedCheck_1459_;
goto v_resetjp_1425_;
}
else
{
lean_inc(v_tail_1424_);
lean_inc(v_head_1423_);
lean_dec(v_a_1420_);
v___x_1426_ = lean_box(0);
v_isShared_1427_ = v_isSharedCheck_1459_;
goto v_resetjp_1425_;
}
v_resetjp_1425_:
{
lean_object* v___x_1428_; lean_object* v_x_1429_; lean_object* v_y_1430_; lean_object* v_p_1431_; lean_object* v_x_1432_; lean_object* v_y_1433_; lean_object* v___x_1435_; uint8_t v_isShared_1436_; uint8_t v_isSharedCheck_1458_; 
v___x_1428_ = lp_choreo_Choreo_centre;
v_x_1429_ = lean_ctor_get(v___x_1428_, 0);
v_y_1430_ = lean_ctor_get(v___x_1428_, 1);
v_p_1431_ = lp_choreo_Choreo_State_at(v_s_1418_, v_head_1423_);
v_x_1432_ = lean_ctor_get(v_p_1431_, 0);
v_y_1433_ = lean_ctor_get(v_p_1431_, 1);
v_isSharedCheck_1458_ = !lean_is_exclusive(v_p_1431_);
if (v_isSharedCheck_1458_ == 0)
{
v___x_1435_ = v_p_1431_;
v_isShared_1436_ = v_isSharedCheck_1458_;
goto v_resetjp_1434_;
}
else
{
lean_inc(v_y_1433_);
lean_inc(v_x_1432_);
lean_dec(v_p_1431_);
v___x_1435_ = lean_box(0);
v_isShared_1436_ = v_isSharedCheck_1458_;
goto v_resetjp_1434_;
}
v_resetjp_1434_:
{
lean_object* v_num_1437_; lean_object* v_den_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___y_1442_; lean_object* v___x_1456_; uint8_t v___x_1457_; 
v_num_1437_ = lean_ctor_get(v_o_1419_, 8);
v_den_1438_ = lean_ctor_get(v_o_1419_, 9);
v___x_1439_ = lean_int_sub(v_x_1432_, v_x_1429_);
lean_dec(v_x_1432_);
v___x_1440_ = lean_int_mul(v___x_1439_, v_num_1437_);
lean_dec(v___x_1439_);
v___x_1456_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_1457_ = lean_int_dec_le(v___x_1456_, v_den_1438_);
if (v___x_1457_ == 0)
{
v___y_1442_ = v___x_1456_;
goto v___jp_1441_;
}
else
{
v___y_1442_ = v_den_1438_;
goto v___jp_1441_;
}
v___jp_1441_:
{
lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; lean_object* v___x_1450_; 
v___x_1443_ = lean_int_ediv(v___x_1440_, v___y_1442_);
lean_dec(v___x_1440_);
v___x_1444_ = lean_int_add(v_x_1429_, v___x_1443_);
lean_dec(v___x_1443_);
v___x_1445_ = lean_int_sub(v_y_1433_, v_y_1430_);
lean_dec(v_y_1433_);
v___x_1446_ = lean_int_mul(v___x_1445_, v_num_1437_);
lean_dec(v___x_1445_);
v___x_1447_ = lean_int_ediv(v___x_1446_, v___y_1442_);
lean_dec(v___x_1446_);
v___x_1448_ = lean_int_add(v_y_1430_, v___x_1447_);
lean_dec(v___x_1447_);
if (v_isShared_1436_ == 0)
{
lean_ctor_set(v___x_1435_, 1, v___x_1448_);
lean_ctor_set(v___x_1435_, 0, v___x_1444_);
v___x_1450_ = v___x_1435_;
goto v_reusejp_1449_;
}
else
{
lean_object* v_reuseFailAlloc_1455_; 
v_reuseFailAlloc_1455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1455_, 0, v___x_1444_);
lean_ctor_set(v_reuseFailAlloc_1455_, 1, v___x_1448_);
v___x_1450_ = v_reuseFailAlloc_1455_;
goto v_reusejp_1449_;
}
v_reusejp_1449_:
{
lean_object* v___x_1452_; 
if (v_isShared_1427_ == 0)
{
lean_ctor_set(v___x_1426_, 1, v_a_1421_);
lean_ctor_set(v___x_1426_, 0, v___x_1450_);
v___x_1452_ = v___x_1426_;
goto v_reusejp_1451_;
}
else
{
lean_object* v_reuseFailAlloc_1454_; 
v_reuseFailAlloc_1454_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1454_, 0, v___x_1450_);
lean_ctor_set(v_reuseFailAlloc_1454_, 1, v_a_1421_);
v___x_1452_ = v_reuseFailAlloc_1454_;
goto v_reusejp_1451_;
}
v_reusejp_1451_:
{
v_a_1420_ = v_tail_1424_;
v_a_1421_ = v___x_1452_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7___boxed(lean_object* v_s_1460_, lean_object* v_o_1461_, lean_object* v_a_1462_, lean_object* v_a_1463_){
_start:
{
lean_object* v_res_1464_; 
v_res_1464_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(v_s_1460_, v_o_1461_, v_a_1462_, v_a_1463_);
lean_dec_ref(v_o_1461_);
lean_dec(v_s_1460_);
return v_res_1464_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(lean_object* v_s_1465_, lean_object* v_target_1466_, lean_object* v_a_1467_, lean_object* v_a_1468_){
_start:
{
if (lean_obj_tag(v_a_1467_) == 0)
{
lean_object* v___x_1469_; 
v___x_1469_ = l_List_reverse___redArg(v_a_1468_);
return v___x_1469_;
}
else
{
lean_object* v_head_1470_; lean_object* v_tail_1471_; lean_object* v___x_1473_; uint8_t v_isShared_1474_; uint8_t v_isSharedCheck_1482_; 
v_head_1470_ = lean_ctor_get(v_a_1467_, 0);
v_tail_1471_ = lean_ctor_get(v_a_1467_, 1);
v_isSharedCheck_1482_ = !lean_is_exclusive(v_a_1467_);
if (v_isSharedCheck_1482_ == 0)
{
v___x_1473_ = v_a_1467_;
v_isShared_1474_ = v_isSharedCheck_1482_;
goto v_resetjp_1472_;
}
else
{
lean_inc(v_tail_1471_);
lean_inc(v_head_1470_);
lean_dec(v_a_1467_);
v___x_1473_ = lean_box(0);
v_isShared_1474_ = v_isSharedCheck_1482_;
goto v_resetjp_1472_;
}
v_resetjp_1472_:
{
lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1479_; 
lean_inc(v_head_1470_);
v___x_1475_ = lp_choreo_Choreo_State_at(v_s_1465_, v_head_1470_);
v___x_1476_ = lp_choreo_Choreo_State_at(v_target_1466_, v_head_1470_);
v___x_1477_ = lp_choreo_Choreo_easePath(v___x_1475_, v___x_1476_);
if (v_isShared_1474_ == 0)
{
lean_ctor_set(v___x_1473_, 1, v_a_1468_);
lean_ctor_set(v___x_1473_, 0, v___x_1477_);
v___x_1479_ = v___x_1473_;
goto v_reusejp_1478_;
}
else
{
lean_object* v_reuseFailAlloc_1481_; 
v_reuseFailAlloc_1481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1481_, 0, v___x_1477_);
lean_ctor_set(v_reuseFailAlloc_1481_, 1, v_a_1468_);
v___x_1479_ = v_reuseFailAlloc_1481_;
goto v_reusejp_1478_;
}
v_reusejp_1478_:
{
v_a_1467_ = v_tail_1471_;
v_a_1468_ = v___x_1479_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6___boxed(lean_object* v_s_1483_, lean_object* v_target_1484_, lean_object* v_a_1485_, lean_object* v_a_1486_){
_start:
{
lean_object* v_res_1487_; 
v_res_1487_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(v_s_1483_, v_target_1484_, v_a_1485_, v_a_1486_);
lean_dec(v_target_1484_);
lean_dec(v_s_1483_);
return v_res_1487_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___closed__0(void){
_start:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; 
v___x_1488_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_1489_ = lean_int_neg(v___x_1488_);
return v___x_1489_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(lean_object* v_s_1490_, lean_object* v_a_1491_, lean_object* v_a_1492_){
_start:
{
if (lean_obj_tag(v_a_1491_) == 0)
{
lean_object* v___x_1493_; 
v___x_1493_ = l_List_reverse___redArg(v_a_1492_);
return v___x_1493_;
}
else
{
lean_object* v_head_1494_; lean_object* v_tail_1495_; lean_object* v___x_1497_; uint8_t v_isShared_1498_; uint8_t v_isSharedCheck_1516_; 
v_head_1494_ = lean_ctor_get(v_a_1491_, 0);
v_tail_1495_ = lean_ctor_get(v_a_1491_, 1);
v_isSharedCheck_1516_ = !lean_is_exclusive(v_a_1491_);
if (v_isSharedCheck_1516_ == 0)
{
v___x_1497_ = v_a_1491_;
v_isShared_1498_ = v_isSharedCheck_1516_;
goto v_resetjp_1496_;
}
else
{
lean_inc(v_tail_1495_);
lean_inc(v_head_1494_);
lean_dec(v_a_1491_);
v___x_1497_ = lean_box(0);
v_isShared_1498_ = v_isSharedCheck_1516_;
goto v_resetjp_1496_;
}
v_resetjp_1496_:
{
lean_object* v___x_1499_; lean_object* v_x_1500_; lean_object* v___x_1502_; uint8_t v_isShared_1503_; uint8_t v_isSharedCheck_1514_; 
v___x_1499_ = lp_choreo_Choreo_State_at(v_s_1490_, v_head_1494_);
v_x_1500_ = lean_ctor_get(v___x_1499_, 0);
v_isSharedCheck_1514_ = !lean_is_exclusive(v___x_1499_);
if (v_isSharedCheck_1514_ == 0)
{
lean_object* v_unused_1515_; 
v_unused_1515_ = lean_ctor_get(v___x_1499_, 1);
lean_dec(v_unused_1515_);
v___x_1502_ = v___x_1499_;
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
else
{
lean_inc(v_x_1500_);
lean_dec(v___x_1499_);
v___x_1502_ = lean_box(0);
v_isShared_1503_ = v_isSharedCheck_1514_;
goto v_resetjp_1501_;
}
v_resetjp_1501_:
{
lean_object* v___x_1504_; lean_object* v___x_1505_; lean_object* v___x_1506_; lean_object* v___x_1508_; 
v___x_1504_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___closed__0);
v___x_1505_ = lean_int_mul(v___x_1504_, v_x_1500_);
lean_dec(v_x_1500_);
v___x_1506_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
if (v_isShared_1503_ == 0)
{
lean_ctor_set(v___x_1502_, 1, v___x_1506_);
lean_ctor_set(v___x_1502_, 0, v___x_1505_);
v___x_1508_ = v___x_1502_;
goto v_reusejp_1507_;
}
else
{
lean_object* v_reuseFailAlloc_1513_; 
v_reuseFailAlloc_1513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1513_, 0, v___x_1505_);
lean_ctor_set(v_reuseFailAlloc_1513_, 1, v___x_1506_);
v___x_1508_ = v_reuseFailAlloc_1513_;
goto v_reusejp_1507_;
}
v_reusejp_1507_:
{
lean_object* v___x_1510_; 
if (v_isShared_1498_ == 0)
{
lean_ctor_set(v___x_1497_, 1, v_a_1492_);
lean_ctor_set(v___x_1497_, 0, v___x_1508_);
v___x_1510_ = v___x_1497_;
goto v_reusejp_1509_;
}
else
{
lean_object* v_reuseFailAlloc_1512_; 
v_reuseFailAlloc_1512_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1512_, 0, v___x_1508_);
lean_ctor_set(v_reuseFailAlloc_1512_, 1, v_a_1492_);
v___x_1510_ = v_reuseFailAlloc_1512_;
goto v_reusejp_1509_;
}
v_reusejp_1509_:
{
v_a_1491_ = v_tail_1495_;
v_a_1492_ = v___x_1510_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___boxed(lean_object* v_s_1517_, lean_object* v_a_1518_, lean_object* v_a_1519_){
_start:
{
lean_object* v_res_1520_; 
v_res_1520_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(v_s_1517_, v_a_1518_, v_a_1519_);
lean_dec(v_s_1517_);
return v_res_1520_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__27(void){
_start:
{
lean_object* v___x_1548_; lean_object* v___x_1549_; 
v___x_1548_ = lean_unsigned_to_nat(0u);
v___x_1549_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_1548_);
return v___x_1549_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__28(void){
_start:
{
lean_object* v___x_1550_; lean_object* v___x_1551_; 
v___x_1550_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__27, &lp_choreo_Choreo_compileOp___closed__27_once, _init_lp_choreo_Choreo_compileOp___closed__27);
v___x_1551_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1551_, 0, v___x_1550_);
return v___x_1551_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__29(void){
_start:
{
lean_object* v___x_1552_; lean_object* v___x_1553_; 
v___x_1552_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__28, &lp_choreo_Choreo_compileOp___closed__28_once, _init_lp_choreo_Choreo_compileOp___closed__28);
v___x_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1553_, 0, v___x_1552_);
return v___x_1553_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__32(void){
_start:
{
lean_object* v___x_1556_; lean_object* v___x_1557_; 
v___x_1556_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__27, &lp_choreo_Choreo_compileOp___closed__27_once, _init_lp_choreo_Choreo_compileOp___closed__27);
v___x_1557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1557_, 0, v___x_1556_);
lean_ctor_set(v___x_1557_, 1, v___x_1556_);
return v___x_1557_;
}
}
static lean_object* _init_lp_choreo_Choreo_compileOp___closed__33(void){
_start:
{
lean_object* v___x_1558_; lean_object* v___x_1559_; 
v___x_1558_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__32, &lp_choreo_Choreo_compileOp___closed__32_once, _init_lp_choreo_Choreo_compileOp___closed__32);
v___x_1559_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1559_, 0, v___x_1558_);
return v___x_1559_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp(lean_object* v_sp_1569_, lean_object* v_st_1570_, lean_object* v_o_1571_){
_start:
{
lean_object* v_n_1572_; lean_object* v_gap_1573_; lean_object* v_pos_1574_; lean_object* v_steps_1575_; lean_object* v_kind_1576_; lean_object* v_section_x27_1577_; lean_object* v_title_1578_; lean_object* v_shape_1579_; lean_object* v_counts_1580_; lean_object* v_quarters_1581_; lean_object* v_dx_1582_; lean_object* v_dy_1583_; lean_object* v_step_1584_; lean_object* v_places_1585_; lean_object* v_line_1586_; lean_object* v_leftShape_1587_; lean_object* v_rightShape_1588_; lean_object* v_index_1589_; lean_object* v_name_1591_; lean_object* v_kind_1592_; lean_object* v_label_1593_; lean_object* v_step_1594_; lean_object* v_op_1595_; lean_object* v_rq_1596_; lean_object* v_en_1597_; lean_object* v_pos_1598_; lean_object* v_steps_1599_; lean_object* v_algebra_1600_; lean_object* v___y_1608_; lean_object* v___y_1609_; lean_object* v_op_1610_; lean_object* v___y_1611_; lean_object* v___y_1612_; lean_object* v___y_1613_; lean_object* v___y_1616_; lean_object* v___y_1617_; uint8_t v___y_1618_; lean_object* v___y_1619_; lean_object* v___y_1635_; lean_object* v___y_1636_; uint8_t v___y_1637_; lean_object* v___y_1640_; lean_object* v___y_1641_; lean_object* v___y_1642_; uint8_t v___y_1643_; lean_object* v___y_1653_; lean_object* v___x_1661_; uint8_t v___x_1662_; 
v_n_1572_ = lean_ctor_get(v_sp_1569_, 1);
lean_inc(v_n_1572_);
v_gap_1573_ = lean_ctor_get(v_sp_1569_, 3);
lean_inc(v_gap_1573_);
lean_dec_ref(v_sp_1569_);
v_pos_1574_ = lean_ctor_get(v_st_1570_, 0);
v_steps_1575_ = lean_ctor_get(v_st_1570_, 1);
v_kind_1576_ = lean_ctor_get(v_o_1571_, 0);
v_section_x27_1577_ = lean_ctor_get(v_o_1571_, 1);
v_title_1578_ = lean_ctor_get(v_o_1571_, 2);
v_shape_1579_ = lean_ctor_get(v_o_1571_, 3);
v_counts_1580_ = lean_ctor_get(v_o_1571_, 4);
v_quarters_1581_ = lean_ctor_get(v_o_1571_, 5);
v_dx_1582_ = lean_ctor_get(v_o_1571_, 6);
v_dy_1583_ = lean_ctor_get(v_o_1571_, 7);
v_step_1584_ = lean_ctor_get(v_o_1571_, 10);
v_places_1585_ = lean_ctor_get(v_o_1571_, 11);
v_line_1586_ = lean_ctor_get(v_o_1571_, 12);
v_leftShape_1587_ = lean_ctor_get(v_o_1571_, 13);
v_rightShape_1588_ = lean_ctor_get(v_o_1571_, 14);
v_index_1589_ = lean_ctor_get(v_o_1571_, 15);
v___x_1661_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__6));
v___x_1662_ = lean_string_dec_eq(v_kind_1576_, v___x_1661_);
if (v___x_1662_ == 0)
{
lean_object* v___x_1663_; uint8_t v___x_1664_; 
v___x_1663_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2));
v___x_1664_ = lean_string_dec_eq(v_kind_1576_, v___x_1663_);
if (v___x_1664_ == 0)
{
lean_object* v___x_1665_; uint8_t v___x_1666_; 
v___x_1665_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__7));
v___x_1666_ = lean_string_dec_eq(v_kind_1576_, v___x_1665_);
if (v___x_1666_ == 0)
{
lean_object* v___x_1667_; uint8_t v___x_1668_; 
v___x_1667_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__8));
v___x_1668_ = lean_string_dec_eq(v_kind_1576_, v___x_1667_);
if (v___x_1668_ == 0)
{
lean_object* v___x_1669_; uint8_t v___x_1670_; 
v___x_1669_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__9));
v___x_1670_ = lean_string_dec_eq(v_kind_1576_, v___x_1669_);
if (v___x_1670_ == 0)
{
lean_object* v___x_1671_; uint8_t v___x_1672_; 
v___x_1671_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_1672_ = lean_string_dec_eq(v_kind_1576_, v___x_1671_);
if (v___x_1672_ == 0)
{
lean_object* v___x_1673_; uint8_t v___x_1674_; 
lean_inc(v_index_1589_);
lean_inc(v_counts_1580_);
lean_inc_ref(v_title_1578_);
lean_inc_ref(v_section_x27_1577_);
v___x_1673_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1674_ = lean_string_dec_eq(v_kind_1576_, v___x_1673_);
if (v___x_1674_ == 0)
{
lean_object* v___x_1675_; uint8_t v___x_1676_; 
v___x_1675_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__12));
v___x_1676_ = lean_string_dec_eq(v_kind_1576_, v___x_1675_);
if (v___x_1676_ == 0)
{
lean_object* v___x_1677_; uint8_t v___x_1678_; 
lean_inc_ref(v_rightShape_1588_);
lean_inc_ref(v_leftShape_1587_);
lean_inc(v_line_1586_);
lean_inc_ref(v_kind_1576_);
lean_dec_ref(v_o_1571_);
v___x_1677_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__13));
v___x_1678_ = lean_string_dec_eq(v_kind_1576_, v___x_1677_);
lean_dec_ref(v_kind_1576_);
if (v___x_1678_ == 0)
{
lean_dec(v_index_1589_);
lean_dec_ref(v_rightShape_1588_);
lean_dec_ref(v_leftShape_1587_);
lean_dec(v_line_1586_);
lean_dec(v_counts_1580_);
lean_dec_ref(v_title_1578_);
lean_dec_ref(v_section_x27_1577_);
lean_dec(v_gap_1573_);
lean_dec(v_n_1572_);
return v_st_1570_;
}
else
{
lean_object* v___x_1679_; lean_object* v_fst_1680_; lean_object* v_snd_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v_target_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v_paths_1691_; lean_object* v_pre_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1705_; lean_object* v___x_1706_; lean_object* v___x_1707_; lean_object* v___x_1708_; 
lean_inc(v_steps_1575_);
lean_inc(v_pos_1574_);
lean_dec_ref(v_st_1570_);
lean_inc_n(v_n_1572_, 4);
v___x_1679_ = lp_choreo_Choreo_groupsOf(v_pos_1574_, v_n_1572_);
v_fst_1680_ = lean_ctor_get(v___x_1679_, 0);
lean_inc_n(v_fst_1680_, 3);
v_snd_1681_ = lean_ctor_get(v___x_1679_, 1);
lean_inc_n(v_snd_1681_, 3);
lean_dec_ref(v___x_1679_);
v___x_1682_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_1683_ = lean_int_sub(v_line_1586_, v___x_1682_);
v___x_1684_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_1574_, v_fst_1680_, v_leftShape_1587_, v___x_1683_);
lean_dec_ref(v_leftShape_1587_);
v___x_1685_ = lean_int_add(v_line_1586_, v___x_1682_);
v___x_1686_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_1574_, v_snd_1681_, v_rightShape_1588_, v___x_1685_);
lean_dec_ref(v_rightShape_1588_);
v___x_1687_ = l_List_appendTR___redArg(v___x_1684_, v___x_1686_);
v_target_1688_ = lp_choreo_Choreo_placesWith(v_n_1572_, v___x_1687_, v_pos_1574_);
lean_dec(v___x_1687_);
v___x_1689_ = l_List_range(v_n_1572_);
v___x_1690_ = lean_box(0);
v_paths_1691_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(v_pos_1574_, v_target_1688_, v___x_1689_, v___x_1690_);
lean_inc(v_gap_1573_);
lean_inc(v_line_1586_);
v_pre_1692_ = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(v_pre_1692_, 0, v_fst_1680_);
lean_ctor_set(v_pre_1692_, 1, v_snd_1681_);
lean_ctor_set(v_pre_1692_, 2, v_line_1586_);
lean_ctor_set(v_pre_1692_, 3, v_gap_1573_);
v___x_1693_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__14));
v___x_1694_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1693_);
v___x_1695_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__15));
v___x_1696_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1695_);
lean_dec_ref(v_title_1578_);
v___x_1697_ = lp_choreo_Choreo_chooseCerts(v_n_1572_, v_paths_1691_, v_gap_1573_);
lean_dec(v_paths_1691_);
v___x_1698_ = lean_alloc_ctor(3, 6, 0);
lean_ctor_set(v___x_1698_, 0, v_fst_1680_);
lean_ctor_set(v___x_1698_, 1, v_snd_1681_);
lean_ctor_set(v___x_1698_, 2, v_line_1586_);
lean_ctor_set(v___x_1698_, 3, v_target_1688_);
lean_ctor_set(v___x_1698_, 4, v_counts_1580_);
lean_ctor_set(v___x_1698_, 5, v___x_1697_);
lean_inc_ref(v_pre_1692_);
lean_inc_ref(v___x_1698_);
v___x_1699_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1699_, 0, v___x_1698_);
lean_ctor_set(v___x_1699_, 1, v_pre_1692_);
lean_ctor_set(v___x_1699_, 2, v_pre_1692_);
v___x_1700_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__16));
v___x_1701_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1702_ = lean_int_ediv(v_gap_1573_, v___x_1701_);
lean_dec(v_gap_1573_);
v___x_1703_ = l_Int_repr(v___x_1702_);
lean_dec(v___x_1702_);
v___x_1704_ = lean_string_append(v___x_1700_, v___x_1703_);
lean_dec_ref(v___x_1703_);
v___x_1705_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__17));
v___x_1706_ = lean_string_append(v___x_1704_, v___x_1705_);
v___x_1707_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__18));
v___x_1708_ = lean_box(0);
v_name_1591_ = v___x_1694_;
v_kind_1592_ = v___x_1677_;
v_label_1593_ = v___x_1696_;
v_step_1594_ = v___x_1699_;
v_op_1595_ = v___x_1698_;
v_rq_1596_ = v___x_1706_;
v_en_1597_ = v___x_1707_;
v_pos_1598_ = v_pos_1574_;
v_steps_1599_ = v_steps_1575_;
v_algebra_1600_ = v___x_1708_;
goto v___jp_1590_;
}
}
else
{
lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v_target_1711_; lean_object* v_paths_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; lean_object* v___x_1723_; 
lean_inc(v_steps_1575_);
lean_inc(v_pos_1574_);
lean_dec_ref(v_st_1570_);
lean_inc_n(v_n_1572_, 2);
v___x_1709_ = l_List_range(v_n_1572_);
v___x_1710_ = lean_box(0);
lean_inc(v___x_1709_);
v_target_1711_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(v_pos_1574_, v_o_1571_, v___x_1709_, v___x_1710_);
lean_dec_ref(v_o_1571_);
v_paths_1712_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(v_pos_1574_, v_target_1711_, v___x_1709_, v___x_1710_);
v___x_1713_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__19));
v___x_1714_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1713_);
lean_dec_ref(v_title_1578_);
v___x_1715_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__20));
v___x_1716_ = lp_choreo_Choreo_chooseCerts(v_n_1572_, v_paths_1712_, v_gap_1573_);
lean_dec(v_gap_1573_);
lean_dec(v_paths_1712_);
lean_inc(v_target_1711_);
v___x_1717_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1717_, 0, v_target_1711_);
lean_ctor_set(v___x_1717_, 1, v_counts_1580_);
lean_ctor_set(v___x_1717_, 2, v___x_1716_);
v___x_1718_ = lean_box(0);
v___x_1719_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1719_, 0, v_target_1711_);
lean_inc_ref(v___x_1717_);
v___x_1720_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1720_, 0, v___x_1717_);
lean_ctor_set(v___x_1720_, 1, v___x_1718_);
lean_ctor_set(v___x_1720_, 2, v___x_1719_);
v___x_1721_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__2));
v___x_1722_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__21));
v___x_1723_ = lean_box(0);
lean_inc_ref(v___x_1714_);
v_name_1591_ = v___x_1714_;
v_kind_1592_ = v___x_1715_;
v_label_1593_ = v___x_1714_;
v_step_1594_ = v___x_1720_;
v_op_1595_ = v___x_1717_;
v_rq_1596_ = v___x_1721_;
v_en_1597_ = v___x_1722_;
v_pos_1598_ = v_pos_1574_;
v_steps_1599_ = v_steps_1575_;
v_algebra_1600_ = v___x_1723_;
goto v___jp_1590_;
}
}
else
{
lean_object* v___x_1724_; lean_object* v_fst_1725_; lean_object* v_snd_1726_; lean_object* v___x_1728_; uint8_t v_isShared_1729_; uint8_t v_isSharedCheck_1750_; 
lean_inc(v_steps_1575_);
lean_inc(v_pos_1574_);
lean_dec_ref(v_o_1571_);
lean_dec_ref(v_st_1570_);
lean_inc(v_n_1572_);
v___x_1724_ = lp_choreo_Choreo_groupsOf(v_pos_1574_, v_n_1572_);
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
lean_inc(v_n_1572_);
v___x_1730_ = l_List_range(v_n_1572_);
v___x_1731_ = lean_box(0);
v_ds_1732_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(v_pos_1574_, v___x_1730_, v___x_1731_);
v___x_1733_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__22));
v___x_1734_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1733_);
lean_dec_ref(v_title_1578_);
v___x_1735_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__23));
if (v_isShared_1729_ == 0)
{
lean_ctor_set_tag(v___x_1728_, 2);
lean_ctor_set(v___x_1728_, 1, v_counts_1580_);
lean_ctor_set(v___x_1728_, 0, v_ds_1732_);
v___x_1737_ = v___x_1728_;
goto v_reusejp_1736_;
}
else
{
lean_object* v_reuseFailAlloc_1749_; 
v_reuseFailAlloc_1749_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1749_, 0, v_ds_1732_);
lean_ctor_set(v_reuseFailAlloc_1749_, 1, v_counts_1580_);
v___x_1737_ = v_reuseFailAlloc_1749_;
goto v_reusejp_1736_;
}
v_reusejp_1736_:
{
lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; 
lean_inc(v_gap_1573_);
v___x_1738_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_1738_, 0, v_fst_1725_);
lean_ctor_set(v___x_1738_, 1, v_snd_1726_);
lean_ctor_set(v___x_1738_, 2, v_gap_1573_);
lean_inc_ref(v___x_1738_);
lean_inc_ref(v___x_1737_);
v___x_1739_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1739_, 0, v___x_1737_);
lean_ctor_set(v___x_1739_, 1, v___x_1738_);
lean_ctor_set(v___x_1739_, 2, v___x_1738_);
v___x_1740_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__24));
v___x_1741_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1742_ = lean_int_ediv(v_gap_1573_, v___x_1741_);
lean_dec(v_gap_1573_);
v___x_1743_ = l_Int_repr(v___x_1742_);
lean_dec(v___x_1742_);
v___x_1744_ = lean_string_append(v___x_1740_, v___x_1743_);
lean_dec_ref(v___x_1743_);
v___x_1745_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__25));
v___x_1746_ = lean_string_append(v___x_1744_, v___x_1745_);
v___x_1747_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__26));
v___x_1748_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__29, &lp_choreo_Choreo_compileOp___closed__29_once, _init_lp_choreo_Choreo_compileOp___closed__29);
lean_inc_ref(v___x_1734_);
v_name_1591_ = v___x_1734_;
v_kind_1592_ = v___x_1735_;
v_label_1593_ = v___x_1734_;
v_step_1594_ = v___x_1739_;
v_op_1595_ = v___x_1737_;
v_rq_1596_ = v___x_1746_;
v_en_1597_ = v___x_1747_;
v_pos_1598_ = v_pos_1574_;
v_steps_1599_ = v_steps_1575_;
v_algebra_1600_ = v___x_1748_;
goto v___jp_1590_;
}
}
}
}
else
{
lean_object* v_moves_1751_; lean_object* v_title_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; lean_object* v_fst_1756_; 
v_moves_1751_ = lp_choreo_Choreo_stepMoves(v_step_1584_);
v_title_1752_ = lp_choreo_Choreo_stepTitle(v_step_1584_);
v___x_1753_ = lean_unsigned_to_nat(0u);
v___x_1754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1754_, 0, v_st_1570_);
lean_ctor_set(v___x_1754_, 1, v___x_1753_);
v___x_1755_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__10(v_o_1571_, v_title_1752_, v_n_1572_, v_gap_1573_, v___x_1754_, v_moves_1751_);
v_fst_1756_ = lean_ctor_get(v___x_1755_, 0);
lean_inc(v_fst_1756_);
lean_dec_ref(v___x_1755_);
return v_fst_1756_;
}
}
else
{
lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1780_; 
lean_inc(v_index_1589_);
lean_inc(v_counts_1580_);
lean_inc_ref(v_title_1578_);
lean_inc_ref(v_section_x27_1577_);
lean_inc(v_steps_1575_);
lean_inc(v_pos_1574_);
lean_dec_ref(v_o_1571_);
v_isSharedCheck_1780_ = !lean_is_exclusive(v_st_1570_);
if (v_isSharedCheck_1780_ == 0)
{
lean_object* v_unused_1781_; lean_object* v_unused_1782_; 
v_unused_1781_ = lean_ctor_get(v_st_1570_, 1);
lean_dec(v_unused_1781_);
v_unused_1782_ = lean_ctor_get(v_st_1570_, 0);
lean_dec(v_unused_1782_);
v___x_1758_ = v_st_1570_;
v_isShared_1759_ = v_isSharedCheck_1780_;
goto v_resetjp_1757_;
}
else
{
lean_dec(v_st_1570_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1780_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; lean_object* v___x_1761_; lean_object* v___x_1762_; lean_object* v___x_1763_; lean_object* v___x_1764_; lean_object* v___x_1766_; 
v___x_1760_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__30));
v___x_1761_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1760_);
lean_dec_ref(v_title_1578_);
v___x_1762_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0));
v___x_1763_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc(v_n_1572_);
v___x_1764_ = lp_choreo_Choreo_compileOp___lam__1(v_n_1572_, v___x_1763_, v___x_1763_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set_tag(v___x_1758_, 2);
lean_ctor_set(v___x_1758_, 1, v_counts_1580_);
lean_ctor_set(v___x_1758_, 0, v___x_1764_);
v___x_1766_ = v___x_1758_;
goto v_reusejp_1765_;
}
else
{
lean_object* v_reuseFailAlloc_1779_; 
v_reuseFailAlloc_1779_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1779_, 0, v___x_1764_);
lean_ctor_set(v_reuseFailAlloc_1779_, 1, v_counts_1580_);
v___x_1766_ = v_reuseFailAlloc_1779_;
goto v_reusejp_1765_;
}
v_reusejp_1765_:
{
lean_object* v___x_1767_; lean_object* v___x_1768_; lean_object* v___x_1769_; lean_object* v___x_1770_; lean_object* v___x_1771_; lean_object* v___x_1772_; lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; 
lean_inc(v_gap_1573_);
lean_inc(v_n_1572_);
v___x_1767_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1767_, 0, v_n_1572_);
lean_ctor_set(v___x_1767_, 1, v_gap_1573_);
v___x_1768_ = lean_box(0);
lean_inc_ref(v___x_1766_);
v___x_1769_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1769_, 0, v___x_1766_);
lean_ctor_set(v___x_1769_, 1, v___x_1767_);
lean_ctor_set(v___x_1769_, 2, v___x_1768_);
v___x_1770_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1771_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1772_ = lean_int_ediv(v_gap_1573_, v___x_1771_);
lean_dec(v_gap_1573_);
v___x_1773_ = l_Int_repr(v___x_1772_);
lean_dec(v___x_1772_);
v___x_1774_ = lean_string_append(v___x_1770_, v___x_1773_);
lean_dec_ref(v___x_1773_);
v___x_1775_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2));
v___x_1776_ = lean_string_append(v___x_1774_, v___x_1775_);
v___x_1777_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__31));
v___x_1778_ = lean_obj_once(&lp_choreo_Choreo_compileOp___closed__33, &lp_choreo_Choreo_compileOp___closed__33_once, _init_lp_choreo_Choreo_compileOp___closed__33);
v_name_1591_ = v___x_1761_;
v_kind_1592_ = v___x_1762_;
v_label_1593_ = v___x_1760_;
v_step_1594_ = v___x_1769_;
v_op_1595_ = v___x_1766_;
v_rq_1596_ = v___x_1776_;
v_en_1597_ = v___x_1777_;
v_pos_1598_ = v_pos_1574_;
v_steps_1599_ = v_steps_1575_;
v_algebra_1600_ = v___x_1778_;
goto v___jp_1590_;
}
}
}
}
else
{
lean_object* v___x_1783_; lean_object* v_fst_1784_; lean_object* v_snd_1785_; lean_object* v___y_1787_; lean_object* v___y_1788_; lean_object* v___x_1817_; lean_object* v___y_1819_; 
lean_inc(v_index_1589_);
lean_inc(v_counts_1580_);
lean_inc_ref(v_title_1578_);
lean_inc_ref(v_section_x27_1577_);
lean_inc(v_steps_1575_);
lean_inc(v_pos_1574_);
lean_dec_ref(v_o_1571_);
lean_dec_ref(v_st_1570_);
lean_inc(v_n_1572_);
v___x_1783_ = lp_choreo_Choreo_groupsOf(v_pos_1574_, v_n_1572_);
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
v___x_1789_ = lp_choreo_Choreo_State_at(v_pos_1574_, v___y_1788_);
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
lean_inc(v_n_1572_);
v___x_1795_ = l_List_range(v_n_1572_);
v___x_1796_ = lean_box(0);
v_ds_1797_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11(v_fst_1784_, v_dist_1794_, v___x_1795_, v___x_1796_);
v___x_1798_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__34));
v___x_1799_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1798_);
lean_dec_ref(v_title_1578_);
v___x_1800_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__35));
if (v_isShared_1793_ == 0)
{
lean_ctor_set_tag(v___x_1792_, 2);
lean_ctor_set(v___x_1792_, 1, v_counts_1580_);
lean_ctor_set(v___x_1792_, 0, v_ds_1797_);
v___x_1802_ = v___x_1792_;
goto v_reusejp_1801_;
}
else
{
lean_object* v_reuseFailAlloc_1814_; 
v_reuseFailAlloc_1814_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1814_, 0, v_ds_1797_);
lean_ctor_set(v_reuseFailAlloc_1814_, 1, v_counts_1580_);
v___x_1802_ = v_reuseFailAlloc_1814_;
goto v_reusejp_1801_;
}
v_reusejp_1801_:
{
lean_object* v___x_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; 
lean_inc(v_gap_1573_);
v___x_1803_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_1803_, 0, v_fst_1784_);
lean_ctor_set(v___x_1803_, 1, v_snd_1785_);
lean_ctor_set(v___x_1803_, 2, v_gap_1573_);
lean_inc_ref(v___x_1803_);
lean_inc_ref(v___x_1802_);
v___x_1804_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1804_, 0, v___x_1802_);
lean_ctor_set(v___x_1804_, 1, v___x_1803_);
lean_ctor_set(v___x_1804_, 2, v___x_1803_);
v___x_1805_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__36));
v___x_1806_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1807_ = lean_int_ediv(v_gap_1573_, v___x_1806_);
lean_dec(v_gap_1573_);
v___x_1808_ = l_Int_repr(v___x_1807_);
lean_dec(v___x_1807_);
v___x_1809_ = lean_string_append(v___x_1805_, v___x_1808_);
lean_dec_ref(v___x_1808_);
v___x_1810_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__37));
v___x_1811_ = lean_string_append(v___x_1809_, v___x_1810_);
v___x_1812_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__38));
v___x_1813_ = lean_box(0);
lean_inc_ref(v___x_1799_);
v_name_1591_ = v___x_1799_;
v_kind_1592_ = v___x_1800_;
v_label_1593_ = v___x_1799_;
v_step_1594_ = v___x_1804_;
v_op_1595_ = v___x_1802_;
v_rq_1596_ = v___x_1811_;
v_en_1597_ = v___x_1812_;
v_pos_1598_ = v_pos_1574_;
v_steps_1599_ = v_steps_1575_;
v_algebra_1600_ = v___x_1813_;
goto v___jp_1590_;
}
}
}
v___jp_1818_:
{
lean_object* v___x_1820_; 
v___x_1820_ = lp_choreo_Choreo_State_at(v_pos_1574_, v___y_1819_);
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
lean_inc(v_index_1589_);
lean_inc(v_dy_1583_);
lean_inc(v_dx_1582_);
lean_inc(v_counts_1580_);
lean_inc_ref(v_title_1578_);
lean_inc_ref(v_section_x27_1577_);
lean_inc(v_steps_1575_);
lean_inc(v_pos_1574_);
lean_dec_ref(v_o_1571_);
v_isSharedCheck_1852_ = !lean_is_exclusive(v_st_1570_);
if (v_isSharedCheck_1852_ == 0)
{
lean_object* v_unused_1853_; lean_object* v_unused_1854_; 
v_unused_1853_ = lean_ctor_get(v_st_1570_, 1);
lean_dec(v_unused_1853_);
v_unused_1854_ = lean_ctor_get(v_st_1570_, 0);
lean_dec(v_unused_1854_);
v___x_1826_ = v_st_1570_;
v_isShared_1827_ = v_isSharedCheck_1852_;
goto v_resetjp_1825_;
}
else
{
lean_dec(v_st_1570_);
v___x_1826_ = lean_box(0);
v_isShared_1827_ = v_isSharedCheck_1852_;
goto v_resetjp_1825_;
}
v_resetjp_1825_:
{
lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1828_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__39));
v___x_1829_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1828_);
v___x_1830_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__1));
v___x_1831_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__40));
v___x_1832_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1831_);
lean_dec_ref(v_title_1578_);
lean_inc(v_dy_1583_);
lean_inc(v_dx_1582_);
lean_inc(v_n_1572_);
v___x_1833_ = lp_choreo_Choreo_compileOp___lam__1(v_n_1572_, v_dx_1582_, v_dy_1583_);
if (v_isShared_1827_ == 0)
{
lean_ctor_set_tag(v___x_1826_, 2);
lean_ctor_set(v___x_1826_, 1, v_counts_1580_);
lean_ctor_set(v___x_1826_, 0, v___x_1833_);
v___x_1835_ = v___x_1826_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1851_; 
v_reuseFailAlloc_1851_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1851_, 0, v___x_1833_);
lean_ctor_set(v_reuseFailAlloc_1851_, 1, v_counts_1580_);
v___x_1835_ = v_reuseFailAlloc_1851_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1840_; lean_object* v___x_1841_; lean_object* v___x_1842_; lean_object* v___x_1843_; lean_object* v___x_1844_; lean_object* v___x_1845_; lean_object* v___x_1846_; lean_object* v___x_1847_; lean_object* v___x_1848_; lean_object* v___x_1849_; lean_object* v___x_1850_; 
lean_inc(v_gap_1573_);
lean_inc(v_n_1572_);
v___x_1836_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1836_, 0, v_n_1572_);
lean_ctor_set(v___x_1836_, 1, v_gap_1573_);
v___x_1837_ = lean_box(0);
lean_inc_ref(v___x_1835_);
v___x_1838_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1838_, 0, v___x_1835_);
lean_ctor_set(v___x_1838_, 1, v___x_1836_);
lean_ctor_set(v___x_1838_, 2, v___x_1837_);
v___x_1839_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1840_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1841_ = lean_int_ediv(v_gap_1573_, v___x_1840_);
lean_dec(v_gap_1573_);
v___x_1842_ = l_Int_repr(v___x_1841_);
lean_dec(v___x_1841_);
v___x_1843_ = lean_string_append(v___x_1839_, v___x_1842_);
lean_dec_ref(v___x_1842_);
v___x_1844_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__41));
v___x_1845_ = lean_string_append(v___x_1843_, v___x_1844_);
v___x_1846_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__42));
v___x_1847_ = l_Rat_ofInt(v_dx_1582_);
v___x_1848_ = l_Rat_ofInt(v_dy_1583_);
v___x_1849_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1849_, 0, v___x_1847_);
lean_ctor_set(v___x_1849_, 1, v___x_1848_);
v___x_1850_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1850_, 0, v___x_1849_);
v_name_1591_ = v___x_1829_;
v_kind_1592_ = v___x_1830_;
v_label_1593_ = v___x_1832_;
v_step_1594_ = v___x_1838_;
v_op_1595_ = v___x_1835_;
v_rq_1596_ = v___x_1845_;
v_en_1597_ = v___x_1846_;
v_pos_1598_ = v_pos_1574_;
v_steps_1599_ = v_steps_1575_;
v_algebra_1600_ = v___x_1850_;
goto v___jp_1590_;
}
}
}
}
else
{
lean_object* v___x_1855_; lean_object* v___x_1856_; 
lean_inc(v_quarters_1581_);
v___x_1855_ = l_List_range(v_quarters_1581_);
v___x_1856_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12(v_o_1571_, v_n_1572_, v_gap_1573_, v_st_1570_, v___x_1855_);
lean_dec(v___x_1855_);
lean_dec(v_gap_1573_);
return v___x_1856_;
}
}
else
{
lean_inc(v_index_1589_);
lean_inc(v_places_1585_);
lean_inc(v_counts_1580_);
lean_inc_ref(v_shape_1579_);
lean_inc_ref(v_title_1578_);
lean_inc_ref(v_section_x27_1577_);
lean_inc(v_steps_1575_);
lean_inc(v_pos_1574_);
lean_dec_ref(v_o_1571_);
lean_dec_ref(v_st_1570_);
if (lean_obj_tag(v_places_1585_) == 0)
{
lean_object* v___x_1857_; lean_object* v___x_1858_; 
lean_inc(v_n_1572_);
v___x_1857_ = lp_choreo_Choreo_namedPlaces(v_shape_1579_, v_n_1572_, v_gap_1573_);
v___x_1858_ = lp_choreo_Choreo_assignTo(v_pos_1574_, v___x_1857_);
lean_dec(v___x_1857_);
v___y_1653_ = v___x_1858_;
goto v___jp_1652_;
}
else
{
lean_object* v_val_1859_; 
v_val_1859_ = lean_ctor_get(v_places_1585_, 0);
lean_inc(v_val_1859_);
v___y_1653_ = v_val_1859_;
goto v___jp_1652_;
}
}
v___jp_1590_:
{
lean_object* v_next_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; 
v_next_1601_ = lp_choreo_Choreo_Op_next(v_op_1595_, v_n_1572_, v_pos_1598_);
lean_inc(v_next_1601_);
lean_inc_ref(v_kind_1592_);
v___x_1602_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_1602_, 0, v_name_1591_);
lean_ctor_set(v___x_1602_, 1, v_section_x27_1577_);
lean_ctor_set(v___x_1602_, 2, v_index_1589_);
lean_ctor_set(v___x_1602_, 3, v_kind_1592_);
lean_ctor_set(v___x_1602_, 4, v_label_1593_);
lean_ctor_set(v___x_1602_, 5, v_step_1594_);
lean_ctor_set(v___x_1602_, 6, v_rq_1596_);
lean_ctor_set(v___x_1602_, 7, v_en_1597_);
lean_ctor_set(v___x_1602_, 8, v_pos_1598_);
lean_ctor_set(v___x_1602_, 9, v_next_1601_);
lean_ctor_set(v___x_1602_, 10, v_algebra_1600_);
v___x_1603_ = lean_box(0);
v___x_1604_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1604_, 0, v___x_1602_);
lean_ctor_set(v___x_1604_, 1, v___x_1603_);
v___x_1605_ = l_List_appendTR___redArg(v_steps_1599_, v___x_1604_);
v___x_1606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1606_, 0, v_next_1601_);
lean_ctor_set(v___x_1606_, 1, v___x_1605_);
return v___x_1606_;
}
v___jp_1607_:
{
lean_object* v___x_1614_; 
v___x_1614_ = lean_box(0);
lean_inc_ref(v___y_1608_);
lean_inc_ref(v___y_1611_);
v_name_1591_ = v___y_1611_;
v_kind_1592_ = v___y_1612_;
v_label_1593_ = v___y_1611_;
v_step_1594_ = v___y_1609_;
v_op_1595_ = v_op_1610_;
v_rq_1596_ = v___y_1608_;
v_en_1597_ = v___y_1613_;
v_pos_1598_ = v_pos_1574_;
v_steps_1599_ = v_steps_1575_;
v_algebra_1600_ = v___x_1614_;
goto v___jp_1590_;
}
v___jp_1615_:
{
lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; 
v___x_1620_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__0));
v___x_1621_ = lean_string_append(v___x_1620_, v_shape_1579_);
v___x_1622_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1578_, v___x_1621_);
lean_dec_ref(v___x_1621_);
lean_dec_ref(v_title_1578_);
v___x_1623_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__1));
lean_inc(v_n_1572_);
v___x_1624_ = lp_choreo_Choreo_chooseCerts(v_n_1572_, v___y_1616_, v_gap_1573_);
lean_dec(v_gap_1573_);
lean_dec(v___y_1616_);
v___x_1625_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1625_, 0, v___y_1617_);
lean_ctor_set(v___x_1625_, 1, v_counts_1580_);
lean_ctor_set(v___x_1625_, 2, v___x_1624_);
v___x_1626_ = lean_box(0);
lean_inc_ref(v___x_1625_);
v___x_1627_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1627_, 0, v___x_1625_);
lean_ctor_set(v___x_1627_, 1, v___x_1626_);
lean_ctor_set(v___x_1627_, 2, v___y_1619_);
v___x_1628_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__2));
if (v___y_1618_ == 0)
{
lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1629_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__3));
v___x_1630_ = lean_string_append(v___x_1629_, v_shape_1579_);
lean_dec_ref(v_shape_1579_);
v___x_1631_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__4));
v___x_1632_ = lean_string_append(v___x_1630_, v___x_1631_);
v___y_1608_ = v___x_1628_;
v___y_1609_ = v___x_1627_;
v_op_1610_ = v___x_1625_;
v___y_1611_ = v___x_1622_;
v___y_1612_ = v___x_1623_;
v___y_1613_ = v___x_1632_;
goto v___jp_1607_;
}
else
{
lean_object* v___x_1633_; 
lean_dec_ref(v_shape_1579_);
v___x_1633_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__5));
v___y_1608_ = v___x_1628_;
v___y_1609_ = v___x_1627_;
v_op_1610_ = v___x_1625_;
v___y_1611_ = v___x_1622_;
v___y_1612_ = v___x_1623_;
v___y_1613_ = v___x_1633_;
goto v___jp_1607_;
}
}
v___jp_1634_:
{
lean_object* v___x_1638_; 
lean_inc(v___y_1636_);
v___x_1638_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1638_, 0, v___y_1636_);
v___y_1616_ = v___y_1635_;
v___y_1617_ = v___y_1636_;
v___y_1618_ = v___y_1637_;
v___y_1619_ = v___x_1638_;
goto v___jp_1615_;
}
v___jp_1639_:
{
if (lean_obj_tag(v_places_1585_) == 0)
{
if (v___y_1643_ == 0)
{
lean_dec(v___y_1640_);
v___y_1635_ = v___y_1641_;
v___y_1636_ = v___y_1642_;
v___y_1637_ = v___y_1643_;
goto v___jp_1634_;
}
else
{
lean_object* v___x_1644_; lean_object* v_x_1645_; lean_object* v_y_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v_r2_1649_; lean_object* v___x_1650_; 
v___x_1644_ = lp_choreo_Choreo_centre;
v_x_1645_ = lean_ctor_get(v___x_1644_, 0);
v_y_1646_ = lean_ctor_get(v___x_1644_, 1);
v___x_1647_ = lean_unsigned_to_nat(0u);
v___x_1648_ = lp_choreo_Choreo_State_at(v___y_1642_, v___x_1647_);
v_r2_1649_ = lp_choreo_Choreo_distSq(v___x_1648_, v___x_1644_);
lean_dec_ref(v___x_1648_);
lean_inc(v_y_1646_);
lean_inc(v_x_1645_);
v___x_1650_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1650_, 0, v___y_1640_);
lean_ctor_set(v___x_1650_, 1, v_x_1645_);
lean_ctor_set(v___x_1650_, 2, v_y_1646_);
lean_ctor_set(v___x_1650_, 3, v_r2_1649_);
v___y_1616_ = v___y_1641_;
v___y_1617_ = v___y_1642_;
v___y_1618_ = v___y_1643_;
v___y_1619_ = v___x_1650_;
goto v___jp_1615_;
}
}
else
{
uint8_t v___x_1651_; 
lean_dec_ref_known(v_places_1585_, 1);
lean_dec(v___y_1640_);
v___x_1651_ = 0;
v___y_1635_ = v___y_1641_;
v___y_1636_ = v___y_1642_;
v___y_1637_ = v___x_1651_;
goto v___jp_1634_;
}
}
v___jp_1652_:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v_paths_1656_; lean_object* v___x_1657_; uint8_t v___x_1658_; 
lean_inc(v_n_1572_);
v___x_1654_ = l_List_range(v_n_1572_);
v___x_1655_ = lean_box(0);
lean_inc(v___x_1654_);
v_paths_1656_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(v_pos_1574_, v___y_1653_, v___x_1654_, v___x_1655_);
v___x_1657_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_1658_ = lean_string_dec_eq(v_shape_1579_, v___x_1657_);
if (v___x_1658_ == 0)
{
lean_object* v___x_1659_; uint8_t v___x_1660_; 
v___x_1659_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__3));
v___x_1660_ = lean_string_dec_eq(v_shape_1579_, v___x_1659_);
v___y_1640_ = v___x_1654_;
v___y_1641_ = v_paths_1656_;
v___y_1642_ = v___y_1653_;
v___y_1643_ = v___x_1660_;
goto v___jp_1639_;
}
else
{
v___y_1640_ = v___x_1654_;
v___y_1641_ = v_paths_1656_;
v___y_1642_ = v___y_1653_;
v___y_1643_ = v___x_1658_;
goto v___jp_1639_;
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_Pt_mapT___closed__2(void){
_start:
{
lean_object* v___x_1862_; lean_object* v___x_1863_; 
v___x_1862_ = lean_unsigned_to_nat(8000u);
v___x_1863_ = lean_nat_to_int(v___x_1862_);
return v___x_1863_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT(lean_object* v_t_1864_, lean_object* v_p_1865_){
_start:
{
lean_object* v___x_1866_; uint8_t v___x_1867_; 
v___x_1866_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1867_ = lean_string_dec_eq(v_t_1864_, v___x_1866_);
if (v___x_1867_ == 0)
{
lean_object* v___x_1868_; uint8_t v___x_1869_; 
v___x_1868_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_1869_ = lean_string_dec_eq(v_t_1864_, v___x_1868_);
if (v___x_1869_ == 0)
{
lean_object* v___x_1870_; uint8_t v___x_1871_; 
v___x_1870_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__1));
v___x_1871_ = lean_string_dec_eq(v_t_1864_, v___x_1870_);
if (v___x_1871_ == 0)
{
return v_p_1865_;
}
else
{
lean_object* v_x_1872_; lean_object* v_y_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1882_; 
v_x_1872_ = lean_ctor_get(v_p_1865_, 0);
v_y_1873_ = lean_ctor_get(v_p_1865_, 1);
v_isSharedCheck_1882_ = !lean_is_exclusive(v_p_1865_);
if (v_isSharedCheck_1882_ == 0)
{
v___x_1875_ = v_p_1865_;
v_isShared_1876_ = v_isSharedCheck_1882_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_y_1873_);
lean_inc(v_x_1872_);
lean_dec(v_p_1865_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1882_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1880_; 
v___x_1877_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_1878_ = lean_int_add(v_y_1873_, v___x_1877_);
lean_dec(v_y_1873_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 1, v___x_1878_);
v___x_1880_ = v___x_1875_;
goto v_reusejp_1879_;
}
else
{
lean_object* v_reuseFailAlloc_1881_; 
v_reuseFailAlloc_1881_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1881_, 0, v_x_1872_);
lean_ctor_set(v_reuseFailAlloc_1881_, 1, v___x_1878_);
v___x_1880_ = v_reuseFailAlloc_1881_;
goto v_reusejp_1879_;
}
v_reusejp_1879_:
{
return v___x_1880_;
}
}
}
}
else
{
lean_object* v_x_1883_; lean_object* v_y_1884_; lean_object* v___x_1886_; uint8_t v_isShared_1887_; uint8_t v_isSharedCheck_1894_; 
v_x_1883_ = lean_ctor_get(v_p_1865_, 0);
v_y_1884_ = lean_ctor_get(v_p_1865_, 1);
v_isSharedCheck_1894_ = !lean_is_exclusive(v_p_1865_);
if (v_isSharedCheck_1894_ == 0)
{
v___x_1886_ = v_p_1865_;
v_isShared_1887_ = v_isSharedCheck_1894_;
goto v_resetjp_1885_;
}
else
{
lean_inc(v_y_1884_);
lean_inc(v_x_1883_);
lean_dec(v_p_1865_);
v___x_1886_ = lean_box(0);
v_isShared_1887_ = v_isSharedCheck_1894_;
goto v_resetjp_1885_;
}
v_resetjp_1885_:
{
lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1892_; 
v___x_1888_ = lean_int_neg(v_x_1883_);
lean_dec(v_x_1883_);
v___x_1889_ = lean_obj_once(&lp_choreo_Choreo_Pt_mapT___closed__2, &lp_choreo_Choreo_Pt_mapT___closed__2_once, _init_lp_choreo_Choreo_Pt_mapT___closed__2);
v___x_1890_ = lean_int_sub(v___x_1889_, v_y_1884_);
lean_dec(v_y_1884_);
if (v_isShared_1887_ == 0)
{
lean_ctor_set(v___x_1886_, 1, v___x_1890_);
lean_ctor_set(v___x_1886_, 0, v___x_1888_);
v___x_1892_ = v___x_1886_;
goto v_reusejp_1891_;
}
else
{
lean_object* v_reuseFailAlloc_1893_; 
v_reuseFailAlloc_1893_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1893_, 0, v___x_1888_);
lean_ctor_set(v_reuseFailAlloc_1893_, 1, v___x_1890_);
v___x_1892_ = v_reuseFailAlloc_1893_;
goto v_reusejp_1891_;
}
v_reusejp_1891_:
{
return v___x_1892_;
}
}
}
}
else
{
lean_object* v_x_1895_; lean_object* v_y_1896_; lean_object* v___x_1898_; uint8_t v_isShared_1899_; uint8_t v_isSharedCheck_1904_; 
v_x_1895_ = lean_ctor_get(v_p_1865_, 0);
v_y_1896_ = lean_ctor_get(v_p_1865_, 1);
v_isSharedCheck_1904_ = !lean_is_exclusive(v_p_1865_);
if (v_isSharedCheck_1904_ == 0)
{
v___x_1898_ = v_p_1865_;
v_isShared_1899_ = v_isSharedCheck_1904_;
goto v_resetjp_1897_;
}
else
{
lean_inc(v_y_1896_);
lean_inc(v_x_1895_);
lean_dec(v_p_1865_);
v___x_1898_ = lean_box(0);
v_isShared_1899_ = v_isSharedCheck_1904_;
goto v_resetjp_1897_;
}
v_resetjp_1897_:
{
lean_object* v___x_1900_; lean_object* v___x_1902_; 
v___x_1900_ = lean_int_neg(v_x_1895_);
lean_dec(v_x_1895_);
if (v_isShared_1899_ == 0)
{
lean_ctor_set(v___x_1898_, 0, v___x_1900_);
v___x_1902_ = v___x_1898_;
goto v_reusejp_1901_;
}
else
{
lean_object* v_reuseFailAlloc_1903_; 
v_reuseFailAlloc_1903_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1903_, 0, v___x_1900_);
lean_ctor_set(v_reuseFailAlloc_1903_, 1, v_y_1896_);
v___x_1902_ = v_reuseFailAlloc_1903_;
goto v_reusejp_1901_;
}
v_reusejp_1901_:
{
return v___x_1902_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT___boxed(lean_object* v_t_1905_, lean_object* v_p_1906_){
_start:
{
lean_object* v_res_1907_; 
v_res_1907_ = lp_choreo_Choreo_Pt_mapT(v_t_1905_, v_p_1906_);
lean_dec_ref(v_t_1905_);
return v_res_1907_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(lean_object* v_t_1908_, lean_object* v_a_1909_, lean_object* v_a_1910_){
_start:
{
if (lean_obj_tag(v_a_1909_) == 0)
{
lean_object* v___x_1911_; 
v___x_1911_ = l_List_reverse___redArg(v_a_1910_);
return v___x_1911_;
}
else
{
lean_object* v_head_1912_; lean_object* v_tail_1913_; lean_object* v___x_1915_; uint8_t v_isShared_1916_; uint8_t v_isSharedCheck_1922_; 
v_head_1912_ = lean_ctor_get(v_a_1909_, 0);
v_tail_1913_ = lean_ctor_get(v_a_1909_, 1);
v_isSharedCheck_1922_ = !lean_is_exclusive(v_a_1909_);
if (v_isSharedCheck_1922_ == 0)
{
v___x_1915_ = v_a_1909_;
v_isShared_1916_ = v_isSharedCheck_1922_;
goto v_resetjp_1914_;
}
else
{
lean_inc(v_tail_1913_);
lean_inc(v_head_1912_);
lean_dec(v_a_1909_);
v___x_1915_ = lean_box(0);
v_isShared_1916_ = v_isSharedCheck_1922_;
goto v_resetjp_1914_;
}
v_resetjp_1914_:
{
lean_object* v___x_1917_; lean_object* v___x_1919_; 
v___x_1917_ = lp_choreo_Choreo_Pt_mapT(v_t_1908_, v_head_1912_);
if (v_isShared_1916_ == 0)
{
lean_ctor_set(v___x_1915_, 1, v_a_1910_);
lean_ctor_set(v___x_1915_, 0, v___x_1917_);
v___x_1919_ = v___x_1915_;
goto v_reusejp_1918_;
}
else
{
lean_object* v_reuseFailAlloc_1921_; 
v_reuseFailAlloc_1921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1921_, 0, v___x_1917_);
lean_ctor_set(v_reuseFailAlloc_1921_, 1, v_a_1910_);
v___x_1919_ = v_reuseFailAlloc_1921_;
goto v_reusejp_1918_;
}
v_reusejp_1918_:
{
v_a_1909_ = v_tail_1913_;
v_a_1910_ = v___x_1919_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0___boxed(lean_object* v_t_1923_, lean_object* v_a_1924_, lean_object* v_a_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1923_, v_a_1924_, v_a_1925_);
lean_dec_ref(v_t_1923_);
return v_res_1926_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT(lean_object* v_t_1927_, lean_object* v_x_1928_){
_start:
{
switch(lean_obj_tag(v_x_1928_))
{
case 1:
{
lean_object* v_places_1929_; lean_object* v___x_1931_; uint8_t v_isShared_1932_; uint8_t v_isSharedCheck_1938_; 
v_places_1929_ = lean_ctor_get(v_x_1928_, 0);
v_isSharedCheck_1938_ = !lean_is_exclusive(v_x_1928_);
if (v_isSharedCheck_1938_ == 0)
{
v___x_1931_ = v_x_1928_;
v_isShared_1932_ = v_isSharedCheck_1938_;
goto v_resetjp_1930_;
}
else
{
lean_inc(v_places_1929_);
lean_dec(v_x_1928_);
v___x_1931_ = lean_box(0);
v_isShared_1932_ = v_isSharedCheck_1938_;
goto v_resetjp_1930_;
}
v_resetjp_1930_:
{
lean_object* v___x_1933_; lean_object* v___x_1934_; lean_object* v___x_1936_; 
v___x_1933_ = lean_box(0);
v___x_1934_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1927_, v_places_1929_, v___x_1933_);
if (v_isShared_1932_ == 0)
{
lean_ctor_set(v___x_1931_, 0, v___x_1934_);
v___x_1936_ = v___x_1931_;
goto v_reusejp_1935_;
}
else
{
lean_object* v_reuseFailAlloc_1937_; 
v_reuseFailAlloc_1937_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1937_, 0, v___x_1934_);
v___x_1936_ = v_reuseFailAlloc_1937_;
goto v_reusejp_1935_;
}
v_reusejp_1935_:
{
return v___x_1936_;
}
}
}
case 3:
{
lean_object* v_who_1939_; lean_object* v_cx_1940_; lean_object* v_cy_1941_; lean_object* v_r2_1942_; lean_object* v___x_1944_; uint8_t v_isShared_1945_; uint8_t v_isSharedCheck_1953_; 
v_who_1939_ = lean_ctor_get(v_x_1928_, 0);
v_cx_1940_ = lean_ctor_get(v_x_1928_, 1);
v_cy_1941_ = lean_ctor_get(v_x_1928_, 2);
v_r2_1942_ = lean_ctor_get(v_x_1928_, 3);
v_isSharedCheck_1953_ = !lean_is_exclusive(v_x_1928_);
if (v_isSharedCheck_1953_ == 0)
{
v___x_1944_ = v_x_1928_;
v_isShared_1945_ = v_isSharedCheck_1953_;
goto v_resetjp_1943_;
}
else
{
lean_inc(v_r2_1942_);
lean_inc(v_cy_1941_);
lean_inc(v_cx_1940_);
lean_inc(v_who_1939_);
lean_dec(v_x_1928_);
v___x_1944_ = lean_box(0);
v_isShared_1945_ = v_isSharedCheck_1953_;
goto v_resetjp_1943_;
}
v_resetjp_1943_:
{
lean_object* v___x_1946_; lean_object* v_c_1947_; lean_object* v_x_1948_; lean_object* v_y_1949_; lean_object* v___x_1951_; 
v___x_1946_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1946_, 0, v_cx_1940_);
lean_ctor_set(v___x_1946_, 1, v_cy_1941_);
v_c_1947_ = lp_choreo_Choreo_Pt_mapT(v_t_1927_, v___x_1946_);
v_x_1948_ = lean_ctor_get(v_c_1947_, 0);
lean_inc(v_x_1948_);
v_y_1949_ = lean_ctor_get(v_c_1947_, 1);
lean_inc(v_y_1949_);
lean_dec_ref(v_c_1947_);
if (v_isShared_1945_ == 0)
{
lean_ctor_set(v___x_1944_, 2, v_y_1949_);
lean_ctor_set(v___x_1944_, 1, v_x_1948_);
v___x_1951_ = v___x_1944_;
goto v_reusejp_1950_;
}
else
{
lean_object* v_reuseFailAlloc_1952_; 
v_reuseFailAlloc_1952_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1952_, 0, v_who_1939_);
lean_ctor_set(v_reuseFailAlloc_1952_, 1, v_x_1948_);
lean_ctor_set(v_reuseFailAlloc_1952_, 2, v_y_1949_);
lean_ctor_set(v_reuseFailAlloc_1952_, 3, v_r2_1942_);
v___x_1951_ = v_reuseFailAlloc_1952_;
goto v_reusejp_1950_;
}
v_reusejp_1950_:
{
return v___x_1951_;
}
}
}
case 6:
{
lean_object* v_p_1954_; lean_object* v_q_1955_; lean_object* v___x_1957_; uint8_t v_isShared_1958_; uint8_t v_isSharedCheck_1964_; 
v_p_1954_ = lean_ctor_get(v_x_1928_, 0);
v_q_1955_ = lean_ctor_get(v_x_1928_, 1);
v_isSharedCheck_1964_ = !lean_is_exclusive(v_x_1928_);
if (v_isSharedCheck_1964_ == 0)
{
v___x_1957_ = v_x_1928_;
v_isShared_1958_ = v_isSharedCheck_1964_;
goto v_resetjp_1956_;
}
else
{
lean_inc(v_q_1955_);
lean_inc(v_p_1954_);
lean_dec(v_x_1928_);
v___x_1957_ = lean_box(0);
v_isShared_1958_ = v_isSharedCheck_1964_;
goto v_resetjp_1956_;
}
v_resetjp_1956_:
{
lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1962_; 
v___x_1959_ = lp_choreo_Choreo_Pred_mapT(v_t_1927_, v_p_1954_);
v___x_1960_ = lp_choreo_Choreo_Pred_mapT(v_t_1927_, v_q_1955_);
if (v_isShared_1958_ == 0)
{
lean_ctor_set(v___x_1957_, 1, v___x_1960_);
lean_ctor_set(v___x_1957_, 0, v___x_1959_);
v___x_1962_ = v___x_1957_;
goto v_reusejp_1961_;
}
else
{
lean_object* v_reuseFailAlloc_1963_; 
v_reuseFailAlloc_1963_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1963_, 0, v___x_1959_);
lean_ctor_set(v_reuseFailAlloc_1963_, 1, v___x_1960_);
v___x_1962_ = v_reuseFailAlloc_1963_;
goto v_reusejp_1961_;
}
v_reusejp_1961_:
{
return v___x_1962_;
}
}
}
case 5:
{
lean_object* v_A_1965_; lean_object* v_B_1966_; lean_object* v_line_1967_; lean_object* v_d_1968_; lean_object* v___x_1973_; uint8_t v___x_1974_; 
v_A_1965_ = lean_ctor_get(v_x_1928_, 0);
v_B_1966_ = lean_ctor_get(v_x_1928_, 1);
v_line_1967_ = lean_ctor_get(v_x_1928_, 2);
v_d_1968_ = lean_ctor_get(v_x_1928_, 3);
v___x_1973_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1974_ = lean_string_dec_eq(v_t_1927_, v___x_1973_);
if (v___x_1974_ == 0)
{
lean_object* v___x_1975_; uint8_t v___x_1976_; 
v___x_1975_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_1976_ = lean_string_dec_eq(v_t_1927_, v___x_1975_);
if (v___x_1976_ == 0)
{
return v_x_1928_;
}
else
{
lean_inc(v_d_1968_);
lean_inc(v_line_1967_);
lean_inc(v_B_1966_);
lean_inc(v_A_1965_);
lean_dec_ref_known(v_x_1928_, 4);
goto v___jp_1969_;
}
}
else
{
lean_inc(v_d_1968_);
lean_inc(v_line_1967_);
lean_inc(v_B_1966_);
lean_inc(v_A_1965_);
lean_dec_ref_known(v_x_1928_, 4);
goto v___jp_1969_;
}
v___jp_1969_:
{
lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; 
v___x_1970_ = lean_int_neg(v_line_1967_);
lean_dec(v_line_1967_);
v___x_1971_ = lean_int_sub(v___x_1970_, v_d_1968_);
lean_dec(v___x_1970_);
v___x_1972_ = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(v___x_1972_, 0, v_B_1966_);
lean_ctor_set(v___x_1972_, 1, v_A_1965_);
lean_ctor_set(v___x_1972_, 2, v___x_1971_);
lean_ctor_set(v___x_1972_, 3, v_d_1968_);
return v___x_1972_;
}
}
default: 
{
return v_x_1928_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT___boxed(lean_object* v_t_1977_, lean_object* v_x_1978_){
_start:
{
lean_object* v_res_1979_; 
v_res_1979_ = lp_choreo_Choreo_Pred_mapT(v_t_1977_, v_x_1978_);
lean_dec_ref(v_t_1977_);
return v_res_1979_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(lean_object* v_s_x27_1980_, lean_object* v_c_x27_1981_, uint8_t v___y_1982_, lean_object* v_a_1983_, lean_object* v_a_1984_){
_start:
{
if (lean_obj_tag(v_a_1983_) == 0)
{
lean_object* v___x_1985_; 
v___x_1985_ = l_List_reverse___redArg(v_a_1984_);
return v___x_1985_;
}
else
{
lean_object* v_head_1986_; lean_object* v_tail_1987_; lean_object* v___x_1989_; uint8_t v_isShared_1990_; uint8_t v_isSharedCheck_1997_; 
v_head_1986_ = lean_ctor_get(v_a_1983_, 0);
v_tail_1987_ = lean_ctor_get(v_a_1983_, 1);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_a_1983_);
if (v_isSharedCheck_1997_ == 0)
{
v___x_1989_ = v_a_1983_;
v_isShared_1990_ = v_isSharedCheck_1997_;
goto v_resetjp_1988_;
}
else
{
lean_inc(v_tail_1987_);
lean_inc(v_head_1986_);
lean_dec(v_a_1983_);
v___x_1989_ = lean_box(0);
v_isShared_1990_ = v_isSharedCheck_1997_;
goto v_resetjp_1988_;
}
v_resetjp_1988_:
{
lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1994_; 
v___x_1991_ = lp_choreo_List_at(v_s_x27_1980_, v_head_1986_);
v___x_1992_ = lp_choreo_Choreo_rotatePath(v_c_x27_1981_, v___x_1991_, v___y_1982_);
lean_dec_ref(v___x_1991_);
if (v_isShared_1990_ == 0)
{
lean_ctor_set(v___x_1989_, 1, v_a_1984_);
lean_ctor_set(v___x_1989_, 0, v___x_1992_);
v___x_1994_ = v___x_1989_;
goto v_reusejp_1993_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1992_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v_a_1984_);
v___x_1994_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1993_;
}
v_reusejp_1993_:
{
v_a_1983_ = v_tail_1987_;
v_a_1984_ = v___x_1994_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1___boxed(lean_object* v_s_x27_1998_, lean_object* v_c_x27_1999_, lean_object* v___y_2000_, lean_object* v_a_2001_, lean_object* v_a_2002_){
_start:
{
uint8_t v___y_627__boxed_2003_; lean_object* v_res_2004_; 
v___y_627__boxed_2003_ = lean_unbox(v___y_2000_);
v_res_2004_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(v_s_x27_1998_, v_c_x27_1999_, v___y_627__boxed_2003_, v_a_2001_, v_a_2002_);
lean_dec_ref(v_c_x27_1999_);
lean_dec(v_s_x27_1998_);
return v_res_2004_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__3(lean_object* v_a_2005_, lean_object* v_a_2006_){
_start:
{
if (lean_obj_tag(v_a_2005_) == 0)
{
lean_object* v___x_2007_; 
v___x_2007_ = l_List_reverse___redArg(v_a_2006_);
return v___x_2007_;
}
else
{
lean_object* v_head_2008_; lean_object* v_tail_2009_; lean_object* v___x_2011_; uint8_t v_isShared_2012_; uint8_t v_isSharedCheck_2028_; 
v_head_2008_ = lean_ctor_get(v_a_2005_, 0);
v_tail_2009_ = lean_ctor_get(v_a_2005_, 1);
v_isSharedCheck_2028_ = !lean_is_exclusive(v_a_2005_);
if (v_isSharedCheck_2028_ == 0)
{
v___x_2011_ = v_a_2005_;
v_isShared_2012_ = v_isSharedCheck_2028_;
goto v_resetjp_2010_;
}
else
{
lean_inc(v_tail_2009_);
lean_inc(v_head_2008_);
lean_dec(v_a_2005_);
v___x_2011_ = lean_box(0);
v_isShared_2012_ = v_isSharedCheck_2028_;
goto v_resetjp_2010_;
}
v_resetjp_2010_:
{
lean_object* v_fst_2013_; lean_object* v_snd_2014_; lean_object* v___x_2016_; uint8_t v_isShared_2017_; uint8_t v_isSharedCheck_2027_; 
v_fst_2013_ = lean_ctor_get(v_head_2008_, 0);
v_snd_2014_ = lean_ctor_get(v_head_2008_, 1);
v_isSharedCheck_2027_ = !lean_is_exclusive(v_head_2008_);
if (v_isSharedCheck_2027_ == 0)
{
v___x_2016_ = v_head_2008_;
v_isShared_2017_ = v_isSharedCheck_2027_;
goto v_resetjp_2015_;
}
else
{
lean_inc(v_snd_2014_);
lean_inc(v_fst_2013_);
lean_dec(v_head_2008_);
v___x_2016_ = lean_box(0);
v_isShared_2017_ = v_isSharedCheck_2027_;
goto v_resetjp_2015_;
}
v_resetjp_2015_:
{
lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2021_; 
v___x_2018_ = lean_int_neg(v_fst_2013_);
lean_dec(v_fst_2013_);
v___x_2019_ = lean_int_neg(v_snd_2014_);
lean_dec(v_snd_2014_);
if (v_isShared_2017_ == 0)
{
lean_ctor_set(v___x_2016_, 1, v___x_2019_);
lean_ctor_set(v___x_2016_, 0, v___x_2018_);
v___x_2021_ = v___x_2016_;
goto v_reusejp_2020_;
}
else
{
lean_object* v_reuseFailAlloc_2026_; 
v_reuseFailAlloc_2026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2026_, 0, v___x_2018_);
lean_ctor_set(v_reuseFailAlloc_2026_, 1, v___x_2019_);
v___x_2021_ = v_reuseFailAlloc_2026_;
goto v_reusejp_2020_;
}
v_reusejp_2020_:
{
lean_object* v___x_2023_; 
if (v_isShared_2012_ == 0)
{
lean_ctor_set(v___x_2011_, 1, v_a_2006_);
lean_ctor_set(v___x_2011_, 0, v___x_2021_);
v___x_2023_ = v___x_2011_;
goto v_reusejp_2022_;
}
else
{
lean_object* v_reuseFailAlloc_2025_; 
v_reuseFailAlloc_2025_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2025_, 0, v___x_2021_);
lean_ctor_set(v_reuseFailAlloc_2025_, 1, v_a_2006_);
v___x_2023_ = v_reuseFailAlloc_2025_;
goto v_reusejp_2022_;
}
v_reusejp_2022_:
{
v_a_2005_ = v_tail_2009_;
v_a_2006_ = v___x_2023_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__4(lean_object* v_a_2029_, lean_object* v_a_2030_){
_start:
{
if (lean_obj_tag(v_a_2029_) == 0)
{
lean_object* v___x_2031_; 
v___x_2031_ = l_List_reverse___redArg(v_a_2030_);
return v___x_2031_;
}
else
{
lean_object* v_head_2032_; lean_object* v_tail_2033_; lean_object* v___x_2035_; uint8_t v_isShared_2036_; uint8_t v_isSharedCheck_2051_; 
v_head_2032_ = lean_ctor_get(v_a_2029_, 0);
v_tail_2033_ = lean_ctor_get(v_a_2029_, 1);
v_isSharedCheck_2051_ = !lean_is_exclusive(v_a_2029_);
if (v_isSharedCheck_2051_ == 0)
{
v___x_2035_ = v_a_2029_;
v_isShared_2036_ = v_isSharedCheck_2051_;
goto v_resetjp_2034_;
}
else
{
lean_inc(v_tail_2033_);
lean_inc(v_head_2032_);
lean_dec(v_a_2029_);
v___x_2035_ = lean_box(0);
v_isShared_2036_ = v_isSharedCheck_2051_;
goto v_resetjp_2034_;
}
v_resetjp_2034_:
{
lean_object* v_fst_2037_; lean_object* v_snd_2038_; lean_object* v___x_2040_; uint8_t v_isShared_2041_; uint8_t v_isSharedCheck_2050_; 
v_fst_2037_ = lean_ctor_get(v_head_2032_, 0);
v_snd_2038_ = lean_ctor_get(v_head_2032_, 1);
v_isSharedCheck_2050_ = !lean_is_exclusive(v_head_2032_);
if (v_isSharedCheck_2050_ == 0)
{
v___x_2040_ = v_head_2032_;
v_isShared_2041_ = v_isSharedCheck_2050_;
goto v_resetjp_2039_;
}
else
{
lean_inc(v_snd_2038_);
lean_inc(v_fst_2037_);
lean_dec(v_head_2032_);
v___x_2040_ = lean_box(0);
v_isShared_2041_ = v_isSharedCheck_2050_;
goto v_resetjp_2039_;
}
v_resetjp_2039_:
{
lean_object* v___x_2042_; lean_object* v___x_2044_; 
v___x_2042_ = lean_int_neg(v_fst_2037_);
lean_dec(v_fst_2037_);
if (v_isShared_2041_ == 0)
{
lean_ctor_set(v___x_2040_, 0, v___x_2042_);
v___x_2044_ = v___x_2040_;
goto v_reusejp_2043_;
}
else
{
lean_object* v_reuseFailAlloc_2049_; 
v_reuseFailAlloc_2049_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2049_, 0, v___x_2042_);
lean_ctor_set(v_reuseFailAlloc_2049_, 1, v_snd_2038_);
v___x_2044_ = v_reuseFailAlloc_2049_;
goto v_reusejp_2043_;
}
v_reusejp_2043_:
{
lean_object* v___x_2046_; 
if (v_isShared_2036_ == 0)
{
lean_ctor_set(v___x_2035_, 1, v_a_2030_);
lean_ctor_set(v___x_2035_, 0, v___x_2044_);
v___x_2046_ = v___x_2035_;
goto v_reusejp_2045_;
}
else
{
lean_object* v_reuseFailAlloc_2048_; 
v_reuseFailAlloc_2048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2048_, 0, v___x_2044_);
lean_ctor_set(v_reuseFailAlloc_2048_, 1, v_a_2030_);
v___x_2046_ = v_reuseFailAlloc_2048_;
goto v_reusejp_2045_;
}
v_reusejp_2045_:
{
v_a_2029_ = v_tail_2033_;
v_a_2030_ = v___x_2046_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(lean_object* v_t_2052_, lean_object* v_s_2053_, lean_object* v_tg_2054_, lean_object* v_a_2055_, lean_object* v_a_2056_){
_start:
{
if (lean_obj_tag(v_a_2055_) == 0)
{
lean_object* v___x_2057_; 
lean_dec(v_s_2053_);
v___x_2057_ = l_List_reverse___redArg(v_a_2056_);
return v___x_2057_;
}
else
{
lean_object* v_head_2058_; lean_object* v_tail_2059_; lean_object* v___x_2061_; uint8_t v_isShared_2062_; uint8_t v_isSharedCheck_2072_; 
v_head_2058_ = lean_ctor_get(v_a_2055_, 0);
v_tail_2059_ = lean_ctor_get(v_a_2055_, 1);
v_isSharedCheck_2072_ = !lean_is_exclusive(v_a_2055_);
if (v_isSharedCheck_2072_ == 0)
{
v___x_2061_ = v_a_2055_;
v_isShared_2062_ = v_isSharedCheck_2072_;
goto v_resetjp_2060_;
}
else
{
lean_inc(v_tail_2059_);
lean_inc(v_head_2058_);
lean_dec(v_a_2055_);
v___x_2061_ = lean_box(0);
v_isShared_2062_ = v_isSharedCheck_2072_;
goto v_resetjp_2060_;
}
v_resetjp_2060_:
{
lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2069_; 
v___x_2063_ = lean_box(0);
lean_inc(v_s_2053_);
v___x_2064_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2052_, v_s_2053_, v___x_2063_);
lean_inc(v_head_2058_);
v___x_2065_ = lp_choreo_List_at(v___x_2064_, v_head_2058_);
lean_dec(v___x_2064_);
v___x_2066_ = lp_choreo_List_at(v_tg_2054_, v_head_2058_);
v___x_2067_ = lp_choreo_Choreo_easePath(v___x_2065_, v___x_2066_);
if (v_isShared_2062_ == 0)
{
lean_ctor_set(v___x_2061_, 1, v_a_2056_);
lean_ctor_set(v___x_2061_, 0, v___x_2067_);
v___x_2069_ = v___x_2061_;
goto v_reusejp_2068_;
}
else
{
lean_object* v_reuseFailAlloc_2071_; 
v_reuseFailAlloc_2071_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2071_, 0, v___x_2067_);
lean_ctor_set(v_reuseFailAlloc_2071_, 1, v_a_2056_);
v___x_2069_ = v_reuseFailAlloc_2071_;
goto v_reusejp_2068_;
}
v_reusejp_2068_:
{
v_a_2055_ = v_tail_2059_;
v_a_2056_ = v___x_2069_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0___boxed(lean_object* v_t_2073_, lean_object* v_s_2074_, lean_object* v_tg_2075_, lean_object* v_a_2076_, lean_object* v_a_2077_){
_start:
{
lean_object* v_res_2078_; 
v_res_2078_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_t_2073_, v_s_2074_, v_tg_2075_, v_a_2076_, v_a_2077_);
lean_dec(v_tg_2075_);
lean_dec_ref(v_t_2073_);
return v_res_2078_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2(lean_object* v_t_2079_, lean_object* v_a_2080_, lean_object* v_a_2081_){
_start:
{
if (lean_obj_tag(v_a_2080_) == 0)
{
lean_object* v___x_2082_; 
v___x_2082_ = l_List_reverse___redArg(v_a_2081_);
return v___x_2082_;
}
else
{
lean_object* v_head_2083_; lean_object* v_tail_2084_; lean_object* v___x_2086_; uint8_t v_isShared_2087_; uint8_t v_isSharedCheck_2107_; 
v_head_2083_ = lean_ctor_get(v_a_2080_, 0);
v_tail_2084_ = lean_ctor_get(v_a_2080_, 1);
v_isSharedCheck_2107_ = !lean_is_exclusive(v_a_2080_);
if (v_isSharedCheck_2107_ == 0)
{
v___x_2086_ = v_a_2080_;
v_isShared_2087_ = v_isSharedCheck_2107_;
goto v_resetjp_2085_;
}
else
{
lean_inc(v_tail_2084_);
lean_inc(v_head_2083_);
lean_dec(v_a_2080_);
v___x_2086_ = lean_box(0);
v_isShared_2087_ = v_isSharedCheck_2107_;
goto v_resetjp_2085_;
}
v_resetjp_2085_:
{
lean_object* v_i_2088_; lean_object* v_cx_2089_; lean_object* v_cy_2090_; lean_object* v_r2_2091_; lean_object* v___x_2093_; uint8_t v_isShared_2094_; uint8_t v_isSharedCheck_2106_; 
v_i_2088_ = lean_ctor_get(v_head_2083_, 0);
v_cx_2089_ = lean_ctor_get(v_head_2083_, 1);
v_cy_2090_ = lean_ctor_get(v_head_2083_, 2);
v_r2_2091_ = lean_ctor_get(v_head_2083_, 3);
v_isSharedCheck_2106_ = !lean_is_exclusive(v_head_2083_);
if (v_isSharedCheck_2106_ == 0)
{
v___x_2093_ = v_head_2083_;
v_isShared_2094_ = v_isSharedCheck_2106_;
goto v_resetjp_2092_;
}
else
{
lean_inc(v_r2_2091_);
lean_inc(v_cy_2090_);
lean_inc(v_cx_2089_);
lean_inc(v_i_2088_);
lean_dec(v_head_2083_);
v___x_2093_ = lean_box(0);
v_isShared_2094_ = v_isSharedCheck_2106_;
goto v_resetjp_2092_;
}
v_resetjp_2092_:
{
lean_object* v___x_2095_; lean_object* v_cc_2096_; lean_object* v_x_2097_; lean_object* v_y_2098_; lean_object* v___x_2100_; 
v___x_2095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2095_, 0, v_cx_2089_);
lean_ctor_set(v___x_2095_, 1, v_cy_2090_);
v_cc_2096_ = lp_choreo_Choreo_Pt_mapT(v_t_2079_, v___x_2095_);
v_x_2097_ = lean_ctor_get(v_cc_2096_, 0);
lean_inc(v_x_2097_);
v_y_2098_ = lean_ctor_get(v_cc_2096_, 1);
lean_inc(v_y_2098_);
lean_dec_ref(v_cc_2096_);
if (v_isShared_2094_ == 0)
{
lean_ctor_set(v___x_2093_, 2, v_y_2098_);
lean_ctor_set(v___x_2093_, 1, v_x_2097_);
v___x_2100_ = v___x_2093_;
goto v_reusejp_2099_;
}
else
{
lean_object* v_reuseFailAlloc_2105_; 
v_reuseFailAlloc_2105_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_2105_, 0, v_i_2088_);
lean_ctor_set(v_reuseFailAlloc_2105_, 1, v_x_2097_);
lean_ctor_set(v_reuseFailAlloc_2105_, 2, v_y_2098_);
lean_ctor_set(v_reuseFailAlloc_2105_, 3, v_r2_2091_);
v___x_2100_ = v_reuseFailAlloc_2105_;
goto v_reusejp_2099_;
}
v_reusejp_2099_:
{
lean_object* v___x_2102_; 
if (v_isShared_2087_ == 0)
{
lean_ctor_set(v___x_2086_, 1, v_a_2081_);
lean_ctor_set(v___x_2086_, 0, v___x_2100_);
v___x_2102_ = v___x_2086_;
goto v_reusejp_2101_;
}
else
{
lean_object* v_reuseFailAlloc_2104_; 
v_reuseFailAlloc_2104_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2104_, 0, v___x_2100_);
lean_ctor_set(v_reuseFailAlloc_2104_, 1, v_a_2081_);
v___x_2102_ = v_reuseFailAlloc_2104_;
goto v_reusejp_2101_;
}
v_reusejp_2101_:
{
v_a_2080_ = v_tail_2084_;
v_a_2081_ = v___x_2102_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2___boxed(lean_object* v_t_2108_, lean_object* v_a_2109_, lean_object* v_a_2110_){
_start:
{
lean_object* v_res_2111_; 
v_res_2111_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2(v_t_2108_, v_a_2109_, v_a_2110_);
lean_dec_ref(v_t_2108_);
return v_res_2111_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT(lean_object* v_n_2112_, lean_object* v_gap_2113_, lean_object* v_t_2114_, lean_object* v_s_2115_, lean_object* v_x_2116_){
_start:
{
switch(lean_obj_tag(v_x_2116_))
{
case 0:
{
lean_object* v_target_2117_; lean_object* v_beats_2118_; lean_object* v___x_2120_; uint8_t v_isShared_2121_; uint8_t v_isSharedCheck_2131_; 
v_target_2117_ = lean_ctor_get(v_x_2116_, 0);
v_beats_2118_ = lean_ctor_get(v_x_2116_, 1);
v_isSharedCheck_2131_ = !lean_is_exclusive(v_x_2116_);
if (v_isSharedCheck_2131_ == 0)
{
lean_object* v_unused_2132_; 
v_unused_2132_ = lean_ctor_get(v_x_2116_, 2);
lean_dec(v_unused_2132_);
v___x_2120_ = v_x_2116_;
v_isShared_2121_ = v_isSharedCheck_2131_;
goto v_resetjp_2119_;
}
else
{
lean_inc(v_beats_2118_);
lean_inc(v_target_2117_);
lean_dec(v_x_2116_);
v___x_2120_ = lean_box(0);
v_isShared_2121_ = v_isSharedCheck_2131_;
goto v_resetjp_2119_;
}
v_resetjp_2119_:
{
lean_object* v___x_2122_; lean_object* v_tg_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2129_; 
v___x_2122_ = lean_box(0);
v_tg_2123_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2114_, v_target_2117_, v___x_2122_);
lean_inc(v_n_2112_);
v___x_2124_ = l_List_range(v_n_2112_);
v___x_2125_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_t_2114_, v_s_2115_, v_tg_2123_, v___x_2124_, v___x_2122_);
v___x_2126_ = lean_nat_to_int(v_gap_2113_);
v___x_2127_ = lp_choreo_Choreo_chooseCerts(v_n_2112_, v___x_2125_, v___x_2126_);
lean_dec(v___x_2126_);
lean_dec(v___x_2125_);
if (v_isShared_2121_ == 0)
{
lean_ctor_set(v___x_2120_, 2, v___x_2127_);
lean_ctor_set(v___x_2120_, 0, v_tg_2123_);
v___x_2129_ = v___x_2120_;
goto v_reusejp_2128_;
}
else
{
lean_object* v_reuseFailAlloc_2130_; 
v_reuseFailAlloc_2130_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2130_, 0, v_tg_2123_);
lean_ctor_set(v_reuseFailAlloc_2130_, 1, v_beats_2118_);
lean_ctor_set(v_reuseFailAlloc_2130_, 2, v___x_2127_);
v___x_2129_ = v_reuseFailAlloc_2130_;
goto v_reusejp_2128_;
}
v_reusejp_2128_:
{
return v___x_2129_;
}
}
}
case 1:
{
lean_object* v_centre_2133_; uint8_t v_ccw_2134_; lean_object* v_beats_2135_; lean_object* v_orbits_2136_; lean_object* v___x_2138_; uint8_t v_isShared_2139_; uint8_t v_isSharedCheck_2156_; 
v_centre_2133_ = lean_ctor_get(v_x_2116_, 0);
v_ccw_2134_ = lean_ctor_get_uint8(v_x_2116_, sizeof(void*)*4);
v_beats_2135_ = lean_ctor_get(v_x_2116_, 1);
v_orbits_2136_ = lean_ctor_get(v_x_2116_, 3);
v_isSharedCheck_2156_ = !lean_is_exclusive(v_x_2116_);
if (v_isSharedCheck_2156_ == 0)
{
lean_object* v_unused_2157_; 
v_unused_2157_ = lean_ctor_get(v_x_2116_, 2);
lean_dec(v_unused_2157_);
v___x_2138_ = v_x_2116_;
v_isShared_2139_ = v_isSharedCheck_2156_;
goto v_resetjp_2137_;
}
else
{
lean_inc(v_orbits_2136_);
lean_inc(v_beats_2135_);
lean_inc(v_centre_2133_);
lean_dec(v_x_2116_);
v___x_2138_ = lean_box(0);
v_isShared_2139_ = v_isSharedCheck_2156_;
goto v_resetjp_2137_;
}
v_resetjp_2137_:
{
lean_object* v_c_x27_2140_; uint8_t v___y_2142_; lean_object* v___x_2153_; uint8_t v___x_2154_; 
v_c_x27_2140_ = lp_choreo_Choreo_Pt_mapT(v_t_2114_, v_centre_2133_);
v___x_2153_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2154_ = lean_string_dec_eq(v_t_2114_, v___x_2153_);
if (v___x_2154_ == 0)
{
v___y_2142_ = v_ccw_2134_;
goto v___jp_2141_;
}
else
{
if (v_ccw_2134_ == 0)
{
v___y_2142_ = v___x_2154_;
goto v___jp_2141_;
}
else
{
uint8_t v___x_2155_; 
v___x_2155_ = 0;
v___y_2142_ = v___x_2155_;
goto v___jp_2141_;
}
}
v___jp_2141_:
{
lean_object* v___x_2143_; lean_object* v_s_x27_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2149_; lean_object* v___x_2151_; 
v___x_2143_ = lean_box(0);
v_s_x27_2144_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2114_, v_s_2115_, v___x_2143_);
lean_inc(v_n_2112_);
v___x_2145_ = l_List_range(v_n_2112_);
v___x_2146_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(v_s_x27_2144_, v_c_x27_2140_, v___y_2142_, v___x_2145_, v___x_2143_);
lean_dec(v_s_x27_2144_);
v___x_2147_ = lean_nat_to_int(v_gap_2113_);
v___x_2148_ = lp_choreo_Choreo_chooseCerts(v_n_2112_, v___x_2146_, v___x_2147_);
lean_dec(v___x_2147_);
lean_dec(v___x_2146_);
v___x_2149_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2(v_t_2114_, v_orbits_2136_, v___x_2143_);
if (v_isShared_2139_ == 0)
{
lean_ctor_set(v___x_2138_, 3, v___x_2149_);
lean_ctor_set(v___x_2138_, 2, v___x_2148_);
lean_ctor_set(v___x_2138_, 0, v_c_x27_2140_);
v___x_2151_ = v___x_2138_;
goto v_reusejp_2150_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v_c_x27_2140_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v_beats_2135_);
lean_ctor_set(v_reuseFailAlloc_2152_, 2, v___x_2148_);
lean_ctor_set(v_reuseFailAlloc_2152_, 3, v___x_2149_);
v___x_2151_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2150_;
}
v_reusejp_2150_:
{
lean_ctor_set_uint8(v___x_2151_, sizeof(void*)*4, v___y_2142_);
return v___x_2151_;
}
}
}
}
case 2:
{
lean_object* v_deltas_2158_; lean_object* v_beats_2159_; lean_object* v___x_2160_; uint8_t v___x_2161_; 
lean_dec(v_s_2115_);
lean_dec(v_gap_2113_);
lean_dec(v_n_2112_);
v_deltas_2158_ = lean_ctor_get(v_x_2116_, 0);
v_beats_2159_ = lean_ctor_get(v_x_2116_, 1);
v___x_2160_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2161_ = lean_string_dec_eq(v_t_2114_, v___x_2160_);
if (v___x_2161_ == 0)
{
lean_object* v___x_2162_; uint8_t v___x_2163_; 
v___x_2162_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2163_ = lean_string_dec_eq(v_t_2114_, v___x_2162_);
if (v___x_2163_ == 0)
{
return v_x_2116_;
}
else
{
lean_object* v___x_2165_; uint8_t v_isShared_2166_; uint8_t v_isSharedCheck_2172_; 
lean_inc(v_beats_2159_);
lean_inc(v_deltas_2158_);
v_isSharedCheck_2172_ = !lean_is_exclusive(v_x_2116_);
if (v_isSharedCheck_2172_ == 0)
{
lean_object* v_unused_2173_; lean_object* v_unused_2174_; 
v_unused_2173_ = lean_ctor_get(v_x_2116_, 1);
lean_dec(v_unused_2173_);
v_unused_2174_ = lean_ctor_get(v_x_2116_, 0);
lean_dec(v_unused_2174_);
v___x_2165_ = v_x_2116_;
v_isShared_2166_ = v_isSharedCheck_2172_;
goto v_resetjp_2164_;
}
else
{
lean_dec(v_x_2116_);
v___x_2165_ = lean_box(0);
v_isShared_2166_ = v_isSharedCheck_2172_;
goto v_resetjp_2164_;
}
v_resetjp_2164_:
{
lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2170_; 
v___x_2167_ = lean_box(0);
v___x_2168_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__3(v_deltas_2158_, v___x_2167_);
if (v_isShared_2166_ == 0)
{
lean_ctor_set(v___x_2165_, 0, v___x_2168_);
v___x_2170_ = v___x_2165_;
goto v_reusejp_2169_;
}
else
{
lean_object* v_reuseFailAlloc_2171_; 
v_reuseFailAlloc_2171_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2171_, 0, v___x_2168_);
lean_ctor_set(v_reuseFailAlloc_2171_, 1, v_beats_2159_);
v___x_2170_ = v_reuseFailAlloc_2171_;
goto v_reusejp_2169_;
}
v_reusejp_2169_:
{
return v___x_2170_;
}
}
}
}
else
{
lean_object* v___x_2176_; uint8_t v_isShared_2177_; uint8_t v_isSharedCheck_2183_; 
lean_inc(v_beats_2159_);
lean_inc(v_deltas_2158_);
v_isSharedCheck_2183_ = !lean_is_exclusive(v_x_2116_);
if (v_isSharedCheck_2183_ == 0)
{
lean_object* v_unused_2184_; lean_object* v_unused_2185_; 
v_unused_2184_ = lean_ctor_get(v_x_2116_, 1);
lean_dec(v_unused_2184_);
v_unused_2185_ = lean_ctor_get(v_x_2116_, 0);
lean_dec(v_unused_2185_);
v___x_2176_ = v_x_2116_;
v_isShared_2177_ = v_isSharedCheck_2183_;
goto v_resetjp_2175_;
}
else
{
lean_dec(v_x_2116_);
v___x_2176_ = lean_box(0);
v_isShared_2177_ = v_isSharedCheck_2183_;
goto v_resetjp_2175_;
}
v_resetjp_2175_:
{
lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2181_; 
v___x_2178_ = lean_box(0);
v___x_2179_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__4(v_deltas_2158_, v___x_2178_);
if (v_isShared_2177_ == 0)
{
lean_ctor_set(v___x_2176_, 0, v___x_2179_);
v___x_2181_ = v___x_2176_;
goto v_reusejp_2180_;
}
else
{
lean_object* v_reuseFailAlloc_2182_; 
v_reuseFailAlloc_2182_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2182_, 0, v___x_2179_);
lean_ctor_set(v_reuseFailAlloc_2182_, 1, v_beats_2159_);
v___x_2181_ = v_reuseFailAlloc_2182_;
goto v_reusejp_2180_;
}
v_reusejp_2180_:
{
return v___x_2181_;
}
}
}
}
default: 
{
lean_object* v_left_2186_; lean_object* v_right_2187_; lean_object* v_line_2188_; lean_object* v_target_2189_; lean_object* v_beats_2190_; lean_object* v___x_2192_; uint8_t v_isShared_2193_; uint8_t v_isSharedCheck_2215_; 
v_left_2186_ = lean_ctor_get(v_x_2116_, 0);
v_right_2187_ = lean_ctor_get(v_x_2116_, 1);
v_line_2188_ = lean_ctor_get(v_x_2116_, 2);
v_target_2189_ = lean_ctor_get(v_x_2116_, 3);
v_beats_2190_ = lean_ctor_get(v_x_2116_, 4);
v_isSharedCheck_2215_ = !lean_is_exclusive(v_x_2116_);
if (v_isSharedCheck_2215_ == 0)
{
lean_object* v_unused_2216_; 
v_unused_2216_ = lean_ctor_get(v_x_2116_, 5);
lean_dec(v_unused_2216_);
v___x_2192_ = v_x_2116_;
v_isShared_2193_ = v_isSharedCheck_2215_;
goto v_resetjp_2191_;
}
else
{
lean_inc(v_beats_2190_);
lean_inc(v_target_2189_);
lean_inc(v_line_2188_);
lean_inc(v_right_2187_);
lean_inc(v_left_2186_);
lean_dec(v_x_2116_);
v___x_2192_ = lean_box(0);
v_isShared_2193_ = v_isSharedCheck_2215_;
goto v_resetjp_2191_;
}
v_resetjp_2191_:
{
lean_object* v___x_2194_; lean_object* v_tg_2195_; lean_object* v_fst_2197_; lean_object* v_fst_2198_; lean_object* v_snd_2199_; lean_object* v___x_2211_; uint8_t v___x_2212_; 
v___x_2194_ = lean_box(0);
v_tg_2195_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2114_, v_target_2189_, v___x_2194_);
v___x_2211_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2212_ = lean_string_dec_eq(v_t_2114_, v___x_2211_);
if (v___x_2212_ == 0)
{
lean_object* v___x_2213_; uint8_t v___x_2214_; 
v___x_2213_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2214_ = lean_string_dec_eq(v_t_2114_, v___x_2213_);
if (v___x_2214_ == 0)
{
v_fst_2197_ = v_left_2186_;
v_fst_2198_ = v_right_2187_;
v_snd_2199_ = v_line_2188_;
goto v___jp_2196_;
}
else
{
goto v___jp_2207_;
}
}
else
{
goto v___jp_2207_;
}
v___jp_2196_:
{
lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2205_; 
lean_inc(v_n_2112_);
v___x_2200_ = l_List_range(v_n_2112_);
v___x_2201_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_t_2114_, v_s_2115_, v_tg_2195_, v___x_2200_, v___x_2194_);
v___x_2202_ = lean_nat_to_int(v_gap_2113_);
v___x_2203_ = lp_choreo_Choreo_chooseCerts(v_n_2112_, v___x_2201_, v___x_2202_);
lean_dec(v___x_2202_);
lean_dec(v___x_2201_);
if (v_isShared_2193_ == 0)
{
lean_ctor_set(v___x_2192_, 5, v___x_2203_);
lean_ctor_set(v___x_2192_, 3, v_tg_2195_);
lean_ctor_set(v___x_2192_, 2, v_snd_2199_);
lean_ctor_set(v___x_2192_, 1, v_fst_2198_);
lean_ctor_set(v___x_2192_, 0, v_fst_2197_);
v___x_2205_ = v___x_2192_;
goto v_reusejp_2204_;
}
else
{
lean_object* v_reuseFailAlloc_2206_; 
v_reuseFailAlloc_2206_ = lean_alloc_ctor(3, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2206_, 0, v_fst_2197_);
lean_ctor_set(v_reuseFailAlloc_2206_, 1, v_fst_2198_);
lean_ctor_set(v_reuseFailAlloc_2206_, 2, v_snd_2199_);
lean_ctor_set(v_reuseFailAlloc_2206_, 3, v_tg_2195_);
lean_ctor_set(v_reuseFailAlloc_2206_, 4, v_beats_2190_);
lean_ctor_set(v_reuseFailAlloc_2206_, 5, v___x_2203_);
v___x_2205_ = v_reuseFailAlloc_2206_;
goto v_reusejp_2204_;
}
v_reusejp_2204_:
{
return v___x_2205_;
}
}
v___jp_2207_:
{
lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; 
v___x_2208_ = lean_int_neg(v_line_2188_);
lean_dec(v_line_2188_);
lean_inc(v_gap_2113_);
v___x_2209_ = lean_nat_to_int(v_gap_2113_);
v___x_2210_ = lean_int_sub(v___x_2208_, v___x_2209_);
lean_dec(v___x_2209_);
lean_dec(v___x_2208_);
v_fst_2197_ = v_right_2187_;
v_fst_2198_ = v_left_2186_;
v_snd_2199_ = v___x_2210_;
goto v___jp_2196_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT___boxed(lean_object* v_n_2217_, lean_object* v_gap_2218_, lean_object* v_t_2219_, lean_object* v_s_2220_, lean_object* v_x_2221_){
_start:
{
lean_object* v_res_2222_; 
v_res_2222_ = lp_choreo_Choreo_Op_mapT(v_n_2217_, v_gap_2218_, v_t_2219_, v_s_2220_, v_x_2221_);
lean_dec_ref(v_t_2219_);
return v_res_2222_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(lean_object* v_t_2223_, lean_object* v_sp_2224_, lean_object* v_a_2225_, lean_object* v_a_2226_){
_start:
{
if (lean_obj_tag(v_a_2225_) == 0)
{
lean_object* v___x_2227_; 
lean_dec_ref(v_sp_2224_);
v___x_2227_ = l_List_reverse___redArg(v_a_2226_);
return v___x_2227_;
}
else
{
lean_object* v_head_2228_; lean_object* v_step_2229_; lean_object* v_tail_2230_; lean_object* v___x_2232_; uint8_t v_isShared_2233_; uint8_t v_isSharedCheck_2275_; 
v_head_2228_ = lean_ctor_get(v_a_2225_, 0);
lean_inc(v_head_2228_);
v_step_2229_ = lean_ctor_get(v_head_2228_, 5);
lean_inc_ref(v_step_2229_);
v_tail_2230_ = lean_ctor_get(v_a_2225_, 1);
v_isSharedCheck_2275_ = !lean_is_exclusive(v_a_2225_);
if (v_isSharedCheck_2275_ == 0)
{
lean_object* v_unused_2276_; 
v_unused_2276_ = lean_ctor_get(v_a_2225_, 0);
lean_dec(v_unused_2276_);
v___x_2232_ = v_a_2225_;
v_isShared_2233_ = v_isSharedCheck_2275_;
goto v_resetjp_2231_;
}
else
{
lean_inc(v_tail_2230_);
lean_dec(v_a_2225_);
v___x_2232_ = lean_box(0);
v_isShared_2233_ = v_isSharedCheck_2275_;
goto v_resetjp_2231_;
}
v_resetjp_2231_:
{
lean_object* v_name_2234_; lean_object* v_sectionName_2235_; lean_object* v_surface_2236_; lean_object* v_kind_2237_; lean_object* v_label_2238_; lean_object* v_requiresText_2239_; lean_object* v_ensuresText_2240_; lean_object* v_before_2241_; lean_object* v_after_2242_; lean_object* v_algebra_2243_; lean_object* v___x_2245_; uint8_t v_isShared_2246_; uint8_t v_isSharedCheck_2273_; 
v_name_2234_ = lean_ctor_get(v_head_2228_, 0);
v_sectionName_2235_ = lean_ctor_get(v_head_2228_, 1);
v_surface_2236_ = lean_ctor_get(v_head_2228_, 2);
v_kind_2237_ = lean_ctor_get(v_head_2228_, 3);
v_label_2238_ = lean_ctor_get(v_head_2228_, 4);
v_requiresText_2239_ = lean_ctor_get(v_head_2228_, 6);
v_ensuresText_2240_ = lean_ctor_get(v_head_2228_, 7);
v_before_2241_ = lean_ctor_get(v_head_2228_, 8);
v_after_2242_ = lean_ctor_get(v_head_2228_, 9);
v_algebra_2243_ = lean_ctor_get(v_head_2228_, 10);
v_isSharedCheck_2273_ = !lean_is_exclusive(v_head_2228_);
if (v_isSharedCheck_2273_ == 0)
{
lean_object* v_unused_2274_; 
v_unused_2274_ = lean_ctor_get(v_head_2228_, 5);
lean_dec(v_unused_2274_);
v___x_2245_ = v_head_2228_;
v_isShared_2246_ = v_isSharedCheck_2273_;
goto v_resetjp_2244_;
}
else
{
lean_inc(v_algebra_2243_);
lean_inc(v_after_2242_);
lean_inc(v_before_2241_);
lean_inc(v_ensuresText_2240_);
lean_inc(v_requiresText_2239_);
lean_inc(v_label_2238_);
lean_inc(v_kind_2237_);
lean_inc(v_surface_2236_);
lean_inc(v_sectionName_2235_);
lean_inc(v_name_2234_);
lean_dec(v_head_2228_);
v___x_2245_ = lean_box(0);
v_isShared_2246_ = v_isSharedCheck_2273_;
goto v_resetjp_2244_;
}
v_resetjp_2244_:
{
lean_object* v_n_2247_; lean_object* v_gap_2248_; lean_object* v_op_2249_; lean_object* v_requires_2250_; lean_object* v_ensures_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2272_; 
v_n_2247_ = lean_ctor_get(v_sp_2224_, 1);
v_gap_2248_ = lean_ctor_get(v_sp_2224_, 3);
v_op_2249_ = lean_ctor_get(v_step_2229_, 0);
v_requires_2250_ = lean_ctor_get(v_step_2229_, 1);
v_ensures_2251_ = lean_ctor_get(v_step_2229_, 2);
v_isSharedCheck_2272_ = !lean_is_exclusive(v_step_2229_);
if (v_isSharedCheck_2272_ == 0)
{
v___x_2253_ = v_step_2229_;
v_isShared_2254_ = v_isSharedCheck_2272_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_ensures_2251_);
lean_inc(v_requires_2250_);
lean_inc(v_op_2249_);
lean_dec(v_step_2229_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2272_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v___x_2255_; lean_object* v_before_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v___x_2255_ = lean_box(0);
lean_inc(v_before_2241_);
v_before_2256_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2223_, v_before_2241_, v___x_2255_);
v___x_2257_ = l_Int_toNat(v_gap_2248_);
lean_inc(v_n_2247_);
v___x_2258_ = lp_choreo_Choreo_Op_mapT(v_n_2247_, v___x_2257_, v_t_2223_, v_before_2241_, v_op_2249_);
v___x_2259_ = lp_choreo_Choreo_Pred_mapT(v_t_2223_, v_requires_2250_);
v___x_2260_ = lp_choreo_Choreo_Pred_mapT(v_t_2223_, v_ensures_2251_);
if (v_isShared_2254_ == 0)
{
lean_ctor_set(v___x_2253_, 2, v___x_2260_);
lean_ctor_set(v___x_2253_, 1, v___x_2259_);
lean_ctor_set(v___x_2253_, 0, v___x_2258_);
v___x_2262_ = v___x_2253_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2271_; 
v_reuseFailAlloc_2271_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2271_, 0, v___x_2258_);
lean_ctor_set(v_reuseFailAlloc_2271_, 1, v___x_2259_);
lean_ctor_set(v_reuseFailAlloc_2271_, 2, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2271_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
lean_object* v___x_2263_; lean_object* v___x_2265_; 
v___x_2263_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2223_, v_after_2242_, v___x_2255_);
if (v_isShared_2246_ == 0)
{
lean_ctor_set(v___x_2245_, 9, v___x_2263_);
lean_ctor_set(v___x_2245_, 8, v_before_2256_);
lean_ctor_set(v___x_2245_, 5, v___x_2262_);
v___x_2265_ = v___x_2245_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2270_; 
v_reuseFailAlloc_2270_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2270_, 0, v_name_2234_);
lean_ctor_set(v_reuseFailAlloc_2270_, 1, v_sectionName_2235_);
lean_ctor_set(v_reuseFailAlloc_2270_, 2, v_surface_2236_);
lean_ctor_set(v_reuseFailAlloc_2270_, 3, v_kind_2237_);
lean_ctor_set(v_reuseFailAlloc_2270_, 4, v_label_2238_);
lean_ctor_set(v_reuseFailAlloc_2270_, 5, v___x_2262_);
lean_ctor_set(v_reuseFailAlloc_2270_, 6, v_requiresText_2239_);
lean_ctor_set(v_reuseFailAlloc_2270_, 7, v_ensuresText_2240_);
lean_ctor_set(v_reuseFailAlloc_2270_, 8, v_before_2256_);
lean_ctor_set(v_reuseFailAlloc_2270_, 9, v___x_2263_);
lean_ctor_set(v_reuseFailAlloc_2270_, 10, v_algebra_2243_);
v___x_2265_ = v_reuseFailAlloc_2270_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
lean_object* v___x_2267_; 
if (v_isShared_2233_ == 0)
{
lean_ctor_set(v___x_2232_, 1, v_a_2226_);
lean_ctor_set(v___x_2232_, 0, v___x_2265_);
v___x_2267_ = v___x_2232_;
goto v_reusejp_2266_;
}
else
{
lean_object* v_reuseFailAlloc_2269_; 
v_reuseFailAlloc_2269_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2269_, 0, v___x_2265_);
lean_ctor_set(v_reuseFailAlloc_2269_, 1, v_a_2226_);
v___x_2267_ = v_reuseFailAlloc_2269_;
goto v_reusejp_2266_;
}
v_reusejp_2266_:
{
v_a_2225_ = v_tail_2230_;
v_a_2226_ = v___x_2267_;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0___boxed(lean_object* v_t_2277_, lean_object* v_sp_2278_, lean_object* v_a_2279_, lean_object* v_a_2280_){
_start:
{
lean_object* v_res_2281_; 
v_res_2281_ = lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(v_t_2277_, v_sp_2278_, v_a_2279_, v_a_2280_);
lean_dec_ref(v_t_2277_);
return v_res_2281_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform(lean_object* v_sp_2282_, lean_object* v_t_2283_, lean_object* v_steps_2284_){
_start:
{
lean_object* v___x_2288_; uint8_t v___x_2289_; 
v___x_2288_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2289_ = lean_string_dec_eq(v_t_2283_, v___x_2288_);
if (v___x_2289_ == 0)
{
lean_object* v___x_2290_; uint8_t v___x_2291_; 
v___x_2290_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2291_ = lean_string_dec_eq(v_t_2283_, v___x_2290_);
if (v___x_2291_ == 0)
{
lean_object* v___x_2292_; uint8_t v___x_2293_; 
v___x_2292_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__1));
v___x_2293_ = lean_string_dec_eq(v_t_2283_, v___x_2292_);
if (v___x_2293_ == 0)
{
lean_dec_ref(v_sp_2282_);
return v_steps_2284_;
}
else
{
goto v___jp_2285_;
}
}
else
{
goto v___jp_2285_;
}
}
else
{
goto v___jp_2285_;
}
v___jp_2285_:
{
lean_object* v___x_2286_; lean_object* v___x_2287_; 
v___x_2286_ = lean_box(0);
v___x_2287_ = lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(v_t_2283_, v_sp_2282_, v_steps_2284_, v___x_2286_);
return v___x_2287_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___boxed(lean_object* v_sp_2294_, lean_object* v_t_2295_, lean_object* v_steps_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = lp_choreo_Choreo_applyTransform(v_sp_2294_, v_t_2295_, v_steps_2296_);
lean_dec_ref(v_t_2295_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(lean_object* v_c_2298_, lean_object* v___x_2299_, lean_object* v_a_2300_, lean_object* v_a_2301_){
_start:
{
if (lean_obj_tag(v_a_2300_) == 0)
{
lean_object* v___x_2302_; 
v___x_2302_ = l_List_reverse___redArg(v_a_2301_);
return v___x_2302_;
}
else
{
lean_object* v_head_2303_; lean_object* v_tail_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2316_; 
v_head_2303_ = lean_ctor_get(v_a_2300_, 0);
v_tail_2304_ = lean_ctor_get(v_a_2300_, 1);
v_isSharedCheck_2316_ = !lean_is_exclusive(v_a_2300_);
if (v_isSharedCheck_2316_ == 0)
{
v___x_2306_ = v_a_2300_;
v_isShared_2307_ = v_isSharedCheck_2316_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_tail_2304_);
lean_inc(v_head_2303_);
lean_dec(v_a_2300_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2316_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v_after_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2313_; 
v_after_2308_ = lean_ctor_get(v_c_2298_, 9);
lean_inc(v_head_2303_);
v___x_2309_ = lp_choreo_Choreo_State_at(v_after_2308_, v_head_2303_);
v___x_2310_ = lp_choreo_Choreo_State_at(v___x_2299_, v_head_2303_);
v___x_2311_ = lp_choreo_Choreo_easePath(v___x_2309_, v___x_2310_);
if (v_isShared_2307_ == 0)
{
lean_ctor_set(v___x_2306_, 1, v_a_2301_);
lean_ctor_set(v___x_2306_, 0, v___x_2311_);
v___x_2313_ = v___x_2306_;
goto v_reusejp_2312_;
}
else
{
lean_object* v_reuseFailAlloc_2315_; 
v_reuseFailAlloc_2315_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2315_, 0, v___x_2311_);
lean_ctor_set(v_reuseFailAlloc_2315_, 1, v_a_2301_);
v___x_2313_ = v_reuseFailAlloc_2315_;
goto v_reusejp_2312_;
}
v_reusejp_2312_:
{
v_a_2300_ = v_tail_2304_;
v_a_2301_ = v___x_2313_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0___boxed(lean_object* v_c_2317_, lean_object* v___x_2318_, lean_object* v_a_2319_, lean_object* v_a_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(v_c_2317_, v___x_2318_, v_a_2319_, v_a_2320_);
lean_dec(v___x_2318_);
lean_dec_ref(v_c_2317_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1(lean_object* v_c_2322_, lean_object* v_centre_2323_, uint8_t v___y_2324_, lean_object* v_a_2325_, lean_object* v_a_2326_){
_start:
{
if (lean_obj_tag(v_a_2325_) == 0)
{
lean_object* v___x_2327_; 
v___x_2327_ = l_List_reverse___redArg(v_a_2326_);
return v___x_2327_;
}
else
{
lean_object* v_head_2328_; lean_object* v_tail_2329_; lean_object* v___x_2331_; uint8_t v_isShared_2332_; uint8_t v_isSharedCheck_2340_; 
v_head_2328_ = lean_ctor_get(v_a_2325_, 0);
v_tail_2329_ = lean_ctor_get(v_a_2325_, 1);
v_isSharedCheck_2340_ = !lean_is_exclusive(v_a_2325_);
if (v_isSharedCheck_2340_ == 0)
{
v___x_2331_ = v_a_2325_;
v_isShared_2332_ = v_isSharedCheck_2340_;
goto v_resetjp_2330_;
}
else
{
lean_inc(v_tail_2329_);
lean_inc(v_head_2328_);
lean_dec(v_a_2325_);
v___x_2331_ = lean_box(0);
v_isShared_2332_ = v_isSharedCheck_2340_;
goto v_resetjp_2330_;
}
v_resetjp_2330_:
{
lean_object* v_after_2333_; lean_object* v___x_2334_; lean_object* v___x_2335_; lean_object* v___x_2337_; 
v_after_2333_ = lean_ctor_get(v_c_2322_, 9);
v___x_2334_ = lp_choreo_Choreo_State_at(v_after_2333_, v_head_2328_);
v___x_2335_ = lp_choreo_Choreo_rotatePath(v_centre_2323_, v___x_2334_, v___y_2324_);
lean_dec_ref(v___x_2334_);
if (v_isShared_2332_ == 0)
{
lean_ctor_set(v___x_2331_, 1, v_a_2326_);
lean_ctor_set(v___x_2331_, 0, v___x_2335_);
v___x_2337_ = v___x_2331_;
goto v_reusejp_2336_;
}
else
{
lean_object* v_reuseFailAlloc_2339_; 
v_reuseFailAlloc_2339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2339_, 0, v___x_2335_);
lean_ctor_set(v_reuseFailAlloc_2339_, 1, v_a_2326_);
v___x_2337_ = v_reuseFailAlloc_2339_;
goto v_reusejp_2336_;
}
v_reusejp_2336_:
{
v_a_2325_ = v_tail_2329_;
v_a_2326_ = v___x_2337_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1___boxed(lean_object* v_c_2341_, lean_object* v_centre_2342_, lean_object* v___y_2343_, lean_object* v_a_2344_, lean_object* v_a_2345_){
_start:
{
uint8_t v___y_478__boxed_2346_; lean_object* v_res_2347_; 
v___y_478__boxed_2346_ = lean_unbox(v___y_2343_);
v_res_2347_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1(v_c_2341_, v_centre_2342_, v___y_478__boxed_2346_, v_a_2344_, v_a_2345_);
lean_dec_ref(v_centre_2342_);
lean_dec_ref(v_c_2341_);
return v_res_2347_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2(lean_object* v_sp_2349_, lean_object* v_a_2350_, lean_object* v_a_2351_){
_start:
{
if (lean_obj_tag(v_a_2350_) == 0)
{
lean_object* v___x_2352_; 
lean_dec_ref(v_sp_2349_);
v___x_2352_ = l_List_reverse___redArg(v_a_2351_);
return v___x_2352_;
}
else
{
lean_object* v_head_2353_; lean_object* v_step_2354_; lean_object* v_tail_2355_; lean_object* v___x_2357_; uint8_t v_isShared_2358_; uint8_t v_isSharedCheck_2456_; 
v_head_2353_ = lean_ctor_get(v_a_2350_, 0);
lean_inc(v_head_2353_);
v_step_2354_ = lean_ctor_get(v_head_2353_, 5);
lean_inc_ref(v_step_2354_);
v_tail_2355_ = lean_ctor_get(v_a_2350_, 1);
v_isSharedCheck_2456_ = !lean_is_exclusive(v_a_2350_);
if (v_isSharedCheck_2456_ == 0)
{
lean_object* v_unused_2457_; 
v_unused_2457_ = lean_ctor_get(v_a_2350_, 0);
lean_dec(v_unused_2457_);
v___x_2357_ = v_a_2350_;
v_isShared_2358_ = v_isSharedCheck_2456_;
goto v_resetjp_2356_;
}
else
{
lean_inc(v_tail_2355_);
lean_dec(v_a_2350_);
v___x_2357_ = lean_box(0);
v_isShared_2358_ = v_isSharedCheck_2456_;
goto v_resetjp_2356_;
}
v_resetjp_2356_:
{
lean_object* v_name_2359_; lean_object* v_sectionName_2360_; lean_object* v_surface_2361_; lean_object* v_kind_2362_; lean_object* v_label_2363_; lean_object* v_requiresText_2364_; lean_object* v_ensuresText_2365_; lean_object* v_before_2366_; lean_object* v_after_2367_; lean_object* v_algebra_2368_; lean_object* v_op_2369_; lean_object* v_requires_2370_; lean_object* v_ensures_2371_; lean_object* v___x_2373_; uint8_t v_isShared_2374_; uint8_t v_isSharedCheck_2455_; 
v_name_2359_ = lean_ctor_get(v_head_2353_, 0);
lean_inc_ref(v_name_2359_);
v_sectionName_2360_ = lean_ctor_get(v_head_2353_, 1);
lean_inc_ref(v_sectionName_2360_);
v_surface_2361_ = lean_ctor_get(v_head_2353_, 2);
lean_inc(v_surface_2361_);
v_kind_2362_ = lean_ctor_get(v_head_2353_, 3);
lean_inc_ref(v_kind_2362_);
v_label_2363_ = lean_ctor_get(v_head_2353_, 4);
lean_inc_ref(v_label_2363_);
v_requiresText_2364_ = lean_ctor_get(v_head_2353_, 6);
lean_inc_ref(v_requiresText_2364_);
v_ensuresText_2365_ = lean_ctor_get(v_head_2353_, 7);
lean_inc_ref(v_ensuresText_2365_);
v_before_2366_ = lean_ctor_get(v_head_2353_, 8);
lean_inc(v_before_2366_);
v_after_2367_ = lean_ctor_get(v_head_2353_, 9);
lean_inc(v_after_2367_);
v_algebra_2368_ = lean_ctor_get(v_head_2353_, 10);
lean_inc(v_algebra_2368_);
v_op_2369_ = lean_ctor_get(v_step_2354_, 0);
v_requires_2370_ = lean_ctor_get(v_step_2354_, 1);
v_ensures_2371_ = lean_ctor_get(v_step_2354_, 2);
v_isSharedCheck_2455_ = !lean_is_exclusive(v_step_2354_);
if (v_isSharedCheck_2455_ == 0)
{
v___x_2373_ = v_step_2354_;
v_isShared_2374_ = v_isSharedCheck_2455_;
goto v_resetjp_2372_;
}
else
{
lean_inc(v_ensures_2371_);
lean_inc(v_requires_2370_);
lean_inc(v_op_2369_);
lean_dec(v_step_2354_);
v___x_2373_ = lean_box(0);
v_isShared_2374_ = v_isSharedCheck_2455_;
goto v_resetjp_2372_;
}
v_resetjp_2372_:
{
lean_object* v___y_2376_; 
switch(lean_obj_tag(v_op_2369_))
{
case 0:
{
lean_object* v_beats_2387_; lean_object* v___x_2389_; uint8_t v_isShared_2390_; uint8_t v_isSharedCheck_2400_; 
v_beats_2387_ = lean_ctor_get(v_op_2369_, 1);
v_isSharedCheck_2400_ = !lean_is_exclusive(v_op_2369_);
if (v_isSharedCheck_2400_ == 0)
{
lean_object* v_unused_2401_; lean_object* v_unused_2402_; 
v_unused_2401_ = lean_ctor_get(v_op_2369_, 2);
lean_dec(v_unused_2401_);
v_unused_2402_ = lean_ctor_get(v_op_2369_, 0);
lean_dec(v_unused_2402_);
v___x_2389_ = v_op_2369_;
v_isShared_2390_ = v_isSharedCheck_2400_;
goto v_resetjp_2388_;
}
else
{
lean_inc(v_beats_2387_);
lean_dec(v_op_2369_);
v___x_2389_ = lean_box(0);
v_isShared_2390_ = v_isSharedCheck_2400_;
goto v_resetjp_2388_;
}
v_resetjp_2388_:
{
lean_object* v_n_2391_; lean_object* v_gap_2392_; lean_object* v___x_2393_; lean_object* v___x_2394_; lean_object* v___x_2395_; lean_object* v___x_2396_; lean_object* v___x_2398_; 
v_n_2391_ = lean_ctor_get(v_sp_2349_, 1);
v_gap_2392_ = lean_ctor_get(v_sp_2349_, 3);
lean_inc_n(v_n_2391_, 2);
v___x_2393_ = l_List_range(v_n_2391_);
v___x_2394_ = lean_box(0);
v___x_2395_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(v_head_2353_, v_before_2366_, v___x_2393_, v___x_2394_);
lean_dec(v_head_2353_);
v___x_2396_ = lp_choreo_Choreo_chooseCerts(v_n_2391_, v___x_2395_, v_gap_2392_);
lean_dec(v___x_2395_);
lean_inc(v_before_2366_);
if (v_isShared_2390_ == 0)
{
lean_ctor_set(v___x_2389_, 2, v___x_2396_);
lean_ctor_set(v___x_2389_, 0, v_before_2366_);
v___x_2398_ = v___x_2389_;
goto v_reusejp_2397_;
}
else
{
lean_object* v_reuseFailAlloc_2399_; 
v_reuseFailAlloc_2399_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2399_, 0, v_before_2366_);
lean_ctor_set(v_reuseFailAlloc_2399_, 1, v_beats_2387_);
lean_ctor_set(v_reuseFailAlloc_2399_, 2, v___x_2396_);
v___x_2398_ = v_reuseFailAlloc_2399_;
goto v_reusejp_2397_;
}
v_reusejp_2397_:
{
v___y_2376_ = v___x_2398_;
goto v___jp_2375_;
}
}
}
case 1:
{
lean_object* v_centre_2403_; uint8_t v_ccw_2404_; lean_object* v_beats_2405_; lean_object* v_orbits_2406_; lean_object* v___x_2408_; uint8_t v_isShared_2409_; uint8_t v_isSharedCheck_2423_; 
v_centre_2403_ = lean_ctor_get(v_op_2369_, 0);
v_ccw_2404_ = lean_ctor_get_uint8(v_op_2369_, sizeof(void*)*4);
v_beats_2405_ = lean_ctor_get(v_op_2369_, 1);
v_orbits_2406_ = lean_ctor_get(v_op_2369_, 3);
v_isSharedCheck_2423_ = !lean_is_exclusive(v_op_2369_);
if (v_isSharedCheck_2423_ == 0)
{
lean_object* v_unused_2424_; 
v_unused_2424_ = lean_ctor_get(v_op_2369_, 2);
lean_dec(v_unused_2424_);
v___x_2408_ = v_op_2369_;
v_isShared_2409_ = v_isSharedCheck_2423_;
goto v_resetjp_2407_;
}
else
{
lean_inc(v_orbits_2406_);
lean_inc(v_beats_2405_);
lean_inc(v_centre_2403_);
lean_dec(v_op_2369_);
v___x_2408_ = lean_box(0);
v_isShared_2409_ = v_isSharedCheck_2423_;
goto v_resetjp_2407_;
}
v_resetjp_2407_:
{
uint8_t v___y_2411_; 
if (v_ccw_2404_ == 0)
{
uint8_t v___x_2421_; 
v___x_2421_ = 1;
v___y_2411_ = v___x_2421_;
goto v___jp_2410_;
}
else
{
uint8_t v___x_2422_; 
v___x_2422_ = 0;
v___y_2411_ = v___x_2422_;
goto v___jp_2410_;
}
v___jp_2410_:
{
lean_object* v_n_2412_; lean_object* v_gap_2413_; lean_object* v___x_2414_; lean_object* v___x_2415_; lean_object* v___x_2416_; lean_object* v___x_2417_; lean_object* v___x_2419_; 
v_n_2412_ = lean_ctor_get(v_sp_2349_, 1);
v_gap_2413_ = lean_ctor_get(v_sp_2349_, 3);
lean_inc_n(v_n_2412_, 2);
v___x_2414_ = l_List_range(v_n_2412_);
v___x_2415_ = lean_box(0);
v___x_2416_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1(v_head_2353_, v_centre_2403_, v___y_2411_, v___x_2414_, v___x_2415_);
lean_dec(v_head_2353_);
v___x_2417_ = lp_choreo_Choreo_chooseCerts(v_n_2412_, v___x_2416_, v_gap_2413_);
lean_dec(v___x_2416_);
if (v_isShared_2409_ == 0)
{
lean_ctor_set(v___x_2408_, 2, v___x_2417_);
v___x_2419_ = v___x_2408_;
goto v_reusejp_2418_;
}
else
{
lean_object* v_reuseFailAlloc_2420_; 
v_reuseFailAlloc_2420_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2420_, 0, v_centre_2403_);
lean_ctor_set(v_reuseFailAlloc_2420_, 1, v_beats_2405_);
lean_ctor_set(v_reuseFailAlloc_2420_, 2, v___x_2417_);
lean_ctor_set(v_reuseFailAlloc_2420_, 3, v_orbits_2406_);
v___x_2419_ = v_reuseFailAlloc_2420_;
goto v_reusejp_2418_;
}
v_reusejp_2418_:
{
lean_ctor_set_uint8(v___x_2419_, sizeof(void*)*4, v___y_2411_);
v___y_2376_ = v___x_2419_;
goto v___jp_2375_;
}
}
}
}
case 2:
{
lean_object* v_deltas_2425_; lean_object* v_beats_2426_; lean_object* v___x_2428_; uint8_t v_isShared_2429_; uint8_t v_isSharedCheck_2435_; 
lean_dec(v_head_2353_);
v_deltas_2425_ = lean_ctor_get(v_op_2369_, 0);
v_beats_2426_ = lean_ctor_get(v_op_2369_, 1);
v_isSharedCheck_2435_ = !lean_is_exclusive(v_op_2369_);
if (v_isSharedCheck_2435_ == 0)
{
v___x_2428_ = v_op_2369_;
v_isShared_2429_ = v_isSharedCheck_2435_;
goto v_resetjp_2427_;
}
else
{
lean_inc(v_beats_2426_);
lean_inc(v_deltas_2425_);
lean_dec(v_op_2369_);
v___x_2428_ = lean_box(0);
v_isShared_2429_ = v_isSharedCheck_2435_;
goto v_resetjp_2427_;
}
v_resetjp_2427_:
{
lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2433_; 
v___x_2430_ = lean_box(0);
v___x_2431_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__3(v_deltas_2425_, v___x_2430_);
if (v_isShared_2429_ == 0)
{
lean_ctor_set(v___x_2428_, 0, v___x_2431_);
v___x_2433_ = v___x_2428_;
goto v_reusejp_2432_;
}
else
{
lean_object* v_reuseFailAlloc_2434_; 
v_reuseFailAlloc_2434_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2434_, 0, v___x_2431_);
lean_ctor_set(v_reuseFailAlloc_2434_, 1, v_beats_2426_);
v___x_2433_ = v_reuseFailAlloc_2434_;
goto v_reusejp_2432_;
}
v_reusejp_2432_:
{
v___y_2376_ = v___x_2433_;
goto v___jp_2375_;
}
}
}
default: 
{
lean_object* v_left_2436_; lean_object* v_right_2437_; lean_object* v_line_2438_; lean_object* v_beats_2439_; lean_object* v___x_2441_; uint8_t v_isShared_2442_; uint8_t v_isSharedCheck_2452_; 
v_left_2436_ = lean_ctor_get(v_op_2369_, 0);
v_right_2437_ = lean_ctor_get(v_op_2369_, 1);
v_line_2438_ = lean_ctor_get(v_op_2369_, 2);
v_beats_2439_ = lean_ctor_get(v_op_2369_, 4);
v_isSharedCheck_2452_ = !lean_is_exclusive(v_op_2369_);
if (v_isSharedCheck_2452_ == 0)
{
lean_object* v_unused_2453_; lean_object* v_unused_2454_; 
v_unused_2453_ = lean_ctor_get(v_op_2369_, 5);
lean_dec(v_unused_2453_);
v_unused_2454_ = lean_ctor_get(v_op_2369_, 3);
lean_dec(v_unused_2454_);
v___x_2441_ = v_op_2369_;
v_isShared_2442_ = v_isSharedCheck_2452_;
goto v_resetjp_2440_;
}
else
{
lean_inc(v_beats_2439_);
lean_inc(v_line_2438_);
lean_inc(v_right_2437_);
lean_inc(v_left_2436_);
lean_dec(v_op_2369_);
v___x_2441_ = lean_box(0);
v_isShared_2442_ = v_isSharedCheck_2452_;
goto v_resetjp_2440_;
}
v_resetjp_2440_:
{
lean_object* v_n_2443_; lean_object* v_gap_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; lean_object* v___x_2447_; lean_object* v___x_2448_; lean_object* v___x_2450_; 
v_n_2443_ = lean_ctor_get(v_sp_2349_, 1);
v_gap_2444_ = lean_ctor_get(v_sp_2349_, 3);
lean_inc_n(v_n_2443_, 2);
v___x_2445_ = l_List_range(v_n_2443_);
v___x_2446_ = lean_box(0);
v___x_2447_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(v_head_2353_, v_before_2366_, v___x_2445_, v___x_2446_);
lean_dec(v_head_2353_);
v___x_2448_ = lp_choreo_Choreo_chooseCerts(v_n_2443_, v___x_2447_, v_gap_2444_);
lean_dec(v___x_2447_);
lean_inc(v_before_2366_);
if (v_isShared_2442_ == 0)
{
lean_ctor_set(v___x_2441_, 5, v___x_2448_);
lean_ctor_set(v___x_2441_, 3, v_before_2366_);
v___x_2450_ = v___x_2441_;
goto v_reusejp_2449_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(3, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_left_2436_);
lean_ctor_set(v_reuseFailAlloc_2451_, 1, v_right_2437_);
lean_ctor_set(v_reuseFailAlloc_2451_, 2, v_line_2438_);
lean_ctor_set(v_reuseFailAlloc_2451_, 3, v_before_2366_);
lean_ctor_set(v_reuseFailAlloc_2451_, 4, v_beats_2439_);
lean_ctor_set(v_reuseFailAlloc_2451_, 5, v___x_2448_);
v___x_2450_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2449_;
}
v_reusejp_2449_:
{
v___y_2376_ = v___x_2450_;
goto v___jp_2375_;
}
}
}
}
v___jp_2375_:
{
lean_object* v___x_2377_; lean_object* v___x_2378_; lean_object* v___x_2380_; 
v___x_2377_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2___closed__0));
v___x_2378_ = lean_string_append(v_name_2359_, v___x_2377_);
if (v_isShared_2374_ == 0)
{
lean_ctor_set(v___x_2373_, 2, v_requires_2370_);
lean_ctor_set(v___x_2373_, 1, v_ensures_2371_);
lean_ctor_set(v___x_2373_, 0, v___y_2376_);
v___x_2380_ = v___x_2373_;
goto v_reusejp_2379_;
}
else
{
lean_object* v_reuseFailAlloc_2386_; 
v_reuseFailAlloc_2386_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2386_, 0, v___y_2376_);
lean_ctor_set(v_reuseFailAlloc_2386_, 1, v_ensures_2371_);
lean_ctor_set(v_reuseFailAlloc_2386_, 2, v_requires_2370_);
v___x_2380_ = v_reuseFailAlloc_2386_;
goto v_reusejp_2379_;
}
v_reusejp_2379_:
{
lean_object* v___x_2381_; lean_object* v___x_2383_; 
v___x_2381_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v___x_2381_, 0, v___x_2378_);
lean_ctor_set(v___x_2381_, 1, v_sectionName_2360_);
lean_ctor_set(v___x_2381_, 2, v_surface_2361_);
lean_ctor_set(v___x_2381_, 3, v_kind_2362_);
lean_ctor_set(v___x_2381_, 4, v_label_2363_);
lean_ctor_set(v___x_2381_, 5, v___x_2380_);
lean_ctor_set(v___x_2381_, 6, v_requiresText_2364_);
lean_ctor_set(v___x_2381_, 7, v_ensuresText_2365_);
lean_ctor_set(v___x_2381_, 8, v_after_2367_);
lean_ctor_set(v___x_2381_, 9, v_before_2366_);
lean_ctor_set(v___x_2381_, 10, v_algebra_2368_);
if (v_isShared_2358_ == 0)
{
lean_ctor_set(v___x_2357_, 1, v_a_2351_);
lean_ctor_set(v___x_2357_, 0, v___x_2381_);
v___x_2383_ = v___x_2357_;
goto v_reusejp_2382_;
}
else
{
lean_object* v_reuseFailAlloc_2385_; 
v_reuseFailAlloc_2385_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2385_, 0, v___x_2381_);
lean_ctor_set(v_reuseFailAlloc_2385_, 1, v_a_2351_);
v___x_2383_ = v_reuseFailAlloc_2385_;
goto v_reusejp_2382_;
}
v_reusejp_2382_:
{
v_a_2350_ = v_tail_2355_;
v_a_2351_ = v___x_2383_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps(lean_object* v_sp_2458_, lean_object* v_steps_2459_){
_start:
{
lean_object* v___x_2460_; lean_object* v___x_2461_; lean_object* v___x_2462_; 
v___x_2460_ = l_List_reverse___redArg(v_steps_2459_);
v___x_2461_ = lean_box(0);
v___x_2462_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2(v_sp_2458_, v___x_2460_, v___x_2461_);
return v___x_2462_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(lean_object* v_s_2463_, lean_object* v_x_2464_, lean_object* v_d_2465_, lean_object* v_x_2466_){
_start:
{
if (lean_obj_tag(v_x_2466_) == 0)
{
lean_object* v___x_2467_; 
lean_dec(v_x_2464_);
v___x_2467_ = lean_box(0);
return v___x_2467_;
}
else
{
lean_object* v_head_2468_; lean_object* v_tail_2469_; lean_object* v___x_2470_; lean_object* v_y_2471_; lean_object* v___x_2472_; lean_object* v_y_2473_; lean_object* v___x_2474_; uint8_t v___x_2475_; 
v_head_2468_ = lean_ctor_get(v_x_2466_, 0);
lean_inc_n(v_head_2468_, 2);
v_tail_2469_ = lean_ctor_get(v_x_2466_, 1);
lean_inc(v_tail_2469_);
lean_dec_ref_known(v_x_2466_, 2);
lean_inc(v_x_2464_);
v___x_2470_ = lp_choreo_Choreo_State_at(v_s_2463_, v_x_2464_);
v_y_2471_ = lean_ctor_get(v___x_2470_, 1);
lean_inc(v_y_2471_);
lean_dec_ref(v___x_2470_);
v___x_2472_ = lp_choreo_Choreo_State_at(v_s_2463_, v_head_2468_);
v_y_2473_ = lean_ctor_get(v___x_2472_, 1);
lean_inc(v_y_2473_);
lean_dec_ref(v___x_2472_);
v___x_2474_ = lean_int_sub(v_y_2471_, v_y_2473_);
v___x_2475_ = lean_int_dec_le(v_d_2465_, v___x_2474_);
lean_dec(v___x_2474_);
if (v___x_2475_ == 0)
{
lean_object* v___x_2476_; uint8_t v___x_2477_; 
v___x_2476_ = lean_int_sub(v_y_2473_, v_y_2471_);
lean_dec(v_y_2471_);
lean_dec(v_y_2473_);
v___x_2477_ = lean_int_dec_le(v_d_2465_, v___x_2476_);
lean_dec(v___x_2476_);
if (v___x_2477_ == 0)
{
lean_object* v___x_2478_; 
lean_dec(v_tail_2469_);
lean_dec(v_x_2464_);
v___x_2478_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2478_, 0, v_head_2468_);
return v___x_2478_;
}
else
{
lean_dec(v_head_2468_);
v_x_2466_ = v_tail_2469_;
goto _start;
}
}
else
{
lean_dec(v_y_2473_);
lean_dec(v_y_2471_);
lean_dec(v_head_2468_);
v_x_2466_ = v_tail_2469_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1___boxed(lean_object* v_s_2481_, lean_object* v_x_2482_, lean_object* v_d_2483_, lean_object* v_x_2484_){
_start:
{
lean_object* v_res_2485_; 
v_res_2485_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(v_s_2481_, v_x_2482_, v_d_2483_, v_x_2484_);
lean_dec(v_d_2483_);
lean_dec(v_s_2481_);
return v_res_2485_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(lean_object* v_s_2486_, lean_object* v_d_2487_, lean_object* v_B_2488_, lean_object* v_x_2489_){
_start:
{
if (lean_obj_tag(v_x_2489_) == 0)
{
lean_object* v___x_2490_; 
lean_dec(v_B_2488_);
v___x_2490_ = lean_box(0);
return v___x_2490_;
}
else
{
lean_object* v_head_2491_; lean_object* v_tail_2492_; lean_object* v___x_2494_; uint8_t v_isShared_2495_; uint8_t v_isSharedCheck_2509_; 
v_head_2491_ = lean_ctor_get(v_x_2489_, 0);
v_tail_2492_ = lean_ctor_get(v_x_2489_, 1);
v_isSharedCheck_2509_ = !lean_is_exclusive(v_x_2489_);
if (v_isSharedCheck_2509_ == 0)
{
v___x_2494_ = v_x_2489_;
v_isShared_2495_ = v_isSharedCheck_2509_;
goto v_resetjp_2493_;
}
else
{
lean_inc(v_tail_2492_);
lean_inc(v_head_2491_);
lean_dec(v_x_2489_);
v___x_2494_ = lean_box(0);
v_isShared_2495_ = v_isSharedCheck_2509_;
goto v_resetjp_2493_;
}
v_resetjp_2493_:
{
lean_object* v___x_2496_; 
lean_inc(v_B_2488_);
lean_inc(v_head_2491_);
v___x_2496_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(v_s_2486_, v_head_2491_, v_d_2487_, v_B_2488_);
if (lean_obj_tag(v___x_2496_) == 0)
{
lean_del_object(v___x_2494_);
lean_dec(v_head_2491_);
v_x_2489_ = v_tail_2492_;
goto _start;
}
else
{
lean_object* v_val_2498_; lean_object* v___x_2500_; uint8_t v_isShared_2501_; uint8_t v_isSharedCheck_2508_; 
lean_dec(v_tail_2492_);
lean_dec(v_B_2488_);
v_val_2498_ = lean_ctor_get(v___x_2496_, 0);
v_isSharedCheck_2508_ = !lean_is_exclusive(v___x_2496_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2500_ = v___x_2496_;
v_isShared_2501_ = v_isSharedCheck_2508_;
goto v_resetjp_2499_;
}
else
{
lean_inc(v_val_2498_);
lean_dec(v___x_2496_);
v___x_2500_ = lean_box(0);
v_isShared_2501_ = v_isSharedCheck_2508_;
goto v_resetjp_2499_;
}
v_resetjp_2499_:
{
lean_object* v___x_2503_; 
if (v_isShared_2495_ == 0)
{
lean_ctor_set_tag(v___x_2494_, 0);
lean_ctor_set(v___x_2494_, 1, v_val_2498_);
v___x_2503_ = v___x_2494_;
goto v_reusejp_2502_;
}
else
{
lean_object* v_reuseFailAlloc_2507_; 
v_reuseFailAlloc_2507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2507_, 0, v_head_2491_);
lean_ctor_set(v_reuseFailAlloc_2507_, 1, v_val_2498_);
v___x_2503_ = v_reuseFailAlloc_2507_;
goto v_reusejp_2502_;
}
v_reusejp_2502_:
{
lean_object* v___x_2505_; 
if (v_isShared_2501_ == 0)
{
lean_ctor_set(v___x_2500_, 0, v___x_2503_);
v___x_2505_ = v___x_2500_;
goto v_reusejp_2504_;
}
else
{
lean_object* v_reuseFailAlloc_2506_; 
v_reuseFailAlloc_2506_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2506_, 0, v___x_2503_);
v___x_2505_ = v_reuseFailAlloc_2506_;
goto v_reusejp_2504_;
}
v_reusejp_2504_:
{
return v___x_2505_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2___boxed(lean_object* v_s_2510_, lean_object* v_d_2511_, lean_object* v_B_2512_, lean_object* v_x_2513_){
_start:
{
lean_object* v_res_2514_; 
v_res_2514_ = lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(v_s_2510_, v_d_2511_, v_B_2512_, v_x_2513_);
lean_dec(v_d_2511_);
lean_dec(v_s_2510_);
return v_res_2514_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_whyNot_spec__0(lean_object* v_i_2515_, lean_object* v_a_2516_, lean_object* v_a_2517_){
_start:
{
if (lean_obj_tag(v_a_2516_) == 0)
{
lean_object* v___x_2518_; 
lean_dec(v_i_2515_);
v___x_2518_ = l_List_reverse___redArg(v_a_2517_);
return v___x_2518_;
}
else
{
lean_object* v_head_2519_; lean_object* v_tail_2520_; lean_object* v___x_2522_; uint8_t v_isShared_2523_; uint8_t v_isSharedCheck_2529_; 
v_head_2519_ = lean_ctor_get(v_a_2516_, 0);
v_tail_2520_ = lean_ctor_get(v_a_2516_, 1);
v_isSharedCheck_2529_ = !lean_is_exclusive(v_a_2516_);
if (v_isSharedCheck_2529_ == 0)
{
v___x_2522_ = v_a_2516_;
v_isShared_2523_ = v_isSharedCheck_2529_;
goto v_resetjp_2521_;
}
else
{
lean_inc(v_tail_2520_);
lean_inc(v_head_2519_);
lean_dec(v_a_2516_);
v___x_2522_ = lean_box(0);
v_isShared_2523_ = v_isSharedCheck_2529_;
goto v_resetjp_2521_;
}
v_resetjp_2521_:
{
lean_object* v___x_2524_; lean_object* v___x_2526_; 
lean_inc(v_i_2515_);
v___x_2524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2524_, 0, v_i_2515_);
lean_ctor_set(v___x_2524_, 1, v_head_2519_);
if (v_isShared_2523_ == 0)
{
lean_ctor_set(v___x_2522_, 1, v_a_2517_);
lean_ctor_set(v___x_2522_, 0, v___x_2524_);
v___x_2526_ = v___x_2522_;
goto v_reusejp_2525_;
}
else
{
lean_object* v_reuseFailAlloc_2528_; 
v_reuseFailAlloc_2528_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2528_, 0, v___x_2524_);
lean_ctor_set(v_reuseFailAlloc_2528_, 1, v_a_2517_);
v___x_2526_ = v_reuseFailAlloc_2528_;
goto v_reusejp_2525_;
}
v_reusejp_2525_:
{
v_a_2516_ = v_tail_2520_;
v_a_2517_ = v___x_2526_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Pred_whyNot_spec__5(lean_object* v_a_2530_, lean_object* v_a_2531_){
_start:
{
if (lean_obj_tag(v_a_2530_) == 0)
{
lean_object* v___x_2532_; 
v___x_2532_ = lean_array_to_list(v_a_2531_);
return v___x_2532_;
}
else
{
lean_object* v_head_2533_; lean_object* v_tail_2534_; lean_object* v___x_2535_; lean_object* v___x_2536_; lean_object* v___x_2537_; lean_object* v___x_2538_; 
v_head_2533_ = lean_ctor_get(v_a_2530_, 0);
lean_inc_n(v_head_2533_, 2);
v_tail_2534_ = lean_ctor_get(v_a_2530_, 1);
lean_inc(v_tail_2534_);
lean_dec_ref_known(v_a_2530_, 2);
v___x_2535_ = l_List_range(v_head_2533_);
v___x_2536_ = lean_box(0);
v___x_2537_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_whyNot_spec__0(v_head_2533_, v___x_2535_, v___x_2536_);
v___x_2538_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2531_, v___x_2537_);
v_a_2530_ = v_tail_2534_;
v_a_2531_ = v___x_2538_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(lean_object* v_line_2540_, lean_object* v_d_2541_, lean_object* v_s_2542_, lean_object* v_x_2543_){
_start:
{
if (lean_obj_tag(v_x_2543_) == 0)
{
lean_object* v___x_2544_; 
v___x_2544_ = lean_box(0);
return v___x_2544_;
}
else
{
lean_object* v_head_2545_; lean_object* v_tail_2546_; lean_object* v___x_2547_; lean_object* v_x_2548_; lean_object* v___x_2549_; uint8_t v___x_2550_; 
v_head_2545_ = lean_ctor_get(v_x_2543_, 0);
lean_inc_n(v_head_2545_, 2);
v_tail_2546_ = lean_ctor_get(v_x_2543_, 1);
lean_inc(v_tail_2546_);
lean_dec_ref_known(v_x_2543_, 2);
v___x_2547_ = lp_choreo_Choreo_State_at(v_s_2542_, v_head_2545_);
v_x_2548_ = lean_ctor_get(v___x_2547_, 0);
lean_inc(v_x_2548_);
lean_dec_ref(v___x_2547_);
v___x_2549_ = lean_int_add(v_line_2540_, v_d_2541_);
v___x_2550_ = lean_int_dec_le(v___x_2549_, v_x_2548_);
lean_dec(v_x_2548_);
lean_dec(v___x_2549_);
if (v___x_2550_ == 0)
{
lean_object* v___x_2551_; 
lean_dec(v_tail_2546_);
v___x_2551_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2551_, 0, v_head_2545_);
return v___x_2551_;
}
else
{
lean_dec(v_head_2545_);
v_x_2543_ = v_tail_2546_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4___boxed(lean_object* v_line_2553_, lean_object* v_d_2554_, lean_object* v_s_2555_, lean_object* v_x_2556_){
_start:
{
lean_object* v_res_2557_; 
v_res_2557_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(v_line_2553_, v_d_2554_, v_s_2555_, v_x_2556_);
lean_dec(v_s_2555_);
lean_dec(v_d_2554_);
lean_dec(v_line_2553_);
return v_res_2557_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(lean_object* v_d_2558_, lean_object* v_s_2559_, lean_object* v_x_2560_){
_start:
{
if (lean_obj_tag(v_x_2560_) == 0)
{
lean_object* v___x_2561_; 
v___x_2561_ = lean_box(0);
return v___x_2561_;
}
else
{
lean_object* v_head_2562_; lean_object* v_tail_2563_; lean_object* v_fst_2564_; lean_object* v_snd_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; uint8_t v___x_2570_; 
v_head_2562_ = lean_ctor_get(v_x_2560_, 0);
lean_inc(v_head_2562_);
v_tail_2563_ = lean_ctor_get(v_x_2560_, 1);
lean_inc(v_tail_2563_);
lean_dec_ref_known(v_x_2560_, 2);
v_fst_2564_ = lean_ctor_get(v_head_2562_, 0);
v_snd_2565_ = lean_ctor_get(v_head_2562_, 1);
v___x_2566_ = lean_int_mul(v_d_2558_, v_d_2558_);
lean_inc(v_fst_2564_);
v___x_2567_ = lp_choreo_Choreo_State_at(v_s_2559_, v_fst_2564_);
lean_inc(v_snd_2565_);
v___x_2568_ = lp_choreo_Choreo_State_at(v_s_2559_, v_snd_2565_);
v___x_2569_ = lp_choreo_Choreo_gapSq_x27(v___x_2567_, v___x_2568_);
lean_dec_ref(v___x_2568_);
lean_dec_ref(v___x_2567_);
v___x_2570_ = lean_int_dec_le(v___x_2566_, v___x_2569_);
lean_dec(v___x_2569_);
lean_dec(v___x_2566_);
if (v___x_2570_ == 0)
{
lean_object* v___x_2571_; 
lean_dec(v_tail_2563_);
v___x_2571_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2571_, 0, v_head_2562_);
return v___x_2571_;
}
else
{
lean_dec(v_head_2562_);
v_x_2560_ = v_tail_2563_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6___boxed(lean_object* v_d_2573_, lean_object* v_s_2574_, lean_object* v_x_2575_){
_start:
{
lean_object* v_res_2576_; 
v_res_2576_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(v_d_2573_, v_s_2574_, v_x_2575_);
lean_dec(v_s_2574_);
lean_dec(v_d_2573_);
return v_res_2576_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(lean_object* v_s_2577_, lean_object* v_line_2578_, lean_object* v_x_2579_){
_start:
{
if (lean_obj_tag(v_x_2579_) == 0)
{
lean_object* v___x_2580_; 
v___x_2580_ = lean_box(0);
return v___x_2580_;
}
else
{
lean_object* v_head_2581_; lean_object* v_tail_2582_; lean_object* v___x_2583_; lean_object* v_x_2584_; uint8_t v___x_2585_; 
v_head_2581_ = lean_ctor_get(v_x_2579_, 0);
lean_inc_n(v_head_2581_, 2);
v_tail_2582_ = lean_ctor_get(v_x_2579_, 1);
lean_inc(v_tail_2582_);
lean_dec_ref_known(v_x_2579_, 2);
v___x_2583_ = lp_choreo_Choreo_State_at(v_s_2577_, v_head_2581_);
v_x_2584_ = lean_ctor_get(v___x_2583_, 0);
lean_inc(v_x_2584_);
lean_dec_ref(v___x_2583_);
v___x_2585_ = lean_int_dec_le(v_x_2584_, v_line_2578_);
lean_dec(v_x_2584_);
if (v___x_2585_ == 0)
{
lean_object* v___x_2586_; 
lean_dec(v_tail_2582_);
v___x_2586_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2586_, 0, v_head_2581_);
return v___x_2586_;
}
else
{
lean_dec(v_head_2581_);
v_x_2579_ = v_tail_2582_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3___boxed(lean_object* v_s_2588_, lean_object* v_line_2589_, lean_object* v_x_2590_){
_start:
{
lean_object* v_res_2591_; 
v_res_2591_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(v_s_2588_, v_line_2589_, v_x_2590_);
lean_dec(v_line_2589_);
lean_dec(v_s_2588_);
return v_res_2591_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot(lean_object* v_names_2605_, lean_object* v_s_2606_, lean_object* v_x_2607_){
_start:
{
switch(lean_obj_tag(v_x_2607_))
{
case 4:
{
lean_object* v_A_2608_; lean_object* v_B_2609_; lean_object* v_d_2610_; lean_object* v_bad_2611_; 
v_A_2608_ = lean_ctor_get(v_x_2607_, 0);
lean_inc(v_A_2608_);
v_B_2609_ = lean_ctor_get(v_x_2607_, 1);
lean_inc(v_B_2609_);
v_d_2610_ = lean_ctor_get(v_x_2607_, 2);
lean_inc(v_d_2610_);
lean_dec_ref_known(v_x_2607_, 3);
v_bad_2611_ = lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(v_s_2606_, v_d_2610_, v_B_2609_, v_A_2608_);
lean_dec(v_d_2610_);
if (lean_obj_tag(v_bad_2611_) == 0)
{
lean_object* v___x_2612_; 
lean_dec_ref(v_names_2605_);
v___x_2612_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__0));
return v___x_2612_;
}
else
{
lean_object* v_val_2613_; lean_object* v_fst_2614_; lean_object* v_snd_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v_y_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v_y_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; 
v_val_2613_ = lean_ctor_get(v_bad_2611_, 0);
lean_inc(v_val_2613_);
lean_dec_ref_known(v_bad_2611_, 1);
v_fst_2614_ = lean_ctor_get(v_val_2613_, 0);
lean_inc_n(v_fst_2614_, 2);
v_snd_2615_ = lean_ctor_get(v_val_2613_, 1);
lean_inc_n(v_snd_2615_, 2);
lean_dec(v_val_2613_);
lean_inc_ref(v_names_2605_);
v___x_2616_ = lean_apply_1(v_names_2605_, v_fst_2614_);
v___x_2617_ = lp_choreo_Choreo_State_at(v_s_2606_, v_fst_2614_);
v_y_2618_ = lean_ctor_get(v___x_2617_, 1);
lean_inc(v_y_2618_);
lean_dec_ref(v___x_2617_);
v___x_2619_ = lean_apply_1(v_names_2605_, v_snd_2615_);
v___x_2620_ = lp_choreo_Choreo_State_at(v_s_2606_, v_snd_2615_);
v_y_2621_ = lean_ctor_get(v___x_2620_, 1);
lean_inc(v_y_2621_);
lean_dec_ref(v___x_2620_);
v___x_2622_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__1));
v___x_2623_ = lean_string_append(v___x_2616_, v___x_2622_);
v___x_2624_ = lean_string_append(v___x_2623_, v___x_2619_);
lean_dec_ref(v___x_2619_);
v___x_2625_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__2));
v___x_2626_ = lean_string_append(v___x_2624_, v___x_2625_);
v___x_2627_ = lean_int_sub(v_y_2618_, v_y_2621_);
lean_dec(v_y_2621_);
lean_dec(v_y_2618_);
v___x_2628_ = lean_nat_abs(v___x_2627_);
lean_dec(v___x_2627_);
v___x_2629_ = lean_unsigned_to_nat(10u);
v___x_2630_ = lean_nat_div(v___x_2628_, v___x_2629_);
lean_dec(v___x_2628_);
v___x_2631_ = l_Nat_reprFast(v___x_2630_);
v___x_2632_ = lean_string_append(v___x_2626_, v___x_2631_);
lean_dec_ref(v___x_2631_);
v___x_2633_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__3));
v___x_2634_ = lean_string_append(v___x_2632_, v___x_2633_);
return v___x_2634_;
}
}
case 5:
{
lean_object* v_A_2635_; lean_object* v_B_2636_; lean_object* v_line_2637_; lean_object* v_d_2638_; lean_object* v___x_2639_; 
v_A_2635_ = lean_ctor_get(v_x_2607_, 0);
lean_inc(v_A_2635_);
v_B_2636_ = lean_ctor_get(v_x_2607_, 1);
lean_inc(v_B_2636_);
v_line_2637_ = lean_ctor_get(v_x_2607_, 2);
lean_inc(v_line_2637_);
v_d_2638_ = lean_ctor_get(v_x_2607_, 3);
lean_inc(v_d_2638_);
lean_dec_ref_known(v_x_2607_, 4);
v___x_2639_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(v_s_2606_, v_line_2637_, v_A_2635_);
if (lean_obj_tag(v___x_2639_) == 1)
{
lean_object* v_val_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; 
lean_dec(v_d_2638_);
lean_dec(v_line_2637_);
lean_dec(v_B_2636_);
v_val_2640_ = lean_ctor_get(v___x_2639_, 0);
lean_inc(v_val_2640_);
lean_dec_ref_known(v___x_2639_, 1);
v___x_2641_ = lean_apply_1(v_names_2605_, v_val_2640_);
v___x_2642_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__4));
v___x_2643_ = lean_string_append(v___x_2641_, v___x_2642_);
return v___x_2643_;
}
else
{
lean_object* v___x_2644_; 
lean_dec(v___x_2639_);
v___x_2644_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(v_line_2637_, v_d_2638_, v_s_2606_, v_B_2636_);
lean_dec(v_d_2638_);
lean_dec(v_line_2637_);
if (lean_obj_tag(v___x_2644_) == 1)
{
lean_object* v_val_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; 
v_val_2645_ = lean_ctor_get(v___x_2644_, 0);
lean_inc(v_val_2645_);
lean_dec_ref_known(v___x_2644_, 1);
v___x_2646_ = lean_apply_1(v_names_2605_, v_val_2645_);
v___x_2647_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__5));
v___x_2648_ = lean_string_append(v___x_2646_, v___x_2647_);
return v___x_2648_;
}
else
{
lean_object* v___x_2649_; 
lean_dec(v___x_2644_);
lean_dec_ref(v_names_2605_);
v___x_2649_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__6));
return v___x_2649_;
}
}
}
case 2:
{
lean_object* v_n_2650_; lean_object* v_d_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v_pairs_2654_; lean_object* v___x_2655_; 
v_n_2650_ = lean_ctor_get(v_x_2607_, 0);
lean_inc(v_n_2650_);
v_d_2651_ = lean_ctor_get(v_x_2607_, 1);
lean_inc(v_d_2651_);
lean_dec_ref_known(v_x_2607_, 2);
v___x_2652_ = l_List_range(v_n_2650_);
v___x_2653_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__7));
v_pairs_2654_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Pred_whyNot_spec__5(v___x_2652_, v___x_2653_);
v___x_2655_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(v_d_2651_, v_s_2606_, v_pairs_2654_);
if (lean_obj_tag(v___x_2655_) == 0)
{
lean_object* v___x_2656_; 
lean_dec(v_d_2651_);
lean_dec_ref(v_names_2605_);
v___x_2656_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__8));
return v___x_2656_;
}
else
{
lean_object* v_val_2657_; lean_object* v_fst_2658_; lean_object* v_snd_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; 
v_val_2657_ = lean_ctor_get(v___x_2655_, 0);
lean_inc(v_val_2657_);
lean_dec_ref_known(v___x_2655_, 1);
v_fst_2658_ = lean_ctor_get(v_val_2657_, 0);
lean_inc(v_fst_2658_);
v_snd_2659_ = lean_ctor_get(v_val_2657_, 1);
lean_inc(v_snd_2659_);
lean_dec(v_val_2657_);
lean_inc_ref(v_names_2605_);
v___x_2660_ = lean_apply_1(v_names_2605_, v_fst_2658_);
v___x_2661_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__1));
v___x_2662_ = lean_string_append(v___x_2660_, v___x_2661_);
v___x_2663_ = lean_apply_1(v_names_2605_, v_snd_2659_);
v___x_2664_ = lean_string_append(v___x_2662_, v___x_2663_);
lean_dec_ref(v___x_2663_);
v___x_2665_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__9));
v___x_2666_ = lean_string_append(v___x_2664_, v___x_2665_);
v___x_2667_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_2668_ = lean_int_ediv(v_d_2651_, v___x_2667_);
lean_dec(v_d_2651_);
v___x_2669_ = l_Int_repr(v___x_2668_);
lean_dec(v___x_2668_);
v___x_2670_ = lean_string_append(v___x_2666_, v___x_2669_);
lean_dec_ref(v___x_2669_);
v___x_2671_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__10));
v___x_2672_ = lean_string_append(v___x_2670_, v___x_2671_);
return v___x_2672_;
}
}
default: 
{
lean_object* v___x_2673_; 
lean_dec(v_x_2607_);
lean_dec_ref(v_names_2605_);
v___x_2673_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__11));
return v___x_2673_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot___boxed(lean_object* v_names_2674_, lean_object* v_s_2675_, lean_object* v_x_2676_){
_start:
{
lean_object* v_res_2677_; 
v_res_2677_ = lp_choreo_Choreo_Pred_whyNot(v_names_2674_, v_s_2675_, v_x_2676_);
lean_dec(v_s_2675_);
return v_res_2677_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__1(lean_object* v_a_2678_, lean_object* v_a_2679_){
_start:
{
if (lean_obj_tag(v_a_2678_) == 0)
{
lean_object* v___x_2680_; 
v___x_2680_ = l_List_reverse___redArg(v_a_2679_);
return v___x_2680_;
}
else
{
lean_object* v_head_2681_; lean_object* v_tail_2682_; lean_object* v___x_2684_; uint8_t v_isShared_2685_; uint8_t v_isSharedCheck_2696_; 
v_head_2681_ = lean_ctor_get(v_a_2678_, 0);
v_tail_2682_ = lean_ctor_get(v_a_2678_, 1);
v_isSharedCheck_2696_ = !lean_is_exclusive(v_a_2678_);
if (v_isSharedCheck_2696_ == 0)
{
v___x_2684_ = v_a_2678_;
v_isShared_2685_ = v_isSharedCheck_2696_;
goto v_resetjp_2683_;
}
else
{
lean_inc(v_tail_2682_);
lean_inc(v_head_2681_);
lean_dec(v_a_2678_);
v___x_2684_ = lean_box(0);
v_isShared_2685_ = v_isSharedCheck_2696_;
goto v_resetjp_2683_;
}
v_resetjp_2683_:
{
lean_object* v___y_2687_; lean_object* v_step_2692_; lean_object* v_op_2693_; 
v_step_2692_ = lean_ctor_get(v_head_2681_, 5);
lean_inc_ref(v_step_2692_);
lean_dec(v_head_2681_);
v_op_2693_ = lean_ctor_get(v_step_2692_, 0);
lean_inc_ref(v_op_2693_);
lean_dec_ref(v_step_2692_);
if (lean_obj_tag(v_op_2693_) == 3)
{
lean_object* v_beats_2694_; 
v_beats_2694_ = lean_ctor_get(v_op_2693_, 4);
lean_inc(v_beats_2694_);
lean_dec_ref_known(v_op_2693_, 6);
v___y_2687_ = v_beats_2694_;
goto v___jp_2686_;
}
else
{
lean_object* v_beats_2695_; 
v_beats_2695_ = lean_ctor_get(v_op_2693_, 1);
lean_inc(v_beats_2695_);
lean_dec_ref(v_op_2693_);
v___y_2687_ = v_beats_2695_;
goto v___jp_2686_;
}
v___jp_2686_:
{
lean_object* v___x_2689_; 
if (v_isShared_2685_ == 0)
{
lean_ctor_set(v___x_2684_, 1, v_a_2679_);
lean_ctor_set(v___x_2684_, 0, v___y_2687_);
v___x_2689_ = v___x_2684_;
goto v_reusejp_2688_;
}
else
{
lean_object* v_reuseFailAlloc_2691_; 
v_reuseFailAlloc_2691_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2691_, 0, v___y_2687_);
lean_ctor_set(v_reuseFailAlloc_2691_, 1, v_a_2679_);
v___x_2689_ = v_reuseFailAlloc_2691_;
goto v_reusejp_2688_;
}
v_reusejp_2688_:
{
v_a_2678_ = v_tail_2682_;
v_a_2679_ = v___x_2689_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__5(lean_object* v___x_2697_, lean_object* v_x_2698_, lean_object* v_x_2699_){
_start:
{
if (lean_obj_tag(v_x_2699_) == 0)
{
lean_dec(v___x_2697_);
return v_x_2698_;
}
else
{
lean_object* v_head_2700_; lean_object* v_tail_2701_; lean_object* v___x_2703_; uint8_t v_isShared_2704_; uint8_t v_isSharedCheck_2725_; 
v_head_2700_ = lean_ctor_get(v_x_2699_, 0);
v_tail_2701_ = lean_ctor_get(v_x_2699_, 1);
v_isSharedCheck_2725_ = !lean_is_exclusive(v_x_2699_);
if (v_isSharedCheck_2725_ == 0)
{
v___x_2703_ = v_x_2699_;
v_isShared_2704_ = v_isSharedCheck_2725_;
goto v_resetjp_2702_;
}
else
{
lean_inc(v_tail_2701_);
lean_inc(v_head_2700_);
lean_dec(v_x_2699_);
v___x_2703_ = lean_box(0);
v_isShared_2704_ = v_isSharedCheck_2725_;
goto v_resetjp_2702_;
}
v_resetjp_2702_:
{
lean_object* v_fst_2705_; lean_object* v_snd_2706_; lean_object* v___x_2708_; uint8_t v_isShared_2709_; uint8_t v_isSharedCheck_2724_; 
v_fst_2705_ = lean_ctor_get(v_x_2698_, 0);
v_snd_2706_ = lean_ctor_get(v_x_2698_, 1);
v_isSharedCheck_2724_ = !lean_is_exclusive(v_x_2698_);
if (v_isSharedCheck_2724_ == 0)
{
v___x_2708_ = v_x_2698_;
v_isShared_2709_ = v_isSharedCheck_2724_;
goto v_resetjp_2707_;
}
else
{
lean_inc(v_snd_2706_);
lean_inc(v_fst_2705_);
lean_dec(v_x_2698_);
v___x_2708_ = lean_box(0);
v_isShared_2709_ = v_isSharedCheck_2724_;
goto v_resetjp_2707_;
}
v_resetjp_2707_:
{
lean_object* v_beats_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2715_; 
v_beats_2710_ = lean_ctor_get(v_head_2700_, 4);
lean_inc(v_beats_2710_);
v___x_2711_ = lean_unsigned_to_nat(4u);
lean_inc(v_snd_2706_);
lean_inc(v___x_2697_);
v___x_2712_ = lp_choreo_Choreo_Draft_toPhase(v_head_2700_, v___x_2697_, v_snd_2706_);
lean_dec(v_head_2700_);
v___x_2713_ = lean_box(0);
if (v_isShared_2704_ == 0)
{
lean_ctor_set(v___x_2703_, 1, v___x_2713_);
lean_ctor_set(v___x_2703_, 0, v___x_2712_);
v___x_2715_ = v___x_2703_;
goto v_reusejp_2714_;
}
else
{
lean_object* v_reuseFailAlloc_2723_; 
v_reuseFailAlloc_2723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2723_, 0, v___x_2712_);
lean_ctor_set(v_reuseFailAlloc_2723_, 1, v___x_2713_);
v___x_2715_ = v_reuseFailAlloc_2723_;
goto v_reusejp_2714_;
}
v_reusejp_2714_:
{
lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2720_; 
v___x_2716_ = l_List_appendTR___redArg(v_fst_2705_, v___x_2715_);
v___x_2717_ = lean_nat_mul(v_beats_2710_, v___x_2711_);
lean_dec(v_beats_2710_);
v___x_2718_ = lean_nat_add(v_snd_2706_, v___x_2717_);
lean_dec(v___x_2717_);
lean_dec(v_snd_2706_);
if (v_isShared_2709_ == 0)
{
lean_ctor_set(v___x_2708_, 1, v___x_2718_);
lean_ctor_set(v___x_2708_, 0, v___x_2716_);
v___x_2720_ = v___x_2708_;
goto v_reusejp_2719_;
}
else
{
lean_object* v_reuseFailAlloc_2722_; 
v_reuseFailAlloc_2722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2722_, 0, v___x_2716_);
lean_ctor_set(v_reuseFailAlloc_2722_, 1, v___x_2718_);
v___x_2720_ = v_reuseFailAlloc_2722_;
goto v_reusejp_2719_;
}
v_reusejp_2719_:
{
v_x_2698_ = v___x_2720_;
v_x_2699_ = v_tail_2701_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4(lean_object* v___x_2727_, lean_object* v_env_2728_, lean_object* v___x_2729_, lean_object* v_a_2730_, lean_object* v_a_2731_){
_start:
{
if (lean_obj_tag(v_a_2730_) == 0)
{
lean_object* v___x_2732_; 
lean_dec(v___x_2729_);
lean_dec_ref(v_env_2728_);
lean_dec(v___x_2727_);
v___x_2732_ = l_List_reverse___redArg(v_a_2731_);
return v___x_2732_;
}
else
{
lean_object* v_head_2733_; lean_object* v_step_2734_; lean_object* v_tail_2735_; lean_object* v___x_2737_; uint8_t v_isShared_2738_; uint8_t v_isSharedCheck_2758_; 
v_head_2733_ = lean_ctor_get(v_a_2730_, 0);
lean_inc(v_head_2733_);
v_step_2734_ = lean_ctor_get(v_head_2733_, 5);
lean_inc_ref(v_step_2734_);
v_tail_2735_ = lean_ctor_get(v_a_2730_, 1);
v_isSharedCheck_2758_ = !lean_is_exclusive(v_a_2730_);
if (v_isSharedCheck_2758_ == 0)
{
lean_object* v_unused_2759_; 
v_unused_2759_ = lean_ctor_get(v_a_2730_, 0);
lean_dec(v_unused_2759_);
v___x_2737_ = v_a_2730_;
v_isShared_2738_ = v_isSharedCheck_2758_;
goto v_resetjp_2736_;
}
else
{
lean_inc(v_tail_2735_);
lean_dec(v_a_2730_);
v___x_2737_ = lean_box(0);
v_isShared_2738_ = v_isSharedCheck_2758_;
goto v_resetjp_2736_;
}
v_resetjp_2736_:
{
lean_object* v_kind_2739_; lean_object* v_label_2740_; lean_object* v_before_2741_; lean_object* v_op_2742_; uint8_t v___x_2743_; lean_object* v___x_2744_; lean_object* v___x_2745_; lean_object* v___x_2746_; lean_object* v___y_2748_; 
v_kind_2739_ = lean_ctor_get(v_head_2733_, 3);
lean_inc_ref(v_kind_2739_);
v_label_2740_ = lean_ctor_get(v_head_2733_, 4);
lean_inc_ref(v_label_2740_);
v_before_2741_ = lean_ctor_get(v_head_2733_, 8);
lean_inc(v_before_2741_);
lean_dec(v_head_2733_);
v_op_2742_ = lean_ctor_get(v_step_2734_, 0);
lean_inc_ref_n(v_op_2742_, 2);
lean_dec_ref(v_step_2734_);
v___x_2743_ = 1;
lean_inc_n(v___x_2727_, 2);
v___x_2744_ = l_List_range(v___x_2727_);
v___x_2745_ = lean_box(0);
v___x_2746_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(v_op_2742_, v___x_2727_, v_before_2741_, v___x_2744_, v___x_2745_);
lean_dec(v_before_2741_);
if (lean_obj_tag(v_op_2742_) == 3)
{
lean_object* v_beats_2756_; 
v_beats_2756_ = lean_ctor_get(v_op_2742_, 4);
lean_inc(v_beats_2756_);
v___y_2748_ = v_beats_2756_;
goto v___jp_2747_;
}
else
{
lean_object* v_beats_2757_; 
v_beats_2757_ = lean_ctor_get(v_op_2742_, 1);
lean_inc(v_beats_2757_);
v___y_2748_ = v_beats_2757_;
goto v___jp_2747_;
}
v___jp_2747_:
{
lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; lean_object* v___x_2753_; 
v___x_2749_ = lp_choreo_Choreo_Op_orbits(v_op_2742_);
lean_dec_ref(v_op_2742_);
v___x_2750_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4___closed__0));
lean_inc(v___x_2729_);
lean_inc_ref(v_env_2728_);
v___x_2751_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_2751_, 0, v_label_2740_);
lean_ctor_set(v___x_2751_, 1, v_kind_2739_);
lean_ctor_set(v___x_2751_, 2, v___x_2746_);
lean_ctor_set(v___x_2751_, 3, v_env_2728_);
lean_ctor_set(v___x_2751_, 4, v___y_2748_);
lean_ctor_set(v___x_2751_, 5, v___x_2745_);
lean_ctor_set(v___x_2751_, 6, v___x_2749_);
lean_ctor_set(v___x_2751_, 7, v___x_2729_);
lean_ctor_set(v___x_2751_, 8, v___x_2750_);
lean_ctor_set_uint8(v___x_2751_, sizeof(void*)*9, v___x_2743_);
if (v_isShared_2738_ == 0)
{
lean_ctor_set(v___x_2737_, 1, v_a_2731_);
lean_ctor_set(v___x_2737_, 0, v___x_2751_);
v___x_2753_ = v___x_2737_;
goto v_reusejp_2752_;
}
else
{
lean_object* v_reuseFailAlloc_2755_; 
v_reuseFailAlloc_2755_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2755_, 0, v___x_2751_);
lean_ctor_set(v_reuseFailAlloc_2755_, 1, v_a_2731_);
v___x_2753_ = v_reuseFailAlloc_2755_;
goto v_reusejp_2752_;
}
v_reusejp_2752_:
{
v_a_2730_ = v_tail_2735_;
v_a_2731_ = v___x_2753_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__6(lean_object* v_a_2760_, lean_object* v_a_2761_){
_start:
{
if (lean_obj_tag(v_a_2760_) == 0)
{
lean_object* v___x_2762_; 
v___x_2762_ = l_List_reverse___redArg(v_a_2761_);
return v___x_2762_;
}
else
{
lean_object* v_head_2763_; lean_object* v_tail_2764_; lean_object* v___x_2766_; uint8_t v_isShared_2767_; uint8_t v_isSharedCheck_2773_; 
v_head_2763_ = lean_ctor_get(v_a_2760_, 0);
v_tail_2764_ = lean_ctor_get(v_a_2760_, 1);
v_isSharedCheck_2773_ = !lean_is_exclusive(v_a_2760_);
if (v_isSharedCheck_2773_ == 0)
{
v___x_2766_ = v_a_2760_;
v_isShared_2767_ = v_isSharedCheck_2773_;
goto v_resetjp_2765_;
}
else
{
lean_inc(v_tail_2764_);
lean_inc(v_head_2763_);
lean_dec(v_a_2760_);
v___x_2766_ = lean_box(0);
v_isShared_2767_ = v_isSharedCheck_2773_;
goto v_resetjp_2765_;
}
v_resetjp_2765_:
{
lean_object* v_after_2768_; lean_object* v___x_2770_; 
v_after_2768_ = lean_ctor_get(v_head_2763_, 9);
lean_inc(v_after_2768_);
lean_dec(v_head_2763_);
if (v_isShared_2767_ == 0)
{
lean_ctor_set(v___x_2766_, 1, v_a_2761_);
lean_ctor_set(v___x_2766_, 0, v_after_2768_);
v___x_2770_ = v___x_2766_;
goto v_reusejp_2769_;
}
else
{
lean_object* v_reuseFailAlloc_2772_; 
v_reuseFailAlloc_2772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2772_, 0, v_after_2768_);
lean_ctor_set(v_reuseFailAlloc_2772_, 1, v_a_2761_);
v___x_2770_ = v_reuseFailAlloc_2772_;
goto v_reusejp_2769_;
}
v_reusejp_2769_:
{
v_a_2760_ = v_tail_2764_;
v_a_2761_ = v___x_2770_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__8(lean_object* v_x_2774_, lean_object* v_x_2775_){
_start:
{
if (lean_obj_tag(v_x_2775_) == 0)
{
return v_x_2774_;
}
else
{
lean_object* v_head_2776_; lean_object* v_tail_2777_; lean_object* v___x_2779_; uint8_t v_isShared_2780_; uint8_t v_isSharedCheck_2791_; 
v_head_2776_ = lean_ctor_get(v_x_2775_, 0);
v_tail_2777_ = lean_ctor_get(v_x_2775_, 1);
v_isSharedCheck_2791_ = !lean_is_exclusive(v_x_2775_);
if (v_isSharedCheck_2791_ == 0)
{
v___x_2779_ = v_x_2775_;
v_isShared_2780_ = v_isSharedCheck_2791_;
goto v_resetjp_2778_;
}
else
{
lean_inc(v_tail_2777_);
lean_inc(v_head_2776_);
lean_dec(v_x_2775_);
v___x_2779_ = lean_box(0);
v_isShared_2780_ = v_isSharedCheck_2791_;
goto v_resetjp_2778_;
}
v_resetjp_2778_:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; uint8_t v___x_2783_; 
v___x_2781_ = l_List_getLast_x3f___redArg(v_x_2774_);
lean_inc(v_head_2776_);
v___x_2782_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2782_, 0, v_head_2776_);
v___x_2783_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2781_, v___x_2782_);
lean_dec_ref_known(v___x_2782_, 1);
lean_dec(v___x_2781_);
if (v___x_2783_ == 0)
{
lean_object* v___x_2784_; lean_object* v___x_2786_; 
v___x_2784_ = lean_box(0);
if (v_isShared_2780_ == 0)
{
lean_ctor_set(v___x_2779_, 1, v___x_2784_);
v___x_2786_ = v___x_2779_;
goto v_reusejp_2785_;
}
else
{
lean_object* v_reuseFailAlloc_2789_; 
v_reuseFailAlloc_2789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2789_, 0, v_head_2776_);
lean_ctor_set(v_reuseFailAlloc_2789_, 1, v___x_2784_);
v___x_2786_ = v_reuseFailAlloc_2789_;
goto v_reusejp_2785_;
}
v_reusejp_2785_:
{
lean_object* v___x_2787_; 
v___x_2787_ = l_List_appendTR___redArg(v_x_2774_, v___x_2786_);
v_x_2774_ = v___x_2787_;
v_x_2775_ = v_tail_2777_;
goto _start;
}
}
else
{
lean_del_object(v___x_2779_);
lean_dec(v_head_2776_);
v_x_2775_ = v_tail_2777_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__0(lean_object* v_sp_2792_, lean_object* v_x_2793_, lean_object* v_x_2794_){
_start:
{
if (lean_obj_tag(v_x_2794_) == 0)
{
lean_dec_ref(v_sp_2792_);
return v_x_2793_;
}
else
{
lean_object* v_head_2795_; lean_object* v_tail_2796_; lean_object* v___x_2797_; 
v_head_2795_ = lean_ctor_get(v_x_2794_, 0);
lean_inc(v_head_2795_);
v_tail_2796_ = lean_ctor_get(v_x_2794_, 1);
lean_inc(v_tail_2796_);
lean_dec_ref_known(v_x_2794_, 2);
lean_inc_ref(v_sp_2792_);
v___x_2797_ = lp_choreo_Choreo_compileOp(v_sp_2792_, v_x_2793_, v_head_2795_);
v_x_2793_ = v___x_2797_;
v_x_2794_ = v_tail_2796_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(lean_object* v_x_2799_, lean_object* v_x_2800_){
_start:
{
if (lean_obj_tag(v_x_2800_) == 0)
{
return v_x_2799_;
}
else
{
lean_object* v_head_2801_; lean_object* v_tail_2802_; lean_object* v_x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; uint8_t v___x_2806_; 
v_head_2801_ = lean_ctor_get(v_x_2800_, 0);
v_tail_2802_ = lean_ctor_get(v_x_2800_, 1);
v_x_2803_ = lean_ctor_get(v_head_2801_, 0);
v___x_2804_ = lean_nat_abs(v_x_2803_);
v___x_2805_ = lean_nat_to_int(v___x_2804_);
v___x_2806_ = lean_int_dec_le(v_x_2799_, v___x_2805_);
if (v___x_2806_ == 0)
{
lean_object* v___x_2807_; 
lean_dec(v___x_2805_);
v___x_2807_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(v_x_2799_, v_tail_2802_);
return v___x_2807_;
}
else
{
lean_object* v___x_2808_; 
lean_dec(v_x_2799_);
v___x_2808_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(v___x_2805_, v_tail_2802_);
return v___x_2808_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3___boxed(lean_object* v_x_2809_, lean_object* v_x_2810_){
_start:
{
lean_object* v_res_2811_; 
v_res_2811_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(v_x_2809_, v_x_2810_);
lean_dec(v_x_2810_);
return v_res_2811_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__9(lean_object* v_a_2812_, lean_object* v_a_2813_){
_start:
{
if (lean_obj_tag(v_a_2812_) == 0)
{
lean_object* v___x_2814_; 
v___x_2814_ = l_List_reverse___redArg(v_a_2813_);
return v___x_2814_;
}
else
{
lean_object* v_head_2815_; lean_object* v_tail_2816_; lean_object* v___x_2818_; uint8_t v_isShared_2819_; uint8_t v_isSharedCheck_2843_; 
v_head_2815_ = lean_ctor_get(v_a_2812_, 0);
v_tail_2816_ = lean_ctor_get(v_a_2812_, 1);
v_isSharedCheck_2843_ = !lean_is_exclusive(v_a_2812_);
if (v_isSharedCheck_2843_ == 0)
{
v___x_2818_ = v_a_2812_;
v_isShared_2819_ = v_isSharedCheck_2843_;
goto v_resetjp_2817_;
}
else
{
lean_inc(v_tail_2816_);
lean_inc(v_head_2815_);
lean_dec(v_a_2812_);
v___x_2818_ = lean_box(0);
v_isShared_2819_ = v_isSharedCheck_2843_;
goto v_resetjp_2817_;
}
v_resetjp_2817_:
{
lean_object* v_name_2820_; lean_object* v_sectionName_2821_; lean_object* v_surface_2822_; lean_object* v_kind_2823_; lean_object* v_label_2824_; lean_object* v_step_2825_; lean_object* v_requiresText_2826_; lean_object* v_ensuresText_2827_; lean_object* v_before_2828_; lean_object* v_after_2829_; lean_object* v___x_2831_; uint8_t v_isShared_2832_; uint8_t v_isSharedCheck_2841_; 
v_name_2820_ = lean_ctor_get(v_head_2815_, 0);
v_sectionName_2821_ = lean_ctor_get(v_head_2815_, 1);
v_surface_2822_ = lean_ctor_get(v_head_2815_, 2);
v_kind_2823_ = lean_ctor_get(v_head_2815_, 3);
v_label_2824_ = lean_ctor_get(v_head_2815_, 4);
v_step_2825_ = lean_ctor_get(v_head_2815_, 5);
v_requiresText_2826_ = lean_ctor_get(v_head_2815_, 6);
v_ensuresText_2827_ = lean_ctor_get(v_head_2815_, 7);
v_before_2828_ = lean_ctor_get(v_head_2815_, 8);
v_after_2829_ = lean_ctor_get(v_head_2815_, 9);
v_isSharedCheck_2841_ = !lean_is_exclusive(v_head_2815_);
if (v_isSharedCheck_2841_ == 0)
{
lean_object* v_unused_2842_; 
v_unused_2842_ = lean_ctor_get(v_head_2815_, 10);
lean_dec(v_unused_2842_);
v___x_2831_ = v_head_2815_;
v_isShared_2832_ = v_isSharedCheck_2841_;
goto v_resetjp_2830_;
}
else
{
lean_inc(v_after_2829_);
lean_inc(v_before_2828_);
lean_inc(v_ensuresText_2827_);
lean_inc(v_requiresText_2826_);
lean_inc(v_step_2825_);
lean_inc(v_label_2824_);
lean_inc(v_kind_2823_);
lean_inc(v_surface_2822_);
lean_inc(v_sectionName_2821_);
lean_inc(v_name_2820_);
lean_dec(v_head_2815_);
v___x_2831_ = lean_box(0);
v_isShared_2832_ = v_isSharedCheck_2841_;
goto v_resetjp_2830_;
}
v_resetjp_2830_:
{
lean_object* v___x_2833_; lean_object* v___x_2835_; 
v___x_2833_ = lean_box(0);
if (v_isShared_2832_ == 0)
{
lean_ctor_set(v___x_2831_, 10, v___x_2833_);
v___x_2835_ = v___x_2831_;
goto v_reusejp_2834_;
}
else
{
lean_object* v_reuseFailAlloc_2840_; 
v_reuseFailAlloc_2840_ = lean_alloc_ctor(0, 11, 0);
lean_ctor_set(v_reuseFailAlloc_2840_, 0, v_name_2820_);
lean_ctor_set(v_reuseFailAlloc_2840_, 1, v_sectionName_2821_);
lean_ctor_set(v_reuseFailAlloc_2840_, 2, v_surface_2822_);
lean_ctor_set(v_reuseFailAlloc_2840_, 3, v_kind_2823_);
lean_ctor_set(v_reuseFailAlloc_2840_, 4, v_label_2824_);
lean_ctor_set(v_reuseFailAlloc_2840_, 5, v_step_2825_);
lean_ctor_set(v_reuseFailAlloc_2840_, 6, v_requiresText_2826_);
lean_ctor_set(v_reuseFailAlloc_2840_, 7, v_ensuresText_2827_);
lean_ctor_set(v_reuseFailAlloc_2840_, 8, v_before_2828_);
lean_ctor_set(v_reuseFailAlloc_2840_, 9, v_after_2829_);
lean_ctor_set(v_reuseFailAlloc_2840_, 10, v___x_2833_);
v___x_2835_ = v_reuseFailAlloc_2840_;
goto v_reusejp_2834_;
}
v_reusejp_2834_:
{
lean_object* v___x_2837_; 
if (v_isShared_2819_ == 0)
{
lean_ctor_set(v___x_2818_, 1, v_a_2813_);
lean_ctor_set(v___x_2818_, 0, v___x_2835_);
v___x_2837_ = v___x_2818_;
goto v_reusejp_2836_;
}
else
{
lean_object* v_reuseFailAlloc_2839_; 
v_reuseFailAlloc_2839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2839_, 0, v___x_2835_);
lean_ctor_set(v_reuseFailAlloc_2839_, 1, v_a_2813_);
v___x_2837_ = v_reuseFailAlloc_2839_;
goto v_reusejp_2836_;
}
v_reusejp_2836_:
{
v_a_2812_ = v_tail_2816_;
v_a_2813_ = v___x_2837_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildProgram_spec__2(lean_object* v_a_2844_, lean_object* v_a_2845_){
_start:
{
if (lean_obj_tag(v_a_2844_) == 0)
{
lean_object* v___x_2846_; 
v___x_2846_ = lean_array_to_list(v_a_2845_);
return v___x_2846_;
}
else
{
lean_object* v_head_2847_; lean_object* v_tail_2848_; lean_object* v_before_2849_; lean_object* v_after_2850_; lean_object* v___x_2851_; lean_object* v___x_2852_; 
v_head_2847_ = lean_ctor_get(v_a_2844_, 0);
lean_inc(v_head_2847_);
v_tail_2848_ = lean_ctor_get(v_a_2844_, 1);
lean_inc(v_tail_2848_);
lean_dec_ref_known(v_a_2844_, 2);
v_before_2849_ = lean_ctor_get(v_head_2847_, 8);
lean_inc(v_before_2849_);
v_after_2850_ = lean_ctor_get(v_head_2847_, 9);
lean_inc(v_after_2850_);
lean_dec(v_head_2847_);
v___x_2851_ = l_List_appendTR___redArg(v_before_2849_, v_after_2850_);
v___x_2852_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2845_, v___x_2851_);
v_a_2844_ = v_tail_2848_;
v_a_2845_ = v___x_2852_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(lean_object* v_a_2854_, lean_object* v_a_2855_){
_start:
{
if (lean_obj_tag(v_a_2854_) == 0)
{
lean_object* v___x_2856_; 
v___x_2856_ = l_List_reverse___redArg(v_a_2855_);
return v___x_2856_;
}
else
{
lean_object* v_head_2857_; lean_object* v_tail_2858_; lean_object* v___x_2860_; uint8_t v_isShared_2861_; uint8_t v_isSharedCheck_2867_; 
v_head_2857_ = lean_ctor_get(v_a_2854_, 0);
v_tail_2858_ = lean_ctor_get(v_a_2854_, 1);
v_isSharedCheck_2867_ = !lean_is_exclusive(v_a_2854_);
if (v_isSharedCheck_2867_ == 0)
{
v___x_2860_ = v_a_2854_;
v_isShared_2861_ = v_isSharedCheck_2867_;
goto v_resetjp_2859_;
}
else
{
lean_inc(v_tail_2858_);
lean_inc(v_head_2857_);
lean_dec(v_a_2854_);
v___x_2860_ = lean_box(0);
v_isShared_2861_ = v_isSharedCheck_2867_;
goto v_resetjp_2859_;
}
v_resetjp_2859_:
{
lean_object* v_name_2862_; lean_object* v___x_2864_; 
v_name_2862_ = lean_ctor_get(v_head_2857_, 0);
lean_inc_ref(v_name_2862_);
lean_dec(v_head_2857_);
if (v_isShared_2861_ == 0)
{
lean_ctor_set(v___x_2860_, 1, v_a_2855_);
lean_ctor_set(v___x_2860_, 0, v_name_2862_);
v___x_2864_ = v___x_2860_;
goto v_reusejp_2863_;
}
else
{
lean_object* v_reuseFailAlloc_2866_; 
v_reuseFailAlloc_2866_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2866_, 0, v_name_2862_);
lean_ctor_set(v_reuseFailAlloc_2866_, 1, v_a_2855_);
v___x_2864_ = v_reuseFailAlloc_2866_;
goto v_reusejp_2863_;
}
v_reusejp_2863_:
{
v_a_2854_ = v_tail_2858_;
v_a_2855_ = v___x_2864_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___redArg(lean_object* v_sp_2870_){
_start:
{
lean_object* v___y_2872_; lean_object* v___y_2873_; lean_object* v___y_2874_; lean_object* v___y_2875_; lean_object* v___y_2876_; lean_object* v___y_2877_; lean_object* v___y_2878_; lean_object* v___y_2879_; lean_object* v___y_2880_; lean_object* v___y_2881_; lean_object* v___y_2882_; lean_object* v___y_2883_; lean_object* v___y_2884_; lean_object* v___y_2885_; lean_object* v___y_2901_; lean_object* v___y_2902_; lean_object* v___y_2903_; lean_object* v___y_2904_; lean_object* v___y_2905_; lean_object* v___y_2906_; lean_object* v___y_2907_; lean_object* v___y_2908_; lean_object* v___y_2909_; lean_object* v___y_2910_; lean_object* v___y_2911_; lean_object* v___y_2912_; lean_object* v___y_2913_; lean_object* v___y_2914_; lean_object* v___y_2915_; lean_object* v___y_2921_; lean_object* v___y_2922_; lean_object* v___y_2923_; lean_object* v___y_2924_; lean_object* v___y_2925_; lean_object* v___y_2926_; lean_object* v___y_2927_; lean_object* v___y_2928_; lean_object* v___y_2929_; lean_object* v___y_2930_; lean_object* v___y_2931_; lean_object* v___y_2932_; lean_object* v___y_2933_; lean_object* v___y_2934_; lean_object* v___y_2964_; lean_object* v___y_2965_; lean_object* v___y_2966_; lean_object* v___y_2967_; lean_object* v___y_2968_; lean_object* v___y_2969_; lean_object* v___y_2970_; lean_object* v___y_2971_; lean_object* v___y_2972_; lean_object* v___y_2973_; lean_object* v___y_2974_; lean_object* v___y_2975_; lean_object* v___y_2981_; lean_object* v___y_2982_; lean_object* v___y_2983_; lean_object* v___y_2984_; lean_object* v___y_2985_; lean_object* v___y_2986_; lean_object* v___y_2987_; lean_object* v___y_2988_; lean_object* v___y_2989_; lean_object* v___y_2990_; lean_object* v___y_2991_; lean_object* v___y_2992_; lean_object* v___y_2993_; lean_object* v___y_2997_; lean_object* v___y_2998_; lean_object* v___y_2999_; lean_object* v___y_3000_; lean_object* v___y_3001_; lean_object* v___y_3002_; lean_object* v___y_3014_; lean_object* v___y_3015_; lean_object* v___y_3016_; lean_object* v___y_3017_; lean_object* v___y_3018_; lean_object* v___y_3019_; lean_object* v___y_3020_; lean_object* v___y_3021_; lean_object* v_n_3026_; lean_object* v_bpm_3027_; lean_object* v_gap_3028_; lean_object* v_genre_3029_; lean_object* v_start_3030_; lean_object* v_startPlaces_3031_; lean_object* v_ops_3032_; lean_object* v_transform_3033_; lean_object* v___y_3035_; 
v_n_3026_ = lean_ctor_get(v_sp_2870_, 1);
lean_inc(v_n_3026_);
v_bpm_3027_ = lean_ctor_get(v_sp_2870_, 2);
lean_inc(v_bpm_3027_);
v_gap_3028_ = lean_ctor_get(v_sp_2870_, 3);
lean_inc(v_gap_3028_);
v_genre_3029_ = lean_ctor_get(v_sp_2870_, 4);
lean_inc_ref(v_genre_3029_);
v_start_3030_ = lean_ctor_get(v_sp_2870_, 5);
v_startPlaces_3031_ = lean_ctor_get(v_sp_2870_, 6);
v_ops_3032_ = lean_ctor_get(v_sp_2870_, 7);
v_transform_3033_ = lean_ctor_get(v_sp_2870_, 8);
lean_inc_ref(v_transform_3033_);
if (lean_obj_tag(v_startPlaces_3031_) == 0)
{
lean_object* v___x_3044_; 
lean_inc(v_n_3026_);
v___x_3044_ = lp_choreo_Choreo_namedPlaces(v_start_3030_, v_n_3026_, v_gap_3028_);
v___y_3035_ = v___x_3044_;
goto v___jp_3034_;
}
else
{
lean_object* v_val_3045_; 
v_val_3045_ = lean_ctor_get(v_startPlaces_3031_, 0);
lean_inc(v_val_3045_);
v___y_3035_ = v_val_3045_;
goto v___jp_3034_;
}
v___jp_2871_:
{
lean_object* v___x_2886_; uint8_t v___x_2887_; lean_object* v_plan_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; lean_object* v___x_2892_; lean_object* v___x_2893_; lean_object* v___x_2894_; lean_object* v___x_2895_; lean_object* v___x_2896_; lean_object* v___x_2897_; lean_object* v_built_2898_; lean_object* v___x_2899_; 
v___x_2886_ = lean_box(0);
v___x_2887_ = 0;
lean_inc_n(v___y_2881_, 3);
lean_inc_ref(v___y_2885_);
lean_inc(v___y_2878_);
v_plan_2888_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_plan_2888_, 0, v___y_2878_);
lean_ctor_set(v_plan_2888_, 1, v___y_2883_);
lean_ctor_set(v_plan_2888_, 2, v___y_2885_);
lean_ctor_set(v_plan_2888_, 3, v___y_2882_);
lean_ctor_set(v_plan_2888_, 4, v___y_2881_);
lean_ctor_set(v_plan_2888_, 5, v___y_2881_);
lean_ctor_set(v_plan_2888_, 6, v___x_2886_);
lean_ctor_set(v_plan_2888_, 7, v___x_2886_);
lean_ctor_set(v_plan_2888_, 8, v___y_2872_);
lean_ctor_set(v_plan_2888_, 9, v___x_2886_);
lean_ctor_set(v_plan_2888_, 10, v___y_2881_);
lean_ctor_set_uint8(v_plan_2888_, sizeof(void*)*11, v___x_2887_);
v___x_2889_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2889_, 0, v___y_2874_);
lean_ctor_set(v___x_2889_, 1, v___y_2880_);
v___x_2890_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildPlanOnce_spec__7(v___y_2876_, v___x_2886_);
v___x_2891_ = lean_box(0);
v___x_2892_ = l_List_lengthTR___redArg(v___y_2877_);
v___x_2893_ = l_List_range(v___x_2892_);
v___x_2894_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2894_, 0, v___y_2884_);
lean_ctor_set(v___x_2894_, 1, v___x_2886_);
lean_ctor_set(v___x_2894_, 2, v___y_2873_);
lean_ctor_set(v___x_2894_, 3, v___y_2879_);
lean_ctor_set(v___x_2894_, 4, v___y_2878_);
lean_ctor_set(v___x_2894_, 5, v___x_2886_);
lean_ctor_set(v___x_2894_, 6, v___y_2885_);
lean_ctor_set(v___x_2894_, 7, v___x_2893_);
lean_ctor_set(v___x_2894_, 8, v___x_2886_);
v___x_2895_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2895_, 0, v___x_2894_);
lean_inc(v___y_2877_);
v___x_2896_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(v___y_2877_, v___x_2886_);
v___x_2897_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__8(v___x_2886_, v___x_2896_);
v_built_2898_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_built_2898_, 0, v_plan_2888_);
lean_ctor_set(v_built_2898_, 1, v___x_2889_);
lean_ctor_set(v_built_2898_, 2, v___x_2890_);
lean_ctor_set(v_built_2898_, 3, v___x_2886_);
lean_ctor_set(v_built_2898_, 4, v___x_2886_);
lean_ctor_set(v_built_2898_, 5, v___x_2886_);
lean_ctor_set(v_built_2898_, 6, v___x_2891_);
lean_ctor_set(v_built_2898_, 7, v___x_2891_);
lean_ctor_set(v_built_2898_, 8, v___x_2895_);
lean_ctor_set(v_built_2898_, 9, v___x_2897_);
lean_ctor_set(v_built_2898_, 10, v___y_2881_);
lean_ctor_set(v_built_2898_, 11, v___x_2886_);
lean_ctor_set(v_built_2898_, 12, v___y_2875_);
v___x_2899_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2899_, 0, v_built_2898_);
lean_ctor_set(v___x_2899_, 1, v___y_2877_);
return v___x_2899_;
}
v___jp_2900_:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; uint8_t v___x_2918_; 
v___x_2916_ = lean_nat_div(v___y_2907_, v___y_2915_);
lean_dec(v___y_2915_);
lean_dec(v___y_2907_);
v___x_2917_ = lean_string_utf8_byte_size(v___y_2902_);
v___x_2918_ = lean_nat_dec_eq(v___x_2917_, v___y_2912_);
if (v___x_2918_ == 0)
{
v___y_2872_ = v___y_2901_;
v___y_2873_ = v___y_2903_;
v___y_2874_ = v___y_2904_;
v___y_2875_ = v___y_2905_;
v___y_2876_ = v___y_2906_;
v___y_2877_ = v___y_2908_;
v___y_2878_ = v___y_2909_;
v___y_2879_ = v___y_2910_;
v___y_2880_ = v___y_2911_;
v___y_2881_ = v___y_2912_;
v___y_2882_ = v___y_2913_;
v___y_2883_ = v___x_2916_;
v___y_2884_ = v___y_2914_;
v___y_2885_ = v___y_2902_;
goto v___jp_2871_;
}
else
{
lean_object* v___x_2919_; 
lean_dec_ref(v___y_2902_);
v___x_2919_ = ((lean_object*)(lp_choreo_Choreo_buildProgram___redArg___closed__0));
v___y_2872_ = v___y_2901_;
v___y_2873_ = v___y_2903_;
v___y_2874_ = v___y_2904_;
v___y_2875_ = v___y_2905_;
v___y_2876_ = v___y_2906_;
v___y_2877_ = v___y_2908_;
v___y_2878_ = v___y_2909_;
v___y_2879_ = v___y_2910_;
v___y_2880_ = v___y_2911_;
v___y_2881_ = v___y_2912_;
v___y_2882_ = v___y_2913_;
v___y_2883_ = v___x_2916_;
v___y_2884_ = v___y_2914_;
v___y_2885_ = v___x_2919_;
goto v___jp_2871_;
}
}
v___jp_2920_:
{
lean_object* v_every_2935_; lean_object* v___x_2936_; lean_object* v_wide_2937_; lean_object* v___x_2938_; lean_object* v___x_2939_; lean_object* v___x_2940_; lean_object* v___x_2941_; lean_object* v___x_2942_; lean_object* v_env_2943_; lean_object* v___x_2944_; lean_object* v___x_2945_; lean_object* v___x_2946_; lean_object* v_cfg_2947_; lean_object* v___x_2948_; lean_object* v_drafts_2949_; lean_object* v___x_2950_; lean_object* v___x_2951_; lean_object* v_fst_2952_; lean_object* v___x_2954_; uint8_t v_isShared_2955_; uint8_t v_isSharedCheck_2961_; 
v_every_2935_ = l_List_appendTR___redArg(v___y_2933_, v___y_2934_);
v___x_2936_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__2, &lp_choreo_Choreo_evenLanes___closed__2_once, _init_lp_choreo_Choreo_evenLanes___closed__2);
v_wide_2937_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(v___x_2936_, v_every_2935_);
lean_dec(v_every_2935_);
v___x_2938_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_2939_ = lean_int_add(v_wide_2937_, v___x_2938_);
lean_dec(v_wide_2937_);
v___x_2940_ = lean_int_neg(v___x_2939_);
lean_inc_n(v___y_2929_, 2);
v___x_2941_ = lean_nat_to_int(v___y_2929_);
v___x_2942_ = lean_obj_once(&lp_choreo_Choreo_Pt_mapT___closed__2, &lp_choreo_Choreo_Pt_mapT___closed__2_once, _init_lp_choreo_Choreo_Pt_mapT___closed__2);
lean_inc(v___x_2941_);
v_env_2943_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_env_2943_, 0, v___x_2940_);
lean_ctor_set(v_env_2943_, 1, v___x_2939_);
lean_ctor_set(v_env_2943_, 2, v___x_2941_);
lean_ctor_set(v_env_2943_, 3, v___x_2942_);
v___x_2944_ = lp_choreo_Choreo_vmaxMM;
v___x_2945_ = lean_unsigned_to_nat(4u);
v___x_2946_ = lean_nat_mul(v___y_2924_, v___x_2945_);
lean_dec(v___y_2924_);
lean_inc_n(v___y_2927_, 2);
lean_inc(v___y_2925_);
lean_inc_ref(v_env_2943_);
lean_inc_n(v___y_2921_, 2);
lean_inc_n(v___y_2931_, 3);
v_cfg_2947_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_cfg_2947_, 0, v___y_2931_);
lean_ctor_set(v_cfg_2947_, 1, v___y_2921_);
lean_ctor_set(v_cfg_2947_, 2, v___x_2944_);
lean_ctor_set(v_cfg_2947_, 3, v_env_2943_);
lean_ctor_set(v_cfg_2947_, 4, v___x_2945_);
lean_ctor_set(v_cfg_2947_, 5, v___y_2925_);
lean_ctor_set(v_cfg_2947_, 6, v___y_2927_);
lean_ctor_set(v_cfg_2947_, 7, v___x_2946_);
lean_ctor_set(v_cfg_2947_, 8, v___y_2927_);
v___x_2948_ = lean_box(0);
lean_inc(v___y_2926_);
v_drafts_2949_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4(v___y_2931_, v_env_2943_, v___y_2921_, v___y_2926_, v___x_2948_);
v___x_2950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2950_, 0, v___x_2948_);
lean_ctor_set(v___x_2950_, 1, v___y_2929_);
lean_inc(v_drafts_2949_);
v___x_2951_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__5(v___y_2931_, v___x_2950_, v_drafts_2949_);
v_fst_2952_ = lean_ctor_get(v___x_2951_, 0);
v_isSharedCheck_2961_ = !lean_is_exclusive(v___x_2951_);
if (v_isSharedCheck_2961_ == 0)
{
lean_object* v_unused_2962_; 
v_unused_2962_ = lean_ctor_get(v___x_2951_, 1);
lean_dec(v_unused_2962_);
v___x_2954_ = v___x_2951_;
v_isShared_2955_ = v_isSharedCheck_2961_;
goto v_resetjp_2953_;
}
else
{
lean_inc(v_fst_2952_);
lean_dec(v___x_2951_);
v___x_2954_ = lean_box(0);
v_isShared_2955_ = v_isSharedCheck_2961_;
goto v_resetjp_2953_;
}
v_resetjp_2953_:
{
lean_object* v___x_2956_; lean_object* v_frames_2958_; 
lean_inc(v___y_2926_);
v___x_2956_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__6(v___y_2926_, v___x_2948_);
if (v_isShared_2955_ == 0)
{
lean_ctor_set_tag(v___x_2954_, 1);
lean_ctor_set(v___x_2954_, 1, v___x_2956_);
lean_ctor_set(v___x_2954_, 0, v___y_2932_);
v_frames_2958_ = v___x_2954_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v___y_2932_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v___x_2956_);
v_frames_2958_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
uint8_t v___x_2959_; 
v___x_2959_ = lean_nat_dec_le(v___y_2930_, v___y_2927_);
if (v___x_2959_ == 0)
{
v___y_2901_ = v___y_2921_;
v___y_2902_ = v___y_2922_;
v___y_2903_ = v___y_2923_;
v___y_2904_ = v_cfg_2947_;
v___y_2905_ = v___x_2941_;
v___y_2906_ = v_drafts_2949_;
v___y_2907_ = v___y_2925_;
v___y_2908_ = v___y_2926_;
v___y_2909_ = v___y_2927_;
v___y_2910_ = v___y_2928_;
v___y_2911_ = v_fst_2952_;
v___y_2912_ = v___y_2929_;
v___y_2913_ = v___y_2931_;
v___y_2914_ = v_frames_2958_;
v___y_2915_ = v___y_2930_;
goto v___jp_2900_;
}
else
{
lean_dec(v___y_2930_);
lean_inc(v___y_2927_);
v___y_2901_ = v___y_2921_;
v___y_2902_ = v___y_2922_;
v___y_2903_ = v___y_2923_;
v___y_2904_ = v_cfg_2947_;
v___y_2905_ = v___x_2941_;
v___y_2906_ = v_drafts_2949_;
v___y_2907_ = v___y_2925_;
v___y_2908_ = v___y_2926_;
v___y_2909_ = v___y_2927_;
v___y_2910_ = v___y_2928_;
v___y_2911_ = v_fst_2952_;
v___y_2912_ = v___y_2929_;
v___y_2913_ = v___y_2931_;
v___y_2914_ = v_frames_2958_;
v___y_2915_ = v___y_2927_;
goto v___jp_2900_;
}
}
}
}
v___jp_2963_:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; uint8_t v___x_2978_; 
v___x_2976_ = lean_mk_empty_array_with_capacity(v___y_2967_);
lean_inc(v___y_2973_);
v___x_2977_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildProgram_spec__2(v___y_2973_, v___x_2976_);
v___x_2978_ = l_List_isEmpty___redArg(v___y_2973_);
if (v___x_2978_ == 0)
{
lean_object* v___x_2979_; 
v___x_2979_ = lean_box(0);
v___y_2921_ = v___y_2964_;
v___y_2922_ = v___y_2966_;
v___y_2923_ = v___y_2965_;
v___y_2924_ = v___y_2968_;
v___y_2925_ = v___y_2972_;
v___y_2926_ = v___y_2973_;
v___y_2927_ = v___y_2975_;
v___y_2928_ = v___y_2974_;
v___y_2929_ = v___y_2967_;
v___y_2930_ = v___y_2969_;
v___y_2931_ = v___y_2971_;
v___y_2932_ = v___y_2970_;
v___y_2933_ = v___x_2977_;
v___y_2934_ = v___x_2979_;
goto v___jp_2920_;
}
else
{
lean_inc(v___y_2970_);
v___y_2921_ = v___y_2964_;
v___y_2922_ = v___y_2966_;
v___y_2923_ = v___y_2965_;
v___y_2924_ = v___y_2968_;
v___y_2925_ = v___y_2972_;
v___y_2926_ = v___y_2973_;
v___y_2927_ = v___y_2975_;
v___y_2928_ = v___y_2974_;
v___y_2929_ = v___y_2967_;
v___y_2930_ = v___y_2969_;
v___y_2931_ = v___y_2971_;
v___y_2932_ = v___y_2970_;
v___y_2933_ = v___x_2977_;
v___y_2934_ = v___y_2970_;
goto v___jp_2920_;
}
}
v___jp_2980_:
{
lean_object* v___x_2994_; uint8_t v___x_2995_; 
v___x_2994_ = lean_nat_div(v___y_2982_, v___y_2993_);
lean_dec(v___y_2993_);
lean_dec(v___y_2982_);
v___x_2995_ = lean_nat_dec_le(v___y_2987_, v___x_2994_);
if (v___x_2995_ == 0)
{
lean_dec(v___x_2994_);
lean_inc(v___y_2987_);
v___y_2964_ = v___y_2981_;
v___y_2965_ = v___y_2984_;
v___y_2966_ = v___y_2983_;
v___y_2967_ = v___y_2985_;
v___y_2968_ = v___y_2986_;
v___y_2969_ = v___y_2987_;
v___y_2970_ = v___y_2989_;
v___y_2971_ = v___y_2988_;
v___y_2972_ = v___y_2991_;
v___y_2973_ = v___y_2990_;
v___y_2974_ = v___y_2992_;
v___y_2975_ = v___y_2987_;
goto v___jp_2963_;
}
else
{
v___y_2964_ = v___y_2981_;
v___y_2965_ = v___y_2984_;
v___y_2966_ = v___y_2983_;
v___y_2967_ = v___y_2985_;
v___y_2968_ = v___y_2986_;
v___y_2969_ = v___y_2987_;
v___y_2970_ = v___y_2989_;
v___y_2971_ = v___y_2988_;
v___y_2972_ = v___y_2991_;
v___y_2973_ = v___y_2990_;
v___y_2974_ = v___y_2992_;
v___y_2975_ = v___x_2994_;
goto v___jp_2963_;
}
}
v___jp_2996_:
{
lean_object* v___x_3003_; lean_object* v___x_3004_; lean_object* v___x_3005_; lean_object* v_beats_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; uint8_t v___x_3012_; 
v___x_3003_ = lean_unsigned_to_nat(0u);
v___x_3004_ = lean_box(0);
lean_inc(v___y_3002_);
v___x_3005_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__1(v___y_3002_, v___x_3004_);
v_beats_3006_ = lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(v___x_3003_, v___x_3005_);
v___x_3007_ = lean_unsigned_to_nat(1u);
v___x_3008_ = lean_unsigned_to_nat(60u);
v___x_3009_ = lean_nat_mul(v_beats_3006_, v___x_3008_);
v___x_3010_ = lean_nat_shiftr(v___y_2997_, v___x_3007_);
v___x_3011_ = lean_nat_add(v___x_3009_, v___x_3010_);
lean_dec(v___x_3010_);
v___x_3012_ = lean_nat_dec_le(v___x_3007_, v___y_2997_);
if (v___x_3012_ == 0)
{
lean_dec(v___y_2997_);
v___y_2981_ = v___y_2998_;
v___y_2982_ = v___x_3011_;
v___y_2983_ = v___y_2999_;
v___y_2984_ = v___x_3004_;
v___y_2985_ = v___x_3003_;
v___y_2986_ = v_beats_3006_;
v___y_2987_ = v___x_3007_;
v___y_2988_ = v___y_3000_;
v___y_2989_ = v___y_3001_;
v___y_2990_ = v___y_3002_;
v___y_2991_ = v___x_3009_;
v___y_2992_ = v___x_3005_;
v___y_2993_ = v___x_3007_;
goto v___jp_2980_;
}
else
{
v___y_2981_ = v___y_2998_;
v___y_2982_ = v___x_3011_;
v___y_2983_ = v___y_2999_;
v___y_2984_ = v___x_3004_;
v___y_2985_ = v___x_3003_;
v___y_2986_ = v_beats_3006_;
v___y_2987_ = v___x_3007_;
v___y_2988_ = v___y_3000_;
v___y_2989_ = v___y_3001_;
v___y_2990_ = v___y_3002_;
v___y_2991_ = v___x_3009_;
v___y_2992_ = v___x_3005_;
v___y_2993_ = v___y_2997_;
goto v___jp_2980_;
}
}
v___jp_3013_:
{
lean_object* v___x_3022_; lean_object* v___x_3023_; uint8_t v___x_3024_; 
v___x_3022_ = lean_string_utf8_byte_size(v___y_3020_);
lean_dec_ref(v___y_3020_);
v___x_3023_ = lean_unsigned_to_nat(0u);
v___x_3024_ = lean_nat_dec_eq(v___x_3022_, v___x_3023_);
if (v___x_3024_ == 0)
{
lean_object* v___x_3025_; 
lean_inc(v___y_3017_);
v___x_3025_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__9(v___y_3021_, v___y_3017_);
v___y_2997_ = v___y_3015_;
v___y_2998_ = v___y_3014_;
v___y_2999_ = v___y_3016_;
v___y_3000_ = v___y_3019_;
v___y_3001_ = v___y_3018_;
v___y_3002_ = v___x_3025_;
goto v___jp_2996_;
}
else
{
v___y_2997_ = v___y_3015_;
v___y_2998_ = v___y_3014_;
v___y_2999_ = v___y_3016_;
v___y_3000_ = v___y_3019_;
v___y_3001_ = v___y_3018_;
v___y_3002_ = v___y_3021_;
goto v___jp_2996_;
}
}
v___jp_3034_:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v_steps_3039_; lean_object* v___x_3040_; uint8_t v___x_3041_; 
v___x_3036_ = lean_box(0);
lean_inc(v___y_3035_);
v___x_3037_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3037_, 0, v___y_3035_);
lean_ctor_set(v___x_3037_, 1, v___x_3036_);
lean_inc(v_ops_3032_);
lean_inc_ref(v_sp_2870_);
v___x_3038_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__0(v_sp_2870_, v___x_3037_, v_ops_3032_);
v_steps_3039_ = lean_ctor_get(v___x_3038_, 1);
lean_inc(v_steps_3039_);
lean_dec_ref(v___x_3038_);
v___x_3040_ = ((lean_object*)(lp_choreo_Choreo_buildProgram___redArg___closed__1));
v___x_3041_ = lean_string_dec_eq(v_transform_3033_, v___x_3040_);
if (v___x_3041_ == 0)
{
lean_object* v___x_3042_; 
v___x_3042_ = lp_choreo_Choreo_applyTransform(v_sp_2870_, v_transform_3033_, v_steps_3039_);
v___y_3014_ = v_gap_3028_;
v___y_3015_ = v_bpm_3027_;
v___y_3016_ = v_genre_3029_;
v___y_3017_ = v___x_3036_;
v___y_3018_ = v___y_3035_;
v___y_3019_ = v_n_3026_;
v___y_3020_ = v_transform_3033_;
v___y_3021_ = v___x_3042_;
goto v___jp_3013_;
}
else
{
lean_object* v___x_3043_; 
v___x_3043_ = lp_choreo_Choreo_reverseSteps(v_sp_2870_, v_steps_3039_);
v___y_3014_ = v_gap_3028_;
v___y_3015_ = v_bpm_3027_;
v___y_3016_ = v_genre_3029_;
v___y_3017_ = v___x_3036_;
v___y_3018_ = v___y_3035_;
v___y_3019_ = v_n_3026_;
v___y_3020_ = v_transform_3033_;
v___y_3021_ = v___x_3043_;
goto v___jp_3013_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram(lean_object* v_sp_3046_, lean_object* v___names_3047_){
_start:
{
lean_object* v___x_3048_; 
v___x_3048_ = lp_choreo_Choreo_buildProgram___redArg(v_sp_3046_);
return v___x_3048_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___boxed(lean_object* v_sp_3049_, lean_object* v___names_3050_){
_start:
{
lean_object* v_res_3051_; 
v_res_3051_ = lp_choreo_Choreo_buildProgram(v_sp_3049_, v___names_3050_);
lean_dec_ref(v___names_3050_);
return v_res_3051_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(lean_object* v_a_3052_, lean_object* v_a_3053_){
_start:
{
if (lean_obj_tag(v_a_3052_) == 0)
{
lean_object* v___x_3054_; 
v___x_3054_ = lean_array_to_list(v_a_3053_);
return v___x_3054_;
}
else
{
lean_object* v_head_3055_; 
v_head_3055_ = lean_ctor_get(v_a_3052_, 0);
if (lean_obj_tag(v_head_3055_) == 4)
{
lean_object* v_tail_3056_; lean_object* v___x_3058_; uint8_t v_isShared_3059_; uint8_t v_isSharedCheck_3080_; 
lean_inc_ref(v_head_3055_);
v_tail_3056_ = lean_ctor_get(v_a_3052_, 1);
v_isSharedCheck_3080_ = !lean_is_exclusive(v_a_3052_);
if (v_isSharedCheck_3080_ == 0)
{
lean_object* v_unused_3081_; 
v_unused_3081_ = lean_ctor_get(v_a_3052_, 0);
lean_dec(v_unused_3081_);
v___x_3058_ = v_a_3052_;
v_isShared_3059_ = v_isSharedCheck_3080_;
goto v_resetjp_3057_;
}
else
{
lean_inc(v_tail_3056_);
lean_dec(v_a_3052_);
v___x_3058_ = lean_box(0);
v_isShared_3059_ = v_isSharedCheck_3080_;
goto v_resetjp_3057_;
}
v_resetjp_3057_:
{
lean_object* v_elems_3060_; lean_object* v___x_3061_; lean_object* v___x_3062_; uint8_t v___x_3063_; 
v_elems_3060_ = lean_ctor_get(v_head_3055_, 0);
lean_inc_ref(v_elems_3060_);
lean_dec_ref_known(v_head_3055_, 1);
v___x_3061_ = lean_array_get_size(v_elems_3060_);
v___x_3062_ = lean_unsigned_to_nat(2u);
v___x_3063_ = lean_nat_dec_eq(v___x_3061_, v___x_3062_);
if (v___x_3063_ == 0)
{
lean_dec_ref(v_elems_3060_);
lean_del_object(v___x_3058_);
v_a_3052_ = v_tail_3056_;
goto _start;
}
else
{
lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; 
v___x_3065_ = lean_unsigned_to_nat(0u);
v___x_3066_ = lean_array_fget_borrowed(v_elems_3060_, v___x_3065_);
lean_inc(v___x_3066_);
v___x_3067_ = l_Lean_Json_getInt_x3f(v___x_3066_);
if (lean_obj_tag(v___x_3067_) == 1)
{
lean_object* v_a_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; 
v_a_3068_ = lean_ctor_get(v___x_3067_, 0);
lean_inc(v_a_3068_);
lean_dec_ref_known(v___x_3067_, 1);
v___x_3069_ = lean_unsigned_to_nat(1u);
v___x_3070_ = lean_array_fget(v_elems_3060_, v___x_3069_);
lean_dec_ref(v_elems_3060_);
v___x_3071_ = l_Lean_Json_getInt_x3f(v___x_3070_);
if (lean_obj_tag(v___x_3071_) == 1)
{
lean_object* v_a_3072_; lean_object* v___x_3074_; 
v_a_3072_ = lean_ctor_get(v___x_3071_, 0);
lean_inc(v_a_3072_);
lean_dec_ref_known(v___x_3071_, 1);
if (v_isShared_3059_ == 0)
{
lean_ctor_set_tag(v___x_3058_, 0);
lean_ctor_set(v___x_3058_, 1, v_a_3072_);
lean_ctor_set(v___x_3058_, 0, v_a_3068_);
v___x_3074_ = v___x_3058_;
goto v_reusejp_3073_;
}
else
{
lean_object* v_reuseFailAlloc_3077_; 
v_reuseFailAlloc_3077_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3077_, 0, v_a_3068_);
lean_ctor_set(v_reuseFailAlloc_3077_, 1, v_a_3072_);
v___x_3074_ = v_reuseFailAlloc_3077_;
goto v_reusejp_3073_;
}
v_reusejp_3073_:
{
lean_object* v___x_3075_; 
v___x_3075_ = lean_array_push(v_a_3053_, v___x_3074_);
v_a_3052_ = v_tail_3056_;
v_a_3053_ = v___x_3075_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_3071_);
lean_dec(v_a_3068_);
lean_del_object(v___x_3058_);
v_a_3052_ = v_tail_3056_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_3067_);
lean_dec_ref(v_elems_3060_);
lean_del_object(v___x_3058_);
v_a_3052_ = v_tail_3056_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_3082_; 
v_tail_3082_ = lean_ctor_get(v_a_3052_, 1);
lean_inc(v_tail_3082_);
lean_dec_ref_known(v_a_3052_, 2);
v_a_3052_ = v_tail_3082_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jsonState(lean_object* v_j_3086_){
_start:
{
if (lean_obj_tag(v_j_3086_) == 4)
{
lean_object* v_elems_3087_; lean_object* v___x_3089_; uint8_t v_isShared_3090_; uint8_t v_isSharedCheck_3097_; 
v_elems_3087_ = lean_ctor_get(v_j_3086_, 0);
v_isSharedCheck_3097_ = !lean_is_exclusive(v_j_3086_);
if (v_isSharedCheck_3097_ == 0)
{
v___x_3089_ = v_j_3086_;
v_isShared_3090_ = v_isSharedCheck_3097_;
goto v_resetjp_3088_;
}
else
{
lean_inc(v_elems_3087_);
lean_dec(v_j_3086_);
v___x_3089_ = lean_box(0);
v_isShared_3090_ = v_isSharedCheck_3097_;
goto v_resetjp_3088_;
}
v_resetjp_3088_:
{
lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3095_; 
v___x_3091_ = lean_array_to_list(v_elems_3087_);
v___x_3092_ = ((lean_object*)(lp_choreo_Choreo_jsonState___closed__0));
v___x_3093_ = lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(v___x_3091_, v___x_3092_);
if (v_isShared_3090_ == 0)
{
lean_ctor_set_tag(v___x_3089_, 1);
lean_ctor_set(v___x_3089_, 0, v___x_3093_);
v___x_3095_ = v___x_3089_;
goto v_reusejp_3094_;
}
else
{
lean_object* v_reuseFailAlloc_3096_; 
v_reuseFailAlloc_3096_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3096_, 0, v___x_3093_);
v___x_3095_ = v_reuseFailAlloc_3096_;
goto v_reusejp_3094_;
}
v_reusejp_3094_:
{
return v___x_3095_;
}
}
}
else
{
lean_object* v___x_3098_; 
lean_dec(v_j_3086_);
v___x_3098_ = lean_box(0);
return v___x_3098_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(lean_object* v_j_3099_, lean_object* v_k_3100_){
_start:
{
lean_object* v___x_3101_; lean_object* v___x_3102_; 
v___x_3101_ = l_Lean_Json_getObjValD(v_j_3099_, v_k_3100_);
v___x_3102_ = l_Lean_Json_getStr_x3f(v___x_3101_);
return v___x_3102_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0___boxed(lean_object* v_j_3103_, lean_object* v_k_3104_){
_start:
{
lean_object* v_res_3105_; 
v_res_3105_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_j_3103_, v_k_3104_);
lean_dec_ref(v_k_3104_);
return v_res_3105_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(lean_object* v_j_3106_, lean_object* v_k_3107_){
_start:
{
lean_object* v___x_3108_; lean_object* v___x_3109_; 
v___x_3108_ = l_Lean_Json_getObjValD(v_j_3106_, v_k_3107_);
v___x_3109_ = l_Lean_Json_getNat_x3f(v___x_3108_);
return v___x_3109_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1___boxed(lean_object* v_j_3110_, lean_object* v_k_3111_){
_start:
{
lean_object* v_res_3112_; 
v_res_3112_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_j_3110_, v_k_3111_);
lean_dec_ref(v_k_3111_);
return v_res_3112_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(lean_object* v_j_3113_, lean_object* v_k_3114_){
_start:
{
lean_object* v___x_3115_; lean_object* v___x_3116_; 
v___x_3115_ = l_Lean_Json_getObjValD(v_j_3113_, v_k_3114_);
v___x_3116_ = l_Lean_Json_getInt_x3f(v___x_3115_);
return v___x_3116_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2___boxed(lean_object* v_j_3117_, lean_object* v_k_3118_){
_start:
{
lean_object* v_res_3119_; 
v_res_3119_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_j_3117_, v_k_3118_);
lean_dec_ref(v_k_3118_);
return v_res_3119_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(lean_object* v_j_3120_, lean_object* v_k_3121_){
_start:
{
lean_object* v___x_3122_; lean_object* v___x_3123_; 
v___x_3122_ = l_Lean_Json_getObjValD(v_j_3120_, v_k_3121_);
v___x_3123_ = l_Lean_Json_getBool_x3f(v___x_3122_);
lean_dec(v___x_3122_);
return v___x_3123_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3___boxed(lean_object* v_j_3124_, lean_object* v_k_3125_){
_start:
{
lean_object* v_res_3126_; 
v_res_3126_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_j_3124_, v_k_3125_);
lean_dec_ref(v_k_3125_);
return v_res_3126_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4(lean_object* v_next_3128_, lean_object* v_snd_3129_, lean_object* v_fst_3130_, lean_object* v_a_3131_, lean_object* v_a_3132_){
_start:
{
if (lean_obj_tag(v_a_3131_) == 0)
{
lean_object* v___x_3133_; 
lean_dec(v_fst_3130_);
lean_dec(v_snd_3129_);
lean_dec_ref(v_next_3128_);
v___x_3133_ = l_List_reverse___redArg(v_a_3132_);
return v___x_3133_;
}
else
{
lean_object* v_head_3134_; lean_object* v_tail_3135_; lean_object* v___x_3137_; uint8_t v_isShared_3138_; uint8_t v_isSharedCheck_3176_; 
v_head_3134_ = lean_ctor_get(v_a_3131_, 0);
v_tail_3135_ = lean_ctor_get(v_a_3131_, 1);
v_isSharedCheck_3176_ = !lean_is_exclusive(v_a_3131_);
if (v_isSharedCheck_3176_ == 0)
{
v___x_3137_ = v_a_3131_;
v_isShared_3138_ = v_isSharedCheck_3176_;
goto v_resetjp_3136_;
}
else
{
lean_inc(v_tail_3135_);
lean_inc(v_head_3134_);
lean_dec(v_a_3131_);
v___x_3137_ = lean_box(0);
v_isShared_3138_ = v_isSharedCheck_3176_;
goto v_resetjp_3136_;
}
v_resetjp_3136_:
{
lean_object* v___y_3140_; lean_object* v_kind_3145_; lean_object* v_section_x27_3146_; lean_object* v_title_3147_; lean_object* v_shape_3148_; lean_object* v_counts_3149_; lean_object* v_quarters_3150_; uint8_t v_ccw_3151_; lean_object* v_dx_3152_; lean_object* v_dy_3153_; lean_object* v_num_3154_; lean_object* v_den_3155_; lean_object* v_step_3156_; lean_object* v_places_3157_; lean_object* v_line_3158_; lean_object* v_leftShape_3159_; lean_object* v_rightShape_3160_; lean_object* v___x_3162_; uint8_t v_isShared_3163_; uint8_t v_isSharedCheck_3174_; 
v_kind_3145_ = lean_ctor_get(v_head_3134_, 0);
v_section_x27_3146_ = lean_ctor_get(v_head_3134_, 1);
v_title_3147_ = lean_ctor_get(v_head_3134_, 2);
v_shape_3148_ = lean_ctor_get(v_head_3134_, 3);
v_counts_3149_ = lean_ctor_get(v_head_3134_, 4);
v_quarters_3150_ = lean_ctor_get(v_head_3134_, 5);
v_ccw_3151_ = lean_ctor_get_uint8(v_head_3134_, sizeof(void*)*16);
v_dx_3152_ = lean_ctor_get(v_head_3134_, 6);
v_dy_3153_ = lean_ctor_get(v_head_3134_, 7);
v_num_3154_ = lean_ctor_get(v_head_3134_, 8);
v_den_3155_ = lean_ctor_get(v_head_3134_, 9);
v_step_3156_ = lean_ctor_get(v_head_3134_, 10);
v_places_3157_ = lean_ctor_get(v_head_3134_, 11);
v_line_3158_ = lean_ctor_get(v_head_3134_, 12);
v_leftShape_3159_ = lean_ctor_get(v_head_3134_, 13);
v_rightShape_3160_ = lean_ctor_get(v_head_3134_, 14);
v_isSharedCheck_3174_ = !lean_is_exclusive(v_head_3134_);
if (v_isSharedCheck_3174_ == 0)
{
lean_object* v_unused_3175_; 
v_unused_3175_ = lean_ctor_get(v_head_3134_, 15);
lean_dec(v_unused_3175_);
v___x_3162_ = v_head_3134_;
v_isShared_3163_ = v_isSharedCheck_3174_;
goto v_resetjp_3161_;
}
else
{
lean_inc(v_rightShape_3160_);
lean_inc(v_leftShape_3159_);
lean_inc(v_line_3158_);
lean_inc(v_places_3157_);
lean_inc(v_step_3156_);
lean_inc(v_den_3155_);
lean_inc(v_num_3154_);
lean_inc(v_dy_3153_);
lean_inc(v_dx_3152_);
lean_inc(v_quarters_3150_);
lean_inc(v_counts_3149_);
lean_inc(v_shape_3148_);
lean_inc(v_title_3147_);
lean_inc(v_section_x27_3146_);
lean_inc(v_kind_3145_);
lean_dec(v_head_3134_);
v___x_3162_ = lean_box(0);
v_isShared_3163_ = v_isSharedCheck_3174_;
goto v_resetjp_3161_;
}
v___jp_3139_:
{
lean_object* v___x_3142_; 
if (v_isShared_3138_ == 0)
{
lean_ctor_set(v___x_3137_, 1, v_a_3132_);
lean_ctor_set(v___x_3137_, 0, v___y_3140_);
v___x_3142_ = v___x_3137_;
goto v_reusejp_3141_;
}
else
{
lean_object* v_reuseFailAlloc_3144_; 
v_reuseFailAlloc_3144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3144_, 0, v___y_3140_);
lean_ctor_set(v_reuseFailAlloc_3144_, 1, v_a_3132_);
v___x_3142_ = v_reuseFailAlloc_3144_;
goto v_reusejp_3141_;
}
v_reusejp_3141_:
{
v_a_3131_ = v_tail_3135_;
v_a_3132_ = v___x_3142_;
goto _start;
}
}
v_resetjp_3161_:
{
lean_object* v___x_3164_; lean_object* v___x_3165_; 
v___x_3164_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc(v_fst_3130_);
v___x_3165_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_3130_, v___x_3164_);
if (lean_obj_tag(v___x_3165_) == 0)
{
lean_object* v___x_3166_; lean_object* v___x_3168_; 
lean_dec_ref_known(v___x_3165_, 1);
lean_inc_ref(v_next_3128_);
lean_inc(v_snd_3129_);
v___x_3166_ = lean_apply_1(v_next_3128_, v_snd_3129_);
if (v_isShared_3163_ == 0)
{
lean_ctor_set(v___x_3162_, 15, v___x_3166_);
v___x_3168_ = v___x_3162_;
goto v_reusejp_3167_;
}
else
{
lean_object* v_reuseFailAlloc_3169_; 
v_reuseFailAlloc_3169_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3169_, 0, v_kind_3145_);
lean_ctor_set(v_reuseFailAlloc_3169_, 1, v_section_x27_3146_);
lean_ctor_set(v_reuseFailAlloc_3169_, 2, v_title_3147_);
lean_ctor_set(v_reuseFailAlloc_3169_, 3, v_shape_3148_);
lean_ctor_set(v_reuseFailAlloc_3169_, 4, v_counts_3149_);
lean_ctor_set(v_reuseFailAlloc_3169_, 5, v_quarters_3150_);
lean_ctor_set(v_reuseFailAlloc_3169_, 6, v_dx_3152_);
lean_ctor_set(v_reuseFailAlloc_3169_, 7, v_dy_3153_);
lean_ctor_set(v_reuseFailAlloc_3169_, 8, v_num_3154_);
lean_ctor_set(v_reuseFailAlloc_3169_, 9, v_den_3155_);
lean_ctor_set(v_reuseFailAlloc_3169_, 10, v_step_3156_);
lean_ctor_set(v_reuseFailAlloc_3169_, 11, v_places_3157_);
lean_ctor_set(v_reuseFailAlloc_3169_, 12, v_line_3158_);
lean_ctor_set(v_reuseFailAlloc_3169_, 13, v_leftShape_3159_);
lean_ctor_set(v_reuseFailAlloc_3169_, 14, v_rightShape_3160_);
lean_ctor_set(v_reuseFailAlloc_3169_, 15, v___x_3166_);
lean_ctor_set_uint8(v_reuseFailAlloc_3169_, sizeof(void*)*16, v_ccw_3151_);
v___x_3168_ = v_reuseFailAlloc_3169_;
goto v_reusejp_3167_;
}
v_reusejp_3167_:
{
v___y_3140_ = v___x_3168_;
goto v___jp_3139_;
}
}
else
{
lean_object* v_a_3170_; lean_object* v___x_3172_; 
v_a_3170_ = lean_ctor_get(v___x_3165_, 0);
lean_inc(v_a_3170_);
lean_dec_ref_known(v___x_3165_, 1);
if (v_isShared_3163_ == 0)
{
lean_ctor_set(v___x_3162_, 15, v_a_3170_);
v___x_3172_ = v___x_3162_;
goto v_reusejp_3171_;
}
else
{
lean_object* v_reuseFailAlloc_3173_; 
v_reuseFailAlloc_3173_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3173_, 0, v_kind_3145_);
lean_ctor_set(v_reuseFailAlloc_3173_, 1, v_section_x27_3146_);
lean_ctor_set(v_reuseFailAlloc_3173_, 2, v_title_3147_);
lean_ctor_set(v_reuseFailAlloc_3173_, 3, v_shape_3148_);
lean_ctor_set(v_reuseFailAlloc_3173_, 4, v_counts_3149_);
lean_ctor_set(v_reuseFailAlloc_3173_, 5, v_quarters_3150_);
lean_ctor_set(v_reuseFailAlloc_3173_, 6, v_dx_3152_);
lean_ctor_set(v_reuseFailAlloc_3173_, 7, v_dy_3153_);
lean_ctor_set(v_reuseFailAlloc_3173_, 8, v_num_3154_);
lean_ctor_set(v_reuseFailAlloc_3173_, 9, v_den_3155_);
lean_ctor_set(v_reuseFailAlloc_3173_, 10, v_step_3156_);
lean_ctor_set(v_reuseFailAlloc_3173_, 11, v_places_3157_);
lean_ctor_set(v_reuseFailAlloc_3173_, 12, v_line_3158_);
lean_ctor_set(v_reuseFailAlloc_3173_, 13, v_leftShape_3159_);
lean_ctor_set(v_reuseFailAlloc_3173_, 14, v_rightShape_3160_);
lean_ctor_set(v_reuseFailAlloc_3173_, 15, v_a_3170_);
lean_ctor_set_uint8(v_reuseFailAlloc_3173_, sizeof(void*)*16, v_ccw_3151_);
v___x_3172_ = v_reuseFailAlloc_3173_;
goto v_reusejp_3171_;
}
v_reusejp_3171_:
{
v___y_3140_ = v___x_3172_;
goto v___jp_3139_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_readOps_spec__4(lean_object* v_next_3177_, lean_object* v_snd_3178_, lean_object* v_fst_3179_, lean_object* v_a_3180_, lean_object* v_a_3181_){
_start:
{
if (lean_obj_tag(v_a_3180_) == 0)
{
lean_object* v___x_3182_; 
lean_dec(v_fst_3179_);
lean_dec(v_snd_3178_);
lean_dec_ref(v_next_3177_);
v___x_3182_ = l_List_reverse___redArg(v_a_3181_);
return v___x_3182_;
}
else
{
lean_object* v_head_3183_; lean_object* v_tail_3184_; lean_object* v___x_3186_; uint8_t v_isShared_3187_; uint8_t v_isSharedCheck_3225_; 
v_head_3183_ = lean_ctor_get(v_a_3180_, 0);
v_tail_3184_ = lean_ctor_get(v_a_3180_, 1);
v_isSharedCheck_3225_ = !lean_is_exclusive(v_a_3180_);
if (v_isSharedCheck_3225_ == 0)
{
v___x_3186_ = v_a_3180_;
v_isShared_3187_ = v_isSharedCheck_3225_;
goto v_resetjp_3185_;
}
else
{
lean_inc(v_tail_3184_);
lean_inc(v_head_3183_);
lean_dec(v_a_3180_);
v___x_3186_ = lean_box(0);
v_isShared_3187_ = v_isSharedCheck_3225_;
goto v_resetjp_3185_;
}
v_resetjp_3185_:
{
lean_object* v___y_3189_; lean_object* v_kind_3194_; lean_object* v_section_x27_3195_; lean_object* v_title_3196_; lean_object* v_shape_3197_; lean_object* v_counts_3198_; lean_object* v_quarters_3199_; uint8_t v_ccw_3200_; lean_object* v_dx_3201_; lean_object* v_dy_3202_; lean_object* v_num_3203_; lean_object* v_den_3204_; lean_object* v_step_3205_; lean_object* v_places_3206_; lean_object* v_line_3207_; lean_object* v_leftShape_3208_; lean_object* v_rightShape_3209_; lean_object* v___x_3211_; uint8_t v_isShared_3212_; uint8_t v_isSharedCheck_3223_; 
v_kind_3194_ = lean_ctor_get(v_head_3183_, 0);
v_section_x27_3195_ = lean_ctor_get(v_head_3183_, 1);
v_title_3196_ = lean_ctor_get(v_head_3183_, 2);
v_shape_3197_ = lean_ctor_get(v_head_3183_, 3);
v_counts_3198_ = lean_ctor_get(v_head_3183_, 4);
v_quarters_3199_ = lean_ctor_get(v_head_3183_, 5);
v_ccw_3200_ = lean_ctor_get_uint8(v_head_3183_, sizeof(void*)*16);
v_dx_3201_ = lean_ctor_get(v_head_3183_, 6);
v_dy_3202_ = lean_ctor_get(v_head_3183_, 7);
v_num_3203_ = lean_ctor_get(v_head_3183_, 8);
v_den_3204_ = lean_ctor_get(v_head_3183_, 9);
v_step_3205_ = lean_ctor_get(v_head_3183_, 10);
v_places_3206_ = lean_ctor_get(v_head_3183_, 11);
v_line_3207_ = lean_ctor_get(v_head_3183_, 12);
v_leftShape_3208_ = lean_ctor_get(v_head_3183_, 13);
v_rightShape_3209_ = lean_ctor_get(v_head_3183_, 14);
v_isSharedCheck_3223_ = !lean_is_exclusive(v_head_3183_);
if (v_isSharedCheck_3223_ == 0)
{
lean_object* v_unused_3224_; 
v_unused_3224_ = lean_ctor_get(v_head_3183_, 15);
lean_dec(v_unused_3224_);
v___x_3211_ = v_head_3183_;
v_isShared_3212_ = v_isSharedCheck_3223_;
goto v_resetjp_3210_;
}
else
{
lean_inc(v_rightShape_3209_);
lean_inc(v_leftShape_3208_);
lean_inc(v_line_3207_);
lean_inc(v_places_3206_);
lean_inc(v_step_3205_);
lean_inc(v_den_3204_);
lean_inc(v_num_3203_);
lean_inc(v_dy_3202_);
lean_inc(v_dx_3201_);
lean_inc(v_quarters_3199_);
lean_inc(v_counts_3198_);
lean_inc(v_shape_3197_);
lean_inc(v_title_3196_);
lean_inc(v_section_x27_3195_);
lean_inc(v_kind_3194_);
lean_dec(v_head_3183_);
v___x_3211_ = lean_box(0);
v_isShared_3212_ = v_isSharedCheck_3223_;
goto v_resetjp_3210_;
}
v___jp_3188_:
{
lean_object* v___x_3191_; 
if (v_isShared_3187_ == 0)
{
lean_ctor_set(v___x_3186_, 1, v_a_3181_);
lean_ctor_set(v___x_3186_, 0, v___y_3189_);
v___x_3191_ = v___x_3186_;
goto v_reusejp_3190_;
}
else
{
lean_object* v_reuseFailAlloc_3193_; 
v_reuseFailAlloc_3193_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3193_, 0, v___y_3189_);
lean_ctor_set(v_reuseFailAlloc_3193_, 1, v_a_3181_);
v___x_3191_ = v_reuseFailAlloc_3193_;
goto v_reusejp_3190_;
}
v_reusejp_3190_:
{
lean_object* v___x_3192_; 
v___x_3192_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4(v_next_3177_, v_snd_3178_, v_fst_3179_, v_tail_3184_, v___x_3191_);
return v___x_3192_;
}
}
v_resetjp_3210_:
{
lean_object* v___x_3213_; lean_object* v___x_3214_; 
v___x_3213_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc(v_fst_3179_);
v___x_3214_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_3179_, v___x_3213_);
if (lean_obj_tag(v___x_3214_) == 0)
{
lean_object* v___x_3215_; lean_object* v___x_3217_; 
lean_dec_ref_known(v___x_3214_, 1);
lean_inc_ref(v_next_3177_);
lean_inc(v_snd_3178_);
v___x_3215_ = lean_apply_1(v_next_3177_, v_snd_3178_);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 15, v___x_3215_);
v___x_3217_ = v___x_3211_;
goto v_reusejp_3216_;
}
else
{
lean_object* v_reuseFailAlloc_3218_; 
v_reuseFailAlloc_3218_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3218_, 0, v_kind_3194_);
lean_ctor_set(v_reuseFailAlloc_3218_, 1, v_section_x27_3195_);
lean_ctor_set(v_reuseFailAlloc_3218_, 2, v_title_3196_);
lean_ctor_set(v_reuseFailAlloc_3218_, 3, v_shape_3197_);
lean_ctor_set(v_reuseFailAlloc_3218_, 4, v_counts_3198_);
lean_ctor_set(v_reuseFailAlloc_3218_, 5, v_quarters_3199_);
lean_ctor_set(v_reuseFailAlloc_3218_, 6, v_dx_3201_);
lean_ctor_set(v_reuseFailAlloc_3218_, 7, v_dy_3202_);
lean_ctor_set(v_reuseFailAlloc_3218_, 8, v_num_3203_);
lean_ctor_set(v_reuseFailAlloc_3218_, 9, v_den_3204_);
lean_ctor_set(v_reuseFailAlloc_3218_, 10, v_step_3205_);
lean_ctor_set(v_reuseFailAlloc_3218_, 11, v_places_3206_);
lean_ctor_set(v_reuseFailAlloc_3218_, 12, v_line_3207_);
lean_ctor_set(v_reuseFailAlloc_3218_, 13, v_leftShape_3208_);
lean_ctor_set(v_reuseFailAlloc_3218_, 14, v_rightShape_3209_);
lean_ctor_set(v_reuseFailAlloc_3218_, 15, v___x_3215_);
lean_ctor_set_uint8(v_reuseFailAlloc_3218_, sizeof(void*)*16, v_ccw_3200_);
v___x_3217_ = v_reuseFailAlloc_3218_;
goto v_reusejp_3216_;
}
v_reusejp_3216_:
{
v___y_3189_ = v___x_3217_;
goto v___jp_3188_;
}
}
else
{
lean_object* v_a_3219_; lean_object* v___x_3221_; 
v_a_3219_ = lean_ctor_get(v___x_3214_, 0);
lean_inc(v_a_3219_);
lean_dec_ref_known(v___x_3214_, 1);
if (v_isShared_3212_ == 0)
{
lean_ctor_set(v___x_3211_, 15, v_a_3219_);
v___x_3221_ = v___x_3211_;
goto v_reusejp_3220_;
}
else
{
lean_object* v_reuseFailAlloc_3222_; 
v_reuseFailAlloc_3222_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_3222_, 0, v_kind_3194_);
lean_ctor_set(v_reuseFailAlloc_3222_, 1, v_section_x27_3195_);
lean_ctor_set(v_reuseFailAlloc_3222_, 2, v_title_3196_);
lean_ctor_set(v_reuseFailAlloc_3222_, 3, v_shape_3197_);
lean_ctor_set(v_reuseFailAlloc_3222_, 4, v_counts_3198_);
lean_ctor_set(v_reuseFailAlloc_3222_, 5, v_quarters_3199_);
lean_ctor_set(v_reuseFailAlloc_3222_, 6, v_dx_3201_);
lean_ctor_set(v_reuseFailAlloc_3222_, 7, v_dy_3202_);
lean_ctor_set(v_reuseFailAlloc_3222_, 8, v_num_3203_);
lean_ctor_set(v_reuseFailAlloc_3222_, 9, v_den_3204_);
lean_ctor_set(v_reuseFailAlloc_3222_, 10, v_step_3205_);
lean_ctor_set(v_reuseFailAlloc_3222_, 11, v_places_3206_);
lean_ctor_set(v_reuseFailAlloc_3222_, 12, v_line_3207_);
lean_ctor_set(v_reuseFailAlloc_3222_, 13, v_leftShape_3208_);
lean_ctor_set(v_reuseFailAlloc_3222_, 14, v_rightShape_3209_);
lean_ctor_set(v_reuseFailAlloc_3222_, 15, v_a_3219_);
lean_ctor_set_uint8(v_reuseFailAlloc_3222_, sizeof(void*)*16, v_ccw_3200_);
v___x_3221_ = v_reuseFailAlloc_3222_;
goto v_reusejp_3220_;
}
v_reusejp_3220_:
{
v___y_3189_ = v___x_3221_;
goto v___jp_3188_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(lean_object* v_next_3226_, lean_object* v_snd_3227_, lean_object* v_fst_3228_, lean_object* v___y_3229_, lean_object* v_a_3230_, lean_object* v_a_3231_){
_start:
{
if (lean_obj_tag(v_a_3230_) == 0)
{
lean_object* v___x_3232_; 
lean_dec(v___y_3229_);
lean_dec(v_fst_3228_);
lean_dec(v_snd_3227_);
lean_dec_ref(v_next_3226_);
v___x_3232_ = lean_array_to_list(v_a_3231_);
return v___x_3232_;
}
else
{
lean_object* v_tail_3233_; lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v___x_3236_; 
v_tail_3233_ = lean_ctor_get(v_a_3230_, 1);
v___x_3234_ = lean_box(0);
lean_inc(v___y_3229_);
lean_inc(v_fst_3228_);
lean_inc(v_snd_3227_);
lean_inc_ref(v_next_3226_);
v___x_3235_ = lp_choreo_List_mapTR_loop___at___00Choreo_readOps_spec__4(v_next_3226_, v_snd_3227_, v_fst_3228_, v___y_3229_, v___x_3234_);
v___x_3236_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3231_, v___x_3235_);
v_a_3230_ = v_tail_3233_;
v_a_3231_ = v___x_3236_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5___boxed(lean_object* v_next_3238_, lean_object* v_snd_3239_, lean_object* v_fst_3240_, lean_object* v___y_3241_, lean_object* v_a_3242_, lean_object* v_a_3243_){
_start:
{
lean_object* v_res_3244_; 
v_res_3244_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3238_, v_snd_3239_, v_fst_3240_, v___y_3241_, v_a_3242_, v_a_3243_);
lean_dec(v_a_3242_);
return v_res_3244_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(lean_object* v_fst_3245_, lean_object* v_f_3246_, lean_object* v_d_3247_){
_start:
{
lean_object* v___x_3248_; 
v___x_3248_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_fst_3245_, v_f_3246_);
if (lean_obj_tag(v___x_3248_) == 0)
{
lean_dec_ref_known(v___x_3248_, 1);
lean_inc_ref(v_d_3247_);
return v_d_3247_;
}
else
{
lean_object* v_a_3249_; 
v_a_3249_ = lean_ctor_get(v___x_3248_, 0);
lean_inc(v_a_3249_);
lean_dec_ref_known(v___x_3248_, 1);
return v_a_3249_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0___boxed(lean_object* v_fst_3250_, lean_object* v_f_3251_, lean_object* v_d_3252_){
_start:
{
lean_object* v_res_3253_; 
v_res_3253_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3250_, v_f_3251_, v_d_3252_);
lean_dec_ref(v_d_3252_);
lean_dec_ref(v_f_3251_);
return v_res_3253_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(lean_object* v_fst_3254_, lean_object* v_f_3255_, lean_object* v_d_3256_){
_start:
{
lean_object* v___x_3257_; 
v___x_3257_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_fst_3254_, v_f_3255_);
if (lean_obj_tag(v___x_3257_) == 0)
{
lean_dec_ref_known(v___x_3257_, 1);
lean_inc(v_d_3256_);
return v_d_3256_;
}
else
{
lean_object* v_a_3258_; 
v_a_3258_ = lean_ctor_get(v___x_3257_, 0);
lean_inc(v_a_3258_);
lean_dec_ref_known(v___x_3257_, 1);
return v_a_3258_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2___boxed(lean_object* v_fst_3259_, lean_object* v_f_3260_, lean_object* v_d_3261_){
_start:
{
lean_object* v_res_3262_; 
v_res_3262_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3259_, v_f_3260_, v_d_3261_);
lean_dec(v_d_3261_);
lean_dec_ref(v_f_3260_);
return v_res_3262_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(lean_object* v_fst_3263_, lean_object* v_f_3264_, lean_object* v_d_3265_){
_start:
{
lean_object* v___x_3266_; 
v___x_3266_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_3263_, v_f_3264_);
if (lean_obj_tag(v___x_3266_) == 0)
{
lean_dec_ref_known(v___x_3266_, 1);
lean_inc(v_d_3265_);
return v_d_3265_;
}
else
{
lean_object* v_a_3267_; 
v_a_3267_ = lean_ctor_get(v___x_3266_, 0);
lean_inc(v_a_3267_);
lean_dec_ref_known(v___x_3266_, 1);
return v_a_3267_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1___boxed(lean_object* v_fst_3268_, lean_object* v_f_3269_, lean_object* v_d_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3268_, v_f_3269_, v_d_3270_);
lean_dec(v_d_3270_);
lean_dec_ref(v_f_3269_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(lean_object* v_sectionName_3291_, lean_object* v_next_3292_, lean_object* v_a_3293_, lean_object* v_a_3294_){
_start:
{
if (lean_obj_tag(v_a_3293_) == 0)
{
lean_object* v___x_3295_; 
lean_dec_ref(v_next_3292_);
v___x_3295_ = lean_array_to_list(v_a_3294_);
return v___x_3295_;
}
else
{
lean_object* v_head_3296_; lean_object* v_tail_3297_; lean_object* v___x_3299_; uint8_t v_isShared_3300_; uint8_t v_isSharedCheck_3385_; 
v_head_3296_ = lean_ctor_get(v_a_3293_, 0);
v_tail_3297_ = lean_ctor_get(v_a_3293_, 1);
v_isSharedCheck_3385_ = !lean_is_exclusive(v_a_3293_);
if (v_isSharedCheck_3385_ == 0)
{
v___x_3299_ = v_a_3293_;
v_isShared_3300_ = v_isSharedCheck_3385_;
goto v_resetjp_3298_;
}
else
{
lean_inc(v_tail_3297_);
lean_inc(v_head_3296_);
lean_dec(v_a_3293_);
v___x_3299_ = lean_box(0);
v_isShared_3300_ = v_isSharedCheck_3385_;
goto v_resetjp_3298_;
}
v_resetjp_3298_:
{
lean_object* v___y_3302_; lean_object* v_fst_3305_; lean_object* v_snd_3306_; lean_object* v___x_3307_; lean_object* v_sec_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v_kind_3311_; lean_object* v___x_3312_; uint8_t v___x_3313_; 
v_fst_3305_ = lean_ctor_get(v_head_3296_, 0);
lean_inc_n(v_fst_3305_, 3);
v_snd_3306_ = lean_ctor_get(v_head_3296_, 1);
lean_inc(v_snd_3306_);
lean_dec(v_head_3296_);
v___x_3307_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0));
v_sec_3308_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3305_, v___x_3307_, v_sectionName_3291_);
v___x_3309_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1));
v___x_3310_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v_kind_3311_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3305_, v___x_3309_, v___x_3310_);
v___x_3312_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2));
v___x_3313_ = lean_string_dec_eq(v_kind_3311_, v___x_3312_);
if (v___x_3313_ == 0)
{
lean_object* v___x_3314_; lean_object* v___x_3315_; lean_object* v___x_3316_; lean_object* v___x_3317_; lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___y_3325_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3328_; lean_object* v___y_3329_; lean_object* v___y_3330_; uint8_t v___y_3331_; lean_object* v___y_3332_; uint8_t v___y_3349_; lean_object* v___x_3367_; lean_object* v___x_3368_; 
v___x_3314_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc_n(v_fst_3305_, 5);
v___x_3315_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3305_, v___x_3314_, v___x_3310_);
v___x_3316_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4));
v___x_3317_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3305_, v___x_3316_, v___x_3310_);
v___x_3318_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5));
v___x_3319_ = lean_unsigned_to_nat(8u);
v___x_3320_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3305_, v___x_3318_, v___x_3319_);
v___x_3321_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6));
v___x_3322_ = lean_unsigned_to_nat(1u);
v___x_3323_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3305_, v___x_3321_, v___x_3322_);
v___x_3367_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14));
v___x_3368_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_fst_3305_, v___x_3367_);
if (lean_obj_tag(v___x_3368_) == 0)
{
uint8_t v___x_3369_; 
lean_dec_ref_known(v___x_3368_, 1);
v___x_3369_ = 1;
v___y_3349_ = v___x_3369_;
goto v___jp_3348_;
}
else
{
lean_object* v_a_3370_; uint8_t v___x_3371_; 
v_a_3370_ = lean_ctor_get(v___x_3368_, 0);
lean_inc(v_a_3370_);
lean_dec_ref_known(v___x_3368_, 1);
v___x_3371_ = lean_unbox(v_a_3370_);
lean_dec(v_a_3370_);
v___y_3349_ = v___x_3371_;
goto v___jp_3348_;
}
v___jp_3324_:
{
lean_object* v___x_3333_; lean_object* v___x_3334_; lean_object* v___x_3335_; lean_object* v___x_3336_; lean_object* v___x_3337_; lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; lean_object* v___x_3341_; lean_object* v___x_3342_; lean_object* v___x_3343_; lean_object* v___x_3344_; lean_object* v___x_3346_; 
v___x_3333_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
lean_inc_n(v_fst_3305_, 3);
v___x_3334_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3305_, v___x_3333_, v___y_3330_);
v___x_3335_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7));
v___x_3336_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_3337_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3305_, v___x_3335_, v___x_3336_);
v___x_3338_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8));
v___x_3339_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3305_, v___x_3338_, v___x_3336_);
v___x_3340_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc_ref(v_next_3292_);
v___x_3341_ = lean_apply_1(v_next_3292_, v_snd_3306_);
v___x_3342_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3305_, v___x_3340_, v___x_3341_);
lean_dec(v___x_3341_);
v___x_3343_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v___x_3343_, 0, v_kind_3311_);
lean_ctor_set(v___x_3343_, 1, v_sec_3308_);
lean_ctor_set(v___x_3343_, 2, v___x_3315_);
lean_ctor_set(v___x_3343_, 3, v___x_3317_);
lean_ctor_set(v___x_3343_, 4, v___x_3320_);
lean_ctor_set(v___x_3343_, 5, v___x_3323_);
lean_ctor_set(v___x_3343_, 6, v___y_3329_);
lean_ctor_set(v___x_3343_, 7, v___y_3325_);
lean_ctor_set(v___x_3343_, 8, v___y_3327_);
lean_ctor_set(v___x_3343_, 9, v___y_3326_);
lean_ctor_set(v___x_3343_, 10, v___y_3328_);
lean_ctor_set(v___x_3343_, 11, v___y_3332_);
lean_ctor_set(v___x_3343_, 12, v___x_3334_);
lean_ctor_set(v___x_3343_, 13, v___x_3337_);
lean_ctor_set(v___x_3343_, 14, v___x_3339_);
lean_ctor_set(v___x_3343_, 15, v___x_3342_);
lean_ctor_set_uint8(v___x_3343_, sizeof(void*)*16, v___y_3331_);
v___x_3344_ = lean_box(0);
if (v_isShared_3300_ == 0)
{
lean_ctor_set(v___x_3299_, 1, v___x_3344_);
lean_ctor_set(v___x_3299_, 0, v___x_3343_);
v___x_3346_ = v___x_3299_;
goto v_reusejp_3345_;
}
else
{
lean_object* v_reuseFailAlloc_3347_; 
v_reuseFailAlloc_3347_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3347_, 0, v___x_3343_);
lean_ctor_set(v_reuseFailAlloc_3347_, 1, v___x_3344_);
v___x_3346_ = v_reuseFailAlloc_3347_;
goto v_reusejp_3345_;
}
v_reusejp_3345_:
{
v___y_3302_ = v___x_3346_;
goto v___jp_3301_;
}
}
v___jp_3348_:
{
lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; lean_object* v___x_3353_; lean_object* v___x_3354_; lean_object* v___x_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; 
v___x_3350_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9));
v___x_3351_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc_n(v_fst_3305_, 6);
v___x_3352_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3305_, v___x_3350_, v___x_3351_);
v___x_3353_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10));
v___x_3354_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3305_, v___x_3353_, v___x_3351_);
v___x_3355_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11));
v___x_3356_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_3357_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3305_, v___x_3355_, v___x_3356_);
v___x_3358_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12));
v___x_3359_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3305_, v___x_3358_, v___x_3356_);
v___x_3360_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_3361_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3305_, v___x_3360_, v___x_3310_);
v___x_3362_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13));
v___x_3363_ = l_Lean_Json_getObjVal_x3f(v_fst_3305_, v___x_3362_);
if (lean_obj_tag(v___x_3363_) == 0)
{
lean_object* v___x_3364_; 
lean_dec_ref_known(v___x_3363_, 1);
v___x_3364_ = lean_box(0);
v___y_3325_ = v___x_3354_;
v___y_3326_ = v___x_3359_;
v___y_3327_ = v___x_3357_;
v___y_3328_ = v___x_3361_;
v___y_3329_ = v___x_3352_;
v___y_3330_ = v___x_3351_;
v___y_3331_ = v___y_3349_;
v___y_3332_ = v___x_3364_;
goto v___jp_3324_;
}
else
{
lean_object* v_a_3365_; lean_object* v___x_3366_; 
v_a_3365_ = lean_ctor_get(v___x_3363_, 0);
lean_inc(v_a_3365_);
lean_dec_ref_known(v___x_3363_, 1);
v___x_3366_ = lp_choreo_Choreo_jsonState(v_a_3365_);
v___y_3325_ = v___x_3354_;
v___y_3326_ = v___x_3359_;
v___y_3327_ = v___x_3357_;
v___y_3328_ = v___x_3361_;
v___y_3329_ = v___x_3352_;
v___y_3330_ = v___x_3351_;
v___y_3331_ = v___y_3349_;
v___y_3332_ = v___x_3366_;
goto v___jp_3324_;
}
}
}
else
{
lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v_times_3374_; lean_object* v___y_3376_; lean_object* v___x_3380_; lean_object* v___x_3381_; 
lean_dec_ref(v_kind_3311_);
lean_del_object(v___x_3299_);
v___x_3372_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15));
v___x_3373_ = lean_unsigned_to_nat(2u);
lean_inc_n(v_fst_3305_, 2);
v_times_3374_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3305_, v___x_3372_, v___x_3373_);
v___x_3380_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3381_ = l_Lean_Json_getObjVal_x3f(v_fst_3305_, v___x_3380_);
if (lean_obj_tag(v___x_3381_) == 1)
{
lean_object* v_a_3382_; lean_object* v___x_3383_; 
v_a_3382_ = lean_ctor_get(v___x_3381_, 0);
lean_inc(v_a_3382_);
lean_dec_ref_known(v___x_3381_, 1);
lean_inc_ref(v_next_3292_);
v___x_3383_ = lp_choreo_Choreo_readOps(v_sec_3308_, v_next_3292_, v_a_3382_);
lean_dec_ref(v_sec_3308_);
v___y_3376_ = v___x_3383_;
goto v___jp_3375_;
}
else
{
lean_object* v___x_3384_; 
lean_dec_ref(v___x_3381_);
lean_dec_ref(v_sec_3308_);
v___x_3384_ = lean_box(0);
v___y_3376_ = v___x_3384_;
goto v___jp_3375_;
}
v___jp_3375_:
{
lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; 
v___x_3377_ = l_List_range(v_times_3374_);
v___x_3378_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
lean_inc_ref(v_next_3292_);
v___x_3379_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3292_, v_snd_3306_, v_fst_3305_, v___y_3376_, v___x_3377_, v___x_3378_);
lean_dec(v___x_3377_);
v___y_3302_ = v___x_3379_;
goto v___jp_3301_;
}
}
v___jp_3301_:
{
lean_object* v___x_3303_; 
v___x_3303_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3294_, v___y_3302_);
v_a_3293_ = v_tail_3297_;
v_a_3294_ = v___x_3303_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(lean_object* v_next_3386_, lean_object* v_sectionName_3387_, lean_object* v_a_3388_, lean_object* v_a_3389_){
_start:
{
if (lean_obj_tag(v_a_3388_) == 0)
{
lean_object* v___x_3390_; 
lean_dec_ref(v_next_3386_);
v___x_3390_ = lean_array_to_list(v_a_3389_);
return v___x_3390_;
}
else
{
lean_object* v_head_3391_; lean_object* v_tail_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3480_; 
v_head_3391_ = lean_ctor_get(v_a_3388_, 0);
v_tail_3392_ = lean_ctor_get(v_a_3388_, 1);
v_isSharedCheck_3480_ = !lean_is_exclusive(v_a_3388_);
if (v_isSharedCheck_3480_ == 0)
{
v___x_3394_ = v_a_3388_;
v_isShared_3395_ = v_isSharedCheck_3480_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_tail_3392_);
lean_inc(v_head_3391_);
lean_dec(v_a_3388_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3480_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v___y_3397_; lean_object* v_fst_3400_; lean_object* v_snd_3401_; lean_object* v___x_3402_; lean_object* v_sec_3403_; lean_object* v___x_3404_; lean_object* v___x_3405_; lean_object* v_kind_3406_; lean_object* v___x_3407_; uint8_t v___x_3408_; 
v_fst_3400_ = lean_ctor_get(v_head_3391_, 0);
lean_inc_n(v_fst_3400_, 3);
v_snd_3401_ = lean_ctor_get(v_head_3391_, 1);
lean_inc(v_snd_3401_);
lean_dec(v_head_3391_);
v___x_3402_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0));
v_sec_3403_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3400_, v___x_3402_, v_sectionName_3387_);
v___x_3404_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1));
v___x_3405_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v_kind_3406_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3400_, v___x_3404_, v___x_3405_);
v___x_3407_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2));
v___x_3408_ = lean_string_dec_eq(v_kind_3406_, v___x_3407_);
if (v___x_3408_ == 0)
{
lean_object* v___x_3409_; lean_object* v___x_3410_; lean_object* v___x_3411_; lean_object* v___x_3412_; lean_object* v___x_3413_; lean_object* v___x_3414_; lean_object* v___x_3415_; lean_object* v___x_3416_; lean_object* v___x_3417_; lean_object* v___x_3418_; lean_object* v___y_3420_; lean_object* v___y_3421_; lean_object* v___y_3422_; lean_object* v___y_3423_; lean_object* v___y_3424_; lean_object* v___y_3425_; uint8_t v___y_3426_; lean_object* v___y_3427_; uint8_t v___y_3444_; lean_object* v___x_3462_; lean_object* v___x_3463_; 
v___x_3409_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc_n(v_fst_3400_, 5);
v___x_3410_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3400_, v___x_3409_, v___x_3405_);
v___x_3411_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4));
v___x_3412_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3400_, v___x_3411_, v___x_3405_);
v___x_3413_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5));
v___x_3414_ = lean_unsigned_to_nat(8u);
v___x_3415_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3400_, v___x_3413_, v___x_3414_);
v___x_3416_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6));
v___x_3417_ = lean_unsigned_to_nat(1u);
v___x_3418_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3400_, v___x_3416_, v___x_3417_);
v___x_3462_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14));
v___x_3463_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_fst_3400_, v___x_3462_);
if (lean_obj_tag(v___x_3463_) == 0)
{
uint8_t v___x_3464_; 
lean_dec_ref_known(v___x_3463_, 1);
v___x_3464_ = 1;
v___y_3444_ = v___x_3464_;
goto v___jp_3443_;
}
else
{
lean_object* v_a_3465_; uint8_t v___x_3466_; 
v_a_3465_ = lean_ctor_get(v___x_3463_, 0);
lean_inc(v_a_3465_);
lean_dec_ref_known(v___x_3463_, 1);
v___x_3466_ = lean_unbox(v_a_3465_);
lean_dec(v_a_3465_);
v___y_3444_ = v___x_3466_;
goto v___jp_3443_;
}
v___jp_3419_:
{
lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v___x_3432_; lean_object* v___x_3433_; lean_object* v___x_3434_; lean_object* v___x_3435_; lean_object* v___x_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3441_; 
v___x_3428_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
lean_inc_n(v_fst_3400_, 3);
v___x_3429_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3400_, v___x_3428_, v___y_3424_);
v___x_3430_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7));
v___x_3431_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_3432_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3400_, v___x_3430_, v___x_3431_);
v___x_3433_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8));
v___x_3434_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3400_, v___x_3433_, v___x_3431_);
v___x_3435_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc_ref(v_next_3386_);
v___x_3436_ = lean_apply_1(v_next_3386_, v_snd_3401_);
v___x_3437_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3400_, v___x_3435_, v___x_3436_);
lean_dec(v___x_3436_);
v___x_3438_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v___x_3438_, 0, v_kind_3406_);
lean_ctor_set(v___x_3438_, 1, v_sec_3403_);
lean_ctor_set(v___x_3438_, 2, v___x_3410_);
lean_ctor_set(v___x_3438_, 3, v___x_3412_);
lean_ctor_set(v___x_3438_, 4, v___x_3415_);
lean_ctor_set(v___x_3438_, 5, v___x_3418_);
lean_ctor_set(v___x_3438_, 6, v___y_3422_);
lean_ctor_set(v___x_3438_, 7, v___y_3421_);
lean_ctor_set(v___x_3438_, 8, v___y_3425_);
lean_ctor_set(v___x_3438_, 9, v___y_3420_);
lean_ctor_set(v___x_3438_, 10, v___y_3423_);
lean_ctor_set(v___x_3438_, 11, v___y_3427_);
lean_ctor_set(v___x_3438_, 12, v___x_3429_);
lean_ctor_set(v___x_3438_, 13, v___x_3432_);
lean_ctor_set(v___x_3438_, 14, v___x_3434_);
lean_ctor_set(v___x_3438_, 15, v___x_3437_);
lean_ctor_set_uint8(v___x_3438_, sizeof(void*)*16, v___y_3426_);
v___x_3439_ = lean_box(0);
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 1, v___x_3439_);
lean_ctor_set(v___x_3394_, 0, v___x_3438_);
v___x_3441_ = v___x_3394_;
goto v_reusejp_3440_;
}
else
{
lean_object* v_reuseFailAlloc_3442_; 
v_reuseFailAlloc_3442_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3442_, 0, v___x_3438_);
lean_ctor_set(v_reuseFailAlloc_3442_, 1, v___x_3439_);
v___x_3441_ = v_reuseFailAlloc_3442_;
goto v_reusejp_3440_;
}
v_reusejp_3440_:
{
v___y_3397_ = v___x_3441_;
goto v___jp_3396_;
}
}
v___jp_3443_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; lean_object* v___x_3447_; lean_object* v___x_3448_; lean_object* v___x_3449_; lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; lean_object* v___x_3454_; lean_object* v___x_3455_; lean_object* v___x_3456_; lean_object* v___x_3457_; lean_object* v___x_3458_; 
v___x_3445_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9));
v___x_3446_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc_n(v_fst_3400_, 6);
v___x_3447_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3400_, v___x_3445_, v___x_3446_);
v___x_3448_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10));
v___x_3449_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3400_, v___x_3448_, v___x_3446_);
v___x_3450_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11));
v___x_3451_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_3452_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3400_, v___x_3450_, v___x_3451_);
v___x_3453_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12));
v___x_3454_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3400_, v___x_3453_, v___x_3451_);
v___x_3455_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_3456_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3400_, v___x_3455_, v___x_3405_);
v___x_3457_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13));
v___x_3458_ = l_Lean_Json_getObjVal_x3f(v_fst_3400_, v___x_3457_);
if (lean_obj_tag(v___x_3458_) == 0)
{
lean_object* v___x_3459_; 
lean_dec_ref_known(v___x_3458_, 1);
v___x_3459_ = lean_box(0);
v___y_3420_ = v___x_3454_;
v___y_3421_ = v___x_3449_;
v___y_3422_ = v___x_3447_;
v___y_3423_ = v___x_3456_;
v___y_3424_ = v___x_3446_;
v___y_3425_ = v___x_3452_;
v___y_3426_ = v___y_3444_;
v___y_3427_ = v___x_3459_;
goto v___jp_3419_;
}
else
{
lean_object* v_a_3460_; lean_object* v___x_3461_; 
v_a_3460_ = lean_ctor_get(v___x_3458_, 0);
lean_inc(v_a_3460_);
lean_dec_ref_known(v___x_3458_, 1);
v___x_3461_ = lp_choreo_Choreo_jsonState(v_a_3460_);
v___y_3420_ = v___x_3454_;
v___y_3421_ = v___x_3449_;
v___y_3422_ = v___x_3447_;
v___y_3423_ = v___x_3456_;
v___y_3424_ = v___x_3446_;
v___y_3425_ = v___x_3452_;
v___y_3426_ = v___y_3444_;
v___y_3427_ = v___x_3461_;
goto v___jp_3419_;
}
}
}
else
{
lean_object* v___x_3467_; lean_object* v___x_3468_; lean_object* v_times_3469_; lean_object* v___y_3471_; lean_object* v___x_3475_; lean_object* v___x_3476_; 
lean_dec_ref(v_kind_3406_);
lean_del_object(v___x_3394_);
v___x_3467_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15));
v___x_3468_ = lean_unsigned_to_nat(2u);
lean_inc_n(v_fst_3400_, 2);
v_times_3469_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3400_, v___x_3467_, v___x_3468_);
v___x_3475_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3476_ = l_Lean_Json_getObjVal_x3f(v_fst_3400_, v___x_3475_);
if (lean_obj_tag(v___x_3476_) == 1)
{
lean_object* v_a_3477_; lean_object* v___x_3478_; 
v_a_3477_ = lean_ctor_get(v___x_3476_, 0);
lean_inc(v_a_3477_);
lean_dec_ref_known(v___x_3476_, 1);
lean_inc_ref(v_next_3386_);
v___x_3478_ = lp_choreo_Choreo_readOps(v_sec_3403_, v_next_3386_, v_a_3477_);
lean_dec_ref(v_sec_3403_);
v___y_3471_ = v___x_3478_;
goto v___jp_3470_;
}
else
{
lean_object* v___x_3479_; 
lean_dec_ref(v___x_3476_);
lean_dec_ref(v_sec_3403_);
v___x_3479_ = lean_box(0);
v___y_3471_ = v___x_3479_;
goto v___jp_3470_;
}
v___jp_3470_:
{
lean_object* v___x_3472_; lean_object* v___x_3473_; lean_object* v___x_3474_; 
v___x_3472_ = l_List_range(v_times_3469_);
v___x_3473_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
lean_inc_ref(v_next_3386_);
v___x_3474_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3386_, v_snd_3401_, v_fst_3400_, v___y_3471_, v___x_3472_, v___x_3473_);
lean_dec(v___x_3472_);
v___y_3397_ = v___x_3474_;
goto v___jp_3396_;
}
}
v___jp_3396_:
{
lean_object* v___x_3398_; lean_object* v___x_3399_; 
v___x_3398_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3389_, v___y_3397_);
v___x_3399_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(v_sectionName_3387_, v_next_3386_, v_tail_3392_, v___x_3398_);
return v___x_3399_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps(lean_object* v_sectionName_3481_, lean_object* v_next_3482_, lean_object* v_j_3483_){
_start:
{
if (lean_obj_tag(v_j_3483_) == 4)
{
lean_object* v_elems_3484_; lean_object* v___x_3485_; lean_object* v___x_3486_; lean_object* v___x_3487_; lean_object* v___x_3488_; lean_object* v___x_3489_; 
v_elems_3484_ = lean_ctor_get(v_j_3483_, 0);
lean_inc_ref(v_elems_3484_);
lean_dec_ref_known(v_j_3483_, 1);
v___x_3485_ = lean_array_to_list(v_elems_3484_);
v___x_3486_ = lean_unsigned_to_nat(0u);
v___x_3487_ = l_List_zipIdxTR___redArg(v___x_3485_, v___x_3486_);
v___x_3488_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
v___x_3489_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(v_next_3482_, v_sectionName_3481_, v___x_3487_, v___x_3488_);
return v___x_3489_;
}
else
{
lean_object* v___x_3490_; 
lean_dec(v_j_3483_);
lean_dec_ref(v_next_3482_);
v___x_3490_ = lean_box(0);
return v___x_3490_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps___boxed(lean_object* v_sectionName_3491_, lean_object* v_next_3492_, lean_object* v_j_3493_){
_start:
{
lean_object* v_res_3494_; 
v_res_3494_ = lp_choreo_Choreo_readOps(v_sectionName_3491_, v_next_3492_, v_j_3493_);
lean_dec_ref(v_sectionName_3491_);
return v_res_3494_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___boxed(lean_object* v_next_3495_, lean_object* v_sectionName_3496_, lean_object* v_a_3497_, lean_object* v_a_3498_){
_start:
{
lean_object* v_res_3499_; 
v_res_3499_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(v_next_3495_, v_sectionName_3496_, v_a_3497_, v_a_3498_);
lean_dec_ref(v_sectionName_3496_);
return v_res_3499_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7___boxed(lean_object* v_sectionName_3500_, lean_object* v_next_3501_, lean_object* v_a_3502_, lean_object* v_a_3503_){
_start:
{
lean_object* v_res_3504_; 
v_res_3504_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(v_sectionName_3500_, v_next_3501_, v_a_3502_, v_a_3503_);
lean_dec_ref(v_sectionName_3500_);
return v_res_3504_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0(lean_object* v_snd_3505_, lean_object* v_x_3506_){
_start:
{
lean_object* v___x_3507_; 
v___x_3507_ = lean_nat_add(v_x_3506_, v_snd_3505_);
return v___x_3507_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0___boxed(lean_object* v_snd_3508_, lean_object* v_x_3509_){
_start:
{
lean_object* v_res_3510_; 
v_res_3510_ = lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0(v_snd_3508_, v_x_3509_);
lean_dec(v_x_3509_);
lean_dec(v_snd_3508_);
return v_res_3510_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0(lean_object* v_x_3516_, lean_object* v_x_3517_){
_start:
{
if (lean_obj_tag(v_x_3517_) == 0)
{
return v_x_3516_;
}
else
{
lean_object* v_head_3518_; lean_object* v_tail_3519_; lean_object* v_fst_3520_; lean_object* v_snd_3521_; lean_object* v___x_3523_; uint8_t v_isShared_3524_; uint8_t v_isSharedCheck_3552_; 
v_head_3518_ = lean_ctor_get(v_x_3517_, 0);
lean_inc(v_head_3518_);
v_tail_3519_ = lean_ctor_get(v_x_3517_, 1);
lean_inc(v_tail_3519_);
lean_dec_ref_known(v_x_3517_, 2);
v_fst_3520_ = lean_ctor_get(v_x_3516_, 0);
v_snd_3521_ = lean_ctor_get(v_x_3516_, 1);
v_isSharedCheck_3552_ = !lean_is_exclusive(v_x_3516_);
if (v_isSharedCheck_3552_ == 0)
{
v___x_3523_ = v_x_3516_;
v_isShared_3524_ = v_isSharedCheck_3552_;
goto v_resetjp_3522_;
}
else
{
lean_inc(v_snd_3521_);
lean_inc(v_fst_3520_);
lean_dec(v_x_3516_);
v___x_3523_ = lean_box(0);
v_isShared_3524_ = v_isSharedCheck_3552_;
goto v_resetjp_3522_;
}
v_resetjp_3522_:
{
lean_object* v___y_3526_; lean_object* v___y_3527_; lean_object* v___f_3533_; lean_object* v___y_3535_; lean_object* v___y_3536_; lean_object* v___y_3543_; lean_object* v___x_3548_; lean_object* v___x_3549_; 
lean_inc(v_snd_3521_);
v___f_3533_ = lean_alloc_closure((void*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3533_, 0, v_snd_3521_);
v___x_3548_ = ((lean_object*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__2));
lean_inc(v_head_3518_);
v___x_3549_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_head_3518_, v___x_3548_);
if (lean_obj_tag(v___x_3549_) == 0)
{
lean_object* v___x_3550_; 
lean_dec_ref_known(v___x_3549_, 1);
v___x_3550_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3543_ = v___x_3550_;
goto v___jp_3542_;
}
else
{
lean_object* v_a_3551_; 
v_a_3551_ = lean_ctor_get(v___x_3549_, 0);
lean_inc(v_a_3551_);
lean_dec_ref_known(v___x_3549_, 1);
v___y_3543_ = v_a_3551_;
goto v___jp_3542_;
}
v___jp_3525_:
{
lean_object* v___x_3528_; lean_object* v___x_3530_; 
v___x_3528_ = lean_nat_add(v_snd_3521_, v___y_3527_);
lean_dec(v___y_3527_);
lean_dec(v_snd_3521_);
if (v_isShared_3524_ == 0)
{
lean_ctor_set(v___x_3523_, 1, v___x_3528_);
lean_ctor_set(v___x_3523_, 0, v___y_3526_);
v___x_3530_ = v___x_3523_;
goto v_reusejp_3529_;
}
else
{
lean_object* v_reuseFailAlloc_3532_; 
v_reuseFailAlloc_3532_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3532_, 0, v___y_3526_);
lean_ctor_set(v_reuseFailAlloc_3532_, 1, v___x_3528_);
v___x_3530_ = v_reuseFailAlloc_3532_;
goto v_reusejp_3529_;
}
v_reusejp_3529_:
{
v_x_3516_ = v___x_3530_;
v_x_3517_ = v_tail_3519_;
goto _start;
}
}
v___jp_3534_:
{
lean_object* v_got_3537_; lean_object* v___x_3538_; 
lean_inc(v___y_3536_);
v_got_3537_ = lp_choreo_Choreo_readOps(v___y_3535_, v___f_3533_, v___y_3536_);
lean_dec_ref(v___y_3535_);
v___x_3538_ = l_List_appendTR___redArg(v_fst_3520_, v_got_3537_);
if (lean_obj_tag(v___y_3536_) == 4)
{
lean_object* v_elems_3539_; lean_object* v___x_3540_; 
v_elems_3539_ = lean_ctor_get(v___y_3536_, 0);
lean_inc_ref(v_elems_3539_);
lean_dec_ref_known(v___y_3536_, 1);
v___x_3540_ = lean_array_get_size(v_elems_3539_);
lean_dec_ref(v_elems_3539_);
v___y_3526_ = v___x_3538_;
v___y_3527_ = v___x_3540_;
goto v___jp_3525_;
}
else
{
lean_object* v___x_3541_; 
lean_dec(v___y_3536_);
v___x_3541_ = lean_unsigned_to_nat(0u);
v___y_3526_ = v___x_3538_;
v___y_3527_ = v___x_3541_;
goto v___jp_3525_;
}
}
v___jp_3542_:
{
lean_object* v___x_3544_; lean_object* v___x_3545_; 
v___x_3544_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3545_ = l_Lean_Json_getObjVal_x3f(v_head_3518_, v___x_3544_);
if (lean_obj_tag(v___x_3545_) == 1)
{
lean_object* v_a_3546_; 
v_a_3546_ = lean_ctor_get(v___x_3545_, 0);
lean_inc(v_a_3546_);
lean_dec_ref_known(v___x_3545_, 1);
v___y_3535_ = v___y_3543_;
v___y_3536_ = v_a_3546_;
goto v___jp_3534_;
}
else
{
lean_object* v___x_3547_; 
lean_dec_ref(v___x_3545_);
v___x_3547_ = ((lean_object*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__1));
v___y_3535_ = v___y_3543_;
v___y_3536_ = v___x_3547_;
goto v___jp_3534_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readProgram(lean_object* v_j_3565_){
_start:
{
lean_object* v___y_3567_; lean_object* v___y_3568_; lean_object* v___y_3569_; lean_object* v___y_3570_; lean_object* v___y_3571_; lean_object* v___y_3572_; lean_object* v___y_3573_; lean_object* v___y_3574_; lean_object* v___y_3575_; lean_object* v___y_3579_; lean_object* v___y_3580_; lean_object* v___y_3581_; lean_object* v___y_3582_; lean_object* v___y_3583_; lean_object* v___y_3584_; lean_object* v___y_3585_; lean_object* v___y_3586_; lean_object* v___x_3591_; lean_object* v___x_3592_; 
v___x_3591_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__1));
lean_inc(v_j_3565_);
v___x_3592_ = l_Lean_Json_getObjVal_x3f(v_j_3565_, v___x_3591_);
if (lean_obj_tag(v___x_3592_) == 1)
{
lean_object* v_a_3593_; lean_object* v___y_3595_; lean_object* v___y_3596_; lean_object* v___y_3597_; lean_object* v___y_3598_; lean_object* v___y_3599_; lean_object* v___y_3600_; lean_object* v___y_3601_; lean_object* v___y_3608_; lean_object* v___y_3609_; lean_object* v___y_3610_; lean_object* v___y_3611_; lean_object* v___y_3612_; lean_object* v___y_3613_; lean_object* v___y_3619_; lean_object* v___y_3620_; lean_object* v___y_3621_; lean_object* v___y_3622_; lean_object* v___y_3623_; lean_object* v___y_3629_; lean_object* v___y_3630_; lean_object* v___y_3631_; lean_object* v___y_3632_; lean_object* v___y_3638_; lean_object* v___y_3639_; lean_object* v___y_3640_; lean_object* v___y_3646_; lean_object* v___y_3647_; lean_object* v___y_3653_; lean_object* v___x_3663_; lean_object* v___x_3664_; 
v_a_3593_ = lean_ctor_get(v___x_3592_, 0);
lean_inc_n(v_a_3593_, 2);
lean_dec_ref_known(v___x_3592_, 1);
v___x_3663_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__9));
v___x_3664_ = l_Lean_Json_getObjVal_x3f(v_a_3593_, v___x_3663_);
if (lean_obj_tag(v___x_3664_) == 1)
{
lean_object* v_a_3665_; 
v_a_3665_ = lean_ctor_get(v___x_3664_, 0);
lean_inc(v_a_3665_);
lean_dec_ref_known(v___x_3664_, 1);
if (lean_obj_tag(v_a_3665_) == 4)
{
lean_object* v_elems_3666_; lean_object* v___x_3667_; 
v_elems_3666_ = lean_ctor_get(v_a_3665_, 0);
lean_inc_ref(v_elems_3666_);
lean_dec_ref_known(v_a_3665_, 1);
v___x_3667_ = lean_array_to_list(v_elems_3666_);
v___y_3653_ = v___x_3667_;
goto v___jp_3652_;
}
else
{
lean_dec(v_a_3665_);
goto v___jp_3661_;
}
}
else
{
lean_dec_ref(v___x_3664_);
goto v___jp_3661_;
}
v___jp_3594_:
{
lean_object* v___x_3602_; lean_object* v___x_3603_; 
v___x_3602_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__2));
v___x_3603_ = l_Lean_Json_getObjVal_x3f(v_a_3593_, v___x_3602_);
if (lean_obj_tag(v___x_3603_) == 0)
{
lean_object* v___x_3604_; 
lean_dec_ref_known(v___x_3603_, 1);
v___x_3604_ = lean_box(0);
v___y_3579_ = v___y_3595_;
v___y_3580_ = v___y_3601_;
v___y_3581_ = v___y_3596_;
v___y_3582_ = v___y_3597_;
v___y_3583_ = v___y_3598_;
v___y_3584_ = v___y_3599_;
v___y_3585_ = v___y_3600_;
v___y_3586_ = v___x_3604_;
goto v___jp_3578_;
}
else
{
lean_object* v_a_3605_; lean_object* v___x_3606_; 
v_a_3605_ = lean_ctor_get(v___x_3603_, 0);
lean_inc(v_a_3605_);
lean_dec_ref_known(v___x_3603_, 1);
v___x_3606_ = lp_choreo_Choreo_jsonState(v_a_3605_);
v___y_3579_ = v___y_3595_;
v___y_3580_ = v___y_3601_;
v___y_3581_ = v___y_3596_;
v___y_3582_ = v___y_3597_;
v___y_3583_ = v___y_3598_;
v___y_3584_ = v___y_3599_;
v___y_3585_ = v___y_3600_;
v___y_3586_ = v___x_3606_;
goto v___jp_3578_;
}
}
v___jp_3607_:
{
lean_object* v___x_3614_; lean_object* v___x_3615_; 
v___x_3614_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__3));
lean_inc(v_a_3593_);
v___x_3615_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3593_, v___x_3614_);
if (lean_obj_tag(v___x_3615_) == 0)
{
lean_object* v___x_3616_; 
lean_dec_ref_known(v___x_3615_, 1);
v___x_3616_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___y_3595_ = v___y_3608_;
v___y_3596_ = v___y_3613_;
v___y_3597_ = v___y_3609_;
v___y_3598_ = v___y_3610_;
v___y_3599_ = v___y_3611_;
v___y_3600_ = v___y_3612_;
v___y_3601_ = v___x_3616_;
goto v___jp_3594_;
}
else
{
lean_object* v_a_3617_; 
v_a_3617_ = lean_ctor_get(v___x_3615_, 0);
lean_inc(v_a_3617_);
lean_dec_ref_known(v___x_3615_, 1);
v___y_3595_ = v___y_3608_;
v___y_3596_ = v___y_3613_;
v___y_3597_ = v___y_3609_;
v___y_3598_ = v___y_3610_;
v___y_3599_ = v___y_3611_;
v___y_3600_ = v___y_3612_;
v___y_3601_ = v_a_3617_;
goto v___jp_3594_;
}
}
v___jp_3618_:
{
lean_object* v___x_3624_; lean_object* v___x_3625_; 
v___x_3624_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__4));
lean_inc(v_a_3593_);
v___x_3625_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3593_, v___x_3624_);
if (lean_obj_tag(v___x_3625_) == 0)
{
lean_object* v___x_3626_; 
lean_dec_ref_known(v___x_3625_, 1);
v___x_3626_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3608_ = v___y_3619_;
v___y_3609_ = v___y_3623_;
v___y_3610_ = v___y_3620_;
v___y_3611_ = v___y_3621_;
v___y_3612_ = v___y_3622_;
v___y_3613_ = v___x_3626_;
goto v___jp_3607_;
}
else
{
lean_object* v_a_3627_; 
v_a_3627_ = lean_ctor_get(v___x_3625_, 0);
lean_inc(v_a_3627_);
lean_dec_ref_known(v___x_3625_, 1);
v___y_3608_ = v___y_3619_;
v___y_3609_ = v___y_3623_;
v___y_3610_ = v___y_3620_;
v___y_3611_ = v___y_3621_;
v___y_3612_ = v___y_3622_;
v___y_3613_ = v_a_3627_;
goto v___jp_3607_;
}
}
v___jp_3628_:
{
lean_object* v___x_3633_; lean_object* v___x_3634_; 
v___x_3633_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__5));
lean_inc(v_a_3593_);
v___x_3634_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_a_3593_, v___x_3633_);
if (lean_obj_tag(v___x_3634_) == 0)
{
lean_object* v___x_3635_; 
lean_dec_ref_known(v___x_3634_, 1);
v___x_3635_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0, &lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0);
v___y_3619_ = v___y_3629_;
v___y_3620_ = v___y_3630_;
v___y_3621_ = v___y_3632_;
v___y_3622_ = v___y_3631_;
v___y_3623_ = v___x_3635_;
goto v___jp_3618_;
}
else
{
lean_object* v_a_3636_; 
v_a_3636_ = lean_ctor_get(v___x_3634_, 0);
lean_inc(v_a_3636_);
lean_dec_ref_known(v___x_3634_, 1);
v___y_3619_ = v___y_3629_;
v___y_3620_ = v___y_3630_;
v___y_3621_ = v___y_3632_;
v___y_3622_ = v___y_3631_;
v___y_3623_ = v_a_3636_;
goto v___jp_3618_;
}
}
v___jp_3637_:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; 
v___x_3641_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__6));
lean_inc(v_a_3593_);
v___x_3642_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_a_3593_, v___x_3641_);
if (lean_obj_tag(v___x_3642_) == 0)
{
lean_object* v___x_3643_; 
lean_dec_ref_known(v___x_3642_, 1);
v___x_3643_ = lean_unsigned_to_nat(120u);
v___y_3629_ = v___y_3640_;
v___y_3630_ = v___y_3638_;
v___y_3631_ = v___y_3639_;
v___y_3632_ = v___x_3643_;
goto v___jp_3628_;
}
else
{
lean_object* v_a_3644_; 
v_a_3644_ = lean_ctor_get(v___x_3642_, 0);
lean_inc(v_a_3644_);
lean_dec_ref_known(v___x_3642_, 1);
v___y_3629_ = v___y_3640_;
v___y_3630_ = v___y_3638_;
v___y_3631_ = v___y_3639_;
v___y_3632_ = v_a_3644_;
goto v___jp_3628_;
}
}
v___jp_3645_:
{
lean_object* v___x_3648_; lean_object* v___x_3649_; 
v___x_3648_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__7));
lean_inc(v_a_3593_);
v___x_3649_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_a_3593_, v___x_3648_);
if (lean_obj_tag(v___x_3649_) == 0)
{
lean_object* v___x_3650_; 
lean_dec_ref_known(v___x_3649_, 1);
v___x_3650_ = lean_unsigned_to_nat(8u);
v___y_3638_ = v___y_3646_;
v___y_3639_ = v___y_3647_;
v___y_3640_ = v___x_3650_;
goto v___jp_3637_;
}
else
{
lean_object* v_a_3651_; 
v_a_3651_ = lean_ctor_get(v___x_3649_, 0);
lean_inc(v_a_3651_);
lean_dec_ref_known(v___x_3649_, 1);
v___y_3638_ = v___y_3646_;
v___y_3639_ = v___y_3647_;
v___y_3640_ = v_a_3651_;
goto v___jp_3637_;
}
}
v___jp_3652_:
{
lean_object* v___x_3654_; lean_object* v___x_3655_; lean_object* v_fst_3656_; lean_object* v___x_3657_; lean_object* v___x_3658_; 
v___x_3654_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__8));
v___x_3655_ = lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0(v___x_3654_, v___y_3653_);
v_fst_3656_ = lean_ctor_get(v___x_3655_, 0);
lean_inc(v_fst_3656_);
lean_dec_ref(v___x_3655_);
v___x_3657_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc(v_a_3593_);
v___x_3658_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3593_, v___x_3657_);
if (lean_obj_tag(v___x_3658_) == 0)
{
lean_object* v___x_3659_; 
lean_dec_ref_known(v___x_3658_, 1);
v___x_3659_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3646_ = v_fst_3656_;
v___y_3647_ = v___x_3659_;
goto v___jp_3645_;
}
else
{
lean_object* v_a_3660_; 
v_a_3660_ = lean_ctor_get(v___x_3658_, 0);
lean_inc(v_a_3660_);
lean_dec_ref_known(v___x_3658_, 1);
v___y_3646_ = v_fst_3656_;
v___y_3647_ = v_a_3660_;
goto v___jp_3645_;
}
}
v___jp_3661_:
{
lean_object* v___x_3662_; 
v___x_3662_ = lean_box(0);
v___y_3653_ = v___x_3662_;
goto v___jp_3652_;
}
}
else
{
lean_object* v___x_3668_; 
lean_dec_ref(v___x_3592_);
lean_dec(v_j_3565_);
v___x_3668_ = lean_box(0);
return v___x_3668_;
}
v___jp_3566_:
{
lean_object* v___x_3576_; lean_object* v___x_3577_; 
v___x_3576_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3576_, 0, v___y_3574_);
lean_ctor_set(v___x_3576_, 1, v___y_3568_);
lean_ctor_set(v___x_3576_, 2, v___y_3573_);
lean_ctor_set(v___x_3576_, 3, v___y_3571_);
lean_ctor_set(v___x_3576_, 4, v___y_3570_);
lean_ctor_set(v___x_3576_, 5, v___y_3567_);
lean_ctor_set(v___x_3576_, 6, v___y_3569_);
lean_ctor_set(v___x_3576_, 7, v___y_3572_);
lean_ctor_set(v___x_3576_, 8, v___y_3575_);
v___x_3577_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3577_, 0, v___x_3576_);
return v___x_3577_;
}
v___jp_3578_:
{
lean_object* v___x_3587_; lean_object* v___x_3588_; 
v___x_3587_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__0));
v___x_3588_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_j_3565_, v___x_3587_);
if (lean_obj_tag(v___x_3588_) == 0)
{
lean_object* v___x_3589_; 
lean_dec_ref_known(v___x_3588_, 1);
v___x_3589_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3567_ = v___y_3580_;
v___y_3568_ = v___y_3579_;
v___y_3569_ = v___y_3586_;
v___y_3570_ = v___y_3581_;
v___y_3571_ = v___y_3582_;
v___y_3572_ = v___y_3583_;
v___y_3573_ = v___y_3584_;
v___y_3574_ = v___y_3585_;
v___y_3575_ = v___x_3589_;
goto v___jp_3566_;
}
else
{
lean_object* v_a_3590_; 
v_a_3590_ = lean_ctor_get(v___x_3588_, 0);
lean_inc(v_a_3590_);
lean_dec_ref_known(v___x_3588_, 1);
v___y_3567_ = v___y_3580_;
v___y_3568_ = v___y_3579_;
v___y_3569_ = v___y_3586_;
v___y_3570_ = v___y_3581_;
v___y_3571_ = v___y_3582_;
v___y_3572_ = v___y_3583_;
v___y_3573_ = v___y_3584_;
v___y_3574_ = v___y_3585_;
v___y_3575_ = v_a_3590_;
goto v___jp_3566_;
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
