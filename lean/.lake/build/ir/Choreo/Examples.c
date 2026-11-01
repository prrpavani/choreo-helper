// Lean compiler output
// Module: Choreo.Examples
// Imports: public import Init public meta import Init public import Choreo.QuickRefute public import Choreo.Compose public import Lean
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
lean_object* lean_int_mul(lean_object*, lean_object*);
lean_object* l_Lean_Name_mkStr1(lean_object*);
lean_object* lean_int_neg(lean_object*);
uint8_t l_Lean_Syntax_isOfKind(lean_object*, lean_object*);
lean_object* l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
lean_object* l_Lean_Syntax_getArg(lean_object*, lean_object*);
lean_object* lean_st_ref_get(lean_object*);
lean_object* l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Elab_Command_liftCoreM___redArg(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_Environment_find_x3f(lean_object*, lean_object*, uint8_t);
lean_object* l_Lean_ConstantInfo_type(lean_object*);
lean_object* l_Lean_Expr_getUsedConstants(lean_object*);
lean_object* lean_array_to_list(lean_object*);
lean_object* l_List_appendTR___redArg(lean_object*, lean_object*);
lean_object* l_Lean_NameSet_insert(lean_object*, lean_object*);
uint8_t l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(lean_object*, lean_object*);
lean_object* l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6(lean_object*, lean_object*);
lean_object* l_List_reverse___redArg(lean_object*);
uint8_t l_Lean_Meta_isMatcherCore(lean_object*, lean_object*);
lean_object* l_Lean_Name_getRoot(lean_object*);
uint8_t lean_name_eq(lean_object*, lean_object*);
uint8_t l_Lean_Name_isInternal(lean_object*);
lean_object* l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofList(lean_object*);
lean_object* l_Lean_logInfo___at___00__private_Lean_Elab_DocString_Builtin_0__Lean_Doc_lean_runCommand_spec__1(lean_object*, lean_object*, lean_object*);
extern lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState;
lean_object* l_Lean_Environment_setExporting(lean_object*, uint8_t);
extern lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt;
lean_object* l_Lean_PersistentEnvExtension_getState___redArg(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed(lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(lean_object*, lean_object*);
lean_object* l_Lean_MessageData_ofName(lean_object*);
lean_object* l_Lean_stringToMessageData(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_specSurface_go(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_specSurface(lean_object*, lean_object*);
static const lean_string_object lp_choreo_command_x23spec__surface___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "command#spec_surface_"};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__0 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__0_value;
static const lean_ctor_object lp_choreo_command_x23spec__surface___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(36, 158, 205, 235, 202, 39, 14, 226)}};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__1 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__1_value;
static const lean_string_object lp_choreo_command_x23spec__surface___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "andthen"};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__2 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__2_value;
static const lean_ctor_object lp_choreo_command_x23spec__surface___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__2_value),LEAN_SCALAR_PTR_LITERAL(40, 255, 78, 30, 143, 119, 117, 174)}};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__3 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__3_value;
static const lean_string_object lp_choreo_command_x23spec__surface___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "#spec_surface "};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__4 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__4_value;
static const lean_ctor_object lp_choreo_command_x23spec__surface___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__4_value)}};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__5 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__5_value;
static const lean_string_object lp_choreo_command_x23spec__surface___00__closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "ident"};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__6 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__6_value;
static const lean_ctor_object lp_choreo_command_x23spec__surface___00__closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__6_value),LEAN_SCALAR_PTR_LITERAL(52, 159, 208, 51, 14, 60, 6, 71)}};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__7 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__7_value;
static const lean_ctor_object lp_choreo_command_x23spec__surface___00__closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 0}, .m_objs = {((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__7_value)}};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__8 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__8_value;
static const lean_ctor_object lp_choreo_command_x23spec__surface___00__closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__3_value),((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__5_value),((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__8_value)}};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__9 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__9_value;
static const lean_ctor_object lp_choreo_command_x23spec__surface___00__closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__9_value)}};
static const lean_object* lp_choreo_command_x23spec__surface___00__closed__10 = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__10_value;
LEAN_EXPORT const lean_object* lp_choreo_command_x23spec__surface__ = (const lean_object*)&lp_choreo_command_x23spec__surface___00__closed__10_value;
static const lean_string_object lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "Choreo"};
static const lean_object* lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__0 = (const lean_object*)&lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__0_value;
static const lean_ctor_object lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__0_value),LEAN_SCALAR_PTR_LITERAL(76, 92, 201, 135, 104, 229, 4, 164)}};
static const lean_object* lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__1 = (const lean_object*)&lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0(lean_object*, uint8_t, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23spec__surface____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23spec__surface____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_command_x23audit__axioms___00__closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 22, .m_capacity = 22, .m_length = 21, .m_data = "command#audit_axioms_"};
static const lean_object* lp_choreo_command_x23audit__axioms___00__closed__0 = (const lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__0_value;
static const lean_ctor_object lp_choreo_command_x23audit__axioms___00__closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 8, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__0_value),LEAN_SCALAR_PTR_LITERAL(160, 129, 83, 253, 242, 38, 251, 157)}};
static const lean_object* lp_choreo_command_x23audit__axioms___00__closed__1 = (const lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__1_value;
static const lean_string_object lp_choreo_command_x23audit__axioms___00__closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 15, .m_capacity = 15, .m_length = 14, .m_data = "#audit_axioms "};
static const lean_object* lp_choreo_command_x23audit__axioms___00__closed__2 = (const lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__2_value;
static const lean_ctor_object lp_choreo_command_x23audit__axioms___00__closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 5}, .m_objs = {((lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__2_value)}};
static const lean_object* lp_choreo_command_x23audit__axioms___00__closed__3 = (const lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__3_value;
static const lean_ctor_object lp_choreo_command_x23audit__axioms___00__closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 2}, .m_objs = {((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__3_value),((lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__3_value),((lean_object*)&lp_choreo_command_x23spec__surface___00__closed__8_value)}};
static const lean_object* lp_choreo_command_x23audit__axioms___00__closed__4 = (const lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__4_value;
static const lean_ctor_object lp_choreo_command_x23audit__axioms___00__closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*3 + 0, .m_other = 3, .m_tag = 3}, .m_objs = {((lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__1_value),((lean_object*)(((size_t)(1022) << 1) | 1)),((lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__4_value)}};
static const lean_object* lp_choreo_command_x23audit__axioms___00__closed__5 = (const lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__5_value;
LEAN_EXPORT const lean_object* lp_choreo_command_x23audit__axioms__ = (const lean_object*)&lp_choreo_command_x23audit__axioms___00__closed__5_value;
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___redArg(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = ": "};
static const lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__0 = (const lean_object*)&lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__0_value;
static lean_once_cell_t lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__1;
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Examples_walk___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_walk___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_walk___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_walk___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_walk___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_walk___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_walk___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_walk___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Examples_walk___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_walk___closed__4;
static lean_once_cell_t lp_choreo_Choreo_Examples_walk___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_walk___closed__5;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_walk(lean_object*, lean_object*, lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Examples_stage___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_stage___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_stage___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_stage___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_stage___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_stage___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_stage___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_stage___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Examples_stage___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_stage___closed__4;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_stage;
static lean_once_cell_t lp_choreo_Choreo_Examples_cfg___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_cfg___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_cfg___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_cfg___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_cfg___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_cfg___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_cfg;
static const lean_ctor_object lp_choreo_Choreo_Examples_phaseOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*1 + 0, .m_other = 1, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(4) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_Examples_phaseOf___closed__0 = (const lean_object*)&lp_choreo_Choreo_Examples_phaseOf___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_Examples_phaseOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_Examples_phaseOf___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_Examples_phaseOf___closed__1 = (const lean_object*)&lp_choreo_Choreo_Examples_phaseOf___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_phaseOf(lean_object*);
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__4;
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__5;
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__6;
static lean_once_cell_t lp_choreo_Choreo_Examples_good___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_good___closed__7;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_good;
static lean_once_cell_t lp_choreo_Choreo_Examples_headOn___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_headOn___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_headOn___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_headOn___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_headOn___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_headOn___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_headOn___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_headOn___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Examples_headOn___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_headOn___closed__4;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_headOn;
static lean_once_cell_t lp_choreo_Choreo_Examples_runsOff___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_runsOff___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_runsOff___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_runsOff___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_runsOff___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_runsOff___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_runsOff___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_runsOff___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Examples_runsOff___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_runsOff___closed__4;
static lean_once_cell_t lp_choreo_Choreo_Examples_runsOff___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_runsOff___closed__5;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_runsOff;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_sprint;
static lean_once_cell_t lp_choreo_Choreo_Examples_sprintPhase___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_sprintPhase___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_sprintPhase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_sprintPhase___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_sprintPhase___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_sprintPhase___closed__2;
static const lean_ctor_object lp_choreo_Choreo_Examples_sprintPhase___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)&lp_choreo_Choreo_Examples_phaseOf___closed__0_value),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_Examples_sprintPhase___closed__3 = (const lean_object*)&lp_choreo_Choreo_Examples_sprintPhase___closed__3_value;
static lean_once_cell_t lp_choreo_Choreo_Examples_sprintPhase___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_sprintPhase___closed__4;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_sprintPhase;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodRoutine___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodRoutine___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodRoutine___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodRoutine___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_goodRoutine;
static const lean_ctor_object lp_choreo_Choreo_Examples_goodAsks___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(1) << 1) | 1)),((lean_object*)(((size_t)(0) << 1) | 1))}};
static const lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__0 = (const lean_object*)&lp_choreo_Choreo_Examples_goodAsks___closed__0_value;
static const lean_ctor_object lp_choreo_Choreo_Examples_goodAsks___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_ctor_object) + sizeof(void*)*2 + 0, .m_other = 2, .m_tag = 1}, .m_objs = {((lean_object*)(((size_t)(0) << 1) | 1)),((lean_object*)&lp_choreo_Choreo_Examples_goodAsks___closed__0_value)}};
static const lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__1 = (const lean_object*)&lp_choreo_Choreo_Examples_goodAsks___closed__1_value;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__4;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__5;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__6;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__7;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__8;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__9_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__9;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__10_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__10;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__11_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__11;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__12_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__12;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__13_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__13;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__14_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__14;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodAsks___closed__15_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodAsks___closed__15;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_goodAsks;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_threeCfg;
static lean_once_cell_t lp_choreo_Choreo_Examples_threePhase___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_threePhase___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_threePhase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_threePhase___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_threePhase___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_threePhase___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_threePhase;
static lean_once_cell_t lp_choreo_Choreo_Examples_threeRoutine___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_threeRoutine___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_threeRoutine___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_threeRoutine___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_threeRoutine;
static lean_once_cell_t lp_choreo_Choreo_Examples_bentPhase___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_bentPhase___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_bentPhase___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_bentPhase___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_bentPhase___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_bentPhase___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_bentPhase___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_bentPhase___closed__3;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_bentPhase;
static lean_once_cell_t lp_choreo_Choreo_Examples_bentRoutine___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_bentRoutine___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_bentRoutine___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_bentRoutine___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_bentRoutine;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_wrongLength;
static lean_once_cell_t lp_choreo_Choreo_Examples_collides___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_collides___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_collides___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_collides___closed__1;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_collides;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_offBeat;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__2;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__3_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__3;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__4_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__4;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__5_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__5;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__6_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__6;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__7_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__7;
static lean_once_cell_t lp_choreo_Choreo_Examples_goodMove___closed__8_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_goodMove___closed__8;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_goodMove;
static lean_once_cell_t lp_choreo_Choreo_Examples_jump___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_jump___closed__0;
static lean_once_cell_t lp_choreo_Choreo_Examples_jump___closed__1_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_jump___closed__1;
static lean_once_cell_t lp_choreo_Choreo_Examples_jump___closed__2_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Choreo_Examples_jump___closed__2;
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_jump;
LEAN_EXPORT lean_object* lp_choreo_specSurface_go(lean_object* v_env_1_, lean_object* v_todo_2_, lean_object* v_seen_3_){
_start:
{
if (lean_obj_tag(v_todo_2_) == 0)
{
lean_dec_ref(v_env_1_);
return v_seen_3_;
}
else
{
lean_object* v_head_4_; lean_object* v_tail_5_; lean_object* v___y_7_; uint8_t v___x_11_; 
v_head_4_ = lean_ctor_get(v_todo_2_, 0);
lean_inc(v_head_4_);
v_tail_5_ = lean_ctor_get(v_todo_2_, 1);
lean_inc(v_tail_5_);
lean_dec_ref_known(v_todo_2_, 2);
v___x_11_ = l_Std_DTreeMap_Internal_Impl_contains___at___00Lean_NameMap_contains_spec__0___redArg(v_head_4_, v_seen_3_);
if (v___x_11_ == 0)
{
lean_object* v___x_12_; 
lean_inc(v_head_4_);
lean_inc_ref(v_env_1_);
v___x_12_ = l_Lean_Environment_find_x3f(v_env_1_, v_head_4_, v___x_11_);
if (lean_obj_tag(v___x_12_) == 0)
{
lean_object* v___x_13_; 
v___x_13_ = lean_box(0);
v___y_7_ = v___x_13_;
goto v___jp_6_;
}
else
{
lean_object* v_val_14_; 
v_val_14_ = lean_ctor_get(v___x_12_, 0);
lean_inc(v_val_14_);
lean_dec_ref_known(v___x_12_, 1);
if (lean_obj_tag(v_val_14_) == 1)
{
lean_object* v_val_15_; lean_object* v_toConstantVal_16_; lean_object* v_value_17_; lean_object* v_type_18_; lean_object* v___x_19_; lean_object* v___x_20_; lean_object* v___x_21_; lean_object* v___x_22_; lean_object* v___x_23_; 
v_val_15_ = lean_ctor_get(v_val_14_, 0);
lean_inc_ref(v_val_15_);
lean_dec_ref_known(v_val_14_, 1);
v_toConstantVal_16_ = lean_ctor_get(v_val_15_, 0);
lean_inc_ref(v_toConstantVal_16_);
v_value_17_ = lean_ctor_get(v_val_15_, 1);
lean_inc_ref(v_value_17_);
lean_dec_ref(v_val_15_);
v_type_18_ = lean_ctor_get(v_toConstantVal_16_, 2);
lean_inc_ref(v_type_18_);
lean_dec_ref(v_toConstantVal_16_);
v___x_19_ = l_Lean_Expr_getUsedConstants(v_type_18_);
v___x_20_ = lean_array_to_list(v___x_19_);
v___x_21_ = l_Lean_Expr_getUsedConstants(v_value_17_);
v___x_22_ = lean_array_to_list(v___x_21_);
v___x_23_ = l_List_appendTR___redArg(v___x_20_, v___x_22_);
v___y_7_ = v___x_23_;
goto v___jp_6_;
}
else
{
lean_object* v___x_24_; lean_object* v___x_25_; lean_object* v___x_26_; 
v___x_24_ = l_Lean_ConstantInfo_type(v_val_14_);
lean_dec(v_val_14_);
v___x_25_ = l_Lean_Expr_getUsedConstants(v___x_24_);
v___x_26_ = lean_array_to_list(v___x_25_);
v___y_7_ = v___x_26_;
goto v___jp_6_;
}
}
}
else
{
lean_dec(v_head_4_);
v_todo_2_ = v_tail_5_;
goto _start;
}
v___jp_6_:
{
lean_object* v___x_8_; lean_object* v___x_9_; 
v___x_8_ = l_List_appendTR___redArg(v___y_7_, v_tail_5_);
v___x_9_ = l_Lean_NameSet_insert(v_seen_3_, v_head_4_);
v_todo_2_ = v___x_8_;
v_seen_3_ = v___x_9_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_specSurface(lean_object* v_env_28_, lean_object* v_thm_29_){
_start:
{
uint8_t v___x_30_; lean_object* v___x_31_; 
v___x_30_ = 0;
lean_inc_ref(v_env_28_);
v___x_31_ = l_Lean_Environment_find_x3f(v_env_28_, v_thm_29_, v___x_30_);
if (lean_obj_tag(v___x_31_) == 0)
{
lean_object* v___x_32_; 
lean_dec_ref(v_env_28_);
v___x_32_ = lean_box(1);
return v___x_32_;
}
else
{
lean_object* v_val_33_; lean_object* v___x_34_; lean_object* v___x_35_; lean_object* v___x_36_; lean_object* v___x_37_; lean_object* v___x_38_; 
v_val_33_ = lean_ctor_get(v___x_31_, 0);
lean_inc(v_val_33_);
lean_dec_ref_known(v___x_31_, 1);
v___x_34_ = l_Lean_ConstantInfo_type(v_val_33_);
lean_dec(v_val_33_);
v___x_35_ = l_Lean_Expr_getUsedConstants(v___x_34_);
v___x_36_ = lean_array_to_list(v___x_35_);
v___x_37_ = lean_box(1);
v___x_38_ = lp_choreo_specSurface_go(v_env_28_, v___x_36_, v___x_37_);
return v___x_38_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0(lean_object* v___x_65_, uint8_t v___x_66_, lean_object* v_a_67_, lean_object* v_a_68_){
_start:
{
if (lean_obj_tag(v_a_67_) == 0)
{
lean_object* v___x_69_; 
lean_dec_ref(v___x_65_);
v___x_69_ = l_List_reverse___redArg(v_a_68_);
return v___x_69_;
}
else
{
lean_object* v_head_70_; lean_object* v_tail_71_; lean_object* v___x_73_; uint8_t v_isShared_74_; uint8_t v_isSharedCheck_90_; 
v_head_70_ = lean_ctor_get(v_a_67_, 0);
v_tail_71_ = lean_ctor_get(v_a_67_, 1);
v_isSharedCheck_90_ = !lean_is_exclusive(v_a_67_);
if (v_isSharedCheck_90_ == 0)
{
v___x_73_ = v_a_67_;
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
else
{
lean_inc(v_tail_71_);
lean_inc(v_head_70_);
lean_dec(v_a_67_);
v___x_73_ = lean_box(0);
v_isShared_74_ = v_isSharedCheck_90_;
goto v_resetjp_72_;
}
v_resetjp_72_:
{
uint8_t v___y_76_; lean_object* v___x_85_; lean_object* v___x_86_; uint8_t v___x_87_; 
v___x_85_ = l_Lean_Name_getRoot(v_head_70_);
v___x_86_ = ((lean_object*)(lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___closed__1));
v___x_87_ = lean_name_eq(v___x_85_, v___x_86_);
lean_dec(v___x_85_);
if (v___x_87_ == 0)
{
v___y_76_ = v___x_87_;
goto v___jp_75_;
}
else
{
uint8_t v___x_88_; 
v___x_88_ = l_Lean_Name_isInternal(v_head_70_);
if (v___x_88_ == 0)
{
v___y_76_ = v___x_66_;
goto v___jp_75_;
}
else
{
lean_del_object(v___x_73_);
lean_dec(v_head_70_);
v_a_67_ = v_tail_71_;
goto _start;
}
}
v___jp_75_:
{
if (v___y_76_ == 0)
{
lean_del_object(v___x_73_);
lean_dec(v_head_70_);
v_a_67_ = v_tail_71_;
goto _start;
}
else
{
uint8_t v___x_78_; 
lean_inc(v_head_70_);
lean_inc_ref(v___x_65_);
v___x_78_ = l_Lean_Meta_isMatcherCore(v___x_65_, v_head_70_);
if (v___x_78_ == 0)
{
if (v___x_66_ == 0)
{
lean_del_object(v___x_73_);
lean_dec(v_head_70_);
v_a_67_ = v_tail_71_;
goto _start;
}
else
{
lean_object* v___x_81_; 
if (v_isShared_74_ == 0)
{
lean_ctor_set(v___x_73_, 1, v_a_68_);
v___x_81_ = v___x_73_;
goto v_reusejp_80_;
}
else
{
lean_object* v_reuseFailAlloc_83_; 
v_reuseFailAlloc_83_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_83_, 0, v_head_70_);
lean_ctor_set(v_reuseFailAlloc_83_, 1, v_a_68_);
v___x_81_ = v_reuseFailAlloc_83_;
goto v_reusejp_80_;
}
v_reusejp_80_:
{
v_a_67_ = v_tail_71_;
v_a_68_ = v___x_81_;
goto _start;
}
}
}
else
{
lean_del_object(v___x_73_);
lean_dec(v_head_70_);
v_a_67_ = v_tail_71_;
goto _start;
}
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0___boxed(lean_object* v___x_91_, lean_object* v___x_92_, lean_object* v_a_93_, lean_object* v_a_94_){
_start:
{
uint8_t v___x_550__boxed_95_; lean_object* v_res_96_; 
v___x_550__boxed_95_ = lean_unbox(v___x_92_);
v_res_96_ = lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0(v___x_91_, v___x_550__boxed_95_, v_a_93_, v_a_94_);
return v_res_96_;
}
}
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23spec__surface____1(lean_object* v_x_97_, lean_object* v_a_98_, lean_object* v_a_99_){
_start:
{
lean_object* v___x_101_; uint8_t v___x_102_; 
v___x_101_ = ((lean_object*)(lp_choreo_command_x23spec__surface___00__closed__1));
lean_inc(v_x_97_);
v___x_102_ = l_Lean_Syntax_isOfKind(v_x_97_, v___x_101_);
if (v___x_102_ == 0)
{
lean_object* v___x_103_; 
lean_dec(v_x_97_);
v___x_103_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v___x_103_;
}
else
{
lean_object* v___x_104_; lean_object* v___x_105_; lean_object* v___x_106_; lean_object* v_env_107_; lean_object* v___x_108_; lean_object* v___x_109_; lean_object* v___x_110_; 
v___x_104_ = lean_unsigned_to_nat(1u);
v___x_105_ = l_Lean_Syntax_getArg(v_x_97_, v___x_104_);
lean_dec(v_x_97_);
v___x_106_ = lean_st_ref_get(v_a_99_);
v_env_107_ = lean_ctor_get(v___x_106_, 0);
lean_inc_ref(v_env_107_);
lean_dec(v___x_106_);
v___x_108_ = lean_box(0);
v___x_109_ = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed), 5, 2);
lean_closure_set(v___x_109_, 0, v___x_105_);
lean_closure_set(v___x_109_, 1, v___x_108_);
v___x_110_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_109_, v_a_98_, v_a_99_);
if (lean_obj_tag(v___x_110_) == 0)
{
lean_object* v_a_111_; lean_object* v___x_112_; lean_object* v___x_113_; lean_object* v___x_114_; lean_object* v___x_115_; lean_object* v___x_116_; lean_object* v___x_117_; lean_object* v___x_118_; 
v_a_111_ = lean_ctor_get(v___x_110_, 0);
lean_inc(v_a_111_);
lean_dec_ref_known(v___x_110_, 1);
lean_inc_ref(v_env_107_);
v___x_112_ = lp_choreo_specSurface(v_env_107_, v_a_111_);
v___x_113_ = lean_box(0);
v___x_114_ = l_Std_DTreeMap_Internal_Impl_foldrM___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__6(v___x_113_, v___x_112_);
lean_dec(v___x_112_);
v___x_115_ = lp_choreo_List_filterTR_loop___at___00__aux__Choreo__Examples______elabRules__command_x23spec__surface____1_spec__0(v_env_107_, v___x_102_, v___x_114_, v___x_113_);
v___x_116_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v___x_115_, v___x_113_);
v___x_117_ = l_Lean_MessageData_ofList(v___x_116_);
v___x_118_ = l_Lean_logInfo___at___00__private_Lean_Elab_DocString_Builtin_0__Lean_Doc_lean_runCommand_spec__1(v___x_117_, v_a_98_, v_a_99_);
return v___x_118_;
}
else
{
lean_object* v_a_119_; lean_object* v___x_121_; uint8_t v_isShared_122_; uint8_t v_isSharedCheck_126_; 
lean_dec_ref(v_env_107_);
v_a_119_ = lean_ctor_get(v___x_110_, 0);
v_isSharedCheck_126_ = !lean_is_exclusive(v___x_110_);
if (v_isSharedCheck_126_ == 0)
{
v___x_121_ = v___x_110_;
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
else
{
lean_inc(v_a_119_);
lean_dec(v___x_110_);
v___x_121_ = lean_box(0);
v_isShared_122_ = v_isSharedCheck_126_;
goto v_resetjp_120_;
}
v_resetjp_120_:
{
lean_object* v___x_124_; 
if (v_isShared_122_ == 0)
{
v___x_124_ = v___x_121_;
goto v_reusejp_123_;
}
else
{
lean_object* v_reuseFailAlloc_125_; 
v_reuseFailAlloc_125_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_125_, 0, v_a_119_);
v___x_124_ = v_reuseFailAlloc_125_;
goto v_reusejp_123_;
}
v_reusejp_123_:
{
return v___x_124_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23spec__surface____1___boxed(lean_object* v_x_127_, lean_object* v_a_128_, lean_object* v_a_129_, lean_object* v_a_130_){
_start:
{
lean_object* v_res_131_; 
v_res_131_ = lp_choreo___aux__Choreo__Examples______elabRules__command_x23spec__surface____1(v_x_127_, v_a_128_, v_a_129_);
lean_dec(v_a_129_);
lean_dec_ref(v_a_128_);
return v_res_131_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___redArg(lean_object* v_constName_147_, lean_object* v___y_148_){
_start:
{
lean_object* v___x_150_; lean_object* v___x_151_; lean_object* v_env_152_; uint8_t v___x_153_; lean_object* v_privateEnv_154_; lean_object* v___x_155_; lean_object* v___x_156_; lean_object* v___x_157_; lean_object* v_s_158_; lean_object* v___x_159_; lean_object* v___x_160_; lean_object* v___x_161_; lean_object* v___x_162_; 
v___x_150_ = l___private_Lean_Util_CollectAxioms_0__Lean_instInhabitedExportedAxiomsState;
v___x_151_ = lean_st_ref_get(v___y_148_);
v_env_152_ = lean_ctor_get(v___x_151_, 0);
lean_inc_ref_n(v_env_152_, 2);
lean_dec(v___x_151_);
v___x_153_ = 0;
v_privateEnv_154_ = l_Lean_Environment_setExporting(v_env_152_, v___x_153_);
v___x_155_ = l___private_Lean_Util_CollectAxioms_0__Lean_exportedAxiomsExt;
v___x_156_ = lean_box(2);
v___x_157_ = lean_box(0);
v_s_158_ = l_Lean_PersistentEnvExtension_getState___redArg(v___x_150_, v___x_155_, v_env_152_, v___x_156_, v___x_157_);
v___x_159_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_ExportedAxiomsState_find_x3f___boxed), 3, 1);
lean_closure_set(v___x_159_, 0, v_s_158_);
v___x_160_ = lean_alloc_closure((void*)(l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_collectAndGet___boxed), 4, 2);
lean_closure_set(v___x_160_, 0, v___x_159_);
lean_closure_set(v___x_160_, 1, v_constName_147_);
v___x_161_ = l___private_Lean_Util_CollectAxioms_0__Lean_CollectAxioms_runM___redArg(v_privateEnv_154_, v___x_160_);
v___x_162_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_162_, 0, v___x_161_);
return v___x_162_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___redArg___boxed(lean_object* v_constName_163_, lean_object* v___y_164_, lean_object* v___y_165_){
_start:
{
lean_object* v_res_166_; 
v_res_166_ = lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___redArg(v_constName_163_, v___y_164_);
lean_dec(v___y_164_);
return v_res_166_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0(lean_object* v_constName_167_, lean_object* v___y_168_, lean_object* v___y_169_){
_start:
{
lean_object* v___x_171_; 
v___x_171_ = lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___redArg(v_constName_167_, v___y_169_);
return v___x_171_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___boxed(lean_object* v_constName_172_, lean_object* v___y_173_, lean_object* v___y_174_, lean_object* v___y_175_){
_start:
{
lean_object* v_res_176_; 
v_res_176_ = lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0(v_constName_172_, v___y_173_, v___y_174_);
lean_dec(v___y_174_);
lean_dec_ref(v___y_173_);
return v_res_176_;
}
}
static lean_object* _init_lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__1(void){
_start:
{
lean_object* v___x_178_; lean_object* v___x_179_; 
v___x_178_ = ((lean_object*)(lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__0));
v___x_179_ = l_Lean_stringToMessageData(v___x_178_);
return v___x_179_;
}
}
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1(lean_object* v_x_180_, lean_object* v_a_181_, lean_object* v_a_182_){
_start:
{
lean_object* v___x_184_; uint8_t v___x_185_; 
v___x_184_ = ((lean_object*)(lp_choreo_command_x23audit__axioms___00__closed__1));
lean_inc(v_x_180_);
v___x_185_ = l_Lean_Syntax_isOfKind(v_x_180_, v___x_184_);
if (v___x_185_ == 0)
{
lean_object* v___x_186_; 
lean_dec(v_x_180_);
v___x_186_ = l_Lean_Elab_throwUnsupportedSyntax___at___00Lean_Elab_PostprocessTraces_elabStoreTraceAs_spec__0___redArg();
return v___x_186_;
}
else
{
lean_object* v___x_187_; lean_object* v___x_188_; lean_object* v___x_189_; lean_object* v___x_190_; lean_object* v___x_191_; 
v___x_187_ = lean_unsigned_to_nat(1u);
v___x_188_ = l_Lean_Syntax_getArg(v_x_180_, v___x_187_);
lean_dec(v_x_180_);
v___x_189_ = lean_box(0);
v___x_190_ = lean_alloc_closure((void*)(l_Lean_Elab_realizeGlobalConstNoOverloadWithInfo___boxed), 5, 2);
lean_closure_set(v___x_190_, 0, v___x_188_);
lean_closure_set(v___x_190_, 1, v___x_189_);
v___x_191_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_190_, v_a_181_, v_a_182_);
if (lean_obj_tag(v___x_191_) == 0)
{
lean_object* v_a_192_; lean_object* v___x_193_; lean_object* v___x_194_; 
v_a_192_ = lean_ctor_get(v___x_191_, 0);
lean_inc_n(v_a_192_, 2);
lean_dec_ref_known(v___x_191_, 1);
v___x_193_ = lean_alloc_closure((void*)(lp_choreo_Lean_collectAxioms___at___00__aux__Choreo__Examples______elabRules__command_x23audit__axioms____1_spec__0___boxed), 4, 1);
lean_closure_set(v___x_193_, 0, v_a_192_);
v___x_194_ = l_Lean_Elab_Command_liftCoreM___redArg(v___x_193_, v_a_181_, v_a_182_);
if (lean_obj_tag(v___x_194_) == 0)
{
lean_object* v_a_195_; lean_object* v___x_196_; lean_object* v___x_197_; lean_object* v___x_198_; lean_object* v___x_199_; lean_object* v___x_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; lean_object* v___x_204_; 
v_a_195_ = lean_ctor_get(v___x_194_, 0);
lean_inc(v_a_195_);
lean_dec_ref_known(v___x_194_, 1);
v___x_196_ = l_Lean_MessageData_ofName(v_a_192_);
v___x_197_ = lean_obj_once(&lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__1, &lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__1_once, _init_lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___closed__1);
v___x_198_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_198_, 0, v___x_196_);
lean_ctor_set(v___x_198_, 1, v___x_197_);
v___x_199_ = lean_array_to_list(v_a_195_);
v___x_200_ = lean_box(0);
v___x_201_ = l_List_mapTR_loop___at___00__private_Lean_LibrarySuggestions_SineQuaNon_0__Lean_LibrarySuggestions_SineQuaNon_sineQuaNon_go_spec__7(v___x_199_, v___x_200_);
v___x_202_ = l_Lean_MessageData_ofList(v___x_201_);
v___x_203_ = lean_alloc_ctor(7, 2, 0);
lean_ctor_set(v___x_203_, 0, v___x_198_);
lean_ctor_set(v___x_203_, 1, v___x_202_);
v___x_204_ = l_Lean_logInfo___at___00__private_Lean_Elab_DocString_Builtin_0__Lean_Doc_lean_runCommand_spec__1(v___x_203_, v_a_181_, v_a_182_);
return v___x_204_;
}
else
{
lean_object* v_a_205_; lean_object* v___x_207_; uint8_t v_isShared_208_; uint8_t v_isSharedCheck_212_; 
lean_dec(v_a_192_);
v_a_205_ = lean_ctor_get(v___x_194_, 0);
v_isSharedCheck_212_ = !lean_is_exclusive(v___x_194_);
if (v_isSharedCheck_212_ == 0)
{
v___x_207_ = v___x_194_;
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
else
{
lean_inc(v_a_205_);
lean_dec(v___x_194_);
v___x_207_ = lean_box(0);
v_isShared_208_ = v_isSharedCheck_212_;
goto v_resetjp_206_;
}
v_resetjp_206_:
{
lean_object* v___x_210_; 
if (v_isShared_208_ == 0)
{
v___x_210_ = v___x_207_;
goto v_reusejp_209_;
}
else
{
lean_object* v_reuseFailAlloc_211_; 
v_reuseFailAlloc_211_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_211_, 0, v_a_205_);
v___x_210_ = v_reuseFailAlloc_211_;
goto v_reusejp_209_;
}
v_reusejp_209_:
{
return v___x_210_;
}
}
}
}
else
{
lean_object* v_a_213_; lean_object* v___x_215_; uint8_t v_isShared_216_; uint8_t v_isSharedCheck_220_; 
v_a_213_ = lean_ctor_get(v___x_191_, 0);
v_isSharedCheck_220_ = !lean_is_exclusive(v___x_191_);
if (v_isSharedCheck_220_ == 0)
{
v___x_215_ = v___x_191_;
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
else
{
lean_inc(v_a_213_);
lean_dec(v___x_191_);
v___x_215_ = lean_box(0);
v_isShared_216_ = v_isSharedCheck_220_;
goto v_resetjp_214_;
}
v_resetjp_214_:
{
lean_object* v___x_218_; 
if (v_isShared_216_ == 0)
{
v___x_218_ = v___x_215_;
goto v_reusejp_217_;
}
else
{
lean_object* v_reuseFailAlloc_219_; 
v_reuseFailAlloc_219_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_219_, 0, v_a_213_);
v___x_218_ = v_reuseFailAlloc_219_;
goto v_reusejp_217_;
}
v_reusejp_217_:
{
return v___x_218_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1___boxed(lean_object* v_x_221_, lean_object* v_a_222_, lean_object* v_a_223_, lean_object* v_a_224_){
_start:
{
lean_object* v_res_225_; 
v_res_225_ = lp_choreo___aux__Choreo__Examples______elabRules__command_x23audit__axioms____1(v_x_221_, v_a_222_, v_a_223_);
lean_dec(v_a_223_);
lean_dec_ref(v_a_222_);
return v_res_225_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_walk___closed__0(void){
_start:
{
lean_object* v___x_226_; lean_object* v___x_227_; 
v___x_226_ = lean_unsigned_to_nat(3u);
v___x_227_ = lean_nat_to_int(v___x_226_);
return v___x_227_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_walk___closed__1(void){
_start:
{
lean_object* v___x_228_; lean_object* v___x_229_; 
v___x_228_ = lean_unsigned_to_nat(1u);
v___x_229_ = lean_nat_to_int(v___x_228_);
return v___x_229_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_walk___closed__2(void){
_start:
{
lean_object* v___x_230_; lean_object* v___x_231_; lean_object* v___x_232_; 
v___x_230_ = lean_box(0);
v___x_231_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__1, &lp_choreo_Choreo_Examples_walk___closed__1_once, _init_lp_choreo_Choreo_Examples_walk___closed__1);
v___x_232_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_232_, 0, v___x_231_);
lean_ctor_set(v___x_232_, 1, v___x_230_);
return v___x_232_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_walk___closed__3(void){
_start:
{
lean_object* v___x_233_; lean_object* v___x_234_; lean_object* v___x_235_; 
v___x_233_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__2, &lp_choreo_Choreo_Examples_walk___closed__2_once, _init_lp_choreo_Choreo_Examples_walk___closed__2);
v___x_234_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__0, &lp_choreo_Choreo_Examples_walk___closed__0_once, _init_lp_choreo_Choreo_Examples_walk___closed__0);
v___x_235_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_235_, 0, v___x_234_);
lean_ctor_set(v___x_235_, 1, v___x_233_);
return v___x_235_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_walk___closed__4(void){
_start:
{
lean_object* v___x_236_; lean_object* v___x_237_; lean_object* v___x_238_; 
v___x_236_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__3, &lp_choreo_Choreo_Examples_walk___closed__3_once, _init_lp_choreo_Choreo_Examples_walk___closed__3);
v___x_237_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__0, &lp_choreo_Choreo_Examples_walk___closed__0_once, _init_lp_choreo_Choreo_Examples_walk___closed__0);
v___x_238_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_238_, 0, v___x_237_);
lean_ctor_set(v___x_238_, 1, v___x_236_);
return v___x_238_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_walk___closed__5(void){
_start:
{
lean_object* v___x_239_; lean_object* v___x_240_; lean_object* v___x_241_; 
v___x_239_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__4, &lp_choreo_Choreo_Examples_walk___closed__4_once, _init_lp_choreo_Choreo_Examples_walk___closed__4);
v___x_240_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__1, &lp_choreo_Choreo_Examples_walk___closed__1_once, _init_lp_choreo_Choreo_Examples_walk___closed__1);
v___x_241_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_241_, 0, v___x_240_);
lean_ctor_set(v___x_241_, 1, v___x_239_);
return v___x_241_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_walk(lean_object* v_ax_242_, lean_object* v_ay_243_, lean_object* v_bx_244_, lean_object* v_by_x27_245_){
_start:
{
lean_object* v___x_246_; lean_object* v___x_247_; lean_object* v___x_248_; lean_object* v___x_249_; lean_object* v___x_250_; lean_object* v___x_251_; lean_object* v___x_252_; lean_object* v___x_253_; lean_object* v___x_254_; lean_object* v___x_255_; lean_object* v___x_256_; lean_object* v___x_257_; lean_object* v___x_258_; lean_object* v___x_259_; lean_object* v___x_260_; lean_object* v___x_261_; 
v___x_246_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__0, &lp_choreo_Choreo_Examples_walk___closed__0_once, _init_lp_choreo_Choreo_Examples_walk___closed__0);
v___x_247_ = lean_int_mul(v___x_246_, v_ax_242_);
v___x_248_ = lean_int_mul(v___x_246_, v_bx_244_);
v___x_249_ = lean_box(0);
v___x_250_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_250_, 0, v_bx_244_);
lean_ctor_set(v___x_250_, 1, v___x_249_);
v___x_251_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_251_, 0, v___x_248_);
lean_ctor_set(v___x_251_, 1, v___x_250_);
v___x_252_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_252_, 0, v___x_247_);
lean_ctor_set(v___x_252_, 1, v___x_251_);
v___x_253_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_253_, 0, v_ax_242_);
lean_ctor_set(v___x_253_, 1, v___x_252_);
v___x_254_ = lean_int_mul(v___x_246_, v_ay_243_);
v___x_255_ = lean_int_mul(v___x_246_, v_by_x27_245_);
v___x_256_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_256_, 0, v_by_x27_245_);
lean_ctor_set(v___x_256_, 1, v___x_249_);
v___x_257_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_257_, 0, v___x_255_);
lean_ctor_set(v___x_257_, 1, v___x_256_);
v___x_258_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_258_, 0, v___x_254_);
lean_ctor_set(v___x_258_, 1, v___x_257_);
v___x_259_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_259_, 0, v_ay_243_);
lean_ctor_set(v___x_259_, 1, v___x_258_);
v___x_260_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__5, &lp_choreo_Choreo_Examples_walk___closed__5_once, _init_lp_choreo_Choreo_Examples_walk___closed__5);
v___x_261_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_261_, 0, v___x_253_);
lean_ctor_set(v___x_261_, 1, v___x_259_);
lean_ctor_set(v___x_261_, 2, v___x_260_);
return v___x_261_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_stage___closed__0(void){
_start:
{
lean_object* v___x_262_; lean_object* v___x_263_; 
v___x_262_ = lean_unsigned_to_nat(6000u);
v___x_263_ = lean_nat_to_int(v___x_262_);
return v___x_263_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_stage___closed__1(void){
_start:
{
lean_object* v___x_264_; lean_object* v___x_265_; 
v___x_264_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__0, &lp_choreo_Choreo_Examples_stage___closed__0_once, _init_lp_choreo_Choreo_Examples_stage___closed__0);
v___x_265_ = lean_int_neg(v___x_264_);
return v___x_265_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_stage___closed__2(void){
_start:
{
lean_object* v___x_266_; lean_object* v___x_267_; 
v___x_266_ = lean_unsigned_to_nat(0u);
v___x_267_ = lean_nat_to_int(v___x_266_);
return v___x_267_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_stage___closed__3(void){
_start:
{
lean_object* v___x_268_; lean_object* v___x_269_; 
v___x_268_ = lean_unsigned_to_nat(8000u);
v___x_269_ = lean_nat_to_int(v___x_268_);
return v___x_269_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_stage___closed__4(void){
_start:
{
lean_object* v___x_270_; lean_object* v___x_271_; lean_object* v___x_272_; lean_object* v___x_273_; lean_object* v___x_274_; 
v___x_270_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__3, &lp_choreo_Choreo_Examples_stage___closed__3_once, _init_lp_choreo_Choreo_Examples_stage___closed__3);
v___x_271_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_272_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__0, &lp_choreo_Choreo_Examples_stage___closed__0_once, _init_lp_choreo_Choreo_Examples_stage___closed__0);
v___x_273_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__1, &lp_choreo_Choreo_Examples_stage___closed__1_once, _init_lp_choreo_Choreo_Examples_stage___closed__1);
v___x_274_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_274_, 0, v___x_273_);
lean_ctor_set(v___x_274_, 1, v___x_272_);
lean_ctor_set(v___x_274_, 2, v___x_271_);
lean_ctor_set(v___x_274_, 3, v___x_270_);
return v___x_274_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_stage(void){
_start:
{
lean_object* v___x_275_; 
v___x_275_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__4, &lp_choreo_Choreo_Examples_stage___closed__4_once, _init_lp_choreo_Choreo_Examples_stage___closed__4);
return v___x_275_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_cfg___closed__0(void){
_start:
{
lean_object* v___x_276_; lean_object* v___x_277_; 
v___x_276_ = lean_unsigned_to_nat(600u);
v___x_277_ = lean_nat_to_int(v___x_276_);
return v___x_277_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_cfg___closed__1(void){
_start:
{
lean_object* v___x_278_; lean_object* v___x_279_; 
v___x_278_ = lean_unsigned_to_nat(3500u);
v___x_279_ = lean_nat_to_int(v___x_278_);
return v___x_279_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_cfg___closed__2(void){
_start:
{
lean_object* v___x_280_; lean_object* v___x_281_; lean_object* v___x_282_; lean_object* v___x_283_; lean_object* v___x_284_; lean_object* v___x_285_; lean_object* v___x_286_; lean_object* v___x_287_; lean_object* v___x_288_; lean_object* v___x_289_; 
v___x_280_ = lean_unsigned_to_nat(8u);
v___x_281_ = lean_unsigned_to_nat(64u);
v___x_282_ = lean_unsigned_to_nat(1u);
v___x_283_ = lean_unsigned_to_nat(120u);
v___x_284_ = lean_unsigned_to_nat(4u);
v___x_285_ = lp_choreo_Choreo_Examples_stage;
v___x_286_ = lean_obj_once(&lp_choreo_Choreo_Examples_cfg___closed__1, &lp_choreo_Choreo_Examples_cfg___closed__1_once, _init_lp_choreo_Choreo_Examples_cfg___closed__1);
v___x_287_ = lean_obj_once(&lp_choreo_Choreo_Examples_cfg___closed__0, &lp_choreo_Choreo_Examples_cfg___closed__0_once, _init_lp_choreo_Choreo_Examples_cfg___closed__0);
v___x_288_ = lean_unsigned_to_nat(2u);
v___x_289_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_289_, 0, v___x_288_);
lean_ctor_set(v___x_289_, 1, v___x_287_);
lean_ctor_set(v___x_289_, 2, v___x_286_);
lean_ctor_set(v___x_289_, 3, v___x_285_);
lean_ctor_set(v___x_289_, 4, v___x_284_);
lean_ctor_set(v___x_289_, 5, v___x_283_);
lean_ctor_set(v___x_289_, 6, v___x_282_);
lean_ctor_set(v___x_289_, 7, v___x_281_);
lean_ctor_set(v___x_289_, 8, v___x_280_);
return v___x_289_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_cfg(void){
_start:
{
lean_object* v___x_290_; 
v___x_290_ = lean_obj_once(&lp_choreo_Choreo_Examples_cfg___closed__2, &lp_choreo_Choreo_Examples_cfg___closed__2_once, _init_lp_choreo_Choreo_Examples_cfg___closed__2);
return v___x_290_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Choreo_Examples_phaseOf(lean_object* v_paths_296_){
_start:
{
lean_object* v___x_297_; lean_object* v___x_298_; lean_object* v___x_299_; lean_object* v___x_300_; lean_object* v___x_301_; lean_object* v___x_302_; lean_object* v___x_303_; 
v___x_297_ = lean_unsigned_to_nat(0u);
v___x_298_ = lean_unsigned_to_nat(64u);
v___x_299_ = lp_choreo_Choreo_Examples_stage;
v___x_300_ = lean_box(0);
v___x_301_ = ((lean_object*)(lp_choreo_Choreo_Examples_phaseOf___closed__1));
v___x_302_ = lean_box(0);
v___x_303_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_303_, 0, v___x_297_);
lean_ctor_set(v___x_303_, 1, v___x_298_);
lean_ctor_set(v___x_303_, 2, v_paths_296_);
lean_ctor_set(v___x_303_, 3, v___x_299_);
lean_ctor_set(v___x_303_, 4, v___x_301_);
lean_ctor_set(v___x_303_, 5, v___x_300_);
lean_ctor_set(v___x_303_, 6, v___x_300_);
lean_ctor_set(v___x_303_, 7, v___x_302_);
return v___x_303_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__0(void){
_start:
{
lean_object* v___x_304_; lean_object* v___x_305_; 
v___x_304_ = lean_unsigned_to_nat(1000u);
v___x_305_ = lean_nat_to_int(v___x_304_);
return v___x_305_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__1(void){
_start:
{
lean_object* v___x_306_; lean_object* v___x_307_; 
v___x_306_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_307_ = lean_int_neg(v___x_306_);
return v___x_307_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__2(void){
_start:
{
lean_object* v___x_308_; lean_object* v___x_309_; 
v___x_308_ = lean_unsigned_to_nat(7000u);
v___x_309_ = lean_nat_to_int(v___x_308_);
return v___x_309_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__3(void){
_start:
{
lean_object* v___x_310_; lean_object* v___x_311_; lean_object* v___x_312_; lean_object* v___x_313_; 
v___x_310_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_311_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_312_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__1, &lp_choreo_Choreo_Examples_good___closed__1_once, _init_lp_choreo_Choreo_Examples_good___closed__1);
v___x_313_ = lp_choreo_Choreo_Examples_walk(v___x_312_, v___x_311_, v___x_312_, v___x_310_);
return v___x_313_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__4(void){
_start:
{
lean_object* v___x_314_; lean_object* v___x_315_; lean_object* v___x_316_; 
v___x_314_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_315_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_316_ = lp_choreo_Choreo_Examples_walk(v___x_315_, v___x_315_, v___x_315_, v___x_314_);
return v___x_316_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__5(void){
_start:
{
lean_object* v___x_317_; lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_317_ = lean_box(0);
v___x_318_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__4, &lp_choreo_Choreo_Examples_good___closed__4_once, _init_lp_choreo_Choreo_Examples_good___closed__4);
v___x_319_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_319_, 0, v___x_318_);
lean_ctor_set(v___x_319_, 1, v___x_317_);
return v___x_319_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__6(void){
_start:
{
lean_object* v___x_320_; lean_object* v___x_321_; lean_object* v___x_322_; 
v___x_320_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__5, &lp_choreo_Choreo_Examples_good___closed__5_once, _init_lp_choreo_Choreo_Examples_good___closed__5);
v___x_321_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__3, &lp_choreo_Choreo_Examples_good___closed__3_once, _init_lp_choreo_Choreo_Examples_good___closed__3);
v___x_322_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_322_, 0, v___x_321_);
lean_ctor_set(v___x_322_, 1, v___x_320_);
return v___x_322_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good___closed__7(void){
_start:
{
lean_object* v___x_323_; lean_object* v___x_324_; 
v___x_323_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__6, &lp_choreo_Choreo_Examples_good___closed__6_once, _init_lp_choreo_Choreo_Examples_good___closed__6);
v___x_324_ = lp_choreo_Choreo_Examples_phaseOf(v___x_323_);
return v___x_324_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_good(void){
_start:
{
lean_object* v___x_325_; 
v___x_325_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__7, &lp_choreo_Choreo_Examples_good___closed__7_once, _init_lp_choreo_Choreo_Examples_good___closed__7);
return v___x_325_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_headOn___closed__0(void){
_start:
{
lean_object* v___x_326_; lean_object* v___x_327_; lean_object* v___x_328_; lean_object* v___x_329_; 
v___x_326_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_327_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_328_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_329_ = lp_choreo_Choreo_Examples_walk(v___x_328_, v___x_327_, v___x_328_, v___x_326_);
return v___x_329_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_headOn___closed__1(void){
_start:
{
lean_object* v___x_330_; lean_object* v___x_331_; lean_object* v___x_332_; lean_object* v___x_333_; 
v___x_330_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_331_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_332_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_333_ = lp_choreo_Choreo_Examples_walk(v___x_332_, v___x_331_, v___x_332_, v___x_330_);
return v___x_333_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_headOn___closed__2(void){
_start:
{
lean_object* v___x_334_; lean_object* v___x_335_; lean_object* v___x_336_; 
v___x_334_ = lean_box(0);
v___x_335_ = lean_obj_once(&lp_choreo_Choreo_Examples_headOn___closed__1, &lp_choreo_Choreo_Examples_headOn___closed__1_once, _init_lp_choreo_Choreo_Examples_headOn___closed__1);
v___x_336_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_336_, 0, v___x_335_);
lean_ctor_set(v___x_336_, 1, v___x_334_);
return v___x_336_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_headOn___closed__3(void){
_start:
{
lean_object* v___x_337_; lean_object* v___x_338_; lean_object* v___x_339_; 
v___x_337_ = lean_obj_once(&lp_choreo_Choreo_Examples_headOn___closed__2, &lp_choreo_Choreo_Examples_headOn___closed__2_once, _init_lp_choreo_Choreo_Examples_headOn___closed__2);
v___x_338_ = lean_obj_once(&lp_choreo_Choreo_Examples_headOn___closed__0, &lp_choreo_Choreo_Examples_headOn___closed__0_once, _init_lp_choreo_Choreo_Examples_headOn___closed__0);
v___x_339_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_339_, 0, v___x_338_);
lean_ctor_set(v___x_339_, 1, v___x_337_);
return v___x_339_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_headOn___closed__4(void){
_start:
{
lean_object* v___x_340_; lean_object* v___x_341_; 
v___x_340_ = lean_obj_once(&lp_choreo_Choreo_Examples_headOn___closed__3, &lp_choreo_Choreo_Examples_headOn___closed__3_once, _init_lp_choreo_Choreo_Examples_headOn___closed__3);
v___x_341_ = lp_choreo_Choreo_Examples_phaseOf(v___x_340_);
return v___x_341_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_headOn(void){
_start:
{
lean_object* v___x_342_; 
v___x_342_ = lean_obj_once(&lp_choreo_Choreo_Examples_headOn___closed__4, &lp_choreo_Choreo_Examples_headOn___closed__4_once, _init_lp_choreo_Choreo_Examples_headOn___closed__4);
return v___x_342_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_runsOff___closed__0(void){
_start:
{
lean_object* v___x_343_; lean_object* v___x_344_; lean_object* v___x_345_; lean_object* v___x_346_; 
v___x_343_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_344_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_345_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_346_ = lp_choreo_Choreo_Examples_walk(v___x_345_, v___x_344_, v___x_343_, v___x_344_);
return v___x_346_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_runsOff___closed__1(void){
_start:
{
lean_object* v___x_347_; lean_object* v___x_348_; 
v___x_347_ = lean_unsigned_to_nat(5000u);
v___x_348_ = lean_nat_to_int(v___x_347_);
return v___x_348_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_runsOff___closed__2(void){
_start:
{
lean_object* v___x_349_; lean_object* v___x_350_; lean_object* v___x_351_; 
v___x_349_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__1, &lp_choreo_Choreo_Examples_runsOff___closed__1_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__1);
v___x_350_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_351_ = lp_choreo_Choreo_Examples_walk(v___x_350_, v___x_349_, v___x_350_, v___x_349_);
return v___x_351_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_runsOff___closed__3(void){
_start:
{
lean_object* v___x_352_; lean_object* v___x_353_; lean_object* v___x_354_; 
v___x_352_ = lean_box(0);
v___x_353_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__2, &lp_choreo_Choreo_Examples_runsOff___closed__2_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__2);
v___x_354_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_354_, 0, v___x_353_);
lean_ctor_set(v___x_354_, 1, v___x_352_);
return v___x_354_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_runsOff___closed__4(void){
_start:
{
lean_object* v___x_355_; lean_object* v___x_356_; lean_object* v___x_357_; 
v___x_355_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__3, &lp_choreo_Choreo_Examples_runsOff___closed__3_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__3);
v___x_356_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__0, &lp_choreo_Choreo_Examples_runsOff___closed__0_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__0);
v___x_357_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_357_, 0, v___x_356_);
lean_ctor_set(v___x_357_, 1, v___x_355_);
return v___x_357_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_runsOff___closed__5(void){
_start:
{
lean_object* v___x_358_; lean_object* v___x_359_; 
v___x_358_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__4, &lp_choreo_Choreo_Examples_runsOff___closed__4_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__4);
v___x_359_ = lp_choreo_Choreo_Examples_phaseOf(v___x_358_);
return v___x_359_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_runsOff(void){
_start:
{
lean_object* v___x_360_; 
v___x_360_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__5, &lp_choreo_Choreo_Examples_runsOff___closed__5_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__5);
return v___x_360_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_sprint(void){
_start:
{
lean_object* v___x_361_; lean_object* v_n_362_; lean_object* v_dmin_363_; lean_object* v_vmax_364_; lean_object* v_stage_365_; lean_object* v_ticksPerBeat_366_; lean_object* v_bpmNum_367_; lean_object* v_bpmDen_368_; lean_object* v___x_369_; lean_object* v___x_370_; lean_object* v___x_371_; 
v___x_361_ = lp_choreo_Choreo_Examples_cfg;
v_n_362_ = lean_ctor_get(v___x_361_, 0);
v_dmin_363_ = lean_ctor_get(v___x_361_, 1);
v_vmax_364_ = lean_ctor_get(v___x_361_, 2);
v_stage_365_ = lean_ctor_get(v___x_361_, 3);
v_ticksPerBeat_366_ = lean_ctor_get(v___x_361_, 4);
v_bpmNum_367_ = lean_ctor_get(v___x_361_, 5);
v_bpmDen_368_ = lean_ctor_get(v___x_361_, 6);
v___x_369_ = lean_unsigned_to_nat(4u);
v___x_370_ = lean_unsigned_to_nat(1u);
lean_inc(v_bpmDen_368_);
lean_inc(v_bpmNum_367_);
lean_inc(v_ticksPerBeat_366_);
lean_inc_ref(v_stage_365_);
lean_inc(v_vmax_364_);
lean_inc(v_dmin_363_);
lean_inc(v_n_362_);
v___x_371_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_371_, 0, v_n_362_);
lean_ctor_set(v___x_371_, 1, v_dmin_363_);
lean_ctor_set(v___x_371_, 2, v_vmax_364_);
lean_ctor_set(v___x_371_, 3, v_stage_365_);
lean_ctor_set(v___x_371_, 4, v_ticksPerBeat_366_);
lean_ctor_set(v___x_371_, 5, v_bpmNum_367_);
lean_ctor_set(v___x_371_, 6, v_bpmDen_368_);
lean_ctor_set(v___x_371_, 7, v___x_369_);
lean_ctor_set(v___x_371_, 8, v___x_370_);
return v___x_371_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_sprintPhase___closed__0(void){
_start:
{
lean_object* v___x_372_; lean_object* v___x_373_; 
v___x_372_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__1, &lp_choreo_Choreo_Examples_runsOff___closed__1_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__1);
v___x_373_ = lean_int_neg(v___x_372_);
return v___x_373_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_sprintPhase___closed__1(void){
_start:
{
lean_object* v___x_374_; lean_object* v___x_375_; lean_object* v___x_376_; lean_object* v___x_377_; 
v___x_374_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__1, &lp_choreo_Choreo_Examples_runsOff___closed__1_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__1);
v___x_375_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_376_ = lean_obj_once(&lp_choreo_Choreo_Examples_sprintPhase___closed__0, &lp_choreo_Choreo_Examples_sprintPhase___closed__0_once, _init_lp_choreo_Choreo_Examples_sprintPhase___closed__0);
v___x_377_ = lp_choreo_Choreo_Examples_walk(v___x_376_, v___x_375_, v___x_374_, v___x_375_);
return v___x_377_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_sprintPhase___closed__2(void){
_start:
{
lean_object* v___x_378_; lean_object* v___x_379_; lean_object* v___x_380_; 
v___x_378_ = lean_obj_once(&lp_choreo_Choreo_Examples_runsOff___closed__3, &lp_choreo_Choreo_Examples_runsOff___closed__3_once, _init_lp_choreo_Choreo_Examples_runsOff___closed__3);
v___x_379_ = lean_obj_once(&lp_choreo_Choreo_Examples_sprintPhase___closed__1, &lp_choreo_Choreo_Examples_sprintPhase___closed__1_once, _init_lp_choreo_Choreo_Examples_sprintPhase___closed__1);
v___x_380_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_380_, 0, v___x_379_);
lean_ctor_set(v___x_380_, 1, v___x_378_);
return v___x_380_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_sprintPhase___closed__4(void){
_start:
{
lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; lean_object* v___x_388_; lean_object* v___x_389_; lean_object* v___x_390_; lean_object* v___x_391_; 
v___x_384_ = lean_box(0);
v___x_385_ = lean_box(0);
v___x_386_ = ((lean_object*)(lp_choreo_Choreo_Examples_sprintPhase___closed__3));
v___x_387_ = lp_choreo_Choreo_Examples_stage;
v___x_388_ = lean_obj_once(&lp_choreo_Choreo_Examples_sprintPhase___closed__2, &lp_choreo_Choreo_Examples_sprintPhase___closed__2_once, _init_lp_choreo_Choreo_Examples_sprintPhase___closed__2);
v___x_389_ = lean_unsigned_to_nat(4u);
v___x_390_ = lean_unsigned_to_nat(0u);
v___x_391_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_391_, 0, v___x_390_);
lean_ctor_set(v___x_391_, 1, v___x_389_);
lean_ctor_set(v___x_391_, 2, v___x_388_);
lean_ctor_set(v___x_391_, 3, v___x_387_);
lean_ctor_set(v___x_391_, 4, v___x_386_);
lean_ctor_set(v___x_391_, 5, v___x_385_);
lean_ctor_set(v___x_391_, 6, v___x_385_);
lean_ctor_set(v___x_391_, 7, v___x_384_);
return v___x_391_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_sprintPhase(void){
_start:
{
lean_object* v___x_392_; 
v___x_392_ = lean_obj_once(&lp_choreo_Choreo_Examples_sprintPhase___closed__4, &lp_choreo_Choreo_Examples_sprintPhase___closed__4_once, _init_lp_choreo_Choreo_Examples_sprintPhase___closed__4);
return v___x_392_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodRoutine___closed__0(void){
_start:
{
lean_object* v___x_393_; lean_object* v___x_394_; lean_object* v___x_395_; 
v___x_393_ = lean_box(0);
v___x_394_ = lp_choreo_Choreo_Examples_good;
v___x_395_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_395_, 0, v___x_394_);
lean_ctor_set(v___x_395_, 1, v___x_393_);
return v___x_395_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodRoutine___closed__1(void){
_start:
{
lean_object* v___x_396_; lean_object* v___x_397_; lean_object* v___x_398_; 
v___x_396_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodRoutine___closed__0, &lp_choreo_Choreo_Examples_goodRoutine___closed__0_once, _init_lp_choreo_Choreo_Examples_goodRoutine___closed__0);
v___x_397_ = lp_choreo_Choreo_Examples_cfg;
v___x_398_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_398_, 0, v___x_397_);
lean_ctor_set(v___x_398_, 1, v___x_396_);
return v___x_398_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodRoutine(void){
_start:
{
lean_object* v___x_399_; 
v___x_399_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodRoutine___closed__1, &lp_choreo_Choreo_Examples_goodRoutine___closed__1_once, _init_lp_choreo_Choreo_Examples_goodRoutine___closed__1);
return v___x_399_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__2(void){
_start:
{
lean_object* v___x_406_; lean_object* v___x_407_; 
v___x_406_ = lean_unsigned_to_nat(2000u);
v___x_407_ = lean_nat_to_int(v___x_406_);
return v___x_407_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__3(void){
_start:
{
lean_object* v___x_408_; lean_object* v___x_409_; 
v___x_408_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__2, &lp_choreo_Choreo_Examples_goodAsks___closed__2_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__2);
v___x_409_ = lean_int_neg(v___x_408_);
return v___x_409_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__4(void){
_start:
{
lean_object* v___x_410_; lean_object* v___x_411_; lean_object* v___x_412_; lean_object* v___x_413_; lean_object* v___x_414_; 
v___x_410_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_411_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_412_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__2, &lp_choreo_Choreo_Examples_goodAsks___closed__2_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__2);
v___x_413_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__3, &lp_choreo_Choreo_Examples_goodAsks___closed__3_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__3);
v___x_414_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_414_, 0, v___x_413_);
lean_ctor_set(v___x_414_, 1, v___x_412_);
lean_ctor_set(v___x_414_, 2, v___x_411_);
lean_ctor_set(v___x_414_, 3, v___x_410_);
return v___x_414_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__5(void){
_start:
{
lean_object* v___x_415_; lean_object* v___x_416_; lean_object* v___x_417_; lean_object* v___x_418_; 
v___x_415_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__4, &lp_choreo_Choreo_Examples_goodAsks___closed__4_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__4);
v___x_416_ = ((lean_object*)(lp_choreo_Choreo_Examples_goodAsks___closed__1));
v___x_417_ = lean_unsigned_to_nat(0u);
v___x_418_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_418_, 0, v___x_417_);
lean_ctor_set(v___x_418_, 1, v___x_416_);
lean_ctor_set(v___x_418_, 2, v___x_415_);
return v___x_418_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__6(void){
_start:
{
lean_object* v___x_419_; lean_object* v___x_420_; lean_object* v___x_421_; lean_object* v___x_422_; lean_object* v___x_423_; 
v___x_419_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__3, &lp_choreo_Choreo_Examples_stage___closed__3_once, _init_lp_choreo_Choreo_Examples_stage___closed__3);
v___x_420_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_421_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__2, &lp_choreo_Choreo_Examples_goodAsks___closed__2_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__2);
v___x_422_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__3, &lp_choreo_Choreo_Examples_goodAsks___closed__3_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__3);
v___x_423_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_423_, 0, v___x_422_);
lean_ctor_set(v___x_423_, 1, v___x_421_);
lean_ctor_set(v___x_423_, 2, v___x_420_);
lean_ctor_set(v___x_423_, 3, v___x_419_);
return v___x_423_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__7(void){
_start:
{
lean_object* v___x_424_; lean_object* v___x_425_; lean_object* v___x_426_; lean_object* v___x_427_; 
v___x_424_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__6, &lp_choreo_Choreo_Examples_goodAsks___closed__6_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__6);
v___x_425_ = ((lean_object*)(lp_choreo_Choreo_Examples_goodAsks___closed__1));
v___x_426_ = lean_unsigned_to_nat(0u);
v___x_427_ = lean_alloc_ctor(1, 3, 0);
lean_ctor_set(v___x_427_, 0, v___x_426_);
lean_ctor_set(v___x_427_, 1, v___x_425_);
lean_ctor_set(v___x_427_, 2, v___x_424_);
return v___x_427_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__8(void){
_start:
{
lean_object* v___x_428_; lean_object* v___x_429_; lean_object* v___x_430_; 
v___x_428_ = lp_choreo_Choreo_Examples_stage;
v___x_429_ = lean_unsigned_to_nat(0u);
v___x_430_ = lean_alloc_ctor(2, 2, 0);
lean_ctor_set(v___x_430_, 0, v___x_429_);
lean_ctor_set(v___x_430_, 1, v___x_428_);
return v___x_430_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__9(void){
_start:
{
lean_object* v___x_431_; lean_object* v___x_432_; lean_object* v___x_433_; lean_object* v___x_434_; lean_object* v___x_435_; 
v___x_431_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_432_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__2, &lp_choreo_Choreo_Examples_goodAsks___closed__2_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__2);
v___x_433_ = lean_unsigned_to_nat(1u);
v___x_434_ = lean_unsigned_to_nat(0u);
v___x_435_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_435_, 0, v___x_434_);
lean_ctor_set(v___x_435_, 1, v___x_433_);
lean_ctor_set(v___x_435_, 2, v___x_432_);
lean_ctor_set(v___x_435_, 3, v___x_431_);
return v___x_435_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__10(void){
_start:
{
lean_object* v___x_436_; lean_object* v___x_437_; lean_object* v___x_438_; 
v___x_436_ = lean_box(0);
v___x_437_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__9, &lp_choreo_Choreo_Examples_goodAsks___closed__9_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__9);
v___x_438_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_438_, 0, v___x_437_);
lean_ctor_set(v___x_438_, 1, v___x_436_);
return v___x_438_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__11(void){
_start:
{
lean_object* v___x_439_; lean_object* v___x_440_; lean_object* v___x_441_; 
v___x_439_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__10, &lp_choreo_Choreo_Examples_goodAsks___closed__10_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__10);
v___x_440_ = lean_unsigned_to_nat(0u);
v___x_441_ = lean_alloc_ctor(5, 2, 0);
lean_ctor_set(v___x_441_, 0, v___x_440_);
lean_ctor_set(v___x_441_, 1, v___x_439_);
return v___x_441_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__12(void){
_start:
{
lean_object* v___x_442_; lean_object* v___x_443_; lean_object* v___x_444_; 
v___x_442_ = lean_box(0);
v___x_443_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__11, &lp_choreo_Choreo_Examples_goodAsks___closed__11_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__11);
v___x_444_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_444_, 0, v___x_443_);
lean_ctor_set(v___x_444_, 1, v___x_442_);
return v___x_444_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__13(void){
_start:
{
lean_object* v___x_445_; lean_object* v___x_446_; lean_object* v___x_447_; 
v___x_445_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__12, &lp_choreo_Choreo_Examples_goodAsks___closed__12_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__12);
v___x_446_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__8, &lp_choreo_Choreo_Examples_goodAsks___closed__8_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__8);
v___x_447_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_447_, 0, v___x_446_);
lean_ctor_set(v___x_447_, 1, v___x_445_);
return v___x_447_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__14(void){
_start:
{
lean_object* v___x_448_; lean_object* v___x_449_; lean_object* v___x_450_; 
v___x_448_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__13, &lp_choreo_Choreo_Examples_goodAsks___closed__13_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__13);
v___x_449_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__7, &lp_choreo_Choreo_Examples_goodAsks___closed__7_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__7);
v___x_450_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_450_, 0, v___x_449_);
lean_ctor_set(v___x_450_, 1, v___x_448_);
return v___x_450_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks___closed__15(void){
_start:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; 
v___x_451_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__14, &lp_choreo_Choreo_Examples_goodAsks___closed__14_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__14);
v___x_452_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__5, &lp_choreo_Choreo_Examples_goodAsks___closed__5_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__5);
v___x_453_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_453_, 0, v___x_452_);
lean_ctor_set(v___x_453_, 1, v___x_451_);
return v___x_453_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodAsks(void){
_start:
{
lean_object* v___x_454_; 
v___x_454_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__15, &lp_choreo_Choreo_Examples_goodAsks___closed__15_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__15);
return v___x_454_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threeCfg(void){
_start:
{
lean_object* v___x_455_; lean_object* v_dmin_456_; lean_object* v_vmax_457_; lean_object* v_stage_458_; lean_object* v_ticksPerBeat_459_; lean_object* v_bpmNum_460_; lean_object* v_bpmDen_461_; lean_object* v_total_462_; lean_object* v_seconds_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_455_ = lp_choreo_Choreo_Examples_cfg;
v_dmin_456_ = lean_ctor_get(v___x_455_, 1);
v_vmax_457_ = lean_ctor_get(v___x_455_, 2);
v_stage_458_ = lean_ctor_get(v___x_455_, 3);
v_ticksPerBeat_459_ = lean_ctor_get(v___x_455_, 4);
v_bpmNum_460_ = lean_ctor_get(v___x_455_, 5);
v_bpmDen_461_ = lean_ctor_get(v___x_455_, 6);
v_total_462_ = lean_ctor_get(v___x_455_, 7);
v_seconds_463_ = lean_ctor_get(v___x_455_, 8);
v___x_464_ = lean_unsigned_to_nat(3u);
lean_inc(v_seconds_463_);
lean_inc(v_total_462_);
lean_inc(v_bpmDen_461_);
lean_inc(v_bpmNum_460_);
lean_inc(v_ticksPerBeat_459_);
lean_inc_ref(v_stage_458_);
lean_inc(v_vmax_457_);
lean_inc(v_dmin_456_);
v___x_465_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_465_, 0, v___x_464_);
lean_ctor_set(v___x_465_, 1, v_dmin_456_);
lean_ctor_set(v___x_465_, 2, v_vmax_457_);
lean_ctor_set(v___x_465_, 3, v_stage_458_);
lean_ctor_set(v___x_465_, 4, v_ticksPerBeat_459_);
lean_ctor_set(v___x_465_, 5, v_bpmNum_460_);
lean_ctor_set(v___x_465_, 6, v_bpmDen_461_);
lean_ctor_set(v___x_465_, 7, v_total_462_);
lean_ctor_set(v___x_465_, 8, v_seconds_463_);
return v___x_465_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threePhase___closed__0(void){
_start:
{
lean_object* v___x_466_; lean_object* v___x_467_; lean_object* v___x_468_; 
v___x_466_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__5, &lp_choreo_Choreo_Examples_good___closed__5_once, _init_lp_choreo_Choreo_Examples_good___closed__5);
v___x_467_ = lean_obj_once(&lp_choreo_Choreo_Examples_headOn___closed__0, &lp_choreo_Choreo_Examples_headOn___closed__0_once, _init_lp_choreo_Choreo_Examples_headOn___closed__0);
v___x_468_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_468_, 0, v___x_467_);
lean_ctor_set(v___x_468_, 1, v___x_466_);
return v___x_468_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threePhase___closed__1(void){
_start:
{
lean_object* v___x_469_; lean_object* v___x_470_; lean_object* v___x_471_; 
v___x_469_ = lean_obj_once(&lp_choreo_Choreo_Examples_threePhase___closed__0, &lp_choreo_Choreo_Examples_threePhase___closed__0_once, _init_lp_choreo_Choreo_Examples_threePhase___closed__0);
v___x_470_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__3, &lp_choreo_Choreo_Examples_good___closed__3_once, _init_lp_choreo_Choreo_Examples_good___closed__3);
v___x_471_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_471_, 0, v___x_470_);
lean_ctor_set(v___x_471_, 1, v___x_469_);
return v___x_471_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threePhase___closed__2(void){
_start:
{
lean_object* v___x_472_; lean_object* v___x_473_; 
v___x_472_ = lean_obj_once(&lp_choreo_Choreo_Examples_threePhase___closed__1, &lp_choreo_Choreo_Examples_threePhase___closed__1_once, _init_lp_choreo_Choreo_Examples_threePhase___closed__1);
v___x_473_ = lp_choreo_Choreo_Examples_phaseOf(v___x_472_);
return v___x_473_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threePhase(void){
_start:
{
lean_object* v___x_474_; 
v___x_474_ = lean_obj_once(&lp_choreo_Choreo_Examples_threePhase___closed__2, &lp_choreo_Choreo_Examples_threePhase___closed__2_once, _init_lp_choreo_Choreo_Examples_threePhase___closed__2);
return v___x_474_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threeRoutine___closed__0(void){
_start:
{
lean_object* v___x_475_; lean_object* v___x_476_; lean_object* v___x_477_; 
v___x_475_ = lean_box(0);
v___x_476_ = lp_choreo_Choreo_Examples_threePhase;
v___x_477_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_477_, 0, v___x_476_);
lean_ctor_set(v___x_477_, 1, v___x_475_);
return v___x_477_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threeRoutine___closed__1(void){
_start:
{
lean_object* v___x_478_; lean_object* v___x_479_; lean_object* v___x_480_; 
v___x_478_ = lean_obj_once(&lp_choreo_Choreo_Examples_threeRoutine___closed__0, &lp_choreo_Choreo_Examples_threeRoutine___closed__0_once, _init_lp_choreo_Choreo_Examples_threeRoutine___closed__0);
v___x_479_ = lp_choreo_Choreo_Examples_threeCfg;
v___x_480_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_480_, 0, v___x_479_);
lean_ctor_set(v___x_480_, 1, v___x_478_);
return v___x_480_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_threeRoutine(void){
_start:
{
lean_object* v___x_481_; 
v___x_481_ = lean_obj_once(&lp_choreo_Choreo_Examples_threeRoutine___closed__1, &lp_choreo_Choreo_Examples_threeRoutine___closed__1_once, _init_lp_choreo_Choreo_Examples_threeRoutine___closed__1);
return v___x_481_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentPhase___closed__0(void){
_start:
{
lean_object* v___x_482_; lean_object* v___x_483_; lean_object* v___x_484_; lean_object* v___x_485_; 
v___x_482_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__0, &lp_choreo_Choreo_Examples_stage___closed__0_once, _init_lp_choreo_Choreo_Examples_stage___closed__0);
v___x_483_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_484_ = lean_obj_once(&lp_choreo_Choreo_Examples_stage___closed__2, &lp_choreo_Choreo_Examples_stage___closed__2_once, _init_lp_choreo_Choreo_Examples_stage___closed__2);
v___x_485_ = lp_choreo_Choreo_Examples_walk(v___x_484_, v___x_483_, v___x_484_, v___x_482_);
return v___x_485_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentPhase___closed__1(void){
_start:
{
lean_object* v___x_486_; lean_object* v___x_487_; lean_object* v___x_488_; 
v___x_486_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__5, &lp_choreo_Choreo_Examples_good___closed__5_once, _init_lp_choreo_Choreo_Examples_good___closed__5);
v___x_487_ = lean_obj_once(&lp_choreo_Choreo_Examples_bentPhase___closed__0, &lp_choreo_Choreo_Examples_bentPhase___closed__0_once, _init_lp_choreo_Choreo_Examples_bentPhase___closed__0);
v___x_488_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_488_, 0, v___x_487_);
lean_ctor_set(v___x_488_, 1, v___x_486_);
return v___x_488_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentPhase___closed__2(void){
_start:
{
lean_object* v___x_489_; lean_object* v___x_490_; lean_object* v___x_491_; 
v___x_489_ = lean_obj_once(&lp_choreo_Choreo_Examples_bentPhase___closed__1, &lp_choreo_Choreo_Examples_bentPhase___closed__1_once, _init_lp_choreo_Choreo_Examples_bentPhase___closed__1);
v___x_490_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__3, &lp_choreo_Choreo_Examples_good___closed__3_once, _init_lp_choreo_Choreo_Examples_good___closed__3);
v___x_491_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_491_, 0, v___x_490_);
lean_ctor_set(v___x_491_, 1, v___x_489_);
return v___x_491_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentPhase___closed__3(void){
_start:
{
lean_object* v___x_492_; lean_object* v___x_493_; 
v___x_492_ = lean_obj_once(&lp_choreo_Choreo_Examples_bentPhase___closed__2, &lp_choreo_Choreo_Examples_bentPhase___closed__2_once, _init_lp_choreo_Choreo_Examples_bentPhase___closed__2);
v___x_493_ = lp_choreo_Choreo_Examples_phaseOf(v___x_492_);
return v___x_493_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentPhase(void){
_start:
{
lean_object* v___x_494_; 
v___x_494_ = lean_obj_once(&lp_choreo_Choreo_Examples_bentPhase___closed__3, &lp_choreo_Choreo_Examples_bentPhase___closed__3_once, _init_lp_choreo_Choreo_Examples_bentPhase___closed__3);
return v___x_494_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentRoutine___closed__0(void){
_start:
{
lean_object* v___x_495_; lean_object* v___x_496_; lean_object* v___x_497_; 
v___x_495_ = lean_box(0);
v___x_496_ = lp_choreo_Choreo_Examples_bentPhase;
v___x_497_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_497_, 0, v___x_496_);
lean_ctor_set(v___x_497_, 1, v___x_495_);
return v___x_497_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentRoutine___closed__1(void){
_start:
{
lean_object* v___x_498_; lean_object* v___x_499_; lean_object* v___x_500_; 
v___x_498_ = lean_obj_once(&lp_choreo_Choreo_Examples_bentRoutine___closed__0, &lp_choreo_Choreo_Examples_bentRoutine___closed__0_once, _init_lp_choreo_Choreo_Examples_bentRoutine___closed__0);
v___x_499_ = lp_choreo_Choreo_Examples_threeCfg;
v___x_500_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_500_, 0, v___x_499_);
lean_ctor_set(v___x_500_, 1, v___x_498_);
return v___x_500_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_bentRoutine(void){
_start:
{
lean_object* v___x_501_; 
v___x_501_ = lean_obj_once(&lp_choreo_Choreo_Examples_bentRoutine___closed__1, &lp_choreo_Choreo_Examples_bentRoutine___closed__1_once, _init_lp_choreo_Choreo_Examples_bentRoutine___closed__1);
return v___x_501_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_wrongLength(void){
_start:
{
lean_object* v___x_502_; lean_object* v_n_503_; lean_object* v_dmin_504_; lean_object* v_vmax_505_; lean_object* v_stage_506_; lean_object* v_ticksPerBeat_507_; lean_object* v_bpmNum_508_; lean_object* v_bpmDen_509_; lean_object* v_total_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_502_ = lp_choreo_Choreo_Examples_cfg;
v_n_503_ = lean_ctor_get(v___x_502_, 0);
v_dmin_504_ = lean_ctor_get(v___x_502_, 1);
v_vmax_505_ = lean_ctor_get(v___x_502_, 2);
v_stage_506_ = lean_ctor_get(v___x_502_, 3);
v_ticksPerBeat_507_ = lean_ctor_get(v___x_502_, 4);
v_bpmNum_508_ = lean_ctor_get(v___x_502_, 5);
v_bpmDen_509_ = lean_ctor_get(v___x_502_, 6);
v_total_510_ = lean_ctor_get(v___x_502_, 7);
v___x_511_ = lean_unsigned_to_nat(9u);
lean_inc(v_total_510_);
lean_inc(v_bpmDen_509_);
lean_inc(v_bpmNum_508_);
lean_inc(v_ticksPerBeat_507_);
lean_inc_ref(v_stage_506_);
lean_inc(v_vmax_505_);
lean_inc(v_dmin_504_);
lean_inc(v_n_503_);
v___x_512_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_512_, 0, v_n_503_);
lean_ctor_set(v___x_512_, 1, v_dmin_504_);
lean_ctor_set(v___x_512_, 2, v_vmax_505_);
lean_ctor_set(v___x_512_, 3, v_stage_506_);
lean_ctor_set(v___x_512_, 4, v_ticksPerBeat_507_);
lean_ctor_set(v___x_512_, 5, v_bpmNum_508_);
lean_ctor_set(v___x_512_, 6, v_bpmDen_509_);
lean_ctor_set(v___x_512_, 7, v_total_510_);
lean_ctor_set(v___x_512_, 8, v___x_511_);
v___x_513_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodRoutine___closed__0, &lp_choreo_Choreo_Examples_goodRoutine___closed__0_once, _init_lp_choreo_Choreo_Examples_goodRoutine___closed__0);
v___x_514_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_514_, 0, v___x_512_);
lean_ctor_set(v___x_514_, 1, v___x_513_);
return v___x_514_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_collides___closed__0(void){
_start:
{
lean_object* v___x_515_; lean_object* v___x_516_; lean_object* v___x_517_; 
v___x_515_ = lean_box(0);
v___x_516_ = lp_choreo_Choreo_Examples_headOn;
v___x_517_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_517_, 0, v___x_516_);
lean_ctor_set(v___x_517_, 1, v___x_515_);
return v___x_517_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_collides___closed__1(void){
_start:
{
lean_object* v___x_518_; lean_object* v___x_519_; lean_object* v___x_520_; 
v___x_518_ = lean_obj_once(&lp_choreo_Choreo_Examples_collides___closed__0, &lp_choreo_Choreo_Examples_collides___closed__0_once, _init_lp_choreo_Choreo_Examples_collides___closed__0);
v___x_519_ = lp_choreo_Choreo_Examples_cfg;
v___x_520_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_520_, 0, v___x_519_);
lean_ctor_set(v___x_520_, 1, v___x_518_);
return v___x_520_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_collides(void){
_start:
{
lean_object* v___x_521_; 
v___x_521_ = lean_obj_once(&lp_choreo_Choreo_Examples_collides___closed__1, &lp_choreo_Choreo_Examples_collides___closed__1_once, _init_lp_choreo_Choreo_Examples_collides___closed__1);
return v___x_521_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_offBeat(void){
_start:
{
lean_object* v___x_522_; lean_object* v_n_523_; lean_object* v_dmin_524_; lean_object* v_vmax_525_; lean_object* v_stage_526_; lean_object* v_bpmNum_527_; lean_object* v_bpmDen_528_; lean_object* v_total_529_; lean_object* v_seconds_530_; lean_object* v___x_531_; lean_object* v___x_532_; lean_object* v___x_533_; lean_object* v___x_534_; 
v___x_522_ = lp_choreo_Choreo_Examples_cfg;
v_n_523_ = lean_ctor_get(v___x_522_, 0);
v_dmin_524_ = lean_ctor_get(v___x_522_, 1);
v_vmax_525_ = lean_ctor_get(v___x_522_, 2);
v_stage_526_ = lean_ctor_get(v___x_522_, 3);
v_bpmNum_527_ = lean_ctor_get(v___x_522_, 5);
v_bpmDen_528_ = lean_ctor_get(v___x_522_, 6);
v_total_529_ = lean_ctor_get(v___x_522_, 7);
v_seconds_530_ = lean_ctor_get(v___x_522_, 8);
v___x_531_ = lean_unsigned_to_nat(5u);
lean_inc(v_seconds_530_);
lean_inc(v_total_529_);
lean_inc(v_bpmDen_528_);
lean_inc(v_bpmNum_527_);
lean_inc_ref(v_stage_526_);
lean_inc(v_vmax_525_);
lean_inc(v_dmin_524_);
lean_inc(v_n_523_);
v___x_532_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_532_, 0, v_n_523_);
lean_ctor_set(v___x_532_, 1, v_dmin_524_);
lean_ctor_set(v___x_532_, 2, v_vmax_525_);
lean_ctor_set(v___x_532_, 3, v_stage_526_);
lean_ctor_set(v___x_532_, 4, v___x_531_);
lean_ctor_set(v___x_532_, 5, v_bpmNum_527_);
lean_ctor_set(v___x_532_, 6, v_bpmDen_528_);
lean_ctor_set(v___x_532_, 7, v_total_529_);
lean_ctor_set(v___x_532_, 8, v_seconds_530_);
v___x_533_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodRoutine___closed__0, &lp_choreo_Choreo_Examples_goodRoutine___closed__0_once, _init_lp_choreo_Choreo_Examples_goodRoutine___closed__0);
v___x_534_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_534_, 0, v___x_532_);
lean_ctor_set(v___x_534_, 1, v___x_533_);
return v___x_534_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__0(void){
_start:
{
lean_object* v___x_535_; lean_object* v___x_536_; lean_object* v___x_537_; lean_object* v___x_538_; 
v___x_535_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__1, &lp_choreo_Choreo_Examples_walk___closed__1_once, _init_lp_choreo_Choreo_Examples_walk___closed__1);
v___x_536_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_537_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__1, &lp_choreo_Choreo_Examples_good___closed__1_once, _init_lp_choreo_Choreo_Examples_good___closed__1);
v___x_538_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_538_, 0, v___x_537_);
lean_ctor_set(v___x_538_, 1, v___x_536_);
lean_ctor_set(v___x_538_, 2, v___x_535_);
return v___x_538_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__1(void){
_start:
{
lean_object* v___x_539_; lean_object* v___x_540_; lean_object* v___x_541_; 
v___x_539_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__1, &lp_choreo_Choreo_Examples_walk___closed__1_once, _init_lp_choreo_Choreo_Examples_walk___closed__1);
v___x_540_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_541_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_541_, 0, v___x_540_);
lean_ctor_set(v___x_541_, 1, v___x_540_);
lean_ctor_set(v___x_541_, 2, v___x_539_);
return v___x_541_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__2(void){
_start:
{
lean_object* v___x_542_; lean_object* v___x_543_; lean_object* v___x_544_; 
v___x_542_ = lean_box(0);
v___x_543_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__1, &lp_choreo_Choreo_Examples_goodMove___closed__1_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__1);
v___x_544_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_544_, 0, v___x_543_);
lean_ctor_set(v___x_544_, 1, v___x_542_);
return v___x_544_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__3(void){
_start:
{
lean_object* v___x_545_; lean_object* v___x_546_; lean_object* v___x_547_; 
v___x_545_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__2, &lp_choreo_Choreo_Examples_goodMove___closed__2_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__2);
v___x_546_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__0, &lp_choreo_Choreo_Examples_goodMove___closed__0_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__0);
v___x_547_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_547_, 0, v___x_546_);
lean_ctor_set(v___x_547_, 1, v___x_545_);
return v___x_547_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__4(void){
_start:
{
lean_object* v___x_548_; lean_object* v___x_549_; lean_object* v___x_550_; lean_object* v___x_551_; 
v___x_548_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__1, &lp_choreo_Choreo_Examples_walk___closed__1_once, _init_lp_choreo_Choreo_Examples_walk___closed__1);
v___x_549_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_550_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__1, &lp_choreo_Choreo_Examples_good___closed__1_once, _init_lp_choreo_Choreo_Examples_good___closed__1);
v___x_551_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_551_, 0, v___x_550_);
lean_ctor_set(v___x_551_, 1, v___x_549_);
lean_ctor_set(v___x_551_, 2, v___x_548_);
return v___x_551_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__5(void){
_start:
{
lean_object* v___x_552_; lean_object* v___x_553_; lean_object* v___x_554_; lean_object* v___x_555_; 
v___x_552_ = lean_obj_once(&lp_choreo_Choreo_Examples_walk___closed__1, &lp_choreo_Choreo_Examples_walk___closed__1_once, _init_lp_choreo_Choreo_Examples_walk___closed__1);
v___x_553_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_554_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_555_ = lean_alloc_ctor(0, 3, 0);
lean_ctor_set(v___x_555_, 0, v___x_554_);
lean_ctor_set(v___x_555_, 1, v___x_553_);
lean_ctor_set(v___x_555_, 2, v___x_552_);
return v___x_555_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__6(void){
_start:
{
lean_object* v___x_556_; lean_object* v___x_557_; lean_object* v___x_558_; 
v___x_556_ = lean_box(0);
v___x_557_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__5, &lp_choreo_Choreo_Examples_goodMove___closed__5_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__5);
v___x_558_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_558_, 0, v___x_557_);
lean_ctor_set(v___x_558_, 1, v___x_556_);
return v___x_558_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__7(void){
_start:
{
lean_object* v___x_559_; lean_object* v___x_560_; lean_object* v___x_561_; 
v___x_559_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__6, &lp_choreo_Choreo_Examples_goodMove___closed__6_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__6);
v___x_560_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__4, &lp_choreo_Choreo_Examples_goodMove___closed__4_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__4);
v___x_561_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_561_, 0, v___x_560_);
lean_ctor_set(v___x_561_, 1, v___x_559_);
return v___x_561_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove___closed__8(void){
_start:
{
lean_object* v___x_562_; lean_object* v___x_563_; lean_object* v___x_564_; lean_object* v___x_565_; 
v___x_562_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__7, &lp_choreo_Choreo_Examples_goodMove___closed__7_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__7);
v___x_563_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__3, &lp_choreo_Choreo_Examples_goodMove___closed__3_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__3);
v___x_564_ = lean_unsigned_to_nat(0u);
v___x_565_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_565_, 0, v___x_564_);
lean_ctor_set(v___x_565_, 1, v___x_564_);
lean_ctor_set(v___x_565_, 2, v___x_563_);
lean_ctor_set(v___x_565_, 3, v___x_562_);
return v___x_565_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_goodMove(void){
_start:
{
lean_object* v___x_566_; 
v___x_566_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodMove___closed__8, &lp_choreo_Choreo_Examples_goodMove___closed__8_once, _init_lp_choreo_Choreo_Examples_goodMove___closed__8);
return v___x_566_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_jump___closed__0(void){
_start:
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; 
v___x_567_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__2, &lp_choreo_Choreo_Examples_good___closed__2_once, _init_lp_choreo_Choreo_Examples_good___closed__2);
v___x_568_ = lean_obj_once(&lp_choreo_Choreo_Examples_good___closed__0, &lp_choreo_Choreo_Examples_good___closed__0_once, _init_lp_choreo_Choreo_Examples_good___closed__0);
v___x_569_ = lean_obj_once(&lp_choreo_Choreo_Examples_goodAsks___closed__2, &lp_choreo_Choreo_Examples_goodAsks___closed__2_once, _init_lp_choreo_Choreo_Examples_goodAsks___closed__2);
v___x_570_ = lp_choreo_Choreo_Examples_walk(v___x_569_, v___x_568_, v___x_569_, v___x_567_);
return v___x_570_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_jump___closed__1(void){
_start:
{
lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_571_ = lean_box(0);
v___x_572_ = lean_obj_once(&lp_choreo_Choreo_Examples_jump___closed__0, &lp_choreo_Choreo_Examples_jump___closed__0_once, _init_lp_choreo_Choreo_Examples_jump___closed__0);
v___x_573_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
lean_ctor_set(v___x_573_, 1, v___x_571_);
return v___x_573_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_jump___closed__2(void){
_start:
{
lean_object* v___x_574_; lean_object* v___x_575_; lean_object* v___x_576_; 
v___x_574_ = lean_obj_once(&lp_choreo_Choreo_Examples_jump___closed__1, &lp_choreo_Choreo_Examples_jump___closed__1_once, _init_lp_choreo_Choreo_Examples_jump___closed__1);
v___x_575_ = lean_obj_once(&lp_choreo_Choreo_Examples_headOn___closed__0, &lp_choreo_Choreo_Examples_headOn___closed__0_once, _init_lp_choreo_Choreo_Examples_headOn___closed__0);
v___x_576_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_576_, 0, v___x_575_);
lean_ctor_set(v___x_576_, 1, v___x_574_);
return v___x_576_;
}
}
static lean_object* _init_lp_choreo_Choreo_Examples_jump(void){
_start:
{
lean_object* v___x_577_; lean_object* v_n_578_; lean_object* v_dmin_579_; lean_object* v_vmax_580_; lean_object* v_stage_581_; lean_object* v_ticksPerBeat_582_; lean_object* v_bpmNum_583_; lean_object* v_bpmDen_584_; lean_object* v___x_585_; lean_object* v_bounds_586_; lean_object* v_certs_587_; lean_object* v___x_588_; lean_object* v___x_589_; lean_object* v___x_590_; lean_object* v___x_591_; lean_object* v___x_592_; lean_object* v___x_593_; lean_object* v___x_594_; lean_object* v___x_595_; lean_object* v___x_596_; lean_object* v___x_597_; lean_object* v___x_598_; 
v___x_577_ = lp_choreo_Choreo_Examples_cfg;
v_n_578_ = lean_ctor_get(v___x_577_, 0);
v_dmin_579_ = lean_ctor_get(v___x_577_, 1);
v_vmax_580_ = lean_ctor_get(v___x_577_, 2);
v_stage_581_ = lean_ctor_get(v___x_577_, 3);
v_ticksPerBeat_582_ = lean_ctor_get(v___x_577_, 4);
v_bpmNum_583_ = lean_ctor_get(v___x_577_, 5);
v_bpmDen_584_ = lean_ctor_get(v___x_577_, 6);
v___x_585_ = lp_choreo_Choreo_Examples_good;
v_bounds_586_ = lean_ctor_get(v___x_585_, 3);
v_certs_587_ = lean_ctor_get(v___x_585_, 4);
v___x_588_ = lean_box(0);
v___x_589_ = lean_box(0);
v___x_590_ = lean_unsigned_to_nat(128u);
v___x_591_ = lean_unsigned_to_nat(16u);
lean_inc(v_bpmDen_584_);
lean_inc(v_bpmNum_583_);
lean_inc(v_ticksPerBeat_582_);
lean_inc_ref(v_stage_581_);
lean_inc(v_vmax_580_);
lean_inc(v_dmin_579_);
lean_inc(v_n_578_);
v___x_592_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_592_, 0, v_n_578_);
lean_ctor_set(v___x_592_, 1, v_dmin_579_);
lean_ctor_set(v___x_592_, 2, v_vmax_580_);
lean_ctor_set(v___x_592_, 3, v_stage_581_);
lean_ctor_set(v___x_592_, 4, v_ticksPerBeat_582_);
lean_ctor_set(v___x_592_, 5, v_bpmNum_583_);
lean_ctor_set(v___x_592_, 6, v_bpmDen_584_);
lean_ctor_set(v___x_592_, 7, v___x_590_);
lean_ctor_set(v___x_592_, 8, v___x_591_);
v___x_593_ = lean_unsigned_to_nat(64u);
v___x_594_ = lean_obj_once(&lp_choreo_Choreo_Examples_jump___closed__2, &lp_choreo_Choreo_Examples_jump___closed__2_once, _init_lp_choreo_Choreo_Examples_jump___closed__2);
lean_inc(v_certs_587_);
lean_inc_ref(v_bounds_586_);
v___x_595_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_595_, 0, v___x_593_);
lean_ctor_set(v___x_595_, 1, v___x_590_);
lean_ctor_set(v___x_595_, 2, v___x_594_);
lean_ctor_set(v___x_595_, 3, v_bounds_586_);
lean_ctor_set(v___x_595_, 4, v_certs_587_);
lean_ctor_set(v___x_595_, 5, v___x_589_);
lean_ctor_set(v___x_595_, 6, v___x_589_);
lean_ctor_set(v___x_595_, 7, v___x_588_);
v___x_596_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_596_, 0, v___x_595_);
lean_ctor_set(v___x_596_, 1, v___x_589_);
v___x_597_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v___x_597_, 0, v___x_585_);
lean_ctor_set(v___x_597_, 1, v___x_596_);
v___x_598_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_598_, 0, v___x_592_);
lean_ctor_set(v___x_598_, 1, v___x_597_);
return v___x_598_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_QuickRefute(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Compose(uint8_t builtin);
lean_object* initialize_Lean(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Choreo_Examples(uint8_t builtin) {
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
res = initialize_choreo_Choreo_QuickRefute(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Compose(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Lean(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_Choreo_Examples_stage = _init_lp_choreo_Choreo_Examples_stage();
lean_mark_persistent(lp_choreo_Choreo_Examples_stage);
lp_choreo_Choreo_Examples_cfg = _init_lp_choreo_Choreo_Examples_cfg();
lean_mark_persistent(lp_choreo_Choreo_Examples_cfg);
lp_choreo_Choreo_Examples_good = _init_lp_choreo_Choreo_Examples_good();
lean_mark_persistent(lp_choreo_Choreo_Examples_good);
lp_choreo_Choreo_Examples_headOn = _init_lp_choreo_Choreo_Examples_headOn();
lean_mark_persistent(lp_choreo_Choreo_Examples_headOn);
lp_choreo_Choreo_Examples_runsOff = _init_lp_choreo_Choreo_Examples_runsOff();
lean_mark_persistent(lp_choreo_Choreo_Examples_runsOff);
lp_choreo_Choreo_Examples_sprint = _init_lp_choreo_Choreo_Examples_sprint();
lean_mark_persistent(lp_choreo_Choreo_Examples_sprint);
lp_choreo_Choreo_Examples_sprintPhase = _init_lp_choreo_Choreo_Examples_sprintPhase();
lean_mark_persistent(lp_choreo_Choreo_Examples_sprintPhase);
lp_choreo_Choreo_Examples_goodRoutine = _init_lp_choreo_Choreo_Examples_goodRoutine();
lean_mark_persistent(lp_choreo_Choreo_Examples_goodRoutine);
lp_choreo_Choreo_Examples_goodAsks = _init_lp_choreo_Choreo_Examples_goodAsks();
lean_mark_persistent(lp_choreo_Choreo_Examples_goodAsks);
lp_choreo_Choreo_Examples_threeCfg = _init_lp_choreo_Choreo_Examples_threeCfg();
lean_mark_persistent(lp_choreo_Choreo_Examples_threeCfg);
lp_choreo_Choreo_Examples_threePhase = _init_lp_choreo_Choreo_Examples_threePhase();
lean_mark_persistent(lp_choreo_Choreo_Examples_threePhase);
lp_choreo_Choreo_Examples_threeRoutine = _init_lp_choreo_Choreo_Examples_threeRoutine();
lean_mark_persistent(lp_choreo_Choreo_Examples_threeRoutine);
lp_choreo_Choreo_Examples_bentPhase = _init_lp_choreo_Choreo_Examples_bentPhase();
lean_mark_persistent(lp_choreo_Choreo_Examples_bentPhase);
lp_choreo_Choreo_Examples_bentRoutine = _init_lp_choreo_Choreo_Examples_bentRoutine();
lean_mark_persistent(lp_choreo_Choreo_Examples_bentRoutine);
lp_choreo_Choreo_Examples_wrongLength = _init_lp_choreo_Choreo_Examples_wrongLength();
lean_mark_persistent(lp_choreo_Choreo_Examples_wrongLength);
lp_choreo_Choreo_Examples_collides = _init_lp_choreo_Choreo_Examples_collides();
lean_mark_persistent(lp_choreo_Choreo_Examples_collides);
lp_choreo_Choreo_Examples_offBeat = _init_lp_choreo_Choreo_Examples_offBeat();
lean_mark_persistent(lp_choreo_Choreo_Examples_offBeat);
lp_choreo_Choreo_Examples_goodMove = _init_lp_choreo_Choreo_Examples_goodMove();
lean_mark_persistent(lp_choreo_Choreo_Examples_goodMove);
lp_choreo_Choreo_Examples_jump = _init_lp_choreo_Choreo_Examples_jump();
lean_mark_persistent(lp_choreo_Choreo_Examples_jump);
return lean_io_result_mk_ok(lean_box(0));
}
#ifdef __cplusplus
}
#endif
