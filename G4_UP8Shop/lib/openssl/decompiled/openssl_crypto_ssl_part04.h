#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_crypto_ssl_part04.h
// Library: openssl | Module: openssl_crypto_ssl_part04
// Binary Address Span: 0x19c85e0 .. 0x19f7690 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x19c85e0] (44 bytes) PKCS7_free
// int PKCS7_free(char a1);
// [0x19c8610] (52 bytes) i2d_PKCS7_NDEF
// int i2d_PKCS7_NDEF(int a1, void **a2);
// [0x19c8650] (44 bytes) PKCS7_dup
// int PKCS7_dup(int a1);
// [0x19c8680] (60 bytes) d2i_PKCS7_SIGNED
// int d2i_PKCS7_SIGNED(int *a1, char **a2, int a3);
// [0x19c86c0] (52 bytes) i2d_PKCS7_SIGNED
// int i2d_PKCS7_SIGNED(int a1, void **a2);
// [0x19c8700] (36 bytes) PKCS7_SIGNED_new
// int PKCS7_SIGNED_new();
// [0x19c8730] (44 bytes) PKCS7_SIGNED_free
// int PKCS7_SIGNED_free(char a1);
// [0x19c8760] (60 bytes) d2i_PKCS7_SIGNER_INFO
// int d2i_PKCS7_SIGNER_INFO(int *a1, char **a2, int a3);
// [0x19c87a0] (52 bytes) i2d_PKCS7_SIGNER_INFO
// int i2d_PKCS7_SIGNER_INFO(int a1, void **a2);
// [0x19c87e0] (36 bytes) PKCS7_SIGNER_INFO_new
// int PKCS7_SIGNER_INFO_new();
// [0x19c8810] (44 bytes) PKCS7_SIGNER_INFO_free
// int PKCS7_SIGNER_INFO_free(char a1);
// [0x19c8840] (60 bytes) d2i_PKCS7_ISSUER_AND_SERIAL
// int d2i_PKCS7_ISSUER_AND_SERIAL(int *a1, char **a2, int a3);
// [0x19c8880] (52 bytes) i2d_PKCS7_ISSUER_AND_SERIAL
// int i2d_PKCS7_ISSUER_AND_SERIAL(int a1, void **a2);
// [0x19c88c0] (36 bytes) PKCS7_ISSUER_AND_SERIAL_new
// int PKCS7_ISSUER_AND_SERIAL_new();
// [0x19c88f0] (44 bytes) PKCS7_ISSUER_AND_SERIAL_free
// int PKCS7_ISSUER_AND_SERIAL_free(char a1);
// [0x19c8920] (60 bytes) d2i_PKCS7_ENVELOPE
// int d2i_PKCS7_ENVELOPE(int *a1, char **a2, int a3);
// [0x19c8960] (52 bytes) i2d_PKCS7_ENVELOPE
// int i2d_PKCS7_ENVELOPE(int a1, void **a2);
// [0x19c89a0] (36 bytes) PKCS7_ENVELOPE_new
// int PKCS7_ENVELOPE_new();
// [0x19c89d0] (44 bytes) PKCS7_ENVELOPE_free
// int PKCS7_ENVELOPE_free(char a1);
// [0x19c8a00] (60 bytes) d2i_PKCS7_RECIP_INFO
// int d2i_PKCS7_RECIP_INFO(int *a1, char **a2, int a3);
// [0x19c8a40] (52 bytes) i2d_PKCS7_RECIP_INFO
// int i2d_PKCS7_RECIP_INFO(int a1, void **a2);
// [0x19c8a80] (36 bytes) PKCS7_RECIP_INFO_new
// int PKCS7_RECIP_INFO_new();
// [0x19c8ab0] (44 bytes) PKCS7_RECIP_INFO_free
// int PKCS7_RECIP_INFO_free(char a1);
// [0x19c8ae0] (60 bytes) d2i_PKCS7_ENC_CONTENT
// int d2i_PKCS7_ENC_CONTENT(int *a1, char **a2, int a3);
// [0x19c8b20] (52 bytes) i2d_PKCS7_ENC_CONTENT
// int i2d_PKCS7_ENC_CONTENT(int a1, void **a2);
// [0x19c8b60] (36 bytes) PKCS7_ENC_CONTENT_new
// int PKCS7_ENC_CONTENT_new();
// [0x19c8b90] (44 bytes) PKCS7_ENC_CONTENT_free
// int PKCS7_ENC_CONTENT_free(char a1);
// [0x19c8bc0] (60 bytes) d2i_PKCS7_SIGN_ENVELOPE
// int d2i_PKCS7_SIGN_ENVELOPE(int *a1, char **a2, int a3);
// [0x19c8c00] (52 bytes) i2d_PKCS7_SIGN_ENVELOPE
// int i2d_PKCS7_SIGN_ENVELOPE(int a1, void **a2);
// [0x19c8c40] (36 bytes) PKCS7_SIGN_ENVELOPE_new
// int PKCS7_SIGN_ENVELOPE_new();
// [0x19c8c70] (44 bytes) PKCS7_SIGN_ENVELOPE_free
// int PKCS7_SIGN_ENVELOPE_free(char a1);
// [0x19c8ca0] (60 bytes) d2i_PKCS7_ENCRYPT
// int d2i_PKCS7_ENCRYPT(int *a1, char **a2, int a3);
// [0x19c8ce0] (52 bytes) i2d_PKCS7_ENCRYPT
// int i2d_PKCS7_ENCRYPT(int a1, void **a2);
// [0x19c8d20] (36 bytes) PKCS7_ENCRYPT_new
// int PKCS7_ENCRYPT_new();
// [0x19c8d50] (44 bytes) PKCS7_ENCRYPT_free
// int PKCS7_ENCRYPT_free(char a1);
// [0x19c8d80] (60 bytes) d2i_PKCS7_DIGEST
// int d2i_PKCS7_DIGEST(int *a1, char **a2, int a3);
// [0x19c8dc0] (52 bytes) i2d_PKCS7_DIGEST
// int i2d_PKCS7_DIGEST(int a1, void **a2);
// [0x19c8e00] (36 bytes) PKCS7_DIGEST_new
// int PKCS7_DIGEST_new();
// [0x19c8e30] (44 bytes) PKCS7_DIGEST_free
// int PKCS7_DIGEST_free(char a1);
// [0x19c8e60] (68 bytes) PKCS7_print_ctx
// int PKCS7_print_ctx(int a1, char a2, int a3, int a4);
// [0x19c9560] (1950 bytes) PKCS7_dataInit
// uint32_t *PKCS7_dataInit(uint32_t *a1, uint32_t *a2);
// [0x19c9d00] (1812 bytes) PKCS7_dataDecode
// uint32_t *PKCS7_dataDecode(uint32_t *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x19ca420] (591 bytes) PKCS7_SIGNER_INFO_sign
// int PKCS7_SIGNER_INFO_sign(int a1);
// [0x19ca670] (137 bytes) PKCS7_get_issuer_and_serial
// int PKCS7_get_issuer_and_serial(int a1, int a2);
// [0x19ca700] (16 bytes) PKCS7_get_signed_attribute
// int PKCS7_get_signed_attribute(int a1, unsigned int a2);
// [0x19ca710] (1543 bytes) PKCS7_dataFinal
// int PKCS7_dataFinal(uint32_t *a1, int **a2);
// [0x19cad20] (16 bytes) PKCS7_get_attribute
// int PKCS7_get_attribute(int a1, unsigned int a2);
// [0x19cad30] (36 bytes) PKCS7_digest_from_attributes
// int PKCS7_digest_from_attributes(int a1);
// [0x19cad60] (959 bytes) PKCS7_signatureVerify
// int PKCS7_signatureVerify(int **a1, int a2, int a3, int a4);
// [0x19cb120] (477 bytes) PKCS7_dataVerify
// int PKCS7_dataVerify(int a1, void *a2, int **a3, int a4, int a5);
// [0x19cb300] (163 bytes) PKCS7_set_signed_attributes
// int PKCS7_set_signed_attributes(int a1, int a2);
// [0x19cb3b0] (163 bytes) PKCS7_set_attributes
// int PKCS7_set_attributes(int a1, int a2);
// [0x19cb460] (32 bytes) PKCS7_add_signed_attribute
// int PKCS7_add_signed_attribute(int a1, int a2, int a3, int a4);
// [0x19cb480] (32 bytes) PKCS7_add_attribute
// int PKCS7_add_attribute(int a1, int a2, int a3, int a4);
// [0x19cb4a0] (319 bytes) PKCS7_ctrl
// char PKCS7_ctrl(uint32_t *a1, int a2, int a3);
// [0x19cb5e0] (191 bytes) PKCS7_set_content
// int PKCS7_set_content(int a1, int a2);
// [0x19cb6a0] (551 bytes) PKCS7_set_type
// bool PKCS7_set_type(int a1, unsigned int a2);
// [0x19cb8d0] (107 bytes) PKCS7_content_new
// int PKCS7_content_new(int a1, unsigned int a2);
// [0x19cb940] (67 bytes) PKCS7_set0_type_other
// int PKCS7_set0_type_other(int a1, unsigned int a2, int a3);
// [0x19cb990] (356 bytes) PKCS7_add_signer
// bool PKCS7_add_signer(int a1, int a2);
// [0x19cbb00] (288 bytes) PKCS7_add_certificate
// int PKCS7_add_certificate(int a1, int a2);
// [0x19cbc20] (288 bytes) PKCS7_add_crl
// int PKCS7_add_crl(int a1, int a2);
// [0x19cbd40] (431 bytes) PKCS7_SIGNER_INFO_set
// int PKCS7_SIGNER_INFO_set(int a1, int a2, int a3, int a4);
// [0x19cbef0] (247 bytes) PKCS7_add_signature
// int PKCS7_add_signature(int a1, int a2, int a3, int a4);
// [0x19cbff0] (245 bytes) PKCS7_set_digest
// int PKCS7_set_digest(int a1, int a2);
// [0x19cc0f0] (82 bytes) PKCS7_get_signer_info
// int PKCS7_get_signer_info(int a1);
// [0x19cc150] (66 bytes) PKCS7_SIGNER_INFO_get0_algs
// uint32_t *PKCS7_SIGNER_INFO_get0_algs(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x19cc1a0] (20 bytes) PKCS7_RECIP_INFO_get0_alg
// uint32_t *PKCS7_RECIP_INFO_get0_alg(int a1, uint32_t *a2);
// [0x19cc1c0] (152 bytes) PKCS7_add_recipient_info
// bool PKCS7_add_recipient_info(int a1, int a2);
// [0x19cc260] (500 bytes) PKCS7_RECIP_INFO_set
// int PKCS7_RECIP_INFO_set(int a1, int a2);
// [0x19cc460] (102 bytes) PKCS7_add_recipient
// int PKCS7_add_recipient(int a1, int a2);
// [0x19cc4d0] (96 bytes) PKCS7_cert_from_signer_info
// int PKCS7_cert_from_signer_info(int a1, int a2);
// [0x19cc530] (228 bytes) PKCS7_set_cipher
// int PKCS7_set_cipher(int a1, int a2);
// [0x19cc620] (196 bytes) PKCS7_stream
// int PKCS7_stream(uint32_t *a1, int a2);
// [0x19cc6f0] (90 bytes) ERR_load_PKCS7_strings
// int ERR_load_PKCS7_strings();
// [0x19cc750] (77 bytes) PKCS8_decrypt
// int PKCS8_decrypt(int *a1, char *a2, int a3);
// [0x19cc7a0] (90 bytes) ERR_load_PKCS12_strings
// int ERR_load_PKCS12_strings();
// [0x19cc800] (90 bytes) ERR_load_RAND_strings
// int ERR_load_RAND_strings();
// [0x19cc860] (65 bytes) RAND_set_rand_method
// int RAND_set_rand_method(int a1);
// [0x19cc8b0] (109 bytes) RAND_get_rand_method
// int RAND_get_rand_method();
// [0x19cc920] (130 bytes) RAND_set_rand_engine
// int RAND_set_rand_engine(uint32_t *a1);
// [0x19cc9b0] (52 bytes) RAND_cleanup
// int RAND_cleanup();
// [0x19cc9f0] (54 bytes) RAND_seed
// int (*RAND_seed(int a1, int a2))(int, int);
// [0x19cca30] (79 bytes) RAND_add
// int RAND_add(int a1, int a2, int64_t a3);
// [0x19cca80] (63 bytes) RAND_bytes
// int RAND_bytes(int a1, int a2);
// [0x19ccac0] (63 bytes) RAND_pseudo_bytes
// int RAND_pseudo_bytes(int a1, int a2);
// [0x19ccb00] (44 bytes) RAND_status
// int RAND_status();
// [0x19d0590] (60 bytes) d2i_RSAPrivateKey
// int d2i_RSAPrivateKey(int *a1, char **a2, int a3);
// [0x19d05d0] (52 bytes) i2d_RSAPrivateKey
// int i2d_RSAPrivateKey(int a1, void **a2);
// [0x19d0610] (60 bytes) d2i_RSAPublicKey
// int d2i_RSAPublicKey(int *a1, char **a2, int a3);
// [0x19d0650] (52 bytes) i2d_RSAPublicKey
// int i2d_RSAPublicKey(int a1, void **a2);
// [0x19d06f0] (90 bytes) ERR_load_RSA_strings
// int ERR_load_RSA_strings();
// [0x19d0750] (24 bytes) RSA_set_default_method
// int RSA_set_default_method(int a1);
// [0x19d0770] (49 bytes) RSA_get_default_method
// int RSA_get_default_method();
// [0x19d07b0] (12 bytes) RSA_get_method
// int RSA_get_method(int a1);
// [0x19d07c0] (109 bytes) RSA_set_method
// int RSA_set_method(int a1, int a2);
// [0x19d0830] (567 bytes) RSA_new_method
// uint32_t *RSA_new_method(uint32_t *a1);
// [0x19d0a70] (34 bytes) RSA_new
// uint32_t *RSA_new();
// [0x19d0aa0] (321 bytes) RSA_free
// void RSA_free(void *a1);
// [0x19d0bf0] (80 bytes) RSA_up_ref
// bool RSA_up_ref(int a1);
// [0x19d0c40] (74 bytes) RSA_get_ex_new_index
// int RSA_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x19d0c90] (53 bytes) RSA_set_ex_data
// int RSA_set_ex_data(int a1, int a2, int a3);
// [0x19d0cd0] (45 bytes) RSA_get_ex_data
// int RSA_get_ex_data(int a1, int a2);
// [0x19d0d00] (49 bytes) RSA_size
// int RSA_size(int a1);
// [0x19d0d40] (54 bytes) RSA_public_encrypt
// int RSA_public_encrypt(int a1, int a2, int a3, int a4, int a5);
// [0x19d0d80] (54 bytes) RSA_private_encrypt
// int RSA_private_encrypt(int a1, int a2, int a3, int a4, int a5);
// [0x19d0dc0] (54 bytes) RSA_private_decrypt
// int RSA_private_decrypt(int a1, int a2, int a3, int a4, int a5);
// [0x19d0e00] (54 bytes) RSA_public_decrypt
// int RSA_public_decrypt(int a1, int a2, int a3, int a4, int a5);
// [0x19d0e40] (17 bytes) RSA_flags
// int RSA_flags(int a1);
// [0x19d0e60] (73 bytes) RSA_blinding_off
// unsigned int RSA_blinding_off(int a1);
// [0x19d0eb0] (856 bytes) RSA_setup_blinding
// int RSA_setup_blinding(int a1, int *a2);
// [0x19d1210] (98 bytes) RSA_blinding_on
// int RSA_blinding_on(int a1, int *a2);
// [0x19d1280] (354 bytes) RSA_memory_lock
// int RSA_memory_lock(uint32_t *a1);
// [0x19d24c0] (1229 bytes) RSA_verify_PKCS1_PSS
// void *RSA_verify_PKCS1_PSS(int a1, int a2, uint32_t *a3, uint8_t *a4, int a5);
// [0x19d2990] (991 bytes) RSA_padding_add_PKCS1_PSS
// int RSA_padding_add_PKCS1_PSS(int a1, uint8_t *a2, int a3, uint32_t *a4, signed int a5);
// [0x19d2d70] (380 bytes) RSA_sign_ASN1_OCTET_STRING
// int RSA_sign_ASN1_OCTET_STRING(int a1, int a2, int a3, int a4, int *a5, int a6);
// [0x19d2ef0] (443 bytes) RSA_verify_ASN1_OCTET_STRING
// int RSA_verify_ASN1_OCTET_STRING(int a1, void *s1, int a3, int a4, size_t a5, int a6);
// [0x19d30b0] (789 bytes) RSA_sign
// char RSA_sign(unsigned int a1, int a2, int a3, int a4, int *a5, int a6);
// [0x19d3840] (173 bytes) RSA_verify
// int RSA_verify(unsigned int a1, void *a2, size_t a3, int a4, size_t a5, int a6);
// [0x19d38f0] (213 bytes) RSA_padding_add_X931
// int RSA_padding_add_X931(uint8_t *a1, int a2, void *src, size_t n);
// [0x19d39d0] (368 bytes) RSA_padding_check_X931
// size_t RSA_padding_check_X931(void *dest, int a2, uint8_t *a3, int a4, int a5);
// [0x19d3b40] (73 bytes) RSA_X931_hash_id
// char RSA_X931_hash_id(int a1);
// [0x19d7ab0] (440 bytes) SHA1_Update
// int SHA1_Update(int a1, char *src, size_t a3);
// [0x19d7c70] (21 bytes) SHA1_Transform
// int SHA1_Transform(int *a1, int a2);
// [0x19d7c90] (472 bytes) SHA1_Final
// int SHA1_Final(uint8_t *a1, int a2);
// [0x19d7e70] (141 bytes) SHA1_Init
// int SHA1_Init(int a1);
// [0x19d9250] (176 bytes) SHA256_Init
// int SHA256_Init(int a1);
// [0x19d9300] (432 bytes) SHA256_Update
// int SHA256_Update(int a1, char *src, size_t a3);
// [0x19d94f0] (21 bytes) SHA256_Transform
// signed int SHA256_Transform(signed int a1, int a2);
// [0x19d9510] (544 bytes) SHA256_Final
// char SHA256_Final(uint8_t *a1, signed int a2);
// [0x19d9760] (158 bytes) SHA256
// uint8_t *SHA256(char *a1, size_t a2, uint8_t *a3);
// [0x19da3d0] (169 bytes) SHA512_Init
// int SHA512_Init(uint32_t *a1);
// [0x19da480] (633 bytes) SHA512_Final
// int SHA512_Final(uint8_t *a1, int a2);
// [0x19da730] (363 bytes) SHA512_Update
// int SHA512_Update(int a1, char *src, size_t a3);
// [0x19da8e0] (21 bytes) SHA512_Transform
// int64_t *SHA512_Transform(int64_t *a1, int a2);
// [0x19da9a0] (158 bytes) SHA512
// uint8_t *SHA512(char *a1, size_t a2, uint8_t *a3);
// [0x19dcbe0] (90 bytes) ERR_load_TS_strings
// int ERR_load_TS_strings();
// [0x19dcc40] (90 bytes) ERR_load_UI_strings
// int ERR_load_UI_strings();
// [0x19dd6a0] (95 bytes) X509_ATTRIBUTE_set1_object
// int X509_ATTRIBUTE_set1_object(void **a1, int a2);
// [0x19dd700] (507 bytes) X509_ATTRIBUTE_set1_data
// int X509_ATTRIBUTE_set1_data(int a1, int a2, char *a3, size_t a4);
// [0x19dd900] (239 bytes) X509_ATTRIBUTE_create_by_OBJ
// void **X509_ATTRIBUTE_create_by_OBJ(void ***a1, int a2, int a3, char *a4, size_t a5);
// [0x19dd9f0] (204 bytes) X509_ATTRIBUTE_create_by_txt
// void **X509_ATTRIBUTE_create_by_txt(void ***a1, char *a2, int a3, char *a4, size_t a5);
// [0x19ddb40] (162 bytes) X509_ATTRIBUTE_create_by_NID
// void **X509_ATTRIBUTE_create_by_NID(void ***a1, unsigned int a2, int a3, char *a4, size_t a5);
// [0x19ddcf0] (65 bytes) X509_ATTRIBUTE_count
// int X509_ATTRIBUTE_count(int a1);
// [0x19ddd40] (19 bytes) X509_ATTRIBUTE_get0_object
// int X509_ATTRIBUTE_get0_object(int a1);
// [0x19ddd60] (115 bytes) X509_ATTRIBUTE_get0_type
// int X509_ATTRIBUTE_get0_type(int a1, int a2);
// [0x19ddde0] (144 bytes) X509_ATTRIBUTE_get0_data
// int X509_ATTRIBUTE_get0_data(int a1, int a2, int a3);
// [0x19ddf50] (261 bytes) X509_issuer_and_serial_hash
// int X509_issuer_and_serial_hash(int a1);
// [0x19de060] (56 bytes) X509_CRL_match
// int X509_CRL_match(int a1, int a2);
// [0x19de0a0] (12 bytes) X509_get_issuer_name
// int X509_get_issuer_name(int a1);
// [0x19de0b0] (12 bytes) X509_get_subject_name
// int X509_get_subject_name(int a1);
// [0x19de0c0] (12 bytes) X509_get_serialNumber
// int X509_get_serialNumber(int a1);
// [0x19de0d0] (126 bytes) X509_cmp
// int X509_cmp(int a1, int a2);
// [0x19de150] (166 bytes) X509_NAME_cmp
// int X509_NAME_cmp(int a1, int a2);
// [0x19de200] (52 bytes) X509_CRL_cmp
// int X509_CRL_cmp(int a1, int a2);
// [0x19de240] (52 bytes) X509_subject_name_cmp
// int X509_subject_name_cmp(int a1, int a2);
// [0x19de280] (52 bytes) X509_issuer_name_cmp
// int X509_issuer_name_cmp(int a1, int a2);
// [0x19de2c0] (96 bytes) X509_issuer_and_serial_cmp
// int X509_issuer_and_serial_cmp(int *a1, int *a2);
// [0x19de320] (130 bytes) X509_NAME_hash
// int X509_NAME_hash(int a1);
// [0x19de3b0] (39 bytes) X509_subject_name_hash
// int X509_subject_name_hash(int a1);
// [0x19de3e0] (39 bytes) X509_issuer_name_hash
// int X509_issuer_name_hash(int a1);
// [0x19de410] (132 bytes) X509_NAME_hash_old
// int X509_NAME_hash_old(int a1);
// [0x19de4a0] (39 bytes) X509_subject_name_hash_old
// int X509_subject_name_hash_old(int a1);
// [0x19de4d0] (39 bytes) X509_issuer_name_hash_old
// int X509_issuer_name_hash_old(int a1);
// [0x19de500] (137 bytes) X509_find_by_issuer_and_serial
// int *X509_find_by_issuer_and_serial(int *a1, int a2, int a3);
// [0x19de590] (102 bytes) X509_find_by_subject
// int X509_find_by_subject(int *a1, int a2);
// [0x19de600] (60 bytes) X509_get_pubkey
// int X509_get_pubkey(int a1);
// [0x19de640] (27 bytes) X509_get0_pubkey_bitstr
// int X509_get0_pubkey_bitstr(int a1);
// [0x19de660] (285 bytes) X509_check_private_key
// bool X509_check_private_key(int a1, uint32_t *a2);
// [0x19de780] (183 bytes) X509_STORE_set_default_paths
// int X509_STORE_set_default_paths(int a1);
// [0x19de840] (239 bytes) X509_STORE_load_locations
// bool X509_STORE_load_locations(int a1, int a2, int a3);
// [0x19de930] (22 bytes) X509_get_default_private_dir
// const char *X509_get_default_private_dir();
// [0x19de950] (22 bytes) X509_get_default_cert_area
// const char *X509_get_default_cert_area();
// [0x19de970] (22 bytes) X509_get_default_cert_dir
// const char *X509_get_default_cert_dir();
// [0x19de990] (22 bytes) X509_get_default_cert_file
// const char *X509_get_default_cert_file();
// [0x19de9b0] (22 bytes) X509_get_default_cert_dir_env
// const char *X509_get_default_cert_dir_env();
// [0x19de9d0] (22 bytes) X509_get_default_cert_file_env
// const char *X509_get_default_cert_file_env();
// [0x19de9f0] (90 bytes) ERR_load_X509_strings
// int ERR_load_X509_strings();
// [0x19dec50] (148 bytes) X509_LOOKUP_new
// uint32_t *X509_LOOKUP_new(int a1);
// [0x19decf0] (71 bytes) X509_LOOKUP_free
// void X509_LOOKUP_free(uint32_t *a1);
// [0x19ded40] (36 bytes) X509_LOOKUP_init
// char X509_LOOKUP_init(int a1);
// [0x19ded70] (36 bytes) X509_LOOKUP_shutdown
// char X509_LOOKUP_shutdown(int a1);
// [0x19deda0] (76 bytes) X509_LOOKUP_ctrl
// int X509_LOOKUP_ctrl(int a1, int a2, int a3, int a4, int a5);
// [0x19dedf0] (74 bytes) X509_LOOKUP_by_subject
// int X509_LOOKUP_by_subject(int a1, int a2, int a3, int a4);
// [0x19dee40] (66 bytes) X509_LOOKUP_by_issuer_serial
// int X509_LOOKUP_by_issuer_serial(int a1, int a2, int a3, int a4, int a5);
// [0x19dee90] (66 bytes) X509_LOOKUP_by_fingerprint
// int X509_LOOKUP_by_fingerprint(int a1, int a2, int a3, int a4, int a5);
// [0x19deee0] (66 bytes) X509_LOOKUP_by_alias
// int X509_LOOKUP_by_alias(int a1, int a2, int a3, int a4, int a5);
// [0x19def30] (255 bytes) X509_STORE_new
// uint8_t *X509_STORE_new();
// [0x19df030] (197 bytes) X509_STORE_free
// void *X509_STORE_free(void *a1);
// [0x19df100] (137 bytes) X509_STORE_add_lookup
// int X509_STORE_add_lookup(int a1, int a2);
// [0x19df190] (142 bytes) X509_OBJECT_up_ref_count
// int X509_OBJECT_up_ref_count(int *a1);
// [0x19df220] (73 bytes) X509_OBJECT_free_contents
// int X509_OBJECT_free_contents(int *a1);
// [0x19df270] (29 bytes) X509_OBJECT_idx_by_subject
// int X509_OBJECT_idx_by_subject(int *a1, int a2, int a3);
// [0x19df290] (85 bytes) X509_OBJECT_retrieve_by_subject
// int X509_OBJECT_retrieve_by_subject(int *a1, int a2, int a3);
// [0x19df2f0] (341 bytes) X509_STORE_get_by_subject
// int X509_STORE_get_by_subject(int *a1, int a2, int a3, int *a4);
// [0x19df450] (603 bytes) X509_STORE_get1_certs
// void **X509_STORE_get1_certs(int *a1, int a2);
// [0x19df6b0] (593 bytes) X509_STORE_get1_crls
// void **X509_STORE_get1_crls(int *a1, int a2);
// [0x19df910] (251 bytes) X509_OBJECT_retrieve_match
// int *X509_OBJECT_retrieve_match(int *a1, uint32_t *a2);
// [0x19dfa10] (354 bytes) X509_STORE_add_crl
// int X509_STORE_add_crl(int a1, int a2);
// [0x19dfb80] (354 bytes) X509_STORE_add_cert
// int X509_STORE_add_cert(int a1, int a2);
// [0x19dfcf0] (538 bytes) X509_STORE_CTX_get1_issuer
// int X509_STORE_CTX_get1_issuer(uint32_t *a1, int a2, int a3);
// [0x19dff10] (45 bytes) X509_STORE_set_flags
// int X509_STORE_set_flags(int a1, int a2);
// [0x19dff40] (50 bytes) X509_STORE_set_depth
// int X509_STORE_set_depth(int a1, int a2);
// [0x19dff80] (45 bytes) X509_STORE_set_purpose
// int X509_STORE_set_purpose(int a1, int a2);
// [0x19dffb0] (45 bytes) X509_STORE_set_trust
// int X509_STORE_set_trust(int a1, int a2);
// [0x19dffe0] (45 bytes) X509_STORE_set1_param
// int X509_STORE_set1_param(int a1, int a2);
// [0x19e0010] (14 bytes) X509_STORE_set_verify_cb
// int X509_STORE_set_verify_cb(int a1, int a2);
// [0x19e0020] (1160 bytes) X509_NAME_oneline
// char *X509_NAME_oneline(int **a1, char *dest, signed int a3);
// [0x19e09a0] (198 bytes) X509_time_adj_ex
// int X509_time_adj_ex(int a1, int a2, int a3, time_t *a4);
// [0x19e0a70] (58 bytes) X509_time_adj
// int X509_time_adj(int a1, int a2, time_t *a3);
// [0x19e0ab0] (50 bytes) X509_gmtime_adj
// int X509_gmtime_adj(int a1, int a2);
// [0x19e0af0] (595 bytes) X509_cmp_time
// int X509_cmp_time(int *a1, time_t *a2);
// [0x19e1cb0] (42 bytes) X509_cmp_current_time
// int X509_cmp_current_time(int *a1);
// [0x19e1ce0] (360 bytes) X509_get_pubkey_parameters
// int X509_get_pubkey_parameters(uint32_t *a1, int *a2);
// [0x19e1e50] (2735 bytes) X509_verify_cert
// int X509_verify_cert(int a1);
// [0x19e2900] (74 bytes) X509_STORE_CTX_get_ex_new_index
// int X509_STORE_CTX_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x19e2950] (53 bytes) X509_STORE_CTX_set_ex_data
// int X509_STORE_CTX_set_ex_data(int a1, int a2, int a3);
// [0x19e2990] (45 bytes) X509_STORE_CTX_get_ex_data
// int X509_STORE_CTX_get_ex_data(int a1, int a2);
// [0x19e29c0] (12 bytes) X509_STORE_CTX_get_error
// int X509_STORE_CTX_get_error(int a1);
// [0x19e29d0] (14 bytes) X509_STORE_CTX_set_error
// int X509_STORE_CTX_set_error(int a1, int a2);
// [0x19e29e0] (12 bytes) X509_STORE_CTX_get_error_depth
// int X509_STORE_CTX_get_error_depth(int a1);
// [0x19e29f0] (12 bytes) X509_STORE_CTX_get_current_cert
// int X509_STORE_CTX_get_current_cert(int a1);
// [0x19e2a00] (12 bytes) X509_STORE_CTX_get_chain
// int X509_STORE_CTX_get_chain(int a1);
// [0x19e2a10] (133 bytes) X509_STORE_CTX_get1_chain
// int *X509_STORE_CTX_get1_chain(int a1);
// [0x19e2aa0] (12 bytes) X509_STORE_CTX_get0_current_issuer
// int X509_STORE_CTX_get0_current_issuer(int a1);
// [0x19e2ab0] (12 bytes) X509_STORE_CTX_get0_current_crl
// int X509_STORE_CTX_get0_current_crl(int a1);
// [0x19e2ac0] (12 bytes) X509_STORE_CTX_get0_parent_ctx
// int X509_STORE_CTX_get0_parent_ctx(int a1);
// [0x19e2ad0] (14 bytes) X509_STORE_CTX_set_cert
// int X509_STORE_CTX_set_cert(int a1, int a2);
// [0x19e2ae0] (14 bytes) X509_STORE_CTX_set_chain
// int X509_STORE_CTX_set_chain(int a1, int a2);
// [0x19e2af0] (14 bytes) X509_STORE_CTX_set0_crls
// int X509_STORE_CTX_set0_crls(int a1, int a2);
// [0x19e2b00] (351 bytes) X509_STORE_CTX_purpose_inherit
// int X509_STORE_CTX_purpose_inherit(int a1, int a2, int a3, int a4);
// [0x19e2c60] (58 bytes) X509_STORE_CTX_set_trust
// int X509_STORE_CTX_set_trust(int a1, int a2);
// [0x19e2ca0] (58 bytes) X509_STORE_CTX_set_purpose
// int X509_STORE_CTX_set_purpose(int a1, int a2);
// [0x19e2ce0] (218 bytes) X509_STORE_CTX_new
// uint8_t *X509_STORE_CTX_new();
// [0x19e2dc0] (795 bytes) X509_STORE_CTX_init
// int X509_STORE_CTX_init(uint32_t *a1, uint32_t *a2, int a3, int a4);
// [0x19e30e0] (32 bytes) X509_STORE_CTX_trusted_stack
// int X509_STORE_CTX_trusted_stack(int a1, int a2);
// [0x19e3100] (197 bytes) X509_STORE_CTX_cleanup
// int X509_STORE_CTX_cleanup(int a1);
// [0x19e31d0] (56 bytes) X509_STORE_CTX_free
// int X509_STORE_CTX_free(void *a1);
// [0x19e3210] (45 bytes) X509_STORE_CTX_set_depth
// int X509_STORE_CTX_set_depth(int a1, int a2);
// [0x19e3240] (45 bytes) X509_STORE_CTX_set_flags
// int X509_STORE_CTX_set_flags(int a1, int a2);
// [0x19e3270] (45 bytes) X509_STORE_CTX_set_time
// int X509_STORE_CTX_set_time(int a1, int a2, int a3);
// [0x19e32a0] (14 bytes) X509_STORE_CTX_set_verify_cb
// int X509_STORE_CTX_set_verify_cb(int a1, int a2);
// [0x19e32b0] (12 bytes) X509_STORE_CTX_get0_policy_tree
// int X509_STORE_CTX_get0_policy_tree(int a1);
// [0x19e32c0] (12 bytes) X509_STORE_CTX_get_explicit_policy
// int X509_STORE_CTX_get_explicit_policy(int a1);
// [0x19e32d0] (61 bytes) X509_STORE_CTX_set_default
// int X509_STORE_CTX_set_default(int a1, int a2);
// [0x19e3310] (12 bytes) X509_STORE_CTX_get0_param
// int X509_STORE_CTX_get0_param(int a1);
// [0x19e3320] (62 bytes) X509_STORE_CTX_set0_param
// int X509_STORE_CTX_set0_param(int a1, int a2);
// [0x19e3750] (125 bytes) X509_VERIFY_PARAM_free
// int X509_VERIFY_PARAM_free(uint32_t *a1);
// [0x19e37d0] (256 bytes) X509_VERIFY_PARAM_new
// uint32_t *X509_VERIFY_PARAM_new();
// [0x19e38d0] (76 bytes) X509_VERIFY_PARAM_set1_name
// bool X509_VERIFY_PARAM_set1_name(void **a1, char *a2);
// [0x19e3920] (36 bytes) X509_VERIFY_PARAM_set_flags
// int X509_VERIFY_PARAM_set_flags(int a1, int a2);
// [0x19e3950] (19 bytes) X509_VERIFY_PARAM_clear_flags
// int X509_VERIFY_PARAM_clear_flags(int a1, int a2);
// [0x19e3970] (12 bytes) X509_VERIFY_PARAM_get_flags
// int X509_VERIFY_PARAM_get_flags(int a1);
// [0x19e3980] (45 bytes) X509_VERIFY_PARAM_set_purpose
// int X509_VERIFY_PARAM_set_purpose(int a1, int a2);
// [0x19e39b0] (45 bytes) X509_VERIFY_PARAM_set_trust
// int X509_VERIFY_PARAM_set_trust(int a1, int a2);
// [0x19e39e0] (14 bytes) X509_VERIFY_PARAM_set_depth
// int X509_VERIFY_PARAM_set_depth(int a1, int a2);
// [0x19e39f0] (16 bytes) X509_VERIFY_PARAM_set_time
// int X509_VERIFY_PARAM_set_time(int a1, int a2);
// [0x19e3a00] (90 bytes) X509_VERIFY_PARAM_add0_policy
// bool X509_VERIFY_PARAM_add0_policy(int a1, int a2);
// [0x19e3a60] (259 bytes) X509_VERIFY_PARAM_set1_policies
// int X509_VERIFY_PARAM_set1_policies(int a1, int *a2);
// [0x19e3b70] (381 bytes) X509_VERIFY_PARAM_inherit
// int X509_VERIFY_PARAM_inherit(uint32_t *a1, uint32_t *a2);
// [0x19e3cf0] (78 bytes) X509_VERIFY_PARAM_set1
// int X509_VERIFY_PARAM_set1(uint32_t *a1, uint32_t *a2);
// [0x19e3d40] (12 bytes) X509_VERIFY_PARAM_get_depth
// int X509_VERIFY_PARAM_get_depth(int a1);
// [0x19e3d50] (182 bytes) X509_VERIFY_PARAM_add0_table
// bool X509_VERIFY_PARAM_add0_table(int a1);
// [0x19e3e10] (137 bytes) X509_VERIFY_PARAM_lookup
// int X509_VERIFY_PARAM_lookup(int a1);
// [0x19e3ea0] (60 bytes) X509_VERIFY_PARAM_table_cleanup
// int X509_VERIFY_PARAM_table_cleanup();
// [0x19e3ee0] (293 bytes) X509_certificate_type
// int X509_certificate_type(int a1, int *a2);
// [0x19e4010] (68 bytes) X509_verify
// int X509_verify(uint32_t *a1, int a2);
// [0x19e4060] (68 bytes) X509_REQ_verify
// int X509_REQ_verify(uint32_t *a1, int a2);
// [0x19e4100] (92 bytes) X509_sign
// int X509_sign(uint32_t *a1, int a2, int a3);
// [0x19e4160] (84 bytes) X509_REQ_sign
// int X509_REQ_sign(uint32_t *a1, int a2, int a3);
// [0x19e41c0] (92 bytes) X509_CRL_sign
// int X509_CRL_sign(uint32_t *a1, int a2, int a3);
// [0x19e4280] (52 bytes) d2i_X509_fp
// int d2i_X509_fp(int a1, int a2);
// [0x19e42c0] (52 bytes) i2d_X509_fp
// int i2d_X509_fp(int a1, int a2);
// [0x19e4300] (52 bytes) d2i_X509_bio
// int d2i_X509_bio(int a1, int a2);
// [0x19e4340] (52 bytes) i2d_X509_bio
// int i2d_X509_bio(int a1, int a2);
// [0x19e4380] (52 bytes) d2i_X509_CRL_fp
// int d2i_X509_CRL_fp(int a1, int a2);
// [0x19e43c0] (52 bytes) i2d_X509_CRL_fp
// int i2d_X509_CRL_fp(int a1, int a2);
// [0x19e4400] (52 bytes) d2i_X509_CRL_bio
// int d2i_X509_CRL_bio(int a1, int a2);
// [0x19e4440] (52 bytes) i2d_X509_CRL_bio
// int i2d_X509_CRL_bio(int a1, int a2);
// [0x19e4480] (52 bytes) d2i_PKCS7_fp
// int d2i_PKCS7_fp(int a1, int a2);
// [0x19e44c0] (52 bytes) i2d_PKCS7_fp
// int i2d_PKCS7_fp(int a1, int a2);
// [0x19e4500] (52 bytes) d2i_PKCS7_bio
// int d2i_PKCS7_bio(int a1, int a2);
// [0x19e4540] (52 bytes) i2d_PKCS7_bio
// int i2d_PKCS7_bio(int a1, int a2);
// [0x19e4580] (52 bytes) d2i_X509_REQ_fp
// int d2i_X509_REQ_fp(int a1, int a2);
// [0x19e45c0] (52 bytes) i2d_X509_REQ_fp
// int i2d_X509_REQ_fp(int a1, int a2);
// [0x19e4600] (52 bytes) d2i_X509_REQ_bio
// int d2i_X509_REQ_bio(int a1, int a2);
// [0x19e4640] (52 bytes) i2d_X509_REQ_bio
// int i2d_X509_REQ_bio(int a1, int a2);
// [0x19e4680] (52 bytes) d2i_RSAPrivateKey_fp
// int d2i_RSAPrivateKey_fp(int a1, int a2);
// [0x19e46c0] (52 bytes) i2d_RSAPrivateKey_fp
// int i2d_RSAPrivateKey_fp(int a1, int a2);
// [0x19e4700] (52 bytes) d2i_RSAPublicKey_fp
// int d2i_RSAPublicKey_fp(int a1, int a2);
// [0x19e4740] (62 bytes) d2i_RSA_PUBKEY_fp
// int d2i_RSA_PUBKEY_fp(int a1, int a2);
// [0x19e4780] (52 bytes) i2d_RSAPublicKey_fp
// int i2d_RSAPublicKey_fp(int a1, int a2);
// [0x19e47c0] (52 bytes) i2d_RSA_PUBKEY_fp
// int i2d_RSA_PUBKEY_fp(int a1, int a2);
// [0x19e4800] (52 bytes) d2i_RSAPrivateKey_bio
// int d2i_RSAPrivateKey_bio(int a1, int a2);
// [0x19e4840] (52 bytes) i2d_RSAPrivateKey_bio
// int i2d_RSAPrivateKey_bio(int a1, int a2);
// [0x19e4880] (52 bytes) d2i_RSAPublicKey_bio
// int d2i_RSAPublicKey_bio(int a1, int a2);
// [0x19e48c0] (62 bytes) d2i_RSA_PUBKEY_bio
// int d2i_RSA_PUBKEY_bio(int a1, int a2);
// [0x19e4900] (52 bytes) i2d_RSAPublicKey_bio
// int i2d_RSAPublicKey_bio(int a1, int a2);
// [0x19e4940] (52 bytes) i2d_RSA_PUBKEY_bio
// int i2d_RSA_PUBKEY_bio(int a1, int a2);
// [0x19e4980] (62 bytes) d2i_DSAPrivateKey_fp
// int d2i_DSAPrivateKey_fp(int a1, int a2);
// [0x19e49c0] (52 bytes) i2d_DSAPrivateKey_fp
// int i2d_DSAPrivateKey_fp(int a1, int a2);
// [0x19e4a00] (62 bytes) d2i_DSA_PUBKEY_fp
// int d2i_DSA_PUBKEY_fp(int a1, int a2);
// [0x19e4a40] (52 bytes) i2d_DSA_PUBKEY_fp
// int i2d_DSA_PUBKEY_fp(int a1, int a2);
// [0x19e4a80] (62 bytes) d2i_DSAPrivateKey_bio
// int d2i_DSAPrivateKey_bio(int a1, int a2);
// [0x19e4ac0] (52 bytes) i2d_DSAPrivateKey_bio
// int i2d_DSAPrivateKey_bio(int a1, int a2);
// [0x19e4b00] (62 bytes) d2i_DSA_PUBKEY_bio
// int d2i_DSA_PUBKEY_bio(int a1, int a2);
// [0x19e4b40] (52 bytes) i2d_DSA_PUBKEY_bio
// int i2d_DSA_PUBKEY_bio(int a1, int a2);
// [0x19e4b80] (62 bytes) d2i_EC_PUBKEY_fp
// int d2i_EC_PUBKEY_fp(int a1, int a2);
// [0x19e4bc0] (52 bytes) i2d_EC_PUBKEY_fp
// int i2d_EC_PUBKEY_fp(int a1, int a2);
// [0x19e4c00] (62 bytes) d2i_ECPrivateKey_fp
// int d2i_ECPrivateKey_fp(int a1, int a2);
// [0x19e4c40] (52 bytes) i2d_ECPrivateKey_fp
// int i2d_ECPrivateKey_fp(int a1, int a2);
// [0x19e4c80] (62 bytes) d2i_EC_PUBKEY_bio
// int d2i_EC_PUBKEY_bio(int a1, int a2);
// [0x19e4cc0] (52 bytes) i2d_EC_PUBKEY_bio
// int i2d_EC_PUBKEY_bio(int a1, int a2);
// [0x19e4d00] (62 bytes) d2i_ECPrivateKey_bio
// int d2i_ECPrivateKey_bio(int a1, int a2);
// [0x19e4d40] (52 bytes) i2d_ECPrivateKey_bio
// int i2d_ECPrivateKey_bio(int a1, int a2);
// [0x19e4d80] (91 bytes) X509_pubkey_digest
// bool X509_pubkey_digest(int a1, uint32_t *a2, int a3, uint32_t *a4);
// [0x19e4de0] (68 bytes) X509_digest
// int X509_digest(int a1, int a2, int a3, int a4);
// [0x19e4e30] (68 bytes) X509_CRL_digest
// int X509_CRL_digest(int a1, int a2, int a3, int a4);
// [0x19e4e80] (68 bytes) X509_REQ_digest
// int X509_REQ_digest(int a1, int a2, int a3, int a4);
// [0x19e4ed0] (68 bytes) X509_NAME_digest
// int X509_NAME_digest(int a1, int a2, int a3, int a4);
// [0x19e4f20] (68 bytes) PKCS7_ISSUER_AND_SERIAL_digest
// int PKCS7_ISSUER_AND_SERIAL_digest(int a1, int a2, int a3, int a4);
// [0x19e4f70] (62 bytes) d2i_PKCS8_fp
// int d2i_PKCS8_fp(int a1, int a2);
// [0x19e4fb0] (52 bytes) i2d_PKCS8_fp
// int i2d_PKCS8_fp(int a1, int a2);
// [0x19e4ff0] (62 bytes) d2i_PKCS8_bio
// int d2i_PKCS8_bio(int a1, int a2);
// [0x19e5030] (52 bytes) i2d_PKCS8_bio
// int i2d_PKCS8_bio(int a1, int a2);
// [0x19e5070] (62 bytes) d2i_PKCS8_PRIV_KEY_INFO_fp
// int d2i_PKCS8_PRIV_KEY_INFO_fp(int a1, int a2);
// [0x19e50b0] (52 bytes) i2d_PKCS8_PRIV_KEY_INFO_fp
// int i2d_PKCS8_PRIV_KEY_INFO_fp(int a1, int a2);
// [0x19e50f0] (92 bytes) i2d_PKCS8PrivateKeyInfo_fp
// int i2d_PKCS8PrivateKeyInfo_fp(int a1, int a2);
// [0x19e5150] (52 bytes) i2d_PrivateKey_fp
// int i2d_PrivateKey_fp(int a1, int a2);
// [0x19e5190] (62 bytes) d2i_PrivateKey_fp
// int d2i_PrivateKey_fp(int a1, int a2);
// [0x19e51d0] (52 bytes) i2d_PUBKEY_fp
// int i2d_PUBKEY_fp(int a1, int a2);
// [0x19e5210] (62 bytes) d2i_PUBKEY_fp
// int d2i_PUBKEY_fp(int a1, int a2);
// [0x19e5250] (62 bytes) d2i_PKCS8_PRIV_KEY_INFO_bio
// int d2i_PKCS8_PRIV_KEY_INFO_bio(int a1, int a2);
// [0x19e5290] (52 bytes) i2d_PKCS8_PRIV_KEY_INFO_bio
// int i2d_PKCS8_PRIV_KEY_INFO_bio(int a1, int a2);
// [0x19e52d0] (92 bytes) i2d_PKCS8PrivateKeyInfo_bio
// int i2d_PKCS8PrivateKeyInfo_bio(int a1, int a2);
// [0x19e5330] (52 bytes) i2d_PrivateKey_bio
// int i2d_PrivateKey_bio(int a1, int a2);
// [0x19e5370] (62 bytes) d2i_PrivateKey_bio
// int d2i_PrivateKey_bio(int a1, int a2);
// [0x19e53b0] (52 bytes) i2d_PUBKEY_bio
// int i2d_PUBKEY_bio(int a1, int a2);
// [0x19e53f0] (62 bytes) d2i_PUBKEY_bio
// int d2i_PUBKEY_bio(int a1, int a2);
// [0x19e5d70] (198 bytes) X509_policy_tree_free
// int X509_policy_tree_free(void ***a1);
// [0x19e5e40] (3001 bytes) X509_policy_check
// int X509_policy_check(int **a1, uint32_t *a2, int *a3, int *a4, int16_t a5);
// [0x19e6a00] (60 bytes) d2i_AUTHORITY_KEYID
// int d2i_AUTHORITY_KEYID(int *a1, char **a2, int a3);
// [0x19e6a40] (52 bytes) i2d_AUTHORITY_KEYID
// int i2d_AUTHORITY_KEYID(int a1, void **a2);
// [0x19e6e80] (60 bytes) d2i_CERTIFICATEPOLICIES
// int d2i_CERTIFICATEPOLICIES(int *a1, char **a2, int a3);
// [0x19e6ec0] (52 bytes) i2d_CERTIFICATEPOLICIES
// int i2d_CERTIFICATEPOLICIES(int a1, void **a2);
// [0x19e6f60] (60 bytes) d2i_POLICYINFO
// int d2i_POLICYINFO(int *a1, char **a2, int a3);
// [0x19e6fa0] (52 bytes) i2d_POLICYINFO
// int i2d_POLICYINFO(int a1, void **a2);
// [0x19e7010] (60 bytes) d2i_POLICYQUALINFO
// int d2i_POLICYQUALINFO(int *a1, char **a2, int a3);
// [0x19e7050] (52 bytes) i2d_POLICYQUALINFO
// int i2d_POLICYQUALINFO(int a1, void **a2);
// [0x19e70f0] (60 bytes) d2i_USERNOTICE
// int d2i_USERNOTICE(int *a1, char **a2, int a3);
// [0x19e7130] (52 bytes) i2d_USERNOTICE
// int i2d_USERNOTICE(int a1, void **a2);
// [0x19e71d0] (60 bytes) d2i_NOTICEREF
// int d2i_NOTICEREF(int *a1, char **a2, int a3);
// [0x19e7210] (52 bytes) i2d_NOTICEREF
// int i2d_NOTICEREF(int a1, void **a2);
// [0x19e7cd0] (263 bytes) X509_POLICY_NODE_print
// int X509_POLICY_NODE_print(uint32_t *a1, int *a2, int a3);
// [0x19e8570] (60 bytes) d2i_DIST_POINT_NAME
// int d2i_DIST_POINT_NAME(int *a1, char **a2, int a3);
// [0x19e85b0] (52 bytes) i2d_DIST_POINT_NAME
// int i2d_DIST_POINT_NAME(int a1, void **a2);
// [0x19e88c0] (60 bytes) d2i_DIST_POINT
// int d2i_DIST_POINT(int *a1, char **a2, int a3);
// [0x19e8900] (52 bytes) i2d_DIST_POINT
// int i2d_DIST_POINT(int a1, void **a2);
// [0x19e8c70] (60 bytes) d2i_CRL_DIST_POINTS
// int d2i_CRL_DIST_POINTS(int *a1, char **a2, int a3);
// [0x19e8cb0] (52 bytes) i2d_CRL_DIST_POINTS
// int i2d_CRL_DIST_POINTS(int a1, void **a2);
// [0x19e8d50] (60 bytes) d2i_ISSUING_DIST_POINT
// int d2i_ISSUING_DIST_POINT(int *a1, char **a2, int a3);
// [0x19e8d90] (52 bytes) i2d_ISSUING_DIST_POINT
// int i2d_ISSUING_DIST_POINT(int a1, void **a2);
// [0x19e9160] (52 bytes) i2d_GENERAL_NAME
// int i2d_GENERAL_NAME(int a1, void **a2);
// [0x19e91a0] (60 bytes) d2i_GENERAL_NAME
// int d2i_GENERAL_NAME(int *a1, char **a2, int a3);
// [0x19e91e0] (60 bytes) d2i_OTHERNAME
// int d2i_OTHERNAME(int *a1, char **a2, int a3);
// [0x19e9220] (52 bytes) i2d_OTHERNAME
// int i2d_OTHERNAME(int a1, void **a2);
// [0x19e92c0] (60 bytes) d2i_EDIPARTYNAME
// int d2i_EDIPARTYNAME(int *a1, char **a2, int a3);
// [0x19e9300] (52 bytes) i2d_EDIPARTYNAME
// int i2d_EDIPARTYNAME(int a1, void **a2);
// [0x19e9400] (60 bytes) d2i_GENERAL_NAMES
// int d2i_GENERAL_NAMES(int *a1, char **a2, int a3);
// [0x19e9440] (52 bytes) i2d_GENERAL_NAMES
// int i2d_GENERAL_NAMES(int a1, void **a2);
// [0x19e9a00] (60 bytes) d2i_ACCESS_DESCRIPTION
// int d2i_ACCESS_DESCRIPTION(int *a1, char **a2, int a3);
// [0x19e9a40] (52 bytes) i2d_ACCESS_DESCRIPTION
// int i2d_ACCESS_DESCRIPTION(int a1, void **a2);
// [0x19e9d60] (60 bytes) d2i_AUTHORITY_INFO_ACCESS
// int d2i_AUTHORITY_INFO_ACCESS(int *a1, char **a2, int a3);
// [0x19e9da0] (52 bytes) i2d_AUTHORITY_INFO_ACCESS
// int i2d_AUTHORITY_INFO_ACCESS(int a1, void **a2);
// [0x19eb350] (48 bytes) X509_PURPOSE_get_count
// int X509_PURPOSE_get_count();
// [0x19eb380] (75 bytes) X509_PURPOSE_get0
// char *X509_PURPOSE_get0(int a1);
// [0x19eb3d0] (86 bytes) X509_PURPOSE_get_by_sname
// int X509_PURPOSE_get_by_sname(char *s2);
// [0x19eb430] (79 bytes) X509_PURPOSE_get_by_id
// int X509_PURPOSE_get_by_id(int a1);
// [0x19eb480] (114 bytes) X509_PURPOSE_set
// int X509_PURPOSE_set(int *a1, int a2);
// [0x19eb500] (441 bytes) X509_PURPOSE_add
// int X509_PURPOSE_add(int a1, int a2, int a3, int a4, char *a5, char *a6, int a7);
// [0x19eb6c0] (95 bytes) X509_PURPOSE_cleanup
// void X509_PURPOSE_cleanup();
// [0x19eb720] (11 bytes) X509_PURPOSE_get_id
// int X509_PURPOSE_get_id(int a1);
// [0x19eb730] (12 bytes) X509_PURPOSE_get0_name
// int X509_PURPOSE_get0_name(int a1);
// [0x19eb740] (12 bytes) X509_PURPOSE_get0_sname
// int X509_PURPOSE_get0_sname(int a1);
// [0x19eb750] (12 bytes) X509_PURPOSE_get_trust
// int X509_PURPOSE_get_trust(int a1);
// [0x19eb760] (110 bytes) X509_supported_extension
// bool X509_supported_extension(int a1);
// [0x19ebde0] (226 bytes) X509_check_purpose
// int X509_check_purpose(int a1, int a2, int a3);
// [0x19ebed0] (153 bytes) X509_check_ca
// int X509_check_ca(int a1);
// [0x19ebf70] (234 bytes) X509_check_akid
// int X509_check_akid(int a1, uint32_t *a2);
// [0x19ec060] (226 bytes) X509_check_issued
// int X509_check_issued(int a1, int a2);
// [0x19ed340] (44 bytes) X509_email_free
// int X509_email_free(void **a1);
// [0x19ed500] (153 bytes) X509_REQ_get1_email
// void **X509_REQ_get1_email(int a1);
// [0x19ed5a0] (119 bytes) X509_get1_email
// void **X509_get1_email(int a1);
// [0x19ed620] (177 bytes) X509_get1_ocsp
// void **X509_get1_ocsp(int a1);
// [0x19edb60] (90 bytes) ERR_load_X509V3_strings
// int ERR_load_X509V3_strings();
// [0x19edbc0] (90 bytes) ERR_load_CRYPTO_strings
// int ERR_load_CRYPTO_strings();
// [0x19edc20] (156 bytes) AES_cbc_encrypt
// int AES_cbc_encrypt(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x19edcc0] (92 bytes) AES_cfb128_encrypt
// int AES_cfb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x19edd20] (92 bytes) AES_cfb1_encrypt
// int AES_cfb1_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x19edd80] (92 bytes) AES_cfb8_encrypt
// int AES_cfb8_encrypt(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x19edde0] (1218 bytes) AES_set_encrypt_key
// int AES_set_encrypt_key(uint8_t *a1, int a2, int *a3);
// [0x19ee2b0] (605 bytes) AES_set_decrypt_key
// int AES_set_decrypt_key(uint8_t *a1, int a2, int *a3);
// [0x19ee510] (1249 bytes) AES_encrypt
// int AES_encrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3);
// [0x19eea00] (1225 bytes) AES_decrypt
// int AES_decrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3);
// [0x19eeed0] (75 bytes) AES_ecb_encrypt
// int AES_ecb_encrypt(uint8_t *a1, uint8_t *a2, uint32_t *a3, int a4);
// [0x19eef20] (84 bytes) AES_ofb128_encrypt
// int AES_ofb128_encrypt(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x19eef80] (50 bytes) ASN1_BIT_STRING_set
// int ASN1_BIT_STRING_set(int a1, char *s, size_t a3);
// [0x19ef2b0] (436 bytes) ASN1_BIT_STRING_set_bit
// int ASN1_BIT_STRING_set_bit(int *a1, int a2, int a3);
// [0x19ef470] (60 bytes) ASN1_BIT_STRING_get_bit
// bool ASN1_BIT_STRING_get_bit(int *a1, int a2);
// [0x19ef4b0] (83 bytes) ASN1_BIT_STRING_check
// int ASN1_BIT_STRING_check(int *a1, int a2, int a3);
// [0x19ef7c0] (105 bytes) ASN1_d2i_bio
// int ASN1_d2i_bio(int a1, int (*a2)(int, uint32_t *, int), uint32_t *a3, int a4);
// [0x19ef830] (194 bytes) ASN1_d2i_fp
// int ASN1_d2i_fp(int a1, int (*a2)(int, uint32_t *, int), int a3, int a4);
// [0x19ef900] (114 bytes) ASN1_item_d2i_bio
// int ASN1_item_d2i_bio(int a1, uint32_t *a2, int *a3);
// [0x19ef980] (186 bytes) ASN1_item_d2i_fp
// int ASN1_item_d2i_fp(int a1, int a2, int *a3);
// [0x19efa40] (236 bytes) ASN1_digest
// int ASN1_digest(int (*a1)(int, uint8_t **), uint32_t *a2, int a3, int a4, uint32_t *a5);
// [0x19efb30] (131 bytes) ASN1_item_digest
// int ASN1_item_digest(int a1, uint32_t *a2, int a3, int a4, uint32_t *a5);
// [0x19efbc0] (226 bytes) ASN1_dup
// int ASN1_dup(int (*a1)(int, uint8_t **), int (*a2)(uint32_t, void **, int), int a3);
// [0x19efcb0] (192 bytes) ASN1_item_dup
// int ASN1_item_dup(int a1, int a2);
// [0x19efd70] (371 bytes) ASN1_ENUMERATED_set
// int ASN1_ENUMERATED_set(int a1, int a2);
// [0x19efef0] (103 bytes) ASN1_ENUMERATED_get
// int ASN1_ENUMERATED_get(int *a1);
// [0x19eff60] (362 bytes) BN_to_ASN1_ENUMERATED
// void **BN_to_ASN1_ENUMERATED(uint32_t *a1, void **a2);
// [0x19f00d0] (176 bytes) ASN1_ENUMERATED_to_BN
// void **ASN1_ENUMERATED_to_BN(int a1, void **a2);
// [0x19f0180] (540 bytes) ASN1_GENERALIZEDTIME_check
// int ASN1_GENERALIZEDTIME_check(int *a1);
// [0x19f03a0] (137 bytes) ASN1_GENERALIZEDTIME_set_string
// int ASN1_GENERALIZEDTIME_set_string(int a1, char *s);
// [0x19f0430] (438 bytes) ASN1_GENERALIZEDTIME_adj
// size_t *ASN1_GENERALIZEDTIME_adj(size_t *a1, time_t a2, int a3, int a4);
// [0x19f05f0] (58 bytes) ASN1_GENERALIZEDTIME_set
// size_t *ASN1_GENERALIZEDTIME_set(size_t *a1, time_t a2);
// [0x19f0630] (233 bytes) ASN1_i2d_bio
// int ASN1_i2d_bio(int (*a1)(int, uint8_t **), uint32_t *a2, int a3);
// [0x19f0720] (186 bytes) ASN1_i2d_fp
// int ASN1_i2d_fp(int (*a1)(int, uint8_t **), int a2, int a3);
// [0x19f07e0] (198 bytes) ASN1_item_i2d_bio
// int ASN1_item_i2d_bio(int a1, uint32_t *a2, int a3);
// [0x19f08b0] (186 bytes) ASN1_item_i2d_fp
// int ASN1_item_i2d_fp(int a1, int a2, int a3);
// [0x19f0970] (192 bytes) i2d_ASN1_OBJECT
// int i2d_ASN1_OBJECT(int a1, void **a2);
// [0x19f11d0] (161 bytes) ASN1_OBJECT_new
// uint32_t *ASN1_OBJECT_new();
// [0x19f1280] (144 bytes) ASN1_OBJECT_free
// void ASN1_OBJECT_free(void *a1);
// [0x19f14f0] (207 bytes) d2i_ASN1_OBJECT
// uint32_t *d2i_ASN1_OBJECT(uint32_t **a1, int *a2, int a3);
// [0x19f15c0] (82 bytes) ASN1_OBJECT_create
// size_t *ASN1_OBJECT_create(int a1, int a2, int a3, int a4, int a5);
// [0x19f1620] (34 bytes) ASN1_OCTET_STRING_dup
// void **ASN1_OCTET_STRING_dup(int a1);
// [0x19f1650] (42 bytes) ASN1_OCTET_STRING_cmp
// int ASN1_OCTET_STRING_cmp(int a1, int a2);
// [0x19f1680] (50 bytes) ASN1_OCTET_STRING_set
// int ASN1_OCTET_STRING_set(int a1, char *s, size_t a3);
// [0x19f16c0] (792 bytes) ASN1_sign
// int ASN1_sign( int (*a1)(int, uint8_t **), int a2, int a3, int a4, int a5, uint32_t *a6, uint32_t *a7);
// [0x19f19e0] (871 bytes) ASN1_item_sign
// int ASN1_item_sign(int a1, int a2, int a3, int a4, int a5, uint32_t *a6, int a7);
// [0x19f2bd0] (109 bytes) X509_NAME_print_ex
// int X509_NAME_print_ex(int a1, int a2, int a3, unsigned int a4);
// [0x19f2c40] (178 bytes) X509_NAME_print_ex_fp
// int X509_NAME_print_ex_fp(int a1, int a2, int a3, unsigned int a4);
// [0x19f2d00] (34 bytes) ASN1_STRING_print_ex
// int ASN1_STRING_print_ex(int a1, int a2, int16_t a3);
// [0x19f2d30] (34 bytes) ASN1_STRING_print_ex_fp
// int ASN1_STRING_print_ex_fp(int a1, int a2, int16_t a3);
// [0x19f2d60] (137 bytes) ASN1_STRING_to_UTF8
// int ASN1_STRING_to_UTF8(uint32_t *a1, size_t *a2);
// [0x19f2e50] (24 bytes) ASN1_STRING_set_default_mask
// int ASN1_STRING_set_default_mask(int a1);
// [0x19f2e70] (22 bytes) ASN1_STRING_get_default_mask
// int ASN1_STRING_get_default_mask();
// [0x19f2e90] (300 bytes) ASN1_STRING_set_default_mask_asc
// int ASN1_STRING_set_default_mask_asc(const char *a1);
// [0x19f2fc0] (160 bytes) ASN1_STRING_TABLE_get
// int ASN1_STRING_TABLE_get(int a1);
// [0x19f3060] (209 bytes) ASN1_STRING_set_by_NID
// int ASN1_STRING_set_by_NID(int *a1, char *a2, size_t a3, int a4, int a5);
// [0x19f3140] (326 bytes) ASN1_STRING_TABLE_add
// int ASN1_STRING_TABLE_add(int a1, int a2, int a3, int a4, int a5);
// [0x19f3290] (60 bytes) ASN1_STRING_TABLE_cleanup
// void **ASN1_STRING_TABLE_cleanup();
// [0x19f32d0] (60 bytes) d2i_ASN1_TIME
// int d2i_ASN1_TIME(int *a1, char **a2, int a3);
// [0x19f3310] (52 bytes) i2d_ASN1_TIME
// int i2d_ASN1_TIME(int a1, void **a2);
// [0x19f3350] (36 bytes) ASN1_TIME_new
// int ASN1_TIME_new();
// [0x19f3380] (44 bytes) ASN1_TIME_free
// int ASN1_TIME_free(char a1);
// [0x19f33b0] (220 bytes) ASN1_TIME_adj
// size_t *ASN1_TIME_adj(size_t *a1, time_t a2, int a3, int a4);
// [0x19f3490] (58 bytes) ASN1_TIME_set
// size_t *ASN1_TIME_set(size_t *a1, time_t a2);
// [0x19f34d0] (74 bytes) ASN1_TIME_check
// int ASN1_TIME_check(int *a1);
// [0x19f3520] (284 bytes) ASN1_TIME_to_generalizedtime
// int ASN1_TIME_to_generalizedtime(int a1, int *a2);
// [0x19f3640] (162 bytes) ASN1_TIME_set_string
// bool ASN1_TIME_set_string(int a1, char *s);
// [0x19f36f0] (29 bytes) ASN1_TYPE_get
// int ASN1_TYPE_get(uint32_t *a1);
// [0x19f3710] (125 bytes) ASN1_TYPE_set
// uint32_t *ASN1_TYPE_set(uint32_t *a1, int a2, int a3);
// [0x19f3790] (150 bytes) ASN1_TYPE_set1
// int ASN1_TYPE_set1(uint32_t *a1, int a2, int a3);
// [0x19f3830] (127 bytes) ASN1_TYPE_cmp
// int ASN1_TYPE_cmp(int *a1, uint32_t *a2);
// [0x19f38b0] (381 bytes) ASN1_UTCTIME_check
// int ASN1_UTCTIME_check(int *a1);
// [0x19f3a30] (137 bytes) ASN1_UTCTIME_set_string
// int ASN1_UTCTIME_set_string(int a1, char *s);
// [0x19f3ac0] (478 bytes) ASN1_UTCTIME_adj
// size_t *ASN1_UTCTIME_adj(size_t *a1, time_t a2, int a3, int a4);
// [0x19f3ca0] (58 bytes) ASN1_UTCTIME_set
// size_t *ASN1_UTCTIME_set(size_t *a1, time_t a2);
// [0x19f3ce0] (464 bytes) ASN1_UTCTIME_cmp_time_t
// bool ASN1_UTCTIME_cmp_time_t(int a1, time_t a2);
// [0x19f4430] (444 bytes) ASN1_verify
// int ASN1_verify(int (*a1)(int, uint8_t **), int *a2, int *a3, int a4, uint32_t *a5);
// [0x19f45f0] (656 bytes) ASN1_item_verify
// int ASN1_item_verify(int a1, int *a2, int *a3, int a4, int a5);
// [0x19f4880] (90 bytes) ERR_load_ASN1_strings
// int ERR_load_ASN1_strings();
// [0x19f48e0] (61 bytes) ASN1_tag2str
// const char *ASN1_tag2str(unsigned int a1);
// [0x19f54b0] (61 bytes) ASN1_parse_dump
// int ASN1_parse_dump(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x19f54f0] (61 bytes) ASN1_parse
// int ASN1_parse(uint32_t *a1, int a2, int a3, int a4);
// [0x19f5530] (126 bytes) ASN1_TYPE_set_octetstring
// int ASN1_TYPE_set_octetstring(uint32_t *a1, char *s, size_t a3);
// [0x19f55b0] (141 bytes) ASN1_TYPE_get_octetstring
// int ASN1_TYPE_get_octetstring(uint32_t *a1, void *dest, int a3);
// [0x19f5640] (454 bytes) ASN1_TYPE_set_int_octetstring
// int ASN1_TYPE_set_int_octetstring(uint32_t *a1, int a2, int a3, int a4);
// [0x19f5810] (528 bytes) ASN1_TYPE_get_int_octetstring
// int ASN1_TYPE_get_int_octetstring(uint32_t *a1, int *a2, void *dest, int a4);
// [0x19f5a20] (181 bytes) i2d_PrivateKey
// int i2d_PrivateKey(int a1, int a2);
// [0x19f5b30] (60 bytes) d2i_NETSCAPE_CERT_SEQUENCE
// int d2i_NETSCAPE_CERT_SEQUENCE(int *a1, char **a2, int a3);
// [0x19f5b70] (52 bytes) i2d_NETSCAPE_CERT_SEQUENCE
// int i2d_NETSCAPE_CERT_SEQUENCE(int a1, void **a2);
// [0x19f5c10] (607 bytes) ASN1_bn_print
// bool ASN1_bn_print(uint32_t *a1, int a2, uint32_t **a3, uint8_t *a4, int a5);
// [0x19f5e70] (468 bytes) X509_ocspid_print
// int X509_ocspid_print(int a1, int a2, int a3, int a4);
// [0x19f6050] (307 bytes) X509_signature_print
// bool X509_signature_print(uint32_t *a1, int *a2, int *a3);
// [0x19f6190] (227 bytes) ASN1_STRING_print
// bool ASN1_STRING_print(uint32_t *a1, int *a2);
// [0x19f6280] (628 bytes) ASN1_GENERALIZEDTIME_print
// bool ASN1_GENERALIZEDTIME_print(uint32_t *a1, int *a2);
// [0x19f6500] (409 bytes) ASN1_UTCTIME_print
// bool ASN1_UTCTIME_print(uint32_t *a1, int *a2);
// [0x19f66a0] (110 bytes) ASN1_TIME_print
// bool ASN1_TIME_print(uint32_t *a1, int *a2);
// [0x19f6710] (1777 bytes) X509_print_ex
// bool X509_print_ex(uint32_t *a1, int a2, unsigned int a3, int a4);
// [0x19f6e10] (58 bytes) X509_print
// bool X509_print(uint32_t *a1, int a2);
// [0x19f6e50] (194 bytes) X509_print_ex_fp
// bool X509_print_ex_fp(int a1, int a2, unsigned int a3, int a4);
// [0x19f6f20] (58 bytes) X509_print_fp
// bool X509_print_fp(int a1, int a2);
// [0x19f6f60] (376 bytes) X509_NAME_print
// int X509_NAME_print(uint32_t *a1, int **a2);
// [0x19f70e0] (870 bytes) X509_CERT_AUX_print
// int X509_CERT_AUX_print(uint32_t *a1, int a2, int a3);
// [0x19f75b0] (154 bytes) ASN1_PCTX_new
// uint32_t *ASN1_PCTX_new();
// [0x19f7650] (34 bytes) ASN1_PCTX_free
// int ASN1_PCTX_free(void *a1);
// [0x19f7680] (11 bytes) ASN1_PCTX_get_flags
// int ASN1_PCTX_get_flags(int a1);
// [0x19f7690] (13 bytes) ASN1_PCTX_set_flags
// uint32_t *ASN1_PCTX_set_flags(uint32_t *a1, int a2);
