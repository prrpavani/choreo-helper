// Lean compiler output
// Module: Main
// Imports: public import Init public meta import Init public import Choreo.Emit public import Choreo.Scene public import Choreo.Stress
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
lean_object* lean_array_to_list(lean_object*);
lean_object* lean_mk_empty_array_with_capacity(lean_object*);
lean_object* lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(lean_object*, lean_object*);
uint8_t lean_usize_dec_lt(size_t, size_t);
lean_object* lean_array_uget_borrowed(lean_object*, size_t);
lean_object* l_Lean_Json_getNat_x3f(lean_object*);
lean_object* lean_array_uset(lean_object*, size_t, lean_object*);
size_t lean_usize_add(size_t, size_t);
lean_object* l_Lean_Json_getObjValD(lean_object*, lean_object*);
size_t lean_array_size(lean_object*);
lean_object* l_Lean_Json_getStr_x3f(lean_object*);
lean_object* l_Lean_Json_pretty(lean_object*, lean_object*);
lean_object* lean_string_append(lean_object*, lean_object*);
lean_object* l_Nat_reprFast(lean_object*);
lean_object* lp_choreo_Choreo_stressSource(lean_object*, lean_object*);
lean_object* l_IO_FS_writeFile(lean_object*, lean_object*);
lean_object* lean_array_get_size(lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* lean_array_push(lean_object*, lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget_borrowed(lean_object*, lean_object*);
lean_object* lean_string_utf8_byte_size(lean_object*);
uint8_t lean_nat_dec_eq(lean_object*, lean_object*);
lean_object* l_Lean_Json_getInt_x3f(lean_object*);
lean_object* l_Int_toNat(lean_object*);
lean_object* l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(lean_object*);
uint8_t lean_string_dec_eq(lean_object*, lean_object*);
lean_object* l_IO_FS_readFile(lean_object*);
lean_object* l_Lean_Json_parse(lean_object*);
lean_object* l_IO_ofExcept___at___00Lean_IO_FS_Stream_readJson_spec__0___redArg(lean_object*);
lean_object* lp_choreo_Choreo_parsePlan(lean_object*);
lean_object* lp_choreo_Choreo_buildPlan(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_demoData(lean_object*);
lean_object* lp_choreo_Choreo_demoProofs(lean_object*);
lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(lean_object*, lean_object*);
uint8_t lp_choreo_Choreo_Ask_isMovement(lean_object*);
lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(lean_object*, lean_object*);
lean_object* lean_nat_to_int(lean_object*);
lean_object* l_Lean_Json_getObjVal_x3f(lean_object*, lean_object*);
uint8_t l_List_isEmpty___redArg(lean_object*);
lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_detectRules(lean_object*);
lean_object* lp_choreo_Choreo_parseScene(lean_object*);
lean_object* lp_choreo_Choreo_buildScene(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_stepsForGenre(lean_object*);
lean_object* lean_array_mk(lean_object*);
lean_object* lp_choreo_Choreo_mutationsOf(lean_object*);
lean_object* l_List_zipIdxTR___redArg(lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_stressJson(lean_object*);
lean_object* l_Lean_Json_compress(lean_object*);
lean_object* lean_string_push(lean_object*, uint32_t);
lean_object* lean_get_stdout();
lean_object* lp_choreo_Choreo_readProgram(lean_object*);
lean_object* lp_choreo_Choreo_proofSource(lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_report(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* lp_choreo_Choreo_buildProgram___redArg(lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* l_List_head_x3f___redArg(lean_object*);
static const lean_string_object lp_choreo_dancerNames___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Ana"};
static const lean_object* lp_choreo_dancerNames___closed__0 = (const lean_object*)&lp_choreo_dancerNames___closed__0_value;
static const lean_string_object lp_choreo_dancerNames___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Ben"};
static const lean_object* lp_choreo_dancerNames___closed__1 = (const lean_object*)&lp_choreo_dancerNames___closed__1_value;
static const lean_string_object lp_choreo_dancerNames___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Cleo"};
static const lean_object* lp_choreo_dancerNames___closed__2 = (const lean_object*)&lp_choreo_dancerNames___closed__2_value;
static const lean_string_object lp_choreo_dancerNames___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Dev"};
static const lean_object* lp_choreo_dancerNames___closed__3 = (const lean_object*)&lp_choreo_dancerNames___closed__3_value;
static const lean_string_object lp_choreo_dancerNames___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Esi"};
static const lean_object* lp_choreo_dancerNames___closed__4 = (const lean_object*)&lp_choreo_dancerNames___closed__4_value;
static const lean_string_object lp_choreo_dancerNames___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Finn"};
static const lean_object* lp_choreo_dancerNames___closed__5 = (const lean_object*)&lp_choreo_dancerNames___closed__5_value;
static const lean_string_object lp_choreo_dancerNames___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Gia"};
static const lean_object* lp_choreo_dancerNames___closed__6 = (const lean_object*)&lp_choreo_dancerNames___closed__6_value;
static const lean_string_object lp_choreo_dancerNames___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Hugo"};
static const lean_object* lp_choreo_dancerNames___closed__7 = (const lean_object*)&lp_choreo_dancerNames___closed__7_value;
static const lean_string_object lp_choreo_dancerNames___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Ines"};
static const lean_object* lp_choreo_dancerNames___closed__8 = (const lean_object*)&lp_choreo_dancerNames___closed__8_value;
static const lean_string_object lp_choreo_dancerNames___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Jae"};
static const lean_object* lp_choreo_dancerNames___closed__9 = (const lean_object*)&lp_choreo_dancerNames___closed__9_value;
static const lean_string_object lp_choreo_dancerNames___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Kai"};
static const lean_object* lp_choreo_dancerNames___closed__10 = (const lean_object*)&lp_choreo_dancerNames___closed__10_value;
static const lean_string_object lp_choreo_dancerNames___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Lena"};
static const lean_object* lp_choreo_dancerNames___closed__11 = (const lean_object*)&lp_choreo_dancerNames___closed__11_value;
static const lean_string_object lp_choreo_dancerNames___closed__12_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Milo"};
static const lean_object* lp_choreo_dancerNames___closed__12 = (const lean_object*)&lp_choreo_dancerNames___closed__12_value;
static const lean_string_object lp_choreo_dancerNames___closed__13_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Noor"};
static const lean_object* lp_choreo_dancerNames___closed__13 = (const lean_object*)&lp_choreo_dancerNames___closed__13_value;
static const lean_string_object lp_choreo_dancerNames___closed__14_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "Omar"};
static const lean_object* lp_choreo_dancerNames___closed__14 = (const lean_object*)&lp_choreo_dancerNames___closed__14_value;
static const lean_string_object lp_choreo_dancerNames___closed__15_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "Pia"};
static const lean_object* lp_choreo_dancerNames___closed__15 = (const lean_object*)&lp_choreo_dancerNames___closed__15_value;
static const lean_array_object lp_choreo_dancerNames___closed__16_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*16, .m_other = 0, .m_tag = 246}, .m_size = 16, .m_capacity = 16, .m_data = {((lean_object*)&lp_choreo_dancerNames___closed__0_value),((lean_object*)&lp_choreo_dancerNames___closed__1_value),((lean_object*)&lp_choreo_dancerNames___closed__2_value),((lean_object*)&lp_choreo_dancerNames___closed__3_value),((lean_object*)&lp_choreo_dancerNames___closed__4_value),((lean_object*)&lp_choreo_dancerNames___closed__5_value),((lean_object*)&lp_choreo_dancerNames___closed__6_value),((lean_object*)&lp_choreo_dancerNames___closed__7_value),((lean_object*)&lp_choreo_dancerNames___closed__8_value),((lean_object*)&lp_choreo_dancerNames___closed__9_value),((lean_object*)&lp_choreo_dancerNames___closed__10_value),((lean_object*)&lp_choreo_dancerNames___closed__11_value),((lean_object*)&lp_choreo_dancerNames___closed__12_value),((lean_object*)&lp_choreo_dancerNames___closed__13_value),((lean_object*)&lp_choreo_dancerNames___closed__14_value),((lean_object*)&lp_choreo_dancerNames___closed__15_value)}};
static const lean_object* lp_choreo_dancerNames___closed__16 = (const lean_object*)&lp_choreo_dancerNames___closed__16_value;
LEAN_EXPORT const lean_object* lp_choreo_dancerNames = (const lean_object*)&lp_choreo_dancerNames___closed__16_value;
static lean_once_cell_t lp_choreo_Main_nameOf___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_Main_nameOf___closed__0;
static const lean_string_object lp_choreo_Main_nameOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "Dancer "};
static const lean_object* lp_choreo_Main_nameOf___closed__1 = (const lean_object*)&lp_choreo_Main_nameOf___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Main_nameOf(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Main_nameOf___boxed(lean_object*);
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "move"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__0 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__0_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "dancer"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__1 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__1_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "x"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__2 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__2_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "y"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__3 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__3_value;
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_readOverrides___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "overrides"};
static const lean_object* lp_choreo_readOverrides___closed__0 = (const lean_object*)&lp_choreo_readOverrides___closed__0_value;
static const lean_array_object lp_choreo_readOverrides___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_readOverrides___closed__1 = (const lean_object*)&lp_choreo_readOverrides___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_readOverrides(lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2_spec__9(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2_spec__9___boxed(lean_object*, lean_object*, lean_object*);
static const lean_string_object lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 27, .m_capacity = 27, .m_length = 26, .m_data = "expected JSON array, got '"};
static const lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0 = (const lean_object*)&lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0_value;
static const lean_string_object lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "'"};
static const lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1 = (const lean_object*)&lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__1(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_readScene___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_readScene___lam__0___boxed(lean_object*, lean_object*);
static const lean_array_object lp_choreo_List_mapTR_loop___at___00readScene_spec__3___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_List_mapTR_loop___at___00readScene_spec__3___closed__0 = (const lean_object*)&lp_choreo_List_mapTR_loop___at___00readScene_spec__3___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00readScene_spec__3(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__4(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13_spec__19(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13_spec__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5_spec__12(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5_spec__12___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__2(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__2___boxed(lean_object*, lean_object*);
static lean_once_cell_t lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0_once = LEAN_ONCE_CELL_INITIALIZER;
static lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0;
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "name"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__0 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__0_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "kind"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__1 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__1_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "frame"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__2 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__2_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dx"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__3 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__3_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 3, .m_capacity = 3, .m_length = 2, .m_data = "dy"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__4 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__4_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "mirror"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__5 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__5_value;
static const lean_array_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__6 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__6_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "members"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__7 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__7_value;
static const lean_string_object lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "pairs"};
static const lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__8 = (const lean_object*)&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__8_value;
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17_spec__19(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17_spec__19___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15(lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__16(size_t, size_t, lean_object*);
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__16___boxed(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__5(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__5___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_readScene___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "scene"};
static const lean_object* lp_choreo_readScene___closed__0 = (const lean_object*)&lp_choreo_readScene___closed__0_value;
static const lean_string_object lp_choreo_readScene___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "frames"};
static const lean_object* lp_choreo_readScene___closed__1 = (const lean_object*)&lp_choreo_readScene___closed__1_value;
static const lean_string_object lp_choreo_readScene___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "genre"};
static const lean_object* lp_choreo_readScene___closed__2 = (const lean_object*)&lp_choreo_readScene___closed__2_value;
static const lean_string_object lp_choreo_readScene___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 1, .m_capacity = 1, .m_length = 0, .m_data = ""};
static const lean_object* lp_choreo_readScene___closed__3 = (const lean_object*)&lp_choreo_readScene___closed__3_value;
static const lean_array_object lp_choreo_readScene___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_readScene___closed__4 = (const lean_object*)&lp_choreo_readScene___closed__4_value;
static const lean_string_object lp_choreo_readScene___closed__5_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "holds"};
static const lean_object* lp_choreo_readScene___closed__5 = (const lean_object*)&lp_choreo_readScene___closed__5_value;
static const lean_string_object lp_choreo_readScene___closed__6_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "moves"};
static const lean_object* lp_choreo_readScene___closed__6 = (const lean_object*)&lp_choreo_readScene___closed__6_value;
static const lean_string_object lp_choreo_readScene___closed__7_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "seconds"};
static const lean_object* lp_choreo_readScene___closed__7 = (const lean_object*)&lp_choreo_readScene___closed__7_value;
static const lean_string_object lp_choreo_readScene___closed__8_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "bends"};
static const lean_object* lp_choreo_readScene___closed__8 = (const lean_object*)&lp_choreo_readScene___closed__8_value;
static const lean_string_object lp_choreo_readScene___closed__9_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "ways"};
static const lean_object* lp_choreo_readScene___closed__9 = (const lean_object*)&lp_choreo_readScene___closed__9_value;
static const lean_string_object lp_choreo_readScene___closed__10_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "rules"};
static const lean_object* lp_choreo_readScene___closed__10 = (const lean_object*)&lp_choreo_readScene___closed__10_value;
static const lean_array_object lp_choreo_readScene___closed__11_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_array_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 246}, .m_size = 0, .m_capacity = 0, .m_data = {}};
static const lean_object* lp_choreo_readScene___closed__11 = (const lean_object*)&lp_choreo_readScene___closed__11_value;
LEAN_EXPORT lean_object* lp_choreo_readScene(lean_object*);
static const lean_string_object lp_choreo_namesOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "names"};
static const lean_object* lp_choreo_namesOf___closed__0 = (const lean_object*)&lp_choreo_namesOf___closed__0_value;
LEAN_EXPORT lean_object* lp_choreo_namesOf(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_namesOf___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_builtOf___lam__0(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_builtOf___lam__0___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00builtOf_spec__0(lean_object*, lean_object*);
static const lean_string_object lp_choreo_builtOf___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = "drift"};
static const lean_object* lp_choreo_builtOf___closed__0 = (const lean_object*)&lp_choreo_builtOf___closed__0_value;
static const lean_string_object lp_choreo_builtOf___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "gap"};
static const lean_object* lp_choreo_builtOf___closed__1 = (const lean_object*)&lp_choreo_builtOf___closed__1_value;
static const lean_string_object lp_choreo_builtOf___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 4, .m_capacity = 4, .m_length = 3, .m_data = "bpm"};
static const lean_object* lp_choreo_builtOf___closed__2 = (const lean_object*)&lp_choreo_builtOf___closed__2_value;
static const lean_string_object lp_choreo_builtOf___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 10, .m_capacity = 10, .m_length = 9, .m_data = "Your song"};
static const lean_object* lp_choreo_builtOf___closed__3 = (const lean_object*)&lp_choreo_builtOf___closed__3_value;
static const lean_string_object lp_choreo_builtOf___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "prompt"};
static const lean_object* lp_choreo_builtOf___closed__4 = (const lean_object*)&lp_choreo_builtOf___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_builtOf(lean_object*);
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 2, .m_capacity = 2, .m_length = 1, .m_data = "_"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0_value;
static const lean_string_object lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 6, .m_capacity = 6, .m_length = 5, .m_data = ".lean"};
static const lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__1 = (const lean_object*)&lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__1_value;
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg(lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___boxed(lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_IO_print___at___00IO_println___at___00main_spec__1_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_IO_print___at___00IO_println___at___00main_spec__1_spec__1___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_IO_println___at___00main_spec__1(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_IO_println___at___00main_spec__1___boxed(lean_object*, lean_object*);
static const lean_string_object lp_choreo_main___closed__0_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 50, .m_capacity = 50, .m_length = 49, .m_data = "usage: choreo compose <request.json> <proof.lean>"};
static const lean_object* lp_choreo_main___closed__0 = (const lean_object*)&lp_choreo_main___closed__0_value;
static const lean_string_object lp_choreo_main___closed__1_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 8, .m_capacity = 8, .m_length = 7, .m_data = "compose"};
static const lean_object* lp_choreo_main___closed__1 = (const lean_object*)&lp_choreo_main___closed__1_value;
static const lean_string_object lp_choreo_main___closed__2_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 7, .m_capacity = 7, .m_length = 6, .m_data = "stress"};
static const lean_object* lp_choreo_main___closed__2 = (const lean_object*)&lp_choreo_main___closed__2_value;
static const lean_string_object lp_choreo_main___closed__3_value = {.m_header = {.m_rc = 0, .m_cs_sz = 0, .m_other = 0, .m_tag = 249}, .m_size = 5, .m_capacity = 5, .m_length = 4, .m_data = "demo"};
static const lean_object* lp_choreo_main___closed__3 = (const lean_object*)&lp_choreo_main___closed__3_value;
static const lean_closure_object lp_choreo_main___closed__4_value = {.m_header = {.m_rc = 0, .m_cs_sz = sizeof(lean_closure_object) + sizeof(void*)*0, .m_other = 0, .m_tag = 245}, .m_fun = (void*)lp_choreo_Main_nameOf___boxed, .m_arity = 1, .m_num_fixed = 0, .m_objs = {} };
static const lean_object* lp_choreo_main___closed__4 = (const lean_object*)&lp_choreo_main___closed__4_value;
LEAN_EXPORT lean_object* lp_choreo_main___boxed__const__1;
LEAN_EXPORT lean_object* lp_choreo_main___boxed__const__2;
LEAN_EXPORT lean_object* _lean_main(lean_object*);
LEAN_EXPORT lean_object* lp_choreo_main___boxed(lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___boxed(lean_object*, lean_object*, lean_object*, lean_object*, lean_object*, lean_object*);
static lean_object* _init_lp_choreo_Main_nameOf___closed__0(void){
_start:
{
lean_object* v___x_52_; lean_object* v___x_53_; 
v___x_52_ = ((lean_object*)(lp_choreo_dancerNames));
v___x_53_ = lean_array_get_size(v___x_52_);
return v___x_53_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Main_nameOf(lean_object* v_i_55_){
_start:
{
lean_object* v___x_56_; lean_object* v___x_57_; uint8_t v___x_58_; 
v___x_56_ = ((lean_object*)(lp_choreo_dancerNames));
v___x_57_ = lean_obj_once(&lp_choreo_Main_nameOf___closed__0, &lp_choreo_Main_nameOf___closed__0_once, _init_lp_choreo_Main_nameOf___closed__0);
v___x_58_ = lean_nat_dec_lt(v_i_55_, v___x_57_);
if (v___x_58_ == 0)
{
lean_object* v___x_59_; lean_object* v___x_60_; lean_object* v___x_61_; lean_object* v___x_62_; lean_object* v___x_63_; 
v___x_59_ = ((lean_object*)(lp_choreo_Main_nameOf___closed__1));
v___x_60_ = lean_unsigned_to_nat(1u);
v___x_61_ = lean_nat_add(v_i_55_, v___x_60_);
v___x_62_ = l_Nat_reprFast(v___x_61_);
v___x_63_ = lean_string_append(v___x_59_, v___x_62_);
lean_dec_ref(v___x_62_);
return v___x_63_;
}
else
{
lean_object* v___x_64_; 
v___x_64_ = lean_array_fget_borrowed(v___x_56_, v_i_55_);
lean_inc(v___x_64_);
return v___x_64_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Main_nameOf___boxed(lean_object* v_i_65_){
_start:
{
lean_object* v_res_66_; 
v_res_66_ = lp_choreo_Main_nameOf(v_i_65_);
lean_dec(v_i_65_);
return v_res_66_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0(lean_object* v_a_71_, lean_object* v_a_72_){
_start:
{
if (lean_obj_tag(v_a_71_) == 0)
{
lean_object* v___x_73_; 
v___x_73_ = lean_array_to_list(v_a_72_);
return v___x_73_;
}
else
{
lean_object* v_head_74_; lean_object* v_tail_75_; lean_object* v___x_76_; lean_object* v___x_77_; 
v_head_74_ = lean_ctor_get(v_a_71_, 0);
lean_inc_n(v_head_74_, 2);
v_tail_75_ = lean_ctor_get(v_a_71_, 1);
lean_inc(v_tail_75_);
lean_dec_ref_known(v_a_71_, 2);
v___x_76_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__0));
v___x_77_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_head_74_, v___x_76_);
if (lean_obj_tag(v___x_77_) == 1)
{
lean_object* v_a_78_; lean_object* v___x_79_; lean_object* v___x_80_; 
v_a_78_ = lean_ctor_get(v___x_77_, 0);
lean_inc(v_a_78_);
lean_dec_ref_known(v___x_77_, 1);
v___x_79_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__1));
lean_inc(v_head_74_);
v___x_80_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_head_74_, v___x_79_);
if (lean_obj_tag(v___x_80_) == 1)
{
lean_object* v_a_81_; lean_object* v___x_82_; lean_object* v___x_83_; 
v_a_81_ = lean_ctor_get(v___x_80_, 0);
lean_inc(v_a_81_);
lean_dec_ref_known(v___x_80_, 1);
v___x_82_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__2));
lean_inc(v_head_74_);
v___x_83_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_head_74_, v___x_82_);
if (lean_obj_tag(v___x_83_) == 1)
{
lean_object* v_a_84_; lean_object* v___x_85_; lean_object* v___x_86_; 
v_a_84_ = lean_ctor_get(v___x_83_, 0);
lean_inc(v_a_84_);
lean_dec_ref_known(v___x_83_, 1);
v___x_85_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0___closed__3));
v___x_86_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_head_74_, v___x_85_);
if (lean_obj_tag(v___x_86_) == 1)
{
lean_object* v_a_87_; lean_object* v___x_88_; lean_object* v___x_89_; 
v_a_87_ = lean_ctor_get(v___x_86_, 0);
lean_inc(v_a_87_);
lean_dec_ref_known(v___x_86_, 1);
v___x_88_ = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(v___x_88_, 0, v_a_78_);
lean_ctor_set(v___x_88_, 1, v_a_81_);
lean_ctor_set(v___x_88_, 2, v_a_84_);
lean_ctor_set(v___x_88_, 3, v_a_87_);
v___x_89_ = lean_array_push(v_a_72_, v___x_88_);
v_a_71_ = v_tail_75_;
v_a_72_ = v___x_89_;
goto _start;
}
else
{
lean_dec_ref(v___x_86_);
lean_dec(v_a_84_);
lean_dec(v_a_81_);
lean_dec(v_a_78_);
v_a_71_ = v_tail_75_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_83_);
lean_dec(v_a_81_);
lean_dec(v_a_78_);
lean_dec(v_head_74_);
v_a_71_ = v_tail_75_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_80_);
lean_dec(v_a_78_);
lean_dec(v_head_74_);
v_a_71_ = v_tail_75_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_77_);
lean_dec(v_head_74_);
v_a_71_ = v_tail_75_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_readOverrides(lean_object* v_j_98_){
_start:
{
lean_object* v___x_99_; lean_object* v___x_100_; 
v___x_99_ = ((lean_object*)(lp_choreo_readOverrides___closed__0));
v___x_100_ = l_Lean_Json_getObjVal_x3f(v_j_98_, v___x_99_);
if (lean_obj_tag(v___x_100_) == 1)
{
lean_object* v_a_101_; 
v_a_101_ = lean_ctor_get(v___x_100_, 0);
lean_inc(v_a_101_);
lean_dec_ref_known(v___x_100_, 1);
if (lean_obj_tag(v_a_101_) == 4)
{
lean_object* v_elems_102_; lean_object* v___x_103_; lean_object* v___x_104_; lean_object* v___x_105_; 
v_elems_102_ = lean_ctor_get(v_a_101_, 0);
lean_inc_ref(v_elems_102_);
lean_dec_ref_known(v_a_101_, 1);
v___x_103_ = lean_array_to_list(v_elems_102_);
v___x_104_ = ((lean_object*)(lp_choreo_readOverrides___closed__1));
v___x_105_ = lp_choreo_List_filterMapTR_go___at___00readOverrides_spec__0(v___x_103_, v___x_104_);
return v___x_105_;
}
else
{
lean_object* v___x_106_; 
lean_dec(v_a_101_);
v___x_106_ = lean_box(0);
return v___x_106_;
}
}
else
{
lean_object* v___x_107_; 
lean_dec_ref(v___x_100_);
v___x_107_ = lean_box(0);
return v___x_107_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2_spec__9(size_t v_sz_108_, size_t v_i_109_, lean_object* v_bs_110_){
_start:
{
uint8_t v___x_111_; 
v___x_111_ = lean_usize_dec_lt(v_i_109_, v_sz_108_);
if (v___x_111_ == 0)
{
lean_object* v___x_112_; 
v___x_112_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_112_, 0, v_bs_110_);
return v___x_112_;
}
else
{
lean_object* v_v_113_; lean_object* v___x_114_; 
v_v_113_ = lean_array_uget_borrowed(v_bs_110_, v_i_109_);
lean_inc(v_v_113_);
v___x_114_ = l_Lean_Json_getNat_x3f(v_v_113_);
if (lean_obj_tag(v___x_114_) == 0)
{
lean_object* v_a_115_; lean_object* v___x_117_; uint8_t v_isShared_118_; uint8_t v_isSharedCheck_122_; 
lean_dec_ref(v_bs_110_);
v_a_115_ = lean_ctor_get(v___x_114_, 0);
v_isSharedCheck_122_ = !lean_is_exclusive(v___x_114_);
if (v_isSharedCheck_122_ == 0)
{
v___x_117_ = v___x_114_;
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
else
{
lean_inc(v_a_115_);
lean_dec(v___x_114_);
v___x_117_ = lean_box(0);
v_isShared_118_ = v_isSharedCheck_122_;
goto v_resetjp_116_;
}
v_resetjp_116_:
{
lean_object* v___x_120_; 
if (v_isShared_118_ == 0)
{
v___x_120_ = v___x_117_;
goto v_reusejp_119_;
}
else
{
lean_object* v_reuseFailAlloc_121_; 
v_reuseFailAlloc_121_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_121_, 0, v_a_115_);
v___x_120_ = v_reuseFailAlloc_121_;
goto v_reusejp_119_;
}
v_reusejp_119_:
{
return v___x_120_;
}
}
}
else
{
lean_object* v_a_123_; lean_object* v___x_124_; lean_object* v_bs_x27_125_; size_t v___x_126_; size_t v___x_127_; lean_object* v___x_128_; 
v_a_123_ = lean_ctor_get(v___x_114_, 0);
lean_inc(v_a_123_);
lean_dec_ref_known(v___x_114_, 1);
v___x_124_ = lean_unsigned_to_nat(0u);
v_bs_x27_125_ = lean_array_uset(v_bs_110_, v_i_109_, v___x_124_);
v___x_126_ = ((size_t)1ULL);
v___x_127_ = lean_usize_add(v_i_109_, v___x_126_);
v___x_128_ = lean_array_uset(v_bs_x27_125_, v_i_109_, v_a_123_);
v_i_109_ = v___x_127_;
v_bs_110_ = v___x_128_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2_spec__9___boxed(lean_object* v_sz_130_, lean_object* v_i_131_, lean_object* v_bs_132_){
_start:
{
size_t v_sz_boxed_133_; size_t v_i_boxed_134_; lean_object* v_res_135_; 
v_sz_boxed_133_ = lean_unbox_usize(v_sz_130_);
lean_dec(v_sz_130_);
v_i_boxed_134_ = lean_unbox_usize(v_i_131_);
lean_dec(v_i_131_);
v_res_135_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2_spec__9(v_sz_boxed_133_, v_i_boxed_134_, v_bs_132_);
return v_res_135_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2(lean_object* v_x_138_){
_start:
{
if (lean_obj_tag(v_x_138_) == 4)
{
lean_object* v_elems_139_; size_t v_sz_140_; size_t v___x_141_; lean_object* v___x_142_; 
v_elems_139_ = lean_ctor_get(v_x_138_, 0);
lean_inc_ref(v_elems_139_);
lean_dec_ref_known(v_x_138_, 1);
v_sz_140_ = lean_array_size(v_elems_139_);
v___x_141_ = ((size_t)0ULL);
v___x_142_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2_spec__9(v_sz_140_, v___x_141_, v_elems_139_);
return v___x_142_;
}
else
{
lean_object* v___x_143_; lean_object* v___x_144_; lean_object* v___x_145_; lean_object* v___x_146_; lean_object* v___x_147_; lean_object* v___x_148_; lean_object* v___x_149_; 
v___x_143_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0));
v___x_144_ = lean_unsigned_to_nat(80u);
v___x_145_ = l_Lean_Json_pretty(v_x_138_, v___x_144_);
v___x_146_ = lean_string_append(v___x_143_, v___x_145_);
lean_dec_ref(v___x_145_);
v___x_147_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1));
v___x_148_ = lean_string_append(v___x_146_, v___x_147_);
v___x_149_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_149_, 0, v___x_148_);
return v___x_149_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1(lean_object* v_j_150_){
_start:
{
lean_object* v___x_151_; 
v___x_151_ = lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2(v_j_150_);
if (lean_obj_tag(v___x_151_) == 0)
{
lean_object* v_a_152_; lean_object* v___x_154_; uint8_t v_isShared_155_; uint8_t v_isSharedCheck_159_; 
v_a_152_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_159_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_159_ == 0)
{
v___x_154_ = v___x_151_;
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
else
{
lean_inc(v_a_152_);
lean_dec(v___x_151_);
v___x_154_ = lean_box(0);
v_isShared_155_ = v_isSharedCheck_159_;
goto v_resetjp_153_;
}
v_resetjp_153_:
{
lean_object* v___x_157_; 
if (v_isShared_155_ == 0)
{
v___x_157_ = v___x_154_;
goto v_reusejp_156_;
}
else
{
lean_object* v_reuseFailAlloc_158_; 
v_reuseFailAlloc_158_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_158_, 0, v_a_152_);
v___x_157_ = v_reuseFailAlloc_158_;
goto v_reusejp_156_;
}
v_reusejp_156_:
{
return v___x_157_;
}
}
}
else
{
lean_object* v_a_160_; lean_object* v___x_162_; uint8_t v_isShared_163_; uint8_t v_isSharedCheck_168_; 
v_a_160_ = lean_ctor_get(v___x_151_, 0);
v_isSharedCheck_168_ = !lean_is_exclusive(v___x_151_);
if (v_isSharedCheck_168_ == 0)
{
v___x_162_ = v___x_151_;
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
else
{
lean_inc(v_a_160_);
lean_dec(v___x_151_);
v___x_162_ = lean_box(0);
v_isShared_163_ = v_isSharedCheck_168_;
goto v_resetjp_161_;
}
v_resetjp_161_:
{
lean_object* v___x_164_; lean_object* v___x_166_; 
v___x_164_ = lean_array_to_list(v_a_160_);
if (v_isShared_163_ == 0)
{
lean_ctor_set(v___x_162_, 0, v___x_164_);
v___x_166_ = v___x_162_;
goto v_reusejp_165_;
}
else
{
lean_object* v_reuseFailAlloc_167_; 
v_reuseFailAlloc_167_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_167_, 0, v___x_164_);
v___x_166_ = v_reuseFailAlloc_167_;
goto v_reusejp_165_;
}
v_reusejp_165_:
{
return v___x_166_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__1(lean_object* v_j_169_, lean_object* v_k_170_){
_start:
{
lean_object* v___x_171_; lean_object* v___x_172_; 
v___x_171_ = l_Lean_Json_getObjValD(v_j_169_, v_k_170_);
v___x_172_ = lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1(v___x_171_);
return v___x_172_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__1___boxed(lean_object* v_j_173_, lean_object* v_k_174_){
_start:
{
lean_object* v_res_175_; 
v_res_175_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__1(v_j_173_, v_k_174_);
lean_dec_ref(v_k_174_);
return v_res_175_;
}
}
LEAN_EXPORT lean_object* lp_choreo_readScene___lam__0(lean_object* v_a_176_, lean_object* v_key_177_){
_start:
{
lean_object* v___x_178_; 
v___x_178_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__1(v_a_176_, v_key_177_);
if (lean_obj_tag(v___x_178_) == 0)
{
lean_object* v___x_179_; 
lean_dec_ref_known(v___x_178_, 1);
v___x_179_ = lean_box(0);
return v___x_179_;
}
else
{
lean_object* v_a_180_; 
v_a_180_ = lean_ctor_get(v___x_178_, 0);
lean_inc(v_a_180_);
lean_dec_ref_known(v___x_178_, 1);
return v_a_180_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_readScene___lam__0___boxed(lean_object* v_a_181_, lean_object* v_key_182_){
_start:
{
lean_object* v_res_183_; 
v_res_183_ = lp_choreo_readScene___lam__0(v_a_181_, v_key_182_);
lean_dec_ref(v_key_182_);
return v_res_183_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_mapTR_loop___at___00readScene_spec__3(lean_object* v_a_186_, lean_object* v_a_187_){
_start:
{
if (lean_obj_tag(v_a_186_) == 0)
{
lean_object* v___x_188_; 
v___x_188_ = l_List_reverse___redArg(v_a_187_);
return v___x_188_;
}
else
{
lean_object* v_head_189_; lean_object* v_tail_190_; lean_object* v___x_192_; uint8_t v_isShared_193_; uint8_t v_isSharedCheck_205_; 
v_head_189_ = lean_ctor_get(v_a_186_, 0);
v_tail_190_ = lean_ctor_get(v_a_186_, 1);
v_isSharedCheck_205_ = !lean_is_exclusive(v_a_186_);
if (v_isSharedCheck_205_ == 0)
{
v___x_192_ = v_a_186_;
v_isShared_193_ = v_isSharedCheck_205_;
goto v_resetjp_191_;
}
else
{
lean_inc(v_tail_190_);
lean_inc(v_head_189_);
lean_dec(v_a_186_);
v___x_192_ = lean_box(0);
v_isShared_193_ = v_isSharedCheck_205_;
goto v_resetjp_191_;
}
v_resetjp_191_:
{
lean_object* v___y_195_; 
if (lean_obj_tag(v_head_189_) == 4)
{
lean_object* v_elems_200_; lean_object* v___x_201_; lean_object* v___x_202_; lean_object* v___x_203_; 
v_elems_200_ = lean_ctor_get(v_head_189_, 0);
lean_inc_ref(v_elems_200_);
lean_dec_ref_known(v_head_189_, 1);
v___x_201_ = lean_array_to_list(v_elems_200_);
v___x_202_ = ((lean_object*)(lp_choreo_List_mapTR_loop___at___00readScene_spec__3___closed__0));
v___x_203_ = lp_choreo_List_filterMapTR_go___at___00Choreo_jsonState_spec__0(v___x_201_, v___x_202_);
v___y_195_ = v___x_203_;
goto v___jp_194_;
}
else
{
lean_object* v___x_204_; 
lean_dec(v_head_189_);
v___x_204_ = lean_box(0);
v___y_195_ = v___x_204_;
goto v___jp_194_;
}
v___jp_194_:
{
lean_object* v___x_197_; 
if (v_isShared_193_ == 0)
{
lean_ctor_set(v___x_192_, 1, v_a_187_);
lean_ctor_set(v___x_192_, 0, v___y_195_);
v___x_197_ = v___x_192_;
goto v_reusejp_196_;
}
else
{
lean_object* v_reuseFailAlloc_199_; 
v_reuseFailAlloc_199_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_199_, 0, v___y_195_);
lean_ctor_set(v_reuseFailAlloc_199_, 1, v_a_187_);
v___x_197_ = v_reuseFailAlloc_199_;
goto v_reusejp_196_;
}
v_reusejp_196_:
{
v_a_186_ = v_tail_190_;
v_a_187_ = v___x_197_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__4(lean_object* v_a_206_, lean_object* v_a_207_){
_start:
{
if (lean_obj_tag(v_a_206_) == 0)
{
lean_object* v___x_208_; 
v___x_208_ = lean_array_to_list(v_a_207_);
return v___x_208_;
}
else
{
lean_object* v_head_209_; 
v_head_209_ = lean_ctor_get(v_a_206_, 0);
if (lean_obj_tag(v_head_209_) == 1)
{
lean_object* v_tail_210_; 
v_tail_210_ = lean_ctor_get(v_head_209_, 1);
lean_inc(v_tail_210_);
if (lean_obj_tag(v_tail_210_) == 1)
{
lean_object* v_tail_211_; 
v_tail_211_ = lean_ctor_get(v_tail_210_, 1);
lean_inc(v_tail_211_);
if (lean_obj_tag(v_tail_211_) == 1)
{
lean_object* v_tail_212_; 
v_tail_212_ = lean_ctor_get(v_tail_211_, 1);
lean_inc(v_tail_212_);
if (lean_obj_tag(v_tail_212_) == 1)
{
lean_object* v_tail_213_; 
v_tail_213_ = lean_ctor_get(v_tail_212_, 1);
if (lean_obj_tag(v_tail_213_) == 0)
{
lean_object* v_tail_214_; lean_object* v_head_215_; lean_object* v_head_216_; lean_object* v___x_218_; uint8_t v_isShared_219_; uint8_t v_isSharedCheck_245_; 
lean_inc_ref(v_head_209_);
v_tail_214_ = lean_ctor_get(v_a_206_, 1);
lean_inc(v_tail_214_);
lean_dec_ref_known(v_a_206_, 2);
v_head_215_ = lean_ctor_get(v_head_209_, 0);
lean_inc(v_head_215_);
lean_dec_ref_known(v_head_209_, 2);
v_head_216_ = lean_ctor_get(v_tail_210_, 0);
v_isSharedCheck_245_ = !lean_is_exclusive(v_tail_210_);
if (v_isSharedCheck_245_ == 0)
{
lean_object* v_unused_246_; 
v_unused_246_ = lean_ctor_get(v_tail_210_, 1);
lean_dec(v_unused_246_);
v___x_218_ = v_tail_210_;
v_isShared_219_ = v_isSharedCheck_245_;
goto v_resetjp_217_;
}
else
{
lean_inc(v_head_216_);
lean_dec(v_tail_210_);
v___x_218_ = lean_box(0);
v_isShared_219_ = v_isSharedCheck_245_;
goto v_resetjp_217_;
}
v_resetjp_217_:
{
lean_object* v_head_220_; lean_object* v___x_222_; uint8_t v_isShared_223_; uint8_t v_isSharedCheck_243_; 
v_head_220_ = lean_ctor_get(v_tail_211_, 0);
v_isSharedCheck_243_ = !lean_is_exclusive(v_tail_211_);
if (v_isSharedCheck_243_ == 0)
{
lean_object* v_unused_244_; 
v_unused_244_ = lean_ctor_get(v_tail_211_, 1);
lean_dec(v_unused_244_);
v___x_222_ = v_tail_211_;
v_isShared_223_ = v_isSharedCheck_243_;
goto v_resetjp_221_;
}
else
{
lean_inc(v_head_220_);
lean_dec(v_tail_211_);
v___x_222_ = lean_box(0);
v_isShared_223_ = v_isSharedCheck_243_;
goto v_resetjp_221_;
}
v_resetjp_221_:
{
lean_object* v_head_224_; lean_object* v___x_226_; uint8_t v_isShared_227_; uint8_t v_isSharedCheck_241_; 
v_head_224_ = lean_ctor_get(v_tail_212_, 0);
v_isSharedCheck_241_ = !lean_is_exclusive(v_tail_212_);
if (v_isSharedCheck_241_ == 0)
{
lean_object* v_unused_242_; 
v_unused_242_ = lean_ctor_get(v_tail_212_, 1);
lean_dec(v_unused_242_);
v___x_226_ = v_tail_212_;
v_isShared_227_ = v_isSharedCheck_241_;
goto v_resetjp_225_;
}
else
{
lean_inc(v_head_224_);
lean_dec(v_tail_212_);
v___x_226_ = lean_box(0);
v_isShared_227_ = v_isSharedCheck_241_;
goto v_resetjp_225_;
}
v_resetjp_225_:
{
lean_object* v___x_228_; lean_object* v___x_229_; lean_object* v___x_231_; 
v___x_228_ = l_Int_toNat(v_head_215_);
lean_dec(v_head_215_);
v___x_229_ = l_Int_toNat(v_head_216_);
lean_dec(v_head_216_);
if (v_isShared_227_ == 0)
{
lean_ctor_set_tag(v___x_226_, 0);
lean_ctor_set(v___x_226_, 1, v_head_224_);
lean_ctor_set(v___x_226_, 0, v_head_220_);
v___x_231_ = v___x_226_;
goto v_reusejp_230_;
}
else
{
lean_object* v_reuseFailAlloc_240_; 
v_reuseFailAlloc_240_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_240_, 0, v_head_220_);
lean_ctor_set(v_reuseFailAlloc_240_, 1, v_head_224_);
v___x_231_ = v_reuseFailAlloc_240_;
goto v_reusejp_230_;
}
v_reusejp_230_:
{
lean_object* v___x_233_; 
if (v_isShared_223_ == 0)
{
lean_ctor_set_tag(v___x_222_, 0);
lean_ctor_set(v___x_222_, 1, v___x_231_);
lean_ctor_set(v___x_222_, 0, v___x_229_);
v___x_233_ = v___x_222_;
goto v_reusejp_232_;
}
else
{
lean_object* v_reuseFailAlloc_239_; 
v_reuseFailAlloc_239_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_239_, 0, v___x_229_);
lean_ctor_set(v_reuseFailAlloc_239_, 1, v___x_231_);
v___x_233_ = v_reuseFailAlloc_239_;
goto v_reusejp_232_;
}
v_reusejp_232_:
{
lean_object* v___x_235_; 
if (v_isShared_219_ == 0)
{
lean_ctor_set_tag(v___x_218_, 0);
lean_ctor_set(v___x_218_, 1, v___x_233_);
lean_ctor_set(v___x_218_, 0, v___x_228_);
v___x_235_ = v___x_218_;
goto v_reusejp_234_;
}
else
{
lean_object* v_reuseFailAlloc_238_; 
v_reuseFailAlloc_238_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_238_, 0, v___x_228_);
lean_ctor_set(v_reuseFailAlloc_238_, 1, v___x_233_);
v___x_235_ = v_reuseFailAlloc_238_;
goto v_reusejp_234_;
}
v_reusejp_234_:
{
lean_object* v___x_236_; 
v___x_236_ = lean_array_push(v_a_207_, v___x_235_);
v_a_206_ = v_tail_214_;
v_a_207_ = v___x_236_;
goto _start;
}
}
}
}
}
}
}
else
{
lean_object* v_tail_247_; 
lean_dec_ref_known(v_tail_212_, 2);
lean_dec_ref_known(v_tail_211_, 2);
lean_dec_ref_known(v_tail_210_, 2);
v_tail_247_ = lean_ctor_get(v_a_206_, 1);
lean_inc(v_tail_247_);
lean_dec_ref_known(v_a_206_, 2);
v_a_206_ = v_tail_247_;
goto _start;
}
}
else
{
lean_object* v_tail_249_; 
lean_dec_ref_known(v_tail_211_, 2);
lean_dec(v_tail_212_);
lean_dec_ref_known(v_tail_210_, 2);
v_tail_249_ = lean_ctor_get(v_a_206_, 1);
lean_inc(v_tail_249_);
lean_dec_ref_known(v_a_206_, 2);
v_a_206_ = v_tail_249_;
goto _start;
}
}
else
{
lean_object* v_tail_251_; 
lean_dec(v_tail_211_);
lean_dec_ref_known(v_tail_210_, 2);
v_tail_251_ = lean_ctor_get(v_a_206_, 1);
lean_inc(v_tail_251_);
lean_dec_ref_known(v_a_206_, 2);
v_a_206_ = v_tail_251_;
goto _start;
}
}
else
{
lean_object* v_tail_253_; 
lean_dec(v_tail_210_);
v_tail_253_ = lean_ctor_get(v_a_206_, 1);
lean_inc(v_tail_253_);
lean_dec_ref_known(v_a_206_, 2);
v_a_206_ = v_tail_253_;
goto _start;
}
}
else
{
lean_object* v_tail_255_; 
v_tail_255_ = lean_ctor_get(v_a_206_, 1);
lean_inc(v_tail_255_);
lean_dec_ref_known(v_a_206_, 2);
v_a_206_ = v_tail_255_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13_spec__19(size_t v_sz_257_, size_t v_i_258_, lean_object* v_bs_259_){
_start:
{
uint8_t v___x_260_; 
v___x_260_ = lean_usize_dec_lt(v_i_258_, v_sz_257_);
if (v___x_260_ == 0)
{
lean_object* v___x_261_; 
v___x_261_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_261_, 0, v_bs_259_);
return v___x_261_;
}
else
{
lean_object* v_v_262_; lean_object* v___x_263_; 
v_v_262_ = lean_array_uget_borrowed(v_bs_259_, v_i_258_);
lean_inc(v_v_262_);
v___x_263_ = l_Lean_Json_getStr_x3f(v_v_262_);
if (lean_obj_tag(v___x_263_) == 0)
{
lean_object* v_a_264_; lean_object* v___x_266_; uint8_t v_isShared_267_; uint8_t v_isSharedCheck_271_; 
lean_dec_ref(v_bs_259_);
v_a_264_ = lean_ctor_get(v___x_263_, 0);
v_isSharedCheck_271_ = !lean_is_exclusive(v___x_263_);
if (v_isSharedCheck_271_ == 0)
{
v___x_266_ = v___x_263_;
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
else
{
lean_inc(v_a_264_);
lean_dec(v___x_263_);
v___x_266_ = lean_box(0);
v_isShared_267_ = v_isSharedCheck_271_;
goto v_resetjp_265_;
}
v_resetjp_265_:
{
lean_object* v___x_269_; 
if (v_isShared_267_ == 0)
{
v___x_269_ = v___x_266_;
goto v_reusejp_268_;
}
else
{
lean_object* v_reuseFailAlloc_270_; 
v_reuseFailAlloc_270_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_270_, 0, v_a_264_);
v___x_269_ = v_reuseFailAlloc_270_;
goto v_reusejp_268_;
}
v_reusejp_268_:
{
return v___x_269_;
}
}
}
else
{
lean_object* v_a_272_; lean_object* v___x_273_; lean_object* v_bs_x27_274_; size_t v___x_275_; size_t v___x_276_; lean_object* v___x_277_; 
v_a_272_ = lean_ctor_get(v___x_263_, 0);
lean_inc(v_a_272_);
lean_dec_ref_known(v___x_263_, 1);
v___x_273_ = lean_unsigned_to_nat(0u);
v_bs_x27_274_ = lean_array_uset(v_bs_259_, v_i_258_, v___x_273_);
v___x_275_ = ((size_t)1ULL);
v___x_276_ = lean_usize_add(v_i_258_, v___x_275_);
v___x_277_ = lean_array_uset(v_bs_x27_274_, v_i_258_, v_a_272_);
v_i_258_ = v___x_276_;
v_bs_259_ = v___x_277_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13_spec__19___boxed(lean_object* v_sz_279_, lean_object* v_i_280_, lean_object* v_bs_281_){
_start:
{
size_t v_sz_boxed_282_; size_t v_i_boxed_283_; lean_object* v_res_284_; 
v_sz_boxed_282_ = lean_unbox_usize(v_sz_279_);
lean_dec(v_sz_279_);
v_i_boxed_283_ = lean_unbox_usize(v_i_280_);
lean_dec(v_i_280_);
v_res_284_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13_spec__19(v_sz_boxed_282_, v_i_boxed_283_, v_bs_281_);
return v_res_284_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13(lean_object* v_x_285_){
_start:
{
if (lean_obj_tag(v_x_285_) == 4)
{
lean_object* v_elems_286_; size_t v_sz_287_; size_t v___x_288_; lean_object* v___x_289_; 
v_elems_286_ = lean_ctor_get(v_x_285_, 0);
lean_inc_ref(v_elems_286_);
lean_dec_ref_known(v_x_285_, 1);
v_sz_287_ = lean_array_size(v_elems_286_);
v___x_288_ = ((size_t)0ULL);
v___x_289_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13_spec__19(v_sz_287_, v___x_288_, v_elems_286_);
return v___x_289_;
}
else
{
lean_object* v___x_290_; lean_object* v___x_291_; lean_object* v___x_292_; lean_object* v___x_293_; lean_object* v___x_294_; lean_object* v___x_295_; lean_object* v___x_296_; 
v___x_290_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0));
v___x_291_ = lean_unsigned_to_nat(80u);
v___x_292_ = l_Lean_Json_pretty(v_x_285_, v___x_291_);
v___x_293_ = lean_string_append(v___x_290_, v___x_292_);
lean_dec_ref(v___x_292_);
v___x_294_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1));
v___x_295_ = lean_string_append(v___x_293_, v___x_294_);
v___x_296_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_296_, 0, v___x_295_);
return v___x_296_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9(lean_object* v_j_297_){
_start:
{
lean_object* v___x_298_; 
v___x_298_ = lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9_spec__13(v_j_297_);
if (lean_obj_tag(v___x_298_) == 0)
{
lean_object* v_a_299_; lean_object* v___x_301_; uint8_t v_isShared_302_; uint8_t v_isSharedCheck_306_; 
v_a_299_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_306_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_306_ == 0)
{
v___x_301_ = v___x_298_;
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
else
{
lean_inc(v_a_299_);
lean_dec(v___x_298_);
v___x_301_ = lean_box(0);
v_isShared_302_ = v_isSharedCheck_306_;
goto v_resetjp_300_;
}
v_resetjp_300_:
{
lean_object* v___x_304_; 
if (v_isShared_302_ == 0)
{
v___x_304_ = v___x_301_;
goto v_reusejp_303_;
}
else
{
lean_object* v_reuseFailAlloc_305_; 
v_reuseFailAlloc_305_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_305_, 0, v_a_299_);
v___x_304_ = v_reuseFailAlloc_305_;
goto v_reusejp_303_;
}
v_reusejp_303_:
{
return v___x_304_;
}
}
}
else
{
lean_object* v_a_307_; lean_object* v___x_309_; uint8_t v_isShared_310_; uint8_t v_isSharedCheck_315_; 
v_a_307_ = lean_ctor_get(v___x_298_, 0);
v_isSharedCheck_315_ = !lean_is_exclusive(v___x_298_);
if (v_isSharedCheck_315_ == 0)
{
v___x_309_ = v___x_298_;
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
else
{
lean_inc(v_a_307_);
lean_dec(v___x_298_);
v___x_309_ = lean_box(0);
v_isShared_310_ = v_isSharedCheck_315_;
goto v_resetjp_308_;
}
v_resetjp_308_:
{
lean_object* v___x_311_; lean_object* v___x_313_; 
v___x_311_ = lean_array_to_list(v_a_307_);
if (v_isShared_310_ == 0)
{
lean_ctor_set(v___x_309_, 0, v___x_311_);
v___x_313_ = v___x_309_;
goto v_reusejp_312_;
}
else
{
lean_object* v_reuseFailAlloc_314_; 
v_reuseFailAlloc_314_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_314_, 0, v___x_311_);
v___x_313_ = v_reuseFailAlloc_314_;
goto v_reusejp_312_;
}
v_reusejp_312_:
{
return v___x_313_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6(lean_object* v_j_316_, lean_object* v_k_317_){
_start:
{
lean_object* v___x_318_; lean_object* v___x_319_; 
v___x_318_ = l_Lean_Json_getObjValD(v_j_316_, v_k_317_);
v___x_319_ = lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__6_spec__9(v___x_318_);
return v___x_319_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6___boxed(lean_object* v_j_320_, lean_object* v_k_321_){
_start:
{
lean_object* v_res_322_; 
v_res_322_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6(v_j_320_, v_k_321_);
lean_dec_ref(v_k_321_);
return v_res_322_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__0(lean_object* v_a_323_, lean_object* v_a_324_){
_start:
{
if (lean_obj_tag(v_a_323_) == 0)
{
lean_object* v___x_325_; 
v___x_325_ = lean_array_to_list(v_a_324_);
return v___x_325_;
}
else
{
lean_object* v_head_326_; 
v_head_326_ = lean_ctor_get(v_a_323_, 0);
if (lean_obj_tag(v_head_326_) == 1)
{
lean_object* v_tail_327_; 
v_tail_327_ = lean_ctor_get(v_head_326_, 1);
lean_inc(v_tail_327_);
if (lean_obj_tag(v_tail_327_) == 1)
{
lean_object* v_tail_328_; 
v_tail_328_ = lean_ctor_get(v_tail_327_, 1);
if (lean_obj_tag(v_tail_328_) == 0)
{
lean_object* v_tail_329_; lean_object* v_head_330_; lean_object* v_head_331_; lean_object* v___x_333_; uint8_t v_isShared_334_; uint8_t v_isSharedCheck_340_; 
lean_inc_ref(v_head_326_);
v_tail_329_ = lean_ctor_get(v_a_323_, 1);
lean_inc(v_tail_329_);
lean_dec_ref_known(v_a_323_, 2);
v_head_330_ = lean_ctor_get(v_head_326_, 0);
lean_inc(v_head_330_);
lean_dec_ref_known(v_head_326_, 2);
v_head_331_ = lean_ctor_get(v_tail_327_, 0);
v_isSharedCheck_340_ = !lean_is_exclusive(v_tail_327_);
if (v_isSharedCheck_340_ == 0)
{
lean_object* v_unused_341_; 
v_unused_341_ = lean_ctor_get(v_tail_327_, 1);
lean_dec(v_unused_341_);
v___x_333_ = v_tail_327_;
v_isShared_334_ = v_isSharedCheck_340_;
goto v_resetjp_332_;
}
else
{
lean_inc(v_head_331_);
lean_dec(v_tail_327_);
v___x_333_ = lean_box(0);
v_isShared_334_ = v_isSharedCheck_340_;
goto v_resetjp_332_;
}
v_resetjp_332_:
{
lean_object* v___x_336_; 
if (v_isShared_334_ == 0)
{
lean_ctor_set_tag(v___x_333_, 0);
lean_ctor_set(v___x_333_, 1, v_head_331_);
lean_ctor_set(v___x_333_, 0, v_head_330_);
v___x_336_ = v___x_333_;
goto v_reusejp_335_;
}
else
{
lean_object* v_reuseFailAlloc_339_; 
v_reuseFailAlloc_339_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v_reuseFailAlloc_339_, 0, v_head_330_);
lean_ctor_set(v_reuseFailAlloc_339_, 1, v_head_331_);
v___x_336_ = v_reuseFailAlloc_339_;
goto v_reusejp_335_;
}
v_reusejp_335_:
{
lean_object* v___x_337_; 
v___x_337_ = lean_array_push(v_a_324_, v___x_336_);
v_a_323_ = v_tail_329_;
v_a_324_ = v___x_337_;
goto _start;
}
}
}
else
{
lean_object* v_tail_342_; 
lean_dec_ref_known(v_tail_327_, 2);
v_tail_342_ = lean_ctor_get(v_a_323_, 1);
lean_inc(v_tail_342_);
lean_dec_ref_known(v_a_323_, 2);
v_a_323_ = v_tail_342_;
goto _start;
}
}
else
{
lean_object* v_tail_344_; 
lean_dec(v_tail_327_);
v_tail_344_ = lean_ctor_get(v_a_323_, 1);
lean_inc(v_tail_344_);
lean_dec_ref_known(v_a_323_, 2);
v_a_323_ = v_tail_344_;
goto _start;
}
}
else
{
lean_object* v_tail_346_; 
v_tail_346_ = lean_ctor_get(v_a_323_, 1);
lean_inc(v_tail_346_);
lean_dec_ref_known(v_a_323_, 2);
v_a_323_ = v_tail_346_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5_spec__12(size_t v_sz_348_, size_t v_i_349_, lean_object* v_bs_350_){
_start:
{
uint8_t v___x_351_; 
v___x_351_ = lean_usize_dec_lt(v_i_349_, v_sz_348_);
if (v___x_351_ == 0)
{
lean_object* v___x_352_; 
v___x_352_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_352_, 0, v_bs_350_);
return v___x_352_;
}
else
{
lean_object* v_v_353_; lean_object* v___x_354_; 
v_v_353_ = lean_array_uget_borrowed(v_bs_350_, v_i_349_);
lean_inc(v_v_353_);
v___x_354_ = lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1(v_v_353_);
if (lean_obj_tag(v___x_354_) == 0)
{
lean_object* v_a_355_; lean_object* v___x_357_; uint8_t v_isShared_358_; uint8_t v_isSharedCheck_362_; 
lean_dec_ref(v_bs_350_);
v_a_355_ = lean_ctor_get(v___x_354_, 0);
v_isSharedCheck_362_ = !lean_is_exclusive(v___x_354_);
if (v_isSharedCheck_362_ == 0)
{
v___x_357_ = v___x_354_;
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
else
{
lean_inc(v_a_355_);
lean_dec(v___x_354_);
v___x_357_ = lean_box(0);
v_isShared_358_ = v_isSharedCheck_362_;
goto v_resetjp_356_;
}
v_resetjp_356_:
{
lean_object* v___x_360_; 
if (v_isShared_358_ == 0)
{
v___x_360_ = v___x_357_;
goto v_reusejp_359_;
}
else
{
lean_object* v_reuseFailAlloc_361_; 
v_reuseFailAlloc_361_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_361_, 0, v_a_355_);
v___x_360_ = v_reuseFailAlloc_361_;
goto v_reusejp_359_;
}
v_reusejp_359_:
{
return v___x_360_;
}
}
}
else
{
lean_object* v_a_363_; lean_object* v___x_364_; lean_object* v_bs_x27_365_; size_t v___x_366_; size_t v___x_367_; lean_object* v___x_368_; 
v_a_363_ = lean_ctor_get(v___x_354_, 0);
lean_inc(v_a_363_);
lean_dec_ref_known(v___x_354_, 1);
v___x_364_ = lean_unsigned_to_nat(0u);
v_bs_x27_365_ = lean_array_uset(v_bs_350_, v_i_349_, v___x_364_);
v___x_366_ = ((size_t)1ULL);
v___x_367_ = lean_usize_add(v_i_349_, v___x_366_);
v___x_368_ = lean_array_uset(v_bs_x27_365_, v_i_349_, v_a_363_);
v_i_349_ = v___x_367_;
v_bs_350_ = v___x_368_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5_spec__12___boxed(lean_object* v_sz_370_, lean_object* v_i_371_, lean_object* v_bs_372_){
_start:
{
size_t v_sz_boxed_373_; size_t v_i_boxed_374_; lean_object* v_res_375_; 
v_sz_boxed_373_ = lean_unbox_usize(v_sz_370_);
lean_dec(v_sz_370_);
v_i_boxed_374_ = lean_unbox_usize(v_i_371_);
lean_dec(v_i_371_);
v_res_375_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5_spec__12(v_sz_boxed_373_, v_i_boxed_374_, v_bs_372_);
return v_res_375_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5(lean_object* v_x_376_){
_start:
{
if (lean_obj_tag(v_x_376_) == 4)
{
lean_object* v_elems_377_; size_t v_sz_378_; size_t v___x_379_; lean_object* v___x_380_; 
v_elems_377_ = lean_ctor_get(v_x_376_, 0);
lean_inc_ref(v_elems_377_);
lean_dec_ref_known(v_x_376_, 1);
v_sz_378_ = lean_array_size(v_elems_377_);
v___x_379_ = ((size_t)0ULL);
v___x_380_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5_spec__12(v_sz_378_, v___x_379_, v_elems_377_);
return v___x_380_;
}
else
{
lean_object* v___x_381_; lean_object* v___x_382_; lean_object* v___x_383_; lean_object* v___x_384_; lean_object* v___x_385_; lean_object* v___x_386_; lean_object* v___x_387_; 
v___x_381_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0));
v___x_382_ = lean_unsigned_to_nat(80u);
v___x_383_ = l_Lean_Json_pretty(v_x_376_, v___x_382_);
v___x_384_ = lean_string_append(v___x_381_, v___x_383_);
lean_dec_ref(v___x_383_);
v___x_385_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1));
v___x_386_ = lean_string_append(v___x_384_, v___x_385_);
v___x_387_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_387_, 0, v___x_386_);
return v___x_387_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3(lean_object* v_j_388_){
_start:
{
lean_object* v___x_389_; 
v___x_389_ = lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3_spec__5(v_j_388_);
if (lean_obj_tag(v___x_389_) == 0)
{
lean_object* v_a_390_; lean_object* v___x_392_; uint8_t v_isShared_393_; uint8_t v_isSharedCheck_397_; 
v_a_390_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_397_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_397_ == 0)
{
v___x_392_ = v___x_389_;
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
else
{
lean_inc(v_a_390_);
lean_dec(v___x_389_);
v___x_392_ = lean_box(0);
v_isShared_393_ = v_isSharedCheck_397_;
goto v_resetjp_391_;
}
v_resetjp_391_:
{
lean_object* v___x_395_; 
if (v_isShared_393_ == 0)
{
v___x_395_ = v___x_392_;
goto v_reusejp_394_;
}
else
{
lean_object* v_reuseFailAlloc_396_; 
v_reuseFailAlloc_396_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_396_, 0, v_a_390_);
v___x_395_ = v_reuseFailAlloc_396_;
goto v_reusejp_394_;
}
v_reusejp_394_:
{
return v___x_395_;
}
}
}
else
{
lean_object* v_a_398_; lean_object* v___x_400_; uint8_t v_isShared_401_; uint8_t v_isSharedCheck_406_; 
v_a_398_ = lean_ctor_get(v___x_389_, 0);
v_isSharedCheck_406_ = !lean_is_exclusive(v___x_389_);
if (v_isSharedCheck_406_ == 0)
{
v___x_400_ = v___x_389_;
v_isShared_401_ = v_isSharedCheck_406_;
goto v_resetjp_399_;
}
else
{
lean_inc(v_a_398_);
lean_dec(v___x_389_);
v___x_400_ = lean_box(0);
v_isShared_401_ = v_isSharedCheck_406_;
goto v_resetjp_399_;
}
v_resetjp_399_:
{
lean_object* v___x_402_; lean_object* v___x_404_; 
v___x_402_ = lean_array_to_list(v_a_398_);
if (v_isShared_401_ == 0)
{
lean_ctor_set(v___x_400_, 0, v___x_402_);
v___x_404_ = v___x_400_;
goto v_reusejp_403_;
}
else
{
lean_object* v_reuseFailAlloc_405_; 
v_reuseFailAlloc_405_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_405_, 0, v___x_402_);
v___x_404_ = v_reuseFailAlloc_405_;
goto v_reusejp_403_;
}
v_reusejp_403_:
{
return v___x_404_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__2(lean_object* v_j_407_, lean_object* v_k_408_){
_start:
{
lean_object* v___x_409_; lean_object* v___x_410_; 
v___x_409_ = l_Lean_Json_getObjValD(v_j_407_, v_k_408_);
v___x_410_ = lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__2_spec__3(v___x_409_);
return v___x_410_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__2___boxed(lean_object* v_j_411_, lean_object* v_k_412_){
_start:
{
lean_object* v_res_413_; 
v_res_413_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__2(v_j_411_, v_k_412_);
lean_dec_ref(v_k_412_);
return v_res_413_;
}
}
static lean_object* _init_lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0(void){
_start:
{
lean_object* v___x_414_; lean_object* v___x_415_; 
v___x_414_ = lean_unsigned_to_nat(0u);
v___x_415_ = lean_nat_to_int(v___x_414_);
return v___x_415_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0(lean_object* v_head_416_, lean_object* v_key_417_){
_start:
{
lean_object* v___x_418_; 
v___x_418_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_head_416_, v_key_417_);
if (lean_obj_tag(v___x_418_) == 0)
{
lean_object* v___x_419_; 
lean_dec_ref_known(v___x_418_, 1);
v___x_419_ = lean_obj_once(&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0, &lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0_once, _init_lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0);
return v___x_419_;
}
else
{
lean_object* v_a_420_; 
v_a_420_ = lean_ctor_get(v___x_418_, 0);
lean_inc(v_a_420_);
lean_dec_ref_known(v___x_418_, 1);
return v_a_420_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___boxed(lean_object* v_head_421_, lean_object* v_key_422_){
_start:
{
lean_object* v_res_423_; 
v_res_423_ = lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0(v_head_421_, v_key_422_);
lean_dec_ref(v_key_422_);
return v_res_423_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterMapTR_go___at___00readScene_spec__7(lean_object* v_a_434_, lean_object* v_a_435_){
_start:
{
if (lean_obj_tag(v_a_434_) == 0)
{
lean_object* v___x_436_; 
v___x_436_ = lean_array_to_list(v_a_435_);
return v___x_436_;
}
else
{
lean_object* v_head_437_; lean_object* v_tail_438_; lean_object* v___x_439_; lean_object* v___x_440_; 
v_head_437_ = lean_ctor_get(v_a_434_, 0);
lean_inc_n(v_head_437_, 2);
v_tail_438_ = lean_ctor_get(v_a_434_, 1);
lean_inc(v_tail_438_);
lean_dec_ref_known(v_a_434_, 2);
v___x_439_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__0));
v___x_440_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_head_437_, v___x_439_);
if (lean_obj_tag(v___x_440_) == 1)
{
lean_object* v_a_441_; lean_object* v___x_442_; lean_object* v___x_443_; 
v_a_441_ = lean_ctor_get(v___x_440_, 0);
lean_inc(v_a_441_);
lean_dec_ref_known(v___x_440_, 1);
v___x_442_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__1));
lean_inc(v_head_437_);
v___x_443_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_head_437_, v___x_442_);
if (lean_obj_tag(v___x_443_) == 1)
{
lean_object* v_a_444_; lean_object* v___x_445_; lean_object* v___x_446_; 
v_a_444_ = lean_ctor_get(v___x_443_, 0);
lean_inc(v_a_444_);
lean_dec_ref_known(v___x_443_, 1);
v___x_445_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__2));
lean_inc(v_head_437_);
v___x_446_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_head_437_, v___x_445_);
if (lean_obj_tag(v___x_446_) == 1)
{
lean_object* v_a_447_; lean_object* v___y_449_; lean_object* v___y_450_; lean_object* v___y_461_; lean_object* v___x_468_; lean_object* v___x_469_; 
v_a_447_ = lean_ctor_get(v___x_446_, 0);
lean_inc(v_a_447_);
lean_dec_ref_known(v___x_446_, 1);
v___x_468_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__8));
lean_inc(v_head_437_);
v___x_469_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__2(v_head_437_, v___x_468_);
if (lean_obj_tag(v___x_469_) == 0)
{
lean_object* v___x_470_; 
lean_dec_ref_known(v___x_469_, 1);
v___x_470_ = lean_box(0);
v___y_461_ = v___x_470_;
goto v___jp_460_;
}
else
{
lean_object* v_a_471_; 
v_a_471_ = lean_ctor_get(v___x_469_, 0);
lean_inc(v_a_471_);
lean_dec_ref_known(v___x_469_, 1);
v___y_461_ = v_a_471_;
goto v___jp_460_;
}
v___jp_448_:
{
lean_object* v___x_451_; lean_object* v___x_452_; lean_object* v___x_453_; lean_object* v___x_454_; lean_object* v___x_455_; lean_object* v___x_456_; lean_object* v___x_457_; lean_object* v___x_458_; 
v___x_451_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__3));
lean_inc_n(v_head_437_, 2);
v___x_452_ = lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0(v_head_437_, v___x_451_);
v___x_453_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__4));
v___x_454_ = lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0(v_head_437_, v___x_453_);
v___x_455_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__5));
v___x_456_ = lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0(v_head_437_, v___x_455_);
v___x_457_ = lean_alloc_ctor(0, 8, 0);
lean_ctor_set(v___x_457_, 0, v_a_441_);
lean_ctor_set(v___x_457_, 1, v_a_444_);
lean_ctor_set(v___x_457_, 2, v_a_447_);
lean_ctor_set(v___x_457_, 3, v___y_450_);
lean_ctor_set(v___x_457_, 4, v___x_452_);
lean_ctor_set(v___x_457_, 5, v___x_454_);
lean_ctor_set(v___x_457_, 6, v___y_449_);
lean_ctor_set(v___x_457_, 7, v___x_456_);
v___x_458_ = lean_array_push(v_a_435_, v___x_457_);
v_a_434_ = v_tail_438_;
v_a_435_ = v___x_458_;
goto _start;
}
v___jp_460_:
{
lean_object* v___x_462_; lean_object* v_prs_463_; lean_object* v___x_464_; lean_object* v___x_465_; 
v___x_462_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__6));
v_prs_463_ = lp_choreo_List_filterMapTR_go___at___00readScene_spec__0(v___y_461_, v___x_462_);
v___x_464_ = ((lean_object*)(lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___closed__7));
lean_inc(v_head_437_);
v___x_465_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__1(v_head_437_, v___x_464_);
if (lean_obj_tag(v___x_465_) == 0)
{
lean_object* v___x_466_; 
lean_dec_ref_known(v___x_465_, 1);
v___x_466_ = lean_box(0);
v___y_449_ = v_prs_463_;
v___y_450_ = v___x_466_;
goto v___jp_448_;
}
else
{
lean_object* v_a_467_; 
v_a_467_ = lean_ctor_get(v___x_465_, 0);
lean_inc(v_a_467_);
lean_dec_ref_known(v___x_465_, 1);
v___y_449_ = v_prs_463_;
v___y_450_ = v_a_467_;
goto v___jp_448_;
}
}
}
else
{
lean_dec_ref(v___x_446_);
lean_dec(v_a_444_);
lean_dec(v_a_441_);
lean_dec(v_head_437_);
v_a_434_ = v_tail_438_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_443_);
lean_dec(v_a_441_);
lean_dec(v_head_437_);
v_a_434_ = v_tail_438_;
goto _start;
}
}
else
{
lean_dec_ref(v___x_440_);
lean_dec(v_head_437_);
v_a_434_ = v_tail_438_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17_spec__19(size_t v_sz_475_, size_t v_i_476_, lean_object* v_bs_477_){
_start:
{
uint8_t v___x_478_; 
v___x_478_ = lean_usize_dec_lt(v_i_476_, v_sz_475_);
if (v___x_478_ == 0)
{
lean_object* v___x_479_; 
v___x_479_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_479_, 0, v_bs_477_);
return v___x_479_;
}
else
{
lean_object* v_v_480_; lean_object* v___x_481_; 
v_v_480_ = lean_array_uget_borrowed(v_bs_477_, v_i_476_);
lean_inc(v_v_480_);
v___x_481_ = l_Lean_Json_getInt_x3f(v_v_480_);
if (lean_obj_tag(v___x_481_) == 0)
{
lean_object* v_a_482_; lean_object* v___x_484_; uint8_t v_isShared_485_; uint8_t v_isSharedCheck_489_; 
lean_dec_ref(v_bs_477_);
v_a_482_ = lean_ctor_get(v___x_481_, 0);
v_isSharedCheck_489_ = !lean_is_exclusive(v___x_481_);
if (v_isSharedCheck_489_ == 0)
{
v___x_484_ = v___x_481_;
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
else
{
lean_inc(v_a_482_);
lean_dec(v___x_481_);
v___x_484_ = lean_box(0);
v_isShared_485_ = v_isSharedCheck_489_;
goto v_resetjp_483_;
}
v_resetjp_483_:
{
lean_object* v___x_487_; 
if (v_isShared_485_ == 0)
{
v___x_487_ = v___x_484_;
goto v_reusejp_486_;
}
else
{
lean_object* v_reuseFailAlloc_488_; 
v_reuseFailAlloc_488_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_488_, 0, v_a_482_);
v___x_487_ = v_reuseFailAlloc_488_;
goto v_reusejp_486_;
}
v_reusejp_486_:
{
return v___x_487_;
}
}
}
else
{
lean_object* v_a_490_; lean_object* v___x_491_; lean_object* v_bs_x27_492_; size_t v___x_493_; size_t v___x_494_; lean_object* v___x_495_; 
v_a_490_ = lean_ctor_get(v___x_481_, 0);
lean_inc(v_a_490_);
lean_dec_ref_known(v___x_481_, 1);
v___x_491_ = lean_unsigned_to_nat(0u);
v_bs_x27_492_ = lean_array_uset(v_bs_477_, v_i_476_, v___x_491_);
v___x_493_ = ((size_t)1ULL);
v___x_494_ = lean_usize_add(v_i_476_, v___x_493_);
v___x_495_ = lean_array_uset(v_bs_x27_492_, v_i_476_, v_a_490_);
v_i_476_ = v___x_494_;
v_bs_477_ = v___x_495_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17_spec__19___boxed(lean_object* v_sz_497_, lean_object* v_i_498_, lean_object* v_bs_499_){
_start:
{
size_t v_sz_boxed_500_; size_t v_i_boxed_501_; lean_object* v_res_502_; 
v_sz_boxed_500_ = lean_unbox_usize(v_sz_497_);
lean_dec(v_sz_497_);
v_i_boxed_501_ = lean_unbox_usize(v_i_498_);
lean_dec(v_i_498_);
v_res_502_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17_spec__19(v_sz_boxed_500_, v_i_boxed_501_, v_bs_499_);
return v_res_502_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17(lean_object* v_x_503_){
_start:
{
if (lean_obj_tag(v_x_503_) == 4)
{
lean_object* v_elems_504_; size_t v_sz_505_; size_t v___x_506_; lean_object* v___x_507_; 
v_elems_504_ = lean_ctor_get(v_x_503_, 0);
lean_inc_ref(v_elems_504_);
lean_dec_ref_known(v_x_503_, 1);
v_sz_505_ = lean_array_size(v_elems_504_);
v___x_506_ = ((size_t)0ULL);
v___x_507_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17_spec__19(v_sz_505_, v___x_506_, v_elems_504_);
return v___x_507_;
}
else
{
lean_object* v___x_508_; lean_object* v___x_509_; lean_object* v___x_510_; lean_object* v___x_511_; lean_object* v___x_512_; lean_object* v___x_513_; lean_object* v___x_514_; 
v___x_508_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0));
v___x_509_ = lean_unsigned_to_nat(80u);
v___x_510_ = l_Lean_Json_pretty(v_x_503_, v___x_509_);
v___x_511_ = lean_string_append(v___x_508_, v___x_510_);
lean_dec_ref(v___x_510_);
v___x_512_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1));
v___x_513_ = lean_string_append(v___x_511_, v___x_512_);
v___x_514_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_514_, 0, v___x_513_);
return v___x_514_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15(lean_object* v_j_515_){
_start:
{
lean_object* v___x_516_; 
v___x_516_ = lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15_spec__17(v_j_515_);
if (lean_obj_tag(v___x_516_) == 0)
{
lean_object* v_a_517_; lean_object* v___x_519_; uint8_t v_isShared_520_; uint8_t v_isSharedCheck_524_; 
v_a_517_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_524_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_524_ == 0)
{
v___x_519_ = v___x_516_;
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
else
{
lean_inc(v_a_517_);
lean_dec(v___x_516_);
v___x_519_ = lean_box(0);
v_isShared_520_ = v_isSharedCheck_524_;
goto v_resetjp_518_;
}
v_resetjp_518_:
{
lean_object* v___x_522_; 
if (v_isShared_520_ == 0)
{
v___x_522_ = v___x_519_;
goto v_reusejp_521_;
}
else
{
lean_object* v_reuseFailAlloc_523_; 
v_reuseFailAlloc_523_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_523_, 0, v_a_517_);
v___x_522_ = v_reuseFailAlloc_523_;
goto v_reusejp_521_;
}
v_reusejp_521_:
{
return v___x_522_;
}
}
}
else
{
lean_object* v_a_525_; lean_object* v___x_527_; uint8_t v_isShared_528_; uint8_t v_isSharedCheck_533_; 
v_a_525_ = lean_ctor_get(v___x_516_, 0);
v_isSharedCheck_533_ = !lean_is_exclusive(v___x_516_);
if (v_isSharedCheck_533_ == 0)
{
v___x_527_ = v___x_516_;
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
else
{
lean_inc(v_a_525_);
lean_dec(v___x_516_);
v___x_527_ = lean_box(0);
v_isShared_528_ = v_isSharedCheck_533_;
goto v_resetjp_526_;
}
v_resetjp_526_:
{
lean_object* v___x_529_; lean_object* v___x_531_; 
v___x_529_ = lean_array_to_list(v_a_525_);
if (v_isShared_528_ == 0)
{
lean_ctor_set(v___x_527_, 0, v___x_529_);
v___x_531_ = v___x_527_;
goto v_reusejp_530_;
}
else
{
lean_object* v_reuseFailAlloc_532_; 
v_reuseFailAlloc_532_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_532_, 0, v___x_529_);
v___x_531_ = v_reuseFailAlloc_532_;
goto v_reusejp_530_;
}
v_reusejp_530_:
{
return v___x_531_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__16(size_t v_sz_534_, size_t v_i_535_, lean_object* v_bs_536_){
_start:
{
uint8_t v___x_537_; 
v___x_537_ = lean_usize_dec_lt(v_i_535_, v_sz_534_);
if (v___x_537_ == 0)
{
lean_object* v___x_538_; 
v___x_538_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v___x_538_, 0, v_bs_536_);
return v___x_538_;
}
else
{
lean_object* v_v_539_; lean_object* v___x_540_; 
v_v_539_ = lean_array_uget_borrowed(v_bs_536_, v_i_535_);
lean_inc(v_v_539_);
v___x_540_ = lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__15(v_v_539_);
if (lean_obj_tag(v___x_540_) == 0)
{
lean_object* v_a_541_; lean_object* v___x_543_; uint8_t v_isShared_544_; uint8_t v_isSharedCheck_548_; 
lean_dec_ref(v_bs_536_);
v_a_541_ = lean_ctor_get(v___x_540_, 0);
v_isSharedCheck_548_ = !lean_is_exclusive(v___x_540_);
if (v_isSharedCheck_548_ == 0)
{
v___x_543_ = v___x_540_;
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
else
{
lean_inc(v_a_541_);
lean_dec(v___x_540_);
v___x_543_ = lean_box(0);
v_isShared_544_ = v_isSharedCheck_548_;
goto v_resetjp_542_;
}
v_resetjp_542_:
{
lean_object* v___x_546_; 
if (v_isShared_544_ == 0)
{
v___x_546_ = v___x_543_;
goto v_reusejp_545_;
}
else
{
lean_object* v_reuseFailAlloc_547_; 
v_reuseFailAlloc_547_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_547_, 0, v_a_541_);
v___x_546_ = v_reuseFailAlloc_547_;
goto v_reusejp_545_;
}
v_reusejp_545_:
{
return v___x_546_;
}
}
}
else
{
lean_object* v_a_549_; lean_object* v___x_550_; lean_object* v_bs_x27_551_; size_t v___x_552_; size_t v___x_553_; lean_object* v___x_554_; 
v_a_549_ = lean_ctor_get(v___x_540_, 0);
lean_inc(v_a_549_);
lean_dec_ref_known(v___x_540_, 1);
v___x_550_ = lean_unsigned_to_nat(0u);
v_bs_x27_551_ = lean_array_uset(v_bs_536_, v_i_535_, v___x_550_);
v___x_552_ = ((size_t)1ULL);
v___x_553_ = lean_usize_add(v_i_535_, v___x_552_);
v___x_554_ = lean_array_uset(v_bs_x27_551_, v_i_535_, v_a_549_);
v_i_535_ = v___x_553_;
v_bs_536_ = v___x_554_;
goto _start;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__16___boxed(lean_object* v_sz_556_, lean_object* v_i_557_, lean_object* v_bs_558_){
_start:
{
size_t v_sz_boxed_559_; size_t v_i_boxed_560_; lean_object* v_res_561_; 
v_sz_boxed_559_ = lean_unbox_usize(v_sz_556_);
lean_dec(v_sz_556_);
v_i_boxed_560_ = lean_unbox_usize(v_i_557_);
lean_dec(v_i_557_);
v_res_561_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__16(v_sz_boxed_559_, v_i_boxed_560_, v_bs_558_);
return v_res_561_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10(lean_object* v_x_562_){
_start:
{
if (lean_obj_tag(v_x_562_) == 4)
{
lean_object* v_elems_563_; size_t v_sz_564_; size_t v___x_565_; lean_object* v___x_566_; 
v_elems_563_ = lean_ctor_get(v_x_562_, 0);
lean_inc_ref(v_elems_563_);
lean_dec_ref_known(v_x_562_, 1);
v_sz_564_ = lean_array_size(v_elems_563_);
v___x_565_ = ((size_t)0ULL);
v___x_566_ = lp_choreo___private_Init_Data_Array_Basic_0__Array_mapMUnsafe_map___at___00Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10_spec__16(v_sz_564_, v___x_565_, v_elems_563_);
return v___x_566_;
}
else
{
lean_object* v___x_567_; lean_object* v___x_568_; lean_object* v___x_569_; lean_object* v___x_570_; lean_object* v___x_571_; lean_object* v___x_572_; lean_object* v___x_573_; 
v___x_567_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__0));
v___x_568_ = lean_unsigned_to_nat(80u);
v___x_569_ = l_Lean_Json_pretty(v_x_562_, v___x_568_);
v___x_570_ = lean_string_append(v___x_567_, v___x_569_);
lean_dec_ref(v___x_569_);
v___x_571_ = ((lean_object*)(lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__1_spec__1_spec__2___closed__1));
v___x_572_ = lean_string_append(v___x_570_, v___x_571_);
v___x_573_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_573_, 0, v___x_572_);
return v___x_573_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7(lean_object* v_j_574_){
_start:
{
lean_object* v___x_575_; 
v___x_575_ = lp_choreo_Lean_Array_fromJson_x3f___at___00Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7_spec__10(v_j_574_);
if (lean_obj_tag(v___x_575_) == 0)
{
lean_object* v_a_576_; lean_object* v___x_578_; uint8_t v_isShared_579_; uint8_t v_isSharedCheck_583_; 
v_a_576_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_583_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_583_ == 0)
{
v___x_578_ = v___x_575_;
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
else
{
lean_inc(v_a_576_);
lean_dec(v___x_575_);
v___x_578_ = lean_box(0);
v_isShared_579_ = v_isSharedCheck_583_;
goto v_resetjp_577_;
}
v_resetjp_577_:
{
lean_object* v___x_581_; 
if (v_isShared_579_ == 0)
{
v___x_581_ = v___x_578_;
goto v_reusejp_580_;
}
else
{
lean_object* v_reuseFailAlloc_582_; 
v_reuseFailAlloc_582_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_582_, 0, v_a_576_);
v___x_581_ = v_reuseFailAlloc_582_;
goto v_reusejp_580_;
}
v_reusejp_580_:
{
return v___x_581_;
}
}
}
else
{
lean_object* v_a_584_; lean_object* v___x_586_; uint8_t v_isShared_587_; uint8_t v_isSharedCheck_592_; 
v_a_584_ = lean_ctor_get(v___x_575_, 0);
v_isSharedCheck_592_ = !lean_is_exclusive(v___x_575_);
if (v_isSharedCheck_592_ == 0)
{
v___x_586_ = v___x_575_;
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
else
{
lean_inc(v_a_584_);
lean_dec(v___x_575_);
v___x_586_ = lean_box(0);
v_isShared_587_ = v_isSharedCheck_592_;
goto v_resetjp_585_;
}
v_resetjp_585_:
{
lean_object* v___x_588_; lean_object* v___x_590_; 
v___x_588_ = lean_array_to_list(v_a_584_);
if (v_isShared_587_ == 0)
{
lean_ctor_set(v___x_586_, 0, v___x_588_);
v___x_590_ = v___x_586_;
goto v_reusejp_589_;
}
else
{
lean_object* v_reuseFailAlloc_591_; 
v_reuseFailAlloc_591_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_591_, 0, v___x_588_);
v___x_590_ = v_reuseFailAlloc_591_;
goto v_reusejp_589_;
}
v_reusejp_589_:
{
return v___x_590_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__5(lean_object* v_j_593_, lean_object* v_k_594_){
_start:
{
lean_object* v___x_595_; lean_object* v___x_596_; 
v___x_595_ = l_Lean_Json_getObjValD(v_j_593_, v_k_594_);
v___x_596_ = lp_choreo_Lean_List_fromJson_x3f___at___00Lean_Json_getObjValAs_x3f___at___00readScene_spec__5_spec__7(v___x_595_);
return v___x_596_;
}
}
LEAN_EXPORT lean_object* lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__5___boxed(lean_object* v_j_597_, lean_object* v_k_598_){
_start:
{
lean_object* v_res_599_; 
v_res_599_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__5(v_j_597_, v_k_598_);
lean_dec_ref(v_k_598_);
return v_res_599_;
}
}
LEAN_EXPORT lean_object* lp_choreo_readScene(lean_object* v_j_614_){
_start:
{
lean_object* v___x_615_; lean_object* v___x_616_; 
v___x_615_ = ((lean_object*)(lp_choreo_readScene___closed__0));
v___x_616_ = l_Lean_Json_getObjVal_x3f(v_j_614_, v___x_615_);
if (lean_obj_tag(v___x_616_) == 1)
{
lean_object* v_a_617_; lean_object* v___x_618_; lean_object* v___x_619_; 
v_a_617_ = lean_ctor_get(v___x_616_, 0);
lean_inc_n(v_a_617_, 2);
lean_dec_ref_known(v___x_616_, 1);
v___x_618_ = ((lean_object*)(lp_choreo_readScene___closed__1));
v___x_619_ = l_Lean_Json_getObjVal_x3f(v_a_617_, v___x_618_);
if (lean_obj_tag(v___x_619_) == 1)
{
lean_object* v_a_620_; 
v_a_620_ = lean_ctor_get(v___x_619_, 0);
lean_inc(v_a_620_);
lean_dec_ref_known(v___x_619_, 1);
if (lean_obj_tag(v_a_620_) == 4)
{
lean_object* v_elems_621_; lean_object* v___x_623_; uint8_t v_isShared_624_; uint8_t v_isSharedCheck_687_; 
v_elems_621_ = lean_ctor_get(v_a_620_, 0);
v_isSharedCheck_687_ = !lean_is_exclusive(v_a_620_);
if (v_isSharedCheck_687_ == 0)
{
v___x_623_ = v_a_620_;
v_isShared_624_ = v_isSharedCheck_687_;
goto v_resetjp_622_;
}
else
{
lean_inc(v_elems_621_);
lean_dec(v_a_620_);
v___x_623_ = lean_box(0);
v_isShared_624_ = v_isSharedCheck_687_;
goto v_resetjp_622_;
}
v_resetjp_622_:
{
lean_object* v___x_625_; lean_object* v___x_626_; lean_object* v_frames_627_; lean_object* v___y_629_; lean_object* v___y_630_; lean_object* v___y_631_; lean_object* v___y_632_; lean_object* v___y_633_; lean_object* v___y_634_; lean_object* v___y_635_; lean_object* v___y_641_; lean_object* v___y_642_; lean_object* v___y_643_; lean_object* v___y_644_; lean_object* v___y_645_; lean_object* v___y_646_; lean_object* v___y_652_; lean_object* v___y_653_; lean_object* v___y_654_; lean_object* v___y_668_; lean_object* v___y_669_; lean_object* v___y_674_; lean_object* v___x_680_; lean_object* v___x_681_; 
v___x_625_ = lean_array_to_list(v_elems_621_);
v___x_626_ = lean_box(0);
v_frames_627_ = lp_choreo_List_mapTR_loop___at___00readScene_spec__3(v___x_625_, v___x_626_);
v___x_680_ = ((lean_object*)(lp_choreo_readScene___closed__10));
lean_inc(v_a_617_);
v___x_681_ = l_Lean_Json_getObjVal_x3f(v_a_617_, v___x_680_);
if (lean_obj_tag(v___x_681_) == 1)
{
lean_object* v_a_682_; 
v_a_682_ = lean_ctor_get(v___x_681_, 0);
lean_inc(v_a_682_);
lean_dec_ref_known(v___x_681_, 1);
if (lean_obj_tag(v_a_682_) == 4)
{
lean_object* v_elems_683_; lean_object* v___x_684_; lean_object* v___x_685_; lean_object* v___x_686_; 
v_elems_683_ = lean_ctor_get(v_a_682_, 0);
lean_inc_ref(v_elems_683_);
lean_dec_ref_known(v_a_682_, 1);
v___x_684_ = lean_array_to_list(v_elems_683_);
v___x_685_ = ((lean_object*)(lp_choreo_readScene___closed__11));
v___x_686_ = lp_choreo_List_filterMapTR_go___at___00readScene_spec__7(v___x_684_, v___x_685_);
v___y_674_ = v___x_686_;
goto v___jp_673_;
}
else
{
lean_dec(v_a_682_);
goto v___jp_678_;
}
}
else
{
lean_dec_ref(v___x_681_);
goto v___jp_678_;
}
v___jp_628_:
{
lean_object* v___x_636_; lean_object* v___x_638_; 
v___x_636_ = lean_alloc_ctor(0, 9, 0);
lean_ctor_set(v___x_636_, 0, v_frames_627_);
lean_ctor_set(v___x_636_, 1, v___y_632_);
lean_ctor_set(v___x_636_, 2, v___y_630_);
lean_ctor_set(v___x_636_, 3, v___y_631_);
lean_ctor_set(v___x_636_, 4, v___y_633_);
lean_ctor_set(v___x_636_, 5, v___y_634_);
lean_ctor_set(v___x_636_, 6, v___y_635_);
lean_ctor_set(v___x_636_, 7, v___x_626_);
lean_ctor_set(v___x_636_, 8, v___y_629_);
if (v_isShared_624_ == 0)
{
lean_ctor_set_tag(v___x_623_, 1);
lean_ctor_set(v___x_623_, 0, v___x_636_);
v___x_638_ = v___x_623_;
goto v_reusejp_637_;
}
else
{
lean_object* v_reuseFailAlloc_639_; 
v_reuseFailAlloc_639_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_639_, 0, v___x_636_);
v___x_638_ = v_reuseFailAlloc_639_;
goto v_reusejp_637_;
}
v_reusejp_637_:
{
return v___x_638_;
}
}
v___jp_640_:
{
lean_object* v___x_647_; lean_object* v___x_648_; 
v___x_647_ = ((lean_object*)(lp_choreo_readScene___closed__2));
v___x_648_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_617_, v___x_647_);
if (lean_obj_tag(v___x_648_) == 0)
{
lean_object* v___x_649_; 
lean_dec_ref_known(v___x_648_, 1);
v___x_649_ = ((lean_object*)(lp_choreo_readScene___closed__3));
v___y_629_ = v___y_641_;
v___y_630_ = v___y_642_;
v___y_631_ = v___y_643_;
v___y_632_ = v___y_644_;
v___y_633_ = v___y_646_;
v___y_634_ = v___y_645_;
v___y_635_ = v___x_649_;
goto v___jp_628_;
}
else
{
lean_object* v_a_650_; 
v_a_650_ = lean_ctor_get(v___x_648_, 0);
lean_inc(v_a_650_);
lean_dec_ref_known(v___x_648_, 1);
v___y_629_ = v___y_641_;
v___y_630_ = v___y_642_;
v___y_631_ = v___y_643_;
v___y_632_ = v___y_644_;
v___y_633_ = v___y_646_;
v___y_634_ = v___y_645_;
v___y_635_ = v_a_650_;
goto v___jp_628_;
}
}
v___jp_651_:
{
uint8_t v___x_655_; 
v___x_655_ = l_List_isEmpty___redArg(v_frames_627_);
if (v___x_655_ == 0)
{
lean_object* v___x_656_; lean_object* v___x_657_; lean_object* v_bends_658_; lean_object* v___x_659_; lean_object* v___x_660_; lean_object* v___x_661_; lean_object* v___x_662_; lean_object* v___x_663_; lean_object* v___x_664_; 
v___x_656_ = lean_unsigned_to_nat(0u);
v___x_657_ = ((lean_object*)(lp_choreo_readScene___closed__4));
v_bends_658_ = lp_choreo_List_filterMapTR_go___at___00readScene_spec__4(v___y_654_, v___x_657_);
v___x_659_ = ((lean_object*)(lp_choreo_readScene___closed__5));
lean_inc_n(v_a_617_, 3);
v___x_660_ = lp_choreo_readScene___lam__0(v_a_617_, v___x_659_);
v___x_661_ = ((lean_object*)(lp_choreo_readScene___closed__6));
v___x_662_ = lp_choreo_readScene___lam__0(v_a_617_, v___x_661_);
v___x_663_ = ((lean_object*)(lp_choreo_readScene___closed__7));
v___x_664_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_a_617_, v___x_663_);
if (lean_obj_tag(v___x_664_) == 0)
{
lean_dec_ref_known(v___x_664_, 1);
v___y_641_ = v_bends_658_;
v___y_642_ = v___x_660_;
v___y_643_ = v___x_662_;
v___y_644_ = v___y_652_;
v___y_645_ = v___y_653_;
v___y_646_ = v___x_656_;
goto v___jp_640_;
}
else
{
lean_object* v_a_665_; 
v_a_665_ = lean_ctor_get(v___x_664_, 0);
lean_inc(v_a_665_);
lean_dec_ref_known(v___x_664_, 1);
v___y_641_ = v_bends_658_;
v___y_642_ = v___x_660_;
v___y_643_ = v___x_662_;
v___y_644_ = v___y_652_;
v___y_645_ = v___y_653_;
v___y_646_ = v_a_665_;
goto v___jp_640_;
}
}
else
{
lean_object* v___x_666_; 
lean_dec(v___y_654_);
lean_dec(v___y_653_);
lean_dec(v___y_652_);
lean_dec(v_frames_627_);
lean_del_object(v___x_623_);
lean_dec(v_a_617_);
v___x_666_ = lean_box(0);
return v___x_666_;
}
}
v___jp_667_:
{
lean_object* v___x_670_; lean_object* v___x_671_; 
v___x_670_ = ((lean_object*)(lp_choreo_readScene___closed__8));
lean_inc(v_a_617_);
v___x_671_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__5(v_a_617_, v___x_670_);
if (lean_obj_tag(v___x_671_) == 0)
{
lean_dec_ref_known(v___x_671_, 1);
v___y_652_ = v___y_668_;
v___y_653_ = v___y_669_;
v___y_654_ = v___x_626_;
goto v___jp_651_;
}
else
{
lean_object* v_a_672_; 
v_a_672_ = lean_ctor_get(v___x_671_, 0);
lean_inc(v_a_672_);
lean_dec_ref_known(v___x_671_, 1);
v___y_652_ = v___y_668_;
v___y_653_ = v___y_669_;
v___y_654_ = v_a_672_;
goto v___jp_651_;
}
}
v___jp_673_:
{
lean_object* v___x_675_; lean_object* v___x_676_; 
v___x_675_ = ((lean_object*)(lp_choreo_readScene___closed__9));
lean_inc(v_a_617_);
v___x_676_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6(v_a_617_, v___x_675_);
if (lean_obj_tag(v___x_676_) == 0)
{
lean_dec_ref_known(v___x_676_, 1);
v___y_668_ = v___y_674_;
v___y_669_ = v___x_626_;
goto v___jp_667_;
}
else
{
lean_object* v_a_677_; 
v_a_677_ = lean_ctor_get(v___x_676_, 0);
lean_inc(v_a_677_);
lean_dec_ref_known(v___x_676_, 1);
v___y_668_ = v___y_674_;
v___y_669_ = v_a_677_;
goto v___jp_667_;
}
}
v___jp_678_:
{
lean_object* v___x_679_; 
lean_inc(v_frames_627_);
v___x_679_ = lp_choreo_Choreo_detectRules(v_frames_627_);
v___y_674_ = v___x_679_;
goto v___jp_673_;
}
}
}
else
{
lean_object* v___x_688_; 
lean_dec(v_a_620_);
lean_dec(v_a_617_);
v___x_688_ = lean_box(0);
return v___x_688_;
}
}
else
{
lean_object* v___x_689_; 
lean_dec_ref(v___x_619_);
lean_dec(v_a_617_);
v___x_689_ = lean_box(0);
return v___x_689_;
}
}
else
{
lean_object* v___x_690_; 
lean_dec_ref(v___x_616_);
v___x_690_ = lean_box(0);
return v___x_690_;
}
}
}
LEAN_EXPORT lean_object* lp_choreo_namesOf(lean_object* v_j_692_, lean_object* v_i_693_){
_start:
{
lean_object* v___y_695_; lean_object* v___x_705_; lean_object* v___x_706_; 
v___x_705_ = ((lean_object*)(lp_choreo_namesOf___closed__0));
v___x_706_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6(v_j_692_, v___x_705_);
if (lean_obj_tag(v___x_706_) == 0)
{
lean_object* v___x_707_; 
lean_dec_ref_known(v___x_706_, 1);
v___x_707_ = lean_box(0);
v___y_695_ = v___x_707_;
goto v___jp_694_;
}
else
{
lean_object* v_a_708_; 
v_a_708_ = lean_ctor_get(v___x_706_, 0);
lean_inc(v_a_708_);
lean_dec_ref_known(v___x_706_, 1);
v___y_695_ = v_a_708_;
goto v___jp_694_;
}
v___jp_694_:
{
lean_object* v_team_696_; lean_object* v___x_697_; uint8_t v___x_698_; 
v_team_696_ = lean_array_mk(v___y_695_);
v___x_697_ = lean_array_get_size(v_team_696_);
v___x_698_ = lean_nat_dec_lt(v_i_693_, v___x_697_);
if (v___x_698_ == 0)
{
lean_object* v___x_699_; 
lean_dec_ref(v_team_696_);
v___x_699_ = lp_choreo_Main_nameOf(v_i_693_);
return v___x_699_;
}
else
{
lean_object* v___x_700_; lean_object* v___x_701_; lean_object* v___x_702_; uint8_t v___x_703_; 
v___x_700_ = lean_array_fget(v_team_696_, v_i_693_);
lean_dec_ref(v_team_696_);
v___x_701_ = lean_string_utf8_byte_size(v___x_700_);
v___x_702_ = lean_unsigned_to_nat(0u);
v___x_703_ = lean_nat_dec_eq(v___x_701_, v___x_702_);
if (v___x_703_ == 0)
{
return v___x_700_;
}
else
{
lean_object* v___x_704_; 
lean_dec(v___x_700_);
v___x_704_ = lp_choreo_Main_nameOf(v_i_693_);
return v___x_704_;
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_namesOf___boxed(lean_object* v_j_709_, lean_object* v_i_710_){
_start:
{
lean_object* v_res_711_; 
v_res_711_ = lp_choreo_namesOf(v_j_709_, v_i_710_);
lean_dec(v_i_710_);
return v_res_711_;
}
}
LEAN_EXPORT lean_object* lp_choreo_builtOf___lam__0(lean_object* v_team_712_, lean_object* v_i_713_){
_start:
{
lean_object* v___x_714_; uint8_t v___x_715_; 
v___x_714_ = lean_array_get_size(v_team_712_);
v___x_715_ = lean_nat_dec_lt(v_i_713_, v___x_714_);
if (v___x_715_ == 0)
{
lean_object* v___x_716_; 
v___x_716_ = lp_choreo_Main_nameOf(v_i_713_);
return v___x_716_;
}
else
{
lean_object* v___x_717_; lean_object* v___x_718_; lean_object* v___x_719_; uint8_t v___x_720_; 
v___x_717_ = lean_array_fget_borrowed(v_team_712_, v_i_713_);
v___x_718_ = lean_string_utf8_byte_size(v___x_717_);
v___x_719_ = lean_unsigned_to_nat(0u);
v___x_720_ = lean_nat_dec_eq(v___x_718_, v___x_719_);
if (v___x_720_ == 0)
{
lean_inc(v___x_717_);
return v___x_717_;
}
else
{
lean_object* v___x_721_; 
v___x_721_ = lp_choreo_Main_nameOf(v_i_713_);
return v___x_721_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_builtOf___lam__0___boxed(lean_object* v_team_722_, lean_object* v_i_723_){
_start:
{
lean_object* v_res_724_; 
v_res_724_ = lp_choreo_builtOf___lam__0(v_team_722_, v_i_723_);
lean_dec(v_i_723_);
lean_dec_ref(v_team_722_);
return v_res_724_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_filterTR_loop___at___00builtOf_spec__0(lean_object* v_a_725_, lean_object* v_a_726_){
_start:
{
if (lean_obj_tag(v_a_725_) == 0)
{
lean_object* v___x_727_; 
v___x_727_ = l_List_reverse___redArg(v_a_726_);
return v___x_727_;
}
else
{
lean_object* v_head_728_; lean_object* v_snd_729_; lean_object* v_tail_730_; lean_object* v___x_732_; uint8_t v_isShared_733_; uint8_t v_isSharedCheck_741_; 
v_head_728_ = lean_ctor_get(v_a_725_, 0);
lean_inc(v_head_728_);
v_snd_729_ = lean_ctor_get(v_head_728_, 1);
v_tail_730_ = lean_ctor_get(v_a_725_, 1);
v_isSharedCheck_741_ = !lean_is_exclusive(v_a_725_);
if (v_isSharedCheck_741_ == 0)
{
lean_object* v_unused_742_; 
v_unused_742_ = lean_ctor_get(v_a_725_, 0);
lean_dec(v_unused_742_);
v___x_732_ = v_a_725_;
v_isShared_733_ = v_isSharedCheck_741_;
goto v_resetjp_731_;
}
else
{
lean_inc(v_tail_730_);
lean_dec(v_a_725_);
v___x_732_ = lean_box(0);
v_isShared_733_ = v_isSharedCheck_741_;
goto v_resetjp_731_;
}
v_resetjp_731_:
{
lean_object* v_snd_734_; uint8_t v___x_735_; 
v_snd_734_ = lean_ctor_get(v_snd_729_, 1);
v___x_735_ = lp_choreo_Choreo_Ask_isMovement(v_snd_734_);
if (v___x_735_ == 0)
{
lean_del_object(v___x_732_);
lean_dec(v_head_728_);
v_a_725_ = v_tail_730_;
goto _start;
}
else
{
lean_object* v___x_738_; 
if (v_isShared_733_ == 0)
{
lean_ctor_set(v___x_732_, 1, v_a_726_);
v___x_738_ = v___x_732_;
goto v_reusejp_737_;
}
else
{
lean_object* v_reuseFailAlloc_740_; 
v_reuseFailAlloc_740_ = lean_alloc_ctor(1, 2, 0);
lean_ctor_set(v_reuseFailAlloc_740_, 0, v_head_728_);
lean_ctor_set(v_reuseFailAlloc_740_, 1, v_a_726_);
v___x_738_ = v_reuseFailAlloc_740_;
goto v_reusejp_737_;
}
v_reusejp_737_:
{
v_a_725_ = v_tail_730_;
v_a_726_ = v___x_738_;
goto _start;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_builtOf(lean_object* v_j_748_){
_start:
{
lean_object* v___y_750_; lean_object* v___y_751_; lean_object* v___y_752_; lean_object* v___y_777_; lean_object* v___y_778_; lean_object* v___y_784_; lean_object* v___y_785_; lean_object* v___y_786_; lean_object* v___y_787_; lean_object* v___y_788_; lean_object* v___y_789_; lean_object* v___y_799_; lean_object* v___y_800_; lean_object* v___y_801_; lean_object* v___y_802_; lean_object* v_genre_803_; lean_object* v_steps_804_; lean_object* v_gap_805_; lean_object* v___y_809_; lean_object* v___y_810_; lean_object* v___y_811_; lean_object* v___y_838_; lean_object* v___y_839_; lean_object* v___y_870_; lean_object* v___x_875_; lean_object* v___x_876_; 
v___x_875_ = ((lean_object*)(lp_choreo_builtOf___closed__4));
lean_inc(v_j_748_);
v___x_876_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_j_748_, v___x_875_);
if (lean_obj_tag(v___x_876_) == 0)
{
lean_object* v___x_877_; 
lean_dec_ref_known(v___x_876_, 1);
v___x_877_ = ((lean_object*)(lp_choreo_readScene___closed__3));
v___y_870_ = v___x_877_;
goto v___jp_869_;
}
else
{
lean_object* v_a_878_; 
v_a_878_ = lean_ctor_get(v___x_876_, 0);
lean_inc(v_a_878_);
lean_dec_ref_known(v___x_876_, 1);
v___y_870_ = v_a_878_;
goto v___jp_869_;
}
v___jp_749_:
{
lean_object* v_plan_753_; lean_object* v_routine_754_; lean_object* v_labels_755_; lean_object* v_asks_756_; lean_object* v_rejected_757_; lean_object* v_keys_758_; lean_object* v_error_759_; lean_object* v_scene_760_; lean_object* v_derived_761_; lean_object* v_heard_762_; lean_object* v_minSeconds_763_; lean_object* v_dropped_764_; lean_object* v___x_766_; uint8_t v_isShared_767_; uint8_t v_isSharedCheck_774_; 
v_plan_753_ = lean_ctor_get(v___y_750_, 0);
v_routine_754_ = lean_ctor_get(v___y_750_, 1);
v_labels_755_ = lean_ctor_get(v___y_750_, 2);
v_asks_756_ = lean_ctor_get(v___y_750_, 3);
v_rejected_757_ = lean_ctor_get(v___y_750_, 4);
v_keys_758_ = lean_ctor_get(v___y_750_, 5);
v_error_759_ = lean_ctor_get(v___y_750_, 6);
v_scene_760_ = lean_ctor_get(v___y_750_, 7);
v_derived_761_ = lean_ctor_get(v___y_750_, 8);
v_heard_762_ = lean_ctor_get(v___y_750_, 9);
v_minSeconds_763_ = lean_ctor_get(v___y_750_, 10);
v_dropped_764_ = lean_ctor_get(v___y_750_, 11);
v_isSharedCheck_774_ = !lean_is_exclusive(v___y_750_);
if (v_isSharedCheck_774_ == 0)
{
lean_object* v_unused_775_; 
v_unused_775_ = lean_ctor_get(v___y_750_, 12);
lean_dec(v_unused_775_);
v___x_766_ = v___y_750_;
v_isShared_767_ = v_isSharedCheck_774_;
goto v_resetjp_765_;
}
else
{
lean_inc(v_dropped_764_);
lean_inc(v_minSeconds_763_);
lean_inc(v_heard_762_);
lean_inc(v_derived_761_);
lean_inc(v_scene_760_);
lean_inc(v_error_759_);
lean_inc(v_keys_758_);
lean_inc(v_rejected_757_);
lean_inc(v_asks_756_);
lean_inc(v_labels_755_);
lean_inc(v_routine_754_);
lean_inc(v_plan_753_);
lean_dec(v___y_750_);
v___x_766_ = lean_box(0);
v_isShared_767_ = v_isSharedCheck_774_;
goto v_resetjp_765_;
}
v_resetjp_765_:
{
lean_object* v___x_768_; lean_object* v___x_769_; lean_object* v___x_771_; 
v___x_768_ = lean_box(0);
v___x_769_ = lp_choreo_List_filterTR_loop___at___00builtOf_spec__0(v_asks_756_, v___x_768_);
if (v_isShared_767_ == 0)
{
lean_ctor_set(v___x_766_, 12, v___y_752_);
lean_ctor_set(v___x_766_, 3, v___x_769_);
v___x_771_ = v___x_766_;
goto v_reusejp_770_;
}
else
{
lean_object* v_reuseFailAlloc_773_; 
v_reuseFailAlloc_773_ = lean_alloc_ctor(0, 13, 0);
lean_ctor_set(v_reuseFailAlloc_773_, 0, v_plan_753_);
lean_ctor_set(v_reuseFailAlloc_773_, 1, v_routine_754_);
lean_ctor_set(v_reuseFailAlloc_773_, 2, v_labels_755_);
lean_ctor_set(v_reuseFailAlloc_773_, 3, v___x_769_);
lean_ctor_set(v_reuseFailAlloc_773_, 4, v_rejected_757_);
lean_ctor_set(v_reuseFailAlloc_773_, 5, v_keys_758_);
lean_ctor_set(v_reuseFailAlloc_773_, 6, v_error_759_);
lean_ctor_set(v_reuseFailAlloc_773_, 7, v_scene_760_);
lean_ctor_set(v_reuseFailAlloc_773_, 8, v_derived_761_);
lean_ctor_set(v_reuseFailAlloc_773_, 9, v_heard_762_);
lean_ctor_set(v_reuseFailAlloc_773_, 10, v_minSeconds_763_);
lean_ctor_set(v_reuseFailAlloc_773_, 11, v_dropped_764_);
lean_ctor_set(v_reuseFailAlloc_773_, 12, v___y_752_);
v___x_771_ = v_reuseFailAlloc_773_;
goto v_reusejp_770_;
}
v_reusejp_770_:
{
lean_object* v___x_772_; 
v___x_772_ = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(v___x_772_, 0, v___x_771_);
lean_ctor_set(v___x_772_, 1, v___y_751_);
return v___x_772_;
}
}
}
v___jp_776_:
{
lean_object* v___x_779_; lean_object* v___x_780_; 
v___x_779_ = ((lean_object*)(lp_choreo_builtOf___closed__0));
v___x_780_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_j_748_, v___x_779_);
if (lean_obj_tag(v___x_780_) == 0)
{
lean_object* v___x_781_; 
lean_dec_ref_known(v___x_780_, 1);
v___x_781_ = lean_obj_once(&lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0, &lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0_once, _init_lp_choreo_List_filterMapTR_go___at___00readScene_spec__7___lam__0___closed__0);
v___y_750_ = v___y_778_;
v___y_751_ = v___y_777_;
v___y_752_ = v___x_781_;
goto v___jp_749_;
}
else
{
lean_object* v_a_782_; 
v_a_782_ = lean_ctor_get(v___x_780_, 0);
lean_inc(v_a_782_);
lean_dec_ref_known(v___x_780_, 1);
v___y_750_ = v___y_778_;
v___y_751_ = v___y_777_;
v___y_752_ = v_a_782_;
goto v___jp_749_;
}
}
v___jp_783_:
{
lean_object* v___x_790_; 
lean_inc(v_j_748_);
v___x_790_ = lp_choreo_readScene(v_j_748_);
if (lean_obj_tag(v___x_790_) == 0)
{
lean_object* v___x_791_; 
v___x_791_ = lp_choreo_Choreo_parseScene(v___y_786_);
if (lean_obj_tag(v___x_791_) == 0)
{
lean_object* v___x_792_; lean_object* v___x_793_; 
lean_dec(v___y_789_);
lean_dec_ref(v___y_785_);
lean_dec(v___y_784_);
lean_inc(v_j_748_);
v___x_792_ = lp_choreo_readOverrides(v_j_748_);
lean_inc_ref(v___y_788_);
v___x_793_ = lp_choreo_Choreo_buildPlan(v___y_787_, v___y_788_, v___x_792_);
v___y_777_ = v___y_788_;
v___y_778_ = v___x_793_;
goto v___jp_776_;
}
else
{
lean_object* v_val_794_; lean_object* v___x_795_; 
lean_dec_ref(v___y_787_);
v_val_794_ = lean_ctor_get(v___x_791_, 0);
lean_inc(v_val_794_);
lean_dec_ref_known(v___x_791_, 1);
v___x_795_ = lp_choreo_Choreo_buildScene(v_val_794_, v___y_785_, v___y_789_, v___y_784_);
v___y_777_ = v___y_788_;
v___y_778_ = v___x_795_;
goto v___jp_776_;
}
}
else
{
lean_object* v_val_796_; lean_object* v___x_797_; 
lean_dec_ref(v___y_787_);
lean_dec_ref(v___y_786_);
v_val_796_ = lean_ctor_get(v___x_790_, 0);
lean_inc(v_val_796_);
lean_dec_ref_known(v___x_790_, 1);
v___x_797_ = lp_choreo_Choreo_buildScene(v_val_796_, v___y_785_, v___y_789_, v___y_784_);
v___y_777_ = v___y_788_;
v___y_778_ = v___x_797_;
goto v___jp_776_;
}
}
v___jp_798_:
{
uint8_t v___x_806_; 
v___x_806_ = l_List_isEmpty___redArg(v_steps_804_);
if (v___x_806_ == 0)
{
lean_dec_ref(v_genre_803_);
v___y_784_ = v_gap_805_;
v___y_785_ = v___y_799_;
v___y_786_ = v___y_800_;
v___y_787_ = v___y_802_;
v___y_788_ = v___y_801_;
v___y_789_ = v_steps_804_;
goto v___jp_783_;
}
else
{
lean_object* v___x_807_; 
lean_dec(v_steps_804_);
v___x_807_ = lp_choreo_Choreo_stepsForGenre(v_genre_803_);
lean_dec_ref(v_genre_803_);
v___y_784_ = v_gap_805_;
v___y_785_ = v___y_799_;
v___y_786_ = v___y_800_;
v___y_787_ = v___y_802_;
v___y_788_ = v___y_801_;
v___y_789_ = v___x_807_;
goto v___jp_783_;
}
}
v___jp_808_:
{
lean_object* v___x_812_; lean_object* v___x_813_; 
v___x_812_ = ((lean_object*)(lp_choreo_builtOf___closed__1));
lean_inc(v_j_748_);
v___x_813_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__2(v_j_748_, v___x_812_);
if (lean_obj_tag(v___x_813_) == 1)
{
lean_object* v_a_814_; lean_object* v_seconds_815_; lean_object* v_bpm_816_; lean_object* v_genre_817_; lean_object* v_n_818_; lean_object* v_left_819_; lean_object* v_right_820_; lean_object* v_moves_821_; lean_object* v_steps_822_; lean_object* v_extra_823_; uint8_t v_sweep_824_; lean_object* v_waiting_825_; lean_object* v___x_827_; uint8_t v_isShared_828_; uint8_t v_isSharedCheck_832_; 
v_a_814_ = lean_ctor_get(v___x_813_, 0);
lean_inc(v_a_814_);
lean_dec_ref_known(v___x_813_, 1);
v_seconds_815_ = lean_ctor_get(v___y_811_, 0);
v_bpm_816_ = lean_ctor_get(v___y_811_, 1);
v_genre_817_ = lean_ctor_get(v___y_811_, 2);
v_n_818_ = lean_ctor_get(v___y_811_, 3);
v_left_819_ = lean_ctor_get(v___y_811_, 4);
v_right_820_ = lean_ctor_get(v___y_811_, 5);
v_moves_821_ = lean_ctor_get(v___y_811_, 6);
v_steps_822_ = lean_ctor_get(v___y_811_, 7);
v_extra_823_ = lean_ctor_get(v___y_811_, 9);
v_sweep_824_ = lean_ctor_get_uint8(v___y_811_, sizeof(void*)*11);
v_waiting_825_ = lean_ctor_get(v___y_811_, 10);
v_isSharedCheck_832_ = !lean_is_exclusive(v___y_811_);
if (v_isSharedCheck_832_ == 0)
{
lean_object* v_unused_833_; 
v_unused_833_ = lean_ctor_get(v___y_811_, 8);
lean_dec(v_unused_833_);
v___x_827_ = v___y_811_;
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
else
{
lean_inc(v_waiting_825_);
lean_inc(v_extra_823_);
lean_inc(v_steps_822_);
lean_inc(v_moves_821_);
lean_inc(v_right_820_);
lean_inc(v_left_819_);
lean_inc(v_n_818_);
lean_inc(v_genre_817_);
lean_inc(v_bpm_816_);
lean_inc(v_seconds_815_);
lean_dec(v___y_811_);
v___x_827_ = lean_box(0);
v_isShared_828_ = v_isSharedCheck_832_;
goto v_resetjp_826_;
}
v_resetjp_826_:
{
lean_object* v___x_830_; 
lean_inc(v_a_814_);
lean_inc(v_steps_822_);
lean_inc_ref(v_genre_817_);
if (v_isShared_828_ == 0)
{
lean_ctor_set(v___x_827_, 8, v_a_814_);
v___x_830_ = v___x_827_;
goto v_reusejp_829_;
}
else
{
lean_object* v_reuseFailAlloc_831_; 
v_reuseFailAlloc_831_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_831_, 0, v_seconds_815_);
lean_ctor_set(v_reuseFailAlloc_831_, 1, v_bpm_816_);
lean_ctor_set(v_reuseFailAlloc_831_, 2, v_genre_817_);
lean_ctor_set(v_reuseFailAlloc_831_, 3, v_n_818_);
lean_ctor_set(v_reuseFailAlloc_831_, 4, v_left_819_);
lean_ctor_set(v_reuseFailAlloc_831_, 5, v_right_820_);
lean_ctor_set(v_reuseFailAlloc_831_, 6, v_moves_821_);
lean_ctor_set(v_reuseFailAlloc_831_, 7, v_steps_822_);
lean_ctor_set(v_reuseFailAlloc_831_, 8, v_a_814_);
lean_ctor_set(v_reuseFailAlloc_831_, 9, v_extra_823_);
lean_ctor_set(v_reuseFailAlloc_831_, 10, v_waiting_825_);
lean_ctor_set_uint8(v_reuseFailAlloc_831_, sizeof(void*)*11, v_sweep_824_);
v___x_830_ = v_reuseFailAlloc_831_;
goto v_reusejp_829_;
}
v_reusejp_829_:
{
lean_inc_ref(v___y_810_);
v___y_799_ = v___y_810_;
v___y_800_ = v___y_809_;
v___y_801_ = v___y_810_;
v___y_802_ = v___x_830_;
v_genre_803_ = v_genre_817_;
v_steps_804_ = v_steps_822_;
v_gap_805_ = v_a_814_;
goto v___jp_798_;
}
}
}
else
{
lean_object* v_genre_834_; lean_object* v_steps_835_; lean_object* v_gap_836_; 
lean_dec_ref(v___x_813_);
v_genre_834_ = lean_ctor_get(v___y_811_, 2);
lean_inc_ref(v_genre_834_);
v_steps_835_ = lean_ctor_get(v___y_811_, 7);
lean_inc(v_steps_835_);
v_gap_836_ = lean_ctor_get(v___y_811_, 8);
lean_inc(v_gap_836_);
lean_inc_ref(v___y_810_);
v___y_799_ = v___y_810_;
v___y_800_ = v___y_809_;
v___y_801_ = v___y_810_;
v___y_802_ = v___y_811_;
v_genre_803_ = v_genre_834_;
v_steps_804_ = v_steps_835_;
v_gap_805_ = v_gap_836_;
goto v___jp_798_;
}
}
v___jp_837_:
{
lean_object* v_team_840_; lean_object* v_nameOf_841_; lean_object* v_plan_842_; lean_object* v___x_843_; lean_object* v___x_844_; 
v_team_840_ = lean_array_mk(v___y_839_);
v_nameOf_841_ = lean_alloc_closure((void*)(lp_choreo_builtOf___lam__0___boxed), 2, 1);
lean_closure_set(v_nameOf_841_, 0, v_team_840_);
lean_inc_ref(v___y_838_);
v_plan_842_ = lp_choreo_Choreo_parsePlan(v___y_838_);
v___x_843_ = ((lean_object*)(lp_choreo_builtOf___closed__2));
lean_inc(v_j_748_);
v___x_844_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_j_748_, v___x_843_);
if (lean_obj_tag(v___x_844_) == 1)
{
lean_object* v_a_845_; lean_object* v___x_846_; lean_object* v___x_847_; 
v_a_845_ = lean_ctor_get(v___x_844_, 0);
lean_inc(v_a_845_);
lean_dec_ref_known(v___x_844_, 1);
v___x_846_ = ((lean_object*)(lp_choreo_readScene___closed__7));
lean_inc(v_j_748_);
v___x_847_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__1(v_j_748_, v___x_846_);
if (lean_obj_tag(v___x_847_) == 1)
{
lean_object* v_a_848_; lean_object* v_n_849_; lean_object* v_left_850_; lean_object* v_right_851_; lean_object* v_moves_852_; lean_object* v_steps_853_; lean_object* v_gap_854_; lean_object* v_extra_855_; uint8_t v_sweep_856_; lean_object* v_waiting_857_; lean_object* v___x_859_; uint8_t v_isShared_860_; uint8_t v_isSharedCheck_865_; 
v_a_848_ = lean_ctor_get(v___x_847_, 0);
lean_inc(v_a_848_);
lean_dec_ref_known(v___x_847_, 1);
v_n_849_ = lean_ctor_get(v_plan_842_, 3);
v_left_850_ = lean_ctor_get(v_plan_842_, 4);
v_right_851_ = lean_ctor_get(v_plan_842_, 5);
v_moves_852_ = lean_ctor_get(v_plan_842_, 6);
v_steps_853_ = lean_ctor_get(v_plan_842_, 7);
v_gap_854_ = lean_ctor_get(v_plan_842_, 8);
v_extra_855_ = lean_ctor_get(v_plan_842_, 9);
v_sweep_856_ = lean_ctor_get_uint8(v_plan_842_, sizeof(void*)*11);
v_waiting_857_ = lean_ctor_get(v_plan_842_, 10);
v_isSharedCheck_865_ = !lean_is_exclusive(v_plan_842_);
if (v_isSharedCheck_865_ == 0)
{
lean_object* v_unused_866_; lean_object* v_unused_867_; lean_object* v_unused_868_; 
v_unused_866_ = lean_ctor_get(v_plan_842_, 2);
lean_dec(v_unused_866_);
v_unused_867_ = lean_ctor_get(v_plan_842_, 1);
lean_dec(v_unused_867_);
v_unused_868_ = lean_ctor_get(v_plan_842_, 0);
lean_dec(v_unused_868_);
v___x_859_ = v_plan_842_;
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
else
{
lean_inc(v_waiting_857_);
lean_inc(v_extra_855_);
lean_inc(v_gap_854_);
lean_inc(v_steps_853_);
lean_inc(v_moves_852_);
lean_inc(v_right_851_);
lean_inc(v_left_850_);
lean_inc(v_n_849_);
lean_dec(v_plan_842_);
v___x_859_ = lean_box(0);
v_isShared_860_ = v_isSharedCheck_865_;
goto v_resetjp_858_;
}
v_resetjp_858_:
{
lean_object* v___x_861_; lean_object* v___x_863_; 
v___x_861_ = ((lean_object*)(lp_choreo_builtOf___closed__3));
if (v_isShared_860_ == 0)
{
lean_ctor_set(v___x_859_, 2, v___x_861_);
lean_ctor_set(v___x_859_, 1, v_a_845_);
lean_ctor_set(v___x_859_, 0, v_a_848_);
v___x_863_ = v___x_859_;
goto v_reusejp_862_;
}
else
{
lean_object* v_reuseFailAlloc_864_; 
v_reuseFailAlloc_864_ = lean_alloc_ctor(0, 11, 1);
lean_ctor_set(v_reuseFailAlloc_864_, 0, v_a_848_);
lean_ctor_set(v_reuseFailAlloc_864_, 1, v_a_845_);
lean_ctor_set(v_reuseFailAlloc_864_, 2, v___x_861_);
lean_ctor_set(v_reuseFailAlloc_864_, 3, v_n_849_);
lean_ctor_set(v_reuseFailAlloc_864_, 4, v_left_850_);
lean_ctor_set(v_reuseFailAlloc_864_, 5, v_right_851_);
lean_ctor_set(v_reuseFailAlloc_864_, 6, v_moves_852_);
lean_ctor_set(v_reuseFailAlloc_864_, 7, v_steps_853_);
lean_ctor_set(v_reuseFailAlloc_864_, 8, v_gap_854_);
lean_ctor_set(v_reuseFailAlloc_864_, 9, v_extra_855_);
lean_ctor_set(v_reuseFailAlloc_864_, 10, v_waiting_857_);
lean_ctor_set_uint8(v_reuseFailAlloc_864_, sizeof(void*)*11, v_sweep_856_);
v___x_863_ = v_reuseFailAlloc_864_;
goto v_reusejp_862_;
}
v_reusejp_862_:
{
v___y_809_ = v___y_838_;
v___y_810_ = v_nameOf_841_;
v___y_811_ = v___x_863_;
goto v___jp_808_;
}
}
}
else
{
lean_dec_ref(v___x_847_);
lean_dec(v_a_845_);
v___y_809_ = v___y_838_;
v___y_810_ = v_nameOf_841_;
v___y_811_ = v_plan_842_;
goto v___jp_808_;
}
}
else
{
lean_dec_ref(v___x_844_);
v___y_809_ = v___y_838_;
v___y_810_ = v_nameOf_841_;
v___y_811_ = v_plan_842_;
goto v___jp_808_;
}
}
v___jp_869_:
{
lean_object* v___x_871_; lean_object* v___x_872_; 
v___x_871_ = ((lean_object*)(lp_choreo_namesOf___closed__0));
lean_inc(v_j_748_);
v___x_872_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00readScene_spec__6(v_j_748_, v___x_871_);
if (lean_obj_tag(v___x_872_) == 0)
{
lean_object* v___x_873_; 
lean_dec_ref_known(v___x_872_, 1);
v___x_873_ = lean_box(0);
v___y_838_ = v___y_870_;
v___y_839_ = v___x_873_;
goto v___jp_837_;
}
else
{
lean_object* v_a_874_; 
v_a_874_ = lean_ctor_get(v___x_872_, 0);
lean_inc(v_a_874_);
lean_dec_ref_known(v___x_872_, 1);
v___y_838_ = v___y_870_;
v___y_839_ = v_a_874_;
goto v___jp_837_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg(lean_object* v_head_881_, lean_object* v_as_x27_882_, lean_object* v_b_883_){
_start:
{
if (lean_obj_tag(v_as_x27_882_) == 0)
{
lean_object* v___x_885_; 
lean_dec_ref(v_head_881_);
v___x_885_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v___x_885_, 0, v_b_883_);
return v___x_885_;
}
else
{
lean_object* v_head_886_; lean_object* v_tail_887_; lean_object* v_fst_888_; lean_object* v_snd_889_; lean_object* v___x_890_; lean_object* v___x_891_; lean_object* v___x_892_; lean_object* v___x_893_; lean_object* v___x_894_; lean_object* v___x_895_; lean_object* v___x_896_; lean_object* v___x_897_; lean_object* v___x_898_; 
v_head_886_ = lean_ctor_get(v_as_x27_882_, 0);
v_tail_887_ = lean_ctor_get(v_as_x27_882_, 1);
v_fst_888_ = lean_ctor_get(v_head_886_, 0);
v_snd_889_ = lean_ctor_get(v_head_886_, 1);
v___x_890_ = lean_box(0);
v___x_891_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__0));
lean_inc_ref(v_head_881_);
v___x_892_ = lean_string_append(v_head_881_, v___x_891_);
lean_inc_n(v_snd_889_, 2);
v___x_893_ = l_Nat_reprFast(v_snd_889_);
v___x_894_ = lean_string_append(v___x_892_, v___x_893_);
lean_dec_ref(v___x_893_);
v___x_895_ = ((lean_object*)(lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___closed__1));
v___x_896_ = lean_string_append(v___x_894_, v___x_895_);
lean_inc(v_fst_888_);
v___x_897_ = lp_choreo_Choreo_stressSource(v_fst_888_, v_snd_889_);
v___x_898_ = l_IO_FS_writeFile(v___x_896_, v___x_897_);
lean_dec_ref(v___x_897_);
lean_dec_ref(v___x_896_);
if (lean_obj_tag(v___x_898_) == 0)
{
lean_dec_ref_known(v___x_898_, 1);
v_as_x27_882_ = v_tail_887_;
v_b_883_ = v___x_890_;
goto _start;
}
else
{
lean_dec_ref(v_head_881_);
return v___x_898_;
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg___boxed(lean_object* v_head_900_, lean_object* v_as_x27_901_, lean_object* v_b_902_, lean_object* v___y_903_){
_start:
{
lean_object* v_res_904_; 
v_res_904_ = lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg(v_head_900_, v_as_x27_901_, v_b_902_);
lean_dec(v_as_x27_901_);
return v_res_904_;
}
}
LEAN_EXPORT lean_object* lp_choreo_IO_print___at___00IO_println___at___00main_spec__1_spec__1(lean_object* v_s_905_){
_start:
{
lean_object* v___x_907_; lean_object* v_putStr_908_; lean_object* v___x_909_; 
v___x_907_ = lean_get_stdout();
v_putStr_908_ = lean_ctor_get(v___x_907_, 4);
lean_inc_ref(v_putStr_908_);
lean_dec_ref(v___x_907_);
v___x_909_ = lean_apply_2(v_putStr_908_, v_s_905_, lean_box(0));
return v___x_909_;
}
}
LEAN_EXPORT lean_object* lp_choreo_IO_print___at___00IO_println___at___00main_spec__1_spec__1___boxed(lean_object* v_s_910_, lean_object* v_a_911_){
_start:
{
lean_object* v_res_912_; 
v_res_912_ = lp_choreo_IO_print___at___00IO_println___at___00main_spec__1_spec__1(v_s_910_);
return v_res_912_;
}
}
LEAN_EXPORT lean_object* lp_choreo_IO_println___at___00main_spec__1(lean_object* v_s_913_){
_start:
{
uint32_t v___x_915_; lean_object* v___x_916_; lean_object* v___x_917_; 
v___x_915_ = 10;
v___x_916_ = lean_string_push(v_s_913_, v___x_915_);
v___x_917_ = lp_choreo_IO_print___at___00IO_println___at___00main_spec__1_spec__1(v___x_916_);
return v___x_917_;
}
}
LEAN_EXPORT lean_object* lp_choreo_IO_println___at___00main_spec__1___boxed(lean_object* v_s_918_, lean_object* v_a_919_){
_start:
{
lean_object* v_res_920_; 
v_res_920_ = lp_choreo_IO_println___at___00main_spec__1(v_s_918_);
return v_res_920_;
}
}
static lean_object* _init_lp_choreo_main___boxed__const__1(void){
_start:
{
uint32_t v___x_926_; lean_object* v___x_927_; 
v___x_926_ = 1;
v___x_927_ = lean_box_uint32(v___x_926_);
return v___x_927_;
}
}
static lean_object* _init_lp_choreo_main___boxed__const__2(void){
_start:
{
uint32_t v___x_928_; lean_object* v___x_929_; 
v___x_928_ = 0;
v___x_929_ = lean_box_uint32(v___x_928_);
return v___x_929_;
}
}
LEAN_EXPORT lean_object* _lean_main(lean_object* v_x_930_){
_start:
{
if (lean_obj_tag(v_x_930_) == 1)
{
lean_object* v_head_952_; lean_object* v_tail_953_; lean_object* v___x_954_; uint8_t v___x_955_; 
v_head_952_ = lean_ctor_get(v_x_930_, 0);
lean_inc(v_head_952_);
v_tail_953_ = lean_ctor_get(v_x_930_, 1);
lean_inc(v_tail_953_);
lean_dec_ref_known(v_x_930_, 2);
v___x_954_ = ((lean_object*)(lp_choreo_main___closed__1));
v___x_955_ = lean_string_dec_eq(v_head_952_, v___x_954_);
if (v___x_955_ == 0)
{
lean_object* v___x_956_; uint8_t v___x_957_; 
v___x_956_ = ((lean_object*)(lp_choreo_main___closed__2));
v___x_957_ = lean_string_dec_eq(v_head_952_, v___x_956_);
if (v___x_957_ == 0)
{
lean_object* v___x_958_; uint8_t v___x_959_; 
v___x_958_ = ((lean_object*)(lp_choreo_main___closed__3));
v___x_959_ = lean_string_dec_eq(v_head_952_, v___x_958_);
lean_dec(v_head_952_);
if (v___x_959_ == 0)
{
lean_dec(v_tail_953_);
goto v___jp_932_;
}
else
{
if (lean_obj_tag(v_tail_953_) == 1)
{
lean_object* v_tail_960_; 
v_tail_960_ = lean_ctor_get(v_tail_953_, 1);
lean_inc(v_tail_960_);
if (lean_obj_tag(v_tail_960_) == 1)
{
lean_object* v_tail_961_; 
v_tail_961_ = lean_ctor_get(v_tail_960_, 1);
lean_inc(v_tail_961_);
if (lean_obj_tag(v_tail_961_) == 1)
{
lean_object* v_tail_962_; 
v_tail_962_ = lean_ctor_get(v_tail_961_, 1);
if (lean_obj_tag(v_tail_962_) == 0)
{
lean_object* v_head_963_; lean_object* v_head_964_; lean_object* v_head_965_; lean_object* v___x_966_; 
v_head_963_ = lean_ctor_get(v_tail_953_, 0);
lean_inc(v_head_963_);
lean_dec_ref_known(v_tail_953_, 2);
v_head_964_ = lean_ctor_get(v_tail_960_, 0);
lean_inc(v_head_964_);
lean_dec_ref_known(v_tail_960_, 2);
v_head_965_ = lean_ctor_get(v_tail_961_, 0);
lean_inc(v_head_965_);
lean_dec_ref_known(v_tail_961_, 2);
v___x_966_ = l_IO_FS_readFile(v_head_963_);
lean_dec(v_head_963_);
if (lean_obj_tag(v___x_966_) == 0)
{
lean_object* v_a_967_; lean_object* v___x_968_; lean_object* v___x_969_; 
v_a_967_ = lean_ctor_get(v___x_966_, 0);
lean_inc(v_a_967_);
lean_dec_ref_known(v___x_966_, 1);
v___x_968_ = l_Lean_Json_parse(v_a_967_);
v___x_969_ = l_IO_ofExcept___at___00Lean_IO_FS_Stream_readJson_spec__0___redArg(v___x_968_);
if (lean_obj_tag(v___x_969_) == 0)
{
lean_object* v_a_970_; lean_object* v___y_972_; lean_object* v___x_1006_; lean_object* v___x_1007_; 
v_a_970_ = lean_ctor_get(v___x_969_, 0);
lean_inc(v_a_970_);
lean_dec_ref_known(v___x_969_, 1);
v___x_1006_ = ((lean_object*)(lp_choreo_builtOf___closed__4));
v___x_1007_ = lp_choreo_Lean_Json_getObjValAs_x3f___at___00Choreo_readOps_spec__0(v_a_970_, v___x_1006_);
if (lean_obj_tag(v___x_1007_) == 0)
{
lean_object* v___x_1008_; 
lean_dec_ref_known(v___x_1007_, 1);
v___x_1008_ = ((lean_object*)(lp_choreo_readScene___closed__3));
v___y_972_ = v___x_1008_;
goto v___jp_971_;
}
else
{
lean_object* v_a_1009_; 
v_a_1009_ = lean_ctor_get(v___x_1007_, 0);
lean_inc(v_a_1009_);
lean_dec_ref_known(v___x_1007_, 1);
v___y_972_ = v_a_1009_;
goto v___jp_971_;
}
v___jp_971_:
{
lean_object* v___x_973_; lean_object* v___x_974_; lean_object* v___x_975_; lean_object* v___x_976_; lean_object* v___x_977_; lean_object* v___x_978_; 
v___x_973_ = lp_choreo_Choreo_parsePlan(v___y_972_);
v___x_974_ = ((lean_object*)(lp_choreo_main___closed__4));
v___x_975_ = lean_box(0);
v___x_976_ = lp_choreo_Choreo_buildPlan(v___x_973_, v___x_974_, v___x_975_);
lean_inc_ref(v___x_976_);
v___x_977_ = lp_choreo_Choreo_demoData(v___x_976_);
v___x_978_ = l_IO_FS_writeFile(v_head_964_, v___x_977_);
lean_dec_ref(v___x_977_);
lean_dec(v_head_964_);
if (lean_obj_tag(v___x_978_) == 0)
{
lean_object* v___x_979_; lean_object* v___x_980_; 
lean_dec_ref_known(v___x_978_, 1);
v___x_979_ = lp_choreo_Choreo_demoProofs(v___x_976_);
v___x_980_ = l_IO_FS_writeFile(v_head_965_, v___x_979_);
lean_dec_ref(v___x_979_);
lean_dec(v_head_965_);
if (lean_obj_tag(v___x_980_) == 0)
{
lean_object* v___x_982_; uint8_t v_isShared_983_; uint8_t v_isSharedCheck_988_; 
v_isSharedCheck_988_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_988_ == 0)
{
lean_object* v_unused_989_; 
v_unused_989_ = lean_ctor_get(v___x_980_, 0);
lean_dec(v_unused_989_);
v___x_982_ = v___x_980_;
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
else
{
lean_dec(v___x_980_);
v___x_982_ = lean_box(0);
v_isShared_983_ = v_isSharedCheck_988_;
goto v_resetjp_981_;
}
v_resetjp_981_:
{
lean_object* v___x_984_; lean_object* v___x_986_; 
v___x_984_ = lp_choreo_main___boxed__const__2;
if (v_isShared_983_ == 0)
{
lean_ctor_set(v___x_982_, 0, v___x_984_);
v___x_986_ = v___x_982_;
goto v_reusejp_985_;
}
else
{
lean_object* v_reuseFailAlloc_987_; 
v_reuseFailAlloc_987_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_987_, 0, v___x_984_);
v___x_986_ = v_reuseFailAlloc_987_;
goto v_reusejp_985_;
}
v_reusejp_985_:
{
return v___x_986_;
}
}
}
else
{
lean_object* v_a_990_; lean_object* v___x_992_; uint8_t v_isShared_993_; uint8_t v_isSharedCheck_997_; 
v_a_990_ = lean_ctor_get(v___x_980_, 0);
v_isSharedCheck_997_ = !lean_is_exclusive(v___x_980_);
if (v_isSharedCheck_997_ == 0)
{
v___x_992_ = v___x_980_;
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
else
{
lean_inc(v_a_990_);
lean_dec(v___x_980_);
v___x_992_ = lean_box(0);
v_isShared_993_ = v_isSharedCheck_997_;
goto v_resetjp_991_;
}
v_resetjp_991_:
{
lean_object* v___x_995_; 
if (v_isShared_993_ == 0)
{
v___x_995_ = v___x_992_;
goto v_reusejp_994_;
}
else
{
lean_object* v_reuseFailAlloc_996_; 
v_reuseFailAlloc_996_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_996_, 0, v_a_990_);
v___x_995_ = v_reuseFailAlloc_996_;
goto v_reusejp_994_;
}
v_reusejp_994_:
{
return v___x_995_;
}
}
}
}
else
{
lean_object* v_a_998_; lean_object* v___x_1000_; uint8_t v_isShared_1001_; uint8_t v_isSharedCheck_1005_; 
lean_dec_ref(v___x_976_);
lean_dec(v_head_965_);
v_a_998_ = lean_ctor_get(v___x_978_, 0);
v_isSharedCheck_1005_ = !lean_is_exclusive(v___x_978_);
if (v_isSharedCheck_1005_ == 0)
{
v___x_1000_ = v___x_978_;
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
else
{
lean_inc(v_a_998_);
lean_dec(v___x_978_);
v___x_1000_ = lean_box(0);
v_isShared_1001_ = v_isSharedCheck_1005_;
goto v_resetjp_999_;
}
v_resetjp_999_:
{
lean_object* v___x_1003_; 
if (v_isShared_1001_ == 0)
{
v___x_1003_ = v___x_1000_;
goto v_reusejp_1002_;
}
else
{
lean_object* v_reuseFailAlloc_1004_; 
v_reuseFailAlloc_1004_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1004_, 0, v_a_998_);
v___x_1003_ = v_reuseFailAlloc_1004_;
goto v_reusejp_1002_;
}
v_reusejp_1002_:
{
return v___x_1003_;
}
}
}
}
}
else
{
lean_object* v_a_1010_; lean_object* v___x_1012_; uint8_t v_isShared_1013_; uint8_t v_isSharedCheck_1017_; 
lean_dec(v_head_965_);
lean_dec(v_head_964_);
v_a_1010_ = lean_ctor_get(v___x_969_, 0);
v_isSharedCheck_1017_ = !lean_is_exclusive(v___x_969_);
if (v_isSharedCheck_1017_ == 0)
{
v___x_1012_ = v___x_969_;
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
else
{
lean_inc(v_a_1010_);
lean_dec(v___x_969_);
v___x_1012_ = lean_box(0);
v_isShared_1013_ = v_isSharedCheck_1017_;
goto v_resetjp_1011_;
}
v_resetjp_1011_:
{
lean_object* v___x_1015_; 
if (v_isShared_1013_ == 0)
{
v___x_1015_ = v___x_1012_;
goto v_reusejp_1014_;
}
else
{
lean_object* v_reuseFailAlloc_1016_; 
v_reuseFailAlloc_1016_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1016_, 0, v_a_1010_);
v___x_1015_ = v_reuseFailAlloc_1016_;
goto v_reusejp_1014_;
}
v_reusejp_1014_:
{
return v___x_1015_;
}
}
}
}
else
{
lean_object* v_a_1018_; lean_object* v___x_1020_; uint8_t v_isShared_1021_; uint8_t v_isSharedCheck_1025_; 
lean_dec(v_head_965_);
lean_dec(v_head_964_);
v_a_1018_ = lean_ctor_get(v___x_966_, 0);
v_isSharedCheck_1025_ = !lean_is_exclusive(v___x_966_);
if (v_isSharedCheck_1025_ == 0)
{
v___x_1020_ = v___x_966_;
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
else
{
lean_inc(v_a_1018_);
lean_dec(v___x_966_);
v___x_1020_ = lean_box(0);
v_isShared_1021_ = v_isSharedCheck_1025_;
goto v_resetjp_1019_;
}
v_resetjp_1019_:
{
lean_object* v___x_1023_; 
if (v_isShared_1021_ == 0)
{
v___x_1023_ = v___x_1020_;
goto v_reusejp_1022_;
}
else
{
lean_object* v_reuseFailAlloc_1024_; 
v_reuseFailAlloc_1024_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1024_, 0, v_a_1018_);
v___x_1023_ = v_reuseFailAlloc_1024_;
goto v_reusejp_1022_;
}
v_reusejp_1022_:
{
return v___x_1023_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_961_, 2);
lean_dec_ref_known(v_tail_960_, 2);
lean_dec_ref_known(v_tail_953_, 2);
goto v___jp_932_;
}
}
else
{
lean_dec_ref_known(v_tail_960_, 2);
lean_dec(v_tail_961_);
lean_dec_ref_known(v_tail_953_, 2);
goto v___jp_932_;
}
}
else
{
lean_dec_ref_known(v_tail_953_, 2);
lean_dec(v_tail_960_);
goto v___jp_932_;
}
}
else
{
lean_dec(v_tail_953_);
goto v___jp_932_;
}
}
}
else
{
lean_dec(v_head_952_);
if (lean_obj_tag(v_tail_953_) == 1)
{
lean_object* v_tail_1026_; 
v_tail_1026_ = lean_ctor_get(v_tail_953_, 1);
lean_inc(v_tail_1026_);
if (lean_obj_tag(v_tail_1026_) == 1)
{
lean_object* v_tail_1027_; 
v_tail_1027_ = lean_ctor_get(v_tail_1026_, 1);
if (lean_obj_tag(v_tail_1027_) == 0)
{
lean_object* v_head_1028_; lean_object* v_head_1029_; lean_object* v___x_1030_; 
v_head_1028_ = lean_ctor_get(v_tail_953_, 0);
lean_inc(v_head_1028_);
lean_dec_ref_known(v_tail_953_, 2);
v_head_1029_ = lean_ctor_get(v_tail_1026_, 0);
lean_inc(v_head_1029_);
lean_dec_ref_known(v_tail_1026_, 2);
v___x_1030_ = l_IO_FS_readFile(v_head_1028_);
lean_dec(v_head_1028_);
if (lean_obj_tag(v___x_1030_) == 0)
{
lean_object* v_a_1031_; lean_object* v___x_1032_; lean_object* v___x_1033_; 
v_a_1031_ = lean_ctor_get(v___x_1030_, 0);
lean_inc(v_a_1031_);
lean_dec_ref_known(v___x_1030_, 1);
v___x_1032_ = l_Lean_Json_parse(v_a_1031_);
v___x_1033_ = l_IO_ofExcept___at___00Lean_IO_FS_Stream_readJson_spec__0___redArg(v___x_1032_);
if (lean_obj_tag(v___x_1033_) == 0)
{
lean_object* v_a_1034_; lean_object* v___x_1035_; lean_object* v_fst_1036_; lean_object* v___x_1037_; lean_object* v___x_1038_; lean_object* v___x_1039_; lean_object* v___x_1040_; lean_object* v___x_1041_; 
v_a_1034_ = lean_ctor_get(v___x_1033_, 0);
lean_inc(v_a_1034_);
lean_dec_ref_known(v___x_1033_, 1);
v___x_1035_ = lp_choreo_builtOf(v_a_1034_);
v_fst_1036_ = lean_ctor_get(v___x_1035_, 0);
lean_inc(v_fst_1036_);
lean_dec_ref(v___x_1035_);
v___x_1037_ = lp_choreo_Choreo_mutationsOf(v_fst_1036_);
v___x_1038_ = lean_unsigned_to_nat(0u);
lean_inc(v___x_1037_);
v___x_1039_ = l_List_zipIdxTR___redArg(v___x_1037_, v___x_1038_);
v___x_1040_ = lean_box(0);
v___x_1041_ = lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg(v_head_1029_, v___x_1039_, v___x_1040_);
lean_dec(v___x_1039_);
if (lean_obj_tag(v___x_1041_) == 0)
{
lean_object* v___x_1042_; lean_object* v___x_1043_; lean_object* v___x_1044_; 
lean_dec_ref_known(v___x_1041_, 1);
v___x_1042_ = lp_choreo_Choreo_stressJson(v___x_1037_);
v___x_1043_ = l_Lean_Json_compress(v___x_1042_);
v___x_1044_ = lp_choreo_IO_println___at___00main_spec__1(v___x_1043_);
if (lean_obj_tag(v___x_1044_) == 0)
{
lean_object* v___x_1046_; uint8_t v_isShared_1047_; uint8_t v_isSharedCheck_1052_; 
v_isSharedCheck_1052_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1052_ == 0)
{
lean_object* v_unused_1053_; 
v_unused_1053_ = lean_ctor_get(v___x_1044_, 0);
lean_dec(v_unused_1053_);
v___x_1046_ = v___x_1044_;
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
else
{
lean_dec(v___x_1044_);
v___x_1046_ = lean_box(0);
v_isShared_1047_ = v_isSharedCheck_1052_;
goto v_resetjp_1045_;
}
v_resetjp_1045_:
{
lean_object* v___x_1048_; lean_object* v___x_1050_; 
v___x_1048_ = lp_choreo_main___boxed__const__2;
if (v_isShared_1047_ == 0)
{
lean_ctor_set(v___x_1046_, 0, v___x_1048_);
v___x_1050_ = v___x_1046_;
goto v_reusejp_1049_;
}
else
{
lean_object* v_reuseFailAlloc_1051_; 
v_reuseFailAlloc_1051_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1051_, 0, v___x_1048_);
v___x_1050_ = v_reuseFailAlloc_1051_;
goto v_reusejp_1049_;
}
v_reusejp_1049_:
{
return v___x_1050_;
}
}
}
else
{
lean_object* v_a_1054_; lean_object* v___x_1056_; uint8_t v_isShared_1057_; uint8_t v_isSharedCheck_1061_; 
v_a_1054_ = lean_ctor_get(v___x_1044_, 0);
v_isSharedCheck_1061_ = !lean_is_exclusive(v___x_1044_);
if (v_isSharedCheck_1061_ == 0)
{
v___x_1056_ = v___x_1044_;
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
else
{
lean_inc(v_a_1054_);
lean_dec(v___x_1044_);
v___x_1056_ = lean_box(0);
v_isShared_1057_ = v_isSharedCheck_1061_;
goto v_resetjp_1055_;
}
v_resetjp_1055_:
{
lean_object* v___x_1059_; 
if (v_isShared_1057_ == 0)
{
v___x_1059_ = v___x_1056_;
goto v_reusejp_1058_;
}
else
{
lean_object* v_reuseFailAlloc_1060_; 
v_reuseFailAlloc_1060_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1060_, 0, v_a_1054_);
v___x_1059_ = v_reuseFailAlloc_1060_;
goto v_reusejp_1058_;
}
v_reusejp_1058_:
{
return v___x_1059_;
}
}
}
}
else
{
lean_object* v_a_1062_; lean_object* v___x_1064_; uint8_t v_isShared_1065_; uint8_t v_isSharedCheck_1069_; 
lean_dec(v___x_1037_);
v_a_1062_ = lean_ctor_get(v___x_1041_, 0);
v_isSharedCheck_1069_ = !lean_is_exclusive(v___x_1041_);
if (v_isSharedCheck_1069_ == 0)
{
v___x_1064_ = v___x_1041_;
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
else
{
lean_inc(v_a_1062_);
lean_dec(v___x_1041_);
v___x_1064_ = lean_box(0);
v_isShared_1065_ = v_isSharedCheck_1069_;
goto v_resetjp_1063_;
}
v_resetjp_1063_:
{
lean_object* v___x_1067_; 
if (v_isShared_1065_ == 0)
{
v___x_1067_ = v___x_1064_;
goto v_reusejp_1066_;
}
else
{
lean_object* v_reuseFailAlloc_1068_; 
v_reuseFailAlloc_1068_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1068_, 0, v_a_1062_);
v___x_1067_ = v_reuseFailAlloc_1068_;
goto v_reusejp_1066_;
}
v_reusejp_1066_:
{
return v___x_1067_;
}
}
}
}
else
{
lean_object* v_a_1070_; lean_object* v___x_1072_; uint8_t v_isShared_1073_; uint8_t v_isSharedCheck_1077_; 
lean_dec(v_head_1029_);
v_a_1070_ = lean_ctor_get(v___x_1033_, 0);
v_isSharedCheck_1077_ = !lean_is_exclusive(v___x_1033_);
if (v_isSharedCheck_1077_ == 0)
{
v___x_1072_ = v___x_1033_;
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
else
{
lean_inc(v_a_1070_);
lean_dec(v___x_1033_);
v___x_1072_ = lean_box(0);
v_isShared_1073_ = v_isSharedCheck_1077_;
goto v_resetjp_1071_;
}
v_resetjp_1071_:
{
lean_object* v___x_1075_; 
if (v_isShared_1073_ == 0)
{
v___x_1075_ = v___x_1072_;
goto v_reusejp_1074_;
}
else
{
lean_object* v_reuseFailAlloc_1076_; 
v_reuseFailAlloc_1076_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1076_, 0, v_a_1070_);
v___x_1075_ = v_reuseFailAlloc_1076_;
goto v_reusejp_1074_;
}
v_reusejp_1074_:
{
return v___x_1075_;
}
}
}
}
else
{
lean_object* v_a_1078_; lean_object* v___x_1080_; uint8_t v_isShared_1081_; uint8_t v_isSharedCheck_1085_; 
lean_dec(v_head_1029_);
v_a_1078_ = lean_ctor_get(v___x_1030_, 0);
v_isSharedCheck_1085_ = !lean_is_exclusive(v___x_1030_);
if (v_isSharedCheck_1085_ == 0)
{
v___x_1080_ = v___x_1030_;
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
else
{
lean_inc(v_a_1078_);
lean_dec(v___x_1030_);
v___x_1080_ = lean_box(0);
v_isShared_1081_ = v_isSharedCheck_1085_;
goto v_resetjp_1079_;
}
v_resetjp_1079_:
{
lean_object* v___x_1083_; 
if (v_isShared_1081_ == 0)
{
v___x_1083_ = v___x_1080_;
goto v_reusejp_1082_;
}
else
{
lean_object* v_reuseFailAlloc_1084_; 
v_reuseFailAlloc_1084_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1084_, 0, v_a_1078_);
v___x_1083_ = v_reuseFailAlloc_1084_;
goto v_reusejp_1082_;
}
v_reusejp_1082_:
{
return v___x_1083_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_1026_, 2);
lean_dec_ref_known(v_tail_953_, 2);
goto v___jp_932_;
}
}
else
{
lean_dec_ref_known(v_tail_953_, 2);
lean_dec(v_tail_1026_);
goto v___jp_932_;
}
}
else
{
lean_dec(v_tail_953_);
goto v___jp_932_;
}
}
}
else
{
lean_dec(v_head_952_);
if (lean_obj_tag(v_tail_953_) == 1)
{
lean_object* v_tail_1086_; 
v_tail_1086_ = lean_ctor_get(v_tail_953_, 1);
lean_inc(v_tail_1086_);
if (lean_obj_tag(v_tail_1086_) == 1)
{
lean_object* v_tail_1087_; 
v_tail_1087_ = lean_ctor_get(v_tail_1086_, 1);
if (lean_obj_tag(v_tail_1087_) == 0)
{
lean_object* v_head_1088_; lean_object* v_head_1089_; lean_object* v___x_1090_; 
v_head_1088_ = lean_ctor_get(v_tail_953_, 0);
lean_inc(v_head_1088_);
lean_dec_ref_known(v_tail_953_, 2);
v_head_1089_ = lean_ctor_get(v_tail_1086_, 0);
lean_inc(v_head_1089_);
lean_dec_ref_known(v_tail_1086_, 2);
v___x_1090_ = l_IO_FS_readFile(v_head_1088_);
lean_dec(v_head_1088_);
if (lean_obj_tag(v___x_1090_) == 0)
{
lean_object* v_a_1091_; lean_object* v___x_1092_; lean_object* v___x_1093_; 
v_a_1091_ = lean_ctor_get(v___x_1090_, 0);
lean_inc(v_a_1091_);
lean_dec_ref_known(v___x_1090_, 1);
v___x_1092_ = l_Lean_Json_parse(v_a_1091_);
v___x_1093_ = l_IO_ofExcept___at___00Lean_IO_FS_Stream_readJson_spec__0___redArg(v___x_1092_);
if (lean_obj_tag(v___x_1093_) == 0)
{
lean_object* v_a_1094_; lean_object* v___x_1095_; 
v_a_1094_ = lean_ctor_get(v___x_1093_, 0);
lean_inc_n(v_a_1094_, 2);
lean_dec_ref_known(v___x_1093_, 1);
v___x_1095_ = lp_choreo_Choreo_readProgram(v_a_1094_);
if (lean_obj_tag(v___x_1095_) == 0)
{
lean_object* v___x_1096_; lean_object* v_fst_1097_; lean_object* v_snd_1098_; lean_object* v___x_1099_; lean_object* v___x_1100_; lean_object* v___x_1101_; 
v___x_1096_ = lp_choreo_builtOf(v_a_1094_);
v_fst_1097_ = lean_ctor_get(v___x_1096_, 0);
lean_inc_n(v_fst_1097_, 2);
v_snd_1098_ = lean_ctor_get(v___x_1096_, 1);
lean_inc(v_snd_1098_);
lean_dec_ref(v___x_1096_);
v___x_1099_ = lean_box(0);
v___x_1100_ = lp_choreo_Choreo_proofSource(v_fst_1097_, v___x_1099_, v___x_1099_);
v___x_1101_ = l_IO_FS_writeFile(v_head_1089_, v___x_1100_);
lean_dec_ref(v___x_1100_);
if (lean_obj_tag(v___x_1101_) == 0)
{
lean_object* v___x_1102_; lean_object* v___x_1103_; lean_object* v___x_1104_; 
lean_dec_ref_known(v___x_1101_, 1);
v___x_1102_ = lp_choreo_Choreo_report(v_fst_1097_, v_snd_1098_, v_head_1089_, v___x_1099_, v___x_1099_);
v___x_1103_ = l_Lean_Json_compress(v___x_1102_);
v___x_1104_ = lp_choreo_IO_println___at___00main_spec__1(v___x_1103_);
if (lean_obj_tag(v___x_1104_) == 0)
{
lean_object* v___x_1106_; uint8_t v_isShared_1107_; uint8_t v_isSharedCheck_1112_; 
v_isSharedCheck_1112_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1112_ == 0)
{
lean_object* v_unused_1113_; 
v_unused_1113_ = lean_ctor_get(v___x_1104_, 0);
lean_dec(v_unused_1113_);
v___x_1106_ = v___x_1104_;
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
else
{
lean_dec(v___x_1104_);
v___x_1106_ = lean_box(0);
v_isShared_1107_ = v_isSharedCheck_1112_;
goto v_resetjp_1105_;
}
v_resetjp_1105_:
{
lean_object* v___x_1108_; lean_object* v___x_1110_; 
v___x_1108_ = lp_choreo_main___boxed__const__2;
if (v_isShared_1107_ == 0)
{
lean_ctor_set(v___x_1106_, 0, v___x_1108_);
v___x_1110_ = v___x_1106_;
goto v_reusejp_1109_;
}
else
{
lean_object* v_reuseFailAlloc_1111_; 
v_reuseFailAlloc_1111_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1111_, 0, v___x_1108_);
v___x_1110_ = v_reuseFailAlloc_1111_;
goto v_reusejp_1109_;
}
v_reusejp_1109_:
{
return v___x_1110_;
}
}
}
else
{
lean_object* v_a_1114_; lean_object* v___x_1116_; uint8_t v_isShared_1117_; uint8_t v_isSharedCheck_1121_; 
v_a_1114_ = lean_ctor_get(v___x_1104_, 0);
v_isSharedCheck_1121_ = !lean_is_exclusive(v___x_1104_);
if (v_isSharedCheck_1121_ == 0)
{
v___x_1116_ = v___x_1104_;
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
else
{
lean_inc(v_a_1114_);
lean_dec(v___x_1104_);
v___x_1116_ = lean_box(0);
v_isShared_1117_ = v_isSharedCheck_1121_;
goto v_resetjp_1115_;
}
v_resetjp_1115_:
{
lean_object* v___x_1119_; 
if (v_isShared_1117_ == 0)
{
v___x_1119_ = v___x_1116_;
goto v_reusejp_1118_;
}
else
{
lean_object* v_reuseFailAlloc_1120_; 
v_reuseFailAlloc_1120_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1120_, 0, v_a_1114_);
v___x_1119_ = v_reuseFailAlloc_1120_;
goto v_reusejp_1118_;
}
v_reusejp_1118_:
{
return v___x_1119_;
}
}
}
}
else
{
lean_object* v_a_1122_; lean_object* v___x_1124_; uint8_t v_isShared_1125_; uint8_t v_isSharedCheck_1129_; 
lean_dec(v_snd_1098_);
lean_dec(v_fst_1097_);
lean_dec(v_head_1089_);
v_a_1122_ = lean_ctor_get(v___x_1101_, 0);
v_isSharedCheck_1129_ = !lean_is_exclusive(v___x_1101_);
if (v_isSharedCheck_1129_ == 0)
{
v___x_1124_ = v___x_1101_;
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
else
{
lean_inc(v_a_1122_);
lean_dec(v___x_1101_);
v___x_1124_ = lean_box(0);
v_isShared_1125_ = v_isSharedCheck_1129_;
goto v_resetjp_1123_;
}
v_resetjp_1123_:
{
lean_object* v___x_1127_; 
if (v_isShared_1125_ == 0)
{
v___x_1127_ = v___x_1124_;
goto v_reusejp_1126_;
}
else
{
lean_object* v_reuseFailAlloc_1128_; 
v_reuseFailAlloc_1128_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1128_, 0, v_a_1122_);
v___x_1127_ = v_reuseFailAlloc_1128_;
goto v_reusejp_1126_;
}
v_reusejp_1126_:
{
return v___x_1127_;
}
}
}
}
else
{
lean_object* v_val_1130_; lean_object* v___x_1131_; lean_object* v_fst_1132_; lean_object* v_snd_1133_; lean_object* v___x_1134_; lean_object* v___y_1136_; lean_object* v___x_1167_; 
v_val_1130_ = lean_ctor_get(v___x_1095_, 0);
lean_inc(v_val_1130_);
lean_dec_ref_known(v___x_1095_, 1);
v___x_1131_ = lp_choreo_Choreo_buildProgram___redArg(v_val_1130_);
v_fst_1132_ = lean_ctor_get(v___x_1131_, 0);
lean_inc(v_fst_1132_);
v_snd_1133_ = lean_ctor_get(v___x_1131_, 1);
lean_inc(v_snd_1133_);
lean_dec_ref(v___x_1131_);
v___x_1134_ = lean_alloc_closure((void*)(lp_choreo_namesOf___boxed), 2, 1);
lean_closure_set(v___x_1134_, 0, v_a_1094_);
v___x_1167_ = l_List_head_x3f___redArg(v_snd_1133_);
if (lean_obj_tag(v___x_1167_) == 0)
{
lean_object* v___x_1168_; 
v___x_1168_ = lean_box(0);
v___y_1136_ = v___x_1168_;
goto v___jp_1135_;
}
else
{
lean_object* v_val_1169_; lean_object* v_before_1170_; 
v_val_1169_ = lean_ctor_get(v___x_1167_, 0);
lean_inc(v_val_1169_);
lean_dec_ref_known(v___x_1167_, 1);
v_before_1170_ = lean_ctor_get(v_val_1169_, 8);
lean_inc(v_before_1170_);
lean_dec(v_val_1169_);
v___y_1136_ = v_before_1170_;
goto v___jp_1135_;
}
v___jp_1135_:
{
lean_object* v___x_1137_; lean_object* v___x_1138_; 
lean_inc(v___y_1136_);
lean_inc(v_snd_1133_);
lean_inc(v_fst_1132_);
v___x_1137_ = lp_choreo_Choreo_proofSource(v_fst_1132_, v_snd_1133_, v___y_1136_);
v___x_1138_ = l_IO_FS_writeFile(v_head_1089_, v___x_1137_);
lean_dec_ref(v___x_1137_);
if (lean_obj_tag(v___x_1138_) == 0)
{
lean_object* v___x_1139_; lean_object* v___x_1140_; lean_object* v___x_1141_; 
lean_dec_ref_known(v___x_1138_, 1);
v___x_1139_ = lp_choreo_Choreo_report(v_fst_1132_, v___x_1134_, v_head_1089_, v_snd_1133_, v___y_1136_);
v___x_1140_ = l_Lean_Json_compress(v___x_1139_);
v___x_1141_ = lp_choreo_IO_println___at___00main_spec__1(v___x_1140_);
if (lean_obj_tag(v___x_1141_) == 0)
{
lean_object* v___x_1143_; uint8_t v_isShared_1144_; uint8_t v_isSharedCheck_1149_; 
v_isSharedCheck_1149_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1149_ == 0)
{
lean_object* v_unused_1150_; 
v_unused_1150_ = lean_ctor_get(v___x_1141_, 0);
lean_dec(v_unused_1150_);
v___x_1143_ = v___x_1141_;
v_isShared_1144_ = v_isSharedCheck_1149_;
goto v_resetjp_1142_;
}
else
{
lean_dec(v___x_1141_);
v___x_1143_ = lean_box(0);
v_isShared_1144_ = v_isSharedCheck_1149_;
goto v_resetjp_1142_;
}
v_resetjp_1142_:
{
lean_object* v___x_1145_; lean_object* v___x_1147_; 
v___x_1145_ = lp_choreo_main___boxed__const__2;
if (v_isShared_1144_ == 0)
{
lean_ctor_set(v___x_1143_, 0, v___x_1145_);
v___x_1147_ = v___x_1143_;
goto v_reusejp_1146_;
}
else
{
lean_object* v_reuseFailAlloc_1148_; 
v_reuseFailAlloc_1148_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1148_, 0, v___x_1145_);
v___x_1147_ = v_reuseFailAlloc_1148_;
goto v_reusejp_1146_;
}
v_reusejp_1146_:
{
return v___x_1147_;
}
}
}
else
{
lean_object* v_a_1151_; lean_object* v___x_1153_; uint8_t v_isShared_1154_; uint8_t v_isSharedCheck_1158_; 
v_a_1151_ = lean_ctor_get(v___x_1141_, 0);
v_isSharedCheck_1158_ = !lean_is_exclusive(v___x_1141_);
if (v_isSharedCheck_1158_ == 0)
{
v___x_1153_ = v___x_1141_;
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
else
{
lean_inc(v_a_1151_);
lean_dec(v___x_1141_);
v___x_1153_ = lean_box(0);
v_isShared_1154_ = v_isSharedCheck_1158_;
goto v_resetjp_1152_;
}
v_resetjp_1152_:
{
lean_object* v___x_1156_; 
if (v_isShared_1154_ == 0)
{
v___x_1156_ = v___x_1153_;
goto v_reusejp_1155_;
}
else
{
lean_object* v_reuseFailAlloc_1157_; 
v_reuseFailAlloc_1157_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1157_, 0, v_a_1151_);
v___x_1156_ = v_reuseFailAlloc_1157_;
goto v_reusejp_1155_;
}
v_reusejp_1155_:
{
return v___x_1156_;
}
}
}
}
else
{
lean_object* v_a_1159_; lean_object* v___x_1161_; uint8_t v_isShared_1162_; uint8_t v_isSharedCheck_1166_; 
lean_dec(v___y_1136_);
lean_dec_ref(v___x_1134_);
lean_dec(v_snd_1133_);
lean_dec(v_fst_1132_);
lean_dec(v_head_1089_);
v_a_1159_ = lean_ctor_get(v___x_1138_, 0);
v_isSharedCheck_1166_ = !lean_is_exclusive(v___x_1138_);
if (v_isSharedCheck_1166_ == 0)
{
v___x_1161_ = v___x_1138_;
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
else
{
lean_inc(v_a_1159_);
lean_dec(v___x_1138_);
v___x_1161_ = lean_box(0);
v_isShared_1162_ = v_isSharedCheck_1166_;
goto v_resetjp_1160_;
}
v_resetjp_1160_:
{
lean_object* v___x_1164_; 
if (v_isShared_1162_ == 0)
{
v___x_1164_ = v___x_1161_;
goto v_reusejp_1163_;
}
else
{
lean_object* v_reuseFailAlloc_1165_; 
v_reuseFailAlloc_1165_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1165_, 0, v_a_1159_);
v___x_1164_ = v_reuseFailAlloc_1165_;
goto v_reusejp_1163_;
}
v_reusejp_1163_:
{
return v___x_1164_;
}
}
}
}
}
}
else
{
lean_object* v_a_1171_; lean_object* v___x_1173_; uint8_t v_isShared_1174_; uint8_t v_isSharedCheck_1178_; 
lean_dec(v_head_1089_);
v_a_1171_ = lean_ctor_get(v___x_1093_, 0);
v_isSharedCheck_1178_ = !lean_is_exclusive(v___x_1093_);
if (v_isSharedCheck_1178_ == 0)
{
v___x_1173_ = v___x_1093_;
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
else
{
lean_inc(v_a_1171_);
lean_dec(v___x_1093_);
v___x_1173_ = lean_box(0);
v_isShared_1174_ = v_isSharedCheck_1178_;
goto v_resetjp_1172_;
}
v_resetjp_1172_:
{
lean_object* v___x_1176_; 
if (v_isShared_1174_ == 0)
{
v___x_1176_ = v___x_1173_;
goto v_reusejp_1175_;
}
else
{
lean_object* v_reuseFailAlloc_1177_; 
v_reuseFailAlloc_1177_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1177_, 0, v_a_1171_);
v___x_1176_ = v_reuseFailAlloc_1177_;
goto v_reusejp_1175_;
}
v_reusejp_1175_:
{
return v___x_1176_;
}
}
}
}
else
{
lean_object* v_a_1179_; lean_object* v___x_1181_; uint8_t v_isShared_1182_; uint8_t v_isSharedCheck_1186_; 
lean_dec(v_head_1089_);
v_a_1179_ = lean_ctor_get(v___x_1090_, 0);
v_isSharedCheck_1186_ = !lean_is_exclusive(v___x_1090_);
if (v_isSharedCheck_1186_ == 0)
{
v___x_1181_ = v___x_1090_;
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
else
{
lean_inc(v_a_1179_);
lean_dec(v___x_1090_);
v___x_1181_ = lean_box(0);
v_isShared_1182_ = v_isSharedCheck_1186_;
goto v_resetjp_1180_;
}
v_resetjp_1180_:
{
lean_object* v___x_1184_; 
if (v_isShared_1182_ == 0)
{
v___x_1184_ = v___x_1181_;
goto v_reusejp_1183_;
}
else
{
lean_object* v_reuseFailAlloc_1185_; 
v_reuseFailAlloc_1185_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_1185_, 0, v_a_1179_);
v___x_1184_ = v_reuseFailAlloc_1185_;
goto v_reusejp_1183_;
}
v_reusejp_1183_:
{
return v___x_1184_;
}
}
}
}
else
{
lean_dec_ref_known(v_tail_1086_, 2);
lean_dec_ref_known(v_tail_953_, 2);
goto v___jp_932_;
}
}
else
{
lean_dec_ref_known(v_tail_953_, 2);
lean_dec(v_tail_1086_);
goto v___jp_932_;
}
}
else
{
lean_dec(v_tail_953_);
goto v___jp_932_;
}
}
}
else
{
lean_dec(v_x_930_);
goto v___jp_932_;
}
v___jp_932_:
{
lean_object* v___x_933_; lean_object* v___x_934_; 
v___x_933_ = ((lean_object*)(lp_choreo_main___closed__0));
v___x_934_ = l_IO_eprintln___at___00__private_Init_System_IO_0__IO_eprintlnAux_spec__0(v___x_933_);
if (lean_obj_tag(v___x_934_) == 0)
{
lean_object* v___x_936_; uint8_t v_isShared_937_; uint8_t v_isSharedCheck_942_; 
v_isSharedCheck_942_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_942_ == 0)
{
lean_object* v_unused_943_; 
v_unused_943_ = lean_ctor_get(v___x_934_, 0);
lean_dec(v_unused_943_);
v___x_936_ = v___x_934_;
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
else
{
lean_dec(v___x_934_);
v___x_936_ = lean_box(0);
v_isShared_937_ = v_isSharedCheck_942_;
goto v_resetjp_935_;
}
v_resetjp_935_:
{
lean_object* v___x_938_; lean_object* v___x_940_; 
v___x_938_ = lp_choreo_main___boxed__const__1;
if (v_isShared_937_ == 0)
{
lean_ctor_set(v___x_936_, 0, v___x_938_);
v___x_940_ = v___x_936_;
goto v_reusejp_939_;
}
else
{
lean_object* v_reuseFailAlloc_941_; 
v_reuseFailAlloc_941_ = lean_alloc_ctor(0, 1, 0);
lean_ctor_set(v_reuseFailAlloc_941_, 0, v___x_938_);
v___x_940_ = v_reuseFailAlloc_941_;
goto v_reusejp_939_;
}
v_reusejp_939_:
{
return v___x_940_;
}
}
}
else
{
lean_object* v_a_944_; lean_object* v___x_946_; uint8_t v_isShared_947_; uint8_t v_isSharedCheck_951_; 
v_a_944_ = lean_ctor_get(v___x_934_, 0);
v_isSharedCheck_951_ = !lean_is_exclusive(v___x_934_);
if (v_isSharedCheck_951_ == 0)
{
v___x_946_ = v___x_934_;
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
else
{
lean_inc(v_a_944_);
lean_dec(v___x_934_);
v___x_946_ = lean_box(0);
v_isShared_947_ = v_isSharedCheck_951_;
goto v_resetjp_945_;
}
v_resetjp_945_:
{
lean_object* v___x_949_; 
if (v_isShared_947_ == 0)
{
v___x_949_ = v___x_946_;
goto v_reusejp_948_;
}
else
{
lean_object* v_reuseFailAlloc_950_; 
v_reuseFailAlloc_950_ = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(v_reuseFailAlloc_950_, 0, v_a_944_);
v___x_949_ = v_reuseFailAlloc_950_;
goto v_reusejp_948_;
}
v_reusejp_948_:
{
return v___x_949_;
}
}
}
}
}
}
LEAN_EXPORT lean_object* lp_choreo_main___boxed(lean_object* v_x_1187_, lean_object* v_a_1188_){
_start:
{
lean_object* v_res_1189_; 
v_res_1189_ = _lean_main(v_x_1187_);
return v_res_1189_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0(lean_object* v_head_1190_, lean_object* v_as_1191_, lean_object* v_as_x27_1192_, lean_object* v_b_1193_, lean_object* v_a_1194_){
_start:
{
lean_object* v___x_1196_; 
v___x_1196_ = lp_choreo_List_forIn_x27_loop___at___00main_spec__0___redArg(v_head_1190_, v_as_x27_1192_, v_b_1193_);
return v___x_1196_;
}
}
LEAN_EXPORT lean_object* lp_choreo_List_forIn_x27_loop___at___00main_spec__0___boxed(lean_object* v_head_1197_, lean_object* v_as_1198_, lean_object* v_as_x27_1199_, lean_object* v_b_1200_, lean_object* v_a_1201_, lean_object* v___y_1202_){
_start:
{
lean_object* v_res_1203_; 
v_res_1203_ = lp_choreo_List_forIn_x27_loop___at___00main_spec__0(v_head_1197_, v_as_1198_, v_as_x27_1199_, v_b_1200_, v_a_1201_);
lean_dec(v_as_x27_1199_);
lean_dec(v_as_1198_);
return v_res_1203_;
}
}
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_Init(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Emit(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Scene(uint8_t builtin);
lean_object* initialize_choreo_Choreo_Stress(uint8_t builtin);
void lean_initialize();
static bool _G_initialized = false;
LEAN_EXPORT lean_object* initialize_choreo_Main(uint8_t builtin) {
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
res = initialize_choreo_Choreo_Scene(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_choreo_Choreo_Stress(builtin);
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
lp_choreo_main___boxed__const__1 = _init_lp_choreo_main___boxed__const__1();
lean_mark_persistent(lp_choreo_main___boxed__const__1);
lp_choreo_main___boxed__const__2 = _init_lp_choreo_main___boxed__const__2();
lean_mark_persistent(lp_choreo_main___boxed__const__2);
return lean_io_result_mk_ok(lean_box(0));
}
char ** lean_setup_args(int argc, char ** argv);
#if defined(WIN32) || defined(_WIN32)
#include <windows.h>
#endif
lean_object* run_main(int argc, char ** argv) {
    lean_object* in = lean_box(0);
    int i = argc;
    while (i > 1) {
      lean_object* n;
      i--;
      n = lean_alloc_ctor(1,2,0); lean_ctor_set(n, 0, lean_mk_string(argv[i])); lean_ctor_set(n, 1, in);
      in = n;
    }
    return _lean_main(in);
}
int main(int argc, char ** argv) {
#if defined(WIN32) || defined(_WIN32)
  SetErrorMode(SEM_FAILCRITICALERRORS);
  SetConsoleOutputCP(CP_UTF8);
#endif
  lean_object* res;
  argv = lean_setup_args(argc, argv);
  res = initialize_choreo_Main(1 /* builtin */);
  lean_io_mark_end_initialization();
  if (lean_io_result_is_ok(res)) {
    lean_dec_ref(res);
    lean_init_task_manager();
    res = lean_run_main(&run_main, argc, argv);
  }
  lean_finalize_task_manager();
  if (lean_io_result_is_ok(res)) {
    int ret = lean_unbox_uint32(lean_io_result_get_value(res));
    lean_dec_ref(res);
    return ret;
  } else {
    lean_io_result_show_error(res);
    lean_dec_ref(res);
    return 1;
  }
}
#ifdef __cplusplus
}
#endif
