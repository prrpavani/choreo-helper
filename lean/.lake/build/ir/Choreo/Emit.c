// Lean compiler output
// Module: Choreo.Emit
// Imports: public import Init public meta import Init public import Choreo.Planner public import Choreo.Source public import Choreo.Tolerance public import Choreo.Transforms public import Choreo.Program public import Lean.Data.Json
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
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_phaseKey(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Phase_check(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_phaseL(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Poly_last(lean_object*);
lean_object* lp_choreo_Choreo_Poly_first(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
extern lean_object* lp_choreo_Choreo_stageRect;
lean_object* l_Nat_cast___at___00Dyadic_toRat_spec__0(lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Rat_ofInt(lean_object*);
lean_object* l_Rat_div(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(lean_object*, lean_object*, lean_object*);
uint8_t l_Rat_blt(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_pairCert(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_JsonNumber_fromNat(lean_object*);
lean_object* l_Lean_JsonNumber_fromInt(lean_object*);
lean_object* l_Lean_Json_mkObj(lean_object*);
lean_object* lean_array_mk(lean_object*);
double l_Float_ofInt(lean_object*);
double lean_float_of_nat(lean_object*);
double lean_float_div(double, double);
double sqrt(double);
lean_object* l_Lean_Float_toJson(double);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_clearPoly(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_certL(lean_object*);
lean_object* l_List_lengthTR___redArg(lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Ask_isMovement(lean_object*);
uint8_t lp_choreo_Choreo_Ask_check(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* lp_choreo_Choreo_intL(lean_object*);
lean_object* lp_choreo_Choreo_listL___redArg(lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Algebra_checkCollisionFree(lean_object*, lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
lean_object* lp_choreo_Choreo_Draft_toPhase(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_probeConfig(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
double lean_float_mul(double, double);
double lean_float_add(double, double);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
lean_object* lp_choreo_Choreo_problemText(lean_object*, lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_diagnose(lean_object*, lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Routine_checkGlobal(lean_object*);
uint8_t lp_choreo_Choreo_Routine_checkMovement(lean_object*);
uint8_t lp_choreo_Choreo_Routine_checkMusic(lean_object*);
uint8_t lp_choreo_Choreo_Transition_check(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Transition_segment(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
lean_object* lp_choreo_Choreo_askL(lean_object*);
lean_object* lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(lean_object*, lean_object*);
lean_object* l_List_get_x3fInternal___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_nextPairs(lean_object*);
uint8_t lp_choreo_Choreo_lineBrokenAt(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_choreo_Choreo_stepTitle(lean_object*);
lean_object* l_String_intercalate(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Shape_name(lean_object*);
lean_object* lp_choreo_Choreo_Routine_fingerprint(lean_object*);
uint8_t lp_choreo_Choreo_Pred_holds(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Op_enabled(lean_object*, lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Step_ok(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_natsL(lean_object*);
lean_object* lp_choreo_Choreo_Pred_whyNot(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(lean_object*, lean_object*);
lean_object* lean_nat_shiftr(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_configL(lean_object*);
lean_object* lp_choreo_Choreo_boolL(uint8_t);
lean_object* lp_choreo_Choreo_transitionL(lean_object*);
lean_object* lp_choreo_Choreo_Transition_count(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_ratL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "("};
static const lean_object* lp_choreo_Choreo_ratL___closed__0 = (const lean_object*)&lp_choreo_Choreo_ratL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_ratL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " / "};
static const lean_object* lp_choreo_Choreo_ratL___closed__1 = (const lean_object*)&lp_choreo_Choreo_ratL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_ratL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = " : Rat)"};
static const lean_object* lp_choreo_Choreo_ratL___closed__2 = (const lean_object*)&lp_choreo_Choreo_ratL___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_ratL(lean_object*);
static const lean_string_object lp_choreo_Choreo_refutationL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "refute_quick (c := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__0 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = ") (ph := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__1 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (i := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__2 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (j := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__3 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (a := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__4 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__4_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (b := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__5 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__5_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = ") (by decide +kernel)"};
static const lean_object* lp_choreo_Choreo_refutationL___closed__6 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__6_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "refute_stage (c := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__7 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__7_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ") (t := "};
static const lean_object* lp_choreo_Choreo_refutationL___closed__8 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__8_value;
static const lean_string_object lp_choreo_Choreo_refutationL___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 82, .m_capacity = 82, .m_length = 81, .m_data = ") (by decide +kernel) (by decide +kernel) (by decide +kernel) (by decide +kernel)"};
static const lean_object* lp_choreo_Choreo_refutationL___closed__9 = (const lean_object*)&lp_choreo_Choreo_refutationL___closed__9_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_refutationL(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_refutationL___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Problem_provable(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_provable___boxed(lean_object*);
static const lean_string_object lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_phaseProblems_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "a required path check failed"};
static const lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_phaseProblems_spec__0___closed__0 = (const lean_object*)&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_phaseProblems_spec__0___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_phaseProblems_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_phaseProblems___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_phaseProblems___closed__0 = (const lean_object*)&lp_choreo_Choreo_phaseProblems___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseProblems(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Routine_twinOf_spec__0(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_Routine_twinOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_Routine_twinOf___closed__0 = (const lean_object*)&lp_choreo_Choreo_Routine_twinOf___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_twinOf(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_phaseProofTerm___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "by decide +kernel"};
static const lean_object* lp_choreo_Choreo_phaseProofTerm___closed__0 = (const lean_object*)&lp_choreo_Choreo_phaseProofTerm___closed__0_value;
static const lean_string_object lp_choreo_Choreo_phaseProofTerm___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "Phase.check_shift (ph := ph"};
static const lean_object* lp_choreo_Choreo_phaseProofTerm___closed__1 = (const lean_object*)&lp_choreo_Choreo_phaseProofTerm___closed__1_value;
static const lean_string_object lp_choreo_Choreo_phaseProofTerm___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = ") rfl rfl rfl rfl rfl rfl rfl ph"};
static const lean_object* lp_choreo_Choreo_phaseProofTerm___closed__2 = (const lean_object*)&lp_choreo_Choreo_phaseProofTerm___closed__2_value;
static const lean_string_object lp_choreo_Choreo_phaseProofTerm___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "_ok"};
static const lean_object* lp_choreo_Choreo_phaseProofTerm___closed__3 = (const lean_object*)&lp_choreo_Choreo_phaseProofTerm___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseProofTerm(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_phaseDef___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "def ph"};
static const lean_object* lp_choreo_Choreo_phaseDef___closed__0 = (const lean_object*)&lp_choreo_Choreo_phaseDef___closed__0_value;
static const lean_string_object lp_choreo_Choreo_phaseDef___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " : Phase := "};
static const lean_object* lp_choreo_Choreo_phaseDef___closed__1 = (const lean_object*)&lp_choreo_Choreo_phaseDef___closed__1_value;
static const lean_string_object lp_choreo_Choreo_phaseDef___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "\n"};
static const lean_object* lp_choreo_Choreo_phaseDef___closed__2 = (const lean_object*)&lp_choreo_Choreo_phaseDef___closed__2_value;
static const lean_string_object lp_choreo_Choreo_phaseDef___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = " : Phase := { ph"};
static const lean_object* lp_choreo_Choreo_phaseDef___closed__3 = (const lean_object*)&lp_choreo_Choreo_phaseDef___closed__3_value;
static const lean_string_object lp_choreo_Choreo_phaseDef___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " with t0 := "};
static const lean_object* lp_choreo_Choreo_phaseDef___closed__4 = (const lean_object*)&lp_choreo_Choreo_phaseDef___closed__4_value;
static const lean_string_object lp_choreo_Choreo_phaseDef___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = ", t1 := "};
static const lean_object* lp_choreo_Choreo_phaseDef___closed__5 = (const lean_object*)&lp_choreo_Choreo_phaseDef___closed__5_value;
static const lean_string_object lp_choreo_Choreo_phaseDef___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " }\n"};
static const lean_object* lp_choreo_Choreo_phaseDef___closed__6 = (const lean_object*)&lp_choreo_Choreo_phaseDef___closed__6_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseDef(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "theorem ph"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "_ok : Phase.check cfg ph"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = " = true := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__2_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = "#eval IO.println \"PHASE "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__3 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__3_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "\"\n\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_phaseProofs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_choreo_Choreo_phaseProofs___closed__0 = (const lean_object*)&lp_choreo_Choreo_phaseProofs___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseProofs(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transitionsOf_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transitionsOf_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___lam__0(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___lam__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "hold"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__0_value;
static lean_once_cell_t lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_choreo_Choreo_transitionsOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_transitionsOf___closed__0 = (const lean_object*)&lp_choreo_Choreo_transitionsOf___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_transitionsOf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_fieldBinders___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 117, .m_capacity = 117, .m_length = 116, .m_data = "(K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K]"};
static const lean_object* lp_choreo_Choreo_fieldBinders___closed__0 = (const lean_object*)&lp_choreo_Choreo_fieldBinders___closed__0_value;
LEAN_EXPORT const lean_object* lp_choreo_Choreo_fieldBinders = (const lean_object*)&lp_choreo_Choreo_fieldBinders___closed__0_value;
static const lean_string_object lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "(allChecked_cons ph"};
static const lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__0 = (const lean_object*)&lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__0_value;
static const lean_string_object lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "_ok "};
static const lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1 = (const lean_object*)&lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1_value;
static const lean_string_object lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = ")"};
static const lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2 = (const lean_object*)&lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldrTR___at___00Choreo_chainOf_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_chainOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "allChecked_nil"};
static const lean_object* lp_choreo_Choreo_chainOf___closed__0 = (const lean_object*)&lp_choreo_Choreo_chainOf___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_chainOf(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Built_formationOk_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Built_formationOk_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Built_formationOk(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Built_formationOk___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__0(uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Built_movementOk(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Built_movementOk___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Built_musicOk(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Built_musicOk___boxed(lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_transitionOk(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_transitionOk___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_brokenLine(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_ptL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟨"};
static const lean_object* lp_choreo_Choreo_ptL___closed__0 = (const lean_object*)&lp_choreo_Choreo_ptL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_ptL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ", "};
static const lean_object* lp_choreo_Choreo_ptL___closed__1 = (const lean_object*)&lp_choreo_Choreo_ptL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_ptL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 1, .m_data = "⟩"};
static const lean_object* lp_choreo_Choreo_ptL___closed__2 = (const lean_object*)&lp_choreo_Choreo_ptL___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_ptL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_ptL___boxed(lean_object*);
static const lean_closure_object lp_choreo_Choreo_stateL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_ptL___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_stateL___closed__0 = (const lean_object*)&lp_choreo_Choreo_stateL___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_stateL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_orbitL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_opL___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_opL___lam__0___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_opL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Op.move "};
static const lean_object* lp_choreo_Choreo_opL___closed__0 = (const lean_object*)&lp_choreo_Choreo_opL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_opL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = " "};
static const lean_object* lp_choreo_Choreo_opL___closed__1 = (const lean_object*)&lp_choreo_Choreo_opL___closed__1_value;
static const lean_closure_object lp_choreo_Choreo_opL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_certL, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_opL___closed__2 = (const lean_object*)&lp_choreo_Choreo_opL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_opL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Op.turn "};
static const lean_object* lp_choreo_Choreo_opL___closed__3 = (const lean_object*)&lp_choreo_Choreo_opL___closed__3_value;
static const lean_closure_object lp_choreo_Choreo_opL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_orbitL, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_opL___closed__4 = (const lean_object*)&lp_choreo_Choreo_opL___closed__4_value;
static const lean_closure_object lp_choreo_Choreo_opL___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_opL___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_opL___closed__5 = (const lean_object*)&lp_choreo_Choreo_opL___closed__5_value;
static const lean_string_object lp_choreo_Choreo_opL___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Op.slide "};
static const lean_object* lp_choreo_Choreo_opL___closed__6 = (const lean_object*)&lp_choreo_Choreo_opL___closed__6_value;
static const lean_string_object lp_choreo_Choreo_opL___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Op.par "};
static const lean_object* lp_choreo_Choreo_opL___closed__7 = (const lean_object*)&lp_choreo_Choreo_opL___closed__7_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_opL(lean_object*);
static const lean_string_object lp_choreo_Choreo_predL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "Pred.anything"};
static const lean_object* lp_choreo_Choreo_predL___closed__0 = (const lean_object*)&lp_choreo_Choreo_predL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_predL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(Pred.isAt "};
static const lean_object* lp_choreo_Choreo_predL___closed__1 = (const lean_object*)&lp_choreo_Choreo_predL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_predL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "(Pred.separated "};
static const lean_object* lp_choreo_Choreo_predL___closed__2 = (const lean_object*)&lp_choreo_Choreo_predL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_predL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "(Pred.onCircle "};
static const lean_object* lp_choreo_Choreo_predL___closed__3 = (const lean_object*)&lp_choreo_Choreo_predL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_predL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "(Pred.twoGroups "};
static const lean_object* lp_choreo_Choreo_predL___closed__4 = (const lean_object*)&lp_choreo_Choreo_predL___closed__4_value;
static const lean_string_object lp_choreo_Choreo_predL___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "(Pred.splitAt "};
static const lean_object* lp_choreo_Choreo_predL___closed__5 = (const lean_object*)&lp_choreo_Choreo_predL___closed__5_value;
static const lean_string_object lp_choreo_Choreo_predL___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(Pred.both "};
static const lean_object* lp_choreo_Choreo_predL___closed__6 = (const lean_object*)&lp_choreo_Choreo_predL___closed__6_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_predL(lean_object*);
static const lean_string_object lp_choreo_Choreo_programSource_seqL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Prog.skip"};
static const lean_object* lp_choreo_Choreo_programSource_seqL___closed__0 = (const lean_object*)&lp_choreo_Choreo_programSource_seqL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_programSource_seqL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(Prog.step "};
static const lean_object* lp_choreo_Choreo_programSource_seqL___closed__1 = (const lean_object*)&lp_choreo_Choreo_programSource_seqL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_programSource_seqL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "(Prog.seq (Prog.step "};
static const lean_object* lp_choreo_Choreo_programSource_seqL___closed__2 = (const lean_object*)&lp_choreo_Choreo_programSource_seqL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_programSource_seqL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ") "};
static const lean_object* lp_choreo_Choreo_programSource_seqL___closed__3 = (const lean_object*)&lp_choreo_Choreo_programSource_seqL___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_programSource_seqL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_programSource_seqL___boxed(lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "def st"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = " : State := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "def step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__2_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = " : Step := { op := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__3 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__3_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = ", requires := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__4 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__4_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = ", ensures := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__5_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_programSource_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "step"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programSource_spec__1___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_programSource_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programSource_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_programSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "\n/-! The program -/\n"};
static const lean_object* lp_choreo_Choreo_programSource___closed__0 = (const lean_object*)&lp_choreo_Choreo_programSource___closed__0_value;
static const lean_string_object lp_choreo_Choreo_programSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 20, .m_capacity = 20, .m_length = 19, .m_data = "def st0 : State := "};
static const lean_object* lp_choreo_Choreo_programSource___closed__1 = (const lean_object*)&lp_choreo_Choreo_programSource___closed__1_value;
static const lean_string_object lp_choreo_Choreo_programSource___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "def program : Prog := "};
static const lean_object* lp_choreo_Choreo_programSource___closed__2 = (const lean_object*)&lp_choreo_Choreo_programSource___closed__2_value;
static const lean_string_object lp_choreo_Choreo_programSource___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\n\n"};
static const lean_object* lp_choreo_Choreo_programSource___closed__3 = (const lean_object*)&lp_choreo_Choreo_programSource___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_programSource(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_posL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_posL___boxed(lean_object*);
static const lean_string_object lp_choreo_Choreo_tOpL___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "(.translate "};
static const lean_object* lp_choreo_Choreo_tOpL___closed__0 = (const lean_object*)&lp_choreo_Choreo_tOpL___closed__0_value;
static const lean_string_object lp_choreo_Choreo_tOpL___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "/"};
static const lean_object* lp_choreo_Choreo_tOpL___closed__1 = (const lean_object*)&lp_choreo_Choreo_tOpL___closed__1_value;
static const lean_string_object lp_choreo_Choreo_tOpL___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "(.rotate "};
static const lean_object* lp_choreo_Choreo_tOpL___closed__2 = (const lean_object*)&lp_choreo_Choreo_tOpL___closed__2_value;
static const lean_string_object lp_choreo_Choreo_tOpL___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(.reflectV "};
static const lean_object* lp_choreo_Choreo_tOpL___closed__3 = (const lean_object*)&lp_choreo_Choreo_tOpL___closed__3_value;
static const lean_string_object lp_choreo_Choreo_tOpL___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "(.reflectH "};
static const lean_object* lp_choreo_Choreo_tOpL___closed__4 = (const lean_object*)&lp_choreo_Choreo_tOpL___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_tOpL(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_algebraRuns_spec__0(lean_object*, lean_object*);
static const lean_ctor_object lp_choreo_Choreo_algebraRuns___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_algebraRuns___closed__0 = (const lean_object*)&lp_choreo_Choreo_algebraRuns___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_algebraRuns(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_algebraProofs_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_algebraProofs_spec__1_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_algebraProofs_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "def run"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "Start : Algebra.Formation := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__1_value;
static const lean_array_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__2_value;
static const lean_closure_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_posL___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__3 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__3_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "Ops : List Algebra.TOp := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__4 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__4_value;
static const lean_closure_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_tOpL, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "theorem run"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__6 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__6_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 33, .m_data = "_valid : Algebra.RoutineValid run"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__7 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__7_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ops "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__8 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__8_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = " run"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__9 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__9_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "Start :=\n  Algebra.routine_valid_of_start rfl (by decide +kernel)\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__10 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__10_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 63, .m_capacity = 63, .m_length = 62, .m_data = "_lands_on_stage : Algebra.Formation.map' (Algebra.applyAll run"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__11 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__11_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Ops) run"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__12 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__12_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Start = "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__13 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__13_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = " := by decide +kernel\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__14 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__14_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "#eval IO.println \"ALGEBRA "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__15 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__15_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16_value;
static const lean_ctor_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 2}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__17 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__17_value;
static const lean_ctor_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__17_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__18 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__18_value;
static const lean_ctor_object lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*11 + 0, .m_other = 11, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_phaseProofs___closed__0_value),((lean_object*)&lp_choreo_Choreo_phaseProofs___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_phaseProofs___closed__0_value),((lean_object*)&lp_choreo_Choreo_phaseProofs___closed__0_value),((lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__18_value),((lean_object*)&lp_choreo_Choreo_phaseProofs___closed__0_value),((lean_object*)&lp_choreo_Choreo_phaseProofs___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__19 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__19_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_algebraProofs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 45, .m_capacity = 45, .m_length = 44, .m_data = "\n/-! Inherited from the movement algebra -/\n"};
static const lean_object* lp_choreo_Choreo_algebraProofs___closed__0 = (const lean_object*)&lp_choreo_Choreo_algebraProofs___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_algebraProofs(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_programProofs_chain___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "Triple.skip"};
static const lean_object* lp_choreo_Choreo_programProofs_chain___closed__0 = (const lean_object*)&lp_choreo_Choreo_programProofs_chain___closed__0_value;
static const lean_string_object lp_choreo_Choreo_programProofs_chain___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "(step"};
static const lean_object* lp_choreo_Choreo_programProofs_chain___closed__1 = (const lean_object*)&lp_choreo_Choreo_programProofs_chain___closed__1_value;
static const lean_string_object lp_choreo_Choreo_programProofs_chain___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "_ok K)"};
static const lean_object* lp_choreo_Choreo_programProofs_chain___closed__2 = (const lean_object*)&lp_choreo_Choreo_programProofs_chain___closed__2_value;
static const lean_string_object lp_choreo_Choreo_programProofs_chain___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "(Triple.seq (step"};
static const lean_object* lp_choreo_Choreo_programProofs_chain___closed__3 = (const lean_object*)&lp_choreo_Choreo_programProofs_chain___closed__3_value;
static const lean_string_object lp_choreo_Choreo_programProofs_chain___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "_ok K) "};
static const lean_object* lp_choreo_Choreo_programProofs_chain___closed__4 = (const lean_object*)&lp_choreo_Choreo_programProofs_chain___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_programProofs_chain(lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "theorem step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 23, .m_data = " : Triple K cfg (· = st"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = ") (Prog.step step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__2_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 9, .m_data = ") (· = st"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__3 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__3_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 86, .m_capacity = 86, .m_length = 85, .m_data = ") :=\n  Step.triple_at (by decide +kernel) (by decide +kernel)\n#eval IO.println \"STEP "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__4 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__4_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 131, .m_capacity = 131, .m_length = 130, .m_data = "/-- The state the previous step leaves does not meet what this step requires. This says nothing about a collision. -/\ntheorem link"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "_broken : step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ".requires.holds st"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = " = false := by decide +kernel\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "_contract_unmet : step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ".ok cfg st"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = " = false := Step.not_ok_of_requires link"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "_broken\n#eval IO.println \"LINKBROKEN "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "theorem link"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_ok : step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = " = true := by decide +kernel\n#eval IO.println \"LINK "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_programProofs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "\n/-! The contracts -/\n"};
static const lean_object* lp_choreo_Choreo_programProofs___closed__0 = (const lean_object*)&lp_choreo_Choreo_programProofs___closed__0_value;
static const lean_string_object lp_choreo_Choreo_programProofs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 293, .m_capacity = 293, .m_length = 290, .m_data = "\n/-- **The composition.** Each step's guarantee meets the next step's requirement, so the whole program holds. -/\ntheorem program_ok (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Triple K cfg (· = st0) program (· = st"};
static const lean_object* lp_choreo_Choreo_programProofs___closed__1 = (const lean_object*)&lp_choreo_Choreo_programProofs___closed__1_value;
static const lean_string_object lp_choreo_Choreo_programProofs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = ") :=\n  "};
static const lean_object* lp_choreo_Choreo_programProofs___closed__2 = (const lean_object*)&lp_choreo_Choreo_programProofs___closed__2_value;
static const lean_string_object lp_choreo_Choreo_programProofs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "\n#eval IO.println \"COMPOSED\"\n#print axioms program_ok\n"};
static const lean_object* lp_choreo_Choreo_programProofs___closed__3 = (const lean_object*)&lp_choreo_Choreo_programProofs___closed__3_value;
static const lean_string_object lp_choreo_Choreo_programProofs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 161, .m_capacity = 161, .m_length = 160, .m_data = "theorem program_plays_this_routine : samePhases cfg.n (Prog.exec cfg program 0 st0).1 routine.phases = true := by decide +kernel\n#eval IO.println \"SAMEROUTINE\"\n"};
static const lean_object* lp_choreo_Choreo_programProofs___closed__4 = (const lean_object*)&lp_choreo_Choreo_programProofs___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_programProofs(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__0(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__0___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__1(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1___boxed(lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "def idea"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "Cfg : Config := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "idea"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__2_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Cfg"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__3 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__3_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "theorem idea"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__4 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__4_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 33, .m_data = "_is_unsafe : ¬ PhaseSpec Rat idea"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "Cfg idea"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__6 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__6_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " :=\n  "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__7 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__7_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "#eval IO.println \"REJECTED "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__8 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__8_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ph"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "def tr"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = " : Transition := "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "theorem tr"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__2_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = " : TransitionValid K routine tr"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__3 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__3_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = " :=\n  Transition.valid (r := routine) (tr := tr"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__4 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__4_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = ") (by decide +kernel) "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = " K\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__6 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__6_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 30, .m_capacity = 30, .m_length = 29, .m_data = "#eval IO.println \"TRANSITION "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__7 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__7_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_proofSource___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "\nend Generated\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__0 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__0_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "#print axioms routine_moves_safely\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__1 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__1_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = "#eval IO.println \"VERIFIED\"\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__2 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__2_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 226, .m_capacity = 226, .m_length = 225, .m_data = "import Choreo.Source\nimport Choreo.QuickRefute\nimport Choreo.Tolerance\nimport Choreo.Transforms\nimport Choreo.Verification\nopen Choreo\n\n-- Generated by the planner. Lean's kernel checks everything below.\nnamespace Generated\n\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__3 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__3_value;
static const lean_closure_object lp_choreo_Choreo_proofSource___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_proofSource___lam__0___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_proofSource___closed__4 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__4_value;
static const lean_closure_object lp_choreo_Choreo_proofSource___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Choreo_proofSource___lam__1, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_Choreo_proofSource___closed__5 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__5_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "def cfg : Config := "};
static const lean_object* lp_choreo_Choreo_proofSource___closed__6 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__6_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 34, .m_capacity = 34, .m_length = 31, .m_data = "def routine : Routine := ⟨cfg, "};
static const lean_object* lp_choreo_Choreo_proofSource___closed__7 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__7_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 2, .m_data = "⟩\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__8 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__8_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 24, .m_capacity = 24, .m_length = 23, .m_data = "def asks : List Ask := "};
static const lean_object* lp_choreo_Choreo_proofSource___closed__9 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__9_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 57, .m_capacity = 57, .m_length = 56, .m_data = "#eval IO.println s!\"FINGERPRINT {routine.fingerprint}\"\n\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__10 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__10_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "#eval IO.println \"NOT_PROVED\"\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__11 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__11_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "/-- This formation is proved broken, by one pair out of place. -/\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__12 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__12_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 69, .m_capacity = 69, .m_length = 67, .m_data = "theorem formation_is_broken : ¬ Ask.Holds Rat routine (.endsInLine "};
static const lean_object* lp_choreo_Choreo_proofSource___closed__13 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__13_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 29, .m_capacity = 29, .m_length = 28, .m_data = ") :=\n  refute_line (ph := ph"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__14 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__14_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 48, .m_capacity = 48, .m_length = 47, .m_data = ") rfl (by decide +kernel) (by decide +kernel)\n\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__15 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__15_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 35, .m_capacity = 35, .m_length = 34, .m_data = "#print axioms formation_is_broken\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__16 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__16_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 28, .m_capacity = 28, .m_length = 27, .m_data = "#eval IO.println \"REFUTED\"\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__17 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__17_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "cfg"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__18 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__18_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 67, .m_capacity = 67, .m_length = 66, .m_data = "/-- This exact routine is proved unsafe, by a concrete moment. -/\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__19 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__19_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 85, .m_capacity = 85, .m_length = 83, .m_data = "theorem routine_is_unsafe : ¬ RoutineSpec Rat routine :=\n  refute_routine (ph := ph"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__20 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__20_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 50, .m_data = ") (by simp [routine]) (show ¬ PhaseSpec Rat cfg ph"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__21 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__21_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " from "};
static const lean_object* lp_choreo_Choreo_proofSource___closed__22 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__22_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ")\n\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__23 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__23_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "#print axioms routine_is_unsafe\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__24 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__24_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 124, .m_capacity = 124, .m_length = 123, .m_data = "/-- The main result: in this exact routine, nobody comes too close, leaves the stage or moves too fast, at any instant. -/\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__25 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__25_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 233, .m_capacity = 233, .m_length = 232, .m_data = "theorem routine_moves_safely (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : MovementProved K routine asks :=\n  movement_part (r := routine) (by decide +kernel) "};
static const lean_object* lp_choreo_Choreo_proofSource___closed__26 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__26_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 58, .m_capacity = 58, .m_length = 57, .m_data = " (by decide +kernel) K\n#eval IO.println \"PART movement\"\n\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__27 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__27_value;
static lean_once_cell_t lp_choreo_Choreo_proofSource___closed__28_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_proofSource___closed__28;
static lean_once_cell_t lp_choreo_Choreo_proofSource___closed__29_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_proofSource___closed__29;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 122, .m_capacity = 122, .m_length = 121, .m_data = "/-- In any real performance where each dancer stays within the allowance of the plan, everyone keeps the smaller gap. -/\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__30 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__30_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 175, .m_capacity = 175, .m_length = 174, .m_data = "theorem routine_forgiving (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Routine.Forgiving K routine ("};
static const lean_object* lp_choreo_Choreo_proofSource___closed__31 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__31_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = ") ("};
static const lean_object* lp_choreo_Choreo_proofSource___closed__32 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__32_value;
static const lean_string_object lp_choreo_Choreo_proofSource___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 190, .m_capacity = 190, .m_length = 189, .m_data = ") :=\n  Routine.forgiving_of_movement (routine_moves_safely K) (by decide +kernel) (by decide +kernel) (by decide +kernel)\n#eval IO.println \"PART forgiving\"\n#print axioms routine_forgiving\n\n"};
static const lean_object* lp_choreo_Choreo_proofSource___closed__33 = (const lean_object*)&lp_choreo_Choreo_proofSource___closed__33_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_demoData___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 149, .m_capacity = 149, .m_length = 148, .m_data = "import Choreo.Compose\nimport Choreo.QuickRefute\nopen Choreo\n\n-- Generated from demo-request.json. Regenerate with `make demo`.\nnamespace Generated\n\n"};
static const lean_object* lp_choreo_Choreo_demoData___closed__0 = (const lean_object*)&lp_choreo_Choreo_demoData___closed__0_value;
static const lean_string_object lp_choreo_Choreo_demoData___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 17, .m_capacity = 17, .m_length = 16, .m_data = "\n\nend Generated\n"};
static const lean_object* lp_choreo_Choreo_demoData___closed__1 = (const lean_object*)&lp_choreo_Choreo_demoData___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_demoData(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1(lean_object*, size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_foldrTR___at___00Choreo_demoProofs_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 220, .m_capacity = 220, .m_length = 219, .m_data = "import Choreo.Demo\nimport Choreo.Recipes\nimport Choreo.Tolerance\nimport Choreo.Transforms\nimport Choreo.Verification\nopen Choreo Generated\nattribute [local instance] Lean.Grind.Semiring.natCast Lean.Grind.Ring.intCast\n\n"};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__0 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__0_value;
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 418, .m_capacity = 418, .m_length = 417, .m_data = "\n/-- Lean's checker is sound: passing it implies safety and the requests. -/\ntheorem Final.checker_is_sound {r : Routine} {asks : List Ask} (hg : r.checkGlobal = true) (hp : AllChecked r.cfg r.phases)\n    (ha : asks.all (Ask.check r) = true) (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K r asks :=\n  Routine.verified hg hp ha K\n\n"};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__1 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__1_value;
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1918, .m_capacity = 1918, .m_length = 1887, .m_data = "/-- Passing through a gap is safe, for any positions. -/\ntheorem Final.passing_through_a_gap_is_safe {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {a₁ b₁ a₂ b₂ : Pt} {g d : Int} (hs : a₁.x = a₂.x + g) (he : b₁.x = b₂.x + g)\n    (h0 : 0 ≤ d) (hd : d ≤ g) (t : K) : ((d : Int) : K) ^ 2 ≤ dist2 (easePath a₁ b₁) (easePath a₂ b₂) t :=\n  Choreo.passing_through_a_gap_is_safe hs he h0 hd t\n\n/-- Swapping places along one line collides, for any positions. -/\ntheorem Final.swapping_along_a_line_always_collides {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] (a b : Pt) (h : a.x = b.x) :\n    dist2 (easePath a b) (easePath b a) (1 / 2 : K) = 0 :=\n  Choreo.swapping_along_a_line_always_collides a b h\n\n/-- The three parts compose into the whole-routine statement. -/\ntheorem Final.parts_compose {K : Type} [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] {r : Routine} {asks : List Ask} (hm : MovementProved K r asks) (hs : MusicalityProved r)\n    (hf : FormationProved K r asks) : Verified K r asks :=\n  Verified.of_parts hm hs hf\n\n/-- A transition follows from its own checks and phase proofs. -/\ntheorem Final.transition_valid {r : Routine} {tr : Transition} (hc : Transition.check r tr = true) (hp : AllChecked r.cfg (Transition.segment r tr))\n    (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K] [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : TransitionValid K r tr :=\n  Transition.valid hc hp K\n\n/-- The routine from demo-request.json is safe and does what was asked. -/\ntheorem Final.demo_routine_verified (K : Type) [Lean.Grind.Field K] [LE K] [LT K] [Std.LawfulOrderLT K]\n    [Std.IsLinearOrder K] [Lean.Grind.OrderedRing K] : Verified K routine asks :=\n"};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__2 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__2_value;
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 70, .m_capacity = 70, .m_length = 69, .m_data = "  Routine.verified (r := routine) (asks := asks) (by decide +kernel) "};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__3 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__3_value;
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 25, .m_capacity = 25, .m_length = 24, .m_data = " (by decide +kernel) K\n\n"};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__4 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__4_value;
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "idea0Cfg"};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__5 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__5_value;
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "idea0"};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__6 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__6_value;
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 143, .m_capacity = 143, .m_length = 141, .m_data = "/-- Walking the two lines straight through each other is unsafe. -/\ntheorem Final.naive_flip_is_unsafe : ¬ PhaseSpec Rat idea0Cfg idea0 :=\n  "};
static const lean_object* lp_choreo_Choreo_demoProofs___closed__7 = (const lean_object*)&lp_choreo_Choreo_demoProofs___closed__7_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_demoProofs(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_choreo_Choreo_ratFloat(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_ratFloat___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_jInt(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_jFloat(double);
LEAN_EXPORT lean_object* lp_choreo_Choreo_jFloat___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_jPoly_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_jPoly(lean_object*);
static const lean_string_object lp_choreo_Choreo_jRect___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "xmin"};
static const lean_object* lp_choreo_Choreo_jRect___closed__0 = (const lean_object*)&lp_choreo_Choreo_jRect___closed__0_value;
static const lean_string_object lp_choreo_Choreo_jRect___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "xmax"};
static const lean_object* lp_choreo_Choreo_jRect___closed__1 = (const lean_object*)&lp_choreo_Choreo_jRect___closed__1_value;
static const lean_string_object lp_choreo_Choreo_jRect___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ymin"};
static const lean_object* lp_choreo_Choreo_jRect___closed__2 = (const lean_object*)&lp_choreo_Choreo_jRect___closed__2_value;
static const lean_string_object lp_choreo_Choreo_jRect___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ymax"};
static const lean_object* lp_choreo_Choreo_jRect___closed__3 = (const lean_object*)&lp_choreo_Choreo_jRect___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_jRect(lean_object*);
static const lean_string_object lp_choreo_Choreo_certName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 52, .m_capacity = 52, .m_length = 51, .m_data = "They stay in different rows, so they can never meet"};
static const lean_object* lp_choreo_Choreo_certName___closed__0 = (const lean_object*)&lp_choreo_Choreo_certName___closed__0_value;
static const lean_string_object lp_choreo_Choreo_certName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 55, .m_capacity = 55, .m_length = 54, .m_data = "They stay in different columns, so they can never meet"};
static const lean_object* lp_choreo_Choreo_certName___closed__1 = (const lean_object*)&lp_choreo_Choreo_certName___closed__1_value;
static const lean_string_object lp_choreo_Choreo_certName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 65, .m_capacity = 65, .m_length = 64, .m_data = "Distance curve is trapped above the limit, after splitting time "};
static const lean_object* lp_choreo_Choreo_certName___closed__2 = (const lean_object*)&lp_choreo_Choreo_certName___closed__2_value;
static const lean_string_object lp_choreo_Choreo_certName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = " times"};
static const lean_object* lp_choreo_Choreo_certName___closed__3 = (const lean_object*)&lp_choreo_Choreo_certName___closed__3_value;
static const lean_string_object lp_choreo_Choreo_certName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Distance curve is trapped above the limit"};
static const lean_object* lp_choreo_Choreo_certName___closed__4 = (const lean_object*)&lp_choreo_Choreo_certName___closed__4_value;
static const lean_string_object lp_choreo_Choreo_certName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "They move as one, at a fixed distance"};
static const lean_object* lp_choreo_Choreo_certName___closed__5 = (const lean_object*)&lp_choreo_Choreo_certName___closed__5_value;
static const lean_string_object lp_choreo_Choreo_certName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = "They stay exactly the same distance apart throughout"};
static const lean_object* lp_choreo_Choreo_certName___closed__6 = (const lean_object*)&lp_choreo_Choreo_certName___closed__6_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_certName(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_certDepth(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_certDepth___boxed(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_secondsAt___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static double lp_choreo_Choreo_secondsAt___closed__0;
LEAN_EXPORT double lp_choreo_Choreo_secondsAt(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_secondsAt___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT double lp_choreo_Choreo_distFloat(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_distFloat___boxed(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_problemJson___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_problemJson___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_problemJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__0 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__0_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "collision"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__1 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__1_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__1_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__2 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__2_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__0_value),((lean_object*)&lp_choreo_Choreo_problemJson___closed__2_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__3 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__3_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "phase"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__4 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__4_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "i"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__5 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__5_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "j"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__6 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__6_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "t"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__7 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__7_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tNum"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__8 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__8_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "tDen"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__9 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__9_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "second"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__10 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__10_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "distance"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__11 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__11_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "text"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__12 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__12_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "offstage"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__13 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__13_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__13_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__14 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__14_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__0_value),((lean_object*)&lp_choreo_Choreo_problemJson___closed__14_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__15 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__15_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "fast"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__16 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__16_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__16_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__17 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__17_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__0_value),((lean_object*)&lp_choreo_Choreo_problemJson___closed__17_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__18 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__18_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "unproved"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__19 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__19_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__19_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__20 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__20_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__0_value),((lean_object*)&lp_choreo_Choreo_problemJson___closed__20_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__21 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__21_value;
static const lean_string_object lp_choreo_Choreo_problemJson___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "other"};
static const lean_object* lp_choreo_Choreo_problemJson___closed__22 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__22_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__22_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__23 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__23_value;
static const lean_ctor_object lp_choreo_Choreo_problemJson___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_problemJson___closed__0_value),((lean_object*)&lp_choreo_Choreo_problemJson___closed__23_value)}};
static const lean_object* lp_choreo_Choreo_problemJson___closed__24 = (const lean_object*)&lp_choreo_Choreo_problemJson___closed__24_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_tightestPair_spec__0(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0;
static lean_once_cell_t lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg___boxed(lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_tightestPair___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_tightestPair___closed__0;
static lean_once_cell_t lp_choreo_Choreo_tightestPair___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_tightestPair___closed__1;
static lean_once_cell_t lp_choreo_Choreo_tightestPair___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_tightestPair___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_tightestPair(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_tightestPair___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "how"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "depth"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "lean"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__2(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "X"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "Y"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "W"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "index"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__0 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__0_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "t0"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__1 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__1_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "t1"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__2 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__2_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "label"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__3 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__3_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bounds"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__4 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__4_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "paths"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__5 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__5_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "ok"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__6 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__6_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "tight"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__7 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__7_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "names"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__8 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__8_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = " and "};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__9 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__9_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "coefficients"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__10 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__10_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "certs"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__11 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__11_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "pairsByMethod"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__12 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__12_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "together"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__13 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__13_value;
static const lean_string_object lp_choreo_Choreo_phaseJson___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "curve"};
static const lean_object* lp_choreo_Choreo_phaseJson___closed__14 = (const lean_object*)&lp_choreo_Choreo_phaseJson___closed__14_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseJson(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "pos"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0;
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1;
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2;
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3;
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4;
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5;
static lean_once_cell_t lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6;
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2(lean_object*, lean_object*, lean_object*);
static const lean_array_object lp_choreo_Choreo_samplesJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_Choreo_samplesJson___closed__0 = (const lean_object*)&lp_choreo_Choreo_samplesJson___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_samplesJson(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stepsHeard_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_stepsHeard___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Dance "};
static const lean_object* lp_choreo_Choreo_stepsHeard___closed__0 = (const lean_object*)&lp_choreo_Choreo_stepsHeard___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_stepsHeard(lean_object*);
static const lean_string_object lp_choreo_Choreo_moveName___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 33, .m_capacity = 33, .m_length = 32, .m_data = "Enter from the wings and form a "};
static const lean_object* lp_choreo_Choreo_moveName___closed__0 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__0_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Form a "};
static const lean_object* lp_choreo_Choreo_moveName___closed__1 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__1_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "Flip the lines"};
static const lean_object* lp_choreo_Choreo_moveName___closed__2 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__2_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Rotate "};
static const lean_object* lp_choreo_Choreo_moveName___closed__3 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__3_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = " degrees "};
static const lean_object* lp_choreo_Choreo_moveName___closed__4 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__4_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "clockwise"};
static const lean_object* lp_choreo_Choreo_moveName___closed__5 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__5_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "counter-clockwise"};
static const lean_object* lp_choreo_Choreo_moveName___closed__6 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__6_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 36, .m_capacity = 36, .m_length = 35, .m_data = "Turn the rings against each other, "};
static const lean_object* lp_choreo_Choreo_moveName___closed__7 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__7_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = " degrees"};
static const lean_object* lp_choreo_Choreo_moveName___closed__8 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__8_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = "Weave: neighbours trade places"};
static const lean_object* lp_choreo_Choreo_moveName___closed__9 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__9_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 32, .m_capacity = 32, .m_length = 31, .m_data = "Ripple: one group after another"};
static const lean_object* lp_choreo_Choreo_moveName___closed__10 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__10_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 21, .m_capacity = 21, .m_length = 20, .m_data = "Gather and burst out"};
static const lean_object* lp_choreo_Choreo_moveName___closed__11 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__11_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 18, .m_capacity = 18, .m_length = 17, .m_data = "Follow the leader"};
static const lean_object* lp_choreo_Choreo_moveName___closed__12 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__12_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 42, .m_capacity = 42, .m_length = 41, .m_data = "Zipper: the sides pass through each other"};
static const lean_object* lp_choreo_Choreo_moveName___closed__13 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__13_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 44, .m_capacity = 44, .m_length = 43, .m_data = "The cast changes: one group off, another on"};
static const lean_object* lp_choreo_Choreo_moveName___closed__14 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__14_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 39, .m_capacity = 39, .m_length = 38, .m_data = "The rest come on and everyone forms a "};
static const lean_object* lp_choreo_Choreo_moveName___closed__15 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__15_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "Leave the stage"};
static const lean_object* lp_choreo_Choreo_moveName___closed__16 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__16_value;
static const lean_string_object lp_choreo_Choreo_moveName___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = "Leave in new lines"};
static const lean_object* lp_choreo_Choreo_moveName___closed__17 = (const lean_object*)&lp_choreo_Choreo_moveName___closed__17_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_moveName(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "frame"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "members"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__2_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dx"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__3 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__3_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dy"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__4 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__4_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pairs"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__5 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__5_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mirror"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__6 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__6_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__4(lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "frames"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__0 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__0_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "holds"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__1 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__1_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "moves"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__2 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__2_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "seconds"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__3 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__3_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bends"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__4 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__4_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ways"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__5 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__5_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "genre"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__6 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__6_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "landing"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__7 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__7_value;
static const lean_string_object lp_choreo_Choreo_sceneJson___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rules"};
static const lean_object* lp_choreo_Choreo_sceneJson___closed__8 = (const lean_object*)&lp_choreo_Choreo_sceneJson___closed__8_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneJson(lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneJson___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_askPhases(lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "before"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "after"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__1_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "opKind"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__2 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__2_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "rule"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__3 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__3_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "checked"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__4 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__4_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "algebra"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "translate"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "rotate"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "reflect"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "requires"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ensures"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "requiresLean"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ensuresLean"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "requiresOk"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "runsOk"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "why"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__15 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__15_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "surface"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__16 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__16_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "section"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__17 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__17_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "counts"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__18 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__18_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "steps"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "last"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1(lean_object*, lean_object*);
static const lean_ctor_object lp_choreo_Choreo_programJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_samplesJson___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_programJson___closed__0 = (const lean_object*)&lp_choreo_Choreo_programJson___closed__0_value;
static const lean_string_object lp_choreo_Choreo_programJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "composable"};
static const lean_object* lp_choreo_Choreo_programJson___closed__1 = (const lean_object*)&lp_choreo_Choreo_programJson___closed__1_value;
static const lean_string_object lp_choreo_Choreo_programJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "runs"};
static const lean_object* lp_choreo_Choreo_programJson___closed__2 = (const lean_object*)&lp_choreo_Choreo_programJson___closed__2_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_programJson(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__9(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "problems"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "title"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "at"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__2_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ticks"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__3 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__1(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "move"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__11(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "phases"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "group"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "statement"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__2_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "category"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__3 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__3_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "formation"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__4 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__4_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "movement"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__5 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__5_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_report_spec__12(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_report_spec__12___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___lam__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "tr"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "startPositions"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "finishPositions"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2_value;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Choreo_report___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "config"};
static const lean_object* lp_choreo_Choreo_report___closed__0 = (const lean_object*)&lp_choreo_Choreo_report___closed__0_value;
static const lean_string_object lp_choreo_Choreo_report___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "dmin"};
static const lean_object* lp_choreo_Choreo_report___closed__1 = (const lean_object*)&lp_choreo_Choreo_report___closed__1_value;
static const lean_string_object lp_choreo_Choreo_report___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "vmax"};
static const lean_object* lp_choreo_Choreo_report___closed__2 = (const lean_object*)&lp_choreo_Choreo_report___closed__2_value;
static const lean_string_object lp_choreo_Choreo_report___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "envelope"};
static const lean_object* lp_choreo_Choreo_report___closed__3 = (const lean_object*)&lp_choreo_Choreo_report___closed__3_value;
static const lean_string_object lp_choreo_Choreo_report___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "stage"};
static const lean_object* lp_choreo_Choreo_report___closed__4 = (const lean_object*)&lp_choreo_Choreo_report___closed__4_value;
static lean_once_cell_t lp_choreo_Choreo_report___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_report___closed__5;
static lean_once_cell_t lp_choreo_Choreo_report___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_report___closed__6;
static const lean_string_object lp_choreo_Choreo_report___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "ticksPerBeat"};
static const lean_object* lp_choreo_Choreo_report___closed__7 = (const lean_object*)&lp_choreo_Choreo_report___closed__7_value;
static const lean_string_object lp_choreo_Choreo_report___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bpmNum"};
static const lean_object* lp_choreo_Choreo_report___closed__8 = (const lean_object*)&lp_choreo_Choreo_report___closed__8_value;
static const lean_string_object lp_choreo_Choreo_report___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "bpmDen"};
static const lean_object* lp_choreo_Choreo_report___closed__9 = (const lean_object*)&lp_choreo_Choreo_report___closed__9_value;
static const lean_string_object lp_choreo_Choreo_report___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "total"};
static const lean_object* lp_choreo_Choreo_report___closed__10 = (const lean_object*)&lp_choreo_Choreo_report___closed__10_value;
static const lean_string_object lp_choreo_Choreo_report___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "keys"};
static const lean_object* lp_choreo_Choreo_report___closed__11 = (const lean_object*)&lp_choreo_Choreo_report___closed__11_value;
static const lean_string_object lp_choreo_Choreo_report___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "globalOk"};
static const lean_object* lp_choreo_Choreo_report___closed__12 = (const lean_object*)&lp_choreo_Choreo_report___closed__12_value;
static const lean_string_object lp_choreo_Choreo_report___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "musicality"};
static const lean_object* lp_choreo_Choreo_report___closed__13 = (const lean_object*)&lp_choreo_Choreo_report___closed__13_value;
static const lean_string_object lp_choreo_Choreo_report___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 14, .m_capacity = 14, .m_length = 13, .m_data = "movementJoins"};
static const lean_object* lp_choreo_Choreo_report___closed__14 = (const lean_object*)&lp_choreo_Choreo_report___closed__14_value;
static const lean_string_object lp_choreo_Choreo_report___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "transitions"};
static const lean_object* lp_choreo_Choreo_report___closed__15 = (const lean_object*)&lp_choreo_Choreo_report___closed__15_value;
static const lean_string_object lp_choreo_Choreo_report___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "asks"};
static const lean_object* lp_choreo_Choreo_report___closed__16 = (const lean_object*)&lp_choreo_Choreo_report___closed__16_value;
static const lean_string_object lp_choreo_Choreo_report___closed__17_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "rejected"};
static const lean_object* lp_choreo_Choreo_report___closed__17 = (const lean_object*)&lp_choreo_Choreo_report___closed__17_value;
static const lean_string_object lp_choreo_Choreo_report___closed__18_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "samples"};
static const lean_object* lp_choreo_Choreo_report___closed__18 = (const lean_object*)&lp_choreo_Choreo_report___closed__18_value;
static const lean_string_object lp_choreo_Choreo_report___closed__19_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "broken"};
static const lean_object* lp_choreo_Choreo_report___closed__19 = (const lean_object*)&lp_choreo_Choreo_report___closed__19_value;
static const lean_string_object lp_choreo_Choreo_report___closed__20_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "derived"};
static const lean_object* lp_choreo_Choreo_report___closed__20 = (const lean_object*)&lp_choreo_Choreo_report___closed__20_value;
static const lean_string_object lp_choreo_Choreo_report___closed__21_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scene"};
static const lean_object* lp_choreo_Choreo_report___closed__21 = (const lean_object*)&lp_choreo_Choreo_report___closed__21_value;
static const lean_string_object lp_choreo_Choreo_report___closed__22_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "plan"};
static const lean_object* lp_choreo_Choreo_report___closed__22 = (const lean_object*)&lp_choreo_Choreo_report___closed__22_value;
static const lean_string_object lp_choreo_Choreo_report___closed__23_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bpm"};
static const lean_object* lp_choreo_Choreo_report___closed__23 = (const lean_object*)&lp_choreo_Choreo_report___closed__23_value;
static const lean_string_object lp_choreo_Choreo_report___closed__24_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "n"};
static const lean_object* lp_choreo_Choreo_report___closed__24 = (const lean_object*)&lp_choreo_Choreo_report___closed__24_value;
static const lean_string_object lp_choreo_Choreo_report___closed__25_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "left"};
static const lean_object* lp_choreo_Choreo_report___closed__25 = (const lean_object*)&lp_choreo_Choreo_report___closed__25_value;
static const lean_string_object lp_choreo_Choreo_report___closed__26_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "right"};
static const lean_object* lp_choreo_Choreo_report___closed__26 = (const lean_object*)&lp_choreo_Choreo_report___closed__26_value;
static const lean_string_object lp_choreo_Choreo_report___closed__27_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "heard"};
static const lean_object* lp_choreo_Choreo_report___closed__27 = (const lean_object*)&lp_choreo_Choreo_report___closed__27_value;
static const lean_string_object lp_choreo_Choreo_report___closed__28_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "drift"};
static const lean_object* lp_choreo_Choreo_report___closed__28 = (const lean_object*)&lp_choreo_Choreo_report___closed__28_value;
static const lean_string_object lp_choreo_Choreo_report___closed__29_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "dropped"};
static const lean_object* lp_choreo_Choreo_report___closed__29 = (const lean_object*)&lp_choreo_Choreo_report___closed__29_value;
static const lean_string_object lp_choreo_Choreo_report___closed__30_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "error"};
static const lean_object* lp_choreo_Choreo_report___closed__30 = (const lean_object*)&lp_choreo_Choreo_report___closed__30_value;
static const lean_string_object lp_choreo_Choreo_report___closed__31_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "verdict"};
static const lean_object* lp_choreo_Choreo_report___closed__31 = (const lean_object*)&lp_choreo_Choreo_report___closed__31_value;
static const lean_string_object lp_choreo_Choreo_report___closed__32_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "fingerprint"};
static const lean_object* lp_choreo_Choreo_report___closed__32 = (const lean_object*)&lp_choreo_Choreo_report___closed__32_value;
static const lean_string_object lp_choreo_Choreo_report___closed__33_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "proofPath"};
static const lean_object* lp_choreo_Choreo_report___closed__33 = (const lean_object*)&lp_choreo_Choreo_report___closed__33_value;
static const lean_string_object lp_choreo_Choreo_report___closed__34_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "minSeconds"};
static const lean_object* lp_choreo_Choreo_report___closed__34 = (const lean_object*)&lp_choreo_Choreo_report___closed__34_value;
static const lean_string_object lp_choreo_Choreo_report___closed__35_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "program"};
static const lean_object* lp_choreo_Choreo_report___closed__35 = (const lean_object*)&lp_choreo_Choreo_report___closed__35_value;
static const lean_string_object lp_choreo_Choreo_report___closed__36_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "refuted"};
static const lean_object* lp_choreo_Choreo_report___closed__36 = (const lean_object*)&lp_choreo_Choreo_report___closed__36_value;
static const lean_string_object lp_choreo_Choreo_report___closed__37_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "proved"};
static const lean_object* lp_choreo_Choreo_report___closed__37 = (const lean_object*)&lp_choreo_Choreo_report___closed__37_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_report(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_ratL(lean_object* v_t_4_){
_start:
{
lean_object* v_num_5_; lean_object* v_den_6_; lean_object* v___x_7_; lean_object* v___x_8_; lean_object* v___x_9_; lean_object* v___x_10_; lean_object* v___x_11_; lean_object* v___x_12_; lean_object* v___x_13_; lean_object* v___x_14_; lean_object* v___x_15_; 
v_num_5_ = lean_ctor_get(v_t_4_, 0);
lean_inc(v_num_5_);
v_den_6_ = lean_ctor_get(v_t_4_, 1);
lean_inc(v_den_6_);
lean_dec_ref(v_t_4_);
v___x_7_ = ((lean_object*)(lp_choreo_Choreo_ratL___closed__0));
v___x_8_ = l_Int_repr(v_num_5_);
lean_dec(v_num_5_);
v___x_9_ = lean_string_append(v___x_7_, v___x_8_);
lean_dec_ref(v___x_8_);
v___x_10_ = ((lean_object*)(lp_choreo_Choreo_ratL___closed__1));
v___x_11_ = lean_string_append(v___x_9_, v___x_10_);
v___x_12_ = l_Nat_reprFast(v_den_6_);
v___x_13_ = lean_string_append(v___x_11_, v___x_12_);
lean_dec_ref(v___x_12_);
v___x_14_ = ((lean_object*)(lp_choreo_Choreo_ratL___closed__2));
v___x_15_ = lean_string_append(v___x_13_, v___x_14_);
return v___x_15_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_refutationL(lean_object* v_cfgName_26_, lean_object* v_phName_27_, lean_object* v_x_28_){
_start:
{
switch(lean_obj_tag(v_x_28_))
{
case 0:
{
lean_object* v_t_29_; lean_object* v_i_30_; lean_object* v_j_31_; lean_object* v_num_32_; lean_object* v_den_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; lean_object* v___x_39_; lean_object* v___x_40_; lean_object* v___x_41_; lean_object* v___x_42_; lean_object* v___x_43_; lean_object* v___x_44_; lean_object* v___x_45_; lean_object* v___x_46_; lean_object* v___x_47_; lean_object* v___x_48_; lean_object* v___x_49_; lean_object* v___x_50_; lean_object* v___x_51_; lean_object* v___x_52_; lean_object* v___x_53_; lean_object* v___x_54_; lean_object* v___x_55_; lean_object* v___x_56_; lean_object* v___x_57_; 
v_t_29_ = lean_ctor_get(v_x_28_, 3);
lean_inc_ref(v_t_29_);
v_i_30_ = lean_ctor_get(v_x_28_, 1);
lean_inc(v_i_30_);
v_j_31_ = lean_ctor_get(v_x_28_, 2);
lean_inc(v_j_31_);
lean_dec_ref_known(v_x_28_, 4);
v_num_32_ = lean_ctor_get(v_t_29_, 0);
lean_inc(v_num_32_);
v_den_33_ = lean_ctor_get(v_t_29_, 1);
lean_inc(v_den_33_);
lean_dec_ref(v_t_29_);
v___x_34_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__0));
v___x_35_ = lean_string_append(v___x_34_, v_cfgName_26_);
v___x_36_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__1));
v___x_37_ = lean_string_append(v___x_35_, v___x_36_);
v___x_38_ = lean_string_append(v___x_37_, v_phName_27_);
v___x_39_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__2));
v___x_40_ = lean_string_append(v___x_38_, v___x_39_);
v___x_41_ = l_Nat_reprFast(v_i_30_);
v___x_42_ = lean_string_append(v___x_40_, v___x_41_);
lean_dec_ref(v___x_41_);
v___x_43_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__3));
v___x_44_ = lean_string_append(v___x_42_, v___x_43_);
v___x_45_ = l_Nat_reprFast(v_j_31_);
v___x_46_ = lean_string_append(v___x_44_, v___x_45_);
lean_dec_ref(v___x_45_);
v___x_47_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__4));
v___x_48_ = lean_string_append(v___x_46_, v___x_47_);
v___x_49_ = l_Int_repr(v_num_32_);
lean_dec(v_num_32_);
v___x_50_ = lean_string_append(v___x_48_, v___x_49_);
lean_dec_ref(v___x_49_);
v___x_51_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__5));
v___x_52_ = lean_string_append(v___x_50_, v___x_51_);
v___x_53_ = l_Nat_reprFast(v_den_33_);
v___x_54_ = lean_string_append(v___x_52_, v___x_53_);
lean_dec_ref(v___x_53_);
v___x_55_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__6));
v___x_56_ = lean_string_append(v___x_54_, v___x_55_);
v___x_57_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_57_, 0, v___x_56_);
return v___x_57_;
}
case 1:
{
lean_object* v_i_58_; lean_object* v_t_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; lean_object* v___x_64_; lean_object* v___x_65_; lean_object* v___x_66_; lean_object* v___x_67_; lean_object* v___x_68_; lean_object* v___x_69_; lean_object* v___x_70_; lean_object* v___x_71_; lean_object* v___x_72_; lean_object* v___x_73_; lean_object* v___x_74_; lean_object* v___x_75_; 
v_i_58_ = lean_ctor_get(v_x_28_, 1);
lean_inc(v_i_58_);
v_t_59_ = lean_ctor_get(v_x_28_, 2);
lean_inc_ref(v_t_59_);
lean_dec_ref_known(v_x_28_, 3);
v___x_60_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__7));
v___x_61_ = lean_string_append(v___x_60_, v_cfgName_26_);
v___x_62_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__1));
v___x_63_ = lean_string_append(v___x_61_, v___x_62_);
v___x_64_ = lean_string_append(v___x_63_, v_phName_27_);
v___x_65_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__2));
v___x_66_ = lean_string_append(v___x_64_, v___x_65_);
v___x_67_ = l_Nat_reprFast(v_i_58_);
v___x_68_ = lean_string_append(v___x_66_, v___x_67_);
lean_dec_ref(v___x_67_);
v___x_69_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__8));
v___x_70_ = lean_string_append(v___x_68_, v___x_69_);
v___x_71_ = lp_choreo_Choreo_ratL(v_t_59_);
v___x_72_ = lean_string_append(v___x_70_, v___x_71_);
lean_dec_ref(v___x_71_);
v___x_73_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__9));
v___x_74_ = lean_string_append(v___x_72_, v___x_73_);
v___x_75_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_75_, 0, v___x_74_);
return v___x_75_;
}
default: 
{
lean_object* v___x_76_; 
lean_dec_ref(v_x_28_);
v___x_76_ = lean_box(0);
return v___x_76_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_refutationL___boxed(lean_object* v_cfgName_77_, lean_object* v_phName_78_, lean_object* v_x_79_){
_start:
{
lean_object* v_res_80_; 
v_res_80_ = lp_choreo_Choreo_refutationL(v_cfgName_77_, v_phName_78_, v_x_79_);
lean_dec_ref(v_phName_78_);
lean_dec_ref(v_cfgName_77_);
return v_res_80_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Problem_provable(lean_object* v_x_81_){
_start:
{
switch(lean_obj_tag(v_x_81_))
{
case 0:
{
uint8_t v___x_82_; 
v___x_82_ = 1;
return v___x_82_;
}
case 1:
{
uint8_t v___x_83_; 
v___x_83_ = 1;
return v___x_83_;
}
default: 
{
uint8_t v___x_84_; 
v___x_84_ = 0;
return v___x_84_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Problem_provable___boxed(lean_object* v_x_85_){
_start:
{
uint8_t v_res_86_; lean_object* v_r_87_; 
v_res_86_ = lp_choreo_Choreo_Problem_provable(v_x_85_);
lean_dec_ref(v_x_85_);
v_r_87_ = lean_box(v_res_86_);
return v_r_87_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_phaseProblems_spec__0(lean_object* v_r_89_, lean_object* v_a_90_, lean_object* v_a_91_){
_start:
{
if (lean_obj_tag(v_a_90_) == 0)
{
lean_object* v___x_92_; 
lean_dec_ref(v_r_89_);
v___x_92_ = lean_array_to_list(v_a_91_);
return v___x_92_;
}
else
{
lean_object* v_head_93_; lean_object* v_tail_94_; lean_object* v___x_96_; uint8_t v_isShared_97_; uint8_t v_isSharedCheck_119_; 
v_head_93_ = lean_ctor_get(v_a_90_, 0);
v_tail_94_ = lean_ctor_get(v_a_90_, 1);
v_isSharedCheck_119_ = !lean_is_exclusive(v_a_90_);
if (v_isSharedCheck_119_ == 0)
{
v___x_96_ = v_a_90_;
v_isShared_97_ = v_isSharedCheck_119_;
goto v_resetjp_95_;
}
else
{
lean_inc(v_tail_94_);
lean_inc(v_head_93_);
lean_dec(v_a_90_);
v___x_96_ = lean_box(0);
v_isShared_97_ = v_isSharedCheck_119_;
goto v_resetjp_95_;
}
v_resetjp_95_:
{
lean_object* v___y_99_; lean_object* v_fst_102_; lean_object* v_snd_103_; lean_object* v___x_105_; uint8_t v_isShared_106_; uint8_t v_isSharedCheck_118_; 
v_fst_102_ = lean_ctor_get(v_head_93_, 0);
v_snd_103_ = lean_ctor_get(v_head_93_, 1);
v_isSharedCheck_118_ = !lean_is_exclusive(v_head_93_);
if (v_isSharedCheck_118_ == 0)
{
v___x_105_ = v_head_93_;
v_isShared_106_ = v_isSharedCheck_118_;
goto v_resetjp_104_;
}
else
{
lean_inc(v_snd_103_);
lean_inc(v_fst_102_);
lean_dec(v_head_93_);
v___x_105_ = lean_box(0);
v_isShared_106_ = v_isSharedCheck_118_;
goto v_resetjp_104_;
}
v___jp_98_:
{
lean_object* v___x_100_; 
v___x_100_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_91_, v___y_99_);
v_a_90_ = v_tail_94_;
v_a_91_ = v___x_100_;
goto _start;
}
v_resetjp_104_:
{
lean_object* v_cfg_107_; uint8_t v___x_108_; 
v_cfg_107_ = lean_ctor_get(v_r_89_, 0);
lean_inc(v_fst_102_);
lean_inc_ref(v_cfg_107_);
v___x_108_ = lp_choreo_Choreo_Phase_check(v_cfg_107_, v_fst_102_);
if (v___x_108_ == 0)
{
lean_object* v___x_109_; 
lean_inc(v_snd_103_);
lean_inc_ref(v_cfg_107_);
v___x_109_ = lp_choreo_Choreo_Phase_diagnose(v_cfg_107_, v_snd_103_, v_fst_102_);
if (lean_obj_tag(v___x_109_) == 0)
{
lean_object* v___x_110_; lean_object* v___x_112_; 
v___x_110_ = ((lean_object*)(lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_phaseProblems_spec__0___closed__0));
if (v_isShared_106_ == 0)
{
lean_ctor_set_tag(v___x_105_, 4);
lean_ctor_set(v___x_105_, 1, v___x_110_);
lean_ctor_set(v___x_105_, 0, v_snd_103_);
v___x_112_ = v___x_105_;
goto v_reusejp_111_;
}
else
{
lean_object* v_reuseFailAlloc_116_; 
v_reuseFailAlloc_116_ = lean_alloc_ctor(4, 2, 0);
lean_ctor_set(v_reuseFailAlloc_116_, 0, v_snd_103_);
lean_ctor_set(v_reuseFailAlloc_116_, 1, v___x_110_);
v___x_112_ = v_reuseFailAlloc_116_;
goto v_reusejp_111_;
}
v_reusejp_111_:
{
lean_object* v___x_114_; 
if (v_isShared_97_ == 0)
{
lean_ctor_set(v___x_96_, 1, v___x_109_);
lean_ctor_set(v___x_96_, 0, v___x_112_);
v___x_114_ = v___x_96_;
goto v_reusejp_113_;
}
else
{
lean_object* v_reuseFailAlloc_115_; 
v_reuseFailAlloc_115_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_115_, 0, v___x_112_);
lean_ctor_set(v_reuseFailAlloc_115_, 1, v___x_109_);
v___x_114_ = v_reuseFailAlloc_115_;
goto v_reusejp_113_;
}
v_reusejp_113_:
{
v___y_99_ = v___x_114_;
goto v___jp_98_;
}
}
}
else
{
lean_del_object(v___x_105_);
lean_dec(v_snd_103_);
lean_del_object(v___x_96_);
v___y_99_ = v___x_109_;
goto v___jp_98_;
}
}
else
{
lean_object* v___x_117_; 
lean_del_object(v___x_105_);
lean_dec(v_snd_103_);
lean_dec(v_fst_102_);
lean_del_object(v___x_96_);
v___x_117_ = lean_box(0);
v___y_99_ = v___x_117_;
goto v___jp_98_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseProblems(lean_object* v_r_122_){
_start:
{
lean_object* v_phases_123_; lean_object* v___x_124_; lean_object* v___x_125_; lean_object* v___x_126_; lean_object* v___x_127_; 
v_phases_123_ = lean_ctor_get(v_r_122_, 1);
v___x_124_ = lean_unsigned_to_nat(0u);
lean_inc(v_phases_123_);
v___x_125_ = l_List_zipIdxTR___redArg(v_phases_123_, v___x_124_);
v___x_126_ = ((lean_object*)(lp_choreo_Choreo_phaseProblems___closed__0));
v___x_127_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_phaseProblems_spec__0(v_r_122_, v___x_125_, v___x_126_);
return v___x_127_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_Routine_twinOf_spec__0(lean_object* v_ph_128_, lean_object* v_r_129_, lean_object* v_x_130_){
_start:
{
if (lean_obj_tag(v_x_130_) == 0)
{
lean_object* v___x_131_; 
lean_dec_ref(v_r_129_);
lean_dec_ref(v_ph_128_);
v___x_131_ = lean_box(0);
return v___x_131_;
}
else
{
lean_object* v_head_132_; lean_object* v_tail_133_; lean_object* v_fst_134_; lean_object* v_snd_135_; lean_object* v___x_136_; lean_object* v___x_137_; uint8_t v___x_138_; 
v_head_132_ = lean_ctor_get(v_x_130_, 0);
lean_inc(v_head_132_);
v_tail_133_ = lean_ctor_get(v_x_130_, 1);
lean_inc(v_tail_133_);
lean_dec_ref_known(v_x_130_, 2);
v_fst_134_ = lean_ctor_get(v_head_132_, 0);
lean_inc_n(v_fst_134_, 2);
v_snd_135_ = lean_ctor_get(v_head_132_, 1);
lean_inc(v_snd_135_);
lean_dec(v_head_132_);
v___x_136_ = lp_choreo_Choreo_phaseKey(v_fst_134_);
lean_inc_ref(v_ph_128_);
v___x_137_ = lp_choreo_Choreo_phaseKey(v_ph_128_);
v___x_138_ = lean_string_dec_eq(v___x_136_, v___x_137_);
lean_dec_ref(v___x_137_);
lean_dec_ref(v___x_136_);
if (v___x_138_ == 0)
{
lean_dec(v_snd_135_);
lean_dec(v_fst_134_);
v_x_130_ = v_tail_133_;
goto _start;
}
else
{
lean_object* v_cfg_140_; uint8_t v___x_141_; 
v_cfg_140_ = lean_ctor_get(v_r_129_, 0);
lean_inc_ref(v_cfg_140_);
v___x_141_ = lp_choreo_Choreo_Phase_check(v_cfg_140_, v_fst_134_);
if (v___x_141_ == 0)
{
lean_dec(v_snd_135_);
v_x_130_ = v_tail_133_;
goto _start;
}
else
{
lean_object* v___x_143_; 
lean_dec(v_tail_133_);
lean_dec_ref(v_r_129_);
lean_dec_ref(v_ph_128_);
v___x_143_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_143_, 0, v_snd_135_);
return v___x_143_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Routine_twinOf(lean_object* v_r_146_, lean_object* v_ph_147_, lean_object* v_k_148_){
_start:
{
lean_object* v_phases_149_; lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v___x_152_; lean_object* v___x_153_; lean_object* v___x_154_; 
v_phases_149_ = lean_ctor_get(v_r_146_, 1);
v___x_150_ = lean_unsigned_to_nat(0u);
lean_inc(v_phases_149_);
v___x_151_ = l_List_zipIdxTR___redArg(v_phases_149_, v___x_150_);
v___x_152_ = ((lean_object*)(lp_choreo_Choreo_Routine_twinOf___closed__0));
lean_inc(v___x_151_);
v___x_153_ = l___private_Init_Data_List_Impl_0__List_takeTR_go___redArg(v___x_151_, v___x_151_, v_k_148_, v___x_152_);
lean_dec(v___x_151_);
v___x_154_ = lp_choreo_List_findSome_x3f___at___00Choreo_Routine_twinOf_spec__0(v_ph_147_, v_r_146_, v___x_153_);
return v___x_154_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseProofTerm(lean_object* v_r_159_, lean_object* v_ph_160_, lean_object* v_k_161_){
_start:
{
lean_object* v___x_162_; 
v___x_162_ = lp_choreo_Choreo_Routine_twinOf(v_r_159_, v_ph_160_, v_k_161_);
if (lean_obj_tag(v___x_162_) == 0)
{
lean_object* v___x_163_; 
v___x_163_ = ((lean_object*)(lp_choreo_Choreo_phaseProofTerm___closed__0));
return v___x_163_;
}
else
{
lean_object* v_val_164_; lean_object* v___x_165_; lean_object* v___x_166_; lean_object* v___x_167_; lean_object* v___x_168_; lean_object* v___x_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; 
v_val_164_ = lean_ctor_get(v___x_162_, 0);
lean_inc(v_val_164_);
lean_dec_ref_known(v___x_162_, 1);
v___x_165_ = ((lean_object*)(lp_choreo_Choreo_phaseProofTerm___closed__1));
v___x_166_ = l_Nat_reprFast(v_val_164_);
v___x_167_ = lean_string_append(v___x_165_, v___x_166_);
v___x_168_ = ((lean_object*)(lp_choreo_Choreo_phaseProofTerm___closed__2));
v___x_169_ = lean_string_append(v___x_167_, v___x_168_);
v___x_170_ = lean_string_append(v___x_169_, v___x_166_);
lean_dec_ref(v___x_166_);
v___x_171_ = ((lean_object*)(lp_choreo_Choreo_phaseProofTerm___closed__3));
v___x_172_ = lean_string_append(v___x_170_, v___x_171_);
return v___x_172_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseDef(lean_object* v_r_180_, lean_object* v_ph_181_, lean_object* v_k_182_){
_start:
{
lean_object* v___x_183_; 
lean_inc(v_k_182_);
lean_inc_ref(v_ph_181_);
v___x_183_ = lp_choreo_Choreo_Routine_twinOf(v_r_180_, v_ph_181_, v_k_182_);
if (lean_obj_tag(v___x_183_) == 0)
{
lean_object* v___x_184_; lean_object* v___x_185_; lean_object* v___x_186_; lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; lean_object* v___x_192_; 
v___x_184_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__0));
v___x_185_ = l_Nat_reprFast(v_k_182_);
v___x_186_ = lean_string_append(v___x_184_, v___x_185_);
lean_dec_ref(v___x_185_);
v___x_187_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__1));
v___x_188_ = lean_string_append(v___x_186_, v___x_187_);
v___x_189_ = lp_choreo_Choreo_phaseL(v_ph_181_);
v___x_190_ = lean_string_append(v___x_188_, v___x_189_);
lean_dec_ref(v___x_189_);
v___x_191_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_192_ = lean_string_append(v___x_190_, v___x_191_);
return v___x_192_;
}
else
{
lean_object* v_val_193_; lean_object* v_t0_194_; lean_object* v_t1_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; lean_object* v___x_205_; lean_object* v___x_206_; lean_object* v___x_207_; lean_object* v___x_208_; lean_object* v___x_209_; lean_object* v___x_210_; lean_object* v___x_211_; lean_object* v___x_212_; 
v_val_193_ = lean_ctor_get(v___x_183_, 0);
lean_inc(v_val_193_);
lean_dec_ref_known(v___x_183_, 1);
v_t0_194_ = lean_ctor_get(v_ph_181_, 0);
lean_inc(v_t0_194_);
v_t1_195_ = lean_ctor_get(v_ph_181_, 1);
lean_inc(v_t1_195_);
lean_dec_ref(v_ph_181_);
v___x_196_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__0));
v___x_197_ = l_Nat_reprFast(v_k_182_);
v___x_198_ = lean_string_append(v___x_196_, v___x_197_);
lean_dec_ref(v___x_197_);
v___x_199_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__3));
v___x_200_ = lean_string_append(v___x_198_, v___x_199_);
v___x_201_ = l_Nat_reprFast(v_val_193_);
v___x_202_ = lean_string_append(v___x_200_, v___x_201_);
lean_dec_ref(v___x_201_);
v___x_203_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__4));
v___x_204_ = lean_string_append(v___x_202_, v___x_203_);
v___x_205_ = l_Nat_reprFast(v_t0_194_);
v___x_206_ = lean_string_append(v___x_204_, v___x_205_);
lean_dec_ref(v___x_205_);
v___x_207_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__5));
v___x_208_ = lean_string_append(v___x_206_, v___x_207_);
v___x_209_ = l_Nat_reprFast(v_t1_195_);
v___x_210_ = lean_string_append(v___x_208_, v___x_209_);
lean_dec_ref(v___x_209_);
v___x_211_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__6));
v___x_212_ = lean_string_append(v___x_210_, v___x_211_);
return v___x_212_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg(lean_object* v_r_218_, lean_object* v_as_x27_219_, lean_object* v_b_220_){
_start:
{
if (lean_obj_tag(v_as_x27_219_) == 0)
{
lean_dec_ref(v_r_218_);
return v_b_220_;
}
else
{
lean_object* v_head_221_; lean_object* v_tail_222_; lean_object* v_fst_223_; lean_object* v_snd_224_; lean_object* v_cfg_225_; lean_object* v___x_226_; lean_object* v___x_227_; uint8_t v___x_228_; 
v_head_221_ = lean_ctor_get(v_as_x27_219_, 0);
v_tail_222_ = lean_ctor_get(v_as_x27_219_, 1);
v_fst_223_ = lean_ctor_get(v_head_221_, 0);
v_snd_224_ = lean_ctor_get(v_head_221_, 1);
v_cfg_225_ = lean_ctor_get(v_r_218_, 0);
lean_inc(v_snd_224_);
lean_inc_n(v_fst_223_, 2);
lean_inc_ref(v_r_218_);
v___x_226_ = lp_choreo_Choreo_phaseDef(v_r_218_, v_fst_223_, v_snd_224_);
v___x_227_ = lean_string_append(v_b_220_, v___x_226_);
lean_dec_ref(v___x_226_);
lean_inc_ref(v_cfg_225_);
v___x_228_ = lp_choreo_Choreo_Phase_check(v_cfg_225_, v_fst_223_);
if (v___x_228_ == 0)
{
v_as_x27_219_ = v_tail_222_;
v_b_220_ = v___x_227_;
goto _start;
}
else
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; lean_object* v___x_242_; lean_object* v___x_243_; lean_object* v___x_244_; lean_object* v___x_245_; lean_object* v___x_246_; lean_object* v___x_247_; 
v___x_230_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__0));
lean_inc_n(v_snd_224_, 2);
v___x_231_ = l_Nat_reprFast(v_snd_224_);
v___x_232_ = lean_string_append(v___x_230_, v___x_231_);
v___x_233_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__1));
v___x_234_ = lean_string_append(v___x_232_, v___x_233_);
v___x_235_ = lean_string_append(v___x_234_, v___x_231_);
v___x_236_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__2));
v___x_237_ = lean_string_append(v___x_235_, v___x_236_);
lean_inc(v_fst_223_);
lean_inc_ref(v_r_218_);
v___x_238_ = lp_choreo_Choreo_phaseProofTerm(v_r_218_, v_fst_223_, v_snd_224_);
v___x_239_ = lean_string_append(v___x_237_, v___x_238_);
lean_dec_ref(v___x_238_);
v___x_240_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_241_ = lean_string_append(v___x_239_, v___x_240_);
v___x_242_ = lean_string_append(v___x_227_, v___x_241_);
lean_dec_ref(v___x_241_);
v___x_243_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__3));
v___x_244_ = lean_string_append(v___x_243_, v___x_231_);
lean_dec_ref(v___x_231_);
v___x_245_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4));
v___x_246_ = lean_string_append(v___x_244_, v___x_245_);
v___x_247_ = lean_string_append(v___x_242_, v___x_246_);
lean_dec_ref(v___x_246_);
v_as_x27_219_ = v_tail_222_;
v_b_220_ = v___x_247_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___boxed(lean_object* v_r_249_, lean_object* v_as_x27_250_, lean_object* v_b_251_){
_start:
{
lean_object* v_res_252_; 
v_res_252_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg(v_r_249_, v_as_x27_250_, v_b_251_);
lean_dec(v_as_x27_250_);
return v_res_252_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseProofs(lean_object* v_r_254_){
_start:
{
lean_object* v_phases_255_; lean_object* v_out_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; 
v_phases_255_ = lean_ctor_get(v_r_254_, 1);
v_out_256_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
v___x_257_ = lean_unsigned_to_nat(0u);
lean_inc(v_phases_255_);
v___x_258_ = l_List_zipIdxTR___redArg(v_phases_255_, v___x_257_);
v___x_259_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg(v_r_254_, v___x_258_, v_out_256_);
lean_dec(v___x_258_);
return v___x_259_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0(lean_object* v_r_260_, lean_object* v_as_261_, lean_object* v_as_x27_262_, lean_object* v_b_263_, lean_object* v_a_264_){
_start:
{
lean_object* v___x_265_; 
v___x_265_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg(v_r_260_, v_as_x27_262_, v_b_263_);
return v___x_265_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___boxed(lean_object* v_r_266_, lean_object* v_as_267_, lean_object* v_as_x27_268_, lean_object* v_b_269_, lean_object* v_a_270_){
_start:
{
lean_object* v_res_271_; 
v_res_271_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0(v_r_266_, v_as_267_, v_as_x27_268_, v_b_269_, v_a_270_);
lean_dec(v_as_x27_268_);
lean_dec(v_as_267_);
return v_res_271_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transitionsOf_spec__0(lean_object* v_ph_272_, uint8_t v_atStart_273_, lean_object* v_a_274_, lean_object* v_a_275_){
_start:
{
if (lean_obj_tag(v_a_274_) == 0)
{
lean_object* v___x_276_; 
v___x_276_ = l_List_reverse___redArg(v_a_275_);
return v___x_276_;
}
else
{
lean_object* v_head_277_; lean_object* v_tail_278_; lean_object* v___x_280_; uint8_t v_isShared_281_; uint8_t v_isSharedCheck_315_; 
v_head_277_ = lean_ctor_get(v_a_274_, 0);
v_tail_278_ = lean_ctor_get(v_a_274_, 1);
v_isSharedCheck_315_ = !lean_is_exclusive(v_a_274_);
if (v_isSharedCheck_315_ == 0)
{
v___x_280_ = v_a_274_;
v_isShared_281_ = v_isSharedCheck_315_;
goto v_resetjp_279_;
}
else
{
lean_inc(v_tail_278_);
lean_inc(v_head_277_);
lean_dec(v_a_274_);
v___x_280_ = lean_box(0);
v_isShared_281_ = v_isSharedCheck_315_;
goto v_resetjp_279_;
}
v_resetjp_279_:
{
lean_object* v___y_283_; lean_object* v_p_288_; 
v_p_288_ = lp_choreo_Choreo_Phase_path(v_ph_272_, v_head_277_);
if (v_atStart_273_ == 0)
{
lean_object* v_X_289_; lean_object* v_Y_290_; lean_object* v_W_291_; lean_object* v___x_293_; uint8_t v_isShared_294_; uint8_t v_isSharedCheck_301_; 
v_X_289_ = lean_ctor_get(v_p_288_, 0);
v_Y_290_ = lean_ctor_get(v_p_288_, 1);
v_W_291_ = lean_ctor_get(v_p_288_, 2);
v_isSharedCheck_301_ = !lean_is_exclusive(v_p_288_);
if (v_isSharedCheck_301_ == 0)
{
v___x_293_ = v_p_288_;
v_isShared_294_ = v_isSharedCheck_301_;
goto v_resetjp_292_;
}
else
{
lean_inc(v_W_291_);
lean_inc(v_Y_290_);
lean_inc(v_X_289_);
lean_dec(v_p_288_);
v___x_293_ = lean_box(0);
v_isShared_294_ = v_isSharedCheck_301_;
goto v_resetjp_292_;
}
v_resetjp_292_:
{
lean_object* v___x_295_; lean_object* v___x_296_; lean_object* v___x_297_; lean_object* v___x_299_; 
v___x_295_ = lp_choreo_Choreo_Poly_last(v_X_289_);
lean_dec(v_X_289_);
v___x_296_ = lp_choreo_Choreo_Poly_last(v_Y_290_);
lean_dec(v_Y_290_);
v___x_297_ = lp_choreo_Choreo_Poly_last(v_W_291_);
lean_dec(v_W_291_);
if (v_isShared_294_ == 0)
{
lean_ctor_set(v___x_293_, 2, v___x_297_);
lean_ctor_set(v___x_293_, 1, v___x_296_);
lean_ctor_set(v___x_293_, 0, v___x_295_);
v___x_299_ = v___x_293_;
goto v_reusejp_298_;
}
else
{
lean_object* v_reuseFailAlloc_300_; 
v_reuseFailAlloc_300_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_300_, 0, v___x_295_);
lean_ctor_set(v_reuseFailAlloc_300_, 1, v___x_296_);
lean_ctor_set(v_reuseFailAlloc_300_, 2, v___x_297_);
v___x_299_ = v_reuseFailAlloc_300_;
goto v_reusejp_298_;
}
v_reusejp_298_:
{
v___y_283_ = v___x_299_;
goto v___jp_282_;
}
}
}
else
{
lean_object* v_X_302_; lean_object* v_Y_303_; lean_object* v_W_304_; lean_object* v___x_306_; uint8_t v_isShared_307_; uint8_t v_isSharedCheck_314_; 
v_X_302_ = lean_ctor_get(v_p_288_, 0);
v_Y_303_ = lean_ctor_get(v_p_288_, 1);
v_W_304_ = lean_ctor_get(v_p_288_, 2);
v_isSharedCheck_314_ = !lean_is_exclusive(v_p_288_);
if (v_isSharedCheck_314_ == 0)
{
v___x_306_ = v_p_288_;
v_isShared_307_ = v_isSharedCheck_314_;
goto v_resetjp_305_;
}
else
{
lean_inc(v_W_304_);
lean_inc(v_Y_303_);
lean_inc(v_X_302_);
lean_dec(v_p_288_);
v___x_306_ = lean_box(0);
v_isShared_307_ = v_isSharedCheck_314_;
goto v_resetjp_305_;
}
v_resetjp_305_:
{
lean_object* v___x_308_; lean_object* v___x_309_; lean_object* v___x_310_; lean_object* v___x_312_; 
v___x_308_ = lp_choreo_Choreo_Poly_first(v_X_302_);
lean_dec(v_X_302_);
v___x_309_ = lp_choreo_Choreo_Poly_first(v_Y_303_);
lean_dec(v_Y_303_);
v___x_310_ = lp_choreo_Choreo_Poly_first(v_W_304_);
lean_dec(v_W_304_);
if (v_isShared_307_ == 0)
{
lean_ctor_set(v___x_306_, 2, v___x_310_);
lean_ctor_set(v___x_306_, 1, v___x_309_);
lean_ctor_set(v___x_306_, 0, v___x_308_);
v___x_312_ = v___x_306_;
goto v_reusejp_311_;
}
else
{
lean_object* v_reuseFailAlloc_313_; 
v_reuseFailAlloc_313_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v_reuseFailAlloc_313_, 0, v___x_308_);
lean_ctor_set(v_reuseFailAlloc_313_, 1, v___x_309_);
lean_ctor_set(v_reuseFailAlloc_313_, 2, v___x_310_);
v___x_312_ = v_reuseFailAlloc_313_;
goto v_reusejp_311_;
}
v_reusejp_311_:
{
v___y_283_ = v___x_312_;
goto v___jp_282_;
}
}
}
v___jp_282_:
{
lean_object* v___x_285_; 
if (v_isShared_281_ == 0)
{
lean_ctor_set(v___x_280_, 1, v_a_275_);
lean_ctor_set(v___x_280_, 0, v___y_283_);
v___x_285_ = v___x_280_;
goto v_reusejp_284_;
}
else
{
lean_object* v_reuseFailAlloc_287_; 
v_reuseFailAlloc_287_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_287_, 0, v___y_283_);
lean_ctor_set(v_reuseFailAlloc_287_, 1, v_a_275_);
v___x_285_ = v_reuseFailAlloc_287_;
goto v_reusejp_284_;
}
v_reusejp_284_:
{
v_a_274_ = v_tail_278_;
v_a_275_ = v___x_285_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_transitionsOf_spec__0___boxed(lean_object* v_ph_316_, lean_object* v_atStart_317_, lean_object* v_a_318_, lean_object* v_a_319_){
_start:
{
uint8_t v_atStart_boxed_320_; lean_object* v_res_321_; 
v_atStart_boxed_320_ = lean_unbox(v_atStart_317_);
v_res_321_ = lp_choreo_List_mapTR_loop___at___00Choreo_transitionsOf_spec__0(v_ph_316_, v_atStart_boxed_320_, v_a_318_, v_a_319_);
lean_dec_ref(v_ph_316_);
return v_res_321_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___lam__0(lean_object* v_n_322_, lean_object* v_ph_323_, uint8_t v_atStart_324_){
_start:
{
lean_object* v___x_325_; lean_object* v___x_326_; lean_object* v___x_327_; 
v___x_325_ = l_List_range(v_n_322_);
v___x_326_ = lean_box(0);
v___x_327_ = lp_choreo_List_mapTR_loop___at___00Choreo_transitionsOf_spec__0(v_ph_323_, v_atStart_324_, v___x_325_, v___x_326_);
return v___x_327_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___lam__0___boxed(lean_object* v_n_328_, lean_object* v_ph_329_, lean_object* v_atStart_330_){
_start:
{
uint8_t v_atStart_boxed_331_; lean_object* v_res_332_; 
v_atStart_boxed_331_ = lean_unbox(v_atStart_330_);
v_res_332_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___lam__0(v_n_328_, v_ph_329_, v_atStart_boxed_331_);
lean_dec_ref(v_ph_329_);
return v_res_332_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___redArg(lean_object* v___x_333_, lean_object* v___x_334_, lean_object* v_labels_335_, lean_object* v_as_x27_336_, lean_object* v_b_337_){
_start:
{
if (lean_obj_tag(v_as_x27_336_) == 0)
{
return v_b_337_;
}
else
{
lean_object* v_tail_338_; lean_object* v___x_339_; lean_object* v___x_340_; lean_object* v_snd_342_; uint8_t v___x_346_; 
v_tail_338_ = lean_ctor_get(v_as_x27_336_, 1);
v___x_339_ = lean_unsigned_to_nat(1u);
v___x_340_ = lean_nat_add(v_b_337_, v___x_339_);
v___x_346_ = lean_nat_dec_lt(v___x_340_, v___x_334_);
if (v___x_346_ == 0)
{
lean_dec(v___x_340_);
v_as_x27_336_ = v_tail_338_;
goto _start;
}
else
{
lean_object* v___x_348_; uint8_t v___x_349_; 
v___x_348_ = lean_array_get_size(v_labels_335_);
v___x_349_ = lean_nat_dec_lt(v___x_340_, v___x_348_);
if (v___x_349_ == 0)
{
lean_object* v___x_350_; 
v___x_350_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
v_snd_342_ = v___x_350_;
goto v___jp_341_;
}
else
{
lean_object* v___x_351_; lean_object* v_snd_352_; 
v___x_351_ = lean_array_fget_borrowed(v_labels_335_, v___x_340_);
v_snd_352_ = lean_ctor_get(v___x_351_, 1);
v_snd_342_ = v_snd_352_;
goto v___jp_341_;
}
}
v___jp_341_:
{
uint8_t v___x_343_; 
v___x_343_ = lean_string_dec_eq(v_snd_342_, v___x_333_);
if (v___x_343_ == 0)
{
lean_dec(v___x_340_);
v_as_x27_336_ = v_tail_338_;
goto _start;
}
else
{
lean_dec(v_b_337_);
v_as_x27_336_ = v_tail_338_;
v_b_337_ = v___x_340_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___redArg___boxed(lean_object* v___x_353_, lean_object* v___x_354_, lean_object* v_labels_355_, lean_object* v_as_x27_356_, lean_object* v_b_357_){
_start:
{
lean_object* v_res_358_; 
v_res_358_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___redArg(v___x_353_, v___x_354_, v_labels_355_, v_as_x27_356_, v_b_357_);
lean_dec(v_as_x27_356_);
lean_dec_ref(v_labels_355_);
lean_dec(v___x_354_);
lean_dec_ref(v___x_353_);
return v_res_358_;
}
}
static lean_object* _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_360_; lean_object* v___x_361_; lean_object* v_out_362_; lean_object* v___x_363_; lean_object* v_k_364_; lean_object* v___x_365_; 
v___x_360_ = lean_box(0);
v___x_361_ = lp_choreo_Choreo_stageRect;
v_out_362_ = lean_box(0);
v___x_363_ = lean_unsigned_to_nat(1u);
v_k_364_ = lean_unsigned_to_nat(0u);
v___x_365_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_365_, 0, v_k_364_);
lean_ctor_set(v___x_365_, 1, v___x_363_);
lean_ctor_set(v___x_365_, 2, v_out_362_);
lean_ctor_set(v___x_365_, 3, v___x_361_);
lean_ctor_set(v___x_365_, 4, v_out_362_);
lean_ctor_set(v___x_365_, 5, v_out_362_);
lean_ctor_set(v___x_365_, 6, v_out_362_);
lean_ctor_set(v___x_365_, 7, v___x_360_);
return v___x_365_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg(lean_object* v___x_366_, lean_object* v_labels_367_, lean_object* v___x_368_, lean_object* v_n_369_, lean_object* v_phases_370_, lean_object* v_as_x27_371_, lean_object* v_b_372_){
_start:
{
if (lean_obj_tag(v_as_x27_371_) == 0)
{
lean_dec(v_n_369_);
return v_b_372_;
}
else
{
lean_object* v_tail_373_; lean_object* v___y_375_; lean_object* v_out_376_; lean_object* v_fst_381_; lean_object* v_snd_382_; lean_object* v___x_384_; uint8_t v_isShared_385_; uint8_t v_isSharedCheck_433_; 
v_tail_373_ = lean_ctor_get(v_as_x27_371_, 1);
v_fst_381_ = lean_ctor_get(v_b_372_, 0);
v_snd_382_ = lean_ctor_get(v_b_372_, 1);
v_isSharedCheck_433_ = !lean_is_exclusive(v_b_372_);
if (v_isSharedCheck_433_ == 0)
{
v___x_384_ = v_b_372_;
v_isShared_385_ = v_isSharedCheck_433_;
goto v_resetjp_383_;
}
else
{
lean_inc(v_snd_382_);
lean_inc(v_fst_381_);
lean_dec(v_b_372_);
v___x_384_ = lean_box(0);
v_isShared_385_ = v_isSharedCheck_433_;
goto v_resetjp_383_;
}
v___jp_374_:
{
lean_object* v___x_377_; lean_object* v___x_378_; lean_object* v___x_379_; 
v___x_377_ = lean_unsigned_to_nat(1u);
v___x_378_ = lean_nat_add(v___y_375_, v___x_377_);
lean_dec(v___y_375_);
v___x_379_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_379_, 0, v_out_376_);
lean_ctor_set(v___x_379_, 1, v___x_378_);
v_as_x27_371_ = v_tail_373_;
v_b_372_ = v___x_379_;
goto _start;
}
v_resetjp_383_:
{
uint8_t v___x_386_; 
v___x_386_ = lean_nat_dec_lt(v_snd_382_, v___x_366_);
if (v___x_386_ == 0)
{
lean_object* v___x_388_; 
if (v_isShared_385_ == 0)
{
v___x_388_ = v___x_384_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_390_; 
v_reuseFailAlloc_390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_390_, 0, v_fst_381_);
lean_ctor_set(v_reuseFailAlloc_390_, 1, v_snd_382_);
v___x_388_ = v_reuseFailAlloc_390_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
v_as_x27_371_ = v_tail_373_;
v_b_372_ = v___x_388_;
goto _start;
}
}
else
{
lean_object* v_out_391_; lean_object* v___y_393_; lean_object* v___y_394_; lean_object* v___y_395_; lean_object* v___y_396_; uint8_t v___y_397_; lean_object* v___y_398_; lean_object* v___y_409_; lean_object* v___y_410_; uint8_t v___y_411_; lean_object* v___y_412_; lean_object* v___y_413_; lean_object* v_fst_418_; lean_object* v_snd_419_; lean_object* v___x_427_; uint8_t v___x_428_; 
v_out_391_ = lean_box(0);
v___x_427_ = lean_array_get_size(v_labels_367_);
v___x_428_ = lean_nat_dec_lt(v_snd_382_, v___x_427_);
if (v___x_428_ == 0)
{
lean_object* v___x_429_; 
v___x_429_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
v_fst_418_ = v___x_429_;
v_snd_419_ = v___x_429_;
goto v___jp_417_;
}
else
{
lean_object* v___x_430_; lean_object* v_fst_431_; lean_object* v_snd_432_; 
v___x_430_ = lean_array_fget_borrowed(v_labels_367_, v_snd_382_);
v_fst_431_ = lean_ctor_get(v___x_430_, 0);
v_snd_432_ = lean_ctor_get(v___x_430_, 1);
lean_inc(v_snd_432_);
lean_inc(v_fst_431_);
v_fst_418_ = v_fst_431_;
v_snd_419_ = v_snd_432_;
goto v___jp_417_;
}
v___jp_392_:
{
lean_object* v___x_399_; lean_object* v___x_400_; lean_object* v___x_401_; lean_object* v___x_403_; 
lean_inc_n(v_n_369_, 2);
v___x_399_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___lam__0(v_n_369_, v___y_395_, v___x_386_);
v___x_400_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___lam__0(v_n_369_, v___y_398_, v___y_397_);
lean_inc(v___y_394_);
v___x_401_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_401_, 0, v_snd_382_);
lean_ctor_set(v___x_401_, 1, v___y_394_);
lean_ctor_set(v___x_401_, 2, v___x_399_);
lean_ctor_set(v___x_401_, 3, v___x_400_);
if (v_isShared_385_ == 0)
{
lean_ctor_set(v___x_384_, 1, v___x_401_);
lean_ctor_set(v___x_384_, 0, v___y_393_);
v___x_403_ = v___x_384_;
goto v_reusejp_402_;
}
else
{
lean_object* v_reuseFailAlloc_407_; 
v_reuseFailAlloc_407_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_407_, 0, v___y_393_);
lean_ctor_set(v_reuseFailAlloc_407_, 1, v___x_401_);
v___x_403_ = v_reuseFailAlloc_407_;
goto v_reusejp_402_;
}
v_reusejp_402_:
{
lean_object* v___x_404_; lean_object* v___x_405_; lean_object* v___x_406_; 
v___x_404_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_404_, 0, v___y_396_);
lean_ctor_set(v___x_404_, 1, v___x_403_);
v___x_405_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_405_, 0, v___x_404_);
lean_ctor_set(v___x_405_, 1, v_out_391_);
v___x_406_ = l_List_appendTR___redArg(v_fst_381_, v___x_405_);
v___y_375_ = v___y_394_;
v_out_376_ = v___x_406_;
goto v___jp_374_;
}
}
v___jp_408_:
{
lean_object* v___x_414_; uint8_t v___x_415_; 
v___x_414_ = lean_array_get_size(v_phases_370_);
v___x_415_ = lean_nat_dec_lt(v___y_410_, v___x_414_);
if (v___x_415_ == 0)
{
v___y_393_ = v___y_409_;
v___y_394_ = v___y_410_;
v___y_395_ = v___y_413_;
v___y_396_ = v___y_412_;
v___y_397_ = v___y_411_;
v___y_398_ = v___y_413_;
goto v___jp_392_;
}
else
{
lean_object* v___x_416_; 
v___x_416_ = lean_array_fget_borrowed(v_phases_370_, v___y_410_);
v___y_393_ = v___y_409_;
v___y_394_ = v___y_410_;
v___y_395_ = v___y_413_;
v___y_396_ = v___y_412_;
v___y_397_ = v___y_411_;
v___y_398_ = v___x_416_;
goto v___jp_392_;
}
}
v___jp_417_:
{
lean_object* v___x_420_; lean_object* v___x_421_; uint8_t v___x_422_; 
lean_inc(v_snd_382_);
v___x_420_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___redArg(v_snd_419_, v___x_366_, v_labels_367_, v___x_368_, v_snd_382_);
v___x_421_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__0));
v___x_422_ = lean_string_dec_eq(v_snd_419_, v___x_421_);
if (v___x_422_ == 0)
{
lean_object* v___x_423_; uint8_t v___x_424_; 
v___x_423_ = lean_array_get_size(v_phases_370_);
v___x_424_ = lean_nat_dec_lt(v_snd_382_, v___x_423_);
if (v___x_424_ == 0)
{
lean_object* v___x_425_; 
v___x_425_ = lean_obj_once(&lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__1, &lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__1_once, _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___closed__1);
v___y_409_ = v_snd_419_;
v___y_410_ = v___x_420_;
v___y_411_ = v___x_422_;
v___y_412_ = v_fst_418_;
v___y_413_ = v___x_425_;
goto v___jp_408_;
}
else
{
lean_object* v___x_426_; 
v___x_426_ = lean_array_fget_borrowed(v_phases_370_, v_snd_382_);
v___y_409_ = v_snd_419_;
v___y_410_ = v___x_420_;
v___y_411_ = v___x_422_;
v___y_412_ = v_fst_418_;
v___y_413_ = v___x_426_;
goto v___jp_408_;
}
}
else
{
lean_dec(v_snd_419_);
lean_dec(v_fst_418_);
lean_del_object(v___x_384_);
lean_dec(v_snd_382_);
v___y_375_ = v___x_420_;
v_out_376_ = v_fst_381_;
goto v___jp_374_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg___boxed(lean_object* v___x_434_, lean_object* v_labels_435_, lean_object* v___x_436_, lean_object* v_n_437_, lean_object* v_phases_438_, lean_object* v_as_x27_439_, lean_object* v_b_440_){
_start:
{
lean_object* v_res_441_; 
v_res_441_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg(v___x_434_, v_labels_435_, v___x_436_, v_n_437_, v_phases_438_, v_as_x27_439_, v_b_440_);
lean_dec(v_as_x27_439_);
lean_dec_ref(v_phases_438_);
lean_dec(v___x_436_);
lean_dec_ref(v_labels_435_);
lean_dec(v___x_434_);
return v_res_441_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_transitionsOf(lean_object* v_b_445_){
_start:
{
lean_object* v_routine_446_; lean_object* v_cfg_447_; lean_object* v_labels_448_; lean_object* v_phases_449_; lean_object* v_n_450_; lean_object* v_labels_451_; lean_object* v_phases_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v_fst_457_; 
v_routine_446_ = lean_ctor_get(v_b_445_, 1);
lean_inc_ref(v_routine_446_);
v_cfg_447_ = lean_ctor_get(v_routine_446_, 0);
lean_inc_ref(v_cfg_447_);
v_labels_448_ = lean_ctor_get(v_b_445_, 2);
lean_inc(v_labels_448_);
lean_dec_ref(v_b_445_);
v_phases_449_ = lean_ctor_get(v_routine_446_, 1);
lean_inc(v_phases_449_);
lean_dec_ref(v_routine_446_);
v_n_450_ = lean_ctor_get(v_cfg_447_, 0);
lean_inc(v_n_450_);
lean_dec_ref(v_cfg_447_);
v_labels_451_ = lean_array_mk(v_labels_448_);
v_phases_452_ = lean_array_mk(v_phases_449_);
v___x_453_ = lean_array_get_size(v_phases_452_);
v___x_454_ = l_List_range(v___x_453_);
v___x_455_ = ((lean_object*)(lp_choreo_Choreo_transitionsOf___closed__0));
v___x_456_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg(v___x_453_, v_labels_451_, v___x_454_, v_n_450_, v_phases_452_, v___x_454_, v___x_455_);
lean_dec_ref(v_phases_452_);
lean_dec(v___x_454_);
lean_dec_ref(v_labels_451_);
v_fst_457_ = lean_ctor_get(v___x_456_, 0);
lean_inc(v_fst_457_);
lean_dec_ref(v___x_456_);
return v_fst_457_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1(lean_object* v___x_458_, lean_object* v___x_459_, lean_object* v_labels_460_, lean_object* v_as_461_, lean_object* v_as_x27_462_, lean_object* v_b_463_, lean_object* v_a_464_){
_start:
{
lean_object* v___x_465_; 
v___x_465_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___redArg(v___x_458_, v___x_459_, v_labels_460_, v_as_x27_462_, v_b_463_);
return v___x_465_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1___boxed(lean_object* v___x_466_, lean_object* v___x_467_, lean_object* v_labels_468_, lean_object* v_as_469_, lean_object* v_as_x27_470_, lean_object* v_b_471_, lean_object* v_a_472_){
_start:
{
lean_object* v_res_473_; 
v_res_473_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__1(v___x_466_, v___x_467_, v_labels_468_, v_as_469_, v_as_x27_470_, v_b_471_, v_a_472_);
lean_dec(v_as_x27_470_);
lean_dec(v_as_469_);
lean_dec_ref(v_labels_468_);
lean_dec(v___x_467_);
lean_dec_ref(v___x_466_);
return v_res_473_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2(lean_object* v___x_474_, lean_object* v_labels_475_, lean_object* v___x_476_, lean_object* v_n_477_, lean_object* v_phases_478_, lean_object* v_as_479_, lean_object* v_as_x27_480_, lean_object* v_b_481_, lean_object* v_a_482_){
_start:
{
lean_object* v___x_483_; 
v___x_483_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___redArg(v___x_474_, v_labels_475_, v___x_476_, v_n_477_, v_phases_478_, v_as_x27_480_, v_b_481_);
return v___x_483_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2___boxed(lean_object* v___x_484_, lean_object* v_labels_485_, lean_object* v___x_486_, lean_object* v_n_487_, lean_object* v_phases_488_, lean_object* v_as_489_, lean_object* v_as_x27_490_, lean_object* v_b_491_, lean_object* v_a_492_){
_start:
{
lean_object* v_res_493_; 
v_res_493_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_transitionsOf_spec__2(v___x_484_, v_labels_485_, v___x_486_, v_n_487_, v_phases_488_, v_as_489_, v_as_x27_490_, v_b_491_, v_a_492_);
lean_dec(v_as_x27_490_);
lean_dec(v_as_489_);
lean_dec_ref(v_phases_488_);
lean_dec(v___x_486_);
lean_dec_ref(v_labels_485_);
lean_dec(v___x_484_);
return v_res_493_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0(lean_object* v_as_499_, size_t v_i_500_, size_t v_stop_501_, lean_object* v_b_502_){
_start:
{
uint8_t v___x_503_; 
v___x_503_ = lean_usize_dec_eq(v_i_500_, v_stop_501_);
if (v___x_503_ == 0)
{
size_t v___x_504_; size_t v___x_505_; lean_object* v___x_506_; lean_object* v___x_507_; lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_504_ = ((size_t)1ULL);
v___x_505_ = lean_usize_sub(v_i_500_, v___x_504_);
v___x_506_ = lean_array_uget_borrowed(v_as_499_, v___x_505_);
v___x_507_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__0));
lean_inc(v___x_506_);
v___x_508_ = l_Nat_reprFast(v___x_506_);
v___x_509_ = lean_string_append(v___x_507_, v___x_508_);
lean_dec_ref(v___x_508_);
v___x_510_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1));
v___x_511_ = lean_string_append(v___x_509_, v___x_510_);
v___x_512_ = lean_string_append(v___x_511_, v_b_502_);
lean_dec_ref(v_b_502_);
v___x_513_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_514_ = lean_string_append(v___x_512_, v___x_513_);
v_i_500_ = v___x_505_;
v_b_502_ = v___x_514_;
goto _start;
}
else
{
return v_b_502_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___boxed(lean_object* v_as_516_, lean_object* v_i_517_, lean_object* v_stop_518_, lean_object* v_b_519_){
_start:
{
size_t v_i_boxed_520_; size_t v_stop_boxed_521_; lean_object* v_res_522_; 
v_i_boxed_520_ = lean_unbox_usize(v_i_517_);
lean_dec(v_i_517_);
v_stop_boxed_521_ = lean_unbox_usize(v_stop_518_);
lean_dec(v_stop_518_);
v_res_522_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0(v_as_516_, v_i_boxed_520_, v_stop_boxed_521_, v_b_519_);
lean_dec_ref(v_as_516_);
return v_res_522_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldrTR___at___00Choreo_chainOf_spec__0(lean_object* v_init_523_, lean_object* v_l_524_){
_start:
{
lean_object* v___x_525_; lean_object* v___x_526_; lean_object* v___x_527_; uint8_t v___x_528_; 
v___x_525_ = lean_array_mk(v_l_524_);
v___x_526_ = lean_array_get_size(v___x_525_);
v___x_527_ = lean_unsigned_to_nat(0u);
v___x_528_ = lean_nat_dec_lt(v___x_527_, v___x_526_);
if (v___x_528_ == 0)
{
lean_dec_ref(v___x_525_);
return v_init_523_;
}
else
{
size_t v___x_529_; size_t v___x_530_; lean_object* v___x_531_; 
v___x_529_ = lean_usize_of_nat(v___x_526_);
v___x_530_ = ((size_t)0ULL);
v___x_531_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0(v___x_525_, v___x_529_, v___x_530_, v_init_523_);
lean_dec_ref(v___x_525_);
return v___x_531_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_chainOf(lean_object* v_indices_533_){
_start:
{
lean_object* v___x_534_; lean_object* v___x_535_; 
v___x_534_ = ((lean_object*)(lp_choreo_Choreo_chainOf___closed__0));
v___x_535_ = lp_choreo_List_foldrTR___at___00Choreo_chainOf_spec__0(v___x_534_, v_indices_533_);
return v___x_535_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Built_formationOk_spec__0(lean_object* v_b_536_, lean_object* v_x_537_){
_start:
{
if (lean_obj_tag(v_x_537_) == 0)
{
uint8_t v___x_538_; 
lean_dec_ref(v_b_536_);
v___x_538_ = 1;
return v___x_538_;
}
else
{
lean_object* v_head_539_; lean_object* v_tail_540_; uint8_t v___y_542_; lean_object* v_snd_544_; lean_object* v_snd_545_; uint8_t v___x_546_; 
v_head_539_ = lean_ctor_get(v_x_537_, 0);
lean_inc(v_head_539_);
v_tail_540_ = lean_ctor_get(v_x_537_, 1);
lean_inc(v_tail_540_);
lean_dec_ref_known(v_x_537_, 2);
v_snd_544_ = lean_ctor_get(v_head_539_, 1);
lean_inc(v_snd_544_);
lean_dec(v_head_539_);
v_snd_545_ = lean_ctor_get(v_snd_544_, 1);
lean_inc(v_snd_545_);
lean_dec(v_snd_544_);
v___x_546_ = lp_choreo_Choreo_Ask_isMovement(v_snd_545_);
if (v___x_546_ == 0)
{
lean_object* v_routine_547_; uint8_t v___x_548_; 
v_routine_547_ = lean_ctor_get(v_b_536_, 1);
lean_inc_ref(v_routine_547_);
v___x_548_ = lp_choreo_Choreo_Ask_check(v_routine_547_, v_snd_545_);
v___y_542_ = v___x_548_;
goto v___jp_541_;
}
else
{
lean_dec(v_snd_545_);
v___y_542_ = v___x_546_;
goto v___jp_541_;
}
v___jp_541_:
{
if (v___y_542_ == 0)
{
lean_dec(v_tail_540_);
lean_dec_ref(v_b_536_);
return v___y_542_;
}
else
{
v_x_537_ = v_tail_540_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Built_formationOk_spec__0___boxed(lean_object* v_b_549_, lean_object* v_x_550_){
_start:
{
uint8_t v_res_551_; lean_object* v_r_552_; 
v_res_551_ = lp_choreo_List_all___at___00Choreo_Built_formationOk_spec__0(v_b_549_, v_x_550_);
v_r_552_ = lean_box(v_res_551_);
return v_r_552_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Built_formationOk(lean_object* v_b_553_){
_start:
{
lean_object* v_asks_554_; uint8_t v___x_555_; 
v_asks_554_ = lean_ctor_get(v_b_553_, 3);
lean_inc(v_asks_554_);
v___x_555_ = lp_choreo_List_all___at___00Choreo_Built_formationOk_spec__0(v_b_553_, v_asks_554_);
return v___x_555_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Built_formationOk___boxed(lean_object* v_b_556_){
_start:
{
uint8_t v_res_557_; lean_object* v_r_558_; 
v_res_557_ = lp_choreo_Choreo_Built_formationOk(v_b_556_);
v_r_558_ = lean_box(v_res_557_);
return v_r_558_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__1(lean_object* v___x_559_, lean_object* v_x_560_){
_start:
{
if (lean_obj_tag(v_x_560_) == 0)
{
uint8_t v___x_561_; 
lean_dec_ref(v___x_559_);
v___x_561_ = 1;
return v___x_561_;
}
else
{
lean_object* v_head_562_; lean_object* v_tail_563_; uint8_t v___x_564_; 
v_head_562_ = lean_ctor_get(v_x_560_, 0);
lean_inc(v_head_562_);
v_tail_563_ = lean_ctor_get(v_x_560_, 1);
lean_inc(v_tail_563_);
lean_dec_ref_known(v_x_560_, 2);
lean_inc_ref(v___x_559_);
v___x_564_ = lp_choreo_Choreo_Phase_check(v___x_559_, v_head_562_);
if (v___x_564_ == 0)
{
lean_dec(v_tail_563_);
lean_dec_ref(v___x_559_);
return v___x_564_;
}
else
{
v_x_560_ = v_tail_563_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__1___boxed(lean_object* v___x_566_, lean_object* v_x_567_){
_start:
{
uint8_t v_res_568_; lean_object* v_r_569_; 
v_res_568_ = lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__1(v___x_566_, v_x_567_);
v_r_569_ = lean_box(v_res_568_);
return v_r_569_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__0(uint8_t v___y_570_, lean_object* v_b_571_, lean_object* v_x_572_){
_start:
{
if (lean_obj_tag(v_x_572_) == 0)
{
uint8_t v___x_573_; 
lean_dec_ref(v_b_571_);
v___x_573_ = 1;
return v___x_573_;
}
else
{
lean_object* v_head_574_; lean_object* v_tail_575_; uint8_t v___y_577_; lean_object* v_snd_579_; lean_object* v_snd_580_; uint8_t v___x_581_; 
v_head_574_ = lean_ctor_get(v_x_572_, 0);
lean_inc(v_head_574_);
v_tail_575_ = lean_ctor_get(v_x_572_, 1);
lean_inc(v_tail_575_);
lean_dec_ref_known(v_x_572_, 2);
v_snd_579_ = lean_ctor_get(v_head_574_, 1);
lean_inc(v_snd_579_);
lean_dec(v_head_574_);
v_snd_580_ = lean_ctor_get(v_snd_579_, 1);
lean_inc(v_snd_580_);
lean_dec(v_snd_579_);
v___x_581_ = lp_choreo_Choreo_Ask_isMovement(v_snd_580_);
if (v___x_581_ == 0)
{
lean_dec(v_snd_580_);
v___y_577_ = v___y_570_;
goto v___jp_576_;
}
else
{
lean_object* v_routine_582_; uint8_t v___x_583_; 
v_routine_582_ = lean_ctor_get(v_b_571_, 1);
lean_inc_ref(v_routine_582_);
v___x_583_ = lp_choreo_Choreo_Ask_check(v_routine_582_, v_snd_580_);
v___y_577_ = v___x_583_;
goto v___jp_576_;
}
v___jp_576_:
{
if (v___y_577_ == 0)
{
lean_dec(v_tail_575_);
lean_dec_ref(v_b_571_);
return v___y_577_;
}
else
{
v_x_572_ = v_tail_575_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__0___boxed(lean_object* v___y_584_, lean_object* v_b_585_, lean_object* v_x_586_){
_start:
{
uint8_t v___y_169__boxed_587_; uint8_t v_res_588_; lean_object* v_r_589_; 
v___y_169__boxed_587_ = lean_unbox(v___y_584_);
v_res_588_ = lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__0(v___y_169__boxed_587_, v_b_585_, v_x_586_);
v_r_589_ = lean_box(v_res_588_);
return v_r_589_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Built_movementOk(lean_object* v_b_590_){
_start:
{
lean_object* v_routine_591_; lean_object* v_asks_592_; uint8_t v___y_594_; lean_object* v_cfg_596_; lean_object* v_phases_597_; uint8_t v___x_598_; 
v_routine_591_ = lean_ctor_get(v_b_590_, 1);
v_asks_592_ = lean_ctor_get(v_b_590_, 3);
lean_inc(v_asks_592_);
v_cfg_596_ = lean_ctor_get(v_routine_591_, 0);
v_phases_597_ = lean_ctor_get(v_routine_591_, 1);
lean_inc(v_phases_597_);
lean_inc_ref(v_cfg_596_);
v___x_598_ = lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__1(v_cfg_596_, v_phases_597_);
if (v___x_598_ == 0)
{
v___y_594_ = v___x_598_;
goto v___jp_593_;
}
else
{
uint8_t v___x_599_; 
lean_inc_ref(v_routine_591_);
v___x_599_ = lp_choreo_Choreo_Routine_checkMovement(v_routine_591_);
v___y_594_ = v___x_599_;
goto v___jp_593_;
}
v___jp_593_:
{
if (v___y_594_ == 0)
{
lean_dec(v_asks_592_);
lean_dec_ref(v_b_590_);
return v___y_594_;
}
else
{
uint8_t v___x_595_; 
v___x_595_ = lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__0(v___y_594_, v_b_590_, v_asks_592_);
return v___x_595_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Built_movementOk___boxed(lean_object* v_b_600_){
_start:
{
uint8_t v_res_601_; lean_object* v_r_602_; 
v_res_601_ = lp_choreo_Choreo_Built_movementOk(v_b_600_);
v_r_602_ = lean_box(v_res_601_);
return v_r_602_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Built_musicOk(lean_object* v_b_603_){
_start:
{
lean_object* v_routine_604_; uint8_t v___x_605_; 
v_routine_604_ = lean_ctor_get(v_b_603_, 1);
v___x_605_ = lp_choreo_Choreo_Routine_checkMusic(v_routine_604_);
return v___x_605_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Built_musicOk___boxed(lean_object* v_b_606_){
_start:
{
uint8_t v_res_607_; lean_object* v_r_608_; 
v_res_607_ = lp_choreo_Choreo_Built_musicOk(v_b_606_);
lean_dec_ref(v_b_606_);
v_r_608_ = lean_box(v_res_607_);
return v_r_608_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_transitionOk(lean_object* v_r_609_, lean_object* v_tr_610_){
_start:
{
uint8_t v___x_611_; 
lean_inc_ref(v_tr_610_);
lean_inc_ref(v_r_609_);
v___x_611_ = lp_choreo_Choreo_Transition_check(v_r_609_, v_tr_610_);
if (v___x_611_ == 0)
{
lean_dec_ref(v_tr_610_);
lean_dec_ref(v_r_609_);
return v___x_611_;
}
else
{
lean_object* v_cfg_612_; lean_object* v___x_613_; uint8_t v___x_614_; 
v_cfg_612_ = lean_ctor_get(v_r_609_, 0);
lean_inc_ref(v_cfg_612_);
v___x_613_ = lp_choreo_Choreo_Transition_segment(v_r_609_, v_tr_610_);
lean_dec_ref(v_r_609_);
v___x_614_ = lp_choreo_List_all___at___00Choreo_Built_movementOk_spec__1(v_cfg_612_, v___x_613_);
return v___x_614_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_transitionOk___boxed(lean_object* v_r_615_, lean_object* v_tr_616_){
_start:
{
uint8_t v_res_617_; lean_object* v_r_618_; 
v_res_617_ = lp_choreo_Choreo_transitionOk(v_r_615_, v_tr_616_);
v_r_618_ = lean_box(v_res_617_);
return v_r_618_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__0(lean_object* v_r_619_, lean_object* v_val_620_, lean_object* v_dx_621_, lean_object* v_dy_622_, lean_object* v_dancers_623_, lean_object* v_k_624_, lean_object* v_fst_625_, lean_object* v_x_626_){
_start:
{
if (lean_obj_tag(v_x_626_) == 0)
{
lean_object* v___x_627_; 
lean_dec_ref(v_fst_625_);
lean_dec(v_k_624_);
lean_dec(v_dancers_623_);
lean_dec(v_dy_622_);
lean_dec(v_dx_621_);
lean_dec_ref(v_r_619_);
v___x_627_ = lean_box(0);
return v___x_627_;
}
else
{
lean_object* v_head_628_; lean_object* v_tail_629_; lean_object* v___x_631_; uint8_t v_isShared_632_; uint8_t v_isSharedCheck_662_; 
v_head_628_ = lean_ctor_get(v_x_626_, 0);
v_tail_629_ = lean_ctor_get(v_x_626_, 1);
v_isSharedCheck_662_ = !lean_is_exclusive(v_x_626_);
if (v_isSharedCheck_662_ == 0)
{
v___x_631_ = v_x_626_;
v_isShared_632_ = v_isSharedCheck_662_;
goto v_resetjp_630_;
}
else
{
lean_inc(v_tail_629_);
lean_inc(v_head_628_);
lean_dec(v_x_626_);
v___x_631_ = lean_box(0);
v_isShared_632_ = v_isSharedCheck_662_;
goto v_resetjp_630_;
}
v_resetjp_630_:
{
lean_object* v_fst_633_; lean_object* v_snd_634_; lean_object* v_cfg_635_; uint8_t v___x_636_; 
v_fst_633_ = lean_ctor_get(v_head_628_, 0);
v_snd_634_ = lean_ctor_get(v_head_628_, 1);
v_cfg_635_ = lean_ctor_get(v_r_619_, 0);
lean_inc(v_snd_634_);
lean_inc(v_fst_633_);
v___x_636_ = lp_choreo_Choreo_lineBrokenAt(v_cfg_635_, v_val_620_, v_fst_633_, v_snd_634_, v_dx_621_, v_dy_622_);
if (v___x_636_ == 0)
{
lean_del_object(v___x_631_);
lean_dec(v_head_628_);
v_x_626_ = v_tail_629_;
goto _start;
}
else
{
lean_object* v___x_639_; uint8_t v_isShared_640_; uint8_t v_isSharedCheck_659_; 
lean_dec(v_tail_629_);
v_isSharedCheck_659_ = !lean_is_exclusive(v_r_619_);
if (v_isSharedCheck_659_ == 0)
{
lean_object* v_unused_660_; lean_object* v_unused_661_; 
v_unused_660_ = lean_ctor_get(v_r_619_, 1);
lean_dec(v_unused_660_);
v_unused_661_ = lean_ctor_get(v_r_619_, 0);
lean_dec(v_unused_661_);
v___x_639_ = v_r_619_;
v_isShared_640_ = v_isSharedCheck_659_;
goto v_resetjp_638_;
}
else
{
lean_dec(v_r_619_);
v___x_639_ = lean_box(0);
v_isShared_640_ = v_isSharedCheck_659_;
goto v_resetjp_638_;
}
v_resetjp_638_:
{
lean_object* v___x_642_; 
lean_inc(v_head_628_);
if (v_isShared_640_ == 0)
{
lean_ctor_set(v___x_639_, 1, v_head_628_);
lean_ctor_set(v___x_639_, 0, v_dy_622_);
v___x_642_ = v___x_639_;
goto v_reusejp_641_;
}
else
{
lean_object* v_reuseFailAlloc_658_; 
v_reuseFailAlloc_658_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_658_, 0, v_dy_622_);
lean_ctor_set(v_reuseFailAlloc_658_, 1, v_head_628_);
v___x_642_ = v_reuseFailAlloc_658_;
goto v_reusejp_641_;
}
v_reusejp_641_:
{
lean_object* v___x_644_; uint8_t v_isShared_645_; uint8_t v_isSharedCheck_655_; 
v_isSharedCheck_655_ = !lean_is_exclusive(v_head_628_);
if (v_isSharedCheck_655_ == 0)
{
lean_object* v_unused_656_; lean_object* v_unused_657_; 
v_unused_656_ = lean_ctor_get(v_head_628_, 1);
lean_dec(v_unused_656_);
v_unused_657_ = lean_ctor_get(v_head_628_, 0);
lean_dec(v_unused_657_);
v___x_644_ = v_head_628_;
v_isShared_645_ = v_isSharedCheck_655_;
goto v_resetjp_643_;
}
else
{
lean_dec(v_head_628_);
v___x_644_ = lean_box(0);
v_isShared_645_ = v_isSharedCheck_655_;
goto v_resetjp_643_;
}
v_resetjp_643_:
{
lean_object* v___x_647_; 
if (v_isShared_645_ == 0)
{
lean_ctor_set(v___x_644_, 1, v___x_642_);
lean_ctor_set(v___x_644_, 0, v_dx_621_);
v___x_647_ = v___x_644_;
goto v_reusejp_646_;
}
else
{
lean_object* v_reuseFailAlloc_654_; 
v_reuseFailAlloc_654_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_654_, 0, v_dx_621_);
lean_ctor_set(v_reuseFailAlloc_654_, 1, v___x_642_);
v___x_647_ = v_reuseFailAlloc_654_;
goto v_reusejp_646_;
}
v_reusejp_646_:
{
lean_object* v___x_649_; 
if (v_isShared_632_ == 0)
{
lean_ctor_set_tag(v___x_631_, 0);
lean_ctor_set(v___x_631_, 1, v___x_647_);
lean_ctor_set(v___x_631_, 0, v_dancers_623_);
v___x_649_ = v___x_631_;
goto v_reusejp_648_;
}
else
{
lean_object* v_reuseFailAlloc_653_; 
v_reuseFailAlloc_653_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_653_, 0, v_dancers_623_);
lean_ctor_set(v_reuseFailAlloc_653_, 1, v___x_647_);
v___x_649_ = v_reuseFailAlloc_653_;
goto v_reusejp_648_;
}
v_reusejp_648_:
{
lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_652_; 
v___x_650_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_650_, 0, v_k_624_);
lean_ctor_set(v___x_650_, 1, v___x_649_);
v___x_651_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_651_, 0, v_fst_625_);
lean_ctor_set(v___x_651_, 1, v___x_650_);
v___x_652_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_652_, 0, v___x_651_);
return v___x_652_;
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
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__0___boxed(lean_object* v_r_663_, lean_object* v_val_664_, lean_object* v_dx_665_, lean_object* v_dy_666_, lean_object* v_dancers_667_, lean_object* v_k_668_, lean_object* v_fst_669_, lean_object* v_x_670_){
_start:
{
lean_object* v_res_671_; 
v_res_671_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__0(v_r_663_, v_val_664_, v_dx_665_, v_dy_666_, v_dancers_667_, v_k_668_, v_fst_669_, v_x_670_);
lean_dec_ref(v_val_664_);
return v_res_671_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(lean_object* v_r_672_, lean_object* v_x_673_){
_start:
{
if (lean_obj_tag(v_x_673_) == 0)
{
lean_object* v___x_674_; 
lean_dec_ref(v_r_672_);
v___x_674_ = lean_box(0);
return v___x_674_;
}
else
{
lean_object* v_head_675_; lean_object* v_snd_676_; lean_object* v_snd_677_; 
v_head_675_ = lean_ctor_get(v_x_673_, 0);
v_snd_676_ = lean_ctor_get(v_head_675_, 1);
v_snd_677_ = lean_ctor_get(v_snd_676_, 1);
if (lean_obj_tag(v_snd_677_) == 8)
{
lean_object* v_tail_678_; lean_object* v_fst_679_; lean_object* v_k_680_; lean_object* v_dancers_681_; lean_object* v_dx_682_; lean_object* v_dy_683_; lean_object* v_phases_684_; lean_object* v___x_685_; 
lean_inc_ref(v_snd_677_);
lean_inc(v_snd_676_);
v_tail_678_ = lean_ctor_get(v_x_673_, 1);
lean_inc(v_tail_678_);
lean_dec_ref_known(v_x_673_, 2);
v_fst_679_ = lean_ctor_get(v_snd_676_, 0);
lean_inc(v_fst_679_);
lean_dec(v_snd_676_);
v_k_680_ = lean_ctor_get(v_snd_677_, 0);
lean_inc_n(v_k_680_, 2);
v_dancers_681_ = lean_ctor_get(v_snd_677_, 1);
lean_inc(v_dancers_681_);
v_dx_682_ = lean_ctor_get(v_snd_677_, 2);
lean_inc(v_dx_682_);
v_dy_683_ = lean_ctor_get(v_snd_677_, 3);
lean_inc(v_dy_683_);
lean_dec_ref_known(v_snd_677_, 4);
v_phases_684_ = lean_ctor_get(v_r_672_, 1);
v___x_685_ = l_List_get_x3fInternal___redArg(v_phases_684_, v_k_680_);
if (lean_obj_tag(v___x_685_) == 0)
{
lean_dec(v_dy_683_);
lean_dec(v_dx_682_);
lean_dec(v_dancers_681_);
lean_dec(v_k_680_);
lean_dec(v_fst_679_);
v_x_673_ = v_tail_678_;
goto _start;
}
else
{
lean_object* v_val_687_; lean_object* v___x_688_; lean_object* v___x_689_; 
v_val_687_ = lean_ctor_get(v___x_685_, 0);
lean_inc(v_val_687_);
lean_dec_ref_known(v___x_685_, 1);
lean_inc(v_dancers_681_);
v___x_688_ = lp_choreo_Choreo_nextPairs(v_dancers_681_);
lean_inc_ref(v_r_672_);
v___x_689_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__0(v_r_672_, v_val_687_, v_dx_682_, v_dy_683_, v_dancers_681_, v_k_680_, v_fst_679_, v___x_688_);
lean_dec(v_val_687_);
if (lean_obj_tag(v___x_689_) == 0)
{
v_x_673_ = v_tail_678_;
goto _start;
}
else
{
lean_dec(v_tail_678_);
lean_dec_ref(v_r_672_);
return v___x_689_;
}
}
}
else
{
lean_object* v_tail_691_; 
v_tail_691_ = lean_ctor_get(v_x_673_, 1);
lean_inc(v_tail_691_);
lean_dec_ref_known(v_x_673_, 2);
v_x_673_ = v_tail_691_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_brokenLine(lean_object* v_r_693_, lean_object* v_asks_694_){
_start:
{
lean_object* v___x_695_; 
v___x_695_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(v_r_693_, v_asks_694_);
return v___x_695_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ptL(lean_object* v_p_699_){
_start:
{
lean_object* v_x_700_; lean_object* v_y_701_; lean_object* v___x_702_; lean_object* v___x_703_; lean_object* v___x_704_; lean_object* v___x_705_; lean_object* v___x_706_; lean_object* v___x_707_; lean_object* v___x_708_; lean_object* v___x_709_; lean_object* v___x_710_; 
v_x_700_ = lean_ctor_get(v_p_699_, 0);
v_y_701_ = lean_ctor_get(v_p_699_, 1);
v___x_702_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__0));
v___x_703_ = lp_choreo_Choreo_intL(v_x_700_);
v___x_704_ = lean_string_append(v___x_702_, v___x_703_);
lean_dec_ref(v___x_703_);
v___x_705_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__1));
v___x_706_ = lean_string_append(v___x_704_, v___x_705_);
v___x_707_ = lp_choreo_Choreo_intL(v_y_701_);
v___x_708_ = lean_string_append(v___x_706_, v___x_707_);
lean_dec_ref(v___x_707_);
v___x_709_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__2));
v___x_710_ = lean_string_append(v___x_708_, v___x_709_);
return v___x_710_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ptL___boxed(lean_object* v_p_711_){
_start:
{
lean_object* v_res_712_; 
v_res_712_ = lp_choreo_Choreo_ptL(v_p_711_);
lean_dec_ref(v_p_711_);
return v_res_712_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_stateL(lean_object* v_s_714_){
_start:
{
lean_object* v___x_715_; lean_object* v___x_716_; 
v___x_715_ = ((lean_object*)(lp_choreo_Choreo_stateL___closed__0));
v___x_716_ = lp_choreo_Choreo_listL___redArg(v___x_715_, v_s_714_);
return v___x_716_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_orbitL(lean_object* v_o_717_){
_start:
{
lean_object* v_i_718_; lean_object* v_cx_719_; lean_object* v_cy_720_; lean_object* v_r2_721_; lean_object* v___x_722_; lean_object* v___x_723_; lean_object* v___x_724_; lean_object* v___x_725_; lean_object* v___x_726_; lean_object* v___x_727_; lean_object* v___x_728_; lean_object* v___x_729_; lean_object* v___x_730_; lean_object* v___x_731_; lean_object* v___x_732_; lean_object* v___x_733_; lean_object* v___x_734_; lean_object* v___x_735_; lean_object* v___x_736_; 
v_i_718_ = lean_ctor_get(v_o_717_, 0);
lean_inc(v_i_718_);
v_cx_719_ = lean_ctor_get(v_o_717_, 1);
lean_inc(v_cx_719_);
v_cy_720_ = lean_ctor_get(v_o_717_, 2);
lean_inc(v_cy_720_);
v_r2_721_ = lean_ctor_get(v_o_717_, 3);
lean_inc(v_r2_721_);
lean_dec_ref(v_o_717_);
v___x_722_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__0));
v___x_723_ = l_Nat_reprFast(v_i_718_);
v___x_724_ = lean_string_append(v___x_722_, v___x_723_);
lean_dec_ref(v___x_723_);
v___x_725_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__1));
v___x_726_ = lean_string_append(v___x_724_, v___x_725_);
v___x_727_ = lp_choreo_Choreo_intL(v_cx_719_);
lean_dec(v_cx_719_);
v___x_728_ = lean_string_append(v___x_726_, v___x_727_);
lean_dec_ref(v___x_727_);
v___x_729_ = lean_string_append(v___x_728_, v___x_725_);
v___x_730_ = lp_choreo_Choreo_intL(v_cy_720_);
lean_dec(v_cy_720_);
v___x_731_ = lean_string_append(v___x_729_, v___x_730_);
lean_dec_ref(v___x_730_);
v___x_732_ = lean_string_append(v___x_731_, v___x_725_);
v___x_733_ = lp_choreo_Choreo_intL(v_r2_721_);
lean_dec(v_r2_721_);
v___x_734_ = lean_string_append(v___x_732_, v___x_733_);
lean_dec_ref(v___x_733_);
v___x_735_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__2));
v___x_736_ = lean_string_append(v___x_734_, v___x_735_);
return v___x_736_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_opL___lam__0(lean_object* v_d_737_){
_start:
{
lean_object* v_fst_738_; lean_object* v_snd_739_; lean_object* v___x_740_; lean_object* v___x_741_; lean_object* v___x_742_; lean_object* v___x_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; lean_object* v___x_747_; lean_object* v___x_748_; 
v_fst_738_ = lean_ctor_get(v_d_737_, 0);
v_snd_739_ = lean_ctor_get(v_d_737_, 1);
v___x_740_ = ((lean_object*)(lp_choreo_Choreo_ratL___closed__0));
v___x_741_ = lp_choreo_Choreo_intL(v_fst_738_);
v___x_742_ = lean_string_append(v___x_740_, v___x_741_);
lean_dec_ref(v___x_741_);
v___x_743_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__1));
v___x_744_ = lean_string_append(v___x_742_, v___x_743_);
v___x_745_ = lp_choreo_Choreo_intL(v_snd_739_);
v___x_746_ = lean_string_append(v___x_744_, v___x_745_);
lean_dec_ref(v___x_745_);
v___x_747_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_748_ = lean_string_append(v___x_746_, v___x_747_);
return v___x_748_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_opL___lam__0___boxed(lean_object* v_d_749_){
_start:
{
lean_object* v_res_750_; 
v_res_750_ = lp_choreo_Choreo_opL___lam__0(v_d_749_);
lean_dec_ref(v_d_749_);
return v_res_750_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_opL(lean_object* v_x_759_){
_start:
{
switch(lean_obj_tag(v_x_759_))
{
case 0:
{
lean_object* v_target_760_; lean_object* v_beats_761_; lean_object* v_certs_762_; lean_object* v___x_763_; lean_object* v___x_764_; lean_object* v___x_765_; lean_object* v___x_766_; lean_object* v___x_767_; lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; 
v_target_760_ = lean_ctor_get(v_x_759_, 0);
lean_inc(v_target_760_);
v_beats_761_ = lean_ctor_get(v_x_759_, 1);
lean_inc(v_beats_761_);
v_certs_762_ = lean_ctor_get(v_x_759_, 2);
lean_inc(v_certs_762_);
lean_dec_ref_known(v_x_759_, 3);
v___x_763_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__0));
v___x_764_ = lp_choreo_Choreo_stateL(v_target_760_);
v___x_765_ = lean_string_append(v___x_763_, v___x_764_);
lean_dec_ref(v___x_764_);
v___x_766_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_767_ = lean_string_append(v___x_765_, v___x_766_);
v___x_768_ = l_Nat_reprFast(v_beats_761_);
v___x_769_ = lean_string_append(v___x_767_, v___x_768_);
lean_dec_ref(v___x_768_);
v___x_770_ = lean_string_append(v___x_769_, v___x_766_);
v___x_771_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__2));
v___x_772_ = lp_choreo_Choreo_listL___redArg(v___x_771_, v_certs_762_);
v___x_773_ = lean_string_append(v___x_770_, v___x_772_);
lean_dec_ref(v___x_772_);
return v___x_773_;
}
case 1:
{
lean_object* v_centre_774_; uint8_t v_ccw_775_; lean_object* v_beats_776_; lean_object* v_certs_777_; lean_object* v_orbits_778_; lean_object* v___x_779_; lean_object* v___x_780_; lean_object* v___x_781_; lean_object* v___x_782_; lean_object* v___x_783_; lean_object* v___x_784_; lean_object* v___x_785_; lean_object* v___x_786_; lean_object* v___x_787_; lean_object* v___x_788_; lean_object* v___x_789_; lean_object* v___x_790_; lean_object* v___x_791_; lean_object* v___x_792_; lean_object* v___x_793_; lean_object* v___x_794_; lean_object* v___x_795_; lean_object* v___x_796_; 
v_centre_774_ = lean_ctor_get(v_x_759_, 0);
lean_inc_ref(v_centre_774_);
v_ccw_775_ = lean_ctor_get_uint8(v_x_759_, sizeof(void*)*4);
v_beats_776_ = lean_ctor_get(v_x_759_, 1);
lean_inc(v_beats_776_);
v_certs_777_ = lean_ctor_get(v_x_759_, 2);
lean_inc(v_certs_777_);
v_orbits_778_ = lean_ctor_get(v_x_759_, 3);
lean_inc(v_orbits_778_);
lean_dec_ref_known(v_x_759_, 4);
v___x_779_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__3));
v___x_780_ = lp_choreo_Choreo_ptL(v_centre_774_);
lean_dec_ref(v_centre_774_);
v___x_781_ = lean_string_append(v___x_779_, v___x_780_);
lean_dec_ref(v___x_780_);
v___x_782_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_783_ = lean_string_append(v___x_781_, v___x_782_);
v___x_784_ = lp_choreo_Choreo_boolL(v_ccw_775_);
v___x_785_ = lean_string_append(v___x_783_, v___x_784_);
lean_dec_ref(v___x_784_);
v___x_786_ = lean_string_append(v___x_785_, v___x_782_);
v___x_787_ = l_Nat_reprFast(v_beats_776_);
v___x_788_ = lean_string_append(v___x_786_, v___x_787_);
lean_dec_ref(v___x_787_);
v___x_789_ = lean_string_append(v___x_788_, v___x_782_);
v___x_790_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__2));
v___x_791_ = lp_choreo_Choreo_listL___redArg(v___x_790_, v_certs_777_);
v___x_792_ = lean_string_append(v___x_789_, v___x_791_);
lean_dec_ref(v___x_791_);
v___x_793_ = lean_string_append(v___x_792_, v___x_782_);
v___x_794_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__4));
v___x_795_ = lp_choreo_Choreo_listL___redArg(v___x_794_, v_orbits_778_);
v___x_796_ = lean_string_append(v___x_793_, v___x_795_);
lean_dec_ref(v___x_795_);
return v___x_796_;
}
case 2:
{
lean_object* v_deltas_797_; lean_object* v_beats_798_; lean_object* v___f_799_; lean_object* v___x_800_; lean_object* v___x_801_; lean_object* v___x_802_; lean_object* v___x_803_; lean_object* v___x_804_; lean_object* v___x_805_; lean_object* v___x_806_; 
v_deltas_797_ = lean_ctor_get(v_x_759_, 0);
lean_inc(v_deltas_797_);
v_beats_798_ = lean_ctor_get(v_x_759_, 1);
lean_inc(v_beats_798_);
lean_dec_ref_known(v_x_759_, 2);
v___f_799_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__5));
v___x_800_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__6));
v___x_801_ = lp_choreo_Choreo_listL___redArg(v___f_799_, v_deltas_797_);
v___x_802_ = lean_string_append(v___x_800_, v___x_801_);
lean_dec_ref(v___x_801_);
v___x_803_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_804_ = lean_string_append(v___x_802_, v___x_803_);
v___x_805_ = l_Nat_reprFast(v_beats_798_);
v___x_806_ = lean_string_append(v___x_804_, v___x_805_);
lean_dec_ref(v___x_805_);
return v___x_806_;
}
default: 
{
lean_object* v_left_807_; lean_object* v_right_808_; lean_object* v_line_809_; lean_object* v_target_810_; lean_object* v_beats_811_; lean_object* v_certs_812_; lean_object* v___x_813_; lean_object* v___x_814_; lean_object* v___x_815_; lean_object* v___x_816_; lean_object* v___x_817_; lean_object* v___x_818_; lean_object* v___x_819_; lean_object* v___x_820_; lean_object* v___x_821_; lean_object* v___x_822_; lean_object* v___x_823_; lean_object* v___x_824_; lean_object* v___x_825_; lean_object* v___x_826_; lean_object* v___x_827_; lean_object* v___x_828_; lean_object* v___x_829_; lean_object* v___x_830_; lean_object* v___x_831_; lean_object* v___x_832_; 
v_left_807_ = lean_ctor_get(v_x_759_, 0);
lean_inc(v_left_807_);
v_right_808_ = lean_ctor_get(v_x_759_, 1);
lean_inc(v_right_808_);
v_line_809_ = lean_ctor_get(v_x_759_, 2);
lean_inc(v_line_809_);
v_target_810_ = lean_ctor_get(v_x_759_, 3);
lean_inc(v_target_810_);
v_beats_811_ = lean_ctor_get(v_x_759_, 4);
lean_inc(v_beats_811_);
v_certs_812_ = lean_ctor_get(v_x_759_, 5);
lean_inc(v_certs_812_);
lean_dec_ref_known(v_x_759_, 6);
v___x_813_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__7));
v___x_814_ = lp_choreo_Choreo_natsL(v_left_807_);
v___x_815_ = lean_string_append(v___x_813_, v___x_814_);
lean_dec_ref(v___x_814_);
v___x_816_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_817_ = lean_string_append(v___x_815_, v___x_816_);
v___x_818_ = lp_choreo_Choreo_natsL(v_right_808_);
v___x_819_ = lean_string_append(v___x_817_, v___x_818_);
lean_dec_ref(v___x_818_);
v___x_820_ = lean_string_append(v___x_819_, v___x_816_);
v___x_821_ = lp_choreo_Choreo_intL(v_line_809_);
lean_dec(v_line_809_);
v___x_822_ = lean_string_append(v___x_820_, v___x_821_);
lean_dec_ref(v___x_821_);
v___x_823_ = lean_string_append(v___x_822_, v___x_816_);
v___x_824_ = lp_choreo_Choreo_stateL(v_target_810_);
v___x_825_ = lean_string_append(v___x_823_, v___x_824_);
lean_dec_ref(v___x_824_);
v___x_826_ = lean_string_append(v___x_825_, v___x_816_);
v___x_827_ = l_Nat_reprFast(v_beats_811_);
v___x_828_ = lean_string_append(v___x_826_, v___x_827_);
lean_dec_ref(v___x_827_);
v___x_829_ = lean_string_append(v___x_828_, v___x_816_);
v___x_830_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__2));
v___x_831_ = lp_choreo_Choreo_listL___redArg(v___x_830_, v_certs_812_);
v___x_832_ = lean_string_append(v___x_829_, v___x_831_);
lean_dec_ref(v___x_831_);
return v___x_832_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_predL(lean_object* v_x_840_){
_start:
{
switch(lean_obj_tag(v_x_840_))
{
case 0:
{
lean_object* v___x_841_; 
v___x_841_ = ((lean_object*)(lp_choreo_Choreo_predL___closed__0));
return v___x_841_;
}
case 1:
{
lean_object* v_places_842_; lean_object* v___x_843_; lean_object* v___x_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_places_842_ = lean_ctor_get(v_x_840_, 0);
lean_inc(v_places_842_);
lean_dec_ref_known(v_x_840_, 1);
v___x_843_ = ((lean_object*)(lp_choreo_Choreo_predL___closed__1));
v___x_844_ = lp_choreo_Choreo_stateL(v_places_842_);
v___x_845_ = lean_string_append(v___x_843_, v___x_844_);
lean_dec_ref(v___x_844_);
v___x_846_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_847_ = lean_string_append(v___x_845_, v___x_846_);
return v___x_847_;
}
case 2:
{
lean_object* v_n_848_; lean_object* v_d_849_; lean_object* v___x_850_; lean_object* v___x_851_; lean_object* v___x_852_; lean_object* v___x_853_; lean_object* v___x_854_; lean_object* v___x_855_; lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v___x_858_; 
v_n_848_ = lean_ctor_get(v_x_840_, 0);
lean_inc(v_n_848_);
v_d_849_ = lean_ctor_get(v_x_840_, 1);
lean_inc(v_d_849_);
lean_dec_ref_known(v_x_840_, 2);
v___x_850_ = ((lean_object*)(lp_choreo_Choreo_predL___closed__2));
v___x_851_ = l_Nat_reprFast(v_n_848_);
v___x_852_ = lean_string_append(v___x_850_, v___x_851_);
lean_dec_ref(v___x_851_);
v___x_853_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_854_ = lean_string_append(v___x_852_, v___x_853_);
v___x_855_ = lp_choreo_Choreo_intL(v_d_849_);
lean_dec(v_d_849_);
v___x_856_ = lean_string_append(v___x_854_, v___x_855_);
lean_dec_ref(v___x_855_);
v___x_857_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_858_ = lean_string_append(v___x_856_, v___x_857_);
return v___x_858_;
}
case 3:
{
lean_object* v_who_859_; lean_object* v_cx_860_; lean_object* v_cy_861_; lean_object* v_r2_862_; lean_object* v___x_863_; lean_object* v___x_864_; lean_object* v___x_865_; lean_object* v___x_866_; lean_object* v___x_867_; lean_object* v___x_868_; lean_object* v___x_869_; lean_object* v___x_870_; lean_object* v___x_871_; lean_object* v___x_872_; lean_object* v___x_873_; lean_object* v___x_874_; lean_object* v___x_875_; lean_object* v___x_876_; lean_object* v___x_877_; 
v_who_859_ = lean_ctor_get(v_x_840_, 0);
lean_inc(v_who_859_);
v_cx_860_ = lean_ctor_get(v_x_840_, 1);
lean_inc(v_cx_860_);
v_cy_861_ = lean_ctor_get(v_x_840_, 2);
lean_inc(v_cy_861_);
v_r2_862_ = lean_ctor_get(v_x_840_, 3);
lean_inc(v_r2_862_);
lean_dec_ref_known(v_x_840_, 4);
v___x_863_ = ((lean_object*)(lp_choreo_Choreo_predL___closed__3));
v___x_864_ = lp_choreo_Choreo_natsL(v_who_859_);
v___x_865_ = lean_string_append(v___x_863_, v___x_864_);
lean_dec_ref(v___x_864_);
v___x_866_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_867_ = lean_string_append(v___x_865_, v___x_866_);
v___x_868_ = lp_choreo_Choreo_intL(v_cx_860_);
lean_dec(v_cx_860_);
v___x_869_ = lean_string_append(v___x_867_, v___x_868_);
lean_dec_ref(v___x_868_);
v___x_870_ = lean_string_append(v___x_869_, v___x_866_);
v___x_871_ = lp_choreo_Choreo_intL(v_cy_861_);
lean_dec(v_cy_861_);
v___x_872_ = lean_string_append(v___x_870_, v___x_871_);
lean_dec_ref(v___x_871_);
v___x_873_ = lean_string_append(v___x_872_, v___x_866_);
v___x_874_ = lp_choreo_Choreo_intL(v_r2_862_);
lean_dec(v_r2_862_);
v___x_875_ = lean_string_append(v___x_873_, v___x_874_);
lean_dec_ref(v___x_874_);
v___x_876_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_877_ = lean_string_append(v___x_875_, v___x_876_);
return v___x_877_;
}
case 4:
{
lean_object* v_A_878_; lean_object* v_B_879_; lean_object* v_d_880_; lean_object* v___x_881_; lean_object* v___x_882_; lean_object* v___x_883_; lean_object* v___x_884_; lean_object* v___x_885_; lean_object* v___x_886_; lean_object* v___x_887_; lean_object* v___x_888_; lean_object* v___x_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; 
v_A_878_ = lean_ctor_get(v_x_840_, 0);
lean_inc(v_A_878_);
v_B_879_ = lean_ctor_get(v_x_840_, 1);
lean_inc(v_B_879_);
v_d_880_ = lean_ctor_get(v_x_840_, 2);
lean_inc(v_d_880_);
lean_dec_ref_known(v_x_840_, 3);
v___x_881_ = ((lean_object*)(lp_choreo_Choreo_predL___closed__4));
v___x_882_ = lp_choreo_Choreo_natsL(v_A_878_);
v___x_883_ = lean_string_append(v___x_881_, v___x_882_);
lean_dec_ref(v___x_882_);
v___x_884_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_885_ = lean_string_append(v___x_883_, v___x_884_);
v___x_886_ = lp_choreo_Choreo_natsL(v_B_879_);
v___x_887_ = lean_string_append(v___x_885_, v___x_886_);
lean_dec_ref(v___x_886_);
v___x_888_ = lean_string_append(v___x_887_, v___x_884_);
v___x_889_ = lp_choreo_Choreo_intL(v_d_880_);
lean_dec(v_d_880_);
v___x_890_ = lean_string_append(v___x_888_, v___x_889_);
lean_dec_ref(v___x_889_);
v___x_891_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_892_ = lean_string_append(v___x_890_, v___x_891_);
return v___x_892_;
}
case 5:
{
lean_object* v_A_893_; lean_object* v_B_894_; lean_object* v_line_895_; lean_object* v_d_896_; lean_object* v___x_897_; lean_object* v___x_898_; lean_object* v___x_899_; lean_object* v___x_900_; lean_object* v___x_901_; lean_object* v___x_902_; lean_object* v___x_903_; lean_object* v___x_904_; lean_object* v___x_905_; lean_object* v___x_906_; lean_object* v___x_907_; lean_object* v___x_908_; lean_object* v___x_909_; lean_object* v___x_910_; lean_object* v___x_911_; 
v_A_893_ = lean_ctor_get(v_x_840_, 0);
lean_inc(v_A_893_);
v_B_894_ = lean_ctor_get(v_x_840_, 1);
lean_inc(v_B_894_);
v_line_895_ = lean_ctor_get(v_x_840_, 2);
lean_inc(v_line_895_);
v_d_896_ = lean_ctor_get(v_x_840_, 3);
lean_inc(v_d_896_);
lean_dec_ref_known(v_x_840_, 4);
v___x_897_ = ((lean_object*)(lp_choreo_Choreo_predL___closed__5));
v___x_898_ = lp_choreo_Choreo_natsL(v_A_893_);
v___x_899_ = lean_string_append(v___x_897_, v___x_898_);
lean_dec_ref(v___x_898_);
v___x_900_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_901_ = lean_string_append(v___x_899_, v___x_900_);
v___x_902_ = lp_choreo_Choreo_natsL(v_B_894_);
v___x_903_ = lean_string_append(v___x_901_, v___x_902_);
lean_dec_ref(v___x_902_);
v___x_904_ = lean_string_append(v___x_903_, v___x_900_);
v___x_905_ = lp_choreo_Choreo_intL(v_line_895_);
lean_dec(v_line_895_);
v___x_906_ = lean_string_append(v___x_904_, v___x_905_);
lean_dec_ref(v___x_905_);
v___x_907_ = lean_string_append(v___x_906_, v___x_900_);
v___x_908_ = lp_choreo_Choreo_intL(v_d_896_);
lean_dec(v_d_896_);
v___x_909_ = lean_string_append(v___x_907_, v___x_908_);
lean_dec_ref(v___x_908_);
v___x_910_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_911_ = lean_string_append(v___x_909_, v___x_910_);
return v___x_911_;
}
default: 
{
lean_object* v_p_912_; lean_object* v_q_913_; lean_object* v___x_914_; lean_object* v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; lean_object* v___x_918_; lean_object* v___x_919_; lean_object* v___x_920_; lean_object* v___x_921_; lean_object* v___x_922_; 
v_p_912_ = lean_ctor_get(v_x_840_, 0);
lean_inc(v_p_912_);
v_q_913_ = lean_ctor_get(v_x_840_, 1);
lean_inc(v_q_913_);
lean_dec_ref_known(v_x_840_, 2);
v___x_914_ = ((lean_object*)(lp_choreo_Choreo_predL___closed__6));
v___x_915_ = lp_choreo_Choreo_predL(v_p_912_);
v___x_916_ = lean_string_append(v___x_914_, v___x_915_);
lean_dec_ref(v___x_915_);
v___x_917_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_918_ = lean_string_append(v___x_916_, v___x_917_);
v___x_919_ = lp_choreo_Choreo_predL(v_q_913_);
v___x_920_ = lean_string_append(v___x_918_, v___x_919_);
lean_dec_ref(v___x_919_);
v___x_921_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_922_ = lean_string_append(v___x_920_, v___x_921_);
return v___x_922_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programSource_seqL(lean_object* v_a_927_){
_start:
{
if (lean_obj_tag(v_a_927_) == 0)
{
lean_object* v___x_928_; 
v___x_928_ = ((lean_object*)(lp_choreo_Choreo_programSource_seqL___closed__0));
return v___x_928_;
}
else
{
lean_object* v_tail_929_; 
v_tail_929_ = lean_ctor_get(v_a_927_, 1);
if (lean_obj_tag(v_tail_929_) == 0)
{
lean_object* v_head_930_; lean_object* v___x_931_; lean_object* v___x_932_; lean_object* v___x_933_; lean_object* v___x_934_; 
v_head_930_ = lean_ctor_get(v_a_927_, 0);
v___x_931_ = ((lean_object*)(lp_choreo_Choreo_programSource_seqL___closed__1));
v___x_932_ = lean_string_append(v___x_931_, v_head_930_);
v___x_933_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_934_ = lean_string_append(v___x_932_, v___x_933_);
return v___x_934_;
}
else
{
lean_object* v_head_935_; lean_object* v___x_936_; lean_object* v___x_937_; lean_object* v___x_938_; lean_object* v___x_939_; lean_object* v___x_940_; lean_object* v___x_941_; lean_object* v___x_942_; lean_object* v___x_943_; 
v_head_935_ = lean_ctor_get(v_a_927_, 0);
v___x_936_ = ((lean_object*)(lp_choreo_Choreo_programSource_seqL___closed__2));
v___x_937_ = lean_string_append(v___x_936_, v_head_935_);
v___x_938_ = ((lean_object*)(lp_choreo_Choreo_programSource_seqL___closed__3));
v___x_939_ = lean_string_append(v___x_937_, v___x_938_);
v___x_940_ = lp_choreo_Choreo_programSource_seqL(v_tail_929_);
v___x_941_ = lean_string_append(v___x_939_, v___x_940_);
lean_dec_ref(v___x_940_);
v___x_942_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_943_ = lean_string_append(v___x_941_, v___x_942_);
return v___x_943_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programSource_seqL___boxed(lean_object* v_a_944_){
_start:
{
lean_object* v_res_945_; 
v_res_945_ = lp_choreo_Choreo_programSource_seqL(v_a_944_);
lean_dec(v_a_944_);
return v_res_945_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg(lean_object* v_as_x27_952_, lean_object* v_b_953_){
_start:
{
if (lean_obj_tag(v_as_x27_952_) == 0)
{
return v_b_953_;
}
else
{
lean_object* v_head_954_; lean_object* v_fst_955_; lean_object* v_step_956_; lean_object* v_tail_957_; lean_object* v_snd_958_; lean_object* v_after_959_; lean_object* v_op_960_; lean_object* v_requires_961_; lean_object* v_ensures_962_; lean_object* v___x_963_; lean_object* v___x_964_; lean_object* v___x_965_; lean_object* v___x_966_; lean_object* v___x_967_; lean_object* v___x_968_; lean_object* v___x_969_; lean_object* v___x_970_; lean_object* v___x_971_; lean_object* v___x_972_; lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; lean_object* v___x_979_; lean_object* v___x_980_; lean_object* v___x_981_; lean_object* v___x_982_; lean_object* v___x_983_; lean_object* v___x_984_; lean_object* v___x_985_; lean_object* v___x_986_; lean_object* v___x_987_; lean_object* v___x_988_; lean_object* v___x_989_; lean_object* v___x_990_; lean_object* v___x_991_; lean_object* v___x_992_; 
v_head_954_ = lean_ctor_get(v_as_x27_952_, 0);
v_fst_955_ = lean_ctor_get(v_head_954_, 0);
v_step_956_ = lean_ctor_get(v_fst_955_, 5);
v_tail_957_ = lean_ctor_get(v_as_x27_952_, 1);
v_snd_958_ = lean_ctor_get(v_head_954_, 1);
v_after_959_ = lean_ctor_get(v_fst_955_, 9);
v_op_960_ = lean_ctor_get(v_step_956_, 0);
v_requires_961_ = lean_ctor_get(v_step_956_, 1);
v_ensures_962_ = lean_ctor_get(v_step_956_, 2);
v___x_963_ = lean_unsigned_to_nat(1u);
v___x_964_ = lean_nat_add(v_snd_958_, v___x_963_);
v___x_965_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_966_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__0));
v___x_967_ = l_Nat_reprFast(v___x_964_);
v___x_968_ = lean_string_append(v___x_966_, v___x_967_);
lean_dec_ref(v___x_967_);
v___x_969_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__1));
v___x_970_ = lean_string_append(v___x_968_, v___x_969_);
lean_inc(v_after_959_);
v___x_971_ = lp_choreo_Choreo_stateL(v_after_959_);
v___x_972_ = lean_string_append(v___x_970_, v___x_971_);
lean_dec_ref(v___x_971_);
v___x_973_ = lean_string_append(v___x_972_, v___x_965_);
v___x_974_ = lean_string_append(v_b_953_, v___x_973_);
lean_dec_ref(v___x_973_);
v___x_975_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__2));
lean_inc(v_snd_958_);
v___x_976_ = l_Nat_reprFast(v_snd_958_);
v___x_977_ = lean_string_append(v___x_975_, v___x_976_);
lean_dec_ref(v___x_976_);
v___x_978_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__3));
v___x_979_ = lean_string_append(v___x_977_, v___x_978_);
lean_inc_ref(v_op_960_);
v___x_980_ = lp_choreo_Choreo_opL(v_op_960_);
v___x_981_ = lean_string_append(v___x_979_, v___x_980_);
lean_dec_ref(v___x_980_);
v___x_982_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__4));
v___x_983_ = lean_string_append(v___x_981_, v___x_982_);
lean_inc(v_requires_961_);
v___x_984_ = lp_choreo_Choreo_predL(v_requires_961_);
v___x_985_ = lean_string_append(v___x_983_, v___x_984_);
lean_dec_ref(v___x_984_);
v___x_986_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___closed__5));
v___x_987_ = lean_string_append(v___x_985_, v___x_986_);
lean_inc(v_ensures_962_);
v___x_988_ = lp_choreo_Choreo_predL(v_ensures_962_);
v___x_989_ = lean_string_append(v___x_987_, v___x_988_);
lean_dec_ref(v___x_988_);
v___x_990_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__6));
v___x_991_ = lean_string_append(v___x_989_, v___x_990_);
v___x_992_ = lean_string_append(v___x_974_, v___x_991_);
lean_dec_ref(v___x_991_);
v_as_x27_952_ = v_tail_957_;
v_b_953_ = v___x_992_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg___boxed(lean_object* v_as_x27_994_, lean_object* v_b_995_){
_start:
{
lean_object* v_res_996_; 
v_res_996_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg(v_as_x27_994_, v_b_995_);
lean_dec(v_as_x27_994_);
return v_res_996_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programSource_spec__1(lean_object* v_a_998_, lean_object* v_a_999_){
_start:
{
if (lean_obj_tag(v_a_998_) == 0)
{
lean_object* v___x_1000_; 
v___x_1000_ = l_List_reverse___redArg(v_a_999_);
return v___x_1000_;
}
else
{
lean_object* v_head_1001_; lean_object* v_tail_1002_; lean_object* v___x_1004_; uint8_t v_isShared_1005_; uint8_t v_isSharedCheck_1013_; 
v_head_1001_ = lean_ctor_get(v_a_998_, 0);
v_tail_1002_ = lean_ctor_get(v_a_998_, 1);
v_isSharedCheck_1013_ = !lean_is_exclusive(v_a_998_);
if (v_isSharedCheck_1013_ == 0)
{
v___x_1004_ = v_a_998_;
v_isShared_1005_ = v_isSharedCheck_1013_;
goto v_resetjp_1003_;
}
else
{
lean_inc(v_tail_1002_);
lean_inc(v_head_1001_);
lean_dec(v_a_998_);
v___x_1004_ = lean_box(0);
v_isShared_1005_ = v_isSharedCheck_1013_;
goto v_resetjp_1003_;
}
v_resetjp_1003_:
{
lean_object* v___x_1006_; lean_object* v___x_1007_; lean_object* v___x_1008_; lean_object* v___x_1010_; 
v___x_1006_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_programSource_spec__1___closed__0));
v___x_1007_ = l_Nat_reprFast(v_head_1001_);
v___x_1008_ = lean_string_append(v___x_1006_, v___x_1007_);
lean_dec_ref(v___x_1007_);
if (v_isShared_1005_ == 0)
{
lean_ctor_set(v___x_1004_, 1, v_a_999_);
lean_ctor_set(v___x_1004_, 0, v___x_1008_);
v___x_1010_ = v___x_1004_;
goto v_reusejp_1009_;
}
else
{
lean_object* v_reuseFailAlloc_1012_; 
v_reuseFailAlloc_1012_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1012_, 0, v___x_1008_);
lean_ctor_set(v_reuseFailAlloc_1012_, 1, v_a_999_);
v___x_1010_ = v_reuseFailAlloc_1012_;
goto v_reusejp_1009_;
}
v_reusejp_1009_:
{
v_a_998_ = v_tail_1002_;
v_a_999_ = v___x_1010_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programSource(lean_object* v_steps_1018_, lean_object* v_start_1019_){
_start:
{
uint8_t v___x_1020_; 
v___x_1020_ = l_List_isEmpty___redArg(v_steps_1018_);
if (v___x_1020_ == 0)
{
lean_object* v_out_1021_; lean_object* v___x_1022_; lean_object* v___x_1023_; lean_object* v___x_1024_; lean_object* v___x_1025_; lean_object* v___x_1026_; lean_object* v_out_1027_; lean_object* v___x_1028_; lean_object* v___x_1029_; lean_object* v___x_1030_; lean_object* v___x_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; lean_object* v___x_1034_; lean_object* v___x_1035_; lean_object* v___x_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; 
v_out_1021_ = ((lean_object*)(lp_choreo_Choreo_programSource___closed__0));
v___x_1022_ = ((lean_object*)(lp_choreo_Choreo_programSource___closed__1));
v___x_1023_ = lp_choreo_Choreo_stateL(v_start_1019_);
v___x_1024_ = lean_string_append(v___x_1022_, v___x_1023_);
lean_dec_ref(v___x_1023_);
v___x_1025_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1026_ = lean_string_append(v___x_1024_, v___x_1025_);
v_out_1027_ = lean_string_append(v_out_1021_, v___x_1026_);
lean_dec_ref(v___x_1026_);
v___x_1028_ = lean_unsigned_to_nat(0u);
lean_inc(v_steps_1018_);
v___x_1029_ = l_List_zipIdxTR___redArg(v_steps_1018_, v___x_1028_);
v___x_1030_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg(v___x_1029_, v_out_1027_);
lean_dec(v___x_1029_);
v___x_1031_ = ((lean_object*)(lp_choreo_Choreo_programSource___closed__2));
v___x_1032_ = l_List_lengthTR___redArg(v_steps_1018_);
lean_dec(v_steps_1018_);
v___x_1033_ = l_List_range(v___x_1032_);
v___x_1034_ = lean_box(0);
v___x_1035_ = lp_choreo_List_mapTR_loop___at___00Choreo_programSource_spec__1(v___x_1033_, v___x_1034_);
v___x_1036_ = lp_choreo_Choreo_programSource_seqL(v___x_1035_);
lean_dec(v___x_1035_);
v___x_1037_ = lean_string_append(v___x_1031_, v___x_1036_);
lean_dec_ref(v___x_1036_);
v___x_1038_ = ((lean_object*)(lp_choreo_Choreo_programSource___closed__3));
v___x_1039_ = lean_string_append(v___x_1037_, v___x_1038_);
v___x_1040_ = lean_string_append(v___x_1030_, v___x_1039_);
lean_dec_ref(v___x_1039_);
return v___x_1040_;
}
else
{
lean_object* v___x_1041_; 
lean_dec(v_start_1019_);
lean_dec(v_steps_1018_);
v___x_1041_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
return v___x_1041_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0(lean_object* v_as_1042_, lean_object* v_as_x27_1043_, lean_object* v_b_1044_, lean_object* v_a_1045_){
_start:
{
lean_object* v___x_1046_; 
v___x_1046_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___redArg(v_as_x27_1043_, v_b_1044_);
return v___x_1046_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0___boxed(lean_object* v_as_1047_, lean_object* v_as_x27_1048_, lean_object* v_b_1049_, lean_object* v_a_1050_){
_start:
{
lean_object* v_res_1051_; 
v_res_1051_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programSource_spec__0(v_as_1047_, v_as_x27_1048_, v_b_1049_, v_a_1050_);
lean_dec(v_as_x27_1048_);
lean_dec(v_as_1047_);
return v_res_1051_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_posL(lean_object* v_p_1052_){
_start:
{
lean_object* v_x_1053_; lean_object* v_y_1054_; lean_object* v___x_1055_; lean_object* v___x_1056_; lean_object* v___x_1057_; lean_object* v___x_1058_; lean_object* v___x_1059_; lean_object* v___x_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; 
v_x_1053_ = lean_ctor_get(v_p_1052_, 0);
v_y_1054_ = lean_ctor_get(v_p_1052_, 1);
v___x_1055_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__0));
v___x_1056_ = lp_choreo_Choreo_intL(v_x_1053_);
v___x_1057_ = lean_string_append(v___x_1055_, v___x_1056_);
lean_dec_ref(v___x_1056_);
v___x_1058_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__1));
v___x_1059_ = lean_string_append(v___x_1057_, v___x_1058_);
v___x_1060_ = lp_choreo_Choreo_intL(v_y_1054_);
v___x_1061_ = lean_string_append(v___x_1059_, v___x_1060_);
lean_dec_ref(v___x_1060_);
v___x_1062_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__2));
v___x_1063_ = lean_string_append(v___x_1061_, v___x_1062_);
return v___x_1063_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_posL___boxed(lean_object* v_p_1064_){
_start:
{
lean_object* v_res_1065_; 
v_res_1065_ = lp_choreo_Choreo_posL(v_p_1064_);
lean_dec_ref(v_p_1064_);
return v_res_1065_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_tOpL(lean_object* v_x_1071_){
_start:
{
lean_object* v___y_1073_; lean_object* v___y_1074_; 
switch(lean_obj_tag(v_x_1071_))
{
case 0:
{
lean_object* v_vx_1078_; lean_object* v_vy_1079_; lean_object* v_num_1080_; lean_object* v_den_1081_; lean_object* v___x_1082_; lean_object* v___y_1084_; lean_object* v___x_1098_; uint8_t v___x_1099_; 
v_vx_1078_ = lean_ctor_get(v_x_1071_, 0);
lean_inc_ref(v_vx_1078_);
v_vy_1079_ = lean_ctor_get(v_x_1071_, 1);
lean_inc_ref(v_vy_1079_);
lean_dec_ref_known(v_x_1071_, 2);
v_num_1080_ = lean_ctor_get(v_vx_1078_, 0);
lean_inc(v_num_1080_);
v_den_1081_ = lean_ctor_get(v_vx_1078_, 1);
lean_inc(v_den_1081_);
lean_dec_ref(v_vx_1078_);
v___x_1082_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__0));
v___x_1098_ = lean_unsigned_to_nat(1u);
v___x_1099_ = lean_nat_dec_eq(v_den_1081_, v___x_1098_);
if (v___x_1099_ == 0)
{
lean_object* v___x_1100_; lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
v___x_1100_ = l_Int_repr(v_num_1080_);
lean_dec(v_num_1080_);
v___x_1101_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__1));
v___x_1102_ = lean_string_append(v___x_1100_, v___x_1101_);
v___x_1103_ = l_Nat_reprFast(v_den_1081_);
v___x_1104_ = lean_string_append(v___x_1102_, v___x_1103_);
lean_dec_ref(v___x_1103_);
v___y_1084_ = v___x_1104_;
goto v___jp_1083_;
}
else
{
lean_object* v___x_1105_; 
lean_dec(v_den_1081_);
v___x_1105_ = l_Int_repr(v_num_1080_);
lean_dec(v_num_1080_);
v___y_1084_ = v___x_1105_;
goto v___jp_1083_;
}
v___jp_1083_:
{
lean_object* v_num_1085_; lean_object* v_den_1086_; lean_object* v___x_1087_; lean_object* v___x_1088_; lean_object* v___x_1089_; lean_object* v___x_1090_; uint8_t v___x_1091_; 
v_num_1085_ = lean_ctor_get(v_vy_1079_, 0);
lean_inc(v_num_1085_);
v_den_1086_ = lean_ctor_get(v_vy_1079_, 1);
lean_inc(v_den_1086_);
lean_dec_ref(v_vy_1079_);
v___x_1087_ = lean_string_append(v___x_1082_, v___y_1084_);
lean_dec_ref(v___y_1084_);
v___x_1088_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_1089_ = lean_string_append(v___x_1087_, v___x_1088_);
v___x_1090_ = lean_unsigned_to_nat(1u);
v___x_1091_ = lean_nat_dec_eq(v_den_1086_, v___x_1090_);
if (v___x_1091_ == 0)
{
lean_object* v___x_1092_; lean_object* v___x_1093_; lean_object* v___x_1094_; lean_object* v___x_1095_; lean_object* v___x_1096_; 
v___x_1092_ = l_Int_repr(v_num_1085_);
lean_dec(v_num_1085_);
v___x_1093_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__1));
v___x_1094_ = lean_string_append(v___x_1092_, v___x_1093_);
v___x_1095_ = l_Nat_reprFast(v_den_1086_);
v___x_1096_ = lean_string_append(v___x_1094_, v___x_1095_);
lean_dec_ref(v___x_1095_);
v___y_1073_ = v___x_1089_;
v___y_1074_ = v___x_1096_;
goto v___jp_1072_;
}
else
{
lean_object* v___x_1097_; 
lean_dec(v_den_1086_);
v___x_1097_ = l_Int_repr(v_num_1085_);
lean_dec(v_num_1085_);
v___y_1073_ = v___x_1089_;
v___y_1074_ = v___x_1097_;
goto v___jp_1072_;
}
}
}
case 1:
{
lean_object* v_cx_1106_; lean_object* v_cy_1107_; lean_object* v_quarters_1108_; lean_object* v___y_1110_; lean_object* v___y_1111_; lean_object* v___y_1112_; lean_object* v_num_1119_; lean_object* v_den_1120_; lean_object* v___x_1121_; lean_object* v___y_1123_; lean_object* v___x_1137_; uint8_t v___x_1138_; 
v_cx_1106_ = lean_ctor_get(v_x_1071_, 0);
lean_inc_ref(v_cx_1106_);
v_cy_1107_ = lean_ctor_get(v_x_1071_, 1);
lean_inc_ref(v_cy_1107_);
v_quarters_1108_ = lean_ctor_get(v_x_1071_, 2);
lean_inc(v_quarters_1108_);
lean_dec_ref_known(v_x_1071_, 3);
v_num_1119_ = lean_ctor_get(v_cx_1106_, 0);
lean_inc(v_num_1119_);
v_den_1120_ = lean_ctor_get(v_cx_1106_, 1);
lean_inc(v_den_1120_);
lean_dec_ref(v_cx_1106_);
v___x_1121_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__2));
v___x_1137_ = lean_unsigned_to_nat(1u);
v___x_1138_ = lean_nat_dec_eq(v_den_1120_, v___x_1137_);
if (v___x_1138_ == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; 
v___x_1139_ = l_Int_repr(v_num_1119_);
lean_dec(v_num_1119_);
v___x_1140_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__1));
v___x_1141_ = lean_string_append(v___x_1139_, v___x_1140_);
v___x_1142_ = l_Nat_reprFast(v_den_1120_);
v___x_1143_ = lean_string_append(v___x_1141_, v___x_1142_);
lean_dec_ref(v___x_1142_);
v___y_1123_ = v___x_1143_;
goto v___jp_1122_;
}
else
{
lean_object* v___x_1144_; 
lean_dec(v_den_1120_);
v___x_1144_ = l_Int_repr(v_num_1119_);
lean_dec(v_num_1119_);
v___y_1123_ = v___x_1144_;
goto v___jp_1122_;
}
v___jp_1109_:
{
lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; lean_object* v___x_1118_; 
v___x_1113_ = lean_string_append(v___y_1110_, v___y_1112_);
lean_dec_ref(v___y_1112_);
v___x_1114_ = lean_string_append(v___x_1113_, v___y_1111_);
v___x_1115_ = l_Nat_reprFast(v_quarters_1108_);
v___x_1116_ = lean_string_append(v___x_1114_, v___x_1115_);
lean_dec_ref(v___x_1115_);
v___x_1117_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_1118_ = lean_string_append(v___x_1116_, v___x_1117_);
return v___x_1118_;
}
v___jp_1122_:
{
lean_object* v_num_1124_; lean_object* v_den_1125_; lean_object* v___x_1126_; lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; uint8_t v___x_1130_; 
v_num_1124_ = lean_ctor_get(v_cy_1107_, 0);
lean_inc(v_num_1124_);
v_den_1125_ = lean_ctor_get(v_cy_1107_, 1);
lean_inc(v_den_1125_);
lean_dec_ref(v_cy_1107_);
v___x_1126_ = lean_string_append(v___x_1121_, v___y_1123_);
lean_dec_ref(v___y_1123_);
v___x_1127_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_1128_ = lean_string_append(v___x_1126_, v___x_1127_);
v___x_1129_ = lean_unsigned_to_nat(1u);
v___x_1130_ = lean_nat_dec_eq(v_den_1125_, v___x_1129_);
if (v___x_1130_ == 0)
{
lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; 
v___x_1131_ = l_Int_repr(v_num_1124_);
lean_dec(v_num_1124_);
v___x_1132_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__1));
v___x_1133_ = lean_string_append(v___x_1131_, v___x_1132_);
v___x_1134_ = l_Nat_reprFast(v_den_1125_);
v___x_1135_ = lean_string_append(v___x_1133_, v___x_1134_);
lean_dec_ref(v___x_1134_);
v___y_1110_ = v___x_1128_;
v___y_1111_ = v___x_1127_;
v___y_1112_ = v___x_1135_;
goto v___jp_1109_;
}
else
{
lean_object* v___x_1136_; 
lean_dec(v_den_1125_);
v___x_1136_ = l_Int_repr(v_num_1124_);
lean_dec(v_num_1124_);
v___y_1110_ = v___x_1128_;
v___y_1111_ = v___x_1127_;
v___y_1112_ = v___x_1136_;
goto v___jp_1109_;
}
}
}
case 2:
{
lean_object* v_a_1145_; lean_object* v_num_1146_; lean_object* v_den_1147_; lean_object* v___x_1148_; lean_object* v___y_1150_; lean_object* v___x_1154_; uint8_t v___x_1155_; 
v_a_1145_ = lean_ctor_get(v_x_1071_, 0);
lean_inc_ref(v_a_1145_);
lean_dec_ref_known(v_x_1071_, 1);
v_num_1146_ = lean_ctor_get(v_a_1145_, 0);
lean_inc(v_num_1146_);
v_den_1147_ = lean_ctor_get(v_a_1145_, 1);
lean_inc(v_den_1147_);
lean_dec_ref(v_a_1145_);
v___x_1148_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__3));
v___x_1154_ = lean_unsigned_to_nat(1u);
v___x_1155_ = lean_nat_dec_eq(v_den_1147_, v___x_1154_);
if (v___x_1155_ == 0)
{
lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; 
v___x_1156_ = l_Int_repr(v_num_1146_);
lean_dec(v_num_1146_);
v___x_1157_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__1));
v___x_1158_ = lean_string_append(v___x_1156_, v___x_1157_);
v___x_1159_ = l_Nat_reprFast(v_den_1147_);
v___x_1160_ = lean_string_append(v___x_1158_, v___x_1159_);
lean_dec_ref(v___x_1159_);
v___y_1150_ = v___x_1160_;
goto v___jp_1149_;
}
else
{
lean_object* v___x_1161_; 
lean_dec(v_den_1147_);
v___x_1161_ = l_Int_repr(v_num_1146_);
lean_dec(v_num_1146_);
v___y_1150_ = v___x_1161_;
goto v___jp_1149_;
}
v___jp_1149_:
{
lean_object* v___x_1151_; lean_object* v___x_1152_; lean_object* v___x_1153_; 
v___x_1151_ = lean_string_append(v___x_1148_, v___y_1150_);
lean_dec_ref(v___y_1150_);
v___x_1152_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_1153_ = lean_string_append(v___x_1151_, v___x_1152_);
return v___x_1153_;
}
}
default: 
{
lean_object* v_b_1162_; lean_object* v_num_1163_; lean_object* v_den_1164_; lean_object* v___x_1165_; lean_object* v___y_1167_; lean_object* v___x_1171_; uint8_t v___x_1172_; 
v_b_1162_ = lean_ctor_get(v_x_1071_, 0);
lean_inc_ref(v_b_1162_);
lean_dec_ref_known(v_x_1071_, 1);
v_num_1163_ = lean_ctor_get(v_b_1162_, 0);
lean_inc(v_num_1163_);
v_den_1164_ = lean_ctor_get(v_b_1162_, 1);
lean_inc(v_den_1164_);
lean_dec_ref(v_b_1162_);
v___x_1165_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__4));
v___x_1171_ = lean_unsigned_to_nat(1u);
v___x_1172_ = lean_nat_dec_eq(v_den_1164_, v___x_1171_);
if (v___x_1172_ == 0)
{
lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; 
v___x_1173_ = l_Int_repr(v_num_1163_);
lean_dec(v_num_1163_);
v___x_1174_ = ((lean_object*)(lp_choreo_Choreo_tOpL___closed__1));
v___x_1175_ = lean_string_append(v___x_1173_, v___x_1174_);
v___x_1176_ = l_Nat_reprFast(v_den_1164_);
v___x_1177_ = lean_string_append(v___x_1175_, v___x_1176_);
lean_dec_ref(v___x_1176_);
v___y_1167_ = v___x_1177_;
goto v___jp_1166_;
}
else
{
lean_object* v___x_1178_; 
lean_dec(v_den_1164_);
v___x_1178_ = l_Int_repr(v_num_1163_);
lean_dec(v_num_1163_);
v___y_1167_ = v___x_1178_;
goto v___jp_1166_;
}
v___jp_1166_:
{
lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; 
v___x_1168_ = lean_string_append(v___x_1165_, v___y_1167_);
lean_dec_ref(v___y_1167_);
v___x_1169_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_1170_ = lean_string_append(v___x_1168_, v___x_1169_);
return v___x_1170_;
}
}
}
v___jp_1072_:
{
lean_object* v___x_1075_; lean_object* v___x_1076_; lean_object* v___x_1077_; 
v___x_1075_ = lean_string_append(v___y_1073_, v___y_1074_);
lean_dec_ref(v___y_1074_);
v___x_1076_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_1077_ = lean_string_append(v___x_1075_, v___x_1076_);
return v___x_1077_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldl___at___00Choreo_algebraRuns_spec__0(lean_object* v_x_1179_, lean_object* v_x_1180_){
_start:
{
if (lean_obj_tag(v_x_1180_) == 0)
{
return v_x_1179_;
}
else
{
lean_object* v_head_1181_; lean_object* v_tail_1182_; lean_object* v___x_1184_; uint8_t v_isShared_1185_; uint8_t v_isSharedCheck_1215_; 
v_head_1181_ = lean_ctor_get(v_x_1180_, 0);
v_tail_1182_ = lean_ctor_get(v_x_1180_, 1);
v_isSharedCheck_1215_ = !lean_is_exclusive(v_x_1180_);
if (v_isSharedCheck_1215_ == 0)
{
v___x_1184_ = v_x_1180_;
v_isShared_1185_ = v_isSharedCheck_1215_;
goto v_resetjp_1183_;
}
else
{
lean_inc(v_tail_1182_);
lean_inc(v_head_1181_);
lean_dec(v_x_1180_);
v___x_1184_ = lean_box(0);
v_isShared_1185_ = v_isSharedCheck_1215_;
goto v_resetjp_1183_;
}
v_resetjp_1183_:
{
lean_object* v___y_1187_; lean_object* v_algebra_1191_; 
v_algebra_1191_ = lean_ctor_get(v_head_1181_, 10);
if (lean_obj_tag(v_algebra_1191_) == 0)
{
lean_object* v_fst_1192_; lean_object* v_snd_1193_; uint8_t v___x_1194_; 
lean_dec(v_head_1181_);
v_fst_1192_ = lean_ctor_get(v_x_1179_, 0);
lean_inc(v_fst_1192_);
v_snd_1193_ = lean_ctor_get(v_x_1179_, 1);
lean_inc(v_snd_1193_);
lean_dec_ref(v_x_1179_);
v___x_1194_ = l_List_isEmpty___redArg(v_snd_1193_);
if (v___x_1194_ == 0)
{
lean_object* v___x_1195_; lean_object* v___x_1197_; 
v___x_1195_ = lean_box(0);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 1, v___x_1195_);
lean_ctor_set(v___x_1184_, 0, v_snd_1193_);
v___x_1197_ = v___x_1184_;
goto v_reusejp_1196_;
}
else
{
lean_object* v_reuseFailAlloc_1199_; 
v_reuseFailAlloc_1199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1199_, 0, v_snd_1193_);
lean_ctor_set(v_reuseFailAlloc_1199_, 1, v___x_1195_);
v___x_1197_ = v_reuseFailAlloc_1199_;
goto v_reusejp_1196_;
}
v_reusejp_1196_:
{
lean_object* v___x_1198_; 
v___x_1198_ = l_List_appendTR___redArg(v_fst_1192_, v___x_1197_);
v___y_1187_ = v___x_1198_;
goto v___jp_1186_;
}
}
else
{
lean_dec(v_snd_1193_);
lean_del_object(v___x_1184_);
v___y_1187_ = v_fst_1192_;
goto v___jp_1186_;
}
}
else
{
lean_object* v_fst_1200_; lean_object* v_snd_1201_; lean_object* v___x_1203_; uint8_t v_isShared_1204_; uint8_t v_isSharedCheck_1214_; 
v_fst_1200_ = lean_ctor_get(v_x_1179_, 0);
v_snd_1201_ = lean_ctor_get(v_x_1179_, 1);
v_isSharedCheck_1214_ = !lean_is_exclusive(v_x_1179_);
if (v_isSharedCheck_1214_ == 0)
{
v___x_1203_ = v_x_1179_;
v_isShared_1204_ = v_isSharedCheck_1214_;
goto v_resetjp_1202_;
}
else
{
lean_inc(v_snd_1201_);
lean_inc(v_fst_1200_);
lean_dec(v_x_1179_);
v___x_1203_ = lean_box(0);
v_isShared_1204_ = v_isSharedCheck_1214_;
goto v_resetjp_1202_;
}
v_resetjp_1202_:
{
lean_object* v___x_1205_; lean_object* v___x_1207_; 
v___x_1205_ = lean_box(0);
if (v_isShared_1185_ == 0)
{
lean_ctor_set(v___x_1184_, 1, v___x_1205_);
v___x_1207_ = v___x_1184_;
goto v_reusejp_1206_;
}
else
{
lean_object* v_reuseFailAlloc_1213_; 
v_reuseFailAlloc_1213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1213_, 0, v_head_1181_);
lean_ctor_set(v_reuseFailAlloc_1213_, 1, v___x_1205_);
v___x_1207_ = v_reuseFailAlloc_1213_;
goto v_reusejp_1206_;
}
v_reusejp_1206_:
{
lean_object* v___x_1208_; lean_object* v___x_1210_; 
v___x_1208_ = l_List_appendTR___redArg(v_snd_1201_, v___x_1207_);
if (v_isShared_1204_ == 0)
{
lean_ctor_set(v___x_1203_, 1, v___x_1208_);
v___x_1210_ = v___x_1203_;
goto v_reusejp_1209_;
}
else
{
lean_object* v_reuseFailAlloc_1212_; 
v_reuseFailAlloc_1212_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1212_, 0, v_fst_1200_);
lean_ctor_set(v_reuseFailAlloc_1212_, 1, v___x_1208_);
v___x_1210_ = v_reuseFailAlloc_1212_;
goto v_reusejp_1209_;
}
v_reusejp_1209_:
{
v_x_1179_ = v___x_1210_;
v_x_1180_ = v_tail_1182_;
goto _start;
}
}
}
}
v___jp_1186_:
{
lean_object* v___x_1188_; lean_object* v___x_1189_; 
v___x_1188_ = lean_box(0);
v___x_1189_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1189_, 0, v___y_1187_);
lean_ctor_set(v___x_1189_, 1, v___x_1188_);
v_x_1179_ = v___x_1189_;
v_x_1180_ = v_tail_1182_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_algebraRuns(lean_object* v_steps_1218_){
_start:
{
lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v_fst_1222_; lean_object* v_snd_1223_; lean_object* v___x_1225_; uint8_t v_isShared_1226_; uint8_t v_isSharedCheck_1232_; 
v___x_1219_ = lean_box(0);
v___x_1220_ = ((lean_object*)(lp_choreo_Choreo_algebraRuns___closed__0));
v___x_1221_ = lp_choreo_List_foldl___at___00Choreo_algebraRuns_spec__0(v___x_1220_, v_steps_1218_);
v_fst_1222_ = lean_ctor_get(v___x_1221_, 0);
v_snd_1223_ = lean_ctor_get(v___x_1221_, 1);
v_isSharedCheck_1232_ = !lean_is_exclusive(v___x_1221_);
if (v_isSharedCheck_1232_ == 0)
{
v___x_1225_ = v___x_1221_;
v_isShared_1226_ = v_isSharedCheck_1232_;
goto v_resetjp_1224_;
}
else
{
lean_inc(v_snd_1223_);
lean_inc(v_fst_1222_);
lean_dec(v___x_1221_);
v___x_1225_ = lean_box(0);
v_isShared_1226_ = v_isSharedCheck_1232_;
goto v_resetjp_1224_;
}
v_resetjp_1224_:
{
uint8_t v___x_1227_; 
v___x_1227_ = l_List_isEmpty___redArg(v_snd_1223_);
if (v___x_1227_ == 0)
{
lean_object* v___x_1229_; 
if (v_isShared_1226_ == 0)
{
lean_ctor_set_tag(v___x_1225_, 1);
lean_ctor_set(v___x_1225_, 1, v___x_1219_);
lean_ctor_set(v___x_1225_, 0, v_snd_1223_);
v___x_1229_ = v___x_1225_;
goto v_reusejp_1228_;
}
else
{
lean_object* v_reuseFailAlloc_1231_; 
v_reuseFailAlloc_1231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1231_, 0, v_snd_1223_);
lean_ctor_set(v_reuseFailAlloc_1231_, 1, v___x_1219_);
v___x_1229_ = v_reuseFailAlloc_1231_;
goto v_reusejp_1228_;
}
v_reusejp_1228_:
{
lean_object* v___x_1230_; 
v___x_1230_ = l_List_appendTR___redArg(v_fst_1222_, v___x_1229_);
return v___x_1230_;
}
}
else
{
lean_del_object(v___x_1225_);
lean_dec(v_snd_1223_);
return v_fst_1222_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_algebraProofs_spec__0(lean_object* v_a_1233_, lean_object* v_a_1234_){
_start:
{
if (lean_obj_tag(v_a_1233_) == 0)
{
lean_object* v___x_1235_; 
v___x_1235_ = lean_array_to_list(v_a_1234_);
return v___x_1235_;
}
else
{
lean_object* v_head_1236_; lean_object* v_algebra_1237_; 
v_head_1236_ = lean_ctor_get(v_a_1233_, 0);
v_algebra_1237_ = lean_ctor_get(v_head_1236_, 10);
if (lean_obj_tag(v_algebra_1237_) == 0)
{
lean_object* v_tail_1238_; 
v_tail_1238_ = lean_ctor_get(v_a_1233_, 1);
lean_inc(v_tail_1238_);
lean_dec_ref_known(v_a_1233_, 2);
v_a_1233_ = v_tail_1238_;
goto _start;
}
else
{
lean_object* v_tail_1240_; lean_object* v_val_1241_; lean_object* v___x_1242_; 
lean_inc_ref(v_algebra_1237_);
v_tail_1240_ = lean_ctor_get(v_a_1233_, 1);
lean_inc(v_tail_1240_);
lean_dec_ref_known(v_a_1233_, 2);
v_val_1241_ = lean_ctor_get(v_algebra_1237_, 0);
lean_inc(v_val_1241_);
lean_dec_ref_known(v_algebra_1237_, 1);
v___x_1242_ = lean_array_push(v_a_1234_, v_val_1241_);
v_a_1233_ = v_tail_1240_;
v_a_1234_ = v___x_1242_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_algebraProofs_spec__1_spec__1(lean_object* v_a_1244_, lean_object* v_a_1245_){
_start:
{
if (lean_obj_tag(v_a_1244_) == 0)
{
lean_object* v___x_1246_; 
v___x_1246_ = l_List_reverse___redArg(v_a_1245_);
return v___x_1246_;
}
else
{
lean_object* v_head_1247_; lean_object* v_tail_1248_; lean_object* v___x_1250_; uint8_t v_isShared_1251_; uint8_t v_isSharedCheck_1267_; 
v_head_1247_ = lean_ctor_get(v_a_1244_, 0);
v_tail_1248_ = lean_ctor_get(v_a_1244_, 1);
v_isSharedCheck_1267_ = !lean_is_exclusive(v_a_1244_);
if (v_isSharedCheck_1267_ == 0)
{
v___x_1250_ = v_a_1244_;
v_isShared_1251_ = v_isSharedCheck_1267_;
goto v_resetjp_1249_;
}
else
{
lean_inc(v_tail_1248_);
lean_inc(v_head_1247_);
lean_dec(v_a_1244_);
v___x_1250_ = lean_box(0);
v_isShared_1251_ = v_isSharedCheck_1267_;
goto v_resetjp_1249_;
}
v_resetjp_1249_:
{
lean_object* v_x_1252_; lean_object* v_y_1253_; lean_object* v___x_1255_; uint8_t v_isShared_1256_; uint8_t v_isSharedCheck_1266_; 
v_x_1252_ = lean_ctor_get(v_head_1247_, 0);
v_y_1253_ = lean_ctor_get(v_head_1247_, 1);
v_isSharedCheck_1266_ = !lean_is_exclusive(v_head_1247_);
if (v_isSharedCheck_1266_ == 0)
{
v___x_1255_ = v_head_1247_;
v_isShared_1256_ = v_isSharedCheck_1266_;
goto v_resetjp_1254_;
}
else
{
lean_inc(v_y_1253_);
lean_inc(v_x_1252_);
lean_dec(v_head_1247_);
v___x_1255_ = lean_box(0);
v_isShared_1256_ = v_isSharedCheck_1266_;
goto v_resetjp_1254_;
}
v_resetjp_1254_:
{
lean_object* v___x_1257_; lean_object* v___x_1258_; lean_object* v___x_1260_; 
v___x_1257_ = l_Rat_ofInt(v_x_1252_);
v___x_1258_ = l_Rat_ofInt(v_y_1253_);
if (v_isShared_1256_ == 0)
{
lean_ctor_set(v___x_1255_, 1, v___x_1258_);
lean_ctor_set(v___x_1255_, 0, v___x_1257_);
v___x_1260_ = v___x_1255_;
goto v_reusejp_1259_;
}
else
{
lean_object* v_reuseFailAlloc_1265_; 
v_reuseFailAlloc_1265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1265_, 0, v___x_1257_);
lean_ctor_set(v_reuseFailAlloc_1265_, 1, v___x_1258_);
v___x_1260_ = v_reuseFailAlloc_1265_;
goto v_reusejp_1259_;
}
v_reusejp_1259_:
{
lean_object* v___x_1262_; 
if (v_isShared_1251_ == 0)
{
lean_ctor_set(v___x_1250_, 1, v_a_1245_);
lean_ctor_set(v___x_1250_, 0, v___x_1260_);
v___x_1262_ = v___x_1250_;
goto v_reusejp_1261_;
}
else
{
lean_object* v_reuseFailAlloc_1264_; 
v_reuseFailAlloc_1264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1264_, 0, v___x_1260_);
lean_ctor_set(v_reuseFailAlloc_1264_, 1, v_a_1245_);
v___x_1262_ = v_reuseFailAlloc_1264_;
goto v_reusejp_1261_;
}
v_reusejp_1261_:
{
v_a_1244_ = v_tail_1248_;
v_a_1245_ = v___x_1262_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_algebraProofs_spec__1(lean_object* v_a_1268_, lean_object* v_a_1269_){
_start:
{
if (lean_obj_tag(v_a_1268_) == 0)
{
lean_object* v___x_1270_; 
v___x_1270_ = l_List_reverse___redArg(v_a_1269_);
return v___x_1270_;
}
else
{
lean_object* v_head_1271_; lean_object* v_tail_1272_; lean_object* v___x_1274_; uint8_t v_isShared_1275_; uint8_t v_isSharedCheck_1291_; 
v_head_1271_ = lean_ctor_get(v_a_1268_, 0);
v_tail_1272_ = lean_ctor_get(v_a_1268_, 1);
v_isSharedCheck_1291_ = !lean_is_exclusive(v_a_1268_);
if (v_isSharedCheck_1291_ == 0)
{
v___x_1274_ = v_a_1268_;
v_isShared_1275_ = v_isSharedCheck_1291_;
goto v_resetjp_1273_;
}
else
{
lean_inc(v_tail_1272_);
lean_inc(v_head_1271_);
lean_dec(v_a_1268_);
v___x_1274_ = lean_box(0);
v_isShared_1275_ = v_isSharedCheck_1291_;
goto v_resetjp_1273_;
}
v_resetjp_1273_:
{
lean_object* v_x_1276_; lean_object* v_y_1277_; lean_object* v___x_1279_; uint8_t v_isShared_1280_; uint8_t v_isSharedCheck_1290_; 
v_x_1276_ = lean_ctor_get(v_head_1271_, 0);
v_y_1277_ = lean_ctor_get(v_head_1271_, 1);
v_isSharedCheck_1290_ = !lean_is_exclusive(v_head_1271_);
if (v_isSharedCheck_1290_ == 0)
{
v___x_1279_ = v_head_1271_;
v_isShared_1280_ = v_isSharedCheck_1290_;
goto v_resetjp_1278_;
}
else
{
lean_inc(v_y_1277_);
lean_inc(v_x_1276_);
lean_dec(v_head_1271_);
v___x_1279_ = lean_box(0);
v_isShared_1280_ = v_isSharedCheck_1290_;
goto v_resetjp_1278_;
}
v_resetjp_1278_:
{
lean_object* v___x_1281_; lean_object* v___x_1282_; lean_object* v___x_1284_; 
v___x_1281_ = l_Rat_ofInt(v_x_1276_);
v___x_1282_ = l_Rat_ofInt(v_y_1277_);
if (v_isShared_1280_ == 0)
{
lean_ctor_set(v___x_1279_, 1, v___x_1282_);
lean_ctor_set(v___x_1279_, 0, v___x_1281_);
v___x_1284_ = v___x_1279_;
goto v_reusejp_1283_;
}
else
{
lean_object* v_reuseFailAlloc_1289_; 
v_reuseFailAlloc_1289_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1289_, 0, v___x_1281_);
lean_ctor_set(v_reuseFailAlloc_1289_, 1, v___x_1282_);
v___x_1284_ = v_reuseFailAlloc_1289_;
goto v_reusejp_1283_;
}
v_reusejp_1283_:
{
lean_object* v___x_1286_; 
if (v_isShared_1275_ == 0)
{
lean_ctor_set(v___x_1274_, 1, v_a_1269_);
lean_ctor_set(v___x_1274_, 0, v___x_1284_);
v___x_1286_ = v___x_1274_;
goto v_reusejp_1285_;
}
else
{
lean_object* v_reuseFailAlloc_1288_; 
v_reuseFailAlloc_1288_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1288_, 0, v___x_1284_);
lean_ctor_set(v_reuseFailAlloc_1288_, 1, v_a_1269_);
v___x_1286_ = v_reuseFailAlloc_1288_;
goto v_reusejp_1285_;
}
v_reusejp_1285_:
{
lean_object* v___x_1287_; 
v___x_1287_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_algebraProofs_spec__1_spec__1(v_tail_1272_, v___x_1286_);
return v___x_1287_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg(lean_object* v_cfg_1322_, lean_object* v_as_x27_1323_, lean_object* v_b_1324_){
_start:
{
if (lean_obj_tag(v_as_x27_1323_) == 0)
{
lean_dec_ref(v_cfg_1322_);
return v_b_1324_;
}
else
{
lean_object* v_head_1325_; lean_object* v_tail_1326_; lean_object* v_fst_1327_; lean_object* v_snd_1328_; lean_object* v___y_1330_; lean_object* v___y_1331_; lean_object* v___x_1399_; lean_object* v___x_1400_; lean_object* v_before_1402_; 
v_head_1325_ = lean_ctor_get(v_as_x27_1323_, 0);
v_tail_1326_ = lean_ctor_get(v_as_x27_1323_, 1);
v_fst_1327_ = lean_ctor_get(v_head_1325_, 0);
v_snd_1328_ = lean_ctor_get(v_head_1325_, 1);
v___x_1399_ = lean_box(0);
v___x_1400_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__19));
if (lean_obj_tag(v_fst_1327_) == 0)
{
v_before_1402_ = v___x_1399_;
goto v___jp_1401_;
}
else
{
lean_object* v_head_1405_; lean_object* v_before_1406_; 
v_head_1405_ = lean_ctor_get(v_fst_1327_, 0);
v_before_1406_ = lean_ctor_get(v_head_1405_, 8);
lean_inc(v_before_1406_);
v_before_1402_ = v_before_1406_;
goto v___jp_1401_;
}
v___jp_1329_:
{
lean_object* v_n_1332_; lean_object* v_dmin_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; lean_object* v___x_1341_; lean_object* v___x_1342_; lean_object* v___x_1343_; lean_object* v___x_1344_; lean_object* v___x_1345_; lean_object* v___x_1346_; lean_object* v___x_1347_; lean_object* v___x_1348_; lean_object* v___x_1349_; lean_object* v___x_1350_; lean_object* v___x_1351_; lean_object* v___x_1352_; lean_object* v___x_1353_; lean_object* v___x_1354_; lean_object* v___x_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; uint8_t v___x_1358_; 
v_n_1332_ = lean_ctor_get(v_cfg_1322_, 0);
v_dmin_1333_ = lean_ctor_get(v_cfg_1322_, 1);
v___x_1334_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__0));
lean_inc(v_snd_1328_);
v___x_1335_ = l_Nat_reprFast(v_snd_1328_);
v___x_1336_ = lean_string_append(v___x_1334_, v___x_1335_);
v___x_1337_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__1));
lean_inc_ref(v___x_1336_);
v___x_1338_ = lean_string_append(v___x_1336_, v___x_1337_);
v___x_1339_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__2));
lean_inc(v_fst_1327_);
v___x_1340_ = lp_choreo_List_filterMapTR_go___at___00Choreo_algebraProofs_spec__0(v_fst_1327_, v___x_1339_);
v___x_1341_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__3));
lean_inc(v___y_1330_);
v___x_1342_ = lp_choreo_Choreo_listL___redArg(v___x_1341_, v___y_1330_);
v___x_1343_ = lean_string_append(v___x_1338_, v___x_1342_);
lean_dec_ref(v___x_1342_);
v___x_1344_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1345_ = lean_string_append(v___x_1343_, v___x_1344_);
v___x_1346_ = lean_string_append(v_b_1324_, v___x_1345_);
lean_dec_ref(v___x_1345_);
v___x_1347_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__4));
v___x_1348_ = lean_string_append(v___x_1336_, v___x_1347_);
v___x_1349_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__5));
v___x_1350_ = lp_choreo_Choreo_listL___redArg(v___x_1349_, v___x_1340_);
v___x_1351_ = lean_string_append(v___x_1348_, v___x_1350_);
lean_dec_ref(v___x_1350_);
v___x_1352_ = lean_string_append(v___x_1351_, v___x_1344_);
v___x_1353_ = lean_string_append(v___x_1346_, v___x_1352_);
lean_dec_ref(v___x_1352_);
v___x_1354_ = lean_int_mul(v_dmin_1333_, v_dmin_1333_);
lean_inc(v___x_1354_);
v___x_1355_ = l_Rat_ofInt(v___x_1354_);
v___x_1356_ = lean_box(0);
v___x_1357_ = lp_choreo_List_mapTR_loop___at___00Choreo_algebraProofs_spec__1(v___y_1330_, v___x_1356_);
lean_inc(v_n_1332_);
v___x_1358_ = lp_choreo_Choreo_Algebra_checkCollisionFree(v_n_1332_, v___x_1355_, v___x_1357_);
lean_dec(v___x_1357_);
if (v___x_1358_ == 0)
{
lean_dec(v___x_1354_);
lean_dec_ref(v___x_1335_);
lean_dec_ref(v___y_1331_);
v_as_x27_1323_ = v_tail_1326_;
v_b_1324_ = v___x_1353_;
goto _start;
}
else
{
lean_object* v_after_1360_; lean_object* v___x_1361_; lean_object* v___x_1362_; lean_object* v___x_1363_; lean_object* v___x_1364_; lean_object* v___x_1365_; lean_object* v___x_1366_; lean_object* v___x_1367_; lean_object* v___x_1368_; lean_object* v___x_1369_; lean_object* v___x_1370_; lean_object* v___x_1371_; lean_object* v___x_1372_; lean_object* v___x_1373_; lean_object* v___x_1374_; lean_object* v___x_1375_; lean_object* v___x_1376_; lean_object* v___x_1377_; lean_object* v___x_1378_; lean_object* v___x_1379_; lean_object* v___x_1380_; lean_object* v___x_1381_; lean_object* v___x_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; lean_object* v___x_1385_; lean_object* v___x_1386_; lean_object* v___x_1387_; lean_object* v___x_1388_; lean_object* v___x_1389_; lean_object* v___x_1390_; lean_object* v___x_1391_; lean_object* v___x_1392_; lean_object* v___x_1393_; lean_object* v___x_1394_; lean_object* v___x_1395_; lean_object* v___x_1396_; lean_object* v___x_1397_; 
v_after_1360_ = lean_ctor_get(v___y_1331_, 9);
lean_inc(v_after_1360_);
lean_dec_ref(v___y_1331_);
v___x_1361_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__6));
v___x_1362_ = lean_string_append(v___x_1361_, v___x_1335_);
v___x_1363_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__7));
lean_inc_ref(v___x_1362_);
v___x_1364_ = lean_string_append(v___x_1362_, v___x_1363_);
v___x_1365_ = lean_string_append(v___x_1364_, v___x_1335_);
v___x_1366_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__8));
v___x_1367_ = lean_string_append(v___x_1365_, v___x_1366_);
lean_inc(v_n_1332_);
v___x_1368_ = l_Nat_reprFast(v_n_1332_);
v___x_1369_ = lean_string_append(v___x_1367_, v___x_1368_);
lean_dec_ref(v___x_1368_);
v___x_1370_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_1371_ = lean_string_append(v___x_1369_, v___x_1370_);
v___x_1372_ = l_Int_repr(v___x_1354_);
lean_dec(v___x_1354_);
v___x_1373_ = lean_string_append(v___x_1371_, v___x_1372_);
lean_dec_ref(v___x_1372_);
v___x_1374_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__9));
v___x_1375_ = lean_string_append(v___x_1373_, v___x_1374_);
v___x_1376_ = lean_string_append(v___x_1375_, v___x_1335_);
v___x_1377_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__10));
v___x_1378_ = lean_string_append(v___x_1376_, v___x_1377_);
v___x_1379_ = lean_string_append(v___x_1353_, v___x_1378_);
lean_dec_ref(v___x_1378_);
v___x_1380_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__11));
v___x_1381_ = lean_string_append(v___x_1362_, v___x_1380_);
v___x_1382_ = lean_string_append(v___x_1381_, v___x_1335_);
v___x_1383_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__12));
v___x_1384_ = lean_string_append(v___x_1382_, v___x_1383_);
v___x_1385_ = lean_string_append(v___x_1384_, v___x_1335_);
v___x_1386_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__13));
v___x_1387_ = lean_string_append(v___x_1385_, v___x_1386_);
v___x_1388_ = lp_choreo_Choreo_listL___redArg(v___x_1341_, v_after_1360_);
v___x_1389_ = lean_string_append(v___x_1387_, v___x_1388_);
lean_dec_ref(v___x_1388_);
v___x_1390_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__14));
v___x_1391_ = lean_string_append(v___x_1389_, v___x_1390_);
v___x_1392_ = lean_string_append(v___x_1379_, v___x_1391_);
lean_dec_ref(v___x_1391_);
v___x_1393_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__15));
v___x_1394_ = lean_string_append(v___x_1393_, v___x_1335_);
lean_dec_ref(v___x_1335_);
v___x_1395_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16));
v___x_1396_ = lean_string_append(v___x_1394_, v___x_1395_);
v___x_1397_ = lean_string_append(v___x_1392_, v___x_1396_);
lean_dec_ref(v___x_1396_);
v_as_x27_1323_ = v_tail_1326_;
v_b_1324_ = v___x_1397_;
goto _start;
}
}
v___jp_1401_:
{
lean_object* v___x_1403_; 
v___x_1403_ = l_List_getLast_x3f___redArg(v_fst_1327_);
if (lean_obj_tag(v___x_1403_) == 0)
{
v___y_1330_ = v_before_1402_;
v___y_1331_ = v___x_1400_;
goto v___jp_1329_;
}
else
{
lean_object* v_val_1404_; 
v_val_1404_ = lean_ctor_get(v___x_1403_, 0);
lean_inc(v_val_1404_);
lean_dec_ref_known(v___x_1403_, 1);
v___y_1330_ = v_before_1402_;
v___y_1331_ = v_val_1404_;
goto v___jp_1329_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___boxed(lean_object* v_cfg_1407_, lean_object* v_as_x27_1408_, lean_object* v_b_1409_){
_start:
{
lean_object* v_res_1410_; 
v_res_1410_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg(v_cfg_1407_, v_as_x27_1408_, v_b_1409_);
lean_dec(v_as_x27_1408_);
return v_res_1410_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___redArg(lean_object* v_cfg_1411_, lean_object* v_as_1412_, lean_object* v_as_x27_1413_, lean_object* v_b_1414_){
_start:
{
if (lean_obj_tag(v_as_x27_1413_) == 0)
{
lean_dec_ref(v_cfg_1411_);
return v_b_1414_;
}
else
{
lean_object* v_head_1415_; lean_object* v_tail_1416_; lean_object* v_fst_1417_; lean_object* v_snd_1418_; lean_object* v___y_1420_; lean_object* v___y_1421_; lean_object* v___x_1489_; lean_object* v___x_1490_; lean_object* v_before_1492_; 
v_head_1415_ = lean_ctor_get(v_as_x27_1413_, 0);
v_tail_1416_ = lean_ctor_get(v_as_x27_1413_, 1);
v_fst_1417_ = lean_ctor_get(v_head_1415_, 0);
v_snd_1418_ = lean_ctor_get(v_head_1415_, 1);
v___x_1489_ = lean_box(0);
v___x_1490_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__19));
if (lean_obj_tag(v_fst_1417_) == 0)
{
v_before_1492_ = v___x_1489_;
goto v___jp_1491_;
}
else
{
lean_object* v_head_1495_; lean_object* v_before_1496_; 
v_head_1495_ = lean_ctor_get(v_fst_1417_, 0);
v_before_1496_ = lean_ctor_get(v_head_1495_, 8);
lean_inc(v_before_1496_);
v_before_1492_ = v_before_1496_;
goto v___jp_1491_;
}
v___jp_1419_:
{
lean_object* v_n_1422_; lean_object* v_dmin_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; lean_object* v___x_1441_; lean_object* v___x_1442_; lean_object* v___x_1443_; lean_object* v___x_1444_; lean_object* v___x_1445_; lean_object* v___x_1446_; lean_object* v___x_1447_; uint8_t v___x_1448_; 
v_n_1422_ = lean_ctor_get(v_cfg_1411_, 0);
v_dmin_1423_ = lean_ctor_get(v_cfg_1411_, 1);
v___x_1424_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__0));
lean_inc(v_snd_1418_);
v___x_1425_ = l_Nat_reprFast(v_snd_1418_);
v___x_1426_ = lean_string_append(v___x_1424_, v___x_1425_);
v___x_1427_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__1));
lean_inc_ref(v___x_1426_);
v___x_1428_ = lean_string_append(v___x_1426_, v___x_1427_);
v___x_1429_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__2));
lean_inc(v_fst_1417_);
v___x_1430_ = lp_choreo_List_filterMapTR_go___at___00Choreo_algebraProofs_spec__0(v_fst_1417_, v___x_1429_);
v___x_1431_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__3));
lean_inc(v___y_1420_);
v___x_1432_ = lp_choreo_Choreo_listL___redArg(v___x_1431_, v___y_1420_);
v___x_1433_ = lean_string_append(v___x_1428_, v___x_1432_);
lean_dec_ref(v___x_1432_);
v___x_1434_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1435_ = lean_string_append(v___x_1433_, v___x_1434_);
v___x_1436_ = lean_string_append(v_b_1414_, v___x_1435_);
lean_dec_ref(v___x_1435_);
v___x_1437_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__4));
v___x_1438_ = lean_string_append(v___x_1426_, v___x_1437_);
v___x_1439_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__5));
v___x_1440_ = lp_choreo_Choreo_listL___redArg(v___x_1439_, v___x_1430_);
v___x_1441_ = lean_string_append(v___x_1438_, v___x_1440_);
lean_dec_ref(v___x_1440_);
v___x_1442_ = lean_string_append(v___x_1441_, v___x_1434_);
v___x_1443_ = lean_string_append(v___x_1436_, v___x_1442_);
lean_dec_ref(v___x_1442_);
v___x_1444_ = lean_int_mul(v_dmin_1423_, v_dmin_1423_);
lean_inc(v___x_1444_);
v___x_1445_ = l_Rat_ofInt(v___x_1444_);
v___x_1446_ = lean_box(0);
v___x_1447_ = lp_choreo_List_mapTR_loop___at___00Choreo_algebraProofs_spec__1(v___y_1420_, v___x_1446_);
lean_inc(v_n_1422_);
v___x_1448_ = lp_choreo_Choreo_Algebra_checkCollisionFree(v_n_1422_, v___x_1445_, v___x_1447_);
lean_dec(v___x_1447_);
if (v___x_1448_ == 0)
{
lean_object* v___x_1449_; 
lean_dec(v___x_1444_);
lean_dec_ref(v___x_1425_);
lean_dec_ref(v___y_1421_);
v___x_1449_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg(v_cfg_1411_, v_tail_1416_, v___x_1443_);
return v___x_1449_;
}
else
{
lean_object* v_after_1450_; lean_object* v___x_1451_; lean_object* v___x_1452_; lean_object* v___x_1453_; lean_object* v___x_1454_; lean_object* v___x_1455_; lean_object* v___x_1456_; lean_object* v___x_1457_; lean_object* v___x_1458_; lean_object* v___x_1459_; lean_object* v___x_1460_; lean_object* v___x_1461_; lean_object* v___x_1462_; lean_object* v___x_1463_; lean_object* v___x_1464_; lean_object* v___x_1465_; lean_object* v___x_1466_; lean_object* v___x_1467_; lean_object* v___x_1468_; lean_object* v___x_1469_; lean_object* v___x_1470_; lean_object* v___x_1471_; lean_object* v___x_1472_; lean_object* v___x_1473_; lean_object* v___x_1474_; lean_object* v___x_1475_; lean_object* v___x_1476_; lean_object* v___x_1477_; lean_object* v___x_1478_; lean_object* v___x_1479_; lean_object* v___x_1480_; lean_object* v___x_1481_; lean_object* v___x_1482_; lean_object* v___x_1483_; lean_object* v___x_1484_; lean_object* v___x_1485_; lean_object* v___x_1486_; lean_object* v___x_1487_; lean_object* v___x_1488_; 
v_after_1450_ = lean_ctor_get(v___y_1421_, 9);
lean_inc(v_after_1450_);
lean_dec_ref(v___y_1421_);
v___x_1451_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__6));
v___x_1452_ = lean_string_append(v___x_1451_, v___x_1425_);
v___x_1453_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__7));
lean_inc_ref(v___x_1452_);
v___x_1454_ = lean_string_append(v___x_1452_, v___x_1453_);
v___x_1455_ = lean_string_append(v___x_1454_, v___x_1425_);
v___x_1456_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__8));
v___x_1457_ = lean_string_append(v___x_1455_, v___x_1456_);
lean_inc(v_n_1422_);
v___x_1458_ = l_Nat_reprFast(v_n_1422_);
v___x_1459_ = lean_string_append(v___x_1457_, v___x_1458_);
lean_dec_ref(v___x_1458_);
v___x_1460_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_1461_ = lean_string_append(v___x_1459_, v___x_1460_);
v___x_1462_ = l_Int_repr(v___x_1444_);
lean_dec(v___x_1444_);
v___x_1463_ = lean_string_append(v___x_1461_, v___x_1462_);
lean_dec_ref(v___x_1462_);
v___x_1464_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__9));
v___x_1465_ = lean_string_append(v___x_1463_, v___x_1464_);
v___x_1466_ = lean_string_append(v___x_1465_, v___x_1425_);
v___x_1467_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__10));
v___x_1468_ = lean_string_append(v___x_1466_, v___x_1467_);
v___x_1469_ = lean_string_append(v___x_1443_, v___x_1468_);
lean_dec_ref(v___x_1468_);
v___x_1470_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__11));
v___x_1471_ = lean_string_append(v___x_1452_, v___x_1470_);
v___x_1472_ = lean_string_append(v___x_1471_, v___x_1425_);
v___x_1473_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__12));
v___x_1474_ = lean_string_append(v___x_1472_, v___x_1473_);
v___x_1475_ = lean_string_append(v___x_1474_, v___x_1425_);
v___x_1476_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__13));
v___x_1477_ = lean_string_append(v___x_1475_, v___x_1476_);
v___x_1478_ = lp_choreo_Choreo_listL___redArg(v___x_1431_, v_after_1450_);
v___x_1479_ = lean_string_append(v___x_1477_, v___x_1478_);
lean_dec_ref(v___x_1478_);
v___x_1480_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__14));
v___x_1481_ = lean_string_append(v___x_1479_, v___x_1480_);
v___x_1482_ = lean_string_append(v___x_1469_, v___x_1481_);
lean_dec_ref(v___x_1481_);
v___x_1483_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__15));
v___x_1484_ = lean_string_append(v___x_1483_, v___x_1425_);
lean_dec_ref(v___x_1425_);
v___x_1485_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16));
v___x_1486_ = lean_string_append(v___x_1484_, v___x_1485_);
v___x_1487_ = lean_string_append(v___x_1482_, v___x_1486_);
lean_dec_ref(v___x_1486_);
v___x_1488_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg(v_cfg_1411_, v_tail_1416_, v___x_1487_);
return v___x_1488_;
}
}
v___jp_1491_:
{
lean_object* v___x_1493_; 
v___x_1493_ = l_List_getLast_x3f___redArg(v_fst_1417_);
if (lean_obj_tag(v___x_1493_) == 0)
{
v___y_1420_ = v_before_1492_;
v___y_1421_ = v___x_1490_;
goto v___jp_1419_;
}
else
{
lean_object* v_val_1494_; 
v_val_1494_ = lean_ctor_get(v___x_1493_, 0);
lean_inc(v_val_1494_);
lean_dec_ref_known(v___x_1493_, 1);
v___y_1420_ = v_before_1492_;
v___y_1421_ = v_val_1494_;
goto v___jp_1419_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___redArg___boxed(lean_object* v_cfg_1497_, lean_object* v_as_1498_, lean_object* v_as_x27_1499_, lean_object* v_b_1500_){
_start:
{
lean_object* v_res_1501_; 
v_res_1501_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___redArg(v_cfg_1497_, v_as_1498_, v_as_x27_1499_, v_b_1500_);
lean_dec(v_as_x27_1499_);
lean_dec(v_as_1498_);
return v_res_1501_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_algebraProofs(lean_object* v_cfg_1503_, lean_object* v_steps_1504_){
_start:
{
lean_object* v_out_1505_; lean_object* v___x_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; 
v_out_1505_ = ((lean_object*)(lp_choreo_Choreo_algebraProofs___closed__0));
v___x_1506_ = lp_choreo_Choreo_algebraRuns(v_steps_1504_);
v___x_1507_ = lean_unsigned_to_nat(0u);
v___x_1508_ = l_List_zipIdxTR___redArg(v___x_1506_, v___x_1507_);
v___x_1509_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___redArg(v_cfg_1503_, v___x_1508_, v___x_1508_, v_out_1505_);
lean_dec(v___x_1508_);
return v___x_1509_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2(lean_object* v_cfg_1510_, lean_object* v_as_1511_, lean_object* v_as_x27_1512_, lean_object* v_b_1513_, lean_object* v_a_1514_){
_start:
{
lean_object* v___x_1515_; 
v___x_1515_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___redArg(v_cfg_1510_, v_as_1511_, v_as_x27_1512_, v_b_1513_);
return v___x_1515_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2___boxed(lean_object* v_cfg_1516_, lean_object* v_as_1517_, lean_object* v_as_x27_1518_, lean_object* v_b_1519_, lean_object* v_a_1520_){
_start:
{
lean_object* v_res_1521_; 
v_res_1521_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2(v_cfg_1516_, v_as_1517_, v_as_x27_1518_, v_b_1519_, v_a_1520_);
lean_dec(v_as_x27_1518_);
lean_dec(v_as_1517_);
return v_res_1521_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3(lean_object* v_cfg_1522_, lean_object* v_as_1523_, lean_object* v_as_x27_1524_, lean_object* v_b_1525_, lean_object* v_a_1526_){
_start:
{
lean_object* v___x_1527_; 
v___x_1527_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg(v_cfg_1522_, v_as_x27_1524_, v_b_1525_);
return v___x_1527_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___boxed(lean_object* v_cfg_1528_, lean_object* v_as_1529_, lean_object* v_as_x27_1530_, lean_object* v_b_1531_, lean_object* v_a_1532_){
_start:
{
lean_object* v_res_1533_; 
v_res_1533_ = lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3(v_cfg_1528_, v_as_1529_, v_as_x27_1530_, v_b_1531_, v_a_1532_);
lean_dec(v_as_x27_1530_);
lean_dec(v_as_1529_);
return v_res_1533_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programProofs_chain(lean_object* v_a_1539_){
_start:
{
if (lean_obj_tag(v_a_1539_) == 0)
{
lean_object* v___x_1540_; 
v___x_1540_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__0));
return v___x_1540_;
}
else
{
lean_object* v_tail_1541_; 
v_tail_1541_ = lean_ctor_get(v_a_1539_, 1);
if (lean_obj_tag(v_tail_1541_) == 0)
{
lean_object* v_head_1542_; lean_object* v___x_1543_; lean_object* v___x_1544_; lean_object* v___x_1545_; lean_object* v___x_1546_; lean_object* v___x_1547_; 
v_head_1542_ = lean_ctor_get(v_a_1539_, 0);
lean_inc(v_head_1542_);
lean_dec_ref_known(v_a_1539_, 2);
v___x_1543_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__1));
v___x_1544_ = l_Nat_reprFast(v_head_1542_);
v___x_1545_ = lean_string_append(v___x_1543_, v___x_1544_);
lean_dec_ref(v___x_1544_);
v___x_1546_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__2));
v___x_1547_ = lean_string_append(v___x_1545_, v___x_1546_);
return v___x_1547_;
}
else
{
lean_object* v_head_1548_; lean_object* v___x_1549_; lean_object* v___x_1550_; lean_object* v___x_1551_; lean_object* v___x_1552_; lean_object* v___x_1553_; lean_object* v___x_1554_; lean_object* v___x_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; 
lean_inc(v_tail_1541_);
v_head_1548_ = lean_ctor_get(v_a_1539_, 0);
lean_inc(v_head_1548_);
lean_dec_ref_known(v_a_1539_, 2);
v___x_1549_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__3));
v___x_1550_ = l_Nat_reprFast(v_head_1548_);
v___x_1551_ = lean_string_append(v___x_1549_, v___x_1550_);
lean_dec_ref(v___x_1550_);
v___x_1552_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__4));
v___x_1553_ = lean_string_append(v___x_1551_, v___x_1552_);
v___x_1554_ = lp_choreo_Choreo_programProofs_chain(v_tail_1541_);
v___x_1555_ = lean_string_append(v___x_1553_, v___x_1554_);
lean_dec_ref(v___x_1554_);
v___x_1556_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_1557_ = lean_string_append(v___x_1555_, v___x_1556_);
return v___x_1557_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(lean_object* v_cfg_1574_, lean_object* v_as_x27_1575_, lean_object* v_b_1576_){
_start:
{
if (lean_obj_tag(v_as_x27_1575_) == 0)
{
lean_dec_ref(v_cfg_1574_);
return v_b_1576_;
}
else
{
lean_object* v_head_1577_; lean_object* v_snd_1578_; lean_object* v_fst_1579_; lean_object* v_tail_1580_; lean_object* v_snd_1581_; lean_object* v_fst_1582_; lean_object* v___x_1584_; uint8_t v_isShared_1585_; uint8_t v_isSharedCheck_1681_; 
v_head_1577_ = lean_ctor_get(v_as_x27_1575_, 0);
v_snd_1578_ = lean_ctor_get(v_b_1576_, 1);
lean_inc(v_snd_1578_);
v_fst_1579_ = lean_ctor_get(v_head_1577_, 0);
v_tail_1580_ = lean_ctor_get(v_as_x27_1575_, 1);
v_snd_1581_ = lean_ctor_get(v_head_1577_, 1);
v_fst_1582_ = lean_ctor_get(v_b_1576_, 0);
v_isSharedCheck_1681_ = !lean_is_exclusive(v_b_1576_);
if (v_isSharedCheck_1681_ == 0)
{
lean_object* v_unused_1682_; 
v_unused_1682_ = lean_ctor_get(v_b_1576_, 1);
lean_dec(v_unused_1682_);
v___x_1584_ = v_b_1576_;
v_isShared_1585_ = v_isSharedCheck_1681_;
goto v_resetjp_1583_;
}
else
{
lean_inc(v_fst_1582_);
lean_dec(v_b_1576_);
v___x_1584_ = lean_box(0);
v_isShared_1585_ = v_isSharedCheck_1681_;
goto v_resetjp_1583_;
}
v_resetjp_1583_:
{
lean_object* v_fst_1586_; lean_object* v_snd_1587_; lean_object* v___x_1589_; uint8_t v_isShared_1590_; uint8_t v_isSharedCheck_1680_; 
v_fst_1586_ = lean_ctor_get(v_snd_1578_, 0);
v_snd_1587_ = lean_ctor_get(v_snd_1578_, 1);
v_isSharedCheck_1680_ = !lean_is_exclusive(v_snd_1578_);
if (v_isSharedCheck_1680_ == 0)
{
v___x_1589_ = v_snd_1578_;
v_isShared_1590_ = v_isSharedCheck_1680_;
goto v_resetjp_1588_;
}
else
{
lean_inc(v_snd_1587_);
lean_inc(v_fst_1586_);
lean_dec(v_snd_1578_);
v___x_1589_ = lean_box(0);
v_isShared_1590_ = v_isSharedCheck_1680_;
goto v_resetjp_1588_;
}
v_resetjp_1588_:
{
lean_object* v_step_1591_; lean_object* v_after_1592_; lean_object* v_out_1594_; uint8_t v_allOk_1595_; lean_object* v_out_1605_; uint8_t v_allOk_1606_; lean_object* v_requires_1633_; uint8_t v___x_1634_; 
v_step_1591_ = lean_ctor_get(v_fst_1579_, 5);
v_after_1592_ = lean_ctor_get(v_fst_1579_, 9);
v_requires_1633_ = lean_ctor_get(v_step_1591_, 1);
lean_inc(v_requires_1633_);
v___x_1634_ = lp_choreo_Choreo_Pred_holds(v_requires_1633_, v_snd_1587_);
if (v___x_1634_ == 0)
{
lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; lean_object* v___x_1645_; lean_object* v___x_1646_; lean_object* v___x_1647_; lean_object* v___x_1648_; lean_object* v___x_1649_; lean_object* v___x_1650_; lean_object* v___x_1651_; lean_object* v___x_1652_; lean_object* v___x_1653_; lean_object* v___x_1654_; lean_object* v___x_1655_; lean_object* v___x_1656_; lean_object* v___x_1657_; lean_object* v___x_1658_; lean_object* v___x_1659_; lean_object* v___x_1660_; lean_object* v___x_1661_; lean_object* v___x_1662_; lean_object* v___x_1663_; 
lean_dec(v_fst_1586_);
v___x_1635_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5));
lean_inc(v_snd_1581_);
v___x_1636_ = l_Nat_reprFast(v_snd_1581_);
v___x_1637_ = lean_string_append(v___x_1635_, v___x_1636_);
v___x_1638_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6));
v___x_1639_ = lean_string_append(v___x_1637_, v___x_1638_);
v___x_1640_ = lean_string_append(v___x_1639_, v___x_1636_);
v___x_1641_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7));
v___x_1642_ = lean_string_append(v___x_1640_, v___x_1641_);
v___x_1643_ = lean_string_append(v___x_1642_, v___x_1636_);
v___x_1644_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8));
v___x_1645_ = lean_string_append(v___x_1643_, v___x_1644_);
v___x_1646_ = lean_string_append(v_fst_1582_, v___x_1645_);
lean_dec_ref(v___x_1645_);
v___x_1647_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__0));
v___x_1648_ = lean_string_append(v___x_1647_, v___x_1636_);
v___x_1649_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9));
v___x_1650_ = lean_string_append(v___x_1648_, v___x_1649_);
v___x_1651_ = lean_string_append(v___x_1650_, v___x_1636_);
v___x_1652_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10));
v___x_1653_ = lean_string_append(v___x_1651_, v___x_1652_);
v___x_1654_ = lean_string_append(v___x_1653_, v___x_1636_);
v___x_1655_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11));
v___x_1656_ = lean_string_append(v___x_1654_, v___x_1655_);
v___x_1657_ = lean_string_append(v___x_1656_, v___x_1636_);
v___x_1658_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12));
v___x_1659_ = lean_string_append(v___x_1657_, v___x_1658_);
v___x_1660_ = lean_string_append(v___x_1659_, v___x_1636_);
lean_dec_ref(v___x_1636_);
v___x_1661_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16));
v___x_1662_ = lean_string_append(v___x_1660_, v___x_1661_);
v___x_1663_ = lean_string_append(v___x_1646_, v___x_1662_);
lean_dec_ref(v___x_1662_);
v_out_1605_ = v___x_1663_;
v_allOk_1606_ = v___x_1634_;
goto v___jp_1604_;
}
else
{
lean_object* v___x_1664_; lean_object* v___x_1665_; lean_object* v___x_1666_; lean_object* v___x_1667_; lean_object* v___x_1668_; lean_object* v___x_1669_; lean_object* v___x_1670_; lean_object* v___x_1671_; lean_object* v___x_1672_; lean_object* v___x_1673_; lean_object* v___x_1674_; lean_object* v___x_1675_; lean_object* v___x_1676_; lean_object* v___x_1677_; lean_object* v___x_1678_; uint8_t v___x_1679_; 
v___x_1664_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13));
lean_inc(v_snd_1581_);
v___x_1665_ = l_Nat_reprFast(v_snd_1581_);
v___x_1666_ = lean_string_append(v___x_1664_, v___x_1665_);
v___x_1667_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14));
v___x_1668_ = lean_string_append(v___x_1666_, v___x_1667_);
v___x_1669_ = lean_string_append(v___x_1668_, v___x_1665_);
v___x_1670_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7));
v___x_1671_ = lean_string_append(v___x_1669_, v___x_1670_);
v___x_1672_ = lean_string_append(v___x_1671_, v___x_1665_);
v___x_1673_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15));
v___x_1674_ = lean_string_append(v___x_1672_, v___x_1673_);
v___x_1675_ = lean_string_append(v___x_1674_, v___x_1665_);
lean_dec_ref(v___x_1665_);
v___x_1676_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16));
v___x_1677_ = lean_string_append(v___x_1675_, v___x_1676_);
v___x_1678_ = lean_string_append(v_fst_1582_, v___x_1677_);
lean_dec_ref(v___x_1677_);
v___x_1679_ = lean_unbox(v_fst_1586_);
lean_dec(v_fst_1586_);
v_out_1605_ = v___x_1678_;
v_allOk_1606_ = v___x_1679_;
goto v___jp_1604_;
}
v___jp_1593_:
{
lean_object* v___x_1596_; lean_object* v___x_1598_; 
v___x_1596_ = lean_box(v_allOk_1595_);
lean_inc(v_after_1592_);
if (v_isShared_1590_ == 0)
{
lean_ctor_set(v___x_1589_, 1, v_after_1592_);
lean_ctor_set(v___x_1589_, 0, v___x_1596_);
v___x_1598_ = v___x_1589_;
goto v_reusejp_1597_;
}
else
{
lean_object* v_reuseFailAlloc_1603_; 
v_reuseFailAlloc_1603_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1603_, 0, v___x_1596_);
lean_ctor_set(v_reuseFailAlloc_1603_, 1, v_after_1592_);
v___x_1598_ = v_reuseFailAlloc_1603_;
goto v_reusejp_1597_;
}
v_reusejp_1597_:
{
lean_object* v___x_1600_; 
if (v_isShared_1585_ == 0)
{
lean_ctor_set(v___x_1584_, 1, v___x_1598_);
lean_ctor_set(v___x_1584_, 0, v_out_1594_);
v___x_1600_ = v___x_1584_;
goto v_reusejp_1599_;
}
else
{
lean_object* v_reuseFailAlloc_1602_; 
v_reuseFailAlloc_1602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1602_, 0, v_out_1594_);
lean_ctor_set(v_reuseFailAlloc_1602_, 1, v___x_1598_);
v___x_1600_ = v_reuseFailAlloc_1602_;
goto v_reusejp_1599_;
}
v_reusejp_1599_:
{
v_as_x27_1575_ = v_tail_1580_;
v_b_1576_ = v___x_1600_;
goto _start;
}
}
}
v___jp_1604_:
{
uint8_t v___x_1607_; 
lean_inc_ref(v_cfg_1574_);
lean_inc_ref(v_step_1591_);
v___x_1607_ = lp_choreo_Choreo_Step_ok(v_step_1591_, v_cfg_1574_, v_snd_1587_);
lean_dec(v_snd_1587_);
if (v___x_1607_ == 0)
{
v_out_1594_ = v_out_1605_;
v_allOk_1595_ = v___x_1607_;
goto v___jp_1593_;
}
else
{
lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; lean_object* v___x_1615_; lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; lean_object* v___x_1627_; lean_object* v___x_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; lean_object* v___x_1632_; 
v___x_1608_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__0));
lean_inc(v_snd_1581_);
v___x_1609_ = l_Nat_reprFast(v_snd_1581_);
v___x_1610_ = lean_string_append(v___x_1608_, v___x_1609_);
v___x_1611_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1));
v___x_1612_ = lean_string_append(v___x_1610_, v___x_1611_);
v___x_1613_ = ((lean_object*)(lp_choreo_Choreo_fieldBinders___closed__0));
v___x_1614_ = lean_string_append(v___x_1612_, v___x_1613_);
v___x_1615_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__1));
v___x_1616_ = lean_string_append(v___x_1614_, v___x_1615_);
v___x_1617_ = lean_string_append(v___x_1616_, v___x_1609_);
v___x_1618_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__2));
v___x_1619_ = lean_string_append(v___x_1617_, v___x_1618_);
v___x_1620_ = lean_string_append(v___x_1619_, v___x_1609_);
v___x_1621_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__3));
v___x_1622_ = lean_string_append(v___x_1620_, v___x_1621_);
v___x_1623_ = lean_unsigned_to_nat(1u);
v___x_1624_ = lean_nat_add(v_snd_1581_, v___x_1623_);
v___x_1625_ = l_Nat_reprFast(v___x_1624_);
v___x_1626_ = lean_string_append(v___x_1622_, v___x_1625_);
lean_dec_ref(v___x_1625_);
v___x_1627_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__4));
v___x_1628_ = lean_string_append(v___x_1626_, v___x_1627_);
v___x_1629_ = lean_string_append(v___x_1628_, v___x_1609_);
lean_dec_ref(v___x_1609_);
v___x_1630_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00List_forIn_x27_loop___at___00Choreo_algebraProofs_spec__2_spec__3___redArg___closed__16));
v___x_1631_ = lean_string_append(v___x_1629_, v___x_1630_);
v___x_1632_ = lean_string_append(v_out_1605_, v___x_1631_);
lean_dec_ref(v___x_1631_);
v_out_1594_ = v___x_1632_;
v_allOk_1595_ = v_allOk_1606_;
goto v___jp_1593_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___boxed(lean_object* v_cfg_1683_, lean_object* v_as_x27_1684_, lean_object* v_b_1685_){
_start:
{
lean_object* v_res_1686_; 
v_res_1686_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(v_cfg_1683_, v_as_x27_1684_, v_b_1685_);
lean_dec(v_as_x27_1684_);
return v_res_1686_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programProofs(lean_object* v_cfg_1692_, lean_object* v_steps_1693_, lean_object* v_start_1694_){
_start:
{
uint8_t v___x_1695_; 
v___x_1695_ = l_List_isEmpty___redArg(v_steps_1693_);
if (v___x_1695_ == 0)
{
uint8_t v_allOk_1696_; lean_object* v_out_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; lean_object* v___x_1701_; lean_object* v___x_1702_; lean_object* v___x_1703_; lean_object* v_snd_1704_; lean_object* v_fst_1705_; uint8_t v___x_1706_; 
v_allOk_1696_ = 1;
v_out_1697_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__0));
v___x_1698_ = lean_unsigned_to_nat(0u);
lean_inc(v_steps_1693_);
v___x_1699_ = l_List_zipIdxTR___redArg(v_steps_1693_, v___x_1698_);
v___x_1700_ = lean_box(v_allOk_1696_);
v___x_1701_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1701_, 0, v___x_1700_);
lean_ctor_set(v___x_1701_, 1, v_start_1694_);
v___x_1702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1702_, 0, v_out_1697_);
lean_ctor_set(v___x_1702_, 1, v___x_1701_);
v___x_1703_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(v_cfg_1692_, v___x_1699_, v___x_1702_);
lean_dec(v___x_1699_);
v_snd_1704_ = lean_ctor_get(v___x_1703_, 1);
lean_inc(v_snd_1704_);
v_fst_1705_ = lean_ctor_get(v_snd_1704_, 0);
lean_inc(v_fst_1705_);
lean_dec(v_snd_1704_);
v___x_1706_ = lean_unbox(v_fst_1705_);
lean_dec(v_fst_1705_);
if (v___x_1706_ == 0)
{
lean_object* v_fst_1707_; 
lean_dec(v_steps_1693_);
v_fst_1707_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_fst_1707_);
lean_dec_ref(v___x_1703_);
return v_fst_1707_;
}
else
{
lean_object* v_fst_1708_; lean_object* v___x_1709_; lean_object* v___x_1710_; lean_object* v___x_1711_; lean_object* v___x_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; lean_object* v___x_1715_; lean_object* v___x_1716_; lean_object* v___x_1717_; lean_object* v___x_1718_; lean_object* v___x_1719_; lean_object* v___x_1720_; lean_object* v___x_1721_; lean_object* v___x_1722_; 
v_fst_1708_ = lean_ctor_get(v___x_1703_, 0);
lean_inc(v_fst_1708_);
lean_dec_ref(v___x_1703_);
v___x_1709_ = l_List_lengthTR___redArg(v_steps_1693_);
lean_dec(v_steps_1693_);
v___x_1710_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__1));
lean_inc(v___x_1709_);
v___x_1711_ = l_Nat_reprFast(v___x_1709_);
v___x_1712_ = lean_string_append(v___x_1710_, v___x_1711_);
lean_dec_ref(v___x_1711_);
v___x_1713_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__2));
v___x_1714_ = lean_string_append(v___x_1712_, v___x_1713_);
v___x_1715_ = l_List_range(v___x_1709_);
v___x_1716_ = lp_choreo_Choreo_programProofs_chain(v___x_1715_);
v___x_1717_ = lean_string_append(v___x_1714_, v___x_1716_);
lean_dec_ref(v___x_1716_);
v___x_1718_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__3));
v___x_1719_ = lean_string_append(v___x_1717_, v___x_1718_);
v___x_1720_ = lean_string_append(v_fst_1708_, v___x_1719_);
lean_dec_ref(v___x_1719_);
v___x_1721_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__4));
v___x_1722_ = lean_string_append(v___x_1720_, v___x_1721_);
return v___x_1722_;
}
}
else
{
lean_object* v___x_1723_; 
lean_dec(v_start_1694_);
lean_dec(v_steps_1693_);
lean_dec_ref(v_cfg_1692_);
v___x_1723_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
return v___x_1723_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0(lean_object* v_cfg_1724_, lean_object* v_as_1725_, lean_object* v_as_x27_1726_, lean_object* v_b_1727_, lean_object* v_a_1728_){
_start:
{
lean_object* v___x_1729_; 
v___x_1729_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(v_cfg_1724_, v_as_x27_1726_, v_b_1727_);
return v___x_1729_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___boxed(lean_object* v_cfg_1730_, lean_object* v_as_1731_, lean_object* v_as_x27_1732_, lean_object* v_b_1733_, lean_object* v_a_1734_){
_start:
{
lean_object* v_res_1735_; 
v_res_1735_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0(v_cfg_1730_, v_as_1731_, v_as_x27_1732_, v_b_1733_, v_a_1734_);
lean_dec(v_as_x27_1732_);
lean_dec(v_as_1731_);
return v_res_1735_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__0(lean_object* v___y_1736_){
_start:
{
lean_inc_ref(v___y_1736_);
return v___y_1736_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__0___boxed(lean_object* v___y_1737_){
_start:
{
lean_object* v_res_1738_; 
v_res_1738_ = lp_choreo_Choreo_proofSource___lam__0(v___y_1737_);
lean_dec_ref(v___y_1737_);
return v_res_1738_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__1(lean_object* v_a_1739_){
_start:
{
lean_object* v_snd_1740_; lean_object* v_snd_1741_; lean_object* v___x_1742_; 
v_snd_1740_ = lean_ctor_get(v_a_1739_, 1);
lean_inc(v_snd_1740_);
lean_dec_ref(v_a_1739_);
v_snd_1741_ = lean_ctor_get(v_snd_1740_, 1);
lean_inc(v_snd_1741_);
lean_dec(v_snd_1740_);
v___x_1742_ = lp_choreo_Choreo_askL(v_snd_1741_);
return v___x_1742_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(lean_object* v_x_1743_){
_start:
{
if (lean_obj_tag(v_x_1743_) == 0)
{
lean_object* v___x_1744_; 
v___x_1744_ = lean_box(0);
return v___x_1744_;
}
else
{
lean_object* v_head_1745_; lean_object* v_tail_1746_; uint8_t v___x_1747_; 
v_head_1745_ = lean_ctor_get(v_x_1743_, 0);
v_tail_1746_ = lean_ctor_get(v_x_1743_, 1);
v___x_1747_ = lp_choreo_Choreo_Problem_provable(v_head_1745_);
if (v___x_1747_ == 0)
{
v_x_1743_ = v_tail_1746_;
goto _start;
}
else
{
lean_object* v___x_1749_; 
lean_inc(v_head_1745_);
v___x_1749_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1749_, 0, v_head_1745_);
return v___x_1749_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1___boxed(lean_object* v_x_1750_){
_start:
{
lean_object* v_res_1751_; 
v_res_1751_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v_x_1750_);
lean_dec(v_x_1750_);
return v_res_1751_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(lean_object* v_b_1761_, lean_object* v_as_x27_1762_, lean_object* v_b_1763_){
_start:
{
if (lean_obj_tag(v_as_x27_1762_) == 0)
{
lean_dec_ref(v_b_1761_);
return v_b_1763_;
}
else
{
lean_object* v_head_1764_; lean_object* v_fst_1765_; lean_object* v_plan_1766_; lean_object* v_draft_1767_; lean_object* v_tail_1768_; lean_object* v_snd_1769_; lean_object* v_problems_1770_; lean_object* v_bpm_1771_; lean_object* v_n_1772_; lean_object* v_bounds_1773_; lean_object* v_dmin_1774_; lean_object* v___x_1775_; lean_object* v___x_1776_; lean_object* v___x_1777_; lean_object* v___x_1778_; lean_object* v___x_1779_; lean_object* v___x_1780_; lean_object* v___x_1781_; lean_object* v___x_1782_; lean_object* v___x_1783_; lean_object* v___x_1784_; lean_object* v___x_1785_; lean_object* v___x_1786_; lean_object* v___x_1787_; lean_object* v___x_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; 
v_head_1764_ = lean_ctor_get(v_as_x27_1762_, 0);
v_fst_1765_ = lean_ctor_get(v_head_1764_, 0);
v_plan_1766_ = lean_ctor_get(v_b_1761_, 0);
v_draft_1767_ = lean_ctor_get(v_fst_1765_, 2);
v_tail_1768_ = lean_ctor_get(v_as_x27_1762_, 1);
v_snd_1769_ = lean_ctor_get(v_head_1764_, 1);
v_problems_1770_ = lean_ctor_get(v_fst_1765_, 3);
v_bpm_1771_ = lean_ctor_get(v_plan_1766_, 1);
v_n_1772_ = lean_ctor_get(v_plan_1766_, 3);
v_bounds_1773_ = lean_ctor_get(v_draft_1767_, 3);
v_dmin_1774_ = lean_ctor_get(v_draft_1767_, 7);
v___x_1775_ = lean_unsigned_to_nat(0u);
lean_inc_n(v_n_1772_, 2);
v___x_1776_ = lp_choreo_Choreo_Draft_toPhase(v_draft_1767_, v_n_1772_, v___x_1775_);
v___x_1777_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__0));
lean_inc(v_snd_1769_);
v___x_1778_ = l_Nat_reprFast(v_snd_1769_);
v___x_1779_ = lean_string_append(v___x_1777_, v___x_1778_);
v___x_1780_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__1));
lean_inc_ref(v___x_1779_);
v___x_1781_ = lean_string_append(v___x_1779_, v___x_1780_);
lean_inc(v_dmin_1774_);
lean_inc(v_bpm_1771_);
lean_inc_ref(v_bounds_1773_);
v___x_1782_ = lp_choreo_Choreo_probeConfig(v_n_1772_, v_bounds_1773_, v_bpm_1771_, v_dmin_1774_);
v___x_1783_ = lp_choreo_Choreo_configL(v___x_1782_);
v___x_1784_ = lean_string_append(v___x_1781_, v___x_1783_);
lean_dec_ref(v___x_1783_);
v___x_1785_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1786_ = lean_string_append(v___x_1784_, v___x_1785_);
v___x_1787_ = lean_string_append(v_b_1763_, v___x_1786_);
lean_dec_ref(v___x_1786_);
v___x_1788_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__1));
v___x_1789_ = lean_string_append(v___x_1779_, v___x_1788_);
v___x_1790_ = lp_choreo_Choreo_phaseL(v___x_1776_);
v___x_1791_ = lean_string_append(v___x_1789_, v___x_1790_);
lean_dec_ref(v___x_1790_);
v___x_1792_ = lean_string_append(v___x_1791_, v___x_1785_);
v___x_1793_ = lean_string_append(v___x_1787_, v___x_1792_);
lean_dec_ref(v___x_1792_);
v___x_1794_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v_problems_1770_);
if (lean_obj_tag(v___x_1794_) == 0)
{
lean_dec_ref(v___x_1778_);
v_as_x27_1762_ = v_tail_1768_;
v_b_1763_ = v___x_1793_;
goto _start;
}
else
{
lean_object* v_val_1796_; lean_object* v___x_1797_; lean_object* v___x_1798_; lean_object* v___x_1799_; lean_object* v___x_1800_; lean_object* v___x_1801_; 
v_val_1796_ = lean_ctor_get(v___x_1794_, 0);
lean_inc(v_val_1796_);
lean_dec_ref_known(v___x_1794_, 1);
v___x_1797_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__2));
v___x_1798_ = lean_string_append(v___x_1797_, v___x_1778_);
v___x_1799_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__3));
lean_inc_ref(v___x_1798_);
v___x_1800_ = lean_string_append(v___x_1798_, v___x_1799_);
v___x_1801_ = lp_choreo_Choreo_refutationL(v___x_1800_, v___x_1798_, v_val_1796_);
lean_dec_ref(v___x_1798_);
lean_dec_ref(v___x_1800_);
if (lean_obj_tag(v___x_1801_) == 0)
{
lean_dec_ref(v___x_1778_);
v_as_x27_1762_ = v_tail_1768_;
v_b_1763_ = v___x_1793_;
goto _start;
}
else
{
lean_object* v_val_1803_; lean_object* v___x_1804_; lean_object* v___x_1805_; lean_object* v___x_1806_; lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; lean_object* v___x_1810_; lean_object* v___x_1811_; lean_object* v___x_1812_; lean_object* v___x_1813_; lean_object* v___x_1814_; lean_object* v___x_1815_; lean_object* v___x_1816_; lean_object* v___x_1817_; lean_object* v___x_1818_; lean_object* v___x_1819_; lean_object* v___x_1820_; lean_object* v___x_1821_; 
v_val_1803_ = lean_ctor_get(v___x_1801_, 0);
lean_inc(v_val_1803_);
lean_dec_ref_known(v___x_1801_, 1);
v___x_1804_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__4));
v___x_1805_ = lean_string_append(v___x_1804_, v___x_1778_);
v___x_1806_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__5));
v___x_1807_ = lean_string_append(v___x_1805_, v___x_1806_);
v___x_1808_ = lean_string_append(v___x_1807_, v___x_1778_);
v___x_1809_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__6));
v___x_1810_ = lean_string_append(v___x_1808_, v___x_1809_);
v___x_1811_ = lean_string_append(v___x_1810_, v___x_1778_);
v___x_1812_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__7));
v___x_1813_ = lean_string_append(v___x_1811_, v___x_1812_);
v___x_1814_ = lean_string_append(v___x_1813_, v_val_1803_);
lean_dec(v_val_1803_);
v___x_1815_ = lean_string_append(v___x_1814_, v___x_1785_);
v___x_1816_ = lean_string_append(v___x_1793_, v___x_1815_);
lean_dec_ref(v___x_1815_);
v___x_1817_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__8));
v___x_1818_ = lean_string_append(v___x_1817_, v___x_1778_);
lean_dec_ref(v___x_1778_);
v___x_1819_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4));
v___x_1820_ = lean_string_append(v___x_1818_, v___x_1819_);
v___x_1821_ = lean_string_append(v___x_1816_, v___x_1820_);
lean_dec_ref(v___x_1820_);
v_as_x27_1762_ = v_tail_1768_;
v_b_1763_ = v___x_1821_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___boxed(lean_object* v_b_1823_, lean_object* v_as_x27_1824_, lean_object* v_b_1825_){
_start:
{
lean_object* v_res_1826_; 
v_res_1826_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(v_b_1823_, v_as_x27_1824_, v_b_1825_);
lean_dec(v_as_x27_1824_);
return v_res_1826_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3(lean_object* v_a_1828_, lean_object* v_a_1829_){
_start:
{
if (lean_obj_tag(v_a_1828_) == 0)
{
lean_object* v___x_1830_; 
v___x_1830_ = l_List_reverse___redArg(v_a_1829_);
return v___x_1830_;
}
else
{
lean_object* v_head_1831_; lean_object* v_tail_1832_; lean_object* v___x_1834_; uint8_t v_isShared_1835_; uint8_t v_isSharedCheck_1844_; 
v_head_1831_ = lean_ctor_get(v_a_1828_, 0);
v_tail_1832_ = lean_ctor_get(v_a_1828_, 1);
v_isSharedCheck_1844_ = !lean_is_exclusive(v_a_1828_);
if (v_isSharedCheck_1844_ == 0)
{
v___x_1834_ = v_a_1828_;
v_isShared_1835_ = v_isSharedCheck_1844_;
goto v_resetjp_1833_;
}
else
{
lean_inc(v_tail_1832_);
lean_inc(v_head_1831_);
lean_dec(v_a_1828_);
v___x_1834_ = lean_box(0);
v_isShared_1835_ = v_isSharedCheck_1844_;
goto v_resetjp_1833_;
}
v_resetjp_1833_:
{
lean_object* v_snd_1836_; lean_object* v___x_1837_; lean_object* v___x_1838_; lean_object* v___x_1839_; lean_object* v___x_1841_; 
v_snd_1836_ = lean_ctor_get(v_head_1831_, 1);
lean_inc(v_snd_1836_);
lean_dec(v_head_1831_);
v___x_1837_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3___closed__0));
v___x_1838_ = l_Nat_reprFast(v_snd_1836_);
v___x_1839_ = lean_string_append(v___x_1837_, v___x_1838_);
lean_dec_ref(v___x_1838_);
if (v_isShared_1835_ == 0)
{
lean_ctor_set(v___x_1834_, 1, v_a_1829_);
lean_ctor_set(v___x_1834_, 0, v___x_1839_);
v___x_1841_ = v___x_1834_;
goto v_reusejp_1840_;
}
else
{
lean_object* v_reuseFailAlloc_1843_; 
v_reuseFailAlloc_1843_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1843_, 0, v___x_1839_);
lean_ctor_set(v_reuseFailAlloc_1843_, 1, v_a_1829_);
v___x_1841_ = v_reuseFailAlloc_1843_;
goto v_reusejp_1840_;
}
v_reusejp_1840_:
{
v_a_1828_ = v_tail_1832_;
v_a_1829_ = v___x_1841_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0(lean_object* v_snd_1845_, lean_object* v_a_1846_, lean_object* v_a_1847_){
_start:
{
if (lean_obj_tag(v_a_1846_) == 0)
{
lean_object* v___x_1848_; 
v___x_1848_ = l_List_reverse___redArg(v_a_1847_);
return v___x_1848_;
}
else
{
lean_object* v_head_1849_; lean_object* v_tail_1850_; lean_object* v___x_1852_; uint8_t v_isShared_1853_; uint8_t v_isSharedCheck_1860_; 
v_head_1849_ = lean_ctor_get(v_a_1846_, 0);
v_tail_1850_ = lean_ctor_get(v_a_1846_, 1);
v_isSharedCheck_1860_ = !lean_is_exclusive(v_a_1846_);
if (v_isSharedCheck_1860_ == 0)
{
v___x_1852_ = v_a_1846_;
v_isShared_1853_ = v_isSharedCheck_1860_;
goto v_resetjp_1851_;
}
else
{
lean_inc(v_tail_1850_);
lean_inc(v_head_1849_);
lean_dec(v_a_1846_);
v___x_1852_ = lean_box(0);
v_isShared_1853_ = v_isSharedCheck_1860_;
goto v_resetjp_1851_;
}
v_resetjp_1851_:
{
lean_object* v_first_1854_; lean_object* v___x_1855_; lean_object* v___x_1857_; 
v_first_1854_ = lean_ctor_get(v_snd_1845_, 0);
v___x_1855_ = lean_nat_add(v_head_1849_, v_first_1854_);
lean_dec(v_head_1849_);
if (v_isShared_1853_ == 0)
{
lean_ctor_set(v___x_1852_, 1, v_a_1847_);
lean_ctor_set(v___x_1852_, 0, v___x_1855_);
v___x_1857_ = v___x_1852_;
goto v_reusejp_1856_;
}
else
{
lean_object* v_reuseFailAlloc_1859_; 
v_reuseFailAlloc_1859_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1859_, 0, v___x_1855_);
lean_ctor_set(v_reuseFailAlloc_1859_, 1, v_a_1847_);
v___x_1857_ = v_reuseFailAlloc_1859_;
goto v_reusejp_1856_;
}
v_reusejp_1856_:
{
v_a_1846_ = v_tail_1850_;
v_a_1847_ = v___x_1857_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0___boxed(lean_object* v_snd_1861_, lean_object* v_a_1862_, lean_object* v_a_1863_){
_start:
{
lean_object* v_res_1864_; 
v_res_1864_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0(v_snd_1861_, v_a_1862_, v_a_1863_);
lean_dec_ref(v_snd_1861_);
return v_res_1864_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(lean_object* v_r_1873_, lean_object* v_as_x27_1874_, lean_object* v_b_1875_){
_start:
{
if (lean_obj_tag(v_as_x27_1874_) == 0)
{
lean_dec_ref(v_r_1873_);
return v_b_1875_;
}
else
{
lean_object* v_head_1876_; lean_object* v_fst_1877_; lean_object* v_snd_1878_; lean_object* v_tail_1879_; lean_object* v_snd_1880_; lean_object* v_snd_1881_; uint8_t v___x_1882_; 
v_head_1876_ = lean_ctor_get(v_as_x27_1874_, 0);
v_fst_1877_ = lean_ctor_get(v_head_1876_, 0);
v_snd_1878_ = lean_ctor_get(v_fst_1877_, 1);
v_tail_1879_ = lean_ctor_get(v_as_x27_1874_, 1);
v_snd_1880_ = lean_ctor_get(v_head_1876_, 1);
v_snd_1881_ = lean_ctor_get(v_snd_1878_, 1);
lean_inc(v_snd_1881_);
lean_inc_ref(v_r_1873_);
v___x_1882_ = lp_choreo_Choreo_transitionOk(v_r_1873_, v_snd_1881_);
if (v___x_1882_ == 0)
{
v_as_x27_1874_ = v_tail_1879_;
goto _start;
}
else
{
lean_object* v___x_1884_; lean_object* v___x_1885_; lean_object* v___x_1886_; lean_object* v___x_1887_; lean_object* v___x_1888_; lean_object* v___x_1889_; lean_object* v___x_1890_; lean_object* v___x_1891_; lean_object* v___x_1892_; lean_object* v___x_1893_; lean_object* v___x_1894_; lean_object* v___x_1895_; lean_object* v___x_1896_; lean_object* v___x_1897_; lean_object* v___x_1898_; lean_object* v___x_1899_; lean_object* v___x_1900_; lean_object* v___x_1901_; lean_object* v___x_1902_; lean_object* v___x_1903_; lean_object* v___x_1904_; lean_object* v___x_1905_; lean_object* v___x_1906_; lean_object* v___x_1907_; lean_object* v___x_1908_; lean_object* v___x_1909_; lean_object* v___x_1910_; lean_object* v___x_1911_; lean_object* v___x_1912_; lean_object* v___x_1913_; lean_object* v___x_1914_; lean_object* v___x_1915_; lean_object* v___x_1916_; lean_object* v___x_1917_; lean_object* v___x_1918_; lean_object* v___x_1919_; lean_object* v___x_1920_; lean_object* v___x_1921_; 
v___x_1884_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__0));
lean_inc(v_snd_1880_);
v___x_1885_ = l_Nat_reprFast(v_snd_1880_);
v___x_1886_ = lean_string_append(v___x_1884_, v___x_1885_);
v___x_1887_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__1));
v___x_1888_ = lean_string_append(v___x_1886_, v___x_1887_);
lean_inc(v_snd_1881_);
v___x_1889_ = lp_choreo_Choreo_transitionL(v_snd_1881_);
v___x_1890_ = lean_string_append(v___x_1888_, v___x_1889_);
lean_dec_ref(v___x_1889_);
v___x_1891_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1892_ = lean_string_append(v___x_1890_, v___x_1891_);
v___x_1893_ = lean_string_append(v_b_1875_, v___x_1892_);
lean_dec_ref(v___x_1892_);
v___x_1894_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__2));
v___x_1895_ = lean_string_append(v___x_1894_, v___x_1885_);
v___x_1896_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1));
v___x_1897_ = lean_string_append(v___x_1895_, v___x_1896_);
v___x_1898_ = ((lean_object*)(lp_choreo_Choreo_fieldBinders___closed__0));
v___x_1899_ = lean_string_append(v___x_1897_, v___x_1898_);
v___x_1900_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__3));
v___x_1901_ = lean_string_append(v___x_1899_, v___x_1900_);
v___x_1902_ = lean_string_append(v___x_1901_, v___x_1885_);
v___x_1903_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__4));
v___x_1904_ = lean_string_append(v___x_1902_, v___x_1903_);
v___x_1905_ = lean_string_append(v___x_1904_, v___x_1885_);
v___x_1906_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__5));
v___x_1907_ = lean_string_append(v___x_1905_, v___x_1906_);
v___x_1908_ = lp_choreo_Choreo_Transition_count(v_snd_1881_);
v___x_1909_ = l_List_range(v___x_1908_);
v___x_1910_ = lean_box(0);
v___x_1911_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0(v_snd_1881_, v___x_1909_, v___x_1910_);
v___x_1912_ = lp_choreo_Choreo_chainOf(v___x_1911_);
v___x_1913_ = lean_string_append(v___x_1907_, v___x_1912_);
lean_dec_ref(v___x_1912_);
v___x_1914_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__6));
v___x_1915_ = lean_string_append(v___x_1913_, v___x_1914_);
v___x_1916_ = lean_string_append(v___x_1893_, v___x_1915_);
lean_dec_ref(v___x_1915_);
v___x_1917_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__7));
v___x_1918_ = lean_string_append(v___x_1917_, v___x_1885_);
lean_dec_ref(v___x_1885_);
v___x_1919_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4));
v___x_1920_ = lean_string_append(v___x_1918_, v___x_1919_);
v___x_1921_ = lean_string_append(v___x_1916_, v___x_1920_);
lean_dec_ref(v___x_1920_);
v_as_x27_1874_ = v_tail_1879_;
v_b_1875_ = v___x_1921_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___boxed(lean_object* v_r_1923_, lean_object* v_as_x27_1924_, lean_object* v_b_1925_){
_start:
{
lean_object* v_res_1926_; 
v_res_1926_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(v_r_1923_, v_as_x27_1924_, v_b_1925_);
lean_dec(v_as_x27_1924_);
return v_res_1926_;
}
}
static lean_object* _init_lp_choreo_Choreo_proofSource___closed__28(void){
_start:
{
lean_object* v___x_1955_; lean_object* v___x_1956_; 
v___x_1955_ = lean_unsigned_to_nat(0u);
v___x_1956_ = lean_nat_to_int(v___x_1955_);
return v___x_1956_;
}
}
static lean_object* _init_lp_choreo_Choreo_proofSource___closed__29(void){
_start:
{
lean_object* v___x_1957_; lean_object* v___x_1958_; 
v___x_1957_ = lean_unsigned_to_nat(2u);
v___x_1958_ = lean_nat_to_int(v___x_1957_);
return v___x_1958_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource(lean_object* v_b_1963_, lean_object* v_program_1964_, lean_object* v_start_1965_){
_start:
{
lean_object* v_out_1967_; lean_object* v_out_1971_; lean_object* v_routine_1976_; lean_object* v_asks_1977_; lean_object* v_rejected_1978_; lean_object* v_drift_1979_; lean_object* v_cfg_1980_; lean_object* v_phases_1981_; lean_object* v_out_1982_; lean_object* v___x_1983_; lean_object* v___x_1984_; lean_object* v___x_1985_; lean_object* v___f_1986_; lean_object* v___f_1987_; lean_object* v___x_1988_; lean_object* v___x_1989_; lean_object* v___x_1990_; lean_object* v___x_1991_; lean_object* v___x_1992_; lean_object* v___x_1993_; lean_object* v___x_1994_; lean_object* v___x_1995_; lean_object* v___x_1996_; lean_object* v___x_1997_; lean_object* v___x_1998_; lean_object* v___x_1999_; lean_object* v___x_2000_; lean_object* v___x_2001_; lean_object* v___x_2002_; lean_object* v___x_2003_; lean_object* v___x_2004_; lean_object* v___x_2005_; lean_object* v___x_2006_; lean_object* v___x_2007_; lean_object* v___x_2008_; lean_object* v___x_2009_; lean_object* v___x_2010_; lean_object* v___x_2011_; lean_object* v___x_2012_; lean_object* v___x_2013_; lean_object* v___x_2014_; lean_object* v___x_2015_; lean_object* v___x_2016_; lean_object* v___x_2017_; lean_object* v___x_2018_; lean_object* v___x_2019_; lean_object* v___x_2020_; uint8_t v___x_2021_; 
v_routine_1976_ = lean_ctor_get(v_b_1963_, 1);
lean_inc_ref_n(v_routine_1976_, 3);
v_asks_1977_ = lean_ctor_get(v_b_1963_, 3);
lean_inc_n(v_asks_1977_, 2);
v_rejected_1978_ = lean_ctor_get(v_b_1963_, 4);
v_drift_1979_ = lean_ctor_get(v_b_1963_, 12);
lean_inc(v_drift_1979_);
v_cfg_1980_ = lean_ctor_get(v_routine_1976_, 0);
v_phases_1981_ = lean_ctor_get(v_routine_1976_, 1);
v_out_1982_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__3));
v___x_1983_ = lean_unsigned_to_nat(0u);
lean_inc(v_rejected_1978_);
v___x_1984_ = l_List_zipIdxTR___redArg(v_rejected_1978_, v___x_1983_);
lean_inc_ref_n(v_b_1963_, 2);
v___x_1985_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(v_b_1963_, v___x_1984_, v_out_1982_);
lean_dec(v___x_1984_);
v___f_1986_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__4));
v___f_1987_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__5));
v___x_1988_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__6));
lean_inc_ref_n(v_cfg_1980_, 3);
v___x_1989_ = lp_choreo_Choreo_configL(v_cfg_1980_);
v___x_1990_ = lean_string_append(v___x_1988_, v___x_1989_);
lean_dec_ref(v___x_1989_);
v___x_1991_ = ((lean_object*)(lp_choreo_Choreo_programSource___closed__3));
v___x_1992_ = lean_string_append(v___x_1990_, v___x_1991_);
v___x_1993_ = lean_string_append(v___x_1985_, v___x_1992_);
lean_dec_ref(v___x_1992_);
v___x_1994_ = lp_choreo_Choreo_phaseProofs(v_routine_1976_);
v___x_1995_ = lean_string_append(v___x_1993_, v___x_1994_);
lean_dec_ref(v___x_1994_);
lean_inc(v_phases_1981_);
v___x_1996_ = l_List_zipIdxTR___redArg(v_phases_1981_, v___x_1983_);
v___x_1997_ = lean_box(0);
v___x_1998_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3(v___x_1996_, v___x_1997_);
v___x_1999_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__7));
v___x_2000_ = lp_choreo_Choreo_listL___redArg(v___f_1986_, v___x_1998_);
v___x_2001_ = lean_string_append(v___x_1999_, v___x_2000_);
lean_dec_ref(v___x_2000_);
v___x_2002_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__8));
v___x_2003_ = lean_string_append(v___x_2001_, v___x_2002_);
v___x_2004_ = lean_string_append(v___x_1995_, v___x_2003_);
lean_dec_ref(v___x_2003_);
v___x_2005_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__9));
v___x_2006_ = lp_choreo_Choreo_listL___redArg(v___f_1987_, v_asks_1977_);
v___x_2007_ = lean_string_append(v___x_2005_, v___x_2006_);
lean_dec_ref(v___x_2006_);
v___x_2008_ = lean_string_append(v___x_2007_, v___x_1991_);
v___x_2009_ = lean_string_append(v___x_2004_, v___x_2008_);
lean_dec_ref(v___x_2008_);
v___x_2010_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__10));
v___x_2011_ = lean_string_append(v___x_2009_, v___x_2010_);
lean_inc(v_start_1965_);
lean_inc_n(v_program_1964_, 2);
v___x_2012_ = lp_choreo_Choreo_programSource(v_program_1964_, v_start_1965_);
v___x_2013_ = lean_string_append(v___x_2011_, v___x_2012_);
lean_dec_ref(v___x_2012_);
v___x_2014_ = lp_choreo_Choreo_programProofs(v_cfg_1980_, v_program_1964_, v_start_1965_);
v___x_2015_ = lean_string_append(v___x_2013_, v___x_2014_);
lean_dec_ref(v___x_2014_);
v___x_2016_ = lp_choreo_Choreo_algebraProofs(v_cfg_1980_, v_program_1964_);
v___x_2017_ = lean_string_append(v___x_2015_, v___x_2016_);
lean_dec_ref(v___x_2016_);
v___x_2018_ = lp_choreo_Choreo_transitionsOf(v_b_1963_);
v___x_2019_ = l_List_zipIdxTR___redArg(v___x_2018_, v___x_1983_);
v___x_2020_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(v_routine_1976_, v___x_2019_, v___x_2017_);
lean_dec(v___x_2019_);
v___x_2021_ = lp_choreo_Choreo_Built_movementOk(v_b_1963_);
if (v___x_2021_ == 0)
{
lean_object* v___x_2022_; lean_object* v___x_2023_; 
lean_dec(v_drift_1979_);
lean_inc_ref(v_routine_1976_);
v___x_2022_ = lp_choreo_Choreo_phaseProblems(v_routine_1976_);
v___x_2023_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v___x_2022_);
lean_dec(v___x_2022_);
if (lean_obj_tag(v___x_2023_) == 0)
{
lean_object* v___x_2024_; 
v___x_2024_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(v_routine_1976_, v_asks_1977_);
if (lean_obj_tag(v___x_2024_) == 0)
{
lean_object* v___x_2025_; lean_object* v___x_2026_; 
v___x_2025_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__11));
v___x_2026_ = lean_string_append(v___x_2020_, v___x_2025_);
v_out_1967_ = v___x_2026_;
goto v___jp_1966_;
}
else
{
lean_object* v_val_2027_; lean_object* v_snd_2028_; lean_object* v_snd_2029_; lean_object* v_snd_2030_; lean_object* v_snd_2031_; lean_object* v_snd_2032_; lean_object* v_fst_2033_; lean_object* v_fst_2034_; lean_object* v_fst_2035_; lean_object* v_fst_2036_; lean_object* v_fst_2037_; lean_object* v_snd_2038_; lean_object* v___x_2039_; lean_object* v___x_2040_; lean_object* v___x_2041_; lean_object* v___x_2042_; lean_object* v___x_2043_; lean_object* v___x_2044_; lean_object* v___x_2045_; lean_object* v___x_2046_; lean_object* v___x_2047_; lean_object* v___x_2048_; lean_object* v___x_2049_; lean_object* v___x_2050_; lean_object* v___x_2051_; lean_object* v___x_2052_; lean_object* v___x_2053_; lean_object* v___x_2054_; lean_object* v___x_2055_; lean_object* v___x_2056_; lean_object* v___x_2057_; lean_object* v___x_2058_; lean_object* v___x_2059_; lean_object* v___x_2060_; lean_object* v___x_2061_; lean_object* v___x_2062_; lean_object* v___x_2063_; lean_object* v___x_2064_; lean_object* v___x_2065_; lean_object* v___x_2066_; lean_object* v___x_2067_; lean_object* v___x_2068_; lean_object* v___x_2069_; lean_object* v___x_2070_; lean_object* v___x_2071_; 
v_val_2027_ = lean_ctor_get(v___x_2024_, 0);
lean_inc(v_val_2027_);
lean_dec_ref_known(v___x_2024_, 1);
v_snd_2028_ = lean_ctor_get(v_val_2027_, 1);
lean_inc(v_snd_2028_);
lean_dec(v_val_2027_);
v_snd_2029_ = lean_ctor_get(v_snd_2028_, 1);
lean_inc(v_snd_2029_);
v_snd_2030_ = lean_ctor_get(v_snd_2029_, 1);
lean_inc(v_snd_2030_);
v_snd_2031_ = lean_ctor_get(v_snd_2030_, 1);
lean_inc(v_snd_2031_);
v_snd_2032_ = lean_ctor_get(v_snd_2031_, 1);
lean_inc(v_snd_2032_);
v_fst_2033_ = lean_ctor_get(v_snd_2028_, 0);
lean_inc(v_fst_2033_);
lean_dec(v_snd_2028_);
v_fst_2034_ = lean_ctor_get(v_snd_2029_, 0);
lean_inc(v_fst_2034_);
lean_dec(v_snd_2029_);
v_fst_2035_ = lean_ctor_get(v_snd_2030_, 0);
lean_inc(v_fst_2035_);
lean_dec(v_snd_2030_);
v_fst_2036_ = lean_ctor_get(v_snd_2031_, 0);
lean_inc(v_fst_2036_);
lean_dec(v_snd_2031_);
v_fst_2037_ = lean_ctor_get(v_snd_2032_, 0);
lean_inc(v_fst_2037_);
v_snd_2038_ = lean_ctor_get(v_snd_2032_, 1);
lean_inc(v_snd_2038_);
lean_dec(v_snd_2032_);
v___x_2039_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__12));
v___x_2040_ = lean_string_append(v___x_2020_, v___x_2039_);
v___x_2041_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__13));
v___x_2042_ = l_Nat_reprFast(v_fst_2033_);
v___x_2043_ = lean_string_append(v___x_2041_, v___x_2042_);
v___x_2044_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_2045_ = lean_string_append(v___x_2043_, v___x_2044_);
v___x_2046_ = lp_choreo_Choreo_natsL(v_fst_2034_);
v___x_2047_ = lean_string_append(v___x_2045_, v___x_2046_);
lean_dec_ref(v___x_2046_);
v___x_2048_ = lean_string_append(v___x_2047_, v___x_2044_);
v___x_2049_ = lp_choreo_Choreo_intL(v_fst_2035_);
lean_dec(v_fst_2035_);
v___x_2050_ = lean_string_append(v___x_2048_, v___x_2049_);
lean_dec_ref(v___x_2049_);
v___x_2051_ = lean_string_append(v___x_2050_, v___x_2044_);
v___x_2052_ = lp_choreo_Choreo_intL(v_fst_2036_);
lean_dec(v_fst_2036_);
v___x_2053_ = lean_string_append(v___x_2051_, v___x_2052_);
lean_dec_ref(v___x_2052_);
v___x_2054_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__14));
v___x_2055_ = lean_string_append(v___x_2053_, v___x_2054_);
v___x_2056_ = lean_string_append(v___x_2055_, v___x_2042_);
lean_dec_ref(v___x_2042_);
v___x_2057_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__4));
v___x_2058_ = lean_string_append(v___x_2056_, v___x_2057_);
v___x_2059_ = l_Nat_reprFast(v_fst_2037_);
v___x_2060_ = lean_string_append(v___x_2058_, v___x_2059_);
lean_dec_ref(v___x_2059_);
v___x_2061_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__5));
v___x_2062_ = lean_string_append(v___x_2060_, v___x_2061_);
v___x_2063_ = l_Nat_reprFast(v_snd_2038_);
v___x_2064_ = lean_string_append(v___x_2062_, v___x_2063_);
lean_dec_ref(v___x_2063_);
v___x_2065_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__15));
v___x_2066_ = lean_string_append(v___x_2064_, v___x_2065_);
v___x_2067_ = lean_string_append(v___x_2040_, v___x_2066_);
lean_dec_ref(v___x_2066_);
v___x_2068_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__16));
v___x_2069_ = lean_string_append(v___x_2067_, v___x_2068_);
v___x_2070_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__17));
v___x_2071_ = lean_string_append(v___x_2069_, v___x_2070_);
v_out_1967_ = v___x_2071_;
goto v___jp_1966_;
}
}
else
{
lean_object* v_val_2072_; lean_object* v___y_2074_; lean_object* v_phase_2098_; 
lean_dec(v_asks_1977_);
lean_dec_ref(v_routine_1976_);
v_val_2072_ = lean_ctor_get(v___x_2023_, 0);
lean_inc(v_val_2072_);
lean_dec_ref_known(v___x_2023_, 1);
v_phase_2098_ = lean_ctor_get(v_val_2072_, 0);
lean_inc(v_phase_2098_);
v___y_2074_ = v_phase_2098_;
goto v___jp_2073_;
v___jp_2073_:
{
lean_object* v___x_2075_; lean_object* v___x_2076_; lean_object* v___x_2077_; lean_object* v___x_2078_; lean_object* v___x_2079_; 
v___x_2075_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__18));
v___x_2076_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3___closed__0));
v___x_2077_ = l_Nat_reprFast(v___y_2074_);
v___x_2078_ = lean_string_append(v___x_2076_, v___x_2077_);
v___x_2079_ = lp_choreo_Choreo_refutationL(v___x_2075_, v___x_2078_, v_val_2072_);
lean_dec_ref(v___x_2078_);
if (lean_obj_tag(v___x_2079_) == 0)
{
lean_dec_ref(v___x_2077_);
v_out_1967_ = v___x_2020_;
goto v___jp_1966_;
}
else
{
lean_object* v_val_2080_; lean_object* v___x_2081_; lean_object* v___x_2082_; lean_object* v___x_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; 
v_val_2080_ = lean_ctor_get(v___x_2079_, 0);
lean_inc(v_val_2080_);
lean_dec_ref_known(v___x_2079_, 1);
v___x_2081_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__19));
v___x_2082_ = lean_string_append(v___x_2020_, v___x_2081_);
v___x_2083_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__20));
v___x_2084_ = lean_string_append(v___x_2083_, v___x_2077_);
v___x_2085_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__21));
v___x_2086_ = lean_string_append(v___x_2084_, v___x_2085_);
v___x_2087_ = lean_string_append(v___x_2086_, v___x_2077_);
lean_dec_ref(v___x_2077_);
v___x_2088_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__22));
v___x_2089_ = lean_string_append(v___x_2087_, v___x_2088_);
v___x_2090_ = lean_string_append(v___x_2089_, v_val_2080_);
lean_dec(v_val_2080_);
v___x_2091_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__23));
v___x_2092_ = lean_string_append(v___x_2090_, v___x_2091_);
v___x_2093_ = lean_string_append(v___x_2082_, v___x_2092_);
lean_dec_ref(v___x_2092_);
v___x_2094_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__24));
v___x_2095_ = lean_string_append(v___x_2093_, v___x_2094_);
v___x_2096_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__17));
v___x_2097_ = lean_string_append(v___x_2095_, v___x_2096_);
v_out_1967_ = v___x_2097_;
goto v___jp_1966_;
}
}
}
}
else
{
lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; lean_object* v___x_2109_; uint8_t v___x_2110_; 
lean_inc(v_phases_1981_);
lean_inc_ref(v_cfg_1980_);
lean_dec(v_asks_1977_);
lean_dec_ref(v_routine_1976_);
v___x_2099_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__25));
v___x_2100_ = lean_string_append(v___x_2020_, v___x_2099_);
v___x_2101_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__26));
v___x_2102_ = l_List_lengthTR___redArg(v_phases_1981_);
lean_dec(v_phases_1981_);
v___x_2103_ = l_List_range(v___x_2102_);
v___x_2104_ = lp_choreo_Choreo_chainOf(v___x_2103_);
v___x_2105_ = lean_string_append(v___x_2101_, v___x_2104_);
lean_dec_ref(v___x_2104_);
v___x_2106_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__27));
v___x_2107_ = lean_string_append(v___x_2105_, v___x_2106_);
v___x_2108_ = lean_string_append(v___x_2100_, v___x_2107_);
lean_dec_ref(v___x_2107_);
v___x_2109_ = lean_obj_once(&lp_choreo_Choreo_proofSource___closed__28, &lp_choreo_Choreo_proofSource___closed__28_once, _init_lp_choreo_Choreo_proofSource___closed__28);
v___x_2110_ = lean_int_dec_lt(v___x_2109_, v_drift_1979_);
if (v___x_2110_ == 0)
{
lean_dec_ref(v_cfg_1980_);
lean_dec(v_drift_1979_);
v_out_1971_ = v___x_2108_;
goto v___jp_1970_;
}
else
{
lean_object* v_dmin_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; uint8_t v___x_2115_; 
v_dmin_2111_ = lean_ctor_get(v_cfg_1980_, 1);
lean_inc(v_dmin_2111_);
lean_dec_ref(v_cfg_1980_);
v___x_2112_ = lean_obj_once(&lp_choreo_Choreo_proofSource___closed__29, &lp_choreo_Choreo_proofSource___closed__29_once, _init_lp_choreo_Choreo_proofSource___closed__29);
v___x_2113_ = lean_int_mul(v___x_2112_, v_drift_1979_);
v___x_2114_ = lean_int_sub(v_dmin_2111_, v___x_2113_);
lean_dec(v___x_2113_);
lean_dec(v_dmin_2111_);
v___x_2115_ = lean_int_dec_lt(v___x_2109_, v___x_2114_);
if (v___x_2115_ == 0)
{
lean_dec(v___x_2114_);
lean_dec(v_drift_1979_);
v_out_1971_ = v___x_2108_;
goto v___jp_1970_;
}
else
{
lean_object* v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; 
v___x_2116_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__30));
v___x_2117_ = lean_string_append(v___x_2108_, v___x_2116_);
v___x_2118_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__31));
v___x_2119_ = l_Int_repr(v___x_2114_);
lean_dec(v___x_2114_);
v___x_2120_ = lean_string_append(v___x_2118_, v___x_2119_);
lean_dec_ref(v___x_2119_);
v___x_2121_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__32));
v___x_2122_ = lean_string_append(v___x_2120_, v___x_2121_);
v___x_2123_ = l_Int_repr(v_drift_1979_);
lean_dec(v_drift_1979_);
v___x_2124_ = lean_string_append(v___x_2122_, v___x_2123_);
lean_dec_ref(v___x_2123_);
v___x_2125_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__33));
v___x_2126_ = lean_string_append(v___x_2124_, v___x_2125_);
v___x_2127_ = lean_string_append(v___x_2117_, v___x_2126_);
lean_dec_ref(v___x_2126_);
v_out_1971_ = v___x_2127_;
goto v___jp_1970_;
}
}
}
v___jp_1966_:
{
lean_object* v___x_1968_; lean_object* v___x_1969_; 
v___x_1968_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__0));
v___x_1969_ = lean_string_append(v_out_1967_, v___x_1968_);
return v___x_1969_;
}
v___jp_1970_:
{
lean_object* v___x_1972_; lean_object* v___x_1973_; lean_object* v___x_1974_; lean_object* v___x_1975_; 
v___x_1972_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__1));
v___x_1973_ = lean_string_append(v_out_1971_, v___x_1972_);
v___x_1974_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__2));
v___x_1975_ = lean_string_append(v___x_1973_, v___x_1974_);
v_out_1967_ = v___x_1975_;
goto v___jp_1966_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2(lean_object* v_b_2128_, lean_object* v_as_2129_, lean_object* v_as_x27_2130_, lean_object* v_b_2131_, lean_object* v_a_2132_){
_start:
{
lean_object* v___x_2133_; 
v___x_2133_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(v_b_2128_, v_as_x27_2130_, v_b_2131_);
return v___x_2133_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___boxed(lean_object* v_b_2134_, lean_object* v_as_2135_, lean_object* v_as_x27_2136_, lean_object* v_b_2137_, lean_object* v_a_2138_){
_start:
{
lean_object* v_res_2139_; 
v_res_2139_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2(v_b_2134_, v_as_2135_, v_as_x27_2136_, v_b_2137_, v_a_2138_);
lean_dec(v_as_x27_2136_);
lean_dec(v_as_2135_);
return v_res_2139_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4(lean_object* v_r_2140_, lean_object* v_as_2141_, lean_object* v_as_x27_2142_, lean_object* v_b_2143_, lean_object* v_a_2144_){
_start:
{
lean_object* v___x_2145_; 
v___x_2145_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(v_r_2140_, v_as_x27_2142_, v_b_2143_);
return v___x_2145_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___boxed(lean_object* v_r_2146_, lean_object* v_as_2147_, lean_object* v_as_x27_2148_, lean_object* v_b_2149_, lean_object* v_a_2150_){
_start:
{
lean_object* v_res_2151_; 
v_res_2151_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4(v_r_2146_, v_as_2147_, v_as_x27_2148_, v_b_2149_, v_a_2150_);
lean_dec(v_as_x27_2148_);
lean_dec(v_as_2147_);
return v_res_2151_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(lean_object* v_b_2152_, lean_object* v_as_x27_2153_, lean_object* v_b_2154_){
_start:
{
if (lean_obj_tag(v_as_x27_2153_) == 0)
{
lean_dec_ref(v_b_2152_);
return v_b_2154_;
}
else
{
lean_object* v_head_2155_; lean_object* v_plan_2156_; lean_object* v_fst_2157_; lean_object* v_draft_2158_; lean_object* v_tail_2159_; lean_object* v_snd_2160_; lean_object* v_bpm_2161_; lean_object* v_n_2162_; lean_object* v_bounds_2163_; lean_object* v_dmin_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; lean_object* v___x_2168_; lean_object* v___x_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; 
v_head_2155_ = lean_ctor_get(v_as_x27_2153_, 0);
v_plan_2156_ = lean_ctor_get(v_b_2152_, 0);
v_fst_2157_ = lean_ctor_get(v_head_2155_, 0);
v_draft_2158_ = lean_ctor_get(v_fst_2157_, 2);
v_tail_2159_ = lean_ctor_get(v_as_x27_2153_, 1);
v_snd_2160_ = lean_ctor_get(v_head_2155_, 1);
v_bpm_2161_ = lean_ctor_get(v_plan_2156_, 1);
v_n_2162_ = lean_ctor_get(v_plan_2156_, 3);
v_bounds_2163_ = lean_ctor_get(v_draft_2158_, 3);
v_dmin_2164_ = lean_ctor_get(v_draft_2158_, 7);
v___x_2165_ = lean_unsigned_to_nat(0u);
v___x_2166_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__0));
lean_inc(v_snd_2160_);
v___x_2167_ = l_Nat_reprFast(v_snd_2160_);
v___x_2168_ = lean_string_append(v___x_2166_, v___x_2167_);
lean_dec_ref(v___x_2167_);
v___x_2169_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__1));
lean_inc_ref(v___x_2168_);
v___x_2170_ = lean_string_append(v___x_2168_, v___x_2169_);
lean_inc(v_dmin_2164_);
lean_inc(v_bpm_2161_);
lean_inc_ref(v_bounds_2163_);
lean_inc_n(v_n_2162_, 2);
v___x_2171_ = lp_choreo_Choreo_probeConfig(v_n_2162_, v_bounds_2163_, v_bpm_2161_, v_dmin_2164_);
v___x_2172_ = lp_choreo_Choreo_configL(v___x_2171_);
v___x_2173_ = lean_string_append(v___x_2170_, v___x_2172_);
lean_dec_ref(v___x_2172_);
v___x_2174_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_2175_ = lean_string_append(v___x_2173_, v___x_2174_);
v___x_2176_ = lean_string_append(v_b_2154_, v___x_2175_);
lean_dec_ref(v___x_2175_);
v___x_2177_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__1));
v___x_2178_ = lean_string_append(v___x_2168_, v___x_2177_);
v___x_2179_ = lp_choreo_Choreo_Draft_toPhase(v_draft_2158_, v_n_2162_, v___x_2165_);
v___x_2180_ = lp_choreo_Choreo_phaseL(v___x_2179_);
v___x_2181_ = lean_string_append(v___x_2178_, v___x_2180_);
lean_dec_ref(v___x_2180_);
v___x_2182_ = lean_string_append(v___x_2181_, v___x_2174_);
v___x_2183_ = lean_string_append(v___x_2176_, v___x_2182_);
lean_dec_ref(v___x_2182_);
v_as_x27_2153_ = v_tail_2159_;
v_b_2154_ = v___x_2183_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg___boxed(lean_object* v_b_2185_, lean_object* v_as_x27_2186_, lean_object* v_b_2187_){
_start:
{
lean_object* v_res_2188_; 
v_res_2188_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(v_b_2185_, v_as_x27_2186_, v_b_2187_);
lean_dec(v_as_x27_2186_);
return v_res_2188_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(lean_object* v_r_2189_, lean_object* v_as_x27_2190_, lean_object* v_b_2191_){
_start:
{
if (lean_obj_tag(v_as_x27_2190_) == 0)
{
lean_dec_ref(v_r_2189_);
return v_b_2191_;
}
else
{
lean_object* v_head_2192_; lean_object* v_tail_2193_; lean_object* v_fst_2194_; lean_object* v_snd_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; 
v_head_2192_ = lean_ctor_get(v_as_x27_2190_, 0);
v_tail_2193_ = lean_ctor_get(v_as_x27_2190_, 1);
v_fst_2194_ = lean_ctor_get(v_head_2192_, 0);
v_snd_2195_ = lean_ctor_get(v_head_2192_, 1);
lean_inc(v_snd_2195_);
lean_inc(v_fst_2194_);
lean_inc_ref(v_r_2189_);
v___x_2196_ = lp_choreo_Choreo_phaseDef(v_r_2189_, v_fst_2194_, v_snd_2195_);
v___x_2197_ = lean_string_append(v_b_2191_, v___x_2196_);
lean_dec_ref(v___x_2196_);
v_as_x27_2190_ = v_tail_2193_;
v_b_2191_ = v___x_2197_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg___boxed(lean_object* v_r_2199_, lean_object* v_as_x27_2200_, lean_object* v_b_2201_){
_start:
{
lean_object* v_res_2202_; 
v_res_2202_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(v_r_2199_, v_as_x27_2200_, v_b_2201_);
lean_dec(v_as_x27_2200_);
return v_res_2202_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_demoData(lean_object* v_b_2205_){
_start:
{
lean_object* v_routine_2206_; lean_object* v_asks_2207_; lean_object* v_rejected_2208_; lean_object* v_cfg_2209_; lean_object* v_phases_2210_; lean_object* v_out_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___f_2215_; lean_object* v___f_2216_; lean_object* v___x_2217_; lean_object* v___x_2218_; lean_object* v___x_2219_; lean_object* v___x_2220_; lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2225_; lean_object* v___x_2226_; lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; lean_object* v___x_2235_; lean_object* v___x_2236_; lean_object* v___x_2237_; lean_object* v___x_2238_; 
v_routine_2206_ = lean_ctor_get(v_b_2205_, 1);
lean_inc_ref(v_routine_2206_);
v_asks_2207_ = lean_ctor_get(v_b_2205_, 3);
lean_inc(v_asks_2207_);
v_rejected_2208_ = lean_ctor_get(v_b_2205_, 4);
v_cfg_2209_ = lean_ctor_get(v_routine_2206_, 0);
v_phases_2210_ = lean_ctor_get(v_routine_2206_, 1);
v_out_2211_ = ((lean_object*)(lp_choreo_Choreo_demoData___closed__0));
v___x_2212_ = lean_unsigned_to_nat(0u);
lean_inc(v_rejected_2208_);
v___x_2213_ = l_List_zipIdxTR___redArg(v_rejected_2208_, v___x_2212_);
v___x_2214_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(v_b_2205_, v___x_2213_, v_out_2211_);
lean_dec(v___x_2213_);
v___f_2215_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__5));
v___f_2216_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__4));
v___x_2217_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__6));
lean_inc_ref(v_cfg_2209_);
v___x_2218_ = lp_choreo_Choreo_configL(v_cfg_2209_);
v___x_2219_ = lean_string_append(v___x_2217_, v___x_2218_);
lean_dec_ref(v___x_2218_);
v___x_2220_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_2221_ = lean_string_append(v___x_2219_, v___x_2220_);
v___x_2222_ = lean_string_append(v___x_2214_, v___x_2221_);
lean_dec_ref(v___x_2221_);
lean_inc(v_phases_2210_);
v___x_2223_ = l_List_zipIdxTR___redArg(v_phases_2210_, v___x_2212_);
v___x_2224_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(v_routine_2206_, v___x_2223_, v___x_2222_);
v___x_2225_ = lean_box(0);
v___x_2226_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3(v___x_2223_, v___x_2225_);
v___x_2227_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__7));
v___x_2228_ = lp_choreo_Choreo_listL___redArg(v___f_2216_, v___x_2226_);
v___x_2229_ = lean_string_append(v___x_2227_, v___x_2228_);
lean_dec_ref(v___x_2228_);
v___x_2230_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__8));
v___x_2231_ = lean_string_append(v___x_2229_, v___x_2230_);
v___x_2232_ = lean_string_append(v___x_2224_, v___x_2231_);
lean_dec_ref(v___x_2231_);
v___x_2233_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__9));
v___x_2234_ = lp_choreo_Choreo_listL___redArg(v___f_2215_, v_asks_2207_);
v___x_2235_ = lean_string_append(v___x_2233_, v___x_2234_);
lean_dec_ref(v___x_2234_);
v___x_2236_ = ((lean_object*)(lp_choreo_Choreo_demoData___closed__1));
v___x_2237_ = lean_string_append(v___x_2235_, v___x_2236_);
v___x_2238_ = lean_string_append(v___x_2232_, v___x_2237_);
lean_dec_ref(v___x_2237_);
return v___x_2238_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0(lean_object* v_b_2239_, lean_object* v_as_2240_, lean_object* v_as_x27_2241_, lean_object* v_b_2242_, lean_object* v_a_2243_){
_start:
{
lean_object* v___x_2244_; 
v___x_2244_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(v_b_2239_, v_as_x27_2241_, v_b_2242_);
return v___x_2244_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___boxed(lean_object* v_b_2245_, lean_object* v_as_2246_, lean_object* v_as_x27_2247_, lean_object* v_b_2248_, lean_object* v_a_2249_){
_start:
{
lean_object* v_res_2250_; 
v_res_2250_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0(v_b_2245_, v_as_2246_, v_as_x27_2247_, v_b_2248_, v_a_2249_);
lean_dec(v_as_x27_2247_);
lean_dec(v_as_2246_);
return v_res_2250_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1(lean_object* v_r_2251_, lean_object* v_as_2252_, lean_object* v_as_x27_2253_, lean_object* v_b_2254_, lean_object* v_a_2255_){
_start:
{
lean_object* v___x_2256_; 
v___x_2256_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(v_r_2251_, v_as_x27_2253_, v_b_2254_);
return v___x_2256_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___boxed(lean_object* v_r_2257_, lean_object* v_as_2258_, lean_object* v_as_x27_2259_, lean_object* v_b_2260_, lean_object* v_a_2261_){
_start:
{
lean_object* v_res_2262_; 
v_res_2262_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1(v_r_2257_, v_as_2258_, v_as_x27_2259_, v_b_2260_, v_a_2261_);
lean_dec(v_as_x27_2259_);
lean_dec(v_as_2258_);
return v_res_2262_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1(lean_object* v_as_2263_, size_t v_i_2264_, size_t v_stop_2265_, lean_object* v_b_2266_){
_start:
{
uint8_t v___x_2267_; 
v___x_2267_ = lean_usize_dec_eq(v_i_2264_, v_stop_2265_);
if (v___x_2267_ == 0)
{
size_t v___x_2268_; size_t v___x_2269_; lean_object* v___x_2270_; lean_object* v_snd_2271_; lean_object* v___x_2272_; lean_object* v___x_2273_; lean_object* v___x_2274_; lean_object* v___x_2275_; lean_object* v___x_2276_; lean_object* v___x_2277_; lean_object* v___x_2278_; lean_object* v___x_2279_; 
v___x_2268_ = ((size_t)1ULL);
v___x_2269_ = lean_usize_sub(v_i_2264_, v___x_2268_);
v___x_2270_ = lean_array_uget_borrowed(v_as_2263_, v___x_2269_);
v_snd_2271_ = lean_ctor_get(v___x_2270_, 1);
v___x_2272_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__0));
lean_inc(v_snd_2271_);
v___x_2273_ = l_Nat_reprFast(v_snd_2271_);
v___x_2274_ = lean_string_append(v___x_2272_, v___x_2273_);
lean_dec_ref(v___x_2273_);
v___x_2275_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1));
v___x_2276_ = lean_string_append(v___x_2274_, v___x_2275_);
v___x_2277_ = lean_string_append(v___x_2276_, v_b_2266_);
lean_dec_ref(v_b_2266_);
v___x_2278_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_2279_ = lean_string_append(v___x_2277_, v___x_2278_);
v_i_2264_ = v___x_2269_;
v_b_2266_ = v___x_2279_;
goto _start;
}
else
{
return v_b_2266_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1___boxed(lean_object* v_as_2281_, lean_object* v_i_2282_, lean_object* v_stop_2283_, lean_object* v_b_2284_){
_start:
{
size_t v_i_boxed_2285_; size_t v_stop_boxed_2286_; lean_object* v_res_2287_; 
v_i_boxed_2285_ = lean_unbox_usize(v_i_2282_);
lean_dec(v_i_2282_);
v_stop_boxed_2286_ = lean_unbox_usize(v_stop_2283_);
lean_dec(v_stop_2283_);
v_res_2287_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1(v_as_2281_, v_i_boxed_2285_, v_stop_boxed_2286_, v_b_2284_);
lean_dec_ref(v_as_2281_);
return v_res_2287_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldrTR___at___00Choreo_demoProofs_spec__1(lean_object* v_init_2288_, lean_object* v_l_2289_){
_start:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; uint8_t v___x_2293_; 
v___x_2290_ = lean_array_mk(v_l_2289_);
v___x_2291_ = lean_array_get_size(v___x_2290_);
v___x_2292_ = lean_unsigned_to_nat(0u);
v___x_2293_ = lean_nat_dec_lt(v___x_2292_, v___x_2291_);
if (v___x_2293_ == 0)
{
lean_dec_ref(v___x_2290_);
return v_init_2288_;
}
else
{
size_t v___x_2294_; size_t v___x_2295_; lean_object* v___x_2296_; 
v___x_2294_ = lean_usize_of_nat(v___x_2291_);
v___x_2295_ = ((size_t)0ULL);
v___x_2296_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1(v___x_2290_, v___x_2294_, v___x_2295_, v_init_2288_);
lean_dec_ref(v___x_2290_);
return v___x_2296_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(lean_object* v_r_2297_, lean_object* v_as_x27_2298_, lean_object* v_b_2299_){
_start:
{
if (lean_obj_tag(v_as_x27_2298_) == 0)
{
lean_dec_ref(v_r_2297_);
return v_b_2299_;
}
else
{
lean_object* v_head_2300_; lean_object* v_tail_2301_; lean_object* v_fst_2302_; lean_object* v_snd_2303_; lean_object* v___x_2304_; lean_object* v___x_2305_; lean_object* v___x_2306_; lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2311_; lean_object* v___x_2312_; lean_object* v___x_2313_; lean_object* v___x_2314_; lean_object* v___x_2315_; lean_object* v___x_2316_; 
v_head_2300_ = lean_ctor_get(v_as_x27_2298_, 0);
v_tail_2301_ = lean_ctor_get(v_as_x27_2298_, 1);
v_fst_2302_ = lean_ctor_get(v_head_2300_, 0);
v_snd_2303_ = lean_ctor_get(v_head_2300_, 1);
v___x_2304_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__0));
lean_inc_n(v_snd_2303_, 2);
v___x_2305_ = l_Nat_reprFast(v_snd_2303_);
v___x_2306_ = lean_string_append(v___x_2304_, v___x_2305_);
v___x_2307_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__1));
v___x_2308_ = lean_string_append(v___x_2306_, v___x_2307_);
v___x_2309_ = lean_string_append(v___x_2308_, v___x_2305_);
lean_dec_ref(v___x_2305_);
v___x_2310_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__2));
v___x_2311_ = lean_string_append(v___x_2309_, v___x_2310_);
lean_inc(v_fst_2302_);
lean_inc_ref(v_r_2297_);
v___x_2312_ = lp_choreo_Choreo_phaseProofTerm(v_r_2297_, v_fst_2302_, v_snd_2303_);
v___x_2313_ = lean_string_append(v___x_2311_, v___x_2312_);
lean_dec_ref(v___x_2312_);
v___x_2314_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_2315_ = lean_string_append(v___x_2313_, v___x_2314_);
v___x_2316_ = lean_string_append(v_b_2299_, v___x_2315_);
lean_dec_ref(v___x_2315_);
v_as_x27_2298_ = v_tail_2301_;
v_b_2299_ = v___x_2316_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg___boxed(lean_object* v_r_2318_, lean_object* v_as_x27_2319_, lean_object* v_b_2320_){
_start:
{
lean_object* v_res_2321_; 
v_res_2321_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(v_r_2318_, v_as_x27_2319_, v_b_2320_);
lean_dec(v_as_x27_2319_);
return v_res_2321_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_demoProofs(lean_object* v_b_2330_){
_start:
{
lean_object* v_routine_2331_; lean_object* v_rejected_2332_; lean_object* v_phases_2333_; lean_object* v_out_2334_; lean_object* v___x_2335_; lean_object* v___x_2336_; lean_object* v___x_2337_; lean_object* v___x_2338_; lean_object* v___x_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; lean_object* v___x_2342_; lean_object* v___x_2343_; lean_object* v___x_2344_; lean_object* v___x_2345_; lean_object* v___x_2346_; lean_object* v___x_2347_; lean_object* v___x_2348_; lean_object* v___x_2349_; 
v_routine_2331_ = lean_ctor_get(v_b_2330_, 1);
lean_inc_ref(v_routine_2331_);
v_rejected_2332_ = lean_ctor_get(v_b_2330_, 4);
lean_inc(v_rejected_2332_);
lean_dec_ref(v_b_2330_);
v_phases_2333_ = lean_ctor_get(v_routine_2331_, 1);
v_out_2334_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__0));
v___x_2335_ = lean_unsigned_to_nat(0u);
lean_inc(v_phases_2333_);
v___x_2336_ = l_List_zipIdxTR___redArg(v_phases_2333_, v___x_2335_);
v___x_2337_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(v_routine_2331_, v___x_2336_, v_out_2334_);
v___x_2338_ = ((lean_object*)(lp_choreo_Choreo_chainOf___closed__0));
v___x_2339_ = lp_choreo_List_foldrTR___at___00Choreo_demoProofs_spec__1(v___x_2338_, v___x_2336_);
v___x_2340_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__1));
v___x_2341_ = lean_string_append(v___x_2337_, v___x_2340_);
v___x_2342_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__2));
v___x_2343_ = lean_string_append(v___x_2341_, v___x_2342_);
v___x_2344_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__3));
v___x_2345_ = lean_string_append(v___x_2344_, v___x_2339_);
lean_dec_ref(v___x_2339_);
v___x_2346_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__4));
v___x_2347_ = lean_string_append(v___x_2345_, v___x_2346_);
v___x_2348_ = lean_string_append(v___x_2343_, v___x_2347_);
lean_dec_ref(v___x_2347_);
v___x_2349_ = l_List_head_x3f___redArg(v_rejected_2332_);
lean_dec(v_rejected_2332_);
if (lean_obj_tag(v___x_2349_) == 0)
{
return v___x_2348_;
}
else
{
lean_object* v_val_2350_; lean_object* v_problems_2351_; lean_object* v___x_2352_; 
v_val_2350_ = lean_ctor_get(v___x_2349_, 0);
lean_inc(v_val_2350_);
lean_dec_ref_known(v___x_2349_, 1);
v_problems_2351_ = lean_ctor_get(v_val_2350_, 3);
lean_inc(v_problems_2351_);
lean_dec(v_val_2350_);
v___x_2352_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v_problems_2351_);
lean_dec(v_problems_2351_);
if (lean_obj_tag(v___x_2352_) == 0)
{
return v___x_2348_;
}
else
{
lean_object* v_val_2353_; lean_object* v___x_2354_; lean_object* v___x_2355_; lean_object* v___x_2356_; 
v_val_2353_ = lean_ctor_get(v___x_2352_, 0);
lean_inc(v_val_2353_);
lean_dec_ref_known(v___x_2352_, 1);
v___x_2354_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__5));
v___x_2355_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__6));
v___x_2356_ = lp_choreo_Choreo_refutationL(v___x_2354_, v___x_2355_, v_val_2353_);
if (lean_obj_tag(v___x_2356_) == 0)
{
return v___x_2348_;
}
else
{
lean_object* v_val_2357_; lean_object* v___x_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; lean_object* v___x_2361_; lean_object* v___x_2362_; 
v_val_2357_ = lean_ctor_get(v___x_2356_, 0);
lean_inc(v_val_2357_);
lean_dec_ref_known(v___x_2356_, 1);
v___x_2358_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__7));
v___x_2359_ = lean_string_append(v___x_2358_, v_val_2357_);
lean_dec(v_val_2357_);
v___x_2360_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_2361_ = lean_string_append(v___x_2359_, v___x_2360_);
v___x_2362_ = lean_string_append(v___x_2348_, v___x_2361_);
lean_dec_ref(v___x_2361_);
return v___x_2362_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0(lean_object* v_r_2363_, lean_object* v_as_2364_, lean_object* v_as_x27_2365_, lean_object* v_b_2366_, lean_object* v_a_2367_){
_start:
{
lean_object* v___x_2368_; 
v___x_2368_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(v_r_2363_, v_as_x27_2365_, v_b_2366_);
return v___x_2368_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___boxed(lean_object* v_r_2369_, lean_object* v_as_2370_, lean_object* v_as_x27_2371_, lean_object* v_b_2372_, lean_object* v_a_2373_){
_start:
{
lean_object* v_res_2374_; 
v_res_2374_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0(v_r_2369_, v_as_2370_, v_as_x27_2371_, v_b_2372_, v_a_2373_);
lean_dec(v_as_x27_2371_);
lean_dec(v_as_2370_);
return v_res_2374_;
}
}
LEAN_EXPORT double lp_choreo_Choreo_ratFloat(lean_object* v_t_2375_){
_start:
{
lean_object* v_num_2376_; lean_object* v_den_2377_; double v___x_2378_; double v___x_2379_; double v___x_2380_; 
v_num_2376_ = lean_ctor_get(v_t_2375_, 0);
lean_inc(v_num_2376_);
v_den_2377_ = lean_ctor_get(v_t_2375_, 1);
lean_inc(v_den_2377_);
lean_dec_ref(v_t_2375_);
v___x_2378_ = l_Float_ofInt(v_num_2376_);
lean_dec(v_num_2376_);
v___x_2379_ = lean_float_of_nat(v_den_2377_);
v___x_2380_ = lean_float_div(v___x_2378_, v___x_2379_);
return v___x_2380_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ratFloat___boxed(lean_object* v_t_2381_){
_start:
{
double v_res_2382_; lean_object* v_r_2383_; 
v_res_2382_ = lp_choreo_Choreo_ratFloat(v_t_2381_);
v_r_2383_ = lean_box_float(v_res_2382_);
return v_r_2383_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jInt(lean_object* v_i_2384_){
_start:
{
lean_object* v___x_2385_; lean_object* v___x_2386_; 
v___x_2385_ = l_Lean_JsonNumber_fromInt(v_i_2384_);
v___x_2386_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2386_, 0, v___x_2385_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jFloat(double v_f_2387_){
_start:
{
lean_object* v___x_2388_; 
v___x_2388_ = l_Lean_Float_toJson(v_f_2387_);
return v___x_2388_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jFloat___boxed(lean_object* v_f_2389_){
_start:
{
double v_f_boxed_2390_; lean_object* v_res_2391_; 
v_f_boxed_2390_ = lean_unbox_float(v_f_2389_);
lean_dec_ref(v_f_2389_);
v_res_2391_ = lp_choreo_Choreo_jFloat(v_f_boxed_2390_);
return v_res_2391_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_jPoly_spec__0(lean_object* v_a_2392_, lean_object* v_a_2393_){
_start:
{
if (lean_obj_tag(v_a_2392_) == 0)
{
lean_object* v___x_2394_; 
v___x_2394_ = l_List_reverse___redArg(v_a_2393_);
return v___x_2394_;
}
else
{
lean_object* v_head_2395_; lean_object* v_tail_2396_; lean_object* v___x_2398_; uint8_t v_isShared_2399_; uint8_t v_isSharedCheck_2405_; 
v_head_2395_ = lean_ctor_get(v_a_2392_, 0);
v_tail_2396_ = lean_ctor_get(v_a_2392_, 1);
v_isSharedCheck_2405_ = !lean_is_exclusive(v_a_2392_);
if (v_isSharedCheck_2405_ == 0)
{
v___x_2398_ = v_a_2392_;
v_isShared_2399_ = v_isSharedCheck_2405_;
goto v_resetjp_2397_;
}
else
{
lean_inc(v_tail_2396_);
lean_inc(v_head_2395_);
lean_dec(v_a_2392_);
v___x_2398_ = lean_box(0);
v_isShared_2399_ = v_isSharedCheck_2405_;
goto v_resetjp_2397_;
}
v_resetjp_2397_:
{
lean_object* v___x_2400_; lean_object* v___x_2402_; 
v___x_2400_ = lp_choreo_Choreo_jInt(v_head_2395_);
if (v_isShared_2399_ == 0)
{
lean_ctor_set(v___x_2398_, 1, v_a_2393_);
lean_ctor_set(v___x_2398_, 0, v___x_2400_);
v___x_2402_ = v___x_2398_;
goto v_reusejp_2401_;
}
else
{
lean_object* v_reuseFailAlloc_2404_; 
v_reuseFailAlloc_2404_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2404_, 0, v___x_2400_);
lean_ctor_set(v_reuseFailAlloc_2404_, 1, v_a_2393_);
v___x_2402_ = v_reuseFailAlloc_2404_;
goto v_reusejp_2401_;
}
v_reusejp_2401_:
{
v_a_2392_ = v_tail_2396_;
v_a_2393_ = v___x_2402_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jPoly(lean_object* v_p_2406_){
_start:
{
lean_object* v___x_2407_; lean_object* v___x_2408_; lean_object* v___x_2409_; lean_object* v___x_2410_; 
v___x_2407_ = lean_box(0);
v___x_2408_ = lp_choreo_List_mapTR_loop___at___00Choreo_jPoly_spec__0(v_p_2406_, v___x_2407_);
v___x_2409_ = lean_array_mk(v___x_2408_);
v___x_2410_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2410_, 0, v___x_2409_);
return v___x_2410_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jRect(lean_object* v_r_2415_){
_start:
{
lean_object* v_xmin_2416_; lean_object* v_xmax_2417_; lean_object* v_ymin_2418_; lean_object* v_ymax_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2431_; lean_object* v___x_2432_; lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; lean_object* v___x_2437_; 
v_xmin_2416_ = lean_ctor_get(v_r_2415_, 0);
lean_inc(v_xmin_2416_);
v_xmax_2417_ = lean_ctor_get(v_r_2415_, 1);
lean_inc(v_xmax_2417_);
v_ymin_2418_ = lean_ctor_get(v_r_2415_, 2);
lean_inc(v_ymin_2418_);
v_ymax_2419_ = lean_ctor_get(v_r_2415_, 3);
lean_inc(v_ymax_2419_);
lean_dec_ref(v_r_2415_);
v___x_2420_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__0));
v___x_2421_ = lp_choreo_Choreo_jInt(v_xmin_2416_);
v___x_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2420_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__1));
v___x_2424_ = lp_choreo_Choreo_jInt(v_xmax_2417_);
v___x_2425_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2423_);
lean_ctor_set(v___x_2425_, 1, v___x_2424_);
v___x_2426_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__2));
v___x_2427_ = lp_choreo_Choreo_jInt(v_ymin_2418_);
v___x_2428_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2428_, 0, v___x_2426_);
lean_ctor_set(v___x_2428_, 1, v___x_2427_);
v___x_2429_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__3));
v___x_2430_ = lp_choreo_Choreo_jInt(v_ymax_2419_);
v___x_2431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2431_, 0, v___x_2429_);
lean_ctor_set(v___x_2431_, 1, v___x_2430_);
v___x_2432_ = lean_box(0);
v___x_2433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2431_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2428_);
lean_ctor_set(v___x_2434_, 1, v___x_2433_);
v___x_2435_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2435_, 0, v___x_2425_);
lean_ctor_set(v___x_2435_, 1, v___x_2434_);
v___x_2436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2422_);
lean_ctor_set(v___x_2436_, 1, v___x_2435_);
v___x_2437_ = l_Lean_Json_mkObj(v___x_2436_);
lean_dec_ref_known(v___x_2436_, 2);
return v___x_2437_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_certName(lean_object* v_x_2445_){
_start:
{
switch(lean_obj_tag(v_x_2445_))
{
case 0:
{
uint8_t v_xAxis_2446_; 
v_xAxis_2446_ = lean_ctor_get_uint8(v_x_2445_, sizeof(void*)*1);
lean_dec_ref_known(v_x_2445_, 1);
if (v_xAxis_2446_ == 0)
{
lean_object* v___x_2447_; 
v___x_2447_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__0));
return v___x_2447_;
}
else
{
lean_object* v___x_2448_; 
v___x_2448_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__1));
return v___x_2448_;
}
}
case 1:
{
lean_object* v_depth_2449_; lean_object* v___x_2450_; uint8_t v___x_2451_; 
v_depth_2449_ = lean_ctor_get(v_x_2445_, 0);
lean_inc(v_depth_2449_);
lean_dec_ref_known(v_x_2445_, 1);
v___x_2450_ = lean_unsigned_to_nat(0u);
v___x_2451_ = lean_nat_dec_eq(v_depth_2449_, v___x_2450_);
if (v___x_2451_ == 0)
{
lean_object* v___x_2452_; lean_object* v___x_2453_; lean_object* v___x_2454_; lean_object* v___x_2455_; lean_object* v___x_2456_; 
v___x_2452_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__2));
v___x_2453_ = l_Nat_reprFast(v_depth_2449_);
v___x_2454_ = lean_string_append(v___x_2452_, v___x_2453_);
lean_dec_ref(v___x_2453_);
v___x_2455_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__3));
v___x_2456_ = lean_string_append(v___x_2454_, v___x_2455_);
return v___x_2456_;
}
else
{
lean_object* v___x_2457_; 
lean_dec(v_depth_2449_);
v___x_2457_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__4));
return v___x_2457_;
}
}
case 2:
{
lean_object* v___x_2458_; 
lean_dec_ref_known(v_x_2445_, 2);
v___x_2458_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__5));
return v___x_2458_;
}
default: 
{
lean_object* v___x_2459_; 
lean_dec_ref_known(v_x_2445_, 1);
v___x_2459_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__6));
return v___x_2459_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_certDepth(lean_object* v_x_2460_){
_start:
{
switch(lean_obj_tag(v_x_2460_))
{
case 0:
{
lean_object* v_depth_2461_; 
v_depth_2461_ = lean_ctor_get(v_x_2460_, 0);
lean_inc(v_depth_2461_);
return v_depth_2461_;
}
case 1:
{
lean_object* v_depth_2462_; 
v_depth_2462_ = lean_ctor_get(v_x_2460_, 0);
lean_inc(v_depth_2462_);
return v_depth_2462_;
}
default: 
{
lean_object* v___x_2463_; 
v___x_2463_ = lean_unsigned_to_nat(0u);
return v___x_2463_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_certDepth___boxed(lean_object* v_x_2464_){
_start:
{
lean_object* v_res_2465_; 
v_res_2465_ = lp_choreo_Choreo_certDepth(v_x_2464_);
lean_dec_ref(v_x_2464_);
return v_res_2465_;
}
}
static double _init_lp_choreo_Choreo_secondsAt___closed__0(void){
_start:
{
lean_object* v___x_2466_; uint8_t v___x_2467_; lean_object* v___x_2468_; double v___x_2469_; 
v___x_2466_ = lean_unsigned_to_nat(1u);
v___x_2467_ = 1;
v___x_2468_ = lean_unsigned_to_nat(600u);
v___x_2469_ = l_Float_ofScientific(v___x_2468_, v___x_2467_, v___x_2466_);
return v___x_2469_;
}
}
LEAN_EXPORT double lp_choreo_Choreo_secondsAt(lean_object* v_c_2470_, lean_object* v_ph_2471_, lean_object* v_t_2472_){
_start:
{
lean_object* v_t0_2473_; lean_object* v_t1_2474_; lean_object* v_ticksPerBeat_2475_; lean_object* v_bpmNum_2476_; lean_object* v_bpmDen_2477_; double v___x_2478_; double v___x_2479_; lean_object* v___x_2480_; double v___x_2481_; double v___x_2482_; double v_ticks_2483_; double v___x_2484_; double v___x_2485_; double v___x_2486_; double v___x_2487_; double v___x_2488_; double v___x_2489_; double v___x_2490_; double v___x_2491_; 
v_t0_2473_ = lean_ctor_get(v_ph_2471_, 0);
lean_inc_n(v_t0_2473_, 2);
v_t1_2474_ = lean_ctor_get(v_ph_2471_, 1);
lean_inc(v_t1_2474_);
lean_dec_ref(v_ph_2471_);
v_ticksPerBeat_2475_ = lean_ctor_get(v_c_2470_, 4);
lean_inc(v_ticksPerBeat_2475_);
v_bpmNum_2476_ = lean_ctor_get(v_c_2470_, 5);
lean_inc(v_bpmNum_2476_);
v_bpmDen_2477_ = lean_ctor_get(v_c_2470_, 6);
lean_inc(v_bpmDen_2477_);
lean_dec_ref(v_c_2470_);
v___x_2478_ = lean_float_of_nat(v_t0_2473_);
v___x_2479_ = lp_choreo_Choreo_ratFloat(v_t_2472_);
v___x_2480_ = lean_nat_sub(v_t1_2474_, v_t0_2473_);
lean_dec(v_t0_2473_);
lean_dec(v_t1_2474_);
v___x_2481_ = lean_float_of_nat(v___x_2480_);
v___x_2482_ = lean_float_mul(v___x_2479_, v___x_2481_);
v_ticks_2483_ = lean_float_add(v___x_2478_, v___x_2482_);
v___x_2484_ = lean_float_of_nat(v_ticksPerBeat_2475_);
v___x_2485_ = lean_float_div(v_ticks_2483_, v___x_2484_);
v___x_2486_ = lean_float_once(&lp_choreo_Choreo_secondsAt___closed__0, &lp_choreo_Choreo_secondsAt___closed__0_once, _init_lp_choreo_Choreo_secondsAt___closed__0);
v___x_2487_ = lean_float_mul(v___x_2485_, v___x_2486_);
v___x_2488_ = lean_float_of_nat(v_bpmDen_2477_);
v___x_2489_ = lean_float_mul(v___x_2487_, v___x_2488_);
v___x_2490_ = lean_float_of_nat(v_bpmNum_2476_);
v___x_2491_ = lean_float_div(v___x_2489_, v___x_2490_);
return v___x_2491_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_secondsAt___boxed(lean_object* v_c_2492_, lean_object* v_ph_2493_, lean_object* v_t_2494_){
_start:
{
double v_res_2495_; lean_object* v_r_2496_; 
v_res_2495_ = lp_choreo_Choreo_secondsAt(v_c_2492_, v_ph_2493_, v_t_2494_);
v_r_2496_ = lean_box_float(v_res_2495_);
return v_r_2496_;
}
}
LEAN_EXPORT double lp_choreo_Choreo_distFloat(lean_object* v_d2_2497_){
_start:
{
double v___x_2498_; double v___x_2499_; 
v___x_2498_ = lp_choreo_Choreo_ratFloat(v_d2_2497_);
v___x_2499_ = sqrt(v___x_2498_);
return v___x_2499_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_distFloat___boxed(lean_object* v_d2_2500_){
_start:
{
double v_res_2501_; lean_object* v_r_2502_; 
v_res_2501_ = lp_choreo_Choreo_distFloat(v_d2_2500_);
v_r_2502_ = lean_box_float(v_res_2501_);
return v_r_2502_;
}
}
static lean_object* _init_lp_choreo_Choreo_problemJson___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2503_; lean_object* v___x_2504_; lean_object* v___x_2505_; lean_object* v___x_2506_; lean_object* v___x_2507_; lean_object* v___x_2508_; 
v___x_2503_ = lean_box(0);
v___x_2504_ = lp_choreo_Choreo_stageRect;
v___x_2505_ = lean_box(0);
v___x_2506_ = lean_unsigned_to_nat(1u);
v___x_2507_ = lean_unsigned_to_nat(0u);
v___x_2508_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2508_, 0, v___x_2507_);
lean_ctor_set(v___x_2508_, 1, v___x_2506_);
lean_ctor_set(v___x_2508_, 2, v___x_2505_);
lean_ctor_set(v___x_2508_, 3, v___x_2504_);
lean_ctor_set(v___x_2508_, 4, v___x_2505_);
lean_ctor_set(v___x_2508_, 5, v___x_2505_);
lean_ctor_set(v___x_2508_, 6, v___x_2505_);
lean_ctor_set(v___x_2508_, 7, v___x_2503_);
return v___x_2508_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___lam__0(lean_object* v_phases_2509_, lean_object* v_k_2510_){
_start:
{
lean_object* v___x_2511_; lean_object* v___x_2512_; 
v___x_2511_ = lean_obj_once(&lp_choreo_Choreo_problemJson___lam__0___closed__0, &lp_choreo_Choreo_problemJson___lam__0___closed__0_once, _init_lp_choreo_Choreo_problemJson___lam__0___closed__0);
v___x_2512_ = l_List_getD___redArg(v_phases_2509_, v_k_2510_, v___x_2511_);
return v___x_2512_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___lam__0___boxed(lean_object* v_phases_2513_, lean_object* v_k_2514_){
_start:
{
lean_object* v_res_2515_; 
v_res_2515_ = lp_choreo_Choreo_problemJson___lam__0(v_phases_2513_, v_k_2514_);
lean_dec(v_phases_2513_);
return v_res_2515_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson(lean_object* v_c_2556_, lean_object* v_phases_2557_, lean_object* v_names_2558_, lean_object* v_p_2559_){
_start:
{
switch(lean_obj_tag(v_p_2559_))
{
case 0:
{
lean_object* v_t_2560_; lean_object* v_phase_2561_; lean_object* v_i_2562_; lean_object* v_j_2563_; lean_object* v_num_2564_; lean_object* v_den_2565_; lean_object* v_ph_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; lean_object* v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; double v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; double v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; lean_object* v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; double v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; 
v_t_2560_ = lean_ctor_get(v_p_2559_, 3);
v_phase_2561_ = lean_ctor_get(v_p_2559_, 0);
v_i_2562_ = lean_ctor_get(v_p_2559_, 1);
v_j_2563_ = lean_ctor_get(v_p_2559_, 2);
v_num_2564_ = lean_ctor_get(v_t_2560_, 0);
v_den_2565_ = lean_ctor_get(v_t_2560_, 1);
lean_inc_n(v_phase_2561_, 2);
v_ph_2566_ = lp_choreo_Choreo_problemJson___lam__0(v_phases_2557_, v_phase_2561_);
v___x_2567_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__3));
v___x_2568_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_2569_ = l_Lean_JsonNumber_fromNat(v_phase_2561_);
v___x_2570_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2569_);
v___x_2571_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2571_, 0, v___x_2568_);
lean_ctor_set(v___x_2571_, 1, v___x_2570_);
v___x_2572_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc_n(v_i_2562_, 2);
v___x_2573_ = l_Lean_JsonNumber_fromNat(v_i_2562_);
v___x_2574_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2574_, 0, v___x_2573_);
v___x_2575_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2572_);
lean_ctor_set(v___x_2575_, 1, v___x_2574_);
v___x_2576_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
lean_inc_n(v_j_2563_, 2);
v___x_2577_ = l_Lean_JsonNumber_fromNat(v_j_2563_);
v___x_2578_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2578_, 0, v___x_2577_);
v___x_2579_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2579_, 0, v___x_2576_);
lean_ctor_set(v___x_2579_, 1, v___x_2578_);
v___x_2580_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc_ref_n(v_t_2560_, 3);
v___x_2581_ = lp_choreo_Choreo_ratFloat(v_t_2560_);
v___x_2582_ = l_Lean_Float_toJson(v___x_2581_);
v___x_2583_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2580_);
lean_ctor_set(v___x_2583_, 1, v___x_2582_);
v___x_2584_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__8));
lean_inc(v_num_2564_);
v___x_2585_ = lp_choreo_Choreo_jInt(v_num_2564_);
v___x_2586_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2584_);
lean_ctor_set(v___x_2586_, 1, v___x_2585_);
v___x_2587_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__9));
lean_inc(v_den_2565_);
v___x_2588_ = l_Lean_JsonNumber_fromNat(v_den_2565_);
v___x_2589_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2589_, 0, v___x_2588_);
v___x_2590_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2590_, 0, v___x_2587_);
lean_ctor_set(v___x_2590_, 1, v___x_2589_);
v___x_2591_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__10));
lean_inc(v_ph_2566_);
v___x_2592_ = lp_choreo_Choreo_secondsAt(v_c_2556_, v_ph_2566_, v_t_2560_);
v___x_2593_ = l_Lean_Float_toJson(v___x_2592_);
v___x_2594_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2594_, 0, v___x_2591_);
lean_ctor_set(v___x_2594_, 1, v___x_2593_);
v___x_2595_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__11));
v___x_2596_ = lp_choreo_Choreo_Phase_path(v_ph_2566_, v_i_2562_);
v___x_2597_ = lp_choreo_Choreo_Phase_path(v_ph_2566_, v_j_2563_);
lean_dec(v_ph_2566_);
v___x_2598_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v___x_2596_, v___x_2597_, v_t_2560_);
v___x_2599_ = lp_choreo_Choreo_distFloat(v___x_2598_);
v___x_2600_ = l_Lean_Float_toJson(v___x_2599_);
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2595_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2603_ = lp_choreo_Choreo_problemText(v_names_2558_, v_p_2559_);
v___x_2604_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2604_, 0, v___x_2603_);
v___x_2605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2602_);
lean_ctor_set(v___x_2605_, 1, v___x_2604_);
v___x_2606_ = lean_box(0);
v___x_2607_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2607_, 0, v___x_2605_);
lean_ctor_set(v___x_2607_, 1, v___x_2606_);
v___x_2608_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2608_, 0, v___x_2601_);
lean_ctor_set(v___x_2608_, 1, v___x_2607_);
v___x_2609_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2609_, 0, v___x_2594_);
lean_ctor_set(v___x_2609_, 1, v___x_2608_);
v___x_2610_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2610_, 0, v___x_2590_);
lean_ctor_set(v___x_2610_, 1, v___x_2609_);
v___x_2611_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2611_, 0, v___x_2586_);
lean_ctor_set(v___x_2611_, 1, v___x_2610_);
v___x_2612_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2583_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2579_);
lean_ctor_set(v___x_2613_, 1, v___x_2612_);
v___x_2614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2575_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2571_);
lean_ctor_set(v___x_2615_, 1, v___x_2614_);
v___x_2616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2567_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = l_Lean_Json_mkObj(v___x_2616_);
lean_dec_ref_known(v___x_2616_, 2);
return v___x_2617_;
}
case 1:
{
lean_object* v_phase_2618_; lean_object* v_i_2619_; lean_object* v_t_2620_; lean_object* v_ph_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; double v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; double v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; 
v_phase_2618_ = lean_ctor_get(v_p_2559_, 0);
v_i_2619_ = lean_ctor_get(v_p_2559_, 1);
v_t_2620_ = lean_ctor_get(v_p_2559_, 2);
lean_inc_n(v_phase_2618_, 2);
v_ph_2621_ = lp_choreo_Choreo_problemJson___lam__0(v_phases_2557_, v_phase_2618_);
v___x_2622_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__15));
v___x_2623_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_2624_ = l_Lean_JsonNumber_fromNat(v_phase_2618_);
v___x_2625_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
v___x_2626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2623_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc(v_i_2619_);
v___x_2628_ = l_Lean_JsonNumber_fromNat(v_i_2619_);
v___x_2629_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2629_, 0, v___x_2628_);
v___x_2630_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2630_, 0, v___x_2627_);
lean_ctor_set(v___x_2630_, 1, v___x_2629_);
v___x_2631_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc_ref_n(v_t_2620_, 2);
v___x_2632_ = lp_choreo_Choreo_ratFloat(v_t_2620_);
v___x_2633_ = l_Lean_Float_toJson(v___x_2632_);
v___x_2634_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2634_, 0, v___x_2631_);
lean_ctor_set(v___x_2634_, 1, v___x_2633_);
v___x_2635_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__10));
v___x_2636_ = lp_choreo_Choreo_secondsAt(v_c_2556_, v_ph_2621_, v_t_2620_);
v___x_2637_ = l_Lean_Float_toJson(v___x_2636_);
v___x_2638_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2635_);
lean_ctor_set(v___x_2638_, 1, v___x_2637_);
v___x_2639_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2640_ = lp_choreo_Choreo_problemText(v_names_2558_, v_p_2559_);
v___x_2641_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2640_);
v___x_2642_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2642_, 0, v___x_2639_);
lean_ctor_set(v___x_2642_, 1, v___x_2641_);
v___x_2643_ = lean_box(0);
v___x_2644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2642_);
lean_ctor_set(v___x_2644_, 1, v___x_2643_);
v___x_2645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2638_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2634_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2630_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
v___x_2648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2626_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
v___x_2649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2622_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = l_Lean_Json_mkObj(v___x_2649_);
lean_dec_ref_known(v___x_2649_, 2);
return v___x_2650_;
}
case 2:
{
lean_object* v_phase_2651_; lean_object* v_i_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; lean_object* v___x_2656_; lean_object* v___x_2657_; lean_object* v___x_2658_; lean_object* v___x_2659_; lean_object* v___x_2660_; lean_object* v___x_2661_; lean_object* v___x_2662_; lean_object* v___x_2663_; lean_object* v___x_2664_; lean_object* v___x_2665_; lean_object* v___x_2666_; lean_object* v___x_2667_; lean_object* v___x_2668_; lean_object* v___x_2669_; lean_object* v___x_2670_; lean_object* v___x_2671_; 
lean_dec_ref(v_c_2556_);
v_phase_2651_ = lean_ctor_get(v_p_2559_, 0);
v_i_2652_ = lean_ctor_get(v_p_2559_, 1);
v___x_2653_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__18));
v___x_2654_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_phase_2651_);
v___x_2655_ = l_Lean_JsonNumber_fromNat(v_phase_2651_);
v___x_2656_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2656_, 0, v___x_2655_);
v___x_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2657_, 0, v___x_2654_);
lean_ctor_set(v___x_2657_, 1, v___x_2656_);
v___x_2658_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc(v_i_2652_);
v___x_2659_ = l_Lean_JsonNumber_fromNat(v_i_2652_);
v___x_2660_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2660_, 0, v___x_2659_);
v___x_2661_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2661_, 0, v___x_2658_);
lean_ctor_set(v___x_2661_, 1, v___x_2660_);
v___x_2662_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2663_ = lp_choreo_Choreo_problemText(v_names_2558_, v_p_2559_);
v___x_2664_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2664_, 0, v___x_2663_);
v___x_2665_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2665_, 0, v___x_2662_);
lean_ctor_set(v___x_2665_, 1, v___x_2664_);
v___x_2666_ = lean_box(0);
v___x_2667_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2667_, 0, v___x_2665_);
lean_ctor_set(v___x_2667_, 1, v___x_2666_);
v___x_2668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2668_, 0, v___x_2661_);
lean_ctor_set(v___x_2668_, 1, v___x_2667_);
v___x_2669_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2669_, 0, v___x_2657_);
lean_ctor_set(v___x_2669_, 1, v___x_2668_);
v___x_2670_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2670_, 0, v___x_2653_);
lean_ctor_set(v___x_2670_, 1, v___x_2669_);
v___x_2671_ = l_Lean_Json_mkObj(v___x_2670_);
lean_dec_ref_known(v___x_2670_, 2);
return v___x_2671_;
}
case 3:
{
lean_object* v_phase_2672_; lean_object* v_i_2673_; lean_object* v_j_2674_; lean_object* v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2682_; lean_object* v___x_2683_; lean_object* v___x_2684_; lean_object* v___x_2685_; lean_object* v___x_2686_; lean_object* v___x_2687_; lean_object* v___x_2688_; lean_object* v___x_2689_; lean_object* v___x_2690_; lean_object* v___x_2691_; lean_object* v___x_2692_; lean_object* v___x_2693_; lean_object* v___x_2694_; lean_object* v___x_2695_; lean_object* v___x_2696_; lean_object* v___x_2697_; lean_object* v___x_2698_; 
lean_dec_ref(v_c_2556_);
v_phase_2672_ = lean_ctor_get(v_p_2559_, 0);
v_i_2673_ = lean_ctor_get(v_p_2559_, 1);
v_j_2674_ = lean_ctor_get(v_p_2559_, 2);
v___x_2675_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__21));
v___x_2676_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_phase_2672_);
v___x_2677_ = l_Lean_JsonNumber_fromNat(v_phase_2672_);
v___x_2678_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2678_, 0, v___x_2677_);
v___x_2679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2679_, 0, v___x_2676_);
lean_ctor_set(v___x_2679_, 1, v___x_2678_);
v___x_2680_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc(v_i_2673_);
v___x_2681_ = l_Lean_JsonNumber_fromNat(v_i_2673_);
v___x_2682_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2682_, 0, v___x_2681_);
v___x_2683_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2683_, 0, v___x_2680_);
lean_ctor_set(v___x_2683_, 1, v___x_2682_);
v___x_2684_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
lean_inc(v_j_2674_);
v___x_2685_ = l_Lean_JsonNumber_fromNat(v_j_2674_);
v___x_2686_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2686_, 0, v___x_2685_);
v___x_2687_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2687_, 0, v___x_2684_);
lean_ctor_set(v___x_2687_, 1, v___x_2686_);
v___x_2688_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2689_ = lp_choreo_Choreo_problemText(v_names_2558_, v_p_2559_);
v___x_2690_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2690_, 0, v___x_2689_);
v___x_2691_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2691_, 0, v___x_2688_);
lean_ctor_set(v___x_2691_, 1, v___x_2690_);
v___x_2692_ = lean_box(0);
v___x_2693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2693_, 0, v___x_2691_);
lean_ctor_set(v___x_2693_, 1, v___x_2692_);
v___x_2694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2694_, 0, v___x_2687_);
lean_ctor_set(v___x_2694_, 1, v___x_2693_);
v___x_2695_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2695_, 0, v___x_2683_);
lean_ctor_set(v___x_2695_, 1, v___x_2694_);
v___x_2696_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2696_, 0, v___x_2679_);
lean_ctor_set(v___x_2696_, 1, v___x_2695_);
v___x_2697_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2697_, 0, v___x_2675_);
lean_ctor_set(v___x_2697_, 1, v___x_2696_);
v___x_2698_ = l_Lean_Json_mkObj(v___x_2697_);
lean_dec_ref_known(v___x_2697_, 2);
return v___x_2698_;
}
default: 
{
lean_object* v_phase_2699_; lean_object* v_why_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2719_; 
lean_dec_ref(v_names_2558_);
lean_dec_ref(v_c_2556_);
v_phase_2699_ = lean_ctor_get(v_p_2559_, 0);
v_why_2700_ = lean_ctor_get(v_p_2559_, 1);
v_isSharedCheck_2719_ = !lean_is_exclusive(v_p_2559_);
if (v_isSharedCheck_2719_ == 0)
{
v___x_2702_ = v_p_2559_;
v_isShared_2703_ = v_isSharedCheck_2719_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_why_2700_);
lean_inc(v_phase_2699_);
lean_dec(v_p_2559_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2719_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v___x_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2709_; 
v___x_2704_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__24));
v___x_2705_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_2706_ = l_Lean_JsonNumber_fromNat(v_phase_2699_);
v___x_2707_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
if (v_isShared_2703_ == 0)
{
lean_ctor_set_tag(v___x_2702_, 0);
lean_ctor_set(v___x_2702_, 1, v___x_2707_);
lean_ctor_set(v___x_2702_, 0, v___x_2705_);
v___x_2709_ = v___x_2702_;
goto v_reusejp_2708_;
}
else
{
lean_object* v_reuseFailAlloc_2718_; 
v_reuseFailAlloc_2718_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2718_, 0, v___x_2705_);
lean_ctor_set(v_reuseFailAlloc_2718_, 1, v___x_2707_);
v___x_2709_ = v_reuseFailAlloc_2718_;
goto v_reusejp_2708_;
}
v_reusejp_2708_:
{
lean_object* v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; 
v___x_2710_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2711_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2711_, 0, v_why_2700_);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2710_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
v___x_2713_ = lean_box(0);
v___x_2714_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2714_, 0, v___x_2712_);
lean_ctor_set(v___x_2714_, 1, v___x_2713_);
v___x_2715_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2715_, 0, v___x_2709_);
lean_ctor_set(v___x_2715_, 1, v___x_2714_);
v___x_2716_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2716_, 0, v___x_2704_);
lean_ctor_set(v___x_2716_, 1, v___x_2715_);
v___x_2717_ = l_Lean_Json_mkObj(v___x_2716_);
lean_dec_ref_known(v___x_2716_, 2);
return v___x_2717_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___boxed(lean_object* v_c_2720_, lean_object* v_phases_2721_, lean_object* v_names_2722_, lean_object* v_p_2723_){
_start:
{
lean_object* v_res_2724_; 
v_res_2724_ = lp_choreo_Choreo_problemJson(v_c_2720_, v_phases_2721_, v_names_2722_, v_p_2723_);
lean_dec(v_phases_2721_);
return v_res_2724_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(lean_object* v_ph_2725_, lean_object* v_a_2726_, lean_object* v_a_2727_, lean_object* v_as_x27_2728_, lean_object* v_b_2729_){
_start:
{
if (lean_obj_tag(v_as_x27_2728_) == 0)
{
lean_dec(v_a_2727_);
lean_dec(v_a_2726_);
return v_b_2729_;
}
else
{
lean_object* v_snd_2730_; lean_object* v_head_2731_; lean_object* v_tail_2732_; lean_object* v_snd_2733_; lean_object* v___x_2735_; uint8_t v_isShared_2736_; uint8_t v_isSharedCheck_2755_; 
v_snd_2730_ = lean_ctor_get(v_b_2729_, 1);
lean_inc(v_snd_2730_);
v_head_2731_ = lean_ctor_get(v_as_x27_2728_, 0);
v_tail_2732_ = lean_ctor_get(v_as_x27_2728_, 1);
v_snd_2733_ = lean_ctor_get(v_snd_2730_, 1);
v_isSharedCheck_2755_ = !lean_is_exclusive(v_snd_2730_);
if (v_isSharedCheck_2755_ == 0)
{
lean_object* v_unused_2756_; 
v_unused_2756_ = lean_ctor_get(v_snd_2730_, 0);
lean_dec(v_unused_2756_);
v___x_2735_ = v_snd_2730_;
v_isShared_2736_ = v_isSharedCheck_2755_;
goto v_resetjp_2734_;
}
else
{
lean_inc(v_snd_2733_);
lean_dec(v_snd_2730_);
v___x_2735_ = lean_box(0);
v_isShared_2736_ = v_isSharedCheck_2755_;
goto v_resetjp_2734_;
}
v_resetjp_2734_:
{
lean_object* v___x_2737_; lean_object* v___x_2738_; lean_object* v___x_2739_; uint8_t v___x_2740_; 
lean_inc(v_a_2726_);
v___x_2737_ = lp_choreo_Choreo_Phase_path(v_ph_2725_, v_a_2726_);
lean_inc(v_a_2727_);
v___x_2738_ = lp_choreo_Choreo_Phase_path(v_ph_2725_, v_a_2727_);
lean_inc(v_head_2731_);
v___x_2739_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v___x_2737_, v___x_2738_, v_head_2731_);
lean_inc_ref(v___x_2739_);
v___x_2740_ = l_Rat_blt(v___x_2739_, v_snd_2733_);
if (v___x_2740_ == 0)
{
lean_dec_ref(v___x_2739_);
lean_del_object(v___x_2735_);
v_as_x27_2728_ = v_tail_2732_;
goto _start;
}
else
{
lean_object* v___x_2743_; uint8_t v_isShared_2744_; uint8_t v_isSharedCheck_2752_; 
v_isSharedCheck_2752_ = !lean_is_exclusive(v_b_2729_);
if (v_isSharedCheck_2752_ == 0)
{
lean_object* v_unused_2753_; lean_object* v_unused_2754_; 
v_unused_2753_ = lean_ctor_get(v_b_2729_, 1);
lean_dec(v_unused_2753_);
v_unused_2754_ = lean_ctor_get(v_b_2729_, 0);
lean_dec(v_unused_2754_);
v___x_2743_ = v_b_2729_;
v_isShared_2744_ = v_isSharedCheck_2752_;
goto v_resetjp_2742_;
}
else
{
lean_dec(v_b_2729_);
v___x_2743_ = lean_box(0);
v_isShared_2744_ = v_isSharedCheck_2752_;
goto v_resetjp_2742_;
}
v_resetjp_2742_:
{
lean_object* v___x_2746_; 
lean_inc(v_a_2727_);
if (v_isShared_2736_ == 0)
{
lean_ctor_set(v___x_2735_, 1, v___x_2739_);
lean_ctor_set(v___x_2735_, 0, v_a_2727_);
v___x_2746_ = v___x_2735_;
goto v_reusejp_2745_;
}
else
{
lean_object* v_reuseFailAlloc_2751_; 
v_reuseFailAlloc_2751_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2751_, 0, v_a_2727_);
lean_ctor_set(v_reuseFailAlloc_2751_, 1, v___x_2739_);
v___x_2746_ = v_reuseFailAlloc_2751_;
goto v_reusejp_2745_;
}
v_reusejp_2745_:
{
lean_object* v___x_2748_; 
lean_inc(v_a_2726_);
if (v_isShared_2744_ == 0)
{
lean_ctor_set(v___x_2743_, 1, v___x_2746_);
lean_ctor_set(v___x_2743_, 0, v_a_2726_);
v___x_2748_ = v___x_2743_;
goto v_reusejp_2747_;
}
else
{
lean_object* v_reuseFailAlloc_2750_; 
v_reuseFailAlloc_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2750_, 0, v_a_2726_);
lean_ctor_set(v_reuseFailAlloc_2750_, 1, v___x_2746_);
v___x_2748_ = v_reuseFailAlloc_2750_;
goto v_reusejp_2747_;
}
v_reusejp_2747_:
{
v_as_x27_2728_ = v_tail_2732_;
v_b_2729_ = v___x_2748_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg___boxed(lean_object* v_ph_2757_, lean_object* v_a_2758_, lean_object* v_a_2759_, lean_object* v_as_x27_2760_, lean_object* v_b_2761_){
_start:
{
lean_object* v_res_2762_; 
v_res_2762_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(v_ph_2757_, v_a_2758_, v_a_2759_, v_as_x27_2760_, v_b_2761_);
lean_dec(v_as_x27_2760_);
lean_dec_ref(v_ph_2757_);
return v_res_2762_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2763_; lean_object* v___x_2764_; 
v___x_2763_ = lean_unsigned_to_nat(8u);
v___x_2764_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_2763_);
return v___x_2764_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0(lean_object* v_a_2765_, lean_object* v_a_2766_){
_start:
{
if (lean_obj_tag(v_a_2765_) == 0)
{
lean_object* v___x_2767_; 
v___x_2767_ = l_List_reverse___redArg(v_a_2766_);
return v___x_2767_;
}
else
{
lean_object* v_head_2768_; lean_object* v_tail_2769_; lean_object* v___x_2771_; uint8_t v_isShared_2772_; uint8_t v_isSharedCheck_2781_; 
v_head_2768_ = lean_ctor_get(v_a_2765_, 0);
v_tail_2769_ = lean_ctor_get(v_a_2765_, 1);
v_isSharedCheck_2781_ = !lean_is_exclusive(v_a_2765_);
if (v_isSharedCheck_2781_ == 0)
{
v___x_2771_ = v_a_2765_;
v_isShared_2772_ = v_isSharedCheck_2781_;
goto v_resetjp_2770_;
}
else
{
lean_inc(v_tail_2769_);
lean_inc(v_head_2768_);
lean_dec(v_a_2765_);
v___x_2771_ = lean_box(0);
v_isShared_2772_ = v_isSharedCheck_2781_;
goto v_resetjp_2770_;
}
v_resetjp_2770_:
{
lean_object* v___x_2773_; lean_object* v___x_2774_; lean_object* v___x_2775_; lean_object* v___x_2776_; lean_object* v___x_2778_; 
v___x_2773_ = lean_nat_to_int(v_head_2768_);
v___x_2774_ = l_Rat_ofInt(v___x_2773_);
v___x_2775_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0);
v___x_2776_ = l_Rat_div(v___x_2774_, v___x_2775_);
lean_dec_ref(v___x_2774_);
if (v_isShared_2772_ == 0)
{
lean_ctor_set(v___x_2771_, 1, v_a_2766_);
lean_ctor_set(v___x_2771_, 0, v___x_2776_);
v___x_2778_ = v___x_2771_;
goto v_reusejp_2777_;
}
else
{
lean_object* v_reuseFailAlloc_2780_; 
v_reuseFailAlloc_2780_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2780_, 0, v___x_2776_);
lean_ctor_set(v_reuseFailAlloc_2780_, 1, v_a_2766_);
v___x_2778_ = v_reuseFailAlloc_2780_;
goto v_reusejp_2777_;
}
v_reusejp_2777_:
{
v_a_2765_ = v_tail_2769_;
v_a_2766_ = v___x_2778_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_tightestPair_spec__0(lean_object* v_a_2782_, lean_object* v_a_2783_){
_start:
{
if (lean_obj_tag(v_a_2782_) == 0)
{
lean_object* v___x_2784_; 
v___x_2784_ = l_List_reverse___redArg(v_a_2783_);
return v___x_2784_;
}
else
{
lean_object* v_head_2785_; lean_object* v_tail_2786_; lean_object* v___x_2788_; uint8_t v_isShared_2789_; uint8_t v_isSharedCheck_2798_; 
v_head_2785_ = lean_ctor_get(v_a_2782_, 0);
v_tail_2786_ = lean_ctor_get(v_a_2782_, 1);
v_isSharedCheck_2798_ = !lean_is_exclusive(v_a_2782_);
if (v_isSharedCheck_2798_ == 0)
{
v___x_2788_ = v_a_2782_;
v_isShared_2789_ = v_isSharedCheck_2798_;
goto v_resetjp_2787_;
}
else
{
lean_inc(v_tail_2786_);
lean_inc(v_head_2785_);
lean_dec(v_a_2782_);
v___x_2788_ = lean_box(0);
v_isShared_2789_ = v_isSharedCheck_2798_;
goto v_resetjp_2787_;
}
v_resetjp_2787_:
{
lean_object* v___x_2790_; lean_object* v___x_2791_; lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v___x_2795_; 
v___x_2790_ = lean_nat_to_int(v_head_2785_);
v___x_2791_ = l_Rat_ofInt(v___x_2790_);
v___x_2792_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0);
v___x_2793_ = l_Rat_div(v___x_2791_, v___x_2792_);
lean_dec_ref(v___x_2791_);
if (v_isShared_2789_ == 0)
{
lean_ctor_set(v___x_2788_, 1, v_a_2783_);
lean_ctor_set(v___x_2788_, 0, v___x_2793_);
v___x_2795_ = v___x_2788_;
goto v_reusejp_2794_;
}
else
{
lean_object* v_reuseFailAlloc_2797_; 
v_reuseFailAlloc_2797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2797_, 0, v___x_2793_);
lean_ctor_set(v_reuseFailAlloc_2797_, 1, v_a_2783_);
v___x_2795_ = v_reuseFailAlloc_2797_;
goto v_reusejp_2794_;
}
v_reusejp_2794_:
{
lean_object* v___x_2796_; 
v___x_2796_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0(v_tail_2786_, v___x_2795_);
return v___x_2796_;
}
}
}
}
}
static lean_object* _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2799_; lean_object* v___x_2800_; 
v___x_2799_ = lean_unsigned_to_nat(9u);
v___x_2800_ = l_List_range(v___x_2799_);
return v___x_2800_;
}
}
static lean_object* _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2801_; lean_object* v___x_2802_; lean_object* v_times_2803_; 
v___x_2801_ = lean_box(0);
v___x_2802_ = lean_obj_once(&lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0, &lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0_once, _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0);
v_times_2803_ = lp_choreo_List_mapTR_loop___at___00Choreo_tightestPair_spec__0(v___x_2802_, v___x_2801_);
return v_times_2803_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(lean_object* v_ph_2804_, lean_object* v_a_2805_, lean_object* v_as_x27_2806_, lean_object* v_b_2807_){
_start:
{
if (lean_obj_tag(v_as_x27_2806_) == 0)
{
lean_dec(v_a_2805_);
return v_b_2807_;
}
else
{
lean_object* v_head_2808_; lean_object* v_tail_2809_; lean_object* v_times_2810_; lean_object* v___x_2811_; 
v_head_2808_ = lean_ctor_get(v_as_x27_2806_, 0);
v_tail_2809_ = lean_ctor_get(v_as_x27_2806_, 1);
v_times_2810_ = lean_obj_once(&lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1, &lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1_once, _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1);
lean_inc(v_head_2808_);
lean_inc(v_a_2805_);
v___x_2811_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(v_ph_2804_, v_a_2805_, v_head_2808_, v_times_2810_, v_b_2807_);
v_as_x27_2806_ = v_tail_2809_;
v_b_2807_ = v___x_2811_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___boxed(lean_object* v_ph_2813_, lean_object* v_a_2814_, lean_object* v_as_x27_2815_, lean_object* v_b_2816_){
_start:
{
lean_object* v_res_2817_; 
v_res_2817_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(v_ph_2813_, v_a_2814_, v_as_x27_2815_, v_b_2816_);
lean_dec(v_as_x27_2815_);
lean_dec_ref(v_ph_2813_);
return v_res_2817_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(lean_object* v_ph_2818_, lean_object* v_as_x27_2819_, lean_object* v_b_2820_){
_start:
{
if (lean_obj_tag(v_as_x27_2819_) == 0)
{
return v_b_2820_;
}
else
{
lean_object* v_head_2821_; lean_object* v_tail_2822_; lean_object* v___x_2823_; lean_object* v___x_2824_; 
v_head_2821_ = lean_ctor_get(v_as_x27_2819_, 0);
v_tail_2822_ = lean_ctor_get(v_as_x27_2819_, 1);
lean_inc_n(v_head_2821_, 2);
v___x_2823_ = l_List_range(v_head_2821_);
v___x_2824_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(v_ph_2818_, v_head_2821_, v___x_2823_, v_b_2820_);
lean_dec(v___x_2823_);
v_as_x27_2819_ = v_tail_2822_;
v_b_2820_ = v___x_2824_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg___boxed(lean_object* v_ph_2826_, lean_object* v_as_x27_2827_, lean_object* v_b_2828_){
_start:
{
lean_object* v_res_2829_; 
v_res_2829_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(v_ph_2826_, v_as_x27_2827_, v_b_2828_);
lean_dec(v_as_x27_2827_);
lean_dec_ref(v_ph_2826_);
return v_res_2829_;
}
}
static lean_object* _init_lp_choreo_Choreo_tightestPair___closed__0(void){
_start:
{
lean_object* v___x_2830_; lean_object* v___x_2831_; 
v___x_2830_ = lean_cstr_to_nat("1000000000000");
v___x_2831_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_2830_);
return v___x_2831_;
}
}
static lean_object* _init_lp_choreo_Choreo_tightestPair___closed__1(void){
_start:
{
lean_object* v___x_2832_; lean_object* v___x_2833_; lean_object* v___x_2834_; 
v___x_2832_ = lean_obj_once(&lp_choreo_Choreo_tightestPair___closed__0, &lp_choreo_Choreo_tightestPair___closed__0_once, _init_lp_choreo_Choreo_tightestPair___closed__0);
v___x_2833_ = lean_unsigned_to_nat(0u);
v___x_2834_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2834_, 0, v___x_2833_);
lean_ctor_set(v___x_2834_, 1, v___x_2832_);
return v___x_2834_;
}
}
static lean_object* _init_lp_choreo_Choreo_tightestPair___closed__2(void){
_start:
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v_best_2837_; 
v___x_2835_ = lean_obj_once(&lp_choreo_Choreo_tightestPair___closed__1, &lp_choreo_Choreo_tightestPair___closed__1_once, _init_lp_choreo_Choreo_tightestPair___closed__1);
v___x_2836_ = lean_unsigned_to_nat(1u);
v_best_2837_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_best_2837_, 0, v___x_2836_);
lean_ctor_set(v_best_2837_, 1, v___x_2835_);
return v_best_2837_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_tightestPair(lean_object* v_c_2838_, lean_object* v_ph_2839_){
_start:
{
lean_object* v_n_2840_; lean_object* v_best_2841_; lean_object* v___x_2842_; lean_object* v___x_2843_; 
v_n_2840_ = lean_ctor_get(v_c_2838_, 0);
lean_inc(v_n_2840_);
lean_dec_ref(v_c_2838_);
v_best_2841_ = lean_obj_once(&lp_choreo_Choreo_tightestPair___closed__2, &lp_choreo_Choreo_tightestPair___closed__2_once, _init_lp_choreo_Choreo_tightestPair___closed__2);
v___x_2842_ = l_List_range(v_n_2840_);
v___x_2843_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(v_ph_2839_, v___x_2842_, v_best_2841_);
lean_dec(v___x_2842_);
return v___x_2843_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_tightestPair___boxed(lean_object* v_c_2844_, lean_object* v_ph_2845_){
_start:
{
lean_object* v_res_2846_; 
v_res_2846_ = lp_choreo_Choreo_tightestPair(v_c_2844_, v_ph_2845_);
lean_dec_ref(v_ph_2845_);
return v_res_2846_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1(lean_object* v_ph_2847_, lean_object* v_a_2848_, lean_object* v_a_2849_, lean_object* v_as_2850_, lean_object* v_as_x27_2851_, lean_object* v_b_2852_, lean_object* v_a_2853_){
_start:
{
lean_object* v___x_2854_; 
v___x_2854_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(v_ph_2847_, v_a_2848_, v_a_2849_, v_as_x27_2851_, v_b_2852_);
return v___x_2854_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___boxed(lean_object* v_ph_2855_, lean_object* v_a_2856_, lean_object* v_a_2857_, lean_object* v_as_2858_, lean_object* v_as_x27_2859_, lean_object* v_b_2860_, lean_object* v_a_2861_){
_start:
{
lean_object* v_res_2862_; 
v_res_2862_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1(v_ph_2855_, v_a_2856_, v_a_2857_, v_as_2858_, v_as_x27_2859_, v_b_2860_, v_a_2861_);
lean_dec(v_as_x27_2859_);
lean_dec(v_as_2858_);
lean_dec_ref(v_ph_2855_);
return v_res_2862_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2(lean_object* v_ph_2863_, lean_object* v_a_2864_, lean_object* v_as_2865_, lean_object* v_as_x27_2866_, lean_object* v_b_2867_, lean_object* v_a_2868_){
_start:
{
lean_object* v___x_2869_; 
v___x_2869_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(v_ph_2863_, v_a_2864_, v_as_x27_2866_, v_b_2867_);
return v___x_2869_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___boxed(lean_object* v_ph_2870_, lean_object* v_a_2871_, lean_object* v_as_2872_, lean_object* v_as_x27_2873_, lean_object* v_b_2874_, lean_object* v_a_2875_){
_start:
{
lean_object* v_res_2876_; 
v_res_2876_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2(v_ph_2870_, v_a_2871_, v_as_2872_, v_as_x27_2873_, v_b_2874_, v_a_2875_);
lean_dec(v_as_x27_2873_);
lean_dec(v_as_2872_);
lean_dec_ref(v_ph_2870_);
return v_res_2876_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3(lean_object* v_ph_2877_, lean_object* v_as_2878_, lean_object* v_as_x27_2879_, lean_object* v_b_2880_, lean_object* v_a_2881_){
_start:
{
lean_object* v___x_2882_; 
v___x_2882_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(v_ph_2877_, v_as_x27_2879_, v_b_2880_);
return v___x_2882_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___boxed(lean_object* v_ph_2883_, lean_object* v_as_2884_, lean_object* v_as_x27_2885_, lean_object* v_b_2886_, lean_object* v_a_2887_){
_start:
{
lean_object* v_res_2888_; 
v_res_2888_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3(v_ph_2883_, v_as_2884_, v_as_x27_2885_, v_b_2886_, v_a_2887_);
lean_dec(v_as_x27_2885_);
lean_dec(v_as_2884_);
lean_dec_ref(v_ph_2883_);
return v_res_2888_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1(lean_object* v_a_2892_, lean_object* v_a_2893_){
_start:
{
if (lean_obj_tag(v_a_2892_) == 0)
{
lean_object* v___x_2894_; 
v___x_2894_ = l_List_reverse___redArg(v_a_2893_);
return v___x_2894_;
}
else
{
lean_object* v_head_2895_; lean_object* v_tail_2896_; lean_object* v___x_2898_; uint8_t v_isShared_2899_; uint8_t v_isSharedCheck_2922_; 
v_head_2895_ = lean_ctor_get(v_a_2892_, 0);
v_tail_2896_ = lean_ctor_get(v_a_2892_, 1);
v_isSharedCheck_2922_ = !lean_is_exclusive(v_a_2892_);
if (v_isSharedCheck_2922_ == 0)
{
v___x_2898_ = v_a_2892_;
v_isShared_2899_ = v_isSharedCheck_2922_;
goto v_resetjp_2897_;
}
else
{
lean_inc(v_tail_2896_);
lean_inc(v_head_2895_);
lean_dec(v_a_2892_);
v___x_2898_ = lean_box(0);
v_isShared_2899_ = v_isSharedCheck_2922_;
goto v_resetjp_2897_;
}
v_resetjp_2897_:
{
lean_object* v___x_2900_; lean_object* v___x_2901_; lean_object* v___x_2902_; lean_object* v___x_2903_; lean_object* v___x_2904_; lean_object* v___x_2905_; lean_object* v___x_2906_; lean_object* v___x_2907_; lean_object* v___x_2908_; lean_object* v___x_2909_; lean_object* v___x_2910_; lean_object* v___x_2911_; lean_object* v___x_2912_; lean_object* v___x_2913_; lean_object* v___x_2915_; 
v___x_2900_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__0));
v___x_2901_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__1));
v___x_2902_ = lean_box(0);
lean_inc(v_head_2895_);
v___x_2903_ = lp_choreo_Choreo_certName(v_head_2895_);
v___x_2904_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2904_, 0, v___x_2903_);
v___x_2905_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2905_, 0, v___x_2900_);
lean_ctor_set(v___x_2905_, 1, v___x_2904_);
v___x_2906_ = lp_choreo_Choreo_certDepth(v_head_2895_);
v___x_2907_ = l_Lean_JsonNumber_fromNat(v___x_2906_);
v___x_2908_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2908_, 0, v___x_2907_);
v___x_2909_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2909_, 0, v___x_2901_);
lean_ctor_set(v___x_2909_, 1, v___x_2908_);
v___x_2910_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__2));
v___x_2911_ = lp_choreo_Choreo_certL(v_head_2895_);
v___x_2912_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2912_, 0, v___x_2911_);
v___x_2913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2913_, 0, v___x_2910_);
lean_ctor_set(v___x_2913_, 1, v___x_2912_);
if (v_isShared_2899_ == 0)
{
lean_ctor_set(v___x_2898_, 1, v___x_2902_);
lean_ctor_set(v___x_2898_, 0, v___x_2913_);
v___x_2915_ = v___x_2898_;
goto v_reusejp_2914_;
}
else
{
lean_object* v_reuseFailAlloc_2921_; 
v_reuseFailAlloc_2921_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2921_, 0, v___x_2913_);
lean_ctor_set(v_reuseFailAlloc_2921_, 1, v___x_2902_);
v___x_2915_ = v_reuseFailAlloc_2921_;
goto v_reusejp_2914_;
}
v_reusejp_2914_:
{
lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; 
v___x_2916_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2916_, 0, v___x_2909_);
lean_ctor_set(v___x_2916_, 1, v___x_2915_);
v___x_2917_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2917_, 0, v___x_2905_);
lean_ctor_set(v___x_2917_, 1, v___x_2916_);
v___x_2918_ = l_Lean_Json_mkObj(v___x_2917_);
lean_dec_ref_known(v___x_2917_, 2);
v___x_2919_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2919_, 0, v___x_2918_);
lean_ctor_set(v___x_2919_, 1, v_a_2893_);
v_a_2892_ = v_tail_2896_;
v_a_2893_ = v___x_2919_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__3(lean_object* v_a_2923_, lean_object* v_a_2924_){
_start:
{
if (lean_obj_tag(v_a_2923_) == 0)
{
lean_object* v___x_2925_; 
v___x_2925_ = l_List_reverse___redArg(v_a_2924_);
return v___x_2925_;
}
else
{
lean_object* v_head_2926_; 
v_head_2926_ = lean_ctor_get(v_a_2923_, 0);
if (lean_obj_tag(v_head_2926_) == 1)
{
lean_object* v_tail_2927_; lean_object* v___x_2929_; uint8_t v_isShared_2930_; uint8_t v_isSharedCheck_2935_; 
lean_inc_ref(v_head_2926_);
v_tail_2927_ = lean_ctor_get(v_a_2923_, 1);
v_isSharedCheck_2935_ = !lean_is_exclusive(v_a_2923_);
if (v_isSharedCheck_2935_ == 0)
{
lean_object* v_unused_2936_; 
v_unused_2936_ = lean_ctor_get(v_a_2923_, 0);
lean_dec(v_unused_2936_);
v___x_2929_ = v_a_2923_;
v_isShared_2930_ = v_isSharedCheck_2935_;
goto v_resetjp_2928_;
}
else
{
lean_inc(v_tail_2927_);
lean_dec(v_a_2923_);
v___x_2929_ = lean_box(0);
v_isShared_2930_ = v_isSharedCheck_2935_;
goto v_resetjp_2928_;
}
v_resetjp_2928_:
{
lean_object* v___x_2932_; 
if (v_isShared_2930_ == 0)
{
lean_ctor_set(v___x_2929_, 1, v_a_2924_);
v___x_2932_ = v___x_2929_;
goto v_reusejp_2931_;
}
else
{
lean_object* v_reuseFailAlloc_2934_; 
v_reuseFailAlloc_2934_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2934_, 0, v_head_2926_);
lean_ctor_set(v_reuseFailAlloc_2934_, 1, v_a_2924_);
v___x_2932_ = v_reuseFailAlloc_2934_;
goto v_reusejp_2931_;
}
v_reusejp_2931_:
{
v_a_2923_ = v_tail_2927_;
v_a_2924_ = v___x_2932_;
goto _start;
}
}
}
else
{
lean_object* v_tail_2937_; 
v_tail_2937_ = lean_ctor_get(v_a_2923_, 1);
lean_inc(v_tail_2937_);
lean_dec_ref_known(v_a_2923_, 2);
v_a_2923_ = v_tail_2937_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__2(lean_object* v_a_2939_, lean_object* v_a_2940_){
_start:
{
if (lean_obj_tag(v_a_2939_) == 0)
{
lean_object* v___x_2941_; 
v___x_2941_ = l_List_reverse___redArg(v_a_2940_);
return v___x_2941_;
}
else
{
lean_object* v_head_2942_; 
v_head_2942_ = lean_ctor_get(v_a_2939_, 0);
if (lean_obj_tag(v_head_2942_) == 2)
{
lean_object* v_tail_2943_; lean_object* v___x_2945_; uint8_t v_isShared_2946_; uint8_t v_isSharedCheck_2951_; 
lean_inc_ref(v_head_2942_);
v_tail_2943_ = lean_ctor_get(v_a_2939_, 1);
v_isSharedCheck_2951_ = !lean_is_exclusive(v_a_2939_);
if (v_isSharedCheck_2951_ == 0)
{
lean_object* v_unused_2952_; 
v_unused_2952_ = lean_ctor_get(v_a_2939_, 0);
lean_dec(v_unused_2952_);
v___x_2945_ = v_a_2939_;
v_isShared_2946_ = v_isSharedCheck_2951_;
goto v_resetjp_2944_;
}
else
{
lean_inc(v_tail_2943_);
lean_dec(v_a_2939_);
v___x_2945_ = lean_box(0);
v_isShared_2946_ = v_isSharedCheck_2951_;
goto v_resetjp_2944_;
}
v_resetjp_2944_:
{
lean_object* v___x_2948_; 
if (v_isShared_2946_ == 0)
{
lean_ctor_set(v___x_2945_, 1, v_a_2940_);
v___x_2948_ = v___x_2945_;
goto v_reusejp_2947_;
}
else
{
lean_object* v_reuseFailAlloc_2950_; 
v_reuseFailAlloc_2950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2950_, 0, v_head_2942_);
lean_ctor_set(v_reuseFailAlloc_2950_, 1, v_a_2940_);
v___x_2948_ = v_reuseFailAlloc_2950_;
goto v_reusejp_2947_;
}
v_reusejp_2947_:
{
v_a_2939_ = v_tail_2943_;
v_a_2940_ = v___x_2948_;
goto _start;
}
}
}
else
{
lean_object* v_tail_2953_; 
v_tail_2953_ = lean_ctor_get(v_a_2939_, 1);
lean_inc(v_tail_2953_);
lean_dec_ref_known(v_a_2939_, 2);
v_a_2939_ = v_tail_2953_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0(lean_object* v_a_2958_, lean_object* v_a_2959_){
_start:
{
if (lean_obj_tag(v_a_2958_) == 0)
{
lean_object* v___x_2960_; 
v___x_2960_ = l_List_reverse___redArg(v_a_2959_);
return v___x_2960_;
}
else
{
lean_object* v_head_2961_; lean_object* v_tail_2962_; lean_object* v___x_2964_; uint8_t v_isShared_2965_; uint8_t v_isSharedCheck_2987_; 
v_head_2961_ = lean_ctor_get(v_a_2958_, 0);
v_tail_2962_ = lean_ctor_get(v_a_2958_, 1);
v_isSharedCheck_2987_ = !lean_is_exclusive(v_a_2958_);
if (v_isSharedCheck_2987_ == 0)
{
v___x_2964_ = v_a_2958_;
v_isShared_2965_ = v_isSharedCheck_2987_;
goto v_resetjp_2963_;
}
else
{
lean_inc(v_tail_2962_);
lean_inc(v_head_2961_);
lean_dec(v_a_2958_);
v___x_2964_ = lean_box(0);
v_isShared_2965_ = v_isSharedCheck_2987_;
goto v_resetjp_2963_;
}
v_resetjp_2963_:
{
lean_object* v_X_2966_; lean_object* v_Y_2967_; lean_object* v_W_2968_; lean_object* v___x_2969_; lean_object* v___x_2970_; lean_object* v___x_2971_; lean_object* v___x_2972_; lean_object* v___x_2973_; lean_object* v___x_2974_; lean_object* v___x_2975_; lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2978_; lean_object* v___x_2980_; 
v_X_2966_ = lean_ctor_get(v_head_2961_, 0);
lean_inc(v_X_2966_);
v_Y_2967_ = lean_ctor_get(v_head_2961_, 1);
lean_inc(v_Y_2967_);
v_W_2968_ = lean_ctor_get(v_head_2961_, 2);
lean_inc(v_W_2968_);
lean_dec(v_head_2961_);
v___x_2969_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__0));
v___x_2970_ = lp_choreo_Choreo_jPoly(v_X_2966_);
v___x_2971_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2971_, 0, v___x_2969_);
lean_ctor_set(v___x_2971_, 1, v___x_2970_);
v___x_2972_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__1));
v___x_2973_ = lp_choreo_Choreo_jPoly(v_Y_2967_);
v___x_2974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2974_, 0, v___x_2972_);
lean_ctor_set(v___x_2974_, 1, v___x_2973_);
v___x_2975_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__2));
v___x_2976_ = lp_choreo_Choreo_jPoly(v_W_2968_);
v___x_2977_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2975_);
lean_ctor_set(v___x_2977_, 1, v___x_2976_);
v___x_2978_ = lean_box(0);
if (v_isShared_2965_ == 0)
{
lean_ctor_set(v___x_2964_, 1, v___x_2978_);
lean_ctor_set(v___x_2964_, 0, v___x_2977_);
v___x_2980_ = v___x_2964_;
goto v_reusejp_2979_;
}
else
{
lean_object* v_reuseFailAlloc_2986_; 
v_reuseFailAlloc_2986_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2986_, 0, v___x_2977_);
lean_ctor_set(v_reuseFailAlloc_2986_, 1, v___x_2978_);
v___x_2980_ = v_reuseFailAlloc_2986_;
goto v_reusejp_2979_;
}
v_reusejp_2979_:
{
lean_object* v___x_2981_; lean_object* v___x_2982_; lean_object* v___x_2983_; lean_object* v___x_2984_; 
v___x_2981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2981_, 0, v___x_2974_);
lean_ctor_set(v___x_2981_, 1, v___x_2980_);
v___x_2982_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2982_, 0, v___x_2971_);
lean_ctor_set(v___x_2982_, 1, v___x_2981_);
v___x_2983_ = l_Lean_Json_mkObj(v___x_2982_);
lean_dec_ref_known(v___x_2982_, 2);
v___x_2984_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2984_, 0, v___x_2983_);
lean_ctor_set(v___x_2984_, 1, v_a_2959_);
v_a_2958_ = v_tail_2962_;
v_a_2959_ = v___x_2984_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseJson(lean_object* v_c_3003_, lean_object* v_names_3004_, lean_object* v_label_3005_, lean_object* v_kind_3006_, lean_object* v_ph_3007_, lean_object* v_k_3008_){
_start:
{
lean_object* v___x_3009_; lean_object* v_snd_3010_; lean_object* v_fst_3011_; lean_object* v___x_3013_; uint8_t v_isShared_3014_; uint8_t v_isSharedCheck_3142_; 
lean_inc_ref(v_c_3003_);
v___x_3009_ = lp_choreo_Choreo_tightestPair(v_c_3003_, v_ph_3007_);
v_snd_3010_ = lean_ctor_get(v___x_3009_, 1);
v_fst_3011_ = lean_ctor_get(v___x_3009_, 0);
v_isSharedCheck_3142_ = !lean_is_exclusive(v___x_3009_);
if (v_isSharedCheck_3142_ == 0)
{
v___x_3013_ = v___x_3009_;
v_isShared_3014_ = v_isSharedCheck_3142_;
goto v_resetjp_3012_;
}
else
{
lean_inc(v_snd_3010_);
lean_inc(v_fst_3011_);
lean_dec(v___x_3009_);
v___x_3013_ = lean_box(0);
v_isShared_3014_ = v_isSharedCheck_3142_;
goto v_resetjp_3012_;
}
v_resetjp_3012_:
{
lean_object* v_fst_3015_; lean_object* v_snd_3016_; lean_object* v___x_3018_; uint8_t v_isShared_3019_; uint8_t v_isSharedCheck_3141_; 
v_fst_3015_ = lean_ctor_get(v_snd_3010_, 0);
v_snd_3016_ = lean_ctor_get(v_snd_3010_, 1);
v_isSharedCheck_3141_ = !lean_is_exclusive(v_snd_3010_);
if (v_isSharedCheck_3141_ == 0)
{
v___x_3018_ = v_snd_3010_;
v_isShared_3019_ = v_isSharedCheck_3141_;
goto v_resetjp_3017_;
}
else
{
lean_inc(v_snd_3016_);
lean_inc(v_fst_3015_);
lean_dec(v_snd_3010_);
v___x_3018_ = lean_box(0);
v_isShared_3019_ = v_isSharedCheck_3141_;
goto v_resetjp_3017_;
}
v_resetjp_3017_:
{
lean_object* v_t0_3020_; lean_object* v_t1_3021_; lean_object* v_paths_3022_; lean_object* v_bounds_3023_; lean_object* v_certs_3024_; lean_object* v_cert_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v_dmin_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3035_; 
v_t0_3020_ = lean_ctor_get(v_ph_3007_, 0);
v_t1_3021_ = lean_ctor_get(v_ph_3007_, 1);
v_paths_3022_ = lean_ctor_get(v_ph_3007_, 2);
v_bounds_3023_ = lean_ctor_get(v_ph_3007_, 3);
v_certs_3024_ = lean_ctor_get(v_ph_3007_, 4);
lean_inc(v_certs_3024_);
v_cert_3025_ = lp_choreo_Choreo_Phase_pairCert(v_ph_3007_, v_fst_3011_, v_fst_3015_);
lean_inc_n(v_fst_3011_, 2);
v___x_3026_ = l_Lean_JsonNumber_fromNat(v_fst_3011_);
lean_inc_n(v_fst_3015_, 2);
v___x_3027_ = l_Lean_JsonNumber_fromNat(v_fst_3015_);
lean_inc_ref(v_names_3004_);
v___x_3028_ = lean_apply_1(v_names_3004_, v_fst_3011_);
v_dmin_3029_ = lean_ctor_get(v_c_3003_, 1);
lean_inc(v_dmin_3029_);
v___x_3030_ = lean_apply_1(v_names_3004_, v_fst_3015_);
v___x_3031_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__0));
v___x_3032_ = l_Lean_JsonNumber_fromNat(v_k_3008_);
v___x_3033_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3033_, 0, v___x_3032_);
if (v_isShared_3019_ == 0)
{
lean_ctor_set(v___x_3018_, 1, v___x_3033_);
lean_ctor_set(v___x_3018_, 0, v___x_3031_);
v___x_3035_ = v___x_3018_;
goto v_reusejp_3034_;
}
else
{
lean_object* v_reuseFailAlloc_3140_; 
v_reuseFailAlloc_3140_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3140_, 0, v___x_3031_);
lean_ctor_set(v_reuseFailAlloc_3140_, 1, v___x_3033_);
v___x_3035_ = v_reuseFailAlloc_3140_;
goto v_reusejp_3034_;
}
v_reusejp_3034_:
{
lean_object* v___x_3036_; lean_object* v___x_3037_; lean_object* v___x_3038_; lean_object* v___x_3040_; 
v___x_3036_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__1));
lean_inc(v_t0_3020_);
v___x_3037_ = l_Lean_JsonNumber_fromNat(v_t0_3020_);
v___x_3038_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3037_);
if (v_isShared_3014_ == 0)
{
lean_ctor_set(v___x_3013_, 1, v___x_3038_);
lean_ctor_set(v___x_3013_, 0, v___x_3036_);
v___x_3040_ = v___x_3013_;
goto v_reusejp_3039_;
}
else
{
lean_object* v_reuseFailAlloc_3139_; 
v_reuseFailAlloc_3139_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3139_, 0, v___x_3036_);
lean_ctor_set(v_reuseFailAlloc_3139_, 1, v___x_3038_);
v___x_3040_ = v_reuseFailAlloc_3139_;
goto v_reusejp_3039_;
}
v_reusejp_3039_:
{
lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; lean_object* v___x_3047_; lean_object* v___x_3048_; lean_object* v___x_3049_; lean_object* v___x_3050_; lean_object* v___x_3051_; lean_object* v___x_3052_; lean_object* v___x_3053_; lean_object* v___x_3054_; lean_object* v___x_3055_; lean_object* v___x_3056_; lean_object* v___x_3057_; lean_object* v___x_3058_; lean_object* v___x_3059_; lean_object* v___x_3060_; uint8_t v___x_3061_; lean_object* v___x_3062_; lean_object* v___x_3063_; lean_object* v___x_3064_; lean_object* v___x_3065_; lean_object* v___x_3066_; lean_object* v___x_3067_; lean_object* v___x_3068_; lean_object* v___x_3069_; lean_object* v___x_3070_; lean_object* v___x_3071_; lean_object* v___x_3072_; lean_object* v___x_3073_; lean_object* v___x_3074_; lean_object* v___x_3075_; lean_object* v___x_3076_; lean_object* v___x_3077_; double v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3091_; lean_object* v___x_3092_; lean_object* v___x_3093_; lean_object* v___x_3094_; lean_object* v___x_3095_; lean_object* v___x_3096_; lean_object* v___x_3097_; lean_object* v___x_3098_; lean_object* v___x_3099_; lean_object* v___x_3100_; lean_object* v___x_3101_; lean_object* v___x_3102_; lean_object* v___x_3103_; lean_object* v___x_3104_; lean_object* v___x_3105_; lean_object* v___x_3106_; lean_object* v___x_3107_; lean_object* v___x_3108_; lean_object* v___x_3109_; lean_object* v___x_3110_; lean_object* v___x_3111_; lean_object* v___x_3112_; lean_object* v___x_3113_; lean_object* v___x_3114_; lean_object* v___x_3115_; lean_object* v___x_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; 
v___x_3041_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__2));
lean_inc(v_t1_3021_);
v___x_3042_ = l_Lean_JsonNumber_fromNat(v_t1_3021_);
v___x_3043_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3042_);
v___x_3044_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3041_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__3));
v___x_3046_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3046_, 0, v_label_3005_);
v___x_3047_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3047_, 0, v___x_3045_);
lean_ctor_set(v___x_3047_, 1, v___x_3046_);
v___x_3048_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
v___x_3049_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3049_, 0, v_kind_3006_);
v___x_3050_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3050_, 0, v___x_3048_);
lean_ctor_set(v___x_3050_, 1, v___x_3049_);
v___x_3051_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__4));
lean_inc_ref(v_bounds_3023_);
v___x_3052_ = lp_choreo_Choreo_jRect(v_bounds_3023_);
v___x_3053_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3053_, 0, v___x_3051_);
lean_ctor_set(v___x_3053_, 1, v___x_3052_);
v___x_3054_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__5));
v___x_3055_ = lean_box(0);
lean_inc(v_paths_3022_);
v___x_3056_ = lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0(v_paths_3022_, v___x_3055_);
v___x_3057_ = lean_array_mk(v___x_3056_);
v___x_3058_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3058_, 0, v___x_3057_);
v___x_3059_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3059_, 0, v___x_3054_);
lean_ctor_set(v___x_3059_, 1, v___x_3058_);
v___x_3060_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
lean_inc_ref(v_ph_3007_);
v___x_3061_ = lp_choreo_Choreo_Phase_check(v_c_3003_, v_ph_3007_);
v___x_3062_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3062_, 0, v___x_3061_);
v___x_3063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3063_, 0, v___x_3060_);
lean_ctor_set(v___x_3063_, 1, v___x_3062_);
v___x_3064_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__7));
v___x_3065_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
v___x_3066_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3066_, 0, v___x_3026_);
v___x_3067_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3067_, 0, v___x_3065_);
lean_ctor_set(v___x_3067_, 1, v___x_3066_);
v___x_3068_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
v___x_3069_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3069_, 0, v___x_3027_);
v___x_3070_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3070_, 0, v___x_3068_);
lean_ctor_set(v___x_3070_, 1, v___x_3069_);
v___x_3071_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__8));
v___x_3072_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__9));
v___x_3073_ = lean_string_append(v___x_3028_, v___x_3072_);
v___x_3074_ = lean_string_append(v___x_3073_, v___x_3030_);
lean_dec_ref(v___x_3030_);
v___x_3075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3075_, 0, v___x_3074_);
v___x_3076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3076_, 0, v___x_3071_);
lean_ctor_set(v___x_3076_, 1, v___x_3075_);
v___x_3077_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__11));
v___x_3078_ = lp_choreo_Choreo_distFloat(v_snd_3016_);
v___x_3079_ = l_Lean_Float_toJson(v___x_3078_);
v___x_3080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3080_, 0, v___x_3077_);
lean_ctor_set(v___x_3080_, 1, v___x_3079_);
v___x_3081_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__0));
lean_inc_ref(v_cert_3025_);
v___x_3082_ = lp_choreo_Choreo_certName(v_cert_3025_);
v___x_3083_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3083_, 0, v___x_3082_);
v___x_3084_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3084_, 0, v___x_3081_);
lean_ctor_set(v___x_3084_, 1, v___x_3083_);
v___x_3085_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__1));
v___x_3086_ = lp_choreo_Choreo_certDepth(v_cert_3025_);
lean_dec_ref(v_cert_3025_);
v___x_3087_ = l_Lean_JsonNumber_fromNat(v___x_3086_);
v___x_3088_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3088_, 0, v___x_3087_);
v___x_3089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3089_, 0, v___x_3085_);
lean_ctor_set(v___x_3089_, 1, v___x_3088_);
v___x_3090_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__10));
v___x_3091_ = lp_choreo_Choreo_Phase_path(v_ph_3007_, v_fst_3011_);
v___x_3092_ = lp_choreo_Choreo_Phase_path(v_ph_3007_, v_fst_3015_);
lean_dec_ref(v_ph_3007_);
v___x_3093_ = lp_choreo_Choreo_clearPoly(v___x_3091_, v___x_3092_, v_dmin_3029_);
lean_dec(v_dmin_3029_);
v___x_3094_ = lp_choreo_Choreo_jPoly(v___x_3093_);
v___x_3095_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3095_, 0, v___x_3090_);
lean_ctor_set(v___x_3095_, 1, v___x_3094_);
v___x_3096_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3096_, 0, v___x_3095_);
lean_ctor_set(v___x_3096_, 1, v___x_3055_);
v___x_3097_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3097_, 0, v___x_3089_);
lean_ctor_set(v___x_3097_, 1, v___x_3096_);
v___x_3098_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3098_, 0, v___x_3084_);
lean_ctor_set(v___x_3098_, 1, v___x_3097_);
v___x_3099_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3099_, 0, v___x_3080_);
lean_ctor_set(v___x_3099_, 1, v___x_3098_);
v___x_3100_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3100_, 0, v___x_3076_);
lean_ctor_set(v___x_3100_, 1, v___x_3099_);
v___x_3101_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3101_, 0, v___x_3070_);
lean_ctor_set(v___x_3101_, 1, v___x_3100_);
v___x_3102_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3102_, 0, v___x_3067_);
lean_ctor_set(v___x_3102_, 1, v___x_3101_);
v___x_3103_ = l_Lean_Json_mkObj(v___x_3102_);
lean_dec_ref_known(v___x_3102_, 2);
v___x_3104_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3104_, 0, v___x_3064_);
lean_ctor_set(v___x_3104_, 1, v___x_3103_);
v___x_3105_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__11));
lean_inc_n(v_certs_3024_, 2);
v___x_3106_ = lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1(v_certs_3024_, v___x_3055_);
v___x_3107_ = lean_array_mk(v___x_3106_);
v___x_3108_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3108_, 0, v___x_3107_);
v___x_3109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3109_, 0, v___x_3105_);
lean_ctor_set(v___x_3109_, 1, v___x_3108_);
v___x_3110_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__12));
v___x_3111_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__13));
v___x_3112_ = lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__2(v_certs_3024_, v___x_3055_);
v___x_3113_ = l_List_lengthTR___redArg(v___x_3112_);
lean_dec(v___x_3112_);
v___x_3114_ = l_Lean_JsonNumber_fromNat(v___x_3113_);
v___x_3115_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3115_, 0, v___x_3114_);
v___x_3116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3116_, 0, v___x_3111_);
lean_ctor_set(v___x_3116_, 1, v___x_3115_);
v___x_3117_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__14));
v___x_3118_ = lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__3(v_certs_3024_, v___x_3055_);
v___x_3119_ = l_List_lengthTR___redArg(v___x_3118_);
lean_dec(v___x_3118_);
v___x_3120_ = l_Lean_JsonNumber_fromNat(v___x_3119_);
v___x_3121_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3117_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3123_, 0, v___x_3122_);
lean_ctor_set(v___x_3123_, 1, v___x_3055_);
v___x_3124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3124_, 0, v___x_3116_);
lean_ctor_set(v___x_3124_, 1, v___x_3123_);
v___x_3125_ = l_Lean_Json_mkObj(v___x_3124_);
lean_dec_ref_known(v___x_3124_, 2);
v___x_3126_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3110_);
lean_ctor_set(v___x_3126_, 1, v___x_3125_);
v___x_3127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3126_);
lean_ctor_set(v___x_3127_, 1, v___x_3055_);
v___x_3128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3128_, 0, v___x_3109_);
lean_ctor_set(v___x_3128_, 1, v___x_3127_);
v___x_3129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3129_, 0, v___x_3104_);
lean_ctor_set(v___x_3129_, 1, v___x_3128_);
v___x_3130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3130_, 0, v___x_3063_);
lean_ctor_set(v___x_3130_, 1, v___x_3129_);
v___x_3131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3059_);
lean_ctor_set(v___x_3131_, 1, v___x_3130_);
v___x_3132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3053_);
lean_ctor_set(v___x_3132_, 1, v___x_3131_);
v___x_3133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3133_, 0, v___x_3050_);
lean_ctor_set(v___x_3133_, 1, v___x_3132_);
v___x_3134_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3134_, 0, v___x_3047_);
lean_ctor_set(v___x_3134_, 1, v___x_3133_);
v___x_3135_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3044_);
lean_ctor_set(v___x_3135_, 1, v___x_3134_);
v___x_3136_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3040_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v___x_3137_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3137_, 0, v___x_3035_);
lean_ctor_set(v___x_3137_, 1, v___x_3136_);
v___x_3138_ = l_Lean_Json_mkObj(v___x_3137_);
lean_dec_ref_known(v___x_3137_, 2);
return v___x_3138_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(lean_object* v_fst_3143_, lean_object* v_t_3144_, lean_object* v_a_3145_, lean_object* v_a_3146_){
_start:
{
if (lean_obj_tag(v_a_3145_) == 0)
{
lean_object* v___x_3147_; 
lean_dec_ref(v_t_3144_);
v___x_3147_ = l_List_reverse___redArg(v_a_3146_);
return v___x_3147_;
}
else
{
lean_object* v_head_3148_; lean_object* v_tail_3149_; lean_object* v___x_3151_; uint8_t v_isShared_3152_; uint8_t v_isSharedCheck_3169_; 
v_head_3148_ = lean_ctor_get(v_a_3145_, 0);
v_tail_3149_ = lean_ctor_get(v_a_3145_, 1);
v_isSharedCheck_3169_ = !lean_is_exclusive(v_a_3145_);
if (v_isSharedCheck_3169_ == 0)
{
v___x_3151_ = v_a_3145_;
v_isShared_3152_ = v_isSharedCheck_3169_;
goto v_resetjp_3150_;
}
else
{
lean_inc(v_tail_3149_);
lean_inc(v_head_3148_);
lean_dec(v_a_3145_);
v___x_3151_ = lean_box(0);
v_isShared_3152_ = v_isSharedCheck_3169_;
goto v_resetjp_3150_;
}
v_resetjp_3150_:
{
lean_object* v___x_3153_; lean_object* v___x_3154_; double v___x_3155_; lean_object* v___x_3156_; lean_object* v___x_3157_; double v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3166_; 
v___x_3153_ = lp_choreo_Choreo_Phase_path(v_fst_3143_, v_head_3148_);
lean_inc_ref_n(v_t_3144_, 2);
lean_inc_ref(v___x_3153_);
v___x_3154_ = lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(v___x_3153_, v_t_3144_);
v___x_3155_ = lp_choreo_Choreo_ratFloat(v___x_3154_);
v___x_3156_ = l_Lean_Float_toJson(v___x_3155_);
v___x_3157_ = lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(v___x_3153_, v_t_3144_);
v___x_3158_ = lp_choreo_Choreo_ratFloat(v___x_3157_);
v___x_3159_ = l_Lean_Float_toJson(v___x_3158_);
v___x_3160_ = lean_unsigned_to_nat(2u);
v___x_3161_ = lean_mk_empty_array_with_capacity(v___x_3160_);
v___x_3162_ = lean_array_push(v___x_3161_, v___x_3156_);
v___x_3163_ = lean_array_push(v___x_3162_, v___x_3159_);
v___x_3164_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3163_);
if (v_isShared_3152_ == 0)
{
lean_ctor_set(v___x_3151_, 1, v_a_3146_);
lean_ctor_set(v___x_3151_, 0, v___x_3164_);
v___x_3166_ = v___x_3151_;
goto v_reusejp_3165_;
}
else
{
lean_object* v_reuseFailAlloc_3168_; 
v_reuseFailAlloc_3168_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3168_, 0, v___x_3164_);
lean_ctor_set(v_reuseFailAlloc_3168_, 1, v_a_3146_);
v___x_3166_ = v_reuseFailAlloc_3168_;
goto v_reusejp_3165_;
}
v_reusejp_3165_:
{
v_a_3145_ = v_tail_3149_;
v_a_3146_ = v___x_3166_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0___boxed(lean_object* v_fst_3170_, lean_object* v_t_3171_, lean_object* v_a_3172_, lean_object* v_a_3173_){
_start:
{
lean_object* v_res_3174_; 
v_res_3174_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(v_fst_3170_, v_t_3171_, v_a_3172_, v_a_3173_);
lean_dec_ref(v_fst_3170_);
return v_res_3174_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1(lean_object* v_snd_3176_, lean_object* v_c_3177_, lean_object* v_fst_3178_, lean_object* v_a_3179_, lean_object* v_a_3180_){
_start:
{
if (lean_obj_tag(v_a_3179_) == 0)
{
lean_object* v___x_3181_; 
lean_dec_ref(v_c_3177_);
lean_dec(v_snd_3176_);
v___x_3181_ = l_List_reverse___redArg(v_a_3180_);
return v___x_3181_;
}
else
{
lean_object* v_head_3182_; lean_object* v_tail_3183_; lean_object* v___x_3185_; uint8_t v_isShared_3186_; uint8_t v_isSharedCheck_3211_; 
v_head_3182_ = lean_ctor_get(v_a_3179_, 0);
v_tail_3183_ = lean_ctor_get(v_a_3179_, 1);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_a_3179_);
if (v_isSharedCheck_3211_ == 0)
{
v___x_3185_ = v_a_3179_;
v_isShared_3186_ = v_isSharedCheck_3211_;
goto v_resetjp_3184_;
}
else
{
lean_inc(v_tail_3183_);
lean_inc(v_head_3182_);
lean_dec(v_a_3179_);
v___x_3185_ = lean_box(0);
v_isShared_3186_ = v_isSharedCheck_3211_;
goto v_resetjp_3184_;
}
v_resetjp_3184_:
{
lean_object* v_n_3187_; lean_object* v___x_3188_; lean_object* v___x_3189_; lean_object* v___x_3190_; lean_object* v___x_3191_; lean_object* v___x_3192_; double v___x_3193_; lean_object* v___x_3194_; lean_object* v___x_3195_; lean_object* v___x_3196_; lean_object* v___x_3197_; lean_object* v___x_3198_; lean_object* v___x_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; lean_object* v___x_3204_; 
v_n_3187_ = lean_ctor_get(v_c_3177_, 0);
v___x_3188_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_snd_3176_);
v___x_3189_ = l_Lean_JsonNumber_fromNat(v_snd_3176_);
v___x_3190_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3190_, 0, v___x_3189_);
v___x_3191_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3191_, 0, v___x_3188_);
lean_ctor_set(v___x_3191_, 1, v___x_3190_);
v___x_3192_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc(v_head_3182_);
v___x_3193_ = lp_choreo_Choreo_ratFloat(v_head_3182_);
v___x_3194_ = l_Lean_Float_toJson(v___x_3193_);
v___x_3195_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3195_, 0, v___x_3192_);
lean_ctor_set(v___x_3195_, 1, v___x_3194_);
v___x_3196_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___closed__0));
lean_inc(v_n_3187_);
v___x_3197_ = l_List_range(v_n_3187_);
v___x_3198_ = lean_box(0);
v___x_3199_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(v_fst_3178_, v_head_3182_, v___x_3197_, v___x_3198_);
v___x_3200_ = lean_array_mk(v___x_3199_);
v___x_3201_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3201_, 0, v___x_3200_);
v___x_3202_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3202_, 0, v___x_3196_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
if (v_isShared_3186_ == 0)
{
lean_ctor_set(v___x_3185_, 1, v___x_3198_);
lean_ctor_set(v___x_3185_, 0, v___x_3202_);
v___x_3204_ = v___x_3185_;
goto v_reusejp_3203_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v___x_3202_);
lean_ctor_set(v_reuseFailAlloc_3210_, 1, v___x_3198_);
v___x_3204_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3203_;
}
v_reusejp_3203_:
{
lean_object* v___x_3205_; lean_object* v___x_3206_; lean_object* v___x_3207_; lean_object* v___x_3208_; 
v___x_3205_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3205_, 0, v___x_3195_);
lean_ctor_set(v___x_3205_, 1, v___x_3204_);
v___x_3206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3206_, 0, v___x_3191_);
lean_ctor_set(v___x_3206_, 1, v___x_3205_);
v___x_3207_ = l_Lean_Json_mkObj(v___x_3206_);
lean_dec_ref_known(v___x_3206_, 2);
v___x_3208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3208_, 0, v___x_3207_);
lean_ctor_set(v___x_3208_, 1, v_a_3180_);
v_a_3179_ = v_tail_3183_;
v_a_3180_ = v___x_3208_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___boxed(lean_object* v_snd_3212_, lean_object* v_c_3213_, lean_object* v_fst_3214_, lean_object* v_a_3215_, lean_object* v_a_3216_){
_start:
{
lean_object* v_res_3217_; 
v_res_3217_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1(v_snd_3212_, v_c_3213_, v_fst_3214_, v_a_3215_, v_a_3216_);
lean_dec_ref(v_fst_3214_);
return v_res_3217_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1(lean_object* v_fst_3218_, lean_object* v_snd_3219_, lean_object* v_c_3220_, lean_object* v_a_3221_, lean_object* v_a_3222_){
_start:
{
if (lean_obj_tag(v_a_3221_) == 0)
{
lean_object* v___x_3223_; 
lean_dec_ref(v_c_3220_);
lean_dec(v_snd_3219_);
v___x_3223_ = l_List_reverse___redArg(v_a_3222_);
return v___x_3223_;
}
else
{
lean_object* v_head_3224_; lean_object* v_tail_3225_; lean_object* v___x_3227_; uint8_t v_isShared_3228_; uint8_t v_isSharedCheck_3253_; 
v_head_3224_ = lean_ctor_get(v_a_3221_, 0);
v_tail_3225_ = lean_ctor_get(v_a_3221_, 1);
v_isSharedCheck_3253_ = !lean_is_exclusive(v_a_3221_);
if (v_isSharedCheck_3253_ == 0)
{
v___x_3227_ = v_a_3221_;
v_isShared_3228_ = v_isSharedCheck_3253_;
goto v_resetjp_3226_;
}
else
{
lean_inc(v_tail_3225_);
lean_inc(v_head_3224_);
lean_dec(v_a_3221_);
v___x_3227_ = lean_box(0);
v_isShared_3228_ = v_isSharedCheck_3253_;
goto v_resetjp_3226_;
}
v_resetjp_3226_:
{
lean_object* v_n_3229_; lean_object* v___x_3230_; lean_object* v___x_3231_; lean_object* v___x_3232_; lean_object* v___x_3233_; lean_object* v___x_3234_; double v___x_3235_; lean_object* v___x_3236_; lean_object* v___x_3237_; lean_object* v___x_3238_; lean_object* v___x_3239_; lean_object* v___x_3240_; lean_object* v___x_3241_; lean_object* v___x_3242_; lean_object* v___x_3243_; lean_object* v___x_3244_; lean_object* v___x_3246_; 
v_n_3229_ = lean_ctor_get(v_c_3220_, 0);
v___x_3230_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_snd_3219_);
v___x_3231_ = l_Lean_JsonNumber_fromNat(v_snd_3219_);
v___x_3232_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3232_, 0, v___x_3231_);
v___x_3233_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3233_, 0, v___x_3230_);
lean_ctor_set(v___x_3233_, 1, v___x_3232_);
v___x_3234_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc(v_head_3224_);
v___x_3235_ = lp_choreo_Choreo_ratFloat(v_head_3224_);
v___x_3236_ = l_Lean_Float_toJson(v___x_3235_);
v___x_3237_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3237_, 0, v___x_3234_);
lean_ctor_set(v___x_3237_, 1, v___x_3236_);
v___x_3238_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___closed__0));
lean_inc(v_n_3229_);
v___x_3239_ = l_List_range(v_n_3229_);
v___x_3240_ = lean_box(0);
v___x_3241_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(v_fst_3218_, v_head_3224_, v___x_3239_, v___x_3240_);
v___x_3242_ = lean_array_mk(v___x_3241_);
v___x_3243_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3243_, 0, v___x_3242_);
v___x_3244_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3244_, 0, v___x_3238_);
lean_ctor_set(v___x_3244_, 1, v___x_3243_);
if (v_isShared_3228_ == 0)
{
lean_ctor_set(v___x_3227_, 1, v___x_3240_);
lean_ctor_set(v___x_3227_, 0, v___x_3244_);
v___x_3246_ = v___x_3227_;
goto v_reusejp_3245_;
}
else
{
lean_object* v_reuseFailAlloc_3252_; 
v_reuseFailAlloc_3252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3252_, 0, v___x_3244_);
lean_ctor_set(v_reuseFailAlloc_3252_, 1, v___x_3240_);
v___x_3246_ = v_reuseFailAlloc_3252_;
goto v_reusejp_3245_;
}
v_reusejp_3245_:
{
lean_object* v___x_3247_; lean_object* v___x_3248_; lean_object* v___x_3249_; lean_object* v___x_3250_; lean_object* v___x_3251_; 
v___x_3247_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3247_, 0, v___x_3237_);
lean_ctor_set(v___x_3247_, 1, v___x_3246_);
v___x_3248_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3248_, 0, v___x_3233_);
lean_ctor_set(v___x_3248_, 1, v___x_3247_);
v___x_3249_ = l_Lean_Json_mkObj(v___x_3248_);
lean_dec_ref_known(v___x_3248_, 2);
v___x_3250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3250_, 0, v___x_3249_);
lean_ctor_set(v___x_3250_, 1, v_a_3222_);
v___x_3251_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1(v_snd_3219_, v_c_3220_, v_fst_3218_, v_tail_3225_, v___x_3250_);
return v___x_3251_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1___boxed(lean_object* v_fst_3254_, lean_object* v_snd_3255_, lean_object* v_c_3256_, lean_object* v_a_3257_, lean_object* v_a_3258_){
_start:
{
lean_object* v_res_3259_; 
v_res_3259_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1(v_fst_3254_, v_snd_3255_, v_c_3256_, v_a_3257_, v_a_3258_);
lean_dec_ref(v_fst_3254_);
return v_res_3259_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0(void){
_start:
{
lean_object* v___x_3260_; lean_object* v___x_3261_; 
v___x_3260_ = lean_unsigned_to_nat(1u);
v___x_3261_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_3260_);
return v___x_3261_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1(void){
_start:
{
lean_object* v___x_3262_; lean_object* v___x_3263_; 
v___x_3262_ = lean_unsigned_to_nat(3u);
v___x_3263_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_3262_);
return v___x_3263_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2(void){
_start:
{
lean_object* v___x_3264_; lean_object* v___x_3265_; lean_object* v___x_3266_; 
v___x_3264_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1);
v___x_3265_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0);
v___x_3266_ = l_Rat_div(v___x_3265_, v___x_3264_);
return v___x_3266_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3(void){
_start:
{
lean_object* v___x_3267_; lean_object* v___x_3268_; 
v___x_3267_ = lean_unsigned_to_nat(2u);
v___x_3268_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_3267_);
return v___x_3268_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4(void){
_start:
{
lean_object* v___x_3269_; lean_object* v___x_3270_; lean_object* v___x_3271_; 
v___x_3269_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1);
v___x_3270_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3);
v___x_3271_ = l_Rat_div(v___x_3270_, v___x_3269_);
return v___x_3271_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5(void){
_start:
{
lean_object* v___x_3272_; lean_object* v___x_3273_; lean_object* v___x_3274_; 
v___x_3272_ = lean_box(0);
v___x_3273_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4);
v___x_3274_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3274_, 0, v___x_3273_);
lean_ctor_set(v___x_3274_, 1, v___x_3272_);
return v___x_3274_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6(void){
_start:
{
lean_object* v___x_3275_; lean_object* v___x_3276_; lean_object* v_pts_3277_; 
v___x_3275_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5);
v___x_3276_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2);
v_pts_3277_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_pts_3277_, 0, v___x_3276_);
lean_ctor_set(v_pts_3277_, 1, v___x_3275_);
return v_pts_3277_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2(lean_object* v_c_3278_, lean_object* v_a_3279_, lean_object* v_a_3280_){
_start:
{
if (lean_obj_tag(v_a_3279_) == 0)
{
lean_object* v___x_3281_; 
lean_dec_ref(v_c_3278_);
v___x_3281_ = lean_array_to_list(v_a_3280_);
return v___x_3281_;
}
else
{
lean_object* v_head_3282_; lean_object* v_tail_3283_; lean_object* v_fst_3284_; lean_object* v_snd_3285_; lean_object* v___x_3286_; lean_object* v_pts_3287_; lean_object* v___x_3288_; lean_object* v___x_3289_; 
v_head_3282_ = lean_ctor_get(v_a_3279_, 0);
lean_inc(v_head_3282_);
v_tail_3283_ = lean_ctor_get(v_a_3279_, 1);
lean_inc(v_tail_3283_);
lean_dec_ref_known(v_a_3279_, 2);
v_fst_3284_ = lean_ctor_get(v_head_3282_, 0);
lean_inc(v_fst_3284_);
v_snd_3285_ = lean_ctor_get(v_head_3282_, 1);
lean_inc(v_snd_3285_);
lean_dec(v_head_3282_);
v___x_3286_ = lean_box(0);
v_pts_3287_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6);
lean_inc_ref(v_c_3278_);
v___x_3288_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1(v_fst_3284_, v_snd_3285_, v_c_3278_, v_pts_3287_, v___x_3286_);
lean_dec(v_fst_3284_);
v___x_3289_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_3280_, v___x_3288_);
v_a_3279_ = v_tail_3283_;
v_a_3280_ = v___x_3289_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_samplesJson(lean_object* v_c_3293_, lean_object* v_phases_3294_){
_start:
{
lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; 
v___x_3295_ = lean_unsigned_to_nat(0u);
v___x_3296_ = l_List_zipIdxTR___redArg(v_phases_3294_, v___x_3295_);
v___x_3297_ = ((lean_object*)(lp_choreo_Choreo_samplesJson___closed__0));
v___x_3298_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2(v_c_3293_, v___x_3296_, v___x_3297_);
v___x_3299_ = lean_array_mk(v___x_3298_);
v___x_3300_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3300_, 0, v___x_3299_);
return v___x_3300_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stepsHeard_spec__0(lean_object* v_a_3301_, lean_object* v_a_3302_){
_start:
{
if (lean_obj_tag(v_a_3301_) == 0)
{
lean_object* v___x_3303_; 
v___x_3303_ = l_List_reverse___redArg(v_a_3302_);
return v___x_3303_;
}
else
{
lean_object* v_head_3304_; lean_object* v_tail_3305_; lean_object* v___x_3307_; uint8_t v_isShared_3308_; uint8_t v_isSharedCheck_3314_; 
v_head_3304_ = lean_ctor_get(v_a_3301_, 0);
v_tail_3305_ = lean_ctor_get(v_a_3301_, 1);
v_isSharedCheck_3314_ = !lean_is_exclusive(v_a_3301_);
if (v_isSharedCheck_3314_ == 0)
{
v___x_3307_ = v_a_3301_;
v_isShared_3308_ = v_isSharedCheck_3314_;
goto v_resetjp_3306_;
}
else
{
lean_inc(v_tail_3305_);
lean_inc(v_head_3304_);
lean_dec(v_a_3301_);
v___x_3307_ = lean_box(0);
v_isShared_3308_ = v_isSharedCheck_3314_;
goto v_resetjp_3306_;
}
v_resetjp_3306_:
{
lean_object* v___x_3309_; lean_object* v___x_3311_; 
v___x_3309_ = lp_choreo_Choreo_stepTitle(v_head_3304_);
lean_dec(v_head_3304_);
if (v_isShared_3308_ == 0)
{
lean_ctor_set(v___x_3307_, 1, v_a_3302_);
lean_ctor_set(v___x_3307_, 0, v___x_3309_);
v___x_3311_ = v___x_3307_;
goto v_reusejp_3310_;
}
else
{
lean_object* v_reuseFailAlloc_3313_; 
v_reuseFailAlloc_3313_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3313_, 0, v___x_3309_);
lean_ctor_set(v_reuseFailAlloc_3313_, 1, v_a_3302_);
v___x_3311_ = v_reuseFailAlloc_3313_;
goto v_reusejp_3310_;
}
v_reusejp_3310_:
{
v_a_3301_ = v_tail_3305_;
v_a_3302_ = v___x_3311_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_stepsHeard(lean_object* v_steps_3316_){
_start:
{
uint8_t v___x_3317_; 
v___x_3317_ = l_List_isEmpty___redArg(v_steps_3316_);
if (v___x_3317_ == 0)
{
lean_object* v___x_3318_; lean_object* v___x_3319_; lean_object* v___x_3320_; lean_object* v___x_3321_; lean_object* v___x_3322_; lean_object* v___x_3323_; lean_object* v___x_3324_; 
v___x_3318_ = ((lean_object*)(lp_choreo_Choreo_stepsHeard___closed__0));
v___x_3319_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__1));
v___x_3320_ = lean_box(0);
v___x_3321_ = lp_choreo_List_mapTR_loop___at___00Choreo_stepsHeard_spec__0(v_steps_3316_, v___x_3320_);
v___x_3322_ = l_String_intercalate(v___x_3319_, v___x_3321_);
v___x_3323_ = lean_string_append(v___x_3318_, v___x_3322_);
lean_dec_ref(v___x_3322_);
v___x_3324_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3324_, 0, v___x_3323_);
lean_ctor_set(v___x_3324_, 1, v___x_3320_);
return v___x_3324_;
}
else
{
lean_object* v___x_3325_; 
lean_dec(v_steps_3316_);
v___x_3325_ = lean_box(0);
return v___x_3325_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_moveName(lean_object* v_x_3344_){
_start:
{
switch(lean_obj_tag(v_x_3344_))
{
case 0:
{
lean_object* v_shape_3345_; lean_object* v___x_3346_; lean_object* v___x_3347_; lean_object* v___x_3348_; 
v_shape_3345_ = lean_ctor_get(v_x_3344_, 0);
lean_inc(v_shape_3345_);
lean_dec_ref_known(v_x_3344_, 1);
v___x_3346_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__0));
v___x_3347_ = lp_choreo_Choreo_Shape_name(v_shape_3345_);
v___x_3348_ = lean_string_append(v___x_3346_, v___x_3347_);
lean_dec_ref(v___x_3347_);
return v___x_3348_;
}
case 1:
{
lean_object* v_shape_3349_; lean_object* v___x_3350_; lean_object* v___x_3351_; lean_object* v___x_3352_; 
v_shape_3349_ = lean_ctor_get(v_x_3344_, 0);
lean_inc(v_shape_3349_);
lean_dec_ref_known(v_x_3344_, 1);
v___x_3350_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__1));
v___x_3351_ = lp_choreo_Choreo_Shape_name(v_shape_3349_);
v___x_3352_ = lean_string_append(v___x_3350_, v___x_3351_);
lean_dec_ref(v___x_3351_);
return v___x_3352_;
}
case 2:
{
lean_object* v___x_3353_; 
v___x_3353_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__2));
return v___x_3353_;
}
case 3:
{
lean_object* v_quarters_3354_; uint8_t v_ccw_3355_; lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; 
v_quarters_3354_ = lean_ctor_get(v_x_3344_, 0);
lean_inc(v_quarters_3354_);
v_ccw_3355_ = lean_ctor_get_uint8(v_x_3344_, sizeof(void*)*1);
lean_dec_ref_known(v_x_3344_, 1);
v___x_3356_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__3));
v___x_3357_ = lean_unsigned_to_nat(90u);
v___x_3358_ = lean_nat_mul(v_quarters_3354_, v___x_3357_);
lean_dec(v_quarters_3354_);
v___x_3359_ = l_Nat_reprFast(v___x_3358_);
v___x_3360_ = lean_string_append(v___x_3356_, v___x_3359_);
lean_dec_ref(v___x_3359_);
v___x_3361_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__4));
v___x_3362_ = lean_string_append(v___x_3360_, v___x_3361_);
if (v_ccw_3355_ == 0)
{
lean_object* v___x_3363_; lean_object* v___x_3364_; 
v___x_3363_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__5));
v___x_3364_ = lean_string_append(v___x_3362_, v___x_3363_);
return v___x_3364_;
}
else
{
lean_object* v___x_3365_; lean_object* v___x_3366_; 
v___x_3365_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__6));
v___x_3366_ = lean_string_append(v___x_3362_, v___x_3365_);
return v___x_3366_;
}
}
case 4:
{
lean_object* v_quarters_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; 
v_quarters_3367_ = lean_ctor_get(v_x_3344_, 0);
lean_inc(v_quarters_3367_);
lean_dec_ref_known(v_x_3344_, 1);
v___x_3368_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__7));
v___x_3369_ = lean_unsigned_to_nat(90u);
v___x_3370_ = lean_nat_mul(v_quarters_3367_, v___x_3369_);
lean_dec(v_quarters_3367_);
v___x_3371_ = l_Nat_reprFast(v___x_3370_);
v___x_3372_ = lean_string_append(v___x_3368_, v___x_3371_);
lean_dec_ref(v___x_3371_);
v___x_3373_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__8));
v___x_3374_ = lean_string_append(v___x_3372_, v___x_3373_);
return v___x_3374_;
}
case 5:
{
lean_object* v___x_3375_; 
lean_dec_ref_known(v_x_3344_, 1);
v___x_3375_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__9));
return v___x_3375_;
}
case 6:
{
lean_object* v___x_3376_; 
v___x_3376_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__10));
return v___x_3376_;
}
case 7:
{
lean_object* v___x_3377_; 
v___x_3377_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__11));
return v___x_3377_;
}
case 8:
{
lean_object* v___x_3378_; 
v___x_3378_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__12));
return v___x_3378_;
}
case 9:
{
lean_object* v___x_3379_; 
v___x_3379_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__13));
return v___x_3379_;
}
case 10:
{
lean_object* v___x_3380_; 
v___x_3380_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__14));
return v___x_3380_;
}
case 11:
{
lean_object* v_shape_3381_; lean_object* v___x_3382_; lean_object* v___x_3383_; lean_object* v___x_3384_; 
v_shape_3381_ = lean_ctor_get(v_x_3344_, 0);
lean_inc(v_shape_3381_);
lean_dec_ref_known(v_x_3344_, 1);
v___x_3382_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__15));
v___x_3383_ = lp_choreo_Choreo_Shape_name(v_shape_3381_);
v___x_3384_ = lean_string_append(v___x_3382_, v___x_3383_);
lean_dec_ref(v___x_3383_);
return v___x_3384_;
}
default: 
{
uint8_t v_newLines_3385_; 
v_newLines_3385_ = lean_ctor_get_uint8(v_x_3344_, 0);
lean_dec_ref_known(v_x_3344_, 0);
if (v_newLines_3385_ == 0)
{
lean_object* v___x_3386_; 
v___x_3386_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__16));
return v___x_3386_;
}
else
{
lean_object* v___x_3387_; 
v___x_3387_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__17));
return v___x_3387_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(lean_object* v_a_3388_, lean_object* v_a_3389_){
_start:
{
if (lean_obj_tag(v_a_3388_) == 0)
{
lean_object* v___x_3390_; 
v___x_3390_ = l_List_reverse___redArg(v_a_3389_);
return v___x_3390_;
}
else
{
lean_object* v_head_3391_; lean_object* v_tail_3392_; lean_object* v___x_3394_; uint8_t v_isShared_3395_; uint8_t v_isSharedCheck_3409_; 
v_head_3391_ = lean_ctor_get(v_a_3388_, 0);
v_tail_3392_ = lean_ctor_get(v_a_3388_, 1);
v_isSharedCheck_3409_ = !lean_is_exclusive(v_a_3388_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3394_ = v_a_3388_;
v_isShared_3395_ = v_isSharedCheck_3409_;
goto v_resetjp_3393_;
}
else
{
lean_inc(v_tail_3392_);
lean_inc(v_head_3391_);
lean_dec(v_a_3388_);
v___x_3394_ = lean_box(0);
v_isShared_3395_ = v_isSharedCheck_3409_;
goto v_resetjp_3393_;
}
v_resetjp_3393_:
{
lean_object* v_x_3396_; lean_object* v_y_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; lean_object* v___x_3406_; 
v_x_3396_ = lean_ctor_get(v_head_3391_, 0);
lean_inc(v_x_3396_);
v_y_3397_ = lean_ctor_get(v_head_3391_, 1);
lean_inc(v_y_3397_);
lean_dec(v_head_3391_);
v___x_3398_ = lp_choreo_Choreo_jInt(v_x_3396_);
v___x_3399_ = lp_choreo_Choreo_jInt(v_y_3397_);
v___x_3400_ = lean_unsigned_to_nat(2u);
v___x_3401_ = lean_mk_empty_array_with_capacity(v___x_3400_);
v___x_3402_ = lean_array_push(v___x_3401_, v___x_3398_);
v___x_3403_ = lean_array_push(v___x_3402_, v___x_3399_);
v___x_3404_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3404_, 0, v___x_3403_);
if (v_isShared_3395_ == 0)
{
lean_ctor_set(v___x_3394_, 1, v_a_3389_);
lean_ctor_set(v___x_3394_, 0, v___x_3404_);
v___x_3406_ = v___x_3394_;
goto v_reusejp_3405_;
}
else
{
lean_object* v_reuseFailAlloc_3408_; 
v_reuseFailAlloc_3408_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3408_, 0, v___x_3404_);
lean_ctor_set(v_reuseFailAlloc_3408_, 1, v_a_3389_);
v___x_3406_ = v_reuseFailAlloc_3408_;
goto v_reusejp_3405_;
}
v_reusejp_3405_:
{
v_a_3388_ = v_tail_3392_;
v_a_3389_ = v___x_3406_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__3(lean_object* v_a_3410_, lean_object* v_a_3411_){
_start:
{
if (lean_obj_tag(v_a_3410_) == 0)
{
lean_object* v___x_3412_; 
v___x_3412_ = l_List_reverse___redArg(v_a_3411_);
return v___x_3412_;
}
else
{
lean_object* v_head_3413_; lean_object* v_tail_3414_; lean_object* v___x_3416_; uint8_t v_isShared_3417_; uint8_t v_isSharedCheck_3426_; 
v_head_3413_ = lean_ctor_get(v_a_3410_, 0);
v_tail_3414_ = lean_ctor_get(v_a_3410_, 1);
v_isSharedCheck_3426_ = !lean_is_exclusive(v_a_3410_);
if (v_isSharedCheck_3426_ == 0)
{
v___x_3416_ = v_a_3410_;
v_isShared_3417_ = v_isSharedCheck_3426_;
goto v_resetjp_3415_;
}
else
{
lean_inc(v_tail_3414_);
lean_inc(v_head_3413_);
lean_dec(v_a_3410_);
v___x_3416_ = lean_box(0);
v_isShared_3417_ = v_isSharedCheck_3426_;
goto v_resetjp_3415_;
}
v_resetjp_3415_:
{
lean_object* v___x_3418_; lean_object* v___x_3419_; lean_object* v___x_3420_; lean_object* v___x_3421_; lean_object* v___x_3423_; 
v___x_3418_ = lean_box(0);
v___x_3419_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(v_head_3413_, v___x_3418_);
v___x_3420_ = lean_array_mk(v___x_3419_);
v___x_3421_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3421_, 0, v___x_3420_);
if (v_isShared_3417_ == 0)
{
lean_ctor_set(v___x_3416_, 1, v_a_3411_);
lean_ctor_set(v___x_3416_, 0, v___x_3421_);
v___x_3423_ = v___x_3416_;
goto v_reusejp_3422_;
}
else
{
lean_object* v_reuseFailAlloc_3425_; 
v_reuseFailAlloc_3425_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3425_, 0, v___x_3421_);
lean_ctor_set(v_reuseFailAlloc_3425_, 1, v_a_3411_);
v___x_3423_ = v_reuseFailAlloc_3425_;
goto v_reusejp_3422_;
}
v_reusejp_3422_:
{
v_a_3410_ = v_tail_3414_;
v_a_3411_ = v___x_3423_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__2(lean_object* v_a_3427_, lean_object* v_a_3428_){
_start:
{
if (lean_obj_tag(v_a_3427_) == 0)
{
lean_object* v___x_3429_; 
v___x_3429_ = l_List_reverse___redArg(v_a_3428_);
return v___x_3429_;
}
else
{
lean_object* v_head_3430_; lean_object* v_tail_3431_; lean_object* v___x_3433_; uint8_t v_isShared_3434_; uint8_t v_isSharedCheck_3450_; 
v_head_3430_ = lean_ctor_get(v_a_3427_, 0);
v_tail_3431_ = lean_ctor_get(v_a_3427_, 1);
v_isSharedCheck_3450_ = !lean_is_exclusive(v_a_3427_);
if (v_isSharedCheck_3450_ == 0)
{
v___x_3433_ = v_a_3427_;
v_isShared_3434_ = v_isSharedCheck_3450_;
goto v_resetjp_3432_;
}
else
{
lean_inc(v_tail_3431_);
lean_inc(v_head_3430_);
lean_dec(v_a_3427_);
v___x_3433_ = lean_box(0);
v_isShared_3434_ = v_isSharedCheck_3450_;
goto v_resetjp_3432_;
}
v_resetjp_3432_:
{
lean_object* v_fst_3435_; lean_object* v_snd_3436_; lean_object* v___x_3437_; lean_object* v___x_3438_; lean_object* v___x_3439_; lean_object* v___x_3440_; lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3443_; lean_object* v___x_3444_; lean_object* v___x_3445_; lean_object* v___x_3447_; 
v_fst_3435_ = lean_ctor_get(v_head_3430_, 0);
lean_inc(v_fst_3435_);
v_snd_3436_ = lean_ctor_get(v_head_3430_, 1);
lean_inc(v_snd_3436_);
lean_dec(v_head_3430_);
v___x_3437_ = l_Lean_JsonNumber_fromNat(v_fst_3435_);
v___x_3438_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3438_, 0, v___x_3437_);
v___x_3439_ = l_Lean_JsonNumber_fromNat(v_snd_3436_);
v___x_3440_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3440_, 0, v___x_3439_);
v___x_3441_ = lean_unsigned_to_nat(2u);
v___x_3442_ = lean_mk_empty_array_with_capacity(v___x_3441_);
v___x_3443_ = lean_array_push(v___x_3442_, v___x_3438_);
v___x_3444_ = lean_array_push(v___x_3443_, v___x_3440_);
v___x_3445_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3445_, 0, v___x_3444_);
if (v_isShared_3434_ == 0)
{
lean_ctor_set(v___x_3433_, 1, v_a_3428_);
lean_ctor_set(v___x_3433_, 0, v___x_3445_);
v___x_3447_ = v___x_3433_;
goto v_reusejp_3446_;
}
else
{
lean_object* v_reuseFailAlloc_3449_; 
v_reuseFailAlloc_3449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3449_, 0, v___x_3445_);
lean_ctor_set(v_reuseFailAlloc_3449_, 1, v_a_3428_);
v___x_3447_ = v_reuseFailAlloc_3449_;
goto v_reusejp_3446_;
}
v_reusejp_3446_:
{
v_a_3427_ = v_tail_3431_;
v_a_3428_ = v___x_3447_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(lean_object* v_a_3451_, lean_object* v_a_3452_){
_start:
{
if (lean_obj_tag(v_a_3451_) == 0)
{
lean_object* v___x_3453_; 
v___x_3453_ = l_List_reverse___redArg(v_a_3452_);
return v___x_3453_;
}
else
{
lean_object* v_head_3454_; lean_object* v_tail_3455_; lean_object* v___x_3457_; uint8_t v_isShared_3458_; uint8_t v_isSharedCheck_3465_; 
v_head_3454_ = lean_ctor_get(v_a_3451_, 0);
v_tail_3455_ = lean_ctor_get(v_a_3451_, 1);
v_isSharedCheck_3465_ = !lean_is_exclusive(v_a_3451_);
if (v_isSharedCheck_3465_ == 0)
{
v___x_3457_ = v_a_3451_;
v_isShared_3458_ = v_isSharedCheck_3465_;
goto v_resetjp_3456_;
}
else
{
lean_inc(v_tail_3455_);
lean_inc(v_head_3454_);
lean_dec(v_a_3451_);
v___x_3457_ = lean_box(0);
v_isShared_3458_ = v_isSharedCheck_3465_;
goto v_resetjp_3456_;
}
v_resetjp_3456_:
{
lean_object* v___x_3459_; lean_object* v___x_3460_; lean_object* v___x_3462_; 
v___x_3459_ = l_Lean_JsonNumber_fromNat(v_head_3454_);
v___x_3460_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3460_, 0, v___x_3459_);
if (v_isShared_3458_ == 0)
{
lean_ctor_set(v___x_3457_, 1, v_a_3452_);
lean_ctor_set(v___x_3457_, 0, v___x_3460_);
v___x_3462_ = v___x_3457_;
goto v_reusejp_3461_;
}
else
{
lean_object* v_reuseFailAlloc_3464_; 
v_reuseFailAlloc_3464_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3464_, 0, v___x_3460_);
lean_ctor_set(v_reuseFailAlloc_3464_, 1, v_a_3452_);
v___x_3462_ = v_reuseFailAlloc_3464_;
goto v_reusejp_3461_;
}
v_reusejp_3461_:
{
v_a_3451_ = v_tail_3455_;
v_a_3452_ = v___x_3462_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6(lean_object* v_a_3473_, lean_object* v_a_3474_){
_start:
{
if (lean_obj_tag(v_a_3473_) == 0)
{
lean_object* v___x_3475_; 
v___x_3475_ = l_List_reverse___redArg(v_a_3474_);
return v___x_3475_;
}
else
{
lean_object* v_head_3476_; lean_object* v_tail_3477_; lean_object* v___x_3479_; uint8_t v_isShared_3480_; uint8_t v_isSharedCheck_3532_; 
v_head_3476_ = lean_ctor_get(v_a_3473_, 0);
v_tail_3477_ = lean_ctor_get(v_a_3473_, 1);
v_isSharedCheck_3532_ = !lean_is_exclusive(v_a_3473_);
if (v_isSharedCheck_3532_ == 0)
{
v___x_3479_ = v_a_3473_;
v_isShared_3480_ = v_isSharedCheck_3532_;
goto v_resetjp_3478_;
}
else
{
lean_inc(v_tail_3477_);
lean_inc(v_head_3476_);
lean_dec(v_a_3473_);
v___x_3479_ = lean_box(0);
v_isShared_3480_ = v_isSharedCheck_3532_;
goto v_resetjp_3478_;
}
v_resetjp_3478_:
{
lean_object* v_name_3481_; lean_object* v_kind_3482_; lean_object* v_frame_3483_; lean_object* v_members_3484_; lean_object* v_dx_3485_; lean_object* v_dy_3486_; lean_object* v_pairs_3487_; lean_object* v_mirror_3488_; lean_object* v___x_3489_; lean_object* v___x_3490_; lean_object* v___x_3491_; lean_object* v___x_3492_; lean_object* v___x_3493_; lean_object* v___x_3494_; lean_object* v___x_3495_; lean_object* v___x_3496_; lean_object* v___x_3497_; lean_object* v___x_3498_; lean_object* v___x_3499_; lean_object* v___x_3500_; lean_object* v___x_3501_; lean_object* v___x_3502_; lean_object* v___x_3503_; lean_object* v___x_3504_; lean_object* v___x_3505_; lean_object* v___x_3506_; lean_object* v___x_3507_; lean_object* v___x_3508_; lean_object* v___x_3509_; lean_object* v___x_3510_; lean_object* v___x_3511_; lean_object* v___x_3512_; lean_object* v___x_3513_; lean_object* v___x_3514_; lean_object* v___x_3515_; lean_object* v___x_3516_; lean_object* v___x_3517_; lean_object* v___x_3518_; lean_object* v___x_3520_; 
v_name_3481_ = lean_ctor_get(v_head_3476_, 0);
lean_inc_ref(v_name_3481_);
v_kind_3482_ = lean_ctor_get(v_head_3476_, 1);
lean_inc_ref(v_kind_3482_);
v_frame_3483_ = lean_ctor_get(v_head_3476_, 2);
lean_inc(v_frame_3483_);
v_members_3484_ = lean_ctor_get(v_head_3476_, 3);
lean_inc(v_members_3484_);
v_dx_3485_ = lean_ctor_get(v_head_3476_, 4);
lean_inc(v_dx_3485_);
v_dy_3486_ = lean_ctor_get(v_head_3476_, 5);
lean_inc(v_dy_3486_);
v_pairs_3487_ = lean_ctor_get(v_head_3476_, 6);
lean_inc(v_pairs_3487_);
v_mirror_3488_ = lean_ctor_get(v_head_3476_, 7);
lean_inc(v_mirror_3488_);
lean_dec(v_head_3476_);
v___x_3489_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0));
v___x_3490_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3490_, 0, v_name_3481_);
v___x_3491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3491_, 0, v___x_3489_);
lean_ctor_set(v___x_3491_, 1, v___x_3490_);
v___x_3492_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
v___x_3493_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3493_, 0, v_kind_3482_);
v___x_3494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3494_, 0, v___x_3492_);
lean_ctor_set(v___x_3494_, 1, v___x_3493_);
v___x_3495_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__1));
v___x_3496_ = l_Lean_JsonNumber_fromNat(v_frame_3483_);
v___x_3497_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3497_, 0, v___x_3496_);
v___x_3498_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3498_, 0, v___x_3495_);
lean_ctor_set(v___x_3498_, 1, v___x_3497_);
v___x_3499_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__2));
v___x_3500_ = lean_box(0);
v___x_3501_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_members_3484_, v___x_3500_);
v___x_3502_ = lean_array_mk(v___x_3501_);
v___x_3503_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3503_, 0, v___x_3502_);
v___x_3504_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3504_, 0, v___x_3499_);
lean_ctor_set(v___x_3504_, 1, v___x_3503_);
v___x_3505_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__3));
v___x_3506_ = lp_choreo_Choreo_jInt(v_dx_3485_);
v___x_3507_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3507_, 0, v___x_3505_);
lean_ctor_set(v___x_3507_, 1, v___x_3506_);
v___x_3508_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__4));
v___x_3509_ = lp_choreo_Choreo_jInt(v_dy_3486_);
v___x_3510_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3510_, 0, v___x_3508_);
lean_ctor_set(v___x_3510_, 1, v___x_3509_);
v___x_3511_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__5));
v___x_3512_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__2(v_pairs_3487_, v___x_3500_);
v___x_3513_ = lean_array_mk(v___x_3512_);
v___x_3514_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3514_, 0, v___x_3513_);
v___x_3515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3515_, 0, v___x_3511_);
lean_ctor_set(v___x_3515_, 1, v___x_3514_);
v___x_3516_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__6));
v___x_3517_ = lp_choreo_Choreo_jInt(v_mirror_3488_);
v___x_3518_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3518_, 0, v___x_3516_);
lean_ctor_set(v___x_3518_, 1, v___x_3517_);
if (v_isShared_3480_ == 0)
{
lean_ctor_set(v___x_3479_, 1, v___x_3500_);
lean_ctor_set(v___x_3479_, 0, v___x_3518_);
v___x_3520_ = v___x_3479_;
goto v_reusejp_3519_;
}
else
{
lean_object* v_reuseFailAlloc_3531_; 
v_reuseFailAlloc_3531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3531_, 0, v___x_3518_);
lean_ctor_set(v_reuseFailAlloc_3531_, 1, v___x_3500_);
v___x_3520_ = v_reuseFailAlloc_3531_;
goto v_reusejp_3519_;
}
v_reusejp_3519_:
{
lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3528_; lean_object* v___x_3529_; 
v___x_3521_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3515_);
lean_ctor_set(v___x_3521_, 1, v___x_3520_);
v___x_3522_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3522_, 0, v___x_3510_);
lean_ctor_set(v___x_3522_, 1, v___x_3521_);
v___x_3523_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3523_, 0, v___x_3507_);
lean_ctor_set(v___x_3523_, 1, v___x_3522_);
v___x_3524_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3504_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3525_, 0, v___x_3498_);
lean_ctor_set(v___x_3525_, 1, v___x_3524_);
v___x_3526_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3526_, 0, v___x_3494_);
lean_ctor_set(v___x_3526_, 1, v___x_3525_);
v___x_3527_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3491_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
v___x_3528_ = l_Lean_Json_mkObj(v___x_3527_);
lean_dec_ref_known(v___x_3527_, 2);
v___x_3529_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3529_, 0, v___x_3528_);
lean_ctor_set(v___x_3529_, 1, v_a_3474_);
v_a_3473_ = v_tail_3477_;
v_a_3474_ = v___x_3529_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(lean_object* v_a_3533_, lean_object* v_a_3534_){
_start:
{
if (lean_obj_tag(v_a_3533_) == 0)
{
lean_object* v___x_3535_; 
v___x_3535_ = l_List_reverse___redArg(v_a_3534_);
return v___x_3535_;
}
else
{
lean_object* v_head_3536_; lean_object* v_tail_3537_; lean_object* v___x_3539_; uint8_t v_isShared_3540_; uint8_t v_isSharedCheck_3546_; 
v_head_3536_ = lean_ctor_get(v_a_3533_, 0);
v_tail_3537_ = lean_ctor_get(v_a_3533_, 1);
v_isSharedCheck_3546_ = !lean_is_exclusive(v_a_3533_);
if (v_isSharedCheck_3546_ == 0)
{
v___x_3539_ = v_a_3533_;
v_isShared_3540_ = v_isSharedCheck_3546_;
goto v_resetjp_3538_;
}
else
{
lean_inc(v_tail_3537_);
lean_inc(v_head_3536_);
lean_dec(v_a_3533_);
v___x_3539_ = lean_box(0);
v_isShared_3540_ = v_isSharedCheck_3546_;
goto v_resetjp_3538_;
}
v_resetjp_3538_:
{
lean_object* v___x_3541_; lean_object* v___x_3543_; 
v___x_3541_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3541_, 0, v_head_3536_);
if (v_isShared_3540_ == 0)
{
lean_ctor_set(v___x_3539_, 1, v_a_3534_);
lean_ctor_set(v___x_3539_, 0, v___x_3541_);
v___x_3543_ = v___x_3539_;
goto v_reusejp_3542_;
}
else
{
lean_object* v_reuseFailAlloc_3545_; 
v_reuseFailAlloc_3545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3545_, 0, v___x_3541_);
lean_ctor_set(v_reuseFailAlloc_3545_, 1, v_a_3534_);
v___x_3543_ = v_reuseFailAlloc_3545_;
goto v_reusejp_3542_;
}
v_reusejp_3542_:
{
v_a_3533_ = v_tail_3537_;
v_a_3534_ = v___x_3543_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__4(lean_object* v_a_3547_, lean_object* v_a_3548_){
_start:
{
if (lean_obj_tag(v_a_3547_) == 0)
{
lean_object* v___x_3549_; 
v___x_3549_ = l_List_reverse___redArg(v_a_3548_);
return v___x_3549_;
}
else
{
lean_object* v_head_3550_; lean_object* v_snd_3551_; lean_object* v_snd_3552_; lean_object* v_tail_3553_; lean_object* v___x_3555_; uint8_t v_isShared_3556_; uint8_t v_isSharedCheck_3578_; 
v_head_3550_ = lean_ctor_get(v_a_3547_, 0);
lean_inc(v_head_3550_);
v_snd_3551_ = lean_ctor_get(v_head_3550_, 1);
lean_inc(v_snd_3551_);
v_snd_3552_ = lean_ctor_get(v_snd_3551_, 1);
lean_inc(v_snd_3552_);
v_tail_3553_ = lean_ctor_get(v_a_3547_, 1);
v_isSharedCheck_3578_ = !lean_is_exclusive(v_a_3547_);
if (v_isSharedCheck_3578_ == 0)
{
lean_object* v_unused_3579_; 
v_unused_3579_ = lean_ctor_get(v_a_3547_, 0);
lean_dec(v_unused_3579_);
v___x_3555_ = v_a_3547_;
v_isShared_3556_ = v_isSharedCheck_3578_;
goto v_resetjp_3554_;
}
else
{
lean_inc(v_tail_3553_);
lean_dec(v_a_3547_);
v___x_3555_ = lean_box(0);
v_isShared_3556_ = v_isSharedCheck_3578_;
goto v_resetjp_3554_;
}
v_resetjp_3554_:
{
lean_object* v_fst_3557_; lean_object* v_fst_3558_; lean_object* v_fst_3559_; lean_object* v_snd_3560_; lean_object* v___x_3561_; lean_object* v___x_3562_; lean_object* v___x_3563_; lean_object* v___x_3564_; lean_object* v___x_3565_; lean_object* v___x_3566_; lean_object* v___x_3567_; lean_object* v___x_3568_; lean_object* v___x_3569_; lean_object* v___x_3570_; lean_object* v___x_3571_; lean_object* v___x_3572_; lean_object* v___x_3573_; lean_object* v___x_3575_; 
v_fst_3557_ = lean_ctor_get(v_head_3550_, 0);
lean_inc(v_fst_3557_);
lean_dec(v_head_3550_);
v_fst_3558_ = lean_ctor_get(v_snd_3551_, 0);
lean_inc(v_fst_3558_);
lean_dec(v_snd_3551_);
v_fst_3559_ = lean_ctor_get(v_snd_3552_, 0);
lean_inc(v_fst_3559_);
v_snd_3560_ = lean_ctor_get(v_snd_3552_, 1);
lean_inc(v_snd_3560_);
lean_dec(v_snd_3552_);
v___x_3561_ = l_Lean_JsonNumber_fromNat(v_fst_3557_);
v___x_3562_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3562_, 0, v___x_3561_);
v___x_3563_ = l_Lean_JsonNumber_fromNat(v_fst_3558_);
v___x_3564_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3564_, 0, v___x_3563_);
v___x_3565_ = lp_choreo_Choreo_jInt(v_fst_3559_);
v___x_3566_ = lp_choreo_Choreo_jInt(v_snd_3560_);
v___x_3567_ = lean_unsigned_to_nat(4u);
v___x_3568_ = lean_mk_empty_array_with_capacity(v___x_3567_);
v___x_3569_ = lean_array_push(v___x_3568_, v___x_3562_);
v___x_3570_ = lean_array_push(v___x_3569_, v___x_3564_);
v___x_3571_ = lean_array_push(v___x_3570_, v___x_3565_);
v___x_3572_ = lean_array_push(v___x_3571_, v___x_3566_);
v___x_3573_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3573_, 0, v___x_3572_);
if (v_isShared_3556_ == 0)
{
lean_ctor_set(v___x_3555_, 1, v_a_3548_);
lean_ctor_set(v___x_3555_, 0, v___x_3573_);
v___x_3575_ = v___x_3555_;
goto v_reusejp_3574_;
}
else
{
lean_object* v_reuseFailAlloc_3577_; 
v_reuseFailAlloc_3577_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3577_, 0, v___x_3573_);
lean_ctor_set(v_reuseFailAlloc_3577_, 1, v_a_3548_);
v___x_3575_ = v_reuseFailAlloc_3577_;
goto v_reusejp_3574_;
}
v_reusejp_3574_:
{
v_a_3547_ = v_tail_3553_;
v_a_3548_ = v___x_3575_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneJson(lean_object* v_sc_3589_, uint8_t v_withRules_3590_){
_start:
{
lean_object* v_frames_3591_; lean_object* v_rules_3592_; lean_object* v_holds_3593_; lean_object* v_moves_3594_; lean_object* v_seconds_3595_; lean_object* v_ways_3596_; lean_object* v_genre_3597_; lean_object* v_landing_3598_; lean_object* v_bends_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3609_; lean_object* v___x_3610_; lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; lean_object* v___x_3629_; lean_object* v___x_3630_; lean_object* v___x_3631_; lean_object* v___x_3632_; lean_object* v___x_3633_; lean_object* v___x_3634_; lean_object* v___x_3635_; lean_object* v___x_3636_; lean_object* v___x_3637_; lean_object* v___x_3638_; lean_object* v___y_3640_; 
v_frames_3591_ = lean_ctor_get(v_sc_3589_, 0);
lean_inc(v_frames_3591_);
v_rules_3592_ = lean_ctor_get(v_sc_3589_, 1);
lean_inc(v_rules_3592_);
v_holds_3593_ = lean_ctor_get(v_sc_3589_, 2);
lean_inc(v_holds_3593_);
v_moves_3594_ = lean_ctor_get(v_sc_3589_, 3);
lean_inc(v_moves_3594_);
v_seconds_3595_ = lean_ctor_get(v_sc_3589_, 4);
lean_inc(v_seconds_3595_);
v_ways_3596_ = lean_ctor_get(v_sc_3589_, 5);
lean_inc(v_ways_3596_);
v_genre_3597_ = lean_ctor_get(v_sc_3589_, 6);
lean_inc_ref(v_genre_3597_);
v_landing_3598_ = lean_ctor_get(v_sc_3589_, 7);
lean_inc(v_landing_3598_);
v_bends_3599_ = lean_ctor_get(v_sc_3589_, 8);
lean_inc(v_bends_3599_);
lean_dec_ref(v_sc_3589_);
v___x_3600_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__0));
v___x_3601_ = lean_box(0);
v___x_3602_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__3(v_frames_3591_, v___x_3601_);
v___x_3603_ = lean_array_mk(v___x_3602_);
v___x_3604_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3604_, 0, v___x_3603_);
v___x_3605_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3605_, 0, v___x_3600_);
lean_ctor_set(v___x_3605_, 1, v___x_3604_);
v___x_3606_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__1));
v___x_3607_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_holds_3593_, v___x_3601_);
v___x_3608_ = lean_array_mk(v___x_3607_);
v___x_3609_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3609_, 0, v___x_3608_);
v___x_3610_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3610_, 0, v___x_3606_);
lean_ctor_set(v___x_3610_, 1, v___x_3609_);
v___x_3611_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__2));
v___x_3612_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_moves_3594_, v___x_3601_);
v___x_3613_ = lean_array_mk(v___x_3612_);
v___x_3614_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3613_);
v___x_3615_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3615_, 0, v___x_3611_);
lean_ctor_set(v___x_3615_, 1, v___x_3614_);
v___x_3616_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__3));
v___x_3617_ = l_Lean_JsonNumber_fromNat(v_seconds_3595_);
v___x_3618_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
v___x_3619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3616_);
lean_ctor_set(v___x_3619_, 1, v___x_3618_);
v___x_3620_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__4));
v___x_3621_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__4(v_bends_3599_, v___x_3601_);
v___x_3622_ = lean_array_mk(v___x_3621_);
v___x_3623_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3622_);
v___x_3624_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3620_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__5));
v___x_3626_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(v_ways_3596_, v___x_3601_);
v___x_3627_ = lean_array_mk(v___x_3626_);
v___x_3628_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
v___x_3629_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3629_, 0, v___x_3625_);
lean_ctor_set(v___x_3629_, 1, v___x_3628_);
v___x_3630_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__6));
v___x_3631_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3631_, 0, v_genre_3597_);
v___x_3632_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3632_, 0, v___x_3630_);
lean_ctor_set(v___x_3632_, 1, v___x_3631_);
v___x_3633_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__7));
v___x_3634_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_landing_3598_, v___x_3601_);
v___x_3635_ = lean_array_mk(v___x_3634_);
v___x_3636_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3636_, 0, v___x_3635_);
v___x_3637_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3637_, 0, v___x_3633_);
lean_ctor_set(v___x_3637_, 1, v___x_3636_);
v___x_3638_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__8));
if (v_withRules_3590_ == 0)
{
lean_object* v___x_3652_; 
lean_dec(v_rules_3592_);
v___x_3652_ = lean_box(0);
v___y_3640_ = v___x_3652_;
goto v___jp_3639_;
}
else
{
lean_object* v___x_3653_; lean_object* v___x_3654_; lean_object* v___x_3655_; 
v___x_3653_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6(v_rules_3592_, v___x_3601_);
v___x_3654_ = lean_array_mk(v___x_3653_);
v___x_3655_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3655_, 0, v___x_3654_);
v___y_3640_ = v___x_3655_;
goto v___jp_3639_;
}
v___jp_3639_:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3643_; lean_object* v___x_3644_; lean_object* v___x_3645_; lean_object* v___x_3646_; lean_object* v___x_3647_; lean_object* v___x_3648_; lean_object* v___x_3649_; lean_object* v___x_3650_; lean_object* v___x_3651_; 
v___x_3641_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3641_, 0, v___x_3638_);
lean_ctor_set(v___x_3641_, 1, v___y_3640_);
v___x_3642_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
lean_ctor_set(v___x_3642_, 1, v___x_3601_);
v___x_3643_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3643_, 0, v___x_3637_);
lean_ctor_set(v___x_3643_, 1, v___x_3642_);
v___x_3644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3644_, 0, v___x_3632_);
lean_ctor_set(v___x_3644_, 1, v___x_3643_);
v___x_3645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3645_, 0, v___x_3629_);
lean_ctor_set(v___x_3645_, 1, v___x_3644_);
v___x_3646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3646_, 0, v___x_3624_);
lean_ctor_set(v___x_3646_, 1, v___x_3645_);
v___x_3647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3647_, 0, v___x_3619_);
lean_ctor_set(v___x_3647_, 1, v___x_3646_);
v___x_3648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3648_, 0, v___x_3615_);
lean_ctor_set(v___x_3648_, 1, v___x_3647_);
v___x_3649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3649_, 0, v___x_3610_);
lean_ctor_set(v___x_3649_, 1, v___x_3648_);
v___x_3650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3650_, 0, v___x_3605_);
lean_ctor_set(v___x_3650_, 1, v___x_3649_);
v___x_3651_ = l_Lean_Json_mkObj(v___x_3650_);
lean_dec_ref_known(v___x_3650_, 2);
return v___x_3651_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneJson___boxed(lean_object* v_sc_3656_, lean_object* v_withRules_3657_){
_start:
{
uint8_t v_withRules_boxed_3658_; lean_object* v_res_3659_; 
v_withRules_boxed_3658_ = lean_unbox(v_withRules_3657_);
v_res_3659_ = lp_choreo_Choreo_sceneJson(v_sc_3656_, v_withRules_boxed_3658_);
return v_res_3659_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_askPhases(lean_object* v_x_3660_){
_start:
{
lean_object* v_k_3662_; lean_object* v_k_3666_; 
switch(lean_obj_tag(v_x_3660_))
{
case 0:
{
lean_object* v_k_3669_; 
v_k_3669_ = lean_ctor_get(v_x_3660_, 0);
lean_inc(v_k_3669_);
lean_dec_ref_known(v_x_3660_, 3);
v_k_3662_ = v_k_3669_;
goto v___jp_3661_;
}
case 1:
{
lean_object* v_k_3670_; 
v_k_3670_ = lean_ctor_get(v_x_3660_, 0);
lean_inc(v_k_3670_);
lean_dec_ref_known(v_x_3660_, 3);
v_k_3662_ = v_k_3670_;
goto v___jp_3661_;
}
case 2:
{
lean_object* v_k_3671_; lean_object* v___x_3673_; uint8_t v_isShared_3674_; uint8_t v_isSharedCheck_3679_; 
v_k_3671_ = lean_ctor_get(v_x_3660_, 0);
v_isSharedCheck_3679_ = !lean_is_exclusive(v_x_3660_);
if (v_isSharedCheck_3679_ == 0)
{
lean_object* v_unused_3680_; 
v_unused_3680_ = lean_ctor_get(v_x_3660_, 1);
lean_dec(v_unused_3680_);
v___x_3673_ = v_x_3660_;
v_isShared_3674_ = v_isSharedCheck_3679_;
goto v_resetjp_3672_;
}
else
{
lean_inc(v_k_3671_);
lean_dec(v_x_3660_);
v___x_3673_ = lean_box(0);
v_isShared_3674_ = v_isSharedCheck_3679_;
goto v_resetjp_3672_;
}
v_resetjp_3672_:
{
lean_object* v___x_3675_; lean_object* v___x_3677_; 
v___x_3675_ = lean_box(0);
if (v_isShared_3674_ == 0)
{
lean_ctor_set_tag(v___x_3673_, 1);
lean_ctor_set(v___x_3673_, 1, v___x_3675_);
v___x_3677_ = v___x_3673_;
goto v_reusejp_3676_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v_k_3671_);
lean_ctor_set(v_reuseFailAlloc_3678_, 1, v___x_3675_);
v___x_3677_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3676_;
}
v_reusejp_3676_:
{
return v___x_3677_;
}
}
}
case 4:
{
lean_object* v_k_u2080_3681_; lean_object* v_k_u2081_3682_; lean_object* v___x_3683_; lean_object* v___x_3684_; lean_object* v___x_3685_; 
v_k_u2080_3681_ = lean_ctor_get(v_x_3660_, 0);
lean_inc(v_k_u2080_3681_);
v_k_u2081_3682_ = lean_ctor_get(v_x_3660_, 1);
lean_inc(v_k_u2081_3682_);
lean_dec_ref_known(v_x_3660_, 4);
v___x_3683_ = lean_box(0);
v___x_3684_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3684_, 0, v_k_u2081_3682_);
lean_ctor_set(v___x_3684_, 1, v___x_3683_);
v___x_3685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3685_, 0, v_k_u2080_3681_);
lean_ctor_set(v___x_3685_, 1, v___x_3684_);
return v___x_3685_;
}
case 5:
{
lean_object* v_k_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3694_; 
v_k_3686_ = lean_ctor_get(v_x_3660_, 0);
v_isSharedCheck_3694_ = !lean_is_exclusive(v_x_3660_);
if (v_isSharedCheck_3694_ == 0)
{
lean_object* v_unused_3695_; 
v_unused_3695_ = lean_ctor_get(v_x_3660_, 1);
lean_dec(v_unused_3695_);
v___x_3688_ = v_x_3660_;
v_isShared_3689_ = v_isSharedCheck_3694_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_k_3686_);
lean_dec(v_x_3660_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3694_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3690_; lean_object* v___x_3692_; 
v___x_3690_ = lean_box(0);
if (v_isShared_3689_ == 0)
{
lean_ctor_set_tag(v___x_3688_, 1);
lean_ctor_set(v___x_3688_, 1, v___x_3690_);
v___x_3692_ = v___x_3688_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3693_; 
v_reuseFailAlloc_3693_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3693_, 0, v_k_3686_);
lean_ctor_set(v_reuseFailAlloc_3693_, 1, v___x_3690_);
v___x_3692_ = v_reuseFailAlloc_3693_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
return v___x_3692_;
}
}
}
case 7:
{
lean_object* v_k_3696_; 
v_k_3696_ = lean_ctor_get(v_x_3660_, 0);
lean_inc(v_k_3696_);
lean_dec_ref_known(v_x_3660_, 4);
v_k_3666_ = v_k_3696_;
goto v___jp_3665_;
}
case 8:
{
lean_object* v_k_3697_; 
v_k_3697_ = lean_ctor_get(v_x_3660_, 0);
lean_inc(v_k_3697_);
lean_dec_ref_known(v_x_3660_, 4);
v_k_3666_ = v_k_3697_;
goto v___jp_3665_;
}
default: 
{
lean_object* v_k_3698_; lean_object* v___x_3699_; lean_object* v___x_3700_; 
v_k_3698_ = lean_ctor_get(v_x_3660_, 0);
lean_inc(v_k_3698_);
lean_dec_ref(v_x_3660_);
v___x_3699_ = lean_box(0);
v___x_3700_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3700_, 0, v_k_3698_);
lean_ctor_set(v___x_3700_, 1, v___x_3699_);
return v___x_3700_;
}
}
v___jp_3661_:
{
lean_object* v___x_3663_; lean_object* v___x_3664_; 
v___x_3663_ = lean_box(0);
v___x_3664_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3664_, 0, v_k_3662_);
lean_ctor_set(v___x_3664_, 1, v___x_3663_);
return v___x_3664_;
}
v___jp_3665_:
{
lean_object* v___x_3667_; lean_object* v___x_3668_; 
v___x_3667_ = lean_box(0);
v___x_3668_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3668_, 0, v_k_3666_);
lean_ctor_set(v___x_3668_, 1, v___x_3667_);
return v___x_3668_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(lean_object* v_cfg_3720_, lean_object* v_names_3721_, lean_object* v_as_x27_3722_, lean_object* v_b_3723_){
_start:
{
if (lean_obj_tag(v_as_x27_3722_) == 0)
{
lean_dec_ref(v_names_3721_);
lean_dec_ref(v_cfg_3720_);
return v_b_3723_;
}
else
{
lean_object* v_head_3724_; lean_object* v_snd_3725_; lean_object* v_fst_3726_; lean_object* v_tail_3727_; lean_object* v_snd_3728_; lean_object* v_fst_3729_; lean_object* v___x_3731_; uint8_t v_isShared_3732_; uint8_t v_isSharedCheck_3926_; 
v_head_3724_ = lean_ctor_get(v_as_x27_3722_, 0);
v_snd_3725_ = lean_ctor_get(v_b_3723_, 1);
lean_inc(v_snd_3725_);
v_fst_3726_ = lean_ctor_get(v_head_3724_, 0);
v_tail_3727_ = lean_ctor_get(v_as_x27_3722_, 1);
v_snd_3728_ = lean_ctor_get(v_head_3724_, 1);
v_fst_3729_ = lean_ctor_get(v_b_3723_, 0);
v_isSharedCheck_3926_ = !lean_is_exclusive(v_b_3723_);
if (v_isSharedCheck_3926_ == 0)
{
lean_object* v_unused_3927_; 
v_unused_3927_ = lean_ctor_get(v_b_3723_, 1);
lean_dec(v_unused_3927_);
v___x_3731_ = v_b_3723_;
v_isShared_3732_ = v_isSharedCheck_3926_;
goto v_resetjp_3730_;
}
else
{
lean_inc(v_fst_3729_);
lean_dec(v_b_3723_);
v___x_3731_ = lean_box(0);
v_isShared_3732_ = v_isSharedCheck_3926_;
goto v_resetjp_3730_;
}
v_resetjp_3730_:
{
lean_object* v_fst_3733_; lean_object* v_snd_3734_; lean_object* v___x_3736_; uint8_t v_isShared_3737_; uint8_t v_isSharedCheck_3925_; 
v_fst_3733_ = lean_ctor_get(v_snd_3725_, 0);
v_snd_3734_ = lean_ctor_get(v_snd_3725_, 1);
v_isSharedCheck_3925_ = !lean_is_exclusive(v_snd_3725_);
if (v_isSharedCheck_3925_ == 0)
{
v___x_3736_ = v_snd_3725_;
v_isShared_3737_ = v_isSharedCheck_3925_;
goto v_resetjp_3735_;
}
else
{
lean_inc(v_snd_3734_);
lean_inc(v_fst_3733_);
lean_dec(v_snd_3725_);
v___x_3736_ = lean_box(0);
v_isShared_3737_ = v_isSharedCheck_3925_;
goto v_resetjp_3735_;
}
v_resetjp_3735_:
{
lean_object* v_name_3738_; lean_object* v_sectionName_3739_; lean_object* v_surface_3740_; lean_object* v_kind_3741_; lean_object* v_step_3742_; lean_object* v_requiresText_3743_; lean_object* v_ensuresText_3744_; lean_object* v_before_3745_; lean_object* v_after_3746_; lean_object* v_algebra_3747_; lean_object* v___y_3749_; lean_object* v___y_3750_; lean_object* v___y_3751_; lean_object* v___y_3752_; lean_object* v___y_3753_; lean_object* v___y_3754_; lean_object* v___y_3755_; lean_object* v___y_3756_; lean_object* v___y_3757_; lean_object* v___y_3758_; lean_object* v___y_3759_; lean_object* v___y_3760_; lean_object* v___y_3761_; lean_object* v___y_3762_; lean_object* v___y_3763_; lean_object* v___y_3764_; uint8_t v___y_3765_; lean_object* v___y_3766_; lean_object* v_op_3808_; lean_object* v_requires_3809_; lean_object* v_ensures_3810_; lean_object* v___y_3812_; lean_object* v___y_3813_; lean_object* v___y_3814_; lean_object* v___y_3815_; lean_object* v___y_3816_; lean_object* v___y_3817_; lean_object* v___y_3818_; lean_object* v___y_3819_; lean_object* v___y_3820_; lean_object* v___y_3821_; lean_object* v___y_3822_; lean_object* v___y_3823_; lean_object* v___y_3824_; lean_object* v___y_3825_; lean_object* v___y_3826_; uint8_t v___y_3827_; lean_object* v___y_3828_; lean_object* v___y_3836_; lean_object* v___y_3837_; lean_object* v___y_3838_; lean_object* v___y_3839_; lean_object* v___y_3840_; lean_object* v___y_3841_; lean_object* v___y_3842_; lean_object* v___y_3843_; lean_object* v___y_3844_; lean_object* v___y_3845_; lean_object* v___y_3846_; lean_object* v___y_3847_; lean_object* v___y_3848_; lean_object* v___y_3849_; uint8_t v___y_3850_; lean_object* v___y_3851_; uint8_t v___x_3860_; uint8_t v___x_3861_; uint8_t v___x_3862_; lean_object* v___y_3864_; lean_object* v___y_3865_; lean_object* v___y_3866_; lean_object* v___y_3867_; lean_object* v___y_3868_; lean_object* v___y_3869_; uint8_t v___y_3870_; lean_object* v___y_3871_; uint8_t v___y_3902_; uint8_t v___x_3923_; 
v_name_3738_ = lean_ctor_get(v_fst_3726_, 0);
v_sectionName_3739_ = lean_ctor_get(v_fst_3726_, 1);
v_surface_3740_ = lean_ctor_get(v_fst_3726_, 2);
v_kind_3741_ = lean_ctor_get(v_fst_3726_, 3);
v_step_3742_ = lean_ctor_get(v_fst_3726_, 5);
v_requiresText_3743_ = lean_ctor_get(v_fst_3726_, 6);
v_ensuresText_3744_ = lean_ctor_get(v_fst_3726_, 7);
v_before_3745_ = lean_ctor_get(v_fst_3726_, 8);
v_after_3746_ = lean_ctor_get(v_fst_3726_, 9);
v_algebra_3747_ = lean_ctor_get(v_fst_3726_, 10);
v_op_3808_ = lean_ctor_get(v_step_3742_, 0);
v_requires_3809_ = lean_ctor_get(v_step_3742_, 1);
v_ensures_3810_ = lean_ctor_get(v_step_3742_, 2);
lean_inc(v_requires_3809_);
v___x_3860_ = lp_choreo_Choreo_Pred_holds(v_requires_3809_, v_fst_3729_);
lean_inc_ref_n(v_cfg_3720_, 2);
lean_inc_ref(v_op_3808_);
v___x_3861_ = lp_choreo_Choreo_Op_enabled(v_op_3808_, v_cfg_3720_, v_fst_3729_);
lean_inc_ref(v_step_3742_);
v___x_3862_ = lp_choreo_Choreo_Step_ok(v_step_3742_, v_cfg_3720_, v_fst_3729_);
v___x_3923_ = lean_unbox(v_snd_3734_);
if (v___x_3923_ == 0)
{
uint8_t v___x_3924_; 
v___x_3924_ = lean_unbox(v_snd_3734_);
lean_dec(v_snd_3734_);
v___y_3902_ = v___x_3924_;
goto v___jp_3901_;
}
else
{
lean_dec(v_snd_3734_);
v___y_3902_ = v___x_3862_;
goto v___jp_3901_;
}
v___jp_3748_:
{
lean_object* v___x_3767_; lean_object* v___x_3769_; 
lean_inc_ref(v___y_3766_);
v___x_3767_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3767_, 0, v___y_3766_);
lean_inc_ref(v___y_3749_);
if (v_isShared_3737_ == 0)
{
lean_ctor_set(v___x_3736_, 1, v___x_3767_);
lean_ctor_set(v___x_3736_, 0, v___y_3749_);
v___x_3769_ = v___x_3736_;
goto v_reusejp_3768_;
}
else
{
lean_object* v_reuseFailAlloc_3807_; 
v_reuseFailAlloc_3807_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3807_, 0, v___y_3749_);
lean_ctor_set(v_reuseFailAlloc_3807_, 1, v___x_3767_);
v___x_3769_ = v_reuseFailAlloc_3807_;
goto v_reusejp_3768_;
}
v_reusejp_3768_:
{
lean_object* v___x_3770_; lean_object* v___x_3771_; lean_object* v___x_3772_; lean_object* v___x_3773_; lean_object* v___x_3774_; lean_object* v___x_3776_; 
v___x_3770_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__0));
v___x_3771_ = lean_box(0);
lean_inc(v_before_3745_);
v___x_3772_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(v_before_3745_, v___x_3771_);
v___x_3773_ = lean_array_mk(v___x_3772_);
v___x_3774_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3774_, 0, v___x_3773_);
if (v_isShared_3732_ == 0)
{
lean_ctor_set(v___x_3731_, 1, v___x_3774_);
lean_ctor_set(v___x_3731_, 0, v___x_3770_);
v___x_3776_ = v___x_3731_;
goto v_reusejp_3775_;
}
else
{
lean_object* v_reuseFailAlloc_3806_; 
v_reuseFailAlloc_3806_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3806_, 0, v___x_3770_);
lean_ctor_set(v_reuseFailAlloc_3806_, 1, v___x_3774_);
v___x_3776_ = v_reuseFailAlloc_3806_;
goto v_reusejp_3775_;
}
v_reusejp_3775_:
{
lean_object* v___x_3777_; lean_object* v___x_3778_; lean_object* v___x_3779_; lean_object* v___x_3780_; lean_object* v___x_3781_; lean_object* v___x_3782_; lean_object* v___x_3783_; lean_object* v___x_3784_; lean_object* v___x_3785_; lean_object* v___x_3786_; lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3789_; lean_object* v___x_3790_; lean_object* v___x_3791_; lean_object* v___x_3792_; lean_object* v___x_3793_; lean_object* v___x_3794_; lean_object* v___x_3795_; lean_object* v___x_3796_; lean_object* v___x_3797_; lean_object* v___x_3798_; lean_object* v___x_3799_; lean_object* v___x_3800_; lean_object* v___x_3801_; lean_object* v___x_3802_; lean_object* v___x_3803_; lean_object* v___x_3804_; 
v___x_3777_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__1));
lean_inc_n(v_after_3746_, 2);
v___x_3778_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(v_after_3746_, v___x_3771_);
v___x_3779_ = lean_array_mk(v___x_3778_);
v___x_3780_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3780_, 0, v___x_3779_);
v___x_3781_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3781_, 0, v___x_3777_);
lean_ctor_set(v___x_3781_, 1, v___x_3780_);
v___x_3782_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3782_, 0, v___x_3781_);
lean_ctor_set(v___x_3782_, 1, v___x_3771_);
v___x_3783_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3783_, 0, v___x_3776_);
lean_ctor_set(v___x_3783_, 1, v___x_3782_);
v___x_3784_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3784_, 0, v___x_3769_);
lean_ctor_set(v___x_3784_, 1, v___x_3783_);
v___x_3785_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3785_, 0, v___y_3753_);
lean_ctor_set(v___x_3785_, 1, v___x_3784_);
v___x_3786_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3786_, 0, v___y_3763_);
lean_ctor_set(v___x_3786_, 1, v___x_3785_);
v___x_3787_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3787_, 0, v___y_3754_);
lean_ctor_set(v___x_3787_, 1, v___x_3786_);
v___x_3788_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3788_, 0, v___y_3757_);
lean_ctor_set(v___x_3788_, 1, v___x_3787_);
v___x_3789_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3789_, 0, v___y_3756_);
lean_ctor_set(v___x_3789_, 1, v___x_3788_);
v___x_3790_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3790_, 0, v___y_3759_);
lean_ctor_set(v___x_3790_, 1, v___x_3789_);
v___x_3791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3791_, 0, v___y_3764_);
lean_ctor_set(v___x_3791_, 1, v___x_3790_);
v___x_3792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3792_, 0, v___y_3758_);
lean_ctor_set(v___x_3792_, 1, v___x_3791_);
v___x_3793_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3793_, 0, v___y_3751_);
lean_ctor_set(v___x_3793_, 1, v___x_3792_);
v___x_3794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3794_, 0, v___y_3760_);
lean_ctor_set(v___x_3794_, 1, v___x_3793_);
v___x_3795_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3795_, 0, v___y_3755_);
lean_ctor_set(v___x_3795_, 1, v___x_3794_);
v___x_3796_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3796_, 0, v___y_3752_);
lean_ctor_set(v___x_3796_, 1, v___x_3795_);
v___x_3797_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3797_, 0, v___y_3762_);
lean_ctor_set(v___x_3797_, 1, v___x_3796_);
v___x_3798_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3798_, 0, v___y_3750_);
lean_ctor_set(v___x_3798_, 1, v___x_3797_);
v___x_3799_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3799_, 0, v___y_3761_);
lean_ctor_set(v___x_3799_, 1, v___x_3798_);
v___x_3800_ = l_Lean_Json_mkObj(v___x_3799_);
lean_dec_ref_known(v___x_3799_, 2);
v___x_3801_ = lean_array_push(v_fst_3733_, v___x_3800_);
v___x_3802_ = lean_box(v___y_3765_);
v___x_3803_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3803_, 0, v___x_3801_);
lean_ctor_set(v___x_3803_, 1, v___x_3802_);
v___x_3804_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3804_, 0, v_after_3746_);
lean_ctor_set(v___x_3804_, 1, v___x_3803_);
v_as_x27_3722_ = v_tail_3727_;
v_b_3723_ = v___x_3804_;
goto _start;
}
}
}
v___jp_3811_:
{
lean_object* v___x_3829_; lean_object* v___x_3830_; lean_object* v___x_3831_; 
lean_inc_ref(v___y_3828_);
v___x_3829_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3829_, 0, v___y_3828_);
lean_inc_ref(v___y_3812_);
v___x_3830_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3830_, 0, v___y_3812_);
lean_ctor_set(v___x_3830_, 1, v___x_3829_);
v___x_3831_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__2));
switch(lean_obj_tag(v_op_3808_))
{
case 2:
{
lean_object* v___x_3832_; 
v___x_3832_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__3));
v___y_3749_ = v___x_3831_;
v___y_3750_ = v___y_3813_;
v___y_3751_ = v___y_3814_;
v___y_3752_ = v___y_3815_;
v___y_3753_ = v___x_3830_;
v___y_3754_ = v___y_3816_;
v___y_3755_ = v___y_3817_;
v___y_3756_ = v___y_3818_;
v___y_3757_ = v___y_3819_;
v___y_3758_ = v___y_3820_;
v___y_3759_ = v___y_3821_;
v___y_3760_ = v___y_3822_;
v___y_3761_ = v___y_3824_;
v___y_3762_ = v___y_3825_;
v___y_3763_ = v___y_3823_;
v___y_3764_ = v___y_3826_;
v___y_3765_ = v___y_3827_;
v___y_3766_ = v___x_3832_;
goto v___jp_3748_;
}
case 3:
{
lean_object* v___x_3833_; 
v___x_3833_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__3));
v___y_3749_ = v___x_3831_;
v___y_3750_ = v___y_3813_;
v___y_3751_ = v___y_3814_;
v___y_3752_ = v___y_3815_;
v___y_3753_ = v___x_3830_;
v___y_3754_ = v___y_3816_;
v___y_3755_ = v___y_3817_;
v___y_3756_ = v___y_3818_;
v___y_3757_ = v___y_3819_;
v___y_3758_ = v___y_3820_;
v___y_3759_ = v___y_3821_;
v___y_3760_ = v___y_3822_;
v___y_3761_ = v___y_3824_;
v___y_3762_ = v___y_3825_;
v___y_3763_ = v___y_3823_;
v___y_3764_ = v___y_3826_;
v___y_3765_ = v___y_3827_;
v___y_3766_ = v___x_3833_;
goto v___jp_3748_;
}
default: 
{
lean_object* v___x_3834_; 
v___x_3834_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__4));
v___y_3749_ = v___x_3831_;
v___y_3750_ = v___y_3813_;
v___y_3751_ = v___y_3814_;
v___y_3752_ = v___y_3815_;
v___y_3753_ = v___x_3830_;
v___y_3754_ = v___y_3816_;
v___y_3755_ = v___y_3817_;
v___y_3756_ = v___y_3818_;
v___y_3757_ = v___y_3819_;
v___y_3758_ = v___y_3820_;
v___y_3759_ = v___y_3821_;
v___y_3760_ = v___y_3822_;
v___y_3761_ = v___y_3824_;
v___y_3762_ = v___y_3825_;
v___y_3763_ = v___y_3823_;
v___y_3764_ = v___y_3826_;
v___y_3765_ = v___y_3827_;
v___y_3766_ = v___x_3834_;
goto v___jp_3748_;
}
}
}
v___jp_3835_:
{
lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; 
v___x_3852_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3852_, 0, v___y_3851_);
lean_inc_ref(v___y_3839_);
v___x_3853_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3853_, 0, v___y_3839_);
lean_ctor_set(v___x_3853_, 1, v___x_3852_);
v___x_3854_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5));
if (lean_obj_tag(v_algebra_3747_) == 0)
{
lean_object* v___x_3855_; 
v___x_3855_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
v___y_3812_ = v___x_3854_;
v___y_3813_ = v___y_3836_;
v___y_3814_ = v___y_3837_;
v___y_3815_ = v___y_3838_;
v___y_3816_ = v___y_3840_;
v___y_3817_ = v___y_3841_;
v___y_3818_ = v___y_3842_;
v___y_3819_ = v___y_3843_;
v___y_3820_ = v___y_3844_;
v___y_3821_ = v___y_3845_;
v___y_3822_ = v___y_3846_;
v___y_3823_ = v___x_3853_;
v___y_3824_ = v___y_3847_;
v___y_3825_ = v___y_3848_;
v___y_3826_ = v___y_3849_;
v___y_3827_ = v___y_3850_;
v___y_3828_ = v___x_3855_;
goto v___jp_3811_;
}
else
{
lean_object* v_val_3856_; 
v_val_3856_ = lean_ctor_get(v_algebra_3747_, 0);
switch(lean_obj_tag(v_val_3856_))
{
case 0:
{
lean_object* v___x_3857_; 
v___x_3857_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6));
v___y_3812_ = v___x_3854_;
v___y_3813_ = v___y_3836_;
v___y_3814_ = v___y_3837_;
v___y_3815_ = v___y_3838_;
v___y_3816_ = v___y_3840_;
v___y_3817_ = v___y_3841_;
v___y_3818_ = v___y_3842_;
v___y_3819_ = v___y_3843_;
v___y_3820_ = v___y_3844_;
v___y_3821_ = v___y_3845_;
v___y_3822_ = v___y_3846_;
v___y_3823_ = v___x_3853_;
v___y_3824_ = v___y_3847_;
v___y_3825_ = v___y_3848_;
v___y_3826_ = v___y_3849_;
v___y_3827_ = v___y_3850_;
v___y_3828_ = v___x_3857_;
goto v___jp_3811_;
}
case 1:
{
lean_object* v___x_3858_; 
v___x_3858_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7));
v___y_3812_ = v___x_3854_;
v___y_3813_ = v___y_3836_;
v___y_3814_ = v___y_3837_;
v___y_3815_ = v___y_3838_;
v___y_3816_ = v___y_3840_;
v___y_3817_ = v___y_3841_;
v___y_3818_ = v___y_3842_;
v___y_3819_ = v___y_3843_;
v___y_3820_ = v___y_3844_;
v___y_3821_ = v___y_3845_;
v___y_3822_ = v___y_3846_;
v___y_3823_ = v___x_3853_;
v___y_3824_ = v___y_3847_;
v___y_3825_ = v___y_3848_;
v___y_3826_ = v___y_3849_;
v___y_3827_ = v___y_3850_;
v___y_3828_ = v___x_3858_;
goto v___jp_3811_;
}
default: 
{
lean_object* v___x_3859_; 
v___x_3859_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8));
v___y_3812_ = v___x_3854_;
v___y_3813_ = v___y_3836_;
v___y_3814_ = v___y_3837_;
v___y_3815_ = v___y_3838_;
v___y_3816_ = v___y_3840_;
v___y_3817_ = v___y_3841_;
v___y_3818_ = v___y_3842_;
v___y_3819_ = v___y_3843_;
v___y_3820_ = v___y_3844_;
v___y_3821_ = v___y_3845_;
v___y_3822_ = v___y_3846_;
v___y_3823_ = v___x_3853_;
v___y_3824_ = v___y_3847_;
v___y_3825_ = v___y_3848_;
v___y_3826_ = v___y_3849_;
v___y_3827_ = v___y_3850_;
v___y_3828_ = v___x_3859_;
goto v___jp_3811_;
}
}
}
}
v___jp_3863_:
{
lean_object* v___x_3872_; lean_object* v___x_3873_; lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; lean_object* v___x_3877_; lean_object* v___x_3878_; lean_object* v___x_3879_; lean_object* v___x_3880_; lean_object* v___x_3881_; lean_object* v___x_3882_; lean_object* v___x_3883_; lean_object* v___x_3884_; lean_object* v___x_3885_; lean_object* v___x_3886_; lean_object* v___x_3887_; lean_object* v___x_3888_; lean_object* v___x_3889_; lean_object* v___x_3890_; lean_object* v___x_3891_; lean_object* v___x_3892_; lean_object* v___x_3893_; lean_object* v___x_3894_; lean_object* v___x_3895_; lean_object* v___x_3896_; lean_object* v___x_3897_; lean_object* v___x_3898_; 
v___x_3872_ = l_Lean_JsonNumber_fromNat(v___y_3871_);
v___x_3873_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3873_, 0, v___x_3872_);
lean_inc_ref(v___y_3867_);
v___x_3874_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3874_, 0, v___y_3867_);
lean_ctor_set(v___x_3874_, 1, v___x_3873_);
v___x_3875_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9));
lean_inc_ref(v_requiresText_3743_);
v___x_3876_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3876_, 0, v_requiresText_3743_);
v___x_3877_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3877_, 0, v___x_3875_);
lean_ctor_set(v___x_3877_, 1, v___x_3876_);
v___x_3878_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10));
lean_inc_ref(v_ensuresText_3744_);
v___x_3879_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3879_, 0, v_ensuresText_3744_);
v___x_3880_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3880_, 0, v___x_3878_);
lean_ctor_set(v___x_3880_, 1, v___x_3879_);
v___x_3881_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11));
lean_inc(v_requires_3809_);
v___x_3882_ = lp_choreo_Choreo_predL(v_requires_3809_);
v___x_3883_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3883_, 0, v___x_3882_);
v___x_3884_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3884_, 0, v___x_3881_);
lean_ctor_set(v___x_3884_, 1, v___x_3883_);
v___x_3885_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12));
lean_inc(v_ensures_3810_);
v___x_3886_ = lp_choreo_Choreo_predL(v_ensures_3810_);
v___x_3887_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3887_, 0, v___x_3886_);
v___x_3888_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3888_, 0, v___x_3885_);
lean_ctor_set(v___x_3888_, 1, v___x_3887_);
v___x_3889_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13));
v___x_3890_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3890_, 0, v___x_3860_);
v___x_3891_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3891_, 0, v___x_3889_);
lean_ctor_set(v___x_3891_, 1, v___x_3890_);
v___x_3892_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14));
v___x_3893_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3893_, 0, v___x_3861_);
v___x_3894_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3894_, 0, v___x_3892_);
lean_ctor_set(v___x_3894_, 1, v___x_3893_);
v___x_3895_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
v___x_3896_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3896_, 0, v___x_3862_);
v___x_3897_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3897_, 0, v___x_3895_);
lean_ctor_set(v___x_3897_, 1, v___x_3896_);
v___x_3898_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__15));
if (v___x_3860_ == 0)
{
lean_object* v___x_3899_; 
lean_inc(v_requires_3809_);
lean_inc_ref(v_names_3721_);
v___x_3899_ = lp_choreo_Choreo_Pred_whyNot(v_names_3721_, v_fst_3729_, v_requires_3809_);
lean_dec(v_fst_3729_);
v___y_3836_ = v___y_3865_;
v___y_3837_ = v___x_3877_;
v___y_3838_ = v___y_3866_;
v___y_3839_ = v___x_3898_;
v___y_3840_ = v___x_3897_;
v___y_3841_ = v___y_3864_;
v___y_3842_ = v___x_3891_;
v___y_3843_ = v___x_3894_;
v___y_3844_ = v___x_3880_;
v___y_3845_ = v___x_3888_;
v___y_3846_ = v___x_3874_;
v___y_3847_ = v___y_3869_;
v___y_3848_ = v___y_3868_;
v___y_3849_ = v___x_3884_;
v___y_3850_ = v___y_3870_;
v___y_3851_ = v___x_3899_;
goto v___jp_3835_;
}
else
{
lean_object* v___x_3900_; 
lean_dec(v_fst_3729_);
v___x_3900_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
v___y_3836_ = v___y_3865_;
v___y_3837_ = v___x_3877_;
v___y_3838_ = v___y_3866_;
v___y_3839_ = v___x_3898_;
v___y_3840_ = v___x_3897_;
v___y_3841_ = v___y_3864_;
v___y_3842_ = v___x_3891_;
v___y_3843_ = v___x_3894_;
v___y_3844_ = v___x_3880_;
v___y_3845_ = v___x_3888_;
v___y_3846_ = v___x_3874_;
v___y_3847_ = v___y_3869_;
v___y_3848_ = v___y_3868_;
v___y_3849_ = v___x_3884_;
v___y_3850_ = v___y_3870_;
v___y_3851_ = v___x_3900_;
goto v___jp_3835_;
}
}
v___jp_3901_:
{
lean_object* v___x_3903_; lean_object* v___x_3904_; lean_object* v___x_3905_; lean_object* v___x_3906_; lean_object* v___x_3907_; lean_object* v___x_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3912_; lean_object* v___x_3913_; lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3916_; lean_object* v___x_3917_; lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3920_; 
v___x_3903_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__0));
lean_inc(v_snd_3728_);
v___x_3904_ = l_Lean_JsonNumber_fromNat(v_snd_3728_);
v___x_3905_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3905_, 0, v___x_3904_);
v___x_3906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3906_, 0, v___x_3903_);
lean_ctor_set(v___x_3906_, 1, v___x_3905_);
v___x_3907_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__16));
lean_inc(v_surface_3740_);
v___x_3908_ = l_Lean_JsonNumber_fromNat(v_surface_3740_);
v___x_3909_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3909_, 0, v___x_3908_);
v___x_3910_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3910_, 0, v___x_3907_);
lean_ctor_set(v___x_3910_, 1, v___x_3909_);
v___x_3911_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__17));
lean_inc_ref(v_sectionName_3739_);
v___x_3912_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3912_, 0, v_sectionName_3739_);
v___x_3913_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3913_, 0, v___x_3911_);
lean_ctor_set(v___x_3913_, 1, v___x_3912_);
v___x_3914_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0));
lean_inc_ref(v_name_3738_);
v___x_3915_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3915_, 0, v_name_3738_);
v___x_3916_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3916_, 0, v___x_3914_);
lean_ctor_set(v___x_3916_, 1, v___x_3915_);
v___x_3917_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
lean_inc_ref(v_kind_3741_);
v___x_3918_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3918_, 0, v_kind_3741_);
v___x_3919_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3919_, 0, v___x_3917_);
lean_ctor_set(v___x_3919_, 1, v___x_3918_);
v___x_3920_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__18));
if (lean_obj_tag(v_op_3808_) == 3)
{
lean_object* v_beats_3921_; 
v_beats_3921_ = lean_ctor_get(v_op_3808_, 4);
lean_inc(v_beats_3921_);
v___y_3864_ = v___x_3919_;
v___y_3865_ = v___x_3910_;
v___y_3866_ = v___x_3916_;
v___y_3867_ = v___x_3920_;
v___y_3868_ = v___x_3913_;
v___y_3869_ = v___x_3906_;
v___y_3870_ = v___y_3902_;
v___y_3871_ = v_beats_3921_;
goto v___jp_3863_;
}
else
{
lean_object* v_beats_3922_; 
v_beats_3922_ = lean_ctor_get(v_op_3808_, 1);
lean_inc(v_beats_3922_);
v___y_3864_ = v___x_3919_;
v___y_3865_ = v___x_3910_;
v___y_3866_ = v___x_3916_;
v___y_3867_ = v___x_3920_;
v___y_3868_ = v___x_3913_;
v___y_3869_ = v___x_3906_;
v___y_3870_ = v___y_3902_;
v___y_3871_ = v_beats_3922_;
goto v___jp_3863_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___boxed(lean_object* v_cfg_3928_, lean_object* v_names_3929_, lean_object* v_as_x27_3930_, lean_object* v_b_3931_){
_start:
{
lean_object* v_res_3932_; 
v_res_3932_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(v_cfg_3928_, v_names_3929_, v_as_x27_3930_, v_b_3931_);
lean_dec(v_as_x27_3930_);
return v_res_3932_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1(lean_object* v_a_3936_, lean_object* v_a_3937_){
_start:
{
if (lean_obj_tag(v_a_3936_) == 0)
{
lean_object* v___x_3938_; 
v___x_3938_ = l_List_reverse___redArg(v_a_3937_);
return v___x_3938_;
}
else
{
lean_object* v_head_3939_; lean_object* v_tail_3940_; lean_object* v___x_3942_; uint8_t v_isShared_3943_; uint8_t v_isSharedCheck_3985_; 
v_head_3939_ = lean_ctor_get(v_a_3936_, 0);
v_tail_3940_ = lean_ctor_get(v_a_3936_, 1);
v_isSharedCheck_3985_ = !lean_is_exclusive(v_a_3936_);
if (v_isSharedCheck_3985_ == 0)
{
v___x_3942_ = v_a_3936_;
v_isShared_3943_ = v_isSharedCheck_3985_;
goto v_resetjp_3941_;
}
else
{
lean_inc(v_tail_3940_);
lean_inc(v_head_3939_);
lean_dec(v_a_3936_);
v___x_3942_ = lean_box(0);
v_isShared_3943_ = v_isSharedCheck_3985_;
goto v_resetjp_3941_;
}
v_resetjp_3941_:
{
lean_object* v___y_3945_; lean_object* v___y_3946_; lean_object* v_surface_3947_; lean_object* v___x_3972_; lean_object* v___x_3973_; lean_object* v_surface_3975_; 
v___x_3972_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__1));
v___x_3973_ = lean_unsigned_to_nat(0u);
if (lean_obj_tag(v_head_3939_) == 0)
{
v_surface_3975_ = v___x_3973_;
goto v___jp_3974_;
}
else
{
lean_object* v_head_3983_; lean_object* v_surface_3984_; 
v_head_3983_ = lean_ctor_get(v_head_3939_, 0);
v_surface_3984_ = lean_ctor_get(v_head_3983_, 2);
lean_inc(v_surface_3984_);
v_surface_3975_ = v_surface_3984_;
goto v___jp_3974_;
}
v___jp_3944_:
{
lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3956_; lean_object* v___x_3957_; lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3964_; 
v___x_3948_ = l_Lean_JsonNumber_fromNat(v_surface_3947_);
v___x_3949_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
lean_inc_ref(v___y_3945_);
v___x_3950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___y_3945_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__0));
v___x_3952_ = l_List_lengthTR___redArg(v_head_3939_);
v___x_3953_ = l_Lean_JsonNumber_fromNat(v___x_3952_);
v___x_3954_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
v___x_3955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3951_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
v___x_3956_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__8));
v___x_3957_ = lean_box(0);
v___x_3958_ = lp_choreo_List_mapTR_loop___at___00Choreo_buildProgram_spec__7(v_head_3939_, v___x_3957_);
v___x_3959_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(v___x_3958_, v___x_3957_);
v___x_3960_ = lean_array_mk(v___x_3959_);
v___x_3961_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3960_);
v___x_3962_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3956_);
lean_ctor_set(v___x_3962_, 1, v___x_3961_);
if (v_isShared_3943_ == 0)
{
lean_ctor_set(v___x_3942_, 1, v___x_3957_);
lean_ctor_set(v___x_3942_, 0, v___x_3962_);
v___x_3964_ = v___x_3942_;
goto v_reusejp_3963_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v___x_3962_);
lean_ctor_set(v_reuseFailAlloc_3971_, 1, v___x_3957_);
v___x_3964_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3963_;
}
v_reusejp_3963_:
{
lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3955_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3950_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3967_, 0, v___y_3946_);
lean_ctor_set(v___x_3967_, 1, v___x_3966_);
v___x_3968_ = l_Lean_Json_mkObj(v___x_3967_);
lean_dec_ref_known(v___x_3967_, 2);
v___x_3969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
lean_ctor_set(v___x_3969_, 1, v_a_3937_);
v_a_3936_ = v_tail_3940_;
v_a_3937_ = v___x_3969_;
goto _start;
}
}
v___jp_3974_:
{
lean_object* v___x_3976_; lean_object* v___x_3977_; lean_object* v___x_3978_; lean_object* v___x_3979_; lean_object* v___x_3980_; 
v___x_3976_ = l_Lean_JsonNumber_fromNat(v_surface_3975_);
v___x_3977_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3977_, 0, v___x_3976_);
v___x_3978_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3978_, 0, v___x_3972_);
lean_ctor_set(v___x_3978_, 1, v___x_3977_);
v___x_3979_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__2));
v___x_3980_ = l_List_getLast_x3f___redArg(v_head_3939_);
if (lean_obj_tag(v___x_3980_) == 0)
{
v___y_3945_ = v___x_3979_;
v___y_3946_ = v___x_3978_;
v_surface_3947_ = v___x_3973_;
goto v___jp_3944_;
}
else
{
lean_object* v_val_3981_; lean_object* v_surface_3982_; 
v_val_3981_ = lean_ctor_get(v___x_3980_, 0);
lean_inc(v_val_3981_);
lean_dec_ref_known(v___x_3980_, 1);
v_surface_3982_ = lean_ctor_get(v_val_3981_, 2);
lean_inc(v_surface_3982_);
lean_dec(v_val_3981_);
v___y_3945_ = v___x_3979_;
v___y_3946_ = v___x_3978_;
v_surface_3947_ = v_surface_3982_;
goto v___jp_3944_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programJson(lean_object* v_cfg_3992_, lean_object* v_steps_3993_, lean_object* v_start_3994_, lean_object* v_names_3995_){
_start:
{
lean_object* v___x_3996_; lean_object* v___x_3997_; lean_object* v___x_3998_; lean_object* v___x_3999_; lean_object* v___x_4000_; lean_object* v_snd_4001_; lean_object* v___x_4003_; uint8_t v_isShared_4004_; uint8_t v_isSharedCheck_4043_; 
v___x_3996_ = lean_unsigned_to_nat(0u);
lean_inc(v_steps_3993_);
v___x_3997_ = l_List_zipIdxTR___redArg(v_steps_3993_, v___x_3996_);
v___x_3998_ = ((lean_object*)(lp_choreo_Choreo_programJson___closed__0));
v___x_3999_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3999_, 0, v_start_3994_);
lean_ctor_set(v___x_3999_, 1, v___x_3998_);
lean_inc_ref(v_cfg_3992_);
v___x_4000_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(v_cfg_3992_, v_names_3995_, v___x_3997_, v___x_3999_);
lean_dec(v___x_3997_);
v_snd_4001_ = lean_ctor_get(v___x_4000_, 1);
v_isSharedCheck_4043_ = !lean_is_exclusive(v___x_4000_);
if (v_isSharedCheck_4043_ == 0)
{
lean_object* v_unused_4044_; 
v_unused_4044_ = lean_ctor_get(v___x_4000_, 0);
lean_dec(v_unused_4044_);
v___x_4003_ = v___x_4000_;
v_isShared_4004_ = v_isSharedCheck_4043_;
goto v_resetjp_4002_;
}
else
{
lean_inc(v_snd_4001_);
lean_dec(v___x_4000_);
v___x_4003_ = lean_box(0);
v_isShared_4004_ = v_isSharedCheck_4043_;
goto v_resetjp_4002_;
}
v_resetjp_4002_:
{
lean_object* v_fst_4005_; lean_object* v_snd_4006_; lean_object* v___x_4008_; uint8_t v_isShared_4009_; uint8_t v_isSharedCheck_4042_; 
v_fst_4005_ = lean_ctor_get(v_snd_4001_, 0);
v_snd_4006_ = lean_ctor_get(v_snd_4001_, 1);
v_isSharedCheck_4042_ = !lean_is_exclusive(v_snd_4001_);
if (v_isSharedCheck_4042_ == 0)
{
v___x_4008_ = v_snd_4001_;
v_isShared_4009_ = v_isSharedCheck_4042_;
goto v_resetjp_4007_;
}
else
{
lean_inc(v_snd_4006_);
lean_inc(v_fst_4005_);
lean_dec(v_snd_4001_);
v___x_4008_ = lean_box(0);
v_isShared_4009_ = v_isSharedCheck_4042_;
goto v_resetjp_4007_;
}
v_resetjp_4007_:
{
lean_object* v_n_4010_; lean_object* v___x_4011_; lean_object* v___x_4012_; lean_object* v___x_4013_; lean_object* v___x_4014_; lean_object* v___x_4015_; lean_object* v___x_4017_; 
v_n_4010_ = lean_ctor_get(v_cfg_3992_, 0);
lean_inc(v_n_4010_);
lean_dec_ref(v_cfg_3992_);
v___x_4011_ = lp_choreo_Choreo_algebraRuns(v_steps_3993_);
v___x_4012_ = lean_box(0);
v___x_4013_ = lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1(v___x_4011_, v___x_4012_);
v___x_4014_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__0));
v___x_4015_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4015_, 0, v_fst_4005_);
if (v_isShared_4009_ == 0)
{
lean_ctor_set(v___x_4008_, 1, v___x_4015_);
lean_ctor_set(v___x_4008_, 0, v___x_4014_);
v___x_4017_ = v___x_4008_;
goto v_reusejp_4016_;
}
else
{
lean_object* v_reuseFailAlloc_4041_; 
v_reuseFailAlloc_4041_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4041_, 0, v___x_4014_);
lean_ctor_set(v_reuseFailAlloc_4041_, 1, v___x_4015_);
v___x_4017_ = v_reuseFailAlloc_4041_;
goto v_reusejp_4016_;
}
v_reusejp_4016_:
{
lean_object* v___x_4018_; lean_object* v___x_4019_; uint8_t v___x_4020_; lean_object* v___x_4022_; 
v___x_4018_ = ((lean_object*)(lp_choreo_Choreo_programJson___closed__1));
v___x_4019_ = lean_alloc_ctor(1, 0, 1);
v___x_4020_ = lean_unbox(v_snd_4006_);
lean_dec(v_snd_4006_);
lean_ctor_set_uint8(v___x_4019_, 0, v___x_4020_);
if (v_isShared_4004_ == 0)
{
lean_ctor_set(v___x_4003_, 1, v___x_4019_);
lean_ctor_set(v___x_4003_, 0, v___x_4018_);
v___x_4022_ = v___x_4003_;
goto v_reusejp_4021_;
}
else
{
lean_object* v_reuseFailAlloc_4040_; 
v_reuseFailAlloc_4040_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4040_, 0, v___x_4018_);
lean_ctor_set(v_reuseFailAlloc_4040_, 1, v___x_4019_);
v___x_4022_ = v_reuseFailAlloc_4040_;
goto v_reusejp_4021_;
}
v_reusejp_4021_:
{
lean_object* v___x_4023_; lean_object* v___x_4024_; lean_object* v___x_4025_; lean_object* v___x_4026_; lean_object* v___x_4027_; lean_object* v___x_4028_; lean_object* v___x_4029_; lean_object* v___x_4030_; lean_object* v___x_4031_; lean_object* v___x_4032_; lean_object* v___x_4033_; lean_object* v___x_4034_; lean_object* v___x_4035_; lean_object* v___x_4036_; lean_object* v___x_4037_; lean_object* v___x_4038_; lean_object* v___x_4039_; 
v___x_4023_ = ((lean_object*)(lp_choreo_Choreo_programJson___closed__2));
v___x_4024_ = lean_array_mk(v___x_4013_);
v___x_4025_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4025_, 0, v___x_4024_);
v___x_4026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4026_, 0, v___x_4023_);
lean_ctor_set(v___x_4026_, 1, v___x_4025_);
v___x_4027_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__5));
v___x_4028_ = lean_unsigned_to_nat(1u);
v___x_4029_ = lean_nat_sub(v_n_4010_, v___x_4028_);
v___x_4030_ = lean_nat_mul(v_n_4010_, v___x_4029_);
lean_dec(v___x_4029_);
lean_dec(v_n_4010_);
v___x_4031_ = lean_nat_shiftr(v___x_4030_, v___x_4028_);
lean_dec(v___x_4030_);
v___x_4032_ = l_Lean_JsonNumber_fromNat(v___x_4031_);
v___x_4033_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4033_, 0, v___x_4032_);
v___x_4034_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4034_, 0, v___x_4027_);
lean_ctor_set(v___x_4034_, 1, v___x_4033_);
v___x_4035_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4035_, 0, v___x_4034_);
lean_ctor_set(v___x_4035_, 1, v___x_4012_);
v___x_4036_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4036_, 0, v___x_4026_);
lean_ctor_set(v___x_4036_, 1, v___x_4035_);
v___x_4037_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4037_, 0, v___x_4022_);
lean_ctor_set(v___x_4037_, 1, v___x_4036_);
v___x_4038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4038_, 0, v___x_4017_);
lean_ctor_set(v___x_4038_, 1, v___x_4037_);
v___x_4039_ = l_Lean_Json_mkObj(v___x_4038_);
lean_dec_ref_known(v___x_4038_, 2);
return v___x_4039_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0(lean_object* v_cfg_4045_, lean_object* v_names_4046_, lean_object* v_as_4047_, lean_object* v_as_x27_4048_, lean_object* v_b_4049_, lean_object* v_a_4050_){
_start:
{
lean_object* v___x_4051_; 
v___x_4051_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(v_cfg_4045_, v_names_4046_, v_as_x27_4048_, v_b_4049_);
return v___x_4051_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___boxed(lean_object* v_cfg_4052_, lean_object* v_names_4053_, lean_object* v_as_4054_, lean_object* v_as_x27_4055_, lean_object* v_b_4056_, lean_object* v_a_4057_){
_start:
{
lean_object* v_res_4058_; 
v_res_4058_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0(v_cfg_4052_, v_names_4053_, v_as_4054_, v_as_x27_4055_, v_b_4056_, v_a_4057_);
lean_dec(v_as_x27_4055_);
lean_dec(v_as_4054_);
return v_res_4058_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4(lean_object* v_labels_4059_, lean_object* v_c_4060_, lean_object* v_names_4061_, lean_object* v_a_4062_, lean_object* v_a_4063_){
_start:
{
if (lean_obj_tag(v_a_4062_) == 0)
{
lean_object* v___x_4064_; 
lean_dec_ref(v_names_4061_);
lean_dec_ref(v_c_4060_);
v___x_4064_ = l_List_reverse___redArg(v_a_4063_);
return v___x_4064_;
}
else
{
lean_object* v_head_4065_; lean_object* v_tail_4066_; lean_object* v___x_4068_; uint8_t v_isShared_4069_; uint8_t v_isSharedCheck_4086_; 
v_head_4065_ = lean_ctor_get(v_a_4062_, 0);
v_tail_4066_ = lean_ctor_get(v_a_4062_, 1);
v_isSharedCheck_4086_ = !lean_is_exclusive(v_a_4062_);
if (v_isSharedCheck_4086_ == 0)
{
v___x_4068_ = v_a_4062_;
v_isShared_4069_ = v_isSharedCheck_4086_;
goto v_resetjp_4067_;
}
else
{
lean_inc(v_tail_4066_);
lean_inc(v_head_4065_);
lean_dec(v_a_4062_);
v___x_4068_ = lean_box(0);
v_isShared_4069_ = v_isSharedCheck_4086_;
goto v_resetjp_4067_;
}
v_resetjp_4067_:
{
lean_object* v___y_4071_; lean_object* v_fst_4076_; lean_object* v_snd_4077_; lean_object* v___x_4078_; uint8_t v___x_4079_; 
v_fst_4076_ = lean_ctor_get(v_head_4065_, 0);
lean_inc(v_fst_4076_);
v_snd_4077_ = lean_ctor_get(v_head_4065_, 1);
lean_inc(v_snd_4077_);
lean_dec(v_head_4065_);
v___x_4078_ = lean_array_get_size(v_labels_4059_);
v___x_4079_ = lean_nat_dec_lt(v_snd_4077_, v___x_4078_);
if (v___x_4079_ == 0)
{
lean_object* v___x_4080_; lean_object* v___x_4081_; 
v___x_4080_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
lean_inc_ref(v_names_4061_);
lean_inc_ref(v_c_4060_);
v___x_4081_ = lp_choreo_Choreo_phaseJson(v_c_4060_, v_names_4061_, v___x_4080_, v___x_4080_, v_fst_4076_, v_snd_4077_);
v___y_4071_ = v___x_4081_;
goto v___jp_4070_;
}
else
{
lean_object* v___x_4082_; lean_object* v_fst_4083_; lean_object* v_snd_4084_; lean_object* v___x_4085_; 
v___x_4082_ = lean_array_fget_borrowed(v_labels_4059_, v_snd_4077_);
v_fst_4083_ = lean_ctor_get(v___x_4082_, 0);
v_snd_4084_ = lean_ctor_get(v___x_4082_, 1);
lean_inc(v_snd_4084_);
lean_inc(v_fst_4083_);
lean_inc_ref(v_names_4061_);
lean_inc_ref(v_c_4060_);
v___x_4085_ = lp_choreo_Choreo_phaseJson(v_c_4060_, v_names_4061_, v_fst_4083_, v_snd_4084_, v_fst_4076_, v_snd_4077_);
v___y_4071_ = v___x_4085_;
goto v___jp_4070_;
}
v___jp_4070_:
{
lean_object* v___x_4073_; 
if (v_isShared_4069_ == 0)
{
lean_ctor_set(v___x_4068_, 1, v_a_4063_);
lean_ctor_set(v___x_4068_, 0, v___y_4071_);
v___x_4073_ = v___x_4068_;
goto v_reusejp_4072_;
}
else
{
lean_object* v_reuseFailAlloc_4075_; 
v_reuseFailAlloc_4075_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4075_, 0, v___y_4071_);
lean_ctor_set(v_reuseFailAlloc_4075_, 1, v_a_4063_);
v___x_4073_ = v_reuseFailAlloc_4075_;
goto v_reusejp_4072_;
}
v_reusejp_4072_:
{
v_a_4062_ = v_tail_4066_;
v_a_4063_ = v___x_4073_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4___boxed(lean_object* v_labels_4087_, lean_object* v_c_4088_, lean_object* v_names_4089_, lean_object* v_a_4090_, lean_object* v_a_4091_){
_start:
{
lean_object* v_res_4092_; 
v_res_4092_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4(v_labels_4087_, v_c_4088_, v_names_4089_, v_a_4090_, v_a_4091_);
lean_dec_ref(v_labels_4087_);
return v_res_4092_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__9(lean_object* v_a_4093_, lean_object* v_a_4094_){
_start:
{
if (lean_obj_tag(v_a_4093_) == 0)
{
lean_object* v___x_4095_; 
v___x_4095_ = l_List_reverse___redArg(v_a_4094_);
return v___x_4095_;
}
else
{
lean_object* v_head_4096_; lean_object* v_tail_4097_; lean_object* v___x_4099_; uint8_t v_isShared_4100_; uint8_t v_isSharedCheck_4122_; 
v_head_4096_ = lean_ctor_get(v_a_4093_, 0);
v_tail_4097_ = lean_ctor_get(v_a_4093_, 1);
v_isSharedCheck_4122_ = !lean_is_exclusive(v_a_4093_);
if (v_isSharedCheck_4122_ == 0)
{
v___x_4099_ = v_a_4093_;
v_isShared_4100_ = v_isSharedCheck_4122_;
goto v_resetjp_4098_;
}
else
{
lean_inc(v_tail_4097_);
lean_inc(v_head_4096_);
lean_dec(v_a_4093_);
v___x_4099_ = lean_box(0);
v_isShared_4100_ = v_isSharedCheck_4122_;
goto v_resetjp_4098_;
}
v_resetjp_4098_:
{
lean_object* v_X_4101_; lean_object* v_Y_4102_; lean_object* v_W_4103_; lean_object* v___x_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4115_; 
v_X_4101_ = lean_ctor_get(v_head_4096_, 0);
lean_inc(v_X_4101_);
v_Y_4102_ = lean_ctor_get(v_head_4096_, 1);
lean_inc(v_Y_4102_);
v_W_4103_ = lean_ctor_get(v_head_4096_, 2);
lean_inc(v_W_4103_);
lean_dec(v_head_4096_);
v___x_4104_ = lean_box(0);
v___x_4105_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__0));
v___x_4106_ = lp_choreo_Choreo_jPoly(v_X_4101_);
v___x_4107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4107_, 0, v___x_4105_);
lean_ctor_set(v___x_4107_, 1, v___x_4106_);
v___x_4108_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__1));
v___x_4109_ = lp_choreo_Choreo_jPoly(v_Y_4102_);
v___x_4110_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4110_, 0, v___x_4108_);
lean_ctor_set(v___x_4110_, 1, v___x_4109_);
v___x_4111_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__2));
v___x_4112_ = lp_choreo_Choreo_jPoly(v_W_4103_);
v___x_4113_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4113_, 0, v___x_4111_);
lean_ctor_set(v___x_4113_, 1, v___x_4112_);
if (v_isShared_4100_ == 0)
{
lean_ctor_set(v___x_4099_, 1, v___x_4104_);
lean_ctor_set(v___x_4099_, 0, v___x_4113_);
v___x_4115_ = v___x_4099_;
goto v_reusejp_4114_;
}
else
{
lean_object* v_reuseFailAlloc_4121_; 
v_reuseFailAlloc_4121_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4121_, 0, v___x_4113_);
lean_ctor_set(v_reuseFailAlloc_4121_, 1, v___x_4104_);
v___x_4115_ = v_reuseFailAlloc_4121_;
goto v_reusejp_4114_;
}
v_reusejp_4114_:
{
lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; 
v___x_4116_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4116_, 0, v___x_4110_);
lean_ctor_set(v___x_4116_, 1, v___x_4115_);
v___x_4117_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4117_, 0, v___x_4107_);
lean_ctor_set(v___x_4117_, 1, v___x_4116_);
v___x_4118_ = l_Lean_Json_mkObj(v___x_4117_);
lean_dec_ref_known(v___x_4117_, 2);
v___x_4119_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4119_, 0, v___x_4118_);
lean_ctor_set(v___x_4119_, 1, v_a_4094_);
v_a_4093_ = v_tail_4097_;
v_a_4094_ = v___x_4119_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(lean_object* v_cfg0_4123_, lean_object* v___x_4124_, lean_object* v_names_4125_, lean_object* v_a_4126_, lean_object* v_a_4127_){
_start:
{
if (lean_obj_tag(v_a_4126_) == 0)
{
lean_object* v___x_4128_; 
lean_dec_ref(v_names_4125_);
lean_dec_ref(v_cfg0_4123_);
v___x_4128_ = l_List_reverse___redArg(v_a_4127_);
return v___x_4128_;
}
else
{
lean_object* v_head_4129_; lean_object* v_tail_4130_; lean_object* v___x_4132_; uint8_t v_isShared_4133_; uint8_t v_isSharedCheck_4139_; 
v_head_4129_ = lean_ctor_get(v_a_4126_, 0);
v_tail_4130_ = lean_ctor_get(v_a_4126_, 1);
v_isSharedCheck_4139_ = !lean_is_exclusive(v_a_4126_);
if (v_isSharedCheck_4139_ == 0)
{
v___x_4132_ = v_a_4126_;
v_isShared_4133_ = v_isSharedCheck_4139_;
goto v_resetjp_4131_;
}
else
{
lean_inc(v_tail_4130_);
lean_inc(v_head_4129_);
lean_dec(v_a_4126_);
v___x_4132_ = lean_box(0);
v_isShared_4133_ = v_isSharedCheck_4139_;
goto v_resetjp_4131_;
}
v_resetjp_4131_:
{
lean_object* v___x_4134_; lean_object* v___x_4136_; 
lean_inc_ref(v_names_4125_);
lean_inc_ref(v_cfg0_4123_);
v___x_4134_ = lp_choreo_Choreo_problemJson(v_cfg0_4123_, v___x_4124_, v_names_4125_, v_head_4129_);
if (v_isShared_4133_ == 0)
{
lean_ctor_set(v___x_4132_, 1, v_a_4127_);
lean_ctor_set(v___x_4132_, 0, v___x_4134_);
v___x_4136_ = v___x_4132_;
goto v_reusejp_4135_;
}
else
{
lean_object* v_reuseFailAlloc_4138_; 
v_reuseFailAlloc_4138_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4138_, 0, v___x_4134_);
lean_ctor_set(v_reuseFailAlloc_4138_, 1, v_a_4127_);
v___x_4136_ = v_reuseFailAlloc_4138_;
goto v_reusejp_4135_;
}
v_reusejp_4135_:
{
v_a_4126_ = v_tail_4130_;
v_a_4127_ = v___x_4136_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8___boxed(lean_object* v_cfg0_4140_, lean_object* v___x_4141_, lean_object* v_names_4142_, lean_object* v_a_4143_, lean_object* v_a_4144_){
_start:
{
lean_object* v_res_4145_; 
v_res_4145_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(v_cfg0_4140_, v___x_4141_, v_names_4142_, v_a_4143_, v_a_4144_);
lean_dec(v___x_4141_);
return v_res_4145_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10(lean_object* v___x_4150_, lean_object* v___x_4151_, lean_object* v_names_4152_, lean_object* v_a_4153_, lean_object* v_a_4154_){
_start:
{
if (lean_obj_tag(v_a_4153_) == 0)
{
lean_object* v___x_4155_; 
lean_dec_ref(v_names_4152_);
lean_dec(v___x_4151_);
lean_dec(v___x_4150_);
v___x_4155_ = l_List_reverse___redArg(v_a_4154_);
return v___x_4155_;
}
else
{
lean_object* v_head_4156_; lean_object* v_draft_4157_; lean_object* v_tail_4158_; lean_object* v___x_4160_; uint8_t v_isShared_4161_; uint8_t v_isSharedCheck_4217_; 
v_head_4156_ = lean_ctor_get(v_a_4153_, 0);
lean_inc(v_head_4156_);
v_draft_4157_ = lean_ctor_get(v_head_4156_, 2);
lean_inc_ref(v_draft_4157_);
v_tail_4158_ = lean_ctor_get(v_a_4153_, 1);
v_isSharedCheck_4217_ = !lean_is_exclusive(v_a_4153_);
if (v_isSharedCheck_4217_ == 0)
{
lean_object* v_unused_4218_; 
v_unused_4218_ = lean_ctor_get(v_a_4153_, 0);
lean_dec(v_unused_4218_);
v___x_4160_ = v_a_4153_;
v_isShared_4161_ = v_isSharedCheck_4217_;
goto v_resetjp_4159_;
}
else
{
lean_inc(v_tail_4158_);
lean_dec(v_a_4153_);
v___x_4160_ = lean_box(0);
v_isShared_4161_ = v_isSharedCheck_4217_;
goto v_resetjp_4159_;
}
v_resetjp_4159_:
{
lean_object* v_title_4162_; lean_object* v_why_4163_; lean_object* v_problems_4164_; lean_object* v_startPhase_4165_; lean_object* v_label_4166_; lean_object* v_bounds_4167_; lean_object* v_beats_4168_; lean_object* v_dmin_4169_; lean_object* v___x_4170_; lean_object* v_ph_4171_; lean_object* v_paths_4172_; lean_object* v___x_4173_; lean_object* v___x_4174_; lean_object* v_cfg0_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; lean_object* v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; lean_object* v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4196_; 
v_title_4162_ = lean_ctor_get(v_head_4156_, 0);
lean_inc_ref(v_title_4162_);
v_why_4163_ = lean_ctor_get(v_head_4156_, 1);
lean_inc_ref(v_why_4163_);
v_problems_4164_ = lean_ctor_get(v_head_4156_, 3);
lean_inc(v_problems_4164_);
v_startPhase_4165_ = lean_ctor_get(v_head_4156_, 4);
lean_inc(v_startPhase_4165_);
lean_dec(v_head_4156_);
v_label_4166_ = lean_ctor_get(v_draft_4157_, 0);
lean_inc_ref(v_label_4166_);
v_bounds_4167_ = lean_ctor_get(v_draft_4157_, 3);
lean_inc_ref(v_bounds_4167_);
v_beats_4168_ = lean_ctor_get(v_draft_4157_, 4);
lean_inc(v_beats_4168_);
v_dmin_4169_ = lean_ctor_get(v_draft_4157_, 7);
lean_inc(v_dmin_4169_);
v___x_4170_ = lean_unsigned_to_nat(0u);
lean_inc_n(v___x_4150_, 2);
v_ph_4171_ = lp_choreo_Choreo_Draft_toPhase(v_draft_4157_, v___x_4150_, v___x_4170_);
lean_dec_ref(v_draft_4157_);
v_paths_4172_ = lean_ctor_get(v_ph_4171_, 2);
lean_inc(v_paths_4172_);
v___x_4173_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__0));
v___x_4174_ = lean_box(0);
lean_inc(v___x_4151_);
v_cfg0_4175_ = lp_choreo_Choreo_probeConfig(v___x_4150_, v_bounds_4167_, v___x_4151_, v_dmin_4169_);
v___x_4176_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__1));
v___x_4177_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4177_, 0, v_title_4162_);
v___x_4178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4178_, 0, v___x_4176_);
lean_ctor_set(v___x_4178_, 1, v___x_4177_);
v___x_4179_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__15));
v___x_4180_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4180_, 0, v_why_4163_);
v___x_4181_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4181_, 0, v___x_4179_);
lean_ctor_set(v___x_4181_, 1, v___x_4180_);
v___x_4182_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__3));
v___x_4183_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4183_, 0, v_label_4166_);
v___x_4184_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4184_, 0, v___x_4182_);
lean_ctor_set(v___x_4184_, 1, v___x_4183_);
v___x_4185_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__2));
v___x_4186_ = l_Lean_JsonNumber_fromNat(v_startPhase_4165_);
v___x_4187_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4187_, 0, v___x_4186_);
v___x_4188_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4188_, 0, v___x_4185_);
lean_ctor_set(v___x_4188_, 1, v___x_4187_);
v___x_4189_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__3));
v___x_4190_ = lean_unsigned_to_nat(4u);
v___x_4191_ = lean_nat_mul(v_beats_4168_, v___x_4190_);
lean_dec(v_beats_4168_);
v___x_4192_ = l_Lean_JsonNumber_fromNat(v___x_4191_);
v___x_4193_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4193_, 0, v___x_4192_);
v___x_4194_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4194_, 0, v___x_4189_);
lean_ctor_set(v___x_4194_, 1, v___x_4193_);
if (v_isShared_4161_ == 0)
{
lean_ctor_set(v___x_4160_, 1, v___x_4174_);
lean_ctor_set(v___x_4160_, 0, v_ph_4171_);
v___x_4196_ = v___x_4160_;
goto v_reusejp_4195_;
}
else
{
lean_object* v_reuseFailAlloc_4216_; 
v_reuseFailAlloc_4216_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4216_, 0, v_ph_4171_);
lean_ctor_set(v_reuseFailAlloc_4216_, 1, v___x_4174_);
v___x_4196_ = v_reuseFailAlloc_4216_;
goto v_reusejp_4195_;
}
v_reusejp_4195_:
{
lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; 
lean_inc_ref(v_names_4152_);
v___x_4197_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(v_cfg0_4175_, v___x_4196_, v_names_4152_, v_problems_4164_, v___x_4174_);
lean_dec_ref(v___x_4196_);
v___x_4198_ = lean_array_mk(v___x_4197_);
v___x_4199_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4199_, 0, v___x_4198_);
v___x_4200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4200_, 0, v___x_4173_);
lean_ctor_set(v___x_4200_, 1, v___x_4199_);
v___x_4201_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__5));
v___x_4202_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__9(v_paths_4172_, v___x_4174_);
v___x_4203_ = lean_array_mk(v___x_4202_);
v___x_4204_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4203_);
v___x_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4201_);
lean_ctor_set(v___x_4205_, 1, v___x_4204_);
v___x_4206_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4206_, 0, v___x_4205_);
lean_ctor_set(v___x_4206_, 1, v___x_4174_);
v___x_4207_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4207_, 0, v___x_4200_);
lean_ctor_set(v___x_4207_, 1, v___x_4206_);
v___x_4208_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4208_, 0, v___x_4194_);
lean_ctor_set(v___x_4208_, 1, v___x_4207_);
v___x_4209_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4188_);
lean_ctor_set(v___x_4209_, 1, v___x_4208_);
v___x_4210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4210_, 0, v___x_4184_);
lean_ctor_set(v___x_4210_, 1, v___x_4209_);
v___x_4211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4211_, 0, v___x_4181_);
lean_ctor_set(v___x_4211_, 1, v___x_4210_);
v___x_4212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4212_, 0, v___x_4178_);
lean_ctor_set(v___x_4212_, 1, v___x_4211_);
v___x_4213_ = l_Lean_Json_mkObj(v___x_4212_);
lean_dec_ref_known(v___x_4212_, 2);
v___x_4214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4213_);
lean_ctor_set(v___x_4214_, 1, v_a_4154_);
v_a_4153_ = v_tail_4158_;
v_a_4154_ = v___x_4214_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__1(lean_object* v_a_4219_, lean_object* v_a_4220_){
_start:
{
if (lean_obj_tag(v_a_4219_) == 0)
{
lean_object* v___x_4221_; 
v___x_4221_ = l_List_reverse___redArg(v_a_4220_);
return v___x_4221_;
}
else
{
lean_object* v_head_4222_; lean_object* v_tail_4223_; lean_object* v___x_4225_; uint8_t v_isShared_4226_; uint8_t v_isSharedCheck_4233_; 
v_head_4222_ = lean_ctor_get(v_a_4219_, 0);
v_tail_4223_ = lean_ctor_get(v_a_4219_, 1);
v_isSharedCheck_4233_ = !lean_is_exclusive(v_a_4219_);
if (v_isSharedCheck_4233_ == 0)
{
v___x_4225_ = v_a_4219_;
v_isShared_4226_ = v_isSharedCheck_4233_;
goto v_resetjp_4224_;
}
else
{
lean_inc(v_tail_4223_);
lean_inc(v_head_4222_);
lean_dec(v_a_4219_);
v___x_4225_ = lean_box(0);
v_isShared_4226_ = v_isSharedCheck_4233_;
goto v_resetjp_4224_;
}
v_resetjp_4224_:
{
lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4230_; 
v___x_4227_ = lp_choreo_Choreo_moveName(v_head_4222_);
v___x_4228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4228_, 0, v___x_4227_);
if (v_isShared_4226_ == 0)
{
lean_ctor_set(v___x_4225_, 1, v_a_4220_);
lean_ctor_set(v___x_4225_, 0, v___x_4228_);
v___x_4230_ = v___x_4225_;
goto v_reusejp_4229_;
}
else
{
lean_object* v_reuseFailAlloc_4232_; 
v_reuseFailAlloc_4232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4232_, 0, v___x_4228_);
lean_ctor_set(v_reuseFailAlloc_4232_, 1, v_a_4220_);
v___x_4230_ = v_reuseFailAlloc_4232_;
goto v_reusejp_4229_;
}
v_reusejp_4229_:
{
v_a_4219_ = v_tail_4223_;
v_a_4220_ = v___x_4230_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5(lean_object* v_a_4235_, lean_object* v_a_4236_){
_start:
{
if (lean_obj_tag(v_a_4235_) == 0)
{
lean_object* v___x_4237_; 
v___x_4237_ = l_List_reverse___redArg(v_a_4236_);
return v___x_4237_;
}
else
{
lean_object* v_head_4238_; lean_object* v_tail_4239_; lean_object* v___x_4241_; uint8_t v_isShared_4242_; uint8_t v_isSharedCheck_4267_; 
v_head_4238_ = lean_ctor_get(v_a_4235_, 0);
v_tail_4239_ = lean_ctor_get(v_a_4235_, 1);
v_isSharedCheck_4267_ = !lean_is_exclusive(v_a_4235_);
if (v_isSharedCheck_4267_ == 0)
{
v___x_4241_ = v_a_4235_;
v_isShared_4242_ = v_isSharedCheck_4267_;
goto v_resetjp_4240_;
}
else
{
lean_inc(v_tail_4239_);
lean_inc(v_head_4238_);
lean_dec(v_a_4235_);
v___x_4241_ = lean_box(0);
v_isShared_4242_ = v_isSharedCheck_4267_;
goto v_resetjp_4240_;
}
v_resetjp_4240_:
{
lean_object* v_fst_4243_; lean_object* v_snd_4244_; lean_object* v___x_4246_; uint8_t v_isShared_4247_; uint8_t v_isSharedCheck_4266_; 
v_fst_4243_ = lean_ctor_get(v_head_4238_, 0);
v_snd_4244_ = lean_ctor_get(v_head_4238_, 1);
v_isSharedCheck_4266_ = !lean_is_exclusive(v_head_4238_);
if (v_isSharedCheck_4266_ == 0)
{
v___x_4246_ = v_head_4238_;
v_isShared_4247_ = v_isSharedCheck_4266_;
goto v_resetjp_4245_;
}
else
{
lean_inc(v_snd_4244_);
lean_inc(v_fst_4243_);
lean_dec(v_head_4238_);
v___x_4246_ = lean_box(0);
v_isShared_4247_ = v_isSharedCheck_4266_;
goto v_resetjp_4245_;
}
v_resetjp_4245_:
{
lean_object* v___x_4248_; lean_object* v___x_4249_; lean_object* v___x_4250_; lean_object* v___x_4251_; lean_object* v___x_4253_; 
v___x_4248_ = lean_box(0);
v___x_4249_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5___closed__0));
v___x_4250_ = l_Lean_JsonNumber_fromNat(v_fst_4243_);
v___x_4251_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4251_, 0, v___x_4250_);
if (v_isShared_4247_ == 0)
{
lean_ctor_set(v___x_4246_, 1, v___x_4251_);
lean_ctor_set(v___x_4246_, 0, v___x_4249_);
v___x_4253_ = v___x_4246_;
goto v_reusejp_4252_;
}
else
{
lean_object* v_reuseFailAlloc_4265_; 
v_reuseFailAlloc_4265_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4265_, 0, v___x_4249_);
lean_ctor_set(v_reuseFailAlloc_4265_, 1, v___x_4251_);
v___x_4253_ = v_reuseFailAlloc_4265_;
goto v_reusejp_4252_;
}
v_reusejp_4252_:
{
lean_object* v___x_4254_; lean_object* v___x_4255_; lean_object* v___x_4256_; lean_object* v___x_4257_; lean_object* v___x_4259_; 
v___x_4254_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_4255_ = l_Lean_JsonNumber_fromNat(v_snd_4244_);
v___x_4256_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4256_, 0, v___x_4255_);
v___x_4257_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4257_, 0, v___x_4254_);
lean_ctor_set(v___x_4257_, 1, v___x_4256_);
if (v_isShared_4242_ == 0)
{
lean_ctor_set(v___x_4241_, 1, v___x_4248_);
lean_ctor_set(v___x_4241_, 0, v___x_4257_);
v___x_4259_ = v___x_4241_;
goto v_reusejp_4258_;
}
else
{
lean_object* v_reuseFailAlloc_4264_; 
v_reuseFailAlloc_4264_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4264_, 0, v___x_4257_);
lean_ctor_set(v_reuseFailAlloc_4264_, 1, v___x_4248_);
v___x_4259_ = v_reuseFailAlloc_4264_;
goto v_reusejp_4258_;
}
v_reusejp_4258_:
{
lean_object* v___x_4260_; lean_object* v___x_4261_; lean_object* v___x_4262_; 
v___x_4260_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4260_, 0, v___x_4253_);
lean_ctor_set(v___x_4260_, 1, v___x_4259_);
v___x_4261_ = l_Lean_Json_mkObj(v___x_4260_);
lean_dec_ref_known(v___x_4260_, 2);
v___x_4262_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4262_, 0, v___x_4261_);
lean_ctor_set(v___x_4262_, 1, v_a_4236_);
v_a_4235_ = v_tail_4239_;
v_a_4236_ = v___x_4262_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__11(lean_object* v_a_4268_, lean_object* v_a_4269_){
_start:
{
if (lean_obj_tag(v_a_4268_) == 0)
{
lean_object* v___x_4270_; 
v___x_4270_ = l_List_reverse___redArg(v_a_4269_);
return v___x_4270_;
}
else
{
lean_object* v_head_4271_; lean_object* v_tail_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4281_; 
v_head_4271_ = lean_ctor_get(v_a_4268_, 0);
v_tail_4272_ = lean_ctor_get(v_a_4268_, 1);
v_isSharedCheck_4281_ = !lean_is_exclusive(v_a_4268_);
if (v_isSharedCheck_4281_ == 0)
{
v___x_4274_ = v_a_4268_;
v_isShared_4275_ = v_isSharedCheck_4281_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_tail_4272_);
lean_inc(v_head_4271_);
lean_dec(v_a_4268_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4281_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v___x_4276_; lean_object* v___x_4278_; 
v___x_4276_ = lp_choreo_Choreo_moveName(v_head_4271_);
if (v_isShared_4275_ == 0)
{
lean_ctor_set(v___x_4274_, 1, v_a_4269_);
lean_ctor_set(v___x_4274_, 0, v___x_4276_);
v___x_4278_ = v___x_4274_;
goto v_reusejp_4277_;
}
else
{
lean_object* v_reuseFailAlloc_4280_; 
v_reuseFailAlloc_4280_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4280_, 0, v___x_4276_);
lean_ctor_set(v_reuseFailAlloc_4280_, 1, v_a_4269_);
v___x_4278_ = v_reuseFailAlloc_4280_;
goto v_reusejp_4277_;
}
v_reusejp_4277_:
{
v_a_4268_ = v_tail_4272_;
v_a_4269_ = v___x_4278_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7(lean_object* v_a_4288_, lean_object* v_a_4289_){
_start:
{
if (lean_obj_tag(v_a_4288_) == 0)
{
lean_object* v___x_4290_; 
v___x_4290_ = l_List_reverse___redArg(v_a_4289_);
return v___x_4290_;
}
else
{
lean_object* v_head_4291_; lean_object* v_snd_4292_; lean_object* v_snd_4293_; lean_object* v_tail_4294_; lean_object* v___x_4296_; uint8_t v_isShared_4297_; uint8_t v_isSharedCheck_4362_; 
v_head_4291_ = lean_ctor_get(v_a_4288_, 0);
lean_inc(v_head_4291_);
v_snd_4292_ = lean_ctor_get(v_head_4291_, 1);
lean_inc(v_snd_4292_);
v_snd_4293_ = lean_ctor_get(v_snd_4292_, 1);
lean_inc(v_snd_4293_);
v_tail_4294_ = lean_ctor_get(v_a_4288_, 1);
v_isSharedCheck_4362_ = !lean_is_exclusive(v_a_4288_);
if (v_isSharedCheck_4362_ == 0)
{
lean_object* v_unused_4363_; 
v_unused_4363_ = lean_ctor_get(v_a_4288_, 0);
lean_dec(v_unused_4363_);
v___x_4296_ = v_a_4288_;
v_isShared_4297_ = v_isSharedCheck_4362_;
goto v_resetjp_4295_;
}
else
{
lean_inc(v_tail_4294_);
lean_dec(v_a_4288_);
v___x_4296_ = lean_box(0);
v_isShared_4297_ = v_isSharedCheck_4362_;
goto v_resetjp_4295_;
}
v_resetjp_4295_:
{
lean_object* v_fst_4298_; lean_object* v___x_4300_; uint8_t v_isShared_4301_; uint8_t v_isSharedCheck_4360_; 
v_fst_4298_ = lean_ctor_get(v_head_4291_, 0);
v_isSharedCheck_4360_ = !lean_is_exclusive(v_head_4291_);
if (v_isSharedCheck_4360_ == 0)
{
lean_object* v_unused_4361_; 
v_unused_4361_ = lean_ctor_get(v_head_4291_, 1);
lean_dec(v_unused_4361_);
v___x_4300_ = v_head_4291_;
v_isShared_4301_ = v_isSharedCheck_4360_;
goto v_resetjp_4299_;
}
else
{
lean_inc(v_fst_4298_);
lean_dec(v_head_4291_);
v___x_4300_ = lean_box(0);
v_isShared_4301_ = v_isSharedCheck_4360_;
goto v_resetjp_4299_;
}
v_resetjp_4299_:
{
lean_object* v_fst_4302_; lean_object* v___x_4304_; uint8_t v_isShared_4305_; uint8_t v_isSharedCheck_4358_; 
v_fst_4302_ = lean_ctor_get(v_snd_4292_, 0);
v_isSharedCheck_4358_ = !lean_is_exclusive(v_snd_4292_);
if (v_isSharedCheck_4358_ == 0)
{
lean_object* v_unused_4359_; 
v_unused_4359_ = lean_ctor_get(v_snd_4292_, 1);
lean_dec(v_unused_4359_);
v___x_4304_ = v_snd_4292_;
v_isShared_4305_ = v_isSharedCheck_4358_;
goto v_resetjp_4303_;
}
else
{
lean_inc(v_fst_4302_);
lean_dec(v_snd_4292_);
v___x_4304_ = lean_box(0);
v_isShared_4305_ = v_isSharedCheck_4358_;
goto v_resetjp_4303_;
}
v_resetjp_4303_:
{
lean_object* v_fst_4306_; lean_object* v_snd_4307_; lean_object* v___x_4309_; uint8_t v_isShared_4310_; uint8_t v_isSharedCheck_4357_; 
v_fst_4306_ = lean_ctor_get(v_snd_4293_, 0);
v_snd_4307_ = lean_ctor_get(v_snd_4293_, 1);
v_isSharedCheck_4357_ = !lean_is_exclusive(v_snd_4293_);
if (v_isSharedCheck_4357_ == 0)
{
v___x_4309_ = v_snd_4293_;
v_isShared_4310_ = v_isSharedCheck_4357_;
goto v_resetjp_4308_;
}
else
{
lean_inc(v_snd_4307_);
lean_inc(v_fst_4306_);
lean_dec(v_snd_4293_);
v___x_4309_ = lean_box(0);
v_isShared_4310_ = v_isSharedCheck_4357_;
goto v_resetjp_4308_;
}
v_resetjp_4308_:
{
lean_object* v___x_4311_; lean_object* v___x_4312_; lean_object* v___x_4313_; lean_object* v___x_4314_; lean_object* v___x_4316_; 
v___x_4311_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__0));
v___x_4312_ = lean_box(0);
v___x_4313_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__1));
v___x_4314_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4314_, 0, v_fst_4298_);
if (v_isShared_4310_ == 0)
{
lean_ctor_set(v___x_4309_, 1, v___x_4314_);
lean_ctor_set(v___x_4309_, 0, v___x_4313_);
v___x_4316_ = v___x_4309_;
goto v_reusejp_4315_;
}
else
{
lean_object* v_reuseFailAlloc_4356_; 
v_reuseFailAlloc_4356_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4356_, 0, v___x_4313_);
lean_ctor_set(v_reuseFailAlloc_4356_, 1, v___x_4314_);
v___x_4316_ = v_reuseFailAlloc_4356_;
goto v_reusejp_4315_;
}
v_reusejp_4315_:
{
lean_object* v___x_4317_; lean_object* v___x_4318_; lean_object* v___x_4320_; 
v___x_4317_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_4318_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4318_, 0, v_fst_4302_);
if (v_isShared_4305_ == 0)
{
lean_ctor_set(v___x_4304_, 1, v___x_4318_);
lean_ctor_set(v___x_4304_, 0, v___x_4317_);
v___x_4320_ = v___x_4304_;
goto v_reusejp_4319_;
}
else
{
lean_object* v_reuseFailAlloc_4355_; 
v_reuseFailAlloc_4355_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4355_, 0, v___x_4317_);
lean_ctor_set(v_reuseFailAlloc_4355_, 1, v___x_4318_);
v___x_4320_ = v_reuseFailAlloc_4355_;
goto v_reusejp_4319_;
}
v_reusejp_4319_:
{
lean_object* v___x_4321_; lean_object* v___x_4322_; uint8_t v___x_4323_; lean_object* v___x_4325_; 
v___x_4321_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
v___x_4322_ = lean_alloc_ctor(1, 0, 1);
v___x_4323_ = lean_unbox(v_snd_4307_);
lean_dec(v_snd_4307_);
lean_ctor_set_uint8(v___x_4322_, 0, v___x_4323_);
if (v_isShared_4301_ == 0)
{
lean_ctor_set(v___x_4300_, 1, v___x_4322_);
lean_ctor_set(v___x_4300_, 0, v___x_4321_);
v___x_4325_ = v___x_4300_;
goto v_reusejp_4324_;
}
else
{
lean_object* v_reuseFailAlloc_4354_; 
v_reuseFailAlloc_4354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4354_, 0, v___x_4321_);
lean_ctor_set(v_reuseFailAlloc_4354_, 1, v___x_4322_);
v___x_4325_ = v_reuseFailAlloc_4354_;
goto v_reusejp_4324_;
}
v_reusejp_4324_:
{
lean_object* v___x_4326_; lean_object* v___x_4327_; lean_object* v___x_4328_; lean_object* v___x_4329_; lean_object* v___x_4330_; lean_object* v___y_4332_; uint8_t v___x_4351_; 
v___x_4326_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__2));
lean_inc(v_fst_4306_);
v___x_4327_ = lp_choreo_Choreo_askL(v_fst_4306_);
v___x_4328_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4328_, 0, v___x_4327_);
v___x_4329_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4329_, 0, v___x_4326_);
lean_ctor_set(v___x_4329_, 1, v___x_4328_);
v___x_4330_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__3));
v___x_4351_ = lp_choreo_Choreo_Ask_isMovement(v_fst_4306_);
if (v___x_4351_ == 0)
{
lean_object* v___x_4352_; 
v___x_4352_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__4));
v___y_4332_ = v___x_4352_;
goto v___jp_4331_;
}
else
{
lean_object* v___x_4353_; 
v___x_4353_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__5));
v___y_4332_ = v___x_4353_;
goto v___jp_4331_;
}
v___jp_4331_:
{
lean_object* v___x_4333_; lean_object* v___x_4334_; lean_object* v___x_4335_; lean_object* v___x_4336_; lean_object* v___x_4337_; lean_object* v___x_4338_; lean_object* v___x_4339_; lean_object* v___x_4341_; 
lean_inc_ref(v___y_4332_);
v___x_4333_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4333_, 0, v___y_4332_);
v___x_4334_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4334_, 0, v___x_4330_);
lean_ctor_set(v___x_4334_, 1, v___x_4333_);
v___x_4335_ = lp_choreo_Choreo_askPhases(v_fst_4306_);
v___x_4336_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v___x_4335_, v___x_4312_);
v___x_4337_ = lean_array_mk(v___x_4336_);
v___x_4338_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4338_, 0, v___x_4337_);
v___x_4339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4339_, 0, v___x_4311_);
lean_ctor_set(v___x_4339_, 1, v___x_4338_);
if (v_isShared_4297_ == 0)
{
lean_ctor_set(v___x_4296_, 1, v___x_4312_);
lean_ctor_set(v___x_4296_, 0, v___x_4339_);
v___x_4341_ = v___x_4296_;
goto v_reusejp_4340_;
}
else
{
lean_object* v_reuseFailAlloc_4350_; 
v_reuseFailAlloc_4350_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4350_, 0, v___x_4339_);
lean_ctor_set(v_reuseFailAlloc_4350_, 1, v___x_4312_);
v___x_4341_ = v_reuseFailAlloc_4350_;
goto v_reusejp_4340_;
}
v_reusejp_4340_:
{
lean_object* v___x_4342_; lean_object* v___x_4343_; lean_object* v___x_4344_; lean_object* v___x_4345_; lean_object* v___x_4346_; lean_object* v___x_4347_; lean_object* v___x_4348_; 
v___x_4342_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4342_, 0, v___x_4334_);
lean_ctor_set(v___x_4342_, 1, v___x_4341_);
v___x_4343_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4343_, 0, v___x_4329_);
lean_ctor_set(v___x_4343_, 1, v___x_4342_);
v___x_4344_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4344_, 0, v___x_4325_);
lean_ctor_set(v___x_4344_, 1, v___x_4343_);
v___x_4345_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4345_, 0, v___x_4320_);
lean_ctor_set(v___x_4345_, 1, v___x_4344_);
v___x_4346_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4346_, 0, v___x_4316_);
lean_ctor_set(v___x_4346_, 1, v___x_4345_);
v___x_4347_ = l_Lean_Json_mkObj(v___x_4346_);
lean_dec_ref_known(v___x_4346_, 2);
v___x_4348_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4348_, 0, v___x_4347_);
lean_ctor_set(v___x_4348_, 1, v_a_4289_);
v_a_4288_ = v_tail_4294_;
v_a_4289_ = v___x_4348_;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__2(lean_object* v_names_4364_, lean_object* v_a_4365_, lean_object* v_a_4366_){
_start:
{
if (lean_obj_tag(v_a_4365_) == 0)
{
lean_object* v___x_4367_; 
lean_dec_ref(v_names_4364_);
v___x_4367_ = l_List_reverse___redArg(v_a_4366_);
return v___x_4367_;
}
else
{
lean_object* v_head_4368_; lean_object* v_tail_4369_; lean_object* v___x_4371_; uint8_t v_isShared_4372_; uint8_t v_isSharedCheck_4379_; 
v_head_4368_ = lean_ctor_get(v_a_4365_, 0);
v_tail_4369_ = lean_ctor_get(v_a_4365_, 1);
v_isSharedCheck_4379_ = !lean_is_exclusive(v_a_4365_);
if (v_isSharedCheck_4379_ == 0)
{
v___x_4371_ = v_a_4365_;
v_isShared_4372_ = v_isSharedCheck_4379_;
goto v_resetjp_4370_;
}
else
{
lean_inc(v_tail_4369_);
lean_inc(v_head_4368_);
lean_dec(v_a_4365_);
v___x_4371_ = lean_box(0);
v_isShared_4372_ = v_isSharedCheck_4379_;
goto v_resetjp_4370_;
}
v_resetjp_4370_:
{
lean_object* v___x_4373_; lean_object* v___x_4374_; lean_object* v___x_4376_; 
lean_inc_ref(v_names_4364_);
v___x_4373_ = lean_apply_1(v_names_4364_, v_head_4368_);
v___x_4374_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4374_, 0, v___x_4373_);
if (v_isShared_4372_ == 0)
{
lean_ctor_set(v___x_4371_, 1, v_a_4366_);
lean_ctor_set(v___x_4371_, 0, v___x_4374_);
v___x_4376_ = v___x_4371_;
goto v_reusejp_4375_;
}
else
{
lean_object* v_reuseFailAlloc_4378_; 
v_reuseFailAlloc_4378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4378_, 0, v___x_4374_);
lean_ctor_set(v_reuseFailAlloc_4378_, 1, v_a_4366_);
v___x_4376_ = v_reuseFailAlloc_4378_;
goto v_reusejp_4375_;
}
v_reusejp_4375_:
{
v_a_4365_ = v_tail_4369_;
v_a_4366_ = v___x_4376_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__0(lean_object* v_r_4380_, lean_object* v_a_4381_, lean_object* v_a_4382_){
_start:
{
if (lean_obj_tag(v_a_4381_) == 0)
{
lean_object* v___x_4383_; 
lean_dec_ref(v_r_4380_);
v___x_4383_ = l_List_reverse___redArg(v_a_4382_);
return v___x_4383_;
}
else
{
lean_object* v_head_4384_; lean_object* v_snd_4385_; lean_object* v_tail_4386_; lean_object* v___x_4388_; uint8_t v_isShared_4389_; uint8_t v_isSharedCheck_4415_; 
v_head_4384_ = lean_ctor_get(v_a_4381_, 0);
lean_inc(v_head_4384_);
v_snd_4385_ = lean_ctor_get(v_head_4384_, 1);
lean_inc(v_snd_4385_);
v_tail_4386_ = lean_ctor_get(v_a_4381_, 1);
v_isSharedCheck_4415_ = !lean_is_exclusive(v_a_4381_);
if (v_isSharedCheck_4415_ == 0)
{
lean_object* v_unused_4416_; 
v_unused_4416_ = lean_ctor_get(v_a_4381_, 0);
lean_dec(v_unused_4416_);
v___x_4388_ = v_a_4381_;
v_isShared_4389_ = v_isSharedCheck_4415_;
goto v_resetjp_4387_;
}
else
{
lean_inc(v_tail_4386_);
lean_dec(v_a_4381_);
v___x_4388_ = lean_box(0);
v_isShared_4389_ = v_isSharedCheck_4415_;
goto v_resetjp_4387_;
}
v_resetjp_4387_:
{
lean_object* v_fst_4390_; lean_object* v___x_4392_; uint8_t v_isShared_4393_; uint8_t v_isSharedCheck_4413_; 
v_fst_4390_ = lean_ctor_get(v_head_4384_, 0);
v_isSharedCheck_4413_ = !lean_is_exclusive(v_head_4384_);
if (v_isSharedCheck_4413_ == 0)
{
lean_object* v_unused_4414_; 
v_unused_4414_ = lean_ctor_get(v_head_4384_, 1);
lean_dec(v_unused_4414_);
v___x_4392_ = v_head_4384_;
v_isShared_4393_ = v_isSharedCheck_4413_;
goto v_resetjp_4391_;
}
else
{
lean_inc(v_fst_4390_);
lean_dec(v_head_4384_);
v___x_4392_ = lean_box(0);
v_isShared_4393_ = v_isSharedCheck_4413_;
goto v_resetjp_4391_;
}
v_resetjp_4391_:
{
lean_object* v_fst_4394_; lean_object* v_snd_4395_; lean_object* v___x_4397_; uint8_t v_isShared_4398_; uint8_t v_isSharedCheck_4412_; 
v_fst_4394_ = lean_ctor_get(v_snd_4385_, 0);
v_snd_4395_ = lean_ctor_get(v_snd_4385_, 1);
v_isSharedCheck_4412_ = !lean_is_exclusive(v_snd_4385_);
if (v_isSharedCheck_4412_ == 0)
{
v___x_4397_ = v_snd_4385_;
v_isShared_4398_ = v_isSharedCheck_4412_;
goto v_resetjp_4396_;
}
else
{
lean_inc(v_snd_4395_);
lean_inc(v_fst_4394_);
lean_dec(v_snd_4385_);
v___x_4397_ = lean_box(0);
v_isShared_4398_ = v_isSharedCheck_4412_;
goto v_resetjp_4396_;
}
v_resetjp_4396_:
{
uint8_t v___x_4399_; lean_object* v___x_4400_; lean_object* v___x_4402_; 
lean_inc(v_snd_4395_);
lean_inc_ref(v_r_4380_);
v___x_4399_ = lp_choreo_Choreo_Ask_check(v_r_4380_, v_snd_4395_);
v___x_4400_ = lean_box(v___x_4399_);
if (v_isShared_4398_ == 0)
{
lean_ctor_set(v___x_4397_, 1, v___x_4400_);
lean_ctor_set(v___x_4397_, 0, v_snd_4395_);
v___x_4402_ = v___x_4397_;
goto v_reusejp_4401_;
}
else
{
lean_object* v_reuseFailAlloc_4411_; 
v_reuseFailAlloc_4411_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4411_, 0, v_snd_4395_);
lean_ctor_set(v_reuseFailAlloc_4411_, 1, v___x_4400_);
v___x_4402_ = v_reuseFailAlloc_4411_;
goto v_reusejp_4401_;
}
v_reusejp_4401_:
{
lean_object* v___x_4404_; 
if (v_isShared_4393_ == 0)
{
lean_ctor_set(v___x_4392_, 1, v___x_4402_);
lean_ctor_set(v___x_4392_, 0, v_fst_4394_);
v___x_4404_ = v___x_4392_;
goto v_reusejp_4403_;
}
else
{
lean_object* v_reuseFailAlloc_4410_; 
v_reuseFailAlloc_4410_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4410_, 0, v_fst_4394_);
lean_ctor_set(v_reuseFailAlloc_4410_, 1, v___x_4402_);
v___x_4404_ = v_reuseFailAlloc_4410_;
goto v_reusejp_4403_;
}
v_reusejp_4403_:
{
lean_object* v___x_4405_; lean_object* v___x_4407_; 
v___x_4405_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4405_, 0, v_fst_4390_);
lean_ctor_set(v___x_4405_, 1, v___x_4404_);
if (v_isShared_4389_ == 0)
{
lean_ctor_set(v___x_4388_, 1, v_a_4382_);
lean_ctor_set(v___x_4388_, 0, v___x_4405_);
v___x_4407_ = v___x_4388_;
goto v_reusejp_4406_;
}
else
{
lean_object* v_reuseFailAlloc_4409_; 
v_reuseFailAlloc_4409_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4409_, 0, v___x_4405_);
lean_ctor_set(v_reuseFailAlloc_4409_, 1, v_a_4382_);
v___x_4407_ = v_reuseFailAlloc_4409_;
goto v_reusejp_4406_;
}
v_reusejp_4406_:
{
v_a_4381_ = v_tail_4386_;
v_a_4382_ = v___x_4407_;
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
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_report_spec__12(lean_object* v_x_4417_){
_start:
{
if (lean_obj_tag(v_x_4417_) == 0)
{
uint8_t v___x_4418_; 
v___x_4418_ = 0;
return v___x_4418_;
}
else
{
lean_object* v_head_4419_; lean_object* v_tail_4420_; uint8_t v___x_4421_; 
v_head_4419_ = lean_ctor_get(v_x_4417_, 0);
v_tail_4420_ = lean_ctor_get(v_x_4417_, 1);
v___x_4421_ = lp_choreo_Choreo_Problem_provable(v_head_4419_);
if (v___x_4421_ == 0)
{
v_x_4417_ = v_tail_4420_;
goto _start;
}
else
{
return v___x_4421_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_report_spec__12___boxed(lean_object* v_x_4423_){
_start:
{
uint8_t v_res_4424_; lean_object* v_r_4425_; 
v_res_4424_ = lp_choreo_List_any___at___00Choreo_report_spec__12(v_x_4423_);
lean_dec(v_x_4423_);
v_r_4425_ = lean_box(v_res_4424_);
return v_r_4425_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__3(lean_object* v_a_4426_, lean_object* v_a_4427_){
_start:
{
if (lean_obj_tag(v_a_4426_) == 0)
{
lean_object* v___x_4428_; 
v___x_4428_ = l_List_reverse___redArg(v_a_4427_);
return v___x_4428_;
}
else
{
lean_object* v_head_4429_; lean_object* v_tail_4430_; lean_object* v___x_4432_; uint8_t v_isShared_4433_; uint8_t v_isSharedCheck_4450_; 
v_head_4429_ = lean_ctor_get(v_a_4426_, 0);
v_tail_4430_ = lean_ctor_get(v_a_4426_, 1);
v_isSharedCheck_4450_ = !lean_is_exclusive(v_a_4426_);
if (v_isSharedCheck_4450_ == 0)
{
v___x_4432_ = v_a_4426_;
v_isShared_4433_ = v_isSharedCheck_4450_;
goto v_resetjp_4431_;
}
else
{
lean_inc(v_tail_4430_);
lean_inc(v_head_4429_);
lean_dec(v_a_4426_);
v___x_4432_ = lean_box(0);
v_isShared_4433_ = v_isSharedCheck_4450_;
goto v_resetjp_4431_;
}
v_resetjp_4431_:
{
lean_object* v_x_4434_; lean_object* v_y_4435_; lean_object* v_w_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4447_; 
v_x_4434_ = lean_ctor_get(v_head_4429_, 0);
lean_inc(v_x_4434_);
v_y_4435_ = lean_ctor_get(v_head_4429_, 1);
lean_inc(v_y_4435_);
v_w_4436_ = lean_ctor_get(v_head_4429_, 2);
lean_inc(v_w_4436_);
lean_dec(v_head_4429_);
v___x_4437_ = lean_int_ediv(v_x_4434_, v_w_4436_);
lean_dec(v_x_4434_);
v___x_4438_ = lp_choreo_Choreo_jInt(v___x_4437_);
v___x_4439_ = lean_int_ediv(v_y_4435_, v_w_4436_);
lean_dec(v_w_4436_);
lean_dec(v_y_4435_);
v___x_4440_ = lp_choreo_Choreo_jInt(v___x_4439_);
v___x_4441_ = lean_unsigned_to_nat(2u);
v___x_4442_ = lean_mk_empty_array_with_capacity(v___x_4441_);
v___x_4443_ = lean_array_push(v___x_4442_, v___x_4438_);
v___x_4444_ = lean_array_push(v___x_4443_, v___x_4440_);
v___x_4445_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4445_, 0, v___x_4444_);
if (v_isShared_4433_ == 0)
{
lean_ctor_set(v___x_4432_, 1, v_a_4427_);
lean_ctor_set(v___x_4432_, 0, v___x_4445_);
v___x_4447_ = v___x_4432_;
goto v_reusejp_4446_;
}
else
{
lean_object* v_reuseFailAlloc_4449_; 
v_reuseFailAlloc_4449_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4449_, 0, v___x_4445_);
lean_ctor_set(v_reuseFailAlloc_4449_, 1, v_a_4427_);
v___x_4447_ = v_reuseFailAlloc_4449_;
goto v_reusejp_4446_;
}
v_reusejp_4446_:
{
v_a_4426_ = v_tail_4430_;
v_a_4427_ = v___x_4447_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___lam__0(lean_object* v___x_4451_, lean_object* v_00___4452_){
_start:
{
lean_object* v___x_4453_; lean_object* v___x_4454_; 
v___x_4453_ = l_Lean_JsonNumber_fromNat(v___x_4451_);
v___x_4454_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4454_, 0, v___x_4453_);
return v___x_4454_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3(void){
_start:
{
lean_object* v___x_4458_; lean_object* v___x_4459_; lean_object* v___x_4460_; 
v___x_4458_ = lean_box(0);
v___x_4459_ = lean_unsigned_to_nat(0u);
v___x_4460_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___lam__0(v___x_4459_, v___x_4458_);
return v___x_4460_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6(lean_object* v_r_4461_, lean_object* v_a_4462_, lean_object* v_a_4463_){
_start:
{
if (lean_obj_tag(v_a_4462_) == 0)
{
lean_object* v___x_4464_; 
lean_dec_ref(v_r_4461_);
v___x_4464_ = l_List_reverse___redArg(v_a_4463_);
return v___x_4464_;
}
else
{
lean_object* v_head_4465_; lean_object* v_fst_4466_; lean_object* v_snd_4467_; lean_object* v_tail_4468_; lean_object* v___x_4470_; uint8_t v_isShared_4471_; uint8_t v_isSharedCheck_4591_; 
v_head_4465_ = lean_ctor_get(v_a_4462_, 0);
lean_inc(v_head_4465_);
v_fst_4466_ = lean_ctor_get(v_head_4465_, 0);
lean_inc(v_fst_4466_);
v_snd_4467_ = lean_ctor_get(v_fst_4466_, 1);
lean_inc(v_snd_4467_);
v_tail_4468_ = lean_ctor_get(v_a_4462_, 1);
v_isSharedCheck_4591_ = !lean_is_exclusive(v_a_4462_);
if (v_isSharedCheck_4591_ == 0)
{
lean_object* v_unused_4592_; 
v_unused_4592_ = lean_ctor_get(v_a_4462_, 0);
lean_dec(v_unused_4592_);
v___x_4470_ = v_a_4462_;
v_isShared_4471_ = v_isSharedCheck_4591_;
goto v_resetjp_4469_;
}
else
{
lean_inc(v_tail_4468_);
lean_dec(v_a_4462_);
v___x_4470_ = lean_box(0);
v_isShared_4471_ = v_isSharedCheck_4591_;
goto v_resetjp_4469_;
}
v_resetjp_4469_:
{
lean_object* v_snd_4472_; lean_object* v___x_4474_; uint8_t v_isShared_4475_; uint8_t v_isSharedCheck_4589_; 
v_snd_4472_ = lean_ctor_get(v_head_4465_, 1);
v_isSharedCheck_4589_ = !lean_is_exclusive(v_head_4465_);
if (v_isSharedCheck_4589_ == 0)
{
lean_object* v_unused_4590_; 
v_unused_4590_ = lean_ctor_get(v_head_4465_, 0);
lean_dec(v_unused_4590_);
v___x_4474_ = v_head_4465_;
v_isShared_4475_ = v_isSharedCheck_4589_;
goto v_resetjp_4473_;
}
else
{
lean_inc(v_snd_4472_);
lean_dec(v_head_4465_);
v___x_4474_ = lean_box(0);
v_isShared_4475_ = v_isSharedCheck_4589_;
goto v_resetjp_4473_;
}
v_resetjp_4473_:
{
lean_object* v_fst_4476_; lean_object* v___x_4478_; uint8_t v_isShared_4479_; uint8_t v_isSharedCheck_4587_; 
v_fst_4476_ = lean_ctor_get(v_fst_4466_, 0);
v_isSharedCheck_4587_ = !lean_is_exclusive(v_fst_4466_);
if (v_isSharedCheck_4587_ == 0)
{
lean_object* v_unused_4588_; 
v_unused_4588_ = lean_ctor_get(v_fst_4466_, 1);
lean_dec(v_unused_4588_);
v___x_4478_ = v_fst_4466_;
v_isShared_4479_ = v_isSharedCheck_4587_;
goto v_resetjp_4477_;
}
else
{
lean_inc(v_fst_4476_);
lean_dec(v_fst_4466_);
v___x_4478_ = lean_box(0);
v_isShared_4479_ = v_isSharedCheck_4587_;
goto v_resetjp_4477_;
}
v_resetjp_4477_:
{
lean_object* v_fst_4480_; lean_object* v_snd_4481_; lean_object* v___x_4483_; uint8_t v_isShared_4484_; uint8_t v_isSharedCheck_4586_; 
v_fst_4480_ = lean_ctor_get(v_snd_4467_, 0);
v_snd_4481_ = lean_ctor_get(v_snd_4467_, 1);
v_isSharedCheck_4586_ = !lean_is_exclusive(v_snd_4467_);
if (v_isSharedCheck_4586_ == 0)
{
v___x_4483_ = v_snd_4467_;
v_isShared_4484_ = v_isSharedCheck_4586_;
goto v_resetjp_4482_;
}
else
{
lean_inc(v_snd_4481_);
lean_inc(v_fst_4480_);
lean_dec(v_snd_4467_);
v___x_4483_ = lean_box(0);
v_isShared_4484_ = v_isSharedCheck_4586_;
goto v_resetjp_4482_;
}
v_resetjp_4482_:
{
lean_object* v___x_4485_; lean_object* v___y_4487_; lean_object* v___y_4488_; lean_object* v_seg_4559_; lean_object* v___y_4561_; lean_object* v___x_4574_; 
v___x_4485_ = lean_box(0);
lean_inc(v_snd_4481_);
v_seg_4559_ = lp_choreo_Choreo_Transition_segment(v_r_4461_, v_snd_4481_);
v___x_4574_ = l_List_head_x3f___redArg(v_seg_4559_);
if (lean_obj_tag(v___x_4574_) == 0)
{
lean_object* v___x_4575_; 
v___x_4575_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3);
v___y_4561_ = v___x_4575_;
goto v___jp_4560_;
}
else
{
lean_object* v_val_4576_; lean_object* v___x_4578_; uint8_t v_isShared_4579_; uint8_t v_isSharedCheck_4585_; 
v_val_4576_ = lean_ctor_get(v___x_4574_, 0);
v_isSharedCheck_4585_ = !lean_is_exclusive(v___x_4574_);
if (v_isSharedCheck_4585_ == 0)
{
v___x_4578_ = v___x_4574_;
v_isShared_4579_ = v_isSharedCheck_4585_;
goto v_resetjp_4577_;
}
else
{
lean_inc(v_val_4576_);
lean_dec(v___x_4574_);
v___x_4578_ = lean_box(0);
v_isShared_4579_ = v_isSharedCheck_4585_;
goto v_resetjp_4577_;
}
v_resetjp_4577_:
{
lean_object* v_t0_4580_; lean_object* v___x_4581_; lean_object* v___x_4583_; 
v_t0_4580_ = lean_ctor_get(v_val_4576_, 0);
lean_inc(v_t0_4580_);
lean_dec(v_val_4576_);
v___x_4581_ = l_Lean_JsonNumber_fromNat(v_t0_4580_);
if (v_isShared_4579_ == 0)
{
lean_ctor_set_tag(v___x_4578_, 2);
lean_ctor_set(v___x_4578_, 0, v___x_4581_);
v___x_4583_ = v___x_4578_;
goto v_reusejp_4582_;
}
else
{
lean_object* v_reuseFailAlloc_4584_; 
v_reuseFailAlloc_4584_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4584_, 0, v___x_4581_);
v___x_4583_ = v_reuseFailAlloc_4584_;
goto v_reusejp_4582_;
}
v_reusejp_4582_:
{
v___y_4561_ = v___x_4583_;
goto v___jp_4560_;
}
}
}
v___jp_4486_:
{
lean_object* v_first_4489_; lean_object* v_last_4490_; lean_object* v_start_4491_; lean_object* v_finish_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4497_; 
v_first_4489_ = lean_ctor_get(v_snd_4481_, 0);
v_last_4490_ = lean_ctor_get(v_snd_4481_, 1);
v_start_4491_ = lean_ctor_get(v_snd_4481_, 2);
lean_inc(v_start_4491_);
v_finish_4492_ = lean_ctor_get(v_snd_4481_, 3);
lean_inc(v_finish_4492_);
v___x_4493_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__0));
lean_inc(v_snd_4472_);
v___x_4494_ = l_Lean_JsonNumber_fromNat(v_snd_4472_);
v___x_4495_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4494_);
if (v_isShared_4484_ == 0)
{
lean_ctor_set(v___x_4483_, 1, v___x_4495_);
lean_ctor_set(v___x_4483_, 0, v___x_4493_);
v___x_4497_ = v___x_4483_;
goto v_reusejp_4496_;
}
else
{
lean_object* v_reuseFailAlloc_4558_; 
v_reuseFailAlloc_4558_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4558_, 0, v___x_4493_);
lean_ctor_set(v_reuseFailAlloc_4558_, 1, v___x_4495_);
v___x_4497_ = v_reuseFailAlloc_4558_;
goto v_reusejp_4496_;
}
v_reusejp_4496_:
{
lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4501_; 
v___x_4498_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__3));
v___x_4499_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4499_, 0, v_fst_4476_);
if (v_isShared_4479_ == 0)
{
lean_ctor_set(v___x_4478_, 1, v___x_4499_);
lean_ctor_set(v___x_4478_, 0, v___x_4498_);
v___x_4501_ = v___x_4478_;
goto v_reusejp_4500_;
}
else
{
lean_object* v_reuseFailAlloc_4557_; 
v_reuseFailAlloc_4557_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4557_, 0, v___x_4498_);
lean_ctor_set(v_reuseFailAlloc_4557_, 1, v___x_4499_);
v___x_4501_ = v_reuseFailAlloc_4557_;
goto v_reusejp_4500_;
}
v_reusejp_4500_:
{
lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4505_; 
v___x_4502_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
v___x_4503_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4503_, 0, v_fst_4480_);
if (v_isShared_4475_ == 0)
{
lean_ctor_set(v___x_4474_, 1, v___x_4503_);
lean_ctor_set(v___x_4474_, 0, v___x_4502_);
v___x_4505_ = v___x_4474_;
goto v_reusejp_4504_;
}
else
{
lean_object* v_reuseFailAlloc_4556_; 
v_reuseFailAlloc_4556_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4556_, 0, v___x_4502_);
lean_ctor_set(v_reuseFailAlloc_4556_, 1, v___x_4503_);
v___x_4505_ = v_reuseFailAlloc_4556_;
goto v_reusejp_4504_;
}
v_reusejp_4504_:
{
lean_object* v___x_4506_; lean_object* v___x_4507_; lean_object* v___x_4508_; lean_object* v___x_4509_; lean_object* v___x_4510_; lean_object* v___x_4511_; lean_object* v___x_4512_; lean_object* v___x_4513_; lean_object* v___x_4514_; lean_object* v___x_4515_; lean_object* v___x_4516_; lean_object* v___x_4517_; lean_object* v___x_4518_; uint8_t v___x_4519_; lean_object* v___x_4520_; lean_object* v___x_4521_; lean_object* v___x_4522_; lean_object* v___x_4523_; lean_object* v___x_4524_; lean_object* v___x_4525_; lean_object* v___x_4526_; lean_object* v___x_4527_; lean_object* v___x_4528_; lean_object* v___x_4529_; lean_object* v___x_4530_; lean_object* v___x_4531_; lean_object* v___x_4532_; lean_object* v___x_4533_; lean_object* v___x_4534_; lean_object* v___x_4535_; lean_object* v___x_4536_; lean_object* v___x_4537_; lean_object* v___x_4538_; lean_object* v___x_4539_; lean_object* v___x_4541_; 
v___x_4506_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__1));
lean_inc(v_first_4489_);
v___x_4507_ = l_Lean_JsonNumber_fromNat(v_first_4489_);
v___x_4508_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4508_, 0, v___x_4507_);
v___x_4509_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4509_, 0, v___x_4506_);
lean_ctor_set(v___x_4509_, 1, v___x_4508_);
v___x_4510_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_programJson_spec__1___closed__2));
lean_inc(v_last_4490_);
v___x_4511_ = l_Lean_JsonNumber_fromNat(v_last_4490_);
v___x_4512_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4512_, 0, v___x_4511_);
v___x_4513_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4513_, 0, v___x_4510_);
lean_ctor_set(v___x_4513_, 1, v___x_4512_);
v___x_4514_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__1));
v___x_4515_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4515_, 0, v___x_4514_);
lean_ctor_set(v___x_4515_, 1, v___y_4487_);
v___x_4516_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__2));
v___x_4517_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4517_, 0, v___x_4516_);
lean_ctor_set(v___x_4517_, 1, v___y_4488_);
v___x_4518_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
lean_inc_ref(v_r_4461_);
v___x_4519_ = lp_choreo_Choreo_transitionOk(v_r_4461_, v_snd_4481_);
v___x_4520_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4520_, 0, v___x_4519_);
v___x_4521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4521_, 0, v___x_4518_);
lean_ctor_set(v___x_4521_, 1, v___x_4520_);
v___x_4522_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0));
v___x_4523_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0));
v___x_4524_ = l_Nat_reprFast(v_snd_4472_);
v___x_4525_ = lean_string_append(v___x_4523_, v___x_4524_);
lean_dec_ref(v___x_4524_);
v___x_4526_ = ((lean_object*)(lp_choreo_Choreo_phaseProofTerm___closed__3));
v___x_4527_ = lean_string_append(v___x_4525_, v___x_4526_);
v___x_4528_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4528_, 0, v___x_4527_);
v___x_4529_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4529_, 0, v___x_4522_);
lean_ctor_set(v___x_4529_, 1, v___x_4528_);
v___x_4530_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1));
v___x_4531_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__3(v_start_4491_, v___x_4485_);
v___x_4532_ = lean_array_mk(v___x_4531_);
v___x_4533_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4533_, 0, v___x_4532_);
v___x_4534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4534_, 0, v___x_4530_);
lean_ctor_set(v___x_4534_, 1, v___x_4533_);
v___x_4535_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2));
v___x_4536_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__3(v_finish_4492_, v___x_4485_);
v___x_4537_ = lean_array_mk(v___x_4536_);
v___x_4538_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4538_, 0, v___x_4537_);
v___x_4539_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4539_, 0, v___x_4535_);
lean_ctor_set(v___x_4539_, 1, v___x_4538_);
if (v_isShared_4471_ == 0)
{
lean_ctor_set(v___x_4470_, 1, v___x_4485_);
lean_ctor_set(v___x_4470_, 0, v___x_4539_);
v___x_4541_ = v___x_4470_;
goto v_reusejp_4540_;
}
else
{
lean_object* v_reuseFailAlloc_4555_; 
v_reuseFailAlloc_4555_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4555_, 0, v___x_4539_);
lean_ctor_set(v_reuseFailAlloc_4555_, 1, v___x_4485_);
v___x_4541_ = v_reuseFailAlloc_4555_;
goto v_reusejp_4540_;
}
v_reusejp_4540_:
{
lean_object* v___x_4542_; lean_object* v___x_4543_; lean_object* v___x_4544_; lean_object* v___x_4545_; lean_object* v___x_4546_; lean_object* v___x_4547_; lean_object* v___x_4548_; lean_object* v___x_4549_; lean_object* v___x_4550_; lean_object* v___x_4551_; lean_object* v___x_4552_; lean_object* v___x_4553_; 
v___x_4542_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4542_, 0, v___x_4534_);
lean_ctor_set(v___x_4542_, 1, v___x_4541_);
v___x_4543_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4543_, 0, v___x_4529_);
lean_ctor_set(v___x_4543_, 1, v___x_4542_);
v___x_4544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4544_, 0, v___x_4521_);
lean_ctor_set(v___x_4544_, 1, v___x_4543_);
v___x_4545_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4545_, 0, v___x_4517_);
lean_ctor_set(v___x_4545_, 1, v___x_4544_);
v___x_4546_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4546_, 0, v___x_4515_);
lean_ctor_set(v___x_4546_, 1, v___x_4545_);
v___x_4547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4547_, 0, v___x_4513_);
lean_ctor_set(v___x_4547_, 1, v___x_4546_);
v___x_4548_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4548_, 0, v___x_4509_);
lean_ctor_set(v___x_4548_, 1, v___x_4547_);
v___x_4549_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4549_, 0, v___x_4505_);
lean_ctor_set(v___x_4549_, 1, v___x_4548_);
v___x_4550_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4550_, 0, v___x_4501_);
lean_ctor_set(v___x_4550_, 1, v___x_4549_);
v___x_4551_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4551_, 0, v___x_4497_);
lean_ctor_set(v___x_4551_, 1, v___x_4550_);
v___x_4552_ = l_Lean_Json_mkObj(v___x_4551_);
lean_dec_ref_known(v___x_4551_, 2);
v___x_4553_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4553_, 0, v___x_4552_);
lean_ctor_set(v___x_4553_, 1, v_a_4463_);
v_a_4462_ = v_tail_4468_;
v_a_4463_ = v___x_4553_;
goto _start;
}
}
}
}
}
v___jp_4560_:
{
lean_object* v___x_4562_; 
v___x_4562_ = l_List_getLast_x3f___redArg(v_seg_4559_);
lean_dec(v_seg_4559_);
if (lean_obj_tag(v___x_4562_) == 0)
{
lean_object* v___x_4563_; 
v___x_4563_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3, &lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3);
v___y_4487_ = v___y_4561_;
v___y_4488_ = v___x_4563_;
goto v___jp_4486_;
}
else
{
lean_object* v_val_4564_; lean_object* v___x_4566_; uint8_t v_isShared_4567_; uint8_t v_isSharedCheck_4573_; 
v_val_4564_ = lean_ctor_get(v___x_4562_, 0);
v_isSharedCheck_4573_ = !lean_is_exclusive(v___x_4562_);
if (v_isSharedCheck_4573_ == 0)
{
v___x_4566_ = v___x_4562_;
v_isShared_4567_ = v_isSharedCheck_4573_;
goto v_resetjp_4565_;
}
else
{
lean_inc(v_val_4564_);
lean_dec(v___x_4562_);
v___x_4566_ = lean_box(0);
v_isShared_4567_ = v_isSharedCheck_4573_;
goto v_resetjp_4565_;
}
v_resetjp_4565_:
{
lean_object* v_t1_4568_; lean_object* v___x_4569_; lean_object* v___x_4571_; 
v_t1_4568_ = lean_ctor_get(v_val_4564_, 1);
lean_inc(v_t1_4568_);
lean_dec(v_val_4564_);
v___x_4569_ = l_Lean_JsonNumber_fromNat(v_t1_4568_);
if (v_isShared_4567_ == 0)
{
lean_ctor_set_tag(v___x_4566_, 2);
lean_ctor_set(v___x_4566_, 0, v___x_4569_);
v___x_4571_ = v___x_4566_;
goto v_reusejp_4570_;
}
else
{
lean_object* v_reuseFailAlloc_4572_; 
v_reuseFailAlloc_4572_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4572_, 0, v___x_4569_);
v___x_4571_ = v_reuseFailAlloc_4572_;
goto v_reusejp_4570_;
}
v_reusejp_4570_:
{
v___y_4487_ = v___y_4561_;
v___y_4488_ = v___x_4571_;
goto v___jp_4486_;
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
static lean_object* _init_lp_choreo_Choreo_report___closed__5(void){
_start:
{
lean_object* v___x_4598_; lean_object* v___x_4599_; 
v___x_4598_ = lp_choreo_Choreo_stageRect;
v___x_4599_ = lp_choreo_Choreo_jRect(v___x_4598_);
return v___x_4599_;
}
}
static lean_object* _init_lp_choreo_Choreo_report___closed__6(void){
_start:
{
lean_object* v___x_4600_; lean_object* v___x_4601_; lean_object* v___x_4602_; 
v___x_4600_ = lean_obj_once(&lp_choreo_Choreo_report___closed__5, &lp_choreo_Choreo_report___closed__5_once, _init_lp_choreo_Choreo_report___closed__5);
v___x_4601_ = ((lean_object*)(lp_choreo_Choreo_report___closed__4));
v___x_4602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4602_, 0, v___x_4601_);
lean_ctor_set(v___x_4602_, 1, v___x_4600_);
return v___x_4602_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_report(lean_object* v_b_4634_, lean_object* v_names_4635_, lean_object* v_proofPath_4636_, lean_object* v_program_4637_, lean_object* v_start_4638_){
_start:
{
lean_object* v_routine_4639_; lean_object* v_plan_4640_; lean_object* v_labels_4641_; lean_object* v_asks_4642_; lean_object* v_rejected_4643_; lean_object* v_keys_4644_; lean_object* v_error_4645_; lean_object* v_scene_4646_; lean_object* v_derived_4647_; lean_object* v_heard_4648_; lean_object* v_minSeconds_4649_; lean_object* v_dropped_4650_; lean_object* v_drift_4651_; lean_object* v_cfg_4652_; lean_object* v_phases_4653_; lean_object* v_problems_4654_; lean_object* v___x_4655_; lean_object* v_asks_4656_; uint8_t v_globalOk_4657_; uint8_t v___x_4658_; lean_object* v___y_4660_; lean_object* v___y_4661_; lean_object* v___y_4662_; lean_object* v___y_4663_; lean_object* v___y_4664_; lean_object* v___y_4665_; lean_object* v___y_4666_; lean_object* v___y_4667_; lean_object* v___y_4668_; lean_object* v___y_4669_; lean_object* v___y_4670_; lean_object* v___y_4671_; lean_object* v___y_4672_; lean_object* v___y_4673_; lean_object* v___y_4674_; lean_object* v___y_4675_; lean_object* v___y_4676_; lean_object* v___y_4677_; lean_object* v___y_4678_; lean_object* v___y_4679_; lean_object* v___y_4828_; lean_object* v___y_4829_; lean_object* v___y_4830_; lean_object* v___y_4831_; lean_object* v___y_4832_; lean_object* v___y_4833_; lean_object* v___y_4834_; lean_object* v___y_4835_; lean_object* v___y_4836_; lean_object* v___y_4837_; lean_object* v___y_4838_; lean_object* v___y_4839_; lean_object* v___y_4840_; lean_object* v___y_4841_; lean_object* v___y_4842_; lean_object* v___y_4843_; lean_object* v___y_4844_; lean_object* v___y_4845_; lean_object* v___y_4846_; lean_object* v___y_4923_; lean_object* v___y_4924_; lean_object* v___y_4925_; lean_object* v___y_4926_; lean_object* v___y_4927_; lean_object* v___y_4928_; lean_object* v___y_4929_; lean_object* v___y_4930_; lean_object* v___y_4931_; lean_object* v___y_4932_; lean_object* v___y_4933_; lean_object* v___y_4934_; lean_object* v___y_4935_; lean_object* v___y_4936_; lean_object* v___y_4937_; lean_object* v___y_4938_; lean_object* v___y_4939_; lean_object* v___y_4940_; uint8_t v___x_4947_; lean_object* v___y_4949_; lean_object* v___y_4950_; lean_object* v___y_4951_; lean_object* v___y_4952_; lean_object* v___y_4953_; lean_object* v___y_4954_; lean_object* v___y_4955_; lean_object* v___y_4956_; lean_object* v___y_4957_; lean_object* v___y_4958_; lean_object* v___y_4959_; lean_object* v___y_4960_; lean_object* v___y_4961_; lean_object* v___y_4962_; lean_object* v___y_4963_; lean_object* v___y_4964_; lean_object* v___y_4965_; lean_object* v___y_4966_; lean_object* v___y_4967_; lean_object* v___y_4968_; lean_object* v___y_4969_; lean_object* v___y_4970_; lean_object* v___y_4971_; lean_object* v___y_4987_; lean_object* v___y_4988_; lean_object* v___y_4989_; lean_object* v___y_4990_; lean_object* v___y_4991_; lean_object* v___y_4992_; lean_object* v___y_4993_; lean_object* v___y_4994_; lean_object* v___y_4995_; lean_object* v___y_4996_; lean_object* v___y_4997_; lean_object* v___y_5045_; lean_object* v___y_5046_; lean_object* v___y_5047_; lean_object* v___y_5048_; lean_object* v___y_5049_; lean_object* v___y_5050_; lean_object* v___y_5051_; lean_object* v___y_5072_; 
v_routine_4639_ = lean_ctor_get(v_b_4634_, 1);
lean_inc_ref_n(v_routine_4639_, 4);
v_plan_4640_ = lean_ctor_get(v_b_4634_, 0);
v_labels_4641_ = lean_ctor_get(v_b_4634_, 2);
v_asks_4642_ = lean_ctor_get(v_b_4634_, 3);
v_rejected_4643_ = lean_ctor_get(v_b_4634_, 4);
lean_inc(v_rejected_4643_);
v_keys_4644_ = lean_ctor_get(v_b_4634_, 5);
v_error_4645_ = lean_ctor_get(v_b_4634_, 6);
lean_inc(v_error_4645_);
v_scene_4646_ = lean_ctor_get(v_b_4634_, 7);
v_derived_4647_ = lean_ctor_get(v_b_4634_, 8);
v_heard_4648_ = lean_ctor_get(v_b_4634_, 9);
v_minSeconds_4649_ = lean_ctor_get(v_b_4634_, 10);
v_dropped_4650_ = lean_ctor_get(v_b_4634_, 11);
v_drift_4651_ = lean_ctor_get(v_b_4634_, 12);
v_cfg_4652_ = lean_ctor_get(v_routine_4639_, 0);
lean_inc_ref(v_cfg_4652_);
v_phases_4653_ = lean_ctor_get(v_routine_4639_, 1);
lean_inc(v_phases_4653_);
v_problems_4654_ = lp_choreo_Choreo_phaseProblems(v_routine_4639_);
v___x_4655_ = lean_box(0);
lean_inc(v_asks_4642_);
v_asks_4656_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__0(v_routine_4639_, v_asks_4642_, v___x_4655_);
v_globalOk_4657_ = lp_choreo_Choreo_Routine_checkGlobal(v_routine_4639_);
lean_inc_ref(v_b_4634_);
v___x_4658_ = lp_choreo_Choreo_Built_movementOk(v_b_4634_);
v___x_4947_ = 1;
if (v___x_4658_ == 0)
{
uint8_t v___x_5094_; 
v___x_5094_ = lp_choreo_List_any___at___00Choreo_report_spec__12(v_problems_4654_);
if (v___x_5094_ == 0)
{
lean_object* v___x_5095_; 
lean_inc(v_asks_4642_);
lean_inc_ref(v_routine_4639_);
v___x_5095_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(v_routine_4639_, v_asks_4642_);
if (lean_obj_tag(v___x_5095_) == 0)
{
if (v___x_4658_ == 0)
{
lean_object* v___x_5096_; 
v___x_5096_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__19));
v___y_5072_ = v___x_5096_;
goto v___jp_5071_;
}
else
{
goto v___jp_5092_;
}
}
else
{
lean_dec_ref_known(v___x_5095_, 1);
goto v___jp_5092_;
}
}
else
{
goto v___jp_5092_;
}
}
else
{
lean_object* v___x_5097_; 
v___x_5097_ = ((lean_object*)(lp_choreo_Choreo_report___closed__37));
v___y_5072_ = v___x_5097_;
goto v___jp_5071_;
}
v___jp_4659_:
{
lean_object* v_n_4680_; lean_object* v_dmin_4681_; lean_object* v_vmax_4682_; lean_object* v_stage_4683_; lean_object* v_ticksPerBeat_4684_; lean_object* v_bpmNum_4685_; lean_object* v_bpmDen_4686_; lean_object* v_total_4687_; lean_object* v_seconds_4688_; lean_object* v___x_4689_; lean_object* v___x_4690_; lean_object* v___x_4691_; lean_object* v___x_4692_; lean_object* v___x_4693_; lean_object* v___x_4694_; lean_object* v___x_4695_; lean_object* v___x_4696_; lean_object* v___x_4697_; lean_object* v___x_4698_; lean_object* v___x_4699_; lean_object* v___x_4700_; lean_object* v___x_4701_; lean_object* v___x_4702_; lean_object* v___x_4703_; lean_object* v___x_4704_; lean_object* v___x_4705_; lean_object* v___x_4706_; lean_object* v___x_4707_; lean_object* v___x_4708_; lean_object* v___x_4709_; lean_object* v___x_4710_; lean_object* v___x_4711_; lean_object* v___x_4712_; lean_object* v___x_4713_; lean_object* v___x_4714_; lean_object* v___x_4715_; lean_object* v___x_4716_; lean_object* v___x_4717_; lean_object* v___x_4718_; lean_object* v___x_4719_; lean_object* v___x_4720_; lean_object* v___x_4721_; lean_object* v___x_4722_; lean_object* v___x_4723_; lean_object* v___x_4724_; lean_object* v___x_4725_; lean_object* v___x_4726_; lean_object* v___x_4727_; lean_object* v___x_4728_; lean_object* v___x_4729_; lean_object* v___x_4730_; lean_object* v___x_4731_; lean_object* v___x_4732_; lean_object* v___x_4733_; lean_object* v___x_4734_; lean_object* v___x_4735_; lean_object* v___x_4736_; lean_object* v___x_4737_; lean_object* v___x_4738_; lean_object* v___x_4739_; lean_object* v___x_4740_; lean_object* v___x_4741_; lean_object* v___x_4742_; lean_object* v___x_4743_; lean_object* v___x_4744_; lean_object* v___x_4745_; lean_object* v___x_4746_; lean_object* v___x_4747_; lean_object* v___x_4748_; lean_object* v___x_4749_; lean_object* v___x_4750_; lean_object* v___x_4751_; lean_object* v___x_4752_; lean_object* v___x_4753_; lean_object* v___x_4754_; lean_object* v___x_4755_; lean_object* v___x_4756_; lean_object* v___x_4757_; uint8_t v___x_4758_; lean_object* v___x_4759_; lean_object* v___x_4760_; lean_object* v___x_4761_; lean_object* v___x_4762_; lean_object* v___x_4763_; lean_object* v___x_4764_; uint8_t v___x_4765_; lean_object* v___x_4766_; lean_object* v___x_4767_; lean_object* v___x_4768_; uint8_t v___x_4769_; lean_object* v___x_4770_; lean_object* v___x_4771_; lean_object* v___x_4772_; lean_object* v___x_4773_; lean_object* v___x_4774_; lean_object* v___x_4775_; lean_object* v___x_4776_; lean_object* v___x_4777_; lean_object* v___x_4778_; lean_object* v___x_4779_; lean_object* v___x_4780_; lean_object* v___x_4781_; lean_object* v___x_4782_; lean_object* v___x_4783_; lean_object* v___x_4784_; lean_object* v___x_4785_; lean_object* v___x_4786_; lean_object* v___x_4787_; lean_object* v___x_4788_; lean_object* v___x_4789_; lean_object* v___x_4790_; lean_object* v___x_4791_; lean_object* v___x_4792_; lean_object* v___x_4793_; lean_object* v___x_4794_; lean_object* v___x_4795_; lean_object* v___x_4796_; lean_object* v___x_4797_; lean_object* v___x_4798_; lean_object* v___x_4799_; lean_object* v___x_4800_; lean_object* v___x_4801_; lean_object* v___x_4802_; lean_object* v___x_4803_; lean_object* v___x_4804_; lean_object* v___x_4805_; lean_object* v___x_4806_; lean_object* v___x_4807_; lean_object* v___x_4808_; lean_object* v___x_4809_; lean_object* v___x_4810_; lean_object* v___x_4811_; lean_object* v___x_4812_; lean_object* v___x_4813_; lean_object* v___x_4814_; lean_object* v___x_4815_; lean_object* v___x_4816_; lean_object* v___x_4817_; lean_object* v___x_4818_; lean_object* v___x_4819_; lean_object* v___x_4820_; lean_object* v___x_4821_; lean_object* v___x_4822_; lean_object* v___x_4823_; lean_object* v___x_4824_; lean_object* v___x_4825_; lean_object* v___x_4826_; 
v_n_4680_ = lean_ctor_get(v_cfg_4652_, 0);
v_dmin_4681_ = lean_ctor_get(v_cfg_4652_, 1);
v_vmax_4682_ = lean_ctor_get(v_cfg_4652_, 2);
v_stage_4683_ = lean_ctor_get(v_cfg_4652_, 3);
v_ticksPerBeat_4684_ = lean_ctor_get(v_cfg_4652_, 4);
v_bpmNum_4685_ = lean_ctor_get(v_cfg_4652_, 5);
v_bpmDen_4686_ = lean_ctor_get(v_cfg_4652_, 6);
v_total_4687_ = lean_ctor_get(v_cfg_4652_, 7);
v_seconds_4688_ = lean_ctor_get(v_cfg_4652_, 8);
lean_inc_ref(v___y_4668_);
v___x_4689_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4689_, 0, v___y_4668_);
lean_ctor_set(v___x_4689_, 1, v___y_4679_);
v___x_4690_ = ((lean_object*)(lp_choreo_Choreo_report___closed__0));
lean_inc_n(v_n_4680_, 2);
v___x_4691_ = l_Lean_JsonNumber_fromNat(v_n_4680_);
v___x_4692_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4692_, 0, v___x_4691_);
lean_inc_ref(v___y_4672_);
v___x_4693_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4693_, 0, v___y_4672_);
lean_ctor_set(v___x_4693_, 1, v___x_4692_);
v___x_4694_ = ((lean_object*)(lp_choreo_Choreo_report___closed__1));
lean_inc(v_dmin_4681_);
v___x_4695_ = lp_choreo_Choreo_jInt(v_dmin_4681_);
v___x_4696_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4696_, 0, v___x_4694_);
lean_ctor_set(v___x_4696_, 1, v___x_4695_);
v___x_4697_ = ((lean_object*)(lp_choreo_Choreo_report___closed__2));
lean_inc(v_vmax_4682_);
v___x_4698_ = lp_choreo_Choreo_jInt(v_vmax_4682_);
v___x_4699_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4699_, 0, v___x_4697_);
lean_ctor_set(v___x_4699_, 1, v___x_4698_);
v___x_4700_ = ((lean_object*)(lp_choreo_Choreo_report___closed__3));
lean_inc_ref(v_stage_4683_);
v___x_4701_ = lp_choreo_Choreo_jRect(v_stage_4683_);
v___x_4702_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4702_, 0, v___x_4700_);
lean_ctor_set(v___x_4702_, 1, v___x_4701_);
v___x_4703_ = lean_obj_once(&lp_choreo_Choreo_report___closed__6, &lp_choreo_Choreo_report___closed__6_once, _init_lp_choreo_Choreo_report___closed__6);
v___x_4704_ = ((lean_object*)(lp_choreo_Choreo_report___closed__7));
lean_inc(v_ticksPerBeat_4684_);
v___x_4705_ = l_Lean_JsonNumber_fromNat(v_ticksPerBeat_4684_);
v___x_4706_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4706_, 0, v___x_4705_);
v___x_4707_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4707_, 0, v___x_4704_);
lean_ctor_set(v___x_4707_, 1, v___x_4706_);
v___x_4708_ = ((lean_object*)(lp_choreo_Choreo_report___closed__8));
lean_inc(v_bpmNum_4685_);
v___x_4709_ = l_Lean_JsonNumber_fromNat(v_bpmNum_4685_);
v___x_4710_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4710_, 0, v___x_4709_);
v___x_4711_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4711_, 0, v___x_4708_);
lean_ctor_set(v___x_4711_, 1, v___x_4710_);
v___x_4712_ = ((lean_object*)(lp_choreo_Choreo_report___closed__9));
lean_inc(v_bpmDen_4686_);
v___x_4713_ = l_Lean_JsonNumber_fromNat(v_bpmDen_4686_);
v___x_4714_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4714_, 0, v___x_4713_);
v___x_4715_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4715_, 0, v___x_4712_);
lean_ctor_set(v___x_4715_, 1, v___x_4714_);
v___x_4716_ = ((lean_object*)(lp_choreo_Choreo_report___closed__10));
lean_inc(v_total_4687_);
v___x_4717_ = l_Lean_JsonNumber_fromNat(v_total_4687_);
v___x_4718_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4718_, 0, v___x_4717_);
v___x_4719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4719_, 0, v___x_4716_);
lean_ctor_set(v___x_4719_, 1, v___x_4718_);
lean_inc(v_seconds_4688_);
v___x_4720_ = l_Lean_JsonNumber_fromNat(v_seconds_4688_);
v___x_4721_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4721_, 0, v___x_4720_);
lean_inc_ref(v___y_4678_);
v___x_4722_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4722_, 0, v___y_4678_);
lean_ctor_set(v___x_4722_, 1, v___x_4721_);
lean_inc_n(v___y_4664_, 2);
v___x_4723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4723_, 0, v___x_4722_);
lean_ctor_set(v___x_4723_, 1, v___y_4664_);
v___x_4724_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4724_, 0, v___x_4719_);
lean_ctor_set(v___x_4724_, 1, v___x_4723_);
v___x_4725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4725_, 0, v___x_4715_);
lean_ctor_set(v___x_4725_, 1, v___x_4724_);
v___x_4726_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4726_, 0, v___x_4711_);
lean_ctor_set(v___x_4726_, 1, v___x_4725_);
v___x_4727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4727_, 0, v___x_4707_);
lean_ctor_set(v___x_4727_, 1, v___x_4726_);
v___x_4728_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4728_, 0, v___x_4703_);
lean_ctor_set(v___x_4728_, 1, v___x_4727_);
v___x_4729_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4729_, 0, v___x_4702_);
lean_ctor_set(v___x_4729_, 1, v___x_4728_);
v___x_4730_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4730_, 0, v___x_4699_);
lean_ctor_set(v___x_4730_, 1, v___x_4729_);
v___x_4731_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4731_, 0, v___x_4696_);
lean_ctor_set(v___x_4731_, 1, v___x_4730_);
v___x_4732_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4732_, 0, v___x_4693_);
lean_ctor_set(v___x_4732_, 1, v___x_4731_);
v___x_4733_ = l_Lean_Json_mkObj(v___x_4732_);
lean_dec_ref_known(v___x_4732_, 2);
v___x_4734_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4734_, 0, v___x_4690_);
lean_ctor_set(v___x_4734_, 1, v___x_4733_);
v___x_4735_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__8));
v___x_4736_ = l_List_range(v_n_4680_);
lean_inc_n(v___y_4675_, 6);
lean_inc_ref_n(v_names_4635_, 3);
v___x_4737_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__2(v_names_4635_, v___x_4736_, v___y_4675_);
v___x_4738_ = lean_array_mk(v___x_4737_);
v___x_4739_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4739_, 0, v___x_4738_);
v___x_4740_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4740_, 0, v___x_4735_);
lean_ctor_set(v___x_4740_, 1, v___x_4739_);
v___x_4741_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__0));
v___x_4742_ = lean_unsigned_to_nat(0u);
lean_inc(v_phases_4653_);
v___x_4743_ = l_List_zipIdxTR___redArg(v_phases_4653_, v___x_4742_);
lean_inc_ref_n(v_cfg_4652_, 2);
v___x_4744_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4(v___y_4666_, v_cfg_4652_, v_names_4635_, v___x_4743_, v___y_4675_);
lean_dec_ref(v___y_4666_);
v___x_4745_ = lean_array_mk(v___x_4744_);
v___x_4746_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4746_, 0, v___x_4745_);
v___x_4747_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4747_, 0, v___x_4741_);
lean_ctor_set(v___x_4747_, 1, v___x_4746_);
v___x_4748_ = ((lean_object*)(lp_choreo_Choreo_report___closed__11));
lean_inc(v_keys_4644_);
v___x_4749_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5(v_keys_4644_, v___y_4675_);
v___x_4750_ = lean_array_mk(v___x_4749_);
v___x_4751_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4751_, 0, v___x_4750_);
v___x_4752_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4752_, 0, v___x_4748_);
lean_ctor_set(v___x_4752_, 1, v___x_4751_);
v___x_4753_ = ((lean_object*)(lp_choreo_Choreo_report___closed__12));
v___x_4754_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4754_, 0, v_globalOk_4657_);
v___x_4755_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4755_, 0, v___x_4753_);
lean_ctor_set(v___x_4755_, 1, v___x_4754_);
v___x_4756_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__4));
v___x_4757_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__4));
lean_inc_ref(v_b_4634_);
v___x_4758_ = lp_choreo_Choreo_Built_formationOk(v_b_4634_);
v___x_4759_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4759_, 0, v___x_4758_);
v___x_4760_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4760_, 0, v___x_4757_);
lean_ctor_set(v___x_4760_, 1, v___x_4759_);
v___x_4761_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__5));
v___x_4762_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4762_, 0, v___x_4658_);
v___x_4763_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4763_, 0, v___x_4761_);
lean_ctor_set(v___x_4763_, 1, v___x_4762_);
v___x_4764_ = ((lean_object*)(lp_choreo_Choreo_report___closed__13));
v___x_4765_ = lp_choreo_Choreo_Built_musicOk(v_b_4634_);
v___x_4766_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4766_, 0, v___x_4765_);
v___x_4767_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4767_, 0, v___x_4764_);
lean_ctor_set(v___x_4767_, 1, v___x_4766_);
v___x_4768_ = ((lean_object*)(lp_choreo_Choreo_report___closed__14));
lean_inc_ref(v_routine_4639_);
v___x_4769_ = lp_choreo_Choreo_Routine_checkMovement(v_routine_4639_);
v___x_4770_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4770_, 0, v___x_4769_);
v___x_4771_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4771_, 0, v___x_4768_);
lean_ctor_set(v___x_4771_, 1, v___x_4770_);
v___x_4772_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4772_, 0, v___x_4771_);
lean_ctor_set(v___x_4772_, 1, v___y_4664_);
v___x_4773_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4773_, 0, v___x_4767_);
lean_ctor_set(v___x_4773_, 1, v___x_4772_);
v___x_4774_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4774_, 0, v___x_4763_);
lean_ctor_set(v___x_4774_, 1, v___x_4773_);
v___x_4775_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4775_, 0, v___x_4760_);
lean_ctor_set(v___x_4775_, 1, v___x_4774_);
v___x_4776_ = l_Lean_Json_mkObj(v___x_4775_);
lean_dec_ref_known(v___x_4775_, 2);
v___x_4777_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4777_, 0, v___x_4756_);
lean_ctor_set(v___x_4777_, 1, v___x_4776_);
v___x_4778_ = ((lean_object*)(lp_choreo_Choreo_report___closed__15));
v___x_4779_ = lp_choreo_Choreo_transitionsOf(v_b_4634_);
v___x_4780_ = l_List_zipIdxTR___redArg(v___x_4779_, v___x_4742_);
v___x_4781_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6(v_routine_4639_, v___x_4780_, v___y_4675_);
v___x_4782_ = lean_array_mk(v___x_4781_);
v___x_4783_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4783_, 0, v___x_4782_);
v___x_4784_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4784_, 0, v___x_4778_);
lean_ctor_set(v___x_4784_, 1, v___x_4783_);
v___x_4785_ = ((lean_object*)(lp_choreo_Choreo_report___closed__16));
v___x_4786_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7(v_asks_4656_, v___y_4675_);
v___x_4787_ = lean_array_mk(v___x_4786_);
v___x_4788_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4788_, 0, v___x_4787_);
v___x_4789_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4789_, 0, v___x_4785_);
lean_ctor_set(v___x_4789_, 1, v___x_4788_);
v___x_4790_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__0));
v___x_4791_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(v_cfg_4652_, v_phases_4653_, v_names_4635_, v_problems_4654_, v___y_4675_);
v___x_4792_ = lean_array_mk(v___x_4791_);
v___x_4793_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4793_, 0, v___x_4792_);
v___x_4794_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4794_, 0, v___x_4790_);
lean_ctor_set(v___x_4794_, 1, v___x_4793_);
v___x_4795_ = ((lean_object*)(lp_choreo_Choreo_report___closed__17));
v___x_4796_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10(v___y_4669_, v___y_4671_, v_names_4635_, v_rejected_4643_, v___y_4675_);
v___x_4797_ = lean_array_mk(v___x_4796_);
v___x_4798_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4798_, 0, v___x_4797_);
v___x_4799_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4799_, 0, v___x_4795_);
lean_ctor_set(v___x_4799_, 1, v___x_4798_);
v___x_4800_ = ((lean_object*)(lp_choreo_Choreo_report___closed__18));
v___x_4801_ = lp_choreo_Choreo_samplesJson(v_cfg_4652_, v_phases_4653_);
v___x_4802_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4802_, 0, v___x_4800_);
lean_ctor_set(v___x_4802_, 1, v___x_4801_);
v___x_4803_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4803_, 0, v___x_4802_);
lean_ctor_set(v___x_4803_, 1, v___y_4664_);
v___x_4804_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4804_, 0, v___x_4799_);
lean_ctor_set(v___x_4804_, 1, v___x_4803_);
v___x_4805_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4805_, 0, v___x_4794_);
lean_ctor_set(v___x_4805_, 1, v___x_4804_);
v___x_4806_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4806_, 0, v___x_4789_);
lean_ctor_set(v___x_4806_, 1, v___x_4805_);
v___x_4807_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4807_, 0, v___x_4784_);
lean_ctor_set(v___x_4807_, 1, v___x_4806_);
v___x_4808_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4808_, 0, v___x_4777_);
lean_ctor_set(v___x_4808_, 1, v___x_4807_);
v___x_4809_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4809_, 0, v___x_4755_);
lean_ctor_set(v___x_4809_, 1, v___x_4808_);
v___x_4810_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4810_, 0, v___x_4752_);
lean_ctor_set(v___x_4810_, 1, v___x_4809_);
v___x_4811_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4811_, 0, v___x_4747_);
lean_ctor_set(v___x_4811_, 1, v___x_4810_);
v___x_4812_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4812_, 0, v___x_4740_);
lean_ctor_set(v___x_4812_, 1, v___x_4811_);
v___x_4813_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4813_, 0, v___x_4734_);
lean_ctor_set(v___x_4813_, 1, v___x_4812_);
v___x_4814_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4814_, 0, v___x_4689_);
lean_ctor_set(v___x_4814_, 1, v___x_4813_);
v___x_4815_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4815_, 0, v___y_4667_);
lean_ctor_set(v___x_4815_, 1, v___x_4814_);
v___x_4816_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4816_, 0, v___y_4673_);
lean_ctor_set(v___x_4816_, 1, v___x_4815_);
v___x_4817_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4817_, 0, v___y_4670_);
lean_ctor_set(v___x_4817_, 1, v___x_4816_);
v___x_4818_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4818_, 0, v___y_4660_);
lean_ctor_set(v___x_4818_, 1, v___x_4817_);
v___x_4819_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4819_, 0, v___y_4676_);
lean_ctor_set(v___x_4819_, 1, v___x_4818_);
v___x_4820_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4820_, 0, v___y_4674_);
lean_ctor_set(v___x_4820_, 1, v___x_4819_);
v___x_4821_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4821_, 0, v___y_4677_);
lean_ctor_set(v___x_4821_, 1, v___x_4820_);
v___x_4822_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4822_, 0, v___y_4661_);
lean_ctor_set(v___x_4822_, 1, v___x_4821_);
v___x_4823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4823_, 0, v___y_4663_);
lean_ctor_set(v___x_4823_, 1, v___x_4822_);
v___x_4824_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4824_, 0, v___y_4662_);
lean_ctor_set(v___x_4824_, 1, v___x_4823_);
v___x_4825_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4825_, 0, v___y_4665_);
lean_ctor_set(v___x_4825_, 1, v___x_4824_);
v___x_4826_ = l_Lean_Json_mkObj(v___x_4825_);
lean_dec_ref_known(v___x_4825_, 2);
return v___x_4826_;
}
v___jp_4827_:
{
lean_object* v___x_4847_; lean_object* v___x_4848_; lean_object* v___x_4849_; 
lean_inc_ref(v___y_4843_);
v___x_4847_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4847_, 0, v___y_4843_);
lean_ctor_set(v___x_4847_, 1, v___y_4846_);
v___x_4848_ = ((lean_object*)(lp_choreo_Choreo_report___closed__19));
lean_inc(v_asks_4642_);
lean_inc_ref(v_routine_4639_);
v___x_4849_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(v_routine_4639_, v_asks_4642_);
if (lean_obj_tag(v___x_4849_) == 0)
{
lean_object* v___x_4850_; 
v___x_4850_ = lean_box(0);
v___y_4660_ = v___y_4828_;
v___y_4661_ = v___y_4829_;
v___y_4662_ = v___y_4830_;
v___y_4663_ = v___y_4831_;
v___y_4664_ = v___y_4832_;
v___y_4665_ = v___y_4833_;
v___y_4666_ = v___y_4834_;
v___y_4667_ = v___x_4847_;
v___y_4668_ = v___x_4848_;
v___y_4669_ = v___y_4835_;
v___y_4670_ = v___y_4836_;
v___y_4671_ = v___y_4837_;
v___y_4672_ = v___y_4838_;
v___y_4673_ = v___y_4839_;
v___y_4674_ = v___y_4841_;
v___y_4675_ = v___y_4840_;
v___y_4676_ = v___y_4842_;
v___y_4677_ = v___y_4844_;
v___y_4678_ = v___y_4845_;
v___y_4679_ = v___x_4850_;
goto v___jp_4659_;
}
else
{
lean_object* v_val_4851_; lean_object* v___x_4853_; uint8_t v_isShared_4854_; uint8_t v_isSharedCheck_4921_; 
v_val_4851_ = lean_ctor_get(v___x_4849_, 0);
v_isSharedCheck_4921_ = !lean_is_exclusive(v___x_4849_);
if (v_isSharedCheck_4921_ == 0)
{
v___x_4853_ = v___x_4849_;
v_isShared_4854_ = v_isSharedCheck_4921_;
goto v_resetjp_4852_;
}
else
{
lean_inc(v_val_4851_);
lean_dec(v___x_4849_);
v___x_4853_ = lean_box(0);
v_isShared_4854_ = v_isSharedCheck_4921_;
goto v_resetjp_4852_;
}
v_resetjp_4852_:
{
lean_object* v_snd_4855_; lean_object* v_snd_4856_; lean_object* v___x_4858_; uint8_t v_isShared_4859_; uint8_t v_isSharedCheck_4919_; 
v_snd_4855_ = lean_ctor_get(v_val_4851_, 1);
lean_inc(v_snd_4855_);
v_snd_4856_ = lean_ctor_get(v_snd_4855_, 1);
v_isSharedCheck_4919_ = !lean_is_exclusive(v_snd_4855_);
if (v_isSharedCheck_4919_ == 0)
{
lean_object* v_unused_4920_; 
v_unused_4920_ = lean_ctor_get(v_snd_4855_, 0);
lean_dec(v_unused_4920_);
v___x_4858_ = v_snd_4855_;
v_isShared_4859_ = v_isSharedCheck_4919_;
goto v_resetjp_4857_;
}
else
{
lean_inc(v_snd_4856_);
lean_dec(v_snd_4855_);
v___x_4858_ = lean_box(0);
v_isShared_4859_ = v_isSharedCheck_4919_;
goto v_resetjp_4857_;
}
v_resetjp_4857_:
{
lean_object* v_snd_4860_; lean_object* v___x_4862_; uint8_t v_isShared_4863_; uint8_t v_isSharedCheck_4917_; 
v_snd_4860_ = lean_ctor_get(v_snd_4856_, 1);
v_isSharedCheck_4917_ = !lean_is_exclusive(v_snd_4856_);
if (v_isSharedCheck_4917_ == 0)
{
lean_object* v_unused_4918_; 
v_unused_4918_ = lean_ctor_get(v_snd_4856_, 0);
lean_dec(v_unused_4918_);
v___x_4862_ = v_snd_4856_;
v_isShared_4863_ = v_isSharedCheck_4917_;
goto v_resetjp_4861_;
}
else
{
lean_inc(v_snd_4860_);
lean_dec(v_snd_4856_);
v___x_4862_ = lean_box(0);
v_isShared_4863_ = v_isSharedCheck_4917_;
goto v_resetjp_4861_;
}
v_resetjp_4861_:
{
lean_object* v_snd_4864_; lean_object* v___x_4866_; uint8_t v_isShared_4867_; uint8_t v_isSharedCheck_4915_; 
v_snd_4864_ = lean_ctor_get(v_snd_4860_, 1);
v_isSharedCheck_4915_ = !lean_is_exclusive(v_snd_4860_);
if (v_isSharedCheck_4915_ == 0)
{
lean_object* v_unused_4916_; 
v_unused_4916_ = lean_ctor_get(v_snd_4860_, 0);
lean_dec(v_unused_4916_);
v___x_4866_ = v_snd_4860_;
v_isShared_4867_ = v_isSharedCheck_4915_;
goto v_resetjp_4865_;
}
else
{
lean_inc(v_snd_4864_);
lean_dec(v_snd_4860_);
v___x_4866_ = lean_box(0);
v_isShared_4867_ = v_isSharedCheck_4915_;
goto v_resetjp_4865_;
}
v_resetjp_4865_:
{
lean_object* v_snd_4868_; lean_object* v___x_4870_; uint8_t v_isShared_4871_; uint8_t v_isSharedCheck_4913_; 
v_snd_4868_ = lean_ctor_get(v_snd_4864_, 1);
v_isSharedCheck_4913_ = !lean_is_exclusive(v_snd_4864_);
if (v_isSharedCheck_4913_ == 0)
{
lean_object* v_unused_4914_; 
v_unused_4914_ = lean_ctor_get(v_snd_4864_, 0);
lean_dec(v_unused_4914_);
v___x_4870_ = v_snd_4864_;
v_isShared_4871_ = v_isSharedCheck_4913_;
goto v_resetjp_4869_;
}
else
{
lean_inc(v_snd_4868_);
lean_dec(v_snd_4864_);
v___x_4870_ = lean_box(0);
v_isShared_4871_ = v_isSharedCheck_4913_;
goto v_resetjp_4869_;
}
v_resetjp_4869_:
{
lean_object* v_fst_4872_; lean_object* v___x_4874_; uint8_t v_isShared_4875_; uint8_t v_isSharedCheck_4911_; 
v_fst_4872_ = lean_ctor_get(v_val_4851_, 0);
v_isSharedCheck_4911_ = !lean_is_exclusive(v_val_4851_);
if (v_isSharedCheck_4911_ == 0)
{
lean_object* v_unused_4912_; 
v_unused_4912_ = lean_ctor_get(v_val_4851_, 1);
lean_dec(v_unused_4912_);
v___x_4874_ = v_val_4851_;
v_isShared_4875_ = v_isSharedCheck_4911_;
goto v_resetjp_4873_;
}
else
{
lean_inc(v_fst_4872_);
lean_dec(v_val_4851_);
v___x_4874_ = lean_box(0);
v_isShared_4875_ = v_isSharedCheck_4911_;
goto v_resetjp_4873_;
}
v_resetjp_4873_:
{
lean_object* v_fst_4876_; lean_object* v_snd_4877_; lean_object* v___x_4879_; uint8_t v_isShared_4880_; uint8_t v_isSharedCheck_4910_; 
v_fst_4876_ = lean_ctor_get(v_snd_4868_, 0);
v_snd_4877_ = lean_ctor_get(v_snd_4868_, 1);
v_isSharedCheck_4910_ = !lean_is_exclusive(v_snd_4868_);
if (v_isSharedCheck_4910_ == 0)
{
v___x_4879_ = v_snd_4868_;
v_isShared_4880_ = v_isSharedCheck_4910_;
goto v_resetjp_4878_;
}
else
{
lean_inc(v_snd_4877_);
lean_inc(v_fst_4876_);
lean_dec(v_snd_4868_);
v___x_4879_ = lean_box(0);
v_isShared_4880_ = v_isSharedCheck_4910_;
goto v_resetjp_4878_;
}
v_resetjp_4878_:
{
lean_object* v___x_4881_; lean_object* v___x_4883_; 
v___x_4881_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
if (v_isShared_4854_ == 0)
{
lean_ctor_set_tag(v___x_4853_, 3);
lean_ctor_set(v___x_4853_, 0, v_fst_4872_);
v___x_4883_ = v___x_4853_;
goto v_reusejp_4882_;
}
else
{
lean_object* v_reuseFailAlloc_4909_; 
v_reuseFailAlloc_4909_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4909_, 0, v_fst_4872_);
v___x_4883_ = v_reuseFailAlloc_4909_;
goto v_reusejp_4882_;
}
v_reusejp_4882_:
{
lean_object* v___x_4885_; 
if (v_isShared_4880_ == 0)
{
lean_ctor_set(v___x_4879_, 1, v___x_4883_);
lean_ctor_set(v___x_4879_, 0, v___x_4881_);
v___x_4885_ = v___x_4879_;
goto v_reusejp_4884_;
}
else
{
lean_object* v_reuseFailAlloc_4908_; 
v_reuseFailAlloc_4908_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4908_, 0, v___x_4881_);
lean_ctor_set(v_reuseFailAlloc_4908_, 1, v___x_4883_);
v___x_4885_ = v_reuseFailAlloc_4908_;
goto v_reusejp_4884_;
}
v_reusejp_4884_:
{
lean_object* v___x_4886_; lean_object* v___x_4887_; lean_object* v___x_4888_; lean_object* v___x_4890_; 
v___x_4886_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
v___x_4887_ = l_Lean_JsonNumber_fromNat(v_fst_4876_);
v___x_4888_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4888_, 0, v___x_4887_);
if (v_isShared_4871_ == 0)
{
lean_ctor_set(v___x_4870_, 1, v___x_4888_);
lean_ctor_set(v___x_4870_, 0, v___x_4886_);
v___x_4890_ = v___x_4870_;
goto v_reusejp_4889_;
}
else
{
lean_object* v_reuseFailAlloc_4907_; 
v_reuseFailAlloc_4907_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4907_, 0, v___x_4886_);
lean_ctor_set(v_reuseFailAlloc_4907_, 1, v___x_4888_);
v___x_4890_ = v_reuseFailAlloc_4907_;
goto v_reusejp_4889_;
}
v_reusejp_4889_:
{
lean_object* v___x_4891_; lean_object* v___x_4892_; lean_object* v___x_4893_; lean_object* v___x_4895_; 
v___x_4891_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
v___x_4892_ = l_Lean_JsonNumber_fromNat(v_snd_4877_);
v___x_4893_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4893_, 0, v___x_4892_);
if (v_isShared_4867_ == 0)
{
lean_ctor_set(v___x_4866_, 1, v___x_4893_);
lean_ctor_set(v___x_4866_, 0, v___x_4891_);
v___x_4895_ = v___x_4866_;
goto v_reusejp_4894_;
}
else
{
lean_object* v_reuseFailAlloc_4906_; 
v_reuseFailAlloc_4906_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4906_, 0, v___x_4891_);
lean_ctor_set(v_reuseFailAlloc_4906_, 1, v___x_4893_);
v___x_4895_ = v_reuseFailAlloc_4906_;
goto v_reusejp_4894_;
}
v_reusejp_4894_:
{
lean_object* v___x_4897_; 
lean_inc(v___y_4832_);
if (v_isShared_4863_ == 0)
{
lean_ctor_set_tag(v___x_4862_, 1);
lean_ctor_set(v___x_4862_, 1, v___y_4832_);
lean_ctor_set(v___x_4862_, 0, v___x_4895_);
v___x_4897_ = v___x_4862_;
goto v_reusejp_4896_;
}
else
{
lean_object* v_reuseFailAlloc_4905_; 
v_reuseFailAlloc_4905_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4905_, 0, v___x_4895_);
lean_ctor_set(v_reuseFailAlloc_4905_, 1, v___y_4832_);
v___x_4897_ = v_reuseFailAlloc_4905_;
goto v_reusejp_4896_;
}
v_reusejp_4896_:
{
lean_object* v___x_4899_; 
if (v_isShared_4859_ == 0)
{
lean_ctor_set_tag(v___x_4858_, 1);
lean_ctor_set(v___x_4858_, 1, v___x_4897_);
lean_ctor_set(v___x_4858_, 0, v___x_4890_);
v___x_4899_ = v___x_4858_;
goto v_reusejp_4898_;
}
else
{
lean_object* v_reuseFailAlloc_4904_; 
v_reuseFailAlloc_4904_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4904_, 0, v___x_4890_);
lean_ctor_set(v_reuseFailAlloc_4904_, 1, v___x_4897_);
v___x_4899_ = v_reuseFailAlloc_4904_;
goto v_reusejp_4898_;
}
v_reusejp_4898_:
{
lean_object* v___x_4901_; 
if (v_isShared_4875_ == 0)
{
lean_ctor_set_tag(v___x_4874_, 1);
lean_ctor_set(v___x_4874_, 1, v___x_4899_);
lean_ctor_set(v___x_4874_, 0, v___x_4885_);
v___x_4901_ = v___x_4874_;
goto v_reusejp_4900_;
}
else
{
lean_object* v_reuseFailAlloc_4903_; 
v_reuseFailAlloc_4903_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4903_, 0, v___x_4885_);
lean_ctor_set(v_reuseFailAlloc_4903_, 1, v___x_4899_);
v___x_4901_ = v_reuseFailAlloc_4903_;
goto v_reusejp_4900_;
}
v_reusejp_4900_:
{
lean_object* v___x_4902_; 
v___x_4902_ = l_Lean_Json_mkObj(v___x_4901_);
lean_dec_ref(v___x_4901_);
v___y_4660_ = v___y_4828_;
v___y_4661_ = v___y_4829_;
v___y_4662_ = v___y_4830_;
v___y_4663_ = v___y_4831_;
v___y_4664_ = v___y_4832_;
v___y_4665_ = v___y_4833_;
v___y_4666_ = v___y_4834_;
v___y_4667_ = v___x_4847_;
v___y_4668_ = v___x_4848_;
v___y_4669_ = v___y_4835_;
v___y_4670_ = v___y_4836_;
v___y_4671_ = v___y_4837_;
v___y_4672_ = v___y_4838_;
v___y_4673_ = v___y_4839_;
v___y_4674_ = v___y_4841_;
v___y_4675_ = v___y_4840_;
v___y_4676_ = v___y_4842_;
v___y_4677_ = v___y_4844_;
v___y_4678_ = v___y_4845_;
v___y_4679_ = v___x_4902_;
goto v___jp_4659_;
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
}
}
v___jp_4922_:
{
lean_object* v___x_4941_; lean_object* v___x_4942_; 
lean_inc_ref(v___y_4923_);
v___x_4941_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4941_, 0, v___y_4923_);
lean_ctor_set(v___x_4941_, 1, v___y_4940_);
v___x_4942_ = ((lean_object*)(lp_choreo_Choreo_report___closed__20));
if (lean_obj_tag(v_derived_4647_) == 0)
{
lean_object* v___x_4943_; 
v___x_4943_ = lean_box(0);
v___y_4828_ = v___y_4924_;
v___y_4829_ = v___y_4925_;
v___y_4830_ = v___y_4926_;
v___y_4831_ = v___y_4927_;
v___y_4832_ = v___y_4928_;
v___y_4833_ = v___y_4929_;
v___y_4834_ = v___y_4930_;
v___y_4835_ = v___y_4931_;
v___y_4836_ = v___y_4932_;
v___y_4837_ = v___y_4933_;
v___y_4838_ = v___y_4934_;
v___y_4839_ = v___x_4941_;
v___y_4840_ = v___y_4936_;
v___y_4841_ = v___y_4935_;
v___y_4842_ = v___y_4937_;
v___y_4843_ = v___x_4942_;
v___y_4844_ = v___y_4938_;
v___y_4845_ = v___y_4939_;
v___y_4846_ = v___x_4943_;
goto v___jp_4827_;
}
else
{
lean_object* v_val_4944_; uint8_t v___x_4945_; lean_object* v___x_4946_; 
v_val_4944_ = lean_ctor_get(v_derived_4647_, 0);
v___x_4945_ = 0;
lean_inc(v_val_4944_);
v___x_4946_ = lp_choreo_Choreo_sceneJson(v_val_4944_, v___x_4945_);
v___y_4828_ = v___y_4924_;
v___y_4829_ = v___y_4925_;
v___y_4830_ = v___y_4926_;
v___y_4831_ = v___y_4927_;
v___y_4832_ = v___y_4928_;
v___y_4833_ = v___y_4929_;
v___y_4834_ = v___y_4930_;
v___y_4835_ = v___y_4931_;
v___y_4836_ = v___y_4932_;
v___y_4837_ = v___y_4933_;
v___y_4838_ = v___y_4934_;
v___y_4839_ = v___x_4941_;
v___y_4840_ = v___y_4936_;
v___y_4841_ = v___y_4935_;
v___y_4842_ = v___y_4937_;
v___y_4843_ = v___x_4942_;
v___y_4844_ = v___y_4938_;
v___y_4845_ = v___y_4939_;
v___y_4846_ = v___x_4946_;
goto v___jp_4827_;
}
}
v___jp_4948_:
{
lean_object* v___x_4972_; lean_object* v___x_4973_; lean_object* v___x_4974_; lean_object* v___x_4975_; lean_object* v___x_4976_; lean_object* v___x_4977_; lean_object* v___x_4978_; lean_object* v___x_4979_; lean_object* v___x_4980_; lean_object* v___x_4981_; lean_object* v___x_4982_; 
lean_inc_ref(v___y_4963_);
v___x_4972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4972_, 0, v___y_4963_);
lean_ctor_set(v___x_4972_, 1, v___y_4971_);
v___x_4973_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4973_, 0, v___x_4972_);
lean_ctor_set(v___x_4973_, 1, v___x_4655_);
v___x_4974_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4974_, 0, v___y_4949_);
lean_ctor_set(v___x_4974_, 1, v___x_4973_);
v___x_4975_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4975_, 0, v___y_4969_);
lean_ctor_set(v___x_4975_, 1, v___x_4974_);
v___x_4976_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4976_, 0, v___y_4952_);
lean_ctor_set(v___x_4976_, 1, v___x_4975_);
v___x_4977_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4977_, 0, v___y_4970_);
lean_ctor_set(v___x_4977_, 1, v___x_4976_);
v___x_4978_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4978_, 0, v___y_4966_);
lean_ctor_set(v___x_4978_, 1, v___x_4977_);
v___x_4979_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4979_, 0, v___y_4965_);
lean_ctor_set(v___x_4979_, 1, v___x_4978_);
v___x_4980_ = l_Lean_Json_mkObj(v___x_4979_);
lean_dec_ref_known(v___x_4979_, 2);
lean_inc_ref(v___y_4958_);
v___x_4981_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4981_, 0, v___y_4958_);
lean_ctor_set(v___x_4981_, 1, v___x_4980_);
v___x_4982_ = ((lean_object*)(lp_choreo_Choreo_report___closed__21));
if (lean_obj_tag(v_scene_4646_) == 0)
{
lean_object* v___x_4983_; 
v___x_4983_ = lean_box(0);
v___y_4923_ = v___x_4982_;
v___y_4924_ = v___y_4950_;
v___y_4925_ = v___y_4951_;
v___y_4926_ = v___y_4953_;
v___y_4927_ = v___y_4954_;
v___y_4928_ = v___x_4655_;
v___y_4929_ = v___y_4955_;
v___y_4930_ = v___y_4956_;
v___y_4931_ = v___y_4957_;
v___y_4932_ = v___x_4981_;
v___y_4933_ = v___y_4959_;
v___y_4934_ = v___y_4960_;
v___y_4935_ = v___y_4962_;
v___y_4936_ = v___y_4961_;
v___y_4937_ = v___y_4964_;
v___y_4938_ = v___y_4967_;
v___y_4939_ = v___y_4968_;
v___y_4940_ = v___x_4983_;
goto v___jp_4922_;
}
else
{
lean_object* v_val_4984_; lean_object* v___x_4985_; 
v_val_4984_ = lean_ctor_get(v_scene_4646_, 0);
lean_inc(v_val_4984_);
v___x_4985_ = lp_choreo_Choreo_sceneJson(v_val_4984_, v___x_4947_);
v___y_4923_ = v___x_4982_;
v___y_4924_ = v___y_4950_;
v___y_4925_ = v___y_4951_;
v___y_4926_ = v___y_4953_;
v___y_4927_ = v___y_4954_;
v___y_4928_ = v___x_4655_;
v___y_4929_ = v___y_4955_;
v___y_4930_ = v___y_4956_;
v___y_4931_ = v___y_4957_;
v___y_4932_ = v___x_4981_;
v___y_4933_ = v___y_4959_;
v___y_4934_ = v___y_4960_;
v___y_4935_ = v___y_4962_;
v___y_4936_ = v___y_4961_;
v___y_4937_ = v___y_4964_;
v___y_4938_ = v___y_4967_;
v___y_4939_ = v___y_4968_;
v___y_4940_ = v___x_4985_;
goto v___jp_4922_;
}
}
v___jp_4986_:
{
lean_object* v_seconds_4998_; lean_object* v_bpm_4999_; lean_object* v_genre_5000_; lean_object* v_n_5001_; lean_object* v_left_5002_; lean_object* v_right_5003_; lean_object* v_moves_5004_; lean_object* v_steps_5005_; lean_object* v___x_5006_; lean_object* v___x_5007_; lean_object* v___x_5008_; lean_object* v___x_5009_; lean_object* v___x_5010_; lean_object* v___x_5011_; lean_object* v___x_5012_; lean_object* v___x_5013_; lean_object* v___x_5014_; lean_object* v___x_5015_; lean_object* v___x_5016_; lean_object* v___x_5017_; lean_object* v___x_5018_; lean_object* v___x_5019_; lean_object* v___x_5020_; lean_object* v___x_5021_; lean_object* v___x_5022_; lean_object* v___x_5023_; lean_object* v___x_5024_; lean_object* v___x_5025_; lean_object* v___x_5026_; lean_object* v___x_5027_; lean_object* v___x_5028_; lean_object* v___x_5029_; lean_object* v___x_5030_; lean_object* v___x_5031_; uint8_t v___x_5032_; 
v_seconds_4998_ = lean_ctor_get(v_plan_4640_, 0);
v_bpm_4999_ = lean_ctor_get(v_plan_4640_, 1);
v_genre_5000_ = lean_ctor_get(v_plan_4640_, 2);
v_n_5001_ = lean_ctor_get(v_plan_4640_, 3);
v_left_5002_ = lean_ctor_get(v_plan_4640_, 4);
v_right_5003_ = lean_ctor_get(v_plan_4640_, 5);
v_moves_5004_ = lean_ctor_get(v_plan_4640_, 6);
v_steps_5005_ = lean_ctor_get(v_plan_4640_, 7);
lean_inc_ref(v___y_4996_);
v___x_5006_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5006_, 0, v___y_4996_);
lean_ctor_set(v___x_5006_, 1, v___y_4997_);
v___x_5007_ = ((lean_object*)(lp_choreo_Choreo_report___closed__22));
v___x_5008_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__3));
lean_inc(v_seconds_4998_);
v___x_5009_ = l_Lean_JsonNumber_fromNat(v_seconds_4998_);
v___x_5010_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5010_, 0, v___x_5009_);
v___x_5011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5011_, 0, v___x_5008_);
lean_ctor_set(v___x_5011_, 1, v___x_5010_);
v___x_5012_ = ((lean_object*)(lp_choreo_Choreo_report___closed__23));
lean_inc(v_bpm_4999_);
v___x_5013_ = l_Lean_JsonNumber_fromNat(v_bpm_4999_);
v___x_5014_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5014_, 0, v___x_5013_);
v___x_5015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5015_, 0, v___x_5012_);
lean_ctor_set(v___x_5015_, 1, v___x_5014_);
v___x_5016_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__6));
lean_inc_ref(v_genre_5000_);
v___x_5017_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5017_, 0, v_genre_5000_);
v___x_5018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5018_, 0, v___x_5016_);
lean_ctor_set(v___x_5018_, 1, v___x_5017_);
v___x_5019_ = ((lean_object*)(lp_choreo_Choreo_report___closed__24));
lean_inc(v_n_5001_);
v___x_5020_ = l_Lean_JsonNumber_fromNat(v_n_5001_);
v___x_5021_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5021_, 0, v___x_5020_);
v___x_5022_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5022_, 0, v___x_5019_);
lean_ctor_set(v___x_5022_, 1, v___x_5021_);
v___x_5023_ = ((lean_object*)(lp_choreo_Choreo_report___closed__25));
lean_inc(v_left_5002_);
v___x_5024_ = l_Lean_JsonNumber_fromNat(v_left_5002_);
v___x_5025_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5025_, 0, v___x_5024_);
v___x_5026_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5026_, 0, v___x_5023_);
lean_ctor_set(v___x_5026_, 1, v___x_5025_);
v___x_5027_ = ((lean_object*)(lp_choreo_Choreo_report___closed__26));
lean_inc(v_right_5003_);
v___x_5028_ = l_Lean_JsonNumber_fromNat(v_right_5003_);
v___x_5029_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5029_, 0, v___x_5028_);
v___x_5030_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5030_, 0, v___x_5027_);
lean_ctor_set(v___x_5030_, 1, v___x_5029_);
v___x_5031_ = ((lean_object*)(lp_choreo_Choreo_report___closed__27));
v___x_5032_ = l_List_isEmpty___redArg(v_heard_4648_);
if (v___x_5032_ == 0)
{
lean_object* v___x_5033_; lean_object* v___x_5034_; lean_object* v___x_5035_; lean_object* v___x_5036_; lean_object* v___x_5037_; 
lean_inc(v_steps_5005_);
v___x_5033_ = lp_choreo_Choreo_stepsHeard(v_steps_5005_);
lean_inc(v_heard_4648_);
v___x_5034_ = l_List_appendTR___redArg(v_heard_4648_, v___x_5033_);
lean_inc(v___y_4988_);
v___x_5035_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(v___x_5034_, v___y_4988_);
v___x_5036_ = lean_array_mk(v___x_5035_);
v___x_5037_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5037_, 0, v___x_5036_);
lean_inc(v_bpm_4999_);
lean_inc(v_n_5001_);
v___y_4949_ = v___x_5030_;
v___y_4950_ = v___x_5006_;
v___y_4951_ = v___y_4989_;
v___y_4952_ = v___x_5022_;
v___y_4953_ = v___y_4992_;
v___y_4954_ = v___y_4991_;
v___y_4955_ = v___y_4993_;
v___y_4956_ = v___y_4994_;
v___y_4957_ = v_n_5001_;
v___y_4958_ = v___x_5007_;
v___y_4959_ = v_bpm_4999_;
v___y_4960_ = v___x_5019_;
v___y_4961_ = v___y_4988_;
v___y_4962_ = v___y_4987_;
v___y_4963_ = v___x_5031_;
v___y_4964_ = v___y_4990_;
v___y_4965_ = v___x_5011_;
v___y_4966_ = v___x_5015_;
v___y_4967_ = v___y_4995_;
v___y_4968_ = v___x_5008_;
v___y_4969_ = v___x_5026_;
v___y_4970_ = v___x_5018_;
v___y_4971_ = v___x_5037_;
goto v___jp_4948_;
}
else
{
lean_object* v___x_5038_; lean_object* v___x_5039_; lean_object* v___x_5040_; lean_object* v___x_5041_; lean_object* v___x_5042_; lean_object* v___x_5043_; 
lean_inc(v_moves_5004_);
v___x_5038_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__11(v_moves_5004_, v___x_4655_);
lean_inc(v_steps_5005_);
v___x_5039_ = lp_choreo_Choreo_stepsHeard(v_steps_5005_);
v___x_5040_ = l_List_appendTR___redArg(v___x_5038_, v___x_5039_);
lean_inc(v___y_4988_);
v___x_5041_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(v___x_5040_, v___y_4988_);
v___x_5042_ = lean_array_mk(v___x_5041_);
v___x_5043_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5043_, 0, v___x_5042_);
lean_inc(v_bpm_4999_);
lean_inc(v_n_5001_);
v___y_4949_ = v___x_5030_;
v___y_4950_ = v___x_5006_;
v___y_4951_ = v___y_4989_;
v___y_4952_ = v___x_5022_;
v___y_4953_ = v___y_4992_;
v___y_4954_ = v___y_4991_;
v___y_4955_ = v___y_4993_;
v___y_4956_ = v___y_4994_;
v___y_4957_ = v_n_5001_;
v___y_4958_ = v___x_5007_;
v___y_4959_ = v_bpm_4999_;
v___y_4960_ = v___x_5019_;
v___y_4961_ = v___y_4988_;
v___y_4962_ = v___y_4987_;
v___y_4963_ = v___x_5031_;
v___y_4964_ = v___y_4990_;
v___y_4965_ = v___x_5011_;
v___y_4966_ = v___x_5015_;
v___y_4967_ = v___y_4995_;
v___y_4968_ = v___x_5008_;
v___y_4969_ = v___x_5026_;
v___y_4970_ = v___x_5018_;
v___y_4971_ = v___x_5043_;
goto v___jp_4948_;
}
}
v___jp_5044_:
{
lean_object* v___x_5052_; lean_object* v___x_5053_; lean_object* v___x_5054_; lean_object* v___x_5055_; lean_object* v___x_5056_; lean_object* v___x_5057_; lean_object* v___x_5058_; lean_object* v___x_5059_; lean_object* v___x_5060_; lean_object* v___x_5061_; 
lean_inc_ref(v___y_5050_);
v___x_5052_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5052_, 0, v___y_5050_);
lean_ctor_set(v___x_5052_, 1, v___y_5051_);
v___x_5053_ = ((lean_object*)(lp_choreo_Choreo_report___closed__28));
lean_inc(v_drift_4651_);
v___x_5054_ = lp_choreo_Choreo_jInt(v_drift_4651_);
v___x_5055_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5055_, 0, v___x_5053_);
lean_ctor_set(v___x_5055_, 1, v___x_5054_);
v___x_5056_ = ((lean_object*)(lp_choreo_Choreo_report___closed__29));
lean_inc(v_dropped_4650_);
v___x_5057_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__1(v_dropped_4650_, v___x_4655_);
v___x_5058_ = lean_array_mk(v___x_5057_);
v___x_5059_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_5059_, 0, v___x_5058_);
v___x_5060_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5060_, 0, v___x_5056_);
lean_ctor_set(v___x_5060_, 1, v___x_5059_);
v___x_5061_ = ((lean_object*)(lp_choreo_Choreo_report___closed__30));
if (lean_obj_tag(v_error_4645_) == 0)
{
lean_object* v___x_5062_; 
v___x_5062_ = lean_box(0);
v___y_4987_ = v___x_5055_;
v___y_4988_ = v___x_4655_;
v___y_4989_ = v___y_5045_;
v___y_4990_ = v___x_5060_;
v___y_4991_ = v___y_5047_;
v___y_4992_ = v___y_5046_;
v___y_4993_ = v___y_5048_;
v___y_4994_ = v___y_5049_;
v___y_4995_ = v___x_5052_;
v___y_4996_ = v___x_5061_;
v___y_4997_ = v___x_5062_;
goto v___jp_4986_;
}
else
{
lean_object* v_val_5063_; lean_object* v___x_5065_; uint8_t v_isShared_5066_; uint8_t v_isSharedCheck_5070_; 
v_val_5063_ = lean_ctor_get(v_error_4645_, 0);
v_isSharedCheck_5070_ = !lean_is_exclusive(v_error_4645_);
if (v_isSharedCheck_5070_ == 0)
{
v___x_5065_ = v_error_4645_;
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
else
{
lean_inc(v_val_5063_);
lean_dec(v_error_4645_);
v___x_5065_ = lean_box(0);
v_isShared_5066_ = v_isSharedCheck_5070_;
goto v_resetjp_5064_;
}
v_resetjp_5064_:
{
lean_object* v___x_5068_; 
if (v_isShared_5066_ == 0)
{
lean_ctor_set_tag(v___x_5065_, 3);
v___x_5068_ = v___x_5065_;
goto v_reusejp_5067_;
}
else
{
lean_object* v_reuseFailAlloc_5069_; 
v_reuseFailAlloc_5069_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_5069_, 0, v_val_5063_);
v___x_5068_ = v_reuseFailAlloc_5069_;
goto v_reusejp_5067_;
}
v_reusejp_5067_:
{
v___y_4987_ = v___x_5055_;
v___y_4988_ = v___x_4655_;
v___y_4989_ = v___y_5045_;
v___y_4990_ = v___x_5060_;
v___y_4991_ = v___y_5047_;
v___y_4992_ = v___y_5046_;
v___y_4993_ = v___y_5048_;
v___y_4994_ = v___y_5049_;
v___y_4995_ = v___x_5052_;
v___y_4996_ = v___x_5061_;
v___y_4997_ = v___x_5068_;
goto v___jp_4986_;
}
}
}
}
v___jp_5071_:
{
lean_object* v_labels_5073_; lean_object* v___x_5074_; lean_object* v___x_5075_; lean_object* v___x_5076_; lean_object* v___x_5077_; lean_object* v___x_5078_; lean_object* v___x_5079_; lean_object* v___x_5080_; lean_object* v___x_5081_; lean_object* v___x_5082_; lean_object* v___x_5083_; lean_object* v___x_5084_; lean_object* v___x_5085_; lean_object* v___x_5086_; lean_object* v___x_5087_; lean_object* v___x_5088_; uint8_t v___x_5089_; 
lean_inc(v_labels_4641_);
v_labels_5073_ = lean_array_mk(v_labels_4641_);
v___x_5074_ = ((lean_object*)(lp_choreo_Choreo_report___closed__31));
lean_inc_ref(v___y_5072_);
v___x_5075_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5075_, 0, v___y_5072_);
v___x_5076_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5076_, 0, v___x_5074_);
lean_ctor_set(v___x_5076_, 1, v___x_5075_);
v___x_5077_ = ((lean_object*)(lp_choreo_Choreo_report___closed__32));
lean_inc_ref(v_routine_4639_);
v___x_5078_ = lp_choreo_Choreo_Routine_fingerprint(v_routine_4639_);
v___x_5079_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5079_, 0, v___x_5078_);
v___x_5080_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5080_, 0, v___x_5077_);
lean_ctor_set(v___x_5080_, 1, v___x_5079_);
v___x_5081_ = ((lean_object*)(lp_choreo_Choreo_report___closed__33));
v___x_5082_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_5082_, 0, v_proofPath_4636_);
v___x_5083_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5083_, 0, v___x_5081_);
lean_ctor_set(v___x_5083_, 1, v___x_5082_);
v___x_5084_ = ((lean_object*)(lp_choreo_Choreo_report___closed__34));
lean_inc(v_minSeconds_4649_);
v___x_5085_ = l_Lean_JsonNumber_fromNat(v_minSeconds_4649_);
v___x_5086_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_5086_, 0, v___x_5085_);
v___x_5087_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_5087_, 0, v___x_5084_);
lean_ctor_set(v___x_5087_, 1, v___x_5086_);
v___x_5088_ = ((lean_object*)(lp_choreo_Choreo_report___closed__35));
v___x_5089_ = l_List_isEmpty___redArg(v_program_4637_);
if (v___x_5089_ == 0)
{
lean_object* v___x_5090_; 
lean_inc_ref(v_names_4635_);
lean_inc_ref(v_cfg_4652_);
v___x_5090_ = lp_choreo_Choreo_programJson(v_cfg_4652_, v_program_4637_, v_start_4638_, v_names_4635_);
v___y_5045_ = v___x_5087_;
v___y_5046_ = v___x_5080_;
v___y_5047_ = v___x_5083_;
v___y_5048_ = v___x_5076_;
v___y_5049_ = v_labels_5073_;
v___y_5050_ = v___x_5088_;
v___y_5051_ = v___x_5090_;
goto v___jp_5044_;
}
else
{
lean_object* v___x_5091_; 
lean_dec(v_start_4638_);
lean_dec(v_program_4637_);
v___x_5091_ = lean_box(0);
v___y_5045_ = v___x_5087_;
v___y_5046_ = v___x_5080_;
v___y_5047_ = v___x_5083_;
v___y_5048_ = v___x_5076_;
v___y_5049_ = v_labels_5073_;
v___y_5050_ = v___x_5088_;
v___y_5051_ = v___x_5091_;
goto v___jp_5044_;
}
}
v___jp_5092_:
{
lean_object* v___x_5093_; 
v___x_5093_ = ((lean_object*)(lp_choreo_Choreo_report___closed__36));
v___y_5072_ = v___x_5093_;
goto v___jp_5071_;
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Planner(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Source(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Tolerance(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Transforms(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Program(uint8_t builtin);
lean_object* initialize_Lean_Data_Json(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Emit(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Source(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Tolerance(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Transforms(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Program(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean_Data_Json(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
