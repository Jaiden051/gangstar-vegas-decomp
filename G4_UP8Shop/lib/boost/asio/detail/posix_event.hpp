// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6ba4):
//   ../../../../../lib/boost/asio/detail/posix_event.hpp
// Referenced by 2 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1243330 .. 0x1243821 (1265 bytes)
// Symbol:               _ZN5boost4asio6detail15task_io_service10do_run_oneERNS1_11scoped_lockINS1_11posix_mutexEEERNS1_27task_io_service_thread_infoERKNS_6system10error_codeE
// Demangled:            boost::asio::detail::task_io_service::do_run_one(boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> &,boost::asio::detail::task_io_service_thread_info &,boost::system::error_code const&)
// ============================================================================
/*
int boost::asio::detail::task_io_service::do_run_one(
        boost::asio::detail::task_io_service *a1,
        int a2,
        uint32_t *a3,
        int a4)
{
  int v6;
  bool v7;
  bool v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v15;
  pthread_cond_t *v16;
  pthread_cond_t *v17;
  boost::asio::detail::task_io_service *v18;
  pthread_cond_t *v19;
  int v20;
  int v21;
  int v22;
  uint32_t *v23;
  int v24;
  pthread_cond_t *v25;
  int v26;
  int v27;
  int fd;
  bool v29;
  bool v30;
  bool v31;
  bool v32;
  pthread_cond_t *v33;
  pthread_cond_t *v34;
  int v35;
  pthread_cond_t *v36;
  int v37;
  int v38;
  int v39;
  int v40;
  int v41;
  char *v42;
  uint32_t *v43;
  int v44;
  pthread_cond_t *v45;
  struct epoll_event event;

LABEL_1:
  if ( *((uint8_t *)a1 + 60) != 0 )
    return 0;
  while ( 1 )
  {
    v6 = *((uint32_t *)a1 + 13);
    if ( v6 == 0 )
    {
      a3[5] = *((uint32_t *)a1 + 16);
      *((uint32_t *)a1 + 16) = a3;
      if ( *(uint8_t *)(a2 + 4) != 0 )
      {
        *(uint8_t *)(a3[1] + 4) = 0;
        v17 = (pthread_cond_t *)a3[1];
        if ( *(uint8_t *)(a2 + 4) != 0 )
          goto LABEL_30;
      }
      else
      {
        v35 = a3[1];
        __assert2(
          "../../../../../lib/boost/asio/detail/posix_event.hpp",
          69,
          "void boost::asio::detail::posix_event::clear(Lock&) [with Lock = boost::asio::detail::scoped_lock<boost::asio:"
          ":detail::posix_mutex>]",
          "lock.locked()");
        *(uint8_t *)(v35 + 4) = 0;
        v17 = (pthread_cond_t *)a3[1];
        if ( *(uint8_t *)(a2 + 4) != 0 )
          goto LABEL_30;
      }
      v36 = v17;
      __assert2(
        "../../../../../lib/boost/asio/detail/posix_event.hpp",
        78,
        "void boost::asio::detail::posix_event::wait(Lock&) [with Lock = boost::asio::detail::scoped_lock<boost::asio::de"
        "tail::posix_mutex>]",
        "lock.locked()");
      v17 = v36;
LABEL_30:
      if ( ((uint8_t *)(v17))[4] == 0 )
      {
        v43 = a3;
        v18 = a1;
        v19 = v17;
        do
          pthread_cond_wait(v19, *(pthread_mutex_t **)a2);
        while ( ((uint8_t *)(v19))[4] == 0 );
        a1 = v18;
        a3 = v43;
      }
      goto LABEL_1;
    }
    v7 = *(uint32_t *)v6 == 0;
    *((uint32_t *)a1 + 13) = *(uint32_t *)v6;
    if ( v7 )
      *((uint32_t *)a1 + 14) = 0;
    *(uint32_t *)v6 = 0;
    v8 = *((uint32_t *)a1 + 13) != 0;
    v42 = (char *)a1 + 32;
    if ( (boost::asio::detail::task_io_service *)v6 != (boost::asio::detail::task_io_service *)((char *)a1 + 32) )
      break;
    *((uint8_t *)a1 + 44) = v8;
    if ( v8 && *((uint8_t *)a1 + 20) == 0 && (v15 = *((uint32_t *)a1 + 16)) != 0 )
    {
      *((uint32_t *)a1 + 16) = *(uint32_t *)(v15 + 20);
      *(uint32_t *)(v15 + 20) = 0;
      v16 = *(pthread_cond_t **)(v15 + 4);
      if ( *(uint8_t *)(a2 + 4) == 0 )
      {
        v34 = *(pthread_cond_t **)(v15 + 4);
        v32 = v8;
        __assert2(
          "../../../../../lib/boost/asio/detail/posix_event.hpp",
          59,
          "void boost::asio::detail::posix_event::signal_and_unlock(Lock&) [with Lock = boost::asio::detail::scoped_lock<"
          "boost::asio::detail::posix_mutex>]",
          "lock.locked()");
        v8 = v32;
        v16 = v34;
      }
      ((uint8_t *)(v16))[4] = 1;
      if ( *(uint8_t *)(a2 + 4) != 0 )
      {
        v33 = v16;
        v30 = v8;
        pthread_mutex_unlock(*(pthread_mutex_t **)a2);
        *(uint8_t *)(a2 + 4) = 0;
        v16 = v33;
        v8 = v30;
      }
      v31 = v8;
      pthread_cond_signal(v16);
      v8 = v31;
    }
    else if ( *(uint8_t *)(a2 + 4) != 0 )
    {
      v29 = v8;
      pthread_mutex_unlock(*(pthread_mutex_t **)a2);
      *(uint8_t *)(a2 + 4) = 0;
      v8 = v29;
    }
    boost::asio::detail::epoll_reactor::run(*((uint32_t *)a1 + 7), !v8, a3 + 2);
    v9 = a3[4];
    if ( v9 > 0 )
    {
      do
      {
        __sync_fetch_and_add((volatile int32_t *)a1 + 12, 1u);
        --v9;
      }
      while ( v9 != 0 );
    }
    a3[4] = 0;
    if ( *(uint8_t *)(a2 + 4) == 0 )
    {
      pthread_mutex_lock(*(pthread_mutex_t **)a2);
      *(uint8_t *)(a2 + 4) = 1;
    }
    *((uint8_t *)a1 + 44) = 1;
    v10 = a3[2];
    if ( v10 != 0 )
    {
      v11 = *((uint32_t **)a1 + 14);
      if ( v11 != nullptr )
        *v11 = v10;
      else
        *((uint32_t *)a1 + 13) = v10;
      *((uint32_t *)a1 + 14) = a3[3];
      a3[2] = 0;
      a3[3] = 0;
    }
    v12 = *((uint32_t **)a1 + 14);
    *((uint32_t *)a1 + 8) = 0;
    if ( v12 == nullptr )
    {
      *((uint32_t *)a1 + 14) = v42;
      *((uint32_t *)a1 + 13) = v42;
      goto LABEL_1;
    }
    *v12 = v42;
    v7 = *((uint8_t *)a1 + 60) == 0;
    *((uint32_t *)a1 + 14) = v42;
    if ( !v7 )
      return 0;
  }
  v44 = *(uint32_t *)(v6 + 8);
  if ( *((uint32_t *)a1 + 13) == 0 || *((uint8_t *)a1 + 20) != 0 )
    goto LABEL_40;
  v24 = *((uint32_t *)a1 + 16);
  if ( v24 != 0 )
  {
    *((uint32_t *)a1 + 16) = *(uint32_t *)(v24 + 20);
    *(uint32_t *)(v24 + 20) = 0;
    v25 = *(pthread_cond_t **)(v24 + 4);
    v45 = v25;
    if ( *(uint8_t *)(a2 + 4) == 0 )
    {
      v40 = v6;
      __assert2(
        "../../../../../lib/boost/asio/detail/posix_event.hpp",
        59,
        "void boost::asio::detail::posix_event::signal_and_unlock(Lock&) [with Lock = boost::asio::detail::scoped_lock<bo"
        "ost::asio::detail::posix_mutex>]",
        "lock.locked()");
      v6 = v40;
      v25 = v45;
    }
    ((uint8_t *)(v25))[4] = 1;
    if ( *(uint8_t *)(a2 + 4) != 0 )
    {
      v38 = v6;
      pthread_mutex_unlock(*(pthread_mutex_t **)a2);
      *(uint8_t *)(a2 + 4) = 0;
      v25 = v45;
      v6 = v38;
    }
    v39 = v6;
    pthread_cond_signal(v25);
    v6 = v39;
  }
  else
  {
    if ( *((uint8_t *)a1 + 44) == 0 )
    {
      v26 = *((uint32_t *)a1 + 7);
      if ( v26 != 0 )
      {
        *((uint8_t *)a1 + 44) = 1;
        event.data.u64 = (unsigned int)(v26 + 28);
        fd = *(uint32_t *)(v26 + 28);
        v27 = *(uint32_t *)(v26 + 36);
        v41 = v6;
        event.events = 0x80000009;
        epoll_ctl(v27, 3, fd, &event);
        v6 = v41;
      }
    }
LABEL_40:
    if ( *(uint8_t *)(a2 + 4) != 0 )
    {
      v37 = v6;
      pthread_mutex_unlock(*(pthread_mutex_t **)a2);
      *(uint8_t *)(a2 + 4) = 0;
      v6 = v37;
    }
  }
  (*(void (**)(boost::asio::detail::task_io_service *, int, int, int))(v6 + 4))(a1, v6, a4, v44);
  v20 = a3[4];
  if ( v20 <= 1 )
  {
    if ( v20 != 1 && __sync_fetch_and_add((volatile int32_t *)a1 + 12, 0xFFFFFFFF) == 1 )
      boost::asio::detail::task_io_service::stop(a1);
  }
  else
  {
    v21 = v20 - 1;
    do
    {
      __sync_fetch_and_add((volatile int32_t *)a1 + 12, 1u);
      --v21;
    }
    while ( v21 != 0 );
  }
  v22 = a3[2];
  a3[4] = 0;
  v13 = 1;
  if ( v22 != 0 )
  {
    if ( *(uint8_t *)(a2 + 4) != 0
      || (pthread_mutex_lock(*(pthread_mutex_t **)a2), *(uint8_t *)(a2 + 4) = 1, v22 = a3[2], v13 = 1, v22 != 0) )
    {
      v23 = *((uint32_t **)a1 + 14);
      if ( v23 != nullptr )
        *v23 = v22;
      else
        *((uint32_t *)a1 + 13) = v22;
      *((uint32_t *)a1 + 14) = a3[3];
      a3[2] = 0;
      a3[3] = 0;
      return 1;
    }
  }
  return v13;
}

*/

// ============================================================================
// Referencing Function: 0x1263fa0 .. 0x12640af (271 bytes)
// Symbol:               _ZN5boost4asio6detail15task_io_service26wake_one_thread_and_unlockERNS1_11scoped_lockINS1_11posix_mutexEEE
// Demangled:            boost::asio::detail::task_io_service::wake_one_thread_and_unlock(boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> &)
// ============================================================================
/*
uint32_t *boost::asio::detail::task_io_service::wake_one_thread_and_unlock(
        boost::asio::detail::task_io_service *this,
        boost::asio::detail::scoped_lock<boost::asio::detail::posix_mutex> *a2)
{
  uint32_t *result;
  pthread_cond_t *v3;
  int v4;
  int fd;
  struct epoll_event event;

  result = *((uint32_t **)this + 16);
  if ( result != nullptr )
  {
    *((uint32_t *)this + 16) = result[5];
    result[5] = 0;
    v3 = (pthread_cond_t *)result[1];
    if ( *((uint8_t *)a2 + 4) == 0 )
      __assert2(
        "../../../../../lib/boost/asio/detail/posix_event.hpp",
        59,
        "void boost::asio::detail::posix_event::signal_and_unlock(Lock&) [with Lock = boost::asio::detail::scoped_lock<bo"
        "ost::asio::detail::posix_mutex>]",
        "lock.locked()");
    ((uint8_t *)(v3))[4] = 1;
    if ( *((uint8_t *)a2 + 4) != 0 )
    {
      pthread_mutex_unlock(*(pthread_mutex_t **)a2);
      *((uint8_t *)a2 + 4) = 0;
    }
    return (uint32_t *)pthread_cond_signal(v3);
  }
  else
  {
    if ( *((uint8_t *)this + 44) == 0 )
    {
      result = *((uint32_t **)this + 7);
      if ( result != nullptr )
      {
        *((uint8_t *)this + 44) = 1;
        event.data.u64 = (unsigned int)(result + 7);
        fd = result[7];
        v4 = result[9];
        event.events = 0x80000009;
        result = (uint32_t *)epoll_ctl(v4, 3, fd, &event);
      }
    }
    if ( *((uint8_t *)a2 + 4) != 0 )
    {
      result = (uint32_t *)pthread_mutex_unlock(*(pthread_mutex_t **)a2);
      *((uint8_t *)a2 + 4) = 0;
    }
  }
  return result;
}

*/
