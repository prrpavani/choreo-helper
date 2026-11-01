// Lean compiler output
// Module: Choreo.Language
// Imports: public import Init public meta import Init public import Choreo.Recipes
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
lean_object* lp_choreo_Choreo_Phase_pairCert(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Cert_check(lean_object*, lean_object*, lean_object*, lean_object*);
extern lean_object* lp_choreo_Choreo_instInhabitedPt_default;
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_rotatePath(lean_object*, lean_object*, uint8_t);
lean_object* lp_choreo_Choreo_easePath(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_reachesSlot(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
uint8_t lp_choreo_Choreo_Path_startsAtSlot(lean_object*, lean_object*);
uint8_t lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_instDecidableEqPt_decEq(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Config_wf(lean_object*);
uint8_t lp_choreo_Choreo_Phase_checkPaths(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Phase_check(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_State_at(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_State_at___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_anything_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_anything_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_isAt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_isAt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_separated_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_separated_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_onCircle_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_onCircle_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_twoGroups_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_twoGroups_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_splitAt_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_splitAt_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_both_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_both_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq_x27(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq_x27___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Pred_holds(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_holds___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_move_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_move_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_turn_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_turn_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_slide_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_slide_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_par_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_par_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarter(lean_object*, lean_object*, uint8_t);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarter___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_beats(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_beats___boxed(lean_object*);
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0;
static lean_once_cell_t lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0(lean_object*, lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_next(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_next___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_pathOf(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_pathOf___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_certs(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_certs___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_orbits(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_orbits___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_phase(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_phase___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_slidePairOk(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_slidePairOk___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_slideClear_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_slideClear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_slideClear_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_slideClear_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_slideClear(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_slideClear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_parClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_parClear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0;
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_endpointsOk(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_endpointsOk___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Op_enabled(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_enabled___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Step_ok(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Step_ok___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_samePhase_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_samePhase_spec__0___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_samePhase(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_samePhase___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_samePhases(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_samePhases___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorIdx(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorIdx___boxed(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_skip_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_skip_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_step_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_step_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_seq_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_seq_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_rep_elim___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_rep_elim(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_repeatRun(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_repeatRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_exec(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Prog_exec_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Prog_exec_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_next_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_next_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_pathOf_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_pathOf_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_State_at(lean_object* v_s_1_, lean_object* v_i_2_){
_start:
{
lean_object* v___x_3_; lean_object* v___x_4_; 
v___x_3_ = lp_choreo_Choreo_instInhabitedPt_default;
v___x_4_ = l_List_getD___redArg(v_s_1_, v_i_2_, v___x_3_);
return v___x_4_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_State_at___boxed(lean_object* v_s_5_, lean_object* v_i_6_){
_start:
{
lean_object* v_res_7_; 
v_res_7_ = lp_choreo_Choreo_State_at(v_s_5_, v_i_6_);
lean_dec(v_s_5_);
return v_res_7_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorIdx(lean_object* v_x_8_){
_start:
{
switch(lean_obj_tag(v_x_8_))
{
case 0:
{
lean_object* v___x_9_; 
v___x_9_ = lean_unsigned_to_nat(0u);
return v___x_9_;
}
case 1:
{
lean_object* v___x_10_; 
v___x_10_ = lean_unsigned_to_nat(1u);
return v___x_10_;
}
case 2:
{
lean_object* v___x_11_; 
v___x_11_ = lean_unsigned_to_nat(2u);
return v___x_11_;
}
case 3:
{
lean_object* v___x_12_; 
v___x_12_ = lean_unsigned_to_nat(3u);
return v___x_12_;
}
case 4:
{
lean_object* v___x_13_; 
v___x_13_ = lean_unsigned_to_nat(4u);
return v___x_13_;
}
case 5:
{
lean_object* v___x_14_; 
v___x_14_ = lean_unsigned_to_nat(5u);
return v___x_14_;
}
default: 
{
lean_object* v___x_15_; 
v___x_15_ = lean_unsigned_to_nat(6u);
return v___x_15_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorIdx___boxed(lean_object* v_x_16_){
_start:
{
lean_object* v_res_17_; 
v_res_17_ = lp_choreo_Choreo_Pred_ctorIdx(v_x_16_);
lean_dec(v_x_16_);
return v_res_17_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorElim___redArg(lean_object* v_t_18_, lean_object* v_k_19_){
_start:
{
switch(lean_obj_tag(v_t_18_))
{
case 0:
{
return v_k_19_;
}
case 1:
{
lean_object* v_places_20_; lean_object* v___x_21_; 
v_places_20_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_places_20_);
lean_dec_ref_known(v_t_18_, 1);
v___x_21_ = lean_apply_1(v_k_19_, v_places_20_);
return v___x_21_;
}
case 3:
{
lean_object* v_who_22_; lean_object* v_cx_23_; lean_object* v_cy_24_; lean_object* v_r2_25_; lean_object* v___x_26_; 
v_who_22_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_who_22_);
v_cx_23_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_cx_23_);
v_cy_24_ = lean_ctor_get(v_t_18_, 2);
lean_inc(v_cy_24_);
v_r2_25_ = lean_ctor_get(v_t_18_, 3);
lean_inc(v_r2_25_);
lean_dec_ref_known(v_t_18_, 4);
v___x_26_ = lean_apply_4(v_k_19_, v_who_22_, v_cx_23_, v_cy_24_, v_r2_25_);
return v___x_26_;
}
case 4:
{
lean_object* v_A_27_; lean_object* v_B_28_; lean_object* v_d_29_; lean_object* v___x_30_; 
v_A_27_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_A_27_);
v_B_28_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_B_28_);
v_d_29_ = lean_ctor_get(v_t_18_, 2);
lean_inc(v_d_29_);
lean_dec_ref_known(v_t_18_, 3);
v___x_30_ = lean_apply_3(v_k_19_, v_A_27_, v_B_28_, v_d_29_);
return v___x_30_;
}
case 5:
{
lean_object* v_A_31_; lean_object* v_B_32_; lean_object* v_line_33_; lean_object* v_d_34_; lean_object* v___x_35_; 
v_A_31_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_A_31_);
v_B_32_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_B_32_);
v_line_33_ = lean_ctor_get(v_t_18_, 2);
lean_inc(v_line_33_);
v_d_34_ = lean_ctor_get(v_t_18_, 3);
lean_inc(v_d_34_);
lean_dec_ref_known(v_t_18_, 4);
v___x_35_ = lean_apply_4(v_k_19_, v_A_31_, v_B_32_, v_line_33_, v_d_34_);
return v___x_35_;
}
default: 
{
lean_object* v_n_36_; lean_object* v_d_37_; lean_object* v___x_38_; 
v_n_36_ = lean_ctor_get(v_t_18_, 0);
lean_inc(v_n_36_);
v_d_37_ = lean_ctor_get(v_t_18_, 1);
lean_inc(v_d_37_);
lean_dec(v_t_18_);
v___x_38_ = lean_apply_2(v_k_19_, v_n_36_, v_d_37_);
return v___x_38_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorElim(lean_object* v_motive_39_, lean_object* v_ctorIdx_40_, lean_object* v_t_41_, lean_object* v_h_42_, lean_object* v_k_43_){
_start:
{
lean_object* v___x_44_; 
v___x_44_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_41_, v_k_43_);
return v___x_44_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_ctorElim___boxed(lean_object* v_motive_45_, lean_object* v_ctorIdx_46_, lean_object* v_t_47_, lean_object* v_h_48_, lean_object* v_k_49_){
_start:
{
lean_object* v_res_50_; 
v_res_50_ = lp_choreo_Choreo_Pred_ctorElim(v_motive_45_, v_ctorIdx_46_, v_t_47_, v_h_48_, v_k_49_);
lean_dec(v_ctorIdx_46_);
return v_res_50_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_anything_elim___redArg(lean_object* v_t_51_, lean_object* v_anything_52_){
_start:
{
lean_object* v___x_53_; 
v___x_53_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_51_, v_anything_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_anything_elim(lean_object* v_motive_54_, lean_object* v_t_55_, lean_object* v_h_56_, lean_object* v_anything_57_){
_start:
{
lean_object* v___x_58_; 
v___x_58_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_55_, v_anything_57_);
return v___x_58_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_isAt_elim___redArg(lean_object* v_t_59_, lean_object* v_isAt_60_){
_start:
{
lean_object* v___x_61_; 
v___x_61_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_59_, v_isAt_60_);
return v___x_61_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_isAt_elim(lean_object* v_motive_62_, lean_object* v_t_63_, lean_object* v_h_64_, lean_object* v_isAt_65_){
_start:
{
lean_object* v___x_66_; 
v___x_66_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_63_, v_isAt_65_);
return v___x_66_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_separated_elim___redArg(lean_object* v_t_67_, lean_object* v_separated_68_){
_start:
{
lean_object* v___x_69_; 
v___x_69_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_67_, v_separated_68_);
return v___x_69_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_separated_elim(lean_object* v_motive_70_, lean_object* v_t_71_, lean_object* v_h_72_, lean_object* v_separated_73_){
_start:
{
lean_object* v___x_74_; 
v___x_74_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_71_, v_separated_73_);
return v___x_74_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_onCircle_elim___redArg(lean_object* v_t_75_, lean_object* v_onCircle_76_){
_start:
{
lean_object* v___x_77_; 
v___x_77_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_75_, v_onCircle_76_);
return v___x_77_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_onCircle_elim(lean_object* v_motive_78_, lean_object* v_t_79_, lean_object* v_h_80_, lean_object* v_onCircle_81_){
_start:
{
lean_object* v___x_82_; 
v___x_82_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_79_, v_onCircle_81_);
return v___x_82_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_twoGroups_elim___redArg(lean_object* v_t_83_, lean_object* v_twoGroups_84_){
_start:
{
lean_object* v___x_85_; 
v___x_85_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_83_, v_twoGroups_84_);
return v___x_85_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_twoGroups_elim(lean_object* v_motive_86_, lean_object* v_t_87_, lean_object* v_h_88_, lean_object* v_twoGroups_89_){
_start:
{
lean_object* v___x_90_; 
v___x_90_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_87_, v_twoGroups_89_);
return v___x_90_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_splitAt_elim___redArg(lean_object* v_t_91_, lean_object* v_splitAt_92_){
_start:
{
lean_object* v___x_93_; 
v___x_93_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_91_, v_splitAt_92_);
return v___x_93_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_splitAt_elim(lean_object* v_motive_94_, lean_object* v_t_95_, lean_object* v_h_96_, lean_object* v_splitAt_97_){
_start:
{
lean_object* v___x_98_; 
v___x_98_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_95_, v_splitAt_97_);
return v___x_98_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_both_elim___redArg(lean_object* v_t_99_, lean_object* v_both_100_){
_start:
{
lean_object* v___x_101_; 
v___x_101_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_99_, v_both_100_);
return v___x_101_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_both_elim(lean_object* v_motive_102_, lean_object* v_t_103_, lean_object* v_h_104_, lean_object* v_both_105_){
_start:
{
lean_object* v___x_106_; 
v___x_106_ = lp_choreo_Choreo_Pred_ctorElim___redArg(v_t_103_, v_both_105_);
return v___x_106_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq_x27(lean_object* v_a_107_, lean_object* v_b_108_){
_start:
{
lean_object* v_x_109_; lean_object* v_y_110_; lean_object* v_x_111_; lean_object* v_y_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v_x_109_ = lean_ctor_get(v_a_107_, 0);
v_y_110_ = lean_ctor_get(v_a_107_, 1);
v_x_111_ = lean_ctor_get(v_b_108_, 0);
v_y_112_ = lean_ctor_get(v_b_108_, 1);
v___x_113_ = lean_int_sub(v_x_109_, v_x_111_);
v___x_114_ = lean_unsigned_to_nat(2u);
v___x_115_ = l_Int_pow(v___x_113_, v___x_114_);
lean_dec(v___x_113_);
v___x_116_ = lean_int_sub(v_y_110_, v_y_112_);
v___x_117_ = l_Int_pow(v___x_116_, v___x_114_);
lean_dec(v___x_116_);
v___x_118_ = lean_int_add(v___x_115_, v___x_117_);
lean_dec(v___x_117_);
lean_dec(v___x_115_);
return v___x_118_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapSq_x27___boxed(lean_object* v_a_119_, lean_object* v_b_120_){
_start:
{
lean_object* v_res_121_; 
v_res_121_ = lp_choreo_Choreo_gapSq_x27(v_a_119_, v_b_120_);
lean_dec_ref(v_b_120_);
lean_dec_ref(v_a_119_);
return v_res_121_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3(lean_object* v_x_122_, lean_object* v_cx_123_, lean_object* v_cy_124_, lean_object* v_r2_125_, lean_object* v_x_126_){
_start:
{
if (lean_obj_tag(v_x_126_) == 0)
{
uint8_t v___x_127_; 
v___x_127_ = 1;
return v___x_127_;
}
else
{
lean_object* v_head_128_; lean_object* v_tail_129_; lean_object* v___x_130_; lean_object* v_x_131_; lean_object* v_y_132_; lean_object* v___x_133_; lean_object* v___x_134_; lean_object* v___x_135_; lean_object* v___x_136_; lean_object* v___x_137_; lean_object* v___x_138_; uint8_t v___x_139_; 
v_head_128_ = lean_ctor_get(v_x_126_, 0);
lean_inc(v_head_128_);
v_tail_129_ = lean_ctor_get(v_x_126_, 1);
lean_inc(v_tail_129_);
lean_dec_ref_known(v_x_126_, 2);
v___x_130_ = lp_choreo_Choreo_State_at(v_x_122_, v_head_128_);
v_x_131_ = lean_ctor_get(v___x_130_, 0);
lean_inc(v_x_131_);
v_y_132_ = lean_ctor_get(v___x_130_, 1);
lean_inc(v_y_132_);
lean_dec_ref(v___x_130_);
v___x_133_ = lean_int_sub(v_x_131_, v_cx_123_);
lean_dec(v_x_131_);
v___x_134_ = lean_unsigned_to_nat(2u);
v___x_135_ = l_Int_pow(v___x_133_, v___x_134_);
lean_dec(v___x_133_);
v___x_136_ = lean_int_sub(v_y_132_, v_cy_124_);
lean_dec(v_y_132_);
v___x_137_ = l_Int_pow(v___x_136_, v___x_134_);
lean_dec(v___x_136_);
v___x_138_ = lean_int_add(v___x_135_, v___x_137_);
lean_dec(v___x_137_);
lean_dec(v___x_135_);
v___x_139_ = lean_int_dec_eq(v___x_138_, v_r2_125_);
lean_dec(v___x_138_);
if (v___x_139_ == 0)
{
lean_dec(v_tail_129_);
return v___x_139_;
}
else
{
v_x_126_ = v_tail_129_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3___boxed(lean_object* v_x_141_, lean_object* v_cx_142_, lean_object* v_cy_143_, lean_object* v_r2_144_, lean_object* v_x_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3(v_x_141_, v_cx_142_, v_cy_143_, v_r2_144_, v_x_145_);
lean_dec(v_r2_144_);
lean_dec(v_cy_143_);
lean_dec(v_cx_142_);
lean_dec(v_x_141_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6(lean_object* v_x_148_, lean_object* v_line_149_, lean_object* v_x_150_){
_start:
{
if (lean_obj_tag(v_x_150_) == 0)
{
uint8_t v___x_151_; 
v___x_151_ = 1;
return v___x_151_;
}
else
{
lean_object* v_head_152_; lean_object* v_tail_153_; lean_object* v___x_154_; lean_object* v_x_155_; uint8_t v___x_156_; 
v_head_152_ = lean_ctor_get(v_x_150_, 0);
lean_inc(v_head_152_);
v_tail_153_ = lean_ctor_get(v_x_150_, 1);
lean_inc(v_tail_153_);
lean_dec_ref_known(v_x_150_, 2);
v___x_154_ = lp_choreo_Choreo_State_at(v_x_148_, v_head_152_);
v_x_155_ = lean_ctor_get(v___x_154_, 0);
lean_inc(v_x_155_);
lean_dec_ref(v___x_154_);
v___x_156_ = lean_int_dec_le(v_x_155_, v_line_149_);
lean_dec(v_x_155_);
if (v___x_156_ == 0)
{
lean_dec(v_tail_153_);
return v___x_156_;
}
else
{
v_x_150_ = v_tail_153_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6___boxed(lean_object* v_x_158_, lean_object* v_line_159_, lean_object* v_x_160_){
_start:
{
uint8_t v_res_161_; lean_object* v_r_162_; 
v_res_161_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6(v_x_158_, v_line_159_, v_x_160_);
lean_dec(v_line_159_);
lean_dec(v_x_158_);
v_r_162_ = lean_box(v_res_161_);
return v_r_162_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1(lean_object* v_d_163_, lean_object* v_x_164_, lean_object* v_i_165_, lean_object* v_x_166_){
_start:
{
if (lean_obj_tag(v_x_166_) == 0)
{
uint8_t v___x_167_; 
lean_dec(v_i_165_);
v___x_167_ = 1;
return v___x_167_;
}
else
{
lean_object* v_head_168_; lean_object* v_tail_169_; lean_object* v___x_170_; lean_object* v___x_171_; lean_object* v___x_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v_head_168_ = lean_ctor_get(v_x_166_, 0);
lean_inc(v_head_168_);
v_tail_169_ = lean_ctor_get(v_x_166_, 1);
lean_inc(v_tail_169_);
lean_dec_ref_known(v_x_166_, 2);
v___x_170_ = lean_int_mul(v_d_163_, v_d_163_);
lean_inc(v_i_165_);
v___x_171_ = lp_choreo_Choreo_State_at(v_x_164_, v_i_165_);
v___x_172_ = lp_choreo_Choreo_State_at(v_x_164_, v_head_168_);
v___x_173_ = lp_choreo_Choreo_gapSq_x27(v___x_171_, v___x_172_);
lean_dec_ref(v___x_172_);
lean_dec_ref(v___x_171_);
v___x_174_ = lean_int_dec_le(v___x_170_, v___x_173_);
lean_dec(v___x_173_);
lean_dec(v___x_170_);
if (v___x_174_ == 0)
{
lean_dec(v_tail_169_);
lean_dec(v_i_165_);
return v___x_174_;
}
else
{
v_x_166_ = v_tail_169_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1___boxed(lean_object* v_d_176_, lean_object* v_x_177_, lean_object* v_i_178_, lean_object* v_x_179_){
_start:
{
uint8_t v_res_180_; lean_object* v_r_181_; 
v_res_180_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1(v_d_176_, v_x_177_, v_i_178_, v_x_179_);
lean_dec(v_x_177_);
lean_dec(v_d_176_);
v_r_181_ = lean_box(v_res_180_);
return v_r_181_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2(lean_object* v_d_182_, lean_object* v_x_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
uint8_t v___x_185_; 
v___x_185_ = 1;
return v___x_185_;
}
else
{
lean_object* v_head_186_; lean_object* v_tail_187_; lean_object* v___x_188_; uint8_t v___x_189_; 
v_head_186_ = lean_ctor_get(v_x_184_, 0);
lean_inc_n(v_head_186_, 2);
v_tail_187_ = lean_ctor_get(v_x_184_, 1);
lean_inc(v_tail_187_);
lean_dec_ref_known(v_x_184_, 2);
v___x_188_ = l_List_range(v_head_186_);
v___x_189_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1(v_d_182_, v_x_183_, v_head_186_, v___x_188_);
if (v___x_189_ == 0)
{
lean_dec(v_tail_187_);
return v___x_189_;
}
else
{
v_x_184_ = v_tail_187_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2___boxed(lean_object* v_d_191_, lean_object* v_x_192_, lean_object* v_x_193_){
_start:
{
uint8_t v_res_194_; lean_object* v_r_195_; 
v_res_194_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2(v_d_191_, v_x_192_, v_x_193_);
lean_dec(v_x_192_);
lean_dec(v_d_191_);
v_r_195_ = lean_box(v_res_194_);
return v_r_195_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4(lean_object* v_x_196_, lean_object* v_a_197_, lean_object* v_d_198_, lean_object* v_x_199_){
_start:
{
if (lean_obj_tag(v_x_199_) == 0)
{
uint8_t v___x_200_; 
lean_dec(v_a_197_);
v___x_200_ = 1;
return v___x_200_;
}
else
{
lean_object* v_head_201_; lean_object* v_tail_202_; lean_object* v___x_203_; lean_object* v_y_204_; lean_object* v___x_205_; lean_object* v_y_206_; lean_object* v___x_207_; uint8_t v___x_208_; 
v_head_201_ = lean_ctor_get(v_x_199_, 0);
lean_inc(v_head_201_);
v_tail_202_ = lean_ctor_get(v_x_199_, 1);
lean_inc(v_tail_202_);
lean_dec_ref_known(v_x_199_, 2);
lean_inc(v_a_197_);
v___x_203_ = lp_choreo_Choreo_State_at(v_x_196_, v_a_197_);
v_y_204_ = lean_ctor_get(v___x_203_, 1);
lean_inc(v_y_204_);
lean_dec_ref(v___x_203_);
v___x_205_ = lp_choreo_Choreo_State_at(v_x_196_, v_head_201_);
v_y_206_ = lean_ctor_get(v___x_205_, 1);
lean_inc(v_y_206_);
lean_dec_ref(v___x_205_);
v___x_207_ = lean_int_sub(v_y_204_, v_y_206_);
v___x_208_ = lean_int_dec_le(v_d_198_, v___x_207_);
lean_dec(v___x_207_);
if (v___x_208_ == 0)
{
lean_object* v___x_209_; uint8_t v___x_210_; 
v___x_209_ = lean_int_sub(v_y_206_, v_y_204_);
lean_dec(v_y_204_);
lean_dec(v_y_206_);
v___x_210_ = lean_int_dec_le(v_d_198_, v___x_209_);
lean_dec(v___x_209_);
if (v___x_210_ == 0)
{
lean_dec(v_tail_202_);
lean_dec(v_a_197_);
return v___x_210_;
}
else
{
v_x_199_ = v_tail_202_;
goto _start;
}
}
else
{
lean_dec(v_y_206_);
lean_dec(v_y_204_);
v_x_199_ = v_tail_202_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4___boxed(lean_object* v_x_213_, lean_object* v_a_214_, lean_object* v_d_215_, lean_object* v_x_216_){
_start:
{
uint8_t v_res_217_; lean_object* v_r_218_; 
v_res_217_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4(v_x_213_, v_a_214_, v_d_215_, v_x_216_);
lean_dec(v_d_215_);
lean_dec(v_x_213_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5(lean_object* v_x_219_, lean_object* v_d_220_, lean_object* v_B_221_, lean_object* v_x_222_){
_start:
{
if (lean_obj_tag(v_x_222_) == 0)
{
uint8_t v___x_223_; 
lean_dec(v_B_221_);
v___x_223_ = 1;
return v___x_223_;
}
else
{
lean_object* v_head_224_; lean_object* v_tail_225_; uint8_t v___x_226_; 
v_head_224_ = lean_ctor_get(v_x_222_, 0);
lean_inc(v_head_224_);
v_tail_225_ = lean_ctor_get(v_x_222_, 1);
lean_inc(v_tail_225_);
lean_dec_ref_known(v_x_222_, 2);
lean_inc(v_B_221_);
v___x_226_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4(v_x_219_, v_head_224_, v_d_220_, v_B_221_);
if (v___x_226_ == 0)
{
lean_dec(v_tail_225_);
lean_dec(v_B_221_);
return v___x_226_;
}
else
{
v_x_222_ = v_tail_225_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5___boxed(lean_object* v_x_228_, lean_object* v_d_229_, lean_object* v_B_230_, lean_object* v_x_231_){
_start:
{
uint8_t v_res_232_; lean_object* v_r_233_; 
v_res_232_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5(v_x_228_, v_d_229_, v_B_230_, v_x_231_);
lean_dec(v_d_229_);
lean_dec(v_x_228_);
v_r_233_ = lean_box(v_res_232_);
return v_r_233_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0(lean_object* v_x_234_, lean_object* v_x_235_){
_start:
{
if (lean_obj_tag(v_x_234_) == 0)
{
if (lean_obj_tag(v_x_235_) == 0)
{
uint8_t v___x_236_; 
v___x_236_ = 1;
return v___x_236_;
}
else
{
uint8_t v___x_237_; 
v___x_237_ = 0;
return v___x_237_;
}
}
else
{
if (lean_obj_tag(v_x_235_) == 0)
{
uint8_t v___x_238_; 
v___x_238_ = 0;
return v___x_238_;
}
else
{
lean_object* v_head_239_; lean_object* v_tail_240_; lean_object* v_head_241_; lean_object* v_tail_242_; uint8_t v___x_243_; 
v_head_239_ = lean_ctor_get(v_x_234_, 0);
v_tail_240_ = lean_ctor_get(v_x_234_, 1);
v_head_241_ = lean_ctor_get(v_x_235_, 0);
v_tail_242_ = lean_ctor_get(v_x_235_, 1);
v___x_243_ = lp_choreo_Choreo_instDecidableEqPt_decEq(v_head_239_, v_head_241_);
if (v___x_243_ == 0)
{
return v___x_243_;
}
else
{
v_x_234_ = v_tail_240_;
v_x_235_ = v_tail_242_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0___boxed(lean_object* v_x_245_, lean_object* v_x_246_){
_start:
{
uint8_t v_res_247_; lean_object* v_r_248_; 
v_res_247_ = lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0(v_x_245_, v_x_246_);
lean_dec(v_x_246_);
lean_dec(v_x_245_);
v_r_248_ = lean_box(v_res_247_);
return v_r_248_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7(lean_object* v_line_249_, lean_object* v_d_250_, lean_object* v_x_251_, lean_object* v_x_252_){
_start:
{
if (lean_obj_tag(v_x_252_) == 0)
{
uint8_t v___x_253_; 
v___x_253_ = 1;
return v___x_253_;
}
else
{
lean_object* v_head_254_; lean_object* v_tail_255_; lean_object* v___x_256_; lean_object* v_x_257_; lean_object* v___x_258_; uint8_t v___x_259_; 
v_head_254_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_head_254_);
v_tail_255_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_tail_255_);
lean_dec_ref_known(v_x_252_, 2);
v___x_256_ = lp_choreo_Choreo_State_at(v_x_251_, v_head_254_);
v_x_257_ = lean_ctor_get(v___x_256_, 0);
lean_inc(v_x_257_);
lean_dec_ref(v___x_256_);
v___x_258_ = lean_int_add(v_line_249_, v_d_250_);
v___x_259_ = lean_int_dec_le(v___x_258_, v_x_257_);
lean_dec(v_x_257_);
lean_dec(v___x_258_);
if (v___x_259_ == 0)
{
lean_dec(v_tail_255_);
return v___x_259_;
}
else
{
v_x_252_ = v_tail_255_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7___boxed(lean_object* v_line_261_, lean_object* v_d_262_, lean_object* v_x_263_, lean_object* v_x_264_){
_start:
{
uint8_t v_res_265_; lean_object* v_r_266_; 
v_res_265_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7(v_line_261_, v_d_262_, v_x_263_, v_x_264_);
lean_dec(v_x_263_);
lean_dec(v_d_262_);
lean_dec(v_line_261_);
v_r_266_ = lean_box(v_res_265_);
return v_r_266_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Pred_holds(lean_object* v_x_267_, lean_object* v_x_268_){
_start:
{
switch(lean_obj_tag(v_x_267_))
{
case 0:
{
uint8_t v___x_269_; 
v___x_269_ = 1;
return v___x_269_;
}
case 1:
{
lean_object* v_places_270_; uint8_t v___x_271_; 
v_places_270_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_places_270_);
lean_dec_ref_known(v_x_267_, 1);
v___x_271_ = lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0(v_x_268_, v_places_270_);
lean_dec(v_places_270_);
return v___x_271_;
}
case 2:
{
lean_object* v_n_272_; lean_object* v_d_273_; lean_object* v___x_274_; uint8_t v___x_275_; 
v_n_272_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_n_272_);
v_d_273_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_d_273_);
lean_dec_ref_known(v_x_267_, 2);
v___x_274_ = l_List_range(v_n_272_);
v___x_275_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2(v_d_273_, v_x_268_, v___x_274_);
lean_dec(v_d_273_);
return v___x_275_;
}
case 3:
{
lean_object* v_who_276_; lean_object* v_cx_277_; lean_object* v_cy_278_; lean_object* v_r2_279_; uint8_t v___x_280_; 
v_who_276_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_who_276_);
v_cx_277_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_cx_277_);
v_cy_278_ = lean_ctor_get(v_x_267_, 2);
lean_inc(v_cy_278_);
v_r2_279_ = lean_ctor_get(v_x_267_, 3);
lean_inc(v_r2_279_);
lean_dec_ref_known(v_x_267_, 4);
v___x_280_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3(v_x_268_, v_cx_277_, v_cy_278_, v_r2_279_, v_who_276_);
lean_dec(v_r2_279_);
lean_dec(v_cy_278_);
lean_dec(v_cx_277_);
return v___x_280_;
}
case 4:
{
lean_object* v_A_281_; lean_object* v_B_282_; lean_object* v_d_283_; uint8_t v___x_284_; 
v_A_281_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_A_281_);
v_B_282_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_B_282_);
v_d_283_ = lean_ctor_get(v_x_267_, 2);
lean_inc(v_d_283_);
lean_dec_ref_known(v_x_267_, 3);
v___x_284_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5(v_x_268_, v_d_283_, v_B_282_, v_A_281_);
lean_dec(v_d_283_);
return v___x_284_;
}
case 5:
{
lean_object* v_A_285_; lean_object* v_B_286_; lean_object* v_line_287_; lean_object* v_d_288_; uint8_t v___x_289_; 
v_A_285_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_A_285_);
v_B_286_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_B_286_);
v_line_287_ = lean_ctor_get(v_x_267_, 2);
lean_inc(v_line_287_);
v_d_288_ = lean_ctor_get(v_x_267_, 3);
lean_inc(v_d_288_);
lean_dec_ref_known(v_x_267_, 4);
v___x_289_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6(v_x_268_, v_line_287_, v_A_285_);
if (v___x_289_ == 0)
{
lean_dec(v_d_288_);
lean_dec(v_line_287_);
lean_dec(v_B_286_);
return v___x_289_;
}
else
{
uint8_t v___x_290_; 
v___x_290_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7(v_line_287_, v_d_288_, v_x_268_, v_B_286_);
lean_dec(v_d_288_);
lean_dec(v_line_287_);
return v___x_290_;
}
}
default: 
{
lean_object* v_p_291_; lean_object* v_q_292_; uint8_t v___x_293_; 
v_p_291_ = lean_ctor_get(v_x_267_, 0);
lean_inc(v_p_291_);
v_q_292_ = lean_ctor_get(v_x_267_, 1);
lean_inc(v_q_292_);
lean_dec_ref_known(v_x_267_, 2);
v___x_293_ = lp_choreo_Choreo_Pred_holds(v_p_291_, v_x_268_);
if (v___x_293_ == 0)
{
lean_dec(v_q_292_);
return v___x_293_;
}
else
{
v_x_267_ = v_q_292_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_holds___boxed(lean_object* v_x_295_, lean_object* v_x_296_){
_start:
{
uint8_t v_res_297_; lean_object* v_r_298_; 
v_res_297_ = lp_choreo_Choreo_Pred_holds(v_x_295_, v_x_296_);
lean_dec(v_x_296_);
v_r_298_ = lean_box(v_res_297_);
return v_r_298_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorIdx(lean_object* v_x_299_){
_start:
{
switch(lean_obj_tag(v_x_299_))
{
case 0:
{
lean_object* v___x_300_; 
v___x_300_ = lean_unsigned_to_nat(0u);
return v___x_300_;
}
case 1:
{
lean_object* v___x_301_; 
v___x_301_ = lean_unsigned_to_nat(1u);
return v___x_301_;
}
case 2:
{
lean_object* v___x_302_; 
v___x_302_ = lean_unsigned_to_nat(2u);
return v___x_302_;
}
default: 
{
lean_object* v___x_303_; 
v___x_303_ = lean_unsigned_to_nat(3u);
return v___x_303_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorIdx___boxed(lean_object* v_x_304_){
_start:
{
lean_object* v_res_305_; 
v_res_305_ = lp_choreo_Choreo_Op_ctorIdx(v_x_304_);
lean_dec_ref(v_x_304_);
return v_res_305_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim___redArg(lean_object* v_t_306_, lean_object* v_k_307_){
_start:
{
switch(lean_obj_tag(v_t_306_))
{
case 0:
{
lean_object* v_target_308_; lean_object* v_beats_309_; lean_object* v_certs_310_; lean_object* v___x_311_; 
v_target_308_ = lean_ctor_get(v_t_306_, 0);
lean_inc(v_target_308_);
v_beats_309_ = lean_ctor_get(v_t_306_, 1);
lean_inc(v_beats_309_);
v_certs_310_ = lean_ctor_get(v_t_306_, 2);
lean_inc(v_certs_310_);
lean_dec_ref_known(v_t_306_, 3);
v___x_311_ = lean_apply_3(v_k_307_, v_target_308_, v_beats_309_, v_certs_310_);
return v___x_311_;
}
case 1:
{
lean_object* v_centre_312_; uint8_t v_ccw_313_; lean_object* v_beats_314_; lean_object* v_certs_315_; lean_object* v_orbits_316_; lean_object* v___x_317_; lean_object* v___x_318_; 
v_centre_312_ = lean_ctor_get(v_t_306_, 0);
lean_inc_ref(v_centre_312_);
v_ccw_313_ = lean_ctor_get_uint8(v_t_306_, sizeof(void*)*4);
v_beats_314_ = lean_ctor_get(v_t_306_, 1);
lean_inc(v_beats_314_);
v_certs_315_ = lean_ctor_get(v_t_306_, 2);
lean_inc(v_certs_315_);
v_orbits_316_ = lean_ctor_get(v_t_306_, 3);
lean_inc(v_orbits_316_);
lean_dec_ref_known(v_t_306_, 4);
v___x_317_ = lean_box(v_ccw_313_);
v___x_318_ = lean_apply_5(v_k_307_, v_centre_312_, v___x_317_, v_beats_314_, v_certs_315_, v_orbits_316_);
return v___x_318_;
}
case 2:
{
lean_object* v_deltas_319_; lean_object* v_beats_320_; lean_object* v___x_321_; 
v_deltas_319_ = lean_ctor_get(v_t_306_, 0);
lean_inc(v_deltas_319_);
v_beats_320_ = lean_ctor_get(v_t_306_, 1);
lean_inc(v_beats_320_);
lean_dec_ref_known(v_t_306_, 2);
v___x_321_ = lean_apply_2(v_k_307_, v_deltas_319_, v_beats_320_);
return v___x_321_;
}
default: 
{
lean_object* v_left_322_; lean_object* v_right_323_; lean_object* v_line_324_; lean_object* v_target_325_; lean_object* v_beats_326_; lean_object* v_certs_327_; lean_object* v___x_328_; 
v_left_322_ = lean_ctor_get(v_t_306_, 0);
lean_inc(v_left_322_);
v_right_323_ = lean_ctor_get(v_t_306_, 1);
lean_inc(v_right_323_);
v_line_324_ = lean_ctor_get(v_t_306_, 2);
lean_inc(v_line_324_);
v_target_325_ = lean_ctor_get(v_t_306_, 3);
lean_inc(v_target_325_);
v_beats_326_ = lean_ctor_get(v_t_306_, 4);
lean_inc(v_beats_326_);
v_certs_327_ = lean_ctor_get(v_t_306_, 5);
lean_inc(v_certs_327_);
lean_dec_ref_known(v_t_306_, 6);
v___x_328_ = lean_apply_6(v_k_307_, v_left_322_, v_right_323_, v_line_324_, v_target_325_, v_beats_326_, v_certs_327_);
return v___x_328_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim(lean_object* v_motive_329_, lean_object* v_ctorIdx_330_, lean_object* v_t_331_, lean_object* v_h_332_, lean_object* v_k_333_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_331_, v_k_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim___boxed(lean_object* v_motive_335_, lean_object* v_ctorIdx_336_, lean_object* v_t_337_, lean_object* v_h_338_, lean_object* v_k_339_){
_start:
{
lean_object* v_res_340_; 
v_res_340_ = lp_choreo_Choreo_Op_ctorElim(v_motive_335_, v_ctorIdx_336_, v_t_337_, v_h_338_, v_k_339_);
lean_dec(v_ctorIdx_336_);
return v_res_340_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_move_elim___redArg(lean_object* v_t_341_, lean_object* v_move_342_){
_start:
{
lean_object* v___x_343_; 
v___x_343_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_341_, v_move_342_);
return v___x_343_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_move_elim(lean_object* v_motive_344_, lean_object* v_t_345_, lean_object* v_h_346_, lean_object* v_move_347_){
_start:
{
lean_object* v___x_348_; 
v___x_348_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_345_, v_move_347_);
return v___x_348_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_turn_elim___redArg(lean_object* v_t_349_, lean_object* v_turn_350_){
_start:
{
lean_object* v___x_351_; 
v___x_351_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_349_, v_turn_350_);
return v___x_351_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_turn_elim(lean_object* v_motive_352_, lean_object* v_t_353_, lean_object* v_h_354_, lean_object* v_turn_355_){
_start:
{
lean_object* v___x_356_; 
v___x_356_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_353_, v_turn_355_);
return v___x_356_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_slide_elim___redArg(lean_object* v_t_357_, lean_object* v_slide_358_){
_start:
{
lean_object* v___x_359_; 
v___x_359_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_357_, v_slide_358_);
return v___x_359_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_slide_elim(lean_object* v_motive_360_, lean_object* v_t_361_, lean_object* v_h_362_, lean_object* v_slide_363_){
_start:
{
lean_object* v___x_364_; 
v___x_364_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_361_, v_slide_363_);
return v___x_364_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_par_elim___redArg(lean_object* v_t_365_, lean_object* v_par_366_){
_start:
{
lean_object* v___x_367_; 
v___x_367_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_365_, v_par_366_);
return v___x_367_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_par_elim(lean_object* v_motive_368_, lean_object* v_t_369_, lean_object* v_h_370_, lean_object* v_par_371_){
_start:
{
lean_object* v___x_372_; 
v___x_372_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_369_, v_par_371_);
return v___x_372_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarter(lean_object* v_c_373_, lean_object* v_a_374_, uint8_t v_ccw_375_){
_start:
{
lean_object* v_x_376_; lean_object* v_y_377_; lean_object* v_x_378_; lean_object* v_y_379_; lean_object* v___x_381_; uint8_t v_isShared_382_; uint8_t v_isSharedCheck_395_; 
v_x_376_ = lean_ctor_get(v_a_374_, 0);
v_y_377_ = lean_ctor_get(v_a_374_, 1);
v_x_378_ = lean_ctor_get(v_c_373_, 0);
v_y_379_ = lean_ctor_get(v_c_373_, 1);
v_isSharedCheck_395_ = !lean_is_exclusive(v_c_373_);
if (v_isSharedCheck_395_ == 0)
{
v___x_381_ = v_c_373_;
v_isShared_382_ = v_isSharedCheck_395_;
goto v_resetjp_380_;
}
else
{
lean_inc(v_y_379_);
lean_inc(v_x_378_);
lean_dec(v_c_373_);
v___x_381_ = lean_box(0);
v_isShared_382_ = v_isSharedCheck_395_;
goto v_resetjp_380_;
}
v_resetjp_380_:
{
lean_object* v_dx_383_; lean_object* v_dy_384_; 
v_dx_383_ = lean_int_sub(v_x_376_, v_x_378_);
v_dy_384_ = lean_int_sub(v_y_377_, v_y_379_);
if (v_ccw_375_ == 0)
{
lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_388_; 
v___x_385_ = lean_int_add(v_x_378_, v_dy_384_);
lean_dec(v_dy_384_);
lean_dec(v_x_378_);
v___x_386_ = lean_int_sub(v_y_379_, v_dx_383_);
lean_dec(v_dx_383_);
lean_dec(v_y_379_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v___x_386_);
lean_ctor_set(v___x_381_, 0, v___x_385_);
v___x_388_ = v___x_381_;
goto v_reusejp_387_;
}
else
{
lean_object* v_reuseFailAlloc_389_; 
v_reuseFailAlloc_389_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_389_, 0, v___x_385_);
lean_ctor_set(v_reuseFailAlloc_389_, 1, v___x_386_);
v___x_388_ = v_reuseFailAlloc_389_;
goto v_reusejp_387_;
}
v_reusejp_387_:
{
return v___x_388_;
}
}
else
{
lean_object* v___x_390_; lean_object* v___x_391_; lean_object* v___x_393_; 
v___x_390_ = lean_int_sub(v_x_378_, v_dy_384_);
lean_dec(v_dy_384_);
lean_dec(v_x_378_);
v___x_391_ = lean_int_add(v_y_379_, v_dx_383_);
lean_dec(v_dx_383_);
lean_dec(v_y_379_);
if (v_isShared_382_ == 0)
{
lean_ctor_set(v___x_381_, 1, v___x_391_);
lean_ctor_set(v___x_381_, 0, v___x_390_);
v___x_393_ = v___x_381_;
goto v_reusejp_392_;
}
else
{
lean_object* v_reuseFailAlloc_394_; 
v_reuseFailAlloc_394_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_394_, 0, v___x_390_);
lean_ctor_set(v_reuseFailAlloc_394_, 1, v___x_391_);
v___x_393_ = v_reuseFailAlloc_394_;
goto v_reusejp_392_;
}
v_reusejp_392_:
{
return v___x_393_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarter___boxed(lean_object* v_c_396_, lean_object* v_a_397_, lean_object* v_ccw_398_){
_start:
{
uint8_t v_ccw_boxed_399_; lean_object* v_res_400_; 
v_ccw_boxed_399_ = lean_unbox(v_ccw_398_);
v_res_400_ = lp_choreo_Choreo_Pt_quarter(v_c_396_, v_a_397_, v_ccw_boxed_399_);
lean_dec_ref(v_a_397_);
return v_res_400_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_beats(lean_object* v_x_401_){
_start:
{
if (lean_obj_tag(v_x_401_) == 3)
{
lean_object* v_beats_402_; 
v_beats_402_ = lean_ctor_get(v_x_401_, 4);
lean_inc(v_beats_402_);
return v_beats_402_;
}
else
{
lean_object* v_beats_403_; 
v_beats_403_ = lean_ctor_get(v_x_401_, 1);
lean_inc(v_beats_403_);
return v_beats_403_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_beats___boxed(lean_object* v_x_404_){
_start:
{
lean_object* v_res_405_; 
v_res_405_ = lp_choreo_Choreo_Op_beats(v_x_404_);
lean_dec_ref(v_x_404_);
return v_res_405_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_unsigned_to_nat(0u);
v___x_407_ = lean_nat_to_int(v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0);
v___x_409_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_409_, 0, v___x_408_);
lean_ctor_set(v___x_409_, 1, v___x_408_);
return v___x_409_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1(lean_object* v_deltas_410_, lean_object* v_s_411_, lean_object* v_a_412_, lean_object* v_a_413_){
_start:
{
if (lean_obj_tag(v_a_412_) == 0)
{
lean_object* v___x_414_; 
v___x_414_ = l_List_reverse___redArg(v_a_413_);
return v___x_414_;
}
else
{
lean_object* v_head_415_; lean_object* v_tail_416_; lean_object* v___x_418_; uint8_t v_isShared_419_; uint8_t v_isSharedCheck_440_; 
v_head_415_ = lean_ctor_get(v_a_412_, 0);
v_tail_416_ = lean_ctor_get(v_a_412_, 1);
v_isSharedCheck_440_ = !lean_is_exclusive(v_a_412_);
if (v_isSharedCheck_440_ == 0)
{
v___x_418_ = v_a_412_;
v_isShared_419_ = v_isSharedCheck_440_;
goto v_resetjp_417_;
}
else
{
lean_inc(v_tail_416_);
lean_inc(v_head_415_);
lean_dec(v_a_412_);
v___x_418_ = lean_box(0);
v_isShared_419_ = v_isSharedCheck_440_;
goto v_resetjp_417_;
}
v_resetjp_417_:
{
lean_object* v___x_420_; lean_object* v_d_421_; lean_object* v___x_422_; lean_object* v_x_423_; lean_object* v_y_424_; lean_object* v___x_426_; uint8_t v_isShared_427_; uint8_t v_isSharedCheck_439_; 
v___x_420_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1, &lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1);
lean_inc(v_head_415_);
v_d_421_ = l_List_getD___redArg(v_deltas_410_, v_head_415_, v___x_420_);
v___x_422_ = lp_choreo_Choreo_State_at(v_s_411_, v_head_415_);
v_x_423_ = lean_ctor_get(v___x_422_, 0);
v_y_424_ = lean_ctor_get(v___x_422_, 1);
v_isSharedCheck_439_ = !lean_is_exclusive(v___x_422_);
if (v_isSharedCheck_439_ == 0)
{
v___x_426_ = v___x_422_;
v_isShared_427_ = v_isSharedCheck_439_;
goto v_resetjp_425_;
}
else
{
lean_inc(v_y_424_);
lean_inc(v_x_423_);
lean_dec(v___x_422_);
v___x_426_ = lean_box(0);
v_isShared_427_ = v_isSharedCheck_439_;
goto v_resetjp_425_;
}
v_resetjp_425_:
{
lean_object* v_fst_428_; lean_object* v_snd_429_; lean_object* v___x_430_; lean_object* v___x_431_; lean_object* v___x_433_; 
v_fst_428_ = lean_ctor_get(v_d_421_, 0);
lean_inc(v_fst_428_);
v_snd_429_ = lean_ctor_get(v_d_421_, 1);
lean_inc(v_snd_429_);
lean_dec(v_d_421_);
v___x_430_ = lean_int_add(v_x_423_, v_fst_428_);
lean_dec(v_fst_428_);
lean_dec(v_x_423_);
v___x_431_ = lean_int_add(v_y_424_, v_snd_429_);
lean_dec(v_snd_429_);
lean_dec(v_y_424_);
if (v_isShared_427_ == 0)
{
lean_ctor_set(v___x_426_, 1, v___x_431_);
lean_ctor_set(v___x_426_, 0, v___x_430_);
v___x_433_ = v___x_426_;
goto v_reusejp_432_;
}
else
{
lean_object* v_reuseFailAlloc_438_; 
v_reuseFailAlloc_438_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_438_, 0, v___x_430_);
lean_ctor_set(v_reuseFailAlloc_438_, 1, v___x_431_);
v___x_433_ = v_reuseFailAlloc_438_;
goto v_reusejp_432_;
}
v_reusejp_432_:
{
lean_object* v___x_435_; 
if (v_isShared_419_ == 0)
{
lean_ctor_set(v___x_418_, 1, v_a_413_);
lean_ctor_set(v___x_418_, 0, v___x_433_);
v___x_435_ = v___x_418_;
goto v_reusejp_434_;
}
else
{
lean_object* v_reuseFailAlloc_437_; 
v_reuseFailAlloc_437_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_437_, 0, v___x_433_);
lean_ctor_set(v_reuseFailAlloc_437_, 1, v_a_413_);
v___x_435_ = v_reuseFailAlloc_437_;
goto v_reusejp_434_;
}
v_reusejp_434_:
{
v_a_412_ = v_tail_416_;
v_a_413_ = v___x_435_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___boxed(lean_object* v_deltas_441_, lean_object* v_s_442_, lean_object* v_a_443_, lean_object* v_a_444_){
_start:
{
lean_object* v_res_445_; 
v_res_445_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1(v_deltas_441_, v_s_442_, v_a_443_, v_a_444_);
lean_dec(v_s_442_);
lean_dec(v_deltas_441_);
return v_res_445_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0(lean_object* v_s_446_, lean_object* v_centre_447_, uint8_t v_ccw_448_, lean_object* v_a_449_, lean_object* v_a_450_){
_start:
{
if (lean_obj_tag(v_a_449_) == 0)
{
lean_object* v___x_451_; 
lean_dec_ref(v_centre_447_);
v___x_451_ = l_List_reverse___redArg(v_a_450_);
return v___x_451_;
}
else
{
lean_object* v_head_452_; lean_object* v_tail_453_; lean_object* v___x_455_; uint8_t v_isShared_456_; uint8_t v_isSharedCheck_463_; 
v_head_452_ = lean_ctor_get(v_a_449_, 0);
v_tail_453_ = lean_ctor_get(v_a_449_, 1);
v_isSharedCheck_463_ = !lean_is_exclusive(v_a_449_);
if (v_isSharedCheck_463_ == 0)
{
v___x_455_ = v_a_449_;
v_isShared_456_ = v_isSharedCheck_463_;
goto v_resetjp_454_;
}
else
{
lean_inc(v_tail_453_);
lean_inc(v_head_452_);
lean_dec(v_a_449_);
v___x_455_ = lean_box(0);
v_isShared_456_ = v_isSharedCheck_463_;
goto v_resetjp_454_;
}
v_resetjp_454_:
{
lean_object* v___x_457_; lean_object* v___x_458_; lean_object* v___x_460_; 
v___x_457_ = lp_choreo_Choreo_State_at(v_s_446_, v_head_452_);
lean_inc_ref(v_centre_447_);
v___x_458_ = lp_choreo_Choreo_Pt_quarter(v_centre_447_, v___x_457_, v_ccw_448_);
lean_dec_ref(v___x_457_);
if (v_isShared_456_ == 0)
{
lean_ctor_set(v___x_455_, 1, v_a_450_);
lean_ctor_set(v___x_455_, 0, v___x_458_);
v___x_460_ = v___x_455_;
goto v_reusejp_459_;
}
else
{
lean_object* v_reuseFailAlloc_462_; 
v_reuseFailAlloc_462_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_462_, 0, v___x_458_);
lean_ctor_set(v_reuseFailAlloc_462_, 1, v_a_450_);
v___x_460_ = v_reuseFailAlloc_462_;
goto v_reusejp_459_;
}
v_reusejp_459_:
{
v_a_449_ = v_tail_453_;
v_a_450_ = v___x_460_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0___boxed(lean_object* v_s_464_, lean_object* v_centre_465_, lean_object* v_ccw_466_, lean_object* v_a_467_, lean_object* v_a_468_){
_start:
{
uint8_t v_ccw_239__boxed_469_; lean_object* v_res_470_; 
v_ccw_239__boxed_469_ = lean_unbox(v_ccw_466_);
v_res_470_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0(v_s_464_, v_centre_465_, v_ccw_239__boxed_469_, v_a_467_, v_a_468_);
lean_dec(v_s_464_);
return v_res_470_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_next(lean_object* v_op_471_, lean_object* v_n_472_, lean_object* v_s_473_){
_start:
{
switch(lean_obj_tag(v_op_471_))
{
case 0:
{
lean_object* v_target_474_; 
lean_dec(v_n_472_);
v_target_474_ = lean_ctor_get(v_op_471_, 0);
lean_inc(v_target_474_);
lean_dec_ref_known(v_op_471_, 3);
return v_target_474_;
}
case 1:
{
lean_object* v_centre_475_; uint8_t v_ccw_476_; lean_object* v___x_477_; lean_object* v___x_478_; lean_object* v___x_479_; 
v_centre_475_ = lean_ctor_get(v_op_471_, 0);
lean_inc_ref(v_centre_475_);
v_ccw_476_ = lean_ctor_get_uint8(v_op_471_, sizeof(void*)*4);
lean_dec_ref_known(v_op_471_, 4);
v___x_477_ = l_List_range(v_n_472_);
v___x_478_ = lean_box(0);
v___x_479_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0(v_s_473_, v_centre_475_, v_ccw_476_, v___x_477_, v___x_478_);
return v___x_479_;
}
case 2:
{
lean_object* v_deltas_480_; lean_object* v___x_481_; lean_object* v___x_482_; lean_object* v___x_483_; 
v_deltas_480_ = lean_ctor_get(v_op_471_, 0);
lean_inc(v_deltas_480_);
lean_dec_ref_known(v_op_471_, 2);
v___x_481_ = l_List_range(v_n_472_);
v___x_482_ = lean_box(0);
v___x_483_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1(v_deltas_480_, v_s_473_, v___x_481_, v___x_482_);
lean_dec(v_deltas_480_);
return v___x_483_;
}
default: 
{
lean_object* v_target_484_; 
lean_dec(v_n_472_);
v_target_484_ = lean_ctor_get(v_op_471_, 3);
lean_inc(v_target_484_);
lean_dec_ref_known(v_op_471_, 6);
return v_target_484_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_next___boxed(lean_object* v_op_485_, lean_object* v_n_486_, lean_object* v_s_487_){
_start:
{
lean_object* v_res_488_; 
v_res_488_ = lp_choreo_Choreo_Op_next(v_op_485_, v_n_486_, v_s_487_);
lean_dec(v_s_487_);
return v_res_488_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_pathOf(lean_object* v_op_489_, lean_object* v_n_490_, lean_object* v_s_491_, lean_object* v_i_492_){
_start:
{
if (lean_obj_tag(v_op_489_) == 1)
{
lean_object* v_centre_493_; uint8_t v_ccw_494_; lean_object* v___x_495_; lean_object* v___x_496_; 
lean_dec(v_n_490_);
v_centre_493_ = lean_ctor_get(v_op_489_, 0);
lean_inc_ref(v_centre_493_);
v_ccw_494_ = lean_ctor_get_uint8(v_op_489_, sizeof(void*)*4);
lean_dec_ref_known(v_op_489_, 4);
v___x_495_ = lp_choreo_Choreo_State_at(v_s_491_, v_i_492_);
v___x_496_ = lp_choreo_Choreo_rotatePath(v_centre_493_, v___x_495_, v_ccw_494_);
lean_dec_ref(v___x_495_);
lean_dec_ref(v_centre_493_);
return v___x_496_;
}
else
{
lean_object* v___x_497_; lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
lean_inc(v_i_492_);
v___x_497_ = lp_choreo_Choreo_State_at(v_s_491_, v_i_492_);
v___x_498_ = lp_choreo_Choreo_Op_next(v_op_489_, v_n_490_, v_s_491_);
v___x_499_ = lp_choreo_Choreo_State_at(v___x_498_, v_i_492_);
lean_dec(v___x_498_);
v___x_500_ = lp_choreo_Choreo_easePath(v___x_497_, v___x_499_);
return v___x_500_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_pathOf___boxed(lean_object* v_op_501_, lean_object* v_n_502_, lean_object* v_s_503_, lean_object* v_i_504_){
_start:
{
lean_object* v_res_505_; 
v_res_505_ = lp_choreo_Choreo_Op_pathOf(v_op_501_, v_n_502_, v_s_503_, v_i_504_);
lean_dec(v_s_503_);
return v_res_505_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_certs(lean_object* v_x_506_){
_start:
{
switch(lean_obj_tag(v_x_506_))
{
case 2:
{
lean_object* v___x_507_; 
v___x_507_ = lean_box(0);
return v___x_507_;
}
case 3:
{
lean_object* v_certs_508_; 
v_certs_508_ = lean_ctor_get(v_x_506_, 5);
lean_inc(v_certs_508_);
return v_certs_508_;
}
default: 
{
lean_object* v_certs_509_; 
v_certs_509_ = lean_ctor_get(v_x_506_, 2);
lean_inc(v_certs_509_);
return v_certs_509_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_certs___boxed(lean_object* v_x_510_){
_start:
{
lean_object* v_res_511_; 
v_res_511_ = lp_choreo_Choreo_Op_certs(v_x_510_);
lean_dec_ref(v_x_510_);
return v_res_511_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_orbits(lean_object* v_x_512_){
_start:
{
if (lean_obj_tag(v_x_512_) == 1)
{
lean_object* v_orbits_513_; 
v_orbits_513_ = lean_ctor_get(v_x_512_, 3);
lean_inc(v_orbits_513_);
return v_orbits_513_;
}
else
{
lean_object* v___x_514_; 
v___x_514_ = lean_box(0);
return v___x_514_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_orbits___boxed(lean_object* v_x_515_){
_start:
{
lean_object* v_res_516_; 
v_res_516_ = lp_choreo_Choreo_Op_orbits(v_x_515_);
lean_dec_ref(v_x_515_);
return v_res_516_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(lean_object* v_op_517_, lean_object* v___x_518_, lean_object* v_s_519_, lean_object* v_a_520_, lean_object* v_a_521_){
_start:
{
if (lean_obj_tag(v_a_520_) == 0)
{
lean_object* v___x_522_; 
lean_dec(v___x_518_);
lean_dec_ref(v_op_517_);
v___x_522_ = l_List_reverse___redArg(v_a_521_);
return v___x_522_;
}
else
{
lean_object* v_head_523_; lean_object* v_tail_524_; lean_object* v___x_526_; uint8_t v_isShared_527_; uint8_t v_isSharedCheck_533_; 
v_head_523_ = lean_ctor_get(v_a_520_, 0);
v_tail_524_ = lean_ctor_get(v_a_520_, 1);
v_isSharedCheck_533_ = !lean_is_exclusive(v_a_520_);
if (v_isSharedCheck_533_ == 0)
{
v___x_526_ = v_a_520_;
v_isShared_527_ = v_isSharedCheck_533_;
goto v_resetjp_525_;
}
else
{
lean_inc(v_tail_524_);
lean_inc(v_head_523_);
lean_dec(v_a_520_);
v___x_526_ = lean_box(0);
v_isShared_527_ = v_isSharedCheck_533_;
goto v_resetjp_525_;
}
v_resetjp_525_:
{
lean_object* v___x_528_; lean_object* v___x_530_; 
lean_inc(v___x_518_);
lean_inc_ref(v_op_517_);
v___x_528_ = lp_choreo_Choreo_Op_pathOf(v_op_517_, v___x_518_, v_s_519_, v_head_523_);
if (v_isShared_527_ == 0)
{
lean_ctor_set(v___x_526_, 1, v_a_521_);
lean_ctor_set(v___x_526_, 0, v___x_528_);
v___x_530_ = v___x_526_;
goto v_reusejp_529_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_528_);
lean_ctor_set(v_reuseFailAlloc_532_, 1, v_a_521_);
v___x_530_ = v_reuseFailAlloc_532_;
goto v_reusejp_529_;
}
v_reusejp_529_:
{
v_a_520_ = v_tail_524_;
v_a_521_ = v___x_530_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0___boxed(lean_object* v_op_534_, lean_object* v___x_535_, lean_object* v_s_536_, lean_object* v_a_537_, lean_object* v_a_538_){
_start:
{
lean_object* v_res_539_; 
v_res_539_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(v_op_534_, v___x_535_, v_s_536_, v_a_537_, v_a_538_);
lean_dec(v_s_536_);
return v_res_539_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_phase(lean_object* v_op_540_, lean_object* v_c_541_, lean_object* v_t_542_, lean_object* v_s_543_){
_start:
{
lean_object* v___y_545_; 
if (lean_obj_tag(v_op_540_) == 3)
{
lean_object* v_beats_558_; 
v_beats_558_ = lean_ctor_get(v_op_540_, 4);
lean_inc(v_beats_558_);
v___y_545_ = v_beats_558_;
goto v___jp_544_;
}
else
{
lean_object* v_beats_559_; 
v_beats_559_ = lean_ctor_get(v_op_540_, 1);
lean_inc(v_beats_559_);
v___y_545_ = v_beats_559_;
goto v___jp_544_;
}
v___jp_544_:
{
lean_object* v_n_546_; lean_object* v_stage_547_; lean_object* v_ticksPerBeat_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; lean_object* v___x_556_; lean_object* v___x_557_; 
v_n_546_ = lean_ctor_get(v_c_541_, 0);
lean_inc_n(v_n_546_, 2);
v_stage_547_ = lean_ctor_get(v_c_541_, 3);
lean_inc_ref(v_stage_547_);
v_ticksPerBeat_548_ = lean_ctor_get(v_c_541_, 4);
lean_inc(v_ticksPerBeat_548_);
lean_dec_ref(v_c_541_);
v___x_549_ = lean_nat_mul(v___y_545_, v_ticksPerBeat_548_);
lean_dec(v_ticksPerBeat_548_);
lean_dec(v___y_545_);
v___x_550_ = lean_nat_add(v_t_542_, v___x_549_);
lean_dec(v___x_549_);
v___x_551_ = l_List_range(v_n_546_);
v___x_552_ = lean_box(0);
lean_inc_ref(v_op_540_);
v___x_553_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(v_op_540_, v_n_546_, v_s_543_, v___x_551_, v___x_552_);
v___x_554_ = lp_choreo_Choreo_Op_certs(v_op_540_);
v___x_555_ = lp_choreo_Choreo_Op_orbits(v_op_540_);
lean_dec_ref(v_op_540_);
v___x_556_ = lean_box(0);
v___x_557_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_557_, 0, v_t_542_);
lean_ctor_set(v___x_557_, 1, v___x_550_);
lean_ctor_set(v___x_557_, 2, v___x_553_);
lean_ctor_set(v___x_557_, 3, v_stage_547_);
lean_ctor_set(v___x_557_, 4, v___x_554_);
lean_ctor_set(v___x_557_, 5, v___x_552_);
lean_ctor_set(v___x_557_, 6, v___x_555_);
lean_ctor_set(v___x_557_, 7, v___x_556_);
return v___x_557_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_phase___boxed(lean_object* v_op_560_, lean_object* v_c_561_, lean_object* v_t_562_, lean_object* v_s_563_){
_start:
{
lean_object* v_res_564_; 
v_res_564_ = lp_choreo_Choreo_Op_phase(v_op_560_, v_c_561_, v_t_562_, v_s_563_);
lean_dec(v_s_563_);
return v_res_564_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_slidePairOk(lean_object* v_d_565_, lean_object* v_a_566_, lean_object* v_b_567_, lean_object* v_da_568_, lean_object* v_db_569_){
_start:
{
lean_object* v_fst_570_; lean_object* v_snd_571_; lean_object* v_fst_572_; lean_object* v_snd_573_; uint8_t v___x_590_; 
v_fst_570_ = lean_ctor_get(v_da_568_, 0);
v_snd_571_ = lean_ctor_get(v_da_568_, 1);
v_fst_572_ = lean_ctor_get(v_db_569_, 0);
v_snd_573_ = lean_ctor_get(v_db_569_, 1);
v___x_590_ = lean_int_dec_eq(v_fst_570_, v_fst_572_);
if (v___x_590_ == 0)
{
goto v___jp_582_;
}
else
{
uint8_t v___x_591_; 
v___x_591_ = lean_int_dec_eq(v_snd_571_, v_snd_573_);
if (v___x_591_ == 0)
{
goto v___jp_582_;
}
else
{
lean_object* v___x_592_; lean_object* v___x_593_; uint8_t v___x_594_; 
v___x_592_ = lean_int_mul(v_d_565_, v_d_565_);
v___x_593_ = lp_choreo_Choreo_gapSq_x27(v_a_566_, v_b_567_);
v___x_594_ = lean_int_dec_le(v___x_592_, v___x_593_);
lean_dec(v___x_593_);
lean_dec(v___x_592_);
if (v___x_594_ == 0)
{
goto v___jp_582_;
}
else
{
return v___x_594_;
}
}
}
v___jp_574_:
{
uint8_t v___x_575_; 
v___x_575_ = lean_int_dec_eq(v_fst_570_, v_fst_572_);
if (v___x_575_ == 0)
{
return v___x_575_;
}
else
{
lean_object* v_x_576_; lean_object* v_x_577_; lean_object* v___x_578_; uint8_t v___x_579_; 
v_x_576_ = lean_ctor_get(v_a_566_, 0);
v_x_577_ = lean_ctor_get(v_b_567_, 0);
v___x_578_ = lean_int_sub(v_x_576_, v_x_577_);
v___x_579_ = lean_int_dec_le(v_d_565_, v___x_578_);
lean_dec(v___x_578_);
if (v___x_579_ == 0)
{
lean_object* v___x_580_; uint8_t v___x_581_; 
v___x_580_ = lean_int_sub(v_x_577_, v_x_576_);
v___x_581_ = lean_int_dec_le(v_d_565_, v___x_580_);
lean_dec(v___x_580_);
return v___x_581_;
}
else
{
return v___x_579_;
}
}
}
v___jp_582_:
{
uint8_t v___x_583_; 
v___x_583_ = lean_int_dec_eq(v_snd_571_, v_snd_573_);
if (v___x_583_ == 0)
{
goto v___jp_574_;
}
else
{
lean_object* v_y_584_; lean_object* v_y_585_; lean_object* v___x_586_; uint8_t v___x_587_; 
v_y_584_ = lean_ctor_get(v_a_566_, 1);
v_y_585_ = lean_ctor_get(v_b_567_, 1);
v___x_586_ = lean_int_sub(v_y_584_, v_y_585_);
v___x_587_ = lean_int_dec_le(v_d_565_, v___x_586_);
lean_dec(v___x_586_);
if (v___x_587_ == 0)
{
lean_object* v___x_588_; uint8_t v___x_589_; 
v___x_588_ = lean_int_sub(v_y_585_, v_y_584_);
v___x_589_ = lean_int_dec_le(v_d_565_, v___x_588_);
lean_dec(v___x_588_);
if (v___x_589_ == 0)
{
goto v___jp_574_;
}
else
{
return v___x_589_;
}
}
else
{
return v___x_587_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_slidePairOk___boxed(lean_object* v_d_595_, lean_object* v_a_596_, lean_object* v_b_597_, lean_object* v_da_598_, lean_object* v_db_599_){
_start:
{
uint8_t v_res_600_; lean_object* v_r_601_; 
v_res_600_ = lp_choreo_Choreo_slidePairOk(v_d_595_, v_a_596_, v_b_597_, v_da_598_, v_db_599_);
lean_dec_ref(v_db_599_);
lean_dec_ref(v_da_598_);
lean_dec_ref(v_b_597_);
lean_dec_ref(v_a_596_);
lean_dec(v_d_595_);
v_r_601_ = lean_box(v_res_600_);
return v_r_601_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_slideClear_spec__0(lean_object* v_c_602_, lean_object* v_s_603_, lean_object* v_i_604_, lean_object* v_ds_605_, lean_object* v_x_606_){
_start:
{
if (lean_obj_tag(v_x_606_) == 0)
{
uint8_t v___x_607_; 
lean_dec(v_i_604_);
v___x_607_ = 1;
return v___x_607_;
}
else
{
lean_object* v_head_608_; lean_object* v_tail_609_; lean_object* v_dmin_610_; lean_object* v___x_611_; lean_object* v___x_612_; lean_object* v___x_613_; lean_object* v___x_614_; lean_object* v___x_615_; uint8_t v___x_616_; 
v_head_608_ = lean_ctor_get(v_x_606_, 0);
lean_inc_n(v_head_608_, 2);
v_tail_609_ = lean_ctor_get(v_x_606_, 1);
lean_inc(v_tail_609_);
lean_dec_ref_known(v_x_606_, 2);
v_dmin_610_ = lean_ctor_get(v_c_602_, 1);
lean_inc_n(v_i_604_, 2);
v___x_611_ = lp_choreo_Choreo_State_at(v_s_603_, v_i_604_);
v___x_612_ = lp_choreo_Choreo_State_at(v_s_603_, v_head_608_);
v___x_613_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1, &lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1);
v___x_614_ = l_List_getD___redArg(v_ds_605_, v_i_604_, v___x_613_);
v___x_615_ = l_List_getD___redArg(v_ds_605_, v_head_608_, v___x_613_);
v___x_616_ = lp_choreo_Choreo_slidePairOk(v_dmin_610_, v___x_611_, v___x_612_, v___x_614_, v___x_615_);
lean_dec(v___x_615_);
lean_dec(v___x_614_);
lean_dec_ref(v___x_612_);
lean_dec_ref(v___x_611_);
if (v___x_616_ == 0)
{
lean_dec(v_tail_609_);
lean_dec(v_i_604_);
return v___x_616_;
}
else
{
v_x_606_ = v_tail_609_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_slideClear_spec__0___boxed(lean_object* v_c_618_, lean_object* v_s_619_, lean_object* v_i_620_, lean_object* v_ds_621_, lean_object* v_x_622_){
_start:
{
uint8_t v_res_623_; lean_object* v_r_624_; 
v_res_623_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__0(v_c_618_, v_s_619_, v_i_620_, v_ds_621_, v_x_622_);
lean_dec(v_ds_621_);
lean_dec(v_s_619_);
lean_dec_ref(v_c_618_);
v_r_624_ = lean_box(v_res_623_);
return v_r_624_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_slideClear_spec__1(lean_object* v_c_625_, lean_object* v_s_626_, lean_object* v_ds_627_, lean_object* v_x_628_){
_start:
{
if (lean_obj_tag(v_x_628_) == 0)
{
uint8_t v___x_629_; 
v___x_629_ = 1;
return v___x_629_;
}
else
{
lean_object* v_head_630_; lean_object* v_tail_631_; lean_object* v___x_632_; uint8_t v___x_633_; 
v_head_630_ = lean_ctor_get(v_x_628_, 0);
lean_inc_n(v_head_630_, 2);
v_tail_631_ = lean_ctor_get(v_x_628_, 1);
lean_inc(v_tail_631_);
lean_dec_ref_known(v_x_628_, 2);
v___x_632_ = l_List_range(v_head_630_);
v___x_633_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__0(v_c_625_, v_s_626_, v_head_630_, v_ds_627_, v___x_632_);
if (v___x_633_ == 0)
{
lean_dec(v_tail_631_);
return v___x_633_;
}
else
{
v_x_628_ = v_tail_631_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_slideClear_spec__1___boxed(lean_object* v_c_635_, lean_object* v_s_636_, lean_object* v_ds_637_, lean_object* v_x_638_){
_start:
{
uint8_t v_res_639_; lean_object* v_r_640_; 
v_res_639_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__1(v_c_635_, v_s_636_, v_ds_637_, v_x_638_);
lean_dec(v_ds_637_);
lean_dec(v_s_636_);
lean_dec_ref(v_c_635_);
v_r_640_ = lean_box(v_res_639_);
return v_r_640_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_slideClear(lean_object* v_c_641_, lean_object* v_s_642_, lean_object* v_ds_643_){
_start:
{
lean_object* v_n_644_; lean_object* v___x_645_; uint8_t v___x_646_; 
v_n_644_ = lean_ctor_get(v_c_641_, 0);
lean_inc(v_n_644_);
v___x_645_ = l_List_range(v_n_644_);
v___x_646_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__1(v_c_641_, v_s_642_, v_ds_643_, v___x_645_);
lean_dec_ref(v_c_641_);
return v___x_646_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_slideClear___boxed(lean_object* v_c_647_, lean_object* v_s_648_, lean_object* v_ds_649_){
_start:
{
uint8_t v_res_650_; lean_object* v_r_651_; 
v_res_650_ = lp_choreo_Choreo_slideClear(v_c_647_, v_s_648_, v_ds_649_);
lean_dec(v_ds_649_);
lean_dec(v_s_648_);
v_r_651_ = lean_box(v_res_650_);
return v_r_651_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(lean_object* v_ph_652_, lean_object* v_i_653_, lean_object* v_c_654_, lean_object* v_s_655_, lean_object* v_line_656_, lean_object* v_target_657_, lean_object* v_right_658_, lean_object* v_left_659_, lean_object* v_x_660_){
_start:
{
if (lean_obj_tag(v_x_660_) == 0)
{
uint8_t v___x_661_; 
lean_dec(v_i_653_);
v___x_661_ = 1;
return v___x_661_;
}
else
{
lean_object* v_head_662_; lean_object* v_tail_663_; uint8_t v___y_665_; uint8_t v___y_674_; uint8_t v___y_690_; uint8_t v___x_707_; uint8_t v___y_709_; uint8_t v___y_712_; 
v_head_662_ = lean_ctor_get(v_x_660_, 0);
lean_inc(v_head_662_);
v_tail_663_ = lean_ctor_get(v_x_660_, 1);
lean_inc(v_tail_663_);
lean_dec_ref_known(v_x_660_, 2);
v___x_707_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_653_, v_left_659_);
if (v___x_707_ == 0)
{
v___y_712_ = v___x_707_;
goto v___jp_711_;
}
else
{
uint8_t v___x_715_; 
v___x_715_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_662_, v_left_659_);
v___y_712_ = v___x_715_;
goto v___jp_711_;
}
v___jp_664_:
{
if (v___y_665_ == 0)
{
lean_dec(v_tail_663_);
lean_dec(v_i_653_);
return v___y_665_;
}
else
{
v_x_660_ = v_tail_663_;
goto _start;
}
}
v___jp_667_:
{
lean_object* v_dmin_668_; lean_object* v___x_669_; lean_object* v___x_670_; lean_object* v___x_671_; uint8_t v___x_672_; 
v_dmin_668_ = lean_ctor_get(v_c_654_, 1);
v___x_669_ = lp_choreo_Choreo_Phase_pairCert(v_ph_652_, v_i_653_, v_head_662_);
lean_inc(v_i_653_);
v___x_670_ = lp_choreo_Choreo_Phase_path(v_ph_652_, v_i_653_);
v___x_671_ = lp_choreo_Choreo_Phase_path(v_ph_652_, v_head_662_);
v___x_672_ = lp_choreo_Choreo_Cert_check(v___x_669_, v___x_670_, v___x_671_, v_dmin_668_);
v___y_665_ = v___x_672_;
goto v___jp_664_;
}
v___jp_673_:
{
if (v___y_674_ == 0)
{
lean_dec(v_tail_663_);
lean_dec(v_head_662_);
lean_dec(v_i_653_);
return v___y_674_;
}
else
{
lean_object* v___x_675_; lean_object* v_x_676_; uint8_t v___x_677_; 
lean_inc(v_head_662_);
v___x_675_ = lp_choreo_Choreo_State_at(v_s_655_, v_head_662_);
v_x_676_ = lean_ctor_get(v___x_675_, 0);
lean_inc(v_x_676_);
lean_dec_ref(v___x_675_);
v___x_677_ = lean_int_dec_le(v_x_676_, v_line_656_);
lean_dec(v_x_676_);
if (v___x_677_ == 0)
{
lean_dec(v_tail_663_);
lean_dec(v_head_662_);
lean_dec(v_i_653_);
return v___x_677_;
}
else
{
lean_object* v___x_678_; lean_object* v_x_679_; uint8_t v___x_680_; 
v___x_678_ = lp_choreo_Choreo_State_at(v_target_657_, v_head_662_);
v_x_679_ = lean_ctor_get(v___x_678_, 0);
lean_inc(v_x_679_);
lean_dec_ref(v___x_678_);
v___x_680_ = lean_int_dec_le(v_x_679_, v_line_656_);
lean_dec(v_x_679_);
if (v___x_680_ == 0)
{
lean_dec(v_tail_663_);
lean_dec(v_i_653_);
return v___x_680_;
}
else
{
lean_object* v_dmin_681_; lean_object* v___x_682_; lean_object* v_x_683_; lean_object* v___x_684_; uint8_t v___x_685_; 
v_dmin_681_ = lean_ctor_get(v_c_654_, 1);
lean_inc(v_i_653_);
v___x_682_ = lp_choreo_Choreo_State_at(v_s_655_, v_i_653_);
v_x_683_ = lean_ctor_get(v___x_682_, 0);
lean_inc(v_x_683_);
lean_dec_ref(v___x_682_);
v___x_684_ = lean_int_add(v_line_656_, v_dmin_681_);
v___x_685_ = lean_int_dec_le(v___x_684_, v_x_683_);
lean_dec(v_x_683_);
if (v___x_685_ == 0)
{
lean_dec(v___x_684_);
lean_dec(v_tail_663_);
lean_dec(v_i_653_);
return v___x_685_;
}
else
{
lean_object* v___x_686_; lean_object* v_x_687_; uint8_t v___x_688_; 
lean_inc(v_i_653_);
v___x_686_ = lp_choreo_Choreo_State_at(v_target_657_, v_i_653_);
v_x_687_ = lean_ctor_get(v___x_686_, 0);
lean_inc(v_x_687_);
lean_dec_ref(v___x_686_);
v___x_688_ = lean_int_dec_le(v___x_684_, v_x_687_);
lean_dec(v_x_687_);
lean_dec(v___x_684_);
v___y_665_ = v___x_688_;
goto v___jp_664_;
}
}
}
}
}
v___jp_689_:
{
if (v___y_690_ == 0)
{
uint8_t v___x_691_; 
v___x_691_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_653_, v_right_658_);
if (v___x_691_ == 0)
{
v___y_674_ = v___x_691_;
goto v___jp_673_;
}
else
{
uint8_t v___x_692_; 
v___x_692_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_662_, v_left_659_);
v___y_674_ = v___x_692_;
goto v___jp_673_;
}
}
else
{
lean_object* v___x_693_; lean_object* v_x_694_; uint8_t v___x_695_; 
lean_inc(v_i_653_);
v___x_693_ = lp_choreo_Choreo_State_at(v_s_655_, v_i_653_);
v_x_694_ = lean_ctor_get(v___x_693_, 0);
lean_inc(v_x_694_);
lean_dec_ref(v___x_693_);
v___x_695_ = lean_int_dec_le(v_x_694_, v_line_656_);
lean_dec(v_x_694_);
if (v___x_695_ == 0)
{
lean_dec(v_tail_663_);
lean_dec(v_head_662_);
lean_dec(v_i_653_);
return v___x_695_;
}
else
{
lean_object* v___x_696_; lean_object* v_x_697_; uint8_t v___x_698_; 
lean_inc(v_i_653_);
v___x_696_ = lp_choreo_Choreo_State_at(v_target_657_, v_i_653_);
v_x_697_ = lean_ctor_get(v___x_696_, 0);
lean_inc(v_x_697_);
lean_dec_ref(v___x_696_);
v___x_698_ = lean_int_dec_le(v_x_697_, v_line_656_);
lean_dec(v_x_697_);
if (v___x_698_ == 0)
{
lean_dec(v_tail_663_);
lean_dec(v_head_662_);
lean_dec(v_i_653_);
return v___x_698_;
}
else
{
lean_object* v_dmin_699_; lean_object* v___x_700_; lean_object* v_x_701_; lean_object* v___x_702_; uint8_t v___x_703_; 
v_dmin_699_ = lean_ctor_get(v_c_654_, 1);
lean_inc(v_head_662_);
v___x_700_ = lp_choreo_Choreo_State_at(v_s_655_, v_head_662_);
v_x_701_ = lean_ctor_get(v___x_700_, 0);
lean_inc(v_x_701_);
lean_dec_ref(v___x_700_);
v___x_702_ = lean_int_add(v_line_656_, v_dmin_699_);
v___x_703_ = lean_int_dec_le(v___x_702_, v_x_701_);
lean_dec(v_x_701_);
if (v___x_703_ == 0)
{
lean_dec(v___x_702_);
lean_dec(v_tail_663_);
lean_dec(v_head_662_);
lean_dec(v_i_653_);
return v___x_703_;
}
else
{
lean_object* v___x_704_; lean_object* v_x_705_; uint8_t v___x_706_; 
v___x_704_ = lp_choreo_Choreo_State_at(v_target_657_, v_head_662_);
v_x_705_ = lean_ctor_get(v___x_704_, 0);
lean_inc(v_x_705_);
lean_dec_ref(v___x_704_);
v___x_706_ = lean_int_dec_le(v___x_702_, v_x_705_);
lean_dec(v_x_705_);
lean_dec(v___x_702_);
v___y_665_ = v___x_706_;
goto v___jp_664_;
}
}
}
}
}
v___jp_708_:
{
if (v___y_709_ == 0)
{
if (v___x_707_ == 0)
{
v___y_690_ = v___x_707_;
goto v___jp_689_;
}
else
{
uint8_t v___x_710_; 
v___x_710_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_662_, v_right_658_);
v___y_690_ = v___x_710_;
goto v___jp_689_;
}
}
else
{
goto v___jp_667_;
}
}
v___jp_711_:
{
if (v___y_712_ == 0)
{
uint8_t v___x_713_; 
v___x_713_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_653_, v_right_658_);
if (v___x_713_ == 0)
{
v___y_709_ = v___x_713_;
goto v___jp_708_;
}
else
{
uint8_t v___x_714_; 
v___x_714_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_662_, v_right_658_);
v___y_709_ = v___x_714_;
goto v___jp_708_;
}
}
else
{
goto v___jp_667_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0___boxed(lean_object* v_ph_716_, lean_object* v_i_717_, lean_object* v_c_718_, lean_object* v_s_719_, lean_object* v_line_720_, lean_object* v_target_721_, lean_object* v_right_722_, lean_object* v_left_723_, lean_object* v_x_724_){
_start:
{
uint8_t v_res_725_; lean_object* v_r_726_; 
v_res_725_ = lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(v_ph_716_, v_i_717_, v_c_718_, v_s_719_, v_line_720_, v_target_721_, v_right_722_, v_left_723_, v_x_724_);
lean_dec(v_left_723_);
lean_dec(v_right_722_);
lean_dec(v_target_721_);
lean_dec(v_line_720_);
lean_dec(v_s_719_);
lean_dec_ref(v_c_718_);
lean_dec_ref(v_ph_716_);
v_r_726_ = lean_box(v_res_725_);
return v_r_726_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__0(lean_object* v_left_727_, lean_object* v_ph_728_, lean_object* v_i_729_, lean_object* v_c_730_, lean_object* v_s_731_, lean_object* v_line_732_, lean_object* v_target_733_, lean_object* v_right_734_, lean_object* v_x_735_){
_start:
{
if (lean_obj_tag(v_x_735_) == 0)
{
uint8_t v___x_736_; 
lean_dec(v_i_729_);
v___x_736_ = 1;
return v___x_736_;
}
else
{
lean_object* v_head_737_; lean_object* v_tail_738_; uint8_t v___y_740_; uint8_t v___y_749_; uint8_t v___y_765_; uint8_t v___x_782_; uint8_t v___y_784_; uint8_t v___y_787_; 
v_head_737_ = lean_ctor_get(v_x_735_, 0);
lean_inc(v_head_737_);
v_tail_738_ = lean_ctor_get(v_x_735_, 1);
lean_inc(v_tail_738_);
lean_dec_ref_known(v_x_735_, 2);
v___x_782_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_729_, v_left_727_);
if (v___x_782_ == 0)
{
v___y_787_ = v___x_782_;
goto v___jp_786_;
}
else
{
uint8_t v___x_790_; 
v___x_790_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_737_, v_left_727_);
v___y_787_ = v___x_790_;
goto v___jp_786_;
}
v___jp_739_:
{
if (v___y_740_ == 0)
{
lean_dec(v_tail_738_);
lean_dec(v_i_729_);
return v___y_740_;
}
else
{
uint8_t v___x_741_; 
v___x_741_ = lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(v_ph_728_, v_i_729_, v_c_730_, v_s_731_, v_line_732_, v_target_733_, v_right_734_, v_left_727_, v_tail_738_);
return v___x_741_;
}
}
v___jp_742_:
{
lean_object* v_dmin_743_; lean_object* v___x_744_; lean_object* v___x_745_; lean_object* v___x_746_; uint8_t v___x_747_; 
v_dmin_743_ = lean_ctor_get(v_c_730_, 1);
v___x_744_ = lp_choreo_Choreo_Phase_pairCert(v_ph_728_, v_i_729_, v_head_737_);
lean_inc(v_i_729_);
v___x_745_ = lp_choreo_Choreo_Phase_path(v_ph_728_, v_i_729_);
v___x_746_ = lp_choreo_Choreo_Phase_path(v_ph_728_, v_head_737_);
v___x_747_ = lp_choreo_Choreo_Cert_check(v___x_744_, v___x_745_, v___x_746_, v_dmin_743_);
v___y_740_ = v___x_747_;
goto v___jp_739_;
}
v___jp_748_:
{
if (v___y_749_ == 0)
{
lean_dec(v_tail_738_);
lean_dec(v_head_737_);
lean_dec(v_i_729_);
return v___y_749_;
}
else
{
lean_object* v___x_750_; lean_object* v_x_751_; uint8_t v___x_752_; 
lean_inc(v_head_737_);
v___x_750_ = lp_choreo_Choreo_State_at(v_s_731_, v_head_737_);
v_x_751_ = lean_ctor_get(v___x_750_, 0);
lean_inc(v_x_751_);
lean_dec_ref(v___x_750_);
v___x_752_ = lean_int_dec_le(v_x_751_, v_line_732_);
lean_dec(v_x_751_);
if (v___x_752_ == 0)
{
lean_dec(v_tail_738_);
lean_dec(v_head_737_);
lean_dec(v_i_729_);
return v___x_752_;
}
else
{
lean_object* v___x_753_; lean_object* v_x_754_; uint8_t v___x_755_; 
v___x_753_ = lp_choreo_Choreo_State_at(v_target_733_, v_head_737_);
v_x_754_ = lean_ctor_get(v___x_753_, 0);
lean_inc(v_x_754_);
lean_dec_ref(v___x_753_);
v___x_755_ = lean_int_dec_le(v_x_754_, v_line_732_);
lean_dec(v_x_754_);
if (v___x_755_ == 0)
{
lean_dec(v_tail_738_);
lean_dec(v_i_729_);
return v___x_755_;
}
else
{
lean_object* v_dmin_756_; lean_object* v___x_757_; lean_object* v_x_758_; lean_object* v___x_759_; uint8_t v___x_760_; 
v_dmin_756_ = lean_ctor_get(v_c_730_, 1);
lean_inc(v_i_729_);
v___x_757_ = lp_choreo_Choreo_State_at(v_s_731_, v_i_729_);
v_x_758_ = lean_ctor_get(v___x_757_, 0);
lean_inc(v_x_758_);
lean_dec_ref(v___x_757_);
v___x_759_ = lean_int_add(v_line_732_, v_dmin_756_);
v___x_760_ = lean_int_dec_le(v___x_759_, v_x_758_);
lean_dec(v_x_758_);
if (v___x_760_ == 0)
{
lean_dec(v___x_759_);
lean_dec(v_tail_738_);
lean_dec(v_i_729_);
return v___x_760_;
}
else
{
lean_object* v___x_761_; lean_object* v_x_762_; uint8_t v___x_763_; 
lean_inc(v_i_729_);
v___x_761_ = lp_choreo_Choreo_State_at(v_target_733_, v_i_729_);
v_x_762_ = lean_ctor_get(v___x_761_, 0);
lean_inc(v_x_762_);
lean_dec_ref(v___x_761_);
v___x_763_ = lean_int_dec_le(v___x_759_, v_x_762_);
lean_dec(v_x_762_);
lean_dec(v___x_759_);
v___y_740_ = v___x_763_;
goto v___jp_739_;
}
}
}
}
}
v___jp_764_:
{
if (v___y_765_ == 0)
{
uint8_t v___x_766_; 
v___x_766_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_729_, v_right_734_);
if (v___x_766_ == 0)
{
v___y_749_ = v___x_766_;
goto v___jp_748_;
}
else
{
uint8_t v___x_767_; 
v___x_767_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_737_, v_left_727_);
v___y_749_ = v___x_767_;
goto v___jp_748_;
}
}
else
{
lean_object* v___x_768_; lean_object* v_x_769_; uint8_t v___x_770_; 
lean_inc(v_i_729_);
v___x_768_ = lp_choreo_Choreo_State_at(v_s_731_, v_i_729_);
v_x_769_ = lean_ctor_get(v___x_768_, 0);
lean_inc(v_x_769_);
lean_dec_ref(v___x_768_);
v___x_770_ = lean_int_dec_le(v_x_769_, v_line_732_);
lean_dec(v_x_769_);
if (v___x_770_ == 0)
{
lean_dec(v_tail_738_);
lean_dec(v_head_737_);
lean_dec(v_i_729_);
return v___x_770_;
}
else
{
lean_object* v___x_771_; lean_object* v_x_772_; uint8_t v___x_773_; 
lean_inc(v_i_729_);
v___x_771_ = lp_choreo_Choreo_State_at(v_target_733_, v_i_729_);
v_x_772_ = lean_ctor_get(v___x_771_, 0);
lean_inc(v_x_772_);
lean_dec_ref(v___x_771_);
v___x_773_ = lean_int_dec_le(v_x_772_, v_line_732_);
lean_dec(v_x_772_);
if (v___x_773_ == 0)
{
lean_dec(v_tail_738_);
lean_dec(v_head_737_);
lean_dec(v_i_729_);
return v___x_773_;
}
else
{
lean_object* v_dmin_774_; lean_object* v___x_775_; lean_object* v_x_776_; lean_object* v___x_777_; uint8_t v___x_778_; 
v_dmin_774_ = lean_ctor_get(v_c_730_, 1);
lean_inc(v_head_737_);
v___x_775_ = lp_choreo_Choreo_State_at(v_s_731_, v_head_737_);
v_x_776_ = lean_ctor_get(v___x_775_, 0);
lean_inc(v_x_776_);
lean_dec_ref(v___x_775_);
v___x_777_ = lean_int_add(v_line_732_, v_dmin_774_);
v___x_778_ = lean_int_dec_le(v___x_777_, v_x_776_);
lean_dec(v_x_776_);
if (v___x_778_ == 0)
{
lean_dec(v___x_777_);
lean_dec(v_tail_738_);
lean_dec(v_head_737_);
lean_dec(v_i_729_);
return v___x_778_;
}
else
{
lean_object* v___x_779_; lean_object* v_x_780_; uint8_t v___x_781_; 
v___x_779_ = lp_choreo_Choreo_State_at(v_target_733_, v_head_737_);
v_x_780_ = lean_ctor_get(v___x_779_, 0);
lean_inc(v_x_780_);
lean_dec_ref(v___x_779_);
v___x_781_ = lean_int_dec_le(v___x_777_, v_x_780_);
lean_dec(v_x_780_);
lean_dec(v___x_777_);
v___y_740_ = v___x_781_;
goto v___jp_739_;
}
}
}
}
}
v___jp_783_:
{
if (v___y_784_ == 0)
{
if (v___x_782_ == 0)
{
v___y_765_ = v___x_782_;
goto v___jp_764_;
}
else
{
uint8_t v___x_785_; 
v___x_785_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_737_, v_right_734_);
v___y_765_ = v___x_785_;
goto v___jp_764_;
}
}
else
{
goto v___jp_742_;
}
}
v___jp_786_:
{
if (v___y_787_ == 0)
{
uint8_t v___x_788_; 
v___x_788_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_729_, v_right_734_);
if (v___x_788_ == 0)
{
v___y_784_ = v___x_788_;
goto v___jp_783_;
}
else
{
uint8_t v___x_789_; 
v___x_789_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_737_, v_right_734_);
v___y_784_ = v___x_789_;
goto v___jp_783_;
}
}
else
{
goto v___jp_742_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__0___boxed(lean_object* v_left_791_, lean_object* v_ph_792_, lean_object* v_i_793_, lean_object* v_c_794_, lean_object* v_s_795_, lean_object* v_line_796_, lean_object* v_target_797_, lean_object* v_right_798_, lean_object* v_x_799_){
_start:
{
uint8_t v_res_800_; lean_object* v_r_801_; 
v_res_800_ = lp_choreo_List_all___at___00Choreo_parClear_spec__0(v_left_791_, v_ph_792_, v_i_793_, v_c_794_, v_s_795_, v_line_796_, v_target_797_, v_right_798_, v_x_799_);
lean_dec(v_right_798_);
lean_dec(v_target_797_);
lean_dec(v_line_796_);
lean_dec(v_s_795_);
lean_dec_ref(v_c_794_);
lean_dec_ref(v_ph_792_);
lean_dec(v_left_791_);
v_r_801_ = lean_box(v_res_800_);
return v_r_801_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__1(lean_object* v_left_802_, lean_object* v_ph_803_, lean_object* v_c_804_, lean_object* v_s_805_, lean_object* v_line_806_, lean_object* v_target_807_, lean_object* v_right_808_, lean_object* v_x_809_){
_start:
{
if (lean_obj_tag(v_x_809_) == 0)
{
uint8_t v___x_810_; 
v___x_810_ = 1;
return v___x_810_;
}
else
{
lean_object* v_head_811_; lean_object* v_tail_812_; lean_object* v___x_813_; uint8_t v___x_814_; 
v_head_811_ = lean_ctor_get(v_x_809_, 0);
lean_inc_n(v_head_811_, 2);
v_tail_812_ = lean_ctor_get(v_x_809_, 1);
lean_inc(v_tail_812_);
lean_dec_ref_known(v_x_809_, 2);
v___x_813_ = l_List_range(v_head_811_);
v___x_814_ = lp_choreo_List_all___at___00Choreo_parClear_spec__0(v_left_802_, v_ph_803_, v_head_811_, v_c_804_, v_s_805_, v_line_806_, v_target_807_, v_right_808_, v___x_813_);
if (v___x_814_ == 0)
{
lean_dec(v_tail_812_);
return v___x_814_;
}
else
{
v_x_809_ = v_tail_812_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__1___boxed(lean_object* v_left_816_, lean_object* v_ph_817_, lean_object* v_c_818_, lean_object* v_s_819_, lean_object* v_line_820_, lean_object* v_target_821_, lean_object* v_right_822_, lean_object* v_x_823_){
_start:
{
uint8_t v_res_824_; lean_object* v_r_825_; 
v_res_824_ = lp_choreo_List_all___at___00Choreo_parClear_spec__1(v_left_816_, v_ph_817_, v_c_818_, v_s_819_, v_line_820_, v_target_821_, v_right_822_, v_x_823_);
lean_dec(v_right_822_);
lean_dec(v_target_821_);
lean_dec(v_line_820_);
lean_dec(v_s_819_);
lean_dec_ref(v_c_818_);
lean_dec_ref(v_ph_817_);
lean_dec(v_left_816_);
v_r_825_ = lean_box(v_res_824_);
return v_r_825_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_parClear(lean_object* v_c_826_, lean_object* v_ph_827_, lean_object* v_left_828_, lean_object* v_right_829_, lean_object* v_line_830_, lean_object* v_s_831_, lean_object* v_target_832_){
_start:
{
lean_object* v_n_833_; lean_object* v___x_834_; uint8_t v___x_835_; 
v_n_833_ = lean_ctor_get(v_c_826_, 0);
lean_inc(v_n_833_);
v___x_834_ = l_List_range(v_n_833_);
v___x_835_ = lp_choreo_List_all___at___00Choreo_parClear_spec__1(v_left_828_, v_ph_827_, v_c_826_, v_s_831_, v_line_830_, v_target_832_, v_right_829_, v___x_834_);
lean_dec_ref(v_c_826_);
return v___x_835_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_parClear___boxed(lean_object* v_c_836_, lean_object* v_ph_837_, lean_object* v_left_838_, lean_object* v_right_839_, lean_object* v_line_840_, lean_object* v_s_841_, lean_object* v_target_842_){
_start:
{
uint8_t v_res_843_; lean_object* v_r_844_; 
v_res_843_ = lp_choreo_Choreo_parClear(v_c_836_, v_ph_837_, v_left_838_, v_right_839_, v_line_840_, v_s_841_, v_target_842_);
lean_dec(v_target_842_);
lean_dec(v_s_841_);
lean_dec(v_line_840_);
lean_dec(v_right_839_);
lean_dec(v_left_838_);
lean_dec_ref(v_ph_837_);
v_r_844_ = lean_box(v_res_843_);
return v_r_844_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0(void){
_start:
{
lean_object* v___x_845_; lean_object* v___x_846_; 
v___x_845_ = lean_unsigned_to_nat(1u);
v___x_846_ = lean_nat_to_int(v___x_845_);
return v___x_846_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0(lean_object* v_ph_847_, lean_object* v_b_848_, lean_object* v_a_849_, lean_object* v_x_850_){
_start:
{
if (lean_obj_tag(v_x_850_) == 0)
{
uint8_t v___x_851_; 
v___x_851_ = 1;
return v___x_851_;
}
else
{
lean_object* v_head_852_; lean_object* v_tail_853_; uint8_t v___y_855_; lean_object* v___x_864_; uint8_t v___x_865_; 
v_head_852_ = lean_ctor_get(v_x_850_, 0);
lean_inc_n(v_head_852_, 2);
v_tail_853_ = lean_ctor_get(v_x_850_, 1);
lean_inc(v_tail_853_);
lean_dec_ref_known(v_x_850_, 2);
v___x_864_ = lp_choreo_Choreo_Phase_path(v_ph_847_, v_head_852_);
v___x_865_ = lp_choreo_Choreo_Path_wf(v___x_864_);
if (v___x_865_ == 0)
{
lean_dec_ref(v___x_864_);
v___y_855_ = v___x_865_;
goto v___jp_854_;
}
else
{
lean_object* v___x_866_; lean_object* v_x_867_; lean_object* v_y_868_; lean_object* v___x_869_; lean_object* v___x_870_; uint8_t v___x_871_; 
lean_inc(v_head_852_);
v___x_866_ = lp_choreo_Choreo_State_at(v_a_849_, v_head_852_);
v_x_867_ = lean_ctor_get(v___x_866_, 0);
lean_inc(v_x_867_);
v_y_868_ = lean_ctor_get(v___x_866_, 1);
lean_inc(v_y_868_);
lean_dec_ref(v___x_866_);
v___x_869_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0, &lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0);
v___x_870_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_870_, 0, v_x_867_);
lean_ctor_set(v___x_870_, 1, v_y_868_);
lean_ctor_set(v___x_870_, 2, v___x_869_);
v___x_871_ = lp_choreo_Choreo_Path_startsAtSlot(v___x_864_, v___x_870_);
lean_dec_ref_known(v___x_870_, 3);
lean_dec_ref(v___x_864_);
v___y_855_ = v___x_871_;
goto v___jp_854_;
}
v___jp_854_:
{
if (v___y_855_ == 0)
{
lean_dec(v_tail_853_);
lean_dec(v_head_852_);
return v___y_855_;
}
else
{
lean_object* v___x_856_; lean_object* v___x_857_; lean_object* v_x_858_; lean_object* v_y_859_; lean_object* v___x_860_; lean_object* v___x_861_; uint8_t v___x_862_; 
lean_inc(v_head_852_);
v___x_856_ = lp_choreo_Choreo_Phase_path(v_ph_847_, v_head_852_);
v___x_857_ = lp_choreo_Choreo_State_at(v_b_848_, v_head_852_);
v_x_858_ = lean_ctor_get(v___x_857_, 0);
lean_inc(v_x_858_);
v_y_859_ = lean_ctor_get(v___x_857_, 1);
lean_inc(v_y_859_);
lean_dec_ref(v___x_857_);
v___x_860_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0, &lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0);
v___x_861_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_861_, 0, v_x_858_);
lean_ctor_set(v___x_861_, 1, v_y_859_);
lean_ctor_set(v___x_861_, 2, v___x_860_);
v___x_862_ = lp_choreo_Choreo_Path_reachesSlot(v___x_856_, v___x_861_);
lean_dec_ref_known(v___x_861_, 3);
lean_dec_ref(v___x_856_);
if (v___x_862_ == 0)
{
lean_dec(v_tail_853_);
return v___x_862_;
}
else
{
v_x_850_ = v_tail_853_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___boxed(lean_object* v_ph_872_, lean_object* v_b_873_, lean_object* v_a_874_, lean_object* v_x_875_){
_start:
{
uint8_t v_res_876_; lean_object* v_r_877_; 
v_res_876_ = lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0(v_ph_872_, v_b_873_, v_a_874_, v_x_875_);
lean_dec(v_a_874_);
lean_dec(v_b_873_);
lean_dec_ref(v_ph_872_);
v_r_877_ = lean_box(v_res_876_);
return v_r_877_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_endpointsOk(lean_object* v_c_878_, lean_object* v_ph_879_, lean_object* v_a_880_, lean_object* v_b_881_){
_start:
{
lean_object* v_n_882_; lean_object* v___x_883_; uint8_t v___x_884_; 
v_n_882_ = lean_ctor_get(v_c_878_, 0);
lean_inc(v_n_882_);
lean_dec_ref(v_c_878_);
v___x_883_ = l_List_range(v_n_882_);
v___x_884_ = lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0(v_ph_879_, v_b_881_, v_a_880_, v___x_883_);
return v___x_884_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_endpointsOk___boxed(lean_object* v_c_885_, lean_object* v_ph_886_, lean_object* v_a_887_, lean_object* v_b_888_){
_start:
{
uint8_t v_res_889_; lean_object* v_r_890_; 
v_res_889_ = lp_choreo_Choreo_endpointsOk(v_c_885_, v_ph_886_, v_a_887_, v_b_888_);
lean_dec(v_b_888_);
lean_dec(v_a_887_);
lean_dec_ref(v_ph_886_);
v_r_890_ = lean_box(v_res_889_);
return v_r_890_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Op_enabled(lean_object* v_op_891_, lean_object* v_c_892_, lean_object* v_s_893_){
_start:
{
lean_object* v_n_894_; lean_object* v___x_895_; lean_object* v_ph_896_; lean_object* v___x_897_; uint8_t v___x_898_; 
v_n_894_ = lean_ctor_get(v_c_892_, 0);
v___x_895_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_c_892_, 2);
lean_inc_ref_n(v_op_891_, 2);
v_ph_896_ = lp_choreo_Choreo_Op_phase(v_op_891_, v_c_892_, v___x_895_, v_s_893_);
lean_inc(v_n_894_);
v___x_897_ = lp_choreo_Choreo_Op_next(v_op_891_, v_n_894_, v_s_893_);
v___x_898_ = lp_choreo_Choreo_endpointsOk(v_c_892_, v_ph_896_, v_s_893_, v___x_897_);
lean_dec(v___x_897_);
if (v___x_898_ == 0)
{
lean_dec_ref(v_ph_896_);
lean_dec_ref(v_c_892_);
lean_dec_ref(v_op_891_);
return v___x_898_;
}
else
{
switch(lean_obj_tag(v_op_891_))
{
case 2:
{
lean_object* v_deltas_899_; uint8_t v___y_901_; uint8_t v___x_903_; 
v_deltas_899_ = lean_ctor_get(v_op_891_, 0);
lean_inc(v_deltas_899_);
lean_dec_ref_known(v_op_891_, 2);
v___x_903_ = lp_choreo_Choreo_Config_wf(v_c_892_);
if (v___x_903_ == 0)
{
lean_dec_ref(v_ph_896_);
v___y_901_ = v___x_903_;
goto v___jp_900_;
}
else
{
uint8_t v___x_904_; 
lean_inc_ref(v_c_892_);
v___x_904_ = lp_choreo_Choreo_Phase_checkPaths(v_c_892_, v_ph_896_);
lean_dec_ref(v_ph_896_);
v___y_901_ = v___x_904_;
goto v___jp_900_;
}
v___jp_900_:
{
if (v___y_901_ == 0)
{
lean_dec(v_deltas_899_);
lean_dec_ref(v_c_892_);
return v___y_901_;
}
else
{
uint8_t v___x_902_; 
v___x_902_ = lp_choreo_Choreo_slideClear(v_c_892_, v_s_893_, v_deltas_899_);
lean_dec(v_deltas_899_);
return v___x_902_;
}
}
}
case 3:
{
lean_object* v_left_905_; lean_object* v_right_906_; lean_object* v_line_907_; lean_object* v_target_908_; uint8_t v___y_910_; uint8_t v___x_912_; 
v_left_905_ = lean_ctor_get(v_op_891_, 0);
lean_inc(v_left_905_);
v_right_906_ = lean_ctor_get(v_op_891_, 1);
lean_inc(v_right_906_);
v_line_907_ = lean_ctor_get(v_op_891_, 2);
lean_inc(v_line_907_);
v_target_908_ = lean_ctor_get(v_op_891_, 3);
lean_inc(v_target_908_);
lean_dec_ref_known(v_op_891_, 6);
v___x_912_ = lp_choreo_Choreo_Config_wf(v_c_892_);
if (v___x_912_ == 0)
{
v___y_910_ = v___x_912_;
goto v___jp_909_;
}
else
{
uint8_t v___x_913_; 
lean_inc_ref(v_c_892_);
v___x_913_ = lp_choreo_Choreo_Phase_checkPaths(v_c_892_, v_ph_896_);
v___y_910_ = v___x_913_;
goto v___jp_909_;
}
v___jp_909_:
{
if (v___y_910_ == 0)
{
lean_dec(v_target_908_);
lean_dec(v_line_907_);
lean_dec(v_right_906_);
lean_dec(v_left_905_);
lean_dec_ref(v_ph_896_);
lean_dec_ref(v_c_892_);
return v___y_910_;
}
else
{
uint8_t v___x_911_; 
v___x_911_ = lp_choreo_Choreo_parClear(v_c_892_, v_ph_896_, v_left_905_, v_right_906_, v_line_907_, v_s_893_, v_target_908_);
lean_dec(v_target_908_);
lean_dec(v_line_907_);
lean_dec(v_right_906_);
lean_dec(v_left_905_);
lean_dec_ref(v_ph_896_);
return v___x_911_;
}
}
}
default: 
{
uint8_t v___x_914_; 
lean_dec_ref(v_op_891_);
v___x_914_ = lp_choreo_Choreo_Phase_check(v_c_892_, v_ph_896_);
return v___x_914_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_enabled___boxed(lean_object* v_op_915_, lean_object* v_c_916_, lean_object* v_s_917_){
_start:
{
uint8_t v_res_918_; lean_object* v_r_919_; 
v_res_918_ = lp_choreo_Choreo_Op_enabled(v_op_915_, v_c_916_, v_s_917_);
lean_dec(v_s_917_);
v_r_919_ = lean_box(v_res_918_);
return v_r_919_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Step_ok(lean_object* v_st_920_, lean_object* v_c_921_, lean_object* v_s_922_){
_start:
{
lean_object* v_op_923_; lean_object* v_requires_924_; lean_object* v_ensures_925_; uint8_t v___y_927_; uint8_t v___x_931_; 
v_op_923_ = lean_ctor_get(v_st_920_, 0);
lean_inc_ref(v_op_923_);
v_requires_924_ = lean_ctor_get(v_st_920_, 1);
lean_inc(v_requires_924_);
v_ensures_925_ = lean_ctor_get(v_st_920_, 2);
lean_inc(v_ensures_925_);
lean_dec_ref(v_st_920_);
v___x_931_ = lp_choreo_Choreo_Pred_holds(v_requires_924_, v_s_922_);
if (v___x_931_ == 0)
{
v___y_927_ = v___x_931_;
goto v___jp_926_;
}
else
{
uint8_t v___x_932_; 
lean_inc_ref(v_c_921_);
lean_inc_ref(v_op_923_);
v___x_932_ = lp_choreo_Choreo_Op_enabled(v_op_923_, v_c_921_, v_s_922_);
v___y_927_ = v___x_932_;
goto v___jp_926_;
}
v___jp_926_:
{
if (v___y_927_ == 0)
{
lean_dec(v_ensures_925_);
lean_dec_ref(v_op_923_);
lean_dec_ref(v_c_921_);
return v___y_927_;
}
else
{
lean_object* v_n_928_; lean_object* v___x_929_; uint8_t v___x_930_; 
v_n_928_ = lean_ctor_get(v_c_921_, 0);
lean_inc(v_n_928_);
lean_dec_ref(v_c_921_);
v___x_929_ = lp_choreo_Choreo_Op_next(v_op_923_, v_n_928_, v_s_922_);
v___x_930_ = lp_choreo_Choreo_Pred_holds(v_ensures_925_, v___x_929_);
lean_dec(v___x_929_);
return v___x_930_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Step_ok___boxed(lean_object* v_st_933_, lean_object* v_c_934_, lean_object* v_s_935_){
_start:
{
uint8_t v_res_936_; lean_object* v_r_937_; 
v_res_936_ = lp_choreo_Choreo_Step_ok(v_st_933_, v_c_934_, v_s_935_);
lean_dec(v_s_935_);
v_r_937_ = lean_box(v_res_936_);
return v_r_937_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_samePhase_spec__0(lean_object* v_a_938_, lean_object* v_b_939_, lean_object* v_x_940_){
_start:
{
if (lean_obj_tag(v_x_940_) == 0)
{
uint8_t v___x_941_; 
v___x_941_ = 1;
return v___x_941_;
}
else
{
lean_object* v_head_942_; lean_object* v_tail_943_; uint8_t v___y_945_; lean_object* v___x_952_; lean_object* v_X_953_; lean_object* v_Y_954_; lean_object* v___x_955_; lean_object* v_X_956_; lean_object* v_Y_957_; uint8_t v___x_958_; 
v_head_942_ = lean_ctor_get(v_x_940_, 0);
lean_inc_n(v_head_942_, 3);
v_tail_943_ = lean_ctor_get(v_x_940_, 1);
lean_inc(v_tail_943_);
lean_dec_ref_known(v_x_940_, 2);
v___x_952_ = lp_choreo_Choreo_Phase_path(v_a_938_, v_head_942_);
v_X_953_ = lean_ctor_get(v___x_952_, 0);
lean_inc(v_X_953_);
v_Y_954_ = lean_ctor_get(v___x_952_, 1);
lean_inc(v_Y_954_);
lean_dec_ref(v___x_952_);
v___x_955_ = lp_choreo_Choreo_Phase_path(v_b_939_, v_head_942_);
v_X_956_ = lean_ctor_get(v___x_955_, 0);
lean_inc(v_X_956_);
v_Y_957_ = lean_ctor_get(v___x_955_, 1);
lean_inc(v_Y_957_);
lean_dec_ref(v___x_955_);
v___x_958_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_X_953_, v_X_956_);
lean_dec(v_X_956_);
lean_dec(v_X_953_);
if (v___x_958_ == 0)
{
lean_dec(v_Y_957_);
lean_dec(v_Y_954_);
v___y_945_ = v___x_958_;
goto v___jp_944_;
}
else
{
uint8_t v___x_959_; 
v___x_959_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_Y_954_, v_Y_957_);
lean_dec(v_Y_957_);
lean_dec(v_Y_954_);
v___y_945_ = v___x_959_;
goto v___jp_944_;
}
v___jp_944_:
{
if (v___y_945_ == 0)
{
lean_dec(v_tail_943_);
lean_dec(v_head_942_);
return v___y_945_;
}
else
{
lean_object* v___x_946_; lean_object* v_W_947_; lean_object* v___x_948_; lean_object* v_W_949_; uint8_t v___x_950_; 
lean_inc(v_head_942_);
v___x_946_ = lp_choreo_Choreo_Phase_path(v_a_938_, v_head_942_);
v_W_947_ = lean_ctor_get(v___x_946_, 2);
lean_inc(v_W_947_);
lean_dec_ref(v___x_946_);
v___x_948_ = lp_choreo_Choreo_Phase_path(v_b_939_, v_head_942_);
v_W_949_ = lean_ctor_get(v___x_948_, 2);
lean_inc(v_W_949_);
lean_dec_ref(v___x_948_);
v___x_950_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_W_947_, v_W_949_);
lean_dec(v_W_949_);
lean_dec(v_W_947_);
if (v___x_950_ == 0)
{
lean_dec(v_tail_943_);
return v___x_950_;
}
else
{
v_x_940_ = v_tail_943_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_samePhase_spec__0___boxed(lean_object* v_a_960_, lean_object* v_b_961_, lean_object* v_x_962_){
_start:
{
uint8_t v_res_963_; lean_object* v_r_964_; 
v_res_963_ = lp_choreo_List_all___at___00Choreo_samePhase_spec__0(v_a_960_, v_b_961_, v_x_962_);
lean_dec_ref(v_b_961_);
lean_dec_ref(v_a_960_);
v_r_964_ = lean_box(v_res_963_);
return v_r_964_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_samePhase(lean_object* v_n_965_, lean_object* v_a_966_, lean_object* v_b_967_){
_start:
{
lean_object* v_t0_968_; lean_object* v_t1_969_; lean_object* v_t0_970_; lean_object* v_t1_971_; uint8_t v___x_972_; 
v_t0_968_ = lean_ctor_get(v_a_966_, 0);
v_t1_969_ = lean_ctor_get(v_a_966_, 1);
v_t0_970_ = lean_ctor_get(v_b_967_, 0);
v_t1_971_ = lean_ctor_get(v_b_967_, 1);
v___x_972_ = lean_nat_dec_eq(v_t0_968_, v_t0_970_);
if (v___x_972_ == 0)
{
lean_dec(v_n_965_);
return v___x_972_;
}
else
{
uint8_t v___x_973_; 
v___x_973_ = lean_nat_dec_eq(v_t1_969_, v_t1_971_);
if (v___x_973_ == 0)
{
lean_dec(v_n_965_);
return v___x_973_;
}
else
{
lean_object* v___x_974_; uint8_t v___x_975_; 
v___x_974_ = l_List_range(v_n_965_);
v___x_975_ = lp_choreo_List_all___at___00Choreo_samePhase_spec__0(v_a_966_, v_b_967_, v___x_974_);
return v___x_975_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_samePhase___boxed(lean_object* v_n_976_, lean_object* v_a_977_, lean_object* v_b_978_){
_start:
{
uint8_t v_res_979_; lean_object* v_r_980_; 
v_res_979_ = lp_choreo_Choreo_samePhase(v_n_976_, v_a_977_, v_b_978_);
lean_dec_ref(v_b_978_);
lean_dec_ref(v_a_977_);
v_r_980_ = lean_box(v_res_979_);
return v_r_980_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_samePhases(lean_object* v_n_981_, lean_object* v_x_982_, lean_object* v_x_983_){
_start:
{
if (lean_obj_tag(v_x_982_) == 0)
{
lean_dec(v_n_981_);
if (lean_obj_tag(v_x_983_) == 0)
{
uint8_t v___x_984_; 
v___x_984_ = 1;
return v___x_984_;
}
else
{
uint8_t v___x_985_; 
v___x_985_ = 0;
return v___x_985_;
}
}
else
{
if (lean_obj_tag(v_x_983_) == 1)
{
lean_object* v_head_986_; lean_object* v_tail_987_; lean_object* v_head_988_; lean_object* v_tail_989_; uint8_t v___x_990_; 
v_head_986_ = lean_ctor_get(v_x_982_, 0);
v_tail_987_ = lean_ctor_get(v_x_982_, 1);
v_head_988_ = lean_ctor_get(v_x_983_, 0);
v_tail_989_ = lean_ctor_get(v_x_983_, 1);
lean_inc(v_n_981_);
v___x_990_ = lp_choreo_Choreo_samePhase(v_n_981_, v_head_986_, v_head_988_);
if (v___x_990_ == 0)
{
lean_dec(v_n_981_);
return v___x_990_;
}
else
{
v_x_982_ = v_tail_987_;
v_x_983_ = v_tail_989_;
goto _start;
}
}
else
{
uint8_t v___x_992_; 
lean_dec(v_n_981_);
v___x_992_ = 0;
return v___x_992_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_samePhases___boxed(lean_object* v_n_993_, lean_object* v_x_994_, lean_object* v_x_995_){
_start:
{
uint8_t v_res_996_; lean_object* v_r_997_; 
v_res_996_ = lp_choreo_Choreo_samePhases(v_n_993_, v_x_994_, v_x_995_);
lean_dec(v_x_995_);
lean_dec(v_x_994_);
v_r_997_ = lean_box(v_res_996_);
return v_r_997_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorIdx(lean_object* v_x_998_){
_start:
{
switch(lean_obj_tag(v_x_998_))
{
case 0:
{
lean_object* v___x_999_; 
v___x_999_ = lean_unsigned_to_nat(0u);
return v___x_999_;
}
case 1:
{
lean_object* v___x_1000_; 
v___x_1000_ = lean_unsigned_to_nat(1u);
return v___x_1000_;
}
case 2:
{
lean_object* v___x_1001_; 
v___x_1001_ = lean_unsigned_to_nat(2u);
return v___x_1001_;
}
default: 
{
lean_object* v___x_1002_; 
v___x_1002_ = lean_unsigned_to_nat(3u);
return v___x_1002_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorIdx___boxed(lean_object* v_x_1003_){
_start:
{
lean_object* v_res_1004_; 
v_res_1004_ = lp_choreo_Choreo_Prog_ctorIdx(v_x_1003_);
lean_dec(v_x_1003_);
return v_res_1004_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim___redArg(lean_object* v_t_1005_, lean_object* v_k_1006_){
_start:
{
switch(lean_obj_tag(v_t_1005_))
{
case 0:
{
return v_k_1006_;
}
case 1:
{
lean_object* v_st_1007_; lean_object* v___x_1008_; 
v_st_1007_ = lean_ctor_get(v_t_1005_, 0);
lean_inc_ref(v_st_1007_);
lean_dec_ref_known(v_t_1005_, 1);
v___x_1008_ = lean_apply_1(v_k_1006_, v_st_1007_);
return v___x_1008_;
}
default: 
{
lean_object* v_a_1009_; lean_object* v_b_1010_; lean_object* v___x_1011_; 
v_a_1009_ = lean_ctor_get(v_t_1005_, 0);
lean_inc(v_a_1009_);
v_b_1010_ = lean_ctor_get(v_t_1005_, 1);
lean_inc(v_b_1010_);
lean_dec(v_t_1005_);
v___x_1011_ = lean_apply_2(v_k_1006_, v_a_1009_, v_b_1010_);
return v___x_1011_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim(lean_object* v_motive_1012_, lean_object* v_ctorIdx_1013_, lean_object* v_t_1014_, lean_object* v_h_1015_, lean_object* v_k_1016_){
_start:
{
lean_object* v___x_1017_; 
v___x_1017_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1014_, v_k_1016_);
return v___x_1017_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim___boxed(lean_object* v_motive_1018_, lean_object* v_ctorIdx_1019_, lean_object* v_t_1020_, lean_object* v_h_1021_, lean_object* v_k_1022_){
_start:
{
lean_object* v_res_1023_; 
v_res_1023_ = lp_choreo_Choreo_Prog_ctorElim(v_motive_1018_, v_ctorIdx_1019_, v_t_1020_, v_h_1021_, v_k_1022_);
lean_dec(v_ctorIdx_1019_);
return v_res_1023_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_skip_elim___redArg(lean_object* v_t_1024_, lean_object* v_skip_1025_){
_start:
{
lean_object* v___x_1026_; 
v___x_1026_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1024_, v_skip_1025_);
return v___x_1026_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_skip_elim(lean_object* v_motive_1027_, lean_object* v_t_1028_, lean_object* v_h_1029_, lean_object* v_skip_1030_){
_start:
{
lean_object* v___x_1031_; 
v___x_1031_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1028_, v_skip_1030_);
return v___x_1031_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_step_elim___redArg(lean_object* v_t_1032_, lean_object* v_step_1033_){
_start:
{
lean_object* v___x_1034_; 
v___x_1034_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1032_, v_step_1033_);
return v___x_1034_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_step_elim(lean_object* v_motive_1035_, lean_object* v_t_1036_, lean_object* v_h_1037_, lean_object* v_step_1038_){
_start:
{
lean_object* v___x_1039_; 
v___x_1039_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1036_, v_step_1038_);
return v___x_1039_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_seq_elim___redArg(lean_object* v_t_1040_, lean_object* v_seq_1041_){
_start:
{
lean_object* v___x_1042_; 
v___x_1042_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1040_, v_seq_1041_);
return v___x_1042_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_seq_elim(lean_object* v_motive_1043_, lean_object* v_t_1044_, lean_object* v_h_1045_, lean_object* v_seq_1046_){
_start:
{
lean_object* v___x_1047_; 
v___x_1047_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1044_, v_seq_1046_);
return v___x_1047_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_rep_elim___redArg(lean_object* v_t_1048_, lean_object* v_rep_1049_){
_start:
{
lean_object* v___x_1050_; 
v___x_1050_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1048_, v_rep_1049_);
return v___x_1050_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_rep_elim(lean_object* v_motive_1051_, lean_object* v_t_1052_, lean_object* v_h_1053_, lean_object* v_rep_1054_){
_start:
{
lean_object* v___x_1055_; 
v___x_1055_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1052_, v_rep_1054_);
return v___x_1055_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_repeatRun(lean_object* v_f_1056_, lean_object* v_x_1057_, lean_object* v_x_1058_, lean_object* v_x_1059_){
_start:
{
lean_object* v_zero_1060_; uint8_t v_isZero_1061_; 
v_zero_1060_ = lean_unsigned_to_nat(0u);
v_isZero_1061_ = lean_nat_dec_eq(v_x_1057_, v_zero_1060_);
if (v_isZero_1061_ == 1)
{
lean_object* v___x_1062_; lean_object* v___x_1063_; lean_object* v___x_1064_; 
lean_dec_ref(v_f_1056_);
v___x_1062_ = lean_box(0);
v___x_1063_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1063_, 0, v_x_1058_);
lean_ctor_set(v___x_1063_, 1, v_x_1059_);
v___x_1064_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1064_, 0, v___x_1062_);
lean_ctor_set(v___x_1064_, 1, v___x_1063_);
return v___x_1064_;
}
else
{
lean_object* v_ra_1065_; lean_object* v_snd_1066_; lean_object* v_fst_1067_; lean_object* v_fst_1068_; lean_object* v_snd_1069_; lean_object* v_one_1070_; lean_object* v_n_1071_; lean_object* v_rb_1072_; lean_object* v_snd_1073_; lean_object* v_fst_1074_; lean_object* v___x_1076_; uint8_t v_isShared_1077_; uint8_t v_isSharedCheck_1091_; 
lean_inc_ref(v_f_1056_);
v_ra_1065_ = lean_apply_2(v_f_1056_, v_x_1058_, v_x_1059_);
v_snd_1066_ = lean_ctor_get(v_ra_1065_, 1);
lean_inc(v_snd_1066_);
v_fst_1067_ = lean_ctor_get(v_ra_1065_, 0);
lean_inc(v_fst_1067_);
lean_dec_ref(v_ra_1065_);
v_fst_1068_ = lean_ctor_get(v_snd_1066_, 0);
lean_inc(v_fst_1068_);
v_snd_1069_ = lean_ctor_get(v_snd_1066_, 1);
lean_inc(v_snd_1069_);
lean_dec(v_snd_1066_);
v_one_1070_ = lean_unsigned_to_nat(1u);
v_n_1071_ = lean_nat_sub(v_x_1057_, v_one_1070_);
v_rb_1072_ = lp_choreo_Choreo_repeatRun(v_f_1056_, v_n_1071_, v_fst_1068_, v_snd_1069_);
lean_dec(v_n_1071_);
v_snd_1073_ = lean_ctor_get(v_rb_1072_, 1);
v_fst_1074_ = lean_ctor_get(v_rb_1072_, 0);
v_isSharedCheck_1091_ = !lean_is_exclusive(v_rb_1072_);
if (v_isSharedCheck_1091_ == 0)
{
v___x_1076_ = v_rb_1072_;
v_isShared_1077_ = v_isSharedCheck_1091_;
goto v_resetjp_1075_;
}
else
{
lean_inc(v_snd_1073_);
lean_inc(v_fst_1074_);
lean_dec(v_rb_1072_);
v___x_1076_ = lean_box(0);
v_isShared_1077_ = v_isSharedCheck_1091_;
goto v_resetjp_1075_;
}
v_resetjp_1075_:
{
lean_object* v_fst_1078_; lean_object* v_snd_1079_; lean_object* v___x_1081_; uint8_t v_isShared_1082_; uint8_t v_isSharedCheck_1090_; 
v_fst_1078_ = lean_ctor_get(v_snd_1073_, 0);
v_snd_1079_ = lean_ctor_get(v_snd_1073_, 1);
v_isSharedCheck_1090_ = !lean_is_exclusive(v_snd_1073_);
if (v_isSharedCheck_1090_ == 0)
{
v___x_1081_ = v_snd_1073_;
v_isShared_1082_ = v_isSharedCheck_1090_;
goto v_resetjp_1080_;
}
else
{
lean_inc(v_snd_1079_);
lean_inc(v_fst_1078_);
lean_dec(v_snd_1073_);
v___x_1081_ = lean_box(0);
v_isShared_1082_ = v_isSharedCheck_1090_;
goto v_resetjp_1080_;
}
v_resetjp_1080_:
{
lean_object* v___x_1083_; lean_object* v___x_1085_; 
v___x_1083_ = l_List_appendTR___redArg(v_fst_1067_, v_fst_1074_);
if (v_isShared_1082_ == 0)
{
v___x_1085_ = v___x_1081_;
goto v_reusejp_1084_;
}
else
{
lean_object* v_reuseFailAlloc_1089_; 
v_reuseFailAlloc_1089_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1089_, 0, v_fst_1078_);
lean_ctor_set(v_reuseFailAlloc_1089_, 1, v_snd_1079_);
v___x_1085_ = v_reuseFailAlloc_1089_;
goto v_reusejp_1084_;
}
v_reusejp_1084_:
{
lean_object* v___x_1087_; 
if (v_isShared_1077_ == 0)
{
lean_ctor_set(v___x_1076_, 1, v___x_1085_);
lean_ctor_set(v___x_1076_, 0, v___x_1083_);
v___x_1087_ = v___x_1076_;
goto v_reusejp_1086_;
}
else
{
lean_object* v_reuseFailAlloc_1088_; 
v_reuseFailAlloc_1088_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1088_, 0, v___x_1083_);
lean_ctor_set(v_reuseFailAlloc_1088_, 1, v___x_1085_);
v___x_1087_ = v_reuseFailAlloc_1088_;
goto v_reusejp_1086_;
}
v_reusejp_1086_:
{
return v___x_1087_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_repeatRun___boxed(lean_object* v_f_1092_, lean_object* v_x_1093_, lean_object* v_x_1094_, lean_object* v_x_1095_){
_start:
{
lean_object* v_res_1096_; 
v_res_1096_ = lp_choreo_Choreo_repeatRun(v_f_1092_, v_x_1093_, v_x_1094_, v_x_1095_);
lean_dec(v_x_1093_);
return v_res_1096_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_exec(lean_object* v_c_1097_, lean_object* v_x_1098_, lean_object* v_x_1099_, lean_object* v_x_1100_){
_start:
{
switch(lean_obj_tag(v_x_1098_))
{
case 0:
{
lean_object* v___x_1101_; lean_object* v___x_1102_; lean_object* v___x_1103_; 
lean_dec_ref(v_c_1097_);
v___x_1101_ = lean_box(0);
v___x_1102_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1102_, 0, v_x_1099_);
lean_ctor_set(v___x_1102_, 1, v_x_1100_);
v___x_1103_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1103_, 0, v___x_1101_);
lean_ctor_set(v___x_1103_, 1, v___x_1102_);
return v___x_1103_;
}
case 1:
{
lean_object* v_st_1104_; lean_object* v_op_1105_; lean_object* v___x_1106_; lean_object* v___x_1107_; lean_object* v___x_1108_; lean_object* v___y_1110_; 
v_st_1104_ = lean_ctor_get(v_x_1098_, 0);
lean_inc_ref(v_st_1104_);
lean_dec_ref_known(v_x_1098_, 1);
v_op_1105_ = lean_ctor_get(v_st_1104_, 0);
lean_inc_ref_n(v_op_1105_, 2);
lean_dec_ref(v_st_1104_);
lean_inc(v_x_1099_);
lean_inc_ref(v_c_1097_);
v___x_1106_ = lp_choreo_Choreo_Op_phase(v_op_1105_, v_c_1097_, v_x_1099_, v_x_1100_);
v___x_1107_ = lean_box(0);
v___x_1108_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1108_, 0, v___x_1106_);
lean_ctor_set(v___x_1108_, 1, v___x_1107_);
if (lean_obj_tag(v_op_1105_) == 3)
{
lean_object* v_beats_1118_; 
v_beats_1118_ = lean_ctor_get(v_op_1105_, 4);
lean_inc(v_beats_1118_);
v___y_1110_ = v_beats_1118_;
goto v___jp_1109_;
}
else
{
lean_object* v_beats_1119_; 
v_beats_1119_ = lean_ctor_get(v_op_1105_, 1);
lean_inc(v_beats_1119_);
v___y_1110_ = v_beats_1119_;
goto v___jp_1109_;
}
v___jp_1109_:
{
lean_object* v_n_1111_; lean_object* v_ticksPerBeat_1112_; lean_object* v___x_1113_; lean_object* v___x_1114_; lean_object* v___x_1115_; lean_object* v___x_1116_; lean_object* v___x_1117_; 
v_n_1111_ = lean_ctor_get(v_c_1097_, 0);
lean_inc(v_n_1111_);
v_ticksPerBeat_1112_ = lean_ctor_get(v_c_1097_, 4);
lean_inc(v_ticksPerBeat_1112_);
lean_dec_ref(v_c_1097_);
v___x_1113_ = lean_nat_mul(v___y_1110_, v_ticksPerBeat_1112_);
lean_dec(v_ticksPerBeat_1112_);
lean_dec(v___y_1110_);
v___x_1114_ = lean_nat_add(v_x_1099_, v___x_1113_);
lean_dec(v___x_1113_);
lean_dec(v_x_1099_);
v___x_1115_ = lp_choreo_Choreo_Op_next(v_op_1105_, v_n_1111_, v_x_1100_);
lean_dec(v_x_1100_);
v___x_1116_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1116_, 0, v___x_1114_);
lean_ctor_set(v___x_1116_, 1, v___x_1115_);
v___x_1117_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1117_, 0, v___x_1108_);
lean_ctor_set(v___x_1117_, 1, v___x_1116_);
return v___x_1117_;
}
}
case 2:
{
lean_object* v_a_1120_; lean_object* v_b_1121_; lean_object* v_ra_1122_; lean_object* v_snd_1123_; lean_object* v_fst_1124_; lean_object* v_fst_1125_; lean_object* v_snd_1126_; lean_object* v_rb_1127_; lean_object* v_snd_1128_; lean_object* v_fst_1129_; lean_object* v___x_1131_; uint8_t v_isShared_1132_; uint8_t v_isSharedCheck_1146_; 
v_a_1120_ = lean_ctor_get(v_x_1098_, 0);
lean_inc(v_a_1120_);
v_b_1121_ = lean_ctor_get(v_x_1098_, 1);
lean_inc(v_b_1121_);
lean_dec_ref_known(v_x_1098_, 2);
lean_inc_ref(v_c_1097_);
v_ra_1122_ = lp_choreo_Choreo_Prog_exec(v_c_1097_, v_a_1120_, v_x_1099_, v_x_1100_);
v_snd_1123_ = lean_ctor_get(v_ra_1122_, 1);
lean_inc(v_snd_1123_);
v_fst_1124_ = lean_ctor_get(v_ra_1122_, 0);
lean_inc(v_fst_1124_);
lean_dec_ref(v_ra_1122_);
v_fst_1125_ = lean_ctor_get(v_snd_1123_, 0);
lean_inc(v_fst_1125_);
v_snd_1126_ = lean_ctor_get(v_snd_1123_, 1);
lean_inc(v_snd_1126_);
lean_dec(v_snd_1123_);
v_rb_1127_ = lp_choreo_Choreo_Prog_exec(v_c_1097_, v_b_1121_, v_fst_1125_, v_snd_1126_);
v_snd_1128_ = lean_ctor_get(v_rb_1127_, 1);
v_fst_1129_ = lean_ctor_get(v_rb_1127_, 0);
v_isSharedCheck_1146_ = !lean_is_exclusive(v_rb_1127_);
if (v_isSharedCheck_1146_ == 0)
{
v___x_1131_ = v_rb_1127_;
v_isShared_1132_ = v_isSharedCheck_1146_;
goto v_resetjp_1130_;
}
else
{
lean_inc(v_snd_1128_);
lean_inc(v_fst_1129_);
lean_dec(v_rb_1127_);
v___x_1131_ = lean_box(0);
v_isShared_1132_ = v_isSharedCheck_1146_;
goto v_resetjp_1130_;
}
v_resetjp_1130_:
{
lean_object* v_fst_1133_; lean_object* v_snd_1134_; lean_object* v___x_1136_; uint8_t v_isShared_1137_; uint8_t v_isSharedCheck_1145_; 
v_fst_1133_ = lean_ctor_get(v_snd_1128_, 0);
v_snd_1134_ = lean_ctor_get(v_snd_1128_, 1);
v_isSharedCheck_1145_ = !lean_is_exclusive(v_snd_1128_);
if (v_isSharedCheck_1145_ == 0)
{
v___x_1136_ = v_snd_1128_;
v_isShared_1137_ = v_isSharedCheck_1145_;
goto v_resetjp_1135_;
}
else
{
lean_inc(v_snd_1134_);
lean_inc(v_fst_1133_);
lean_dec(v_snd_1128_);
v___x_1136_ = lean_box(0);
v_isShared_1137_ = v_isSharedCheck_1145_;
goto v_resetjp_1135_;
}
v_resetjp_1135_:
{
lean_object* v___x_1138_; lean_object* v___x_1140_; 
v___x_1138_ = l_List_appendTR___redArg(v_fst_1124_, v_fst_1129_);
if (v_isShared_1137_ == 0)
{
v___x_1140_ = v___x_1136_;
goto v_reusejp_1139_;
}
else
{
lean_object* v_reuseFailAlloc_1144_; 
v_reuseFailAlloc_1144_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1144_, 0, v_fst_1133_);
lean_ctor_set(v_reuseFailAlloc_1144_, 1, v_snd_1134_);
v___x_1140_ = v_reuseFailAlloc_1144_;
goto v_reusejp_1139_;
}
v_reusejp_1139_:
{
lean_object* v___x_1142_; 
if (v_isShared_1132_ == 0)
{
lean_ctor_set(v___x_1131_, 1, v___x_1140_);
lean_ctor_set(v___x_1131_, 0, v___x_1138_);
v___x_1142_ = v___x_1131_;
goto v_reusejp_1141_;
}
else
{
lean_object* v_reuseFailAlloc_1143_; 
v_reuseFailAlloc_1143_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1143_, 0, v___x_1138_);
lean_ctor_set(v_reuseFailAlloc_1143_, 1, v___x_1140_);
v___x_1142_ = v_reuseFailAlloc_1143_;
goto v_reusejp_1141_;
}
v_reusejp_1141_:
{
return v___x_1142_;
}
}
}
}
}
default: 
{
lean_object* v_k_1147_; lean_object* v_p_1148_; lean_object* v___x_1149_; lean_object* v___x_1150_; 
v_k_1147_ = lean_ctor_get(v_x_1098_, 0);
lean_inc(v_k_1147_);
v_p_1148_ = lean_ctor_get(v_x_1098_, 1);
lean_inc(v_p_1148_);
lean_dec_ref_known(v_x_1098_, 2);
v___x_1149_ = lean_alloc_closure((void*)(lp_choreo_Choreo_Prog_exec), 4, 2);
lean_closure_set(v___x_1149_, 0, v_c_1097_);
lean_closure_set(v___x_1149_, 1, v_p_1148_);
v___x_1150_ = lp_choreo_Choreo_repeatRun(v___x_1149_, v_k_1147_, v_x_1099_, v_x_1100_);
lean_dec(v_k_1147_);
return v___x_1150_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Prog_exec_match__1_splitter___redArg(lean_object* v_x_1151_, lean_object* v_x_1152_, lean_object* v_x_1153_, lean_object* v_h__1_1154_, lean_object* v_h__2_1155_, lean_object* v_h__3_1156_, lean_object* v_h__4_1157_){
_start:
{
switch(lean_obj_tag(v_x_1151_))
{
case 0:
{
lean_object* v___x_1158_; 
lean_dec(v_h__4_1157_);
lean_dec(v_h__3_1156_);
lean_dec(v_h__2_1155_);
v___x_1158_ = lean_apply_2(v_h__1_1154_, v_x_1152_, v_x_1153_);
return v___x_1158_;
}
case 1:
{
lean_object* v_st_1159_; lean_object* v___x_1160_; 
lean_dec(v_h__4_1157_);
lean_dec(v_h__3_1156_);
lean_dec(v_h__1_1154_);
v_st_1159_ = lean_ctor_get(v_x_1151_, 0);
lean_inc_ref(v_st_1159_);
lean_dec_ref_known(v_x_1151_, 1);
v___x_1160_ = lean_apply_3(v_h__2_1155_, v_st_1159_, v_x_1152_, v_x_1153_);
return v___x_1160_;
}
case 2:
{
lean_object* v_a_1161_; lean_object* v_b_1162_; lean_object* v___x_1163_; 
lean_dec(v_h__4_1157_);
lean_dec(v_h__2_1155_);
lean_dec(v_h__1_1154_);
v_a_1161_ = lean_ctor_get(v_x_1151_, 0);
lean_inc(v_a_1161_);
v_b_1162_ = lean_ctor_get(v_x_1151_, 1);
lean_inc(v_b_1162_);
lean_dec_ref_known(v_x_1151_, 2);
v___x_1163_ = lean_apply_4(v_h__3_1156_, v_a_1161_, v_b_1162_, v_x_1152_, v_x_1153_);
return v___x_1163_;
}
default: 
{
lean_object* v_k_1164_; lean_object* v_p_1165_; lean_object* v___x_1166_; 
lean_dec(v_h__3_1156_);
lean_dec(v_h__2_1155_);
lean_dec(v_h__1_1154_);
v_k_1164_ = lean_ctor_get(v_x_1151_, 0);
lean_inc(v_k_1164_);
v_p_1165_ = lean_ctor_get(v_x_1151_, 1);
lean_inc(v_p_1165_);
lean_dec_ref_known(v_x_1151_, 2);
v___x_1166_ = lean_apply_4(v_h__4_1157_, v_k_1164_, v_p_1165_, v_x_1152_, v_x_1153_);
return v___x_1166_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Prog_exec_match__1_splitter(lean_object* v_motive_1167_, lean_object* v_x_1168_, lean_object* v_x_1169_, lean_object* v_x_1170_, lean_object* v_h__1_1171_, lean_object* v_h__2_1172_, lean_object* v_h__3_1173_, lean_object* v_h__4_1174_){
_start:
{
switch(lean_obj_tag(v_x_1168_))
{
case 0:
{
lean_object* v___x_1175_; 
lean_dec(v_h__4_1174_);
lean_dec(v_h__3_1173_);
lean_dec(v_h__2_1172_);
v___x_1175_ = lean_apply_2(v_h__1_1171_, v_x_1169_, v_x_1170_);
return v___x_1175_;
}
case 1:
{
lean_object* v_st_1176_; lean_object* v___x_1177_; 
lean_dec(v_h__4_1174_);
lean_dec(v_h__3_1173_);
lean_dec(v_h__1_1171_);
v_st_1176_ = lean_ctor_get(v_x_1168_, 0);
lean_inc_ref(v_st_1176_);
lean_dec_ref_known(v_x_1168_, 1);
v___x_1177_ = lean_apply_3(v_h__2_1172_, v_st_1176_, v_x_1169_, v_x_1170_);
return v___x_1177_;
}
case 2:
{
lean_object* v_a_1178_; lean_object* v_b_1179_; lean_object* v___x_1180_; 
lean_dec(v_h__4_1174_);
lean_dec(v_h__2_1172_);
lean_dec(v_h__1_1171_);
v_a_1178_ = lean_ctor_get(v_x_1168_, 0);
lean_inc(v_a_1178_);
v_b_1179_ = lean_ctor_get(v_x_1168_, 1);
lean_inc(v_b_1179_);
lean_dec_ref_known(v_x_1168_, 2);
v___x_1180_ = lean_apply_4(v_h__3_1173_, v_a_1178_, v_b_1179_, v_x_1169_, v_x_1170_);
return v___x_1180_;
}
default: 
{
lean_object* v_k_1181_; lean_object* v_p_1182_; lean_object* v___x_1183_; 
lean_dec(v_h__3_1173_);
lean_dec(v_h__2_1172_);
lean_dec(v_h__1_1171_);
v_k_1181_ = lean_ctor_get(v_x_1168_, 0);
lean_inc(v_k_1181_);
v_p_1182_ = lean_ctor_get(v_x_1168_, 1);
lean_inc(v_p_1182_);
lean_dec_ref_known(v_x_1168_, 2);
v___x_1183_ = lean_apply_4(v_h__4_1174_, v_k_1181_, v_p_1182_, v_x_1169_, v_x_1170_);
return v___x_1183_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg(lean_object* v_x_1184_, lean_object* v_x_1185_, lean_object* v_x_1186_, lean_object* v_h__1_1187_, lean_object* v_h__2_1188_){
_start:
{
lean_object* v_zero_1189_; uint8_t v_isZero_1190_; 
v_zero_1189_ = lean_unsigned_to_nat(0u);
v_isZero_1190_ = lean_nat_dec_eq(v_x_1184_, v_zero_1189_);
if (v_isZero_1190_ == 1)
{
lean_object* v___x_1191_; 
lean_dec(v_h__2_1188_);
v___x_1191_ = lean_apply_2(v_h__1_1187_, v_x_1185_, v_x_1186_);
return v___x_1191_;
}
else
{
lean_object* v_one_1192_; lean_object* v_n_1193_; lean_object* v___x_1194_; 
lean_dec(v_h__1_1187_);
v_one_1192_ = lean_unsigned_to_nat(1u);
v_n_1193_ = lean_nat_sub(v_x_1184_, v_one_1192_);
v___x_1194_ = lean_apply_3(v_h__2_1188_, v_n_1193_, v_x_1185_, v_x_1186_);
return v___x_1194_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg___boxed(lean_object* v_x_1195_, lean_object* v_x_1196_, lean_object* v_x_1197_, lean_object* v_h__1_1198_, lean_object* v_h__2_1199_){
_start:
{
lean_object* v_res_1200_; 
v_res_1200_ = lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg(v_x_1195_, v_x_1196_, v_x_1197_, v_h__1_1198_, v_h__2_1199_);
lean_dec(v_x_1195_);
return v_res_1200_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter(lean_object* v_motive_1201_, lean_object* v_x_1202_, lean_object* v_x_1203_, lean_object* v_x_1204_, lean_object* v_h__1_1205_, lean_object* v_h__2_1206_){
_start:
{
lean_object* v_zero_1207_; uint8_t v_isZero_1208_; 
v_zero_1207_ = lean_unsigned_to_nat(0u);
v_isZero_1208_ = lean_nat_dec_eq(v_x_1202_, v_zero_1207_);
if (v_isZero_1208_ == 1)
{
lean_object* v___x_1209_; 
lean_dec(v_h__2_1206_);
v___x_1209_ = lean_apply_2(v_h__1_1205_, v_x_1203_, v_x_1204_);
return v___x_1209_;
}
else
{
lean_object* v_one_1210_; lean_object* v_n_1211_; lean_object* v___x_1212_; 
lean_dec(v_h__1_1205_);
v_one_1210_ = lean_unsigned_to_nat(1u);
v_n_1211_ = lean_nat_sub(v_x_1202_, v_one_1210_);
v___x_1212_ = lean_apply_3(v_h__2_1206_, v_n_1211_, v_x_1203_, v_x_1204_);
return v___x_1212_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___boxed(lean_object* v_motive_1213_, lean_object* v_x_1214_, lean_object* v_x_1215_, lean_object* v_x_1216_, lean_object* v_h__1_1217_, lean_object* v_h__2_1218_){
_start:
{
lean_object* v_res_1219_; 
v_res_1219_ = lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter(v_motive_1213_, v_x_1214_, v_x_1215_, v_x_1216_, v_h__1_1217_, v_h__2_1218_);
lean_dec(v_x_1214_);
return v_res_1219_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_next_match__1_splitter___redArg(lean_object* v_op_1220_, lean_object* v_h__1_1221_, lean_object* v_h__2_1222_, lean_object* v_h__3_1223_, lean_object* v_h__4_1224_){
_start:
{
switch(lean_obj_tag(v_op_1220_))
{
case 0:
{
lean_object* v_target_1225_; lean_object* v_beats_1226_; lean_object* v_certs_1227_; lean_object* v___x_1228_; 
lean_dec(v_h__4_1224_);
lean_dec(v_h__3_1223_);
lean_dec(v_h__2_1222_);
v_target_1225_ = lean_ctor_get(v_op_1220_, 0);
lean_inc(v_target_1225_);
v_beats_1226_ = lean_ctor_get(v_op_1220_, 1);
lean_inc(v_beats_1226_);
v_certs_1227_ = lean_ctor_get(v_op_1220_, 2);
lean_inc(v_certs_1227_);
lean_dec_ref_known(v_op_1220_, 3);
v___x_1228_ = lean_apply_3(v_h__1_1221_, v_target_1225_, v_beats_1226_, v_certs_1227_);
return v___x_1228_;
}
case 1:
{
lean_object* v_centre_1229_; uint8_t v_ccw_1230_; lean_object* v_beats_1231_; lean_object* v_certs_1232_; lean_object* v_orbits_1233_; lean_object* v___x_1234_; lean_object* v___x_1235_; 
lean_dec(v_h__4_1224_);
lean_dec(v_h__2_1222_);
lean_dec(v_h__1_1221_);
v_centre_1229_ = lean_ctor_get(v_op_1220_, 0);
lean_inc_ref(v_centre_1229_);
v_ccw_1230_ = lean_ctor_get_uint8(v_op_1220_, sizeof(void*)*4);
v_beats_1231_ = lean_ctor_get(v_op_1220_, 1);
lean_inc(v_beats_1231_);
v_certs_1232_ = lean_ctor_get(v_op_1220_, 2);
lean_inc(v_certs_1232_);
v_orbits_1233_ = lean_ctor_get(v_op_1220_, 3);
lean_inc(v_orbits_1233_);
lean_dec_ref_known(v_op_1220_, 4);
v___x_1234_ = lean_box(v_ccw_1230_);
v___x_1235_ = lean_apply_5(v_h__3_1223_, v_centre_1229_, v___x_1234_, v_beats_1231_, v_certs_1232_, v_orbits_1233_);
return v___x_1235_;
}
case 2:
{
lean_object* v_deltas_1236_; lean_object* v_beats_1237_; lean_object* v___x_1238_; 
lean_dec(v_h__3_1223_);
lean_dec(v_h__2_1222_);
lean_dec(v_h__1_1221_);
v_deltas_1236_ = lean_ctor_get(v_op_1220_, 0);
lean_inc(v_deltas_1236_);
v_beats_1237_ = lean_ctor_get(v_op_1220_, 1);
lean_inc(v_beats_1237_);
lean_dec_ref_known(v_op_1220_, 2);
v___x_1238_ = lean_apply_2(v_h__4_1224_, v_deltas_1236_, v_beats_1237_);
return v___x_1238_;
}
default: 
{
lean_object* v_left_1239_; lean_object* v_right_1240_; lean_object* v_line_1241_; lean_object* v_target_1242_; lean_object* v_beats_1243_; lean_object* v_certs_1244_; lean_object* v___x_1245_; 
lean_dec(v_h__4_1224_);
lean_dec(v_h__3_1223_);
lean_dec(v_h__1_1221_);
v_left_1239_ = lean_ctor_get(v_op_1220_, 0);
lean_inc(v_left_1239_);
v_right_1240_ = lean_ctor_get(v_op_1220_, 1);
lean_inc(v_right_1240_);
v_line_1241_ = lean_ctor_get(v_op_1220_, 2);
lean_inc(v_line_1241_);
v_target_1242_ = lean_ctor_get(v_op_1220_, 3);
lean_inc(v_target_1242_);
v_beats_1243_ = lean_ctor_get(v_op_1220_, 4);
lean_inc(v_beats_1243_);
v_certs_1244_ = lean_ctor_get(v_op_1220_, 5);
lean_inc(v_certs_1244_);
lean_dec_ref_known(v_op_1220_, 6);
v___x_1245_ = lean_apply_6(v_h__2_1222_, v_left_1239_, v_right_1240_, v_line_1241_, v_target_1242_, v_beats_1243_, v_certs_1244_);
return v___x_1245_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_next_match__1_splitter(lean_object* v_motive_1246_, lean_object* v_op_1247_, lean_object* v_h__1_1248_, lean_object* v_h__2_1249_, lean_object* v_h__3_1250_, lean_object* v_h__4_1251_){
_start:
{
switch(lean_obj_tag(v_op_1247_))
{
case 0:
{
lean_object* v_target_1252_; lean_object* v_beats_1253_; lean_object* v_certs_1254_; lean_object* v___x_1255_; 
lean_dec(v_h__4_1251_);
lean_dec(v_h__3_1250_);
lean_dec(v_h__2_1249_);
v_target_1252_ = lean_ctor_get(v_op_1247_, 0);
lean_inc(v_target_1252_);
v_beats_1253_ = lean_ctor_get(v_op_1247_, 1);
lean_inc(v_beats_1253_);
v_certs_1254_ = lean_ctor_get(v_op_1247_, 2);
lean_inc(v_certs_1254_);
lean_dec_ref_known(v_op_1247_, 3);
v___x_1255_ = lean_apply_3(v_h__1_1248_, v_target_1252_, v_beats_1253_, v_certs_1254_);
return v___x_1255_;
}
case 1:
{
lean_object* v_centre_1256_; uint8_t v_ccw_1257_; lean_object* v_beats_1258_; lean_object* v_certs_1259_; lean_object* v_orbits_1260_; lean_object* v___x_1261_; lean_object* v___x_1262_; 
lean_dec(v_h__4_1251_);
lean_dec(v_h__2_1249_);
lean_dec(v_h__1_1248_);
v_centre_1256_ = lean_ctor_get(v_op_1247_, 0);
lean_inc_ref(v_centre_1256_);
v_ccw_1257_ = lean_ctor_get_uint8(v_op_1247_, sizeof(void*)*4);
v_beats_1258_ = lean_ctor_get(v_op_1247_, 1);
lean_inc(v_beats_1258_);
v_certs_1259_ = lean_ctor_get(v_op_1247_, 2);
lean_inc(v_certs_1259_);
v_orbits_1260_ = lean_ctor_get(v_op_1247_, 3);
lean_inc(v_orbits_1260_);
lean_dec_ref_known(v_op_1247_, 4);
v___x_1261_ = lean_box(v_ccw_1257_);
v___x_1262_ = lean_apply_5(v_h__3_1250_, v_centre_1256_, v___x_1261_, v_beats_1258_, v_certs_1259_, v_orbits_1260_);
return v___x_1262_;
}
case 2:
{
lean_object* v_deltas_1263_; lean_object* v_beats_1264_; lean_object* v___x_1265_; 
lean_dec(v_h__3_1250_);
lean_dec(v_h__2_1249_);
lean_dec(v_h__1_1248_);
v_deltas_1263_ = lean_ctor_get(v_op_1247_, 0);
lean_inc(v_deltas_1263_);
v_beats_1264_ = lean_ctor_get(v_op_1247_, 1);
lean_inc(v_beats_1264_);
lean_dec_ref_known(v_op_1247_, 2);
v___x_1265_ = lean_apply_2(v_h__4_1251_, v_deltas_1263_, v_beats_1264_);
return v___x_1265_;
}
default: 
{
lean_object* v_left_1266_; lean_object* v_right_1267_; lean_object* v_line_1268_; lean_object* v_target_1269_; lean_object* v_beats_1270_; lean_object* v_certs_1271_; lean_object* v___x_1272_; 
lean_dec(v_h__4_1251_);
lean_dec(v_h__3_1250_);
lean_dec(v_h__1_1248_);
v_left_1266_ = lean_ctor_get(v_op_1247_, 0);
lean_inc(v_left_1266_);
v_right_1267_ = lean_ctor_get(v_op_1247_, 1);
lean_inc(v_right_1267_);
v_line_1268_ = lean_ctor_get(v_op_1247_, 2);
lean_inc(v_line_1268_);
v_target_1269_ = lean_ctor_get(v_op_1247_, 3);
lean_inc(v_target_1269_);
v_beats_1270_ = lean_ctor_get(v_op_1247_, 4);
lean_inc(v_beats_1270_);
v_certs_1271_ = lean_ctor_get(v_op_1247_, 5);
lean_inc(v_certs_1271_);
lean_dec_ref_known(v_op_1247_, 6);
v___x_1272_ = lean_apply_6(v_h__2_1249_, v_left_1266_, v_right_1267_, v_line_1268_, v_target_1269_, v_beats_1270_, v_certs_1271_);
return v___x_1272_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_pathOf_match__1_splitter___redArg(lean_object* v_op_1273_, lean_object* v_h__1_1274_, lean_object* v_h__2_1275_){
_start:
{
if (lean_obj_tag(v_op_1273_) == 1)
{
lean_object* v_centre_1276_; uint8_t v_ccw_1277_; lean_object* v_beats_1278_; lean_object* v_certs_1279_; lean_object* v_orbits_1280_; lean_object* v___x_1281_; lean_object* v___x_1282_; 
lean_dec(v_h__2_1275_);
v_centre_1276_ = lean_ctor_get(v_op_1273_, 0);
lean_inc_ref(v_centre_1276_);
v_ccw_1277_ = lean_ctor_get_uint8(v_op_1273_, sizeof(void*)*4);
v_beats_1278_ = lean_ctor_get(v_op_1273_, 1);
lean_inc(v_beats_1278_);
v_certs_1279_ = lean_ctor_get(v_op_1273_, 2);
lean_inc(v_certs_1279_);
v_orbits_1280_ = lean_ctor_get(v_op_1273_, 3);
lean_inc(v_orbits_1280_);
lean_dec_ref_known(v_op_1273_, 4);
v___x_1281_ = lean_box(v_ccw_1277_);
v___x_1282_ = lean_apply_5(v_h__1_1274_, v_centre_1276_, v___x_1281_, v_beats_1278_, v_certs_1279_, v_orbits_1280_);
return v___x_1282_;
}
else
{
lean_object* v___x_1283_; 
lean_dec(v_h__1_1274_);
v___x_1283_ = lean_apply_2(v_h__2_1275_, v_op_1273_, lean_box(0));
return v___x_1283_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_pathOf_match__1_splitter(lean_object* v_motive_1284_, lean_object* v_op_1285_, lean_object* v_h__1_1286_, lean_object* v_h__2_1287_){
_start:
{
if (lean_obj_tag(v_op_1285_) == 1)
{
lean_object* v_centre_1288_; uint8_t v_ccw_1289_; lean_object* v_beats_1290_; lean_object* v_certs_1291_; lean_object* v_orbits_1292_; lean_object* v___x_1293_; lean_object* v___x_1294_; 
lean_dec(v_h__2_1287_);
v_centre_1288_ = lean_ctor_get(v_op_1285_, 0);
lean_inc_ref(v_centre_1288_);
v_ccw_1289_ = lean_ctor_get_uint8(v_op_1285_, sizeof(void*)*4);
v_beats_1290_ = lean_ctor_get(v_op_1285_, 1);
lean_inc(v_beats_1290_);
v_certs_1291_ = lean_ctor_get(v_op_1285_, 2);
lean_inc(v_certs_1291_);
v_orbits_1292_ = lean_ctor_get(v_op_1285_, 3);
lean_inc(v_orbits_1292_);
lean_dec_ref_known(v_op_1285_, 4);
v___x_1293_ = lean_box(v_ccw_1289_);
v___x_1294_ = lean_apply_5(v_h__1_1286_, v_centre_1288_, v___x_1293_, v_beats_1290_, v_certs_1291_, v_orbits_1292_);
return v___x_1294_;
}
else
{
lean_object* v___x_1295_; 
lean_dec(v_h__1_1286_);
v___x_1295_ = lean_apply_2(v_h__2_1287_, v_op_1285_, lean_box(0));
return v___x_1295_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter___redArg(lean_object* v_x_1296_, lean_object* v_h__1_1297_, lean_object* v_h__2_1298_, lean_object* v_h__3_1299_, lean_object* v_h__4_1300_){
_start:
{
switch(lean_obj_tag(v_x_1296_))
{
case 0:
{
lean_object* v_target_1301_; lean_object* v_beats_1302_; lean_object* v_certs_1303_; lean_object* v___x_1304_; 
lean_dec(v_h__4_1300_);
lean_dec(v_h__3_1299_);
lean_dec(v_h__2_1298_);
v_target_1301_ = lean_ctor_get(v_x_1296_, 0);
lean_inc(v_target_1301_);
v_beats_1302_ = lean_ctor_get(v_x_1296_, 1);
lean_inc(v_beats_1302_);
v_certs_1303_ = lean_ctor_get(v_x_1296_, 2);
lean_inc(v_certs_1303_);
lean_dec_ref_known(v_x_1296_, 3);
v___x_1304_ = lean_apply_3(v_h__1_1297_, v_target_1301_, v_beats_1302_, v_certs_1303_);
return v___x_1304_;
}
case 1:
{
lean_object* v_centre_1305_; uint8_t v_ccw_1306_; lean_object* v_beats_1307_; lean_object* v_certs_1308_; lean_object* v_orbits_1309_; lean_object* v___x_1310_; lean_object* v___x_1311_; 
lean_dec(v_h__4_1300_);
lean_dec(v_h__3_1299_);
lean_dec(v_h__1_1297_);
v_centre_1305_ = lean_ctor_get(v_x_1296_, 0);
lean_inc_ref(v_centre_1305_);
v_ccw_1306_ = lean_ctor_get_uint8(v_x_1296_, sizeof(void*)*4);
v_beats_1307_ = lean_ctor_get(v_x_1296_, 1);
lean_inc(v_beats_1307_);
v_certs_1308_ = lean_ctor_get(v_x_1296_, 2);
lean_inc(v_certs_1308_);
v_orbits_1309_ = lean_ctor_get(v_x_1296_, 3);
lean_inc(v_orbits_1309_);
lean_dec_ref_known(v_x_1296_, 4);
v___x_1310_ = lean_box(v_ccw_1306_);
v___x_1311_ = lean_apply_5(v_h__2_1298_, v_centre_1305_, v___x_1310_, v_beats_1307_, v_certs_1308_, v_orbits_1309_);
return v___x_1311_;
}
case 2:
{
lean_object* v_deltas_1312_; lean_object* v_beats_1313_; lean_object* v___x_1314_; 
lean_dec(v_h__4_1300_);
lean_dec(v_h__2_1298_);
lean_dec(v_h__1_1297_);
v_deltas_1312_ = lean_ctor_get(v_x_1296_, 0);
lean_inc(v_deltas_1312_);
v_beats_1313_ = lean_ctor_get(v_x_1296_, 1);
lean_inc(v_beats_1313_);
lean_dec_ref_known(v_x_1296_, 2);
v___x_1314_ = lean_apply_2(v_h__3_1299_, v_deltas_1312_, v_beats_1313_);
return v___x_1314_;
}
default: 
{
lean_object* v_left_1315_; lean_object* v_right_1316_; lean_object* v_line_1317_; lean_object* v_target_1318_; lean_object* v_beats_1319_; lean_object* v_certs_1320_; lean_object* v___x_1321_; 
lean_dec(v_h__3_1299_);
lean_dec(v_h__2_1298_);
lean_dec(v_h__1_1297_);
v_left_1315_ = lean_ctor_get(v_x_1296_, 0);
lean_inc(v_left_1315_);
v_right_1316_ = lean_ctor_get(v_x_1296_, 1);
lean_inc(v_right_1316_);
v_line_1317_ = lean_ctor_get(v_x_1296_, 2);
lean_inc(v_line_1317_);
v_target_1318_ = lean_ctor_get(v_x_1296_, 3);
lean_inc(v_target_1318_);
v_beats_1319_ = lean_ctor_get(v_x_1296_, 4);
lean_inc(v_beats_1319_);
v_certs_1320_ = lean_ctor_get(v_x_1296_, 5);
lean_inc(v_certs_1320_);
lean_dec_ref_known(v_x_1296_, 6);
v___x_1321_ = lean_apply_6(v_h__4_1300_, v_left_1315_, v_right_1316_, v_line_1317_, v_target_1318_, v_beats_1319_, v_certs_1320_);
return v___x_1321_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter(lean_object* v_motive_1322_, lean_object* v_x_1323_, lean_object* v_h__1_1324_, lean_object* v_h__2_1325_, lean_object* v_h__3_1326_, lean_object* v_h__4_1327_){
_start:
{
switch(lean_obj_tag(v_x_1323_))
{
case 0:
{
lean_object* v_target_1328_; lean_object* v_beats_1329_; lean_object* v_certs_1330_; lean_object* v___x_1331_; 
lean_dec(v_h__4_1327_);
lean_dec(v_h__3_1326_);
lean_dec(v_h__2_1325_);
v_target_1328_ = lean_ctor_get(v_x_1323_, 0);
lean_inc(v_target_1328_);
v_beats_1329_ = lean_ctor_get(v_x_1323_, 1);
lean_inc(v_beats_1329_);
v_certs_1330_ = lean_ctor_get(v_x_1323_, 2);
lean_inc(v_certs_1330_);
lean_dec_ref_known(v_x_1323_, 3);
v___x_1331_ = lean_apply_3(v_h__1_1324_, v_target_1328_, v_beats_1329_, v_certs_1330_);
return v___x_1331_;
}
case 1:
{
lean_object* v_centre_1332_; uint8_t v_ccw_1333_; lean_object* v_beats_1334_; lean_object* v_certs_1335_; lean_object* v_orbits_1336_; lean_object* v___x_1337_; lean_object* v___x_1338_; 
lean_dec(v_h__4_1327_);
lean_dec(v_h__3_1326_);
lean_dec(v_h__1_1324_);
v_centre_1332_ = lean_ctor_get(v_x_1323_, 0);
lean_inc_ref(v_centre_1332_);
v_ccw_1333_ = lean_ctor_get_uint8(v_x_1323_, sizeof(void*)*4);
v_beats_1334_ = lean_ctor_get(v_x_1323_, 1);
lean_inc(v_beats_1334_);
v_certs_1335_ = lean_ctor_get(v_x_1323_, 2);
lean_inc(v_certs_1335_);
v_orbits_1336_ = lean_ctor_get(v_x_1323_, 3);
lean_inc(v_orbits_1336_);
lean_dec_ref_known(v_x_1323_, 4);
v___x_1337_ = lean_box(v_ccw_1333_);
v___x_1338_ = lean_apply_5(v_h__2_1325_, v_centre_1332_, v___x_1337_, v_beats_1334_, v_certs_1335_, v_orbits_1336_);
return v___x_1338_;
}
case 2:
{
lean_object* v_deltas_1339_; lean_object* v_beats_1340_; lean_object* v___x_1341_; 
lean_dec(v_h__4_1327_);
lean_dec(v_h__2_1325_);
lean_dec(v_h__1_1324_);
v_deltas_1339_ = lean_ctor_get(v_x_1323_, 0);
lean_inc(v_deltas_1339_);
v_beats_1340_ = lean_ctor_get(v_x_1323_, 1);
lean_inc(v_beats_1340_);
lean_dec_ref_known(v_x_1323_, 2);
v___x_1341_ = lean_apply_2(v_h__3_1326_, v_deltas_1339_, v_beats_1340_);
return v___x_1341_;
}
default: 
{
lean_object* v_left_1342_; lean_object* v_right_1343_; lean_object* v_line_1344_; lean_object* v_target_1345_; lean_object* v_beats_1346_; lean_object* v_certs_1347_; lean_object* v___x_1348_; 
lean_dec(v_h__3_1326_);
lean_dec(v_h__2_1325_);
lean_dec(v_h__1_1324_);
v_left_1342_ = lean_ctor_get(v_x_1323_, 0);
lean_inc(v_left_1342_);
v_right_1343_ = lean_ctor_get(v_x_1323_, 1);
lean_inc(v_right_1343_);
v_line_1344_ = lean_ctor_get(v_x_1323_, 2);
lean_inc(v_line_1344_);
v_target_1345_ = lean_ctor_get(v_x_1323_, 3);
lean_inc(v_target_1345_);
v_beats_1346_ = lean_ctor_get(v_x_1323_, 4);
lean_inc(v_beats_1346_);
v_certs_1347_ = lean_ctor_get(v_x_1323_, 5);
lean_inc(v_certs_1347_);
lean_dec_ref_known(v_x_1323_, 6);
v___x_1348_ = lean_apply_6(v_h__4_1327_, v_left_1342_, v_right_1343_, v_line_1344_, v_target_1345_, v_beats_1346_, v_certs_1347_);
return v___x_1348_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Recipes(uint8_t builtin);
void lean_initialize_runtime_module();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Language(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Recipes(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
