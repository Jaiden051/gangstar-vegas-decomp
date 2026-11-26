#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_crypto_ssl_part03.h
// Library: openssl | Module: openssl_crypto_ssl_part03
// Binary Address Span: 0x19afe60 .. 0x19c85b0 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x19afe60] (63 bytes) ERR_load_strings
// int ERR_load_strings(int a1, int *a2);
// [0x19afea0] (106 bytes) ERR_unload_strings
// int ERR_unload_strings(int a1, int *a2);
// [0x19aff10] (36 bytes) ERR_free_strings
// int ERR_free_strings();
// [0x19aff40] (42 bytes) ERR_get_string_table
// int ERR_get_string_table();
// [0x19aff70] (43 bytes) ERR_get_err_state_table
// int ERR_get_err_state_table();
// [0x19affa0] (43 bytes) ERR_release_err_state_table
// int ERR_release_err_state_table(int a1);
// [0x19affd0] (68 bytes) ERR_lib_error_string
// int ERR_lib_error_string(int a1);
// [0x19b0020] (68 bytes) ERR_func_error_string
// int ERR_func_error_string(int a1);
// [0x19b0070] (122 bytes) ERR_reason_error_string
// int ERR_reason_error_string(int a1);
// [0x19b00f0] (505 bytes) ERR_error_string_n
// const char *ERR_error_string_n(unsigned int a1, char *s, unsigned int a3);
// [0x19b02f0] (77 bytes) ERR_error_string
// char *ERR_error_string(unsigned int a1, char *a2);
// [0x19b0340] (118 bytes) ERR_remove_thread_state
// int ERR_remove_thread_state(int a1, int a2, uint32_t *a3);
// [0x19b03c0] (34 bytes) ERR_remove_state
// int ERR_remove_state(int a1, int a2);
// [0x19b03f0] (316 bytes) ERR_get_state
// void *ERR_get_state();
// [0x19b0740] (12 bytes) ERR_peek_last_error_line_data
// int ERR_peek_last_error_line_data(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x19b0750] (52 bytes) ERR_peek_last_error_line
// int ERR_peek_last_error_line(uint32_t *a1, uint32_t *a2);
// [0x19b0790] (52 bytes) ERR_peek_last_error
// int ERR_peek_last_error();
// [0x19b07d0] (9 bytes) ERR_peek_error_line_data
// int ERR_peek_error_line_data(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x19b07e0] (49 bytes) ERR_peek_error_line
// int ERR_peek_error_line(uint32_t *a1, uint32_t *a2);
// [0x19b0820] (49 bytes) ERR_peek_error
// int ERR_peek_error();
// [0x19b0860] (12 bytes) ERR_get_error_line_data
// int ERR_get_error_line_data(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x19b0870] (52 bytes) ERR_get_error_line
// int ERR_get_error_line(uint32_t *a1, uint32_t *a2);
// [0x19b08b0] (52 bytes) ERR_get_error
// int ERR_get_error();
// [0x19b08f0] (157 bytes) ERR_clear_error
// uint32_t *ERR_clear_error();
// [0x19b0990] (261 bytes) ERR_put_error
// uint32_t *ERR_put_error(int a1, int16_t a2, int16_t a3, int a4, int a5);
// [0x19b0aa0] (36 bytes) ERR_get_next_error_library
// int ERR_get_next_error_library();
// [0x19b0ad0] (118 bytes) ERR_set_error_data
// uint32_t *ERR_set_error_data(int a1, int a2);
// [0x19b0b50] (277 bytes) ERR_add_error_data
// uint8_t *ERR_add_error_data(int a1, ...);
// [0x19b0c70] (52 bytes) ERR_set_mark
// char ERR_set_mark();
// [0x19b0cb0] (236 bytes) ERR_pop_to_mark
// int ERR_pop_to_mark();
// [0x19b0da0] (176 bytes) ERR_load_crypto_strings
// int ERR_load_crypto_strings();
// [0x19b17e0] (93 bytes) EVP_MD_CTX_init
// int EVP_MD_CTX_init(uint8_t *a1);
// [0x19b1840] (82 bytes) EVP_MD_CTX_create
// uint8_t *EVP_MD_CTX_create();
// [0x19b18a0] (677 bytes) EVP_DigestInit_ex
// int EVP_DigestInit_ex(int a1, uint32_t *a2, uint32_t *a3);
// [0x19b1b50] (72 bytes) EVP_DigestInit
// int EVP_DigestInit(uint8_t *a1, uint32_t *a2);
// [0x19b1ba0] (35 bytes) EVP_DigestUpdate
// int EVP_DigestUpdate(int a1, int a2, int a3);
// [0x19b1bd0] (199 bytes) EVP_DigestFinal_ex
// int EVP_DigestFinal_ex(void **a1, int a2, uint32_t *a3);
// [0x19b1ca0] (304 bytes) EVP_MD_CTX_cleanup
// int EVP_MD_CTX_cleanup(int a1);
// [0x19b1dd0] (56 bytes) EVP_MD_CTX_destroy
// int EVP_MD_CTX_destroy(void *a1);
// [0x19b1e10] (176 bytes) EVP_Digest
// bool EVP_Digest(int a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x19b1ec0] (513 bytes) EVP_MD_CTX_copy_ex
// int EVP_MD_CTX_copy_ex(int *a1, int *a2);
// [0x19b20d0] (64 bytes) EVP_MD_CTX_copy
// int EVP_MD_CTX_copy(int *a1, int *a2);
// [0x19b2110] (84 bytes) EVP_DigestFinal
// int EVP_DigestFinal(void **a1, int a2, uint32_t *a3);
// [0x19b2f50] (22 bytes) EVP_aes_128_cbc
// void *EVP_aes_128_cbc();
// [0x19b2f70] (22 bytes) EVP_aes_128_cfb128
// void *EVP_aes_128_cfb128();
// [0x19b2f90] (22 bytes) EVP_aes_128_ofb
// void *EVP_aes_128_ofb();
// [0x19b2fb0] (22 bytes) EVP_aes_128_ecb
// void *EVP_aes_128_ecb();
// [0x19b2fd0] (22 bytes) EVP_aes_192_cbc
// void *EVP_aes_192_cbc();
// [0x19b2ff0] (22 bytes) EVP_aes_192_cfb128
// void *EVP_aes_192_cfb128();
// [0x19b3010] (22 bytes) EVP_aes_192_ofb
// void *EVP_aes_192_ofb();
// [0x19b3030] (22 bytes) EVP_aes_192_ecb
// void *EVP_aes_192_ecb();
// [0x19b3050] (22 bytes) EVP_aes_256_cbc
// void *EVP_aes_256_cbc();
// [0x19b3070] (22 bytes) EVP_aes_256_cfb128
// void *EVP_aes_256_cfb128();
// [0x19b3090] (22 bytes) EVP_aes_256_ofb
// void *EVP_aes_256_ofb();
// [0x19b30b0] (22 bytes) EVP_aes_256_ecb
// void *EVP_aes_256_ecb();
// [0x19b30d0] (22 bytes) EVP_aes_128_cfb1
// void *EVP_aes_128_cfb1();
// [0x19b30f0] (22 bytes) EVP_aes_192_cfb1
// void *EVP_aes_192_cfb1();
// [0x19b3110] (22 bytes) EVP_aes_256_cfb1
// void *EVP_aes_256_cfb1();
// [0x19b3130] (22 bytes) EVP_aes_128_cfb8
// void *EVP_aes_128_cfb8();
// [0x19b3150] (22 bytes) EVP_aes_192_cfb8
// void *EVP_aes_192_cfb8();
// [0x19b3170] (22 bytes) EVP_aes_256_cfb8
// void *EVP_aes_256_cfb8();
// [0x19b34f0] (22 bytes) EVP_bf_cbc
// void *EVP_bf_cbc();
// [0x19b3510] (22 bytes) EVP_bf_cfb64
// void *EVP_bf_cfb64();
// [0x19b3530] (22 bytes) EVP_bf_ofb
// void *EVP_bf_ofb();
// [0x19b3550] (22 bytes) EVP_bf_ecb
// void *EVP_bf_ecb();
// [0x19b4310] (22 bytes) EVP_camellia_128_cbc
// void *EVP_camellia_128_cbc();
// [0x19b4330] (22 bytes) EVP_camellia_128_cfb128
// void *EVP_camellia_128_cfb128();
// [0x19b4350] (22 bytes) EVP_camellia_128_ofb
// void *EVP_camellia_128_ofb();
// [0x19b4370] (22 bytes) EVP_camellia_128_ecb
// void *EVP_camellia_128_ecb();
// [0x19b4390] (22 bytes) EVP_camellia_192_cbc
// void *EVP_camellia_192_cbc();
// [0x19b43b0] (22 bytes) EVP_camellia_192_cfb128
// void *EVP_camellia_192_cfb128();
// [0x19b43d0] (22 bytes) EVP_camellia_192_ofb
// void *EVP_camellia_192_ofb();
// [0x19b43f0] (22 bytes) EVP_camellia_192_ecb
// void *EVP_camellia_192_ecb();
// [0x19b4410] (22 bytes) EVP_camellia_256_cbc
// void *EVP_camellia_256_cbc();
// [0x19b4430] (22 bytes) EVP_camellia_256_cfb128
// void *EVP_camellia_256_cfb128();
// [0x19b4450] (22 bytes) EVP_camellia_256_ofb
// void *EVP_camellia_256_ofb();
// [0x19b4470] (22 bytes) EVP_camellia_256_ecb
// void *EVP_camellia_256_ecb();
// [0x19b4490] (22 bytes) EVP_camellia_128_cfb1
// void *EVP_camellia_128_cfb1();
// [0x19b44b0] (22 bytes) EVP_camellia_192_cfb1
// void *EVP_camellia_192_cfb1();
// [0x19b44d0] (22 bytes) EVP_camellia_256_cfb1
// void *EVP_camellia_256_cfb1();
// [0x19b44f0] (22 bytes) EVP_camellia_128_cfb8
// void *EVP_camellia_128_cfb8();
// [0x19b4510] (22 bytes) EVP_camellia_192_cfb8
// void *EVP_camellia_192_cfb8();
// [0x19b4530] (22 bytes) EVP_camellia_256_cfb8
// void *EVP_camellia_256_cfb8();
// [0x19b48b0] (22 bytes) EVP_cast5_cbc
// void *EVP_cast5_cbc();
// [0x19b48d0] (22 bytes) EVP_cast5_cfb64
// void *EVP_cast5_cfb64();
// [0x19b48f0] (22 bytes) EVP_cast5_ofb
// void *EVP_cast5_ofb();
// [0x19b4910] (22 bytes) EVP_cast5_ecb
// void *EVP_cast5_ecb();
// [0x19b4fa0] (22 bytes) EVP_des_cbc
// void *EVP_des_cbc();
// [0x19b4fc0] (22 bytes) EVP_des_cfb64
// void *EVP_des_cfb64();
// [0x19b4fe0] (22 bytes) EVP_des_ofb
// void *EVP_des_ofb();
// [0x19b5000] (22 bytes) EVP_des_ecb
// void *EVP_des_ecb();
// [0x19b5020] (22 bytes) EVP_des_cfb1
// void *EVP_des_cfb1();
// [0x19b5040] (22 bytes) EVP_des_cfb8
// void *EVP_des_cfb8();
// [0x19b57e0] (22 bytes) EVP_des_ede_cbc
// void *EVP_des_ede_cbc();
// [0x19b5800] (22 bytes) EVP_des_ede_cfb64
// void *EVP_des_ede_cfb64();
// [0x19b5820] (22 bytes) EVP_des_ede_ofb
// void *EVP_des_ede_ofb();
// [0x19b5840] (22 bytes) EVP_des_ede_ecb
// void *EVP_des_ede_ecb();
// [0x19b5860] (22 bytes) EVP_des_ede3_cbc
// void *EVP_des_ede3_cbc();
// [0x19b5880] (22 bytes) EVP_des_ede3_cfb64
// void *EVP_des_ede3_cfb64();
// [0x19b58a0] (22 bytes) EVP_des_ede3_ofb
// void *EVP_des_ede3_ofb();
// [0x19b58c0] (22 bytes) EVP_des_ede3_ecb
// void *EVP_des_ede3_ecb();
// [0x19b58e0] (22 bytes) EVP_des_ede3_cfb1
// void *EVP_des_ede3_cfb1();
// [0x19b5900] (22 bytes) EVP_des_ede3_cfb8
// void *EVP_des_ede3_cfb8();
// [0x19b5920] (22 bytes) EVP_des_ede
// void *EVP_des_ede();
// [0x19b5940] (22 bytes) EVP_des_ede3
// void *EVP_des_ede3();
// [0x19b5d50] (22 bytes) EVP_idea_cbc
// void *EVP_idea_cbc();
// [0x19b5d70] (22 bytes) EVP_idea_cfb64
// void *EVP_idea_cfb64();
// [0x19b5d90] (22 bytes) EVP_idea_ofb
// void *EVP_idea_ofb();
// [0x19b5db0] (22 bytes) EVP_idea_ecb
// void *EVP_idea_ecb();
// [0x19b5e20] (22 bytes) EVP_enc_null
// void *EVP_enc_null();
// [0x19b64f0] (22 bytes) EVP_rc2_cbc
// void *EVP_rc2_cbc();
// [0x19b6510] (22 bytes) EVP_rc2_cfb64
// void *EVP_rc2_cfb64();
// [0x19b6530] (22 bytes) EVP_rc2_ofb
// void *EVP_rc2_ofb();
// [0x19b6550] (22 bytes) EVP_rc2_ecb
// void *EVP_rc2_ecb();
// [0x19b6570] (22 bytes) EVP_rc2_64_cbc
// void *EVP_rc2_64_cbc();
// [0x19b6590] (22 bytes) EVP_rc2_40_cbc
// void *EVP_rc2_40_cbc();
// [0x19b6650] (22 bytes) EVP_rc4
// void *EVP_rc4();
// [0x19b6670] (22 bytes) EVP_rc4_40
// void *EVP_rc4_40();
// [0x19b69e0] (22 bytes) EVP_seed_cbc
// void *EVP_seed_cbc();
// [0x19b6a00] (22 bytes) EVP_seed_cfb128
// void *EVP_seed_cfb128();
// [0x19b6a20] (22 bytes) EVP_seed_ofb
// void *EVP_seed_ofb();
// [0x19b6a40] (22 bytes) EVP_seed_ecb
// void *EVP_seed_ecb();
// [0x19b6bf0] (22 bytes) EVP_desx_cbc
// void *EVP_desx_cbc();
// [0x19b6c10] (93 bytes) EVP_CIPHER_CTX_init
// int EVP_CIPHER_CTX_init(uint8_t *a1);
// [0x19b6c70] (82 bytes) EVP_CIPHER_CTX_new
// uint8_t *EVP_CIPHER_CTX_new();
// [0x19b6cd0] (500 bytes) EVP_EncryptUpdate
// bool EVP_EncryptUpdate(uint32_t *a1, int a2, int *a3, char *src, int a5);
// [0x19b6ed0] (238 bytes) EVP_EncryptFinal_ex
// int EVP_EncryptFinal_ex(int a1, int a2, unsigned int *a3);
// [0x19b6fc0] (50 bytes) EVP_EncryptFinal
// int EVP_EncryptFinal(int a1, int a2, unsigned int *a3);
// [0x19b7000] (437 bytes) EVP_DecryptUpdate
// bool EVP_DecryptUpdate(int a1, char *dest, int *a3, char *a4, signed int a5);
// [0x19b71c0] (103 bytes) EVP_CipherUpdate
// bool EVP_CipherUpdate(uint32_t *a1, char *a2, int *a3, char *a4, size_t a5);
// [0x19b7230] (445 bytes) EVP_DecryptFinal_ex
// int EVP_DecryptFinal_ex(int a1, int a2, int *a3);
// [0x19b73f0] (50 bytes) EVP_DecryptFinal
// int EVP_DecryptFinal(int a1, int a2, int *a3);
// [0x19b7430] (67 bytes) EVP_CipherFinal
// int EVP_CipherFinal(int a1, int a2, unsigned int *a3);
// [0x19b7480] (67 bytes) EVP_CipherFinal_ex
// int EVP_CipherFinal_ex(int a1, int a2, unsigned int *a3);
// [0x19b74d0] (218 bytes) EVP_CIPHER_CTX_cleanup
// int EVP_CIPHER_CTX_cleanup(int a1);
// [0x19b75b0] (60 bytes) EVP_CIPHER_CTX_free
// int EVP_CIPHER_CTX_free(void *a1);
// [0x19b75f0] (45 bytes) EVP_CIPHER_CTX_set_padding
// int EVP_CIPHER_CTX_set_padding(int a1, int a2);
// [0x19b7620] (245 bytes) EVP_CIPHER_CTX_ctrl
// int EVP_CIPHER_CTX_ctrl(int a1, int a2, int a3, int a4);
// [0x19b7720] (185 bytes) EVP_CIPHER_CTX_set_key_length
// int EVP_CIPHER_CTX_set_key_length(uint32_t *a1, int a2);
// [0x19b77e0] (916 bytes) EVP_CipherInit_ex
// int EVP_CipherInit_ex(uint32_t *a1, uint32_t *a2, uint32_t *cipher_engine, int a4, void *src, int a6);
// [0x19b7b80] (74 bytes) EVP_DecryptInit_ex
// int EVP_DecryptInit_ex(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4, void *a5);
// [0x19b7bd0] (74 bytes) EVP_EncryptInit_ex
// int EVP_EncryptInit_ex(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4, void *a5);
// [0x19b7c20] (108 bytes) EVP_CipherInit
// int EVP_CipherInit(uint8_t *a1, uint32_t *a2, int a3, void *a4, int a5);
// [0x19b7c90] (66 bytes) EVP_DecryptInit
// int EVP_DecryptInit(uint8_t *a1, uint32_t *a2, int a3, void *a4);
// [0x19b7ce0] (66 bytes) EVP_EncryptInit
// int EVP_EncryptInit(uint8_t *a1, uint32_t *a2, int a3, void *a4);
// [0x19b7d30] (98 bytes) EVP_CIPHER_CTX_rand_key
// int EVP_CIPHER_CTX_rand_key(uint32_t *a1, int a2);
// [0x19b7da0] (567 bytes) EVP_CIPHER_CTX_copy
// int EVP_CIPHER_CTX_copy(int a1, int *a2);
// [0x19b7fe0] (90 bytes) ERR_load_EVP_strings
// int ERR_load_EVP_strings();
// [0x19b8040] (47 bytes) EVP_CIPHER_param_to_asn1
// int EVP_CIPHER_param_to_asn1(int a1, int a2);
// [0x19b8070] (47 bytes) EVP_CIPHER_asn1_to_param
// int EVP_CIPHER_asn1_to_param(int a1, int a2);
// [0x19b80a0] (12 bytes) EVP_CIPHER_block_size
// int EVP_CIPHER_block_size(int a1);
// [0x19b80b0] (12 bytes) EVP_CIPHER_CTX_block_size
// int EVP_CIPHER_CTX_block_size(int a1);
// [0x19b80c0] (45 bytes) EVP_Cipher
// int EVP_Cipher(int a1, int a2, int a3, int a4);
// [0x19b80f0] (11 bytes) EVP_CIPHER_CTX_cipher
// int EVP_CIPHER_CTX_cipher(int a1);
// [0x19b8100] (12 bytes) EVP_CIPHER_flags
// int EVP_CIPHER_flags(int a1);
// [0x19b8110] (12 bytes) EVP_CIPHER_CTX_flags
// int EVP_CIPHER_CTX_flags(int a1);
// [0x19b8120] (12 bytes) EVP_CIPHER_CTX_get_app_data
// int EVP_CIPHER_CTX_get_app_data(int a1);
// [0x19b8130] (14 bytes) EVP_CIPHER_CTX_set_app_data
// int EVP_CIPHER_CTX_set_app_data(int a1, int a2);
// [0x19b8140] (12 bytes) EVP_CIPHER_iv_length
// int EVP_CIPHER_iv_length(int a1);
// [0x19b8150] (12 bytes) EVP_CIPHER_CTX_iv_length
// int EVP_CIPHER_CTX_iv_length(int a1);
// [0x19b8160] (138 bytes) EVP_CIPHER_set_asn1_iv
// int EVP_CIPHER_set_asn1_iv(int a1, int a2);
// [0x19b81f0] (191 bytes) EVP_CIPHER_get_asn1_iv
// int EVP_CIPHER_get_asn1_iv(int a1, int a2);
// [0x19b82b0] (12 bytes) EVP_CIPHER_key_length
// int EVP_CIPHER_key_length(int a1);
// [0x19b82c0] (12 bytes) EVP_CIPHER_CTX_key_length
// int EVP_CIPHER_CTX_key_length(int a1);
// [0x19b82d0] (11 bytes) EVP_CIPHER_nid
// int EVP_CIPHER_nid(int a1);
// [0x19b82e0] (471 bytes) EVP_CIPHER_type
// int EVP_CIPHER_type(int a1);
// [0x19b84c0] (11 bytes) EVP_CIPHER_CTX_nid
// int EVP_CIPHER_CTX_nid(int a1);
// [0x19b84d0] (12 bytes) EVP_MD_block_size
// int EVP_MD_block_size(int a1);
// [0x19b84e0] (11 bytes) EVP_MD_type
// int EVP_MD_type(int a1);
// [0x19b84f0] (12 bytes) EVP_MD_pkey_type
// int EVP_MD_pkey_type(int a1);
// [0x19b8500] (86 bytes) EVP_MD_size
// int EVP_MD_size(int a1);
// [0x19b8560] (12 bytes) EVP_MD_flags
// int EVP_MD_flags(int a1);
// [0x19b8570] (19 bytes) EVP_MD_CTX_md
// int EVP_MD_CTX_md(int a1);
// [0x19b8590] (14 bytes) EVP_MD_CTX_set_flags
// int EVP_MD_CTX_set_flags(int a1, int a2);
// [0x19b85a0] (14 bytes) EVP_MD_CTX_clear_flags
// int EVP_MD_CTX_clear_flags(int a1, int a2);
// [0x19b85b0] (14 bytes) EVP_MD_CTX_test_flags
// int EVP_MD_CTX_test_flags(int a1, int a2);
// [0x19b85c0] (14 bytes) EVP_CIPHER_CTX_set_flags
// int EVP_CIPHER_CTX_set_flags(int a1, int a2);
// [0x19b85d0] (14 bytes) EVP_CIPHER_CTX_clear_flags
// int EVP_CIPHER_CTX_clear_flags(int a1, int a2);
// [0x19b85e0] (14 bytes) EVP_CIPHER_CTX_test_flags
// int EVP_CIPHER_CTX_test_flags(int a1, int a2);
// [0x19b85f0] (475 bytes) EVP_PKCS82PKEY
// int EVP_PKCS82PKEY(int a1);
// [0x19b87d0] (358 bytes) EVP_PKEY2PKCS8_broken
// uint32_t *EVP_PKEY2PKCS8_broken(int a1, int a2);
// [0x19b8940] (42 bytes) EVP_PKEY2PKCS8
// uint32_t *EVP_PKEY2PKCS8(int a1);
// [0x19b8970] (125 bytes) PKCS8_set_broken
// uint32_t *PKCS8_set_broken(uint32_t *a1, int a2);
// [0x19b89f0] (37 bytes) EVP_PKEY_get_attr_count
// int EVP_PKEY_get_attr_count(int a1);
// [0x19b8a20] (53 bytes) EVP_PKEY_get_attr_by_NID
// int EVP_PKEY_get_attr_by_NID(int a1, int a2, int a3);
// [0x19b8a60] (53 bytes) EVP_PKEY_get_attr_by_OBJ
// int EVP_PKEY_get_attr_by_OBJ(int a1, int a2, int a3);
// [0x19b8aa0] (45 bytes) EVP_PKEY_get_attr
// int EVP_PKEY_get_attr(int a1, int a2);
// [0x19b8ad0] (45 bytes) EVP_PKEY_delete_attr
// int EVP_PKEY_delete_attr(int a1, int a2);
// [0x19b8b00] (53 bytes) EVP_PKEY_add1_attr
// bool EVP_PKEY_add1_attr(int a1, int a2);
// [0x19b8b40] (77 bytes) EVP_PKEY_add1_attr_by_OBJ
// bool EVP_PKEY_add1_attr_by_OBJ(int a1, int a2, int a3, char *a4, int a5);
// [0x19b8b90] (77 bytes) EVP_PKEY_add1_attr_by_NID
// bool EVP_PKEY_add1_attr_by_NID(int a1, int a2, int a3, char *a4, int a5);
// [0x19b8be0] (77 bytes) EVP_PKEY_add1_attr_by_txt
// bool EVP_PKEY_add1_attr_by_txt(int a1, int a2, int a3, char *a4, int a5);
// [0x19b8cd0] (22 bytes) EVP_dss
// void *EVP_dss();
// [0x19b8d90] (22 bytes) EVP_dss1
// void *EVP_dss1();
// [0x19b8e50] (22 bytes) EVP_ecdsa
// void *EVP_ecdsa();
// [0x19b8f10] (22 bytes) EVP_md4
// void *EVP_md4();
// [0x19b8fd0] (22 bytes) EVP_md5
// void *EVP_md5();
// [0x19b9090] (22 bytes) EVP_mdc2
// void *EVP_mdc2();
// [0x19b9150] (22 bytes) EVP_ripemd160
// void *EVP_ripemd160();
// [0x19b9210] (22 bytes) EVP_sha
// void *EVP_sha();
// [0x19b9470] (22 bytes) EVP_sha1
// void *EVP_sha1();
// [0x19b9490] (22 bytes) EVP_sha224
// void *EVP_sha224();
// [0x19b94b0] (22 bytes) EVP_sha256
// void *EVP_sha256();
// [0x19b94d0] (22 bytes) EVP_sha384
// void *EVP_sha384();
// [0x19b94f0] (22 bytes) EVP_sha512
// void *EVP_sha512();
// [0x19b96e0] (67 bytes) EVP_DigestSignInit
// bool EVP_DigestSignInit(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x19b9730] (67 bytes) EVP_DigestVerifyInit
// bool EVP_DigestVerifyInit(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x19b9780] (474 bytes) EVP_DigestSignFinal
// bool EVP_DigestSignFinal(int *a1, int a2, int a3);
// [0x19b9960] (304 bytes) EVP_DigestVerifyFinal
// int EVP_DigestVerifyFinal(int a1, int a2, int a3);
// [0x19b9b30] (22 bytes) EVP_whirlpool
// void *EVP_whirlpool();
// [0x19b9c10] (114 bytes) EVP_add_cipher
// int EVP_add_cipher(uint32_t *a1);
// [0x19b9c90] (222 bytes) EVP_add_digest
// int EVP_add_digest(uint32_t *a1);
// [0x19b9d70] (42 bytes) EVP_get_cipherbyname
// int EVP_get_cipherbyname(int a1);
// [0x19b9da0] (42 bytes) EVP_get_digestbyname
// int EVP_get_digestbyname(int a1);
// [0x19b9dd0] (102 bytes) EVP_cleanup
// int EVP_cleanup();
// [0x19b9e40] (68 bytes) EVP_CIPHER_do_all
// int EVP_CIPHER_do_all(int a1, int a2);
// [0x19b9e90] (68 bytes) EVP_CIPHER_do_all_sorted
// int EVP_CIPHER_do_all_sorted(int a1, int a2);
// [0x19b9ee0] (68 bytes) EVP_MD_do_all
// int EVP_MD_do_all(int a1, int a2);
// [0x19b9f30] (68 bytes) EVP_MD_do_all_sorted
// int EVP_MD_do_all_sorted(int a1, int a2);
// [0x19ba160] (38 bytes) EVP_PKEY_bits
// int EVP_PKEY_bits(int a1);
// [0x19ba190] (38 bytes) EVP_PKEY_size
// int EVP_PKEY_size(int a1);
// [0x19ba1c0] (44 bytes) EVP_PKEY_save_parameters
// int EVP_PKEY_save_parameters(uint32_t *a1, int a2);
// [0x19ba1f0] (34 bytes) EVP_PKEY_missing_parameters
// int EVP_PKEY_missing_parameters(int a1);
// [0x19ba220] (202 bytes) EVP_PKEY_copy_parameters
// int EVP_PKEY_copy_parameters(uint32_t *a1, uint32_t *a2);
// [0x19ba2f0] (63 bytes) EVP_PKEY_cmp_parameters
// int EVP_PKEY_cmp_parameters(uint32_t *a1, uint32_t *a2);
// [0x19ba330] (87 bytes) EVP_PKEY_cmp
// int EVP_PKEY_cmp(uint32_t *a1, uint32_t *a2);
// [0x19ba390] (175 bytes) EVP_PKEY_new
// uint32_t *EVP_PKEY_new();
// [0x19ba440] (29 bytes) EVP_PKEY_set_type
// int EVP_PKEY_set_type(char *a1, size_t a2);
// [0x19ba460] (27 bytes) EVP_PKEY_set_type_str
// int EVP_PKEY_set_type_str(char *a1, char *a2, size_t a3);
// [0x19ba480] (86 bytes) EVP_PKEY_assign
// bool EVP_PKEY_assign(char *a1, size_t a2, int a3);
// [0x19ba4e0] (12 bytes) EVP_PKEY_get0
// int EVP_PKEY_get0(int a1);
// [0x19ba4f0] (88 bytes) EVP_PKEY_set1_RSA
// bool EVP_PKEY_set1_RSA(char *a1, int a2);
// [0x19ba550] (125 bytes) EVP_PKEY_get1_RSA
// int EVP_PKEY_get1_RSA(uint32_t *a1);
// [0x19ba5d0] (88 bytes) EVP_PKEY_set1_DSA
// bool EVP_PKEY_set1_DSA(char *a1, int a2);
// [0x19ba630] (125 bytes) EVP_PKEY_get1_DSA
// int EVP_PKEY_get1_DSA(uint32_t *a1);
// [0x19ba6b0] (88 bytes) EVP_PKEY_set1_EC_KEY
// bool EVP_PKEY_set1_EC_KEY(char *a1, int a2);
// [0x19ba710] (125 bytes) EVP_PKEY_get1_EC_KEY
// int EVP_PKEY_get1_EC_KEY(uint32_t *a1);
// [0x19ba790] (88 bytes) EVP_PKEY_set1_DH
// bool EVP_PKEY_set1_DH(char *a1, int a2);
// [0x19ba7f0] (125 bytes) EVP_PKEY_get1_DH
// int EVP_PKEY_get1_DH(uint32_t *a1);
// [0x19ba870] (82 bytes) EVP_PKEY_type
// int EVP_PKEY_type(int a1);
// [0x19ba8d0] (11 bytes) EVP_PKEY_id
// int EVP_PKEY_id(int a1);
// [0x19ba8e0] (36 bytes) EVP_PKEY_base_id
// int EVP_PKEY_base_id(int *a1);
// [0x19ba910] (190 bytes) EVP_PKEY_free
// void EVP_PKEY_free(void *a1);
// [0x19ba9d0] (131 bytes) EVP_PKEY_print_public
// int EVP_PKEY_print_public(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x19baa60] (131 bytes) EVP_PKEY_print_private
// int EVP_PKEY_print_private(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x19baaf0] (131 bytes) EVP_PKEY_print_params
// int EVP_PKEY_print_params(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x19bab80] (63 bytes) EVP_PKEY_get_default_digest_nid
// int EVP_PKEY_get_default_digest_nid(int a1, int a2);
// [0x19babc0] (520 bytes) EVP_SignFinal
// int EVP_SignFinal(int *a1, int a2, int *a3, uint32_t *a4);
// [0x19badd0] (508 bytes) EVP_VerifyFinal
// int EVP_VerifyFinal(int *a1, int a2, int a3, uint32_t *a4);
// [0x19bafd0] (165 bytes) EVP_PKEY_sign_init
// int EVP_PKEY_sign_init(int *a1);
// [0x19bb080] (352 bytes) EVP_PKEY_sign
// int EVP_PKEY_sign(int *a1, int a2, unsigned int *a3, int a4, int a5);
// [0x19bb1e0] (165 bytes) EVP_PKEY_verify_init
// int EVP_PKEY_verify_init(int *a1);
// [0x19bb290] (197 bytes) EVP_PKEY_verify
// int EVP_PKEY_verify(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x19bb360] (165 bytes) EVP_PKEY_verify_recover_init
// int EVP_PKEY_verify_recover_init(int *a1);
// [0x19bb410] (352 bytes) EVP_PKEY_verify_recover
// int EVP_PKEY_verify_recover(int *a1, int a2, unsigned int *a3, int a4, int a5);
// [0x19bb570] (165 bytes) EVP_PKEY_encrypt_init
// int EVP_PKEY_encrypt_init(int *a1);
// [0x19bb620] (352 bytes) EVP_PKEY_encrypt
// int EVP_PKEY_encrypt(int *a1, int a2, unsigned int *a3, int a4, int a5);
// [0x19bb780] (165 bytes) EVP_PKEY_decrypt_init
// int EVP_PKEY_decrypt_init(int *a1);
// [0x19bb830] (352 bytes) EVP_PKEY_decrypt
// int EVP_PKEY_decrypt(int *a1, int a2, unsigned int *a3, int a4, int a5);
// [0x19bb990] (165 bytes) EVP_PKEY_derive_init
// int EVP_PKEY_derive_init(int *a1);
// [0x19bba40] (640 bytes) EVP_PKEY_derive_set_peer
// int EVP_PKEY_derive_set_peer(int a1, uint32_t *a2);
// [0x19bbcc0] (336 bytes) EVP_PKEY_derive
// int EVP_PKEY_derive(int *a1, int a2, unsigned int *a3);
// [0x19bbe40] (165 bytes) EVP_PKEY_paramgen_init
// int EVP_PKEY_paramgen_init(int *a1);
// [0x19bbef0] (290 bytes) EVP_PKEY_paramgen
// int EVP_PKEY_paramgen(uint32_t *a1, void **a2);
// [0x19bc020] (165 bytes) EVP_PKEY_keygen_init
// int EVP_PKEY_keygen_init(int *a1);
// [0x19bc0d0] (290 bytes) EVP_PKEY_keygen
// int EVP_PKEY_keygen(uint32_t *a1, void **a2);
// [0x19bc200] (14 bytes) EVP_PKEY_CTX_set_cb
// int EVP_PKEY_CTX_set_cb(int a1, int a2);
// [0x19bc210] (12 bytes) EVP_PKEY_CTX_get_cb
// int EVP_PKEY_CTX_get_cb(int a1);
// [0x19bc250] (36 bytes) EVP_PKEY_CTX_get_keygen_info
// int EVP_PKEY_CTX_get_keygen_info(int a1, int a2);
// [0x19bc280] (152 bytes) EVP_PKEY_new_mac_key
// void *EVP_PKEY_new_mac_key(int a1, int a2, int a3, int a4);
// [0x19bc360] (164 bytes) EVP_PKEY_meth_find
// int EVP_PKEY_meth_find(int a1);
// [0x19bc410] (251 bytes) EVP_PKEY_meth_new
// uint32_t *EVP_PKEY_meth_new(int a1, int a2);
// [0x19bc510] (44 bytes) EVP_PKEY_meth_free
// void *EVP_PKEY_meth_free(void *a1);
// [0x19bc540] (114 bytes) EVP_PKEY_meth_add0
// int EVP_PKEY_meth_add0(int a1);
// [0x19bc5c0] (103 bytes) EVP_PKEY_CTX_free
// void EVP_PKEY_CTX_free(void **a1);
// [0x19bc630] (372 bytes) EVP_PKEY_CTX_dup
// void **EVP_PKEY_CTX_dup(void **a1);
// [0x19bc9f0] (11 bytes) EVP_PKEY_CTX_new_id
// void **EVP_PKEY_CTX_new_id(int a1, uint32_t *a2);
// [0x19bca00] (21 bytes) EVP_PKEY_CTX_new
// void **EVP_PKEY_CTX_new(uint32_t *a1, uint32_t *a2);
// [0x19bca20] (392 bytes) EVP_PKEY_CTX_ctrl
// int EVP_PKEY_CTX_ctrl(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x19bcbb0] (320 bytes) EVP_PKEY_CTX_ctrl_str
// int EVP_PKEY_CTX_ctrl_str(int a1, const char *a2, int a3);
// [0x19bccf0] (12 bytes) EVP_PKEY_CTX_get_operation
// int EVP_PKEY_CTX_get_operation(int a1);
// [0x19bcd00] (19 bytes) EVP_PKEY_CTX_set0_keygen_info
// int EVP_PKEY_CTX_set0_keygen_info(int a1, int a2, int a3);
// [0x19bcd20] (14 bytes) EVP_PKEY_CTX_set_data
// int EVP_PKEY_CTX_set_data(int a1, int a2);
// [0x19bcd30] (12 bytes) EVP_PKEY_CTX_get_data
// int EVP_PKEY_CTX_get_data(int a1);
// [0x19bcd40] (12 bytes) EVP_PKEY_CTX_get0_pkey
// int EVP_PKEY_CTX_get0_pkey(int a1);
// [0x19bcd50] (12 bytes) EVP_PKEY_CTX_get0_peerkey
// int EVP_PKEY_CTX_get0_peerkey(int a1);
// [0x19bcd60] (14 bytes) EVP_PKEY_CTX_set_app_data
// int EVP_PKEY_CTX_set_app_data(int a1, int a2);
// [0x19bcd70] (12 bytes) EVP_PKEY_CTX_get_app_data
// int EVP_PKEY_CTX_get_app_data(int a1);
// [0x19bcd80] (14 bytes) EVP_PKEY_meth_set_init
// int EVP_PKEY_meth_set_init(int a1, int a2);
// [0x19bcd90] (14 bytes) EVP_PKEY_meth_set_copy
// int EVP_PKEY_meth_set_copy(int a1, int a2);
// [0x19bcda0] (14 bytes) EVP_PKEY_meth_set_cleanup
// int EVP_PKEY_meth_set_cleanup(int a1, int a2);
// [0x19bcdb0] (19 bytes) EVP_PKEY_meth_set_paramgen
// int EVP_PKEY_meth_set_paramgen(int a1, int a2, int a3);
// [0x19bcdd0] (19 bytes) EVP_PKEY_meth_set_keygen
// int EVP_PKEY_meth_set_keygen(int a1, int a2, int a3);
// [0x19bcdf0] (19 bytes) EVP_PKEY_meth_set_sign
// int EVP_PKEY_meth_set_sign(int a1, int a2, int a3);
// [0x19bce10] (19 bytes) EVP_PKEY_meth_set_verify
// int EVP_PKEY_meth_set_verify(int a1, int a2, int a3);
// [0x19bce30] (19 bytes) EVP_PKEY_meth_set_verify_recover
// int EVP_PKEY_meth_set_verify_recover(int a1, int a2, int a3);
// [0x19bce50] (19 bytes) EVP_PKEY_meth_set_signctx
// int EVP_PKEY_meth_set_signctx(int a1, int a2, int a3);
// [0x19bce70] (19 bytes) EVP_PKEY_meth_set_verifyctx
// int EVP_PKEY_meth_set_verifyctx(int a1, int a2, int a3);
// [0x19bce90] (19 bytes) EVP_PKEY_meth_set_encrypt
// int EVP_PKEY_meth_set_encrypt(int a1, int a2, int a3);
// [0x19bceb0] (19 bytes) EVP_PKEY_meth_set_decrypt
// int EVP_PKEY_meth_set_decrypt(int a1, int a2, int a3);
// [0x19bced0] (19 bytes) EVP_PKEY_meth_set_derive
// int EVP_PKEY_meth_set_derive(int a1, int a2, int a3);
// [0x19bcef0] (19 bytes) EVP_PKEY_meth_set_ctrl
// int EVP_PKEY_meth_set_ctrl(int a1, int a2, int a3);
// [0x19bd5d0] (710 bytes) HMAC_Init_ex
// bool HMAC_Init_ex(uint32_t *a1, void *src, signed int n, uint32_t *a4, uint32_t *a5);
// [0x19bd8a0] (53 bytes) HMAC_Update
// int HMAC_Update(int a1, int a2, int a3);
// [0x19bd8e0] (217 bytes) HMAC_Final
// bool HMAC_Final(int a1, int a2, uint32_t *a3);
// [0x19bd9c0] (73 bytes) HMAC_CTX_init
// int HMAC_CTX_init(uint8_t *a1);
// [0x19bda10] (118 bytes) HMAC_Init
// bool HMAC_Init(uint8_t *a1, void *a2, size_t a3, uint32_t *a4);
// [0x19bda90] (282 bytes) HMAC_CTX_copy
// int HMAC_CTX_copy(int a1, int a2);
// [0x19bdbb0] (141 bytes) HMAC_CTX_cleanup
// int HMAC_CTX_cleanup(uint8_t *a1);
// [0x19bdd30] (97 bytes) HMAC_CTX_set_flags
// int HMAC_CTX_set_flags(int a1, int a2);
// [0x19c0c20] (113 bytes) OBJ_NAME_init
// bool OBJ_NAME_init();
// [0x19c0ca0] (429 bytes) OBJ_NAME_new_index
// int OBJ_NAME_new_index(int a1, int a2, int a3);
// [0x19c0e50] (169 bytes) OBJ_NAME_get
// int OBJ_NAME_get(int a1, int a2);
// [0x19c0f00] (271 bytes) OBJ_NAME_add
// bool OBJ_NAME_add(int a1, int a2, int a3);
// [0x19c1010] (178 bytes) OBJ_NAME_remove
// int OBJ_NAME_remove(int a1, int a2);
// [0x19c1120] (78 bytes) OBJ_NAME_do_all
// void OBJ_NAME_do_all(int a1, int a2, int a3);
// [0x19c1170] (214 bytes) OBJ_NAME_do_all_sorted
// int OBJ_NAME_do_all_sorted(int a1, void (*a2)(int, int), int a3);
// [0x19c1250] (166 bytes) OBJ_NAME_cleanup
// uint32_t *OBJ_NAME_cleanup(int a1);
// [0x19c1680] (156 bytes) OBJ_cleanup
// void OBJ_cleanup();
// [0x19c1720] (30 bytes) OBJ_new_nid
// int OBJ_new_nid(int a1);
// [0x19c1740] (509 bytes) OBJ_add_object
// int OBJ_add_object(int a1);
// [0x19c1940] (256 bytes) OBJ_nid2obj
// char **OBJ_nid2obj(unsigned int a1);
// [0x19c1a40] (256 bytes) OBJ_nid2sn
// char *OBJ_nid2sn(unsigned int a1);
// [0x19c1b40] (264 bytes) OBJ_nid2ln
// char *OBJ_nid2ln(unsigned int a1);
// [0x19c1c50] (217 bytes) OBJ_bsearch_ex_
// int OBJ_bsearch_ex_(int a1, int a2, int a3, int a4, int (*a5)(int, int), char a6);
// [0x19c1d30] (74 bytes) OBJ_bsearch_
// int OBJ_bsearch_(int a1, int a2, int a3, int a4, int (*a5)(int, int));
// [0x19c1d80] (162 bytes) OBJ_sn2nid
// int OBJ_sn2nid(int a1);
// [0x19c1e30] (162 bytes) OBJ_ln2nid
// int OBJ_ln2nid(int a1);
// [0x19c1ee0] (350 bytes) OBJ_txt2obj
// char **OBJ_txt2obj(char *a1, int a2);
// [0x19c2040] (183 bytes) OBJ_obj2nid
// int OBJ_obj2nid(int a1);
// [0x19c2100] (86 bytes) OBJ_txt2nid
// int OBJ_txt2nid(char *a1);
// [0x19c2160] (1001 bytes) OBJ_obj2txt
// size_t OBJ_obj2txt(char *a1, signed int a2, int a3, int a4);
// [0x19c2550] (309 bytes) OBJ_create
// int OBJ_create(char *a1, int a2, int a3);
// [0x19c2690] (422 bytes) OBJ_create_objects
// int OBJ_create_objects(uint32_t *a1);
// [0x19c2840] (90 bytes) ERR_load_OBJ_strings
// int ERR_load_OBJ_strings();
// [0x19c28a0] (596 bytes) OBJ_dup
// size_t *OBJ_dup(int a1);
// [0x19c2b00] (76 bytes) OBJ_cmp
// int OBJ_cmp(int a1, int a2);
// [0x19c2be0] (182 bytes) OBJ_find_sigid_algs
// int OBJ_find_sigid_algs(int a1, uint32_t *a2, uint32_t *a3);
// [0x19c2ca0] (172 bytes) OBJ_find_sigid_by_algs
// int OBJ_find_sigid_by_algs(uint32_t *a1, int a2, int a3);
// [0x19c2d50] (306 bytes) OBJ_add_sigid
// int OBJ_add_sigid(int a1, int a2, int a3);
// [0x19c2e90] (98 bytes) OBJ_sigid_free
// int OBJ_sigid_free();
// [0x19c2f00] (60 bytes) d2i_OCSP_SIGNATURE
// int d2i_OCSP_SIGNATURE(int *a1, char **a2, int a3);
// [0x19c2f40] (52 bytes) i2d_OCSP_SIGNATURE
// int i2d_OCSP_SIGNATURE(int a1, void **a2);
// [0x19c2f80] (36 bytes) OCSP_SIGNATURE_new
// int OCSP_SIGNATURE_new();
// [0x19c2fb0] (44 bytes) OCSP_SIGNATURE_free
// int OCSP_SIGNATURE_free(char a1);
// [0x19c2fe0] (60 bytes) d2i_OCSP_CERTID
// int d2i_OCSP_CERTID(int *a1, char **a2, int a3);
// [0x19c3020] (52 bytes) i2d_OCSP_CERTID
// int i2d_OCSP_CERTID(int a1, void **a2);
// [0x19c3060] (36 bytes) OCSP_CERTID_new
// int OCSP_CERTID_new();
// [0x19c3090] (44 bytes) OCSP_CERTID_free
// int OCSP_CERTID_free(char a1);
// [0x19c30c0] (60 bytes) d2i_OCSP_ONEREQ
// int d2i_OCSP_ONEREQ(int *a1, char **a2, int a3);
// [0x19c3100] (52 bytes) i2d_OCSP_ONEREQ
// int i2d_OCSP_ONEREQ(int a1, void **a2);
// [0x19c3140] (36 bytes) OCSP_ONEREQ_new
// int OCSP_ONEREQ_new();
// [0x19c3170] (44 bytes) OCSP_ONEREQ_free
// int OCSP_ONEREQ_free(char a1);
// [0x19c31a0] (60 bytes) d2i_OCSP_REQINFO
// int d2i_OCSP_REQINFO(int *a1, char **a2, int a3);
// [0x19c31e0] (52 bytes) i2d_OCSP_REQINFO
// int i2d_OCSP_REQINFO(int a1, void **a2);
// [0x19c3220] (36 bytes) OCSP_REQINFO_new
// int OCSP_REQINFO_new();
// [0x19c3250] (44 bytes) OCSP_REQINFO_free
// int OCSP_REQINFO_free(char a1);
// [0x19c3280] (60 bytes) d2i_OCSP_REQUEST
// int d2i_OCSP_REQUEST(int *a1, char **a2, int a3);
// [0x19c32c0] (52 bytes) i2d_OCSP_REQUEST
// int i2d_OCSP_REQUEST(int a1, void **a2);
// [0x19c3300] (36 bytes) OCSP_REQUEST_new
// int OCSP_REQUEST_new();
// [0x19c3330] (44 bytes) OCSP_REQUEST_free
// int OCSP_REQUEST_free(char a1);
// [0x19c3360] (60 bytes) d2i_OCSP_RESPBYTES
// int d2i_OCSP_RESPBYTES(int *a1, char **a2, int a3);
// [0x19c33a0] (52 bytes) i2d_OCSP_RESPBYTES
// int i2d_OCSP_RESPBYTES(int a1, void **a2);
// [0x19c33e0] (36 bytes) OCSP_RESPBYTES_new
// int OCSP_RESPBYTES_new();
// [0x19c3410] (44 bytes) OCSP_RESPBYTES_free
// int OCSP_RESPBYTES_free(char a1);
// [0x19c3440] (60 bytes) d2i_OCSP_RESPONSE
// int d2i_OCSP_RESPONSE(int *a1, char **a2, int a3);
// [0x19c3480] (52 bytes) i2d_OCSP_RESPONSE
// int i2d_OCSP_RESPONSE(int a1, void **a2);
// [0x19c34c0] (36 bytes) OCSP_RESPONSE_new
// int OCSP_RESPONSE_new();
// [0x19c34f0] (44 bytes) OCSP_RESPONSE_free
// int OCSP_RESPONSE_free(char a1);
// [0x19c3520] (60 bytes) d2i_OCSP_RESPID
// int d2i_OCSP_RESPID(int *a1, char **a2, int a3);
// [0x19c3560] (52 bytes) i2d_OCSP_RESPID
// int i2d_OCSP_RESPID(int a1, void **a2);
// [0x19c35a0] (36 bytes) OCSP_RESPID_new
// int OCSP_RESPID_new();
// [0x19c35d0] (44 bytes) OCSP_RESPID_free
// int OCSP_RESPID_free(char a1);
// [0x19c3600] (60 bytes) d2i_OCSP_REVOKEDINFO
// int d2i_OCSP_REVOKEDINFO(int *a1, char **a2, int a3);
// [0x19c3640] (52 bytes) i2d_OCSP_REVOKEDINFO
// int i2d_OCSP_REVOKEDINFO(int a1, void **a2);
// [0x19c3680] (36 bytes) OCSP_REVOKEDINFO_new
// int OCSP_REVOKEDINFO_new();
// [0x19c36b0] (44 bytes) OCSP_REVOKEDINFO_free
// int OCSP_REVOKEDINFO_free(char a1);
// [0x19c36e0] (60 bytes) d2i_OCSP_CERTSTATUS
// int d2i_OCSP_CERTSTATUS(int *a1, char **a2, int a3);
// [0x19c3720] (52 bytes) i2d_OCSP_CERTSTATUS
// int i2d_OCSP_CERTSTATUS(int a1, void **a2);
// [0x19c3760] (36 bytes) OCSP_CERTSTATUS_new
// int OCSP_CERTSTATUS_new();
// [0x19c3790] (44 bytes) OCSP_CERTSTATUS_free
// int OCSP_CERTSTATUS_free(char a1);
// [0x19c37c0] (60 bytes) d2i_OCSP_SINGLERESP
// int d2i_OCSP_SINGLERESP(int *a1, char **a2, int a3);
// [0x19c3800] (52 bytes) i2d_OCSP_SINGLERESP
// int i2d_OCSP_SINGLERESP(int a1, void **a2);
// [0x19c3840] (36 bytes) OCSP_SINGLERESP_new
// int OCSP_SINGLERESP_new();
// [0x19c3870] (44 bytes) OCSP_SINGLERESP_free
// int OCSP_SINGLERESP_free(char a1);
// [0x19c38a0] (60 bytes) d2i_OCSP_RESPDATA
// int d2i_OCSP_RESPDATA(int *a1, char **a2, int a3);
// [0x19c38e0] (52 bytes) i2d_OCSP_RESPDATA
// int i2d_OCSP_RESPDATA(int a1, void **a2);
// [0x19c3920] (36 bytes) OCSP_RESPDATA_new
// int OCSP_RESPDATA_new();
// [0x19c3950] (44 bytes) OCSP_RESPDATA_free
// int OCSP_RESPDATA_free(char a1);
// [0x19c3980] (60 bytes) d2i_OCSP_BASICRESP
// int d2i_OCSP_BASICRESP(int *a1, char **a2, int a3);
// [0x19c39c0] (52 bytes) i2d_OCSP_BASICRESP
// int i2d_OCSP_BASICRESP(int a1, void **a2);
// [0x19c3a00] (36 bytes) OCSP_BASICRESP_new
// int OCSP_BASICRESP_new();
// [0x19c3a30] (44 bytes) OCSP_BASICRESP_free
// int OCSP_BASICRESP_free(char a1);
// [0x19c3a60] (60 bytes) d2i_OCSP_CRLID
// int d2i_OCSP_CRLID(int *a1, char **a2, int a3);
// [0x19c3aa0] (52 bytes) i2d_OCSP_CRLID
// int i2d_OCSP_CRLID(int a1, void **a2);
// [0x19c3ae0] (36 bytes) OCSP_CRLID_new
// int OCSP_CRLID_new();
// [0x19c3b10] (44 bytes) OCSP_CRLID_free
// int OCSP_CRLID_free(char a1);
// [0x19c3b40] (60 bytes) d2i_OCSP_SERVICELOC
// int d2i_OCSP_SERVICELOC(int *a1, char **a2, int a3);
// [0x19c3b80] (52 bytes) i2d_OCSP_SERVICELOC
// int i2d_OCSP_SERVICELOC(int a1, void **a2);
// [0x19c3bc0] (36 bytes) OCSP_SERVICELOC_new
// int OCSP_SERVICELOC_new();
// [0x19c3bf0] (44 bytes) OCSP_SERVICELOC_free
// int OCSP_SERVICELOC_free(char a1);
// [0x19c3c20] (90 bytes) ERR_load_OCSP_strings
// int ERR_load_OCSP_strings();
// [0x19c3c80] (78 bytes) PEM_read_bio_X509_REQ
// int PEM_read_bio_X509_REQ(int a1, int a2, int a3, char *a4);
// [0x19c3cd0] (78 bytes) PEM_read_X509_REQ
// int PEM_read_X509_REQ(int a1, int a2, int a3, char *a4);
// [0x19c3d20] (102 bytes) PEM_write_bio_X509_REQ
// int PEM_write_bio_X509_REQ(int a1, int a2);
// [0x19c3d90] (102 bytes) PEM_write_X509_REQ
// int PEM_write_X509_REQ(int a1, int a2);
// [0x19c3e00] (102 bytes) PEM_write_bio_X509_REQ_NEW
// int PEM_write_bio_X509_REQ_NEW(int a1, int a2);
// [0x19c3e70] (102 bytes) PEM_write_X509_REQ_NEW
// int PEM_write_X509_REQ_NEW(int a1, int a2);
// [0x19c3ee0] (78 bytes) PEM_read_bio_X509_CRL
// int PEM_read_bio_X509_CRL(int a1, int a2, int a3, char *a4);
// [0x19c3f30] (78 bytes) PEM_read_X509_CRL
// int PEM_read_X509_CRL(int a1, int a2, int a3, char *a4);
// [0x19c3f80] (102 bytes) PEM_write_bio_X509_CRL
// int PEM_write_bio_X509_CRL(int a1, int a2);
// [0x19c3ff0] (102 bytes) PEM_write_X509_CRL
// int PEM_write_X509_CRL(int a1, int a2);
// [0x19c4060] (78 bytes) PEM_read_bio_PKCS7
// int PEM_read_bio_PKCS7(int a1, int a2, int a3, char *a4);
// [0x19c40b0] (78 bytes) PEM_read_PKCS7
// int PEM_read_PKCS7(int a1, int a2, int a3, char *a4);
// [0x19c4100] (102 bytes) PEM_write_bio_PKCS7
// int PEM_write_bio_PKCS7(int a1, int a2);
// [0x19c4170] (102 bytes) PEM_write_PKCS7
// int PEM_write_PKCS7(int a1, int a2);
// [0x19c41e0] (78 bytes) PEM_read_bio_NETSCAPE_CERT_SEQUENCE
// int PEM_read_bio_NETSCAPE_CERT_SEQUENCE(int a1, int a2, int a3, char *a4);
// [0x19c4230] (78 bytes) PEM_read_NETSCAPE_CERT_SEQUENCE
// int PEM_read_NETSCAPE_CERT_SEQUENCE(int a1, int a2, int a3, char *a4);
// [0x19c4280] (102 bytes) PEM_write_bio_NETSCAPE_CERT_SEQUENCE
// int PEM_write_bio_NETSCAPE_CERT_SEQUENCE(int a1, int a2);
// [0x19c42f0] (102 bytes) PEM_write_NETSCAPE_CERT_SEQUENCE
// int PEM_write_NETSCAPE_CERT_SEQUENCE(int a1, int a2);
// [0x19c4360] (140 bytes) PEM_read_bio_RSAPrivateKey
// int PEM_read_bio_RSAPrivateKey(int a1, void **a2, int a3, char *a4);
// [0x19c43f0] (140 bytes) PEM_read_RSAPrivateKey
// int PEM_read_RSAPrivateKey(int a1, void **a2, int a3, char *a4);
// [0x19c4480] (102 bytes) PEM_write_bio_RSAPrivateKey
// int PEM_write_bio_RSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7);
// [0x19c44f0] (102 bytes) PEM_write_RSAPrivateKey
// int PEM_write_RSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7);
// [0x19c4560] (78 bytes) PEM_read_bio_RSAPublicKey
// int PEM_read_bio_RSAPublicKey(int a1, int a2, int a3, char *a4);
// [0x19c45b0] (78 bytes) PEM_read_RSAPublicKey
// int PEM_read_RSAPublicKey(int a1, int a2, int a3, char *a4);
// [0x19c4600] (102 bytes) PEM_write_bio_RSAPublicKey
// int PEM_write_bio_RSAPublicKey(int a1, int a2);
// [0x19c4670] (102 bytes) PEM_write_RSAPublicKey
// int PEM_write_RSAPublicKey(int a1, int a2);
// [0x19c46e0] (78 bytes) PEM_read_bio_RSA_PUBKEY
// int PEM_read_bio_RSA_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c4730] (78 bytes) PEM_read_RSA_PUBKEY
// int PEM_read_RSA_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c4780] (102 bytes) PEM_write_bio_RSA_PUBKEY
// int PEM_write_bio_RSA_PUBKEY(int a1, int a2);
// [0x19c47f0] (102 bytes) PEM_write_RSA_PUBKEY
// int PEM_write_RSA_PUBKEY(int a1, int a2);
// [0x19c4860] (140 bytes) PEM_read_bio_DSAPrivateKey
// int PEM_read_bio_DSAPrivateKey(int a1, void **a2, int a3, char *a4);
// [0x19c48f0] (102 bytes) PEM_write_bio_DSAPrivateKey
// int PEM_write_bio_DSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7);
// [0x19c4960] (102 bytes) PEM_write_DSAPrivateKey
// int PEM_write_DSAPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7);
// [0x19c49d0] (78 bytes) PEM_read_bio_DSA_PUBKEY
// int PEM_read_bio_DSA_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c4a20] (78 bytes) PEM_read_DSA_PUBKEY
// int PEM_read_DSA_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c4a70] (102 bytes) PEM_write_bio_DSA_PUBKEY
// int PEM_write_bio_DSA_PUBKEY(int a1, int a2);
// [0x19c4ae0] (102 bytes) PEM_write_DSA_PUBKEY
// int PEM_write_DSA_PUBKEY(int a1, int a2);
// [0x19c4b50] (140 bytes) PEM_read_DSAPrivateKey
// int PEM_read_DSAPrivateKey(int a1, void **a2, int a3, char *a4);
// [0x19c4be0] (78 bytes) PEM_read_bio_DSAparams
// int PEM_read_bio_DSAparams(int a1, int a2, int a3, char *a4);
// [0x19c4c30] (78 bytes) PEM_read_DSAparams
// int PEM_read_DSAparams(int a1, int a2, int a3, char *a4);
// [0x19c4c80] (102 bytes) PEM_write_bio_DSAparams
// int PEM_write_bio_DSAparams(int a1, int a2);
// [0x19c4cf0] (102 bytes) PEM_write_DSAparams
// int PEM_write_DSAparams(int a1, int a2);
// [0x19c4d60] (140 bytes) PEM_read_bio_ECPrivateKey
// int PEM_read_bio_ECPrivateKey(int a1, char **a2, int a3, char *a4);
// [0x19c4df0] (78 bytes) PEM_read_bio_ECPKParameters
// int PEM_read_bio_ECPKParameters(int a1, int a2, int a3, char *a4);
// [0x19c4e40] (78 bytes) PEM_read_ECPKParameters
// int PEM_read_ECPKParameters(int a1, int a2, int a3, char *a4);
// [0x19c4e90] (102 bytes) PEM_write_bio_ECPKParameters
// int PEM_write_bio_ECPKParameters(int a1, int a2);
// [0x19c4f00] (102 bytes) PEM_write_ECPKParameters
// int PEM_write_ECPKParameters(int a1, int a2);
// [0x19c4f70] (102 bytes) PEM_write_bio_ECPrivateKey
// int PEM_write_bio_ECPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7);
// [0x19c4fe0] (102 bytes) PEM_write_ECPrivateKey
// int PEM_write_ECPrivateKey(int a1, int a2, int a3, int a4, int a5, int a6, char *a7);
// [0x19c5050] (78 bytes) PEM_read_bio_EC_PUBKEY
// int PEM_read_bio_EC_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c50a0] (78 bytes) PEM_read_EC_PUBKEY
// int PEM_read_EC_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c50f0] (102 bytes) PEM_write_bio_EC_PUBKEY
// int PEM_write_bio_EC_PUBKEY(int a1, int a2);
// [0x19c5160] (102 bytes) PEM_write_EC_PUBKEY
// int PEM_write_EC_PUBKEY(int a1, int a2);
// [0x19c51d0] (140 bytes) PEM_read_ECPrivateKey
// int PEM_read_ECPrivateKey(int a1, char **a2, int a3, char *a4);
// [0x19c5260] (78 bytes) PEM_read_bio_DHparams
// int PEM_read_bio_DHparams(int a1, int a2, int a3, char *a4);
// [0x19c52b0] (78 bytes) PEM_read_DHparams
// int PEM_read_DHparams(int a1, int a2, int a3, char *a4);
// [0x19c5300] (102 bytes) PEM_write_bio_DHparams
// int PEM_write_bio_DHparams(int a1, int a2);
// [0x19c5370] (102 bytes) PEM_write_DHparams
// int PEM_write_DHparams(int a1, int a2);
// [0x19c53e0] (78 bytes) PEM_read_bio_PUBKEY
// int PEM_read_bio_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c5430] (78 bytes) PEM_read_PUBKEY
// int PEM_read_PUBKEY(int a1, int a2, int a3, char *a4);
// [0x19c5480] (102 bytes) PEM_write_bio_PUBKEY
// int PEM_write_bio_PUBKEY(int a1, int a2);
// [0x19c54f0] (102 bytes) PEM_write_PUBKEY
// int PEM_write_PUBKEY(int a1, int a2);
// [0x19c5560] (90 bytes) ERR_load_PEM_strings
// int ERR_load_PEM_strings();
// [0x19c55c0] (309 bytes) PEM_def_callback
// int PEM_def_callback(void *dest, signed int a2, int a3, char *s);
// [0x19c5700] (164 bytes) PEM_proc_type
// int PEM_proc_type(char *a1, int a2);
// [0x19c57b0] (240 bytes) PEM_dek_info
// size_t PEM_dek_info(char *s, char *a2, int a3, int a4);
// [0x19c58a0] (210 bytes) PEM_ASN1_read
// int PEM_ASN1_read(int a1, char *a2, int a3, int a4, int a5, char *a6);
// [0x19c5980] (548 bytes) PEM_do_header
// int PEM_do_header( uint32_t *a1, char *a2, size_t *a3, int (*a4)(uint8_t *, int, uint32_t, char *), char *a5);
// [0x19c5bb0] (815 bytes) PEM_get_EVP_CIPHER_INFO
// int PEM_get_EVP_CIPHER_INFO(uint8_t *a1, int *a2);
// [0x19c5ee0] (986 bytes) PEM_write_bio
// int PEM_write_bio(uint32_t *a1, char *s, char *a3, int a4, signed int a5);
// [0x19c62c0] (202 bytes) PEM_write
// int PEM_write(int a1, char *a2, char *a3, int a4, size_t a5);
// [0x19c6390] (1445 bytes) PEM_ASN1_write_bio
// bool PEM_ASN1_write_bio( int (*a1)(int, char **), char *a2, uint32_t *a3, int a4, uint32_t *a5, uint8_t *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9);
// [0x19c6940] (234 bytes) PEM_ASN1_write
// bool PEM_ASN1_write( int (*a1)(int, char **), char *a2, int a3, int a4, uint32_t *a5, uint8_t *a6, int a7, int (*a8)(uint8_t *, int, int, char *), char *a9);
// [0x19c6a30] (1657 bytes) PEM_read_bio
// int PEM_read_bio(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, char **a5);
// [0x19c70b0] (202 bytes) PEM_read
// int PEM_read(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, char **a5);
// [0x19c7210] (1052 bytes) PEM_bytes_read_bio
// int PEM_bytes_read_bio( void **a1, int *a2, char **a3, char *s2, uint32_t *a5, int (*a6)(uint8_t *, int, uint32_t, char *), char *a7);
// [0x19c7630] (216 bytes) PEM_ASN1_read_bio
// int PEM_ASN1_read_bio( int (*a1)(int, void **, int), char *a2, uint32_t *a3, int a4, int (*a5)(uint8_t *, int, uint32_t, char *), char *a6);
// [0x19c7710] (826 bytes) PEM_read_bio_PrivateKey
// uint32_t *PEM_read_bio_PrivateKey( uint32_t *a1, void **a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x19c7a50] (298 bytes) PEM_write_bio_PrivateKey
// int PEM_write_bio_PrivateKey( uint32_t *a1, int a2, uint32_t *a3, uint8_t *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x19c7b80] (359 bytes) PEM_read_bio_Parameters
// uint32_t *PEM_read_bio_Parameters(uint32_t *a1, void **a2);
// [0x19c7cf0] (201 bytes) PEM_write_bio_Parameters
// bool PEM_write_bio_Parameters(uint32_t *a1, int a2);
// [0x19c7dc0] (194 bytes) PEM_read_PrivateKey
// uint32_t *PEM_read_PrivateKey( int a1, void **a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x19c7e90] (194 bytes) PEM_write_PrivateKey
// int PEM_write_PrivateKey( int a1, int a2, uint32_t *a3, uint8_t *a4, int a5, int (*a6)(uint8_t *, int, int, char *), char *a7);
// [0x19c7f60] (78 bytes) PEM_read_bio_X509
// int PEM_read_bio_X509(uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x19c7fb0] (78 bytes) PEM_read_X509
// int PEM_read_X509(int a1, int a2, int a3, char *a4);
// [0x19c8000] (102 bytes) PEM_write_bio_X509
// bool PEM_write_bio_X509(uint32_t *a1, int a2);
// [0x19c8070] (102 bytes) PEM_write_X509
// bool PEM_write_X509(int a1, int a2);
// [0x19c80e0] (78 bytes) PEM_read_bio_X509_AUX
// int PEM_read_bio_X509_AUX( uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x19c8130] (78 bytes) PEM_read_X509_AUX
// int PEM_read_X509_AUX(int a1, int a2, int a3, char *a4);
// [0x19c8180] (102 bytes) PEM_write_bio_X509_AUX
// bool PEM_write_bio_X509_AUX(uint32_t *a1, int a2);
// [0x19c81f0] (102 bytes) PEM_write_X509_AUX
// bool PEM_write_X509_AUX(int a1, int a2);
// [0x19c8260] (78 bytes) PEM_read_bio_X509_CERT_PAIR
// int PEM_read_bio_X509_CERT_PAIR( uint32_t *a1, int a2, int (*a3)(uint8_t *, int, uint32_t, char *), char *a4);
// [0x19c82b0] (78 bytes) PEM_read_X509_CERT_PAIR
// int PEM_read_X509_CERT_PAIR(int a1, int a2, int a3, char *a4);
// [0x19c8300] (102 bytes) PEM_write_bio_X509_CERT_PAIR
// bool PEM_write_bio_X509_CERT_PAIR(uint32_t *a1, int a2);
// [0x19c8370] (102 bytes) PEM_write_X509_CERT_PAIR
// bool PEM_write_X509_CERT_PAIR(int a1, int a2);
// [0x19c8530] (60 bytes) d2i_PKCS7
// int d2i_PKCS7(int *a1, char **a2, int a3);
// [0x19c8570] (52 bytes) i2d_PKCS7
// int i2d_PKCS7(int a1, void **a2);
// [0x19c85b0] (36 bytes) PKCS7_new
// int PKCS7_new();
