#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/openssl_crypto_ssl_part01.h
// Library: openssl | Module: openssl_crypto_ssl_part01
// Binary Address Span: 0x12e6b00 .. 0x198b660 (500 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x12e6b00] (242 bytes) ssl3_do_write
// int ssl3_do_write(uint32_t *a1, int a2);
// [0x12e6c00] (413 bytes) ssl3_send_finished
// int ssl3_send_finished(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x12e6da0] (577 bytes) ssl3_get_finished
// int ssl3_get_finished(int a1, int a2, int a3);
// [0x12e6ff0] (81 bytes) ssl3_send_change_cipher_spec
// int ssl3_send_change_cipher_spec(uint32_t *a1, int a2, int a3);
// [0x12e7050] (1065 bytes) ssl3_output_cert_chain
// int ssl3_output_cert_chain(int a1, int a2);
// [0x12e7480] (919 bytes) ssl3_get_message
// int ssl3_get_message(uint32_t *a1, int a2, int a3, int a4, unsigned int a5, uint32_t *a6);
// [0x12e7820] (188 bytes) ssl_cert_type
// char ssl_cert_type(int a1, int *a2);
// [0x12e78e0] (37 bytes) ssl_verify_alarm_type
// int ssl_verify_alarm_type(int a1);
// [0x12e7910] (464 bytes) ssl3_setup_read_buffer
// int ssl3_setup_read_buffer(uint32_t *a1);
// [0x12e7ae0] (443 bytes) ssl3_setup_write_buffer
// int ssl3_setup_write_buffer(uint32_t *a1);
// [0x12e7ca0] (71 bytes) ssl3_setup_buffers
// bool ssl3_setup_buffers(uint32_t *a1);
// [0x12e7cf0] (292 bytes) ssl3_release_write_buffer
// int ssl3_release_write_buffer(int a1);
// [0x12e7e20] (292 bytes) ssl3_release_read_buffer
// int ssl3_release_read_buffer(int a1);
// [0x12e7f50] (1629 bytes) ssl3_change_cipher_state
// int ssl3_change_cipher_state(int a1, int a2);
// [0x12e85b0] (114 bytes) ssl3_cleanup_key_block
// int ssl3_cleanup_key_block(int a1);
// [0x12e8630] (1305 bytes) ssl3_setup_key_block
// int ssl3_setup_key_block(int a1);
// [0x12e8b50] (526 bytes) ssl3_enc
// int ssl3_enc(uint32_t *a1, int a2);
// [0x12e8d60] (157 bytes) ssl3_free_digest_list
// int ssl3_free_digest_list(int a1);
// [0x12e8e00] (153 bytes) ssl3_init_finished_mac
// int ssl3_init_finished_mac(int a1);
// [0x12e8ea0] (229 bytes) ssl3_finish_mac
// int ssl3_finish_mac(int a1, int a2, int a3);
// [0x12e8f90] (444 bytes) ssl3_digest_cached_records
// int ssl3_digest_cached_records(int a1);
// [0x12e9150] (552 bytes) ssl3_cert_verify_mac
// int ssl3_cert_verify_mac(int a1, int a2, int a3);
// [0x12e9380] (1174 bytes) ssl3_final_finish_mac
// int ssl3_final_finish_mac(int a1, int a2, int a3, int a4);
// [0x12e9820] (106 bytes) ssl3_record_sequence_update
// uint8_t *ssl3_record_sequence_update(uint8_t *a1);
// [0x12e9ac0] (935 bytes) ssl3_generate_master_secret
// int ssl3_generate_master_secret(int a1, int a2, int a3, int a4);
// [0x12e9e70] (34 bytes) ssl3_alert_code
// int ssl3_alert_code(unsigned int a1);
// [0x12e9ea0] (12 bytes) ssl3_default_timeout
// int ssl3_default_timeout();
// [0x12e9eb0] (12 bytes) ssl3_num_ciphers
// int ssl3_num_ciphers();
// [0x12e9ec0] (39 bytes) ssl3_get_cipher
// char *ssl3_get_cipher(unsigned int a1);
// [0x12e9ef0] (39 bytes) ssl3_pending
// int ssl3_pending(int a1);
// [0x12e9f20] (255 bytes) ssl3_new
// int ssl3_new(int a1);
// [0x12ea020] (259 bytes) ssl3_free
// void ssl3_free(int a1);
// [0x12ea130] (464 bytes) ssl3_clear
// int ssl3_clear(uint32_t *a1);
// [0x12ea300] (1390 bytes) ssl3_ctrl
// int ssl3_ctrl(int a1, int a2, int a3, char *a4);
// [0x12ea870] (221 bytes) ssl3_callback_ctrl
// int ssl3_callback_ctrl(int a1, int a2, int a3);
// [0x12ea950] (1135 bytes) ssl3_ctx_ctrl
// char ssl3_ctx_ctrl(int a1, int a2, int a3, uint32_t *a4);
// [0x12eadc0] (146 bytes) ssl3_ctx_callback_ctrl
// int ssl3_ctx_callback_ctrl(uint32_t *a1, int a2, int a3);
// [0x12eae60] (93 bytes) ssl3_get_cipher_by_char
// uint32_t *ssl3_get_cipher_by_char(uint8_t *a1);
// [0x12eaec0] (65 bytes) ssl3_put_cipher_by_char
// int ssl3_put_cipher_by_char(int a1, uint8_t *a2);
// [0x12eaf10] (1540 bytes) ssl3_choose_cipher
// int ssl3_choose_cipher(uint32_t *a1, int a2, int a3);
// [0x12eb520] (275 bytes) ssl3_get_req_cert_type
// int ssl3_get_req_cert_type(int *a1, uint8_t *a2);
// [0x12eb640] (307 bytes) ssl3_shutdown
// int ssl3_shutdown(uint32_t *a1);
// [0x12eb780] (39 bytes) ssl3_renegotiate
// char ssl3_renegotiate(int a1);
// [0x12eb7b0] (147 bytes) ssl3_renegotiate_check
// int ssl3_renegotiate_check(int a1);
// [0x12eb850] (220 bytes) ssl3_read
// int ssl3_read(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0x12eb930] (270 bytes) ssl3_write
// int ssl3_write(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0x12eba40] (220 bytes) ssl3_peek
// int ssl3_peek(int a1, int a2, uint32_t *a3, int a4, int a5);
// [0x12ebb70] (901 bytes) ssl3_read_n
// int ssl3_read_n(int a1, int a2, int a3, int a4);
// [0x12ebf00] (111 bytes) ssl3_do_uncompress
// int ssl3_do_uncompress(int a1);
// [0x12ebf70] (111 bytes) ssl3_do_compress
// int ssl3_do_compress(int a1);
// [0x12ebfe0] (412 bytes) ssl3_write_pending
// int ssl3_write_pending(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x12ec5d0] (334 bytes) ssl3_write_bytes
// int ssl3_write_bytes(int a1, int a2, int a3, int a4);
// [0x12ec720] (277 bytes) ssl3_do_change_cipher_spec
// int ssl3_do_change_cipher_spec(int a1);
// [0x12ec840] (218 bytes) ssl3_send_alert
// int ssl3_send_alert(uint32_t *a1, int a2, int a3);
// [0x12ec920] (4288 bytes) ssl3_read_bytes
// int ssl3_read_bytes(uint32_t *a1, int a2, uint8_t *dest, signed int a4, int a5);
// [0x12ed9e0] (320 bytes) ssl3_dispatch_alert
// int ssl3_dispatch_alert(uint32_t *a1);
// [0x12edb70] (93 bytes) ssl3_send_hello_request
// int ssl3_send_hello_request(uint32_t *a1);
// [0x12edbd0] (168 bytes) ssl3_check_client_hello
// char ssl3_check_client_hello(uint32_t *a1);
// [0x12edc80] (3591 bytes) ssl3_get_client_hello
// 0x12edc80 ssl3_get_client_hello
// [0x12eea90] (552 bytes) ssl3_send_server_hello
// int ssl3_send_server_hello(uint32_t *a1);
// [0x12eecc0] (93 bytes) ssl3_send_server_done
// int ssl3_send_server_done(uint32_t *a1);
// [0x12eed20] (3733 bytes) ssl3_send_server_key_exchange
// int ssl3_send_server_key_exchange(int a1);
// [0x12efbc0] (588 bytes) ssl3_send_certificate_request
// int ssl3_send_certificate_request(int a1);
// [0x12efe10] (3951 bytes) ssl3_get_client_key_exchange
// 0x12efe10 ssl3_get_client_key_exchange
// [0x12f0d80] (1459 bytes) ssl3_get_cert_verify
// 0x12f0d80 ssl3_get_cert_verify
// [0x12f1340] (1528 bytes) ssl3_get_client_certificate
// 0x12f1340 ssl3_get_client_certificate
// [0x12f1940] (194 bytes) ssl3_send_server_certificate
// int ssl3_send_server_certificate(uint32_t *a1);
// [0x12f1a10] (1022 bytes) ssl3_send_newsession_ticket
// int ssl3_send_newsession_ticket(uint32_t *a1);
// [0x12f1e10] (244 bytes) ssl3_send_cert_status
// int ssl3_send_cert_status(int a1);
// [0x12f1f10] (3503 bytes) ssl3_accept
// 0x12f1f10 ssl3_accept
// [0x12f2cc0] (505 bytes) SSL_library_init
// int SSL_library_init();
// [0x12f2ec0] (3075 bytes) i2d_SSL_SESSION
// int i2d_SSL_SESSION(int *a1, uint32_t *a2);
// [0x12f3ad0] (6124 bytes) d2i_SSL_SESSION
// int *d2i_SSL_SESSION(int **a1, uint32_t *a2, int a3);
// [0x12f52f0] (270 bytes) SSL_get_ex_data_X509_STORE_CTX_idx
// int SSL_get_ex_data_X509_STORE_CTX_idx();
// [0x12f5400] (234 bytes) ssl_cert_new
// int ssl_cert_new();
// [0x12f54f0] (1857 bytes) ssl_cert_dup
// int ssl_cert_dup(uint32_t *a1);
// [0x12f5c40] (388 bytes) ssl_cert_free
// void ssl_cert_free(void **a1);
// [0x12f5dd0] (189 bytes) ssl_cert_inst
// int ssl_cert_inst(int *a1);
// [0x12f5e90] (242 bytes) ssl_sess_cert_new
// int ssl_sess_cert_new();
// [0x12f5f90] (292 bytes) ssl_sess_cert_free
// void ssl_sess_cert_free(void **a1);
// [0x12f60c0] (17 bytes) ssl_set_peer_cert_type
// int ssl_set_peer_cert_type(int a1, int a2);
// [0x12f60e0] (396 bytes) ssl_verify_cert_chain
// int ssl_verify_cert_chain(uint32_t *a1, int a2);
// [0x12f6270] (143 bytes) SSL_dup_CA_list
// void *SSL_dup_CA_list(int a1);
// [0x12f6300] (78 bytes) SSL_set_client_CA_list
// int SSL_set_client_CA_list(int a1, int a2);
// [0x12f6350] (78 bytes) SSL_CTX_set_client_CA_list
// int SSL_CTX_set_client_CA_list(int a1, int a2);
// [0x12f63a0] (15 bytes) SSL_CTX_get_client_CA_list
// int SSL_CTX_get_client_CA_list(int a1);
// [0x12f63b0] (69 bytes) SSL_get_client_CA_list
// int SSL_get_client_CA_list(int *a1);
// [0x12f6400] (161 bytes) SSL_add_client_CA
// int SSL_add_client_CA(int a1, int a2);
// [0x12f64b0] (161 bytes) SSL_CTX_add_client_CA
// int SSL_CTX_add_client_CA(int a1, int a2);
// [0x12f6560] (463 bytes) SSL_load_client_CA_file
// void *SSL_load_client_CA_file(int a1);
// [0x12f6730] (372 bytes) SSL_add_file_cert_subjects_to_stack
// int SSL_add_file_cert_subjects_to_stack(int a1, int a2);
// [0x12f68b0] (519 bytes) SSL_add_dir_cert_subjects_to_stack
// const char *SSL_add_dir_cert_subjects_to_stack(int a1, char *s);
// [0x12f74e0] (629 bytes) ssl_load_ciphers
// int ssl_load_ciphers();
// [0x12f7760] (1084 bytes) ssl_cipher_get_evp
// bool ssl_cipher_get_evp(int a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x12f7ba0] (60 bytes) ssl_get_handshake_digest
// int ssl_get_handshake_digest(unsigned int a1, int *a2, int *a3);
// [0x12f7be0] (3023 bytes) ssl_create_cipher_list
// int ssl_create_cipher_list(int a1, void **a2, void **a3, char *a4);
// [0x12f87b0] (1235 bytes) SSL_CIPHER_description
// const char *SSL_CIPHER_description(uint32_t *a1, int a2, int a3);
// [0x12f8c90] (59 bytes) SSL_CIPHER_get_version
// const char *SSL_CIPHER_get_version(int a1);
// [0x12f8cd0] (29 bytes) SSL_CIPHER_get_name
// const char *SSL_CIPHER_get_name(int a1);
// [0x12f8cf0] (27 bytes) SSL_CIPHER_get_bits
// int SSL_CIPHER_get_bits(int a1, uint32_t *a2);
// [0x12f8d10] (115 bytes) ssl3_comp_find
// uint32_t *ssl3_comp_find(int a1, int a2);
// [0x12f8d90] (358 bytes) SSL_COMP_get_compression_methods
// int SSL_COMP_get_compression_methods();
// [0x12f8f00] (772 bytes) SSL_COMP_add_compression_method
// int SSL_COMP_add_compression_method(int a1, uint32_t *a2);
// [0x12f9210] (19 bytes) SSL_COMP_get_name
// int SSL_COMP_get_name(int a1);
// [0x12f9230] (32 bytes) SSL_load_error_strings
// int SSL_load_error_strings();
// [0x12f9280] (70 bytes) ssl_undefined_function
// int ssl_undefined_function();
// [0x12f9340] (161 bytes) SSL_CTX_set_ssl_version
// int SSL_CTX_set_ssl_version(int a1, uint32_t *a2);
// [0x12f93f0] (126 bytes) SSL_CTX_set_session_id_context
// int SSL_CTX_set_session_id_context(int a1, void *src, size_t n);
// [0x12f9470] (126 bytes) SSL_set_session_id_context
// int SSL_set_session_id_context(int a1, void *src, size_t n);
// [0x12f94f0] (125 bytes) SSL_CTX_set_generate_session_id
// int SSL_CTX_set_generate_session_id(int a1, int a2);
// [0x12f9570] (125 bytes) SSL_set_generate_session_id
// int SSL_set_generate_session_id(int a1, int a2);
// [0x12f95f0] (311 bytes) SSL_has_matching_session_id
// bool SSL_has_matching_session_id(uint32_t *a1, void *src, size_t n);
// [0x12f9730] (48 bytes) SSL_CTX_set_purpose
// int SSL_CTX_set_purpose(int a1, int a2);
// [0x12f9760] (45 bytes) SSL_set_purpose
// int SSL_set_purpose(int a1, int a2);
// [0x12f9790] (48 bytes) SSL_CTX_set_trust
// int SSL_CTX_set_trust(int a1, int a2);
// [0x12f97c0] (45 bytes) SSL_set_trust
// int SSL_set_trust(int a1, int a2);
// [0x12f97f0] (48 bytes) SSL_CTX_set1_param
// int SSL_CTX_set1_param(int a1, int a2);
// [0x12f9820] (45 bytes) SSL_set1_param
// int SSL_set1_param(int a1, int a2);
// [0x12f9850] (143 bytes) SSL_set_bio
// int SSL_set_bio(int a1, int a2, int a3);
// [0x12f98e0] (12 bytes) SSL_get_rbio
// int SSL_get_rbio(int a1);
// [0x12f98f0] (12 bytes) SSL_get_wbio
// int SSL_get_wbio(int a1);
// [0x12f9900] (102 bytes) SSL_get_rfd
// int SSL_get_rfd(int a1);
// [0x12f9970] (34 bytes) SSL_get_fd
// int SSL_get_fd(int a1);
// [0x12f99a0] (102 bytes) SSL_get_wfd
// int SSL_get_wfd(int a1);
// [0x12f9a10] (159 bytes) SSL_set_fd
// int SSL_set_fd(int a1, int a2);
// [0x12f9ab0] (282 bytes) SSL_set_wfd
// int SSL_set_wfd(int a1, int a2);
// [0x12f9bd0] (311 bytes) SSL_set_rfd
// int SSL_set_rfd(int a1, int a2);
// [0x12f9d10] (91 bytes) SSL_get_finished
// unsigned int SSL_get_finished(int a1, void *dest, unsigned int a3);
// [0x12f9d70] (91 bytes) SSL_get_peer_finished
// unsigned int SSL_get_peer_finished(int a1, void *dest, unsigned int a3);
// [0x12f9dd0] (15 bytes) SSL_get_verify_mode
// int SSL_get_verify_mode(int a1);
// [0x12f9de0] (37 bytes) SSL_get_verify_depth
// int SSL_get_verify_depth(int a1);
// [0x12f9e10] (15 bytes) SSL_get_verify_callback
// int SSL_get_verify_callback(int a1);
// [0x12f9e20] (15 bytes) SSL_CTX_get_verify_mode
// int SSL_CTX_get_verify_mode(int a1);
// [0x12f9e30] (40 bytes) SSL_CTX_get_verify_depth
// int SSL_CTX_get_verify_depth(int a1);
// [0x12f9e60] (15 bytes) SSL_CTX_get_verify_callback
// int SSL_CTX_get_verify_callback(int a1);
// [0x12f9e70] (29 bytes) SSL_set_verify
// int SSL_set_verify(int a1, int a2, int a3);
// [0x12f9e90] (45 bytes) SSL_set_verify_depth
// int SSL_set_verify_depth(int a1, int a2);
// [0x12f9ec0] (14 bytes) SSL_set_read_ahead
// int SSL_set_read_ahead(int a1, int a2);
// [0x12f9ed0] (12 bytes) SSL_get_read_ahead
// int SSL_get_read_ahead(int a1);
// [0x12f9ee0] (22 bytes) SSL_pending
// int SSL_pending(int a1);
// [0x12f9f00] (116 bytes) SSL_get_peer_certificate
// int SSL_get_peer_certificate(int a1);
// [0x12f9f80] (49 bytes) SSL_get_peer_cert_chain
// int SSL_get_peer_cert_chain(int a1);
// [0x12f9fc0] (236 bytes) SSL_copy_session_id
// int SSL_copy_session_id(int a1, uint32_t *a2);
// [0x12fa0b0] (178 bytes) SSL_CTX_check_private_key
// int SSL_CTX_check_private_key(int a1);
// [0x12fa170] (237 bytes) SSL_check_private_key
// int SSL_check_private_key(int a1);
// [0x12fa260] (19 bytes) SSL_get_default_timeout
// int SSL_get_default_timeout(int a1);
// [0x12fa280] (132 bytes) SSL_read
// int SSL_read(int a1, int a2, int a3);
// [0x12fa310] (119 bytes) SSL_peek
// int SSL_peek(int a1, int a2, int a3);
// [0x12fa390] (177 bytes) SSL_write
// int SSL_write(int a1, int a2, int a3);
// [0x12fa450] (36 bytes) SSL_renegotiate
// int SSL_renegotiate(int a1);
// [0x12fa480] (16 bytes) SSL_renegotiate_pending
// bool SSL_renegotiate_pending(int a1);
// [0x12fa490] (59 bytes) SSL_callback_ctrl
// char SSL_callback_ctrl(int a1, int a2, int a3);
// [0x12fa4d0] (12 bytes) SSL_CTX_sessions
// int SSL_CTX_sessions(int a1);
// [0x12fa4e0] (488 bytes) SSL_CTX_ctrl
// char SSL_CTX_ctrl(uint32_t *a1, int a2, int a3, int a4);
// [0x12fa6d0] (62 bytes) SSL_CTX_callback_ctrl
// char SSL_CTX_callback_ctrl(uint32_t *a1, int a2, int a3);
// [0x12fa710] (32 bytes) ssl_cipher_id_cmp
// int ssl_cipher_id_cmp(int a1, int a2);
// [0x12fa760] (36 bytes) ssl_cipher_ptr_id_cmp
// int ssl_cipher_ptr_id_cmp(int a1, int a2);
// [0x12fa790] (35 bytes) SSL_get_ciphers
// int SSL_get_ciphers(int a1);
// [0x12fa7c0] (35 bytes) ssl_get_ciphers_by_id
// int ssl_get_ciphers_by_id(int a1);
// [0x12fa7f0] (113 bytes) SSL_get_cipher_list
// int SSL_get_cipher_list(int a1, int a2);
// [0x12fa870] (144 bytes) SSL_CTX_set_cipher_list
// int SSL_CTX_set_cipher_list(int a1, char *a2);
// [0x12fa900] (152 bytes) SSL_set_cipher_list
// int SSL_set_cipher_list(int a1, char *a2);
// [0x12fa9a0] (253 bytes) SSL_get_shared_ciphers
// char *SSL_get_shared_ciphers(int a1, char *a2, int a3);
// [0x12faaa0] (319 bytes) ssl_cipher_list_to_bytes
// int ssl_cipher_list_to_bytes(uint32_t *a1, int a2, int a3, int (*a4)(void *, int));
// [0x12fabe0] (732 bytes) ssl_bytes_to_cipher_list
// void *ssl_bytes_to_cipher_list(uint32_t *a1, uint8_t *a2, int a3, uint32_t *a4);
// [0x12faec0] (49 bytes) SSL_get_servername
// int SSL_get_servername(int a1, int a2);
// [0x12faf00] (48 bytes) SSL_get_servername_type
// int SSL_get_servername_type(int a1);
// [0x12faf30] (425 bytes) SSL_CTX_free
// void SSL_CTX_free(char *a1);
// [0x12fb0e0] (1602 bytes) SSL_CTX_new
// int SSL_CTX_new(int a1);
// [0x12fb730] (14 bytes) SSL_CTX_set_default_passwd_cb
// int SSL_CTX_set_default_passwd_cb(int a1, int a2);
// [0x12fb740] (14 bytes) SSL_CTX_set_default_passwd_cb_userdata
// int SSL_CTX_set_default_passwd_cb_userdata(int a1, int a2);
// [0x12fb750] (19 bytes) SSL_CTX_set_cert_verify_callback
// int SSL_CTX_set_cert_verify_callback(int a1, int a2, int a3);
// [0x12fb770] (25 bytes) SSL_CTX_set_verify
// int SSL_CTX_set_verify(int a1, int a2, int a3);
// [0x12fb790] (48 bytes) SSL_CTX_set_verify_depth
// int SSL_CTX_set_verify_depth(int a1, int a2);
// [0x12fb7c0] (1477 bytes) ssl_set_cert_masks
// void ssl_set_cert_masks(int a1, int a2);
// [0x12fbd90] (519 bytes) ssl_check_srvr_ecc_cert_and_alg
// int ssl_check_srvr_ecc_cert_and_alg(int a1, int a2);
// [0x12fbfa0] (252 bytes) ssl_get_server_send_cert
// int ssl_get_server_send_cert(int a1);
// [0x12fc0a0] (140 bytes) ssl_get_sign_pkey
// int ssl_get_sign_pkey(int a1, int a2);
// [0x12fc130] (359 bytes) ssl_update_cache
// char ssl_update_cache(uint32_t *a1, int a2);
// [0x12fc2a0] (12 bytes) SSL_get_ssl_method
// int SSL_get_ssl_method(int a1);
// [0x12fc2b0] (133 bytes) SSL_set_ssl_method
// int SSL_set_ssl_method(int a1, int a2);
// [0x12fc340] (70 bytes) ssl_undefined_void_function
// int ssl_undefined_void_function();
// [0x12fc390] (70 bytes) ssl_undefined_const_function
// int ssl_undefined_const_function();
// [0x12fc3e0] (70 bytes) ssl_bad_method
// int ssl_bad_method();
// [0x12fc430] (64 bytes) SSL_get_version
// const char *SSL_get_version(int *a1);
// [0x12fc470] (168 bytes) ssl_clear_cipher_ctx
// int ssl_clear_cipher_ctx(void **a1);
// [0x12fc520] (27 bytes) SSL_get_certificate
// int SSL_get_certificate(int a1);
// [0x12fc540] (27 bytes) SSL_get_privatekey
// int SSL_get_privatekey(int a1);
// [0x12fc560] (27 bytes) SSL_get_current_cipher
// int SSL_get_current_cipher(int a1);
// [0x12fc580] (27 bytes) SSL_get_current_compression
// int SSL_get_current_compression(int a1);
// [0x12fc5a0] (27 bytes) SSL_get_current_expansion
// int SSL_get_current_expansion(int a1);
// [0x12fc5c0] (320 bytes) ssl_init_wbio_buffer
// int ssl_init_wbio_buffer(int a1, int a2);
// [0x12fc700] (88 bytes) ssl_free_wbio_buffer
// void *ssl_free_wbio_buffer(int a1);
// [0x12fc760] (17 bytes) SSL_CTX_set_quiet_shutdown
// int SSL_CTX_set_quiet_shutdown(int a1, int a2);
// [0x12fc780] (15 bytes) SSL_CTX_get_quiet_shutdown
// int SSL_CTX_get_quiet_shutdown(int a1);
// [0x12fc790] (14 bytes) SSL_set_quiet_shutdown
// int SSL_set_quiet_shutdown(int a1, int a2);
// [0x12fc7a0] (12 bytes) SSL_get_quiet_shutdown
// int SSL_get_quiet_shutdown(int a1);
// [0x12fc7b0] (14 bytes) SSL_set_shutdown
// int SSL_set_shutdown(int a1, int a2);
// [0x12fc7c0] (12 bytes) SSL_get_shutdown
// int SSL_get_shutdown(int a1);
// [0x12fc7d0] (11 bytes) SSL_version
// int SSL_version(int a1);
// [0x12fc7e0] (397 bytes) SSL_ctrl
// char SSL_ctrl(uint32_t *a1, int a2, int a3, int a4);
// [0x12fc970] (15 bytes) SSL_get_SSL_CTX
// int SSL_get_SSL_CTX(int a1);
// [0x12fc980] (195 bytes) SSL_set_SSL_CTX
// int SSL_set_SSL_CTX(int a1, int a2);
// [0x12fca50] (37 bytes) SSL_CTX_set_default_verify_paths
// int SSL_CTX_set_default_verify_paths(int a1);
// [0x12fca80] (53 bytes) SSL_CTX_load_verify_locations
// int SSL_CTX_load_verify_locations(int a1, int a2, int a3);
// [0x12fcac0] (17 bytes) SSL_set_info_callback
// int SSL_set_info_callback(int a1, int a2);
// [0x12fcae0] (15 bytes) SSL_get_info_callback
// int SSL_get_info_callback(int a1);
// [0x12fcaf0] (12 bytes) SSL_state
// int SSL_state(int a1);
// [0x12fcb00] (166 bytes) SSL_do_handshake
// int SSL_do_handshake(int a1);
// [0x12fcbb0] (147 bytes) SSL_shutdown
// int SSL_shutdown(int a1);
// [0x12fcc50] (17 bytes) SSL_set_verify_result
// int SSL_set_verify_result(int a1, int a2);
// [0x12fcc70] (15 bytes) SSL_get_verify_result
// int SSL_get_verify_result(int a1);
// [0x12fcc80] (74 bytes) SSL_get_ex_new_index
// int SSL_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x12fccd0] (55 bytes) SSL_set_ex_data
// int SSL_set_ex_data(int a1, int a2, int a3);
// [0x12fcd10] (47 bytes) SSL_get_ex_data
// int SSL_get_ex_data(int a1, int a2);
// [0x12fcd40] (74 bytes) SSL_CTX_get_ex_new_index
// int SSL_CTX_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x12fcd90] (53 bytes) SSL_CTX_set_ex_data
// int SSL_CTX_set_ex_data(int a1, int a2, int a3);
// [0x12fcdd0] (45 bytes) SSL_CTX_get_ex_data
// int SSL_CTX_get_ex_data(int a1, int a2);
// [0x12fce00] (12 bytes) ssl_ok
// int ssl_ok();
// [0x12fce10] (12 bytes) SSL_CTX_get_cert_store
// int SSL_CTX_get_cert_store(int a1);
// [0x12fce20] (62 bytes) SSL_CTX_set_cert_store
// int SSL_CTX_set_cert_store(int a1, int a2);
// [0x12fce60] (12 bytes) SSL_want
// int SSL_want(int a1);
// [0x12fce70] (437 bytes) SSL_get_error
// char SSL_get_error(int a1, int a2);
// [0x12fd030] (50 bytes) SSL_CTX_set_tmp_rsa_callback
// char SSL_CTX_set_tmp_rsa_callback(uint32_t *a1, int a2);
// [0x12fd070] (50 bytes) SSL_set_tmp_rsa_callback
// char SSL_set_tmp_rsa_callback(int a1, int a2);
// [0x12fd0b0] (50 bytes) SSL_CTX_set_tmp_dh_callback
// char SSL_CTX_set_tmp_dh_callback(uint32_t *a1, int a2);
// [0x12fd0f0] (50 bytes) SSL_set_tmp_dh_callback
// char SSL_set_tmp_dh_callback(int a1, int a2);
// [0x12fd130] (50 bytes) SSL_CTX_set_tmp_ecdh_callback
// char SSL_CTX_set_tmp_ecdh_callback(uint32_t *a1, int a2);
// [0x12fd170] (50 bytes) SSL_set_tmp_ecdh_callback
// char SSL_set_tmp_ecdh_callback(int a1, int a2);
// [0x12fd1b0] (194 bytes) SSL_CTX_use_psk_identity_hint
// bool SSL_CTX_use_psk_identity_hint(int a1, char *s);
// [0x12fd280] (234 bytes) SSL_use_psk_identity_hint
// bool SSL_use_psk_identity_hint(int a1, char *s);
// [0x12fd370] (43 bytes) SSL_get_psk_identity_hint
// int SSL_get_psk_identity_hint(int a1);
// [0x12fd3a0] (43 bytes) SSL_get_psk_identity
// int SSL_get_psk_identity(int a1);
// [0x12fd3d0] (17 bytes) SSL_set_psk_client_callback
// int SSL_set_psk_client_callback(int a1, int a2);
// [0x12fd3f0] (17 bytes) SSL_CTX_set_psk_client_callback
// int SSL_CTX_set_psk_client_callback(int a1, int a2);
// [0x12fd410] (17 bytes) SSL_set_psk_server_callback
// int SSL_set_psk_server_callback(int a1, int a2);
// [0x12fd430] (17 bytes) SSL_CTX_set_psk_server_callback
// int SSL_CTX_set_psk_server_callback(int a1, int a2);
// [0x12fd450] (50 bytes) SSL_CTX_set_msg_callback
// char SSL_CTX_set_msg_callback(uint32_t *a1, int a2);
// [0x12fd490] (50 bytes) SSL_set_msg_callback
// char SSL_set_msg_callback(int a1, int a2);
// [0x12fd4d0] (60 bytes) ssl_clear_hash_ctx
// void *ssl_clear_hash_ctx(void **a1);
// [0x12fd510] (93 bytes) ssl_replace_hash
// int ssl_replace_hash(void **a1, int a2);
// [0x12fd570] (106 bytes) SSL_set_connect_state
// void *SSL_set_connect_state(int a1);
// [0x12fd5e0] (66 bytes) SSL_connect
// int SSL_connect(int a1);
// [0x12fd630] (106 bytes) SSL_set_accept_state
// void *SSL_set_accept_state(int a1);
// [0x12fd6a0] (66 bytes) SSL_accept
// int SSL_accept(int a1);
// [0x12fd6f0] (587 bytes) SSL_free
// void SSL_free(char *a1);
// [0x12fd940] (447 bytes) SSL_clear
// bool SSL_clear(int a1);
// [0x12fdb00] (1098 bytes) SSL_new
// int SSL_new(int *a1);
// [0x12fdf50] (843 bytes) SSL_dup
// int SSL_dup(uint32_t *a1);
// [0x12fe2a0] (68 bytes) OBJ_bsearch_ssl_cipher_id
// int OBJ_bsearch_ssl_cipher_id(int a1, int a2, int a3);
// [0x12fe360] (15 bytes) SSL_get_session
// int SSL_get_session(int a1);
// [0x12fe370] (137 bytes) SSL_get1_session
// int SSL_get1_session(int a1);
// [0x12fe400] (74 bytes) SSL_SESSION_get_ex_new_index
// int SSL_SESSION_get_ex_new_index(int a1, int a2, int a3, int a4, int a5);
// [0x12fe450] (55 bytes) SSL_SESSION_set_ex_data
// int SSL_SESSION_set_ex_data(int a1, int a2, int a3);
// [0x12fe490] (47 bytes) SSL_SESSION_get_ex_data
// int SSL_SESSION_get_ex_data(int a1, int a2);
// [0x12fe4c0] (402 bytes) SSL_SESSION_new
// uint32_t *SSL_SESSION_new();
// [0x12fe660] (21 bytes) SSL_SESSION_get_id
// int SSL_SESSION_get_id(int a1, uint32_t *a2);
// [0x12fe680] (384 bytes) SSL_SESSION_free
// void SSL_SESSION_free(char *a1);
// [0x12fe930] (468 bytes) SSL_CTX_remove_session
// int SSL_CTX_remove_session(uint32_t *a1, uint32_t *a2);
// [0x12feb10] (1190 bytes) ssl_get_new_session
// int ssl_get_new_session(int a1, int a2);
// [0x12fefc0] (1011 bytes) SSL_CTX_add_session
// int SSL_CTX_add_session(uint32_t *a1, int a2);
// [0x12ff3c0] (1068 bytes) ssl_get_prev_session
// int ssl_get_prev_session(int a1, void *src, int n, int a4);
// [0x12ff7f0] (392 bytes) SSL_set_session
// bool SSL_set_session(int a1, uint32_t *a2);
// [0x12ff980] (26 bytes) SSL_SESSION_set_timeout
// int SSL_SESSION_set_timeout(int a1, int a2);
// [0x12ff9a0] (17 bytes) SSL_SESSION_get_timeout
// int SSL_SESSION_get_timeout(int a1);
// [0x12ff9c0] (17 bytes) SSL_SESSION_get_time
// int SSL_SESSION_get_time(int a1);
// [0x12ff9e0] (27 bytes) SSL_SESSION_set_time
// int SSL_SESSION_set_time(int a1, int a2);
// [0x12ffa00] (21 bytes) SSL_CTX_set_timeout
// int SSL_CTX_set_timeout(int a1, int a2);
// [0x12ffa20] (14 bytes) SSL_CTX_get_timeout
// int SSL_CTX_get_timeout(int a1);
// [0x12ffa30] (36 bytes) SSL_set_session_secret_cb
// int SSL_set_session_secret_cb(int a1, int a2, int a3);
// [0x12ffa60] (36 bytes) SSL_set_session_ticket_ext_cb
// int SSL_set_session_ticket_ext_cb(int a1, int a2, int a3);
// [0x12ffa90] (276 bytes) SSL_set_session_ticket_ext
// int SSL_set_session_ticket_ext(int a1, void *src, size_t n);
// [0x12ffbb0] (189 bytes) SSL_CTX_flush_sessions
// int SSL_CTX_flush_sessions(int a1, int a2);
// [0x12ffc70] (128 bytes) ssl_clear_bad_session
// int ssl_clear_bad_session(int a1);
// [0x12ffcf0] (14 bytes) SSL_CTX_sess_set_new_cb
// int SSL_CTX_sess_set_new_cb(int a1, int a2);
// [0x12ffd00] (12 bytes) SSL_CTX_sess_get_new_cb
// int SSL_CTX_sess_get_new_cb(int a1);
// [0x12ffd10] (14 bytes) SSL_CTX_sess_set_remove_cb
// int SSL_CTX_sess_set_remove_cb(int a1, int a2);
// [0x12ffd20] (12 bytes) SSL_CTX_sess_get_remove_cb
// int SSL_CTX_sess_get_remove_cb(int a1);
// [0x12ffd30] (14 bytes) SSL_CTX_sess_set_get_cb
// int SSL_CTX_sess_set_get_cb(int a1, int a2);
// [0x12ffd40] (12 bytes) SSL_CTX_sess_get_get_cb
// int SSL_CTX_sess_get_get_cb(int a1);
// [0x12ffd50] (17 bytes) SSL_CTX_set_info_callback
// int SSL_CTX_set_info_callback(int a1, int a2);
// [0x12ffd70] (15 bytes) SSL_CTX_get_info_callback
// int SSL_CTX_get_info_callback(int a1);
// [0x12ffd80] (14 bytes) SSL_CTX_set_client_cert_cb
// int SSL_CTX_set_client_cert_cb(int a1, int a2);
// [0x12ffd90] (12 bytes) SSL_CTX_get_client_cert_cb
// int SSL_CTX_get_client_cert_cb(int a1);
// [0x12ffda0] (14 bytes) SSL_CTX_set_cookie_generate_cb
// int SSL_CTX_set_cookie_generate_cb(int a1, int a2);
// [0x12ffdb0] (14 bytes) SSL_CTX_set_cookie_verify_cb
// int SSL_CTX_set_cookie_verify_cb(int a1, int a2);
// [0x12ffdc0] (78 bytes) PEM_read_bio_SSL_SESSION
// int PEM_read_bio_SSL_SESSION(int a1, int a2, int a3, char *a4);
// [0x12ffe10] (78 bytes) PEM_read_SSL_SESSION
// int PEM_read_SSL_SESSION(int a1, int a2, int a3, char *a4);
// [0x12ffe60] (102 bytes) PEM_write_bio_SSL_SESSION
// int PEM_write_bio_SSL_SESSION(int a1, int a2);
// [0x12ffed0] (102 bytes) PEM_write_SSL_SESSION
// int PEM_write_SSL_SESSION(int a1, int a2);
// [0x13002b0] (12 bytes) tls1_default_timeout
// int tls1_default_timeout();
// [0x13002c0] (70 bytes) tls1_new
// int tls1_new(int a1);
// [0x1300310] (66 bytes) tls1_free
// void tls1_free(int a1);
// [0x1300360] (54 bytes) tls1_clear
// int tls1_clear(uint32_t *a1);
// [0x13003a0] (33 bytes) tls1_ec_curve_id2nid
// int tls1_ec_curve_id2nid(int a1);
// [0x13003d0] (365 bytes) tls1_ec_nid2curve_id
// char tls1_ec_nid2curve_id(int a1);
// [0x1300540] (1837 bytes) ssl_add_clienthello_tlsext
// char *ssl_add_clienthello_tlsext(int a1, uint8_t *a2, unsigned int a3);
// [0x1300c70] (957 bytes) ssl_add_serverhello_tlsext
// char *ssl_add_serverhello_tlsext(int a1, uint8_t *a2, unsigned int a3);
// [0x1301030] (2514 bytes) ssl_parse_clienthello_tlsext
// int ssl_parse_clienthello_tlsext(uint32_t *a1, unsigned int *a2, int a3, int a4, uint32_t *a5);
// [0x1301a10] (1137 bytes) ssl_parse_serverhello_tlsext
// int ssl_parse_serverhello_tlsext(int a1, uint16_t **a2, int a3, int a4, uint32_t *a5);
// [0x1301e90] (580 bytes) ssl_prepare_clienthello_tlsext
// int ssl_prepare_clienthello_tlsext(int a1);
// [0x13020e0] (254 bytes) ssl_prepare_serverhello_tlsext
// int ssl_prepare_serverhello_tlsext(int a1);
// [0x13021e0] (402 bytes) ssl_check_clienthello_tlsext
// int ssl_check_clienthello_tlsext(uint32_t *a1);
// [0x1302380] (609 bytes) ssl_check_serverhello_tlsext
// int ssl_check_serverhello_tlsext(int a1);
// [0x13025f0] (434 bytes) tls1_process_ticket
// int tls1_process_ticket(int *a1, char *src, size_t a3, unsigned int a4, int **a5);
// [0x1302800] (175 bytes) ssl_add_clienthello_renegotiate_ext
// int ssl_add_clienthello_renegotiate_ext(int a1, uint8_t *a2, uint32_t *a3, int a4);
// [0x13028b0] (259 bytes) ssl_parse_clienthello_renegotiate_ext
// int ssl_parse_clienthello_renegotiate_ext(int a1, uint8_t *a2, int a3, uint32_t *a4);
// [0x13029c0] (266 bytes) ssl_add_serverhello_renegotiate_ext
// int ssl_add_serverhello_renegotiate_ext(int a1, uint8_t *a2, uint32_t *a3, int a4);
// [0x1302ad0] (639 bytes) ssl_parse_serverhello_renegotiate_ext
// int ssl_parse_serverhello_renegotiate_ext(int a1, uint8_t *a2, int a3, uint32_t *a4);
// [0x13066e0] (971 bytes) ssl3_client_hello
// int ssl3_client_hello(int a1);
// [0x1306ab0] (2080 bytes) ssl3_get_server_hello
// 0x1306ab0 ssl3_get_server_hello
// [0x13072d0] (1781 bytes) ssl3_get_server_certificate
// 0x13072d0 ssl3_get_server_certificate
// [0x13079d0] (4623 bytes) ssl3_get_key_exchange
// 0x13079d0 ssl3_get_key_exchange
// [0x1308be0] (1249 bytes) ssl3_get_certificate_request
// 0x1308be0 ssl3_get_certificate_request
// [0x13090d0] (663 bytes) ssl3_get_new_session_ticket
// int ssl3_get_new_session_ticket(uint32_t *a1);
// [0x1309370] (536 bytes) ssl3_get_cert_status
// int ssl3_get_cert_status(uint32_t *a1);
// [0x1309590] (189 bytes) ssl3_get_server_done
// int ssl3_get_server_done(uint32_t *a1);
// [0x1309650] (3790 bytes) ssl3_send_client_key_exchange
// int ssl3_send_client_key_exchange(int a1);
// [0x130a520] (995 bytes) ssl3_send_client_verify
// int ssl3_send_client_verify(int a1);
// [0x130a910] (1182 bytes) ssl3_check_cert_and_algorithm
// int ssl3_check_cert_and_algorithm(uint32_t *a1);
// [0x130adb0] (140 bytes) ssl3_check_finished
// int ssl3_check_finished(uint32_t *a1);
// [0x130ae40] (49 bytes) ssl_do_client_cert_cb
// int ssl_do_client_cert_cb(int a1, int a2, int a3);
// [0x130ae80] (514 bytes) ssl3_send_client_certificate
// int ssl3_send_client_certificate(uint32_t *a1);
// [0x130b090] (2575 bytes) ssl3_connect
// 0x130b090 ssl3_connect
// [0x130baa0] (90 bytes) ERR_load_SSL_strings
// int ERR_load_SSL_strings();
// [0x130bb00] (593 bytes) SSL_use_certificate
// int SSL_use_certificate(int a1, int a2);
// [0x130bd60] (479 bytes) SSL_use_certificate_file
// int SSL_use_certificate_file(int a1, int a2, int a3);
// [0x130bf40] (162 bytes) SSL_use_certificate_ASN1
// int SSL_use_certificate_ASN1(int a1, char a2, int a3);
// [0x130bff0] (621 bytes) SSL_use_RSAPrivateKey
// int SSL_use_RSAPrivateKey(int a1, int a2);
// [0x130c260] (481 bytes) SSL_use_RSAPrivateKey_file
// int SSL_use_RSAPrivateKey_file(int a1, int a2, int a3);
// [0x130c450] (170 bytes) SSL_use_RSAPrivateKey_ASN1
// int SSL_use_RSAPrivateKey_ASN1(int a1, int a2, int a3);
// [0x130c500] (509 bytes) SSL_use_PrivateKey
// int SSL_use_PrivateKey(int a1, int *a2);
// [0x130c700] (473 bytes) SSL_use_PrivateKey_file
// int SSL_use_PrivateKey_file(int a1, int a2, int a3);
// [0x130c8e0] (178 bytes) SSL_use_PrivateKey_ASN1
// int SSL_use_PrivateKey_ASN1(size_t a1, int a2, int a3, int a4);
// [0x130c9a0] (593 bytes) SSL_CTX_use_certificate
// int SSL_CTX_use_certificate(int a1, int a2);
// [0x130cc00] (479 bytes) SSL_CTX_use_certificate_file
// int SSL_CTX_use_certificate_file(int a1, int a2, int a3);
// [0x130cde0] (162 bytes) SSL_CTX_use_certificate_ASN1
// int SSL_CTX_use_certificate_ASN1(int a1, int a2, ...);
// [0x130ce90] (621 bytes) SSL_CTX_use_RSAPrivateKey
// int SSL_CTX_use_RSAPrivateKey(int a1, int a2);
// [0x130d100] (473 bytes) SSL_CTX_use_RSAPrivateKey_file
// int SSL_CTX_use_RSAPrivateKey_file(int a1, int a2, int a3);
// [0x130d2e0] (170 bytes) SSL_CTX_use_RSAPrivateKey_ASN1
// int SSL_CTX_use_RSAPrivateKey_ASN1(int a1, int a2, int a3);
// [0x130d390] (509 bytes) SSL_CTX_use_PrivateKey
// int SSL_CTX_use_PrivateKey(int a1, int *a2);
// [0x130d590] (473 bytes) SSL_CTX_use_PrivateKey_file
// int SSL_CTX_use_PrivateKey_file(int a1, int a2, int a3);
// [0x130d770] (178 bytes) SSL_CTX_use_PrivateKey_ASN1
// int SSL_CTX_use_PrivateKey_ASN1(size_t a1, int a2, int a3, int a4);
// [0x130d830] (571 bytes) SSL_CTX_use_certificate_chain_file
// int SSL_CTX_use_certificate_chain_file(int a1, int a2, int a3, int a4);
// [0x130df10] (2570 bytes) tls1_change_cipher_state
// int tls1_change_cipher_state(int a1, int a2);
// [0x130e920] (1259 bytes) tls1_setup_key_block
// int tls1_setup_key_block(int a1);
// [0x130ee10] (949 bytes) tls1_enc
// int tls1_enc(int a1, int a2);
// [0x130f1d0] (391 bytes) tls1_cert_verify_mac
// int tls1_cert_verify_mac(int a1, int a2, int a3);
// [0x130f360] (813 bytes) tls1_final_finish_mac
// int tls1_final_finish_mac(int a1, int a2, int a3, uint32_t *a4);
// [0x130f690] (753 bytes) tls1_mac
// int tls1_mac(int *a1, int a2, int a3);
// [0x130f990] (628 bytes) tls1_generate_master_secret
// int tls1_generate_master_secret(int a1, int a2, char *a3, int a4);
// [0x130fc10] (34 bytes) tls1_alert_code
// int tls1_alert_code(unsigned int a1);
// [0x19819b0] (205 bytes) CRYPTO_get_new_lockid
// int CRYPTO_get_new_lockid(char *a1);
// [0x1981a80] (12 bytes) CRYPTO_num_locks
// int CRYPTO_num_locks();
// [0x1981a90] (22 bytes) CRYPTO_get_dynlock_create_callback
// int CRYPTO_get_dynlock_create_callback();
// [0x1981ab0] (22 bytes) CRYPTO_get_dynlock_lock_callback
// int CRYPTO_get_dynlock_lock_callback();
// [0x1981ad0] (22 bytes) CRYPTO_get_dynlock_destroy_callback
// int CRYPTO_get_dynlock_destroy_callback();
// [0x1981af0] (24 bytes) CRYPTO_set_dynlock_create_callback
// int CRYPTO_set_dynlock_create_callback(int a1);
// [0x1981b10] (24 bytes) CRYPTO_set_dynlock_lock_callback
// int CRYPTO_set_dynlock_lock_callback(int a1);
// [0x1981b30] (24 bytes) CRYPTO_set_dynlock_destroy_callback
// int CRYPTO_set_dynlock_destroy_callback(int a1);
// [0x1981b50] (22 bytes) CRYPTO_get_locking_callback
// int CRYPTO_get_locking_callback();
// [0x1981b70] (22 bytes) CRYPTO_get_add_lock_callback
// int CRYPTO_get_add_lock_callback();
// [0x1981b90] (24 bytes) CRYPTO_set_locking_callback
// int CRYPTO_set_locking_callback(int a1);
// [0x1981bb0] (24 bytes) CRYPTO_set_add_lock_callback
// int CRYPTO_set_add_lock_callback(int a1);
// [0x1981bd0] (18 bytes) CRYPTO_THREADID_set_numeric
// uint32_t *CRYPTO_THREADID_set_numeric(uint32_t *a1, int a2);
// [0x1981bf0] (14 bytes) CRYPTO_THREADID_set_pointer
// uint32_t *CRYPTO_THREADID_set_pointer(uint32_t *a1, int a2);
// [0x1981c00] (40 bytes) CRYPTO_THREADID_set_callback
// int CRYPTO_THREADID_set_callback(int a1);
// [0x1981c30] (22 bytes) CRYPTO_THREADID_get_callback
// int CRYPTO_THREADID_get_callback();
// [0x1981c50] (115 bytes) CRYPTO_THREADID_current
// uint32_t *CRYPTO_THREADID_current(int a1, int a2, uint32_t *a3);
// [0x1981cd0] (50 bytes) CRYPTO_THREADID_cmp
// int CRYPTO_THREADID_cmp(void *s1, void *s2);
// [0x1981d10] (19 bytes) CRYPTO_THREADID_cpy
// uint32_t *CRYPTO_THREADID_cpy(uint32_t *a1, uint32_t *a2);
// [0x1981d30] (12 bytes) CRYPTO_THREADID_hash
// int CRYPTO_THREADID_hash(int a1);
// [0x1981d40] (22 bytes) CRYPTO_get_id_callback
// int CRYPTO_get_id_callback();
// [0x1981d60] (24 bytes) CRYPTO_set_id_callback
// int CRYPTO_set_id_callback(int a1);
// [0x1981d80] (51 bytes) CRYPTO_thread_id
// __pid_t CRYPTO_thread_id();
// [0x1981dc0] (124 bytes) CRYPTO_get_lock_name
// const char *CRYPTO_get_lock_name(int a1);
// [0x1981f00] (214 bytes) CRYPTO_lock
// void CRYPTO_lock(int a1, int a2, int a3, int a4);
// [0x1981fe0] (182 bytes) CRYPTO_add_lock
// int CRYPTO_add_lock(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x19820a0] (215 bytes) CRYPTO_get_dynlock_value
// int CRYPTO_get_dynlock_value(int a1);
// [0x1982180] (299 bytes) CRYPTO_destroy_dynlockid
// void CRYPTO_destroy_dynlockid(int a1);
// [0x19822b0] (613 bytes) CRYPTO_get_new_dynlockid
// int CRYPTO_get_new_dynlockid();
// [0x1982b40] (49 bytes) CRYPTO_get_ex_data_implementation
// int CRYPTO_get_ex_data_implementation();
// [0x1982b80] (144 bytes) CRYPTO_set_ex_data_implementation
// int CRYPTO_set_ex_data_implementation(int a1);
// [0x1982c10] (59 bytes) CRYPTO_ex_data_new_class
// int CRYPTO_ex_data_new_class();
// [0x1982c50] (60 bytes) CRYPTO_cleanup_all_ex_data
// int CRYPTO_cleanup_all_ex_data();
// [0x1982c90] (101 bytes) CRYPTO_get_ex_new_index
// int CRYPTO_get_ex_new_index(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x1982d00] (77 bytes) CRYPTO_new_ex_data
// int CRYPTO_new_ex_data(int a1, int a2, int a3);
// [0x1982d50] (77 bytes) CRYPTO_dup_ex_data
// int CRYPTO_dup_ex_data(int a1, int a2, int a3);
// [0x1982da0] (77 bytes) CRYPTO_free_ex_data
// int CRYPTO_free_ex_data(int a1, int a2, int a3);
// [0x1982df0] (201 bytes) CRYPTO_set_ex_data
// int CRYPTO_set_ex_data(int *a1, int a2, int a3);
// [0x1982ec0] (98 bytes) CRYPTO_get_ex_data
// int CRYPTO_get_ex_data(uint32_t *a1, int a2);
// [0x19835e0] (158 bytes) CRYPTO_set_mem_functions
// int CRYPTO_set_mem_functions(void *a1, void *a2, void *a3);
// [0x1983680] (150 bytes) CRYPTO_set_mem_ex_functions
// char CRYPTO_set_mem_ex_functions(int (*a1)(size_t), int (*a2)(void *, size_t), void *a3);
// [0x1983720] (76 bytes) CRYPTO_set_locked_mem_functions
// int CRYPTO_set_locked_mem_functions(void *a1, void *a2);
// [0x1983770] (76 bytes) CRYPTO_set_locked_mem_ex_functions
// char CRYPTO_set_locked_mem_ex_functions(int (*a1)(size_t), void *a2);
// [0x19837c0] (79 bytes) CRYPTO_set_mem_debug_functions
// int CRYPTO_set_mem_debug_functions(int a1, int a2, int a3, int a4, int a5);
// [0x1983810] (120 bytes) CRYPTO_get_mem_functions
// void CRYPTO_get_mem_functions(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x1983890] (122 bytes) CRYPTO_get_mem_ex_functions
// void CRYPTO_get_mem_ex_functions(int (**a1)(size_t), int (**a2)(void *, size_t), uint32_t *a3);
// [0x1983910] (81 bytes) CRYPTO_get_locked_mem_functions
// void CRYPTO_get_locked_mem_functions(uint32_t *a1, uint32_t *a2);
// [0x1983970] (82 bytes) CRYPTO_get_locked_mem_ex_functions
// void CRYPTO_get_locked_mem_ex_functions(int (**a1)(size_t), uint32_t *a2);
// [0x19839d0] (130 bytes) CRYPTO_get_mem_debug_functions
// uint32_t *CRYPTO_get_mem_debug_functions(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x1983a60] (216 bytes) CRYPTO_malloc_locked
// uint8_t *CRYPTO_malloc_locked(int a1, int a2, int a3);
// [0x1983b40] (99 bytes) CRYPTO_free_locked
// int CRYPTO_free_locked(void *ptr);
// [0x1983bb0] (216 bytes) CRYPTO_malloc
// uint8_t *CRYPTO_malloc(int a1, int a2, int a3);
// [0x1983c90] (99 bytes) CRYPTO_strdup
// char *CRYPTO_strdup(char *s, int a2, int a3);
// [0x1983d00] (230 bytes) CRYPTO_realloc
// uint8_t *CRYPTO_realloc(void *a1, int a2, int a3, int a4);
// [0x1983df0] (284 bytes) CRYPTO_realloc_clean
// uint8_t *CRYPTO_realloc_clean(void *ptr, size_t n, int a3, int a4, int a5);
// [0x1983f10] (99 bytes) CRYPTO_free
// int CRYPTO_free(void *ptr);
// [0x1983f80] (68 bytes) CRYPTO_remalloc
// uint8_t *CRYPTO_remalloc(void *a1, size_t a2);
// [0x1983fd0] (41 bytes) CRYPTO_set_mem_debug_options
// int CRYPTO_set_mem_debug_options(int a1);
// [0x1984000] (36 bytes) CRYPTO_get_mem_debug_options
// int CRYPTO_get_mem_debug_options();
// [0x1984640] (526 bytes) CRYPTO_mem_ctrl
// int CRYPTO_mem_ctrl(int a1);
// [0x1984850] (196 bytes) CRYPTO_is_mem_check_on
// bool CRYPTO_is_mem_check_on(int a1, int a2);
// [0x1984920] (24 bytes) CRYPTO_dbg_set_options
// int CRYPTO_dbg_set_options(int a1);
// [0x1984940] (22 bytes) CRYPTO_dbg_get_options
// int CRYPTO_dbg_get_options();
// [0x1984960] (256 bytes) CRYPTO_push_info_
// int CRYPTO_push_info_(int a1, int a2, int a3, int a4, int a5);
// [0x1984a60] (88 bytes) CRYPTO_pop_info
// bool CRYPTO_pop_info(int a1, int a2);
// [0x1984ac0] (89 bytes) CRYPTO_remove_all_info
// int CRYPTO_remove_all_info(int a1, int a2);
// [0x1984b20] (473 bytes) CRYPTO_dbg_malloc
// int CRYPTO_dbg_malloc(int a1, int a2, void *a3, int a4, int a5, int a6, char a7);
// [0x1984d00] (149 bytes) CRYPTO_dbg_free
// int CRYPTO_dbg_free(int a1, int a2, int a3, int a4);
// [0x1984da0] (228 bytes) CRYPTO_dbg_realloc
// void CRYPTO_dbg_realloc(int a1, int a2, int a3, void *a4, int a5, int a6, int a7, int a8);
// [0x1984e90] (386 bytes) CRYPTO_mem_leaks
// int CRYPTO_mem_leaks(int a1);
// [0x1985020] (137 bytes) CRYPTO_mem_leaks_fp
// int CRYPTO_mem_leaks_fp(int a1);
// [0x19850b0] (148 bytes) CRYPTO_mem_leaks_cb
// void CRYPTO_mem_leaks_cb(char a1);
// [0x19852f0] (34 bytes) ASN1_INTEGER_dup
// int ASN1_INTEGER_dup(int a1);
// [0x1985320] (114 bytes) ASN1_INTEGER_cmp
// int ASN1_INTEGER_cmp(int a1, int a2);
// [0x1985800] (458 bytes) d2i_ASN1_UINTEGER
// size_t *d2i_ASN1_UINTEGER(size_t **a1, void **a2, int a3);
// [0x19859d0] (371 bytes) ASN1_INTEGER_set
// int ASN1_INTEGER_set(int a1, int a2);
// [0x1985b50] (103 bytes) ASN1_INTEGER_get
// int ASN1_INTEGER_get(int *a1);
// [0x1985bc0] (370 bytes) BN_to_ASN1_INTEGER
// int *BN_to_ASN1_INTEGER(int a1, int *a2);
// [0x1985d40] (176 bytes) ASN1_INTEGER_to_BN
// int ASN1_INTEGER_to_BN(uint32_t *a1, int a2);
// [0x1985e30] (48 bytes) EVP_PKEY_asn1_get_count
// int EVP_PKEY_asn1_get_count();
// [0x1985e60] (75 bytes) EVP_PKEY_asn1_get0
// int EVP_PKEY_asn1_get0(int a1);
// [0x1985eb0] (260 bytes) EVP_PKEY_asn1_find
// int EVP_PKEY_asn1_find(uint32_t *a1, int a2);
// [0x1985fc0] (261 bytes) EVP_PKEY_asn1_find_str
// int EVP_PKEY_asn1_find_str(void **a1, char *s, size_t n);
// [0x19860d0] (110 bytes) EVP_PKEY_asn1_add0
// int EVP_PKEY_asn1_add0(int a1);
// [0x1986140] (115 bytes) EVP_PKEY_asn1_get0_info
// int EVP_PKEY_asn1_get0_info(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x19861c0] (12 bytes) EVP_PKEY_get0_asn1
// int EVP_PKEY_get0_asn1(int a1);
// [0x19861d0] (123 bytes) EVP_PKEY_asn1_copy
// uint32_t *EVP_PKEY_asn1_copy(uint32_t *a1, uint32_t *a2);
// [0x1986250] (88 bytes) EVP_PKEY_asn1_free
// int EVP_PKEY_asn1_free(void **a1);
// [0x19862b0] (356 bytes) EVP_PKEY_asn1_new
// void **EVP_PKEY_asn1_new(void *a1, int a2, char *a3, char *a4);
// [0x1986420] (81 bytes) EVP_PKEY_asn1_add_alias
// int EVP_PKEY_asn1_add_alias(void *a1, void *a2);
// [0x1986480] (47 bytes) EVP_PKEY_asn1_set_public
// uint32_t *EVP_PKEY_asn1_set_public(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x19864b0] (26 bytes) EVP_PKEY_asn1_set_private
// uint32_t *EVP_PKEY_asn1_set_private(uint32_t *a1, int a2, int a3, int a4);
// [0x19864d0] (47 bytes) EVP_PKEY_asn1_set_param
// uint32_t *EVP_PKEY_asn1_set_param(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1986500] (14 bytes) EVP_PKEY_asn1_set_free
// int EVP_PKEY_asn1_set_free(int a1, int a2);
// [0x1986510] (14 bytes) EVP_PKEY_asn1_set_ctrl
// int EVP_PKEY_asn1_set_ctrl(int a1, int a2);
// [0x1986520] (49 bytes) ASN1_check_infinite_end
// char ASN1_check_infinite_end(uint32_t *a1, int a2);
// [0x1986560] (49 bytes) ASN1_const_check_infinite_end
// char ASN1_const_check_infinite_end(uint32_t *a1, int a2);
// [0x1986620] (620 bytes) ASN1_get_object
// int ASN1_get_object(uint8_t **a1, int *a2, int *a3, int *a4, int a5);
// [0x1986890] (267 bytes) ASN1_put_object
// uint8_t **ASN1_put_object(uint8_t **a1, int a2, int a3, int a4, char a5);
// [0x19869a0] (24 bytes) ASN1_put_eoc
// int ASN1_put_eoc(uint8_t **a1);
// [0x19869c0] (76 bytes) ASN1_object_size
// int ASN1_object_size(int a1, int a2, int a3);
// [0x1986b00] (338 bytes) ASN1_STRING_set
// int ASN1_STRING_set(int a1, char *s, signed int a3);
// [0x1986c60] (109 bytes) ASN1_STRING_copy
// int ASN1_STRING_copy(int a1, int a2);
// [0x1986cd0] (68 bytes) ASN1_STRING_set0
// int ASN1_STRING_set0(int a1, int a2, int a3);
// [0x1986d20] (147 bytes) ASN1_STRING_type_new
// uint32_t *ASN1_STRING_type_new(int a1);
// [0x1986dc0] (34 bytes) ASN1_STRING_new
// uint32_t *ASN1_STRING_new();
// [0x1986df0] (82 bytes) ASN1_STRING_free
// int ASN1_STRING_free(void **a1);
// [0x1986e50] (100 bytes) ASN1_STRING_dup
// void **ASN1_STRING_dup(int a1);
// [0x1986ec0] (92 bytes) ASN1_STRING_cmp
// int ASN1_STRING_cmp(int a1, int a2);
// [0x1986fc0] (11 bytes) ASN1_STRING_length
// int ASN1_STRING_length(int a1);
// [0x1986fd0] (13 bytes) ASN1_STRING_length_set
// uint32_t *ASN1_STRING_length_set(uint32_t *a1, int a2);
// [0x1986fe0] (12 bytes) ASN1_STRING_type
// int ASN1_STRING_type(int a1);
// [0x1986ff0] (12 bytes) ASN1_STRING_data
// int ASN1_STRING_data(int a1);
// [0x1987000] (443 bytes) d2i_PrivateKey
// uint32_t *d2i_PrivateKey(size_t a1, uint32_t **a2, int a3, int a4);
// [0x19871c0] (345 bytes) d2i_AutoPrivateKey
// uint32_t *d2i_AutoPrivateKey(uint32_t **a1, uint32_t *a2, int a3);
// [0x1987380] (60 bytes) d2i_PKCS8_PRIV_KEY_INFO
// int d2i_PKCS8_PRIV_KEY_INFO(int a1, int a2, int a3);
// [0x19873c0] (52 bytes) i2d_PKCS8_PRIV_KEY_INFO
// int i2d_PKCS8_PRIV_KEY_INFO(int a1, int a2);
// [0x1987400] (36 bytes) PKCS8_PRIV_KEY_INFO_new
// int PKCS8_PRIV_KEY_INFO_new();
// [0x1987430] (44 bytes) PKCS8_PRIV_KEY_INFO_free
// int PKCS8_PRIV_KEY_INFO_free(char a1);
// [0x1987460] (212 bytes) PKCS8_pkey_set0
// int PKCS8_pkey_set0(uint32_t *a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x1987540] (156 bytes) PKCS8_pkey_get0
// int PKCS8_pkey_get0(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5);
// [0x1987b80] (30 bytes) ASN1_tag2bit
// int ASN1_tag2bit(unsigned int a1);
// [0x1988660] (2977 bytes) ASN1_item_ex_d2i
// int ASN1_item_ex_d2i(int *a1, char **a2, int a3, int a4, int a5, int a6, char a7, uint8_t *a8);
// [0x1989820] (58 bytes) ASN1_template_d2i
// int ASN1_template_d2i(int *a1, char **a2, int a3, int *a4);
// [0x1989860] (124 bytes) ASN1_item_d2i
// int ASN1_item_d2i(int *a1, char **a2, int a3, int a4);
// [0x1989cf0] (1221 bytes) ASN1_item_ex_i2d
// int ASN1_item_ex_i2d(int *a1, void **a2, int a3, int a4, int a5);
// [0x198a7b0] (37 bytes) ASN1_template_i2d
// int ASN1_template_i2d(int *a1, void **a2, int *a3);
// [0x198a8f0] (29 bytes) ASN1_item_i2d
// int ASN1_item_i2d(int a1, void **a2, int a3);
// [0x198a910] (29 bytes) ASN1_item_ndef_i2d
// int ASN1_item_ndef_i2d(int a1, void **a2, int a3);
// [0x198a930] (295 bytes) ASN1_primitive_free
// void **ASN1_primitive_free(void **a1, int a2);
// [0x198acb0] (149 bytes) ASN1_template_free
// int ASN1_template_free(void **a1, int a2);
// [0x198ad50] (21 bytes) ASN1_item_ex_free
// int ASN1_item_ex_free(int a1, uint8_t *a2);
// [0x198ad70] (29 bytes) ASN1_item_free
// int ASN1_item_free(char a1, uint8_t *a2);
// [0x198ad90] (280 bytes) ASN1_primitive_new
// int ASN1_primitive_new(uint32_t *a1, int a2);
// [0x198b240] (377 bytes) ASN1_template_new
// int ASN1_template_new(int *a1, int *a2);
// [0x198b3c0] (21 bytes) ASN1_item_ex_new
// int ASN1_item_ex_new(int *a1, int a2);
// [0x198b3e0] (61 bytes) ASN1_item_new
// int ASN1_item_new(int a1);
// [0x198b420] (60 bytes) d2i_ASN1_INTEGER
// int d2i_ASN1_INTEGER(int *a1, char **a2, int a3);
// [0x198b460] (52 bytes) i2d_ASN1_INTEGER
// int i2d_ASN1_INTEGER(int a1, void **a2);
// [0x198b4a0] (36 bytes) ASN1_INTEGER_new
// int ASN1_INTEGER_new();
// [0x198b4d0] (44 bytes) ASN1_INTEGER_free
// int ASN1_INTEGER_free(char a1);
// [0x198b500] (60 bytes) d2i_ASN1_ENUMERATED
// int d2i_ASN1_ENUMERATED(int *a1, char **a2, int a3);
// [0x198b540] (52 bytes) i2d_ASN1_ENUMERATED
// int i2d_ASN1_ENUMERATED(int a1, void **a2);
// [0x198b580] (36 bytes) ASN1_ENUMERATED_new
// int ASN1_ENUMERATED_new();
// [0x198b5b0] (44 bytes) ASN1_ENUMERATED_free
// int ASN1_ENUMERATED_free(char a1);
// [0x198b5e0] (60 bytes) d2i_ASN1_BIT_STRING
// int d2i_ASN1_BIT_STRING(int *a1, char **a2, int a3);
// [0x198b620] (52 bytes) i2d_ASN1_BIT_STRING
// int i2d_ASN1_BIT_STRING(int a1, void **a2);
// [0x198b660] (36 bytes) ASN1_BIT_STRING_new
// int ASN1_BIT_STRING_new();
