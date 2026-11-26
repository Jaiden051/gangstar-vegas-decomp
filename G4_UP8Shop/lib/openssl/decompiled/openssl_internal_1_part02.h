#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_1_part02.h
// Library: openssl | Module: openssl_internal_1_part02
// Binary Address Span: 0x1a27f50 .. 0x1a4bdc0 (311 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1a27f50] (485 bytes) UI_dup_input_boolean
// int UI_dup_input_boolean(int a1, char *a2, char *a3, char *a4, char *a5, int a6, int a7);
// [0x1a28140] (77 bytes) UI_add_info_string
// int UI_add_info_string(int a1, int a2);
// [0x1a28190] (169 bytes) UI_dup_info_string
// int UI_dup_info_string(int a1, char *a2);
// [0x1a28240] (77 bytes) UI_add_error_string
// int UI_add_error_string(int a1, int a2);
// [0x1a28290] (169 bytes) UI_dup_error_string
// int UI_dup_error_string(int a1, char *a2);
// [0x1a28340] (420 bytes) UI_construct_prompt
// char *UI_construct_prompt(int a1, char *s, char *a3);
// [0x1a284f0] (15 bytes) UI_add_user_data
// int UI_add_user_data(int a1, int a2);
// [0x1a28500] (12 bytes) UI_get0_user_data
// int UI_get0_user_data(int a1);
// [0x1a28510] (296 bytes) UI_process
// int UI_process(int a1, int a2, int a3);
// [0x1a28640] (217 bytes) UI_ctrl
// int UI_ctrl(int a1, int a2, int a3);
// [0x1a28720] (74 bytes) UI_get_ex_new_index
// int UI_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x1a28770] (53 bytes) UI_set_ex_data
// int UI_set_ex_data(int a1, int a2, int a3);
// [0x1a287b0] (45 bytes) UI_get_ex_data
// int UI_get_ex_data(int a1, int a2);
// [0x1a287e0] (24 bytes) UI_set_default_method
// int UI_set_default_method(int a1);
// [0x1a28800] (49 bytes) UI_get_default_method
// int UI_get_default_method();
// [0x1a28840] (195 bytes) UI_new_method
// uint32_t *UI_new_method(int a1);
// [0x1a28910] (34 bytes) UI_new
// uint32_t *UI_new();
// [0x1a28940] (11 bytes) UI_get_method
// int UI_get_method(int a1);
// [0x1a28950] (13 bytes) UI_set_method
// int UI_set_method(uint32_t *a1, int a2);
// [0x1a28960] (186 bytes) UI_create_method
// uint8_t *UI_create_method(char *a1);
// [0x1a28a20] (64 bytes) UI_destroy_method
// int UI_destroy_method(void **a1);
// [0x1a28a60] (24 bytes) UI_method_set_opener
// int UI_method_set_opener(int a1, int a2);
// [0x1a28a80] (24 bytes) UI_method_set_writer
// int UI_method_set_writer(int a1, int a2);
// [0x1a28aa0] (24 bytes) UI_method_set_flusher
// int UI_method_set_flusher(int a1, int a2);
// [0x1a28ac0] (24 bytes) UI_method_set_reader
// int UI_method_set_reader(int a1, int a2);
// [0x1a28ae0] (24 bytes) UI_method_set_closer
// int UI_method_set_closer(int a1, int a2);
// [0x1a28b00] (24 bytes) UI_method_set_prompt_constructor
// int UI_method_set_prompt_constructor(int a1, int a2);
// [0x1a28b20] (19 bytes) UI_method_get_opener
// int UI_method_get_opener(int a1);
// [0x1a28b40] (19 bytes) UI_method_get_writer
// int UI_method_get_writer(int a1);
// [0x1a28b60] (19 bytes) UI_method_get_flusher
// int UI_method_get_flusher(int a1);
// [0x1a28b80] (19 bytes) UI_method_get_reader
// int UI_method_get_reader(int a1);
// [0x1a28ba0] (19 bytes) UI_method_get_closer
// int UI_method_get_closer(int a1);
// [0x1a28bc0] (19 bytes) UI_method_get_prompt_constructor
// int UI_method_get_prompt_constructor(int a1);
// [0x1a28be0] (13 bytes) UI_get_string_type
// int UI_get_string_type(int a1);
// [0x1a28bf0] (14 bytes) UI_get_input_flags
// int UI_get_input_flags(int a1);
// [0x1a28c00] (19 bytes) UI_get0_output_string
// int UI_get0_output_string(int a1);
// [0x1a28c20] (35 bytes) UI_get0_action_string
// int UI_get0_action_string(uint32_t *a1);
// [0x1a28c50] (35 bytes) UI_get0_result_string
// int UI_get0_result_string(uint32_t *a1);
// [0x1a28c80] (202 bytes) UI_get0_result
// int UI_get0_result(int a1, int a2);
// [0x1a28d50] (33 bytes) UI_get0_test_string
// int UI_get0_test_string(uint32_t *a1);
// [0x1a28d80] (34 bytes) UI_get_result_minsize
// int UI_get_result_minsize(uint32_t *a1);
// [0x1a28db0] (34 bytes) UI_get_result_maxsize
// int UI_get_result_maxsize(uint32_t *a1);
// [0x1a28de0] (599 bytes) UI_set_result
// int UI_set_result(int a1, unsigned int *a2, char *s);
// [0x1a29040] (24 bytes) sub_1A29040
// int sub_1A29040(int a1);
// [0x1a29060] (127 bytes) sub_1A29060
// int sub_1A29060();
// [0x1a290e0] (904 bytes) sub_1A290E0
// int sub_1A290E0(int a1, unsigned int *a2, int a3, int a4);
// [0x1a29470] (109 bytes) sub_1A29470
// int sub_1A29470(int a1, int a2);
// [0x1a294e0] (475 bytes) sub_1A294E0
// int sub_1A294E0(int a1, unsigned int *a2);
// [0x1a296c0] (300 bytes) sub_1A296C0
// int sub_1A296C0();
// [0x1a297f0] (22 bytes) UI_OpenSSL
// char **UI_OpenSSL();
// [0x1a29810] (6338 bytes) whirlpool_block
// int whirlpool_block(int64_t *a1, int a2, int a3);
// [0x1a2b0e0] (34 bytes) sub_1A2B0E0
// int sub_1A2B0E0(void *a1);
// [0x1a2b110] (130 bytes) sub_1A2B110
// int sub_1A2B110(int a1);
// [0x1a2b1a0] (1493 bytes) sub_1A2B1A0
// void *sub_1A2B1A0(int a1, int a2, int a3, uint32_t *a4);
// [0x1a2b780] (87 bytes) sub_1A2B780
// int sub_1A2B780(void *a1);
// [0x1a2b7e0] (90 bytes) sub_1A2B7E0
// int sub_1A2B7E0(int a1);
// [0x1a2b840] (53 bytes) sub_1A2B840
// int sub_1A2B840(uint32_t **a1, uint32_t **a2);
// [0x1a2b880] (598 bytes) sub_1A2B880
// int sub_1A2B880(int **a1, char *a2, char *a3);
// [0x1a2bae0] (224 bytes) sub_1A2BAE0
// int sub_1A2BAE0(int a1, int a2, char *a3, char *a4);
// [0x1a2c1f0] (295 bytes) sub_1A2C1F0
// bool sub_1A2C1F0(int a1, int a2, char *a3, int a4);
// [0x1a2d1a0] (17 bytes) sub_1A2D1A0
// int sub_1A2D1A0(uint32_t **a1, uint32_t **a2);
// [0x1a2d1c0] (225 bytes) sub_1A2D1C0
// char sub_1A2D1C0(int a1, int a2);
// [0x1a2d2b0] (81 bytes) sub_1A2D2B0
// int sub_1A2D2B0(int a1, int a2);
// [0x1a2d310] (73 bytes) sub_1A2D310
// char sub_1A2D310(int a1, int a2);
// [0x1a2d360] (38 bytes) sub_1A2D360
// char sub_1A2D360(int a1, int a2);
// [0x1a2d390] (77 bytes) sub_1A2D390
// void sub_1A2D390(void *a1);
// [0x1a2d800] (40 bytes) X509v3_get_ext_count
// int X509v3_get_ext_count(int a1);
// [0x1a2d830] (128 bytes) X509v3_get_ext_by_OBJ
// int X509v3_get_ext_by_OBJ(int *a1, int a2, int a3);
// [0x1a2d8b0] (71 bytes) X509v3_get_ext_by_NID
// int X509v3_get_ext_by_NID(int *a1, unsigned int a2, int a3);
// [0x1a2d900] (150 bytes) X509v3_get_ext_by_critical
// int X509v3_get_ext_by_critical(int *a1, int a2, int a3);
// [0x1a2d9a0] (98 bytes) X509v3_get_ext
// int X509v3_get_ext(int *a1, int a2);
// [0x1a2da10] (98 bytes) X509v3_delete_ext
// int X509v3_delete_ext(int *a1, int a2);
// [0x1a2da80] (327 bytes) X509v3_add_ext
// void **X509v3_add_ext(void ***a1, int a2, int a3);
// [0x1a2ec10] (56 bytes) sub_1A2EC10
// int sub_1A2EC10(int a1, int a2);
// [0x1a2ec50] (36 bytes) policy_node_cmp_new
// uint32_t *policy_node_cmp_new();
// [0x1a2ec80] (93 bytes) tree_find_sk
// int tree_find_sk(int *a1, int a2);
// [0x1a2ece0] (125 bytes) level_find_node
// uint32_t *level_find_node(int a1, int a2, int a3);
// [0x1a2ed60] (34 bytes) policy_node_free
// int policy_node_free(void *a1);
// [0x1a2ed90] (274 bytes) level_add_node
// int level_add_node(int a1, int a2, int a3, int a4);
// [0x1a2eeb0] (158 bytes) policy_node_match
// int policy_node_match(int a1, int *a2, int a3);
// [0x1a2ef50] (487 bytes) sub_1A2EF50
// int sub_1A2EF50(uint32_t *a1, int *a2, int a3);
// [0x1a2f140] (938 bytes) i2v_GENERAL_NAME
// int i2v_GENERAL_NAME(int a1, int a2, int a3);
// [0x1a2f4f0] (114 bytes) i2v_GENERAL_NAMES
// uint32_t *i2v_GENERAL_NAMES(int a1, int *a2, int a3);
// [0x1a2f570] (570 bytes) GENERAL_NAME_print
// int GENERAL_NAME_print(int a1, int a2, uint32_t *a3, uint32_t *a4);
// [0x1a2f7b0] (1212 bytes) a2i_GENERAL_NAME
// uint32_t *a2i_GENERAL_NAME(uint32_t *a1, int a2, int a3, int a4, char *src, int a6);
// [0x1a2fc70] (445 bytes) v2i_GENERAL_NAME_ex
// uint32_t *v2i_GENERAL_NAME_ex(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1a2fe30] (66 bytes) v2i_GENERAL_NAME
// uint32_t *v2i_GENERAL_NAME(int a1, int a2, int a3);
// [0x1a2fe80] (654 bytes) sub_1A2FE80
// int *sub_1A2FE80(int a1, uint32_t *a2, int *a3);
// [0x1a30110] (393 bytes) sub_1A30110
// int *sub_1A30110(int a1, uint32_t *a2, int *a3);
// [0x1a302a0] (199 bytes) v2i_GENERAL_NAMES
// void **v2i_GENERAL_NAMES(int a1, int a2, int *a3);
// [0x1a30370] (105 bytes) sub_1A30370
// int sub_1A30370(int a1, int a2, int a3);
// [0x1a30460] (36 bytes) BASIC_CONSTRAINTS_new
// int BASIC_CONSTRAINTS_new();
// [0x1a30490] (44 bytes) BASIC_CONSTRAINTS_free
// int BASIC_CONSTRAINTS_free(char a1);
// [0x1a304c0] (396 bytes) sub_1A304C0
// int sub_1A304C0(int a1, int a2, int *a3);
// [0x1a30650] (42 bytes) sub_1A30650
// int sub_1A30650(int a1, int a2);
// [0x1a30680] (50 bytes) sub_1A30680
// int sub_1A30680(int a1, int a2, int a3);
// [0x1a306c0] (42 bytes) sub_1A306C0
// int sub_1A306C0(int a1, int a2);
// [0x1a306f0] (50 bytes) sub_1A306F0
// int sub_1A306F0(int a1, int a2, int a3);
// [0x1a30730] (133 bytes) sub_1A30730
// int sub_1A30730(const char **a1);
// [0x1a307c0] (157 bytes) sub_1A307C0
// int sub_1A307C0(const char **a1);
// [0x1a30860] (526 bytes) sub_1A30860
// void **sub_1A30860(char *a1, char *a2, int a3, int a4, int a5);
// [0x1a30a70] (317 bytes) sub_1A30A70
// void **sub_1A30A70( int a1, int (**a2)(int, uint8_t **), unsigned int a3, int a4, int a5);
// [0x1a30bb0] (723 bytes) sub_1A30BB0
// void **sub_1A30BB0(int a1, int a2, unsigned int a3, int a4, char *a5);
// [0x1a30e90] (263 bytes) X509V3_EXT_nconf
// void **X509V3_EXT_nconf(int a1, int a2, char *a3, char *a4);
// [0x1a30fa0] (162 bytes) X509V3_EXT_nconf_nid
// void **X509V3_EXT_nconf_nid(int a1, int a2, unsigned int a3, char *a4);
// [0x1a31050] (173 bytes) X509V3_EXT_i2d
// void **X509V3_EXT_i2d(unsigned int a1, int a2, int a3);
// [0x1a31100] (195 bytes) X509V3_EXT_add_nconf_sk
// int X509V3_EXT_add_nconf_sk(int a1, int a2, int a3, void ***a4);
// [0x1a311d0] (69 bytes) X509V3_EXT_add_nconf
// int X509V3_EXT_add_nconf(int a1, int a2, int a3, uint32_t *a4);
// [0x1a31220] (69 bytes) X509V3_EXT_CRL_add_nconf
// int X509V3_EXT_CRL_add_nconf(int a1, int a2, int a3, uint32_t *a4);
// [0x1a31270] (166 bytes) X509V3_EXT_REQ_add_nconf
// int X509V3_EXT_REQ_add_nconf(int a1, int a2, int a3, int *a4);
// [0x1a31320] (122 bytes) X509V3_get_string
// int X509V3_get_string(int a1, int a2, int a3);
// [0x1a313a0] (114 bytes) X509V3_get_section
// int X509V3_get_section(int a1, int a2);
// [0x1a31420] (43 bytes) X509V3_string_free
// int X509V3_string_free(int a1, int a2);
// [0x1a31450] (43 bytes) X509V3_section_free
// int X509V3_section_free(int a1, int a2);
// [0x1a31480] (32 bytes) X509V3_set_nconf
// int X509V3_set_nconf(int a1, int a2);
// [0x1a314a0] (39 bytes) X509V3_set_ctx
// uint32_t *X509V3_set_ctx(uint32_t *a1, int a2, int a3, int a4, int a5, int a6);
// [0x1a314d0] (88 bytes) X509V3_EXT_conf
// void **X509V3_EXT_conf(int a1, int a2, char *a3, char *a4);
// [0x1a31530] (88 bytes) X509V3_EXT_conf_nid
// void **X509V3_EXT_conf_nid(int a1, int a2, unsigned int a3, char *a4);
// [0x1a31590] (32 bytes) X509V3_set_conf_lhash
// int X509V3_set_conf_lhash(int a1, int a2);
// [0x1a315b0] (88 bytes) X509V3_EXT_add_conf
// int X509V3_EXT_add_conf(int a1, int a2, int a3, uint32_t *a4);
// [0x1a31610] (88 bytes) X509V3_EXT_CRL_add_conf
// int X509V3_EXT_CRL_add_conf(int a1, int a2, int a3, uint32_t *a4);
// [0x1a31670] (88 bytes) X509V3_EXT_REQ_add_conf
// int X509V3_EXT_REQ_add_conf(int a1, int a2, int a3, int *a4);
// [0x1a316d0] (17 bytes) sub_1A316D0
// int sub_1A316D0(uint32_t **a1, uint32_t **a2);
// [0x1a316f0] (17 bytes) sub_1A316F0
// int sub_1A316F0(uint32_t **a1, uint32_t **a2);
// [0x1a31710] (40 bytes) sub_1A31710
// void *sub_1A31710(void *a1);
// [0x1a31740] (144 bytes) X509V3_EXT_add
// int X509V3_EXT_add(int a1);
// [0x1a317d0] (177 bytes) X509V3_EXT_get_nid
// int X509V3_EXT_get_nid(int a1);
// [0x1a31890] (52 bytes) X509V3_EXT_get
// int X509V3_EXT_get(int *a1);
// [0x1a318d0] (84 bytes) X509V3_EXT_add_list
// int X509V3_EXT_add_list(uint32_t *a1);
// [0x1a31930] (292 bytes) X509V3_EXT_add_alias
// int X509V3_EXT_add_alias(int a1, int a2);
// [0x1a31a60] (56 bytes) X509V3_EXT_cleanup
// int X509V3_EXT_cleanup();
// [0x1a31aa0] (12 bytes) X509V3_add_standard_extensions
// int X509V3_add_standard_extensions();
// [0x1a31ab0] (124 bytes) X509V3_EXT_d2i
// int X509V3_EXT_d2i(int *a1);
// [0x1a31b30] (291 bytes) X509V3_get_d2i
// int X509V3_get_d2i(int *a1, int a2, bool *a3, int *a4);
// [0x1a31c60] (507 bytes) X509V3_add1_i2d
// int X509V3_add1_i2d(int **a1, unsigned int a2, int a3, int a4, char a5);
// [0x1a31e60] (12 bytes) sub_1A31E60
// int sub_1A31E60();
// [0x1a31e70] (27 bytes) sub_1A31E70
// int sub_1A31E70();
// [0x1a31e90] (85 bytes) sub_1A31E90
// int sub_1A31E90(int a1, void **a2);
// [0x1a31ef0] (27 bytes) sub_1A31EF0
// int sub_1A31EF0();
// [0x1a31f10] (34 bytes) sub_1A31F10
// int sub_1A31F10(void **a1);
// [0x1a31f40] (387 bytes) sub_1A31F40
// bool sub_1A31F40(int a1, int a2, int a3, uint32_t *a4, int a5);
// [0x1a320d0] (107 bytes) sub_1A320D0
// bool sub_1A320D0(int a1, int a2, int a3, int a4, uint32_t *a5, int a6);
// [0x1a32140] (317 bytes) sub_1A32140
// int sub_1A32140(int a1, int *a2, uint32_t *a3, int a4);
// [0x1a32280] (103 bytes) sub_1A32280
// bool sub_1A32280(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1a322f0] (198 bytes) sub_1A322F0
// void **sub_1A322F0(void ***a1, char **a2, size_t a3);
// [0x1a323c0] (107 bytes) sub_1A323C0
// bool sub_1A323C0(int a1, int a2, int a3, int *a4, uint32_t *a5, int a6);
// [0x1a32430] (287 bytes) sub_1A32430
// int sub_1A32430(int a1, int a2, int a3, int a4, uint32_t *a5, int a6);
// [0x1a32550] (1351 bytes) sub_1A32550
// int sub_1A32550(uint32_t *a1, int a2);
// [0x1a32aa0] (486 bytes) sub_1A32AA0
// int sub_1A32AA0(uint32_t *a1, char ***a2, int **a3, int a4);
// [0x1a32c90] (816 bytes) sub_1A32C90
// uint32_t *sub_1A32C90(int a1, int a2, char *a3);
// [0x1a33040] (36 bytes) PROXY_POLICY_new
// int PROXY_POLICY_new();
// [0x1a33070] (44 bytes) PROXY_POLICY_free
// int PROXY_POLICY_free(char a1);
// [0x1a33120] (36 bytes) PROXY_CERT_INFO_EXTENSION_new
// int PROXY_CERT_INFO_EXTENSION_new();
// [0x1a33150] (44 bytes) PROXY_CERT_INFO_EXTENSION_free
// int PROXY_CERT_INFO_EXTENSION_free(char a1);
// [0x1a33180] (220 bytes) sub_1A33180
// int sub_1A33180(int a1, int a2, int a3, int **a4, uint32_t *a5, int a6);
// [0x1a332e0] (36 bytes) PKEY_USAGE_PERIOD_new
// int PKEY_USAGE_PERIOD_new();
// [0x1a33310] (44 bytes) PKEY_USAGE_PERIOD_free
// int PKEY_USAGE_PERIOD_free(char a1);
// [0x1a33340] (300 bytes) sub_1A33340
// int sub_1A33340(uint32_t *a1, int **a2, int a3, int a4, int a5);
// [0x1a33470] (411 bytes) X509V3_EXT_val_prn
// void X509V3_EXT_val_prn(int a1, int a2, uint32_t *a3, int *a4, int a5, int a6);
// [0x1a33610] (541 bytes) X509V3_EXT_print
// int X509V3_EXT_print(uint32_t *a1, int a2, int a3, int a4);
// [0x1a33830] (448 bytes) X509V3_extensions_print
// int X509V3_extensions_print(uint32_t *a1, int a2, int *a3, int a4, int a5);
// [0x1a339f0] (116 bytes) X509V3_EXT_print_fp
// int X509V3_EXT_print_fp(int a1, int a2, int a3, int a4);
// [0x1a33a70] (43 bytes) i2s_ASN1_OCTET_STRING
// uint8_t *i2s_ASN1_OCTET_STRING(int a1, int a2);
// [0x1a33aa0] (156 bytes) s2i_ASN1_OCTET_STRING
// char *s2i_ASN1_OCTET_STRING(int a1, int a2, char *a3);
// [0x1a33b40] (475 bytes) sub_1A33B40
// char *sub_1A33B40(int a1, uint32_t *a2, char *a3);
// [0x1a33d20] (268 bytes) sub_1A33D20
// int sub_1A33D20(int a1, int **a2, uint32_t *a3, int a4);
// [0x1a33eb0] (36 bytes) SXNETID_new
// int SXNETID_new();
// [0x1a33ee0] (44 bytes) SXNETID_free
// int SXNETID_free(char a1);
// [0x1a33f90] (36 bytes) SXNET_new
// int SXNET_new();
// [0x1a33fc0] (44 bytes) SXNET_free
// int SXNET_free(char a1);
// [0x1a33ff0] (116 bytes) SXNET_get_id_INTEGER
// int SXNET_get_id_INTEGER(int a1, int a2);
// [0x1a34070] (170 bytes) SXNET_get_id_ulong
// int SXNET_get_id_ulong(int a1, int a2);
// [0x1a34120] (154 bytes) SXNET_get_id_asc
// int SXNET_get_id_asc(int a1, int *a2);
// [0x1a341c0] (647 bytes) SXNET_add_id_INTEGER
// int SXNET_add_id_INTEGER(int *a1, int a2, char *s, signed int a4);
// [0x1a34450] (159 bytes) SXNET_add_id_ulong
// int SXNET_add_id_ulong(int *a1, int a2, char *a3, size_t a4);
// [0x1a344f0] (134 bytes) SXNET_add_id_asc
// int SXNET_add_id_asc(int *a1, int *a2, char *a3, size_t a4);
// [0x1a34580] (131 bytes) sub_1A34580
// int sub_1A34580(int a1, int a2, int *a3);
// [0x1a34610] (58 bytes) OPENSSL_gmtime
// struct tm *OPENSSL_gmtime(time_t *timer, struct tm *tp);
// [0x1a34650] (629 bytes) OPENSSL_gmtime_adj
// int OPENSSL_gmtime_adj(int *a1, int a2, int a3);
// [0x1a35410] (15 bytes) sub_1A35410
// int sub_1A35410(int a1, uint32_t *a2);
// [0x1a35420] (21 bytes) sub_1A35420
// int sub_1A35420(char a1, uint32_t *a2);
// [0x1a35440] (55 bytes) sub_1A35440
// int sub_1A35440(int16_t a1, uint8_t **a2);
// [0x1a35480] (75 bytes) sub_1A35480
// int sub_1A35480(int a1, uint8_t **a2);
// [0x1a354d0] (252 bytes) sub_1A354D0
// int sub_1A354D0( uint8_t *a1, int a2, int a3, int (*a4)(unsigned int, int), int a5);
// [0x1a355d0] (73 bytes) sub_1A355D0
// int sub_1A355D0(unsigned int a1, uint8_t **a2);
// [0x1a35620] (87 bytes) sub_1A35620
// int sub_1A35620(unsigned int a1, int *a2);
// [0x1a35680] (236 bytes) sub_1A35680
// int sub_1A35680(unsigned int c, int *a2);
// [0x1a35fe0] (285 bytes) sub_1A35FE0
// int sub_1A35FE0(int *a1, int a2, int a3, int a4, int a5, int a6);
// [0x1a36100] (413 bytes) sub_1A36100
// int sub_1A36100(const char *nptr, int a2, signed int *a3, uint32_t *a4);
// [0x1a362a0] (1126 bytes) sub_1A362A0
// int sub_1A362A0(char *s, signed int a2, signed int *a3);
// [0x1a36710] (245 bytes) sub_1A36710
// int sub_1A36710(char *nptr, int a2, int *a3);
// [0x1a378d0] (389 bytes) i2a_ASN1_INTEGER
// int i2a_ASN1_INTEGER(uint32_t *a1, int a2);
// [0x1a37a60] (997 bytes) a2i_ASN1_INTEGER
// int a2i_ASN1_INTEGER(uint32_t *a1, uint32_t *a2, uint8_t *a3, int a4);
// [0x1a37e50] (312 bytes) i2a_ASN1_STRING
// int i2a_ASN1_STRING(uint32_t *a1, int *a2);
// [0x1a37f90] (932 bytes) a2i_ASN1_STRING
// int a2i_ASN1_STRING(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x1a383c0] (36 bytes) PBEPARAM_new
// int PBEPARAM_new();
// [0x1a383f0] (44 bytes) PBEPARAM_free
// int PBEPARAM_free(char a1);
// [0x1a38710] (36 bytes) PBE2PARAM_new
// int PBE2PARAM_new();
// [0x1a38740] (44 bytes) PBE2PARAM_free
// int PBE2PARAM_free(char a1);
// [0x1a387f0] (36 bytes) PBKDF2PARAM_new
// int PBKDF2PARAM_new();
// [0x1a38820] (44 bytes) PBKDF2PARAM_free
// int PBKDF2PARAM_free(char a1);
// [0x1a39440] (467 bytes) sub_1A39440
// int sub_1A39440(int *a1, int *a2, unsigned int a3, unsigned int a4);
// [0x1a3af80] (212 bytes) sub_1A3AF80
// bool sub_1A3AF80(unsigned int **a1, int a2);
// [0x1a3bd50] (3593 bytes) Camellia_Ekeygen
// int Camellia_Ekeygen(int a1, uint8_t *a2, int a3);
// [0x1a3cb60] (1433 bytes) Camellia_EncryptBlock_Rounds
// unsigned int Camellia_EncryptBlock_Rounds(int a1, uint8_t *a2, uint32_t *a3, uint8_t *a4);
// [0x1a3d100] (70 bytes) Camellia_EncryptBlock
// unsigned int Camellia_EncryptBlock(int a1, uint8_t *a2, uint32_t *a3, uint8_t *a4);
// [0x1a3d150] (1474 bytes) Camellia_DecryptBlock_Rounds
// unsigned int Camellia_DecryptBlock_Rounds(int a1, uint8_t *a2, int a3, uint8_t *a4);
// [0x1a3d720] (70 bytes) Camellia_DecryptBlock
// unsigned int Camellia_DecryptBlock(int a1, uint8_t *a2, int a3, uint8_t *a4);
// [0x1a3d770] (178 bytes) sub_1A3D770
// int sub_1A3D770(int a1, int **a2, int a3, int a4);
// [0x1a3d830] (86 bytes) sub_1A3D830
// int sub_1A3D830(int a1, int *a2);
// [0x1a3d890] (139 bytes) sub_1A3D890
// int sub_1A3D890(int a1, int **a2);
// [0x1a3de20] (242 bytes) cms_CompressedData_create
// char ***cms_CompressedData_create(int a1);
// [0x1a3df20] (231 bytes) cms_CompressedData_init_bio
// uint8_t *cms_CompressedData_init_bio(int *a1);
// [0x1a3e010] (164 bytes) cms_DigestedData_create
// char ***cms_DigestedData_create(int a1);
// [0x1a3e0c0] (40 bytes) cms_DigestedData_init_bio
// uint32_t *cms_DigestedData_init_bio(int a1);
// [0x1a3e0f0] (398 bytes) cms_DigestedData_do_final
// bool cms_DigestedData_do_final(int a1, int **a2, int a3);
// [0x1a3e280] (1257 bytes) cms_EncryptedContent_init_bio
// uint8_t *cms_EncryptedContent_init_bio(uint32_t *a1);
// [0x1a3e770] (170 bytes) cms_EncryptedContent_init
// int cms_EncryptedContent_init(char ***a1, char **a2, const void *src, char **n);
// [0x1a3e980] (60 bytes) cms_EncryptedData_init_bio
// uint8_t *cms_EncryptedData_init_bio(int a1);
// [0x1a3ed50] (143 bytes) SMIME_write_CMS
// int SMIME_write_CMS(int a1, int *a2, int a3, int a4);
// [0x1a3ede0] (52 bytes) SMIME_read_CMS
// int SMIME_read_CMS(int a1, int a2);
// [0x1a3ee20] (49 bytes) sub_1A3EE20
// int sub_1A3EE20(int a1, int a2);
// [0x1a3ee60] (78 bytes) sub_1A3EE60
// int sub_1A3EE60(char **a1);
// [0x1a3eeb0] (185 bytes) sub_1A3EEB0
// void sub_1A3EEB0(void **a1);
// [0x1a3ef70] (122 bytes) sub_1A3EF70
// int sub_1A3EF70(const char **a1, const char **a2);
// [0x1a3eff0] (80 bytes) _CONF_get_section
// uint32_t *CONF_get_section(int a1, int a2);
// [0x1a3f040] (60 bytes) _CONF_get_section_values
// int CONF_get_section_values(int a1, int a2);
// [0x1a3f080] (161 bytes) _CONF_add_string
// int CONF_add_string(int a1, uint32_t *a2, uint32_t *a3);
// [0x1a3f130] (250 bytes) _CONF_get_string
// char *CONF_get_string(int a1, const char *a2, const char *name);
// [0x1a3f230] (93 bytes) _CONF_new_data
// bool CONF_new_data(int a1);
// [0x1a3f290] (115 bytes) _CONF_free_data
// void CONF_free_data(int a1);
// [0x1a3f310] (264 bytes) _CONF_new_section
// char *CONF_new_section(int a1, char *src);
// [0x1a3f420] (51 bytes) sub_1A3F420
// int sub_1A3F420(uint32_t *a1);
// [0x1a3f460] (51 bytes) sub_1A3F460
// int sub_1A3F460(uint32_t *a1);
// [0x1a3f4a0] (20 bytes) sub_1A3F4A0
// int sub_1A3F4A0(int a1, uint8_t a2);
// [0x1a3f4c0] (13 bytes) sub_1A3F4C0
// int sub_1A3F4C0(int a1, char a2);
// [0x1a3f4d0] (60 bytes) sub_1A3F4D0
// int sub_1A3F4D0(int a1, int a2);
// [0x1a3f510] (100 bytes) sub_1A3F510
// uint8_t *sub_1A3F510(int a1);
// [0x1a3f580] (1295 bytes) sub_1A3F580
// int sub_1A3F580(int a1, const char *a2, void **a3, char *s);
// [0x1a3fa90] (45 bytes) sub_1A3FA90
// int sub_1A3FA90(int a1);
// [0x1a3fac0] (69 bytes) sub_1A3FAC0
// int sub_1A3FAC0(void *a1);
// [0x1a3fb10] (75 bytes) sub_1A3FB10
// uint8_t *sub_1A3FB10(int a1, uint8_t *a2);
// [0x1a3fb60] (2530 bytes) sub_1A3FB60
// int sub_1A3FB60(int a1, uint32_t *a2, int *a3);
// [0x1a40550] (125 bytes) sub_1A40550
// int sub_1A40550(uint32_t *a1, int a2);
// [0x1a405d0] (216 bytes) sub_1A405D0
// int sub_1A405D0(int a1, char *a2, int *a3);
// [0x1a406b0] (22 bytes) NCONF_default
// char **NCONF_default();
// [0x1a406d0] (22 bytes) NCONF_WIN32
// char **NCONF_WIN32();
// [0x1a40a20] (2399 bytes) dsa_builtin_paramgen
// int dsa_builtin_paramgen( void ***a1, unsigned int a2, unsigned int a3, uint32_t *a4, void *src, size_t a6, int *a7, int *a8, uint32_t *a9);
// [0x1a41630] (362 bytes) sub_1A41630
// bool sub_1A41630(int a1, uint32_t *a2, int a3, int *a4);
// [0x1a417a0] (413 bytes) sub_1A417A0
// bool sub_1A417A0(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int *a7);
// [0x1a41940] (2038 bytes) sub_1A41940
// int sub_1A41940(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1a42140] (721 bytes) ec_GF2m_simple_mul
// int ec_GF2m_simple_mul(int a1, uint32_t *a2, uint32_t *a3, unsigned int a4, uint32_t **a5, int a6, int *a7);
// [0x1a42420] (42 bytes) ec_GF2m_precompute_mult
// bool ec_GF2m_precompute_mult(int a1, int *a2);
// [0x1a42450] (34 bytes) ec_GF2m_have_precompute_mult
// bool ec_GF2m_have_precompute_mult(int a1);
// [0x1a44730] (973 bytes) sub_1A44730
// int sub_1A44730(int a1, uint32_t *a2, int *a3);
// [0x1a44b00] (206 bytes) sub_1A44B00
// uint32_t *sub_1A44B00(int a1, int a2, uint32_t *a3);
// [0x1a44bd0] (133 bytes) i2v_ASN1_BIT_STRING
// int i2v_ASN1_BIT_STRING(int a1, int *a2, int a3);
// [0x1a44c60] (512 bytes) v2i_ASN1_BIT_STRING
// void **v2i_ASN1_BIT_STRING(int a1, int a2, int *a3);
// [0x1a44e60] (112 bytes) i2s_ASN1_ENUMERATED_TABLE
// char *i2s_ASN1_ENUMERATED_TABLE(int a1, int *a2);
// [0x1a44ed0] (130 bytes) sub_1A44ED0
// int sub_1A44ED0(int a1, int *a2, int a3);
// [0x1a44f60] (335 bytes) sub_1A44F60
// void **sub_1A44F60(int a1, int a2, int *a3);
// [0x1a45130] (36 bytes) EXTENDED_KEY_USAGE_new
// int EXTENDED_KEY_USAGE_new();
// [0x1a45160] (44 bytes) EXTENDED_KEY_USAGE_free
// int EXTENDED_KEY_USAGE_free(char a1);
// [0x1a45190] (221 bytes) sub_1A45190
// void **sub_1A45190(int a1, int a2, char *s);
// [0x1a45270] (186 bytes) sub_1A45270
// uint8_t *sub_1A45270(int a1, int a2);
// [0x1a45330] (42 bytes) sub_1A45330
// int *sub_1A45330(int a1, int a2, int *a3);
// [0x1a45360] (92 bytes) sub_1A45360
// int sub_1A45360(int a1, int a2);
// [0x1a45a10] (50 bytes) sub_1A45A10
// int sub_1A45A10(const char ***a1, const char ***a2);
// [0x1a45a50] (50 bytes) sub_1A45A50
// int sub_1A45A50(const char ***a1, const char ***a2);
// [0x1a45a90] (300 bytes) sub_1A45A90
// uint32_t *sub_1A45A90(char *a1, char *a2);
// [0x1a45bc0] (172 bytes) sub_1A45BC0
// const char *sub_1A45BC0(const char *a1);
// [0x1a45c70] (102 bytes) sub_1A45C70
// int sub_1A45C70(void *a1);
// [0x1a45ce0] (77 bytes) sub_1A45CE0
// int sub_1A45CE0(void **a1);
// [0x1a45d30] (582 bytes) sub_1A45D30
// int sub_1A45D30(uint32_t *a1, const char *s, int **a3);
// [0x1a45f80] (228 bytes) sub_1A45F80
// int sub_1A45F80(int **a1, char *a2, char *a3);
// [0x1a46070] (703 bytes) sub_1A46070
// int *sub_1A46070(uint32_t *a1);
// [0x1a46330] (274 bytes) sub_1A46330
// int sub_1A46330(uint32_t *a1, int a2);
// [0x1a46450] (84 bytes) sub_1A46450
// int sub_1A46450(int *a1);
// [0x1a464b0] (1324 bytes) SMIME_read_ASN1
// int SMIME_read_ASN1(uint32_t *a1, int *a2, int a3);
// [0x1a469e0] (438 bytes) SMIME_crlf_copy
// int SMIME_crlf_copy(uint32_t *a1, uint32_t *a2, char a3);
// [0x1a46cb0] (234 bytes) sub_1A46CB0
// int sub_1A46CB0(uint32_t *a1, int a2, uint32_t *a3, int16_t a4, int a5);
// [0x1a46e30] (1902 bytes) SMIME_write_ASN1
// int SMIME_write_ASN1(uint32_t *a1, void *a2, uint32_t *a3, int16_t a4, int a5, int a6, int *a7, int a8);
// [0x1a475a0] (428 bytes) SMIME_text
// bool SMIME_text(uint32_t *a1, uint32_t *a2);
// [0x1a47750] (95 bytes) sub_1A47750
// int sub_1A47750(int a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a477b0] (252 bytes) sub_1A477B0
// int sub_1A477B0(int a1, uint32_t *a2, uint32_t *a3, int **a4);
// [0x1a478b0] (178 bytes) sub_1A478B0
// int sub_1A478B0(int a1, uint32_t *a2, uint32_t *a3, int **a4);
// [0x1a47970] (101 bytes) sub_1A47970
// int sub_1A47970(int a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a47ba0] (59 bytes) sub_1A47BA0
// int sub_1A47BA0(int a1, int a2, int a3);
// [0x1a47be0] (83 bytes) sub_1A47BE0
// int sub_1A47BE0(int a1);
// [0x1a47c40] (140 bytes) sub_1A47C40
// char sub_1A47C40(uint32_t *a1);
// [0x1a47cd0] (1478 bytes) sub_1A47CD0
// int sub_1A47CD0(int a1, char *dest, signed int a3);
// [0x1a482a0] (1521 bytes) sub_1A482A0
// int sub_1A482A0(int a1, uint8_t *src, signed int a3);
// [0x1a488a0] (826 bytes) sub_1A488A0
// char sub_1A488A0(int a1, int a2, int a3, int a4);
// [0x1a48be0] (68 bytes) sub_1A48BE0
// int sub_1A48BE0(int a1, char *s);
// [0x1a48c50] (59 bytes) sub_1A48C50
// int sub_1A48C50(int a1, int a2, int a3);
// [0x1a48c90] (106 bytes) sub_1A48C90
// int sub_1A48C90(uint32_t *a1);
// [0x1a48d00] (230 bytes) sub_1A48D00
// int sub_1A48D00(uint32_t *a1);
// [0x1a48df0] (164 bytes) sub_1A48DF0
// int sub_1A48DF0( int a1, uint32_t *a2, void (*a3)(int, uint32_t *, uint32_t *, uint32_t *), int a4);
// [0x1a48ea0] (59 bytes) sub_1A48EA0
// int sub_1A48EA0(int a1, int a2, int a3);
// [0x1a48ee0] (59 bytes) sub_1A48EE0
// int sub_1A48EE0(int a1, int a2, int a3);
// [0x1a48f20] (510 bytes) sub_1A48F20
// int sub_1A48F20(int a1, int a2, int a3, int *a4);
// [0x1a49120] (660 bytes) sub_1A49120
// int sub_1A49120(int a1, int a2, int a3);
// [0x1a493c0] (68 bytes) sub_1A493C0
// int sub_1A493C0(int a1, char *s);
// [0x1a4a7e0] (87 bytes) sub_1A4A7E0
// int sub_1A4A7E0(int a1, uint32_t *a2);
// [0x1a4aee0] (23 bytes) sub_1A4AEE0
// bool sub_1A4AEE0(uint32_t *a1, int a2);
// [0x1a4af00] (75 bytes) sub_1A4AF00
// int sub_1A4AF00(uint32_t *a1);
// [0x1a4bc20] (80 bytes) sub_1A4BC20
// int sub_1A4BC20(uint8_t *a1, uint32_t *a2);
// [0x1a4bc70] (38 bytes) sub_1A4BC70
// int sub_1A4BC70(uint8_t a1, uint32_t *a2);
// [0x1a4bca0] (181 bytes) sub_1A4BCA0
// int sub_1A4BCA0(uint8_t a1, uint32_t *a2);
// [0x1a4bd60] (19 bytes) sub_1A4BD60
// int sub_1A4BD60(uint8_t a1, uint32_t *a2);
// [0x1a4bdc0] (5048 bytes) sub_1A4BDC0
// int sub_1A4BDC0(int a1, int (*a2)(uint32_t, int), char *a3, unsigned int *a4);
