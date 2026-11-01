// Lean compiler output
// Module: Choreo.Language
// Imports: public import Init public meta import Init public import Choreo.RotationPath
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
extern lean_object* lp_choreo_Choreo_instInhabitedPt_default;
lean_object* l_List_getD___redArg(lean_object*, lean_object*, lean_object*);
lean_object* lean_int_sub(lean_object*, lean_object*);
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* lean_int_add(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
uint8_t lean_int_dec_eq(lean_object*, lean_object*);
uint8_t lean_int_dec_le(lean_object*, lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(lean_object*, lean_object*);
lean_object* l_List_range(lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
lean_object* lp_choreo_Choreo_gapSq_x27(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_rotatePath(lean_object*, lean_object*, uint8_t);
lean_object* lp_choreo_Choreo_easePath(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_instDecidableEqPt_decEq(lean_object*, lean_object*);
lean_object* l_Int_pow(lean_object*, lean_object*);
lean_object* lean_nat_mul(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_Phase_path(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_reachesSlot(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Path_wf(lean_object*);
uint8_t lp_choreo_Choreo_Path_startsAtSlot(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Config_wf(lean_object*);
uint8_t lp_choreo_Choreo_Phase_checkPaths(lean_object*, lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
uint8_t lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
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
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapQuad(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapQuad___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_linearPairClear___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_linearPairClear___closed__0;
LEAN_EXPORT uint8_t lp_choreo_Choreo_linearPairClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_linearPairClear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_moveClear_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_moveClear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_moveClear_spec__1(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_moveClear_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_moveClear(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_moveClear___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__1(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__1___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_parClear(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_parClear___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Pred_holds_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Pred_holds_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT uint8_t lp_choreo_Choreo_Prog_allRun(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_allRun___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_samePhases_match__1_splitter___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_samePhases_match__1_splitter(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
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
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3(lean_object* v_x_107_, lean_object* v_cx_108_, lean_object* v_cy_109_, lean_object* v_r2_110_, lean_object* v_x_111_){
_start:
{
if (lean_obj_tag(v_x_111_) == 0)
{
uint8_t v___x_112_; 
v___x_112_ = 1;
return v___x_112_;
}
else
{
lean_object* v_head_113_; lean_object* v_tail_114_; lean_object* v___x_115_; lean_object* v_x_116_; lean_object* v_y_117_; lean_object* v___x_118_; lean_object* v___x_119_; lean_object* v___x_120_; lean_object* v___x_121_; lean_object* v___x_122_; lean_object* v___x_123_; uint8_t v___x_124_; 
v_head_113_ = lean_ctor_get(v_x_111_, 0);
lean_inc(v_head_113_);
v_tail_114_ = lean_ctor_get(v_x_111_, 1);
lean_inc(v_tail_114_);
lean_dec_ref_known(v_x_111_, 2);
v___x_115_ = lp_choreo_Choreo_State_at(v_x_107_, v_head_113_);
v_x_116_ = lean_ctor_get(v___x_115_, 0);
lean_inc(v_x_116_);
v_y_117_ = lean_ctor_get(v___x_115_, 1);
lean_inc(v_y_117_);
lean_dec_ref(v___x_115_);
v___x_118_ = lean_int_sub(v_x_116_, v_cx_108_);
lean_dec(v_x_116_);
v___x_119_ = lean_unsigned_to_nat(2u);
v___x_120_ = l_Int_pow(v___x_118_, v___x_119_);
lean_dec(v___x_118_);
v___x_121_ = lean_int_sub(v_y_117_, v_cy_109_);
lean_dec(v_y_117_);
v___x_122_ = l_Int_pow(v___x_121_, v___x_119_);
lean_dec(v___x_121_);
v___x_123_ = lean_int_add(v___x_120_, v___x_122_);
lean_dec(v___x_122_);
lean_dec(v___x_120_);
v___x_124_ = lean_int_dec_eq(v___x_123_, v_r2_110_);
lean_dec(v___x_123_);
if (v___x_124_ == 0)
{
lean_dec(v_tail_114_);
return v___x_124_;
}
else
{
v_x_111_ = v_tail_114_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3___boxed(lean_object* v_x_126_, lean_object* v_cx_127_, lean_object* v_cy_128_, lean_object* v_r2_129_, lean_object* v_x_130_){
_start:
{
uint8_t v_res_131_; lean_object* v_r_132_; 
v_res_131_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3(v_x_126_, v_cx_127_, v_cy_128_, v_r2_129_, v_x_130_);
lean_dec(v_r2_129_);
lean_dec(v_cy_128_);
lean_dec(v_cx_127_);
lean_dec(v_x_126_);
v_r_132_ = lean_box(v_res_131_);
return v_r_132_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6(lean_object* v_x_133_, lean_object* v_line_134_, lean_object* v_x_135_){
_start:
{
if (lean_obj_tag(v_x_135_) == 0)
{
uint8_t v___x_136_; 
v___x_136_ = 1;
return v___x_136_;
}
else
{
lean_object* v_head_137_; lean_object* v_tail_138_; lean_object* v___x_139_; lean_object* v_x_140_; uint8_t v___x_141_; 
v_head_137_ = lean_ctor_get(v_x_135_, 0);
lean_inc(v_head_137_);
v_tail_138_ = lean_ctor_get(v_x_135_, 1);
lean_inc(v_tail_138_);
lean_dec_ref_known(v_x_135_, 2);
v___x_139_ = lp_choreo_Choreo_State_at(v_x_133_, v_head_137_);
v_x_140_ = lean_ctor_get(v___x_139_, 0);
lean_inc(v_x_140_);
lean_dec_ref(v___x_139_);
v___x_141_ = lean_int_dec_le(v_x_140_, v_line_134_);
lean_dec(v_x_140_);
if (v___x_141_ == 0)
{
lean_dec(v_tail_138_);
return v___x_141_;
}
else
{
v_x_135_ = v_tail_138_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6___boxed(lean_object* v_x_143_, lean_object* v_line_144_, lean_object* v_x_145_){
_start:
{
uint8_t v_res_146_; lean_object* v_r_147_; 
v_res_146_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6(v_x_143_, v_line_144_, v_x_145_);
lean_dec(v_line_144_);
lean_dec(v_x_143_);
v_r_147_ = lean_box(v_res_146_);
return v_r_147_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1(lean_object* v_d_148_, lean_object* v_x_149_, lean_object* v_i_150_, lean_object* v_x_151_){
_start:
{
if (lean_obj_tag(v_x_151_) == 0)
{
uint8_t v___x_152_; 
lean_dec(v_i_150_);
v___x_152_ = 1;
return v___x_152_;
}
else
{
lean_object* v_head_153_; lean_object* v_tail_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v___x_158_; uint8_t v___x_159_; 
v_head_153_ = lean_ctor_get(v_x_151_, 0);
lean_inc(v_head_153_);
v_tail_154_ = lean_ctor_get(v_x_151_, 1);
lean_inc(v_tail_154_);
lean_dec_ref_known(v_x_151_, 2);
v___x_155_ = lean_int_mul(v_d_148_, v_d_148_);
lean_inc(v_i_150_);
v___x_156_ = lp_choreo_Choreo_State_at(v_x_149_, v_i_150_);
v___x_157_ = lp_choreo_Choreo_State_at(v_x_149_, v_head_153_);
v___x_158_ = lp_choreo_Choreo_gapSq_x27(v___x_156_, v___x_157_);
lean_dec_ref(v___x_157_);
lean_dec_ref(v___x_156_);
v___x_159_ = lean_int_dec_le(v___x_155_, v___x_158_);
lean_dec(v___x_158_);
lean_dec(v___x_155_);
if (v___x_159_ == 0)
{
lean_dec(v_tail_154_);
lean_dec(v_i_150_);
return v___x_159_;
}
else
{
v_x_151_ = v_tail_154_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1___boxed(lean_object* v_d_161_, lean_object* v_x_162_, lean_object* v_i_163_, lean_object* v_x_164_){
_start:
{
uint8_t v_res_165_; lean_object* v_r_166_; 
v_res_165_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1(v_d_161_, v_x_162_, v_i_163_, v_x_164_);
lean_dec(v_x_162_);
lean_dec(v_d_161_);
v_r_166_ = lean_box(v_res_165_);
return v_r_166_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2(lean_object* v_d_167_, lean_object* v_x_168_, lean_object* v_x_169_){
_start:
{
if (lean_obj_tag(v_x_169_) == 0)
{
uint8_t v___x_170_; 
v___x_170_ = 1;
return v___x_170_;
}
else
{
lean_object* v_head_171_; lean_object* v_tail_172_; lean_object* v___x_173_; uint8_t v___x_174_; 
v_head_171_ = lean_ctor_get(v_x_169_, 0);
lean_inc_n(v_head_171_, 2);
v_tail_172_ = lean_ctor_get(v_x_169_, 1);
lean_inc(v_tail_172_);
lean_dec_ref_known(v_x_169_, 2);
v___x_173_ = l_List_range(v_head_171_);
v___x_174_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__1(v_d_167_, v_x_168_, v_head_171_, v___x_173_);
if (v___x_174_ == 0)
{
lean_dec(v_tail_172_);
return v___x_174_;
}
else
{
v_x_169_ = v_tail_172_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2___boxed(lean_object* v_d_176_, lean_object* v_x_177_, lean_object* v_x_178_){
_start:
{
uint8_t v_res_179_; lean_object* v_r_180_; 
v_res_179_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2(v_d_176_, v_x_177_, v_x_178_);
lean_dec(v_x_177_);
lean_dec(v_d_176_);
v_r_180_ = lean_box(v_res_179_);
return v_r_180_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4(lean_object* v_x_181_, lean_object* v_a_182_, lean_object* v_d_183_, lean_object* v_x_184_){
_start:
{
if (lean_obj_tag(v_x_184_) == 0)
{
uint8_t v___x_185_; 
lean_dec(v_a_182_);
v___x_185_ = 1;
return v___x_185_;
}
else
{
lean_object* v_head_186_; lean_object* v_tail_187_; lean_object* v___x_188_; lean_object* v_y_189_; lean_object* v___x_190_; lean_object* v_y_191_; lean_object* v___x_192_; uint8_t v___x_193_; 
v_head_186_ = lean_ctor_get(v_x_184_, 0);
lean_inc(v_head_186_);
v_tail_187_ = lean_ctor_get(v_x_184_, 1);
lean_inc(v_tail_187_);
lean_dec_ref_known(v_x_184_, 2);
lean_inc(v_a_182_);
v___x_188_ = lp_choreo_Choreo_State_at(v_x_181_, v_a_182_);
v_y_189_ = lean_ctor_get(v___x_188_, 1);
lean_inc(v_y_189_);
lean_dec_ref(v___x_188_);
v___x_190_ = lp_choreo_Choreo_State_at(v_x_181_, v_head_186_);
v_y_191_ = lean_ctor_get(v___x_190_, 1);
lean_inc(v_y_191_);
lean_dec_ref(v___x_190_);
v___x_192_ = lean_int_sub(v_y_189_, v_y_191_);
v___x_193_ = lean_int_dec_le(v_d_183_, v___x_192_);
lean_dec(v___x_192_);
if (v___x_193_ == 0)
{
lean_object* v___x_194_; uint8_t v___x_195_; 
v___x_194_ = lean_int_sub(v_y_191_, v_y_189_);
lean_dec(v_y_189_);
lean_dec(v_y_191_);
v___x_195_ = lean_int_dec_le(v_d_183_, v___x_194_);
lean_dec(v___x_194_);
if (v___x_195_ == 0)
{
lean_dec(v_tail_187_);
lean_dec(v_a_182_);
return v___x_195_;
}
else
{
v_x_184_ = v_tail_187_;
goto _start;
}
}
else
{
lean_dec(v_y_191_);
lean_dec(v_y_189_);
v_x_184_ = v_tail_187_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4___boxed(lean_object* v_x_198_, lean_object* v_a_199_, lean_object* v_d_200_, lean_object* v_x_201_){
_start:
{
uint8_t v_res_202_; lean_object* v_r_203_; 
v_res_202_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4(v_x_198_, v_a_199_, v_d_200_, v_x_201_);
lean_dec(v_d_200_);
lean_dec(v_x_198_);
v_r_203_ = lean_box(v_res_202_);
return v_r_203_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5(lean_object* v_x_204_, lean_object* v_d_205_, lean_object* v_B_206_, lean_object* v_x_207_){
_start:
{
if (lean_obj_tag(v_x_207_) == 0)
{
uint8_t v___x_208_; 
lean_dec(v_B_206_);
v___x_208_ = 1;
return v___x_208_;
}
else
{
lean_object* v_head_209_; lean_object* v_tail_210_; uint8_t v___x_211_; 
v_head_209_ = lean_ctor_get(v_x_207_, 0);
lean_inc(v_head_209_);
v_tail_210_ = lean_ctor_get(v_x_207_, 1);
lean_inc(v_tail_210_);
lean_dec_ref_known(v_x_207_, 2);
lean_inc(v_B_206_);
v___x_211_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__4(v_x_204_, v_head_209_, v_d_205_, v_B_206_);
if (v___x_211_ == 0)
{
lean_dec(v_tail_210_);
lean_dec(v_B_206_);
return v___x_211_;
}
else
{
v_x_207_ = v_tail_210_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5___boxed(lean_object* v_x_213_, lean_object* v_d_214_, lean_object* v_B_215_, lean_object* v_x_216_){
_start:
{
uint8_t v_res_217_; lean_object* v_r_218_; 
v_res_217_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5(v_x_213_, v_d_214_, v_B_215_, v_x_216_);
lean_dec(v_d_214_);
lean_dec(v_x_213_);
v_r_218_ = lean_box(v_res_217_);
return v_r_218_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0(lean_object* v_x_219_, lean_object* v_x_220_){
_start:
{
if (lean_obj_tag(v_x_219_) == 0)
{
if (lean_obj_tag(v_x_220_) == 0)
{
uint8_t v___x_221_; 
v___x_221_ = 1;
return v___x_221_;
}
else
{
uint8_t v___x_222_; 
v___x_222_ = 0;
return v___x_222_;
}
}
else
{
if (lean_obj_tag(v_x_220_) == 0)
{
uint8_t v___x_223_; 
v___x_223_ = 0;
return v___x_223_;
}
else
{
lean_object* v_head_224_; lean_object* v_tail_225_; lean_object* v_head_226_; lean_object* v_tail_227_; uint8_t v___x_228_; 
v_head_224_ = lean_ctor_get(v_x_219_, 0);
v_tail_225_ = lean_ctor_get(v_x_219_, 1);
v_head_226_ = lean_ctor_get(v_x_220_, 0);
v_tail_227_ = lean_ctor_get(v_x_220_, 1);
v___x_228_ = lp_choreo_Choreo_instDecidableEqPt_decEq(v_head_224_, v_head_226_);
if (v___x_228_ == 0)
{
return v___x_228_;
}
else
{
v_x_219_ = v_tail_225_;
v_x_220_ = v_tail_227_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0___boxed(lean_object* v_x_230_, lean_object* v_x_231_){
_start:
{
uint8_t v_res_232_; lean_object* v_r_233_; 
v_res_232_ = lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0(v_x_230_, v_x_231_);
lean_dec(v_x_231_);
lean_dec(v_x_230_);
v_r_233_ = lean_box(v_res_232_);
return v_r_233_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7(lean_object* v_line_234_, lean_object* v_d_235_, lean_object* v_x_236_, lean_object* v_x_237_){
_start:
{
if (lean_obj_tag(v_x_237_) == 0)
{
uint8_t v___x_238_; 
v___x_238_ = 1;
return v___x_238_;
}
else
{
lean_object* v_head_239_; lean_object* v_tail_240_; lean_object* v___x_241_; lean_object* v_x_242_; lean_object* v___x_243_; uint8_t v___x_244_; 
v_head_239_ = lean_ctor_get(v_x_237_, 0);
lean_inc(v_head_239_);
v_tail_240_ = lean_ctor_get(v_x_237_, 1);
lean_inc(v_tail_240_);
lean_dec_ref_known(v_x_237_, 2);
v___x_241_ = lp_choreo_Choreo_State_at(v_x_236_, v_head_239_);
v_x_242_ = lean_ctor_get(v___x_241_, 0);
lean_inc(v_x_242_);
lean_dec_ref(v___x_241_);
v___x_243_ = lean_int_add(v_line_234_, v_d_235_);
v___x_244_ = lean_int_dec_le(v___x_243_, v_x_242_);
lean_dec(v_x_242_);
lean_dec(v___x_243_);
if (v___x_244_ == 0)
{
lean_dec(v_tail_240_);
return v___x_244_;
}
else
{
v_x_237_ = v_tail_240_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7___boxed(lean_object* v_line_246_, lean_object* v_d_247_, lean_object* v_x_248_, lean_object* v_x_249_){
_start:
{
uint8_t v_res_250_; lean_object* v_r_251_; 
v_res_250_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7(v_line_246_, v_d_247_, v_x_248_, v_x_249_);
lean_dec(v_x_248_);
lean_dec(v_d_247_);
lean_dec(v_line_246_);
v_r_251_ = lean_box(v_res_250_);
return v_r_251_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Pred_holds(lean_object* v_x_252_, lean_object* v_x_253_){
_start:
{
switch(lean_obj_tag(v_x_252_))
{
case 0:
{
uint8_t v___x_254_; 
v___x_254_ = 1;
return v___x_254_;
}
case 1:
{
lean_object* v_places_255_; uint8_t v___x_256_; 
v_places_255_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_places_255_);
lean_dec_ref_known(v_x_252_, 1);
v___x_256_ = lp_choreo_List_beq___at___00Choreo_Pred_holds_spec__0(v_x_253_, v_places_255_);
lean_dec(v_places_255_);
return v___x_256_;
}
case 2:
{
lean_object* v_n_257_; lean_object* v_d_258_; lean_object* v___x_259_; uint8_t v___x_260_; 
v_n_257_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_n_257_);
v_d_258_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_d_258_);
lean_dec_ref_known(v_x_252_, 2);
v___x_259_ = l_List_range(v_n_257_);
v___x_260_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__2(v_d_258_, v_x_253_, v___x_259_);
lean_dec(v_d_258_);
return v___x_260_;
}
case 3:
{
lean_object* v_who_261_; lean_object* v_cx_262_; lean_object* v_cy_263_; lean_object* v_r2_264_; uint8_t v___x_265_; 
v_who_261_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_who_261_);
v_cx_262_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_cx_262_);
v_cy_263_ = lean_ctor_get(v_x_252_, 2);
lean_inc(v_cy_263_);
v_r2_264_ = lean_ctor_get(v_x_252_, 3);
lean_inc(v_r2_264_);
lean_dec_ref_known(v_x_252_, 4);
v___x_265_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__3(v_x_253_, v_cx_262_, v_cy_263_, v_r2_264_, v_who_261_);
lean_dec(v_r2_264_);
lean_dec(v_cy_263_);
lean_dec(v_cx_262_);
return v___x_265_;
}
case 4:
{
lean_object* v_A_266_; lean_object* v_B_267_; lean_object* v_d_268_; uint8_t v___x_269_; 
v_A_266_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_A_266_);
v_B_267_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_B_267_);
v_d_268_ = lean_ctor_get(v_x_252_, 2);
lean_inc(v_d_268_);
lean_dec_ref_known(v_x_252_, 3);
v___x_269_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__5(v_x_253_, v_d_268_, v_B_267_, v_A_266_);
lean_dec(v_d_268_);
return v___x_269_;
}
case 5:
{
lean_object* v_A_270_; lean_object* v_B_271_; lean_object* v_line_272_; lean_object* v_d_273_; uint8_t v___x_274_; 
v_A_270_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_A_270_);
v_B_271_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_B_271_);
v_line_272_ = lean_ctor_get(v_x_252_, 2);
lean_inc(v_line_272_);
v_d_273_ = lean_ctor_get(v_x_252_, 3);
lean_inc(v_d_273_);
lean_dec_ref_known(v_x_252_, 4);
v___x_274_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__6(v_x_253_, v_line_272_, v_A_270_);
if (v___x_274_ == 0)
{
lean_dec(v_d_273_);
lean_dec(v_line_272_);
lean_dec(v_B_271_);
return v___x_274_;
}
else
{
uint8_t v___x_275_; 
v___x_275_ = lp_choreo_List_all___at___00Choreo_Pred_holds_spec__7(v_line_272_, v_d_273_, v_x_253_, v_B_271_);
lean_dec(v_d_273_);
lean_dec(v_line_272_);
return v___x_275_;
}
}
default: 
{
lean_object* v_p_276_; lean_object* v_q_277_; uint8_t v___x_278_; 
v_p_276_ = lean_ctor_get(v_x_252_, 0);
lean_inc(v_p_276_);
v_q_277_ = lean_ctor_get(v_x_252_, 1);
lean_inc(v_q_277_);
lean_dec_ref_known(v_x_252_, 2);
v___x_278_ = lp_choreo_Choreo_Pred_holds(v_p_276_, v_x_253_);
if (v___x_278_ == 0)
{
lean_dec(v_q_277_);
return v___x_278_;
}
else
{
v_x_252_ = v_q_277_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pred_holds___boxed(lean_object* v_x_280_, lean_object* v_x_281_){
_start:
{
uint8_t v_res_282_; lean_object* v_r_283_; 
v_res_282_ = lp_choreo_Choreo_Pred_holds(v_x_280_, v_x_281_);
lean_dec(v_x_281_);
v_r_283_ = lean_box(v_res_282_);
return v_r_283_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorIdx(lean_object* v_x_284_){
_start:
{
switch(lean_obj_tag(v_x_284_))
{
case 0:
{
lean_object* v___x_285_; 
v___x_285_ = lean_unsigned_to_nat(0u);
return v___x_285_;
}
case 1:
{
lean_object* v___x_286_; 
v___x_286_ = lean_unsigned_to_nat(1u);
return v___x_286_;
}
case 2:
{
lean_object* v___x_287_; 
v___x_287_ = lean_unsigned_to_nat(2u);
return v___x_287_;
}
default: 
{
lean_object* v___x_288_; 
v___x_288_ = lean_unsigned_to_nat(3u);
return v___x_288_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorIdx___boxed(lean_object* v_x_289_){
_start:
{
lean_object* v_res_290_; 
v_res_290_ = lp_choreo_Choreo_Op_ctorIdx(v_x_289_);
lean_dec_ref(v_x_289_);
return v_res_290_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim___redArg(lean_object* v_t_291_, lean_object* v_k_292_){
_start:
{
switch(lean_obj_tag(v_t_291_))
{
case 1:
{
lean_object* v_centre_293_; uint8_t v_ccw_294_; lean_object* v_beats_295_; lean_object* v___x_296_; lean_object* v___x_297_; 
v_centre_293_ = lean_ctor_get(v_t_291_, 0);
lean_inc_ref(v_centre_293_);
v_ccw_294_ = lean_ctor_get_uint8(v_t_291_, sizeof(void*)*2);
v_beats_295_ = lean_ctor_get(v_t_291_, 1);
lean_inc(v_beats_295_);
lean_dec_ref_known(v_t_291_, 2);
v___x_296_ = lean_box(v_ccw_294_);
v___x_297_ = lean_apply_3(v_k_292_, v_centre_293_, v___x_296_, v_beats_295_);
return v___x_297_;
}
case 3:
{
lean_object* v_left_298_; lean_object* v_right_299_; lean_object* v_line_300_; lean_object* v_target_301_; lean_object* v_beats_302_; lean_object* v___x_303_; 
v_left_298_ = lean_ctor_get(v_t_291_, 0);
lean_inc(v_left_298_);
v_right_299_ = lean_ctor_get(v_t_291_, 1);
lean_inc(v_right_299_);
v_line_300_ = lean_ctor_get(v_t_291_, 2);
lean_inc(v_line_300_);
v_target_301_ = lean_ctor_get(v_t_291_, 3);
lean_inc(v_target_301_);
v_beats_302_ = lean_ctor_get(v_t_291_, 4);
lean_inc(v_beats_302_);
lean_dec_ref_known(v_t_291_, 5);
v___x_303_ = lean_apply_5(v_k_292_, v_left_298_, v_right_299_, v_line_300_, v_target_301_, v_beats_302_);
return v___x_303_;
}
default: 
{
lean_object* v_target_304_; lean_object* v_beats_305_; lean_object* v___x_306_; 
v_target_304_ = lean_ctor_get(v_t_291_, 0);
lean_inc(v_target_304_);
v_beats_305_ = lean_ctor_get(v_t_291_, 1);
lean_inc(v_beats_305_);
lean_dec_ref(v_t_291_);
v___x_306_ = lean_apply_2(v_k_292_, v_target_304_, v_beats_305_);
return v___x_306_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim(lean_object* v_motive_307_, lean_object* v_ctorIdx_308_, lean_object* v_t_309_, lean_object* v_h_310_, lean_object* v_k_311_){
_start:
{
lean_object* v___x_312_; 
v___x_312_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_309_, v_k_311_);
return v___x_312_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_ctorElim___boxed(lean_object* v_motive_313_, lean_object* v_ctorIdx_314_, lean_object* v_t_315_, lean_object* v_h_316_, lean_object* v_k_317_){
_start:
{
lean_object* v_res_318_; 
v_res_318_ = lp_choreo_Choreo_Op_ctorElim(v_motive_313_, v_ctorIdx_314_, v_t_315_, v_h_316_, v_k_317_);
lean_dec(v_ctorIdx_314_);
return v_res_318_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_move_elim___redArg(lean_object* v_t_319_, lean_object* v_move_320_){
_start:
{
lean_object* v___x_321_; 
v___x_321_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_319_, v_move_320_);
return v___x_321_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_move_elim(lean_object* v_motive_322_, lean_object* v_t_323_, lean_object* v_h_324_, lean_object* v_move_325_){
_start:
{
lean_object* v___x_326_; 
v___x_326_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_323_, v_move_325_);
return v___x_326_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_turn_elim___redArg(lean_object* v_t_327_, lean_object* v_turn_328_){
_start:
{
lean_object* v___x_329_; 
v___x_329_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_327_, v_turn_328_);
return v___x_329_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_turn_elim(lean_object* v_motive_330_, lean_object* v_t_331_, lean_object* v_h_332_, lean_object* v_turn_333_){
_start:
{
lean_object* v___x_334_; 
v___x_334_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_331_, v_turn_333_);
return v___x_334_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_slide_elim___redArg(lean_object* v_t_335_, lean_object* v_slide_336_){
_start:
{
lean_object* v___x_337_; 
v___x_337_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_335_, v_slide_336_);
return v___x_337_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_slide_elim(lean_object* v_motive_338_, lean_object* v_t_339_, lean_object* v_h_340_, lean_object* v_slide_341_){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_339_, v_slide_341_);
return v___x_342_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_par_elim___redArg(lean_object* v_t_343_, lean_object* v_par_344_){
_start:
{
lean_object* v___x_345_; 
v___x_345_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_343_, v_par_344_);
return v___x_345_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_par_elim(lean_object* v_motive_346_, lean_object* v_t_347_, lean_object* v_h_348_, lean_object* v_par_349_){
_start:
{
lean_object* v___x_350_; 
v___x_350_ = lp_choreo_Choreo_Op_ctorElim___redArg(v_t_347_, v_par_349_);
return v___x_350_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarter(lean_object* v_c_351_, lean_object* v_a_352_, uint8_t v_ccw_353_){
_start:
{
lean_object* v_x_354_; lean_object* v_y_355_; lean_object* v_x_356_; lean_object* v_y_357_; lean_object* v___x_359_; uint8_t v_isShared_360_; uint8_t v_isSharedCheck_373_; 
v_x_354_ = lean_ctor_get(v_a_352_, 0);
v_y_355_ = lean_ctor_get(v_a_352_, 1);
v_x_356_ = lean_ctor_get(v_c_351_, 0);
v_y_357_ = lean_ctor_get(v_c_351_, 1);
v_isSharedCheck_373_ = !lean_is_exclusive(v_c_351_);
if (v_isSharedCheck_373_ == 0)
{
v___x_359_ = v_c_351_;
v_isShared_360_ = v_isSharedCheck_373_;
goto v_resetjp_358_;
}
else
{
lean_inc(v_y_357_);
lean_inc(v_x_356_);
lean_dec(v_c_351_);
v___x_359_ = lean_box(0);
v_isShared_360_ = v_isSharedCheck_373_;
goto v_resetjp_358_;
}
v_resetjp_358_:
{
lean_object* v_dx_361_; lean_object* v_dy_362_; 
v_dx_361_ = lean_int_sub(v_x_354_, v_x_356_);
v_dy_362_ = lean_int_sub(v_y_355_, v_y_357_);
if (v_ccw_353_ == 0)
{
lean_object* v___x_363_; lean_object* v___x_364_; lean_object* v___x_366_; 
v___x_363_ = lean_int_add(v_x_356_, v_dy_362_);
lean_dec(v_dy_362_);
lean_dec(v_x_356_);
v___x_364_ = lean_int_sub(v_y_357_, v_dx_361_);
lean_dec(v_dx_361_);
lean_dec(v_y_357_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 1, v___x_364_);
lean_ctor_set(v___x_359_, 0, v___x_363_);
v___x_366_ = v___x_359_;
goto v_reusejp_365_;
}
else
{
lean_object* v_reuseFailAlloc_367_; 
v_reuseFailAlloc_367_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_367_, 0, v___x_363_);
lean_ctor_set(v_reuseFailAlloc_367_, 1, v___x_364_);
v___x_366_ = v_reuseFailAlloc_367_;
goto v_reusejp_365_;
}
v_reusejp_365_:
{
return v___x_366_;
}
}
else
{
lean_object* v___x_368_; lean_object* v___x_369_; lean_object* v___x_371_; 
v___x_368_ = lean_int_sub(v_x_356_, v_dy_362_);
lean_dec(v_dy_362_);
lean_dec(v_x_356_);
v___x_369_ = lean_int_add(v_y_357_, v_dx_361_);
lean_dec(v_dx_361_);
lean_dec(v_y_357_);
if (v_isShared_360_ == 0)
{
lean_ctor_set(v___x_359_, 1, v___x_369_);
lean_ctor_set(v___x_359_, 0, v___x_368_);
v___x_371_ = v___x_359_;
goto v_reusejp_370_;
}
else
{
lean_object* v_reuseFailAlloc_372_; 
v_reuseFailAlloc_372_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_372_, 0, v___x_368_);
lean_ctor_set(v_reuseFailAlloc_372_, 1, v___x_369_);
v___x_371_ = v_reuseFailAlloc_372_;
goto v_reusejp_370_;
}
v_reusejp_370_:
{
return v___x_371_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Pt_quarter___boxed(lean_object* v_c_374_, lean_object* v_a_375_, lean_object* v_ccw_376_){
_start:
{
uint8_t v_ccw_boxed_377_; lean_object* v_res_378_; 
v_ccw_boxed_377_ = lean_unbox(v_ccw_376_);
v_res_378_ = lp_choreo_Choreo_Pt_quarter(v_c_374_, v_a_375_, v_ccw_boxed_377_);
lean_dec_ref(v_a_375_);
return v_res_378_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_beats(lean_object* v_x_379_){
_start:
{
if (lean_obj_tag(v_x_379_) == 3)
{
lean_object* v_beats_380_; 
v_beats_380_ = lean_ctor_get(v_x_379_, 4);
lean_inc(v_beats_380_);
return v_beats_380_;
}
else
{
lean_object* v_beats_381_; 
v_beats_381_ = lean_ctor_get(v_x_379_, 1);
lean_inc(v_beats_381_);
return v_beats_381_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_beats___boxed(lean_object* v_x_382_){
_start:
{
lean_object* v_res_383_; 
v_res_383_ = lp_choreo_Choreo_Op_beats(v_x_382_);
lean_dec_ref(v_x_382_);
return v_res_383_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; 
v___x_384_ = lean_unsigned_to_nat(0u);
v___x_385_ = lean_nat_to_int(v___x_384_);
return v___x_385_;
}
}
static lean_object* _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1(void){
_start:
{
lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_386_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0);
v___x_387_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
lean_ctor_set(v___x_387_, 1, v___x_386_);
return v___x_387_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1(lean_object* v_deltas_388_, lean_object* v_s_389_, lean_object* v_a_390_, lean_object* v_a_391_){
_start:
{
if (lean_obj_tag(v_a_390_) == 0)
{
lean_object* v___x_392_; 
v___x_392_ = l_List_reverse___redArg(v_a_391_);
return v___x_392_;
}
else
{
lean_object* v_head_393_; lean_object* v_tail_394_; lean_object* v___x_396_; uint8_t v_isShared_397_; uint8_t v_isSharedCheck_418_; 
v_head_393_ = lean_ctor_get(v_a_390_, 0);
v_tail_394_ = lean_ctor_get(v_a_390_, 1);
v_isSharedCheck_418_ = !lean_is_exclusive(v_a_390_);
if (v_isSharedCheck_418_ == 0)
{
v___x_396_ = v_a_390_;
v_isShared_397_ = v_isSharedCheck_418_;
goto v_resetjp_395_;
}
else
{
lean_inc(v_tail_394_);
lean_inc(v_head_393_);
lean_dec(v_a_390_);
v___x_396_ = lean_box(0);
v_isShared_397_ = v_isSharedCheck_418_;
goto v_resetjp_395_;
}
v_resetjp_395_:
{
lean_object* v___x_398_; lean_object* v_d_399_; lean_object* v___x_400_; lean_object* v_x_401_; lean_object* v_y_402_; lean_object* v___x_404_; uint8_t v_isShared_405_; uint8_t v_isSharedCheck_417_; 
v___x_398_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1, &lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1);
lean_inc(v_head_393_);
v_d_399_ = l_List_getD___redArg(v_deltas_388_, v_head_393_, v___x_398_);
v___x_400_ = lp_choreo_Choreo_State_at(v_s_389_, v_head_393_);
v_x_401_ = lean_ctor_get(v___x_400_, 0);
v_y_402_ = lean_ctor_get(v___x_400_, 1);
v_isSharedCheck_417_ = !lean_is_exclusive(v___x_400_);
if (v_isSharedCheck_417_ == 0)
{
v___x_404_ = v___x_400_;
v_isShared_405_ = v_isSharedCheck_417_;
goto v_resetjp_403_;
}
else
{
lean_inc(v_y_402_);
lean_inc(v_x_401_);
lean_dec(v___x_400_);
v___x_404_ = lean_box(0);
v_isShared_405_ = v_isSharedCheck_417_;
goto v_resetjp_403_;
}
v_resetjp_403_:
{
lean_object* v_fst_406_; lean_object* v_snd_407_; lean_object* v___x_408_; lean_object* v___x_409_; lean_object* v___x_411_; 
v_fst_406_ = lean_ctor_get(v_d_399_, 0);
lean_inc(v_fst_406_);
v_snd_407_ = lean_ctor_get(v_d_399_, 1);
lean_inc(v_snd_407_);
lean_dec(v_d_399_);
v___x_408_ = lean_int_add(v_x_401_, v_fst_406_);
lean_dec(v_fst_406_);
lean_dec(v_x_401_);
v___x_409_ = lean_int_add(v_y_402_, v_snd_407_);
lean_dec(v_snd_407_);
lean_dec(v_y_402_);
if (v_isShared_405_ == 0)
{
lean_ctor_set(v___x_404_, 1, v___x_409_);
lean_ctor_set(v___x_404_, 0, v___x_408_);
v___x_411_ = v___x_404_;
goto v_reusejp_410_;
}
else
{
lean_object* v_reuseFailAlloc_416_; 
v_reuseFailAlloc_416_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_416_, 0, v___x_408_);
lean_ctor_set(v_reuseFailAlloc_416_, 1, v___x_409_);
v___x_411_ = v_reuseFailAlloc_416_;
goto v_reusejp_410_;
}
v_reusejp_410_:
{
lean_object* v___x_413_; 
if (v_isShared_397_ == 0)
{
lean_ctor_set(v___x_396_, 1, v_a_391_);
lean_ctor_set(v___x_396_, 0, v___x_411_);
v___x_413_ = v___x_396_;
goto v_reusejp_412_;
}
else
{
lean_object* v_reuseFailAlloc_415_; 
v_reuseFailAlloc_415_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_415_, 0, v___x_411_);
lean_ctor_set(v_reuseFailAlloc_415_, 1, v_a_391_);
v___x_413_ = v_reuseFailAlloc_415_;
goto v_reusejp_412_;
}
v_reusejp_412_:
{
v_a_390_ = v_tail_394_;
v_a_391_ = v___x_413_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___boxed(lean_object* v_deltas_419_, lean_object* v_s_420_, lean_object* v_a_421_, lean_object* v_a_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1(v_deltas_419_, v_s_420_, v_a_421_, v_a_422_);
lean_dec(v_s_420_);
lean_dec(v_deltas_419_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0(lean_object* v_s_424_, lean_object* v_centre_425_, uint8_t v_ccw_426_, lean_object* v_a_427_, lean_object* v_a_428_){
_start:
{
if (lean_obj_tag(v_a_427_) == 0)
{
lean_object* v___x_429_; 
lean_dec_ref(v_centre_425_);
v___x_429_ = l_List_reverse___redArg(v_a_428_);
return v___x_429_;
}
else
{
lean_object* v_head_430_; lean_object* v_tail_431_; lean_object* v___x_433_; uint8_t v_isShared_434_; uint8_t v_isSharedCheck_441_; 
v_head_430_ = lean_ctor_get(v_a_427_, 0);
v_tail_431_ = lean_ctor_get(v_a_427_, 1);
v_isSharedCheck_441_ = !lean_is_exclusive(v_a_427_);
if (v_isSharedCheck_441_ == 0)
{
v___x_433_ = v_a_427_;
v_isShared_434_ = v_isSharedCheck_441_;
goto v_resetjp_432_;
}
else
{
lean_inc(v_tail_431_);
lean_inc(v_head_430_);
lean_dec(v_a_427_);
v___x_433_ = lean_box(0);
v_isShared_434_ = v_isSharedCheck_441_;
goto v_resetjp_432_;
}
v_resetjp_432_:
{
lean_object* v___x_435_; lean_object* v___x_436_; lean_object* v___x_438_; 
v___x_435_ = lp_choreo_Choreo_State_at(v_s_424_, v_head_430_);
lean_inc_ref(v_centre_425_);
v___x_436_ = lp_choreo_Choreo_Pt_quarter(v_centre_425_, v___x_435_, v_ccw_426_);
lean_dec_ref(v___x_435_);
if (v_isShared_434_ == 0)
{
lean_ctor_set(v___x_433_, 1, v_a_428_);
lean_ctor_set(v___x_433_, 0, v___x_436_);
v___x_438_ = v___x_433_;
goto v_reusejp_437_;
}
else
{
lean_object* v_reuseFailAlloc_440_; 
v_reuseFailAlloc_440_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_440_, 0, v___x_436_);
lean_ctor_set(v_reuseFailAlloc_440_, 1, v_a_428_);
v___x_438_ = v_reuseFailAlloc_440_;
goto v_reusejp_437_;
}
v_reusejp_437_:
{
v_a_427_ = v_tail_431_;
v_a_428_ = v___x_438_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0___boxed(lean_object* v_s_442_, lean_object* v_centre_443_, lean_object* v_ccw_444_, lean_object* v_a_445_, lean_object* v_a_446_){
_start:
{
uint8_t v_ccw_231__boxed_447_; lean_object* v_res_448_; 
v_ccw_231__boxed_447_ = lean_unbox(v_ccw_444_);
v_res_448_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0(v_s_442_, v_centre_443_, v_ccw_231__boxed_447_, v_a_445_, v_a_446_);
lean_dec(v_s_442_);
return v_res_448_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_next(lean_object* v_op_449_, lean_object* v_n_450_, lean_object* v_s_451_){
_start:
{
switch(lean_obj_tag(v_op_449_))
{
case 0:
{
lean_object* v_target_452_; 
lean_dec(v_n_450_);
v_target_452_ = lean_ctor_get(v_op_449_, 0);
lean_inc(v_target_452_);
lean_dec_ref_known(v_op_449_, 2);
return v_target_452_;
}
case 1:
{
lean_object* v_centre_453_; uint8_t v_ccw_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; 
v_centre_453_ = lean_ctor_get(v_op_449_, 0);
lean_inc_ref(v_centre_453_);
v_ccw_454_ = lean_ctor_get_uint8(v_op_449_, sizeof(void*)*2);
lean_dec_ref_known(v_op_449_, 2);
v___x_455_ = l_List_range(v_n_450_);
v___x_456_ = lean_box(0);
v___x_457_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__0(v_s_451_, v_centre_453_, v_ccw_454_, v___x_455_, v___x_456_);
return v___x_457_;
}
case 2:
{
lean_object* v_deltas_458_; lean_object* v___x_459_; lean_object* v___x_460_; lean_object* v___x_461_; 
v_deltas_458_ = lean_ctor_get(v_op_449_, 0);
lean_inc(v_deltas_458_);
lean_dec_ref_known(v_op_449_, 2);
v___x_459_ = l_List_range(v_n_450_);
v___x_460_ = lean_box(0);
v___x_461_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1(v_deltas_458_, v_s_451_, v___x_459_, v___x_460_);
lean_dec(v_deltas_458_);
return v___x_461_;
}
default: 
{
lean_object* v_target_462_; 
lean_dec(v_n_450_);
v_target_462_ = lean_ctor_get(v_op_449_, 3);
lean_inc(v_target_462_);
lean_dec_ref_known(v_op_449_, 5);
return v_target_462_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_next___boxed(lean_object* v_op_463_, lean_object* v_n_464_, lean_object* v_s_465_){
_start:
{
lean_object* v_res_466_; 
v_res_466_ = lp_choreo_Choreo_Op_next(v_op_463_, v_n_464_, v_s_465_);
lean_dec(v_s_465_);
return v_res_466_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_pathOf(lean_object* v_op_467_, lean_object* v_n_468_, lean_object* v_s_469_, lean_object* v_i_470_){
_start:
{
if (lean_obj_tag(v_op_467_) == 1)
{
lean_object* v_centre_471_; uint8_t v_ccw_472_; lean_object* v___x_473_; lean_object* v___x_474_; 
lean_dec(v_n_468_);
v_centre_471_ = lean_ctor_get(v_op_467_, 0);
lean_inc_ref(v_centre_471_);
v_ccw_472_ = lean_ctor_get_uint8(v_op_467_, sizeof(void*)*2);
lean_dec_ref_known(v_op_467_, 2);
v___x_473_ = lp_choreo_Choreo_State_at(v_s_469_, v_i_470_);
v___x_474_ = lp_choreo_Choreo_rotatePath(v_centre_471_, v___x_473_, v_ccw_472_);
lean_dec_ref(v___x_473_);
lean_dec_ref(v_centre_471_);
return v___x_474_;
}
else
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; lean_object* v___x_478_; 
lean_inc(v_i_470_);
v___x_475_ = lp_choreo_Choreo_State_at(v_s_469_, v_i_470_);
v___x_476_ = lp_choreo_Choreo_Op_next(v_op_467_, v_n_468_, v_s_469_);
v___x_477_ = lp_choreo_Choreo_State_at(v___x_476_, v_i_470_);
lean_dec(v___x_476_);
v___x_478_ = lp_choreo_Choreo_easePath(v___x_475_, v___x_477_);
return v___x_478_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_pathOf___boxed(lean_object* v_op_479_, lean_object* v_n_480_, lean_object* v_s_481_, lean_object* v_i_482_){
_start:
{
lean_object* v_res_483_; 
v_res_483_ = lp_choreo_Choreo_Op_pathOf(v_op_479_, v_n_480_, v_s_481_, v_i_482_);
lean_dec(v_s_481_);
return v_res_483_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(lean_object* v_op_484_, lean_object* v___x_485_, lean_object* v_s_486_, lean_object* v_a_487_, lean_object* v_a_488_){
_start:
{
if (lean_obj_tag(v_a_487_) == 0)
{
lean_object* v___x_489_; 
lean_dec(v___x_485_);
lean_dec_ref(v_op_484_);
v___x_489_ = l_List_reverse___redArg(v_a_488_);
return v___x_489_;
}
else
{
lean_object* v_head_490_; lean_object* v_tail_491_; lean_object* v___x_493_; uint8_t v_isShared_494_; uint8_t v_isSharedCheck_500_; 
v_head_490_ = lean_ctor_get(v_a_487_, 0);
v_tail_491_ = lean_ctor_get(v_a_487_, 1);
v_isSharedCheck_500_ = !lean_is_exclusive(v_a_487_);
if (v_isSharedCheck_500_ == 0)
{
v___x_493_ = v_a_487_;
v_isShared_494_ = v_isSharedCheck_500_;
goto v_resetjp_492_;
}
else
{
lean_inc(v_tail_491_);
lean_inc(v_head_490_);
lean_dec(v_a_487_);
v___x_493_ = lean_box(0);
v_isShared_494_ = v_isSharedCheck_500_;
goto v_resetjp_492_;
}
v_resetjp_492_:
{
lean_object* v___x_495_; lean_object* v___x_497_; 
lean_inc(v___x_485_);
lean_inc_ref(v_op_484_);
v___x_495_ = lp_choreo_Choreo_Op_pathOf(v_op_484_, v___x_485_, v_s_486_, v_head_490_);
if (v_isShared_494_ == 0)
{
lean_ctor_set(v___x_493_, 1, v_a_488_);
lean_ctor_set(v___x_493_, 0, v___x_495_);
v___x_497_ = v___x_493_;
goto v_reusejp_496_;
}
else
{
lean_object* v_reuseFailAlloc_499_; 
v_reuseFailAlloc_499_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_499_, 0, v___x_495_);
lean_ctor_set(v_reuseFailAlloc_499_, 1, v_a_488_);
v___x_497_ = v_reuseFailAlloc_499_;
goto v_reusejp_496_;
}
v_reusejp_496_:
{
v_a_487_ = v_tail_491_;
v_a_488_ = v___x_497_;
goto _start;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0___boxed(lean_object* v_op_501_, lean_object* v___x_502_, lean_object* v_s_503_, lean_object* v_a_504_, lean_object* v_a_505_){
_start:
{
lean_object* v_res_506_; 
v_res_506_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(v_op_501_, v___x_502_, v_s_503_, v_a_504_, v_a_505_);
lean_dec(v_s_503_);
return v_res_506_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_phase(lean_object* v_op_507_, lean_object* v_c_508_, lean_object* v_t_509_, lean_object* v_s_510_){
_start:
{
lean_object* v___y_512_; 
if (lean_obj_tag(v_op_507_) == 3)
{
lean_object* v_beats_523_; 
v_beats_523_ = lean_ctor_get(v_op_507_, 4);
lean_inc(v_beats_523_);
v___y_512_ = v_beats_523_;
goto v___jp_511_;
}
else
{
lean_object* v_beats_524_; 
v_beats_524_ = lean_ctor_get(v_op_507_, 1);
lean_inc(v_beats_524_);
v___y_512_ = v_beats_524_;
goto v___jp_511_;
}
v___jp_511_:
{
lean_object* v_n_513_; lean_object* v_stage_514_; lean_object* v_ticksPerBeat_515_; lean_object* v___x_516_; lean_object* v___x_517_; lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; lean_object* v___x_521_; lean_object* v___x_522_; 
v_n_513_ = lean_ctor_get(v_c_508_, 0);
lean_inc_n(v_n_513_, 2);
v_stage_514_ = lean_ctor_get(v_c_508_, 3);
lean_inc_ref(v_stage_514_);
v_ticksPerBeat_515_ = lean_ctor_get(v_c_508_, 4);
lean_inc(v_ticksPerBeat_515_);
lean_dec_ref(v_c_508_);
v___x_516_ = lean_nat_mul(v___y_512_, v_ticksPerBeat_515_);
lean_dec(v_ticksPerBeat_515_);
lean_dec(v___y_512_);
v___x_517_ = lean_nat_add(v_t_509_, v___x_516_);
lean_dec(v___x_516_);
v___x_518_ = l_List_range(v_n_513_);
v___x_519_ = lean_box(0);
v___x_520_ = lp_choreo_List_mapTR_loop___at___00Choreo_Op_phase_spec__0(v_op_507_, v_n_513_, v_s_510_, v___x_518_, v___x_519_);
v___x_521_ = lean_box(0);
v___x_522_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_522_, 0, v_t_509_);
lean_ctor_set(v___x_522_, 1, v___x_517_);
lean_ctor_set(v___x_522_, 2, v___x_520_);
lean_ctor_set(v___x_522_, 3, v_stage_514_);
lean_ctor_set(v___x_522_, 4, v___x_519_);
lean_ctor_set(v___x_522_, 5, v___x_519_);
lean_ctor_set(v___x_522_, 6, v___x_519_);
lean_ctor_set(v___x_522_, 7, v___x_521_);
return v___x_522_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_phase___boxed(lean_object* v_op_525_, lean_object* v_c_526_, lean_object* v_t_527_, lean_object* v_s_528_){
_start:
{
lean_object* v_res_529_; 
v_res_529_ = lp_choreo_Choreo_Op_phase(v_op_525_, v_c_526_, v_t_527_, v_s_528_);
lean_dec(v_s_528_);
return v_res_529_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_slidePairOk(lean_object* v_d_530_, lean_object* v_a_531_, lean_object* v_b_532_, lean_object* v_da_533_, lean_object* v_db_534_){
_start:
{
lean_object* v_fst_535_; lean_object* v_snd_536_; lean_object* v_fst_537_; lean_object* v_snd_538_; uint8_t v___x_555_; 
v_fst_535_ = lean_ctor_get(v_da_533_, 0);
v_snd_536_ = lean_ctor_get(v_da_533_, 1);
v_fst_537_ = lean_ctor_get(v_db_534_, 0);
v_snd_538_ = lean_ctor_get(v_db_534_, 1);
v___x_555_ = lean_int_dec_eq(v_fst_535_, v_fst_537_);
if (v___x_555_ == 0)
{
goto v___jp_547_;
}
else
{
uint8_t v___x_556_; 
v___x_556_ = lean_int_dec_eq(v_snd_536_, v_snd_538_);
if (v___x_556_ == 0)
{
goto v___jp_547_;
}
else
{
lean_object* v___x_557_; lean_object* v___x_558_; uint8_t v___x_559_; 
v___x_557_ = lean_int_mul(v_d_530_, v_d_530_);
v___x_558_ = lp_choreo_Choreo_gapSq_x27(v_a_531_, v_b_532_);
v___x_559_ = lean_int_dec_le(v___x_557_, v___x_558_);
lean_dec(v___x_558_);
lean_dec(v___x_557_);
if (v___x_559_ == 0)
{
goto v___jp_547_;
}
else
{
return v___x_559_;
}
}
}
v___jp_539_:
{
uint8_t v___x_540_; 
v___x_540_ = lean_int_dec_eq(v_fst_535_, v_fst_537_);
if (v___x_540_ == 0)
{
return v___x_540_;
}
else
{
lean_object* v_x_541_; lean_object* v_x_542_; lean_object* v___x_543_; uint8_t v___x_544_; 
v_x_541_ = lean_ctor_get(v_a_531_, 0);
v_x_542_ = lean_ctor_get(v_b_532_, 0);
v___x_543_ = lean_int_sub(v_x_541_, v_x_542_);
v___x_544_ = lean_int_dec_le(v_d_530_, v___x_543_);
lean_dec(v___x_543_);
if (v___x_544_ == 0)
{
lean_object* v___x_545_; uint8_t v___x_546_; 
v___x_545_ = lean_int_sub(v_x_542_, v_x_541_);
v___x_546_ = lean_int_dec_le(v_d_530_, v___x_545_);
lean_dec(v___x_545_);
return v___x_546_;
}
else
{
return v___x_544_;
}
}
}
v___jp_547_:
{
uint8_t v___x_548_; 
v___x_548_ = lean_int_dec_eq(v_snd_536_, v_snd_538_);
if (v___x_548_ == 0)
{
goto v___jp_539_;
}
else
{
lean_object* v_y_549_; lean_object* v_y_550_; lean_object* v___x_551_; uint8_t v___x_552_; 
v_y_549_ = lean_ctor_get(v_a_531_, 1);
v_y_550_ = lean_ctor_get(v_b_532_, 1);
v___x_551_ = lean_int_sub(v_y_549_, v_y_550_);
v___x_552_ = lean_int_dec_le(v_d_530_, v___x_551_);
lean_dec(v___x_551_);
if (v___x_552_ == 0)
{
lean_object* v___x_553_; uint8_t v___x_554_; 
v___x_553_ = lean_int_sub(v_y_550_, v_y_549_);
v___x_554_ = lean_int_dec_le(v_d_530_, v___x_553_);
lean_dec(v___x_553_);
if (v___x_554_ == 0)
{
goto v___jp_539_;
}
else
{
return v___x_554_;
}
}
else
{
return v___x_552_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_slidePairOk___boxed(lean_object* v_d_560_, lean_object* v_a_561_, lean_object* v_b_562_, lean_object* v_da_563_, lean_object* v_db_564_){
_start:
{
uint8_t v_res_565_; lean_object* v_r_566_; 
v_res_565_ = lp_choreo_Choreo_slidePairOk(v_d_560_, v_a_561_, v_b_562_, v_da_563_, v_db_564_);
lean_dec_ref(v_db_564_);
lean_dec_ref(v_da_563_);
lean_dec_ref(v_b_562_);
lean_dec_ref(v_a_561_);
lean_dec(v_d_560_);
v_r_566_ = lean_box(v_res_565_);
return v_r_566_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_slideClear_spec__0(lean_object* v_c_567_, lean_object* v_s_568_, lean_object* v_i_569_, lean_object* v_ds_570_, lean_object* v_x_571_){
_start:
{
if (lean_obj_tag(v_x_571_) == 0)
{
uint8_t v___x_572_; 
lean_dec(v_i_569_);
v___x_572_ = 1;
return v___x_572_;
}
else
{
lean_object* v_head_573_; lean_object* v_tail_574_; lean_object* v_dmin_575_; lean_object* v___x_576_; lean_object* v___x_577_; lean_object* v___x_578_; lean_object* v___x_579_; lean_object* v___x_580_; uint8_t v___x_581_; 
v_head_573_ = lean_ctor_get(v_x_571_, 0);
lean_inc_n(v_head_573_, 2);
v_tail_574_ = lean_ctor_get(v_x_571_, 1);
lean_inc(v_tail_574_);
lean_dec_ref_known(v_x_571_, 2);
v_dmin_575_ = lean_ctor_get(v_c_567_, 1);
lean_inc_n(v_i_569_, 2);
v___x_576_ = lp_choreo_Choreo_State_at(v_s_568_, v_i_569_);
v___x_577_ = lp_choreo_Choreo_State_at(v_s_568_, v_head_573_);
v___x_578_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1, &lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__1);
v___x_579_ = l_List_getD___redArg(v_ds_570_, v_i_569_, v___x_578_);
v___x_580_ = l_List_getD___redArg(v_ds_570_, v_head_573_, v___x_578_);
v___x_581_ = lp_choreo_Choreo_slidePairOk(v_dmin_575_, v___x_576_, v___x_577_, v___x_579_, v___x_580_);
lean_dec(v___x_580_);
lean_dec(v___x_579_);
lean_dec_ref(v___x_577_);
lean_dec_ref(v___x_576_);
if (v___x_581_ == 0)
{
lean_dec(v_tail_574_);
lean_dec(v_i_569_);
return v___x_581_;
}
else
{
v_x_571_ = v_tail_574_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_slideClear_spec__0___boxed(lean_object* v_c_583_, lean_object* v_s_584_, lean_object* v_i_585_, lean_object* v_ds_586_, lean_object* v_x_587_){
_start:
{
uint8_t v_res_588_; lean_object* v_r_589_; 
v_res_588_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__0(v_c_583_, v_s_584_, v_i_585_, v_ds_586_, v_x_587_);
lean_dec(v_ds_586_);
lean_dec(v_s_584_);
lean_dec_ref(v_c_583_);
v_r_589_ = lean_box(v_res_588_);
return v_r_589_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_slideClear_spec__1(lean_object* v_c_590_, lean_object* v_s_591_, lean_object* v_ds_592_, lean_object* v_x_593_){
_start:
{
if (lean_obj_tag(v_x_593_) == 0)
{
uint8_t v___x_594_; 
v___x_594_ = 1;
return v___x_594_;
}
else
{
lean_object* v_head_595_; lean_object* v_tail_596_; lean_object* v___x_597_; uint8_t v___x_598_; 
v_head_595_ = lean_ctor_get(v_x_593_, 0);
lean_inc_n(v_head_595_, 2);
v_tail_596_ = lean_ctor_get(v_x_593_, 1);
lean_inc(v_tail_596_);
lean_dec_ref_known(v_x_593_, 2);
v___x_597_ = l_List_range(v_head_595_);
v___x_598_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__0(v_c_590_, v_s_591_, v_head_595_, v_ds_592_, v___x_597_);
if (v___x_598_ == 0)
{
lean_dec(v_tail_596_);
return v___x_598_;
}
else
{
v_x_593_ = v_tail_596_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_slideClear_spec__1___boxed(lean_object* v_c_600_, lean_object* v_s_601_, lean_object* v_ds_602_, lean_object* v_x_603_){
_start:
{
uint8_t v_res_604_; lean_object* v_r_605_; 
v_res_604_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__1(v_c_600_, v_s_601_, v_ds_602_, v_x_603_);
lean_dec(v_ds_602_);
lean_dec(v_s_601_);
lean_dec_ref(v_c_600_);
v_r_605_ = lean_box(v_res_604_);
return v_r_605_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_slideClear(lean_object* v_c_606_, lean_object* v_s_607_, lean_object* v_ds_608_){
_start:
{
lean_object* v_n_609_; lean_object* v___x_610_; uint8_t v___x_611_; 
v_n_609_ = lean_ctor_get(v_c_606_, 0);
lean_inc(v_n_609_);
v___x_610_ = l_List_range(v_n_609_);
v___x_611_ = lp_choreo_List_all___at___00Choreo_slideClear_spec__1(v_c_606_, v_s_607_, v_ds_608_, v___x_610_);
lean_dec_ref(v_c_606_);
return v___x_611_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_slideClear___boxed(lean_object* v_c_612_, lean_object* v_s_613_, lean_object* v_ds_614_){
_start:
{
uint8_t v_res_615_; lean_object* v_r_616_; 
v_res_615_ = lp_choreo_Choreo_slideClear(v_c_612_, v_s_613_, v_ds_614_);
lean_dec(v_ds_614_);
lean_dec(v_s_613_);
v_r_616_ = lean_box(v_res_615_);
return v_r_616_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapQuad(lean_object* v_a_617_, lean_object* v_b_618_, lean_object* v_c_619_, lean_object* v_d_620_){
_start:
{
lean_object* v_x_621_; lean_object* v_y_622_; lean_object* v_x_623_; lean_object* v_y_624_; lean_object* v_x_625_; lean_object* v_y_626_; lean_object* v___x_628_; uint8_t v_isShared_629_; uint8_t v_isSharedCheck_659_; 
v_x_621_ = lean_ctor_get(v_a_617_, 0);
v_y_622_ = lean_ctor_get(v_a_617_, 1);
v_x_623_ = lean_ctor_get(v_c_619_, 0);
v_y_624_ = lean_ctor_get(v_c_619_, 1);
v_x_625_ = lean_ctor_get(v_b_618_, 0);
v_y_626_ = lean_ctor_get(v_b_618_, 1);
v_isSharedCheck_659_ = !lean_is_exclusive(v_b_618_);
if (v_isSharedCheck_659_ == 0)
{
v___x_628_ = v_b_618_;
v_isShared_629_ = v_isSharedCheck_659_;
goto v_resetjp_627_;
}
else
{
lean_inc(v_y_626_);
lean_inc(v_x_625_);
lean_dec(v_b_618_);
v___x_628_ = lean_box(0);
v_isShared_629_ = v_isSharedCheck_659_;
goto v_resetjp_627_;
}
v_resetjp_627_:
{
lean_object* v_x_630_; lean_object* v_y_631_; lean_object* v___x_633_; uint8_t v_isShared_634_; uint8_t v_isSharedCheck_658_; 
v_x_630_ = lean_ctor_get(v_d_620_, 0);
v_y_631_ = lean_ctor_get(v_d_620_, 1);
v_isSharedCheck_658_ = !lean_is_exclusive(v_d_620_);
if (v_isSharedCheck_658_ == 0)
{
v___x_633_ = v_d_620_;
v_isShared_634_ = v_isSharedCheck_658_;
goto v_resetjp_632_;
}
else
{
lean_inc(v_y_631_);
lean_inc(v_x_630_);
lean_dec(v_d_620_);
v___x_633_ = lean_box(0);
v_isShared_634_ = v_isSharedCheck_658_;
goto v_resetjp_632_;
}
v_resetjp_632_:
{
lean_object* v_rx_635_; lean_object* v_ry_636_; lean_object* v___x_637_; lean_object* v___x_638_; lean_object* v_vx_639_; lean_object* v___x_640_; lean_object* v___x_641_; lean_object* v_vy_642_; lean_object* v___x_643_; lean_object* v___x_644_; lean_object* v___x_645_; lean_object* v___x_646_; lean_object* v___x_647_; lean_object* v___x_648_; lean_object* v___x_649_; lean_object* v___x_650_; lean_object* v___x_651_; lean_object* v___x_653_; 
v_rx_635_ = lean_int_sub(v_x_621_, v_x_623_);
v_ry_636_ = lean_int_sub(v_y_622_, v_y_624_);
v___x_637_ = lean_int_sub(v_x_625_, v_x_621_);
lean_dec(v_x_625_);
v___x_638_ = lean_int_sub(v_x_630_, v_x_623_);
lean_dec(v_x_630_);
v_vx_639_ = lean_int_sub(v___x_637_, v___x_638_);
lean_dec(v___x_638_);
lean_dec(v___x_637_);
v___x_640_ = lean_int_sub(v_y_626_, v_y_622_);
lean_dec(v_y_626_);
v___x_641_ = lean_int_sub(v_y_631_, v_y_624_);
lean_dec(v_y_631_);
v_vy_642_ = lean_int_sub(v___x_640_, v___x_641_);
lean_dec(v___x_641_);
lean_dec(v___x_640_);
v___x_643_ = lean_int_mul(v_vx_639_, v_vx_639_);
v___x_644_ = lean_int_mul(v_vy_642_, v_vy_642_);
v___x_645_ = lean_int_add(v___x_643_, v___x_644_);
lean_dec(v___x_644_);
lean_dec(v___x_643_);
v___x_646_ = lean_int_mul(v_rx_635_, v_vx_639_);
lean_dec(v_vx_639_);
v___x_647_ = lean_int_mul(v_ry_636_, v_vy_642_);
lean_dec(v_vy_642_);
v___x_648_ = lean_int_add(v___x_646_, v___x_647_);
lean_dec(v___x_647_);
lean_dec(v___x_646_);
v___x_649_ = lean_int_mul(v_rx_635_, v_rx_635_);
lean_dec(v_rx_635_);
v___x_650_ = lean_int_mul(v_ry_636_, v_ry_636_);
lean_dec(v_ry_636_);
v___x_651_ = lean_int_add(v___x_649_, v___x_650_);
lean_dec(v___x_650_);
lean_dec(v___x_649_);
if (v_isShared_634_ == 0)
{
lean_ctor_set(v___x_633_, 1, v___x_651_);
lean_ctor_set(v___x_633_, 0, v___x_648_);
v___x_653_ = v___x_633_;
goto v_reusejp_652_;
}
else
{
lean_object* v_reuseFailAlloc_657_; 
v_reuseFailAlloc_657_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_657_, 0, v___x_648_);
lean_ctor_set(v_reuseFailAlloc_657_, 1, v___x_651_);
v___x_653_ = v_reuseFailAlloc_657_;
goto v_reusejp_652_;
}
v_reusejp_652_:
{
lean_object* v___x_655_; 
if (v_isShared_629_ == 0)
{
lean_ctor_set(v___x_628_, 1, v___x_653_);
lean_ctor_set(v___x_628_, 0, v___x_645_);
v___x_655_ = v___x_628_;
goto v_reusejp_654_;
}
else
{
lean_object* v_reuseFailAlloc_656_; 
v_reuseFailAlloc_656_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_656_, 0, v___x_645_);
lean_ctor_set(v_reuseFailAlloc_656_, 1, v___x_653_);
v___x_655_ = v_reuseFailAlloc_656_;
goto v_reusejp_654_;
}
v_reusejp_654_:
{
return v___x_655_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_gapQuad___boxed(lean_object* v_a_660_, lean_object* v_b_661_, lean_object* v_c_662_, lean_object* v_d_663_){
_start:
{
lean_object* v_res_664_; 
v_res_664_ = lp_choreo_Choreo_gapQuad(v_a_660_, v_b_661_, v_c_662_, v_d_663_);
lean_dec_ref(v_c_662_);
lean_dec_ref(v_a_660_);
return v_res_664_;
}
}
static lean_object* _init_lp_choreo_Choreo_linearPairClear___closed__0(void){
_start:
{
lean_object* v___x_665_; lean_object* v___x_666_; 
v___x_665_ = lean_unsigned_to_nat(2u);
v___x_666_ = lean_nat_to_int(v___x_665_);
return v___x_666_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_linearPairClear(lean_object* v_m_667_, lean_object* v_a_668_, lean_object* v_b_669_, lean_object* v_c_670_, lean_object* v_d_671_){
_start:
{
lean_object* v___x_672_; lean_object* v_snd_673_; lean_object* v_fst_674_; lean_object* v_fst_675_; lean_object* v_snd_676_; lean_object* v___x_677_; uint8_t v___x_678_; 
v___x_672_ = lp_choreo_Choreo_gapQuad(v_a_668_, v_b_669_, v_c_670_, v_d_671_);
v_snd_673_ = lean_ctor_get(v___x_672_, 1);
lean_inc(v_snd_673_);
v_fst_674_ = lean_ctor_get(v___x_672_, 0);
lean_inc(v_fst_674_);
lean_dec_ref(v___x_672_);
v_fst_675_ = lean_ctor_get(v_snd_673_, 0);
lean_inc(v_fst_675_);
v_snd_676_ = lean_ctor_get(v_snd_673_, 1);
lean_inc(v_snd_676_);
lean_dec(v_snd_673_);
v___x_677_ = lean_obj_once(&lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0, &lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0_once, _init_lp_choreo_List_mapTR_loop___at___00Choreo_Op_next_spec__1___closed__0);
v___x_678_ = lean_int_dec_eq(v_fst_674_, v___x_677_);
if (v___x_678_ == 0)
{
uint8_t v___x_679_; 
v___x_679_ = lean_int_dec_le(v___x_677_, v_fst_675_);
if (v___x_679_ == 0)
{
lean_object* v___x_680_; uint8_t v___x_681_; 
v___x_680_ = lean_int_neg(v_fst_675_);
v___x_681_ = lean_int_dec_le(v_fst_674_, v___x_680_);
lean_dec(v___x_680_);
if (v___x_681_ == 0)
{
lean_object* v___x_682_; lean_object* v___x_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; uint8_t v___x_687_; 
v___x_682_ = lean_int_mul(v_m_667_, v_m_667_);
v___x_683_ = lean_int_mul(v___x_682_, v_fst_674_);
lean_dec(v___x_682_);
v___x_684_ = lean_int_mul(v_snd_676_, v_fst_674_);
lean_dec(v_fst_674_);
lean_dec(v_snd_676_);
v___x_685_ = lean_int_mul(v_fst_675_, v_fst_675_);
lean_dec(v_fst_675_);
v___x_686_ = lean_int_sub(v___x_684_, v___x_685_);
lean_dec(v___x_685_);
lean_dec(v___x_684_);
v___x_687_ = lean_int_dec_le(v___x_683_, v___x_686_);
lean_dec(v___x_686_);
lean_dec(v___x_683_);
return v___x_687_;
}
else
{
lean_object* v___x_688_; lean_object* v___x_689_; lean_object* v___x_690_; lean_object* v___x_691_; lean_object* v___x_692_; uint8_t v___x_693_; 
v___x_688_ = lean_int_mul(v_m_667_, v_m_667_);
v___x_689_ = lean_obj_once(&lp_choreo_Choreo_linearPairClear___closed__0, &lp_choreo_Choreo_linearPairClear___closed__0_once, _init_lp_choreo_Choreo_linearPairClear___closed__0);
v___x_690_ = lean_int_mul(v___x_689_, v_fst_675_);
lean_dec(v_fst_675_);
v___x_691_ = lean_int_add(v_fst_674_, v___x_690_);
lean_dec(v___x_690_);
lean_dec(v_fst_674_);
v___x_692_ = lean_int_add(v___x_691_, v_snd_676_);
lean_dec(v_snd_676_);
lean_dec(v___x_691_);
v___x_693_ = lean_int_dec_le(v___x_688_, v___x_692_);
lean_dec(v___x_692_);
lean_dec(v___x_688_);
return v___x_693_;
}
}
else
{
lean_object* v___x_694_; uint8_t v___x_695_; 
lean_dec(v_fst_675_);
lean_dec(v_fst_674_);
v___x_694_ = lean_int_mul(v_m_667_, v_m_667_);
v___x_695_ = lean_int_dec_le(v___x_694_, v_snd_676_);
lean_dec(v_snd_676_);
lean_dec(v___x_694_);
return v___x_695_;
}
}
else
{
uint8_t v___x_696_; 
lean_dec(v_fst_674_);
v___x_696_ = lean_int_dec_eq(v_fst_675_, v___x_677_);
lean_dec(v_fst_675_);
if (v___x_696_ == 0)
{
lean_dec(v_snd_676_);
return v___x_696_;
}
else
{
lean_object* v___x_697_; uint8_t v___x_698_; 
v___x_697_ = lean_int_mul(v_m_667_, v_m_667_);
v___x_698_ = lean_int_dec_le(v___x_697_, v_snd_676_);
lean_dec(v_snd_676_);
lean_dec(v___x_697_);
return v___x_698_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_linearPairClear___boxed(lean_object* v_m_699_, lean_object* v_a_700_, lean_object* v_b_701_, lean_object* v_c_702_, lean_object* v_d_703_){
_start:
{
uint8_t v_res_704_; lean_object* v_r_705_; 
v_res_704_ = lp_choreo_Choreo_linearPairClear(v_m_699_, v_a_700_, v_b_701_, v_c_702_, v_d_703_);
lean_dec_ref(v_c_702_);
lean_dec_ref(v_a_700_);
lean_dec(v_m_699_);
v_r_705_ = lean_box(v_res_704_);
return v_r_705_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_moveClear_spec__0(lean_object* v_c_706_, lean_object* v_s_707_, lean_object* v_i_708_, lean_object* v_target_709_, lean_object* v_x_710_){
_start:
{
if (lean_obj_tag(v_x_710_) == 0)
{
uint8_t v___x_711_; 
lean_dec(v_i_708_);
v___x_711_ = 1;
return v___x_711_;
}
else
{
lean_object* v_head_712_; lean_object* v_tail_713_; lean_object* v_dmin_714_; lean_object* v___x_715_; lean_object* v___x_716_; lean_object* v___x_717_; lean_object* v___x_718_; uint8_t v___x_719_; 
v_head_712_ = lean_ctor_get(v_x_710_, 0);
lean_inc_n(v_head_712_, 2);
v_tail_713_ = lean_ctor_get(v_x_710_, 1);
lean_inc(v_tail_713_);
lean_dec_ref_known(v_x_710_, 2);
v_dmin_714_ = lean_ctor_get(v_c_706_, 1);
lean_inc_n(v_i_708_, 2);
v___x_715_ = lp_choreo_Choreo_State_at(v_s_707_, v_i_708_);
v___x_716_ = lp_choreo_Choreo_State_at(v_target_709_, v_i_708_);
v___x_717_ = lp_choreo_Choreo_State_at(v_s_707_, v_head_712_);
v___x_718_ = lp_choreo_Choreo_State_at(v_target_709_, v_head_712_);
v___x_719_ = lp_choreo_Choreo_linearPairClear(v_dmin_714_, v___x_715_, v___x_716_, v___x_717_, v___x_718_);
lean_dec_ref(v___x_717_);
lean_dec_ref(v___x_715_);
if (v___x_719_ == 0)
{
lean_dec(v_tail_713_);
lean_dec(v_i_708_);
return v___x_719_;
}
else
{
v_x_710_ = v_tail_713_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_moveClear_spec__0___boxed(lean_object* v_c_721_, lean_object* v_s_722_, lean_object* v_i_723_, lean_object* v_target_724_, lean_object* v_x_725_){
_start:
{
uint8_t v_res_726_; lean_object* v_r_727_; 
v_res_726_ = lp_choreo_List_all___at___00Choreo_moveClear_spec__0(v_c_721_, v_s_722_, v_i_723_, v_target_724_, v_x_725_);
lean_dec(v_target_724_);
lean_dec(v_s_722_);
lean_dec_ref(v_c_721_);
v_r_727_ = lean_box(v_res_726_);
return v_r_727_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_moveClear_spec__1(lean_object* v_c_728_, lean_object* v_s_729_, lean_object* v_target_730_, lean_object* v_x_731_){
_start:
{
if (lean_obj_tag(v_x_731_) == 0)
{
uint8_t v___x_732_; 
v___x_732_ = 1;
return v___x_732_;
}
else
{
lean_object* v_head_733_; lean_object* v_tail_734_; lean_object* v___x_735_; uint8_t v___x_736_; 
v_head_733_ = lean_ctor_get(v_x_731_, 0);
lean_inc_n(v_head_733_, 2);
v_tail_734_ = lean_ctor_get(v_x_731_, 1);
lean_inc(v_tail_734_);
lean_dec_ref_known(v_x_731_, 2);
v___x_735_ = l_List_range(v_head_733_);
v___x_736_ = lp_choreo_List_all___at___00Choreo_moveClear_spec__0(v_c_728_, v_s_729_, v_head_733_, v_target_730_, v___x_735_);
if (v___x_736_ == 0)
{
lean_dec(v_tail_734_);
return v___x_736_;
}
else
{
v_x_731_ = v_tail_734_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_moveClear_spec__1___boxed(lean_object* v_c_738_, lean_object* v_s_739_, lean_object* v_target_740_, lean_object* v_x_741_){
_start:
{
uint8_t v_res_742_; lean_object* v_r_743_; 
v_res_742_ = lp_choreo_List_all___at___00Choreo_moveClear_spec__1(v_c_738_, v_s_739_, v_target_740_, v_x_741_);
lean_dec(v_target_740_);
lean_dec(v_s_739_);
lean_dec_ref(v_c_738_);
v_r_743_ = lean_box(v_res_742_);
return v_r_743_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_moveClear(lean_object* v_c_744_, lean_object* v_s_745_, lean_object* v_target_746_){
_start:
{
lean_object* v_n_747_; lean_object* v___x_748_; uint8_t v___x_749_; 
v_n_747_ = lean_ctor_get(v_c_744_, 0);
lean_inc(v_n_747_);
v___x_748_ = l_List_range(v_n_747_);
v___x_749_ = lp_choreo_List_all___at___00Choreo_moveClear_spec__1(v_c_744_, v_s_745_, v_target_746_, v___x_748_);
lean_dec_ref(v_c_744_);
return v___x_749_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_moveClear___boxed(lean_object* v_c_750_, lean_object* v_s_751_, lean_object* v_target_752_){
_start:
{
uint8_t v_res_753_; lean_object* v_r_754_; 
v_res_753_ = lp_choreo_Choreo_moveClear(v_c_750_, v_s_751_, v_target_752_);
lean_dec(v_target_752_);
lean_dec(v_s_751_);
v_r_754_ = lean_box(v_res_753_);
return v_r_754_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(lean_object* v_c_755_, lean_object* v_s_756_, lean_object* v_i_757_, lean_object* v_target_758_, lean_object* v_line_759_, lean_object* v_right_760_, lean_object* v_left_761_, lean_object* v_x_762_){
_start:
{
if (lean_obj_tag(v_x_762_) == 0)
{
uint8_t v___x_763_; 
lean_dec(v_i_757_);
v___x_763_ = 1;
return v___x_763_;
}
else
{
lean_object* v_head_764_; lean_object* v_tail_765_; uint8_t v___y_767_; uint8_t v___y_777_; uint8_t v___y_793_; uint8_t v___x_810_; uint8_t v___y_812_; uint8_t v___y_815_; 
v_head_764_ = lean_ctor_get(v_x_762_, 0);
lean_inc(v_head_764_);
v_tail_765_ = lean_ctor_get(v_x_762_, 1);
lean_inc(v_tail_765_);
lean_dec_ref_known(v_x_762_, 2);
v___x_810_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_757_, v_left_761_);
if (v___x_810_ == 0)
{
v___y_815_ = v___x_810_;
goto v___jp_814_;
}
else
{
uint8_t v___x_818_; 
v___x_818_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_764_, v_left_761_);
v___y_815_ = v___x_818_;
goto v___jp_814_;
}
v___jp_766_:
{
if (v___y_767_ == 0)
{
lean_dec(v_tail_765_);
lean_dec(v_i_757_);
return v___y_767_;
}
else
{
v_x_762_ = v_tail_765_;
goto _start;
}
}
v___jp_769_:
{
lean_object* v_dmin_770_; lean_object* v___x_771_; lean_object* v___x_772_; lean_object* v___x_773_; lean_object* v___x_774_; uint8_t v___x_775_; 
v_dmin_770_ = lean_ctor_get(v_c_755_, 1);
lean_inc_n(v_i_757_, 2);
v___x_771_ = lp_choreo_Choreo_State_at(v_s_756_, v_i_757_);
v___x_772_ = lp_choreo_Choreo_State_at(v_target_758_, v_i_757_);
lean_inc(v_head_764_);
v___x_773_ = lp_choreo_Choreo_State_at(v_s_756_, v_head_764_);
v___x_774_ = lp_choreo_Choreo_State_at(v_target_758_, v_head_764_);
v___x_775_ = lp_choreo_Choreo_linearPairClear(v_dmin_770_, v___x_771_, v___x_772_, v___x_773_, v___x_774_);
lean_dec_ref(v___x_773_);
lean_dec_ref(v___x_771_);
v___y_767_ = v___x_775_;
goto v___jp_766_;
}
v___jp_776_:
{
if (v___y_777_ == 0)
{
lean_dec(v_tail_765_);
lean_dec(v_head_764_);
lean_dec(v_i_757_);
return v___y_777_;
}
else
{
lean_object* v___x_778_; lean_object* v_x_779_; uint8_t v___x_780_; 
lean_inc(v_head_764_);
v___x_778_ = lp_choreo_Choreo_State_at(v_s_756_, v_head_764_);
v_x_779_ = lean_ctor_get(v___x_778_, 0);
lean_inc(v_x_779_);
lean_dec_ref(v___x_778_);
v___x_780_ = lean_int_dec_le(v_x_779_, v_line_759_);
lean_dec(v_x_779_);
if (v___x_780_ == 0)
{
lean_dec(v_tail_765_);
lean_dec(v_head_764_);
lean_dec(v_i_757_);
return v___x_780_;
}
else
{
lean_object* v___x_781_; lean_object* v_x_782_; uint8_t v___x_783_; 
v___x_781_ = lp_choreo_Choreo_State_at(v_target_758_, v_head_764_);
v_x_782_ = lean_ctor_get(v___x_781_, 0);
lean_inc(v_x_782_);
lean_dec_ref(v___x_781_);
v___x_783_ = lean_int_dec_le(v_x_782_, v_line_759_);
lean_dec(v_x_782_);
if (v___x_783_ == 0)
{
lean_dec(v_tail_765_);
lean_dec(v_i_757_);
return v___x_783_;
}
else
{
lean_object* v_dmin_784_; lean_object* v___x_785_; lean_object* v_x_786_; lean_object* v___x_787_; uint8_t v___x_788_; 
v_dmin_784_ = lean_ctor_get(v_c_755_, 1);
lean_inc(v_i_757_);
v___x_785_ = lp_choreo_Choreo_State_at(v_s_756_, v_i_757_);
v_x_786_ = lean_ctor_get(v___x_785_, 0);
lean_inc(v_x_786_);
lean_dec_ref(v___x_785_);
v___x_787_ = lean_int_add(v_line_759_, v_dmin_784_);
v___x_788_ = lean_int_dec_le(v___x_787_, v_x_786_);
lean_dec(v_x_786_);
if (v___x_788_ == 0)
{
lean_dec(v___x_787_);
lean_dec(v_tail_765_);
lean_dec(v_i_757_);
return v___x_788_;
}
else
{
lean_object* v___x_789_; lean_object* v_x_790_; uint8_t v___x_791_; 
lean_inc(v_i_757_);
v___x_789_ = lp_choreo_Choreo_State_at(v_target_758_, v_i_757_);
v_x_790_ = lean_ctor_get(v___x_789_, 0);
lean_inc(v_x_790_);
lean_dec_ref(v___x_789_);
v___x_791_ = lean_int_dec_le(v___x_787_, v_x_790_);
lean_dec(v_x_790_);
lean_dec(v___x_787_);
v___y_767_ = v___x_791_;
goto v___jp_766_;
}
}
}
}
}
v___jp_792_:
{
if (v___y_793_ == 0)
{
uint8_t v___x_794_; 
v___x_794_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_757_, v_right_760_);
if (v___x_794_ == 0)
{
v___y_777_ = v___x_794_;
goto v___jp_776_;
}
else
{
uint8_t v___x_795_; 
v___x_795_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_764_, v_left_761_);
v___y_777_ = v___x_795_;
goto v___jp_776_;
}
}
else
{
lean_object* v___x_796_; lean_object* v_x_797_; uint8_t v___x_798_; 
lean_inc(v_i_757_);
v___x_796_ = lp_choreo_Choreo_State_at(v_s_756_, v_i_757_);
v_x_797_ = lean_ctor_get(v___x_796_, 0);
lean_inc(v_x_797_);
lean_dec_ref(v___x_796_);
v___x_798_ = lean_int_dec_le(v_x_797_, v_line_759_);
lean_dec(v_x_797_);
if (v___x_798_ == 0)
{
lean_dec(v_tail_765_);
lean_dec(v_head_764_);
lean_dec(v_i_757_);
return v___x_798_;
}
else
{
lean_object* v___x_799_; lean_object* v_x_800_; uint8_t v___x_801_; 
lean_inc(v_i_757_);
v___x_799_ = lp_choreo_Choreo_State_at(v_target_758_, v_i_757_);
v_x_800_ = lean_ctor_get(v___x_799_, 0);
lean_inc(v_x_800_);
lean_dec_ref(v___x_799_);
v___x_801_ = lean_int_dec_le(v_x_800_, v_line_759_);
lean_dec(v_x_800_);
if (v___x_801_ == 0)
{
lean_dec(v_tail_765_);
lean_dec(v_head_764_);
lean_dec(v_i_757_);
return v___x_801_;
}
else
{
lean_object* v_dmin_802_; lean_object* v___x_803_; lean_object* v_x_804_; lean_object* v___x_805_; uint8_t v___x_806_; 
v_dmin_802_ = lean_ctor_get(v_c_755_, 1);
lean_inc(v_head_764_);
v___x_803_ = lp_choreo_Choreo_State_at(v_s_756_, v_head_764_);
v_x_804_ = lean_ctor_get(v___x_803_, 0);
lean_inc(v_x_804_);
lean_dec_ref(v___x_803_);
v___x_805_ = lean_int_add(v_line_759_, v_dmin_802_);
v___x_806_ = lean_int_dec_le(v___x_805_, v_x_804_);
lean_dec(v_x_804_);
if (v___x_806_ == 0)
{
lean_dec(v___x_805_);
lean_dec(v_tail_765_);
lean_dec(v_head_764_);
lean_dec(v_i_757_);
return v___x_806_;
}
else
{
lean_object* v___x_807_; lean_object* v_x_808_; uint8_t v___x_809_; 
v___x_807_ = lp_choreo_Choreo_State_at(v_target_758_, v_head_764_);
v_x_808_ = lean_ctor_get(v___x_807_, 0);
lean_inc(v_x_808_);
lean_dec_ref(v___x_807_);
v___x_809_ = lean_int_dec_le(v___x_805_, v_x_808_);
lean_dec(v_x_808_);
lean_dec(v___x_805_);
v___y_767_ = v___x_809_;
goto v___jp_766_;
}
}
}
}
}
v___jp_811_:
{
if (v___y_812_ == 0)
{
if (v___x_810_ == 0)
{
v___y_793_ = v___x_810_;
goto v___jp_792_;
}
else
{
uint8_t v___x_813_; 
v___x_813_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_764_, v_right_760_);
v___y_793_ = v___x_813_;
goto v___jp_792_;
}
}
else
{
goto v___jp_769_;
}
}
v___jp_814_:
{
if (v___y_815_ == 0)
{
uint8_t v___x_816_; 
v___x_816_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_757_, v_right_760_);
if (v___x_816_ == 0)
{
v___y_812_ = v___x_816_;
goto v___jp_811_;
}
else
{
uint8_t v___x_817_; 
v___x_817_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_764_, v_right_760_);
v___y_812_ = v___x_817_;
goto v___jp_811_;
}
}
else
{
goto v___jp_769_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0___boxed(lean_object* v_c_819_, lean_object* v_s_820_, lean_object* v_i_821_, lean_object* v_target_822_, lean_object* v_line_823_, lean_object* v_right_824_, lean_object* v_left_825_, lean_object* v_x_826_){
_start:
{
uint8_t v_res_827_; lean_object* v_r_828_; 
v_res_827_ = lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(v_c_819_, v_s_820_, v_i_821_, v_target_822_, v_line_823_, v_right_824_, v_left_825_, v_x_826_);
lean_dec(v_left_825_);
lean_dec(v_right_824_);
lean_dec(v_line_823_);
lean_dec(v_target_822_);
lean_dec(v_s_820_);
lean_dec_ref(v_c_819_);
v_r_828_ = lean_box(v_res_827_);
return v_r_828_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__0(lean_object* v_left_829_, lean_object* v_c_830_, lean_object* v_s_831_, lean_object* v_i_832_, lean_object* v_target_833_, lean_object* v_line_834_, lean_object* v_right_835_, lean_object* v_x_836_){
_start:
{
if (lean_obj_tag(v_x_836_) == 0)
{
uint8_t v___x_837_; 
lean_dec(v_i_832_);
v___x_837_ = 1;
return v___x_837_;
}
else
{
lean_object* v_head_838_; lean_object* v_tail_839_; uint8_t v___y_841_; uint8_t v___y_851_; uint8_t v___y_867_; uint8_t v___x_884_; uint8_t v___y_886_; uint8_t v___y_889_; 
v_head_838_ = lean_ctor_get(v_x_836_, 0);
lean_inc(v_head_838_);
v_tail_839_ = lean_ctor_get(v_x_836_, 1);
lean_inc(v_tail_839_);
lean_dec_ref_known(v_x_836_, 2);
v___x_884_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_832_, v_left_829_);
if (v___x_884_ == 0)
{
v___y_889_ = v___x_884_;
goto v___jp_888_;
}
else
{
uint8_t v___x_892_; 
v___x_892_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_838_, v_left_829_);
v___y_889_ = v___x_892_;
goto v___jp_888_;
}
v___jp_840_:
{
if (v___y_841_ == 0)
{
lean_dec(v_tail_839_);
lean_dec(v_i_832_);
return v___y_841_;
}
else
{
uint8_t v___x_842_; 
v___x_842_ = lp_choreo_List_all___at___00List_all___at___00Choreo_parClear_spec__0_spec__0(v_c_830_, v_s_831_, v_i_832_, v_target_833_, v_line_834_, v_right_835_, v_left_829_, v_tail_839_);
return v___x_842_;
}
}
v___jp_843_:
{
lean_object* v_dmin_844_; lean_object* v___x_845_; lean_object* v___x_846_; lean_object* v___x_847_; lean_object* v___x_848_; uint8_t v___x_849_; 
v_dmin_844_ = lean_ctor_get(v_c_830_, 1);
lean_inc_n(v_i_832_, 2);
v___x_845_ = lp_choreo_Choreo_State_at(v_s_831_, v_i_832_);
v___x_846_ = lp_choreo_Choreo_State_at(v_target_833_, v_i_832_);
lean_inc(v_head_838_);
v___x_847_ = lp_choreo_Choreo_State_at(v_s_831_, v_head_838_);
v___x_848_ = lp_choreo_Choreo_State_at(v_target_833_, v_head_838_);
v___x_849_ = lp_choreo_Choreo_linearPairClear(v_dmin_844_, v___x_845_, v___x_846_, v___x_847_, v___x_848_);
lean_dec_ref(v___x_847_);
lean_dec_ref(v___x_845_);
v___y_841_ = v___x_849_;
goto v___jp_840_;
}
v___jp_850_:
{
if (v___y_851_ == 0)
{
lean_dec(v_tail_839_);
lean_dec(v_head_838_);
lean_dec(v_i_832_);
return v___y_851_;
}
else
{
lean_object* v___x_852_; lean_object* v_x_853_; uint8_t v___x_854_; 
lean_inc(v_head_838_);
v___x_852_ = lp_choreo_Choreo_State_at(v_s_831_, v_head_838_);
v_x_853_ = lean_ctor_get(v___x_852_, 0);
lean_inc(v_x_853_);
lean_dec_ref(v___x_852_);
v___x_854_ = lean_int_dec_le(v_x_853_, v_line_834_);
lean_dec(v_x_853_);
if (v___x_854_ == 0)
{
lean_dec(v_tail_839_);
lean_dec(v_head_838_);
lean_dec(v_i_832_);
return v___x_854_;
}
else
{
lean_object* v___x_855_; lean_object* v_x_856_; uint8_t v___x_857_; 
v___x_855_ = lp_choreo_Choreo_State_at(v_target_833_, v_head_838_);
v_x_856_ = lean_ctor_get(v___x_855_, 0);
lean_inc(v_x_856_);
lean_dec_ref(v___x_855_);
v___x_857_ = lean_int_dec_le(v_x_856_, v_line_834_);
lean_dec(v_x_856_);
if (v___x_857_ == 0)
{
lean_dec(v_tail_839_);
lean_dec(v_i_832_);
return v___x_857_;
}
else
{
lean_object* v_dmin_858_; lean_object* v___x_859_; lean_object* v_x_860_; lean_object* v___x_861_; uint8_t v___x_862_; 
v_dmin_858_ = lean_ctor_get(v_c_830_, 1);
lean_inc(v_i_832_);
v___x_859_ = lp_choreo_Choreo_State_at(v_s_831_, v_i_832_);
v_x_860_ = lean_ctor_get(v___x_859_, 0);
lean_inc(v_x_860_);
lean_dec_ref(v___x_859_);
v___x_861_ = lean_int_add(v_line_834_, v_dmin_858_);
v___x_862_ = lean_int_dec_le(v___x_861_, v_x_860_);
lean_dec(v_x_860_);
if (v___x_862_ == 0)
{
lean_dec(v___x_861_);
lean_dec(v_tail_839_);
lean_dec(v_i_832_);
return v___x_862_;
}
else
{
lean_object* v___x_863_; lean_object* v_x_864_; uint8_t v___x_865_; 
lean_inc(v_i_832_);
v___x_863_ = lp_choreo_Choreo_State_at(v_target_833_, v_i_832_);
v_x_864_ = lean_ctor_get(v___x_863_, 0);
lean_inc(v_x_864_);
lean_dec_ref(v___x_863_);
v___x_865_ = lean_int_dec_le(v___x_861_, v_x_864_);
lean_dec(v_x_864_);
lean_dec(v___x_861_);
v___y_841_ = v___x_865_;
goto v___jp_840_;
}
}
}
}
}
v___jp_866_:
{
if (v___y_867_ == 0)
{
uint8_t v___x_868_; 
v___x_868_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_832_, v_right_835_);
if (v___x_868_ == 0)
{
v___y_851_ = v___x_868_;
goto v___jp_850_;
}
else
{
uint8_t v___x_869_; 
v___x_869_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_838_, v_left_829_);
v___y_851_ = v___x_869_;
goto v___jp_850_;
}
}
else
{
lean_object* v___x_870_; lean_object* v_x_871_; uint8_t v___x_872_; 
lean_inc(v_i_832_);
v___x_870_ = lp_choreo_Choreo_State_at(v_s_831_, v_i_832_);
v_x_871_ = lean_ctor_get(v___x_870_, 0);
lean_inc(v_x_871_);
lean_dec_ref(v___x_870_);
v___x_872_ = lean_int_dec_le(v_x_871_, v_line_834_);
lean_dec(v_x_871_);
if (v___x_872_ == 0)
{
lean_dec(v_tail_839_);
lean_dec(v_head_838_);
lean_dec(v_i_832_);
return v___x_872_;
}
else
{
lean_object* v___x_873_; lean_object* v_x_874_; uint8_t v___x_875_; 
lean_inc(v_i_832_);
v___x_873_ = lp_choreo_Choreo_State_at(v_target_833_, v_i_832_);
v_x_874_ = lean_ctor_get(v___x_873_, 0);
lean_inc(v_x_874_);
lean_dec_ref(v___x_873_);
v___x_875_ = lean_int_dec_le(v_x_874_, v_line_834_);
lean_dec(v_x_874_);
if (v___x_875_ == 0)
{
lean_dec(v_tail_839_);
lean_dec(v_head_838_);
lean_dec(v_i_832_);
return v___x_875_;
}
else
{
lean_object* v_dmin_876_; lean_object* v___x_877_; lean_object* v_x_878_; lean_object* v___x_879_; uint8_t v___x_880_; 
v_dmin_876_ = lean_ctor_get(v_c_830_, 1);
lean_inc(v_head_838_);
v___x_877_ = lp_choreo_Choreo_State_at(v_s_831_, v_head_838_);
v_x_878_ = lean_ctor_get(v___x_877_, 0);
lean_inc(v_x_878_);
lean_dec_ref(v___x_877_);
v___x_879_ = lean_int_add(v_line_834_, v_dmin_876_);
v___x_880_ = lean_int_dec_le(v___x_879_, v_x_878_);
lean_dec(v_x_878_);
if (v___x_880_ == 0)
{
lean_dec(v___x_879_);
lean_dec(v_tail_839_);
lean_dec(v_head_838_);
lean_dec(v_i_832_);
return v___x_880_;
}
else
{
lean_object* v___x_881_; lean_object* v_x_882_; uint8_t v___x_883_; 
v___x_881_ = lp_choreo_Choreo_State_at(v_target_833_, v_head_838_);
v_x_882_ = lean_ctor_get(v___x_881_, 0);
lean_inc(v_x_882_);
lean_dec_ref(v___x_881_);
v___x_883_ = lean_int_dec_le(v___x_879_, v_x_882_);
lean_dec(v_x_882_);
lean_dec(v___x_879_);
v___y_841_ = v___x_883_;
goto v___jp_840_;
}
}
}
}
}
v___jp_885_:
{
if (v___y_886_ == 0)
{
if (v___x_884_ == 0)
{
v___y_867_ = v___x_884_;
goto v___jp_866_;
}
else
{
uint8_t v___x_887_; 
v___x_887_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_838_, v_right_835_);
v___y_867_ = v___x_887_;
goto v___jp_866_;
}
}
else
{
goto v___jp_843_;
}
}
v___jp_888_:
{
if (v___y_889_ == 0)
{
uint8_t v___x_890_; 
v___x_890_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_i_832_, v_right_835_);
if (v___x_890_ == 0)
{
v___y_886_ = v___x_890_;
goto v___jp_885_;
}
else
{
uint8_t v___x_891_; 
v___x_891_ = l_List_elem___at___00Lean_Meta_Occurrences_contains_spec__0(v_head_838_, v_right_835_);
v___y_886_ = v___x_891_;
goto v___jp_885_;
}
}
else
{
goto v___jp_843_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__0___boxed(lean_object* v_left_893_, lean_object* v_c_894_, lean_object* v_s_895_, lean_object* v_i_896_, lean_object* v_target_897_, lean_object* v_line_898_, lean_object* v_right_899_, lean_object* v_x_900_){
_start:
{
uint8_t v_res_901_; lean_object* v_r_902_; 
v_res_901_ = lp_choreo_List_all___at___00Choreo_parClear_spec__0(v_left_893_, v_c_894_, v_s_895_, v_i_896_, v_target_897_, v_line_898_, v_right_899_, v_x_900_);
lean_dec(v_right_899_);
lean_dec(v_line_898_);
lean_dec(v_target_897_);
lean_dec(v_s_895_);
lean_dec_ref(v_c_894_);
lean_dec(v_left_893_);
v_r_902_ = lean_box(v_res_901_);
return v_r_902_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_parClear_spec__1(lean_object* v_left_903_, lean_object* v_c_904_, lean_object* v_s_905_, lean_object* v_target_906_, lean_object* v_line_907_, lean_object* v_right_908_, lean_object* v_x_909_){
_start:
{
if (lean_obj_tag(v_x_909_) == 0)
{
uint8_t v___x_910_; 
v___x_910_ = 1;
return v___x_910_;
}
else
{
lean_object* v_head_911_; lean_object* v_tail_912_; lean_object* v___x_913_; uint8_t v___x_914_; 
v_head_911_ = lean_ctor_get(v_x_909_, 0);
lean_inc_n(v_head_911_, 2);
v_tail_912_ = lean_ctor_get(v_x_909_, 1);
lean_inc(v_tail_912_);
lean_dec_ref_known(v_x_909_, 2);
v___x_913_ = l_List_range(v_head_911_);
v___x_914_ = lp_choreo_List_all___at___00Choreo_parClear_spec__0(v_left_903_, v_c_904_, v_s_905_, v_head_911_, v_target_906_, v_line_907_, v_right_908_, v___x_913_);
if (v___x_914_ == 0)
{
lean_dec(v_tail_912_);
return v___x_914_;
}
else
{
v_x_909_ = v_tail_912_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_parClear_spec__1___boxed(lean_object* v_left_916_, lean_object* v_c_917_, lean_object* v_s_918_, lean_object* v_target_919_, lean_object* v_line_920_, lean_object* v_right_921_, lean_object* v_x_922_){
_start:
{
uint8_t v_res_923_; lean_object* v_r_924_; 
v_res_923_ = lp_choreo_List_all___at___00Choreo_parClear_spec__1(v_left_916_, v_c_917_, v_s_918_, v_target_919_, v_line_920_, v_right_921_, v_x_922_);
lean_dec(v_right_921_);
lean_dec(v_line_920_);
lean_dec(v_target_919_);
lean_dec(v_s_918_);
lean_dec_ref(v_c_917_);
lean_dec(v_left_916_);
v_r_924_ = lean_box(v_res_923_);
return v_r_924_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_parClear(lean_object* v_c_925_, lean_object* v_left_926_, lean_object* v_right_927_, lean_object* v_line_928_, lean_object* v_s_929_, lean_object* v_target_930_){
_start:
{
lean_object* v_n_931_; lean_object* v___x_932_; uint8_t v___x_933_; 
v_n_931_ = lean_ctor_get(v_c_925_, 0);
lean_inc(v_n_931_);
v___x_932_ = l_List_range(v_n_931_);
v___x_933_ = lp_choreo_List_all___at___00Choreo_parClear_spec__1(v_left_926_, v_c_925_, v_s_929_, v_target_930_, v_line_928_, v_right_927_, v___x_932_);
lean_dec_ref(v_c_925_);
return v___x_933_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_parClear___boxed(lean_object* v_c_934_, lean_object* v_left_935_, lean_object* v_right_936_, lean_object* v_line_937_, lean_object* v_s_938_, lean_object* v_target_939_){
_start:
{
uint8_t v_res_940_; lean_object* v_r_941_; 
v_res_940_ = lp_choreo_Choreo_parClear(v_c_934_, v_left_935_, v_right_936_, v_line_937_, v_s_938_, v_target_939_);
lean_dec(v_target_939_);
lean_dec(v_s_938_);
lean_dec(v_line_937_);
lean_dec(v_right_936_);
lean_dec(v_left_935_);
v_r_941_ = lean_box(v_res_940_);
return v_r_941_;
}
}
static lean_object* _init_lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0(void){
_start:
{
lean_object* v___x_942_; lean_object* v___x_943_; 
v___x_942_ = lean_unsigned_to_nat(1u);
v___x_943_ = lean_nat_to_int(v___x_942_);
return v___x_943_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0(lean_object* v_ph_944_, lean_object* v_b_945_, lean_object* v_a_946_, lean_object* v_x_947_){
_start:
{
if (lean_obj_tag(v_x_947_) == 0)
{
uint8_t v___x_948_; 
v___x_948_ = 1;
return v___x_948_;
}
else
{
lean_object* v_head_949_; lean_object* v_tail_950_; uint8_t v___y_952_; lean_object* v___x_961_; uint8_t v___x_962_; 
v_head_949_ = lean_ctor_get(v_x_947_, 0);
lean_inc_n(v_head_949_, 2);
v_tail_950_ = lean_ctor_get(v_x_947_, 1);
lean_inc(v_tail_950_);
lean_dec_ref_known(v_x_947_, 2);
v___x_961_ = lp_choreo_Choreo_Phase_path(v_ph_944_, v_head_949_);
v___x_962_ = lp_choreo_Choreo_Path_wf(v___x_961_);
if (v___x_962_ == 0)
{
lean_dec_ref(v___x_961_);
v___y_952_ = v___x_962_;
goto v___jp_951_;
}
else
{
lean_object* v___x_963_; lean_object* v_x_964_; lean_object* v_y_965_; lean_object* v___x_966_; lean_object* v___x_967_; uint8_t v___x_968_; 
lean_inc(v_head_949_);
v___x_963_ = lp_choreo_Choreo_State_at(v_a_946_, v_head_949_);
v_x_964_ = lean_ctor_get(v___x_963_, 0);
lean_inc(v_x_964_);
v_y_965_ = lean_ctor_get(v___x_963_, 1);
lean_inc(v_y_965_);
lean_dec_ref(v___x_963_);
v___x_966_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0, &lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0);
v___x_967_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_967_, 0, v_x_964_);
lean_ctor_set(v___x_967_, 1, v_y_965_);
lean_ctor_set(v___x_967_, 2, v___x_966_);
v___x_968_ = lp_choreo_Choreo_Path_startsAtSlot(v___x_961_, v___x_967_);
lean_dec_ref_known(v___x_967_, 3);
lean_dec_ref(v___x_961_);
v___y_952_ = v___x_968_;
goto v___jp_951_;
}
v___jp_951_:
{
if (v___y_952_ == 0)
{
lean_dec(v_tail_950_);
lean_dec(v_head_949_);
return v___y_952_;
}
else
{
lean_object* v___x_953_; lean_object* v___x_954_; lean_object* v_x_955_; lean_object* v_y_956_; lean_object* v___x_957_; lean_object* v___x_958_; uint8_t v___x_959_; 
lean_inc(v_head_949_);
v___x_953_ = lp_choreo_Choreo_Phase_path(v_ph_944_, v_head_949_);
v___x_954_ = lp_choreo_Choreo_State_at(v_b_945_, v_head_949_);
v_x_955_ = lean_ctor_get(v___x_954_, 0);
lean_inc(v_x_955_);
v_y_956_ = lean_ctor_get(v___x_954_, 1);
lean_inc(v_y_956_);
lean_dec_ref(v___x_954_);
v___x_957_ = lean_obj_once(&lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0, &lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0_once, _init_lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___closed__0);
v___x_958_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_958_, 0, v_x_955_);
lean_ctor_set(v___x_958_, 1, v_y_956_);
lean_ctor_set(v___x_958_, 2, v___x_957_);
v___x_959_ = lp_choreo_Choreo_Path_reachesSlot(v___x_953_, v___x_958_);
lean_dec_ref_known(v___x_958_, 3);
lean_dec_ref(v___x_953_);
if (v___x_959_ == 0)
{
lean_dec(v_tail_950_);
return v___x_959_;
}
else
{
v_x_947_ = v_tail_950_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0___boxed(lean_object* v_ph_969_, lean_object* v_b_970_, lean_object* v_a_971_, lean_object* v_x_972_){
_start:
{
uint8_t v_res_973_; lean_object* v_r_974_; 
v_res_973_ = lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0(v_ph_969_, v_b_970_, v_a_971_, v_x_972_);
lean_dec(v_a_971_);
lean_dec(v_b_970_);
lean_dec_ref(v_ph_969_);
v_r_974_ = lean_box(v_res_973_);
return v_r_974_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_endpointsOk(lean_object* v_c_975_, lean_object* v_ph_976_, lean_object* v_a_977_, lean_object* v_b_978_){
_start:
{
lean_object* v_n_979_; lean_object* v___x_980_; uint8_t v___x_981_; 
v_n_979_ = lean_ctor_get(v_c_975_, 0);
lean_inc(v_n_979_);
lean_dec_ref(v_c_975_);
v___x_980_ = l_List_range(v_n_979_);
v___x_981_ = lp_choreo_List_all___at___00Choreo_endpointsOk_spec__0(v_ph_976_, v_b_978_, v_a_977_, v___x_980_);
return v___x_981_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_endpointsOk___boxed(lean_object* v_c_982_, lean_object* v_ph_983_, lean_object* v_a_984_, lean_object* v_b_985_){
_start:
{
uint8_t v_res_986_; lean_object* v_r_987_; 
v_res_986_ = lp_choreo_Choreo_endpointsOk(v_c_982_, v_ph_983_, v_a_984_, v_b_985_);
lean_dec(v_b_985_);
lean_dec(v_a_984_);
lean_dec_ref(v_ph_983_);
v_r_987_ = lean_box(v_res_986_);
return v_r_987_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Op_enabled(lean_object* v_op_988_, lean_object* v_c_989_, lean_object* v_s_990_){
_start:
{
lean_object* v_n_991_; lean_object* v_dmin_992_; uint8_t v___y_994_; lean_object* v___x_997_; lean_object* v_ph_998_; lean_object* v___x_999_; uint8_t v___x_1000_; 
v_n_991_ = lean_ctor_get(v_c_989_, 0);
v_dmin_992_ = lean_ctor_get(v_c_989_, 1);
v___x_997_ = lean_unsigned_to_nat(0u);
lean_inc_ref_n(v_c_989_, 2);
lean_inc_ref_n(v_op_988_, 2);
v_ph_998_ = lp_choreo_Choreo_Op_phase(v_op_988_, v_c_989_, v___x_997_, v_s_990_);
lean_inc(v_n_991_);
v___x_999_ = lp_choreo_Choreo_Op_next(v_op_988_, v_n_991_, v_s_990_);
v___x_1000_ = lp_choreo_Choreo_endpointsOk(v_c_989_, v_ph_998_, v_s_990_, v___x_999_);
lean_dec(v___x_999_);
if (v___x_1000_ == 0)
{
lean_dec_ref(v_ph_998_);
lean_dec_ref(v_c_989_);
lean_dec_ref(v_op_988_);
return v___x_1000_;
}
else
{
switch(lean_obj_tag(v_op_988_))
{
case 0:
{
lean_object* v_target_1001_; uint8_t v___y_1003_; uint8_t v___x_1005_; 
v_target_1001_ = lean_ctor_get(v_op_988_, 0);
lean_inc(v_target_1001_);
lean_dec_ref_known(v_op_988_, 2);
v___x_1005_ = lp_choreo_Choreo_Config_wf(v_c_989_);
if (v___x_1005_ == 0)
{
lean_dec_ref(v_ph_998_);
v___y_1003_ = v___x_1005_;
goto v___jp_1002_;
}
else
{
uint8_t v___x_1006_; 
lean_inc_ref(v_c_989_);
v___x_1006_ = lp_choreo_Choreo_Phase_checkPaths(v_c_989_, v_ph_998_);
lean_dec_ref(v_ph_998_);
v___y_1003_ = v___x_1006_;
goto v___jp_1002_;
}
v___jp_1002_:
{
if (v___y_1003_ == 0)
{
lean_dec(v_target_1001_);
lean_dec_ref(v_c_989_);
return v___y_1003_;
}
else
{
uint8_t v___x_1004_; 
v___x_1004_ = lp_choreo_Choreo_moveClear(v_c_989_, v_s_990_, v_target_1001_);
lean_dec(v_target_1001_);
return v___x_1004_;
}
}
}
case 1:
{
uint8_t v___x_1007_; 
lean_inc(v_dmin_992_);
lean_inc(v_n_991_);
lean_dec_ref_known(v_op_988_, 2);
v___x_1007_ = lp_choreo_Choreo_Config_wf(v_c_989_);
if (v___x_1007_ == 0)
{
lean_dec_ref(v_ph_998_);
lean_dec_ref(v_c_989_);
v___y_994_ = v___x_1007_;
goto v___jp_993_;
}
else
{
uint8_t v___x_1008_; 
v___x_1008_ = lp_choreo_Choreo_Phase_checkPaths(v_c_989_, v_ph_998_);
lean_dec_ref(v_ph_998_);
v___y_994_ = v___x_1008_;
goto v___jp_993_;
}
}
case 2:
{
lean_object* v_deltas_1009_; uint8_t v___y_1011_; uint8_t v___x_1013_; 
v_deltas_1009_ = lean_ctor_get(v_op_988_, 0);
lean_inc(v_deltas_1009_);
lean_dec_ref_known(v_op_988_, 2);
v___x_1013_ = lp_choreo_Choreo_Config_wf(v_c_989_);
if (v___x_1013_ == 0)
{
lean_dec_ref(v_ph_998_);
v___y_1011_ = v___x_1013_;
goto v___jp_1010_;
}
else
{
uint8_t v___x_1014_; 
lean_inc_ref(v_c_989_);
v___x_1014_ = lp_choreo_Choreo_Phase_checkPaths(v_c_989_, v_ph_998_);
lean_dec_ref(v_ph_998_);
v___y_1011_ = v___x_1014_;
goto v___jp_1010_;
}
v___jp_1010_:
{
if (v___y_1011_ == 0)
{
lean_dec(v_deltas_1009_);
lean_dec_ref(v_c_989_);
return v___y_1011_;
}
else
{
uint8_t v___x_1012_; 
v___x_1012_ = lp_choreo_Choreo_slideClear(v_c_989_, v_s_990_, v_deltas_1009_);
lean_dec(v_deltas_1009_);
return v___x_1012_;
}
}
}
default: 
{
lean_object* v_left_1015_; lean_object* v_right_1016_; lean_object* v_line_1017_; lean_object* v_target_1018_; uint8_t v___y_1020_; uint8_t v___x_1022_; 
v_left_1015_ = lean_ctor_get(v_op_988_, 0);
lean_inc(v_left_1015_);
v_right_1016_ = lean_ctor_get(v_op_988_, 1);
lean_inc(v_right_1016_);
v_line_1017_ = lean_ctor_get(v_op_988_, 2);
lean_inc(v_line_1017_);
v_target_1018_ = lean_ctor_get(v_op_988_, 3);
lean_inc(v_target_1018_);
lean_dec_ref_known(v_op_988_, 5);
v___x_1022_ = lp_choreo_Choreo_Config_wf(v_c_989_);
if (v___x_1022_ == 0)
{
lean_dec_ref(v_ph_998_);
v___y_1020_ = v___x_1022_;
goto v___jp_1019_;
}
else
{
uint8_t v___x_1023_; 
lean_inc_ref(v_c_989_);
v___x_1023_ = lp_choreo_Choreo_Phase_checkPaths(v_c_989_, v_ph_998_);
lean_dec_ref(v_ph_998_);
v___y_1020_ = v___x_1023_;
goto v___jp_1019_;
}
v___jp_1019_:
{
if (v___y_1020_ == 0)
{
lean_dec(v_target_1018_);
lean_dec(v_line_1017_);
lean_dec(v_right_1016_);
lean_dec(v_left_1015_);
lean_dec_ref(v_c_989_);
return v___y_1020_;
}
else
{
uint8_t v___x_1021_; 
v___x_1021_ = lp_choreo_Choreo_parClear(v_c_989_, v_left_1015_, v_right_1016_, v_line_1017_, v_s_990_, v_target_1018_);
lean_dec(v_target_1018_);
lean_dec(v_line_1017_);
lean_dec(v_right_1016_);
lean_dec(v_left_1015_);
return v___x_1021_;
}
}
}
}
}
v___jp_993_:
{
if (v___y_994_ == 0)
{
lean_dec(v_dmin_992_);
lean_dec(v_n_991_);
return v___y_994_;
}
else
{
lean_object* v___x_995_; uint8_t v___x_996_; 
v___x_995_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_995_, 0, v_n_991_);
lean_ctor_set(v___x_995_, 1, v_dmin_992_);
v___x_996_ = lp_choreo_Choreo_Pred_holds(v___x_995_, v_s_990_);
return v___x_996_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Op_enabled___boxed(lean_object* v_op_1024_, lean_object* v_c_1025_, lean_object* v_s_1026_){
_start:
{
uint8_t v_res_1027_; lean_object* v_r_1028_; 
v_res_1027_ = lp_choreo_Choreo_Op_enabled(v_op_1024_, v_c_1025_, v_s_1026_);
lean_dec(v_s_1026_);
v_r_1028_ = lean_box(v_res_1027_);
return v_r_1028_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Step_ok(lean_object* v_st_1029_, lean_object* v_c_1030_, lean_object* v_s_1031_){
_start:
{
lean_object* v_op_1032_; lean_object* v_requires_1033_; lean_object* v_ensures_1034_; uint8_t v___y_1036_; uint8_t v___x_1040_; 
v_op_1032_ = lean_ctor_get(v_st_1029_, 0);
lean_inc_ref(v_op_1032_);
v_requires_1033_ = lean_ctor_get(v_st_1029_, 1);
lean_inc(v_requires_1033_);
v_ensures_1034_ = lean_ctor_get(v_st_1029_, 2);
lean_inc(v_ensures_1034_);
lean_dec_ref(v_st_1029_);
v___x_1040_ = lp_choreo_Choreo_Pred_holds(v_requires_1033_, v_s_1031_);
if (v___x_1040_ == 0)
{
v___y_1036_ = v___x_1040_;
goto v___jp_1035_;
}
else
{
uint8_t v___x_1041_; 
lean_inc_ref(v_c_1030_);
lean_inc_ref(v_op_1032_);
v___x_1041_ = lp_choreo_Choreo_Op_enabled(v_op_1032_, v_c_1030_, v_s_1031_);
v___y_1036_ = v___x_1041_;
goto v___jp_1035_;
}
v___jp_1035_:
{
if (v___y_1036_ == 0)
{
lean_dec(v_ensures_1034_);
lean_dec_ref(v_op_1032_);
lean_dec_ref(v_c_1030_);
return v___y_1036_;
}
else
{
lean_object* v_n_1037_; lean_object* v___x_1038_; uint8_t v___x_1039_; 
v_n_1037_ = lean_ctor_get(v_c_1030_, 0);
lean_inc(v_n_1037_);
lean_dec_ref(v_c_1030_);
v___x_1038_ = lp_choreo_Choreo_Op_next(v_op_1032_, v_n_1037_, v_s_1031_);
v___x_1039_ = lp_choreo_Choreo_Pred_holds(v_ensures_1034_, v___x_1038_);
lean_dec(v___x_1038_);
return v___x_1039_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Step_ok___boxed(lean_object* v_st_1042_, lean_object* v_c_1043_, lean_object* v_s_1044_){
_start:
{
uint8_t v_res_1045_; lean_object* v_r_1046_; 
v_res_1045_ = lp_choreo_Choreo_Step_ok(v_st_1042_, v_c_1043_, v_s_1044_);
lean_dec(v_s_1044_);
v_r_1046_ = lean_box(v_res_1045_);
return v_r_1046_;
}
}
LEAN_EXPORT uint8_t lp_choreo_List_all___at___00Choreo_samePhase_spec__0(lean_object* v_a_1047_, lean_object* v_b_1048_, lean_object* v_x_1049_){
_start:
{
if (lean_obj_tag(v_x_1049_) == 0)
{
uint8_t v___x_1050_; 
v___x_1050_ = 1;
return v___x_1050_;
}
else
{
lean_object* v_head_1051_; lean_object* v_tail_1052_; uint8_t v___y_1054_; lean_object* v___x_1061_; lean_object* v_X_1062_; lean_object* v_Y_1063_; lean_object* v___x_1064_; lean_object* v_X_1065_; lean_object* v_Y_1066_; uint8_t v___x_1067_; 
v_head_1051_ = lean_ctor_get(v_x_1049_, 0);
lean_inc_n(v_head_1051_, 3);
v_tail_1052_ = lean_ctor_get(v_x_1049_, 1);
lean_inc(v_tail_1052_);
lean_dec_ref_known(v_x_1049_, 2);
v___x_1061_ = lp_choreo_Choreo_Phase_path(v_a_1047_, v_head_1051_);
v_X_1062_ = lean_ctor_get(v___x_1061_, 0);
lean_inc(v_X_1062_);
v_Y_1063_ = lean_ctor_get(v___x_1061_, 1);
lean_inc(v_Y_1063_);
lean_dec_ref(v___x_1061_);
v___x_1064_ = lp_choreo_Choreo_Phase_path(v_b_1048_, v_head_1051_);
v_X_1065_ = lean_ctor_get(v___x_1064_, 0);
lean_inc(v_X_1065_);
v_Y_1066_ = lean_ctor_get(v___x_1064_, 1);
lean_inc(v_Y_1066_);
lean_dec_ref(v___x_1064_);
v___x_1067_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_X_1062_, v_X_1065_);
lean_dec(v_X_1065_);
lean_dec(v_X_1062_);
if (v___x_1067_ == 0)
{
lean_dec(v_Y_1066_);
lean_dec(v_Y_1063_);
v___y_1054_ = v___x_1067_;
goto v___jp_1053_;
}
else
{
uint8_t v___x_1068_; 
v___x_1068_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_Y_1063_, v_Y_1066_);
lean_dec(v_Y_1066_);
lean_dec(v_Y_1063_);
v___y_1054_ = v___x_1068_;
goto v___jp_1053_;
}
v___jp_1053_:
{
if (v___y_1054_ == 0)
{
lean_dec(v_tail_1052_);
lean_dec(v_head_1051_);
return v___y_1054_;
}
else
{
lean_object* v___x_1055_; lean_object* v_W_1056_; lean_object* v___x_1057_; lean_object* v_W_1058_; uint8_t v___x_1059_; 
lean_inc(v_head_1051_);
v___x_1055_ = lp_choreo_Choreo_Phase_path(v_a_1047_, v_head_1051_);
v_W_1056_ = lean_ctor_get(v___x_1055_, 2);
lean_inc(v_W_1056_);
lean_dec_ref(v___x_1055_);
v___x_1057_ = lp_choreo_Choreo_Phase_path(v_b_1048_, v_head_1051_);
v_W_1058_ = lean_ctor_get(v___x_1057_, 2);
lean_inc(v_W_1058_);
lean_dec_ref(v___x_1057_);
v___x_1059_ = lp_choreo_List_beq___at___00Choreo_dxPoly_spec__0(v_W_1056_, v_W_1058_);
lean_dec(v_W_1058_);
lean_dec(v_W_1056_);
if (v___x_1059_ == 0)
{
lean_dec(v_tail_1052_);
return v___x_1059_;
}
else
{
v_x_1049_ = v_tail_1052_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_all___at___00Choreo_samePhase_spec__0___boxed(lean_object* v_a_1069_, lean_object* v_b_1070_, lean_object* v_x_1071_){
_start:
{
uint8_t v_res_1072_; lean_object* v_r_1073_; 
v_res_1072_ = lp_choreo_List_all___at___00Choreo_samePhase_spec__0(v_a_1069_, v_b_1070_, v_x_1071_);
lean_dec_ref(v_b_1070_);
lean_dec_ref(v_a_1069_);
v_r_1073_ = lean_box(v_res_1072_);
return v_r_1073_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_samePhase(lean_object* v_n_1074_, lean_object* v_a_1075_, lean_object* v_b_1076_){
_start:
{
lean_object* v_t0_1077_; lean_object* v_t1_1078_; lean_object* v_bounds_1079_; lean_object* v_t0_1080_; lean_object* v_t1_1081_; lean_object* v_bounds_1082_; lean_object* v_rigid_1083_; lean_object* v_orbits_1084_; lean_object* v_target_1085_; uint8_t v___x_1086_; 
v_t0_1077_ = lean_ctor_get(v_a_1075_, 0);
v_t1_1078_ = lean_ctor_get(v_a_1075_, 1);
v_bounds_1079_ = lean_ctor_get(v_a_1075_, 3);
v_t0_1080_ = lean_ctor_get(v_b_1076_, 0);
v_t1_1081_ = lean_ctor_get(v_b_1076_, 1);
v_bounds_1082_ = lean_ctor_get(v_b_1076_, 3);
v_rigid_1083_ = lean_ctor_get(v_b_1076_, 5);
v_orbits_1084_ = lean_ctor_get(v_b_1076_, 6);
v_target_1085_ = lean_ctor_get(v_b_1076_, 7);
v___x_1086_ = lean_nat_dec_eq(v_t0_1077_, v_t0_1080_);
if (v___x_1086_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1086_;
}
else
{
uint8_t v___x_1087_; 
v___x_1087_ = lean_nat_dec_eq(v_t1_1078_, v_t1_1081_);
if (v___x_1087_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1087_;
}
else
{
lean_object* v_xmin_1088_; lean_object* v_xmax_1089_; lean_object* v_ymin_1090_; lean_object* v_ymax_1091_; lean_object* v_xmin_1092_; lean_object* v_xmax_1093_; lean_object* v_ymin_1094_; lean_object* v_ymax_1095_; uint8_t v___x_1096_; 
v_xmin_1088_ = lean_ctor_get(v_bounds_1079_, 0);
v_xmax_1089_ = lean_ctor_get(v_bounds_1079_, 1);
v_ymin_1090_ = lean_ctor_get(v_bounds_1079_, 2);
v_ymax_1091_ = lean_ctor_get(v_bounds_1079_, 3);
v_xmin_1092_ = lean_ctor_get(v_bounds_1082_, 0);
v_xmax_1093_ = lean_ctor_get(v_bounds_1082_, 1);
v_ymin_1094_ = lean_ctor_get(v_bounds_1082_, 2);
v_ymax_1095_ = lean_ctor_get(v_bounds_1082_, 3);
v___x_1096_ = lean_int_dec_eq(v_xmin_1088_, v_xmin_1092_);
if (v___x_1096_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1096_;
}
else
{
uint8_t v___x_1097_; 
v___x_1097_ = lean_int_dec_eq(v_xmax_1089_, v_xmax_1093_);
if (v___x_1097_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1097_;
}
else
{
uint8_t v___x_1098_; 
v___x_1098_ = lean_int_dec_eq(v_ymin_1090_, v_ymin_1094_);
if (v___x_1098_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1098_;
}
else
{
uint8_t v___x_1099_; 
v___x_1099_ = lean_int_dec_eq(v_ymax_1091_, v_ymax_1095_);
if (v___x_1099_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1099_;
}
else
{
uint8_t v___x_1100_; 
v___x_1100_ = l_List_isEmpty___redArg(v_rigid_1083_);
if (v___x_1100_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1100_;
}
else
{
uint8_t v___x_1101_; 
v___x_1101_ = l_List_isEmpty___redArg(v_orbits_1084_);
if (v___x_1101_ == 0)
{
lean_dec(v_n_1074_);
return v___x_1101_;
}
else
{
if (lean_obj_tag(v_target_1085_) == 0)
{
lean_object* v___x_1102_; uint8_t v___x_1103_; 
v___x_1102_ = l_List_range(v_n_1074_);
v___x_1103_ = lp_choreo_List_all___at___00Choreo_samePhase_spec__0(v_a_1075_, v_b_1076_, v___x_1102_);
return v___x_1103_;
}
else
{
uint8_t v___x_1104_; 
lean_dec(v_n_1074_);
v___x_1104_ = 0;
return v___x_1104_;
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
LEAN_EXPORT lean_object* lp_choreo_Choreo_samePhase___boxed(lean_object* v_n_1105_, lean_object* v_a_1106_, lean_object* v_b_1107_){
_start:
{
uint8_t v_res_1108_; lean_object* v_r_1109_; 
v_res_1108_ = lp_choreo_Choreo_samePhase(v_n_1105_, v_a_1106_, v_b_1107_);
lean_dec_ref(v_b_1107_);
lean_dec_ref(v_a_1106_);
v_r_1109_ = lean_box(v_res_1108_);
return v_r_1109_;
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_samePhases(lean_object* v_n_1110_, lean_object* v_x_1111_, lean_object* v_x_1112_){
_start:
{
if (lean_obj_tag(v_x_1111_) == 0)
{
lean_dec(v_n_1110_);
if (lean_obj_tag(v_x_1112_) == 0)
{
uint8_t v___x_1113_; 
v___x_1113_ = 1;
return v___x_1113_;
}
else
{
uint8_t v___x_1114_; 
v___x_1114_ = 0;
return v___x_1114_;
}
}
else
{
if (lean_obj_tag(v_x_1112_) == 1)
{
lean_object* v_head_1115_; lean_object* v_tail_1116_; lean_object* v_head_1117_; lean_object* v_tail_1118_; uint8_t v___x_1119_; 
v_head_1115_ = lean_ctor_get(v_x_1111_, 0);
v_tail_1116_ = lean_ctor_get(v_x_1111_, 1);
v_head_1117_ = lean_ctor_get(v_x_1112_, 0);
v_tail_1118_ = lean_ctor_get(v_x_1112_, 1);
lean_inc(v_n_1110_);
v___x_1119_ = lp_choreo_Choreo_samePhase(v_n_1110_, v_head_1115_, v_head_1117_);
if (v___x_1119_ == 0)
{
lean_dec(v_n_1110_);
return v___x_1119_;
}
else
{
v_x_1111_ = v_tail_1116_;
v_x_1112_ = v_tail_1118_;
goto _start;
}
}
else
{
uint8_t v___x_1121_; 
lean_dec(v_n_1110_);
v___x_1121_ = 0;
return v___x_1121_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_samePhases___boxed(lean_object* v_n_1122_, lean_object* v_x_1123_, lean_object* v_x_1124_){
_start:
{
uint8_t v_res_1125_; lean_object* v_r_1126_; 
v_res_1125_ = lp_choreo_Choreo_samePhases(v_n_1122_, v_x_1123_, v_x_1124_);
lean_dec(v_x_1124_);
lean_dec(v_x_1123_);
v_r_1126_ = lean_box(v_res_1125_);
return v_r_1126_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorIdx(lean_object* v_x_1127_){
_start:
{
switch(lean_obj_tag(v_x_1127_))
{
case 0:
{
lean_object* v___x_1128_; 
v___x_1128_ = lean_unsigned_to_nat(0u);
return v___x_1128_;
}
case 1:
{
lean_object* v___x_1129_; 
v___x_1129_ = lean_unsigned_to_nat(1u);
return v___x_1129_;
}
case 2:
{
lean_object* v___x_1130_; 
v___x_1130_ = lean_unsigned_to_nat(2u);
return v___x_1130_;
}
default: 
{
lean_object* v___x_1131_; 
v___x_1131_ = lean_unsigned_to_nat(3u);
return v___x_1131_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorIdx___boxed(lean_object* v_x_1132_){
_start:
{
lean_object* v_res_1133_; 
v_res_1133_ = lp_choreo_Choreo_Prog_ctorIdx(v_x_1132_);
lean_dec(v_x_1132_);
return v_res_1133_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim___redArg(lean_object* v_t_1134_, lean_object* v_k_1135_){
_start:
{
switch(lean_obj_tag(v_t_1134_))
{
case 0:
{
return v_k_1135_;
}
case 1:
{
lean_object* v_st_1136_; lean_object* v___x_1137_; 
v_st_1136_ = lean_ctor_get(v_t_1134_, 0);
lean_inc_ref(v_st_1136_);
lean_dec_ref_known(v_t_1134_, 1);
v___x_1137_ = lean_apply_1(v_k_1135_, v_st_1136_);
return v___x_1137_;
}
default: 
{
lean_object* v_a_1138_; lean_object* v_b_1139_; lean_object* v___x_1140_; 
v_a_1138_ = lean_ctor_get(v_t_1134_, 0);
lean_inc(v_a_1138_);
v_b_1139_ = lean_ctor_get(v_t_1134_, 1);
lean_inc(v_b_1139_);
lean_dec(v_t_1134_);
v___x_1140_ = lean_apply_2(v_k_1135_, v_a_1138_, v_b_1139_);
return v___x_1140_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim(lean_object* v_motive_1141_, lean_object* v_ctorIdx_1142_, lean_object* v_t_1143_, lean_object* v_h_1144_, lean_object* v_k_1145_){
_start:
{
lean_object* v___x_1146_; 
v___x_1146_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1143_, v_k_1145_);
return v___x_1146_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_ctorElim___boxed(lean_object* v_motive_1147_, lean_object* v_ctorIdx_1148_, lean_object* v_t_1149_, lean_object* v_h_1150_, lean_object* v_k_1151_){
_start:
{
lean_object* v_res_1152_; 
v_res_1152_ = lp_choreo_Choreo_Prog_ctorElim(v_motive_1147_, v_ctorIdx_1148_, v_t_1149_, v_h_1150_, v_k_1151_);
lean_dec(v_ctorIdx_1148_);
return v_res_1152_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_skip_elim___redArg(lean_object* v_t_1153_, lean_object* v_skip_1154_){
_start:
{
lean_object* v___x_1155_; 
v___x_1155_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1153_, v_skip_1154_);
return v___x_1155_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_skip_elim(lean_object* v_motive_1156_, lean_object* v_t_1157_, lean_object* v_h_1158_, lean_object* v_skip_1159_){
_start:
{
lean_object* v___x_1160_; 
v___x_1160_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1157_, v_skip_1159_);
return v___x_1160_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_step_elim___redArg(lean_object* v_t_1161_, lean_object* v_step_1162_){
_start:
{
lean_object* v___x_1163_; 
v___x_1163_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1161_, v_step_1162_);
return v___x_1163_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_step_elim(lean_object* v_motive_1164_, lean_object* v_t_1165_, lean_object* v_h_1166_, lean_object* v_step_1167_){
_start:
{
lean_object* v___x_1168_; 
v___x_1168_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1165_, v_step_1167_);
return v___x_1168_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_seq_elim___redArg(lean_object* v_t_1169_, lean_object* v_seq_1170_){
_start:
{
lean_object* v___x_1171_; 
v___x_1171_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1169_, v_seq_1170_);
return v___x_1171_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_seq_elim(lean_object* v_motive_1172_, lean_object* v_t_1173_, lean_object* v_h_1174_, lean_object* v_seq_1175_){
_start:
{
lean_object* v___x_1176_; 
v___x_1176_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1173_, v_seq_1175_);
return v___x_1176_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_rep_elim___redArg(lean_object* v_t_1177_, lean_object* v_rep_1178_){
_start:
{
lean_object* v___x_1179_; 
v___x_1179_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1177_, v_rep_1178_);
return v___x_1179_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_rep_elim(lean_object* v_motive_1180_, lean_object* v_t_1181_, lean_object* v_h_1182_, lean_object* v_rep_1183_){
_start:
{
lean_object* v___x_1184_; 
v___x_1184_ = lp_choreo_Choreo_Prog_ctorElim___redArg(v_t_1181_, v_rep_1183_);
return v___x_1184_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_repeatRun(lean_object* v_f_1185_, lean_object* v_x_1186_, lean_object* v_x_1187_, lean_object* v_x_1188_){
_start:
{
lean_object* v_zero_1189_; uint8_t v_isZero_1190_; 
v_zero_1189_ = lean_unsigned_to_nat(0u);
v_isZero_1190_ = lean_nat_dec_eq(v_x_1186_, v_zero_1189_);
if (v_isZero_1190_ == 1)
{
lean_object* v___x_1191_; lean_object* v___x_1192_; lean_object* v___x_1193_; 
lean_dec_ref(v_f_1185_);
v___x_1191_ = lean_box(0);
v___x_1192_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1192_, 0, v_x_1187_);
lean_ctor_set(v___x_1192_, 1, v_x_1188_);
v___x_1193_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1193_, 0, v___x_1191_);
lean_ctor_set(v___x_1193_, 1, v___x_1192_);
return v___x_1193_;
}
else
{
lean_object* v_ra_1194_; lean_object* v_snd_1195_; lean_object* v_fst_1196_; lean_object* v_fst_1197_; lean_object* v_snd_1198_; lean_object* v_one_1199_; lean_object* v_n_1200_; lean_object* v_rb_1201_; lean_object* v_snd_1202_; lean_object* v_fst_1203_; lean_object* v___x_1205_; uint8_t v_isShared_1206_; uint8_t v_isSharedCheck_1220_; 
lean_inc_ref(v_f_1185_);
v_ra_1194_ = lean_apply_2(v_f_1185_, v_x_1187_, v_x_1188_);
v_snd_1195_ = lean_ctor_get(v_ra_1194_, 1);
lean_inc(v_snd_1195_);
v_fst_1196_ = lean_ctor_get(v_ra_1194_, 0);
lean_inc(v_fst_1196_);
lean_dec_ref(v_ra_1194_);
v_fst_1197_ = lean_ctor_get(v_snd_1195_, 0);
lean_inc(v_fst_1197_);
v_snd_1198_ = lean_ctor_get(v_snd_1195_, 1);
lean_inc(v_snd_1198_);
lean_dec(v_snd_1195_);
v_one_1199_ = lean_unsigned_to_nat(1u);
v_n_1200_ = lean_nat_sub(v_x_1186_, v_one_1199_);
v_rb_1201_ = lp_choreo_Choreo_repeatRun(v_f_1185_, v_n_1200_, v_fst_1197_, v_snd_1198_);
lean_dec(v_n_1200_);
v_snd_1202_ = lean_ctor_get(v_rb_1201_, 1);
v_fst_1203_ = lean_ctor_get(v_rb_1201_, 0);
v_isSharedCheck_1220_ = !lean_is_exclusive(v_rb_1201_);
if (v_isSharedCheck_1220_ == 0)
{
v___x_1205_ = v_rb_1201_;
v_isShared_1206_ = v_isSharedCheck_1220_;
goto v_resetjp_1204_;
}
else
{
lean_inc(v_snd_1202_);
lean_inc(v_fst_1203_);
lean_dec(v_rb_1201_);
v___x_1205_ = lean_box(0);
v_isShared_1206_ = v_isSharedCheck_1220_;
goto v_resetjp_1204_;
}
v_resetjp_1204_:
{
lean_object* v_fst_1207_; lean_object* v_snd_1208_; lean_object* v___x_1210_; uint8_t v_isShared_1211_; uint8_t v_isSharedCheck_1219_; 
v_fst_1207_ = lean_ctor_get(v_snd_1202_, 0);
v_snd_1208_ = lean_ctor_get(v_snd_1202_, 1);
v_isSharedCheck_1219_ = !lean_is_exclusive(v_snd_1202_);
if (v_isSharedCheck_1219_ == 0)
{
v___x_1210_ = v_snd_1202_;
v_isShared_1211_ = v_isSharedCheck_1219_;
goto v_resetjp_1209_;
}
else
{
lean_inc(v_snd_1208_);
lean_inc(v_fst_1207_);
lean_dec(v_snd_1202_);
v___x_1210_ = lean_box(0);
v_isShared_1211_ = v_isSharedCheck_1219_;
goto v_resetjp_1209_;
}
v_resetjp_1209_:
{
lean_object* v___x_1212_; lean_object* v___x_1214_; 
v___x_1212_ = l_List_appendTR___redArg(v_fst_1196_, v_fst_1203_);
if (v_isShared_1211_ == 0)
{
v___x_1214_ = v___x_1210_;
goto v_reusejp_1213_;
}
else
{
lean_object* v_reuseFailAlloc_1218_; 
v_reuseFailAlloc_1218_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1218_, 0, v_fst_1207_);
lean_ctor_set(v_reuseFailAlloc_1218_, 1, v_snd_1208_);
v___x_1214_ = v_reuseFailAlloc_1218_;
goto v_reusejp_1213_;
}
v_reusejp_1213_:
{
lean_object* v___x_1216_; 
if (v_isShared_1206_ == 0)
{
lean_ctor_set(v___x_1205_, 1, v___x_1214_);
lean_ctor_set(v___x_1205_, 0, v___x_1212_);
v___x_1216_ = v___x_1205_;
goto v_reusejp_1215_;
}
else
{
lean_object* v_reuseFailAlloc_1217_; 
v_reuseFailAlloc_1217_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1217_, 0, v___x_1212_);
lean_ctor_set(v_reuseFailAlloc_1217_, 1, v___x_1214_);
v___x_1216_ = v_reuseFailAlloc_1217_;
goto v_reusejp_1215_;
}
v_reusejp_1215_:
{
return v___x_1216_;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_repeatRun___boxed(lean_object* v_f_1221_, lean_object* v_x_1222_, lean_object* v_x_1223_, lean_object* v_x_1224_){
_start:
{
lean_object* v_res_1225_; 
v_res_1225_ = lp_choreo_Choreo_repeatRun(v_f_1221_, v_x_1222_, v_x_1223_, v_x_1224_);
lean_dec(v_x_1222_);
return v_res_1225_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_exec(lean_object* v_c_1226_, lean_object* v_x_1227_, lean_object* v_x_1228_, lean_object* v_x_1229_){
_start:
{
switch(lean_obj_tag(v_x_1227_))
{
case 0:
{
lean_object* v___x_1230_; lean_object* v___x_1231_; lean_object* v___x_1232_; 
lean_dec_ref(v_c_1226_);
v___x_1230_ = lean_box(0);
v___x_1231_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1231_, 0, v_x_1228_);
lean_ctor_set(v___x_1231_, 1, v_x_1229_);
v___x_1232_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1232_, 0, v___x_1230_);
lean_ctor_set(v___x_1232_, 1, v___x_1231_);
return v___x_1232_;
}
case 1:
{
lean_object* v_st_1233_; lean_object* v_op_1234_; lean_object* v___x_1235_; lean_object* v___x_1236_; lean_object* v___x_1237_; lean_object* v___y_1239_; 
v_st_1233_ = lean_ctor_get(v_x_1227_, 0);
lean_inc_ref(v_st_1233_);
lean_dec_ref_known(v_x_1227_, 1);
v_op_1234_ = lean_ctor_get(v_st_1233_, 0);
lean_inc_ref_n(v_op_1234_, 2);
lean_dec_ref(v_st_1233_);
lean_inc(v_x_1228_);
lean_inc_ref(v_c_1226_);
v___x_1235_ = lp_choreo_Choreo_Op_phase(v_op_1234_, v_c_1226_, v_x_1228_, v_x_1229_);
v___x_1236_ = lean_box(0);
v___x_1237_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_1237_, 0, v___x_1235_);
lean_ctor_set(v___x_1237_, 1, v___x_1236_);
if (lean_obj_tag(v_op_1234_) == 3)
{
lean_object* v_beats_1247_; 
v_beats_1247_ = lean_ctor_get(v_op_1234_, 4);
lean_inc(v_beats_1247_);
v___y_1239_ = v_beats_1247_;
goto v___jp_1238_;
}
else
{
lean_object* v_beats_1248_; 
v_beats_1248_ = lean_ctor_get(v_op_1234_, 1);
lean_inc(v_beats_1248_);
v___y_1239_ = v_beats_1248_;
goto v___jp_1238_;
}
v___jp_1238_:
{
lean_object* v_n_1240_; lean_object* v_ticksPerBeat_1241_; lean_object* v___x_1242_; lean_object* v___x_1243_; lean_object* v___x_1244_; lean_object* v___x_1245_; lean_object* v___x_1246_; 
v_n_1240_ = lean_ctor_get(v_c_1226_, 0);
lean_inc(v_n_1240_);
v_ticksPerBeat_1241_ = lean_ctor_get(v_c_1226_, 4);
lean_inc(v_ticksPerBeat_1241_);
lean_dec_ref(v_c_1226_);
v___x_1242_ = lean_nat_mul(v___y_1239_, v_ticksPerBeat_1241_);
lean_dec(v_ticksPerBeat_1241_);
lean_dec(v___y_1239_);
v___x_1243_ = lean_nat_add(v_x_1228_, v___x_1242_);
lean_dec(v___x_1242_);
lean_dec(v_x_1228_);
v___x_1244_ = lp_choreo_Choreo_Op_next(v_op_1234_, v_n_1240_, v_x_1229_);
lean_dec(v_x_1229_);
v___x_1245_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1245_, 0, v___x_1243_);
lean_ctor_set(v___x_1245_, 1, v___x_1244_);
v___x_1246_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_1246_, 0, v___x_1237_);
lean_ctor_set(v___x_1246_, 1, v___x_1245_);
return v___x_1246_;
}
}
case 2:
{
lean_object* v_a_1249_; lean_object* v_b_1250_; lean_object* v_ra_1251_; lean_object* v_snd_1252_; lean_object* v_fst_1253_; lean_object* v_fst_1254_; lean_object* v_snd_1255_; lean_object* v_rb_1256_; lean_object* v_snd_1257_; lean_object* v_fst_1258_; lean_object* v___x_1260_; uint8_t v_isShared_1261_; uint8_t v_isSharedCheck_1275_; 
v_a_1249_ = lean_ctor_get(v_x_1227_, 0);
lean_inc(v_a_1249_);
v_b_1250_ = lean_ctor_get(v_x_1227_, 1);
lean_inc(v_b_1250_);
lean_dec_ref_known(v_x_1227_, 2);
lean_inc_ref(v_c_1226_);
v_ra_1251_ = lp_choreo_Choreo_Prog_exec(v_c_1226_, v_a_1249_, v_x_1228_, v_x_1229_);
v_snd_1252_ = lean_ctor_get(v_ra_1251_, 1);
lean_inc(v_snd_1252_);
v_fst_1253_ = lean_ctor_get(v_ra_1251_, 0);
lean_inc(v_fst_1253_);
lean_dec_ref(v_ra_1251_);
v_fst_1254_ = lean_ctor_get(v_snd_1252_, 0);
lean_inc(v_fst_1254_);
v_snd_1255_ = lean_ctor_get(v_snd_1252_, 1);
lean_inc(v_snd_1255_);
lean_dec(v_snd_1252_);
v_rb_1256_ = lp_choreo_Choreo_Prog_exec(v_c_1226_, v_b_1250_, v_fst_1254_, v_snd_1255_);
v_snd_1257_ = lean_ctor_get(v_rb_1256_, 1);
v_fst_1258_ = lean_ctor_get(v_rb_1256_, 0);
v_isSharedCheck_1275_ = !lean_is_exclusive(v_rb_1256_);
if (v_isSharedCheck_1275_ == 0)
{
v___x_1260_ = v_rb_1256_;
v_isShared_1261_ = v_isSharedCheck_1275_;
goto v_resetjp_1259_;
}
else
{
lean_inc(v_snd_1257_);
lean_inc(v_fst_1258_);
lean_dec(v_rb_1256_);
v___x_1260_ = lean_box(0);
v_isShared_1261_ = v_isSharedCheck_1275_;
goto v_resetjp_1259_;
}
v_resetjp_1259_:
{
lean_object* v_fst_1262_; lean_object* v_snd_1263_; lean_object* v___x_1265_; uint8_t v_isShared_1266_; uint8_t v_isSharedCheck_1274_; 
v_fst_1262_ = lean_ctor_get(v_snd_1257_, 0);
v_snd_1263_ = lean_ctor_get(v_snd_1257_, 1);
v_isSharedCheck_1274_ = !lean_is_exclusive(v_snd_1257_);
if (v_isSharedCheck_1274_ == 0)
{
v___x_1265_ = v_snd_1257_;
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
else
{
lean_inc(v_snd_1263_);
lean_inc(v_fst_1262_);
lean_dec(v_snd_1257_);
v___x_1265_ = lean_box(0);
v_isShared_1266_ = v_isSharedCheck_1274_;
goto v_resetjp_1264_;
}
v_resetjp_1264_:
{
lean_object* v___x_1267_; lean_object* v___x_1269_; 
v___x_1267_ = l_List_appendTR___redArg(v_fst_1253_, v_fst_1258_);
if (v_isShared_1266_ == 0)
{
v___x_1269_ = v___x_1265_;
goto v_reusejp_1268_;
}
else
{
lean_object* v_reuseFailAlloc_1273_; 
v_reuseFailAlloc_1273_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1273_, 0, v_fst_1262_);
lean_ctor_set(v_reuseFailAlloc_1273_, 1, v_snd_1263_);
v___x_1269_ = v_reuseFailAlloc_1273_;
goto v_reusejp_1268_;
}
v_reusejp_1268_:
{
lean_object* v___x_1271_; 
if (v_isShared_1261_ == 0)
{
lean_ctor_set(v___x_1260_, 1, v___x_1269_);
lean_ctor_set(v___x_1260_, 0, v___x_1267_);
v___x_1271_ = v___x_1260_;
goto v_reusejp_1270_;
}
else
{
lean_object* v_reuseFailAlloc_1272_; 
v_reuseFailAlloc_1272_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_1272_, 0, v___x_1267_);
lean_ctor_set(v_reuseFailAlloc_1272_, 1, v___x_1269_);
v___x_1271_ = v_reuseFailAlloc_1272_;
goto v_reusejp_1270_;
}
v_reusejp_1270_:
{
return v___x_1271_;
}
}
}
}
}
default: 
{
lean_object* v_k_1276_; lean_object* v_p_1277_; lean_object* v___x_1278_; lean_object* v___x_1279_; 
v_k_1276_ = lean_ctor_get(v_x_1227_, 0);
lean_inc(v_k_1276_);
v_p_1277_ = lean_ctor_get(v_x_1227_, 1);
lean_inc(v_p_1277_);
lean_dec_ref_known(v_x_1227_, 2);
v___x_1278_ = lean_alloc_closure((void*)(lp_choreo_Choreo_Prog_exec), 4, 2);
lean_closure_set(v___x_1278_, 0, v_c_1226_);
lean_closure_set(v___x_1278_, 1, v_p_1277_);
v___x_1279_ = lp_choreo_Choreo_repeatRun(v___x_1278_, v_k_1276_, v_x_1228_, v_x_1229_);
lean_dec(v_k_1276_);
return v___x_1279_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Prog_exec_match__1_splitter___redArg(lean_object* v_x_1280_, lean_object* v_x_1281_, lean_object* v_x_1282_, lean_object* v_h__1_1283_, lean_object* v_h__2_1284_, lean_object* v_h__3_1285_, lean_object* v_h__4_1286_){
_start:
{
switch(lean_obj_tag(v_x_1280_))
{
case 0:
{
lean_object* v___x_1287_; 
lean_dec(v_h__4_1286_);
lean_dec(v_h__3_1285_);
lean_dec(v_h__2_1284_);
v___x_1287_ = lean_apply_2(v_h__1_1283_, v_x_1281_, v_x_1282_);
return v___x_1287_;
}
case 1:
{
lean_object* v_st_1288_; lean_object* v___x_1289_; 
lean_dec(v_h__4_1286_);
lean_dec(v_h__3_1285_);
lean_dec(v_h__1_1283_);
v_st_1288_ = lean_ctor_get(v_x_1280_, 0);
lean_inc_ref(v_st_1288_);
lean_dec_ref_known(v_x_1280_, 1);
v___x_1289_ = lean_apply_3(v_h__2_1284_, v_st_1288_, v_x_1281_, v_x_1282_);
return v___x_1289_;
}
case 2:
{
lean_object* v_a_1290_; lean_object* v_b_1291_; lean_object* v___x_1292_; 
lean_dec(v_h__4_1286_);
lean_dec(v_h__2_1284_);
lean_dec(v_h__1_1283_);
v_a_1290_ = lean_ctor_get(v_x_1280_, 0);
lean_inc(v_a_1290_);
v_b_1291_ = lean_ctor_get(v_x_1280_, 1);
lean_inc(v_b_1291_);
lean_dec_ref_known(v_x_1280_, 2);
v___x_1292_ = lean_apply_4(v_h__3_1285_, v_a_1290_, v_b_1291_, v_x_1281_, v_x_1282_);
return v___x_1292_;
}
default: 
{
lean_object* v_k_1293_; lean_object* v_p_1294_; lean_object* v___x_1295_; 
lean_dec(v_h__3_1285_);
lean_dec(v_h__2_1284_);
lean_dec(v_h__1_1283_);
v_k_1293_ = lean_ctor_get(v_x_1280_, 0);
lean_inc(v_k_1293_);
v_p_1294_ = lean_ctor_get(v_x_1280_, 1);
lean_inc(v_p_1294_);
lean_dec_ref_known(v_x_1280_, 2);
v___x_1295_ = lean_apply_4(v_h__4_1286_, v_k_1293_, v_p_1294_, v_x_1281_, v_x_1282_);
return v___x_1295_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Prog_exec_match__1_splitter(lean_object* v_motive_1296_, lean_object* v_x_1297_, lean_object* v_x_1298_, lean_object* v_x_1299_, lean_object* v_h__1_1300_, lean_object* v_h__2_1301_, lean_object* v_h__3_1302_, lean_object* v_h__4_1303_){
_start:
{
switch(lean_obj_tag(v_x_1297_))
{
case 0:
{
lean_object* v___x_1304_; 
lean_dec(v_h__4_1303_);
lean_dec(v_h__3_1302_);
lean_dec(v_h__2_1301_);
v___x_1304_ = lean_apply_2(v_h__1_1300_, v_x_1298_, v_x_1299_);
return v___x_1304_;
}
case 1:
{
lean_object* v_st_1305_; lean_object* v___x_1306_; 
lean_dec(v_h__4_1303_);
lean_dec(v_h__3_1302_);
lean_dec(v_h__1_1300_);
v_st_1305_ = lean_ctor_get(v_x_1297_, 0);
lean_inc_ref(v_st_1305_);
lean_dec_ref_known(v_x_1297_, 1);
v___x_1306_ = lean_apply_3(v_h__2_1301_, v_st_1305_, v_x_1298_, v_x_1299_);
return v___x_1306_;
}
case 2:
{
lean_object* v_a_1307_; lean_object* v_b_1308_; lean_object* v___x_1309_; 
lean_dec(v_h__4_1303_);
lean_dec(v_h__2_1301_);
lean_dec(v_h__1_1300_);
v_a_1307_ = lean_ctor_get(v_x_1297_, 0);
lean_inc(v_a_1307_);
v_b_1308_ = lean_ctor_get(v_x_1297_, 1);
lean_inc(v_b_1308_);
lean_dec_ref_known(v_x_1297_, 2);
v___x_1309_ = lean_apply_4(v_h__3_1302_, v_a_1307_, v_b_1308_, v_x_1298_, v_x_1299_);
return v___x_1309_;
}
default: 
{
lean_object* v_k_1310_; lean_object* v_p_1311_; lean_object* v___x_1312_; 
lean_dec(v_h__3_1302_);
lean_dec(v_h__2_1301_);
lean_dec(v_h__1_1300_);
v_k_1310_ = lean_ctor_get(v_x_1297_, 0);
lean_inc(v_k_1310_);
v_p_1311_ = lean_ctor_get(v_x_1297_, 1);
lean_inc(v_p_1311_);
lean_dec_ref_known(v_x_1297_, 2);
v___x_1312_ = lean_apply_4(v_h__4_1303_, v_k_1310_, v_p_1311_, v_x_1298_, v_x_1299_);
return v___x_1312_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg(lean_object* v_x_1313_, lean_object* v_x_1314_, lean_object* v_x_1315_, lean_object* v_h__1_1316_, lean_object* v_h__2_1317_){
_start:
{
lean_object* v_zero_1318_; uint8_t v_isZero_1319_; 
v_zero_1318_ = lean_unsigned_to_nat(0u);
v_isZero_1319_ = lean_nat_dec_eq(v_x_1313_, v_zero_1318_);
if (v_isZero_1319_ == 1)
{
lean_object* v___x_1320_; 
lean_dec(v_h__2_1317_);
v___x_1320_ = lean_apply_2(v_h__1_1316_, v_x_1314_, v_x_1315_);
return v___x_1320_;
}
else
{
lean_object* v_one_1321_; lean_object* v_n_1322_; lean_object* v___x_1323_; 
lean_dec(v_h__1_1316_);
v_one_1321_ = lean_unsigned_to_nat(1u);
v_n_1322_ = lean_nat_sub(v_x_1313_, v_one_1321_);
v___x_1323_ = lean_apply_3(v_h__2_1317_, v_n_1322_, v_x_1314_, v_x_1315_);
return v___x_1323_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg___boxed(lean_object* v_x_1324_, lean_object* v_x_1325_, lean_object* v_x_1326_, lean_object* v_h__1_1327_, lean_object* v_h__2_1328_){
_start:
{
lean_object* v_res_1329_; 
v_res_1329_ = lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___redArg(v_x_1324_, v_x_1325_, v_x_1326_, v_h__1_1327_, v_h__2_1328_);
lean_dec(v_x_1324_);
return v_res_1329_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter(lean_object* v_motive_1330_, lean_object* v_x_1331_, lean_object* v_x_1332_, lean_object* v_x_1333_, lean_object* v_h__1_1334_, lean_object* v_h__2_1335_){
_start:
{
lean_object* v_zero_1336_; uint8_t v_isZero_1337_; 
v_zero_1336_ = lean_unsigned_to_nat(0u);
v_isZero_1337_ = lean_nat_dec_eq(v_x_1331_, v_zero_1336_);
if (v_isZero_1337_ == 1)
{
lean_object* v___x_1338_; 
lean_dec(v_h__2_1335_);
v___x_1338_ = lean_apply_2(v_h__1_1334_, v_x_1332_, v_x_1333_);
return v___x_1338_;
}
else
{
lean_object* v_one_1339_; lean_object* v_n_1340_; lean_object* v___x_1341_; 
lean_dec(v_h__1_1334_);
v_one_1339_ = lean_unsigned_to_nat(1u);
v_n_1340_ = lean_nat_sub(v_x_1331_, v_one_1339_);
v___x_1341_ = lean_apply_3(v_h__2_1335_, v_n_1340_, v_x_1332_, v_x_1333_);
return v___x_1341_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter___boxed(lean_object* v_motive_1342_, lean_object* v_x_1343_, lean_object* v_x_1344_, lean_object* v_x_1345_, lean_object* v_h__1_1346_, lean_object* v_h__2_1347_){
_start:
{
lean_object* v_res_1348_; 
v_res_1348_ = lp_choreo___private_Choreo_Language_0__Choreo_repeatRun_match__1_splitter(v_motive_1342_, v_x_1343_, v_x_1344_, v_x_1345_, v_h__1_1346_, v_h__2_1347_);
lean_dec(v_x_1343_);
return v_res_1348_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_next_match__1_splitter___redArg(lean_object* v_op_1349_, lean_object* v_h__1_1350_, lean_object* v_h__2_1351_, lean_object* v_h__3_1352_, lean_object* v_h__4_1353_){
_start:
{
switch(lean_obj_tag(v_op_1349_))
{
case 0:
{
lean_object* v_target_1354_; lean_object* v_beats_1355_; lean_object* v___x_1356_; 
lean_dec(v_h__4_1353_);
lean_dec(v_h__3_1352_);
lean_dec(v_h__2_1351_);
v_target_1354_ = lean_ctor_get(v_op_1349_, 0);
lean_inc(v_target_1354_);
v_beats_1355_ = lean_ctor_get(v_op_1349_, 1);
lean_inc(v_beats_1355_);
lean_dec_ref_known(v_op_1349_, 2);
v___x_1356_ = lean_apply_2(v_h__1_1350_, v_target_1354_, v_beats_1355_);
return v___x_1356_;
}
case 1:
{
lean_object* v_centre_1357_; uint8_t v_ccw_1358_; lean_object* v_beats_1359_; lean_object* v___x_1360_; lean_object* v___x_1361_; 
lean_dec(v_h__4_1353_);
lean_dec(v_h__2_1351_);
lean_dec(v_h__1_1350_);
v_centre_1357_ = lean_ctor_get(v_op_1349_, 0);
lean_inc_ref(v_centre_1357_);
v_ccw_1358_ = lean_ctor_get_uint8(v_op_1349_, sizeof(void*)*2);
v_beats_1359_ = lean_ctor_get(v_op_1349_, 1);
lean_inc(v_beats_1359_);
lean_dec_ref_known(v_op_1349_, 2);
v___x_1360_ = lean_box(v_ccw_1358_);
v___x_1361_ = lean_apply_3(v_h__3_1352_, v_centre_1357_, v___x_1360_, v_beats_1359_);
return v___x_1361_;
}
case 2:
{
lean_object* v_deltas_1362_; lean_object* v_beats_1363_; lean_object* v___x_1364_; 
lean_dec(v_h__3_1352_);
lean_dec(v_h__2_1351_);
lean_dec(v_h__1_1350_);
v_deltas_1362_ = lean_ctor_get(v_op_1349_, 0);
lean_inc(v_deltas_1362_);
v_beats_1363_ = lean_ctor_get(v_op_1349_, 1);
lean_inc(v_beats_1363_);
lean_dec_ref_known(v_op_1349_, 2);
v___x_1364_ = lean_apply_2(v_h__4_1353_, v_deltas_1362_, v_beats_1363_);
return v___x_1364_;
}
default: 
{
lean_object* v_left_1365_; lean_object* v_right_1366_; lean_object* v_line_1367_; lean_object* v_target_1368_; lean_object* v_beats_1369_; lean_object* v___x_1370_; 
lean_dec(v_h__4_1353_);
lean_dec(v_h__3_1352_);
lean_dec(v_h__1_1350_);
v_left_1365_ = lean_ctor_get(v_op_1349_, 0);
lean_inc(v_left_1365_);
v_right_1366_ = lean_ctor_get(v_op_1349_, 1);
lean_inc(v_right_1366_);
v_line_1367_ = lean_ctor_get(v_op_1349_, 2);
lean_inc(v_line_1367_);
v_target_1368_ = lean_ctor_get(v_op_1349_, 3);
lean_inc(v_target_1368_);
v_beats_1369_ = lean_ctor_get(v_op_1349_, 4);
lean_inc(v_beats_1369_);
lean_dec_ref_known(v_op_1349_, 5);
v___x_1370_ = lean_apply_5(v_h__2_1351_, v_left_1365_, v_right_1366_, v_line_1367_, v_target_1368_, v_beats_1369_);
return v___x_1370_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_next_match__1_splitter(lean_object* v_motive_1371_, lean_object* v_op_1372_, lean_object* v_h__1_1373_, lean_object* v_h__2_1374_, lean_object* v_h__3_1375_, lean_object* v_h__4_1376_){
_start:
{
switch(lean_obj_tag(v_op_1372_))
{
case 0:
{
lean_object* v_target_1377_; lean_object* v_beats_1378_; lean_object* v___x_1379_; 
lean_dec(v_h__4_1376_);
lean_dec(v_h__3_1375_);
lean_dec(v_h__2_1374_);
v_target_1377_ = lean_ctor_get(v_op_1372_, 0);
lean_inc(v_target_1377_);
v_beats_1378_ = lean_ctor_get(v_op_1372_, 1);
lean_inc(v_beats_1378_);
lean_dec_ref_known(v_op_1372_, 2);
v___x_1379_ = lean_apply_2(v_h__1_1373_, v_target_1377_, v_beats_1378_);
return v___x_1379_;
}
case 1:
{
lean_object* v_centre_1380_; uint8_t v_ccw_1381_; lean_object* v_beats_1382_; lean_object* v___x_1383_; lean_object* v___x_1384_; 
lean_dec(v_h__4_1376_);
lean_dec(v_h__2_1374_);
lean_dec(v_h__1_1373_);
v_centre_1380_ = lean_ctor_get(v_op_1372_, 0);
lean_inc_ref(v_centre_1380_);
v_ccw_1381_ = lean_ctor_get_uint8(v_op_1372_, sizeof(void*)*2);
v_beats_1382_ = lean_ctor_get(v_op_1372_, 1);
lean_inc(v_beats_1382_);
lean_dec_ref_known(v_op_1372_, 2);
v___x_1383_ = lean_box(v_ccw_1381_);
v___x_1384_ = lean_apply_3(v_h__3_1375_, v_centre_1380_, v___x_1383_, v_beats_1382_);
return v___x_1384_;
}
case 2:
{
lean_object* v_deltas_1385_; lean_object* v_beats_1386_; lean_object* v___x_1387_; 
lean_dec(v_h__3_1375_);
lean_dec(v_h__2_1374_);
lean_dec(v_h__1_1373_);
v_deltas_1385_ = lean_ctor_get(v_op_1372_, 0);
lean_inc(v_deltas_1385_);
v_beats_1386_ = lean_ctor_get(v_op_1372_, 1);
lean_inc(v_beats_1386_);
lean_dec_ref_known(v_op_1372_, 2);
v___x_1387_ = lean_apply_2(v_h__4_1376_, v_deltas_1385_, v_beats_1386_);
return v___x_1387_;
}
default: 
{
lean_object* v_left_1388_; lean_object* v_right_1389_; lean_object* v_line_1390_; lean_object* v_target_1391_; lean_object* v_beats_1392_; lean_object* v___x_1393_; 
lean_dec(v_h__4_1376_);
lean_dec(v_h__3_1375_);
lean_dec(v_h__1_1373_);
v_left_1388_ = lean_ctor_get(v_op_1372_, 0);
lean_inc(v_left_1388_);
v_right_1389_ = lean_ctor_get(v_op_1372_, 1);
lean_inc(v_right_1389_);
v_line_1390_ = lean_ctor_get(v_op_1372_, 2);
lean_inc(v_line_1390_);
v_target_1391_ = lean_ctor_get(v_op_1372_, 3);
lean_inc(v_target_1391_);
v_beats_1392_ = lean_ctor_get(v_op_1372_, 4);
lean_inc(v_beats_1392_);
lean_dec_ref_known(v_op_1372_, 5);
v___x_1393_ = lean_apply_5(v_h__2_1374_, v_left_1388_, v_right_1389_, v_line_1390_, v_target_1391_, v_beats_1392_);
return v___x_1393_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_pathOf_match__1_splitter___redArg(lean_object* v_op_1394_, lean_object* v_h__1_1395_, lean_object* v_h__2_1396_){
_start:
{
if (lean_obj_tag(v_op_1394_) == 1)
{
lean_object* v_centre_1397_; uint8_t v_ccw_1398_; lean_object* v_beats_1399_; lean_object* v___x_1400_; lean_object* v___x_1401_; 
lean_dec(v_h__2_1396_);
v_centre_1397_ = lean_ctor_get(v_op_1394_, 0);
lean_inc_ref(v_centre_1397_);
v_ccw_1398_ = lean_ctor_get_uint8(v_op_1394_, sizeof(void*)*2);
v_beats_1399_ = lean_ctor_get(v_op_1394_, 1);
lean_inc(v_beats_1399_);
lean_dec_ref_known(v_op_1394_, 2);
v___x_1400_ = lean_box(v_ccw_1398_);
v___x_1401_ = lean_apply_3(v_h__1_1395_, v_centre_1397_, v___x_1400_, v_beats_1399_);
return v___x_1401_;
}
else
{
lean_object* v___x_1402_; 
lean_dec(v_h__1_1395_);
v___x_1402_ = lean_apply_2(v_h__2_1396_, v_op_1394_, lean_box(0));
return v___x_1402_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_pathOf_match__1_splitter(lean_object* v_motive_1403_, lean_object* v_op_1404_, lean_object* v_h__1_1405_, lean_object* v_h__2_1406_){
_start:
{
if (lean_obj_tag(v_op_1404_) == 1)
{
lean_object* v_centre_1407_; uint8_t v_ccw_1408_; lean_object* v_beats_1409_; lean_object* v___x_1410_; lean_object* v___x_1411_; 
lean_dec(v_h__2_1406_);
v_centre_1407_ = lean_ctor_get(v_op_1404_, 0);
lean_inc_ref(v_centre_1407_);
v_ccw_1408_ = lean_ctor_get_uint8(v_op_1404_, sizeof(void*)*2);
v_beats_1409_ = lean_ctor_get(v_op_1404_, 1);
lean_inc(v_beats_1409_);
lean_dec_ref_known(v_op_1404_, 2);
v___x_1410_ = lean_box(v_ccw_1408_);
v___x_1411_ = lean_apply_3(v_h__1_1405_, v_centre_1407_, v___x_1410_, v_beats_1409_);
return v___x_1411_;
}
else
{
lean_object* v___x_1412_; 
lean_dec(v_h__1_1405_);
v___x_1412_ = lean_apply_2(v_h__2_1406_, v_op_1404_, lean_box(0));
return v___x_1412_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Pred_holds_match__1_splitter___redArg(lean_object* v_x_1413_, lean_object* v_x_1414_, lean_object* v_h__1_1415_, lean_object* v_h__2_1416_, lean_object* v_h__3_1417_, lean_object* v_h__4_1418_, lean_object* v_h__5_1419_, lean_object* v_h__6_1420_, lean_object* v_h__7_1421_){
_start:
{
switch(lean_obj_tag(v_x_1413_))
{
case 0:
{
lean_object* v___x_1422_; 
lean_dec(v_h__7_1421_);
lean_dec(v_h__6_1420_);
lean_dec(v_h__5_1419_);
lean_dec(v_h__4_1418_);
lean_dec(v_h__3_1417_);
lean_dec(v_h__2_1416_);
v___x_1422_ = lean_apply_1(v_h__1_1415_, v_x_1414_);
return v___x_1422_;
}
case 1:
{
lean_object* v_places_1423_; lean_object* v___x_1424_; 
lean_dec(v_h__7_1421_);
lean_dec(v_h__6_1420_);
lean_dec(v_h__5_1419_);
lean_dec(v_h__4_1418_);
lean_dec(v_h__3_1417_);
lean_dec(v_h__1_1415_);
v_places_1423_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_places_1423_);
lean_dec_ref_known(v_x_1413_, 1);
v___x_1424_ = lean_apply_2(v_h__2_1416_, v_places_1423_, v_x_1414_);
return v___x_1424_;
}
case 2:
{
lean_object* v_n_1425_; lean_object* v_d_1426_; lean_object* v___x_1427_; 
lean_dec(v_h__7_1421_);
lean_dec(v_h__6_1420_);
lean_dec(v_h__5_1419_);
lean_dec(v_h__4_1418_);
lean_dec(v_h__2_1416_);
lean_dec(v_h__1_1415_);
v_n_1425_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_n_1425_);
v_d_1426_ = lean_ctor_get(v_x_1413_, 1);
lean_inc(v_d_1426_);
lean_dec_ref_known(v_x_1413_, 2);
v___x_1427_ = lean_apply_3(v_h__3_1417_, v_n_1425_, v_d_1426_, v_x_1414_);
return v___x_1427_;
}
case 3:
{
lean_object* v_who_1428_; lean_object* v_cx_1429_; lean_object* v_cy_1430_; lean_object* v_r2_1431_; lean_object* v___x_1432_; 
lean_dec(v_h__7_1421_);
lean_dec(v_h__6_1420_);
lean_dec(v_h__5_1419_);
lean_dec(v_h__3_1417_);
lean_dec(v_h__2_1416_);
lean_dec(v_h__1_1415_);
v_who_1428_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_who_1428_);
v_cx_1429_ = lean_ctor_get(v_x_1413_, 1);
lean_inc(v_cx_1429_);
v_cy_1430_ = lean_ctor_get(v_x_1413_, 2);
lean_inc(v_cy_1430_);
v_r2_1431_ = lean_ctor_get(v_x_1413_, 3);
lean_inc(v_r2_1431_);
lean_dec_ref_known(v_x_1413_, 4);
v___x_1432_ = lean_apply_5(v_h__4_1418_, v_who_1428_, v_cx_1429_, v_cy_1430_, v_r2_1431_, v_x_1414_);
return v___x_1432_;
}
case 4:
{
lean_object* v_A_1433_; lean_object* v_B_1434_; lean_object* v_d_1435_; lean_object* v___x_1436_; 
lean_dec(v_h__7_1421_);
lean_dec(v_h__6_1420_);
lean_dec(v_h__4_1418_);
lean_dec(v_h__3_1417_);
lean_dec(v_h__2_1416_);
lean_dec(v_h__1_1415_);
v_A_1433_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_A_1433_);
v_B_1434_ = lean_ctor_get(v_x_1413_, 1);
lean_inc(v_B_1434_);
v_d_1435_ = lean_ctor_get(v_x_1413_, 2);
lean_inc(v_d_1435_);
lean_dec_ref_known(v_x_1413_, 3);
v___x_1436_ = lean_apply_4(v_h__5_1419_, v_A_1433_, v_B_1434_, v_d_1435_, v_x_1414_);
return v___x_1436_;
}
case 5:
{
lean_object* v_A_1437_; lean_object* v_B_1438_; lean_object* v_line_1439_; lean_object* v_d_1440_; lean_object* v___x_1441_; 
lean_dec(v_h__7_1421_);
lean_dec(v_h__5_1419_);
lean_dec(v_h__4_1418_);
lean_dec(v_h__3_1417_);
lean_dec(v_h__2_1416_);
lean_dec(v_h__1_1415_);
v_A_1437_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_A_1437_);
v_B_1438_ = lean_ctor_get(v_x_1413_, 1);
lean_inc(v_B_1438_);
v_line_1439_ = lean_ctor_get(v_x_1413_, 2);
lean_inc(v_line_1439_);
v_d_1440_ = lean_ctor_get(v_x_1413_, 3);
lean_inc(v_d_1440_);
lean_dec_ref_known(v_x_1413_, 4);
v___x_1441_ = lean_apply_5(v_h__6_1420_, v_A_1437_, v_B_1438_, v_line_1439_, v_d_1440_, v_x_1414_);
return v___x_1441_;
}
default: 
{
lean_object* v_p_1442_; lean_object* v_q_1443_; lean_object* v___x_1444_; 
lean_dec(v_h__6_1420_);
lean_dec(v_h__5_1419_);
lean_dec(v_h__4_1418_);
lean_dec(v_h__3_1417_);
lean_dec(v_h__2_1416_);
lean_dec(v_h__1_1415_);
v_p_1442_ = lean_ctor_get(v_x_1413_, 0);
lean_inc(v_p_1442_);
v_q_1443_ = lean_ctor_get(v_x_1413_, 1);
lean_inc(v_q_1443_);
lean_dec_ref_known(v_x_1413_, 2);
v___x_1444_ = lean_apply_3(v_h__7_1421_, v_p_1442_, v_q_1443_, v_x_1414_);
return v___x_1444_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Pred_holds_match__1_splitter(lean_object* v_motive_1445_, lean_object* v_x_1446_, lean_object* v_x_1447_, lean_object* v_h__1_1448_, lean_object* v_h__2_1449_, lean_object* v_h__3_1450_, lean_object* v_h__4_1451_, lean_object* v_h__5_1452_, lean_object* v_h__6_1453_, lean_object* v_h__7_1454_){
_start:
{
switch(lean_obj_tag(v_x_1446_))
{
case 0:
{
lean_object* v___x_1455_; 
lean_dec(v_h__7_1454_);
lean_dec(v_h__6_1453_);
lean_dec(v_h__5_1452_);
lean_dec(v_h__4_1451_);
lean_dec(v_h__3_1450_);
lean_dec(v_h__2_1449_);
v___x_1455_ = lean_apply_1(v_h__1_1448_, v_x_1447_);
return v___x_1455_;
}
case 1:
{
lean_object* v_places_1456_; lean_object* v___x_1457_; 
lean_dec(v_h__7_1454_);
lean_dec(v_h__6_1453_);
lean_dec(v_h__5_1452_);
lean_dec(v_h__4_1451_);
lean_dec(v_h__3_1450_);
lean_dec(v_h__1_1448_);
v_places_1456_ = lean_ctor_get(v_x_1446_, 0);
lean_inc(v_places_1456_);
lean_dec_ref_known(v_x_1446_, 1);
v___x_1457_ = lean_apply_2(v_h__2_1449_, v_places_1456_, v_x_1447_);
return v___x_1457_;
}
case 2:
{
lean_object* v_n_1458_; lean_object* v_d_1459_; lean_object* v___x_1460_; 
lean_dec(v_h__7_1454_);
lean_dec(v_h__6_1453_);
lean_dec(v_h__5_1452_);
lean_dec(v_h__4_1451_);
lean_dec(v_h__2_1449_);
lean_dec(v_h__1_1448_);
v_n_1458_ = lean_ctor_get(v_x_1446_, 0);
lean_inc(v_n_1458_);
v_d_1459_ = lean_ctor_get(v_x_1446_, 1);
lean_inc(v_d_1459_);
lean_dec_ref_known(v_x_1446_, 2);
v___x_1460_ = lean_apply_3(v_h__3_1450_, v_n_1458_, v_d_1459_, v_x_1447_);
return v___x_1460_;
}
case 3:
{
lean_object* v_who_1461_; lean_object* v_cx_1462_; lean_object* v_cy_1463_; lean_object* v_r2_1464_; lean_object* v___x_1465_; 
lean_dec(v_h__7_1454_);
lean_dec(v_h__6_1453_);
lean_dec(v_h__5_1452_);
lean_dec(v_h__3_1450_);
lean_dec(v_h__2_1449_);
lean_dec(v_h__1_1448_);
v_who_1461_ = lean_ctor_get(v_x_1446_, 0);
lean_inc(v_who_1461_);
v_cx_1462_ = lean_ctor_get(v_x_1446_, 1);
lean_inc(v_cx_1462_);
v_cy_1463_ = lean_ctor_get(v_x_1446_, 2);
lean_inc(v_cy_1463_);
v_r2_1464_ = lean_ctor_get(v_x_1446_, 3);
lean_inc(v_r2_1464_);
lean_dec_ref_known(v_x_1446_, 4);
v___x_1465_ = lean_apply_5(v_h__4_1451_, v_who_1461_, v_cx_1462_, v_cy_1463_, v_r2_1464_, v_x_1447_);
return v___x_1465_;
}
case 4:
{
lean_object* v_A_1466_; lean_object* v_B_1467_; lean_object* v_d_1468_; lean_object* v___x_1469_; 
lean_dec(v_h__7_1454_);
lean_dec(v_h__6_1453_);
lean_dec(v_h__4_1451_);
lean_dec(v_h__3_1450_);
lean_dec(v_h__2_1449_);
lean_dec(v_h__1_1448_);
v_A_1466_ = lean_ctor_get(v_x_1446_, 0);
lean_inc(v_A_1466_);
v_B_1467_ = lean_ctor_get(v_x_1446_, 1);
lean_inc(v_B_1467_);
v_d_1468_ = lean_ctor_get(v_x_1446_, 2);
lean_inc(v_d_1468_);
lean_dec_ref_known(v_x_1446_, 3);
v___x_1469_ = lean_apply_4(v_h__5_1452_, v_A_1466_, v_B_1467_, v_d_1468_, v_x_1447_);
return v___x_1469_;
}
case 5:
{
lean_object* v_A_1470_; lean_object* v_B_1471_; lean_object* v_line_1472_; lean_object* v_d_1473_; lean_object* v___x_1474_; 
lean_dec(v_h__7_1454_);
lean_dec(v_h__5_1452_);
lean_dec(v_h__4_1451_);
lean_dec(v_h__3_1450_);
lean_dec(v_h__2_1449_);
lean_dec(v_h__1_1448_);
v_A_1470_ = lean_ctor_get(v_x_1446_, 0);
lean_inc(v_A_1470_);
v_B_1471_ = lean_ctor_get(v_x_1446_, 1);
lean_inc(v_B_1471_);
v_line_1472_ = lean_ctor_get(v_x_1446_, 2);
lean_inc(v_line_1472_);
v_d_1473_ = lean_ctor_get(v_x_1446_, 3);
lean_inc(v_d_1473_);
lean_dec_ref_known(v_x_1446_, 4);
v___x_1474_ = lean_apply_5(v_h__6_1453_, v_A_1470_, v_B_1471_, v_line_1472_, v_d_1473_, v_x_1447_);
return v___x_1474_;
}
default: 
{
lean_object* v_p_1475_; lean_object* v_q_1476_; lean_object* v___x_1477_; 
lean_dec(v_h__6_1453_);
lean_dec(v_h__5_1452_);
lean_dec(v_h__4_1451_);
lean_dec(v_h__3_1450_);
lean_dec(v_h__2_1449_);
lean_dec(v_h__1_1448_);
v_p_1475_ = lean_ctor_get(v_x_1446_, 0);
lean_inc(v_p_1475_);
v_q_1476_ = lean_ctor_get(v_x_1446_, 1);
lean_inc(v_q_1476_);
lean_dec_ref_known(v_x_1446_, 2);
v___x_1477_ = lean_apply_3(v_h__7_1454_, v_p_1475_, v_q_1476_, v_x_1447_);
return v___x_1477_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter___redArg(lean_object* v_x_1478_, lean_object* v_h__1_1479_, lean_object* v_h__2_1480_, lean_object* v_h__3_1481_, lean_object* v_h__4_1482_){
_start:
{
switch(lean_obj_tag(v_x_1478_))
{
case 0:
{
lean_object* v_target_1483_; lean_object* v_beats_1484_; lean_object* v___x_1485_; 
lean_dec(v_h__4_1482_);
lean_dec(v_h__3_1481_);
lean_dec(v_h__2_1480_);
v_target_1483_ = lean_ctor_get(v_x_1478_, 0);
lean_inc(v_target_1483_);
v_beats_1484_ = lean_ctor_get(v_x_1478_, 1);
lean_inc(v_beats_1484_);
lean_dec_ref_known(v_x_1478_, 2);
v___x_1485_ = lean_apply_2(v_h__1_1479_, v_target_1483_, v_beats_1484_);
return v___x_1485_;
}
case 1:
{
lean_object* v_centre_1486_; uint8_t v_ccw_1487_; lean_object* v_beats_1488_; lean_object* v___x_1489_; lean_object* v___x_1490_; 
lean_dec(v_h__4_1482_);
lean_dec(v_h__3_1481_);
lean_dec(v_h__1_1479_);
v_centre_1486_ = lean_ctor_get(v_x_1478_, 0);
lean_inc_ref(v_centre_1486_);
v_ccw_1487_ = lean_ctor_get_uint8(v_x_1478_, sizeof(void*)*2);
v_beats_1488_ = lean_ctor_get(v_x_1478_, 1);
lean_inc(v_beats_1488_);
lean_dec_ref_known(v_x_1478_, 2);
v___x_1489_ = lean_box(v_ccw_1487_);
v___x_1490_ = lean_apply_3(v_h__2_1480_, v_centre_1486_, v___x_1489_, v_beats_1488_);
return v___x_1490_;
}
case 2:
{
lean_object* v_deltas_1491_; lean_object* v_beats_1492_; lean_object* v___x_1493_; 
lean_dec(v_h__4_1482_);
lean_dec(v_h__2_1480_);
lean_dec(v_h__1_1479_);
v_deltas_1491_ = lean_ctor_get(v_x_1478_, 0);
lean_inc(v_deltas_1491_);
v_beats_1492_ = lean_ctor_get(v_x_1478_, 1);
lean_inc(v_beats_1492_);
lean_dec_ref_known(v_x_1478_, 2);
v___x_1493_ = lean_apply_2(v_h__3_1481_, v_deltas_1491_, v_beats_1492_);
return v___x_1493_;
}
default: 
{
lean_object* v_left_1494_; lean_object* v_right_1495_; lean_object* v_line_1496_; lean_object* v_target_1497_; lean_object* v_beats_1498_; lean_object* v___x_1499_; 
lean_dec(v_h__3_1481_);
lean_dec(v_h__2_1480_);
lean_dec(v_h__1_1479_);
v_left_1494_ = lean_ctor_get(v_x_1478_, 0);
lean_inc(v_left_1494_);
v_right_1495_ = lean_ctor_get(v_x_1478_, 1);
lean_inc(v_right_1495_);
v_line_1496_ = lean_ctor_get(v_x_1478_, 2);
lean_inc(v_line_1496_);
v_target_1497_ = lean_ctor_get(v_x_1478_, 3);
lean_inc(v_target_1497_);
v_beats_1498_ = lean_ctor_get(v_x_1478_, 4);
lean_inc(v_beats_1498_);
lean_dec_ref_known(v_x_1478_, 5);
v___x_1499_ = lean_apply_5(v_h__4_1482_, v_left_1494_, v_right_1495_, v_line_1496_, v_target_1497_, v_beats_1498_);
return v___x_1499_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_Op_beats_match__1_splitter(lean_object* v_motive_1500_, lean_object* v_x_1501_, lean_object* v_h__1_1502_, lean_object* v_h__2_1503_, lean_object* v_h__3_1504_, lean_object* v_h__4_1505_){
_start:
{
switch(lean_obj_tag(v_x_1501_))
{
case 0:
{
lean_object* v_target_1506_; lean_object* v_beats_1507_; lean_object* v___x_1508_; 
lean_dec(v_h__4_1505_);
lean_dec(v_h__3_1504_);
lean_dec(v_h__2_1503_);
v_target_1506_ = lean_ctor_get(v_x_1501_, 0);
lean_inc(v_target_1506_);
v_beats_1507_ = lean_ctor_get(v_x_1501_, 1);
lean_inc(v_beats_1507_);
lean_dec_ref_known(v_x_1501_, 2);
v___x_1508_ = lean_apply_2(v_h__1_1502_, v_target_1506_, v_beats_1507_);
return v___x_1508_;
}
case 1:
{
lean_object* v_centre_1509_; uint8_t v_ccw_1510_; lean_object* v_beats_1511_; lean_object* v___x_1512_; lean_object* v___x_1513_; 
lean_dec(v_h__4_1505_);
lean_dec(v_h__3_1504_);
lean_dec(v_h__1_1502_);
v_centre_1509_ = lean_ctor_get(v_x_1501_, 0);
lean_inc_ref(v_centre_1509_);
v_ccw_1510_ = lean_ctor_get_uint8(v_x_1501_, sizeof(void*)*2);
v_beats_1511_ = lean_ctor_get(v_x_1501_, 1);
lean_inc(v_beats_1511_);
lean_dec_ref_known(v_x_1501_, 2);
v___x_1512_ = lean_box(v_ccw_1510_);
v___x_1513_ = lean_apply_3(v_h__2_1503_, v_centre_1509_, v___x_1512_, v_beats_1511_);
return v___x_1513_;
}
case 2:
{
lean_object* v_deltas_1514_; lean_object* v_beats_1515_; lean_object* v___x_1516_; 
lean_dec(v_h__4_1505_);
lean_dec(v_h__2_1503_);
lean_dec(v_h__1_1502_);
v_deltas_1514_ = lean_ctor_get(v_x_1501_, 0);
lean_inc(v_deltas_1514_);
v_beats_1515_ = lean_ctor_get(v_x_1501_, 1);
lean_inc(v_beats_1515_);
lean_dec_ref_known(v_x_1501_, 2);
v___x_1516_ = lean_apply_2(v_h__3_1504_, v_deltas_1514_, v_beats_1515_);
return v___x_1516_;
}
default: 
{
lean_object* v_left_1517_; lean_object* v_right_1518_; lean_object* v_line_1519_; lean_object* v_target_1520_; lean_object* v_beats_1521_; lean_object* v___x_1522_; 
lean_dec(v_h__3_1504_);
lean_dec(v_h__2_1503_);
lean_dec(v_h__1_1502_);
v_left_1517_ = lean_ctor_get(v_x_1501_, 0);
lean_inc(v_left_1517_);
v_right_1518_ = lean_ctor_get(v_x_1501_, 1);
lean_inc(v_right_1518_);
v_line_1519_ = lean_ctor_get(v_x_1501_, 2);
lean_inc(v_line_1519_);
v_target_1520_ = lean_ctor_get(v_x_1501_, 3);
lean_inc(v_target_1520_);
v_beats_1521_ = lean_ctor_get(v_x_1501_, 4);
lean_inc(v_beats_1521_);
lean_dec_ref_known(v_x_1501_, 5);
v___x_1522_ = lean_apply_5(v_h__4_1505_, v_left_1517_, v_right_1518_, v_line_1519_, v_target_1520_, v_beats_1521_);
return v___x_1522_;
}
}
}
}
LEAN_EXPORT uint8_t lp_choreo_Choreo_Prog_allRun(lean_object* v_c_1523_, lean_object* v_x_1524_, lean_object* v_x_1525_, lean_object* v_x_1526_){
_start:
{
switch(lean_obj_tag(v_x_1524_))
{
case 0:
{
uint8_t v___x_1527_; 
lean_dec(v_x_1526_);
lean_dec(v_x_1525_);
lean_dec_ref(v_c_1523_);
v___x_1527_ = 1;
return v___x_1527_;
}
case 1:
{
lean_object* v_st_1528_; lean_object* v_op_1529_; uint8_t v___x_1530_; 
lean_dec(v_x_1525_);
v_st_1528_ = lean_ctor_get(v_x_1524_, 0);
lean_inc_ref(v_st_1528_);
lean_dec_ref_known(v_x_1524_, 1);
v_op_1529_ = lean_ctor_get(v_st_1528_, 0);
lean_inc_ref(v_op_1529_);
lean_dec_ref(v_st_1528_);
v___x_1530_ = lp_choreo_Choreo_Op_enabled(v_op_1529_, v_c_1523_, v_x_1526_);
lean_dec(v_x_1526_);
return v___x_1530_;
}
case 2:
{
lean_object* v_a_1531_; lean_object* v_b_1532_; lean_object* v_ra_1533_; uint8_t v___x_1534_; 
v_a_1531_ = lean_ctor_get(v_x_1524_, 0);
lean_inc_n(v_a_1531_, 2);
v_b_1532_ = lean_ctor_get(v_x_1524_, 1);
lean_inc(v_b_1532_);
lean_dec_ref_known(v_x_1524_, 2);
lean_inc(v_x_1526_);
lean_inc(v_x_1525_);
lean_inc_ref_n(v_c_1523_, 2);
v_ra_1533_ = lp_choreo_Choreo_Prog_exec(v_c_1523_, v_a_1531_, v_x_1525_, v_x_1526_);
v___x_1534_ = lp_choreo_Choreo_Prog_allRun(v_c_1523_, v_a_1531_, v_x_1525_, v_x_1526_);
if (v___x_1534_ == 0)
{
lean_dec_ref(v_ra_1533_);
lean_dec(v_b_1532_);
lean_dec_ref(v_c_1523_);
return v___x_1534_;
}
else
{
lean_object* v_snd_1535_; lean_object* v_fst_1536_; lean_object* v_snd_1537_; 
v_snd_1535_ = lean_ctor_get(v_ra_1533_, 1);
lean_inc(v_snd_1535_);
lean_dec_ref(v_ra_1533_);
v_fst_1536_ = lean_ctor_get(v_snd_1535_, 0);
lean_inc(v_fst_1536_);
v_snd_1537_ = lean_ctor_get(v_snd_1535_, 1);
lean_inc(v_snd_1537_);
lean_dec(v_snd_1535_);
v_x_1524_ = v_b_1532_;
v_x_1525_ = v_fst_1536_;
v_x_1526_ = v_snd_1537_;
goto _start;
}
}
default: 
{
uint8_t v___x_1539_; 
lean_dec_ref_known(v_x_1524_, 2);
lean_dec(v_x_1526_);
lean_dec(v_x_1525_);
lean_dec_ref(v_c_1523_);
v___x_1539_ = 0;
return v___x_1539_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Prog_allRun___boxed(lean_object* v_c_1540_, lean_object* v_x_1541_, lean_object* v_x_1542_, lean_object* v_x_1543_){
_start:
{
uint8_t v_res_1544_; lean_object* v_r_1545_; 
v_res_1544_ = lp_choreo_Choreo_Prog_allRun(v_c_1540_, v_x_1541_, v_x_1542_, v_x_1543_);
v_r_1545_ = lean_box(v_res_1544_);
return v_r_1545_;
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_samePhases_match__1_splitter___redArg(lean_object* v_x_1546_, lean_object* v_x_1547_, lean_object* v_h__1_1548_, lean_object* v_h__2_1549_, lean_object* v_h__3_1550_){
_start:
{
if (lean_obj_tag(v_x_1546_) == 0)
{
lean_dec(v_h__2_1549_);
if (lean_obj_tag(v_x_1547_) == 0)
{
lean_object* v___x_1551_; lean_object* v___x_1552_; 
lean_dec(v_h__3_1550_);
v___x_1551_ = lean_box(0);
v___x_1552_ = lean_apply_1(v_h__1_1548_, v___x_1551_);
return v___x_1552_;
}
else
{
lean_object* v___x_1553_; 
lean_dec(v_h__1_1548_);
v___x_1553_ = lean_apply_4(v_h__3_1550_, v_x_1546_, v_x_1547_, lean_box(0), lean_box(0));
return v___x_1553_;
}
}
else
{
lean_dec(v_h__1_1548_);
if (lean_obj_tag(v_x_1547_) == 1)
{
lean_object* v_head_1554_; lean_object* v_tail_1555_; lean_object* v_head_1556_; lean_object* v_tail_1557_; lean_object* v___x_1558_; 
lean_dec(v_h__3_1550_);
v_head_1554_ = lean_ctor_get(v_x_1546_, 0);
lean_inc(v_head_1554_);
v_tail_1555_ = lean_ctor_get(v_x_1546_, 1);
lean_inc(v_tail_1555_);
lean_dec_ref_known(v_x_1546_, 2);
v_head_1556_ = lean_ctor_get(v_x_1547_, 0);
lean_inc(v_head_1556_);
v_tail_1557_ = lean_ctor_get(v_x_1547_, 1);
lean_inc(v_tail_1557_);
lean_dec_ref_known(v_x_1547_, 2);
v___x_1558_ = lean_apply_4(v_h__2_1549_, v_head_1554_, v_tail_1555_, v_head_1556_, v_tail_1557_);
return v___x_1558_;
}
else
{
lean_object* v___x_1559_; 
lean_dec(v_h__2_1549_);
v___x_1559_ = lean_apply_4(v_h__3_1550_, v_x_1546_, v_x_1547_, lean_box(0), lean_box(0));
return v___x_1559_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Choreo_Language_0__Choreo_samePhases_match__1_splitter(lean_object* v_motive_1560_, lean_object* v_x_1561_, lean_object* v_x_1562_, lean_object* v_h__1_1563_, lean_object* v_h__2_1564_, lean_object* v_h__3_1565_){
_start:
{
if (lean_obj_tag(v_x_1561_) == 0)
{
lean_dec(v_h__2_1564_);
if (lean_obj_tag(v_x_1562_) == 0)
{
lean_object* v___x_1566_; lean_object* v___x_1567_; 
lean_dec(v_h__3_1565_);
v___x_1566_ = lean_box(0);
v___x_1567_ = lean_apply_1(v_h__1_1563_, v___x_1566_);
return v___x_1567_;
}
else
{
lean_object* v___x_1568_; 
lean_dec(v_h__1_1563_);
v___x_1568_ = lean_apply_4(v_h__3_1565_, v_x_1561_, v_x_1562_, lean_box(0), lean_box(0));
return v___x_1568_;
}
}
else
{
lean_dec(v_h__1_1563_);
if (lean_obj_tag(v_x_1562_) == 1)
{
lean_object* v_head_1569_; lean_object* v_tail_1570_; lean_object* v_head_1571_; lean_object* v_tail_1572_; lean_object* v___x_1573_; 
lean_dec(v_h__3_1565_);
v_head_1569_ = lean_ctor_get(v_x_1561_, 0);
lean_inc(v_head_1569_);
v_tail_1570_ = lean_ctor_get(v_x_1561_, 1);
lean_inc(v_tail_1570_);
lean_dec_ref_known(v_x_1561_, 2);
v_head_1571_ = lean_ctor_get(v_x_1562_, 0);
lean_inc(v_head_1571_);
v_tail_1572_ = lean_ctor_get(v_x_1562_, 1);
lean_inc(v_tail_1572_);
lean_dec_ref_known(v_x_1562_, 2);
v___x_1573_ = lean_apply_4(v_h__2_1564_, v_head_1569_, v_tail_1570_, v_head_1571_, v_tail_1572_);
return v___x_1573_;
}
else
{
lean_object* v___x_1574_; 
lean_dec(v_h__2_1564_);
v___x_1574_ = lean_apply_4(v_h__3_1565_, v_x_1561_, v_x_1562_, lean_box(0), lean_box(0));
return v___x_1574_;
}
}
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_RotationPath(uint8_t builtin);
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
res = initialize_choreo_Choreo_RotationPath(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
