#pragma once
// ============================================================================
// G4_UP8Shop/lib/openssl/decompiled/libcurl_net.h
// Library: openssl | Module: libcurl_net
// Binary Address Span: 0x1a49590 .. 0x1a72d40 (279 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1a49590] (164 bytes) curl_global_init
// int curl_global_init(int a1);
// [0x1a49640] (182 bytes) curl_global_init_mem
// char curl_global_init_mem(int a1, void *a2, void *a3, void *a4, void *a5, void *a6);
// [0x1a49700] (87 bytes) curl_global_cleanup
// int curl_global_cleanup();
// [0x1a49760] (73 bytes) curl_easy_init
// int curl_easy_init();
// [0x1a497b0] (59 bytes) curl_easy_setopt
// int curl_easy_setopt(int a1, int a2, ...);
// [0x1a497f0] (252 bytes) curl_easy_perform
// int curl_easy_perform(int a1);
// [0x1a498f0] (38 bytes) curl_easy_cleanup
// int curl_easy_cleanup(int a1);
// [0x1a49920] (27 bytes) Curl_easy_addmulti
// int Curl_easy_addmulti(int a1, int a2);
// [0x1a49940] (133 bytes) Curl_easy_initHandleData
// int Curl_easy_initHandleData(int a1);
// [0x1a499d0] (50 bytes) curl_easy_getinfo
// int curl_easy_getinfo(int a1, int a2, int a3);
// [0x1a49a10] (474 bytes) curl_easy_duphandle
// uint32_t *curl_easy_duphandle(int a1);
// [0x1a49bf0] (384 bytes) curl_easy_reset
// int curl_easy_reset(int a1);
// [0x1a49d70] (378 bytes) curl_easy_pause
// int curl_easy_pause(int *a1, char a2);
// [0x1a49ef0] (209 bytes) curl_easy_recv
// int curl_easy_recv(int a1, void *a2, size_t a3, int *a4);
// [0x1a49fd0] (257 bytes) curl_easy_send
// int curl_easy_send(int a1, int a2, int a3, uint32_t *a4);
// [0x1a4a0e0] (207 bytes) Curl_initinfo
// int Curl_initinfo(int a1);
// [0x1a4a1b0] (1577 bytes) Curl_getinfo
// int Curl_getinfo(int a1, unsigned int a2, uint32_t *a3);
// [0x1a4a840] (287 bytes) Curl_hash_init
// char Curl_hash_init(int *a1, int a2, int a3, int a4, int a5);
// [0x1a4a960] (167 bytes) Curl_hash_alloc
// int *Curl_hash_alloc(int a1, int a2, int a3, int a4);
// [0x1a4aa10] (418 bytes) Curl_hash_add
// int Curl_hash_add(int *a1, void *src, size_t a3, int a4);
// [0x1a4abc0] (158 bytes) Curl_hash_delete
// int Curl_hash_delete(int *a1, int a2, int a3);
// [0x1a4ac60] (122 bytes) Curl_hash_pick
// int Curl_hash_pick(int *a1, int a2, int a3);
// [0x1a4ace0] (87 bytes) Curl_hash_clean
// int Curl_hash_clean(uint32_t *a1);
// [0x1a4ad40] (163 bytes) Curl_hash_clean_with_criterium
// uint32_t *Curl_hash_clean_with_criterium(uint32_t *a1, int a2, int (*a3)(int, uint32_t));
// [0x1a4adf0] (63 bytes) Curl_hash_destroy
// int Curl_hash_destroy(uint32_t *a1);
// [0x1a4ae30] (60 bytes) Curl_hash_str
// int Curl_hash_str(unsigned int a1, int a2, unsigned int a3);
// [0x1a4ae70] (97 bytes) Curl_str_key_compare
// bool Curl_str_key_compare(uint8_t *s1, size_t n, uint8_t *s2, int a4);
// [0x1a4af50] (137 bytes) Curl_global_host_cache_init
// int *Curl_global_host_cache_init();
// [0x1a4afe0] (56 bytes) Curl_global_host_cache_dtor
// int Curl_global_host_cache_dtor();
// [0x1a4b020] (27 bytes) Curl_num_addresses
// int Curl_num_addresses(int a1);
// [0x1a4b040] (84 bytes) Curl_printable_address
// int Curl_printable_address(int a1, char *a2, int a3);
// [0x1a4b0a0] (155 bytes) Curl_hostcache_prune
// uint32_t *Curl_hostcache_prune(uint32_t *a1);
// [0x1a4b140] (270 bytes) Curl_cache_addr
// int Curl_cache_addr(int **a1, int a2, const char *a3, int a4);
// [0x1a4b250] (522 bytes) Curl_resolv
// int Curl_resolv(int ***a1, char *a2, int a3, int *a4);
// [0x1a4b460] (114 bytes) Curl_resolv_timeout
// int Curl_resolv_timeout(int ***a1, char *a2, int a3, int *a4, int a5);
// [0x1a4b4e0] (151 bytes) Curl_resolv_unlock
// int Curl_resolv_unlock(int a1, uint32_t *a2);
// [0x1a4b580] (64 bytes) Curl_mk_dnscache
// int *Curl_mk_dnscache();
// [0x1a4b5c0] (17 bytes) Curl_ipvalid
// bool Curl_ipvalid(int a1);
// [0x1a4b5e0] (142 bytes) Curl_ipv4_resolve_r
// int Curl_ipv4_resolve_r(char *name, int a2);
// [0x1a4b670] (121 bytes) Curl_getaddrinfo
// int Curl_getaddrinfo(uint32_t *a1, char *a2, int a3, uint32_t *a4);
// [0x1a4b6f0] (242 bytes) Curl_inet_ntop
// char *Curl_inet_ntop(int a1, int a2, int a3, uint8_t *a4, char *dest, unsigned int a6);
// [0x1a4b7f0] (291 bytes) Curl_inet_pton
// int Curl_inet_pton(int a1, int a2, int a3, char *a4, uint32_t *a5);
// [0x1a4b920] (68 bytes) Curl_llist_alloc
// uint32_t *Curl_llist_alloc(int a1);
// [0x1a4b970] (181 bytes) Curl_llist_insert_next
// int Curl_llist_insert_next(uint32_t *a1, int a2, int a3);
// [0x1a4ba30] (169 bytes) Curl_llist_remove
// int Curl_llist_remove(int a1, uint32_t *a2, int a3);
// [0x1a4bae0] (77 bytes) Curl_llist_destroy
// int Curl_llist_destroy(int a1, int a2);
// [0x1a4bb30] (12 bytes) Curl_llist_count
// int Curl_llist_count(int a1);
// [0x1a4bb40] (220 bytes) Curl_llist_move
// int Curl_llist_move(uint32_t *a1, int a2, uint32_t *a3, int a4);
// [0x1a4bd80] (58 bytes) curl_msnprintf
// int curl_msnprintf(int a1, int a2, int a3, ...);
// [0x1a4d180] (114 bytes) curl_mvsnprintf
// int curl_mvsnprintf(uint8_t *a1, int a2, char *a3, unsigned int *a4);
// [0x1a4d200] (191 bytes) curl_maprintf
// int curl_maprintf(char *a1, ...);
// [0x1a4d2c0] (191 bytes) curl_mvaprintf
// int curl_mvaprintf(char *a1, unsigned int *a2);
// [0x1a4d380] (59 bytes) curl_msprintf
// int curl_msprintf(uint8_t *a1, char *a2, unsigned int a3);
// [0x1a4d3c0] (57 bytes) curl_mprintf
// int curl_mprintf(char *a1, ...);
// [0x1a4d400] (52 bytes) curl_mfprintf
// int curl_mfprintf(int a1, char *a2, ...);
// [0x1a4d440] (59 bytes) curl_mvsprintf
// int curl_mvsprintf(uint8_t *a1, char *a2, unsigned int *a3);
// [0x1a4d480] (31 bytes) curl_mvprintf
// int curl_mvprintf(char *a1, unsigned int *a2);
// [0x1a4d4a0] (44 bytes) curl_mvfprintf
// int curl_mvfprintf(int a1, char *a2, unsigned int *a3);
// [0x1a4d4d0] (142 bytes) Curl_write
// int Curl_write(int a1, int a2, int a3, int a4, int *a5);
// [0x1a4d560] (101 bytes) Curl_read_plain
// int Curl_read_plain(int fd, void *buf, size_t n, ssize_t *a4);
// [0x1a4d5d0] (401 bytes) Curl_read
// int Curl_read(int *a1, int a2, void *dest, int a4, size_t *a5);
// [0x1a4d770] (659 bytes) Curl_debug
// int Curl_debug(int a1, unsigned int a2, void *ptr, size_t size, int a5);
// [0x1a4da10] (242 bytes) Curl_sendf
// int Curl_sendf(int a1, int *a2, char *a3, ...);
// [0x1a4db10] (234 bytes) Curl_failf
// int Curl_failf(int a1, char *a2, ...);
// [0x1a4dc00] (988 bytes) Curl_client_write
// int (*Curl_client_write(int a1, int a2, char *s, size_t a4))(char *, int, size_t, uint32_t);
// [0x1a4dfe0] (210 bytes) Curl_recv_plain
// ssize_t Curl_recv_plain(int *a1, int a2, void *buf, size_t n, uint32_t *a5);
// [0x1a4e0c0] (210 bytes) Curl_send_plain
// ssize_t Curl_send_plain(int *a1, int a2, void *buf, size_t n, uint32_t *a5);
// [0x1a4e1a0] (88 bytes) Curl_write_plain
// int Curl_write_plain(int *a1, int a2, void *a3, size_t a4, ssize_t *a5);
// [0x1a4e200] (170 bytes) Curl_infof
// void Curl_infof(int a1, char *a2, ...);
// [0x1a4e2b0] (52 bytes) curl_share_init
// uint32_t *curl_share_init();
// [0x1a4e2f0] (401 bytes) curl_share_setopt
// int curl_share_setopt(uint32_t *a1, int a2, int a3);
// [0x1a4e490] (219 bytes) curl_share_cleanup
// int curl_share_cleanup(int a1);
// [0x1a4e570] (97 bytes) Curl_share_lock
// char Curl_share_lock(int a1, int a2, int a3);
// [0x1a4e5e0] (89 bytes) Curl_share_unlock
// char Curl_share_unlock(int a1, int a2);
// [0x1a4e640] (125 bytes) curl_slist_append
// int *curl_slist_append(int a1, int a2);
// [0x1a4e6c0] (76 bytes) curl_slist_free_all
// int curl_slist_free_all(uint32_t *a1);
// [0x1a4e710] (77 bytes) Curl_slist_duplicate
// int *Curl_slist_duplicate(int *a1);
// [0x1a4e7b0] (147 bytes) Curl_ssl_config_matches
// bool Curl_ssl_config_matches(uint32_t *a1, uint32_t *a2);
// [0x1a4e850] (278 bytes) Curl_clone_ssl_config
// int Curl_clone_ssl_config(int a1, int a2);
// [0x1a4e970] (95 bytes) Curl_free_ssl_config
// int Curl_free_ssl_config(uint32_t *a1);
// [0x1a4ea40] (48 bytes) Curl_ssl_init
// int Curl_ssl_init();
// [0x1a4ea70] (43 bytes) Curl_ssl_cleanup
// int Curl_ssl_cleanup();
// [0x1a4eaa0] (109 bytes) Curl_ssl_connect
// int Curl_ssl_connect(uint32_t *a1, int a2);
// [0x1a4eb10] (124 bytes) Curl_ssl_connect_nonblocking
// int Curl_ssl_connect_nonblocking(uint32_t *a1, int a2, uint8_t *a3);
// [0x1a4eb90] (288 bytes) Curl_ssl_getsessionid
// int Curl_ssl_getsessionid(int *a1, uint32_t *a2, uint32_t *a3);
// [0x1a4ecb0] (71 bytes) Curl_ssl_delsessionid
// uint32_t *Curl_ssl_delsessionid(int a1, int a2);
// [0x1a4ed00] (342 bytes) Curl_ssl_addsessionid
// int Curl_ssl_addsessionid(int a1, int a2, int a3);
// [0x1a4ee60] (113 bytes) Curl_ssl_close_all
// int Curl_ssl_close_all(int a1);
// [0x1a4eee0] (42 bytes) Curl_ssl_close
// int Curl_ssl_close(int a1, int a2);
// [0x1a4ef10] (133 bytes) Curl_ssl_shutdown
// int Curl_ssl_shutdown(int a1, int a2);
// [0x1a4efa0] (42 bytes) Curl_ssl_set_engine
// int Curl_ssl_set_engine(int a1, char *a2);
// [0x1a4efd0] (34 bytes) Curl_ssl_set_engine_default
// int Curl_ssl_set_engine_default(int a1);
// [0x1a4f000] (34 bytes) Curl_ssl_engines_list
// int Curl_ssl_engines_list(int a1);
// [0x1a4f030] (120 bytes) Curl_ssl_initsessions
// char Curl_ssl_initsessions(uint32_t *a1, size_t a2);
// [0x1a4f0b0] (42 bytes) Curl_ssl_version
// int Curl_ssl_version(int a1, int a2);
// [0x1a4f0e0] (34 bytes) Curl_ssl_check_cxn
// int Curl_ssl_check_cxn(int a1);
// [0x1a4f110] (42 bytes) Curl_ssl_data_pending
// int Curl_ssl_data_pending(int a1, int a2);
// [0x1a4f140] (103 bytes) Curl_ssl_free_certinfo
// int Curl_ssl_free_certinfo(int a1);
// [0x1a51c40] (325 bytes) Curl_ossl_seed
// int Curl_ossl_seed(int a1);
// [0x1a52f80] (50 bytes) Curl_ossl_init
// int Curl_ossl_init();
// [0x1a52fc0] (43 bytes) Curl_ossl_cleanup
// int Curl_ossl_cleanup();
// [0x1a52ff0] (75 bytes) Curl_ossl_check_cxn
// int Curl_ossl_check_cxn(int a1);
// [0x1a53040] (280 bytes) Curl_ossl_set_engine
// int Curl_ossl_set_engine(int a1, char *a2);
// [0x1a53160] (154 bytes) Curl_ossl_set_engine_default
// int Curl_ossl_set_engine_default(int a1);
// [0x1a53200] (104 bytes) Curl_ossl_engines_list
// int Curl_ossl_engines_list();
// [0x1a53270] (123 bytes) Curl_ossl_close
// void Curl_ossl_close(int a1, int a2);
// [0x1a532f0] (659 bytes) Curl_ossl_shutdown
// int Curl_ossl_shutdown(int *a1, int a2);
// [0x1a53590] (34 bytes) Curl_ossl_session_free
// void Curl_ossl_session_free(char *a1);
// [0x1a535c0] (96 bytes) Curl_ossl_close_all
// int Curl_ossl_close_all(int a1, int a2, int a3);
// [0x1a53620] (29 bytes) Curl_ossl_connect_nonblocking
// char Curl_ossl_connect_nonblocking(void **a1, int a2, uint8_t *a3);
// [0x1a53640] (42 bytes) Curl_ossl_connect
// char Curl_ossl_connect(void **a1, int a2);
// [0x1a53670] (61 bytes) Curl_ossl_data_pending
// bool Curl_ossl_data_pending(int a1, int a2);
// [0x1a536b0] (160 bytes) Curl_ossl_version
// int Curl_ossl_version(int a1, int a2);
// [0x1a53750] (582 bytes) curl_easy_strerror
// const char *curl_easy_strerror(int a1);
// [0x1a539a0] (111 bytes) curl_multi_strerror
// const char *curl_multi_strerror(int a1);
// [0x1a53a10] (79 bytes) curl_share_strerror
// const char *curl_share_strerror(int a1);
// [0x1a53a60] (247 bytes) Curl_strerror
// int Curl_strerror(int a1, int a2, int a3, int a4);
// [0x1a53ce0] (548 bytes) Curl_fillreadbuffer
// int Curl_fillreadbuffer(int a1, char *a2, unsigned int *a3);
// [0x1a53f10] (363 bytes) Curl_readrewind
// int Curl_readrewind(int a1);
// [0x1a54080] (132 bytes) Curl_meets_timecondition
// int Curl_meets_timecondition(int a1, int a2);
// [0x1a54110] (5237 bytes) Curl_readwrite
// int Curl_readwrite(int a1, bool *a2);
// [0x1a55590] (190 bytes) Curl_single_getsock
// int Curl_single_getsock(int *a1, uint32_t *a2, int a3);
// [0x1a55650] (324 bytes) Curl_sleep_time
// int Curl_sleep_time(int64_t a1, int64_t a2, int a3);
// [0x1a557a0] (342 bytes) Curl_pretransfer
// int Curl_pretransfer(int a1);
// [0x1a55900] (9 bytes) Curl_posttransfer
// int Curl_posttransfer();
// [0x1a55910] (1966 bytes) Curl_follow
// int Curl_follow(int a1, char *s, int a3);
// [0x1a560c0] (180 bytes) Curl_reconnect_request
// int Curl_reconnect_request(int *a1);
// [0x1a56180] (258 bytes) Curl_retry_request
// int Curl_retry_request(int a1, char **a2);
// [0x1a56aa0] (207 bytes) Curl_perform
// int Curl_perform(int a1);
// [0x1a56b70] (334 bytes) Curl_setup_transfer
// int Curl_setup_transfer(int *a1, int a2, int64_t a3, char a4, int a5, int a6, int a7);
// [0x1a57000] (41 bytes) Curl_safefree
// int Curl_safefree(int a1);
// [0x1a57340] (64 bytes) Curl_freeset
// int Curl_freeset(int a1);
// [0x1a57380] (171 bytes) Curl_dupset
// int Curl_dupset(uint16_t *a1, int a2);
// [0x1a57430] (170 bytes) Curl_mk_connc
// uint32_t *Curl_mk_connc(int a1, int a2);
// [0x1a574e0] (90 bytes) Curl_rm_connc
// int Curl_rm_connc(int *a1);
// [0x1a57540] (376 bytes) Curl_init_userdefined
// int Curl_init_userdefined(int a1);
// [0x1a576c0] (304 bytes) Curl_open
// int Curl_open(uint32_t *a1);
// [0x1a577f0] (43 bytes) Curl_isPipeliningEnabled
// int Curl_isPipeliningEnabled(int a1);
// [0x1a57820] (458 bytes) Curl_disconnect
// int Curl_disconnect(int a1, uint8_t a2);
// [0x1a59ca0] (540 bytes) Curl_close
// int Curl_close(int a1);
// [0x1a59ec0] (268 bytes) Curl_ch_connc
// int Curl_ch_connc(int a1, uint32_t *a2, int a3);
// [0x1a59fd0] (6936 bytes) Curl_setopt
// int Curl_setopt(int a1, unsigned int a2, int *a3);
// [0x1a5baf0] (57 bytes) Curl_addHandleToPipeline
// int Curl_addHandleToPipeline(int a1, uint32_t *a2);
// [0x1a5bb30] (97 bytes) Curl_removeHandleFromPipeline
// int Curl_removeHandleFromPipeline(int a1, uint32_t *a2);
// [0x1a5bba0] (268 bytes) Curl_getoff_all_pipelines
// int Curl_getoff_all_pipelines(int a1, int a2);
// [0x1a5bcb0] (213 bytes) Curl_connected_proxy
// int Curl_connected_proxy(int a1);
// [0x1a5bd90] (128 bytes) Curl_verboseconnect
// void Curl_verboseconnect(int a1);
// [0x1a5be10] (49 bytes) Curl_protocol_getsock
// int Curl_protocol_getsock(int a1, int a2, int a3);
// [0x1a5be50] (53 bytes) Curl_doing_getsock
// int Curl_doing_getsock(int a1, int a2, int a3);
// [0x1a5be90] (66 bytes) Curl_protocol_connecting
// int Curl_protocol_connecting(int a1, uint8_t *a2);
// [0x1a5bee0] (66 bytes) Curl_protocol_doing
// int Curl_protocol_doing(int a1, uint8_t *a2);
// [0x1a5bf30] (249 bytes) Curl_protocol_connect
// int Curl_protocol_connect(int a1, uint8_t *a2);
// [0x1a5c030] (655 bytes) Curl_setup_conn
// int Curl_setup_conn(int a1, uint8_t *a2);
// [0x1a5c2c0] (190 bytes) Curl_connect
// int Curl_connect(int a1, int *a2, uint8_t *a3, uint8_t *a4);
// [0x1a5c380] (499 bytes) Curl_done
// int Curl_done(int **a1, int a2, uint8_t a3);
// [0x1a5c580] (471 bytes) Curl_do
// int Curl_do(int **a1, uint8_t *a2);
// [0x1a5c760] (87 bytes) Curl_do_more
// int Curl_do_more(uint32_t *a1);
// [0x1a5c7c0] (95 bytes) Curl_reset_reqproto
// int Curl_reset_reqproto(int *a1);
// [0x1a5c930] (51 bytes) Curl_wildcard_init
// int Curl_wildcard_init(int a1);
// [0x1a5c970] (154 bytes) Curl_wildcard_dtor
// void Curl_wildcard_dtor(uint32_t *a1);
// [0x1a5cc00] (262 bytes) Curl_timeleft
// int Curl_timeleft(uint32_t *a1, uint32_t *a2, char a3);
// [0x1a5cd10] (279 bytes) Curl_persistconninfo
// int Curl_persistconninfo(int *a1);
// [0x1a5ce30] (498 bytes) Curl_updateconninfo
// int Curl_updateconninfo(int a1, int fd);
// [0x1a5d030] (167 bytes) Curl_getconnectinfo
// int Curl_getconnectinfo(int a1, int *a2);
// [0x1a5d0e0] (70 bytes) Curl_closesocket
// int Curl_closesocket(int a1, int fd);
// [0x1a5daa0] (475 bytes) Curl_connecthost
// int Curl_connecthost(int *a1, int *a2, uint32_t *a3, int *a4, uint8_t *a5);
// [0x1a5dc80] (844 bytes) Curl_is_connected
// int Curl_is_connected(int a1, int a2, uint8_t *a3);
// [0x1a5e3a0] (233 bytes) Curl_unencode_deflate_write
// int Curl_unencode_deflate_write(int *a1, uint32_t *a2, int a3);
// [0x1a5e490] (1000 bytes) Curl_unencode_gzip_write
// int Curl_unencode_gzip_write(int *a1, int a2, int n);
// [0x1a5e880] (76 bytes) Curl_unencode_cleanup
// int Curl_unencode_cleanup(int *a1);
// [0x1a5eb00] (3481 bytes) Curl_cookie_add
// uint32_t *Curl_cookie_add(int a1, int **a2, char a3, const char *a4, char *a5, char *a6);
// [0x1a5f8a0] (470 bytes) Curl_cookie_init
// uint32_t *Curl_cookie_init(int a1, char *filename, uint32_t *a3, char a4);
// [0x1a5fa80] (154 bytes) Curl_cookie_loadfiles
// void Curl_cookie_loadfiles(int a1);
// [0x1a5fb20] (666 bytes) Curl_cookie_getlist
// uint32_t *Curl_cookie_getlist(int **a1, char *s, char *s2, char a4);
// [0x1a5fdc0] (79 bytes) Curl_cookie_freelist
// uint32_t *Curl_cookie_freelist(uint32_t *a1, char a2);
// [0x1a5fe10] (75 bytes) Curl_cookie_clearall
// uint32_t *Curl_cookie_clearall(int a1);
// [0x1a5fe60] (100 bytes) Curl_cookie_clearsess
// void Curl_cookie_clearsess(uint32_t *a1);
// [0x1a5fed0] (84 bytes) Curl_cookie_cleanup
// void Curl_cookie_cleanup(int a1);
// [0x1a5ff30] (183 bytes) Curl_cookie_list
// int *Curl_cookie_list(int a1);
// [0x1a5fff0] (569 bytes) Curl_flush_cookies
// int Curl_flush_cookies(int a1, int a2);
// [0x1a60230] (90 bytes) Curl_freeaddrinfo
// int Curl_freeaddrinfo(uint32_t *a1);
// [0x1a60290] (375 bytes) Curl_he2ai
// uint32_t *Curl_he2ai(int a1, int16_t a2);
// [0x1a60410] (211 bytes) Curl_ip2addr
// uint32_t *Curl_ip2addr(int a1, char **a2, const char *a3, int16_t a4);
// [0x1a604f0] (108 bytes) Curl_str2addr
// uint32_t *Curl_str2addr(int a1, int a2, char *a3, int16_t a4);
// [0x1a60560] (50 bytes) Curl_memrchr
// uint8_t *Curl_memrchr(unsigned int a1, char a2, int a3);
// [0x1a605a0] (36 bytes) Curl_rand
// int Curl_rand();
// [0x1a605d0] (55 bytes) Curl_srand
// int Curl_srand();
// [0x1a60b30] (303 bytes) curl_easy_escape
// uint8_t *curl_easy_escape(int a1, char *s, size_t a3);
// [0x1a60c60] (50 bytes) curl_escape
// uint8_t *curl_escape(char *a1, size_t a2);
// [0x1a60ca0] (313 bytes) curl_easy_unescape
// uint8_t *curl_easy_unescape(int a1, char *s, int a3, uint32_t *a4);
// [0x1a60de0] (58 bytes) curl_unescape
// uint8_t *curl_unescape(char *a1, int a2);
// [0x1a60e20] (41 bytes) curl_free
// int curl_free(int a1);
// [0x1a61ab0] (164 bytes) Curl_fileinfo_alloc
// uint8_t *Curl_fileinfo_alloc();
// [0x1a61b60] (75 bytes) Curl_fileinfo_dtor
// int Curl_fileinfo_dtor(int a1, int a2);
// [0x1a62100] (2206 bytes) curl_formadd
// char *curl_formadd(uint32_t *a1, uint32_t **a2, char a3);
// [0x1a629a0] (123 bytes) Curl_formclean
// uint32_t **Curl_formclean(uint32_t **a1);
// [0x1a62a20] (139 bytes) curl_formfree
// void curl_formfree(uint32_t *a1);
// [0x1a62ab0] (43 bytes) Curl_FormInit
// char Curl_FormInit(uint32_t *a1, int a2);
// [0x1a62ae0] (239 bytes) Curl_FormReader
// int Curl_FormReader(char *a1, int a2, int a3, uint32_t *a4);
// [0x1a62bd0] (36 bytes) Curl_formpostheader
// int Curl_formpostheader(uint32_t **a1, uint32_t *a2);
// [0x1a62c00] (159 bytes) Curl_FormBoundary
// char *Curl_FormBoundary();
// [0x1a62ca0] (1729 bytes) Curl_getformdata
// int Curl_getformdata(int a1, uint32_t *a2, int *a3, const char *a4, uint64_t *a5);
// [0x1a63370] (321 bytes) curl_formget
// int curl_formget(int *a1, int a2, int (*a3)(int, uint8_t *, size_t));
// [0x1a634c0] (58 bytes) curl_getenv
// int curl_getenv(char *name);
// [0x1a63ad0] (452 bytes) Curl_http_done
// int Curl_http_done(int a1, int a2, char a3);
// [0x1a64120] (249 bytes) Curl_http_connect
// int Curl_http_connect(int a1, uint8_t *a2);
// [0x1a64220] (107 bytes) Curl_checkheaders
// int Curl_checkheaders(int a1, char *s);
// [0x1a64580] (764 bytes) Curl_http_auth_act
// int Curl_http_auth_act(uint8_t *a1);
// [0x1a64880] (408 bytes) Curl_http_output_auth
// int Curl_http_output_auth(int a1, int a2, char *a3, char a4);
// [0x1a64a20] (443 bytes) Curl_http_input_auth
// int Curl_http_input_auth(int *a1, int a2, int a3);
// [0x1a64be0] (45 bytes) Curl_add_buffer_init
// void *Curl_add_buffer_init();
// [0x1a64c10] (637 bytes) Curl_add_buffer_send
// int Curl_add_buffer_send(char **a1, int *a2, uint32_t *a3, int a4, int a5);
// [0x1a64e90] (245 bytes) Curl_add_buffer
// int Curl_add_buffer(char **a1, void *src, int n);
// [0x1a64f90] (149 bytes) Curl_add_bufferf
// int Curl_add_bufferf(char **a1, char *a2, ...);
// [0x1a65030] (257 bytes) Curl_compareheader
// int Curl_compareheader(int a1, char *s, char *a3);
// [0x1a65200] (384 bytes) Curl_add_custom_headers
// int Curl_add_custom_headers(int a1, char **a2);
// [0x1a65380] (383 bytes) Curl_add_timecondition
// int Curl_add_timecondition(int a1, char **a2);
// [0x1a65500] (7483 bytes) Curl_http
// int Curl_http(int *a1, uint8_t *a2);
// [0x1a67240] (4478 bytes) Curl_http_readwrite_headers
// int Curl_http_readwrite_headers(int a1, int a2, size_t *a3, uint8_t *a4);
// [0x1a683c0] (26 bytes) Curl_httpchunk_init
// uint32_t *Curl_httpchunk_init(uint32_t *a1);
// [0x1a683e0] (1272 bytes) Curl_httpchunk_read
// int Curl_httpchunk_read(int a1, char *a2, size_t a3, uint32_t *a4);
// [0x1a68a00] (1475 bytes) Curl_input_digest
// int Curl_input_digest(uint32_t *a1, char a2, uint8_t *a3);
// [0x1a68fd0] (1571 bytes) Curl_output_digest
// int Curl_output_digest(int *a1, char a2, int a3, char *s);
// [0x1a69600] (36 bytes) Curl_digest_cleanup
// int Curl_digest_cleanup(int a1);
// [0x1a698a0] (412 bytes) Curl_input_ntlm
// int Curl_input_ntlm(int a1, char a2, uint8_t *a3);
// [0x1a69a40] (3160 bytes) Curl_output_ntlm
// int Curl_output_ntlm(int *a1, char a2);
// [0x1a6a6a0] (9 bytes) Curl_ntlm_cleanup
// void Curl_ntlm_cleanup();
// [0x1a6a6b0] (3504 bytes) Curl_proxyCONNECT
// int (*Curl_proxyCONNECT(int a1, int a2, int a3, uint16_t a4))(char *, int, size_t, uint32_t);
// [0x1a6b460] (9 bytes) Curl_if2ip
// int Curl_if2ip();
// [0x1a6b470] (106 bytes) Curl_md5it
// int Curl_md5it(uint32_t *a1, char *s);
// [0x1a6bea0] (251 bytes) curl_multi_init
// uint32_t *curl_multi_init();
// [0x1a6bfa0] (13 bytes) Curl_multi_canPipeline
// int Curl_multi_canPipeline(int a1);
// [0x1a6bfb0] (22 bytes) Curl_multi_handlePipeBreak
// int Curl_multi_handlePipeBreak(int a1);
// [0x1a6bfd0] (169 bytes) curl_multi_fdset
// int curl_multi_fdset(uint32_t *a1, int32_t *a2, int32_t *a3, int a4, int *a5);
// [0x1a6c080] (425 bytes) curl_multi_cleanup
// int curl_multi_cleanup(char *a1);
// [0x1a6c230] (145 bytes) curl_multi_info_read
// int curl_multi_info_read(uint32_t *a1, int *a2);
// [0x1a6c2d0] (162 bytes) curl_multi_setopt
// int curl_multi_setopt(int a1, unsigned int a2, int a3);
// [0x1a6c380] (77 bytes) curl_multi_timeout
// int curl_multi_timeout(uint32_t *a1, int *a2);
// [0x1a6c3d0] (544 bytes) Curl_expire
// void Curl_expire(uint32_t *a1, int a2);
// [0x1a6d910] (445 bytes) curl_multi_perform
// int curl_multi_perform(int *a1, uint32_t *a2);
// [0x1a6ddc0] (94 bytes) curl_multi_socket_all
// int curl_multi_socket_all(int *a1, uint32_t *a2);
// [0x1a6de20] (94 bytes) curl_multi_socket_action
// int curl_multi_socket_action(int *a1, int a2, int a3, uint32_t *a4);
// [0x1a6de80] (94 bytes) curl_multi_socket
// int curl_multi_socket(int *a1, int a2, uint32_t *a3);
// [0x1a6dee0] (1242 bytes) curl_multi_remove_handle
// char curl_multi_remove_handle(int *a1, uint32_t *a2);
// [0x1a6e3c0] (672 bytes) curl_multi_add_handle
// int curl_multi_add_handle(int a1, uint32_t *a2);
// [0x1a6e660] (95 bytes) curl_multi_assign
// int curl_multi_assign(int a1, int a2, int a3);
// [0x1a6e6c0] (971 bytes) Curl_parsenetrc
// int Curl_parsenetrc(int a1, char *dest, char *a3, char *filename);
// [0x1a6eaa0] (1698 bytes) curl_getdate
// int curl_getdate(char *s);
// [0x1a6f150] (117 bytes) Curl_gmtime
// int Curl_gmtime(time_t timer, int *a2);
// [0x1a6f690] (41 bytes) Curl_pgrsResetTimes
// uint64_t *Curl_pgrsResetTimes(uint64_t *a1);
// [0x1a6f6c0] (579 bytes) Curl_pgrsTime
// void Curl_pgrsTime(int a1, int a2);
// [0x1a6f910] (86 bytes) Curl_pgrsStartNow
// int Curl_pgrsStartNow(uint32_t *a1);
// [0x1a6f970] (47 bytes) Curl_pgrsSetDownloadCounter
// int Curl_pgrsSetDownloadCounter(int a1, int a2, int a3);
// [0x1a6f9a0] (47 bytes) Curl_pgrsSetUploadCounter
// int Curl_pgrsSetUploadCounter(int a1, int a2, int a3);
// [0x1a6f9d0] (48 bytes) Curl_pgrsSetDownloadSize
// uint32_t *Curl_pgrsSetDownloadSize(uint32_t *a1, int a2, int a3);
// [0x1a6fa00] (48 bytes) Curl_pgrsSetUploadSize
// uint32_t *Curl_pgrsSetUploadSize(uint32_t *a1, int a2, int a3);
// [0x1a6fa30] (3187 bytes) Curl_pgrsUpdate
// int (*Curl_pgrsUpdate(int *a1))(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
// [0x1a706b0] (114 bytes) Curl_pgrsDone
// int (*Curl_pgrsDone(int *a1))(uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t);
// [0x1a70730] (254 bytes) Curl_raw_toupper
// int Curl_raw_toupper(uint8_t a1);
// [0x1a70830] (141 bytes) Curl_raw_equal
// bool Curl_raw_equal(uint8_t *a1, uint8_t *a2);
// [0x1a708c0] (178 bytes) Curl_raw_nequal
// bool Curl_raw_nequal(uint8_t *a1, uint8_t *a2, int a3);
// [0x1a70980] (101 bytes) Curl_strntoupper
// void Curl_strntoupper(uint8_t *a1, uint8_t *a2, int a3);
// [0x1a70b30] (765 bytes) Curl_socket_ready
// int Curl_socket_ready(int a1, int a2, unsigned int a3, unsigned int a4, int a5);
// [0x1a70e30] (863 bytes) Curl_poll
// int Curl_poll(int a1, int a2, unsigned int *a3, int a4, int a5);
// [0x1a71190] (267 bytes) Curl_blockread_all
// int Curl_blockread_all(int a1, int a2, char *a3, size_t a4, uint32_t *a5, int a6);
// [0x1a712a0] (1619 bytes) Curl_SOCKS4
// int Curl_SOCKS4(int a1, char *src, int a3, int a4, int ***a5, char a6);
// [0x1a71900] (2389 bytes) Curl_SOCKS5
// int Curl_SOCKS5(const char *src, const char *a2, char *s, int a4, int a5, int *a6);
// [0x1a72260] (27 bytes) Curl_speedinit
// int Curl_speedinit(int a1);
// [0x1a72280] (331 bytes) Curl_speedcheck
// int Curl_speedcheck(int a1, int a2, int a3);
// [0x1a723d0] (230 bytes) Curl_splay
// int *Curl_splay(int a1, int a2, int *a3);
// [0x1a724c0] (239 bytes) Curl_splayinsert
// int *Curl_splayinsert(int a1, int a2, int *a3, uint32_t *a4);
// [0x1a725b0] (245 bytes) Curl_splaygetbest
// int *Curl_splaygetbest(int a1, int a2, int *a3, int **a4);
// [0x1a726b0] (236 bytes) Curl_splayremovebyaddr
// int Curl_splayremovebyaddr(int *a1, int *a2, int **a3);
// [0x1a727a0] (50 bytes) curl_strequal
// bool curl_strequal(char *s1, char *s2);
// [0x1a727e0] (58 bytes) curl_strnequal
// bool curl_strnequal(char *s1, char *s2, size_t n);
// [0x1a72920] (11 bytes) Curl_tvlong
// int Curl_tvlong(int a1);
// [0x1a729d0] (334 bytes) Curl_base64_decode
// int Curl_base64_decode(uint8_t *a1, uint32_t *a2);
// [0x1a72b20] (541 bytes) Curl_base64_encode
// size_t Curl_base64_encode(int a1, char *s, size_t a3, char **a4);
// [0x1a72d40] (12 bytes) Curl_gethostname
// int Curl_gethostname();
