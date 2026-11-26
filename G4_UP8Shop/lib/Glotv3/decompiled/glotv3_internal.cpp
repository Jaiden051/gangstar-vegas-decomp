#include "Core/Utils/DecompTypes.h"
#include "glotv3_internal.h"
extern "C" int g4_noop_ret0();

pthread_mutex_t *g4_asio_epoll_deregister_descriptor(void *self, int fd, void *a3, bool a4);
int g4_boost_counted_time_rep_construct(void *p_a1, unsigned int *a2, int a3);

// ----------------------------------------------------------------------------
// Function: sub_131E860  (binary VA: 0x131e860)
// Original: sub_131E860
// ----------------------------------------------------------------------------
int * sub_131E860()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2116FF4);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2116FF4, &unk_20D1280);
  dword_2116FF8 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2116FFC = v0;
  dword_2117000 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2117004 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2117010 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2117020 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2117024 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2117028), "UNKNOWN", (int)(uintptr_t)(&v5));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2117028, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_211702C), "IMEI", (int)(uintptr_t)(&v5) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211702C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2117030), "HDIDFV", (int)(uintptr_t)(&v5) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2117030, &unk_20D1280);
  glotv3::Porting::s_CachedIdentifiers[1] = 0;
  glotv3::Porting::s_CachedIdentifiers[2] = 0;
  glotv3::Porting::s_CachedIdentifiers[5] = 0;
  glotv3::Porting::s_CachedIdentifiers[3] = (uintptr_t)(uintptr_t)(&glotv3::Porting::s_CachedIdentifiers[1]);
  glotv3::Porting::s_CachedIdentifiers[4] = (uintptr_t)(uintptr_t)(&glotv3::Porting::s_CachedIdentifiers[1]);
  __cxa_atexit(
    (void (*)(void *))g4_std::map_string_string_7c7b5d::Destroy,
    glotv3::Porting::s_CachedIdentifiers,
    &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_131EC40  (binary VA: 0x131ec40)
// Original: sub_131EC40
// ----------------------------------------------------------------------------
int * sub_131EC40()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (14u + sizeof(_g4_t_v5)) > _g4_s0 ? (14u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v9)) > _g4_s4 ? (28u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v10)) > _g4_s5 ? (32u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v11)) > _g4_s6 ? (36u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v12)) > _g4_s7 ? (40u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v13)) > _g4_s8 ? (44u + sizeof(_g4_t_v13)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 14u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);

  sub_1900D70(&unk_21170C8);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21170C8, &unk_20D1280);
  dword_21170CC = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_21170D0 = v0;
  dword_21170D4 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_21170D8 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_21170E0 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_21170F0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_21170F4 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::PRIORITY_FILE), "Priority.bin", (int)(uintptr_t)(&v5));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::PRIORITY_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::STREAMED_FILE), "Stream.bin", (int)(uintptr_t)(&v5) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::STREAMED_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::BATCHING_FILE), "Batched.bin", (int)(uintptr_t)(&v6));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::BATCHING_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::RESUMING_FILE), "Resume.bin", (int)(uintptr_t)(&v6) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::RESUMING_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::DEVICEID_FILE), "Device.bin", (int)(uintptr_t)(&v6) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::DEVICEID_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::SESSIONS_FILE), "Sessions.bin", (int)(uintptr_t)(&v6) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::SESSIONS_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::TOKENIZE_FILE), "Token.bin", (int)(uintptr_t)(&v7));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::TOKENIZE_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::GAMETIME_FILE), "Timer.bin", (int)(uintptr_t)(&v7) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::GAMETIME_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::DEBUGLOG_FILE), "LibSpy.bin", (int)(uintptr_t)(&v7) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::DEBUGLOG_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::EVENTS_DIRECTORY), "gv3", (int)(uintptr_t)(&v7) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::EVENTS_DIRECTORY, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::QADEBUG_TXT_FILE), "QADEBUG.txt", (int)(uintptr_t)(&v8));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::QADEBUG_TXT_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::QADEBUG_LOG_FILE), "QADEBUG_LOG.txt", (int)(uintptr_t)(&v8) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::QADEBUG_LOG_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::QADEBUG_WAS_HERE), "QADEBUG_WAS_HERE.txt", (int)(uintptr_t)(&v8) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::QADEBUG_WAS_HERE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::QADEBUG_ANDROID_PATH_FIX), "/sdcard/gameloft/games", (int)(uintptr_t)(&v8) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::QADEBUG_ANDROID_PATH_FIX, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::REFUSED_ANDROID_PATH_FIX), "/sdcard/gameloft/games/gv3qa", (int)(uintptr_t)(&v9));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::REFUSED_ANDROID_PATH_FIX, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::DOCUMENT_FILE), "events.json", (int)(uintptr_t)(&v9) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::DOCUMENT_FILE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ASYNC_SUFFIX), ".Async", (int)(uintptr_t)(&v9) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ASYNC_SUFFIX, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::SHA1_SUFFIX), ".sha1", (int)(uintptr_t)(&v9) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::SHA1_SUFFIX, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::NIX_EOL), "\r\n", (int)(uintptr_t)(&v10));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::NIX_EOL, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::CR), "\r", (int)(uintptr_t)(&v10) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::CR, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::BACKSLASH), "/", (int)(uintptr_t)(&v10) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::BACKSLASH, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::HASHTAG), " # ", (int)(uintptr_t)(&v10) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::HASHTAG, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::PACKAGE), "for package with UUID: ", (int)(uintptr_t)(&v11));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::PACKAGE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ALL_DIGITS), "0123456789", (int)(uintptr_t)(&v11) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ALL_DIGITS, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ERROR_CODE_IS), "Error code is: ", (int)(uintptr_t)(&v11) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ERROR_CODE_IS, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::NOT_AVAILABLE), "N/A", (int)(uintptr_t)(&v11) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::NOT_AVAILABLE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ETS_NOT_AVAILABLE_STRING), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ETS_NOT_AVAILABLE_STRING, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ODD_ZERO_STRING), (char *)&a0[2], (int)(uintptr_t)(&v12) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ODD_ZERO_STRING, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::APP_INSTALL_KEY), "icanhas_glotv3", (int)(uintptr_t)(&v12) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::APP_INSTALL_KEY, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::APP_INSTALL_KEY_VALUE), "yes_youcanhas_glotv3", (int)(uintptr_t)(&v12) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::APP_INSTALL_KEY_VALUE, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::META_DATA_KEY_CHANNEL_ID), "CHANNEL_ID", (int)(uintptr_t)(&v13));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::META_DATA_KEY_CHANNEL_ID, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ETS_GAIA_SERVICE_NAME), "ets", (int)(uintptr_t)(&v13) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ETS_GAIA_SERVICE_NAME, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ETS_DELAY_HEADER), "X-ETS-delay", (int)(uintptr_t)(&v13) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ETS_DELAY_HEADER, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&glotv3::system::ETS_HEADER_KEY_VALUE_DELIMITER), ": ", (int)(uintptr_t)(&v13) + 3);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &glotv3::system::ETS_HEADER_KEY_VALUE_DELIMITER, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sub_132001A  (binary VA: 0x132001a)
// Original: sub_132001A
// ----------------------------------------------------------------------------
void sub_132001A()
{
  typedef int _g4_t_v0;
  typedef uint8_t _g4_t_v1[20];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v0) + 1, "could not convert calendar time to UTC time", (int)(uintptr_t)(&v0));
  sub_19042E0(v1, (char *)&v0 + 1);
  std::terminate();
}



// ============================================================================
// Address:   0x1320060 (size: 93 bytes)
// Symbol:    sub_1320060
// Demangled: sub_1320060
// ============================================================================
void *sub_1320060()
{
  *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
  _cxa_guard_release(g4_guard_d940a9bded);
  __cxa_atexit(
    (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
    &g4_rapidjson_NullValue,
    &unk_20D1280);
  return &g4_rapidjson_NullValue;
}


// ============================================================================
// Address:   0x13200bd (size: 89 bytes)
// Symbol:    sub_13200BD
// Demangled: sub_13200BD
// ============================================================================
void __noreturn sub_13200BD()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Day of month value is out of range 1..31", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_noop_dtor((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068D98);
  std::terminate();
}


// ============================================================================
// Address:   0x1320116 (size: 111 bytes)
// Symbol:    sub_1320116
// Demangled: sub_1320116
// ============================================================================
void __noreturn sub_1320116(int *a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v4)) > _g4_s0 ? (7u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 7u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *a1;
  v3 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4) + 1, a2, (int)(uintptr_t)(&v4));
  sub_19042E0(v5, (char *)&v4 + 1);
  g4_noop_dtor((char *)&v4 + 1);
  v5[2] = v2;
  v5[3] = v3;
  v5[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v5[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x1320185 (size: 89 bytes)
// Symbol:    sub_1320185
// Demangled: sub_1320185
// ============================================================================
void __noreturn sub_1320185()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Year is out of valid range: 1400..10000", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_noop_dtor((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DC8);
  std::terminate();
}


// ============================================================================
// Address:   0x13201de (size: 89 bytes)
// Symbol:    sub_13201DE
// Demangled: sub_13201DE
// ============================================================================
void __noreturn sub_13201DE()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Month number is out of range 1..12", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_noop_dtor((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DB0);
  std::terminate();
}


// ============================================================================
// Address:   0x1320240 (size: 464 bytes)
// Symbol:    sub_1320240
// Demangled: sub_1320240
// ============================================================================
char *sub_1320240(void **a1, const glotv3::EventValue::Self *a2)
{
  unsigned int v3;
  char *v4;
  char *v5;
  char *v6;
  char *result;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  char *dest;
  int v13;
  unsigned int v14;
  int v15;
  char *v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  char *src;
  int v25;

  v3 = (unsigned int)(uintptr_t)(a1[1]);
  v4 = (char *)a1[9];
  v5 = (char *)*a1;
  if ( v3 - ((v4 - (char *)((uint8_t *)*a1)) >> 2) <= 1 )
  {
    src = (char *)a1[5];
    v8 = (v4 - src) >> 2;
    v25 = v8 + 1;
    v9 = v8 + 2;
    v10 = 2 * (v8 + 2);
    if ( v3 <= v10 )
    {
      v14 = 3;
      if ( v3 != 0 )
      {
        v14 = 2 * v3 + 2;
        if ( v14 > 0x3FFFFFFF )
          sub_18FFEE0(v5, v10);
      }
      v15 = (int)(uintptr_t)(operator new(4 * v14));
      v16 = (char *)a1[5];
      dest = (char *)(v15 + 4 * ((v14 - v9) >> 1));
      v17 = ((uint8_t *)a1[9] + 4 - (uint8_t *)(v16)) >> 2;
      if ( v17 != 0 )
      {
        v22 = v15;
        memmove(dest, v16, 4 * v17);
        v15 = v22;
      }
      v21 = v15;
      operator delete(*a1);
      a1[1] = (void *)v14;
      *a1 = (void *)v21;
    }
    else
    {
      v11 = v4 + 4 - src;
      dest = &v5[4 * ((v3 - v9) >> 1)];
      if ( src <= dest )
      {
        v20 = v11 >> 2;
        if ( v20 != 0 )
          memmove(&dest[4 * v25 + -4 * v20], src, 4 * v20);
      }
      else
      {
        v13 = v11 >> 2;
        if ( v13 != 0 )
          memmove(dest, src, 4 * v13);
      }
    }
    a1[5] = dest;
    v18 = *(char **)dest;
    a1[3] = *(void **)dest;
    a1[4] = v18 + 480;
    v4 = &dest[4 * v25 - 4];
    a1[9] = v4;
    v19 = *(char **)v4;
    a1[7] = *(void **)v4;
    a1[8] = v19 + 480;
  }
  *((uint32_t *)v4 + 1) = (uint32_t)(uintptr_t)(operator new(0x1E0u));
  if ( a1[6] != nullptr )
    glotv3::EventValue::Construct((glotv3::EventValue::Self *)a1[6], a2);
  v6 = (char *)a1[9] + 4;
  a1[9] = v6;
  result = *(char **)v6;
  a1[7] = *(void **)v6;
  a1[6] = result;
  a1[8] = result + 480;
  return result;
}


// ============================================================================
// Address:   0x1320410 (size: 321 bytes)
// Symbol:    sub_1320410
// Demangled: sub_1320410
// ============================================================================
int sub_1320410(int a1)
{
  void ***v1;
  void **v2;
  int v3;
  void **v4;
  void **v5;
  void *v6;
  void **v7;
  unsigned int v8;
  void *v9;
  void **v11;
  void **v12;
  void **v13;
  void **v14;
  void **v15;
  unsigned int v16;
  int v18;
  glotv3::EventValue::Self *v19;
  glotv3::EventValue::Self *v20;
  glotv3::EventValue::Self *v21;
  glotv3::EventValue::Self *v22;

  v19 = *(glotv3::EventValue::Self **)(a1 + 28);
  v21 = *(glotv3::EventValue::Self **)(a1 + 32);
  v16 = *(uint32_t *)(a1 + 40);
  v20 = *(glotv3::EventValue::Self **)(a1 + 12);
  v22 = *(glotv3::EventValue::Self **)(a1 + 20);
  v18 = *(uint32_t *)(a1 + 24);
  v1 = (void ***)(v18 + 4);
  if ( v16 > v18 + 4 )
  {
    do
    {
      v2 = *v1;
      v3 = (int)(uintptr_t)(*v1 + 120);
      do
      {
        v12 = v2;
        v2 += 12;
        glotv3::EventValue::Destroy(v12);
      }
      while ( v2 != (void **)v3 );
      ++v1;
    }
    while ( v16 > (unsigned int)(uintptr_t)(v1) );
  }
  if ( v16 == v18 )
  {
    if ( v19 != v20 )
    {
      v11 = (void **)v20;
      do
      {
        v15 = v11;
        v11 += 12;
        glotv3::EventValue::Destroy(v15);
      }
      while ( v19 != (glotv3::EventValue::Self *)v11 );
    }
  }
  else
  {
    if ( v20 != v22 )
    {
      v4 = (void **)v20;
      do
      {
        v13 = v4;
        v4 += 12;
        glotv3::EventValue::Destroy(v13);
      }
      while ( v22 != (glotv3::EventValue::Self *)v4 );
    }
    if ( v19 != v21 )
    {
      v5 = (void **)v21;
      do
      {
        v14 = v5;
        v5 += 12;
        glotv3::EventValue::Destroy(v14);
      }
      while ( v19 != (glotv3::EventValue::Self *)v5 );
    }
  }
  v6 = *(void **)(a1 + 4);
  if ( v6 != nullptr )
  {
    v7 = *(void ***)(a1 + 24);
    v8 = *(uint32_t *)(a1 + 40) + 4;
    if ( v8 > (unsigned int)(uintptr_t)(v7) )
    {
      do
      {
        v9 = *v7++;
        operator delete(v9);
      }
      while ( v8 > (unsigned int)(uintptr_t)(v7) );
      v6 = *(void **)(a1 + 4);
    }
    operator delete(v6);
  }
  *(uint8_t *)a1 = 0;
  return a1;
}


// ============================================================================
// Address:   0x1320740 (size: 244 bytes)
// Symbol:    sub_1320740
// Demangled: sub_1320740
// ============================================================================
int sub_1320740(int *a1, uint8_t *a2)
{
  size_t n;
  uint8_t *v4;
  int v5;
  int v6;

  if ( a2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( a1[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *a2 != 0 )
  {
    v4 = a2;
    do
      ++v4;
    while ( *v4 != 0 );
    n = v4 - a2;
  }
  v5 = *a1;
  v6 = *a1 + 32 * a1[1];
  if ( v5 == v6 )
    return 0;
  while ( *(uint32_t *)(v5 + 4) != n || memcmp(*(const void **)v5, a2, n) != 0 )
  {
    v5 += 32;
    if ( v5 == v6 )
      return 0;
  }
  return v5;
}


// ============================================================================
// Address:   0x1320960 (size: 1014 bytes)
// Symbol:    sub_1320960
// Demangled: sub_1320960
// ============================================================================
uint32_t *sub_1320960(uint32_t *a1)
{
  struct tm *v1;
  uint16_t tm_mday;
  uint16_t v3;
  uint16_t v4; // si
  int tm_min;
  int tm_sec;
  int tm_hour;
  int16_t v9;
  unsigned int v10;
  int v11;
  int64_t v12; // rax
  int v14;
  uint16_t v15;
  int64_t v27; // 0:edi.4,4:ebp.4
  typedef __suseconds_t _g4_t_tv_usec;
  typedef int _g4_t_v18;
  typedef int16_t _g4_t_tm_mon;
  typedef int16_t _g4_t_tm_year;
  typedef uint64_t _g4_t_v21;
  typedef uint8_t _g4_t_v22[5];
  typedef int _g4_t_v23;
  typedef struct timeval _g4_t_tv;
  typedef int (**_g4_t_v25)(int);
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_tv_usec)) > _g4_s0 ? (0u + sizeof(_g4_t_tv_usec)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_tm_mon)) > _g4_s2 ? (20u + sizeof(_g4_t_tm_mon)) : _g4_s2,
    _g4_s4 = (22u + sizeof(_g4_t_tm_year)) > _g4_s3 ? (22u + sizeof(_g4_t_tm_year)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (43u + sizeof(_g4_t_v22)) > _g4_s5 ? (43u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v23)) > _g4_s6 ? (48u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_tv)) > _g4_s7 ? (52u + sizeof(_g4_t_tv)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v25)) > _g4_s8 ? (60u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_tp)) > _g4_s9 ? (68u + sizeof(_g4_t_tp)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_tv_usec &tv_usec = *reinterpret_cast<_g4_t_tv_usec *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_tm_mon &tm_mon = *reinterpret_cast<_g4_t_tm_mon *>(_g4_sf + 20u);
  _g4_t_tm_year &tm_year = *reinterpret_cast<_g4_t_tm_year *>(_g4_sf + 22u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 43u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 68u);

  gettimeofday(&tv, nullptr);
  *(uint32_t *)&v22[1] = tv.tv_sec;
  tv_usec = tv.tv_usec;
  v1 = gmtime_r((const time_t *)&v22[1], &tp);
  if ( v1 == nullptr )
    sub_132001A();
  tm_mday = v1->tm_mday;
  v18 = tm_mday;
  if ( tm_mday == 0 || tm_mday > 0x1Fu )
    sub_13200BD();
  tm_mon = v1->tm_mon;
  v3 = tm_mon + 1;
  if ( tm_mon == -1 || v3 > 0xCu )
    sub_13201DE();
  tm_year = v1->tm_year;
  v4 = tm_year + 1900;
  if ( (uint16_t)(tm_year + 1900) <= 0x577u || v4 > 0x2710u )
    sub_1320185();
  if ( v3 <= 0xBu )
  {
    v14 = 1 << v3;
    v15 = 30;
    if ( (v14 & 0xA50) == 0 )
    {
      if ( (v14 & 4) == 0 )
        goto LABEL_9;
      LOBYTE(v15) = 28;
      if ( (((uint8_t)tm_year + 108) & 3) == 0 )
      {
        v15 = 29;
        if ( v4 == 100 * (v4 / 0x64u) )
          v15 = 29 - (v4 % 0x190u != 0);
      }
    }
    if ( tm_mday > v15 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v23), "Day of month is not valid for year", (int)(uintptr_t)(v22));
      sub_19042A0(&v25, &v23);
      v25 = (int (**)(int))(uintptr_t)(&off_2068D98);
      std::terminate();
    }
  }
LABEL_9:
  tm_min = v1->tm_min;
  tm_sec = v1->tm_sec;
  tm_hour = v1->tm_hour;
  v21 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(tv_usec), 0);
  if ( tm_min < 0 || tm_hour < 0 || tm_sec < 0 )
    v27 = 1000000
        * (-3600LL * (int)__builtin_abs(tm_hour) - 60LL * (int)__builtin_abs(tm_min) - (int)__builtin_abs(tm_sec))
        - v21;
  else
    v27 = 1000000 * (tm_sec + 60LL * tm_min + 3600LL * tm_hour) + v21;
  v9 = (14 - (uint16_t)(tm_mon + 1)) / 12;
  v10 = ((uint16_t)(tm_year + 6700 - v9) >> 2)
      + 365 * (uint16_t)(tm_year + 6700 - v9)
      + v18
      + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
      - (uint16_t)(tm_year + 6700 - v9) / 0x64u
      + (uint16_t)(tm_year + 6700 - v9) / 0x190u
      - 32045;
  *a1 = 1;
  a1[1] = 0;
  if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32045
    || ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32044
    || ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32043 )
  {
    if ( ((unsigned int)v27 | (HIDWORD(v27) + 0x80000000)) != 0 )
    {
      if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
         + 365 * (uint16_t)(tm_year + 6700 - v9)
         + v18
         + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
         - (uint16_t)(tm_year + 6700 - v9) / 0x64u
         + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32045 )
        goto LABEL_32;
      if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
         + 365 * (uint16_t)(tm_year + 6700 - v9)
         + v18
         + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
         - (uint16_t)(tm_year + 6700 - v9) / 0x64u
         + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32044 )
      {
LABEL_37:
        v27 = 0x7FFFFFFFFFFFFFFFLL;
        goto LABEL_31;
      }
      if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
         + 365 * (uint16_t)(tm_year + 6700 - v9)
         + v18
         + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
         - (uint16_t)(tm_year + 6700 - v9) / 0x64u
         + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32043 )
        goto LABEL_30;
    }
    else if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
            + 365 * (uint16_t)(tm_year + 6700 - v9)
            + v18
            + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
            - (uint16_t)(tm_year + 6700 - v9) / 0x64u
            + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32043 )
    {
      goto LABEL_42;
    }
LABEL_36:
    v27 = 0x7FFFFFFFFFFFFFFELL;
    goto LABEL_31;
  }
  if ( ((unsigned int)v27 | (HIDWORD(v27) + 0x80000000)) != 0 )
  {
    v11 = 20 * v10;
    v12 = 500654080LL * v10;
    HIDWORD(v12) += v11;
    *(uint64_t *)a1 = v27 + v12;
    return a1;
  }
LABEL_42:
  if ( ((unsigned int)v27 | (HIDWORD(v27) + 0x80000000)) == 0 )
  {
    if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
       + 365 * (uint16_t)(tm_year + 6700 - v9)
       + v18
       + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
       - (uint16_t)(tm_year + 6700 - v9) / 0x64u
       + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32044 )
      goto LABEL_31;
    goto LABEL_36;
  }
LABEL_32:
  if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32044 )
    goto LABEL_37;
  if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32045 )
  {
    v27 = 0x8000000000000000LL;
    goto LABEL_31;
  }
LABEL_30:
  v27 += v10;
LABEL_31:
  *(uint64_t *)a1 = v27;
  return a1;
}


// ============================================================================
// Address:   0x1320d60 (size: 351 bytes)
// Symbol:    sub_1320D60
// Demangled: sub_1320D60
// ============================================================================
uint32_t *sub_1320D60(uint32_t *a1, int a2, int a3, int a4, uint32_t *a5)
{
  int v5;
  uint32_t *v6;
  int v7;
  int v8;
  int v9;
  unsigned int v10;
  char *v11;
  char *v12;
  char *v13;
  uint32_t *v14;
  char v18;

  v18 = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v18 = *a5 < *(uint32_t *)(a4 + 16);
  v5 = (int)(uintptr_t)(operator new(0x20u));
  v6 = (uint32_t *)v5;
  if ( v5 != -16 )
  {
    v7 = 0;
    *(uint32_t *)(v5 + 16) = *a5;
    v8 = 0;
    v9 = (a5[2] - a5[1]) >> 2;
    v6[5] = 0;
    v10 = -1431655765 * v9;
    v6[6] = 0;
    v6[7] = 0;
    if ( -1431655765 * v9 != 0 )
    {
      if ( v10 > 0x15555555 )
        sub_18FFEE0(v10, v9);
      v7 = 4 * v9;
      v8 = (int)(uintptr_t)(operator new(4 * v9));
    }
    v6[5] = v8;
    v6[6] = v8;
    v6[7] = v8 + v7;
    v11 = (char *)a5[2];
    v12 = (char *)a5[1];
    if ( v11 != v12 )
    {
      v13 = (char *)a5[1];
      v14 = (uint32_t *)v8;
      do
      {
        if ( v14 != nullptr )
        {
          *v14 = *(uint32_t *)v13;
          v14[1] = *((uint32_t *)v13 + 1);
          v14[2] = *((uint32_t *)v13 + 2);
        }
        v13 += 12;
        v14 += 3;
      }
      while ( v11 != v13 );
      v8 += 4 * ((unsigned int)(v11 - (v12 + 12)) >> 2) + 12;
    }
    v6[6] = v8;
  }
  sub_1904970(v18, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = (uint32_t)(uintptr_t)(v6);
  return a1;
}


// ============================================================================
// Address:   0x1320ec0 (size: 219 bytes)
// Symbol:    sub_1320EC0
// Demangled: sub_1320EC0
// ============================================================================
int sub_1320EC0(int a1, int a2, int *a3)
{
  uint32_t *v4;
  int v5;
  uint32_t *v6;
  char v7; // bp
  int v8;
  int v10;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);

  v4 = *(uint32_t **)(a2 + 8);
  if ( v4 == nullptr )
  {
    v4 = (uint32_t *)(a2 + 4);
    goto LABEL_11;
  }
  v5 = *a3;
  while ( 1 )
  {
    v8 = v4[4];
    if ( v8 <= v5 )
      break;
    v6 = (uint32_t *)v4[2];
    v7 = 1;
    if ( v6 == nullptr )
      goto LABEL_7;
LABEL_4:
    v4 = v6;
  }
  v6 = (uint32_t *)v4[3];
  v7 = 0;
  if ( v6 != nullptr )
    goto LABEL_4;
LABEL_7:
  v12 = (int)(uintptr_t)(v4);
  if ( v7 == 0 )
  {
    if ( v5 <= v8 )
      goto LABEL_9;
LABEL_13:
    sub_1320D60(v13, a2, 0, v12, a3);
LABEL_14:
    v10 = v13[0];
    *(uint8_t *)(a1 + 4) = 1;
    *(uint32_t *)a1 = v10;
    return a1;
  }
LABEL_11:
  if ( *(uint32_t **)(a2 + 12) == v4 )
  {
    sub_1320D60(v13, a2, 0, (int)(uintptr_t)(v4), a3);
    goto LABEL_14;
  }
  v12 = (int)(uintptr_t)(v4);
  v4 = (uint32_t *)sub_19048F0(v4);
  if ( *a3 > v4[4] )
    goto LABEL_13;
LABEL_9:
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v4);
  *(uint8_t *)(a1 + 4) = 0;
  return a1;
}


// ============================================================================
// Address:   0x1320fa0 (size: 326 bytes)
// Symbol:    sub_1320FA0
// Demangled: sub_1320FA0
// ============================================================================
int sub_1320FA0()
{
  int v0;
  int v1;
  int owner;
  int i;
  int *v4;
  int v5;
  typedef int (**_g4_t_v7)(std::exception *);
  typedef int (**_g4_t_v8)(std::exception *);
  typedef int (**_g4_t_v9)(std::exception *);
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v8)) > _g4_s1 ? (24u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v9)) > _g4_s2 ? (44u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v0 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v0 != 0 )
      {
        sub_1235D60(&v7, v0, "boost:: mutex constructor failed in pthread_mutex_init");
        v7 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v1 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    sub_1235D60(&v8, v1, "boost: mutex lock failed in pthread_mutex_lock");
    v8 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
        owner != 0;
        owner = *(v4 - 1) )
  {
    v4 = (int *)(owner + i - 4);
    i = *v4;
  }
  do
    v5 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    sub_1235D60(&v9, v5, "boost: mutex unlock failed in pthread_mutex_unlock");
    v9 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return 0;
}


// ============================================================================
// Address:   0x13210f0 (size: 631 bytes)
// Symbol:    sub_13210F0
// Demangled: sub_13210F0
// ============================================================================
int sub_13210F0(unsigned int *a1)
{
  int v2;
  int v3;
  unsigned int nusers;
  int v5;
  int v6;
  int result;
  unsigned int *count;
  int v9;
  unsigned int *v10;
  int v11;
  unsigned int *v12;
  unsigned int *v13;
  unsigned int *v14;
  int v15;
  unsigned int *v16;
  typedef unsigned int **_g4_t_v17;
  typedef int (**_g4_t_v18)(std::exception *);
  typedef int (**_g4_t_v19)(std::exception *);
  typedef int (**_g4_t_v20)(std::exception *);
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v17)) > _g4_s0 ? (12u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v18)) > _g4_s1 ? (20u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (40u + sizeof(_g4_t_v19)) > _g4_s2 ? (40u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (60u + sizeof(_g4_t_v20)) > _g4_s3 ? (60u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v2 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v2 != 0 )
      {
        sub_1235D60(&v18, v2, "boost:: mutex constructor failed in pthread_mutex_init");
        v18 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v3 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    sub_1235D60(&v19, v3, "boost: mutex lock failed in pthread_mutex_lock");
    v19 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  if ( boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__size[16]
           & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__size[16]
            & 3);
    v5 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v5 = nusers;
    }
    if ( v5 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v6 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
     / nusers
     + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
      % nusers != 0);
  if ( v6 != 0 )
  {
    count = (unsigned int *)boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    v9 = nusers * v6;
    if ( boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count != 0
      && (unsigned int)(uintptr_t)(a1) >= boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count )
    {
      while ( 1 )
      {
        v13 = (unsigned int *)*count;
        if ( *count == 0 || a1 < v13 )
          break;
        count = (unsigned int *)*count;
      }
      v17 = (unsigned int **)count;
      v14 = (unsigned int *)((char *)a1 + nusers * ((v9 - nusers) / nusers));
      *v14 = (unsigned int)(uintptr_t)(v13);
      if ( a1 != v14 )
      {
        v15 = -nusers;
        v16 = (unsigned int *)((char *)v14 + v15);
        if ( a1 == (unsigned int *)((char *)v14 + v15) )
        {
          v16 = v14;
        }
        else
        {
          while ( 1 )
          {
            *v16 = (unsigned int)(uintptr_t)(v14);
            if ( a1 == (unsigned int *)((char *)v16 + v15) )
              break;
            v14 = v16;
            v16 = (unsigned int *)((char *)v16 + v15);
          }
        }
        *a1 = (unsigned int)(uintptr_t)(v16);
      }
      *v17 = a1;
    }
    else
    {
      v10 = (unsigned int *)((char *)a1 + nusers * ((v9 - nusers) / nusers));
      *v10 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
      if ( a1 != v10 )
      {
        v11 = -nusers;
        v12 = (unsigned int *)((char *)v10 + v11);
        if ( a1 == (unsigned int *)((char *)v10 + v11) )
        {
          v12 = v10;
        }
        else
        {
          while ( 1 )
          {
            *v12 = (unsigned int)(uintptr_t)(v10);
            if ( a1 == (unsigned int *)((char *)v12 + v11) )
              break;
            v10 = v12;
            v12 = (unsigned int *)((char *)v12 + v11);
          }
        }
        *a1 = (unsigned int)(uintptr_t)(v12);
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = (unsigned int)(uintptr_t)(a1);
    }
  }
  do
    result = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( result == 4 );
  if ( result != 0 )
  {
    sub_1235D60(&v20, result, "boost: mutex unlock failed in pthread_mutex_unlock");
    v20 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return result;
}


// ============================================================================
// Address:   0x1321700 (size: 92 bytes)
// Symbol:    sub_1321700
// Demangled: sub_1321700
// ============================================================================
int sub_1321700(pthread_mutex_t *mutex)
{
  int result;
  typedef int (**_g4_t_v2)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  do
    result = pthread_mutex_lock(mutex);
  while ( result == 4 );
  if ( result != 0 )
  {
    sub_1235D60(&v2, result, "boost: mutex lock failed in pthread_mutex_lock");
    v2 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return result;
}


// ============================================================================
// Address:   0x1321760 (size: 92 bytes)
// Symbol:    sub_1321760
// Demangled: sub_1321760
// ============================================================================
int sub_1321760(pthread_mutex_t *mutex)
{
  int result;
  typedef int (**_g4_t_v2)(std::exception *);
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  do
    result = pthread_mutex_unlock(mutex);
  while ( result == 4 );
  if ( result != 0 )
  {
    sub_1235D60(&v2, result, "boost: mutex unlock failed in pthread_mutex_unlock");
    v2 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return result;
}


// ============================================================================
// Address:   0x13217c0 (size: 548 bytes)
// Symbol:    sub_13217C0
// Demangled: sub_13217C0
// ============================================================================
int sub_13217C0(pthread_mutex_t *a1, uint32_t *a2, int a3)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  bool v11;
  int v12;
  void (*v13)(uint32_t, uint32_t *, int64_t *, uint32_t);
  typedef void **_g4_t_address;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef char _g4_t_v19;
  typedef pthread_cond_t _g4_t_cond;
  typedef uint32_t *_g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_address)) > _g4_s0 ? (8u + sizeof(_g4_t_address)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v18)) > _g4_s2 ? (16u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v19)) > _g4_s3 ? (20u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_cond)) > _g4_s4 ? (24u + sizeof(_g4_t_cond)) : _g4_s4,
    _g4_s6 = (72u + sizeof(_g4_t_v21)) > _g4_s5 ? (72u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (76u + sizeof(_g4_t_v22)) > _g4_s6 ? (76u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v23)) > _g4_s7 ? (80u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v24)) > _g4_s8 ? (84u + sizeof(_g4_t_v24)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 20u);
  _g4_t_cond &cond = *reinterpret_cast<_g4_t_cond *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 72u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 76u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 80u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 84u);

  a2[1] = (uint32_t)(uintptr_t)(sub_18F81E0(a3, a2));
  *a2 = 0;
  if ( __sync_fetch_and_add(&G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (2)))), 0) != 0 )
  {
    v21 = nullptr;
    v22 = 0;
    v4 = pthread_cond_init(&cond, nullptr);
    (void)sub_18F81E0(v6, v5);
    if ( v4 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
      sub_1320116((int *)&cond + 2, "event");
    *((uint32_t *)&cond + 11) = (uintptr_t)&cond;
    v23 = 0;
    v24 = 0;
    v7 = 0;
    address = (void **)_emutls_get_address(&unk_20BABFC);
    *address = (uint32_t *)&cond + 6;
    v18 = (int)(uintptr_t)(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))));
    pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(a1) + (24 * (1))));
    v19 = 1;
    while ( boost::asio::detail::task_io_service::do_run_one(
              (boost::asio::detail::task_io_service *)a1,
              (int)(uintptr_t)(&v18),
              &G4_MUTEX_COUNT(&(cond)),
              (int)(uintptr_t)(a2)) != 0 )
    {
      v7 += v7 != -1;
      if ( v19 == 0 )
      {
        pthread_mutex_lock((pthread_mutex_t *)v18);
        v19 = 1;
      }
    }
    if ( v19 != 0 )
      pthread_mutex_unlock((pthread_mutex_t *)v18);
    *address = ((g4_glibc_pthread_cond_t *)&(cond))->__mutex;
    pthread_cond_destroy(&cond);
    v10 = v21;
    if ( v21 != nullptr )
    {
      v17 = v7;
      do
      {
        v11 = *v10 == 0;
        v21 = (uint32_t *)*v10;
        v12 = 0;
        if ( !v11 )
          v12 = v22;
        v22 = v12;
        *v10 = 0;
        v13 = (void (*)(uint32_t, uint32_t *, int64_t *, uint32_t))v10[1];
        *((uint32_t *)&G4_MUTEX_ALIGN(&(cond)) + 4) = 0;
        *((uint32_t *)&G4_MUTEX_ALIGN(&(cond)) + 5) = (uint32_t)(uintptr_t)(sub_18F81E0(v9, v8));
        v13(0, v10, (int64_t *)((g4_glibc_pthread_cond_t *)&cond)->__wakeup_seq, 0);
        v10 = v21;
      }
      while ( v21 != nullptr );
      v7 = v17;
    }
    if ( G4_MUTEX_COUNT(&(cond)) != 0 )
      operator delete(((void *)(intptr_t)G4_MUTEX_COUNT(&(cond))));
    return v7;
  }
  else
  {
    boost::asio::detail::task_io_service::stop(a1);
    return 0;
  }
}


// ============================================================================
// Address:   0x13219f0 (size: 754 bytes)
// Symbol:    sub_13219F0
// Demangled: sub_13219F0
// ============================================================================
int sub_13219F0(int a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int fd;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int *v15;
  int *v16;
  int v17;
  int v18;
  volatile int32_t **v19;
  int v20;
  volatile int32_t **v21;
  int v22;
  volatile int32_t **v23;
  void *v24;
  void **v25;
  unsigned int v26;
  void *v27;
  int v29;
  volatile int32_t **v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  typedef int _g4_t_v46;
  typedef unsigned int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint32_t _g4_t_optval[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v46)) > _g4_s0 ? (0u + sizeof(_g4_t_v46)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v48)) > _g4_s1 ? (8u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v49)) > _g4_s2 ? (12u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v50)) > _g4_s3 ? (16u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v51)) > _g4_s4 ? (20u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v52)) > _g4_s5 ? (24u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v53)) > _g4_s6 ? (28u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v54)) > _g4_s7 ? (36u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_optval)) > _g4_s8 ? (40u + sizeof(_g4_t_optval)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 8u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 12u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 16u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 20u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 24u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 36u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 40u);

  v2 = *(uint32_t *)(a1 + 44);
  v3 = *(uint32_t *)(a1 + 48);
  if ( v3 != -1 )
  {
    g4_asio_epoll_deregister_descriptor(
      *(void **)(v2 + 20),
      v3,
      (void *)(a1 + 56),
      (*(uint8_t *)(a1 + 52) & 0x40) == 0);
    sub_18F81E0(v5, v4);
    fd = *(uint32_t *)(a1 + 48);
    if ( fd == -1 )
      goto LABEL_5;
    if ( (*(uint8_t *)(a1 + 52) & 8) != 0 )
    {
      optval[0] = 0;
      optval[1] = 0;
      sub_18F81E0(v7, v6);
      *(uint8_t *)(a1 + 52) |= 8u;
      *(uint32_t *)__errno(v34, v33) = 0;
      v35 = setsockopt(fd, 1, 13, optval, 8u);
      sub_18F81E0(v37, v36);
      __errno(v39, v38);
      if ( v35 == 0 )
        sub_18F81E0(v7, v6);
    }
    *(uint32_t *)__errno(v7, v6) = 0;
    v9 = close(fd);
    v12 = (int)(uintptr_t)(sub_18F81E0(v11, v10));
    v15 = (int *)__errno(v14, v13);
    v6 = *v15;
    if ( v9 == 0 )
      goto LABEL_5;
    v46 = *v15;
    if ( v12 = (int *)(intptr_t) sub_18F81E0(v7, v6) && v46 == 11 || (v32 = (int)(uintptr_t)(sub_18F81E0(v31, v46)), v6 = v46, v12 == v32) && v46 == 11 )
    {
      v54 = 0;
      ioctl(fd, 0x5421u, &v54);
      *(uint8_t *)(a1 + 52) &= 0xFCu;
      *(uint32_t *)__errno(v41, v40) = 0;
      v9 = close(fd);
      sub_18F81E0(v43, v42);
      __errno(v45, v44);
    }
    if ( v9 == 0 )
LABEL_5:
      sub_18F81E0(v7, v6);
  }
  v50 = *(uint32_t *)(a1 + 28);
  v52 = *(uint32_t *)(a1 + 32);
  v48 = *(uint32_t *)(a1 + 40);
  v51 = *(uint32_t *)(a1 + 12);
  v53 = *(uint32_t *)(a1 + 20);
  v49 = *(uint32_t *)(a1 + 24);
  v16 = (int *)(v49 + 4);
  if ( v48 > v49 + 4 )
  {
    do
    {
      v17 = *v16;
      v18 = *v16 + 512;
      do
      {
        v19 = (volatile int32_t **)(v17 + 4);
        v17 += 8;
        boost::detail::shared_count::Destroy(v19);
      }
      while ( v17 != v18 );
      ++v16;
    }
    while ( v48 > (unsigned int)(uintptr_t)(v16) );
  }
  if ( v48 == v49 )
  {
    if ( v50 != v51 )
    {
      v29 = v51;
      do
      {
        v30 = (volatile int32_t **)(v29 + 4);
        v29 += 8;
        boost::detail::shared_count::Destroy(v30);
      }
      while ( v50 != v29 );
    }
  }
  else
  {
    if ( v51 != v53 )
    {
      v20 = v51;
      do
      {
        v21 = (volatile int32_t **)(v20 + 4);
        v20 += 8;
        boost::detail::shared_count::Destroy(v21);
      }
      while ( v53 != v20 );
    }
    if ( v50 != v52 )
    {
      v22 = v52;
      do
      {
        v23 = (volatile int32_t **)(v22 + 4);
        v22 += 8;
        boost::detail::shared_count::Destroy(v23);
      }
      while ( v50 != v22 );
    }
  }
  v24 = *(void **)(a1 + 4);
  if ( v24 != nullptr )
  {
    v25 = *(void ***)(a1 + 24);
    v26 = *(uint32_t *)(a1 + 40) + 4;
    if ( v26 > (unsigned int)(uintptr_t)(v25) )
    {
      do
      {
        v27 = *v25++;
        operator delete(v27);
      }
      while ( v26 > (unsigned int)(uintptr_t)(v25) );
      v24 = *(void **)(a1 + 4);
    }
    operator delete(v24);
  }
  *(uint8_t *)a1 = 0;
  return a1;
}


// ============================================================================
// Address:   0x1321dd0 (size: 408 bytes)
// Symbol:    sub_1321DD0
// Demangled: sub_1321DD0
// ============================================================================
void sub_1321DD0(pthread_mutex_t **a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  volatile int32_t *v5;
  pthread_mutex_t *v6;
  pthread_mutex_t ***address;
  pthread_mutex_t *v8;
  uint8_t *lock;
  int v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  bool v14;
  pthread_mutex_t **v15;
  pthread_mutex_t *v16;
  uint32_t *kind;
  uint32_t *owner;
  typedef char _g4_t_is_continuation;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef volatile int32_t *_g4_t_v25;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (15u + sizeof(_g4_t_is_continuation)) > _g4_s0 ? (15u + sizeof(_g4_t_is_continuation)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_mutex)) > _g4_s1 ? (20u + sizeof(_g4_t_mutex)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v21)) > _g4_s2 ? (24u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v22)) > _g4_s3 ? (28u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v23)) > _g4_s4 ? (32u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v24)) > _g4_s5 ? (36u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v25)) > _g4_s6 ? (40u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_is_continuation &is_continuation = *reinterpret_cast<_g4_t_is_continuation *>(_g4_sf + 15u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);

  v2 = *a2;
  v3 = a2[1];
  v4 = a2[2];
  v5 = (volatile int32_t *)a2[3];
  v22 = v2;
  v23 = v3;
  v24 = v4;
  v25 = v5;
  if ( v5 != nullptr )
    __sync_add_and_fetch(v5 + 1, 1);
  v6 = *a1;
  is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)&v22);
  address = (pthread_mutex_t ***)_emutls_get_address(&unk_20BABFC);
  if ( *address == nullptr )
    goto LABEL_9;
  v8 = (*address)[1];
  if ( v8 == nullptr )
    goto LABEL_9;
  lock = (uint8_t *)((int32_t *)(v8))[0];
  if ( ((int32_t *)(v8))[0] == 0 )
    goto LABEL_9;
  ((int32_t *)(v8))[0] = 0;
  if ( *lock <= 0x1Bu )
  {
    operator delete(lock);
LABEL_9:
    v10 = (int)(uintptr_t)(operator new(0x1Du));
    *(uint8_t *)(v10 + 28) = 28;
    lock = (uint8_t *)v10;
    goto LABEL_10;
  }
  lock[28] = *lock;
LABEL_10:
  *(uint32_t *)lock = 0;
  *((uint32_t *)lock + 1) = (uint32_t)(uintptr_t)((void (*)(int, uint32_t *))boost::asio::detail::completion_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor::Self>,boost::_bi::list1<boost::_bi::value<boost::shared_ptr<glotv3::SingletonMutexedProcessor::Self>>>>>::do_complete);
  v11 = v22;
  *((uint32_t *)lock + 2) = 0;
  *((uint32_t *)lock + 3) = v11;
  v12 = v23;
  *((uint32_t *)lock + 5) = v24;
  v13 = v25;
  v14 = v25 == nullptr;
  *((uint32_t *)lock + 4) = v12;
  *((uint32_t *)lock + 6) = (uint32_t)(uintptr_t)(v13);
  if ( !v14 )
    __sync_add_and_fetch(v13 + 1, 1);
  if ( ((uint8_t *)(v6))[20] == 0 && is_continuation == 0 )
    goto LABEL_22;
  v15 = *address;
  if ( *address == nullptr )
    goto LABEL_22;
  while ( v6 != *v15 )
  {
    v15 = (pthread_mutex_t **)v15[2];
    if ( v15 == nullptr )
      goto LABEL_22;
  }
  v16 = v15[1];
  if ( v16 != nullptr )
  {
    ++((int32_t *)(v16))[4];
    *(uint32_t *)lock = 0;
    kind = (uint32_t *)((int32_t *)(v16))[3];
    if ( kind != nullptr )
    {
      *kind = (uint32_t)(uintptr_t)(lock);
      ((int32_t *)(v16))[3] = (int)(uintptr_t)(lock);
    }
    else
    {
      ((int32_t *)(v16))[3] = (int)(uintptr_t)(lock);
      ((int32_t *)(v16))[2] = (int)(uintptr_t)(lock);
    }
  }
  else
  {
LABEL_22:
    __sync_fetch_and_add(&G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v6) + (24 * (2)))), 1u);
    mutex = reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v6) + (24 * (1)));
    pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v6) + (24 * (1))));
    v21 = 1;
    *(uint32_t *)lock = 0;
    owner = ((uint32_t *)(intptr_t)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v6) + (24 * (2)))));
    if ( owner != nullptr )
    {
      *owner = (uint32_t)(uintptr_t)(lock);
      G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v6) + (24 * (2)))) = (int)(uintptr_t)(lock);
    }
    else
    {
      G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v6) + (24 * (2)))) = (int)(uintptr_t)(lock);
      G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v6) + (24 * (2)))) = (unsigned int)(uintptr_t)(lock);
    }
    boost::asio::detail::task_io_service::wake_one_thread_and_unlock(
      (boost::asio::detail::task_io_service *)v6,
      (boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *)&mutex);
    if ( v21 != 0 )
      pthread_mutex_unlock(mutex);
  }
  boost::detail::shared_count::Destroy(&v25);
}


// ============================================================================
// Address:   0x1322fd0 (size: 302 bytes)
// Symbol:    _ZN6glotv35Utils8ToStringIjEESsT_
// Demangled: std::string glotv3::Utils::ToString<unsigned int>(unsigned int)
// ============================================================================
template<> uint32_t *glotv3::Utils::ToString<unsigned int>(uint32_t *a1, unsigned int a2)
{
  int v3;
  int *i;
  unsigned int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef int (**_g4_t_v9)(std::exception *);
  typedef int (**_g4_t_v10)(std::exception *);
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  do
    v3 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    sub_1235D60(&v9, v3, "boost: mutex lock failed in pthread_mutex_lock");
    v9 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  {
    char g4_num_buf[32];
    char *g4_p = g4_num_buf + sizeof(g4_num_buf);
    do
    {
      *--g4_p = (char)('0' + (a2 % 0xAu));
      a2 /= 0xAu;
    }
    while ( a2 != 0 );
    sub_193A9B0((int)(uintptr_t)(a1), 0, dword_213B808[0], (int *)g4_p, (size_t)((g4_num_buf + sizeof(g4_num_buf)) - g4_p));
  }
  do
    v6 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v6 == 4 );
  if ( v6 != 0 )
  {
    sub_1235D60(&v10, v6, "boost: mutex unlock failed in pthread_mutex_unlock");
    v10 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return a1;
}


// ============================================================================
// Address:   0x1324370 (size: 321 bytes)
// Symbol:    _ZN6glotv35Utils8ToStringIiEESsT_
// Demangled: std::string glotv3::Utils::ToString<int>(int)
// ============================================================================
template<> uint32_t *glotv3::Utils::ToString<int>(uint32_t *a1, int a2)
{
  int v2;
  unsigned int v3;
  uint8_t *i;
  uint8_t *v5;
  int v6;
  typedef int (**_g4_t_v8)(std::exception *);
  typedef int (**_g4_t_v9)(std::exception *);
  typedef uint8_t _g4_t_v10[23];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v9)) > _g4_s1 ? (28u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (69u + sizeof(_g4_t_v10)) > _g4_s2 ? (69u + sizeof(_g4_t_v10)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 69u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    sub_1235D60(&v8, v2, "boost: mutex lock failed in pthread_mutex_lock");
    v8 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  {
    char g4_num_buf[32];
    char *g4_p = g4_num_buf + sizeof(g4_num_buf);
    uint32_t g4_u = (a2 < 0) ? (0u - (uint32_t)a2) : (uint32_t)a2;
    do
    {
      *--g4_p = (char)('0' + (g4_u % 0xAu));
      g4_u /= 0xAu;
    }
    while ( g4_u != 0 );
    if ( a2 < 0 )
      *--g4_p = '-';
    sub_193A9B0((int)(uintptr_t)(a1), 0, dword_213B808[0], (uint8_t *)g4_p, (size_t)((g4_num_buf + sizeof(g4_num_buf)) - g4_p));
  }
  do
    v6 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v6 == 4 );
  if ( v6 != 0 )
  {
    sub_1235D60(&v9, v6, "boost: mutex unlock failed in pthread_mutex_unlock");
    v9 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  return a1;
}


// ============================================================================
// Address:   0x1324bc0 (size: 809 bytes)
// Symbol:    _ZN6glotv35Utils8ToStringIN4gaia11GaiaRequest13eResponseTypeEEESsT_
// Demangled: std::string glotv3::Utils::ToString_eResponseType(gaia::GaiaRequest::eResponseType)
// ============================================================================
uint32_t *glotv3::Utils::ToString_eResponseType(uint32_t *a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  typedef char _g4_t_v7;
  typedef uint32_t _g4_t_v8[5];
  typedef int (**_g4_t_v9)(std::exception *);
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef int (**_g4_t_v12)(int);
  typedef uint32_t _g4_t_v13[4];
  typedef void *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef char _g4_t_v17[4];
  typedef int _g4_t_v18;
  typedef uint32_t *_g4_t_v19;
  typedef uint32_t _g4_t_v20[29];
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (10u + sizeof(_g4_t_v7)) > _g4_s0 ? (10u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v9)) > _g4_s2 ? (32u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (52u + sizeof(_g4_t_v10)) > _g4_s3 ? (52u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v11)) > _g4_s4 ? (56u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v12)) > _g4_s5 ? (60u + sizeof(_g4_t_v12)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v13)) > _g4_s6 ? (64u + sizeof(_g4_t_v13)) : _g4_s6,
    _g4_s8 = (80u + sizeof(_g4_t_v14)) > _g4_s7 ? (80u + sizeof(_g4_t_v14)) : _g4_s7,
    _g4_s9 = (84u + sizeof(_g4_t_v15)) > _g4_s8 ? (84u + sizeof(_g4_t_v15)) : _g4_s8,
    _g4_s10 = (88u + sizeof(_g4_t_v16)) > _g4_s9 ? (88u + sizeof(_g4_t_v16)) : _g4_s9,
    _g4_s11 = (92u + sizeof(_g4_t_v17)) > _g4_s10 ? (92u + sizeof(_g4_t_v17)) : _g4_s10,
    _g4_s12 = (96u + sizeof(_g4_t_v18)) > _g4_s11 ? (96u + sizeof(_g4_t_v18)) : _g4_s11,
    _g4_s13 = (100u + sizeof(_g4_t_v19)) > _g4_s12 ? (100u + sizeof(_g4_t_v19)) : _g4_s12,
    _g4_s14 = (104u + sizeof(_g4_t_v20)) > _g4_s13 ? (104u + sizeof(_g4_t_v20)) : _g4_s13,
    _g4_s15 = (220u + sizeof(_g4_t_v21)) > _g4_s14 ? (220u + sizeof(_g4_t_v21)) : _g4_s14,
    _g4_s16 = (221u + sizeof(_g4_t_v22)) > _g4_s15 ? (221u + sizeof(_g4_t_v22)) : _g4_s15,
    _g4_s17 = (224u + sizeof(_g4_t_v23)) > _g4_s16 ? (224u + sizeof(_g4_t_v23)) : _g4_s16,
    _g4_s18 = (228u + sizeof(_g4_t_v24)) > _g4_s17 ? (228u + sizeof(_g4_t_v24)) : _g4_s17,
    _g4_s19 = (232u + sizeof(_g4_t_v25)) > _g4_s18 ? (232u + sizeof(_g4_t_v25)) : _g4_s18,
    _g4_s20 = (236u + sizeof(_g4_t_v26)) > _g4_s19 ? (236u + sizeof(_g4_t_v26)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 10u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 52u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 56u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 60u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 80u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 84u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 88u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 92u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 96u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 104u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 220u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 221u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 224u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 228u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 232u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 236u);

  do
    v2 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    sub_1235D60(v8, v2, "boost: mutex lock failed in pthread_mutex_lock");
    v8[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  *a1 = (uint32_t)(uintptr_t)(&dword_213B814);
  v10 = &v7;
  v11 = (char *)v8;
  sub_1900810(v20);
  v20[28] = 0;
  v21 = 0;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 0;
  v12 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v13[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v13[-1] + (uint32_t)(uintptr_t)(*(v12 - 3)), 0);
  memset(&v13[1], 0, 12);
  v12 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v14 = nullptr;
  v20[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v15 = nullptr;
  v16 = 0;
  v13[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v17);
  v19 = &dword_213B814;
  v13[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v18 = 16;
  sub_19119D0(v20, v13);
  v3 = (uint32_t *)g4_std_compat::ostream_shl_int(&v12, a2);
  v4 = *(uint32_t *)((char *)v3 + *(uint32_t *)(*v3 - 12) + 20) & 5;
  v10 = (char *)v14;
  v11 = v15;
  if ( v4 != 0 )
LABEL_4:
    std::terminate();
  sub_193A9B0((int)(uintptr_t)(a1), 0, *(uint32_t *)(*a1 - 12), v14, v15 - (char *)((uint8_t *)v14));
  v12 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v20[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_noop_dtor(&v19);
  v13[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v17);
  v12 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v13[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v20[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v20);
  do
    v5 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    sub_1235D60(&v9, v5, "boost: mutex unlock failed in pthread_mutex_unlock");
    v9 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    goto LABEL_4;
  }
  return a1;
}


// ============================================================================
// Address:   0x1326f00 (size: 601 bytes)
// Symbol:    _ZNSt6vectorIN4gaia25GaiaSimpleEventDispatcherINS0_10ActionDataEE9SCallbackESaIS4_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS4_S6_EERKS4_
// Demangled: std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>::_M_insert_aux(__gnu_cxx::__normal_iterator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback*,std::vector<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback,std::allocator<gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback>>>,gaia::GaiaSimpleEventDispatcher<gaia::ActionData>::SCallback const&)
// ============================================================================
static int g4_compat_def_6(
        int a1,
        int a2,
        int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint32_t *v9;
  unsigned int v10;
  unsigned int v11;
  int v12;
  int *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  unsigned int v23;
  int v24;
  int v25;
  int v26;
  int v27;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 3);
      v3[1] = *(v3 - 2);
      v3[2] = *(v3 - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    v5 = v4 + 12;
    v6 = v4 - 12;
    *(uint32_t *)(a1 + 4) = v5;
    v25 = *a3;
    v26 = a3[1];
    v27 = a3[2];
    v7 = v6;
    if ( -1431655765 * ((v6 - a2) >> 2) > 0 )
    {
      v21 = -1431655765 * ((v6 - a2) >> 2);
      while ( 1 )
      {
        v7 -= 12;
        *(uint32_t *)v6 = *(uint32_t *)v7;
        *(uint32_t *)(v6 + 4) = *(uint32_t *)(v7 + 4);
        *(uint8_t *)(v6 + 8) = *(uint8_t *)(v7 + 8);
        if ( --v21 == 0 )
          break;
        v6 -= 12;
      }
    }
    *(uint32_t *)a2 = v25;
    *(uint32_t *)(a2 + 4) = v26;
    *(uint8_t *)(a2 + 8) = v27;
    return (uint8_t)v27;
  }
  v9 = *(uint32_t **)a1;
  v10 = -1431655765 * (((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 2);
  if ( v10 != 0 )
  {
    v11 = 2 * v10;
    if ( v10 > 2 * v10 || v11 > 0x15555555 )
    {
      v24 = -4;
      v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
    }
    else
    {
      v24 = 24 * v10;
      v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
      if ( v11 == 0 )
      {
        v23 = 12;
        v22 = 0;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v24 = 12;
    v12 = -1431655765 * ((a2 - (int)(uintptr_t)(v9)) >> 2);
  }
  v20 = v12;
  v22 = (int)(uintptr_t)(operator new(v24));
  v23 = v22 + 12;
  v12 = v20;
LABEL_13:
  v13 = (int *)(v22 + 12 * v12);
  if ( v13 != nullptr )
  {
    *v13 = *a3;
    v13[1] = a3[1];
    v13[2] = a3[2];
  }
  v14 = *(uint32_t **)a1;
  if ( *(uint32_t *)a1 != a2 )
  {
    v15 = *(uint32_t **)a1;
    v16 = (uint32_t *)v22;
    do
    {
      if ( v16 != nullptr )
      {
        *v16 = *v15;
        v16[1] = v15[1];
        v16[2] = v15[2];
      }
      v15 += 3;
      v16 += 3;
    }
    while ( v15 != (uint32_t *)a2 );
    v23 = v22 + 4 * ((unsigned int)(a2 - (uint32_t)(uintptr_t)(v14 + 3)) >> 2) + 24;
  }
  v17 = *(uint32_t **)(a1 + 4);
  if ( v17 != (uint32_t *)a2 )
  {
    v18 = (uint32_t *)a2;
    v19 = (uint32_t *)v23;
    do
    {
      if ( v19 != nullptr )
      {
        *v19 = *v18;
        v19[1] = v18[1];
        v19[2] = v18[2];
      }
      v18 += 3;
      v19 += 3;
    }
    while ( v17 != v18 );
    v23 += 4 * (((unsigned int)(uintptr_t)(v17) - a2 - 12) >> 2) + 12;
  }
  if ( *(uint32_t *)a1 != 0 )
    operator delete(*(void **)a1);
  *(uint32_t *)a1 = v22;
  *(uint32_t *)(a1 + 4) = v23;
  *(uint32_t *)(a1 + 8) = v24 + v22;
  return v24 + v22;
}


// ============================================================================
// Address:   0x1327460 (size: 599 bytes)
// Symbol:    sub_1327460
// Demangled: sub_1327460
// ============================================================================
char *sub_1327460(int a1)
{
  char *result;
  int v3;
  size_t n;
  char *src;
  unsigned int v6;
  unsigned int *v7;
  unsigned int v8;
  unsigned int v9;
  size_t v10;
  size_t v11;
  size_t v12;
  unsigned int v13;
  unsigned int v14;
  char *dest;
  char *desta;
  int v17;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v18;
  unsigned int v19;
  unsigned int v20;

  result = *(char **)(a1 + 12);
  v3 = (int)(uintptr_t)(result + 16);
  if ( (unsigned int)(uintptr_t)(result + 16) >= *(uint32_t *)(a1 + 16) )
  {
    n = *(uint32_t *)(a1 + 20);
    src = *(char **)(a1 + 8);
    v17 = result - src;
    v6 = result - src + 16;
    if ( v6 < 2 * n )
      v6 = 2 * n;
    v18 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1;
    if ( src != nullptr )
    {
      if ( n < v6 )
      {
        v7 = *(unsigned int **)v18;
        v13 = *(uint32_t *)(*(uint32_t *)v18 + 4);
        dest = (char *)(v13 + 12);
        if ( src == (char *)(*(uint32_t *)v18 + v13 + 12 - n) )
        {
          v20 = v13 + ((v6 - n + 3) & 0xFFFFFFFC);
          v19 = *v7;
          if ( v20 <= *v7 )
          {
            v7[1] = v20;
            if ( ((uint8_t)(uintptr_t)(src) & 3) != 0 )
              __assert2(
                "../../../../../lib/rapidjson/rapidjson.h",
                294,
                "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator "
                "= rapidjson::CrtAllocator, size_t = unsigned int]",
                "((uintptr_t) originalPtr & 3) == 0");
            goto LABEL_17;
          }
        }
        else
        {
          v19 = *v7;
        }
        v9 = (v6 + 3) & 0xFFFFFFFC;
        if ( v19 < v9 + v13 )
        {
          v8 = *((uint32_t *)v18 + 1);
          if ( v9 >= v8 )
            v8 = (v6 + 3) & 0xFFFFFFFC;
          v10 = *(uint32_t *)(a1 + 20);
          v14 = v8;
          v7 = (unsigned int *)malloc(v8 + 12);
          v7[1] = 0;
          *v7 = v14;
          v7[2] = *(uint32_t *)v18;
          *(uint32_t *)v18 = (uint32_t)(uintptr_t)(v7);
          v13 = v7[1];
          dest = (char *)(v13 + 12);
          n = v10;
        }
        desta = &dest[(uint32_t)(uintptr_t)(v7)];
        if ( ((uint8_t)(uintptr_t)(desta) & 3) != 0 )
        {
          v11 = n;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            267,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllo"
            "cator, size_t = unsigned int]",
            "((uintptr_t) buffer & 3) == 0");
          n = v11;
          v7 = *(unsigned int **)v18;
          v13 = *(uint32_t *)(*(uint32_t *)v18 + 4);
        }
        v7[1] = v13 + v9;
        if ( desta == nullptr )
        {
          v12 = n;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            301,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "newBuffer != 0");
          n = v12;
        }
        src = (char *)memcpy(desta, src, n);
      }
    }
    else
    {
      src = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
                      *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1,
                      v6);
    }
LABEL_17:
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(src);
    result = &src[v17];
    *(uint32_t *)(a1 + 20) = v6;
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(&src[v6]);
    v3 = (int)(uintptr_t)(&src[v17 + 16]);
  }
  *(uint32_t *)(a1 + 12) = v3;
  return result;
}


// ============================================================================
// Address:   0x13276c0 (size: 332 bytes)
// Symbol:    sub_13276C0
// Demangled: sub_13276C0
// ============================================================================
int sub_13276C0(
        int a1,
        char **a2,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3)
{
  char *i;
  char v5;
  char v6;
  const char *v7;
  char *j;
  char v9;
  struct __jmp_buf_tag *env;

  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  env = (struct __jmp_buf_tag *)(a1 + 24);
  if ( setjmp(*reinterpret_cast<jmp_buf *>((a1 + 24))) != 0 )
  {
    *(uint32_t *)(a1 + 12) = *(uint32_t *)(a1 + 8);
    return 0;
  }
  for ( i = *a2; ; ++i )
  {
    v5 = *i;
    if ( *i != 32 && v5 != 10 && v5 != 13 && v5 != 9 )
      break;
  }
  *a2 = i;
  v6 = *i;
  if ( *i == 0 )
  {
    v7 = "Text only contains white space(s)";
LABEL_12:
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v7);
    *(uint32_t *)(a1 + 68) = *a2 - a2[1];
    longjmp(env, 1);
  }
  if ( v6 == 91 )
  {
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  else
  {
    if ( v6 != 123 )
    {
      v7 = "Expect either an object or array at root";
      goto LABEL_12;
    }
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  for ( j = *a2; ; ++j )
  {
    v9 = *j;
    if ( *j != 32 && v9 != 10 && v9 != 13 && v9 != 9 )
      break;
  }
  *a2 = j;
  if ( *j != 0 )
  {
    v7 = "Nothing should follow the root object or array.";
    goto LABEL_12;
  }
  return 1;
}


// ============================================================================
// Address:   0x13290a0 (size: 992 bytes)
// Symbol:    sub_13290A0
// Demangled: sub_13290A0
// ============================================================================
unsigned int sub_13290A0()
{
  int v0;
  int v1;
  unsigned int nusers;
  int v3;
  unsigned int count;
  unsigned int *v5;
  unsigned int v6;
  unsigned int spins;
  int v8;
  unsigned int v9;
  unsigned int owner;
  int *v11;
  int v12;
  unsigned int v14;
  unsigned int v15;
  int *v16;
  unsigned int i;
  int *v18;
  unsigned int v19;
  unsigned int v20;
  typedef unsigned int _g4_t_v21;
  typedef unsigned int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef unsigned int *_g4_t_p_count;
  typedef unsigned int _g4_t_v26;
  typedef int (**_g4_t_v27)(std::exception *);
  typedef int (**_g4_t_v28)(std::exception *);
  typedef int (**_g4_t_v29)(std::exception *);
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v22)) > _g4_s1 ? (0u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v23)) > _g4_s2 ? (0u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v24)) > _g4_s3 ? (4u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_p_count)) > _g4_s4 ? (8u + sizeof(_g4_t_p_count)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v26)) > _g4_s5 ? (8u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v27)) > _g4_s6 ? (20u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v28)) > _g4_s7 ? (40u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v29)) > _g4_s8 ? (60u + sizeof(_g4_t_v29)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_p_count &p_count = *reinterpret_cast<_g4_t_p_count *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);

  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v0 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v0 != 0 )
      {
        sub_1235D60(&v27, v0, "boost:: mutex constructor failed in pthread_mutex_init");
        v27 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2049568));
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v1 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    sub_1235D60(&v28, v1, "boost: mutex lock failed in pthread_mutex_lock");
    v28 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  if ( nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
            & 3);
    v3 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v3 = nusers;
    }
    if ( v3 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v21 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
      / nusers
      + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
       % nusers != 0);
  if ( v21 != 0 )
  {
    count = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    p_count = &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count;
    if ( count != 0 )
    {
      while ( 2 )
      {
        v5 = (unsigned int *)count;
        v6 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           / nusers
           + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
            % nusers != 0);
        while ( --v6 != 0 )
        {
          if ( (unsigned int *)*v5 != (unsigned int *)((char *)v5 + nusers) )
          {
            count = *v5;
            p_count = v5;
            goto LABEL_20;
          }
          v5 = (unsigned int *)*v5;
        }
        if ( v5 != nullptr )
        {
          v24 = count;
          *p_count = *v5;
          goto LABEL_32;
        }
LABEL_20:
        if ( count != 0 )
          continue;
        break;
      }
    }
  }
  spins = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
  if ( v21 >= spins )
    spins = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
          / nusers
          + (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           % nusers != 0);
  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = spins;
  v8 = nusers * spins + 8;
  v24 = (unsigned int)(uintptr_t)(operator new[](v8, (const std::nothrow_t *)&std::nothrow));
  if ( v24 == 0 )
  {
    v19 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
    if ( v21 >= v19 )
      goto LABEL_58;
    v20 = v19 >> 1;
    if ( v21 >= v20 )
      v20 = v21;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = v20;
    v8 = nusers * v20 + 8;
    v24 = (unsigned int)(uintptr_t)(operator new[](v8, (const std::nothrow_t *)&std::nothrow));
    if ( v24 == 0 )
    {
LABEL_58:
      do
LABEL_32:
        v12 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
      while ( v12 == 4 );
      if ( v12 != 0 )
      {
        sub_1235D60(&v29, v12, "boost: mutex unlock failed in pthread_mutex_unlock");
        v29 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495E0));
        std::terminate();
      }
      return v24;
    }
  }
  v9 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
  if ( v21 < v9 )
  {
    sub_60EFD0(
      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage
    + 1,
      v24 + nusers * v21,
      v8 - nusers * v21 - 8,
      nusers);
    v9 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins;
    v22 = (unsigned int)(uintptr_t)((*(uint32_t *)unk_21171FC));
    if ( (*(uint32_t *)unk_21171FC) == 0 )
      goto LABEL_26;
  }
  else
  {
    v22 = (unsigned int)(uintptr_t)((*(uint32_t *)unk_21171FC));
    if ( (*(uint32_t *)unk_21171FC) == 0 )
    {
LABEL_26:
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 2 * v9;
LABEL_27:
      owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
      if ( owner != 0 && v24 >= owner )
      {
        v16 = (int *)(owner
                    + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind
                    - 4);
        for ( i = *(uint32_t *)(owner
                            + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind
                            - 8); i != 0 && v24 >= i; i = *(v16 - 1) )
          v16 = (int *)(i + *v16 - 4);
        v23 = *v16;
        v18 = (int *)(v24 + v8 - 4);
        *(v18 - 1) = i;
        *v18 = v23;
        *(v16 - 1) = v24;
        *v16 = v8;
      }
      else
      {
        v11 = (int *)(v24 + v8 - 4);
        *(v11 - 1) = owner;
        *v11 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = v24;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = v8;
      }
      goto LABEL_32;
    }
  }
  v26 = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  if ( v22 > nusers * v9 / v26 )
  {
    v14 = 2 * v9;
    v15 = v22 * v26 / nusers;
    if ( v14 <= v15 )
      v15 = v14;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = v15;
  }
  goto LABEL_27;
}


// ============================================================================
// Address:   0x132cd90 (size: 2354 bytes)
// Symbol:    sub_132CD90
// Demangled: sub_132CD90
// ============================================================================
int *sub_132CD90()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int owner;
  int i;
  int *v6;
  int v7;
  int j;
  int *v9;
  int v10;
  int k;
  int *v12;
  int *result;
  typedef int _g4_t_v14;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v14)) > _g4_s0 ? (12u + sizeof(_g4_t_v14)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2117150);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2117150, &unk_20D1280);
  dword_2117154 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2117158 = v0;
  dword_211715C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2117160 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2117170 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2117180 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2117184 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&unk_2117188), "UNKNOWN", (int)(uintptr_t)(&v14));
  __cxa_atexit((void (*)(void *))g4_dtor_thunk<std::string>, &unk_2117188, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&unk_211718C), "IMEI", (int)(uintptr_t)(&v14) + 1);
  __cxa_atexit((void (*)(void *))g4_dtor_thunk<std::string>, &unk_211718C, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&unk_2117190), "HDIDFV", (int)(uintptr_t)(&v14) + 2);
  __cxa_atexit((void (*)(void *))g4_dtor_thunk<std::string>, &unk_2117190, &unk_20D1280);
  glotv3::EventValue::Construct((glotv3::EventValue::Self *)&glotv3::TrackingManager::k_Empty, nullptr);
  __cxa_atexit((void (*)(void *))glotv3::EventValue::Destroy, &glotv3::TrackingManager::k_Empty, &unk_20D1280);
  boost::mutex::Construct((pthread_mutex_t *)&glotv3::TrackingManager::s_StaticInitializationMutex);
  __cxa_atexit(
    (void (*)(void *))g4_noop_dtor,
    &glotv3::TrackingManager::s_StaticInitializationMutex,
    &unk_20D1280);
  boost::mutex::Construct((pthread_mutex_t *)&glotv3::TrackingManager::s_FedAccessTokenMutex);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::TrackingManager::s_FedAccessTokenMutex, &unk_20D1280);
  glotv3::TrackingManager::s_OneInstance = 0;
  *(uintptr_t *)(unk_2117114) = (uintptr_t)(0);
  __cxa_atexit(
    (void (*)(void *))g4_dtor_thunk<boost::shared_ptr<glotv3::TrackingManager::Self>>,
    &glotv3::TrackingManager::s_OneInstance,
    &unk_20D1280);
  glotv3::TrackingManager::s_AcquiredSingletonInstance = 0;
  glotv3::TrackingManager::s_IsSpyInstantSendingActive = 0;
  glotv3::TrackingManager::s_IsSpyStreamLoggingActive = 0;
  glotv3::TrackingManager::s_IsSpyTcpLoggingActive = 0;
  if ( g4_fnstatic_daf5dd5106 == 0 )
  {
    g4_fnstatic_daf5dd5106 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      boost::mutex::Construct(&boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 180;
      boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_2117318) = (uintptr_t)(128);
      *(uintptr_t *)(unk_211731C) = (uintptr_t)(0);
    }
  }
  sub_1321700(&boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  owner = boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
        owner != 0;
        owner = *(v6 - 1) )
  {
    v6 = (int *)(owner + i - 4);
    i = *v6;
  }
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  if ( g4_fnstatic_e4cb0757ff == 0 )
  {
    g4_fnstatic_e4cb0757ff = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      boost::mutex::Construct(&boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
      boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 168;
      boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_2117358) = (uintptr_t)(16);
      *(uintptr_t *)(unk_211735C) = (uintptr_t)(0);
    }
  }
  sub_1321700(&boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
  v7 = boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
  for ( j = boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
        v7 != 0;
        v7 = *(v9 - 1) )
  {
    v9 = (int *)(v7 + j - 4);
    j = *v9;
  }
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
  if ( g4_fnstatic_745de2dcec == 0 )
  {
    g4_fnstatic_745de2dcec = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
    {
      boost::mutex::Construct(&boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
      boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 200;
      boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
      *(uintptr_t *)(unk_2117398) = (uintptr_t)(16);
      *(uintptr_t *)(unk_211739C) = (uintptr_t)(0);
    }
  }
  sub_1321700(&boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
  v10 = boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner;
  for ( k = boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind;
        v10 != 0;
        v10 = *(v12 - 1) )
  {
    v12 = (int *)(v10 + k - 4);
    k = *v12;
  }
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( g4_guard_23987c3f54[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_23987c3f54) = (uintptr_t)(1);
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_d9c9966ed1[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_d9c9966ed1) = (uintptr_t)(1);
    if ( g4_fnstatic_daf5dd5106 == 0 )
    {
      g4_fnstatic_daf5dd5106 = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
      {
        boost::mutex::Construct(&boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
        boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
        boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
        boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
        boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 180;
        boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
        *(uintptr_t *)(unk_2117318) = (uintptr_t)(128);
        *(uintptr_t *)(unk_211731C) = (uintptr_t)(0);
      }
    }
  }
  if ( g4_guard_c007014169[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_c007014169) = (uintptr_t)(1);
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_e88271e2c9[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_e88271e2c9) = (uintptr_t)(1);
    if ( g4_fnstatic_e4cb0757ff == 0 )
    {
      g4_fnstatic_e4cb0757ff = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
      {
        boost::mutex::Construct(&boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage);
        boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
        boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
        boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
        boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 168;
        boost::singleton_pool<boost::pool_allocator_tag,168u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
        *(uintptr_t *)(unk_2117358) = (uintptr_t)(16);
        *(uintptr_t *)(unk_211735C) = (uintptr_t)(0);
      }
    }
  }
  if ( g4_guard_0b18e82d50[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_0b18e82d50) = (uintptr_t)(1);
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_b49aa59582[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_b49aa59582) = (uintptr_t)(1);
    if ( g4_fnstatic_745de2dcec == 0 )
    {
      g4_fnstatic_745de2dcec = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage != nullptr )
      {
        boost::mutex::Construct(&boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage);
        boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__count = 0;
        boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__owner = 0;
        boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__kind = 0;
        boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__nusers = 200;
        boost::singleton_pool<boost::pool_allocator_tag,200u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage.__spins = 16;
        *(uintptr_t *)(unk_2117398) = (uintptr_t)(16);
        *(uintptr_t *)(unk_211739C) = (uintptr_t)(0);
      }
    }
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  if ( g4_guard_38c1305a76[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_38c1305a76) = (uintptr_t)(1);
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_1dec044f07[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_1dec044f07) = (uintptr_t)(1);
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::get_pool();
  }
  if ( g4_guard_88c0f87a73[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_88c0f87a73) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged::Self>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::detail::sp_ms_deleter<glotv3::EventOfUserIdentifiersChanged::Self>]");
  }
  if ( g4_guard_fff4e0b3c2[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_fff4e0b3c2) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfReinstall::Self>>::ti_ = (void *)("static char const* boost::d"
                                                                                             "etail::sp_typeid_<T>::name("
                                                                                             ") [with T = boost::detail::"
                                                                                             "sp_ms_deleter<glotv3::EventOfReinstall::Self>]");
  }
  if ( g4_guard_35bfaf8d37[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_35bfaf8d37) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfGlotAppDetails::Self>>::ti_ = (void *)("static char const* boo"
                                                                                                  "st::detail::sp_typeid_"
                                                                                                  "<T>::name() [with T = "
                                                                                                  "boost::detail::sp_ms_d"
                                                                                                  "eleter<glotv3::EventOf"
                                                                                                  "GlotAppDetails>]");
  }
  if ( g4_guard_2e9f8c58d3[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_2e9f8c58d3) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfInstallReferral::Self>>::ti_ = (void *)("static char const* bo"
                                                                                                   "ost::detail::sp_typei"
                                                                                                   "d_<T>::name() [with T"
                                                                                                   " = boost::detail::sp_"
                                                                                                   "ms_deleter<glotv3::Ev"
                                                                                                   "entOfInstallReferral>]");
  }
  if ( g4_guard_8e3eda4248[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_8e3eda4248) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume::Self>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::detail::sp_ms_deleter<glotv3::EventOfGameLaunchResume::Self>]");
  }
  if ( g4_guard_05b6daf0ed[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_05b6daf0ed) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::Event::Self>>::ti_ = (void *)("static char const* boost::detail::sp_t"
                                                                                  "ypeid_<T>::name() [with T = boost::det"
                                                                                  "ail::sp_ms_deleter<glotv3::Event::Self>]");
  }
  if ( g4_guard_4b9fa1b394[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_4b9fa1b394) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventParams>>::ti_ = (void *)("static char const* boost::detail"
                                                                                        "::sp_typeid_<T>::name() [with T "
                                                                                        "= boost::detail::sp_ms_deleter<g"
                                                                                        "lotv3::EventParams>]");
  }
  if ( g4_guard_70133f6546[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_70133f6546) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::TCPServer::Self>>::ti_ = (void *)("static char const* boost::detail::"
                                                                                      "sp_typeid_<T>::name() [with T = bo"
                                                                                      "ost::detail::sp_ms_deleter<glotv3::TCPServer::Self>]");
  }
  if ( g4_guard_6823a6a01c[0] == 0 )
  {
    *(uintptr_t *)(g4_guard_6823a6a01c) = (uintptr_t)(1);
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::DNSClient::Self>>::ti_ = (void *)("static char const* boost::detail::"
                                                                                      "sp_typeid_<T>::name() [with T = bo"
                                                                                      "ost::detail::sp_ms_deleter<glotv3::DNSClient::Self>]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x132d766 (size: 81 bytes)
// Symbol:    sub_132D766
// Demangled: sub_132D766
// ============================================================================
void __noreturn sub_132D766()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Day of month is not valid for year", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068D98);
  std::terminate();
}


// ============================================================================
// Address:   0x132d7c0 (size: 157 bytes)
// Symbol:    sub_132D7C0
// Demangled: sub_132D7C0
// ============================================================================
void __noreturn sub_132D7C0()
{
  typedef int _g4_t_v0;
  typedef uint8_t _g4_t_v1[4];
  typedef uint8_t _g4_t_v2[4];
  typedef void (**_g4_t_v3)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden);
  typedef uint8_t _g4_t_v4[4];
  typedef void (**_g4_t_v5)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden);
  typedef int _g4_t_v6;
  typedef const char *_g4_t_v7;
  typedef const char *_g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v0)) > _g4_s0 ? (7u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v1)) > _g4_s1 ? (12u + sizeof(_g4_t_v1)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v2)) > _g4_s2 ? (16u + sizeof(_g4_t_v2)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v3)) > _g4_s3 ? (20u + sizeof(_g4_t_v3)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v4)) > _g4_s4 ? (24u + sizeof(_g4_t_v4)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v5)) > _g4_s5 ? (28u + sizeof(_g4_t_v5)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v6)) > _g4_s6 ? (32u + sizeof(_g4_t_v6)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v7)) > _g4_s7 ? (36u + sizeof(_g4_t_v7)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v8)) > _g4_s8 ? (40u + sizeof(_g4_t_v8)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v9)) > _g4_s9 ? (44u + sizeof(_g4_t_v9)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 7u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 16u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 20u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 24u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 28u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 32u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 36u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "sha1 too many bytes", (int)(uintptr_t)(&v0));
  sub_19042E0(v1, (char *)&v0 + 1);
  v3 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *__hidden))((uint32_t)(uintptr_t)&off_20A9AA8);
  g4_std_compat::string_construct_copy(v4, v2);
  v6 = 0;
  v9 = 104;
  v5 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209383C));
  v3 = (void (**)(boost::exception_detail::error_info_injector<std::runtime_error> *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2093828));
  v7 = "void boost::uuids::detail::sha1::process_byte(unsigned char)";
  v8 = "../../../../../lib/glitch/include/boost/uuid/sha1.hpp";
  std::terminate();
}


// ============================================================================
// Address:   0x132d85d (size: 89 bytes)
// Symbol:    sub_132D85D
// Demangled: sub_132D85D
// ============================================================================
void __noreturn sub_132D85D()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Day of month value is out of range 1..31", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_noop_dtor((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068D98);
  std::terminate();
}


// ============================================================================
// Address:   0x132d8b6 (size: 89 bytes)
// Symbol:    sub_132D8B6
// Demangled: sub_132D8B6
// ============================================================================
void __noreturn sub_132D8B6()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Year is out of valid range: 1400..10000", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_noop_dtor((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DC8);
  std::terminate();
}


// ============================================================================
// Address:   0x132d90f (size: 89 bytes)
// Symbol:    sub_132D90F
// Demangled: sub_132D90F
// ============================================================================
void __noreturn sub_132D90F()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Month number is out of range 1..12", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_noop_dtor((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DB0);
  std::terminate();
}


// ============================================================================
// Address:   0x132d970 (size: 368 bytes)
// Symbol:    sub_132D970
// Demangled: sub_132D970
// ============================================================================
char *sub_132D970(char *result, int a2)
{
  char *v2;
  char *v3;
  size_t v4;
  size_t n;
  int v6;
  bool v7;
  size_t v8;
  size_t v9;
  size_t v10;
  char *v11;
  int v12;
  size_t v13;
  char *v14;
  char *s;
  size_t v16;
  size_t v17;
  size_t v18;
  size_t v19;
  char *dest;
  size_t v21;

  v2 = *((char **)result + 1);
  v3 = result;
  v4 = (size_t)&v2[-*(uint32_t *)result];
  n = a2 - v4;
  if ( n == 0 )
    return result;
  if ( n <= *((uint32_t *)result + 2) - (int)(uintptr_t)(v2) )
  {
    v16 = n;
    result = (char *)memset(v2, 0, n);
    *((uint32_t *)v3 + 1) += v16;
    return result;
  }
  if ( n > ~v4 )
    sub_1900180("vector::_M_fill_insert");
  v6 = *((uint32_t *)result + 1) - *(uint32_t *)result;
  v21 = 0xFFFFFFFF;
  if ( n >= v4 )
    v6 = n;
  v7 = __CFADD__(v4, v6);
  v8 = v4 + v6;
  if ( !v7 )
  {
    if ( v8 == 0 )
    {
      v21 = 0;
      dest = nullptr;
      goto LABEL_10;
    }
    v21 = v8;
  }
  v17 = n;
  dest = (char *)operator new(v21);
  n = v17;
LABEL_10:
  s = &dest[v4];
  v18 = n;
  v9 = 0;
  memset(s, 0, n);
  v10 = v18;
  if ( v2 != *(char **)v3 )
  {
    v9 = (size_t)&v2[-*(uint32_t *)v3];
    memmove(dest, *(const void **)v3, v9);
    v10 = v18;
  }
  v11 = &dest[v9 + v10];
  v12 = 0;
  v13 = *((uint32_t *)v3 + 1) - (uint32_t)(uintptr_t)(v2);
  if ( v13 != 0 )
  {
    v19 = (size_t)v11;
    v12 = *((uint32_t *)v3 + 1) - (uint32_t)(uintptr_t)(v2);
    memmove(v11, v2, v13);
    v11 = (char *)v19;
  }
  v14 = &v11[v12];
  if ( *(uint32_t *)v3 != 0 )
    operator delete(*(void **)v3);
  *((uint32_t *)v3 + 1) = (uint32_t)(uintptr_t)(v14);
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(dest);
  *((uint32_t *)v3 + 2) = (uint32_t)(uintptr_t)(&dest[v21]);
  return &dest[v21];
}


// ============================================================================
// Address:   0x13385a0 (size: 698 bytes)
// Symbol:    _ZNSt6vectorIcSaIcEE15_M_range_insertIPcEEvN9__gnu_cxx17__normal_iteratorIS3_S1_EET_S7_St20forward_iterator_tag
// Demangled: void std::vector<char,std::allocator<char>>::_M_range_insert<char *>(__gnu_cxx::__normal_iterator<char *,std::vector<char,std::allocator<char>>>,char *,char *,std::forward_iterator_tag)
// ============================================================================
static void g4_compat_def_7(int a1, char *a2, char *a3, char *a4)
{
  char *v4;
  uint8_t *dest;
  size_t v6;
  size_t n;
  char *v8;
  uint8_t *v9;
  size_t v10;
  size_t v11;
  bool v12;
  size_t v13;
  int v14;
  char *v15;
  char *v16;
  int v17;
  size_t v18;
  char *v19;
  char *v20;
  size_t v21;
  char *v22;
  char *v23;
  char *v24;
  size_t v25;
  char *v26;
  size_t v27;
  char *src;
  char *v29;
  size_t v30;
  size_t v31;

  v4 = a3;
  if ( a3 == a4 )
    return;
  dest = *(uint8_t **)(a1 + 4);
  v6 = a4 - a3;
  if ( a4 - a3 <= (unsigned int)(*(uint32_t *)(a1 + 8) - (uint32_t)(uintptr_t)(dest)) )
  {
    n = dest - (uint8_t *)(a2);
    if ( v6 < dest - (uint8_t *)(a2) )
    {
      v20 = (char *)(&dest[-v6]);
      v31 = *(uint32_t *)(a1 + 4);
      if ( v6 != 0 )
      {
        memmove(dest, &dest[-v6], v6);
        v4 = a3;
        v31 = *(uint32_t *)(a1 + 4);
        v20 = (char *)(&dest[-v6]);
      }
      v21 = v20 - a2;
      *(uint32_t *)(a1 + 4) = v6 + v31;
      if ( v21 != 0 )
      {
        v24 = v4;
        memmove(&dest[-v21], a2, v21);
        v4 = v24;
      }
      if ( v6 != 0 )
        memmove(a2, v4, v6);
    }
    else
    {
      src = &a3[n];
      if ( a4 != &a3[n] )
      {
        v27 = dest - (uint8_t *)(a2);
        memmove(dest, src, a4 - &a3[n]);
        dest = *(uint8_t **)(a1 + 4);
        v4 = a3;
        n = v27;
      }
      v8 = (char *)(&dest[v6 - n]);
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v8);
      if ( n != 0 )
      {
        v25 = n;
        v22 = v4;
        memmove(v8, a2, n);
        v8 = *(char **)(a1 + 4);
        v4 = v22;
        n = v25;
      }
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&v8[n]);
      if ( src != v4 )
        memmove(a2, v4, src - v4);
    }
    return;
  }
  v9 = *(uint8_t **)a1;
  v10 = (size_t)&dest[-*(uint32_t *)a1];
  if ( v6 > ~v10 )
    sub_1900180("vector::_M_range_insert");
  v11 = v10;
  v30 = 0xFFFFFFFF;
  if ( v6 >= v10 )
    v11 = a4 - a3;
  v12 = __CFADD__(v11, v10);
  v13 = v11 + v10;
  if ( !v12 )
  {
    if ( v13 == 0 )
    {
      v30 = 0;
      v14 = 0;
      goto LABEL_16;
    }
    v30 = v13;
  }
  v14 = (int)(uintptr_t)(operator new(v30));
  v9 = *(uint8_t **)a1;
  v4 = a3;
LABEL_16:
  v29 = nullptr;
  if ( a2 != (char *)(uintptr_t)(v9) )
  {
    v23 = v4;
    v29 = (char *)(a2 - (char *)(v9));
    memmove((void *)v14, v9, a2 - (char *)(v9));
    v4 = v23;
  }
  v15 = &v29[v14];
  if ( v6 != 0 )
  {
    memmove(&v29[v14], v4, v6);
    v15 = &v29[v14];
  }
  v16 = &v15[v6];
  v17 = 0;
  v18 = *(uint32_t *)(a1 + 4) - (uint32_t)(uintptr_t)(a2);
  if ( v18 != 0 )
  {
    v17 = *(uint32_t *)(a1 + 4) - (uint32_t)(uintptr_t)(a2);
    v26 = v16;
    memmove(v16, a2, v18);
    v16 = v26;
  }
  v19 = &v16[v17];
  if ( *(uint32_t *)a1 != 0 )
    operator delete(*(void **)a1);
  *(uint32_t *)a1 = v14;
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v19);
  *(uint32_t *)(a1 + 8) = v30 + v14;
}


// ============================================================================
// Address:   0x1338ee0 (size: 1366 bytes)
// Symbol:    sub_1338EE0
// Demangled: sub_1338EE0
// ============================================================================
int *sub_1338EE0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  unsigned int v4;
  int i;
  uint32_t *v6;
  unsigned int v7;
  int j;
  uint32_t *v9;
  volatile int32_t *v10;
  int *v11;
  int *result;
  typedef uint8_t _g4_t_v13[5];
  typedef uint32_t _g4_t_v14[9];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (3u + sizeof(_g4_t_v13)) > _g4_s0 ? (3u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 3u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  sub_1900D70(&unk_2117E44);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2117E44, &unk_20D1280);
  dword_2117E48 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2117E4C = v0;
  dword_2117E50 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2117E54 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2117E60 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2117E70 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 != 0 )
  {
    dword_2117E80 = (int)(uintptr_t)(&dword_20D3F88);
    glotv3::Utils::s_WithGenerator[0] = 5489;
  }
  else
  {
    if ( _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
    {
      dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
      _cxa_guard_release((__guard *)&byte_20D3F80);
      __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
    }
    dword_2117E80 = (int)(uintptr_t)(&dword_20D3F88);
    glotv3::Utils::s_WithGenerator[0] = 5489;
  }
  v4 = glotv3::Utils::s_WithGenerator[0];
  for ( i = 1; i != 624; ++i )
  {
    v4 = i + 1812433253 * (v4 ^ (v4 >> 30));
    glotv3::Utils::s_WithGenerator[i] = v4;
  }
  glotv3::Utils::s_WithGenerator[624] = 624;
  glotv3::Utils::s_OnDistribution[0] = 1;
  glotv3::Utils::s_OnDistribution[1] = 32;
  v6 = (uint32_t *)operator new(0x9C4u);
  *v6 = 5489;
  v7 = 5489;
  for ( j = 1; j != 624; ++j )
  {
    v7 = j + 1812433253 * (v7 ^ (v7 >> 30));
    v6[j] = v7;
  }
  v6[624] = 624;
  glotv3::Utils::s_OneUuidGenerator[0] = (uintptr_t)(uintptr_t)(v6);
  glotv3::Utils::s_OneUuidGenerator[1] = 0;
  v9 = (uint32_t *)operator new(0x10u);
  v9[1] = 1;
  v9[3] = (uint32_t)(uintptr_t)(v6);
  *v9 = ((uint32_t)(uintptr_t)&off_20938A8);
  v10 = (volatile int32_t *)glotv3::Utils::s_OneUuidGenerator[1];
  v9[2] = 1;
  glotv3::Utils::s_OneUuidGenerator[1] = (uintptr_t)(uintptr_t)(v9);
  if ( v10 != nullptr && __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v10 + 8))(v10);
    if ( __sync_fetch_and_add(v10 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v10 + 12))(v10);
  }
  v11 = (int *)glotv3::Utils::s_OneUuidGenerator[0];
  *(uintptr_t *)(unk_211744C) = (uintptr_t)(0);
  *(uintptr_t *)(unk_2117448) = (uintptr_t)(glotv3::Utils::s_OneUuidGenerator[0]);
  *(uintptr_t *)(unk_2117450) = (uintptr_t)(-1);
  if ( glotv3::Utils::s_OneUuidGenerator[0] == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      646,
      "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::random::m"
      "ersenne_twister_engine<unsigned int, 32u, 624u, 397u, 31u, -1727483681u, 11u, -1u, 7u, -1658038656u, 15u, -2722365"
      "44u, 18u, 1812433253u>, typename boost::detail::sp_dereference<T>::type = boost::random::mersenne_twister_engine<u"
      "nsigned int, 32u, 624u, 397u, 31u, -1727483681u, 11u, -1u, 7u, -1658038656u, 15u, -272236544u, 18u, 1812433253u>&]",
      "px != 0");
    v11 = (int *)glotv3::Utils::s_OneUuidGenerator[0];
  }
  boost::uuids::detail::seed<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>(v11);
  __cxa_atexit(
    (void (*)(void *))boost::uuids::basic_random_generator<boost::random::mersenne_twister_engine<unsigned int,32u,624u,397u,31u,2567483615u,11u,4294967295u,7u,2636928640u,15u,4022730752u,18u,1812433253u>>::Destroy,
    glotv3::Utils::s_OneUuidGenerator,
    &unk_20D1280);
  *(uint32_t *)&v13[1] = 2440588;
  v14[0] = 0;
  v14[1] = 0;
  g4_boost_counted_time_rep_construct(
    &glotv3::Utils::s_ObjEpoch,
    (unsigned int *)&v13[1],
    (int)(uintptr_t)(v14));
  boost::mutex::Construct((pthread_mutex_t *)&glotv3::Utils::s_GetUUIDMutex);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Utils::s_GetUUIDMutex, &unk_20D1280);
  boost::mutex::Construct((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Utils::s_ToStringMutex, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Utils::s_TimeFormat), "%Y-%m-%d %H:%M:%S", (int)(uintptr_t)(v13));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Utils::s_TimeFormat, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1339440 (size: 1189 bytes)
// Symbol:    sub_1339440
// Demangled: sub_1339440
// ============================================================================
int *sub_1339440()
{
  int *result;
  typedef int _g4_t_v1;
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v1)) > _g4_s0 ? (8u + sizeof(_g4_t_v1)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v2)) > _g4_s1 ? (12u + sizeof(_g4_t_v2)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2117EC0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2117EC0, &unk_20D1280);
  dword_2117EC4 = (uint32_t)(uintptr_t)(sub_18F8270());
  dword_2117EC8 = (uint32_t)(uintptr_t)(sub_18F8270());
  dword_2117ECC = (uint32_t)(uintptr_t)(sub_18F81E0());
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2117ED0 = (uint32_t)(uintptr_t)(sub_18F81E0());
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2117EE0 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2117EF0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2117EF4 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_GAME_VERSION_STRING), (char *)&unk_1B15112, (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_GAME_VERSION_STRING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_MAC), "00:00:00:00:00:00", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_MAC, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_UDID), "Undefined", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_UDID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_PHID), "Undefined", (int)(uintptr_t)(&v1) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_PHID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_GDID), "000000000000", (int)(uintptr_t)(&v2));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_GDID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_HDIDFV), "00000000-0000-0000-0000-000000000000", (int)(uintptr_t)(&v2) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_HDIDFV, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_IDENTIFIER), "Undefined", (int)(uintptr_t)(&v2) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_IDENTIFIER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::configuration::DEFAULT_ETS_SERVER), "ets-beta.gameloft.com", (int)(uintptr_t)(&v2) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::configuration::DEFAULT_ETS_SERVER, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x13398e8 (size: 111 bytes)
// Symbol:    sub_13398E8
// Demangled: sub_13398E8
// ============================================================================
void __noreturn sub_13398E8(int *a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v4)) > _g4_s0 ? (7u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 7u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *a1;
  v3 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4) + 1, a2, (int)(uintptr_t)(&v4));
  sub_19042E0(v5, (char *)&v4 + 1);
  g4_std::string::Destroy((char *)&v4 + 1);
  v5[2] = v2;
  v5[3] = v3;
  v5[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v5[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x1339960 (size: 21 bytes)
// Symbol:    sub_1339960
// Demangled: sub_1339960
// ============================================================================
uint32_t *sub_1339960(uint32_t *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  return result;
}


// ============================================================================
// Address:   0x1339980 (size: 150 bytes)
// Symbol:    sub_1339980
// Demangled: sub_1339980
// ============================================================================
void __noreturn sub_1339980(int *a1)
{
  int v1;
  int v2;
  void *v3;
  typedef uint16_t _g4_t_v4[3];
  typedef uint32_t _g4_t_v5[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (6u + sizeof(_g4_t_v4)) > _g4_s0 ? (6u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 6u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v1 = *a1;
  v2 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v4));
  sub_19042E0(v5, &v4[1]);
  v3 = (void *)(*(uint32_t *)&v4[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v4[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v4[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std_compat::string_rep_destroy(v3);
  }
  v5[2] = v1;
  v5[3] = v2;
  v5[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v5[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x133aca0 (size: 830 bytes)
// Symbol:    sub_133ACA0
// Demangled: sub_133ACA0
// ============================================================================
int *sub_133ACA0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_2117F00);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2117F00, &unk_20D1280);
  dword_2117F04 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2117F08 = v0;
  dword_2117F0C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2117F10 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2117F20 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2117F30 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2117F40 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( g4_guard_0460c3d472[0] == 0 )
  {
    g4_guard_0460c3d472[0] = 1;
    __cxa_atexit(
      (void (*)(void *))g4_noop_dtor,
      &boost::asio::detail::service_base<boost::asio::ip::resolver_service<boost::asio::ip::tcp>>::id,
      &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x133afe0 (size: 10121 bytes)
// Symbol:    sub_133AFE0
// Demangled: sub_133AFE0
// ============================================================================
int *sub_133AFE0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (3u + sizeof(_g4_t_v5)) > _g4_s0 ? (3u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v6)) > _g4_s1 ? (4u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v7)) > _g4_s2 ? (8u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v9)) > _g4_s4 ? (16u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v10)) > _g4_s5 ? (20u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v11)) > _g4_s6 ? (24u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v12)) > _g4_s7 ? (28u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v13)) > _g4_s8 ? (32u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v14)) > _g4_s9 ? (36u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v15)) > _g4_s10 ? (40u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v16)) > _g4_s11 ? (44u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v17)) > _g4_s12 ? (48u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v18)) > _g4_s13 ? (52u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v19)) > _g4_s14 ? (56u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v20)) > _g4_s15 ? (60u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v21)) > _g4_s16 ? (64u + sizeof(_g4_t_v21)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v22)) > _g4_s17 ? (68u + sizeof(_g4_t_v22)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v23)) > _g4_s18 ? (72u + sizeof(_g4_t_v23)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v24)) > _g4_s19 ? (76u + sizeof(_g4_t_v24)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v25)) > _g4_s20 ? (80u + sizeof(_g4_t_v25)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v26)) > _g4_s21 ? (84u + sizeof(_g4_t_v26)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v27)) > _g4_s22 ? (88u + sizeof(_g4_t_v27)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v28)) > _g4_s23 ? (92u + sizeof(_g4_t_v28)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v29)) > _g4_s24 ? (96u + sizeof(_g4_t_v29)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v30)) > _g4_s25 ? (100u + sizeof(_g4_t_v30)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v31)) > _g4_s26 ? (104u + sizeof(_g4_t_v31)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v32)) > _g4_s27 ? (108u + sizeof(_g4_t_v32)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v33)) > _g4_s28 ? (112u + sizeof(_g4_t_v33)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v34)) > _g4_s29 ? (116u + sizeof(_g4_t_v34)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v35)) > _g4_s30 ? (120u + sizeof(_g4_t_v35)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v36)) > _g4_s31 ? (124u + sizeof(_g4_t_v36)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v37)) > _g4_s32 ? (128u + sizeof(_g4_t_v37)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v38)) > _g4_s33 ? (132u + sizeof(_g4_t_v38)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v39)) > _g4_s34 ? (136u + sizeof(_g4_t_v39)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v40)) > _g4_s35 ? (140u + sizeof(_g4_t_v40)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v41)) > _g4_s36 ? (144u + sizeof(_g4_t_v41)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v42)) > _g4_s37 ? (148u + sizeof(_g4_t_v42)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v43)) > _g4_s38 ? (152u + sizeof(_g4_t_v43)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v44)) > _g4_s39 ? (156u + sizeof(_g4_t_v44)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v45)) > _g4_s40 ? (160u + sizeof(_g4_t_v45)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v46)) > _g4_s41 ? (164u + sizeof(_g4_t_v46)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v47)) > _g4_s42 ? (168u + sizeof(_g4_t_v47)) : _g4_s42,
    _g4_s44 = (172u + sizeof(_g4_t_v48)) > _g4_s43 ? (172u + sizeof(_g4_t_v48)) : _g4_s43,
    _g4_s45 = (176u + sizeof(_g4_t_v49)) > _g4_s44 ? (176u + sizeof(_g4_t_v49)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v50)) > _g4_s45 ? (180u + sizeof(_g4_t_v50)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v51)) > _g4_s46 ? (184u + sizeof(_g4_t_v51)) : _g4_s46,
    _g4_s48 = (188u + sizeof(_g4_t_v52)) > _g4_s47 ? (188u + sizeof(_g4_t_v52)) : _g4_s47
  };
  alignas(16) uint8_t _g4_sf[_g4_s48];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 3u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 64u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 68u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 72u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 80u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 84u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 88u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 96u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 100u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 104u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 108u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 112u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 116u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 120u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 124u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 128u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 132u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 136u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 140u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 144u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 148u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 152u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 156u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 160u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 164u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 168u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 172u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 176u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 180u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 184u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 188u);

  sub_1900D70(&unk_2118244);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118244, &unk_20D1280);
  dword_2118248 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_211824C = v0;
  dword_2118250 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118254 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118260 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118270 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118274 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::FAILED_TO_ACQUIRE_ZLIB_BUFFER),
    "[Utils]: Failed to acquire ZLib buffer memory!",
    (int)(uintptr_t)(&v5));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::FAILED_TO_ACQUIRE_ZLIB_BUFFER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::EXCEPTION_IN_ZLIB_STREAM),
    "[Utils]: Exception thrown on ZLib stream, of type: ",
    (int)(uintptr_t)(&v6));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::EXCEPTION_IN_ZLIB_STREAM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::FREE_SPACE_DETECTION_FAILED),
    "[Fs]: Free space detection failed - statvfs failed with error code: ",
    (int)(uintptr_t)(&v6) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::FREE_SPACE_DETECTION_FAILED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_SEPARATOR), "[Manager]: -------------------", (int)(uintptr_t)(&v6) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_SEPARATOR, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_FREE_SPACE), "[Manager]: Using (in MB) free space: ", (int)(uintptr_t)(&v6) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_FREE_SPACE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_SERIALIZER), "[Manager]: Using serializer: ", (int)(uintptr_t)(&v7));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_SERIALIZER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_TIMER), "[Manager]: Using timer of type: ", (int)(uintptr_t)(&v7) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_TIMER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_GGI), "[Manager]: Using game ggi: ", (int)(uintptr_t)(&v7) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_GGI, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_GAME_VERSION), "[Manager]: Using game version: ", (int)(uintptr_t)(&v7) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_GAME_VERSION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_NETWORK_WORKERS), "[Manager]: Using (count of) network workers: ", (int)(uintptr_t)(&v8));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_NETWORK_WORKERS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_DEPENDENCY), "[Manager]: Using dependency: ", (int)(uintptr_t)(&v8) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_DEPENDENCY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_MAC), "[Manager]: Using device mac: ", (int)(uintptr_t)(&v8) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_MAC, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_DEVICE), "[Manager]: Using device: ", (int)(uintptr_t)(&v8) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_DEVICE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_PLATFORM), "[Manager]: Using platform: ", (int)(uintptr_t)(&v9));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_PLATFORM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_FIRMWARE), "[Manager]: Using firmware: ", (int)(uintptr_t)(&v9) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_FIRMWARE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_REVISION), "[Manager]: Using revision: ", (int)(uintptr_t)(&v9) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_REVISION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_IDENTIFIER), "[Manager]: Using device identifier (UDID): ", (int)(uintptr_t)(&v9) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_IDENTIFIER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::USING_IDENTIFIER_FOR_VENDOR),
    "[Manager]: Using device identifier for vendor (IDFV): ",
    (int)(uintptr_t)(&v10));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_IDENTIFIER_FOR_VENDOR, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::USING_HD_IDENTIFIER_FOR_VENDOR),
    "[Manager]: Using HD device identifier for vendor (HDIDFV): ",
    (int)(uintptr_t)(&v10) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_HD_IDENTIFIER_FOR_VENDOR, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_IGP_CODE), "[Manager]: Using IGP Code: ", (int)(uintptr_t)(&v10) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_IGP_CODE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_INJECTED_IGP_CODE), "[Manager]: Using Injected IGP Code: ", (int)(uintptr_t)(&v10) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_INJECTED_IGP_CODE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_DOWNLOAD_CODE), "[Manager]: Using Download Code: ", (int)(uintptr_t)(&v11));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_DOWNLOAD_CODE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_NETWORK_REACTOR), "[Manager]: Using network reactor: ", (int)(uintptr_t)(&v11) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_NETWORK_REACTOR, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_THREADS), "[Manager]: Using threads from: ", (int)(uintptr_t)(&v11) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_THREADS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_DATA_DIRECTORY), "[Manager]: Using data directory: ", (int)(uintptr_t)(&v11) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_DATA_DIRECTORY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_ETS_ENCRYPTION), "[Manager]: Using ETS encryption: ", (int)(uintptr_t)(&v12));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_ETS_ENCRYPTION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_SESSION_ID), "[Manager]: Session identifier (ses_id): ", (int)(uintptr_t)(&v12) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_SESSION_ID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::USING_ETS_VERSION), "[Manager]: Using ETS version: ", (int)(uintptr_t)(&v12) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_ETS_VERSION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DETECTED_MONOTONIC_TIME),
    "[Manager]: Detected previous and current monotonic time: ",
    (int)(uintptr_t)(&v12) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DETECTED_MONOTONIC_TIME, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::STARTED_ASIO_WORKER), "[Manager]: Start ASIO worker thread: ", (int)(uintptr_t)(&v13));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::STARTED_ASIO_WORKER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DESCRIPTOR_COULD_NOT_BE_ACQUIRED),
    "[Manager]: (!) Events descriptor could not be aquired! Game provided invalid EventsJson parameter!",
    (int)(uintptr_t)(&v13) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DESCRIPTOR_COULD_NOT_BE_ACQUIRED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::MARKERS_NOT_FOUND),
    "[Manager]: Recovery of previous (v2) markers cannot be done!",
    (int)(uintptr_t)(&v13) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::MARKERS_NOT_FOUND, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::MARKERS_RECOVERED_LAST_TOKEN),
    "[Manager]: Recovered previous (v2) token as: ",
    (int)(uintptr_t)(&v13) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::MARKERS_RECOVERED_LAST_TOKEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::PUSHING_BACK_FROM_LEFTOVER),
    "[Recover]: Pushing back from: LEFTOVER. UUID: ",
    (int)(uintptr_t)(&v14));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PUSHING_BACK_FROM_LEFTOVER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::PUSHING_BACK_FROM_RESUME),
    "[Recover]: Pushing back from: RESUME. UUID: ",
    (int)(uintptr_t)(&v14) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PUSHING_BACK_FROM_RESUME, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::PUSHING_BACK_FROM_CLIENT),
    "[Recover]: Pushing back from: CLIENT. UUID: ",
    (int)(uintptr_t)(&v14) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PUSHING_BACK_FROM_CLIENT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::PUSHING_BACK_FROM_CRASH),
    "[Recover]: Pushing back from: CRASH. UUID: ",
    (int)(uintptr_t)(&v14) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PUSHING_BACK_FROM_CRASH, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::FAILED_TO_READ_DATA_DIRECTORY_CONTENTS),
    "[Manager]: (!) Failed to read data directory contents, to pushback events from crash!",
    (int)(uintptr_t)(&v15));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::FAILED_TO_READ_DATA_DIRECTORY_CONTENTS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TOO_EARLY_FOR_EVENTS),
    "[Manager]: (!) Too early for tracking. Invoke [OnResume] as early as possible. Ignored event type: ",
    (int)(uintptr_t)(&v15) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TOO_EARLY_FOR_EVENTS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TOO_MANY_PARAMETERS),
    "[Manager]: (!) Too many parameters for event type: ",
    (int)(uintptr_t)(&v15) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TOO_MANY_PARAMETERS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TOO_FEW_PARAMETERS),
    "[Manager]: (!) Too few parameters for event type: ",
    (int)(uintptr_t)(&v15) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TOO_FEW_PARAMETERS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::IGNORED_DATA_BUFFERED_EVENT), "[Manager]: Ignored Data Buffered event", (int)(uintptr_t)(&v16));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::IGNORED_DATA_BUFFERED_EVENT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::CANNOT_FIND_IN_DESCRIPTOR_EVENT),
    "[Manager]: (!) Cannot find in descriptor (events.json), event type: ",
    (int)(uintptr_t)(&v16) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::CANNOT_FIND_IN_DESCRIPTOR_EVENT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::APPLICATION_WAS_PAUSED), "[Manager]: (!) Application was paused!", (int)(uintptr_t)(&v16) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::APPLICATION_WAS_PAUSED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::APPLICATION_WAS_RESUMED), "[Manager]: (!) Application was resumed!", (int)(uintptr_t)(&v16) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::APPLICATION_WAS_RESUMED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::SESSIONS_FILE_IS_BORKED),
    "[Manager]: (!) Session identifier was reset due to broken file!",
    (int)(uintptr_t)(&v17));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::SESSIONS_FILE_IS_BORKED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TOKENIZE_FILE_IS_BORKED),
    "[Manager]: (!) Token was reset due to broken file!",
    (int)(uintptr_t)(&v17) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TOKENIZE_FILE_IS_BORKED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DEVICEID_FILE_IS_BORKED),
    "[Manager]: (!) Device (identifiers) were reset due to broken file!",
    (int)(uintptr_t)(&v17) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DEVICEID_FILE_IS_BORKED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAMETIME_FILE_IS_BORKED),
    "[Manager]: (!) Entire time in game flag has been reset due to broken file!",
    (int)(uintptr_t)(&v17) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAMETIME_FILE_IS_BORKED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::SESSIONS_FILE_CANNOT_BE_WRITTEN),
    "[Manager]: (!) Session cannot be written to file!",
    (int)(uintptr_t)(&v18));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::SESSIONS_FILE_CANNOT_BE_WRITTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TOKENIZE_FILE_CANNOT_BE_WRITTEN),
    "[Manager]: (!) Token cannot be written to file!",
    (int)(uintptr_t)(&v18) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TOKENIZE_FILE_CANNOT_BE_WRITTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DEVICEID_FILE_CANNOT_BE_WRITTEN),
    "[Manager]: (!) Device (identifiers) cannot be written to file!",
    (int)(uintptr_t)(&v18) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DEVICEID_FILE_CANNOT_BE_WRITTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAMETIME_FILE_CANNOT_BE_WRITTEN),
    "[Manager]: (!) Entire time in game flag cannot be written to file!",
    (int)(uintptr_t)(&v18) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAMETIME_FILE_CANNOT_BE_WRITTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::PRIORITY_FILE_CANNOT_BE_WRITTEN),
    "[Manager]: (!) Cannot write to events file of type: Priority!",
    (int)(uintptr_t)(&v19));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PRIORITY_FILE_CANNOT_BE_WRITTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::STREAMED_FILE_CANNOT_BE_WRITTEN),
    "[Manager]: (!) Cannot write to events file of type: Streamed!",
    (int)(uintptr_t)(&v19) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::STREAMED_FILE_CANNOT_BE_WRITTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::BATCHING_FILE_CANNOT_BE_WRITTEN),
    "[Manager]: (!) Cannot write to events file of type: Batching!",
    (int)(uintptr_t)(&v19) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::BATCHING_FILE_CANNOT_BE_WRITTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DESER_FAILED_ON_BUFFER),
    "[Deserializer]: (!) Cannot parse pre-serialized ZLib data!",
    (int)(uintptr_t)(&v19) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DESER_FAILED_ON_BUFFER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::EVENTS_CANNOT_BE_STORED_DEVICE_ISSUES),
    "[Manager]: Events cannot be stored, lack of space or device issues!",
    (int)(uintptr_t)(&v20));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::EVENTS_CANNOT_BE_STORED_DEVICE_ISSUES, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DUPLICATION_OF_EVENTS),
    "[Manager]: (!) Detected duplication of event: ",
    (int)(uintptr_t)(&v20) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DUPLICATION_OF_EVENTS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::FAILED_TO_AQUIRE_LOCK_ON_GAMETIME),
    "[Manager]: (!) Failed to aquire lock on gametime!",
    (int)(uintptr_t)(&v20) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::FAILED_TO_AQUIRE_LOCK_ON_GAMETIME, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_INVALID_STREAM_STATE),
    "[Reader]: (!) Input stream is not in a good state!",
    (int)(uintptr_t)(&v20) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_INVALID_STREAM_STATE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_BADBIT_ON_STREAM),
    "[Reader]: (!) Caught badbit on I/O operation, due to underyling hardware!",
    (int)(uintptr_t)(&v21));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_BADBIT_ON_STREAM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILBIT_ON_STREAM),
    "[Reader]: (!) Caught I/O failure from underlying hardware!",
    (int)(uintptr_t)(&v21) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILBIT_ON_STREAM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_ZIP_BUFFER),
    "[Reader]: (!) Failed through unzipping operation on buffer!",
    (int)(uintptr_t)(&v21) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_ZIP_BUFFER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_BEFORE_READ),
    "[Reader]: (!) Failed before read, stream was already borked!",
    (int)(uintptr_t)(&v21) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_BEFORE_READ, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_READ_SIZE),
    "[Reader]: (!) Failed on size of data, and not at EOF!",
    (int)(uintptr_t)(&v22));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_READ_SIZE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_DATA_READ),
    "[Reader]: (!) Failed through data read and not at EOF!",
    (int)(uintptr_t)(&v22) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_DATA_READ, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_READ_CHECKSUM),
    "[Reader]: (!) Failed to read checksum and not at EOF!",
    (int)(uintptr_t)(&v22) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_READ_CHECKSUM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_CRC_ALTERED_DATA),
    "[Reader]: (!) Failed to match checksums, data was mangled!",
    (int)(uintptr_t)(&v22) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_CRC_ALTERED_DATA, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_POSITION),
    "[Reader]: (!) Failed on getting the stream offset position!",
    (int)(uintptr_t)(&v23));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_POSITION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_DATA_VECTOR_EMPTY),
    "[Reader]: (!) Failed on data vector, as it's empty!",
    (int)(uintptr_t)(&v23) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_DATA_VECTOR_EMPTY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_MAGIC_NUMBER),
    "[Reader]: (!) Failed on magic number. Stream didn't even start!",
    (int)(uintptr_t)(&v23) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_MAGIC_NUMBER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_VERSION),
    "[Reader]: (!) Failed on reading of binary version number!",
    (int)(uintptr_t)(&v23) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_VERSION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_UNMATCHED_MAGIC_NUMBER),
    "[Reader]: (!) Failed on unmatched magic number!",
    (int)(uintptr_t)(&v24));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_UNMATCHED_MAGIC_NUMBER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::READER_FAILED_ON_UNMATCHED_BINARY_VERSION),
    "[Reader]: (!) Failed on unmatched binary version!",
    (int)(uintptr_t)(&v24) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::READER_FAILED_ON_UNMATCHED_BINARY_VERSION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_INVALID_STREAM_STATE),
    "[Writer]: (!) Output stream is not in a good state!",
    (int)(uintptr_t)(&v24) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_INVALID_STREAM_STATE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_BADBIT_ON_STREAM),
    "[Writer]: (!) Caught badbit on I/O operation, due to underyling hardware!",
    (int)(uintptr_t)(&v24) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_BADBIT_ON_STREAM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILBIT_ON_STREAM),
    "[Writer]: (!) Caught I/O failure from underlying hardware!",
    (int)(uintptr_t)(&v25));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILBIT_ON_STREAM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_BEFORE_WRITE),
    "[Writer]: (!) Failed before write, data should be valid!",
    (int)(uintptr_t)(&v25) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_BEFORE_WRITE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER_EMPTY),
    "[Writer]: (!) Zip operation returned empty buffer!",
    (int)(uintptr_t)(&v25) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER_EMPTY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER),
    "[Writer]: (!) Failed through zipping operation on buffer!",
    (int)(uintptr_t)(&v25) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_ZIP_BUFFER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_HALFWAY_THROUGH_WRITE),
    "[Writer]: (!) Failed halfway on a write!",
    (int)(uintptr_t)(&v26));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_HALFWAY_THROUGH_WRITE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_THROUGH_WRITE),
    "[Writer]: (!) Failed through the write! State of serialized event unknown!",
    (int)(uintptr_t)(&v26) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_THROUGH_WRITE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_CHECKSUM),
    "[Writer]: (!) Failed through checksum write!",
    (int)(uintptr_t)(&v26) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_CHECKSUM, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_MAGIC_NUMBER),
    "[Writer]: (!) Failed on magic number. Stream didn't even start!",
    (int)(uintptr_t)(&v26) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_MAGIC_NUMBER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_VERSION),
    "[Writer]: (!) Failed on writing of binary version number!",
    (int)(uintptr_t)(&v27));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_VERSION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::WRITER_FAILED_ON_POSITION),
    "[Writer]: (!) Failed on getting the stream offset position!",
    (int)(uintptr_t)(&v27) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::WRITER_FAILED_ON_POSITION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_INVALID_HTTP_RESPONSE),
    "[Network]: (!) Received invalid HTTP response from server!",
    (int)(uintptr_t)(&v27) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_INVALID_HTTP_RESPONSE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_200_HTTP_STATUS_CODE),
    "[Network]: (!) Received non-200 HTTP status code! Code was: ",
    (int)(uintptr_t)(&v27) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_NON_200_HTTP_STATUS_CODE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_200_ETS_STATUS_CODE),
    "[Network]: (!) Received non-200 ETS status code! Code was: ",
    (int)(uintptr_t)(&v28));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_NON_200_ETS_STATUS_CODE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_UNKNOWN_STATUS_CODE),
    "[Network]: (!) Received unknown status code! Code was: ",
    (int)(uintptr_t)(&v28) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_UNKNOWN_STATUS_CODE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_NUMERIC_STATUS_CODE),
    "[Network]: (!) Received non-numeric HTTP status code! Code was:",
    (int)(uintptr_t)(&v28) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_NON_NUMERIC_STATUS_CODE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_PROPER_STATUS),
    "[Network]: Properly sent with SHA1 and reply 200, package with UUID: ",
    (int)(uintptr_t)(&v28) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_PROPER_STATUS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_RESOLVE),
    "[Network]: (!) Failed hostname resolve, with message: ",
    (int)(uintptr_t)(&v29));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_FAILED_ON_RESOLVE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_CONNECT),
    "[Network]: (!) Failed on connect to endpoint, with message: ",
    (int)(uintptr_t)(&v29) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_FAILED_ON_CONNECT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_WRITE),
    "[Network]: (!) Failed on write to socket, with message: ",
    (int)(uintptr_t)(&v29) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_FAILED_ON_WRITE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_ON_STATUS_LINE),
    "[Network]: (!) Failed on HTTP status, with message: ",
    (int)(uintptr_t)(&v29) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_FAILED_ON_STATUS_LINE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_READING_HEADERS),
    "[Network]: (!) Failed on HTTP headers, with message: ",
    (int)(uintptr_t)(&v30));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_FAILED_READING_HEADERS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_READING_CONTENT),
    "[Network]: (!) Failed on content body, with message: ",
    (int)(uintptr_t)(&v30) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_FAILED_READING_CONTENT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NETWORK_FAILED_BACKUP),
    "[Network]: (!) Failed to ensure backup of events for client!",
    (int)(uintptr_t)(&v30) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NETWORK_FAILED_BACKUP, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_BIND),
    "[TCPServer]: (!) Failed to start server for Libpsy, on bind!",
    (int)(uintptr_t)(&v30) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_BIND, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_SET_OPTION),
    "[TCPServer]: (!) Failed to start server for Libpsy, on set_option!",
    (int)(uintptr_t)(&v31));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_SET_OPTION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_OPEN),
    "[TCPServer]: (!) Failed to start server for Libpsy, on open!",
    (int)(uintptr_t)(&v31) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_OPEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_LISTEN),
    "[TCPServer]: (!) Failed to start server for Libpsy, on listen!",
    (int)(uintptr_t)(&v31) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::LIBSPY_TCPSERVER_FAILED_ON_LISTEN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::PRIORITY_UUID_PUSHING), "[Pushing]: Priority UUID # ", (int)(uintptr_t)(&v31) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PRIORITY_UUID_PUSHING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::STREAMED_UUID_PUSHING), "[Pushing]: Streamed UUID # ", (int)(uintptr_t)(&v32));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::STREAMED_UUID_PUSHING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::BATCHING_UUID_PUSHING), "[Pushing]: Batching UUID # ", (int)(uintptr_t)(&v32) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::BATCHING_UUID_PUSHING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::BATCHING_UUID_NETWORK), "[Network]: Batching UUID # ", (int)(uintptr_t)(&v32) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::BATCHING_UUID_NETWORK, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::PACKAGE_WITH_EVENT_UUID), "[Network]: Package with event UUID # ", (int)(uintptr_t)(&v32) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PACKAGE_WITH_EVENT_UUID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ADDING_PRIORITY_TO_PACKAGE_UUID),
    "[Network]: Adding Priority events to package with UUID: ",
    (int)(uintptr_t)(&v33));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ADDING_PRIORITY_TO_PACKAGE_UUID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ADDING_STREAMED_TO_PACKAGE_UUID),
    "[Network]: Adding Streamed events to package with UUID: ",
    (int)(uintptr_t)(&v33) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ADDING_STREAMED_TO_PACKAGE_UUID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_INPUT_TRUNCATED),
    "[Network]: (!) Input truncated was reported by ETS server!",
    (int)(uintptr_t)(&v33) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_INPUT_TRUNCATED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_CONTENT_TYPE_NOT_SUPPORTED),
    "[Network]: (!) Input content type not supported!",
    (int)(uintptr_t)(&v33) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_CONTENT_TYPE_NOT_SUPPORTED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_COULD_NOT_DECODE_JSON_REQUEST),
    "[Network]: (!) Could not decode JSON request!",
    (int)(uintptr_t)(&v34));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_COULD_NOT_DECODE_JSON_REQUEST, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_INVALID_REQUEST_FORMAT), "[Network]: (!) Invalid request format!", (int)(uintptr_t)(&v34) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_INVALID_REQUEST_FORMAT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_GAME_NOT_REGISTERED_FOR_TRACKING),
    "[Network]: (!) Game is not registered for tracking!",
    (int)(uintptr_t)(&v34) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_GAME_NOT_REGISTERED_FOR_TRACKING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_GAME_DISABLED_TRACKING),
    "[Network]: (!) Game tracking is disabled!",
    (int)(uintptr_t)(&v34) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_GAME_DISABLED_TRACKING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::NOT_ENOUGH_SPACE_FOR_TRACKING),
    "[Manager]: (!) Not enouhg space on device!",
    (int)(uintptr_t)(&v35));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::NOT_ENOUGH_SPACE_FOR_TRACKING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_INVALID_UDID_FORMAT), "[Network]: (!) Invalid UDID format!", (int)(uintptr_t)(&v35) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_INVALID_UDID_FORMAT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_TOO_MANY_EVENTS_SET), "[Network]: (!) Too many events sent!", (int)(uintptr_t)(&v35) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_TOO_MANY_EVENTS_SET, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_EVENT_CONTAINS_TOO_MUCH_DATA),
    "[Network]: (!) Event contains too much data!",
    (int)(uintptr_t)(&v35) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_EVENT_CONTAINS_TOO_MUCH_DATA, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_MAC_ADDRESS_IS_INVALID), "[Network]: (!) MAC address is invalid!", (int)(uintptr_t)(&v36));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_MAC_ADDRESS_IS_INVALID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_GLDID_IS_INVALID), "[Network]: (!) GLDID is invalid!", (int)(uintptr_t)(&v36) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_GLDID_IS_INVALID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_UNKNOWN_REASON), "[Network]: (!) ETS - Unknown reason!", (int)(uintptr_t)(&v36) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_UNKNOWN_REASON, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_COULD_NOT_CONNECT_TO_DATABASE),
    "[Network]: (!) ETS - Could not connect to database!",
    (int)(uintptr_t)(&v36) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_COULD_NOT_CONNECT_TO_DATABASE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_DATABASE_ERROR), "[Network]: (!) ETS - Database error!", (int)(uintptr_t)(&v37));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_DATABASE_ERROR, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_CSV_WRITE_FAILED), "[Network]: (!) ETS - CSV write failed!", (int)(uintptr_t)(&v37) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_CSV_WRITE_FAILED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_BETA_HOST_UNREACHABLE), "[Network]: (!) Host unreachable!", (int)(uintptr_t)(&v37) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_BETA_HOST_UNREACHABLE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_BETA_PROBLEM_READING_RESPONSE),
    "[Network]: (!) Problem reading response from beta!",
    (int)(uintptr_t)(&v37) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_BETA_PROBLEM_READING_RESPONSE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_GGI_REJECTED_BY_ADMIN),
    "[Network]: (!) ETS - GGI/Version rejected by admin!",
    (int)(uintptr_t)(&v38));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_GGI_REJECTED_BY_ADMIN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_STOP_SENDING),
    "[Network]: (!) ETS - GGI/Version blocked by admin! Stop sending.",
    (int)(uintptr_t)(&v38) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_GGI_BLOCKED_STOP_SENDING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_DELETE),
    "[Network]: (!) ETS - GGI/Version blocked by admin! Stop sending, erase from device!",
    (int)(uintptr_t)(&v38) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_GGI_BLOCKED_DELETE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_DISABLE_TRACKING),
    "[Network]: (!) ETS - GGI/Version blocked by admin! Disable tracking, stop, erase!",
    (int)(uintptr_t)(&v38) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_GGI_BLOCKED_DISABLE_TRACKING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_IS_SHUTTING_DOWN),
    "[Network]: (!) ETS - Server is shutting down, retrying sending",
    (int)(uintptr_t)(&v39));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_IS_SHUTTING_DOWN, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_BATCH_STORAGE_REFUSED),
    "[Network]: (!) ETS - Batch storage refused, retrying sending",
    (int)(uintptr_t)(&v39) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_BATCH_STORAGE_REFUSED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_REJECTED_EVENTS),
    "[Network]: (!) ETS - Rejected the events, check Refused*.bin",
    (int)(uintptr_t)(&v39) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_REJECTED_EVENTS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_REJECTED_HEADERS), "[Network]: (!) ETS - Rejected the headers", (int)(uintptr_t)(&v39) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_REJECTED_HEADERS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_REJECTED_PACKAGE),
    "[Network]: (!) ETS - Rejected the package, check Refused*.bin",
    (int)(uintptr_t)(&v40));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_REJECTED_PACKAGE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ETS_TIME_HAS_EXPIRED), "[Network]: (!) ETS - Time has expired", (int)(uintptr_t)(&v40) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_TIME_HAS_EXPIRED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::GAIA_GOT_ETS_SERVER_AS), "[Network]: Retrieved ETS from GAIA as: ", (int)(uintptr_t)(&v40) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAIA_GOT_ETS_SERVER_AS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAIA_ETS_REQUEST_INVALID_RESPONSE),
    "[Manager]: (!) Gaia ETS request : invalid response type, expected string, got: ",
    (int)(uintptr_t)(&v40) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAIA_ETS_REQUEST_INVALID_RESPONSE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAIA_FED_ACCESS_TOKEN_REQUEST_INVALID_RESPONSE),
    "[Manager]: (!) Gaia fed_access_token request : invalid response type, expected string, got: ",
    (int)(uintptr_t)(&v41));
  __cxa_atexit(
    (void (*)(void *))g4_noop_dtor,
    &glotv3::errors::GAIA_FED_ACCESS_TOKEN_REQUEST_INVALID_RESPONSE,
    &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAIA_FED_ACCESS_TOKEN_CANNOT_REQUEST),
    "[Manager]: (!) Gaia fed_access_token request cannot be initiated, Gaia error code: ",
    (int)(uintptr_t)(&v41) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAIA_FED_ACCESS_TOKEN_CANNOT_REQUEST, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAIA_FED_ACCESS_TOKEN_REQUEST_FAILED),
    "[Manager]: (!) Gaia fed_access_token reqest failed, response code: ",
    (int)(uintptr_t)(&v41) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAIA_FED_ACCESS_TOKEN_REQUEST_FAILED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAIA_REQUEST_FAILED),
    "[Manager]: (!) Gaia request failed, operation code and response code: ",
    (int)(uintptr_t)(&v41) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAIA_REQUEST_FAILED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAIA_ETS_REQUEST_ERROR),
    "[Manager]: (!) Gaia ETS request has failed with error code: ",
    (int)(uintptr_t)(&v42));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAIA_ETS_REQUEST_ERROR, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::GAIA_GOT_FEDERATION_ACCESS_TOKEN_AS),
    "[EventList]: Retrieved federation access_token from Gaia as: ",
    (int)(uintptr_t)(&v42) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::GAIA_GOT_FEDERATION_ACCESS_TOKEN_AS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TCP_FOR_LIBSPY_WAS_OPENED),
    "[Network]: TCP port for LibSpy was opened on: ",
    (int)(uintptr_t)(&v42) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TCP_FOR_LIBSPY_WAS_OPENED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::EMPTY_DATA_PASSED_TO_NETWORK_CLIENT),
    "[Network]: (!) Empty data passed to network client!",
    (int)(uintptr_t)(&v42) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::EMPTY_DATA_PASSED_TO_NETWORK_CLIENT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::OVERWHELMED_NETWORK_DISABLED_TIMERS),
    "[Manager]: Overwhelmed network, no timers will fire!",
    (int)(uintptr_t)(&v43));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::OVERWHELMED_NETWORK_DISABLED_TIMERS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::OVERWHELMED_NETWORK_ENABLING_TIMERS),
    "[Manager]: Overwhelmed network, one client has finished, enabling timers!",
    (int)(uintptr_t)(&v43) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::OVERWHELMED_NETWORK_ENABLING_TIMERS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::TIMER_WAS_BLOCKED), "[Manager]: Timer has fired but is blocked at: ", (int)(uintptr_t)(&v43) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TIMER_WAS_BLOCKED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::TIMER_HAS_FIRED), "[Manager]: Timer has fired for network!", (int)(uintptr_t)(&v43) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TIMER_HAS_FIRED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::TIMER_HAS_NOT_FIRED), "[Manager]: Timer has not fired for network!", (int)(uintptr_t)(&v44));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TIMER_HAS_NOT_FIRED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::TIMER_HAS_FIRED_FOR_BUFFER), "[Manager]: Timer has fired for buffer!", (int)(uintptr_t)(&v44) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TIMER_HAS_FIRED_FOR_BUFFER, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TIMER_HAS_FIRED_FOR_RESYNC),
    "[Manager]: Timer has fired for resync with Gaia!",
    (int)(uintptr_t)(&v44) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TIMER_HAS_FIRED_FOR_RESYNC, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TIMER_FIRES_FOR_CONNECTIVITY_AT),
    "[Manager]: Timer fires for connectivity check at second: ",
    (int)(uintptr_t)(&v44) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TIMER_FIRES_FOR_CONNECTIVITY_AT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::INTERVAL_OF_SENDING_EVENTS_IS),
    "[Manager]: Interval of sending events is: ",
    (int)(uintptr_t)(&v45));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::INTERVAL_OF_SENDING_EVENTS_IS, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::TIMER_HAS_FIRED_DUE_TO_COMPACTION),
    "[Network]: Timer has fired for compaction!",
    (int)(uintptr_t)(&v45) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::TIMER_HAS_FIRED_DUE_TO_COMPACTION, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::ENTERED_RECOVERY), "[Manager]: First timer enters recovery mode!", (int)(uintptr_t)(&v45) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ENTERED_RECOVERY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::OUT_OF_MEMORY), "[Manager]: (!) Out of memory! On: ", (int)(uintptr_t)(&v45) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::OUT_OF_MEMORY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::DETECTED_CONNECTIVITY), "[Manager]: Detected has connectivity: ", (int)(uintptr_t)(&v46));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DETECTED_CONNECTIVITY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DETECTED_NETWORK_OVERWHELMED),
    "[Manager]: Detected network is not overwhelmed: ",
    (int)(uintptr_t)(&v46) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DETECTED_NETWORK_OVERWHELMED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DETECTED_ETS_RETRIEVED_FROM_GAIA),
    "[Manager]: Detected ETS was retrieved from Gaia library: ",
    (int)(uintptr_t)(&v46) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DETECTED_ETS_RETRIEVED_FROM_GAIA, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DETECTED_NOT_RECOVERING),
    "[Manager]: Detected not currently recovering: ",
    (int)(uintptr_t)(&v46) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DETECTED_NOT_RECOVERING, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DETECTED_TIMER_FOR_RECOVERY_NOT_FIRED),
    "[Manager]: Detected timer for recovery not yet fired: ",
    (int)(uintptr_t)(&v47));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DETECTED_TIMER_FOR_RECOVERY_NOT_FIRED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::PAUSED_AUT), "[Manager]: --- AUT has paused properly! ---", (int)(uintptr_t)(&v47) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PAUSED_AUT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::RESUMED_AUT), "[Manager]: --- AUT has resumed properly! ---", (int)(uintptr_t)(&v47) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::RESUMED_AUT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::PAUSED_AUT_BUT_NOT_RESUMED),
    "[Manager]: --- AUT has paused but not previously resumed! Application implementation bug! ---",
    (int)(uintptr_t)(&v47) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::PAUSED_AUT_BUT_NOT_RESUMED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::RESUMED_AUT_BUT_NOT_PAUSED),
    "[Manager]: --- AUT has resumed but not previously paused! Application implementation bug! ---",
    (int)(uintptr_t)(&v48));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::RESUMED_AUT_BUT_NOT_PAUSED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::RESUMED_AUT_BUT_NOT_LAUNCHED),
    "[Manager]: --- AUT has resumed but not previously launched! Application implementation bug! ---",
    (int)(uintptr_t)(&v48) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::RESUMED_AUT_BUT_NOT_LAUNCHED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::LAUNCHED_AUT), "[Manager]: --- AUT has launched properly! ---", (int)(uintptr_t)(&v48) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::LAUNCHED_AUT, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::AUT_PREVIOUSLY_LAUNCHED),
    "[Manager]: --- AUT has called OnLaunch but was previously launched! Application implementation bug! ---",
    (int)(uintptr_t)(&v48) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::AUT_PREVIOUSLY_LAUNCHED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ACQUIRED_NETWORK_LOCK),
    "[Manager]: Timer properly acquired LOCK on network!",
    (int)(uintptr_t)(&v49));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ACQUIRED_NETWORK_LOCK, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ACQUIRED_NETWORK_LOCK_FAILED),
    "[Manager]: Timer failed to properly acquire LOCK on network!",
    (int)(uintptr_t)(&v49) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ACQUIRED_NETWORK_LOCK_FAILED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::BINARY_KEY_NOT_FOUND),
    "[Manager]: Binary: Key was not found in stream!",
    (int)(uintptr_t)(&v49) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::BINARY_KEY_NOT_FOUND, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::BINARY_COUNT_OF_MAP_NOT_FOUND),
    "[Manager]: Binary: Count (of map) tag not found in stream!",
    (int)(uintptr_t)(&v49) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::BINARY_COUNT_OF_MAP_NOT_FOUND, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::BINARY_MAP_TAG_NOT_FOUND),
    "[Manager]: Binary: Map tag not found in stream!",
    (int)(uintptr_t)(&v50));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::BINARY_MAP_TAG_NOT_FOUND, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::BINARY_EVENT_TAG_NOT_FOUND),
    "[Manager]: Binary: Event tag not found in stream!",
    (int)(uintptr_t)(&v50) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::BINARY_EVENT_TAG_NOT_FOUND, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::VALIDATION_FAILED_KEY_VALUE),
    "[EventList]: (!) Validation failed for key # value: ",
    (int)(uintptr_t)(&v50) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::VALIDATION_FAILED_KEY_VALUE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::FAILED_STORE_APP_INSTALL_KEY),
    "[Manager]: (!) Failed to store application uninstall persistent key",
    (int)(uintptr_t)(&v50) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::FAILED_STORE_APP_INSTALL_KEY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::FAILED_SET_IDENTIFIER_PERSISTENT_AT_UNINSTALL_WITH_KEY_VALUE),
    "[Manager]: (!) Failed to set identifier persistent at uninstall with key # value: ",
    (int)(uintptr_t)(&v51));
  __cxa_atexit(
    (void (*)(void *))g4_noop_dtor,
    &glotv3::errors::FAILED_SET_IDENTIFIER_PERSISTENT_AT_UNINSTALL_WITH_KEY_VALUE,
    &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::FAILED_GAIA_SECURE_STORAGE_MANAGER_WITH_ERROR),
    "[Porting]: (!) Failed in Gaia SecureStorageManager with StorageErrors value: ",
    (int)(uintptr_t)(&v51) + 1);
  __cxa_atexit(
    (void (*)(void *))g4_noop_dtor,
    &glotv3::errors::FAILED_GAIA_SECURE_STORAGE_MANAGER_WITH_ERROR,
    &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::DNS_RESOLVE_FAILED_ON_SERVER_WITH_MESSAGE),
    "[DNSClient]: DNS resolve failed on server: ",
    (int)(uintptr_t)(&v51) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::DNS_RESOLVE_FAILED_ON_SERVER_WITH_MESSAGE, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_DELAY_HAS_ENDED),
    "[Manager]: ETS delay of sending events has ended",
    (int)(uintptr_t)(&v51) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_DELAY_HAS_ENDED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::SENDING_IS_BLOCKED_BY_ETS_DELAY),
    "[Manager]: Sending of events is blocked by ETS delay!",
    (int)(uintptr_t)(&v52));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::SENDING_IS_BLOCKED_BY_ETS_DELAY, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::errors::SENDING_IS_BLOCKED), "[Manager]: Sending of events is blocked!", (int)(uintptr_t)(&v52) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::SENDING_IS_BLOCKED, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::ETS_HAS_DELAYED_SENDING_FOR),
    "[Manager]: ETS has delayed sending for: ",
    (int)(uintptr_t)(&v52) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::ETS_HAS_DELAYED_SENDING_FOR, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr(
    (int)(uintptr_t)(&glotv3::errors::USING_ETSV2_BUT_RETRIEVED_NON_ETSV2_URL),
    "[Manager]: (!) Using ETSv2 but retrieved non ETSv2 URL from Gaia: ",
    (int)(uintptr_t)(&v52) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::errors::USING_ETSV2_BUT_RETRIEVED_NON_ETSV2_URL, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x133d920 (size: 305 bytes)
// Symbol:    _ZN9rapidjson12GenericValueINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEEixEPKc
// Demangled: rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::operator[](char const*)
// ============================================================================
template <>
void *rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::opIndex(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *self,
        const char *s2)
{
  size_t n;
  const char *v3;
  int v4;
  int v5;
  void *v6;

  if ( s2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)self + 3) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *s2 != 0 )
  {
    v3 = s2;
    do
      ++v3;
    while ( *v3 != 0 );
    n = v3 - s2;
  }
  v4 = *(uint32_t *)self;
  v5 = *(uint32_t *)self + 32 * *((uint32_t *)self + 1);
  if ( *(uint32_t *)self != v5 )
  {
    while ( *(uint32_t *)(v4 + 4) != n || memcmp(*(const void **)v4, s2, n) != 0 )
    {
      v4 += 32;
      if ( v4 == v5 )
        goto LABEL_17;
    }
    if ( v4 != 0 )
      return (void *)(v4 + 16);
  }
LABEL_17:
  v6 = &g4_rapidjson_NullValue;
  if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
    && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
  {
    *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
    _cxa_guard_release(g4_guard_d940a9bded);
    __cxa_atexit(
      (void (*)(void *))0,
      &g4_rapidjson_NullValue,
      &unk_20D1280);
  }
  return v6;
}


// ============================================================================
// Address:   0x133fb80 (size: 643 bytes)
// Symbol:    sub_133FB80
// Demangled: sub_133FB80
// ============================================================================
char **sub_133FB80(
        char **a1,
        int a2,
        uint32_t *a3,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *a4)
{
  unsigned int v6;
  unsigned int v7;
  char *v8;
  int v9;
  void *dest;
  const void *src;
  char *v12;
  char *v13;
  int v15;
  uint32_t *v16;
  char *v17;
  char *v18;
  int n;
  unsigned int v20;

  if ( a1[3] != (char *)(uintptr_t)((uint8_t *)&dword_0 + 3) )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
  if ( (*(uint8_t *)(a2 + 14) & 0x10) == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      435,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "name.IsString ()");
  v6 = (unsigned int)(uintptr_t)(a1[1]);
  v7 = (unsigned int)(uintptr_t)(a1[2]);
  if ( v6 < v7 )
  {
    v8 = *a1;
  }
  else if ( v7 != 0 )
  {
    a1[2] = (char *)(2 * v7);
    v20 = v7 << 6;
    v8 = *a1;
    if ( *a1 == nullptr )
    {
      v8 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(a4, v20);
      v6 = (unsigned int)(uintptr_t)(a1[1]);
      *a1 = v8;
      goto LABEL_16;
    }
    n = 32 * v7;
    if ( v20 > 32 * v7 )
    {
      v16 = *(uint32_t **)a4;
      v9 = *(uint32_t *)(*(uint32_t *)a4 + 4);
      if ( v8 == (char *)(*(uint32_t *)a4 - n + v9 + 12) && (unsigned int)(v15 = v9 + v20 - n) <= *v16 )
      {
        v16[1] = v15;
        if ( ((uint8_t)(uintptr_t)(v8) & 3) != 0 )
        {
          v18 = v8;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            294,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "((uintptr_t) originalPtr & 3) == 0");
          v8 = v18;
          v6 = (unsigned int)(uintptr_t)(a1[1]);
          *a1 = v18;
          goto LABEL_16;
        }
      }
      else
      {
        v17 = *a1;
        dest = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(a4, v20);
        src = v17;
        if ( dest == nullptr )
        {
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            301,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "newBuffer != 0");
          src = v17;
          dest = nullptr;
        }
        v8 = (char *)memcpy(dest, src, n);
      }
      v6 = (unsigned int)(uintptr_t)(a1[1]);
    }
    *a1 = v8;
  }
  else
  {
    a1[2] = (char *)&word_10;
    v8 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(a4, 0x200u);
    *a1 = v8;
    v6 = (unsigned int)(uintptr_t)(a1[1]);
  }
LABEL_16:
  v12 = &v8[32 * v6];
  *(uint32_t *)v12 = *(uint32_t *)a2;
  *((uint32_t *)v12 + 1) = *(uint32_t *)(a2 + 4);
  *((uint32_t *)v12 + 2) = *(uint32_t *)(a2 + 8);
  *((uint32_t *)v12 + 3) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = 0;
  v13 = &(*a1)[32 * (uint32_t)(uintptr_t)(a1[1])];
  *((uint32_t *)v13 + 4) = *a3;
  *((uint32_t *)v13 + 5) = a3[1];
  *((uint32_t *)v13 + 6) = a3[2];
  *((uint32_t *)v13 + 7) = a3[3];
  a3[3] = 0;
  ++a1[1];
  return a1;
}


// ============================================================================
// Address:   0x133fe10 (size: 140 bytes)
// Symbol:    sub_133FE10
// Demangled: sub_133FE10
// ============================================================================
int sub_133FE10(
        int *a1,
        uint8_t *a2,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *a3)
{
  size_t n;
  unsigned int v6;
  uint8_t *v7;
  void *dest;
  int result;

  n = 0;
  v6 = 1;
  if ( *a2 != 0 )
  {
    v7 = a2;
    do
      ++v7;
    while ( *v7 != 0 );
    n = v7 - a2;
    v6 = n + 1;
  }
  a1[3] = 3145733;
  dest = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(a3, v6);
  *a1 = (int)(uintptr_t)(dest);
  a1[1] = n;
  memcpy(dest, a2, n);
  result = *a1;
  *(uint8_t *)(*a1 + n) = 0;
  return result;
}


// ============================================================================
// Address:   0x133fea0 (size: 142 bytes)
// Symbol:    sub_133FEA0
// Demangled: sub_133FEA0
// ============================================================================
uint32_t *sub_133FEA0(
        uint32_t *a1,
        uint8_t *a2,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *a3)
{
  size_t n;
  unsigned int v6;
  uint8_t *v7;
  void *dest;

  n = 0;
  v6 = 1;
  if ( *a2 != 0 )
  {
    v7 = a2;
    do
      ++v7;
    while ( *v7 != 0 );
    n = v7 - a2;
    v6 = n + 1;
  }
  a1[3] = 3145733;
  dest = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(a3, v6);
  *a1 = (uint32_t)(uintptr_t)(dest);
  a1[1] = n;
  memcpy(dest, a2, n);
  *(uint8_t *)(*a1 + n) = 0;
  return a1;
}


// ============================================================================
// Address:   0x133ff30 (size: 379 bytes)
// Symbol:    sub_133FF30
// Demangled: sub_133FF30
// ============================================================================
char *sub_133FF30(int a1)
{
  char *result;
  int v3;
  unsigned int v4;
  char *src;
  unsigned int v6;
  int v7;
  void *dest;
  size_t n;
  int v10;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v11;
  size_t v12;
  int v13;
  uint32_t *v14;

  result = *(char **)(a1 + 12);
  v3 = (int)(uintptr_t)(result + 16);
  if ( (unsigned int)(uintptr_t)(result + 16) >= *(uint32_t *)(a1 + 16) )
  {
    v4 = *(uint32_t *)(a1 + 20);
    src = *(char **)(a1 + 8);
    v13 = result - src;
    v6 = result - src + 16;
    v11 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1;
    if ( v6 < 2 * v4 )
      v6 = 2 * v4;
    if ( src != nullptr )
    {
      if ( v4 < v6 )
      {
        v14 = *(uint32_t **)v11;
        v7 = *(uint32_t *)(*(uint32_t *)v11 + 4);
        if ( src == (char *)(*(uint32_t *)v11 - v4 + v7 + 12)
          && (unsigned int)(v10 = v7 + ((v6 - v4 + 3) & 0xFFFFFFFC)) <= *v14 )
        {
          v14[1] = v10;
          if ( ((uint8_t)(uintptr_t)(src) & 3) != 0 )
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              294,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "((uintptr_t) originalPtr & 3) == 0");
        }
        else
        {
          v12 = *(uint32_t *)(a1 + 20);
          dest = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v11, v6);
          n = v12;
          if ( dest == nullptr )
          {
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              301,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "newBuffer != 0");
            n = v12;
            dest = nullptr;
          }
          src = (char *)memcpy(dest, src, n);
        }
      }
    }
    else
    {
      src = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
                      *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1,
                      v6);
    }
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(src);
    result = &src[v13];
    *(uint32_t *)(a1 + 20) = v6;
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(&src[v6]);
    v3 = (int)(uintptr_t)(&src[v13 + 16]);
  }
  *(uint32_t *)(a1 + 12) = v3;
  return result;
}


// ============================================================================
// Address:   0x1341a90 (size: 873 bytes)
// Symbol:    sub_1341A90
// Demangled: sub_1341A90
// ============================================================================
rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **sub_1341A90(
        rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **a1,
        char *a2,
        int a3)
{
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **v4;
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> *v5;
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> *v6;
  int v7;
  int v8;
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **v9;
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> *v10;
  char *v11;
  int v12;
  size_t size;
  char *v14;
  char v15;
  uint8_t *ptr;
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **v18;
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **v19;
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **v20;
  size_t v21;
  char *v22;
  char v23;
  int v24;

  v4 = a1;
  v5 = a1[3];
  v6 = v4[4];
  if ( v5 == v6 )
  {
    __assert2(
      "../../../../../lib/rapidjson/writer.h",
      394,
      "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::GenericStri"
      "ngBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "type == kObjectType || type == kArrayType");
    goto LABEL_5;
  }
  if ( (unsigned int)(v6 - v5) <= 7 )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      91,
      "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjs"
      "on::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "GetSize () >= sizeof (T)");
    v6 = v4[4];
    v8 = 0;
    v7 = *((uint32_t *)v6 - 1);
    if ( v7 == 0 )
      goto LABEL_4;
LABEL_19:
    if ( *((uint8_t *)v6 - 8) != 0 )
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v4, 44);
    else
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v4, (v7 & 1) == 0 ? 44 : 58);
    v8 = *((uint32_t *)v6 - 1);
    goto LABEL_4;
  }
  v7 = *((uint32_t *)v6 - 1);
  v8 = 0;
  if ( v7 != 0 )
    goto LABEL_19;
LABEL_4:
  *((uint32_t *)v6 - 1) = v8 + 1;
LABEL_5:
  if ( LOBYTE(g4_guard_db374dfca1[0]) == 0
    && _cxa_guard_acquire(g4_guard_db374dfca1) != 0 )
  {
    std::memcpy(
      g4_fnstatic_e269e86e3c,
      "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu",
      32);
    g4_fnstatic_e269e86e3c[34] = 34;
    g4_fnstatic_e269e86e3c[92] = 92;
    _cxa_guard_release(g4_guard_db374dfca1);
  }
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v4, 34);
  v22 = &a2[a3];
  if ( a2 != &a2[a3] )
  {
    v9 = v4;
    do
    {
      while ( 1 )
      {
        v15 = *a2;
        if ( g4_fnstatic_e269e86e3c[(uint8_t)*a2] != 0 )
          break;
        ++a2;
        v19 = v9;
        rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v9, v15);
        v9 = v19;
        if ( a2 == v22 )
          goto LABEL_17;
      }
      v18 = v9;
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v9, 92);
      v9 = v18;
      v10 = *v18;
      v23 = g4_fnstatic_e269e86e3c[(uint8_t)*a2];
      v11 = *((char **)*v18 + 3);
      v12 = (int)(uintptr_t)(v11 + 1);
      if ( (unsigned int)(uintptr_t)(v11 + 1) >= *((uint32_t *)*v18 + 4) )
      {
        ptr = *((uint8_t **)v10 + 2);
        v24 = v11 - (char *)(ptr);
        size = v11 - (char *)(ptr + 1);
        if ( size < 2 * *((uint32_t *)v10 + 5) )
          size = 2 * *((uint32_t *)v10 + 5);
        v21 = size;
        v14 = (char *)realloc(ptr, size);
        *((uint32_t *)v10 + 2) = (uint32_t)(uintptr_t)(v14);
        *((uint32_t *)v10 + 5) = v21;
        v11 = &v14[v24];
        *((uint32_t *)v10 + 4) = (uint32_t)(uintptr_t)(&v14[v21]);
        v9 = v18;
        v12 = (int)(uintptr_t)(&v14[v24 + 1]);
      }
      *((uint32_t *)v10 + 3) = v12;
      *v11 = v23;
      if ( g4_fnstatic_e269e86e3c[(uint8_t)*a2] == 117 )
      {
        v20 = v9;
        rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v9, 48);
        rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v20, 48);
        rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
          *v20,
          *((uint8_t *)&dword_20B9FF4[-1391956] + (*a2 >> 4) + 3));
        rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
          *v20,
          *((uint8_t *)&dword_20B9FF4[-1391956] + (*a2 & 0xF) + 3));
        v9 = v20;
      }
      ++a2;
    }
    while ( a2 != v22 );
LABEL_17:
    v4 = v9;
  }
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(*v4, 34);
  return v4;
}


// ============================================================================
// Address:   0x1342240 (size: 324 bytes)
// Symbol:    _ZN9rapidjson13GenericReaderINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE5ParseILj0ENS_19GenericStringStreamIS2_EENS_15GenericDocumentIS2_S5_EEEEbRT0_RT1_
// Demangled: bool rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Parse<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> &)
// ============================================================================
template <> template <>
int rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Parse<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
        int a1,
        char **a2,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3)
{
  char *i;
  char v5;
  char v6;
  const char *v7;
  char *j;
  char v9;

  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  if ( setjmp(*reinterpret_cast<jmp_buf *>((a1 + 24))) != 0 )
  {
    *(uint32_t *)(a1 + 12) = *(uint32_t *)(a1 + 8);
    return 0;
  }
  for ( i = *a2; ; ++i )
  {
    v5 = *i;
    if ( *i != 32 && v5 != 10 && v5 != 13 && v5 != 9 )
      break;
  }
  *a2 = i;
  v6 = *i;
  if ( *i == 0 )
  {
    v7 = "Text only contains white space(s)";
LABEL_12:
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v7);
    *(uint32_t *)(a1 + 68) = *a2 - a2[1];
    longjmp((struct __jmp_buf_tag *)(a1 + 24), 1);
  }
  if ( v6 == 91 )
  {
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  else
  {
    if ( v6 != 123 )
    {
      v7 = "Expect either an object or array at root";
      goto LABEL_12;
    }
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  for ( j = *a2; ; ++j )
  {
    v9 = *j;
    if ( *j != 32 && v9 != 10 && v9 != 13 && v9 != 9 )
      break;
  }
  *a2 = j;
  if ( *j != 0 )
  {
    v7 = "Nothing should follow the root object or array.";
    goto LABEL_12;
  }
  return 1;
}


// ============================================================================
// Address:   0x1342780 (size: 1605 bytes)
// Symbol:    sub_1342780
// Demangled: sub_1342780
// ============================================================================
int *sub_1342780()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (15u + sizeof(_g4_t_v5)) > _g4_s0 ? (15u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v7)) > _g4_s2 ? (20u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v8)) > _g4_s3 ? (24u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v9)) > _g4_s4 ? (28u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 15u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 20u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 24u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  sub_1900D70(&unk_21182C4);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21182C4, &unk_20D1280);
  dword_21182C8 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_21182CC = v0;
  dword_21182D0 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_21182D4 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_21182E0 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_21182F0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_21182F4 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyData), "data", (int)(uintptr_t)(&v5));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyData, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyTs), "ts", (int)(uintptr_t)(&v6));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyTs, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyTsLocal), "ts_local", (int)(uintptr_t)(&v6) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyTsLocal, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyType), "type", (int)(uintptr_t)(&v6) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyType, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyUuid), "uuid", (int)(uintptr_t)(&v6) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyUuid, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyToken), "token", (int)(uintptr_t)(&v7));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyToken, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyConnectivity), "connectivity", (int)(uintptr_t)(&v7) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyConnectivity, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keySessionId), "ses_id", (int)(uintptr_t)(&v7) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keySessionId, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keySessionTime), "ses_t", (int)(uintptr_t)(&v7) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keySessionTime, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyGameTime), "gt", (int)(uintptr_t)(&v8));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyGameTime, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyGameVersion), "ver", (int)(uintptr_t)(&v8) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyGameVersion, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyCount), "count", (int)(uintptr_t)(&v8) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyCount, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyCountSmartBatch), "count_sb", (int)(uintptr_t)(&v8) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyCountSmartBatch, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyPreviousTimeOnDevice), "previous_time", (int)(uintptr_t)(&v9));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyPreviousTimeOnDevice, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyMonotonic), "monotonic", (int)(uintptr_t)(&v9) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyMonotonic, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyPromotedBatch), "promoted_batch", (int)(uintptr_t)(&v9) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyPromotedBatch, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::Event::keyEventRoot), "rapidEventRoot", (int)(uintptr_t)(&v9) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Event::keyEventRoot, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1342ea0 (size: 779 bytes)
// Symbol:    sub_1342EA0
// Demangled: sub_1342EA0
// ============================================================================
int *sub_1342EA0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_2118300);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118300, &unk_20D1280);
  dword_2118304 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2118308 = v0;
  dword_211830C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118310 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118320 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118330 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118340 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1345200 (size: 935 bytes)
// Symbol:    sub_1345200
// Demangled: sub_1345200
// ============================================================================
int *sub_1345200()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *result;
  int v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v9)) > _g4_s0 ? (7u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 7u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2118354);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118354, &unk_20D1280);
  dword_2118358 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_211835C = v0;
  dword_2118360 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118364 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118370 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118380 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118384 = (int)(uintptr_t)(&dword_20D3F88);
  v6 = pthread_mutex_init((pthread_mutex_t *)&glotv3::Fs::s_PathMutex, nullptr);
  if ( v6 != 0 )
  {
    v8 = (int)(uintptr_t)(sub_18F81E0(v5, v4));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v9) + 1, "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v9));
    sub_19042E0(v10, (char *)&v9 + 1);
    g4_std::string::Destroy((char *)&v9 + 1);
    v10[2] = v6;
    v10[3] = v8;
    v10[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v10[0] = ((uint32_t)(uintptr_t)&off_2049568);
    std::terminate();
  }
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::Fs::s_PathMutex, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1346ae0 (size: 789 bytes)
// Symbol:    sub_1346AE0
// Demangled: sub_1346AE0
// ============================================================================
int *sub_1346AE0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_2118391);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118391, &unk_20D1280);
  dword_2118394 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2118398 = v0;
  dword_211839C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_21183A0 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_21183B0 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_21183C0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_21183D0 = (int)(uintptr_t)(&dword_20D3F88);
  glotv3::Glotv3Logger::s_IsSpyStreamLoggingActive = 0;
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1349f20 (size: 604 bytes)
// Symbol:    _ZNSt8_Rb_treeISsSt4pairIKSsSsESt10_Select1stIS2_ESt4lessISsESaIS2_EE16_M_insert_uniqueERKS2_
// Demangled: std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(std::pair<std::string const,std::string> const&)
// ============================================================================
template <>
int std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
        int a1,
        uint32_t *a2,
        const void **a3)
{
  int v3;
  size_t v4;
  int v5;
  uint32_t *v6;
  size_t n;
  size_t v8;
  int v9;
  uint32_t *v10;
  uint32_t *v11;
  uint32_t *v12;
  size_t v13;
  uint32_t *v14;
  int v15;
  int v16;
  unsigned int v18;
  size_t v19;
  size_t v20;
  size_t v21;
  unsigned int v22;
  unsigned int v23;
  int v24;
  size_t v25;
  size_t v26;
  unsigned int v27;
  unsigned int v28;
  size_t v29;
  uint32_t *v30;
  uint32_t *v31;
  char v32;
  unsigned int v33;
  void *s1;
  uint32_t *v35;

  v35 = a2 + 1;
  if ( a2[2] == 0 )
  {
    v11 = a2 + 1;
    goto LABEL_17;
  }
  v3 = a2[2];
  s1 = (void *)*a3;
  v4 = *((uint32_t *)*a3 - 3);
  while ( 1 )
  {
    v6 = *(uint32_t **)(v3 + 16);
    n = v4;
    v8 = *(v6 - 3);
    v30 = (uint32_t *)v3;
    if ( v8 <= v4 )
      n = *(v6 - 3);
    v29 = n;
    v9 = memcmp(s1, *(const void **)(v3 + 16), n);
    if ( v9 == 0 )
      v9 = v4 - v8;
    if ( v9 >= 0 )
      break;
    v5 = v30[2];
    v32 = 1;
    if ( v5 == 0 )
      goto LABEL_11;
LABEL_4:
    v3 = v5;
  }
  v5 = v30[3];
  v32 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_11:
  v10 = v6;
  v11 = v30;
  v12 = v10;
  v13 = v29;
  v14 = v30;
  if ( v32 == 0 )
    goto LABEL_12;
LABEL_17:
  if ( v11 == (uint32_t *)a2[3] )
  {
    LOBYTE(v18) = 1;
    if ( v11 != v35 )
    {
      v19 = *(uint32_t *)(v11[4] - 12);
      v20 = *((uint32_t *)*a3 - 3);
      v21 = v20;
      if ( v19 <= v20 )
        v21 = *(uint32_t *)(v11[4] - 12);
      v22 = v20 - v19;
      v23 = memcmp(*a3, (const void *)v11[4], v21);
      if ( v23 == 0 )
        v23 = v22;
      v18 = v23 >> 31;
    }
    v24 = (int)(uintptr_t)(operator new(0x18u));
    if ( v24 != -16 )
    {
      g4_std_compat::string_construct_copy(v24 + 16, a3);
      g4_std_compat::string_construct_copy(v24 + 20, a3 + 1);
    }
    sub_1904970(v18, v24, v11, v35);
  }
  else
  {
    v14 = (uint32_t *)sub_19048F0(v11);
    s1 = (void *)*a3;
    v4 = *((uint32_t *)*a3 - 3);
    v12 = (uint32_t *)v14[4];
    v8 = *(v12 - 3);
    v13 = v8;
    if ( v4 <= v8 )
      v13 = *((uint32_t *)s1 - 3);
LABEL_12:
    v31 = v14;
    v15 = v8 - v4;
    v16 = memcmp(v12, s1, v13);
    if ( v16 != 0 )
      v15 = v16;
    if ( v15 >= 0 )
    {
      *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v31);
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    LOBYTE(v33) = 1;
    if ( v11 != v35 )
    {
      v25 = *(uint32_t *)(v11[4] - 12);
      v26 = v25;
      if ( v4 <= v25 )
        v26 = v4;
      v27 = v4 - v25;
      v28 = memcmp(s1, (const void *)v11[4], v26);
      if ( v28 == 0 )
        v28 = v27;
      v33 = v28 >> 31;
    }
    v24 = (int)(uintptr_t)(operator new(0x18u));
    if ( v24 != -16 )
    {
      g4_std_compat::string_construct_copy(v24 + 16, a3);
      g4_std_compat::string_construct_copy(v24 + 20, a3 + 1);
    }
    sub_1904970(v33, v24, v11, v35);
  }
  ++a2[5];
  *(uint32_t *)a1 = v24;
  *(uint8_t *)(a1 + 4) = 1;
  return a1;
}


// ============================================================================
// Address:   0x134a180 (size: 1254 bytes)
// Symbol:    sub_134A180
// Demangled: sub_134A180
// ============================================================================
int *sub_134A180(int *a1, uint32_t *a2, int a3, const void **a4)
{
  const void *s2;
  uint32_t *s1;
  size_t v6;
  size_t n;
  int v8;
  int v9;
  int *result;
  int v11;
  size_t v12;
  size_t v13;
  int v14;
  int v15;
  int v16;
  size_t v17;
  size_t v18;
  int v19;
  int v20;
  uint32_t *v21;
  size_t v22;
  size_t v23;
  int v24;
  unsigned int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int v28;
  unsigned int v29;
  unsigned int v30;
  char v31;
  int v32;
  int v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef char _g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef const void *_g4_t_v38;
  typedef const void *_g4_t_v39;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint32_t _g4_t_v50[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v34)) > _g4_s0 ? (4u + sizeof(_g4_t_v34)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v35)) > _g4_s1 ? (4u + sizeof(_g4_t_v35)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v36)) > _g4_s2 ? (4u + sizeof(_g4_t_v36)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v37)) > _g4_s3 ? (8u + sizeof(_g4_t_v37)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v38)) > _g4_s4 ? (8u + sizeof(_g4_t_v38)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v39)) > _g4_s5 ? (8u + sizeof(_g4_t_v39)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v42)) > _g4_s6 ? (24u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v43)) > _g4_s7 ? (24u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v44)) > _g4_s8 ? (24u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v45)) > _g4_s9 ? (28u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v46)) > _g4_s10 ? (28u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v47)) > _g4_s11 ? (32u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v48)) > _g4_s12 ? (36u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v49)) > _g4_s13 ? (36u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v50)) > _g4_s14 ? (40u + sizeof(_g4_t_v50)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 4u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 8u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);

  v45 = (size_t)(a2 + 1);
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] != 0 )
    {
      v44 = a2[4];
      v21 = *(uint32_t **)(v44 + 16);
      v22 = *((uint32_t *)*a4 - 3);
      v23 = *(v21 - 3);
      if ( v22 <= v23 )
        v23 = *((uint32_t *)*a4 - 3);
      v39 = *a4;
      v35 = *(v21 - 3);
      v46 = v23;
      v24 = memcmp(*(const void **)(v44 + 16), *a4, v23);
      if ( v24 == 0 )
        v24 = v35 - v22;
      if ( v24 < 0 )
      {
        LOBYTE(v25) = 1;
        if ( a3 != v44 )
        {
          v26 = memcmp(v39, v21, v46);
          v27 = v22 - v35;
          if ( v26 == 0 )
            v26 = v27;
          v25 = v26 >> 31;
        }
        v15 = (int)(uintptr_t)(operator new(0x18u));
        if ( v15 != -16 )
        {
          g4_std_compat::string_construct_copy(v15 + 16, a4);
          g4_std_compat::string_construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(v25, v15, v44, a3);
        goto LABEL_32;
      }
    }
    std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
      (int)(uintptr_t)(v50),
      a2,
      a4);
LABEL_34:
    *a1 = v50[0];
    return a1;
  }
  s2 = *a4;
  s1 = *(uint32_t **)(a3 + 16);
  v6 = *((uint32_t *)*a4 - 3);
  n = v6;
  if ( *(s1 - 3) <= v6 )
    n = *(s1 - 3);
  v34 = *(s1 - 3);
  v37 = n;
  v8 = memcmp(*a4, *(const void **)(a3 + 16), n);
  v42 = v8;
  v47 = v6 - v34;
  if ( v8 == 0 )
    v8 = v6 - v34;
  if ( v8 < 0 )
  {
    if ( a3 != a2[3] )
    {
      v11 = sub_1904940(a3);
      v12 = v6;
      v48 = v11;
      v13 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
      v38 = *(const void **)(v11 + 16);
      if ( v13 <= v6 )
        v12 = *(uint32_t *)(*(uint32_t *)(v11 + 16) - 12);
      v43 = v12;
      v14 = memcmp(*(const void **)(v11 + 16), s2, v12);
      if ( v14 == 0 )
        v14 = v13 - v6;
      if ( v14 >= 0 )
      {
LABEL_33:
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_insert_unique(
          (int)(uintptr_t)(v50),
          a2,
          a4);
        goto LABEL_34;
      }
      if ( *(uint32_t *)(v48 + 12) == 0 )
      {
        LOBYTE(v28) = 1;
        if ( v45 != v48 )
        {
          v29 = v6 - v13;
          v30 = memcmp(s2, v38, v43);
          if ( v30 == 0 )
            v30 = v29;
          v28 = v30 >> 31;
        }
        v36 = v28;
        v15 = (int)(uintptr_t)(operator new(0x18u));
        v31 = v36;
        if ( v15 != -16 )
        {
          g4_std_compat::string_construct_copy(v15 + 16, a4);
          g4_std_compat::string_construct_copy(v15 + 20, a4 + 1);
          v31 = v36;
        }
        sub_1904970(v31, v15, v48, v45);
        goto LABEL_32;
      }
    }
    v15 = (int)(uintptr_t)(operator new(0x18u));
    if ( v15 != -16 )
    {
      g4_std_compat::string_construct_copy(v15 + 16, a4);
      g4_std_compat::string_construct_copy(v15 + 20, a4 + 1);
    }
    sub_1904970(1, v15, a3, v45);
    goto LABEL_32;
  }
  v9 = memcmp(s1, s2, v37);
  if ( v9 == 0 )
    v9 = v34 - v6;
  if ( v9 < 0 )
  {
    v16 = a2[4];
    if ( a3 == v16 )
    {
      v33 = v42;
      if ( v42 == 0 )
        v33 = v6 - v34;
      v15 = (int)(uintptr_t)(operator new(0x18u));
      if ( v15 != -16 )
      {
        g4_std_compat::string_construct_copy(v15 + 16, a4);
        g4_std_compat::string_construct_copy(v15 + 20, a4 + 1);
      }
      sub_1904970(v33 < 0, v15, v16, v45);
      goto LABEL_32;
    }
    v49 = sub_19048E0(a3);
    v17 = v6;
    v18 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    if ( v18 <= v6 )
      v17 = *(uint32_t *)(*(uint32_t *)(v49 + 16) - 12);
    v19 = v6 - v18;
    v20 = memcmp(s2, *(const void **)(v49 + 16), v17);
    if ( v20 != 0 )
      v19 = v20;
    if ( v19 < 0 )
    {
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        v15 = (int)(uintptr_t)(operator new(0x18u));
        if ( v15 != -16 )
        {
          g4_std_compat::string_construct_copy(v15 + 16, a4);
          g4_std_compat::string_construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(1, v15, v49, v45);
      }
      else
      {
        v32 = v42;
        if ( v42 == 0 )
          v32 = v47;
        v15 = (int)(uintptr_t)(operator new(0x18u));
        if ( v15 != -16 )
        {
          g4_std_compat::string_construct_copy(v15 + 16, a4);
          g4_std_compat::string_construct_copy(v15 + 20, a4 + 1);
        }
        sub_1904970(v32 < 0, v15, a3, v45);
      }
LABEL_32:
      ++a2[5];
      *a1 = v15;
      return a1;
    }
    goto LABEL_33;
  }
  result = a1;
  *a1 = a3;
  return result;
}


// ============================================================================
// Address:   0x134b650 (size: 2474 bytes)
// Symbol:    sub_134B650
// Demangled: sub_134B650
// ============================================================================
int *sub_134B650()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[12];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (10u + sizeof(_g4_t_v9)) > _g4_s0 ? (10u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v11)) > _g4_s2 ? (16u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v12)) > _g4_s3 ? (20u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v13)) > _g4_s4 ? (24u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v14)) > _g4_s5 ? (28u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v15)) > _g4_s6 ? (32u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v16)) > _g4_s7 ? (36u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v17)) > _g4_s8 ? (40u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v18)) > _g4_s9 ? (44u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 10u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  sub_1900D70(&unk_2118484);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118484, &unk_20D1280);
  dword_2118488 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_211848C = v0;
  dword_2118490 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118494 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_21184A0 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_21184B0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_21184B4 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGameLaunchResume::k_KeyCrashDetection), "crash_detection", (int)(uintptr_t)(&v9));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGameLaunchResume::k_KeyCrashDetection, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGameLaunchResume::k_KeyLaunchType), "launch_type", (int)(uintptr_t)(&v9) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGameLaunchResume::k_KeyLaunchType, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGameLaunchResume::k_KeyTimeBetweenSessions), "time_between_sessions", (int)(uintptr_t)(&v10));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGameLaunchResume::k_KeyTimeBetweenSessions, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGameLaunchResume::k_KeyTimeSpent), "time_spent", (int)(uintptr_t)(&v10) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGameLaunchResume::k_KeyTimeSpent, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGameLaunchResume::k_KeyChannelID), "channel_id", (int)(uintptr_t)(&v10) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGameLaunchResume::k_KeyChannelID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGlotAppDetails::k_KeyIgpCode), "igp_code", (int)(uintptr_t)(&v10) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGlotAppDetails::k_KeyIgpCode, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGlotAppDetails::k_KeyInjectedIgpCode), "injected_igp", (int)(uintptr_t)(&v11));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGlotAppDetails::k_KeyInjectedIgpCode, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfGlotAppDetails::k_KeyDownloadCode), "download_code", (int)(uintptr_t)(&v11) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfGlotAppDetails::k_KeyDownloadCode, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyCarrier), "carrier", (int)(uintptr_t)(&v11) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyCarrier, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyCountry), "d_country", (int)(uintptr_t)(&v11) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyCountry, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyLanguage), "d_lang", (int)(uintptr_t)(&v12));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyLanguage, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyName), "d_name", (int)(uintptr_t)(&v12) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyName, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyEncrypted), "encr", (int)(uintptr_t)(&v12) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyEncrypted, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyFirmware), "fw", (int)(uintptr_t)(&v12) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyFirmware, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyLibraryRevision), "glot_rev", (int)(uintptr_t)(&v13));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyLibraryRevision, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserDevice::k_KeyJBroken), "jb", (int)(uintptr_t)(&v13) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserDevice::k_KeyJBroken, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserIdentifiersChanged::k_KeyIDFAOld), "idfa_old", (int)(uintptr_t)(&v13) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFAOld, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserIdentifiersChanged::k_KeyIDFANew), "idfa_new", (int)(uintptr_t)(&v13) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFANew, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserIdentifiersChanged::k_KeyIDFVOld), "idfv_old", (int)(uintptr_t)(&v14));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFVOld, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserIdentifiersChanged::k_KeyIDFVNew), "idfv_new", (int)(uintptr_t)(&v14) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserIdentifiersChanged::k_KeyIDFVNew, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfUserIdentifiersChanged::k_KeyReinstall), "reinstall", (int)(uintptr_t)(&v14) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfUserIdentifiersChanged::k_KeyReinstall, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfError::k_KeyErrorTrackerId), "error_tracker_id", (int)(uintptr_t)(&v14) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfError::k_KeyErrorTrackerId, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfError::k_KeyRevision), "glot_revision", (int)(uintptr_t)(&v15));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfError::k_KeyRevision, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfError::k_KeyReason), "error_reason", (int)(uintptr_t)(&v15) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfError::k_KeyReason, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfInstallReferral::k_KeyUtmSource), "utm_source", (int)(uintptr_t)(&v15) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfInstallReferral::k_KeyUtmSource, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfInstallReferral::k_KeyUtmMedium), "utm_medium", (int)(uintptr_t)(&v15) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfInstallReferral::k_KeyUtmMedium, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfInstallReferral::k_KeyUtmTerm), "utm_term", (int)(uintptr_t)(&v16));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfInstallReferral::k_KeyUtmTerm, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfInstallReferral::k_KeyUtmContent), "utm_content", (int)(uintptr_t)(&v16) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfInstallReferral::k_KeyUtmContent, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventOfInstallReferral::k_KeyUtmCampaign), "utm_campaign", (int)(uintptr_t)(&v16) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventOfInstallReferral::k_KeyUtmCampaign, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  if ( g4_guard_38c1305a76[0] == 0 )
  {
    g4_guard_38c1305a76[0] = 1;
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_1dec044f07[0] == 0 )
  {
    g4_guard_1dec044f07[0] = 1;
    if ( g4_fnstatic_e8cfd5640c == 0 )
    {
      g4_fnstatic_e8cfd5640c = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
      {
        v7 = pthread_mutex_init(
               &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
               nullptr);
        if ( v7 != 0 )
        {
          v8 = (int)(uintptr_t)(sub_18F81E0(v6, v5));
          g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v17), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v16) + 3);
          sub_19042E0(v18, &v17);
          g4_std::string::Destroy(&v17);
          v18[2] = v7;
          v18[3] = v8;
          v18[4] = (uint32_t)(uintptr_t)(&dword_213B814);
          v18[0] = ((uint32_t)(uintptr_t)&off_2049568);
          std::terminate();
        }
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
        *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
        *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
      }
    }
  }
  if ( g4_guard_8e583c4b76[0] == 0 )
  {
    g4_guard_8e583c4b76[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfError::Self>>::ti_ = (void *)("static char const* boost::detai"
                                                                                         "l::sp_typeid_<T>::name() [with "
                                                                                         "T = boost::detail::sp_ms_delete"
                                                                                         "r<glotv3::EventOfError::Self>]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x134c470 (size: 92 bytes)
// Symbol:    sub_134C470
// Demangled: sub_134C470
// ============================================================================
int sub_134C470(int a1)
{
  if ( *(uint32_t *)a1 != 0 )
    return *(uint32_t *)a1;
  __assert2(
    "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
    653,
    "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Event::Self, "
    "typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
    "px != 0");
  return *(uint32_t *)a1;
}


// ============================================================================
// Address:   0x134c4cc (size: 68 bytes)
// Symbol:    sub_134C4CC
// Demangled: sub_134C4CC
// ============================================================================
void __noreturn sub_134C4CC()
{
  typedef int _g4_t_v0;
  typedef uint8_t _g4_t_v1[20];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "could not convert calendar time to UTC time", (int)(uintptr_t)(&v0));
  sub_19042E0(v1, (char *)&v0 + 1);
  std::terminate();
}


// ============================================================================
// Address:   0x134c510 (size: 93 bytes)
// Symbol:    sub_134C510
// Demangled: sub_134C510
// ============================================================================
void *sub_134C510()
{
  *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
  _cxa_guard_release(g4_guard_d940a9bded);
  __cxa_atexit(
    (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
    &g4_rapidjson_NullValue,
    &unk_20D1280);
  return &g4_rapidjson_NullValue;
}


// ============================================================================
// Address:   0x134c56d (size: 89 bytes)
// Symbol:    sub_134C56D
// Demangled: sub_134C56D
// ============================================================================
void __noreturn sub_134C56D()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Day of month value is out of range 1..31", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_std::string::Destroy((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068D98);
  std::terminate();
}


// ============================================================================
// Address:   0x134c5c6 (size: 89 bytes)
// Symbol:    sub_134C5C6
// Demangled: sub_134C5C6
// ============================================================================
void __noreturn sub_134C5C6()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Year is out of valid range: 1400..10000", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_std::string::Destroy((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DC8);
  std::terminate();
}


// ============================================================================
// Address:   0x134c61f (size: 89 bytes)
// Symbol:    sub_134C61F
// Demangled: sub_134C61F
// ============================================================================
void __noreturn sub_134C61F()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Month number is out of range 1..12", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_std::string::Destroy((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DB0);
  std::terminate();
}


// ============================================================================
// Address:   0x134c680 (size: 101 bytes)
// Symbol:    sub_134C680
// Demangled: sub_134C680
// ============================================================================
int sub_134C680(uint32_t *a1, int a2)
{
  if ( *a1 != 0 )
    return *a1 + 4 * a2;
  __assert2(
    "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
    234,
    "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std::size_"
    "t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<char>, int> >,"
    " std::basic_string<char>, int, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boo"
    "st::unordered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
    "buckets_");
  return *a1 + 4 * a2;
}


// ============================================================================
// Address:   0x134c6f0 (size: 395 bytes)
// Symbol:    sub_134C6F0
// Demangled: sub_134C6F0
// ============================================================================
int sub_134C6F0(float *a1, unsigned int a2)
{
  float v2; // xmm1_4
  __m128d v3; // xmm0
  __m128d v4; // xmm1
  __m128d v5; // xmm1
  unsigned int v6;
  __m128d v7; // xmm3
  __m128d v8; // xmm1
  void **v9;
  int v10;
  int v11;
  unsigned int *v12;
  int v14;
  unsigned int v15;
  int v17;

  v2 = *a1;
  v3 = g4_to_m128d(0x3A83126Fu);
  if ( *a1 < 0.001f )
  {
    v15 = a2;
    __assert2(
      "../../../../../lib/glitch/include/boost/unordered/detail/table.hpp",
      323,
      "std::size_t boost::unordered::detail::table<Types>::min_buckets_for_size(std::size_t) const [with Types = boost::u"
      "nordered::detail::map<std::allocator<std::pair<const std::basic_string<char>, int> >, std::basic_string<char>, int"
      ", boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, std::size_t = unsigned int]",
      "mlf_ >= minimum_max_load_factor");
    a2 = v15;
    v2 = *a1;
  }
  g4_m128_lane_ref<double>(v3, 0) = (double)a2 / v2;
  v4 = _mm_and_pd(v3, g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL));
  if ( g4_m128_lane_ref<double>(v4, 0) < 4503599627370496.0 )
  {
    g4_m128_lane_ref<double>(v4, 0) = g4_m128_lane_ref<double>(v4, 0) + 4503599627370496.0 - 4503599627370496.0;
    v5 = _mm_or_pd(v4, _mm_andn_pd(g4_to_m128d(0x7FFFFFFFFFFFFFFFuLL), v3));
    g4_m128_lane_ref<double>(v3, 0) = g4_m128_lane_ref<double>(v5, 0)
                    - COERCE_DOUBLE(g4_m128d_bits(_mm_cmpgt_sd(v5, v3), 0) & 0x3FF0000000000000LL);
  }
  v6 = 0;
  if ( g4_m128_lane_ref<double>(v3, 0) < 4294967295.0 )
  {
    v7 = g4_to_m128d(0);
    g4_m128_lane_ref<double>(v7, 0) = g4_m128_lane_ref<double>(v3, 0);
    v8 = _mm_cmple_pd(g4_to_m128d(xmmword_1C7C210), v7);
    v6 = _mm_cvtsi128_si32(
           _mm_xor_si128(
             _mm_cvttpd_epi32(_mm_sub_pd(v7, _mm_and_pd(g4_to_m128d(xmmword_1C7C210), v8))),
             _mm_slli_epi32(g4_to_m128i(v8), 0x1Fu)))
       + 1;
  }
  v17 = 38;
  v9 = (void **)&unk_1C81A60;
  v10 = 38;
  while ( 1 )
  {
    v11 = v10 >> 1;
    v12 = (unsigned int *)&v9[v11];
    if ( *v12 >= v6 )
      break;
    v14 = v11;
    v11 = v17;
LABEL_16:
    v9 = (void **)(v12 + 1);
    v10 = v11 - v14 - 1;
    v17 = v10;
    if ( v10 <= 0 )
      goto LABEL_13;
  }
  while ( v11 > 0 )
  {
    v14 = v11 >> 1;
    v12 = (unsigned int *)&v9[v11 >> 1];
    if ( *v12 < v6 )
      goto LABEL_16;
    v11 >>= 1;
  }
LABEL_13:
  if ( (uintptr_t)v9 == (uintptr_t)jpt_628CA1 )
    v9 = (void **)&unk_1C81AF4;
  return (int)(uintptr_t)(*v9);
}


// ============================================================================
// Address:   0x134c880 (size: 464 bytes)
// Symbol:    sub_134C880
// Demangled: sub_134C880
// ============================================================================
char *sub_134C880(void **a1, int a2)
{
  unsigned int v3;
  char *v4;
  char *v5;
  char *v6;
  char *result;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  char *dest;
  int v13;
  unsigned int v14;
  int v15;
  char *v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  int v21;
  int v22;
  char *src;
  int v25;

  v3 = (unsigned int)(uintptr_t)(a1[1]);
  v4 = (char *)a1[9];
  v5 = (char *)*a1;
  if ( v3 - ((v4 - (char *)((uint8_t *)*a1)) >> 2) <= 1 )
  {
    src = (char *)a1[5];
    v8 = (v4 - src) >> 2;
    v25 = v8 + 1;
    v9 = v8 + 2;
    v10 = 2 * (v8 + 2);
    if ( v3 <= v10 )
    {
      v14 = 3;
      if ( v3 != 0 )
      {
        v14 = 2 * v3 + 2;
        if ( v14 > 0x3FFFFFFF )
          sub_18FFEE0(v5, v10);
      }
      v15 = (int)(uintptr_t)(operator new(4 * v14));
      v16 = (char *)a1[5];
      dest = (char *)(v15 + 4 * ((v14 - v9) >> 1));
      v17 = ((uint8_t *)a1[9] + 4 - (uint8_t *)(v16)) >> 2;
      if ( v17 != 0 )
      {
        v22 = v15;
        memmove(dest, v16, 4 * v17);
        v15 = v22;
      }
      v21 = v15;
      operator delete(*a1);
      a1[1] = (void *)v14;
      *a1 = (void *)v21;
    }
    else
    {
      v11 = v4 + 4 - src;
      dest = &v5[4 * ((v3 - v9) >> 1)];
      if ( src <= dest )
      {
        v20 = v11 >> 2;
        if ( v20 != 0 )
          memmove(&dest[4 * v25 + -4 * v20], src, 4 * v20);
      }
      else
      {
        v13 = v11 >> 2;
        if ( v13 != 0 )
          memmove(dest, src, 4 * v13);
      }
    }
    a1[5] = dest;
    v18 = *(char **)dest;
    a1[3] = *(void **)dest;
    a1[4] = v18 + 512;
    v4 = &dest[4 * v25 - 4];
    a1[9] = v4;
    v19 = *(char **)v4;
    a1[7] = *(void **)v4;
    a1[8] = v19 + 512;
  }
  *((uint32_t *)v4 + 1) = (uint32_t)(uintptr_t)(operator new(0x200u));
  if ( a1[6] != nullptr )
    g4_std_compat::string_construct_copy(a1[6], a2);
  v6 = (char *)a1[9] + 4;
  a1[9] = v6;
  result = *(char **)v6;
  a1[7] = *(void **)v6;
  a1[6] = result;
  a1[8] = result + 512;
  return result;
}


// ============================================================================
// Address:   0x134cb60 (size: 150 bytes)
// Symbol:    sub_134CB60
// Demangled: sub_134CB60
// ============================================================================
__m128i *sub_134CB60(__m128i *result, int a2, uint32_t *a3, uint32_t **a4)
{
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  int v8;
  int32_t v9;
  int v10;
  bool v11;
  uint32_t **v12;
  int v13;

  v5 = *(uint32_t **)a2;
  v6 = *(uint32_t **)(a2 + 8);
  v7 = *a4;
  v8 = *(uint32_t *)(a2 + 12);
  *result = *(__m128i *)a4;
  v13 = v8;
  while ( a3 != v5 )
  {
    while ( 1 )
    {
      v9 = 0;
      if ( v7 != nullptr )
      {
        *v7 = *v5;
        v10 = v5[1];
        v7[1] = v10;
        if ( v10 != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1);
        v9 =g4_m128_lane<int32_t>(*(result), 0);
      }
      v5 += 2;
      if ( v5 == v6 )
      {
        v5 = *(uint32_t **)(v13 + 4);
        v13 += 4;
        v6 = v5 + 128;
      }
      v7 = (uint32_t *)(v9 + 8);
      v11 = v9 + 8 ==g4_m128_lane<int32_t>(*(result), 2);
g4_m128_lane<int32_t>(*(result), 0) = v9 + 8;
      if ( !v11 )
        break;
      v12 = (uint32_t **)(g4_m128_lane<int32_t>(*(result), 3) + 4);
g4_m128_lane<int32_t>(*(result), 3) = (int32_t)(uintptr_t)(v12);
      v7 = *v12;
g4_m128_lane<int32_t>(*(result), 1) = (int32_t)(uintptr_t)(*v12);
g4_m128_lane<int32_t>(*(result), 0) = (int32_t)(uintptr_t)(v7);
g4_m128_lane<int32_t>(*(result), 2) = (int32_t)(uintptr_t)(v7 + 128);
      if ( a3 == v5 )
        return result;
    }
  }
  return result;
}


// ============================================================================
// Address:   0x134cce0 (size: 241 bytes)
// Symbol:    sub_134CCE0
// Demangled: sub_134CCE0
// ============================================================================
void sub_134CCE0(char *a1, int a2)
{
  char *v2;
  char *v3;
  char *v4;
  uint32_t *v5;
  bool v6;
  typedef char *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef void (*_g4_t_v10)(uint32_t, uint32_t *, uint32_t *, uint32_t);
  typedef uint32_t _g4_t_v11[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  v2 = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      v3 = v2 + 36;
      v9 = *((char **)v2 + 3);
      v4 = v2 + 52;
      do
      {
        while ( 1 )
        {
          v5 = *(uint32_t **)v4;
          if ( *(uint32_t *)v4 != 0 )
            break;
          v4 -= 8;
          if ( v3 == v4 + 8 )
            goto LABEL_9;
        }
        do
        {
          v6 = *v5 == 0;
          *(uint32_t *)v4 = *v5;
          if ( v6 )
            *((uint32_t *)v4 + 1) = 0;
          *v5 = 0;
          v10 = (void (*)(uint32_t, uint32_t *, uint32_t *, uint32_t))v5[1];
          v7 = v2;
          v11[0] = 0;
          v11[1] = (uint32_t)(uintptr_t)(sub_18F81E0(a2, v2));
          v10(0, v5, v11, 0);
          v5 = *(uint32_t **)v4;
          v2 = v7;
        }
        while ( *(uint32_t *)v4 != 0 );
        v4 -= 8;
      }
      while ( v3 != v4 + 8 );
LABEL_9:
      v8 = v2;
      pthread_mutex_destroy((pthread_mutex_t *)(v2 + 20));
      operator delete(v8);
      if ( v9 == nullptr )
        break;
      v2 = v9;
    }
  }
}


// ============================================================================
// Address:   0x134cde0 (size: 213 bytes)
// Symbol:    sub_134CDE0
// Demangled: sub_134CDE0
// ============================================================================
int *sub_134CDE0(int *a1, int a2, int a3, int a4, int a5)
{
  int v7;
  int v8;
  int v10;
  int v11;
  int v12;
  int v13;

  v7 = a2 + 4;
  LOBYTE(v12) = 1;
  v13 = v7;
  if ( a3 == 0 && a4 != v7 )
    v12 = g4_std_compat::string_compare(a5, a4 + 16) >> 31;
  v8 = (int)(uintptr_t)(operator new(0x18u));
  if ( v8 != -16 )
  {
    v10 = v8;
    g4_std_compat::string_construct_copy(v8 + 16, a5);
    v8 = v10;
    *(uint32_t *)(v10 + 20) = *(uint32_t *)(a5 + 4);
  }
  v11 = v8;
  sub_1904970(v12, v8, a4, v13);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v11;
  return a1;
}


// ============================================================================
// Address:   0x134cec0 (size: 327 bytes)
// Symbol:    sub_134CEC0
// Demangled: sub_134CEC0
// ============================================================================
int sub_134CEC0(int *a1, uint8_t *a2, int a3)
{
  int v4;
  int v5;
  int v6;
  typedef int _g4_t_v8;
  typedef uint8_t _g4_t_v10[4];
  typedef uint8_t _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef uint8_t _g4_t_v13;
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v10)) > _g4_s1 ? (16u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 16u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);

  v14[3] = (uint32_t)(uintptr_t)(&a3);
  if ( *(int *)(*a1 - 4) >= 0 )
    sub_19397C0(a1);
  v13 = *a2;
  sub_1901AC0(v14, a2 + 4);
  v4 = *a1;
  if ( *(int *)(*a1 - 4) < 0 )
  {
    v5 = v4 + *(uint32_t *)(v4 - 12);
  }
  else
  {
    sub_19397C0(a1);
    v4 = *a1;
    v5 = *a1 + *(uint32_t *)(*a1 - 12);
    if ( *(int *)(*a1 - 4) >= 0 )
    {
      sub_19397C0(a1);
      v4 = *a1;
    }
  }
  v11 = v13;
  sub_1901AC0(v12, v14);
  if ( v5 != v4 )
  {
    v8 = v4;
    do
    {
      v6 = *(uint8_t *)(v5 - 1);
      if ( (v11 & *(uint8_t *)(*(uint32_t *)((uint8_t *)(sub_191CFA0(v12)) + 24) + v6)) == 0 )
        break;
      --v5;
    }
    while ( v8 != v5 );
  }
  sub_1902180(v12);
  sub_1939370(v10);
  return sub_1902180(v14);
}


// ============================================================================
// Address:   0x134d010 (size: 111 bytes)
// Symbol:    sub_134D010
// Demangled: sub_134D010
// ============================================================================
void __noreturn sub_134D010(int *a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v4)) > _g4_s0 ? (7u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 7u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *a1;
  v3 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4) + 1, a2, (int)(uintptr_t)(&v4));
  sub_19042E0(v5, (char *)&v4 + 1);
  g4_std::string::Destroy((char *)&v4 + 1);
  v5[2] = v2;
  v5[3] = v3;
  v5[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v5[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x134d120 (size: 1013 bytes)
// Symbol:    sub_134D120
// Demangled: sub_134D120
// ============================================================================
uint32_t *sub_134D120(uint32_t *a1)
{
  struct tm *v1;
  uint16_t tm_mday;
  uint16_t v3;
  uint16_t v4; // si
  int tm_min;
  int tm_sec;
  int tm_hour;
  int16_t v9;
  unsigned int v10;
  int v11;
  int64_t v12; // rax
  int v14;
  uint16_t v15;
  int64_t v27; // 0:edi.4,4:ebp.4
  typedef __suseconds_t _g4_t_tv_usec;
  typedef int _g4_t_v18;
  typedef int16_t _g4_t_tm_mon;
  typedef int16_t _g4_t_tm_year;
  typedef uint64_t _g4_t_v21;
  typedef uint8_t _g4_t_v22[5];
  typedef int _g4_t_v23;
  typedef struct timeval _g4_t_tv;
  typedef int (**_g4_t_v25)(int);
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_tv_usec)) > _g4_s0 ? (0u + sizeof(_g4_t_tv_usec)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v18)) > _g4_s1 ? (12u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_tm_mon)) > _g4_s2 ? (20u + sizeof(_g4_t_tm_mon)) : _g4_s2,
    _g4_s4 = (22u + sizeof(_g4_t_tm_year)) > _g4_s3 ? (22u + sizeof(_g4_t_tm_year)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v21)) > _g4_s4 ? (24u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (43u + sizeof(_g4_t_v22)) > _g4_s5 ? (43u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v23)) > _g4_s6 ? (48u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_tv)) > _g4_s7 ? (52u + sizeof(_g4_t_tv)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v25)) > _g4_s8 ? (60u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_tp)) > _g4_s9 ? (68u + sizeof(_g4_t_tp)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_tv_usec &tv_usec = *reinterpret_cast<_g4_t_tv_usec *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_tm_mon &tm_mon = *reinterpret_cast<_g4_t_tm_mon *>(_g4_sf + 20u);
  _g4_t_tm_year &tm_year = *reinterpret_cast<_g4_t_tm_year *>(_g4_sf + 22u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 43u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 68u);

  gettimeofday(&tv, nullptr);
  *(uint32_t *)&v22[1] = tv.tv_sec;
  tv_usec = tv.tv_usec;
  v1 = gmtime_r((const time_t *)&v22[1], &tp);
  if ( v1 == nullptr )
    sub_134C4CC();
  tm_mday = v1->tm_mday;
  v18 = tm_mday;
  if ( tm_mday == 0 || tm_mday > 0x1Fu )
    sub_134C56D();
  tm_mon = v1->tm_mon;
  v3 = tm_mon + 1;
  if ( tm_mon == -1 || v3 > 0xCu )
    sub_134C61F();
  tm_year = v1->tm_year;
  v4 = tm_year + 1900;
  if ( (uint16_t)(tm_year + 1900) <= 0x577u || v4 > 0x2710u )
    sub_134C5C6();
  if ( v3 <= 0xBu )
  {
    v14 = 1 << v3;
    v15 = 30;
    if ( (v14 & 0xA50) == 0 )
    {
      if ( (v14 & 4) == 0 )
        goto LABEL_9;
      LOBYTE(v15) = 28;
      if ( (((uint8_t)tm_year + 108) & 3) == 0 )
      {
        v15 = 29;
        if ( v4 == 100 * (v4 / 0x64u) )
          v15 = 29 - (v4 % 0x190u != 0);
      }
    }
    if ( tm_mday > v15 )
    {
      g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v23), "Day of month is not valid for year", (int)(uintptr_t)(v22));
      sub_19042A0(&v25, &v23);
      v25 = (int (**)(int))(uintptr_t)(&off_2068D98);
      std::terminate();
    }
  }
LABEL_9:
  tm_min = v1->tm_min;
  tm_sec = v1->tm_sec;
  tm_hour = v1->tm_hour;
  v21 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(tv_usec), 0);
  if ( tm_min < 0 || tm_hour < 0 || tm_sec < 0 )
    v27 = 1000000
        * (-3600LL * (int)__builtin_abs(tm_hour) - 60LL * (int)__builtin_abs(tm_min) - (int)__builtin_abs(tm_sec))
        - v21;
  else
    v27 = 1000000 * (tm_sec + 60LL * tm_min + 3600LL * tm_hour) + v21;
  v9 = (14 - (uint16_t)(tm_mon + 1)) / 12;
  v10 = ((uint16_t)(tm_year + 6700 - v9) >> 2)
      + 365 * (uint16_t)(tm_year + 6700 - v9)
      + v18
      + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
      - (uint16_t)(tm_year + 6700 - v9) / 0x64u
      + (uint16_t)(tm_year + 6700 - v9) / 0x190u
      - 32045;
  *a1 = 1;
  a1[1] = 0;
  if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32045
    && ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32044
    && ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32043 )
  {
    if ( ((unsigned int)v27 | (HIDWORD(v27) + 0x80000000)) != 0 )
    {
      v11 = 20 * v10;
      v12 = 500654080LL * v10;
      HIDWORD(v12) += v11;
      *(uint64_t *)a1 = v27 + v12;
      return a1;
    }
    goto LABEL_38;
  }
  if ( ((unsigned int)v27 | (HIDWORD(v27) + 0x80000000)) == 0 )
  {
    if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
       + 365 * (uint16_t)(tm_year + 6700 - v9)
       + v18
       + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
       - (uint16_t)(tm_year + 6700 - v9) / 0x64u
       + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32043 )
      goto LABEL_38;
LABEL_36:
    v27 = 0x7FFFFFFFFFFFFFFELL;
    goto LABEL_31;
  }
  if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32045 )
  {
    if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
       + 365 * (uint16_t)(tm_year + 6700 - v9)
       + v18
       + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
       - (uint16_t)(tm_year + 6700 - v9) / 0x64u
       + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32044 )
    {
      if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
         + 365 * (uint16_t)(tm_year + 6700 - v9)
         + v18
         + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
         - (uint16_t)(tm_year + 6700 - v9) / 0x64u
         + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32043 )
        goto LABEL_30;
      goto LABEL_36;
    }
LABEL_38:
    if ( ((unsigned int)v27 | (HIDWORD(v27) + 0x80000000)) == 0 )
    {
      if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
         + 365 * (uint16_t)(tm_year + 6700 - v9)
         + v18
         + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
         - (uint16_t)(tm_year + 6700 - v9) / 0x64u
         + (uint16_t)(tm_year + 6700 - v9) / 0x190u != 32044 )
        goto LABEL_31;
      goto LABEL_36;
    }
  }
  if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32044 )
  {
    v27 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_31;
  }
  if ( ((uint16_t)(tm_year + 6700 - v9) >> 2)
     + 365 * (uint16_t)(tm_year + 6700 - v9)
     + v18
     + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
     - (uint16_t)(tm_year + 6700 - v9) / 0x64u
     + (uint16_t)(tm_year + 6700 - v9) / 0x190u == 32045 )
  {
    v27 = 0x8000000000000000LL;
    goto LABEL_31;
  }
LABEL_30:
  v27 += v10;
LABEL_31:
  *(uint64_t *)a1 = v27;
  return a1;
}


// ============================================================================
// Address:   0x134d520 (size: 644 bytes)
// Symbol:    sub_134D520
// Demangled: sub_134D520
// ============================================================================
uint64_t *sub_134D520(uint64_t *result, int64_t *a2, int64_t *a3)
{
  uint32_t *v3;
  int v4;
  int64_t v5; // rax
  int64_t v6;
  int64_t v7;

  v3 = (uint32_t *)(result);
  v6 = *a2;
  if ( (*(uint32_t *)a2 | (*((uint32_t *)a2 + 1) + 0x80000000)) != 0
    && (v4 = ~(uint32_t)v6, (~(uint32_t)v6 | HIDWORD(v6) ^ 0x7FFFFFFF) != 0) )
  {
    v7 = *a3;
    if ( v6 != 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (*(uint32_t *)a3 | (HIDWORD(v7) + 0x80000000)) != 0 )
      {
        if ( (HIDWORD(v7) ^ 0x7FFFFFFF | ~(uint32_t)v7) != 0 )
        {
          if ( v7 != 0x7FFFFFFFFFFFFFFELL )
          {
            *result = v6 - v7;
            return result;
          }
          v7 = 0x7FFFFFFFFFFFFFFELL;
        }
        else
        {
          v7 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v7 = 0x8000000000000000LL;
      }
    }
    if ( v6 == 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_16;
    if ( ((unsigned int)v7 | (HIDWORD(v7) + 0x80000000)) != 0 && (HIDWORD(v7) ^ 0x7FFFFFFF | ~(uint32_t)v7) != 0 )
    {
      if ( v7 == 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_16;
      goto LABEL_22;
    }
  }
  else
  {
    v7 = *a3;
    if ( *a3 == 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_16;
    v4 = ~(uint32_t)v6;
  }
  if ( (v4 | HIDWORD(v6) ^ 0x7FFFFFFF) == 0 )
  {
    if ( (~(uint32_t)v7 | HIDWORD(v7) ^ 0x7FFFFFFF) != 0 )
    {
LABEL_25:
      *v3 = -1;
      v3[1] = 0x7FFFFFFF;
      return (uint64_t *)(v3);
    }
LABEL_16:
    *v3 = -2;
    v3[1] = 0x7FFFFFFF;
    return (uint64_t *)(v3);
  }
  if ( ((unsigned int)v6 | (HIDWORD(v6) + 0x80000000)) == 0 )
  {
    if ( ((unsigned int)v7 | (HIDWORD(v7) + 0x80000000)) == 0 )
      goto LABEL_16;
    goto LABEL_28;
  }
  if ( (~(uint32_t)v7 | HIDWORD(v7) ^ 0x7FFFFFFF) == 0 )
  {
    v5 = 0x8000000000000000LL;
    goto LABEL_23;
  }
  if ( ((unsigned int)v7 | (HIDWORD(v7) + 0x80000000)) == 0 )
  {
    v5 = 0x7FFFFFFFFFFFFFFFLL;
    goto LABEL_23;
  }
LABEL_22:
  v5 = v6 - v7;
  if ( v6 - v7 == 0x7FFFFFFFFFFFFFFELL )
    goto LABEL_16;
LABEL_23:
  if ( ((unsigned int)v5 | (HIDWORD(v5) + 0x80000000)) != 0 )
  {
    if ( (~(uint32_t)v5 | HIDWORD(v5) ^ 0x7FFFFFFF) == 0 )
      goto LABEL_25;
    goto LABEL_16;
  }
LABEL_28:
  *v3 = 0;
  v3[1] = 0x80000000;
  return (uint64_t *)(v3);
}


// ============================================================================
// Address:   0x134def0 (size: 363 bytes)
// Symbol:    sub_134DEF0
// Demangled: sub_134DEF0
// ============================================================================
int sub_134DEF0(int a1, uint32_t *a2, int a3)
{
  int v3;
  int v4;
  int v5;
  char v6;
  int v7;
  int v9;
  int v10;
  int v11;
  int v12;
  typedef int _g4_t_v15;
  typedef uint32_t *_g4_t_v16;
  typedef int _g4_t_v17[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);

  v3 = a1;
  v4 = a2[2];
  v16 = a2 + 1;
  if ( v4 == 0 )
  {
    v4 = (int)(uintptr_t)(a2 + 1);
    goto LABEL_12;
  }
  while ( 1 )
  {
    v7 = v4 + 16;
    if ( (int)g4_std_compat::string_compare(a3, v4 + 16) >= 0 )
      break;
    v5 = *(uint32_t *)(v4 + 8);
    v6 = 1;
    if ( v5 == 0 )
      goto LABEL_7;
LABEL_4:
    v4 = v5;
  }
  v5 = *(uint32_t *)(v4 + 12);
  v6 = 0;
  if ( v5 != 0 )
    goto LABEL_4;
LABEL_7:
  v3 = a1;
  v15 = v4;
  if ( v6 == 0 )
    goto LABEL_8;
LABEL_12:
  if ( a2[3] == v4 )
  {
    sub_134CDE0(v17, (int)(uintptr_t)(a2), 0, v4, a3);
    v10 = v17[0];
    *(uint8_t *)(v3 + 4) = 1;
    *(uint32_t *)v3 = v10;
    return v3;
  }
  else
  {
    v9 = sub_19048F0(v4);
    v7 = v9 + 16;
    v15 = v4;
    v4 = v9;
LABEL_8:
    if ( (int)g4_std_compat::string_compare(v7, a3) >= 0 )
    {
      *(uint32_t *)v3 = v4;
      *(uint8_t *)(v3 + 4) = 0;
      return v3;
    }
    LOBYTE(v11) = 1;
    if ( v16 != (uint32_t *)v15 )
      v11 = g4_std_compat::string_compare(a3, v15 + 16) >> 31;
    v12 = (int)(uintptr_t)(operator new(0x18u));
    if ( v12 != -16 )
    {
      g4_std_compat::string_construct_copy(v12 + 16, a3);
      *(uint32_t *)(v12 + 20) = *(uint32_t *)(a3 + 4);
    }
    sub_1904970(v11, v12, v15, v16);
    *(uint32_t *)v3 = v12;
    *(uint8_t *)(v3 + 4) = 1;
    ++a2[5];
    return v3;
  }
}


// ============================================================================
// Address:   0x134e060 (size: 582 bytes)
// Symbol:    sub_134E060
// Demangled: sub_134E060
// ============================================================================
int *sub_134E060(int *a1, uint32_t *a2, int a3, int a4)
{
  int v4;
  int v7;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v9)) > _g4_s0 ? (0u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v10)) > _g4_s1 ? (0u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v11)) > _g4_s2 ? (0u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v12)) > _g4_s3 ? (0u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v13)) > _g4_s4 ? (4u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v14)) > _g4_s5 ? (8u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 0u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);

  v4 = a3;
  v13 = a2 + 1;
  if ( (uint32_t *)a3 == a2 + 1 )
  {
    if ( a2[5] == 0 || (v4 = a2[4], (int)g4_std_compat::string_compare(v4 + 16, a4) >= 0) )
    {
LABEL_18:
      sub_134DEF0((int)(uintptr_t)(v14), a2, a4);
LABEL_19:
      *a1 = v14[0];
      return a1;
    }
LABEL_20:
    sub_134CDE0(a1, (int)(uintptr_t)(a2), 0, v4, a4);
    return a1;
  }
  if ( (int)g4_std_compat::string_compare(a4, a3 + 16) >= 0 )
  {
    if ( (int)g4_std_compat::string_compare(a3 + 16, a4) >= 0 )
    {
      *a1 = a3;
      return a1;
    }
    if ( a3 != a2[4] )
    {
      v12 = sub_19048E0(a3);
      if ( (int)g4_std_compat::string_compare(a4, v12 + 16) >= 0 )
      {
        sub_134DEF0((int)(uintptr_t)(v14), a2, a4);
        goto LABEL_19;
      }
      if ( *(uint32_t *)(a3 + 12) != 0 )
      {
        sub_134CDE0(a1, (int)(uintptr_t)(a2), v12, v12, a4);
        return a1;
      }
    }
    goto LABEL_20;
  }
  if ( a3 == a2[3] )
  {
    sub_134CDE0(a1, (int)(uintptr_t)(a2), a3, a3, a4);
    return a1;
  }
  v9 = sub_1904940(a3);
  if ( (int)g4_std_compat::string_compare(v9 + 16, a4) >= 0 )
    goto LABEL_18;
  if ( *(uint32_t *)(v9 + 12) != 0 )
  {
    v7 = (int)(uintptr_t)(operator new(0x18u));
    if ( v7 != -16 )
    {
      v10 = v7;
      g4_std_compat::string_construct_copy(v7 + 16, a4);
      v7 = v10;
      *(uint32_t *)(v10 + 20) = *(uint32_t *)(a4 + 4);
    }
    v11 = v7;
    sub_1904970(1, v7, a3, v13);
    ++a2[5];
    *a1 = v11;
  }
  else
  {
    sub_134CDE0(a1, (int)(uintptr_t)(a2), 0, v9, a4);
  }
  return a1;
}


// ============================================================================
// Address:   0x134e3d0 (size: 51 bytes)
// Symbol:    sub_134E3D0
// Demangled: sub_134E3D0
// ============================================================================
void __noreturn sub_134E3D0(int a1, int a2)
{
  uint8_t v2[32];

  boost::lock_error::Construct(a1, a2, (boost::lock_error::Self *)v2, 1, "boost unique_lock has no mutex");
  std::terminate();
}


// ============================================================================
// Address:   0x134e404 (size: 51 bytes)
// Symbol:    sub_134E404
// Demangled: sub_134E404
// ============================================================================
void __noreturn sub_134E404(int a1, int a2)
{
  uint8_t v2[32];

  boost::lock_error::Construct(a1, a2, (boost::lock_error::Self *)v2, 1, "boost unique_lock has no mutex");
  std::terminate();
}


// ============================================================================
// Address:   0x134e438 (size: 51 bytes)
// Symbol:    sub_134E438
// Demangled: sub_134E438
// ============================================================================
void __noreturn sub_134E438(int a1, int a2)
{
  uint8_t v2[32];

  boost::lock_error::Construct(a1, a2, (boost::lock_error::Self *)v2, 1, "boost unique_lock has no mutex");
  std::terminate();
}


// ============================================================================
// Address:   0x134e470 (size: 648 bytes)
// Symbol:    sub_134E470
// Demangled: sub_134E470
// ============================================================================
_OWORD *sub_134E470(_OWORD *a1, int *a2, uint32_t *a3, unsigned int *a4)
{
  int v4;
  int *v5;
  uint32_t *v6;
  int v7;
  char *v8;
  int v9;
  unsigned int v10;
  int v11;
  __int128 v13; // xmm0
  unsigned int v14;
  typedef unsigned int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef unsigned int *_g4_t_v21;
  typedef int *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_i;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef volatile int32_t *_g4_t_v32;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v18)) > _g4_s2 ? (20u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v19)) > _g4_s3 ? (24u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v20)) > _g4_s4 ? (28u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v21)) > _g4_s5 ? (32u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v22)) > _g4_s6 ? (36u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v23)) > _g4_s7 ? (40u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v24)) > _g4_s8 ? (44u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v25)) > _g4_s9 ? (48u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_i)) > _g4_s10 ? (52u + sizeof(_g4_t_i)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v27)) > _g4_s11 ? (56u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v28)) > _g4_s12 ? (64u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v29)) > _g4_s13 ? (68u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v30)) > _g4_s14 ? (72u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v31)) > _g4_s15 ? (76u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v32)) > _g4_s16 ? (80u + sizeof(_g4_t_v32)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 20u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_i &i = *reinterpret_cast<_g4_t_i *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 72u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 76u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 80u);

  v28 = *a4;
  v24 = a4[1];
  v19 = a4[2];
  v21 = (unsigned int *)a4[3];
  v29 = *a2;
  v20 = a2[2];
  v22 = (int *)a2[3];
  v23 = a2[1];
  for ( i = ((*a3 - a3[1]) >> 3) + ((((a3[3] - (int)(uintptr_t)(v22)) >> 2) - 1) << 6) + ((v20 - *a2) >> 3); i > 0; i -= v27 )
  {
    v4 = (v20 - v29) >> 3;
    if ( (int)(v19 - v28) >> 3 <= v4 )
      v4 = (int)(v19 - v28) >> 3;
    if ( v4 > i )
      v4 = i;
    v27 = v4;
    v25 = 8 * v4;
    v18 = 8 * v4 + v29;
    v30 = (8 * v4) >> 3;
    if ( v30 > 0 )
    {
      v5 = (int *)v29;
      v6 = (uint32_t *)v28;
      v15 = v28 + 4;
      do
      {
        v7 = *v5;
        v31 = *v5;
        v32 = (volatile int32_t *)v5[1];
        if ( v32 != nullptr )
        {
          __sync_add_and_fetch(v32 + 1, 1);
          v7 = v31;
        }
        *v6 = v7;
        v8 = (char *)v6 - v28;
        v6 += 2;
        v5 += 2;
        v16 = *(volatile int32_t **)&v8[v15];
        *(uint32_t *)&v8[v15] = (uint32_t)(uintptr_t)(v32);
        v32 = v16;
        boost::detail::shared_count::Destroy(&v32);
        --v30;
      }
      while ( v30 != 0 );
    }
    v9 = v27 + ((v29 - v23) >> 3);
    if ( v9 < 0 )
    {
      v10 = ((unsigned int)v9 >> 6) | 0xFC000000;
    }
    else
    {
      v29 = v18;
      if ( v9 <= 63 )
        goto LABEL_15;
      v10 = v9 >> 6;
    }
    v22 += v10;
    v23 = *v22;
    v20 = *v22 + 512;
    v29 = *v22 + 8 * (v9 - (v10 << 6));
LABEL_15:
    v11 = v27 + ((int)(v28 - v24) >> 3);
    if ( v11 < 0 )
    {
      v14 = ((unsigned int)v11 >> 6) | 0xFC000000;
      goto LABEL_21;
    }
    if ( v11 > 63 )
    {
      v14 = v11 >> 6;
LABEL_21:
      v21 += v14;
      v24 = *v21;
      v19 = *v21 + 512;
      v28 = *v21 + 8 * (v11 - (v14 << 6));
      continue;
    }
    v28 += v25;
  }
  *(uint64_t *)&v13 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v28), _mm_cvtsi32_si128(v24)), 0);
  *((uint64_t *)&v13 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v19), _mm_cvtsi32_si128((unsigned int)(uintptr_t)(v21))), 0);
  std::memcpy(a1, &v13, 16);
  return a1;
}


// ============================================================================
// Address:   0x134e700 (size: 259 bytes)
// Symbol:    sub_134E700
// Demangled: sub_134E700
// ============================================================================
void sub_134E700(int *a1, int *a2)
{
  int v2;
  int v3;
  int v4;
  int *v5;
  int v6;
  int v7;
  volatile int32_t **v8;
  int v9;
  volatile int32_t **v10;
  int v11;
  volatile int32_t **v12;
  int v13;
  volatile int32_t **v14;
  unsigned int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;

  v17 = *a2;
  v19 = a2[1];
  v15 = a2[3];
  v2 = a1[2];
  v3 = *a1;
  v4 = a1[3];
  v18 = v3;
  v5 = (int *)(v4 + 4);
  v20 = v2;
  v16 = v4;
  if ( v15 > v4 + 4 )
  {
    do
    {
      v6 = *v5;
      v7 = *v5 + 512;
      do
      {
        v8 = (volatile int32_t **)(v6 + 4);
        v6 += 8;
        boost::detail::shared_count::Destroy(v8);
      }
      while ( v6 != v7 );
      ++v5;
    }
    while ( v15 > (unsigned int)(uintptr_t)(v5) );
  }
  if ( v15 == v16 )
  {
    if ( v17 != v18 )
    {
      v13 = v18;
      do
      {
        v14 = (volatile int32_t **)(v13 + 4);
        v13 += 8;
        boost::detail::shared_count::Destroy(v14);
      }
      while ( v17 != v13 );
    }
  }
  else
  {
    if ( v18 != v20 )
    {
      v9 = v18;
      do
      {
        v10 = (volatile int32_t **)(v9 + 4);
        v9 += 8;
        boost::detail::shared_count::Destroy(v10);
      }
      while ( v20 != v9 );
    }
    if ( v17 != v19 )
    {
      v11 = v19;
      do
      {
        v12 = (volatile int32_t **)(v11 + 4);
        v11 += 8;
        boost::detail::shared_count::Destroy(v12);
      }
      while ( v17 != v11 );
    }
  }
}


// ============================================================================
// Address:   0x134e810 (size: 244 bytes)
// Symbol:    sub_134E810
// Demangled: sub_134E810
// ============================================================================
int sub_134E810()
{
  int v0;
  int v1;
  int v2;
  int owner;
  int i;
  int *v5;
  typedef uint8_t _g4_t_v7[20];
  typedef uint8_t _g4_t_v8[32];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v8)) > _g4_s1 ? (28u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v0 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v0 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v7,
          v0,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v1 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v1 == 4 );
  if ( v1 != 0 )
  {
    boost::lock_error::Construct(
      v2,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v8,
      v1,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
        owner != 0;
        owner = *(v5 - 1) )
  {
    v5 = (int *)(owner + i - 4);
    i = *v5;
  }
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  return 0;
}


// ============================================================================
// Address:   0x134f3a0 (size: 76 bytes)
// Symbol:    sub_134F3A0
// Demangled: sub_134F3A0
// ============================================================================
int sub_134F3A0(int a1, int a2, int a3)
{
  g4_std_compat::string_construct_copy(a1, a2);
  g4_std::string::append_str(a1, a3);
  return a1;
}


// ============================================================================
// Address:   0x134f650 (size: 313 bytes)
// Symbol:    _ZNSt5dequeISsSaISsEED2Ev
// Demangled: std::deque<std::string,std::allocator<std::string>>::~deque()
// ============================================================================
// Alternative name is '_ZNSt5dequeISsSaISsEED1Ev'
static void g4_deque_string_destroy(std::deque<std::string> *self)
{
  void **v1;
  char *v2;
  int v3;
  char *v4;
  char *v5;
  void *v6;
  void **v7;
  unsigned int v8;
  void *v9;
  char *v10;
  char *v11;
  void *v12;
  void *v13;
  void *v14;
  unsigned int v15;
  int v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;

  v19 = *((char **)self + 7);
  v17 = *((char **)self + 6);
  v18 = *((char **)self + 2);
  v15 = *((uint32_t *)self + 9);
  v16 = *((uint32_t *)self + 5);
  v1 = (void **)(v16 + 4);
  v20 = *((char **)self + 4);
  if ( v15 > v16 + 4 )
  {
    do
    {
      v2 = (char *)*v1;
      v3 = (int)(uintptr_t)(*v1) + 512;
      do
      {
        v11 = v2;
        v2 += 4;
        g4_std::string::Destroy(v11);
      }
      while ( v2 != (char *)v3 );
      ++v1;
    }
    while ( v15 > (unsigned int)(uintptr_t)(v1) );
  }
  if ( v15 == v16 )
  {
    if ( v17 != v18 )
    {
      v10 = v18;
      do
      {
        v14 = v10;
        v10 += 4;
        g4_std::string::Destroy(v14);
      }
      while ( v17 != v10 );
    }
  }
  else
  {
    if ( v18 != v20 )
    {
      v4 = v18;
      do
      {
        v12 = v4;
        v4 += 4;
        g4_std::string::Destroy(v12);
      }
      while ( v20 != v4 );
    }
    if ( v17 != v19 )
    {
      v5 = v19;
      do
      {
        v13 = v5;
        v5 += 4;
        g4_std::string::Destroy(v13);
      }
      while ( v17 != v5 );
    }
  }
  v6 = *(void **)self;
  if ( *(uint32_t *)self != 0 )
  {
    v7 = *((void ***)self + 5);
    v8 = *((uint32_t *)self + 9) + 4;
    if ( v8 > (unsigned int)(uintptr_t)(v7) )
    {
      do
      {
        v9 = *v7++;
        operator delete(v9);
      }
      while ( v8 > (unsigned int)(uintptr_t)(v7) );
      v6 = *(void **)self;
    }
    operator delete(v6);
  }
}


// ============================================================================
// Address:   0x134f9f0 (size: 107 bytes)
// Symbol:    _ZNSt5dequeISsSaISsEE9push_backERKSs
// Demangled: std::deque<std::string,std::allocator<std::string>>::push_back(std::string const&)
// ============================================================================
static char *g4_deque_string_push_back(int a1, int a2)
{
  char *result;
  int v3;

  result = *(char **)(a1 + 24);
  if ( result == (char *)(*(uint32_t *)(a1 + 32) - 4) )
    return sub_134C880((void **)a1, a2);
  v3 = 0;
  if ( result != nullptr )
  {
    result = (char *)g4_std_compat::string_construct_copy(result, a2);
    v3 = *(uint32_t *)(a1 + 24);
  }
  *(uint32_t *)(a1 + 24) = v3 + 4;
  return result;
}


// ============================================================================
// Address:   0x134faf0 (size: 184 bytes)
// Symbol:    _ZNSt3mapISsPN9rapidjson12GenericValueINS0_4UTF8IcEENS0_19MemoryPoolAllocatorINS0_12CrtAllocatorEEEEESt4lessISsESaISt4pairIKSsS8_EEEixERSC_
// Demangled: std::map<std::string,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *,std::less<std::string>,std::allocator<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>>::operator[](std::string const&)
// ============================================================================
static int g4_compat_def_8(
        uint32_t *a1,
        int a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v5[3];
  typedef uint8_t _g4_t_v6[4];
  typedef int _g4_t_v7;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v6)) > _g4_s1 ? (24u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v7)) > _g4_s2 ? (28u + sizeof(_g4_t_v7)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);

  v2 = (int)(uintptr_t)(a1 + 1);
  v3 = a1[2];
  if ( v3 == 0 )
    goto LABEL_8;
  do
  {
    while ( (int)g4_std_compat::string_compare(v3 + 16, a2) >= 0 )
    {
      v2 = v3;
      v3 = *(uint32_t *)(v3 + 8);
      if ( v3 == 0 )
        goto LABEL_6;
    }
    v3 = *(uint32_t *)(v3 + 12);
  }
  while ( v3 != 0 );
LABEL_6:
  if ( (uint32_t *)v2 == a1 + 1 || (int)g4_std_compat::string_compare(a2, v2 + 16) < 0 )
  {
LABEL_8:
    g4_std_compat::string_construct_copy(v6, a2);
    v7 = 0;
    sub_134E060(v5, a1, v2, (int)(uintptr_t)(v6));
    v2 = v5[0];
    g4_std::string::Destroy(v6);
  }
  return v2 + 20;
}


// ============================================================================
// Address:   0x134fe20 (size: 567 bytes)
// Symbol:    _ZNSt8_Rb_treeISsSt4pairIKSsPN9rapidjson12GenericValueINS2_4UTF8IcEENS2_19MemoryPoolAllocatorINS2_12CrtAllocatorEEEEEESt10_Select1stISB_ESt4lessISsESaISB_EE8_M_eraseEPSt13_Rb_tree_nodeISB_E
// Demangled: std::_Rb_tree<std::string,std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>,std::_Select1st<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>,std::less<std::string>,std::allocator<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>> *)
// ============================================================================
template <>
void std::_Rb_tree<std::string,std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>,std::_Select1st<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>,std::less<std::string>,std::allocator<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>>::_M_erase(
        int a1,
        uint32_t *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  uint32_t *v16;
  uint32_t *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  uint32_t *v21;
  uint32_t *v22;
  uint32_t *v23;
  uint32_t *v24;
  uint32_t *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = (uint32_t *)a2[3];
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = (uint32_t *)v2[3];
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = (uint32_t *)v3[3];
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = (uint32_t *)v4[3];
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = (uint32_t *)v5[3];
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = (uint32_t *)v6[3];
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = (uint32_t *)v7[3];
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = v8[3];
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      std::_Rb_tree<std::string,std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>,std::_Select1st<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>,std::less<std::string>,std::allocator<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>>::_M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      g4_std::string::Destroy(v9 + 16);
                                      operator delete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = (uint32_t *)v19[2];
                                  g4_std::string::Destroy(v19 + 4);
                                  operator delete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = (uint32_t *)v20[2];
                              g4_std::string::Destroy(v20 + 4);
                              operator delete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = (uint32_t *)v25[2];
                          g4_std::string::Destroy(v25 + 4);
                          operator delete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = (uint32_t *)v24[2];
                      g4_std::string::Destroy(v24 + 4);
                      operator delete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = (uint32_t *)v23[2];
                  g4_std::string::Destroy(v23 + 4);
                  operator delete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = (uint32_t *)v22[2];
              g4_std::string::Destroy(v22 + 4);
              operator delete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = (uint32_t *)v21[2];
          g4_std::string::Destroy(v21 + 4);
          operator delete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = (uint32_t *)a2[2];
      g4_std::string::Destroy(a2 + 4);
      operator delete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}


// ============================================================================
// Address:   0x1350060 (size: 244 bytes)
// Symbol:    _ZN9rapidjson12GenericValueINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE10FindMemberEPKc
// Demangled: rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(char const*)
// ============================================================================
template <>
int rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::FindMember(
        rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *self,
        const char *s2)
{
  size_t n;
  const char *v3;
  int v4;
  int v5;

  if ( s2 == nullptr )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1018,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "name");
  if ( *((uint32_t *)self + 3) != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  n = 0;
  if ( *s2 != 0 )
  {
    v3 = s2;
    do
      ++v3;
    while ( *v3 != 0 );
    n = v3 - s2;
  }
  v4 = *(uint32_t *)self;
  v5 = *(uint32_t *)self + 32 * *((uint32_t *)self + 1);
  if ( *(uint32_t *)self == v5 )
    return 0;
  while ( *(uint32_t *)(v4 + 4) != n || memcmp(*(const void **)v4, s2, n) != 0 )
  {
    v4 += 32;
    if ( v4 == v5 )
      return 0;
  }
  return v4;
}


// ============================================================================
// Address:   0x1350e60 (size: 698 bytes)
// Symbol:    _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN6glotv35EventEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE8_M_eraseEPSt13_Rb_tree_nodeIS7_E
// Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event>>>>::_M_erase(std::_Rb_tree_node<std::pair<std::string const,boost::shared_ptr<glotv3::Event>>> *)
// ============================================================================
template <>
void std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
        int a1,
        char *a2)
{
  char *v2;
  char *v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  int v9;
  int v10;
  char *v11;
  char *v12;
  char *v13;
  char *v14;
  char *v15;
  char *v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  char *v25;

  if ( a2 != nullptr )
  {
    while ( 1 )
    {
      v2 = *((char **)a2 + 3);
      v21 = v2;
      if ( v2 != nullptr )
      {
        while ( 1 )
        {
          v3 = *((char **)v2 + 3);
          v22 = v3;
          if ( v3 != nullptr )
          {
            while ( 1 )
            {
              v4 = *((char **)v3 + 3);
              v23 = v4;
              if ( v4 != nullptr )
              {
                while ( 1 )
                {
                  v5 = *((char **)v4 + 3);
                  v24 = v5;
                  if ( v5 != nullptr )
                  {
                    while ( 1 )
                    {
                      v6 = *((char **)v5 + 3);
                      v25 = v6;
                      if ( v6 != nullptr )
                      {
                        while ( 1 )
                        {
                          v7 = *((char **)v6 + 3);
                          v20 = v7;
                          if ( v7 != nullptr )
                          {
                            while ( 1 )
                            {
                              v8 = *((char **)v7 + 3);
                              v19 = v8;
                              if ( v8 != nullptr )
                              {
                                while ( 1 )
                                {
                                  v9 = *((uint32_t *)v8 + 3);
                                  if ( v9 != 0 )
                                  {
                                    while ( 1 )
                                    {
                                      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
                                        a1,
                                        *(void **)(v9 + 12));
                                      v10 = *(uint32_t *)(v9 + 8);
                                      boost::detail::shared_count::Destroy((volatile int32_t **)(v9 + 24));
                                      g4_std::string::Destroy(v9 + 16);
                                      operator delete((void *)v9);
                                      if ( v10 == 0 )
                                        break;
                                      v9 = v10;
                                    }
                                  }
                                  v11 = *((char **)v19 + 2);
                                  boost::detail::shared_count::Destroy((volatile int32_t **)v19 + 6);
                                  g4_std::string::Destroy(v19 + 16);
                                  operator delete(v19);
                                  if ( v11 == nullptr )
                                    break;
                                  v19 = v11;
                                  v8 = v11;
                                }
                              }
                              v12 = *((char **)v20 + 2);
                              boost::detail::shared_count::Destroy((volatile int32_t **)v20 + 6);
                              g4_std::string::Destroy(v20 + 16);
                              operator delete(v20);
                              if ( v12 == nullptr )
                                break;
                              v20 = v12;
                              v7 = v12;
                            }
                          }
                          v13 = *((char **)v25 + 2);
                          boost::detail::shared_count::Destroy((volatile int32_t **)v25 + 6);
                          g4_std::string::Destroy(v25 + 16);
                          operator delete(v25);
                          if ( v13 == nullptr )
                            break;
                          v25 = v13;
                          v6 = v13;
                        }
                      }
                      v14 = *((char **)v24 + 2);
                      boost::detail::shared_count::Destroy((volatile int32_t **)v24 + 6);
                      g4_std::string::Destroy(v24 + 16);
                      operator delete(v24);
                      if ( v14 == nullptr )
                        break;
                      v24 = v14;
                      v5 = v14;
                    }
                  }
                  v15 = *((char **)v23 + 2);
                  boost::detail::shared_count::Destroy((volatile int32_t **)v23 + 6);
                  g4_std::string::Destroy(v23 + 16);
                  operator delete(v23);
                  if ( v15 == nullptr )
                    break;
                  v23 = v15;
                  v4 = v15;
                }
              }
              v16 = *((char **)v22 + 2);
              boost::detail::shared_count::Destroy((volatile int32_t **)v22 + 6);
              g4_std::string::Destroy(v22 + 16);
              operator delete(v22);
              if ( v16 == nullptr )
                break;
              v22 = v16;
              v3 = v16;
            }
          }
          v17 = *((char **)v21 + 2);
          boost::detail::shared_count::Destroy((volatile int32_t **)v21 + 6);
          g4_std::string::Destroy(v21 + 16);
          operator delete(v21);
          if ( v17 == nullptr )
            break;
          v21 = v17;
          v2 = v17;
        }
      }
      v18 = *((char **)a2 + 2);
      boost::detail::shared_count::Destroy((volatile int32_t **)a2 + 6);
      g4_std::string::Destroy(a2 + 16);
      operator delete(a2);
      if ( v18 == nullptr )
        break;
      a2 = v18;
    }
  }
}


// ============================================================================
// Address:   0x1351120 (size: 1045 bytes)
// Symbol:    _ZSt6__findISt15_Deque_iteratorISsRKSsPS1_ESsET_S5_S5_RKT0_St26random_access_iterator_tag
// Demangled: std::_Deque_iterator<std::string,std::string const&,std::string const*> std::__find<std::_Deque_iterator<std::string,std::string const&,std::string const*>,std::string>(std::_Deque_iterator<std::string,std::string const&,std::string const*>,std::_Deque_iterator<std::string,std::string const&,std::string const*>,std::string const&,std::random_access_iterator_tag)
// ============================================================================
int g4_std_compat::std_find_deq(
        int a1,
        const void **a2,
        unsigned int a3,
        unsigned int a4,
        unsigned int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        const void **a10)
{
  unsigned int v10;
  unsigned int v11;
  const void **v12;
  int v13;
  size_t v14;
  const void **v15;
  const void **v16;
  const void **v17;
  int v18;
  __int128 v20; // xmm0
  int v21;
  int v22;
  int v23;
  size_t v24;
  int v25;
  int v26;
  int v27;
  const void *v28;
  const void *v29;
  const void **v30;
  const void **v31;
  const void **v32;
  const void **v33;
  const void **v34;
  const void **v35;
  const void **v36;
  unsigned int v37;
  unsigned int v38;
  unsigned int v39;
  unsigned int v40;
  unsigned int v41;
  unsigned int v42;
  unsigned int v43;
  int v44;
  const void *v45;
  size_t v46;
  int v48;
  const void *v49;

  v10 = a5;
  v11 = a4;
  v12 = a2;
  v44 = (a6 - a7) >> 2;
  v13 = ((((int)(a9 - a5) >> 2) - 1) << 7) + v44 + ((int)(a4 - (uint32_t)(uintptr_t)(a2)) >> 2);
  v48 = v13 >> 2;
  if ( v13 >> 2 > 0 )
  {
    v45 = *a10;
    v14 = *((uint32_t *)*a10 - 3);
    while ( 1 )
    {
      if ( *((uint32_t *)*v12 - 3) == v14 )
      {
        v30 = v12;
        v37 = v10;
        v18 = memcmp(*v12, v45, v14);
        v12 = v30;
        v10 = v37;
        if ( v18 == 0 )
          goto LABEL_14;
      }
      v15 = v12 + 1;
      if ( v15 == (const void **)v11 )
      {
        v15 = *(const void ***)(v10 + 4);
        v10 += 4;
        a3 = (unsigned int)(uintptr_t)(v15);
        v11 = (unsigned int)(uintptr_t)(v15 + 128);
      }
      if ( *((uint32_t *)*v15 - 3) == v14 )
      {
        v31 = v15;
        v38 = v10;
        v21 = memcmp(*v15, v45, v14);
        v12 = v31;
        v10 = v38;
        if ( v21 == 0 )
          goto LABEL_14;
        v16 = v31 + 1;
        if ( v31 + 1 == (const void **)v11 )
          goto LABEL_17;
LABEL_7:
        v28 = *v16;
        if ( *((uint32_t *)*v16 - 3) != v14 )
          goto LABEL_8;
LABEL_18:
        v32 = v16;
        v39 = v10;
        v22 = memcmp(v28, v45, v14);
        v12 = v32;
        v10 = v39;
        if ( v22 == 0 )
          goto LABEL_14;
        v17 = v32 + 1;
        if ( v32 + 1 == (const void **)v11 )
          goto LABEL_20;
LABEL_9:
        v29 = *v17;
        if ( *((uint32_t *)*v17 - 3) != v14 )
          goto LABEL_10;
LABEL_21:
        v33 = v17;
        v40 = v10;
        v23 = memcmp(v29, v45, v14);
        v12 = v33;
        v10 = v40;
        if ( v23 == 0 )
          goto LABEL_14;
        v12 = v33 + 1;
        if ( v33 + 1 != (const void **)v11 )
          goto LABEL_11;
LABEL_23:
        v12 = *(const void ***)(v10 + 4);
        v10 += 4;
        a3 = (unsigned int)(uintptr_t)(v12);
        v11 = (unsigned int)(uintptr_t)(v12 + 128);
        if ( --v48 == 0 )
        {
LABEL_24:
          v13 = ((int)(v11 - (uint32_t)(uintptr_t)(v12)) >> 2) + v44 + ((((int)(a9 - v10) >> 2) - 1) << 7);
          break;
        }
      }
      else
      {
        v16 = v15 + 1;
        if ( v16 != (const void **)v11 )
          goto LABEL_7;
LABEL_17:
        v16 = *(const void ***)(v10 + 4);
        v10 += 4;
        a3 = (unsigned int)(uintptr_t)(v16);
        v11 = (unsigned int)(uintptr_t)(v16 + 128);
        v28 = *v16;
        if ( *((uint32_t *)*v16 - 3) == v14 )
          goto LABEL_18;
LABEL_8:
        v17 = v16 + 1;
        if ( v17 != (const void **)v11 )
          goto LABEL_9;
LABEL_20:
        v17 = *(const void ***)(v10 + 4);
        v10 += 4;
        a3 = (unsigned int)(uintptr_t)(v17);
        v11 = (unsigned int)(uintptr_t)(v17 + 128);
        v29 = *v17;
        if ( *((uint32_t *)*v17 - 3) == v14 )
          goto LABEL_21;
LABEL_10:
        v12 = v17 + 1;
        if ( v12 == (const void **)v11 )
          goto LABEL_23;
LABEL_11:
        if ( --v48 == 0 )
          goto LABEL_24;
      }
    }
  }
  switch ( v13 )
  {
    case 2:
      v49 = *a10;
      v24 = *((uint32_t *)*a10 - 3);
LABEL_30:
      if ( v24 == *((uint32_t *)*v12 - 3) )
      {
        v36 = v12;
        v43 = v10;
        v27 = memcmp(*v12, v49, v24);
        v12 = v36;
        v10 = v43;
        if ( v27 == 0 )
          goto LABEL_14;
      }
      if ( ++v12 == (const void **)v11 )
      {
        v12 = *(const void ***)(v10 + 4);
        v10 += 4;
        a3 = (unsigned int)(uintptr_t)(v12);
        v11 = (unsigned int)(uintptr_t)(v12 + 128);
      }
LABEL_33:
      if ( v24 != *((uint32_t *)*v12 - 3) )
        break;
      v34 = v12;
      v41 = v10;
      v25 = memcmp(*v12, v49, v24);
      v12 = v34;
      v10 = v41;
      if ( v25 != 0 )
        break;
LABEL_14:
      *(uint64_t *)&v20 =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128((unsigned int)(uintptr_t)(v12)), _mm_cvtsi32_si128(a3)), 0);
      *((uint64_t *)&v20 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v11), _mm_cvtsi32_si128(v10)), 0);
      *(__int128 *)a1 = v20;
      return a1;
    case 3:
      v46 = *((uint32_t *)*v12 - 3);
      v49 = *a10;
      v24 = *((uint32_t *)*a10 - 3);
      if ( v46 == v24 )
      {
        v35 = v12;
        v42 = v10;
        v26 = memcmp(*v12, v49, v46);
        v12 = v35;
        v10 = v42;
        if ( v26 == 0 )
          goto LABEL_14;
      }
      if ( ++v12 == (const void **)v11 )
      {
        v12 = *(const void ***)(v10 + 4);
        v10 += 4;
        a3 = (unsigned int)(uintptr_t)(v12);
        v11 = (unsigned int)(uintptr_t)(v12 + 128);
      }
      goto LABEL_30;
    case 1:
      v49 = *a10;
      v24 = *((uint32_t *)*a10 - 3);
      goto LABEL_33;
    default:
      break;
  }
  *(uint32_t *)a1 = a6;
  *(uint32_t *)(a1 + 4) = a7;
  *(uint32_t *)(a1 + 8) = a8;
  *(uint32_t *)(a1 + 12) = a9;
  return a1;
}


// ============================================================================
// Address:   0x1352280 (size: 379 bytes)
// Symbol:    sub_1352280
// Demangled: sub_1352280
// ============================================================================
char *sub_1352280(int a1)
{
  char *result;
  int v3;
  unsigned int v4;
  char *src;
  unsigned int v6;
  int v7;
  void *dest;
  size_t n;
  int v10;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v11;
  size_t v12;
  int v13;
  uint32_t *v14;

  result = *(char **)(a1 + 12);
  v3 = (int)(uintptr_t)(result + 16);
  if ( (unsigned int)(uintptr_t)(result + 16) >= *(uint32_t *)(a1 + 16) )
  {
    v4 = *(uint32_t *)(a1 + 20);
    src = *(char **)(a1 + 8);
    v13 = result - src;
    v6 = result - src + 16;
    v11 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1;
    if ( v6 < 2 * v4 )
      v6 = 2 * v4;
    if ( src != nullptr )
    {
      if ( v4 < v6 )
      {
        v14 = *(uint32_t **)v11;
        v7 = *(uint32_t *)(*(uint32_t *)v11 + 4);
        if ( src == (char *)(*(uint32_t *)v11 - v4 + v7 + 12)
          && (unsigned int)(v10 = v7 + ((v6 - v4 + 3) & 0xFFFFFFFC)) <= *v14 )
        {
          v14[1] = v10;
          if ( ((uint8_t)(uintptr_t)(src) & 3) != 0 )
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              294,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "((uintptr_t) originalPtr & 3) == 0");
        }
        else
        {
          v12 = *(uint32_t *)(a1 + 20);
          dest = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v11, v6);
          n = v12;
          if ( dest == nullptr )
          {
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              301,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "newBuffer != 0");
            n = v12;
            dest = nullptr;
          }
          src = (char *)memcpy(dest, src, n);
        }
      }
    }
    else
    {
      src = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
                      *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1,
                      v6);
    }
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(src);
    result = &src[v13];
    *(uint32_t *)(a1 + 20) = v6;
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(&src[v6]);
    v3 = (int)(uintptr_t)(&src[v13 + 16]);
  }
  *(uint32_t *)(a1 + 12) = v3;
  return result;
}


// ============================================================================
// Address:   0x1352400 (size: 226 bytes)
// Symbol:    sub_1352400
// Demangled: sub_1352400
// ============================================================================
char *sub_1352400(int a1, uint32_t *a2, int a3)
{
  uint8_t *v4;
  char v6;
  char v7;
  char v8;
  char v9;
  char *result;

  v4 = (uint8_t *)*a2;
  if ( *(uint8_t *)*a2 != 102 )
  {
    __assert2(
      "../../../../../lib/rapidjson/reader.h",
      466,
      "void rapidjson::GenericReader<Encoding, Allocator>::ParseFalse(Stream&, Handler&) [with unsigned int parseFlags = "
      "0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Handler = rapidjson::GenericDocument<rapidjson::U"
      "TF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "stream.Peek () == 'f'");
    v4 = (uint8_t *)*a2;
  }
  *a2 = (uint32_t)(uintptr_t)(v4 + 1);
  v6 = v4[1];
  *a2 = (uint32_t)(uintptr_t)(v4 + 2);
  if ( v6 != 97
    || (v7 = v4[2], *a2 = (uint32_t)(uintptr_t)(v4 + 3), v7 != 108)
    || (v8 = v4[3], *a2 = (uint32_t)(uintptr_t)(v4 + 4), v8 != 115)
    || (v9 = v4[4], *a2 = (uint32_t)(uintptr_t)(v4 + 5), v9 != 101) )
  {
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)("Invalid value");
    *(uint32_t *)(a1 + 68) = *a2 - a2[1] - 1;
    longjmp((struct __jmp_buf_tag *)(a1 + 24), 1);
  }
  result = sub_1352280(a3 + 16);
  if ( result != nullptr )
    *((uint32_t *)result + 3) = 257;
  return result;
}


// ============================================================================
// Address:   0x13530b0 (size: 239 bytes)
// Symbol:    _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN6glotv35EventEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE10_M_insert_EPKSt18_Rb_tree_node_baseSG_RKS7_
// Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event>>>>::_M_insert_(std::_Rb_tree_node_base const*,std::_Rb_tree_node_base const*,std::pair<std::string const,boost::shared_ptr<glotv3::Event>> const&)
// ============================================================================
template <>
int *std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(
        int *a1,
        int a2,
        int a3,
        int a4,
        int a5)
{
  int v5;
  int v6;
  int v7;
  int v9;
  int v10;

  LOBYTE(v5) = 1;
  if ( a3 == 0 && a4 != a2 + 4 )
    v5 = g4_std_compat::string_compare(a5, a4 + 16) >> 31;
  v6 = (int)(uintptr_t)(operator new(0x1Cu));
  if ( v6 != -16 )
  {
    v9 = v6;
    g4_std_compat::string_construct_copy(v6 + 16, a5);
    v6 = v9;
    *(uint32_t *)(v9 + 20) = *(uint32_t *)(a5 + 4);
    v7 = *(uint32_t *)(a5 + 8);
    *(uint32_t *)(v9 + 24) = v7;
    if ( v7 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1);
  }
  v10 = v6;
  sub_1904970(v5, v6, a4, a2 + 4);
  ++*(uint32_t *)(a2 + 20);
  *a1 = v10;
  return a1;
}


// ============================================================================
// Address:   0x13531a0 (size: 246 bytes)
// Symbol:    _ZNSt8_Rb_treeISsSt4pairIKSsN5boost10shared_ptrIN6glotv35EventEEEESt10_Select1stIS7_ESt4lessISsESaIS7_EE16_M_insert_uniqueERKS7_
// Demangled: std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event>>>>::_M_insert_unique(std::pair<std::string const,boost::shared_ptr<glotv3::Event>> const&)
// ============================================================================
template <>
int std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_unique(
        int a1,
        int a2,
        int a3)
{
  int v3;
  int v4;
  char v5;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[8];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);

  v3 = *(uint32_t *)(a2 + 8);
  if ( v3 == 0 )
  {
    v8 = a2 + 4;
    goto LABEL_10;
  }
  while ( (int)g4_std_compat::string_compare(a3, v3 + 16) < 0 )
  {
    v4 = *(uint32_t *)(v3 + 8);
    v5 = 1;
    if ( v4 == 0 )
      goto LABEL_7;
LABEL_4:
    v3 = v4;
  }
  v4 = *(uint32_t *)(v3 + 12);
  v5 = 0;
  if ( v4 != 0 )
    goto LABEL_4;
LABEL_7:
  v8 = v3;
  if ( v5 == 0 )
    goto LABEL_8;
LABEL_10:
  if ( v8 == *(uint32_t *)(a2 + 12) )
  {
    std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(
      v9,
      a2,
      0,
      v8,
      a3);
  }
  else
  {
    v3 = sub_19048F0(v8);
LABEL_8:
    if ( (int)g4_std_compat::string_compare(v3 + 16, a3) >= 0 )
    {
      *(uint32_t *)a1 = v3;
      *(uint8_t *)(a1 + 4) = 0;
      return a1;
    }
    std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(
      v9,
      a2,
      0,
      v8,
      a3);
  }
  v7 = v9[0];
  *(uint8_t *)(a1 + 4) = 1;
  *(uint32_t *)a1 = v7;
  return a1;
}


// ============================================================================
// Address:   0x1353440 (size: 173 bytes)
// Symbol:    sub_1353440
// Demangled: sub_1353440
// ============================================================================
int sub_1353440(std::deque<boost::shared_ptr<glotv3::Event::Self>> *a1, uint32_t *a2)
{
  int v3;
  uint32_t *v5;
  int v6;
  int *v7;
  int result;

  v3 = *((uint32_t *)a1 + 9);
  if ( (unsigned int)(*((uint32_t *)a1 + 1) - ((v3 - *(uint32_t *)a1) >> 2)) <= 1 )
  {
    g4_std_compat::deque_reallocate_map(a1, 1u, false);
    v3 = *((uint32_t *)a1 + 9);
  }
  *(uint32_t *)(v3 + 4) = (uint32_t)(uintptr_t)(operator new(0x200u));
  v5 = *((uint32_t **)a1 + 6);
  if ( v5 != nullptr )
  {
    *v5 = *a2;
    v6 = a2[1];
    v5[1] = v6;
    if ( v6 != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1);
  }
  v7 = (int *)(*((uint32_t *)a1 + 9) + 4);
  *((uint32_t *)a1 + 9) = (uint32_t)(uintptr_t)(v7);
  result = *v7;
  *((uint32_t *)a1 + 7) = *v7;
  *((uint32_t *)a1 + 6) = result;
  *((uint32_t *)a1 + 8) = result + 512;
  return result;
}


// ============================================================================
// Address:   0x1354840 (size: 1318 bytes)
// Symbol:    sub_1354840
// Demangled: sub_1354840
// ============================================================================
int sub_1354840(int a1, uint32_t *a2, char a3)
{
  pthread_mutex_t *v3;
  glotv3::Event::Self *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  int v12;
  int v13;
  pthread_mutex_t *v15;
  int v16;
  int v17;
  uint32_t *v18;
  int v19;
  uint32_t *v20;
  unsigned int v21;
  void **v22;
  void *v23;
  uint32_t *v24;
  int v25;
  int v26;
  typedef std::deque<boost::shared_ptr<glotv3::Event::Self>> *_g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef pthread_mutex_t *_g4_t_v31;
  typedef std::deque<boost::shared_ptr<glotv3::Event::Self>> *_g4_t_v32;
  typedef char _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint32_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_EventType;
  typedef pthread_mutex_t *_g4_t_v45;
  typedef __m128i _g4_t_v46 __attribute__((aligned(1)));
  typedef int _g4_t_v47[4];
  typedef int _g4_t_v48[4];
  typedef uint32_t *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef uint32_t *_g4_t_v52;
  typedef uint32_t *_g4_t_v53[4];
  typedef uint32_t _g4_t_v54[4];
  typedef __int128 _g4_t_v55;
  typedef uint32_t _g4_t_v56[4];
  typedef char _g4_t_v57[20];
  typedef uint32_t _g4_t_v58[11];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v29)) > _g4_s2 ? (28u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v30)) > _g4_s3 ? (32u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v31)) > _g4_s4 ? (36u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v32)) > _g4_s5 ? (40u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (47u + sizeof(_g4_t_v33)) > _g4_s6 ? (47u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v34)) > _g4_s7 ? (48u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v35)) > _g4_s8 ? (48u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v36)) > _g4_s9 ? (52u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v37)) > _g4_s10 ? (52u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v38)) > _g4_s11 ? (56u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v39)) > _g4_s12 ? (56u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v40)) > _g4_s13 ? (60u + sizeof(_g4_t_v40)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v41)) > _g4_s14 ? (60u + sizeof(_g4_t_v41)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v42)) > _g4_s15 ? (60u + sizeof(_g4_t_v42)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_EventType)) > _g4_s16 ? (68u + sizeof(_g4_t_EventType)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v45)) > _g4_s17 ? (68u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v46)) > _g4_s18 ? (72u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v47)) > _g4_s19 ? (96u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v48)) > _g4_s20 ? (112u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v49)) > _g4_s21 ? (128u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v50)) > _g4_s22 ? (132u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (136u + sizeof(_g4_t_v51)) > _g4_s23 ? (136u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (140u + sizeof(_g4_t_v52)) > _g4_s24 ? (140u + sizeof(_g4_t_v52)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v53)) > _g4_s25 ? (144u + sizeof(_g4_t_v53)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v54)) > _g4_s26 ? (160u + sizeof(_g4_t_v54)) : _g4_s26,
    _g4_s28 = (176u + sizeof(_g4_t_v55)) > _g4_s27 ? (176u + sizeof(_g4_t_v55)) : _g4_s27,
    _g4_s29 = (192u + sizeof(_g4_t_v56)) > _g4_s28 ? (192u + sizeof(_g4_t_v56)) : _g4_s28,
    _g4_s30 = (208u + sizeof(_g4_t_v57)) > _g4_s29 ? (208u + sizeof(_g4_t_v57)) : _g4_s29,
    _g4_s31 = (228u + sizeof(_g4_t_v58)) > _g4_s30 ? (228u + sizeof(_g4_t_v58)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 47u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 48u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 60u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 60u);
  _g4_t_EventType &EventType = *reinterpret_cast<_g4_t_EventType *>(_g4_sf + 68u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 68u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 72u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 96u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 128u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 132u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 136u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 140u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 144u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 160u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 176u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 192u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 208u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 228u);

  v3 = (pthread_mutex_t *)(a1 + 13236);
  v58[7] = (uint32_t)(uintptr_t)(&a3);
  v33 = a3;
  v5 = (glotv3::Event::Self *)sub_134C470((int)(uintptr_t)(a2));
  EventType = glotv3::Event::getEventType(v5);
  if ( v3 == nullptr )
    sub_134E3D0(v7, v6);
  do
    v8 = pthread_mutex_trylock(v3);
  while ( v8 == 4 );
  if ( v8 != 0 )
  {
    if ( EventType != 6 )
    {
      *(uint8_t *)(a1 + 13333) = 1;
      do
        v9 = pthread_mutex_lock((pthread_mutex_t *)(a1 + 13240));
      while ( v9 == 4 );
      if ( v9 != 0 )
      {
        boost::lock_error::Construct(
          v10,
          (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
          (boost::lock_error::Self *)v58,
          v9,
          "boost: mutex lock failed in pthread_mutex_lock");
        std::terminate();
      }
      v11 = *(uint32_t **)(a1 + 13316);
      if ( v11 == (uint32_t *)(*(uint32_t *)(a1 + 13324) - 8) )
      {
        sub_1353440((std::deque<boost::shared_ptr<glotv3::Event::Self>> *)(a1 + 13292), a2);
      }
      else
      {
        v12 = 0;
        if ( v11 != nullptr )
        {
          *v11 = *a2;
          v13 = a2[1];
          v11[1] = v13;
          if ( v13 != 0 )
            __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1);
          v12 = *(uint32_t *)(a1 + 13316);
        }
        *(uint32_t *)(a1 + 13316) = v12 + 8;
      }
      sub_1321760((pthread_mutex_t *)(a1 + 13240));
    }
  }
  else
  {
    v40 = (uint32_t *)a1;
    v45 = (pthread_mutex_t *)(a1 + 13240);
    v15 = (pthread_mutex_t *)(a1 + 13240);
    do
      v16 = pthread_mutex_lock(v15);
    while ( v16 == 4 );
    v18 = v40;
    if ( v16 != 0 )
    {
      boost::lock_error::Construct(
        v17,
        (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
        (boost::lock_error::Self *)v57,
        v16,
        "boost: mutex lock failed in pthread_mutex_lock");
      std::terminate();
    }
    v34 = v40[3326];
    v36 = v40[3328];
    v19 = v40[3332] - v36;
    v20 = (uint32_t *)v40[3329];
    v41 = v40[3325];
    v38 = v18[3327];
    v32 = (std::deque<boost::shared_ptr<glotv3::Event::Self>> *)(v18 + 3313);
    v28 = ((v38 - v41) >> 3) + (((int)(uintptr_t)(v20) - v18[3330]) >> 3) + (((v19 >> 2) - 1) << 6);
    v27 = (std::deque<boost::shared_ptr<glotv3::Event::Self>> *)(v18 + 3313);
    v29 = v20;
    if ( v18[3319] == v18[3315] )
    {
      g4_std_compat::deque_glotv3_event_reserve_front(
        (std::deque<boost::shared_ptr<glotv3::Event::Self>> *)&v49,
        v27,
        v28);
      v53[0] = v49;
      v53[1] = v50;
      v53[2] = v51;
      v53[3] = v52;
      v54[1] = v34;
      v54[0] = v41;
      v54[3] = v36;
      v54[2] = v38;
      sub_134CB60(&v46, (int)(uintptr_t)(v54), v29, v53);
      v18[3315] = (uint32_t)(uintptr_t)(v49);
      v18[3316] = (uint32_t)(uintptr_t)(v50);
      v18[3317] = (uint32_t)(uintptr_t)(v51);
      v18[3318] = (uint32_t)(uintptr_t)(v52);
    }
    else
    {
      g4_std_compat::deque_glotv3_event_reserve_back(
        (std::deque<boost::shared_ptr<glotv3::Event::Self>> *)&v49,
        v27,
        v28);
      v55 = (*(__int128 *)(v18 + 3319));
      v56[1] = v34;
      v56[0] = v41;
      v56[3] = v36;
      v56[2] = v38;
      sub_134CB60(&v46, (int)(uintptr_t)(v56), v29, (uint32_t **)&v55);
      v18[3319] = (uint32_t)(uintptr_t)(v49);
      v18[3320] = (uint32_t)(uintptr_t)(v50);
      v18[3321] = (uint32_t)(uintptr_t)(v51);
      v18[3322] = (uint32_t)(uintptr_t)(v52);
    }
    v39 = v18[3325];
    v37 = v18[3326];
    v35 = v18[3327];
    v42 = v18[3328];
    v48[0] = v18[3329];
    v48[1] = v18[3330];
    v47[0] = v39;
    v48[2] = v18[3331];
    v47[1] = v37;
    v48[3] = v18[3332];
    v47[2] = v35;
    v47[3] = v42;
    sub_134E700(v47, v48);
    if ( v18[3332] + 4 > (unsigned int)(v42 + 4) )
    {
      v31 = v3;
      v30 = v18;
      v21 = v18[3332] + 4;
      v22 = (void **)(v42 + 4);
      do
      {
        v23 = *v22++;
        operator delete(v23);
      }
      while ( v21 > (unsigned int)(uintptr_t)(v22) );
      v3 = v31;
      v18 = v30;
    }
    v18[3329] = v39;
    v18[3330] = v37;
    v18[3331] = v35;
    v18[3332] = v42;
    *((uint8_t *)v18 + 13333) = 0;
    v24 = (uint32_t *)v18[3319];
    if ( v24 == (uint32_t *)(v18[3321] - 8) )
    {
      sub_1353440(v32, a2);
    }
    else
    {
      v25 = 0;
      if ( v24 != nullptr )
      {
        *v24 = *a2;
        v26 = a2[1];
        v24[1] = v26;
        if ( v26 != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v26 + 4), 1);
        v25 = v18[3319];
      }
      v18[3319] = v25 + 8;
    }
    if ( v33 != 0 )
      boost::condition_variable::notify_one((pthread_mutex_t *)(v18 + 3311));
    sub_1321760(v45);
    sub_1321760(v3);
  }
  return 1;
}


// ============================================================================
// Address:   0x1355350 (size: 332 bytes)
// Symbol:    sub_1355350
// Demangled: sub_1355350
// ============================================================================
int sub_1355350(
        int a1,
        char **a2,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3)
{
  char *i;
  char v5;
  char v6;
  const char *v7;
  char *j;
  char v9;
  struct __jmp_buf_tag *env;

  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  env = (struct __jmp_buf_tag *)(a1 + 24);
  if ( setjmp(*reinterpret_cast<jmp_buf *>((a1 + 24))) != 0 )
  {
    *(uint32_t *)(a1 + 12) = *(uint32_t *)(a1 + 8);
    return 0;
  }
  for ( i = *a2; ; ++i )
  {
    v5 = *i;
    if ( *i != 32 && v5 != 10 && v5 != 13 && v5 != 9 )
      break;
  }
  *a2 = i;
  v6 = *i;
  if ( *i == 0 )
  {
    v7 = "Text only contains white space(s)";
LABEL_12:
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v7);
    *(uint32_t *)(a1 + 68) = *a2 - a2[1];
    longjmp(env, 1);
  }
  if ( v6 == 91 )
  {
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  else
  {
    if ( v6 != 123 )
    {
      v7 = "Expect either an object or array at root";
      goto LABEL_12;
    }
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  for ( j = *a2; ; ++j )
  {
    v9 = *j;
    if ( *j != 32 && v9 != 10 && v9 != 13 && v9 != 9 )
      break;
  }
  *a2 = j;
  if ( *j != 0 )
  {
    v7 = "Nothing should follow the root object or array.";
    goto LABEL_12;
  }
  return 1;
}


// ============================================================================
// Address:   0x13554a0 (size: 686 bytes)
// Symbol:    _ZN9rapidjson15GenericDocumentINS_4UTF8IcEENS_19MemoryPoolAllocatorINS_12CrtAllocatorEEEE11ParseStreamILj0ENS_19GenericStringStreamIS2_EEEERS6_RT0_
// Demangled: rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>& rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseStream<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(rapidjson::GenericStringStream<rapidjson::UTF8<char>> &)
// ============================================================================
template <> template <>
rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseStream<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>>(
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a1,
        char **a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  int v7;
  unsigned int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  typedef int _g4_t_v15;
  typedef unsigned int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t *_g4_t_v18;
  typedef void *_g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef uint32_t *_g4_t_v21;
  typedef uint32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v15)) > _g4_s0 ? (8u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v18)) > _g4_s3 ? (8u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v19)) > _g4_s4 ? (8u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v20)) > _g4_s5 ? (12u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v21)) > _g4_s6 ? (16u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v22)) > _g4_s7 ? (20u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v23)) > _g4_s8 ? (24u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v24)) > _g4_s9 ? (28u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v25)) > _g4_s10 ? (32u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v26)) > _g4_s11 ? (36u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v27)) > _g4_s12 ? (80u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v28)) > _g4_s13 ? (84u + sizeof(_g4_t_v28)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 16u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 80u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 84u);

  if ( a1 != nullptr )
    *((uint32_t *)a1 + 3) = 0;
  v21 = nullptr;
  v22 = nullptr;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  v26 = 256;
  v2 = (uint32_t *)operator new(0x14u);
  *v2 = 0;
  v2[1] = 2048;
  v2[2] = 0;
  v2[3] = 0;
  v2[4] = 0;
  v3 = (int)(uintptr_t)(operator new(1u));
  v4 = v2[1];
  v2[3] = v3;
  v2[4] = v3;
  v15 = v4;
  v5 = (uint32_t *)(malloc(v4 + 12));
  v5[1] = 0;
  *v5 = v15;
  v5[2] = *v2;
  *v2 = (uint32_t)(uintptr_t)(v5);
  v22 = v2;
  v21 = v2;
  v6 = (uint32_t *)*v2;
  v20 = (v26 + 3) & 0xFFFFFFFC;
  v7 = *(uint32_t *)(*v2 + 4);
  if ( v7 + v20 > *(uint32_t *)*v2 )
  {
    v8 = v2[1];
    if ( v20 >= v8 )
      v8 = (v26 + 3) & 0xFFFFFFFC;
    v16 = v8;
    v6 = (uint32_t *)(malloc(v8 + 12));
    v6[1] = 0;
    *v6 = v16;
    v6[2] = *v2;
    *v2 = (uint32_t)(uintptr_t)(v6);
    v7 = v6[1];
  }
  v9 = (int)(uintptr_t)(v6) + v7 + 12;
  if ( (v9 & 3) != 0 )
  {
    v17 = (int)(uintptr_t)(v6) + v7 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v6 = (uint32_t *)*v2;
    v9 = v17;
    v7 = *(uint32_t *)(*v2 + 4);
  }
  v6[1] = v20 + v7;
  v23 = v9;
  v24 = v9;
  v25 = v26 + v9;
  v27 = 0;
  v28 = 0;
  if ( (uint8_t)sub_1355350((int)(uintptr_t)(&v21), a2, a1) != 0 )
  {
    v10 = *((uint32_t *)a1 + 7);
    if ( v10 - *((uint32_t *)a1 + 6) != 16 )
    {
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1135,
        "rapidjson::GenericDocument<Encoding, Allocator>& rapidjson::GenericDocument<Encoding, Allocator>::ParseStream(St"
        "ream&) [with unsigned int parseFlags = 0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Encoding"
        " = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericDocument<Encoding, Allocat"
        "or> = rapidjson::GenericDocument<rapidjson::UTF8<> >]",
        "stack_.GetSize () == sizeof (ValueType)");
      v10 = *((uint32_t *)a1 + 7);
      if ( (unsigned int)(v10 - *((uint32_t *)a1 + 6)) <= 0xF )
      {
        __assert2(
          "../../../../../lib/rapidjson/internal/stack.h",
          83,
          "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::GenericValue<rapidjson::UTF8<> >, A"
          "llocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
          "GetSize () >= count * sizeof (T)");
        v10 = *((uint32_t *)a1 + 7);
      }
    }
    *((uint32_t *)a1 + 7) = v10 - 16;
    *(uint32_t *)a1 = *(uint32_t *)(v10 - 16);
    *((uint32_t *)a1 + 1) = *(uint32_t *)(v10 - 12);
    *((uint32_t *)a1 + 2) = *(uint32_t *)(v10 - 8);
    *((uint32_t *)a1 + 3) = *(uint32_t *)(v10 - 4);
    *(uint32_t *)(v10 - 4) = 0;
    *((uint32_t *)a1 + 10) = 0;
    *((uint32_t *)a1 + 11) = 0;
  }
  else
  {
    *((uint32_t *)a1 + 10) = v27;
    *((uint32_t *)a1 + 11) = v28;
    *((uint32_t *)a1 + 7) = *((uint32_t *)a1 + 6);
  }
  v11 = v22;
  if ( v22 != nullptr )
  {
    v12 = (uint32_t *)*v22;
    if ( *v22 != 0 && v12 != (uint32_t *)v22[2] )
    {
      while ( 1 )
      {
        v13 = (uint32_t *)v12[2];
        v18 = v11;
        free(v12);
        v11 = v18;
        *v18 = (uint32_t)(uintptr_t)(v13);
        if ( v13 == nullptr || v13 == (uint32_t *)v18[2] )
          break;
        v12 = v13;
      }
    }
    v19 = v11;
    operator delete((void *)v11[4]);
    operator delete(v19);
  }
  return a1;
}


// ============================================================================
// Address:   0x13560d0 (size: 410 bytes)
// Symbol:    sub_13560D0
// Demangled: sub_13560D0
// ============================================================================
int sub_13560D0(uint32_t *a1)
{
  int v2;
  int v3;
  int v4;
  unsigned int nusers;
  int v6;
  unsigned int v7;
  typedef uint8_t _g4_t_v9[20];
  typedef uint8_t _g4_t_v10[48];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v10)) > _g4_s1 ? (28u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v2 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v2 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v9,
          v2,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v3 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    boost::lock_error::Construct(
      v4,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v10,
      v3,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  if ( nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
            & 3);
    v6 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v6 = nusers;
    }
    if ( v6 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v7 = (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
      % nusers != 0)
     + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
     / nusers;
  if ( v7 != 0 )
    sub_60EFD0(
      (uint32_t **)&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count,
      a1,
      nusers * v7,
      nusers);
  return sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
}


// ============================================================================
// Address:   0x1356300 (size: 704 bytes)
// Symbol:    sub_1356300
// Demangled: sub_1356300
// ============================================================================
uint32_t *sub_1356300(uint32_t *a1)
{
  unsigned int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  uint32_t *v10;
  unsigned int v12;
  unsigned int v13;
  unsigned int *v14;
  unsigned int i;
  unsigned int v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  uint32_t *v23;
  unsigned int v24;

  v1 = a1[3];
  if ( v1 <= 3 )
  {
    v1 = 4;
  }
  else if ( (v1 & 3) != 0 )
  {
    v1 = a1[3] + 4 - (a1[3] & 3);
    v2 = v1 & 3;
    if ( v1 <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::async_client_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v2 = v1;
    }
    if ( v2 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::async_client_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v20 = a1[3] / v1 + (a1[3] % v1 != 0);
  if ( v20 != 0 )
  {
    v23 = a1;
    v3 = (uint32_t *)*a1;
    if ( *a1 != 0 )
    {
      while ( 2 )
      {
        v4 = v3;
        v5 = a1[3] / v1 + (a1[3] % v1 != 0);
        while ( --v5 != 0 )
        {
          if ( (uint32_t *)*v4 != (uint32_t *)((char *)v4 + v1) )
          {
            v3 = (uint32_t *)*v4;
            v23 = v4;
            goto LABEL_14;
          }
          v4 = (uint32_t *)*v4;
        }
        if ( v4 != nullptr )
        {
          *v23 = *v4;
          return v3;
        }
LABEL_14:
        if ( v3 != nullptr )
          continue;
        break;
      }
    }
  }
  v6 = a1[4];
  if ( v20 >= v6 )
    v6 = a1[3] / v1 + (a1[3] % v1 != 0);
  a1[4] = v6;
  v7 = v1 * v6 + 8;
  v3 = (uint32_t *)operator new[](v7, (const std::nothrow_t *)&std::nothrow);
  if ( v3 == nullptr )
  {
    v18 = a1[4];
    if ( v20 >= v18 )
      return v3;
    v19 = v18 >> 1;
    if ( v20 >= v19 )
      v19 = v20;
    a1[4] = v19;
    v7 = v1 * v19 + 8;
    v3 = (uint32_t *)operator new[](v7, (const std::nothrow_t *)&std::nothrow);
    if ( v3 == nullptr )
      return v3;
  }
  v8 = a1[4];
  if ( v20 < v8 )
  {
    sub_60EFD0((uint32_t **)a1, (uint32_t *)((char *)v3 + v1 * v20), v7 - v1 * v20 - 8, v1);
    v8 = a1[4];
    v21 = a1[6];
    if ( v21 == 0 )
      goto LABEL_20;
  }
  else
  {
    v21 = a1[6];
    if ( v21 == 0 )
    {
LABEL_20:
      a1[4] = 2 * v8;
      goto LABEL_21;
    }
  }
  v24 = a1[3];
  if ( v21 > v1 * v8 / v24 )
  {
    v12 = 2 * v8;
    v13 = v21 * v24 / v1;
    if ( v12 <= v13 )
      v13 = v12;
    a1[4] = v13;
  }
LABEL_21:
  v9 = a1[1];
  if ( v9 == 0 || (unsigned int)(uintptr_t)(v3) < v9 )
  {
    v10 = (uint32_t *)((char *)v3 + v7 - 4);
    *(v10 - 1) = v9;
    *v10 = a1[2];
    a1[1] = (uint32_t)(uintptr_t)(v3);
    a1[2] = v7;
    return v3;
  }
  v14 = (unsigned int *)(v9 + a1[2] - 4);
  for ( i = *(uint32_t *)(v9 + a1[2] - 8); i != 0; i = *(v14 - 1) )
  {
    if ( (unsigned int)(uintptr_t)(v3) < i )
      break;
    v14 = (unsigned int *)(i + *v14 - 4);
  }
  v16 = *v14;
  v17 = (uint32_t *)((char *)v3 + v7 - 4);
  *(v17 - 1) = i;
  *v17 = v16;
  *(v14 - 1) = (unsigned int)(uintptr_t)(v3);
  *v14 = v7;
  return v3;
}


// ============================================================================
// Address:   0x13570b0 (size: 704 bytes)
// Symbol:    sub_13570B0
// Demangled: sub_13570B0
// ============================================================================
uint32_t *sub_13570B0(uint32_t *a1)
{
  unsigned int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  uint32_t *v10;
  unsigned int v12;
  unsigned int v13;
  unsigned int *v14;
  unsigned int i;
  unsigned int v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v20;
  unsigned int v21;
  uint32_t *v23;
  unsigned int v24;

  v1 = a1[3];
  if ( v1 <= 3 )
  {
    v1 = 4;
  }
  else if ( (v1 & 3) != 0 )
  {
    v1 = a1[3] + 4 - (a1[3] & 3);
    v2 = v1 & 3;
    if ( v1 <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v2 = v1;
    }
    if ( v2 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v20 = a1[3] / v1 + (a1[3] % v1 != 0);
  if ( v20 != 0 )
  {
    v23 = a1;
    v3 = (uint32_t *)*a1;
    if ( *a1 != 0 )
    {
      while ( 2 )
      {
        v4 = v3;
        v5 = a1[3] / v1 + (a1[3] % v1 != 0);
        while ( --v5 != 0 )
        {
          if ( (uint32_t *)*v4 != (uint32_t *)((char *)v4 + v1) )
          {
            v3 = (uint32_t *)*v4;
            v23 = v4;
            goto LABEL_14;
          }
          v4 = (uint32_t *)*v4;
        }
        if ( v4 != nullptr )
        {
          *v23 = *v4;
          return v3;
        }
LABEL_14:
        if ( v3 != nullptr )
          continue;
        break;
      }
    }
  }
  v6 = a1[4];
  if ( v20 >= v6 )
    v6 = a1[3] / v1 + (a1[3] % v1 != 0);
  a1[4] = v6;
  v7 = v1 * v6 + 8;
  v3 = (uint32_t *)operator new[](v7, (const std::nothrow_t *)&std::nothrow);
  if ( v3 == nullptr )
  {
    v18 = a1[4];
    if ( v20 >= v18 )
      return v3;
    v19 = v18 >> 1;
    if ( v20 >= v19 )
      v19 = v20;
    a1[4] = v19;
    v7 = v1 * v19 + 8;
    v3 = (uint32_t *)operator new[](v7, (const std::nothrow_t *)&std::nothrow);
    if ( v3 == nullptr )
      return v3;
  }
  v8 = a1[4];
  if ( v20 < v8 )
  {
    sub_60EFD0((uint32_t **)a1, (uint32_t *)((char *)v3 + v1 * v20), v7 - v1 * v20 - 8, v1);
    v8 = a1[4];
    v21 = a1[6];
    if ( v21 == 0 )
      goto LABEL_20;
  }
  else
  {
    v21 = a1[6];
    if ( v21 == 0 )
    {
LABEL_20:
      a1[4] = 2 * v8;
      goto LABEL_21;
    }
  }
  v24 = a1[3];
  if ( v21 > v1 * v8 / v24 )
  {
    v12 = 2 * v8;
    v13 = v21 * v24 / v1;
    if ( v12 <= v13 )
      v13 = v12;
    a1[4] = v13;
  }
LABEL_21:
  v9 = a1[1];
  if ( v9 == 0 || (unsigned int)(uintptr_t)(v3) < v9 )
  {
    v10 = (uint32_t *)((char *)v3 + v7 - 4);
    *(v10 - 1) = v9;
    *v10 = a1[2];
    a1[1] = (uint32_t)(uintptr_t)(v3);
    a1[2] = v7;
    return v3;
  }
  v14 = (unsigned int *)(v9 + a1[2] - 4);
  for ( i = *(uint32_t *)(v9 + a1[2] - 8); i != 0; i = *(v14 - 1) )
  {
    if ( (unsigned int)(uintptr_t)(v3) < i )
      break;
    v14 = (unsigned int *)(i + *v14 - 4);
  }
  v16 = *v14;
  v17 = (uint32_t *)((char *)v3 + v7 - 4);
  *(v17 - 1) = i;
  *v17 = v16;
  *(v14 - 1) = (unsigned int)(uintptr_t)(v3);
  *v14 = v7;
  return v3;
}


// ============================================================================
// Address:   0x1358000 (size: 405 bytes)
// Symbol:    sub_1358000
// Demangled: sub_1358000
// ============================================================================
uint32_t *sub_1358000(uint32_t *a1)
{
  int v2;
  int v3;
  int v4;
  uint8_t *v5;
  uint8_t *v6;
  volatile int32_t *v7;
  bool v8;
  typedef volatile int32_t *_g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef uint8_t _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);

  v11 = nullptr;
  sub_134E810();
  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v2 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v2 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v12,
          v2,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v3 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    boost::lock_error::Construct(
      v4,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v13,
      v3,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  v10 = (volatile int32_t *)(sub_13570B0(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  if ( v10 == nullptr )
    std::terminate();
  v11 = v10;
  *((uint32_t *)v10 + 1) = 1;
  *((uint32_t *)v10 + 2) = 1;
  *v10 = (volatile int32_t)((uint32_t)(uintptr_t)&off_20936E8);
  *((uint32_t *)v10 + 3) = 0;
  *((uint8_t *)v10 + 16) = 0;
  v5 = nullptr;
  if ( v11 != nullptr )
    v5 = (uint8_t *)(*(int (**)(volatile int32_t *))(*v11 + 20))(v11);
  v6 = v5 + 4;
  if ( v5 != (uint8_t *)-4 )
  {
    glotv3::Event::Construct((glotv3::Event::Self *)(v5 + 4), false);
    v6 = v5 + 4;
  }
  *v5 = 1;
  *a1 = (uint32_t)(uintptr_t)(v6);
  v7 = v11;
  v8 = v11 == nullptr;
  a1[1] = (uint32_t)(uintptr_t)(v11);
  if ( !v8 )
    __sync_add_and_fetch(v7 + 1, 1);
  boost::detail::shared_count::Destroy(&v11);
  return a1;
}


// ============================================================================
// Address:   0x135e550 (size: 397 bytes)
// Symbol:    sub_135E550
// Demangled: sub_135E550
// ============================================================================
uint32_t *sub_135E550(uint32_t *a1)
{
  int v2;
  int v3;
  int v4;
  uint8_t *v5;
  uint8_t *v6;
  volatile int32_t *v7;
  bool v8;
  typedef volatile int32_t *_g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef uint8_t _g4_t_v12[20];
  typedef uint8_t _g4_t_v13[32];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v12)) > _g4_s2 ? (20u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v13)) > _g4_s3 ? (40u + sizeof(_g4_t_v13)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 20u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);

  v11 = nullptr;
  sub_134E810();
  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v2 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v2 != 0 )
      {
        boost::thread_resource_error::Construct(
          (boost::thread_resource_error *)v12,
          v2,
          "boost:: mutex constructor failed in pthread_mutex_init");
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
    v3 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    boost::lock_error::Construct(
      v4,
      (int)(uintptr_t)("boost: mutex lock failed in pthread_mutex_lock"),
      (boost::lock_error::Self *)v13,
      v3,
      "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  v10 = (volatile int32_t *)(sub_13570B0(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
  sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
  if ( v10 == nullptr )
    std::terminate();
  v11 = v10;
  *((uint32_t *)v10 + 1) = 1;
  *((uint32_t *)v10 + 2) = 1;
  *v10 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093D48);
  *((uint32_t *)v10 + 3) = 0;
  *((uint8_t *)v10 + 16) = 0;
  v5 = nullptr;
  if ( v11 != nullptr )
    v5 = (uint8_t *)(*(int (**)(volatile int32_t *))(*v11 + 20))(v11);
  v6 = v5 + 4;
  if ( v5 != (uint8_t *)-4 )
  {
    glotv3::EventOfTimerFired::Construct((glotv3::EventOfTimerFired::Self *)(v5 + 4));
    v6 = v5 + 4;
  }
  *v5 = 1;
  *a1 = (uint32_t)(uintptr_t)(v6);
  v7 = v11;
  v8 = v11 == nullptr;
  a1[1] = (uint32_t)(uintptr_t)(v11);
  if ( !v8 )
    __sync_add_and_fetch(v7 + 1, 1);
  boost::detail::shared_count::Destroy(&v11);
  return a1;
}


// ============================================================================
// Address:   0x1361790 (size: 1231 bytes)
// Symbol:    sub_1361790
// Demangled: sub_1361790
// ============================================================================
int *sub_1361790()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_21184F8);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21184F8, &unk_20D1280);
  dword_21184FC = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2118500 = v0;
  dword_2118504 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118508 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118510 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118520 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118530 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( g4_guard_32675df390[0] == 0 )
  {
    g4_guard_32675df390[0] = 1;
    __cxa_atexit(
      (void (*)(void *))g4_noop_dtor,
      &boost::asio::detail::service_base<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::id,
      &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  if ( g4_guard_38c1305a76[0] == 0 )
  {
    g4_guard_38c1305a76[0] = 1;
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_1dec044f07[0] == 0 )
  {
    g4_guard_1dec044f07[0] = 1;
    boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::get_pool();
  }
  if ( g4_guard_1c53994880[0] == 0 )
  {
    g4_guard_1c53994880[0] = 1;
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_28094b170b[0] == 0 )
  {
    g4_guard_28094b170b[0] = 1;
    boost::singleton_pool<boost::pool_allocator_tag,224u,glotv3::async_client_new_delete,boost::mutex::Self,16u,0u>::get_pool();
  }
  if ( g4_guard_fcee852656[0] == 0 )
  {
    g4_guard_fcee852656[0] = 1;
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_3532e8c335[0] == 0 )
  {
    g4_guard_3532e8c335[0] = 1;
    boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex::Self,16u,0u>::get_pool();
  }
  if ( g4_guard_0ce960411d[0] == 0 )
  {
    g4_guard_0ce960411d[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfDataBuffered::Self>>::ti_ = (void *)("static char const* boost"
                                                                                                "::detail::sp_typeid_<T>:"
                                                                                                ":name() [with T = boost:"
                                                                                                ":detail::sp_ms_deleter<g"
                                                                                                "lotv3::EventOfDataBuffered>]");
  }
  if ( g4_guard_3954ad54ad[0] == 0 )
  {
    g4_guard_3954ad54ad[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfTimerFired::Self>>::ti_ = (void *)("static char const* boost::"
                                                                                              "detail::sp_typeid_<T>::nam"
                                                                                              "e() [with T = boost::detai"
                                                                                              "l::sp_ms_deleter<glotv3::E"
                                                                                              "ventOfTimerFired>]");
  }
  if ( g4_guard_9c014ab136[0] == 0 )
  {
    g4_guard_9c014ab136[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventList::Self>>::ti_ = (void *)("static char const* boost::detail::"
                                                                                      "sp_typeid_<T>::name() [with T = bo"
                                                                                      "ost::detail::sp_ms_deleter<glotv3::EventList::Self>]");
  }
  if ( g4_guard_9d63b28a5d[0] == 0 )
  {
    g4_guard_9d63b28a5d[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::AsyncHTTPClient::Self>>::ti_ = (void *)("static char const* boost::de"
                                                                                            "tail::sp_typeid_<T>::name() "
                                                                                            "[with T = boost::detail::sp_"
                                                                                            "ms_deleter<glotv3::AsyncHTTPClient::Self>]");
  }
  if ( g4_guard_d0ce01ec3c[0] == 0 )
  {
    g4_guard_d0ce01ec3c[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfUserDevice::Self>>::ti_ = (void *)("static char const* boost::"
                                                                                              "detail::sp_typeid_<T>::nam"
                                                                                              "e() [with T = boost::detai"
                                                                                              "l::sp_ms_deleter<glotv3::E"
                                                                                              "ventOfUserDevice>]");
  }
  if ( g4_guard_05b6daf0ed[0] == 0 )
  {
    g4_guard_05b6daf0ed[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::Event::Self>>::ti_ = (void *)("static char const* boost::detail::sp_t"
                                                                                  "ypeid_<T>::name() [with T = boost::det"
                                                                                  "ail::sp_ms_deleter<glotv3::Event::Self>]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1361d1d (size: 111 bytes)
// Symbol:    sub_1361D1D
// Demangled: sub_1361D1D
// ============================================================================
void __noreturn sub_1361D1D(int *a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v4)) > _g4_s0 ? (7u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 7u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *a1;
  v3 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4) + 1, a2, (int)(uintptr_t)(&v4));
  sub_19042E0(v5, (char *)&v4 + 1);
  g4_std::string::Destroy((char *)&v4 + 1);
  v5[2] = v2;
  v5[3] = v3;
  v5[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v5[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x1361d8c (size: 117 bytes)
// Symbol:    sub_1361D8C
// Demangled: sub_1361D8C
// ============================================================================
void __noreturn sub_1361D8C(int *a1)
{
  int v1;
  int v2;
  typedef int _g4_t_v3;
  typedef uint32_t _g4_t_v4[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v3)) > _g4_s0 ? (7u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 7u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v1 = *a1;
  v2 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v3) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v3));
  sub_19042E0(v4, (char *)&v3 + 1);
  g4_std::string::Destroy((char *)&v3 + 1);
  v4[2] = v1;
  v4[3] = v2;
  v4[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v4[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x1361e10 (size: 242 bytes)
// Symbol:    sub_1361E10
// Demangled: sub_1361E10
// ============================================================================
int sub_1361E10(int *a1, int a2, int a3)
{
  int v4;
  int v5;
  int fd;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int result;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v22)) > _g4_s0 ? (12u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v23)) > _g4_s1 ? (28u + sizeof(_g4_t_v23)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);

  sub_18F81E0(a3, a2);
  fd = *a1;
  if ( fd == -1 )
    return (int)(uintptr_t)(sub_18F81E0(v5, v4));
  *(uint32_t *)__errno(v5, v4) = 0;
  v7 = close(fd);
  v10 = (int)(uintptr_t)(sub_18F81E0(v9, v8));
  v22 = *(uint32_t *)__errno(v12, v11);
  if ( v7 == 0 )
    return (int)(uintptr_t)(sub_18F81E0(v5, v4));
  if ( (uintptr_t)sub_18F81E0(v5, v4) == v10 && v22 == 11 || (result = (int)(uintptr_t)((uintptr_t)sub_18F81E0(v15, v14))) == v10 && v22 == 11 )
  {
    v23[0] = 0;
    ioctl(fd, 0x5421u, v23);
    *(uint32_t *)__errno(v17, v16) = 0;
    v7 = close(fd);
    sub_18F81E0(v19, v18);
    result = *(uint32_t *)__errno(v21, v20);
  }
  if ( v7 == 0 )
    return (int)(uintptr_t)(sub_18F81E0(v5, v4));
  return result;
}


// ============================================================================
// Address:   0x1361f10 (size: 406 bytes)
// Symbol:    sub_1361F10
// Demangled: sub_1361F10
// ============================================================================
uint32_t *sub_1361F10(uint32_t *result, int a2, int a3, int a4, int *a5)
{
  volatile int32_t *v5;
  int v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  int v11;

  v5 = (volatile int32_t *)a5[1];
  v6 = *a5;
  v11 = *a5;
  if ( v5 != nullptr )
  {
    __sync_add_and_fetch(v5 + 1, 1);
    __sync_add_and_fetch(v5 + 1, 1);
    __sync_add_and_fetch(v5 + 1, 1);
    __sync_add_and_fetch(v5 + 1, 1);
    if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
    {
      v7 = result;
      (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
      result = v7;
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
        result = v7;
      }
    }
    if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
    {
      v8 = result;
      (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
      result = v8;
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
        result = v8;
      }
    }
    result[1] = a3;
    result[2] = a4;
    *result = a2;
    result[3] = v11;
    result[4] = (uint32_t)(uintptr_t)(v5);
    __sync_add_and_fetch(v5 + 1, 1);
    if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
    {
      v9 = result;
      (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
      result = v9;
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
        result = v9;
      }
    }
    if ( __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
    {
      v10 = result;
      (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
      result = v10;
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
        return v10;
      }
    }
  }
  else
  {
    *result = a2;
    result[1] = a3;
    result[2] = a4;
    result[3] = v6;
    result[4] = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x1364de0 (size: 830 bytes)
// Symbol:    sub_1364DE0
// Demangled: sub_1364DE0
// ============================================================================
int *sub_1364DE0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_2118670);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118670, &unk_20D1280);
  dword_2118674 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2118678 = v0;
  dword_211867C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118680 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118690 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_21186A0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_21186B0 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( g4_guard_fa00a62688[0] == 0 )
  {
    g4_guard_fa00a62688[0] = 1;
    __cxa_atexit(
      (void (*)(void *))g4_noop_dtor,
      &boost::asio::detail::service_base<boost::asio::socket_acceptor_service<boost::asio::ip::tcp>>::id,
      &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1366a90 (size: 779 bytes)
// Symbol:    sub_1366A90
// Demangled: sub_1366A90
// ============================================================================
int *sub_1366A90()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_21186D0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21186D0, &unk_20D1280);
  dword_21186D4 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_21186D8 = v0;
  dword_21186DC = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_21186E0 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_21186F0 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118700 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118710 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x13671e0 (size: 95 bytes)
// Symbol:    sub_13671E0
// Demangled: sub_13671E0
// ============================================================================
int sub_13671E0()
{
  dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
  _cxa_guard_release((__guard *)&byte_20D3F80);
  return __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
}


// ============================================================================
// Address:   0x1367240 (size: 103 bytes)
// Symbol:    sub_1367240
// Demangled: sub_1367240
// ============================================================================
void sub_1367240(int a1)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;

  if ( a1 != 0 )
  {
    v2 = *(uint32_t **)(a1 + 12);
    if ( v2 != nullptr )
    {
      do
      {
        (*(void (**)(uint32_t *))(*v2 + 8))(v2);
        v2 = (uint32_t *)v2[4];
      }
      while ( v2 != nullptr );
      v3 = *(uint32_t **)(a1 + 12);
      if ( v3 != nullptr )
      {
        while ( 1 )
        {
          v4 = (uint32_t *)v3[4];
          (*(void (**)(uint32_t *))(*v3 + 4))(v3);
          *(uint32_t *)(a1 + 12) = (uint32_t)(uintptr_t)(v4);
          if ( v4 == nullptr )
            break;
          v3 = v4;
        }
      }
    }
    pthread_mutex_destroy((pthread_mutex_t *)(a1 + 4));
    operator delete((void *)a1);
  }
}


// ============================================================================
// Address:   0x13672a7 (size: 68 bytes)
// Symbol:    sub_13672A7
// Demangled: sub_13672A7
// ============================================================================
void __noreturn sub_13672A7()
{
  typedef int _g4_t_v0;
  typedef uint8_t _g4_t_v1[20];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "could not convert calendar time to UTC time", (int)(uintptr_t)(&v0));
  sub_19042E0(v1, (char *)&v0 + 1);
  std::terminate();
}


// ============================================================================
// Address:   0x13672ec (size: 81 bytes)
// Symbol:    sub_13672EC
// Demangled: sub_13672EC
// ============================================================================
void __noreturn sub_13672EC()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Day of month is not valid for year", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068D98);
  std::terminate();
}


// ============================================================================
// Address:   0x1367340 (size: 21 bytes)
// Symbol:    sub_1367340
// Demangled: sub_1367340
// ============================================================================
uint32_t *sub_1367340(uint32_t *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  return result;
}


// ============================================================================
// Address:   0x1367360 (size: 21 bytes)
// Symbol:    sub_1367360
// Demangled: sub_1367360
// ============================================================================
uint32_t *sub_1367360(uint32_t *result, int a2, int a3, int a4)
{
  *result = a2;
  result[1] = a3;
  result[2] = a4;
  return result;
}


// ============================================================================
// Address:   0x1367380 (size: 93 bytes)
// Symbol:    sub_1367380
// Demangled: sub_1367380
// ============================================================================
void *sub_1367380()
{
  *(uintptr_t *)(unk_2116354) = (uintptr_t)(0);
  _cxa_guard_release(g4_guard_d940a9bded);
  __cxa_atexit(
    (void (*)(void *))g4_dtor_thunk<rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>,
    &g4_rapidjson_NullValue,
    &unk_20D1280);
  return &g4_rapidjson_NullValue;
}


// ============================================================================
// Address:   0x13673dd (size: 89 bytes)
// Symbol:    sub_13673DD
// Demangled: sub_13673DD
// ============================================================================
void __noreturn sub_13673DD()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Day of month value is out of range 1..31", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_std::string::Destroy((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068D98);
  std::terminate();
}


// ============================================================================
// Address:   0x1367436 (size: 111 bytes)
// Symbol:    sub_1367436
// Demangled: sub_1367436
// ============================================================================
void __noreturn sub_1367436(int *a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v4)) > _g4_s0 ? (7u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 7u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *a1;
  v3 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4) + 1, a2, (int)(uintptr_t)(&v4));
  sub_19042E0(v5, (char *)&v4 + 1);
  g4_std::string::Destroy((char *)&v4 + 1);
  v5[2] = v2;
  v5[3] = v3;
  v5[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v5[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x13674b0 (size: 129 bytes)
// Symbol:    sub_13674B0
// Demangled: sub_13674B0
// ============================================================================
void __noreturn sub_13674B0(int *a1)
{
  int v1;
  int v2;
  typedef int _g4_t_v3;
  typedef uint32_t _g4_t_v4[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v3)) > _g4_s0 ? (7u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v4)) > _g4_s1 ? (12u + sizeof(_g4_t_v4)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 7u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  v1 = *a1;
  v2 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v3) + 1, (char *)&unk_1B15112, (int)(uintptr_t)(&v3));
  sub_19042E0(v4, (char *)&v3 + 1);
  g4_std::string::Destroy((char *)&v3 + 1);
  v4[2] = v1;
  v4[3] = v2;
  v4[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v4[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x1367531 (size: 89 bytes)
// Symbol:    sub_1367531
// Demangled: sub_1367531
// ============================================================================
void __noreturn sub_1367531()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Year is out of valid range: 1400..10000", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_std::string::Destroy((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DC8);
  std::terminate();
}


// ============================================================================
// Address:   0x136758a (size: 89 bytes)
// Symbol:    sub_136758A
// Demangled: sub_136758A
// ============================================================================
void __noreturn sub_136758A()
{
  typedef int _g4_t_v0;
  typedef int (**_g4_t_v1)(int);
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "Month number is out of range 1..12", (int)(uintptr_t)(&v0));
  sub_19042A0(&v1, (char *)&v0 + 1);
  g4_std::string::Destroy((char *)&v0 + 1);
  v1 = (int (**)(int))(uintptr_t)(&off_2068DB0);
  std::terminate();
}


// ============================================================================
// Address:   0x13675e4 (size: 76 bytes)
// Symbol:    sub_13675E4
// Demangled: sub_13675E4
// ============================================================================
void __noreturn sub_13675E4()
{
  typedef int _g4_t_v0;
  typedef uint8_t _g4_t_v1[20];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (3u + sizeof(_g4_t_v0)) > _g4_s0 ? (3u + sizeof(_g4_t_v0)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v1)) > _g4_s1 ? (8u + sizeof(_g4_t_v1)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v0 &v0 = *reinterpret_cast<_g4_t_v0 *>(_g4_sf + 3u);
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 8u);

  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v0) + 1, "boost::asio::streambuf too long", (int)(uintptr_t)(&v0));
  sub_1904260(v1, (char *)&v0 + 1);
  g4_std::string::Destroy((char *)&v0 + 1);
  std::terminate();
}


// ============================================================================
// Address:   0x13676f0 (size: 305 bytes)
// Symbol:    sub_13676F0
// Demangled: sub_13676F0
// ============================================================================
int sub_13676F0(int *a1, uint16_t a2, uint16_t a3, uint16_t a4)
{
  int16_t v6;
  int result;
  uint16_t v8;

  v6 = (14 - a3) / 12;
  result = ((uint16_t)(a2 + 4800 - v6) >> 2)
         + 365 * (uint16_t)(a2 + 4800 - v6)
         + a4
         + (153 * (uint16_t)(a3 + 12 * v6 - 3) + 2) / 5
         - (uint16_t)(a2 + 4800 - v6) / 0x64u
         + (uint16_t)(a2 + 4800 - v6) / 0x190u
         - 32045;
  *a1 = result;
  if ( a3 > 0xBu )
    goto LABEL_2;
  v8 = 30;
  result = 1 << a3;
  if ( ((1 << a3) & 0xA50) == 0 )
  {
    if ( (result & 4) == 0 )
    {
LABEL_2:
      v8 = 31;
      goto LABEL_3;
    }
    LOBYTE(v8) = 28;
    if ( (a2 & 3) == 0 )
    {
      LOBYTE(v8) = 29;
      result = 100 * (a2 / 0x64u);
      if ( a2 == (uint16_t)result )
      {
        result = 400 * (a2 / 0x190u);
        v8 = 29 - (a2 != (uint16_t)result);
      }
    }
  }
LABEL_3:
  if ( a4 > v8 )
    sub_13672EC();
  return result;
}


// ============================================================================
// Address:   0x1367830 (size: 189 bytes)
// Symbol:    sub_1367830
// Demangled: sub_1367830
// ============================================================================
int sub_1367830(int *a1)
{
  const char *v2;
  int v3;
  size_t n;
  int v5;

  if ( a1[3] != 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      1019,
      "rapidjson::GenericValue<Encoding, Allocator>::Member* rapidjson::GenericValue<Encoding, Allocator>::FindMember(con"
      "st Ch*) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<"
      "Encoding, Allocator>::Ch = char]",
      "IsObject ()");
  v2 = "events";
  do
    ++v2;
  while ( *v2 != 0 );
  v3 = *a1;
  n = v2 - "events";
  v5 = *a1 + 32 * a1[1];
  if ( v3 == v5 )
    return 0;
  while ( n != *(uint32_t *)(v3 + 4) || memcmp(*(const void **)v3, "events", n) != 0 )
  {
    v3 += 32;
    if ( v3 == v5 )
      return 0;
  }
  return v3;
}


// ============================================================================
// Address:   0x13678f0 (size: 241 bytes)
// Symbol:    sub_13678F0
// Demangled: sub_13678F0
// ============================================================================
void sub_13678F0(char *a1, int a2)
{
  char *v2;
  char *v3;
  char *v4;
  uint32_t *v5;
  bool v6;
  typedef char *_g4_t_v7;
  typedef void *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef void (*_g4_t_v10)(uint32_t, uint32_t *, uint32_t *, uint32_t);
  typedef uint32_t _g4_t_v11[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v11)) > _g4_s4 ? (24u + sizeof(_g4_t_v11)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  v2 = a1;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      v3 = v2 + 36;
      v9 = *((char **)v2 + 3);
      v4 = v2 + 52;
      do
      {
        while ( 1 )
        {
          v5 = *(uint32_t **)v4;
          if ( *(uint32_t *)v4 != 0 )
            break;
          v4 -= 8;
          if ( v3 == v4 + 8 )
            goto LABEL_9;
        }
        do
        {
          v6 = *v5 == 0;
          *(uint32_t *)v4 = *v5;
          if ( v6 )
            *((uint32_t *)v4 + 1) = 0;
          *v5 = 0;
          v10 = (void (*)(uint32_t, uint32_t *, uint32_t *, uint32_t))v5[1];
          v7 = v2;
          v11[0] = 0;
          v11[1] = (uint32_t)(uintptr_t)(sub_18F81E0(a2, v2));
          v10(0, v5, v11, 0);
          v5 = *(uint32_t **)v4;
          v2 = v7;
        }
        while ( *(uint32_t *)v4 != 0 );
        v4 -= 8;
      }
      while ( v3 != v4 + 8 );
LABEL_9:
      v8 = v2;
      pthread_mutex_destroy((pthread_mutex_t *)(v2 + 20));
      operator delete(v8);
      if ( v9 == nullptr )
        break;
      v2 = v9;
    }
  }
}


// ============================================================================
// Address:   0x13679f0 (size: 186 bytes)
// Symbol:    sub_13679F0
// Demangled: sub_13679F0
// ============================================================================
int sub_13679F0(int a1, uint8_t *a2, int a3, uint32_t *a4)
{
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int result;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v14)) > _g4_s1 ? (28u + sizeof(_g4_t_v14)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  if ( a1 == -1 )
  {
    a4[1] = (uint32_t)(uintptr_t)(sub_18F81E0(a3, a2));
    *a4 = 9;
    return 0;
  }
  else
  {
    *(uint32_t *)__errno(a3, a2) = 0;
    v14[0] = 1;
    v6 = ioctl(a1, 0x5421u, v14);
    v13 = (int)(uintptr_t)(sub_18F81E0(v8, v7));
    *a4 = *(uint32_t *)__errno(v10, v9);
    result = 0;
    a4[1] = v13;
    if ( v6 >= 0 )
    {
      a4[1] = (uint32_t)(uintptr_t)(sub_18F81E0(v11, v13));
      *a4 = 0;
      result = 1;
      *a2 |= 2u;
    }
  }
  return result;
}


// ============================================================================
// Address:   0x1367c00 (size: 639 bytes)
// Symbol:    sub_1367C00
// Demangled: sub_1367C00
// ============================================================================
int sub_1367C00(int a1, int64_t *a2, int64_t *a3)
{
  int v4;
  int64_t v6; // rax
  int64_t v7;
  int64_t v8;

  v7 = *a2;
  if ( (*(uint32_t *)a2 | (*((uint32_t *)a2 + 1) + 0x80000000)) != 0
    && (v4 = ~(uint32_t)v7, (~(uint32_t)v7 | HIDWORD(v7) ^ 0x7FFFFFFF) != 0) )
  {
    v8 = *a3;
    if ( v7 != 0x7FFFFFFFFFFFFFFELL )
    {
      if ( (*(uint32_t *)a3 | (HIDWORD(v8) + 0x80000000)) != 0 )
      {
        if ( (HIDWORD(v8) ^ 0x7FFFFFFF | ~(uint32_t)v8) != 0 )
        {
          if ( v8 != 0x7FFFFFFFFFFFFFFELL )
          {
            *(uint64_t *)a1 = v7 - v8;
            return a1;
          }
          v8 = 0x7FFFFFFFFFFFFFFELL;
        }
        else
        {
          v8 = 0x7FFFFFFFFFFFFFFFLL;
        }
      }
      else
      {
        v8 = 0x8000000000000000LL;
      }
    }
    if ( v7 == 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_17;
    if ( ((unsigned int)v8 | (HIDWORD(v8) + 0x80000000)) != 0 && (HIDWORD(v8) ^ 0x7FFFFFFF | ~(uint32_t)v8) != 0 )
    {
      if ( v8 == 0x7FFFFFFFFFFFFFFELL )
        goto LABEL_17;
      goto LABEL_23;
    }
  }
  else
  {
    v8 = *a3;
    if ( *a3 == 0x7FFFFFFFFFFFFFFELL )
      goto LABEL_17;
    v4 = ~(uint32_t)v7;
  }
  if ( (v4 | HIDWORD(v7) ^ 0x7FFFFFFF) == 0 )
  {
    if ( (~(uint32_t)v8 | HIDWORD(v8) ^ 0x7FFFFFFF) == 0 )
      goto LABEL_17;
    goto LABEL_15;
  }
  if ( ((unsigned int)v7 | (HIDWORD(v7) + 0x80000000)) != 0 )
  {
    if ( (~(uint32_t)v8 | HIDWORD(v8) ^ 0x7FFFFFFF) != 0 )
    {
      if ( ((unsigned int)v8 | (HIDWORD(v8) + 0x80000000)) != 0 )
      {
LABEL_23:
        v6 = v7 - v8;
        if ( v7 - v8 != 0x7FFFFFFFFFFFFFFELL )
          goto LABEL_24;
LABEL_17:
        *(uint32_t *)a1 = -2;
        *(uint32_t *)(a1 + 4) = 0x7FFFFFFF;
        return a1;
      }
LABEL_15:
      v6 = 0x7FFFFFFFFFFFFFFFLL;
      goto LABEL_24;
    }
  }
  else if ( ((unsigned int)v8 | (HIDWORD(v8) + 0x80000000)) == 0 )
  {
    goto LABEL_17;
  }
  v6 = 0x8000000000000000LL;
LABEL_24:
  if ( ((unsigned int)v6 | (HIDWORD(v6) + 0x80000000)) != 0 )
  {
    if ( (~(uint32_t)v6 | HIDWORD(v6) ^ 0x7FFFFFFF) == 0 )
    {
      *(uint32_t *)a1 = -1;
      *(uint32_t *)(a1 + 4) = 0x7FFFFFFF;
      return a1;
    }
    goto LABEL_17;
  }
  *(uint32_t *)a1 = 0;
  *(uint32_t *)(a1 + 4) = 0x80000000;
  return a1;
}


// ============================================================================
// Address:   0x1367f30 (size: 531 bytes)
// Symbol:    sub_1367F30
// Demangled: sub_1367F30
// ============================================================================
int sub_1367F30()
{
  int v0;
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int owner;
  int i;
  int *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint32_t _g4_t_v22[5];
  typedef uint32_t _g4_t_v23[5];
  typedef uint32_t _g4_t_v24[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (21u + sizeof(_g4_t_v18)) > _g4_s3 ? (21u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v19)) > _g4_s4 ? (24u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v20)) > _g4_s5 ? (28u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v21)) > _g4_s6 ? (32u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v22)) > _g4_s7 ? (36u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v23)) > _g4_s8 ? (56u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (76u + sizeof(_g4_t_v24)) > _g4_s9 ? (76u + sizeof(_g4_t_v24)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 21u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 56u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 76u);

  if ( g4_fnstatic_e8cfd5640c == 0 )
  {
    g4_fnstatic_e8cfd5640c = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v2 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v2 != 0 )
      {
        v15 = (int)(uintptr_t)(sub_18F81E0(v1, v0));
        g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v19), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v18));
        sub_19042E0(v22, &v19);
        g4_std::string::Destroy(&v19);
        v22[2] = v2;
        v22[3] = v15;
        v22[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v22[0] = ((uint32_t)(uintptr_t)&off_2049568);
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
  {
    v3 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v6 = v3;
  }
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    v17 = (int)(uintptr_t)(sub_18F81E0(v5, v4));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v20), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v18) + 1);
    sub_19042E0(v23, &v20);
    g4_std::string::Destroy(&v20);
    v23[2] = v6;
    v23[3] = v17;
    v23[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v23[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
  for ( i = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
        owner != 0;
        owner = *(v9 - 1) )
  {
    v9 = (int *)(owner + i - 4);
    i = *v9;
  }
  do
  {
    v10 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v13 = v10;
  }
  while ( v10 == 4 );
  if ( v10 != 0 )
  {
    v16 = (int)(uintptr_t)(sub_18F81E0(v12, v11));
    g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v21), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v18) + 2);
    sub_19042E0(v24, &v21);
    g4_std::string::Destroy(&v21);
    v24[2] = v13;
    v24[3] = v16;
    v24[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v24[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return 0;
}


// ============================================================================
// Address:   0x1368150 (size: 506 bytes)
// Symbol:    sub_1368150
// Demangled: sub_1368150
// ============================================================================
pthread_mutex_t *sub_1368150(int a1, int a2, uint32_t *a3, int *a4)
{
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t **v10;
  uint32_t *v11;
  int v12;
  int v13;
  int v14;
  char v15;
  typedef int _g4_t_v17;
  typedef char _g4_t_is_continuation;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_is_continuation)) > _g4_s1 ? (12u + sizeof(_g4_t_is_continuation)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v19)) > _g4_s2 ? (24u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v20)) > _g4_s3 ? (28u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v21)) > _g4_s4 ? (32u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v22)) > _g4_s5 ? (36u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v23)) > _g4_s6 ? (40u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v26)) > _g4_s9 ? (52u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v27)) > _g4_s10 ? (56u + sizeof(_g4_t_v27)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_is_continuation &is_continuation = *reinterpret_cast<_g4_t_is_continuation *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 24u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 28u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 32u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 36u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 40u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);

  is_continuation = 1;
  v19 = *a4;
  v20 = a4[1];
  v23 = a4[4];
  v21 = a4[2];
  v24 = a4[5];
  v6 = a4[3];
  v25 = a4[6];
  v7 = a4[8];
  v22 = v6;
  v26 = a4[7];
  v27 = v7;
  if ( v6 != 0 )
    is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)&v25);
  v8 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v8 != 0 )
  {
    v10 = *(uint32_t ***)(v8 + 4);
    if ( v10 != nullptr )
    {
      v11 = *v10;
      if ( *v10 != nullptr )
      {
        *v10 = nullptr;
        if ( *(uint8_t *)v11 > 0x4Fu )
        {
          *((uint8_t *)v11 + 80) = *(uint8_t *)v11;
          goto LABEL_10;
        }
        operator delete(v11);
      }
    }
  }
  v12 = (int)(uintptr_t)(operator new(0x51u));
  *(uint8_t *)(v12 + 80) = 80;
  v11 = (uint32_t *)v12;
LABEL_10:
  v13 = *(uint32_t *)a2;
  *v11 = 0;
  v11[1] = (uint32_t)(uintptr_t)(boost::asio::detail::reactive_socket_send_op<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::const_buffers_1,boost::asio::detail::transfer_all_t,boost::asio::detail::write_streambuf_handler<std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>>::do_complete);
  v11[2] = 0;
  v11[3] = 0;
  v17 = v13;
  v11[4] = (uint32_t)(uintptr_t)(sub_18F81E0(v9, v13));
  v11[5] = 0;
  v11[6] = (uint32_t)(uintptr_t)((int (*)(uint32_t *))boost::asio::detail::reactive_socket_send_op_base<boost::asio::const_buffers_1>::do_perform);
  v11[7] = v17;
  v14 = a3[1];
  v11[8] = *a3;
  v11[9] = v14;
  v11[11] = v19;
  v11[10] = 0;
  v11[12] = v20;
  v11[13] = v21;
  v11[14] = v22;
  v11[15] = v23;
  v11[16] = v24;
  v11[17] = v25;
  v11[18] = v26;
  v11[19] = v27;
  v15 = *(uint8_t *)(a2 + 4);
  if ( ((v15 & 0x10) == 0 || a3[1] != 0)
    && ((v15 & 3) != 0 || (uint8_t)sub_13679F0(*(uint32_t *)a2, (uint8_t *)(a2 + 4), (int)(uintptr_t)(a3), v11 + 3) != 0) )
  {
    return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::epoll_reactor::start_op(
             *(uint32_t *)(a1 + 20),
             1,
             *(uint32_t *)a2,
             (int *)(a2 + 8),
             (unsigned int)(uintptr_t)(v11),
             is_continuation,
             1));
  }
  else
  {
    return (pthread_mutex_t *)(uintptr_t)(boost::asio::detail::task_io_service::post_immediate_completion(
             *(pthread_mutex_t **)(*(uint32_t *)(a1 + 20) + 20),
             v11,
             is_continuation));
  }
}


// ============================================================================
// Address:   0x13684e0 (size: 407 bytes)
// Symbol:    sub_13684E0
// Demangled: sub_13684E0
// ============================================================================
void sub_13684E0(pthread_mutex_t **a1, int *a2)
{
  int v2;
  int v3;
  pthread_mutex_t *v4;
  char is_continuation; // di
  int v6;
  uint8_t **v7;
  uint8_t *v8;
  volatile int32_t *v9;
  bool v10;
  volatile int32_t *v11;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef volatile int32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v17)) > _g4_s4 ? (24u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v18)) > _g4_s5 ? (28u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v19)) > _g4_s6 ? (32u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v20)) > _g4_s7 ? (36u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v21)) > _g4_s8 ? (40u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v22)) > _g4_s9 ? (44u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v23)) > _g4_s10 ? (48u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v24)) > _g4_s11 ? (52u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v25)) > _g4_s12 ? (56u + sizeof(_g4_t_v25)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);

  v13 = *a2;
  v14 = a2[1];
  v15 = (volatile int32_t *)a2[2];
  if ( v15 != nullptr )
    __sync_add_and_fetch(v15 + 1, 1);
  v16 = a2[3];
  v17 = a2[4];
  v18 = (volatile int32_t *)a2[5];
  if ( v18 != nullptr )
    __sync_add_and_fetch(v18 + 1, 1);
  v2 = a2[11];
  v19 = a2[6];
  v20 = a2[7];
  v21 = a2[8];
  v3 = a2[12];
  v22 = a2[9];
  v24 = v2;
  v4 = *a1;
  v23 = a2[10];
  v25 = v3;
  is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)&v21);
  v6 = *(uint32_t *)_emutls_get_address(&unk_20BABFC);
  if ( v6 != 0 )
  {
    v7 = *(uint8_t ***)(v6 + 4);
    if ( v7 != nullptr )
    {
      v8 = *v7;
      if ( *v7 != nullptr )
      {
        *v7 = nullptr;
        if ( *v8 > 0x3Fu )
        {
          v8[64] = *v8;
          goto LABEL_12;
        }
        operator delete(v8);
      }
    }
  }
  v8 = (uint8_t *)operator new(0x41u);
  v8[64] = 64;
LABEL_12:
  *(uint32_t *)v8 = 0;
  *((uint32_t *)v8 + 1) = (uint32_t)(uintptr_t)(boost::asio::detail::completion_handler<boost::asio::detail::binder1<boost::asio::detail::connect_op<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>,boost::asio::ip::basic_resolver_iterator<boost::asio::ip::tcp>,boost::asio::detail::default_connect_condition,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>,boost::system::error_code::Self>>::do_complete);
  *((uint32_t *)v8 + 3) = v13;
  *((uint32_t *)v8 + 2) = 0;
  *((uint32_t *)v8 + 4) = v14;
  v9 = v15;
  v10 = v15 == nullptr;
  *((uint32_t *)v8 + 5) = (uint32_t)(uintptr_t)(v15);
  if ( !v10 )
    __sync_add_and_fetch(v9 + 1, 1);
  *((uint32_t *)v8 + 6) = v16;
  *((uint32_t *)v8 + 7) = v17;
  v11 = v18;
  v10 = v18 == nullptr;
  *((uint32_t *)v8 + 8) = (uint32_t)(uintptr_t)(v18);
  if ( !v10 )
    __sync_add_and_fetch(v11 + 1, 1);
  *((uint32_t *)v8 + 9) = v19;
  *((uint32_t *)v8 + 10) = v20;
  *((uint32_t *)v8 + 11) = v21;
  *((uint32_t *)v8 + 12) = v22;
  *((uint32_t *)v8 + 13) = v23;
  v12 = v25;
  *((uint32_t *)v8 + 14) = v24;
  *((uint32_t *)v8 + 15) = v12;
  boost::asio::detail::task_io_service::post_immediate_completion(v4, v8, is_continuation);
  boost::detail::shared_count::Destroy(&v18);
  boost::detail::shared_count::Destroy(&v15);
}


// ============================================================================
// Address:   0x1369440 (size: 783 bytes)
// Symbol:    sub_1369440
// Demangled: sub_1369440
// ============================================================================
uint32_t *sub_1369440(uint32_t *a1)
{
  struct tm *v1;
  uint16_t tm_mday;
  uint16_t v3;
  uint16_t v4; // si
  int tm_min;
  int tm_sec;
  int tm_hour;
  uint64_t v8; // kr08_8
  int16_t v9;
  int v11;
  uint16_t v12;
  typedef __suseconds_t _g4_t_tv_usec;
  typedef int _g4_t_v14;
  typedef int16_t _g4_t_tm_mon;
  typedef int16_t _g4_t_tm_year;
  typedef uint64_t _g4_t_v18;
  typedef time_t _g4_t_timer;
  typedef unsigned int _g4_t_v20;
  typedef struct timeval _g4_t_tv;
  typedef uint64_t _g4_t_v22 __attribute__((aligned(1)));
  typedef struct tm _g4_t_tp;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_tv_usec)) > _g4_s0 ? (0u + sizeof(_g4_t_tv_usec)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_tm_mon)) > _g4_s2 ? (16u + sizeof(_g4_t_tm_mon)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_tm_year)) > _g4_s3 ? (18u + sizeof(_g4_t_tm_year)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v18)) > _g4_s4 ? (24u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_timer)) > _g4_s5 ? (44u + sizeof(_g4_t_timer)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v20)) > _g4_s6 ? (48u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_tv)) > _g4_s7 ? (52u + sizeof(_g4_t_tv)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v22)) > _g4_s8 ? (60u + sizeof(_g4_t_v22)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_tp)) > _g4_s9 ? (68u + sizeof(_g4_t_tp)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_tv_usec &tv_usec = *reinterpret_cast<_g4_t_tv_usec *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_tm_mon &tm_mon = *reinterpret_cast<_g4_t_tm_mon *>(_g4_sf + 16u);
  _g4_t_tm_year &tm_year = *reinterpret_cast<_g4_t_tm_year *>(_g4_sf + 18u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 24u);
  _g4_t_timer &timer = *reinterpret_cast<_g4_t_timer *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_tv &tv = *reinterpret_cast<_g4_t_tv *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 60u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 68u);

  gettimeofday(&tv, nullptr);
  timer = tv.tv_sec;
  tv_usec = tv.tv_usec;
  v1 = gmtime_r(&timer, &tp);
  if ( v1 == nullptr )
    sub_13672A7();
  tm_mday = v1->tm_mday;
  v14 = tm_mday;
  if ( tm_mday == 0 || tm_mday > 0x1Fu )
    sub_13673DD();
  tm_mon = v1->tm_mon;
  v3 = tm_mon + 1;
  if ( tm_mon == -1 || v3 > 0xCu )
    sub_136758A();
  tm_year = v1->tm_year;
  v4 = tm_year + 1900;
  if ( (uint16_t)(tm_year + 1900) <= 0x577u || v4 > 0x2710u )
    sub_1367531();
  if ( v3 <= 0xBu )
  {
    v11 = 1 << v3;
    v12 = 30;
    if ( (v11 & 0xA50) == 0 )
    {
      if ( (v11 & 4) == 0 )
        goto LABEL_9;
      LOBYTE(v12) = 28;
      if ( (((uint8_t)tm_year + 108) & 3) == 0 )
      {
        v12 = 29;
        if ( v4 == 100 * (v4 / 0x64u) )
          v12 = 29 - (v4 % 0x190u != 0);
      }
    }
    if ( tm_mday > v12 )
      sub_13672EC();
  }
LABEL_9:
  tm_min = v1->tm_min;
  tm_sec = v1->tm_sec;
  tm_hour = v1->tm_hour;
  v18 =g4_m128_lane<uint64_t>(_mm_cvtsi32_si128(tv_usec), 0);
  if ( tm_min < 0 || tm_hour < 0 || tm_sec < 0 )
    v8 = 1000000
       * (-3600LL * (int)__builtin_abs(tm_hour) - 60LL * (int)__builtin_abs(tm_min) - (int)__builtin_abs(tm_sec))
       - v18;
  else
    v8 = v18 + 1000000 * (tm_sec + 60LL * tm_min + 3600LL * tm_hour);
  v22 = v8;
  v9 = (14 - (uint16_t)(tm_mon + 1)) / 12;
  v20 = ((uint16_t)(tm_year + 6700 - v9) >> 2)
      + 365 * (uint16_t)(tm_year + 6700 - v9)
      + v14
      + (153 * (uint16_t)(tm_mon + 12 * v9 - 2) + 2) / 5
      - (uint16_t)(tm_year + 6700 - v9) / 0x64u
      + (uint16_t)(tm_year + 6700 - v9) / 0x190u
      - 32045;
  g4_boost_counted_time_rep_construct(
    a1,
    &v20,
    (int)(uintptr_t)(&v22));
  return a1;
}


// ============================================================================
// Address:   0x136a3e0 (size: 379 bytes)
// Symbol:    sub_136A3E0
// Demangled: sub_136A3E0
// ============================================================================
char *sub_136A3E0(int a1)
{
  char *result;
  int v3;
  unsigned int v4;
  char *src;
  unsigned int v6;
  int v7;
  void *dest;
  size_t n;
  int v10;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v11;
  size_t v12;
  int v13;
  uint32_t *v14;

  result = *(char **)(a1 + 12);
  v3 = (int)(uintptr_t)(result + 16);
  if ( (unsigned int)(uintptr_t)(result + 16) >= *(uint32_t *)(a1 + 16) )
  {
    v4 = *(uint32_t *)(a1 + 20);
    src = *(char **)(a1 + 8);
    v13 = result - src;
    v6 = result - src + 16;
    v11 = *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1;
    if ( v6 < 2 * v4 )
      v6 = 2 * v4;
    if ( src != nullptr )
    {
      if ( v4 < v6 )
      {
        v14 = *(uint32_t **)v11;
        v7 = *(uint32_t *)(*(uint32_t *)v11 + 4);
        if ( src == (char *)(*(uint32_t *)v11 - v4 + v7 + 12)
          && (unsigned int)(v10 = v7 + ((v6 - v4 + 3) & 0xFFFFFFFC)) <= *v14 )
        {
          v14[1] = v10;
          if ( ((uint8_t)(uintptr_t)(src) & 3) != 0 )
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              294,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "((uintptr_t) originalPtr & 3) == 0");
        }
        else
        {
          v12 = *(uint32_t *)(a1 + 20);
          dest = (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v11, v6);
          n = v12;
          if ( dest == nullptr )
          {
            __assert2(
              "../../../../../lib/rapidjson/rapidjson.h",
              301,
              "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = "
              "rapidjson::CrtAllocator, size_t = unsigned int]",
              "newBuffer != 0");
            n = v12;
            dest = nullptr;
          }
          src = (char *)memcpy(dest, src, n);
        }
      }
    }
    else
    {
      src = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
                      *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)a1,
                      v6);
    }
    *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(src);
    result = &src[v13];
    *(uint32_t *)(a1 + 20) = v6;
    *(uint32_t *)(a1 + 16) = (uint32_t)(uintptr_t)(&src[v6]);
    v3 = (int)(uintptr_t)(&src[v13 + 16]);
  }
  *(uint32_t *)(a1 + 12) = v3;
  return result;
}


// ============================================================================
// Address:   0x136a560 (size: 226 bytes)
// Symbol:    sub_136A560
// Demangled: sub_136A560
// ============================================================================
char *sub_136A560(int a1, uint32_t *a2, int a3)
{
  uint8_t *v4;
  char v6;
  char v7;
  char v8;
  char v9;
  char *result;

  v4 = (uint8_t *)*a2;
  if ( *(uint8_t *)*a2 != 102 )
  {
    __assert2(
      "../../../../../lib/rapidjson/reader.h",
      466,
      "void rapidjson::GenericReader<Encoding, Allocator>::ParseFalse(Stream&, Handler&) [with unsigned int parseFlags = "
      "0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Handler = rapidjson::GenericDocument<rapidjson::U"
      "TF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "stream.Peek () == 'f'");
    v4 = (uint8_t *)*a2;
  }
  *a2 = (uint32_t)(uintptr_t)(v4 + 1);
  v6 = v4[1];
  *a2 = (uint32_t)(uintptr_t)(v4 + 2);
  if ( v6 != 97
    || (v7 = v4[2], *a2 = (uint32_t)(uintptr_t)(v4 + 3), v7 != 108)
    || (v8 = v4[3], *a2 = (uint32_t)(uintptr_t)(v4 + 4), v8 != 115)
    || (v9 = v4[4], *a2 = (uint32_t)(uintptr_t)(v4 + 5), v9 != 101) )
  {
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)("Invalid value");
    *(uint32_t *)(a1 + 68) = *a2 - a2[1] - 1;
    longjmp((struct __jmp_buf_tag *)(a1 + 24), 1);
  }
  result = sub_136A3E0(a3 + 16);
  if ( result != nullptr )
    *((uint32_t *)result + 3) = 257;
  return result;
}


// ============================================================================
// Address:   0x136b0b0 (size: 2071 bytes)
// Symbol:    sub_136B0B0
// Demangled: sub_136B0B0
// ============================================================================
int sub_136B0B0(uint32_t *a1, uint32_t *a2, int a3, int a4)
{
  uint32_t *v4;
  unsigned int v5;
  int v6;
  char *v7;
  uint32_t *v8;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  uint32_t *v15;
  uint32_t *i;
  int v17;
  int v18;
  uint32_t *v19;
  unsigned int v20;
  uint8_t *v21;
  uint8_t *v22;
  uint32_t *v23;
  int v24;
  uint8_t *v25;
  int *v26;
  unsigned int v27;
  unsigned int v28;
  boost::asio::basic_streambuf<std::allocator<char>> *v29;
  uint32_t *v30;
  int v31;
  uint32_t *v32;
  int v33;
  unsigned int v34;
  unsigned int v35;
  unsigned int v36;
  uint32_t *v37;
  unsigned int v38;
  uint32_t *v39;
  int v40;
  int *v41;
  int v42;
  unsigned int v43;
  int v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef uint8_t *_g4_t_v50;
  typedef uint32_t *_g4_t_v51;
  typedef const char *_g4_t_v52;
  typedef int _g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t *_g4_t_v58;
  typedef uint32_t *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef uint8_t *_g4_t_v62;
  typedef signed int _g4_t_v63;
  typedef uint32_t *_g4_t_v64;
  typedef unsigned int _g4_t_v65;
  typedef unsigned int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef unsigned int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef uint32_t _g4_t_v75[4];
  typedef uint32_t _g4_t_v76[2];
  typedef uint32_t _g4_t_v77[5];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v45)) > _g4_s0 ? (8u + sizeof(_g4_t_v45)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v46)) > _g4_s1 ? (12u + sizeof(_g4_t_v46)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v47)) > _g4_s2 ? (16u + sizeof(_g4_t_v47)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v48)) > _g4_s3 ? (20u + sizeof(_g4_t_v48)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v49)) > _g4_s4 ? (24u + sizeof(_g4_t_v49)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v50)) > _g4_s5 ? (28u + sizeof(_g4_t_v50)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v51)) > _g4_s6 ? (32u + sizeof(_g4_t_v51)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v52)) > _g4_s7 ? (36u + sizeof(_g4_t_v52)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v54)) > _g4_s8 ? (44u + sizeof(_g4_t_v54)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v55)) > _g4_s9 ? (48u + sizeof(_g4_t_v55)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v56)) > _g4_s10 ? (52u + sizeof(_g4_t_v56)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v57)) > _g4_s11 ? (56u + sizeof(_g4_t_v57)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v58)) > _g4_s12 ? (60u + sizeof(_g4_t_v58)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v60)) > _g4_s13 ? (68u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v61)) > _g4_s14 ? (72u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v62)) > _g4_s15 ? (76u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v63)) > _g4_s16 ? (80u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v64)) > _g4_s17 ? (84u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v65)) > _g4_s18 ? (88u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v66)) > _g4_s19 ? (92u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v67)) > _g4_s20 ? (96u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v68)) > _g4_s21 ? (100u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v69)) > _g4_s22 ? (104u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v70)) > _g4_s23 ? (108u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (112u + sizeof(_g4_t_v71)) > _g4_s24 ? (112u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (116u + sizeof(_g4_t_v72)) > _g4_s25 ? (116u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (120u + sizeof(_g4_t_v73)) > _g4_s26 ? (120u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (124u + sizeof(_g4_t_v74)) > _g4_s27 ? (124u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (128u + sizeof(_g4_t_v75)) > _g4_s28 ? (128u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v76)) > _g4_s29 ? (144u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (152u + sizeof(_g4_t_v77)) > _g4_s30 ? (152u + sizeof(_g4_t_v77)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 12u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 16u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 20u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 24u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 28u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 52u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 56u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 68u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 72u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 76u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 80u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 88u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 92u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 96u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 100u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 104u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 108u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 112u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 116u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 120u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 124u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 128u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 144u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 152u);

  a1[3] = a4;
  if ( a4 != 1 )
  {
    v4 = (uint32_t *)a1[1];
    v5 = a3 + v4[5];
    if ( v5 > v4[6] )
      v5 = v4[6];
    if ( (v4[5] = v5, v4[3] = v5, *a2 != 0) && boost::system::error_code::unspecified_bool_true != nullptr || a3 == 0 )
    {
      v57 = a1[4];
      goto LABEL_7;
    }
  }
  v10 = a1[1];
  v11 = *(uint32_t *)(v10 + 8);
  v12 = *(uint32_t *)(v10 + 20);
  v63 = v12 - v11;
  v13 = v76;
  v76[1] = v12 - v11;
  if ( v12 == v11 )
    v13 = v77;
  v61 = v11;
  v60 = v13;
  v76[0] = v11;
  v14 = a1[4];
  if ( v14 <= 0 )
  {
    if ( v14 != 0 )
    {
      v65 = -v14;
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        406,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "position_ >= abs_n && \"iterator out of bounds\"");
      if ( v60 == v76 )
      {
        v57 = 0;
        v55 = (uint32_t *)v63;
      }
      else
      {
        v57 = 0;
        v55 = (uint32_t *)v63;
        v66 = 0;
        v37 = v60;
        do
        {
          if ( v37 != v76 )
          {
            v38 = *(v37 - 1);
            v39 = v37 - 2;
            v40 = *(v37 - 2);
            if ( v38 != 0 )
            {
              v37 -= 2;
              v66 = v38;
              v55 = (uint32_t *)v38;
              v61 = v40;
            }
            else
            {
              v41 = (int *)(v37 - 4);
              v64 = v37;
              while ( v39 != v76 )
              {
                v42 = *v41;
                v41 -= 2;
                v43 = v41[3];
                v39 -= 2;
                if ( v43 != 0 )
                {
                  v44 = v42;
                  v66 = v43;
                  v37 = v39;
                  v55 = (uint32_t *)v43;
                  v61 = v44;
                  goto LABEL_103;
                }
              }
              v37 = v64;
            }
          }
LABEL_103:
          if ( v65 <= v66 )
          {
            v60 = v37;
            v57 -= v65;
            v21 = (uint8_t *)(v66 - v65);
            goto LABEL_26;
          }
          v65 -= v66;
          v57 -= v66;
        }
        while ( v37 != v76 );
        v60 = v37;
        v21 = nullptr;
        if ( v65 == 0 )
          goto LABEL_26;
      }
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        424,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "abs_n == 0 && \"iterator out of bounds\"");
      v60 = v76;
      v21 = nullptr;
    }
    else
    {
      v57 = 0;
      v55 = (uint32_t *)v63;
      v21 = nullptr;
    }
  }
  else
  {
    if ( v13 == v77 )
    {
      v50 = (uint8_t *)(v77);
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        371,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = boo"
        "st::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
        "current_ != end_ && \"iterator out of bounds\"");
    }
    if ( v63 > v14 )
    {
      v19 = v60;
      v55 = (uint32_t *)v63;
      v20 = 0;
LABEL_25:
      v21 = (uint8_t *)v14;
      v57 = v14 + v20;
      v60 = v19;
    }
    else
    {
      v14 -= v63;
      v15 = v60 + 2;
      if ( v60 + 2 == v77 )
      {
        v36 = v63;
      }
      else
      {
        v66 = (unsigned int)(uintptr_t)(v77);
        v65 = v63;
        for ( i = v60; ; i = v19 )
        {
          v17 = i[2];
          v18 = i[3];
          v19 = v15;
          v61 = v17;
          if ( v14 < v18 )
          {
            v20 = v65;
            v55 = (uint32_t *)v18;
            goto LABEL_25;
          }
          v14 -= v18;
          v65 += v18;
          v15 += 2;
          if ( v77 == v15 )
            break;
        }
        v36 = v65;
      }
      if ( v14 != 0 )
      {
        v50 = (uint8_t *)(v77);
        __assert2(
          "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
          394,
          "void boost::asio::buffers_iterator<BufferSequence, ByteType>::advance(std::ptrdiff_t) [with BufferSequence = b"
          "oost::asio::const_buffers_1, ByteType = char, std::ptrdiff_t = int]",
          "n == 0 && \"iterator out of bounds\"");
        v57 = v36;
        v60 = v77;
        v55 = nullptr;
        v21 = nullptr;
      }
      else
      {
        v60 = v77;
        v57 = v36;
        v21 = nullptr;
        v55 = nullptr;
      }
      v61 = 0;
    }
  }
LABEL_26:
  v22 = (uint8_t *)a1[2];
  v58 = v22;
  if ( *((int *)v22 - 1) < 0 )
  {
    v62 = &v22[*((uint32_t *)v22 - 3)];
  }
  else
  {
    v50 = v21;
    sub_19397C0(a1 + 2);
    v21 = v50;
    v58 = (uint8_t *)a1[2];
    v62 = &v58[*((uint32_t *)v58 - 3)];
    if ( *((int *)v58 - 1) >= 0 )
    {
      sub_19397C0(a1 + 2);
      v21 = v50;
      v58 = (uint8_t *)a1[2];
    }
  }
  v52 = "current_ != end_ && \"iterator out of bounds\"";
LABEL_30:
  v56 = (uint32_t *)(v21);
  while ( 1 )
  {
    if ( v63 == v57 )
      goto LABEL_65;
    if ( v62 == v58 )
    {
LABEL_48:
      v57 += *(uint32_t *)(a1[2] - 12);
      a1[4] = v57;
      v28 = 0;
      goto LABEL_49;
    }
    if ( *((uint8_t *)v56 + v61) == *v58 )
      break;
    v54 = v57 + 1;
LABEL_54:
    if ( v60 == v77 )
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        316,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio::co"
        "nst_buffers_1, ByteType = char]",
        "current_ != end_ && \"iterator out of bounds\"");
    v56 = (uint32_t *)((char *)v56 + 1);
    v57 = v54;
    if ( v56 == v55 )
    {
      if ( v60 + 2 == v77 )
      {
LABEL_63:
        v21 = nullptr;
        v60 = v77;
      }
      else
      {
        v61 = v60[2];
        v55 = (uint32_t *)v60[3];
        if ( v55 != nullptr )
        {
          v32 = (uint32_t *)v60[3];
          v30 = v60 + 2;
        }
        else
        {
          v30 = v60 + 2;
          v31 = v60[2];
          do
          {
            v30 += 2;
            if ( v30 == v77 )
            {
              v61 = v31;
              goto LABEL_63;
            }
            v31 = *v30;
            v32 = (uint32_t *)v30[1];
          }
          while ( v32 == nullptr );
          v61 = *v30;
        }
        v21 = nullptr;
        v60 = v30;
        v55 = v32;
      }
      goto LABEL_30;
    }
  }
  v23 = v56;
  v54 = v57 + 1;
  v66 = v57 + 1;
  v65 = (unsigned int)(uintptr_t)(v60);
  v64 = v55;
  v24 = v61;
  v25 = v58;
  while ( 1 )
  {
    if ( (uint32_t *)v65 == v77 )
    {
      v51 = v23;
      v50 = v25;
      __assert2(
        "../../../../../lib/glitch/include/boost/asio/buffers_iterator.hpp",
        316,
        "void boost::asio::buffers_iterator<BufferSequence, ByteType>::increment() [with BufferSequence = boost::asio::co"
        "nst_buffers_1, ByteType = char]",
        "current_ != end_ && \"iterator out of bounds\"");
      v25 = v50;
      v23 = v51;
    }
    v23 = (uint32_t *)((char *)v23 + 1);
    if ( v23 != v64 )
      goto LABEL_35;
    v26 = (int *)(v65 + 8);
    if ( (uint32_t *)(v65 + 8) != v77 )
    {
      v27 = v65;
      v65 += 8;
      v24 = *(uint32_t *)(v27 + 8);
      v64 = *(uint32_t **)(v27 + 12);
      v23 = nullptr;
      if ( v64 == nullptr )
      {
        do
        {
          v26 += 2;
          if ( v26 == (int *)(uintptr_t)(v77) )
          {
            v65 = (unsigned int)(uintptr_t)(v77);
            v23 = nullptr;
            goto LABEL_47;
          }
          v24 = *v26;
        }
        while ( v26[1] == 0 );
        v64 = (uint32_t *)v26[1];
        v65 = (unsigned int)(uintptr_t)(v26);
        v23 = nullptr;
      }
LABEL_35:
      if ( ++v25 == v62 )
        goto LABEL_48;
      goto LABEL_36;
    }
    v64 = v23;
    v65 = (unsigned int)(uintptr_t)(v77);
    v23 = nullptr;
LABEL_47:
    if ( ++v25 == v62 )
      goto LABEL_48;
LABEL_36:
    if ( v63 == v66 )
      break;
    ++v66;
    if ( *((uint8_t *)v23 + v24) != *v25 )
      goto LABEL_54;
  }
  if ( v58 == v25 )
    goto LABEL_54;
LABEL_65:
  v29 = (boost::asio::basic_streambuf<std::allocator<char>> *)a1[1];
  if ( *((uint32_t *)v29 + 5) - *((uint32_t *)v29 + 2) == *((uint32_t *)v29 + 8) )
  {
    v57 = -1;
    v28 = 0;
    a1[4] = -1;
    goto LABEL_49;
  }
  v73 = 0x10000;
  v67 = 512;
  a1[4] = v57;
  v33 = *((uint32_t *)v29 + 5) - *((uint32_t *)v29 + 2);
  v74 = *((uint32_t *)v29 + 8) - v33;
  v34 = v74;
  if ( v74 >= 0x10000 )
    v34 = 0x10000;
  v35 = *((uint32_t *)v29 + 11) - *((uint32_t *)v29 + 9) - v33;
  v71 = v35;
  v28 = v35;
  if ( v35 <= 0x200 )
  {
    v28 = 512;
    if ( v34 < 0x200 )
      v28 = v34;
    if ( v28 == 0 )
      goto LABEL_49;
LABEL_51:
    boost::asio::basic_streambuf<std::allocator<char>>::reserve(v29, v28);
    v77[0] = *((uint32_t *)v29 + 5);
    v77[1] = v28;
    return boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>::async_read_some<boost::asio::mutable_buffers_1,boost::asio::detail::read_until_delim_string_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>>(
             *a1,
             v77,
             a1);
  }
  else
  {
    if ( v35 > v34 )
      v28 = v34;
    if ( v28 != 0 )
      goto LABEL_51;
LABEL_49:
    if ( a4 != 0 )
    {
      v29 = (boost::asio::basic_streambuf<std::allocator<char>> *)a1[1];
      goto LABEL_51;
    }
LABEL_7:
    if ( v57 == -1 )
    {
      if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
        sub_13671E0();
      v75[0] = 3;
      v75[1] = (uint32_t)(uintptr_t)(&dword_20D3F88);
    }
    else
    {
      v6 = a2[1];
      v75[0] = *a2;
      v75[1] = v6;
    }
    v7 = (char *)a1[5];
    v8 = (uint32_t *)(a1[6] + a1[7]);
    if ( ((uint8_t)(uintptr_t)(v7) & 1) != 0 )
      v7 = *(char **)&v7[*v8 - 1];
    return ((int (*)(uint32_t *, uint32_t *, int, int, int, int, int, uint8_t *, uint32_t *, const char *, uint32_t *, int, uint32_t *, uint32_t *, int, uint8_t *, uint32_t *, uint32_t *, int, uint8_t *, signed int, uint32_t *, unsigned int, unsigned int, int, int, int, int, unsigned int, int, int, unsigned int))v7)(
             v8,
             v75,
             v45,
             v46,
             v47,
             v48,
             v49,
             v50,
             v51,
             v52,
             a2,
             v54,
             v55,
             v56,
             v57,
             v58,
             a1,
             v60,
             v61,
             v62,
             v63,
             v64,
             v65,
             v66,
             v67,
             v68,
             v69,
             v70,
             v71,
             v72,
             v73,
             v74);
  }
}


// ============================================================================
// Address:   0x136c860 (size: 332 bytes)
// Symbol:    sub_136C860
// Demangled: sub_136C860
// ============================================================================
int sub_136C860(
        int a1,
        char **a2,
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a3)
{
  char *i;
  char v5;
  char v6;
  const char *v7;
  char *j;
  char v9;
  struct __jmp_buf_tag *env;

  *(uint32_t *)(a1 + 64) = 0;
  *(uint32_t *)(a1 + 68) = 0;
  env = (struct __jmp_buf_tag *)(a1 + 24);
  if ( setjmp(*reinterpret_cast<jmp_buf *>((a1 + 24))) != 0 )
  {
    *(uint32_t *)(a1 + 12) = *(uint32_t *)(a1 + 8);
    return 0;
  }
  for ( i = *a2; ; ++i )
  {
    v5 = *i;
    if ( *i != 32 && v5 != 10 && v5 != 13 && v5 != 9 )
      break;
  }
  *a2 = i;
  v6 = *i;
  if ( *i == 0 )
  {
    v7 = "Text only contains white space(s)";
LABEL_12:
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)(v7);
    *(uint32_t *)(a1 + 68) = *a2 - a2[1];
    longjmp(env, 1);
  }
  if ( v6 == 91 )
  {
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseArray<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  else
  {
    if ( v6 != 123 )
    {
      v7 = "Expect either an object or array at root";
      goto LABEL_12;
    }
    rapidjson::GenericReader<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::ParseObject<0u,rapidjson::GenericStringStream<rapidjson::UTF8<char>>,rapidjson::GenericDocument<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
      a1,
      (int)(uintptr_t)(a2),
      a3);
  }
  for ( j = *a2; ; ++j )
  {
    v9 = *j;
    if ( *j != 32 && v9 != 10 && v9 != 13 && v9 != 9 )
      break;
  }
  *a2 = j;
  if ( *j != 0 )
  {
    v7 = "Nothing should follow the root object or array.";
    goto LABEL_12;
  }
  return 1;
}


// ============================================================================
// Address:   0x136c9b0 (size: 558 bytes)
// Symbol:    sub_136C9B0
// Demangled: sub_136C9B0
// ============================================================================
rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *sub_136C9B0(
        rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *a1,
        char *a2)
{
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v3;
  int v4;
  int v5;
  uint32_t *v6;
  int v7;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v8;
  uint32_t *v9;
  uint32_t *v10;
  typedef int _g4_t_v12;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v13;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v14;
  typedef char *_g4_t_v15[4];
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v16;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef unsigned int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v12)) > _g4_s0 ? (12u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v16)) > _g4_s4 ? (32u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v17)) > _g4_s5 ? (36u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v18)) > _g4_s6 ? (40u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v19)) > _g4_s7 ? (44u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v20)) > _g4_s8 ? (48u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v21)) > _g4_s9 ? (52u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v22)) > _g4_s10 ? (96u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v23)) > _g4_s11 ? (100u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 96u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 100u);

  v15[0] = a2;
  v15[1] = a2;
  if ( a1 != nullptr )
    *((uint32_t *)a1 + 3) = 0;
  v16 = nullptr;
  v17 = nullptr;
  v18 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 256;
  v3 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)opNew(0x14u);
  *(uint32_t *)v3 = 0;
  *((uint32_t *)v3 + 1) = 2048;
  *((uint32_t *)v3 + 2) = 0;
  *((uint32_t *)v3 + 3) = 0;
  *((uint32_t *)v3 + 4) = 0;
  v4 = opNew(1u);
  v5 = *((uint32_t *)v3 + 1);
  *((uint32_t *)v3 + 3) = v4;
  *((uint32_t *)v3 + 4) = v4;
  v12 = v5;
  v6 = (uint32_t *)(malloc(v5 + 12));
  v6[1] = 0;
  *v6 = v12;
  v6[2] = *(uint32_t *)v3;
  *(uint32_t *)v3 = (uint32_t)(uintptr_t)(v6);
  v16 = v3;
  v17 = v3;
  v18 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v3, v21));
  v19 = v18;
  v20 = v21 + v18;
  v22 = 0;
  v23 = 0;
  if ( (uint8_t)sub_136C860((int)(uintptr_t)(&v16), v15, a1) != 0 )
  {
    v7 = *((uint32_t *)a1 + 7);
    if ( v7 - *((uint32_t *)a1 + 6) != 16 )
    {
      __assert2(
        "../../../../../lib/rapidjson/document.h",
        1135,
        "rapidjson::GenericDocument<Encoding, Allocator>& rapidjson::GenericDocument<Encoding, Allocator>::ParseStream(St"
        "ream&) [with unsigned int parseFlags = 0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Encoding"
        " = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericDocument<Encoding, Allocat"
        "or> = rapidjson::GenericDocument<rapidjson::UTF8<> >]",
        "stack_.GetSize () == sizeof (ValueType)");
      v7 = *((uint32_t *)a1 + 7);
      if ( (unsigned int)(v7 - *((uint32_t *)a1 + 6)) <= 0xF )
      {
        __assert2(
          "../../../../../lib/rapidjson/internal/stack.h",
          83,
          "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = rapidjson::GenericValue<rapidjson::UTF8<> >, A"
          "llocator = rapidjson::MemoryPoolAllocator<>, size_t = unsigned int]",
          "GetSize () >= count * sizeof (T)");
        v7 = *((uint32_t *)a1 + 7);
      }
    }
    *((uint32_t *)a1 + 7) = v7 - 16;
    *(uint32_t *)a1 = *(uint32_t *)(v7 - 16);
    *((uint32_t *)a1 + 1) = *(uint32_t *)(v7 - 12);
    *((uint32_t *)a1 + 2) = *(uint32_t *)(v7 - 8);
    *((uint32_t *)a1 + 3) = *(uint32_t *)(v7 - 4);
    *(uint32_t *)(v7 - 4) = 0;
    *((uint32_t *)a1 + 10) = 0;
    *((uint32_t *)a1 + 11) = 0;
  }
  else
  {
    *((uint32_t *)a1 + 10) = v22;
    *((uint32_t *)a1 + 11) = v23;
    *((uint32_t *)a1 + 7) = *((uint32_t *)a1 + 6);
  }
  v8 = v17;
  if ( v17 != nullptr )
  {
    v9 = *(uint32_t **)v17;
    if ( *(uint32_t *)v17 != 0 && v9 != *((uint32_t **)v17 + 2) )
    {
      while ( 1 )
      {
        v10 = (uint32_t *)v9[2];
        v13 = v8;
        free(v9);
        v8 = v13;
        *(uint32_t *)v13 = (uint32_t)(uintptr_t)(v10);
        if ( v10 == nullptr || v10 == *((uint32_t **)v13 + 2) )
          break;
        v9 = v10;
      }
    }
    v14 = v8;
    opDelete(*((void **)v8 + 4));
    opDelete(v14);
  }
  return a1;
}


// ============================================================================
// Address:   0x136cbe0 (size: 664 bytes)
// Symbol:    sub_136CBE0
// Demangled: sub_136CBE0
// ============================================================================
int sub_136CBE0(uint32_t *a1)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  unsigned int nusers;
  int v10;
  unsigned int v11;
  int result;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef uint32_t _g4_t_v23[5];
  typedef uint32_t _g4_t_v24[5];
  typedef uint32_t _g4_t_v25[12];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (5u + sizeof(_g4_t_v19)) > _g4_s0 ? (5u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v20)) > _g4_s1 ? (8u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v21)) > _g4_s2 ? (12u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v22)) > _g4_s3 ? (16u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v23)) > _g4_s4 ? (20u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v24)) > _g4_s5 ? (40u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v25)) > _g4_s6 ? (60u + sizeof(_g4_t_v25)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 5u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 60u);

  if ( g4_fnstatic_ec81e02332 == 0 )
  {
    g4_fnstatic_ec81e02332 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v4 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v4 != 0 )
      {
        v18 = (int)(uintptr_t)(sub_18F81E0(v3, v2));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v19));
        sub_19042E0(v23, &v20);
        g4_std::string::Destroy(&v20);
        v23[2] = v4;
        v23[3] = v18;
        v23[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v23[0] = ((uint32_t)(uintptr_t)&off_2049568);
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
  {
    v5 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v8 = v5;
  }
  while ( v5 == 4 );
  if ( v5 != 0 )
  {
    v17 = (int)(uintptr_t)(sub_18F81E0(v7, v6));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v21), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v19) + 1);
    sub_19042E0(v24, &v21);
    g4_std::string::Destroy(&v21);
    v24[2] = v8;
    v24[3] = v17;
    v24[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v24[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers;
  if ( nusers <= 3 )
  {
    nusers = 4;
  }
  else if ( (nusers & 3) != 0 )
  {
    nusers = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
           + 4
           - (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
            & 3);
    v10 = nusers & 3;
    if ( nusers <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v10 = nusers;
    }
    if ( v10 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v11 = (boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
       % nusers != 0)
      + boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers
      / nusers;
  if ( v11 != 0 )
    sub_60EFD0(
      (uint32_t **)&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count,
      a1,
      nusers * v11,
      nusers);
  do
  {
    result = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v15 = result;
  }
  while ( result == 4 );
  if ( result != 0 )
  {
    v16 = (int)(uintptr_t)(sub_18F81E0(v14, v13));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v19) + 2);
    sub_19042E0(v25, &v22);
    g4_std::string::Destroy(&v22);
    v25[2] = v15;
    v25[3] = v16;
    v25[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v25[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  return result;
}


// ============================================================================
// Address:   0x136cf40 (size: 705 bytes)
// Symbol:    sub_136CF40
// Demangled: sub_136CF40
// ============================================================================
uint32_t *sub_136CF40(uint32_t *a1)
{
  unsigned int v1;
  int v2;
  uint32_t *v3;
  uint32_t *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  uint32_t *v10;
  unsigned int v12;
  unsigned int v13;
  unsigned int *v14;
  unsigned int i;
  unsigned int v16;
  unsigned int *v17;
  unsigned int v18;
  unsigned int v19;
  unsigned int v21;
  unsigned int v22;
  uint32_t *v23;
  unsigned int v24;

  v1 = a1[3];
  if ( v1 <= 3 )
  {
    v1 = 4;
  }
  else if ( (v1 & 3) != 0 )
  {
    v1 = a1[3] + 4 - (a1[3] & 3);
    v2 = v1 & 3;
    if ( v1 <= 3 )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        353,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s >= min_alloc_size");
      v2 = v1;
    }
    if ( v2 != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/pool/pool.hpp",
        354,
        "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = glotv"
        "3::event_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
        "s % min_align == 0");
  }
  v21 = a1[3] / v1 + (a1[3] % v1 != 0);
  if ( v21 != 0 )
  {
    v23 = a1;
    v3 = (uint32_t *)*a1;
    if ( *a1 != 0 )
    {
      while ( 2 )
      {
        v4 = v3;
        v5 = a1[3] / v1 + (a1[3] % v1 != 0);
        while ( --v5 != 0 )
        {
          if ( (uint32_t *)*v4 != (uint32_t *)((char *)v4 + v1) )
          {
            v3 = (uint32_t *)*v4;
            v23 = v4;
            goto LABEL_14;
          }
          v4 = (uint32_t *)*v4;
        }
        if ( v4 != nullptr )
        {
          *v23 = *v4;
          return v3;
        }
LABEL_14:
        if ( v3 != nullptr )
          continue;
        break;
      }
    }
  }
  v6 = a1[4];
  if ( v21 >= v6 )
    v6 = a1[3] / v1 + (a1[3] % v1 != 0);
  a1[4] = v6;
  v7 = v1 * v6 + 8;
  v3 = (uint32_t *)opNewArray(v7, (const std::nothrow_t *)&std::nothrow);
  if ( v3 == nullptr )
  {
    v18 = a1[4];
    if ( v21 >= v18 )
      return v3;
    v19 = v18 >> 1;
    if ( v21 >= v19 )
      v19 = v21;
    a1[4] = v19;
    v7 = v1 * v19 + 8;
    v3 = (uint32_t *)opNewArray(v7, (const std::nothrow_t *)&std::nothrow);
    if ( v3 == nullptr )
      return v3;
  }
  v8 = a1[4];
  if ( v21 < v8 )
  {
    sub_60EFD0((uint32_t **)a1, (uint32_t *)((char *)v3 + v1 * v21), v7 - v1 * v21 - 8, v1);
    v8 = a1[4];
    v22 = a1[6];
    if ( v22 == 0 )
      goto LABEL_20;
  }
  else
  {
    v22 = a1[6];
    if ( v22 == 0 )
    {
LABEL_20:
      a1[4] = 2 * v8;
      goto LABEL_21;
    }
  }
  v24 = a1[3];
  if ( v22 > v1 * v8 / v24 )
  {
    v12 = 2 * v8;
    v13 = v22 * v24 / v1;
    if ( v12 <= v13 )
      v13 = v12;
    a1[4] = v13;
  }
LABEL_21:
  v9 = a1[1];
  if ( v9 == 0 || (unsigned int)(uintptr_t)(v3) < v9 )
  {
    v10 = (uint32_t *)((char *)v3 + v7 - 4);
    *(v10 - 1) = v9;
    *v10 = a1[2];
    a1[1] = (uint32_t)(uintptr_t)(v3);
    a1[2] = v7;
    return v3;
  }
  v14 = (unsigned int *)(v9 + a1[2] - 4);
  for ( i = *(uint32_t *)(v9 + a1[2] - 8); i != 0; i = *(v14 - 1) )
  {
    if ( (unsigned int)(uintptr_t)(v3) < i )
      break;
    v14 = (unsigned int *)(i + *v14 - 4);
  }
  v16 = *v14;
  v17 = (uint32_t *)((char *)v3 + v7 - 4);
  *(v17 - 1) = i;
  *v17 = v16;
  *(v14 - 1) = (unsigned int)(uintptr_t)(v3);
  *v14 = v7;
  return v3;
}


// ============================================================================
// Address:   0x136d210 (size: 693 bytes)
// Symbol:    sub_136D210
// Demangled: sub_136D210
// ============================================================================
uint32_t *sub_136D210(uint32_t *a1)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  uint8_t *v12;
  volatile int32_t *v13;
  bool v14;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef volatile int32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef uint32_t _g4_t_v24[2];
  typedef volatile int32_t *_g4_t_v25;
  typedef uint32_t _g4_t_v26[5];
  typedef uint32_t _g4_t_v27[5];
  typedef uint32_t _g4_t_v28[8];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v16)) > _g4_s0 ? (4u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v20)) > _g4_s3 ? (12u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (17u + sizeof(_g4_t_v21)) > _g4_s4 ? (17u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v22)) > _g4_s5 ? (20u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v23)) > _g4_s6 ? (24u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v24)) > _g4_s7 ? (28u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v25)) > _g4_s8 ? (36u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v26)) > _g4_s9 ? (52u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (72u + sizeof(_g4_t_v27)) > _g4_s10 ? (72u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (92u + sizeof(_g4_t_v28)) > _g4_s11 ? (92u + sizeof(_g4_t_v28)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 12u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 17u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 72u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 92u);

  v24[1] = 0;
  v25 = nullptr;
  sub_1367F30();
  if ( g4_fnstatic_ec81e02332 == 0 )
  {
    g4_fnstatic_ec81e02332 = 1;
    if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
    {
      v3 = pthread_mutex_init(
             &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
             nullptr);
      if ( v3 != 0 )
      {
        v18 = (int)(uintptr_t)(sub_18F81E0(v2, v1));
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v21));
        sub_19042E0(v26, &v22);
        g4_std::string::Destroy(&v22);
        v26[2] = v3;
        v26[3] = v18;
        v26[4] = (uint32_t)(uintptr_t)(&dword_213B814);
        v26[0] = ((uint32_t)(uintptr_t)&off_2049568);
        std::terminate();
      }
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
      boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
      *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
      *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
    }
  }
  do
  {
    v4 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v7 = v4;
  }
  while ( v4 == 4 );
  if ( v4 != 0 )
  {
    v16 = (int)(uintptr_t)(sub_18F81E0(v6, v5));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v21) + 1);
    sub_19042E0(v27, &v23);
    g4_std::string::Destroy(&v23);
    v27[2] = v7;
    v27[3] = v16;
    v27[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v27[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  v20 = (volatile int32_t *)(sub_136CF40(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
  do
  {
    v8 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
    v11 = v8;
  }
  while ( v8 == 4 );
  if ( v8 != 0 )
  {
    v17 = (int)(uintptr_t)(sub_18F81E0(v10, v9));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v24), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v21) + 2);
    sub_19042E0(v28, v24);
    g4_std::string::Destroy(v24);
    v28[2] = v11;
    v28[3] = v17;
    v28[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v28[0] = ((uint32_t)(uintptr_t)&off_20495E0);
    std::terminate();
  }
  if ( v20 == nullptr )
    std::terminate();
  v25 = v20;
  v12 = nullptr;
  *((uint32_t *)v20 + 1) = 1;
  *((uint32_t *)v20 + 2) = 1;
  *((uint32_t *)v20 + 3) = 0;
  *((uint8_t *)v20 + 16) = 0;
  *v20 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093E48);
  if ( v25 != nullptr )
    v12 = (uint8_t *)G4_VCALL<int>(v25, 20);
  if ( v12 != (uint8_t *)-4 )
    glotv3::EventOfEraseEverything::Construct((glotv3::EventOfEraseEverything::Self *)(v12 + 4));
  *v12 = 1;
  *a1 = (uint32_t)(uintptr_t)(v12 + 4);
  v13 = v25;
  v14 = v25 == nullptr;
  a1[1] = (uint32_t)(uintptr_t)(v25);
  if ( !v14 )
    __sync_add_and_fetch(v13 + 1, 1);
  boost::detail::shared_count::Destroy(&v25);
  return a1;
}


// ============================================================================
// Address:   0x136f870 (size: 5556 bytes)
// Symbol:    sub_136F870
// Demangled: sub_136F870
// ============================================================================
void sub_136F870(int a1, int a2, int a3)
{
  void **v4;
  char *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  void *v10;
  int v11;
  unsigned int i;
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int owner;
  int j;
  int *v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint8_t *v34;
  glotv3::Event::Self *v35;
  uint32_t *v36;
  const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *v37;
  glotv3::Event::Self *v38;
  glotv3::Event::Self *v39;
  int v40;
  int v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  volatile int32_t *v49;
  volatile int32_t *v50;
  glotv3::Event::Self *v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  volatile int32_t *v61;
  volatile int32_t *v62;
  glotv3::Event::Self *v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  volatile int32_t *v73;
  volatile int32_t *v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  int v81;
  int v82;
  int v83;
  int v84;
  int v85;
  int v86;
  int v87;
  int v88;
  int v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef glotv3::Event::Self *_g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint32_t *_g4_t_v111;
  typedef volatile int32_t *_g4_t_v112;
  typedef uint8_t *_g4_t_v113;
  typedef volatile int32_t *_g4_t_v114;
  typedef uint8_t *_g4_t_v115;
  typedef volatile int32_t *_g4_t_v116;
  typedef uint8_t *_g4_t_v117;
  typedef volatile int32_t *_g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int64_t _g4_t_v123;
  typedef int _g4_t_v124;
  typedef uint8_t *_g4_t_v125;
  typedef uint8_t *_g4_t_v126;
  typedef uint8_t _g4_t_v127[4];
  typedef int _g4_t_v128;
  typedef uint8_t _g4_t_v129[4];
  typedef uint8_t _g4_t_v130[4];
  typedef uint8_t _g4_t_v131[4];
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef int _g4_t_v140;
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef glotv3::Event::Self *_g4_t_v147;
  typedef volatile int32_t *_g4_t_v148;
  typedef glotv3::Event::Self *_g4_t_v149;
  typedef volatile int32_t *_g4_t_v150;
  typedef glotv3::Event::Self *_g4_t_v151;
  typedef volatile int32_t *_g4_t_v152;
  typedef glotv3::Event::Self *_g4_t_v153;
  typedef volatile int32_t *_g4_t_v154;
  typedef glotv3::Event::Self *_g4_t_v155;
  typedef volatile int32_t *_g4_t_v156;
  typedef glotv3::Event::Self *_g4_t_v157;
  typedef volatile int32_t *_g4_t_v158;
  typedef glotv3::Event::Self *_g4_t_v159;
  typedef volatile int32_t *_g4_t_v160;
  typedef int _g4_t_v161;
  typedef volatile int32_t *_g4_t_v162;
  typedef int _g4_t_v163;
  typedef volatile int32_t *_g4_t_v164;
  typedef void *_g4_t_ptr[2];
  typedef void *_g4_t_v166;
  typedef void *_g4_t_v167;
  typedef void *_g4_t_v168;
  typedef uint32_t _g4_t_v169[5];
  typedef uint32_t _g4_t_v170[5];
  typedef uint32_t _g4_t_v171[5];
  typedef uint32_t _g4_t_v172[5];
  typedef uint32_t _g4_t_v173[5];
  typedef uint32_t _g4_t_v174[5];
  typedef uint32_t _g4_t_v175[5];
  typedef uint32_t _g4_t_v176[5];
  typedef uint32_t _g4_t_v177[5];
  typedef uint32_t _g4_t_v178[5];
  typedef uint32_t _g4_t_v179[5];
  typedef uint32_t _g4_t_v180[5];
  typedef uint32_t _g4_t_v181[5];
  typedef uint32_t _g4_t_v182[5];
  typedef uint32_t _g4_t_v183[5];
  typedef int _g4_t_v184[3];
  typedef int _g4_t_v185;
  typedef void **_g4_t_v186;
  typedef void *_g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189;
  typedef unsigned int _g4_t_v190;
  typedef unsigned int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef int _g4_t_v193;
  typedef int *_g4_t_v194;
  enum : size_t {
    _g4_s0 = 736u,
    _g4_s1 = (0u + sizeof(_g4_t_v90)) > _g4_s0 ? (0u + sizeof(_g4_t_v90)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v91)) > _g4_s1 ? (0u + sizeof(_g4_t_v91)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v92)) > _g4_s2 ? (0u + sizeof(_g4_t_v92)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v93)) > _g4_s3 ? (0u + sizeof(_g4_t_v93)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v94)) > _g4_s4 ? (0u + sizeof(_g4_t_v94)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v95)) > _g4_s5 ? (0u + sizeof(_g4_t_v95)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v96)) > _g4_s6 ? (0u + sizeof(_g4_t_v96)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v97)) > _g4_s7 ? (0u + sizeof(_g4_t_v97)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v98)) > _g4_s8 ? (0u + sizeof(_g4_t_v98)) : _g4_s8,
    _g4_s10 = (0u + sizeof(_g4_t_v99)) > _g4_s9 ? (0u + sizeof(_g4_t_v99)) : _g4_s9,
    _g4_s11 = (0u + sizeof(_g4_t_v100)) > _g4_s10 ? (0u + sizeof(_g4_t_v100)) : _g4_s10,
    _g4_s12 = (0u + sizeof(_g4_t_v101)) > _g4_s11 ? (0u + sizeof(_g4_t_v101)) : _g4_s11,
    _g4_s13 = (0u + sizeof(_g4_t_v102)) > _g4_s12 ? (0u + sizeof(_g4_t_v102)) : _g4_s12,
    _g4_s14 = (0u + sizeof(_g4_t_v103)) > _g4_s13 ? (0u + sizeof(_g4_t_v103)) : _g4_s13,
    _g4_s15 = (0u + sizeof(_g4_t_v104)) > _g4_s14 ? (0u + sizeof(_g4_t_v104)) : _g4_s14,
    _g4_s16 = (0u + sizeof(_g4_t_v105)) > _g4_s15 ? (0u + sizeof(_g4_t_v105)) : _g4_s15,
    _g4_s17 = (0u + sizeof(_g4_t_v106)) > _g4_s16 ? (0u + sizeof(_g4_t_v106)) : _g4_s16,
    _g4_s18 = (4u + sizeof(_g4_t_v107)) > _g4_s17 ? (4u + sizeof(_g4_t_v107)) : _g4_s17,
    _g4_s19 = (8u + sizeof(_g4_t_v108)) > _g4_s18 ? (8u + sizeof(_g4_t_v108)) : _g4_s18,
    _g4_s20 = (12u + sizeof(_g4_t_v109)) > _g4_s19 ? (12u + sizeof(_g4_t_v109)) : _g4_s19,
    _g4_s21 = (24u + sizeof(_g4_t_v111)) > _g4_s20 ? (24u + sizeof(_g4_t_v111)) : _g4_s20,
    _g4_s22 = (28u + sizeof(_g4_t_v112)) > _g4_s21 ? (28u + sizeof(_g4_t_v112)) : _g4_s21,
    _g4_s23 = (28u + sizeof(_g4_t_v113)) > _g4_s22 ? (28u + sizeof(_g4_t_v113)) : _g4_s22,
    _g4_s24 = (28u + sizeof(_g4_t_v114)) > _g4_s23 ? (28u + sizeof(_g4_t_v114)) : _g4_s23,
    _g4_s25 = (28u + sizeof(_g4_t_v115)) > _g4_s24 ? (28u + sizeof(_g4_t_v115)) : _g4_s24,
    _g4_s26 = (28u + sizeof(_g4_t_v116)) > _g4_s25 ? (28u + sizeof(_g4_t_v116)) : _g4_s25,
    _g4_s27 = (28u + sizeof(_g4_t_v117)) > _g4_s26 ? (28u + sizeof(_g4_t_v117)) : _g4_s26,
    _g4_s28 = (32u + sizeof(_g4_t_v118)) > _g4_s27 ? (32u + sizeof(_g4_t_v118)) : _g4_s27,
    _g4_s29 = (32u + sizeof(_g4_t_v119)) > _g4_s28 ? (32u + sizeof(_g4_t_v119)) : _g4_s28,
    _g4_s30 = (37u + sizeof(_g4_t_v120)) > _g4_s29 ? (37u + sizeof(_g4_t_v120)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v121)) > _g4_s30 ? (40u + sizeof(_g4_t_v121)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v122)) > _g4_s31 ? (44u + sizeof(_g4_t_v122)) : _g4_s31,
    _g4_s33 = (48u + sizeof(_g4_t_v123)) > _g4_s32 ? (48u + sizeof(_g4_t_v123)) : _g4_s32,
    _g4_s34 = (56u + sizeof(_g4_t_v124)) > _g4_s33 ? (56u + sizeof(_g4_t_v124)) : _g4_s33,
    _g4_s35 = (60u + sizeof(_g4_t_v125)) > _g4_s34 ? (60u + sizeof(_g4_t_v125)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v126)) > _g4_s35 ? (64u + sizeof(_g4_t_v126)) : _g4_s35,
    _g4_s37 = (68u + sizeof(_g4_t_v127)) > _g4_s36 ? (68u + sizeof(_g4_t_v127)) : _g4_s36,
    _g4_s38 = (72u + sizeof(_g4_t_v128)) > _g4_s37 ? (72u + sizeof(_g4_t_v128)) : _g4_s37,
    _g4_s39 = (76u + sizeof(_g4_t_v129)) > _g4_s38 ? (76u + sizeof(_g4_t_v129)) : _g4_s38,
    _g4_s40 = (80u + sizeof(_g4_t_v130)) > _g4_s39 ? (80u + sizeof(_g4_t_v130)) : _g4_s39,
    _g4_s41 = (84u + sizeof(_g4_t_v131)) > _g4_s40 ? (84u + sizeof(_g4_t_v131)) : _g4_s40,
    _g4_s42 = (88u + sizeof(_g4_t_v132)) > _g4_s41 ? (88u + sizeof(_g4_t_v132)) : _g4_s41,
    _g4_s43 = (92u + sizeof(_g4_t_v133)) > _g4_s42 ? (92u + sizeof(_g4_t_v133)) : _g4_s42,
    _g4_s44 = (96u + sizeof(_g4_t_v134)) > _g4_s43 ? (96u + sizeof(_g4_t_v134)) : _g4_s43,
    _g4_s45 = (100u + sizeof(_g4_t_v135)) > _g4_s44 ? (100u + sizeof(_g4_t_v135)) : _g4_s44,
    _g4_s46 = (104u + sizeof(_g4_t_v136)) > _g4_s45 ? (104u + sizeof(_g4_t_v136)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v137)) > _g4_s46 ? (108u + sizeof(_g4_t_v137)) : _g4_s46,
    _g4_s48 = (112u + sizeof(_g4_t_v138)) > _g4_s47 ? (112u + sizeof(_g4_t_v138)) : _g4_s47,
    _g4_s49 = (116u + sizeof(_g4_t_v139)) > _g4_s48 ? (116u + sizeof(_g4_t_v139)) : _g4_s48,
    _g4_s50 = (120u + sizeof(_g4_t_v140)) > _g4_s49 ? (120u + sizeof(_g4_t_v140)) : _g4_s49,
    _g4_s51 = (124u + sizeof(_g4_t_v141)) > _g4_s50 ? (124u + sizeof(_g4_t_v141)) : _g4_s50,
    _g4_s52 = (128u + sizeof(_g4_t_v142)) > _g4_s51 ? (128u + sizeof(_g4_t_v142)) : _g4_s51,
    _g4_s53 = (132u + sizeof(_g4_t_v143)) > _g4_s52 ? (132u + sizeof(_g4_t_v143)) : _g4_s52,
    _g4_s54 = (136u + sizeof(_g4_t_v144)) > _g4_s53 ? (136u + sizeof(_g4_t_v144)) : _g4_s53,
    _g4_s55 = (140u + sizeof(_g4_t_v145)) > _g4_s54 ? (140u + sizeof(_g4_t_v145)) : _g4_s54,
    _g4_s56 = (144u + sizeof(_g4_t_v146)) > _g4_s55 ? (144u + sizeof(_g4_t_v146)) : _g4_s55,
    _g4_s57 = (148u + sizeof(_g4_t_v147)) > _g4_s56 ? (148u + sizeof(_g4_t_v147)) : _g4_s56,
    _g4_s58 = (152u + sizeof(_g4_t_v148)) > _g4_s57 ? (152u + sizeof(_g4_t_v148)) : _g4_s57,
    _g4_s59 = (164u + sizeof(_g4_t_v149)) > _g4_s58 ? (164u + sizeof(_g4_t_v149)) : _g4_s58,
    _g4_s60 = (168u + sizeof(_g4_t_v150)) > _g4_s59 ? (168u + sizeof(_g4_t_v150)) : _g4_s59,
    _g4_s61 = (180u + sizeof(_g4_t_v151)) > _g4_s60 ? (180u + sizeof(_g4_t_v151)) : _g4_s60,
    _g4_s62 = (184u + sizeof(_g4_t_v152)) > _g4_s61 ? (184u + sizeof(_g4_t_v152)) : _g4_s61,
    _g4_s63 = (196u + sizeof(_g4_t_v153)) > _g4_s62 ? (196u + sizeof(_g4_t_v153)) : _g4_s62,
    _g4_s64 = (200u + sizeof(_g4_t_v154)) > _g4_s63 ? (200u + sizeof(_g4_t_v154)) : _g4_s63,
    _g4_s65 = (212u + sizeof(_g4_t_v155)) > _g4_s64 ? (212u + sizeof(_g4_t_v155)) : _g4_s64,
    _g4_s66 = (216u + sizeof(_g4_t_v156)) > _g4_s65 ? (216u + sizeof(_g4_t_v156)) : _g4_s65,
    _g4_s67 = (228u + sizeof(_g4_t_v157)) > _g4_s66 ? (228u + sizeof(_g4_t_v157)) : _g4_s66,
    _g4_s68 = (232u + sizeof(_g4_t_v158)) > _g4_s67 ? (232u + sizeof(_g4_t_v158)) : _g4_s67,
    _g4_s69 = (244u + sizeof(_g4_t_v159)) > _g4_s68 ? (244u + sizeof(_g4_t_v159)) : _g4_s68,
    _g4_s70 = (248u + sizeof(_g4_t_v160)) > _g4_s69 ? (248u + sizeof(_g4_t_v160)) : _g4_s69,
    _g4_s71 = (260u + sizeof(_g4_t_v161)) > _g4_s70 ? (260u + sizeof(_g4_t_v161)) : _g4_s70,
    _g4_s72 = (264u + sizeof(_g4_t_v162)) > _g4_s71 ? (264u + sizeof(_g4_t_v162)) : _g4_s71,
    _g4_s73 = (268u + sizeof(_g4_t_v163)) > _g4_s72 ? (268u + sizeof(_g4_t_v163)) : _g4_s72,
    _g4_s74 = (272u + sizeof(_g4_t_v164)) > _g4_s73 ? (272u + sizeof(_g4_t_v164)) : _g4_s73,
    _g4_s75 = (276u + sizeof(_g4_t_ptr)) > _g4_s74 ? (276u + sizeof(_g4_t_ptr)) : _g4_s74,
    _g4_s76 = (284u + sizeof(_g4_t_v166)) > _g4_s75 ? (284u + sizeof(_g4_t_v166)) : _g4_s75,
    _g4_s77 = (288u + sizeof(_g4_t_v167)) > _g4_s76 ? (288u + sizeof(_g4_t_v167)) : _g4_s76,
    _g4_s78 = (292u + sizeof(_g4_t_v168)) > _g4_s77 ? (292u + sizeof(_g4_t_v168)) : _g4_s77,
    _g4_s79 = (296u + sizeof(_g4_t_v169)) > _g4_s78 ? (296u + sizeof(_g4_t_v169)) : _g4_s78,
    _g4_s80 = (316u + sizeof(_g4_t_v170)) > _g4_s79 ? (316u + sizeof(_g4_t_v170)) : _g4_s79,
    _g4_s81 = (336u + sizeof(_g4_t_v171)) > _g4_s80 ? (336u + sizeof(_g4_t_v171)) : _g4_s80,
    _g4_s82 = (356u + sizeof(_g4_t_v172)) > _g4_s81 ? (356u + sizeof(_g4_t_v172)) : _g4_s81,
    _g4_s83 = (376u + sizeof(_g4_t_v173)) > _g4_s82 ? (376u + sizeof(_g4_t_v173)) : _g4_s82,
    _g4_s84 = (396u + sizeof(_g4_t_v174)) > _g4_s83 ? (396u + sizeof(_g4_t_v174)) : _g4_s83,
    _g4_s85 = (416u + sizeof(_g4_t_v175)) > _g4_s84 ? (416u + sizeof(_g4_t_v175)) : _g4_s84,
    _g4_s86 = (436u + sizeof(_g4_t_v176)) > _g4_s85 ? (436u + sizeof(_g4_t_v176)) : _g4_s85,
    _g4_s87 = (456u + sizeof(_g4_t_v177)) > _g4_s86 ? (456u + sizeof(_g4_t_v177)) : _g4_s86,
    _g4_s88 = (476u + sizeof(_g4_t_v178)) > _g4_s87 ? (476u + sizeof(_g4_t_v178)) : _g4_s87,
    _g4_s89 = (496u + sizeof(_g4_t_v179)) > _g4_s88 ? (496u + sizeof(_g4_t_v179)) : _g4_s88,
    _g4_s90 = (516u + sizeof(_g4_t_v180)) > _g4_s89 ? (516u + sizeof(_g4_t_v180)) : _g4_s89,
    _g4_s91 = (536u + sizeof(_g4_t_v181)) > _g4_s90 ? (536u + sizeof(_g4_t_v181)) : _g4_s90,
    _g4_s92 = (556u + sizeof(_g4_t_v182)) > _g4_s91 ? (556u + sizeof(_g4_t_v182)) : _g4_s91,
    _g4_s93 = (576u + sizeof(_g4_t_v183)) > _g4_s92 ? (576u + sizeof(_g4_t_v183)) : _g4_s92,
    _g4_s94 = (596u + sizeof(_g4_t_v184)) > _g4_s93 ? (596u + sizeof(_g4_t_v184)) : _g4_s93,
    _g4_s95 = (608u + sizeof(_g4_t_v185)) > _g4_s94 ? (608u + sizeof(_g4_t_v185)) : _g4_s94,
    _g4_s96 = (612u + sizeof(_g4_t_v186)) > _g4_s95 ? (612u + sizeof(_g4_t_v186)) : _g4_s95,
    _g4_s97 = (616u + sizeof(_g4_t_v187)) > _g4_s96 ? (616u + sizeof(_g4_t_v187)) : _g4_s96,
    _g4_s98 = (620u + sizeof(_g4_t_v188)) > _g4_s97 ? (620u + sizeof(_g4_t_v188)) : _g4_s97,
    _g4_s99 = (624u + sizeof(_g4_t_v189)) > _g4_s98 ? (624u + sizeof(_g4_t_v189)) : _g4_s98,
    _g4_s100 = (628u + sizeof(_g4_t_v190)) > _g4_s99 ? (628u + sizeof(_g4_t_v190)) : _g4_s99,
    _g4_s101 = (632u + sizeof(_g4_t_v191)) > _g4_s100 ? (632u + sizeof(_g4_t_v191)) : _g4_s100,
    _g4_s102 = (636u + sizeof(_g4_t_v192)) > _g4_s101 ? (636u + sizeof(_g4_t_v192)) : _g4_s101,
    _g4_s103 = (640u + sizeof(_g4_t_v193)) > _g4_s102 ? (640u + sizeof(_g4_t_v193)) : _g4_s102,
    _g4_s104 = (652u + sizeof(_g4_t_v194)) > _g4_s103 ? (652u + sizeof(_g4_t_v194)) : _g4_s103
  };
  alignas(16) uint8_t _g4_sf[_g4_s104];
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 0u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 0u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 0u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 0u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 0u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 0u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 0u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 0u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 0u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 0u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 0u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 0u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 0u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 0u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 0u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 0u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 0u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 4u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 8u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 12u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 24u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 28u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 28u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 28u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 28u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 28u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 28u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 32u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 32u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 37u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 40u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 44u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 48u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 56u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 60u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 64u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 68u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 72u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 76u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 80u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 84u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 88u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 92u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 96u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 100u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 104u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 108u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 112u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 116u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 120u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 124u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 128u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 132u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 136u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 140u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 144u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 148u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 152u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 164u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 168u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 180u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 184u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 196u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 200u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 212u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 216u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 228u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 232u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 244u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 248u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 260u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 264u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 268u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 272u);
  _g4_t_ptr &ptr = *reinterpret_cast<_g4_t_ptr *>(_g4_sf + 276u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 284u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 288u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 292u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 296u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 316u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 336u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 356u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 376u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 396u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 416u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 436u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 456u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 476u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 496u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 516u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 536u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 556u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 576u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 596u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 608u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 612u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 616u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 620u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 624u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 628u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 632u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 636u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 640u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 652u);

  v194 = &a3;
  v108 = a3;
  ptr[0] = nullptr;
  v166 = nullptr;
  ptr[1] = (void *)(uintptr_t)2048;
  v167 = (void *)opNew(1u);
  v168 = v167;
  v4 = (void **)malloc(0x80Cu);
  *v4 = (void *)(uintptr_t)2048;
  v4[2] = ptr[0];
  v4[1] = nullptr;
  ptr[0] = v4;
  v185 = 0;
  v187 = nullptr;
  v186 = ptr;
  v188 = 0;
  v189 = 0;
  v190 = 0;
  v191 = 2048;
  v188 = (int)(uintptr_t)((void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(
           (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)ptr,
           0x800u));
  v189 = v188;
  v5 = *(char **)(a1 + 8);
  v190 = v191 + v188;
  v192 = 0;
  v193 = 0;
  sub_136C9B0(
    (rapidjson::GenericDocument<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v184,
    v5);
  if ( v185 != 0 && sub_1367830(v184) != 0 )
  {
    v11 = sub_1367830(v184);
    v111 = (uint32_t *)(v11 + 16);
    if ( v11 == 0 )
    {
      v111 = (uint32_t *)(&g4_rapidjson_NullValue);
      if ( LOBYTE(g4_guard_d940a9bded[0]) == 0
        && _cxa_guard_acquire(g4_guard_d940a9bded) != 0 )
      {
        v111 = (uint32_t *)sub_1367380();
      }
    }
    if ( v111[3] == 4 )
    {
      v109 = v111[1];
      if ( v109 != 0 )
      {
        for ( i = 0; i != v109; ++i )
        {
          v161 = 0;
          v162 = nullptr;
          if ( g4_fnstatic_ec81e02332 == 0 )
          {
            g4_fnstatic_ec81e02332 = 1;
            if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
            {
              v13 = pthread_mutex_init(
                      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
                      nullptr);
              if ( v13 != 0 )
              {
                v83 = v13;
                v100 = (int)(uintptr_t)(sub_18F81E0(v15, v14));
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v132), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v120));
                sub_19042E0(v169, &v132);
                g4_std::string::Destroy(&v132);
                v169[2] = v83;
                v169[3] = v100;
                v169[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                v169[0] = ((uint32_t)(uintptr_t)&off_2049568);
                std::terminate();
              }
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
              *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
              *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
            }
          }
          do
            v16 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
          while ( v16 == 4 );
          if ( v16 != 0 )
          {
            v82 = v16;
            v99 = (int)(uintptr_t)(sub_18F81E0(v18, v17));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v133), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v120) + 1);
            sub_19042E0(v170, &v133);
            g4_std::string::Destroy(&v133);
            v170[2] = v82;
            v170[3] = v99;
            v170[4] = (uint32_t)(uintptr_t)(&dword_213B814);
            v170[0] = ((uint32_t)(uintptr_t)&off_20495E0);
            std::terminate();
          }
          owner = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner;
          for ( j = boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind;
                owner != 0;
                owner = *(v21 - 1) )
          {
            v21 = (int *)(owner + j - 4);
            j = *v21;
          }
          do
            v22 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
          while ( v22 == 4 );
          if ( v22 != 0 )
          {
            v81 = v22;
            v98 = (int)(uintptr_t)(sub_18F81E0(v24, v23));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v134), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v120) + 2);
            sub_19042E0(v171, &v134);
            g4_std::string::Destroy(&v134);
            v171[2] = v81;
            v171[3] = v98;
            v171[4] = (uint32_t)(uintptr_t)(&dword_213B814);
            v171[0] = ((uint32_t)(uintptr_t)&off_20495E0);
            std::terminate();
          }
          if ( g4_fnstatic_ec81e02332 == 0 )
          {
            g4_fnstatic_ec81e02332 = 1;
            if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
            {
              v25 = pthread_mutex_init(
                      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
                      nullptr);
              if ( v25 != 0 )
              {
                v80 = v25;
                v97 = (int)(uintptr_t)(sub_18F81E0(v27, v26));
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v135), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v121));
                sub_19042E0(v172, &v135);
                g4_std::string::Destroy(&v135);
                v172[2] = v80;
                v172[3] = v97;
                v172[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                v172[0] = ((uint32_t)(uintptr_t)&off_2049568);
                std::terminate();
              }
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
              boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
              *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
              *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
            }
          }
          do
            v28 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
          while ( v28 == 4 );
          if ( v28 != 0 )
          {
            v79 = v28;
            v96 = (int)(uintptr_t)(sub_18F81E0(v30, v29));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v136), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v121) + 1);
            sub_19042E0(v173, &v136);
            g4_std::string::Destroy(&v136);
            v173[2] = v79;
            v173[3] = v96;
            v173[4] = (uint32_t)(uintptr_t)(&dword_213B814);
            v173[0] = ((uint32_t)(uintptr_t)&off_20495E0);
            std::terminate();
          }
          v118 = (volatile int32_t *)(sub_136CF40(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
          do
            v31 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
          while ( v31 == 4 );
          if ( v31 != 0 )
          {
            v78 = v31;
            v95 = (int)(uintptr_t)(sub_18F81E0(v33, v32));
            g4_std::string::construct_from_cstr((int)(uintptr_t)(&v137), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v121) + 2);
            sub_19042E0(v174, &v137);
            g4_std::string::Destroy(&v137);
            v174[2] = v78;
            v174[3] = v95;
            v174[4] = (uint32_t)(uintptr_t)(&dword_213B814);
            v174[0] = ((uint32_t)(uintptr_t)&off_20495E0);
            std::terminate();
          }
          if ( v118 == nullptr )
            goto LABEL_129;
          v162 = v118;
          *((uint32_t *)v118 + 1) = 1;
          *((uint32_t *)v118 + 2) = 1;
          *((uint32_t *)v118 + 3) = 0;
          *((uint8_t *)v118 + 16) = 0;
          *v118 = (volatile int32_t)((uint32_t)(uintptr_t)&off_20936E8);
          v34 = nullptr;
          if ( v162 != nullptr )
            v34 = (uint8_t *)G4_VCALL<int>(v162, 20);
          v35 = (glotv3::Event::Self *)(v34 + 4);
          if ( v34 != (uint8_t *)-4 )
          {
            v90 = (int)(uintptr_t)(v34);
            v107 = (glotv3::Event::Self *)(v34 + 4);
            glotv3::Event::Construct((glotv3::Event::Self *)(v34 + 4), false);
            v35 = v107;
            v34 = (uint8_t *)v90;
          }
          *v34 = 1;
          v147 = v35;
          v148 = v162;
          if ( v162 != nullptr )
            __sync_add_and_fetch(v162 + 1, 1);
          boost::detail::shared_count::Destroy(&v162);
          v36 = v111;
          if ( v111[3] != 4 )
          {
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              579,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "IsArray ()");
            v36 = v111;
          }
          if ( i >= v36[1] )
            __assert2(
              "../../../../../lib/rapidjson/document.h",
              580,
              "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::operator[](rap"
              "idjson::SizeType) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidj"
              "son::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeType = unsigned int]",
              "index < data_.a.size");
          v37 = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)(*v111 + 16 * i);
          v38 = v147;
          if ( v147 == nullptr )
          {
            v91 = *v111 + 16 * i;
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
              653,
              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv"
              "3::Event, typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
              "px != 0");
            v38 = v147;
            v37 = (const rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v91;
          }
          glotv3::Event::setRoot(v38, v37);
          glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v163);
          v119 = v163;
          if ( v163 == 0 )
          {
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
              646,
              "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = glotv3::"
              "TrackingManager, typename boost::detail::sp_dereference<T>::type = glotv3::TrackingManager::Self&]",
              "px != 0");
            v119 = v163;
          }
          boost::detail::shared_count::Destroy(&v164);
          if ( a2 == 1 )
          {
            v63 = v147;
            if ( v147 == nullptr )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glo"
                "tv3::Event, typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
                "px != 0");
              v63 = v147;
            }
            glotv3::Event::getUUID((glotv3::Event::Self *)v130, v63);
            v161 = 0;
            v162 = nullptr;
            sub_1367F30();
            if ( g4_fnstatic_ec81e02332 == 0 )
            {
              g4_fnstatic_ec81e02332 = 1;
              if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
              {
                v64 = pthread_mutex_init(
                        &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
                        nullptr);
                if ( v64 != 0 )
                {
                  v86 = v64;
                  v103 = (int)(uintptr_t)(sub_18F81E0(v66, v65));
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v141), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v122) + 2);
                  sub_19042E0(v178, &v141);
                  g4_std::string::Destroy(&v141);
                  v178[2] = v86;
                  v178[3] = v103;
                  v178[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                  v178[0] = ((uint32_t)(uintptr_t)&off_2049568);
                  std::terminate();
                }
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
                *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
                *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
              }
            }
            do
              v67 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
            while ( v67 == 4 );
            if ( v67 != 0 )
            {
              v85 = v67;
              v102 = (int)(uintptr_t)(sub_18F81E0(v69, v68));
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v142), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v122) + 3);
              sub_19042E0(v179, &v142);
              g4_std::string::Destroy(&v142);
              v179[2] = v85;
              v179[3] = v102;
              v179[4] = (uint32_t)(uintptr_t)(&dword_213B814);
              v179[0] = ((uint32_t)(uintptr_t)&off_20495E0);
              std::terminate();
            }
            v116 = (volatile int32_t *)(sub_136CF40(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
            do
              v70 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
            while ( v70 == 4 );
            if ( v70 != 0 )
            {
              v84 = v70;
              v101 = (int)(uintptr_t)(sub_18F81E0(v72, v71));
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v143), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v123));
              sub_19042E0(v180, &v143);
              g4_std::string::Destroy(&v143);
              v180[2] = v84;
              v180[3] = v101;
              v180[4] = (uint32_t)(uintptr_t)(&dword_213B814);
              v180[0] = ((uint32_t)(uintptr_t)&off_20495E0);
              std::terminate();
            }
            if ( v116 == nullptr )
              goto LABEL_129;
            v73 = v116;
            v74 = v116;
            v162 = v116;
            v117 = nullptr;
            *((uint32_t *)v162 + 1) = 1;
            *((uint32_t *)v73 + 2) = 1;
            *((uint32_t *)v74 + 3) = 0;
            *((uint8_t *)v74 + 16) = 0;
            *v74 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093EA8);
            if ( v162 != nullptr )
              v117 = (uint8_t *)G4_VCALL<int>(v162, 20);
            g4_std::string::construct_copy(&v125, v130);
            if ( v117 != (uint8_t *)-4 )
              glotv3::EventOfSpyConfirmReceived::Construct((glotv3::Event::Self *)(v117 + 4), &v125);
            g4_std::string::Destroy(&v125);
            *v117 = 1;
            v153 = (glotv3::Event::Self *)(v117 + 4);
            v154 = v162;
            if ( v162 != nullptr )
              __sync_add_and_fetch(v162 + 1, 1);
            boost::detail::shared_count::Destroy(&v162);
            v155 = v153;
            v156 = v154;
            if ( v154 != nullptr )
              __sync_add_and_fetch(v154 + 1, 1);
            glotv3::TrackingManager::AddEvent(v119, &v155, 0);
            boost::detail::shared_count::Destroy(&v156);
            boost::detail::shared_count::Destroy(&v154);
            g4_std::string::Destroy(v130);
          }
          else if ( a2 != 0 )
          {
            if ( a2 == 2 )
            {
              glotv3::Utils::ToString<int>((uint32_t *)(uintptr_t)(&v128), (int)(v108));
              sub_134F3A0((int)(uintptr_t)(v129), (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_200_ETS_STATUS_CODE), (int)(uintptr_t)(&v128));
              v51 = v147;
              if ( v147 == nullptr )
              {
                __assert2(
                  "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                  653,
                  "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = g"
                  "lotv3::Event, typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
                  "px != 0");
                v51 = v147;
              }
              glotv3::Event::getUUID((glotv3::Event::Self *)v127, v51);
              v161 = 0;
              v162 = nullptr;
              sub_1367F30();
              if ( g4_fnstatic_ec81e02332 == 0 )
              {
                g4_fnstatic_ec81e02332 = 1;
                if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
                {
                  v52 = pthread_mutex_init(
                          &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
                          nullptr);
                  if ( v52 != 0 )
                  {
                    v89 = v52;
                    v106 = (int)(uintptr_t)(sub_18F81E0(v54, v53));
                    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v144), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v123) + 1);
                    sub_19042E0(v181, &v144);
                    g4_std::string::Destroy(&v144);
                    v181[2] = v89;
                    v181[3] = v106;
                    v181[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                    v181[0] = ((uint32_t)(uintptr_t)&off_2049568);
                    std::terminate();
                  }
                  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
                  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
                  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
                  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
                  boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
                  *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
                  *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
                }
              }
              do
                v55 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
              while ( v55 == 4 );
              if ( v55 != 0 )
              {
                v88 = v55;
                v105 = (int)(uintptr_t)(sub_18F81E0(v57, v56));
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v145), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v123) + 2);
                sub_19042E0(v182, &v145);
                g4_std::string::Destroy(&v145);
                v182[2] = v88;
                v182[3] = v105;
                v182[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                v182[0] = ((uint32_t)(uintptr_t)&off_20495E0);
                std::terminate();
              }
              v114 = (volatile int32_t *)(sub_136CF40(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
              do
                v58 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
              while ( v58 == 4 );
              if ( v58 != 0 )
              {
                v87 = v58;
                v104 = (int)(uintptr_t)(sub_18F81E0(v60, v59));
                g4_std::string::construct_from_cstr((int)(uintptr_t)(&v146), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v123) + 3);
                sub_19042E0(v183, &v146);
                g4_std::string::Destroy(&v146);
                v183[2] = v87;
                v183[3] = v104;
                v183[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                v183[0] = ((uint32_t)(uintptr_t)&off_20495E0);
LABEL_129:
                std::terminate();
              }
              if ( v114 == nullptr )
                goto LABEL_129;
              v61 = v114;
              v62 = v114;
              v162 = v114;
              v115 = nullptr;
              *((uint32_t *)v162 + 1) = 1;
              *((uint32_t *)v61 + 2) = 1;
              *((uint32_t *)v62 + 3) = 0;
              *((uint8_t *)v62 + 16) = 0;
              *v62 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093EC8);
              if ( v162 != nullptr )
                v115 = (uint8_t *)G4_VCALL<int>(v162, 20);
              g4_std::string::construct_copy(&v124, v127);
              g4_std::string::construct_copy((char *)&v123 + 4, v129);
              if ( v115 != (uint8_t *)-4 )
                glotv3::EventOfSpyConfirmFailed::Construct(
                  (glotv3::Event::Self *)(v115 + 4),
                  (uint8_t **)&v124,
                  (uint8_t **)&v123 + 1);
              g4_std::string::Destroy((char *)&v123 + 4);
              g4_std::string::Destroy(&v124);
              *v115 = 1;
              v149 = (glotv3::Event::Self *)(v115 + 4);
              v150 = v162;
              if ( v162 != nullptr )
                __sync_add_and_fetch(v162 + 1, 1);
              boost::detail::shared_count::Destroy(&v162);
              v151 = v149;
              v152 = v150;
              if ( v150 != nullptr )
                __sync_add_and_fetch(v150 + 1, 1);
              glotv3::TrackingManager::AddEvent(v119, &v151, 0);
              boost::detail::shared_count::Destroy(&v152);
              boost::detail::shared_count::Destroy(&v150);
              g4_std::string::Destroy(v127);
              g4_std::string::Destroy(v129);
              g4_std::string::Destroy(&v128);
            }
          }
          else
          {
            v39 = v147;
            if ( v147 == nullptr )
            {
              __assert2(
                "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                653,
                "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glo"
                "tv3::Event, typename boost::detail::sp_member_access<T>::type = glotv3::Event::Self*]",
                "px != 0");
              v39 = v147;
            }
            glotv3::Event::getUUID((glotv3::Event::Self *)v131, v39);
            v161 = 0;
            v162 = nullptr;
            sub_1367F30();
            if ( g4_fnstatic_ec81e02332 == 0 )
            {
              g4_fnstatic_ec81e02332 = 1;
              if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
              {
                v40 = pthread_mutex_init(
                        &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
                        nullptr);
                if ( v40 != 0 )
                {
                  v77 = v40;
                  v94 = (int)(uintptr_t)(sub_18F81E0(v42, v41));
                  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v138), "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v121) + 3);
                  sub_19042E0(v175, &v138);
                  g4_std::string::Destroy(&v138);
                  v175[2] = v77;
                  v175[3] = v94;
                  v175[4] = (uint32_t)(uintptr_t)(&dword_213B814);
                  v175[0] = ((uint32_t)(uintptr_t)&off_2049568);
                  goto LABEL_129;
                }
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
                boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
                *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
                *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
              }
            }
            do
              v43 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
            while ( v43 == 4 );
            if ( v43 != 0 )
            {
              v76 = v43;
              v93 = (int)(uintptr_t)(sub_18F81E0(v45, v44));
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v139), "boost: mutex lock failed in pthread_mutex_lock", (int)(uintptr_t)(&v122));
              sub_19042E0(v176, &v139);
              g4_std::string::Destroy(&v139);
              v176[2] = v76;
              v176[3] = v93;
              v176[4] = (uint32_t)(uintptr_t)(&dword_213B814);
              v176[0] = ((uint32_t)(uintptr_t)&off_20495E0);
              std::terminate();
            }
            v112 = (volatile int32_t *)(sub_136CF40(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count));
            do
              v46 = pthread_mutex_unlock(&boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage);
            while ( v46 == 4 );
            if ( v46 != 0 )
            {
              v75 = v46;
              v92 = (int)(uintptr_t)(sub_18F81E0(v48, v47));
              g4_std::string::construct_from_cstr((int)(uintptr_t)(&v140), "boost: mutex unlock failed in pthread_mutex_unlock", (int)(uintptr_t)(&v122) + 1);
              sub_19042E0(v177, &v140);
              g4_std::string::Destroy(&v140);
              v177[2] = v75;
              v177[3] = v92;
              v177[4] = (uint32_t)(uintptr_t)(&dword_213B814);
              v177[0] = ((uint32_t)(uintptr_t)&off_20495E0);
              std::terminate();
            }
            if ( v112 == nullptr )
              goto LABEL_129;
            v49 = v112;
            v50 = v112;
            v162 = v112;
            v113 = nullptr;
            *((uint32_t *)v162 + 1) = 1;
            *((uint32_t *)v49 + 2) = 1;
            *((uint32_t *)v50 + 3) = 0;
            *((uint8_t *)v50 + 16) = 0;
            *v50 = (volatile int32_t)((uint32_t)(uintptr_t)&off_2093E88);
            if ( v162 != nullptr )
              v113 = (uint8_t *)G4_VCALL<int>(v162, 20);
            g4_std::string::construct_copy(&v126, v131);
            if ( v113 != (uint8_t *)-4 )
              glotv3::EventOfSpyConfirmSending::Construct((glotv3::Event::Self *)(v113 + 4), &v126);
            g4_std::string::Destroy(&v126);
            *v113 = 1;
            v157 = (glotv3::Event::Self *)(v113 + 4);
            v158 = v162;
            if ( v162 != nullptr )
              __sync_add_and_fetch(v162 + 1, 1);
            boost::detail::shared_count::Destroy(&v162);
            v159 = v157;
            v160 = v158;
            if ( v158 != nullptr )
              __sync_add_and_fetch(v158 + 1, 1);
            glotv3::TrackingManager::AddEvent(v119, &v159, 0);
            boost::detail::shared_count::Destroy(&v160);
            boost::detail::shared_count::Destroy(&v158);
            g4_std::string::Destroy(v131);
          }
          boost::detail::shared_count::Destroy(&v148);
        }
      }
    }
  }
  v6 = v187;
  if ( v187 != nullptr )
  {
    v7 = *(uint32_t **)v187;
    if ( *(uint32_t *)v187 != 0 && v7 != *((uint32_t **)v187 + 2) )
    {
      while ( 1 )
      {
        v8 = (uint32_t *)v7[2];
        free(v7);
        *(uint32_t *)v6 = (uint32_t)(uintptr_t)(v8);
        if ( v8 == nullptr || v8 == *((uint32_t **)v6 + 2) )
          break;
        v7 = v8;
      }
    }
    opDelete(*((void **)v6 + 4));
    opDelete(v6);
  }
  v9 = (uint32_t *)(ptr[0]);
  if ( ptr[0] != nullptr && ptr[0] != v166 )
  {
    while ( 1 )
    {
      v10 = (void *)v9[2];
      free(v9);
      ptr[0] = v10;
      if ( v10 == nullptr || v10 == v166 )
        break;
      v9 = (uint32_t *)(v10);
    }
  }
  opDelete(v168);
}


// ============================================================================
// Address:   0x1372950 (size: 10199 bytes)
// Symbol:    sub_1372950
// Demangled: sub_1372950
// ============================================================================
int sub_1372950(int a1, int a2)
{
  int v2;
  int v3;
  uint8_t *v4;
  char v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint8_t *v9;
  size_t *v10;
  size_t *v11;
  uint32_t *v12;
  size_t *v13;
  size_t v14;
  int v15;
  int v16;
  int *v17;
  int *v18;
  uint8_t *v19;
  uint8_t *v20;
  int v21;
  glotv3::TrackingManager::Self *v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  glotv3::TrackingManager::Self *v29;
  typedef size_t *_g4_t_v30;
  typedef size_t *_g4_t_v31;
  typedef uint8_t _g4_t_v32;
  typedef uint8_t _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef size_t _g4_t_n;
  typedef size_t _g4_t_na;
  typedef size_t _g4_t_nb;
  typedef size_t _g4_t_nc;
  typedef uint8_t _g4_t_ne;
  typedef bool _g4_t_nd;
  typedef uint8_t _g4_t_v44[17];
  typedef int _g4_t_v45;
  typedef uint32_t _g4_t_v46[4];
  typedef void *_g4_t_s1;
  typedef unsigned int _g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef char _g4_t_v50[4];
  typedef char _g4_t_v51[4];
  typedef char _g4_t_v52[4];
  typedef char _g4_t_v53[4];
  typedef char _g4_t_v54[4];
  typedef char _g4_t_v55[4];
  typedef char _g4_t_v56[4];
  typedef char _g4_t_v57[4];
  typedef char _g4_t_v58[4];
  typedef char _g4_t_v59[4];
  typedef char _g4_t_v60[4];
  typedef char _g4_t_v61[4];
  typedef char _g4_t_v62[4];
  typedef char _g4_t_v63[4];
  typedef char _g4_t_v64[4];
  typedef char _g4_t_v65[4];
  typedef char _g4_t_v66[4];
  typedef char _g4_t_v67[4];
  typedef char _g4_t_v68[4];
  typedef char _g4_t_v69[4];
  typedef char _g4_t_v70[4];
  typedef char _g4_t_v71[4];
  typedef char _g4_t_v72[4];
  typedef char _g4_t_v73[4];
  typedef char _g4_t_v74[4];
  typedef char _g4_t_v75[4];
  typedef char _g4_t_v76[4];
  typedef char _g4_t_v77[4];
  typedef char _g4_t_v78[4];
  typedef char _g4_t_v79[4];
  typedef char _g4_t_v80[4];
  typedef char _g4_t_v81[4];
  typedef char _g4_t_v82[4];
  typedef char _g4_t_v83[4];
  typedef char _g4_t_v84[4];
  typedef char _g4_t_v85[4];
  typedef char _g4_t_v86[4];
  typedef char _g4_t_v87[4];
  typedef char _g4_t_v88[4];
  typedef char _g4_t_v89[4];
  typedef char _g4_t_v90[4];
  typedef char _g4_t_v91[4];
  typedef char _g4_t_v92[4];
  typedef char _g4_t_v93[4];
  typedef char _g4_t_v94[4];
  typedef char _g4_t_v95[4];
  typedef char _g4_t_v96[4];
  typedef char _g4_t_v97[4];
  typedef char _g4_t_v98[4];
  typedef char _g4_t_v99[4];
  typedef char _g4_t_v100[4];
  typedef char _g4_t_v101[4];
  typedef char _g4_t_v102[4];
  typedef char _g4_t_v103[4];
  typedef char _g4_t_v104[4];
  typedef char _g4_t_v105[4];
  typedef char _g4_t_v106[4];
  typedef char _g4_t_v107[4];
  typedef char _g4_t_v108[4];
  typedef char _g4_t_v109[4];
  typedef char _g4_t_v110[4];
  typedef char _g4_t_v111[4];
  typedef char _g4_t_v112[4];
  typedef char _g4_t_v113[4];
  typedef char _g4_t_v114[4];
  typedef char _g4_t_v115[4];
  typedef char _g4_t_v116[4];
  typedef int _g4_t_v117;
  typedef int _g4_t_v118;
  typedef int _g4_t_v119;
  typedef char _g4_t_v120[4];
  typedef char _g4_t_v121[4];
  typedef uint32_t *_g4_t_v122;
  typedef uint32_t *_g4_t_v123;
  typedef char _g4_t_v124;
  typedef char _g4_t_v125[4];
  typedef uint32_t _g4_t_v126[2];
  typedef glotv3::Event::Self *_g4_t_v127;
  typedef volatile int32_t *_g4_t_v128;
  typedef glotv3::Event::Self *_g4_t_v129;
  typedef volatile int32_t *_g4_t_v130;
  typedef glotv3::Event::Self *_g4_t_v131;
  typedef volatile int32_t *_g4_t_v132;
  typedef glotv3::Event::Self *_g4_t_v133;
  typedef volatile int32_t *_g4_t_v134;
  typedef glotv3::Event::Self *_g4_t_v135;
  typedef volatile int32_t *_g4_t_v136;
  typedef glotv3::Event::Self *_g4_t_v137;
  typedef volatile int32_t *_g4_t_v138;
  typedef glotv3::Event::Self *_g4_t_v139;
  typedef volatile int32_t *_g4_t_v140;
  typedef glotv3::Event::Self *_g4_t_v141;
  typedef volatile int32_t *_g4_t_v142;
  typedef glotv3::Event::Self *_g4_t_v143;
  typedef volatile int32_t *_g4_t_v144;
  typedef glotv3::Event::Self *_g4_t_v145;
  typedef volatile int32_t *_g4_t_v146;
  typedef glotv3::Event::Self *_g4_t_v147;
  typedef volatile int32_t *_g4_t_v148;
  typedef glotv3::Event::Self *_g4_t_v149;
  typedef volatile int32_t *_g4_t_v150;
  typedef glotv3::Event::Self *_g4_t_v151;
  typedef volatile int32_t *_g4_t_v152;
  typedef glotv3::Event::Self *_g4_t_v153;
  typedef volatile int32_t *_g4_t_v154;
  typedef glotv3::Event::Self *_g4_t_v155;
  typedef volatile int32_t *_g4_t_v156;
  typedef glotv3::Event::Self *_g4_t_v157;
  typedef volatile int32_t *_g4_t_v158;
  typedef glotv3::Event::Self *_g4_t_v159;
  typedef volatile int32_t *_g4_t_v160;
  typedef glotv3::Event::Self *_g4_t_v161;
  typedef volatile int32_t *_g4_t_v162;
  typedef glotv3::Event::Self *_g4_t_v163;
  typedef volatile int32_t *_g4_t_v164;
  typedef glotv3::Event::Self *_g4_t_v165;
  typedef volatile int32_t *_g4_t_v166;
  typedef glotv3::Event::Self *_g4_t_v167;
  typedef volatile int32_t *_g4_t_v168;
  typedef glotv3::Event::Self *_g4_t_v169;
  typedef volatile int32_t *_g4_t_v170;
  typedef glotv3::Event::Self *_g4_t_v171;
  typedef volatile int32_t *_g4_t_v172;
  typedef glotv3::Event::Self *_g4_t_v173;
  typedef volatile int32_t *_g4_t_v174;
  typedef glotv3::Event::Self *_g4_t_v175;
  typedef volatile int32_t *_g4_t_v176;
  typedef glotv3::Event::Self *_g4_t_v177;
  typedef volatile int32_t *_g4_t_v178;
  typedef glotv3::Event::Self *_g4_t_v179;
  typedef volatile int32_t *_g4_t_v180;
  typedef glotv3::Event::Self *_g4_t_v181;
  typedef volatile int32_t *_g4_t_v182;
  typedef glotv3::Event::Self *_g4_t_v183;
  typedef volatile int32_t *_g4_t_v184;
  typedef glotv3::Event::Self *_g4_t_v185;
  typedef volatile int32_t *_g4_t_v186;
  typedef glotv3::Event::Self *_g4_t_v187;
  typedef volatile int32_t *_g4_t_v188;
  typedef glotv3::Event::Self *_g4_t_v189;
  typedef volatile int32_t *_g4_t_v190;
  typedef glotv3::Event::Self *_g4_t_v191;
  typedef volatile int32_t *_g4_t_v192;
  typedef glotv3::Event::Self *_g4_t_v193;
  typedef volatile int32_t *_g4_t_v194;
  typedef glotv3::Event::Self *_g4_t_v195;
  typedef volatile int32_t *_g4_t_v196;
  typedef glotv3::Event::Self *_g4_t_v197;
  typedef volatile int32_t *_g4_t_v198;
  typedef glotv3::TrackingManager::Self *_g4_t_v199;
  typedef volatile int32_t *_g4_t_v200;
  typedef glotv3::Event::Self *_g4_t_v201;
  typedef volatile int32_t *_g4_t_v202;
  typedef glotv3::Event::Self *_g4_t_v203;
  typedef volatile int32_t *_g4_t_v204;
  typedef glotv3::Event::Self *_g4_t_v205;
  typedef volatile int32_t *_g4_t_v206;
  typedef glotv3::Event::Self *_g4_t_v207;
  typedef volatile int32_t *_g4_t_v208;
  typedef glotv3::Event::Self *_g4_t_v209;
  typedef volatile int32_t *_g4_t_v210;
  typedef glotv3::Event::Self *_g4_t_v211;
  typedef volatile int32_t *_g4_t_v212;
  typedef glotv3::Event::Self *_g4_t_v213;
  typedef volatile int32_t *_g4_t_v214;
  typedef glotv3::Event::Self *_g4_t_v215;
  typedef volatile int32_t *_g4_t_v216;
  typedef glotv3::Event::Self *_g4_t_v217;
  typedef volatile int32_t *_g4_t_v218;
  typedef glotv3::Event::Self *_g4_t_v219;
  typedef volatile int32_t *_g4_t_v220;
  typedef glotv3::Event::Self *_g4_t_v221;
  typedef volatile int32_t *_g4_t_v222;
  typedef glotv3::Event::Self *_g4_t_v223;
  typedef volatile int32_t *_g4_t_v224;
  typedef glotv3::Event::Self *_g4_t_v225;
  typedef volatile int32_t *_g4_t_v226;
  typedef glotv3::Event::Self *_g4_t_v227;
  typedef volatile int32_t *_g4_t_v228;
  typedef glotv3::TrackingManager::Self *_g4_t_v229;
  typedef volatile int32_t *_g4_t_v230;
  typedef char _g4_t_v231;
  typedef char _g4_t_v232[4];
  typedef char _g4_t_v233;
  typedef char _g4_t_v234[4];
  typedef char _g4_t_v235;
  typedef char _g4_t_v236[4];
  typedef char _g4_t_v237;
  typedef char _g4_t_v238[4];
  typedef char _g4_t_v239;
  typedef char _g4_t_v240[4];
  typedef int _g4_t_v241[2];
  typedef uint32_t _g4_t_v242[2];
  typedef int _g4_t_v243;
  typedef int _g4_t_v244[8];
  typedef int (**_g4_t_v245)(int);
  typedef int _g4_t_v246;
  typedef uint32_t _g4_t_v247[29];
  typedef uint8_t _g4_t_v248[4];
  typedef int _g4_t_v249;
  typedef int _g4_t_v250;
  typedef int _g4_t_v251;
  typedef int _g4_t_v252;
  typedef int (**_g4_t_v253)(int);
  typedef uint32_t _g4_t_v254[3];
  typedef uint8_t *_g4_t_v255;
  typedef uint8_t *_g4_t_v256;
  typedef uint8_t *_g4_t_v257;
  typedef int _g4_t_v258;
  typedef char _g4_t_v259[4];
  typedef int _g4_t_v260;
  typedef uint32_t *_g4_t_v261;
  typedef uint32_t _g4_t_v262[29];
  typedef char _g4_t_v263;
  typedef char _g4_t_v264;
  typedef int _g4_t_v265;
  typedef int _g4_t_v266;
  typedef int _g4_t_v267;
  typedef int _g4_t_v268;
  typedef int *_g4_t_v269;
  enum : size_t {
    _g4_s0 = 1328u,
    _g4_s1 = (0u + sizeof(_g4_t_v30)) > _g4_s0 ? (0u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v31)) > _g4_s1 ? (0u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v32)) > _g4_s2 ? (0u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v33)) > _g4_s3 ? (0u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v34)) > _g4_s4 ? (0u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v36)) > _g4_s5 ? (20u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v37)) > _g4_s6 ? (20u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_n)) > _g4_s7 ? (24u + sizeof(_g4_t_n)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_na)) > _g4_s8 ? (24u + sizeof(_g4_t_na)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_nb)) > _g4_s9 ? (24u + sizeof(_g4_t_nb)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_nc)) > _g4_s10 ? (24u + sizeof(_g4_t_nc)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_ne)) > _g4_s11 ? (24u + sizeof(_g4_t_ne)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_nd)) > _g4_s12 ? (24u + sizeof(_g4_t_nd)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v44)) > _g4_s13 ? (28u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (45u + sizeof(_g4_t_v45)) > _g4_s14 ? (45u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v46)) > _g4_s15 ? (48u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_s1)) > _g4_s16 ? (64u + sizeof(_g4_t_s1)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v48)) > _g4_s17 ? (68u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v49)) > _g4_s18 ? (72u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (76u + sizeof(_g4_t_v50)) > _g4_s19 ? (76u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v51)) > _g4_s20 ? (80u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v52)) > _g4_s21 ? (84u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v53)) > _g4_s22 ? (88u + sizeof(_g4_t_v53)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v54)) > _g4_s23 ? (92u + sizeof(_g4_t_v54)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v55)) > _g4_s24 ? (96u + sizeof(_g4_t_v55)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v56)) > _g4_s25 ? (100u + sizeof(_g4_t_v56)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v57)) > _g4_s26 ? (104u + sizeof(_g4_t_v57)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v58)) > _g4_s27 ? (108u + sizeof(_g4_t_v58)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v59)) > _g4_s28 ? (112u + sizeof(_g4_t_v59)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v60)) > _g4_s29 ? (116u + sizeof(_g4_t_v60)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v61)) > _g4_s30 ? (120u + sizeof(_g4_t_v61)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v62)) > _g4_s31 ? (124u + sizeof(_g4_t_v62)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v63)) > _g4_s32 ? (128u + sizeof(_g4_t_v63)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v64)) > _g4_s33 ? (132u + sizeof(_g4_t_v64)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v65)) > _g4_s34 ? (136u + sizeof(_g4_t_v65)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v66)) > _g4_s35 ? (140u + sizeof(_g4_t_v66)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v67)) > _g4_s36 ? (144u + sizeof(_g4_t_v67)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v68)) > _g4_s37 ? (148u + sizeof(_g4_t_v68)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v69)) > _g4_s38 ? (152u + sizeof(_g4_t_v69)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v70)) > _g4_s39 ? (156u + sizeof(_g4_t_v70)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v71)) > _g4_s40 ? (160u + sizeof(_g4_t_v71)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v72)) > _g4_s41 ? (164u + sizeof(_g4_t_v72)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v73)) > _g4_s42 ? (168u + sizeof(_g4_t_v73)) : _g4_s42,
    _g4_s44 = (172u + sizeof(_g4_t_v74)) > _g4_s43 ? (172u + sizeof(_g4_t_v74)) : _g4_s43,
    _g4_s45 = (176u + sizeof(_g4_t_v75)) > _g4_s44 ? (176u + sizeof(_g4_t_v75)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v76)) > _g4_s45 ? (180u + sizeof(_g4_t_v76)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v77)) > _g4_s46 ? (184u + sizeof(_g4_t_v77)) : _g4_s46,
    _g4_s48 = (188u + sizeof(_g4_t_v78)) > _g4_s47 ? (188u + sizeof(_g4_t_v78)) : _g4_s47,
    _g4_s49 = (192u + sizeof(_g4_t_v79)) > _g4_s48 ? (192u + sizeof(_g4_t_v79)) : _g4_s48,
    _g4_s50 = (196u + sizeof(_g4_t_v80)) > _g4_s49 ? (196u + sizeof(_g4_t_v80)) : _g4_s49,
    _g4_s51 = (200u + sizeof(_g4_t_v81)) > _g4_s50 ? (200u + sizeof(_g4_t_v81)) : _g4_s50,
    _g4_s52 = (204u + sizeof(_g4_t_v82)) > _g4_s51 ? (204u + sizeof(_g4_t_v82)) : _g4_s51,
    _g4_s53 = (208u + sizeof(_g4_t_v83)) > _g4_s52 ? (208u + sizeof(_g4_t_v83)) : _g4_s52,
    _g4_s54 = (212u + sizeof(_g4_t_v84)) > _g4_s53 ? (212u + sizeof(_g4_t_v84)) : _g4_s53,
    _g4_s55 = (216u + sizeof(_g4_t_v85)) > _g4_s54 ? (216u + sizeof(_g4_t_v85)) : _g4_s54,
    _g4_s56 = (220u + sizeof(_g4_t_v86)) > _g4_s55 ? (220u + sizeof(_g4_t_v86)) : _g4_s55,
    _g4_s57 = (224u + sizeof(_g4_t_v87)) > _g4_s56 ? (224u + sizeof(_g4_t_v87)) : _g4_s56,
    _g4_s58 = (228u + sizeof(_g4_t_v88)) > _g4_s57 ? (228u + sizeof(_g4_t_v88)) : _g4_s57,
    _g4_s59 = (232u + sizeof(_g4_t_v89)) > _g4_s58 ? (232u + sizeof(_g4_t_v89)) : _g4_s58,
    _g4_s60 = (236u + sizeof(_g4_t_v90)) > _g4_s59 ? (236u + sizeof(_g4_t_v90)) : _g4_s59,
    _g4_s61 = (240u + sizeof(_g4_t_v91)) > _g4_s60 ? (240u + sizeof(_g4_t_v91)) : _g4_s60,
    _g4_s62 = (244u + sizeof(_g4_t_v92)) > _g4_s61 ? (244u + sizeof(_g4_t_v92)) : _g4_s61,
    _g4_s63 = (248u + sizeof(_g4_t_v93)) > _g4_s62 ? (248u + sizeof(_g4_t_v93)) : _g4_s62,
    _g4_s64 = (252u + sizeof(_g4_t_v94)) > _g4_s63 ? (252u + sizeof(_g4_t_v94)) : _g4_s63,
    _g4_s65 = (256u + sizeof(_g4_t_v95)) > _g4_s64 ? (256u + sizeof(_g4_t_v95)) : _g4_s64,
    _g4_s66 = (260u + sizeof(_g4_t_v96)) > _g4_s65 ? (260u + sizeof(_g4_t_v96)) : _g4_s65,
    _g4_s67 = (264u + sizeof(_g4_t_v97)) > _g4_s66 ? (264u + sizeof(_g4_t_v97)) : _g4_s66,
    _g4_s68 = (268u + sizeof(_g4_t_v98)) > _g4_s67 ? (268u + sizeof(_g4_t_v98)) : _g4_s67,
    _g4_s69 = (272u + sizeof(_g4_t_v99)) > _g4_s68 ? (272u + sizeof(_g4_t_v99)) : _g4_s68,
    _g4_s70 = (276u + sizeof(_g4_t_v100)) > _g4_s69 ? (276u + sizeof(_g4_t_v100)) : _g4_s69,
    _g4_s71 = (280u + sizeof(_g4_t_v101)) > _g4_s70 ? (280u + sizeof(_g4_t_v101)) : _g4_s70,
    _g4_s72 = (284u + sizeof(_g4_t_v102)) > _g4_s71 ? (284u + sizeof(_g4_t_v102)) : _g4_s71,
    _g4_s73 = (288u + sizeof(_g4_t_v103)) > _g4_s72 ? (288u + sizeof(_g4_t_v103)) : _g4_s72,
    _g4_s74 = (292u + sizeof(_g4_t_v104)) > _g4_s73 ? (292u + sizeof(_g4_t_v104)) : _g4_s73,
    _g4_s75 = (296u + sizeof(_g4_t_v105)) > _g4_s74 ? (296u + sizeof(_g4_t_v105)) : _g4_s74,
    _g4_s76 = (300u + sizeof(_g4_t_v106)) > _g4_s75 ? (300u + sizeof(_g4_t_v106)) : _g4_s75,
    _g4_s77 = (304u + sizeof(_g4_t_v107)) > _g4_s76 ? (304u + sizeof(_g4_t_v107)) : _g4_s76,
    _g4_s78 = (308u + sizeof(_g4_t_v108)) > _g4_s77 ? (308u + sizeof(_g4_t_v108)) : _g4_s77,
    _g4_s79 = (312u + sizeof(_g4_t_v109)) > _g4_s78 ? (312u + sizeof(_g4_t_v109)) : _g4_s78,
    _g4_s80 = (316u + sizeof(_g4_t_v110)) > _g4_s79 ? (316u + sizeof(_g4_t_v110)) : _g4_s79,
    _g4_s81 = (320u + sizeof(_g4_t_v111)) > _g4_s80 ? (320u + sizeof(_g4_t_v111)) : _g4_s80,
    _g4_s82 = (324u + sizeof(_g4_t_v112)) > _g4_s81 ? (324u + sizeof(_g4_t_v112)) : _g4_s81,
    _g4_s83 = (328u + sizeof(_g4_t_v113)) > _g4_s82 ? (328u + sizeof(_g4_t_v113)) : _g4_s82,
    _g4_s84 = (332u + sizeof(_g4_t_v114)) > _g4_s83 ? (332u + sizeof(_g4_t_v114)) : _g4_s83,
    _g4_s85 = (336u + sizeof(_g4_t_v115)) > _g4_s84 ? (336u + sizeof(_g4_t_v115)) : _g4_s84,
    _g4_s86 = (340u + sizeof(_g4_t_v116)) > _g4_s85 ? (340u + sizeof(_g4_t_v116)) : _g4_s85,
    _g4_s87 = (344u + sizeof(_g4_t_v117)) > _g4_s86 ? (344u + sizeof(_g4_t_v117)) : _g4_s86,
    _g4_s88 = (348u + sizeof(_g4_t_v118)) > _g4_s87 ? (348u + sizeof(_g4_t_v118)) : _g4_s87,
    _g4_s89 = (352u + sizeof(_g4_t_v119)) > _g4_s88 ? (352u + sizeof(_g4_t_v119)) : _g4_s88,
    _g4_s90 = (356u + sizeof(_g4_t_v120)) > _g4_s89 ? (356u + sizeof(_g4_t_v120)) : _g4_s89,
    _g4_s91 = (360u + sizeof(_g4_t_v121)) > _g4_s90 ? (360u + sizeof(_g4_t_v121)) : _g4_s90,
    _g4_s92 = (364u + sizeof(_g4_t_v122)) > _g4_s91 ? (364u + sizeof(_g4_t_v122)) : _g4_s91,
    _g4_s93 = (368u + sizeof(_g4_t_v123)) > _g4_s92 ? (368u + sizeof(_g4_t_v123)) : _g4_s92,
    _g4_s94 = (372u + sizeof(_g4_t_v124)) > _g4_s93 ? (372u + sizeof(_g4_t_v124)) : _g4_s93,
    _g4_s95 = (376u + sizeof(_g4_t_v125)) > _g4_s94 ? (376u + sizeof(_g4_t_v125)) : _g4_s94,
    _g4_s96 = (380u + sizeof(_g4_t_v126)) > _g4_s95 ? (380u + sizeof(_g4_t_v126)) : _g4_s95,
    _g4_s97 = (388u + sizeof(_g4_t_v127)) > _g4_s96 ? (388u + sizeof(_g4_t_v127)) : _g4_s96,
    _g4_s98 = (392u + sizeof(_g4_t_v128)) > _g4_s97 ? (392u + sizeof(_g4_t_v128)) : _g4_s97,
    _g4_s99 = (396u + sizeof(_g4_t_v129)) > _g4_s98 ? (396u + sizeof(_g4_t_v129)) : _g4_s98,
    _g4_s100 = (400u + sizeof(_g4_t_v130)) > _g4_s99 ? (400u + sizeof(_g4_t_v130)) : _g4_s99,
    _g4_s101 = (404u + sizeof(_g4_t_v131)) > _g4_s100 ? (404u + sizeof(_g4_t_v131)) : _g4_s100,
    _g4_s102 = (408u + sizeof(_g4_t_v132)) > _g4_s101 ? (408u + sizeof(_g4_t_v132)) : _g4_s101,
    _g4_s103 = (412u + sizeof(_g4_t_v133)) > _g4_s102 ? (412u + sizeof(_g4_t_v133)) : _g4_s102,
    _g4_s104 = (416u + sizeof(_g4_t_v134)) > _g4_s103 ? (416u + sizeof(_g4_t_v134)) : _g4_s103,
    _g4_s105 = (420u + sizeof(_g4_t_v135)) > _g4_s104 ? (420u + sizeof(_g4_t_v135)) : _g4_s104,
    _g4_s106 = (424u + sizeof(_g4_t_v136)) > _g4_s105 ? (424u + sizeof(_g4_t_v136)) : _g4_s105,
    _g4_s107 = (428u + sizeof(_g4_t_v137)) > _g4_s106 ? (428u + sizeof(_g4_t_v137)) : _g4_s106,
    _g4_s108 = (432u + sizeof(_g4_t_v138)) > _g4_s107 ? (432u + sizeof(_g4_t_v138)) : _g4_s107,
    _g4_s109 = (436u + sizeof(_g4_t_v139)) > _g4_s108 ? (436u + sizeof(_g4_t_v139)) : _g4_s108,
    _g4_s110 = (440u + sizeof(_g4_t_v140)) > _g4_s109 ? (440u + sizeof(_g4_t_v140)) : _g4_s109,
    _g4_s111 = (444u + sizeof(_g4_t_v141)) > _g4_s110 ? (444u + sizeof(_g4_t_v141)) : _g4_s110,
    _g4_s112 = (448u + sizeof(_g4_t_v142)) > _g4_s111 ? (448u + sizeof(_g4_t_v142)) : _g4_s111,
    _g4_s113 = (452u + sizeof(_g4_t_v143)) > _g4_s112 ? (452u + sizeof(_g4_t_v143)) : _g4_s112,
    _g4_s114 = (456u + sizeof(_g4_t_v144)) > _g4_s113 ? (456u + sizeof(_g4_t_v144)) : _g4_s113,
    _g4_s115 = (460u + sizeof(_g4_t_v145)) > _g4_s114 ? (460u + sizeof(_g4_t_v145)) : _g4_s114,
    _g4_s116 = (464u + sizeof(_g4_t_v146)) > _g4_s115 ? (464u + sizeof(_g4_t_v146)) : _g4_s115,
    _g4_s117 = (468u + sizeof(_g4_t_v147)) > _g4_s116 ? (468u + sizeof(_g4_t_v147)) : _g4_s116,
    _g4_s118 = (472u + sizeof(_g4_t_v148)) > _g4_s117 ? (472u + sizeof(_g4_t_v148)) : _g4_s117,
    _g4_s119 = (476u + sizeof(_g4_t_v149)) > _g4_s118 ? (476u + sizeof(_g4_t_v149)) : _g4_s118,
    _g4_s120 = (480u + sizeof(_g4_t_v150)) > _g4_s119 ? (480u + sizeof(_g4_t_v150)) : _g4_s119,
    _g4_s121 = (484u + sizeof(_g4_t_v151)) > _g4_s120 ? (484u + sizeof(_g4_t_v151)) : _g4_s120,
    _g4_s122 = (488u + sizeof(_g4_t_v152)) > _g4_s121 ? (488u + sizeof(_g4_t_v152)) : _g4_s121,
    _g4_s123 = (492u + sizeof(_g4_t_v153)) > _g4_s122 ? (492u + sizeof(_g4_t_v153)) : _g4_s122,
    _g4_s124 = (496u + sizeof(_g4_t_v154)) > _g4_s123 ? (496u + sizeof(_g4_t_v154)) : _g4_s123,
    _g4_s125 = (500u + sizeof(_g4_t_v155)) > _g4_s124 ? (500u + sizeof(_g4_t_v155)) : _g4_s124,
    _g4_s126 = (504u + sizeof(_g4_t_v156)) > _g4_s125 ? (504u + sizeof(_g4_t_v156)) : _g4_s125,
    _g4_s127 = (508u + sizeof(_g4_t_v157)) > _g4_s126 ? (508u + sizeof(_g4_t_v157)) : _g4_s126,
    _g4_s128 = (512u + sizeof(_g4_t_v158)) > _g4_s127 ? (512u + sizeof(_g4_t_v158)) : _g4_s127,
    _g4_s129 = (516u + sizeof(_g4_t_v159)) > _g4_s128 ? (516u + sizeof(_g4_t_v159)) : _g4_s128,
    _g4_s130 = (520u + sizeof(_g4_t_v160)) > _g4_s129 ? (520u + sizeof(_g4_t_v160)) : _g4_s129,
    _g4_s131 = (524u + sizeof(_g4_t_v161)) > _g4_s130 ? (524u + sizeof(_g4_t_v161)) : _g4_s130,
    _g4_s132 = (528u + sizeof(_g4_t_v162)) > _g4_s131 ? (528u + sizeof(_g4_t_v162)) : _g4_s131,
    _g4_s133 = (532u + sizeof(_g4_t_v163)) > _g4_s132 ? (532u + sizeof(_g4_t_v163)) : _g4_s132,
    _g4_s134 = (536u + sizeof(_g4_t_v164)) > _g4_s133 ? (536u + sizeof(_g4_t_v164)) : _g4_s133,
    _g4_s135 = (540u + sizeof(_g4_t_v165)) > _g4_s134 ? (540u + sizeof(_g4_t_v165)) : _g4_s134,
    _g4_s136 = (544u + sizeof(_g4_t_v166)) > _g4_s135 ? (544u + sizeof(_g4_t_v166)) : _g4_s135,
    _g4_s137 = (548u + sizeof(_g4_t_v167)) > _g4_s136 ? (548u + sizeof(_g4_t_v167)) : _g4_s136,
    _g4_s138 = (552u + sizeof(_g4_t_v168)) > _g4_s137 ? (552u + sizeof(_g4_t_v168)) : _g4_s137,
    _g4_s139 = (556u + sizeof(_g4_t_v169)) > _g4_s138 ? (556u + sizeof(_g4_t_v169)) : _g4_s138,
    _g4_s140 = (560u + sizeof(_g4_t_v170)) > _g4_s139 ? (560u + sizeof(_g4_t_v170)) : _g4_s139,
    _g4_s141 = (564u + sizeof(_g4_t_v171)) > _g4_s140 ? (564u + sizeof(_g4_t_v171)) : _g4_s140,
    _g4_s142 = (568u + sizeof(_g4_t_v172)) > _g4_s141 ? (568u + sizeof(_g4_t_v172)) : _g4_s141,
    _g4_s143 = (572u + sizeof(_g4_t_v173)) > _g4_s142 ? (572u + sizeof(_g4_t_v173)) : _g4_s142,
    _g4_s144 = (576u + sizeof(_g4_t_v174)) > _g4_s143 ? (576u + sizeof(_g4_t_v174)) : _g4_s143,
    _g4_s145 = (580u + sizeof(_g4_t_v175)) > _g4_s144 ? (580u + sizeof(_g4_t_v175)) : _g4_s144,
    _g4_s146 = (584u + sizeof(_g4_t_v176)) > _g4_s145 ? (584u + sizeof(_g4_t_v176)) : _g4_s145,
    _g4_s147 = (588u + sizeof(_g4_t_v177)) > _g4_s146 ? (588u + sizeof(_g4_t_v177)) : _g4_s146,
    _g4_s148 = (592u + sizeof(_g4_t_v178)) > _g4_s147 ? (592u + sizeof(_g4_t_v178)) : _g4_s147,
    _g4_s149 = (596u + sizeof(_g4_t_v179)) > _g4_s148 ? (596u + sizeof(_g4_t_v179)) : _g4_s148,
    _g4_s150 = (600u + sizeof(_g4_t_v180)) > _g4_s149 ? (600u + sizeof(_g4_t_v180)) : _g4_s149,
    _g4_s151 = (604u + sizeof(_g4_t_v181)) > _g4_s150 ? (604u + sizeof(_g4_t_v181)) : _g4_s150,
    _g4_s152 = (608u + sizeof(_g4_t_v182)) > _g4_s151 ? (608u + sizeof(_g4_t_v182)) : _g4_s151,
    _g4_s153 = (612u + sizeof(_g4_t_v183)) > _g4_s152 ? (612u + sizeof(_g4_t_v183)) : _g4_s152,
    _g4_s154 = (616u + sizeof(_g4_t_v184)) > _g4_s153 ? (616u + sizeof(_g4_t_v184)) : _g4_s153,
    _g4_s155 = (620u + sizeof(_g4_t_v185)) > _g4_s154 ? (620u + sizeof(_g4_t_v185)) : _g4_s154,
    _g4_s156 = (624u + sizeof(_g4_t_v186)) > _g4_s155 ? (624u + sizeof(_g4_t_v186)) : _g4_s155,
    _g4_s157 = (628u + sizeof(_g4_t_v187)) > _g4_s156 ? (628u + sizeof(_g4_t_v187)) : _g4_s156,
    _g4_s158 = (632u + sizeof(_g4_t_v188)) > _g4_s157 ? (632u + sizeof(_g4_t_v188)) : _g4_s157,
    _g4_s159 = (636u + sizeof(_g4_t_v189)) > _g4_s158 ? (636u + sizeof(_g4_t_v189)) : _g4_s158,
    _g4_s160 = (640u + sizeof(_g4_t_v190)) > _g4_s159 ? (640u + sizeof(_g4_t_v190)) : _g4_s159,
    _g4_s161 = (644u + sizeof(_g4_t_v191)) > _g4_s160 ? (644u + sizeof(_g4_t_v191)) : _g4_s160,
    _g4_s162 = (648u + sizeof(_g4_t_v192)) > _g4_s161 ? (648u + sizeof(_g4_t_v192)) : _g4_s161,
    _g4_s163 = (652u + sizeof(_g4_t_v193)) > _g4_s162 ? (652u + sizeof(_g4_t_v193)) : _g4_s162,
    _g4_s164 = (656u + sizeof(_g4_t_v194)) > _g4_s163 ? (656u + sizeof(_g4_t_v194)) : _g4_s163,
    _g4_s165 = (660u + sizeof(_g4_t_v195)) > _g4_s164 ? (660u + sizeof(_g4_t_v195)) : _g4_s164,
    _g4_s166 = (664u + sizeof(_g4_t_v196)) > _g4_s165 ? (664u + sizeof(_g4_t_v196)) : _g4_s165,
    _g4_s167 = (668u + sizeof(_g4_t_v197)) > _g4_s166 ? (668u + sizeof(_g4_t_v197)) : _g4_s166,
    _g4_s168 = (672u + sizeof(_g4_t_v198)) > _g4_s167 ? (672u + sizeof(_g4_t_v198)) : _g4_s167,
    _g4_s169 = (676u + sizeof(_g4_t_v199)) > _g4_s168 ? (676u + sizeof(_g4_t_v199)) : _g4_s168,
    _g4_s170 = (680u + sizeof(_g4_t_v200)) > _g4_s169 ? (680u + sizeof(_g4_t_v200)) : _g4_s169,
    _g4_s171 = (684u + sizeof(_g4_t_v201)) > _g4_s170 ? (684u + sizeof(_g4_t_v201)) : _g4_s170,
    _g4_s172 = (688u + sizeof(_g4_t_v202)) > _g4_s171 ? (688u + sizeof(_g4_t_v202)) : _g4_s171,
    _g4_s173 = (692u + sizeof(_g4_t_v203)) > _g4_s172 ? (692u + sizeof(_g4_t_v203)) : _g4_s172,
    _g4_s174 = (696u + sizeof(_g4_t_v204)) > _g4_s173 ? (696u + sizeof(_g4_t_v204)) : _g4_s173,
    _g4_s175 = (700u + sizeof(_g4_t_v205)) > _g4_s174 ? (700u + sizeof(_g4_t_v205)) : _g4_s174,
    _g4_s176 = (704u + sizeof(_g4_t_v206)) > _g4_s175 ? (704u + sizeof(_g4_t_v206)) : _g4_s175,
    _g4_s177 = (708u + sizeof(_g4_t_v207)) > _g4_s176 ? (708u + sizeof(_g4_t_v207)) : _g4_s176,
    _g4_s178 = (712u + sizeof(_g4_t_v208)) > _g4_s177 ? (712u + sizeof(_g4_t_v208)) : _g4_s177,
    _g4_s179 = (716u + sizeof(_g4_t_v209)) > _g4_s178 ? (716u + sizeof(_g4_t_v209)) : _g4_s178,
    _g4_s180 = (720u + sizeof(_g4_t_v210)) > _g4_s179 ? (720u + sizeof(_g4_t_v210)) : _g4_s179,
    _g4_s181 = (724u + sizeof(_g4_t_v211)) > _g4_s180 ? (724u + sizeof(_g4_t_v211)) : _g4_s180,
    _g4_s182 = (728u + sizeof(_g4_t_v212)) > _g4_s181 ? (728u + sizeof(_g4_t_v212)) : _g4_s181,
    _g4_s183 = (732u + sizeof(_g4_t_v213)) > _g4_s182 ? (732u + sizeof(_g4_t_v213)) : _g4_s182,
    _g4_s184 = (736u + sizeof(_g4_t_v214)) > _g4_s183 ? (736u + sizeof(_g4_t_v214)) : _g4_s183,
    _g4_s185 = (740u + sizeof(_g4_t_v215)) > _g4_s184 ? (740u + sizeof(_g4_t_v215)) : _g4_s184,
    _g4_s186 = (744u + sizeof(_g4_t_v216)) > _g4_s185 ? (744u + sizeof(_g4_t_v216)) : _g4_s185,
    _g4_s187 = (748u + sizeof(_g4_t_v217)) > _g4_s186 ? (748u + sizeof(_g4_t_v217)) : _g4_s186,
    _g4_s188 = (752u + sizeof(_g4_t_v218)) > _g4_s187 ? (752u + sizeof(_g4_t_v218)) : _g4_s187,
    _g4_s189 = (756u + sizeof(_g4_t_v219)) > _g4_s188 ? (756u + sizeof(_g4_t_v219)) : _g4_s188,
    _g4_s190 = (760u + sizeof(_g4_t_v220)) > _g4_s189 ? (760u + sizeof(_g4_t_v220)) : _g4_s189,
    _g4_s191 = (764u + sizeof(_g4_t_v221)) > _g4_s190 ? (764u + sizeof(_g4_t_v221)) : _g4_s190,
    _g4_s192 = (768u + sizeof(_g4_t_v222)) > _g4_s191 ? (768u + sizeof(_g4_t_v222)) : _g4_s191,
    _g4_s193 = (772u + sizeof(_g4_t_v223)) > _g4_s192 ? (772u + sizeof(_g4_t_v223)) : _g4_s192,
    _g4_s194 = (776u + sizeof(_g4_t_v224)) > _g4_s193 ? (776u + sizeof(_g4_t_v224)) : _g4_s193,
    _g4_s195 = (780u + sizeof(_g4_t_v225)) > _g4_s194 ? (780u + sizeof(_g4_t_v225)) : _g4_s194,
    _g4_s196 = (784u + sizeof(_g4_t_v226)) > _g4_s195 ? (784u + sizeof(_g4_t_v226)) : _g4_s195,
    _g4_s197 = (788u + sizeof(_g4_t_v227)) > _g4_s196 ? (788u + sizeof(_g4_t_v227)) : _g4_s196,
    _g4_s198 = (792u + sizeof(_g4_t_v228)) > _g4_s197 ? (792u + sizeof(_g4_t_v228)) : _g4_s197,
    _g4_s199 = (796u + sizeof(_g4_t_v229)) > _g4_s198 ? (796u + sizeof(_g4_t_v229)) : _g4_s198,
    _g4_s200 = (800u + sizeof(_g4_t_v230)) > _g4_s199 ? (800u + sizeof(_g4_t_v230)) : _g4_s199,
    _g4_s201 = (804u + sizeof(_g4_t_v231)) > _g4_s200 ? (804u + sizeof(_g4_t_v231)) : _g4_s200,
    _g4_s202 = (808u + sizeof(_g4_t_v232)) > _g4_s201 ? (808u + sizeof(_g4_t_v232)) : _g4_s201,
    _g4_s203 = (812u + sizeof(_g4_t_v233)) > _g4_s202 ? (812u + sizeof(_g4_t_v233)) : _g4_s202,
    _g4_s204 = (816u + sizeof(_g4_t_v234)) > _g4_s203 ? (816u + sizeof(_g4_t_v234)) : _g4_s203,
    _g4_s205 = (820u + sizeof(_g4_t_v235)) > _g4_s204 ? (820u + sizeof(_g4_t_v235)) : _g4_s204,
    _g4_s206 = (824u + sizeof(_g4_t_v236)) > _g4_s205 ? (824u + sizeof(_g4_t_v236)) : _g4_s205,
    _g4_s207 = (828u + sizeof(_g4_t_v237)) > _g4_s206 ? (828u + sizeof(_g4_t_v237)) : _g4_s206,
    _g4_s208 = (832u + sizeof(_g4_t_v238)) > _g4_s207 ? (832u + sizeof(_g4_t_v238)) : _g4_s207,
    _g4_s209 = (836u + sizeof(_g4_t_v239)) > _g4_s208 ? (836u + sizeof(_g4_t_v239)) : _g4_s208,
    _g4_s210 = (840u + sizeof(_g4_t_v240)) > _g4_s209 ? (840u + sizeof(_g4_t_v240)) : _g4_s209,
    _g4_s211 = (844u + sizeof(_g4_t_v241)) > _g4_s210 ? (844u + sizeof(_g4_t_v241)) : _g4_s210,
    _g4_s212 = (852u + sizeof(_g4_t_v242)) > _g4_s211 ? (852u + sizeof(_g4_t_v242)) : _g4_s211,
    _g4_s213 = (860u + sizeof(_g4_t_v243)) > _g4_s212 ? (860u + sizeof(_g4_t_v243)) : _g4_s212,
    _g4_s214 = (864u + sizeof(_g4_t_v244)) > _g4_s213 ? (864u + sizeof(_g4_t_v244)) : _g4_s213,
    _g4_s215 = (896u + sizeof(_g4_t_v245)) > _g4_s214 ? (896u + sizeof(_g4_t_v245)) : _g4_s214,
    _g4_s216 = (900u + sizeof(_g4_t_v246)) > _g4_s215 ? (900u + sizeof(_g4_t_v246)) : _g4_s215,
    _g4_s217 = (904u + sizeof(_g4_t_v247)) > _g4_s216 ? (904u + sizeof(_g4_t_v247)) : _g4_s216,
    _g4_s218 = (1020u + sizeof(_g4_t_v248)) > _g4_s217 ? (1020u + sizeof(_g4_t_v248)) : _g4_s217,
    _g4_s219 = (1024u + sizeof(_g4_t_v249)) > _g4_s218 ? (1024u + sizeof(_g4_t_v249)) : _g4_s218,
    _g4_s220 = (1028u + sizeof(_g4_t_v250)) > _g4_s219 ? (1028u + sizeof(_g4_t_v250)) : _g4_s219,
    _g4_s221 = (1032u + sizeof(_g4_t_v251)) > _g4_s220 ? (1032u + sizeof(_g4_t_v251)) : _g4_s220,
    _g4_s222 = (1036u + sizeof(_g4_t_v252)) > _g4_s221 ? (1036u + sizeof(_g4_t_v252)) : _g4_s221,
    _g4_s223 = (1040u + sizeof(_g4_t_v253)) > _g4_s222 ? (1040u + sizeof(_g4_t_v253)) : _g4_s222,
    _g4_s224 = (1044u + sizeof(_g4_t_v254)) > _g4_s223 ? (1044u + sizeof(_g4_t_v254)) : _g4_s223,
    _g4_s225 = (1056u + sizeof(_g4_t_v255)) > _g4_s224 ? (1056u + sizeof(_g4_t_v255)) : _g4_s224,
    _g4_s226 = (1060u + sizeof(_g4_t_v256)) > _g4_s225 ? (1060u + sizeof(_g4_t_v256)) : _g4_s225,
    _g4_s227 = (1064u + sizeof(_g4_t_v257)) > _g4_s226 ? (1064u + sizeof(_g4_t_v257)) : _g4_s226,
    _g4_s228 = (1068u + sizeof(_g4_t_v258)) > _g4_s227 ? (1068u + sizeof(_g4_t_v258)) : _g4_s227,
    _g4_s229 = (1072u + sizeof(_g4_t_v259)) > _g4_s228 ? (1072u + sizeof(_g4_t_v259)) : _g4_s228,
    _g4_s230 = (1076u + sizeof(_g4_t_v260)) > _g4_s229 ? (1076u + sizeof(_g4_t_v260)) : _g4_s229,
    _g4_s231 = (1080u + sizeof(_g4_t_v261)) > _g4_s230 ? (1080u + sizeof(_g4_t_v261)) : _g4_s230,
    _g4_s232 = (1084u + sizeof(_g4_t_v262)) > _g4_s231 ? (1084u + sizeof(_g4_t_v262)) : _g4_s231,
    _g4_s233 = (1200u + sizeof(_g4_t_v263)) > _g4_s232 ? (1200u + sizeof(_g4_t_v263)) : _g4_s232,
    _g4_s234 = (1201u + sizeof(_g4_t_v264)) > _g4_s233 ? (1201u + sizeof(_g4_t_v264)) : _g4_s233,
    _g4_s235 = (1204u + sizeof(_g4_t_v265)) > _g4_s234 ? (1204u + sizeof(_g4_t_v265)) : _g4_s234,
    _g4_s236 = (1208u + sizeof(_g4_t_v266)) > _g4_s235 ? (1208u + sizeof(_g4_t_v266)) : _g4_s235,
    _g4_s237 = (1212u + sizeof(_g4_t_v267)) > _g4_s236 ? (1212u + sizeof(_g4_t_v267)) : _g4_s236,
    _g4_s238 = (1216u + sizeof(_g4_t_v268)) > _g4_s237 ? (1216u + sizeof(_g4_t_v268)) : _g4_s237,
    _g4_s239 = (1240u + sizeof(_g4_t_v269)) > _g4_s238 ? (1240u + sizeof(_g4_t_v269)) : _g4_s238
  };
  alignas(16) uint8_t _g4_sf[_g4_s239];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 20u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 20u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 24u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 24u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 24u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 24u);
  _g4_t_ne &ne = *reinterpret_cast<_g4_t_ne *>(_g4_sf + 24u);
  _g4_t_nd &nd = *reinterpret_cast<_g4_t_nd *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 45u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 48u);
  _g4_t_s1 &s1 = *reinterpret_cast<_g4_t_s1 *>(_g4_sf + 64u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 72u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 76u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 84u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 92u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 96u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 100u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 104u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 108u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 112u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 116u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 120u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 124u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 128u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 132u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 136u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 148u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 152u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 156u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 160u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 164u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 168u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 172u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 176u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 180u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 184u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 188u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 192u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 196u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 200u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 204u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 208u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 212u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 216u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 220u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 224u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 228u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 232u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 236u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 240u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 244u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 248u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 252u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 256u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 260u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 264u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 268u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 272u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 276u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 280u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 284u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 288u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 292u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 296u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 300u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 304u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 308u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 312u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 316u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 320u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 324u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 328u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 332u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 336u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 340u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 344u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 348u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 352u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 356u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 360u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 364u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 368u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 372u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 376u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 380u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 388u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 392u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 396u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 400u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 404u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 408u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 412u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 416u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 420u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 424u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 428u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 432u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 436u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 440u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 444u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 448u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 452u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 456u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 460u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 464u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 468u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 472u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 476u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 480u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 484u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 488u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 492u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 496u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 500u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 504u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 508u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 512u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 516u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 520u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 524u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 528u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 532u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 536u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 540u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 544u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 548u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 552u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 556u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 560u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 564u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 568u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 572u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 576u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 580u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 584u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 588u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 592u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 596u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 600u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 604u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 608u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 612u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 616u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 620u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 624u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 628u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 632u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 636u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 640u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 644u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 648u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 652u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 656u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 660u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 664u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 668u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 672u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 676u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 680u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 684u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 688u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 692u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 696u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 700u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 704u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 708u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 712u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 716u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 720u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 724u);
  _g4_t_v212 &v212 = *reinterpret_cast<_g4_t_v212 *>(_g4_sf + 728u);
  _g4_t_v213 &v213 = *reinterpret_cast<_g4_t_v213 *>(_g4_sf + 732u);
  _g4_t_v214 &v214 = *reinterpret_cast<_g4_t_v214 *>(_g4_sf + 736u);
  _g4_t_v215 &v215 = *reinterpret_cast<_g4_t_v215 *>(_g4_sf + 740u);
  _g4_t_v216 &v216 = *reinterpret_cast<_g4_t_v216 *>(_g4_sf + 744u);
  _g4_t_v217 &v217 = *reinterpret_cast<_g4_t_v217 *>(_g4_sf + 748u);
  _g4_t_v218 &v218 = *reinterpret_cast<_g4_t_v218 *>(_g4_sf + 752u);
  _g4_t_v219 &v219 = *reinterpret_cast<_g4_t_v219 *>(_g4_sf + 756u);
  _g4_t_v220 &v220 = *reinterpret_cast<_g4_t_v220 *>(_g4_sf + 760u);
  _g4_t_v221 &v221 = *reinterpret_cast<_g4_t_v221 *>(_g4_sf + 764u);
  _g4_t_v222 &v222 = *reinterpret_cast<_g4_t_v222 *>(_g4_sf + 768u);
  _g4_t_v223 &v223 = *reinterpret_cast<_g4_t_v223 *>(_g4_sf + 772u);
  _g4_t_v224 &v224 = *reinterpret_cast<_g4_t_v224 *>(_g4_sf + 776u);
  _g4_t_v225 &v225 = *reinterpret_cast<_g4_t_v225 *>(_g4_sf + 780u);
  _g4_t_v226 &v226 = *reinterpret_cast<_g4_t_v226 *>(_g4_sf + 784u);
  _g4_t_v227 &v227 = *reinterpret_cast<_g4_t_v227 *>(_g4_sf + 788u);
  _g4_t_v228 &v228 = *reinterpret_cast<_g4_t_v228 *>(_g4_sf + 792u);
  _g4_t_v229 &v229 = *reinterpret_cast<_g4_t_v229 *>(_g4_sf + 796u);
  _g4_t_v230 &v230 = *reinterpret_cast<_g4_t_v230 *>(_g4_sf + 800u);
  _g4_t_v231 &v231 = *reinterpret_cast<_g4_t_v231 *>(_g4_sf + 804u);
  _g4_t_v232 &v232 = *reinterpret_cast<_g4_t_v232 *>(_g4_sf + 808u);
  _g4_t_v233 &v233 = *reinterpret_cast<_g4_t_v233 *>(_g4_sf + 812u);
  _g4_t_v234 &v234 = *reinterpret_cast<_g4_t_v234 *>(_g4_sf + 816u);
  _g4_t_v235 &v235 = *reinterpret_cast<_g4_t_v235 *>(_g4_sf + 820u);
  _g4_t_v236 &v236 = *reinterpret_cast<_g4_t_v236 *>(_g4_sf + 824u);
  _g4_t_v237 &v237 = *reinterpret_cast<_g4_t_v237 *>(_g4_sf + 828u);
  _g4_t_v238 &v238 = *reinterpret_cast<_g4_t_v238 *>(_g4_sf + 832u);
  _g4_t_v239 &v239 = *reinterpret_cast<_g4_t_v239 *>(_g4_sf + 836u);
  _g4_t_v240 &v240 = *reinterpret_cast<_g4_t_v240 *>(_g4_sf + 840u);
  _g4_t_v241 &v241 = *reinterpret_cast<_g4_t_v241 *>(_g4_sf + 844u);
  _g4_t_v242 &v242 = *reinterpret_cast<_g4_t_v242 *>(_g4_sf + 852u);
  _g4_t_v243 &v243 = *reinterpret_cast<_g4_t_v243 *>(_g4_sf + 860u);
  _g4_t_v244 &v244 = *reinterpret_cast<_g4_t_v244 *>(_g4_sf + 864u);
  _g4_t_v245 &v245 = *reinterpret_cast<_g4_t_v245 *>(_g4_sf + 896u);
  _g4_t_v246 &v246 = *reinterpret_cast<_g4_t_v246 *>(_g4_sf + 900u);
  _g4_t_v247 &v247 = *reinterpret_cast<_g4_t_v247 *>(_g4_sf + 904u);
  _g4_t_v248 &v248 = *reinterpret_cast<_g4_t_v248 *>(_g4_sf + 1020u);
  _g4_t_v249 &v249 = *reinterpret_cast<_g4_t_v249 *>(_g4_sf + 1024u);
  _g4_t_v250 &v250 = *reinterpret_cast<_g4_t_v250 *>(_g4_sf + 1028u);
  _g4_t_v251 &v251 = *reinterpret_cast<_g4_t_v251 *>(_g4_sf + 1032u);
  _g4_t_v252 &v252 = *reinterpret_cast<_g4_t_v252 *>(_g4_sf + 1036u);
  _g4_t_v253 &v253 = *reinterpret_cast<_g4_t_v253 *>(_g4_sf + 1040u);
  _g4_t_v254 &v254 = *reinterpret_cast<_g4_t_v254 *>(_g4_sf + 1044u);
  _g4_t_v255 &v255 = *reinterpret_cast<_g4_t_v255 *>(_g4_sf + 1056u);
  _g4_t_v256 &v256 = *reinterpret_cast<_g4_t_v256 *>(_g4_sf + 1060u);
  _g4_t_v257 &v257 = *reinterpret_cast<_g4_t_v257 *>(_g4_sf + 1064u);
  _g4_t_v258 &v258 = *reinterpret_cast<_g4_t_v258 *>(_g4_sf + 1068u);
  _g4_t_v259 &v259 = *reinterpret_cast<_g4_t_v259 *>(_g4_sf + 1072u);
  _g4_t_v260 &v260 = *reinterpret_cast<_g4_t_v260 *>(_g4_sf + 1076u);
  _g4_t_v261 &v261 = *reinterpret_cast<_g4_t_v261 *>(_g4_sf + 1080u);
  _g4_t_v262 &v262 = *reinterpret_cast<_g4_t_v262 *>(_g4_sf + 1084u);
  _g4_t_v263 &v263 = *reinterpret_cast<_g4_t_v263 *>(_g4_sf + 1200u);
  _g4_t_v264 &v264 = *reinterpret_cast<_g4_t_v264 *>(_g4_sf + 1201u);
  _g4_t_v265 &v265 = *reinterpret_cast<_g4_t_v265 *>(_g4_sf + 1204u);
  _g4_t_v266 &v266 = *reinterpret_cast<_g4_t_v266 *>(_g4_sf + 1208u);
  _g4_t_v267 &v267 = *reinterpret_cast<_g4_t_v267 *>(_g4_sf + 1212u);
  _g4_t_v268 &v268 = *reinterpret_cast<_g4_t_v268 *>(_g4_sf + 1216u);
  _g4_t_v269 &v269 = *reinterpret_cast<_g4_t_v269 *>(_g4_sf + 1240u);

  v269 = &a2;
  n = a1 + 152;
  sub_1900810(v247);
  v247[28] = 0;
  v248[0] = 0;
  v248[1] = 0;
  v249 = 0;
  v250 = 0;
  v251 = 0;
  v252 = 0;
  v245 = (int (**)(int))(uintptr_t)(&off_20AA52C);
  v246 = 0;
  v247[0] = (uint32_t)(uintptr_t)(&off_20AA540);
  sub_19119D0(v247, n);
  s1 = &dword_213B814;
  do
  {
    v3 = (int)(uintptr_t)(*(v245 - 3));
    v4 = *(uint8_t **)&v248[v3];
    if ( v4 == nullptr )
      sub_18FFF30(v2);
    if ( v4[28] != 0 )
    {
      v5 = v4[39];
    }
    else
    {
      sub_18FFC70(*(uint32_t *)&v248[v3]);
      v5 = G4_VCALL<int>(v4, 24, 10);
    }
    v6 = (uint32_t *)sub_1905A30(&v245, &s1, v5);
    if ( (*((uint8_t *)v6 + *(uint32_t *)(*v6 - 12) + 20) & 5) != 0 )
      break;
    v2 = *((uint32_t *)s1 - 3);
  }
  while ( v2 != *((uint32_t *)glotv3::system::CR - 3) || memcmp(s1, glotv3::system::CR, *((uint32_t *)s1 - 3)) != 0 );
  v7 = *(uint32_t *)(a1 + 160);
  if ( *(uint32_t *)(a1 + 172) == v7 )
  {
    v126[0] = (uint32_t)(uintptr_t)(((uint8_t *)(uintptr_t)0x989680u));
    v126[1] = 0;
    boost::asio::basic_deadline_timer_posix_time_ptime_asio_ti_74b266::expires_from_now(
      v7,
      a1 + 68,
      v126);
    __atomic_exchange_n((volatile int32_t *)(a1 + 24), 15, __ATOMIC_SEQ_CST);
    sub_1367340(v242, (int)(uintptr_t)(glotv3::AsyncHTTPClient::HandleReadContent), 0, a1);
    v26 = v242[1];
    v27 = v242[0];
    v34 = v243;
    v241[0] = 0;
    v241[1] = (int)(uintptr_t)(sub_18F81E0(v28, v243));
    v244[1] = a1 + 48;
    v244[6] = v26;
    v244[0] = 4096;
    v244[2] = n;
    v244[3] = 0;
    v244[4] = 0;
    v244[5] = v27;
    v244[7] = v34;
    boost::asio::detail::read_streambuf_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,std::allocator<char>,boost::asio::detail::transfer_at_least_t,boost::_bi::bind_t<void,boost::_mfi::mf1<void,glotv3::AsyncHTTPClient::Self,boost::system::error_code::Self const&>,boost::_bi::list2<boost::_bi::value<glotv3::AsyncHTTPClient::Self*>,boost::arg<1> (*)(void)>>>::opCall(
      v244,
      v241,
      0,
      1);
    goto LABEL_57;
  }
  sub_1900810(v262);
  v262[28] = 0;
  v263 = 0;
  v264 = 0;
  v265 = 0;
  v266 = 0;
  v267 = 0;
  v262[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v268 = 0;
  v253 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v254[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v254[-1] + (uint32_t)(uintptr_t)(*(v253 - 3)), 0);
  v254[1] = 0;
  v254[2] = 0;
  v255 = nullptr;
  v256 = nullptr;
  v257 = nullptr;
  v253 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v258 = 0;
  v262[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v254[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v259);
  v260 = 16;
  v8 = &dword_213B814;
  v254[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v261 = &dword_213B814;
  sub_19119D0(v262, v254);
  sub_192CCB0(&v253, n);
  v46[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v257 != nullptr )
  {
    v9 = v256;
    if ( v257 > v255 )
    {
      if ( v257 == v256 )
      {
LABEL_15:
        v123 = v8;
        v12 = (uint32_t *)(&v123);
LABEL_27:
        g4_std::string::assign_str(v46, v12);
        g4_std::string::Destroy(v12);
        goto LABEL_28;
      }
      if ( v256 != nullptr )
      {
        na = v257 - v256;
        v10 = (size_t *)sub_1938930(v257 - v256, 0);
        v11 = v10;
        v8 = (uint32_t *)(v10 + 3);
        if ( na == 1 )
        {
          *((uint8_t *)v10 + 12) = *v9;
        }
        else
        {
          v30 = v10;
          memcpy(v10 + 3, v9, na);
          v11 = v30;
        }
        if ( v11 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v11[2] = 0;
          *v11 = na;
          *((uint8_t *)v11 + na + 12) = 0;
        }
        goto LABEL_15;
      }
LABEL_90:
      sub_18FFFD0("basic_string::_S_construct null not valid");
    }
    if ( v255 == v256 )
    {
LABEL_26:
      v122 = v8;
      v12 = (uint32_t *)(&v122);
      goto LABEL_27;
    }
    if ( v256 != nullptr )
    {
      nb = v255 - v256;
      v13 = (size_t *)sub_1938930(v255 - v256, 0);
      v8 = (uint32_t *)(v13 + 3);
      if ( nb == 1 )
      {
        *((uint8_t *)v13 + 12) = *v9;
LABEL_24:
        if ( v13 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v13[2] = 0;
          *v13 = nb;
          *((uint8_t *)v8 + nb) = 0;
        }
        goto LABEL_26;
      }
    }
    else
    {
      if ( v255 != nullptr )
        goto LABEL_90;
      v13 = (size_t *)sub_1938930(0, 0);
      v8 = (uint32_t *)(v13 + 3);
      nb = 0;
    }
    v31 = v13;
    memcpy(v8, v9, nb);
    v13 = v31;
    goto LABEL_24;
  }
  g4_std::string::assign_str(v46, &v261);
LABEL_28:
  sub_1903A70(v121);
  v124 = 8;
  sub_1901AC0(v125, v121);
  v231 = v124;
  sub_1901AC0(v232, v125);
  if ( *(int *)(v46[0] - 4) >= 0 )
    sub_19397C0(v46);
  v237 = v231;
  sub_1901AC0(v238, v232);
  v14 = v46[0];
  if ( *(int *)(v46[0] - 4) < 0 )
  {
    v15 = v46[0] + *(uint32_t *)(v46[0] - 12);
  }
  else
  {
    sub_19397C0(v46);
    v14 = v46[0];
    v15 = v46[0] + *(uint32_t *)(v46[0] - 12);
    if ( *(int *)(v46[0] - 4) >= 0 )
    {
      sub_19397C0(v46);
      v14 = v46[0];
    }
  }
  v235 = v237;
  sub_1901AC0(v236, v238);
  if ( v15 != v14 )
  {
    nc = v14;
    do
    {
      v32 = v235;
      v16 = *(uint8_t *)(v15 - 1);
      if ( (v32 & *(uint8_t *)(*(uint32_t *)((uint8_t *)(sub_191CFA0(v236)) + 24) + v16)) == 0 )
        break;
      --v15;
    }
    while ( nc != v15 );
  }
  sub_1902180(v236);
  sub_1939370(v44);
  sub_1902180(v238);
  sub_1902180(v232);
  v233 = v124;
  sub_1901AC0(v234, v125);
  v239 = v233;
  sub_1901AC0(v240, v234);
  v17 = (int *)v46[0];
  if ( *(int *)(v46[0] - 4) < 0 )
  {
    v36 = v46[0] + *(uint32_t *)(v46[0] - 12);
  }
  else
  {
    sub_19397C0(v46);
    v17 = (int *)v46[0];
    v36 = v46[0] + *(uint32_t *)(v46[0] - 12);
    if ( *(int *)(v46[0] - 4) >= 0 )
    {
      sub_19397C0(v46);
      v17 = (int *)v46[0];
    }
  }
  v18 = v17;
  if ( (int *)v36 != v17 )
  {
    do
    {
      ne = *(uint8_t *)v17;
      v33 = v239;
      if ( (v33 & *(uint8_t *)(*(uint32_t *)((uint8_t *)(sub_191CFA0(v240)) + 24) + ne)) == 0 )
        break;
      v17 = (int *)((char *)v17 + 1);
    }
    while ( v17 != (int *)v36 );
    v18 = (int *)v46[0];
  }
  if ( *(v18 - 1) >= 0 )
    sub_19397C0(v46);
  sub_1939370(v44);
  sub_1902180(v240);
  sub_1902180(v234);
  sub_1902180(v125);
  sub_1902180(v121);
  sub_193A6F0(v120, v46, 0, 3);
  g4_std::string::assign_str(v46, v120);
  g4_std::string::Destroy(v120);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v119), "200", (int)(uintptr_t)(&v45));
  v19 = (uint8_t *)v119;
  v20 = (uint8_t *)v46[0];
  v21 = v119 + *(uint32_t *)(v119 - 12);
  v37 = v46[0] + *(uint32_t *)(v46[0] - 12);
  if ( v119 == v21 )
    goto LABEL_59;
  if ( v46[0] != v46[0] + *(uint32_t *)(v46[0] - 12) )
  {
    nd = false;
    if ( *(uint8_t *)v119 != *(uint8_t *)v46[0] )
      goto LABEL_54;
    while ( 1 )
    {
      ++v19;
      ++v20;
      if ( (uint8_t *)v21 == v19 )
        break;
      if ( (uint8_t *)v37 == v20 )
        goto LABEL_60;
      if ( *v19 != *v20 )
      {
        nd = false;
        goto LABEL_54;
      }
    }
LABEL_59:
    nd = false;
    if ( (uint8_t *)v37 != v20 )
      goto LABEL_54;
  }
LABEL_60:
  nd = v21 == (uint32_t)(uintptr_t)(v19);
LABEL_54:
  g4_std::string::Destroy(&v119);
  if ( !nd )
  {
    sub_134F3A0((int)(uintptr_t)(&v117), (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_200_ETS_STATUS_CODE), (int)(uintptr_t)(v46));
    glotv3::Glotv3Logger::WriteLog(&v117);
    g4_std::string::Destroy(&v117);
    v48 = 1500;
    glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v229);
    v23 = v229;
    if ( v229 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        646,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = glotv3::Tracki"
        "ngManager, typename boost::detail::sp_dereference<T>::type = glotv3::TrackingManager::Self&]",
        "px != 0");
      v23 = v229;
    }
    boost::detail::shared_count::Destroy(&v230);
    if ( (uint8_t)glotv3::Utils::TryParseStringToUInt(v46, &v48) == 0 )
    {
      sub_134F3A0((int)(uintptr_t)(v116), (int)(uintptr_t)(&glotv3::errors::NETWORK_NON_NUMERIC_STATUS_CODE), (int)(uintptr_t)(v46));
      glotv3::EventOfError::s_OfType(&v225, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_574)->st_size + 3, (int)(uintptr_t)(v116));
      v227 = v225;
      v228 = v226;
      if ( v226 != nullptr )
        __sync_add_and_fetch(v226 + 1, 1);
      glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v227, 1);
      boost::detail::shared_count::Destroy(&v228);
      boost::detail::shared_count::Destroy(&v226);
      g4_std::string::Destroy(v116);
    }
    glotv3::AsyncHTTPClient::HandleNotificationOfSpy((glotv3::AsyncHTTPClient::Self *)a1, 2u, v48);
    if ( v48 == 417 )
    {
      sub_134F3A0((int)(uintptr_t)(v83), (int)(uintptr_t)(&glotv3::errors::ETS_GLDID_IS_INVALID), (int)(uintptr_t)(&glotv3::system::HASHTAG));
      sub_134F3A0((int)(uintptr_t)(v84), (int)(uintptr_t)(v83), (int)(uintptr_t)(&glotv3::system::PACKAGE));
      sub_134F3A0((int)(uintptr_t)(v85), (int)(uintptr_t)(v84), a1 + 12);
      glotv3::EventOfError::s_OfType(&v179, &reinterpret_cast<G4Elf32Sym *>(stru_194)->st_other, (int)(uintptr_t)(v85));
      v181 = v179;
      v182 = v180;
      if ( v180 != nullptr )
        __sync_add_and_fetch(v180 + 1, 1);
      glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v181, 1);
      boost::detail::shared_count::Destroy(&v182);
      boost::detail::shared_count::Destroy(&v180);
      g4_std::string::Destroy(v85);
      g4_std::string::Destroy(v84);
      g4_std::string::Destroy(v83);
    }
    else if ( v48 <= 0x1A1 )
    {
      if ( v48 == 411 )
      {
        sub_134F3A0(
          (int)(uintptr_t)(v101),
          (int)(uintptr_t)(&glotv3::errors::ETS_GAME_NOT_REGISTERED_FOR_TRACKING),
          (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v102), (int)(uintptr_t)(v101), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v103), (int)(uintptr_t)(v102), a1 + 12);
        glotv3::EventOfError::s_OfType(&v205, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_value + 3, (int)(uintptr_t)(v103));
        v207 = v205;
        v208 = v206;
        if ( v206 != nullptr )
          __sync_add_and_fetch(v206 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v207, 1);
        boost::detail::shared_count::Destroy(&v208);
        boost::detail::shared_count::Destroy(&v206);
        g4_std::string::Destroy(v103);
        g4_std::string::Destroy(v102);
        g4_std::string::Destroy(v101);
        glotv3::TrackingManager::BlockSending(v23);
        goto LABEL_106;
      }
      if ( v48 > 0x19B )
      {
        if ( v48 == 414 )
        {
          sub_134F3A0((int)(uintptr_t)(v92), (int)(uintptr_t)(&glotv3::errors::ETS_TOO_MANY_EVENTS_SET), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v93), (int)(uintptr_t)(v92), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v94), (int)(uintptr_t)(v93), a1 + 12);
          glotv3::EventOfError::s_OfType(&v191, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_size + 2, (int)(uintptr_t)(v94));
          v193 = v191;
          v194 = v192;
          if ( v192 != nullptr )
            __sync_add_and_fetch(v192 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v193, 1);
          boost::detail::shared_count::Destroy(&v194);
          boost::detail::shared_count::Destroy(&v192);
          g4_std::string::Destroy(v94);
          g4_std::string::Destroy(v93);
          g4_std::string::Destroy(v92);
        }
        else if ( v48 > 0x19E )
        {
          if ( v48 == 415 )
          {
            sub_134F3A0((int)(uintptr_t)(v89), (int)(uintptr_t)(&glotv3::errors::ETS_EVENT_CONTAINS_TOO_MUCH_DATA), (int)(uintptr_t)(&glotv3::system::HASHTAG));
            sub_134F3A0((int)(uintptr_t)(v90), (int)(uintptr_t)(v89), (int)(uintptr_t)(&glotv3::system::PACKAGE));
            sub_134F3A0((int)(uintptr_t)(v91), (int)(uintptr_t)(v90), a1 + 12);
            glotv3::EventOfError::s_OfType(&v187, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_size + 3, (int)(uintptr_t)(v91));
            v189 = v187;
            v190 = v188;
            if ( v188 != nullptr )
              __sync_add_and_fetch(v188 + 1, 1);
            glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v189, 1);
            boost::detail::shared_count::Destroy(&v190);
            boost::detail::shared_count::Destroy(&v188);
            g4_std::string::Destroy(v91);
            g4_std::string::Destroy(v90);
            g4_std::string::Destroy(v89);
          }
          else
          {
            sub_134F3A0((int)(uintptr_t)(v86), (int)(uintptr_t)(&glotv3::errors::ETS_MAC_ADDRESS_IS_INVALID), (int)(uintptr_t)(&glotv3::system::HASHTAG));
            sub_134F3A0((int)(uintptr_t)(v87), (int)(uintptr_t)(v86), (int)(uintptr_t)(&glotv3::system::PACKAGE));
            sub_134F3A0((int)(uintptr_t)(v88), (int)(uintptr_t)(v87), a1 + 12);
            glotv3::EventOfError::s_OfType(&v183, &reinterpret_cast<G4Elf32Sym *>(stru_194)->st_info, (int)(uintptr_t)(v88));
            v185 = v183;
            v186 = v184;
            if ( v184 != nullptr )
              __sync_add_and_fetch(v184 + 1, 1);
            glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v185, 1);
            boost::detail::shared_count::Destroy(&v186);
            boost::detail::shared_count::Destroy(&v184);
            g4_std::string::Destroy(v88);
            g4_std::string::Destroy(v87);
            g4_std::string::Destroy(v86);
            glotv3::TrackingManager::BlockSending(v23);
          }
        }
        else if ( v48 == 412 )
        {
          sub_134F3A0((int)(uintptr_t)(v98), (int)(uintptr_t)(&glotv3::errors::ETS_GAME_DISABLED_TRACKING), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v99), (int)(uintptr_t)(v98), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v100), (int)(uintptr_t)(v99), a1 + 12);
          glotv3::EventOfError::s_OfType(&v201, &reinterpret_cast<G4Elf32Sym *>(stru_194)->st_size, (int)(uintptr_t)(v100));
          v203 = v201;
          v204 = v202;
          if ( v202 != nullptr )
            __sync_add_and_fetch(v202 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v203, 1);
          boost::detail::shared_count::Destroy(&v204);
          boost::detail::shared_count::Destroy(&v202);
          g4_std::string::Destroy(v100);
          g4_std::string::Destroy(v99);
          g4_std::string::Destroy(v98);
          glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v199);
          v29 = v199;
          if ( v199 == nullptr )
          {
            __assert2(
              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
              653,
              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv"
              "3::TrackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
              "px != 0");
            v29 = v199;
          }
          glotv3::TrackingManager::BlockSending(v29);
          boost::detail::shared_count::Destroy(&v200);
        }
        else
        {
          sub_134F3A0((int)(uintptr_t)(v95), (int)(uintptr_t)(&glotv3::errors::ETS_INVALID_UDID_FORMAT), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v96), (int)(uintptr_t)(v95), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v97), (int)(uintptr_t)(v96), a1 + 12);
          glotv3::EventOfError::s_OfType(&v195, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_size + 1, (int)(uintptr_t)(v97));
          v197 = v195;
          v198 = v196;
          if ( v196 != nullptr )
            __sync_add_and_fetch(v196 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v197, 1);
          boost::detail::shared_count::Destroy(&v198);
          boost::detail::shared_count::Destroy(&v196);
          g4_std::string::Destroy(v97);
          g4_std::string::Destroy(v96);
          g4_std::string::Destroy(v95);
          glotv3::TrackingManager::BlockSending(v23);
        }
      }
      else if ( v48 == 408 )
      {
        sub_134F3A0((int)(uintptr_t)(v110), (int)(uintptr_t)(&glotv3::errors::ETS_CONTENT_TYPE_NOT_SUPPORTED), (int)(uintptr_t)(&glotv3::system::HASHTAG));
        sub_134F3A0((int)(uintptr_t)(v111), (int)(uintptr_t)(v110), (int)(uintptr_t)(&glotv3::system::PACKAGE));
        sub_134F3A0((int)(uintptr_t)(v112), (int)(uintptr_t)(v111), a1 + 12);
        glotv3::EventOfError::s_OfType(&v217, &reinterpret_cast<G4Elf32Sym *>(stru_194)->st_value, (int)(uintptr_t)(v112));
        v219 = v217;
        v220 = v218;
        if ( v218 != nullptr )
          __sync_add_and_fetch(v218 + 1, 1);
        glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v219, 1);
        boost::detail::shared_count::Destroy(&v220);
        boost::detail::shared_count::Destroy(&v218);
        g4_std::string::Destroy(v112);
        g4_std::string::Destroy(v111);
        g4_std::string::Destroy(v110);
      }
      else
      {
        if ( v48 <= 0x198 )
        {
          if ( v48 == 407 )
          {
            sub_134F3A0((int)(uintptr_t)(v113), (int)(uintptr_t)(&glotv3::errors::ETS_INPUT_TRUNCATED), (int)(uintptr_t)(&glotv3::system::HASHTAG));
            sub_134F3A0((int)(uintptr_t)(v114), (int)(uintptr_t)(v113), (int)(uintptr_t)(&glotv3::system::PACKAGE));
            sub_134F3A0((int)(uintptr_t)(v115), (int)(uintptr_t)(v114), a1 + 12);
            glotv3::EventOfError::s_OfType(&v221, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_name + 3, (int)(uintptr_t)(v115));
            v223 = v221;
            v224 = v222;
            if ( v222 != nullptr )
              __sync_add_and_fetch(v222 + 1, 1);
            glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v223, 1);
            boost::detail::shared_count::Destroy(&v224);
            boost::detail::shared_count::Destroy(&v222);
            g4_std::string::Destroy(v115);
            g4_std::string::Destroy(v114);
            g4_std::string::Destroy(v113);
            goto LABEL_106;
          }
          goto LABEL_103;
        }
        if ( v48 == 409 )
        {
          sub_134F3A0((int)(uintptr_t)(v107), (int)(uintptr_t)(&glotv3::errors::ETS_COULD_NOT_DECODE_JSON_REQUEST), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v108), (int)(uintptr_t)(v107), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v109), (int)(uintptr_t)(v108), a1 + 12);
          glotv3::EventOfError::s_OfType(&v213, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_value + 1, (int)(uintptr_t)(v109));
          v215 = v213;
          v216 = v214;
          if ( v214 != nullptr )
            __sync_add_and_fetch(v214 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v215, 1);
          boost::detail::shared_count::Destroy(&v216);
          boost::detail::shared_count::Destroy(&v214);
          g4_std::string::Destroy(v109);
          g4_std::string::Destroy(v108);
          g4_std::string::Destroy(v107);
        }
        else
        {
          sub_134F3A0((int)(uintptr_t)(v104), (int)(uintptr_t)(&glotv3::errors::ETS_INVALID_REQUEST_FORMAT), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v105), (int)(uintptr_t)(v104), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v106), (int)(uintptr_t)(v105), a1 + 12);
          glotv3::EventOfError::s_OfType(&v209, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_194)->st_value + 2, (int)(uintptr_t)(v106));
          v211 = v209;
          v212 = v210;
          if ( v210 != nullptr )
            __sync_add_and_fetch(v210 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v211, 1);
          boost::detail::shared_count::Destroy(&v212);
          boost::detail::shared_count::Destroy(&v210);
          g4_std::string::Destroy(v106);
          g4_std::string::Destroy(v105);
          g4_std::string::Destroy(v104);
        }
      }
    }
    else
    {
      switch ( v48 )
      {
        case 0x1F4u:
          sub_134F3A0((int)(uintptr_t)(v80), (int)(uintptr_t)(&glotv3::errors::ETS_UNKNOWN_REASON), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v81), (int)(uintptr_t)(v80), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v82), (int)(uintptr_t)(v81), a1 + 12);
          glotv3::EventOfError::s_OfType(&v175, &stru_1F4, (int)(uintptr_t)(v82));
          v177 = v175;
          v178 = v176;
          if ( v176 != nullptr )
            __sync_add_and_fetch(v176 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v177, 1);
          boost::detail::shared_count::Destroy(&v178);
          boost::detail::shared_count::Destroy(&v176);
          g4_std::string::Destroy(v82);
          g4_std::string::Destroy(v81);
          g4_std::string::Destroy(v80);
          glotv3::TrackingManager::BlockSending(v23);
LABEL_106:
          glotv3::AsyncHTTPClient::HandleStop(v25, v24, (glotv3::AsyncHTTPClient::Self *)a1);
          glotv3::AsyncHTTPClient::HandlePushbackOnQueue((glotv3::AsyncHTTPClient::Self *)a1);
LABEL_107:
          __atomic_exchange_n((volatile int32_t *)(a1 + 24), 14, __ATOMIC_SEQ_CST);
          goto LABEL_56;
        case 0x1F5u:
          sub_134F3A0((int)(uintptr_t)(v77), (int)(uintptr_t)(&glotv3::errors::ETS_COULD_NOT_CONNECT_TO_DATABASE), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v78), (int)(uintptr_t)(v77), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v79), (int)(uintptr_t)(v78), a1 + 12);
          glotv3::EventOfError::s_OfType(&v171, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_name + 1, (int)(uintptr_t)(v79));
          v173 = v171;
          v174 = v172;
          if ( v172 != nullptr )
            __sync_add_and_fetch(v172 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v173, 1);
          boost::detail::shared_count::Destroy(&v174);
          boost::detail::shared_count::Destroy(&v172);
          g4_std::string::Destroy(v79);
          g4_std::string::Destroy(v78);
          g4_std::string::Destroy(v77);
          glotv3::TrackingManager::BlockSending(v23);
          goto LABEL_106;
        case 0x1F6u:
          sub_134F3A0((int)(uintptr_t)(v74), (int)(uintptr_t)(&glotv3::errors::ETS_DATABASE_ERROR), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v75), (int)(uintptr_t)(v74), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v76), (int)(uintptr_t)(v75), a1 + 12);
          glotv3::EventOfError::s_OfType(&v167, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_name + 2, (int)(uintptr_t)(v76));
          v169 = v167;
          v170 = v168;
          if ( v168 != nullptr )
            __sync_add_and_fetch(v168 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v169, 1);
          boost::detail::shared_count::Destroy(&v170);
          boost::detail::shared_count::Destroy(&v168);
          g4_std::string::Destroy(v76);
          g4_std::string::Destroy(v75);
          g4_std::string::Destroy(v74);
          glotv3::TrackingManager::BlockSending(v23);
          goto LABEL_106;
        case 0x1F7u:
          sub_134F3A0((int)(uintptr_t)(v71), (int)(uintptr_t)(&glotv3::errors::ETS_CSV_WRITE_FAILED), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v72), (int)(uintptr_t)(v71), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v73), (int)(uintptr_t)(v72), a1 + 12);
          glotv3::EventOfError::s_OfType(&v163, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_name + 3, (int)(uintptr_t)(v73));
          v165 = v163;
          v166 = v164;
          if ( v164 != nullptr )
            __sync_add_and_fetch(v164 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v165, 1);
          boost::detail::shared_count::Destroy(&v166);
          boost::detail::shared_count::Destroy(&v164);
          g4_std::string::Destroy(v73);
          g4_std::string::Destroy(v72);
          g4_std::string::Destroy(v71);
          glotv3::TrackingManager::BlockSending(v23);
          goto LABEL_106;
        case 0x1FFu:
          sub_134F3A0((int)(uintptr_t)(v68), (int)(uintptr_t)(&glotv3::errors::ETS_BETA_HOST_UNREACHABLE), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v69), (int)(uintptr_t)(v68), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v70), (int)(uintptr_t)(v69), a1 + 12);
          glotv3::EventOfError::s_OfType(&v159, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_size + 3, (int)(uintptr_t)(v70));
          v161 = v159;
          v162 = v160;
          if ( v160 != nullptr )
            __sync_add_and_fetch(v160 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v161, 1);
          boost::detail::shared_count::Destroy(&v162);
          boost::detail::shared_count::Destroy(&v160);
          g4_std::string::Destroy(v70);
          g4_std::string::Destroy(v69);
          g4_std::string::Destroy(v68);
          goto LABEL_106;
        case 0x200u:
          sub_134F3A0((int)(uintptr_t)(v65), (int)(uintptr_t)(&glotv3::errors::ETS_BETA_PROBLEM_READING_RESPONSE), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v66), (int)(uintptr_t)(v65), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v67), (int)(uintptr_t)(v66), a1 + 12);
          glotv3::EventOfError::s_OfType(&v155, &reinterpret_cast<G4Elf32Sym *>(stru_1F4)->st_info, (int)(uintptr_t)(v67));
          v157 = v155;
          v158 = v156;
          if ( v156 != nullptr )
            __sync_add_and_fetch(v156 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v157, 1);
          boost::detail::shared_count::Destroy(&v158);
          boost::detail::shared_count::Destroy(&v156);
          g4_std::string::Destroy(v67);
          g4_std::string::Destroy(v66);
          g4_std::string::Destroy(v65);
          goto LABEL_106;
        case 0x258u:
          sub_134F3A0((int)(uintptr_t)(v62), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_REJECTED_BY_ADMIN), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v63), (int)(uintptr_t)(v62), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v64), (int)(uintptr_t)(v63), a1 + 12);
          glotv3::EventOfError::s_OfType(&v151, &reinterpret_cast<G4Elf32Sym *>(stru_254)->st_value, (int)(uintptr_t)(v64));
          v153 = v151;
          v154 = v152;
          if ( v152 != nullptr )
            __sync_add_and_fetch(v152 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v153, 1);
          boost::detail::shared_count::Destroy(&v154);
          boost::detail::shared_count::Destroy(&v152);
          g4_std::string::Destroy(v64);
          g4_std::string::Destroy(v63);
          g4_std::string::Destroy(v62);
          goto LABEL_106;
        case 0x2BDu:
          sub_134F3A0((int)(uintptr_t)(v59), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_STOP_SENDING), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v60), (int)(uintptr_t)(v59), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v61), (int)(uintptr_t)(v60), a1 + 12);
          glotv3::EventOfError::s_OfType(&v147, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_2B4)->st_size + 1, (int)(uintptr_t)(v61));
          v149 = v147;
          v150 = v148;
          if ( v148 != nullptr )
            __sync_add_and_fetch(v148 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v149, 1);
          boost::detail::shared_count::Destroy(&v150);
          boost::detail::shared_count::Destroy(&v148);
          g4_std::string::Destroy(v61);
          g4_std::string::Destroy(v60);
          g4_std::string::Destroy(v59);
          glotv3::TrackingManager::BlockSending(v23);
          goto LABEL_106;
        case 0x2BEu:
          sub_134F3A0((int)(uintptr_t)(v56), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_DELETE), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v57), (int)(uintptr_t)(v56), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v58), (int)(uintptr_t)(v57), a1 + 12);
          glotv3::EventOfError::s_OfType(&v143, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_2B4)->st_size + 2, (int)(uintptr_t)(v58));
          v145 = v143;
          v146 = v144;
          if ( v144 != nullptr )
            __sync_add_and_fetch(v144 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v145, 1);
          boost::detail::shared_count::Destroy(&v146);
          boost::detail::shared_count::Destroy(&v144);
          g4_std::string::Destroy(v58);
          g4_std::string::Destroy(v57);
          g4_std::string::Destroy(v56);
          sub_136D210(&v139);
          v141 = v139;
          v142 = v140;
          if ( v140 != nullptr )
            __sync_add_and_fetch(v140 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v141, 0);
          boost::detail::shared_count::Destroy(&v142);
          boost::detail::shared_count::Destroy(&v140);
          glotv3::TrackingManager::BlockSending(v23);
          break;
        case 0x2BFu:
          sub_134F3A0((int)(uintptr_t)(v53), (int)(uintptr_t)(&glotv3::errors::ETS_GGI_BLOCKED_DISABLE_TRACKING), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v54), (int)(uintptr_t)(v53), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v55), (int)(uintptr_t)(v54), a1 + 12);
          glotv3::EventOfError::s_OfType(&v135, (char *)&reinterpret_cast<G4Elf32Sym *>(stru_2B4)->st_size + 3, (int)(uintptr_t)(v55));
          v137 = v135;
          v138 = v136;
          if ( v136 != nullptr )
            __sync_add_and_fetch(v136 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v137, 1);
          boost::detail::shared_count::Destroy(&v138);
          boost::detail::shared_count::Destroy(&v136);
          g4_std::string::Destroy(v55);
          g4_std::string::Destroy(v54);
          g4_std::string::Destroy(v53);
          sub_136D210(&v131);
          v133 = v131;
          v134 = v132;
          if ( v132 != nullptr )
            __sync_add_and_fetch(v132 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v133, 0);
          boost::detail::shared_count::Destroy(&v134);
          boost::detail::shared_count::Destroy(&v132);
          glotv3::TrackingManager::BlockSending(v23);
          glotv3::TrackingManager::BlockTracking(v23);
          break;
        default:
LABEL_103:
          sub_134F3A0((int)(uintptr_t)(v49), (int)(uintptr_t)(&glotv3::errors::ETS_UNKNOWN_STATUS_CODE), (int)(uintptr_t)(v46));
          sub_134F3A0((int)(uintptr_t)(v50), (int)(uintptr_t)(v49), (int)(uintptr_t)(&glotv3::system::HASHTAG));
          sub_134F3A0((int)(uintptr_t)(v51), (int)(uintptr_t)(v50), (int)(uintptr_t)(&glotv3::system::PACKAGE));
          sub_134F3A0((int)(uintptr_t)(v52), (int)(uintptr_t)(v51), a1 + 12);
          glotv3::EventOfError::s_OfType(&v127, &reinterpret_cast<G4Elf32Sym *>(stru_5D4)->st_size, (int)(uintptr_t)(v52));
          v129 = v127;
          v130 = v128;
          if ( v128 != nullptr )
            __sync_add_and_fetch(v128 + 1, 1);
          glotv3::TrackingManager::AddEvent((int)(uintptr_t)(v23), &v129, 1);
          boost::detail::shared_count::Destroy(&v130);
          boost::detail::shared_count::Destroy(&v128);
          g4_std::string::Destroy(v52);
          g4_std::string::Destroy(v51);
          g4_std::string::Destroy(v50);
          g4_std::string::Destroy(v49);
          glotv3::TrackingManager::BlockSending(v23);
          goto LABEL_106;
      }
    }
    glotv3::AsyncHTTPClient::HandleRefusedRequest((int8_t **)a1, v48);
    goto LABEL_107;
  }
  sub_134F3A0((int)(uintptr_t)(&v118), (int)(uintptr_t)(&glotv3::errors::NETWORK_PROPER_STATUS), a1 + 12);
  glotv3::Glotv3Logger::WriteLog(&v118);
  g4_std::string::Destroy(&v118);
  glotv3::Fs::RemovePath((const char **)(a1 + 16));
  g4_std::string::clear(a1 + 16, 0, *(uint32_t *)(*(uint32_t *)(a1 + 16) - 12), 0);
  glotv3::AsyncHTTPClient::HandleNotificationOfSpy((glotv3::AsyncHTTPClient::Self *)a1, 1u, 0);
  g4_std::string::clear(a1 + 8, 0, *(uint32_t *)(*(uint32_t *)(a1 + 8) - 12), 0);
  __atomic_exchange_n((volatile int32_t *)(a1 + 24), 200, __ATOMIC_SEQ_CST);
LABEL_56:
  g4_std::string::Destroy(v46);
  v253 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v262[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v254[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  g4_std::string::Destroy(&v261);
  v254[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v259);
  v253 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v254[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v262[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v262);
LABEL_57:
  g4_std::string::Destroy(&s1);
  v246 = 0;
  v245 = (int (**)(int))(uintptr_t)(&off_20AA52C);
  v247[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  return sub_1900B90(v247);
}


// ============================================================================
// Address:   0x1375b20 (size: 1353 bytes)
// Symbol:    sub_1375B20
// Demangled: sub_1375B20
// ============================================================================
int *sub_1375B20()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  int v5;
  int v6;
  int v7;
  int v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v9)) > _g4_s0 ? (7u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 7u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2118720);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118720, &unk_20D1280);
  dword_2118724 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2118728 = v0;
  dword_211872C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118730 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118740 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118750 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((g4_cxa_guard_t *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((g4_cxa_guard_t *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118760 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( g4_guard_0460c3d472[0] == 0 )
  {
    g4_guard_0460c3d472[0] = 1;
    __cxa_atexit(
      (void (*)(void *))g4_noop_dtor,
      &boost::asio::detail::service_base<boost::asio::ip::resolver_service<boost::asio::ip::tcp>>::id,
      &unk_20D1280);
  }
  if ( g4_guard_32675df390[0] == 0 )
  {
    g4_guard_32675df390[0] = 1;
    __cxa_atexit(
      (void (*)(void *))boost::asio::detail::service_id_asio_deadline_timer_serv_784b47::Destroy,
      &boost::asio::detail::service_base<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::id,
      &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  if ( g4_guard_a7cc5a9f43[0] == 0 )
  {
    g4_guard_a7cc5a9f43[0] = 1;
    __cxa_atexit(
      (void (*)(void *))g4_noop_dtor,
      &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id,
      &unk_20D1280);
  }
  if ( g4_guard_38c1305a76[0] == 0 )
  {
    g4_guard_38c1305a76[0] = 1;
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_1dec044f07[0] == 0 )
  {
    g4_guard_1dec044f07[0] = 1;
    if ( g4_fnstatic_ec81e02332 == 0 )
    {
      g4_fnstatic_ec81e02332 = 1;
      if ( &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage != nullptr )
      {
        v7 = pthread_mutex_init(
               &boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
               nullptr);
        if ( v7 != 0 )
        {
          v8 = (int)(uintptr_t)(sub_18F81E0(v6, v5));
          g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9) + 1, "boost:: mutex constructor failed in pthread_mutex_init", (int)(uintptr_t)(&v9));
          sub_19042E0(v10, (char *)&v9 + 1);
          g4_std::string::Destroy((char *)&v9 + 1);
          v10[2] = v7;
          v10[3] = v8;
          v10[4] = (uint32_t)(uintptr_t)(&dword_213B814);
          v10[0] = ((uint32_t)(uintptr_t)&off_2049568);
          std::terminate();
        }
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__count = 0;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__owner = 0;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__kind = 0;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__nusers = 204;
        boost::singleton_pool<boost::pool_allocator_tag,204u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage.__spins = 128;
        *(uintptr_t *)(unk_21171F8) = (uintptr_t)(128);
        *(uintptr_t *)(unk_21171FC) = (uintptr_t)(0);
      }
    }
  }
  if ( g4_guard_dc944a9c34[0] == 0 )
  {
    g4_guard_dc944a9c34[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmFailed::Self>]");
  }
  if ( g4_guard_90806774de[0] == 0 )
  {
    g4_guard_90806774de[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmReceived::Self>]");
  }
  if ( g4_guard_fd593ed3f4[0] == 0 )
  {
    g4_guard_fd593ed3f4[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>>::ti_ = (void *)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::detail::sp_ms_deleter<glotv3::EventOfSpyConfirmSending::Self>]");
  }
  if ( g4_guard_05b6daf0ed[0] == 0 )
  {
    g4_guard_05b6daf0ed[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::Event::Self>>::ti_ = (void *)("static char const* boost::detail::sp_t"
                                                                                  "ypeid_<T>::name() [with T = boost::det"
                                                                                  "ail::sp_ms_deleter<glotv3::Event::Self>]");
  }
  if ( g4_guard_0be474ed8d[0] == 0 )
  {
    g4_guard_0be474ed8d[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::EventOfEraseEverything::Self>>::ti_ = (void *)("static char const* bo"
                                                                                                   "ost::detail::sp_typei"
                                                                                                   "d_<T>::name() [with T"
                                                                                                   " = boost::detail::sp_"
                                                                                                   "ms_deleter<glotv3::Ev"
                                                                                                   "entOfEraseEverything>]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x1376070 (size: 280 bytes)
// Symbol:    sub_1376070
// Demangled: sub_1376070
// ============================================================================
int sub_1376070(int *a1, uint8_t *src, uint32_t *a3)
{
  size_t n;
  unsigned int v4;
  uint8_t *v6;
  uint32_t *v7;
  unsigned int v8;
  int result;
  int v10;
  uint8_t *v11;
  uint8_t *v12;
  unsigned int v13;
  int dest;

  n = 0;
  v4 = 4;
  if ( *src != 0 )
  {
    v6 = src;
    do
      ++v6;
    while ( *v6 != 0 );
    n = v6 - src;
    v4 = (n + 4) & 0xFFFFFFFC;
  }
  a1[3] = 3145733;
  v7 = (uint32_t *)*a3;
  v10 = *(uint32_t *)(*a3 + 4);
  if ( v4 + v10 > *(uint32_t *)*a3 )
  {
    v8 = a3[1];
    v11 = src;
    if ( v4 >= v8 )
      v8 = v4;
    v13 = v8;
    v7 = (uint32_t *)(malloc(v8 + 12));
    v7[1] = 0;
    *v7 = v13;
    v7[2] = *a3;
    *a3 = (uint32_t)(uintptr_t)(v7);
    v10 = v7[1];
    src = v11;
  }
  dest = (int)(uintptr_t)(v7) + v10 + 12;
  if ( (dest & 3) != 0 )
  {
    v12 = src;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    src = v12;
    v7 = (uint32_t *)*a3;
    v10 = *(uint32_t *)(*a3 + 4);
  }
  v7[1] = v10 + v4;
  a1[1] = n;
  *a1 = dest;
  memcpy((void *)dest, src, n);
  result = *a1;
  *(uint8_t *)(*a1 + n) = 0;
  return result;
}


// ============================================================================
// Address:   0x13774b0 (size: 479 bytes)
// Symbol:    _ZN9rapidjson19MemoryPoolAllocatorINS_12CrtAllocatorEE7ReallocEPvjj
// Demangled: rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(void *,unsigned int,unsigned int)
// ============================================================================
template <>
void *rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *self,
        void *src,
        size_t n,
        unsigned int a4)
{
  void *v4;
  unsigned int *v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  char *v9;
  unsigned int v11;
  unsigned int v12;
  char *v13;
  unsigned int v14;
  unsigned int v15;

  v4 = src;
  if ( src == nullptr )
    return (void *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(self, a4);
  if ( a4 > n )
  {
    v5 = *(unsigned int **)self;
    v6 = *(uint32_t *)(*(uint32_t *)self + 4);
    v11 = v6 + 12;
    if ( (void *)(*(uint32_t *)self + v6 + 12 - n) != src )
    {
      v14 = *v5;
LABEL_5:
      v7 = (a4 + 3) & 0xFFFFFFFC;
      if ( v7 + v6 > v14 )
      {
        v8 = *((uint32_t *)self + 1);
        if ( v7 >= v8 )
          v8 = (a4 + 3) & 0xFFFFFFFC;
        v12 = v8;
        v5 = (unsigned int *)malloc(v8 + 12);
        v5[1] = 0;
        *v5 = v12;
        v5[2] = *(uint32_t *)self;
        *(uint32_t *)self = (uint32_t)(uintptr_t)(v5);
        v6 = v5[1];
        v11 = v6 + 12;
      }
      v9 = (char *)v5 + v11;
      if ( (((uint8_t)(uintptr_t)(v5) + (uint8_t)v11) & 3) != 0 )
      {
        v13 = (char *)v5 + v11;
        __assert2(
          "../../../../../lib/rapidjson/rapidjson.h",
          267,
          "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAlloca"
          "tor, size_t = unsigned int]",
          "((uintptr_t) buffer & 3) == 0");
        v5 = *(unsigned int **)self;
        v9 = v13;
        v6 = *(uint32_t *)(*(uint32_t *)self + 4);
      }
      v5[1] = v6 + v7;
      if ( v9 == nullptr )
      {
        __assert2(
          "../../../../../lib/rapidjson/rapidjson.h",
          301,
          "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = rapi"
          "djson::CrtAllocator, size_t = unsigned int]",
          "newBuffer != 0");
        v9 = nullptr;
      }
      return memcpy(v9, src, n);
    }
    v15 = v6 + ((a4 - n + 3) & 0xFFFFFFFC);
    v14 = *v5;
    if ( v15 > *v5 )
      goto LABEL_5;
    v5[1] = v15;
    if ( ((uint8_t)(uintptr_t)(src) & 3) != 0 )
      __assert2(
        "../../../../../lib/rapidjson/rapidjson.h",
        294,
        "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = rapidj"
        "son::CrtAllocator, size_t = unsigned int]",
        "((uintptr_t) originalPtr & 3) == 0");
  }
  return v4;
}


// ============================================================================
// Address:   0x1377840 (size: 367 bytes)
// Symbol:    sub_1377840
// Demangled: sub_1377840
// ============================================================================
void **sub_1377840(
        void **a1,
        int a2,
        uint32_t *a3,
        rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *a4)
{
  unsigned int v6;
  unsigned int v7;
  char *v8;
  char *v9;
  char *v10;

  if ( a1[3] != (char *)&dword_0 + 3 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      434,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "IsObject ()");
  if ( (*(uint8_t *)(a2 + 14) & 0x10) == 0 )
    __assert2(
      "../../../../../lib/rapidjson/document.h",
      435,
      "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::AddMember(rapidjson::G"
      "enericValue<Encoding, Allocator>&, rapidjson::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rap"
      "idjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapid"
      "json::GenericValue<rapidjson::UTF8<> >]",
      "name.IsString ()");
  v6 = (unsigned int)(uintptr_t)(a1[1]);
  v7 = (unsigned int)(uintptr_t)(a1[2]);
  if ( v6 < v7 )
  {
    v8 = (char *)*a1;
  }
  else
  {
    if ( v7 != 0 )
    {
      a1[2] = (void *)(2 * v7);
      v8 = (char *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(a4, *a1, 32 * v7, v7 << 6);
    }
    else
    {
      a1[2] = &word_10;
      v8 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(a4, 0x200u);
    }
    *a1 = v8;
    v6 = (unsigned int)(uintptr_t)(a1[1]);
  }
  v9 = &v8[32 * v6];
  *(uint32_t *)v9 = *(uint32_t *)a2;
  *((uint32_t *)v9 + 1) = *(uint32_t *)(a2 + 4);
  *((uint32_t *)v9 + 2) = *(uint32_t *)(a2 + 8);
  *((uint32_t *)v9 + 3) = *(uint32_t *)(a2 + 12);
  *(uint32_t *)(a2 + 12) = 0;
  v10 = (char *)*a1 + 32 * (uint32_t)(uintptr_t)(a1[1]);
  *((uint32_t *)v10 + 4) = *a3;
  *((uint32_t *)v10 + 5) = a3[1];
  *((uint32_t *)v10 + 6) = a3[2];
  *((uint32_t *)v10 + 7) = a3[3];
  a3[3] = 0;
  a1[1] = (char *)a1[1] + 1;
  return a1;
}


// ============================================================================
// Address:   0x1379c30 (size: 301 bytes)
// Symbol:    sub_1379C30
// Demangled: sub_1379C30
// ============================================================================
char *sub_1379C30(int a1, uint32_t *a2, int a3)
{
  uint8_t *v4;
  char v6;
  char v7;
  char v8;
  char v9;
  char *v10;
  char *result;
  size_t v12;
  char *v13;
  unsigned int v14;
  char *v15;

  v4 = (uint8_t *)*a2;
  if ( *(uint8_t *)*a2 != 102 )
  {
    __assert2(
      "../../../../../lib/rapidjson/reader.h",
      466,
      "void rapidjson::GenericReader<Encoding, Allocator>::ParseFalse(Stream&, Handler&) [with unsigned int parseFlags = "
      "0u, Stream = rapidjson::GenericStringStream<rapidjson::UTF8<> >, Handler = rapidjson::GenericDocument<rapidjson::U"
      "TF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "stream.Peek () == 'f'");
    v4 = (uint8_t *)*a2;
  }
  *a2 = (uint32_t)(uintptr_t)(v4 + 1);
  v6 = v4[1];
  *a2 = (uint32_t)(uintptr_t)(v4 + 2);
  if ( v6 != 97
    || (v7 = v4[2], *a2 = (uint32_t)(uintptr_t)(v4 + 3), v7 != 108)
    || (v8 = v4[3], *a2 = (uint32_t)(uintptr_t)(v4 + 4), v8 != 115)
    || (v9 = v4[4], *a2 = (uint32_t)(uintptr_t)(v4 + 5), v9 != 101) )
  {
    *(uint32_t *)(a1 + 64) = (uint32_t)(uintptr_t)("Invalid value");
    *(uint32_t *)(a1 + 68) = *a2 - a2[1] - 1;
    longjmp((struct __jmp_buf_tag *)(a1 + 24), 1);
  }
  v10 = *(char **)(a3 + 28);
  result = v10 + 16;
  if ( (unsigned int)(uintptr_t)(v10 + 16) >= *(uint32_t *)(a3 + 32) )
  {
    v12 = *(uint32_t *)(a3 + 36);
    v13 = &v10[-*(uint32_t *)(a3 + 24)];
    v14 = (unsigned int)(uintptr_t)(v13 + 16);
    if ( (unsigned int)(uintptr_t)(v13 + 16) < 2 * v12 )
      v14 = 2 * v12;
    v15 = (char *)rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Realloc(
                    *(rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> **)(a3 + 16),
                    *(void **)(a3 + 24),
                    v12,
                    v14);
    v10 = &v13[(uint32_t)(uintptr_t)(v15)];
    *(uint32_t *)(a3 + 36) = v14;
    *(uint32_t *)(a3 + 24) = (uint32_t)(uintptr_t)(v15);
    *(uint32_t *)(a3 + 32) = (uint32_t)(uintptr_t)(&v15[v14]);
    result = v10 + 16;
  }
  *(uint32_t *)(a3 + 28) = (uint32_t)(uintptr_t)(result);
  if ( v10 != nullptr )
    *((uint32_t *)v10 + 3) = 257;
  return result;
}


// ============================================================================
// Address:   0x1379e60 (size: 737 bytes)
// Symbol:    sub_1379E60
// Demangled: sub_1379E60
// ============================================================================
int sub_1379E60(int a1, char *a2, int a3)
{
  int v5;
  int v6;
  int v7;
  int v8;
  char v9;
  char *i;

  v5 = *(uint32_t *)(a1 + 12);
  v6 = *(uint32_t *)(a1 + 16);
  if ( v5 == v6 )
  {
    __assert2(
      "../../../../../lib/rapidjson/writer.h",
      394,
      "void rapidjson::Writer<Stream, Encoding, Allocator>::Prefix(rapidjson::Type) [with Stream = rapidjson::GenericStri"
      "ngBuffer<rapidjson::UTF8<> >, Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "type == kObjectType || type == kArrayType");
    goto LABEL_5;
  }
  if ( (unsigned int)(v6 - v5) <= 7 )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      91,
      "T* rapidjson::internal::Stack<Allocator>::Top() [with T = rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjs"
      "on::UTF8<> > >::Level, Allocator = rapidjson::MemoryPoolAllocator<>]",
      "GetSize () >= sizeof (T)");
    v6 = *(uint32_t *)(a1 + 16);
    v8 = 0;
    v7 = *(uint32_t *)(v6 - 4);
    if ( v7 == 0 )
      goto LABEL_4;
LABEL_14:
    if ( *(uint8_t *)(v6 - 8) != 0 )
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
        *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
        44);
    else
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
        *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
        (v7 & 1) == 0 ? 44 : 58);
    v8 = *(uint32_t *)(v6 - 4);
    goto LABEL_4;
  }
  v7 = *(uint32_t *)(v6 - 4);
  v8 = 0;
  if ( v7 != 0 )
    goto LABEL_14;
LABEL_4:
  *(uint32_t *)(v6 - 4) = v8 + 1;
LABEL_5:
  if ( LOBYTE(g4_guard_db374dfca1[0]) == 0
    && _cxa_guard_acquire(g4_guard_db374dfca1) != 0 )
  {
    std::memcpy(
      g4_fnstatic_e269e86e3c,
      "uuuuuuuubtnufruuuuuuuuuuuuuuuuuu",
      32);
    g4_fnstatic_e269e86e3c[34] = 34;
    g4_fnstatic_e269e86e3c[92] = 92;
    _cxa_guard_release(g4_guard_db374dfca1);
  }
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
    *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
    34);
  for ( i = &a2[a3]; a2 != i; ++a2 )
  {
    while ( 1 )
    {
      v9 = *a2;
      if ( g4_fnstatic_e269e86e3c[(uint8_t)*a2] != 0 )
        break;
      ++a2;
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
        *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
        v9);
      if ( a2 == i )
        goto LABEL_13;
    }
    rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
      *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
      92);
    rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
      *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
      g4_fnstatic_e269e86e3c[(uint8_t)*a2]);
    if ( g4_fnstatic_e269e86e3c[(uint8_t)*a2] == 117 )
    {
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
        *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
        48);
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
        *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
        48);
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
        *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
        *((uint8_t *)&dword_20B9FF4[-1391956] + (*a2 >> 4) + 3));
      rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
        *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
        *((uint8_t *)&dword_20B9FF4[-1391956] + (*a2 & 0xF) + 3));
    }
  }
LABEL_13:
  rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>::Put(
    *(rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator> **)a1,
    34);
  return a1;
}


// ============================================================================
// Address:   0x137aa80 (size: 2107 bytes)
// Symbol:    sub_137AA80
// Demangled: sub_137AA80
// ============================================================================
int *sub_137AA80()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v5)) > _g4_s0 ? (8u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 8u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  sub_1900D70(&unk_2118854);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118854, &unk_20D1280);
  dword_2118858 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_211885C = v0;
  dword_2118860 = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_2118864 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118870 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118880 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118884 = (int)(uintptr_t)(&dword_20D3F88);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyAnonymousId), "anon_id", (int)(uintptr_t)(&v5));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyAnonymousId, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyFedAccessToken), "fed_access_token", (int)(uintptr_t)(&v5) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyFedAccessToken, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyTs), "ts", (int)(uintptr_t)(&v5) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyTs, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyGGID), "ggid", (int)(uintptr_t)(&v5) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyGGID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyGDID), "gdid", (int)(uintptr_t)(&v6));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyGDID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyIDFV), "idfv", (int)(uintptr_t)(&v6) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyIDFV, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyIMEI), "imei", (int)(uintptr_t)(&v6) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyIMEI, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyHDIDFV), "hdidfv", (int)(uintptr_t)(&v6) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyHDIDFV, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyMAC), (char *)&off_1B6EB3F, (int)(uintptr_t)(&v7));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyMAC, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keySerialNumber), "sn", (int)(uintptr_t)(&v7) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keySerialNumber, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyAndroidId), "aid", (int)(uintptr_t)(&v7) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyAndroidId, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyProtoVersion), "proto_ver", (int)(uintptr_t)(&v7) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyProtoVersion, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyPackageTimestamp), "ts", (int)(uintptr_t)(&v8));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyPackageTimestamp, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyUDID), "udid", (int)(uintptr_t)(&v8) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyUDID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyUuid), "uuid", (int)(uintptr_t)(&v8) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyUuid, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyEvents), "events", (int)(uintptr_t)(&v8) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyEvents, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyPHID), "phid", (int)(uintptr_t)(&v9));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyPHID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyMACW32), "macw32", (int)(uintptr_t)(&v9) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyMACW32, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyGlotRev), "glot_rev", (int)(uintptr_t)(&v9) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyGlotRev, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyGameVersionString), "ver", (int)(uintptr_t)(&v9) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyGameVersionString, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyTsLocal), "ts_local", (int)(uintptr_t)(&v10));
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyTsLocal, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyGAID), "gaid", (int)(uintptr_t)(&v10) + 1);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyGAID, &unk_20D1280);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyWAID), "waid", (int)(uintptr_t)(&v10) + 2);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyWAID, &unk_20D1280);
  boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::is_from(nullptr);
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&glotv3::EventList::keyListRoot), "rapidEventListRoot", (int)(uintptr_t)(&v10) + 3);
  __cxa_atexit((void (*)(void *))g4_noop_dtor, &glotv3::EventList::keyListRoot, &unk_20D1280);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( g4_guard_23987c3f54[0] == 0 )
  {
    g4_guard_23987c3f54[0] = 1;
    __cxa_atexit(
      (void (*)(void *))(&g4_noop_ret0),
      &boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::storage,
      &unk_20D1280);
  }
  if ( g4_guard_d9c9966ed1[0] == 0 )
  {
    g4_guard_d9c9966ed1[0] = 1;
    boost::singleton_pool<boost::pool_allocator_tag,180u,glotv3::event_new_delete,boost::mutex::Self,128u,0u>::get_pool();
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x137bee0 (size: 779 bytes)
// Symbol:    sub_137BEE0
// Demangled: sub_137BEE0
// ============================================================================
int *sub_137BEE0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_2118890);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118890, &unk_20D1280);
  dword_2118894 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_2118898 = v0;
  dword_211889C = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_21188A0 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_21188B0 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_21188C0 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_21188D0 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x137c23c (size: 111 bytes)
// Symbol:    sub_137C23C
// Demangled: sub_137C23C
// ============================================================================
void __noreturn sub_137C23C(int *a1, char *a2)
{
  int v2;
  int v3;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (7u + sizeof(_g4_t_v4)) > _g4_s0 ? (7u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 7u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  v2 = *a1;
  v3 = a1[1];
  g4_std_compat::string_construct_from_cstr((int)(uintptr_t)(&v4) + 1, a2, (int)(uintptr_t)(&v4));
  sub_19042E0(v5, (char *)&v4 + 1);
  g4_std::string::Destroy((char *)&v4 + 1);
  v5[2] = v2;
  v5[3] = v3;
  v5[0] = ((uint32_t)(uintptr_t)&off_2048428);
  v5[4] = (uint32_t)(uintptr_t)(&dword_213B814);
  std::terminate();
}


// ============================================================================
// Address:   0x137c2b0 (size: 519 bytes)
// Symbol:    sub_137C2B0
// Demangled: sub_137C2B0
// ============================================================================
volatile int32_t *sub_137C2B0(int a1)
{
  pthread_mutex_t *mutex;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  volatile int32_t *result;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_optval[9];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v30)) > _g4_s0 ? (8u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v32)) > _g4_s2 ? (20u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_optval)) > _g4_s3 ? (24u + sizeof(_g4_t_optval)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_optval &optval = *reinterpret_cast<_g4_t_optval *>(_g4_sf + 24u);

  mutex = (pthread_mutex_t *)(a1 + 32);
  do
    v3 = pthread_mutex_destroy(mutex);
  while ( v3 == 4 );
  if ( v3 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::Destroy()",
      "!posix::pthread_mutex_destroy(&m)");
  if ( *(uint32_t *)(a1 + 16) != -1 )
  {
    g4_asio_epoll_deregister_descriptor(
      *(void **)(*(uint32_t *)(a1 + 12) + 20),
      *(uint32_t *)(a1 + 16),
      (void *)(a1 + 24),
      (*(uint8_t *)(a1 + 20) & 0x40) == 0);
    sub_18F81E0(v5, v4);
    v8 = *(uint32_t *)(a1 + 16);
    if ( v8 == -1 )
      goto LABEL_9;
    if ( (*(uint8_t *)(a1 + 20) & 8) != 0 )
    {
      optval[0] = 0;
      optval[1] = 0;
      sub_18F81E0(v7, v6);
      *(uint8_t *)(a1 + 20) |= 8u;
      *(uint32_t *)__errno(v18, v17) = 0;
      v19 = setsockopt(v8, 1, 13, optval, 8u);
      sub_18F81E0(v21, v20);
      __errno(v23, v22);
      if ( v19 == 0 )
        sub_18F81E0(v7, v6);
    }
    *(uint32_t *)__errno(v7, v6) = 0;
    v9 = close(v8);
    v30 = (int)(uintptr_t)(sub_18F81E0(v11, v10));
    v31 = *(uint32_t *)__errno(v13, v12);
    if ( v9 == 0 )
      goto LABEL_9;
    if ( v30 == (uintptr_t)sub_18F81E0(v7, v6) && v31 == 11 || v30 == (uintptr_t)sub_18F81E0(v16, v15) && v31 == 11 )
    {
      v32 = 0;
      ioctl(v8, 0x5421u, &v32);
      *(uint8_t *)(a1 + 20) &= 0xFCu;
      *(uint32_t *)__errno(v25, v24) = 0;
      v9 = close(v8);
      sub_18F81E0(v27, v26);
      __errno(v29, v28);
    }
    if ( v9 == 0 )
LABEL_9:
      sub_18F81E0(v7, v6);
  }
  result = *(volatile int32_t **)(a1 + 8);
  if ( result != nullptr && __sync_fetch_and_add(result + 2, 0xFFFFFFFF) == 1 )
  {
    result = (volatile int32_t *)(*(int (**)(volatile int32_t *))(*result + 12))(result);
    *(uint8_t *)a1 = 0;
  }
  else
  {
    *(uint8_t *)a1 = 0;
  }
  return result;
}


// ============================================================================
// Address:   0x137c5a0 (size: 1567 bytes)
// Symbol:    sub_137C5A0
// Demangled: sub_137C5A0
// ============================================================================
pthread_mutex_t *sub_137C5A0(int *a1, int *a2, uint32_t *a3, uint32_t *a4)
{
  int v5;
  pthread_mutex_t *v6;
  uint8_t *lock;
  int v8;
  int v9;
  uint32_t *v10;
  int v11;
  int v12;
  char v13;
  pthread_mutex_t *v14;
  pthread_mutex_t **v15;
  pthread_mutex_t *result;
  uint32_t *kind;
  int v18;
  int v19;
  unsigned int v20;
  uint32_t *v21;
  uint32_t *v22;
  unsigned int v23;
  pthread_cond_t *v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  pthread_mutex_t *v34;
  uint32_t *owner;
  unsigned int nusers;
  pthread_cond_t *v37;
  int v38;
  pthread_mutex_t **v39;
  pthread_mutex_t *v40;
  uint32_t *v41;
  unsigned int v42;
  int v43;
  int v44;
  int v45;
  unsigned int count;
  int v47;
  int v48;
  int v49;
  int v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef pthread_mutex_t *_g4_t_mutex;
  typedef pthread_mutex_t ***_g4_t_address;
  typedef char _g4_t_is_continuation;
  typedef int _g4_t_fd;
  typedef int _g4_t_v58;
  typedef struct epoll_event _g4_t_event;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v51)) > _g4_s0 ? (8u + sizeof(_g4_t_v51)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v52)) > _g4_s1 ? (8u + sizeof(_g4_t_v52)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_mutex)) > _g4_s2 ? (12u + sizeof(_g4_t_mutex)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_address)) > _g4_s3 ? (16u + sizeof(_g4_t_address)) : _g4_s3,
    _g4_s5 = (27u + sizeof(_g4_t_is_continuation)) > _g4_s4 ? (27u + sizeof(_g4_t_is_continuation)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_fd)) > _g4_s5 ? (28u + sizeof(_g4_t_fd)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v58)) > _g4_s6 ? (32u + sizeof(_g4_t_v58)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_event)) > _g4_s7 ? (36u + sizeof(_g4_t_event)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 8u);
  _g4_t_mutex &mutex = *reinterpret_cast<_g4_t_mutex *>(_g4_sf + 12u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 16u);
  _g4_t_is_continuation &is_continuation = *reinterpret_cast<_g4_t_is_continuation *>(_g4_sf + 27u);
  _g4_t_fd &fd = *reinterpret_cast<_g4_t_fd *>(_g4_sf + 28u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 32u);
  _g4_t_event &event = *reinterpret_cast<_g4_t_event *>(_g4_sf + 36u);

  is_continuation = 1;
  if ( a4[3] != 0 )
    is_continuation = boost::asio::asio_handler_is_continuation((boost::asio::Self *)(a4 + 5));
  address = (pthread_mutex_t ***)_emutls_get_address(&unk_20BABFC);
  if ( *address == nullptr )
    goto LABEL_34;
  v6 = (*address)[1];
  if ( v6 == nullptr )
    goto LABEL_34;
  lock = (uint8_t *)((int32_t *)(v6))[0];
  if ( ((int32_t *)(v6))[0] == 0 )
    goto LABEL_34;
  ((int32_t *)(v6))[0] = 0;
  if ( *lock <= 0x4Bu )
  {
    operator delete(lock);
LABEL_34:
    v33 = (int)(uintptr_t)(operator new(0x4Du));
    *(uint8_t *)(v33 + 76) = 76;
    lock = (uint8_t *)v33;
    goto LABEL_8;
  }
  lock[76] = *lock;
LABEL_8:
  v8 = *a2;
  *(uint32_t *)lock = 0;
  *((uint32_t *)lock + 1) = (uint32_t)(uintptr_t)(boost::asio::detail::reactive_socket_send_op<boost::asio::const_buffers_1,boost::asio::detail::write_op<boost::asio::basic_stream_socket<boost::asio::ip::tcp,boost::asio::stream_socket_service<boost::asio::ip::tcp>>,boost::asio::const_buffers_1,boost::asio::detail::transfer_all_t,boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::TCPConnection::Self>,boost::_bi::list1<boost::_bi::value<glotv3::TCPConnection::Self*>>>>>::do_complete);
  *((uint32_t *)lock + 2) = 0;
  *((uint32_t *)lock + 3) = 0;
  v51 = v8;
  v9 = (int)(uintptr_t)(sub_18F81E0(v5, v8));
  v10 = a3;
  *((uint32_t *)lock + 4) = v9;
  *((uint32_t *)lock + 5) = 0;
  *((uint32_t *)lock + 6) = (uint32_t)(uintptr_t)((int (*)(uint32_t *))boost::asio::detail::reactive_socket_send_op_base<boost::asio::const_buffers_1>::do_perform);
  *((uint32_t *)lock + 7) = v51;
  v11 = *a3;
  v12 = a3[1];
  *((uint32_t *)lock + 9) = v12;
  *((uint32_t *)lock + 8) = v11;
  *((uint32_t *)lock + 10) = 0;
  *((uint32_t *)lock + 11) = *a4;
  *((uint32_t *)lock + 12) = a4[1];
  *((uint32_t *)lock + 13) = a4[2];
  *((uint32_t *)lock + 14) = a4[3];
  *((uint32_t *)lock + 15) = a4[4];
  *((uint32_t *)lock + 16) = a4[5];
  *((uint32_t *)lock + 17) = a4[6];
  *((uint32_t *)lock + 18) = a4[7];
  v13 = *((uint8_t *)a2 + 4);
  if ( (v13 & 0x10) != 0 )
  {
    v10 = (uint32_t *)a3[1];
    if ( v10 == nullptr )
      goto LABEL_10;
  }
  if ( (v13 & 3) == 0 )
  {
    v25 = *a2;
    if ( *a2 == -1 )
    {
      v38 = (int)(uintptr_t)(sub_18F81E0(v10, v12));
      *((uint32_t *)lock + 3) = 9;
      *((uint32_t *)lock + 4) = v38;
      v14 = *(pthread_mutex_t **)(*a1 + 20);
      if ( ((uint8_t *)(v14))[20] != 0 )
        goto LABEL_11;
      goto LABEL_25;
    }
    *(uint32_t *)__errno(v10, v12) = 0;
    v58 = 1;
    v52 = ioctl(v25, 0x5421u, &v58);
    v28 = (int)(uintptr_t)(sub_18F81E0(v27, v26));
    v31 = *(uint32_t *)__errno(v30, v29);
    *((uint32_t *)lock + 4) = v28;
    *((uint32_t *)lock + 3) = v31;
    if ( v52 < 0 )
    {
LABEL_10:
      v14 = *(pthread_mutex_t **)(*a1 + 20);
      if ( ((uint8_t *)(v14))[20] != 0 )
      {
LABEL_11:
        v15 = *address;
        if ( *address == nullptr )
          goto LABEL_26;
        while ( v14 != *v15 )
        {
          v15 = (pthread_mutex_t **)v15[2];
          if ( v15 == nullptr )
            goto LABEL_26;
        }
LABEL_15:
        result = v15[1];
        if ( result != nullptr )
        {
          ++((int32_t *)(result))[4];
          *(uint32_t *)lock = 0;
          kind = (uint32_t *)((int32_t *)(result))[3];
          if ( kind != nullptr )
          {
            *kind = (uint32_t)(uintptr_t)(lock);
            ((int32_t *)(result))[3] = (int)(uintptr_t)(lock);
          }
          else
          {
            ((int32_t *)(result))[3] = (int)(uintptr_t)(lock);
            ((int32_t *)(result))[2] = (int)(uintptr_t)(lock);
          }
          return result;
        }
        goto LABEL_26;
      }
LABEL_25:
      if ( is_continuation == 0 )
        goto LABEL_26;
      goto LABEL_11;
    }
    *((uint32_t *)lock + 4) = (uint32_t)(uintptr_t)(sub_18F81E0(v32, v52));
    *((uint32_t *)lock + 3) = 0;
    *((uint8_t *)a2 + 4) |= 2u;
  }
  fd = *a2;
  v18 = *a1;
  v19 = a2[2];
  if ( v19 != 0 )
  {
    mutex = (pthread_mutex_t *)(v19 + 20);
    pthread_mutex_lock((pthread_mutex_t *)(v19 + 20));
    v20 = a2[2];
    if ( *(uint8_t *)(v20 + 60) != 0 )
    {
      v34 = *(pthread_mutex_t **)(v18 + 20);
      if ( ((uint8_t *)(v34))[20] == 0 && is_continuation == 0 )
        goto LABEL_37;
      v39 = *address;
      if ( *address == nullptr )
        goto LABEL_37;
      while ( v34 != *v39 )
      {
        v39 = (pthread_mutex_t **)v39[2];
        if ( v39 == nullptr )
          goto LABEL_37;
      }
      v40 = v39[1];
      if ( v40 != nullptr )
      {
        ++((int32_t *)(v40))[4];
        *(uint32_t *)lock = 0;
        v41 = (uint32_t *)((int32_t *)(v40))[3];
        if ( v41 != nullptr )
        {
          *v41 = (uint32_t)(uintptr_t)(lock);
          ((int32_t *)(v40))[3] = (int)(uintptr_t)(lock);
        }
        else
        {
          ((int32_t *)(v40))[3] = (int)(uintptr_t)(lock);
          ((int32_t *)(v40))[2] = (int)(uintptr_t)(lock);
        }
      }
      else
      {
LABEL_37:
        __sync_fetch_and_add(&G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (2)))), 1u);
        pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (1))));
        *(uint32_t *)lock = 0;
        owner = (uint32_t *)(uintptr_t)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (2))));
        if ( owner != nullptr )
        {
          *owner = (uint32_t)(uintptr_t)(lock);
          G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (2)))) = (int)(uintptr_t)(lock);
        }
        else
        {
          G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (2)))) = (int)(uintptr_t)(lock);
          G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (2)))) = (unsigned int)(uintptr_t)(lock);
        }
        nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (2))));
        if ( nusers != 0 )
        {
          G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (2)))) = *(uint32_t *)(nusers + 20);
          v37 = *(pthread_cond_t **)(nusers + 4);
          *(uint32_t *)(nusers + 20) = 0;
          ((uint8_t *)(v37))[4] = 1;
          pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (1))));
          pthread_cond_signal(v37);
        }
        else
        {
          if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (1))))[20] == 0 )
          {
            count = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (1))));
            if ( count != 0 )
            {
              G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (1))))[20] = 1;
              event.data.u64 = count + 28;
              event.events = 0x80000009;
              epoll_ctl(*(uint32_t *)(count + 36), 3, *(uint32_t *)(count + 28), &event);
            }
          }
          pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v34) + (24 * (1))));
        }
      }
      return (pthread_mutex_t *)pthread_mutex_unlock(mutex);
    }
    if ( *(uint32_t *)(v20 + 44) != 0 )
    {
LABEL_22:
      *(uint32_t *)lock = 0;
      v21 = *(uint32_t **)(v20 + 48);
      if ( v21 != nullptr )
      {
        *v21 = (uint32_t)(uintptr_t)(lock);
        *(uint32_t *)(v20 + 48) = (uint32_t)(uintptr_t)(lock);
      }
      else
      {
        *(uint32_t *)(v20 + 48) = (uint32_t)(uintptr_t)(lock);
        *(uint32_t *)(v20 + 44) = (uint32_t)(uintptr_t)(lock);
      }
      __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)(v18 + 20) + 48), 1u);
      return (pthread_mutex_t *)pthread_mutex_unlock(mutex);
    }
    if ( (*((uint8_t (**)(uint8_t *))lock + 6))(lock) == 0 )
    {
      v20 = a2[2];
      v43 = *(uint32_t *)(v20 + 32);
      if ( (v43 & 4) != 0 )
        goto LABEL_22;
      event.data.u64 = v20;
      event.events = v43 | 4;
      if ( epoll_ctl(*(uint32_t *)(v18 + 36), 3, fd, &event) == 0 )
      {
        *(uint32_t *)(a2[2] + 32) |= event.events;
        v20 = a2[2];
        goto LABEL_22;
      }
      v47 = (int)(uintptr_t)(sub_18F81E0(v45, v44));
      v50 = *(uint32_t *)__errno(v49, v48);
      *((uint32_t *)lock + 4) = v47;
      *((uint32_t *)lock + 3) = v50;
      boost::asio::detail::task_io_service::post_immediate_completion(
        *(pthread_mutex_t **)(v18 + 20),
        lock,
        is_continuation);
      return (pthread_mutex_t *)pthread_mutex_unlock(mutex);
    }
    pthread_mutex_unlock(mutex);
    v14 = *(pthread_mutex_t **)(v18 + 20);
    if ( ((uint8_t *)(v14))[20] != 0 || is_continuation != 0 )
    {
      v15 = *address;
      if ( *address != nullptr )
      {
        while ( v14 != *v15 )
        {
          v15 = (pthread_mutex_t **)v15[2];
          if ( v15 == nullptr )
            goto LABEL_26;
        }
        goto LABEL_15;
      }
    }
  }
  else
  {
    *((uint32_t *)lock + 4) = (uint32_t)(uintptr_t)(sub_18F81E0(v10, *a2));
    *((uint32_t *)lock + 3) = 9;
    v14 = *(pthread_mutex_t **)(v18 + 20);
    if ( ((uint8_t *)(v14))[20] != 0 || is_continuation != 0 )
    {
      v15 = *address;
      if ( *address != nullptr )
      {
        while ( v14 != *v15 )
        {
          v15 = (pthread_mutex_t **)v15[2];
          if ( v15 == nullptr )
            goto LABEL_26;
        }
        goto LABEL_15;
      }
    }
  }
LABEL_26:
  __sync_fetch_and_add(&G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (2)))), 1u);
  pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (1))));
  *(uint32_t *)lock = 0;
  v22 = (uint32_t *)(uintptr_t)G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (2))));
  if ( v22 != nullptr )
  {
    *v22 = (uint32_t)(uintptr_t)(lock);
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (2)))) = (int)(uintptr_t)(lock);
  }
  else
  {
    G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (2)))) = (int)(uintptr_t)(lock);
    G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (2)))) = (unsigned int)(uintptr_t)(lock);
  }
  v23 = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (2))));
  if ( v23 != 0 )
  {
    G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (2)))) = *(uint32_t *)(v23 + 20);
    v24 = *(pthread_cond_t **)(v23 + 4);
    *(uint32_t *)(v23 + 20) = 0;
    ((uint8_t *)(v24))[4] = 1;
    pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (1))));
    return (pthread_mutex_t *)pthread_cond_signal(v24);
  }
  else
  {
    if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (1))))[20] == 0 )
    {
      v42 = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (1))));
      if ( v42 != 0 )
      {
        G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (1))))[20] = 1;
        event.data.u64 = v42 + 28;
        event.events = 0x80000009;
        epoll_ctl(*(uint32_t *)(v42 + 36), 3, *(uint32_t *)(v42 + 28), &event);
      }
    }
    return (pthread_mutex_t *)pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v14) + (24 * (1))));
  }
}


// ============================================================================
// Address:   0x137d3d0 (size: 853 bytes)
// Symbol:    sub_137D3D0
// Demangled: sub_137D3D0
// ============================================================================
int *sub_137D3D0()
{
  int64_t v0; // rax
  int v1;
  const char *v2;
  int v3;
  int *result;

  sub_1900D70(&unk_21188E0);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_21188E0, &unk_20D1280);
  dword_21188E4 = (uint32_t)(uintptr_t)(sub_18F8270());
  v0 = (int64_t)(uintptr_t)(sub_18F8270());
  dword_21188E8 = v0;
  dword_21188EC = (uint32_t)(uintptr_t)(sub_18F81E0(v1, HIDWORD(v0)));
  if ( byte_20D3F40 == 0 )
  {
    byte_20D3F40 = 1;
    v2 = "static char const* boost::detail::sp_typeid_<T>::name() [with T = void]";
    dword_20D3F50 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = void]");
  }
  dword_21188F0 = (uint32_t)(uintptr_t)(sub_18F81E0(v3, v2));
  if ( byte_20D3F58 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F58) != 0 )
  {
    dword_20D3F60 = (int)(uintptr_t)(&off_20492E8);
    _cxa_guard_release((__guard *)&byte_20D3F58);
    __cxa_atexit((void (*)(void *))sub_541A80, &dword_20D3F60, &unk_20D1280);
  }
  dword_2118900 = (int)(uintptr_t)(&dword_20D3F60);
  if ( byte_20D3F70 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F70) != 0 )
  {
    dword_20D3F78 = (int)(uintptr_t)(&off_2049328);
    _cxa_guard_release((__guard *)&byte_20D3F70);
    __cxa_atexit((void (*)(void *))sub_541AC0, &dword_20D3F78, &unk_20D1280);
  }
  dword_2118910 = (int)(uintptr_t)(&dword_20D3F78);
  if ( byte_20D3F80 == 0 && _cxa_guard_acquire((__guard *)&byte_20D3F80) != 0 )
  {
    dword_20D3F88 = (int)(uintptr_t)(&off_2049368);
    _cxa_guard_release((__guard *)&byte_20D3F80);
    __cxa_atexit((void (*)(void *))sub_541B00, &dword_20D3F88, &unk_20D1280);
  }
  dword_2118920 = (int)(uintptr_t)(&dword_20D3F88);
  if ( byte_20D3F90 == 0 )
  {
    byte_20D3F90 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3F98, &unk_20D1280);
  }
  if ( byte_20D3FA0 == 0 )
  {
    byte_20D3FA0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FA8, &unk_20D1280);
  }
  if ( byte_20D3FB0 == 0 )
  {
    byte_20D3FB0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FB8, &unk_20D1280);
  }
  if ( byte_20D3FC0 == 0 )
  {
    byte_20D3FC0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FC8, &unk_20D1280);
  }
  if ( byte_20D3FD0 == 0 )
  {
    byte_20D3FD0 = 1;
    __cxa_atexit((void (*)(void *))(&g4_noop_ret0), &unk_20D3FD8, &unk_20D1280);
  }
  if ( byte_20D3FE0 == 0 )
  {
    byte_20D3FE0 = 1;
    dword_20D3FF0 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::default"
                         "_barrier_reseter]");
  }
  if ( byte_20D4000 == 0 )
  {
    byte_20D4000 = 1;
    dword_20D4010 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::thread_detail::void_fc"
                         "t_ptr_barrier_reseter]");
  }
  if ( byte_20D4020 == 0 )
  {
    byte_20D4020 = 1;
    dword_20D4030 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = unsigned int (*)()]");
  }
  if ( g4_guard_a7cc5a9f43[0] == 0 )
  {
    g4_guard_a7cc5a9f43[0] = 1;
    __cxa_atexit(
      (void (*)(void *))g4_noop_dtor,
      &boost::asio::detail::service_base<boost::asio::stream_socket_service<boost::asio::ip::tcp>>::id,
      &unk_20D1280);
  }
  if ( g4_guard_9b656ed5de[0] == 0 )
  {
    g4_guard_9b656ed5de[0] = 1;
    boost::detail::sp_typeid_<boost::detail::sp_ms_deleter<glotv3::TCPConnection::Self>>::ti_ = (void *)("static char const* boost::deta"
                                                                                          "il::sp_typeid_<T>::name() [wit"
                                                                                          "h T = boost::detail::sp_ms_del"
                                                                                          "eter<glotv3::TCPConnection::Self>]");
  }
  result = (int *)&byte_20D3F20;
  if ( byte_20D3F20 == 0 )
  {
    byte_20D3F20 = 1;
    result = (int *)(&dword_20D3F30);
    dword_20D3F30 = (int)(uintptr_t)("static char const* boost::detail::sp_typeid_<T>::name() [with T = boost::asio::detail::socket_o"
                         "ps::noop_deleter]");
  }
  return result;
}


// ============================================================================
// Address:   0x137e670 (size: 220 bytes)
// Symbol:    sub_137E670
// Demangled: sub_137E670
// ============================================================================
int sub_137E670()
{
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2118948);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118948, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_211894C), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_211894C, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2118950), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2118950, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2118954), "HDIDFV", (int)(uintptr_t)(&v1));
  return __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2118954, &unk_20D1280);
}


// ============================================================================
// Address:   0x137e750 (size: 92 bytes)
// Symbol:    _Z14make_crc_tablev
// Demangled: make_crc_table(void)
// ============================================================================
uint32_t *make_crc_table()
{
  unsigned int i;
  unsigned int v1;
  int j;

  for ( i = 0; i != 256; ++i )
  {
    v1 = i;
    for ( j = 8; j != 0; --j )
    {
      while ( (v1 & 1) != 0 )
      {
        v1 = (v1 >> 1) ^ 0xEDB88320;
        if ( --j == 0 )
          goto LABEL_6;
      }
      v1 >>= 1;
    }
LABEL_6:
    (&crc_table)[i] = v1;
  }
  crc_table_computed[0] = 1;
  return crc_table_computed;
}


// ============================================================================
// Address:   0x137e7b0 (size: 95 bytes)
// Symbol:    _Z10update_crcjPhi
// Demangled: update_crc(unsigned int,unsigned char *,int)
// ============================================================================
unsigned int update_crc(unsigned int a1, uint8_t *a2, int a3)
{
  unsigned int result;
  int i;
  uint8_t v5;

  if ( crc_table_computed[0] == 0 )
    make_crc_table();
  result = a1;
  if ( a3 > 0 )
  {
    for ( i = 0; i != a3; ++i )
    {
      v5 = a2[i];
      result = (&crc_table)[(uint8_t)(result ^ v5)] ^ (result >> 8);
    }
  }
  return result;
}


// ============================================================================
// Address:   0x137e810 (size: 52 bytes)
// Symbol:    _Z3crcPhi
// Demangled: crc(unsigned char *,int)
// ============================================================================
unsigned int crc(uint8_t *a1, int a2)
{
  return ~update_crc(0xFFFFFFFF, a1, a2);
}


// ============================================================================
// Address:   0x1386fd0 (size: 436 bytes)
// Symbol:    _ZNSt6vectorIN4gaia18BaseServiceManager11CredentialsESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
// Demangled: std::vector<gaia::BaseServiceManager::Credentials,std::allocator<gaia::BaseServiceManager::Credentials>>::_M_insert_aux(__gnu_cxx::__normal_iterator<gaia::BaseServiceManager::Credentials*,std::vector<gaia::BaseServiceManager::Credentials,std::allocator<gaia::BaseServiceManager::Credentials>>>,gaia::BaseServiceManager::Credentials const&)
// ============================================================================
static void g4_compat_def_9(int a1, char *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  char *dest;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  int v23;
  char *v24;
  int v25;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 4;
    v5 = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a3;
    if ( v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *(uint32_t *)src = v6;
    return;
  }
  v7 = *(uint8_t **)a1;
  v8 = ((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 2;
  if ( v8 != 0 )
  {
    v9 = 2 * v8;
    if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
    {
      v25 = -4;
      v10 = (src - (char *)(v7)) >> 2;
    }
    else
    {
      v25 = 8 * v8;
      v19 = src - (char *)(v7);
      dest = nullptr;
      v10 = v19 >> 2;
      if ( v9 == 0 )
        goto LABEL_11;
    }
  }
  else
  {
    v25 = 4;
    v10 = (src - (char *)(v7)) >> 2;
  }
  v23 = v10;
  dest = (char *)opNew(v25);
  v10 = v23;
LABEL_11:
  v12 = &dest[4 * v10];
  if ( v12 != nullptr )
    *(uint32_t *)v12 = *a3;
  v13 = 0;
  v14 = (int)(uintptr_t)(&src[-*(uint32_t *)a1]) >> 2;
  if ( v14 != 0 )
  {
    v13 = 4 * v14;
    v21 = dest;
    memmove(dest, *(const void **)a1, 4 * v14);
    dest = v21;
  }
  v15 = &dest[v13 + 4];
  v16 = 0;
  v17 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
  if ( v17 != 0 )
  {
    v16 = 4 * v17;
    v22 = dest;
    v24 = v15;
    memmove(v15, src, 4 * v17);
    v15 = v24;
    dest = v22;
  }
  v18 = &v15[v16];
  if ( *(uint32_t *)a1 != 0 )
  {
    v20 = dest;
    opDelete(*(void **)a1);
    dest = v20;
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v18);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v25]);
}


// ============================================================================
// Address:   0x1387190 (size: 436 bytes)
// Symbol:    _ZNSt6vectorIPN11savemanager9CloudSaveESaIS2_EE13_M_insert_auxEN9__gnu_cxx17__normal_iteratorIPS2_S4_EERKS2_
// Demangled: std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>>::_M_insert_aux(__gnu_cxx::__normal_iterator<savemanager::CloudSave **,std::vector<savemanager::CloudSave *,std::allocator<savemanager::CloudSave *>>>,savemanager::CloudSave * const&)
// ============================================================================
static void g4_compat_def_10(int a1, char *src, int *a3)
{
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  unsigned int v8;
  unsigned int v9;
  int v10;
  char *dest;
  char *v12;
  int v13;
  int v14;
  char *v15;
  int v16;
  int v17;
  char *v18;
  int v19;
  char *v20;
  char *v21;
  char *v22;
  int v23;
  char *v24;
  int v25;

  v3 = *(uint32_t **)(a1 + 4);
  if ( v3 != *(uint32_t **)(a1 + 8) )
  {
    v4 = 0;
    if ( v3 != nullptr )
    {
      *v3 = *(v3 - 1);
      v4 = *(uint32_t *)(a1 + 4);
    }
    *(uint32_t *)(a1 + 4) = v4 + 4;
    v5 = (v4 - 4 - (int)(uintptr_t)(src)) >> 2;
    v6 = *a3;
    if ( v5 != 0 )
      memmove((void *)(v4 - 4 * v5), src, 4 * v5);
    *(uint32_t *)src = v6;
    return;
  }
  v7 = *(uint8_t **)a1;
  v8 = ((int)(uintptr_t)(v3) - *(uint32_t *)a1) >> 2;
  if ( v8 != 0 )
  {
    v9 = 2 * v8;
    if ( v8 > 2 * v8 || v9 > 0x3FFFFFFF )
    {
      v25 = -4;
      v10 = (src - (char *)(v7)) >> 2;
    }
    else
    {
      v25 = 8 * v8;
      v19 = src - (char *)(v7);
      dest = nullptr;
      v10 = v19 >> 2;
      if ( v9 == 0 )
        goto LABEL_11;
    }
  }
  else
  {
    v25 = 4;
    v10 = (src - (char *)(v7)) >> 2;
  }
  v23 = v10;
  dest = (char *)opNew(v25);
  v10 = v23;
LABEL_11:
  v12 = &dest[4 * v10];
  if ( v12 != nullptr )
    *(uint32_t *)v12 = *a3;
  v13 = 0;
  v14 = (int)(uintptr_t)(&src[-*(uint32_t *)a1]) >> 2;
  if ( v14 != 0 )
  {
    v13 = 4 * v14;
    v21 = dest;
    memmove(dest, *(const void **)a1, 4 * v14);
    dest = v21;
  }
  v15 = &dest[v13 + 4];
  v16 = 0;
  v17 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
  if ( v17 != 0 )
  {
    v16 = 4 * v17;
    v22 = dest;
    v24 = v15;
    memmove(v15, src, 4 * v17);
    v15 = v24;
    dest = v22;
  }
  v18 = &v15[v16];
  if ( *(uint32_t *)a1 != 0 )
  {
    v20 = dest;
    opDelete(*(void **)a1);
    dest = v20;
  }
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(dest);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v18);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&dest[v25]);
}


// ============================================================================
// Address:   0x1387350 (size: 471 bytes)
// Symbol:    sub_1387350
// Demangled: sub_1387350
// ============================================================================
int sub_1387350()
{
  int result;
  typedef int _g4_t_v1;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v1)) > _g4_s0 ? (12u + sizeof(_g4_t_v1)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v1 &v1 = *reinterpret_cast<_g4_t_v1 *>(_g4_sf + 12u);

  sub_1900D70(&unk_2118D80);
  __cxa_atexit((void (*)(void *))sub_19014D0, &unk_2118D80, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2118D84), "UNKNOWN", (int)(uintptr_t)(&v1) + 2);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2118D84, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2118D88), "IMEI", (int)(uintptr_t)(&v1) + 1);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2118D88, &unk_20D1280);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&unk_2118D8C), "HDIDFV", (int)(uintptr_t)(&v1));
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &unk_2118D8C, &unk_20D1280);
  dword_2118D90 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118D90, &unk_20D1280);
  dword_2118D94 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118D94, &unk_20D1280);
  dword_2118D98 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118D98, &unk_20D1280);
  dword_2118D9C = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118D9C, &unk_20D1280);
  dword_2118DA0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DA0, &unk_20D1280);
  dword_2118DA4 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DA4, &unk_20D1280);
  dword_2118DA8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DA8, &unk_20D1280);
  dword_2118DAC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DAC, &unk_20D1280);
  result = opNewArray(0x10u);
  dword_2118DB0 = result;
  return result;
}


// ============================================================================
// Address:   0x1387570 (size: 291 bytes)
// Symbol:    sub_1387570
// Demangled: sub_1387570
// ============================================================================
int sub_1387570()
{
  int result;

  dword_2118DB4 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DB4, &unk_20D1280);
  dword_2118DB8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DB8, &unk_20D1280);
  dword_2118DBC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DBC, &unk_20D1280);
  dword_2118DC0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DC0, &unk_20D1280);
  dword_2118DC4 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DC4, &unk_20D1280);
  dword_2118DC8 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DC8, &unk_20D1280);
  dword_2118DCC = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DCC, &unk_20D1280);
  dword_2118DD0 = (int)(uintptr_t)(&dword_213B814);
  __cxa_atexit((void (*)(void *))g4_std::string::Destroy, &dword_2118DD0, &unk_20D1280);
  result = opNewArray(0x10u);
  dword_2118DD4 = result;
  return result;
}


// ============================================================================
// Address:   0x1387fd0 (size: 667 bytes)
// Symbol:    _ZNSt6vectorIwSaIwEE14_M_fill_insertEN9__gnu_cxx17__normal_iteratorIPwS1_EEjRKw
// Demangled: g4_std_compat::vector_fill_insert(__gnu_cxx::__normal_iterator<wchar_t *,std::vector<wchar_t,std::allocator<wchar_t>>>,unsigned int,wchar_t const&)
// ============================================================================
static void g4_compat_def_11(int a1, char *src, unsigned int a3, int *a4)
{
  char *v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  uint32_t *v8;
  char *dest;
  int v10;
  char *v11;
  uint8_t *v12;
  unsigned int v13;
  unsigned int v14;
  bool v15;
  unsigned int v16;
  int v17;
  char *v18;
  char *v19;
  int v20;
  unsigned int i;
  int v22;
  int v23;
  char *v24;
  int v25;
  int v26;
  char *v27;
  int v28;
  int v29;
  char *v30;
  char *v31;
  int v32;
  char *v33;
  int v34;
  char *v35;
  char *v36;
  int v37;
  char *v38;

  if ( a3 == 0 )
    return;
  v4 = *(char **)(a1 + 4);
  if ( a3 <= (*(uint32_t *)(a1 + 8) - (int)(uintptr_t)(v4)) >> 2 )
  {
    v5 = *a4;
    v6 = (v4 - src) >> 2;
    if ( a3 < v6 )
    {
      v28 = 4 * a3;
      v29 = *(uint32_t *)(a1 + 4);
      v38 = &v4[-4 * a3];
      if ( (int)(4 * a3) >> 2 != 0 )
      {
        v36 = *(char **)(a1 + 4);
        memmove(v4, v38, 4 * (v28 >> 2));
        v29 = *(uint32_t *)(a1 + 4);
        v4 = v36;
      }
      *(uint32_t *)(a1 + 4) = v28 + v29;
      if ( (v38 - src) >> 2 != 0 )
        memmove(&v4[-4 * ((v38 - src) >> 2)], src, 4 * ((v38 - src) >> 2));
      v30 = &src[v28];
      if ( v30 != src )
      {
        v31 = src;
        do
        {
          *(uint32_t *)v31 = v5;
          v31 += 4;
        }
        while ( v30 != v31 );
      }
    }
    else
    {
      v7 = a3 - v6;
      v8 = *(uint32_t **)(a1 + 4);
      if ( a3 != v6 )
      {
        do
        {
          --v7;
          *v8++ = v5;
        }
        while ( v7 != 0 );
        v8 = *(uint32_t **)(a1 + 4);
      }
      dest = (char *)&v8[a3 - v6];
      v10 = 0;
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(dest);
      if ( v6 != 0 )
      {
        v10 = 4 * v6;
        v35 = v4;
        memmove(dest, src, 4 * v6);
        dest = *(char **)(a1 + 4);
        v4 = v35;
      }
      *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(&dest[v10]);
      if ( v4 != src )
      {
        v11 = src;
        do
        {
          *(uint32_t *)v11 = v5;
          v11 += 4;
        }
        while ( v4 != v11 );
      }
    }
    return;
  }
  v12 = *(uint8_t **)a1;
  v13 = (int)(uintptr_t)(&v4[-*(uint32_t *)a1]) >> 2;
  if ( a3 > 0x3FFFFFFF - v13 )
    sub_1900180("vector::_M_fill_insert");
  v14 = a3;
  if ( v13 >= a3 )
    v14 = v13;
  v15 = __CFADD__(v14, v13);
  v16 = v14 + v13;
  if ( v15 || v16 > 0x3FFFFFFF )
  {
    v37 = -4;
    v17 = (src - (char *)(v12)) >> 2;
  }
  else
  {
    v17 = (src - (char *)(v12)) >> 2;
    if ( v16 == 0 )
    {
      v37 = 0;
      v18 = nullptr;
      goto LABEL_20;
    }
    v37 = 4 * v16;
  }
  v32 = v17;
  v18 = (char *)opNew(v37);
  v17 = v32;
LABEL_20:
  v19 = &v18[4 * v17];
  v20 = *a4;
  for ( i = a3; i != 0; --i )
  {
    *(uint32_t *)v19 = v20;
    v19 += 4;
  }
  v22 = 0;
  v23 = (int)(uintptr_t)(&src[-*(uint32_t *)a1]) >> 2;
  if ( v23 != 0 )
  {
    v34 = 4 * v23;
    memmove(v18, *(const void **)a1, 4 * v23);
    v22 = v34;
  }
  v24 = &v18[4 * a3 + v22];
  v25 = 0;
  v26 = (*(uint32_t *)(a1 + 4) - (int)(uintptr_t)(src)) >> 2;
  if ( v26 != 0 )
  {
    v25 = 4 * v26;
    v33 = v24;
    memmove(v24, src, 4 * v26);
    v24 = v33;
  }
  v27 = &v24[v25];
  if ( *(uint32_t *)a1 != 0 )
    opDelete(*(void **)a1);
  *(uint32_t *)a1 = (uint32_t)(uintptr_t)(v18);
  *(uint32_t *)(a1 + 4) = (uint32_t)(uintptr_t)(v27);
  *(uint32_t *)(a1 + 8) = (uint32_t)(uintptr_t)(&v18[v37]);
}

