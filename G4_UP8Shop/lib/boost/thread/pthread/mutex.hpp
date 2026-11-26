// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd697c):
//   ../../../../../lib/boost/thread/pthread/mutex.hpp
// Referenced by 3 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x12339c0 .. 0x1233ba1 (481 bytes)
// Symbol:               _ZN6chatv24Core13ChatLibEngineD1Ev
// Demangled:            chatv2::Core::ChatLibEngine::~ChatLibEngine()
// ============================================================================
/*
// Alternative name is '_ZN6chatv24Core13ChatLibEngineD2Ev'
void chatv2::Core::ChatLibEngine::~ChatLibEngine(chatv2::Core::ChatLibEngine::Self *this)
{
  int v1;
  int v2;
  int v3;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  int (**v7)(std::exception *);

  *((uint8_t *)this + 16) = 0;
  if ( (uint8_t)boost::thread::joinable((chatv2::Core::ChatLibEngine::Self *)((char *)this + 8)) != 0 )
  {
    v1 = boost::thread::native_handle((chatv2::Core::ChatLibEngine::Self *)((char *)this + 8));
    if ( v1 == pthread_self() )
    {
      sub_1235D60(&v7, 35, "boost thread: trying joining itself");
      v7 = off_2049568;
      std::terminate();
    }
    boost::thread::join_noexcept((chatv2::Core::ChatLibEngine::Self *)((char *)this + 8));
  }
  do
    v2 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 248));
  while ( v2 == 4 );
  if ( v2 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  std::deque<boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::~deque((chatv2::Core::ChatLibEngine::Self *)((char *)this + 208));
  do
    v3 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 204));
  while ( v3 == 4 );
  if ( v3 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  std::deque<boost::shared_ptr<chatv2::Responses::IServerResponse>>::~deque((chatv2::Core::ChatLibEngine::Self *)((char *)this + 164));
  do
    v4 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 160));
  while ( v4 == 4 );
  if ( v4 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  std::deque<boost::shared_ptr<chatv2::Requests::IRequest>>::~deque((chatv2::Core::ChatLibEngine::Self *)((char *)this + 120));
  chatv2::Core::ArionExecutor::~ArionExecutor((chatv2::Core::ChatLibEngine::Self *)((char *)this + 20));
  boost::thread::detach((chatv2::Core::ChatLibEngine::Self *)((char *)this + 8));
  v5 = *((volatile int32_t **)this + 3);
  if ( v5 != nullptr && __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
    if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
  }
  v6 = *((volatile int32_t **)this + 1);
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
    (*(void (**)(volatile int32_t *))(*v6 + 12))(v6);
}

*/

// ============================================================================
// Referencing Function: 0x1238ce0 .. 0x1238ef9 (537 bytes)
// Symbol:               _ZN6chatv24Core13ArionExecutorD1Ev
// Demangled:            chatv2::Core::ArionExecutor::~ArionExecutor()
// ============================================================================
/*
// Alternative name is '_ZN6chatv24Core13ArionExecutorD2Ev'
void chatv2::Core::ArionExecutor::~ArionExecutor(chatv2::Core::ArionExecutor *this)
{
  int v1;
  int v2;
  int v3;
  volatile int32_t *v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  int v8;
  void (*v9)(char *, char *, int);
  void (*v10)(char *, char *, int);
  void (*v11)(char *, char *, int);
  char *v12;
  char v13;
  char v14;

  *(uint32_t *)this = &off_20921C0;
  v1 = *((uint32_t *)this + 23);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = &v13;
    std::string::_Rep::_M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)this + 22);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    v12 = &v14;
    std::string::_Rep::_M_destroy((void *)(v2 - 12));
  }
  do
    v3 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 84));
  while ( v3 == 4 );
  if ( v3 != 0 )
    __assert2(
      "../../../../../lib/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  chatv2::Core::ArionUser::~ArionUser((chatv2::Core::ArionExecutor *)((char *)this + 68));
  v4 = *((volatile int32_t **)this + 16);
  if ( v4 != nullptr && __sync_fetch_and_add(v4 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *, char *))(*v4 + 8))(v4, v12);
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v4 + 12))(v4);
  }
  v5 = *((volatile int32_t **)this + 14);
  if ( v5 != nullptr && __sync_fetch_and_add(v5 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v5 + 8))(v5);
    if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v5 + 12))(v5);
  }
  *(uint32_t *)this = &off_20921D8;
  v6 = *((uint32_t *)this + 9);
  if ( v6 != 0 )
  {
    if ( (v6 & 1) == 0 )
    {
      v11 = *(void (**)(char *, char *, int))(v6 & 0xFFFFFFFE);
      if ( v11 != nullptr )
        v11((char *)this + 40, (char *)this + 40, 2);
    }
    *((uint32_t *)this + 9) = 0;
  }
  v7 = *((uint32_t *)this + 5);
  if ( v7 != 0 )
  {
    if ( (v7 & 1) == 0 )
    {
      v10 = *(void (**)(char *, char *, int))(v7 & 0xFFFFFFFE);
      if ( v10 != nullptr )
        v10((char *)this + 24, (char *)this + 24, 2);
    }
    *((uint32_t *)this + 5) = 0;
  }
  v8 = *((uint32_t *)this + 1);
  if ( v8 != 0 )
  {
    if ( (v8 & 1) == 0 )
    {
      v9 = *(void (**)(char *, char *, int))(v8 & 0xFFFFFFFE);
      if ( v9 != nullptr )
        v9((char *)this + 8, (char *)this + 8, 2);
    }
    *((uint32_t *)this + 1) = 0;
  }
}

*/

// ============================================================================
// Referencing Function: 0x1273d10 .. 0x1273e27 (279 bytes)
// Symbol:               _ZN6chatv212Connectivity10HTTPClientD2Ev
// Demangled:            chatv2::Connectivity::HTTPClient::~HTTPClient()
// ============================================================================
