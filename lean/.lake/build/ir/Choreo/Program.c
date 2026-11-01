// Lean compiler output
// Module: Choreo.Program
// Imports: public import Init public meta import Init public import Choreo.Planner public import Choreo.Language public import Lean.Data.Json
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
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_chooseCerts(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_rotatePath(lean_object*, lean_object*, uint8_t);
lean_object* lean_int_neg(lean_object*);
extern lean_object* lp_choreo_Choreo_centre;
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_distSq(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lp_choreo_Choreo_Op_next(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
uint8_t lean_nat_dec_le(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lean_nat_mod(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_improveAssign(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lp_choreo_Choreo_stepMoves(lean_object*);
lean_object* lp_choreo_Choreo_stepTitle(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Shape_formation(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Formation_slots(lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileEnter_spec__0(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
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
static lean_once_cell_t lp_choreo_Choreo_namedPlaces___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_namedPlaces___closed__14;
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
static const lean_string_object lp_choreo_Choreo_compileOp___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "canon"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__15 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__15_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Parallel"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__16 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__16_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 81, .m_capacity = 81, .m_length = 80, .m_data = "A line keeps the two groups apart: everyone on one side, everyone else at least "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__17 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__17_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " cm past it."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__18 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__18_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 68, .m_capacity = 68, .m_length = 67, .m_data = "Each group has formed its shape on its own side, on the same count."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__19 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__19_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "Scale"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__20 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__20_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "burst"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__21 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__21_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "Every gap has grown or shrunk by the same factor."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__22 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__22_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Mirror"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__23 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__23_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "flip"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__24 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__24_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "Everyone stands at the mirror image of where they began."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__25 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__25_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Hold"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__26 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__26_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Nobody moves."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__27 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__27_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Exchange groups"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__28 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__28_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "zipper"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__29 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__29_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "Two groups in separate lanes: every member of one is at least "};
static const lean_object* lp_choreo_Choreo_compileOp___closed__30 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__30_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = " cm upstage or downstage of every member of the other."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__31 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__31_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 84, .m_data = "The groups have traded sides, still in their lanes. Nobody meets anybody on the way."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__32 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__32_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "Move everyone together"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__33 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__33_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Translate"};
static const lean_object* lp_choreo_Choreo_compileOp___closed__34 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__34_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = " cm apart to begin with."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__35 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__35_value;
static const lean_string_object lp_choreo_Choreo_compileOp___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "Every gap stays exactly as it was, at every moment."};
static const lean_object* lp_choreo_Choreo_compileOp___closed__36 = (const lean_object*)&lp_choreo_Choreo_compileOp___closed__36_value;
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
static lean_object* _init_lp_choreo_Choreo_namedPlaces___closed__14(void){
_start:
{
lean_object* v___x_363_; lean_object* v___x_364_; 
v___x_363_ = lean_unsigned_to_nat(3315u);
v___x_364_ = lean_nat_to_int(v___x_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces(lean_object* v_name_365_, lean_object* v_n_366_, lean_object* v_gap_367_){
_start:
{
lean_object* v_s_369_; lean_object* v___y_375_; lean_object* v___y_376_; lean_object* v___x_386_; uint8_t v___x_387_; 
v___x_386_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_387_ = lean_string_dec_eq(v_name_365_, v___x_386_);
if (v___x_387_ == 0)
{
lean_object* v___x_388_; uint8_t v___x_389_; 
v___x_388_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__0));
v___x_389_ = lean_string_dec_eq(v_name_365_, v___x_388_);
if (v___x_389_ == 0)
{
lean_object* v___x_390_; uint8_t v___x_391_; 
v___x_390_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_391_ = lean_string_dec_eq(v_name_365_, v___x_390_);
if (v___x_391_ == 0)
{
lean_object* v___x_392_; uint8_t v___x_393_; 
v___x_392_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__2));
v___x_393_ = lean_string_dec_eq(v_name_365_, v___x_392_);
if (v___x_393_ == 0)
{
lean_object* v___x_394_; uint8_t v___x_395_; 
v___x_394_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_395_ = lean_string_dec_eq(v_name_365_, v___x_394_);
if (v___x_395_ == 0)
{
lean_object* v___x_396_; uint8_t v___x_397_; 
v___x_396_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__3));
v___x_397_ = lean_string_dec_eq(v_name_365_, v___x_396_);
if (v___x_397_ == 0)
{
lean_object* v___x_398_; uint8_t v___x_399_; 
v___x_398_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__4));
v___x_399_ = lean_string_dec_eq(v_name_365_, v___x_398_);
if (v___x_399_ == 0)
{
lean_object* v___x_400_; uint8_t v___x_401_; 
v___x_400_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__5));
v___x_401_ = lean_string_dec_eq(v_name_365_, v___x_400_);
if (v___x_401_ == 0)
{
lean_object* v___x_402_; uint8_t v___x_403_; 
v___x_402_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__6));
v___x_403_ = lean_string_dec_eq(v_name_365_, v___x_402_);
if (v___x_403_ == 0)
{
lean_object* v___x_404_; uint8_t v___x_405_; 
v___x_404_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__7));
v___x_405_ = lean_string_dec_eq(v_name_365_, v___x_404_);
if (v___x_405_ == 0)
{
lean_object* v___x_406_; uint8_t v___x_407_; 
v___x_406_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__8));
v___x_407_ = lean_string_dec_eq(v_name_365_, v___x_406_);
if (v___x_407_ == 0)
{
lean_object* v___x_408_; uint8_t v___x_409_; 
v___x_408_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__9));
v___x_409_ = lean_string_dec_eq(v_name_365_, v___x_408_);
if (v___x_409_ == 0)
{
lean_object* v___x_410_; uint8_t v___x_411_; 
v___x_410_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__10));
v___x_411_ = lean_string_dec_eq(v_name_365_, v___x_410_);
if (v___x_411_ == 0)
{
lean_object* v___x_412_; uint8_t v___x_413_; 
v___x_412_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__11));
v___x_413_ = lean_string_dec_eq(v_name_365_, v___x_412_);
if (v___x_413_ == 0)
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__12));
v___x_415_ = lean_string_dec_eq(v_name_365_, v___x_414_);
if (v___x_415_ == 0)
{
lean_object* v___x_416_; uint8_t v___x_417_; 
v___x_416_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__13));
v___x_417_ = lean_string_dec_eq(v_name_365_, v___x_416_);
if (v___x_417_ == 0)
{
lean_object* v___x_418_; 
v___x_418_ = lean_box(3);
v_s_369_ = v___x_418_;
goto v___jp_368_;
}
else
{
lean_object* v___x_419_; 
v___x_419_ = lp_choreo_Choreo_mirroredPlaces(v_n_366_);
return v___x_419_;
}
}
else
{
lean_object* v___x_420_; 
v___x_420_ = lp_choreo_Choreo_arcPlaces(v_n_366_);
return v___x_420_;
}
}
else
{
lean_object* v___x_421_; 
v___x_421_ = lp_choreo_Choreo_evenLanes(v_n_366_, v_gap_367_);
return v___x_421_;
}
}
else
{
lean_object* v___x_422_; 
v___x_422_ = lean_box(10);
v_s_369_ = v___x_422_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_423_; 
v___x_423_ = lean_box(9);
v_s_369_ = v___x_423_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_424_; 
v___x_424_ = lean_box(8);
v_s_369_ = v___x_424_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_425_; 
v___x_425_ = lean_box(6);
v_s_369_ = v___x_425_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_426_; 
v___x_426_ = lean_box(5);
v_s_369_ = v___x_426_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_427_; 
v___x_427_ = lean_box(4);
v_s_369_ = v___x_427_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_428_; 
v___x_428_ = lean_box(7);
v_s_369_ = v___x_428_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_432_; double v___x_433_; lean_object* v___x_434_; 
v___x_429_ = lp_choreo_Choreo_centre;
v___x_430_ = lean_obj_once(&lp_choreo_Choreo_namedPlaces___closed__14, &lp_choreo_Choreo_namedPlaces___closed__14_once, _init_lp_choreo_Choreo_namedPlaces___closed__14);
v___x_431_ = lean_unsigned_to_nat(0u);
v___x_432_ = lean_unsigned_to_nat(1u);
v___x_433_ = l_Float_ofScientific(v___x_431_, v___x_397_, v___x_432_);
v___x_434_ = lp_choreo_Choreo_ringPoints(v_n_366_, v___x_429_, v___x_430_, v___x_433_);
return v___x_434_;
}
}
else
{
lean_object* v___x_435_; 
v___x_435_ = lean_box(3);
v_s_369_ = v___x_435_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_436_; 
v___x_436_ = lean_box(2);
v_s_369_ = v___x_436_;
goto v___jp_368_;
}
}
else
{
lean_object* v___x_437_; 
v___x_437_ = lean_box(1);
v_s_369_ = v___x_437_;
goto v___jp_368_;
}
}
else
{
goto v___jp_378_;
}
}
else
{
goto v___jp_378_;
}
v___jp_368_:
{
lean_object* v___x_370_; lean_object* v___x_371_; lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_370_ = lp_choreo_Choreo_Shape_formation(v_s_369_, v_n_366_);
v___x_371_ = lp_choreo_Choreo_Formation_slots(v___x_370_);
v___x_372_ = lean_box(0);
v___x_373_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileEnter_spec__0(v___x_371_, v___x_372_);
return v___x_373_;
}
v___jp_374_:
{
lean_object* v___x_377_; 
v___x_377_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_377_, 0, v___y_375_);
lean_ctor_set(v___x_377_, 1, v___y_376_);
v_s_369_ = v___x_377_;
goto v___jp_368_;
}
v___jp_378_:
{
lean_object* v___x_379_; lean_object* v___x_380_; lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; uint8_t v___x_385_; 
v___x_379_ = lean_unsigned_to_nat(2u);
v___x_380_ = lean_unsigned_to_nat(1u);
v___x_381_ = lean_nat_shiftr(v_n_366_, v___x_380_);
v___x_382_ = lean_nat_mod(v_n_366_, v___x_379_);
v___x_383_ = lean_nat_add(v___x_381_, v___x_382_);
lean_dec(v___x_381_);
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = lean_nat_dec_eq(v___x_382_, v___x_384_);
lean_dec(v___x_382_);
if (v___x_385_ == 0)
{
v___y_375_ = v___x_383_;
v___y_376_ = v___x_380_;
goto v___jp_374_;
}
else
{
v___y_375_ = v___x_383_;
v___y_376_ = v___x_379_;
goto v___jp_374_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_namedPlaces___boxed(lean_object* v_name_438_, lean_object* v_n_439_, lean_object* v_gap_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = lp_choreo_Choreo_namedPlaces(v_name_438_, v_n_439_, v_gap_440_);
lean_dec(v_gap_440_);
lean_dec_ref(v_name_438_);
return v_res_441_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_442_; uint8_t v___x_443_; lean_object* v___x_444_; double v___x_445_; 
v___x_442_ = lean_unsigned_to_nat(11u);
v___x_443_ = 1;
v___x_444_ = lean_cstr_to_nat("628318530718");
v___x_445_ = l_Float_ofScientific(v___x_444_, v___x_443_, v___x_442_);
return v___x_445_;
}
}
static double _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1(void){
_start:
{
lean_object* v___x_446_; uint8_t v___x_447_; lean_object* v___x_448_; double v___x_449_; 
v___x_446_ = lean_unsigned_to_nat(1u);
v___x_447_ = 1;
v___x_448_ = lean_unsigned_to_nat(14000u);
v___x_449_ = l_Float_ofScientific(v___x_448_, v___x_447_, v___x_446_);
return v___x_449_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2(void){
_start:
{
lean_object* v___x_450_; lean_object* v___x_451_; 
v___x_450_ = lean_unsigned_to_nat(650u);
v___x_451_ = lean_nat_to_int(v___x_450_);
return v___x_451_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3(void){
_start:
{
lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_452_ = lean_unsigned_to_nat(500u);
v___x_453_ = lean_nat_to_int(v___x_452_);
return v___x_453_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4(void){
_start:
{
lean_object* v___x_454_; lean_object* v___x_455_; 
v___x_454_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_455_ = lean_int_neg(v___x_454_);
return v___x_455_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(lean_object* v_name_456_, lean_object* v_cx_457_, lean_object* v_k_458_, lean_object* v_a_459_, lean_object* v_a_460_){
_start:
{
if (lean_obj_tag(v_a_459_) == 0)
{
lean_object* v___x_461_; 
lean_dec(v_k_458_);
lean_dec(v_cx_457_);
v___x_461_ = l_List_reverse___redArg(v_a_460_);
return v___x_461_;
}
else
{
lean_object* v_head_462_; lean_object* v_tail_463_; lean_object* v___x_465_; uint8_t v_isShared_466_; uint8_t v_isSharedCheck_544_; 
v_head_462_ = lean_ctor_get(v_a_459_, 0);
v_tail_463_ = lean_ctor_get(v_a_459_, 1);
v_isSharedCheck_544_ = !lean_is_exclusive(v_a_459_);
if (v_isSharedCheck_544_ == 0)
{
v___x_465_ = v_a_459_;
v_isShared_466_ = v_isSharedCheck_544_;
goto v_resetjp_464_;
}
else
{
lean_inc(v_tail_463_);
lean_inc(v_head_462_);
lean_dec(v_a_459_);
v___x_465_ = lean_box(0);
v_isShared_466_ = v_isSharedCheck_544_;
goto v_resetjp_464_;
}
v_resetjp_464_:
{
lean_object* v_fst_467_; lean_object* v_snd_468_; lean_object* v___x_470_; uint8_t v_isShared_471_; uint8_t v_isSharedCheck_543_; 
v_fst_467_ = lean_ctor_get(v_head_462_, 0);
v_snd_468_ = lean_ctor_get(v_head_462_, 1);
v_isSharedCheck_543_ = !lean_is_exclusive(v_head_462_);
if (v_isSharedCheck_543_ == 0)
{
v___x_470_ = v_head_462_;
v_isShared_471_ = v_isSharedCheck_543_;
goto v_resetjp_469_;
}
else
{
lean_inc(v_snd_468_);
lean_inc(v_fst_467_);
lean_dec(v_head_462_);
v___x_470_ = lean_box(0);
v_isShared_471_ = v_isSharedCheck_543_;
goto v_resetjp_469_;
}
v_resetjp_469_:
{
lean_object* v_fst_473_; lean_object* v_snd_474_; lean_object* v___x_483_; uint8_t v___x_484_; 
v___x_483_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_484_ = lean_string_dec_eq(v_name_456_, v___x_483_);
if (v___x_484_ == 0)
{
lean_object* v___x_485_; uint8_t v___x_486_; 
v___x_485_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_486_ = lean_string_dec_eq(v_name_456_, v___x_485_);
if (v___x_486_ == 0)
{
double v___x_487_; double v___x_488_; double v___x_489_; lean_object* v___x_490_; lean_object* v___y_492_; uint8_t v___x_507_; 
v___x_487_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0);
v___x_488_ = lean_float_of_nat(v_snd_468_);
v___x_489_ = lean_float_mul(v___x_487_, v___x_488_);
v___x_490_ = lean_unsigned_to_nat(1u);
v___x_507_ = lean_nat_dec_le(v___x_490_, v_k_458_);
if (v___x_507_ == 0)
{
v___y_492_ = v___x_490_;
goto v___jp_491_;
}
else
{
lean_inc(v_k_458_);
v___y_492_ = v_k_458_;
goto v___jp_491_;
}
v___jp_491_:
{
double v___x_493_; double v_a_494_; double v___x_495_; double v___x_496_; double v___x_497_; uint64_t v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; lean_object* v___x_501_; double v___x_502_; double v___x_503_; uint64_t v___x_504_; lean_object* v___x_505_; lean_object* v___x_506_; 
v___x_493_ = lean_float_of_nat(v___y_492_);
v_a_494_ = lean_float_div(v___x_489_, v___x_493_);
v___x_495_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1);
v___x_496_ = cos(v_a_494_);
v___x_497_ = lean_float_mul(v___x_495_, v___x_496_);
v___x_498_ = lean_float_to_int64(v___x_497_);
v___x_499_ = lean_int64_to_int_sint(v___x_498_);
v___x_500_ = lean_int_add(v_cx_457_, v___x_499_);
lean_dec(v___x_499_);
v___x_501_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_502_ = sin(v_a_494_);
v___x_503_ = lean_float_mul(v___x_495_, v___x_502_);
v___x_504_ = lean_float_to_int64(v___x_503_);
v___x_505_ = lean_int64_to_int_sint(v___x_504_);
v___x_506_ = lean_int_add(v___x_501_, v___x_505_);
lean_dec(v___x_505_);
v_fst_473_ = v___x_500_;
v_snd_474_ = v___x_506_;
goto v___jp_472_;
}
}
else
{
lean_object* v___x_508_; lean_object* v___y_510_; lean_object* v___x_527_; lean_object* v___x_528_; uint8_t v___x_529_; 
v___x_508_ = lean_unsigned_to_nat(2u);
v___x_527_ = lean_nat_mod(v_snd_468_, v___x_508_);
v___x_528_ = lean_unsigned_to_nat(0u);
v___x_529_ = lean_nat_dec_eq(v___x_527_, v___x_528_);
lean_dec(v___x_527_);
if (v___x_529_ == 0)
{
lean_object* v___x_530_; 
v___x_530_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___y_510_ = v___x_530_;
goto v___jp_509_;
}
else
{
lean_object* v___x_531_; 
v___x_531_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4);
v___y_510_ = v___x_531_;
goto v___jp_509_;
}
v___jp_509_:
{
lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; lean_object* v___x_523_; lean_object* v___x_524_; lean_object* v___x_525_; lean_object* v___x_526_; 
v___x_511_ = lean_int_add(v_cx_457_, v___y_510_);
v___x_512_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_513_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_514_ = lean_unsigned_to_nat(1u);
v___x_515_ = lean_nat_shiftr(v_snd_468_, v___x_514_);
lean_dec(v_snd_468_);
v___x_516_ = lean_nat_to_int(v___x_515_);
v___x_517_ = lean_int_mul(v___x_513_, v___x_516_);
lean_dec(v___x_516_);
v___x_518_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_519_ = lean_int_add(v___x_517_, v___x_518_);
lean_dec(v___x_517_);
v___x_520_ = lean_nat_add(v_k_458_, v___x_514_);
v___x_521_ = lean_nat_shiftr(v___x_520_, v___x_514_);
lean_dec(v___x_520_);
v___x_522_ = lean_nat_to_int(v___x_521_);
v___x_523_ = lean_int_sub(v___x_519_, v___x_522_);
lean_dec(v___x_522_);
lean_dec(v___x_519_);
v___x_524_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2);
v___x_525_ = lean_int_mul(v___x_523_, v___x_524_);
lean_dec(v___x_523_);
v___x_526_ = lean_int_add(v___x_512_, v___x_525_);
lean_dec(v___x_525_);
v_fst_473_ = v___x_511_;
v_snd_474_ = v___x_526_;
goto v___jp_472_;
}
}
}
else
{
lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; lean_object* v___x_542_; 
v___x_532_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_533_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_534_ = lean_nat_to_int(v_snd_468_);
v___x_535_ = lean_int_mul(v___x_533_, v___x_534_);
lean_dec(v___x_534_);
v___x_536_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_537_ = lean_int_add(v___x_535_, v___x_536_);
lean_dec(v___x_535_);
lean_inc(v_k_458_);
v___x_538_ = lean_nat_to_int(v_k_458_);
v___x_539_ = lean_int_sub(v___x_537_, v___x_538_);
lean_dec(v___x_538_);
lean_dec(v___x_537_);
v___x_540_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_541_ = lean_int_mul(v___x_539_, v___x_540_);
lean_dec(v___x_539_);
v___x_542_ = lean_int_add(v___x_532_, v___x_541_);
lean_dec(v___x_541_);
lean_inc(v_cx_457_);
v_fst_473_ = v_cx_457_;
v_snd_474_ = v___x_542_;
goto v___jp_472_;
}
v___jp_472_:
{
lean_object* v___x_475_; lean_object* v___x_477_; 
v___x_475_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_475_, 0, v_fst_473_);
lean_ctor_set(v___x_475_, 1, v_snd_474_);
if (v_isShared_471_ == 0)
{
lean_ctor_set(v___x_470_, 1, v___x_475_);
v___x_477_ = v___x_470_;
goto v_reusejp_476_;
}
else
{
lean_object* v_reuseFailAlloc_482_; 
v_reuseFailAlloc_482_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_482_, 0, v_fst_467_);
lean_ctor_set(v_reuseFailAlloc_482_, 1, v___x_475_);
v___x_477_ = v_reuseFailAlloc_482_;
goto v_reusejp_476_;
}
v_reusejp_476_:
{
lean_object* v___x_479_; 
if (v_isShared_466_ == 0)
{
lean_ctor_set(v___x_465_, 1, v_a_460_);
lean_ctor_set(v___x_465_, 0, v___x_477_);
v___x_479_ = v___x_465_;
goto v_reusejp_478_;
}
else
{
lean_object* v_reuseFailAlloc_481_; 
v_reuseFailAlloc_481_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_481_, 0, v___x_477_);
lean_ctor_set(v_reuseFailAlloc_481_, 1, v_a_460_);
v___x_479_ = v_reuseFailAlloc_481_;
goto v_reusejp_478_;
}
v_reusejp_478_:
{
v_a_459_ = v_tail_463_;
v_a_460_ = v___x_479_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___boxed(lean_object* v_name_545_, lean_object* v_cx_546_, lean_object* v_k_547_, lean_object* v_a_548_, lean_object* v_a_549_){
_start:
{
lean_object* v_res_550_; 
v_res_550_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(v_name_545_, v_cx_546_, v_k_547_, v_a_548_, v_a_549_);
lean_dec_ref(v_name_545_);
return v_res_550_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(lean_object* v_name_551_, lean_object* v_cx_552_, lean_object* v_k_553_, lean_object* v_a_554_, lean_object* v_a_555_){
_start:
{
if (lean_obj_tag(v_a_554_) == 0)
{
lean_object* v___x_556_; 
lean_dec(v_k_553_);
lean_dec(v_cx_552_);
v___x_556_ = l_List_reverse___redArg(v_a_555_);
return v___x_556_;
}
else
{
lean_object* v_head_557_; lean_object* v_tail_558_; lean_object* v___x_560_; uint8_t v_isShared_561_; uint8_t v_isSharedCheck_639_; 
v_head_557_ = lean_ctor_get(v_a_554_, 0);
v_tail_558_ = lean_ctor_get(v_a_554_, 1);
v_isSharedCheck_639_ = !lean_is_exclusive(v_a_554_);
if (v_isSharedCheck_639_ == 0)
{
v___x_560_ = v_a_554_;
v_isShared_561_ = v_isSharedCheck_639_;
goto v_resetjp_559_;
}
else
{
lean_inc(v_tail_558_);
lean_inc(v_head_557_);
lean_dec(v_a_554_);
v___x_560_ = lean_box(0);
v_isShared_561_ = v_isSharedCheck_639_;
goto v_resetjp_559_;
}
v_resetjp_559_:
{
lean_object* v_fst_562_; lean_object* v_snd_563_; lean_object* v___x_565_; uint8_t v_isShared_566_; uint8_t v_isSharedCheck_638_; 
v_fst_562_ = lean_ctor_get(v_head_557_, 0);
v_snd_563_ = lean_ctor_get(v_head_557_, 1);
v_isSharedCheck_638_ = !lean_is_exclusive(v_head_557_);
if (v_isSharedCheck_638_ == 0)
{
v___x_565_ = v_head_557_;
v_isShared_566_ = v_isSharedCheck_638_;
goto v_resetjp_564_;
}
else
{
lean_inc(v_snd_563_);
lean_inc(v_fst_562_);
lean_dec(v_head_557_);
v___x_565_ = lean_box(0);
v_isShared_566_ = v_isSharedCheck_638_;
goto v_resetjp_564_;
}
v_resetjp_564_:
{
lean_object* v_fst_568_; lean_object* v_snd_569_; lean_object* v___x_578_; uint8_t v___x_579_; 
v___x_578_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
v___x_579_ = lean_string_dec_eq(v_name_551_, v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_580_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___x_581_ = lean_string_dec_eq(v_name_551_, v___x_580_);
if (v___x_581_ == 0)
{
double v___x_582_; double v___x_583_; double v___x_584_; lean_object* v___x_585_; lean_object* v___y_587_; uint8_t v___x_602_; 
v___x_582_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__0);
v___x_583_ = lean_float_of_nat(v_snd_563_);
v___x_584_ = lean_float_mul(v___x_582_, v___x_583_);
v___x_585_ = lean_unsigned_to_nat(1u);
v___x_602_ = lean_nat_dec_le(v___x_585_, v_k_553_);
if (v___x_602_ == 0)
{
v___y_587_ = v___x_585_;
goto v___jp_586_;
}
else
{
lean_inc(v_k_553_);
v___y_587_ = v_k_553_;
goto v___jp_586_;
}
v___jp_586_:
{
double v___x_588_; double v_a_589_; double v___x_590_; double v___x_591_; double v___x_592_; uint64_t v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; double v___x_597_; double v___x_598_; uint64_t v___x_599_; lean_object* v___x_600_; lean_object* v___x_601_; 
v___x_588_ = lean_float_of_nat(v___y_587_);
v_a_589_ = lean_float_div(v___x_584_, v___x_588_);
v___x_590_ = lean_float_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__1);
v___x_591_ = cos(v_a_589_);
v___x_592_ = lean_float_mul(v___x_590_, v___x_591_);
v___x_593_ = lean_float_to_int64(v___x_592_);
v___x_594_ = lean_int64_to_int_sint(v___x_593_);
v___x_595_ = lean_int_add(v_cx_552_, v___x_594_);
lean_dec(v___x_594_);
v___x_596_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_597_ = sin(v_a_589_);
v___x_598_ = lean_float_mul(v___x_590_, v___x_597_);
v___x_599_ = lean_float_to_int64(v___x_598_);
v___x_600_ = lean_int64_to_int_sint(v___x_599_);
v___x_601_ = lean_int_add(v___x_596_, v___x_600_);
lean_dec(v___x_600_);
v_fst_568_ = v___x_595_;
v_snd_569_ = v___x_601_;
goto v___jp_567_;
}
}
else
{
lean_object* v___x_603_; lean_object* v___y_605_; lean_object* v___x_622_; lean_object* v___x_623_; uint8_t v___x_624_; 
v___x_603_ = lean_unsigned_to_nat(2u);
v___x_622_ = lean_nat_mod(v_snd_563_, v___x_603_);
v___x_623_ = lean_unsigned_to_nat(0u);
v___x_624_ = lean_nat_dec_eq(v___x_622_, v___x_623_);
lean_dec(v___x_622_);
if (v___x_624_ == 0)
{
lean_object* v___x_625_; 
v___x_625_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___y_605_ = v___x_625_;
goto v___jp_604_;
}
else
{
lean_object* v___x_626_; 
v___x_626_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__4);
v___y_605_ = v___x_626_;
goto v___jp_604_;
}
v___jp_604_:
{
lean_object* v___x_606_; lean_object* v___x_607_; lean_object* v___x_608_; lean_object* v___x_609_; lean_object* v___x_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; lean_object* v___x_616_; lean_object* v___x_617_; lean_object* v___x_618_; lean_object* v___x_619_; lean_object* v___x_620_; lean_object* v___x_621_; 
v___x_606_ = lean_int_add(v_cx_552_, v___y_605_);
v___x_607_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_608_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_609_ = lean_unsigned_to_nat(1u);
v___x_610_ = lean_nat_shiftr(v_snd_563_, v___x_609_);
lean_dec(v_snd_563_);
v___x_611_ = lean_nat_to_int(v___x_610_);
v___x_612_ = lean_int_mul(v___x_608_, v___x_611_);
lean_dec(v___x_611_);
v___x_613_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_614_ = lean_int_add(v___x_612_, v___x_613_);
lean_dec(v___x_612_);
v___x_615_ = lean_nat_add(v_k_553_, v___x_609_);
v___x_616_ = lean_nat_shiftr(v___x_615_, v___x_609_);
lean_dec(v___x_615_);
v___x_617_ = lean_nat_to_int(v___x_616_);
v___x_618_ = lean_int_sub(v___x_614_, v___x_617_);
lean_dec(v___x_617_);
lean_dec(v___x_614_);
v___x_619_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__2);
v___x_620_ = lean_int_mul(v___x_618_, v___x_619_);
lean_dec(v___x_618_);
v___x_621_ = lean_int_add(v___x_607_, v___x_620_);
lean_dec(v___x_620_);
v_fst_568_ = v___x_606_;
v_snd_569_ = v___x_621_;
goto v___jp_567_;
}
}
}
else
{
lean_object* v___x_627_; lean_object* v___x_628_; lean_object* v___x_629_; lean_object* v___x_630_; lean_object* v___x_631_; lean_object* v___x_632_; lean_object* v___x_633_; lean_object* v___x_634_; lean_object* v___x_635_; lean_object* v___x_636_; lean_object* v___x_637_; 
v___x_627_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__3, &lp_choreo_Choreo_evenLanes___closed__3_once, _init_lp_choreo_Choreo_evenLanes___closed__3);
v___x_628_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__0);
v___x_629_ = lean_nat_to_int(v_snd_563_);
v___x_630_ = lean_int_mul(v___x_628_, v___x_629_);
lean_dec(v___x_629_);
v___x_631_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_632_ = lean_int_add(v___x_630_, v___x_631_);
lean_dec(v___x_630_);
lean_inc(v_k_553_);
v___x_633_ = lean_nat_to_int(v_k_553_);
v___x_634_ = lean_int_sub(v___x_632_, v___x_633_);
lean_dec(v___x_633_);
lean_dec(v___x_632_);
v___x_635_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_636_ = lean_int_mul(v___x_634_, v___x_635_);
lean_dec(v___x_634_);
v___x_637_ = lean_int_add(v___x_627_, v___x_636_);
lean_dec(v___x_636_);
lean_inc(v_cx_552_);
v_fst_568_ = v_cx_552_;
v_snd_569_ = v___x_637_;
goto v___jp_567_;
}
v___jp_567_:
{
lean_object* v___x_570_; lean_object* v___x_572_; 
v___x_570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_570_, 0, v_fst_568_);
lean_ctor_set(v___x_570_, 1, v_snd_569_);
if (v_isShared_566_ == 0)
{
lean_ctor_set(v___x_565_, 1, v___x_570_);
v___x_572_ = v___x_565_;
goto v_reusejp_571_;
}
else
{
lean_object* v_reuseFailAlloc_577_; 
v_reuseFailAlloc_577_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_577_, 0, v_fst_562_);
lean_ctor_set(v_reuseFailAlloc_577_, 1, v___x_570_);
v___x_572_ = v_reuseFailAlloc_577_;
goto v_reusejp_571_;
}
v_reusejp_571_:
{
lean_object* v___x_574_; 
if (v_isShared_561_ == 0)
{
lean_ctor_set(v___x_560_, 1, v_a_555_);
lean_ctor_set(v___x_560_, 0, v___x_572_);
v___x_574_ = v___x_560_;
goto v_reusejp_573_;
}
else
{
lean_object* v_reuseFailAlloc_576_; 
v_reuseFailAlloc_576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_576_, 0, v___x_572_);
lean_ctor_set(v_reuseFailAlloc_576_, 1, v_a_555_);
v___x_574_ = v_reuseFailAlloc_576_;
goto v_reusejp_573_;
}
v_reusejp_573_:
{
lean_object* v___x_575_; 
v___x_575_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0(v_name_551_, v_cx_552_, v_k_553_, v_tail_558_, v___x_574_);
return v___x_575_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0___boxed(lean_object* v_name_640_, lean_object* v_cx_641_, lean_object* v_k_642_, lean_object* v_a_643_, lean_object* v_a_644_){
_start:
{
lean_object* v_res_645_; 
v_res_645_ = lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(v_name_640_, v_cx_641_, v_k_642_, v_a_643_, v_a_644_);
lean_dec_ref(v_name_640_);
return v_res_645_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces(lean_object* v_name_646_, lean_object* v_ids_647_, lean_object* v_cx_648_){
_start:
{
lean_object* v_k_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; lean_object* v___x_653_; 
v_k_649_ = l_List_lengthTR___redArg(v_ids_647_);
v___x_650_ = lean_unsigned_to_nat(0u);
v___x_651_ = l_List_zipIdxTR___redArg(v_ids_647_, v___x_650_);
v___x_652_ = lean_box(0);
v___x_653_ = lp_choreo_List_mapTR_loop___at___00Choreo_halfPlaces_spec__0(v_name_646_, v_cx_648_, v_k_649_, v___x_651_, v___x_652_);
return v___x_653_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_halfPlaces___boxed(lean_object* v_name_654_, lean_object* v_ids_655_, lean_object* v_cx_656_){
_start:
{
lean_object* v_res_657_; 
v_res_657_ = lp_choreo_Choreo_halfPlaces(v_name_654_, v_ids_655_, v_cx_656_);
lean_dec_ref(v_name_654_);
return v_res_657_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(lean_object* v_i_658_, lean_object* v_x_659_){
_start:
{
if (lean_obj_tag(v_x_659_) == 0)
{
lean_object* v___x_660_; 
v___x_660_ = lean_box(0);
return v___x_660_;
}
else
{
lean_object* v_head_661_; lean_object* v_tail_662_; lean_object* v_fst_663_; uint8_t v___x_664_; 
v_head_661_ = lean_ctor_get(v_x_659_, 0);
v_tail_662_ = lean_ctor_get(v_x_659_, 1);
v_fst_663_ = lean_ctor_get(v_head_661_, 0);
v___x_664_ = lean_nat_dec_eq(v_fst_663_, v_i_658_);
if (v___x_664_ == 0)
{
v_x_659_ = v_tail_662_;
goto _start;
}
else
{
lean_object* v___x_666_; 
lean_inc(v_head_661_);
v___x_666_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_666_, 0, v_head_661_);
return v___x_666_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0___boxed(lean_object* v_i_667_, lean_object* v_x_668_){
_start:
{
lean_object* v_res_669_; 
v_res_669_ = lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(v_i_667_, v_x_668_);
lean_dec(v_x_668_);
lean_dec(v_i_667_);
return v_res_669_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(lean_object* v_l_670_, lean_object* v_s_671_, lean_object* v_a_672_, lean_object* v_a_673_){
_start:
{
if (lean_obj_tag(v_a_672_) == 0)
{
lean_object* v___x_674_; 
v___x_674_ = l_List_reverse___redArg(v_a_673_);
return v___x_674_;
}
else
{
lean_object* v_head_675_; lean_object* v_tail_676_; lean_object* v___x_678_; uint8_t v_isShared_679_; uint8_t v_isSharedCheck_690_; 
v_head_675_ = lean_ctor_get(v_a_672_, 0);
v_tail_676_ = lean_ctor_get(v_a_672_, 1);
v_isSharedCheck_690_ = !lean_is_exclusive(v_a_672_);
if (v_isSharedCheck_690_ == 0)
{
v___x_678_ = v_a_672_;
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
else
{
lean_inc(v_tail_676_);
lean_inc(v_head_675_);
lean_dec(v_a_672_);
v___x_678_ = lean_box(0);
v_isShared_679_ = v_isSharedCheck_690_;
goto v_resetjp_677_;
}
v_resetjp_677_:
{
lean_object* v___y_681_; lean_object* v___x_686_; 
v___x_686_ = lp_choreo_List_find_x3f___at___00Choreo_placesWith_spec__0(v_head_675_, v_l_670_);
if (lean_obj_tag(v___x_686_) == 0)
{
lean_object* v___x_687_; 
v___x_687_ = lp_choreo_Choreo_State_at(v_s_671_, v_head_675_);
v___y_681_ = v___x_687_;
goto v___jp_680_;
}
else
{
lean_object* v_val_688_; lean_object* v_snd_689_; 
lean_dec(v_head_675_);
v_val_688_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_val_688_);
lean_dec_ref_known(v___x_686_, 1);
v_snd_689_ = lean_ctor_get(v_val_688_, 1);
lean_inc(v_snd_689_);
lean_dec(v_val_688_);
v___y_681_ = v_snd_689_;
goto v___jp_680_;
}
v___jp_680_:
{
lean_object* v___x_683_; 
if (v_isShared_679_ == 0)
{
lean_ctor_set(v___x_678_, 1, v_a_673_);
lean_ctor_set(v___x_678_, 0, v___y_681_);
v___x_683_ = v___x_678_;
goto v_reusejp_682_;
}
else
{
lean_object* v_reuseFailAlloc_685_; 
v_reuseFailAlloc_685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_685_, 0, v___y_681_);
lean_ctor_set(v_reuseFailAlloc_685_, 1, v_a_673_);
v___x_683_ = v_reuseFailAlloc_685_;
goto v_reusejp_682_;
}
v_reusejp_682_:
{
v_a_672_ = v_tail_676_;
v_a_673_ = v___x_683_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1___boxed(lean_object* v_l_691_, lean_object* v_s_692_, lean_object* v_a_693_, lean_object* v_a_694_){
_start:
{
lean_object* v_res_695_; 
v_res_695_ = lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(v_l_691_, v_s_692_, v_a_693_, v_a_694_);
lean_dec(v_s_692_);
lean_dec(v_l_691_);
return v_res_695_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith(lean_object* v_n_696_, lean_object* v_l_697_, lean_object* v_s_698_){
_start:
{
lean_object* v___x_699_; lean_object* v___x_700_; lean_object* v___x_701_; 
v___x_699_ = l_List_range(v_n_696_);
v___x_700_ = lean_box(0);
v___x_701_ = lp_choreo_List_mapTR_loop___at___00Choreo_placesWith_spec__1(v_l_697_, v_s_698_, v___x_699_, v___x_700_);
return v___x_701_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_placesWith___boxed(lean_object* v_n_702_, lean_object* v_l_703_, lean_object* v_s_704_){
_start:
{
lean_object* v_res_705_; 
v_res_705_ = lp_choreo_Choreo_placesWith(v_n_702_, v_l_703_, v_s_704_);
lean_dec(v_s_704_);
lean_dec(v_l_703_);
return v_res_705_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(lean_object* v_s_706_, lean_object* v_a_707_, lean_object* v_a_708_){
_start:
{
if (lean_obj_tag(v_a_707_) == 0)
{
lean_object* v___x_709_; 
v___x_709_ = l_List_reverse___redArg(v_a_708_);
return v___x_709_;
}
else
{
lean_object* v_head_710_; lean_object* v_tail_711_; lean_object* v___x_713_; uint8_t v_isShared_714_; uint8_t v_isSharedCheck_724_; 
v_head_710_ = lean_ctor_get(v_a_707_, 0);
v_tail_711_ = lean_ctor_get(v_a_707_, 1);
v_isSharedCheck_724_ = !lean_is_exclusive(v_a_707_);
if (v_isSharedCheck_724_ == 0)
{
v___x_713_ = v_a_707_;
v_isShared_714_ = v_isSharedCheck_724_;
goto v_resetjp_712_;
}
else
{
lean_inc(v_tail_711_);
lean_inc(v_head_710_);
lean_dec(v_a_707_);
v___x_713_ = lean_box(0);
v_isShared_714_ = v_isSharedCheck_724_;
goto v_resetjp_712_;
}
v_resetjp_712_:
{
lean_object* v___x_715_; lean_object* v_x_716_; lean_object* v___x_717_; uint8_t v___x_718_; 
lean_inc(v_head_710_);
v___x_715_ = lp_choreo_Choreo_State_at(v_s_706_, v_head_710_);
v_x_716_ = lean_ctor_get(v___x_715_, 0);
lean_inc(v_x_716_);
lean_dec_ref(v___x_715_);
v___x_717_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_718_ = lean_int_dec_lt(v_x_716_, v___x_717_);
lean_dec(v_x_716_);
if (v___x_718_ == 0)
{
lean_del_object(v___x_713_);
lean_dec(v_head_710_);
v_a_707_ = v_tail_711_;
goto _start;
}
else
{
lean_object* v___x_721_; 
if (v_isShared_714_ == 0)
{
lean_ctor_set(v___x_713_, 1, v_a_708_);
v___x_721_ = v___x_713_;
goto v_reusejp_720_;
}
else
{
lean_object* v_reuseFailAlloc_723_; 
v_reuseFailAlloc_723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_723_, 0, v_head_710_);
lean_ctor_set(v_reuseFailAlloc_723_, 1, v_a_708_);
v___x_721_ = v_reuseFailAlloc_723_;
goto v_reusejp_720_;
}
v_reusejp_720_:
{
v_a_707_ = v_tail_711_;
v_a_708_ = v___x_721_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0___boxed(lean_object* v_s_725_, lean_object* v_a_726_, lean_object* v_a_727_){
_start:
{
lean_object* v_res_728_; 
v_res_728_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(v_s_725_, v_a_726_, v_a_727_);
lean_dec(v_s_725_);
return v_res_728_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(lean_object* v_s_729_, lean_object* v_a_730_, lean_object* v_a_731_){
_start:
{
if (lean_obj_tag(v_a_730_) == 0)
{
lean_object* v___x_732_; 
v___x_732_ = l_List_reverse___redArg(v_a_731_);
return v___x_732_;
}
else
{
lean_object* v_head_733_; lean_object* v_tail_734_; lean_object* v___x_736_; uint8_t v_isShared_737_; uint8_t v_isSharedCheck_747_; 
v_head_733_ = lean_ctor_get(v_a_730_, 0);
v_tail_734_ = lean_ctor_get(v_a_730_, 1);
v_isSharedCheck_747_ = !lean_is_exclusive(v_a_730_);
if (v_isSharedCheck_747_ == 0)
{
v___x_736_ = v_a_730_;
v_isShared_737_ = v_isSharedCheck_747_;
goto v_resetjp_735_;
}
else
{
lean_inc(v_tail_734_);
lean_inc(v_head_733_);
lean_dec(v_a_730_);
v___x_736_ = lean_box(0);
v_isShared_737_ = v_isSharedCheck_747_;
goto v_resetjp_735_;
}
v_resetjp_735_:
{
lean_object* v___x_738_; lean_object* v_x_739_; lean_object* v___x_740_; uint8_t v___x_741_; 
lean_inc(v_head_733_);
v___x_738_ = lp_choreo_Choreo_State_at(v_s_729_, v_head_733_);
v_x_739_ = lean_ctor_get(v___x_738_, 0);
lean_inc(v_x_739_);
lean_dec_ref(v___x_738_);
v___x_740_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_741_ = lean_int_dec_le(v___x_740_, v_x_739_);
lean_dec(v_x_739_);
if (v___x_741_ == 0)
{
lean_del_object(v___x_736_);
lean_dec(v_head_733_);
v_a_730_ = v_tail_734_;
goto _start;
}
else
{
lean_object* v___x_744_; 
if (v_isShared_737_ == 0)
{
lean_ctor_set(v___x_736_, 1, v_a_731_);
v___x_744_ = v___x_736_;
goto v_reusejp_743_;
}
else
{
lean_object* v_reuseFailAlloc_746_; 
v_reuseFailAlloc_746_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_746_, 0, v_head_733_);
lean_ctor_set(v_reuseFailAlloc_746_, 1, v_a_731_);
v___x_744_ = v_reuseFailAlloc_746_;
goto v_reusejp_743_;
}
v_reusejp_743_:
{
v_a_730_ = v_tail_734_;
v_a_731_ = v___x_744_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1___boxed(lean_object* v_s_748_, lean_object* v_a_749_, lean_object* v_a_750_){
_start:
{
lean_object* v_res_751_; 
v_res_751_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(v_s_748_, v_a_749_, v_a_750_);
lean_dec(v_s_748_);
return v_res_751_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf(lean_object* v_s_752_, lean_object* v_n_753_){
_start:
{
lean_object* v___x_754_; lean_object* v___x_755_; lean_object* v___x_756_; lean_object* v___x_757_; lean_object* v___x_758_; 
v___x_754_ = l_List_range(v_n_753_);
v___x_755_ = lean_box(0);
lean_inc(v___x_754_);
v___x_756_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__0(v_s_752_, v___x_754_, v___x_755_);
v___x_757_ = lp_choreo_List_filterTR_loop___at___00Choreo_groupsOf_spec__1(v_s_752_, v___x_754_, v___x_755_);
v___x_758_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_758_, 0, v___x_756_);
lean_ctor_set(v___x_758_, 1, v___x_757_);
return v___x_758_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_groupsOf___boxed(lean_object* v_s_759_, lean_object* v_n_760_){
_start:
{
lean_object* v_res_761_; 
v_res_761_ = lp_choreo_Choreo_groupsOf(v_s_759_, v_n_760_);
lean_dec(v_s_759_);
return v_res_761_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo(lean_object* v_from_x27_762_, lean_object* v_places_763_){
_start:
{
lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v_idx_767_; lean_object* v___x_768_; lean_object* v___x_769_; 
v___x_764_ = lean_unsigned_to_nat(6u);
v___x_765_ = l_List_lengthTR___redArg(v_from_x27_762_);
v___x_766_ = l_List_range(v___x_765_);
v_idx_767_ = lp_choreo_Choreo_improveAssign(v_from_x27_762_, v_places_763_, v___x_764_, v___x_766_);
v___x_768_ = lean_box(0);
v___x_769_ = lp_choreo_List_mapTR_loop___at___00Choreo_wayDrafts_spec__3(v_places_763_, v_idx_767_, v___x_768_);
return v___x_769_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_assignTo___boxed(lean_object* v_from_x27_770_, lean_object* v_places_771_){
_start:
{
lean_object* v_res_772_; 
v_res_772_ = lp_choreo_Choreo_assignTo(v_from_x27_770_, v_places_771_);
lean_dec(v_places_771_);
lean_dec(v_from_x27_770_);
return v_res_772_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0(lean_object* v_title_773_, lean_object* v_fallback_774_){
_start:
{
lean_object* v___x_775_; lean_object* v___x_776_; uint8_t v___x_777_; 
v___x_775_ = lean_string_utf8_byte_size(v_title_773_);
v___x_776_ = lean_unsigned_to_nat(0u);
v___x_777_ = lean_nat_dec_eq(v___x_775_, v___x_776_);
if (v___x_777_ == 0)
{
lean_inc_ref(v_title_773_);
return v_title_773_;
}
else
{
lean_inc_ref(v_fallback_774_);
return v_fallback_774_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__0___boxed(lean_object* v_title_778_, lean_object* v_fallback_779_){
_start:
{
lean_object* v_res_780_; 
v_res_780_ = lp_choreo_Choreo_compileOp___lam__0(v_title_778_, v_fallback_779_);
lean_dec_ref(v_fallback_779_);
lean_dec_ref(v_title_778_);
return v_res_780_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(lean_object* v_dx_781_, lean_object* v_dy_782_, lean_object* v_a_783_, lean_object* v_a_784_){
_start:
{
if (lean_obj_tag(v_a_783_) == 0)
{
lean_object* v___x_785_; 
lean_dec(v_dy_782_);
lean_dec(v_dx_781_);
v___x_785_ = l_List_reverse___redArg(v_a_784_);
return v___x_785_;
}
else
{
lean_object* v_tail_786_; lean_object* v___x_788_; uint8_t v_isShared_789_; uint8_t v_isSharedCheck_795_; 
v_tail_786_ = lean_ctor_get(v_a_783_, 1);
v_isSharedCheck_795_ = !lean_is_exclusive(v_a_783_);
if (v_isSharedCheck_795_ == 0)
{
lean_object* v_unused_796_; 
v_unused_796_ = lean_ctor_get(v_a_783_, 0);
lean_dec(v_unused_796_);
v___x_788_ = v_a_783_;
v_isShared_789_ = v_isSharedCheck_795_;
goto v_resetjp_787_;
}
else
{
lean_inc(v_tail_786_);
lean_dec(v_a_783_);
v___x_788_ = lean_box(0);
v_isShared_789_ = v_isSharedCheck_795_;
goto v_resetjp_787_;
}
v_resetjp_787_:
{
lean_object* v___x_790_; lean_object* v___x_792_; 
lean_inc(v_dy_782_);
lean_inc(v_dx_781_);
v___x_790_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_790_, 0, v_dx_781_);
lean_ctor_set(v___x_790_, 1, v_dy_782_);
if (v_isShared_789_ == 0)
{
lean_ctor_set(v___x_788_, 1, v_a_784_);
lean_ctor_set(v___x_788_, 0, v___x_790_);
v___x_792_ = v___x_788_;
goto v_reusejp_791_;
}
else
{
lean_object* v_reuseFailAlloc_794_; 
v_reuseFailAlloc_794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_794_, 0, v___x_790_);
lean_ctor_set(v_reuseFailAlloc_794_, 1, v_a_784_);
v___x_792_ = v_reuseFailAlloc_794_;
goto v_reusejp_791_;
}
v_reusejp_791_:
{
v_a_783_ = v_tail_786_;
v_a_784_ = v___x_792_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__1(lean_object* v_n_797_, lean_object* v_dx_798_, lean_object* v_dy_799_){
_start:
{
lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; 
v___x_800_ = l_List_range(v_n_797_);
v___x_801_ = lean_box(0);
v___x_802_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_dx_798_, v_dy_799_, v___x_800_, v___x_801_);
return v___x_802_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(lean_object* v_s_803_, lean_object* v_a_804_, lean_object* v_a_805_){
_start:
{
if (lean_obj_tag(v_a_804_) == 0)
{
lean_object* v___x_806_; 
v___x_806_ = l_List_reverse___redArg(v_a_805_);
return v___x_806_;
}
else
{
lean_object* v_head_807_; lean_object* v_tail_808_; lean_object* v___x_810_; uint8_t v_isShared_811_; uint8_t v_isSharedCheck_817_; 
v_head_807_ = lean_ctor_get(v_a_804_, 0);
v_tail_808_ = lean_ctor_get(v_a_804_, 1);
v_isSharedCheck_817_ = !lean_is_exclusive(v_a_804_);
if (v_isSharedCheck_817_ == 0)
{
v___x_810_ = v_a_804_;
v_isShared_811_ = v_isSharedCheck_817_;
goto v_resetjp_809_;
}
else
{
lean_inc(v_tail_808_);
lean_inc(v_head_807_);
lean_dec(v_a_804_);
v___x_810_ = lean_box(0);
v_isShared_811_ = v_isSharedCheck_817_;
goto v_resetjp_809_;
}
v_resetjp_809_:
{
lean_object* v___x_812_; lean_object* v___x_814_; 
v___x_812_ = lp_choreo_Choreo_State_at(v_s_803_, v_head_807_);
if (v_isShared_811_ == 0)
{
lean_ctor_set(v___x_810_, 1, v_a_805_);
lean_ctor_set(v___x_810_, 0, v___x_812_);
v___x_814_ = v___x_810_;
goto v_reusejp_813_;
}
else
{
lean_object* v_reuseFailAlloc_816_; 
v_reuseFailAlloc_816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_816_, 0, v___x_812_);
lean_ctor_set(v_reuseFailAlloc_816_, 1, v_a_805_);
v___x_814_ = v_reuseFailAlloc_816_;
goto v_reusejp_813_;
}
v_reusejp_813_:
{
v_a_804_ = v_tail_808_;
v_a_805_ = v___x_814_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2___boxed(lean_object* v_s_818_, lean_object* v_a_819_, lean_object* v_a_820_){
_start:
{
lean_object* v_res_821_; 
v_res_821_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(v_s_818_, v_a_819_, v_a_820_);
lean_dec(v_s_818_);
return v_res_821_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__1(lean_object* v_a_822_, lean_object* v_a_823_){
_start:
{
if (lean_obj_tag(v_a_822_) == 0)
{
lean_object* v___x_824_; 
v___x_824_ = l_List_reverse___redArg(v_a_823_);
return v___x_824_;
}
else
{
lean_object* v_head_825_; lean_object* v_tail_826_; lean_object* v___x_828_; uint8_t v_isShared_829_; uint8_t v_isSharedCheck_835_; 
v_head_825_ = lean_ctor_get(v_a_822_, 0);
v_tail_826_ = lean_ctor_get(v_a_822_, 1);
v_isSharedCheck_835_ = !lean_is_exclusive(v_a_822_);
if (v_isSharedCheck_835_ == 0)
{
v___x_828_ = v_a_822_;
v_isShared_829_ = v_isSharedCheck_835_;
goto v_resetjp_827_;
}
else
{
lean_inc(v_tail_826_);
lean_inc(v_head_825_);
lean_dec(v_a_822_);
v___x_828_ = lean_box(0);
v_isShared_829_ = v_isSharedCheck_835_;
goto v_resetjp_827_;
}
v_resetjp_827_:
{
lean_object* v_snd_830_; lean_object* v___x_832_; 
v_snd_830_ = lean_ctor_get(v_head_825_, 1);
lean_inc(v_snd_830_);
lean_dec(v_head_825_);
if (v_isShared_829_ == 0)
{
lean_ctor_set(v___x_828_, 1, v_a_823_);
lean_ctor_set(v___x_828_, 0, v_snd_830_);
v___x_832_ = v___x_828_;
goto v_reusejp_831_;
}
else
{
lean_object* v_reuseFailAlloc_834_; 
v_reuseFailAlloc_834_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_834_, 0, v_snd_830_);
lean_ctor_set(v_reuseFailAlloc_834_, 1, v_a_823_);
v___x_832_ = v_reuseFailAlloc_834_;
goto v_reusejp_831_;
}
v_reusejp_831_:
{
v_a_822_ = v_tail_826_;
v_a_823_ = v___x_832_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(lean_object* v_idx_836_, lean_object* v_places_837_, lean_object* v_a_838_, lean_object* v_a_839_){
_start:
{
if (lean_obj_tag(v_a_838_) == 0)
{
lean_object* v___x_840_; 
v___x_840_ = l_List_reverse___redArg(v_a_839_);
return v___x_840_;
}
else
{
lean_object* v_head_841_; lean_object* v_tail_842_; lean_object* v___x_844_; uint8_t v_isShared_845_; uint8_t v_isSharedCheck_863_; 
v_head_841_ = lean_ctor_get(v_a_838_, 0);
v_tail_842_ = lean_ctor_get(v_a_838_, 1);
v_isSharedCheck_863_ = !lean_is_exclusive(v_a_838_);
if (v_isSharedCheck_863_ == 0)
{
v___x_844_ = v_a_838_;
v_isShared_845_ = v_isSharedCheck_863_;
goto v_resetjp_843_;
}
else
{
lean_inc(v_tail_842_);
lean_inc(v_head_841_);
lean_dec(v_a_838_);
v___x_844_ = lean_box(0);
v_isShared_845_ = v_isSharedCheck_863_;
goto v_resetjp_843_;
}
v_resetjp_843_:
{
lean_object* v_fst_846_; lean_object* v_snd_847_; lean_object* v___x_849_; uint8_t v_isShared_850_; uint8_t v_isSharedCheck_862_; 
v_fst_846_ = lean_ctor_get(v_head_841_, 0);
v_snd_847_ = lean_ctor_get(v_head_841_, 1);
v_isSharedCheck_862_ = !lean_is_exclusive(v_head_841_);
if (v_isSharedCheck_862_ == 0)
{
v___x_849_ = v_head_841_;
v_isShared_850_ = v_isSharedCheck_862_;
goto v_resetjp_848_;
}
else
{
lean_inc(v_snd_847_);
lean_inc(v_fst_846_);
lean_dec(v_head_841_);
v___x_849_ = lean_box(0);
v_isShared_850_ = v_isSharedCheck_862_;
goto v_resetjp_848_;
}
v_resetjp_848_:
{
lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_856_; 
v___x_851_ = lean_unsigned_to_nat(0u);
v___x_852_ = l_List_getD___redArg(v_idx_836_, v_snd_847_, v___x_851_);
v___x_853_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_854_ = l_List_getD___redArg(v_places_837_, v___x_852_, v___x_853_);
if (v_isShared_850_ == 0)
{
lean_ctor_set(v___x_849_, 1, v___x_854_);
v___x_856_ = v___x_849_;
goto v_reusejp_855_;
}
else
{
lean_object* v_reuseFailAlloc_861_; 
v_reuseFailAlloc_861_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_861_, 0, v_fst_846_);
lean_ctor_set(v_reuseFailAlloc_861_, 1, v___x_854_);
v___x_856_ = v_reuseFailAlloc_861_;
goto v_reusejp_855_;
}
v_reusejp_855_:
{
lean_object* v___x_858_; 
if (v_isShared_845_ == 0)
{
lean_ctor_set(v___x_844_, 1, v_a_839_);
lean_ctor_set(v___x_844_, 0, v___x_856_);
v___x_858_ = v___x_844_;
goto v_reusejp_857_;
}
else
{
lean_object* v_reuseFailAlloc_860_; 
v_reuseFailAlloc_860_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_860_, 0, v___x_856_);
lean_ctor_set(v_reuseFailAlloc_860_, 1, v_a_839_);
v___x_858_ = v_reuseFailAlloc_860_;
goto v_reusejp_857_;
}
v_reusejp_857_:
{
v_a_838_ = v_tail_842_;
v_a_839_ = v___x_858_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3___boxed(lean_object* v_idx_864_, lean_object* v_places_865_, lean_object* v_a_866_, lean_object* v_a_867_){
_start:
{
lean_object* v_res_868_; 
v_res_868_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(v_idx_864_, v_places_865_, v_a_866_, v_a_867_);
lean_dec(v_places_865_);
lean_dec(v_idx_864_);
return v_res_868_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2(lean_object* v_pos_869_, lean_object* v_g_870_, lean_object* v_name_871_, lean_object* v_cx_872_){
_start:
{
lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v_places_875_; lean_object* v___x_876_; lean_object* v___x_877_; lean_object* v___x_878_; lean_object* v___x_879_; lean_object* v_idx_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; 
lean_inc_n(v_g_870_, 2);
v___x_873_ = lp_choreo_Choreo_halfPlaces(v_name_871_, v_g_870_, v_cx_872_);
v___x_874_ = lean_box(0);
v_places_875_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__1(v___x_873_, v___x_874_);
v___x_876_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__2(v_pos_869_, v_g_870_, v___x_874_);
v___x_877_ = lean_unsigned_to_nat(6u);
v___x_878_ = l_List_lengthTR___redArg(v_g_870_);
v___x_879_ = l_List_range(v___x_878_);
v_idx_880_ = lp_choreo_Choreo_improveAssign(v___x_876_, v_places_875_, v___x_877_, v___x_879_);
lean_dec(v___x_876_);
v___x_881_ = lean_unsigned_to_nat(0u);
v___x_882_ = l_List_zipIdxTR___redArg(v_g_870_, v___x_881_);
v___x_883_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__3(v_idx_880_, v_places_875_, v___x_882_, v___x_874_);
lean_dec(v_places_875_);
lean_dec(v_idx_880_);
return v___x_883_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp___lam__2___boxed(lean_object* v_pos_884_, lean_object* v_g_885_, lean_object* v_name_886_, lean_object* v_cx_887_){
_start:
{
lean_object* v_res_888_; 
v_res_888_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_884_, v_g_885_, v_name_886_, v_cx_887_);
lean_dec_ref(v_name_886_);
lean_dec(v_pos_884_);
return v_res_888_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(lean_object* v_cur_889_, lean_object* v_o_890_, lean_object* v_a_891_, lean_object* v_a_892_){
_start:
{
if (lean_obj_tag(v_a_891_) == 0)
{
lean_object* v___x_893_; 
v___x_893_ = l_List_reverse___redArg(v_a_892_);
return v___x_893_;
}
else
{
lean_object* v_head_894_; lean_object* v_tail_895_; lean_object* v___x_897_; uint8_t v_isShared_898_; uint8_t v_isSharedCheck_907_; 
v_head_894_ = lean_ctor_get(v_a_891_, 0);
v_tail_895_ = lean_ctor_get(v_a_891_, 1);
v_isSharedCheck_907_ = !lean_is_exclusive(v_a_891_);
if (v_isSharedCheck_907_ == 0)
{
v___x_897_ = v_a_891_;
v_isShared_898_ = v_isSharedCheck_907_;
goto v_resetjp_896_;
}
else
{
lean_inc(v_tail_895_);
lean_inc(v_head_894_);
lean_dec(v_a_891_);
v___x_897_ = lean_box(0);
v_isShared_898_ = v_isSharedCheck_907_;
goto v_resetjp_896_;
}
v_resetjp_896_:
{
uint8_t v_ccw_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_904_; 
v_ccw_899_ = lean_ctor_get_uint8(v_o_890_, sizeof(void*)*16);
v___x_900_ = lp_choreo_Choreo_centre;
v___x_901_ = lp_choreo_Choreo_State_at(v_cur_889_, v_head_894_);
v___x_902_ = lp_choreo_Choreo_rotatePath(v___x_900_, v___x_901_, v_ccw_899_);
lean_dec_ref(v___x_901_);
if (v_isShared_898_ == 0)
{
lean_ctor_set(v___x_897_, 1, v_a_892_);
lean_ctor_set(v___x_897_, 0, v___x_902_);
v___x_904_ = v___x_897_;
goto v_reusejp_903_;
}
else
{
lean_object* v_reuseFailAlloc_906_; 
v_reuseFailAlloc_906_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_906_, 0, v___x_902_);
lean_ctor_set(v_reuseFailAlloc_906_, 1, v_a_892_);
v___x_904_ = v_reuseFailAlloc_906_;
goto v_reusejp_903_;
}
v_reusejp_903_:
{
v_a_891_ = v_tail_895_;
v_a_892_ = v___x_904_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4___boxed(lean_object* v_cur_908_, lean_object* v_o_909_, lean_object* v_a_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_cur_908_, v_o_909_, v_a_910_, v_a_911_);
lean_dec_ref(v_o_909_);
lean_dec(v_cur_908_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(lean_object* v_cur_913_, lean_object* v_a_914_, lean_object* v_a_915_){
_start:
{
if (lean_obj_tag(v_a_914_) == 0)
{
lean_object* v___x_916_; 
v___x_916_ = l_List_reverse___redArg(v_a_915_);
return v___x_916_;
}
else
{
lean_object* v_head_917_; lean_object* v_tail_918_; lean_object* v___x_920_; uint8_t v_isShared_921_; uint8_t v_isSharedCheck_932_; 
v_head_917_ = lean_ctor_get(v_a_914_, 0);
v_tail_918_ = lean_ctor_get(v_a_914_, 1);
v_isSharedCheck_932_ = !lean_is_exclusive(v_a_914_);
if (v_isSharedCheck_932_ == 0)
{
v___x_920_ = v_a_914_;
v_isShared_921_ = v_isSharedCheck_932_;
goto v_resetjp_919_;
}
else
{
lean_inc(v_tail_918_);
lean_inc(v_head_917_);
lean_dec(v_a_914_);
v___x_920_ = lean_box(0);
v_isShared_921_ = v_isSharedCheck_932_;
goto v_resetjp_919_;
}
v_resetjp_919_:
{
lean_object* v___x_922_; lean_object* v_x_923_; lean_object* v_y_924_; lean_object* v___x_925_; lean_object* v___x_926_; lean_object* v___x_927_; lean_object* v___x_929_; 
v___x_922_ = lp_choreo_Choreo_centre;
v_x_923_ = lean_ctor_get(v___x_922_, 0);
v_y_924_ = lean_ctor_get(v___x_922_, 1);
lean_inc(v_head_917_);
v___x_925_ = lp_choreo_Choreo_State_at(v_cur_913_, v_head_917_);
v___x_926_ = lp_choreo_Choreo_distSq(v___x_925_, v___x_922_);
lean_dec_ref(v___x_925_);
lean_inc(v_y_924_);
lean_inc(v_x_923_);
v___x_927_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_927_, 0, v_head_917_);
lean_ctor_set(v___x_927_, 1, v_x_923_);
lean_ctor_set(v___x_927_, 2, v_y_924_);
lean_ctor_set(v___x_927_, 3, v___x_926_);
if (v_isShared_921_ == 0)
{
lean_ctor_set(v___x_920_, 1, v_a_915_);
lean_ctor_set(v___x_920_, 0, v___x_927_);
v___x_929_ = v___x_920_;
goto v_reusejp_928_;
}
else
{
lean_object* v_reuseFailAlloc_931_; 
v_reuseFailAlloc_931_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_931_, 0, v___x_927_);
lean_ctor_set(v_reuseFailAlloc_931_, 1, v_a_915_);
v___x_929_ = v_reuseFailAlloc_931_;
goto v_reusejp_928_;
}
v_reusejp_928_:
{
v_a_914_ = v_tail_918_;
v_a_915_ = v___x_929_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5___boxed(lean_object* v_cur_933_, lean_object* v_a_934_, lean_object* v_a_935_){
_start:
{
lean_object* v_res_936_; 
v_res_936_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_cur_933_, v_a_934_, v_a_935_);
lean_dec(v_cur_933_);
return v_res_936_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(lean_object* v_n_943_, lean_object* v_o_944_, lean_object* v_gap_945_, lean_object* v_x_946_, lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_947_) == 0)
{
lean_dec(v_n_943_);
return v_x_946_;
}
else
{
lean_object* v_tail_948_; lean_object* v___x_950_; uint8_t v_isShared_951_; uint8_t v_isSharedCheck_996_; 
v_tail_948_ = lean_ctor_get(v_x_947_, 1);
v_isSharedCheck_996_ = !lean_is_exclusive(v_x_947_);
if (v_isSharedCheck_996_ == 0)
{
lean_object* v_unused_997_; 
v_unused_997_ = lean_ctor_get(v_x_947_, 0);
lean_dec(v_unused_997_);
v___x_950_ = v_x_947_;
v_isShared_951_ = v_isSharedCheck_996_;
goto v_resetjp_949_;
}
else
{
lean_inc(v_tail_948_);
lean_dec(v_x_947_);
v___x_950_ = lean_box(0);
v_isShared_951_ = v_isSharedCheck_996_;
goto v_resetjp_949_;
}
v_resetjp_949_:
{
lean_object* v_pos_952_; lean_object* v_steps_953_; lean_object* v___x_955_; uint8_t v_isShared_956_; uint8_t v_isSharedCheck_995_; 
v_pos_952_ = lean_ctor_get(v_x_946_, 0);
v_steps_953_ = lean_ctor_get(v_x_946_, 1);
v_isSharedCheck_995_ = !lean_is_exclusive(v_x_946_);
if (v_isSharedCheck_995_ == 0)
{
v___x_955_ = v_x_946_;
v_isShared_956_ = v_isSharedCheck_995_;
goto v_resetjp_954_;
}
else
{
lean_inc(v_steps_953_);
lean_inc(v_pos_952_);
lean_dec(v_x_946_);
v___x_955_ = lean_box(0);
v_isShared_956_ = v_isSharedCheck_995_;
goto v_resetjp_954_;
}
v_resetjp_954_:
{
lean_object* v_section_x27_957_; lean_object* v_title_958_; lean_object* v_counts_959_; lean_object* v_quarters_960_; uint8_t v_ccw_961_; lean_object* v_index_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v_paths_965_; lean_object* v_orbits_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v_next_985_; lean_object* v___x_986_; lean_object* v___x_988_; 
v_section_x27_957_ = lean_ctor_get(v_o_944_, 1);
v_title_958_ = lean_ctor_get(v_o_944_, 2);
v_counts_959_ = lean_ctor_get(v_o_944_, 4);
v_quarters_960_ = lean_ctor_get(v_o_944_, 5);
v_ccw_961_ = lean_ctor_get_uint8(v_o_944_, sizeof(void*)*16);
v_index_962_ = lean_ctor_get(v_o_944_, 15);
lean_inc_n(v_n_943_, 3);
v___x_963_ = l_List_range(v_n_943_);
v___x_964_ = lean_box(0);
lean_inc(v___x_963_);
v_paths_965_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_pos_952_, v_o_944_, v___x_963_, v___x_964_);
v_orbits_966_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_pos_952_, v___x_963_, v___x_964_);
v___x_967_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__0));
v___x_968_ = lean_unsigned_to_nat(90u);
v___x_969_ = lean_nat_mul(v_quarters_960_, v___x_968_);
v___x_970_ = l_Nat_reprFast(v___x_969_);
v___x_971_ = lean_string_append(v___x_967_, v___x_970_);
lean_dec_ref(v___x_970_);
v___x_972_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__1));
v___x_973_ = lean_string_append(v___x_971_, v___x_972_);
v___x_974_ = lp_choreo_Choreo_compileOp___lam__0(v_title_958_, v___x_973_);
lean_dec_ref(v___x_973_);
v___x_975_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2));
v___x_976_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__3));
v___x_977_ = lp_choreo_Choreo_compileOp___lam__0(v_title_958_, v___x_976_);
v___x_978_ = lp_choreo_Choreo_centre;
v___x_979_ = lp_choreo_Choreo_chooseCerts(v_n_943_, v_paths_965_, v_gap_945_);
lean_dec(v_paths_965_);
lean_inc(v_counts_959_);
v___x_980_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_980_, 0, v___x_978_);
lean_ctor_set(v___x_980_, 1, v_counts_959_);
lean_ctor_set(v___x_980_, 2, v___x_979_);
lean_ctor_set(v___x_980_, 3, v_orbits_966_);
lean_ctor_set_uint8(v___x_980_, sizeof(void*)*4, v_ccw_961_);
v___x_981_ = lean_box(0);
lean_inc_ref(v___x_980_);
v___x_982_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_982_, 0, v___x_980_);
lean_ctor_set(v___x_982_, 1, v___x_981_);
lean_ctor_set(v___x_982_, 2, v___x_981_);
v___x_983_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__4));
v___x_984_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__5));
v_next_985_ = lp_choreo_Choreo_Op_next(v___x_980_, v_n_943_, v_pos_952_);
lean_inc(v_next_985_);
lean_inc(v_index_962_);
lean_inc_ref(v_section_x27_957_);
v___x_986_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_986_, 0, v___x_974_);
lean_ctor_set(v___x_986_, 1, v_section_x27_957_);
lean_ctor_set(v___x_986_, 2, v_index_962_);
lean_ctor_set(v___x_986_, 3, v___x_975_);
lean_ctor_set(v___x_986_, 4, v___x_977_);
lean_ctor_set(v___x_986_, 5, v___x_982_);
lean_ctor_set(v___x_986_, 6, v___x_983_);
lean_ctor_set(v___x_986_, 7, v___x_984_);
lean_ctor_set(v___x_986_, 8, v_pos_952_);
lean_ctor_set(v___x_986_, 9, v_next_985_);
if (v_isShared_951_ == 0)
{
lean_ctor_set(v___x_950_, 1, v___x_964_);
lean_ctor_set(v___x_950_, 0, v___x_986_);
v___x_988_ = v___x_950_;
goto v_reusejp_987_;
}
else
{
lean_object* v_reuseFailAlloc_994_; 
v_reuseFailAlloc_994_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_994_, 0, v___x_986_);
lean_ctor_set(v_reuseFailAlloc_994_, 1, v___x_964_);
v___x_988_ = v_reuseFailAlloc_994_;
goto v_reusejp_987_;
}
v_reusejp_987_:
{
lean_object* v___x_989_; lean_object* v___x_991_; 
v___x_989_ = l_List_appendTR___redArg(v_steps_953_, v___x_988_);
if (v_isShared_956_ == 0)
{
lean_ctor_set(v___x_955_, 1, v___x_989_);
lean_ctor_set(v___x_955_, 0, v_next_985_);
v___x_991_ = v___x_955_;
goto v_reusejp_990_;
}
else
{
lean_object* v_reuseFailAlloc_993_; 
v_reuseFailAlloc_993_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_993_, 0, v_next_985_);
lean_ctor_set(v_reuseFailAlloc_993_, 1, v___x_989_);
v___x_991_ = v_reuseFailAlloc_993_;
goto v_reusejp_990_;
}
v_reusejp_990_:
{
v_x_946_ = v___x_991_;
v_x_947_ = v_tail_948_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___boxed(lean_object* v_n_998_, lean_object* v_o_999_, lean_object* v_gap_1000_, lean_object* v_x_1001_, lean_object* v_x_1002_){
_start:
{
lean_object* v_res_1003_; 
v_res_1003_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(v_n_998_, v_o_999_, v_gap_1000_, v_x_1001_, v_x_1002_);
lean_dec(v_gap_1000_);
lean_dec_ref(v_o_999_);
return v_res_1003_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12(lean_object* v_o_1004_, lean_object* v_n_1005_, lean_object* v_gap_1006_, lean_object* v_x_1007_, lean_object* v_x_1008_){
_start:
{
if (lean_obj_tag(v_x_1008_) == 0)
{
lean_dec(v_n_1005_);
return v_x_1007_;
}
else
{
lean_object* v_tail_1009_; lean_object* v___x_1011_; uint8_t v_isShared_1012_; uint8_t v_isSharedCheck_1057_; 
v_tail_1009_ = lean_ctor_get(v_x_1008_, 1);
v_isSharedCheck_1057_ = !lean_is_exclusive(v_x_1008_);
if (v_isSharedCheck_1057_ == 0)
{
lean_object* v_unused_1058_; 
v_unused_1058_ = lean_ctor_get(v_x_1008_, 0);
lean_dec(v_unused_1058_);
v___x_1011_ = v_x_1008_;
v_isShared_1012_ = v_isSharedCheck_1057_;
goto v_resetjp_1010_;
}
else
{
lean_inc(v_tail_1009_);
lean_dec(v_x_1008_);
v___x_1011_ = lean_box(0);
v_isShared_1012_ = v_isSharedCheck_1057_;
goto v_resetjp_1010_;
}
v_resetjp_1010_:
{
lean_object* v_pos_1013_; lean_object* v_steps_1014_; lean_object* v___x_1016_; uint8_t v_isShared_1017_; uint8_t v_isSharedCheck_1056_; 
v_pos_1013_ = lean_ctor_get(v_x_1007_, 0);
v_steps_1014_ = lean_ctor_get(v_x_1007_, 1);
v_isSharedCheck_1056_ = !lean_is_exclusive(v_x_1007_);
if (v_isSharedCheck_1056_ == 0)
{
v___x_1016_ = v_x_1007_;
v_isShared_1017_ = v_isSharedCheck_1056_;
goto v_resetjp_1015_;
}
else
{
lean_inc(v_steps_1014_);
lean_inc(v_pos_1013_);
lean_dec(v_x_1007_);
v___x_1016_ = lean_box(0);
v_isShared_1017_ = v_isSharedCheck_1056_;
goto v_resetjp_1015_;
}
v_resetjp_1015_:
{
lean_object* v_section_x27_1018_; lean_object* v_title_1019_; lean_object* v_counts_1020_; lean_object* v_quarters_1021_; uint8_t v_ccw_1022_; lean_object* v_index_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v_paths_1026_; lean_object* v_orbits_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; lean_object* v___x_1045_; lean_object* v_next_1046_; lean_object* v___x_1047_; lean_object* v___x_1049_; 
v_section_x27_1018_ = lean_ctor_get(v_o_1004_, 1);
v_title_1019_ = lean_ctor_get(v_o_1004_, 2);
v_counts_1020_ = lean_ctor_get(v_o_1004_, 4);
v_quarters_1021_ = lean_ctor_get(v_o_1004_, 5);
v_ccw_1022_ = lean_ctor_get_uint8(v_o_1004_, sizeof(void*)*16);
v_index_1023_ = lean_ctor_get(v_o_1004_, 15);
lean_inc_n(v_n_1005_, 3);
v___x_1024_ = l_List_range(v_n_1005_);
v___x_1025_ = lean_box(0);
lean_inc(v___x_1024_);
v_paths_1026_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__4(v_pos_1013_, v_o_1004_, v___x_1024_, v___x_1025_);
v_orbits_1027_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__5(v_pos_1013_, v___x_1024_, v___x_1025_);
v___x_1028_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__0));
v___x_1029_ = lean_unsigned_to_nat(90u);
v___x_1030_ = lean_nat_mul(v_quarters_1021_, v___x_1029_);
v___x_1031_ = l_Nat_reprFast(v___x_1030_);
v___x_1032_ = lean_string_append(v___x_1028_, v___x_1031_);
lean_dec_ref(v___x_1031_);
v___x_1033_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__1));
v___x_1034_ = lean_string_append(v___x_1032_, v___x_1033_);
v___x_1035_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1019_, v___x_1034_);
lean_dec_ref(v___x_1034_);
v___x_1036_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2));
v___x_1037_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__3));
v___x_1038_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1019_, v___x_1037_);
v___x_1039_ = lp_choreo_Choreo_centre;
v___x_1040_ = lp_choreo_Choreo_chooseCerts(v_n_1005_, v_paths_1026_, v_gap_1006_);
lean_dec(v_paths_1026_);
lean_inc(v_counts_1020_);
v___x_1041_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v___x_1041_, 0, v___x_1039_);
lean_ctor_set(v___x_1041_, 1, v_counts_1020_);
lean_ctor_set(v___x_1041_, 2, v___x_1040_);
lean_ctor_set(v___x_1041_, 3, v_orbits_1027_);
lean_ctor_set_uint8(v___x_1041_, sizeof(void*)*4, v_ccw_1022_);
v___x_1042_ = lean_box(0);
lean_inc_ref(v___x_1041_);
v___x_1043_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1043_, 0, v___x_1041_);
lean_ctor_set(v___x_1043_, 1, v___x_1042_);
lean_ctor_set(v___x_1043_, 2, v___x_1042_);
v___x_1044_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__4));
v___x_1045_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__5));
v_next_1046_ = lp_choreo_Choreo_Op_next(v___x_1041_, v_n_1005_, v_pos_1013_);
lean_inc(v_next_1046_);
lean_inc(v_index_1023_);
lean_inc_ref(v_section_x27_1018_);
v___x_1047_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1047_, 0, v___x_1035_);
lean_ctor_set(v___x_1047_, 1, v_section_x27_1018_);
lean_ctor_set(v___x_1047_, 2, v_index_1023_);
lean_ctor_set(v___x_1047_, 3, v___x_1036_);
lean_ctor_set(v___x_1047_, 4, v___x_1038_);
lean_ctor_set(v___x_1047_, 5, v___x_1043_);
lean_ctor_set(v___x_1047_, 6, v___x_1044_);
lean_ctor_set(v___x_1047_, 7, v___x_1045_);
lean_ctor_set(v___x_1047_, 8, v_pos_1013_);
lean_ctor_set(v___x_1047_, 9, v_next_1046_);
if (v_isShared_1012_ == 0)
{
lean_ctor_set(v___x_1011_, 1, v___x_1025_);
lean_ctor_set(v___x_1011_, 0, v___x_1047_);
v___x_1049_ = v___x_1011_;
goto v_reusejp_1048_;
}
else
{
lean_object* v_reuseFailAlloc_1055_; 
v_reuseFailAlloc_1055_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1055_, 0, v___x_1047_);
lean_ctor_set(v_reuseFailAlloc_1055_, 1, v___x_1025_);
v___x_1049_ = v_reuseFailAlloc_1055_;
goto v_reusejp_1048_;
}
v_reusejp_1048_:
{
lean_object* v___x_1050_; lean_object* v___x_1052_; 
v___x_1050_ = l_List_appendTR___redArg(v_steps_1014_, v___x_1049_);
if (v_isShared_1017_ == 0)
{
lean_ctor_set(v___x_1016_, 1, v___x_1050_);
lean_ctor_set(v___x_1016_, 0, v_next_1046_);
v___x_1052_ = v___x_1016_;
goto v_reusejp_1051_;
}
else
{
lean_object* v_reuseFailAlloc_1054_; 
v_reuseFailAlloc_1054_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1054_, 0, v_next_1046_);
lean_ctor_set(v_reuseFailAlloc_1054_, 1, v___x_1050_);
v___x_1052_ = v_reuseFailAlloc_1054_;
goto v_reusejp_1051_;
}
v_reusejp_1051_:
{
lean_object* v___x_1053_; 
v___x_1053_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13(v_n_1005_, v_o_1004_, v_gap_1006_, v___x_1052_, v_tail_1009_);
return v___x_1053_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12___boxed(lean_object* v_o_1059_, lean_object* v_n_1060_, lean_object* v_gap_1061_, lean_object* v_x_1062_, lean_object* v_x_1063_){
_start:
{
lean_object* v_res_1064_; 
v_res_1064_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12(v_o_1059_, v_n_1060_, v_gap_1061_, v_x_1062_, v_x_1063_);
lean_dec(v_gap_1061_);
lean_dec_ref(v_o_1059_);
return v_res_1064_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10(lean_object* v_n_1069_, lean_object* v_gap_1070_, lean_object* v_o_1071_, lean_object* v_title_1072_, lean_object* v_x_1073_, lean_object* v_x_1074_){
_start:
{
if (lean_obj_tag(v_x_1074_) == 0)
{
lean_dec_ref(v_title_1072_);
lean_dec_ref(v_o_1071_);
lean_dec(v_gap_1070_);
lean_dec(v_n_1069_);
return v_x_1073_;
}
else
{
lean_object* v_head_1075_; lean_object* v_tail_1076_; lean_object* v___x_1078_; uint8_t v_isShared_1079_; uint8_t v_isSharedCheck_1146_; 
v_head_1075_ = lean_ctor_get(v_x_1074_, 0);
v_tail_1076_ = lean_ctor_get(v_x_1074_, 1);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_x_1074_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1078_ = v_x_1074_;
v_isShared_1079_ = v_isSharedCheck_1146_;
goto v_resetjp_1077_;
}
else
{
lean_inc(v_tail_1076_);
lean_inc(v_head_1075_);
lean_dec(v_x_1074_);
v___x_1078_ = lean_box(0);
v_isShared_1079_ = v_isSharedCheck_1146_;
goto v_resetjp_1077_;
}
v_resetjp_1077_:
{
lean_object* v_fst_1080_; lean_object* v___x_1082_; uint8_t v_isShared_1083_; uint8_t v_isSharedCheck_1144_; 
v_fst_1080_ = lean_ctor_get(v_x_1073_, 0);
v_isSharedCheck_1144_ = !lean_is_exclusive(v_x_1073_);
if (v_isSharedCheck_1144_ == 0)
{
lean_object* v_unused_1145_; 
v_unused_1145_ = lean_ctor_get(v_x_1073_, 1);
lean_dec(v_unused_1145_);
v___x_1082_ = v_x_1073_;
v_isShared_1083_ = v_isSharedCheck_1144_;
goto v_resetjp_1081_;
}
else
{
lean_inc(v_fst_1080_);
lean_dec(v_x_1073_);
v___x_1082_ = lean_box(0);
v_isShared_1083_ = v_isSharedCheck_1144_;
goto v_resetjp_1081_;
}
v_resetjp_1081_:
{
lean_object* v_section_x27_1084_; lean_object* v_title_1085_; lean_object* v_index_1086_; lean_object* v___y_1088_; lean_object* v___x_1141_; lean_object* v___x_1142_; uint8_t v___x_1143_; 
v_section_x27_1084_ = lean_ctor_get(v_o_1071_, 1);
v_title_1085_ = lean_ctor_get(v_o_1071_, 2);
v_index_1086_ = lean_ctor_get(v_o_1071_, 15);
v___x_1141_ = lean_string_utf8_byte_size(v_title_1085_);
v___x_1142_ = lean_unsigned_to_nat(0u);
v___x_1143_ = lean_nat_dec_eq(v___x_1141_, v___x_1142_);
if (v___x_1143_ == 0)
{
lean_inc_ref(v_title_1085_);
v___y_1088_ = v_title_1085_;
goto v___jp_1087_;
}
else
{
lean_inc_ref(v_title_1072_);
v___y_1088_ = v_title_1072_;
goto v___jp_1087_;
}
v___jp_1087_:
{
lean_object* v_snd_1089_; lean_object* v_fst_1090_; lean_object* v___x_1092_; uint8_t v_isShared_1093_; uint8_t v_isSharedCheck_1140_; 
v_snd_1089_ = lean_ctor_get(v_head_1075_, 1);
v_fst_1090_ = lean_ctor_get(v_head_1075_, 0);
v_isSharedCheck_1140_ = !lean_is_exclusive(v_head_1075_);
if (v_isSharedCheck_1140_ == 0)
{
v___x_1092_ = v_head_1075_;
v_isShared_1093_ = v_isSharedCheck_1140_;
goto v_resetjp_1091_;
}
else
{
lean_inc(v_snd_1089_);
lean_inc(v_fst_1090_);
lean_dec(v_head_1075_);
v___x_1092_ = lean_box(0);
v_isShared_1093_ = v_isSharedCheck_1140_;
goto v_resetjp_1091_;
}
v_resetjp_1091_:
{
lean_object* v_fst_1094_; lean_object* v_snd_1095_; lean_object* v___x_1097_; uint8_t v_isShared_1098_; uint8_t v_isSharedCheck_1139_; 
v_fst_1094_ = lean_ctor_get(v_snd_1089_, 0);
v_snd_1095_ = lean_ctor_get(v_snd_1089_, 1);
v_isSharedCheck_1139_ = !lean_is_exclusive(v_snd_1089_);
if (v_isSharedCheck_1139_ == 0)
{
v___x_1097_ = v_snd_1089_;
v_isShared_1098_ = v_isSharedCheck_1139_;
goto v_resetjp_1096_;
}
else
{
lean_inc(v_snd_1095_);
lean_inc(v_fst_1094_);
lean_dec(v_snd_1089_);
v___x_1097_ = lean_box(0);
v_isShared_1098_ = v_isSharedCheck_1139_;
goto v_resetjp_1096_;
}
v_resetjp_1096_:
{
lean_object* v_pos_1099_; lean_object* v_steps_1100_; lean_object* v___x_1102_; uint8_t v_isShared_1103_; uint8_t v_isSharedCheck_1138_; 
v_pos_1099_ = lean_ctor_get(v_fst_1080_, 0);
v_steps_1100_ = lean_ctor_get(v_fst_1080_, 1);
v_isSharedCheck_1138_ = !lean_is_exclusive(v_fst_1080_);
if (v_isSharedCheck_1138_ == 0)
{
v___x_1102_ = v_fst_1080_;
v_isShared_1103_ = v_isSharedCheck_1138_;
goto v_resetjp_1101_;
}
else
{
lean_inc(v_steps_1100_);
lean_inc(v_pos_1099_);
lean_dec(v_fst_1080_);
v___x_1102_ = lean_box(0);
v_isShared_1103_ = v_isSharedCheck_1138_;
goto v_resetjp_1101_;
}
v_resetjp_1101_:
{
lean_object* v___x_1104_; lean_object* v___x_1105_; lean_object* v___x_1106_; lean_object* v___x_1108_; 
lean_inc(v_n_1069_);
v___x_1104_ = l_List_range(v_n_1069_);
v___x_1105_ = lean_box(0);
v___x_1106_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_fst_1090_, v_fst_1094_, v___x_1104_, v___x_1105_);
if (v_isShared_1093_ == 0)
{
lean_ctor_set_tag(v___x_1092_, 2);
lean_ctor_set(v___x_1092_, 1, v_snd_1095_);
lean_ctor_set(v___x_1092_, 0, v___x_1106_);
v___x_1108_ = v___x_1092_;
goto v_reusejp_1107_;
}
else
{
lean_object* v_reuseFailAlloc_1137_; 
v_reuseFailAlloc_1137_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1137_, 0, v___x_1106_);
lean_ctor_set(v_reuseFailAlloc_1137_, 1, v_snd_1095_);
v___x_1108_ = v_reuseFailAlloc_1137_;
goto v_reusejp_1107_;
}
v_reusejp_1107_:
{
lean_object* v___x_1110_; 
lean_inc(v_gap_1070_);
lean_inc(v_n_1069_);
if (v_isShared_1083_ == 0)
{
lean_ctor_set_tag(v___x_1082_, 2);
lean_ctor_set(v___x_1082_, 1, v_gap_1070_);
lean_ctor_set(v___x_1082_, 0, v_n_1069_);
v___x_1110_ = v___x_1082_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1136_; 
v_reuseFailAlloc_1136_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1136_, 0, v_n_1069_);
lean_ctor_set(v_reuseFailAlloc_1136_, 1, v_gap_1070_);
v___x_1110_ = v_reuseFailAlloc_1136_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
lean_object* v___x_1111_; lean_object* v___x_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; lean_object* v___x_1119_; lean_object* v___x_1120_; lean_object* v___x_1121_; lean_object* v_next_1122_; lean_object* v___x_1123_; lean_object* v___x_1125_; 
v___x_1111_ = lean_box(0);
lean_inc_ref(v___x_1108_);
v___x_1112_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1112_, 0, v___x_1108_);
lean_ctor_set(v___x_1112_, 1, v___x_1110_);
lean_ctor_set(v___x_1112_, 2, v___x_1111_);
v___x_1113_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0));
v___x_1114_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1115_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1116_ = lean_int_ediv(v_gap_1070_, v___x_1115_);
v___x_1117_ = l_Int_repr(v___x_1116_);
lean_dec(v___x_1116_);
v___x_1118_ = lean_string_append(v___x_1114_, v___x_1117_);
lean_dec_ref(v___x_1117_);
v___x_1119_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2));
v___x_1120_ = lean_string_append(v___x_1118_, v___x_1119_);
v___x_1121_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__3));
lean_inc(v_n_1069_);
v_next_1122_ = lp_choreo_Choreo_Op_next(v___x_1108_, v_n_1069_, v_pos_1099_);
lean_inc(v_next_1122_);
lean_inc_ref(v_title_1072_);
lean_inc(v_index_1086_);
lean_inc_ref(v_section_x27_1084_);
v___x_1123_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1123_, 0, v___y_1088_);
lean_ctor_set(v___x_1123_, 1, v_section_x27_1084_);
lean_ctor_set(v___x_1123_, 2, v_index_1086_);
lean_ctor_set(v___x_1123_, 3, v___x_1113_);
lean_ctor_set(v___x_1123_, 4, v_title_1072_);
lean_ctor_set(v___x_1123_, 5, v___x_1112_);
lean_ctor_set(v___x_1123_, 6, v___x_1120_);
lean_ctor_set(v___x_1123_, 7, v___x_1121_);
lean_ctor_set(v___x_1123_, 8, v_pos_1099_);
lean_ctor_set(v___x_1123_, 9, v_next_1122_);
if (v_isShared_1079_ == 0)
{
lean_ctor_set(v___x_1078_, 1, v___x_1105_);
lean_ctor_set(v___x_1078_, 0, v___x_1123_);
v___x_1125_ = v___x_1078_;
goto v_reusejp_1124_;
}
else
{
lean_object* v_reuseFailAlloc_1135_; 
v_reuseFailAlloc_1135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1135_, 0, v___x_1123_);
lean_ctor_set(v_reuseFailAlloc_1135_, 1, v___x_1105_);
v___x_1125_ = v_reuseFailAlloc_1135_;
goto v_reusejp_1124_;
}
v_reusejp_1124_:
{
lean_object* v___x_1126_; lean_object* v___x_1128_; 
v___x_1126_ = l_List_appendTR___redArg(v_steps_1100_, v___x_1125_);
if (v_isShared_1103_ == 0)
{
lean_ctor_set(v___x_1102_, 1, v___x_1126_);
lean_ctor_set(v___x_1102_, 0, v_next_1122_);
v___x_1128_ = v___x_1102_;
goto v_reusejp_1127_;
}
else
{
lean_object* v_reuseFailAlloc_1134_; 
v_reuseFailAlloc_1134_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1134_, 0, v_next_1122_);
lean_ctor_set(v_reuseFailAlloc_1134_, 1, v___x_1126_);
v___x_1128_ = v_reuseFailAlloc_1134_;
goto v_reusejp_1127_;
}
v_reusejp_1127_:
{
lean_object* v___x_1129_; lean_object* v___x_1131_; 
v___x_1129_ = lean_unsigned_to_nat(0u);
if (v_isShared_1098_ == 0)
{
lean_ctor_set(v___x_1097_, 1, v___x_1129_);
lean_ctor_set(v___x_1097_, 0, v___x_1128_);
v___x_1131_ = v___x_1097_;
goto v_reusejp_1130_;
}
else
{
lean_object* v_reuseFailAlloc_1133_; 
v_reuseFailAlloc_1133_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1133_, 0, v___x_1128_);
lean_ctor_set(v_reuseFailAlloc_1133_, 1, v___x_1129_);
v___x_1131_ = v_reuseFailAlloc_1133_;
goto v_reusejp_1130_;
}
v_reusejp_1130_:
{
v_x_1073_ = v___x_1131_;
v_x_1074_ = v_tail_1076_;
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
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_compileOp_spec__10(lean_object* v_o_1147_, lean_object* v_title_1148_, lean_object* v_n_1149_, lean_object* v_gap_1150_, lean_object* v_x_1151_, lean_object* v_x_1152_){
_start:
{
if (lean_obj_tag(v_x_1152_) == 0)
{
lean_dec(v_gap_1150_);
lean_dec(v_n_1149_);
lean_dec_ref(v_title_1148_);
lean_dec_ref(v_o_1147_);
return v_x_1151_;
}
else
{
lean_object* v_head_1153_; lean_object* v_tail_1154_; lean_object* v___x_1156_; uint8_t v_isShared_1157_; uint8_t v_isSharedCheck_1224_; 
v_head_1153_ = lean_ctor_get(v_x_1152_, 0);
v_tail_1154_ = lean_ctor_get(v_x_1152_, 1);
v_isSharedCheck_1224_ = !lean_is_exclusive(v_x_1152_);
if (v_isSharedCheck_1224_ == 0)
{
v___x_1156_ = v_x_1152_;
v_isShared_1157_ = v_isSharedCheck_1224_;
goto v_resetjp_1155_;
}
else
{
lean_inc(v_tail_1154_);
lean_inc(v_head_1153_);
lean_dec(v_x_1152_);
v___x_1156_ = lean_box(0);
v_isShared_1157_ = v_isSharedCheck_1224_;
goto v_resetjp_1155_;
}
v_resetjp_1155_:
{
lean_object* v_fst_1158_; lean_object* v___x_1160_; uint8_t v_isShared_1161_; uint8_t v_isSharedCheck_1222_; 
v_fst_1158_ = lean_ctor_get(v_x_1151_, 0);
v_isSharedCheck_1222_ = !lean_is_exclusive(v_x_1151_);
if (v_isSharedCheck_1222_ == 0)
{
lean_object* v_unused_1223_; 
v_unused_1223_ = lean_ctor_get(v_x_1151_, 1);
lean_dec(v_unused_1223_);
v___x_1160_ = v_x_1151_;
v_isShared_1161_ = v_isSharedCheck_1222_;
goto v_resetjp_1159_;
}
else
{
lean_inc(v_fst_1158_);
lean_dec(v_x_1151_);
v___x_1160_ = lean_box(0);
v_isShared_1161_ = v_isSharedCheck_1222_;
goto v_resetjp_1159_;
}
v_resetjp_1159_:
{
lean_object* v_section_x27_1162_; lean_object* v_title_1163_; lean_object* v_index_1164_; lean_object* v___y_1166_; lean_object* v___x_1219_; lean_object* v___x_1220_; uint8_t v___x_1221_; 
v_section_x27_1162_ = lean_ctor_get(v_o_1147_, 1);
v_title_1163_ = lean_ctor_get(v_o_1147_, 2);
v_index_1164_ = lean_ctor_get(v_o_1147_, 15);
v___x_1219_ = lean_string_utf8_byte_size(v_title_1163_);
v___x_1220_ = lean_unsigned_to_nat(0u);
v___x_1221_ = lean_nat_dec_eq(v___x_1219_, v___x_1220_);
if (v___x_1221_ == 0)
{
lean_inc_ref(v_title_1163_);
v___y_1166_ = v_title_1163_;
goto v___jp_1165_;
}
else
{
lean_inc_ref(v_title_1148_);
v___y_1166_ = v_title_1148_;
goto v___jp_1165_;
}
v___jp_1165_:
{
lean_object* v_snd_1167_; lean_object* v_fst_1168_; lean_object* v___x_1170_; uint8_t v_isShared_1171_; uint8_t v_isSharedCheck_1218_; 
v_snd_1167_ = lean_ctor_get(v_head_1153_, 1);
v_fst_1168_ = lean_ctor_get(v_head_1153_, 0);
v_isSharedCheck_1218_ = !lean_is_exclusive(v_head_1153_);
if (v_isSharedCheck_1218_ == 0)
{
v___x_1170_ = v_head_1153_;
v_isShared_1171_ = v_isSharedCheck_1218_;
goto v_resetjp_1169_;
}
else
{
lean_inc(v_snd_1167_);
lean_inc(v_fst_1168_);
lean_dec(v_head_1153_);
v___x_1170_ = lean_box(0);
v_isShared_1171_ = v_isSharedCheck_1218_;
goto v_resetjp_1169_;
}
v_resetjp_1169_:
{
lean_object* v_fst_1172_; lean_object* v_snd_1173_; lean_object* v___x_1175_; uint8_t v_isShared_1176_; uint8_t v_isSharedCheck_1217_; 
v_fst_1172_ = lean_ctor_get(v_snd_1167_, 0);
v_snd_1173_ = lean_ctor_get(v_snd_1167_, 1);
v_isSharedCheck_1217_ = !lean_is_exclusive(v_snd_1167_);
if (v_isSharedCheck_1217_ == 0)
{
v___x_1175_ = v_snd_1167_;
v_isShared_1176_ = v_isSharedCheck_1217_;
goto v_resetjp_1174_;
}
else
{
lean_inc(v_snd_1173_);
lean_inc(v_fst_1172_);
lean_dec(v_snd_1167_);
v___x_1175_ = lean_box(0);
v_isShared_1176_ = v_isSharedCheck_1217_;
goto v_resetjp_1174_;
}
v_resetjp_1174_:
{
lean_object* v_pos_1177_; lean_object* v_steps_1178_; lean_object* v___x_1180_; uint8_t v_isShared_1181_; uint8_t v_isSharedCheck_1216_; 
v_pos_1177_ = lean_ctor_get(v_fst_1158_, 0);
v_steps_1178_ = lean_ctor_get(v_fst_1158_, 1);
v_isSharedCheck_1216_ = !lean_is_exclusive(v_fst_1158_);
if (v_isSharedCheck_1216_ == 0)
{
v___x_1180_ = v_fst_1158_;
v_isShared_1181_ = v_isSharedCheck_1216_;
goto v_resetjp_1179_;
}
else
{
lean_inc(v_steps_1178_);
lean_inc(v_pos_1177_);
lean_dec(v_fst_1158_);
v___x_1180_ = lean_box(0);
v_isShared_1181_ = v_isSharedCheck_1216_;
goto v_resetjp_1179_;
}
v_resetjp_1179_:
{
lean_object* v___x_1182_; lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1186_; 
lean_inc(v_n_1149_);
v___x_1182_ = l_List_range(v_n_1149_);
v___x_1183_ = lean_box(0);
v___x_1184_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__0(v_fst_1168_, v_fst_1172_, v___x_1182_, v___x_1183_);
if (v_isShared_1171_ == 0)
{
lean_ctor_set_tag(v___x_1170_, 2);
lean_ctor_set(v___x_1170_, 1, v_snd_1173_);
lean_ctor_set(v___x_1170_, 0, v___x_1184_);
v___x_1186_ = v___x_1170_;
goto v_reusejp_1185_;
}
else
{
lean_object* v_reuseFailAlloc_1215_; 
v_reuseFailAlloc_1215_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1215_, 0, v___x_1184_);
lean_ctor_set(v_reuseFailAlloc_1215_, 1, v_snd_1173_);
v___x_1186_ = v_reuseFailAlloc_1215_;
goto v_reusejp_1185_;
}
v_reusejp_1185_:
{
lean_object* v___x_1188_; 
lean_inc(v_gap_1150_);
lean_inc(v_n_1149_);
if (v_isShared_1161_ == 0)
{
lean_ctor_set_tag(v___x_1160_, 2);
lean_ctor_set(v___x_1160_, 1, v_gap_1150_);
lean_ctor_set(v___x_1160_, 0, v_n_1149_);
v___x_1188_ = v___x_1160_;
goto v_reusejp_1187_;
}
else
{
lean_object* v_reuseFailAlloc_1214_; 
v_reuseFailAlloc_1214_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1214_, 0, v_n_1149_);
lean_ctor_set(v_reuseFailAlloc_1214_, 1, v_gap_1150_);
v___x_1188_ = v_reuseFailAlloc_1214_;
goto v_reusejp_1187_;
}
v_reusejp_1187_:
{
lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; lean_object* v___x_1198_; lean_object* v___x_1199_; lean_object* v_next_1200_; lean_object* v___x_1201_; lean_object* v___x_1203_; 
v___x_1189_ = lean_box(0);
lean_inc_ref(v___x_1186_);
v___x_1190_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1190_, 0, v___x_1186_);
lean_ctor_set(v___x_1190_, 1, v___x_1188_);
lean_ctor_set(v___x_1190_, 2, v___x_1189_);
v___x_1191_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0));
v___x_1192_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1193_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1194_ = lean_int_ediv(v_gap_1150_, v___x_1193_);
v___x_1195_ = l_Int_repr(v___x_1194_);
lean_dec(v___x_1194_);
v___x_1196_ = lean_string_append(v___x_1192_, v___x_1195_);
lean_dec_ref(v___x_1195_);
v___x_1197_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2));
v___x_1198_ = lean_string_append(v___x_1196_, v___x_1197_);
v___x_1199_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__3));
lean_inc(v_n_1149_);
v_next_1200_ = lp_choreo_Choreo_Op_next(v___x_1186_, v_n_1149_, v_pos_1177_);
lean_inc(v_next_1200_);
lean_inc_ref(v_title_1148_);
lean_inc(v_index_1164_);
lean_inc_ref(v_section_x27_1162_);
v___x_1201_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1201_, 0, v___y_1166_);
lean_ctor_set(v___x_1201_, 1, v_section_x27_1162_);
lean_ctor_set(v___x_1201_, 2, v_index_1164_);
lean_ctor_set(v___x_1201_, 3, v___x_1191_);
lean_ctor_set(v___x_1201_, 4, v_title_1148_);
lean_ctor_set(v___x_1201_, 5, v___x_1190_);
lean_ctor_set(v___x_1201_, 6, v___x_1198_);
lean_ctor_set(v___x_1201_, 7, v___x_1199_);
lean_ctor_set(v___x_1201_, 8, v_pos_1177_);
lean_ctor_set(v___x_1201_, 9, v_next_1200_);
if (v_isShared_1157_ == 0)
{
lean_ctor_set(v___x_1156_, 1, v___x_1183_);
lean_ctor_set(v___x_1156_, 0, v___x_1201_);
v___x_1203_ = v___x_1156_;
goto v_reusejp_1202_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v___x_1201_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1183_);
v___x_1203_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1202_;
}
v_reusejp_1202_:
{
lean_object* v___x_1204_; lean_object* v___x_1206_; 
v___x_1204_ = l_List_appendTR___redArg(v_steps_1178_, v___x_1203_);
if (v_isShared_1181_ == 0)
{
lean_ctor_set(v___x_1180_, 1, v___x_1204_);
lean_ctor_set(v___x_1180_, 0, v_next_1200_);
v___x_1206_ = v___x_1180_;
goto v_reusejp_1205_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_next_1200_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v___x_1204_);
v___x_1206_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1205_;
}
v_reusejp_1205_:
{
lean_object* v___x_1207_; lean_object* v___x_1209_; 
v___x_1207_ = lean_unsigned_to_nat(0u);
if (v_isShared_1176_ == 0)
{
lean_ctor_set(v___x_1175_, 1, v___x_1207_);
lean_ctor_set(v___x_1175_, 0, v___x_1206_);
v___x_1209_ = v___x_1175_;
goto v_reusejp_1208_;
}
else
{
lean_object* v_reuseFailAlloc_1211_; 
v_reuseFailAlloc_1211_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1211_, 0, v___x_1206_);
lean_ctor_set(v_reuseFailAlloc_1211_, 1, v___x_1207_);
v___x_1209_ = v_reuseFailAlloc_1211_;
goto v_reusejp_1208_;
}
v_reusejp_1208_:
{
lean_object* v___x_1210_; 
v___x_1210_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10(v_n_1149_, v_gap_1150_, v_o_1147_, v_title_1148_, v___x_1209_, v_tail_1154_);
return v___x_1210_;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(lean_object* v_s_1225_, lean_object* v_target_1226_, lean_object* v_a_1227_, lean_object* v_a_1228_){
_start:
{
if (lean_obj_tag(v_a_1227_) == 0)
{
lean_object* v___x_1229_; 
v___x_1229_ = l_List_reverse___redArg(v_a_1228_);
return v___x_1229_;
}
else
{
lean_object* v_head_1230_; lean_object* v_tail_1231_; lean_object* v___x_1233_; uint8_t v_isShared_1234_; uint8_t v_isSharedCheck_1242_; 
v_head_1230_ = lean_ctor_get(v_a_1227_, 0);
v_tail_1231_ = lean_ctor_get(v_a_1227_, 1);
v_isSharedCheck_1242_ = !lean_is_exclusive(v_a_1227_);
if (v_isSharedCheck_1242_ == 0)
{
v___x_1233_ = v_a_1227_;
v_isShared_1234_ = v_isSharedCheck_1242_;
goto v_resetjp_1232_;
}
else
{
lean_inc(v_tail_1231_);
lean_inc(v_head_1230_);
lean_dec(v_a_1227_);
v___x_1233_ = lean_box(0);
v_isShared_1234_ = v_isSharedCheck_1242_;
goto v_resetjp_1232_;
}
v_resetjp_1232_:
{
lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1239_; 
lean_inc(v_head_1230_);
v___x_1235_ = lp_choreo_Choreo_State_at(v_s_1225_, v_head_1230_);
v___x_1236_ = lp_choreo_List_at(v_target_1226_, v_head_1230_);
v___x_1237_ = lp_choreo_Choreo_easePath(v___x_1235_, v___x_1236_);
if (v_isShared_1234_ == 0)
{
lean_ctor_set(v___x_1233_, 1, v_a_1228_);
lean_ctor_set(v___x_1233_, 0, v___x_1237_);
v___x_1239_ = v___x_1233_;
goto v_reusejp_1238_;
}
else
{
lean_object* v_reuseFailAlloc_1241_; 
v_reuseFailAlloc_1241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1241_, 0, v___x_1237_);
lean_ctor_set(v_reuseFailAlloc_1241_, 1, v_a_1228_);
v___x_1239_ = v_reuseFailAlloc_1241_;
goto v_reusejp_1238_;
}
v_reusejp_1238_:
{
v_a_1227_ = v_tail_1231_;
v_a_1228_ = v___x_1239_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8___boxed(lean_object* v_s_1243_, lean_object* v_target_1244_, lean_object* v_a_1245_, lean_object* v_a_1246_){
_start:
{
lean_object* v_res_1247_; 
v_res_1247_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(v_s_1243_, v_target_1244_, v_a_1245_, v_a_1246_);
lean_dec(v_target_1244_);
lean_dec(v_s_1243_);
return v_res_1247_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11(lean_object* v_fst_1248_, lean_object* v_dist_1249_, lean_object* v_a_1250_, lean_object* v_a_1251_){
_start:
{
if (lean_obj_tag(v_a_1250_) == 0)
{
lean_object* v___x_1252_; 
lean_dec(v_dist_1249_);
v___x_1252_ = l_List_reverse___redArg(v_a_1251_);
return v___x_1252_;
}
else
{
lean_object* v_head_1253_; lean_object* v_tail_1254_; lean_object* v___x_1256_; uint8_t v_isShared_1257_; uint8_t v_isSharedCheck_1270_; 
v_head_1253_ = lean_ctor_get(v_a_1250_, 0);
v_tail_1254_ = lean_ctor_get(v_a_1250_, 1);
v_isSharedCheck_1270_ = !lean_is_exclusive(v_a_1250_);
if (v_isSharedCheck_1270_ == 0)
{
v___x_1256_ = v_a_1250_;
v_isShared_1257_ = v_isSharedCheck_1270_;
goto v_resetjp_1255_;
}
else
{
lean_inc(v_tail_1254_);
lean_inc(v_head_1253_);
lean_dec(v_a_1250_);
v___x_1256_ = lean_box(0);
v_isShared_1257_ = v_isSharedCheck_1270_;
goto v_resetjp_1255_;
}
v_resetjp_1255_:
{
lean_object* v___y_1259_; uint8_t v___x_1264_; 
v___x_1264_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_1253_, v_fst_1248_);
lean_dec(v_head_1253_);
if (v___x_1264_ == 0)
{
lean_object* v___x_1265_; lean_object* v___x_1266_; lean_object* v___x_1267_; 
v___x_1265_ = lean_int_neg(v_dist_1249_);
v___x_1266_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
v___x_1267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1267_, 0, v___x_1265_);
lean_ctor_set(v___x_1267_, 1, v___x_1266_);
v___y_1259_ = v___x_1267_;
goto v___jp_1258_;
}
else
{
lean_object* v___x_1268_; lean_object* v___x_1269_; 
v___x_1268_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc(v_dist_1249_);
v___x_1269_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1269_, 0, v_dist_1249_);
lean_ctor_set(v___x_1269_, 1, v___x_1268_);
v___y_1259_ = v___x_1269_;
goto v___jp_1258_;
}
v___jp_1258_:
{
lean_object* v___x_1261_; 
if (v_isShared_1257_ == 0)
{
lean_ctor_set(v___x_1256_, 1, v_a_1251_);
lean_ctor_set(v___x_1256_, 0, v___y_1259_);
v___x_1261_ = v___x_1256_;
goto v_reusejp_1260_;
}
else
{
lean_object* v_reuseFailAlloc_1263_; 
v_reuseFailAlloc_1263_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1263_, 0, v___y_1259_);
lean_ctor_set(v_reuseFailAlloc_1263_, 1, v_a_1251_);
v___x_1261_ = v_reuseFailAlloc_1263_;
goto v_reusejp_1260_;
}
v_reusejp_1260_:
{
v_a_1250_ = v_tail_1254_;
v_a_1251_ = v___x_1261_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11___boxed(lean_object* v_fst_1271_, lean_object* v_dist_1272_, lean_object* v_a_1273_, lean_object* v_a_1274_){
_start:
{
lean_object* v_res_1275_; 
v_res_1275_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11(v_fst_1271_, v_dist_1272_, v_a_1273_, v_a_1274_);
lean_dec(v_fst_1271_);
return v_res_1275_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(lean_object* v_s_1276_, lean_object* v_o_1277_, lean_object* v_a_1278_, lean_object* v_a_1279_){
_start:
{
if (lean_obj_tag(v_a_1278_) == 0)
{
lean_object* v___x_1280_; 
v___x_1280_ = l_List_reverse___redArg(v_a_1279_);
return v___x_1280_;
}
else
{
lean_object* v_head_1281_; lean_object* v_tail_1282_; lean_object* v___x_1284_; uint8_t v_isShared_1285_; uint8_t v_isSharedCheck_1317_; 
v_head_1281_ = lean_ctor_get(v_a_1278_, 0);
v_tail_1282_ = lean_ctor_get(v_a_1278_, 1);
v_isSharedCheck_1317_ = !lean_is_exclusive(v_a_1278_);
if (v_isSharedCheck_1317_ == 0)
{
v___x_1284_ = v_a_1278_;
v_isShared_1285_ = v_isSharedCheck_1317_;
goto v_resetjp_1283_;
}
else
{
lean_inc(v_tail_1282_);
lean_inc(v_head_1281_);
lean_dec(v_a_1278_);
v___x_1284_ = lean_box(0);
v_isShared_1285_ = v_isSharedCheck_1317_;
goto v_resetjp_1283_;
}
v_resetjp_1283_:
{
lean_object* v___x_1286_; lean_object* v_x_1287_; lean_object* v_y_1288_; lean_object* v_p_1289_; lean_object* v_x_1290_; lean_object* v_y_1291_; lean_object* v___x_1293_; uint8_t v_isShared_1294_; uint8_t v_isSharedCheck_1316_; 
v___x_1286_ = lp_choreo_Choreo_centre;
v_x_1287_ = lean_ctor_get(v___x_1286_, 0);
v_y_1288_ = lean_ctor_get(v___x_1286_, 1);
v_p_1289_ = lp_choreo_Choreo_State_at(v_s_1276_, v_head_1281_);
v_x_1290_ = lean_ctor_get(v_p_1289_, 0);
v_y_1291_ = lean_ctor_get(v_p_1289_, 1);
v_isSharedCheck_1316_ = !lean_is_exclusive(v_p_1289_);
if (v_isSharedCheck_1316_ == 0)
{
v___x_1293_ = v_p_1289_;
v_isShared_1294_ = v_isSharedCheck_1316_;
goto v_resetjp_1292_;
}
else
{
lean_inc(v_y_1291_);
lean_inc(v_x_1290_);
lean_dec(v_p_1289_);
v___x_1293_ = lean_box(0);
v_isShared_1294_ = v_isSharedCheck_1316_;
goto v_resetjp_1292_;
}
v_resetjp_1292_:
{
lean_object* v_num_1295_; lean_object* v_den_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___y_1300_; lean_object* v___x_1314_; uint8_t v___x_1315_; 
v_num_1295_ = lean_ctor_get(v_o_1277_, 8);
v_den_1296_ = lean_ctor_get(v_o_1277_, 9);
v___x_1297_ = lean_int_sub(v_x_1290_, v_x_1287_);
lean_dec(v_x_1290_);
v___x_1298_ = lean_int_mul(v___x_1297_, v_num_1295_);
lean_dec(v___x_1297_);
v___x_1314_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_1315_ = lean_int_dec_le(v___x_1314_, v_den_1296_);
if (v___x_1315_ == 0)
{
v___y_1300_ = v___x_1314_;
goto v___jp_1299_;
}
else
{
v___y_1300_ = v_den_1296_;
goto v___jp_1299_;
}
v___jp_1299_:
{
lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1308_; 
v___x_1301_ = lean_int_ediv(v___x_1298_, v___y_1300_);
lean_dec(v___x_1298_);
v___x_1302_ = lean_int_add(v_x_1287_, v___x_1301_);
lean_dec(v___x_1301_);
v___x_1303_ = lean_int_sub(v_y_1291_, v_y_1288_);
lean_dec(v_y_1291_);
v___x_1304_ = lean_int_mul(v___x_1303_, v_num_1295_);
lean_dec(v___x_1303_);
v___x_1305_ = lean_int_ediv(v___x_1304_, v___y_1300_);
lean_dec(v___x_1304_);
v___x_1306_ = lean_int_add(v_y_1288_, v___x_1305_);
lean_dec(v___x_1305_);
if (v_isShared_1294_ == 0)
{
lean_ctor_set(v___x_1293_, 1, v___x_1306_);
lean_ctor_set(v___x_1293_, 0, v___x_1302_);
v___x_1308_ = v___x_1293_;
goto v_reusejp_1307_;
}
else
{
lean_object* v_reuseFailAlloc_1313_; 
v_reuseFailAlloc_1313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1313_, 0, v___x_1302_);
lean_ctor_set(v_reuseFailAlloc_1313_, 1, v___x_1306_);
v___x_1308_ = v_reuseFailAlloc_1313_;
goto v_reusejp_1307_;
}
v_reusejp_1307_:
{
lean_object* v___x_1310_; 
if (v_isShared_1285_ == 0)
{
lean_ctor_set(v___x_1284_, 1, v_a_1279_);
lean_ctor_set(v___x_1284_, 0, v___x_1308_);
v___x_1310_ = v___x_1284_;
goto v_reusejp_1309_;
}
else
{
lean_object* v_reuseFailAlloc_1312_; 
v_reuseFailAlloc_1312_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1312_, 0, v___x_1308_);
lean_ctor_set(v_reuseFailAlloc_1312_, 1, v_a_1279_);
v___x_1310_ = v_reuseFailAlloc_1312_;
goto v_reusejp_1309_;
}
v_reusejp_1309_:
{
v_a_1278_ = v_tail_1282_;
v_a_1279_ = v___x_1310_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7___boxed(lean_object* v_s_1318_, lean_object* v_o_1319_, lean_object* v_a_1320_, lean_object* v_a_1321_){
_start:
{
lean_object* v_res_1322_; 
v_res_1322_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(v_s_1318_, v_o_1319_, v_a_1320_, v_a_1321_);
lean_dec_ref(v_o_1319_);
lean_dec(v_s_1318_);
return v_res_1322_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(lean_object* v_s_1323_, lean_object* v_target_1324_, lean_object* v_a_1325_, lean_object* v_a_1326_){
_start:
{
if (lean_obj_tag(v_a_1325_) == 0)
{
lean_object* v___x_1327_; 
v___x_1327_ = l_List_reverse___redArg(v_a_1326_);
return v___x_1327_;
}
else
{
lean_object* v_head_1328_; lean_object* v_tail_1329_; lean_object* v___x_1331_; uint8_t v_isShared_1332_; uint8_t v_isSharedCheck_1340_; 
v_head_1328_ = lean_ctor_get(v_a_1325_, 0);
v_tail_1329_ = lean_ctor_get(v_a_1325_, 1);
v_isSharedCheck_1340_ = !lean_is_exclusive(v_a_1325_);
if (v_isSharedCheck_1340_ == 0)
{
v___x_1331_ = v_a_1325_;
v_isShared_1332_ = v_isSharedCheck_1340_;
goto v_resetjp_1330_;
}
else
{
lean_inc(v_tail_1329_);
lean_inc(v_head_1328_);
lean_dec(v_a_1325_);
v___x_1331_ = lean_box(0);
v_isShared_1332_ = v_isSharedCheck_1340_;
goto v_resetjp_1330_;
}
v_resetjp_1330_:
{
lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1337_; 
lean_inc(v_head_1328_);
v___x_1333_ = lp_choreo_Choreo_State_at(v_s_1323_, v_head_1328_);
v___x_1334_ = lp_choreo_Choreo_State_at(v_target_1324_, v_head_1328_);
v___x_1335_ = lp_choreo_Choreo_easePath(v___x_1333_, v___x_1334_);
if (v_isShared_1332_ == 0)
{
lean_ctor_set(v___x_1331_, 1, v_a_1326_);
lean_ctor_set(v___x_1331_, 0, v___x_1335_);
v___x_1337_ = v___x_1331_;
goto v_reusejp_1336_;
}
else
{
lean_object* v_reuseFailAlloc_1339_; 
v_reuseFailAlloc_1339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1339_, 0, v___x_1335_);
lean_ctor_set(v_reuseFailAlloc_1339_, 1, v_a_1326_);
v___x_1337_ = v_reuseFailAlloc_1339_;
goto v_reusejp_1336_;
}
v_reusejp_1336_:
{
v_a_1325_ = v_tail_1329_;
v_a_1326_ = v___x_1337_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6___boxed(lean_object* v_s_1341_, lean_object* v_target_1342_, lean_object* v_a_1343_, lean_object* v_a_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(v_s_1341_, v_target_1342_, v_a_1343_, v_a_1344_);
lean_dec(v_target_1342_);
lean_dec(v_s_1341_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(lean_object* v_s_1346_, lean_object* v_a_1347_, lean_object* v_a_1348_){
_start:
{
if (lean_obj_tag(v_a_1347_) == 0)
{
lean_object* v___x_1349_; 
v___x_1349_ = l_List_reverse___redArg(v_a_1348_);
return v___x_1349_;
}
else
{
lean_object* v_head_1350_; lean_object* v_tail_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1370_; 
v_head_1350_ = lean_ctor_get(v_a_1347_, 0);
v_tail_1351_ = lean_ctor_get(v_a_1347_, 1);
v_isSharedCheck_1370_ = !lean_is_exclusive(v_a_1347_);
if (v_isSharedCheck_1370_ == 0)
{
v___x_1353_ = v_a_1347_;
v_isShared_1354_ = v_isSharedCheck_1370_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_tail_1351_);
lean_inc(v_head_1350_);
lean_dec(v_a_1347_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1370_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v___x_1355_; lean_object* v_x_1356_; lean_object* v_y_1357_; lean_object* v___x_1359_; uint8_t v_isShared_1360_; uint8_t v_isSharedCheck_1369_; 
v___x_1355_ = lp_choreo_Choreo_State_at(v_s_1346_, v_head_1350_);
v_x_1356_ = lean_ctor_get(v___x_1355_, 0);
v_y_1357_ = lean_ctor_get(v___x_1355_, 1);
v_isSharedCheck_1369_ = !lean_is_exclusive(v___x_1355_);
if (v_isSharedCheck_1369_ == 0)
{
v___x_1359_ = v___x_1355_;
v_isShared_1360_ = v_isSharedCheck_1369_;
goto v_resetjp_1358_;
}
else
{
lean_inc(v_y_1357_);
lean_inc(v_x_1356_);
lean_dec(v___x_1355_);
v___x_1359_ = lean_box(0);
v_isShared_1360_ = v_isSharedCheck_1369_;
goto v_resetjp_1358_;
}
v_resetjp_1358_:
{
lean_object* v___x_1361_; lean_object* v___x_1363_; 
v___x_1361_ = lean_int_neg(v_x_1356_);
lean_dec(v_x_1356_);
if (v_isShared_1360_ == 0)
{
lean_ctor_set(v___x_1359_, 0, v___x_1361_);
v___x_1363_ = v___x_1359_;
goto v_reusejp_1362_;
}
else
{
lean_object* v_reuseFailAlloc_1368_; 
v_reuseFailAlloc_1368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1368_, 0, v___x_1361_);
lean_ctor_set(v_reuseFailAlloc_1368_, 1, v_y_1357_);
v___x_1363_ = v_reuseFailAlloc_1368_;
goto v_reusejp_1362_;
}
v_reusejp_1362_:
{
lean_object* v___x_1365_; 
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 1, v_a_1348_);
lean_ctor_set(v___x_1353_, 0, v___x_1363_);
v___x_1365_ = v___x_1353_;
goto v_reusejp_1364_;
}
else
{
lean_object* v_reuseFailAlloc_1367_; 
v_reuseFailAlloc_1367_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1367_, 0, v___x_1363_);
lean_ctor_set(v_reuseFailAlloc_1367_, 1, v_a_1348_);
v___x_1365_ = v_reuseFailAlloc_1367_;
goto v_reusejp_1364_;
}
v_reusejp_1364_:
{
v_a_1347_ = v_tail_1351_;
v_a_1348_ = v___x_1365_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9___boxed(lean_object* v_s_1371_, lean_object* v_a_1372_, lean_object* v_a_1373_){
_start:
{
lean_object* v_res_1374_; 
v_res_1374_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(v_s_1371_, v_a_1372_, v_a_1373_);
lean_dec(v_s_1371_);
return v_res_1374_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_compileOp(lean_object* v_sp_1412_, lean_object* v_st_1413_, lean_object* v_o_1414_){
_start:
{
lean_object* v_n_1415_; lean_object* v_gap_1416_; lean_object* v_pos_1417_; lean_object* v_steps_1418_; lean_object* v_kind_1419_; lean_object* v_section_x27_1420_; lean_object* v_title_1421_; lean_object* v_shape_1422_; lean_object* v_counts_1423_; lean_object* v_quarters_1424_; lean_object* v_dx_1425_; lean_object* v_dy_1426_; lean_object* v_step_1427_; lean_object* v_places_1428_; lean_object* v_line_1429_; lean_object* v_leftShape_1430_; lean_object* v_rightShape_1431_; lean_object* v_index_1432_; lean_object* v_name_1434_; lean_object* v_kind_1435_; lean_object* v_label_1436_; lean_object* v_step_1437_; lean_object* v_op_1438_; lean_object* v_rq_1439_; lean_object* v_en_1440_; lean_object* v_pos_1441_; lean_object* v_steps_1442_; lean_object* v___y_1450_; uint8_t v___y_1451_; lean_object* v___y_1452_; lean_object* v___y_1453_; lean_object* v___y_1469_; lean_object* v___y_1470_; uint8_t v___y_1471_; lean_object* v___y_1474_; lean_object* v___y_1475_; lean_object* v___y_1476_; uint8_t v___y_1477_; lean_object* v___y_1487_; lean_object* v___x_1495_; uint8_t v___x_1496_; 
v_n_1415_ = lean_ctor_get(v_sp_1412_, 1);
lean_inc(v_n_1415_);
v_gap_1416_ = lean_ctor_get(v_sp_1412_, 3);
lean_inc(v_gap_1416_);
lean_dec_ref(v_sp_1412_);
v_pos_1417_ = lean_ctor_get(v_st_1413_, 0);
v_steps_1418_ = lean_ctor_get(v_st_1413_, 1);
v_kind_1419_ = lean_ctor_get(v_o_1414_, 0);
v_section_x27_1420_ = lean_ctor_get(v_o_1414_, 1);
v_title_1421_ = lean_ctor_get(v_o_1414_, 2);
v_shape_1422_ = lean_ctor_get(v_o_1414_, 3);
v_counts_1423_ = lean_ctor_get(v_o_1414_, 4);
v_quarters_1424_ = lean_ctor_get(v_o_1414_, 5);
v_dx_1425_ = lean_ctor_get(v_o_1414_, 6);
v_dy_1426_ = lean_ctor_get(v_o_1414_, 7);
v_step_1427_ = lean_ctor_get(v_o_1414_, 10);
v_places_1428_ = lean_ctor_get(v_o_1414_, 11);
v_line_1429_ = lean_ctor_get(v_o_1414_, 12);
v_leftShape_1430_ = lean_ctor_get(v_o_1414_, 13);
v_rightShape_1431_ = lean_ctor_get(v_o_1414_, 14);
v_index_1432_ = lean_ctor_get(v_o_1414_, 15);
v___x_1495_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__6));
v___x_1496_ = lean_string_dec_eq(v_kind_1419_, v___x_1495_);
if (v___x_1496_ == 0)
{
lean_object* v___x_1497_; uint8_t v___x_1498_; 
v___x_1497_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__12_spec__13___closed__2));
v___x_1498_ = lean_string_dec_eq(v_kind_1419_, v___x_1497_);
if (v___x_1498_ == 0)
{
lean_object* v___x_1499_; uint8_t v___x_1500_; 
v___x_1499_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__7));
v___x_1500_ = lean_string_dec_eq(v_kind_1419_, v___x_1499_);
if (v___x_1500_ == 0)
{
lean_object* v___x_1501_; uint8_t v___x_1502_; 
v___x_1501_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__8));
v___x_1502_ = lean_string_dec_eq(v_kind_1419_, v___x_1501_);
if (v___x_1502_ == 0)
{
lean_object* v___x_1503_; uint8_t v___x_1504_; 
v___x_1503_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__9));
v___x_1504_ = lean_string_dec_eq(v_kind_1419_, v___x_1503_);
if (v___x_1504_ == 0)
{
lean_object* v___x_1505_; uint8_t v___x_1506_; 
v___x_1505_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_1506_ = lean_string_dec_eq(v_kind_1419_, v___x_1505_);
if (v___x_1506_ == 0)
{
lean_object* v___x_1507_; uint8_t v___x_1508_; 
lean_inc(v_index_1432_);
lean_inc(v_counts_1423_);
lean_inc_ref(v_title_1421_);
lean_inc_ref(v_section_x27_1420_);
v___x_1507_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1508_ = lean_string_dec_eq(v_kind_1419_, v___x_1507_);
if (v___x_1508_ == 0)
{
lean_object* v___x_1509_; uint8_t v___x_1510_; 
v___x_1509_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__12));
v___x_1510_ = lean_string_dec_eq(v_kind_1419_, v___x_1509_);
if (v___x_1510_ == 0)
{
lean_object* v___x_1511_; uint8_t v___x_1512_; 
lean_inc_ref(v_rightShape_1431_);
lean_inc_ref(v_leftShape_1430_);
lean_inc(v_line_1429_);
lean_inc_ref(v_kind_1419_);
lean_dec_ref(v_o_1414_);
v___x_1511_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__13));
v___x_1512_ = lean_string_dec_eq(v_kind_1419_, v___x_1511_);
lean_dec_ref(v_kind_1419_);
if (v___x_1512_ == 0)
{
lean_dec(v_index_1432_);
lean_dec_ref(v_rightShape_1431_);
lean_dec_ref(v_leftShape_1430_);
lean_dec(v_line_1429_);
lean_dec(v_counts_1423_);
lean_dec_ref(v_title_1421_);
lean_dec_ref(v_section_x27_1420_);
lean_dec(v_gap_1416_);
lean_dec(v_n_1415_);
return v_st_1413_;
}
else
{
lean_object* v___x_1513_; lean_object* v_fst_1514_; lean_object* v_snd_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v_target_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v_paths_1525_; lean_object* v_pre_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; lean_object* v___x_1538_; lean_object* v___x_1539_; lean_object* v___x_1540_; lean_object* v___x_1541_; lean_object* v___x_1542_; 
lean_inc(v_steps_1418_);
lean_inc(v_pos_1417_);
lean_dec_ref(v_st_1413_);
lean_inc_n(v_n_1415_, 4);
v___x_1513_ = lp_choreo_Choreo_groupsOf(v_pos_1417_, v_n_1415_);
v_fst_1514_ = lean_ctor_get(v___x_1513_, 0);
lean_inc_n(v_fst_1514_, 3);
v_snd_1515_ = lean_ctor_get(v___x_1513_, 1);
lean_inc_n(v_snd_1515_, 3);
lean_dec_ref(v___x_1513_);
v___x_1516_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_evenLanes_spec__0_spec__0___closed__1);
v___x_1517_ = lean_int_sub(v_line_1429_, v___x_1516_);
v___x_1518_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_1417_, v_fst_1514_, v_leftShape_1430_, v___x_1517_);
lean_dec_ref(v_leftShape_1430_);
v___x_1519_ = lean_int_add(v_line_1429_, v___x_1516_);
v___x_1520_ = lp_choreo_Choreo_compileOp___lam__2(v_pos_1417_, v_snd_1515_, v_rightShape_1431_, v___x_1519_);
lean_dec_ref(v_rightShape_1431_);
v___x_1521_ = l_List_appendTR___redArg(v___x_1518_, v___x_1520_);
v_target_1522_ = lp_choreo_Choreo_placesWith(v_n_1415_, v___x_1521_, v_pos_1417_);
lean_dec(v___x_1521_);
v___x_1523_ = l_List_range(v_n_1415_);
v___x_1524_ = lean_box(0);
v_paths_1525_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(v_pos_1417_, v_target_1522_, v___x_1523_, v___x_1524_);
lean_inc(v_gap_1416_);
lean_inc(v_line_1429_);
v_pre_1526_ = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(v_pre_1526_, 0, v_fst_1514_);
lean_ctor_set(v_pre_1526_, 1, v_snd_1515_);
lean_ctor_set(v_pre_1526_, 2, v_line_1429_);
lean_ctor_set(v_pre_1526_, 3, v_gap_1416_);
v___x_1527_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__14));
v___x_1528_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1527_);
v___x_1529_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__15));
v___x_1530_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__16));
v___x_1531_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1530_);
lean_dec_ref(v_title_1421_);
v___x_1532_ = lp_choreo_Choreo_chooseCerts(v_n_1415_, v_paths_1525_, v_gap_1416_);
lean_dec(v_paths_1525_);
v___x_1533_ = lean_alloc_ctor(3, 6, 0);
lean_ctor_set(v___x_1533_, 0, v_fst_1514_);
lean_ctor_set(v___x_1533_, 1, v_snd_1515_);
lean_ctor_set(v___x_1533_, 2, v_line_1429_);
lean_ctor_set(v___x_1533_, 3, v_target_1522_);
lean_ctor_set(v___x_1533_, 4, v_counts_1423_);
lean_ctor_set(v___x_1533_, 5, v___x_1532_);
lean_inc_ref(v_pre_1526_);
lean_inc_ref(v___x_1533_);
v___x_1534_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1534_, 0, v___x_1533_);
lean_ctor_set(v___x_1534_, 1, v_pre_1526_);
lean_ctor_set(v___x_1534_, 2, v_pre_1526_);
v___x_1535_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__17));
v___x_1536_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1537_ = lean_int_ediv(v_gap_1416_, v___x_1536_);
lean_dec(v_gap_1416_);
v___x_1538_ = l_Int_repr(v___x_1537_);
lean_dec(v___x_1537_);
v___x_1539_ = lean_string_append(v___x_1535_, v___x_1538_);
lean_dec_ref(v___x_1538_);
v___x_1540_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__18));
v___x_1541_ = lean_string_append(v___x_1539_, v___x_1540_);
v___x_1542_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__19));
v_name_1434_ = v___x_1528_;
v_kind_1435_ = v___x_1529_;
v_label_1436_ = v___x_1531_;
v_step_1437_ = v___x_1534_;
v_op_1438_ = v___x_1533_;
v_rq_1439_ = v___x_1541_;
v_en_1440_ = v___x_1542_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
}
else
{
lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v_target_1545_; lean_object* v_paths_1546_; lean_object* v___x_1547_; lean_object* v___x_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; 
lean_inc(v_steps_1418_);
lean_inc(v_pos_1417_);
lean_dec_ref(v_st_1413_);
lean_inc_n(v_n_1415_, 2);
v___x_1543_ = l_List_range(v_n_1415_);
v___x_1544_ = lean_box(0);
lean_inc(v___x_1543_);
v_target_1545_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__7(v_pos_1417_, v_o_1414_, v___x_1543_, v___x_1544_);
lean_dec_ref(v_o_1414_);
v_paths_1546_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(v_pos_1417_, v_target_1545_, v___x_1543_, v___x_1544_);
v___x_1547_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__20));
v___x_1548_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1547_);
lean_dec_ref(v_title_1421_);
v___x_1549_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__21));
v___x_1550_ = lp_choreo_Choreo_chooseCerts(v_n_1415_, v_paths_1546_, v_gap_1416_);
lean_dec(v_gap_1416_);
lean_dec(v_paths_1546_);
lean_inc(v_target_1545_);
v___x_1551_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1551_, 0, v_target_1545_);
lean_ctor_set(v___x_1551_, 1, v_counts_1423_);
lean_ctor_set(v___x_1551_, 2, v___x_1550_);
v___x_1552_ = lean_box(0);
v___x_1553_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1553_, 0, v_target_1545_);
lean_inc_ref(v___x_1551_);
v___x_1554_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1554_, 0, v___x_1551_);
lean_ctor_set(v___x_1554_, 1, v___x_1552_);
lean_ctor_set(v___x_1554_, 2, v___x_1553_);
v___x_1555_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__2));
v___x_1556_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__22));
lean_inc_ref(v___x_1548_);
v_name_1434_ = v___x_1548_;
v_kind_1435_ = v___x_1549_;
v_label_1436_ = v___x_1548_;
v_step_1437_ = v___x_1554_;
v_op_1438_ = v___x_1551_;
v_rq_1439_ = v___x_1555_;
v_en_1440_ = v___x_1556_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
}
else
{
lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v_target_1559_; lean_object* v_paths_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; 
lean_inc(v_steps_1418_);
lean_inc(v_pos_1417_);
lean_dec_ref(v_o_1414_);
lean_dec_ref(v_st_1413_);
lean_inc_n(v_n_1415_, 2);
v___x_1557_ = l_List_range(v_n_1415_);
v___x_1558_ = lean_box(0);
lean_inc(v___x_1557_);
v_target_1559_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__9(v_pos_1417_, v___x_1557_, v___x_1558_);
v_paths_1560_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__8(v_pos_1417_, v_target_1559_, v___x_1557_, v___x_1558_);
v___x_1561_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__23));
v___x_1562_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1561_);
lean_dec_ref(v_title_1421_);
v___x_1563_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__24));
v___x_1564_ = lp_choreo_Choreo_chooseCerts(v_n_1415_, v_paths_1560_, v_gap_1416_);
lean_dec(v_gap_1416_);
lean_dec(v_paths_1560_);
lean_inc(v_target_1559_);
v___x_1565_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1565_, 0, v_target_1559_);
lean_ctor_set(v___x_1565_, 1, v_counts_1423_);
lean_ctor_set(v___x_1565_, 2, v___x_1564_);
v___x_1566_ = lean_box(0);
v___x_1567_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1567_, 0, v_target_1559_);
lean_inc_ref(v___x_1565_);
v___x_1568_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1568_, 0, v___x_1565_);
lean_ctor_set(v___x_1568_, 1, v___x_1566_);
lean_ctor_set(v___x_1568_, 2, v___x_1567_);
v___x_1569_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__2));
v___x_1570_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__25));
lean_inc_ref(v___x_1562_);
v_name_1434_ = v___x_1562_;
v_kind_1435_ = v___x_1563_;
v_label_1436_ = v___x_1562_;
v_step_1437_ = v___x_1568_;
v_op_1438_ = v___x_1565_;
v_rq_1439_ = v___x_1569_;
v_en_1440_ = v___x_1570_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
}
else
{
lean_object* v_moves_1571_; lean_object* v_title_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v_fst_1576_; 
v_moves_1571_ = lp_choreo_Choreo_stepMoves(v_step_1427_);
v_title_1572_ = lp_choreo_Choreo_stepTitle(v_step_1427_);
v___x_1573_ = lean_unsigned_to_nat(0u);
v___x_1574_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1574_, 0, v_st_1413_);
lean_ctor_set(v___x_1574_, 1, v___x_1573_);
v___x_1575_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__10(v_o_1414_, v_title_1572_, v_n_1415_, v_gap_1416_, v___x_1574_, v_moves_1571_);
v_fst_1576_ = lean_ctor_get(v___x_1575_, 0);
lean_inc(v_fst_1576_);
lean_dec_ref(v___x_1575_);
return v_fst_1576_;
}
}
else
{
lean_object* v___x_1578_; uint8_t v_isShared_1579_; uint8_t v_isSharedCheck_1599_; 
lean_inc(v_index_1432_);
lean_inc(v_counts_1423_);
lean_inc_ref(v_title_1421_);
lean_inc_ref(v_section_x27_1420_);
lean_inc(v_steps_1418_);
lean_inc(v_pos_1417_);
lean_dec_ref(v_o_1414_);
v_isSharedCheck_1599_ = !lean_is_exclusive(v_st_1413_);
if (v_isSharedCheck_1599_ == 0)
{
lean_object* v_unused_1600_; lean_object* v_unused_1601_; 
v_unused_1600_ = lean_ctor_get(v_st_1413_, 1);
lean_dec(v_unused_1600_);
v_unused_1601_ = lean_ctor_get(v_st_1413_, 0);
lean_dec(v_unused_1601_);
v___x_1578_ = v_st_1413_;
v_isShared_1579_ = v_isSharedCheck_1599_;
goto v_resetjp_1577_;
}
else
{
lean_dec(v_st_1413_);
v___x_1578_ = lean_box(0);
v_isShared_1579_ = v_isSharedCheck_1599_;
goto v_resetjp_1577_;
}
v_resetjp_1577_:
{
lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1586_; 
v___x_1580_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__26));
v___x_1581_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1580_);
lean_dec_ref(v_title_1421_);
v___x_1582_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__0));
v___x_1583_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc(v_n_1415_);
v___x_1584_ = lp_choreo_Choreo_compileOp___lam__1(v_n_1415_, v___x_1583_, v___x_1583_);
if (v_isShared_1579_ == 0)
{
lean_ctor_set_tag(v___x_1578_, 2);
lean_ctor_set(v___x_1578_, 1, v_counts_1423_);
lean_ctor_set(v___x_1578_, 0, v___x_1584_);
v___x_1586_ = v___x_1578_;
goto v_reusejp_1585_;
}
else
{
lean_object* v_reuseFailAlloc_1598_; 
v_reuseFailAlloc_1598_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1598_, 0, v___x_1584_);
lean_ctor_set(v_reuseFailAlloc_1598_, 1, v_counts_1423_);
v___x_1586_ = v_reuseFailAlloc_1598_;
goto v_reusejp_1585_;
}
v_reusejp_1585_:
{
lean_object* v___x_1587_; lean_object* v___x_1588_; lean_object* v___x_1589_; lean_object* v___x_1590_; lean_object* v___x_1591_; lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; lean_object* v___x_1597_; 
lean_inc(v_gap_1416_);
lean_inc(v_n_1415_);
v___x_1587_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1587_, 0, v_n_1415_);
lean_ctor_set(v___x_1587_, 1, v_gap_1416_);
v___x_1588_ = lean_box(0);
lean_inc_ref(v___x_1586_);
v___x_1589_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1589_, 0, v___x_1586_);
lean_ctor_set(v___x_1589_, 1, v___x_1587_);
lean_ctor_set(v___x_1589_, 2, v___x_1588_);
v___x_1590_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1591_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1592_ = lean_int_ediv(v_gap_1416_, v___x_1591_);
lean_dec(v_gap_1416_);
v___x_1593_ = l_Int_repr(v___x_1592_);
lean_dec(v___x_1592_);
v___x_1594_ = lean_string_append(v___x_1590_, v___x_1593_);
lean_dec_ref(v___x_1593_);
v___x_1595_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__2));
v___x_1596_ = lean_string_append(v___x_1594_, v___x_1595_);
v___x_1597_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__27));
v_name_1434_ = v___x_1581_;
v_kind_1435_ = v___x_1582_;
v_label_1436_ = v___x_1580_;
v_step_1437_ = v___x_1589_;
v_op_1438_ = v___x_1586_;
v_rq_1439_ = v___x_1596_;
v_en_1440_ = v___x_1597_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
}
}
}
else
{
lean_object* v___x_1602_; lean_object* v_fst_1603_; lean_object* v_snd_1604_; lean_object* v___y_1606_; lean_object* v___y_1607_; lean_object* v___x_1635_; lean_object* v___y_1637_; 
lean_inc(v_index_1432_);
lean_inc(v_counts_1423_);
lean_inc_ref(v_title_1421_);
lean_inc_ref(v_section_x27_1420_);
lean_inc(v_steps_1418_);
lean_inc(v_pos_1417_);
lean_dec_ref(v_o_1414_);
lean_dec_ref(v_st_1413_);
lean_inc(v_n_1415_);
v___x_1602_ = lp_choreo_Choreo_groupsOf(v_pos_1417_, v_n_1415_);
v_fst_1603_ = lean_ctor_get(v___x_1602_, 0);
lean_inc(v_fst_1603_);
v_snd_1604_ = lean_ctor_get(v___x_1602_, 1);
lean_inc(v_snd_1604_);
lean_dec_ref(v___x_1602_);
v___x_1635_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_snd_1604_) == 0)
{
v___y_1637_ = v___x_1635_;
goto v___jp_1636_;
}
else
{
lean_object* v_head_1642_; 
v_head_1642_ = lean_ctor_get(v_snd_1604_, 0);
lean_inc(v_head_1642_);
v___y_1637_ = v_head_1642_;
goto v___jp_1636_;
}
v___jp_1605_:
{
lean_object* v___x_1608_; lean_object* v_x_1609_; lean_object* v___x_1611_; uint8_t v_isShared_1612_; uint8_t v_isSharedCheck_1633_; 
v___x_1608_ = lp_choreo_Choreo_State_at(v_pos_1417_, v___y_1607_);
v_x_1609_ = lean_ctor_get(v___x_1608_, 0);
v_isSharedCheck_1633_ = !lean_is_exclusive(v___x_1608_);
if (v_isSharedCheck_1633_ == 0)
{
lean_object* v_unused_1634_; 
v_unused_1634_ = lean_ctor_get(v___x_1608_, 1);
lean_dec(v_unused_1634_);
v___x_1611_ = v___x_1608_;
v_isShared_1612_ = v_isSharedCheck_1633_;
goto v_resetjp_1610_;
}
else
{
lean_inc(v_x_1609_);
lean_dec(v___x_1608_);
v___x_1611_ = lean_box(0);
v_isShared_1612_ = v_isSharedCheck_1633_;
goto v_resetjp_1610_;
}
v_resetjp_1610_:
{
lean_object* v_dist_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v_ds_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1621_; 
v_dist_1613_ = lean_int_sub(v___y_1606_, v_x_1609_);
lean_dec(v_x_1609_);
lean_dec(v___y_1606_);
lean_inc(v_n_1415_);
v___x_1614_ = l_List_range(v_n_1415_);
v___x_1615_ = lean_box(0);
v_ds_1616_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__11(v_fst_1603_, v_dist_1613_, v___x_1614_, v___x_1615_);
v___x_1617_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__28));
v___x_1618_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1617_);
lean_dec_ref(v_title_1421_);
v___x_1619_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__29));
if (v_isShared_1612_ == 0)
{
lean_ctor_set_tag(v___x_1611_, 2);
lean_ctor_set(v___x_1611_, 1, v_counts_1423_);
lean_ctor_set(v___x_1611_, 0, v_ds_1616_);
v___x_1621_ = v___x_1611_;
goto v_reusejp_1620_;
}
else
{
lean_object* v_reuseFailAlloc_1632_; 
v_reuseFailAlloc_1632_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1632_, 0, v_ds_1616_);
lean_ctor_set(v_reuseFailAlloc_1632_, 1, v_counts_1423_);
v___x_1621_ = v_reuseFailAlloc_1632_;
goto v_reusejp_1620_;
}
v_reusejp_1620_:
{
lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; 
lean_inc(v_gap_1416_);
v___x_1622_ = lean_alloc_ctor(4, 3, 0);
lean_ctor_set(v___x_1622_, 0, v_fst_1603_);
lean_ctor_set(v___x_1622_, 1, v_snd_1604_);
lean_ctor_set(v___x_1622_, 2, v_gap_1416_);
lean_inc_ref(v___x_1622_);
lean_inc_ref(v___x_1621_);
v___x_1623_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1623_, 0, v___x_1621_);
lean_ctor_set(v___x_1623_, 1, v___x_1622_);
lean_ctor_set(v___x_1623_, 2, v___x_1622_);
v___x_1624_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__30));
v___x_1625_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1626_ = lean_int_ediv(v_gap_1416_, v___x_1625_);
lean_dec(v_gap_1416_);
v___x_1627_ = l_Int_repr(v___x_1626_);
lean_dec(v___x_1626_);
v___x_1628_ = lean_string_append(v___x_1624_, v___x_1627_);
lean_dec_ref(v___x_1627_);
v___x_1629_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__31));
v___x_1630_ = lean_string_append(v___x_1628_, v___x_1629_);
v___x_1631_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__32));
lean_inc_ref(v___x_1618_);
v_name_1434_ = v___x_1618_;
v_kind_1435_ = v___x_1619_;
v_label_1436_ = v___x_1618_;
v_step_1437_ = v___x_1623_;
v_op_1438_ = v___x_1621_;
v_rq_1439_ = v___x_1630_;
v_en_1440_ = v___x_1631_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
}
}
v___jp_1636_:
{
lean_object* v___x_1638_; 
v___x_1638_ = lp_choreo_Choreo_State_at(v_pos_1417_, v___y_1637_);
if (lean_obj_tag(v_fst_1603_) == 0)
{
lean_object* v_x_1639_; 
v_x_1639_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_x_1639_);
lean_dec_ref(v___x_1638_);
v___y_1606_ = v_x_1639_;
v___y_1607_ = v___x_1635_;
goto v___jp_1605_;
}
else
{
lean_object* v_x_1640_; lean_object* v_head_1641_; 
v_x_1640_ = lean_ctor_get(v___x_1638_, 0);
lean_inc(v_x_1640_);
lean_dec_ref(v___x_1638_);
v_head_1641_ = lean_ctor_get(v_fst_1603_, 0);
lean_inc(v_head_1641_);
v___y_1606_ = v_x_1640_;
v___y_1607_ = v_head_1641_;
goto v___jp_1605_;
}
}
}
}
else
{
lean_object* v___x_1644_; uint8_t v_isShared_1645_; uint8_t v_isSharedCheck_1666_; 
lean_inc(v_index_1432_);
lean_inc(v_dy_1426_);
lean_inc(v_dx_1425_);
lean_inc(v_counts_1423_);
lean_inc_ref(v_title_1421_);
lean_inc_ref(v_section_x27_1420_);
lean_inc(v_steps_1418_);
lean_inc(v_pos_1417_);
lean_dec_ref(v_o_1414_);
v_isSharedCheck_1666_ = !lean_is_exclusive(v_st_1413_);
if (v_isSharedCheck_1666_ == 0)
{
lean_object* v_unused_1667_; lean_object* v_unused_1668_; 
v_unused_1667_ = lean_ctor_get(v_st_1413_, 1);
lean_dec(v_unused_1667_);
v_unused_1668_ = lean_ctor_get(v_st_1413_, 0);
lean_dec(v_unused_1668_);
v___x_1644_ = v_st_1413_;
v_isShared_1645_ = v_isSharedCheck_1666_;
goto v_resetjp_1643_;
}
else
{
lean_dec(v_st_1413_);
v___x_1644_ = lean_box(0);
v_isShared_1645_ = v_isSharedCheck_1666_;
goto v_resetjp_1643_;
}
v_resetjp_1643_:
{
lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1653_; 
v___x_1646_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__33));
v___x_1647_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1646_);
v___x_1648_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__1));
v___x_1649_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__34));
v___x_1650_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1649_);
lean_dec_ref(v_title_1421_);
lean_inc(v_n_1415_);
v___x_1651_ = lp_choreo_Choreo_compileOp___lam__1(v_n_1415_, v_dx_1425_, v_dy_1426_);
if (v_isShared_1645_ == 0)
{
lean_ctor_set_tag(v___x_1644_, 2);
lean_ctor_set(v___x_1644_, 1, v_counts_1423_);
lean_ctor_set(v___x_1644_, 0, v___x_1651_);
v___x_1653_ = v___x_1644_;
goto v_reusejp_1652_;
}
else
{
lean_object* v_reuseFailAlloc_1665_; 
v_reuseFailAlloc_1665_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1665_, 0, v___x_1651_);
lean_ctor_set(v_reuseFailAlloc_1665_, 1, v_counts_1423_);
v___x_1653_ = v_reuseFailAlloc_1665_;
goto v_reusejp_1652_;
}
v_reusejp_1652_:
{
lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; lean_object* v___x_1664_; 
lean_inc(v_gap_1416_);
lean_inc(v_n_1415_);
v___x_1654_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_1654_, 0, v_n_1415_);
lean_ctor_set(v___x_1654_, 1, v_gap_1416_);
v___x_1655_ = lean_box(0);
lean_inc_ref(v___x_1653_);
v___x_1656_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1656_, 0, v___x_1653_);
lean_ctor_set(v___x_1656_, 1, v___x_1654_);
lean_ctor_set(v___x_1656_, 2, v___x_1655_);
v___x_1657_ = ((lean_object*)(lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_compileOp_spec__10_spec__10___closed__1));
v___x_1658_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_1659_ = lean_int_ediv(v_gap_1416_, v___x_1658_);
lean_dec(v_gap_1416_);
v___x_1660_ = l_Int_repr(v___x_1659_);
lean_dec(v___x_1659_);
v___x_1661_ = lean_string_append(v___x_1657_, v___x_1660_);
lean_dec_ref(v___x_1660_);
v___x_1662_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__35));
v___x_1663_ = lean_string_append(v___x_1661_, v___x_1662_);
v___x_1664_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__36));
v_name_1434_ = v___x_1647_;
v_kind_1435_ = v___x_1648_;
v_label_1436_ = v___x_1650_;
v_step_1437_ = v___x_1656_;
v_op_1438_ = v___x_1653_;
v_rq_1439_ = v___x_1663_;
v_en_1440_ = v___x_1664_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
}
}
}
else
{
lean_object* v___x_1669_; lean_object* v___x_1670_; 
lean_inc(v_quarters_1424_);
v___x_1669_ = l_List_range(v_quarters_1424_);
v___x_1670_ = lp_choreo_List_foldl___at___00Choreo_compileOp_spec__12(v_o_1414_, v_n_1415_, v_gap_1416_, v_st_1413_, v___x_1669_);
lean_dec(v_gap_1416_);
lean_dec_ref(v_o_1414_);
return v___x_1670_;
}
}
else
{
lean_inc(v_index_1432_);
lean_inc(v_places_1428_);
lean_inc(v_counts_1423_);
lean_inc_ref(v_shape_1422_);
lean_inc_ref(v_title_1421_);
lean_inc_ref(v_section_x27_1420_);
lean_inc(v_steps_1418_);
lean_inc(v_pos_1417_);
lean_dec_ref(v_o_1414_);
lean_dec_ref(v_st_1413_);
if (lean_obj_tag(v_places_1428_) == 0)
{
lean_object* v___x_1671_; lean_object* v___x_1672_; 
lean_inc(v_n_1415_);
v___x_1671_ = lp_choreo_Choreo_namedPlaces(v_shape_1422_, v_n_1415_, v_gap_1416_);
v___x_1672_ = lp_choreo_Choreo_assignTo(v_pos_1417_, v___x_1671_);
lean_dec(v___x_1671_);
v___y_1487_ = v___x_1672_;
goto v___jp_1486_;
}
else
{
lean_object* v_val_1673_; 
v_val_1673_ = lean_ctor_get(v_places_1428_, 0);
lean_inc(v_val_1673_);
v___y_1487_ = v_val_1673_;
goto v___jp_1486_;
}
}
v___jp_1433_:
{
lean_object* v_next_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; lean_object* v___x_1448_; 
v_next_1443_ = lp_choreo_Choreo_Op_next(v_op_1438_, v_n_1415_, v_pos_1441_);
lean_inc(v_next_1443_);
lean_inc_ref(v_kind_1435_);
v___x_1444_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_1444_, 0, v_name_1434_);
lean_ctor_set(v___x_1444_, 1, v_section_x27_1420_);
lean_ctor_set(v___x_1444_, 2, v_index_1432_);
lean_ctor_set(v___x_1444_, 3, v_kind_1435_);
lean_ctor_set(v___x_1444_, 4, v_label_1436_);
lean_ctor_set(v___x_1444_, 5, v_step_1437_);
lean_ctor_set(v___x_1444_, 6, v_rq_1439_);
lean_ctor_set(v___x_1444_, 7, v_en_1440_);
lean_ctor_set(v___x_1444_, 8, v_pos_1441_);
lean_ctor_set(v___x_1444_, 9, v_next_1443_);
v___x_1445_ = lean_box(0);
v___x_1446_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1446_, 0, v___x_1444_);
lean_ctor_set(v___x_1446_, 1, v___x_1445_);
v___x_1447_ = l_List_appendTR___redArg(v_steps_1442_, v___x_1446_);
v___x_1448_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1448_, 0, v_next_1443_);
lean_ctor_set(v___x_1448_, 1, v___x_1447_);
return v___x_1448_;
}
v___jp_1449_:
{
lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; 
v___x_1454_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__0));
v___x_1455_ = lean_string_append(v___x_1454_, v_shape_1422_);
v___x_1456_ = lp_choreo_Choreo_compileOp___lam__0(v_title_1421_, v___x_1455_);
lean_dec_ref(v___x_1455_);
lean_dec_ref(v_title_1421_);
v___x_1457_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__1));
lean_inc(v_n_1415_);
v___x_1458_ = lp_choreo_Choreo_chooseCerts(v_n_1415_, v___y_1452_, v_gap_1416_);
lean_dec(v_gap_1416_);
lean_dec(v___y_1452_);
v___x_1459_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1459_, 0, v___y_1450_);
lean_ctor_set(v___x_1459_, 1, v_counts_1423_);
lean_ctor_set(v___x_1459_, 2, v___x_1458_);
v___x_1460_ = lean_box(0);
lean_inc_ref(v___x_1459_);
v___x_1461_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_1461_, 0, v___x_1459_);
lean_ctor_set(v___x_1461_, 1, v___x_1460_);
lean_ctor_set(v___x_1461_, 2, v___y_1453_);
v___x_1462_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__2));
if (v___y_1451_ == 0)
{
lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; 
v___x_1463_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__3));
v___x_1464_ = lean_string_append(v___x_1463_, v_shape_1422_);
lean_dec_ref(v_shape_1422_);
v___x_1465_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__4));
v___x_1466_ = lean_string_append(v___x_1464_, v___x_1465_);
lean_inc_ref(v___x_1456_);
v_name_1434_ = v___x_1456_;
v_kind_1435_ = v___x_1457_;
v_label_1436_ = v___x_1456_;
v_step_1437_ = v___x_1461_;
v_op_1438_ = v___x_1459_;
v_rq_1439_ = v___x_1462_;
v_en_1440_ = v___x_1466_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
else
{
lean_object* v___x_1467_; 
lean_dec_ref(v_shape_1422_);
v___x_1467_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__5));
lean_inc_ref(v___x_1456_);
v_name_1434_ = v___x_1456_;
v_kind_1435_ = v___x_1457_;
v_label_1436_ = v___x_1456_;
v_step_1437_ = v___x_1461_;
v_op_1438_ = v___x_1459_;
v_rq_1439_ = v___x_1462_;
v_en_1440_ = v___x_1467_;
v_pos_1441_ = v_pos_1417_;
v_steps_1442_ = v_steps_1418_;
goto v___jp_1433_;
}
}
v___jp_1468_:
{
lean_object* v___x_1472_; 
lean_inc(v___y_1469_);
v___x_1472_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1472_, 0, v___y_1469_);
v___y_1450_ = v___y_1469_;
v___y_1451_ = v___y_1471_;
v___y_1452_ = v___y_1470_;
v___y_1453_ = v___x_1472_;
goto v___jp_1449_;
}
v___jp_1473_:
{
if (lean_obj_tag(v_places_1428_) == 0)
{
if (v___y_1477_ == 0)
{
lean_dec(v___y_1475_);
v___y_1469_ = v___y_1474_;
v___y_1470_ = v___y_1476_;
v___y_1471_ = v___y_1477_;
goto v___jp_1468_;
}
else
{
lean_object* v___x_1478_; lean_object* v_x_1479_; lean_object* v_y_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v_r2_1483_; lean_object* v___x_1484_; 
v___x_1478_ = lp_choreo_Choreo_centre;
v_x_1479_ = lean_ctor_get(v___x_1478_, 0);
v_y_1480_ = lean_ctor_get(v___x_1478_, 1);
v___x_1481_ = lean_unsigned_to_nat(0u);
v___x_1482_ = lp_choreo_Choreo_State_at(v___y_1474_, v___x_1481_);
v_r2_1483_ = lp_choreo_Choreo_distSq(v___x_1482_, v___x_1478_);
lean_dec_ref(v___x_1482_);
lean_inc(v_y_1480_);
lean_inc(v_x_1479_);
v___x_1484_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v___x_1484_, 0, v___y_1475_);
lean_ctor_set(v___x_1484_, 1, v_x_1479_);
lean_ctor_set(v___x_1484_, 2, v_y_1480_);
lean_ctor_set(v___x_1484_, 3, v_r2_1483_);
v___y_1450_ = v___y_1474_;
v___y_1451_ = v___y_1477_;
v___y_1452_ = v___y_1476_;
v___y_1453_ = v___x_1484_;
goto v___jp_1449_;
}
}
else
{
uint8_t v___x_1485_; 
lean_dec_ref_known(v_places_1428_, 1);
lean_dec(v___y_1475_);
v___x_1485_ = 0;
v___y_1469_ = v___y_1474_;
v___y_1470_ = v___y_1476_;
v___y_1471_ = v___x_1485_;
goto v___jp_1468_;
}
}
v___jp_1486_:
{
lean_object* v___x_1488_; lean_object* v___x_1489_; lean_object* v_paths_1490_; lean_object* v___x_1491_; uint8_t v___x_1492_; 
lean_inc(v_n_1415_);
v___x_1488_ = l_List_range(v_n_1415_);
v___x_1489_ = lean_box(0);
lean_inc(v___x_1488_);
v_paths_1490_ = lp_choreo_List_mapTR_loop___at___00Choreo_compileOp_spec__6(v_pos_1417_, v___y_1487_, v___x_1488_, v___x_1489_);
v___x_1491_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_1492_ = lean_string_dec_eq(v_shape_1422_, v___x_1491_);
if (v___x_1492_ == 0)
{
lean_object* v___x_1493_; uint8_t v___x_1494_; 
v___x_1493_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__3));
v___x_1494_ = lean_string_dec_eq(v_shape_1422_, v___x_1493_);
v___y_1474_ = v___y_1487_;
v___y_1475_ = v___x_1488_;
v___y_1476_ = v_paths_1490_;
v___y_1477_ = v___x_1494_;
goto v___jp_1473_;
}
else
{
v___y_1474_ = v___y_1487_;
v___y_1475_ = v___x_1488_;
v___y_1476_ = v_paths_1490_;
v___y_1477_ = v___x_1492_;
goto v___jp_1473_;
}
}
}
}
static lean_object* _init_lp_choreo_Choreo_Pt_mapT___closed__2(void){
_start:
{
lean_object* v___x_1676_; lean_object* v___x_1677_; 
v___x_1676_ = lean_unsigned_to_nat(8000u);
v___x_1677_ = lean_nat_to_int(v___x_1676_);
return v___x_1677_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT(lean_object* v_t_1678_, lean_object* v_p_1679_){
_start:
{
lean_object* v___x_1680_; uint8_t v___x_1681_; 
v___x_1680_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1681_ = lean_string_dec_eq(v_t_1678_, v___x_1680_);
if (v___x_1681_ == 0)
{
lean_object* v___x_1682_; uint8_t v___x_1683_; 
v___x_1682_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_1683_ = lean_string_dec_eq(v_t_1678_, v___x_1682_);
if (v___x_1683_ == 0)
{
lean_object* v___x_1684_; uint8_t v___x_1685_; 
v___x_1684_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__1));
v___x_1685_ = lean_string_dec_eq(v_t_1678_, v___x_1684_);
if (v___x_1685_ == 0)
{
return v_p_1679_;
}
else
{
lean_object* v_x_1686_; lean_object* v_y_1687_; lean_object* v___x_1689_; uint8_t v_isShared_1690_; uint8_t v_isSharedCheck_1696_; 
v_x_1686_ = lean_ctor_get(v_p_1679_, 0);
v_y_1687_ = lean_ctor_get(v_p_1679_, 1);
v_isSharedCheck_1696_ = !lean_is_exclusive(v_p_1679_);
if (v_isSharedCheck_1696_ == 0)
{
v___x_1689_ = v_p_1679_;
v_isShared_1690_ = v_isSharedCheck_1696_;
goto v_resetjp_1688_;
}
else
{
lean_inc(v_y_1687_);
lean_inc(v_x_1686_);
lean_dec(v_p_1679_);
v___x_1689_ = lean_box(0);
v_isShared_1690_ = v_isSharedCheck_1696_;
goto v_resetjp_1688_;
}
v_resetjp_1688_:
{
lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1694_; 
v___x_1691_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_1692_ = lean_int_add(v_y_1687_, v___x_1691_);
lean_dec(v_y_1687_);
if (v_isShared_1690_ == 0)
{
lean_ctor_set(v___x_1689_, 1, v___x_1692_);
v___x_1694_ = v___x_1689_;
goto v_reusejp_1693_;
}
else
{
lean_object* v_reuseFailAlloc_1695_; 
v_reuseFailAlloc_1695_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1695_, 0, v_x_1686_);
lean_ctor_set(v_reuseFailAlloc_1695_, 1, v___x_1692_);
v___x_1694_ = v_reuseFailAlloc_1695_;
goto v_reusejp_1693_;
}
v_reusejp_1693_:
{
return v___x_1694_;
}
}
}
}
else
{
lean_object* v_x_1697_; lean_object* v_y_1698_; lean_object* v___x_1700_; uint8_t v_isShared_1701_; uint8_t v_isSharedCheck_1708_; 
v_x_1697_ = lean_ctor_get(v_p_1679_, 0);
v_y_1698_ = lean_ctor_get(v_p_1679_, 1);
v_isSharedCheck_1708_ = !lean_is_exclusive(v_p_1679_);
if (v_isSharedCheck_1708_ == 0)
{
v___x_1700_ = v_p_1679_;
v_isShared_1701_ = v_isSharedCheck_1708_;
goto v_resetjp_1699_;
}
else
{
lean_inc(v_y_1698_);
lean_inc(v_x_1697_);
lean_dec(v_p_1679_);
v___x_1700_ = lean_box(0);
v_isShared_1701_ = v_isSharedCheck_1708_;
goto v_resetjp_1699_;
}
v_resetjp_1699_:
{
lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v___x_1704_; lean_object* v___x_1706_; 
v___x_1702_ = lean_int_neg(v_x_1697_);
lean_dec(v_x_1697_);
v___x_1703_ = lean_obj_once(&lp_choreo_Choreo_Pt_mapT___closed__2, &lp_choreo_Choreo_Pt_mapT___closed__2_once, _init_lp_choreo_Choreo_Pt_mapT___closed__2);
v___x_1704_ = lean_int_sub(v___x_1703_, v_y_1698_);
lean_dec(v_y_1698_);
if (v_isShared_1701_ == 0)
{
lean_ctor_set(v___x_1700_, 1, v___x_1704_);
lean_ctor_set(v___x_1700_, 0, v___x_1702_);
v___x_1706_ = v___x_1700_;
goto v_reusejp_1705_;
}
else
{
lean_object* v_reuseFailAlloc_1707_; 
v_reuseFailAlloc_1707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1707_, 0, v___x_1702_);
lean_ctor_set(v_reuseFailAlloc_1707_, 1, v___x_1704_);
v___x_1706_ = v_reuseFailAlloc_1707_;
goto v_reusejp_1705_;
}
v_reusejp_1705_:
{
return v___x_1706_;
}
}
}
}
else
{
lean_object* v_x_1709_; lean_object* v_y_1710_; lean_object* v___x_1712_; uint8_t v_isShared_1713_; uint8_t v_isSharedCheck_1718_; 
v_x_1709_ = lean_ctor_get(v_p_1679_, 0);
v_y_1710_ = lean_ctor_get(v_p_1679_, 1);
v_isSharedCheck_1718_ = !lean_is_exclusive(v_p_1679_);
if (v_isSharedCheck_1718_ == 0)
{
v___x_1712_ = v_p_1679_;
v_isShared_1713_ = v_isSharedCheck_1718_;
goto v_resetjp_1711_;
}
else
{
lean_inc(v_y_1710_);
lean_inc(v_x_1709_);
lean_dec(v_p_1679_);
v___x_1712_ = lean_box(0);
v_isShared_1713_ = v_isSharedCheck_1718_;
goto v_resetjp_1711_;
}
v_resetjp_1711_:
{
lean_object* v___x_1714_; lean_object* v___x_1716_; 
v___x_1714_ = lean_int_neg(v_x_1709_);
lean_dec(v_x_1709_);
if (v_isShared_1713_ == 0)
{
lean_ctor_set(v___x_1712_, 0, v___x_1714_);
v___x_1716_ = v___x_1712_;
goto v_reusejp_1715_;
}
else
{
lean_object* v_reuseFailAlloc_1717_; 
v_reuseFailAlloc_1717_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1717_, 0, v___x_1714_);
lean_ctor_set(v_reuseFailAlloc_1717_, 1, v_y_1710_);
v___x_1716_ = v_reuseFailAlloc_1717_;
goto v_reusejp_1715_;
}
v_reusejp_1715_:
{
return v___x_1716_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_mapT___boxed(lean_object* v_t_1719_, lean_object* v_p_1720_){
_start:
{
lean_object* v_res_1721_; 
v_res_1721_ = lp_choreo_Choreo_Pt_mapT(v_t_1719_, v_p_1720_);
lean_dec_ref(v_t_1719_);
return v_res_1721_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(lean_object* v_t_1722_, lean_object* v_a_1723_, lean_object* v_a_1724_){
_start:
{
if (lean_obj_tag(v_a_1723_) == 0)
{
lean_object* v___x_1725_; 
v___x_1725_ = l_List_reverse___redArg(v_a_1724_);
return v___x_1725_;
}
else
{
lean_object* v_head_1726_; lean_object* v_tail_1727_; lean_object* v___x_1729_; uint8_t v_isShared_1730_; uint8_t v_isSharedCheck_1736_; 
v_head_1726_ = lean_ctor_get(v_a_1723_, 0);
v_tail_1727_ = lean_ctor_get(v_a_1723_, 1);
v_isSharedCheck_1736_ = !lean_is_exclusive(v_a_1723_);
if (v_isSharedCheck_1736_ == 0)
{
v___x_1729_ = v_a_1723_;
v_isShared_1730_ = v_isSharedCheck_1736_;
goto v_resetjp_1728_;
}
else
{
lean_inc(v_tail_1727_);
lean_inc(v_head_1726_);
lean_dec(v_a_1723_);
v___x_1729_ = lean_box(0);
v_isShared_1730_ = v_isSharedCheck_1736_;
goto v_resetjp_1728_;
}
v_resetjp_1728_:
{
lean_object* v___x_1731_; lean_object* v___x_1733_; 
v___x_1731_ = lp_choreo_Choreo_Pt_mapT(v_t_1722_, v_head_1726_);
if (v_isShared_1730_ == 0)
{
lean_ctor_set(v___x_1729_, 1, v_a_1724_);
lean_ctor_set(v___x_1729_, 0, v___x_1731_);
v___x_1733_ = v___x_1729_;
goto v_reusejp_1732_;
}
else
{
lean_object* v_reuseFailAlloc_1735_; 
v_reuseFailAlloc_1735_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1735_, 0, v___x_1731_);
lean_ctor_set(v_reuseFailAlloc_1735_, 1, v_a_1724_);
v___x_1733_ = v_reuseFailAlloc_1735_;
goto v_reusejp_1732_;
}
v_reusejp_1732_:
{
v_a_1723_ = v_tail_1727_;
v_a_1724_ = v___x_1733_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0___boxed(lean_object* v_t_1737_, lean_object* v_a_1738_, lean_object* v_a_1739_){
_start:
{
lean_object* v_res_1740_; 
v_res_1740_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1737_, v_a_1738_, v_a_1739_);
lean_dec_ref(v_t_1737_);
return v_res_1740_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT(lean_object* v_t_1741_, lean_object* v_x_1742_){
_start:
{
switch(lean_obj_tag(v_x_1742_))
{
case 1:
{
lean_object* v_places_1743_; lean_object* v___x_1745_; uint8_t v_isShared_1746_; uint8_t v_isSharedCheck_1752_; 
v_places_1743_ = lean_ctor_get(v_x_1742_, 0);
v_isSharedCheck_1752_ = !lean_is_exclusive(v_x_1742_);
if (v_isSharedCheck_1752_ == 0)
{
v___x_1745_ = v_x_1742_;
v_isShared_1746_ = v_isSharedCheck_1752_;
goto v_resetjp_1744_;
}
else
{
lean_inc(v_places_1743_);
lean_dec(v_x_1742_);
v___x_1745_ = lean_box(0);
v_isShared_1746_ = v_isSharedCheck_1752_;
goto v_resetjp_1744_;
}
v_resetjp_1744_:
{
lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1750_; 
v___x_1747_ = lean_box(0);
v___x_1748_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1741_, v_places_1743_, v___x_1747_);
if (v_isShared_1746_ == 0)
{
lean_ctor_set(v___x_1745_, 0, v___x_1748_);
v___x_1750_ = v___x_1745_;
goto v_reusejp_1749_;
}
else
{
lean_object* v_reuseFailAlloc_1751_; 
v_reuseFailAlloc_1751_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1751_, 0, v___x_1748_);
v___x_1750_ = v_reuseFailAlloc_1751_;
goto v_reusejp_1749_;
}
v_reusejp_1749_:
{
return v___x_1750_;
}
}
}
case 3:
{
lean_object* v_who_1753_; lean_object* v_cx_1754_; lean_object* v_cy_1755_; lean_object* v_r2_1756_; lean_object* v___x_1758_; uint8_t v_isShared_1759_; uint8_t v_isSharedCheck_1767_; 
v_who_1753_ = lean_ctor_get(v_x_1742_, 0);
v_cx_1754_ = lean_ctor_get(v_x_1742_, 1);
v_cy_1755_ = lean_ctor_get(v_x_1742_, 2);
v_r2_1756_ = lean_ctor_get(v_x_1742_, 3);
v_isSharedCheck_1767_ = !lean_is_exclusive(v_x_1742_);
if (v_isSharedCheck_1767_ == 0)
{
v___x_1758_ = v_x_1742_;
v_isShared_1759_ = v_isSharedCheck_1767_;
goto v_resetjp_1757_;
}
else
{
lean_inc(v_r2_1756_);
lean_inc(v_cy_1755_);
lean_inc(v_cx_1754_);
lean_inc(v_who_1753_);
lean_dec(v_x_1742_);
v___x_1758_ = lean_box(0);
v_isShared_1759_ = v_isSharedCheck_1767_;
goto v_resetjp_1757_;
}
v_resetjp_1757_:
{
lean_object* v___x_1760_; lean_object* v_c_1761_; lean_object* v_x_1762_; lean_object* v_y_1763_; lean_object* v___x_1765_; 
v___x_1760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1760_, 0, v_cx_1754_);
lean_ctor_set(v___x_1760_, 1, v_cy_1755_);
v_c_1761_ = lp_choreo_Choreo_Pt_mapT(v_t_1741_, v___x_1760_);
v_x_1762_ = lean_ctor_get(v_c_1761_, 0);
lean_inc(v_x_1762_);
v_y_1763_ = lean_ctor_get(v_c_1761_, 1);
lean_inc(v_y_1763_);
lean_dec_ref(v_c_1761_);
if (v_isShared_1759_ == 0)
{
lean_ctor_set(v___x_1758_, 2, v_y_1763_);
lean_ctor_set(v___x_1758_, 1, v_x_1762_);
v___x_1765_ = v___x_1758_;
goto v_reusejp_1764_;
}
else
{
lean_object* v_reuseFailAlloc_1766_; 
v_reuseFailAlloc_1766_ = lean_alloc_ctor(3, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1766_, 0, v_who_1753_);
lean_ctor_set(v_reuseFailAlloc_1766_, 1, v_x_1762_);
lean_ctor_set(v_reuseFailAlloc_1766_, 2, v_y_1763_);
lean_ctor_set(v_reuseFailAlloc_1766_, 3, v_r2_1756_);
v___x_1765_ = v_reuseFailAlloc_1766_;
goto v_reusejp_1764_;
}
v_reusejp_1764_:
{
return v___x_1765_;
}
}
}
case 6:
{
lean_object* v_p_1768_; lean_object* v_q_1769_; lean_object* v___x_1771_; uint8_t v_isShared_1772_; uint8_t v_isSharedCheck_1778_; 
v_p_1768_ = lean_ctor_get(v_x_1742_, 0);
v_q_1769_ = lean_ctor_get(v_x_1742_, 1);
v_isSharedCheck_1778_ = !lean_is_exclusive(v_x_1742_);
if (v_isSharedCheck_1778_ == 0)
{
v___x_1771_ = v_x_1742_;
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
else
{
lean_inc(v_q_1769_);
lean_inc(v_p_1768_);
lean_dec(v_x_1742_);
v___x_1771_ = lean_box(0);
v_isShared_1772_ = v_isSharedCheck_1778_;
goto v_resetjp_1770_;
}
v_resetjp_1770_:
{
lean_object* v___x_1773_; lean_object* v___x_1774_; lean_object* v___x_1776_; 
v___x_1773_ = lp_choreo_Choreo_Pred_mapT(v_t_1741_, v_p_1768_);
v___x_1774_ = lp_choreo_Choreo_Pred_mapT(v_t_1741_, v_q_1769_);
if (v_isShared_1772_ == 0)
{
lean_ctor_set(v___x_1771_, 1, v___x_1774_);
lean_ctor_set(v___x_1771_, 0, v___x_1773_);
v___x_1776_ = v___x_1771_;
goto v_reusejp_1775_;
}
else
{
lean_object* v_reuseFailAlloc_1777_; 
v_reuseFailAlloc_1777_ = lean_alloc_ctor(6, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1777_, 0, v___x_1773_);
lean_ctor_set(v_reuseFailAlloc_1777_, 1, v___x_1774_);
v___x_1776_ = v_reuseFailAlloc_1777_;
goto v_reusejp_1775_;
}
v_reusejp_1775_:
{
return v___x_1776_;
}
}
}
case 5:
{
lean_object* v_A_1779_; lean_object* v_B_1780_; lean_object* v_line_1781_; lean_object* v_d_1782_; lean_object* v___x_1787_; uint8_t v___x_1788_; 
v_A_1779_ = lean_ctor_get(v_x_1742_, 0);
v_B_1780_ = lean_ctor_get(v_x_1742_, 1);
v_line_1781_ = lean_ctor_get(v_x_1742_, 2);
v_d_1782_ = lean_ctor_get(v_x_1742_, 3);
v___x_1787_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1788_ = lean_string_dec_eq(v_t_1741_, v___x_1787_);
if (v___x_1788_ == 0)
{
lean_object* v___x_1789_; uint8_t v___x_1790_; 
v___x_1789_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_1790_ = lean_string_dec_eq(v_t_1741_, v___x_1789_);
if (v___x_1790_ == 0)
{
return v_x_1742_;
}
else
{
lean_inc(v_d_1782_);
lean_inc(v_line_1781_);
lean_inc(v_B_1780_);
lean_inc(v_A_1779_);
lean_dec_ref_known(v_x_1742_, 4);
goto v___jp_1783_;
}
}
else
{
lean_inc(v_d_1782_);
lean_inc(v_line_1781_);
lean_inc(v_B_1780_);
lean_inc(v_A_1779_);
lean_dec_ref_known(v_x_1742_, 4);
goto v___jp_1783_;
}
v___jp_1783_:
{
lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; 
v___x_1784_ = lean_int_neg(v_line_1781_);
lean_dec(v_line_1781_);
v___x_1785_ = lean_int_sub(v___x_1784_, v_d_1782_);
lean_dec(v___x_1784_);
v___x_1786_ = lean_alloc_ctor(5, 4, 0);
lean_ctor_set(v___x_1786_, 0, v_B_1780_);
lean_ctor_set(v___x_1786_, 1, v_A_1779_);
lean_ctor_set(v___x_1786_, 2, v___x_1785_);
lean_ctor_set(v___x_1786_, 3, v_d_1782_);
return v___x_1786_;
}
}
default: 
{
return v_x_1742_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_mapT___boxed(lean_object* v_t_1791_, lean_object* v_x_1792_){
_start:
{
lean_object* v_res_1793_; 
v_res_1793_ = lp_choreo_Choreo_Pred_mapT(v_t_1791_, v_x_1792_);
lean_dec_ref(v_t_1791_);
return v_res_1793_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(lean_object* v_s_x27_1794_, lean_object* v_c_x27_1795_, uint8_t v___y_1796_, lean_object* v_a_1797_, lean_object* v_a_1798_){
_start:
{
if (lean_obj_tag(v_a_1797_) == 0)
{
lean_object* v___x_1799_; 
v___x_1799_ = l_List_reverse___redArg(v_a_1798_);
return v___x_1799_;
}
else
{
lean_object* v_head_1800_; lean_object* v_tail_1801_; lean_object* v___x_1803_; uint8_t v_isShared_1804_; uint8_t v_isSharedCheck_1811_; 
v_head_1800_ = lean_ctor_get(v_a_1797_, 0);
v_tail_1801_ = lean_ctor_get(v_a_1797_, 1);
v_isSharedCheck_1811_ = !lean_is_exclusive(v_a_1797_);
if (v_isSharedCheck_1811_ == 0)
{
v___x_1803_ = v_a_1797_;
v_isShared_1804_ = v_isSharedCheck_1811_;
goto v_resetjp_1802_;
}
else
{
lean_inc(v_tail_1801_);
lean_inc(v_head_1800_);
lean_dec(v_a_1797_);
v___x_1803_ = lean_box(0);
v_isShared_1804_ = v_isSharedCheck_1811_;
goto v_resetjp_1802_;
}
v_resetjp_1802_:
{
lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1808_; 
v___x_1805_ = lp_choreo_List_at(v_s_x27_1794_, v_head_1800_);
v___x_1806_ = lp_choreo_Choreo_rotatePath(v_c_x27_1795_, v___x_1805_, v___y_1796_);
lean_dec_ref(v___x_1805_);
if (v_isShared_1804_ == 0)
{
lean_ctor_set(v___x_1803_, 1, v_a_1798_);
lean_ctor_set(v___x_1803_, 0, v___x_1806_);
v___x_1808_ = v___x_1803_;
goto v_reusejp_1807_;
}
else
{
lean_object* v_reuseFailAlloc_1810_; 
v_reuseFailAlloc_1810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1810_, 0, v___x_1806_);
lean_ctor_set(v_reuseFailAlloc_1810_, 1, v_a_1798_);
v___x_1808_ = v_reuseFailAlloc_1810_;
goto v_reusejp_1807_;
}
v_reusejp_1807_:
{
v_a_1797_ = v_tail_1801_;
v_a_1798_ = v___x_1808_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1___boxed(lean_object* v_s_x27_1812_, lean_object* v_c_x27_1813_, lean_object* v___y_1814_, lean_object* v_a_1815_, lean_object* v_a_1816_){
_start:
{
uint8_t v___y_627__boxed_1817_; lean_object* v_res_1818_; 
v___y_627__boxed_1817_ = lean_unbox(v___y_1814_);
v_res_1818_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(v_s_x27_1812_, v_c_x27_1813_, v___y_627__boxed_1817_, v_a_1815_, v_a_1816_);
lean_dec_ref(v_c_x27_1813_);
lean_dec(v_s_x27_1812_);
return v_res_1818_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__3(lean_object* v_a_1819_, lean_object* v_a_1820_){
_start:
{
if (lean_obj_tag(v_a_1819_) == 0)
{
lean_object* v___x_1821_; 
v___x_1821_ = l_List_reverse___redArg(v_a_1820_);
return v___x_1821_;
}
else
{
lean_object* v_head_1822_; lean_object* v_tail_1823_; lean_object* v___x_1825_; uint8_t v_isShared_1826_; uint8_t v_isSharedCheck_1842_; 
v_head_1822_ = lean_ctor_get(v_a_1819_, 0);
v_tail_1823_ = lean_ctor_get(v_a_1819_, 1);
v_isSharedCheck_1842_ = !lean_is_exclusive(v_a_1819_);
if (v_isSharedCheck_1842_ == 0)
{
v___x_1825_ = v_a_1819_;
v_isShared_1826_ = v_isSharedCheck_1842_;
goto v_resetjp_1824_;
}
else
{
lean_inc(v_tail_1823_);
lean_inc(v_head_1822_);
lean_dec(v_a_1819_);
v___x_1825_ = lean_box(0);
v_isShared_1826_ = v_isSharedCheck_1842_;
goto v_resetjp_1824_;
}
v_resetjp_1824_:
{
lean_object* v_fst_1827_; lean_object* v_snd_1828_; lean_object* v___x_1830_; uint8_t v_isShared_1831_; uint8_t v_isSharedCheck_1841_; 
v_fst_1827_ = lean_ctor_get(v_head_1822_, 0);
v_snd_1828_ = lean_ctor_get(v_head_1822_, 1);
v_isSharedCheck_1841_ = !lean_is_exclusive(v_head_1822_);
if (v_isSharedCheck_1841_ == 0)
{
v___x_1830_ = v_head_1822_;
v_isShared_1831_ = v_isSharedCheck_1841_;
goto v_resetjp_1829_;
}
else
{
lean_inc(v_snd_1828_);
lean_inc(v_fst_1827_);
lean_dec(v_head_1822_);
v___x_1830_ = lean_box(0);
v_isShared_1831_ = v_isSharedCheck_1841_;
goto v_resetjp_1829_;
}
v_resetjp_1829_:
{
lean_object* v___x_1832_; lean_object* v___x_1833_; lean_object* v___x_1835_; 
v___x_1832_ = lean_int_neg(v_fst_1827_);
lean_dec(v_fst_1827_);
v___x_1833_ = lean_int_neg(v_snd_1828_);
lean_dec(v_snd_1828_);
if (v_isShared_1831_ == 0)
{
lean_ctor_set(v___x_1830_, 1, v___x_1833_);
lean_ctor_set(v___x_1830_, 0, v___x_1832_);
v___x_1835_ = v___x_1830_;
goto v_reusejp_1834_;
}
else
{
lean_object* v_reuseFailAlloc_1840_; 
v_reuseFailAlloc_1840_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1840_, 0, v___x_1832_);
lean_ctor_set(v_reuseFailAlloc_1840_, 1, v___x_1833_);
v___x_1835_ = v_reuseFailAlloc_1840_;
goto v_reusejp_1834_;
}
v_reusejp_1834_:
{
lean_object* v___x_1837_; 
if (v_isShared_1826_ == 0)
{
lean_ctor_set(v___x_1825_, 1, v_a_1820_);
lean_ctor_set(v___x_1825_, 0, v___x_1835_);
v___x_1837_ = v___x_1825_;
goto v_reusejp_1836_;
}
else
{
lean_object* v_reuseFailAlloc_1839_; 
v_reuseFailAlloc_1839_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1839_, 0, v___x_1835_);
lean_ctor_set(v_reuseFailAlloc_1839_, 1, v_a_1820_);
v___x_1837_ = v_reuseFailAlloc_1839_;
goto v_reusejp_1836_;
}
v_reusejp_1836_:
{
v_a_1819_ = v_tail_1823_;
v_a_1820_ = v___x_1837_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__4(lean_object* v_a_1843_, lean_object* v_a_1844_){
_start:
{
if (lean_obj_tag(v_a_1843_) == 0)
{
lean_object* v___x_1845_; 
v___x_1845_ = l_List_reverse___redArg(v_a_1844_);
return v___x_1845_;
}
else
{
lean_object* v_head_1846_; lean_object* v_tail_1847_; lean_object* v___x_1849_; uint8_t v_isShared_1850_; uint8_t v_isSharedCheck_1865_; 
v_head_1846_ = lean_ctor_get(v_a_1843_, 0);
v_tail_1847_ = lean_ctor_get(v_a_1843_, 1);
v_isSharedCheck_1865_ = !lean_is_exclusive(v_a_1843_);
if (v_isSharedCheck_1865_ == 0)
{
v___x_1849_ = v_a_1843_;
v_isShared_1850_ = v_isSharedCheck_1865_;
goto v_resetjp_1848_;
}
else
{
lean_inc(v_tail_1847_);
lean_inc(v_head_1846_);
lean_dec(v_a_1843_);
v___x_1849_ = lean_box(0);
v_isShared_1850_ = v_isSharedCheck_1865_;
goto v_resetjp_1848_;
}
v_resetjp_1848_:
{
lean_object* v_fst_1851_; lean_object* v_snd_1852_; lean_object* v___x_1854_; uint8_t v_isShared_1855_; uint8_t v_isSharedCheck_1864_; 
v_fst_1851_ = lean_ctor_get(v_head_1846_, 0);
v_snd_1852_ = lean_ctor_get(v_head_1846_, 1);
v_isSharedCheck_1864_ = !lean_is_exclusive(v_head_1846_);
if (v_isSharedCheck_1864_ == 0)
{
v___x_1854_ = v_head_1846_;
v_isShared_1855_ = v_isSharedCheck_1864_;
goto v_resetjp_1853_;
}
else
{
lean_inc(v_snd_1852_);
lean_inc(v_fst_1851_);
lean_dec(v_head_1846_);
v___x_1854_ = lean_box(0);
v_isShared_1855_ = v_isSharedCheck_1864_;
goto v_resetjp_1853_;
}
v_resetjp_1853_:
{
lean_object* v___x_1856_; lean_object* v___x_1858_; 
v___x_1856_ = lean_int_neg(v_fst_1851_);
lean_dec(v_fst_1851_);
if (v_isShared_1855_ == 0)
{
lean_ctor_set(v___x_1854_, 0, v___x_1856_);
v___x_1858_ = v___x_1854_;
goto v_reusejp_1857_;
}
else
{
lean_object* v_reuseFailAlloc_1863_; 
v_reuseFailAlloc_1863_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1863_, 0, v___x_1856_);
lean_ctor_set(v_reuseFailAlloc_1863_, 1, v_snd_1852_);
v___x_1858_ = v_reuseFailAlloc_1863_;
goto v_reusejp_1857_;
}
v_reusejp_1857_:
{
lean_object* v___x_1860_; 
if (v_isShared_1850_ == 0)
{
lean_ctor_set(v___x_1849_, 1, v_a_1844_);
lean_ctor_set(v___x_1849_, 0, v___x_1858_);
v___x_1860_ = v___x_1849_;
goto v_reusejp_1859_;
}
else
{
lean_object* v_reuseFailAlloc_1862_; 
v_reuseFailAlloc_1862_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1862_, 0, v___x_1858_);
lean_ctor_set(v_reuseFailAlloc_1862_, 1, v_a_1844_);
v___x_1860_ = v_reuseFailAlloc_1862_;
goto v_reusejp_1859_;
}
v_reusejp_1859_:
{
v_a_1843_ = v_tail_1847_;
v_a_1844_ = v___x_1860_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(lean_object* v_t_1866_, lean_object* v_s_1867_, lean_object* v_tg_1868_, lean_object* v_a_1869_, lean_object* v_a_1870_){
_start:
{
if (lean_obj_tag(v_a_1869_) == 0)
{
lean_object* v___x_1871_; 
lean_dec(v_s_1867_);
v___x_1871_ = l_List_reverse___redArg(v_a_1870_);
return v___x_1871_;
}
else
{
lean_object* v_head_1872_; lean_object* v_tail_1873_; lean_object* v___x_1875_; uint8_t v_isShared_1876_; uint8_t v_isSharedCheck_1886_; 
v_head_1872_ = lean_ctor_get(v_a_1869_, 0);
v_tail_1873_ = lean_ctor_get(v_a_1869_, 1);
v_isSharedCheck_1886_ = !lean_is_exclusive(v_a_1869_);
if (v_isSharedCheck_1886_ == 0)
{
v___x_1875_ = v_a_1869_;
v_isShared_1876_ = v_isSharedCheck_1886_;
goto v_resetjp_1874_;
}
else
{
lean_inc(v_tail_1873_);
lean_inc(v_head_1872_);
lean_dec(v_a_1869_);
v___x_1875_ = lean_box(0);
v_isShared_1876_ = v_isSharedCheck_1886_;
goto v_resetjp_1874_;
}
v_resetjp_1874_:
{
lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; lean_object* v___x_1880_; lean_object* v___x_1881_; lean_object* v___x_1883_; 
v___x_1877_ = lean_box(0);
lean_inc(v_s_1867_);
v___x_1878_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1866_, v_s_1867_, v___x_1877_);
lean_inc(v_head_1872_);
v___x_1879_ = lp_choreo_List_at(v___x_1878_, v_head_1872_);
lean_dec(v___x_1878_);
v___x_1880_ = lp_choreo_List_at(v_tg_1868_, v_head_1872_);
v___x_1881_ = lp_choreo_Choreo_easePath(v___x_1879_, v___x_1880_);
if (v_isShared_1876_ == 0)
{
lean_ctor_set(v___x_1875_, 1, v_a_1870_);
lean_ctor_set(v___x_1875_, 0, v___x_1881_);
v___x_1883_ = v___x_1875_;
goto v_reusejp_1882_;
}
else
{
lean_object* v_reuseFailAlloc_1885_; 
v_reuseFailAlloc_1885_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1885_, 0, v___x_1881_);
lean_ctor_set(v_reuseFailAlloc_1885_, 1, v_a_1870_);
v___x_1883_ = v_reuseFailAlloc_1885_;
goto v_reusejp_1882_;
}
v_reusejp_1882_:
{
v_a_1869_ = v_tail_1873_;
v_a_1870_ = v___x_1883_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0___boxed(lean_object* v_t_1887_, lean_object* v_s_1888_, lean_object* v_tg_1889_, lean_object* v_a_1890_, lean_object* v_a_1891_){
_start:
{
lean_object* v_res_1892_; 
v_res_1892_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_t_1887_, v_s_1888_, v_tg_1889_, v_a_1890_, v_a_1891_);
lean_dec(v_tg_1889_);
lean_dec_ref(v_t_1887_);
return v_res_1892_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2(lean_object* v_t_1893_, lean_object* v_a_1894_, lean_object* v_a_1895_){
_start:
{
if (lean_obj_tag(v_a_1894_) == 0)
{
lean_object* v___x_1896_; 
v___x_1896_ = l_List_reverse___redArg(v_a_1895_);
return v___x_1896_;
}
else
{
lean_object* v_head_1897_; lean_object* v_tail_1898_; lean_object* v___x_1900_; uint8_t v_isShared_1901_; uint8_t v_isSharedCheck_1921_; 
v_head_1897_ = lean_ctor_get(v_a_1894_, 0);
v_tail_1898_ = lean_ctor_get(v_a_1894_, 1);
v_isSharedCheck_1921_ = !lean_is_exclusive(v_a_1894_);
if (v_isSharedCheck_1921_ == 0)
{
v___x_1900_ = v_a_1894_;
v_isShared_1901_ = v_isSharedCheck_1921_;
goto v_resetjp_1899_;
}
else
{
lean_inc(v_tail_1898_);
lean_inc(v_head_1897_);
lean_dec(v_a_1894_);
v___x_1900_ = lean_box(0);
v_isShared_1901_ = v_isSharedCheck_1921_;
goto v_resetjp_1899_;
}
v_resetjp_1899_:
{
lean_object* v_i_1902_; lean_object* v_cx_1903_; lean_object* v_cy_1904_; lean_object* v_r2_1905_; lean_object* v___x_1907_; uint8_t v_isShared_1908_; uint8_t v_isSharedCheck_1920_; 
v_i_1902_ = lean_ctor_get(v_head_1897_, 0);
v_cx_1903_ = lean_ctor_get(v_head_1897_, 1);
v_cy_1904_ = lean_ctor_get(v_head_1897_, 2);
v_r2_1905_ = lean_ctor_get(v_head_1897_, 3);
v_isSharedCheck_1920_ = !lean_is_exclusive(v_head_1897_);
if (v_isSharedCheck_1920_ == 0)
{
v___x_1907_ = v_head_1897_;
v_isShared_1908_ = v_isSharedCheck_1920_;
goto v_resetjp_1906_;
}
else
{
lean_inc(v_r2_1905_);
lean_inc(v_cy_1904_);
lean_inc(v_cx_1903_);
lean_inc(v_i_1902_);
lean_dec(v_head_1897_);
v___x_1907_ = lean_box(0);
v_isShared_1908_ = v_isSharedCheck_1920_;
goto v_resetjp_1906_;
}
v_resetjp_1906_:
{
lean_object* v___x_1909_; lean_object* v_cc_1910_; lean_object* v_x_1911_; lean_object* v_y_1912_; lean_object* v___x_1914_; 
v___x_1909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1909_, 0, v_cx_1903_);
lean_ctor_set(v___x_1909_, 1, v_cy_1904_);
v_cc_1910_ = lp_choreo_Choreo_Pt_mapT(v_t_1893_, v___x_1909_);
v_x_1911_ = lean_ctor_get(v_cc_1910_, 0);
lean_inc(v_x_1911_);
v_y_1912_ = lean_ctor_get(v_cc_1910_, 1);
lean_inc(v_y_1912_);
lean_dec_ref(v_cc_1910_);
if (v_isShared_1908_ == 0)
{
lean_ctor_set(v___x_1907_, 2, v_y_1912_);
lean_ctor_set(v___x_1907_, 1, v_x_1911_);
v___x_1914_ = v___x_1907_;
goto v_reusejp_1913_;
}
else
{
lean_object* v_reuseFailAlloc_1919_; 
v_reuseFailAlloc_1919_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_reuseFailAlloc_1919_, 0, v_i_1902_);
lean_ctor_set(v_reuseFailAlloc_1919_, 1, v_x_1911_);
lean_ctor_set(v_reuseFailAlloc_1919_, 2, v_y_1912_);
lean_ctor_set(v_reuseFailAlloc_1919_, 3, v_r2_1905_);
v___x_1914_ = v_reuseFailAlloc_1919_;
goto v_reusejp_1913_;
}
v_reusejp_1913_:
{
lean_object* v___x_1916_; 
if (v_isShared_1901_ == 0)
{
lean_ctor_set(v___x_1900_, 1, v_a_1895_);
lean_ctor_set(v___x_1900_, 0, v___x_1914_);
v___x_1916_ = v___x_1900_;
goto v_reusejp_1915_;
}
else
{
lean_object* v_reuseFailAlloc_1918_; 
v_reuseFailAlloc_1918_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1918_, 0, v___x_1914_);
lean_ctor_set(v_reuseFailAlloc_1918_, 1, v_a_1895_);
v___x_1916_ = v_reuseFailAlloc_1918_;
goto v_reusejp_1915_;
}
v_reusejp_1915_:
{
v_a_1894_ = v_tail_1898_;
v_a_1895_ = v___x_1916_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2___boxed(lean_object* v_t_1922_, lean_object* v_a_1923_, lean_object* v_a_1924_){
_start:
{
lean_object* v_res_1925_; 
v_res_1925_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2(v_t_1922_, v_a_1923_, v_a_1924_);
lean_dec_ref(v_t_1922_);
return v_res_1925_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT(lean_object* v_n_1926_, lean_object* v_gap_1927_, lean_object* v_t_1928_, lean_object* v_s_1929_, lean_object* v_x_1930_){
_start:
{
switch(lean_obj_tag(v_x_1930_))
{
case 0:
{
lean_object* v_target_1931_; lean_object* v_beats_1932_; lean_object* v___x_1934_; uint8_t v_isShared_1935_; uint8_t v_isSharedCheck_1945_; 
v_target_1931_ = lean_ctor_get(v_x_1930_, 0);
v_beats_1932_ = lean_ctor_get(v_x_1930_, 1);
v_isSharedCheck_1945_ = !lean_is_exclusive(v_x_1930_);
if (v_isSharedCheck_1945_ == 0)
{
lean_object* v_unused_1946_; 
v_unused_1946_ = lean_ctor_get(v_x_1930_, 2);
lean_dec(v_unused_1946_);
v___x_1934_ = v_x_1930_;
v_isShared_1935_ = v_isSharedCheck_1945_;
goto v_resetjp_1933_;
}
else
{
lean_inc(v_beats_1932_);
lean_inc(v_target_1931_);
lean_dec(v_x_1930_);
v___x_1934_ = lean_box(0);
v_isShared_1935_ = v_isSharedCheck_1945_;
goto v_resetjp_1933_;
}
v_resetjp_1933_:
{
lean_object* v___x_1936_; lean_object* v_tg_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1943_; 
v___x_1936_ = lean_box(0);
v_tg_1937_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1928_, v_target_1931_, v___x_1936_);
lean_inc(v_n_1926_);
v___x_1938_ = l_List_range(v_n_1926_);
v___x_1939_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_t_1928_, v_s_1929_, v_tg_1937_, v___x_1938_, v___x_1936_);
v___x_1940_ = lean_nat_to_int(v_gap_1927_);
v___x_1941_ = lp_choreo_Choreo_chooseCerts(v_n_1926_, v___x_1939_, v___x_1940_);
lean_dec(v___x_1940_);
lean_dec(v___x_1939_);
if (v_isShared_1935_ == 0)
{
lean_ctor_set(v___x_1934_, 2, v___x_1941_);
lean_ctor_set(v___x_1934_, 0, v_tg_1937_);
v___x_1943_ = v___x_1934_;
goto v_reusejp_1942_;
}
else
{
lean_object* v_reuseFailAlloc_1944_; 
v_reuseFailAlloc_1944_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_1944_, 0, v_tg_1937_);
lean_ctor_set(v_reuseFailAlloc_1944_, 1, v_beats_1932_);
lean_ctor_set(v_reuseFailAlloc_1944_, 2, v___x_1941_);
v___x_1943_ = v_reuseFailAlloc_1944_;
goto v_reusejp_1942_;
}
v_reusejp_1942_:
{
return v___x_1943_;
}
}
}
case 1:
{
lean_object* v_centre_1947_; uint8_t v_ccw_1948_; lean_object* v_beats_1949_; lean_object* v_orbits_1950_; lean_object* v___x_1952_; uint8_t v_isShared_1953_; uint8_t v_isSharedCheck_1970_; 
v_centre_1947_ = lean_ctor_get(v_x_1930_, 0);
v_ccw_1948_ = lean_ctor_get_uint8(v_x_1930_, sizeof(void*)*4);
v_beats_1949_ = lean_ctor_get(v_x_1930_, 1);
v_orbits_1950_ = lean_ctor_get(v_x_1930_, 3);
v_isSharedCheck_1970_ = !lean_is_exclusive(v_x_1930_);
if (v_isSharedCheck_1970_ == 0)
{
lean_object* v_unused_1971_; 
v_unused_1971_ = lean_ctor_get(v_x_1930_, 2);
lean_dec(v_unused_1971_);
v___x_1952_ = v_x_1930_;
v_isShared_1953_ = v_isSharedCheck_1970_;
goto v_resetjp_1951_;
}
else
{
lean_inc(v_orbits_1950_);
lean_inc(v_beats_1949_);
lean_inc(v_centre_1947_);
lean_dec(v_x_1930_);
v___x_1952_ = lean_box(0);
v_isShared_1953_ = v_isSharedCheck_1970_;
goto v_resetjp_1951_;
}
v_resetjp_1951_:
{
lean_object* v_c_x27_1954_; uint8_t v___y_1956_; lean_object* v___x_1967_; uint8_t v___x_1968_; 
v_c_x27_1954_ = lp_choreo_Choreo_Pt_mapT(v_t_1928_, v_centre_1947_);
v___x_1967_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1968_ = lean_string_dec_eq(v_t_1928_, v___x_1967_);
if (v___x_1968_ == 0)
{
v___y_1956_ = v_ccw_1948_;
goto v___jp_1955_;
}
else
{
if (v_ccw_1948_ == 0)
{
v___y_1956_ = v___x_1968_;
goto v___jp_1955_;
}
else
{
uint8_t v___x_1969_; 
v___x_1969_ = 0;
v___y_1956_ = v___x_1969_;
goto v___jp_1955_;
}
}
v___jp_1955_:
{
lean_object* v___x_1957_; lean_object* v_s_x27_1958_; lean_object* v___x_1959_; lean_object* v___x_1960_; lean_object* v___x_1961_; lean_object* v___x_1962_; lean_object* v___x_1963_; lean_object* v___x_1965_; 
v___x_1957_ = lean_box(0);
v_s_x27_1958_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1928_, v_s_1929_, v___x_1957_);
lean_inc(v_n_1926_);
v___x_1959_ = l_List_range(v_n_1926_);
v___x_1960_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__1(v_s_x27_1958_, v_c_x27_1954_, v___y_1956_, v___x_1959_, v___x_1957_);
lean_dec(v_s_x27_1958_);
v___x_1961_ = lean_nat_to_int(v_gap_1927_);
v___x_1962_ = lp_choreo_Choreo_chooseCerts(v_n_1926_, v___x_1960_, v___x_1961_);
lean_dec(v___x_1961_);
lean_dec(v___x_1960_);
v___x_1963_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__2(v_t_1928_, v_orbits_1950_, v___x_1957_);
if (v_isShared_1953_ == 0)
{
lean_ctor_set(v___x_1952_, 3, v___x_1963_);
lean_ctor_set(v___x_1952_, 2, v___x_1962_);
lean_ctor_set(v___x_1952_, 0, v_c_x27_1954_);
v___x_1965_ = v___x_1952_;
goto v_reusejp_1964_;
}
else
{
lean_object* v_reuseFailAlloc_1966_; 
v_reuseFailAlloc_1966_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_1966_, 0, v_c_x27_1954_);
lean_ctor_set(v_reuseFailAlloc_1966_, 1, v_beats_1949_);
lean_ctor_set(v_reuseFailAlloc_1966_, 2, v___x_1962_);
lean_ctor_set(v_reuseFailAlloc_1966_, 3, v___x_1963_);
v___x_1965_ = v_reuseFailAlloc_1966_;
goto v_reusejp_1964_;
}
v_reusejp_1964_:
{
lean_ctor_set_uint8(v___x_1965_, sizeof(void*)*4, v___y_1956_);
return v___x_1965_;
}
}
}
}
case 2:
{
lean_object* v_deltas_1972_; lean_object* v_beats_1973_; lean_object* v___x_1974_; uint8_t v___x_1975_; 
lean_dec(v_s_1929_);
lean_dec(v_gap_1927_);
lean_dec(v_n_1926_);
v_deltas_1972_ = lean_ctor_get(v_x_1930_, 0);
v_beats_1973_ = lean_ctor_get(v_x_1930_, 1);
v___x_1974_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_1975_ = lean_string_dec_eq(v_t_1928_, v___x_1974_);
if (v___x_1975_ == 0)
{
lean_object* v___x_1976_; uint8_t v___x_1977_; 
v___x_1976_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_1977_ = lean_string_dec_eq(v_t_1928_, v___x_1976_);
if (v___x_1977_ == 0)
{
return v_x_1930_;
}
else
{
lean_object* v___x_1979_; uint8_t v_isShared_1980_; uint8_t v_isSharedCheck_1986_; 
lean_inc(v_beats_1973_);
lean_inc(v_deltas_1972_);
v_isSharedCheck_1986_ = !lean_is_exclusive(v_x_1930_);
if (v_isSharedCheck_1986_ == 0)
{
lean_object* v_unused_1987_; lean_object* v_unused_1988_; 
v_unused_1987_ = lean_ctor_get(v_x_1930_, 1);
lean_dec(v_unused_1987_);
v_unused_1988_ = lean_ctor_get(v_x_1930_, 0);
lean_dec(v_unused_1988_);
v___x_1979_ = v_x_1930_;
v_isShared_1980_ = v_isSharedCheck_1986_;
goto v_resetjp_1978_;
}
else
{
lean_dec(v_x_1930_);
v___x_1979_ = lean_box(0);
v_isShared_1980_ = v_isSharedCheck_1986_;
goto v_resetjp_1978_;
}
v_resetjp_1978_:
{
lean_object* v___x_1981_; lean_object* v___x_1982_; lean_object* v___x_1984_; 
v___x_1981_ = lean_box(0);
v___x_1982_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__3(v_deltas_1972_, v___x_1981_);
if (v_isShared_1980_ == 0)
{
lean_ctor_set(v___x_1979_, 0, v___x_1982_);
v___x_1984_ = v___x_1979_;
goto v_reusejp_1983_;
}
else
{
lean_object* v_reuseFailAlloc_1985_; 
v_reuseFailAlloc_1985_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1985_, 0, v___x_1982_);
lean_ctor_set(v_reuseFailAlloc_1985_, 1, v_beats_1973_);
v___x_1984_ = v_reuseFailAlloc_1985_;
goto v_reusejp_1983_;
}
v_reusejp_1983_:
{
return v___x_1984_;
}
}
}
}
else
{
lean_object* v___x_1990_; uint8_t v_isShared_1991_; uint8_t v_isSharedCheck_1997_; 
lean_inc(v_beats_1973_);
lean_inc(v_deltas_1972_);
v_isSharedCheck_1997_ = !lean_is_exclusive(v_x_1930_);
if (v_isSharedCheck_1997_ == 0)
{
lean_object* v_unused_1998_; lean_object* v_unused_1999_; 
v_unused_1998_ = lean_ctor_get(v_x_1930_, 1);
lean_dec(v_unused_1998_);
v_unused_1999_ = lean_ctor_get(v_x_1930_, 0);
lean_dec(v_unused_1999_);
v___x_1990_ = v_x_1930_;
v_isShared_1991_ = v_isSharedCheck_1997_;
goto v_resetjp_1989_;
}
else
{
lean_dec(v_x_1930_);
v___x_1990_ = lean_box(0);
v_isShared_1991_ = v_isSharedCheck_1997_;
goto v_resetjp_1989_;
}
v_resetjp_1989_:
{
lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1995_; 
v___x_1992_ = lean_box(0);
v___x_1993_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__4(v_deltas_1972_, v___x_1992_);
if (v_isShared_1991_ == 0)
{
lean_ctor_set(v___x_1990_, 0, v___x_1993_);
v___x_1995_ = v___x_1990_;
goto v_reusejp_1994_;
}
else
{
lean_object* v_reuseFailAlloc_1996_; 
v_reuseFailAlloc_1996_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1996_, 0, v___x_1993_);
lean_ctor_set(v_reuseFailAlloc_1996_, 1, v_beats_1973_);
v___x_1995_ = v_reuseFailAlloc_1996_;
goto v_reusejp_1994_;
}
v_reusejp_1994_:
{
return v___x_1995_;
}
}
}
}
default: 
{
lean_object* v_left_2000_; lean_object* v_right_2001_; lean_object* v_line_2002_; lean_object* v_target_2003_; lean_object* v_beats_2004_; lean_object* v___x_2006_; uint8_t v_isShared_2007_; uint8_t v_isSharedCheck_2029_; 
v_left_2000_ = lean_ctor_get(v_x_1930_, 0);
v_right_2001_ = lean_ctor_get(v_x_1930_, 1);
v_line_2002_ = lean_ctor_get(v_x_1930_, 2);
v_target_2003_ = lean_ctor_get(v_x_1930_, 3);
v_beats_2004_ = lean_ctor_get(v_x_1930_, 4);
v_isSharedCheck_2029_ = !lean_is_exclusive(v_x_1930_);
if (v_isSharedCheck_2029_ == 0)
{
lean_object* v_unused_2030_; 
v_unused_2030_ = lean_ctor_get(v_x_1930_, 5);
lean_dec(v_unused_2030_);
v___x_2006_ = v_x_1930_;
v_isShared_2007_ = v_isSharedCheck_2029_;
goto v_resetjp_2005_;
}
else
{
lean_inc(v_beats_2004_);
lean_inc(v_target_2003_);
lean_inc(v_line_2002_);
lean_inc(v_right_2001_);
lean_inc(v_left_2000_);
lean_dec(v_x_1930_);
v___x_2006_ = lean_box(0);
v_isShared_2007_ = v_isSharedCheck_2029_;
goto v_resetjp_2005_;
}
v_resetjp_2005_:
{
lean_object* v___x_2008_; lean_object* v_tg_2009_; lean_object* v_fst_2011_; lean_object* v_fst_2012_; lean_object* v_snd_2013_; lean_object* v___x_2025_; uint8_t v___x_2026_; 
v___x_2008_ = lean_box(0);
v_tg_2009_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_1928_, v_target_2003_, v___x_2008_);
v___x_2025_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2026_ = lean_string_dec_eq(v_t_1928_, v___x_2025_);
if (v___x_2026_ == 0)
{
lean_object* v___x_2027_; uint8_t v___x_2028_; 
v___x_2027_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2028_ = lean_string_dec_eq(v_t_1928_, v___x_2027_);
if (v___x_2028_ == 0)
{
v_fst_2011_ = v_left_2000_;
v_fst_2012_ = v_right_2001_;
v_snd_2013_ = v_line_2002_;
goto v___jp_2010_;
}
else
{
goto v___jp_2021_;
}
}
else
{
goto v___jp_2021_;
}
v___jp_2010_:
{
lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2019_; 
lean_inc(v_n_1926_);
v___x_2014_ = l_List_range(v_n_1926_);
v___x_2015_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__0(v_t_1928_, v_s_1929_, v_tg_2009_, v___x_2014_, v___x_2008_);
v___x_2016_ = lean_nat_to_int(v_gap_1927_);
v___x_2017_ = lp_choreo_Choreo_chooseCerts(v_n_1926_, v___x_2015_, v___x_2016_);
lean_dec(v___x_2016_);
lean_dec(v___x_2015_);
if (v_isShared_2007_ == 0)
{
lean_ctor_set(v___x_2006_, 5, v___x_2017_);
lean_ctor_set(v___x_2006_, 3, v_tg_2009_);
lean_ctor_set(v___x_2006_, 2, v_snd_2013_);
lean_ctor_set(v___x_2006_, 1, v_fst_2012_);
lean_ctor_set(v___x_2006_, 0, v_fst_2011_);
v___x_2019_ = v___x_2006_;
goto v_reusejp_2018_;
}
else
{
lean_object* v_reuseFailAlloc_2020_; 
v_reuseFailAlloc_2020_ = lean_alloc_ctor(3, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2020_, 0, v_fst_2011_);
lean_ctor_set(v_reuseFailAlloc_2020_, 1, v_fst_2012_);
lean_ctor_set(v_reuseFailAlloc_2020_, 2, v_snd_2013_);
lean_ctor_set(v_reuseFailAlloc_2020_, 3, v_tg_2009_);
lean_ctor_set(v_reuseFailAlloc_2020_, 4, v_beats_2004_);
lean_ctor_set(v_reuseFailAlloc_2020_, 5, v___x_2017_);
v___x_2019_ = v_reuseFailAlloc_2020_;
goto v_reusejp_2018_;
}
v_reusejp_2018_:
{
return v___x_2019_;
}
}
v___jp_2021_:
{
lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; 
v___x_2022_ = lean_int_neg(v_line_2002_);
lean_dec(v_line_2002_);
lean_inc(v_gap_1927_);
v___x_2023_ = lean_nat_to_int(v_gap_1927_);
v___x_2024_ = lean_int_sub(v___x_2022_, v___x_2023_);
lean_dec(v___x_2023_);
lean_dec(v___x_2022_);
v_fst_2011_ = v_right_2001_;
v_fst_2012_ = v_left_2000_;
v_snd_2013_ = v___x_2024_;
goto v___jp_2010_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_mapT___boxed(lean_object* v_n_2031_, lean_object* v_gap_2032_, lean_object* v_t_2033_, lean_object* v_s_2034_, lean_object* v_x_2035_){
_start:
{
lean_object* v_res_2036_; 
v_res_2036_ = lp_choreo_Choreo_Op_mapT(v_n_2031_, v_gap_2032_, v_t_2033_, v_s_2034_, v_x_2035_);
lean_dec_ref(v_t_2033_);
return v_res_2036_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(lean_object* v_t_2037_, lean_object* v_sp_2038_, lean_object* v_a_2039_, lean_object* v_a_2040_){
_start:
{
if (lean_obj_tag(v_a_2039_) == 0)
{
lean_object* v___x_2041_; 
lean_dec_ref(v_sp_2038_);
v___x_2041_ = l_List_reverse___redArg(v_a_2040_);
return v___x_2041_;
}
else
{
lean_object* v_head_2042_; lean_object* v_step_2043_; lean_object* v_tail_2044_; lean_object* v___x_2046_; uint8_t v_isShared_2047_; uint8_t v_isSharedCheck_2088_; 
v_head_2042_ = lean_ctor_get(v_a_2039_, 0);
lean_inc(v_head_2042_);
v_step_2043_ = lean_ctor_get(v_head_2042_, 5);
lean_inc_ref(v_step_2043_);
v_tail_2044_ = lean_ctor_get(v_a_2039_, 1);
v_isSharedCheck_2088_ = !lean_is_exclusive(v_a_2039_);
if (v_isSharedCheck_2088_ == 0)
{
lean_object* v_unused_2089_; 
v_unused_2089_ = lean_ctor_get(v_a_2039_, 0);
lean_dec(v_unused_2089_);
v___x_2046_ = v_a_2039_;
v_isShared_2047_ = v_isSharedCheck_2088_;
goto v_resetjp_2045_;
}
else
{
lean_inc(v_tail_2044_);
lean_dec(v_a_2039_);
v___x_2046_ = lean_box(0);
v_isShared_2047_ = v_isSharedCheck_2088_;
goto v_resetjp_2045_;
}
v_resetjp_2045_:
{
lean_object* v_name_2048_; lean_object* v_sectionName_2049_; lean_object* v_surface_2050_; lean_object* v_kind_2051_; lean_object* v_label_2052_; lean_object* v_requiresText_2053_; lean_object* v_ensuresText_2054_; lean_object* v_before_2055_; lean_object* v_after_2056_; lean_object* v___x_2058_; uint8_t v_isShared_2059_; uint8_t v_isSharedCheck_2086_; 
v_name_2048_ = lean_ctor_get(v_head_2042_, 0);
v_sectionName_2049_ = lean_ctor_get(v_head_2042_, 1);
v_surface_2050_ = lean_ctor_get(v_head_2042_, 2);
v_kind_2051_ = lean_ctor_get(v_head_2042_, 3);
v_label_2052_ = lean_ctor_get(v_head_2042_, 4);
v_requiresText_2053_ = lean_ctor_get(v_head_2042_, 6);
v_ensuresText_2054_ = lean_ctor_get(v_head_2042_, 7);
v_before_2055_ = lean_ctor_get(v_head_2042_, 8);
v_after_2056_ = lean_ctor_get(v_head_2042_, 9);
v_isSharedCheck_2086_ = !lean_is_exclusive(v_head_2042_);
if (v_isSharedCheck_2086_ == 0)
{
lean_object* v_unused_2087_; 
v_unused_2087_ = lean_ctor_get(v_head_2042_, 5);
lean_dec(v_unused_2087_);
v___x_2058_ = v_head_2042_;
v_isShared_2059_ = v_isSharedCheck_2086_;
goto v_resetjp_2057_;
}
else
{
lean_inc(v_after_2056_);
lean_inc(v_before_2055_);
lean_inc(v_ensuresText_2054_);
lean_inc(v_requiresText_2053_);
lean_inc(v_label_2052_);
lean_inc(v_kind_2051_);
lean_inc(v_surface_2050_);
lean_inc(v_sectionName_2049_);
lean_inc(v_name_2048_);
lean_dec(v_head_2042_);
v___x_2058_ = lean_box(0);
v_isShared_2059_ = v_isSharedCheck_2086_;
goto v_resetjp_2057_;
}
v_resetjp_2057_:
{
lean_object* v_n_2060_; lean_object* v_gap_2061_; lean_object* v_op_2062_; lean_object* v_requires_2063_; lean_object* v_ensures_2064_; lean_object* v___x_2066_; uint8_t v_isShared_2067_; uint8_t v_isSharedCheck_2085_; 
v_n_2060_ = lean_ctor_get(v_sp_2038_, 1);
v_gap_2061_ = lean_ctor_get(v_sp_2038_, 3);
v_op_2062_ = lean_ctor_get(v_step_2043_, 0);
v_requires_2063_ = lean_ctor_get(v_step_2043_, 1);
v_ensures_2064_ = lean_ctor_get(v_step_2043_, 2);
v_isSharedCheck_2085_ = !lean_is_exclusive(v_step_2043_);
if (v_isSharedCheck_2085_ == 0)
{
v___x_2066_ = v_step_2043_;
v_isShared_2067_ = v_isSharedCheck_2085_;
goto v_resetjp_2065_;
}
else
{
lean_inc(v_ensures_2064_);
lean_inc(v_requires_2063_);
lean_inc(v_op_2062_);
lean_dec(v_step_2043_);
v___x_2066_ = lean_box(0);
v_isShared_2067_ = v_isSharedCheck_2085_;
goto v_resetjp_2065_;
}
v_resetjp_2065_:
{
lean_object* v___x_2068_; lean_object* v_before_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; lean_object* v___x_2072_; lean_object* v___x_2073_; lean_object* v___x_2075_; 
v___x_2068_ = lean_box(0);
lean_inc(v_before_2055_);
v_before_2069_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2037_, v_before_2055_, v___x_2068_);
v___x_2070_ = l_Int_toNat(v_gap_2061_);
lean_inc(v_n_2060_);
v___x_2071_ = lp_choreo_Choreo_Op_mapT(v_n_2060_, v___x_2070_, v_t_2037_, v_before_2055_, v_op_2062_);
v___x_2072_ = lp_choreo_Choreo_Pred_mapT(v_t_2037_, v_requires_2063_);
v___x_2073_ = lp_choreo_Choreo_Pred_mapT(v_t_2037_, v_ensures_2064_);
if (v_isShared_2067_ == 0)
{
lean_ctor_set(v___x_2066_, 2, v___x_2073_);
lean_ctor_set(v___x_2066_, 1, v___x_2072_);
lean_ctor_set(v___x_2066_, 0, v___x_2071_);
v___x_2075_ = v___x_2066_;
goto v_reusejp_2074_;
}
else
{
lean_object* v_reuseFailAlloc_2084_; 
v_reuseFailAlloc_2084_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2084_, 0, v___x_2071_);
lean_ctor_set(v_reuseFailAlloc_2084_, 1, v___x_2072_);
lean_ctor_set(v_reuseFailAlloc_2084_, 2, v___x_2073_);
v___x_2075_ = v_reuseFailAlloc_2084_;
goto v_reusejp_2074_;
}
v_reusejp_2074_:
{
lean_object* v___x_2076_; lean_object* v___x_2078_; 
v___x_2076_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_mapT_spec__0(v_t_2037_, v_after_2056_, v___x_2068_);
if (v_isShared_2059_ == 0)
{
lean_ctor_set(v___x_2058_, 9, v___x_2076_);
lean_ctor_set(v___x_2058_, 8, v_before_2069_);
lean_ctor_set(v___x_2058_, 5, v___x_2075_);
v___x_2078_ = v___x_2058_;
goto v_reusejp_2077_;
}
else
{
lean_object* v_reuseFailAlloc_2083_; 
v_reuseFailAlloc_2083_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v_reuseFailAlloc_2083_, 0, v_name_2048_);
lean_ctor_set(v_reuseFailAlloc_2083_, 1, v_sectionName_2049_);
lean_ctor_set(v_reuseFailAlloc_2083_, 2, v_surface_2050_);
lean_ctor_set(v_reuseFailAlloc_2083_, 3, v_kind_2051_);
lean_ctor_set(v_reuseFailAlloc_2083_, 4, v_label_2052_);
lean_ctor_set(v_reuseFailAlloc_2083_, 5, v___x_2075_);
lean_ctor_set(v_reuseFailAlloc_2083_, 6, v_requiresText_2053_);
lean_ctor_set(v_reuseFailAlloc_2083_, 7, v_ensuresText_2054_);
lean_ctor_set(v_reuseFailAlloc_2083_, 8, v_before_2069_);
lean_ctor_set(v_reuseFailAlloc_2083_, 9, v___x_2076_);
v___x_2078_ = v_reuseFailAlloc_2083_;
goto v_reusejp_2077_;
}
v_reusejp_2077_:
{
lean_object* v___x_2080_; 
if (v_isShared_2047_ == 0)
{
lean_ctor_set(v___x_2046_, 1, v_a_2040_);
lean_ctor_set(v___x_2046_, 0, v___x_2078_);
v___x_2080_ = v___x_2046_;
goto v_reusejp_2079_;
}
else
{
lean_object* v_reuseFailAlloc_2082_; 
v_reuseFailAlloc_2082_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2082_, 0, v___x_2078_);
lean_ctor_set(v_reuseFailAlloc_2082_, 1, v_a_2040_);
v___x_2080_ = v_reuseFailAlloc_2082_;
goto v_reusejp_2079_;
}
v_reusejp_2079_:
{
v_a_2039_ = v_tail_2044_;
v_a_2040_ = v___x_2080_;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0___boxed(lean_object* v_t_2090_, lean_object* v_sp_2091_, lean_object* v_a_2092_, lean_object* v_a_2093_){
_start:
{
lean_object* v_res_2094_; 
v_res_2094_ = lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(v_t_2090_, v_sp_2091_, v_a_2092_, v_a_2093_);
lean_dec_ref(v_t_2090_);
return v_res_2094_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform(lean_object* v_sp_2095_, lean_object* v_t_2096_, lean_object* v_steps_2097_){
_start:
{
lean_object* v___x_2101_; uint8_t v___x_2102_; 
v___x_2101_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__11));
v___x_2102_ = lean_string_dec_eq(v_t_2096_, v___x_2101_);
if (v___x_2102_ == 0)
{
lean_object* v___x_2103_; uint8_t v___x_2104_; 
v___x_2103_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__0));
v___x_2104_ = lean_string_dec_eq(v_t_2096_, v___x_2103_);
if (v___x_2104_ == 0)
{
lean_object* v___x_2105_; uint8_t v___x_2106_; 
v___x_2105_ = ((lean_object*)(lp_choreo_Choreo_Pt_mapT___closed__1));
v___x_2106_ = lean_string_dec_eq(v_t_2096_, v___x_2105_);
if (v___x_2106_ == 0)
{
lean_dec_ref(v_sp_2095_);
return v_steps_2097_;
}
else
{
goto v___jp_2098_;
}
}
else
{
goto v___jp_2098_;
}
}
else
{
goto v___jp_2098_;
}
v___jp_2098_:
{
lean_object* v___x_2099_; lean_object* v___x_2100_; 
v___x_2099_ = lean_box(0);
v___x_2100_ = lp_choreo_List_mapTR_loop___at___00Choreo_applyTransform_spec__0(v_t_2096_, v_sp_2095_, v_steps_2097_, v___x_2099_);
return v___x_2100_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_applyTransform___boxed(lean_object* v_sp_2107_, lean_object* v_t_2108_, lean_object* v_steps_2109_){
_start:
{
lean_object* v_res_2110_; 
v_res_2110_ = lp_choreo_Choreo_applyTransform(v_sp_2107_, v_t_2108_, v_steps_2109_);
lean_dec_ref(v_t_2108_);
return v_res_2110_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(lean_object* v_c_2111_, lean_object* v___x_2112_, lean_object* v_a_2113_, lean_object* v_a_2114_){
_start:
{
if (lean_obj_tag(v_a_2113_) == 0)
{
lean_object* v___x_2115_; 
v___x_2115_ = l_List_reverse___redArg(v_a_2114_);
return v___x_2115_;
}
else
{
lean_object* v_head_2116_; lean_object* v_tail_2117_; lean_object* v___x_2119_; uint8_t v_isShared_2120_; uint8_t v_isSharedCheck_2129_; 
v_head_2116_ = lean_ctor_get(v_a_2113_, 0);
v_tail_2117_ = lean_ctor_get(v_a_2113_, 1);
v_isSharedCheck_2129_ = !lean_is_exclusive(v_a_2113_);
if (v_isSharedCheck_2129_ == 0)
{
v___x_2119_ = v_a_2113_;
v_isShared_2120_ = v_isSharedCheck_2129_;
goto v_resetjp_2118_;
}
else
{
lean_inc(v_tail_2117_);
lean_inc(v_head_2116_);
lean_dec(v_a_2113_);
v___x_2119_ = lean_box(0);
v_isShared_2120_ = v_isSharedCheck_2129_;
goto v_resetjp_2118_;
}
v_resetjp_2118_:
{
lean_object* v_after_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2126_; 
v_after_2121_ = lean_ctor_get(v_c_2111_, 9);
lean_inc(v_head_2116_);
v___x_2122_ = lp_choreo_Choreo_State_at(v_after_2121_, v_head_2116_);
v___x_2123_ = lp_choreo_Choreo_State_at(v___x_2112_, v_head_2116_);
v___x_2124_ = lp_choreo_Choreo_easePath(v___x_2122_, v___x_2123_);
if (v_isShared_2120_ == 0)
{
lean_ctor_set(v___x_2119_, 1, v_a_2114_);
lean_ctor_set(v___x_2119_, 0, v___x_2124_);
v___x_2126_ = v___x_2119_;
goto v_reusejp_2125_;
}
else
{
lean_object* v_reuseFailAlloc_2128_; 
v_reuseFailAlloc_2128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2128_, 0, v___x_2124_);
lean_ctor_set(v_reuseFailAlloc_2128_, 1, v_a_2114_);
v___x_2126_ = v_reuseFailAlloc_2128_;
goto v_reusejp_2125_;
}
v_reusejp_2125_:
{
v_a_2113_ = v_tail_2117_;
v_a_2114_ = v___x_2126_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0___boxed(lean_object* v_c_2130_, lean_object* v___x_2131_, lean_object* v_a_2132_, lean_object* v_a_2133_){
_start:
{
lean_object* v_res_2134_; 
v_res_2134_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(v_c_2130_, v___x_2131_, v_a_2132_, v_a_2133_);
lean_dec(v___x_2131_);
lean_dec_ref(v_c_2130_);
return v_res_2134_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1(lean_object* v_c_2135_, lean_object* v_centre_2136_, uint8_t v___y_2137_, lean_object* v_a_2138_, lean_object* v_a_2139_){
_start:
{
if (lean_obj_tag(v_a_2138_) == 0)
{
lean_object* v___x_2140_; 
v___x_2140_ = l_List_reverse___redArg(v_a_2139_);
return v___x_2140_;
}
else
{
lean_object* v_head_2141_; lean_object* v_tail_2142_; lean_object* v___x_2144_; uint8_t v_isShared_2145_; uint8_t v_isSharedCheck_2153_; 
v_head_2141_ = lean_ctor_get(v_a_2138_, 0);
v_tail_2142_ = lean_ctor_get(v_a_2138_, 1);
v_isSharedCheck_2153_ = !lean_is_exclusive(v_a_2138_);
if (v_isSharedCheck_2153_ == 0)
{
v___x_2144_ = v_a_2138_;
v_isShared_2145_ = v_isSharedCheck_2153_;
goto v_resetjp_2143_;
}
else
{
lean_inc(v_tail_2142_);
lean_inc(v_head_2141_);
lean_dec(v_a_2138_);
v___x_2144_ = lean_box(0);
v_isShared_2145_ = v_isSharedCheck_2153_;
goto v_resetjp_2143_;
}
v_resetjp_2143_:
{
lean_object* v_after_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; lean_object* v___x_2150_; 
v_after_2146_ = lean_ctor_get(v_c_2135_, 9);
v___x_2147_ = lp_choreo_Choreo_State_at(v_after_2146_, v_head_2141_);
v___x_2148_ = lp_choreo_Choreo_rotatePath(v_centre_2136_, v___x_2147_, v___y_2137_);
lean_dec_ref(v___x_2147_);
if (v_isShared_2145_ == 0)
{
lean_ctor_set(v___x_2144_, 1, v_a_2139_);
lean_ctor_set(v___x_2144_, 0, v___x_2148_);
v___x_2150_ = v___x_2144_;
goto v_reusejp_2149_;
}
else
{
lean_object* v_reuseFailAlloc_2152_; 
v_reuseFailAlloc_2152_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2152_, 0, v___x_2148_);
lean_ctor_set(v_reuseFailAlloc_2152_, 1, v_a_2139_);
v___x_2150_ = v_reuseFailAlloc_2152_;
goto v_reusejp_2149_;
}
v_reusejp_2149_:
{
v_a_2138_ = v_tail_2142_;
v_a_2139_ = v___x_2150_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1___boxed(lean_object* v_c_2154_, lean_object* v_centre_2155_, lean_object* v___y_2156_, lean_object* v_a_2157_, lean_object* v_a_2158_){
_start:
{
uint8_t v___y_475__boxed_2159_; lean_object* v_res_2160_; 
v___y_475__boxed_2159_ = lean_unbox(v___y_2156_);
v_res_2160_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1(v_c_2154_, v_centre_2155_, v___y_475__boxed_2159_, v_a_2157_, v_a_2158_);
lean_dec_ref(v_centre_2155_);
lean_dec_ref(v_c_2154_);
return v_res_2160_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2(lean_object* v_sp_2162_, lean_object* v_a_2163_, lean_object* v_a_2164_){
_start:
{
if (lean_obj_tag(v_a_2163_) == 0)
{
lean_object* v___x_2165_; 
lean_dec_ref(v_sp_2162_);
v___x_2165_ = l_List_reverse___redArg(v_a_2164_);
return v___x_2165_;
}
else
{
lean_object* v_head_2166_; lean_object* v_step_2167_; lean_object* v_tail_2168_; lean_object* v___x_2170_; uint8_t v_isShared_2171_; uint8_t v_isSharedCheck_2268_; 
v_head_2166_ = lean_ctor_get(v_a_2163_, 0);
lean_inc(v_head_2166_);
v_step_2167_ = lean_ctor_get(v_head_2166_, 5);
lean_inc_ref(v_step_2167_);
v_tail_2168_ = lean_ctor_get(v_a_2163_, 1);
v_isSharedCheck_2268_ = !lean_is_exclusive(v_a_2163_);
if (v_isSharedCheck_2268_ == 0)
{
lean_object* v_unused_2269_; 
v_unused_2269_ = lean_ctor_get(v_a_2163_, 0);
lean_dec(v_unused_2269_);
v___x_2170_ = v_a_2163_;
v_isShared_2171_ = v_isSharedCheck_2268_;
goto v_resetjp_2169_;
}
else
{
lean_inc(v_tail_2168_);
lean_dec(v_a_2163_);
v___x_2170_ = lean_box(0);
v_isShared_2171_ = v_isSharedCheck_2268_;
goto v_resetjp_2169_;
}
v_resetjp_2169_:
{
lean_object* v_name_2172_; lean_object* v_sectionName_2173_; lean_object* v_surface_2174_; lean_object* v_kind_2175_; lean_object* v_label_2176_; lean_object* v_requiresText_2177_; lean_object* v_ensuresText_2178_; lean_object* v_before_2179_; lean_object* v_after_2180_; lean_object* v_op_2181_; lean_object* v_requires_2182_; lean_object* v_ensures_2183_; lean_object* v___x_2185_; uint8_t v_isShared_2186_; uint8_t v_isSharedCheck_2267_; 
v_name_2172_ = lean_ctor_get(v_head_2166_, 0);
lean_inc_ref(v_name_2172_);
v_sectionName_2173_ = lean_ctor_get(v_head_2166_, 1);
lean_inc_ref(v_sectionName_2173_);
v_surface_2174_ = lean_ctor_get(v_head_2166_, 2);
lean_inc(v_surface_2174_);
v_kind_2175_ = lean_ctor_get(v_head_2166_, 3);
lean_inc_ref(v_kind_2175_);
v_label_2176_ = lean_ctor_get(v_head_2166_, 4);
lean_inc_ref(v_label_2176_);
v_requiresText_2177_ = lean_ctor_get(v_head_2166_, 6);
lean_inc_ref(v_requiresText_2177_);
v_ensuresText_2178_ = lean_ctor_get(v_head_2166_, 7);
lean_inc_ref(v_ensuresText_2178_);
v_before_2179_ = lean_ctor_get(v_head_2166_, 8);
lean_inc(v_before_2179_);
v_after_2180_ = lean_ctor_get(v_head_2166_, 9);
lean_inc(v_after_2180_);
v_op_2181_ = lean_ctor_get(v_step_2167_, 0);
v_requires_2182_ = lean_ctor_get(v_step_2167_, 1);
v_ensures_2183_ = lean_ctor_get(v_step_2167_, 2);
v_isSharedCheck_2267_ = !lean_is_exclusive(v_step_2167_);
if (v_isSharedCheck_2267_ == 0)
{
v___x_2185_ = v_step_2167_;
v_isShared_2186_ = v_isSharedCheck_2267_;
goto v_resetjp_2184_;
}
else
{
lean_inc(v_ensures_2183_);
lean_inc(v_requires_2182_);
lean_inc(v_op_2181_);
lean_dec(v_step_2167_);
v___x_2185_ = lean_box(0);
v_isShared_2186_ = v_isSharedCheck_2267_;
goto v_resetjp_2184_;
}
v_resetjp_2184_:
{
lean_object* v___y_2188_; 
switch(lean_obj_tag(v_op_2181_))
{
case 0:
{
lean_object* v_beats_2199_; lean_object* v___x_2201_; uint8_t v_isShared_2202_; uint8_t v_isSharedCheck_2212_; 
v_beats_2199_ = lean_ctor_get(v_op_2181_, 1);
v_isSharedCheck_2212_ = !lean_is_exclusive(v_op_2181_);
if (v_isSharedCheck_2212_ == 0)
{
lean_object* v_unused_2213_; lean_object* v_unused_2214_; 
v_unused_2213_ = lean_ctor_get(v_op_2181_, 2);
lean_dec(v_unused_2213_);
v_unused_2214_ = lean_ctor_get(v_op_2181_, 0);
lean_dec(v_unused_2214_);
v___x_2201_ = v_op_2181_;
v_isShared_2202_ = v_isSharedCheck_2212_;
goto v_resetjp_2200_;
}
else
{
lean_inc(v_beats_2199_);
lean_dec(v_op_2181_);
v___x_2201_ = lean_box(0);
v_isShared_2202_ = v_isSharedCheck_2212_;
goto v_resetjp_2200_;
}
v_resetjp_2200_:
{
lean_object* v_n_2203_; lean_object* v_gap_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2210_; 
v_n_2203_ = lean_ctor_get(v_sp_2162_, 1);
v_gap_2204_ = lean_ctor_get(v_sp_2162_, 3);
lean_inc_n(v_n_2203_, 2);
v___x_2205_ = l_List_range(v_n_2203_);
v___x_2206_ = lean_box(0);
v___x_2207_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(v_head_2166_, v_before_2179_, v___x_2205_, v___x_2206_);
lean_dec(v_head_2166_);
v___x_2208_ = lp_choreo_Choreo_chooseCerts(v_n_2203_, v___x_2207_, v_gap_2204_);
lean_dec(v___x_2207_);
lean_inc(v_before_2179_);
if (v_isShared_2202_ == 0)
{
lean_ctor_set(v___x_2201_, 2, v___x_2208_);
lean_ctor_set(v___x_2201_, 0, v_before_2179_);
v___x_2210_ = v___x_2201_;
goto v_reusejp_2209_;
}
else
{
lean_object* v_reuseFailAlloc_2211_; 
v_reuseFailAlloc_2211_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2211_, 0, v_before_2179_);
lean_ctor_set(v_reuseFailAlloc_2211_, 1, v_beats_2199_);
lean_ctor_set(v_reuseFailAlloc_2211_, 2, v___x_2208_);
v___x_2210_ = v_reuseFailAlloc_2211_;
goto v_reusejp_2209_;
}
v_reusejp_2209_:
{
v___y_2188_ = v___x_2210_;
goto v___jp_2187_;
}
}
}
case 1:
{
lean_object* v_centre_2215_; uint8_t v_ccw_2216_; lean_object* v_beats_2217_; lean_object* v_orbits_2218_; lean_object* v___x_2220_; uint8_t v_isShared_2221_; uint8_t v_isSharedCheck_2235_; 
v_centre_2215_ = lean_ctor_get(v_op_2181_, 0);
v_ccw_2216_ = lean_ctor_get_uint8(v_op_2181_, sizeof(void*)*4);
v_beats_2217_ = lean_ctor_get(v_op_2181_, 1);
v_orbits_2218_ = lean_ctor_get(v_op_2181_, 3);
v_isSharedCheck_2235_ = !lean_is_exclusive(v_op_2181_);
if (v_isSharedCheck_2235_ == 0)
{
lean_object* v_unused_2236_; 
v_unused_2236_ = lean_ctor_get(v_op_2181_, 2);
lean_dec(v_unused_2236_);
v___x_2220_ = v_op_2181_;
v_isShared_2221_ = v_isSharedCheck_2235_;
goto v_resetjp_2219_;
}
else
{
lean_inc(v_orbits_2218_);
lean_inc(v_beats_2217_);
lean_inc(v_centre_2215_);
lean_dec(v_op_2181_);
v___x_2220_ = lean_box(0);
v_isShared_2221_ = v_isSharedCheck_2235_;
goto v_resetjp_2219_;
}
v_resetjp_2219_:
{
uint8_t v___y_2223_; 
if (v_ccw_2216_ == 0)
{
uint8_t v___x_2233_; 
v___x_2233_ = 1;
v___y_2223_ = v___x_2233_;
goto v___jp_2222_;
}
else
{
uint8_t v___x_2234_; 
v___x_2234_ = 0;
v___y_2223_ = v___x_2234_;
goto v___jp_2222_;
}
v___jp_2222_:
{
lean_object* v_n_2224_; lean_object* v_gap_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2231_; 
v_n_2224_ = lean_ctor_get(v_sp_2162_, 1);
v_gap_2225_ = lean_ctor_get(v_sp_2162_, 3);
lean_inc_n(v_n_2224_, 2);
v___x_2226_ = l_List_range(v_n_2224_);
v___x_2227_ = lean_box(0);
v___x_2228_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__1(v_head_2166_, v_centre_2215_, v___y_2223_, v___x_2226_, v___x_2227_);
lean_dec(v_head_2166_);
v___x_2229_ = lp_choreo_Choreo_chooseCerts(v_n_2224_, v___x_2228_, v_gap_2225_);
lean_dec(v___x_2228_);
if (v_isShared_2221_ == 0)
{
lean_ctor_set(v___x_2220_, 2, v___x_2229_);
v___x_2231_ = v___x_2220_;
goto v_reusejp_2230_;
}
else
{
lean_object* v_reuseFailAlloc_2232_; 
v_reuseFailAlloc_2232_ = lean_alloc_ctor(1, 4, 1);
lean_ctor_set(v_reuseFailAlloc_2232_, 0, v_centre_2215_);
lean_ctor_set(v_reuseFailAlloc_2232_, 1, v_beats_2217_);
lean_ctor_set(v_reuseFailAlloc_2232_, 2, v___x_2229_);
lean_ctor_set(v_reuseFailAlloc_2232_, 3, v_orbits_2218_);
v___x_2231_ = v_reuseFailAlloc_2232_;
goto v_reusejp_2230_;
}
v_reusejp_2230_:
{
lean_ctor_set_uint8(v___x_2231_, sizeof(void*)*4, v___y_2223_);
v___y_2188_ = v___x_2231_;
goto v___jp_2187_;
}
}
}
}
case 2:
{
lean_object* v_deltas_2237_; lean_object* v_beats_2238_; lean_object* v___x_2240_; uint8_t v_isShared_2241_; uint8_t v_isSharedCheck_2247_; 
lean_dec(v_head_2166_);
v_deltas_2237_ = lean_ctor_get(v_op_2181_, 0);
v_beats_2238_ = lean_ctor_get(v_op_2181_, 1);
v_isSharedCheck_2247_ = !lean_is_exclusive(v_op_2181_);
if (v_isSharedCheck_2247_ == 0)
{
v___x_2240_ = v_op_2181_;
v_isShared_2241_ = v_isSharedCheck_2247_;
goto v_resetjp_2239_;
}
else
{
lean_inc(v_beats_2238_);
lean_inc(v_deltas_2237_);
lean_dec(v_op_2181_);
v___x_2240_ = lean_box(0);
v_isShared_2241_ = v_isSharedCheck_2247_;
goto v_resetjp_2239_;
}
v_resetjp_2239_:
{
lean_object* v___x_2242_; lean_object* v___x_2243_; lean_object* v___x_2245_; 
v___x_2242_ = lean_box(0);
v___x_2243_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_mapT_spec__3(v_deltas_2237_, v___x_2242_);
if (v_isShared_2241_ == 0)
{
lean_ctor_set(v___x_2240_, 0, v___x_2243_);
v___x_2245_ = v___x_2240_;
goto v_reusejp_2244_;
}
else
{
lean_object* v_reuseFailAlloc_2246_; 
v_reuseFailAlloc_2246_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2246_, 0, v___x_2243_);
lean_ctor_set(v_reuseFailAlloc_2246_, 1, v_beats_2238_);
v___x_2245_ = v_reuseFailAlloc_2246_;
goto v_reusejp_2244_;
}
v_reusejp_2244_:
{
v___y_2188_ = v___x_2245_;
goto v___jp_2187_;
}
}
}
default: 
{
lean_object* v_left_2248_; lean_object* v_right_2249_; lean_object* v_line_2250_; lean_object* v_beats_2251_; lean_object* v___x_2253_; uint8_t v_isShared_2254_; uint8_t v_isSharedCheck_2264_; 
v_left_2248_ = lean_ctor_get(v_op_2181_, 0);
v_right_2249_ = lean_ctor_get(v_op_2181_, 1);
v_line_2250_ = lean_ctor_get(v_op_2181_, 2);
v_beats_2251_ = lean_ctor_get(v_op_2181_, 4);
v_isSharedCheck_2264_ = !lean_is_exclusive(v_op_2181_);
if (v_isSharedCheck_2264_ == 0)
{
lean_object* v_unused_2265_; lean_object* v_unused_2266_; 
v_unused_2265_ = lean_ctor_get(v_op_2181_, 5);
lean_dec(v_unused_2265_);
v_unused_2266_ = lean_ctor_get(v_op_2181_, 3);
lean_dec(v_unused_2266_);
v___x_2253_ = v_op_2181_;
v_isShared_2254_ = v_isSharedCheck_2264_;
goto v_resetjp_2252_;
}
else
{
lean_inc(v_beats_2251_);
lean_inc(v_line_2250_);
lean_inc(v_right_2249_);
lean_inc(v_left_2248_);
lean_dec(v_op_2181_);
v___x_2253_ = lean_box(0);
v_isShared_2254_ = v_isSharedCheck_2264_;
goto v_resetjp_2252_;
}
v_resetjp_2252_:
{
lean_object* v_n_2255_; lean_object* v_gap_2256_; lean_object* v___x_2257_; lean_object* v___x_2258_; lean_object* v___x_2259_; lean_object* v___x_2260_; lean_object* v___x_2262_; 
v_n_2255_ = lean_ctor_get(v_sp_2162_, 1);
v_gap_2256_ = lean_ctor_get(v_sp_2162_, 3);
lean_inc_n(v_n_2255_, 2);
v___x_2257_ = l_List_range(v_n_2255_);
v___x_2258_ = lean_box(0);
v___x_2259_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__0(v_head_2166_, v_before_2179_, v___x_2257_, v___x_2258_);
lean_dec(v_head_2166_);
v___x_2260_ = lp_choreo_Choreo_chooseCerts(v_n_2255_, v___x_2259_, v_gap_2256_);
lean_dec(v___x_2259_);
lean_inc(v_before_2179_);
if (v_isShared_2254_ == 0)
{
lean_ctor_set(v___x_2253_, 5, v___x_2260_);
lean_ctor_set(v___x_2253_, 3, v_before_2179_);
v___x_2262_ = v___x_2253_;
goto v_reusejp_2261_;
}
else
{
lean_object* v_reuseFailAlloc_2263_; 
v_reuseFailAlloc_2263_ = lean_alloc_ctor(3, 6, 0);
lean_ctor_set(v_reuseFailAlloc_2263_, 0, v_left_2248_);
lean_ctor_set(v_reuseFailAlloc_2263_, 1, v_right_2249_);
lean_ctor_set(v_reuseFailAlloc_2263_, 2, v_line_2250_);
lean_ctor_set(v_reuseFailAlloc_2263_, 3, v_before_2179_);
lean_ctor_set(v_reuseFailAlloc_2263_, 4, v_beats_2251_);
lean_ctor_set(v_reuseFailAlloc_2263_, 5, v___x_2260_);
v___x_2262_ = v_reuseFailAlloc_2263_;
goto v_reusejp_2261_;
}
v_reusejp_2261_:
{
v___y_2188_ = v___x_2262_;
goto v___jp_2187_;
}
}
}
}
v___jp_2187_:
{
lean_object* v___x_2189_; lean_object* v___x_2190_; lean_object* v___x_2192_; 
v___x_2189_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2___closed__0));
v___x_2190_ = lean_string_append(v_name_2172_, v___x_2189_);
if (v_isShared_2186_ == 0)
{
lean_ctor_set(v___x_2185_, 2, v_requires_2182_);
lean_ctor_set(v___x_2185_, 1, v_ensures_2183_);
lean_ctor_set(v___x_2185_, 0, v___y_2188_);
v___x_2192_ = v___x_2185_;
goto v_reusejp_2191_;
}
else
{
lean_object* v_reuseFailAlloc_2198_; 
v_reuseFailAlloc_2198_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_2198_, 0, v___y_2188_);
lean_ctor_set(v_reuseFailAlloc_2198_, 1, v_ensures_2183_);
lean_ctor_set(v_reuseFailAlloc_2198_, 2, v_requires_2182_);
v___x_2192_ = v_reuseFailAlloc_2198_;
goto v_reusejp_2191_;
}
v_reusejp_2191_:
{
lean_object* v___x_2193_; lean_object* v___x_2195_; 
v___x_2193_ = lean_alloc_ctor(0, 10, 0);
lean_ctor_set(v___x_2193_, 0, v___x_2190_);
lean_ctor_set(v___x_2193_, 1, v_sectionName_2173_);
lean_ctor_set(v___x_2193_, 2, v_surface_2174_);
lean_ctor_set(v___x_2193_, 3, v_kind_2175_);
lean_ctor_set(v___x_2193_, 4, v_label_2176_);
lean_ctor_set(v___x_2193_, 5, v___x_2192_);
lean_ctor_set(v___x_2193_, 6, v_requiresText_2177_);
lean_ctor_set(v___x_2193_, 7, v_ensuresText_2178_);
lean_ctor_set(v___x_2193_, 8, v_after_2180_);
lean_ctor_set(v___x_2193_, 9, v_before_2179_);
if (v_isShared_2171_ == 0)
{
lean_ctor_set(v___x_2170_, 1, v_a_2164_);
lean_ctor_set(v___x_2170_, 0, v___x_2193_);
v___x_2195_ = v___x_2170_;
goto v_reusejp_2194_;
}
else
{
lean_object* v_reuseFailAlloc_2197_; 
v_reuseFailAlloc_2197_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2197_, 0, v___x_2193_);
lean_ctor_set(v_reuseFailAlloc_2197_, 1, v_a_2164_);
v___x_2195_ = v_reuseFailAlloc_2197_;
goto v_reusejp_2194_;
}
v_reusejp_2194_:
{
v_a_2163_ = v_tail_2168_;
v_a_2164_ = v___x_2195_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_reverseSteps(lean_object* v_sp_2270_, lean_object* v_steps_2271_){
_start:
{
lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; 
v___x_2272_ = l_List_reverse___redArg(v_steps_2271_);
v___x_2273_ = lean_box(0);
v___x_2274_ = lp_choreo_List_mapTR_loop___at___00Choreo_reverseSteps_spec__2(v_sp_2270_, v___x_2272_, v___x_2273_);
return v___x_2274_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(lean_object* v_s_2275_, lean_object* v_x_2276_, lean_object* v_d_2277_, lean_object* v_x_2278_){
_start:
{
if (lean_obj_tag(v_x_2278_) == 0)
{
lean_object* v___x_2279_; 
lean_dec(v_x_2276_);
v___x_2279_ = lean_box(0);
return v___x_2279_;
}
else
{
lean_object* v_head_2280_; lean_object* v_tail_2281_; lean_object* v___x_2282_; lean_object* v_y_2283_; lean_object* v___x_2284_; lean_object* v_y_2285_; lean_object* v___x_2286_; uint8_t v___x_2287_; 
v_head_2280_ = lean_ctor_get(v_x_2278_, 0);
lean_inc_n(v_head_2280_, 2);
v_tail_2281_ = lean_ctor_get(v_x_2278_, 1);
lean_inc(v_tail_2281_);
lean_dec_ref_known(v_x_2278_, 2);
lean_inc(v_x_2276_);
v___x_2282_ = lp_choreo_Choreo_State_at(v_s_2275_, v_x_2276_);
v_y_2283_ = lean_ctor_get(v___x_2282_, 1);
lean_inc(v_y_2283_);
lean_dec_ref(v___x_2282_);
v___x_2284_ = lp_choreo_Choreo_State_at(v_s_2275_, v_head_2280_);
v_y_2285_ = lean_ctor_get(v___x_2284_, 1);
lean_inc(v_y_2285_);
lean_dec_ref(v___x_2284_);
v___x_2286_ = lean_int_sub(v_y_2283_, v_y_2285_);
v___x_2287_ = lean_int_dec_le(v_d_2277_, v___x_2286_);
lean_dec(v___x_2286_);
if (v___x_2287_ == 0)
{
lean_object* v___x_2288_; uint8_t v___x_2289_; 
v___x_2288_ = lean_int_sub(v_y_2285_, v_y_2283_);
lean_dec(v_y_2283_);
lean_dec(v_y_2285_);
v___x_2289_ = lean_int_dec_le(v_d_2277_, v___x_2288_);
lean_dec(v___x_2288_);
if (v___x_2289_ == 0)
{
lean_object* v___x_2290_; 
lean_dec(v_tail_2281_);
lean_dec(v_x_2276_);
v___x_2290_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2290_, 0, v_head_2280_);
return v___x_2290_;
}
else
{
lean_dec(v_head_2280_);
v_x_2278_ = v_tail_2281_;
goto _start;
}
}
else
{
lean_dec(v_y_2285_);
lean_dec(v_y_2283_);
lean_dec(v_head_2280_);
v_x_2278_ = v_tail_2281_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1___boxed(lean_object* v_s_2293_, lean_object* v_x_2294_, lean_object* v_d_2295_, lean_object* v_x_2296_){
_start:
{
lean_object* v_res_2297_; 
v_res_2297_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(v_s_2293_, v_x_2294_, v_d_2295_, v_x_2296_);
lean_dec(v_d_2295_);
lean_dec(v_s_2293_);
return v_res_2297_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(lean_object* v_s_2298_, lean_object* v_d_2299_, lean_object* v_B_2300_, lean_object* v_x_2301_){
_start:
{
if (lean_obj_tag(v_x_2301_) == 0)
{
lean_object* v___x_2302_; 
lean_dec(v_B_2300_);
v___x_2302_ = lean_box(0);
return v___x_2302_;
}
else
{
lean_object* v_head_2303_; lean_object* v_tail_2304_; lean_object* v___x_2306_; uint8_t v_isShared_2307_; uint8_t v_isSharedCheck_2321_; 
v_head_2303_ = lean_ctor_get(v_x_2301_, 0);
v_tail_2304_ = lean_ctor_get(v_x_2301_, 1);
v_isSharedCheck_2321_ = !lean_is_exclusive(v_x_2301_);
if (v_isSharedCheck_2321_ == 0)
{
v___x_2306_ = v_x_2301_;
v_isShared_2307_ = v_isSharedCheck_2321_;
goto v_resetjp_2305_;
}
else
{
lean_inc(v_tail_2304_);
lean_inc(v_head_2303_);
lean_dec(v_x_2301_);
v___x_2306_ = lean_box(0);
v_isShared_2307_ = v_isSharedCheck_2321_;
goto v_resetjp_2305_;
}
v_resetjp_2305_:
{
lean_object* v___x_2308_; 
lean_inc(v_B_2300_);
lean_inc(v_head_2303_);
v___x_2308_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__1(v_s_2298_, v_head_2303_, v_d_2299_, v_B_2300_);
if (lean_obj_tag(v___x_2308_) == 0)
{
lean_del_object(v___x_2306_);
lean_dec(v_head_2303_);
v_x_2301_ = v_tail_2304_;
goto _start;
}
else
{
lean_object* v_val_2310_; lean_object* v___x_2312_; uint8_t v_isShared_2313_; uint8_t v_isSharedCheck_2320_; 
lean_dec(v_tail_2304_);
lean_dec(v_B_2300_);
v_val_2310_ = lean_ctor_get(v___x_2308_, 0);
v_isSharedCheck_2320_ = !lean_is_exclusive(v___x_2308_);
if (v_isSharedCheck_2320_ == 0)
{
v___x_2312_ = v___x_2308_;
v_isShared_2313_ = v_isSharedCheck_2320_;
goto v_resetjp_2311_;
}
else
{
lean_inc(v_val_2310_);
lean_dec(v___x_2308_);
v___x_2312_ = lean_box(0);
v_isShared_2313_ = v_isSharedCheck_2320_;
goto v_resetjp_2311_;
}
v_resetjp_2311_:
{
lean_object* v___x_2315_; 
if (v_isShared_2307_ == 0)
{
lean_ctor_set_tag(v___x_2306_, 0);
lean_ctor_set(v___x_2306_, 1, v_val_2310_);
v___x_2315_ = v___x_2306_;
goto v_reusejp_2314_;
}
else
{
lean_object* v_reuseFailAlloc_2319_; 
v_reuseFailAlloc_2319_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2319_, 0, v_head_2303_);
lean_ctor_set(v_reuseFailAlloc_2319_, 1, v_val_2310_);
v___x_2315_ = v_reuseFailAlloc_2319_;
goto v_reusejp_2314_;
}
v_reusejp_2314_:
{
lean_object* v___x_2317_; 
if (v_isShared_2313_ == 0)
{
lean_ctor_set(v___x_2312_, 0, v___x_2315_);
v___x_2317_ = v___x_2312_;
goto v_reusejp_2316_;
}
else
{
lean_object* v_reuseFailAlloc_2318_; 
v_reuseFailAlloc_2318_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2318_, 0, v___x_2315_);
v___x_2317_ = v_reuseFailAlloc_2318_;
goto v_reusejp_2316_;
}
v_reusejp_2316_:
{
return v___x_2317_;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2___boxed(lean_object* v_s_2322_, lean_object* v_d_2323_, lean_object* v_B_2324_, lean_object* v_x_2325_){
_start:
{
lean_object* v_res_2326_; 
v_res_2326_ = lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(v_s_2322_, v_d_2323_, v_B_2324_, v_x_2325_);
lean_dec(v_d_2323_);
lean_dec(v_s_2322_);
return v_res_2326_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Pred_whyNot_spec__0(lean_object* v_i_2327_, lean_object* v_a_2328_, lean_object* v_a_2329_){
_start:
{
if (lean_obj_tag(v_a_2328_) == 0)
{
lean_object* v___x_2330_; 
lean_dec(v_i_2327_);
v___x_2330_ = l_List_reverse___redArg(v_a_2329_);
return v___x_2330_;
}
else
{
lean_object* v_head_2331_; lean_object* v_tail_2332_; lean_object* v___x_2334_; uint8_t v_isShared_2335_; uint8_t v_isSharedCheck_2341_; 
v_head_2331_ = lean_ctor_get(v_a_2328_, 0);
v_tail_2332_ = lean_ctor_get(v_a_2328_, 1);
v_isSharedCheck_2341_ = !lean_is_exclusive(v_a_2328_);
if (v_isSharedCheck_2341_ == 0)
{
v___x_2334_ = v_a_2328_;
v_isShared_2335_ = v_isSharedCheck_2341_;
goto v_resetjp_2333_;
}
else
{
lean_inc(v_tail_2332_);
lean_inc(v_head_2331_);
lean_dec(v_a_2328_);
v___x_2334_ = lean_box(0);
v_isShared_2335_ = v_isSharedCheck_2341_;
goto v_resetjp_2333_;
}
v_resetjp_2333_:
{
lean_object* v___x_2336_; lean_object* v___x_2338_; 
lean_inc(v_i_2327_);
v___x_2336_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2336_, 0, v_i_2327_);
lean_ctor_set(v___x_2336_, 1, v_head_2331_);
if (v_isShared_2335_ == 0)
{
lean_ctor_set(v___x_2334_, 1, v_a_2329_);
lean_ctor_set(v___x_2334_, 0, v___x_2336_);
v___x_2338_ = v___x_2334_;
goto v_reusejp_2337_;
}
else
{
lean_object* v_reuseFailAlloc_2340_; 
v_reuseFailAlloc_2340_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2340_, 0, v___x_2336_);
lean_ctor_set(v_reuseFailAlloc_2340_, 1, v_a_2329_);
v___x_2338_ = v_reuseFailAlloc_2340_;
goto v_reusejp_2337_;
}
v_reusejp_2337_:
{
v_a_2328_ = v_tail_2332_;
v_a_2329_ = v___x_2338_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Pred_whyNot_spec__5(lean_object* v_a_2342_, lean_object* v_a_2343_){
_start:
{
if (lean_obj_tag(v_a_2342_) == 0)
{
lean_object* v___x_2344_; 
v___x_2344_ = lean_array_to_list(v_a_2343_);
return v___x_2344_;
}
else
{
lean_object* v_head_2345_; lean_object* v_tail_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; lean_object* v___x_2350_; 
v_head_2345_ = lean_ctor_get(v_a_2342_, 0);
lean_inc_n(v_head_2345_, 2);
v_tail_2346_ = lean_ctor_get(v_a_2342_, 1);
lean_inc(v_tail_2346_);
lean_dec_ref_known(v_a_2342_, 2);
v___x_2347_ = l_List_range(v_head_2345_);
v___x_2348_ = lean_box(0);
v___x_2349_ = lp_choreo_List_mapTR_loop___at___00Choreo_Pred_whyNot_spec__0(v_head_2345_, v___x_2347_, v___x_2348_);
v___x_2350_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2343_, v___x_2349_);
v_a_2342_ = v_tail_2346_;
v_a_2343_ = v___x_2350_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(lean_object* v_line_2352_, lean_object* v_d_2353_, lean_object* v_s_2354_, lean_object* v_x_2355_){
_start:
{
if (lean_obj_tag(v_x_2355_) == 0)
{
lean_object* v___x_2356_; 
v___x_2356_ = lean_box(0);
return v___x_2356_;
}
else
{
lean_object* v_head_2357_; lean_object* v_tail_2358_; lean_object* v___x_2359_; lean_object* v_x_2360_; lean_object* v___x_2361_; uint8_t v___x_2362_; 
v_head_2357_ = lean_ctor_get(v_x_2355_, 0);
lean_inc_n(v_head_2357_, 2);
v_tail_2358_ = lean_ctor_get(v_x_2355_, 1);
lean_inc(v_tail_2358_);
lean_dec_ref_known(v_x_2355_, 2);
v___x_2359_ = lp_choreo_Choreo_State_at(v_s_2354_, v_head_2357_);
v_x_2360_ = lean_ctor_get(v___x_2359_, 0);
lean_inc(v_x_2360_);
lean_dec_ref(v___x_2359_);
v___x_2361_ = lean_int_add(v_line_2352_, v_d_2353_);
v___x_2362_ = lean_int_dec_le(v___x_2361_, v_x_2360_);
lean_dec(v_x_2360_);
lean_dec(v___x_2361_);
if (v___x_2362_ == 0)
{
lean_object* v___x_2363_; 
lean_dec(v_tail_2358_);
v___x_2363_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2363_, 0, v_head_2357_);
return v___x_2363_;
}
else
{
lean_dec(v_head_2357_);
v_x_2355_ = v_tail_2358_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4___boxed(lean_object* v_line_2365_, lean_object* v_d_2366_, lean_object* v_s_2367_, lean_object* v_x_2368_){
_start:
{
lean_object* v_res_2369_; 
v_res_2369_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(v_line_2365_, v_d_2366_, v_s_2367_, v_x_2368_);
lean_dec(v_s_2367_);
lean_dec(v_d_2366_);
lean_dec(v_line_2365_);
return v_res_2369_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(lean_object* v_d_2370_, lean_object* v_s_2371_, lean_object* v_x_2372_){
_start:
{
if (lean_obj_tag(v_x_2372_) == 0)
{
lean_object* v___x_2373_; 
v___x_2373_ = lean_box(0);
return v___x_2373_;
}
else
{
lean_object* v_head_2374_; lean_object* v_tail_2375_; lean_object* v_fst_2376_; lean_object* v_snd_2377_; lean_object* v___x_2378_; lean_object* v___x_2379_; lean_object* v___x_2380_; lean_object* v___x_2381_; uint8_t v___x_2382_; 
v_head_2374_ = lean_ctor_get(v_x_2372_, 0);
lean_inc(v_head_2374_);
v_tail_2375_ = lean_ctor_get(v_x_2372_, 1);
lean_inc(v_tail_2375_);
lean_dec_ref_known(v_x_2372_, 2);
v_fst_2376_ = lean_ctor_get(v_head_2374_, 0);
v_snd_2377_ = lean_ctor_get(v_head_2374_, 1);
v___x_2378_ = lean_int_mul(v_d_2370_, v_d_2370_);
lean_inc(v_fst_2376_);
v___x_2379_ = lp_choreo_Choreo_State_at(v_s_2371_, v_fst_2376_);
lean_inc(v_snd_2377_);
v___x_2380_ = lp_choreo_Choreo_State_at(v_s_2371_, v_snd_2377_);
v___x_2381_ = lp_choreo_Choreo_gapSq_x27(v___x_2379_, v___x_2380_);
lean_dec_ref(v___x_2380_);
lean_dec_ref(v___x_2379_);
v___x_2382_ = lean_int_dec_le(v___x_2378_, v___x_2381_);
lean_dec(v___x_2381_);
lean_dec(v___x_2378_);
if (v___x_2382_ == 0)
{
lean_object* v___x_2383_; 
lean_dec(v_tail_2375_);
v___x_2383_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2383_, 0, v_head_2374_);
return v___x_2383_;
}
else
{
lean_dec(v_head_2374_);
v_x_2372_ = v_tail_2375_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6___boxed(lean_object* v_d_2385_, lean_object* v_s_2386_, lean_object* v_x_2387_){
_start:
{
lean_object* v_res_2388_; 
v_res_2388_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(v_d_2385_, v_s_2386_, v_x_2387_);
lean_dec(v_s_2386_);
lean_dec(v_d_2385_);
return v_res_2388_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(lean_object* v_s_2389_, lean_object* v_line_2390_, lean_object* v_x_2391_){
_start:
{
if (lean_obj_tag(v_x_2391_) == 0)
{
lean_object* v___x_2392_; 
v___x_2392_ = lean_box(0);
return v___x_2392_;
}
else
{
lean_object* v_head_2393_; lean_object* v_tail_2394_; lean_object* v___x_2395_; lean_object* v_x_2396_; uint8_t v___x_2397_; 
v_head_2393_ = lean_ctor_get(v_x_2391_, 0);
lean_inc_n(v_head_2393_, 2);
v_tail_2394_ = lean_ctor_get(v_x_2391_, 1);
lean_inc(v_tail_2394_);
lean_dec_ref_known(v_x_2391_, 2);
v___x_2395_ = lp_choreo_Choreo_State_at(v_s_2389_, v_head_2393_);
v_x_2396_ = lean_ctor_get(v___x_2395_, 0);
lean_inc(v_x_2396_);
lean_dec_ref(v___x_2395_);
v___x_2397_ = lean_int_dec_le(v_x_2396_, v_line_2390_);
lean_dec(v_x_2396_);
if (v___x_2397_ == 0)
{
lean_object* v___x_2398_; 
lean_dec(v_tail_2394_);
v___x_2398_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2398_, 0, v_head_2393_);
return v___x_2398_;
}
else
{
lean_dec(v_head_2393_);
v_x_2391_ = v_tail_2394_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3___boxed(lean_object* v_s_2400_, lean_object* v_line_2401_, lean_object* v_x_2402_){
_start:
{
lean_object* v_res_2403_; 
v_res_2403_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(v_s_2400_, v_line_2401_, v_x_2402_);
lean_dec(v_line_2401_);
lean_dec(v_s_2400_);
return v_res_2403_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot(lean_object* v_names_2417_, lean_object* v_s_2418_, lean_object* v_x_2419_){
_start:
{
switch(lean_obj_tag(v_x_2419_))
{
case 4:
{
lean_object* v_A_2420_; lean_object* v_B_2421_; lean_object* v_d_2422_; lean_object* v_bad_2423_; 
v_A_2420_ = lean_ctor_get(v_x_2419_, 0);
lean_inc(v_A_2420_);
v_B_2421_ = lean_ctor_get(v_x_2419_, 1);
lean_inc(v_B_2421_);
v_d_2422_ = lean_ctor_get(v_x_2419_, 2);
lean_inc(v_d_2422_);
lean_dec_ref_known(v_x_2419_, 3);
v_bad_2423_ = lp_choreo_List_findSome_x3f___at___00Choreo_Pred_whyNot_spec__2(v_s_2418_, v_d_2422_, v_B_2421_, v_A_2420_);
lean_dec(v_d_2422_);
if (lean_obj_tag(v_bad_2423_) == 0)
{
lean_object* v___x_2424_; 
lean_dec_ref(v_names_2417_);
v___x_2424_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__0));
return v___x_2424_;
}
else
{
lean_object* v_val_2425_; lean_object* v_fst_2426_; lean_object* v_snd_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v_y_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v_y_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; lean_object* v___x_2438_; lean_object* v___x_2439_; lean_object* v___x_2440_; lean_object* v___x_2441_; lean_object* v___x_2442_; lean_object* v___x_2443_; lean_object* v___x_2444_; lean_object* v___x_2445_; lean_object* v___x_2446_; 
v_val_2425_ = lean_ctor_get(v_bad_2423_, 0);
lean_inc(v_val_2425_);
lean_dec_ref_known(v_bad_2423_, 1);
v_fst_2426_ = lean_ctor_get(v_val_2425_, 0);
lean_inc_n(v_fst_2426_, 2);
v_snd_2427_ = lean_ctor_get(v_val_2425_, 1);
lean_inc_n(v_snd_2427_, 2);
lean_dec(v_val_2425_);
lean_inc_ref(v_names_2417_);
v___x_2428_ = lean_apply_1(v_names_2417_, v_fst_2426_);
v___x_2429_ = lp_choreo_Choreo_State_at(v_s_2418_, v_fst_2426_);
v_y_2430_ = lean_ctor_get(v___x_2429_, 1);
lean_inc(v_y_2430_);
lean_dec_ref(v___x_2429_);
v___x_2431_ = lean_apply_1(v_names_2417_, v_snd_2427_);
v___x_2432_ = lp_choreo_Choreo_State_at(v_s_2418_, v_snd_2427_);
v_y_2433_ = lean_ctor_get(v___x_2432_, 1);
lean_inc(v_y_2433_);
lean_dec_ref(v___x_2432_);
v___x_2434_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__1));
v___x_2435_ = lean_string_append(v___x_2428_, v___x_2434_);
v___x_2436_ = lean_string_append(v___x_2435_, v___x_2431_);
lean_dec_ref(v___x_2431_);
v___x_2437_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__2));
v___x_2438_ = lean_string_append(v___x_2436_, v___x_2437_);
v___x_2439_ = lean_int_sub(v_y_2430_, v_y_2433_);
lean_dec(v_y_2433_);
lean_dec(v_y_2430_);
v___x_2440_ = lean_nat_abs(v___x_2439_);
lean_dec(v___x_2439_);
v___x_2441_ = lean_unsigned_to_nat(10u);
v___x_2442_ = lean_nat_div(v___x_2440_, v___x_2441_);
lean_dec(v___x_2440_);
v___x_2443_ = l_Nat_reprFast(v___x_2442_);
v___x_2444_ = lean_string_append(v___x_2438_, v___x_2443_);
lean_dec_ref(v___x_2443_);
v___x_2445_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__3));
v___x_2446_ = lean_string_append(v___x_2444_, v___x_2445_);
return v___x_2446_;
}
}
case 5:
{
lean_object* v_A_2447_; lean_object* v_B_2448_; lean_object* v_line_2449_; lean_object* v_d_2450_; lean_object* v___x_2451_; 
v_A_2447_ = lean_ctor_get(v_x_2419_, 0);
lean_inc(v_A_2447_);
v_B_2448_ = lean_ctor_get(v_x_2419_, 1);
lean_inc(v_B_2448_);
v_line_2449_ = lean_ctor_get(v_x_2419_, 2);
lean_inc(v_line_2449_);
v_d_2450_ = lean_ctor_get(v_x_2419_, 3);
lean_inc(v_d_2450_);
lean_dec_ref_known(v_x_2419_, 4);
v___x_2451_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__3(v_s_2418_, v_line_2449_, v_A_2447_);
if (lean_obj_tag(v___x_2451_) == 1)
{
lean_object* v_val_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; 
lean_dec(v_d_2450_);
lean_dec(v_line_2449_);
lean_dec(v_B_2448_);
v_val_2452_ = lean_ctor_get(v___x_2451_, 0);
lean_inc(v_val_2452_);
lean_dec_ref_known(v___x_2451_, 1);
v___x_2453_ = lean_apply_1(v_names_2417_, v_val_2452_);
v___x_2454_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__4));
v___x_2455_ = lean_string_append(v___x_2453_, v___x_2454_);
return v___x_2455_;
}
else
{
lean_object* v___x_2456_; 
lean_dec(v___x_2451_);
v___x_2456_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__4(v_line_2449_, v_d_2450_, v_s_2418_, v_B_2448_);
lean_dec(v_d_2450_);
lean_dec(v_line_2449_);
if (lean_obj_tag(v___x_2456_) == 1)
{
lean_object* v_val_2457_; lean_object* v___x_2458_; lean_object* v___x_2459_; lean_object* v___x_2460_; 
v_val_2457_ = lean_ctor_get(v___x_2456_, 0);
lean_inc(v_val_2457_);
lean_dec_ref_known(v___x_2456_, 1);
v___x_2458_ = lean_apply_1(v_names_2417_, v_val_2457_);
v___x_2459_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__5));
v___x_2460_ = lean_string_append(v___x_2458_, v___x_2459_);
return v___x_2460_;
}
else
{
lean_object* v___x_2461_; 
lean_dec(v___x_2456_);
lean_dec_ref(v_names_2417_);
v___x_2461_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__6));
return v___x_2461_;
}
}
}
case 2:
{
lean_object* v_n_2462_; lean_object* v_d_2463_; lean_object* v___x_2464_; lean_object* v___x_2465_; lean_object* v_pairs_2466_; lean_object* v___x_2467_; 
v_n_2462_ = lean_ctor_get(v_x_2419_, 0);
lean_inc(v_n_2462_);
v_d_2463_ = lean_ctor_get(v_x_2419_, 1);
lean_inc(v_d_2463_);
lean_dec_ref_known(v_x_2419_, 2);
v___x_2464_ = l_List_range(v_n_2462_);
v___x_2465_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__7));
v_pairs_2466_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_Pred_whyNot_spec__5(v___x_2464_, v___x_2465_);
v___x_2467_ = lp_choreo_List_find_x3f___at___00Choreo_Pred_whyNot_spec__6(v_d_2463_, v_s_2418_, v_pairs_2466_);
if (lean_obj_tag(v___x_2467_) == 0)
{
lean_object* v___x_2468_; 
lean_dec(v_d_2463_);
lean_dec_ref(v_names_2417_);
v___x_2468_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__8));
return v___x_2468_;
}
else
{
lean_object* v_val_2469_; lean_object* v_fst_2470_; lean_object* v_snd_2471_; lean_object* v___x_2472_; lean_object* v___x_2473_; lean_object* v___x_2474_; lean_object* v___x_2475_; lean_object* v___x_2476_; lean_object* v___x_2477_; lean_object* v___x_2478_; lean_object* v___x_2479_; lean_object* v___x_2480_; lean_object* v___x_2481_; lean_object* v___x_2482_; lean_object* v___x_2483_; lean_object* v___x_2484_; 
v_val_2469_ = lean_ctor_get(v___x_2467_, 0);
lean_inc(v_val_2469_);
lean_dec_ref_known(v___x_2467_, 1);
v_fst_2470_ = lean_ctor_get(v_val_2469_, 0);
lean_inc(v_fst_2470_);
v_snd_2471_ = lean_ctor_get(v_val_2469_, 1);
lean_inc(v_snd_2471_);
lean_dec(v_val_2469_);
lean_inc_ref(v_names_2417_);
v___x_2472_ = lean_apply_1(v_names_2417_, v_fst_2470_);
v___x_2473_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__1));
v___x_2474_ = lean_string_append(v___x_2472_, v___x_2473_);
v___x_2475_ = lean_apply_1(v_names_2417_, v_snd_2471_);
v___x_2476_ = lean_string_append(v___x_2474_, v___x_2475_);
lean_dec_ref(v___x_2475_);
v___x_2477_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__9));
v___x_2478_ = lean_string_append(v___x_2476_, v___x_2477_);
v___x_2479_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_arcPlaces_spec__0___closed__3);
v___x_2480_ = lean_int_ediv(v_d_2463_, v___x_2479_);
lean_dec(v_d_2463_);
v___x_2481_ = l_Int_repr(v___x_2480_);
lean_dec(v___x_2480_);
v___x_2482_ = lean_string_append(v___x_2478_, v___x_2481_);
lean_dec_ref(v___x_2481_);
v___x_2483_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__10));
v___x_2484_ = lean_string_append(v___x_2482_, v___x_2483_);
return v___x_2484_;
}
}
default: 
{
lean_object* v___x_2485_; 
lean_dec(v_x_2419_);
lean_dec_ref(v_names_2417_);
v___x_2485_ = ((lean_object*)(lp_choreo_Choreo_Pred_whyNot___closed__11));
return v___x_2485_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_whyNot___boxed(lean_object* v_names_2486_, lean_object* v_s_2487_, lean_object* v_x_2488_){
_start:
{
lean_object* v_res_2489_; 
v_res_2489_ = lp_choreo_Choreo_Pred_whyNot(v_names_2486_, v_s_2487_, v_x_2488_);
lean_dec(v_s_2487_);
return v_res_2489_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__1(lean_object* v_a_2490_, lean_object* v_a_2491_){
_start:
{
if (lean_obj_tag(v_a_2490_) == 0)
{
lean_object* v___x_2492_; 
v___x_2492_ = l_List_reverse___redArg(v_a_2491_);
return v___x_2492_;
}
else
{
lean_object* v_head_2493_; lean_object* v_tail_2494_; lean_object* v___x_2496_; uint8_t v_isShared_2497_; uint8_t v_isSharedCheck_2508_; 
v_head_2493_ = lean_ctor_get(v_a_2490_, 0);
v_tail_2494_ = lean_ctor_get(v_a_2490_, 1);
v_isSharedCheck_2508_ = !lean_is_exclusive(v_a_2490_);
if (v_isSharedCheck_2508_ == 0)
{
v___x_2496_ = v_a_2490_;
v_isShared_2497_ = v_isSharedCheck_2508_;
goto v_resetjp_2495_;
}
else
{
lean_inc(v_tail_2494_);
lean_inc(v_head_2493_);
lean_dec(v_a_2490_);
v___x_2496_ = lean_box(0);
v_isShared_2497_ = v_isSharedCheck_2508_;
goto v_resetjp_2495_;
}
v_resetjp_2495_:
{
lean_object* v___y_2499_; lean_object* v_step_2504_; lean_object* v_op_2505_; 
v_step_2504_ = lean_ctor_get(v_head_2493_, 5);
lean_inc_ref(v_step_2504_);
lean_dec(v_head_2493_);
v_op_2505_ = lean_ctor_get(v_step_2504_, 0);
lean_inc_ref(v_op_2505_);
lean_dec_ref(v_step_2504_);
if (lean_obj_tag(v_op_2505_) == 3)
{
lean_object* v_beats_2506_; 
v_beats_2506_ = lean_ctor_get(v_op_2505_, 4);
lean_inc(v_beats_2506_);
lean_dec_ref_known(v_op_2505_, 6);
v___y_2499_ = v_beats_2506_;
goto v___jp_2498_;
}
else
{
lean_object* v_beats_2507_; 
v_beats_2507_ = lean_ctor_get(v_op_2505_, 1);
lean_inc(v_beats_2507_);
lean_dec_ref(v_op_2505_);
v___y_2499_ = v_beats_2507_;
goto v___jp_2498_;
}
v___jp_2498_:
{
lean_object* v___x_2501_; 
if (v_isShared_2497_ == 0)
{
lean_ctor_set(v___x_2496_, 1, v_a_2491_);
lean_ctor_set(v___x_2496_, 0, v___y_2499_);
v___x_2501_ = v___x_2496_;
goto v_reusejp_2500_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___y_2499_);
lean_ctor_set(v_reuseFailAlloc_2503_, 1, v_a_2491_);
v___x_2501_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2500_;
}
v_reusejp_2500_:
{
v_a_2490_ = v_tail_2494_;
v_a_2491_ = v___x_2501_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__5(lean_object* v___x_2509_, lean_object* v_x_2510_, lean_object* v_x_2511_){
_start:
{
if (lean_obj_tag(v_x_2511_) == 0)
{
lean_dec(v___x_2509_);
return v_x_2510_;
}
else
{
lean_object* v_head_2512_; lean_object* v_tail_2513_; lean_object* v___x_2515_; uint8_t v_isShared_2516_; uint8_t v_isSharedCheck_2537_; 
v_head_2512_ = lean_ctor_get(v_x_2511_, 0);
v_tail_2513_ = lean_ctor_get(v_x_2511_, 1);
v_isSharedCheck_2537_ = !lean_is_exclusive(v_x_2511_);
if (v_isSharedCheck_2537_ == 0)
{
v___x_2515_ = v_x_2511_;
v_isShared_2516_ = v_isSharedCheck_2537_;
goto v_resetjp_2514_;
}
else
{
lean_inc(v_tail_2513_);
lean_inc(v_head_2512_);
lean_dec(v_x_2511_);
v___x_2515_ = lean_box(0);
v_isShared_2516_ = v_isSharedCheck_2537_;
goto v_resetjp_2514_;
}
v_resetjp_2514_:
{
lean_object* v_fst_2517_; lean_object* v_snd_2518_; lean_object* v___x_2520_; uint8_t v_isShared_2521_; uint8_t v_isSharedCheck_2536_; 
v_fst_2517_ = lean_ctor_get(v_x_2510_, 0);
v_snd_2518_ = lean_ctor_get(v_x_2510_, 1);
v_isSharedCheck_2536_ = !lean_is_exclusive(v_x_2510_);
if (v_isSharedCheck_2536_ == 0)
{
v___x_2520_ = v_x_2510_;
v_isShared_2521_ = v_isSharedCheck_2536_;
goto v_resetjp_2519_;
}
else
{
lean_inc(v_snd_2518_);
lean_inc(v_fst_2517_);
lean_dec(v_x_2510_);
v___x_2520_ = lean_box(0);
v_isShared_2521_ = v_isSharedCheck_2536_;
goto v_resetjp_2519_;
}
v_resetjp_2519_:
{
lean_object* v_beats_2522_; lean_object* v___x_2523_; lean_object* v___x_2524_; lean_object* v___x_2525_; lean_object* v___x_2527_; 
v_beats_2522_ = lean_ctor_get(v_head_2512_, 4);
lean_inc(v_beats_2522_);
v___x_2523_ = lean_unsigned_to_nat(4u);
lean_inc(v_snd_2518_);
lean_inc(v___x_2509_);
v___x_2524_ = lp_choreo_Choreo_Draft_toPhase(v_head_2512_, v___x_2509_, v_snd_2518_);
lean_dec(v_head_2512_);
v___x_2525_ = lean_box(0);
if (v_isShared_2516_ == 0)
{
lean_ctor_set(v___x_2515_, 1, v___x_2525_);
lean_ctor_set(v___x_2515_, 0, v___x_2524_);
v___x_2527_ = v___x_2515_;
goto v_reusejp_2526_;
}
else
{
lean_object* v_reuseFailAlloc_2535_; 
v_reuseFailAlloc_2535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2535_, 0, v___x_2524_);
lean_ctor_set(v_reuseFailAlloc_2535_, 1, v___x_2525_);
v___x_2527_ = v_reuseFailAlloc_2535_;
goto v_reusejp_2526_;
}
v_reusejp_2526_:
{
lean_object* v___x_2528_; lean_object* v___x_2529_; lean_object* v___x_2530_; lean_object* v___x_2532_; 
v___x_2528_ = l_List_appendTR___redArg(v_fst_2517_, v___x_2527_);
v___x_2529_ = lean_nat_mul(v_beats_2522_, v___x_2523_);
lean_dec(v_beats_2522_);
v___x_2530_ = lean_nat_add(v_snd_2518_, v___x_2529_);
lean_dec(v___x_2529_);
lean_dec(v_snd_2518_);
if (v_isShared_2521_ == 0)
{
lean_ctor_set(v___x_2520_, 1, v___x_2530_);
lean_ctor_set(v___x_2520_, 0, v___x_2528_);
v___x_2532_ = v___x_2520_;
goto v_reusejp_2531_;
}
else
{
lean_object* v_reuseFailAlloc_2534_; 
v_reuseFailAlloc_2534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2534_, 0, v___x_2528_);
lean_ctor_set(v_reuseFailAlloc_2534_, 1, v___x_2530_);
v___x_2532_ = v_reuseFailAlloc_2534_;
goto v_reusejp_2531_;
}
v_reusejp_2531_:
{
v_x_2510_ = v___x_2532_;
v_x_2511_ = v_tail_2513_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4(lean_object* v___x_2539_, lean_object* v_env_2540_, lean_object* v___x_2541_, lean_object* v_a_2542_, lean_object* v_a_2543_){
_start:
{
if (lean_obj_tag(v_a_2542_) == 0)
{
lean_object* v___x_2544_; 
lean_dec(v___x_2541_);
lean_dec_ref(v_env_2540_);
lean_dec(v___x_2539_);
v___x_2544_ = l_List_reverse___redArg(v_a_2543_);
return v___x_2544_;
}
else
{
lean_object* v_head_2545_; lean_object* v_step_2546_; lean_object* v_tail_2547_; lean_object* v___x_2549_; uint8_t v_isShared_2550_; uint8_t v_isSharedCheck_2570_; 
v_head_2545_ = lean_ctor_get(v_a_2542_, 0);
lean_inc(v_head_2545_);
v_step_2546_ = lean_ctor_get(v_head_2545_, 5);
lean_inc_ref(v_step_2546_);
v_tail_2547_ = lean_ctor_get(v_a_2542_, 1);
v_isSharedCheck_2570_ = !lean_is_exclusive(v_a_2542_);
if (v_isSharedCheck_2570_ == 0)
{
lean_object* v_unused_2571_; 
v_unused_2571_ = lean_ctor_get(v_a_2542_, 0);
lean_dec(v_unused_2571_);
v___x_2549_ = v_a_2542_;
v_isShared_2550_ = v_isSharedCheck_2570_;
goto v_resetjp_2548_;
}
else
{
lean_inc(v_tail_2547_);
lean_dec(v_a_2542_);
v___x_2549_ = lean_box(0);
v_isShared_2550_ = v_isSharedCheck_2570_;
goto v_resetjp_2548_;
}
v_resetjp_2548_:
{
lean_object* v_kind_2551_; lean_object* v_label_2552_; lean_object* v_before_2553_; lean_object* v_op_2554_; uint8_t v___x_2555_; lean_object* v___x_2556_; lean_object* v___x_2557_; lean_object* v___x_2558_; lean_object* v___y_2560_; 
v_kind_2551_ = lean_ctor_get(v_head_2545_, 3);
lean_inc_ref(v_kind_2551_);
v_label_2552_ = lean_ctor_get(v_head_2545_, 4);
lean_inc_ref(v_label_2552_);
v_before_2553_ = lean_ctor_get(v_head_2545_, 8);
lean_inc(v_before_2553_);
lean_dec(v_head_2545_);
v_op_2554_ = lean_ctor_get(v_step_2546_, 0);
lean_inc_ref_n(v_op_2554_, 2);
lean_dec_ref(v_step_2546_);
v___x_2555_ = 1;
lean_inc_n(v___x_2539_, 2);
v___x_2556_ = l_List_range(v___x_2539_);
v___x_2557_ = lean_box(0);
v___x_2558_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(v_op_2554_, v___x_2539_, v_before_2553_, v___x_2556_, v___x_2557_);
lean_dec(v_before_2553_);
if (lean_obj_tag(v_op_2554_) == 3)
{
lean_object* v_beats_2568_; 
v_beats_2568_ = lean_ctor_get(v_op_2554_, 4);
lean_inc(v_beats_2568_);
v___y_2560_ = v_beats_2568_;
goto v___jp_2559_;
}
else
{
lean_object* v_beats_2569_; 
v_beats_2569_ = lean_ctor_get(v_op_2554_, 1);
lean_inc(v_beats_2569_);
v___y_2560_ = v_beats_2569_;
goto v___jp_2559_;
}
v___jp_2559_:
{
lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2565_; 
v___x_2561_ = lp_choreo_Choreo_Op_orbits(v_op_2554_);
lean_dec_ref(v_op_2554_);
v___x_2562_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4___closed__0));
lean_inc(v___x_2541_);
lean_inc_ref(v_env_2540_);
v___x_2563_ = lean_alloc_ctor(0, 9, 1);
lean_ctor_set(v___x_2563_, 0, v_label_2552_);
lean_ctor_set(v___x_2563_, 1, v_kind_2551_);
lean_ctor_set(v___x_2563_, 2, v___x_2558_);
lean_ctor_set(v___x_2563_, 3, v_env_2540_);
lean_ctor_set(v___x_2563_, 4, v___y_2560_);
lean_ctor_set(v___x_2563_, 5, v___x_2557_);
lean_ctor_set(v___x_2563_, 6, v___x_2561_);
lean_ctor_set(v___x_2563_, 7, v___x_2541_);
lean_ctor_set(v___x_2563_, 8, v___x_2562_);
lean_ctor_set_uint8(v___x_2563_, sizeof(void*)*9, v___x_2555_);
if (v_isShared_2550_ == 0)
{
lean_ctor_set(v___x_2549_, 1, v_a_2543_);
lean_ctor_set(v___x_2549_, 0, v___x_2563_);
v___x_2565_ = v___x_2549_;
goto v_reusejp_2564_;
}
else
{
lean_object* v_reuseFailAlloc_2567_; 
v_reuseFailAlloc_2567_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2567_, 0, v___x_2563_);
lean_ctor_set(v_reuseFailAlloc_2567_, 1, v_a_2543_);
v___x_2565_ = v_reuseFailAlloc_2567_;
goto v_reusejp_2564_;
}
v_reusejp_2564_:
{
v_a_2542_ = v_tail_2547_;
v_a_2543_ = v___x_2565_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__6(lean_object* v_a_2572_, lean_object* v_a_2573_){
_start:
{
if (lean_obj_tag(v_a_2572_) == 0)
{
lean_object* v___x_2574_; 
v___x_2574_ = l_List_reverse___redArg(v_a_2573_);
return v___x_2574_;
}
else
{
lean_object* v_head_2575_; lean_object* v_tail_2576_; lean_object* v___x_2578_; uint8_t v_isShared_2579_; uint8_t v_isSharedCheck_2585_; 
v_head_2575_ = lean_ctor_get(v_a_2572_, 0);
v_tail_2576_ = lean_ctor_get(v_a_2572_, 1);
v_isSharedCheck_2585_ = !lean_is_exclusive(v_a_2572_);
if (v_isSharedCheck_2585_ == 0)
{
v___x_2578_ = v_a_2572_;
v_isShared_2579_ = v_isSharedCheck_2585_;
goto v_resetjp_2577_;
}
else
{
lean_inc(v_tail_2576_);
lean_inc(v_head_2575_);
lean_dec(v_a_2572_);
v___x_2578_ = lean_box(0);
v_isShared_2579_ = v_isSharedCheck_2585_;
goto v_resetjp_2577_;
}
v_resetjp_2577_:
{
lean_object* v_after_2580_; lean_object* v___x_2582_; 
v_after_2580_ = lean_ctor_get(v_head_2575_, 9);
lean_inc(v_after_2580_);
lean_dec(v_head_2575_);
if (v_isShared_2579_ == 0)
{
lean_ctor_set(v___x_2578_, 1, v_a_2573_);
lean_ctor_set(v___x_2578_, 0, v_after_2580_);
v___x_2582_ = v___x_2578_;
goto v_reusejp_2581_;
}
else
{
lean_object* v_reuseFailAlloc_2584_; 
v_reuseFailAlloc_2584_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2584_, 0, v_after_2580_);
lean_ctor_set(v_reuseFailAlloc_2584_, 1, v_a_2573_);
v___x_2582_ = v_reuseFailAlloc_2584_;
goto v_reusejp_2581_;
}
v_reusejp_2581_:
{
v_a_2572_ = v_tail_2576_;
v_a_2573_ = v___x_2582_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__8(lean_object* v_x_2586_, lean_object* v_x_2587_){
_start:
{
if (lean_obj_tag(v_x_2587_) == 0)
{
return v_x_2586_;
}
else
{
lean_object* v_head_2588_; lean_object* v_tail_2589_; lean_object* v___x_2591_; uint8_t v_isShared_2592_; uint8_t v_isSharedCheck_2603_; 
v_head_2588_ = lean_ctor_get(v_x_2587_, 0);
v_tail_2589_ = lean_ctor_get(v_x_2587_, 1);
v_isSharedCheck_2603_ = !lean_is_exclusive(v_x_2587_);
if (v_isSharedCheck_2603_ == 0)
{
v___x_2591_ = v_x_2587_;
v_isShared_2592_ = v_isSharedCheck_2603_;
goto v_resetjp_2590_;
}
else
{
lean_inc(v_tail_2589_);
lean_inc(v_head_2588_);
lean_dec(v_x_2587_);
v___x_2591_ = lean_box(0);
v_isShared_2592_ = v_isSharedCheck_2603_;
goto v_resetjp_2590_;
}
v_resetjp_2590_:
{
lean_object* v___x_2593_; lean_object* v___x_2594_; uint8_t v___x_2595_; 
v___x_2593_ = l_List_getLast_x3f___redArg(v_x_2586_);
lean_inc(v_head_2588_);
v___x_2594_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2594_, 0, v_head_2588_);
v___x_2595_ = lp_choreo_Option_instBEq_beq___at___00Choreo_scan_spec__2(v___x_2593_, v___x_2594_);
lean_dec_ref_known(v___x_2594_, 1);
lean_dec(v___x_2593_);
if (v___x_2595_ == 0)
{
lean_object* v___x_2596_; lean_object* v___x_2598_; 
v___x_2596_ = lean_box(0);
if (v_isShared_2592_ == 0)
{
lean_ctor_set(v___x_2591_, 1, v___x_2596_);
v___x_2598_ = v___x_2591_;
goto v_reusejp_2597_;
}
else
{
lean_object* v_reuseFailAlloc_2601_; 
v_reuseFailAlloc_2601_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2601_, 0, v_head_2588_);
lean_ctor_set(v_reuseFailAlloc_2601_, 1, v___x_2596_);
v___x_2598_ = v_reuseFailAlloc_2601_;
goto v_reusejp_2597_;
}
v_reusejp_2597_:
{
lean_object* v___x_2599_; 
v___x_2599_ = l_List_appendTR___redArg(v_x_2586_, v___x_2598_);
v_x_2586_ = v___x_2599_;
v_x_2587_ = v_tail_2589_;
goto _start;
}
}
else
{
lean_del_object(v___x_2591_);
lean_dec(v_head_2588_);
v_x_2587_ = v_tail_2589_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__0(lean_object* v_sp_2604_, lean_object* v_x_2605_, lean_object* v_x_2606_){
_start:
{
if (lean_obj_tag(v_x_2606_) == 0)
{
lean_dec_ref(v_sp_2604_);
return v_x_2605_;
}
else
{
lean_object* v_head_2607_; lean_object* v_tail_2608_; lean_object* v___x_2609_; 
v_head_2607_ = lean_ctor_get(v_x_2606_, 0);
lean_inc(v_head_2607_);
v_tail_2608_ = lean_ctor_get(v_x_2606_, 1);
lean_inc(v_tail_2608_);
lean_dec_ref_known(v_x_2606_, 2);
lean_inc_ref(v_sp_2604_);
v___x_2609_ = lp_choreo_Choreo_compileOp(v_sp_2604_, v_x_2605_, v_head_2607_);
v_x_2605_ = v___x_2609_;
v_x_2606_ = v_tail_2608_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(lean_object* v_x_2611_, lean_object* v_x_2612_){
_start:
{
if (lean_obj_tag(v_x_2612_) == 0)
{
return v_x_2611_;
}
else
{
lean_object* v_head_2613_; lean_object* v_tail_2614_; lean_object* v_x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; uint8_t v___x_2618_; 
v_head_2613_ = lean_ctor_get(v_x_2612_, 0);
v_tail_2614_ = lean_ctor_get(v_x_2612_, 1);
v_x_2615_ = lean_ctor_get(v_head_2613_, 0);
v___x_2616_ = lean_nat_abs(v_x_2615_);
v___x_2617_ = lean_nat_to_int(v___x_2616_);
v___x_2618_ = lean_int_dec_le(v_x_2611_, v___x_2617_);
if (v___x_2618_ == 0)
{
lean_object* v___x_2619_; 
lean_dec(v___x_2617_);
v___x_2619_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(v_x_2611_, v_tail_2614_);
return v___x_2619_;
}
else
{
lean_object* v___x_2620_; 
lean_dec(v_x_2611_);
v___x_2620_ = lp_choreo_List_foldl___at___00List_foldl___at___00Choreo_stepDrafts_spec__7_spec__8(v___x_2617_, v_tail_2614_);
return v___x_2620_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3___boxed(lean_object* v_x_2621_, lean_object* v_x_2622_){
_start:
{
lean_object* v_res_2623_; 
v_res_2623_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(v_x_2621_, v_x_2622_);
lean_dec(v_x_2622_);
return v_res_2623_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildProgram_spec__2(lean_object* v_a_2624_, lean_object* v_a_2625_){
_start:
{
if (lean_obj_tag(v_a_2624_) == 0)
{
lean_object* v___x_2626_; 
v___x_2626_ = lean_array_to_list(v_a_2625_);
return v___x_2626_;
}
else
{
lean_object* v_head_2627_; lean_object* v_tail_2628_; lean_object* v_before_2629_; lean_object* v_after_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; 
v_head_2627_ = lean_ctor_get(v_a_2624_, 0);
lean_inc(v_head_2627_);
v_tail_2628_ = lean_ctor_get(v_a_2624_, 1);
lean_inc(v_tail_2628_);
lean_dec_ref_known(v_a_2624_, 2);
v_before_2629_ = lean_ctor_get(v_head_2627_, 8);
lean_inc(v_before_2629_);
v_after_2630_ = lean_ctor_get(v_head_2627_, 9);
lean_inc(v_after_2630_);
lean_dec(v_head_2627_);
v___x_2631_ = l_List_appendTR___redArg(v_before_2629_, v_after_2630_);
v___x_2632_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2625_, v___x_2631_);
v_a_2624_ = v_tail_2628_;
v_a_2625_ = v___x_2632_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(lean_object* v_a_2634_, lean_object* v_a_2635_){
_start:
{
if (lean_obj_tag(v_a_2634_) == 0)
{
lean_object* v___x_2636_; 
v___x_2636_ = l_List_reverse___redArg(v_a_2635_);
return v___x_2636_;
}
else
{
lean_object* v_head_2637_; lean_object* v_tail_2638_; lean_object* v___x_2640_; uint8_t v_isShared_2641_; uint8_t v_isSharedCheck_2647_; 
v_head_2637_ = lean_ctor_get(v_a_2634_, 0);
v_tail_2638_ = lean_ctor_get(v_a_2634_, 1);
v_isSharedCheck_2647_ = !lean_is_exclusive(v_a_2634_);
if (v_isSharedCheck_2647_ == 0)
{
v___x_2640_ = v_a_2634_;
v_isShared_2641_ = v_isSharedCheck_2647_;
goto v_resetjp_2639_;
}
else
{
lean_inc(v_tail_2638_);
lean_inc(v_head_2637_);
lean_dec(v_a_2634_);
v___x_2640_ = lean_box(0);
v_isShared_2641_ = v_isSharedCheck_2647_;
goto v_resetjp_2639_;
}
v_resetjp_2639_:
{
lean_object* v_name_2642_; lean_object* v___x_2644_; 
v_name_2642_ = lean_ctor_get(v_head_2637_, 0);
lean_inc_ref(v_name_2642_);
lean_dec(v_head_2637_);
if (v_isShared_2641_ == 0)
{
lean_ctor_set(v___x_2640_, 1, v_a_2635_);
lean_ctor_set(v___x_2640_, 0, v_name_2642_);
v___x_2644_ = v___x_2640_;
goto v_reusejp_2643_;
}
else
{
lean_object* v_reuseFailAlloc_2646_; 
v_reuseFailAlloc_2646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2646_, 0, v_name_2642_);
lean_ctor_set(v_reuseFailAlloc_2646_, 1, v_a_2635_);
v___x_2644_ = v_reuseFailAlloc_2646_;
goto v_reusejp_2643_;
}
v_reusejp_2643_:
{
v_a_2634_ = v_tail_2638_;
v_a_2635_ = v___x_2644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___redArg(lean_object* v_sp_2650_){
_start:
{
lean_object* v___y_2652_; lean_object* v___y_2653_; lean_object* v___y_2654_; lean_object* v___y_2655_; lean_object* v___y_2656_; lean_object* v___y_2657_; lean_object* v___y_2658_; lean_object* v___y_2659_; lean_object* v___y_2660_; lean_object* v___y_2661_; lean_object* v___y_2662_; lean_object* v___y_2663_; lean_object* v___y_2664_; lean_object* v___y_2665_; lean_object* v___y_2681_; lean_object* v___y_2682_; lean_object* v___y_2683_; lean_object* v___y_2684_; lean_object* v___y_2685_; lean_object* v___y_2686_; lean_object* v___y_2687_; lean_object* v___y_2688_; lean_object* v___y_2689_; lean_object* v___y_2690_; lean_object* v___y_2691_; lean_object* v___y_2692_; lean_object* v___y_2693_; lean_object* v___y_2694_; lean_object* v___y_2695_; lean_object* v___y_2701_; lean_object* v___y_2702_; lean_object* v___y_2703_; lean_object* v___y_2704_; lean_object* v___y_2705_; lean_object* v___y_2706_; lean_object* v___y_2707_; lean_object* v___y_2708_; lean_object* v___y_2709_; lean_object* v___y_2710_; lean_object* v___y_2711_; lean_object* v___y_2712_; lean_object* v___y_2713_; lean_object* v___y_2714_; lean_object* v___y_2744_; lean_object* v___y_2745_; lean_object* v___y_2746_; lean_object* v___y_2747_; lean_object* v___y_2748_; lean_object* v___y_2749_; lean_object* v___y_2750_; lean_object* v___y_2751_; lean_object* v___y_2752_; lean_object* v___y_2753_; lean_object* v___y_2754_; lean_object* v___y_2755_; lean_object* v___y_2761_; lean_object* v___y_2762_; lean_object* v___y_2763_; lean_object* v___y_2764_; lean_object* v___y_2765_; lean_object* v___y_2766_; lean_object* v___y_2767_; lean_object* v___y_2768_; lean_object* v___y_2769_; lean_object* v___y_2770_; lean_object* v___y_2771_; lean_object* v___y_2772_; lean_object* v___y_2773_; lean_object* v___y_2777_; lean_object* v___y_2778_; lean_object* v___y_2779_; lean_object* v___y_2780_; lean_object* v___y_2781_; lean_object* v___y_2782_; lean_object* v_n_2793_; lean_object* v_bpm_2794_; lean_object* v_gap_2795_; lean_object* v_genre_2796_; lean_object* v_start_2797_; lean_object* v_startPlaces_2798_; lean_object* v_ops_2799_; lean_object* v_transform_2800_; lean_object* v___y_2802_; 
v_n_2793_ = lean_ctor_get(v_sp_2650_, 1);
lean_inc(v_n_2793_);
v_bpm_2794_ = lean_ctor_get(v_sp_2650_, 2);
lean_inc(v_bpm_2794_);
v_gap_2795_ = lean_ctor_get(v_sp_2650_, 3);
lean_inc(v_gap_2795_);
v_genre_2796_ = lean_ctor_get(v_sp_2650_, 4);
lean_inc_ref(v_genre_2796_);
v_start_2797_ = lean_ctor_get(v_sp_2650_, 5);
v_startPlaces_2798_ = lean_ctor_get(v_sp_2650_, 6);
v_ops_2799_ = lean_ctor_get(v_sp_2650_, 7);
v_transform_2800_ = lean_ctor_get(v_sp_2650_, 8);
if (lean_obj_tag(v_startPlaces_2798_) == 0)
{
lean_object* v___x_2811_; 
lean_inc(v_n_2793_);
v___x_2811_ = lp_choreo_Choreo_namedPlaces(v_start_2797_, v_n_2793_, v_gap_2795_);
v___y_2802_ = v___x_2811_;
goto v___jp_2801_;
}
else
{
lean_object* v_val_2812_; 
v_val_2812_ = lean_ctor_get(v_startPlaces_2798_, 0);
lean_inc(v_val_2812_);
v___y_2802_ = v_val_2812_;
goto v___jp_2801_;
}
v___jp_2651_:
{
lean_object* v___x_2666_; uint8_t v___x_2667_; lean_object* v_plan_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; lean_object* v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v_built_2678_; lean_object* v___x_2679_; 
v___x_2666_ = lean_box(0);
v___x_2667_ = 0;
lean_inc_n(v___y_2656_, 3);
lean_inc_ref(v___y_2665_);
lean_inc(v___y_2663_);
v_plan_2668_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_plan_2668_, 0, v___y_2663_);
lean_ctor_set(v_plan_2668_, 1, v___y_2655_);
lean_ctor_set(v_plan_2668_, 2, v___y_2665_);
lean_ctor_set(v_plan_2668_, 3, v___y_2661_);
lean_ctor_set(v_plan_2668_, 4, v___y_2656_);
lean_ctor_set(v_plan_2668_, 5, v___y_2656_);
lean_ctor_set(v_plan_2668_, 6, v___x_2666_);
lean_ctor_set(v_plan_2668_, 7, v___x_2666_);
lean_ctor_set(v_plan_2668_, 8, v___y_2658_);
lean_ctor_set(v_plan_2668_, 9, v___x_2666_);
lean_ctor_set(v_plan_2668_, 10, v___y_2656_);
lean_ctor_set_uint8(v_plan_2668_, sizeof(void*)*11, v___x_2667_);
v___x_2669_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2669_, 0, v___y_2659_);
lean_ctor_set(v___x_2669_, 1, v___y_2664_);
v___x_2670_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildPlanOnce_spec__7(v___y_2654_, v___x_2666_);
v___x_2671_ = lean_box(0);
v___x_2672_ = l_List_lengthTR___redArg(v___y_2660_);
v___x_2673_ = l_List_range(v___x_2672_);
v___x_2674_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_2674_, 0, v___y_2662_);
lean_ctor_set(v___x_2674_, 1, v___x_2666_);
lean_ctor_set(v___x_2674_, 2, v___y_2652_);
lean_ctor_set(v___x_2674_, 3, v___y_2657_);
lean_ctor_set(v___x_2674_, 4, v___y_2663_);
lean_ctor_set(v___x_2674_, 5, v___x_2666_);
lean_ctor_set(v___x_2674_, 6, v___y_2665_);
lean_ctor_set(v___x_2674_, 7, v___x_2673_);
lean_ctor_set(v___x_2674_, 8, v___x_2666_);
v___x_2675_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_2675_, 0, v___x_2674_);
lean_inc(v___y_2660_);
v___x_2676_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(v___y_2660_, v___x_2666_);
v___x_2677_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__8(v___x_2666_, v___x_2676_);
v_built_2678_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_built_2678_, 0, v_plan_2668_);
lean_ctor_set(v_built_2678_, 1, v___x_2669_);
lean_ctor_set(v_built_2678_, 2, v___x_2670_);
lean_ctor_set(v_built_2678_, 3, v___x_2666_);
lean_ctor_set(v_built_2678_, 4, v___x_2666_);
lean_ctor_set(v_built_2678_, 5, v___x_2666_);
lean_ctor_set(v_built_2678_, 6, v___x_2671_);
lean_ctor_set(v_built_2678_, 7, v___x_2671_);
lean_ctor_set(v_built_2678_, 8, v___x_2675_);
lean_ctor_set(v_built_2678_, 9, v___x_2677_);
lean_ctor_set(v_built_2678_, 10, v___y_2656_);
lean_ctor_set(v_built_2678_, 11, v___x_2666_);
lean_ctor_set(v_built_2678_, 12, v___y_2653_);
v___x_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2679_, 0, v_built_2678_);
lean_ctor_set(v___x_2679_, 1, v___y_2660_);
return v___x_2679_;
}
v___jp_2680_:
{
lean_object* v___x_2696_; lean_object* v___x_2697_; uint8_t v___x_2698_; 
v___x_2696_ = lean_nat_div(v___y_2688_, v___y_2695_);
lean_dec(v___y_2695_);
lean_dec(v___y_2688_);
v___x_2697_ = lean_string_utf8_byte_size(v___y_2691_);
v___x_2698_ = lean_nat_dec_eq(v___x_2697_, v___y_2684_);
if (v___x_2698_ == 0)
{
v___y_2652_ = v___y_2681_;
v___y_2653_ = v___y_2682_;
v___y_2654_ = v___y_2683_;
v___y_2655_ = v___x_2696_;
v___y_2656_ = v___y_2684_;
v___y_2657_ = v___y_2685_;
v___y_2658_ = v___y_2686_;
v___y_2659_ = v___y_2687_;
v___y_2660_ = v___y_2689_;
v___y_2661_ = v___y_2690_;
v___y_2662_ = v___y_2692_;
v___y_2663_ = v___y_2693_;
v___y_2664_ = v___y_2694_;
v___y_2665_ = v___y_2691_;
goto v___jp_2651_;
}
else
{
lean_object* v___x_2699_; 
lean_dec_ref(v___y_2691_);
v___x_2699_ = ((lean_object*)(lp_choreo_Choreo_buildProgram___redArg___closed__0));
v___y_2652_ = v___y_2681_;
v___y_2653_ = v___y_2682_;
v___y_2654_ = v___y_2683_;
v___y_2655_ = v___x_2696_;
v___y_2656_ = v___y_2684_;
v___y_2657_ = v___y_2685_;
v___y_2658_ = v___y_2686_;
v___y_2659_ = v___y_2687_;
v___y_2660_ = v___y_2689_;
v___y_2661_ = v___y_2690_;
v___y_2662_ = v___y_2692_;
v___y_2663_ = v___y_2693_;
v___y_2664_ = v___y_2694_;
v___y_2665_ = v___x_2699_;
goto v___jp_2651_;
}
}
v___jp_2700_:
{
lean_object* v_every_2715_; lean_object* v___x_2716_; lean_object* v_wide_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2720_; lean_object* v___x_2721_; lean_object* v___x_2722_; lean_object* v_env_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; lean_object* v___x_2726_; lean_object* v_cfg_2727_; lean_object* v___x_2728_; lean_object* v_drafts_2729_; lean_object* v___x_2730_; lean_object* v___x_2731_; lean_object* v_fst_2732_; lean_object* v___x_2734_; uint8_t v_isShared_2735_; uint8_t v_isSharedCheck_2741_; 
v_every_2715_ = l_List_appendTR___redArg(v___y_2702_, v___y_2714_);
v___x_2716_ = lean_obj_once(&lp_choreo_Choreo_evenLanes___closed__2, &lp_choreo_Choreo_evenLanes___closed__2_once, _init_lp_choreo_Choreo_evenLanes___closed__2);
v_wide_2717_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__3(v___x_2716_, v_every_2715_);
lean_dec(v_every_2715_);
v___x_2718_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_halfPlaces_spec__0_spec__0___closed__3);
v___x_2719_ = lean_int_add(v_wide_2717_, v___x_2718_);
lean_dec(v_wide_2717_);
v___x_2720_ = lean_int_neg(v___x_2719_);
lean_inc_n(v___y_2703_, 2);
v___x_2721_ = lean_nat_to_int(v___y_2703_);
v___x_2722_ = lean_obj_once(&lp_choreo_Choreo_Pt_mapT___closed__2, &lp_choreo_Choreo_Pt_mapT___closed__2_once, _init_lp_choreo_Choreo_Pt_mapT___closed__2);
lean_inc(v___x_2721_);
v_env_2723_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v_env_2723_, 0, v___x_2720_);
lean_ctor_set(v_env_2723_, 1, v___x_2719_);
lean_ctor_set(v_env_2723_, 2, v___x_2721_);
lean_ctor_set(v_env_2723_, 3, v___x_2722_);
v___x_2724_ = lp_choreo_Choreo_vmaxMM;
v___x_2725_ = lean_unsigned_to_nat(4u);
v___x_2726_ = lean_nat_mul(v___y_2713_, v___x_2725_);
lean_dec(v___y_2713_);
lean_inc_n(v___y_2711_, 2);
lean_inc(v___y_2707_);
lean_inc_ref(v_env_2723_);
lean_inc_n(v___y_2705_, 2);
lean_inc_n(v___y_2709_, 3);
v_cfg_2727_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v_cfg_2727_, 0, v___y_2709_);
lean_ctor_set(v_cfg_2727_, 1, v___y_2705_);
lean_ctor_set(v_cfg_2727_, 2, v___x_2724_);
lean_ctor_set(v_cfg_2727_, 3, v_env_2723_);
lean_ctor_set(v_cfg_2727_, 4, v___x_2725_);
lean_ctor_set(v_cfg_2727_, 5, v___y_2707_);
lean_ctor_set(v_cfg_2727_, 6, v___y_2711_);
lean_ctor_set(v_cfg_2727_, 7, v___x_2726_);
lean_ctor_set(v_cfg_2727_, 8, v___y_2711_);
v___x_2728_ = lean_box(0);
lean_inc(v___y_2708_);
v_drafts_2729_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__4(v___y_2709_, v_env_2723_, v___y_2705_, v___y_2708_, v___x_2728_);
v___x_2730_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2730_, 0, v___x_2728_);
lean_ctor_set(v___x_2730_, 1, v___y_2703_);
lean_inc(v_drafts_2729_);
v___x_2731_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__5(v___y_2709_, v___x_2730_, v_drafts_2729_);
v_fst_2732_ = lean_ctor_get(v___x_2731_, 0);
v_isSharedCheck_2741_ = !lean_is_exclusive(v___x_2731_);
if (v_isSharedCheck_2741_ == 0)
{
lean_object* v_unused_2742_; 
v_unused_2742_ = lean_ctor_get(v___x_2731_, 1);
lean_dec(v_unused_2742_);
v___x_2734_ = v___x_2731_;
v_isShared_2735_ = v_isSharedCheck_2741_;
goto v_resetjp_2733_;
}
else
{
lean_inc(v_fst_2732_);
lean_dec(v___x_2731_);
v___x_2734_ = lean_box(0);
v_isShared_2735_ = v_isSharedCheck_2741_;
goto v_resetjp_2733_;
}
v_resetjp_2733_:
{
lean_object* v___x_2736_; lean_object* v_frames_2738_; 
lean_inc(v___y_2708_);
v___x_2736_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__6(v___y_2708_, v___x_2728_);
if (v_isShared_2735_ == 0)
{
lean_ctor_set_tag(v___x_2734_, 1);
lean_ctor_set(v___x_2734_, 1, v___x_2736_);
lean_ctor_set(v___x_2734_, 0, v___y_2712_);
v_frames_2738_ = v___x_2734_;
goto v_reusejp_2737_;
}
else
{
lean_object* v_reuseFailAlloc_2740_; 
v_reuseFailAlloc_2740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2740_, 0, v___y_2712_);
lean_ctor_set(v_reuseFailAlloc_2740_, 1, v___x_2736_);
v_frames_2738_ = v_reuseFailAlloc_2740_;
goto v_reusejp_2737_;
}
v_reusejp_2737_:
{
uint8_t v___x_2739_; 
v___x_2739_ = lean_nat_dec_le(v___y_2706_, v___y_2711_);
if (v___x_2739_ == 0)
{
v___y_2681_ = v___y_2701_;
v___y_2682_ = v___x_2721_;
v___y_2683_ = v_drafts_2729_;
v___y_2684_ = v___y_2703_;
v___y_2685_ = v___y_2704_;
v___y_2686_ = v___y_2705_;
v___y_2687_ = v_cfg_2727_;
v___y_2688_ = v___y_2707_;
v___y_2689_ = v___y_2708_;
v___y_2690_ = v___y_2709_;
v___y_2691_ = v___y_2710_;
v___y_2692_ = v_frames_2738_;
v___y_2693_ = v___y_2711_;
v___y_2694_ = v_fst_2732_;
v___y_2695_ = v___y_2706_;
goto v___jp_2680_;
}
else
{
lean_dec(v___y_2706_);
lean_inc(v___y_2711_);
v___y_2681_ = v___y_2701_;
v___y_2682_ = v___x_2721_;
v___y_2683_ = v_drafts_2729_;
v___y_2684_ = v___y_2703_;
v___y_2685_ = v___y_2704_;
v___y_2686_ = v___y_2705_;
v___y_2687_ = v_cfg_2727_;
v___y_2688_ = v___y_2707_;
v___y_2689_ = v___y_2708_;
v___y_2690_ = v___y_2709_;
v___y_2691_ = v___y_2710_;
v___y_2692_ = v_frames_2738_;
v___y_2693_ = v___y_2711_;
v___y_2694_ = v_fst_2732_;
v___y_2695_ = v___y_2711_;
goto v___jp_2680_;
}
}
}
}
v___jp_2743_:
{
lean_object* v___x_2756_; lean_object* v___x_2757_; uint8_t v___x_2758_; 
v___x_2756_ = lean_mk_empty_array_with_capacity(v___y_2750_);
lean_inc(v___y_2746_);
v___x_2757_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_buildProgram_spec__2(v___y_2746_, v___x_2756_);
v___x_2758_ = l_List_isEmpty___redArg(v___y_2746_);
if (v___x_2758_ == 0)
{
lean_object* v___x_2759_; 
v___x_2759_ = lean_box(0);
v___y_2701_ = v___y_2744_;
v___y_2702_ = v___x_2757_;
v___y_2703_ = v___y_2750_;
v___y_2704_ = v___y_2751_;
v___y_2705_ = v___y_2752_;
v___y_2706_ = v___y_2754_;
v___y_2707_ = v___y_2745_;
v___y_2708_ = v___y_2746_;
v___y_2709_ = v___y_2747_;
v___y_2710_ = v___y_2748_;
v___y_2711_ = v___y_2755_;
v___y_2712_ = v___y_2749_;
v___y_2713_ = v___y_2753_;
v___y_2714_ = v___x_2759_;
goto v___jp_2700_;
}
else
{
lean_inc(v___y_2749_);
v___y_2701_ = v___y_2744_;
v___y_2702_ = v___x_2757_;
v___y_2703_ = v___y_2750_;
v___y_2704_ = v___y_2751_;
v___y_2705_ = v___y_2752_;
v___y_2706_ = v___y_2754_;
v___y_2707_ = v___y_2745_;
v___y_2708_ = v___y_2746_;
v___y_2709_ = v___y_2747_;
v___y_2710_ = v___y_2748_;
v___y_2711_ = v___y_2755_;
v___y_2712_ = v___y_2749_;
v___y_2713_ = v___y_2753_;
v___y_2714_ = v___y_2749_;
goto v___jp_2700_;
}
}
v___jp_2760_:
{
lean_object* v___x_2774_; uint8_t v___x_2775_; 
v___x_2774_ = lean_nat_div(v___y_2762_, v___y_2773_);
lean_dec(v___y_2773_);
lean_dec(v___y_2762_);
v___x_2775_ = lean_nat_dec_le(v___y_2772_, v___x_2774_);
if (v___x_2775_ == 0)
{
lean_dec(v___x_2774_);
lean_inc(v___y_2772_);
v___y_2744_ = v___y_2761_;
v___y_2745_ = v___y_2763_;
v___y_2746_ = v___y_2764_;
v___y_2747_ = v___y_2765_;
v___y_2748_ = v___y_2766_;
v___y_2749_ = v___y_2767_;
v___y_2750_ = v___y_2768_;
v___y_2751_ = v___y_2769_;
v___y_2752_ = v___y_2770_;
v___y_2753_ = v___y_2771_;
v___y_2754_ = v___y_2772_;
v___y_2755_ = v___y_2772_;
goto v___jp_2743_;
}
else
{
v___y_2744_ = v___y_2761_;
v___y_2745_ = v___y_2763_;
v___y_2746_ = v___y_2764_;
v___y_2747_ = v___y_2765_;
v___y_2748_ = v___y_2766_;
v___y_2749_ = v___y_2767_;
v___y_2750_ = v___y_2768_;
v___y_2751_ = v___y_2769_;
v___y_2752_ = v___y_2770_;
v___y_2753_ = v___y_2771_;
v___y_2754_ = v___y_2772_;
v___y_2755_ = v___x_2774_;
goto v___jp_2743_;
}
}
v___jp_2776_:
{
lean_object* v___x_2783_; lean_object* v___x_2784_; lean_object* v___x_2785_; lean_object* v_beats_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; uint8_t v___x_2792_; 
v___x_2783_ = lean_unsigned_to_nat(0u);
v___x_2784_ = lean_box(0);
lean_inc(v___y_2782_);
v___x_2785_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__1(v___y_2782_, v___x_2784_);
v_beats_2786_ = lp_choreo_List_foldl___at___00Choreo_addDrafts_spec__1(v___x_2783_, v___x_2785_);
v___x_2787_ = lean_unsigned_to_nat(1u);
v___x_2788_ = lean_unsigned_to_nat(60u);
v___x_2789_ = lean_nat_mul(v_beats_2786_, v___x_2788_);
v___x_2790_ = lean_nat_shiftr(v___y_2777_, v___x_2787_);
v___x_2791_ = lean_nat_add(v___x_2789_, v___x_2790_);
lean_dec(v___x_2790_);
v___x_2792_ = lean_nat_dec_le(v___x_2787_, v___y_2777_);
if (v___x_2792_ == 0)
{
lean_dec(v___y_2777_);
v___y_2761_ = v___x_2784_;
v___y_2762_ = v___x_2791_;
v___y_2763_ = v___x_2789_;
v___y_2764_ = v___y_2782_;
v___y_2765_ = v___y_2778_;
v___y_2766_ = v___y_2779_;
v___y_2767_ = v___y_2780_;
v___y_2768_ = v___x_2783_;
v___y_2769_ = v___x_2785_;
v___y_2770_ = v___y_2781_;
v___y_2771_ = v_beats_2786_;
v___y_2772_ = v___x_2787_;
v___y_2773_ = v___x_2787_;
goto v___jp_2760_;
}
else
{
v___y_2761_ = v___x_2784_;
v___y_2762_ = v___x_2791_;
v___y_2763_ = v___x_2789_;
v___y_2764_ = v___y_2782_;
v___y_2765_ = v___y_2778_;
v___y_2766_ = v___y_2779_;
v___y_2767_ = v___y_2780_;
v___y_2768_ = v___x_2783_;
v___y_2769_ = v___x_2785_;
v___y_2770_ = v___y_2781_;
v___y_2771_ = v_beats_2786_;
v___y_2772_ = v___x_2787_;
v___y_2773_ = v___y_2777_;
goto v___jp_2760_;
}
}
v___jp_2801_:
{
lean_object* v___x_2803_; lean_object* v___x_2804_; lean_object* v___x_2805_; lean_object* v_steps_2806_; lean_object* v___x_2807_; uint8_t v___x_2808_; 
v___x_2803_ = lean_box(0);
lean_inc(v___y_2802_);
v___x_2804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2804_, 0, v___y_2802_);
lean_ctor_set(v___x_2804_, 1, v___x_2803_);
lean_inc(v_ops_2799_);
lean_inc_ref(v_sp_2650_);
v___x_2805_ = lp_choreo_List_foldl___at___00Choreo_buildProgram_spec__0(v_sp_2650_, v___x_2804_, v_ops_2799_);
v_steps_2806_ = lean_ctor_get(v___x_2805_, 1);
lean_inc(v_steps_2806_);
lean_dec_ref(v___x_2805_);
v___x_2807_ = ((lean_object*)(lp_choreo_Choreo_buildProgram___redArg___closed__1));
v___x_2808_ = lean_string_dec_eq(v_transform_2800_, v___x_2807_);
if (v___x_2808_ == 0)
{
lean_object* v___x_2809_; 
lean_inc_ref(v_transform_2800_);
v___x_2809_ = lp_choreo_Choreo_applyTransform(v_sp_2650_, v_transform_2800_, v_steps_2806_);
lean_dec_ref(v_transform_2800_);
v___y_2777_ = v_bpm_2794_;
v___y_2778_ = v_n_2793_;
v___y_2779_ = v_genre_2796_;
v___y_2780_ = v___y_2802_;
v___y_2781_ = v_gap_2795_;
v___y_2782_ = v___x_2809_;
goto v___jp_2776_;
}
else
{
lean_object* v___x_2810_; 
v___x_2810_ = lp_choreo_Choreo_reverseSteps(v_sp_2650_, v_steps_2806_);
v___y_2777_ = v_bpm_2794_;
v___y_2778_ = v_n_2793_;
v___y_2779_ = v_genre_2796_;
v___y_2780_ = v___y_2802_;
v___y_2781_ = v_gap_2795_;
v___y_2782_ = v___x_2810_;
goto v___jp_2776_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram(lean_object* v_sp_2813_, lean_object* v___names_2814_){
_start:
{
lean_object* v___x_2815_; 
v___x_2815_ = lp_choreo_Choreo_buildProgram___redArg(v_sp_2813_);
return v___x_2815_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_buildProgram___boxed(lean_object* v_sp_2816_, lean_object* v___names_2817_){
_start:
{
lean_object* v_res_2818_; 
v_res_2818_ = lp_choreo_Choreo_buildProgram(v_sp_2816_, v___names_2817_);
lean_dec_ref(v___names_2817_);
return v_res_2818_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(lean_object* v_a_2819_, lean_object* v_a_2820_){
_start:
{
if (lean_obj_tag(v_a_2819_) == 0)
{
lean_object* v___x_2821_; 
v___x_2821_ = lean_array_to_list(v_a_2820_);
return v___x_2821_;
}
else
{
lean_object* v_head_2822_; 
v_head_2822_ = lean_ctor_get(v_a_2819_, 0);
if (lean_obj_tag(v_head_2822_) == 4)
{
lean_object* v_tail_2823_; lean_object* v___x_2825_; uint8_t v_isShared_2826_; uint8_t v_isSharedCheck_2847_; 
lean_inc_ref(v_head_2822_);
v_tail_2823_ = lean_ctor_get(v_a_2819_, 1);
v_isSharedCheck_2847_ = !lean_is_exclusive(v_a_2819_);
if (v_isSharedCheck_2847_ == 0)
{
lean_object* v_unused_2848_; 
v_unused_2848_ = lean_ctor_get(v_a_2819_, 0);
lean_dec(v_unused_2848_);
v___x_2825_ = v_a_2819_;
v_isShared_2826_ = v_isSharedCheck_2847_;
goto v_resetjp_2824_;
}
else
{
lean_inc(v_tail_2823_);
lean_dec(v_a_2819_);
v___x_2825_ = lean_box(0);
v_isShared_2826_ = v_isSharedCheck_2847_;
goto v_resetjp_2824_;
}
v_resetjp_2824_:
{
lean_object* v_elems_2827_; lean_object* v___x_2828_; lean_object* v___x_2829_; uint8_t v___x_2830_; 
v_elems_2827_ = lean_ctor_get(v_head_2822_, 0);
lean_inc_ref(v_elems_2827_);
lean_dec_ref_known(v_head_2822_, 1);
v___x_2828_ = lean_array_get_size(v_elems_2827_);
v___x_2829_ = lean_unsigned_to_nat(2u);
v___x_2830_ = lean_nat_dec_eq(v___x_2828_, v___x_2829_);
if (v___x_2830_ == 0)
{
lean_dec_ref(v_elems_2827_);
lean_del_object(v___x_2825_);
v_a_2819_ = v_tail_2823_;
goto _start;
}
else
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2832_ = lean_unsigned_to_nat(0u);
v___x_2833_ = lean_array_fget_borrowed(v_elems_2827_, v___x_2832_);
lean_inc(v___x_2833_);
v___x_2834_ = l_Lean_Json_getInt_x3f(v___x_2833_);
if (lean_obj_tag(v___x_2834_) == 1)
{
lean_object* v_a_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; 
v_a_2835_ = lean_ctor_get(v___x_2834_, 0);
lean_inc(v_a_2835_);
lean_dec_ref_known(v___x_2834_, 1);
v___x_2836_ = lean_unsigned_to_nat(1u);
v___x_2837_ = lean_array_fget(v_elems_2827_, v___x_2836_);
lean_dec_ref(v_elems_2827_);
v___x_2838_ = l_Lean_Json_getInt_x3f(v___x_2837_);
if (lean_obj_tag(v___x_2838_) == 1)
{
lean_object* v_a_2839_; lean_object* v___x_2841_; 
v_a_2839_ = lean_ctor_get(v___x_2838_, 0);
lean_inc(v_a_2839_);
lean_dec_ref_known(v___x_2838_, 1);
if (v_isShared_2826_ == 0)
{
lean_ctor_set_tag(v___x_2825_, 0);
lean_ctor_set(v___x_2825_, 1, v_a_2839_);
lean_ctor_set(v___x_2825_, 0, v_a_2835_);
v___x_2841_ = v___x_2825_;
goto v_reusejp_2840_;
}
else
{
lean_object* v_reuseFailAlloc_2844_; 
v_reuseFailAlloc_2844_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2844_, 0, v_a_2835_);
lean_ctor_set(v_reuseFailAlloc_2844_, 1, v_a_2839_);
v___x_2841_ = v_reuseFailAlloc_2844_;
goto v_reusejp_2840_;
}
v_reusejp_2840_:
{
lean_object* v___x_2842_; 
v___x_2842_ = lean_array_push(v_a_2820_, v___x_2841_);
v_a_2819_ = v_tail_2823_;
v_a_2820_ = v___x_2842_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_2838_);
lean_dec(v_a_2835_);
lean_del_object(v___x_2825_);
v_a_2819_ = v_tail_2823_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_2834_);
lean_dec_ref(v_elems_2827_);
lean_del_object(v___x_2825_);
v_a_2819_ = v_tail_2823_;
goto _start;
}
}
}
}
else
{
lean_object* v_tail_2849_; 
v_tail_2849_ = lean_ctor_get(v_a_2819_, 1);
lean_inc(v_tail_2849_);
lean_dec_ref_known(v_a_2819_, 2);
v_a_2819_ = v_tail_2849_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jsonState(lean_object* v_j_2853_){
_start:
{
if (lean_obj_tag(v_j_2853_) == 4)
{
lean_object* v_elems_2854_; lean_object* v___x_2856_; uint8_t v_isShared_2857_; uint8_t v_isSharedCheck_2864_; 
v_elems_2854_ = lean_ctor_get(v_j_2853_, 0);
v_isSharedCheck_2864_ = !lean_is_exclusive(v_j_2853_);
if (v_isSharedCheck_2864_ == 0)
{
v___x_2856_ = v_j_2853_;
v_isShared_2857_ = v_isSharedCheck_2864_;
goto v_resetjp_2855_;
}
else
{
lean_inc(v_elems_2854_);
lean_dec(v_j_2853_);
v___x_2856_ = lean_box(0);
v_isShared_2857_ = v_isSharedCheck_2864_;
goto v_resetjp_2855_;
}
v_resetjp_2855_:
{
lean_object* v___x_2858_; lean_object* v___x_2859_; lean_object* v___x_2860_; lean_object* v___x_2862_; 
v___x_2858_ = lean_array_to_list(v_elems_2854_);
v___x_2859_ = ((lean_object*)(lp_choreo_Choreo_jsonState___closed__0));
v___x_2860_ = lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(v___x_2858_, v___x_2859_);
if (v_isShared_2857_ == 0)
{
lean_ctor_set_tag(v___x_2856_, 1);
lean_ctor_set(v___x_2856_, 0, v___x_2860_);
v___x_2862_ = v___x_2856_;
goto v_reusejp_2861_;
}
else
{
lean_object* v_reuseFailAlloc_2863_; 
v_reuseFailAlloc_2863_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_2863_, 0, v___x_2860_);
v___x_2862_ = v_reuseFailAlloc_2863_;
goto v_reusejp_2861_;
}
v_reusejp_2861_:
{
return v___x_2862_;
}
}
}
else
{
lean_object* v___x_2865_; 
lean_dec(v_j_2853_);
v___x_2865_ = lean_box(0);
return v___x_2865_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(lean_object* v_j_2866_, lean_object* v_k_2867_){
_start:
{
lean_object* v___x_2868_; lean_object* v___x_2869_; 
v___x_2868_ = l_Lean_Json_getObjValD(v_j_2866_, v_k_2867_);
v___x_2869_ = l_Lean_Json_getStr_x3f(v___x_2868_);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0___boxed(lean_object* v_j_2870_, lean_object* v_k_2871_){
_start:
{
lean_object* v_res_2872_; 
v_res_2872_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_j_2870_, v_k_2871_);
lean_dec_ref(v_k_2871_);
return v_res_2872_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(lean_object* v_j_2873_, lean_object* v_k_2874_){
_start:
{
lean_object* v___x_2875_; lean_object* v___x_2876_; 
v___x_2875_ = l_Lean_Json_getObjValD(v_j_2873_, v_k_2874_);
v___x_2876_ = l_Lean_Json_getNat_x3f(v___x_2875_);
return v___x_2876_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1___boxed(lean_object* v_j_2877_, lean_object* v_k_2878_){
_start:
{
lean_object* v_res_2879_; 
v_res_2879_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_j_2877_, v_k_2878_);
lean_dec_ref(v_k_2878_);
return v_res_2879_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(lean_object* v_j_2880_, lean_object* v_k_2881_){
_start:
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2882_ = l_Lean_Json_getObjValD(v_j_2880_, v_k_2881_);
v___x_2883_ = l_Lean_Json_getInt_x3f(v___x_2882_);
return v___x_2883_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2___boxed(lean_object* v_j_2884_, lean_object* v_k_2885_){
_start:
{
lean_object* v_res_2886_; 
v_res_2886_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_j_2884_, v_k_2885_);
lean_dec_ref(v_k_2885_);
return v_res_2886_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(lean_object* v_j_2887_, lean_object* v_k_2888_){
_start:
{
lean_object* v___x_2889_; lean_object* v___x_2890_; 
v___x_2889_ = l_Lean_Json_getObjValD(v_j_2887_, v_k_2888_);
v___x_2890_ = l_Lean_Json_getBool_x3f(v___x_2889_);
lean_dec(v___x_2889_);
return v___x_2890_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3___boxed(lean_object* v_j_2891_, lean_object* v_k_2892_){
_start:
{
lean_object* v_res_2893_; 
v_res_2893_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_j_2891_, v_k_2892_);
lean_dec_ref(v_k_2892_);
return v_res_2893_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4(lean_object* v_next_2895_, lean_object* v_snd_2896_, lean_object* v_fst_2897_, lean_object* v_a_2898_, lean_object* v_a_2899_){
_start:
{
if (lean_obj_tag(v_a_2898_) == 0)
{
lean_object* v___x_2900_; 
lean_dec(v_fst_2897_);
lean_dec(v_snd_2896_);
lean_dec_ref(v_next_2895_);
v___x_2900_ = l_List_reverse___redArg(v_a_2899_);
return v___x_2900_;
}
else
{
lean_object* v_head_2901_; lean_object* v_tail_2902_; lean_object* v___x_2904_; uint8_t v_isShared_2905_; uint8_t v_isSharedCheck_2943_; 
v_head_2901_ = lean_ctor_get(v_a_2898_, 0);
v_tail_2902_ = lean_ctor_get(v_a_2898_, 1);
v_isSharedCheck_2943_ = !lean_is_exclusive(v_a_2898_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2904_ = v_a_2898_;
v_isShared_2905_ = v_isSharedCheck_2943_;
goto v_resetjp_2903_;
}
else
{
lean_inc(v_tail_2902_);
lean_inc(v_head_2901_);
lean_dec(v_a_2898_);
v___x_2904_ = lean_box(0);
v_isShared_2905_ = v_isSharedCheck_2943_;
goto v_resetjp_2903_;
}
v_resetjp_2903_:
{
lean_object* v___y_2907_; lean_object* v_kind_2912_; lean_object* v_section_x27_2913_; lean_object* v_title_2914_; lean_object* v_shape_2915_; lean_object* v_counts_2916_; lean_object* v_quarters_2917_; uint8_t v_ccw_2918_; lean_object* v_dx_2919_; lean_object* v_dy_2920_; lean_object* v_num_2921_; lean_object* v_den_2922_; lean_object* v_step_2923_; lean_object* v_places_2924_; lean_object* v_line_2925_; lean_object* v_leftShape_2926_; lean_object* v_rightShape_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2941_; 
v_kind_2912_ = lean_ctor_get(v_head_2901_, 0);
v_section_x27_2913_ = lean_ctor_get(v_head_2901_, 1);
v_title_2914_ = lean_ctor_get(v_head_2901_, 2);
v_shape_2915_ = lean_ctor_get(v_head_2901_, 3);
v_counts_2916_ = lean_ctor_get(v_head_2901_, 4);
v_quarters_2917_ = lean_ctor_get(v_head_2901_, 5);
v_ccw_2918_ = lean_ctor_get_uint8(v_head_2901_, sizeof(void*)*16);
v_dx_2919_ = lean_ctor_get(v_head_2901_, 6);
v_dy_2920_ = lean_ctor_get(v_head_2901_, 7);
v_num_2921_ = lean_ctor_get(v_head_2901_, 8);
v_den_2922_ = lean_ctor_get(v_head_2901_, 9);
v_step_2923_ = lean_ctor_get(v_head_2901_, 10);
v_places_2924_ = lean_ctor_get(v_head_2901_, 11);
v_line_2925_ = lean_ctor_get(v_head_2901_, 12);
v_leftShape_2926_ = lean_ctor_get(v_head_2901_, 13);
v_rightShape_2927_ = lean_ctor_get(v_head_2901_, 14);
v_isSharedCheck_2941_ = !lean_is_exclusive(v_head_2901_);
if (v_isSharedCheck_2941_ == 0)
{
lean_object* v_unused_2942_; 
v_unused_2942_ = lean_ctor_get(v_head_2901_, 15);
lean_dec(v_unused_2942_);
v___x_2929_ = v_head_2901_;
v_isShared_2930_ = v_isSharedCheck_2941_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_rightShape_2927_);
lean_inc(v_leftShape_2926_);
lean_inc(v_line_2925_);
lean_inc(v_places_2924_);
lean_inc(v_step_2923_);
lean_inc(v_den_2922_);
lean_inc(v_num_2921_);
lean_inc(v_dy_2920_);
lean_inc(v_dx_2919_);
lean_inc(v_quarters_2917_);
lean_inc(v_counts_2916_);
lean_inc(v_shape_2915_);
lean_inc(v_title_2914_);
lean_inc(v_section_x27_2913_);
lean_inc(v_kind_2912_);
lean_dec(v_head_2901_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2941_;
goto v_resetjp_2928_;
}
v___jp_2906_:
{
lean_object* v___x_2909_; 
if (v_isShared_2905_ == 0)
{
lean_ctor_set(v___x_2904_, 1, v_a_2899_);
lean_ctor_set(v___x_2904_, 0, v___y_2907_);
v___x_2909_ = v___x_2904_;
goto v_reusejp_2908_;
}
else
{
lean_object* v_reuseFailAlloc_2911_; 
v_reuseFailAlloc_2911_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2911_, 0, v___y_2907_);
lean_ctor_set(v_reuseFailAlloc_2911_, 1, v_a_2899_);
v___x_2909_ = v_reuseFailAlloc_2911_;
goto v_reusejp_2908_;
}
v_reusejp_2908_:
{
v_a_2898_ = v_tail_2902_;
v_a_2899_ = v___x_2909_;
goto _start;
}
}
v_resetjp_2928_:
{
lean_object* v___x_2931_; lean_object* v___x_2932_; 
v___x_2931_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc(v_fst_2897_);
v___x_2932_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_2897_, v___x_2931_);
if (lean_obj_tag(v___x_2932_) == 0)
{
lean_object* v___x_2933_; lean_object* v___x_2935_; 
lean_dec_ref_known(v___x_2932_, 1);
lean_inc_ref(v_next_2895_);
lean_inc(v_snd_2896_);
v___x_2933_ = lean_apply_1(v_next_2895_, v_snd_2896_);
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 15, v___x_2933_);
v___x_2935_ = v___x_2929_;
goto v_reusejp_2934_;
}
else
{
lean_object* v_reuseFailAlloc_2936_; 
v_reuseFailAlloc_2936_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_2936_, 0, v_kind_2912_);
lean_ctor_set(v_reuseFailAlloc_2936_, 1, v_section_x27_2913_);
lean_ctor_set(v_reuseFailAlloc_2936_, 2, v_title_2914_);
lean_ctor_set(v_reuseFailAlloc_2936_, 3, v_shape_2915_);
lean_ctor_set(v_reuseFailAlloc_2936_, 4, v_counts_2916_);
lean_ctor_set(v_reuseFailAlloc_2936_, 5, v_quarters_2917_);
lean_ctor_set(v_reuseFailAlloc_2936_, 6, v_dx_2919_);
lean_ctor_set(v_reuseFailAlloc_2936_, 7, v_dy_2920_);
lean_ctor_set(v_reuseFailAlloc_2936_, 8, v_num_2921_);
lean_ctor_set(v_reuseFailAlloc_2936_, 9, v_den_2922_);
lean_ctor_set(v_reuseFailAlloc_2936_, 10, v_step_2923_);
lean_ctor_set(v_reuseFailAlloc_2936_, 11, v_places_2924_);
lean_ctor_set(v_reuseFailAlloc_2936_, 12, v_line_2925_);
lean_ctor_set(v_reuseFailAlloc_2936_, 13, v_leftShape_2926_);
lean_ctor_set(v_reuseFailAlloc_2936_, 14, v_rightShape_2927_);
lean_ctor_set(v_reuseFailAlloc_2936_, 15, v___x_2933_);
lean_ctor_set_uint8(v_reuseFailAlloc_2936_, sizeof(void*)*16, v_ccw_2918_);
v___x_2935_ = v_reuseFailAlloc_2936_;
goto v_reusejp_2934_;
}
v_reusejp_2934_:
{
v___y_2907_ = v___x_2935_;
goto v___jp_2906_;
}
}
else
{
lean_object* v_a_2937_; lean_object* v___x_2939_; 
v_a_2937_ = lean_ctor_get(v___x_2932_, 0);
lean_inc(v_a_2937_);
lean_dec_ref_known(v___x_2932_, 1);
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 15, v_a_2937_);
v___x_2939_ = v___x_2929_;
goto v_reusejp_2938_;
}
else
{
lean_object* v_reuseFailAlloc_2940_; 
v_reuseFailAlloc_2940_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_2940_, 0, v_kind_2912_);
lean_ctor_set(v_reuseFailAlloc_2940_, 1, v_section_x27_2913_);
lean_ctor_set(v_reuseFailAlloc_2940_, 2, v_title_2914_);
lean_ctor_set(v_reuseFailAlloc_2940_, 3, v_shape_2915_);
lean_ctor_set(v_reuseFailAlloc_2940_, 4, v_counts_2916_);
lean_ctor_set(v_reuseFailAlloc_2940_, 5, v_quarters_2917_);
lean_ctor_set(v_reuseFailAlloc_2940_, 6, v_dx_2919_);
lean_ctor_set(v_reuseFailAlloc_2940_, 7, v_dy_2920_);
lean_ctor_set(v_reuseFailAlloc_2940_, 8, v_num_2921_);
lean_ctor_set(v_reuseFailAlloc_2940_, 9, v_den_2922_);
lean_ctor_set(v_reuseFailAlloc_2940_, 10, v_step_2923_);
lean_ctor_set(v_reuseFailAlloc_2940_, 11, v_places_2924_);
lean_ctor_set(v_reuseFailAlloc_2940_, 12, v_line_2925_);
lean_ctor_set(v_reuseFailAlloc_2940_, 13, v_leftShape_2926_);
lean_ctor_set(v_reuseFailAlloc_2940_, 14, v_rightShape_2927_);
lean_ctor_set(v_reuseFailAlloc_2940_, 15, v_a_2937_);
lean_ctor_set_uint8(v_reuseFailAlloc_2940_, sizeof(void*)*16, v_ccw_2918_);
v___x_2939_ = v_reuseFailAlloc_2940_;
goto v_reusejp_2938_;
}
v_reusejp_2938_:
{
v___y_2907_ = v___x_2939_;
goto v___jp_2906_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_readOps_spec__4(lean_object* v_next_2944_, lean_object* v_snd_2945_, lean_object* v_fst_2946_, lean_object* v_a_2947_, lean_object* v_a_2948_){
_start:
{
if (lean_obj_tag(v_a_2947_) == 0)
{
lean_object* v___x_2949_; 
lean_dec(v_fst_2946_);
lean_dec(v_snd_2945_);
lean_dec_ref(v_next_2944_);
v___x_2949_ = l_List_reverse___redArg(v_a_2948_);
return v___x_2949_;
}
else
{
lean_object* v_head_2950_; lean_object* v_tail_2951_; lean_object* v___x_2953_; uint8_t v_isShared_2954_; uint8_t v_isSharedCheck_2992_; 
v_head_2950_ = lean_ctor_get(v_a_2947_, 0);
v_tail_2951_ = lean_ctor_get(v_a_2947_, 1);
v_isSharedCheck_2992_ = !lean_is_exclusive(v_a_2947_);
if (v_isSharedCheck_2992_ == 0)
{
v___x_2953_ = v_a_2947_;
v_isShared_2954_ = v_isSharedCheck_2992_;
goto v_resetjp_2952_;
}
else
{
lean_inc(v_tail_2951_);
lean_inc(v_head_2950_);
lean_dec(v_a_2947_);
v___x_2953_ = lean_box(0);
v_isShared_2954_ = v_isSharedCheck_2992_;
goto v_resetjp_2952_;
}
v_resetjp_2952_:
{
lean_object* v___y_2956_; lean_object* v_kind_2961_; lean_object* v_section_x27_2962_; lean_object* v_title_2963_; lean_object* v_shape_2964_; lean_object* v_counts_2965_; lean_object* v_quarters_2966_; uint8_t v_ccw_2967_; lean_object* v_dx_2968_; lean_object* v_dy_2969_; lean_object* v_num_2970_; lean_object* v_den_2971_; lean_object* v_step_2972_; lean_object* v_places_2973_; lean_object* v_line_2974_; lean_object* v_leftShape_2975_; lean_object* v_rightShape_2976_; lean_object* v___x_2978_; uint8_t v_isShared_2979_; uint8_t v_isSharedCheck_2990_; 
v_kind_2961_ = lean_ctor_get(v_head_2950_, 0);
v_section_x27_2962_ = lean_ctor_get(v_head_2950_, 1);
v_title_2963_ = lean_ctor_get(v_head_2950_, 2);
v_shape_2964_ = lean_ctor_get(v_head_2950_, 3);
v_counts_2965_ = lean_ctor_get(v_head_2950_, 4);
v_quarters_2966_ = lean_ctor_get(v_head_2950_, 5);
v_ccw_2967_ = lean_ctor_get_uint8(v_head_2950_, sizeof(void*)*16);
v_dx_2968_ = lean_ctor_get(v_head_2950_, 6);
v_dy_2969_ = lean_ctor_get(v_head_2950_, 7);
v_num_2970_ = lean_ctor_get(v_head_2950_, 8);
v_den_2971_ = lean_ctor_get(v_head_2950_, 9);
v_step_2972_ = lean_ctor_get(v_head_2950_, 10);
v_places_2973_ = lean_ctor_get(v_head_2950_, 11);
v_line_2974_ = lean_ctor_get(v_head_2950_, 12);
v_leftShape_2975_ = lean_ctor_get(v_head_2950_, 13);
v_rightShape_2976_ = lean_ctor_get(v_head_2950_, 14);
v_isSharedCheck_2990_ = !lean_is_exclusive(v_head_2950_);
if (v_isSharedCheck_2990_ == 0)
{
lean_object* v_unused_2991_; 
v_unused_2991_ = lean_ctor_get(v_head_2950_, 15);
lean_dec(v_unused_2991_);
v___x_2978_ = v_head_2950_;
v_isShared_2979_ = v_isSharedCheck_2990_;
goto v_resetjp_2977_;
}
else
{
lean_inc(v_rightShape_2976_);
lean_inc(v_leftShape_2975_);
lean_inc(v_line_2974_);
lean_inc(v_places_2973_);
lean_inc(v_step_2972_);
lean_inc(v_den_2971_);
lean_inc(v_num_2970_);
lean_inc(v_dy_2969_);
lean_inc(v_dx_2968_);
lean_inc(v_quarters_2966_);
lean_inc(v_counts_2965_);
lean_inc(v_shape_2964_);
lean_inc(v_title_2963_);
lean_inc(v_section_x27_2962_);
lean_inc(v_kind_2961_);
lean_dec(v_head_2950_);
v___x_2978_ = lean_box(0);
v_isShared_2979_ = v_isSharedCheck_2990_;
goto v_resetjp_2977_;
}
v___jp_2955_:
{
lean_object* v___x_2958_; 
if (v_isShared_2954_ == 0)
{
lean_ctor_set(v___x_2953_, 1, v_a_2948_);
lean_ctor_set(v___x_2953_, 0, v___y_2956_);
v___x_2958_ = v___x_2953_;
goto v_reusejp_2957_;
}
else
{
lean_object* v_reuseFailAlloc_2960_; 
v_reuseFailAlloc_2960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2960_, 0, v___y_2956_);
lean_ctor_set(v_reuseFailAlloc_2960_, 1, v_a_2948_);
v___x_2958_ = v_reuseFailAlloc_2960_;
goto v_reusejp_2957_;
}
v_reusejp_2957_:
{
lean_object* v___x_2959_; 
v___x_2959_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4(v_next_2944_, v_snd_2945_, v_fst_2946_, v_tail_2951_, v___x_2958_);
return v___x_2959_;
}
}
v_resetjp_2977_:
{
lean_object* v___x_2980_; lean_object* v___x_2981_; 
v___x_2980_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc(v_fst_2946_);
v___x_2981_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_2946_, v___x_2980_);
if (lean_obj_tag(v___x_2981_) == 0)
{
lean_object* v___x_2982_; lean_object* v___x_2984_; 
lean_dec_ref_known(v___x_2981_, 1);
lean_inc_ref(v_next_2944_);
lean_inc(v_snd_2945_);
v___x_2982_ = lean_apply_1(v_next_2944_, v_snd_2945_);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 15, v___x_2982_);
v___x_2984_ = v___x_2978_;
goto v_reusejp_2983_;
}
else
{
lean_object* v_reuseFailAlloc_2985_; 
v_reuseFailAlloc_2985_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_2985_, 0, v_kind_2961_);
lean_ctor_set(v_reuseFailAlloc_2985_, 1, v_section_x27_2962_);
lean_ctor_set(v_reuseFailAlloc_2985_, 2, v_title_2963_);
lean_ctor_set(v_reuseFailAlloc_2985_, 3, v_shape_2964_);
lean_ctor_set(v_reuseFailAlloc_2985_, 4, v_counts_2965_);
lean_ctor_set(v_reuseFailAlloc_2985_, 5, v_quarters_2966_);
lean_ctor_set(v_reuseFailAlloc_2985_, 6, v_dx_2968_);
lean_ctor_set(v_reuseFailAlloc_2985_, 7, v_dy_2969_);
lean_ctor_set(v_reuseFailAlloc_2985_, 8, v_num_2970_);
lean_ctor_set(v_reuseFailAlloc_2985_, 9, v_den_2971_);
lean_ctor_set(v_reuseFailAlloc_2985_, 10, v_step_2972_);
lean_ctor_set(v_reuseFailAlloc_2985_, 11, v_places_2973_);
lean_ctor_set(v_reuseFailAlloc_2985_, 12, v_line_2974_);
lean_ctor_set(v_reuseFailAlloc_2985_, 13, v_leftShape_2975_);
lean_ctor_set(v_reuseFailAlloc_2985_, 14, v_rightShape_2976_);
lean_ctor_set(v_reuseFailAlloc_2985_, 15, v___x_2982_);
lean_ctor_set_uint8(v_reuseFailAlloc_2985_, sizeof(void*)*16, v_ccw_2967_);
v___x_2984_ = v_reuseFailAlloc_2985_;
goto v_reusejp_2983_;
}
v_reusejp_2983_:
{
v___y_2956_ = v___x_2984_;
goto v___jp_2955_;
}
}
else
{
lean_object* v_a_2986_; lean_object* v___x_2988_; 
v_a_2986_ = lean_ctor_get(v___x_2981_, 0);
lean_inc(v_a_2986_);
lean_dec_ref_known(v___x_2981_, 1);
if (v_isShared_2979_ == 0)
{
lean_ctor_set(v___x_2978_, 15, v_a_2986_);
v___x_2988_ = v___x_2978_;
goto v_reusejp_2987_;
}
else
{
lean_object* v_reuseFailAlloc_2989_; 
v_reuseFailAlloc_2989_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v_reuseFailAlloc_2989_, 0, v_kind_2961_);
lean_ctor_set(v_reuseFailAlloc_2989_, 1, v_section_x27_2962_);
lean_ctor_set(v_reuseFailAlloc_2989_, 2, v_title_2963_);
lean_ctor_set(v_reuseFailAlloc_2989_, 3, v_shape_2964_);
lean_ctor_set(v_reuseFailAlloc_2989_, 4, v_counts_2965_);
lean_ctor_set(v_reuseFailAlloc_2989_, 5, v_quarters_2966_);
lean_ctor_set(v_reuseFailAlloc_2989_, 6, v_dx_2968_);
lean_ctor_set(v_reuseFailAlloc_2989_, 7, v_dy_2969_);
lean_ctor_set(v_reuseFailAlloc_2989_, 8, v_num_2970_);
lean_ctor_set(v_reuseFailAlloc_2989_, 9, v_den_2971_);
lean_ctor_set(v_reuseFailAlloc_2989_, 10, v_step_2972_);
lean_ctor_set(v_reuseFailAlloc_2989_, 11, v_places_2973_);
lean_ctor_set(v_reuseFailAlloc_2989_, 12, v_line_2974_);
lean_ctor_set(v_reuseFailAlloc_2989_, 13, v_leftShape_2975_);
lean_ctor_set(v_reuseFailAlloc_2989_, 14, v_rightShape_2976_);
lean_ctor_set(v_reuseFailAlloc_2989_, 15, v_a_2986_);
lean_ctor_set_uint8(v_reuseFailAlloc_2989_, sizeof(void*)*16, v_ccw_2967_);
v___x_2988_ = v_reuseFailAlloc_2989_;
goto v_reusejp_2987_;
}
v_reusejp_2987_:
{
v___y_2956_ = v___x_2988_;
goto v___jp_2955_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(lean_object* v_next_2993_, lean_object* v_snd_2994_, lean_object* v_fst_2995_, lean_object* v___y_2996_, lean_object* v_a_2997_, lean_object* v_a_2998_){
_start:
{
if (lean_obj_tag(v_a_2997_) == 0)
{
lean_object* v___x_2999_; 
lean_dec(v___y_2996_);
lean_dec(v_fst_2995_);
lean_dec(v_snd_2994_);
lean_dec_ref(v_next_2993_);
v___x_2999_ = lean_array_to_list(v_a_2998_);
return v___x_2999_;
}
else
{
lean_object* v_tail_3000_; lean_object* v___x_3001_; lean_object* v___x_3002_; lean_object* v___x_3003_; 
v_tail_3000_ = lean_ctor_get(v_a_2997_, 1);
v___x_3001_ = lean_box(0);
lean_inc(v___y_2996_);
lean_inc(v_fst_2995_);
lean_inc(v_snd_2994_);
lean_inc_ref(v_next_2993_);
v___x_3002_ = lp_choreo_List_mapTR_loop___at___00Choreo_readOps_spec__4(v_next_2993_, v_snd_2994_, v_fst_2995_, v___y_2996_, v___x_3001_);
v___x_3003_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2998_, v___x_3002_);
v_a_2997_ = v_tail_3000_;
v_a_2998_ = v___x_3003_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5___boxed(lean_object* v_next_3005_, lean_object* v_snd_3006_, lean_object* v_fst_3007_, lean_object* v___y_3008_, lean_object* v_a_3009_, lean_object* v_a_3010_){
_start:
{
lean_object* v_res_3011_; 
v_res_3011_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3005_, v_snd_3006_, v_fst_3007_, v___y_3008_, v_a_3009_, v_a_3010_);
lean_dec(v_a_3009_);
return v_res_3011_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(lean_object* v_fst_3012_, lean_object* v_f_3013_, lean_object* v_d_3014_){
_start:
{
lean_object* v___x_3015_; 
v___x_3015_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_fst_3012_, v_f_3013_);
if (lean_obj_tag(v___x_3015_) == 0)
{
lean_dec_ref_known(v___x_3015_, 1);
lean_inc_ref(v_d_3014_);
return v_d_3014_;
}
else
{
lean_object* v_a_3016_; 
v_a_3016_ = lean_ctor_get(v___x_3015_, 0);
lean_inc(v_a_3016_);
lean_dec_ref_known(v___x_3015_, 1);
return v_a_3016_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0___boxed(lean_object* v_fst_3017_, lean_object* v_f_3018_, lean_object* v_d_3019_){
_start:
{
lean_object* v_res_3020_; 
v_res_3020_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3017_, v_f_3018_, v_d_3019_);
lean_dec_ref(v_d_3019_);
lean_dec_ref(v_f_3018_);
return v_res_3020_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(lean_object* v_fst_3021_, lean_object* v_f_3022_, lean_object* v_d_3023_){
_start:
{
lean_object* v___x_3024_; 
v___x_3024_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_fst_3021_, v_f_3022_);
if (lean_obj_tag(v___x_3024_) == 0)
{
lean_dec_ref_known(v___x_3024_, 1);
lean_inc(v_d_3023_);
return v_d_3023_;
}
else
{
lean_object* v_a_3025_; 
v_a_3025_ = lean_ctor_get(v___x_3024_, 0);
lean_inc(v_a_3025_);
lean_dec_ref_known(v___x_3024_, 1);
return v_a_3025_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2___boxed(lean_object* v_fst_3026_, lean_object* v_f_3027_, lean_object* v_d_3028_){
_start:
{
lean_object* v_res_3029_; 
v_res_3029_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3026_, v_f_3027_, v_d_3028_);
lean_dec(v_d_3028_);
lean_dec_ref(v_f_3027_);
return v_res_3029_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(lean_object* v_fst_3030_, lean_object* v_f_3031_, lean_object* v_d_3032_){
_start:
{
lean_object* v___x_3033_; 
v___x_3033_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_fst_3030_, v_f_3031_);
if (lean_obj_tag(v___x_3033_) == 0)
{
lean_dec_ref_known(v___x_3033_, 1);
lean_inc(v_d_3032_);
return v_d_3032_;
}
else
{
lean_object* v_a_3034_; 
v_a_3034_ = lean_ctor_get(v___x_3033_, 0);
lean_inc(v_a_3034_);
lean_dec_ref_known(v___x_3033_, 1);
return v_a_3034_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1___boxed(lean_object* v_fst_3035_, lean_object* v_f_3036_, lean_object* v_d_3037_){
_start:
{
lean_object* v_res_3038_; 
v_res_3038_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3035_, v_f_3036_, v_d_3037_);
lean_dec(v_d_3037_);
lean_dec_ref(v_f_3036_);
return v_res_3038_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(lean_object* v_sectionName_3058_, lean_object* v_next_3059_, lean_object* v_a_3060_, lean_object* v_a_3061_){
_start:
{
if (lean_obj_tag(v_a_3060_) == 0)
{
lean_object* v___x_3062_; 
lean_dec_ref(v_next_3059_);
v___x_3062_ = lean_array_to_list(v_a_3061_);
return v___x_3062_;
}
else
{
lean_object* v_head_3063_; lean_object* v_tail_3064_; lean_object* v___x_3066_; uint8_t v_isShared_3067_; uint8_t v_isSharedCheck_3152_; 
v_head_3063_ = lean_ctor_get(v_a_3060_, 0);
v_tail_3064_ = lean_ctor_get(v_a_3060_, 1);
v_isSharedCheck_3152_ = !lean_is_exclusive(v_a_3060_);
if (v_isSharedCheck_3152_ == 0)
{
v___x_3066_ = v_a_3060_;
v_isShared_3067_ = v_isSharedCheck_3152_;
goto v_resetjp_3065_;
}
else
{
lean_inc(v_tail_3064_);
lean_inc(v_head_3063_);
lean_dec(v_a_3060_);
v___x_3066_ = lean_box(0);
v_isShared_3067_ = v_isSharedCheck_3152_;
goto v_resetjp_3065_;
}
v_resetjp_3065_:
{
lean_object* v___y_3069_; lean_object* v_fst_3072_; lean_object* v_snd_3073_; lean_object* v___x_3074_; lean_object* v_sec_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; lean_object* v_kind_3078_; lean_object* v___x_3079_; uint8_t v___x_3080_; 
v_fst_3072_ = lean_ctor_get(v_head_3063_, 0);
lean_inc_n(v_fst_3072_, 3);
v_snd_3073_ = lean_ctor_get(v_head_3063_, 1);
lean_inc(v_snd_3073_);
lean_dec(v_head_3063_);
v___x_3074_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0));
v_sec_3075_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3072_, v___x_3074_, v_sectionName_3058_);
v___x_3076_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1));
v___x_3077_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v_kind_3078_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3072_, v___x_3076_, v___x_3077_);
v___x_3079_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2));
v___x_3080_ = lean_string_dec_eq(v_kind_3078_, v___x_3079_);
if (v___x_3080_ == 0)
{
lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___y_3092_; lean_object* v___y_3093_; uint8_t v___y_3094_; lean_object* v___y_3095_; lean_object* v___y_3096_; lean_object* v___y_3097_; lean_object* v___y_3098_; lean_object* v___y_3099_; uint8_t v___y_3116_; lean_object* v___x_3134_; lean_object* v___x_3135_; 
v___x_3081_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc_n(v_fst_3072_, 5);
v___x_3082_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3072_, v___x_3081_, v___x_3077_);
v___x_3083_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4));
v___x_3084_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3072_, v___x_3083_, v___x_3077_);
v___x_3085_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5));
v___x_3086_ = lean_unsigned_to_nat(8u);
v___x_3087_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3072_, v___x_3085_, v___x_3086_);
v___x_3088_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6));
v___x_3089_ = lean_unsigned_to_nat(1u);
v___x_3090_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3072_, v___x_3088_, v___x_3089_);
v___x_3134_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14));
v___x_3135_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_fst_3072_, v___x_3134_);
if (lean_obj_tag(v___x_3135_) == 0)
{
uint8_t v___x_3136_; 
lean_dec_ref_known(v___x_3135_, 1);
v___x_3136_ = 1;
v___y_3116_ = v___x_3136_;
goto v___jp_3115_;
}
else
{
lean_object* v_a_3137_; uint8_t v___x_3138_; 
v_a_3137_ = lean_ctor_get(v___x_3135_, 0);
lean_inc(v_a_3137_);
lean_dec_ref_known(v___x_3135_, 1);
v___x_3138_ = lean_unbox(v_a_3137_);
lean_dec(v_a_3137_);
v___y_3116_ = v___x_3138_;
goto v___jp_3115_;
}
v___jp_3091_:
{
lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3113_; 
v___x_3100_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
lean_inc_n(v_fst_3072_, 3);
v___x_3101_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3072_, v___x_3100_, v___y_3093_);
v___x_3102_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7));
v___x_3103_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_3104_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3072_, v___x_3102_, v___x_3103_);
v___x_3105_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8));
v___x_3106_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3072_, v___x_3105_, v___x_3103_);
v___x_3107_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc_ref(v_next_3059_);
v___x_3108_ = lean_apply_1(v_next_3059_, v_snd_3073_);
v___x_3109_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3072_, v___x_3107_, v___x_3108_);
lean_dec(v___x_3108_);
v___x_3110_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v___x_3110_, 0, v_kind_3078_);
lean_ctor_set(v___x_3110_, 1, v_sec_3075_);
lean_ctor_set(v___x_3110_, 2, v___x_3082_);
lean_ctor_set(v___x_3110_, 3, v___x_3084_);
lean_ctor_set(v___x_3110_, 4, v___x_3087_);
lean_ctor_set(v___x_3110_, 5, v___x_3090_);
lean_ctor_set(v___x_3110_, 6, v___y_3096_);
lean_ctor_set(v___x_3110_, 7, v___y_3098_);
lean_ctor_set(v___x_3110_, 8, v___y_3092_);
lean_ctor_set(v___x_3110_, 9, v___y_3095_);
lean_ctor_set(v___x_3110_, 10, v___y_3097_);
lean_ctor_set(v___x_3110_, 11, v___y_3099_);
lean_ctor_set(v___x_3110_, 12, v___x_3101_);
lean_ctor_set(v___x_3110_, 13, v___x_3104_);
lean_ctor_set(v___x_3110_, 14, v___x_3106_);
lean_ctor_set(v___x_3110_, 15, v___x_3109_);
lean_ctor_set_uint8(v___x_3110_, sizeof(void*)*16, v___y_3094_);
v___x_3111_ = lean_box(0);
if (v_isShared_3067_ == 0)
{
lean_ctor_set(v___x_3066_, 1, v___x_3111_);
lean_ctor_set(v___x_3066_, 0, v___x_3110_);
v___x_3113_ = v___x_3066_;
goto v_reusejp_3112_;
}
else
{
lean_object* v_reuseFailAlloc_3114_; 
v_reuseFailAlloc_3114_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3114_, 0, v___x_3110_);
lean_ctor_set(v_reuseFailAlloc_3114_, 1, v___x_3111_);
v___x_3113_ = v_reuseFailAlloc_3114_;
goto v_reusejp_3112_;
}
v_reusejp_3112_:
{
v___y_3069_ = v___x_3113_;
goto v___jp_3068_;
}
}
v___jp_3115_:
{
lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; 
v___x_3117_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9));
v___x_3118_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc_n(v_fst_3072_, 6);
v___x_3119_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3072_, v___x_3117_, v___x_3118_);
v___x_3120_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10));
v___x_3121_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3072_, v___x_3120_, v___x_3118_);
v___x_3122_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11));
v___x_3123_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_3124_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3072_, v___x_3122_, v___x_3123_);
v___x_3125_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12));
v___x_3126_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3072_, v___x_3125_, v___x_3123_);
v___x_3127_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_3128_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3072_, v___x_3127_, v___x_3077_);
v___x_3129_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13));
v___x_3130_ = l_Lean_Json_getObjVal_x3f(v_fst_3072_, v___x_3129_);
if (lean_obj_tag(v___x_3130_) == 0)
{
lean_object* v___x_3131_; 
lean_dec_ref_known(v___x_3130_, 1);
v___x_3131_ = lean_box(0);
v___y_3092_ = v___x_3124_;
v___y_3093_ = v___x_3118_;
v___y_3094_ = v___y_3116_;
v___y_3095_ = v___x_3126_;
v___y_3096_ = v___x_3119_;
v___y_3097_ = v___x_3128_;
v___y_3098_ = v___x_3121_;
v___y_3099_ = v___x_3131_;
goto v___jp_3091_;
}
else
{
lean_object* v_a_3132_; lean_object* v___x_3133_; 
v_a_3132_ = lean_ctor_get(v___x_3130_, 0);
lean_inc(v_a_3132_);
lean_dec_ref_known(v___x_3130_, 1);
v___x_3133_ = lp_choreo_Choreo_jsonState(v_a_3132_);
v___y_3092_ = v___x_3124_;
v___y_3093_ = v___x_3118_;
v___y_3094_ = v___y_3116_;
v___y_3095_ = v___x_3126_;
v___y_3096_ = v___x_3119_;
v___y_3097_ = v___x_3128_;
v___y_3098_ = v___x_3121_;
v___y_3099_ = v___x_3133_;
goto v___jp_3091_;
}
}
}
else
{
lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v_times_3141_; lean_object* v___y_3143_; lean_object* v___x_3147_; lean_object* v___x_3148_; 
lean_dec_ref(v_kind_3078_);
lean_del_object(v___x_3066_);
v___x_3139_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15));
v___x_3140_ = lean_unsigned_to_nat(2u);
lean_inc_n(v_fst_3072_, 2);
v_times_3141_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3072_, v___x_3139_, v___x_3140_);
v___x_3147_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3148_ = l_Lean_Json_getObjVal_x3f(v_fst_3072_, v___x_3147_);
if (lean_obj_tag(v___x_3148_) == 1)
{
lean_object* v_a_3149_; lean_object* v___x_3150_; 
v_a_3149_ = lean_ctor_get(v___x_3148_, 0);
lean_inc(v_a_3149_);
lean_dec_ref_known(v___x_3148_, 1);
lean_inc_ref(v_next_3059_);
v___x_3150_ = lp_choreo_Choreo_readOps(v_sec_3075_, v_next_3059_, v_a_3149_);
lean_dec_ref(v_sec_3075_);
v___y_3143_ = v___x_3150_;
goto v___jp_3142_;
}
else
{
lean_object* v___x_3151_; 
lean_dec_ref(v___x_3148_);
lean_dec_ref(v_sec_3075_);
v___x_3151_ = lean_box(0);
v___y_3143_ = v___x_3151_;
goto v___jp_3142_;
}
v___jp_3142_:
{
lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; 
v___x_3144_ = l_List_range(v_times_3141_);
v___x_3145_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
lean_inc_ref(v_next_3059_);
v___x_3146_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3059_, v_snd_3073_, v_fst_3072_, v___y_3143_, v___x_3144_, v___x_3145_);
lean_dec(v___x_3144_);
v___y_3069_ = v___x_3146_;
goto v___jp_3068_;
}
}
v___jp_3068_:
{
lean_object* v___x_3070_; 
v___x_3070_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3061_, v___y_3069_);
v_a_3060_ = v_tail_3064_;
v_a_3061_ = v___x_3070_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(lean_object* v_next_3153_, lean_object* v_sectionName_3154_, lean_object* v_a_3155_, lean_object* v_a_3156_){
_start:
{
if (lean_obj_tag(v_a_3155_) == 0)
{
lean_object* v___x_3157_; 
lean_dec_ref(v_next_3153_);
v___x_3157_ = lean_array_to_list(v_a_3156_);
return v___x_3157_;
}
else
{
lean_object* v_head_3158_; lean_object* v_tail_3159_; lean_object* v___x_3161_; uint8_t v_isShared_3162_; uint8_t v_isSharedCheck_3247_; 
v_head_3158_ = lean_ctor_get(v_a_3155_, 0);
v_tail_3159_ = lean_ctor_get(v_a_3155_, 1);
v_isSharedCheck_3247_ = !lean_is_exclusive(v_a_3155_);
if (v_isSharedCheck_3247_ == 0)
{
v___x_3161_ = v_a_3155_;
v_isShared_3162_ = v_isSharedCheck_3247_;
goto v_resetjp_3160_;
}
else
{
lean_inc(v_tail_3159_);
lean_inc(v_head_3158_);
lean_dec(v_a_3155_);
v___x_3161_ = lean_box(0);
v_isShared_3162_ = v_isSharedCheck_3247_;
goto v_resetjp_3160_;
}
v_resetjp_3160_:
{
lean_object* v___y_3164_; lean_object* v_fst_3167_; lean_object* v_snd_3168_; lean_object* v___x_3169_; lean_object* v_sec_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; lean_object* v_kind_3173_; lean_object* v___x_3174_; uint8_t v___x_3175_; 
v_fst_3167_ = lean_ctor_get(v_head_3158_, 0);
lean_inc_n(v_fst_3167_, 3);
v_snd_3168_ = lean_ctor_get(v_head_3158_, 1);
lean_inc(v_snd_3168_);
lean_dec(v_head_3158_);
v___x_3169_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__0));
v_sec_3170_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3167_, v___x_3169_, v_sectionName_3154_);
v___x_3171_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__1));
v___x_3172_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v_kind_3173_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3167_, v___x_3171_, v___x_3172_);
v___x_3174_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__2));
v___x_3175_ = lean_string_dec_eq(v_kind_3173_, v___x_3174_);
if (v___x_3175_ == 0)
{
lean_object* v___x_3176_; lean_object* v___x_3177_; lean_object* v___x_3178_; lean_object* v___x_3179_; lean_object* v___x_3180_; lean_object* v___x_3181_; lean_object* v___x_3182_; lean_object* v___x_3183_; lean_object* v___x_3184_; lean_object* v___x_3185_; lean_object* v___y_3187_; lean_object* v___y_3188_; lean_object* v___y_3189_; lean_object* v___y_3190_; lean_object* v___y_3191_; uint8_t v___y_3192_; lean_object* v___y_3193_; lean_object* v___y_3194_; uint8_t v___y_3211_; lean_object* v___x_3229_; lean_object* v___x_3230_; 
v___x_3176_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc_n(v_fst_3167_, 5);
v___x_3177_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3167_, v___x_3176_, v___x_3172_);
v___x_3178_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__4));
v___x_3179_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3167_, v___x_3178_, v___x_3172_);
v___x_3180_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__5));
v___x_3181_ = lean_unsigned_to_nat(8u);
v___x_3182_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3167_, v___x_3180_, v___x_3181_);
v___x_3183_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__6));
v___x_3184_ = lean_unsigned_to_nat(1u);
v___x_3185_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3167_, v___x_3183_, v___x_3184_);
v___x_3229_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__14));
v___x_3230_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__3(v_fst_3167_, v___x_3229_);
if (lean_obj_tag(v___x_3230_) == 0)
{
uint8_t v___x_3231_; 
lean_dec_ref_known(v___x_3230_, 1);
v___x_3231_ = 1;
v___y_3211_ = v___x_3231_;
goto v___jp_3210_;
}
else
{
lean_object* v_a_3232_; uint8_t v___x_3233_; 
v_a_3232_ = lean_ctor_get(v___x_3230_, 0);
lean_inc(v_a_3232_);
lean_dec_ref_known(v___x_3230_, 1);
v___x_3233_ = lean_unbox(v_a_3232_);
lean_dec(v_a_3232_);
v___y_3211_ = v___x_3233_;
goto v___jp_3210_;
}
v___jp_3186_:
{
lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3203_; lean_object* v___x_3204_; lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3208_; 
v___x_3195_ = ((lean_object*)(lp_choreo_Choreo_namedPlaces___closed__1));
lean_inc_n(v_fst_3167_, 3);
v___x_3196_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3167_, v___x_3195_, v___y_3190_);
v___x_3197_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__7));
v___x_3198_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__3));
v___x_3199_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3167_, v___x_3197_, v___x_3198_);
v___x_3200_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__8));
v___x_3201_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3167_, v___x_3200_, v___x_3198_);
v___x_3202_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_readOps_spec__4_spec__4___closed__0));
lean_inc_ref(v_next_3153_);
v___x_3203_ = lean_apply_1(v_next_3153_, v_snd_3168_);
v___x_3204_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3167_, v___x_3202_, v___x_3203_);
lean_dec(v___x_3203_);
v___x_3205_ = lean_alloc_ctor(0, 16, 1);
lean_ctor_set(v___x_3205_, 0, v_kind_3173_);
lean_ctor_set(v___x_3205_, 1, v_sec_3170_);
lean_ctor_set(v___x_3205_, 2, v___x_3177_);
lean_ctor_set(v___x_3205_, 3, v___x_3179_);
lean_ctor_set(v___x_3205_, 4, v___x_3182_);
lean_ctor_set(v___x_3205_, 5, v___x_3185_);
lean_ctor_set(v___x_3205_, 6, v___y_3193_);
lean_ctor_set(v___x_3205_, 7, v___y_3191_);
lean_ctor_set(v___x_3205_, 8, v___y_3189_);
lean_ctor_set(v___x_3205_, 9, v___y_3188_);
lean_ctor_set(v___x_3205_, 10, v___y_3187_);
lean_ctor_set(v___x_3205_, 11, v___y_3194_);
lean_ctor_set(v___x_3205_, 12, v___x_3196_);
lean_ctor_set(v___x_3205_, 13, v___x_3199_);
lean_ctor_set(v___x_3205_, 14, v___x_3201_);
lean_ctor_set(v___x_3205_, 15, v___x_3204_);
lean_ctor_set_uint8(v___x_3205_, sizeof(void*)*16, v___y_3192_);
v___x_3206_ = lean_box(0);
if (v_isShared_3162_ == 0)
{
lean_ctor_set(v___x_3161_, 1, v___x_3206_);
lean_ctor_set(v___x_3161_, 0, v___x_3205_);
v___x_3208_ = v___x_3161_;
goto v_reusejp_3207_;
}
else
{
lean_object* v_reuseFailAlloc_3209_; 
v_reuseFailAlloc_3209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3209_, 0, v___x_3205_);
lean_ctor_set(v_reuseFailAlloc_3209_, 1, v___x_3206_);
v___x_3208_ = v_reuseFailAlloc_3209_;
goto v_reusejp_3207_;
}
v_reusejp_3207_:
{
v___y_3164_ = v___x_3208_;
goto v___jp_3163_;
}
}
v___jp_3210_:
{
lean_object* v___x_3212_; lean_object* v___x_3213_; lean_object* v___x_3214_; lean_object* v___x_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; lean_object* v___x_3218_; lean_object* v___x_3219_; lean_object* v___x_3220_; lean_object* v___x_3221_; lean_object* v___x_3222_; lean_object* v___x_3223_; lean_object* v___x_3224_; lean_object* v___x_3225_; 
v___x_3212_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__9));
v___x_3213_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__1);
lean_inc_n(v_fst_3167_, 6);
v___x_3214_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3167_, v___x_3212_, v___x_3213_);
v___x_3215_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__10));
v___x_3216_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3167_, v___x_3215_, v___x_3213_);
v___x_3217_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__11));
v___x_3218_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2, &lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2_once, _init_lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__2);
v___x_3219_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3167_, v___x_3217_, v___x_3218_);
v___x_3220_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__12));
v___x_3221_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__2(v_fst_3167_, v___x_3220_, v___x_3218_);
v___x_3222_ = ((lean_object*)(lp_choreo_Choreo_compileOp___closed__10));
v___x_3223_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__0(v_fst_3167_, v___x_3222_, v___x_3172_);
v___x_3224_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__13));
v___x_3225_ = l_Lean_Json_getObjVal_x3f(v_fst_3167_, v___x_3224_);
if (lean_obj_tag(v___x_3225_) == 0)
{
lean_object* v___x_3226_; 
lean_dec_ref_known(v___x_3225_, 1);
v___x_3226_ = lean_box(0);
v___y_3187_ = v___x_3223_;
v___y_3188_ = v___x_3221_;
v___y_3189_ = v___x_3219_;
v___y_3190_ = v___x_3213_;
v___y_3191_ = v___x_3216_;
v___y_3192_ = v___y_3211_;
v___y_3193_ = v___x_3214_;
v___y_3194_ = v___x_3226_;
goto v___jp_3186_;
}
else
{
lean_object* v_a_3227_; lean_object* v___x_3228_; 
v_a_3227_ = lean_ctor_get(v___x_3225_, 0);
lean_inc(v_a_3227_);
lean_dec_ref_known(v___x_3225_, 1);
v___x_3228_ = lp_choreo_Choreo_jsonState(v_a_3227_);
v___y_3187_ = v___x_3223_;
v___y_3188_ = v___x_3221_;
v___y_3189_ = v___x_3219_;
v___y_3190_ = v___x_3213_;
v___y_3191_ = v___x_3216_;
v___y_3192_ = v___y_3211_;
v___y_3193_ = v___x_3214_;
v___y_3194_ = v___x_3228_;
goto v___jp_3186_;
}
}
}
else
{
lean_object* v___x_3234_; lean_object* v___x_3235_; lean_object* v_times_3236_; lean_object* v___y_3238_; lean_object* v___x_3242_; lean_object* v___x_3243_; 
lean_dec_ref(v_kind_3173_);
lean_del_object(v___x_3161_);
v___x_3234_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__15));
v___x_3235_ = lean_unsigned_to_nat(2u);
lean_inc_n(v_fst_3167_, 2);
v_times_3236_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___lam__1(v_fst_3167_, v___x_3234_, v___x_3235_);
v___x_3242_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3243_ = l_Lean_Json_getObjVal_x3f(v_fst_3167_, v___x_3242_);
if (lean_obj_tag(v___x_3243_) == 1)
{
lean_object* v_a_3244_; lean_object* v___x_3245_; 
v_a_3244_ = lean_ctor_get(v___x_3243_, 0);
lean_inc(v_a_3244_);
lean_dec_ref_known(v___x_3243_, 1);
lean_inc_ref(v_next_3153_);
v___x_3245_ = lp_choreo_Choreo_readOps(v_sec_3170_, v_next_3153_, v_a_3244_);
lean_dec_ref(v_sec_3170_);
v___y_3238_ = v___x_3245_;
goto v___jp_3237_;
}
else
{
lean_object* v___x_3246_; 
lean_dec_ref(v___x_3243_);
lean_dec_ref(v_sec_3170_);
v___x_3246_ = lean_box(0);
v___y_3238_ = v___x_3246_;
goto v___jp_3237_;
}
v___jp_3237_:
{
lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; 
v___x_3239_ = l_List_range(v_times_3236_);
v___x_3240_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
lean_inc_ref(v_next_3153_);
v___x_3241_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__5(v_next_3153_, v_snd_3168_, v_fst_3167_, v___y_3238_, v___x_3239_, v___x_3240_);
lean_dec(v___x_3239_);
v___y_3164_ = v___x_3241_;
goto v___jp_3163_;
}
}
v___jp_3163_:
{
lean_object* v___x_3165_; lean_object* v___x_3166_; 
v___x_3165_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3156_, v___y_3164_);
v___x_3166_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(v_sectionName_3154_, v_next_3153_, v_tail_3159_, v___x_3165_);
return v___x_3166_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps(lean_object* v_sectionName_3248_, lean_object* v_next_3249_, lean_object* v_j_3250_){
_start:
{
if (lean_obj_tag(v_j_3250_) == 4)
{
lean_object* v_elems_3251_; lean_object* v___x_3252_; lean_object* v___x_3253_; lean_object* v___x_3254_; lean_object* v___x_3255_; lean_object* v___x_3256_; 
v_elems_3251_ = lean_ctor_get(v_j_3250_, 0);
lean_inc_ref(v_elems_3251_);
lean_dec_ref_known(v_j_3250_, 1);
v___x_3252_ = lean_array_to_list(v_elems_3251_);
v___x_3253_ = lean_unsigned_to_nat(0u);
v___x_3254_ = l_List_zipIdxTR___redArg(v___x_3252_, v___x_3253_);
v___x_3255_ = ((lean_object*)(lp_choreo_Choreo_readOps___closed__0));
v___x_3256_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(v_next_3249_, v_sectionName_3248_, v___x_3254_, v___x_3255_);
return v___x_3256_;
}
else
{
lean_object* v___x_3257_; 
lean_dec(v_j_3250_);
lean_dec_ref(v_next_3249_);
v___x_3257_ = lean_box(0);
return v___x_3257_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readOps___boxed(lean_object* v_sectionName_3258_, lean_object* v_next_3259_, lean_object* v_j_3260_){
_start:
{
lean_object* v_res_3261_; 
v_res_3261_ = lp_choreo_Choreo_readOps(v_sectionName_3258_, v_next_3259_, v_j_3260_);
lean_dec_ref(v_sectionName_3258_);
return v_res_3261_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___boxed(lean_object* v_next_3262_, lean_object* v_sectionName_3263_, lean_object* v_a_3264_, lean_object* v_a_3265_){
_start:
{
lean_object* v_res_3266_; 
v_res_3266_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6(v_next_3262_, v_sectionName_3263_, v_a_3264_, v_a_3265_);
lean_dec_ref(v_sectionName_3263_);
return v_res_3266_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7___boxed(lean_object* v_sectionName_3267_, lean_object* v_next_3268_, lean_object* v_a_3269_, lean_object* v_a_3270_){
_start:
{
lean_object* v_res_3271_; 
v_res_3271_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00__private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6_spec__7(v_sectionName_3267_, v_next_3268_, v_a_3269_, v_a_3270_);
lean_dec_ref(v_sectionName_3267_);
return v_res_3271_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0(lean_object* v_snd_3272_, lean_object* v_x_3273_){
_start:
{
lean_object* v___x_3274_; 
v___x_3274_ = lean_nat_add(v_x_3273_, v_snd_3272_);
return v___x_3274_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0___boxed(lean_object* v_snd_3275_, lean_object* v_x_3276_){
_start:
{
lean_object* v_res_3277_; 
v_res_3277_ = lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0(v_snd_3275_, v_x_3276_);
lean_dec(v_x_3276_);
lean_dec(v_snd_3275_);
return v_res_3277_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0(lean_object* v_x_3283_, lean_object* v_x_3284_){
_start:
{
if (lean_obj_tag(v_x_3284_) == 0)
{
return v_x_3283_;
}
else
{
lean_object* v_head_3285_; lean_object* v_tail_3286_; lean_object* v_fst_3287_; lean_object* v_snd_3288_; lean_object* v___x_3290_; uint8_t v_isShared_3291_; uint8_t v_isSharedCheck_3319_; 
v_head_3285_ = lean_ctor_get(v_x_3284_, 0);
lean_inc(v_head_3285_);
v_tail_3286_ = lean_ctor_get(v_x_3284_, 1);
lean_inc(v_tail_3286_);
lean_dec_ref_known(v_x_3284_, 2);
v_fst_3287_ = lean_ctor_get(v_x_3283_, 0);
v_snd_3288_ = lean_ctor_get(v_x_3283_, 1);
v_isSharedCheck_3319_ = !lean_is_exclusive(v_x_3283_);
if (v_isSharedCheck_3319_ == 0)
{
v___x_3290_ = v_x_3283_;
v_isShared_3291_ = v_isSharedCheck_3319_;
goto v_resetjp_3289_;
}
else
{
lean_inc(v_snd_3288_);
lean_inc(v_fst_3287_);
lean_dec(v_x_3283_);
v___x_3290_ = lean_box(0);
v_isShared_3291_ = v_isSharedCheck_3319_;
goto v_resetjp_3289_;
}
v_resetjp_3289_:
{
lean_object* v___y_3293_; lean_object* v___y_3294_; lean_object* v___f_3300_; lean_object* v___y_3302_; lean_object* v___y_3303_; lean_object* v___y_3310_; lean_object* v___x_3315_; lean_object* v___x_3316_; 
lean_inc(v_snd_3288_);
v___f_3300_ = lean_alloc_closure((void*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___lam__0___boxed), 2, 1);
lean_closure_set(v___f_3300_, 0, v_snd_3288_);
v___x_3315_ = ((lean_object*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__2));
lean_inc(v_head_3285_);
v___x_3316_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_head_3285_, v___x_3315_);
if (lean_obj_tag(v___x_3316_) == 0)
{
lean_object* v___x_3317_; 
lean_dec_ref_known(v___x_3316_, 1);
v___x_3317_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3310_ = v___x_3317_;
goto v___jp_3309_;
}
else
{
lean_object* v_a_3318_; 
v_a_3318_ = lean_ctor_get(v___x_3316_, 0);
lean_inc(v_a_3318_);
lean_dec_ref_known(v___x_3316_, 1);
v___y_3310_ = v_a_3318_;
goto v___jp_3309_;
}
v___jp_3292_:
{
lean_object* v___x_3295_; lean_object* v___x_3297_; 
v___x_3295_ = lean_nat_add(v_snd_3288_, v___y_3294_);
lean_dec(v___y_3294_);
lean_dec(v_snd_3288_);
if (v_isShared_3291_ == 0)
{
lean_ctor_set(v___x_3290_, 1, v___x_3295_);
lean_ctor_set(v___x_3290_, 0, v___y_3293_);
v___x_3297_ = v___x_3290_;
goto v_reusejp_3296_;
}
else
{
lean_object* v_reuseFailAlloc_3299_; 
v_reuseFailAlloc_3299_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3299_, 0, v___y_3293_);
lean_ctor_set(v_reuseFailAlloc_3299_, 1, v___x_3295_);
v___x_3297_ = v_reuseFailAlloc_3299_;
goto v_reusejp_3296_;
}
v_reusejp_3296_:
{
v_x_3283_ = v___x_3297_;
v_x_3284_ = v_tail_3286_;
goto _start;
}
}
v___jp_3301_:
{
lean_object* v_got_3304_; lean_object* v___x_3305_; 
lean_inc(v___y_3303_);
v_got_3304_ = lp_choreo_Choreo_readOps(v___y_3302_, v___f_3300_, v___y_3303_);
lean_dec_ref(v___y_3302_);
v___x_3305_ = l_List_appendTR___redArg(v_fst_3287_, v_got_3304_);
if (lean_obj_tag(v___y_3303_) == 4)
{
lean_object* v_elems_3306_; lean_object* v___x_3307_; 
v_elems_3306_ = lean_ctor_get(v___y_3303_, 0);
lean_inc_ref(v_elems_3306_);
lean_dec_ref_known(v___y_3303_, 1);
v___x_3307_ = lean_array_get_size(v_elems_3306_);
lean_dec_ref(v_elems_3306_);
v___y_3293_ = v___x_3305_;
v___y_3294_ = v___x_3307_;
goto v___jp_3292_;
}
else
{
lean_object* v___x_3308_; 
lean_dec(v___y_3303_);
v___x_3308_ = lean_unsigned_to_nat(0u);
v___y_3293_ = v___x_3305_;
v___y_3294_ = v___x_3308_;
goto v___jp_3292_;
}
}
v___jp_3309_:
{
lean_object* v___x_3311_; lean_object* v___x_3312_; 
v___x_3311_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__16));
v___x_3312_ = l_Lean_Json_getObjVal_x3f(v_head_3285_, v___x_3311_);
if (lean_obj_tag(v___x_3312_) == 1)
{
lean_object* v_a_3313_; 
v_a_3313_ = lean_ctor_get(v___x_3312_, 0);
lean_inc(v_a_3313_);
lean_dec_ref_known(v___x_3312_, 1);
v___y_3302_ = v___y_3310_;
v___y_3303_ = v_a_3313_;
goto v___jp_3301_;
}
else
{
lean_object* v___x_3314_; 
lean_dec_ref(v___x_3312_);
v___x_3314_ = ((lean_object*)(lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0___closed__1));
v___y_3302_ = v___y_3310_;
v___y_3303_ = v___x_3314_;
goto v___jp_3301_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_readProgram(lean_object* v_j_3332_){
_start:
{
lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3336_; lean_object* v___y_3337_; lean_object* v___y_3338_; lean_object* v___y_3339_; lean_object* v___y_3340_; lean_object* v___y_3341_; lean_object* v___y_3342_; lean_object* v___y_3346_; lean_object* v___y_3347_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; lean_object* v___x_3358_; lean_object* v___x_3359_; 
v___x_3358_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__1));
lean_inc(v_j_3332_);
v___x_3359_ = l_Lean_Json_getObjVal_x3f(v_j_3332_, v___x_3358_);
if (lean_obj_tag(v___x_3359_) == 1)
{
lean_object* v_a_3360_; lean_object* v___y_3362_; lean_object* v___y_3363_; lean_object* v___y_3364_; lean_object* v___y_3365_; lean_object* v___y_3366_; lean_object* v___y_3367_; lean_object* v___y_3368_; lean_object* v___y_3375_; lean_object* v___y_3376_; lean_object* v___y_3377_; lean_object* v___y_3378_; lean_object* v___y_3379_; lean_object* v___y_3380_; lean_object* v___y_3386_; lean_object* v___y_3387_; lean_object* v___y_3388_; lean_object* v___y_3389_; lean_object* v___y_3390_; lean_object* v___y_3396_; lean_object* v___y_3397_; lean_object* v___y_3398_; lean_object* v___y_3399_; lean_object* v___y_3405_; lean_object* v___y_3406_; lean_object* v___y_3407_; lean_object* v___y_3413_; lean_object* v___y_3414_; lean_object* v___y_3420_; lean_object* v___x_3430_; lean_object* v___x_3431_; 
v_a_3360_ = lean_ctor_get(v___x_3359_, 0);
lean_inc_n(v_a_3360_, 2);
lean_dec_ref_known(v___x_3359_, 1);
v___x_3430_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__9));
v___x_3431_ = l_Lean_Json_getObjVal_x3f(v_a_3360_, v___x_3430_);
if (lean_obj_tag(v___x_3431_) == 1)
{
lean_object* v_a_3432_; 
v_a_3432_ = lean_ctor_get(v___x_3431_, 0);
lean_inc(v_a_3432_);
lean_dec_ref_known(v___x_3431_, 1);
if (lean_obj_tag(v_a_3432_) == 4)
{
lean_object* v_elems_3433_; lean_object* v___x_3434_; 
v_elems_3433_ = lean_ctor_get(v_a_3432_, 0);
lean_inc_ref(v_elems_3433_);
lean_dec_ref_known(v_a_3432_, 1);
v___x_3434_ = lean_array_to_list(v_elems_3433_);
v___y_3420_ = v___x_3434_;
goto v___jp_3419_;
}
else
{
lean_dec(v_a_3432_);
goto v___jp_3428_;
}
}
else
{
lean_dec_ref(v___x_3431_);
goto v___jp_3428_;
}
v___jp_3361_:
{
lean_object* v___x_3369_; lean_object* v___x_3370_; 
v___x_3369_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__2));
v___x_3370_ = l_Lean_Json_getObjVal_x3f(v_a_3360_, v___x_3369_);
if (lean_obj_tag(v___x_3370_) == 0)
{
lean_object* v___x_3371_; 
lean_dec_ref_known(v___x_3370_, 1);
v___x_3371_ = lean_box(0);
v___y_3346_ = v___y_3362_;
v___y_3347_ = v___y_3363_;
v___y_3348_ = v___y_3364_;
v___y_3349_ = v___y_3366_;
v___y_3350_ = v___y_3365_;
v___y_3351_ = v___y_3367_;
v___y_3352_ = v___y_3368_;
v___y_3353_ = v___x_3371_;
goto v___jp_3345_;
}
else
{
lean_object* v_a_3372_; lean_object* v___x_3373_; 
v_a_3372_ = lean_ctor_get(v___x_3370_, 0);
lean_inc(v_a_3372_);
lean_dec_ref_known(v___x_3370_, 1);
v___x_3373_ = lp_choreo_Choreo_jsonState(v_a_3372_);
v___y_3346_ = v___y_3362_;
v___y_3347_ = v___y_3363_;
v___y_3348_ = v___y_3364_;
v___y_3349_ = v___y_3366_;
v___y_3350_ = v___y_3365_;
v___y_3351_ = v___y_3367_;
v___y_3352_ = v___y_3368_;
v___y_3353_ = v___x_3373_;
goto v___jp_3345_;
}
}
v___jp_3374_:
{
lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3381_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__3));
lean_inc(v_a_3360_);
v___x_3382_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3360_, v___x_3381_);
if (lean_obj_tag(v___x_3382_) == 0)
{
lean_object* v___x_3383_; 
lean_dec_ref_known(v___x_3382_, 1);
v___x_3383_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__1));
v___y_3362_ = v___y_3375_;
v___y_3363_ = v___y_3376_;
v___y_3364_ = v___y_3377_;
v___y_3365_ = v___y_3379_;
v___y_3366_ = v___y_3378_;
v___y_3367_ = v___y_3380_;
v___y_3368_ = v___x_3383_;
goto v___jp_3361_;
}
else
{
lean_object* v_a_3384_; 
v_a_3384_ = lean_ctor_get(v___x_3382_, 0);
lean_inc(v_a_3384_);
lean_dec_ref_known(v___x_3382_, 1);
v___y_3362_ = v___y_3375_;
v___y_3363_ = v___y_3376_;
v___y_3364_ = v___y_3377_;
v___y_3365_ = v___y_3379_;
v___y_3366_ = v___y_3378_;
v___y_3367_ = v___y_3380_;
v___y_3368_ = v_a_3384_;
goto v___jp_3361_;
}
}
v___jp_3385_:
{
lean_object* v___x_3391_; lean_object* v___x_3392_; 
v___x_3391_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__4));
lean_inc(v_a_3360_);
v___x_3392_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3360_, v___x_3391_);
if (lean_obj_tag(v___x_3392_) == 0)
{
lean_object* v___x_3393_; 
lean_dec_ref_known(v___x_3392_, 1);
v___x_3393_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3375_ = v___y_3386_;
v___y_3376_ = v___y_3390_;
v___y_3377_ = v___y_3387_;
v___y_3378_ = v___y_3389_;
v___y_3379_ = v___y_3388_;
v___y_3380_ = v___x_3393_;
goto v___jp_3374_;
}
else
{
lean_object* v_a_3394_; 
v_a_3394_ = lean_ctor_get(v___x_3392_, 0);
lean_inc(v_a_3394_);
lean_dec_ref_known(v___x_3392_, 1);
v___y_3375_ = v___y_3386_;
v___y_3376_ = v___y_3390_;
v___y_3377_ = v___y_3387_;
v___y_3378_ = v___y_3389_;
v___y_3379_ = v___y_3388_;
v___y_3380_ = v_a_3394_;
goto v___jp_3374_;
}
}
v___jp_3395_:
{
lean_object* v___x_3400_; lean_object* v___x_3401_; 
v___x_3400_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__5));
lean_inc(v_a_3360_);
v___x_3401_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_a_3360_, v___x_3400_);
if (lean_obj_tag(v___x_3401_) == 0)
{
lean_object* v___x_3402_; 
lean_dec_ref_known(v___x_3401_, 1);
v___x_3402_ = lean_obj_once(&lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0, &lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0_once, _init_lp_choreo_Choreo_instInhabitedProgramSpec_default___closed__0);
v___y_3386_ = v___y_3396_;
v___y_3387_ = v___y_3399_;
v___y_3388_ = v___y_3398_;
v___y_3389_ = v___y_3397_;
v___y_3390_ = v___x_3402_;
goto v___jp_3385_;
}
else
{
lean_object* v_a_3403_; 
v_a_3403_ = lean_ctor_get(v___x_3401_, 0);
lean_inc(v_a_3403_);
lean_dec_ref_known(v___x_3401_, 1);
v___y_3386_ = v___y_3396_;
v___y_3387_ = v___y_3399_;
v___y_3388_ = v___y_3398_;
v___y_3389_ = v___y_3397_;
v___y_3390_ = v_a_3403_;
goto v___jp_3385_;
}
}
v___jp_3404_:
{
lean_object* v___x_3408_; lean_object* v___x_3409_; 
v___x_3408_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__6));
lean_inc(v_a_3360_);
v___x_3409_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_a_3360_, v___x_3408_);
if (lean_obj_tag(v___x_3409_) == 0)
{
lean_object* v___x_3410_; 
lean_dec_ref_known(v___x_3409_, 1);
v___x_3410_ = lean_unsigned_to_nat(120u);
v___y_3396_ = v___y_3405_;
v___y_3397_ = v___y_3406_;
v___y_3398_ = v___y_3407_;
v___y_3399_ = v___x_3410_;
goto v___jp_3395_;
}
else
{
lean_object* v_a_3411_; 
v_a_3411_ = lean_ctor_get(v___x_3409_, 0);
lean_inc(v_a_3411_);
lean_dec_ref_known(v___x_3409_, 1);
v___y_3396_ = v___y_3405_;
v___y_3397_ = v___y_3406_;
v___y_3398_ = v___y_3407_;
v___y_3399_ = v_a_3411_;
goto v___jp_3395_;
}
}
v___jp_3412_:
{
lean_object* v___x_3415_; lean_object* v___x_3416_; 
v___x_3415_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__7));
lean_inc(v_a_3360_);
v___x_3416_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_a_3360_, v___x_3415_);
if (lean_obj_tag(v___x_3416_) == 0)
{
lean_object* v___x_3417_; 
lean_dec_ref_known(v___x_3416_, 1);
v___x_3417_ = lean_unsigned_to_nat(8u);
v___y_3405_ = v___y_3413_;
v___y_3406_ = v___y_3414_;
v___y_3407_ = v___x_3417_;
goto v___jp_3404_;
}
else
{
lean_object* v_a_3418_; 
v_a_3418_ = lean_ctor_get(v___x_3416_, 0);
lean_inc(v_a_3418_);
lean_dec_ref_known(v___x_3416_, 1);
v___y_3405_ = v___y_3413_;
v___y_3406_ = v___y_3414_;
v___y_3407_ = v_a_3418_;
goto v___jp_3404_;
}
}
v___jp_3419_:
{
lean_object* v___x_3421_; lean_object* v___x_3422_; lean_object* v_fst_3423_; lean_object* v___x_3424_; lean_object* v___x_3425_; 
v___x_3421_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__8));
v___x_3422_ = lp_choreo_List_foldl___at___00Choreo_readProgram_spec__0(v___x_3421_, v___y_3420_);
v_fst_3423_ = lean_ctor_get(v___x_3422_, 0);
lean_inc(v_fst_3423_);
lean_dec_ref(v___x_3422_);
v___x_3424_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_readOps_spec__6___closed__3));
lean_inc(v_a_3360_);
v___x_3425_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_3360_, v___x_3424_);
if (lean_obj_tag(v___x_3425_) == 0)
{
lean_object* v___x_3426_; 
lean_dec_ref_known(v___x_3425_, 1);
v___x_3426_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3413_ = v_fst_3423_;
v___y_3414_ = v___x_3426_;
goto v___jp_3412_;
}
else
{
lean_object* v_a_3427_; 
v_a_3427_ = lean_ctor_get(v___x_3425_, 0);
lean_inc(v_a_3427_);
lean_dec_ref_known(v___x_3425_, 1);
v___y_3413_ = v_fst_3423_;
v___y_3414_ = v_a_3427_;
goto v___jp_3412_;
}
}
v___jp_3428_:
{
lean_object* v___x_3429_; 
v___x_3429_ = lean_box(0);
v___y_3420_ = v___x_3429_;
goto v___jp_3419_;
}
}
else
{
lean_object* v___x_3435_; 
lean_dec_ref(v___x_3359_);
lean_dec(v_j_3332_);
v___x_3435_ = lean_box(0);
return v___x_3435_;
}
v___jp_3333_:
{
lean_object* v___x_3343_; lean_object* v___x_3344_; 
v___x_3343_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_3343_, 0, v___y_3338_);
lean_ctor_set(v___x_3343_, 1, v___y_3337_);
lean_ctor_set(v___x_3343_, 2, v___y_3336_);
lean_ctor_set(v___x_3343_, 3, v___y_3335_);
lean_ctor_set(v___x_3343_, 4, v___y_3340_);
lean_ctor_set(v___x_3343_, 5, v___y_3341_);
lean_ctor_set(v___x_3343_, 6, v___y_3339_);
lean_ctor_set(v___x_3343_, 7, v___y_3334_);
lean_ctor_set(v___x_3343_, 8, v___y_3342_);
v___x_3344_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_3344_, 0, v___x_3343_);
return v___x_3344_;
}
v___jp_3345_:
{
lean_object* v___x_3354_; lean_object* v___x_3355_; 
v___x_3354_ = ((lean_object*)(lp_choreo_Choreo_readProgram___closed__0));
v___x_3355_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_j_3332_, v___x_3354_);
if (lean_obj_tag(v___x_3355_) == 0)
{
lean_object* v___x_3356_; 
lean_dec_ref_known(v___x_3355_, 1);
v___x_3356_ = ((lean_object*)(lp_choreo_Choreo_instInhabitedSurfaceOp_default___closed__0));
v___y_3334_ = v___y_3346_;
v___y_3335_ = v___y_3347_;
v___y_3336_ = v___y_3348_;
v___y_3337_ = v___y_3350_;
v___y_3338_ = v___y_3349_;
v___y_3339_ = v___y_3353_;
v___y_3340_ = v___y_3351_;
v___y_3341_ = v___y_3352_;
v___y_3342_ = v___x_3356_;
goto v___jp_3333_;
}
else
{
lean_object* v_a_3357_; 
v_a_3357_ = lean_ctor_get(v___x_3355_, 0);
lean_inc(v_a_3357_);
lean_dec_ref_known(v___x_3355_, 1);
v___y_3334_ = v___y_3346_;
v___y_3335_ = v___y_3347_;
v___y_3336_ = v___y_3348_;
v___y_3337_ = v___y_3350_;
v___y_3338_ = v___y_3349_;
v___y_3339_ = v___y_3353_;
v___y_3340_ = v___y_3351_;
v___y_3341_ = v___y_3352_;
v___y_3342_ = v_a_3357_;
goto v___jp_3333_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Planner(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Language(uint8_t builtin);
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
