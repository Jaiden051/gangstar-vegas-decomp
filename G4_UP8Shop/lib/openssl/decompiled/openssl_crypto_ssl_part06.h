#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_crypto_ssl_part06.h
// Library: openssl | Module: openssl_crypto_ssl_part06
// Binary Address Span: 0x1a34a10 .. 0x1b13180 (169 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1a34a10] (368 bytes) AES_unwrap_key
// int AES_unwrap_key(uint32_t *a1, void *s2, char *dest, int *a4, int a5);
// [0x1a34b80] (149 bytes) i2d_ASN1_BOOLEAN
// int i2d_ASN1_BOOLEAN(char a1, uint8_t **a2);
// [0x1a34c20] (215 bytes) d2i_ASN1_BOOLEAN
// int d2i_ASN1_BOOLEAN(int *a1, uint8_t **a2, int a3);
// [0x1a34d00] (519 bytes) d2i_ASN1_type_bytes
// int d2i_ASN1_type_bytes(int *a1, void **a2, int a3, int a4);
// [0x1a34f10] (232 bytes) i2d_ASN1_bytes
// int i2d_ASN1_bytes(int a1, void **a2, int a3, char a4);
// [0x1a35000] (1028 bytes) d2i_ASN1_bytes
// uint32_t *d2i_ASN1_bytes(uint32_t **a1, void **a2, int a3, int a4, int a5);
// [0x1a35770] (1608 bytes) ASN1_mbstring_ncopy
// int ASN1_mbstring_ncopy(uint32_t **a1, char *s, int a3, int a4, int a5, int a6, int a7);
// [0x1a35dc0] (82 bytes) ASN1_mbstring_copy
// int ASN1_mbstring_copy(uint32_t **a1, char *a2, size_t a3, int a4, int a5);
// [0x1a35e20] (209 bytes) ASN1_PRINTABLE_type
// int ASN1_PRINTABLE_type(uint8_t *a1, int a2);
// [0x1a35f00] (222 bytes) ASN1_UNIVERSALSTRING_to_string
// int ASN1_UNIVERSALSTRING_to_string(int a1);
// [0x1a36810] (2730 bytes) ASN1_generate_v3
// unsigned int *ASN1_generate_v3(char *a1, int a2);
// [0x1a372c0] (106 bytes) ASN1_generate_nconf
// unsigned int *ASN1_generate_nconf(char *a1, int a2);
// [0x1a37330] (156 bytes) ASN1_seq_unpack
// int ASN1_seq_unpack(int a1, int a2, int a3, int a4);
// [0x1a373d0] (338 bytes) ASN1_seq_pack
// uint8_t *ASN1_seq_pack(int a1, int a2, uint32_t *a3, int *a4);
// [0x1a37530] (124 bytes) ASN1_unpack_string
// int ASN1_unpack_string(int *a1, int (*a2)(uint32_t, uint32_t *, int));
// [0x1a375b0] (330 bytes) ASN1_pack_string
// int *ASN1_pack_string(int a1, int (*a2)(int, uint8_t **), int **a3);
// [0x1a37700] (306 bytes) ASN1_item_pack
// void **ASN1_item_pack(int a1, int a2, void ***a3);
// [0x1a37840] (132 bytes) ASN1_item_unpack
// int ASN1_item_unpack(int *a1, int a2);
// [0x1a38340] (60 bytes) d2i_PBEPARAM
// int d2i_PBEPARAM(int *a1, char **a2, int a3);
// [0x1a38380] (52 bytes) i2d_PBEPARAM
// int i2d_PBEPARAM(int a1, void **a2);
// [0x1a38420] (457 bytes) PKCS5_pbe_set0_algor
// int PKCS5_pbe_set0_algor(int a1, unsigned int a2, int a3, void *src, int a5);
// [0x1a385f0] (160 bytes) PKCS5_pbe_set
// int PKCS5_pbe_set(unsigned int a1, int a2, void *a3, int a4);
// [0x1a38690] (60 bytes) d2i_PBE2PARAM
// int d2i_PBE2PARAM(int *a1, char **a2, int a3);
// [0x1a386d0] (52 bytes) i2d_PBE2PARAM
// int i2d_PBE2PARAM(int a1, void **a2);
// [0x1a38770] (60 bytes) d2i_PBKDF2PARAM
// int d2i_PBKDF2PARAM(int *a1, char **a2, int a3);
// [0x1a387b0] (52 bytes) i2d_PBKDF2PARAM
// int i2d_PBKDF2PARAM(int a1, void **a2);
// [0x1a38850] (1407 bytes) PKCS5_pbe2_set_iv
// char ***PKCS5_pbe2_set_iv(uint32_t *a1, int a2, void *a3, int a4, void *src, unsigned int a6);
// [0x1a38dd0] (74 bytes) PKCS5_pbe2_set
// char ***PKCS5_pbe2_set(uint32_t *a1, int a2, void *a3, int a4);
// [0x1a38e20] (168 bytes) X509_INFO_new
// uint32_t *X509_INFO_new();
// [0x1a38ed0] (176 bytes) X509_INFO_free
// void X509_INFO_free(void *a1);
// [0x1a38f80] (9 bytes) i2d_X509_PKEY
// int i2d_X509_PKEY();
// [0x1a38f90] (250 bytes) X509_PKEY_new
// uint32_t *X509_PKEY_new();
// [0x1a39090] (186 bytes) X509_PKEY_free
// void X509_PKEY_free(void *a1);
// [0x1a39150] (748 bytes) d2i_X509_PKEY
// int *d2i_X509_PKEY(int **a1, int *a2, int a3);
// [0x1a39620] (231 bytes) BN_GF2m_add
// int BN_GF2m_add(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1a39710] (752 bytes) BN_GF2m_mod_arr
// int BN_GF2m_mod_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1a39a00] (424 bytes) BN_GF2m_mod_sqr_arr
// bool BN_GF2m_mod_sqr_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a39bb0] (653 bytes) BN_GF2m_mod_mul_arr
// bool BN_GF2m_mod_mul_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1a39e40] (371 bytes) BN_GF2m_mod_exp_arr
// int BN_GF2m_mod_exp_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1a39fc0] (204 bytes) BN_GF2m_mod_sqrt_arr
// int BN_GF2m_mod_sqrt_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a3a090] (1119 bytes) BN_GF2m_mod_solve_quad_arr
// int BN_GF2m_mod_solve_quad_arr(uint32_t *a1, uint32_t *a2, int *a3, int *a4);
// [0x1a3a4f0] (181 bytes) BN_GF2m_poly2arr
// int BN_GF2m_poly2arr(uint32_t *a1, int a2, int a3);
// [0x1a3a5b0] (238 bytes) BN_GF2m_mod_solve_quad
// int BN_GF2m_mod_solve_quad(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a3a6a0] (238 bytes) BN_GF2m_mod_sqrt
// int BN_GF2m_mod_sqrt(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a3a790] (246 bytes) BN_GF2m_mod_exp
// int BN_GF2m_mod_exp(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1a3a890] (238 bytes) BN_GF2m_mod_sqr
// bool BN_GF2m_mod_sqr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a3a980] (246 bytes) BN_GF2m_mod_mul
// bool BN_GF2m_mod_mul(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1a3aa80] (230 bytes) BN_GF2m_mod
// int BN_GF2m_mod(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1a3ab70] (447 bytes) BN_GF2m_mod_inv
// bool BN_GF2m_mod_inv(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a3ad30] (176 bytes) BN_GF2m_mod_div
// bool BN_GF2m_mod_div(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5);
// [0x1a3ade0] (109 bytes) BN_GF2m_arr2poly
// int BN_GF2m_arr2poly(int *a1, uint32_t *a2);
// [0x1a3ae50] (152 bytes) BN_GF2m_mod_div_arr
// bool BN_GF2m_mod_div_arr(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4, int *a5);
// [0x1a3aef0] (144 bytes) BN_GF2m_mod_inv_arr
// bool BN_GF2m_mod_inv_arr(uint32_t *a1, uint32_t *a2, int *a3, int *a4);
// [0x1a3b060] (140 bytes) BN_GENCB_call
// int BN_GENCB_call(uint32_t *a1, int a2, int a3);
// [0x1a3b0f0] (1411 bytes) BN_is_prime_fasttest_ex
// int BN_is_prime_fasttest_ex(int *a1, int a2, int *a3, int a4, uint32_t *a5);
// [0x1a3b680] (66 bytes) BN_is_prime_ex
// int BN_is_prime_ex(int *a1, int a2, int *a3, uint32_t *a4);
// [0x1a3b6d0] (1653 bytes) BN_generate_prime_ex
// int BN_generate_prime_ex(unsigned int **a1, int a2, int a3, int *a4, int *a5, uint32_t *a6);
// [0x1a3d920] (37 bytes) CMS_signed_get_attr_count
// int CMS_signed_get_attr_count(int a1);
// [0x1a3d950] (53 bytes) CMS_signed_get_attr_by_NID
// int CMS_signed_get_attr_by_NID(int a1, unsigned int a2, int a3);
// [0x1a3d990] (53 bytes) CMS_signed_get_attr_by_OBJ
// int CMS_signed_get_attr_by_OBJ(int a1, int a2, int a3);
// [0x1a3d9d0] (45 bytes) CMS_signed_get_attr
// int CMS_signed_get_attr(int a1, int a2);
// [0x1a3da00] (45 bytes) CMS_signed_delete_attr
// int CMS_signed_delete_attr(int a1, int a2);
// [0x1a3da30] (53 bytes) CMS_signed_add1_attr
// bool CMS_signed_add1_attr(int a1, int a2);
// [0x1a3da70] (77 bytes) CMS_signed_add1_attr_by_OBJ
// bool CMS_signed_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, size_t a5);
// [0x1a3dac0] (77 bytes) CMS_signed_add1_attr_by_NID
// bool CMS_signed_add1_attr_by_NID(int a1, unsigned int a2, int a3, char *a4, size_t a5);
// [0x1a3db10] (77 bytes) CMS_signed_add1_attr_by_txt
// bool CMS_signed_add1_attr_by_txt(int a1, char *a2, int a3, char *a4, size_t a5);
// [0x1a3db60] (61 bytes) CMS_signed_get0_data_by_OBJ
// int CMS_signed_get0_data_by_OBJ(int a1, int a2, int a3, int a4);
// [0x1a3dba0] (37 bytes) CMS_unsigned_get_attr_count
// int CMS_unsigned_get_attr_count(int a1);
// [0x1a3dbd0] (53 bytes) CMS_unsigned_get_attr_by_NID
// int CMS_unsigned_get_attr_by_NID(int a1, unsigned int a2, int a3);
// [0x1a3dc10] (53 bytes) CMS_unsigned_get_attr_by_OBJ
// int CMS_unsigned_get_attr_by_OBJ(int a1, int a2, int a3);
// [0x1a3dc50] (45 bytes) CMS_unsigned_get_attr
// int CMS_unsigned_get_attr(int a1, int a2);
// [0x1a3dc80] (45 bytes) CMS_unsigned_delete_attr
// int CMS_unsigned_delete_attr(int a1, int a2);
// [0x1a3dcb0] (53 bytes) CMS_unsigned_add1_attr
// bool CMS_unsigned_add1_attr(int a1, int a2);
// [0x1a3dcf0] (77 bytes) CMS_unsigned_add1_attr_by_OBJ
// bool CMS_unsigned_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, size_t a5);
// [0x1a3dd40] (77 bytes) CMS_unsigned_add1_attr_by_NID
// bool CMS_unsigned_add1_attr_by_NID(int a1, unsigned int a2, int a3, char *a4, size_t a5);
// [0x1a3dd90] (77 bytes) CMS_unsigned_add1_attr_by_txt
// bool CMS_unsigned_add1_attr_by_txt(int a1, char *a2, int a3, char *a4, size_t a5);
// [0x1a3dde0] (61 bytes) CMS_unsigned_get0_data_by_OBJ
// int CMS_unsigned_get0_data_by_OBJ(int a1, int a2, int a3, int a4);
// [0x1a3e820] (349 bytes) CMS_EncryptedData_set1_key
// int CMS_EncryptedData_set1_key(int *a1, char **a2, const void *a3, char **a4);
// [0x1a3e9c0] (163 bytes) CMS_stream
// int CMS_stream(uint32_t *a1, int *a2);
// [0x1a3ea70] (52 bytes) d2i_CMS_bio
// int d2i_CMS_bio(uint32_t *a1, int *a2);
// [0x1a3eab0] (52 bytes) i2d_CMS_bio
// int i2d_CMS_bio(uint32_t *a1, int a2);
// [0x1a3eaf0] (78 bytes) PEM_read_bio_CMS
// int PEM_read_bio_CMS(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x1a3eb40] (78 bytes) PEM_read_CMS
// int PEM_read_CMS(int a1, int a2, int a3, char *a4);
// [0x1a3eb90] (102 bytes) PEM_write_bio_CMS
// bool PEM_write_bio_CMS(uint32_t *a1, int a2);
// [0x1a3ec00] (102 bytes) PEM_write_CMS
// bool PEM_write_CMS(int a1, int a2);
// [0x1a3ec70] (52 bytes) BIO_new_CMS
// int BIO_new_CMS(int a1, int a2);
// [0x1a3ecb0] (68 bytes) i2d_CMS_bio_stream
// int i2d_CMS_bio_stream(int a1, int a2, int a3, int a4);
// [0x1a3ed00] (78 bytes) PEM_write_bio_CMS_stream
// int PEM_write_bio_CMS_stream(int a1, int a2, int a3, int a4);
// [0x1a406f0] (810 bytes) DH_generate_parameters_ex
// int DH_generate_parameters_ex(int a1, int a2, int a3, uint32_t *a4);
// [0x1a41380] (239 bytes) DSA_generate_parameters_ex
// int DSA_generate_parameters_ex(int a1, int a2, void *a3, size_t a4, int *a5, int *a6, uint32_t *a7);
// [0x1a41470] (445 bytes) DSA_generate_key
// char DSA_generate_key(int a1);
// [0x1a42480] (1235 bytes) ENGINE_ctrl
// unsigned int ENGINE_ctrl(int a1, int a2, unsigned int a3, char *s2, int a5);
// [0x1a42960] (130 bytes) ENGINE_cmd_is_executable
// bool ENGINE_cmd_is_executable(int a1, unsigned int a2);
// [0x1a429f0] (287 bytes) ENGINE_ctrl_cmd
// bool ENGINE_ctrl_cmd(int a1, char *a2, unsigned int a3, char *a4, int a5, int a6);
// [0x1a42b10] (771 bytes) ENGINE_ctrl_cmd_string
// bool ENGINE_ctrl_cmd_string(int a1, char *a2, char *nptr, int a4);
// [0x1a42e20] (1757 bytes) PEM_X509_INFO_read_bio
// int *PEM_X509_INFO_read_bio( uint32_t *a1, int *a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x1a43500] (194 bytes) PEM_X509_INFO_read
// int *PEM_X509_INFO_read(int a1, int *a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x1a435d0] (642 bytes) PEM_X509_INFO_write_bio
// bool PEM_X509_INFO_write_bio(uint32_t *a1, int *a2, int a3, int a4, int a5, int a6, char *a7);
// [0x1a43860] (243 bytes) PKCS12_item_pack_safebag
// char ***PKCS12_item_pack_safebag(int a1, int a2, unsigned int a3, unsigned int a4);
// [0x1a43960] (120 bytes) PKCS12_MAKE_KEYBAG
// char ***PKCS12_MAKE_KEYBAG(char **a1);
// [0x1a439e0] (266 bytes) PKCS12_MAKE_SHKEYBAG
// char ***PKCS12_MAKE_SHKEYBAG(unsigned int a1, char *a2, size_t a3, void *a4, int a5, int a6, int a7);
// [0x1a43af0] (255 bytes) PKCS12_pack_p7data
// int PKCS12_pack_p7data(int a1);
// [0x1a43bf0] (141 bytes) PKCS12_unpack_p7data
// int PKCS12_unpack_p7data(int a1);
// [0x1a43c80] (514 bytes) PKCS12_pack_p7encdata
// int PKCS12_pack_p7encdata(unsigned int a1, char *a2, size_t a3, void *a4, int a5, int a6, int a7);
// [0x1a43e90] (120 bytes) PKCS12_unpack_p7encdata
// int PKCS12_unpack_p7encdata(int a1, char *a2, size_t a3);
// [0x1a43f10] (53 bytes) PKCS12_decrypt_skey
// int PKCS12_decrypt_skey(int a1, char *a2, int a3);
// [0x1a43f50] (66 bytes) PKCS12_pack_authsafes
// bool PKCS12_pack_authsafes(int a1, int a2);
// [0x1a43fa0] (149 bytes) PKCS12_unpack_authsafes
// int PKCS12_unpack_authsafes(int a1);
// [0x1a44040] (60 bytes) d2i_PKCS12
// int d2i_PKCS12(int *a1, char **a2, int a3);
// [0x1a44080] (52 bytes) i2d_PKCS12
// int i2d_PKCS12(int a1, void **a2);
// [0x1a440c0] (36 bytes) PKCS12_new
// int PKCS12_new();
// [0x1a440f0] (44 bytes) PKCS12_free
// int PKCS12_free(char a1);
// [0x1a44120] (60 bytes) d2i_PKCS12_MAC_DATA
// int d2i_PKCS12_MAC_DATA(int *a1, char **a2, int a3);
// [0x1a44160] (52 bytes) i2d_PKCS12_MAC_DATA
// int i2d_PKCS12_MAC_DATA(int a1, void **a2);
// [0x1a441a0] (36 bytes) PKCS12_MAC_DATA_new
// int PKCS12_MAC_DATA_new();
// [0x1a441d0] (44 bytes) PKCS12_MAC_DATA_free
// int PKCS12_MAC_DATA_free(char a1);
// [0x1a44200] (60 bytes) d2i_PKCS12_BAGS
// int d2i_PKCS12_BAGS(int *a1, char **a2, int a3);
// [0x1a44240] (52 bytes) i2d_PKCS12_BAGS
// int i2d_PKCS12_BAGS(int a1, void **a2);
// [0x1a44280] (36 bytes) PKCS12_BAGS_new
// int PKCS12_BAGS_new();
// [0x1a442b0] (44 bytes) PKCS12_BAGS_free
// int PKCS12_BAGS_free(char a1);
// [0x1a442e0] (60 bytes) d2i_PKCS12_SAFEBAG
// int d2i_PKCS12_SAFEBAG(int *a1, char **a2, int a3);
// [0x1a44320] (52 bytes) i2d_PKCS12_SAFEBAG
// int i2d_PKCS12_SAFEBAG(int a1, void **a2);
// [0x1a44360] (36 bytes) PKCS12_SAFEBAG_new
// int PKCS12_SAFEBAG_new();
// [0x1a44390] (44 bytes) PKCS12_SAFEBAG_free
// int PKCS12_SAFEBAG_free(char a1);
// [0x1a443c0] (729 bytes) RAND_query_egd_bytes
// int RAND_query_egd_bytes(char *s, int a2, int a3);
// [0x1a446a0] (93 bytes) RAND_egd_bytes
// int RAND_egd_bytes(char *a1, int a2);
// [0x1a44700] (42 bytes) RAND_egd
// int RAND_egd(char *a1);
// [0x1a450b0] (60 bytes) d2i_EXTENDED_KEY_USAGE
// int d2i_EXTENDED_KEY_USAGE(int *a1, char **a2, int a3);
// [0x1a450f0] (52 bytes) i2d_EXTENDED_KEY_USAGE
// int i2d_EXTENDED_KEY_USAGE(int a1, void **a2);
// [0x1a453c0] (794 bytes) i2d_ASN1_SET
// int i2d_ASN1_SET(int *a1, void **a2, void (*a3)(int, void **), int a4, char a5, int a6);
// [0x1a456e0] (801 bytes) d2i_ASN1_SET
// int *d2i_ASN1_SET(int **a1, int *a2, int a3, int (*a4)(uint32_t, uint8_t **, int), int a5, int a6, int a7);
// [0x1a46ba0] (266 bytes) i2d_ASN1_bio_stream
// int i2d_ASN1_bio_stream(uint32_t *a1, int a2, uint32_t *a3, int16_t a4, int a5);
// [0x1a46da0] (142 bytes) PEM_write_bio_ASN1_stream
// int PEM_write_bio_ASN1_stream( int a1, int a2, uint32_t *a3, int a4, uint32_t *a5, int16_t a6, const char *a7, int a8);
// [0x1a479e0] (437 bytes) BIO_new_NDEF
// int BIO_new_NDEF(uint32_t *a1, int a2, int a3);
// [0x1a48c30] (22 bytes) BIO_f_base64
// void *BIO_f_base64();
// [0x1a49410] (22 bytes) BIO_f_asn1
// void *BIO_f_asn1();
// [0x1a49430] (74 bytes) BIO_asn1_set_prefix
// int BIO_asn1_set_prefix(uint32_t *a1, int a2, int a3);
// [0x1a49480] (82 bytes) BIO_asn1_get_prefix
// int BIO_asn1_get_prefix(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1a494e0] (74 bytes) BIO_asn1_set_suffix
// int BIO_asn1_set_suffix(uint32_t *a1, int a2, int a3);
// [0x1a49530] (82 bytes) BIO_asn1_get_suffix
// int BIO_asn1_get_suffix(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1b11240] (436 bytes) ENGINE_set_default
// bool ENGINE_set_default(uint32_t *a1, int16_t a2);
// [0x1b11400] (185 bytes) ENGINE_set_default_string
// bool ENGINE_set_default_string(uint32_t *a1, char *a2);
// [0x1b114c0] (105 bytes) ENGINE_register_complete
// int ENGINE_register_complete(uint32_t *a1);
// [0x1b11530] (66 bytes) ENGINE_register_all_complete
// int ENGINE_register_all_complete();
// [0x1b11580] (17 bytes) ENGINE_set_load_privkey_function
// int ENGINE_set_load_privkey_function(int a1, int a2);
// [0x1b115a0] (17 bytes) ENGINE_set_load_pubkey_function
// int ENGINE_set_load_pubkey_function(int a1, int a2);
// [0x1b115c0] (17 bytes) ENGINE_set_load_ssl_client_cert_function
// int ENGINE_set_load_ssl_client_cert_function(int a1, int a2);
// [0x1b115e0] (12 bytes) ENGINE_get_load_privkey_function
// int ENGINE_get_load_privkey_function(int a1);
// [0x1b115f0] (12 bytes) ENGINE_get_load_pubkey_function
// int ENGINE_get_load_pubkey_function(int a1);
// [0x1b11600] (12 bytes) ENGINE_get_ssl_client_cert_function
// int ENGINE_get_ssl_client_cert_function(int a1);
// [0x1b11610] (396 bytes) ENGINE_load_private_key
// int ENGINE_load_private_key(int a1, int a2, int a3, int a4);
// [0x1b117a0] (396 bytes) ENGINE_load_public_key
// int ENGINE_load_public_key(int a1, int a2, int a3, int a4);
// [0x1b11930] (365 bytes) ENGINE_load_ssl_client_cert
// int ENGINE_load_ssl_client_cert(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x1b11d20] (1030 bytes) PKCS12_parse
// int PKCS12_parse(int a1, char *a2, int *a3, int *a4, int **a5);
// [0x1b12130] (605 bytes) PKCS12_gen_mac
// int PKCS12_gen_mac(int a1, char *a2, int a3, int a4, uint32_t *a5);
// [0x1b12390] (277 bytes) PKCS12_verify_mac
// bool PKCS12_verify_mac(int a1, char *a2, int a3);
// [0x1b124b0] (543 bytes) PKCS12_setup_mac
// int PKCS12_setup_mac(int a1, int a2, void *src, int a4, int a5);
// [0x1b126d0] (389 bytes) PKCS12_set_mac
// int PKCS12_set_mac(int a1, char *a2, int a3, void *a4, int a5, int a6, void *a7);
// [0x1b12860] (382 bytes) RAND_load_file
// int RAND_load_file(char *filename, size_t n);
// [0x1b129e0] (303 bytes) RAND_write_file
// int RAND_write_file(char *filename);
// [0x1b12b10] (301 bytes) RAND_file_name
// char *RAND_file_name(char *a1, unsigned int a2);
// [0x1b12c40] (657 bytes) X509_verify_cert_error_string
// const char *X509_verify_cert_error_string(int a1);
// [0x1b12f50] (77 bytes) PKCS12_add_localkeyid
// bool PKCS12_add_localkeyid(int a1, char *a2, size_t a3);
// [0x1b12fa0] (85 bytes) PKCS8_add_keyusage
// bool PKCS8_add_keyusage(int a1, char a2);
// [0x1b13000] (77 bytes) PKCS12_add_friendlyname_asc
// bool PKCS12_add_friendlyname_asc(int a1, char *a2, size_t a3);
// [0x1b13050] (77 bytes) PKCS12_add_friendlyname_uni
// bool PKCS12_add_friendlyname_uni(int a1, char *a2, size_t a3);
// [0x1b130a0] (77 bytes) PKCS12_add_CSPName_asc
// bool PKCS12_add_CSPName_asc(int a1, char *a2, size_t a3);
// [0x1b130f0] (135 bytes) PKCS12_get_attr_gen
// int PKCS12_get_attr_gen(int *a1, int a2);
// [0x1b13180] (78 bytes) PKCS12_get_friendlyname
// uint8_t *PKCS12_get_friendlyname(int a1);
