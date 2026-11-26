#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_crypto_ssl_part02.h
// Library: openssl | Module: openssl_crypto_ssl_part02
// Binary Address Span: 0x198b690 .. 0x19afc80 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x198b690] (44 bytes) ASN1_BIT_STRING_free
// int ASN1_BIT_STRING_free(char a1);
// [0x198b6c0] (60 bytes) d2i_ASN1_OCTET_STRING
// int d2i_ASN1_OCTET_STRING(int *a1, char **a2, int a3);
// [0x198b700] (52 bytes) i2d_ASN1_OCTET_STRING
// int i2d_ASN1_OCTET_STRING(int a1, void **a2);
// [0x198b740] (36 bytes) ASN1_OCTET_STRING_new
// int ASN1_OCTET_STRING_new();
// [0x198b770] (44 bytes) ASN1_OCTET_STRING_free
// int ASN1_OCTET_STRING_free(char a1);
// [0x198b7a0] (60 bytes) d2i_ASN1_NULL
// int d2i_ASN1_NULL(int *a1, char **a2, int a3);
// [0x198b7e0] (52 bytes) i2d_ASN1_NULL
// int i2d_ASN1_NULL(int a1, void **a2);
// [0x198b820] (36 bytes) ASN1_NULL_new
// int ASN1_NULL_new();
// [0x198b850] (44 bytes) ASN1_NULL_free
// int ASN1_NULL_free(char a1);
// [0x198b880] (60 bytes) d2i_ASN1_UTF8STRING
// int d2i_ASN1_UTF8STRING(int *a1, char **a2, int a3);
// [0x198b8c0] (52 bytes) i2d_ASN1_UTF8STRING
// int i2d_ASN1_UTF8STRING(int a1, void **a2);
// [0x198b900] (36 bytes) ASN1_UTF8STRING_new
// int ASN1_UTF8STRING_new();
// [0x198b930] (44 bytes) ASN1_UTF8STRING_free
// int ASN1_UTF8STRING_free(char a1);
// [0x198b960] (60 bytes) d2i_ASN1_PRINTABLESTRING
// int d2i_ASN1_PRINTABLESTRING(int *a1, char **a2, int a3);
// [0x198b9a0] (52 bytes) i2d_ASN1_PRINTABLESTRING
// int i2d_ASN1_PRINTABLESTRING(int a1, void **a2);
// [0x198b9e0] (36 bytes) ASN1_PRINTABLESTRING_new
// int ASN1_PRINTABLESTRING_new();
// [0x198ba10] (44 bytes) ASN1_PRINTABLESTRING_free
// int ASN1_PRINTABLESTRING_free(char a1);
// [0x198ba40] (60 bytes) d2i_ASN1_T61STRING
// int d2i_ASN1_T61STRING(int *a1, char **a2, int a3);
// [0x198ba80] (52 bytes) i2d_ASN1_T61STRING
// int i2d_ASN1_T61STRING(int a1, void **a2);
// [0x198bac0] (36 bytes) ASN1_T61STRING_new
// int ASN1_T61STRING_new();
// [0x198baf0] (44 bytes) ASN1_T61STRING_free
// int ASN1_T61STRING_free(char a1);
// [0x198bb20] (60 bytes) d2i_ASN1_IA5STRING
// int d2i_ASN1_IA5STRING(int *a1, char **a2, int a3);
// [0x198bb60] (52 bytes) i2d_ASN1_IA5STRING
// int i2d_ASN1_IA5STRING(int a1, void **a2);
// [0x198bba0] (36 bytes) ASN1_IA5STRING_new
// int ASN1_IA5STRING_new();
// [0x198bbd0] (44 bytes) ASN1_IA5STRING_free
// int ASN1_IA5STRING_free(char a1);
// [0x198bc00] (60 bytes) d2i_ASN1_GENERALSTRING
// int d2i_ASN1_GENERALSTRING(int *a1, char **a2, int a3);
// [0x198bc40] (52 bytes) i2d_ASN1_GENERALSTRING
// int i2d_ASN1_GENERALSTRING(int a1, void **a2);
// [0x198bc80] (36 bytes) ASN1_GENERALSTRING_new
// int ASN1_GENERALSTRING_new();
// [0x198bcb0] (44 bytes) ASN1_GENERALSTRING_free
// int ASN1_GENERALSTRING_free(char a1);
// [0x198bce0] (60 bytes) d2i_ASN1_UTCTIME
// int d2i_ASN1_UTCTIME(int *a1, char **a2, int a3);
// [0x198bd20] (52 bytes) i2d_ASN1_UTCTIME
// int i2d_ASN1_UTCTIME(int a1, void **a2);
// [0x198bd60] (36 bytes) ASN1_UTCTIME_new
// int ASN1_UTCTIME_new();
// [0x198bd90] (44 bytes) ASN1_UTCTIME_free
// int ASN1_UTCTIME_free(char a1);
// [0x198bdc0] (60 bytes) d2i_ASN1_GENERALIZEDTIME
// int d2i_ASN1_GENERALIZEDTIME(int *a1, char **a2, int a3);
// [0x198be00] (52 bytes) i2d_ASN1_GENERALIZEDTIME
// int i2d_ASN1_GENERALIZEDTIME(int a1, void **a2);
// [0x198be40] (36 bytes) ASN1_GENERALIZEDTIME_new
// int ASN1_GENERALIZEDTIME_new();
// [0x198be70] (44 bytes) ASN1_GENERALIZEDTIME_free
// int ASN1_GENERALIZEDTIME_free(char a1);
// [0x198bea0] (60 bytes) d2i_ASN1_VISIBLESTRING
// int d2i_ASN1_VISIBLESTRING(int *a1, char **a2, int a3);
// [0x198bee0] (52 bytes) i2d_ASN1_VISIBLESTRING
// int i2d_ASN1_VISIBLESTRING(int a1, void **a2);
// [0x198bf20] (36 bytes) ASN1_VISIBLESTRING_new
// int ASN1_VISIBLESTRING_new();
// [0x198bf50] (44 bytes) ASN1_VISIBLESTRING_free
// int ASN1_VISIBLESTRING_free(char a1);
// [0x198bf80] (60 bytes) d2i_ASN1_UNIVERSALSTRING
// int d2i_ASN1_UNIVERSALSTRING(int *a1, char **a2, int a3);
// [0x198bfc0] (52 bytes) i2d_ASN1_UNIVERSALSTRING
// int i2d_ASN1_UNIVERSALSTRING(int a1, void **a2);
// [0x198c000] (36 bytes) ASN1_UNIVERSALSTRING_new
// int ASN1_UNIVERSALSTRING_new();
// [0x198c030] (44 bytes) ASN1_UNIVERSALSTRING_free
// int ASN1_UNIVERSALSTRING_free(char a1);
// [0x198c060] (60 bytes) d2i_ASN1_BMPSTRING
// int d2i_ASN1_BMPSTRING(int *a1, char **a2, int a3);
// [0x198c0a0] (52 bytes) i2d_ASN1_BMPSTRING
// int i2d_ASN1_BMPSTRING(int a1, void **a2);
// [0x198c0e0] (36 bytes) ASN1_BMPSTRING_new
// int ASN1_BMPSTRING_new();
// [0x198c110] (44 bytes) ASN1_BMPSTRING_free
// int ASN1_BMPSTRING_free(char a1);
// [0x198c140] (60 bytes) d2i_ASN1_TYPE
// int d2i_ASN1_TYPE(int *a1, char **a2, int a3);
// [0x198c180] (52 bytes) i2d_ASN1_TYPE
// int i2d_ASN1_TYPE(int a1, void **a2);
// [0x198c1c0] (36 bytes) ASN1_TYPE_new
// int ASN1_TYPE_new();
// [0x198c1f0] (44 bytes) ASN1_TYPE_free
// int ASN1_TYPE_free(char a1);
// [0x198c220] (60 bytes) d2i_ASN1_PRINTABLE
// int d2i_ASN1_PRINTABLE(int *a1, char **a2, int a3);
// [0x198c260] (52 bytes) i2d_ASN1_PRINTABLE
// int i2d_ASN1_PRINTABLE(int a1, void **a2);
// [0x198c2a0] (36 bytes) ASN1_PRINTABLE_new
// int ASN1_PRINTABLE_new();
// [0x198c2d0] (44 bytes) ASN1_PRINTABLE_free
// int ASN1_PRINTABLE_free(char a1);
// [0x198c300] (60 bytes) d2i_DISPLAYTEXT
// int d2i_DISPLAYTEXT(int *a1, char **a2, int a3);
// [0x198c340] (52 bytes) i2d_DISPLAYTEXT
// int i2d_DISPLAYTEXT(int a1, void **a2);
// [0x198c3e0] (60 bytes) d2i_DIRECTORYSTRING
// int d2i_DIRECTORYSTRING(int *a1, char **a2, int a3);
// [0x198c420] (52 bytes) i2d_DIRECTORYSTRING
// int i2d_DIRECTORYSTRING(int a1, void **a2);
// [0x198c4c0] (60 bytes) d2i_ASN1_SEQUENCE_ANY
// int d2i_ASN1_SEQUENCE_ANY(int *a1, char **a2, int a3);
// [0x198c500] (52 bytes) i2d_ASN1_SEQUENCE_ANY
// int i2d_ASN1_SEQUENCE_ANY(int a1, void **a2);
// [0x198c540] (60 bytes) d2i_ASN1_SET_ANY
// int d2i_ASN1_SET_ANY(int *a1, char **a2, int a3);
// [0x198c580] (52 bytes) i2d_ASN1_SET_ANY
// int i2d_ASN1_SET_ANY(int a1, void **a2);
// [0x198c9b0] (60 bytes) d2i_X509_ALGOR
// int d2i_X509_ALGOR(int *a1, char **a2, int a3);
// [0x198c9f0] (52 bytes) i2d_X509_ALGOR
// int i2d_X509_ALGOR(int a1, void **a2);
// [0x198ca30] (36 bytes) X509_ALGOR_new
// int X509_ALGOR_new();
// [0x198ca60] (44 bytes) X509_ALGOR_free
// int X509_ALGOR_free(char a1);
// [0x198ca90] (60 bytes) d2i_X509_ALGORS
// int d2i_X509_ALGORS(int *a1, char **a2, int a3);
// [0x198cad0] (52 bytes) i2d_X509_ALGORS
// int i2d_X509_ALGORS(int a1, void **a2);
// [0x198cb10] (44 bytes) X509_ALGOR_dup
// int X509_ALGOR_dup(int a1);
// [0x198cb40] (182 bytes) X509_ALGOR_set0
// int X509_ALGOR_set0(int a1, int a2, int a3, int a4);
// [0x198cc00] (88 bytes) X509_ALGOR_get0
// uint32_t *X509_ALGOR_get0(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x198cc60] (60 bytes) d2i_X509_ATTRIBUTE
// int d2i_X509_ATTRIBUTE(int *a1, char **a2, int a3);
// [0x198cca0] (52 bytes) i2d_X509_ATTRIBUTE
// int i2d_X509_ATTRIBUTE(int a1, void **a2);
// [0x198cce0] (36 bytes) X509_ATTRIBUTE_new
// int X509_ATTRIBUTE_new();
// [0x198cd10] (44 bytes) X509_ATTRIBUTE_free
// int X509_ATTRIBUTE_free(char a1);
// [0x198cd40] (44 bytes) X509_ATTRIBUTE_dup
// int X509_ATTRIBUTE_dup(int a1);
// [0x198cd70] (186 bytes) X509_ATTRIBUTE_create
// uint32_t *X509_ATTRIBUTE_create(int a1, int a2, int a3);
// [0x198ce30] (60 bytes) d2i_X509_EXTENSION
// int d2i_X509_EXTENSION(int *a1, char **a2, int a3);
// [0x198ce70] (52 bytes) i2d_X509_EXTENSION
// int i2d_X509_EXTENSION(int a1, void **a2);
// [0x198ceb0] (36 bytes) X509_EXTENSION_new
// int X509_EXTENSION_new();
// [0x198cee0] (44 bytes) X509_EXTENSION_free
// int X509_EXTENSION_free(char a1);
// [0x198cf10] (60 bytes) d2i_X509_EXTENSIONS
// int d2i_X509_EXTENSIONS(int *a1, char **a2, int a3);
// [0x198cf50] (52 bytes) i2d_X509_EXTENSIONS
// int i2d_X509_EXTENSIONS(int a1, void **a2);
// [0x198cf90] (44 bytes) X509_EXTENSION_dup
// int X509_EXTENSION_dup(int a1);
// [0x198d280] (44 bytes) X509_NAME_ENTRY_free
// int X509_NAME_ENTRY_free(char a1);
// [0x198d2b0] (60 bytes) d2i_X509_NAME_ENTRY
// int d2i_X509_NAME_ENTRY(int *a1, char **a2, int a3);
// [0x198d2f0] (52 bytes) i2d_X509_NAME_ENTRY
// int i2d_X509_NAME_ENTRY(int a1, void **a2);
// [0x198d330] (36 bytes) X509_NAME_ENTRY_new
// int X509_NAME_ENTRY_new();
// [0x198db00] (44 bytes) X509_NAME_ENTRY_dup
// int X509_NAME_ENTRY_dup(int a1);
// [0x198db30] (60 bytes) d2i_X509_NAME
// int d2i_X509_NAME(int *a1, char **a2, int a3);
// [0x198db70] (52 bytes) i2d_X509_NAME
// int i2d_X509_NAME(int a1, void **a2);
// [0x198dbb0] (36 bytes) X509_NAME_new
// int X509_NAME_new();
// [0x198dbe0] (44 bytes) X509_NAME_free
// int X509_NAME_free(char a1);
// [0x198dc10] (44 bytes) X509_NAME_dup
// int X509_NAME_dup(int a1);
// [0x198dc40] (116 bytes) X509_NAME_set
// bool X509_NAME_set(int *a1, int a2);
// [0x198de30] (60 bytes) d2i_X509_CINF
// int d2i_X509_CINF(int *a1, char **a2, int a3);
// [0x198de70] (52 bytes) i2d_X509_CINF
// int i2d_X509_CINF(int a1, void **a2);
// [0x198deb0] (36 bytes) X509_CINF_new
// int X509_CINF_new();
// [0x198dee0] (44 bytes) X509_CINF_free
// int X509_CINF_free(char a1);
// [0x198df10] (60 bytes) d2i_X509
// int d2i_X509(int *a1, char **a2, int a3);
// [0x198df50] (52 bytes) i2d_X509
// int i2d_X509(int a1, void **a2);
// [0x198df90] (36 bytes) X509_new
// int X509_new();
// [0x198dfc0] (44 bytes) X509_free
// int X509_free(char a1);
// [0x198dff0] (44 bytes) X509_dup
// int X509_dup(int a1);
// [0x198e020] (74 bytes) X509_get_ex_new_index
// int X509_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x198e070] (53 bytes) X509_set_ex_data
// int X509_set_ex_data(int a1, int a2, int a3);
// [0x198e0b0] (45 bytes) X509_get_ex_data
// int X509_get_ex_data(int a1, int a2);
// [0x198e0e0] (139 bytes) d2i_X509_AUX
// int d2i_X509_AUX(int *a1, char **a2, int a3);
// [0x198e170] (97 bytes) i2d_X509_AUX
// int i2d_X509_AUX(int a1, void **a2);
// [0x198e1e0] (60 bytes) d2i_X509_CERT_AUX
// int d2i_X509_CERT_AUX(int *a1, char **a2, int a3);
// [0x198e220] (52 bytes) i2d_X509_CERT_AUX
// int i2d_X509_CERT_AUX(int a1, void **a2);
// [0x198e260] (36 bytes) X509_CERT_AUX_new
// int X509_CERT_AUX_new();
// [0x198e2e0] (44 bytes) X509_CERT_AUX_free
// int X509_CERT_AUX_free(char a1);
// [0x198e310] (182 bytes) X509_alias_set1
// int X509_alias_set1(int a1, char *s, size_t a3);
// [0x198e3d0] (182 bytes) X509_keyid_set1
// int X509_keyid_set1(int a1, char *s, size_t a3);
// [0x198e490] (51 bytes) X509_alias_get0
// int X509_alias_get0(int a1, uint32_t *a2);
// [0x198e4d0] (51 bytes) X509_keyid_get0
// int X509_keyid_get0(int a1, uint32_t *a2);
// [0x198e510] (126 bytes) X509_add1_trust_object
// int X509_add1_trust_object(int a1, int a2);
// [0x198e590] (126 bytes) X509_add1_reject_object
// int X509_add1_reject_object(int a1, int a2);
// [0x198e610] (80 bytes) X509_trust_clear
// uint32_t *X509_trust_clear(int a1);
// [0x198e660] (82 bytes) X509_reject_clear
// uint32_t *X509_reject_clear(int a1);
// [0x198e6c0] (60 bytes) d2i_X509_CERT_PAIR
// int d2i_X509_CERT_PAIR(int *a1, char **a2, int a3);
// [0x198e700] (52 bytes) i2d_X509_CERT_PAIR
// int i2d_X509_CERT_PAIR(int a1, void **a2);
// [0x198e740] (36 bytes) X509_CERT_PAIR_new
// int X509_CERT_PAIR_new();
// [0x198e770] (44 bytes) X509_CERT_PAIR_free
// int X509_CERT_PAIR_free(char a1);
// [0x198f910] (232 bytes) BIO_vprintf
// int BIO_vprintf(int a1, int a2, int a3, char *a4, unsigned int *a5);
// [0x198fa00] (50 bytes) BIO_printf
// int BIO_printf(int a1, int a2, int a3, char *a4, ...);
// [0x198fa40] (83 bytes) BIO_vsnprintf
// int BIO_vsnprintf(const void *a1, int a2, char *a3, unsigned int *a4);
// [0x198faa0] (58 bytes) BIO_snprintf
// int BIO_snprintf(const void *a1, int a2, char *a3, ...);
// [0x19906b0] (22 bytes) BIO_f_buffer
// void *BIO_f_buffer();
// [0x19906d0] (225 bytes) BIO_set
// int BIO_set(uint32_t *a1, int a2);
// [0x19907c0] (162 bytes) BIO_new
// uint8_t *BIO_new(int a1);
// [0x1990870] (229 bytes) BIO_free
// int BIO_free(uint32_t *a1);
// [0x1990960] (34 bytes) BIO_vfree
// int BIO_vfree(uint32_t *a1);
// [0x1990990] (14 bytes) BIO_clear_flags
// int BIO_clear_flags(int a1, int a2);
// [0x19909a0] (14 bytes) BIO_test_flags
// int BIO_test_flags(int a1, int a2);
// [0x19909b0] (14 bytes) BIO_set_flags
// int BIO_set_flags(int a1, int a2);
// [0x19909c0] (12 bytes) BIO_get_callback
// int BIO_get_callback(int a1);
// [0x19909d0] (14 bytes) BIO_set_callback
// int BIO_set_callback(int a1, int a2);
// [0x19909e0] (14 bytes) BIO_set_callback_arg
// int BIO_set_callback_arg(int a1, int a2);
// [0x19909f0] (12 bytes) BIO_get_callback_arg
// int BIO_get_callback_arg(int a1);
// [0x1990a00] (12 bytes) BIO_method_name
// int BIO_method_name(int a1);
// [0x1990a10] (11 bytes) BIO_method_type
// int BIO_method_type(int a1);
// [0x1990a20] (328 bytes) BIO_read
// int BIO_read(uint32_t *a1, int a2, int a3);
// [0x1990b70] (333 bytes) BIO_write
// int BIO_write(uint32_t *a1, int a2, int a3);
// [0x1990cc0] (320 bytes) BIO_puts
// int BIO_puts(uint32_t *a1, int a2);
// [0x1990e00] (328 bytes) BIO_gets
// int BIO_gets(uint32_t *a1, int a2, int a3);
// [0x1990f50] (110 bytes) BIO_indent
// int BIO_indent(uint32_t *a1, int a2, int a3);
// [0x1990fc0] (296 bytes) BIO_ctrl
// int BIO_ctrl(uint32_t *a1, int a2, int a3, int a4);
// [0x19910f0] (77 bytes) BIO_ptr_ctrl
// int BIO_ptr_ctrl(uint32_t *a1, int a2, int a3);
// [0x1991140] (66 bytes) BIO_int_ctrl
// int BIO_int_ctrl(uint32_t *a1, int a2, int a3, int a4);
// [0x1991190] (272 bytes) BIO_callback_ctrl
// int BIO_callback_ctrl(uint32_t *a1, int a2, int a3);
// [0x19912a0] (58 bytes) BIO_ctrl_pending
// int BIO_ctrl_pending(uint32_t *a1);
// [0x19912e0] (58 bytes) BIO_ctrl_wpending
// int BIO_ctrl_wpending(uint32_t *a1);
// [0x1991320] (96 bytes) BIO_push
// uint32_t *BIO_push(uint32_t *a1, uint32_t *a2);
// [0x1991380] (127 bytes) BIO_pop
// int BIO_pop(uint32_t *a1);
// [0x1991400] (84 bytes) BIO_get_retry_BIO
// int BIO_get_retry_BIO(int a1, uint32_t *a2);
// [0x1991460] (12 bytes) BIO_get_retry_reason
// int BIO_get_retry_reason(int a1);
// [0x1991470] (58 bytes) BIO_find_type
// int *BIO_find_type(int **a1, int a2);
// [0x19914b0] (19 bytes) BIO_next
// int BIO_next(int a1);
// [0x19914d0] (65 bytes) BIO_free_all
// uint32_t *BIO_free_all(uint32_t *a1);
// [0x1991520] (289 bytes) BIO_dup_chain
// uint32_t *BIO_dup_chain(int *a1);
// [0x1991650] (80 bytes) BIO_copy_next_retry
// int BIO_copy_next_retry(int a1);
// [0x19916a0] (74 bytes) BIO_get_ex_new_index
// int BIO_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x19916f0] (53 bytes) BIO_set_ex_data
// int BIO_set_ex_data(int a1, int a2, int a3);
// [0x1991730] (45 bytes) BIO_get_ex_data
// int BIO_get_ex_data(int a1, int a2);
// [0x1991760] (14 bytes) BIO_number_read
// int BIO_number_read(int a1);
// [0x1991770] (14 bytes) BIO_number_written
// int BIO_number_written(int a1);
// [0x1992180] (22 bytes) BIO_s_bio
// void *BIO_s_bio();
// [0x19921a0] (279 bytes) BIO_new_bio_pair
// int BIO_new_bio_pair(uint32_t *a1, int a2, uint32_t *a3, int a4);
// [0x19922c0] (58 bytes) BIO_ctrl_get_write_guarantee
// int BIO_ctrl_get_write_guarantee(uint32_t *a1);
// [0x1992300] (58 bytes) BIO_ctrl_get_read_request
// int BIO_ctrl_get_read_request(uint32_t *a1);
// [0x1992340] (66 bytes) BIO_ctrl_reset_read_request
// bool BIO_ctrl_reset_read_request(uint32_t *a1);
// [0x1992390] (125 bytes) BIO_nread0
// int BIO_nread0(uint32_t *a1, int a2);
// [0x1992410] (141 bytes) BIO_nread
// int BIO_nread(uint32_t *a1, int a2, int a3);
// [0x19924a0] (125 bytes) BIO_nwrite0
// int BIO_nwrite0(uint32_t *a1, int a2);
// [0x1992520] (141 bytes) BIO_nwrite
// int BIO_nwrite(uint32_t *a1, int a2, int a3);
// [0x1992bc0] (22 bytes) BIO_s_file
// void *BIO_s_file();
// [0x1992be0] (105 bytes) BIO_new_fp
// uint32_t *BIO_new_fp(int a1, int a2);
// [0x1992c50] (365 bytes) BIO_new_file
// uint32_t *BIO_new_file(char *filename, char *modes);
// [0x19932f0] (22 bytes) BIO_s_mem
// void *BIO_s_mem();
// [0x1993310] (166 bytes) BIO_new_mem_buf
// uint32_t *BIO_new_mem_buf(char *s, int a2);
// [0x1993540] (22 bytes) BIO_s_socket
// void *BIO_s_socket();
// [0x1993560] (89 bytes) BIO_new_socket
// uint8_t *BIO_new_socket(int a1, int a2);
// [0x19935c0] (58 bytes) BIO_sock_non_fatal_error
// int BIO_sock_non_fatal_error(int a1);
// [0x1993600] (61 bytes) BIO_sock_should_retry
// int BIO_sock_should_retry(int a1);
// [0x19937c0] (128 bytes) BN_CTX_init
// uint32_t *BN_CTX_init(uint32_t *a1);
// [0x1993840] (184 bytes) BN_CTX_new
// uint32_t *BN_CTX_new();
// [0x1993900] (134 bytes) BN_CTX_free
// int BN_CTX_free(void **a1);
// [0x1993990] (321 bytes) BN_CTX_start
// int BN_CTX_start(int a1);
// [0x1993ae0] (121 bytes) BN_CTX_end
// unsigned int BN_CTX_end(uint32_t *a1);
// [0x1993b60] (368 bytes) BN_CTX_get
// uint8_t *BN_CTX_get(int *a1);
// [0x1993e90] (194 bytes) BN_set_params
// int BN_set_params(int a1, int a2, int a3, int a4);
// [0x1993f60] (71 bytes) BN_get_params
// int BN_get_params(int a1);
// [0x1993fb0] (22 bytes) BN_value_one
// void **BN_value_one();
// [0x1993fd0] (106 bytes) BN_options
// void *BN_options();
// [0x1994040] (95 bytes) BN_num_bits_word
// int BN_num_bits_word(unsigned int a1);
// [0x19940a0] (70 bytes) BN_num_bits
// int BN_num_bits(uint32_t *a1);
// [0x19940f0] (135 bytes) BN_clear_free
// void *BN_clear_free(uint8_t **a1);
// [0x1994180] (116 bytes) BN_free
// void BN_free(void **a1);
// [0x1994200] (39 bytes) BN_init
// uint32_t *BN_init(uint32_t *a1);
// [0x1994230] (154 bytes) BN_new
// uint32_t *BN_new();
// [0x1994340] (306 bytes) BN_copy
// uint32_t *BN_copy(uint32_t *a1, uint32_t *a2);
// [0x1994480] (95 bytes) BN_dup
// void **BN_dup(uint32_t *a1);
// [0x1994580] (139 bytes) BN_swap
// int *BN_swap(int *a1, int *a2);
// [0x1994610] (86 bytes) BN_clear
// void *BN_clear(int a1);
// [0x1994670] (28 bytes) BN_get_word
// int BN_get_word(uint32_t *a1);
// [0x1994690] (112 bytes) BN_set_word
// int BN_set_word(uint32_t *a1, int a2);
// [0x1994700] (340 bytes) BN_bin2bn
// void **BN_bin2bn(uint8_t *a1, int a2, void **a3);
// [0x1994860] (128 bytes) BN_bn2bin
// int BN_bn2bin(uint32_t *a1, uint8_t *a2);
// [0x19948e0] (65 bytes) BN_ucmp
// int BN_ucmp(uint32_t *a1, uint32_t *a2);
// [0x1994930] (197 bytes) BN_cmp
// int BN_cmp(int *a1, uint32_t *a2);
// [0x1994a00] (185 bytes) BN_set_bit
// int BN_set_bit(uint32_t *a1, int a2);
// [0x1994ac0] (94 bytes) BN_clear_bit
// int BN_clear_bit(uint32_t *a1, int a2);
// [0x1994b20] (37 bytes) BN_is_bit_set
// int BN_is_bit_set(uint32_t *a1, int a2);
// [0x1994b50] (115 bytes) BN_mask_bits
// int BN_mask_bits(uint32_t *a1, int a2);
// [0x1994bd0] (28 bytes) BN_set_negative
// int64_t BN_set_negative(unsigned int a1, int a2);
// [0x1996100] (22 bytes) BIO_f_zlib
// void *BIO_f_zlib();
// [0x19963e0] (1319 bytes) CONF_modules_load
// int CONF_modules_load(int a1, int a2, char a3);
// [0x1996910] (130 bytes) CONF_modules_finish
// int CONF_modules_finish();
// [0x19969a0] (211 bytes) CONF_modules_unload
// int CONF_modules_unload(int a1);
// [0x1996a80] (43 bytes) CONF_module_add
// bool CONF_module_add(char *a1, int a2, int a3);
// [0x1996ab0] (39 bytes) CONF_modules_free
// int CONF_modules_free();
// [0x1996ae0] (12 bytes) CONF_imodule_get_name
// int CONF_imodule_get_name(int a1);
// [0x1996af0] (12 bytes) CONF_imodule_get_value
// int CONF_imodule_get_value(int a1);
// [0x1996b00] (12 bytes) CONF_imodule_get_usr_data
// int CONF_imodule_get_usr_data(int a1);
// [0x1996b10] (14 bytes) CONF_imodule_set_usr_data
// int CONF_imodule_set_usr_data(int a1, int a2);
// [0x1996b20] (11 bytes) CONF_imodule_get_module
// int CONF_imodule_get_module(int a1);
// [0x1996b30] (12 bytes) CONF_imodule_get_flags
// int CONF_imodule_get_flags(int a1);
// [0x1996b40] (14 bytes) CONF_imodule_set_flags
// int CONF_imodule_set_flags(int a1, int a2);
// [0x1996b50] (12 bytes) CONF_module_get_usr_data
// int CONF_module_get_usr_data(int a1);
// [0x1996b60] (14 bytes) CONF_module_set_usr_data
// int CONF_module_set_usr_data(int a1, int a2);
// [0x1996b70] (198 bytes) CONF_get1_default_config_file
// int CONF_get1_default_config_file();
// [0x1996c40] (261 bytes) CONF_modules_load_file
// int CONF_modules_load_file(void *a1, int a2, char a3);
// [0x1996d50] (321 bytes) CONF_parse_list
// int CONF_parse_list(char *a1, int c, int a3, int (*a4)(char *, int, int), int a5);
// [0x1996ea0] (130 bytes) DES_options
// void *DES_options();
// [0x1996f30] (188 bytes) DES_ecb_encrypt
// unsigned int DES_ecb_encrypt(uint8_t *a1, uint8_t *a2, int a3, int a4);
// [0x1996ff0] (49 bytes) DES_set_odd_parity
// int DES_set_odd_parity(int a1);
// [0x1997030] (61 bytes) DES_check_key_parity
// char DES_check_key_parity(int a1);
// [0x1997070] (102 bytes) DES_is_weak_key
// int DES_is_weak_key(void *s2);
// [0x19970e0] (609 bytes) DES_set_key_unchecked
// int DES_set_key_unchecked(uint8_t *a1, uint32_t *a2);
// [0x1997350] (94 bytes) DES_set_key_checked
// int DES_set_key_checked(void *a1, uint32_t *a2);
// [0x19973b0] (67 bytes) DES_set_key
// int DES_set_key(void *a1, uint32_t *a2);
// [0x1997400] (42 bytes) DES_key_sched
// int DES_key_sched(void *a1, uint32_t *a2);
// [0x1998240] (60 bytes) d2i_DHparams
// int d2i_DHparams(int *a1, char **a2, int a3);
// [0x1998280] (52 bytes) i2d_DHparams
// int i2d_DHparams(int a1, void **a2);
// [0x1998880] (22 bytes) DH_generate_key
// int DH_generate_key(int a1);
// [0x19988a0] (38 bytes) DH_compute_key
// int DH_compute_key(int a1, int a2, int a3);
// [0x19988d0] (22 bytes) DH_OpenSSL
// char **DH_OpenSSL();
// [0x19988f0] (24 bytes) DH_set_default_method
// int DH_set_default_method(int a1);
// [0x1998910] (49 bytes) DH_get_default_method
// char **DH_get_default_method();
// [0x1998950] (109 bytes) DH_set_method
// int DH_set_method(int a1, int a2);
// [0x19989c0] (543 bytes) DH_new_method
// uint32_t *DH_new_method(int a1);
// [0x1998be0] (34 bytes) DH_new
// uint32_t *DH_new();
// [0x1998c10] (276 bytes) DH_free
// void DH_free(void *a1);
// [0x1998d30] (80 bytes) DH_up_ref
// bool DH_up_ref(int a1);
// [0x1998d80] (74 bytes) DH_get_ex_new_index
// int DH_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x1998dd0] (53 bytes) DH_set_ex_data
// int DH_set_ex_data(int a1, int a2, int a3);
// [0x1998e10] (45 bytes) DH_get_ex_data
// int DH_get_ex_data(int a1, int a2);
// [0x1998e40] (49 bytes) DH_size
// int DH_size(int a1);
// [0x199a230] (60 bytes) d2i_DSA_SIG
// int d2i_DSA_SIG(int *a1, char **a2, int a3);
// [0x199a270] (52 bytes) i2d_DSA_SIG
// int i2d_DSA_SIG(int a1, void **a2);
// [0x199a2b0] (36 bytes) DSA_SIG_new
// int DSA_SIG_new();
// [0x199a2e0] (44 bytes) DSA_SIG_free
// int DSA_SIG_free(char a1);
// [0x199a310] (60 bytes) d2i_DSAPrivateKey
// int d2i_DSAPrivateKey(int *a1, char **a2, int a3);
// [0x199a350] (52 bytes) i2d_DSAPrivateKey
// int i2d_DSAPrivateKey(int a1, void **a2);
// [0x199a390] (60 bytes) d2i_DSAparams
// int d2i_DSAparams(int *a1, char **a2, int a3);
// [0x199a3d0] (52 bytes) i2d_DSAparams
// int i2d_DSAparams(int a1, void **a2);
// [0x199a410] (60 bytes) d2i_DSAPublicKey
// int d2i_DSAPublicKey(int *a1, char **a2, int a3);
// [0x199a450] (52 bytes) i2d_DSAPublicKey
// int i2d_DSAPublicKey(int a1, void **a2);
// [0x199a4c0] (24 bytes) DSA_set_default_method
// int DSA_set_default_method(int a1);
// [0x199a4e0] (49 bytes) DSA_get_default_method
// int DSA_get_default_method();
// [0x199a520] (109 bytes) DSA_set_method
// int DSA_set_method(int a1, int a2);
// [0x199a590] (527 bytes) DSA_new_method
// uint32_t *DSA_new_method(int a1);
// [0x199a7a0] (34 bytes) DSA_new
// uint32_t *DSA_new();
// [0x199a7d0] (261 bytes) DSA_free
// void DSA_free(void *a1);
// [0x199a8e0] (80 bytes) DSA_up_ref
// bool DSA_up_ref(int a1);
// [0x199a930] (120 bytes) DSA_size
// int DSA_size(int a1);
// [0x199a9b0] (74 bytes) DSA_get_ex_new_index
// int DSA_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x199aa00] (53 bytes) DSA_set_ex_data
// int DSA_set_ex_data(int a1, int a2, int a3);
// [0x199aa40] (45 bytes) DSA_get_ex_data
// int DSA_get_ex_data(int a1, int a2);
// [0x199aa70] (188 bytes) DSA_dup_DH
// uint32_t *DSA_dup_DH(int a1);
// [0x199b6b0] (22 bytes) DSA_OpenSSL
// char **DSA_OpenSSL();
// [0x199b6d0] (38 bytes) DSA_do_sign
// int DSA_do_sign(int a1, int a2, int a3);
// [0x199b700] (146 bytes) DSA_sign
// int DSA_sign(int a1, int a2, int a3, void *a4, int *a5, int a6);
// [0x199b7a0] (46 bytes) DSA_sign_setup
// int DSA_sign_setup(int a1, int a2, int a3, int a4);
// [0x199b7d0] (46 bytes) DSA_do_verify
// int DSA_do_verify(int a1, int a2, int a3, int a4);
// [0x199b800] (135 bytes) DSA_verify
// int DSA_verify(int a1, int a2, int a3, char *a4, int a5, int a6);
// [0x199e6f0] (115 bytes) EC_GROUP_get_basis_type
// int EC_GROUP_get_basis_type(int a1);
// [0x199e770] (162 bytes) EC_GROUP_get_trinomial_basis
// int EC_GROUP_get_trinomial_basis(uint32_t *a1, uint32_t *a2);
// [0x199e820] (219 bytes) EC_GROUP_get_pentanomial_basis
// int EC_GROUP_get_pentanomial_basis(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x199ea20] (60 bytes) d2i_ECPKPARAMETERS
// int d2i_ECPKPARAMETERS(int *a1, char **a2, int a3);
// [0x199ea60] (52 bytes) i2d_ECPKPARAMETERS
// int i2d_ECPKPARAMETERS(int a1, void **a2);
// [0x199f8b0] (60 bytes) d2i_EC_PRIVATEKEY
// int d2i_EC_PRIVATEKEY(int *a1, char **a2, int a3);
// [0x199f8f0] (52 bytes) i2d_EC_PRIVATEKEY
// int i2d_EC_PRIVATEKEY(int a1, void **a2);
// [0x199f930] (36 bytes) EC_PRIVATEKEY_new
// int EC_PRIVATEKEY_new();
// [0x199f960] (44 bytes) EC_PRIVATEKEY_free
// int EC_PRIVATEKEY_free(char a1);
// [0x199f990] (249 bytes) d2i_ECPKParameters
// uint32_t *d2i_ECPKParameters(void **a1, char **a2, int a3);
// [0x199fa90] (202 bytes) i2d_ECPKParameters
// int i2d_ECPKParameters(int a1, void **a2);
// [0x199fb60] (734 bytes) d2i_ECPrivateKey
// uint32_t *d2i_ECPrivateKey(int *a1, char **a2, int a3);
// [0x199fe40] (1098 bytes) i2d_ECPrivateKey
// int i2d_ECPrivateKey(int *a1, void **a2);
// [0x19a0290] (110 bytes) i2d_ECParameters
// int i2d_ECParameters(int a1, void **a2);
// [0x19a0300] (306 bytes) d2i_ECParameters
// int d2i_ECParameters(int *a1, char **a2, int a3);
// [0x19a0750] (1285 bytes) EC_GROUP_new_by_curve_name
// void *EC_GROUP_new_by_curve_name(int a1);
// [0x19a0c60] (84 bytes) EC_get_builtin_curves
// int EC_get_builtin_curves(uint32_t *a1, unsigned int a2);
// [0x19a0cc0] (239 bytes) EC_GROUP_new_curve_GFp
// void *EC_GROUP_new_curve_GFp(int a1, int a2, int a3, int a4);
// [0x19a0db0] (108 bytes) EC_GROUP_new_curve_GF2m
// void *EC_GROUP_new_curve_GF2m(int a1, int a2, int a3, int a4);
// [0x19a0e20] (175 bytes) EC_KEY_new
// uint32_t *EC_KEY_new();
// [0x19a0ed0] (189 bytes) EC_KEY_free
// void EC_KEY_free(char *a1);
// [0x19a0f90] (80 bytes) EC_KEY_new_by_curve_name
// char *EC_KEY_new_by_curve_name(int a1);
// [0x19a0fe0] (475 bytes) EC_KEY_copy
// int EC_KEY_copy(int a1, uint32_t *a2);
// [0x19a11c0] (81 bytes) EC_KEY_dup
// char *EC_KEY_dup(uint32_t *a1);
// [0x19a1220] (80 bytes) EC_KEY_up_ref
// bool EC_KEY_up_ref(int a1);
// [0x19a1270] (560 bytes) EC_KEY_generate_key
// int EC_KEY_generate_key(uint32_t *a1);
// [0x19a14a0] (906 bytes) EC_KEY_check_key
// int EC_KEY_check_key(int a1);
// [0x19a1830] (12 bytes) EC_KEY_get0_group
// int EC_KEY_get0_group(int a1);
// [0x19a1840] (78 bytes) EC_KEY_set_group
// bool EC_KEY_set_group(int a1, int a2);
// [0x19a1890] (12 bytes) EC_KEY_get0_private_key
// int EC_KEY_get0_private_key(int a1);
// [0x19a18a0] (78 bytes) EC_KEY_set_private_key
// bool EC_KEY_set_private_key(int a1, uint32_t *a2);
// [0x19a18f0] (12 bytes) EC_KEY_get0_public_key
// int EC_KEY_get0_public_key(int a1);
// [0x19a1900] (85 bytes) EC_KEY_set_public_key
// bool EC_KEY_set_public_key(int a1, int a2);
// [0x19a1960] (12 bytes) EC_KEY_get_enc_flags
// int EC_KEY_get_enc_flags(int a1);
// [0x19a1970] (14 bytes) EC_KEY_set_enc_flags
// int EC_KEY_set_enc_flags(int a1, int a2);
// [0x19a1980] (12 bytes) EC_KEY_get_conv_form
// int EC_KEY_get_conv_form(int a1);
// [0x19a1990] (52 bytes) EC_KEY_set_conv_form
// int EC_KEY_set_conv_form(int a1, int a2);
// [0x19a19d0] (61 bytes) EC_KEY_get_key_method_data
// int EC_KEY_get_key_method_data(int a1, int a2, int a3, int a4);
// [0x19a1a10] (209 bytes) EC_KEY_insert_key_method_data
// void EC_KEY_insert_key_method_data(int a1, int a2, int a3, int a4, int a5);
// [0x19a1af0] (49 bytes) EC_KEY_set_asn1_flag
// int EC_KEY_set_asn1_flag(int a1, int a2);
// [0x19a1b30] (51 bytes) EC_KEY_precompute_mult
// int EC_KEY_precompute_mult(int a1, int a2);
// [0x19a1b70] (370 bytes) EC_GROUP_new
// uint32_t *EC_GROUP_new(int a1);
// [0x19a1cf0] (11 bytes) EC_GROUP_method_of
// int EC_GROUP_method_of(int a1);
// [0x19a1d00] (11 bytes) EC_METHOD_get_field_type
// int EC_METHOD_get_field_type(int a1);
// [0x19a1d10] (12 bytes) EC_GROUP_get0_generator
// int EC_GROUP_get0_generator(int a1);
// [0x19a1d20] (77 bytes) EC_GROUP_get_order
// bool EC_GROUP_get_order(int a1, uint32_t *a2);
// [0x19a1d70] (77 bytes) EC_GROUP_get_cofactor
// bool EC_GROUP_get_cofactor(int a1, uint32_t *a2);
// [0x19a1dc0] (14 bytes) EC_GROUP_set_curve_name
// int EC_GROUP_set_curve_name(int a1, int a2);
// [0x19a1dd0] (12 bytes) EC_GROUP_get_curve_name
// int EC_GROUP_get_curve_name(int a1);
// [0x19a1de0] (14 bytes) EC_GROUP_set_asn1_flag
// int EC_GROUP_set_asn1_flag(int a1, int a2);
// [0x19a1df0] (12 bytes) EC_GROUP_get_asn1_flag
// int EC_GROUP_get_asn1_flag(int a1);
// [0x19a1e00] (14 bytes) EC_GROUP_set_point_conversion_form
// int EC_GROUP_set_point_conversion_form(int a1, int a2);
// [0x19a1e10] (12 bytes) EC_GROUP_get_point_conversion_form
// int EC_GROUP_get_point_conversion_form(int a1);
// [0x19a1e20] (172 bytes) EC_GROUP_set_seed
// size_t EC_GROUP_set_seed(int a1, void *src, size_t n);
// [0x19a1ed0] (12 bytes) EC_GROUP_get0_seed
// int EC_GROUP_get0_seed(int a1);
// [0x19a1ee0] (12 bytes) EC_GROUP_get_seed_len
// int EC_GROUP_get_seed_len(int a1);
// [0x19a1ef0] (126 bytes) EC_GROUP_set_curve_GFp
// int EC_GROUP_set_curve_GFp(int a1, int a2, int a3, int a4, int a5);
// [0x19a1f70] (126 bytes) EC_GROUP_get_curve_GFp
// int EC_GROUP_get_curve_GFp(int a1, int a2, int a3, int a4, int a5);
// [0x19a1ff0] (126 bytes) EC_GROUP_set_curve_GF2m
// int EC_GROUP_set_curve_GF2m(int a1, int a2, int a3, int a4, int a5);
// [0x19a2070] (126 bytes) EC_GROUP_get_curve_GF2m
// int EC_GROUP_get_curve_GF2m(int a1, int a2, int a3, int a4, int a5);
// [0x19a20f0] (94 bytes) EC_GROUP_get_degree
// int EC_GROUP_get_degree(int a1);
// [0x19a2150] (102 bytes) EC_GROUP_check_discriminant
// int EC_GROUP_check_discriminant(int a1, int a2);
// [0x19a21c0] (245 bytes) EC_EX_DATA_set_data
// int EC_EX_DATA_set_data(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x19a22c0] (59 bytes) EC_EX_DATA_get_data
// uint32_t *EC_EX_DATA_get_data(uint32_t *a1, int a2, int a3, int a4);
// [0x19a2300] (104 bytes) EC_EX_DATA_free_data
// void EC_EX_DATA_free_data(void **a1, void *a2, void (*a3)(void *), void *a4);
// [0x19a2370] (105 bytes) EC_EX_DATA_clear_free_data
// void EC_EX_DATA_clear_free_data(void **a1, void *a2, void *a3, void (*a4)(void *));
// [0x19a23e0] (81 bytes) EC_EX_DATA_free_all_data
// int EC_EX_DATA_free_all_data(void **a1);
// [0x19a2440] (81 bytes) EC_EX_DATA_clear_free_all_data
// int EC_EX_DATA_clear_free_all_data(void **a1);
// [0x19a24a0] (298 bytes) EC_POINT_new
// uint8_t *EC_POINT_new(int *a1);
// [0x19a25d0] (66 bytes) EC_POINT_free
// void EC_POINT_free(void *a1);
// [0x19a2620] (117 bytes) EC_GROUP_free
// void EC_GROUP_free(void **a1);
// [0x19a26a0] (97 bytes) EC_POINT_clear_free
// void EC_POINT_clear_free(uint8_t *a1);
// [0x19a2710] (161 bytes) EC_GROUP_clear_free
// void EC_GROUP_clear_free(void **a1);
// [0x19a27c0] (194 bytes) EC_POINT_copy
// int EC_POINT_copy(uint32_t *a1, uint32_t *a2);
// [0x19a2890] (301 bytes) EC_GROUP_set_generator
// bool EC_GROUP_set_generator(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x19a29c0] (629 bytes) EC_GROUP_copy
// int EC_GROUP_copy(int a1, int a2);
// [0x19a2c40] (98 bytes) EC_GROUP_dup
// void **EC_GROUP_dup(int *a1);
// [0x19a2cb0] (108 bytes) EC_POINT_dup
// uint8_t *EC_POINT_dup(uint32_t *a1, int *a2);
// [0x19a2d20] (11 bytes) EC_POINT_method_of
// int EC_POINT_method_of(int a1);
// [0x19a2d30] (186 bytes) EC_POINT_set_to_infinity
// int EC_POINT_set_to_infinity(int a1, uint32_t *a2);
// [0x19a2df0] (218 bytes) EC_POINT_set_Jprojective_coordinates_GFp
// int EC_POINT_set_Jprojective_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0x19a2ed0] (218 bytes) EC_POINT_get_Jprojective_coordinates_GFp
// int EC_POINT_get_Jprojective_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0x19a2fb0] (210 bytes) EC_POINT_set_affine_coordinates_GFp
// int EC_POINT_set_affine_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19a3090] (210 bytes) EC_POINT_set_affine_coordinates_GF2m
// int EC_POINT_set_affine_coordinates_GF2m(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19a3170] (210 bytes) EC_POINT_get_affine_coordinates_GFp
// int EC_POINT_get_affine_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19a3250] (210 bytes) EC_POINT_get_affine_coordinates_GF2m
// int EC_POINT_get_affine_coordinates_GF2m(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19a3330] (210 bytes) EC_POINT_set_compressed_coordinates_GFp
// int EC_POINT_set_compressed_coordinates_GFp(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19a3410] (210 bytes) EC_POINT_set_compressed_coordinates_GF2m
// int EC_POINT_set_compressed_coordinates_GF2m(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19a34f0] (218 bytes) EC_POINT_point2oct
// int EC_POINT_point2oct(int a1, uint32_t *a2, int a3, int a4, int a5, int a6);
// [0x19a35d0] (210 bytes) EC_POINT_oct2point
// int EC_POINT_oct2point(int a1, uint32_t *a2, int a3, int a4, int a5);
// [0x19a36b0] (226 bytes) EC_POINT_add
// int EC_POINT_add(int *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x19a37a0] (202 bytes) EC_POINT_dbl
// int EC_POINT_dbl(int *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x19a3870] (194 bytes) EC_POINT_invert
// int EC_POINT_invert(int *a1, uint32_t *a2, int a3);
// [0x19a3940] (186 bytes) EC_POINT_is_at_infinity
// int EC_POINT_is_at_infinity(int a1, uint32_t *a2);
// [0x19a3a00] (194 bytes) EC_POINT_is_on_curve
// int EC_POINT_is_on_curve(int a1, uint32_t *a2, int a3);
// [0x19a3ad0] (202 bytes) EC_POINT_cmp
// int EC_POINT_cmp(int *a1, uint32_t *a2, uint32_t *a3, int a4);
// [0x19a3ba0] (829 bytes) EC_GROUP_cmp
// int EC_GROUP_cmp(int *a1, int a2, int *a3);
// [0x19a3ee0] (194 bytes) EC_POINT_make_affine
// int EC_POINT_make_affine(int a1, uint32_t *a2, int a3);
// [0x19a3fb0] (211 bytes) EC_POINTs_make_affine
// int EC_POINTs_make_affine(int *a1, int a2, uint32_t **a3, int a4);
// [0x19a4090] (146 bytes) EC_POINTs_mul
// int EC_POINTs_mul(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x19a4130] (112 bytes) EC_POINT_mul
// int EC_POINT_mul(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x19a41a0] (94 bytes) EC_GROUP_precompute_mult
// int EC_GROUP_precompute_mult(int a1, int a2);
// [0x19a4200] (66 bytes) EC_GROUP_have_precompute_mult
// int EC_GROUP_have_precompute_mult(int a1);
// [0x19a5b50] (230 bytes) EC_POINT_point2bn
// void **EC_POINT_point2bn(int a1, uint32_t *a2, int a3, void **a4, int a5);
// [0x19a5c40] (258 bytes) EC_POINT_bn2point
// uint8_t *EC_POINT_bn2point(int *a1, uint32_t *a2, uint8_t *a3, int a4);
// [0x19a5d50] (298 bytes) EC_POINT_point2hex
// uint8_t *EC_POINT_point2hex(int a1, uint32_t *a2, int a3, int a4);
// [0x19a5e80] (110 bytes) EC_POINT_hex2point
// uint8_t *EC_POINT_hex2point(int *a1, int a2, uint8_t *a3, int a4);
// [0x19a5ef0] (124 bytes) EC_KEY_print
// int EC_KEY_print(int a1, int a2, int a3);
// [0x19a5f70] (186 bytes) EC_KEY_print_fp
// int EC_KEY_print_fp(int a1, int a2, int a3);
// [0x19a74b0] (22 bytes) EC_GFp_mont_method
// void *EC_GFp_mont_method();
// [0x19a7920] (22 bytes) EC_GFp_nist_method
// void *EC_GFp_nist_method();
// [0x19ab830] (22 bytes) EC_GFp_simple_method
// void *EC_GFp_simple_method();
// [0x19ab850] (97 bytes) ECDH_compute_key
// int ECDH_compute_key(int a1, int a2, int a3, int a4, int a5);
// [0x19ab930] (24 bytes) ECDH_set_default_method
// int ECDH_set_default_method(int a1);
// [0x19ab950] (49 bytes) ECDH_get_default_method
// int ECDH_get_default_method();
// [0x19abb60] (90 bytes) ECDH_set_method
// int ECDH_set_method(int a1, int a2);
// [0x19abbc0] (74 bytes) ECDH_get_ex_new_index
// int ECDH_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x19abc10] (69 bytes) ECDH_set_ex_data
// int ECDH_set_ex_data(int a1, int a2, int a3);
// [0x19abc60] (61 bytes) ECDH_get_ex_data
// int ECDH_get_ex_data(int a1, int a2);
// [0x19ac0e0] (22 bytes) ECDH_OpenSSL
// char **ECDH_OpenSSL();
// [0x19ac170] (24 bytes) ECDSA_set_default_method
// int ECDSA_set_default_method(int a1);
// [0x19ac190] (49 bytes) ECDSA_get_default_method
// int ECDSA_get_default_method();
// [0x19ac3a0] (90 bytes) ECDSA_set_method
// int ECDSA_set_method(int a1, int a2);
// [0x19ac400] (222 bytes) ECDSA_size
// int ECDSA_size(int a1);
// [0x19ac4e0] (74 bytes) ECDSA_get_ex_new_index
// int ECDSA_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x19ac530] (69 bytes) ECDSA_set_ex_data
// int ECDSA_set_ex_data(int a1, int a2, int a3);
// [0x19ac580] (61 bytes) ECDSA_get_ex_data
// int ECDSA_get_ex_data(int a1, int a2);
// [0x19ad3b0] (22 bytes) ECDSA_OpenSSL
// char **ECDSA_OpenSSL();
// [0x19ad3d0] (85 bytes) ECDSA_do_sign_ex
// int ECDSA_do_sign_ex(int a1, int a2, int a3, int a4, int a5);
// [0x19ad430] (66 bytes) ECDSA_do_sign
// int ECDSA_do_sign(int a1, int a2, int a3);
// [0x19ad480] (162 bytes) ECDSA_sign_ex
// int ECDSA_sign_ex(int a1, int a2, int a3, char a4, uint32_t *a5, int a6, int a7, int a8);
// [0x19ad530] (90 bytes) ECDSA_sign
// int ECDSA_sign(int a1, int a2, int a3, char a4, uint32_t *a5, int a6);
// [0x19ad590] (89 bytes) ECDSA_sign_setup
// int ECDSA_sign_setup(int a1, int a2, int a3, int a4);
// [0x19ad5f0] (89 bytes) ECDSA_do_verify
// int ECDSA_do_verify(int a1, int a2, int a3, int a4);
// [0x19ad650] (135 bytes) ECDSA_verify
// int ECDSA_verify(int a1, int a2, int a3, char a4, int a5, int a6);
// [0x19ad830] (184 bytes) ENGINE_init
// int ENGINE_init(uint32_t *a1);
// [0x19ad8f0] (240 bytes) ENGINE_finish
// int ENGINE_finish(uint32_t *a1);
// [0x19ada20] (258 bytes) ENGINE_new
// int ENGINE_new();
// [0x19adcc0] (42 bytes) ENGINE_free
// int ENGINE_free(uint32_t *a1);
// [0x19addf0] (72 bytes) ENGINE_cleanup
// int ENGINE_cleanup();
// [0x19ade40] (74 bytes) ENGINE_get_ex_new_index
// int ENGINE_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x19ade90] (53 bytes) ENGINE_set_ex_data
// int ENGINE_set_ex_data(int a1, int a2, int a3);
// [0x19aded0] (45 bytes) ENGINE_get_ex_data
// int ENGINE_get_ex_data(int a1, int a2);
// [0x19adf00] (98 bytes) ENGINE_set_id
// int ENGINE_set_id(uint32_t *a1, int a2);
// [0x19adf70] (98 bytes) ENGINE_set_name
// int ENGINE_set_name(int a1, int a2);
// [0x19adfe0] (17 bytes) ENGINE_set_destroy_function
// int ENGINE_set_destroy_function(int a1, int a2);
// [0x19ae000] (17 bytes) ENGINE_set_init_function
// int ENGINE_set_init_function(int a1, int a2);
// [0x19ae020] (17 bytes) ENGINE_set_finish_function
// int ENGINE_set_finish_function(int a1, int a2);
// [0x19ae040] (17 bytes) ENGINE_set_ctrl_function
// int ENGINE_set_ctrl_function(int a1, int a2);
// [0x19ae060] (17 bytes) ENGINE_set_flags
// int ENGINE_set_flags(int a1, int a2);
// [0x19ae080] (17 bytes) ENGINE_set_cmd_defns
// int ENGINE_set_cmd_defns(int a1, int a2);
// [0x19ae0a0] (11 bytes) ENGINE_get_id
// int ENGINE_get_id(int a1);
// [0x19ae0b0] (12 bytes) ENGINE_get_name
// int ENGINE_get_name(int a1);
// [0x19ae0c0] (12 bytes) ENGINE_get_destroy_function
// int ENGINE_get_destroy_function(int a1);
// [0x19ae0d0] (12 bytes) ENGINE_get_init_function
// int ENGINE_get_init_function(int a1);
// [0x19ae0e0] (12 bytes) ENGINE_get_finish_function
// int ENGINE_get_finish_function(int a1);
// [0x19ae0f0] (12 bytes) ENGINE_get_ctrl_function
// int ENGINE_get_ctrl_function(int a1);
// [0x19ae100] (12 bytes) ENGINE_get_flags
// int ENGINE_get_flags(int a1);
// [0x19ae110] (12 bytes) ENGINE_get_cmd_defns
// int ENGINE_get_cmd_defns(int a1);
// [0x19ae120] (22 bytes) ENGINE_get_static_state
// void *ENGINE_get_static_state();
// [0x19ae230] (44 bytes) ENGINE_unregister_pkey_asn1_meths
// int ENGINE_unregister_pkey_asn1_meths(int a1);
// [0x19ae260] (145 bytes) ENGINE_register_pkey_asn1_meths
// int ENGINE_register_pkey_asn1_meths(int a1);
// [0x19ae300] (61 bytes) ENGINE_register_all_pkey_asn1_meths
// int ENGINE_register_all_pkey_asn1_meths();
// [0x19ae340] (145 bytes) ENGINE_set_default_pkey_asn1_meths
// int ENGINE_set_default_pkey_asn1_meths(int a1);
// [0x19ae3e0] (44 bytes) ENGINE_get_pkey_asn1_meth_engine
// int ENGINE_get_pkey_asn1_meth_engine(int a1);
// [0x19ae410] (12 bytes) ENGINE_get_pkey_asn1_meths
// int ENGINE_get_pkey_asn1_meths(int a1);
// [0x19ae420] (159 bytes) ENGINE_get_pkey_asn1_meth
// int ENGINE_get_pkey_asn1_meth(int a1, int a2);
// [0x19ae4c0] (17 bytes) ENGINE_set_pkey_asn1_meths
// int ENGINE_set_pkey_asn1_meths(int a1, int a2);
// [0x19ae570] (253 bytes) ENGINE_get_pkey_asn1_meth_str
// int ENGINE_get_pkey_asn1_meth_str(int a1, char *s, size_t n);
// [0x19ae670] (180 bytes) ENGINE_pkey_asn1_find_str
// int ENGINE_pkey_asn1_find_str(uint32_t *a1, int a2, int a3);
// [0x19ae760] (44 bytes) ENGINE_unregister_DH
// int ENGINE_unregister_DH(int a1);
// [0x19ae790] (92 bytes) ENGINE_register_DH
// int ENGINE_register_DH(int a1);
// [0x19ae7f0] (61 bytes) ENGINE_register_all_DH
// int ENGINE_register_all_DH();
// [0x19ae830] (92 bytes) ENGINE_set_default_DH
// int ENGINE_set_default_DH(int a1);
// [0x19ae890] (44 bytes) ENGINE_get_default_DH
// int ENGINE_get_default_DH();
// [0x19ae8c0] (12 bytes) ENGINE_get_DH
// int ENGINE_get_DH(int a1);
// [0x19ae8d0] (17 bytes) ENGINE_set_DH
// int ENGINE_set_DH(int a1, int a2);
// [0x19ae920] (44 bytes) ENGINE_unregister_DSA
// int ENGINE_unregister_DSA(int a1);
// [0x19ae950] (92 bytes) ENGINE_register_DSA
// int ENGINE_register_DSA(int a1);
// [0x19ae9b0] (61 bytes) ENGINE_register_all_DSA
// int ENGINE_register_all_DSA();
// [0x19ae9f0] (92 bytes) ENGINE_set_default_DSA
// int ENGINE_set_default_DSA(int a1);
// [0x19aea50] (44 bytes) ENGINE_get_default_DSA
// int ENGINE_get_default_DSA();
// [0x19aea80] (12 bytes) ENGINE_get_DSA
// int ENGINE_get_DSA(int a1);
// [0x19aea90] (17 bytes) ENGINE_set_DSA
// int ENGINE_set_DSA(int a1, int a2);
// [0x19aeae0] (44 bytes) ENGINE_unregister_ECDH
// int ENGINE_unregister_ECDH(int a1);
// [0x19aeb10] (92 bytes) ENGINE_register_ECDH
// int ENGINE_register_ECDH(int a1);
// [0x19aeb70] (61 bytes) ENGINE_register_all_ECDH
// int ENGINE_register_all_ECDH();
// [0x19aebb0] (92 bytes) ENGINE_set_default_ECDH
// int ENGINE_set_default_ECDH(int a1);
// [0x19aec10] (44 bytes) ENGINE_get_default_ECDH
// int ENGINE_get_default_ECDH();
// [0x19aec40] (12 bytes) ENGINE_get_ECDH
// int ENGINE_get_ECDH(int a1);
// [0x19aec50] (17 bytes) ENGINE_set_ECDH
// int ENGINE_set_ECDH(int a1, int a2);
// [0x19aeca0] (44 bytes) ENGINE_unregister_ECDSA
// int ENGINE_unregister_ECDSA(int a1);
// [0x19aecd0] (92 bytes) ENGINE_register_ECDSA
// int ENGINE_register_ECDSA(int a1);
// [0x19aed30] (61 bytes) ENGINE_register_all_ECDSA
// int ENGINE_register_all_ECDSA();
// [0x19aed70] (92 bytes) ENGINE_set_default_ECDSA
// int ENGINE_set_default_ECDSA(int a1);
// [0x19aedd0] (44 bytes) ENGINE_get_default_ECDSA
// int ENGINE_get_default_ECDSA();
// [0x19aee00] (12 bytes) ENGINE_get_ECDSA
// int ENGINE_get_ECDSA(int a1);
// [0x19aee10] (17 bytes) ENGINE_set_ECDSA
// int ENGINE_set_ECDSA(int a1, int a2);
// [0x19aee60] (44 bytes) ENGINE_unregister_pkey_meths
// int ENGINE_unregister_pkey_meths(int a1);
// [0x19aee90] (145 bytes) ENGINE_register_pkey_meths
// int ENGINE_register_pkey_meths(int a1);
// [0x19aef30] (61 bytes) ENGINE_register_all_pkey_meths
// int ENGINE_register_all_pkey_meths();
// [0x19aef70] (145 bytes) ENGINE_set_default_pkey_meths
// int ENGINE_set_default_pkey_meths(int a1);
// [0x19af010] (44 bytes) ENGINE_get_pkey_meth_engine
// int ENGINE_get_pkey_meth_engine(int a1);
// [0x19af040] (12 bytes) ENGINE_get_pkey_meths
// int ENGINE_get_pkey_meths(int a1);
// [0x19af050] (159 bytes) ENGINE_get_pkey_meth
// int ENGINE_get_pkey_meth(int a1, int a2);
// [0x19af0f0] (17 bytes) ENGINE_set_pkey_meths
// int ENGINE_set_pkey_meths(int a1, int a2);
// [0x19afbc0] (33 bytes) ERR_get_implementation
// int ERR_get_implementation();
// [0x19afbf0] (144 bytes) ERR_set_implementation
// int ERR_set_implementation(int a1);
// [0x19afc80] (475 bytes) ERR_load_ERR_strings
// int ERR_load_ERR_strings();
