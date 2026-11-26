#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_internal_1_part01.h
// Library: openssl | Module: openssl_internal_1_part01
// Binary Address Span: 0x19ce400 .. 0x1a27ef0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x19ce400] (141 bytes) RIPEMD160_Init
// int RIPEMD160_Init(int a1);
// [0x19ce490] (4878 bytes) ripemd160_block_data_order
// uint32_t *ripemd160_block_data_order(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x19cf7a0] (325 bytes) RIPEMD160_Final
// int RIPEMD160_Final(uint32_t *a1, uint32_t *a2);
// [0x19cf8f0] (50 bytes) RIPEMD160_Transform
// uint32_t *RIPEMD160_Transform(uint32_t *a1, uint32_t *a2);
// [0x19cf930] (456 bytes) RIPEMD160_Update
// int RIPEMD160_Update(int a1, char *src, size_t a3);
// [0x19cfb00] (45 bytes) sub_19CFB00
// int sub_19CFB00(int a1, int a2);
// [0x19cfb30] (350 bytes) sub_19CFB30
// int sub_19CFB30(int a1, int a2, int a3, uint32_t *a4);
// [0x19cfc90] (37 bytes) sub_19CFC90
// int sub_19CFC90(int a1);
// [0x19cfcc0] (40 bytes) sub_19CFCC0
// int sub_19CFCC0(int a1);
// [0x19cfcf0] (78 bytes) sub_19CFCF0
// unsigned int sub_19CFCF0(unsigned int result, unsigned int *a2);
// [0x19cfd40] (37 bytes) sub_19CFD40
// int sub_19CFD40(int a1);
// [0x19cfd70] (845 bytes) sub_19CFD70
// bool sub_19CFD70(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x19d00c0] (32 bytes) sub_19D00C0
// bool sub_19D00C0(uint32_t *a1, int a2, int a3);
// [0x19d00e0] (32 bytes) sub_19D00E0
// bool sub_19D00E0(uint32_t *a1, int a2, int a3);
// [0x19d0100] (168 bytes) sub_19D0100
// int sub_19D0100(int a1, int a2);
// [0x19d01b0] (142 bytes) sub_19D01B0
// int sub_19D01B0(char *a1, int a2, int a3);
// [0x19d0240] (114 bytes) sub_19D0240
// int sub_19D0240(char *a1, int a2);
// [0x19d02c0] (210 bytes) sub_19D02C0
// int sub_19D02C0(uint32_t *a1, int a2);
// [0x19d03a0] (115 bytes) sub_19D03A0
// bool sub_19D03A0(int a1, int a2);
// [0x19d0420] (211 bytes) sub_19D0420
// int sub_19D0420(char *a1, int a2);
// [0x19d0500] (130 bytes) sub_19D0500
// int sub_19D0500(int a1, void **a2);
// [0x19d0690] (44 bytes) RSAPublicKey_dup
// int RSAPublicKey_dup(int a1);
// [0x19d06c0] (44 bytes) RSAPrivateKey_dup
// int RSAPrivateKey_dup(int a1);
// [0x19d13f0] (89 bytes) sub_19D13F0
// int sub_19D13F0(int a1, int a2, int *a3, int a4, int a5);
// [0x19d1450] (89 bytes) sub_19D1450
// int sub_19D1450(int a1, int a2, int *a3, int a4, int a5);
// [0x19d14b0] (125 bytes) sub_19D14B0
// char sub_19D14B0(uint32_t *a1);
// [0x19d1530] (240 bytes) sub_19D1530
// int sub_19D1530(int a1, char *a2);
// [0x19d1620] (85 bytes) sub_19D1620
// int sub_19D1620(int a1);
// [0x19d1680] (818 bytes) sub_19D1680
// int sub_19D1680(int a1, const char *a2, char *nptr);
// [0x19d19c0] (190 bytes) sub_19D19C0
// int sub_19D19C0(int a1, int a2);
// [0x19d1a80] (625 bytes) sub_19D1A80
// char sub_19D1A80(int a1, int a2, int a3, int a4);
// [0x19d1d00] (588 bytes) sub_19D1D00
// int sub_19D1D00(int a1, void *dest, signed int *a3, int a4, size_t a5);
// [0x19d1f50] (553 bytes) sub_19D1F50
// int sub_19D1F50(int a1, int a2, size_t a3, void *s1, size_t n);
// [0x19d2180] (700 bytes) sub_19D2180
// int sub_19D2180(int a1, int a2, int *a3, void *src, int a5);
// [0x19d2440] (125 bytes) sub_19D2440
// int sub_19D2440(uint32_t *a1, int a2);
// [0x19d33d0] (1128 bytes) int_rsa_verify
// int int_rsa_verify(unsigned int a1, void *s2, size_t a3, void *dest, int *a5, int a6, size_t a7, int a8);
// [0x19d3b90] (2841 bytes) SEED_set_key
// int SEED_set_key(unsigned int *a1, int *a2);
// [0x19d46b0] (3515 bytes) SEED_encrypt
// int SEED_encrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3);
// [0x19d5470] (3515 bytes) SEED_decrypt
// int SEED_decrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3);
// [0x19d6230] (156 bytes) SEED_cbc_encrypt
// int SEED_cbc_encrypt(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x19d62d0] (92 bytes) SEED_cfb128_encrypt
// int SEED_cfb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x19d6330] (75 bytes) SEED_ecb_encrypt
// int SEED_ecb_encrypt(unsigned int *a1, uint8_t *a2, uint32_t *a3, int a4);
// [0x19d6380] (84 bytes) SEED_ofb128_encrypt
// int SEED_ofb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x19d63e0] (5831 bytes) sub_19D63E0
// int sub_19D63E0(int *a1, int a2, int a3);
// [0x19d7f00] (4765 bytes) sub_19D7F00
// signed int sub_19D7F00(signed int result, int a2, int a3);
// [0x19d91a0] (176 bytes) SHA224_Init
// int SHA224_Init(int a1);
// [0x19d94b0] (50 bytes) SHA224_Update
// int SHA224_Update(int a1, char *a2, size_t a3);
// [0x19d9730] (42 bytes) SHA224_Final
// char SHA224_Final(uint8_t *a1, signed int a2);
// [0x19d9800] (158 bytes) SHA224
// uint8_t *SHA224(char *a1, size_t a2, uint8_t *a3);
// [0x19d98a0] (2677 bytes) sub_19D98A0
// int64_t *sub_19D98A0(int64_t *result, int a2, int a3);
// [0x19da320] (169 bytes) SHA384_Init
// int SHA384_Init(uint32_t *a1);
// [0x19da700] (42 bytes) SHA384_Final
// int SHA384_Final(uint8_t *a1, int a2);
// [0x19da8a0] (50 bytes) SHA384_Update
// int SHA384_Update(int a1, char *a2, size_t a3);
// [0x19da900] (158 bytes) SHA384
// uint8_t *SHA384(char *a1, size_t a2, uint8_t *a3);
// [0x19daa40] (5608 bytes) sub_19DAA40
// int sub_19DAA40(int *a1, unsigned int *a2, int a3);
// [0x19dc030] (440 bytes) SHA_Update
// int SHA_Update(int a1, char *src, size_t a3);
// [0x19dc1f0] (21 bytes) SHA_Transform
// int SHA_Transform(int *a1, unsigned int *a2);
// [0x19dc210] (472 bytes) SHA_Final
// int SHA_Final(uint8_t *a1, int a2);
// [0x19dc3f0] (141 bytes) SHA_Init
// int SHA_Init(int a1);
// [0x19dc480] (26 bytes) sk_set_cmp_func
// int sk_set_cmp_func(int a1, int a2);
// [0x19dc4a0] (188 bytes) sk_new
// uint32_t *sk_new(int a1);
// [0x19dc560] (34 bytes) sk_new_null
// uint32_t *sk_new_null();
// [0x19dc590] (205 bytes) sk_insert
// int sk_insert(int a1, int a2, int a3);
// [0x19dc660] (130 bytes) sk_delete
// int sk_delete(int *a1, int a2);
// [0x19dc6f0] (92 bytes) sk_delete_ptr
// int sk_delete_ptr(int *a1, int a2);
// [0x19dc750] (48 bytes) sk_push
// int sk_push(int *a1, int a2);
// [0x19dc780] (50 bytes) sk_unshift
// int sk_unshift(int a1, int a2);
// [0x19dc7c0] (54 bytes) sk_shift
// int sk_shift(int *a1);
// [0x19dc800] (60 bytes) sk_pop
// int sk_pop(int *a1);
// [0x19dc840] (82 bytes) sk_zero
// void sk_zero(int a1);
// [0x19dc8a0] (67 bytes) sk_free
// int sk_free(void **a1);
// [0x19dc8f0] (79 bytes) sk_pop_free
// int sk_pop_free(void **a1, void (*a2)(uint32_t));
// [0x19dc940] (172 bytes) sk_dup
// void **sk_dup(int a1);
// [0x19dc9f0] (17 bytes) sk_num
// int sk_num(int a1);
// [0x19dca10] (41 bytes) sk_value
// int sk_value(int *a1, int a2);
// [0x19dca40] (44 bytes) sk_set
// int sk_set(int *a1, int a2, int a3);
// [0x19dca70] (90 bytes) sk_sort
// void sk_sort(int a1);
// [0x19dcad0] (176 bytes) sub_19DCAD0
// int sub_19DCAD0(int a1, int a2, char a3);
// [0x19dcb80] (21 bytes) sk_find_ex
// int sk_find_ex(int a1, int a2);
// [0x19dcba0] (21 bytes) sk_find
// int sk_find(int a1, int a2);
// [0x19dcbc0] (17 bytes) sk_is_sorted
// int sk_is_sorted(int a1);
// [0x19dcca0] (93 bytes) WHIRLPOOL_Init
// int WHIRLPOOL_Init(uint8_t *a1);
// [0x19dcd00] (859 bytes) WHIRLPOOL_BitUpdate
// unsigned int WHIRLPOOL_BitUpdate(int a1, uint8_t *a2, unsigned int a3);
// [0x19dd060] (160 bytes) WHIRLPOOL_Update
// int WHIRLPOOL_Update(int a1, uint8_t *a2, unsigned int a3);
// [0x19dd100] (515 bytes) WHIRLPOOL_Final
// int WHIRLPOOL_Final(uint32_t *a1, uint32_t *a2);
// [0x19dd310] (142 bytes) WHIRLPOOL
// uint32_t *WHIRLPOOL(uint8_t *a1, unsigned int a2, uint32_t *a3);
// [0x19dd3a0] (34 bytes) X509at_get_attr_count
// int X509at_get_attr_count(int a1);
// [0x19dd3d0] (128 bytes) X509at_get_attr_by_OBJ
// int X509at_get_attr_by_OBJ(int *a1, int a2, int a3);
// [0x19dd450] (71 bytes) X509at_get_attr_by_NID
// int X509at_get_attr_by_NID(int *a1, unsigned int a2, int a3);
// [0x19dd4a0] (98 bytes) X509at_get_attr
// int X509at_get_attr(int *a1, int a2);
// [0x19dd510] (98 bytes) X509at_delete_attr
// int X509at_delete_attr(int *a1, int a2);
// [0x19dd580] (278 bytes) X509at_add1_attr
// int *X509at_add1_attr(int **a1, int a2);
// [0x19ddac0] (124 bytes) X509at_add1_attr_by_txt
// int *X509at_add1_attr_by_txt(int **a1, char *a2, int a3, char *a4, size_t a5);
// [0x19ddbf0] (124 bytes) X509at_add1_attr_by_NID
// int *X509at_add1_attr_by_NID(int **a1, unsigned int a2, int a3, char *a4, size_t a5);
// [0x19ddc70] (124 bytes) X509at_add1_attr_by_OBJ
// int *X509at_add1_attr_by_OBJ(int **a1, int a2, int a3, char *a4, size_t a5);
// [0x19dde70] (215 bytes) X509at_get0_data_by_OBJ
// int X509at_get0_data_by_OBJ(int *a1, int a2, int a3, int a4);
// [0x19dea50] (93 bytes) sub_19DEA50
// int sub_19DEA50(uint32_t *a1);
// [0x19deab0] (135 bytes) sub_19DEAB0
// int sub_19DEAB0(int **a1, uint32_t *a2);
// [0x19deb40] (271 bytes) sub_19DEB40
// int sub_19DEB40(int *a1, int a2, int a3, uint32_t *a4);
// [0x19e04b0] (11 bytes) sub_19E04B0
// int sub_19E04B0(int a1);
// [0x19e04c0] (187 bytes) sub_19E04C0
// int sub_19E04C0(int *a1, int a2, int a3);
// [0x19e0580] (324 bytes) sub_19E0580
// bool sub_19E0580(int a1, int a2, int a3);
// [0x19e06d0] (131 bytes) sub_19E06D0
// int sub_19E06D0(int a1, int a2, int a3);
// [0x19e0760] (373 bytes) sub_19E0760
// int sub_19E0760(int a1);
// [0x19e08e0] (182 bytes) sub_19E08E0
// bool sub_19E08E0(int a1, int a2, int a3);
// [0x19e0d50] (321 bytes) sub_19E0D50
// int sub_19E0D50(int a1, int a2, int a3);
// [0x19e0ea0] (2088 bytes) sub_19E0EA0
// bool sub_19E0EA0(int a1, int *a2, uint32_t *a3, int *a4, int *a5, int *a6, int *a7);
// [0x19e16d0] (785 bytes) sub_19E16D0
// int sub_19E16D0(int a1);
// [0x19e19f0] (694 bytes) sub_19E19F0
// int sub_19E19F0(int a1);
// [0x19e3360] (881 bytes) sub_19E3360
// void *sub_19E3360(int a1, int a2);
// [0x19e36e0] (46 bytes) sub_19E36E0
// int sub_19E36E0(const char **a1, const char **a2);
// [0x19e3710] (50 bytes) sub_19E3710
// int sub_19E3710(const char ***a1, const char ***a2);
// [0x19e40b0] (68 bytes) NETSCAPE_SPKI_verify
// int NETSCAPE_SPKI_verify(uint32_t *a1, int a2);
// [0x19e4220] (84 bytes) NETSCAPE_SPKI_sign
// int NETSCAPE_SPKI_sign(uint32_t *a1, int a2, int a3);
// [0x19e5430] (52 bytes) sub_19E5430
// int sub_19E5430(int a1, int a2);
// [0x19e5470] (91 bytes) policy_cache_free
// int policy_cache_free(void *a1);
// [0x19e54d0] (1100 bytes) policy_cache_set
// int policy_cache_set(int a1);
// [0x19e5920] (91 bytes) policy_cache_find_data
// int policy_cache_find_data(int a1, int a2);
// [0x19e5980] (106 bytes) policy_data_free
// int policy_data_free(void *a1);
// [0x19e59f0] (268 bytes) policy_data_new
// uint32_t *policy_data_new(uint32_t *a1, int a2, int a3);
// [0x19e5b00] (370 bytes) policy_cache_set_mapping
// int policy_cache_set_mapping(int a1, int *a2);
// [0x19e5c80] (45 bytes) sub_19E5C80
// uint8_t *sub_19E5C80(int *a1);
// [0x19e5cb0] (180 bytes) sub_19E5CB0
// int sub_19E5CB0(int a1, int a2, int a3, uint32_t **a4, int a5);
// [0x19e6a80] (36 bytes) AUTHORITY_KEYID_new
// int AUTHORITY_KEYID_new();
// [0x19e6ab0] (44 bytes) AUTHORITY_KEYID_free
// int AUTHORITY_KEYID_free(char a1);
// [0x19e6ae0] (665 bytes) sub_19E6AE0
// int sub_19E6AE0(uint32_t *a1, int *a2, int a3);
// [0x19e6d80] (197 bytes) sub_19E6D80
// int sub_19E6D80(int a1, int *a2, uint32_t *a3, int a4);
// [0x19e6e50] (44 bytes) POLICYINFO_free
// int POLICYINFO_free(char a1);
// [0x19e6f00] (36 bytes) CERTIFICATEPOLICIES_new
// int CERTIFICATEPOLICIES_new();
// [0x19e6f30] (44 bytes) CERTIFICATEPOLICIES_free
// int CERTIFICATEPOLICIES_free(char a1);
// [0x19e6fe0] (36 bytes) POLICYINFO_new
// int POLICYINFO_new();
// [0x19e7090] (36 bytes) POLICYQUALINFO_new
// int POLICYQUALINFO_new();
// [0x19e70c0] (44 bytes) POLICYQUALINFO_free
// int POLICYQUALINFO_free(char a1);
// [0x19e7170] (36 bytes) USERNOTICE_new
// int USERNOTICE_new();
// [0x19e71a0] (44 bytes) USERNOTICE_free
// int USERNOTICE_free(char a1);
// [0x19e7250] (36 bytes) NOTICEREF_new
// int NOTICEREF_new();
// [0x19e7280] (2586 bytes) sub_19E7280
// int *sub_19E7280(int a1, int a2, char *a3);
// [0x19e7ca0] (44 bytes) NOTICEREF_free
// int NOTICEREF_free(char a1);
// [0x19e7de0] (98 bytes) sub_19E7DE0
// int sub_19E7DE0(int a1, int *a2);
// [0x19e7e50] (148 bytes) sub_19E7E50
// int sub_19E7E50(uint32_t *a1, int *a2, int a3);
// [0x19e7ef0] (304 bytes) sub_19E7EF0
// int sub_19E7EF0(int *a1, char *a2);
// [0x19e8020] (44 bytes) DIST_POINT_free
// int DIST_POINT_free(char a1);
// [0x19e8050] (223 bytes) sub_19E8050
// int sub_19E8050(uint32_t *a1, int a2, int a3, int **a4, int a5);
// [0x19e8130] (240 bytes) sub_19E8130
// int sub_19E8130(uint32_t *a1, const char *a2, int a3, int a4);
// [0x19e8220] (231 bytes) sub_19E8220
// int sub_19E8220(int a1, int *a2, uint32_t *a3, int a4);
// [0x19e8310] (357 bytes) sub_19E8310
// int sub_19E8310(int a1, int a2, int a3, int a4, uint32_t *a5, int a6);
// [0x19e8480] (226 bytes) sub_19E8480
// int sub_19E8480(int a1, char *a2);
// [0x19e85f0] (36 bytes) DIST_POINT_NAME_new
// int DIST_POINT_NAME_new();
// [0x19e8620] (621 bytes) sub_19E8620
// int sub_19E8620(int a1, int a2, const char *a3, char **a4);
// [0x19e8890] (44 bytes) DIST_POINT_NAME_free
// int DIST_POINT_NAME_free(char a1);
// [0x19e8940] (36 bytes) DIST_POINT_new
// int DIST_POINT_new();
// [0x19e8970] (756 bytes) sub_19E8970
// int *sub_19E8970(int a1, int a2, int *a3);
// [0x19e8cf0] (36 bytes) CRL_DIST_POINTS_new
// int CRL_DIST_POINTS_new();
// [0x19e8d20] (44 bytes) CRL_DIST_POINTS_free
// int CRL_DIST_POINTS_free(char a1);
// [0x19e8dd0] (36 bytes) ISSUING_DIST_POINT_new
// int ISSUING_DIST_POINT_new();
// [0x19e8e00] (44 bytes) ISSUING_DIST_POINT_free
// int ISSUING_DIST_POINT_free(char a1);
// [0x19e8e30] (574 bytes) sub_19E8E30
// int sub_19E8E30(int a1, int a2, int *a3);
// [0x19e9070] (233 bytes) DIST_POINT_set_dpname
// int DIST_POINT_set_dpname(uint32_t *a1, int a2);
// [0x19e9260] (36 bytes) OTHERNAME_new
// int OTHERNAME_new();
// [0x19e9290] (44 bytes) OTHERNAME_free
// int OTHERNAME_free(char a1);
// [0x19e9340] (36 bytes) EDIPARTYNAME_new
// int EDIPARTYNAME_new();
// [0x19e9370] (44 bytes) EDIPARTYNAME_free
// int EDIPARTYNAME_free(char a1);
// [0x19e93a0] (36 bytes) GENERAL_NAME_new
// int GENERAL_NAME_new();
// [0x19e93d0] (44 bytes) GENERAL_NAME_free
// int GENERAL_NAME_free(char a1);
// [0x19e9480] (36 bytes) GENERAL_NAMES_new
// int GENERAL_NAMES_new();
// [0x19e94b0] (44 bytes) GENERAL_NAMES_free
// int GENERAL_NAMES_free(char a1);
// [0x19e94e0] (54 bytes) GENERAL_NAME_dup
// int GENERAL_NAME_dup(int a1);
// [0x19e9520] (111 bytes) OTHERNAME_cmp
// int OTHERNAME_cmp(int *a1, int *a2);
// [0x19e9590] (298 bytes) GENERAL_NAME_cmp
// int GENERAL_NAME_cmp(int a1, int a2);
// [0x19e96c0] (70 bytes) GENERAL_NAME_set0_value
// int GENERAL_NAME_set0_value(uint32_t *a1, int a2, int a3);
// [0x19e9710] (53 bytes) GENERAL_NAME_get0_value
// int GENERAL_NAME_get0_value(uint32_t *a1, uint32_t *a2);
// [0x19e9750] (77 bytes) GENERAL_NAME_set0_othername
// int GENERAL_NAME_set0_othername(uint32_t *a1, int a2, int a3);
// [0x19e97a0] (50 bytes) GENERAL_NAME_get0_otherName
// int GENERAL_NAME_get0_otherName(int a1, uint32_t *a2, uint32_t *a3);
// [0x19e97e0] (44 bytes) ACCESS_DESCRIPTION_free
// int ACCESS_DESCRIPTION_free(char a1);
// [0x19e9810] (494 bytes) sub_19E9810
// int *sub_19E9810(int a1, int *a2, int *a3);
// [0x19e9a80] (36 bytes) ACCESS_DESCRIPTION_new
// int ACCESS_DESCRIPTION_new();
// [0x19e9ab0] (678 bytes) sub_19E9AB0
// int *sub_19E9AB0(int a1, int a2, int *a3);
// [0x19e9de0] (36 bytes) AUTHORITY_INFO_ACCESS_new
// int AUTHORITY_INFO_ACCESS_new();
// [0x19e9e10] (44 bytes) AUTHORITY_INFO_ACCESS_free
// int AUTHORITY_INFO_ACCESS_free(char a1);
// [0x19e9e40] (49 bytes) i2a_ACCESS_DESCRIPTION
// int i2a_ACCESS_DESCRIPTION(int a1, uint32_t *a2);
// [0x19e9e80] (534 bytes) sub_19E9E80
// int sub_19E9E80(int *a1, uint32_t *a2, int a3, int a4);
// [0x19ea0a0] (114 bytes) sub_19EA0A0
// int sub_19EA0A0(int a1, int **a2, uint32_t *a3, int a4);
// [0x19ea120] (795 bytes) sub_19EA120
// int sub_19EA120(int *a1, int *a2);
// [0x19ea440] (331 bytes) sub_19EA440
// int sub_19EA440(uint32_t *a1, int a2);
// [0x19ea590] (36 bytes) GENERAL_SUBTREE_new
// int GENERAL_SUBTREE_new();
// [0x19ea5c0] (44 bytes) GENERAL_SUBTREE_free
// int GENERAL_SUBTREE_free(char a1);
// [0x19ea5f0] (36 bytes) NAME_CONSTRAINTS_new
// int NAME_CONSTRAINTS_new();
// [0x19ea620] (44 bytes) NAME_CONSTRAINTS_free
// int NAME_CONSTRAINTS_free(char a1);
// [0x19ea650] (451 bytes) sub_19EA650
// int sub_19EA650(int a1, int a2, int *a3);
// [0x19ea820] (256 bytes) NAME_CONSTRAINTS_check
// int NAME_CONSTRAINTS_check(int a1, int a2);
// [0x19ea920] (105 bytes) sub_19EA920
// int sub_19EA920(int a1, uint32_t *a2, int a3);
// [0x19ea990] (36 bytes) POLICY_CONSTRAINTS_new
// int POLICY_CONSTRAINTS_new();
// [0x19ea9c0] (44 bytes) POLICY_CONSTRAINTS_free
// int POLICY_CONSTRAINTS_free(char a1);
// [0x19ea9f0] (468 bytes) sub_19EA9F0
// uint32_t *sub_19EA9F0(int a1, int a2, int *a3);
// [0x19eabd0] (168 bytes) sub_19EABD0
// int sub_19EABD0(int a1, int *a2, int a3);
// [0x19eac80] (44 bytes) POLICY_MAPPING_free
// int POLICY_MAPPING_free(char a1);
// [0x19eacb0] (36 bytes) POLICY_MAPPING_new
// int POLICY_MAPPING_new();
// [0x19eace0] (508 bytes) sub_19EACE0
// void **sub_19EACE0(int a1, int a2, int *a3);
// [0x19eaee0] (17 bytes) sub_19EAEE0
// int sub_19EAEE0(uint32_t **a1, uint32_t **a2);
// [0x19eaf00] (13 bytes) sub_19EAF00
// int sub_19EAF00(uint32_t *a1, uint32_t *a2);
// [0x19eaf10] (12 bytes) sub_19EAF10
// int sub_19EAF10();
// [0x19eaf20] (121 bytes) sub_19EAF20
// int sub_19EAF20(int a1);
// [0x19eafa0] (30 bytes) sub_19EAFA0
// int sub_19EAFA0(int a1, int a2, int a3);
// [0x19eafc0] (110 bytes) sub_19EAFC0
// int sub_19EAFC0(int a1, int a2, int a3);
// [0x19eb030] (110 bytes) sub_19EB030
// int sub_19EB030(int a1, int a2, int a3);
// [0x19eb0a0] (79 bytes) sub_19EB0A0
// int sub_19EB0A0(int a1, int a2, int a3);
// [0x19eb0f0] (94 bytes) sub_19EB0F0
// int sub_19EB0F0(int a1, int a2);
// [0x19eb150] (66 bytes) sub_19EB150
// int sub_19EB150(int a1, int a2, int a3);
// [0x19eb1a0] (66 bytes) sub_19EB1A0
// int sub_19EB1A0(int a1, int a2, int a3);
// [0x19eb1f0] (53 bytes) sub_19EB1F0
// int sub_19EB1F0(int a1, int a2, int a3);
// [0x19eb230] (188 bytes) sub_19EB230
// int sub_19EB230(int a1, uint32_t *a2, int a3);
// [0x19eb2f0] (88 bytes) sub_19EB2F0
// void sub_19EB2F0(void *a1);
// [0x19eb7d0] (1539 bytes) sub_19EB7D0
// int16_t sub_19EB7D0(int a1);
// [0x19ec150] (198 bytes) sub_19EC150
// int sub_19EC150(uint8_t *a1, const char *s);
// [0x19ec220] (34 bytes) sub_19EC220
// int sub_19EC220(void *a1);
// [0x19ec250] (96 bytes) X509V3_conf_free
// int X509V3_conf_free(void **a1);
// [0x19ec2b0] (46 bytes) sub_19EC2B0
// int sub_19EC2B0(const char **a1, const char **a2);
// [0x19ec2e0] (148 bytes) sub_19EC2E0
// const char *sub_19EC2E0(const char *a1);
// [0x19ec380] (255 bytes) sub_19EC380
// int sub_19EC380(const char *a1, int a2, uint32_t *a3);
// [0x19ec480] (408 bytes) X509V3_add_value
// int X509V3_add_value(char *a1, char *a2, int **a3);
// [0x19ec620] (50 bytes) X509V3_add_value_uchar
// int X509V3_add_value_uchar(char *a1, char *a2, int **a3);
// [0x19ec660] (88 bytes) X509V3_add_value_bool
// int X509V3_add_value_bool(char *a1, int a2, int **a3);
// [0x19ec6c0] (65 bytes) X509V3_add_value_bool_nf
// int X509V3_add_value_bool_nf(char *a1, int a2, int **a3);
// [0x19ec710] (154 bytes) i2s_ASN1_ENUMERATED
// int i2s_ASN1_ENUMERATED(int a1, int a2);
// [0x19ec7b0] (154 bytes) i2s_ASN1_INTEGER
// int i2s_ASN1_INTEGER(int a1, uint32_t *a2);
// [0x19ec850] (414 bytes) s2i_ASN1_INTEGER
// int *s2i_ASN1_INTEGER(int a1, int *a2);
// [0x19ec9f0] (118 bytes) X509V3_add_value_int
// int X509V3_add_value_int(char *a1, uint32_t *a2, int **a3);
// [0x19eca70] (572 bytes) X509V3_get_value_bool
// int X509V3_get_value_bool(int a1, uint32_t *a2);
// [0x19eccb0] (146 bytes) X509V3_get_value_int
// int X509V3_get_value_int(int a1, int **a2);
// [0x19ecd50] (530 bytes) X509V3_parse_list
// void *X509V3_parse_list(char *a1);
// [0x19ecf70] (239 bytes) hex_to_string
// uint8_t *hex_to_string(char *a1, int a2);
// [0x19ed060] (593 bytes) string_to_hex
// uint8_t *string_to_hex(char *s, uint32_t *a2);
// [0x19ed2c0] (114 bytes) name_cmp
// int name_cmp(char *s1, char *s);
// [0x19ed370] (208 bytes) sub_19ED370
// int sub_19ED370(void ***a1, uint32_t *a2);
// [0x19ed440] (189 bytes) sub_19ED440
// void **sub_19ED440(int a1, int *a2);
// [0x19ed6e0] (453 bytes) a2i_ipadd
// int a2i_ipadd(char *dest, char *s);
// [0x19ed8b0] (254 bytes) a2i_IPADDRESS_NC
// int a2i_IPADDRESS_NC(char *a1);
// [0x19ed9b0] (132 bytes) a2i_IPADDRESS
// int a2i_IPADDRESS(char *a1);
// [0x19eda40] (288 bytes) X509V3_NAME_from_section
// int X509V3_NAME_from_section(int a1, int *a2, int a3);
// [0x19eefc0] (280 bytes) i2c_ASN1_BIT_STRING
// int i2c_ASN1_BIT_STRING(int a1, uint8_t **a2);
// [0x19ef0e0] (463 bytes) c2i_ASN1_BIT_STRING
// void **c2i_ASN1_BIT_STRING(void ***a1, char **a2, int a3);
// [0x19ef510] (685 bytes) sub_19EF510
// int sub_19EF510(uint32_t *a1, size_t **a2);
// [0x19f0a30] (1523 bytes) a2d_ASN1_OBJECT
// int a2d_ASN1_OBJECT(int a1, int a2, char *s, size_t a4);
// [0x19f1030] (58 bytes) i2t_ASN1_OBJECT
// size_t i2t_ASN1_OBJECT(char *a1, signed int a2, int a3);
// [0x19f1070] (349 bytes) i2a_ASN1_OBJECT
// int i2a_ASN1_OBJECT(uint32_t *a1, int a2);
// [0x19f1310] (478 bytes) c2i_ASN1_OBJECT
// uint32_t *c2i_ASN1_OBJECT(uint32_t **a1, uint32_t *a2, signed int n);
// [0x19f1d50] (89 bytes) sub_19F1D50
// bool sub_19F1D50(FILE *s, void *ptr, size_t n);
// [0x19f1db0] (81 bytes) sub_19F1DB0
// bool sub_19F1DB0(uint32_t *a1, int a2, int a3);
// [0x19f1e10] (480 bytes) sub_19F1E10
// int sub_19F1E10( unsigned int a1, char a2, uint8_t *a3, int (*a4)(int, char *, int), int a5);
// [0x19f1ff0] (612 bytes) sub_19F1FF0
// int sub_19F1FF0( uint8_t *a1, int a2, char a3, char a4, uint8_t *a5, int (*a6)(int, char *, int), int a7);
// [0x19f2260] (1011 bytes) sub_19F2260
// int sub_19F2260(int (*a1)(int, char *, int), int a2, int16_t a3, int a4);
// [0x19f2660] (1381 bytes) sub_19F2660
// int sub_19F2660( int (*a1)(int, const char *, int), int a2, int a3, int a4, unsigned int a5);
// [0x19f2df0] (17 bytes) sub_19F2DF0
// int sub_19F2DF0(uint32_t **a1, uint32_t **a2);
// [0x19f2e10] (13 bytes) sub_19F2E10
// int sub_19F2E10(uint32_t *a1, uint32_t *a2);
// [0x19f2e20] (40 bytes) sub_19F2E20
// void *sub_19F2E20(void *a1);
// [0x19f3eb0] (870 bytes) UTF8_getc
// char UTF8_getc(uint8_t *a1, int a2, unsigned int *a3);
// [0x19f4220] (522 bytes) UTF8_putc
// int UTF8_putc(uint8_t *a1, int a2, unsigned int a3);
// [0x19f4920] (2955 bytes) sub_19F4920
// int sub_19F4920(uint32_t *a1, uint32_t *a2, int a3, int a4, int a5, int a6, int a7);
// [0x19f5ae0] (70 bytes) sub_19F5AE0
// int sub_19F5AE0(int a1, char ****a2);
// [0x19f5bb0] (36 bytes) NETSCAPE_CERT_SEQUENCE_new
// int NETSCAPE_CERT_SEQUENCE_new();
// [0x19f5be0] (44 bytes) NETSCAPE_CERT_SEQUENCE_free
// int NETSCAPE_CERT_SEQUENCE_free(char a1);
// [0x19f7450] (342 bytes) sub_19F7450
// bool sub_19F7450(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5);
// [0x19f7720] (601 bytes) asn1_template_print_ctx
// int asn1_template_print_ctx(uint32_t *a1, int **a2, int a3, int *a4, int *a5);
// [0x19f7980] (2213 bytes) sub_19F7980
// bool sub_19F7980(uint32_t *a1, int **a2, int a3, int a4, int a5, int a6, int a7, int *a8);
// [0x19f82a0] (143 bytes) sub_19F82A0
// int sub_19F82A0(uint32_t **a1, uint8_t *a2);
// [0x19f8330] (79 bytes) sub_19F8330
// void sub_19F8330(uint8_t ***a1, int a2);
// [0x19f8380] (41 bytes) sub_19F8380
// bool sub_19F8380(uint32_t *a1);
// [0x19f83b0] (128 bytes) sub_19F83B0
// int sub_19F83B0(void ***a1, uint8_t *a2, int a3, int a4, int a5, int a6);
// [0x19f8430] (68 bytes) sub_19F8430
// int sub_19F8430(int a1, int a2);
// [0x19f8480] (472 bytes) sub_19F8480
// int sub_19F8480(int a1, int *a2, int a3, int a4);
// [0x19f8660] (1213 bytes) sub_19F8660
// bool sub_19F8660(int a1, int *a2);
// [0x19f8b20] (69 bytes) sub_19F8B20
// int sub_19F8B20(int a1, int a2);
// [0x19f8b70] (50 bytes) sub_19F8B70
// int sub_19F8B70(int **a1, int **a2);
// [0x19f9100] (19 bytes) sub_19F9100
// int sub_19F9100(uint32_t *a1, int a2);
// [0x19f9120] (14 bytes) sub_19F9120
// uint32_t *sub_19F9120(uint32_t *a1, int a2);
// [0x19f9130] (54 bytes) sub_19F9130
// int sub_19F9130(int a1, int a2, int a3, uint32_t *a4);
// [0x19f9170] (184 bytes) sub_19F9170
// int sub_19F9170(int *a1, uint8_t *a2, int a3, int a4);
// [0x19f9230] (193 bytes) sub_19F9230
// int sub_19F9230(int *a1, char *a2, int a3, int a4, int a5, int a6);
// [0x19f9300] (68 bytes) sub_19F9300
// int sub_19F9300(int a1, int a2);
// [0x19f9d70] (85 bytes) sub_19F9D70
// bool sub_19F9D70(int a1, int *a2);
// [0x19fa120] (36 bytes) NETSCAPE_SPKAC_new
// int NETSCAPE_SPKAC_new();
// [0x19fa150] (44 bytes) NETSCAPE_SPKAC_free
// int NETSCAPE_SPKAC_free(char a1);
// [0x19fa200] (36 bytes) NETSCAPE_SPKI_new
// int NETSCAPE_SPKI_new();
// [0x19fa230] (44 bytes) NETSCAPE_SPKI_free
// int NETSCAPE_SPKI_free(char a1);
// [0x19fa340] (519 bytes) BF_cfb64_encrypt
// int *BF_cfb64_encrypt(char *a1, uint8_t *a2, int a3, int a4, int a5, int *a6, int a7);
// [0x19fa550] (22 bytes) BF_options
// const char *BF_options();
// [0x19fa570] (199 bytes) BF_ecb_encrypt
// unsigned int BF_ecb_encrypt(unsigned int *a1, uint8_t *a2, int a3, int a4);
// [0x19fa640] (1267 bytes) BF_encrypt
// int BF_encrypt(int *a1, uint32_t *a2);
// [0x19fab40] (1267 bytes) BF_decrypt
// int BF_decrypt(int *a1, uint32_t *a2);
// [0x19fb040] (1701 bytes) BF_cbc_encrypt
// unsigned int BF_cbc_encrypt(int a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int a6);
// [0x19fb6f0] (472 bytes) BF_ofb64_encrypt
// int *BF_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6);
// [0x19fb8d0] (378 bytes) BF_set_key
// int BF_set_key(uint32_t *a1, int a2, uint8_t *a3);
// [0x19fba50] (50 bytes) sub_19FBA50
// int sub_19FBA50(int a1, int a2, uint32_t *a3);
// [0x19fba90] (58 bytes) sub_19FBA90
// size_t sub_19FBA90(void *ptr, size_t size, FILE *s);
// [0x19fc100] (31 bytes) sub_19FC100
// int sub_19FC100(uint32_t *a1);
// [0x19fc120] (12 bytes) sub_19FC120
// bool sub_19FC120(int a1);
// [0x19fc130] (9 bytes) sub_19FC130
// int sub_19FC130();
// [0x19fc140] (11 bytes) sub_19FC140
// int sub_19FC140(int a1, int a2, int a3);
// [0x19fc150] (35 bytes) sub_19FC150
// int sub_19FC150(int a1, unsigned int a2);
// [0x19fc180] (9 bytes) sub_19FC180
// int sub_19FC180();
// [0x19fc190] (40 bytes) sub_19FC190
// size_t sub_19FC190(int a1, const char *s);
// [0x19fc730] (301 bytes) bn_mul_add_words
// unsigned int bn_mul_add_words(unsigned int *a1, unsigned int *a2, int a3, unsigned int a4);
// [0x19fc860] (239 bytes) bn_mul_words
// unsigned int bn_mul_words(uint32_t *a1, unsigned int *a2, int a3, unsigned int a4);
// [0x19fc950] (119 bytes) bn_sqr_words
// uint64_t bn_sqr_words(uint64_t *a1, unsigned int *a2, int a3);
// [0x19fc9d0] (58 bytes) bn_div_words
// uint64_t bn_div_words(unsigned int a1, unsigned int a2, unsigned int a3);
// [0x19fca10] (295 bytes) bn_add_words
// unsigned int bn_add_words(uint32_t *a1, unsigned int *a2, unsigned int *a3, int a4);
// [0x19fcb40] (295 bytes) bn_sub_words
// int bn_sub_words(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x19fcc70] (1864 bytes) bn_mul_comba8
// int bn_mul_comba8(uint32_t *a1, unsigned int *a2, unsigned int *a3);
// [0x19fd3c0] (470 bytes) bn_mul_comba4
// int bn_mul_comba4(uint32_t *a1, unsigned int *a2, unsigned int *a3);
// [0x19fd5a0] (3224 bytes) bn_sqr_comba8
// int bn_sqr_comba8(uint32_t *a1, unsigned int *a2);
// [0x19fe240] (756 bytes) bn_sqr_comba4
// int bn_sqr_comba4(uint32_t *a1, unsigned int *a2);
// [0x19fe540] (9 bytes) bn_mul_mont
// int bn_mul_mont();
// [0x19ffab0] (207 bytes) sub_19FFAB0
// int sub_19FFAB0(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1a03880] (976 bytes) sub_1A03880
// int sub_1A03880(unsigned int *a1, unsigned int **a2, uint32_t *a3);
// [0x1a042f0] (499 bytes) bn_sub_part_words
// int bn_sub_part_words(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4, int a5);
// [0x1a044f0] (716 bytes) bn_add_part_words
// unsigned int bn_add_part_words(uint32_t *a1, unsigned int *a2, unsigned int *a3, int a4, int a5);
// [0x1a047c0] (409 bytes) bn_mul_normal
// unsigned int bn_mul_normal(unsigned int *a1, unsigned int *a2, int a3, unsigned int *a4, int a5);
// [0x1a04960] (1537 bytes) bn_mul_recursive
// unsigned int bn_mul_recursive( unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4, int a5, int a6, unsigned int *a7);
// [0x1a04f70] (1388 bytes) bn_mul_high
// int bn_mul_high(unsigned int *a1, uint32_t *a2, uint32_t *a3, unsigned int *a4, int a5, unsigned int *a6);
// [0x1a054e0] (1772 bytes) bn_mul_part_recursive
// unsigned int bn_mul_part_recursive( unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4, int a5, int a6, unsigned int *a7);
// [0x1a05fd0] (262 bytes) bn_mul_low_normal
// unsigned int bn_mul_low_normal(unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4);
// [0x1a060e0] (413 bytes) bn_mul_low_recursive
// unsigned int bn_mul_low_recursive( unsigned int *a1, unsigned int *a2, unsigned int *a3, int a4, unsigned int *a5);
// [0x1a08520] (557 bytes) sub_1A08520
// int sub_1A08520(int a1, int *a2, int *a3);
// [0x1a08750] (633 bytes) sub_1A08750
// int sub_1A08750(int a1, void **a2, int a3, int a4, int a5);
// [0x1a096a0] (272 bytes) bn_sqr_normal
// unsigned int bn_sqr_normal(unsigned int *a1, unsigned int *a2, int a3, uint64_t *a4);
// [0x1a097b0] (605 bytes) bn_sqr_recursive
// unsigned int bn_sqr_recursive(unsigned int *a1, unsigned int *a2, int a3, uint64_t *a4);
// [0x1a0ac70] (156 bytes) Camellia_cbc_encrypt
// int Camellia_cbc_encrypt(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1a0ad10] (92 bytes) Camellia_cfb128_encrypt
// int Camellia_cfb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1a0ad70] (92 bytes) Camellia_cfb1_encrypt
// int Camellia_cfb1_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1a0add0] (92 bytes) Camellia_cfb8_encrypt
// int Camellia_cfb8_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1a0ae30] (75 bytes) Camellia_ecb_encrypt
// int Camellia_ecb_encrypt(int a1, int a2, int a3, int a4);
// [0x1a0ae80] (111 bytes) Camellia_set_key
// int Camellia_set_key(int a1, int a2, int a3);
// [0x1a0aef0] (60 bytes) Camellia_encrypt
// int Camellia_encrypt(int a1, int a2, int a3);
// [0x1a0af30] (60 bytes) Camellia_decrypt
// int Camellia_decrypt(int a1, int a2, int a3);
// [0x1a0af70] (84 bytes) Camellia_ofb128_encrypt
// int Camellia_ofb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1a0afd0] (519 bytes) CAST_cfb64_encrypt
// int *CAST_cfb64_encrypt(char *a1, uint8_t *a2, int a3, int a4, int a5, int *a6, int a7);
// [0x1a0b1e0] (199 bytes) CAST_ecb_encrypt
// unsigned int CAST_ecb_encrypt(unsigned int *a1, uint8_t *a2, int a3, int a4);
// [0x1a0b2b0] (1424 bytes) CAST_encrypt
// uint32_t *CAST_encrypt(int *a1, uint32_t *a2);
// [0x1a0b840] (1369 bytes) CAST_decrypt
// int CAST_decrypt(int *a1, uint32_t *a2);
// [0x1a0bda0] (1701 bytes) CAST_cbc_encrypt
// unsigned int CAST_cbc_encrypt(int a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int a6);
// [0x1a0c450] (472 bytes) CAST_ofb64_encrypt
// int *CAST_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, int a5, int *a6);
// [0x1a0c630] (2951 bytes) CAST_set_key
// int CAST_set_key(int a1, int a2, int a3);
// [0x1a0d1c0] (117 bytes) sub_1A0D1C0
// int sub_1A0D1C0(int *a1);
// [0x1a0e1d0] (1326 bytes) cms_EnvelopedData_init_bio
// uint32_t *cms_EnvelopedData_init_bio(int a1);
// [0x1a0e760] (155 bytes) sub_1A0E760
// int sub_1A0E760(int *a1);
// [0x1a0e800] (235 bytes) sub_1A0E800
// int sub_1A0E800(int *a1);
// [0x1a0ed40] (116 bytes) cms_content_bio
// uint8_t *cms_content_bio(int *a1);
// [0x1a0f0d0] (79 bytes) cms_Data_create
// int *cms_Data_create();
// [0x1a0f120] (101 bytes) cms_DigestAlgorithm_set
// int cms_DigestAlgorithm_set(int a1, int a2);
// [0x1a0f190] (274 bytes) cms_DigestAlgorithm_init_bio
// uint32_t *cms_DigestAlgorithm_init_bio(uint32_t *a1);
// [0x1a0f2b0] (282 bytes) cms_DigestAlgorithm_find_ctx
// int cms_DigestAlgorithm_find_ctx(int *a1, int **a2, uint32_t *a3);
// [0x1a0fa20] (117 bytes) sub_1A0FA20
// int sub_1A0FA20(int *a1);
// [0x1a0faa0] (218 bytes) sub_1A0FAA0
// int sub_1A0FAA0(int *a1);
// [0x1a0fba0] (365 bytes) cms_set1_SignerIdentifier
// int cms_set1_SignerIdentifier(int a1, int a2, int a3);
// [0x1a0fd10] (110 bytes) cms_SignerIdentifier_get0_signer_id
// char cms_SignerIdentifier_get0_signer_id(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a0fd80] (189 bytes) cms_SignerIdentifier_cert_cmp
// int cms_SignerIdentifier_cert_cmp(uint32_t *a1, int a2);
// [0x1a10540] (694 bytes) cms_SignedData_final
// int cms_SignedData_final(int *a1, int **a2);
// [0x1a10990] (471 bytes) cms_SignedData_init_bio
// uint32_t *cms_SignedData_init_bio(int *a1);
// [0x1a10f30] (95 bytes) sub_1A10F30
// int sub_1A10F30(int **a1, unsigned int a2, int a3);
// [0x1a11870] (106 bytes) NCONF_new
// int NCONF_new(int a1);
// [0x1a118e0] (25 bytes) NCONF_free
// int NCONF_free(int a1);
// [0x1a11900] (25 bytes) NCONF_free_data
// int NCONF_free_data(int a1);
// [0x1a11960] (110 bytes) NCONF_load
// int NCONF_load(int a1, int a2, int a3);
// [0x1a119d0] (110 bytes) NCONF_load_bio
// int NCONF_load_bio(int a1, int a2, int a3);
// [0x1a11a40] (162 bytes) NCONF_load_fp
// int NCONF_load_fp(int a1, int a2, int a3);
// [0x1a11cb0] (156 bytes) NCONF_get_section
// int NCONF_get_section(int a1, int a2);
// [0x1a11da0] (233 bytes) NCONF_get_string
// int NCONF_get_string(int a1, int a2, int a3);
// [0x1a11f10] (201 bytes) NCONF_get_number_e
// int NCONF_get_number_e(int a1, int a2, int a3, uint32_t *a4);
// [0x1a12090] (102 bytes) NCONF_dump_bio
// int NCONF_dump_bio(int a1, int a2);
// [0x1a12100] (154 bytes) NCONF_dump_fp
// int NCONF_dump_fp(int a1, int a2);
// [0x1a17980] (81 bytes) sub_1A17980
// int sub_1A17980(int a1, int a2, int a3);
// [0x1a179e0] (178 bytes) sub_1A179E0
// int sub_1A179E0(int a1, char *a2);
// [0x1a17aa0] (41 bytes) sub_1A17AA0
// int sub_1A17AA0(int a1);
// [0x1a17ad0] (116 bytes) sub_1A17AD0
// char sub_1A17AD0(uint32_t *a1);
// [0x1a17b50] (226 bytes) sub_1A17B50
// int sub_1A17B50(int a1, const char *a2, char *nptr);
// [0x1a17c40] (142 bytes) sub_1A17C40
// int sub_1A17C40(int a1, int a2, int *a3);
// [0x1a17cd0] (186 bytes) sub_1A17CD0
// int sub_1A17CD0(int a1, char *a2);
// [0x1a17d90] (62 bytes) sub_1A17D90
// int sub_1A17D90(uint32_t *a1, int a2);
// [0x1a17e30] (101 bytes) sub_1A17E30
// int sub_1A17E30(int a1, char *a2, int a3, int a4, int a5);
// [0x1a17ea0] (120 bytes) sub_1A17EA0
// int sub_1A17EA0(int a1, void *a2, uint32_t *a3, int a4, int a5);
// [0x1a17f20] (218 bytes) sub_1A17F20
// int sub_1A17F20(int a1, char *a2);
// [0x1a18000] (41 bytes) sub_1A18000
// int sub_1A18000(int a1);
// [0x1a18030] (111 bytes) sub_1A18030
// char sub_1A18030(uint32_t *a1);
// [0x1a180a0] (317 bytes) sub_1A180A0
// int sub_1A180A0(int a1, const char *a2, char *nptr);
// [0x1a181e0] (446 bytes) sub_1A181E0
// int sub_1A181E0(int a1, int a2, int a3, int a4);
// [0x1a183a0] (186 bytes) sub_1A183A0
// int sub_1A183A0(int a1, char *a2);
// [0x1a18460] (68 bytes) sub_1A18460
// int sub_1A18460(uint32_t *a1, int a2);
// [0x1a184b0] (100 bytes) sub_1A184B0
// void *sub_1A184B0(char *name);
// [0x1a18520] (375 bytes) sub_1A18520
// int sub_1A18520(int a1);
// [0x1a186a0] (198 bytes) sub_1A186A0
// int sub_1A186A0(int (*a1)(int, void *dest, int), void *dest, int a3);
// [0x1a18770] (567 bytes) sub_1A18770
// char *sub_1A18770(int a1, char *src, char *s);
// [0x1a189b0] (302 bytes) sub_1A189B0
// char *sub_1A189B0(int a1, char *src);
// [0x1a18ae0] (399 bytes) sub_1A18AE0
// void *sub_1A18AE0(int a1, char *name);
// [0x1a18c70] (405 bytes) sub_1A18C70
// void *sub_1A18C70(int a1, char *name);
// [0x1a18e10] (233 bytes) sub_1A18E10
// int sub_1A18E10(int a1);
// [0x1a18f00] (22 bytes) DSO_METHOD_dlfcn
// char **DSO_METHOD_dlfcn();
// [0x1a18f80] (16 bytes) ec_GF2m_simple_is_at_infinity
// bool ec_GF2m_simple_is_at_infinity(int a1, int a2);
// [0x1a18f90] (93 bytes) ec_GF2m_simple_points_make_affine
// int ec_GF2m_simple_points_make_affine(int a1, int a2, int a3, int a4);
// [0x1a18ff0] (69 bytes) ec_GF2m_simple_field_div
// int ec_GF2m_simple_field_div(int a1, int a2, int a3, int a4, int a5);
// [0x1a19040] (61 bytes) ec_GF2m_simple_field_sqr
// int ec_GF2m_simple_field_sqr(int a1, int a2, int a3, int a4);
// [0x1a19080] (69 bytes) ec_GF2m_simple_field_mul
// int ec_GF2m_simple_field_mul(int a1, int a2, int a3, int a4, int a5);
// [0x1a190d0] (154 bytes) ec_GF2m_simple_group_get_curve
// bool ec_GF2m_simple_group_get_curve(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a19170] (57 bytes) ec_GF2m_simple_point_set_to_infinity
// int ec_GF2m_simple_point_set_to_infinity(int a1, int a2);
// [0x1a191b0] (1072 bytes) ec_GF2m_simple_oct2point
// int ec_GF2m_simple_oct2point(uint32_t *a1, uint32_t *a2, uint8_t *a3, int a4, int *a5);
// [0x1a195e0] (40 bytes) ec_GF2m_simple_group_get_degree
// int ec_GF2m_simple_group_get_degree(int a1);
// [0x1a19610] (1076 bytes) ec_GF2m_simple_point2oct
// unsigned int ec_GF2m_simple_point2oct(int a1, uint32_t *a2, int a3, uint8_t *a4, unsigned int a5, int *a6);
// [0x1a19a50] (241 bytes) ec_GF2m_simple_group_check_discriminant
// bool ec_GF2m_simple_group_check_discriminant(int a1, int *a2);
// [0x1a19b50] (850 bytes) ec_GF2m_simple_set_compressed_coordinates
// bool ec_GF2m_simple_set_compressed_coordinates(int a1, uint32_t *a2, int a3, int a4, int *a5);
// [0x1a19eb0] (80 bytes) ec_GF2m_simple_point_clear_finish
// void *ec_GF2m_simple_point_clear_finish(int a1);
// [0x1a19f00] (118 bytes) ec_GF2m_simple_group_clear_finish
// void *ec_GF2m_simple_group_clear_finish(int a1);
// [0x1a19f80] (73 bytes) ec_GF2m_simple_point_finish
// void ec_GF2m_simple_point_finish(void **a1);
// [0x1a19fd0] (76 bytes) ec_GF2m_simple_group_finish
// void ec_GF2m_simple_group_finish(void **a1);
// [0x1a1a020] (78 bytes) ec_GF2m_simple_point_init
// int ec_GF2m_simple_point_init(uint32_t *a1);
// [0x1a1a070] (81 bytes) ec_GF2m_simple_group_init
// int ec_GF2m_simple_group_init(uint32_t *a1);
// [0x1a1a0d0] (140 bytes) ec_GF2m_simple_point_copy
// int ec_GF2m_simple_point_copy(uint32_t *a1, uint32_t *a2);
// [0x1a1a160] (339 bytes) ec_GF2m_simple_make_affine
// bool ec_GF2m_simple_make_affine(int a1, uint32_t *a2, int *a3);
// [0x1a1a2c0] (540 bytes) ec_GF2m_simple_cmp
// int ec_GF2m_simple_cmp(int a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a1a4e0] (520 bytes) ec_GF2m_simple_is_on_curve
// int ec_GF2m_simple_is_on_curve(int a1, uint32_t *a2, int *a3);
// [0x1a1a6f0] (140 bytes) ec_GF2m_simple_invert
// int ec_GF2m_simple_invert(int a1, uint32_t *a2, int a3);
// [0x1a1a780] (1316 bytes) ec_GF2m_simple_add
// bool ec_GF2m_simple_add(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1a1acb0] (62 bytes) ec_GF2m_simple_dbl
// bool ec_GF2m_simple_dbl(int a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a1acf0] (325 bytes) ec_GF2m_simple_point_get_affine_coordinates
// int ec_GF2m_simple_point_get_affine_coordinates(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a1ae40] (274 bytes) ec_GF2m_simple_point_set_affine_coordinates
// int ec_GF2m_simple_point_set_affine_coordinates(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a1af60] (483 bytes) ec_GF2m_simple_group_set_curve
// int ec_GF2m_simple_group_set_curve(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x1a1b150] (422 bytes) ec_GF2m_simple_group_copy
// int ec_GF2m_simple_group_copy(uint32_t *a1, uint32_t *a2);
// [0x1a1b380] (101 bytes) sub_1A1B380
// int sub_1A1B380(int a1, char a2, int a3, int a4, int a5);
// [0x1a1b3f0] (69 bytes) sub_1A1B3F0
// int sub_1A1B3F0(int a1);
// [0x1a1b440] (85 bytes) sub_1A1B440
// int sub_1A1B440(int a1);
// [0x1a1b4a0] (214 bytes) sub_1A1B4A0
// int sub_1A1B4A0(int a1, const char *a2, int a3);
// [0x1a1b580] (357 bytes) sub_1A1B580
// int sub_1A1B580(int a1, int a2, int a3, int a4);
// [0x1a1b6f0] (249 bytes) sub_1A1B6F0
// int sub_1A1B6F0(int a1, int a2, int *a3);
// [0x1a1b7f0] (266 bytes) sub_1A1B7F0
// int sub_1A1B7F0(int a1, int a2, int *a3, int a4, int a5);
// [0x1a1b900] (186 bytes) sub_1A1B900
// int sub_1A1B900(int a1, char *a2);
// [0x1a1b9c0] (194 bytes) sub_1A1B9C0
// bool sub_1A1B9C0(int a1, char *a2);
// [0x1a1ba90] (114 bytes) sub_1A1BA90
// int sub_1A1BA90(int a1, int a2);
// [0x1a1c3b0] (56 bytes) sub_1A1C3B0
// uint32_t *sub_1A1C3B0();
// [0x1a1c750] (11 bytes) sub_1A1C750
// int sub_1A1C750(int a1);
// [0x1a1c760] (13 bytes) sub_1A1C760
// int sub_1A1C760(uint32_t *a1, uint32_t *a2);
// [0x1a1c770] (45 bytes) sub_1A1C770
// int sub_1A1C770(uint32_t *a1, int a2);
// [0x1a1c7a0] (82 bytes) sub_1A1C7A0
// int sub_1A1C7A0(void ***a1);
// [0x1a1c800] (117 bytes) sub_1A1C800
// int sub_1A1C800(int *a1, uint32_t *a2);
// [0x1a1c8c0] (552 bytes) engine_table_register
// int engine_table_register(uint32_t **a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6);
// [0x1a1caf0] (130 bytes) engine_table_unregister
// void engine_table_unregister(uint32_t **a1, int a2);
// [0x1a1cb80] (158 bytes) engine_table_cleanup
// void engine_table_cleanup(void ***a1);
// [0x1a1cc20] (359 bytes) engine_table_select
// uint32_t *engine_table_select(uint32_t *a1, int a2);
// [0x1a1cd90] (68 bytes) engine_table_doall
// void engine_table_doall(uint32_t *a1, int a2, int a3);
// [0x1a1cde0] (36 bytes) sub_1A1CDE0
// void sub_1A1CDE0();
// [0x1a1d0c0] (36 bytes) sub_1A1D0C0
// void sub_1A1D0C0();
// [0x1a1d3a0] (36 bytes) sub_1A1D3A0
// void sub_1A1D3A0();
// [0x1a1d560] (36 bytes) sub_1A1D560
// void sub_1A1D560();
// [0x1a1d720] (50 bytes) sub_1A1D720
// int sub_1A1D720(int a1, int a2, uint32_t *a3);
// [0x1a1d760] (103 bytes) sub_1A1D760
// int sub_1A1D760(int a1, int a2, int a3);
// [0x1a1d960] (59 bytes) sub_1A1D960
// int sub_1A1D960(int a1, int a2, int a3);
// [0x1a1d9a0] (116 bytes) sub_1A1D9A0
// int sub_1A1D9A0(int a1);
// [0x1a1da20] (153 bytes) sub_1A1DA20
// int sub_1A1DA20(uint32_t *a1);
// [0x1a1dac0] (548 bytes) sub_1A1DAC0
// int sub_1A1DAC0(int a1, char *dest, signed int a3);
// [0x1a1dcf0] (410 bytes) sub_1A1DCF0
// int sub_1A1DCF0(int a1, char *a2, int a3);
// [0x1a1de90] (796 bytes) sub_1A1DE90
// int sub_1A1DE90(int a1, int a2, int a3, uint32_t *a4);
// [0x1a1e2b0] (59 bytes) sub_1A1E2B0
// int sub_1A1E2B0(int a1, int a2, int a3);
// [0x1a1e2f0] (83 bytes) sub_1A1E2F0
// int sub_1A1E2F0(int a1);
// [0x1a1e350] (72 bytes) sub_1A1E350
// int sub_1A1E350(uint32_t *a1);
// [0x1a1e3a0] (108 bytes) sub_1A1E3A0
// int sub_1A1E3A0(int a1, int a2, int a3);
// [0x1a1e410] (174 bytes) sub_1A1E410
// int sub_1A1E410(uint32_t *a1, int a2, int a3);
// [0x1a1e4c0] (440 bytes) sub_1A1E4C0
// char sub_1A1E4C0(int a1, int a2, int a3, int a4);
// [0x1a1e680] (188 bytes) sub_1A1E680
// int sub_1A1E680(uint32_t *a1, int a2, int a3);
// [0x1a1f590] (21 bytes) sub_1A1F590
// int sub_1A1F590(uint32_t *a1, uint32_t *a2);
// [0x1a1f5b0] (34 bytes) sub_1A1F5B0
// int sub_1A1F5B0(void *a1);
// [0x1a1f5e0] (25 bytes) sub_1A1F5E0
// int sub_1A1F5E0(int a1, int a2);
// [0x1a20980] (354 bytes) sub_1A20980
// int sub_1A20980( int a1, int a2, int a3, int a4, uint32_t *a5, int a6, void (*a7)(uint32_t *, uint32_t *, int));
// [0x1a21500] (629 bytes) sub_1A21500
// int sub_1A21500( uint32_t *a1, int a2, int a3, int a4, int a5, char *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9);
// [0x1a21780] (194 bytes) sub_1A21780
// int sub_1A21780( int a1, int a2, int a3, int a4, int a5, char *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9);
// [0x1a22d70] (165 bytes) OPENSSL_asc2uni
// uint8_t *OPENSSL_asc2uni(char *s, size_t a2, uint32_t *a3, int *a4);
// [0x1a22e20] (145 bytes) OPENSSL_uni2asc
// uint8_t *OPENSSL_uni2asc(int a1, int a2);
// [0x1a23140] (1098 bytes) sub_1A23140
// void sub_1A23140(int a1, int a2, int a3, double a4);
// [0x1a23590] (39 bytes) sub_1A23590
// void sub_1A23590(int a1, int a2, int a3);
// [0x1a235c0] (128 bytes) sub_1A235C0
// void *sub_1A235C0();
// [0x1a23640] (1400 bytes) sub_1A23640
// int sub_1A23640(uint8_t *a1, int a2);
// [0x1a23bc0] (422 bytes) sub_1A23BC0
// bool sub_1A23BC0(int a1, int a2);
// [0x1a23d70] (96 bytes) sub_1A23D70
// int sub_1A23D70(int a1, int a2);
// [0x1a240b0] (16 bytes) sub_1A240B0
// int sub_1A240B0(int a1);
// [0x1a240c0] (90 bytes) sub_1A240C0
// int sub_1A240C0(void ***a1);
// [0x1a24120] (1797 bytes) sub_1A24120
// bool sub_1A24120(int *a1, int *a2, int a3, int *a4);
// [0x1a24830] (1128 bytes) sub_1A24830
// int sub_1A24830(int a1, uint8_t *a2, void *a3, int a4, int a5);
// [0x1a24ca0] (1107 bytes) sub_1A24CA0
// int sub_1A24CA0(size_t a1, void *src, int a3, int a4, int a5);
// [0x1a25100] (509 bytes) sub_1A25100
// int sub_1A25100(int a1, uint32_t *a2, int *a3);
// [0x1a25300] (198 bytes) sub_1A25300
// bool sub_1A25300(int *a1, int a2, int a3, uint32_t *a4, int a5);
// [0x1a253d0] (198 bytes) sub_1A253D0
// int sub_1A253D0(int *a1, int a2, int a3, int a4, int a5);
// [0x1a254a0] (1446 bytes) sub_1A254A0
// int sub_1A254A0(int a1, uint8_t *a2, void *dest, int a4, int a5);
// [0x1a25a50] (1404 bytes) sub_1A25A50
// int sub_1A25A50(size_t a1, void *src, int a3, int a4, int a5);
// [0x1a27880] (107 bytes) sub_1A27880
// int sub_1A27880(void **a1);
// [0x1a278f0] (85 bytes) sub_1A278F0
// int sub_1A278F0(int a1, int a2, int a3);
// [0x1a27950] (255 bytes) sub_1A27950
// uint32_t *sub_1A27950(int a1, int a2, int a3, int a4, int a5);
// [0x1a27a50] (178 bytes) sub_1A27A50
// int sub_1A27A50( int a1, int a2, int a3, int a4, int a5, int a6, void *a7, void *a8, void *a9);
// [0x1a27b10] (340 bytes) sub_1A27B10
// int sub_1A27B10(int a1, int a2, void *a3, char *a4, const char *s, int a6, int a7, int a8);
// [0x1a27c70] (96 bytes) UI_free
// int UI_free(void ***a1);
// [0x1a27cd0] (77 bytes) UI_add_input_string
// int UI_add_input_string(int a1, int a2, int a3, int a4, void *a5, void *a6);
// [0x1a27d20] (170 bytes) UI_dup_input_string
// int UI_dup_input_string(int a1, char *a2, int a3, int a4, void *a5, void *a6);
// [0x1a27dd0] (29 bytes) UI_add_verify_string
// int UI_add_verify_string(int a1, int a2, int a3, int a4, void *a5, void *a6, void *a7);
// [0x1a27df0] (244 bytes) UI_dup_verify_string
// int UI_dup_verify_string(int a1, char *a2, int a3, int a4, void *a5, void *a6, void *a7);
// [0x1a27ef0] (91 bytes) UI_add_input_boolean
// int UI_add_input_boolean(int a1, int a2, void *a3, char *a4, const char *a5, int a6, int a7);
