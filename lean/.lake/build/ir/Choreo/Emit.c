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
lean_object* lp_choreo_Choreo_Draft_toPhase(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_probeConfig(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
double lean_float_mul(double, double);
double lean_float_add(double, double);
double l_Float_ofScientific(lean_object*, uint8_t, lean_object*);
lean_object* lp_choreo_Choreo_problemText(lean_object*, lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_foldl___at___00Array_appendList_spec__0___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_diagnose(lean_object*, lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Routine_checkGlobal(lean_object*);
uint8_t lp_choreo_Choreo_Routine_checkMovement(lean_object*);
uint8_t lp_choreo_Choreo_Routine_checkMusic(lean_object*);
uint8_t lp_choreo_Choreo_Transition_check(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Transition_segment(lean_object*, lean_object*);
lean_object* lean_int_ediv(lean_object*, lean_object*);
lean_object* l_List_getLast_x3f___redArg(lean_object*);
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
lean_object* lp_choreo_Choreo_intL(lean_object*);
lean_object* lp_choreo_Choreo_listL___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_natsL(lean_object*);
lean_object* lp_choreo_Choreo_Pred_whyNot(lean_object*, lean_object*, lean_object*);
lean_object* l_Int_repr(lean_object*);
lean_object* lp_choreo_Choreo_configL(lean_object*);
lean_object* lp_choreo_Choreo_boolL(uint8_t);
lean_object* lp_choreo_Choreo_transitionL(lean_object*);
lean_object* lp_choreo_Choreo_Transition_count(lean_object*);
size_t lean_usize_of_nat(lean_object*);
uint8_t lean_usize_dec_eq(size_t, size_t);
size_t lean_usize_sub(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
uint8_t lean_int_dec_lt(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
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
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "\"\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 131, .m_capacity = 131, .m_length = 130, .m_data = "/-- The state the previous step leaves does not meet what this step requires. This says nothing about a collision. -/\ntheorem link"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "_broken : step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 19, .m_capacity = 19, .m_length = 18, .m_data = ".requires.holds st"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 31, .m_capacity = 31, .m_length = 30, .m_data = " = false := by decide +kernel\n"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 23, .m_capacity = 23, .m_length = 22, .m_data = "_contract_unmet : step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = ".ok cfg st"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 41, .m_capacity = 41, .m_length = 40, .m_data = " = false := Step.not_ok_of_requires link"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 38, .m_capacity = 38, .m_length = 37, .m_data = "_broken\n#eval IO.println \"LINKBROKEN "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "theorem link"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "_ok : step"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 53, .m_capacity = 53, .m_length = 52, .m_data = " = true := by decide +kernel\n#eval IO.println \"LINK "};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__16 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__16_value;
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
static const lean_string_object lp_choreo_Choreo_proofSource___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 199, .m_capacity = 199, .m_length = 198, .m_data = "import Choreo.Source\nimport Choreo.QuickRefute\nimport Choreo.Tolerance\nimport Choreo.Transforms\nopen Choreo\n\n-- Generated by the planner. Lean's kernel checks everything below.\nnamespace Generated\n\n"};
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
static const lean_string_object lp_choreo_Choreo_demoProofs___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 193, .m_capacity = 193, .m_length = 192, .m_data = "import Choreo.Demo\nimport Choreo.Recipes\nimport Choreo.Tolerance\nimport Choreo.Transforms\nopen Choreo Generated\nattribute [local instance] Lean.Grind.Semiring.natCast Lean.Grind.Ring.intCast\n\n"};
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
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 9, .m_capacity = 9, .m_length = 8, .m_data = "requires"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "ensures"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 13, .m_capacity = 13, .m_length = 12, .m_data = "requiresLean"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 12, .m_capacity = 12, .m_length = 11, .m_data = "ensuresLean"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "requiresOk"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "runsOk"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "why"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "surface"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "section"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "counts"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_ctor_object lp_choreo_Choreo_programJson___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_Choreo_samplesJson___closed__0_value),((lean_object*)(((size_t)(1) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_programJson___closed__0 = (const lean_object*)&lp_choreo_Choreo_programJson___closed__0_value;
static const lean_string_object lp_choreo_Choreo_programJson___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "steps"};
static const lean_object* lp_choreo_Choreo_programJson___closed__1 = (const lean_object*)&lp_choreo_Choreo_programJson___closed__1_value;
static const lean_string_object lp_choreo_Choreo_programJson___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 11, .m_capacity = 11, .m_length = 10, .m_data = "composable"};
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
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "first"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "last"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "tr"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "startPositions"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3_value;
static const lean_string_object lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 16, .m_capacity = 16, .m_length = 15, .m_data = "finishPositions"};
static const lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__4 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__4_value;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5;
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
LEAN_EXPORT lean_object* lp_choreo_Choreo_programProofs_chain(lean_object* v_a_1057_){
_start:
{
if (lean_obj_tag(v_a_1057_) == 0)
{
lean_object* v___x_1058_; 
v___x_1058_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__0));
return v___x_1058_;
}
else
{
lean_object* v_tail_1059_; 
v_tail_1059_ = lean_ctor_get(v_a_1057_, 1);
if (lean_obj_tag(v_tail_1059_) == 0)
{
lean_object* v_head_1060_; lean_object* v___x_1061_; lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; lean_object* v___x_1065_; 
v_head_1060_ = lean_ctor_get(v_a_1057_, 0);
lean_inc(v_head_1060_);
lean_dec_ref_known(v_a_1057_, 2);
v___x_1061_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__1));
v___x_1062_ = l_Nat_reprFast(v_head_1060_);
v___x_1063_ = lean_string_append(v___x_1061_, v___x_1062_);
lean_dec_ref(v___x_1062_);
v___x_1064_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__2));
v___x_1065_ = lean_string_append(v___x_1063_, v___x_1064_);
return v___x_1065_;
}
else
{
lean_object* v_head_1066_; lean_object* v___x_1067_; lean_object* v___x_1068_; lean_object* v___x_1069_; lean_object* v___x_1070_; lean_object* v___x_1071_; lean_object* v___x_1072_; lean_object* v___x_1073_; lean_object* v___x_1074_; lean_object* v___x_1075_; 
lean_inc(v_tail_1059_);
v_head_1066_ = lean_ctor_get(v_a_1057_, 0);
lean_inc(v_head_1066_);
lean_dec_ref_known(v_a_1057_, 2);
v___x_1067_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__3));
v___x_1068_ = l_Nat_reprFast(v_head_1066_);
v___x_1069_ = lean_string_append(v___x_1067_, v___x_1068_);
lean_dec_ref(v___x_1068_);
v___x_1070_ = ((lean_object*)(lp_choreo_Choreo_programProofs_chain___closed__4));
v___x_1071_ = lean_string_append(v___x_1069_, v___x_1070_);
v___x_1072_ = lp_choreo_Choreo_programProofs_chain(v_tail_1059_);
v___x_1073_ = lean_string_append(v___x_1071_, v___x_1072_);
lean_dec_ref(v___x_1072_);
v___x_1074_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_1075_ = lean_string_append(v___x_1073_, v___x_1074_);
return v___x_1075_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(lean_object* v_cfg_1093_, lean_object* v_as_x27_1094_, lean_object* v_b_1095_){
_start:
{
if (lean_obj_tag(v_as_x27_1094_) == 0)
{
lean_dec_ref(v_cfg_1093_);
return v_b_1095_;
}
else
{
lean_object* v_head_1096_; lean_object* v_snd_1097_; lean_object* v_fst_1098_; lean_object* v_tail_1099_; lean_object* v_snd_1100_; lean_object* v_fst_1101_; lean_object* v___x_1103_; uint8_t v_isShared_1104_; uint8_t v_isSharedCheck_1200_; 
v_head_1096_ = lean_ctor_get(v_as_x27_1094_, 0);
v_snd_1097_ = lean_ctor_get(v_b_1095_, 1);
lean_inc(v_snd_1097_);
v_fst_1098_ = lean_ctor_get(v_head_1096_, 0);
v_tail_1099_ = lean_ctor_get(v_as_x27_1094_, 1);
v_snd_1100_ = lean_ctor_get(v_head_1096_, 1);
v_fst_1101_ = lean_ctor_get(v_b_1095_, 0);
v_isSharedCheck_1200_ = !lean_is_exclusive(v_b_1095_);
if (v_isSharedCheck_1200_ == 0)
{
lean_object* v_unused_1201_; 
v_unused_1201_ = lean_ctor_get(v_b_1095_, 1);
lean_dec(v_unused_1201_);
v___x_1103_ = v_b_1095_;
v_isShared_1104_ = v_isSharedCheck_1200_;
goto v_resetjp_1102_;
}
else
{
lean_inc(v_fst_1101_);
lean_dec(v_b_1095_);
v___x_1103_ = lean_box(0);
v_isShared_1104_ = v_isSharedCheck_1200_;
goto v_resetjp_1102_;
}
v_resetjp_1102_:
{
lean_object* v_fst_1105_; lean_object* v_snd_1106_; lean_object* v___x_1108_; uint8_t v_isShared_1109_; uint8_t v_isSharedCheck_1199_; 
v_fst_1105_ = lean_ctor_get(v_snd_1097_, 0);
v_snd_1106_ = lean_ctor_get(v_snd_1097_, 1);
v_isSharedCheck_1199_ = !lean_is_exclusive(v_snd_1097_);
if (v_isSharedCheck_1199_ == 0)
{
v___x_1108_ = v_snd_1097_;
v_isShared_1109_ = v_isSharedCheck_1199_;
goto v_resetjp_1107_;
}
else
{
lean_inc(v_snd_1106_);
lean_inc(v_fst_1105_);
lean_dec(v_snd_1097_);
v___x_1108_ = lean_box(0);
v_isShared_1109_ = v_isSharedCheck_1199_;
goto v_resetjp_1107_;
}
v_resetjp_1107_:
{
lean_object* v_step_1110_; lean_object* v_after_1111_; lean_object* v_out_1113_; uint8_t v_allOk_1114_; lean_object* v_out_1124_; uint8_t v_allOk_1125_; lean_object* v_requires_1152_; uint8_t v___x_1153_; 
v_step_1110_ = lean_ctor_get(v_fst_1098_, 5);
v_after_1111_ = lean_ctor_get(v_fst_1098_, 9);
v_requires_1152_ = lean_ctor_get(v_step_1110_, 1);
lean_inc(v_requires_1152_);
v___x_1153_ = lp_choreo_Choreo_Pred_holds(v_requires_1152_, v_snd_1106_);
if (v___x_1153_ == 0)
{
lean_object* v___x_1154_; lean_object* v___x_1155_; lean_object* v___x_1156_; lean_object* v___x_1157_; lean_object* v___x_1158_; lean_object* v___x_1159_; lean_object* v___x_1160_; lean_object* v___x_1161_; lean_object* v___x_1162_; lean_object* v___x_1163_; lean_object* v___x_1164_; lean_object* v___x_1165_; lean_object* v___x_1166_; lean_object* v___x_1167_; lean_object* v___x_1168_; lean_object* v___x_1169_; lean_object* v___x_1170_; lean_object* v___x_1171_; lean_object* v___x_1172_; lean_object* v___x_1173_; lean_object* v___x_1174_; lean_object* v___x_1175_; lean_object* v___x_1176_; lean_object* v___x_1177_; lean_object* v___x_1178_; lean_object* v___x_1179_; lean_object* v___x_1180_; lean_object* v___x_1181_; lean_object* v___x_1182_; 
lean_dec(v_fst_1105_);
v___x_1154_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__6));
lean_inc(v_snd_1100_);
v___x_1155_ = l_Nat_reprFast(v_snd_1100_);
v___x_1156_ = lean_string_append(v___x_1154_, v___x_1155_);
v___x_1157_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__7));
v___x_1158_ = lean_string_append(v___x_1156_, v___x_1157_);
v___x_1159_ = lean_string_append(v___x_1158_, v___x_1155_);
v___x_1160_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8));
v___x_1161_ = lean_string_append(v___x_1159_, v___x_1160_);
v___x_1162_ = lean_string_append(v___x_1161_, v___x_1155_);
v___x_1163_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__9));
v___x_1164_ = lean_string_append(v___x_1162_, v___x_1163_);
v___x_1165_ = lean_string_append(v_fst_1101_, v___x_1164_);
lean_dec_ref(v___x_1164_);
v___x_1166_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__0));
v___x_1167_ = lean_string_append(v___x_1166_, v___x_1155_);
v___x_1168_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__10));
v___x_1169_ = lean_string_append(v___x_1167_, v___x_1168_);
v___x_1170_ = lean_string_append(v___x_1169_, v___x_1155_);
v___x_1171_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__11));
v___x_1172_ = lean_string_append(v___x_1170_, v___x_1171_);
v___x_1173_ = lean_string_append(v___x_1172_, v___x_1155_);
v___x_1174_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__12));
v___x_1175_ = lean_string_append(v___x_1173_, v___x_1174_);
v___x_1176_ = lean_string_append(v___x_1175_, v___x_1155_);
v___x_1177_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__13));
v___x_1178_ = lean_string_append(v___x_1176_, v___x_1177_);
v___x_1179_ = lean_string_append(v___x_1178_, v___x_1155_);
lean_dec_ref(v___x_1155_);
v___x_1180_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5));
v___x_1181_ = lean_string_append(v___x_1179_, v___x_1180_);
v___x_1182_ = lean_string_append(v___x_1165_, v___x_1181_);
lean_dec_ref(v___x_1181_);
v_out_1124_ = v___x_1182_;
v_allOk_1125_ = v___x_1153_;
goto v___jp_1123_;
}
else
{
lean_object* v___x_1183_; lean_object* v___x_1184_; lean_object* v___x_1185_; lean_object* v___x_1186_; lean_object* v___x_1187_; lean_object* v___x_1188_; lean_object* v___x_1189_; lean_object* v___x_1190_; lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; lean_object* v___x_1194_; lean_object* v___x_1195_; lean_object* v___x_1196_; lean_object* v___x_1197_; uint8_t v___x_1198_; 
v___x_1183_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__14));
lean_inc(v_snd_1100_);
v___x_1184_ = l_Nat_reprFast(v_snd_1100_);
v___x_1185_ = lean_string_append(v___x_1183_, v___x_1184_);
v___x_1186_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__15));
v___x_1187_ = lean_string_append(v___x_1185_, v___x_1186_);
v___x_1188_ = lean_string_append(v___x_1187_, v___x_1184_);
v___x_1189_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__8));
v___x_1190_ = lean_string_append(v___x_1188_, v___x_1189_);
v___x_1191_ = lean_string_append(v___x_1190_, v___x_1184_);
v___x_1192_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__16));
v___x_1193_ = lean_string_append(v___x_1191_, v___x_1192_);
v___x_1194_ = lean_string_append(v___x_1193_, v___x_1184_);
lean_dec_ref(v___x_1184_);
v___x_1195_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5));
v___x_1196_ = lean_string_append(v___x_1194_, v___x_1195_);
v___x_1197_ = lean_string_append(v_fst_1101_, v___x_1196_);
lean_dec_ref(v___x_1196_);
v___x_1198_ = lean_unbox(v_fst_1105_);
lean_dec(v_fst_1105_);
v_out_1124_ = v___x_1197_;
v_allOk_1125_ = v___x_1198_;
goto v___jp_1123_;
}
v___jp_1112_:
{
lean_object* v___x_1115_; lean_object* v___x_1117_; 
v___x_1115_ = lean_box(v_allOk_1114_);
lean_inc(v_after_1111_);
if (v_isShared_1109_ == 0)
{
lean_ctor_set(v___x_1108_, 1, v_after_1111_);
lean_ctor_set(v___x_1108_, 0, v___x_1115_);
v___x_1117_ = v___x_1108_;
goto v_reusejp_1116_;
}
else
{
lean_object* v_reuseFailAlloc_1122_; 
v_reuseFailAlloc_1122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1122_, 0, v___x_1115_);
lean_ctor_set(v_reuseFailAlloc_1122_, 1, v_after_1111_);
v___x_1117_ = v_reuseFailAlloc_1122_;
goto v_reusejp_1116_;
}
v_reusejp_1116_:
{
lean_object* v___x_1119_; 
if (v_isShared_1104_ == 0)
{
lean_ctor_set(v___x_1103_, 1, v___x_1117_);
lean_ctor_set(v___x_1103_, 0, v_out_1113_);
v___x_1119_ = v___x_1103_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1121_; 
v_reuseFailAlloc_1121_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1121_, 0, v_out_1113_);
lean_ctor_set(v_reuseFailAlloc_1121_, 1, v___x_1117_);
v___x_1119_ = v_reuseFailAlloc_1121_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
v_as_x27_1094_ = v_tail_1099_;
v_b_1095_ = v___x_1119_;
goto _start;
}
}
}
v___jp_1123_:
{
uint8_t v___x_1126_; 
lean_inc_ref(v_cfg_1093_);
lean_inc_ref(v_step_1110_);
v___x_1126_ = lp_choreo_Choreo_Step_ok(v_step_1110_, v_cfg_1093_, v_snd_1106_);
lean_dec(v_snd_1106_);
if (v___x_1126_ == 0)
{
v_out_1113_ = v_out_1124_;
v_allOk_1114_ = v___x_1126_;
goto v___jp_1112_;
}
else
{
lean_object* v___x_1127_; lean_object* v___x_1128_; lean_object* v___x_1129_; lean_object* v___x_1130_; lean_object* v___x_1131_; lean_object* v___x_1132_; lean_object* v___x_1133_; lean_object* v___x_1134_; lean_object* v___x_1135_; lean_object* v___x_1136_; lean_object* v___x_1137_; lean_object* v___x_1138_; lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; lean_object* v___x_1142_; lean_object* v___x_1143_; lean_object* v___x_1144_; lean_object* v___x_1145_; lean_object* v___x_1146_; lean_object* v___x_1147_; lean_object* v___x_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; lean_object* v___x_1151_; 
v___x_1127_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__0));
lean_inc(v_snd_1100_);
v___x_1128_ = l_Nat_reprFast(v_snd_1100_);
v___x_1129_ = lean_string_append(v___x_1127_, v___x_1128_);
v___x_1130_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1));
v___x_1131_ = lean_string_append(v___x_1129_, v___x_1130_);
v___x_1132_ = ((lean_object*)(lp_choreo_Choreo_fieldBinders___closed__0));
v___x_1133_ = lean_string_append(v___x_1131_, v___x_1132_);
v___x_1134_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__1));
v___x_1135_ = lean_string_append(v___x_1133_, v___x_1134_);
v___x_1136_ = lean_string_append(v___x_1135_, v___x_1128_);
v___x_1137_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__2));
v___x_1138_ = lean_string_append(v___x_1136_, v___x_1137_);
v___x_1139_ = lean_string_append(v___x_1138_, v___x_1128_);
v___x_1140_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__3));
v___x_1141_ = lean_string_append(v___x_1139_, v___x_1140_);
v___x_1142_ = lean_unsigned_to_nat(1u);
v___x_1143_ = lean_nat_add(v_snd_1100_, v___x_1142_);
v___x_1144_ = l_Nat_reprFast(v___x_1143_);
v___x_1145_ = lean_string_append(v___x_1141_, v___x_1144_);
lean_dec_ref(v___x_1144_);
v___x_1146_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__4));
v___x_1147_ = lean_string_append(v___x_1145_, v___x_1146_);
v___x_1148_ = lean_string_append(v___x_1147_, v___x_1128_);
lean_dec_ref(v___x_1128_);
v___x_1149_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___closed__5));
v___x_1150_ = lean_string_append(v___x_1148_, v___x_1149_);
v___x_1151_ = lean_string_append(v_out_1124_, v___x_1150_);
lean_dec_ref(v___x_1150_);
v_out_1113_ = v___x_1151_;
v_allOk_1114_ = v_allOk_1125_;
goto v___jp_1112_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg___boxed(lean_object* v_cfg_1202_, lean_object* v_as_x27_1203_, lean_object* v_b_1204_){
_start:
{
lean_object* v_res_1205_; 
v_res_1205_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(v_cfg_1202_, v_as_x27_1203_, v_b_1204_);
lean_dec(v_as_x27_1203_);
return v_res_1205_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programProofs(lean_object* v_cfg_1211_, lean_object* v_steps_1212_, lean_object* v_start_1213_){
_start:
{
uint8_t v___x_1214_; 
v___x_1214_ = l_List_isEmpty___redArg(v_steps_1212_);
if (v___x_1214_ == 0)
{
uint8_t v_allOk_1215_; lean_object* v_out_1216_; lean_object* v___x_1217_; lean_object* v___x_1218_; lean_object* v___x_1219_; lean_object* v___x_1220_; lean_object* v___x_1221_; lean_object* v___x_1222_; lean_object* v_snd_1223_; lean_object* v_fst_1224_; uint8_t v___x_1225_; 
v_allOk_1215_ = 1;
v_out_1216_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__0));
v___x_1217_ = lean_unsigned_to_nat(0u);
lean_inc(v_steps_1212_);
v___x_1218_ = l_List_zipIdxTR___redArg(v_steps_1212_, v___x_1217_);
v___x_1219_ = lean_box(v_allOk_1215_);
v___x_1220_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1220_, 0, v___x_1219_);
lean_ctor_set(v___x_1220_, 1, v_start_1213_);
v___x_1221_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1221_, 0, v_out_1216_);
lean_ctor_set(v___x_1221_, 1, v___x_1220_);
v___x_1222_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(v_cfg_1211_, v___x_1218_, v___x_1221_);
lean_dec(v___x_1218_);
v_snd_1223_ = lean_ctor_get(v___x_1222_, 1);
lean_inc(v_snd_1223_);
v_fst_1224_ = lean_ctor_get(v_snd_1223_, 0);
lean_inc(v_fst_1224_);
lean_dec(v_snd_1223_);
v___x_1225_ = lean_unbox(v_fst_1224_);
lean_dec(v_fst_1224_);
if (v___x_1225_ == 0)
{
lean_object* v_fst_1226_; 
lean_dec(v_steps_1212_);
v_fst_1226_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_fst_1226_);
lean_dec_ref(v___x_1222_);
return v_fst_1226_;
}
else
{
lean_object* v_fst_1227_; lean_object* v___x_1228_; lean_object* v___x_1229_; lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; lean_object* v___x_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___x_1238_; lean_object* v___x_1239_; lean_object* v___x_1240_; lean_object* v___x_1241_; 
v_fst_1227_ = lean_ctor_get(v___x_1222_, 0);
lean_inc(v_fst_1227_);
lean_dec_ref(v___x_1222_);
v___x_1228_ = l_List_lengthTR___redArg(v_steps_1212_);
lean_dec(v_steps_1212_);
v___x_1229_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__1));
lean_inc(v___x_1228_);
v___x_1230_ = l_Nat_reprFast(v___x_1228_);
v___x_1231_ = lean_string_append(v___x_1229_, v___x_1230_);
lean_dec_ref(v___x_1230_);
v___x_1232_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__2));
v___x_1233_ = lean_string_append(v___x_1231_, v___x_1232_);
v___x_1234_ = l_List_range(v___x_1228_);
v___x_1235_ = lp_choreo_Choreo_programProofs_chain(v___x_1234_);
v___x_1236_ = lean_string_append(v___x_1233_, v___x_1235_);
lean_dec_ref(v___x_1235_);
v___x_1237_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__3));
v___x_1238_ = lean_string_append(v___x_1236_, v___x_1237_);
v___x_1239_ = lean_string_append(v_fst_1227_, v___x_1238_);
lean_dec_ref(v___x_1238_);
v___x_1240_ = ((lean_object*)(lp_choreo_Choreo_programProofs___closed__4));
v___x_1241_ = lean_string_append(v___x_1239_, v___x_1240_);
return v___x_1241_;
}
}
else
{
lean_object* v___x_1242_; 
lean_dec(v_start_1213_);
lean_dec(v_steps_1212_);
lean_dec_ref(v_cfg_1211_);
v___x_1242_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
return v___x_1242_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0(lean_object* v_cfg_1243_, lean_object* v_as_1244_, lean_object* v_as_x27_1245_, lean_object* v_b_1246_, lean_object* v_a_1247_){
_start:
{
lean_object* v___x_1248_; 
v___x_1248_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___redArg(v_cfg_1243_, v_as_x27_1245_, v_b_1246_);
return v___x_1248_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0___boxed(lean_object* v_cfg_1249_, lean_object* v_as_1250_, lean_object* v_as_x27_1251_, lean_object* v_b_1252_, lean_object* v_a_1253_){
_start:
{
lean_object* v_res_1254_; 
v_res_1254_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programProofs_spec__0(v_cfg_1249_, v_as_1250_, v_as_x27_1251_, v_b_1252_, v_a_1253_);
lean_dec(v_as_x27_1251_);
lean_dec(v_as_1250_);
return v_res_1254_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__0(lean_object* v___y_1255_){
_start:
{
lean_inc_ref(v___y_1255_);
return v___y_1255_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__0___boxed(lean_object* v___y_1256_){
_start:
{
lean_object* v_res_1257_; 
v_res_1257_ = lp_choreo_Choreo_proofSource___lam__0(v___y_1256_);
lean_dec_ref(v___y_1256_);
return v_res_1257_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource___lam__1(lean_object* v_a_1258_){
_start:
{
lean_object* v_snd_1259_; lean_object* v_snd_1260_; lean_object* v___x_1261_; 
v_snd_1259_ = lean_ctor_get(v_a_1258_, 1);
lean_inc(v_snd_1259_);
lean_dec_ref(v_a_1258_);
v_snd_1260_ = lean_ctor_get(v_snd_1259_, 1);
lean_inc(v_snd_1260_);
lean_dec(v_snd_1259_);
v___x_1261_ = lp_choreo_Choreo_askL(v_snd_1260_);
return v___x_1261_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(lean_object* v_x_1262_){
_start:
{
if (lean_obj_tag(v_x_1262_) == 0)
{
lean_object* v___x_1263_; 
v___x_1263_ = lean_box(0);
return v___x_1263_;
}
else
{
lean_object* v_head_1264_; lean_object* v_tail_1265_; uint8_t v___x_1266_; 
v_head_1264_ = lean_ctor_get(v_x_1262_, 0);
v_tail_1265_ = lean_ctor_get(v_x_1262_, 1);
v___x_1266_ = lp_choreo_Choreo_Problem_provable(v_head_1264_);
if (v___x_1266_ == 0)
{
v_x_1262_ = v_tail_1265_;
goto _start;
}
else
{
lean_object* v___x_1268_; 
lean_inc(v_head_1264_);
v___x_1268_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_1268_, 0, v_head_1264_);
return v___x_1268_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1___boxed(lean_object* v_x_1269_){
_start:
{
lean_object* v_res_1270_; 
v_res_1270_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v_x_1269_);
lean_dec(v_x_1269_);
return v_res_1270_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(lean_object* v_b_1280_, lean_object* v_as_x27_1281_, lean_object* v_b_1282_){
_start:
{
if (lean_obj_tag(v_as_x27_1281_) == 0)
{
lean_dec_ref(v_b_1280_);
return v_b_1282_;
}
else
{
lean_object* v_head_1283_; lean_object* v_fst_1284_; lean_object* v_plan_1285_; lean_object* v_draft_1286_; lean_object* v_tail_1287_; lean_object* v_snd_1288_; lean_object* v_problems_1289_; lean_object* v_bpm_1290_; lean_object* v_n_1291_; lean_object* v_bounds_1292_; lean_object* v_dmin_1293_; lean_object* v___x_1294_; lean_object* v___x_1295_; lean_object* v___x_1296_; lean_object* v___x_1297_; lean_object* v___x_1298_; lean_object* v___x_1299_; lean_object* v___x_1300_; lean_object* v___x_1301_; lean_object* v___x_1302_; lean_object* v___x_1303_; lean_object* v___x_1304_; lean_object* v___x_1305_; lean_object* v___x_1306_; lean_object* v___x_1307_; lean_object* v___x_1308_; lean_object* v___x_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; lean_object* v___x_1312_; lean_object* v___x_1313_; 
v_head_1283_ = lean_ctor_get(v_as_x27_1281_, 0);
v_fst_1284_ = lean_ctor_get(v_head_1283_, 0);
v_plan_1285_ = lean_ctor_get(v_b_1280_, 0);
v_draft_1286_ = lean_ctor_get(v_fst_1284_, 2);
v_tail_1287_ = lean_ctor_get(v_as_x27_1281_, 1);
v_snd_1288_ = lean_ctor_get(v_head_1283_, 1);
v_problems_1289_ = lean_ctor_get(v_fst_1284_, 3);
v_bpm_1290_ = lean_ctor_get(v_plan_1285_, 1);
v_n_1291_ = lean_ctor_get(v_plan_1285_, 3);
v_bounds_1292_ = lean_ctor_get(v_draft_1286_, 3);
v_dmin_1293_ = lean_ctor_get(v_draft_1286_, 7);
v___x_1294_ = lean_unsigned_to_nat(0u);
lean_inc_n(v_n_1291_, 2);
v___x_1295_ = lp_choreo_Choreo_Draft_toPhase(v_draft_1286_, v_n_1291_, v___x_1294_);
v___x_1296_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__0));
lean_inc(v_snd_1288_);
v___x_1297_ = l_Nat_reprFast(v_snd_1288_);
v___x_1298_ = lean_string_append(v___x_1296_, v___x_1297_);
v___x_1299_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__1));
lean_inc_ref(v___x_1298_);
v___x_1300_ = lean_string_append(v___x_1298_, v___x_1299_);
lean_inc(v_dmin_1293_);
lean_inc(v_bpm_1290_);
lean_inc_ref(v_bounds_1292_);
v___x_1301_ = lp_choreo_Choreo_probeConfig(v_n_1291_, v_bounds_1292_, v_bpm_1290_, v_dmin_1293_);
v___x_1302_ = lp_choreo_Choreo_configL(v___x_1301_);
v___x_1303_ = lean_string_append(v___x_1300_, v___x_1302_);
lean_dec_ref(v___x_1302_);
v___x_1304_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1305_ = lean_string_append(v___x_1303_, v___x_1304_);
v___x_1306_ = lean_string_append(v_b_1282_, v___x_1305_);
lean_dec_ref(v___x_1305_);
v___x_1307_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__1));
v___x_1308_ = lean_string_append(v___x_1298_, v___x_1307_);
v___x_1309_ = lp_choreo_Choreo_phaseL(v___x_1295_);
v___x_1310_ = lean_string_append(v___x_1308_, v___x_1309_);
lean_dec_ref(v___x_1309_);
v___x_1311_ = lean_string_append(v___x_1310_, v___x_1304_);
v___x_1312_ = lean_string_append(v___x_1306_, v___x_1311_);
lean_dec_ref(v___x_1311_);
v___x_1313_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v_problems_1289_);
if (lean_obj_tag(v___x_1313_) == 0)
{
lean_dec_ref(v___x_1297_);
v_as_x27_1281_ = v_tail_1287_;
v_b_1282_ = v___x_1312_;
goto _start;
}
else
{
lean_object* v_val_1315_; lean_object* v___x_1316_; lean_object* v___x_1317_; lean_object* v___x_1318_; lean_object* v___x_1319_; lean_object* v___x_1320_; 
v_val_1315_ = lean_ctor_get(v___x_1313_, 0);
lean_inc(v_val_1315_);
lean_dec_ref_known(v___x_1313_, 1);
v___x_1316_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__2));
v___x_1317_ = lean_string_append(v___x_1316_, v___x_1297_);
v___x_1318_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__3));
lean_inc_ref(v___x_1317_);
v___x_1319_ = lean_string_append(v___x_1317_, v___x_1318_);
v___x_1320_ = lp_choreo_Choreo_refutationL(v___x_1319_, v___x_1317_, v_val_1315_);
lean_dec_ref(v___x_1317_);
lean_dec_ref(v___x_1319_);
if (lean_obj_tag(v___x_1320_) == 0)
{
lean_dec_ref(v___x_1297_);
v_as_x27_1281_ = v_tail_1287_;
v_b_1282_ = v___x_1312_;
goto _start;
}
else
{
lean_object* v_val_1322_; lean_object* v___x_1323_; lean_object* v___x_1324_; lean_object* v___x_1325_; lean_object* v___x_1326_; lean_object* v___x_1327_; lean_object* v___x_1328_; lean_object* v___x_1329_; lean_object* v___x_1330_; lean_object* v___x_1331_; lean_object* v___x_1332_; lean_object* v___x_1333_; lean_object* v___x_1334_; lean_object* v___x_1335_; lean_object* v___x_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; lean_object* v___x_1339_; lean_object* v___x_1340_; 
v_val_1322_ = lean_ctor_get(v___x_1320_, 0);
lean_inc(v_val_1322_);
lean_dec_ref_known(v___x_1320_, 1);
v___x_1323_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__4));
v___x_1324_ = lean_string_append(v___x_1323_, v___x_1297_);
v___x_1325_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__5));
v___x_1326_ = lean_string_append(v___x_1324_, v___x_1325_);
v___x_1327_ = lean_string_append(v___x_1326_, v___x_1297_);
v___x_1328_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__6));
v___x_1329_ = lean_string_append(v___x_1327_, v___x_1328_);
v___x_1330_ = lean_string_append(v___x_1329_, v___x_1297_);
v___x_1331_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__7));
v___x_1332_ = lean_string_append(v___x_1330_, v___x_1331_);
v___x_1333_ = lean_string_append(v___x_1332_, v_val_1322_);
lean_dec(v_val_1322_);
v___x_1334_ = lean_string_append(v___x_1333_, v___x_1304_);
v___x_1335_ = lean_string_append(v___x_1312_, v___x_1334_);
lean_dec_ref(v___x_1334_);
v___x_1336_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__8));
v___x_1337_ = lean_string_append(v___x_1336_, v___x_1297_);
lean_dec_ref(v___x_1297_);
v___x_1338_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4));
v___x_1339_ = lean_string_append(v___x_1337_, v___x_1338_);
v___x_1340_ = lean_string_append(v___x_1335_, v___x_1339_);
lean_dec_ref(v___x_1339_);
v_as_x27_1281_ = v_tail_1287_;
v_b_1282_ = v___x_1340_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___boxed(lean_object* v_b_1342_, lean_object* v_as_x27_1343_, lean_object* v_b_1344_){
_start:
{
lean_object* v_res_1345_; 
v_res_1345_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(v_b_1342_, v_as_x27_1343_, v_b_1344_);
lean_dec(v_as_x27_1343_);
return v_res_1345_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3(lean_object* v_a_1347_, lean_object* v_a_1348_){
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
lean_object* v_head_1350_; lean_object* v_tail_1351_; lean_object* v___x_1353_; uint8_t v_isShared_1354_; uint8_t v_isSharedCheck_1363_; 
v_head_1350_ = lean_ctor_get(v_a_1347_, 0);
v_tail_1351_ = lean_ctor_get(v_a_1347_, 1);
v_isSharedCheck_1363_ = !lean_is_exclusive(v_a_1347_);
if (v_isSharedCheck_1363_ == 0)
{
v___x_1353_ = v_a_1347_;
v_isShared_1354_ = v_isSharedCheck_1363_;
goto v_resetjp_1352_;
}
else
{
lean_inc(v_tail_1351_);
lean_inc(v_head_1350_);
lean_dec(v_a_1347_);
v___x_1353_ = lean_box(0);
v_isShared_1354_ = v_isSharedCheck_1363_;
goto v_resetjp_1352_;
}
v_resetjp_1352_:
{
lean_object* v_snd_1355_; lean_object* v___x_1356_; lean_object* v___x_1357_; lean_object* v___x_1358_; lean_object* v___x_1360_; 
v_snd_1355_ = lean_ctor_get(v_head_1350_, 1);
lean_inc(v_snd_1355_);
lean_dec(v_head_1350_);
v___x_1356_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3___closed__0));
v___x_1357_ = l_Nat_reprFast(v_snd_1355_);
v___x_1358_ = lean_string_append(v___x_1356_, v___x_1357_);
lean_dec_ref(v___x_1357_);
if (v_isShared_1354_ == 0)
{
lean_ctor_set(v___x_1353_, 1, v_a_1348_);
lean_ctor_set(v___x_1353_, 0, v___x_1358_);
v___x_1360_ = v___x_1353_;
goto v_reusejp_1359_;
}
else
{
lean_object* v_reuseFailAlloc_1362_; 
v_reuseFailAlloc_1362_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1362_, 0, v___x_1358_);
lean_ctor_set(v_reuseFailAlloc_1362_, 1, v_a_1348_);
v___x_1360_ = v_reuseFailAlloc_1362_;
goto v_reusejp_1359_;
}
v_reusejp_1359_:
{
v_a_1347_ = v_tail_1351_;
v_a_1348_ = v___x_1360_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0(lean_object* v_snd_1364_, lean_object* v_a_1365_, lean_object* v_a_1366_){
_start:
{
if (lean_obj_tag(v_a_1365_) == 0)
{
lean_object* v___x_1367_; 
v___x_1367_ = l_List_reverse___redArg(v_a_1366_);
return v___x_1367_;
}
else
{
lean_object* v_head_1368_; lean_object* v_tail_1369_; lean_object* v___x_1371_; uint8_t v_isShared_1372_; uint8_t v_isSharedCheck_1379_; 
v_head_1368_ = lean_ctor_get(v_a_1365_, 0);
v_tail_1369_ = lean_ctor_get(v_a_1365_, 1);
v_isSharedCheck_1379_ = !lean_is_exclusive(v_a_1365_);
if (v_isSharedCheck_1379_ == 0)
{
v___x_1371_ = v_a_1365_;
v_isShared_1372_ = v_isSharedCheck_1379_;
goto v_resetjp_1370_;
}
else
{
lean_inc(v_tail_1369_);
lean_inc(v_head_1368_);
lean_dec(v_a_1365_);
v___x_1371_ = lean_box(0);
v_isShared_1372_ = v_isSharedCheck_1379_;
goto v_resetjp_1370_;
}
v_resetjp_1370_:
{
lean_object* v_first_1373_; lean_object* v___x_1374_; lean_object* v___x_1376_; 
v_first_1373_ = lean_ctor_get(v_snd_1364_, 0);
v___x_1374_ = lean_nat_add(v_head_1368_, v_first_1373_);
lean_dec(v_head_1368_);
if (v_isShared_1372_ == 0)
{
lean_ctor_set(v___x_1371_, 1, v_a_1366_);
lean_ctor_set(v___x_1371_, 0, v___x_1374_);
v___x_1376_ = v___x_1371_;
goto v_reusejp_1375_;
}
else
{
lean_object* v_reuseFailAlloc_1378_; 
v_reuseFailAlloc_1378_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1378_, 0, v___x_1374_);
lean_ctor_set(v_reuseFailAlloc_1378_, 1, v_a_1366_);
v___x_1376_ = v_reuseFailAlloc_1378_;
goto v_reusejp_1375_;
}
v_reusejp_1375_:
{
v_a_1365_ = v_tail_1369_;
v_a_1366_ = v___x_1376_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0___boxed(lean_object* v_snd_1380_, lean_object* v_a_1381_, lean_object* v_a_1382_){
_start:
{
lean_object* v_res_1383_; 
v_res_1383_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0(v_snd_1380_, v_a_1381_, v_a_1382_);
lean_dec_ref(v_snd_1380_);
return v_res_1383_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(lean_object* v_r_1392_, lean_object* v_as_x27_1393_, lean_object* v_b_1394_){
_start:
{
if (lean_obj_tag(v_as_x27_1393_) == 0)
{
lean_dec_ref(v_r_1392_);
return v_b_1394_;
}
else
{
lean_object* v_head_1395_; lean_object* v_fst_1396_; lean_object* v_snd_1397_; lean_object* v_tail_1398_; lean_object* v_snd_1399_; lean_object* v_snd_1400_; uint8_t v___x_1401_; 
v_head_1395_ = lean_ctor_get(v_as_x27_1393_, 0);
v_fst_1396_ = lean_ctor_get(v_head_1395_, 0);
v_snd_1397_ = lean_ctor_get(v_fst_1396_, 1);
v_tail_1398_ = lean_ctor_get(v_as_x27_1393_, 1);
v_snd_1399_ = lean_ctor_get(v_head_1395_, 1);
v_snd_1400_ = lean_ctor_get(v_snd_1397_, 1);
lean_inc(v_snd_1400_);
lean_inc_ref(v_r_1392_);
v___x_1401_ = lp_choreo_Choreo_transitionOk(v_r_1392_, v_snd_1400_);
if (v___x_1401_ == 0)
{
v_as_x27_1393_ = v_tail_1398_;
goto _start;
}
else
{
lean_object* v___x_1403_; lean_object* v___x_1404_; lean_object* v___x_1405_; lean_object* v___x_1406_; lean_object* v___x_1407_; lean_object* v___x_1408_; lean_object* v___x_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; lean_object* v___x_1412_; lean_object* v___x_1413_; lean_object* v___x_1414_; lean_object* v___x_1415_; lean_object* v___x_1416_; lean_object* v___x_1417_; lean_object* v___x_1418_; lean_object* v___x_1419_; lean_object* v___x_1420_; lean_object* v___x_1421_; lean_object* v___x_1422_; lean_object* v___x_1423_; lean_object* v___x_1424_; lean_object* v___x_1425_; lean_object* v___x_1426_; lean_object* v___x_1427_; lean_object* v___x_1428_; lean_object* v___x_1429_; lean_object* v___x_1430_; lean_object* v___x_1431_; lean_object* v___x_1432_; lean_object* v___x_1433_; lean_object* v___x_1434_; lean_object* v___x_1435_; lean_object* v___x_1436_; lean_object* v___x_1437_; lean_object* v___x_1438_; lean_object* v___x_1439_; lean_object* v___x_1440_; 
v___x_1403_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__0));
lean_inc(v_snd_1399_);
v___x_1404_ = l_Nat_reprFast(v_snd_1399_);
v___x_1405_ = lean_string_append(v___x_1403_, v___x_1404_);
v___x_1406_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__1));
v___x_1407_ = lean_string_append(v___x_1405_, v___x_1406_);
lean_inc(v_snd_1400_);
v___x_1408_ = lp_choreo_Choreo_transitionL(v_snd_1400_);
v___x_1409_ = lean_string_append(v___x_1407_, v___x_1408_);
lean_dec_ref(v___x_1408_);
v___x_1410_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1411_ = lean_string_append(v___x_1409_, v___x_1410_);
v___x_1412_ = lean_string_append(v_b_1394_, v___x_1411_);
lean_dec_ref(v___x_1411_);
v___x_1413_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__2));
v___x_1414_ = lean_string_append(v___x_1413_, v___x_1404_);
v___x_1415_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1));
v___x_1416_ = lean_string_append(v___x_1414_, v___x_1415_);
v___x_1417_ = ((lean_object*)(lp_choreo_Choreo_fieldBinders___closed__0));
v___x_1418_ = lean_string_append(v___x_1416_, v___x_1417_);
v___x_1419_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__3));
v___x_1420_ = lean_string_append(v___x_1418_, v___x_1419_);
v___x_1421_ = lean_string_append(v___x_1420_, v___x_1404_);
v___x_1422_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__4));
v___x_1423_ = lean_string_append(v___x_1421_, v___x_1422_);
v___x_1424_ = lean_string_append(v___x_1423_, v___x_1404_);
v___x_1425_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__5));
v___x_1426_ = lean_string_append(v___x_1424_, v___x_1425_);
v___x_1427_ = lp_choreo_Choreo_Transition_count(v_snd_1400_);
v___x_1428_ = l_List_range(v___x_1427_);
v___x_1429_ = lean_box(0);
v___x_1430_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__0(v_snd_1400_, v___x_1428_, v___x_1429_);
v___x_1431_ = lp_choreo_Choreo_chainOf(v___x_1430_);
v___x_1432_ = lean_string_append(v___x_1426_, v___x_1431_);
lean_dec_ref(v___x_1431_);
v___x_1433_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__6));
v___x_1434_ = lean_string_append(v___x_1432_, v___x_1433_);
v___x_1435_ = lean_string_append(v___x_1412_, v___x_1434_);
lean_dec_ref(v___x_1434_);
v___x_1436_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___closed__7));
v___x_1437_ = lean_string_append(v___x_1436_, v___x_1404_);
lean_dec_ref(v___x_1404_);
v___x_1438_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__4));
v___x_1439_ = lean_string_append(v___x_1437_, v___x_1438_);
v___x_1440_ = lean_string_append(v___x_1435_, v___x_1439_);
lean_dec_ref(v___x_1439_);
v_as_x27_1393_ = v_tail_1398_;
v_b_1394_ = v___x_1440_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg___boxed(lean_object* v_r_1442_, lean_object* v_as_x27_1443_, lean_object* v_b_1444_){
_start:
{
lean_object* v_res_1445_; 
v_res_1445_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(v_r_1442_, v_as_x27_1443_, v_b_1444_);
lean_dec(v_as_x27_1443_);
return v_res_1445_;
}
}
static lean_object* _init_lp_choreo_Choreo_proofSource___closed__28(void){
_start:
{
lean_object* v___x_1474_; lean_object* v___x_1475_; 
v___x_1474_ = lean_unsigned_to_nat(0u);
v___x_1475_ = lean_nat_to_int(v___x_1474_);
return v___x_1475_;
}
}
static lean_object* _init_lp_choreo_Choreo_proofSource___closed__29(void){
_start:
{
lean_object* v___x_1476_; lean_object* v___x_1477_; 
v___x_1476_ = lean_unsigned_to_nat(2u);
v___x_1477_ = lean_nat_to_int(v___x_1476_);
return v___x_1477_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_proofSource(lean_object* v_b_1482_, lean_object* v_program_1483_, lean_object* v_start_1484_){
_start:
{
lean_object* v_out_1486_; lean_object* v_out_1490_; lean_object* v_routine_1495_; lean_object* v_asks_1496_; lean_object* v_rejected_1497_; lean_object* v_drift_1498_; lean_object* v_cfg_1499_; lean_object* v_phases_1500_; lean_object* v_out_1501_; lean_object* v___x_1502_; lean_object* v___x_1503_; lean_object* v___x_1504_; lean_object* v___f_1505_; lean_object* v___f_1506_; lean_object* v___x_1507_; lean_object* v___x_1508_; lean_object* v___x_1509_; lean_object* v___x_1510_; lean_object* v___x_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; lean_object* v___x_1514_; lean_object* v___x_1515_; lean_object* v___x_1516_; lean_object* v___x_1517_; lean_object* v___x_1518_; lean_object* v___x_1519_; lean_object* v___x_1520_; lean_object* v___x_1521_; lean_object* v___x_1522_; lean_object* v___x_1523_; lean_object* v___x_1524_; lean_object* v___x_1525_; lean_object* v___x_1526_; lean_object* v___x_1527_; lean_object* v___x_1528_; lean_object* v___x_1529_; lean_object* v___x_1530_; lean_object* v___x_1531_; lean_object* v___x_1532_; lean_object* v___x_1533_; lean_object* v___x_1534_; lean_object* v___x_1535_; lean_object* v___x_1536_; lean_object* v___x_1537_; uint8_t v___x_1538_; 
v_routine_1495_ = lean_ctor_get(v_b_1482_, 1);
lean_inc_ref_n(v_routine_1495_, 3);
v_asks_1496_ = lean_ctor_get(v_b_1482_, 3);
lean_inc_n(v_asks_1496_, 2);
v_rejected_1497_ = lean_ctor_get(v_b_1482_, 4);
v_drift_1498_ = lean_ctor_get(v_b_1482_, 12);
lean_inc(v_drift_1498_);
v_cfg_1499_ = lean_ctor_get(v_routine_1495_, 0);
v_phases_1500_ = lean_ctor_get(v_routine_1495_, 1);
v_out_1501_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__3));
v___x_1502_ = lean_unsigned_to_nat(0u);
lean_inc(v_rejected_1497_);
v___x_1503_ = l_List_zipIdxTR___redArg(v_rejected_1497_, v___x_1502_);
lean_inc_ref_n(v_b_1482_, 2);
v___x_1504_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(v_b_1482_, v___x_1503_, v_out_1501_);
lean_dec(v___x_1503_);
v___f_1505_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__4));
v___f_1506_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__5));
v___x_1507_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__6));
lean_inc_ref_n(v_cfg_1499_, 2);
v___x_1508_ = lp_choreo_Choreo_configL(v_cfg_1499_);
v___x_1509_ = lean_string_append(v___x_1507_, v___x_1508_);
lean_dec_ref(v___x_1508_);
v___x_1510_ = ((lean_object*)(lp_choreo_Choreo_programSource___closed__3));
v___x_1511_ = lean_string_append(v___x_1509_, v___x_1510_);
v___x_1512_ = lean_string_append(v___x_1504_, v___x_1511_);
lean_dec_ref(v___x_1511_);
v___x_1513_ = lp_choreo_Choreo_phaseProofs(v_routine_1495_);
v___x_1514_ = lean_string_append(v___x_1512_, v___x_1513_);
lean_dec_ref(v___x_1513_);
lean_inc(v_phases_1500_);
v___x_1515_ = l_List_zipIdxTR___redArg(v_phases_1500_, v___x_1502_);
v___x_1516_ = lean_box(0);
v___x_1517_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3(v___x_1515_, v___x_1516_);
v___x_1518_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__7));
v___x_1519_ = lp_choreo_Choreo_listL___redArg(v___f_1505_, v___x_1517_);
v___x_1520_ = lean_string_append(v___x_1518_, v___x_1519_);
lean_dec_ref(v___x_1519_);
v___x_1521_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__8));
v___x_1522_ = lean_string_append(v___x_1520_, v___x_1521_);
v___x_1523_ = lean_string_append(v___x_1514_, v___x_1522_);
lean_dec_ref(v___x_1522_);
v___x_1524_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__9));
v___x_1525_ = lp_choreo_Choreo_listL___redArg(v___f_1506_, v_asks_1496_);
v___x_1526_ = lean_string_append(v___x_1524_, v___x_1525_);
lean_dec_ref(v___x_1525_);
v___x_1527_ = lean_string_append(v___x_1526_, v___x_1510_);
v___x_1528_ = lean_string_append(v___x_1523_, v___x_1527_);
lean_dec_ref(v___x_1527_);
v___x_1529_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__10));
v___x_1530_ = lean_string_append(v___x_1528_, v___x_1529_);
lean_inc(v_start_1484_);
lean_inc(v_program_1483_);
v___x_1531_ = lp_choreo_Choreo_programSource(v_program_1483_, v_start_1484_);
v___x_1532_ = lean_string_append(v___x_1530_, v___x_1531_);
lean_dec_ref(v___x_1531_);
v___x_1533_ = lp_choreo_Choreo_programProofs(v_cfg_1499_, v_program_1483_, v_start_1484_);
v___x_1534_ = lean_string_append(v___x_1532_, v___x_1533_);
lean_dec_ref(v___x_1533_);
v___x_1535_ = lp_choreo_Choreo_transitionsOf(v_b_1482_);
v___x_1536_ = l_List_zipIdxTR___redArg(v___x_1535_, v___x_1502_);
v___x_1537_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(v_routine_1495_, v___x_1536_, v___x_1534_);
lean_dec(v___x_1536_);
v___x_1538_ = lp_choreo_Choreo_Built_movementOk(v_b_1482_);
if (v___x_1538_ == 0)
{
lean_object* v___x_1539_; lean_object* v___x_1540_; 
lean_dec(v_drift_1498_);
lean_inc_ref(v_routine_1495_);
v___x_1539_ = lp_choreo_Choreo_phaseProblems(v_routine_1495_);
v___x_1540_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v___x_1539_);
lean_dec(v___x_1539_);
if (lean_obj_tag(v___x_1540_) == 0)
{
lean_object* v___x_1541_; 
v___x_1541_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(v_routine_1495_, v_asks_1496_);
if (lean_obj_tag(v___x_1541_) == 0)
{
lean_object* v___x_1542_; lean_object* v___x_1543_; 
v___x_1542_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__11));
v___x_1543_ = lean_string_append(v___x_1537_, v___x_1542_);
v_out_1486_ = v___x_1543_;
goto v___jp_1485_;
}
else
{
lean_object* v_val_1544_; lean_object* v_snd_1545_; lean_object* v_snd_1546_; lean_object* v_snd_1547_; lean_object* v_snd_1548_; lean_object* v_snd_1549_; lean_object* v_fst_1550_; lean_object* v_fst_1551_; lean_object* v_fst_1552_; lean_object* v_fst_1553_; lean_object* v_fst_1554_; lean_object* v_snd_1555_; lean_object* v___x_1556_; lean_object* v___x_1557_; lean_object* v___x_1558_; lean_object* v___x_1559_; lean_object* v___x_1560_; lean_object* v___x_1561_; lean_object* v___x_1562_; lean_object* v___x_1563_; lean_object* v___x_1564_; lean_object* v___x_1565_; lean_object* v___x_1566_; lean_object* v___x_1567_; lean_object* v___x_1568_; lean_object* v___x_1569_; lean_object* v___x_1570_; lean_object* v___x_1571_; lean_object* v___x_1572_; lean_object* v___x_1573_; lean_object* v___x_1574_; lean_object* v___x_1575_; lean_object* v___x_1576_; lean_object* v___x_1577_; lean_object* v___x_1578_; lean_object* v___x_1579_; lean_object* v___x_1580_; lean_object* v___x_1581_; lean_object* v___x_1582_; lean_object* v___x_1583_; lean_object* v___x_1584_; lean_object* v___x_1585_; lean_object* v___x_1586_; lean_object* v___x_1587_; lean_object* v___x_1588_; 
v_val_1544_ = lean_ctor_get(v___x_1541_, 0);
lean_inc(v_val_1544_);
lean_dec_ref_known(v___x_1541_, 1);
v_snd_1545_ = lean_ctor_get(v_val_1544_, 1);
lean_inc(v_snd_1545_);
lean_dec(v_val_1544_);
v_snd_1546_ = lean_ctor_get(v_snd_1545_, 1);
lean_inc(v_snd_1546_);
v_snd_1547_ = lean_ctor_get(v_snd_1546_, 1);
lean_inc(v_snd_1547_);
v_snd_1548_ = lean_ctor_get(v_snd_1547_, 1);
lean_inc(v_snd_1548_);
v_snd_1549_ = lean_ctor_get(v_snd_1548_, 1);
lean_inc(v_snd_1549_);
v_fst_1550_ = lean_ctor_get(v_snd_1545_, 0);
lean_inc(v_fst_1550_);
lean_dec(v_snd_1545_);
v_fst_1551_ = lean_ctor_get(v_snd_1546_, 0);
lean_inc(v_fst_1551_);
lean_dec(v_snd_1546_);
v_fst_1552_ = lean_ctor_get(v_snd_1547_, 0);
lean_inc(v_fst_1552_);
lean_dec(v_snd_1547_);
v_fst_1553_ = lean_ctor_get(v_snd_1548_, 0);
lean_inc(v_fst_1553_);
lean_dec(v_snd_1548_);
v_fst_1554_ = lean_ctor_get(v_snd_1549_, 0);
lean_inc(v_fst_1554_);
v_snd_1555_ = lean_ctor_get(v_snd_1549_, 1);
lean_inc(v_snd_1555_);
lean_dec(v_snd_1549_);
v___x_1556_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__12));
v___x_1557_ = lean_string_append(v___x_1537_, v___x_1556_);
v___x_1558_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__13));
v___x_1559_ = l_Nat_reprFast(v_fst_1550_);
v___x_1560_ = lean_string_append(v___x_1558_, v___x_1559_);
v___x_1561_ = ((lean_object*)(lp_choreo_Choreo_opL___closed__1));
v___x_1562_ = lean_string_append(v___x_1560_, v___x_1561_);
v___x_1563_ = lp_choreo_Choreo_natsL(v_fst_1551_);
v___x_1564_ = lean_string_append(v___x_1562_, v___x_1563_);
lean_dec_ref(v___x_1563_);
v___x_1565_ = lean_string_append(v___x_1564_, v___x_1561_);
v___x_1566_ = lp_choreo_Choreo_intL(v_fst_1552_);
lean_dec(v_fst_1552_);
v___x_1567_ = lean_string_append(v___x_1565_, v___x_1566_);
lean_dec_ref(v___x_1566_);
v___x_1568_ = lean_string_append(v___x_1567_, v___x_1561_);
v___x_1569_ = lp_choreo_Choreo_intL(v_fst_1553_);
lean_dec(v_fst_1553_);
v___x_1570_ = lean_string_append(v___x_1568_, v___x_1569_);
lean_dec_ref(v___x_1569_);
v___x_1571_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__14));
v___x_1572_ = lean_string_append(v___x_1570_, v___x_1571_);
v___x_1573_ = lean_string_append(v___x_1572_, v___x_1559_);
lean_dec_ref(v___x_1559_);
v___x_1574_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__4));
v___x_1575_ = lean_string_append(v___x_1573_, v___x_1574_);
v___x_1576_ = l_Nat_reprFast(v_fst_1554_);
v___x_1577_ = lean_string_append(v___x_1575_, v___x_1576_);
lean_dec_ref(v___x_1576_);
v___x_1578_ = ((lean_object*)(lp_choreo_Choreo_refutationL___closed__5));
v___x_1579_ = lean_string_append(v___x_1577_, v___x_1578_);
v___x_1580_ = l_Nat_reprFast(v_snd_1555_);
v___x_1581_ = lean_string_append(v___x_1579_, v___x_1580_);
lean_dec_ref(v___x_1580_);
v___x_1582_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__15));
v___x_1583_ = lean_string_append(v___x_1581_, v___x_1582_);
v___x_1584_ = lean_string_append(v___x_1557_, v___x_1583_);
lean_dec_ref(v___x_1583_);
v___x_1585_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__16));
v___x_1586_ = lean_string_append(v___x_1584_, v___x_1585_);
v___x_1587_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__17));
v___x_1588_ = lean_string_append(v___x_1586_, v___x_1587_);
v_out_1486_ = v___x_1588_;
goto v___jp_1485_;
}
}
else
{
lean_object* v_val_1589_; lean_object* v___y_1591_; lean_object* v_phase_1615_; 
lean_dec(v_asks_1496_);
lean_dec_ref(v_routine_1495_);
v_val_1589_ = lean_ctor_get(v___x_1540_, 0);
lean_inc(v_val_1589_);
lean_dec_ref_known(v___x_1540_, 1);
v_phase_1615_ = lean_ctor_get(v_val_1589_, 0);
lean_inc(v_phase_1615_);
v___y_1591_ = v_phase_1615_;
goto v___jp_1590_;
v___jp_1590_:
{
lean_object* v___x_1592_; lean_object* v___x_1593_; lean_object* v___x_1594_; lean_object* v___x_1595_; lean_object* v___x_1596_; 
v___x_1592_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__18));
v___x_1593_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3___closed__0));
v___x_1594_ = l_Nat_reprFast(v___y_1591_);
v___x_1595_ = lean_string_append(v___x_1593_, v___x_1594_);
v___x_1596_ = lp_choreo_Choreo_refutationL(v___x_1592_, v___x_1595_, v_val_1589_);
lean_dec_ref(v___x_1595_);
if (lean_obj_tag(v___x_1596_) == 0)
{
lean_dec_ref(v___x_1594_);
v_out_1486_ = v___x_1537_;
goto v___jp_1485_;
}
else
{
lean_object* v_val_1597_; lean_object* v___x_1598_; lean_object* v___x_1599_; lean_object* v___x_1600_; lean_object* v___x_1601_; lean_object* v___x_1602_; lean_object* v___x_1603_; lean_object* v___x_1604_; lean_object* v___x_1605_; lean_object* v___x_1606_; lean_object* v___x_1607_; lean_object* v___x_1608_; lean_object* v___x_1609_; lean_object* v___x_1610_; lean_object* v___x_1611_; lean_object* v___x_1612_; lean_object* v___x_1613_; lean_object* v___x_1614_; 
v_val_1597_ = lean_ctor_get(v___x_1596_, 0);
lean_inc(v_val_1597_);
lean_dec_ref_known(v___x_1596_, 1);
v___x_1598_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__19));
v___x_1599_ = lean_string_append(v___x_1537_, v___x_1598_);
v___x_1600_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__20));
v___x_1601_ = lean_string_append(v___x_1600_, v___x_1594_);
v___x_1602_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__21));
v___x_1603_ = lean_string_append(v___x_1601_, v___x_1602_);
v___x_1604_ = lean_string_append(v___x_1603_, v___x_1594_);
lean_dec_ref(v___x_1594_);
v___x_1605_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__22));
v___x_1606_ = lean_string_append(v___x_1604_, v___x_1605_);
v___x_1607_ = lean_string_append(v___x_1606_, v_val_1597_);
lean_dec(v_val_1597_);
v___x_1608_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__23));
v___x_1609_ = lean_string_append(v___x_1607_, v___x_1608_);
v___x_1610_ = lean_string_append(v___x_1599_, v___x_1609_);
lean_dec_ref(v___x_1609_);
v___x_1611_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__24));
v___x_1612_ = lean_string_append(v___x_1610_, v___x_1611_);
v___x_1613_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__17));
v___x_1614_ = lean_string_append(v___x_1612_, v___x_1613_);
v_out_1486_ = v___x_1614_;
goto v___jp_1485_;
}
}
}
}
else
{
lean_object* v___x_1616_; lean_object* v___x_1617_; lean_object* v___x_1618_; lean_object* v___x_1619_; lean_object* v___x_1620_; lean_object* v___x_1621_; lean_object* v___x_1622_; lean_object* v___x_1623_; lean_object* v___x_1624_; lean_object* v___x_1625_; lean_object* v___x_1626_; uint8_t v___x_1627_; 
lean_inc(v_phases_1500_);
lean_inc_ref(v_cfg_1499_);
lean_dec(v_asks_1496_);
lean_dec_ref(v_routine_1495_);
v___x_1616_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__25));
v___x_1617_ = lean_string_append(v___x_1537_, v___x_1616_);
v___x_1618_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__26));
v___x_1619_ = l_List_lengthTR___redArg(v_phases_1500_);
lean_dec(v_phases_1500_);
v___x_1620_ = l_List_range(v___x_1619_);
v___x_1621_ = lp_choreo_Choreo_chainOf(v___x_1620_);
v___x_1622_ = lean_string_append(v___x_1618_, v___x_1621_);
lean_dec_ref(v___x_1621_);
v___x_1623_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__27));
v___x_1624_ = lean_string_append(v___x_1622_, v___x_1623_);
v___x_1625_ = lean_string_append(v___x_1617_, v___x_1624_);
lean_dec_ref(v___x_1624_);
v___x_1626_ = lean_obj_once(&lp_choreo_Choreo_proofSource___closed__28, &lp_choreo_Choreo_proofSource___closed__28_once, _init_lp_choreo_Choreo_proofSource___closed__28);
v___x_1627_ = lean_int_dec_lt(v___x_1626_, v_drift_1498_);
if (v___x_1627_ == 0)
{
lean_dec_ref(v_cfg_1499_);
lean_dec(v_drift_1498_);
v_out_1490_ = v___x_1625_;
goto v___jp_1489_;
}
else
{
lean_object* v_dmin_1628_; lean_object* v___x_1629_; lean_object* v___x_1630_; lean_object* v___x_1631_; uint8_t v___x_1632_; 
v_dmin_1628_ = lean_ctor_get(v_cfg_1499_, 1);
lean_inc(v_dmin_1628_);
lean_dec_ref(v_cfg_1499_);
v___x_1629_ = lean_obj_once(&lp_choreo_Choreo_proofSource___closed__29, &lp_choreo_Choreo_proofSource___closed__29_once, _init_lp_choreo_Choreo_proofSource___closed__29);
v___x_1630_ = lean_int_mul(v___x_1629_, v_drift_1498_);
v___x_1631_ = lean_int_sub(v_dmin_1628_, v___x_1630_);
lean_dec(v___x_1630_);
lean_dec(v_dmin_1628_);
v___x_1632_ = lean_int_dec_lt(v___x_1626_, v___x_1631_);
if (v___x_1632_ == 0)
{
lean_dec(v___x_1631_);
lean_dec(v_drift_1498_);
v_out_1490_ = v___x_1625_;
goto v___jp_1489_;
}
else
{
lean_object* v___x_1633_; lean_object* v___x_1634_; lean_object* v___x_1635_; lean_object* v___x_1636_; lean_object* v___x_1637_; lean_object* v___x_1638_; lean_object* v___x_1639_; lean_object* v___x_1640_; lean_object* v___x_1641_; lean_object* v___x_1642_; lean_object* v___x_1643_; lean_object* v___x_1644_; 
v___x_1633_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__30));
v___x_1634_ = lean_string_append(v___x_1625_, v___x_1633_);
v___x_1635_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__31));
v___x_1636_ = l_Int_repr(v___x_1631_);
lean_dec(v___x_1631_);
v___x_1637_ = lean_string_append(v___x_1635_, v___x_1636_);
lean_dec_ref(v___x_1636_);
v___x_1638_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__32));
v___x_1639_ = lean_string_append(v___x_1637_, v___x_1638_);
v___x_1640_ = l_Int_repr(v_drift_1498_);
lean_dec(v_drift_1498_);
v___x_1641_ = lean_string_append(v___x_1639_, v___x_1640_);
lean_dec_ref(v___x_1640_);
v___x_1642_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__33));
v___x_1643_ = lean_string_append(v___x_1641_, v___x_1642_);
v___x_1644_ = lean_string_append(v___x_1634_, v___x_1643_);
lean_dec_ref(v___x_1643_);
v_out_1490_ = v___x_1644_;
goto v___jp_1489_;
}
}
}
v___jp_1485_:
{
lean_object* v___x_1487_; lean_object* v___x_1488_; 
v___x_1487_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__0));
v___x_1488_ = lean_string_append(v_out_1486_, v___x_1487_);
return v___x_1488_;
}
v___jp_1489_:
{
lean_object* v___x_1491_; lean_object* v___x_1492_; lean_object* v___x_1493_; lean_object* v___x_1494_; 
v___x_1491_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__1));
v___x_1492_ = lean_string_append(v_out_1490_, v___x_1491_);
v___x_1493_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__2));
v___x_1494_ = lean_string_append(v___x_1492_, v___x_1493_);
v_out_1486_ = v___x_1494_;
goto v___jp_1485_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2(lean_object* v_b_1645_, lean_object* v_as_1646_, lean_object* v_as_x27_1647_, lean_object* v_b_1648_, lean_object* v_a_1649_){
_start:
{
lean_object* v___x_1650_; 
v___x_1650_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg(v_b_1645_, v_as_x27_1647_, v_b_1648_);
return v___x_1650_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___boxed(lean_object* v_b_1651_, lean_object* v_as_1652_, lean_object* v_as_x27_1653_, lean_object* v_b_1654_, lean_object* v_a_1655_){
_start:
{
lean_object* v_res_1656_; 
v_res_1656_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2(v_b_1651_, v_as_1652_, v_as_x27_1653_, v_b_1654_, v_a_1655_);
lean_dec(v_as_x27_1653_);
lean_dec(v_as_1652_);
return v_res_1656_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4(lean_object* v_r_1657_, lean_object* v_as_1658_, lean_object* v_as_x27_1659_, lean_object* v_b_1660_, lean_object* v_a_1661_){
_start:
{
lean_object* v___x_1662_; 
v___x_1662_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___redArg(v_r_1657_, v_as_x27_1659_, v_b_1660_);
return v___x_1662_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4___boxed(lean_object* v_r_1663_, lean_object* v_as_1664_, lean_object* v_as_x27_1665_, lean_object* v_b_1666_, lean_object* v_a_1667_){
_start:
{
lean_object* v_res_1668_; 
v_res_1668_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__4(v_r_1663_, v_as_1664_, v_as_x27_1665_, v_b_1666_, v_a_1667_);
lean_dec(v_as_x27_1665_);
lean_dec(v_as_1664_);
return v_res_1668_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(lean_object* v_b_1669_, lean_object* v_as_x27_1670_, lean_object* v_b_1671_){
_start:
{
if (lean_obj_tag(v_as_x27_1670_) == 0)
{
lean_dec_ref(v_b_1669_);
return v_b_1671_;
}
else
{
lean_object* v_head_1672_; lean_object* v_plan_1673_; lean_object* v_fst_1674_; lean_object* v_draft_1675_; lean_object* v_tail_1676_; lean_object* v_snd_1677_; lean_object* v_bpm_1678_; lean_object* v_n_1679_; lean_object* v_bounds_1680_; lean_object* v_dmin_1681_; lean_object* v___x_1682_; lean_object* v___x_1683_; lean_object* v___x_1684_; lean_object* v___x_1685_; lean_object* v___x_1686_; lean_object* v___x_1687_; lean_object* v___x_1688_; lean_object* v___x_1689_; lean_object* v___x_1690_; lean_object* v___x_1691_; lean_object* v___x_1692_; lean_object* v___x_1693_; lean_object* v___x_1694_; lean_object* v___x_1695_; lean_object* v___x_1696_; lean_object* v___x_1697_; lean_object* v___x_1698_; lean_object* v___x_1699_; lean_object* v___x_1700_; 
v_head_1672_ = lean_ctor_get(v_as_x27_1670_, 0);
v_plan_1673_ = lean_ctor_get(v_b_1669_, 0);
v_fst_1674_ = lean_ctor_get(v_head_1672_, 0);
v_draft_1675_ = lean_ctor_get(v_fst_1674_, 2);
v_tail_1676_ = lean_ctor_get(v_as_x27_1670_, 1);
v_snd_1677_ = lean_ctor_get(v_head_1672_, 1);
v_bpm_1678_ = lean_ctor_get(v_plan_1673_, 1);
v_n_1679_ = lean_ctor_get(v_plan_1673_, 3);
v_bounds_1680_ = lean_ctor_get(v_draft_1675_, 3);
v_dmin_1681_ = lean_ctor_get(v_draft_1675_, 7);
v___x_1682_ = lean_unsigned_to_nat(0u);
v___x_1683_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__0));
lean_inc(v_snd_1677_);
v___x_1684_ = l_Nat_reprFast(v_snd_1677_);
v___x_1685_ = lean_string_append(v___x_1683_, v___x_1684_);
lean_dec_ref(v___x_1684_);
v___x_1686_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_proofSource_spec__2___redArg___closed__1));
lean_inc_ref(v___x_1685_);
v___x_1687_ = lean_string_append(v___x_1685_, v___x_1686_);
lean_inc(v_dmin_1681_);
lean_inc(v_bpm_1678_);
lean_inc_ref(v_bounds_1680_);
lean_inc_n(v_n_1679_, 2);
v___x_1688_ = lp_choreo_Choreo_probeConfig(v_n_1679_, v_bounds_1680_, v_bpm_1678_, v_dmin_1681_);
v___x_1689_ = lp_choreo_Choreo_configL(v___x_1688_);
v___x_1690_ = lean_string_append(v___x_1687_, v___x_1689_);
lean_dec_ref(v___x_1689_);
v___x_1691_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1692_ = lean_string_append(v___x_1690_, v___x_1691_);
v___x_1693_ = lean_string_append(v_b_1671_, v___x_1692_);
lean_dec_ref(v___x_1692_);
v___x_1694_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__1));
v___x_1695_ = lean_string_append(v___x_1685_, v___x_1694_);
v___x_1696_ = lp_choreo_Choreo_Draft_toPhase(v_draft_1675_, v_n_1679_, v___x_1682_);
v___x_1697_ = lp_choreo_Choreo_phaseL(v___x_1696_);
v___x_1698_ = lean_string_append(v___x_1695_, v___x_1697_);
lean_dec_ref(v___x_1697_);
v___x_1699_ = lean_string_append(v___x_1698_, v___x_1691_);
v___x_1700_ = lean_string_append(v___x_1693_, v___x_1699_);
lean_dec_ref(v___x_1699_);
v_as_x27_1670_ = v_tail_1676_;
v_b_1671_ = v___x_1700_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg___boxed(lean_object* v_b_1702_, lean_object* v_as_x27_1703_, lean_object* v_b_1704_){
_start:
{
lean_object* v_res_1705_; 
v_res_1705_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(v_b_1702_, v_as_x27_1703_, v_b_1704_);
lean_dec(v_as_x27_1703_);
return v_res_1705_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(lean_object* v_r_1706_, lean_object* v_as_x27_1707_, lean_object* v_b_1708_){
_start:
{
if (lean_obj_tag(v_as_x27_1707_) == 0)
{
lean_dec_ref(v_r_1706_);
return v_b_1708_;
}
else
{
lean_object* v_head_1709_; lean_object* v_tail_1710_; lean_object* v_fst_1711_; lean_object* v_snd_1712_; lean_object* v___x_1713_; lean_object* v___x_1714_; 
v_head_1709_ = lean_ctor_get(v_as_x27_1707_, 0);
v_tail_1710_ = lean_ctor_get(v_as_x27_1707_, 1);
v_fst_1711_ = lean_ctor_get(v_head_1709_, 0);
v_snd_1712_ = lean_ctor_get(v_head_1709_, 1);
lean_inc(v_snd_1712_);
lean_inc(v_fst_1711_);
lean_inc_ref(v_r_1706_);
v___x_1713_ = lp_choreo_Choreo_phaseDef(v_r_1706_, v_fst_1711_, v_snd_1712_);
v___x_1714_ = lean_string_append(v_b_1708_, v___x_1713_);
lean_dec_ref(v___x_1713_);
v_as_x27_1707_ = v_tail_1710_;
v_b_1708_ = v___x_1714_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg___boxed(lean_object* v_r_1716_, lean_object* v_as_x27_1717_, lean_object* v_b_1718_){
_start:
{
lean_object* v_res_1719_; 
v_res_1719_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(v_r_1716_, v_as_x27_1717_, v_b_1718_);
lean_dec(v_as_x27_1717_);
return v_res_1719_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_demoData(lean_object* v_b_1722_){
_start:
{
lean_object* v_routine_1723_; lean_object* v_asks_1724_; lean_object* v_rejected_1725_; lean_object* v_cfg_1726_; lean_object* v_phases_1727_; lean_object* v_out_1728_; lean_object* v___x_1729_; lean_object* v___x_1730_; lean_object* v___x_1731_; lean_object* v___f_1732_; lean_object* v___f_1733_; lean_object* v___x_1734_; lean_object* v___x_1735_; lean_object* v___x_1736_; lean_object* v___x_1737_; lean_object* v___x_1738_; lean_object* v___x_1739_; lean_object* v___x_1740_; lean_object* v___x_1741_; lean_object* v___x_1742_; lean_object* v___x_1743_; lean_object* v___x_1744_; lean_object* v___x_1745_; lean_object* v___x_1746_; lean_object* v___x_1747_; lean_object* v___x_1748_; lean_object* v___x_1749_; lean_object* v___x_1750_; lean_object* v___x_1751_; lean_object* v___x_1752_; lean_object* v___x_1753_; lean_object* v___x_1754_; lean_object* v___x_1755_; 
v_routine_1723_ = lean_ctor_get(v_b_1722_, 1);
lean_inc_ref(v_routine_1723_);
v_asks_1724_ = lean_ctor_get(v_b_1722_, 3);
lean_inc(v_asks_1724_);
v_rejected_1725_ = lean_ctor_get(v_b_1722_, 4);
v_cfg_1726_ = lean_ctor_get(v_routine_1723_, 0);
v_phases_1727_ = lean_ctor_get(v_routine_1723_, 1);
v_out_1728_ = ((lean_object*)(lp_choreo_Choreo_demoData___closed__0));
v___x_1729_ = lean_unsigned_to_nat(0u);
lean_inc(v_rejected_1725_);
v___x_1730_ = l_List_zipIdxTR___redArg(v_rejected_1725_, v___x_1729_);
v___x_1731_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(v_b_1722_, v___x_1730_, v_out_1728_);
lean_dec(v___x_1730_);
v___f_1732_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__5));
v___f_1733_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__4));
v___x_1734_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__6));
lean_inc_ref(v_cfg_1726_);
v___x_1735_ = lp_choreo_Choreo_configL(v_cfg_1726_);
v___x_1736_ = lean_string_append(v___x_1734_, v___x_1735_);
lean_dec_ref(v___x_1735_);
v___x_1737_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1738_ = lean_string_append(v___x_1736_, v___x_1737_);
v___x_1739_ = lean_string_append(v___x_1731_, v___x_1738_);
lean_dec_ref(v___x_1738_);
lean_inc(v_phases_1727_);
v___x_1740_ = l_List_zipIdxTR___redArg(v_phases_1727_, v___x_1729_);
v___x_1741_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(v_routine_1723_, v___x_1740_, v___x_1739_);
v___x_1742_ = lean_box(0);
v___x_1743_ = lp_choreo_List_mapTR_loop___at___00Choreo_proofSource_spec__3(v___x_1740_, v___x_1742_);
v___x_1744_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__7));
v___x_1745_ = lp_choreo_Choreo_listL___redArg(v___f_1733_, v___x_1743_);
v___x_1746_ = lean_string_append(v___x_1744_, v___x_1745_);
lean_dec_ref(v___x_1745_);
v___x_1747_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__8));
v___x_1748_ = lean_string_append(v___x_1746_, v___x_1747_);
v___x_1749_ = lean_string_append(v___x_1741_, v___x_1748_);
lean_dec_ref(v___x_1748_);
v___x_1750_ = ((lean_object*)(lp_choreo_Choreo_proofSource___closed__9));
v___x_1751_ = lp_choreo_Choreo_listL___redArg(v___f_1732_, v_asks_1724_);
v___x_1752_ = lean_string_append(v___x_1750_, v___x_1751_);
lean_dec_ref(v___x_1751_);
v___x_1753_ = ((lean_object*)(lp_choreo_Choreo_demoData___closed__1));
v___x_1754_ = lean_string_append(v___x_1752_, v___x_1753_);
v___x_1755_ = lean_string_append(v___x_1749_, v___x_1754_);
lean_dec_ref(v___x_1754_);
return v___x_1755_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0(lean_object* v_b_1756_, lean_object* v_as_1757_, lean_object* v_as_x27_1758_, lean_object* v_b_1759_, lean_object* v_a_1760_){
_start:
{
lean_object* v___x_1761_; 
v___x_1761_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___redArg(v_b_1756_, v_as_x27_1758_, v_b_1759_);
return v___x_1761_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0___boxed(lean_object* v_b_1762_, lean_object* v_as_1763_, lean_object* v_as_x27_1764_, lean_object* v_b_1765_, lean_object* v_a_1766_){
_start:
{
lean_object* v_res_1767_; 
v_res_1767_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__0(v_b_1762_, v_as_1763_, v_as_x27_1764_, v_b_1765_, v_a_1766_);
lean_dec(v_as_x27_1764_);
lean_dec(v_as_1763_);
return v_res_1767_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1(lean_object* v_r_1768_, lean_object* v_as_1769_, lean_object* v_as_x27_1770_, lean_object* v_b_1771_, lean_object* v_a_1772_){
_start:
{
lean_object* v___x_1773_; 
v___x_1773_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___redArg(v_r_1768_, v_as_x27_1770_, v_b_1771_);
return v___x_1773_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1___boxed(lean_object* v_r_1774_, lean_object* v_as_1775_, lean_object* v_as_x27_1776_, lean_object* v_b_1777_, lean_object* v_a_1778_){
_start:
{
lean_object* v_res_1779_; 
v_res_1779_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoData_spec__1(v_r_1774_, v_as_1775_, v_as_x27_1776_, v_b_1777_, v_a_1778_);
lean_dec(v_as_x27_1776_);
lean_dec(v_as_1775_);
return v_res_1779_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1(lean_object* v_as_1780_, size_t v_i_1781_, size_t v_stop_1782_, lean_object* v_b_1783_){
_start:
{
uint8_t v___x_1784_; 
v___x_1784_ = lean_usize_dec_eq(v_i_1781_, v_stop_1782_);
if (v___x_1784_ == 0)
{
size_t v___x_1785_; size_t v___x_1786_; lean_object* v___x_1787_; lean_object* v_snd_1788_; lean_object* v___x_1789_; lean_object* v___x_1790_; lean_object* v___x_1791_; lean_object* v___x_1792_; lean_object* v___x_1793_; lean_object* v___x_1794_; lean_object* v___x_1795_; lean_object* v___x_1796_; 
v___x_1785_ = ((size_t)1ULL);
v___x_1786_ = lean_usize_sub(v_i_1781_, v___x_1785_);
v___x_1787_ = lean_array_uget_borrowed(v_as_1780_, v___x_1786_);
v_snd_1788_ = lean_ctor_get(v___x_1787_, 1);
v___x_1789_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__0));
lean_inc(v_snd_1788_);
v___x_1790_ = l_Nat_reprFast(v_snd_1788_);
v___x_1791_ = lean_string_append(v___x_1789_, v___x_1790_);
lean_dec_ref(v___x_1790_);
v___x_1792_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__1));
v___x_1793_ = lean_string_append(v___x_1791_, v___x_1792_);
v___x_1794_ = lean_string_append(v___x_1793_, v_b_1783_);
lean_dec_ref(v_b_1783_);
v___x_1795_ = ((lean_object*)(lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_chainOf_spec__0_spec__0___closed__2));
v___x_1796_ = lean_string_append(v___x_1794_, v___x_1795_);
v_i_1781_ = v___x_1786_;
v_b_1783_ = v___x_1796_;
goto _start;
}
else
{
return v_b_1783_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1___boxed(lean_object* v_as_1798_, lean_object* v_i_1799_, lean_object* v_stop_1800_, lean_object* v_b_1801_){
_start:
{
size_t v_i_boxed_1802_; size_t v_stop_boxed_1803_; lean_object* v_res_1804_; 
v_i_boxed_1802_ = lean_unbox_usize(v_i_1799_);
lean_dec(v_i_1799_);
v_stop_boxed_1803_ = lean_unbox_usize(v_stop_1800_);
lean_dec(v_stop_1800_);
v_res_1804_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1(v_as_1798_, v_i_boxed_1802_, v_stop_boxed_1803_, v_b_1801_);
lean_dec_ref(v_as_1798_);
return v_res_1804_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_foldrTR___at___00Choreo_demoProofs_spec__1(lean_object* v_init_1805_, lean_object* v_l_1806_){
_start:
{
lean_object* v___x_1807_; lean_object* v___x_1808_; lean_object* v___x_1809_; uint8_t v___x_1810_; 
v___x_1807_ = lean_array_mk(v_l_1806_);
v___x_1808_ = lean_array_get_size(v___x_1807_);
v___x_1809_ = lean_unsigned_to_nat(0u);
v___x_1810_ = lean_nat_dec_lt(v___x_1809_, v___x_1808_);
if (v___x_1810_ == 0)
{
lean_dec_ref(v___x_1807_);
return v_init_1805_;
}
else
{
size_t v___x_1811_; size_t v___x_1812_; lean_object* v___x_1813_; 
v___x_1811_ = lean_usize_of_nat(v___x_1808_);
v___x_1812_ = ((size_t)0ULL);
v___x_1813_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_foldrMUnsafe_fold___at___00List_foldrTR___at___00Choreo_demoProofs_spec__1_spec__1(v___x_1807_, v___x_1811_, v___x_1812_, v_init_1805_);
lean_dec_ref(v___x_1807_);
return v___x_1813_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(lean_object* v_r_1814_, lean_object* v_as_x27_1815_, lean_object* v_b_1816_){
_start:
{
if (lean_obj_tag(v_as_x27_1815_) == 0)
{
lean_dec_ref(v_r_1814_);
return v_b_1816_;
}
else
{
lean_object* v_head_1817_; lean_object* v_tail_1818_; lean_object* v_fst_1819_; lean_object* v_snd_1820_; lean_object* v___x_1821_; lean_object* v___x_1822_; lean_object* v___x_1823_; lean_object* v___x_1824_; lean_object* v___x_1825_; lean_object* v___x_1826_; lean_object* v___x_1827_; lean_object* v___x_1828_; lean_object* v___x_1829_; lean_object* v___x_1830_; lean_object* v___x_1831_; lean_object* v___x_1832_; lean_object* v___x_1833_; 
v_head_1817_ = lean_ctor_get(v_as_x27_1815_, 0);
v_tail_1818_ = lean_ctor_get(v_as_x27_1815_, 1);
v_fst_1819_ = lean_ctor_get(v_head_1817_, 0);
v_snd_1820_ = lean_ctor_get(v_head_1817_, 1);
v___x_1821_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__0));
lean_inc_n(v_snd_1820_, 2);
v___x_1822_ = l_Nat_reprFast(v_snd_1820_);
v___x_1823_ = lean_string_append(v___x_1821_, v___x_1822_);
v___x_1824_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__1));
v___x_1825_ = lean_string_append(v___x_1823_, v___x_1824_);
v___x_1826_ = lean_string_append(v___x_1825_, v___x_1822_);
lean_dec_ref(v___x_1822_);
v___x_1827_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_phaseProofs_spec__0___redArg___closed__2));
v___x_1828_ = lean_string_append(v___x_1826_, v___x_1827_);
lean_inc(v_fst_1819_);
lean_inc_ref(v_r_1814_);
v___x_1829_ = lp_choreo_Choreo_phaseProofTerm(v_r_1814_, v_fst_1819_, v_snd_1820_);
v___x_1830_ = lean_string_append(v___x_1828_, v___x_1829_);
lean_dec_ref(v___x_1829_);
v___x_1831_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1832_ = lean_string_append(v___x_1830_, v___x_1831_);
v___x_1833_ = lean_string_append(v_b_1816_, v___x_1832_);
lean_dec_ref(v___x_1832_);
v_as_x27_1815_ = v_tail_1818_;
v_b_1816_ = v___x_1833_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg___boxed(lean_object* v_r_1835_, lean_object* v_as_x27_1836_, lean_object* v_b_1837_){
_start:
{
lean_object* v_res_1838_; 
v_res_1838_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(v_r_1835_, v_as_x27_1836_, v_b_1837_);
lean_dec(v_as_x27_1836_);
return v_res_1838_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_demoProofs(lean_object* v_b_1847_){
_start:
{
lean_object* v_routine_1848_; lean_object* v_rejected_1849_; lean_object* v_phases_1850_; lean_object* v_out_1851_; lean_object* v___x_1852_; lean_object* v___x_1853_; lean_object* v___x_1854_; lean_object* v___x_1855_; lean_object* v___x_1856_; lean_object* v___x_1857_; lean_object* v___x_1858_; lean_object* v___x_1859_; lean_object* v___x_1860_; lean_object* v___x_1861_; lean_object* v___x_1862_; lean_object* v___x_1863_; lean_object* v___x_1864_; lean_object* v___x_1865_; lean_object* v___x_1866_; 
v_routine_1848_ = lean_ctor_get(v_b_1847_, 1);
lean_inc_ref(v_routine_1848_);
v_rejected_1849_ = lean_ctor_get(v_b_1847_, 4);
lean_inc(v_rejected_1849_);
lean_dec_ref(v_b_1847_);
v_phases_1850_ = lean_ctor_get(v_routine_1848_, 1);
v_out_1851_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__0));
v___x_1852_ = lean_unsigned_to_nat(0u);
lean_inc(v_phases_1850_);
v___x_1853_ = l_List_zipIdxTR___redArg(v_phases_1850_, v___x_1852_);
v___x_1854_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(v_routine_1848_, v___x_1853_, v_out_1851_);
v___x_1855_ = ((lean_object*)(lp_choreo_Choreo_chainOf___closed__0));
v___x_1856_ = lp_choreo_List_foldrTR___at___00Choreo_demoProofs_spec__1(v___x_1855_, v___x_1853_);
v___x_1857_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__1));
v___x_1858_ = lean_string_append(v___x_1854_, v___x_1857_);
v___x_1859_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__2));
v___x_1860_ = lean_string_append(v___x_1858_, v___x_1859_);
v___x_1861_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__3));
v___x_1862_ = lean_string_append(v___x_1861_, v___x_1856_);
lean_dec_ref(v___x_1856_);
v___x_1863_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__4));
v___x_1864_ = lean_string_append(v___x_1862_, v___x_1863_);
v___x_1865_ = lean_string_append(v___x_1860_, v___x_1864_);
lean_dec_ref(v___x_1864_);
v___x_1866_ = l_List_head_x3f___redArg(v_rejected_1849_);
lean_dec(v_rejected_1849_);
if (lean_obj_tag(v___x_1866_) == 0)
{
return v___x_1865_;
}
else
{
lean_object* v_val_1867_; lean_object* v_problems_1868_; lean_object* v___x_1869_; 
v_val_1867_ = lean_ctor_get(v___x_1866_, 0);
lean_inc(v_val_1867_);
lean_dec_ref_known(v___x_1866_, 1);
v_problems_1868_ = lean_ctor_get(v_val_1867_, 3);
lean_inc(v_problems_1868_);
lean_dec(v_val_1867_);
v___x_1869_ = lp_choreo_List_find_x3f___at___00Choreo_proofSource_spec__1(v_problems_1868_);
lean_dec(v_problems_1868_);
if (lean_obj_tag(v___x_1869_) == 0)
{
return v___x_1865_;
}
else
{
lean_object* v_val_1870_; lean_object* v___x_1871_; lean_object* v___x_1872_; lean_object* v___x_1873_; 
v_val_1870_ = lean_ctor_get(v___x_1869_, 0);
lean_inc(v_val_1870_);
lean_dec_ref_known(v___x_1869_, 1);
v___x_1871_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__5));
v___x_1872_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__6));
v___x_1873_ = lp_choreo_Choreo_refutationL(v___x_1871_, v___x_1872_, v_val_1870_);
if (lean_obj_tag(v___x_1873_) == 0)
{
return v___x_1865_;
}
else
{
lean_object* v_val_1874_; lean_object* v___x_1875_; lean_object* v___x_1876_; lean_object* v___x_1877_; lean_object* v___x_1878_; lean_object* v___x_1879_; 
v_val_1874_ = lean_ctor_get(v___x_1873_, 0);
lean_inc(v_val_1874_);
lean_dec_ref_known(v___x_1873_, 1);
v___x_1875_ = ((lean_object*)(lp_choreo_Choreo_demoProofs___closed__7));
v___x_1876_ = lean_string_append(v___x_1875_, v_val_1874_);
lean_dec(v_val_1874_);
v___x_1877_ = ((lean_object*)(lp_choreo_Choreo_phaseDef___closed__2));
v___x_1878_ = lean_string_append(v___x_1876_, v___x_1877_);
v___x_1879_ = lean_string_append(v___x_1865_, v___x_1878_);
lean_dec_ref(v___x_1878_);
return v___x_1879_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0(lean_object* v_r_1880_, lean_object* v_as_1881_, lean_object* v_as_x27_1882_, lean_object* v_b_1883_, lean_object* v_a_1884_){
_start:
{
lean_object* v___x_1885_; 
v___x_1885_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___redArg(v_r_1880_, v_as_x27_1882_, v_b_1883_);
return v___x_1885_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0___boxed(lean_object* v_r_1886_, lean_object* v_as_1887_, lean_object* v_as_x27_1888_, lean_object* v_b_1889_, lean_object* v_a_1890_){
_start:
{
lean_object* v_res_1891_; 
v_res_1891_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_demoProofs_spec__0(v_r_1886_, v_as_1887_, v_as_x27_1888_, v_b_1889_, v_a_1890_);
lean_dec(v_as_x27_1888_);
lean_dec(v_as_1887_);
return v_res_1891_;
}
}
LEAN_EXPORT double lp_choreo_Choreo_ratFloat(lean_object* v_t_1892_){
_start:
{
lean_object* v_num_1893_; lean_object* v_den_1894_; double v___x_1895_; double v___x_1896_; double v___x_1897_; 
v_num_1893_ = lean_ctor_get(v_t_1892_, 0);
lean_inc(v_num_1893_);
v_den_1894_ = lean_ctor_get(v_t_1892_, 1);
lean_inc(v_den_1894_);
lean_dec_ref(v_t_1892_);
v___x_1895_ = l_Float_ofInt(v_num_1893_);
lean_dec(v_num_1893_);
v___x_1896_ = lean_float_of_nat(v_den_1894_);
v___x_1897_ = lean_float_div(v___x_1895_, v___x_1896_);
return v___x_1897_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_ratFloat___boxed(lean_object* v_t_1898_){
_start:
{
double v_res_1899_; lean_object* v_r_1900_; 
v_res_1899_ = lp_choreo_Choreo_ratFloat(v_t_1898_);
v_r_1900_ = lean_box_float(v_res_1899_);
return v_r_1900_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jInt(lean_object* v_i_1901_){
_start:
{
lean_object* v___x_1902_; lean_object* v___x_1903_; 
v___x_1902_ = l_Lean_JsonNumber_fromInt(v_i_1901_);
v___x_1903_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_1903_, 0, v___x_1902_);
return v___x_1903_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jFloat(double v_f_1904_){
_start:
{
lean_object* v___x_1905_; 
v___x_1905_ = l_Lean_Float_toJson(v_f_1904_);
return v___x_1905_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jFloat___boxed(lean_object* v_f_1906_){
_start:
{
double v_f_boxed_1907_; lean_object* v_res_1908_; 
v_f_boxed_1907_ = lean_unbox_float(v_f_1906_);
lean_dec_ref(v_f_1906_);
v_res_1908_ = lp_choreo_Choreo_jFloat(v_f_boxed_1907_);
return v_res_1908_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_jPoly_spec__0(lean_object* v_a_1909_, lean_object* v_a_1910_){
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
v___x_1917_ = lp_choreo_Choreo_jInt(v_head_1912_);
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
LEAN_EXPORT lean_object* lp_choreo_Choreo_jPoly(lean_object* v_p_1923_){
_start:
{
lean_object* v___x_1924_; lean_object* v___x_1925_; lean_object* v___x_1926_; lean_object* v___x_1927_; 
v___x_1924_ = lean_box(0);
v___x_1925_ = lp_choreo_List_mapTR_loop___at___00Choreo_jPoly_spec__0(v_p_1923_, v___x_1924_);
v___x_1926_ = lean_array_mk(v___x_1925_);
v___x_1927_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_1927_, 0, v___x_1926_);
return v___x_1927_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_jRect(lean_object* v_r_1932_){
_start:
{
lean_object* v_xmin_1933_; lean_object* v_xmax_1934_; lean_object* v_ymin_1935_; lean_object* v_ymax_1936_; lean_object* v___x_1937_; lean_object* v___x_1938_; lean_object* v___x_1939_; lean_object* v___x_1940_; lean_object* v___x_1941_; lean_object* v___x_1942_; lean_object* v___x_1943_; lean_object* v___x_1944_; lean_object* v___x_1945_; lean_object* v___x_1946_; lean_object* v___x_1947_; lean_object* v___x_1948_; lean_object* v___x_1949_; lean_object* v___x_1950_; lean_object* v___x_1951_; lean_object* v___x_1952_; lean_object* v___x_1953_; lean_object* v___x_1954_; 
v_xmin_1933_ = lean_ctor_get(v_r_1932_, 0);
lean_inc(v_xmin_1933_);
v_xmax_1934_ = lean_ctor_get(v_r_1932_, 1);
lean_inc(v_xmax_1934_);
v_ymin_1935_ = lean_ctor_get(v_r_1932_, 2);
lean_inc(v_ymin_1935_);
v_ymax_1936_ = lean_ctor_get(v_r_1932_, 3);
lean_inc(v_ymax_1936_);
lean_dec_ref(v_r_1932_);
v___x_1937_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__0));
v___x_1938_ = lp_choreo_Choreo_jInt(v_xmin_1933_);
v___x_1939_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1939_, 0, v___x_1937_);
lean_ctor_set(v___x_1939_, 1, v___x_1938_);
v___x_1940_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__1));
v___x_1941_ = lp_choreo_Choreo_jInt(v_xmax_1934_);
v___x_1942_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1942_, 0, v___x_1940_);
lean_ctor_set(v___x_1942_, 1, v___x_1941_);
v___x_1943_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__2));
v___x_1944_ = lp_choreo_Choreo_jInt(v_ymin_1935_);
v___x_1945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1945_, 0, v___x_1943_);
lean_ctor_set(v___x_1945_, 1, v___x_1944_);
v___x_1946_ = ((lean_object*)(lp_choreo_Choreo_jRect___closed__3));
v___x_1947_ = lp_choreo_Choreo_jInt(v_ymax_1936_);
v___x_1948_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1948_, 0, v___x_1946_);
lean_ctor_set(v___x_1948_, 1, v___x_1947_);
v___x_1949_ = lean_box(0);
v___x_1950_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1950_, 0, v___x_1948_);
lean_ctor_set(v___x_1950_, 1, v___x_1949_);
v___x_1951_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1951_, 0, v___x_1945_);
lean_ctor_set(v___x_1951_, 1, v___x_1950_);
v___x_1952_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1952_, 0, v___x_1942_);
lean_ctor_set(v___x_1952_, 1, v___x_1951_);
v___x_1953_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1953_, 0, v___x_1939_);
lean_ctor_set(v___x_1953_, 1, v___x_1952_);
v___x_1954_ = l_Lean_Json_mkObj(v___x_1953_);
lean_dec_ref_known(v___x_1953_, 2);
return v___x_1954_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_certName(lean_object* v_x_1962_){
_start:
{
switch(lean_obj_tag(v_x_1962_))
{
case 0:
{
uint8_t v_xAxis_1963_; 
v_xAxis_1963_ = lean_ctor_get_uint8(v_x_1962_, sizeof(void*)*1);
lean_dec_ref_known(v_x_1962_, 1);
if (v_xAxis_1963_ == 0)
{
lean_object* v___x_1964_; 
v___x_1964_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__0));
return v___x_1964_;
}
else
{
lean_object* v___x_1965_; 
v___x_1965_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__1));
return v___x_1965_;
}
}
case 1:
{
lean_object* v_depth_1966_; lean_object* v___x_1967_; uint8_t v___x_1968_; 
v_depth_1966_ = lean_ctor_get(v_x_1962_, 0);
lean_inc(v_depth_1966_);
lean_dec_ref_known(v_x_1962_, 1);
v___x_1967_ = lean_unsigned_to_nat(0u);
v___x_1968_ = lean_nat_dec_eq(v_depth_1966_, v___x_1967_);
if (v___x_1968_ == 0)
{
lean_object* v___x_1969_; lean_object* v___x_1970_; lean_object* v___x_1971_; lean_object* v___x_1972_; lean_object* v___x_1973_; 
v___x_1969_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__2));
v___x_1970_ = l_Nat_reprFast(v_depth_1966_);
v___x_1971_ = lean_string_append(v___x_1969_, v___x_1970_);
lean_dec_ref(v___x_1970_);
v___x_1972_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__3));
v___x_1973_ = lean_string_append(v___x_1971_, v___x_1972_);
return v___x_1973_;
}
else
{
lean_object* v___x_1974_; 
lean_dec(v_depth_1966_);
v___x_1974_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__4));
return v___x_1974_;
}
}
case 2:
{
lean_object* v___x_1975_; 
lean_dec_ref_known(v_x_1962_, 2);
v___x_1975_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__5));
return v___x_1975_;
}
default: 
{
lean_object* v___x_1976_; 
lean_dec_ref_known(v_x_1962_, 1);
v___x_1976_ = ((lean_object*)(lp_choreo_Choreo_certName___closed__6));
return v___x_1976_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_certDepth(lean_object* v_x_1977_){
_start:
{
switch(lean_obj_tag(v_x_1977_))
{
case 0:
{
lean_object* v_depth_1978_; 
v_depth_1978_ = lean_ctor_get(v_x_1977_, 0);
lean_inc(v_depth_1978_);
return v_depth_1978_;
}
case 1:
{
lean_object* v_depth_1979_; 
v_depth_1979_ = lean_ctor_get(v_x_1977_, 0);
lean_inc(v_depth_1979_);
return v_depth_1979_;
}
default: 
{
lean_object* v___x_1980_; 
v___x_1980_ = lean_unsigned_to_nat(0u);
return v___x_1980_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_certDepth___boxed(lean_object* v_x_1981_){
_start:
{
lean_object* v_res_1982_; 
v_res_1982_ = lp_choreo_Choreo_certDepth(v_x_1981_);
lean_dec_ref(v_x_1981_);
return v_res_1982_;
}
}
static double _init_lp_choreo_Choreo_secondsAt___closed__0(void){
_start:
{
lean_object* v___x_1983_; uint8_t v___x_1984_; lean_object* v___x_1985_; double v___x_1986_; 
v___x_1983_ = lean_unsigned_to_nat(1u);
v___x_1984_ = 1;
v___x_1985_ = lean_unsigned_to_nat(600u);
v___x_1986_ = l_Float_ofScientific(v___x_1985_, v___x_1984_, v___x_1983_);
return v___x_1986_;
}
}
LEAN_EXPORT double lp_choreo_Choreo_secondsAt(lean_object* v_c_1987_, lean_object* v_ph_1988_, lean_object* v_t_1989_){
_start:
{
lean_object* v_t0_1990_; lean_object* v_t1_1991_; lean_object* v_ticksPerBeat_1992_; lean_object* v_bpmNum_1993_; lean_object* v_bpmDen_1994_; double v___x_1995_; double v___x_1996_; lean_object* v___x_1997_; double v___x_1998_; double v___x_1999_; double v_ticks_2000_; double v___x_2001_; double v___x_2002_; double v___x_2003_; double v___x_2004_; double v___x_2005_; double v___x_2006_; double v___x_2007_; double v___x_2008_; 
v_t0_1990_ = lean_ctor_get(v_ph_1988_, 0);
lean_inc_n(v_t0_1990_, 2);
v_t1_1991_ = lean_ctor_get(v_ph_1988_, 1);
lean_inc(v_t1_1991_);
lean_dec_ref(v_ph_1988_);
v_ticksPerBeat_1992_ = lean_ctor_get(v_c_1987_, 4);
lean_inc(v_ticksPerBeat_1992_);
v_bpmNum_1993_ = lean_ctor_get(v_c_1987_, 5);
lean_inc(v_bpmNum_1993_);
v_bpmDen_1994_ = lean_ctor_get(v_c_1987_, 6);
lean_inc(v_bpmDen_1994_);
lean_dec_ref(v_c_1987_);
v___x_1995_ = lean_float_of_nat(v_t0_1990_);
v___x_1996_ = lp_choreo_Choreo_ratFloat(v_t_1989_);
v___x_1997_ = lean_nat_sub(v_t1_1991_, v_t0_1990_);
lean_dec(v_t0_1990_);
lean_dec(v_t1_1991_);
v___x_1998_ = lean_float_of_nat(v___x_1997_);
v___x_1999_ = lean_float_mul(v___x_1996_, v___x_1998_);
v_ticks_2000_ = lean_float_add(v___x_1995_, v___x_1999_);
v___x_2001_ = lean_float_of_nat(v_ticksPerBeat_1992_);
v___x_2002_ = lean_float_div(v_ticks_2000_, v___x_2001_);
v___x_2003_ = lean_float_once(&lp_choreo_Choreo_secondsAt___closed__0, &lp_choreo_Choreo_secondsAt___closed__0_once, _init_lp_choreo_Choreo_secondsAt___closed__0);
v___x_2004_ = lean_float_mul(v___x_2002_, v___x_2003_);
v___x_2005_ = lean_float_of_nat(v_bpmDen_1994_);
v___x_2006_ = lean_float_mul(v___x_2004_, v___x_2005_);
v___x_2007_ = lean_float_of_nat(v_bpmNum_1993_);
v___x_2008_ = lean_float_div(v___x_2006_, v___x_2007_);
return v___x_2008_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_secondsAt___boxed(lean_object* v_c_2009_, lean_object* v_ph_2010_, lean_object* v_t_2011_){
_start:
{
double v_res_2012_; lean_object* v_r_2013_; 
v_res_2012_ = lp_choreo_Choreo_secondsAt(v_c_2009_, v_ph_2010_, v_t_2011_);
v_r_2013_ = lean_box_float(v_res_2012_);
return v_r_2013_;
}
}
LEAN_EXPORT double lp_choreo_Choreo_distFloat(lean_object* v_d2_2014_){
_start:
{
double v___x_2015_; double v___x_2016_; 
v___x_2015_ = lp_choreo_Choreo_ratFloat(v_d2_2014_);
v___x_2016_ = sqrt(v___x_2015_);
return v___x_2016_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_distFloat___boxed(lean_object* v_d2_2017_){
_start:
{
double v_res_2018_; lean_object* v_r_2019_; 
v_res_2018_ = lp_choreo_Choreo_distFloat(v_d2_2017_);
v_r_2019_ = lean_box_float(v_res_2018_);
return v_r_2019_;
}
}
static lean_object* _init_lp_choreo_Choreo_problemJson___lam__0___closed__0(void){
_start:
{
lean_object* v___x_2020_; lean_object* v___x_2021_; lean_object* v___x_2022_; lean_object* v___x_2023_; lean_object* v___x_2024_; lean_object* v___x_2025_; 
v___x_2020_ = lean_box(0);
v___x_2021_ = lp_choreo_Choreo_stageRect;
v___x_2022_ = lean_box(0);
v___x_2023_ = lean_unsigned_to_nat(1u);
v___x_2024_ = lean_unsigned_to_nat(0u);
v___x_2025_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_2025_, 0, v___x_2024_);
lean_ctor_set(v___x_2025_, 1, v___x_2023_);
lean_ctor_set(v___x_2025_, 2, v___x_2022_);
lean_ctor_set(v___x_2025_, 3, v___x_2021_);
lean_ctor_set(v___x_2025_, 4, v___x_2022_);
lean_ctor_set(v___x_2025_, 5, v___x_2022_);
lean_ctor_set(v___x_2025_, 6, v___x_2022_);
lean_ctor_set(v___x_2025_, 7, v___x_2020_);
return v___x_2025_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___lam__0(lean_object* v_phases_2026_, lean_object* v_k_2027_){
_start:
{
lean_object* v___x_2028_; lean_object* v___x_2029_; 
v___x_2028_ = lean_obj_once(&lp_choreo_Choreo_problemJson___lam__0___closed__0, &lp_choreo_Choreo_problemJson___lam__0___closed__0_once, _init_lp_choreo_Choreo_problemJson___lam__0___closed__0);
v___x_2029_ = l_List_getD___redArg(v_phases_2026_, v_k_2027_, v___x_2028_);
return v___x_2029_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___lam__0___boxed(lean_object* v_phases_2030_, lean_object* v_k_2031_){
_start:
{
lean_object* v_res_2032_; 
v_res_2032_ = lp_choreo_Choreo_problemJson___lam__0(v_phases_2030_, v_k_2031_);
lean_dec(v_phases_2030_);
return v_res_2032_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson(lean_object* v_c_2073_, lean_object* v_phases_2074_, lean_object* v_names_2075_, lean_object* v_p_2076_){
_start:
{
switch(lean_obj_tag(v_p_2076_))
{
case 0:
{
lean_object* v_t_2077_; lean_object* v_phase_2078_; lean_object* v_i_2079_; lean_object* v_j_2080_; lean_object* v_num_2081_; lean_object* v_den_2082_; lean_object* v_ph_2083_; lean_object* v___x_2084_; lean_object* v___x_2085_; lean_object* v___x_2086_; lean_object* v___x_2087_; lean_object* v___x_2088_; lean_object* v___x_2089_; lean_object* v___x_2090_; lean_object* v___x_2091_; lean_object* v___x_2092_; lean_object* v___x_2093_; lean_object* v___x_2094_; lean_object* v___x_2095_; lean_object* v___x_2096_; lean_object* v___x_2097_; double v___x_2098_; lean_object* v___x_2099_; lean_object* v___x_2100_; lean_object* v___x_2101_; lean_object* v___x_2102_; lean_object* v___x_2103_; lean_object* v___x_2104_; lean_object* v___x_2105_; lean_object* v___x_2106_; lean_object* v___x_2107_; lean_object* v___x_2108_; double v___x_2109_; lean_object* v___x_2110_; lean_object* v___x_2111_; lean_object* v___x_2112_; lean_object* v___x_2113_; lean_object* v___x_2114_; lean_object* v___x_2115_; double v___x_2116_; lean_object* v___x_2117_; lean_object* v___x_2118_; lean_object* v___x_2119_; lean_object* v___x_2120_; lean_object* v___x_2121_; lean_object* v___x_2122_; lean_object* v___x_2123_; lean_object* v___x_2124_; lean_object* v___x_2125_; lean_object* v___x_2126_; lean_object* v___x_2127_; lean_object* v___x_2128_; lean_object* v___x_2129_; lean_object* v___x_2130_; lean_object* v___x_2131_; lean_object* v___x_2132_; lean_object* v___x_2133_; lean_object* v___x_2134_; 
v_t_2077_ = lean_ctor_get(v_p_2076_, 3);
v_phase_2078_ = lean_ctor_get(v_p_2076_, 0);
v_i_2079_ = lean_ctor_get(v_p_2076_, 1);
v_j_2080_ = lean_ctor_get(v_p_2076_, 2);
v_num_2081_ = lean_ctor_get(v_t_2077_, 0);
v_den_2082_ = lean_ctor_get(v_t_2077_, 1);
lean_inc_n(v_phase_2078_, 2);
v_ph_2083_ = lp_choreo_Choreo_problemJson___lam__0(v_phases_2074_, v_phase_2078_);
v___x_2084_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__3));
v___x_2085_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_2086_ = l_Lean_JsonNumber_fromNat(v_phase_2078_);
v___x_2087_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2087_, 0, v___x_2086_);
v___x_2088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2088_, 0, v___x_2085_);
lean_ctor_set(v___x_2088_, 1, v___x_2087_);
v___x_2089_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc_n(v_i_2079_, 2);
v___x_2090_ = l_Lean_JsonNumber_fromNat(v_i_2079_);
v___x_2091_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2091_, 0, v___x_2090_);
v___x_2092_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2092_, 0, v___x_2089_);
lean_ctor_set(v___x_2092_, 1, v___x_2091_);
v___x_2093_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
lean_inc_n(v_j_2080_, 2);
v___x_2094_ = l_Lean_JsonNumber_fromNat(v_j_2080_);
v___x_2095_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2095_, 0, v___x_2094_);
v___x_2096_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2096_, 0, v___x_2093_);
lean_ctor_set(v___x_2096_, 1, v___x_2095_);
v___x_2097_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc_ref_n(v_t_2077_, 3);
v___x_2098_ = lp_choreo_Choreo_ratFloat(v_t_2077_);
v___x_2099_ = l_Lean_Float_toJson(v___x_2098_);
v___x_2100_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2100_, 0, v___x_2097_);
lean_ctor_set(v___x_2100_, 1, v___x_2099_);
v___x_2101_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__8));
lean_inc(v_num_2081_);
v___x_2102_ = lp_choreo_Choreo_jInt(v_num_2081_);
v___x_2103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2103_, 0, v___x_2101_);
lean_ctor_set(v___x_2103_, 1, v___x_2102_);
v___x_2104_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__9));
lean_inc(v_den_2082_);
v___x_2105_ = l_Lean_JsonNumber_fromNat(v_den_2082_);
v___x_2106_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2106_, 0, v___x_2105_);
v___x_2107_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2107_, 0, v___x_2104_);
lean_ctor_set(v___x_2107_, 1, v___x_2106_);
v___x_2108_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__10));
lean_inc(v_ph_2083_);
v___x_2109_ = lp_choreo_Choreo_secondsAt(v_c_2073_, v_ph_2083_, v_t_2077_);
v___x_2110_ = l_Lean_Float_toJson(v___x_2109_);
v___x_2111_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2111_, 0, v___x_2108_);
lean_ctor_set(v___x_2111_, 1, v___x_2110_);
v___x_2112_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__11));
v___x_2113_ = lp_choreo_Choreo_Phase_path(v_ph_2083_, v_i_2079_);
v___x_2114_ = lp_choreo_Choreo_Phase_path(v_ph_2083_, v_j_2080_);
lean_dec(v_ph_2083_);
v___x_2115_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v___x_2113_, v___x_2114_, v_t_2077_);
v___x_2116_ = lp_choreo_Choreo_distFloat(v___x_2115_);
v___x_2117_ = l_Lean_Float_toJson(v___x_2116_);
v___x_2118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2118_, 0, v___x_2112_);
lean_ctor_set(v___x_2118_, 1, v___x_2117_);
v___x_2119_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2120_ = lp_choreo_Choreo_problemText(v_names_2075_, v_p_2076_);
v___x_2121_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2121_, 0, v___x_2120_);
v___x_2122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2122_, 0, v___x_2119_);
lean_ctor_set(v___x_2122_, 1, v___x_2121_);
v___x_2123_ = lean_box(0);
v___x_2124_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2124_, 0, v___x_2122_);
lean_ctor_set(v___x_2124_, 1, v___x_2123_);
v___x_2125_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2125_, 0, v___x_2118_);
lean_ctor_set(v___x_2125_, 1, v___x_2124_);
v___x_2126_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2126_, 0, v___x_2111_);
lean_ctor_set(v___x_2126_, 1, v___x_2125_);
v___x_2127_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2127_, 0, v___x_2107_);
lean_ctor_set(v___x_2127_, 1, v___x_2126_);
v___x_2128_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2128_, 0, v___x_2103_);
lean_ctor_set(v___x_2128_, 1, v___x_2127_);
v___x_2129_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2129_, 0, v___x_2100_);
lean_ctor_set(v___x_2129_, 1, v___x_2128_);
v___x_2130_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2130_, 0, v___x_2096_);
lean_ctor_set(v___x_2130_, 1, v___x_2129_);
v___x_2131_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2131_, 0, v___x_2092_);
lean_ctor_set(v___x_2131_, 1, v___x_2130_);
v___x_2132_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2132_, 0, v___x_2088_);
lean_ctor_set(v___x_2132_, 1, v___x_2131_);
v___x_2133_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2133_, 0, v___x_2084_);
lean_ctor_set(v___x_2133_, 1, v___x_2132_);
v___x_2134_ = l_Lean_Json_mkObj(v___x_2133_);
lean_dec_ref_known(v___x_2133_, 2);
return v___x_2134_;
}
case 1:
{
lean_object* v_phase_2135_; lean_object* v_i_2136_; lean_object* v_t_2137_; lean_object* v_ph_2138_; lean_object* v___x_2139_; lean_object* v___x_2140_; lean_object* v___x_2141_; lean_object* v___x_2142_; lean_object* v___x_2143_; lean_object* v___x_2144_; lean_object* v___x_2145_; lean_object* v___x_2146_; lean_object* v___x_2147_; lean_object* v___x_2148_; double v___x_2149_; lean_object* v___x_2150_; lean_object* v___x_2151_; lean_object* v___x_2152_; double v___x_2153_; lean_object* v___x_2154_; lean_object* v___x_2155_; lean_object* v___x_2156_; lean_object* v___x_2157_; lean_object* v___x_2158_; lean_object* v___x_2159_; lean_object* v___x_2160_; lean_object* v___x_2161_; lean_object* v___x_2162_; lean_object* v___x_2163_; lean_object* v___x_2164_; lean_object* v___x_2165_; lean_object* v___x_2166_; lean_object* v___x_2167_; 
v_phase_2135_ = lean_ctor_get(v_p_2076_, 0);
v_i_2136_ = lean_ctor_get(v_p_2076_, 1);
v_t_2137_ = lean_ctor_get(v_p_2076_, 2);
lean_inc_n(v_phase_2135_, 2);
v_ph_2138_ = lp_choreo_Choreo_problemJson___lam__0(v_phases_2074_, v_phase_2135_);
v___x_2139_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__15));
v___x_2140_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_2141_ = l_Lean_JsonNumber_fromNat(v_phase_2135_);
v___x_2142_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2142_, 0, v___x_2141_);
v___x_2143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2143_, 0, v___x_2140_);
lean_ctor_set(v___x_2143_, 1, v___x_2142_);
v___x_2144_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc(v_i_2136_);
v___x_2145_ = l_Lean_JsonNumber_fromNat(v_i_2136_);
v___x_2146_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2146_, 0, v___x_2145_);
v___x_2147_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2147_, 0, v___x_2144_);
lean_ctor_set(v___x_2147_, 1, v___x_2146_);
v___x_2148_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc_ref_n(v_t_2137_, 2);
v___x_2149_ = lp_choreo_Choreo_ratFloat(v_t_2137_);
v___x_2150_ = l_Lean_Float_toJson(v___x_2149_);
v___x_2151_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2151_, 0, v___x_2148_);
lean_ctor_set(v___x_2151_, 1, v___x_2150_);
v___x_2152_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__10));
v___x_2153_ = lp_choreo_Choreo_secondsAt(v_c_2073_, v_ph_2138_, v_t_2137_);
v___x_2154_ = l_Lean_Float_toJson(v___x_2153_);
v___x_2155_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2155_, 0, v___x_2152_);
lean_ctor_set(v___x_2155_, 1, v___x_2154_);
v___x_2156_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2157_ = lp_choreo_Choreo_problemText(v_names_2075_, v_p_2076_);
v___x_2158_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2158_, 0, v___x_2157_);
v___x_2159_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2159_, 0, v___x_2156_);
lean_ctor_set(v___x_2159_, 1, v___x_2158_);
v___x_2160_ = lean_box(0);
v___x_2161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2161_, 0, v___x_2159_);
lean_ctor_set(v___x_2161_, 1, v___x_2160_);
v___x_2162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2162_, 0, v___x_2155_);
lean_ctor_set(v___x_2162_, 1, v___x_2161_);
v___x_2163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2163_, 0, v___x_2151_);
lean_ctor_set(v___x_2163_, 1, v___x_2162_);
v___x_2164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2164_, 0, v___x_2147_);
lean_ctor_set(v___x_2164_, 1, v___x_2163_);
v___x_2165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2165_, 0, v___x_2143_);
lean_ctor_set(v___x_2165_, 1, v___x_2164_);
v___x_2166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2166_, 0, v___x_2139_);
lean_ctor_set(v___x_2166_, 1, v___x_2165_);
v___x_2167_ = l_Lean_Json_mkObj(v___x_2166_);
lean_dec_ref_known(v___x_2166_, 2);
return v___x_2167_;
}
case 2:
{
lean_object* v_phase_2168_; lean_object* v_i_2169_; lean_object* v___x_2170_; lean_object* v___x_2171_; lean_object* v___x_2172_; lean_object* v___x_2173_; lean_object* v___x_2174_; lean_object* v___x_2175_; lean_object* v___x_2176_; lean_object* v___x_2177_; lean_object* v___x_2178_; lean_object* v___x_2179_; lean_object* v___x_2180_; lean_object* v___x_2181_; lean_object* v___x_2182_; lean_object* v___x_2183_; lean_object* v___x_2184_; lean_object* v___x_2185_; lean_object* v___x_2186_; lean_object* v___x_2187_; lean_object* v___x_2188_; 
lean_dec_ref(v_c_2073_);
v_phase_2168_ = lean_ctor_get(v_p_2076_, 0);
v_i_2169_ = lean_ctor_get(v_p_2076_, 1);
v___x_2170_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__18));
v___x_2171_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_phase_2168_);
v___x_2172_ = l_Lean_JsonNumber_fromNat(v_phase_2168_);
v___x_2173_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2173_, 0, v___x_2172_);
v___x_2174_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2174_, 0, v___x_2171_);
lean_ctor_set(v___x_2174_, 1, v___x_2173_);
v___x_2175_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc(v_i_2169_);
v___x_2176_ = l_Lean_JsonNumber_fromNat(v_i_2169_);
v___x_2177_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2177_, 0, v___x_2176_);
v___x_2178_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2178_, 0, v___x_2175_);
lean_ctor_set(v___x_2178_, 1, v___x_2177_);
v___x_2179_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2180_ = lp_choreo_Choreo_problemText(v_names_2075_, v_p_2076_);
v___x_2181_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2181_, 0, v___x_2180_);
v___x_2182_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2182_, 0, v___x_2179_);
lean_ctor_set(v___x_2182_, 1, v___x_2181_);
v___x_2183_ = lean_box(0);
v___x_2184_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2184_, 0, v___x_2182_);
lean_ctor_set(v___x_2184_, 1, v___x_2183_);
v___x_2185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2185_, 0, v___x_2178_);
lean_ctor_set(v___x_2185_, 1, v___x_2184_);
v___x_2186_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2186_, 0, v___x_2174_);
lean_ctor_set(v___x_2186_, 1, v___x_2185_);
v___x_2187_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2187_, 0, v___x_2170_);
lean_ctor_set(v___x_2187_, 1, v___x_2186_);
v___x_2188_ = l_Lean_Json_mkObj(v___x_2187_);
lean_dec_ref_known(v___x_2187_, 2);
return v___x_2188_;
}
case 3:
{
lean_object* v_phase_2189_; lean_object* v_i_2190_; lean_object* v_j_2191_; lean_object* v___x_2192_; lean_object* v___x_2193_; lean_object* v___x_2194_; lean_object* v___x_2195_; lean_object* v___x_2196_; lean_object* v___x_2197_; lean_object* v___x_2198_; lean_object* v___x_2199_; lean_object* v___x_2200_; lean_object* v___x_2201_; lean_object* v___x_2202_; lean_object* v___x_2203_; lean_object* v___x_2204_; lean_object* v___x_2205_; lean_object* v___x_2206_; lean_object* v___x_2207_; lean_object* v___x_2208_; lean_object* v___x_2209_; lean_object* v___x_2210_; lean_object* v___x_2211_; lean_object* v___x_2212_; lean_object* v___x_2213_; lean_object* v___x_2214_; lean_object* v___x_2215_; 
lean_dec_ref(v_c_2073_);
v_phase_2189_ = lean_ctor_get(v_p_2076_, 0);
v_i_2190_ = lean_ctor_get(v_p_2076_, 1);
v_j_2191_ = lean_ctor_get(v_p_2076_, 2);
v___x_2192_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__21));
v___x_2193_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_phase_2189_);
v___x_2194_ = l_Lean_JsonNumber_fromNat(v_phase_2189_);
v___x_2195_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2195_, 0, v___x_2194_);
v___x_2196_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2196_, 0, v___x_2193_);
lean_ctor_set(v___x_2196_, 1, v___x_2195_);
v___x_2197_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
lean_inc(v_i_2190_);
v___x_2198_ = l_Lean_JsonNumber_fromNat(v_i_2190_);
v___x_2199_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2199_, 0, v___x_2198_);
v___x_2200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2200_, 0, v___x_2197_);
lean_ctor_set(v___x_2200_, 1, v___x_2199_);
v___x_2201_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
lean_inc(v_j_2191_);
v___x_2202_ = l_Lean_JsonNumber_fromNat(v_j_2191_);
v___x_2203_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2203_, 0, v___x_2202_);
v___x_2204_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2204_, 0, v___x_2201_);
lean_ctor_set(v___x_2204_, 1, v___x_2203_);
v___x_2205_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2206_ = lp_choreo_Choreo_problemText(v_names_2075_, v_p_2076_);
v___x_2207_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2207_, 0, v___x_2206_);
v___x_2208_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2208_, 0, v___x_2205_);
lean_ctor_set(v___x_2208_, 1, v___x_2207_);
v___x_2209_ = lean_box(0);
v___x_2210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2210_, 0, v___x_2208_);
lean_ctor_set(v___x_2210_, 1, v___x_2209_);
v___x_2211_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2211_, 0, v___x_2204_);
lean_ctor_set(v___x_2211_, 1, v___x_2210_);
v___x_2212_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2212_, 0, v___x_2200_);
lean_ctor_set(v___x_2212_, 1, v___x_2211_);
v___x_2213_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2213_, 0, v___x_2196_);
lean_ctor_set(v___x_2213_, 1, v___x_2212_);
v___x_2214_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2214_, 0, v___x_2192_);
lean_ctor_set(v___x_2214_, 1, v___x_2213_);
v___x_2215_ = l_Lean_Json_mkObj(v___x_2214_);
lean_dec_ref_known(v___x_2214_, 2);
return v___x_2215_;
}
default: 
{
lean_object* v_phase_2216_; lean_object* v_why_2217_; lean_object* v___x_2219_; uint8_t v_isShared_2220_; uint8_t v_isSharedCheck_2236_; 
lean_dec_ref(v_names_2075_);
lean_dec_ref(v_c_2073_);
v_phase_2216_ = lean_ctor_get(v_p_2076_, 0);
v_why_2217_ = lean_ctor_get(v_p_2076_, 1);
v_isSharedCheck_2236_ = !lean_is_exclusive(v_p_2076_);
if (v_isSharedCheck_2236_ == 0)
{
v___x_2219_ = v_p_2076_;
v_isShared_2220_ = v_isSharedCheck_2236_;
goto v_resetjp_2218_;
}
else
{
lean_inc(v_why_2217_);
lean_inc(v_phase_2216_);
lean_dec(v_p_2076_);
v___x_2219_ = lean_box(0);
v_isShared_2220_ = v_isSharedCheck_2236_;
goto v_resetjp_2218_;
}
v_resetjp_2218_:
{
lean_object* v___x_2221_; lean_object* v___x_2222_; lean_object* v___x_2223_; lean_object* v___x_2224_; lean_object* v___x_2226_; 
v___x_2221_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__24));
v___x_2222_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_2223_ = l_Lean_JsonNumber_fromNat(v_phase_2216_);
v___x_2224_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2224_, 0, v___x_2223_);
if (v_isShared_2220_ == 0)
{
lean_ctor_set_tag(v___x_2219_, 0);
lean_ctor_set(v___x_2219_, 1, v___x_2224_);
lean_ctor_set(v___x_2219_, 0, v___x_2222_);
v___x_2226_ = v___x_2219_;
goto v_reusejp_2225_;
}
else
{
lean_object* v_reuseFailAlloc_2235_; 
v_reuseFailAlloc_2235_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2235_, 0, v___x_2222_);
lean_ctor_set(v_reuseFailAlloc_2235_, 1, v___x_2224_);
v___x_2226_ = v_reuseFailAlloc_2235_;
goto v_reusejp_2225_;
}
v_reusejp_2225_:
{
lean_object* v___x_2227_; lean_object* v___x_2228_; lean_object* v___x_2229_; lean_object* v___x_2230_; lean_object* v___x_2231_; lean_object* v___x_2232_; lean_object* v___x_2233_; lean_object* v___x_2234_; 
v___x_2227_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_2228_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2228_, 0, v_why_2217_);
v___x_2229_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2229_, 0, v___x_2227_);
lean_ctor_set(v___x_2229_, 1, v___x_2228_);
v___x_2230_ = lean_box(0);
v___x_2231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2231_, 0, v___x_2229_);
lean_ctor_set(v___x_2231_, 1, v___x_2230_);
v___x_2232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2232_, 0, v___x_2226_);
lean_ctor_set(v___x_2232_, 1, v___x_2231_);
v___x_2233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2233_, 0, v___x_2221_);
lean_ctor_set(v___x_2233_, 1, v___x_2232_);
v___x_2234_ = l_Lean_Json_mkObj(v___x_2233_);
lean_dec_ref_known(v___x_2233_, 2);
return v___x_2234_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_problemJson___boxed(lean_object* v_c_2237_, lean_object* v_phases_2238_, lean_object* v_names_2239_, lean_object* v_p_2240_){
_start:
{
lean_object* v_res_2241_; 
v_res_2241_ = lp_choreo_Choreo_problemJson(v_c_2237_, v_phases_2238_, v_names_2239_, v_p_2240_);
lean_dec(v_phases_2238_);
return v_res_2241_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(lean_object* v_ph_2242_, lean_object* v_a_2243_, lean_object* v_a_2244_, lean_object* v_as_x27_2245_, lean_object* v_b_2246_){
_start:
{
if (lean_obj_tag(v_as_x27_2245_) == 0)
{
lean_dec(v_a_2244_);
lean_dec(v_a_2243_);
return v_b_2246_;
}
else
{
lean_object* v_snd_2247_; lean_object* v_head_2248_; lean_object* v_tail_2249_; lean_object* v_snd_2250_; lean_object* v___x_2252_; uint8_t v_isShared_2253_; uint8_t v_isSharedCheck_2272_; 
v_snd_2247_ = lean_ctor_get(v_b_2246_, 1);
lean_inc(v_snd_2247_);
v_head_2248_ = lean_ctor_get(v_as_x27_2245_, 0);
v_tail_2249_ = lean_ctor_get(v_as_x27_2245_, 1);
v_snd_2250_ = lean_ctor_get(v_snd_2247_, 1);
v_isSharedCheck_2272_ = !lean_is_exclusive(v_snd_2247_);
if (v_isSharedCheck_2272_ == 0)
{
lean_object* v_unused_2273_; 
v_unused_2273_ = lean_ctor_get(v_snd_2247_, 0);
lean_dec(v_unused_2273_);
v___x_2252_ = v_snd_2247_;
v_isShared_2253_ = v_isSharedCheck_2272_;
goto v_resetjp_2251_;
}
else
{
lean_inc(v_snd_2250_);
lean_dec(v_snd_2247_);
v___x_2252_ = lean_box(0);
v_isShared_2253_ = v_isSharedCheck_2272_;
goto v_resetjp_2251_;
}
v_resetjp_2251_:
{
lean_object* v___x_2254_; lean_object* v___x_2255_; lean_object* v___x_2256_; uint8_t v___x_2257_; 
lean_inc(v_a_2243_);
v___x_2254_ = lp_choreo_Choreo_Phase_path(v_ph_2242_, v_a_2243_);
lean_inc(v_a_2244_);
v___x_2255_ = lp_choreo_Choreo_Phase_path(v_ph_2242_, v_a_2244_);
lean_inc(v_head_2248_);
v___x_2256_ = lp_choreo_Choreo_dist2___at___00Choreo_clearanceAt_spec__0(v___x_2254_, v___x_2255_, v_head_2248_);
lean_inc_ref(v___x_2256_);
v___x_2257_ = l_Rat_blt(v___x_2256_, v_snd_2250_);
if (v___x_2257_ == 0)
{
lean_dec_ref(v___x_2256_);
lean_del_object(v___x_2252_);
v_as_x27_2245_ = v_tail_2249_;
goto _start;
}
else
{
lean_object* v___x_2260_; uint8_t v_isShared_2261_; uint8_t v_isSharedCheck_2269_; 
v_isSharedCheck_2269_ = !lean_is_exclusive(v_b_2246_);
if (v_isSharedCheck_2269_ == 0)
{
lean_object* v_unused_2270_; lean_object* v_unused_2271_; 
v_unused_2270_ = lean_ctor_get(v_b_2246_, 1);
lean_dec(v_unused_2270_);
v_unused_2271_ = lean_ctor_get(v_b_2246_, 0);
lean_dec(v_unused_2271_);
v___x_2260_ = v_b_2246_;
v_isShared_2261_ = v_isSharedCheck_2269_;
goto v_resetjp_2259_;
}
else
{
lean_dec(v_b_2246_);
v___x_2260_ = lean_box(0);
v_isShared_2261_ = v_isSharedCheck_2269_;
goto v_resetjp_2259_;
}
v_resetjp_2259_:
{
lean_object* v___x_2263_; 
lean_inc(v_a_2244_);
if (v_isShared_2253_ == 0)
{
lean_ctor_set(v___x_2252_, 1, v___x_2256_);
lean_ctor_set(v___x_2252_, 0, v_a_2244_);
v___x_2263_ = v___x_2252_;
goto v_reusejp_2262_;
}
else
{
lean_object* v_reuseFailAlloc_2268_; 
v_reuseFailAlloc_2268_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2268_, 0, v_a_2244_);
lean_ctor_set(v_reuseFailAlloc_2268_, 1, v___x_2256_);
v___x_2263_ = v_reuseFailAlloc_2268_;
goto v_reusejp_2262_;
}
v_reusejp_2262_:
{
lean_object* v___x_2265_; 
lean_inc(v_a_2243_);
if (v_isShared_2261_ == 0)
{
lean_ctor_set(v___x_2260_, 1, v___x_2263_);
lean_ctor_set(v___x_2260_, 0, v_a_2243_);
v___x_2265_ = v___x_2260_;
goto v_reusejp_2264_;
}
else
{
lean_object* v_reuseFailAlloc_2267_; 
v_reuseFailAlloc_2267_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2267_, 0, v_a_2243_);
lean_ctor_set(v_reuseFailAlloc_2267_, 1, v___x_2263_);
v___x_2265_ = v_reuseFailAlloc_2267_;
goto v_reusejp_2264_;
}
v_reusejp_2264_:
{
v_as_x27_2245_ = v_tail_2249_;
v_b_2246_ = v___x_2265_;
goto _start;
}
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg___boxed(lean_object* v_ph_2274_, lean_object* v_a_2275_, lean_object* v_a_2276_, lean_object* v_as_x27_2277_, lean_object* v_b_2278_){
_start:
{
lean_object* v_res_2279_; 
v_res_2279_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(v_ph_2274_, v_a_2275_, v_a_2276_, v_as_x27_2277_, v_b_2278_);
lean_dec(v_as_x27_2277_);
lean_dec_ref(v_ph_2274_);
return v_res_2279_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0(void){
_start:
{
lean_object* v___x_2280_; lean_object* v___x_2281_; 
v___x_2280_ = lean_unsigned_to_nat(8u);
v___x_2281_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_2280_);
return v___x_2281_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0(lean_object* v_a_2282_, lean_object* v_a_2283_){
_start:
{
if (lean_obj_tag(v_a_2282_) == 0)
{
lean_object* v___x_2284_; 
v___x_2284_ = l_List_reverse___redArg(v_a_2283_);
return v___x_2284_;
}
else
{
lean_object* v_head_2285_; lean_object* v_tail_2286_; lean_object* v___x_2288_; uint8_t v_isShared_2289_; uint8_t v_isSharedCheck_2298_; 
v_head_2285_ = lean_ctor_get(v_a_2282_, 0);
v_tail_2286_ = lean_ctor_get(v_a_2282_, 1);
v_isSharedCheck_2298_ = !lean_is_exclusive(v_a_2282_);
if (v_isSharedCheck_2298_ == 0)
{
v___x_2288_ = v_a_2282_;
v_isShared_2289_ = v_isSharedCheck_2298_;
goto v_resetjp_2287_;
}
else
{
lean_inc(v_tail_2286_);
lean_inc(v_head_2285_);
lean_dec(v_a_2282_);
v___x_2288_ = lean_box(0);
v_isShared_2289_ = v_isSharedCheck_2298_;
goto v_resetjp_2287_;
}
v_resetjp_2287_:
{
lean_object* v___x_2290_; lean_object* v___x_2291_; lean_object* v___x_2292_; lean_object* v___x_2293_; lean_object* v___x_2295_; 
v___x_2290_ = lean_nat_to_int(v_head_2285_);
v___x_2291_ = l_Rat_ofInt(v___x_2290_);
v___x_2292_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0);
v___x_2293_ = l_Rat_div(v___x_2291_, v___x_2292_);
lean_dec_ref(v___x_2291_);
if (v_isShared_2289_ == 0)
{
lean_ctor_set(v___x_2288_, 1, v_a_2283_);
lean_ctor_set(v___x_2288_, 0, v___x_2293_);
v___x_2295_ = v___x_2288_;
goto v_reusejp_2294_;
}
else
{
lean_object* v_reuseFailAlloc_2297_; 
v_reuseFailAlloc_2297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2297_, 0, v___x_2293_);
lean_ctor_set(v_reuseFailAlloc_2297_, 1, v_a_2283_);
v___x_2295_ = v_reuseFailAlloc_2297_;
goto v_reusejp_2294_;
}
v_reusejp_2294_:
{
v_a_2282_ = v_tail_2286_;
v_a_2283_ = v___x_2295_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_tightestPair_spec__0(lean_object* v_a_2299_, lean_object* v_a_2300_){
_start:
{
if (lean_obj_tag(v_a_2299_) == 0)
{
lean_object* v___x_2301_; 
v___x_2301_ = l_List_reverse___redArg(v_a_2300_);
return v___x_2301_;
}
else
{
lean_object* v_head_2302_; lean_object* v_tail_2303_; lean_object* v___x_2305_; uint8_t v_isShared_2306_; uint8_t v_isSharedCheck_2315_; 
v_head_2302_ = lean_ctor_get(v_a_2299_, 0);
v_tail_2303_ = lean_ctor_get(v_a_2299_, 1);
v_isSharedCheck_2315_ = !lean_is_exclusive(v_a_2299_);
if (v_isSharedCheck_2315_ == 0)
{
v___x_2305_ = v_a_2299_;
v_isShared_2306_ = v_isSharedCheck_2315_;
goto v_resetjp_2304_;
}
else
{
lean_inc(v_tail_2303_);
lean_inc(v_head_2302_);
lean_dec(v_a_2299_);
v___x_2305_ = lean_box(0);
v_isShared_2306_ = v_isSharedCheck_2315_;
goto v_resetjp_2304_;
}
v_resetjp_2304_:
{
lean_object* v___x_2307_; lean_object* v___x_2308_; lean_object* v___x_2309_; lean_object* v___x_2310_; lean_object* v___x_2312_; 
v___x_2307_ = lean_nat_to_int(v_head_2302_);
v___x_2308_ = l_Rat_ofInt(v___x_2307_);
v___x_2309_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0, &lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0___closed__0);
v___x_2310_ = l_Rat_div(v___x_2308_, v___x_2309_);
lean_dec_ref(v___x_2308_);
if (v_isShared_2306_ == 0)
{
lean_ctor_set(v___x_2305_, 1, v_a_2300_);
lean_ctor_set(v___x_2305_, 0, v___x_2310_);
v___x_2312_ = v___x_2305_;
goto v_reusejp_2311_;
}
else
{
lean_object* v_reuseFailAlloc_2314_; 
v_reuseFailAlloc_2314_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2314_, 0, v___x_2310_);
lean_ctor_set(v_reuseFailAlloc_2314_, 1, v_a_2300_);
v___x_2312_ = v_reuseFailAlloc_2314_;
goto v_reusejp_2311_;
}
v_reusejp_2311_:
{
lean_object* v___x_2313_; 
v___x_2313_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_tightestPair_spec__0_spec__0(v_tail_2303_, v___x_2312_);
return v___x_2313_;
}
}
}
}
}
static lean_object* _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0(void){
_start:
{
lean_object* v___x_2316_; lean_object* v___x_2317_; 
v___x_2316_ = lean_unsigned_to_nat(9u);
v___x_2317_ = l_List_range(v___x_2316_);
return v___x_2317_;
}
}
static lean_object* _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1(void){
_start:
{
lean_object* v___x_2318_; lean_object* v___x_2319_; lean_object* v_times_2320_; 
v___x_2318_ = lean_box(0);
v___x_2319_ = lean_obj_once(&lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0, &lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0_once, _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__0);
v_times_2320_ = lp_choreo_List_mapTR_loop___at___00Choreo_tightestPair_spec__0(v___x_2319_, v___x_2318_);
return v_times_2320_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(lean_object* v_ph_2321_, lean_object* v_a_2322_, lean_object* v_as_x27_2323_, lean_object* v_b_2324_){
_start:
{
if (lean_obj_tag(v_as_x27_2323_) == 0)
{
lean_dec(v_a_2322_);
return v_b_2324_;
}
else
{
lean_object* v_head_2325_; lean_object* v_tail_2326_; lean_object* v_times_2327_; lean_object* v___x_2328_; 
v_head_2325_ = lean_ctor_get(v_as_x27_2323_, 0);
v_tail_2326_ = lean_ctor_get(v_as_x27_2323_, 1);
v_times_2327_ = lean_obj_once(&lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1, &lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1_once, _init_lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___closed__1);
lean_inc(v_head_2325_);
lean_inc(v_a_2322_);
v___x_2328_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(v_ph_2321_, v_a_2322_, v_head_2325_, v_times_2327_, v_b_2324_);
v_as_x27_2323_ = v_tail_2326_;
v_b_2324_ = v___x_2328_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg___boxed(lean_object* v_ph_2330_, lean_object* v_a_2331_, lean_object* v_as_x27_2332_, lean_object* v_b_2333_){
_start:
{
lean_object* v_res_2334_; 
v_res_2334_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(v_ph_2330_, v_a_2331_, v_as_x27_2332_, v_b_2333_);
lean_dec(v_as_x27_2332_);
lean_dec_ref(v_ph_2330_);
return v_res_2334_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(lean_object* v_ph_2335_, lean_object* v_as_x27_2336_, lean_object* v_b_2337_){
_start:
{
if (lean_obj_tag(v_as_x27_2336_) == 0)
{
return v_b_2337_;
}
else
{
lean_object* v_head_2338_; lean_object* v_tail_2339_; lean_object* v___x_2340_; lean_object* v___x_2341_; 
v_head_2338_ = lean_ctor_get(v_as_x27_2336_, 0);
v_tail_2339_ = lean_ctor_get(v_as_x27_2336_, 1);
lean_inc_n(v_head_2338_, 2);
v___x_2340_ = l_List_range(v_head_2338_);
v___x_2341_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(v_ph_2335_, v_head_2338_, v___x_2340_, v_b_2337_);
lean_dec(v___x_2340_);
v_as_x27_2336_ = v_tail_2339_;
v_b_2337_ = v___x_2341_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg___boxed(lean_object* v_ph_2343_, lean_object* v_as_x27_2344_, lean_object* v_b_2345_){
_start:
{
lean_object* v_res_2346_; 
v_res_2346_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(v_ph_2343_, v_as_x27_2344_, v_b_2345_);
lean_dec(v_as_x27_2344_);
lean_dec_ref(v_ph_2343_);
return v_res_2346_;
}
}
static lean_object* _init_lp_choreo_Choreo_tightestPair___closed__0(void){
_start:
{
lean_object* v___x_2347_; lean_object* v___x_2348_; 
v___x_2347_ = lean_cstr_to_nat("1000000000000");
v___x_2348_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_2347_);
return v___x_2348_;
}
}
static lean_object* _init_lp_choreo_Choreo_tightestPair___closed__1(void){
_start:
{
lean_object* v___x_2349_; lean_object* v___x_2350_; lean_object* v___x_2351_; 
v___x_2349_ = lean_obj_once(&lp_choreo_Choreo_tightestPair___closed__0, &lp_choreo_Choreo_tightestPair___closed__0_once, _init_lp_choreo_Choreo_tightestPair___closed__0);
v___x_2350_ = lean_unsigned_to_nat(0u);
v___x_2351_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2351_, 0, v___x_2350_);
lean_ctor_set(v___x_2351_, 1, v___x_2349_);
return v___x_2351_;
}
}
static lean_object* _init_lp_choreo_Choreo_tightestPair___closed__2(void){
_start:
{
lean_object* v___x_2352_; lean_object* v___x_2353_; lean_object* v_best_2354_; 
v___x_2352_ = lean_obj_once(&lp_choreo_Choreo_tightestPair___closed__1, &lp_choreo_Choreo_tightestPair___closed__1_once, _init_lp_choreo_Choreo_tightestPair___closed__1);
v___x_2353_ = lean_unsigned_to_nat(1u);
v_best_2354_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_best_2354_, 0, v___x_2353_);
lean_ctor_set(v_best_2354_, 1, v___x_2352_);
return v_best_2354_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_tightestPair(lean_object* v_c_2355_, lean_object* v_ph_2356_){
_start:
{
lean_object* v_n_2357_; lean_object* v_best_2358_; lean_object* v___x_2359_; lean_object* v___x_2360_; 
v_n_2357_ = lean_ctor_get(v_c_2355_, 0);
lean_inc(v_n_2357_);
lean_dec_ref(v_c_2355_);
v_best_2358_ = lean_obj_once(&lp_choreo_Choreo_tightestPair___closed__2, &lp_choreo_Choreo_tightestPair___closed__2_once, _init_lp_choreo_Choreo_tightestPair___closed__2);
v___x_2359_ = l_List_range(v_n_2357_);
v___x_2360_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(v_ph_2356_, v___x_2359_, v_best_2358_);
lean_dec(v___x_2359_);
return v___x_2360_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_tightestPair___boxed(lean_object* v_c_2361_, lean_object* v_ph_2362_){
_start:
{
lean_object* v_res_2363_; 
v_res_2363_ = lp_choreo_Choreo_tightestPair(v_c_2361_, v_ph_2362_);
lean_dec_ref(v_ph_2362_);
return v_res_2363_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1(lean_object* v_ph_2364_, lean_object* v_a_2365_, lean_object* v_a_2366_, lean_object* v_as_2367_, lean_object* v_as_x27_2368_, lean_object* v_b_2369_, lean_object* v_a_2370_){
_start:
{
lean_object* v___x_2371_; 
v___x_2371_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___redArg(v_ph_2364_, v_a_2365_, v_a_2366_, v_as_x27_2368_, v_b_2369_);
return v___x_2371_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1___boxed(lean_object* v_ph_2372_, lean_object* v_a_2373_, lean_object* v_a_2374_, lean_object* v_as_2375_, lean_object* v_as_x27_2376_, lean_object* v_b_2377_, lean_object* v_a_2378_){
_start:
{
lean_object* v_res_2379_; 
v_res_2379_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__1(v_ph_2372_, v_a_2373_, v_a_2374_, v_as_2375_, v_as_x27_2376_, v_b_2377_, v_a_2378_);
lean_dec(v_as_x27_2376_);
lean_dec(v_as_2375_);
lean_dec_ref(v_ph_2372_);
return v_res_2379_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2(lean_object* v_ph_2380_, lean_object* v_a_2381_, lean_object* v_as_2382_, lean_object* v_as_x27_2383_, lean_object* v_b_2384_, lean_object* v_a_2385_){
_start:
{
lean_object* v___x_2386_; 
v___x_2386_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___redArg(v_ph_2380_, v_a_2381_, v_as_x27_2383_, v_b_2384_);
return v___x_2386_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2___boxed(lean_object* v_ph_2387_, lean_object* v_a_2388_, lean_object* v_as_2389_, lean_object* v_as_x27_2390_, lean_object* v_b_2391_, lean_object* v_a_2392_){
_start:
{
lean_object* v_res_2393_; 
v_res_2393_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__2(v_ph_2387_, v_a_2388_, v_as_2389_, v_as_x27_2390_, v_b_2391_, v_a_2392_);
lean_dec(v_as_x27_2390_);
lean_dec(v_as_2389_);
lean_dec_ref(v_ph_2387_);
return v_res_2393_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3(lean_object* v_ph_2394_, lean_object* v_as_2395_, lean_object* v_as_x27_2396_, lean_object* v_b_2397_, lean_object* v_a_2398_){
_start:
{
lean_object* v___x_2399_; 
v___x_2399_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___redArg(v_ph_2394_, v_as_x27_2396_, v_b_2397_);
return v___x_2399_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3___boxed(lean_object* v_ph_2400_, lean_object* v_as_2401_, lean_object* v_as_x27_2402_, lean_object* v_b_2403_, lean_object* v_a_2404_){
_start:
{
lean_object* v_res_2405_; 
v_res_2405_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_tightestPair_spec__3(v_ph_2400_, v_as_2401_, v_as_x27_2402_, v_b_2403_, v_a_2404_);
lean_dec(v_as_x27_2402_);
lean_dec(v_as_2401_);
lean_dec_ref(v_ph_2400_);
return v_res_2405_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1(lean_object* v_a_2409_, lean_object* v_a_2410_){
_start:
{
if (lean_obj_tag(v_a_2409_) == 0)
{
lean_object* v___x_2411_; 
v___x_2411_ = l_List_reverse___redArg(v_a_2410_);
return v___x_2411_;
}
else
{
lean_object* v_head_2412_; lean_object* v_tail_2413_; lean_object* v___x_2415_; uint8_t v_isShared_2416_; uint8_t v_isSharedCheck_2439_; 
v_head_2412_ = lean_ctor_get(v_a_2409_, 0);
v_tail_2413_ = lean_ctor_get(v_a_2409_, 1);
v_isSharedCheck_2439_ = !lean_is_exclusive(v_a_2409_);
if (v_isSharedCheck_2439_ == 0)
{
v___x_2415_ = v_a_2409_;
v_isShared_2416_ = v_isSharedCheck_2439_;
goto v_resetjp_2414_;
}
else
{
lean_inc(v_tail_2413_);
lean_inc(v_head_2412_);
lean_dec(v_a_2409_);
v___x_2415_ = lean_box(0);
v_isShared_2416_ = v_isSharedCheck_2439_;
goto v_resetjp_2414_;
}
v_resetjp_2414_:
{
lean_object* v___x_2417_; lean_object* v___x_2418_; lean_object* v___x_2419_; lean_object* v___x_2420_; lean_object* v___x_2421_; lean_object* v___x_2422_; lean_object* v___x_2423_; lean_object* v___x_2424_; lean_object* v___x_2425_; lean_object* v___x_2426_; lean_object* v___x_2427_; lean_object* v___x_2428_; lean_object* v___x_2429_; lean_object* v___x_2430_; lean_object* v___x_2432_; 
v___x_2417_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__0));
v___x_2418_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__1));
v___x_2419_ = lean_box(0);
lean_inc(v_head_2412_);
v___x_2420_ = lp_choreo_Choreo_certName(v_head_2412_);
v___x_2421_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2421_, 0, v___x_2420_);
v___x_2422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2422_, 0, v___x_2417_);
lean_ctor_set(v___x_2422_, 1, v___x_2421_);
v___x_2423_ = lp_choreo_Choreo_certDepth(v_head_2412_);
v___x_2424_ = l_Lean_JsonNumber_fromNat(v___x_2423_);
v___x_2425_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2425_, 0, v___x_2424_);
v___x_2426_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2426_, 0, v___x_2418_);
lean_ctor_set(v___x_2426_, 1, v___x_2425_);
v___x_2427_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__2));
v___x_2428_ = lp_choreo_Choreo_certL(v_head_2412_);
v___x_2429_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2429_, 0, v___x_2428_);
v___x_2430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2430_, 0, v___x_2427_);
lean_ctor_set(v___x_2430_, 1, v___x_2429_);
if (v_isShared_2416_ == 0)
{
lean_ctor_set(v___x_2415_, 1, v___x_2419_);
lean_ctor_set(v___x_2415_, 0, v___x_2430_);
v___x_2432_ = v___x_2415_;
goto v_reusejp_2431_;
}
else
{
lean_object* v_reuseFailAlloc_2438_; 
v_reuseFailAlloc_2438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2438_, 0, v___x_2430_);
lean_ctor_set(v_reuseFailAlloc_2438_, 1, v___x_2419_);
v___x_2432_ = v_reuseFailAlloc_2438_;
goto v_reusejp_2431_;
}
v_reusejp_2431_:
{
lean_object* v___x_2433_; lean_object* v___x_2434_; lean_object* v___x_2435_; lean_object* v___x_2436_; 
v___x_2433_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2433_, 0, v___x_2426_);
lean_ctor_set(v___x_2433_, 1, v___x_2432_);
v___x_2434_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2434_, 0, v___x_2422_);
lean_ctor_set(v___x_2434_, 1, v___x_2433_);
v___x_2435_ = l_Lean_Json_mkObj(v___x_2434_);
lean_dec_ref_known(v___x_2434_, 2);
v___x_2436_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2436_, 0, v___x_2435_);
lean_ctor_set(v___x_2436_, 1, v_a_2410_);
v_a_2409_ = v_tail_2413_;
v_a_2410_ = v___x_2436_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__3(lean_object* v_a_2440_, lean_object* v_a_2441_){
_start:
{
if (lean_obj_tag(v_a_2440_) == 0)
{
lean_object* v___x_2442_; 
v___x_2442_ = l_List_reverse___redArg(v_a_2441_);
return v___x_2442_;
}
else
{
lean_object* v_head_2443_; 
v_head_2443_ = lean_ctor_get(v_a_2440_, 0);
if (lean_obj_tag(v_head_2443_) == 1)
{
lean_object* v_tail_2444_; lean_object* v___x_2446_; uint8_t v_isShared_2447_; uint8_t v_isSharedCheck_2452_; 
lean_inc_ref(v_head_2443_);
v_tail_2444_ = lean_ctor_get(v_a_2440_, 1);
v_isSharedCheck_2452_ = !lean_is_exclusive(v_a_2440_);
if (v_isSharedCheck_2452_ == 0)
{
lean_object* v_unused_2453_; 
v_unused_2453_ = lean_ctor_get(v_a_2440_, 0);
lean_dec(v_unused_2453_);
v___x_2446_ = v_a_2440_;
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
else
{
lean_inc(v_tail_2444_);
lean_dec(v_a_2440_);
v___x_2446_ = lean_box(0);
v_isShared_2447_ = v_isSharedCheck_2452_;
goto v_resetjp_2445_;
}
v_resetjp_2445_:
{
lean_object* v___x_2449_; 
if (v_isShared_2447_ == 0)
{
lean_ctor_set(v___x_2446_, 1, v_a_2441_);
v___x_2449_ = v___x_2446_;
goto v_reusejp_2448_;
}
else
{
lean_object* v_reuseFailAlloc_2451_; 
v_reuseFailAlloc_2451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2451_, 0, v_head_2443_);
lean_ctor_set(v_reuseFailAlloc_2451_, 1, v_a_2441_);
v___x_2449_ = v_reuseFailAlloc_2451_;
goto v_reusejp_2448_;
}
v_reusejp_2448_:
{
v_a_2440_ = v_tail_2444_;
v_a_2441_ = v___x_2449_;
goto _start;
}
}
}
else
{
lean_object* v_tail_2454_; 
v_tail_2454_ = lean_ctor_get(v_a_2440_, 1);
lean_inc(v_tail_2454_);
lean_dec_ref_known(v_a_2440_, 2);
v_a_2440_ = v_tail_2454_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__2(lean_object* v_a_2456_, lean_object* v_a_2457_){
_start:
{
if (lean_obj_tag(v_a_2456_) == 0)
{
lean_object* v___x_2458_; 
v___x_2458_ = l_List_reverse___redArg(v_a_2457_);
return v___x_2458_;
}
else
{
lean_object* v_head_2459_; 
v_head_2459_ = lean_ctor_get(v_a_2456_, 0);
if (lean_obj_tag(v_head_2459_) == 2)
{
lean_object* v_tail_2460_; lean_object* v___x_2462_; uint8_t v_isShared_2463_; uint8_t v_isSharedCheck_2468_; 
lean_inc_ref(v_head_2459_);
v_tail_2460_ = lean_ctor_get(v_a_2456_, 1);
v_isSharedCheck_2468_ = !lean_is_exclusive(v_a_2456_);
if (v_isSharedCheck_2468_ == 0)
{
lean_object* v_unused_2469_; 
v_unused_2469_ = lean_ctor_get(v_a_2456_, 0);
lean_dec(v_unused_2469_);
v___x_2462_ = v_a_2456_;
v_isShared_2463_ = v_isSharedCheck_2468_;
goto v_resetjp_2461_;
}
else
{
lean_inc(v_tail_2460_);
lean_dec(v_a_2456_);
v___x_2462_ = lean_box(0);
v_isShared_2463_ = v_isSharedCheck_2468_;
goto v_resetjp_2461_;
}
v_resetjp_2461_:
{
lean_object* v___x_2465_; 
if (v_isShared_2463_ == 0)
{
lean_ctor_set(v___x_2462_, 1, v_a_2457_);
v___x_2465_ = v___x_2462_;
goto v_reusejp_2464_;
}
else
{
lean_object* v_reuseFailAlloc_2467_; 
v_reuseFailAlloc_2467_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2467_, 0, v_head_2459_);
lean_ctor_set(v_reuseFailAlloc_2467_, 1, v_a_2457_);
v___x_2465_ = v_reuseFailAlloc_2467_;
goto v_reusejp_2464_;
}
v_reusejp_2464_:
{
v_a_2456_ = v_tail_2460_;
v_a_2457_ = v___x_2465_;
goto _start;
}
}
}
else
{
lean_object* v_tail_2470_; 
v_tail_2470_ = lean_ctor_get(v_a_2456_, 1);
lean_inc(v_tail_2470_);
lean_dec_ref_known(v_a_2456_, 2);
v_a_2456_ = v_tail_2470_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0(lean_object* v_a_2475_, lean_object* v_a_2476_){
_start:
{
if (lean_obj_tag(v_a_2475_) == 0)
{
lean_object* v___x_2477_; 
v___x_2477_ = l_List_reverse___redArg(v_a_2476_);
return v___x_2477_;
}
else
{
lean_object* v_head_2478_; lean_object* v_tail_2479_; lean_object* v___x_2481_; uint8_t v_isShared_2482_; uint8_t v_isSharedCheck_2504_; 
v_head_2478_ = lean_ctor_get(v_a_2475_, 0);
v_tail_2479_ = lean_ctor_get(v_a_2475_, 1);
v_isSharedCheck_2504_ = !lean_is_exclusive(v_a_2475_);
if (v_isSharedCheck_2504_ == 0)
{
v___x_2481_ = v_a_2475_;
v_isShared_2482_ = v_isSharedCheck_2504_;
goto v_resetjp_2480_;
}
else
{
lean_inc(v_tail_2479_);
lean_inc(v_head_2478_);
lean_dec(v_a_2475_);
v___x_2481_ = lean_box(0);
v_isShared_2482_ = v_isSharedCheck_2504_;
goto v_resetjp_2480_;
}
v_resetjp_2480_:
{
lean_object* v_X_2483_; lean_object* v_Y_2484_; lean_object* v_W_2485_; lean_object* v___x_2486_; lean_object* v___x_2487_; lean_object* v___x_2488_; lean_object* v___x_2489_; lean_object* v___x_2490_; lean_object* v___x_2491_; lean_object* v___x_2492_; lean_object* v___x_2493_; lean_object* v___x_2494_; lean_object* v___x_2495_; lean_object* v___x_2497_; 
v_X_2483_ = lean_ctor_get(v_head_2478_, 0);
lean_inc(v_X_2483_);
v_Y_2484_ = lean_ctor_get(v_head_2478_, 1);
lean_inc(v_Y_2484_);
v_W_2485_ = lean_ctor_get(v_head_2478_, 2);
lean_inc(v_W_2485_);
lean_dec(v_head_2478_);
v___x_2486_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__0));
v___x_2487_ = lp_choreo_Choreo_jPoly(v_X_2483_);
v___x_2488_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2488_, 0, v___x_2486_);
lean_ctor_set(v___x_2488_, 1, v___x_2487_);
v___x_2489_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__1));
v___x_2490_ = lp_choreo_Choreo_jPoly(v_Y_2484_);
v___x_2491_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2491_, 0, v___x_2489_);
lean_ctor_set(v___x_2491_, 1, v___x_2490_);
v___x_2492_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__2));
v___x_2493_ = lp_choreo_Choreo_jPoly(v_W_2485_);
v___x_2494_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2494_, 0, v___x_2492_);
lean_ctor_set(v___x_2494_, 1, v___x_2493_);
v___x_2495_ = lean_box(0);
if (v_isShared_2482_ == 0)
{
lean_ctor_set(v___x_2481_, 1, v___x_2495_);
lean_ctor_set(v___x_2481_, 0, v___x_2494_);
v___x_2497_ = v___x_2481_;
goto v_reusejp_2496_;
}
else
{
lean_object* v_reuseFailAlloc_2503_; 
v_reuseFailAlloc_2503_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2503_, 0, v___x_2494_);
lean_ctor_set(v_reuseFailAlloc_2503_, 1, v___x_2495_);
v___x_2497_ = v_reuseFailAlloc_2503_;
goto v_reusejp_2496_;
}
v_reusejp_2496_:
{
lean_object* v___x_2498_; lean_object* v___x_2499_; lean_object* v___x_2500_; lean_object* v___x_2501_; 
v___x_2498_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2498_, 0, v___x_2491_);
lean_ctor_set(v___x_2498_, 1, v___x_2497_);
v___x_2499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2499_, 0, v___x_2488_);
lean_ctor_set(v___x_2499_, 1, v___x_2498_);
v___x_2500_ = l_Lean_Json_mkObj(v___x_2499_);
lean_dec_ref_known(v___x_2499_, 2);
v___x_2501_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2501_, 0, v___x_2500_);
lean_ctor_set(v___x_2501_, 1, v_a_2476_);
v_a_2475_ = v_tail_2479_;
v_a_2476_ = v___x_2501_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_phaseJson(lean_object* v_c_2520_, lean_object* v_names_2521_, lean_object* v_label_2522_, lean_object* v_kind_2523_, lean_object* v_ph_2524_, lean_object* v_k_2525_){
_start:
{
lean_object* v___x_2526_; lean_object* v_snd_2527_; lean_object* v_fst_2528_; lean_object* v___x_2530_; uint8_t v_isShared_2531_; uint8_t v_isSharedCheck_2659_; 
lean_inc_ref(v_c_2520_);
v___x_2526_ = lp_choreo_Choreo_tightestPair(v_c_2520_, v_ph_2524_);
v_snd_2527_ = lean_ctor_get(v___x_2526_, 1);
v_fst_2528_ = lean_ctor_get(v___x_2526_, 0);
v_isSharedCheck_2659_ = !lean_is_exclusive(v___x_2526_);
if (v_isSharedCheck_2659_ == 0)
{
v___x_2530_ = v___x_2526_;
v_isShared_2531_ = v_isSharedCheck_2659_;
goto v_resetjp_2529_;
}
else
{
lean_inc(v_snd_2527_);
lean_inc(v_fst_2528_);
lean_dec(v___x_2526_);
v___x_2530_ = lean_box(0);
v_isShared_2531_ = v_isSharedCheck_2659_;
goto v_resetjp_2529_;
}
v_resetjp_2529_:
{
lean_object* v_fst_2532_; lean_object* v_snd_2533_; lean_object* v___x_2535_; uint8_t v_isShared_2536_; uint8_t v_isSharedCheck_2658_; 
v_fst_2532_ = lean_ctor_get(v_snd_2527_, 0);
v_snd_2533_ = lean_ctor_get(v_snd_2527_, 1);
v_isSharedCheck_2658_ = !lean_is_exclusive(v_snd_2527_);
if (v_isSharedCheck_2658_ == 0)
{
v___x_2535_ = v_snd_2527_;
v_isShared_2536_ = v_isSharedCheck_2658_;
goto v_resetjp_2534_;
}
else
{
lean_inc(v_snd_2533_);
lean_inc(v_fst_2532_);
lean_dec(v_snd_2527_);
v___x_2535_ = lean_box(0);
v_isShared_2536_ = v_isSharedCheck_2658_;
goto v_resetjp_2534_;
}
v_resetjp_2534_:
{
lean_object* v_t0_2537_; lean_object* v_t1_2538_; lean_object* v_paths_2539_; lean_object* v_bounds_2540_; lean_object* v_certs_2541_; lean_object* v_cert_2542_; lean_object* v___x_2543_; lean_object* v___x_2544_; lean_object* v___x_2545_; lean_object* v_dmin_2546_; lean_object* v___x_2547_; lean_object* v___x_2548_; lean_object* v___x_2549_; lean_object* v___x_2550_; lean_object* v___x_2552_; 
v_t0_2537_ = lean_ctor_get(v_ph_2524_, 0);
v_t1_2538_ = lean_ctor_get(v_ph_2524_, 1);
v_paths_2539_ = lean_ctor_get(v_ph_2524_, 2);
v_bounds_2540_ = lean_ctor_get(v_ph_2524_, 3);
v_certs_2541_ = lean_ctor_get(v_ph_2524_, 4);
lean_inc(v_certs_2541_);
v_cert_2542_ = lp_choreo_Choreo_Phase_pairCert(v_ph_2524_, v_fst_2528_, v_fst_2532_);
lean_inc_n(v_fst_2528_, 2);
v___x_2543_ = l_Lean_JsonNumber_fromNat(v_fst_2528_);
lean_inc_n(v_fst_2532_, 2);
v___x_2544_ = l_Lean_JsonNumber_fromNat(v_fst_2532_);
lean_inc_ref(v_names_2521_);
v___x_2545_ = lean_apply_1(v_names_2521_, v_fst_2528_);
v_dmin_2546_ = lean_ctor_get(v_c_2520_, 1);
lean_inc(v_dmin_2546_);
v___x_2547_ = lean_apply_1(v_names_2521_, v_fst_2532_);
v___x_2548_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__0));
v___x_2549_ = l_Lean_JsonNumber_fromNat(v_k_2525_);
v___x_2550_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2550_, 0, v___x_2549_);
if (v_isShared_2536_ == 0)
{
lean_ctor_set(v___x_2535_, 1, v___x_2550_);
lean_ctor_set(v___x_2535_, 0, v___x_2548_);
v___x_2552_ = v___x_2535_;
goto v_reusejp_2551_;
}
else
{
lean_object* v_reuseFailAlloc_2657_; 
v_reuseFailAlloc_2657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2657_, 0, v___x_2548_);
lean_ctor_set(v_reuseFailAlloc_2657_, 1, v___x_2550_);
v___x_2552_ = v_reuseFailAlloc_2657_;
goto v_reusejp_2551_;
}
v_reusejp_2551_:
{
lean_object* v___x_2553_; lean_object* v___x_2554_; lean_object* v___x_2555_; lean_object* v___x_2557_; 
v___x_2553_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__1));
lean_inc(v_t0_2537_);
v___x_2554_ = l_Lean_JsonNumber_fromNat(v_t0_2537_);
v___x_2555_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2555_, 0, v___x_2554_);
if (v_isShared_2531_ == 0)
{
lean_ctor_set(v___x_2530_, 1, v___x_2555_);
lean_ctor_set(v___x_2530_, 0, v___x_2553_);
v___x_2557_ = v___x_2530_;
goto v_reusejp_2556_;
}
else
{
lean_object* v_reuseFailAlloc_2656_; 
v_reuseFailAlloc_2656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2656_, 0, v___x_2553_);
lean_ctor_set(v_reuseFailAlloc_2656_, 1, v___x_2555_);
v___x_2557_ = v_reuseFailAlloc_2656_;
goto v_reusejp_2556_;
}
v_reusejp_2556_:
{
lean_object* v___x_2558_; lean_object* v___x_2559_; lean_object* v___x_2560_; lean_object* v___x_2561_; lean_object* v___x_2562_; lean_object* v___x_2563_; lean_object* v___x_2564_; lean_object* v___x_2565_; lean_object* v___x_2566_; lean_object* v___x_2567_; lean_object* v___x_2568_; lean_object* v___x_2569_; lean_object* v___x_2570_; lean_object* v___x_2571_; lean_object* v___x_2572_; lean_object* v___x_2573_; lean_object* v___x_2574_; lean_object* v___x_2575_; lean_object* v___x_2576_; lean_object* v___x_2577_; uint8_t v___x_2578_; lean_object* v___x_2579_; lean_object* v___x_2580_; lean_object* v___x_2581_; lean_object* v___x_2582_; lean_object* v___x_2583_; lean_object* v___x_2584_; lean_object* v___x_2585_; lean_object* v___x_2586_; lean_object* v___x_2587_; lean_object* v___x_2588_; lean_object* v___x_2589_; lean_object* v___x_2590_; lean_object* v___x_2591_; lean_object* v___x_2592_; lean_object* v___x_2593_; lean_object* v___x_2594_; double v___x_2595_; lean_object* v___x_2596_; lean_object* v___x_2597_; lean_object* v___x_2598_; lean_object* v___x_2599_; lean_object* v___x_2600_; lean_object* v___x_2601_; lean_object* v___x_2602_; lean_object* v___x_2603_; lean_object* v___x_2604_; lean_object* v___x_2605_; lean_object* v___x_2606_; lean_object* v___x_2607_; lean_object* v___x_2608_; lean_object* v___x_2609_; lean_object* v___x_2610_; lean_object* v___x_2611_; lean_object* v___x_2612_; lean_object* v___x_2613_; lean_object* v___x_2614_; lean_object* v___x_2615_; lean_object* v___x_2616_; lean_object* v___x_2617_; lean_object* v___x_2618_; lean_object* v___x_2619_; lean_object* v___x_2620_; lean_object* v___x_2621_; lean_object* v___x_2622_; lean_object* v___x_2623_; lean_object* v___x_2624_; lean_object* v___x_2625_; lean_object* v___x_2626_; lean_object* v___x_2627_; lean_object* v___x_2628_; lean_object* v___x_2629_; lean_object* v___x_2630_; lean_object* v___x_2631_; lean_object* v___x_2632_; lean_object* v___x_2633_; lean_object* v___x_2634_; lean_object* v___x_2635_; lean_object* v___x_2636_; lean_object* v___x_2637_; lean_object* v___x_2638_; lean_object* v___x_2639_; lean_object* v___x_2640_; lean_object* v___x_2641_; lean_object* v___x_2642_; lean_object* v___x_2643_; lean_object* v___x_2644_; lean_object* v___x_2645_; lean_object* v___x_2646_; lean_object* v___x_2647_; lean_object* v___x_2648_; lean_object* v___x_2649_; lean_object* v___x_2650_; lean_object* v___x_2651_; lean_object* v___x_2652_; lean_object* v___x_2653_; lean_object* v___x_2654_; lean_object* v___x_2655_; 
v___x_2558_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__2));
lean_inc(v_t1_2538_);
v___x_2559_ = l_Lean_JsonNumber_fromNat(v_t1_2538_);
v___x_2560_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2560_, 0, v___x_2559_);
v___x_2561_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2561_, 0, v___x_2558_);
lean_ctor_set(v___x_2561_, 1, v___x_2560_);
v___x_2562_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__3));
v___x_2563_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2563_, 0, v_label_2522_);
v___x_2564_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2564_, 0, v___x_2562_);
lean_ctor_set(v___x_2564_, 1, v___x_2563_);
v___x_2565_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
v___x_2566_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2566_, 0, v_kind_2523_);
v___x_2567_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2567_, 0, v___x_2565_);
lean_ctor_set(v___x_2567_, 1, v___x_2566_);
v___x_2568_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__4));
lean_inc_ref(v_bounds_2540_);
v___x_2569_ = lp_choreo_Choreo_jRect(v_bounds_2540_);
v___x_2570_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2570_, 0, v___x_2568_);
lean_ctor_set(v___x_2570_, 1, v___x_2569_);
v___x_2571_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__5));
v___x_2572_ = lean_box(0);
lean_inc(v_paths_2539_);
v___x_2573_ = lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0(v_paths_2539_, v___x_2572_);
v___x_2574_ = lean_array_mk(v___x_2573_);
v___x_2575_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2575_, 0, v___x_2574_);
v___x_2576_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2576_, 0, v___x_2571_);
lean_ctor_set(v___x_2576_, 1, v___x_2575_);
v___x_2577_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
lean_inc_ref(v_ph_2524_);
v___x_2578_ = lp_choreo_Choreo_Phase_check(v_c_2520_, v_ph_2524_);
v___x_2579_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_2579_, 0, v___x_2578_);
v___x_2580_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2580_, 0, v___x_2577_);
lean_ctor_set(v___x_2580_, 1, v___x_2579_);
v___x_2581_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__7));
v___x_2582_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
v___x_2583_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2583_, 0, v___x_2543_);
v___x_2584_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2584_, 0, v___x_2582_);
lean_ctor_set(v___x_2584_, 1, v___x_2583_);
v___x_2585_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
v___x_2586_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2586_, 0, v___x_2544_);
v___x_2587_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2587_, 0, v___x_2585_);
lean_ctor_set(v___x_2587_, 1, v___x_2586_);
v___x_2588_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__8));
v___x_2589_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__9));
v___x_2590_ = lean_string_append(v___x_2545_, v___x_2589_);
v___x_2591_ = lean_string_append(v___x_2590_, v___x_2547_);
lean_dec_ref(v___x_2547_);
v___x_2592_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2592_, 0, v___x_2591_);
v___x_2593_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2593_, 0, v___x_2588_);
lean_ctor_set(v___x_2593_, 1, v___x_2592_);
v___x_2594_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__11));
v___x_2595_ = lp_choreo_Choreo_distFloat(v_snd_2533_);
v___x_2596_ = l_Lean_Float_toJson(v___x_2595_);
v___x_2597_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2597_, 0, v___x_2594_);
lean_ctor_set(v___x_2597_, 1, v___x_2596_);
v___x_2598_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__0));
lean_inc_ref(v_cert_2542_);
v___x_2599_ = lp_choreo_Choreo_certName(v_cert_2542_);
v___x_2600_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_2600_, 0, v___x_2599_);
v___x_2601_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2601_, 0, v___x_2598_);
lean_ctor_set(v___x_2601_, 1, v___x_2600_);
v___x_2602_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1___closed__1));
v___x_2603_ = lp_choreo_Choreo_certDepth(v_cert_2542_);
lean_dec_ref(v_cert_2542_);
v___x_2604_ = l_Lean_JsonNumber_fromNat(v___x_2603_);
v___x_2605_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2605_, 0, v___x_2604_);
v___x_2606_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2606_, 0, v___x_2602_);
lean_ctor_set(v___x_2606_, 1, v___x_2605_);
v___x_2607_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__10));
v___x_2608_ = lp_choreo_Choreo_Phase_path(v_ph_2524_, v_fst_2528_);
v___x_2609_ = lp_choreo_Choreo_Phase_path(v_ph_2524_, v_fst_2532_);
lean_dec_ref(v_ph_2524_);
v___x_2610_ = lp_choreo_Choreo_clearPoly(v___x_2608_, v___x_2609_, v_dmin_2546_);
lean_dec(v_dmin_2546_);
v___x_2611_ = lp_choreo_Choreo_jPoly(v___x_2610_);
v___x_2612_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2612_, 0, v___x_2607_);
lean_ctor_set(v___x_2612_, 1, v___x_2611_);
v___x_2613_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2613_, 0, v___x_2612_);
lean_ctor_set(v___x_2613_, 1, v___x_2572_);
v___x_2614_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2614_, 0, v___x_2606_);
lean_ctor_set(v___x_2614_, 1, v___x_2613_);
v___x_2615_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2615_, 0, v___x_2601_);
lean_ctor_set(v___x_2615_, 1, v___x_2614_);
v___x_2616_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2616_, 0, v___x_2597_);
lean_ctor_set(v___x_2616_, 1, v___x_2615_);
v___x_2617_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2617_, 0, v___x_2593_);
lean_ctor_set(v___x_2617_, 1, v___x_2616_);
v___x_2618_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2618_, 0, v___x_2587_);
lean_ctor_set(v___x_2618_, 1, v___x_2617_);
v___x_2619_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2619_, 0, v___x_2584_);
lean_ctor_set(v___x_2619_, 1, v___x_2618_);
v___x_2620_ = l_Lean_Json_mkObj(v___x_2619_);
lean_dec_ref_known(v___x_2619_, 2);
v___x_2621_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2621_, 0, v___x_2581_);
lean_ctor_set(v___x_2621_, 1, v___x_2620_);
v___x_2622_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__11));
lean_inc_n(v_certs_2541_, 2);
v___x_2623_ = lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__1(v_certs_2541_, v___x_2572_);
v___x_2624_ = lean_array_mk(v___x_2623_);
v___x_2625_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2625_, 0, v___x_2624_);
v___x_2626_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2626_, 0, v___x_2622_);
lean_ctor_set(v___x_2626_, 1, v___x_2625_);
v___x_2627_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__12));
v___x_2628_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__13));
v___x_2629_ = lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__2(v_certs_2541_, v___x_2572_);
v___x_2630_ = l_List_lengthTR___redArg(v___x_2629_);
lean_dec(v___x_2629_);
v___x_2631_ = l_Lean_JsonNumber_fromNat(v___x_2630_);
v___x_2632_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2632_, 0, v___x_2631_);
v___x_2633_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2633_, 0, v___x_2628_);
lean_ctor_set(v___x_2633_, 1, v___x_2632_);
v___x_2634_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__14));
v___x_2635_ = lp_choreo_List_filterTR_loop___at___00Choreo_phaseJson_spec__3(v_certs_2541_, v___x_2572_);
v___x_2636_ = l_List_lengthTR___redArg(v___x_2635_);
lean_dec(v___x_2635_);
v___x_2637_ = l_Lean_JsonNumber_fromNat(v___x_2636_);
v___x_2638_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2638_, 0, v___x_2637_);
v___x_2639_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2639_, 0, v___x_2634_);
lean_ctor_set(v___x_2639_, 1, v___x_2638_);
v___x_2640_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2640_, 0, v___x_2639_);
lean_ctor_set(v___x_2640_, 1, v___x_2572_);
v___x_2641_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2641_, 0, v___x_2633_);
lean_ctor_set(v___x_2641_, 1, v___x_2640_);
v___x_2642_ = l_Lean_Json_mkObj(v___x_2641_);
lean_dec_ref_known(v___x_2641_, 2);
v___x_2643_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2643_, 0, v___x_2627_);
lean_ctor_set(v___x_2643_, 1, v___x_2642_);
v___x_2644_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2644_, 0, v___x_2643_);
lean_ctor_set(v___x_2644_, 1, v___x_2572_);
v___x_2645_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2645_, 0, v___x_2626_);
lean_ctor_set(v___x_2645_, 1, v___x_2644_);
v___x_2646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2646_, 0, v___x_2621_);
lean_ctor_set(v___x_2646_, 1, v___x_2645_);
v___x_2647_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2647_, 0, v___x_2580_);
lean_ctor_set(v___x_2647_, 1, v___x_2646_);
v___x_2648_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2648_, 0, v___x_2576_);
lean_ctor_set(v___x_2648_, 1, v___x_2647_);
v___x_2649_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2649_, 0, v___x_2570_);
lean_ctor_set(v___x_2649_, 1, v___x_2648_);
v___x_2650_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2650_, 0, v___x_2567_);
lean_ctor_set(v___x_2650_, 1, v___x_2649_);
v___x_2651_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2651_, 0, v___x_2564_);
lean_ctor_set(v___x_2651_, 1, v___x_2650_);
v___x_2652_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2652_, 0, v___x_2561_);
lean_ctor_set(v___x_2652_, 1, v___x_2651_);
v___x_2653_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2653_, 0, v___x_2557_);
lean_ctor_set(v___x_2653_, 1, v___x_2652_);
v___x_2654_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2654_, 0, v___x_2552_);
lean_ctor_set(v___x_2654_, 1, v___x_2653_);
v___x_2655_ = l_Lean_Json_mkObj(v___x_2654_);
lean_dec_ref_known(v___x_2654_, 2);
return v___x_2655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(lean_object* v_fst_2660_, lean_object* v_t_2661_, lean_object* v_a_2662_, lean_object* v_a_2663_){
_start:
{
if (lean_obj_tag(v_a_2662_) == 0)
{
lean_object* v___x_2664_; 
lean_dec_ref(v_t_2661_);
v___x_2664_ = l_List_reverse___redArg(v_a_2663_);
return v___x_2664_;
}
else
{
lean_object* v_head_2665_; lean_object* v_tail_2666_; lean_object* v___x_2668_; uint8_t v_isShared_2669_; uint8_t v_isSharedCheck_2686_; 
v_head_2665_ = lean_ctor_get(v_a_2662_, 0);
v_tail_2666_ = lean_ctor_get(v_a_2662_, 1);
v_isSharedCheck_2686_ = !lean_is_exclusive(v_a_2662_);
if (v_isSharedCheck_2686_ == 0)
{
v___x_2668_ = v_a_2662_;
v_isShared_2669_ = v_isSharedCheck_2686_;
goto v_resetjp_2667_;
}
else
{
lean_inc(v_tail_2666_);
lean_inc(v_head_2665_);
lean_dec(v_a_2662_);
v___x_2668_ = lean_box(0);
v_isShared_2669_ = v_isSharedCheck_2686_;
goto v_resetjp_2667_;
}
v_resetjp_2667_:
{
lean_object* v___x_2670_; lean_object* v___x_2671_; double v___x_2672_; lean_object* v___x_2673_; lean_object* v___x_2674_; double v___x_2675_; lean_object* v___x_2676_; lean_object* v___x_2677_; lean_object* v___x_2678_; lean_object* v___x_2679_; lean_object* v___x_2680_; lean_object* v___x_2681_; lean_object* v___x_2683_; 
v___x_2670_ = lp_choreo_Choreo_Phase_path(v_fst_2660_, v_head_2665_);
lean_inc_ref_n(v_t_2661_, 2);
lean_inc_ref(v___x_2670_);
v___x_2671_ = lp_choreo_Choreo_Path_x___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__0(v___x_2670_, v_t_2661_);
v___x_2672_ = lp_choreo_Choreo_ratFloat(v___x_2671_);
v___x_2673_ = l_Lean_Float_toJson(v___x_2672_);
v___x_2674_ = lp_choreo_Choreo_Path_y___at___00Choreo_dist2___at___00Choreo_clearanceAt_spec__0_spec__1(v___x_2670_, v_t_2661_);
v___x_2675_ = lp_choreo_Choreo_ratFloat(v___x_2674_);
v___x_2676_ = l_Lean_Float_toJson(v___x_2675_);
v___x_2677_ = lean_unsigned_to_nat(2u);
v___x_2678_ = lean_mk_empty_array_with_capacity(v___x_2677_);
v___x_2679_ = lean_array_push(v___x_2678_, v___x_2673_);
v___x_2680_ = lean_array_push(v___x_2679_, v___x_2676_);
v___x_2681_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2681_, 0, v___x_2680_);
if (v_isShared_2669_ == 0)
{
lean_ctor_set(v___x_2668_, 1, v_a_2663_);
lean_ctor_set(v___x_2668_, 0, v___x_2681_);
v___x_2683_ = v___x_2668_;
goto v_reusejp_2682_;
}
else
{
lean_object* v_reuseFailAlloc_2685_; 
v_reuseFailAlloc_2685_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2685_, 0, v___x_2681_);
lean_ctor_set(v_reuseFailAlloc_2685_, 1, v_a_2663_);
v___x_2683_ = v_reuseFailAlloc_2685_;
goto v_reusejp_2682_;
}
v_reusejp_2682_:
{
v_a_2662_ = v_tail_2666_;
v_a_2663_ = v___x_2683_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0___boxed(lean_object* v_fst_2687_, lean_object* v_t_2688_, lean_object* v_a_2689_, lean_object* v_a_2690_){
_start:
{
lean_object* v_res_2691_; 
v_res_2691_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(v_fst_2687_, v_t_2688_, v_a_2689_, v_a_2690_);
lean_dec_ref(v_fst_2687_);
return v_res_2691_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1(lean_object* v_snd_2693_, lean_object* v_c_2694_, lean_object* v_fst_2695_, lean_object* v_a_2696_, lean_object* v_a_2697_){
_start:
{
if (lean_obj_tag(v_a_2696_) == 0)
{
lean_object* v___x_2698_; 
lean_dec_ref(v_c_2694_);
lean_dec(v_snd_2693_);
v___x_2698_ = l_List_reverse___redArg(v_a_2697_);
return v___x_2698_;
}
else
{
lean_object* v_head_2699_; lean_object* v_tail_2700_; lean_object* v___x_2702_; uint8_t v_isShared_2703_; uint8_t v_isSharedCheck_2728_; 
v_head_2699_ = lean_ctor_get(v_a_2696_, 0);
v_tail_2700_ = lean_ctor_get(v_a_2696_, 1);
v_isSharedCheck_2728_ = !lean_is_exclusive(v_a_2696_);
if (v_isSharedCheck_2728_ == 0)
{
v___x_2702_ = v_a_2696_;
v_isShared_2703_ = v_isSharedCheck_2728_;
goto v_resetjp_2701_;
}
else
{
lean_inc(v_tail_2700_);
lean_inc(v_head_2699_);
lean_dec(v_a_2696_);
v___x_2702_ = lean_box(0);
v_isShared_2703_ = v_isSharedCheck_2728_;
goto v_resetjp_2701_;
}
v_resetjp_2701_:
{
lean_object* v_n_2704_; lean_object* v___x_2705_; lean_object* v___x_2706_; lean_object* v___x_2707_; lean_object* v___x_2708_; lean_object* v___x_2709_; double v___x_2710_; lean_object* v___x_2711_; lean_object* v___x_2712_; lean_object* v___x_2713_; lean_object* v___x_2714_; lean_object* v___x_2715_; lean_object* v___x_2716_; lean_object* v___x_2717_; lean_object* v___x_2718_; lean_object* v___x_2719_; lean_object* v___x_2721_; 
v_n_2704_ = lean_ctor_get(v_c_2694_, 0);
v___x_2705_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_snd_2693_);
v___x_2706_ = l_Lean_JsonNumber_fromNat(v_snd_2693_);
v___x_2707_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2707_, 0, v___x_2706_);
v___x_2708_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2708_, 0, v___x_2705_);
lean_ctor_set(v___x_2708_, 1, v___x_2707_);
v___x_2709_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc(v_head_2699_);
v___x_2710_ = lp_choreo_Choreo_ratFloat(v_head_2699_);
v___x_2711_ = l_Lean_Float_toJson(v___x_2710_);
v___x_2712_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2712_, 0, v___x_2709_);
lean_ctor_set(v___x_2712_, 1, v___x_2711_);
v___x_2713_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___closed__0));
lean_inc(v_n_2704_);
v___x_2714_ = l_List_range(v_n_2704_);
v___x_2715_ = lean_box(0);
v___x_2716_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(v_fst_2695_, v_head_2699_, v___x_2714_, v___x_2715_);
v___x_2717_ = lean_array_mk(v___x_2716_);
v___x_2718_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2718_, 0, v___x_2717_);
v___x_2719_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2719_, 0, v___x_2713_);
lean_ctor_set(v___x_2719_, 1, v___x_2718_);
if (v_isShared_2703_ == 0)
{
lean_ctor_set(v___x_2702_, 1, v___x_2715_);
lean_ctor_set(v___x_2702_, 0, v___x_2719_);
v___x_2721_ = v___x_2702_;
goto v_reusejp_2720_;
}
else
{
lean_object* v_reuseFailAlloc_2727_; 
v_reuseFailAlloc_2727_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2727_, 0, v___x_2719_);
lean_ctor_set(v_reuseFailAlloc_2727_, 1, v___x_2715_);
v___x_2721_ = v_reuseFailAlloc_2727_;
goto v_reusejp_2720_;
}
v_reusejp_2720_:
{
lean_object* v___x_2722_; lean_object* v___x_2723_; lean_object* v___x_2724_; lean_object* v___x_2725_; 
v___x_2722_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2722_, 0, v___x_2712_);
lean_ctor_set(v___x_2722_, 1, v___x_2721_);
v___x_2723_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2723_, 0, v___x_2708_);
lean_ctor_set(v___x_2723_, 1, v___x_2722_);
v___x_2724_ = l_Lean_Json_mkObj(v___x_2723_);
lean_dec_ref_known(v___x_2723_, 2);
v___x_2725_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2725_, 0, v___x_2724_);
lean_ctor_set(v___x_2725_, 1, v_a_2697_);
v_a_2696_ = v_tail_2700_;
v_a_2697_ = v___x_2725_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___boxed(lean_object* v_snd_2729_, lean_object* v_c_2730_, lean_object* v_fst_2731_, lean_object* v_a_2732_, lean_object* v_a_2733_){
_start:
{
lean_object* v_res_2734_; 
v_res_2734_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1(v_snd_2729_, v_c_2730_, v_fst_2731_, v_a_2732_, v_a_2733_);
lean_dec_ref(v_fst_2731_);
return v_res_2734_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1(lean_object* v_fst_2735_, lean_object* v_snd_2736_, lean_object* v_c_2737_, lean_object* v_a_2738_, lean_object* v_a_2739_){
_start:
{
if (lean_obj_tag(v_a_2738_) == 0)
{
lean_object* v___x_2740_; 
lean_dec_ref(v_c_2737_);
lean_dec(v_snd_2736_);
v___x_2740_ = l_List_reverse___redArg(v_a_2739_);
return v___x_2740_;
}
else
{
lean_object* v_head_2741_; lean_object* v_tail_2742_; lean_object* v___x_2744_; uint8_t v_isShared_2745_; uint8_t v_isSharedCheck_2770_; 
v_head_2741_ = lean_ctor_get(v_a_2738_, 0);
v_tail_2742_ = lean_ctor_get(v_a_2738_, 1);
v_isSharedCheck_2770_ = !lean_is_exclusive(v_a_2738_);
if (v_isSharedCheck_2770_ == 0)
{
v___x_2744_ = v_a_2738_;
v_isShared_2745_ = v_isSharedCheck_2770_;
goto v_resetjp_2743_;
}
else
{
lean_inc(v_tail_2742_);
lean_inc(v_head_2741_);
lean_dec(v_a_2738_);
v___x_2744_ = lean_box(0);
v_isShared_2745_ = v_isSharedCheck_2770_;
goto v_resetjp_2743_;
}
v_resetjp_2743_:
{
lean_object* v_n_2746_; lean_object* v___x_2747_; lean_object* v___x_2748_; lean_object* v___x_2749_; lean_object* v___x_2750_; lean_object* v___x_2751_; double v___x_2752_; lean_object* v___x_2753_; lean_object* v___x_2754_; lean_object* v___x_2755_; lean_object* v___x_2756_; lean_object* v___x_2757_; lean_object* v___x_2758_; lean_object* v___x_2759_; lean_object* v___x_2760_; lean_object* v___x_2761_; lean_object* v___x_2763_; 
v_n_2746_ = lean_ctor_get(v_c_2737_, 0);
v___x_2747_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
lean_inc(v_snd_2736_);
v___x_2748_ = l_Lean_JsonNumber_fromNat(v_snd_2736_);
v___x_2749_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2749_, 0, v___x_2748_);
v___x_2750_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2750_, 0, v___x_2747_);
lean_ctor_set(v___x_2750_, 1, v___x_2749_);
v___x_2751_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__7));
lean_inc(v_head_2741_);
v___x_2752_ = lp_choreo_Choreo_ratFloat(v_head_2741_);
v___x_2753_ = l_Lean_Float_toJson(v___x_2752_);
v___x_2754_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2754_, 0, v___x_2751_);
lean_ctor_set(v___x_2754_, 1, v___x_2753_);
v___x_2755_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1___closed__0));
lean_inc(v_n_2746_);
v___x_2756_ = l_List_range(v_n_2746_);
v___x_2757_ = lean_box(0);
v___x_2758_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__0(v_fst_2735_, v_head_2741_, v___x_2756_, v___x_2757_);
v___x_2759_ = lean_array_mk(v___x_2758_);
v___x_2760_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2760_, 0, v___x_2759_);
v___x_2761_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_2761_, 0, v___x_2755_);
lean_ctor_set(v___x_2761_, 1, v___x_2760_);
if (v_isShared_2745_ == 0)
{
lean_ctor_set(v___x_2744_, 1, v___x_2757_);
lean_ctor_set(v___x_2744_, 0, v___x_2761_);
v___x_2763_ = v___x_2744_;
goto v_reusejp_2762_;
}
else
{
lean_object* v_reuseFailAlloc_2769_; 
v_reuseFailAlloc_2769_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2769_, 0, v___x_2761_);
lean_ctor_set(v_reuseFailAlloc_2769_, 1, v___x_2757_);
v___x_2763_ = v_reuseFailAlloc_2769_;
goto v_reusejp_2762_;
}
v_reusejp_2762_:
{
lean_object* v___x_2764_; lean_object* v___x_2765_; lean_object* v___x_2766_; lean_object* v___x_2767_; lean_object* v___x_2768_; 
v___x_2764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2764_, 0, v___x_2754_);
lean_ctor_set(v___x_2764_, 1, v___x_2763_);
v___x_2765_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2765_, 0, v___x_2750_);
lean_ctor_set(v___x_2765_, 1, v___x_2764_);
v___x_2766_ = l_Lean_Json_mkObj(v___x_2765_);
lean_dec_ref_known(v___x_2765_, 2);
v___x_2767_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2767_, 0, v___x_2766_);
lean_ctor_set(v___x_2767_, 1, v_a_2739_);
v___x_2768_ = lp_choreo_List_mapTR_loop___at___00List_mapTR_loop___at___00Choreo_samplesJson_spec__1_spec__1(v_snd_2736_, v_c_2737_, v_fst_2735_, v_tail_2742_, v___x_2767_);
return v___x_2768_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1___boxed(lean_object* v_fst_2771_, lean_object* v_snd_2772_, lean_object* v_c_2773_, lean_object* v_a_2774_, lean_object* v_a_2775_){
_start:
{
lean_object* v_res_2776_; 
v_res_2776_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1(v_fst_2771_, v_snd_2772_, v_c_2773_, v_a_2774_, v_a_2775_);
lean_dec_ref(v_fst_2771_);
return v_res_2776_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0(void){
_start:
{
lean_object* v___x_2777_; lean_object* v___x_2778_; 
v___x_2777_ = lean_unsigned_to_nat(1u);
v___x_2778_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_2777_);
return v___x_2778_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1(void){
_start:
{
lean_object* v___x_2779_; lean_object* v___x_2780_; 
v___x_2779_ = lean_unsigned_to_nat(3u);
v___x_2780_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_2779_);
return v___x_2780_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2(void){
_start:
{
lean_object* v___x_2781_; lean_object* v___x_2782_; lean_object* v___x_2783_; 
v___x_2781_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1);
v___x_2782_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__0);
v___x_2783_ = l_Rat_div(v___x_2782_, v___x_2781_);
return v___x_2783_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3(void){
_start:
{
lean_object* v___x_2784_; lean_object* v___x_2785_; 
v___x_2784_ = lean_unsigned_to_nat(2u);
v___x_2785_ = l_Nat_cast___at___00Dyadic_toRat_spec__0(v___x_2784_);
return v___x_2785_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4(void){
_start:
{
lean_object* v___x_2786_; lean_object* v___x_2787_; lean_object* v___x_2788_; 
v___x_2786_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__1);
v___x_2787_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__3);
v___x_2788_ = l_Rat_div(v___x_2787_, v___x_2786_);
return v___x_2788_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5(void){
_start:
{
lean_object* v___x_2789_; lean_object* v___x_2790_; lean_object* v___x_2791_; 
v___x_2789_ = lean_box(0);
v___x_2790_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__4);
v___x_2791_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2791_, 0, v___x_2790_);
lean_ctor_set(v___x_2791_, 1, v___x_2789_);
return v___x_2791_;
}
}
static lean_object* _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6(void){
_start:
{
lean_object* v___x_2792_; lean_object* v___x_2793_; lean_object* v_pts_2794_; 
v___x_2792_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__5);
v___x_2793_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__2);
v_pts_2794_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_pts_2794_, 0, v___x_2793_);
lean_ctor_set(v_pts_2794_, 1, v___x_2792_);
return v_pts_2794_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2(lean_object* v_c_2795_, lean_object* v_a_2796_, lean_object* v_a_2797_){
_start:
{
if (lean_obj_tag(v_a_2796_) == 0)
{
lean_object* v___x_2798_; 
lean_dec_ref(v_c_2795_);
v___x_2798_ = lean_array_to_list(v_a_2797_);
return v___x_2798_;
}
else
{
lean_object* v_head_2799_; lean_object* v_tail_2800_; lean_object* v_fst_2801_; lean_object* v_snd_2802_; lean_object* v___x_2803_; lean_object* v_pts_2804_; lean_object* v___x_2805_; lean_object* v___x_2806_; 
v_head_2799_ = lean_ctor_get(v_a_2796_, 0);
lean_inc(v_head_2799_);
v_tail_2800_ = lean_ctor_get(v_a_2796_, 1);
lean_inc(v_tail_2800_);
lean_dec_ref_known(v_a_2796_, 2);
v_fst_2801_ = lean_ctor_get(v_head_2799_, 0);
lean_inc(v_fst_2801_);
v_snd_2802_ = lean_ctor_get(v_head_2799_, 1);
lean_inc(v_snd_2802_);
lean_dec(v_head_2799_);
v___x_2803_ = lean_box(0);
v_pts_2804_ = lean_obj_once(&lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6, &lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6_once, _init_lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2___closed__6);
lean_inc_ref(v_c_2795_);
v___x_2805_ = lp_choreo_List_mapTR_loop___at___00Choreo_samplesJson_spec__1(v_fst_2801_, v_snd_2802_, v_c_2795_, v_pts_2804_, v___x_2803_);
lean_dec(v_fst_2801_);
v___x_2806_ = l_List_foldl___at___00Array_appendList_spec__0___redArg(v_a_2797_, v___x_2805_);
v_a_2796_ = v_tail_2800_;
v_a_2797_ = v___x_2806_;
goto _start;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_samplesJson(lean_object* v_c_2810_, lean_object* v_phases_2811_){
_start:
{
lean_object* v___x_2812_; lean_object* v___x_2813_; lean_object* v___x_2814_; lean_object* v___x_2815_; lean_object* v___x_2816_; lean_object* v___x_2817_; 
v___x_2812_ = lean_unsigned_to_nat(0u);
v___x_2813_ = l_List_zipIdxTR___redArg(v_phases_2811_, v___x_2812_);
v___x_2814_ = ((lean_object*)(lp_choreo_Choreo_samplesJson___closed__0));
v___x_2815_ = lp_choreo___private_Init_Data_List_Impl_0__List_flatMapTR_go___at___00Choreo_samplesJson_spec__2(v_c_2810_, v___x_2813_, v___x_2814_);
v___x_2816_ = lean_array_mk(v___x_2815_);
v___x_2817_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2817_, 0, v___x_2816_);
return v___x_2817_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_stepsHeard_spec__0(lean_object* v_a_2818_, lean_object* v_a_2819_){
_start:
{
if (lean_obj_tag(v_a_2818_) == 0)
{
lean_object* v___x_2820_; 
v___x_2820_ = l_List_reverse___redArg(v_a_2819_);
return v___x_2820_;
}
else
{
lean_object* v_head_2821_; lean_object* v_tail_2822_; lean_object* v___x_2824_; uint8_t v_isShared_2825_; uint8_t v_isSharedCheck_2831_; 
v_head_2821_ = lean_ctor_get(v_a_2818_, 0);
v_tail_2822_ = lean_ctor_get(v_a_2818_, 1);
v_isSharedCheck_2831_ = !lean_is_exclusive(v_a_2818_);
if (v_isSharedCheck_2831_ == 0)
{
v___x_2824_ = v_a_2818_;
v_isShared_2825_ = v_isSharedCheck_2831_;
goto v_resetjp_2823_;
}
else
{
lean_inc(v_tail_2822_);
lean_inc(v_head_2821_);
lean_dec(v_a_2818_);
v___x_2824_ = lean_box(0);
v_isShared_2825_ = v_isSharedCheck_2831_;
goto v_resetjp_2823_;
}
v_resetjp_2823_:
{
lean_object* v___x_2826_; lean_object* v___x_2828_; 
v___x_2826_ = lp_choreo_Choreo_stepTitle(v_head_2821_);
lean_dec(v_head_2821_);
if (v_isShared_2825_ == 0)
{
lean_ctor_set(v___x_2824_, 1, v_a_2819_);
lean_ctor_set(v___x_2824_, 0, v___x_2826_);
v___x_2828_ = v___x_2824_;
goto v_reusejp_2827_;
}
else
{
lean_object* v_reuseFailAlloc_2830_; 
v_reuseFailAlloc_2830_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2830_, 0, v___x_2826_);
lean_ctor_set(v_reuseFailAlloc_2830_, 1, v_a_2819_);
v___x_2828_ = v_reuseFailAlloc_2830_;
goto v_reusejp_2827_;
}
v_reusejp_2827_:
{
v_a_2818_ = v_tail_2822_;
v_a_2819_ = v___x_2828_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_stepsHeard(lean_object* v_steps_2833_){
_start:
{
uint8_t v___x_2834_; 
v___x_2834_ = l_List_isEmpty___redArg(v_steps_2833_);
if (v___x_2834_ == 0)
{
lean_object* v___x_2835_; lean_object* v___x_2836_; lean_object* v___x_2837_; lean_object* v___x_2838_; lean_object* v___x_2839_; lean_object* v___x_2840_; lean_object* v___x_2841_; 
v___x_2835_ = ((lean_object*)(lp_choreo_Choreo_stepsHeard___closed__0));
v___x_2836_ = ((lean_object*)(lp_choreo_Choreo_ptL___closed__1));
v___x_2837_ = lean_box(0);
v___x_2838_ = lp_choreo_List_mapTR_loop___at___00Choreo_stepsHeard_spec__0(v_steps_2833_, v___x_2837_);
v___x_2839_ = l_String_intercalate(v___x_2836_, v___x_2838_);
v___x_2840_ = lean_string_append(v___x_2835_, v___x_2839_);
lean_dec_ref(v___x_2839_);
v___x_2841_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_2841_, 0, v___x_2840_);
lean_ctor_set(v___x_2841_, 1, v___x_2837_);
return v___x_2841_;
}
else
{
lean_object* v___x_2842_; 
lean_dec(v_steps_2833_);
v___x_2842_ = lean_box(0);
return v___x_2842_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_moveName(lean_object* v_x_2861_){
_start:
{
switch(lean_obj_tag(v_x_2861_))
{
case 0:
{
lean_object* v_shape_2862_; lean_object* v___x_2863_; lean_object* v___x_2864_; lean_object* v___x_2865_; 
v_shape_2862_ = lean_ctor_get(v_x_2861_, 0);
lean_inc(v_shape_2862_);
lean_dec_ref_known(v_x_2861_, 1);
v___x_2863_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__0));
v___x_2864_ = lp_choreo_Choreo_Shape_name(v_shape_2862_);
v___x_2865_ = lean_string_append(v___x_2863_, v___x_2864_);
lean_dec_ref(v___x_2864_);
return v___x_2865_;
}
case 1:
{
lean_object* v_shape_2866_; lean_object* v___x_2867_; lean_object* v___x_2868_; lean_object* v___x_2869_; 
v_shape_2866_ = lean_ctor_get(v_x_2861_, 0);
lean_inc(v_shape_2866_);
lean_dec_ref_known(v_x_2861_, 1);
v___x_2867_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__1));
v___x_2868_ = lp_choreo_Choreo_Shape_name(v_shape_2866_);
v___x_2869_ = lean_string_append(v___x_2867_, v___x_2868_);
lean_dec_ref(v___x_2868_);
return v___x_2869_;
}
case 2:
{
lean_object* v___x_2870_; 
v___x_2870_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__2));
return v___x_2870_;
}
case 3:
{
lean_object* v_quarters_2871_; uint8_t v_ccw_2872_; lean_object* v___x_2873_; lean_object* v___x_2874_; lean_object* v___x_2875_; lean_object* v___x_2876_; lean_object* v___x_2877_; lean_object* v___x_2878_; lean_object* v___x_2879_; 
v_quarters_2871_ = lean_ctor_get(v_x_2861_, 0);
lean_inc(v_quarters_2871_);
v_ccw_2872_ = lean_ctor_get_uint8(v_x_2861_, sizeof(void*)*1);
lean_dec_ref_known(v_x_2861_, 1);
v___x_2873_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__3));
v___x_2874_ = lean_unsigned_to_nat(90u);
v___x_2875_ = lean_nat_mul(v_quarters_2871_, v___x_2874_);
lean_dec(v_quarters_2871_);
v___x_2876_ = l_Nat_reprFast(v___x_2875_);
v___x_2877_ = lean_string_append(v___x_2873_, v___x_2876_);
lean_dec_ref(v___x_2876_);
v___x_2878_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__4));
v___x_2879_ = lean_string_append(v___x_2877_, v___x_2878_);
if (v_ccw_2872_ == 0)
{
lean_object* v___x_2880_; lean_object* v___x_2881_; 
v___x_2880_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__5));
v___x_2881_ = lean_string_append(v___x_2879_, v___x_2880_);
return v___x_2881_;
}
else
{
lean_object* v___x_2882_; lean_object* v___x_2883_; 
v___x_2882_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__6));
v___x_2883_ = lean_string_append(v___x_2879_, v___x_2882_);
return v___x_2883_;
}
}
case 4:
{
lean_object* v_quarters_2884_; lean_object* v___x_2885_; lean_object* v___x_2886_; lean_object* v___x_2887_; lean_object* v___x_2888_; lean_object* v___x_2889_; lean_object* v___x_2890_; lean_object* v___x_2891_; 
v_quarters_2884_ = lean_ctor_get(v_x_2861_, 0);
lean_inc(v_quarters_2884_);
lean_dec_ref_known(v_x_2861_, 1);
v___x_2885_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__7));
v___x_2886_ = lean_unsigned_to_nat(90u);
v___x_2887_ = lean_nat_mul(v_quarters_2884_, v___x_2886_);
lean_dec(v_quarters_2884_);
v___x_2888_ = l_Nat_reprFast(v___x_2887_);
v___x_2889_ = lean_string_append(v___x_2885_, v___x_2888_);
lean_dec_ref(v___x_2888_);
v___x_2890_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__8));
v___x_2891_ = lean_string_append(v___x_2889_, v___x_2890_);
return v___x_2891_;
}
case 5:
{
lean_object* v___x_2892_; 
lean_dec_ref_known(v_x_2861_, 1);
v___x_2892_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__9));
return v___x_2892_;
}
case 6:
{
lean_object* v___x_2893_; 
v___x_2893_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__10));
return v___x_2893_;
}
case 7:
{
lean_object* v___x_2894_; 
v___x_2894_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__11));
return v___x_2894_;
}
case 8:
{
lean_object* v___x_2895_; 
v___x_2895_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__12));
return v___x_2895_;
}
case 9:
{
lean_object* v___x_2896_; 
v___x_2896_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__13));
return v___x_2896_;
}
case 10:
{
lean_object* v___x_2897_; 
v___x_2897_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__14));
return v___x_2897_;
}
case 11:
{
lean_object* v_shape_2898_; lean_object* v___x_2899_; lean_object* v___x_2900_; lean_object* v___x_2901_; 
v_shape_2898_ = lean_ctor_get(v_x_2861_, 0);
lean_inc(v_shape_2898_);
lean_dec_ref_known(v_x_2861_, 1);
v___x_2899_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__15));
v___x_2900_ = lp_choreo_Choreo_Shape_name(v_shape_2898_);
v___x_2901_ = lean_string_append(v___x_2899_, v___x_2900_);
lean_dec_ref(v___x_2900_);
return v___x_2901_;
}
default: 
{
uint8_t v_newLines_2902_; 
v_newLines_2902_ = lean_ctor_get_uint8(v_x_2861_, 0);
lean_dec_ref_known(v_x_2861_, 0);
if (v_newLines_2902_ == 0)
{
lean_object* v___x_2903_; 
v___x_2903_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__16));
return v___x_2903_;
}
else
{
lean_object* v___x_2904_; 
v___x_2904_ = ((lean_object*)(lp_choreo_Choreo_moveName___closed__17));
return v___x_2904_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(lean_object* v_a_2905_, lean_object* v_a_2906_){
_start:
{
if (lean_obj_tag(v_a_2905_) == 0)
{
lean_object* v___x_2907_; 
v___x_2907_ = l_List_reverse___redArg(v_a_2906_);
return v___x_2907_;
}
else
{
lean_object* v_head_2908_; lean_object* v_tail_2909_; lean_object* v___x_2911_; uint8_t v_isShared_2912_; uint8_t v_isSharedCheck_2926_; 
v_head_2908_ = lean_ctor_get(v_a_2905_, 0);
v_tail_2909_ = lean_ctor_get(v_a_2905_, 1);
v_isSharedCheck_2926_ = !lean_is_exclusive(v_a_2905_);
if (v_isSharedCheck_2926_ == 0)
{
v___x_2911_ = v_a_2905_;
v_isShared_2912_ = v_isSharedCheck_2926_;
goto v_resetjp_2910_;
}
else
{
lean_inc(v_tail_2909_);
lean_inc(v_head_2908_);
lean_dec(v_a_2905_);
v___x_2911_ = lean_box(0);
v_isShared_2912_ = v_isSharedCheck_2926_;
goto v_resetjp_2910_;
}
v_resetjp_2910_:
{
lean_object* v_x_2913_; lean_object* v_y_2914_; lean_object* v___x_2915_; lean_object* v___x_2916_; lean_object* v___x_2917_; lean_object* v___x_2918_; lean_object* v___x_2919_; lean_object* v___x_2920_; lean_object* v___x_2921_; lean_object* v___x_2923_; 
v_x_2913_ = lean_ctor_get(v_head_2908_, 0);
lean_inc(v_x_2913_);
v_y_2914_ = lean_ctor_get(v_head_2908_, 1);
lean_inc(v_y_2914_);
lean_dec(v_head_2908_);
v___x_2915_ = lp_choreo_Choreo_jInt(v_x_2913_);
v___x_2916_ = lp_choreo_Choreo_jInt(v_y_2914_);
v___x_2917_ = lean_unsigned_to_nat(2u);
v___x_2918_ = lean_mk_empty_array_with_capacity(v___x_2917_);
v___x_2919_ = lean_array_push(v___x_2918_, v___x_2915_);
v___x_2920_ = lean_array_push(v___x_2919_, v___x_2916_);
v___x_2921_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2921_, 0, v___x_2920_);
if (v_isShared_2912_ == 0)
{
lean_ctor_set(v___x_2911_, 1, v_a_2906_);
lean_ctor_set(v___x_2911_, 0, v___x_2921_);
v___x_2923_ = v___x_2911_;
goto v_reusejp_2922_;
}
else
{
lean_object* v_reuseFailAlloc_2925_; 
v_reuseFailAlloc_2925_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2925_, 0, v___x_2921_);
lean_ctor_set(v_reuseFailAlloc_2925_, 1, v_a_2906_);
v___x_2923_ = v_reuseFailAlloc_2925_;
goto v_reusejp_2922_;
}
v_reusejp_2922_:
{
v_a_2905_ = v_tail_2909_;
v_a_2906_ = v___x_2923_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__3(lean_object* v_a_2927_, lean_object* v_a_2928_){
_start:
{
if (lean_obj_tag(v_a_2927_) == 0)
{
lean_object* v___x_2929_; 
v___x_2929_ = l_List_reverse___redArg(v_a_2928_);
return v___x_2929_;
}
else
{
lean_object* v_head_2930_; lean_object* v_tail_2931_; lean_object* v___x_2933_; uint8_t v_isShared_2934_; uint8_t v_isSharedCheck_2943_; 
v_head_2930_ = lean_ctor_get(v_a_2927_, 0);
v_tail_2931_ = lean_ctor_get(v_a_2927_, 1);
v_isSharedCheck_2943_ = !lean_is_exclusive(v_a_2927_);
if (v_isSharedCheck_2943_ == 0)
{
v___x_2933_ = v_a_2927_;
v_isShared_2934_ = v_isSharedCheck_2943_;
goto v_resetjp_2932_;
}
else
{
lean_inc(v_tail_2931_);
lean_inc(v_head_2930_);
lean_dec(v_a_2927_);
v___x_2933_ = lean_box(0);
v_isShared_2934_ = v_isSharedCheck_2943_;
goto v_resetjp_2932_;
}
v_resetjp_2932_:
{
lean_object* v___x_2935_; lean_object* v___x_2936_; lean_object* v___x_2937_; lean_object* v___x_2938_; lean_object* v___x_2940_; 
v___x_2935_ = lean_box(0);
v___x_2936_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(v_head_2930_, v___x_2935_);
v___x_2937_ = lean_array_mk(v___x_2936_);
v___x_2938_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2938_, 0, v___x_2937_);
if (v_isShared_2934_ == 0)
{
lean_ctor_set(v___x_2933_, 1, v_a_2928_);
lean_ctor_set(v___x_2933_, 0, v___x_2938_);
v___x_2940_ = v___x_2933_;
goto v_reusejp_2939_;
}
else
{
lean_object* v_reuseFailAlloc_2942_; 
v_reuseFailAlloc_2942_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2942_, 0, v___x_2938_);
lean_ctor_set(v_reuseFailAlloc_2942_, 1, v_a_2928_);
v___x_2940_ = v_reuseFailAlloc_2942_;
goto v_reusejp_2939_;
}
v_reusejp_2939_:
{
v_a_2927_ = v_tail_2931_;
v_a_2928_ = v___x_2940_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__2(lean_object* v_a_2944_, lean_object* v_a_2945_){
_start:
{
if (lean_obj_tag(v_a_2944_) == 0)
{
lean_object* v___x_2946_; 
v___x_2946_ = l_List_reverse___redArg(v_a_2945_);
return v___x_2946_;
}
else
{
lean_object* v_head_2947_; lean_object* v_tail_2948_; lean_object* v___x_2950_; uint8_t v_isShared_2951_; uint8_t v_isSharedCheck_2967_; 
v_head_2947_ = lean_ctor_get(v_a_2944_, 0);
v_tail_2948_ = lean_ctor_get(v_a_2944_, 1);
v_isSharedCheck_2967_ = !lean_is_exclusive(v_a_2944_);
if (v_isSharedCheck_2967_ == 0)
{
v___x_2950_ = v_a_2944_;
v_isShared_2951_ = v_isSharedCheck_2967_;
goto v_resetjp_2949_;
}
else
{
lean_inc(v_tail_2948_);
lean_inc(v_head_2947_);
lean_dec(v_a_2944_);
v___x_2950_ = lean_box(0);
v_isShared_2951_ = v_isSharedCheck_2967_;
goto v_resetjp_2949_;
}
v_resetjp_2949_:
{
lean_object* v_fst_2952_; lean_object* v_snd_2953_; lean_object* v___x_2954_; lean_object* v___x_2955_; lean_object* v___x_2956_; lean_object* v___x_2957_; lean_object* v___x_2958_; lean_object* v___x_2959_; lean_object* v___x_2960_; lean_object* v___x_2961_; lean_object* v___x_2962_; lean_object* v___x_2964_; 
v_fst_2952_ = lean_ctor_get(v_head_2947_, 0);
lean_inc(v_fst_2952_);
v_snd_2953_ = lean_ctor_get(v_head_2947_, 1);
lean_inc(v_snd_2953_);
lean_dec(v_head_2947_);
v___x_2954_ = l_Lean_JsonNumber_fromNat(v_fst_2952_);
v___x_2955_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2955_, 0, v___x_2954_);
v___x_2956_ = l_Lean_JsonNumber_fromNat(v_snd_2953_);
v___x_2957_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2957_, 0, v___x_2956_);
v___x_2958_ = lean_unsigned_to_nat(2u);
v___x_2959_ = lean_mk_empty_array_with_capacity(v___x_2958_);
v___x_2960_ = lean_array_push(v___x_2959_, v___x_2955_);
v___x_2961_ = lean_array_push(v___x_2960_, v___x_2957_);
v___x_2962_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_2962_, 0, v___x_2961_);
if (v_isShared_2951_ == 0)
{
lean_ctor_set(v___x_2950_, 1, v_a_2945_);
lean_ctor_set(v___x_2950_, 0, v___x_2962_);
v___x_2964_ = v___x_2950_;
goto v_reusejp_2963_;
}
else
{
lean_object* v_reuseFailAlloc_2966_; 
v_reuseFailAlloc_2966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2966_, 0, v___x_2962_);
lean_ctor_set(v_reuseFailAlloc_2966_, 1, v_a_2945_);
v___x_2964_ = v_reuseFailAlloc_2966_;
goto v_reusejp_2963_;
}
v_reusejp_2963_:
{
v_a_2944_ = v_tail_2948_;
v_a_2945_ = v___x_2964_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(lean_object* v_a_2968_, lean_object* v_a_2969_){
_start:
{
if (lean_obj_tag(v_a_2968_) == 0)
{
lean_object* v___x_2970_; 
v___x_2970_ = l_List_reverse___redArg(v_a_2969_);
return v___x_2970_;
}
else
{
lean_object* v_head_2971_; lean_object* v_tail_2972_; lean_object* v___x_2974_; uint8_t v_isShared_2975_; uint8_t v_isSharedCheck_2982_; 
v_head_2971_ = lean_ctor_get(v_a_2968_, 0);
v_tail_2972_ = lean_ctor_get(v_a_2968_, 1);
v_isSharedCheck_2982_ = !lean_is_exclusive(v_a_2968_);
if (v_isSharedCheck_2982_ == 0)
{
v___x_2974_ = v_a_2968_;
v_isShared_2975_ = v_isSharedCheck_2982_;
goto v_resetjp_2973_;
}
else
{
lean_inc(v_tail_2972_);
lean_inc(v_head_2971_);
lean_dec(v_a_2968_);
v___x_2974_ = lean_box(0);
v_isShared_2975_ = v_isSharedCheck_2982_;
goto v_resetjp_2973_;
}
v_resetjp_2973_:
{
lean_object* v___x_2976_; lean_object* v___x_2977_; lean_object* v___x_2979_; 
v___x_2976_ = l_Lean_JsonNumber_fromNat(v_head_2971_);
v___x_2977_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_2977_, 0, v___x_2976_);
if (v_isShared_2975_ == 0)
{
lean_ctor_set(v___x_2974_, 1, v_a_2969_);
lean_ctor_set(v___x_2974_, 0, v___x_2977_);
v___x_2979_ = v___x_2974_;
goto v_reusejp_2978_;
}
else
{
lean_object* v_reuseFailAlloc_2981_; 
v_reuseFailAlloc_2981_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_2981_, 0, v___x_2977_);
lean_ctor_set(v_reuseFailAlloc_2981_, 1, v_a_2969_);
v___x_2979_ = v_reuseFailAlloc_2981_;
goto v_reusejp_2978_;
}
v_reusejp_2978_:
{
v_a_2968_ = v_tail_2972_;
v_a_2969_ = v___x_2979_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6(lean_object* v_a_2990_, lean_object* v_a_2991_){
_start:
{
if (lean_obj_tag(v_a_2990_) == 0)
{
lean_object* v___x_2992_; 
v___x_2992_ = l_List_reverse___redArg(v_a_2991_);
return v___x_2992_;
}
else
{
lean_object* v_head_2993_; lean_object* v_tail_2994_; lean_object* v___x_2996_; uint8_t v_isShared_2997_; uint8_t v_isSharedCheck_3049_; 
v_head_2993_ = lean_ctor_get(v_a_2990_, 0);
v_tail_2994_ = lean_ctor_get(v_a_2990_, 1);
v_isSharedCheck_3049_ = !lean_is_exclusive(v_a_2990_);
if (v_isSharedCheck_3049_ == 0)
{
v___x_2996_ = v_a_2990_;
v_isShared_2997_ = v_isSharedCheck_3049_;
goto v_resetjp_2995_;
}
else
{
lean_inc(v_tail_2994_);
lean_inc(v_head_2993_);
lean_dec(v_a_2990_);
v___x_2996_ = lean_box(0);
v_isShared_2997_ = v_isSharedCheck_3049_;
goto v_resetjp_2995_;
}
v_resetjp_2995_:
{
lean_object* v_name_2998_; lean_object* v_kind_2999_; lean_object* v_frame_3000_; lean_object* v_members_3001_; lean_object* v_dx_3002_; lean_object* v_dy_3003_; lean_object* v_pairs_3004_; lean_object* v_mirror_3005_; lean_object* v___x_3006_; lean_object* v___x_3007_; lean_object* v___x_3008_; lean_object* v___x_3009_; lean_object* v___x_3010_; lean_object* v___x_3011_; lean_object* v___x_3012_; lean_object* v___x_3013_; lean_object* v___x_3014_; lean_object* v___x_3015_; lean_object* v___x_3016_; lean_object* v___x_3017_; lean_object* v___x_3018_; lean_object* v___x_3019_; lean_object* v___x_3020_; lean_object* v___x_3021_; lean_object* v___x_3022_; lean_object* v___x_3023_; lean_object* v___x_3024_; lean_object* v___x_3025_; lean_object* v___x_3026_; lean_object* v___x_3027_; lean_object* v___x_3028_; lean_object* v___x_3029_; lean_object* v___x_3030_; lean_object* v___x_3031_; lean_object* v___x_3032_; lean_object* v___x_3033_; lean_object* v___x_3034_; lean_object* v___x_3035_; lean_object* v___x_3037_; 
v_name_2998_ = lean_ctor_get(v_head_2993_, 0);
lean_inc_ref(v_name_2998_);
v_kind_2999_ = lean_ctor_get(v_head_2993_, 1);
lean_inc_ref(v_kind_2999_);
v_frame_3000_ = lean_ctor_get(v_head_2993_, 2);
lean_inc(v_frame_3000_);
v_members_3001_ = lean_ctor_get(v_head_2993_, 3);
lean_inc(v_members_3001_);
v_dx_3002_ = lean_ctor_get(v_head_2993_, 4);
lean_inc(v_dx_3002_);
v_dy_3003_ = lean_ctor_get(v_head_2993_, 5);
lean_inc(v_dy_3003_);
v_pairs_3004_ = lean_ctor_get(v_head_2993_, 6);
lean_inc(v_pairs_3004_);
v_mirror_3005_ = lean_ctor_get(v_head_2993_, 7);
lean_inc(v_mirror_3005_);
lean_dec(v_head_2993_);
v___x_3006_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0));
v___x_3007_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3007_, 0, v_name_2998_);
v___x_3008_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3008_, 0, v___x_3006_);
lean_ctor_set(v___x_3008_, 1, v___x_3007_);
v___x_3009_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
v___x_3010_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3010_, 0, v_kind_2999_);
v___x_3011_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3011_, 0, v___x_3009_);
lean_ctor_set(v___x_3011_, 1, v___x_3010_);
v___x_3012_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__1));
v___x_3013_ = l_Lean_JsonNumber_fromNat(v_frame_3000_);
v___x_3014_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3014_, 0, v___x_3013_);
v___x_3015_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3015_, 0, v___x_3012_);
lean_ctor_set(v___x_3015_, 1, v___x_3014_);
v___x_3016_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__2));
v___x_3017_ = lean_box(0);
v___x_3018_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_members_3001_, v___x_3017_);
v___x_3019_ = lean_array_mk(v___x_3018_);
v___x_3020_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3020_, 0, v___x_3019_);
v___x_3021_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3021_, 0, v___x_3016_);
lean_ctor_set(v___x_3021_, 1, v___x_3020_);
v___x_3022_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__3));
v___x_3023_ = lp_choreo_Choreo_jInt(v_dx_3002_);
v___x_3024_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3024_, 0, v___x_3022_);
lean_ctor_set(v___x_3024_, 1, v___x_3023_);
v___x_3025_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__4));
v___x_3026_ = lp_choreo_Choreo_jInt(v_dy_3003_);
v___x_3027_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3027_, 0, v___x_3025_);
lean_ctor_set(v___x_3027_, 1, v___x_3026_);
v___x_3028_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__5));
v___x_3029_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__2(v_pairs_3004_, v___x_3017_);
v___x_3030_ = lean_array_mk(v___x_3029_);
v___x_3031_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3031_, 0, v___x_3030_);
v___x_3032_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3032_, 0, v___x_3028_);
lean_ctor_set(v___x_3032_, 1, v___x_3031_);
v___x_3033_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__6));
v___x_3034_ = lp_choreo_Choreo_jInt(v_mirror_3005_);
v___x_3035_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3035_, 0, v___x_3033_);
lean_ctor_set(v___x_3035_, 1, v___x_3034_);
if (v_isShared_2997_ == 0)
{
lean_ctor_set(v___x_2996_, 1, v___x_3017_);
lean_ctor_set(v___x_2996_, 0, v___x_3035_);
v___x_3037_ = v___x_2996_;
goto v_reusejp_3036_;
}
else
{
lean_object* v_reuseFailAlloc_3048_; 
v_reuseFailAlloc_3048_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3048_, 0, v___x_3035_);
lean_ctor_set(v_reuseFailAlloc_3048_, 1, v___x_3017_);
v___x_3037_ = v_reuseFailAlloc_3048_;
goto v_reusejp_3036_;
}
v_reusejp_3036_:
{
lean_object* v___x_3038_; lean_object* v___x_3039_; lean_object* v___x_3040_; lean_object* v___x_3041_; lean_object* v___x_3042_; lean_object* v___x_3043_; lean_object* v___x_3044_; lean_object* v___x_3045_; lean_object* v___x_3046_; 
v___x_3038_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3038_, 0, v___x_3032_);
lean_ctor_set(v___x_3038_, 1, v___x_3037_);
v___x_3039_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3039_, 0, v___x_3027_);
lean_ctor_set(v___x_3039_, 1, v___x_3038_);
v___x_3040_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3040_, 0, v___x_3024_);
lean_ctor_set(v___x_3040_, 1, v___x_3039_);
v___x_3041_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3041_, 0, v___x_3021_);
lean_ctor_set(v___x_3041_, 1, v___x_3040_);
v___x_3042_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3042_, 0, v___x_3015_);
lean_ctor_set(v___x_3042_, 1, v___x_3041_);
v___x_3043_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3043_, 0, v___x_3011_);
lean_ctor_set(v___x_3043_, 1, v___x_3042_);
v___x_3044_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3044_, 0, v___x_3008_);
lean_ctor_set(v___x_3044_, 1, v___x_3043_);
v___x_3045_ = l_Lean_Json_mkObj(v___x_3044_);
lean_dec_ref_known(v___x_3044_, 2);
v___x_3046_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3046_, 0, v___x_3045_);
lean_ctor_set(v___x_3046_, 1, v_a_2991_);
v_a_2990_ = v_tail_2994_;
v_a_2991_ = v___x_3046_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(lean_object* v_a_3050_, lean_object* v_a_3051_){
_start:
{
if (lean_obj_tag(v_a_3050_) == 0)
{
lean_object* v___x_3052_; 
v___x_3052_ = l_List_reverse___redArg(v_a_3051_);
return v___x_3052_;
}
else
{
lean_object* v_head_3053_; lean_object* v_tail_3054_; lean_object* v___x_3056_; uint8_t v_isShared_3057_; uint8_t v_isSharedCheck_3063_; 
v_head_3053_ = lean_ctor_get(v_a_3050_, 0);
v_tail_3054_ = lean_ctor_get(v_a_3050_, 1);
v_isSharedCheck_3063_ = !lean_is_exclusive(v_a_3050_);
if (v_isSharedCheck_3063_ == 0)
{
v___x_3056_ = v_a_3050_;
v_isShared_3057_ = v_isSharedCheck_3063_;
goto v_resetjp_3055_;
}
else
{
lean_inc(v_tail_3054_);
lean_inc(v_head_3053_);
lean_dec(v_a_3050_);
v___x_3056_ = lean_box(0);
v_isShared_3057_ = v_isSharedCheck_3063_;
goto v_resetjp_3055_;
}
v_resetjp_3055_:
{
lean_object* v___x_3058_; lean_object* v___x_3060_; 
v___x_3058_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3058_, 0, v_head_3053_);
if (v_isShared_3057_ == 0)
{
lean_ctor_set(v___x_3056_, 1, v_a_3051_);
lean_ctor_set(v___x_3056_, 0, v___x_3058_);
v___x_3060_ = v___x_3056_;
goto v_reusejp_3059_;
}
else
{
lean_object* v_reuseFailAlloc_3062_; 
v_reuseFailAlloc_3062_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3062_, 0, v___x_3058_);
lean_ctor_set(v_reuseFailAlloc_3062_, 1, v_a_3051_);
v___x_3060_ = v_reuseFailAlloc_3062_;
goto v_reusejp_3059_;
}
v_reusejp_3059_:
{
v_a_3050_ = v_tail_3054_;
v_a_3051_ = v___x_3060_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__4(lean_object* v_a_3064_, lean_object* v_a_3065_){
_start:
{
if (lean_obj_tag(v_a_3064_) == 0)
{
lean_object* v___x_3066_; 
v___x_3066_ = l_List_reverse___redArg(v_a_3065_);
return v___x_3066_;
}
else
{
lean_object* v_head_3067_; lean_object* v_snd_3068_; lean_object* v_snd_3069_; lean_object* v_tail_3070_; lean_object* v___x_3072_; uint8_t v_isShared_3073_; uint8_t v_isSharedCheck_3095_; 
v_head_3067_ = lean_ctor_get(v_a_3064_, 0);
lean_inc(v_head_3067_);
v_snd_3068_ = lean_ctor_get(v_head_3067_, 1);
lean_inc(v_snd_3068_);
v_snd_3069_ = lean_ctor_get(v_snd_3068_, 1);
lean_inc(v_snd_3069_);
v_tail_3070_ = lean_ctor_get(v_a_3064_, 1);
v_isSharedCheck_3095_ = !lean_is_exclusive(v_a_3064_);
if (v_isSharedCheck_3095_ == 0)
{
lean_object* v_unused_3096_; 
v_unused_3096_ = lean_ctor_get(v_a_3064_, 0);
lean_dec(v_unused_3096_);
v___x_3072_ = v_a_3064_;
v_isShared_3073_ = v_isSharedCheck_3095_;
goto v_resetjp_3071_;
}
else
{
lean_inc(v_tail_3070_);
lean_dec(v_a_3064_);
v___x_3072_ = lean_box(0);
v_isShared_3073_ = v_isSharedCheck_3095_;
goto v_resetjp_3071_;
}
v_resetjp_3071_:
{
lean_object* v_fst_3074_; lean_object* v_fst_3075_; lean_object* v_fst_3076_; lean_object* v_snd_3077_; lean_object* v___x_3078_; lean_object* v___x_3079_; lean_object* v___x_3080_; lean_object* v___x_3081_; lean_object* v___x_3082_; lean_object* v___x_3083_; lean_object* v___x_3084_; lean_object* v___x_3085_; lean_object* v___x_3086_; lean_object* v___x_3087_; lean_object* v___x_3088_; lean_object* v___x_3089_; lean_object* v___x_3090_; lean_object* v___x_3092_; 
v_fst_3074_ = lean_ctor_get(v_head_3067_, 0);
lean_inc(v_fst_3074_);
lean_dec(v_head_3067_);
v_fst_3075_ = lean_ctor_get(v_snd_3068_, 0);
lean_inc(v_fst_3075_);
lean_dec(v_snd_3068_);
v_fst_3076_ = lean_ctor_get(v_snd_3069_, 0);
lean_inc(v_fst_3076_);
v_snd_3077_ = lean_ctor_get(v_snd_3069_, 1);
lean_inc(v_snd_3077_);
lean_dec(v_snd_3069_);
v___x_3078_ = l_Lean_JsonNumber_fromNat(v_fst_3074_);
v___x_3079_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3079_, 0, v___x_3078_);
v___x_3080_ = l_Lean_JsonNumber_fromNat(v_fst_3075_);
v___x_3081_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3081_, 0, v___x_3080_);
v___x_3082_ = lp_choreo_Choreo_jInt(v_fst_3076_);
v___x_3083_ = lp_choreo_Choreo_jInt(v_snd_3077_);
v___x_3084_ = lean_unsigned_to_nat(4u);
v___x_3085_ = lean_mk_empty_array_with_capacity(v___x_3084_);
v___x_3086_ = lean_array_push(v___x_3085_, v___x_3079_);
v___x_3087_ = lean_array_push(v___x_3086_, v___x_3081_);
v___x_3088_ = lean_array_push(v___x_3087_, v___x_3082_);
v___x_3089_ = lean_array_push(v___x_3088_, v___x_3083_);
v___x_3090_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3090_, 0, v___x_3089_);
if (v_isShared_3073_ == 0)
{
lean_ctor_set(v___x_3072_, 1, v_a_3065_);
lean_ctor_set(v___x_3072_, 0, v___x_3090_);
v___x_3092_ = v___x_3072_;
goto v_reusejp_3091_;
}
else
{
lean_object* v_reuseFailAlloc_3094_; 
v_reuseFailAlloc_3094_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3094_, 0, v___x_3090_);
lean_ctor_set(v_reuseFailAlloc_3094_, 1, v_a_3065_);
v___x_3092_ = v_reuseFailAlloc_3094_;
goto v_reusejp_3091_;
}
v_reusejp_3091_:
{
v_a_3064_ = v_tail_3070_;
v_a_3065_ = v___x_3092_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneJson(lean_object* v_sc_3106_, uint8_t v_withRules_3107_){
_start:
{
lean_object* v_frames_3108_; lean_object* v_rules_3109_; lean_object* v_holds_3110_; lean_object* v_moves_3111_; lean_object* v_seconds_3112_; lean_object* v_ways_3113_; lean_object* v_genre_3114_; lean_object* v_landing_3115_; lean_object* v_bends_3116_; lean_object* v___x_3117_; lean_object* v___x_3118_; lean_object* v___x_3119_; lean_object* v___x_3120_; lean_object* v___x_3121_; lean_object* v___x_3122_; lean_object* v___x_3123_; lean_object* v___x_3124_; lean_object* v___x_3125_; lean_object* v___x_3126_; lean_object* v___x_3127_; lean_object* v___x_3128_; lean_object* v___x_3129_; lean_object* v___x_3130_; lean_object* v___x_3131_; lean_object* v___x_3132_; lean_object* v___x_3133_; lean_object* v___x_3134_; lean_object* v___x_3135_; lean_object* v___x_3136_; lean_object* v___x_3137_; lean_object* v___x_3138_; lean_object* v___x_3139_; lean_object* v___x_3140_; lean_object* v___x_3141_; lean_object* v___x_3142_; lean_object* v___x_3143_; lean_object* v___x_3144_; lean_object* v___x_3145_; lean_object* v___x_3146_; lean_object* v___x_3147_; lean_object* v___x_3148_; lean_object* v___x_3149_; lean_object* v___x_3150_; lean_object* v___x_3151_; lean_object* v___x_3152_; lean_object* v___x_3153_; lean_object* v___x_3154_; lean_object* v___x_3155_; lean_object* v___y_3157_; 
v_frames_3108_ = lean_ctor_get(v_sc_3106_, 0);
lean_inc(v_frames_3108_);
v_rules_3109_ = lean_ctor_get(v_sc_3106_, 1);
lean_inc(v_rules_3109_);
v_holds_3110_ = lean_ctor_get(v_sc_3106_, 2);
lean_inc(v_holds_3110_);
v_moves_3111_ = lean_ctor_get(v_sc_3106_, 3);
lean_inc(v_moves_3111_);
v_seconds_3112_ = lean_ctor_get(v_sc_3106_, 4);
lean_inc(v_seconds_3112_);
v_ways_3113_ = lean_ctor_get(v_sc_3106_, 5);
lean_inc(v_ways_3113_);
v_genre_3114_ = lean_ctor_get(v_sc_3106_, 6);
lean_inc_ref(v_genre_3114_);
v_landing_3115_ = lean_ctor_get(v_sc_3106_, 7);
lean_inc(v_landing_3115_);
v_bends_3116_ = lean_ctor_get(v_sc_3106_, 8);
lean_inc(v_bends_3116_);
lean_dec_ref(v_sc_3106_);
v___x_3117_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__0));
v___x_3118_ = lean_box(0);
v___x_3119_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__3(v_frames_3108_, v___x_3118_);
v___x_3120_ = lean_array_mk(v___x_3119_);
v___x_3121_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3121_, 0, v___x_3120_);
v___x_3122_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3122_, 0, v___x_3117_);
lean_ctor_set(v___x_3122_, 1, v___x_3121_);
v___x_3123_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__1));
v___x_3124_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_holds_3110_, v___x_3118_);
v___x_3125_ = lean_array_mk(v___x_3124_);
v___x_3126_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3126_, 0, v___x_3125_);
v___x_3127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3127_, 0, v___x_3123_);
lean_ctor_set(v___x_3127_, 1, v___x_3126_);
v___x_3128_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__2));
v___x_3129_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_moves_3111_, v___x_3118_);
v___x_3130_ = lean_array_mk(v___x_3129_);
v___x_3131_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3131_, 0, v___x_3130_);
v___x_3132_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3132_, 0, v___x_3128_);
lean_ctor_set(v___x_3132_, 1, v___x_3131_);
v___x_3133_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__3));
v___x_3134_ = l_Lean_JsonNumber_fromNat(v_seconds_3112_);
v___x_3135_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3135_, 0, v___x_3134_);
v___x_3136_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3136_, 0, v___x_3133_);
lean_ctor_set(v___x_3136_, 1, v___x_3135_);
v___x_3137_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__4));
v___x_3138_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__4(v_bends_3116_, v___x_3118_);
v___x_3139_ = lean_array_mk(v___x_3138_);
v___x_3140_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3140_, 0, v___x_3139_);
v___x_3141_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3141_, 0, v___x_3137_);
lean_ctor_set(v___x_3141_, 1, v___x_3140_);
v___x_3142_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__5));
v___x_3143_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(v_ways_3113_, v___x_3118_);
v___x_3144_ = lean_array_mk(v___x_3143_);
v___x_3145_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3145_, 0, v___x_3144_);
v___x_3146_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3146_, 0, v___x_3142_);
lean_ctor_set(v___x_3146_, 1, v___x_3145_);
v___x_3147_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__6));
v___x_3148_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3148_, 0, v_genre_3114_);
v___x_3149_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3149_, 0, v___x_3147_);
lean_ctor_set(v___x_3149_, 1, v___x_3148_);
v___x_3150_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__7));
v___x_3151_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v_landing_3115_, v___x_3118_);
v___x_3152_ = lean_array_mk(v___x_3151_);
v___x_3153_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3153_, 0, v___x_3152_);
v___x_3154_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3154_, 0, v___x_3150_);
lean_ctor_set(v___x_3154_, 1, v___x_3153_);
v___x_3155_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__8));
if (v_withRules_3107_ == 0)
{
lean_object* v___x_3169_; 
lean_dec(v_rules_3109_);
v___x_3169_ = lean_box(0);
v___y_3157_ = v___x_3169_;
goto v___jp_3156_;
}
else
{
lean_object* v___x_3170_; lean_object* v___x_3171_; lean_object* v___x_3172_; 
v___x_3170_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6(v_rules_3109_, v___x_3118_);
v___x_3171_ = lean_array_mk(v___x_3170_);
v___x_3172_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3172_, 0, v___x_3171_);
v___y_3157_ = v___x_3172_;
goto v___jp_3156_;
}
v___jp_3156_:
{
lean_object* v___x_3158_; lean_object* v___x_3159_; lean_object* v___x_3160_; lean_object* v___x_3161_; lean_object* v___x_3162_; lean_object* v___x_3163_; lean_object* v___x_3164_; lean_object* v___x_3165_; lean_object* v___x_3166_; lean_object* v___x_3167_; lean_object* v___x_3168_; 
v___x_3158_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3158_, 0, v___x_3155_);
lean_ctor_set(v___x_3158_, 1, v___y_3157_);
v___x_3159_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3159_, 0, v___x_3158_);
lean_ctor_set(v___x_3159_, 1, v___x_3118_);
v___x_3160_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3160_, 0, v___x_3154_);
lean_ctor_set(v___x_3160_, 1, v___x_3159_);
v___x_3161_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3161_, 0, v___x_3149_);
lean_ctor_set(v___x_3161_, 1, v___x_3160_);
v___x_3162_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3162_, 0, v___x_3146_);
lean_ctor_set(v___x_3162_, 1, v___x_3161_);
v___x_3163_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3163_, 0, v___x_3141_);
lean_ctor_set(v___x_3163_, 1, v___x_3162_);
v___x_3164_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3164_, 0, v___x_3136_);
lean_ctor_set(v___x_3164_, 1, v___x_3163_);
v___x_3165_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3165_, 0, v___x_3132_);
lean_ctor_set(v___x_3165_, 1, v___x_3164_);
v___x_3166_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3166_, 0, v___x_3127_);
lean_ctor_set(v___x_3166_, 1, v___x_3165_);
v___x_3167_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3167_, 0, v___x_3122_);
lean_ctor_set(v___x_3167_, 1, v___x_3166_);
v___x_3168_ = l_Lean_Json_mkObj(v___x_3167_);
lean_dec_ref_known(v___x_3167_, 2);
return v___x_3168_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_sceneJson___boxed(lean_object* v_sc_3173_, lean_object* v_withRules_3174_){
_start:
{
uint8_t v_withRules_boxed_3175_; lean_object* v_res_3176_; 
v_withRules_boxed_3175_ = lean_unbox(v_withRules_3174_);
v_res_3176_ = lp_choreo_Choreo_sceneJson(v_sc_3173_, v_withRules_boxed_3175_);
return v_res_3176_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_askPhases(lean_object* v_x_3177_){
_start:
{
lean_object* v_k_3179_; lean_object* v_k_3183_; 
switch(lean_obj_tag(v_x_3177_))
{
case 0:
{
lean_object* v_k_3186_; 
v_k_3186_ = lean_ctor_get(v_x_3177_, 0);
lean_inc(v_k_3186_);
lean_dec_ref_known(v_x_3177_, 3);
v_k_3179_ = v_k_3186_;
goto v___jp_3178_;
}
case 1:
{
lean_object* v_k_3187_; 
v_k_3187_ = lean_ctor_get(v_x_3177_, 0);
lean_inc(v_k_3187_);
lean_dec_ref_known(v_x_3177_, 3);
v_k_3179_ = v_k_3187_;
goto v___jp_3178_;
}
case 2:
{
lean_object* v_k_3188_; lean_object* v___x_3190_; uint8_t v_isShared_3191_; uint8_t v_isSharedCheck_3196_; 
v_k_3188_ = lean_ctor_get(v_x_3177_, 0);
v_isSharedCheck_3196_ = !lean_is_exclusive(v_x_3177_);
if (v_isSharedCheck_3196_ == 0)
{
lean_object* v_unused_3197_; 
v_unused_3197_ = lean_ctor_get(v_x_3177_, 1);
lean_dec(v_unused_3197_);
v___x_3190_ = v_x_3177_;
v_isShared_3191_ = v_isSharedCheck_3196_;
goto v_resetjp_3189_;
}
else
{
lean_inc(v_k_3188_);
lean_dec(v_x_3177_);
v___x_3190_ = lean_box(0);
v_isShared_3191_ = v_isSharedCheck_3196_;
goto v_resetjp_3189_;
}
v_resetjp_3189_:
{
lean_object* v___x_3192_; lean_object* v___x_3194_; 
v___x_3192_ = lean_box(0);
if (v_isShared_3191_ == 0)
{
lean_ctor_set_tag(v___x_3190_, 1);
lean_ctor_set(v___x_3190_, 1, v___x_3192_);
v___x_3194_ = v___x_3190_;
goto v_reusejp_3193_;
}
else
{
lean_object* v_reuseFailAlloc_3195_; 
v_reuseFailAlloc_3195_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3195_, 0, v_k_3188_);
lean_ctor_set(v_reuseFailAlloc_3195_, 1, v___x_3192_);
v___x_3194_ = v_reuseFailAlloc_3195_;
goto v_reusejp_3193_;
}
v_reusejp_3193_:
{
return v___x_3194_;
}
}
}
case 4:
{
lean_object* v_k_u2080_3198_; lean_object* v_k_u2081_3199_; lean_object* v___x_3200_; lean_object* v___x_3201_; lean_object* v___x_3202_; 
v_k_u2080_3198_ = lean_ctor_get(v_x_3177_, 0);
lean_inc(v_k_u2080_3198_);
v_k_u2081_3199_ = lean_ctor_get(v_x_3177_, 1);
lean_inc(v_k_u2081_3199_);
lean_dec_ref_known(v_x_3177_, 4);
v___x_3200_ = lean_box(0);
v___x_3201_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3201_, 0, v_k_u2081_3199_);
lean_ctor_set(v___x_3201_, 1, v___x_3200_);
v___x_3202_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3202_, 0, v_k_u2080_3198_);
lean_ctor_set(v___x_3202_, 1, v___x_3201_);
return v___x_3202_;
}
case 5:
{
lean_object* v_k_3203_; lean_object* v___x_3205_; uint8_t v_isShared_3206_; uint8_t v_isSharedCheck_3211_; 
v_k_3203_ = lean_ctor_get(v_x_3177_, 0);
v_isSharedCheck_3211_ = !lean_is_exclusive(v_x_3177_);
if (v_isSharedCheck_3211_ == 0)
{
lean_object* v_unused_3212_; 
v_unused_3212_ = lean_ctor_get(v_x_3177_, 1);
lean_dec(v_unused_3212_);
v___x_3205_ = v_x_3177_;
v_isShared_3206_ = v_isSharedCheck_3211_;
goto v_resetjp_3204_;
}
else
{
lean_inc(v_k_3203_);
lean_dec(v_x_3177_);
v___x_3205_ = lean_box(0);
v_isShared_3206_ = v_isSharedCheck_3211_;
goto v_resetjp_3204_;
}
v_resetjp_3204_:
{
lean_object* v___x_3207_; lean_object* v___x_3209_; 
v___x_3207_ = lean_box(0);
if (v_isShared_3206_ == 0)
{
lean_ctor_set_tag(v___x_3205_, 1);
lean_ctor_set(v___x_3205_, 1, v___x_3207_);
v___x_3209_ = v___x_3205_;
goto v_reusejp_3208_;
}
else
{
lean_object* v_reuseFailAlloc_3210_; 
v_reuseFailAlloc_3210_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3210_, 0, v_k_3203_);
lean_ctor_set(v_reuseFailAlloc_3210_, 1, v___x_3207_);
v___x_3209_ = v_reuseFailAlloc_3210_;
goto v_reusejp_3208_;
}
v_reusejp_3208_:
{
return v___x_3209_;
}
}
}
case 7:
{
lean_object* v_k_3213_; 
v_k_3213_ = lean_ctor_get(v_x_3177_, 0);
lean_inc(v_k_3213_);
lean_dec_ref_known(v_x_3177_, 4);
v_k_3183_ = v_k_3213_;
goto v___jp_3182_;
}
case 8:
{
lean_object* v_k_3214_; 
v_k_3214_ = lean_ctor_get(v_x_3177_, 0);
lean_inc(v_k_3214_);
lean_dec_ref_known(v_x_3177_, 4);
v_k_3183_ = v_k_3214_;
goto v___jp_3182_;
}
default: 
{
lean_object* v_k_3215_; lean_object* v___x_3216_; lean_object* v___x_3217_; 
v_k_3215_ = lean_ctor_get(v_x_3177_, 0);
lean_inc(v_k_3215_);
lean_dec_ref(v_x_3177_);
v___x_3216_ = lean_box(0);
v___x_3217_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3217_, 0, v_k_3215_);
lean_ctor_set(v___x_3217_, 1, v___x_3216_);
return v___x_3217_;
}
}
v___jp_3178_:
{
lean_object* v___x_3180_; lean_object* v___x_3181_; 
v___x_3180_ = lean_box(0);
v___x_3181_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3181_, 0, v_k_3179_);
lean_ctor_set(v___x_3181_, 1, v___x_3180_);
return v___x_3181_;
}
v___jp_3182_:
{
lean_object* v___x_3184_; lean_object* v___x_3185_; 
v___x_3184_ = lean_box(0);
v___x_3185_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3185_, 0, v_k_3183_);
lean_ctor_set(v___x_3185_, 1, v___x_3184_);
return v___x_3185_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(lean_object* v_cfg_3233_, lean_object* v_names_3234_, lean_object* v_as_x27_3235_, lean_object* v_b_3236_){
_start:
{
if (lean_obj_tag(v_as_x27_3235_) == 0)
{
lean_dec_ref(v_names_3234_);
lean_dec_ref(v_cfg_3233_);
return v_b_3236_;
}
else
{
lean_object* v_head_3237_; lean_object* v_snd_3238_; lean_object* v_fst_3239_; lean_object* v_tail_3240_; lean_object* v_snd_3241_; lean_object* v_fst_3242_; lean_object* v___x_3244_; uint8_t v_isShared_3245_; uint8_t v_isSharedCheck_3410_; 
v_head_3237_ = lean_ctor_get(v_as_x27_3235_, 0);
v_snd_3238_ = lean_ctor_get(v_b_3236_, 1);
lean_inc(v_snd_3238_);
v_fst_3239_ = lean_ctor_get(v_head_3237_, 0);
v_tail_3240_ = lean_ctor_get(v_as_x27_3235_, 1);
v_snd_3241_ = lean_ctor_get(v_head_3237_, 1);
v_fst_3242_ = lean_ctor_get(v_b_3236_, 0);
v_isSharedCheck_3410_ = !lean_is_exclusive(v_b_3236_);
if (v_isSharedCheck_3410_ == 0)
{
lean_object* v_unused_3411_; 
v_unused_3411_ = lean_ctor_get(v_b_3236_, 1);
lean_dec(v_unused_3411_);
v___x_3244_ = v_b_3236_;
v_isShared_3245_ = v_isSharedCheck_3410_;
goto v_resetjp_3243_;
}
else
{
lean_inc(v_fst_3242_);
lean_dec(v_b_3236_);
v___x_3244_ = lean_box(0);
v_isShared_3245_ = v_isSharedCheck_3410_;
goto v_resetjp_3243_;
}
v_resetjp_3243_:
{
lean_object* v_fst_3246_; lean_object* v_snd_3247_; lean_object* v___x_3249_; uint8_t v_isShared_3250_; uint8_t v_isSharedCheck_3409_; 
v_fst_3246_ = lean_ctor_get(v_snd_3238_, 0);
v_snd_3247_ = lean_ctor_get(v_snd_3238_, 1);
v_isSharedCheck_3409_ = !lean_is_exclusive(v_snd_3238_);
if (v_isSharedCheck_3409_ == 0)
{
v___x_3249_ = v_snd_3238_;
v_isShared_3250_ = v_isSharedCheck_3409_;
goto v_resetjp_3248_;
}
else
{
lean_inc(v_snd_3247_);
lean_inc(v_fst_3246_);
lean_dec(v_snd_3238_);
v___x_3249_ = lean_box(0);
v_isShared_3250_ = v_isSharedCheck_3409_;
goto v_resetjp_3248_;
}
v_resetjp_3248_:
{
lean_object* v_name_3251_; lean_object* v_sectionName_3252_; lean_object* v_surface_3253_; lean_object* v_kind_3254_; lean_object* v_step_3255_; lean_object* v_requiresText_3256_; lean_object* v_ensuresText_3257_; lean_object* v_before_3258_; lean_object* v_after_3259_; lean_object* v___y_3261_; lean_object* v___y_3262_; lean_object* v___y_3263_; uint8_t v___y_3264_; lean_object* v___y_3265_; lean_object* v___y_3266_; lean_object* v___y_3267_; lean_object* v___y_3268_; lean_object* v___y_3269_; lean_object* v___y_3270_; lean_object* v___y_3271_; lean_object* v___y_3272_; lean_object* v___y_3273_; lean_object* v___y_3274_; lean_object* v___y_3275_; lean_object* v___y_3276_; lean_object* v___y_3277_; lean_object* v_op_3318_; lean_object* v_requires_3319_; lean_object* v_ensures_3320_; lean_object* v___y_3322_; lean_object* v___y_3323_; lean_object* v___y_3324_; uint8_t v___y_3325_; lean_object* v___y_3326_; lean_object* v___y_3327_; lean_object* v___y_3328_; lean_object* v___y_3329_; lean_object* v___y_3330_; lean_object* v___y_3331_; lean_object* v___y_3332_; lean_object* v___y_3333_; lean_object* v___y_3334_; lean_object* v___y_3335_; lean_object* v___y_3336_; lean_object* v___y_3337_; uint8_t v___x_3344_; uint8_t v___x_3345_; uint8_t v___x_3346_; lean_object* v___y_3348_; lean_object* v___y_3349_; lean_object* v___y_3350_; lean_object* v___y_3351_; lean_object* v___y_3352_; lean_object* v___y_3353_; uint8_t v___y_3354_; lean_object* v___y_3355_; uint8_t v___y_3386_; uint8_t v___x_3407_; 
v_name_3251_ = lean_ctor_get(v_fst_3239_, 0);
v_sectionName_3252_ = lean_ctor_get(v_fst_3239_, 1);
v_surface_3253_ = lean_ctor_get(v_fst_3239_, 2);
v_kind_3254_ = lean_ctor_get(v_fst_3239_, 3);
v_step_3255_ = lean_ctor_get(v_fst_3239_, 5);
v_requiresText_3256_ = lean_ctor_get(v_fst_3239_, 6);
v_ensuresText_3257_ = lean_ctor_get(v_fst_3239_, 7);
v_before_3258_ = lean_ctor_get(v_fst_3239_, 8);
v_after_3259_ = lean_ctor_get(v_fst_3239_, 9);
v_op_3318_ = lean_ctor_get(v_step_3255_, 0);
v_requires_3319_ = lean_ctor_get(v_step_3255_, 1);
v_ensures_3320_ = lean_ctor_get(v_step_3255_, 2);
lean_inc(v_requires_3319_);
v___x_3344_ = lp_choreo_Choreo_Pred_holds(v_requires_3319_, v_fst_3242_);
lean_inc_ref_n(v_cfg_3233_, 2);
lean_inc_ref(v_op_3318_);
v___x_3345_ = lp_choreo_Choreo_Op_enabled(v_op_3318_, v_cfg_3233_, v_fst_3242_);
lean_inc_ref(v_step_3255_);
v___x_3346_ = lp_choreo_Choreo_Step_ok(v_step_3255_, v_cfg_3233_, v_fst_3242_);
v___x_3407_ = lean_unbox(v_snd_3247_);
if (v___x_3407_ == 0)
{
uint8_t v___x_3408_; 
v___x_3408_ = lean_unbox(v_snd_3247_);
lean_dec(v_snd_3247_);
v___y_3386_ = v___x_3408_;
goto v___jp_3385_;
}
else
{
lean_dec(v_snd_3247_);
v___y_3386_ = v___x_3346_;
goto v___jp_3385_;
}
v___jp_3260_:
{
lean_object* v___x_3278_; lean_object* v___x_3280_; 
lean_inc_ref(v___y_3277_);
v___x_3278_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3278_, 0, v___y_3277_);
lean_inc_ref(v___y_3266_);
if (v_isShared_3250_ == 0)
{
lean_ctor_set(v___x_3249_, 1, v___x_3278_);
lean_ctor_set(v___x_3249_, 0, v___y_3266_);
v___x_3280_ = v___x_3249_;
goto v_reusejp_3279_;
}
else
{
lean_object* v_reuseFailAlloc_3317_; 
v_reuseFailAlloc_3317_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3317_, 0, v___y_3266_);
lean_ctor_set(v_reuseFailAlloc_3317_, 1, v___x_3278_);
v___x_3280_ = v_reuseFailAlloc_3317_;
goto v_reusejp_3279_;
}
v_reusejp_3279_:
{
lean_object* v___x_3281_; lean_object* v___x_3282_; lean_object* v___x_3283_; lean_object* v___x_3284_; lean_object* v___x_3285_; lean_object* v___x_3287_; 
v___x_3281_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__0));
v___x_3282_ = lean_box(0);
lean_inc(v_before_3258_);
v___x_3283_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(v_before_3258_, v___x_3282_);
v___x_3284_ = lean_array_mk(v___x_3283_);
v___x_3285_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3285_, 0, v___x_3284_);
if (v_isShared_3245_ == 0)
{
lean_ctor_set(v___x_3244_, 1, v___x_3285_);
lean_ctor_set(v___x_3244_, 0, v___x_3281_);
v___x_3287_ = v___x_3244_;
goto v_reusejp_3286_;
}
else
{
lean_object* v_reuseFailAlloc_3316_; 
v_reuseFailAlloc_3316_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3316_, 0, v___x_3281_);
lean_ctor_set(v_reuseFailAlloc_3316_, 1, v___x_3285_);
v___x_3287_ = v_reuseFailAlloc_3316_;
goto v_reusejp_3286_;
}
v_reusejp_3286_:
{
lean_object* v___x_3288_; lean_object* v___x_3289_; lean_object* v___x_3290_; lean_object* v___x_3291_; lean_object* v___x_3292_; lean_object* v___x_3293_; lean_object* v___x_3294_; lean_object* v___x_3295_; lean_object* v___x_3296_; lean_object* v___x_3297_; lean_object* v___x_3298_; lean_object* v___x_3299_; lean_object* v___x_3300_; lean_object* v___x_3301_; lean_object* v___x_3302_; lean_object* v___x_3303_; lean_object* v___x_3304_; lean_object* v___x_3305_; lean_object* v___x_3306_; lean_object* v___x_3307_; lean_object* v___x_3308_; lean_object* v___x_3309_; lean_object* v___x_3310_; lean_object* v___x_3311_; lean_object* v___x_3312_; lean_object* v___x_3313_; lean_object* v___x_3314_; 
v___x_3288_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__1));
lean_inc_n(v_after_3259_, 2);
v___x_3289_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__0(v_after_3259_, v___x_3282_);
v___x_3290_ = lean_array_mk(v___x_3289_);
v___x_3291_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3291_, 0, v___x_3290_);
v___x_3292_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3292_, 0, v___x_3288_);
lean_ctor_set(v___x_3292_, 1, v___x_3291_);
v___x_3293_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3293_, 0, v___x_3292_);
lean_ctor_set(v___x_3293_, 1, v___x_3282_);
v___x_3294_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3294_, 0, v___x_3287_);
lean_ctor_set(v___x_3294_, 1, v___x_3293_);
v___x_3295_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3295_, 0, v___x_3280_);
lean_ctor_set(v___x_3295_, 1, v___x_3294_);
v___x_3296_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3296_, 0, v___y_3275_);
lean_ctor_set(v___x_3296_, 1, v___x_3295_);
v___x_3297_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3297_, 0, v___y_3270_);
lean_ctor_set(v___x_3297_, 1, v___x_3296_);
v___x_3298_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3298_, 0, v___y_3276_);
lean_ctor_set(v___x_3298_, 1, v___x_3297_);
v___x_3299_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3299_, 0, v___y_3267_);
lean_ctor_set(v___x_3299_, 1, v___x_3298_);
v___x_3300_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3300_, 0, v___y_3261_);
lean_ctor_set(v___x_3300_, 1, v___x_3299_);
v___x_3301_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3301_, 0, v___y_3273_);
lean_ctor_set(v___x_3301_, 1, v___x_3300_);
v___x_3302_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3302_, 0, v___y_3274_);
lean_ctor_set(v___x_3302_, 1, v___x_3301_);
v___x_3303_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3303_, 0, v___y_3265_);
lean_ctor_set(v___x_3303_, 1, v___x_3302_);
v___x_3304_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3304_, 0, v___y_3262_);
lean_ctor_set(v___x_3304_, 1, v___x_3303_);
v___x_3305_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3305_, 0, v___y_3271_);
lean_ctor_set(v___x_3305_, 1, v___x_3304_);
v___x_3306_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3306_, 0, v___y_3272_);
lean_ctor_set(v___x_3306_, 1, v___x_3305_);
v___x_3307_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3307_, 0, v___y_3263_);
lean_ctor_set(v___x_3307_, 1, v___x_3306_);
v___x_3308_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3308_, 0, v___y_3268_);
lean_ctor_set(v___x_3308_, 1, v___x_3307_);
v___x_3309_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3309_, 0, v___y_3269_);
lean_ctor_set(v___x_3309_, 1, v___x_3308_);
v___x_3310_ = l_Lean_Json_mkObj(v___x_3309_);
lean_dec_ref_known(v___x_3309_, 2);
v___x_3311_ = lean_array_push(v_fst_3246_, v___x_3310_);
v___x_3312_ = lean_box(v___y_3264_);
v___x_3313_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3313_, 0, v___x_3311_);
lean_ctor_set(v___x_3313_, 1, v___x_3312_);
v___x_3314_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3314_, 0, v_after_3259_);
lean_ctor_set(v___x_3314_, 1, v___x_3313_);
v_as_x27_3235_ = v_tail_3240_;
v_b_3236_ = v___x_3314_;
goto _start;
}
}
}
v___jp_3321_:
{
lean_object* v___x_3338_; lean_object* v___x_3339_; lean_object* v___x_3340_; 
v___x_3338_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3338_, 0, v___y_3337_);
lean_inc_ref(v___y_3327_);
v___x_3339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3339_, 0, v___y_3327_);
lean_ctor_set(v___x_3339_, 1, v___x_3338_);
v___x_3340_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__2));
switch(lean_obj_tag(v_op_3318_))
{
case 2:
{
lean_object* v___x_3341_; 
v___x_3341_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__3));
v___y_3261_ = v___y_3322_;
v___y_3262_ = v___y_3323_;
v___y_3263_ = v___y_3324_;
v___y_3264_ = v___y_3325_;
v___y_3265_ = v___y_3326_;
v___y_3266_ = v___x_3340_;
v___y_3267_ = v___y_3328_;
v___y_3268_ = v___y_3329_;
v___y_3269_ = v___y_3330_;
v___y_3270_ = v___y_3331_;
v___y_3271_ = v___y_3332_;
v___y_3272_ = v___y_3333_;
v___y_3273_ = v___y_3335_;
v___y_3274_ = v___y_3334_;
v___y_3275_ = v___x_3339_;
v___y_3276_ = v___y_3336_;
v___y_3277_ = v___x_3341_;
goto v___jp_3260_;
}
case 3:
{
lean_object* v___x_3342_; 
v___x_3342_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__3));
v___y_3261_ = v___y_3322_;
v___y_3262_ = v___y_3323_;
v___y_3263_ = v___y_3324_;
v___y_3264_ = v___y_3325_;
v___y_3265_ = v___y_3326_;
v___y_3266_ = v___x_3340_;
v___y_3267_ = v___y_3328_;
v___y_3268_ = v___y_3329_;
v___y_3269_ = v___y_3330_;
v___y_3270_ = v___y_3331_;
v___y_3271_ = v___y_3332_;
v___y_3272_ = v___y_3333_;
v___y_3273_ = v___y_3335_;
v___y_3274_ = v___y_3334_;
v___y_3275_ = v___x_3339_;
v___y_3276_ = v___y_3336_;
v___y_3277_ = v___x_3342_;
goto v___jp_3260_;
}
default: 
{
lean_object* v___x_3343_; 
v___x_3343_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__4));
v___y_3261_ = v___y_3322_;
v___y_3262_ = v___y_3323_;
v___y_3263_ = v___y_3324_;
v___y_3264_ = v___y_3325_;
v___y_3265_ = v___y_3326_;
v___y_3266_ = v___x_3340_;
v___y_3267_ = v___y_3328_;
v___y_3268_ = v___y_3329_;
v___y_3269_ = v___y_3330_;
v___y_3270_ = v___y_3331_;
v___y_3271_ = v___y_3332_;
v___y_3272_ = v___y_3333_;
v___y_3273_ = v___y_3335_;
v___y_3274_ = v___y_3334_;
v___y_3275_ = v___x_3339_;
v___y_3276_ = v___y_3336_;
v___y_3277_ = v___x_3343_;
goto v___jp_3260_;
}
}
}
v___jp_3347_:
{
lean_object* v___x_3356_; lean_object* v___x_3357_; lean_object* v___x_3358_; lean_object* v___x_3359_; lean_object* v___x_3360_; lean_object* v___x_3361_; lean_object* v___x_3362_; lean_object* v___x_3363_; lean_object* v___x_3364_; lean_object* v___x_3365_; lean_object* v___x_3366_; lean_object* v___x_3367_; lean_object* v___x_3368_; lean_object* v___x_3369_; lean_object* v___x_3370_; lean_object* v___x_3371_; lean_object* v___x_3372_; lean_object* v___x_3373_; lean_object* v___x_3374_; lean_object* v___x_3375_; lean_object* v___x_3376_; lean_object* v___x_3377_; lean_object* v___x_3378_; lean_object* v___x_3379_; lean_object* v___x_3380_; lean_object* v___x_3381_; lean_object* v___x_3382_; 
v___x_3356_ = l_Lean_JsonNumber_fromNat(v___y_3355_);
v___x_3357_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3357_, 0, v___x_3356_);
lean_inc_ref(v___y_3353_);
v___x_3358_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3358_, 0, v___y_3353_);
lean_ctor_set(v___x_3358_, 1, v___x_3357_);
v___x_3359_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__5));
lean_inc_ref(v_requiresText_3256_);
v___x_3360_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3360_, 0, v_requiresText_3256_);
v___x_3361_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3361_, 0, v___x_3359_);
lean_ctor_set(v___x_3361_, 1, v___x_3360_);
v___x_3362_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__6));
lean_inc_ref(v_ensuresText_3257_);
v___x_3363_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3363_, 0, v_ensuresText_3257_);
v___x_3364_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3364_, 0, v___x_3362_);
lean_ctor_set(v___x_3364_, 1, v___x_3363_);
v___x_3365_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__7));
lean_inc(v_requires_3319_);
v___x_3366_ = lp_choreo_Choreo_predL(v_requires_3319_);
v___x_3367_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3367_, 0, v___x_3366_);
v___x_3368_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3368_, 0, v___x_3365_);
lean_ctor_set(v___x_3368_, 1, v___x_3367_);
v___x_3369_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__8));
lean_inc(v_ensures_3320_);
v___x_3370_ = lp_choreo_Choreo_predL(v_ensures_3320_);
v___x_3371_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3371_, 0, v___x_3370_);
v___x_3372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3372_, 0, v___x_3369_);
lean_ctor_set(v___x_3372_, 1, v___x_3371_);
v___x_3373_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__9));
v___x_3374_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3374_, 0, v___x_3344_);
v___x_3375_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3375_, 0, v___x_3373_);
lean_ctor_set(v___x_3375_, 1, v___x_3374_);
v___x_3376_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__10));
v___x_3377_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3377_, 0, v___x_3345_);
v___x_3378_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3378_, 0, v___x_3376_);
lean_ctor_set(v___x_3378_, 1, v___x_3377_);
v___x_3379_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
v___x_3380_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3380_, 0, v___x_3346_);
v___x_3381_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3381_, 0, v___x_3379_);
lean_ctor_set(v___x_3381_, 1, v___x_3380_);
v___x_3382_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11));
if (v___x_3344_ == 0)
{
lean_object* v___x_3383_; 
lean_inc(v_requires_3319_);
lean_inc_ref(v_names_3234_);
v___x_3383_ = lp_choreo_Choreo_Pred_whyNot(v_names_3234_, v_fst_3242_, v_requires_3319_);
lean_dec(v_fst_3242_);
v___y_3322_ = v___x_3372_;
v___y_3323_ = v___x_3358_;
v___y_3324_ = v___y_3352_;
v___y_3325_ = v___y_3354_;
v___y_3326_ = v___x_3361_;
v___y_3327_ = v___x_3382_;
v___y_3328_ = v___x_3375_;
v___y_3329_ = v___y_3348_;
v___y_3330_ = v___y_3349_;
v___y_3331_ = v___x_3381_;
v___y_3332_ = v___y_3351_;
v___y_3333_ = v___y_3350_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3368_;
v___y_3336_ = v___x_3378_;
v___y_3337_ = v___x_3383_;
goto v___jp_3321_;
}
else
{
lean_object* v___x_3384_; 
lean_dec(v_fst_3242_);
v___x_3384_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
v___y_3322_ = v___x_3372_;
v___y_3323_ = v___x_3358_;
v___y_3324_ = v___y_3352_;
v___y_3325_ = v___y_3354_;
v___y_3326_ = v___x_3361_;
v___y_3327_ = v___x_3382_;
v___y_3328_ = v___x_3375_;
v___y_3329_ = v___y_3348_;
v___y_3330_ = v___y_3349_;
v___y_3331_ = v___x_3381_;
v___y_3332_ = v___y_3351_;
v___y_3333_ = v___y_3350_;
v___y_3334_ = v___x_3364_;
v___y_3335_ = v___x_3368_;
v___y_3336_ = v___x_3378_;
v___y_3337_ = v___x_3384_;
goto v___jp_3321_;
}
}
v___jp_3385_:
{
lean_object* v___x_3387_; lean_object* v___x_3388_; lean_object* v___x_3389_; lean_object* v___x_3390_; lean_object* v___x_3391_; lean_object* v___x_3392_; lean_object* v___x_3393_; lean_object* v___x_3394_; lean_object* v___x_3395_; lean_object* v___x_3396_; lean_object* v___x_3397_; lean_object* v___x_3398_; lean_object* v___x_3399_; lean_object* v___x_3400_; lean_object* v___x_3401_; lean_object* v___x_3402_; lean_object* v___x_3403_; lean_object* v___x_3404_; 
v___x_3387_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__0));
lean_inc(v_snd_3241_);
v___x_3388_ = l_Lean_JsonNumber_fromNat(v_snd_3241_);
v___x_3389_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3389_, 0, v___x_3388_);
v___x_3390_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3390_, 0, v___x_3387_);
lean_ctor_set(v___x_3390_, 1, v___x_3389_);
v___x_3391_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__12));
lean_inc(v_surface_3253_);
v___x_3392_ = l_Lean_JsonNumber_fromNat(v_surface_3253_);
v___x_3393_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3393_, 0, v___x_3392_);
v___x_3394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3394_, 0, v___x_3391_);
lean_ctor_set(v___x_3394_, 1, v___x_3393_);
v___x_3395_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__13));
lean_inc_ref(v_sectionName_3252_);
v___x_3396_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3396_, 0, v_sectionName_3252_);
v___x_3397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3397_, 0, v___x_3395_);
lean_ctor_set(v___x_3397_, 1, v___x_3396_);
v___x_3398_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0));
lean_inc_ref(v_name_3251_);
v___x_3399_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3399_, 0, v_name_3251_);
v___x_3400_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3400_, 0, v___x_3398_);
lean_ctor_set(v___x_3400_, 1, v___x_3399_);
v___x_3401_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
lean_inc_ref(v_kind_3254_);
v___x_3402_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3402_, 0, v_kind_3254_);
v___x_3403_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3403_, 0, v___x_3401_);
lean_ctor_set(v___x_3403_, 1, v___x_3402_);
v___x_3404_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__14));
if (lean_obj_tag(v_op_3318_) == 3)
{
lean_object* v_beats_3405_; 
v_beats_3405_ = lean_ctor_get(v_op_3318_, 4);
lean_inc(v_beats_3405_);
v___y_3348_ = v___x_3394_;
v___y_3349_ = v___x_3390_;
v___y_3350_ = v___x_3400_;
v___y_3351_ = v___x_3403_;
v___y_3352_ = v___x_3397_;
v___y_3353_ = v___x_3404_;
v___y_3354_ = v___y_3386_;
v___y_3355_ = v_beats_3405_;
goto v___jp_3347_;
}
else
{
lean_object* v_beats_3406_; 
v_beats_3406_ = lean_ctor_get(v_op_3318_, 1);
lean_inc(v_beats_3406_);
v___y_3348_ = v___x_3394_;
v___y_3349_ = v___x_3390_;
v___y_3350_ = v___x_3400_;
v___y_3351_ = v___x_3403_;
v___y_3352_ = v___x_3397_;
v___y_3353_ = v___x_3404_;
v___y_3354_ = v___y_3386_;
v___y_3355_ = v_beats_3406_;
goto v___jp_3347_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___boxed(lean_object* v_cfg_3412_, lean_object* v_names_3413_, lean_object* v_as_x27_3414_, lean_object* v_b_3415_){
_start:
{
lean_object* v_res_3416_; 
v_res_3416_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(v_cfg_3412_, v_names_3413_, v_as_x27_3414_, v_b_3415_);
lean_dec(v_as_x27_3414_);
return v_res_3416_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_programJson(lean_object* v_cfg_3423_, lean_object* v_steps_3424_, lean_object* v_start_3425_, lean_object* v_names_3426_){
_start:
{
lean_object* v___x_3427_; lean_object* v___x_3428_; lean_object* v___x_3429_; lean_object* v___x_3430_; lean_object* v___x_3431_; lean_object* v_snd_3432_; lean_object* v___x_3434_; uint8_t v_isShared_3435_; uint8_t v_isSharedCheck_3457_; 
v___x_3427_ = lean_unsigned_to_nat(0u);
v___x_3428_ = l_List_zipIdxTR___redArg(v_steps_3424_, v___x_3427_);
v___x_3429_ = ((lean_object*)(lp_choreo_Choreo_programJson___closed__0));
v___x_3430_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3430_, 0, v_start_3425_);
lean_ctor_set(v___x_3430_, 1, v___x_3429_);
v___x_3431_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(v_cfg_3423_, v_names_3426_, v___x_3428_, v___x_3430_);
lean_dec(v___x_3428_);
v_snd_3432_ = lean_ctor_get(v___x_3431_, 1);
v_isSharedCheck_3457_ = !lean_is_exclusive(v___x_3431_);
if (v_isSharedCheck_3457_ == 0)
{
lean_object* v_unused_3458_; 
v_unused_3458_ = lean_ctor_get(v___x_3431_, 0);
lean_dec(v_unused_3458_);
v___x_3434_ = v___x_3431_;
v_isShared_3435_ = v_isSharedCheck_3457_;
goto v_resetjp_3433_;
}
else
{
lean_inc(v_snd_3432_);
lean_dec(v___x_3431_);
v___x_3434_ = lean_box(0);
v_isShared_3435_ = v_isSharedCheck_3457_;
goto v_resetjp_3433_;
}
v_resetjp_3433_:
{
lean_object* v_fst_3436_; lean_object* v_snd_3437_; lean_object* v___x_3439_; uint8_t v_isShared_3440_; uint8_t v_isSharedCheck_3456_; 
v_fst_3436_ = lean_ctor_get(v_snd_3432_, 0);
v_snd_3437_ = lean_ctor_get(v_snd_3432_, 1);
v_isSharedCheck_3456_ = !lean_is_exclusive(v_snd_3432_);
if (v_isSharedCheck_3456_ == 0)
{
v___x_3439_ = v_snd_3432_;
v_isShared_3440_ = v_isSharedCheck_3456_;
goto v_resetjp_3438_;
}
else
{
lean_inc(v_snd_3437_);
lean_inc(v_fst_3436_);
lean_dec(v_snd_3432_);
v___x_3439_ = lean_box(0);
v_isShared_3440_ = v_isSharedCheck_3456_;
goto v_resetjp_3438_;
}
v_resetjp_3438_:
{
lean_object* v___x_3441_; lean_object* v___x_3442_; lean_object* v___x_3444_; 
v___x_3441_ = ((lean_object*)(lp_choreo_Choreo_programJson___closed__1));
v___x_3442_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3442_, 0, v_fst_3436_);
if (v_isShared_3440_ == 0)
{
lean_ctor_set(v___x_3439_, 1, v___x_3442_);
lean_ctor_set(v___x_3439_, 0, v___x_3441_);
v___x_3444_ = v___x_3439_;
goto v_reusejp_3443_;
}
else
{
lean_object* v_reuseFailAlloc_3455_; 
v_reuseFailAlloc_3455_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3455_, 0, v___x_3441_);
lean_ctor_set(v_reuseFailAlloc_3455_, 1, v___x_3442_);
v___x_3444_ = v_reuseFailAlloc_3455_;
goto v_reusejp_3443_;
}
v_reusejp_3443_:
{
lean_object* v___x_3445_; lean_object* v___x_3446_; uint8_t v___x_3447_; lean_object* v___x_3449_; 
v___x_3445_ = ((lean_object*)(lp_choreo_Choreo_programJson___closed__2));
v___x_3446_ = lean_alloc_ctor(1, 0, 1);
v___x_3447_ = lean_unbox(v_snd_3437_);
lean_dec(v_snd_3437_);
lean_ctor_set_uint8(v___x_3446_, 0, v___x_3447_);
if (v_isShared_3435_ == 0)
{
lean_ctor_set(v___x_3434_, 1, v___x_3446_);
lean_ctor_set(v___x_3434_, 0, v___x_3445_);
v___x_3449_ = v___x_3434_;
goto v_reusejp_3448_;
}
else
{
lean_object* v_reuseFailAlloc_3454_; 
v_reuseFailAlloc_3454_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3454_, 0, v___x_3445_);
lean_ctor_set(v_reuseFailAlloc_3454_, 1, v___x_3446_);
v___x_3449_ = v_reuseFailAlloc_3454_;
goto v_reusejp_3448_;
}
v_reusejp_3448_:
{
lean_object* v___x_3450_; lean_object* v___x_3451_; lean_object* v___x_3452_; lean_object* v___x_3453_; 
v___x_3450_ = lean_box(0);
v___x_3451_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3451_, 0, v___x_3449_);
lean_ctor_set(v___x_3451_, 1, v___x_3450_);
v___x_3452_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3452_, 0, v___x_3444_);
lean_ctor_set(v___x_3452_, 1, v___x_3451_);
v___x_3453_ = l_Lean_Json_mkObj(v___x_3452_);
lean_dec_ref_known(v___x_3452_, 2);
return v___x_3453_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0(lean_object* v_cfg_3459_, lean_object* v_names_3460_, lean_object* v_as_3461_, lean_object* v_as_x27_3462_, lean_object* v_b_3463_, lean_object* v_a_3464_){
_start:
{
lean_object* v___x_3465_; 
v___x_3465_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg(v_cfg_3459_, v_names_3460_, v_as_x27_3462_, v_b_3463_);
return v___x_3465_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___boxed(lean_object* v_cfg_3466_, lean_object* v_names_3467_, lean_object* v_as_3468_, lean_object* v_as_x27_3469_, lean_object* v_b_3470_, lean_object* v_a_3471_){
_start:
{
lean_object* v_res_3472_; 
v_res_3472_ = lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0(v_cfg_3466_, v_names_3467_, v_as_3468_, v_as_x27_3469_, v_b_3470_, v_a_3471_);
lean_dec(v_as_x27_3469_);
lean_dec(v_as_3468_);
return v_res_3472_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4(lean_object* v_labels_3473_, lean_object* v_c_3474_, lean_object* v_names_3475_, lean_object* v_a_3476_, lean_object* v_a_3477_){
_start:
{
if (lean_obj_tag(v_a_3476_) == 0)
{
lean_object* v___x_3478_; 
lean_dec_ref(v_names_3475_);
lean_dec_ref(v_c_3474_);
v___x_3478_ = l_List_reverse___redArg(v_a_3477_);
return v___x_3478_;
}
else
{
lean_object* v_head_3479_; lean_object* v_tail_3480_; lean_object* v___x_3482_; uint8_t v_isShared_3483_; uint8_t v_isSharedCheck_3500_; 
v_head_3479_ = lean_ctor_get(v_a_3476_, 0);
v_tail_3480_ = lean_ctor_get(v_a_3476_, 1);
v_isSharedCheck_3500_ = !lean_is_exclusive(v_a_3476_);
if (v_isSharedCheck_3500_ == 0)
{
v___x_3482_ = v_a_3476_;
v_isShared_3483_ = v_isSharedCheck_3500_;
goto v_resetjp_3481_;
}
else
{
lean_inc(v_tail_3480_);
lean_inc(v_head_3479_);
lean_dec(v_a_3476_);
v___x_3482_ = lean_box(0);
v_isShared_3483_ = v_isSharedCheck_3500_;
goto v_resetjp_3481_;
}
v_resetjp_3481_:
{
lean_object* v___y_3485_; lean_object* v_fst_3490_; lean_object* v_snd_3491_; lean_object* v___x_3492_; uint8_t v___x_3493_; 
v_fst_3490_ = lean_ctor_get(v_head_3479_, 0);
lean_inc(v_fst_3490_);
v_snd_3491_ = lean_ctor_get(v_head_3479_, 1);
lean_inc(v_snd_3491_);
lean_dec(v_head_3479_);
v___x_3492_ = lean_array_get_size(v_labels_3473_);
v___x_3493_ = lean_nat_dec_lt(v_snd_3491_, v___x_3492_);
if (v___x_3493_ == 0)
{
lean_object* v___x_3494_; lean_object* v___x_3495_; 
v___x_3494_ = ((lean_object*)(lp_choreo_Choreo_phaseProofs___closed__0));
lean_inc_ref(v_names_3475_);
lean_inc_ref(v_c_3474_);
v___x_3495_ = lp_choreo_Choreo_phaseJson(v_c_3474_, v_names_3475_, v___x_3494_, v___x_3494_, v_fst_3490_, v_snd_3491_);
v___y_3485_ = v___x_3495_;
goto v___jp_3484_;
}
else
{
lean_object* v___x_3496_; lean_object* v_fst_3497_; lean_object* v_snd_3498_; lean_object* v___x_3499_; 
v___x_3496_ = lean_array_fget_borrowed(v_labels_3473_, v_snd_3491_);
v_fst_3497_ = lean_ctor_get(v___x_3496_, 0);
v_snd_3498_ = lean_ctor_get(v___x_3496_, 1);
lean_inc(v_snd_3498_);
lean_inc(v_fst_3497_);
lean_inc_ref(v_names_3475_);
lean_inc_ref(v_c_3474_);
v___x_3499_ = lp_choreo_Choreo_phaseJson(v_c_3474_, v_names_3475_, v_fst_3497_, v_snd_3498_, v_fst_3490_, v_snd_3491_);
v___y_3485_ = v___x_3499_;
goto v___jp_3484_;
}
v___jp_3484_:
{
lean_object* v___x_3487_; 
if (v_isShared_3483_ == 0)
{
lean_ctor_set(v___x_3482_, 1, v_a_3477_);
lean_ctor_set(v___x_3482_, 0, v___y_3485_);
v___x_3487_ = v___x_3482_;
goto v_reusejp_3486_;
}
else
{
lean_object* v_reuseFailAlloc_3489_; 
v_reuseFailAlloc_3489_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3489_, 0, v___y_3485_);
lean_ctor_set(v_reuseFailAlloc_3489_, 1, v_a_3477_);
v___x_3487_ = v_reuseFailAlloc_3489_;
goto v_reusejp_3486_;
}
v_reusejp_3486_:
{
v_a_3476_ = v_tail_3480_;
v_a_3477_ = v___x_3487_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4___boxed(lean_object* v_labels_3501_, lean_object* v_c_3502_, lean_object* v_names_3503_, lean_object* v_a_3504_, lean_object* v_a_3505_){
_start:
{
lean_object* v_res_3506_; 
v_res_3506_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4(v_labels_3501_, v_c_3502_, v_names_3503_, v_a_3504_, v_a_3505_);
lean_dec_ref(v_labels_3501_);
return v_res_3506_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__9(lean_object* v_a_3507_, lean_object* v_a_3508_){
_start:
{
if (lean_obj_tag(v_a_3507_) == 0)
{
lean_object* v___x_3509_; 
v___x_3509_ = l_List_reverse___redArg(v_a_3508_);
return v___x_3509_;
}
else
{
lean_object* v_head_3510_; lean_object* v_tail_3511_; lean_object* v___x_3513_; uint8_t v_isShared_3514_; uint8_t v_isSharedCheck_3536_; 
v_head_3510_ = lean_ctor_get(v_a_3507_, 0);
v_tail_3511_ = lean_ctor_get(v_a_3507_, 1);
v_isSharedCheck_3536_ = !lean_is_exclusive(v_a_3507_);
if (v_isSharedCheck_3536_ == 0)
{
v___x_3513_ = v_a_3507_;
v_isShared_3514_ = v_isSharedCheck_3536_;
goto v_resetjp_3512_;
}
else
{
lean_inc(v_tail_3511_);
lean_inc(v_head_3510_);
lean_dec(v_a_3507_);
v___x_3513_ = lean_box(0);
v_isShared_3514_ = v_isSharedCheck_3536_;
goto v_resetjp_3512_;
}
v_resetjp_3512_:
{
lean_object* v_X_3515_; lean_object* v_Y_3516_; lean_object* v_W_3517_; lean_object* v___x_3518_; lean_object* v___x_3519_; lean_object* v___x_3520_; lean_object* v___x_3521_; lean_object* v___x_3522_; lean_object* v___x_3523_; lean_object* v___x_3524_; lean_object* v___x_3525_; lean_object* v___x_3526_; lean_object* v___x_3527_; lean_object* v___x_3529_; 
v_X_3515_ = lean_ctor_get(v_head_3510_, 0);
lean_inc(v_X_3515_);
v_Y_3516_ = lean_ctor_get(v_head_3510_, 1);
lean_inc(v_Y_3516_);
v_W_3517_ = lean_ctor_get(v_head_3510_, 2);
lean_inc(v_W_3517_);
lean_dec(v_head_3510_);
v___x_3518_ = lean_box(0);
v___x_3519_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__0));
v___x_3520_ = lp_choreo_Choreo_jPoly(v_X_3515_);
v___x_3521_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3521_, 0, v___x_3519_);
lean_ctor_set(v___x_3521_, 1, v___x_3520_);
v___x_3522_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__1));
v___x_3523_ = lp_choreo_Choreo_jPoly(v_Y_3516_);
v___x_3524_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3524_, 0, v___x_3522_);
lean_ctor_set(v___x_3524_, 1, v___x_3523_);
v___x_3525_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_phaseJson_spec__0___closed__2));
v___x_3526_ = lp_choreo_Choreo_jPoly(v_W_3517_);
v___x_3527_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3527_, 0, v___x_3525_);
lean_ctor_set(v___x_3527_, 1, v___x_3526_);
if (v_isShared_3514_ == 0)
{
lean_ctor_set(v___x_3513_, 1, v___x_3518_);
lean_ctor_set(v___x_3513_, 0, v___x_3527_);
v___x_3529_ = v___x_3513_;
goto v_reusejp_3528_;
}
else
{
lean_object* v_reuseFailAlloc_3535_; 
v_reuseFailAlloc_3535_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3535_, 0, v___x_3527_);
lean_ctor_set(v_reuseFailAlloc_3535_, 1, v___x_3518_);
v___x_3529_ = v_reuseFailAlloc_3535_;
goto v_reusejp_3528_;
}
v_reusejp_3528_:
{
lean_object* v___x_3530_; lean_object* v___x_3531_; lean_object* v___x_3532_; lean_object* v___x_3533_; 
v___x_3530_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3530_, 0, v___x_3524_);
lean_ctor_set(v___x_3530_, 1, v___x_3529_);
v___x_3531_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3531_, 0, v___x_3521_);
lean_ctor_set(v___x_3531_, 1, v___x_3530_);
v___x_3532_ = l_Lean_Json_mkObj(v___x_3531_);
lean_dec_ref_known(v___x_3531_, 2);
v___x_3533_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3533_, 0, v___x_3532_);
lean_ctor_set(v___x_3533_, 1, v_a_3508_);
v_a_3507_ = v_tail_3511_;
v_a_3508_ = v___x_3533_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(lean_object* v_cfg0_3537_, lean_object* v___x_3538_, lean_object* v_names_3539_, lean_object* v_a_3540_, lean_object* v_a_3541_){
_start:
{
if (lean_obj_tag(v_a_3540_) == 0)
{
lean_object* v___x_3542_; 
lean_dec_ref(v_names_3539_);
lean_dec_ref(v_cfg0_3537_);
v___x_3542_ = l_List_reverse___redArg(v_a_3541_);
return v___x_3542_;
}
else
{
lean_object* v_head_3543_; lean_object* v_tail_3544_; lean_object* v___x_3546_; uint8_t v_isShared_3547_; uint8_t v_isSharedCheck_3553_; 
v_head_3543_ = lean_ctor_get(v_a_3540_, 0);
v_tail_3544_ = lean_ctor_get(v_a_3540_, 1);
v_isSharedCheck_3553_ = !lean_is_exclusive(v_a_3540_);
if (v_isSharedCheck_3553_ == 0)
{
v___x_3546_ = v_a_3540_;
v_isShared_3547_ = v_isSharedCheck_3553_;
goto v_resetjp_3545_;
}
else
{
lean_inc(v_tail_3544_);
lean_inc(v_head_3543_);
lean_dec(v_a_3540_);
v___x_3546_ = lean_box(0);
v_isShared_3547_ = v_isSharedCheck_3553_;
goto v_resetjp_3545_;
}
v_resetjp_3545_:
{
lean_object* v___x_3548_; lean_object* v___x_3550_; 
lean_inc_ref(v_names_3539_);
lean_inc_ref(v_cfg0_3537_);
v___x_3548_ = lp_choreo_Choreo_problemJson(v_cfg0_3537_, v___x_3538_, v_names_3539_, v_head_3543_);
if (v_isShared_3547_ == 0)
{
lean_ctor_set(v___x_3546_, 1, v_a_3541_);
lean_ctor_set(v___x_3546_, 0, v___x_3548_);
v___x_3550_ = v___x_3546_;
goto v_reusejp_3549_;
}
else
{
lean_object* v_reuseFailAlloc_3552_; 
v_reuseFailAlloc_3552_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3552_, 0, v___x_3548_);
lean_ctor_set(v_reuseFailAlloc_3552_, 1, v_a_3541_);
v___x_3550_ = v_reuseFailAlloc_3552_;
goto v_reusejp_3549_;
}
v_reusejp_3549_:
{
v_a_3540_ = v_tail_3544_;
v_a_3541_ = v___x_3550_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8___boxed(lean_object* v_cfg0_3554_, lean_object* v___x_3555_, lean_object* v_names_3556_, lean_object* v_a_3557_, lean_object* v_a_3558_){
_start:
{
lean_object* v_res_3559_; 
v_res_3559_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(v_cfg0_3554_, v___x_3555_, v_names_3556_, v_a_3557_, v_a_3558_);
lean_dec(v___x_3555_);
return v_res_3559_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10(lean_object* v___x_3564_, lean_object* v___x_3565_, lean_object* v_names_3566_, lean_object* v_a_3567_, lean_object* v_a_3568_){
_start:
{
if (lean_obj_tag(v_a_3567_) == 0)
{
lean_object* v___x_3569_; 
lean_dec_ref(v_names_3566_);
lean_dec(v___x_3565_);
lean_dec(v___x_3564_);
v___x_3569_ = l_List_reverse___redArg(v_a_3568_);
return v___x_3569_;
}
else
{
lean_object* v_head_3570_; lean_object* v_draft_3571_; lean_object* v_tail_3572_; lean_object* v___x_3574_; uint8_t v_isShared_3575_; uint8_t v_isSharedCheck_3631_; 
v_head_3570_ = lean_ctor_get(v_a_3567_, 0);
lean_inc(v_head_3570_);
v_draft_3571_ = lean_ctor_get(v_head_3570_, 2);
lean_inc_ref(v_draft_3571_);
v_tail_3572_ = lean_ctor_get(v_a_3567_, 1);
v_isSharedCheck_3631_ = !lean_is_exclusive(v_a_3567_);
if (v_isSharedCheck_3631_ == 0)
{
lean_object* v_unused_3632_; 
v_unused_3632_ = lean_ctor_get(v_a_3567_, 0);
lean_dec(v_unused_3632_);
v___x_3574_ = v_a_3567_;
v_isShared_3575_ = v_isSharedCheck_3631_;
goto v_resetjp_3573_;
}
else
{
lean_inc(v_tail_3572_);
lean_dec(v_a_3567_);
v___x_3574_ = lean_box(0);
v_isShared_3575_ = v_isSharedCheck_3631_;
goto v_resetjp_3573_;
}
v_resetjp_3573_:
{
lean_object* v_title_3576_; lean_object* v_why_3577_; lean_object* v_problems_3578_; lean_object* v_startPhase_3579_; lean_object* v_label_3580_; lean_object* v_bounds_3581_; lean_object* v_beats_3582_; lean_object* v_dmin_3583_; lean_object* v___x_3584_; lean_object* v_ph_3585_; lean_object* v_paths_3586_; lean_object* v___x_3587_; lean_object* v___x_3588_; lean_object* v_cfg0_3589_; lean_object* v___x_3590_; lean_object* v___x_3591_; lean_object* v___x_3592_; lean_object* v___x_3593_; lean_object* v___x_3594_; lean_object* v___x_3595_; lean_object* v___x_3596_; lean_object* v___x_3597_; lean_object* v___x_3598_; lean_object* v___x_3599_; lean_object* v___x_3600_; lean_object* v___x_3601_; lean_object* v___x_3602_; lean_object* v___x_3603_; lean_object* v___x_3604_; lean_object* v___x_3605_; lean_object* v___x_3606_; lean_object* v___x_3607_; lean_object* v___x_3608_; lean_object* v___x_3610_; 
v_title_3576_ = lean_ctor_get(v_head_3570_, 0);
lean_inc_ref(v_title_3576_);
v_why_3577_ = lean_ctor_get(v_head_3570_, 1);
lean_inc_ref(v_why_3577_);
v_problems_3578_ = lean_ctor_get(v_head_3570_, 3);
lean_inc(v_problems_3578_);
v_startPhase_3579_ = lean_ctor_get(v_head_3570_, 4);
lean_inc(v_startPhase_3579_);
lean_dec(v_head_3570_);
v_label_3580_ = lean_ctor_get(v_draft_3571_, 0);
lean_inc_ref(v_label_3580_);
v_bounds_3581_ = lean_ctor_get(v_draft_3571_, 3);
lean_inc_ref(v_bounds_3581_);
v_beats_3582_ = lean_ctor_get(v_draft_3571_, 4);
lean_inc(v_beats_3582_);
v_dmin_3583_ = lean_ctor_get(v_draft_3571_, 7);
lean_inc(v_dmin_3583_);
v___x_3584_ = lean_unsigned_to_nat(0u);
lean_inc_n(v___x_3564_, 2);
v_ph_3585_ = lp_choreo_Choreo_Draft_toPhase(v_draft_3571_, v___x_3564_, v___x_3584_);
lean_dec_ref(v_draft_3571_);
v_paths_3586_ = lean_ctor_get(v_ph_3585_, 2);
lean_inc(v_paths_3586_);
v___x_3587_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__0));
v___x_3588_ = lean_box(0);
lean_inc(v___x_3565_);
v_cfg0_3589_ = lp_choreo_Choreo_probeConfig(v___x_3564_, v_bounds_3581_, v___x_3565_, v_dmin_3583_);
v___x_3590_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__1));
v___x_3591_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3591_, 0, v_title_3576_);
v___x_3592_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3592_, 0, v___x_3590_);
lean_ctor_set(v___x_3592_, 1, v___x_3591_);
v___x_3593_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__11));
v___x_3594_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3594_, 0, v_why_3577_);
v___x_3595_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3595_, 0, v___x_3593_);
lean_ctor_set(v___x_3595_, 1, v___x_3594_);
v___x_3596_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__3));
v___x_3597_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3597_, 0, v_label_3580_);
v___x_3598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3598_, 0, v___x_3596_);
lean_ctor_set(v___x_3598_, 1, v___x_3597_);
v___x_3599_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__2));
v___x_3600_ = l_Lean_JsonNumber_fromNat(v_startPhase_3579_);
v___x_3601_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3601_, 0, v___x_3600_);
v___x_3602_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3602_, 0, v___x_3599_);
lean_ctor_set(v___x_3602_, 1, v___x_3601_);
v___x_3603_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__3));
v___x_3604_ = lean_unsigned_to_nat(4u);
v___x_3605_ = lean_nat_mul(v_beats_3582_, v___x_3604_);
lean_dec(v_beats_3582_);
v___x_3606_ = l_Lean_JsonNumber_fromNat(v___x_3605_);
v___x_3607_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3607_, 0, v___x_3606_);
v___x_3608_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3608_, 0, v___x_3603_);
lean_ctor_set(v___x_3608_, 1, v___x_3607_);
if (v_isShared_3575_ == 0)
{
lean_ctor_set(v___x_3574_, 1, v___x_3588_);
lean_ctor_set(v___x_3574_, 0, v_ph_3585_);
v___x_3610_ = v___x_3574_;
goto v_reusejp_3609_;
}
else
{
lean_object* v_reuseFailAlloc_3630_; 
v_reuseFailAlloc_3630_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3630_, 0, v_ph_3585_);
lean_ctor_set(v_reuseFailAlloc_3630_, 1, v___x_3588_);
v___x_3610_ = v_reuseFailAlloc_3630_;
goto v_reusejp_3609_;
}
v_reusejp_3609_:
{
lean_object* v___x_3611_; lean_object* v___x_3612_; lean_object* v___x_3613_; lean_object* v___x_3614_; lean_object* v___x_3615_; lean_object* v___x_3616_; lean_object* v___x_3617_; lean_object* v___x_3618_; lean_object* v___x_3619_; lean_object* v___x_3620_; lean_object* v___x_3621_; lean_object* v___x_3622_; lean_object* v___x_3623_; lean_object* v___x_3624_; lean_object* v___x_3625_; lean_object* v___x_3626_; lean_object* v___x_3627_; lean_object* v___x_3628_; 
lean_inc_ref(v_names_3566_);
v___x_3611_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(v_cfg0_3589_, v___x_3610_, v_names_3566_, v_problems_3578_, v___x_3588_);
lean_dec_ref(v___x_3610_);
v___x_3612_ = lean_array_mk(v___x_3611_);
v___x_3613_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3613_, 0, v___x_3612_);
v___x_3614_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3614_, 0, v___x_3587_);
lean_ctor_set(v___x_3614_, 1, v___x_3613_);
v___x_3615_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__5));
v___x_3616_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__9(v_paths_3586_, v___x_3588_);
v___x_3617_ = lean_array_mk(v___x_3616_);
v___x_3618_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3618_, 0, v___x_3617_);
v___x_3619_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3619_, 0, v___x_3615_);
lean_ctor_set(v___x_3619_, 1, v___x_3618_);
v___x_3620_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3620_, 0, v___x_3619_);
lean_ctor_set(v___x_3620_, 1, v___x_3588_);
v___x_3621_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3621_, 0, v___x_3614_);
lean_ctor_set(v___x_3621_, 1, v___x_3620_);
v___x_3622_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3622_, 0, v___x_3608_);
lean_ctor_set(v___x_3622_, 1, v___x_3621_);
v___x_3623_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3623_, 0, v___x_3602_);
lean_ctor_set(v___x_3623_, 1, v___x_3622_);
v___x_3624_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3624_, 0, v___x_3598_);
lean_ctor_set(v___x_3624_, 1, v___x_3623_);
v___x_3625_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3625_, 0, v___x_3595_);
lean_ctor_set(v___x_3625_, 1, v___x_3624_);
v___x_3626_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3626_, 0, v___x_3592_);
lean_ctor_set(v___x_3626_, 1, v___x_3625_);
v___x_3627_ = l_Lean_Json_mkObj(v___x_3626_);
lean_dec_ref_known(v___x_3626_, 2);
v___x_3628_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3628_, 0, v___x_3627_);
lean_ctor_set(v___x_3628_, 1, v_a_3568_);
v_a_3567_ = v_tail_3572_;
v_a_3568_ = v___x_3628_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__1(lean_object* v_a_3633_, lean_object* v_a_3634_){
_start:
{
if (lean_obj_tag(v_a_3633_) == 0)
{
lean_object* v___x_3635_; 
v___x_3635_ = l_List_reverse___redArg(v_a_3634_);
return v___x_3635_;
}
else
{
lean_object* v_head_3636_; lean_object* v_tail_3637_; lean_object* v___x_3639_; uint8_t v_isShared_3640_; uint8_t v_isSharedCheck_3647_; 
v_head_3636_ = lean_ctor_get(v_a_3633_, 0);
v_tail_3637_ = lean_ctor_get(v_a_3633_, 1);
v_isSharedCheck_3647_ = !lean_is_exclusive(v_a_3633_);
if (v_isSharedCheck_3647_ == 0)
{
v___x_3639_ = v_a_3633_;
v_isShared_3640_ = v_isSharedCheck_3647_;
goto v_resetjp_3638_;
}
else
{
lean_inc(v_tail_3637_);
lean_inc(v_head_3636_);
lean_dec(v_a_3633_);
v___x_3639_ = lean_box(0);
v_isShared_3640_ = v_isSharedCheck_3647_;
goto v_resetjp_3638_;
}
v_resetjp_3638_:
{
lean_object* v___x_3641_; lean_object* v___x_3642_; lean_object* v___x_3644_; 
v___x_3641_ = lp_choreo_Choreo_moveName(v_head_3636_);
v___x_3642_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3642_, 0, v___x_3641_);
if (v_isShared_3640_ == 0)
{
lean_ctor_set(v___x_3639_, 1, v_a_3634_);
lean_ctor_set(v___x_3639_, 0, v___x_3642_);
v___x_3644_ = v___x_3639_;
goto v_reusejp_3643_;
}
else
{
lean_object* v_reuseFailAlloc_3646_; 
v_reuseFailAlloc_3646_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3646_, 0, v___x_3642_);
lean_ctor_set(v_reuseFailAlloc_3646_, 1, v_a_3634_);
v___x_3644_ = v_reuseFailAlloc_3646_;
goto v_reusejp_3643_;
}
v_reusejp_3643_:
{
v_a_3633_ = v_tail_3637_;
v_a_3634_ = v___x_3644_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5(lean_object* v_a_3649_, lean_object* v_a_3650_){
_start:
{
if (lean_obj_tag(v_a_3649_) == 0)
{
lean_object* v___x_3651_; 
v___x_3651_ = l_List_reverse___redArg(v_a_3650_);
return v___x_3651_;
}
else
{
lean_object* v_head_3652_; lean_object* v_tail_3653_; lean_object* v___x_3655_; uint8_t v_isShared_3656_; uint8_t v_isSharedCheck_3681_; 
v_head_3652_ = lean_ctor_get(v_a_3649_, 0);
v_tail_3653_ = lean_ctor_get(v_a_3649_, 1);
v_isSharedCheck_3681_ = !lean_is_exclusive(v_a_3649_);
if (v_isSharedCheck_3681_ == 0)
{
v___x_3655_ = v_a_3649_;
v_isShared_3656_ = v_isSharedCheck_3681_;
goto v_resetjp_3654_;
}
else
{
lean_inc(v_tail_3653_);
lean_inc(v_head_3652_);
lean_dec(v_a_3649_);
v___x_3655_ = lean_box(0);
v_isShared_3656_ = v_isSharedCheck_3681_;
goto v_resetjp_3654_;
}
v_resetjp_3654_:
{
lean_object* v_fst_3657_; lean_object* v_snd_3658_; lean_object* v___x_3660_; uint8_t v_isShared_3661_; uint8_t v_isSharedCheck_3680_; 
v_fst_3657_ = lean_ctor_get(v_head_3652_, 0);
v_snd_3658_ = lean_ctor_get(v_head_3652_, 1);
v_isSharedCheck_3680_ = !lean_is_exclusive(v_head_3652_);
if (v_isSharedCheck_3680_ == 0)
{
v___x_3660_ = v_head_3652_;
v_isShared_3661_ = v_isSharedCheck_3680_;
goto v_resetjp_3659_;
}
else
{
lean_inc(v_snd_3658_);
lean_inc(v_fst_3657_);
lean_dec(v_head_3652_);
v___x_3660_ = lean_box(0);
v_isShared_3661_ = v_isSharedCheck_3680_;
goto v_resetjp_3659_;
}
v_resetjp_3659_:
{
lean_object* v___x_3662_; lean_object* v___x_3663_; lean_object* v___x_3664_; lean_object* v___x_3665_; lean_object* v___x_3667_; 
v___x_3662_ = lean_box(0);
v___x_3663_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5___closed__0));
v___x_3664_ = l_Lean_JsonNumber_fromNat(v_fst_3657_);
v___x_3665_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3665_, 0, v___x_3664_);
if (v_isShared_3661_ == 0)
{
lean_ctor_set(v___x_3660_, 1, v___x_3665_);
lean_ctor_set(v___x_3660_, 0, v___x_3663_);
v___x_3667_ = v___x_3660_;
goto v_reusejp_3666_;
}
else
{
lean_object* v_reuseFailAlloc_3679_; 
v_reuseFailAlloc_3679_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3679_, 0, v___x_3663_);
lean_ctor_set(v_reuseFailAlloc_3679_, 1, v___x_3665_);
v___x_3667_ = v_reuseFailAlloc_3679_;
goto v_reusejp_3666_;
}
v_reusejp_3666_:
{
lean_object* v___x_3668_; lean_object* v___x_3669_; lean_object* v___x_3670_; lean_object* v___x_3671_; lean_object* v___x_3673_; 
v___x_3668_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__4));
v___x_3669_ = l_Lean_JsonNumber_fromNat(v_snd_3658_);
v___x_3670_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3670_, 0, v___x_3669_);
v___x_3671_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3671_, 0, v___x_3668_);
lean_ctor_set(v___x_3671_, 1, v___x_3670_);
if (v_isShared_3656_ == 0)
{
lean_ctor_set(v___x_3655_, 1, v___x_3662_);
lean_ctor_set(v___x_3655_, 0, v___x_3671_);
v___x_3673_ = v___x_3655_;
goto v_reusejp_3672_;
}
else
{
lean_object* v_reuseFailAlloc_3678_; 
v_reuseFailAlloc_3678_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3678_, 0, v___x_3671_);
lean_ctor_set(v_reuseFailAlloc_3678_, 1, v___x_3662_);
v___x_3673_ = v_reuseFailAlloc_3678_;
goto v_reusejp_3672_;
}
v_reusejp_3672_:
{
lean_object* v___x_3674_; lean_object* v___x_3675_; lean_object* v___x_3676_; 
v___x_3674_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3674_, 0, v___x_3667_);
lean_ctor_set(v___x_3674_, 1, v___x_3673_);
v___x_3675_ = l_Lean_Json_mkObj(v___x_3674_);
lean_dec_ref_known(v___x_3674_, 2);
v___x_3676_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3676_, 0, v___x_3675_);
lean_ctor_set(v___x_3676_, 1, v_a_3650_);
v_a_3649_ = v_tail_3653_;
v_a_3650_ = v___x_3676_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__11(lean_object* v_a_3682_, lean_object* v_a_3683_){
_start:
{
if (lean_obj_tag(v_a_3682_) == 0)
{
lean_object* v___x_3684_; 
v___x_3684_ = l_List_reverse___redArg(v_a_3683_);
return v___x_3684_;
}
else
{
lean_object* v_head_3685_; lean_object* v_tail_3686_; lean_object* v___x_3688_; uint8_t v_isShared_3689_; uint8_t v_isSharedCheck_3695_; 
v_head_3685_ = lean_ctor_get(v_a_3682_, 0);
v_tail_3686_ = lean_ctor_get(v_a_3682_, 1);
v_isSharedCheck_3695_ = !lean_is_exclusive(v_a_3682_);
if (v_isSharedCheck_3695_ == 0)
{
v___x_3688_ = v_a_3682_;
v_isShared_3689_ = v_isSharedCheck_3695_;
goto v_resetjp_3687_;
}
else
{
lean_inc(v_tail_3686_);
lean_inc(v_head_3685_);
lean_dec(v_a_3682_);
v___x_3688_ = lean_box(0);
v_isShared_3689_ = v_isSharedCheck_3695_;
goto v_resetjp_3687_;
}
v_resetjp_3687_:
{
lean_object* v___x_3690_; lean_object* v___x_3692_; 
v___x_3690_ = lp_choreo_Choreo_moveName(v_head_3685_);
if (v_isShared_3689_ == 0)
{
lean_ctor_set(v___x_3688_, 1, v_a_3683_);
lean_ctor_set(v___x_3688_, 0, v___x_3690_);
v___x_3692_ = v___x_3688_;
goto v_reusejp_3691_;
}
else
{
lean_object* v_reuseFailAlloc_3694_; 
v_reuseFailAlloc_3694_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3694_, 0, v___x_3690_);
lean_ctor_set(v_reuseFailAlloc_3694_, 1, v_a_3683_);
v___x_3692_ = v_reuseFailAlloc_3694_;
goto v_reusejp_3691_;
}
v_reusejp_3691_:
{
v_a_3682_ = v_tail_3686_;
v_a_3683_ = v___x_3692_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7(lean_object* v_a_3702_, lean_object* v_a_3703_){
_start:
{
if (lean_obj_tag(v_a_3702_) == 0)
{
lean_object* v___x_3704_; 
v___x_3704_ = l_List_reverse___redArg(v_a_3703_);
return v___x_3704_;
}
else
{
lean_object* v_head_3705_; lean_object* v_snd_3706_; lean_object* v_snd_3707_; lean_object* v_tail_3708_; lean_object* v___x_3710_; uint8_t v_isShared_3711_; uint8_t v_isSharedCheck_3776_; 
v_head_3705_ = lean_ctor_get(v_a_3702_, 0);
lean_inc(v_head_3705_);
v_snd_3706_ = lean_ctor_get(v_head_3705_, 1);
lean_inc(v_snd_3706_);
v_snd_3707_ = lean_ctor_get(v_snd_3706_, 1);
lean_inc(v_snd_3707_);
v_tail_3708_ = lean_ctor_get(v_a_3702_, 1);
v_isSharedCheck_3776_ = !lean_is_exclusive(v_a_3702_);
if (v_isSharedCheck_3776_ == 0)
{
lean_object* v_unused_3777_; 
v_unused_3777_ = lean_ctor_get(v_a_3702_, 0);
lean_dec(v_unused_3777_);
v___x_3710_ = v_a_3702_;
v_isShared_3711_ = v_isSharedCheck_3776_;
goto v_resetjp_3709_;
}
else
{
lean_inc(v_tail_3708_);
lean_dec(v_a_3702_);
v___x_3710_ = lean_box(0);
v_isShared_3711_ = v_isSharedCheck_3776_;
goto v_resetjp_3709_;
}
v_resetjp_3709_:
{
lean_object* v_fst_3712_; lean_object* v___x_3714_; uint8_t v_isShared_3715_; uint8_t v_isSharedCheck_3774_; 
v_fst_3712_ = lean_ctor_get(v_head_3705_, 0);
v_isSharedCheck_3774_ = !lean_is_exclusive(v_head_3705_);
if (v_isSharedCheck_3774_ == 0)
{
lean_object* v_unused_3775_; 
v_unused_3775_ = lean_ctor_get(v_head_3705_, 1);
lean_dec(v_unused_3775_);
v___x_3714_ = v_head_3705_;
v_isShared_3715_ = v_isSharedCheck_3774_;
goto v_resetjp_3713_;
}
else
{
lean_inc(v_fst_3712_);
lean_dec(v_head_3705_);
v___x_3714_ = lean_box(0);
v_isShared_3715_ = v_isSharedCheck_3774_;
goto v_resetjp_3713_;
}
v_resetjp_3713_:
{
lean_object* v_fst_3716_; lean_object* v___x_3718_; uint8_t v_isShared_3719_; uint8_t v_isSharedCheck_3772_; 
v_fst_3716_ = lean_ctor_get(v_snd_3706_, 0);
v_isSharedCheck_3772_ = !lean_is_exclusive(v_snd_3706_);
if (v_isSharedCheck_3772_ == 0)
{
lean_object* v_unused_3773_; 
v_unused_3773_ = lean_ctor_get(v_snd_3706_, 1);
lean_dec(v_unused_3773_);
v___x_3718_ = v_snd_3706_;
v_isShared_3719_ = v_isSharedCheck_3772_;
goto v_resetjp_3717_;
}
else
{
lean_inc(v_fst_3716_);
lean_dec(v_snd_3706_);
v___x_3718_ = lean_box(0);
v_isShared_3719_ = v_isSharedCheck_3772_;
goto v_resetjp_3717_;
}
v_resetjp_3717_:
{
lean_object* v_fst_3720_; lean_object* v_snd_3721_; lean_object* v___x_3723_; uint8_t v_isShared_3724_; uint8_t v_isSharedCheck_3771_; 
v_fst_3720_ = lean_ctor_get(v_snd_3707_, 0);
v_snd_3721_ = lean_ctor_get(v_snd_3707_, 1);
v_isSharedCheck_3771_ = !lean_is_exclusive(v_snd_3707_);
if (v_isSharedCheck_3771_ == 0)
{
v___x_3723_ = v_snd_3707_;
v_isShared_3724_ = v_isSharedCheck_3771_;
goto v_resetjp_3722_;
}
else
{
lean_inc(v_snd_3721_);
lean_inc(v_fst_3720_);
lean_dec(v_snd_3707_);
v___x_3723_ = lean_box(0);
v_isShared_3724_ = v_isSharedCheck_3771_;
goto v_resetjp_3722_;
}
v_resetjp_3722_:
{
lean_object* v___x_3725_; lean_object* v___x_3726_; lean_object* v___x_3727_; lean_object* v___x_3728_; lean_object* v___x_3730_; 
v___x_3725_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__0));
v___x_3726_ = lean_box(0);
v___x_3727_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__1));
v___x_3728_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3728_, 0, v_fst_3712_);
if (v_isShared_3724_ == 0)
{
lean_ctor_set(v___x_3723_, 1, v___x_3728_);
lean_ctor_set(v___x_3723_, 0, v___x_3727_);
v___x_3730_ = v___x_3723_;
goto v_reusejp_3729_;
}
else
{
lean_object* v_reuseFailAlloc_3770_; 
v_reuseFailAlloc_3770_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3770_, 0, v___x_3727_);
lean_ctor_set(v_reuseFailAlloc_3770_, 1, v___x_3728_);
v___x_3730_ = v_reuseFailAlloc_3770_;
goto v_reusejp_3729_;
}
v_reusejp_3729_:
{
lean_object* v___x_3731_; lean_object* v___x_3732_; lean_object* v___x_3734_; 
v___x_3731_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
v___x_3732_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3732_, 0, v_fst_3716_);
if (v_isShared_3719_ == 0)
{
lean_ctor_set(v___x_3718_, 1, v___x_3732_);
lean_ctor_set(v___x_3718_, 0, v___x_3731_);
v___x_3734_ = v___x_3718_;
goto v_reusejp_3733_;
}
else
{
lean_object* v_reuseFailAlloc_3769_; 
v_reuseFailAlloc_3769_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3769_, 0, v___x_3731_);
lean_ctor_set(v_reuseFailAlloc_3769_, 1, v___x_3732_);
v___x_3734_ = v_reuseFailAlloc_3769_;
goto v_reusejp_3733_;
}
v_reusejp_3733_:
{
lean_object* v___x_3735_; lean_object* v___x_3736_; uint8_t v___x_3737_; lean_object* v___x_3739_; 
v___x_3735_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
v___x_3736_ = lean_alloc_ctor(1, 0, 1);
v___x_3737_ = lean_unbox(v_snd_3721_);
lean_dec(v_snd_3721_);
lean_ctor_set_uint8(v___x_3736_, 0, v___x_3737_);
if (v_isShared_3715_ == 0)
{
lean_ctor_set(v___x_3714_, 1, v___x_3736_);
lean_ctor_set(v___x_3714_, 0, v___x_3735_);
v___x_3739_ = v___x_3714_;
goto v_reusejp_3738_;
}
else
{
lean_object* v_reuseFailAlloc_3768_; 
v_reuseFailAlloc_3768_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3768_, 0, v___x_3735_);
lean_ctor_set(v_reuseFailAlloc_3768_, 1, v___x_3736_);
v___x_3739_ = v_reuseFailAlloc_3768_;
goto v_reusejp_3738_;
}
v_reusejp_3738_:
{
lean_object* v___x_3740_; lean_object* v___x_3741_; lean_object* v___x_3742_; lean_object* v___x_3743_; lean_object* v___x_3744_; lean_object* v___y_3746_; uint8_t v___x_3765_; 
v___x_3740_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__2));
lean_inc(v_fst_3720_);
v___x_3741_ = lp_choreo_Choreo_askL(v_fst_3720_);
v___x_3742_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3742_, 0, v___x_3741_);
v___x_3743_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3743_, 0, v___x_3740_);
lean_ctor_set(v___x_3743_, 1, v___x_3742_);
v___x_3744_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__3));
v___x_3765_ = lp_choreo_Choreo_Ask_isMovement(v_fst_3720_);
if (v___x_3765_ == 0)
{
lean_object* v___x_3766_; 
v___x_3766_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__4));
v___y_3746_ = v___x_3766_;
goto v___jp_3745_;
}
else
{
lean_object* v___x_3767_; 
v___x_3767_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__5));
v___y_3746_ = v___x_3767_;
goto v___jp_3745_;
}
v___jp_3745_:
{
lean_object* v___x_3747_; lean_object* v___x_3748_; lean_object* v___x_3749_; lean_object* v___x_3750_; lean_object* v___x_3751_; lean_object* v___x_3752_; lean_object* v___x_3753_; lean_object* v___x_3755_; 
lean_inc_ref(v___y_3746_);
v___x_3747_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3747_, 0, v___y_3746_);
v___x_3748_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3748_, 0, v___x_3744_);
lean_ctor_set(v___x_3748_, 1, v___x_3747_);
v___x_3749_ = lp_choreo_Choreo_askPhases(v_fst_3720_);
v___x_3750_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__1(v___x_3749_, v___x_3726_);
v___x_3751_ = lean_array_mk(v___x_3750_);
v___x_3752_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3752_, 0, v___x_3751_);
v___x_3753_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3753_, 0, v___x_3725_);
lean_ctor_set(v___x_3753_, 1, v___x_3752_);
if (v_isShared_3711_ == 0)
{
lean_ctor_set(v___x_3710_, 1, v___x_3726_);
lean_ctor_set(v___x_3710_, 0, v___x_3753_);
v___x_3755_ = v___x_3710_;
goto v_reusejp_3754_;
}
else
{
lean_object* v_reuseFailAlloc_3764_; 
v_reuseFailAlloc_3764_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3764_, 0, v___x_3753_);
lean_ctor_set(v_reuseFailAlloc_3764_, 1, v___x_3726_);
v___x_3755_ = v_reuseFailAlloc_3764_;
goto v_reusejp_3754_;
}
v_reusejp_3754_:
{
lean_object* v___x_3756_; lean_object* v___x_3757_; lean_object* v___x_3758_; lean_object* v___x_3759_; lean_object* v___x_3760_; lean_object* v___x_3761_; lean_object* v___x_3762_; 
v___x_3756_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3756_, 0, v___x_3748_);
lean_ctor_set(v___x_3756_, 1, v___x_3755_);
v___x_3757_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3757_, 0, v___x_3743_);
lean_ctor_set(v___x_3757_, 1, v___x_3756_);
v___x_3758_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3758_, 0, v___x_3739_);
lean_ctor_set(v___x_3758_, 1, v___x_3757_);
v___x_3759_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3759_, 0, v___x_3734_);
lean_ctor_set(v___x_3759_, 1, v___x_3758_);
v___x_3760_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3760_, 0, v___x_3730_);
lean_ctor_set(v___x_3760_, 1, v___x_3759_);
v___x_3761_ = l_Lean_Json_mkObj(v___x_3760_);
lean_dec_ref_known(v___x_3760_, 2);
v___x_3762_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3762_, 0, v___x_3761_);
lean_ctor_set(v___x_3762_, 1, v_a_3703_);
v_a_3702_ = v_tail_3708_;
v_a_3703_ = v___x_3762_;
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
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__2(lean_object* v_names_3778_, lean_object* v_a_3779_, lean_object* v_a_3780_){
_start:
{
if (lean_obj_tag(v_a_3779_) == 0)
{
lean_object* v___x_3781_; 
lean_dec_ref(v_names_3778_);
v___x_3781_ = l_List_reverse___redArg(v_a_3780_);
return v___x_3781_;
}
else
{
lean_object* v_head_3782_; lean_object* v_tail_3783_; lean_object* v___x_3785_; uint8_t v_isShared_3786_; uint8_t v_isSharedCheck_3793_; 
v_head_3782_ = lean_ctor_get(v_a_3779_, 0);
v_tail_3783_ = lean_ctor_get(v_a_3779_, 1);
v_isSharedCheck_3793_ = !lean_is_exclusive(v_a_3779_);
if (v_isSharedCheck_3793_ == 0)
{
v___x_3785_ = v_a_3779_;
v_isShared_3786_ = v_isSharedCheck_3793_;
goto v_resetjp_3784_;
}
else
{
lean_inc(v_tail_3783_);
lean_inc(v_head_3782_);
lean_dec(v_a_3779_);
v___x_3785_ = lean_box(0);
v_isShared_3786_ = v_isSharedCheck_3793_;
goto v_resetjp_3784_;
}
v_resetjp_3784_:
{
lean_object* v___x_3787_; lean_object* v___x_3788_; lean_object* v___x_3790_; 
lean_inc_ref(v_names_3778_);
v___x_3787_ = lean_apply_1(v_names_3778_, v_head_3782_);
v___x_3788_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3788_, 0, v___x_3787_);
if (v_isShared_3786_ == 0)
{
lean_ctor_set(v___x_3785_, 1, v_a_3780_);
lean_ctor_set(v___x_3785_, 0, v___x_3788_);
v___x_3790_ = v___x_3785_;
goto v_reusejp_3789_;
}
else
{
lean_object* v_reuseFailAlloc_3792_; 
v_reuseFailAlloc_3792_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3792_, 0, v___x_3788_);
lean_ctor_set(v_reuseFailAlloc_3792_, 1, v_a_3780_);
v___x_3790_ = v_reuseFailAlloc_3792_;
goto v_reusejp_3789_;
}
v_reusejp_3789_:
{
v_a_3779_ = v_tail_3783_;
v_a_3780_ = v___x_3790_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__0(lean_object* v_r_3794_, lean_object* v_a_3795_, lean_object* v_a_3796_){
_start:
{
if (lean_obj_tag(v_a_3795_) == 0)
{
lean_object* v___x_3797_; 
lean_dec_ref(v_r_3794_);
v___x_3797_ = l_List_reverse___redArg(v_a_3796_);
return v___x_3797_;
}
else
{
lean_object* v_head_3798_; lean_object* v_snd_3799_; lean_object* v_tail_3800_; lean_object* v___x_3802_; uint8_t v_isShared_3803_; uint8_t v_isSharedCheck_3829_; 
v_head_3798_ = lean_ctor_get(v_a_3795_, 0);
lean_inc(v_head_3798_);
v_snd_3799_ = lean_ctor_get(v_head_3798_, 1);
lean_inc(v_snd_3799_);
v_tail_3800_ = lean_ctor_get(v_a_3795_, 1);
v_isSharedCheck_3829_ = !lean_is_exclusive(v_a_3795_);
if (v_isSharedCheck_3829_ == 0)
{
lean_object* v_unused_3830_; 
v_unused_3830_ = lean_ctor_get(v_a_3795_, 0);
lean_dec(v_unused_3830_);
v___x_3802_ = v_a_3795_;
v_isShared_3803_ = v_isSharedCheck_3829_;
goto v_resetjp_3801_;
}
else
{
lean_inc(v_tail_3800_);
lean_dec(v_a_3795_);
v___x_3802_ = lean_box(0);
v_isShared_3803_ = v_isSharedCheck_3829_;
goto v_resetjp_3801_;
}
v_resetjp_3801_:
{
lean_object* v_fst_3804_; lean_object* v___x_3806_; uint8_t v_isShared_3807_; uint8_t v_isSharedCheck_3827_; 
v_fst_3804_ = lean_ctor_get(v_head_3798_, 0);
v_isSharedCheck_3827_ = !lean_is_exclusive(v_head_3798_);
if (v_isSharedCheck_3827_ == 0)
{
lean_object* v_unused_3828_; 
v_unused_3828_ = lean_ctor_get(v_head_3798_, 1);
lean_dec(v_unused_3828_);
v___x_3806_ = v_head_3798_;
v_isShared_3807_ = v_isSharedCheck_3827_;
goto v_resetjp_3805_;
}
else
{
lean_inc(v_fst_3804_);
lean_dec(v_head_3798_);
v___x_3806_ = lean_box(0);
v_isShared_3807_ = v_isSharedCheck_3827_;
goto v_resetjp_3805_;
}
v_resetjp_3805_:
{
lean_object* v_fst_3808_; lean_object* v_snd_3809_; lean_object* v___x_3811_; uint8_t v_isShared_3812_; uint8_t v_isSharedCheck_3826_; 
v_fst_3808_ = lean_ctor_get(v_snd_3799_, 0);
v_snd_3809_ = lean_ctor_get(v_snd_3799_, 1);
v_isSharedCheck_3826_ = !lean_is_exclusive(v_snd_3799_);
if (v_isSharedCheck_3826_ == 0)
{
v___x_3811_ = v_snd_3799_;
v_isShared_3812_ = v_isSharedCheck_3826_;
goto v_resetjp_3810_;
}
else
{
lean_inc(v_snd_3809_);
lean_inc(v_fst_3808_);
lean_dec(v_snd_3799_);
v___x_3811_ = lean_box(0);
v_isShared_3812_ = v_isSharedCheck_3826_;
goto v_resetjp_3810_;
}
v_resetjp_3810_:
{
uint8_t v___x_3813_; lean_object* v___x_3814_; lean_object* v___x_3816_; 
lean_inc(v_snd_3809_);
lean_inc_ref(v_r_3794_);
v___x_3813_ = lp_choreo_Choreo_Ask_check(v_r_3794_, v_snd_3809_);
v___x_3814_ = lean_box(v___x_3813_);
if (v_isShared_3812_ == 0)
{
lean_ctor_set(v___x_3811_, 1, v___x_3814_);
lean_ctor_set(v___x_3811_, 0, v_snd_3809_);
v___x_3816_ = v___x_3811_;
goto v_reusejp_3815_;
}
else
{
lean_object* v_reuseFailAlloc_3825_; 
v_reuseFailAlloc_3825_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3825_, 0, v_snd_3809_);
lean_ctor_set(v_reuseFailAlloc_3825_, 1, v___x_3814_);
v___x_3816_ = v_reuseFailAlloc_3825_;
goto v_reusejp_3815_;
}
v_reusejp_3815_:
{
lean_object* v___x_3818_; 
if (v_isShared_3807_ == 0)
{
lean_ctor_set(v___x_3806_, 1, v___x_3816_);
lean_ctor_set(v___x_3806_, 0, v_fst_3808_);
v___x_3818_ = v___x_3806_;
goto v_reusejp_3817_;
}
else
{
lean_object* v_reuseFailAlloc_3824_; 
v_reuseFailAlloc_3824_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3824_, 0, v_fst_3808_);
lean_ctor_set(v_reuseFailAlloc_3824_, 1, v___x_3816_);
v___x_3818_ = v_reuseFailAlloc_3824_;
goto v_reusejp_3817_;
}
v_reusejp_3817_:
{
lean_object* v___x_3819_; lean_object* v___x_3821_; 
v___x_3819_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3819_, 0, v_fst_3804_);
lean_ctor_set(v___x_3819_, 1, v___x_3818_);
if (v_isShared_3803_ == 0)
{
lean_ctor_set(v___x_3802_, 1, v_a_3796_);
lean_ctor_set(v___x_3802_, 0, v___x_3819_);
v___x_3821_ = v___x_3802_;
goto v_reusejp_3820_;
}
else
{
lean_object* v_reuseFailAlloc_3823_; 
v_reuseFailAlloc_3823_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3823_, 0, v___x_3819_);
lean_ctor_set(v_reuseFailAlloc_3823_, 1, v_a_3796_);
v___x_3821_ = v_reuseFailAlloc_3823_;
goto v_reusejp_3820_;
}
v_reusejp_3820_:
{
v_a_3795_ = v_tail_3800_;
v_a_3796_ = v___x_3821_;
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
LEAN_EXPORT uint8_t lp_choreo_List_any___at___00Choreo_report_spec__12(lean_object* v_x_3831_){
_start:
{
if (lean_obj_tag(v_x_3831_) == 0)
{
uint8_t v___x_3832_; 
v___x_3832_ = 0;
return v___x_3832_;
}
else
{
lean_object* v_head_3833_; lean_object* v_tail_3834_; uint8_t v___x_3835_; 
v_head_3833_ = lean_ctor_get(v_x_3831_, 0);
v_tail_3834_ = lean_ctor_get(v_x_3831_, 1);
v___x_3835_ = lp_choreo_Choreo_Problem_provable(v_head_3833_);
if (v___x_3835_ == 0)
{
v_x_3831_ = v_tail_3834_;
goto _start;
}
else
{
return v___x_3835_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_any___at___00Choreo_report_spec__12___boxed(lean_object* v_x_3837_){
_start:
{
uint8_t v_res_3838_; lean_object* v_r_3839_; 
v_res_3838_ = lp_choreo_List_any___at___00Choreo_report_spec__12(v_x_3837_);
lean_dec(v_x_3837_);
v_r_3839_ = lean_box(v_res_3838_);
return v_r_3839_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__3(lean_object* v_a_3840_, lean_object* v_a_3841_){
_start:
{
if (lean_obj_tag(v_a_3840_) == 0)
{
lean_object* v___x_3842_; 
v___x_3842_ = l_List_reverse___redArg(v_a_3841_);
return v___x_3842_;
}
else
{
lean_object* v_head_3843_; lean_object* v_tail_3844_; lean_object* v___x_3846_; uint8_t v_isShared_3847_; uint8_t v_isSharedCheck_3864_; 
v_head_3843_ = lean_ctor_get(v_a_3840_, 0);
v_tail_3844_ = lean_ctor_get(v_a_3840_, 1);
v_isSharedCheck_3864_ = !lean_is_exclusive(v_a_3840_);
if (v_isSharedCheck_3864_ == 0)
{
v___x_3846_ = v_a_3840_;
v_isShared_3847_ = v_isSharedCheck_3864_;
goto v_resetjp_3845_;
}
else
{
lean_inc(v_tail_3844_);
lean_inc(v_head_3843_);
lean_dec(v_a_3840_);
v___x_3846_ = lean_box(0);
v_isShared_3847_ = v_isSharedCheck_3864_;
goto v_resetjp_3845_;
}
v_resetjp_3845_:
{
lean_object* v_x_3848_; lean_object* v_y_3849_; lean_object* v_w_3850_; lean_object* v___x_3851_; lean_object* v___x_3852_; lean_object* v___x_3853_; lean_object* v___x_3854_; lean_object* v___x_3855_; lean_object* v___x_3856_; lean_object* v___x_3857_; lean_object* v___x_3858_; lean_object* v___x_3859_; lean_object* v___x_3861_; 
v_x_3848_ = lean_ctor_get(v_head_3843_, 0);
lean_inc(v_x_3848_);
v_y_3849_ = lean_ctor_get(v_head_3843_, 1);
lean_inc(v_y_3849_);
v_w_3850_ = lean_ctor_get(v_head_3843_, 2);
lean_inc(v_w_3850_);
lean_dec(v_head_3843_);
v___x_3851_ = lean_int_ediv(v_x_3848_, v_w_3850_);
lean_dec(v_x_3848_);
v___x_3852_ = lp_choreo_Choreo_jInt(v___x_3851_);
v___x_3853_ = lean_int_ediv(v_y_3849_, v_w_3850_);
lean_dec(v_w_3850_);
lean_dec(v_y_3849_);
v___x_3854_ = lp_choreo_Choreo_jInt(v___x_3853_);
v___x_3855_ = lean_unsigned_to_nat(2u);
v___x_3856_ = lean_mk_empty_array_with_capacity(v___x_3855_);
v___x_3857_ = lean_array_push(v___x_3856_, v___x_3852_);
v___x_3858_ = lean_array_push(v___x_3857_, v___x_3854_);
v___x_3859_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3859_, 0, v___x_3858_);
if (v_isShared_3847_ == 0)
{
lean_ctor_set(v___x_3846_, 1, v_a_3841_);
lean_ctor_set(v___x_3846_, 0, v___x_3859_);
v___x_3861_ = v___x_3846_;
goto v_reusejp_3860_;
}
else
{
lean_object* v_reuseFailAlloc_3863_; 
v_reuseFailAlloc_3863_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3863_, 0, v___x_3859_);
lean_ctor_set(v_reuseFailAlloc_3863_, 1, v_a_3841_);
v___x_3861_ = v_reuseFailAlloc_3863_;
goto v_reusejp_3860_;
}
v_reusejp_3860_:
{
v_a_3840_ = v_tail_3844_;
v_a_3841_ = v___x_3861_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___lam__0(lean_object* v___x_3865_, lean_object* v_00___3866_){
_start:
{
lean_object* v___x_3867_; lean_object* v___x_3868_; 
v___x_3867_ = l_Lean_JsonNumber_fromNat(v___x_3865_);
v___x_3868_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3868_, 0, v___x_3867_);
return v___x_3868_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5(void){
_start:
{
lean_object* v___x_3874_; lean_object* v___x_3875_; lean_object* v___x_3876_; 
v___x_3874_ = lean_box(0);
v___x_3875_ = lean_unsigned_to_nat(0u);
v___x_3876_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___lam__0(v___x_3875_, v___x_3874_);
return v___x_3876_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6(lean_object* v_r_3877_, lean_object* v_a_3878_, lean_object* v_a_3879_){
_start:
{
if (lean_obj_tag(v_a_3878_) == 0)
{
lean_object* v___x_3880_; 
lean_dec_ref(v_r_3877_);
v___x_3880_ = l_List_reverse___redArg(v_a_3879_);
return v___x_3880_;
}
else
{
lean_object* v_head_3881_; lean_object* v_fst_3882_; lean_object* v_snd_3883_; lean_object* v_tail_3884_; lean_object* v___x_3886_; uint8_t v_isShared_3887_; uint8_t v_isSharedCheck_4007_; 
v_head_3881_ = lean_ctor_get(v_a_3878_, 0);
lean_inc(v_head_3881_);
v_fst_3882_ = lean_ctor_get(v_head_3881_, 0);
lean_inc(v_fst_3882_);
v_snd_3883_ = lean_ctor_get(v_fst_3882_, 1);
lean_inc(v_snd_3883_);
v_tail_3884_ = lean_ctor_get(v_a_3878_, 1);
v_isSharedCheck_4007_ = !lean_is_exclusive(v_a_3878_);
if (v_isSharedCheck_4007_ == 0)
{
lean_object* v_unused_4008_; 
v_unused_4008_ = lean_ctor_get(v_a_3878_, 0);
lean_dec(v_unused_4008_);
v___x_3886_ = v_a_3878_;
v_isShared_3887_ = v_isSharedCheck_4007_;
goto v_resetjp_3885_;
}
else
{
lean_inc(v_tail_3884_);
lean_dec(v_a_3878_);
v___x_3886_ = lean_box(0);
v_isShared_3887_ = v_isSharedCheck_4007_;
goto v_resetjp_3885_;
}
v_resetjp_3885_:
{
lean_object* v_snd_3888_; lean_object* v___x_3890_; uint8_t v_isShared_3891_; uint8_t v_isSharedCheck_4005_; 
v_snd_3888_ = lean_ctor_get(v_head_3881_, 1);
v_isSharedCheck_4005_ = !lean_is_exclusive(v_head_3881_);
if (v_isSharedCheck_4005_ == 0)
{
lean_object* v_unused_4006_; 
v_unused_4006_ = lean_ctor_get(v_head_3881_, 0);
lean_dec(v_unused_4006_);
v___x_3890_ = v_head_3881_;
v_isShared_3891_ = v_isSharedCheck_4005_;
goto v_resetjp_3889_;
}
else
{
lean_inc(v_snd_3888_);
lean_dec(v_head_3881_);
v___x_3890_ = lean_box(0);
v_isShared_3891_ = v_isSharedCheck_4005_;
goto v_resetjp_3889_;
}
v_resetjp_3889_:
{
lean_object* v_fst_3892_; lean_object* v___x_3894_; uint8_t v_isShared_3895_; uint8_t v_isSharedCheck_4003_; 
v_fst_3892_ = lean_ctor_get(v_fst_3882_, 0);
v_isSharedCheck_4003_ = !lean_is_exclusive(v_fst_3882_);
if (v_isSharedCheck_4003_ == 0)
{
lean_object* v_unused_4004_; 
v_unused_4004_ = lean_ctor_get(v_fst_3882_, 1);
lean_dec(v_unused_4004_);
v___x_3894_ = v_fst_3882_;
v_isShared_3895_ = v_isSharedCheck_4003_;
goto v_resetjp_3893_;
}
else
{
lean_inc(v_fst_3892_);
lean_dec(v_fst_3882_);
v___x_3894_ = lean_box(0);
v_isShared_3895_ = v_isSharedCheck_4003_;
goto v_resetjp_3893_;
}
v_resetjp_3893_:
{
lean_object* v_fst_3896_; lean_object* v_snd_3897_; lean_object* v___x_3899_; uint8_t v_isShared_3900_; uint8_t v_isSharedCheck_4002_; 
v_fst_3896_ = lean_ctor_get(v_snd_3883_, 0);
v_snd_3897_ = lean_ctor_get(v_snd_3883_, 1);
v_isSharedCheck_4002_ = !lean_is_exclusive(v_snd_3883_);
if (v_isSharedCheck_4002_ == 0)
{
v___x_3899_ = v_snd_3883_;
v_isShared_3900_ = v_isSharedCheck_4002_;
goto v_resetjp_3898_;
}
else
{
lean_inc(v_snd_3897_);
lean_inc(v_fst_3896_);
lean_dec(v_snd_3883_);
v___x_3899_ = lean_box(0);
v_isShared_3900_ = v_isSharedCheck_4002_;
goto v_resetjp_3898_;
}
v_resetjp_3898_:
{
lean_object* v___x_3901_; lean_object* v___y_3903_; lean_object* v___y_3904_; lean_object* v_seg_3975_; lean_object* v___y_3977_; lean_object* v___x_3990_; 
v___x_3901_ = lean_box(0);
lean_inc(v_snd_3897_);
v_seg_3975_ = lp_choreo_Choreo_Transition_segment(v_r_3877_, v_snd_3897_);
v___x_3990_ = l_List_head_x3f___redArg(v_seg_3975_);
if (lean_obj_tag(v___x_3990_) == 0)
{
lean_object* v___x_3991_; 
v___x_3991_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5, &lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5);
v___y_3977_ = v___x_3991_;
goto v___jp_3976_;
}
else
{
lean_object* v_val_3992_; lean_object* v___x_3994_; uint8_t v_isShared_3995_; uint8_t v_isSharedCheck_4001_; 
v_val_3992_ = lean_ctor_get(v___x_3990_, 0);
v_isSharedCheck_4001_ = !lean_is_exclusive(v___x_3990_);
if (v_isSharedCheck_4001_ == 0)
{
v___x_3994_ = v___x_3990_;
v_isShared_3995_ = v_isSharedCheck_4001_;
goto v_resetjp_3993_;
}
else
{
lean_inc(v_val_3992_);
lean_dec(v___x_3990_);
v___x_3994_ = lean_box(0);
v_isShared_3995_ = v_isSharedCheck_4001_;
goto v_resetjp_3993_;
}
v_resetjp_3993_:
{
lean_object* v_t0_3996_; lean_object* v___x_3997_; lean_object* v___x_3999_; 
v_t0_3996_ = lean_ctor_get(v_val_3992_, 0);
lean_inc(v_t0_3996_);
lean_dec(v_val_3992_);
v___x_3997_ = l_Lean_JsonNumber_fromNat(v_t0_3996_);
if (v_isShared_3995_ == 0)
{
lean_ctor_set_tag(v___x_3994_, 2);
lean_ctor_set(v___x_3994_, 0, v___x_3997_);
v___x_3999_ = v___x_3994_;
goto v_reusejp_3998_;
}
else
{
lean_object* v_reuseFailAlloc_4000_; 
v_reuseFailAlloc_4000_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4000_, 0, v___x_3997_);
v___x_3999_ = v_reuseFailAlloc_4000_;
goto v_reusejp_3998_;
}
v_reusejp_3998_:
{
v___y_3977_ = v___x_3999_;
goto v___jp_3976_;
}
}
}
v___jp_3902_:
{
lean_object* v_first_3905_; lean_object* v_last_3906_; lean_object* v_start_3907_; lean_object* v_finish_3908_; lean_object* v___x_3909_; lean_object* v___x_3910_; lean_object* v___x_3911_; lean_object* v___x_3913_; 
v_first_3905_ = lean_ctor_get(v_snd_3897_, 0);
v_last_3906_ = lean_ctor_get(v_snd_3897_, 1);
v_start_3907_ = lean_ctor_get(v_snd_3897_, 2);
lean_inc(v_start_3907_);
v_finish_3908_ = lean_ctor_get(v_snd_3897_, 3);
lean_inc(v_finish_3908_);
v___x_3909_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__0));
lean_inc(v_snd_3888_);
v___x_3910_ = l_Lean_JsonNumber_fromNat(v_snd_3888_);
v___x_3911_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3911_, 0, v___x_3910_);
if (v_isShared_3900_ == 0)
{
lean_ctor_set(v___x_3899_, 1, v___x_3911_);
lean_ctor_set(v___x_3899_, 0, v___x_3909_);
v___x_3913_ = v___x_3899_;
goto v_reusejp_3912_;
}
else
{
lean_object* v_reuseFailAlloc_3974_; 
v_reuseFailAlloc_3974_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3974_, 0, v___x_3909_);
lean_ctor_set(v_reuseFailAlloc_3974_, 1, v___x_3911_);
v___x_3913_ = v_reuseFailAlloc_3974_;
goto v_reusejp_3912_;
}
v_reusejp_3912_:
{
lean_object* v___x_3914_; lean_object* v___x_3915_; lean_object* v___x_3917_; 
v___x_3914_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__3));
v___x_3915_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3915_, 0, v_fst_3892_);
if (v_isShared_3895_ == 0)
{
lean_ctor_set(v___x_3894_, 1, v___x_3915_);
lean_ctor_set(v___x_3894_, 0, v___x_3914_);
v___x_3917_ = v___x_3894_;
goto v_reusejp_3916_;
}
else
{
lean_object* v_reuseFailAlloc_3973_; 
v_reuseFailAlloc_3973_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3973_, 0, v___x_3914_);
lean_ctor_set(v_reuseFailAlloc_3973_, 1, v___x_3915_);
v___x_3917_ = v_reuseFailAlloc_3973_;
goto v_reusejp_3916_;
}
v_reusejp_3916_:
{
lean_object* v___x_3918_; lean_object* v___x_3919_; lean_object* v___x_3921_; 
v___x_3918_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__0));
v___x_3919_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3919_, 0, v_fst_3896_);
if (v_isShared_3891_ == 0)
{
lean_ctor_set(v___x_3890_, 1, v___x_3919_);
lean_ctor_set(v___x_3890_, 0, v___x_3918_);
v___x_3921_ = v___x_3890_;
goto v_reusejp_3920_;
}
else
{
lean_object* v_reuseFailAlloc_3972_; 
v_reuseFailAlloc_3972_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3972_, 0, v___x_3918_);
lean_ctor_set(v_reuseFailAlloc_3972_, 1, v___x_3919_);
v___x_3921_ = v_reuseFailAlloc_3972_;
goto v_reusejp_3920_;
}
v_reusejp_3920_:
{
lean_object* v___x_3922_; lean_object* v___x_3923_; lean_object* v___x_3924_; lean_object* v___x_3925_; lean_object* v___x_3926_; lean_object* v___x_3927_; lean_object* v___x_3928_; lean_object* v___x_3929_; lean_object* v___x_3930_; lean_object* v___x_3931_; lean_object* v___x_3932_; lean_object* v___x_3933_; lean_object* v___x_3934_; uint8_t v___x_3935_; lean_object* v___x_3936_; lean_object* v___x_3937_; lean_object* v___x_3938_; lean_object* v___x_3939_; lean_object* v___x_3940_; lean_object* v___x_3941_; lean_object* v___x_3942_; lean_object* v___x_3943_; lean_object* v___x_3944_; lean_object* v___x_3945_; lean_object* v___x_3946_; lean_object* v___x_3947_; lean_object* v___x_3948_; lean_object* v___x_3949_; lean_object* v___x_3950_; lean_object* v___x_3951_; lean_object* v___x_3952_; lean_object* v___x_3953_; lean_object* v___x_3954_; lean_object* v___x_3955_; lean_object* v___x_3957_; 
v___x_3922_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__0));
lean_inc(v_first_3905_);
v___x_3923_ = l_Lean_JsonNumber_fromNat(v_first_3905_);
v___x_3924_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3924_, 0, v___x_3923_);
v___x_3925_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3925_, 0, v___x_3922_);
lean_ctor_set(v___x_3925_, 1, v___x_3924_);
v___x_3926_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__1));
lean_inc(v_last_3906_);
v___x_3927_ = l_Lean_JsonNumber_fromNat(v_last_3906_);
v___x_3928_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_3928_, 0, v___x_3927_);
v___x_3929_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3929_, 0, v___x_3926_);
lean_ctor_set(v___x_3929_, 1, v___x_3928_);
v___x_3930_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__1));
v___x_3931_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3931_, 0, v___x_3930_);
lean_ctor_set(v___x_3931_, 1, v___y_3903_);
v___x_3932_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__2));
v___x_3933_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3933_, 0, v___x_3932_);
lean_ctor_set(v___x_3933_, 1, v___y_3904_);
v___x_3934_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__6));
lean_inc_ref(v_r_3877_);
v___x_3935_ = lp_choreo_Choreo_transitionOk(v_r_3877_, v_snd_3897_);
v___x_3936_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_3936_, 0, v___x_3935_);
v___x_3937_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3937_, 0, v___x_3934_);
lean_ctor_set(v___x_3937_, 1, v___x_3936_);
v___x_3938_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__6___closed__0));
v___x_3939_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__2));
v___x_3940_ = l_Nat_reprFast(v_snd_3888_);
v___x_3941_ = lean_string_append(v___x_3939_, v___x_3940_);
lean_dec_ref(v___x_3940_);
v___x_3942_ = ((lean_object*)(lp_choreo_Choreo_phaseProofTerm___closed__3));
v___x_3943_ = lean_string_append(v___x_3941_, v___x_3942_);
v___x_3944_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_3944_, 0, v___x_3943_);
v___x_3945_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3945_, 0, v___x_3938_);
lean_ctor_set(v___x_3945_, 1, v___x_3944_);
v___x_3946_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__3));
v___x_3947_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__3(v_start_3907_, v___x_3901_);
v___x_3948_ = lean_array_mk(v___x_3947_);
v___x_3949_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3949_, 0, v___x_3948_);
v___x_3950_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3950_, 0, v___x_3946_);
lean_ctor_set(v___x_3950_, 1, v___x_3949_);
v___x_3951_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__4));
v___x_3952_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__3(v_finish_3908_, v___x_3901_);
v___x_3953_ = lean_array_mk(v___x_3952_);
v___x_3954_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_3954_, 0, v___x_3953_);
v___x_3955_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_3955_, 0, v___x_3951_);
lean_ctor_set(v___x_3955_, 1, v___x_3954_);
if (v_isShared_3887_ == 0)
{
lean_ctor_set(v___x_3886_, 1, v___x_3901_);
lean_ctor_set(v___x_3886_, 0, v___x_3955_);
v___x_3957_ = v___x_3886_;
goto v_reusejp_3956_;
}
else
{
lean_object* v_reuseFailAlloc_3971_; 
v_reuseFailAlloc_3971_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_3971_, 0, v___x_3955_);
lean_ctor_set(v_reuseFailAlloc_3971_, 1, v___x_3901_);
v___x_3957_ = v_reuseFailAlloc_3971_;
goto v_reusejp_3956_;
}
v_reusejp_3956_:
{
lean_object* v___x_3958_; lean_object* v___x_3959_; lean_object* v___x_3960_; lean_object* v___x_3961_; lean_object* v___x_3962_; lean_object* v___x_3963_; lean_object* v___x_3964_; lean_object* v___x_3965_; lean_object* v___x_3966_; lean_object* v___x_3967_; lean_object* v___x_3968_; lean_object* v___x_3969_; 
v___x_3958_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3958_, 0, v___x_3950_);
lean_ctor_set(v___x_3958_, 1, v___x_3957_);
v___x_3959_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3959_, 0, v___x_3945_);
lean_ctor_set(v___x_3959_, 1, v___x_3958_);
v___x_3960_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3960_, 0, v___x_3937_);
lean_ctor_set(v___x_3960_, 1, v___x_3959_);
v___x_3961_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3961_, 0, v___x_3933_);
lean_ctor_set(v___x_3961_, 1, v___x_3960_);
v___x_3962_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3962_, 0, v___x_3931_);
lean_ctor_set(v___x_3962_, 1, v___x_3961_);
v___x_3963_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3963_, 0, v___x_3929_);
lean_ctor_set(v___x_3963_, 1, v___x_3962_);
v___x_3964_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3964_, 0, v___x_3925_);
lean_ctor_set(v___x_3964_, 1, v___x_3963_);
v___x_3965_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3965_, 0, v___x_3921_);
lean_ctor_set(v___x_3965_, 1, v___x_3964_);
v___x_3966_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3966_, 0, v___x_3917_);
lean_ctor_set(v___x_3966_, 1, v___x_3965_);
v___x_3967_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3967_, 0, v___x_3913_);
lean_ctor_set(v___x_3967_, 1, v___x_3966_);
v___x_3968_ = l_Lean_Json_mkObj(v___x_3967_);
lean_dec_ref_known(v___x_3967_, 2);
v___x_3969_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_3969_, 0, v___x_3968_);
lean_ctor_set(v___x_3969_, 1, v_a_3879_);
v_a_3878_ = v_tail_3884_;
v_a_3879_ = v___x_3969_;
goto _start;
}
}
}
}
}
v___jp_3976_:
{
lean_object* v___x_3978_; 
v___x_3978_ = l_List_getLast_x3f___redArg(v_seg_3975_);
lean_dec(v_seg_3975_);
if (lean_obj_tag(v___x_3978_) == 0)
{
lean_object* v___x_3979_; 
v___x_3979_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5, &lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6___closed__5);
v___y_3903_ = v___y_3977_;
v___y_3904_ = v___x_3979_;
goto v___jp_3902_;
}
else
{
lean_object* v_val_3980_; lean_object* v___x_3982_; uint8_t v_isShared_3983_; uint8_t v_isSharedCheck_3989_; 
v_val_3980_ = lean_ctor_get(v___x_3978_, 0);
v_isSharedCheck_3989_ = !lean_is_exclusive(v___x_3978_);
if (v_isSharedCheck_3989_ == 0)
{
v___x_3982_ = v___x_3978_;
v_isShared_3983_ = v_isSharedCheck_3989_;
goto v_resetjp_3981_;
}
else
{
lean_inc(v_val_3980_);
lean_dec(v___x_3978_);
v___x_3982_ = lean_box(0);
v_isShared_3983_ = v_isSharedCheck_3989_;
goto v_resetjp_3981_;
}
v_resetjp_3981_:
{
lean_object* v_t1_3984_; lean_object* v___x_3985_; lean_object* v___x_3987_; 
v_t1_3984_ = lean_ctor_get(v_val_3980_, 1);
lean_inc(v_t1_3984_);
lean_dec(v_val_3980_);
v___x_3985_ = l_Lean_JsonNumber_fromNat(v_t1_3984_);
if (v_isShared_3983_ == 0)
{
lean_ctor_set_tag(v___x_3982_, 2);
lean_ctor_set(v___x_3982_, 0, v___x_3985_);
v___x_3987_ = v___x_3982_;
goto v_reusejp_3986_;
}
else
{
lean_object* v_reuseFailAlloc_3988_; 
v_reuseFailAlloc_3988_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v_reuseFailAlloc_3988_, 0, v___x_3985_);
v___x_3987_ = v_reuseFailAlloc_3988_;
goto v_reusejp_3986_;
}
v_reusejp_3986_:
{
v___y_3903_ = v___y_3977_;
v___y_3904_ = v___x_3987_;
goto v___jp_3902_;
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
lean_object* v___x_4014_; lean_object* v___x_4015_; 
v___x_4014_ = lp_choreo_Choreo_stageRect;
v___x_4015_ = lp_choreo_Choreo_jRect(v___x_4014_);
return v___x_4015_;
}
}
static lean_object* _init_lp_choreo_Choreo_report___closed__6(void){
_start:
{
lean_object* v___x_4016_; lean_object* v___x_4017_; lean_object* v___x_4018_; 
v___x_4016_ = lean_obj_once(&lp_choreo_Choreo_report___closed__5, &lp_choreo_Choreo_report___closed__5_once, _init_lp_choreo_Choreo_report___closed__5);
v___x_4017_ = ((lean_object*)(lp_choreo_Choreo_report___closed__4));
v___x_4018_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4018_, 0, v___x_4017_);
lean_ctor_set(v___x_4018_, 1, v___x_4016_);
return v___x_4018_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_report(lean_object* v_b_4050_, lean_object* v_names_4051_, lean_object* v_proofPath_4052_, lean_object* v_program_4053_, lean_object* v_start_4054_){
_start:
{
lean_object* v_routine_4055_; lean_object* v_plan_4056_; lean_object* v_labels_4057_; lean_object* v_asks_4058_; lean_object* v_rejected_4059_; lean_object* v_keys_4060_; lean_object* v_error_4061_; lean_object* v_scene_4062_; lean_object* v_derived_4063_; lean_object* v_heard_4064_; lean_object* v_minSeconds_4065_; lean_object* v_dropped_4066_; lean_object* v_drift_4067_; lean_object* v_cfg_4068_; lean_object* v_phases_4069_; lean_object* v_problems_4070_; lean_object* v___x_4071_; lean_object* v_asks_4072_; uint8_t v_globalOk_4073_; uint8_t v___x_4074_; lean_object* v___y_4076_; lean_object* v___y_4077_; lean_object* v___y_4078_; lean_object* v___y_4079_; lean_object* v___y_4080_; lean_object* v___y_4081_; lean_object* v___y_4082_; lean_object* v___y_4083_; lean_object* v___y_4084_; lean_object* v___y_4085_; lean_object* v___y_4086_; lean_object* v___y_4087_; lean_object* v___y_4088_; lean_object* v___y_4089_; lean_object* v___y_4090_; lean_object* v___y_4091_; lean_object* v___y_4092_; lean_object* v___y_4093_; lean_object* v___y_4094_; lean_object* v___y_4095_; lean_object* v___y_4244_; lean_object* v___y_4245_; lean_object* v___y_4246_; lean_object* v___y_4247_; lean_object* v___y_4248_; lean_object* v___y_4249_; lean_object* v___y_4250_; lean_object* v___y_4251_; lean_object* v___y_4252_; lean_object* v___y_4253_; lean_object* v___y_4254_; lean_object* v___y_4255_; lean_object* v___y_4256_; lean_object* v___y_4257_; lean_object* v___y_4258_; lean_object* v___y_4259_; lean_object* v___y_4260_; lean_object* v___y_4261_; lean_object* v___y_4262_; lean_object* v___y_4339_; lean_object* v___y_4340_; lean_object* v___y_4341_; lean_object* v___y_4342_; lean_object* v___y_4343_; lean_object* v___y_4344_; lean_object* v___y_4345_; lean_object* v___y_4346_; lean_object* v___y_4347_; lean_object* v___y_4348_; lean_object* v___y_4349_; lean_object* v___y_4350_; lean_object* v___y_4351_; lean_object* v___y_4352_; lean_object* v___y_4353_; lean_object* v___y_4354_; lean_object* v___y_4355_; lean_object* v___y_4356_; uint8_t v___x_4363_; lean_object* v___y_4365_; lean_object* v___y_4366_; lean_object* v___y_4367_; lean_object* v___y_4368_; lean_object* v___y_4369_; lean_object* v___y_4370_; lean_object* v___y_4371_; lean_object* v___y_4372_; lean_object* v___y_4373_; lean_object* v___y_4374_; lean_object* v___y_4375_; lean_object* v___y_4376_; lean_object* v___y_4377_; lean_object* v___y_4378_; lean_object* v___y_4379_; lean_object* v___y_4380_; lean_object* v___y_4381_; lean_object* v___y_4382_; lean_object* v___y_4383_; lean_object* v___y_4384_; lean_object* v___y_4385_; lean_object* v___y_4386_; lean_object* v___y_4387_; lean_object* v___y_4403_; lean_object* v___y_4404_; lean_object* v___y_4405_; lean_object* v___y_4406_; lean_object* v___y_4407_; lean_object* v___y_4408_; lean_object* v___y_4409_; lean_object* v___y_4410_; lean_object* v___y_4411_; lean_object* v___y_4412_; lean_object* v___y_4413_; lean_object* v___y_4461_; lean_object* v___y_4462_; lean_object* v___y_4463_; lean_object* v___y_4464_; lean_object* v___y_4465_; lean_object* v___y_4466_; lean_object* v___y_4467_; lean_object* v___y_4488_; 
v_routine_4055_ = lean_ctor_get(v_b_4050_, 1);
lean_inc_ref_n(v_routine_4055_, 4);
v_plan_4056_ = lean_ctor_get(v_b_4050_, 0);
v_labels_4057_ = lean_ctor_get(v_b_4050_, 2);
v_asks_4058_ = lean_ctor_get(v_b_4050_, 3);
v_rejected_4059_ = lean_ctor_get(v_b_4050_, 4);
lean_inc(v_rejected_4059_);
v_keys_4060_ = lean_ctor_get(v_b_4050_, 5);
v_error_4061_ = lean_ctor_get(v_b_4050_, 6);
lean_inc(v_error_4061_);
v_scene_4062_ = lean_ctor_get(v_b_4050_, 7);
v_derived_4063_ = lean_ctor_get(v_b_4050_, 8);
v_heard_4064_ = lean_ctor_get(v_b_4050_, 9);
v_minSeconds_4065_ = lean_ctor_get(v_b_4050_, 10);
v_dropped_4066_ = lean_ctor_get(v_b_4050_, 11);
v_drift_4067_ = lean_ctor_get(v_b_4050_, 12);
v_cfg_4068_ = lean_ctor_get(v_routine_4055_, 0);
lean_inc_ref(v_cfg_4068_);
v_phases_4069_ = lean_ctor_get(v_routine_4055_, 1);
lean_inc(v_phases_4069_);
v_problems_4070_ = lp_choreo_Choreo_phaseProblems(v_routine_4055_);
v___x_4071_ = lean_box(0);
lean_inc(v_asks_4058_);
v_asks_4072_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__0(v_routine_4055_, v_asks_4058_, v___x_4071_);
v_globalOk_4073_ = lp_choreo_Choreo_Routine_checkGlobal(v_routine_4055_);
lean_inc_ref(v_b_4050_);
v___x_4074_ = lp_choreo_Choreo_Built_movementOk(v_b_4050_);
v___x_4363_ = 1;
if (v___x_4074_ == 0)
{
uint8_t v___x_4510_; 
v___x_4510_ = lp_choreo_List_any___at___00Choreo_report_spec__12(v_problems_4070_);
if (v___x_4510_ == 0)
{
lean_object* v___x_4511_; 
lean_inc(v_asks_4058_);
lean_inc_ref(v_routine_4055_);
v___x_4511_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(v_routine_4055_, v_asks_4058_);
if (lean_obj_tag(v___x_4511_) == 0)
{
if (v___x_4074_ == 0)
{
lean_object* v___x_4512_; 
v___x_4512_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__19));
v___y_4488_ = v___x_4512_;
goto v___jp_4487_;
}
else
{
goto v___jp_4508_;
}
}
else
{
lean_dec_ref_known(v___x_4511_, 1);
goto v___jp_4508_;
}
}
else
{
goto v___jp_4508_;
}
}
else
{
lean_object* v___x_4513_; 
v___x_4513_ = ((lean_object*)(lp_choreo_Choreo_report___closed__37));
v___y_4488_ = v___x_4513_;
goto v___jp_4487_;
}
v___jp_4075_:
{
lean_object* v_n_4096_; lean_object* v_dmin_4097_; lean_object* v_vmax_4098_; lean_object* v_stage_4099_; lean_object* v_ticksPerBeat_4100_; lean_object* v_bpmNum_4101_; lean_object* v_bpmDen_4102_; lean_object* v_total_4103_; lean_object* v_seconds_4104_; lean_object* v___x_4105_; lean_object* v___x_4106_; lean_object* v___x_4107_; lean_object* v___x_4108_; lean_object* v___x_4109_; lean_object* v___x_4110_; lean_object* v___x_4111_; lean_object* v___x_4112_; lean_object* v___x_4113_; lean_object* v___x_4114_; lean_object* v___x_4115_; lean_object* v___x_4116_; lean_object* v___x_4117_; lean_object* v___x_4118_; lean_object* v___x_4119_; lean_object* v___x_4120_; lean_object* v___x_4121_; lean_object* v___x_4122_; lean_object* v___x_4123_; lean_object* v___x_4124_; lean_object* v___x_4125_; lean_object* v___x_4126_; lean_object* v___x_4127_; lean_object* v___x_4128_; lean_object* v___x_4129_; lean_object* v___x_4130_; lean_object* v___x_4131_; lean_object* v___x_4132_; lean_object* v___x_4133_; lean_object* v___x_4134_; lean_object* v___x_4135_; lean_object* v___x_4136_; lean_object* v___x_4137_; lean_object* v___x_4138_; lean_object* v___x_4139_; lean_object* v___x_4140_; lean_object* v___x_4141_; lean_object* v___x_4142_; lean_object* v___x_4143_; lean_object* v___x_4144_; lean_object* v___x_4145_; lean_object* v___x_4146_; lean_object* v___x_4147_; lean_object* v___x_4148_; lean_object* v___x_4149_; lean_object* v___x_4150_; lean_object* v___x_4151_; lean_object* v___x_4152_; lean_object* v___x_4153_; lean_object* v___x_4154_; lean_object* v___x_4155_; lean_object* v___x_4156_; lean_object* v___x_4157_; lean_object* v___x_4158_; lean_object* v___x_4159_; lean_object* v___x_4160_; lean_object* v___x_4161_; lean_object* v___x_4162_; lean_object* v___x_4163_; lean_object* v___x_4164_; lean_object* v___x_4165_; lean_object* v___x_4166_; lean_object* v___x_4167_; lean_object* v___x_4168_; lean_object* v___x_4169_; lean_object* v___x_4170_; lean_object* v___x_4171_; lean_object* v___x_4172_; lean_object* v___x_4173_; uint8_t v___x_4174_; lean_object* v___x_4175_; lean_object* v___x_4176_; lean_object* v___x_4177_; lean_object* v___x_4178_; lean_object* v___x_4179_; lean_object* v___x_4180_; uint8_t v___x_4181_; lean_object* v___x_4182_; lean_object* v___x_4183_; lean_object* v___x_4184_; uint8_t v___x_4185_; lean_object* v___x_4186_; lean_object* v___x_4187_; lean_object* v___x_4188_; lean_object* v___x_4189_; lean_object* v___x_4190_; lean_object* v___x_4191_; lean_object* v___x_4192_; lean_object* v___x_4193_; lean_object* v___x_4194_; lean_object* v___x_4195_; lean_object* v___x_4196_; lean_object* v___x_4197_; lean_object* v___x_4198_; lean_object* v___x_4199_; lean_object* v___x_4200_; lean_object* v___x_4201_; lean_object* v___x_4202_; lean_object* v___x_4203_; lean_object* v___x_4204_; lean_object* v___x_4205_; lean_object* v___x_4206_; lean_object* v___x_4207_; lean_object* v___x_4208_; lean_object* v___x_4209_; lean_object* v___x_4210_; lean_object* v___x_4211_; lean_object* v___x_4212_; lean_object* v___x_4213_; lean_object* v___x_4214_; lean_object* v___x_4215_; lean_object* v___x_4216_; lean_object* v___x_4217_; lean_object* v___x_4218_; lean_object* v___x_4219_; lean_object* v___x_4220_; lean_object* v___x_4221_; lean_object* v___x_4222_; lean_object* v___x_4223_; lean_object* v___x_4224_; lean_object* v___x_4225_; lean_object* v___x_4226_; lean_object* v___x_4227_; lean_object* v___x_4228_; lean_object* v___x_4229_; lean_object* v___x_4230_; lean_object* v___x_4231_; lean_object* v___x_4232_; lean_object* v___x_4233_; lean_object* v___x_4234_; lean_object* v___x_4235_; lean_object* v___x_4236_; lean_object* v___x_4237_; lean_object* v___x_4238_; lean_object* v___x_4239_; lean_object* v___x_4240_; lean_object* v___x_4241_; lean_object* v___x_4242_; 
v_n_4096_ = lean_ctor_get(v_cfg_4068_, 0);
v_dmin_4097_ = lean_ctor_get(v_cfg_4068_, 1);
v_vmax_4098_ = lean_ctor_get(v_cfg_4068_, 2);
v_stage_4099_ = lean_ctor_get(v_cfg_4068_, 3);
v_ticksPerBeat_4100_ = lean_ctor_get(v_cfg_4068_, 4);
v_bpmNum_4101_ = lean_ctor_get(v_cfg_4068_, 5);
v_bpmDen_4102_ = lean_ctor_get(v_cfg_4068_, 6);
v_total_4103_ = lean_ctor_get(v_cfg_4068_, 7);
v_seconds_4104_ = lean_ctor_get(v_cfg_4068_, 8);
lean_inc_ref(v___y_4084_);
v___x_4105_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4105_, 0, v___y_4084_);
lean_ctor_set(v___x_4105_, 1, v___y_4095_);
v___x_4106_ = ((lean_object*)(lp_choreo_Choreo_report___closed__0));
lean_inc_n(v_n_4096_, 2);
v___x_4107_ = l_Lean_JsonNumber_fromNat(v_n_4096_);
v___x_4108_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4108_, 0, v___x_4107_);
lean_inc_ref(v___y_4090_);
v___x_4109_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4109_, 0, v___y_4090_);
lean_ctor_set(v___x_4109_, 1, v___x_4108_);
v___x_4110_ = ((lean_object*)(lp_choreo_Choreo_report___closed__1));
lean_inc(v_dmin_4097_);
v___x_4111_ = lp_choreo_Choreo_jInt(v_dmin_4097_);
v___x_4112_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4112_, 0, v___x_4110_);
lean_ctor_set(v___x_4112_, 1, v___x_4111_);
v___x_4113_ = ((lean_object*)(lp_choreo_Choreo_report___closed__2));
lean_inc(v_vmax_4098_);
v___x_4114_ = lp_choreo_Choreo_jInt(v_vmax_4098_);
v___x_4115_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4115_, 0, v___x_4113_);
lean_ctor_set(v___x_4115_, 1, v___x_4114_);
v___x_4116_ = ((lean_object*)(lp_choreo_Choreo_report___closed__3));
lean_inc_ref(v_stage_4099_);
v___x_4117_ = lp_choreo_Choreo_jRect(v_stage_4099_);
v___x_4118_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4118_, 0, v___x_4116_);
lean_ctor_set(v___x_4118_, 1, v___x_4117_);
v___x_4119_ = lean_obj_once(&lp_choreo_Choreo_report___closed__6, &lp_choreo_Choreo_report___closed__6_once, _init_lp_choreo_Choreo_report___closed__6);
v___x_4120_ = ((lean_object*)(lp_choreo_Choreo_report___closed__7));
lean_inc(v_ticksPerBeat_4100_);
v___x_4121_ = l_Lean_JsonNumber_fromNat(v_ticksPerBeat_4100_);
v___x_4122_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4122_, 0, v___x_4121_);
v___x_4123_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4123_, 0, v___x_4120_);
lean_ctor_set(v___x_4123_, 1, v___x_4122_);
v___x_4124_ = ((lean_object*)(lp_choreo_Choreo_report___closed__8));
lean_inc(v_bpmNum_4101_);
v___x_4125_ = l_Lean_JsonNumber_fromNat(v_bpmNum_4101_);
v___x_4126_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4126_, 0, v___x_4125_);
v___x_4127_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4127_, 0, v___x_4124_);
lean_ctor_set(v___x_4127_, 1, v___x_4126_);
v___x_4128_ = ((lean_object*)(lp_choreo_Choreo_report___closed__9));
lean_inc(v_bpmDen_4102_);
v___x_4129_ = l_Lean_JsonNumber_fromNat(v_bpmDen_4102_);
v___x_4130_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4130_, 0, v___x_4129_);
v___x_4131_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4131_, 0, v___x_4128_);
lean_ctor_set(v___x_4131_, 1, v___x_4130_);
v___x_4132_ = ((lean_object*)(lp_choreo_Choreo_report___closed__10));
lean_inc(v_total_4103_);
v___x_4133_ = l_Lean_JsonNumber_fromNat(v_total_4103_);
v___x_4134_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4134_, 0, v___x_4133_);
v___x_4135_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4135_, 0, v___x_4132_);
lean_ctor_set(v___x_4135_, 1, v___x_4134_);
lean_inc(v_seconds_4104_);
v___x_4136_ = l_Lean_JsonNumber_fromNat(v_seconds_4104_);
v___x_4137_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4137_, 0, v___x_4136_);
lean_inc_ref(v___y_4082_);
v___x_4138_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4138_, 0, v___y_4082_);
lean_ctor_set(v___x_4138_, 1, v___x_4137_);
lean_inc_n(v___y_4085_, 2);
v___x_4139_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4139_, 0, v___x_4138_);
lean_ctor_set(v___x_4139_, 1, v___y_4085_);
v___x_4140_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4140_, 0, v___x_4135_);
lean_ctor_set(v___x_4140_, 1, v___x_4139_);
v___x_4141_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4141_, 0, v___x_4131_);
lean_ctor_set(v___x_4141_, 1, v___x_4140_);
v___x_4142_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4142_, 0, v___x_4127_);
lean_ctor_set(v___x_4142_, 1, v___x_4141_);
v___x_4143_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4143_, 0, v___x_4123_);
lean_ctor_set(v___x_4143_, 1, v___x_4142_);
v___x_4144_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4144_, 0, v___x_4119_);
lean_ctor_set(v___x_4144_, 1, v___x_4143_);
v___x_4145_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4145_, 0, v___x_4118_);
lean_ctor_set(v___x_4145_, 1, v___x_4144_);
v___x_4146_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4146_, 0, v___x_4115_);
lean_ctor_set(v___x_4146_, 1, v___x_4145_);
v___x_4147_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4147_, 0, v___x_4112_);
lean_ctor_set(v___x_4147_, 1, v___x_4146_);
v___x_4148_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4148_, 0, v___x_4109_);
lean_ctor_set(v___x_4148_, 1, v___x_4147_);
v___x_4149_ = l_Lean_Json_mkObj(v___x_4148_);
lean_dec_ref_known(v___x_4148_, 2);
v___x_4150_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4150_, 0, v___x_4106_);
lean_ctor_set(v___x_4150_, 1, v___x_4149_);
v___x_4151_ = ((lean_object*)(lp_choreo_Choreo_phaseJson___closed__8));
v___x_4152_ = l_List_range(v_n_4096_);
lean_inc_n(v___y_4088_, 6);
lean_inc_ref_n(v_names_4051_, 3);
v___x_4153_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__2(v_names_4051_, v___x_4152_, v___y_4088_);
v___x_4154_ = lean_array_mk(v___x_4153_);
v___x_4155_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4155_, 0, v___x_4154_);
v___x_4156_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4156_, 0, v___x_4151_);
lean_ctor_set(v___x_4156_, 1, v___x_4155_);
v___x_4157_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__0));
v___x_4158_ = lean_unsigned_to_nat(0u);
lean_inc(v_phases_4069_);
v___x_4159_ = l_List_zipIdxTR___redArg(v_phases_4069_, v___x_4158_);
lean_inc_ref_n(v_cfg_4068_, 2);
v___x_4160_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__4(v___y_4080_, v_cfg_4068_, v_names_4051_, v___x_4159_, v___y_4088_);
lean_dec_ref(v___y_4080_);
v___x_4161_ = lean_array_mk(v___x_4160_);
v___x_4162_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4162_, 0, v___x_4161_);
v___x_4163_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4163_, 0, v___x_4157_);
lean_ctor_set(v___x_4163_, 1, v___x_4162_);
v___x_4164_ = ((lean_object*)(lp_choreo_Choreo_report___closed__11));
lean_inc(v_keys_4060_);
v___x_4165_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__5(v_keys_4060_, v___y_4088_);
v___x_4166_ = lean_array_mk(v___x_4165_);
v___x_4167_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4167_, 0, v___x_4166_);
v___x_4168_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4168_, 0, v___x_4164_);
lean_ctor_set(v___x_4168_, 1, v___x_4167_);
v___x_4169_ = ((lean_object*)(lp_choreo_Choreo_report___closed__12));
v___x_4170_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4170_, 0, v_globalOk_4073_);
v___x_4171_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4171_, 0, v___x_4169_);
lean_ctor_set(v___x_4171_, 1, v___x_4170_);
v___x_4172_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00Choreo_programJson_spec__0___redArg___closed__4));
v___x_4173_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__4));
lean_inc_ref(v_b_4050_);
v___x_4174_ = lp_choreo_Choreo_Built_formationOk(v_b_4050_);
v___x_4175_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4175_, 0, v___x_4174_);
v___x_4176_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4176_, 0, v___x_4173_);
lean_ctor_set(v___x_4176_, 1, v___x_4175_);
v___x_4177_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7___closed__5));
v___x_4178_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4178_, 0, v___x_4074_);
v___x_4179_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4179_, 0, v___x_4177_);
lean_ctor_set(v___x_4179_, 1, v___x_4178_);
v___x_4180_ = ((lean_object*)(lp_choreo_Choreo_report___closed__13));
v___x_4181_ = lp_choreo_Choreo_Built_musicOk(v_b_4050_);
v___x_4182_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4182_, 0, v___x_4181_);
v___x_4183_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4183_, 0, v___x_4180_);
lean_ctor_set(v___x_4183_, 1, v___x_4182_);
v___x_4184_ = ((lean_object*)(lp_choreo_Choreo_report___closed__14));
lean_inc_ref(v_routine_4055_);
v___x_4185_ = lp_choreo_Choreo_Routine_checkMovement(v_routine_4055_);
v___x_4186_ = lean_alloc_ctor(1, 0, 1);
lean_ctor_set_uint8(v___x_4186_, 0, v___x_4185_);
v___x_4187_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4187_, 0, v___x_4184_);
lean_ctor_set(v___x_4187_, 1, v___x_4186_);
v___x_4188_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4188_, 0, v___x_4187_);
lean_ctor_set(v___x_4188_, 1, v___y_4085_);
v___x_4189_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4189_, 0, v___x_4183_);
lean_ctor_set(v___x_4189_, 1, v___x_4188_);
v___x_4190_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4190_, 0, v___x_4179_);
lean_ctor_set(v___x_4190_, 1, v___x_4189_);
v___x_4191_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4191_, 0, v___x_4176_);
lean_ctor_set(v___x_4191_, 1, v___x_4190_);
v___x_4192_ = l_Lean_Json_mkObj(v___x_4191_);
lean_dec_ref_known(v___x_4191_, 2);
v___x_4193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4193_, 0, v___x_4172_);
lean_ctor_set(v___x_4193_, 1, v___x_4192_);
v___x_4194_ = ((lean_object*)(lp_choreo_Choreo_report___closed__15));
v___x_4195_ = lp_choreo_Choreo_transitionsOf(v_b_4050_);
v___x_4196_ = l_List_zipIdxTR___redArg(v___x_4195_, v___x_4158_);
v___x_4197_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__6(v_routine_4055_, v___x_4196_, v___y_4088_);
v___x_4198_ = lean_array_mk(v___x_4197_);
v___x_4199_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4199_, 0, v___x_4198_);
v___x_4200_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4200_, 0, v___x_4194_);
lean_ctor_set(v___x_4200_, 1, v___x_4199_);
v___x_4201_ = ((lean_object*)(lp_choreo_Choreo_report___closed__16));
v___x_4202_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__7(v_asks_4072_, v___y_4088_);
v___x_4203_ = lean_array_mk(v___x_4202_);
v___x_4204_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4204_, 0, v___x_4203_);
v___x_4205_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4205_, 0, v___x_4201_);
lean_ctor_set(v___x_4205_, 1, v___x_4204_);
v___x_4206_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10___closed__0));
v___x_4207_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__8(v_cfg_4068_, v_phases_4069_, v_names_4051_, v_problems_4070_, v___y_4088_);
v___x_4208_ = lean_array_mk(v___x_4207_);
v___x_4209_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4209_, 0, v___x_4208_);
v___x_4210_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4210_, 0, v___x_4206_);
lean_ctor_set(v___x_4210_, 1, v___x_4209_);
v___x_4211_ = ((lean_object*)(lp_choreo_Choreo_report___closed__17));
v___x_4212_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__10(v___y_4079_, v___y_4083_, v_names_4051_, v_rejected_4059_, v___y_4088_);
v___x_4213_ = lean_array_mk(v___x_4212_);
v___x_4214_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4214_, 0, v___x_4213_);
v___x_4215_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4215_, 0, v___x_4211_);
lean_ctor_set(v___x_4215_, 1, v___x_4214_);
v___x_4216_ = ((lean_object*)(lp_choreo_Choreo_report___closed__18));
v___x_4217_ = lp_choreo_Choreo_samplesJson(v_cfg_4068_, v_phases_4069_);
v___x_4218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4218_, 0, v___x_4216_);
lean_ctor_set(v___x_4218_, 1, v___x_4217_);
v___x_4219_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4219_, 0, v___x_4218_);
lean_ctor_set(v___x_4219_, 1, v___y_4085_);
v___x_4220_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4220_, 0, v___x_4215_);
lean_ctor_set(v___x_4220_, 1, v___x_4219_);
v___x_4221_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4221_, 0, v___x_4210_);
lean_ctor_set(v___x_4221_, 1, v___x_4220_);
v___x_4222_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4222_, 0, v___x_4205_);
lean_ctor_set(v___x_4222_, 1, v___x_4221_);
v___x_4223_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4223_, 0, v___x_4200_);
lean_ctor_set(v___x_4223_, 1, v___x_4222_);
v___x_4224_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4224_, 0, v___x_4193_);
lean_ctor_set(v___x_4224_, 1, v___x_4223_);
v___x_4225_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4225_, 0, v___x_4171_);
lean_ctor_set(v___x_4225_, 1, v___x_4224_);
v___x_4226_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4226_, 0, v___x_4168_);
lean_ctor_set(v___x_4226_, 1, v___x_4225_);
v___x_4227_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4227_, 0, v___x_4163_);
lean_ctor_set(v___x_4227_, 1, v___x_4226_);
v___x_4228_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4228_, 0, v___x_4156_);
lean_ctor_set(v___x_4228_, 1, v___x_4227_);
v___x_4229_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4229_, 0, v___x_4150_);
lean_ctor_set(v___x_4229_, 1, v___x_4228_);
v___x_4230_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4230_, 0, v___x_4105_);
lean_ctor_set(v___x_4230_, 1, v___x_4229_);
v___x_4231_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4231_, 0, v___y_4089_);
lean_ctor_set(v___x_4231_, 1, v___x_4230_);
v___x_4232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4232_, 0, v___y_4091_);
lean_ctor_set(v___x_4232_, 1, v___x_4231_);
v___x_4233_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4233_, 0, v___y_4086_);
lean_ctor_set(v___x_4233_, 1, v___x_4232_);
v___x_4234_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4234_, 0, v___y_4078_);
lean_ctor_set(v___x_4234_, 1, v___x_4233_);
v___x_4235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4235_, 0, v___y_4087_);
lean_ctor_set(v___x_4235_, 1, v___x_4234_);
v___x_4236_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4236_, 0, v___y_4077_);
lean_ctor_set(v___x_4236_, 1, v___x_4235_);
v___x_4237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4237_, 0, v___y_4076_);
lean_ctor_set(v___x_4237_, 1, v___x_4236_);
v___x_4238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4238_, 0, v___y_4092_);
lean_ctor_set(v___x_4238_, 1, v___x_4237_);
v___x_4239_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4239_, 0, v___y_4081_);
lean_ctor_set(v___x_4239_, 1, v___x_4238_);
v___x_4240_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4240_, 0, v___y_4093_);
lean_ctor_set(v___x_4240_, 1, v___x_4239_);
v___x_4241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4241_, 0, v___y_4094_);
lean_ctor_set(v___x_4241_, 1, v___x_4240_);
v___x_4242_ = l_Lean_Json_mkObj(v___x_4241_);
lean_dec_ref_known(v___x_4241_, 2);
return v___x_4242_;
}
v___jp_4243_:
{
lean_object* v___x_4263_; lean_object* v___x_4264_; lean_object* v___x_4265_; 
lean_inc_ref(v___y_4245_);
v___x_4263_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4263_, 0, v___y_4245_);
lean_ctor_set(v___x_4263_, 1, v___y_4262_);
v___x_4264_ = ((lean_object*)(lp_choreo_Choreo_report___closed__19));
lean_inc(v_asks_4058_);
lean_inc_ref(v_routine_4055_);
v___x_4265_ = lp_choreo_List_findSome_x3f___at___00Choreo_brokenLine_spec__1(v_routine_4055_, v_asks_4058_);
if (lean_obj_tag(v___x_4265_) == 0)
{
lean_object* v___x_4266_; 
v___x_4266_ = lean_box(0);
v___y_4076_ = v___y_4244_;
v___y_4077_ = v___y_4246_;
v___y_4078_ = v___y_4247_;
v___y_4079_ = v___y_4248_;
v___y_4080_ = v___y_4249_;
v___y_4081_ = v___y_4250_;
v___y_4082_ = v___y_4251_;
v___y_4083_ = v___y_4252_;
v___y_4084_ = v___x_4264_;
v___y_4085_ = v___y_4253_;
v___y_4086_ = v___y_4254_;
v___y_4087_ = v___y_4255_;
v___y_4088_ = v___y_4256_;
v___y_4089_ = v___x_4263_;
v___y_4090_ = v___y_4257_;
v___y_4091_ = v___y_4258_;
v___y_4092_ = v___y_4259_;
v___y_4093_ = v___y_4260_;
v___y_4094_ = v___y_4261_;
v___y_4095_ = v___x_4266_;
goto v___jp_4075_;
}
else
{
lean_object* v_val_4267_; lean_object* v___x_4269_; uint8_t v_isShared_4270_; uint8_t v_isSharedCheck_4337_; 
v_val_4267_ = lean_ctor_get(v___x_4265_, 0);
v_isSharedCheck_4337_ = !lean_is_exclusive(v___x_4265_);
if (v_isSharedCheck_4337_ == 0)
{
v___x_4269_ = v___x_4265_;
v_isShared_4270_ = v_isSharedCheck_4337_;
goto v_resetjp_4268_;
}
else
{
lean_inc(v_val_4267_);
lean_dec(v___x_4265_);
v___x_4269_ = lean_box(0);
v_isShared_4270_ = v_isSharedCheck_4337_;
goto v_resetjp_4268_;
}
v_resetjp_4268_:
{
lean_object* v_snd_4271_; lean_object* v_snd_4272_; lean_object* v___x_4274_; uint8_t v_isShared_4275_; uint8_t v_isSharedCheck_4335_; 
v_snd_4271_ = lean_ctor_get(v_val_4267_, 1);
lean_inc(v_snd_4271_);
v_snd_4272_ = lean_ctor_get(v_snd_4271_, 1);
v_isSharedCheck_4335_ = !lean_is_exclusive(v_snd_4271_);
if (v_isSharedCheck_4335_ == 0)
{
lean_object* v_unused_4336_; 
v_unused_4336_ = lean_ctor_get(v_snd_4271_, 0);
lean_dec(v_unused_4336_);
v___x_4274_ = v_snd_4271_;
v_isShared_4275_ = v_isSharedCheck_4335_;
goto v_resetjp_4273_;
}
else
{
lean_inc(v_snd_4272_);
lean_dec(v_snd_4271_);
v___x_4274_ = lean_box(0);
v_isShared_4275_ = v_isSharedCheck_4335_;
goto v_resetjp_4273_;
}
v_resetjp_4273_:
{
lean_object* v_snd_4276_; lean_object* v___x_4278_; uint8_t v_isShared_4279_; uint8_t v_isSharedCheck_4333_; 
v_snd_4276_ = lean_ctor_get(v_snd_4272_, 1);
v_isSharedCheck_4333_ = !lean_is_exclusive(v_snd_4272_);
if (v_isSharedCheck_4333_ == 0)
{
lean_object* v_unused_4334_; 
v_unused_4334_ = lean_ctor_get(v_snd_4272_, 0);
lean_dec(v_unused_4334_);
v___x_4278_ = v_snd_4272_;
v_isShared_4279_ = v_isSharedCheck_4333_;
goto v_resetjp_4277_;
}
else
{
lean_inc(v_snd_4276_);
lean_dec(v_snd_4272_);
v___x_4278_ = lean_box(0);
v_isShared_4279_ = v_isSharedCheck_4333_;
goto v_resetjp_4277_;
}
v_resetjp_4277_:
{
lean_object* v_snd_4280_; lean_object* v___x_4282_; uint8_t v_isShared_4283_; uint8_t v_isSharedCheck_4331_; 
v_snd_4280_ = lean_ctor_get(v_snd_4276_, 1);
v_isSharedCheck_4331_ = !lean_is_exclusive(v_snd_4276_);
if (v_isSharedCheck_4331_ == 0)
{
lean_object* v_unused_4332_; 
v_unused_4332_ = lean_ctor_get(v_snd_4276_, 0);
lean_dec(v_unused_4332_);
v___x_4282_ = v_snd_4276_;
v_isShared_4283_ = v_isSharedCheck_4331_;
goto v_resetjp_4281_;
}
else
{
lean_inc(v_snd_4280_);
lean_dec(v_snd_4276_);
v___x_4282_ = lean_box(0);
v_isShared_4283_ = v_isSharedCheck_4331_;
goto v_resetjp_4281_;
}
v_resetjp_4281_:
{
lean_object* v_snd_4284_; lean_object* v___x_4286_; uint8_t v_isShared_4287_; uint8_t v_isSharedCheck_4329_; 
v_snd_4284_ = lean_ctor_get(v_snd_4280_, 1);
v_isSharedCheck_4329_ = !lean_is_exclusive(v_snd_4280_);
if (v_isSharedCheck_4329_ == 0)
{
lean_object* v_unused_4330_; 
v_unused_4330_ = lean_ctor_get(v_snd_4280_, 0);
lean_dec(v_unused_4330_);
v___x_4286_ = v_snd_4280_;
v_isShared_4287_ = v_isSharedCheck_4329_;
goto v_resetjp_4285_;
}
else
{
lean_inc(v_snd_4284_);
lean_dec(v_snd_4280_);
v___x_4286_ = lean_box(0);
v_isShared_4287_ = v_isSharedCheck_4329_;
goto v_resetjp_4285_;
}
v_resetjp_4285_:
{
lean_object* v_fst_4288_; lean_object* v___x_4290_; uint8_t v_isShared_4291_; uint8_t v_isSharedCheck_4327_; 
v_fst_4288_ = lean_ctor_get(v_val_4267_, 0);
v_isSharedCheck_4327_ = !lean_is_exclusive(v_val_4267_);
if (v_isSharedCheck_4327_ == 0)
{
lean_object* v_unused_4328_; 
v_unused_4328_ = lean_ctor_get(v_val_4267_, 1);
lean_dec(v_unused_4328_);
v___x_4290_ = v_val_4267_;
v_isShared_4291_ = v_isSharedCheck_4327_;
goto v_resetjp_4289_;
}
else
{
lean_inc(v_fst_4288_);
lean_dec(v_val_4267_);
v___x_4290_ = lean_box(0);
v_isShared_4291_ = v_isSharedCheck_4327_;
goto v_resetjp_4289_;
}
v_resetjp_4289_:
{
lean_object* v_fst_4292_; lean_object* v_snd_4293_; lean_object* v___x_4295_; uint8_t v_isShared_4296_; uint8_t v_isSharedCheck_4326_; 
v_fst_4292_ = lean_ctor_get(v_snd_4284_, 0);
v_snd_4293_ = lean_ctor_get(v_snd_4284_, 1);
v_isSharedCheck_4326_ = !lean_is_exclusive(v_snd_4284_);
if (v_isSharedCheck_4326_ == 0)
{
v___x_4295_ = v_snd_4284_;
v_isShared_4296_ = v_isSharedCheck_4326_;
goto v_resetjp_4294_;
}
else
{
lean_inc(v_snd_4293_);
lean_inc(v_fst_4292_);
lean_dec(v_snd_4284_);
v___x_4295_ = lean_box(0);
v_isShared_4296_ = v_isSharedCheck_4326_;
goto v_resetjp_4294_;
}
v_resetjp_4294_:
{
lean_object* v___x_4297_; lean_object* v___x_4299_; 
v___x_4297_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__12));
if (v_isShared_4270_ == 0)
{
lean_ctor_set_tag(v___x_4269_, 3);
lean_ctor_set(v___x_4269_, 0, v_fst_4288_);
v___x_4299_ = v___x_4269_;
goto v_reusejp_4298_;
}
else
{
lean_object* v_reuseFailAlloc_4325_; 
v_reuseFailAlloc_4325_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4325_, 0, v_fst_4288_);
v___x_4299_ = v_reuseFailAlloc_4325_;
goto v_reusejp_4298_;
}
v_reusejp_4298_:
{
lean_object* v___x_4301_; 
if (v_isShared_4296_ == 0)
{
lean_ctor_set(v___x_4295_, 1, v___x_4299_);
lean_ctor_set(v___x_4295_, 0, v___x_4297_);
v___x_4301_ = v___x_4295_;
goto v_reusejp_4300_;
}
else
{
lean_object* v_reuseFailAlloc_4324_; 
v_reuseFailAlloc_4324_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4324_, 0, v___x_4297_);
lean_ctor_set(v_reuseFailAlloc_4324_, 1, v___x_4299_);
v___x_4301_ = v_reuseFailAlloc_4324_;
goto v_reusejp_4300_;
}
v_reusejp_4300_:
{
lean_object* v___x_4302_; lean_object* v___x_4303_; lean_object* v___x_4304_; lean_object* v___x_4306_; 
v___x_4302_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__5));
v___x_4303_ = l_Lean_JsonNumber_fromNat(v_fst_4292_);
v___x_4304_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4304_, 0, v___x_4303_);
if (v_isShared_4287_ == 0)
{
lean_ctor_set(v___x_4286_, 1, v___x_4304_);
lean_ctor_set(v___x_4286_, 0, v___x_4302_);
v___x_4306_ = v___x_4286_;
goto v_reusejp_4305_;
}
else
{
lean_object* v_reuseFailAlloc_4323_; 
v_reuseFailAlloc_4323_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4323_, 0, v___x_4302_);
lean_ctor_set(v_reuseFailAlloc_4323_, 1, v___x_4304_);
v___x_4306_ = v_reuseFailAlloc_4323_;
goto v_reusejp_4305_;
}
v_reusejp_4305_:
{
lean_object* v___x_4307_; lean_object* v___x_4308_; lean_object* v___x_4309_; lean_object* v___x_4311_; 
v___x_4307_ = ((lean_object*)(lp_choreo_Choreo_problemJson___closed__6));
v___x_4308_ = l_Lean_JsonNumber_fromNat(v_snd_4293_);
v___x_4309_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4309_, 0, v___x_4308_);
if (v_isShared_4283_ == 0)
{
lean_ctor_set(v___x_4282_, 1, v___x_4309_);
lean_ctor_set(v___x_4282_, 0, v___x_4307_);
v___x_4311_ = v___x_4282_;
goto v_reusejp_4310_;
}
else
{
lean_object* v_reuseFailAlloc_4322_; 
v_reuseFailAlloc_4322_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4322_, 0, v___x_4307_);
lean_ctor_set(v_reuseFailAlloc_4322_, 1, v___x_4309_);
v___x_4311_ = v_reuseFailAlloc_4322_;
goto v_reusejp_4310_;
}
v_reusejp_4310_:
{
lean_object* v___x_4313_; 
lean_inc(v___y_4253_);
if (v_isShared_4279_ == 0)
{
lean_ctor_set_tag(v___x_4278_, 1);
lean_ctor_set(v___x_4278_, 1, v___y_4253_);
lean_ctor_set(v___x_4278_, 0, v___x_4311_);
v___x_4313_ = v___x_4278_;
goto v_reusejp_4312_;
}
else
{
lean_object* v_reuseFailAlloc_4321_; 
v_reuseFailAlloc_4321_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4321_, 0, v___x_4311_);
lean_ctor_set(v_reuseFailAlloc_4321_, 1, v___y_4253_);
v___x_4313_ = v_reuseFailAlloc_4321_;
goto v_reusejp_4312_;
}
v_reusejp_4312_:
{
lean_object* v___x_4315_; 
if (v_isShared_4275_ == 0)
{
lean_ctor_set_tag(v___x_4274_, 1);
lean_ctor_set(v___x_4274_, 1, v___x_4313_);
lean_ctor_set(v___x_4274_, 0, v___x_4306_);
v___x_4315_ = v___x_4274_;
goto v_reusejp_4314_;
}
else
{
lean_object* v_reuseFailAlloc_4320_; 
v_reuseFailAlloc_4320_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4320_, 0, v___x_4306_);
lean_ctor_set(v_reuseFailAlloc_4320_, 1, v___x_4313_);
v___x_4315_ = v_reuseFailAlloc_4320_;
goto v_reusejp_4314_;
}
v_reusejp_4314_:
{
lean_object* v___x_4317_; 
if (v_isShared_4291_ == 0)
{
lean_ctor_set_tag(v___x_4290_, 1);
lean_ctor_set(v___x_4290_, 1, v___x_4315_);
lean_ctor_set(v___x_4290_, 0, v___x_4301_);
v___x_4317_ = v___x_4290_;
goto v_reusejp_4316_;
}
else
{
lean_object* v_reuseFailAlloc_4319_; 
v_reuseFailAlloc_4319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_4319_, 0, v___x_4301_);
lean_ctor_set(v_reuseFailAlloc_4319_, 1, v___x_4315_);
v___x_4317_ = v_reuseFailAlloc_4319_;
goto v_reusejp_4316_;
}
v_reusejp_4316_:
{
lean_object* v___x_4318_; 
v___x_4318_ = l_Lean_Json_mkObj(v___x_4317_);
lean_dec_ref(v___x_4317_);
v___y_4076_ = v___y_4244_;
v___y_4077_ = v___y_4246_;
v___y_4078_ = v___y_4247_;
v___y_4079_ = v___y_4248_;
v___y_4080_ = v___y_4249_;
v___y_4081_ = v___y_4250_;
v___y_4082_ = v___y_4251_;
v___y_4083_ = v___y_4252_;
v___y_4084_ = v___x_4264_;
v___y_4085_ = v___y_4253_;
v___y_4086_ = v___y_4254_;
v___y_4087_ = v___y_4255_;
v___y_4088_ = v___y_4256_;
v___y_4089_ = v___x_4263_;
v___y_4090_ = v___y_4257_;
v___y_4091_ = v___y_4258_;
v___y_4092_ = v___y_4259_;
v___y_4093_ = v___y_4260_;
v___y_4094_ = v___y_4261_;
v___y_4095_ = v___x_4318_;
goto v___jp_4075_;
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
v___jp_4338_:
{
lean_object* v___x_4357_; lean_object* v___x_4358_; 
lean_inc_ref(v___y_4343_);
v___x_4357_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4357_, 0, v___y_4343_);
lean_ctor_set(v___x_4357_, 1, v___y_4356_);
v___x_4358_ = ((lean_object*)(lp_choreo_Choreo_report___closed__20));
if (lean_obj_tag(v_derived_4063_) == 0)
{
lean_object* v___x_4359_; 
v___x_4359_ = lean_box(0);
v___y_4244_ = v___y_4339_;
v___y_4245_ = v___x_4358_;
v___y_4246_ = v___y_4340_;
v___y_4247_ = v___y_4341_;
v___y_4248_ = v___y_4342_;
v___y_4249_ = v___y_4344_;
v___y_4250_ = v___y_4345_;
v___y_4251_ = v___y_4346_;
v___y_4252_ = v___y_4347_;
v___y_4253_ = v___y_4348_;
v___y_4254_ = v___y_4349_;
v___y_4255_ = v___y_4350_;
v___y_4256_ = v___y_4351_;
v___y_4257_ = v___y_4352_;
v___y_4258_ = v___x_4357_;
v___y_4259_ = v___y_4353_;
v___y_4260_ = v___y_4354_;
v___y_4261_ = v___y_4355_;
v___y_4262_ = v___x_4359_;
goto v___jp_4243_;
}
else
{
lean_object* v_val_4360_; uint8_t v___x_4361_; lean_object* v___x_4362_; 
v_val_4360_ = lean_ctor_get(v_derived_4063_, 0);
v___x_4361_ = 0;
lean_inc(v_val_4360_);
v___x_4362_ = lp_choreo_Choreo_sceneJson(v_val_4360_, v___x_4361_);
v___y_4244_ = v___y_4339_;
v___y_4245_ = v___x_4358_;
v___y_4246_ = v___y_4340_;
v___y_4247_ = v___y_4341_;
v___y_4248_ = v___y_4342_;
v___y_4249_ = v___y_4344_;
v___y_4250_ = v___y_4345_;
v___y_4251_ = v___y_4346_;
v___y_4252_ = v___y_4347_;
v___y_4253_ = v___y_4348_;
v___y_4254_ = v___y_4349_;
v___y_4255_ = v___y_4350_;
v___y_4256_ = v___y_4351_;
v___y_4257_ = v___y_4352_;
v___y_4258_ = v___x_4357_;
v___y_4259_ = v___y_4353_;
v___y_4260_ = v___y_4354_;
v___y_4261_ = v___y_4355_;
v___y_4262_ = v___x_4362_;
goto v___jp_4243_;
}
}
v___jp_4364_:
{
lean_object* v___x_4388_; lean_object* v___x_4389_; lean_object* v___x_4390_; lean_object* v___x_4391_; lean_object* v___x_4392_; lean_object* v___x_4393_; lean_object* v___x_4394_; lean_object* v___x_4395_; lean_object* v___x_4396_; lean_object* v___x_4397_; lean_object* v___x_4398_; 
lean_inc_ref(v___y_4381_);
v___x_4388_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4388_, 0, v___y_4381_);
lean_ctor_set(v___x_4388_, 1, v___y_4387_);
v___x_4389_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4389_, 0, v___x_4388_);
lean_ctor_set(v___x_4389_, 1, v___x_4071_);
v___x_4390_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4390_, 0, v___y_4376_);
lean_ctor_set(v___x_4390_, 1, v___x_4389_);
v___x_4391_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4391_, 0, v___y_4369_);
lean_ctor_set(v___x_4391_, 1, v___x_4390_);
v___x_4392_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4392_, 0, v___y_4386_);
lean_ctor_set(v___x_4392_, 1, v___x_4391_);
v___x_4393_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4393_, 0, v___y_4377_);
lean_ctor_set(v___x_4393_, 1, v___x_4392_);
v___x_4394_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4394_, 0, v___y_4368_);
lean_ctor_set(v___x_4394_, 1, v___x_4393_);
v___x_4395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_4395_, 0, v___y_4382_);
lean_ctor_set(v___x_4395_, 1, v___x_4394_);
v___x_4396_ = l_Lean_Json_mkObj(v___x_4395_);
lean_dec_ref_known(v___x_4395_, 2);
lean_inc_ref(v___y_4374_);
v___x_4397_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4397_, 0, v___y_4374_);
lean_ctor_set(v___x_4397_, 1, v___x_4396_);
v___x_4398_ = ((lean_object*)(lp_choreo_Choreo_report___closed__21));
if (lean_obj_tag(v_scene_4062_) == 0)
{
lean_object* v___x_4399_; 
v___x_4399_ = lean_box(0);
v___y_4339_ = v___y_4365_;
v___y_4340_ = v___y_4366_;
v___y_4341_ = v___y_4367_;
v___y_4342_ = v___y_4370_;
v___y_4343_ = v___x_4398_;
v___y_4344_ = v___y_4371_;
v___y_4345_ = v___y_4373_;
v___y_4346_ = v___y_4372_;
v___y_4347_ = v___y_4375_;
v___y_4348_ = v___x_4071_;
v___y_4349_ = v___x_4397_;
v___y_4350_ = v___y_4378_;
v___y_4351_ = v___y_4379_;
v___y_4352_ = v___y_4380_;
v___y_4353_ = v___y_4383_;
v___y_4354_ = v___y_4384_;
v___y_4355_ = v___y_4385_;
v___y_4356_ = v___x_4399_;
goto v___jp_4338_;
}
else
{
lean_object* v_val_4400_; lean_object* v___x_4401_; 
v_val_4400_ = lean_ctor_get(v_scene_4062_, 0);
lean_inc(v_val_4400_);
v___x_4401_ = lp_choreo_Choreo_sceneJson(v_val_4400_, v___x_4363_);
v___y_4339_ = v___y_4365_;
v___y_4340_ = v___y_4366_;
v___y_4341_ = v___y_4367_;
v___y_4342_ = v___y_4370_;
v___y_4343_ = v___x_4398_;
v___y_4344_ = v___y_4371_;
v___y_4345_ = v___y_4373_;
v___y_4346_ = v___y_4372_;
v___y_4347_ = v___y_4375_;
v___y_4348_ = v___x_4071_;
v___y_4349_ = v___x_4397_;
v___y_4350_ = v___y_4378_;
v___y_4351_ = v___y_4379_;
v___y_4352_ = v___y_4380_;
v___y_4353_ = v___y_4383_;
v___y_4354_ = v___y_4384_;
v___y_4355_ = v___y_4385_;
v___y_4356_ = v___x_4401_;
goto v___jp_4338_;
}
}
v___jp_4402_:
{
lean_object* v_seconds_4414_; lean_object* v_bpm_4415_; lean_object* v_genre_4416_; lean_object* v_n_4417_; lean_object* v_left_4418_; lean_object* v_right_4419_; lean_object* v_moves_4420_; lean_object* v_steps_4421_; lean_object* v___x_4422_; lean_object* v___x_4423_; lean_object* v___x_4424_; lean_object* v___x_4425_; lean_object* v___x_4426_; lean_object* v___x_4427_; lean_object* v___x_4428_; lean_object* v___x_4429_; lean_object* v___x_4430_; lean_object* v___x_4431_; lean_object* v___x_4432_; lean_object* v___x_4433_; lean_object* v___x_4434_; lean_object* v___x_4435_; lean_object* v___x_4436_; lean_object* v___x_4437_; lean_object* v___x_4438_; lean_object* v___x_4439_; lean_object* v___x_4440_; lean_object* v___x_4441_; lean_object* v___x_4442_; lean_object* v___x_4443_; lean_object* v___x_4444_; lean_object* v___x_4445_; lean_object* v___x_4446_; lean_object* v___x_4447_; uint8_t v___x_4448_; 
v_seconds_4414_ = lean_ctor_get(v_plan_4056_, 0);
v_bpm_4415_ = lean_ctor_get(v_plan_4056_, 1);
v_genre_4416_ = lean_ctor_get(v_plan_4056_, 2);
v_n_4417_ = lean_ctor_get(v_plan_4056_, 3);
v_left_4418_ = lean_ctor_get(v_plan_4056_, 4);
v_right_4419_ = lean_ctor_get(v_plan_4056_, 5);
v_moves_4420_ = lean_ctor_get(v_plan_4056_, 6);
v_steps_4421_ = lean_ctor_get(v_plan_4056_, 7);
lean_inc_ref(v___y_4407_);
v___x_4422_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4422_, 0, v___y_4407_);
lean_ctor_set(v___x_4422_, 1, v___y_4413_);
v___x_4423_ = ((lean_object*)(lp_choreo_Choreo_report___closed__22));
v___x_4424_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__3));
lean_inc(v_seconds_4414_);
v___x_4425_ = l_Lean_JsonNumber_fromNat(v_seconds_4414_);
v___x_4426_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4426_, 0, v___x_4425_);
v___x_4427_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4427_, 0, v___x_4424_);
lean_ctor_set(v___x_4427_, 1, v___x_4426_);
v___x_4428_ = ((lean_object*)(lp_choreo_Choreo_report___closed__23));
lean_inc(v_bpm_4415_);
v___x_4429_ = l_Lean_JsonNumber_fromNat(v_bpm_4415_);
v___x_4430_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4430_, 0, v___x_4429_);
v___x_4431_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4431_, 0, v___x_4428_);
lean_ctor_set(v___x_4431_, 1, v___x_4430_);
v___x_4432_ = ((lean_object*)(lp_choreo_Choreo_sceneJson___closed__6));
lean_inc_ref(v_genre_4416_);
v___x_4433_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4433_, 0, v_genre_4416_);
v___x_4434_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4434_, 0, v___x_4432_);
lean_ctor_set(v___x_4434_, 1, v___x_4433_);
v___x_4435_ = ((lean_object*)(lp_choreo_Choreo_report___closed__24));
lean_inc(v_n_4417_);
v___x_4436_ = l_Lean_JsonNumber_fromNat(v_n_4417_);
v___x_4437_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4437_, 0, v___x_4436_);
v___x_4438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4438_, 0, v___x_4435_);
lean_ctor_set(v___x_4438_, 1, v___x_4437_);
v___x_4439_ = ((lean_object*)(lp_choreo_Choreo_report___closed__25));
lean_inc(v_left_4418_);
v___x_4440_ = l_Lean_JsonNumber_fromNat(v_left_4418_);
v___x_4441_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4441_, 0, v___x_4440_);
v___x_4442_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4442_, 0, v___x_4439_);
lean_ctor_set(v___x_4442_, 1, v___x_4441_);
v___x_4443_ = ((lean_object*)(lp_choreo_Choreo_report___closed__26));
lean_inc(v_right_4419_);
v___x_4444_ = l_Lean_JsonNumber_fromNat(v_right_4419_);
v___x_4445_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4445_, 0, v___x_4444_);
v___x_4446_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4446_, 0, v___x_4443_);
lean_ctor_set(v___x_4446_, 1, v___x_4445_);
v___x_4447_ = ((lean_object*)(lp_choreo_Choreo_report___closed__27));
v___x_4448_ = l_List_isEmpty___redArg(v_heard_4064_);
if (v___x_4448_ == 0)
{
lean_object* v___x_4449_; lean_object* v___x_4450_; lean_object* v___x_4451_; lean_object* v___x_4452_; lean_object* v___x_4453_; 
lean_inc(v_steps_4421_);
v___x_4449_ = lp_choreo_Choreo_stepsHeard(v_steps_4421_);
lean_inc(v_heard_4064_);
v___x_4450_ = l_List_appendTR___redArg(v_heard_4064_, v___x_4449_);
lean_inc(v___y_4406_);
v___x_4451_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(v___x_4450_, v___y_4406_);
v___x_4452_ = lean_array_mk(v___x_4451_);
v___x_4453_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4453_, 0, v___x_4452_);
lean_inc(v_bpm_4415_);
lean_inc(v_n_4417_);
v___y_4365_ = v___y_4403_;
v___y_4366_ = v___y_4404_;
v___y_4367_ = v___x_4422_;
v___y_4368_ = v___x_4431_;
v___y_4369_ = v___x_4442_;
v___y_4370_ = v_n_4417_;
v___y_4371_ = v___y_4408_;
v___y_4372_ = v___x_4424_;
v___y_4373_ = v___y_4411_;
v___y_4374_ = v___x_4423_;
v___y_4375_ = v_bpm_4415_;
v___y_4376_ = v___x_4446_;
v___y_4377_ = v___x_4434_;
v___y_4378_ = v___y_4405_;
v___y_4379_ = v___y_4406_;
v___y_4380_ = v___x_4435_;
v___y_4381_ = v___x_4447_;
v___y_4382_ = v___x_4427_;
v___y_4383_ = v___y_4409_;
v___y_4384_ = v___y_4410_;
v___y_4385_ = v___y_4412_;
v___y_4386_ = v___x_4438_;
v___y_4387_ = v___x_4453_;
goto v___jp_4364_;
}
else
{
lean_object* v___x_4454_; lean_object* v___x_4455_; lean_object* v___x_4456_; lean_object* v___x_4457_; lean_object* v___x_4458_; lean_object* v___x_4459_; 
lean_inc(v_moves_4420_);
v___x_4454_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__11(v_moves_4420_, v___x_4071_);
lean_inc(v_steps_4421_);
v___x_4455_ = lp_choreo_Choreo_stepsHeard(v_steps_4421_);
v___x_4456_ = l_List_appendTR___redArg(v___x_4454_, v___x_4455_);
lean_inc(v___y_4406_);
v___x_4457_ = lp_choreo_List_mapTR_loop___at___00Choreo_sceneJson_spec__5(v___x_4456_, v___y_4406_);
v___x_4458_ = lean_array_mk(v___x_4457_);
v___x_4459_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4459_, 0, v___x_4458_);
lean_inc(v_bpm_4415_);
lean_inc(v_n_4417_);
v___y_4365_ = v___y_4403_;
v___y_4366_ = v___y_4404_;
v___y_4367_ = v___x_4422_;
v___y_4368_ = v___x_4431_;
v___y_4369_ = v___x_4442_;
v___y_4370_ = v_n_4417_;
v___y_4371_ = v___y_4408_;
v___y_4372_ = v___x_4424_;
v___y_4373_ = v___y_4411_;
v___y_4374_ = v___x_4423_;
v___y_4375_ = v_bpm_4415_;
v___y_4376_ = v___x_4446_;
v___y_4377_ = v___x_4434_;
v___y_4378_ = v___y_4405_;
v___y_4379_ = v___y_4406_;
v___y_4380_ = v___x_4435_;
v___y_4381_ = v___x_4447_;
v___y_4382_ = v___x_4427_;
v___y_4383_ = v___y_4409_;
v___y_4384_ = v___y_4410_;
v___y_4385_ = v___y_4412_;
v___y_4386_ = v___x_4438_;
v___y_4387_ = v___x_4459_;
goto v___jp_4364_;
}
}
v___jp_4460_:
{
lean_object* v___x_4468_; lean_object* v___x_4469_; lean_object* v___x_4470_; lean_object* v___x_4471_; lean_object* v___x_4472_; lean_object* v___x_4473_; lean_object* v___x_4474_; lean_object* v___x_4475_; lean_object* v___x_4476_; lean_object* v___x_4477_; 
lean_inc_ref(v___y_4461_);
v___x_4468_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4468_, 0, v___y_4461_);
lean_ctor_set(v___x_4468_, 1, v___y_4467_);
v___x_4469_ = ((lean_object*)(lp_choreo_Choreo_report___closed__28));
lean_inc(v_drift_4067_);
v___x_4470_ = lp_choreo_Choreo_jInt(v_drift_4067_);
v___x_4471_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4471_, 0, v___x_4469_);
lean_ctor_set(v___x_4471_, 1, v___x_4470_);
v___x_4472_ = ((lean_object*)(lp_choreo_Choreo_report___closed__29));
lean_inc(v_dropped_4066_);
v___x_4473_ = lp_choreo_List_mapTR_loop___at___00Choreo_report_spec__1(v_dropped_4066_, v___x_4071_);
v___x_4474_ = lean_array_mk(v___x_4473_);
v___x_4475_ = lean_alloc_ctor(4, 1, 0);
lean_ctor_set(v___x_4475_, 0, v___x_4474_);
v___x_4476_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4476_, 0, v___x_4472_);
lean_ctor_set(v___x_4476_, 1, v___x_4475_);
v___x_4477_ = ((lean_object*)(lp_choreo_Choreo_report___closed__30));
if (lean_obj_tag(v_error_4061_) == 0)
{
lean_object* v___x_4478_; 
v___x_4478_ = lean_box(0);
v___y_4403_ = v___x_4468_;
v___y_4404_ = v___x_4471_;
v___y_4405_ = v___x_4476_;
v___y_4406_ = v___x_4071_;
v___y_4407_ = v___x_4477_;
v___y_4408_ = v___y_4462_;
v___y_4409_ = v___y_4463_;
v___y_4410_ = v___y_4465_;
v___y_4411_ = v___y_4464_;
v___y_4412_ = v___y_4466_;
v___y_4413_ = v___x_4478_;
goto v___jp_4402_;
}
else
{
lean_object* v_val_4479_; lean_object* v___x_4481_; uint8_t v_isShared_4482_; uint8_t v_isSharedCheck_4486_; 
v_val_4479_ = lean_ctor_get(v_error_4061_, 0);
v_isSharedCheck_4486_ = !lean_is_exclusive(v_error_4061_);
if (v_isSharedCheck_4486_ == 0)
{
v___x_4481_ = v_error_4061_;
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
else
{
lean_inc(v_val_4479_);
lean_dec(v_error_4061_);
v___x_4481_ = lean_box(0);
v_isShared_4482_ = v_isSharedCheck_4486_;
goto v_resetjp_4480_;
}
v_resetjp_4480_:
{
lean_object* v___x_4484_; 
if (v_isShared_4482_ == 0)
{
lean_ctor_set_tag(v___x_4481_, 3);
v___x_4484_ = v___x_4481_;
goto v_reusejp_4483_;
}
else
{
lean_object* v_reuseFailAlloc_4485_; 
v_reuseFailAlloc_4485_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v_reuseFailAlloc_4485_, 0, v_val_4479_);
v___x_4484_ = v_reuseFailAlloc_4485_;
goto v_reusejp_4483_;
}
v_reusejp_4483_:
{
v___y_4403_ = v___x_4468_;
v___y_4404_ = v___x_4471_;
v___y_4405_ = v___x_4476_;
v___y_4406_ = v___x_4071_;
v___y_4407_ = v___x_4477_;
v___y_4408_ = v___y_4462_;
v___y_4409_ = v___y_4463_;
v___y_4410_ = v___y_4465_;
v___y_4411_ = v___y_4464_;
v___y_4412_ = v___y_4466_;
v___y_4413_ = v___x_4484_;
goto v___jp_4402_;
}
}
}
}
v___jp_4487_:
{
lean_object* v_labels_4489_; lean_object* v___x_4490_; lean_object* v___x_4491_; lean_object* v___x_4492_; lean_object* v___x_4493_; lean_object* v___x_4494_; lean_object* v___x_4495_; lean_object* v___x_4496_; lean_object* v___x_4497_; lean_object* v___x_4498_; lean_object* v___x_4499_; lean_object* v___x_4500_; lean_object* v___x_4501_; lean_object* v___x_4502_; lean_object* v___x_4503_; lean_object* v___x_4504_; uint8_t v___x_4505_; 
lean_inc(v_labels_4057_);
v_labels_4489_ = lean_array_mk(v_labels_4057_);
v___x_4490_ = ((lean_object*)(lp_choreo_Choreo_report___closed__31));
lean_inc_ref(v___y_4488_);
v___x_4491_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4491_, 0, v___y_4488_);
v___x_4492_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4492_, 0, v___x_4490_);
lean_ctor_set(v___x_4492_, 1, v___x_4491_);
v___x_4493_ = ((lean_object*)(lp_choreo_Choreo_report___closed__32));
lean_inc_ref(v_routine_4055_);
v___x_4494_ = lp_choreo_Choreo_Routine_fingerprint(v_routine_4055_);
v___x_4495_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4495_, 0, v___x_4494_);
v___x_4496_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4496_, 0, v___x_4493_);
lean_ctor_set(v___x_4496_, 1, v___x_4495_);
v___x_4497_ = ((lean_object*)(lp_choreo_Choreo_report___closed__33));
v___x_4498_ = lean_alloc_ctor(3, 1, 0);
lean_ctor_set(v___x_4498_, 0, v_proofPath_4052_);
v___x_4499_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4499_, 0, v___x_4497_);
lean_ctor_set(v___x_4499_, 1, v___x_4498_);
v___x_4500_ = ((lean_object*)(lp_choreo_Choreo_report___closed__34));
lean_inc(v_minSeconds_4065_);
v___x_4501_ = l_Lean_JsonNumber_fromNat(v_minSeconds_4065_);
v___x_4502_ = lean_alloc_ctor(2, 1, 0);
lean_ctor_set(v___x_4502_, 0, v___x_4501_);
v___x_4503_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_4503_, 0, v___x_4500_);
lean_ctor_set(v___x_4503_, 1, v___x_4502_);
v___x_4504_ = ((lean_object*)(lp_choreo_Choreo_report___closed__35));
v___x_4505_ = l_List_isEmpty___redArg(v_program_4053_);
if (v___x_4505_ == 0)
{
lean_object* v___x_4506_; 
lean_inc_ref(v_names_4051_);
lean_inc_ref(v_cfg_4068_);
v___x_4506_ = lp_choreo_Choreo_programJson(v_cfg_4068_, v_program_4053_, v_start_4054_, v_names_4051_);
v___y_4461_ = v___x_4504_;
v___y_4462_ = v_labels_4489_;
v___y_4463_ = v___x_4503_;
v___y_4464_ = v___x_4499_;
v___y_4465_ = v___x_4496_;
v___y_4466_ = v___x_4492_;
v___y_4467_ = v___x_4506_;
goto v___jp_4460_;
}
else
{
lean_object* v___x_4507_; 
lean_dec(v_start_4054_);
lean_dec(v_program_4053_);
v___x_4507_ = lean_box(0);
v___y_4461_ = v___x_4504_;
v___y_4462_ = v_labels_4489_;
v___y_4463_ = v___x_4503_;
v___y_4464_ = v___x_4499_;
v___y_4465_ = v___x_4496_;
v___y_4466_ = v___x_4492_;
v___y_4467_ = v___x_4507_;
goto v___jp_4460_;
}
}
v___jp_4508_:
{
lean_object* v___x_4509_; 
v___x_4509_ = ((lean_object*)(lp_choreo_Choreo_report___closed__36));
v___y_4488_ = v___x_4509_;
goto v___jp_4487_;
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
