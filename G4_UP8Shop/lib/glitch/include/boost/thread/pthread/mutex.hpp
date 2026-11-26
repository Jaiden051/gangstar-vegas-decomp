// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd958c):
//   ../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp
// Referenced by 4 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x131ffc0 .. 0x132001a (90 bytes)
// Symbol:               _ZN5boost5mutexD2Ev
// Demangled:            boost::mutex::~mutex()
// ============================================================================
/*
// Alternative name is '_ZN5boost5mutexD1Ev'
void boost::mutex::~mutex(boost::mutex *this)
{
  int v1;

  do
    v1 = pthread_mutex_destroy((pthread_mutex_t *)this);
  while ( v1 == 4 );
  if ( v1 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
}

*/

// ============================================================================
// Referencing Function: 0x1352720 .. 0x1352f76 (2134 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessorD1Ev
// Demangled:            glotv3::SingletonMutexedProcessor::~SingletonMutexedProcessor()
// ============================================================================
/*
// Alternative name is '_ZN6glotv325SingletonMutexedProcessorD2Ev'
void glotv3::SingletonMutexedProcessor::~SingletonMutexedProcessor(glotv3::SingletonMutexedProcessor *this)
{
  glotv3::SingletonMutexedProcessor *v1;
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int *v7;
  int v8;
  int v9;
  boost::detail::shared_count *v10;
  int v11;
  boost::detail::shared_count *v12;
  int v13;
  boost::detail::shared_count *v14;
  void *v15;
  void **v16;
  unsigned int v17;
  void *v18;
  int v19;
  int v20;
  int v21;
  int v22;
  void *v23;
  void **v24;
  unsigned int v25;
  void *v26;
  void *v27;
  void **v28;
  unsigned int v29;
  void *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  uint32_t *i;
  void (*v37)(uint32_t, uint32_t *, uint32_t *, uint32_t);
  bool v38;
  void *v39;
  uint32_t *v40;
  uint32_t *v41;
  uint32_t *v42;
  uint32_t *v43;
  int v44;
  boost::detail::shared_count *v45;
  unsigned int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  uint32_t v54[25];

  v1 = this;
  v52 = 0;
  v53 = sub_18F81E0();
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    *((uint32_t *)v1 + 3298) + 20,
    (char *)v1 + 13196,
    &v52);
  if ( v52 != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
    sub_134D010();
  do
    v2 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 13412));
  while ( v2 == 4 );
  if ( v2 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v3 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 13408));
  while ( v3 == 4 );
  if ( v3 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v4 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 13404));
  while ( v4 == 4 );
  if ( v4 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v5 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 13400));
  while ( v5 == 4 );
  if ( v5 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v6 = pthread_mutex_destroy((pthread_mutex_t *)((char *)this + 13396));
  while ( v6 == 4 );
  if ( v6 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  v48 = *((uint32_t *)this + 3344);
  v50 = *((uint32_t *)this + 3345);
  v46 = *((uint32_t *)this + 3347);
  v49 = *((uint32_t *)this + 3340);
  v51 = *((uint32_t *)this + 3342);
  v47 = *((uint32_t *)this + 3343);
  if ( v46 > v47 + 4 )
  {
    v7 = (int *)(v47 + 4);
    do
    {
      v8 = *v7;
      v9 = *v7 + 512;
      do
      {
        v10 = (boost::detail::shared_count *)(v8 + 4);
        v8 += 8;
        boost::detail::shared_count::~shared_count(v10);
      }
      while ( v8 != v9 );
      ++v7;
    }
    while ( v46 > (unsigned int)v7 );
    v1 = this;
  }
  if ( v46 == v47 )
  {
    if ( v48 != v49 )
    {
      v44 = v49;
      do
      {
        v45 = (boost::detail::shared_count *)(v44 + 4);
        v44 += 8;
        boost::detail::shared_count::~shared_count(v45);
      }
      while ( v48 != v44 );
    }
  }
  else
  {
    if ( v49 != v51 )
    {
      v11 = v49;
      do
      {
        v12 = (boost::detail::shared_count *)(v11 + 4);
        v11 += 8;
        boost::detail::shared_count::~shared_count(v12);
      }
      while ( v51 != v11 );
    }
    if ( v48 != v50 )
    {
      v13 = v50;
      do
      {
        v14 = (boost::detail::shared_count *)(v13 + 4);
        v13 += 8;
        boost::detail::shared_count::~shared_count(v14);
      }
      while ( v48 != v13 );
    }
  }
  v15 = *((void **)v1 + 3338);
  if ( v15 != nullptr )
  {
    v16 = *((void ***)v1 + 3343);
    v17 = *((uint32_t *)v1 + 3347) + 4;
    if ( v17 > (unsigned int)v16 )
    {
      do
      {
        v18 = *v16++;
        operator delete(v18);
      }
      while ( v17 > (unsigned int)v16 );
      v15 = *((void **)v1 + 3338);
    }
    operator delete(v15);
  }
  do
    v19 = pthread_mutex_destroy((pthread_mutex_t *)v1 + 556);
  while ( v19 == 4 );
  if ( v19 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      81,
      "boost::condition_variable::~condition_variable()",
      "!ret");
  do
    v20 = pthread_cond_destroy((pthread_cond_t *)((char *)v1 + 13348));
  while ( v20 == 4 );
  if ( v20 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      86,
      "boost::condition_variable::~condition_variable()",
      "!ret");
  do
    v21 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13340));
  while ( v21 == 4 );
  if ( v21 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v22 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13336));
  while ( v22 == 4 );
  if ( v22 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  v54[6] = *((uint32_t *)v1 + 3329);
  v54[7] = *((uint32_t *)v1 + 3330);
  v54[8] = *((uint32_t *)v1 + 3331);
  v54[9] = *((uint32_t *)v1 + 3332);
  v54[2] = *((uint32_t *)v1 + 3325);
  v54[3] = *((uint32_t *)v1 + 3326);
  v54[4] = *((uint32_t *)v1 + 3327);
  v54[5] = *((uint32_t *)v1 + 3328);
  sub_134E700();
  v23 = *((void **)v1 + 3323);
  if ( v23 != nullptr )
  {
    v24 = *((void ***)v1 + 3328);
    v25 = *((uint32_t *)v1 + 3332) + 4;
    if ( v25 > (unsigned int)v24 )
    {
      do
      {
        v26 = *v24++;
        operator delete(v26);
      }
      while ( v25 > (unsigned int)v24 );
      v23 = *((void **)v1 + 3323);
    }
    operator delete(v23);
  }
  v54[14] = *((uint32_t *)v1 + 3319);
  v54[15] = *((uint32_t *)v1 + 3320);
  v54[16] = *((uint32_t *)v1 + 3321);
  v54[17] = *((uint32_t *)v1 + 3322);
  v54[10] = *((uint32_t *)v1 + 3315);
  v54[11] = *((uint32_t *)v1 + 3316);
  v54[12] = *((uint32_t *)v1 + 3317);
  v54[13] = *((uint32_t *)v1 + 3318);
  sub_134E700();
  v27 = *((void **)v1 + 3313);
  if ( v27 != nullptr )
  {
    v28 = *((void ***)v1 + 3318);
    v29 = *((uint32_t *)v1 + 3322) + 4;
    if ( v29 > (unsigned int)v28 )
    {
      do
      {
        v30 = *v28++;
        operator delete(v30);
      }
      while ( v29 > (unsigned int)v28 );
      v27 = *((void **)v1 + 3313);
    }
    operator delete(v27);
  }
  do
    v31 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13244));
  while ( v31 == 4 );
  if ( v31 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      81,
      "boost::condition_variable::~condition_variable()",
      "!ret");
  do
    v32 = pthread_cond_destroy((pthread_cond_t *)v1 + 276);
  while ( v32 == 4 );
  if ( v32 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
      86,
      "boost::condition_variable::~condition_variable()",
      "!ret");
  do
    v33 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13240));
  while ( v33 == 4 );
  if ( v33 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  do
    v34 = pthread_mutex_destroy((pthread_mutex_t *)((char *)v1 + 13236));
  while ( v34 == 4 );
  if ( v34 != 0 )
    __assert2(
      "../../../../../lib/glitch/include/boost/thread/pthread/mutex.hpp",
      108,
      "boost::mutex::~mutex()",
      "!posix::pthread_mutex_destroy(&m)");
  v35 = *((uint32_t *)v1 + 3298);
  v52 = 0;
  v53 = sub_18F81E0();
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::cancel(
    v35 + 20,
    (char *)this + 13196,
    &v52);
  for ( i = *((uint32_t **)v1 + 3302); i != nullptr; i = *((uint32_t **)v1 + 3302) )
  {
    v38 = *i == 0;
    *((uint32_t *)v1 + 3302) = *i;
    if ( v38 )
      *((uint32_t *)v1 + 3303) = 0;
    *i = 0;
    v37 = (void (*)(uint32_t, uint32_t *, uint32_t *, uint32_t))i[1];
    v54[0] = 0;
    v54[1] = sub_18F81E0();
    v37(0, i, v54, 0);
  }
  std::_Rb_tree<std::string,std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>,std::_Select1st<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>,std::less<std::string>,std::allocator<std::pair<std::string const,rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *>>>::_M_erase(
    (int)v1 + 13148,
    *((void **)v1 + 3289));
  v39 = *((void **)v1 + 3280);
  if ( v39 != nullptr )
  {
    v40 = *(uint32_t **)v39;
    if ( *(uint32_t *)v39 != 0 && v40 != *((uint32_t **)v39 + 2) )
    {
      while ( 1 )
      {
        v41 = (uint32_t *)v40[2];
        free(v40);
        *(uint32_t *)v39 = v41;
        if ( v41 == nullptr || v41 == *((uint32_t **)v39 + 2) )
          break;
        v40 = v41;
      }
    }
    operator delete(*((void **)v39 + 4));
    operator delete(v39);
  }
  v42 = *((uint32_t **)v1 + 3270);
  if ( v42 != nullptr && v42 != *((uint32_t **)v1 + 3272) )
  {
    while ( 1 )
    {
      v43 = (uint32_t *)v42[2];
      free(v42);
      *((uint32_t *)v1 + 3270) = v43;
      if ( v43 == nullptr || v43 == *((uint32_t **)v1 + 3272) )
        break;
      v42 = v43;
    }
  }
  operator delete(*((void **)v1 + 3274));
  glotv3::Writer::~Writer((glotv3::SingletonMutexedProcessor *)((char *)v1 + 8732));
  glotv3::Writer::~Writer((glotv3::SingletonMutexedProcessor *)((char *)v1 + 4384));
  glotv3::Writer::~Writer((glotv3::SingletonMutexedProcessor *)((char *)v1 + 36));
  std::string::~string((char *)v1 + 32);
  std::string::~string((char *)v1 + 28);
  std::string::~string((char *)v1 + 24);
  std::string::~string((char *)v1 + 20);
  std::string::~string((char *)v1 + 16);
  std::string::~string((char *)v1 + 12);
  std::string::~string((char *)v1 + 8);
}

*/

// ============================================================================
// Referencing Function: 0x13669b0 .. 0x1366a8a (218 bytes)
// Symbol:               _ZN6glotv36WriterD1Ev
// Demangled:            glotv3::Writer::~Writer()
// ============================================================================

// ============================================================================
// Referencing Function: 0x137c2b0 .. 0x137c4b7 (519 bytes)
// Symbol:               sub_137C2B0
// Demangled:            sub_137C2B0
// ============================================================================
