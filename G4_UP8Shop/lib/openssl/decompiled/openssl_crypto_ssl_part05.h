#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_crypto_ssl_part05.h
// Library: openssl | Module: openssl_crypto_ssl_part05
// Binary Address Span: 0x19f76a0 .. 0x1a348d0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x19f76a0] (12 bytes) ASN1_PCTX_get_nm_flags
// int ASN1_PCTX_get_nm_flags(int a1);
// [0x19f76b0] (14 bytes) ASN1_PCTX_set_nm_flags
// int ASN1_PCTX_set_nm_flags(int a1, int a2);
// [0x19f76c0] (12 bytes) ASN1_PCTX_get_cert_flags
// int ASN1_PCTX_get_cert_flags(int a1);
// [0x19f76d0] (14 bytes) ASN1_PCTX_set_cert_flags
// int ASN1_PCTX_set_cert_flags(int a1, int a2);
// [0x19f76e0] (12 bytes) ASN1_PCTX_get_oid_flags
// int ASN1_PCTX_get_oid_flags(int a1);
// [0x19f76f0] (14 bytes) ASN1_PCTX_set_oid_flags
// int ASN1_PCTX_set_oid_flags(int a1, int a2);
// [0x19f7700] (12 bytes) ASN1_PCTX_get_str_flags
// int ASN1_PCTX_get_str_flags(int a1);
// [0x19f7710] (14 bytes) ASN1_PCTX_set_str_flags
// int ASN1_PCTX_set_str_flags(int a1, int a2);
// [0x19f8230] (104 bytes) ASN1_item_print
// bool ASN1_item_print(uint32_t *a1, int *a2, int a3, int a4, int *a5);
// [0x19f8bb0] (60 bytes) d2i_X509_REVOKED
// int d2i_X509_REVOKED(int *a1, char **a2, int a3);
// [0x19f8bf0] (52 bytes) i2d_X509_REVOKED
// int i2d_X509_REVOKED(int a1, void **a2);
// [0x19f8c30] (36 bytes) X509_REVOKED_new
// int X509_REVOKED_new();
// [0x19f8c60] (44 bytes) X509_REVOKED_free
// int X509_REVOKED_free(char a1);
// [0x19f8c90] (60 bytes) d2i_X509_CRL_INFO
// int d2i_X509_CRL_INFO(int *a1, char **a2, int a3);
// [0x19f8cd0] (52 bytes) i2d_X509_CRL_INFO
// int i2d_X509_CRL_INFO(int a1, void **a2);
// [0x19f8d10] (36 bytes) X509_CRL_INFO_new
// int X509_CRL_INFO_new();
// [0x19f8d40] (44 bytes) X509_CRL_INFO_free
// int X509_CRL_INFO_free(char a1);
// [0x19f8d70] (60 bytes) d2i_X509_CRL
// int d2i_X509_CRL(int *a1, char **a2, int a3);
// [0x19f8db0] (52 bytes) i2d_X509_CRL
// int i2d_X509_CRL(int a1, void **a2);
// [0x19f8df0] (36 bytes) X509_CRL_new
// int X509_CRL_new();
// [0x19f8e20] (44 bytes) X509_CRL_free
// int X509_CRL_free(char a1);
// [0x19f8e50] (44 bytes) X509_CRL_dup
// int X509_CRL_dup(int a1);
// [0x19f8e80] (173 bytes) X509_CRL_add0_revoked
// int X509_CRL_add0_revoked(int *a1, int a2);
// [0x19f8f30] (38 bytes) X509_CRL_verify
// int X509_CRL_verify(int a1, int a2);
// [0x19f8f60] (54 bytes) X509_CRL_get0_by_serial
// int X509_CRL_get0_by_serial(int a1, int a2, int a3);
// [0x19f8fa0] (117 bytes) X509_CRL_get0_by_cert
// int X509_CRL_get0_by_cert(int a1, int a2, int a3);
// [0x19f9020] (33 bytes) X509_CRL_set_default_method
// void *X509_CRL_set_default_method(void *a1);
// [0x19f9050] (90 bytes) X509_CRL_METHOD_new
// uint32_t *X509_CRL_METHOD_new(int a1, int a2, int a3, int a4);
// [0x19f90b0] (39 bytes) X509_CRL_METHOD_free
// uint8_t *X509_CRL_METHOD_free(uint8_t *a1);
// [0x19f90e0] (14 bytes) X509_CRL_set_meth_data
// int X509_CRL_set_meth_data(int a1, int a2);
// [0x19f90f0] (12 bytes) X509_CRL_get_meth_data
// int X509_CRL_get_meth_data(int a1);
// [0x19f9350] (60 bytes) d2i_X509_PUBKEY
// int d2i_X509_PUBKEY(int *a1, char **a2, int a3);
// [0x19f9390] (52 bytes) i2d_X509_PUBKEY
// int i2d_X509_PUBKEY(int a1, void **a2);
// [0x19f93d0] (36 bytes) X509_PUBKEY_new
// int X509_PUBKEY_new();
// [0x19f9400] (44 bytes) X509_PUBKEY_free
// int X509_PUBKEY_free(char a1);
// [0x19f9430] (296 bytes) X509_PUBKEY_set
// int X509_PUBKEY_set(int *a1, int a2);
// [0x19f9560] (467 bytes) X509_PUBKEY_get
// char *X509_PUBKEY_get(int a1);
// [0x19f9740] (132 bytes) d2i_PUBKEY
// char *d2i_PUBKEY(void **a1, char **a2, int a3);
// [0x19f97d0] (129 bytes) i2d_PUBKEY
// int i2d_PUBKEY(int a1, void **a2);
// [0x19f9860] (162 bytes) d2i_RSA_PUBKEY
// int d2i_RSA_PUBKEY(void **a1, char **a2, int a3);
// [0x19f9910] (168 bytes) i2d_RSA_PUBKEY
// int i2d_RSA_PUBKEY(int a1, void **a2);
// [0x19f99c0] (162 bytes) d2i_DSA_PUBKEY
// int d2i_DSA_PUBKEY(void **a1, char **a2, int a3);
// [0x19f9a70] (168 bytes) i2d_DSA_PUBKEY
// int i2d_DSA_PUBKEY(int a1, void **a2);
// [0x19f9b20] (162 bytes) d2i_EC_PUBKEY
// int d2i_EC_PUBKEY(char **a1, char **a2, int a3);
// [0x19f9bd0] (168 bytes) i2d_EC_PUBKEY
// int i2d_EC_PUBKEY(int a1, void **a2);
// [0x19f9c80] (152 bytes) X509_PUBKEY_set0_param
// int X509_PUBKEY_set0_param(int *a1, int a2, int a3, int a4, int a5, int a6);
// [0x19f9d20] (67 bytes) X509_PUBKEY_get0_param
// int X509_PUBKEY_get0_param(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x19f9dd0] (60 bytes) d2i_X509_REQ_INFO
// int d2i_X509_REQ_INFO(int *a1, char **a2, int a3);
// [0x19f9e10] (52 bytes) i2d_X509_REQ_INFO
// int i2d_X509_REQ_INFO(int a1, void **a2);
// [0x19f9e50] (36 bytes) X509_REQ_INFO_new
// int X509_REQ_INFO_new();
// [0x19f9e80] (44 bytes) X509_REQ_INFO_free
// int X509_REQ_INFO_free(char a1);
// [0x19f9eb0] (60 bytes) d2i_X509_REQ
// int d2i_X509_REQ(int *a1, char **a2, int a3);
// [0x19f9ef0] (52 bytes) i2d_X509_REQ
// int i2d_X509_REQ(int a1, void **a2);
// [0x19f9f30] (36 bytes) X509_REQ_new
// int X509_REQ_new();
// [0x19f9f60] (44 bytes) X509_REQ_free
// int X509_REQ_free(char a1);
// [0x19f9f90] (44 bytes) X509_REQ_dup
// int X509_REQ_dup(int a1);
// [0x19f9fc0] (60 bytes) d2i_X509_SIG
// int d2i_X509_SIG(int *a1, char **a2, int a3);
// [0x19fa000] (52 bytes) i2d_X509_SIG
// int i2d_X509_SIG(int a1, void **a2);
// [0x19fa040] (36 bytes) X509_SIG_new
// int X509_SIG_new();
// [0x19fa070] (44 bytes) X509_SIG_free
// int X509_SIG_free(char a1);
// [0x19fa0a0] (60 bytes) d2i_NETSCAPE_SPKAC
// int d2i_NETSCAPE_SPKAC(int *a1, char **a2, int a3);
// [0x19fa0e0] (52 bytes) i2d_NETSCAPE_SPKAC
// int i2d_NETSCAPE_SPKAC(int a1, void **a2);
// [0x19fa180] (60 bytes) d2i_NETSCAPE_SPKI
// int d2i_NETSCAPE_SPKI(int *a1, char **a2, int a3);
// [0x19fa1c0] (52 bytes) i2d_NETSCAPE_SPKI
// int i2d_NETSCAPE_SPKI(int a1, void **a2);
// [0x19fa260] (60 bytes) d2i_X509_VAL
// int d2i_X509_VAL(int *a1, char **a2, int a3);
// [0x19fa2a0] (52 bytes) i2d_X509_VAL
// int i2d_X509_VAL(int a1, void **a2);
// [0x19fa2e0] (36 bytes) X509_VAL_new
// int X509_VAL_new();
// [0x19fa310] (44 bytes) X509_VAL_free
// int X509_VAL_free(char a1);
// [0x19fbad0] (1109 bytes) BIO_dump_indent_cb
// int BIO_dump_indent_cb(int (*a1)(char *, size_t, int), int a2, int a3, int a4, int a5);
// [0x19fbf30] (66 bytes) BIO_dump_cb
// int BIO_dump_cb(int (*a1)(char *, size_t, int), int a2, int a3, int a4);
// [0x19fbf80] (60 bytes) BIO_dump_fp
// int BIO_dump_fp(int a1, int a2, int a3);
// [0x19fbfc0] (68 bytes) BIO_dump_indent_fp
// int BIO_dump_indent_fp(int a1, int a2, int a3, int a4);
// [0x19fc010] (60 bytes) BIO_dump
// int BIO_dump(int a1, int a2, int a3);
// [0x19fc050] (68 bytes) BIO_dump_indent
// int BIO_dump_indent(int a1, int a2, int a3, int a4);
// [0x19fc0a0] (90 bytes) ERR_load_BIO_strings
// int ERR_load_BIO_strings();
// [0x19fc1c0] (22 bytes) BIO_s_null
// void *BIO_s_null();
// [0x19fc1e0] (292 bytes) BN_uadd
// int BN_uadd(int a1, uint32_t *a2, uint32_t *a3);
// [0x19fc310] (538 bytes) BN_usub
// int BN_usub(int **a1, int a2, int *a3);
// [0x19fc530] (234 bytes) BN_add
// int BN_add(int a1, int *a2, int *a3);
// [0x19fc620] (259 bytes) BN_sub
// char BN_sub(int a1, int *a2, int *a3);
// [0x19fe550] (99 bytes) BN_BLINDING_free
// int BN_BLINDING_free(void ***a1);
// [0x19fe5c0] (373 bytes) BN_BLINDING_new
// void ***BN_BLINDING_new(uint32_t *a1, uint32_t *a2, int a3);
// [0x19fe740] (215 bytes) BN_BLINDING_convert_ex
// bool BN_BLINDING_convert_ex(int a1, uint32_t *a2, int *a3, int a4);
// [0x19fe820] (58 bytes) BN_BLINDING_convert
// bool BN_BLINDING_convert(int a1, int *a2, int a3);
// [0x19fe860] (12 bytes) BN_BLINDING_get_thread_id
// int BN_BLINDING_get_thread_id(int a1);
// [0x19fe870] (14 bytes) BN_BLINDING_set_thread_id
// int BN_BLINDING_set_thread_id(int a1, int a2);
// [0x19fe880] (12 bytes) BN_BLINDING_thread_id
// int BN_BLINDING_thread_id(int a1);
// [0x19fe890] (12 bytes) BN_BLINDING_get_flags
// int BN_BLINDING_get_flags(int a1);
// [0x19fe8a0] (14 bytes) BN_BLINDING_set_flags
// int BN_BLINDING_set_flags(int a1, int a2);
// [0x19fe8b0] (550 bytes) BN_BLINDING_create_param
// void ***BN_BLINDING_create_param(void *a1, uint32_t *a2, int a3, int a4, void **a5, void **a6);
// [0x19feae0] (360 bytes) BN_BLINDING_update
// int BN_BLINDING_update(int *a1, int a2);
// [0x19fec50] (238 bytes) BN_BLINDING_invert_ex
// int BN_BLINDING_invert_ex(int a1, int a2, int *a3, int a4);
// [0x19fed40] (58 bytes) BN_BLINDING_invert
// int BN_BLINDING_invert(int a1, int *a2, int a3);
// [0x19fed80] (3271 bytes) BN_div
// int BN_div(uint32_t *a1, uint32_t *a2, int64_t a3, int *a4);
// [0x19ffa50] (90 bytes) ERR_load_BN_strings
// int ERR_load_BN_strings();
// [0x19ffb80] (512 bytes) BN_exp
// int BN_exp(uint32_t *a1, uint32_t *a2, int a3, int *a4);
// [0x19ffd80] (1197 bytes) BN_mod_exp_recp
// int BN_mod_exp_recp(uint32_t *a1, int a2, int a3, uint32_t *a4, int *a5);
// [0x1a00230] (1760 bytes) BN_mod_exp_mont_consttime
// int BN_mod_exp_mont_consttime(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int *a5, char *a6);
// [0x1a00910] (1474 bytes) BN_mod_exp_mont
// int BN_mod_exp_mont(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4, int *a5, char *a6);
// [0x1a00ee0] (1323 bytes) BN_mod_exp_mont_word
// int BN_mod_exp_mont_word(uint32_t *a1, unsigned int a2, int a3, unsigned int **a4, int *a5, char *a6);
// [0x1a01410] (206 bytes) BN_mod_exp
// int BN_mod_exp(uint32_t *a1, unsigned int **a2, int a3, unsigned int **a4, int *a5);
// [0x1a014e0] (1132 bytes) BN_mod_exp_simple
// int BN_mod_exp_simple(uint32_t *a1, int a2, int a3, int a4, int *a5);
// [0x1a01950] (2137 bytes) BN_mod_exp2_mont
// int BN_mod_exp2_mont(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int *a7, char *a8);
// [0x1a021b0] (469 bytes) BN_gcd
// bool BN_gcd(uint32_t *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a02390] (2884 bytes) BN_mod_inverse
// void **BN_mod_inverse(void **a1, int a2, int a3, int *a4);
// [0x1a02ee0] (741 bytes) BN_kronecker
// int BN_kronecker(uint32_t *a1, uint32_t *a2, int *a3);
// [0x1a031d0] (138 bytes) BN_nnmod
// int BN_nnmod(uint32_t *a1, int64_t a2, int *a3);
// [0x1a03260] (102 bytes) BN_mod_add
// int BN_mod_add(uint32_t *a1, int *a2, int *a3, unsigned int a4, int *a5);
// [0x1a032d0] (129 bytes) BN_mod_add_quick
// int BN_mod_add_quick(int **a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a03360] (102 bytes) BN_mod_sub
// int BN_mod_sub(uint32_t *a1, int *a2, int *a3, unsigned int a4, int *a5);
// [0x1a033d0] (125 bytes) BN_mod_sub_quick
// int BN_mod_sub_quick(int *a1, int *a2, int *a3, int *a4);
// [0x1a03450] (198 bytes) BN_mod_mul
// bool BN_mod_mul(uint32_t *a1, int a2, int a3, unsigned int a4, int *a5);
// [0x1a03520] (114 bytes) BN_mod_sqr
// int BN_mod_sqr(uint32_t *a1, int a2, unsigned int a3, int *a4);
// [0x1a035a0] (94 bytes) BN_mod_lshift1
// int BN_mod_lshift1(uint32_t *a1, int a2, unsigned int a3, int *a4);
// [0x1a03600] (121 bytes) BN_mod_lshift1_quick
// int BN_mod_lshift1_quick(int *a1, int a2, int *a3);
// [0x1a03680] (291 bytes) BN_mod_lshift_quick
// int BN_mod_lshift_quick(int *a1, int *a2, int a3, int *a4);
// [0x1a037b0] (193 bytes) BN_mod_lshift
// int BN_mod_lshift(int *a1, unsigned int a2, int a3, int *a4, int *a5);
// [0x1a03c50] (190 bytes) BN_mod_mul_montgomery
// bool BN_mod_mul_montgomery(unsigned int *a1, int a2, int a3, uint32_t *a4, int *a5);
// [0x1a03d10] (130 bytes) BN_from_montgomery
// int BN_from_montgomery(unsigned int *a1, uint32_t *a2, uint32_t *a3, int *a4);
// [0x1a03da0] (100 bytes) BN_MONT_CTX_init
// uint32_t *BN_MONT_CTX_init(uint32_t *a1);
// [0x1a03e10] (89 bytes) BN_MONT_CTX_new
// uint8_t *BN_MONT_CTX_new();
// [0x1a03e70] (109 bytes) BN_MONT_CTX_free
// void BN_MONT_CTX_free(void **a1);
// [0x1a03ee0] (597 bytes) BN_MONT_CTX_set
// bool BN_MONT_CTX_set(unsigned int *a1, int **a2, int *a3);
// [0x1a04140] (148 bytes) BN_MONT_CTX_copy
// uint32_t *BN_MONT_CTX_copy(uint32_t *a1, uint32_t *a2);
// [0x1a041e0] (272 bytes) BN_MONT_CTX_set_locked
// void **BN_MONT_CTX_set_locked(void ***a1, int a2, int **a3, int *a4);
// [0x1a05bd0] (1013 bytes) BN_mul
// int BN_mul(uint32_t *a1, int a2, int a3, int *a4);
// [0x1a06280] (22 bytes) BN_get0_nist_prime_192
// void **BN_get0_nist_prime_192();
// [0x1a062a0] (22 bytes) BN_get0_nist_prime_224
// void **BN_get0_nist_prime_224();
// [0x1a062c0] (22 bytes) BN_get0_nist_prime_256
// void **BN_get0_nist_prime_256();
// [0x1a062e0] (22 bytes) BN_get0_nist_prime_384
// void **BN_get0_nist_prime_384();
// [0x1a06300] (22 bytes) BN_get0_nist_prime_521
// void **BN_get0_nist_prime_521();
// [0x1a06320] (821 bytes) BN_nist_mod_192
// int BN_nist_mod_192(unsigned int **a1, unsigned int **a2, int a3, int *a4);
// [0x1a06660] (1107 bytes) BN_nist_mod_224
// int BN_nist_mod_224(unsigned int **a1, unsigned int **a2, int a3, int *a4);
// [0x1a06ac0] (1603 bytes) BN_nist_mod_256
// int BN_nist_mod_256(unsigned int **a1, unsigned int **a2, int a3, int *a4);
// [0x1a07110] (1783 bytes) BN_nist_mod_384
// int BN_nist_mod_384(unsigned int **a1, unsigned int **a2, int a3, int *a4);
// [0x1a07810] (629 bytes) BN_nist_mod_521
// int BN_nist_mod_521(unsigned int **a1, unsigned int **a2, int a3, int *a4);
// [0x1a07a90] (328 bytes) BN_bn2hex
// uint8_t *BN_bn2hex(uint32_t *a1);
// [0x1a07be0] (631 bytes) BN_bn2dec
// uint8_t *BN_bn2dec(uint32_t *a1);
// [0x1a07e60] (599 bytes) BN_hex2bn
// int BN_hex2bn(void ***a1, uint8_t *a2);
// [0x1a080c0] (494 bytes) BN_dec2bn
// int BN_dec2bn(uint32_t **a1, char *a2);
// [0x1a082b0] (161 bytes) BN_asc2bn
// int BN_asc2bn(void ***a1, char *a2);
// [0x1a08360] (310 bytes) BN_print
// int BN_print(uint32_t *a1, uint32_t *a2);
// [0x1a084a0] (125 bytes) BN_print_fp
// int BN_print_fp(int a1, uint32_t *a2);
// [0x1a089d0] (40 bytes) BN_pseudo_rand
// int BN_pseudo_rand(void **a1, int a2, int a3, int a4);
// [0x1a08a00] (37 bytes) BN_rand
// int BN_rand(void **a1, int a2, int a3, int a4);
// [0x1a08a30] (40 bytes) BN_bntest_rand
// int BN_bntest_rand(void **a1, int a2, int a3, int a4);
// [0x1a08a60] (19 bytes) BN_rand_range
// int BN_rand_range(int *a1, int *a2);
// [0x1a08a80] (22 bytes) BN_pseudo_rand_range
// int BN_pseudo_rand_range(int *a1, int *a2);
// [0x1a08aa0] (73 bytes) BN_RECP_CTX_init
// uint32_t *BN_RECP_CTX_init(uint32_t *a1);
// [0x1a08af0] (89 bytes) BN_RECP_CTX_new
// uint8_t *BN_RECP_CTX_new();
// [0x1a08b50] (93 bytes) BN_RECP_CTX_free
// void BN_RECP_CTX_free(void **a1);
// [0x1a08bb0] (114 bytes) BN_RECP_CTX_set
// int BN_RECP_CTX_set(uint32_t *a1, uint32_t *a2);
// [0x1a08c30] (167 bytes) BN_reciprocal
// int BN_reciprocal(uint32_t *a1, unsigned int a2, int a3, int *a4);
// [0x1a08ce0] (842 bytes) BN_div_recp
// int BN_div_recp(uint32_t *a1, uint8_t *a2, uint32_t *a3, int *a4, int *a5);
// [0x1a09030] (226 bytes) BN_mod_mul_reciprocal
// int BN_mod_mul_reciprocal(uint8_t *a1, int a2, int a3, int *a4, int *a5);
// [0x1a09120] (247 bytes) BN_lshift1
// int BN_lshift1(int **a1, int **a2);
// [0x1a09220] (275 bytes) BN_rshift1
// int BN_rshift1(int *a1, int *a2);
// [0x1a09340] (406 bytes) BN_lshift
// int BN_lshift(void **a1, int *a2, int a3);
// [0x1a094e0] (442 bytes) BN_rshift
// int BN_rshift(unsigned int **a1, unsigned int **a2, int a3);
// [0x1a09a10] (733 bytes) BN_sqr
// int BN_sqr(unsigned int **a1, unsigned int **a2, int *a3);
// [0x1a09cf0] (2613 bytes) BN_mod_sqrt
// uint32_t *BN_mod_sqrt(uint32_t *a1, uint32_t *a2, int **a3, int *a4);
// [0x1a0a730] (126 bytes) BN_mod_word
// int BN_mod_word(uint32_t *a1, unsigned int a2);
// [0x1a0a7b0] (274 bytes) BN_div_word
// int BN_div_word(uint32_t *a1, unsigned int a2);
// [0x1a0a8d0] (324 bytes) BN_sub_word
// int BN_sub_word(unsigned int **a1, unsigned int a2);
// [0x1a0aa20] (293 bytes) BN_add_word
// int BN_add_word(unsigned int **a1, unsigned int a2);
// [0x1a0ab50] (188 bytes) BN_mul_word
// int BN_mul_word(int a1, unsigned int a2);
// [0x1a0ac10] (90 bytes) ERR_load_BUF_strings
// int ERR_load_BUF_strings();
// [0x1a0d240] (36 bytes) CMS_get0_RecipientInfos
// int CMS_get0_RecipientInfos(int *a1);
// [0x1a0d270] (11 bytes) CMS_RecipientInfo_type
// int CMS_RecipientInfo_type(int a1);
// [0x1a0d280] (328 bytes) CMS_EnvelopedData_create
// int *CMS_EnvelopedData_create(int a1);
// [0x1a0d3d0] (609 bytes) CMS_add1_recipient_cert
// uint32_t *CMS_add1_recipient_cert(int *a1, int a2, int a3);
// [0x1a0d640] (154 bytes) CMS_RecipientInfo_ktri_get0_algs
// int CMS_RecipientInfo_ktri_get0_algs(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a0d6e0] (126 bytes) CMS_RecipientInfo_ktri_get0_signer_id
// int CMS_RecipientInfo_ktri_get0_signer_id(uint32_t *a1, int a2, int a3, int a4);
// [0x1a0d760] (109 bytes) CMS_RecipientInfo_ktri_cert_cmp
// int CMS_RecipientInfo_ktri_cert_cmp(uint32_t *a1, int a2);
// [0x1a0d7d0] (102 bytes) CMS_RecipientInfo_set0_pkey
// int CMS_RecipientInfo_set0_pkey(uint32_t *a1, int a2);
// [0x1a0d840] (141 bytes) CMS_RecipientInfo_kekri_id_cmp
// int CMS_RecipientInfo_kekri_id_cmp(uint32_t *a1, int a2, int a3);
// [0x1a0d8d0] (645 bytes) CMS_add0_recipient_key
// uint32_t *CMS_add0_recipient_key( int *a1, unsigned int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x1a0db60] (236 bytes) CMS_RecipientInfo_kekri_get0_id
// int CMS_RecipientInfo_kekri_get0_id(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x1a0dc50] (110 bytes) CMS_RecipientInfo_set0_key
// int CMS_RecipientInfo_set0_key(uint32_t *a1, int a2, int a3);
// [0x1a0dcc0] (1291 bytes) CMS_RecipientInfo_decrypt
// int CMS_RecipientInfo_decrypt(int a1, uint32_t *a2);
// [0x1a0e700] (90 bytes) ERR_load_CMS_strings
// int ERR_load_CMS_strings();
// [0x1a0e8f0] (60 bytes) d2i_CMS_ContentInfo
// int d2i_CMS_ContentInfo(int *a1, char **a2, int a3);
// [0x1a0e930] (52 bytes) i2d_CMS_ContentInfo
// int i2d_CMS_ContentInfo(int a1, void **a2);
// [0x1a0e970] (36 bytes) CMS_ContentInfo_new
// int CMS_ContentInfo_new();
// [0x1a0e9a0] (44 bytes) CMS_ContentInfo_free
// int CMS_ContentInfo_free(char a1);
// [0x1a0e9d0] (68 bytes) CMS_ContentInfo_print_ctx
// bool CMS_ContentInfo_print_ctx(uint32_t *a1, int *a2, int a3, int *a4);
// [0x1a0ea20] (11 bytes) CMS_get0_type
// int CMS_get0_type(int a1);
// [0x1a0ea30] (301 bytes) CMS_get0_content
// int CMS_get0_content(int *a1);
// [0x1a0eb60] (475 bytes) CMS_dataFinal
// int CMS_dataFinal(int *a1, int **a2);
// [0x1a0edc0] (375 bytes) CMS_dataInit
// uint32_t *CMS_dataInit(int *a1, uint8_t *a2);
// [0x1a0ef40] (28 bytes) CMS_get0_eContentType
// int CMS_get0_eContentType(int *a1);
// [0x1a0ef60] (106 bytes) CMS_set1_eContentType
// int CMS_set1_eContentType(int *a1, int a2);
// [0x1a0efd0] (55 bytes) CMS_is_detached
// int CMS_is_detached(int *a1);
// [0x1a0f010] (179 bytes) CMS_set_detached
// int CMS_set_detached(int *a1, int a2);
// [0x1a0f3d0] (156 bytes) CMS_add0_CertificateChoices
// int CMS_add0_CertificateChoices(int *a1);
// [0x1a0f470] (208 bytes) CMS_add0_cert
// int CMS_add0_cert(int *a1, int a2);
// [0x1a0f540] (117 bytes) CMS_add1_cert
// int CMS_add1_cert(int *a1, int a2);
// [0x1a0f5c0] (250 bytes) CMS_add0_RevocationInfoChoice
// int CMS_add0_RevocationInfoChoice(int *a1);
// [0x1a0f6c0] (60 bytes) CMS_add0_crl
// int CMS_add0_crl(int *a1, int a2);
// [0x1a0f700] (117 bytes) CMS_add1_crl
// int CMS_add1_crl(int *a1, int a2);
// [0x1a0f780] (277 bytes) CMS_get1_certs
// void **CMS_get1_certs(int *a1);
// [0x1a0f8a0] (384 bytes) CMS_get1_crls
// void **CMS_get1_crls(int *a1);
// [0x1a0fb80] (26 bytes) CMS_SignedData_init
// bool CMS_SignedData_init(int *a1);
// [0x1a0fe40] (36 bytes) CMS_get0_SignerInfos
// int CMS_get0_SignerInfos(int *a1);
// [0x1a0fe70] (165 bytes) CMS_get0_signers
// int *CMS_get0_signers(int *a1);
// [0x1a0ff20] (145 bytes) CMS_SignerInfo_set1_signer_cert
// int CMS_SignerInfo_set1_signer_cert(int a1, int a2);
// [0x1a0ffc0] (61 bytes) CMS_SignerInfo_get0_signer_id
// char CMS_SignerInfo_get0_signer_id(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a10000] (45 bytes) CMS_SignerInfo_cert_cmp
// int CMS_SignerInfo_cert_cmp(int a1, int a2);
// [0x1a10030] (409 bytes) CMS_set1_signers_certs
// int CMS_set1_signers_certs(int *a1, int *a2, char a3);
// [0x1a101d0] (87 bytes) CMS_SignerInfo_get0_algs
// uint32_t *CMS_SignerInfo_get0_algs(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x1a10230] (772 bytes) CMS_SignerInfo_sign
// int CMS_SignerInfo_sign(int a1);
// [0x1a10800] (399 bytes) CMS_SignerInfo_verify
// int CMS_SignerInfo_verify(int a1);
// [0x1a10b70] (577 bytes) CMS_SignerInfo_verify_content
// int CMS_SignerInfo_verify_content(uint32_t **a1, int **a2);
// [0x1a10dc0] (126 bytes) CMS_add_smimecap
// int CMS_add_smimecap(int a1, int a2);
// [0x1a10e40] (233 bytes) CMS_add_simple_smimecap
// int CMS_add_simple_smimecap(int **a1, unsigned int a2, int a3);
// [0x1a10f90] (349 bytes) CMS_add_standard_smimecap
// bool CMS_add_standard_smimecap(int **a1);
// [0x1a110f0] (1612 bytes) CMS_add1_signer
// uint32_t *CMS_add1_signer(int *a1, int a2, uint32_t *a3, int digestbyname, int a5);
// [0x1a11740] (90 bytes) ERR_load_COMP_strings
// int ERR_load_COMP_strings();
// [0x1a117a0] (90 bytes) ERR_load_CONF_strings
// int ERR_load_CONF_strings();
// [0x1a11800] (77 bytes) CONF_set_nconf
// int CONF_set_nconf(int a1, int a2);
// [0x1a11850] (27 bytes) CONF_set_default_method
// int CONF_set_default_method(int a1);
// [0x1a11920] (64 bytes) CONF_free
// int CONF_free(int a1);
// [0x1a11af0] (91 bytes) CONF_load_bio
// int CONF_load_bio(int a1, int a2, int a3);
// [0x1a11b50] (162 bytes) CONF_load_fp
// int CONF_load_fp(int a1, int a2, int a3);
// [0x1a11c00] (162 bytes) CONF_load
// int CONF_load(int a1, char *a2, int a3);
// [0x1a11d50] (78 bytes) CONF_get_section
// int CONF_get_section(int a1, int a2);
// [0x1a11e90] (126 bytes) CONF_get_string
// int CONF_get_string(int a1, int a2, int a3);
// [0x1a11fe0] (166 bytes) CONF_get_number
// int CONF_get_number(int a1, int a2, int a3);
// [0x1a121a0] (72 bytes) CONF_dump_bio
// int CONF_dump_bio(int a1, int a2);
// [0x1a121f0] (154 bytes) CONF_dump_fp
// int CONF_dump_fp(int a1, int a2);
// [0x1a12290] (584 bytes) DES_ede3_cfb64_encrypt
// uint8_t *DES_ede3_cfb64_encrypt( uint8_t *a1, int64_t a2, int a3, int a4, int a5, uint8_t *a6, int *a7, int a8);
// [0x1a124e0] (2525 bytes) DES_ede3_cfb_encrypt
// void DES_ede3_cfb_encrypt( int a1, int a2, int a3, unsigned int a4, int a5, int a6, int a7, uint8_t *a8, int a9);
// [0x1a12ec0] (527 bytes) DES_cfb64_encrypt
// int *DES_cfb64_encrypt( uint8_t *a1, uint8_t *a2, int a3, int a4, uint8_t *a5, int *a6, int a7);
// [0x1a130d0] (2075 bytes) DES_cfb_encrypt
// unsigned int DES_cfb_encrypt(int a1, int a2, int a3, unsigned int a4, int a5, uint8_t *a6, int a7);
// [0x1a138f0] (4297 bytes) DES_encrypt1
// int DES_encrypt1(int *a1, uint32_t *a2, int a3);
// [0x1a149c0] (4089 bytes) DES_encrypt2
// uint32_t *DES_encrypt2(uint32_t *a1, uint32_t *a2, int a3);
// [0x1a159c0] (335 bytes) DES_encrypt3
// int DES_encrypt3(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a15b10] (335 bytes) DES_decrypt3
// int DES_decrypt3(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x1a15c60] (1776 bytes) DES_ncbc_encrypt
// unsigned int DES_ncbc_encrypt(uint8_t *a1, int a2, int a3, uint32_t *a4, uint8_t *a5, int a6);
// [0x1a16350] (1788 bytes) DES_ede3_cbc_encrypt
// unsigned int DES_ede3_cbc_encrypt( uint8_t *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint8_t *a7, int a8);
// [0x1a16a50] (239 bytes) DES_ecb3_encrypt
// unsigned int DES_ecb3_encrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, int a6);
// [0x1a16b40] (505 bytes) DES_ede3_ofb64_encrypt
// unsigned int DES_ede3_ofb64_encrypt( uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint8_t *a7, int *a8);
// [0x1a16d40] (492 bytes) DES_ofb64_encrypt
// int *DES_ofb64_encrypt(uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint8_t *a5, int *a6);
// [0x1a16f30] (1949 bytes) DES_xcbc_encrypt
// unsigned int DES_xcbc_encrypt( uint8_t *a1, uint8_t *a2, int a3, uint32_t *a4, uint8_t *a5, uint8_t *a6, uint8_t *a7, int a8);
// [0x1a176d0] (396 bytes) DH_check
// int DH_check(int a1, uint32_t *a2);
// [0x1a17860] (189 bytes) DH_check_pub_key
// int DH_check_pub_key(int a1, int *a2, uint32_t *a3);
// [0x1a17920] (90 bytes) ERR_load_DH_strings
// int ERR_load_DH_strings();
// [0x1a17dd0] (90 bytes) ERR_load_DSA_strings
// int ERR_load_DSA_strings();
// [0x1a18f20] (90 bytes) ERR_load_DSO_strings
// int ERR_load_DSO_strings();
// [0x1a1b300] (22 bytes) EC_GF2m_simple_method
// void *EC_GF2m_simple_method();
// [0x1a1b320] (90 bytes) ERR_load_EC_strings
// int ERR_load_EC_strings();
// [0x1a1bb10] (90 bytes) ERR_load_ECDH_strings
// int ERR_load_ECDH_strings();
// [0x1a1bb70] (60 bytes) d2i_ECDSA_SIG
// int d2i_ECDSA_SIG(int *a1, char **a2, int a3);
// [0x1a1bbb0] (52 bytes) i2d_ECDSA_SIG
// int i2d_ECDSA_SIG(int a1, void **a2);
// [0x1a1bbf0] (36 bytes) ECDSA_SIG_new
// int ECDSA_SIG_new();
// [0x1a1bc20] (44 bytes) ECDSA_SIG_free
// int ECDSA_SIG_free(char a1);
// [0x1a1bc50] (90 bytes) ERR_load_ECDSA_strings
// int ERR_load_ECDSA_strings();
// [0x1a1bcb0] (90 bytes) ERR_load_ENGINE_strings
// int ERR_load_ENGINE_strings();
// [0x1a1bd10] (130 bytes) ENGINE_get_first
// int ENGINE_get_first();
// [0x1a1bda0] (130 bytes) ENGINE_get_last
// int ENGINE_get_last();
// [0x1a1be30] (202 bytes) ENGINE_get_next
// int ENGINE_get_next(uint32_t *a1);
// [0x1a1bf00] (202 bytes) ENGINE_get_prev
// int ENGINE_get_prev(uint32_t *a1);
// [0x1a1bfd0] (587 bytes) ENGINE_add
// int ENGINE_add(const char **a1);
// [0x1a1c220] (399 bytes) ENGINE_remove
// int ENGINE_remove(uint32_t *a1);
// [0x1a1c3f0] (727 bytes) ENGINE_by_id
// int ENGINE_by_id(char *s1);
// [0x1a1c6d0] (126 bytes) ENGINE_up_ref
// int ENGINE_up_ref(int a1);
// [0x1a1c880] (22 bytes) ENGINE_get_table_flags
// int ENGINE_get_table_flags();
// [0x1a1c8a0] (24 bytes) ENGINE_set_table_flags
// int ENGINE_set_table_flags(int a1);
// [0x1a1ce10] (44 bytes) ENGINE_unregister_ciphers
// void ENGINE_unregister_ciphers(int a1);
// [0x1a1ce40] (145 bytes) ENGINE_register_ciphers
// int ENGINE_register_ciphers(uint32_t *a1);
// [0x1a1cee0] (61 bytes) ENGINE_register_all_ciphers
// int ENGINE_register_all_ciphers();
// [0x1a1cf20] (145 bytes) ENGINE_set_default_ciphers
// int ENGINE_set_default_ciphers(uint32_t *a1);
// [0x1a1cfc0] (44 bytes) ENGINE_get_cipher_engine
// uint32_t *ENGINE_get_cipher_engine(int a1);
// [0x1a1cff0] (12 bytes) ENGINE_get_ciphers
// int ENGINE_get_ciphers(int a1);
// [0x1a1d000] (159 bytes) ENGINE_get_cipher
// int ENGINE_get_cipher(int a1, int a2);
// [0x1a1d0a0] (17 bytes) ENGINE_set_ciphers
// int ENGINE_set_ciphers(int a1, int a2);
// [0x1a1d0f0] (44 bytes) ENGINE_unregister_digests
// void ENGINE_unregister_digests(int a1);
// [0x1a1d120] (145 bytes) ENGINE_register_digests
// int ENGINE_register_digests(uint32_t *a1);
// [0x1a1d1c0] (61 bytes) ENGINE_register_all_digests
// int ENGINE_register_all_digests();
// [0x1a1d200] (145 bytes) ENGINE_set_default_digests
// int ENGINE_set_default_digests(uint32_t *a1);
// [0x1a1d2a0] (44 bytes) ENGINE_get_digest_engine
// uint32_t *ENGINE_get_digest_engine(int a1);
// [0x1a1d2d0] (12 bytes) ENGINE_get_digests
// int ENGINE_get_digests(int a1);
// [0x1a1d2e0] (159 bytes) ENGINE_get_digest
// int ENGINE_get_digest(int a1, int a2);
// [0x1a1d380] (17 bytes) ENGINE_set_digests
// int ENGINE_set_digests(int a1, int a2);
// [0x1a1d3d0] (44 bytes) ENGINE_unregister_RAND
// void ENGINE_unregister_RAND(int a1);
// [0x1a1d400] (92 bytes) ENGINE_register_RAND
// int ENGINE_register_RAND(uint32_t *a1);
// [0x1a1d460] (61 bytes) ENGINE_register_all_RAND
// int ENGINE_register_all_RAND();
// [0x1a1d4a0] (92 bytes) ENGINE_set_default_RAND
// int ENGINE_set_default_RAND(uint32_t *a1);
// [0x1a1d500] (44 bytes) ENGINE_get_default_RAND
// uint32_t *ENGINE_get_default_RAND();
// [0x1a1d530] (12 bytes) ENGINE_get_RAND
// int ENGINE_get_RAND(int a1);
// [0x1a1d540] (17 bytes) ENGINE_set_RAND
// int ENGINE_set_RAND(int a1, int a2);
// [0x1a1d590] (44 bytes) ENGINE_unregister_RSA
// void ENGINE_unregister_RSA(int a1);
// [0x1a1d5c0] (92 bytes) ENGINE_register_RSA
// int ENGINE_register_RSA(uint32_t *a1);
// [0x1a1d620] (61 bytes) ENGINE_register_all_RSA
// int ENGINE_register_all_RSA();
// [0x1a1d660] (92 bytes) ENGINE_set_default_RSA
// int ENGINE_set_default_RSA(uint32_t *a1);
// [0x1a1d6c0] (44 bytes) ENGINE_get_default_RSA
// uint32_t *ENGINE_get_default_RSA();
// [0x1a1d6f0] (12 bytes) ENGINE_get_RSA
// int ENGINE_get_RSA(int a1);
// [0x1a1d700] (17 bytes) ENGINE_set_RSA
// int ENGINE_set_RSA(int a1, int a2);
// [0x1a1d7d0] (298 bytes) ERR_print_errors_cb
// signed int ERR_print_errors_cb(int a1, int a2, int (*a3)(char *, unsigned int, int), int a4);
// [0x1a1d900] (44 bytes) ERR_print_errors_fp
// signed int ERR_print_errors_fp(int a1, int a2, int a3);
// [0x1a1d930] (44 bytes) ERR_print_errors
// signed int ERR_print_errors(int a1, int a2, int a3);
// [0x1a1e1b0] (22 bytes) BIO_f_cipher
// void *BIO_f_cipher();
// [0x1a1e1d0] (217 bytes) BIO_set_cipher
// void BIO_set_cipher(uint32_t *a1, uint32_t *a2, int a3, void *a4, int a5);
// [0x1a1e740] (22 bytes) BIO_f_md
// void *BIO_f_md();
// [0x1a1e760] (25 bytes) EVP_EncodeInit
// uint32_t *EVP_EncodeInit(uint32_t *a1);
// [0x1a1e780] (318 bytes) EVP_EncodeBlock
// int EVP_EncodeBlock(uint8_t *a1, uint8_t *a2, int a3);
// [0x1a1e8c0] (103 bytes) EVP_EncodeFinal
// int EVP_EncodeFinal(int a1, uint8_t *a2, int *a3);
// [0x1a1e930] (438 bytes) EVP_EncodeUpdate
// void EVP_EncodeUpdate(int a1, uint8_t *a2, int *a3, uint8_t *src, size_t a5);
// [0x1a1eaf0] (32 bytes) EVP_DecodeInit
// uint32_t *EVP_DecodeInit(uint32_t *a1);
// [0x1a1eb10] (420 bytes) EVP_DecodeBlock
// int EVP_DecodeBlock(uint8_t *a1, uint8_t *a2, int a3);
// [0x1a1ecc0] (912 bytes) EVP_DecodeUpdate
// int EVP_DecodeUpdate(int a1, uint8_t *a2, uint32_t *a3, uint8_t *a4, int a5);
// [0x1a1f050] (124 bytes) EVP_DecodeFinal
// int EVP_DecodeFinal(int a1, uint8_t *a2, int *a3);
// [0x1a1f0d0] (77 bytes) EVP_set_pw_prompt
// char *EVP_set_pw_prompt(char *src);
// [0x1a1f120] (30 bytes) EVP_get_pw_prompt
// char *EVP_get_pw_prompt();
// [0x1a1f140] (301 bytes) EVP_read_pw_string_min
// int EVP_read_pw_string_min(int a1, int a2, int a3, char *a4, int a5);
// [0x1a1f270] (66 bytes) EVP_read_pw_string
// int EVP_read_pw_string(int a1, int a2, char *a3, int a4);
// [0x1a1f2c0] (705 bytes) EVP_BytesToKey
// int EVP_BytesToKey(int a1, uint32_t *a2, int a3, int a4, int a5, unsigned int a6, uint8_t *a7, uint8_t *a8);
// [0x1a1f600] (217 bytes) EVP_PBE_alg_add_type
// int EVP_PBE_alg_add_type(int a1, int a2, int a3, int a4, int a5);
// [0x1a1f6e0] (124 bytes) EVP_PBE_alg_add
// int EVP_PBE_alg_add(int a1, int a2, int a3, int a4);
// [0x1a1f760] (253 bytes) EVP_PBE_find
// int EVP_PBE_find(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x1a1f860] (701 bytes) EVP_PBE_CipherInit
// int EVP_PBE_CipherInit(int a1, char *s, size_t a3, int a4, int a5, int a6);
// [0x1a1fb20] (56 bytes) EVP_PBE_cleanup
// int EVP_PBE_cleanup();
// [0x1a1fb60] (9 bytes) PKCS5_PBE_add
// void PKCS5_PBE_add();
// [0x1a1fb70] (845 bytes) PKCS5_PBE_keyivgen
// int PKCS5_PBE_keyivgen(uint32_t *a1, char *s, size_t a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, int a7);
// [0x1a1fec0] (574 bytes) PKCS5_PBKDF2_HMAC
// int PKCS5_PBKDF2_HMAC(char *s, size_t n, int a3, int a4, int a5, uint32_t *a6, int a7, char *a8);
// [0x1a20100] (91 bytes) PKCS5_PBKDF2_HMAC_SHA1
// int PKCS5_PBKDF2_HMAC_SHA1(char *s, size_t a2, int a3, int a4, int a5, int a6, char *a7);
// [0x1a20160] (1299 bytes) PKCS5_v2_PBE_keyivgen
// int PKCS5_v2_PBE_keyivgen(uint32_t *a1, char *s, size_t a3, uint32_t *a4, int a5, int a6, int a7);
// [0x1a20680] (272 bytes) CRYPTO_cbc128_encrypt
// int CRYPTO_cbc128_encrypt( int a1, uint32_t *a2, unsigned int a3, int a4, uint32_t *a5, void (*a6)(uint32_t *, uint32_t *, int));
// [0x1a20790] (492 bytes) CRYPTO_cbc128_decrypt
// unsigned int CRYPTO_cbc128_decrypt( unsigned int a1, unsigned int a2, unsigned int a3, int a4, uint32_t *a5, void (*a6)(unsigned int, uint8_t *, int));
// [0x1a20af0] (759 bytes) CRYPTO_cfb128_encrypt
// char CRYPTO_cfb128_encrypt( char *a1, uint8_t *a2, unsigned int a3, int a4, int a5, unsigned int *a6, int a7, void (*a8)(int, int, int));
// [0x1a20df0] (174 bytes) CRYPTO_cfb128_1_encrypt
// int CRYPTO_cfb128_1_encrypt( int a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, void (*a8)(uint32_t *, uint32_t *, int));
// [0x1a20ea0] (97 bytes) CRYPTO_cfb128_8_encrypt
// int CRYPTO_cfb128_8_encrypt( int a1, int a2, int a3, int a4, uint32_t *a5, int a6, int a7, void (*a8)(uint32_t *, uint32_t *, int));
// [0x1a20f10] (352 bytes) CRYPTO_ofb128_encrypt
// unsigned int *CRYPTO_ofb128_encrypt( uint8_t *a1, uint8_t *a2, unsigned int a3, int a4, int a5, unsigned int *a6, void (*a7)(int, int, int));
// [0x1a21070] (332 bytes) d2i_PKCS8PrivateKey_bio
// int d2i_PKCS8PrivateKey_bio(int a1, void **a2, int (*a3)(char *, int, uint32_t, char *), char *a4);
// [0x1a211c0] (170 bytes) d2i_PKCS8PrivateKey_fp
// int d2i_PKCS8PrivateKey_fp(int a1, void **a2, int (*a3)(char *, int, uint32_t, char *), char *a4);
// [0x1a21270] (78 bytes) PEM_read_bio_PKCS8
// int PEM_read_bio_PKCS8(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x1a212c0] (78 bytes) PEM_read_PKCS8
// int PEM_read_PKCS8(int a1, int a2, int a3, char *a4);
// [0x1a21310] (102 bytes) PEM_write_bio_PKCS8
// bool PEM_write_bio_PKCS8(uint32_t *a1, int a2);
// [0x1a21380] (102 bytes) PEM_write_PKCS8
// bool PEM_write_PKCS8(int a1, int a2);
// [0x1a213f0] (78 bytes) PEM_read_bio_PKCS8_PRIV_KEY_INFO
// int PEM_read_bio_PKCS8_PRIV_KEY_INFO( uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x1a21440] (78 bytes) PEM_read_PKCS8_PRIV_KEY_INFO
// int PEM_read_PKCS8_PRIV_KEY_INFO(int a1, int a2, int a3, char *a4);
// [0x1a21490] (102 bytes) PEM_write_bio_PKCS8_PRIV_KEY_INFO
// bool PEM_write_bio_PKCS8_PRIV_KEY_INFO(uint32_t *a1, int a2);
// [0x1a21850] (29 bytes) PEM_write_PKCS8PrivateKey
// int PEM_write_PKCS8PrivateKey( int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a21870] (39 bytes) PEM_write_PKCS8PrivateKey_nid
// int PEM_write_PKCS8PrivateKey_nid( int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a218a0] (39 bytes) i2d_PKCS8PrivateKey_nid_fp
// int i2d_PKCS8PrivateKey_nid_fp( int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a218d0] (29 bytes) i2d_PKCS8PrivateKey_fp
// int i2d_PKCS8PrivateKey_fp( int a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a218f0] (39 bytes) i2d_PKCS8PrivateKey_nid_bio
// int i2d_PKCS8PrivateKey_nid_bio( uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a21920] (29 bytes) i2d_PKCS8PrivateKey_bio
// int i2d_PKCS8PrivateKey_bio( uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a21940] (29 bytes) PEM_write_bio_PKCS8PrivateKey
// int PEM_write_bio_PKCS8PrivateKey( uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a21960] (39 bytes) PEM_write_bio_PKCS8PrivateKey_nid
// int PEM_write_bio_PKCS8PrivateKey_nid( uint32_t *a1, int a2, int a3, char *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x1a21990] (102 bytes) PEM_write_PKCS8_PRIV_KEY_INFO
// bool PEM_write_PKCS8_PRIV_KEY_INFO(int a1, int a2);
// [0x1a21a00] (159 bytes) PKCS7_add_attrib_smimecap
// int PKCS7_add_attrib_smimecap(int a1, int a2);
// [0x1a21aa0] (101 bytes) PKCS7_get_smimecap
// int PKCS7_get_smimecap(int a1);
// [0x1a21b10] (226 bytes) PKCS7_simple_smimecap
// int PKCS7_simple_smimecap(int *a1, unsigned int a2, int a3);
// [0x1a21c00] (136 bytes) PKCS7_add_attrib_content_type
// int PKCS7_add_attrib_content_type(int a1, char **a2);
// [0x1a21c90] (138 bytes) PKCS7_add0_attrib_signing_time
// int PKCS7_add0_attrib_signing_time(int a1, int a2);
// [0x1a21d20] (144 bytes) PKCS7_add1_attrib_digest
// int PKCS7_add1_attrib_digest(int a1, char *s, size_t a3);
// [0x1a21db0] (9 bytes) PKCS12_PBE_add
// void PKCS12_PBE_add();
// [0x1a21dc0] (652 bytes) PKCS12_PBE_keyivgen
// int PKCS12_PBE_keyivgen(uint32_t *a1, char *a2, int a3, uint32_t *a4, uint32_t *a5, int a6, int a7);
// [0x1a22050] (517 bytes) PKCS12_pbe_crypt
// char *PKCS12_pbe_crypt(int *a1, char *a2, size_t a3, char *a4, size_t a5, char **a6, uint32_t *a7, int a8);
// [0x1a22260] (301 bytes) PKCS12_item_decrypt_d2i
// int PKCS12_item_decrypt_d2i(int *a1, int a2, char *a3, size_t a4, int a5, int a6);
// [0x1a22390] (374 bytes) PKCS12_item_i2d_encrypt
// char **PKCS12_item_i2d_encrypt(int *a1, int a2, char *a3, size_t a4, int a5, int a6);
// [0x1a22510] (1447 bytes) PKCS12_key_gen_uni
// int PKCS12_key_gen_uni(int a1, int a2, int a3, int a4, char a5, int a6, int a7, char *dest, uint32_t *a9);
// [0x1a22ac0] (298 bytes) PKCS12_key_gen_asc
// int PKCS12_key_gen_asc(char *a1, int a2, int a3, int a4, char a5, int a6, int a7, char *a8, uint32_t *a9);
// [0x1a22bf0] (370 bytes) PKCS8_encrypt
// int **PKCS8_encrypt(int a1, int a2, char *a3, size_t a4, void *a5, int a6, int a7, int a8);
// [0x1a22ec0] (52 bytes) i2d_PKCS12_bio
// int i2d_PKCS12_bio(uint32_t *a1, int a2);
// [0x1a22f00] (52 bytes) i2d_PKCS12_fp
// int i2d_PKCS12_fp(int a1, int a2);
// [0x1a22f40] (52 bytes) d2i_PKCS12_bio
// int d2i_PKCS12_bio(uint32_t *a1, int *a2);
// [0x1a22f80] (52 bytes) d2i_PKCS12_fp
// int d2i_PKCS12_fp(int a1, int *a2);
// [0x1a22fc0] (60 bytes) PKCS12_x5092certbag
// int PKCS12_x5092certbag(int a1);
// [0x1a23000] (60 bytes) PKCS12_x509crl2certbag
// int PKCS12_x509crl2certbag(int a1);
// [0x1a23040] (115 bytes) PKCS12_certbag2x509
// int PKCS12_certbag2x509(int a1);
// [0x1a230c0] (115 bytes) PKCS12_certbag2x509crl
// int PKCS12_certbag2x509crl(int a1);
// [0x1a23dd0] (22 bytes) RAND_SSLeay
// int (**RAND_SSLeay())(int, int);
// [0x1a23df0] (698 bytes) RAND_poll
// int RAND_poll();
// [0x1a25fd0] (22 bytes) RSA_PKCS1_SSLeay
// char **RSA_PKCS1_SSLeay();
// [0x1a25ff0] (1944 bytes) RSA_generate_key_ex
// int RSA_generate_key_ex(int a1, int a2, uint32_t *a3, int a4);
// [0x1a26790] (174 bytes) RSA_padding_add_none
// int RSA_padding_add_none(void *dest, int a2, void *src, int n);
// [0x1a26840] (181 bytes) RSA_padding_check_none
// int RSA_padding_check_none(char *s, int a2, void *src, int n);
// [0x1a26900] (371 bytes) PKCS1_MGF1
// int PKCS1_MGF1(int a1, int a2, int a3, int a4, uint32_t *a5);
// [0x1a26a80] (851 bytes) RSA_padding_check_PKCS1_OAEP
// size_t RSA_padding_check_PKCS1_OAEP(void *dest, int a2, void *src, size_t a4, int a5, int a6, int a7);
// [0x1a26de0] (641 bytes) RSA_padding_add_PKCS1_OAEP
// int RSA_padding_add_PKCS1_OAEP(uint8_t *a1, int a2, void *src, int n, int a5, int a6);
// [0x1a27070] (194 bytes) RSA_padding_add_PKCS1_type_1
// int RSA_padding_add_PKCS1_type_1(uint8_t *a1, int a2, void *src, int a4);
// [0x1a27140] (459 bytes) RSA_padding_check_PKCS1_type_1
// int RSA_padding_check_PKCS1_type_1(void *dest, int a2, uint8_t *a3, int a4, int a5);
// [0x1a27310] (253 bytes) RSA_padding_add_PKCS1_type_2
// int RSA_padding_add_PKCS1_type_2(uint8_t *a1, int a2, void *src, int n);
// [0x1a27410] (387 bytes) RSA_padding_check_PKCS1_type_2
// int RSA_padding_check_PKCS1_type_2(void *dest, int a2, uint8_t *a3, int a4, int a5);
// [0x1a275a0] (269 bytes) RSA_padding_add_SSLv23
// int RSA_padding_add_SSLv23(uint8_t *a1, int a2, void *src, int n);
// [0x1a276b0] (452 bytes) RSA_padding_check_SSLv23
// int RSA_padding_check_SSLv23(void *dest, int a2, uint8_t *a3, int a4, int a5);
// [0x1a2bbc0] (22 bytes) X509_LOOKUP_hash_dir
// char **X509_LOOKUP_hash_dir();
// [0x1a2bbe0] (22 bytes) X509_LOOKUP_file
// char **X509_LOOKUP_file();
// [0x1a2bc00] (547 bytes) X509_load_cert_file
// int X509_load_cert_file(int a1, int a2, int a3);
// [0x1a2be30] (547 bytes) X509_load_crl_file
// int X509_load_crl_file(int a1, int a2, int a3);
// [0x1a2c060] (400 bytes) X509_load_cert_crl_file
// int X509_load_cert_crl_file(int a1, char *a2, int a3);
// [0x1a2c320] (39 bytes) X509_CRL_get_ext_count
// int X509_CRL_get_ext_count(int a1);
// [0x1a2c350] (55 bytes) X509_CRL_get_ext_by_NID
// int X509_CRL_get_ext_by_NID(int a1, int a2, int a3);
// [0x1a2c390] (55 bytes) X509_CRL_get_ext_by_OBJ
// int X509_CRL_get_ext_by_OBJ(int a1, int a2, int a3);
// [0x1a2c3d0] (55 bytes) X509_CRL_get_ext_by_critical
// int X509_CRL_get_ext_by_critical(int a1, int a2, int a3);
// [0x1a2c410] (47 bytes) X509_CRL_get_ext
// int X509_CRL_get_ext(int a1, int a2);
// [0x1a2c440] (47 bytes) X509_CRL_delete_ext
// int X509_CRL_delete_ext(int a1, int a2);
// [0x1a2c470] (63 bytes) X509_CRL_get_ext_d2i
// int X509_CRL_get_ext_d2i(int a1, int a2, int a3, int a4);
// [0x1a2c4b0] (71 bytes) X509_CRL_add1_ext_i2d
// int X509_CRL_add1_ext_i2d(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1a2c500] (63 bytes) X509_CRL_add_ext
// bool X509_CRL_add_ext(uint32_t *a1, int a2, int a3);
// [0x1a2c540] (39 bytes) X509_get_ext_count
// int X509_get_ext_count(int a1);
// [0x1a2c570] (55 bytes) X509_get_ext_by_NID
// int X509_get_ext_by_NID(int a1, int a2, int a3);
// [0x1a2c5b0] (55 bytes) X509_get_ext_by_OBJ
// int X509_get_ext_by_OBJ(int a1, int a2, int a3);
// [0x1a2c5f0] (55 bytes) X509_get_ext_by_critical
// int X509_get_ext_by_critical(int a1, int a2, int a3);
// [0x1a2c630] (47 bytes) X509_get_ext
// int X509_get_ext(int a1, int a2);
// [0x1a2c660] (47 bytes) X509_delete_ext
// int X509_delete_ext(int a1, int a2);
// [0x1a2c690] (63 bytes) X509_add_ext
// bool X509_add_ext(uint32_t *a1, int a2, int a3);
// [0x1a2c6d0] (63 bytes) X509_get_ext_d2i
// int X509_get_ext_d2i(int a1, int a2, int a3, int a4);
// [0x1a2c710] (71 bytes) X509_add1_ext_i2d
// int X509_add1_ext_i2d(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x1a2c760] (37 bytes) X509_REVOKED_get_ext_count
// int X509_REVOKED_get_ext_count(int a1);
// [0x1a2c790] (53 bytes) X509_REVOKED_get_ext_by_NID
// int X509_REVOKED_get_ext_by_NID(int a1, int a2, int a3);
// [0x1a2c7d0] (53 bytes) X509_REVOKED_get_ext_by_OBJ
// int X509_REVOKED_get_ext_by_OBJ(int a1, int a2, int a3);
// [0x1a2c810] (53 bytes) X509_REVOKED_get_ext_by_critical
// int X509_REVOKED_get_ext_by_critical(int a1, int a2, int a3);
// [0x1a2c850] (45 bytes) X509_REVOKED_get_ext
// int X509_REVOKED_get_ext(int a1, int a2);
// [0x1a2c880] (45 bytes) X509_REVOKED_delete_ext
// int X509_REVOKED_delete_ext(int a1, int a2);
// [0x1a2c8b0] (61 bytes) X509_REVOKED_add_ext
// bool X509_REVOKED_add_ext(int a1, int a2, int a3);
// [0x1a2c8f0] (61 bytes) X509_REVOKED_get_ext_d2i
// int X509_REVOKED_get_ext_d2i(int a1, int a2, int a3, int a4);
// [0x1a2c930] (69 bytes) X509_REVOKED_add1_ext_i2d
// int X509_REVOKED_add1_ext_i2d(int a1, int a2, int a3, int a4, int a5);
// [0x1a2c980] (308 bytes) X509_to_X509_REQ
// uint32_t *X509_to_X509_REQ(int a1, int a2, int a3);
// [0x1a2cac0] (60 bytes) X509_REQ_get_pubkey
// char *X509_REQ_get_pubkey(int a1);
// [0x1a2cb00] (381 bytes) X509_REQ_check_private_key
// int X509_REQ_check_private_key(int a1, uint32_t *a2);
// [0x1a2cc80] (80 bytes) X509_REQ_extension_nid
// char X509_REQ_extension_nid(int a1);
// [0x1a2ccd0] (22 bytes) X509_REQ_get_extension_nids
// void *X509_REQ_get_extension_nids();
// [0x1a2ccf0] (24 bytes) X509_REQ_set_extension_nids
// void *X509_REQ_set_extension_nids(void *a1);
// [0x1a2cd10] (276 bytes) X509_REQ_add_extensions_nid
// int X509_REQ_add_extensions_nid(int *a1, int a2, unsigned int a3);
// [0x1a2ce30] (50 bytes) X509_REQ_add_extensions
// int X509_REQ_add_extensions(int *a1, int a2);
// [0x1a2ce70] (39 bytes) X509_REQ_get_attr_count
// int X509_REQ_get_attr_count(int a1);
// [0x1a2cea0] (55 bytes) X509_REQ_get_attr_by_NID
// int X509_REQ_get_attr_by_NID(int a1, unsigned int a2, int a3);
// [0x1a2cee0] (55 bytes) X509_REQ_get_attr_by_OBJ
// int X509_REQ_get_attr_by_OBJ(int a1, int a2, int a3);
// [0x1a2cf20] (47 bytes) X509_REQ_get_attr
// int X509_REQ_get_attr(int a1, int a2);
// [0x1a2cf50] (234 bytes) X509_REQ_get_extensions
// int X509_REQ_get_extensions(uint32_t *a1);
// [0x1a2d040] (47 bytes) X509_REQ_delete_attr
// int X509_REQ_delete_attr(int a1, int a2);
// [0x1a2d070] (55 bytes) X509_REQ_add1_attr
// bool X509_REQ_add1_attr(int a1, int a2);
// [0x1a2d0b0] (79 bytes) X509_REQ_add1_attr_by_OBJ
// bool X509_REQ_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, size_t a5);
// [0x1a2d100] (79 bytes) X509_REQ_add1_attr_by_NID
// bool X509_REQ_add1_attr_by_NID(int a1, unsigned int a2, int a3, char *a4, size_t a5);
// [0x1a2d150] (79 bytes) X509_REQ_add1_attr_by_txt
// bool X509_REQ_add1_attr_by_txt(int a1, char *a2, int a3, char *a4, size_t a5);
// [0x1a2d3e0] (28 bytes) X509_TRUST_set_default
// int (*X509_TRUST_set_default(int (*a1)(int, int)))(int, int);
// [0x1a2d400] (48 bytes) X509_TRUST_get_count
// int X509_TRUST_get_count();
// [0x1a2d430] (68 bytes) X509_TRUST_get0
// char *X509_TRUST_get0(int a1);
// [0x1a2d480] (79 bytes) X509_TRUST_get_by_id
// int X509_TRUST_get_by_id(int a1);
// [0x1a2d4d0] (131 bytes) X509_check_trust
// char X509_check_trust(int a1, int a2, int a3);
// [0x1a2d560] (114 bytes) X509_TRUST_set
// int X509_TRUST_set(int *a1, int a2);
// [0x1a2d5e0] (385 bytes) X509_TRUST_add
// int X509_TRUST_add(int a1, int a2, int a3, char *a4, int a5, int a6);
// [0x1a2d770] (96 bytes) X509_TRUST_cleanup
// int X509_TRUST_cleanup();
// [0x1a2d7d0] (12 bytes) X509_TRUST_get_flags
// int X509_TRUST_get_flags(int a1);
// [0x1a2d7e0] (12 bytes) X509_TRUST_get0_name
// int X509_TRUST_get0_name(int a1);
// [0x1a2d7f0] (11 bytes) X509_TRUST_get_trust
// int X509_TRUST_get_trust(int a1);
// [0x1a2dbd0] (95 bytes) X509_EXTENSION_set_object
// int X509_EXTENSION_set_object(void **a1, int a2);
// [0x1a2dc30] (28 bytes) X509_EXTENSION_set_critical
// int X509_EXTENSION_set_critical(int a1, int a2);
// [0x1a2dc50] (68 bytes) X509_EXTENSION_set_data
// bool X509_EXTENSION_set_data(int a1, int a2);
// [0x1a2dca0] (239 bytes) X509_EXTENSION_create_by_OBJ
// void **X509_EXTENSION_create_by_OBJ(void ***a1, int a2, int a3, int a4);
// [0x1a2dd90] (170 bytes) X509_EXTENSION_create_by_NID
// void **X509_EXTENSION_create_by_NID(void ***a1, unsigned int a2, int a3, int a4);
// [0x1a2de40] (19 bytes) X509_EXTENSION_get_object
// int X509_EXTENSION_get_object(int a1);
// [0x1a2de60] (19 bytes) X509_EXTENSION_get_data
// int X509_EXTENSION_get_data(int a1);
// [0x1a2de80] (21 bytes) X509_EXTENSION_get_critical
// bool X509_EXTENSION_get_critical(int a1);
// [0x1a2dea0] (42 bytes) X509_NAME_entry_count
// int X509_NAME_entry_count(int *a1);
// [0x1a2ded0] (136 bytes) X509_NAME_get_index_by_OBJ
// int X509_NAME_get_index_by_OBJ(int *a1, int a2, int a3);
// [0x1a2df60] (71 bytes) X509_NAME_get_index_by_NID
// int X509_NAME_get_index_by_NID(int *a1, unsigned int a2, int a3);
// [0x1a2dfb0] (102 bytes) X509_NAME_get_entry
// int X509_NAME_get_entry(int **a1, int a2);
// [0x1a2e020] (224 bytes) X509_NAME_delete_entry
// int X509_NAME_delete_entry(int a1, int a2);
// [0x1a2e100] (484 bytes) X509_NAME_add_entry
// int X509_NAME_add_entry(int *a1, int a2, int a3, int a4);
// [0x1a2e2f0] (138 bytes) X509_NAME_ENTRY_set_object
// bool X509_NAME_ENTRY_set_object(void **a1, int a2);
// [0x1a2e380] (267 bytes) X509_NAME_ENTRY_set_data
// bool X509_NAME_ENTRY_set_data(int *a1, int a2, char *s, int a4);
// [0x1a2e490] (188 bytes) X509_NAME_ENTRY_create_by_OBJ
// void **X509_NAME_ENTRY_create_by_OBJ(void ***a1, int a2, int a3, char *a4, size_t a5);
// [0x1a2e550] (170 bytes) X509_NAME_ENTRY_create_by_NID
// void **X509_NAME_ENTRY_create_by_NID(void ***a1, unsigned int a2, int a3, char *a4, size_t a5);
// [0x1a2e600] (140 bytes) X509_NAME_add_entry_by_NID
// int X509_NAME_add_entry_by_NID(int *a1, unsigned int a2, int a3, char *a4, size_t a5, int a6, int a7);
// [0x1a2e690] (204 bytes) X509_NAME_ENTRY_create_by_txt
// void **X509_NAME_ENTRY_create_by_txt(void ***a1, char *a2, int a3, char *a4, size_t a5);
// [0x1a2e760] (140 bytes) X509_NAME_add_entry_by_txt
// int X509_NAME_add_entry_by_txt(int *a1, char *a2, int a3, char *a4, size_t a5, int a6, int a7);
// [0x1a2e7f0] (140 bytes) X509_NAME_add_entry_by_OBJ
// int X509_NAME_add_entry_by_OBJ(int *a1, int a2, int a3, char *a4, size_t a5, int a6, int a7);
// [0x1a2e880] (19 bytes) X509_NAME_ENTRY_get_object
// int X509_NAME_ENTRY_get_object(int a1);
// [0x1a2e8a0] (19 bytes) X509_NAME_ENTRY_get_data
// int X509_NAME_ENTRY_get_data(int a1);
// [0x1a2e8c0] (164 bytes) X509_NAME_get_text_by_OBJ
// const void *X509_NAME_get_text_by_OBJ(int *a1, int a2, void *dest, int a4);
// [0x1a2e970] (79 bytes) X509_NAME_get_text_by_NID
// int X509_NAME_get_text_by_NID(int *a1, unsigned int a2, void *a3, int a4);
// [0x1a2e9c0] (53 bytes) X509_REQ_set_version
// int X509_REQ_set_version(int a1, int a2);
// [0x1a2ea00] (57 bytes) X509_REQ_set_subject_name
// bool X509_REQ_set_subject_name(int a1, int a2);
// [0x1a2ea40] (57 bytes) X509_REQ_set_pubkey
// int X509_REQ_set_pubkey(int a1, int a2);
// [0x1a2ea80] (14 bytes) X509_policy_tree_level_count
// int X509_policy_tree_level_count(int a1);
// [0x1a2ea90] (41 bytes) X509_policy_tree_get0_level
// int X509_policy_tree_get0_level(uint32_t *a1, int a2);
// [0x1a2eac0] (19 bytes) X509_policy_tree_get0_policies
// int X509_policy_tree_get0_policies(int a1);
// [0x1a2eae0] (35 bytes) X509_policy_tree_get0_user_policies
// int X509_policy_tree_get0_user_policies(int a1);
// [0x1a2eb10] (77 bytes) X509_policy_level_node_count
// int X509_policy_level_node_count(int a1);
// [0x1a2eb60] (68 bytes) X509_policy_level_get0_node
// int X509_policy_level_get0_node(int a1, int a2);
// [0x1a2ebb0] (19 bytes) X509_policy_node_get0_policy
// int X509_policy_node_get0_policy(int a1);
// [0x1a2ebd0] (19 bytes) X509_policy_node_get0_qualifiers
// int X509_policy_node_get0_qualifiers(int a1);
// [0x1a2ebf0] (19 bytes) X509_policy_node_get0_parent
// int X509_policy_node_get0_parent(int a1);
// [0x1a303e0] (60 bytes) d2i_BASIC_CONSTRAINTS
// int d2i_BASIC_CONSTRAINTS(int *a1, char **a2, int a3);
// [0x1a30420] (52 bytes) i2d_BASIC_CONSTRAINTS
// int i2d_BASIC_CONSTRAINTS(int a1, void **a2);
// [0x1a32fc0] (60 bytes) d2i_PROXY_POLICY
// int d2i_PROXY_POLICY(int *a1, char **a2, int a3);
// [0x1a33000] (52 bytes) i2d_PROXY_POLICY
// int i2d_PROXY_POLICY(int a1, void **a2);
// [0x1a330a0] (60 bytes) d2i_PROXY_CERT_INFO_EXTENSION
// int d2i_PROXY_CERT_INFO_EXTENSION(int *a1, char **a2, int a3);
// [0x1a330e0] (52 bytes) i2d_PROXY_CERT_INFO_EXTENSION
// int i2d_PROXY_CERT_INFO_EXTENSION(int a1, void **a2);
// [0x1a33260] (60 bytes) d2i_PKEY_USAGE_PERIOD
// int d2i_PKEY_USAGE_PERIOD(int *a1, char **a2, int a3);
// [0x1a332a0] (52 bytes) i2d_PKEY_USAGE_PERIOD
// int i2d_PKEY_USAGE_PERIOD(int a1, void **a2);
// [0x1a33e30] (60 bytes) d2i_SXNETID
// int d2i_SXNETID(int *a1, char **a2, int a3);
// [0x1a33e70] (52 bytes) i2d_SXNETID
// int i2d_SXNETID(int a1, void **a2);
// [0x1a33f10] (60 bytes) d2i_SXNET
// int d2i_SXNET(int *a1, char **a2, int a3);
// [0x1a33f50] (52 bytes) i2d_SXNET
// int i2d_SXNET(int a1, void **a2);
// [0x1a348d0] (315 bytes) AES_wrap_key
// int AES_wrap_key(uint32_t *a1, int *a2, uint32_t *a3, void *src, size_t n);
