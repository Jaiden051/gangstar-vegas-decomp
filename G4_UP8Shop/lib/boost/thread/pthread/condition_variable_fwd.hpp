// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd6850):
//   ../../../../../lib/boost/thread/pthread/condition_variable_fwd.hpp
// Referenced by 2 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1232110 .. 0x1232bcf (2751 bytes)
// Symbol:               _ZN6chatv24Core13ChatLibEngine10InitializeERKSsS3_
// Demangled:            chatv2::Core::ChatLibEngine::Initialize(std::string const&,std::string const&)
// ============================================================================
/*
int chatv2::Core::ChatLibEngine::Initialize(uint32_t *a1, int a2, uint32_t *a3)
{
  int User;
  gaia::Gaia *Instance;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  volatile int32_t *v13;
  volatile int32_t *v14;
  bool v15;
  volatile int32_t *v16;
  volatile int32_t *v17;
  volatile int32_t *v18;
  int v19;
  volatile int32_t *v20;
  volatile int32_t *v21;
  volatile int32_t *v22;
  size_t v23;
  char v24;
  int v25;
  size_t v26;
  uint8_t *v27;
  char v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  int v35;
  size_t v36;
  char v37;
  void *v38;
  void *v39;
  void *v40;
  int result;
  void *v42;
  int v43;
  int v44;
  gaia::Gaia *v45;
  char v46;
  char v47;
  uint32_t *v48;
  size_t v49;
  int v50;
  size_t v51;
  int v52;
  size_t v53;
  const char *v54;
  size_t v55;
  int v56;
  uint32_t v57[4];
  uint32_t v58[4];
  int v59[3];
  int v60;
  int v61;
  volatile int32_t *v62;
  int (**v63)(std::exception *);
  int (**v64)(std::exception *);
  int (**v65)(std::exception *);
  int (**v66)(std::exception *);
  int (**v67)(std::exception *);
  int (**v68)(std::exception *);
  int (**v69)(std::exception *);

  User = chatv2::Core::ArionExecutor::GetUser((chatv2::Core::ArionExecutor *)(a1 + 5));
  chatv2::Core::ArionUser::SetNickname(User, a3);
  v57[0] = &unk_213B814;
  Instance = (gaia::Gaia *)gaia::Gaia::GetInstance(v45);
  gaia::Gaia::GetCredentialDetails(Instance, 19, 2, (gaia::Gaia *)v57);
  v5 = chatv2::Core::ArionExecutor::GetUser((chatv2::Core::ArionExecutor *)(a1 + 5));
  chatv2::Core::ArionUser::SetCredential(v5, v57);
  chatv2::Core::ArionExecutor::SetClientID(a1 + 5, a2);
  v6 = operator new(0x80u);
  *(uint32_t *)(v6 + 4) = 0;
  *(uint32_t *)(v6 + 8) = 0;
  *(uint32_t *)v6 = off_20A9450;
  *(uint32_t *)(v6 + 12) = 0;
  *(uint32_t *)(v6 + 16) = 0;
  *(uint32_t *)(v6 + 20) = 0;
  v7 = pthread_mutex_init((pthread_mutex_t *)(v6 + 24), nullptr);
  if ( v7 != 0 )
  {
    sub_1235D60(&v64, v7, "boost:: mutex constructor failed in pthread_mutex_init");
    v64 = off_2049568;
    std::terminate();
  }
  v8 = pthread_mutex_init((pthread_mutex_t *)(v6 + 28), nullptr);
  if ( v8 != 0 )
  {
    sub_1235D60(&v66, v8, "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    v66 = off_2049568;
    std::terminate();
  }
  v9 = pthread_cond_init((pthread_cond_t *)(v6 + 32), nullptr);
  if ( v9 != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)(v6 + 28)) != 0 )
      __assert2(
        "../../../../../lib/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    sub_1235D60(&v65, v9, "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    v65 = off_2049568;
    std::terminate();
  }
  v10 = pthread_mutex_init((pthread_mutex_t *)(v6 + 36), nullptr);
  if ( v10 != 0 )
  {
    sub_1235D60(&v67, v10, "boost:: mutex constructor failed in pthread_mutex_init");
    v67 = off_2049568;
    std::terminate();
  }
  v11 = pthread_mutex_init((pthread_mutex_t *)(v6 + 40), nullptr);
  if ( v11 != 0 )
  {
    sub_1235D60(&v69, v11, "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    v69 = off_2049568;
    std::terminate();
  }
  v12 = pthread_cond_init((pthread_cond_t *)(v6 + 44), nullptr);
  if ( v12 != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)(v6 + 40)) != 0 )
      __assert2(
        "../../../../../lib/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    sub_1235D60(&v68, v12, "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    v68 = off_2049568;
    std::terminate();
  }
  *(uint32_t *)(v6 + 68) = v6 + 60;
  *(uint32_t *)(v6 + 72) = v6 + 60;
  *(uint32_t *)v6 = off_2092168;
  *(uint32_t *)(v6 + 124) = a1;
  *(uint8_t *)(v6 + 48) = 0;
  *(uint8_t *)(v6 + 49) = 0;
  *(uint8_t *)(v6 + 50) = 0;
  *(uint32_t *)(v6 + 52) = 0;
  *(uint32_t *)(v6 + 60) = 0;
  *(uint32_t *)(v6 + 64) = 0;
  *(uint32_t *)(v6 + 76) = 0;
  *(uint32_t *)(v6 + 80) = 0;
  *(uint32_t *)(v6 + 84) = 0;
  *(uint32_t *)(v6 + 88) = 0;
  *(uint32_t *)(v6 + 92) = 0;
  *(uint32_t *)(v6 + 96) = 0;
  *(uint32_t *)(v6 + 100) = 0;
  *(uint32_t *)(v6 + 104) = 0;
  *(uint32_t *)(v6 + 108) = 0;
  *(uint8_t *)(v6 + 112) = 1;
  *(uint8_t *)(v6 + 113) = 0;
  *(uint32_t *)(v6 + 116) = chatv2::Core::ChatLibEngine::Start;
  *(uint32_t *)(v6 + 120) = 0;
  v61 = v6;
  v62 = nullptr;
  v13 = (volatile int32_t *)operator new(0x10u);
  *((uint32_t *)v13 + 1) = 1;
  *((uint32_t *)v13 + 2) = 1;
  *v13 = (volatile int32_t)off_2092188;
  v14 = v62;
  v15 = v62 == nullptr;
  *((uint32_t *)v13 + 3) = v6;
  v62 = v13;
  if ( !v15 && __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v14 + 8))(v14);
    if ( __sync_fetch_and_add(v14 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v14 + 12))(v14);
  }
  v16 = *(volatile int32_t **)(v6 + 8);
  if ( v16 == nullptr || *((uint32_t *)v16 + 1) == 0 )
  {
    v17 = v62;
    if ( v62 != nullptr )
    {
      __sync_add_and_fetch(v62 + 1, 1);
      v16 = *(volatile int32_t **)(v6 + 8);
    }
    *(uint32_t *)(v6 + 4) = v6;
    if ( v17 != v16 )
    {
      if ( v17 != nullptr )
      {
        __sync_add_and_fetch(v17 + 2, 1);
        v16 = *(volatile int32_t **)(v6 + 8);
      }
      if ( v16 != nullptr && __sync_fetch_and_add(v16 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v16 + 12))(v16);
      *(uint32_t *)(v6 + 8) = v17;
    }
    if ( v17 != nullptr && __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(volatile int32_t *))(*v17 + 8))(v17);
      if ( __sync_fetch_and_add(v17 + 2, 0xFFFFFFFF) == 1 )
        (*(void (**)(volatile int32_t *))(*v17 + 12))(v17);
    }
  }
  if ( (uint8_t)boost::thread::start_thread_noexcept((boost::thread *)&v61) == 0 )
  {
    sub_1235D60(&v63, 11, "boost::thread_resource_error");
    v63 = off_2049568;
    std::terminate();
  }
  v18 = v62;
  v19 = v61;
  if ( v62 != nullptr )
    __sync_add_and_fetch(v62 + 1, 1);
  v20 = (volatile int32_t *)a1[3];
  a1[2] = v19;
  a1[3] = v18;
  if ( v20 != nullptr && __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v20 + 8))(v20);
    if ( __sync_fetch_and_add(v20 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v20 + 12))(v20);
  }
  v21 = v62;
  v61 = 0;
  v15 = v62 == nullptr;
  v62 = nullptr;
  if ( !v15 && __sync_fetch_and_add(v21 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v21 + 8))(v21);
    if ( __sync_fetch_and_add(v21 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v21 + 12))(v21);
  }
  boost::thread::detach((boost::thread *)&v61);
  v22 = v62;
  if ( v62 != nullptr && __sync_fetch_and_add(v62 + 1, 0xFFFFFFFF) == 1 )
  {
    (*(void (**)(volatile int32_t *))(*v22 + 8))(v22);
    if ( __sync_fetch_and_add(v22 + 2, 0xFFFFFFFF) == 1 )
      (*(void (**)(volatile int32_t *))(*v22 + 12))(v22);
  }
  v23 = 0;
  v59[0] = (int)&unk_213B814;
  sub_1939D80((int)v59, 0x80u, 0);
  v50 = 0;
  v24 = aChatlibengineI[0];
  v54 = " ChatLibEngine initialized, nickname: {0}\n";
  while ( 1 )
  {
    v27 = v54 + 1;
    if ( v24 != 123 )
    {
      v25 = v59[0];
      v26 = v23 + 1;
      if ( v23 + 1 > *(uint32_t *)(v59[0] - 12) )
      {
        v46 = v24;
        sub_1939D80((int)v59, v23 + 65, 0);
        v25 = v59[0];
        v26 = v23 + 1;
        v24 = v46;
      }
      if ( *(int *)(v25 - 4) >= 0 )
      {
        v49 = v26;
        v47 = v24;
        sub_19397C0(v59);
        v25 = v59[0];
        v26 = v49;
        v24 = v47;
      }
      *(uint8_t *)(v25 + v23) = v24;
      ++v54;
      v23 = v26;
      goto LABEL_37;
    }
    v28 = v54[1];
    if ( v28 == 123 )
    {
      v43 = v59[0];
      if ( v23 + 2 > *(uint32_t *)(v59[0] - 12) )
      {
        sub_1939D80((int)v59, v23 + 66, 0);
        v43 = v59[0];
        v53 = v23 + 1;
        if ( *(int *)(v59[0] - 4) < 0 )
          goto LABEL_71;
      }
      else
      {
        v53 = v23 + 1;
        if ( *(int *)(v59[0] - 4) < 0 )
        {
LABEL_71:
          *(uint8_t *)(v43 + v23) = 123;
          v44 = v59[0];
          if ( *(int *)(v59[0] - 4) >= 0 )
          {
            sub_19397C0(v59);
            v44 = v59[0];
          }
          v54 += 2;
          v23 += 2;
          *(uint8_t *)(v44 + v53) = 123;
          goto LABEL_37;
        }
      }
      sub_19397C0(v59);
      v43 = v59[0];
      goto LABEL_71;
    }
    if ( v28 == 0 )
      goto LABEL_62;
    v55 = v23;
    v29 = 1;
    v30 = 0;
    while ( 1 )
    {
      v28 = *v27;
      if ( (uint8_t)(*v27 - 48) > 9u )
        break;
      v31 = v29 * v30;
      ++v27;
      v29 *= 10;
      v30 = v31 + v28 - 48;
      if ( *v27 == 0 )
      {
        v32 = v30;
        v28 = 0;
        v23 = v55;
        goto LABEL_45;
      }
    }
    v32 = v30;
    v23 = v55;
    if ( v29 == 1 )
LABEL_62:
      v32 = v50++;
    if ( v28 == 58 )
    {
      v28 = v27[1];
      if ( v28 == 120 || v28 == 88 )
      {
        v28 = v27[2];
        v54 = v27 + 3;
      }
      else
      {
        v54 = v27 + 2;
      }
    }
    else
    {
LABEL_45:
      v54 = v27 + 1;
    }
    if ( v28 != 125 )
      break;
    if ( v32 != 0 )
    {
      sub_1939D80((int)v59, v23, 0);
LABEL_37:
      v24 = *v54;
      if ( *v54 == 0 )
        goto LABEL_56;
    }
    else
    {
      v52 = *(uint32_t *)(*a3 - 12);
      if ( v23 + v52 > *(uint32_t *)(v59[0] - 12) )
      {
        sub_1939D80((int)v59, v23 + v52 + 64, 0);
        v52 = *(uint32_t *)(*a3 - 12);
      }
      if ( v52 == 0 )
        goto LABEL_37;
      v33 = 0;
      v51 = v23;
      v34 = a3;
      do
      {
        v35 = v59[0];
        v36 = v33 + v51;
        if ( *(int *)(v59[0] - 4) >= 0 )
        {
          v48 = v34;
          sub_19397C0(v59);
          v35 = v59[0];
          v34 = v48;
        }
        v37 = *(uint8_t *)(*v34 + v33++);
        *(uint8_t *)(v35 + v36) = v37;
      }
      while ( v33 != v52 );
      v23 = v33 + v51;
      v24 = *v54;
      if ( *v54 == 0 )
        goto LABEL_56;
    }
  }
  sub_1939D80((int)v59, v23, 0);
LABEL_56:
  sub_1939D80((int)v59, v23, 0);
  std::string::__construct_copy(v58, v59);
  v38 = (void *)(v59[0] - 12);
  if ( (uint32_t *)(v59[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v38);
  }
  std::string::__construct_from_cstr((int)&v60, "ChatLib", (int)&v56);
  chatv2::Utils::Log(3, 0, &v60, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Core/ChatLibEngine.cpp", 35, v58);
  v39 = (void *)(v60 - 12);
  if ( (uint32_t *)(v60 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60 - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v39);
  }
  v40 = (void *)(v58[0] - 12);
  if ( (uint32_t *)(v58[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v40);
  }
  result = v57[0];
  v42 = (void *)(v57[0] - 12);
  if ( (uint32_t *)(v57[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return std::string::_Rep::_M_destroy(v42);
  }
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x123ec80 .. 0x123f30a (1674 bytes)
// Symbol:               _ZN6chatv28Requests19ArionRequestFactory5StartEv
// Demangled:            chatv2::Requests::ArionRequestFactory::Start(void)
// ============================================================================
/*
void chatv2::Requests::ArionRequestFactory::Start(chatv2::Requests::ArionRequestFactory *this)
{
  chatv2::Requests::ArionRequestFactory *v1;
  void *v2;
  void *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
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
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  uint32_t *v37;
  int v38;
  uint32_t *v39;
  int v40;
  uint32_t *v41;
  int v42;
  uint32_t v43[4];
  uint32_t *v44;
  uint32_t v45[3];
  uint32_t v46[5];
  char v47[20];
  char v48[20];
  char v49[20];
  char v50[20];
  char v51[20];
  uint32_t v52[11];

  v52[7] = &this;
  v1 = this;
  std::string::__construct_from_cstr((int)&v34, " ArionRequestFactory start\n", (int)&v33);
  std::string::__construct_from_cstr((int)&v35, "ChatLib", (int)&v32);
  chatv2::Utils::Log(
    3,
    0,
    &v35,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
    41,
    &v34);
  v2 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v2);
  }
  v3 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    std::string::_Rep::_M_destroy(v3);
  }
  chatv2::Requests::ArionRequestFactory::SetHandlers(v1);
  chatv2::Requests::ArionRequestFactory::StartSubscribeClient(v1);
  boost::bind<unsigned int,boost::asio::io_service,boost::asio::io_service*>(v45);
  v30 = v45[0];
  v31 = v45[1];
  v29 = v45[2];
  v4 = operator new(0x80u);
  *(uint32_t *)(v4 + 4) = 0;
  *(uint32_t *)(v4 + 8) = 0;
  *(uint32_t *)v4 = off_20A9450;
  *(uint32_t *)(v4 + 12) = 0;
  *(uint32_t *)(v4 + 16) = 0;
  *(uint32_t *)(v4 + 20) = 0;
  v5 = pthread_mutex_init((pthread_mutex_t *)(v4 + 24), nullptr);
  if ( v5 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v47,
      v5,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v6 = pthread_mutex_init((pthread_mutex_t *)(v4 + 28), nullptr);
  if ( v6 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v49,
      v6,
      "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v7 = pthread_cond_init((pthread_cond_t *)(v4 + 32), nullptr);
  if ( v7 != 0 )
  {
    v28 = v7;
    v24 = pthread_mutex_destroy((pthread_mutex_t *)(v4 + 28));
    v25 = v28;
    if ( v24 != 0 )
    {
      __assert2(
        "../../../../../lib/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
      v25 = v28;
    }
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v48,
      v25,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  v8 = pthread_mutex_init((pthread_mutex_t *)(v4 + 36), nullptr);
  if ( v8 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v50,
      v8,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v9 = pthread_mutex_init((pthread_mutex_t *)(v4 + 40), nullptr);
  if ( v9 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v52,
      v9,
      "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v10 = pthread_cond_init((pthread_cond_t *)(v4 + 44), nullptr);
  if ( v10 != 0 )
  {
    v27 = v10;
    v22 = pthread_mutex_destroy((pthread_mutex_t *)(v4 + 40));
    v23 = v27;
    if ( v22 != 0 )
    {
      __assert2(
        "../../../../../lib/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
      v23 = v27;
    }
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v51,
      v23,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  *(uint32_t *)(v4 + 68) = v4 + 60;
  *(uint32_t *)(v4 + 72) = v4 + 60;
  *(uint32_t *)(v4 + 116) = v30;
  *(uint32_t *)v4 = off_2092320;
  *(uint32_t *)(v4 + 120) = v31;
  *(uint32_t *)(v4 + 124) = v29;
  *(uint8_t *)(v4 + 48) = 0;
  *(uint8_t *)(v4 + 49) = 0;
  *(uint8_t *)(v4 + 50) = 0;
  *(uint32_t *)(v4 + 52) = 0;
  *(uint32_t *)(v4 + 60) = 0;
  *(uint32_t *)(v4 + 64) = 0;
  *(uint32_t *)(v4 + 76) = 0;
  *(uint32_t *)(v4 + 80) = 0;
  *(uint32_t *)(v4 + 84) = 0;
  *(uint32_t *)(v4 + 88) = 0;
  *(uint32_t *)(v4 + 92) = 0;
  *(uint32_t *)(v4 + 96) = 0;
  *(uint32_t *)(v4 + 100) = 0;
  *(uint32_t *)(v4 + 104) = 0;
  *(uint32_t *)(v4 + 108) = 0;
  *(uint8_t *)(v4 + 112) = 1;
  *(uint8_t *)(v4 + 113) = 0;
  v38 = v4;
  v39 = nullptr;
  v37 = nullptr;
  v11 = (uint32_t *)operator new(0x10u);
  v11[1] = 1;
  v11[2] = 1;
  *v11 = off_2092348;
  v11[3] = v4;
  v12 = v39;
  v39 = v11;
  v37 = v12;
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v37);
  v13 = *(uint32_t *)(v4 + 8);
  if ( v13 == 0 || *(uint32_t *)(v13 + 4) == 0 )
  {
    v42 = v4;
    v43[0] = v39;
    v14 = v4;
    if ( v39 != nullptr )
    {
      __sync_add_and_fetch(v39 + 1, 1);
      v14 = v42;
      v13 = *(uint32_t *)(v4 + 8);
    }
    *(uint32_t *)(v4 + 4) = v14;
    v15 = v43[0];
    if ( v43[0] != v13 )
    {
      if ( v43[0] != 0 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v43[0] + 8), 1);
        v13 = *(uint32_t *)(v4 + 8);
      }
      if ( v13 != 0 && __sync_fetch_and_add((volatile int32_t *)(v13 + 8), 0xFFFFFFFF) == 1 )
      {
        v26 = v15;
        (*(void (**)(int))(*(uint32_t *)v13 + 12))(v13);
        v15 = v26;
      }
      *(uint32_t *)(v4 + 8) = v15;
    }
    boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v43);
  }
  if ( (uint8_t)boost::thread::start_thread_noexcept((boost::thread *)&v38) == 0 )
  {
    v21 = sub_18F81E0();
    std::string::__construct_from_cstr((int)&v36, "boost::thread_resource_error", (int)&v33 + 1);
    sub_19042E0(v46, &v36);
    std::string::~string(&v36);
    v46[2] = 11;
    v46[3] = v21;
    v46[4] = &unk_213B814;
    v46[0] = off_2049568;
    std::terminate();
  }
  v16 = v38;
  v17 = nullptr;
  v40 = v38;
  v41 = v39;
  if ( v39 != nullptr )
  {
    __sync_add_and_fetch(v39 + 1, 1);
    v16 = v40;
    v17 = v41;
  }
  v18 = *((uint32_t *)v1 + 19);
  *((uint32_t *)v1 + 19) = v16;
  v40 = v18;
  v19 = *((uint32_t **)v1 + 20);
  *((uint32_t *)v1 + 20) = v17;
  v41 = v19;
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v41);
  v20 = v38;
  v38 = 0;
  v43[3] = v20;
  v44 = v39;
  v39 = nullptr;
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v44);
  boost::thread::detach((boost::thread *)&v38);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v39);
}

*/
