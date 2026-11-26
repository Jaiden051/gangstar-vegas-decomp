// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd96f8):
//   ../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp
// Referenced by 3 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x1325e20 .. 0x1326ef6 (4310 bytes)
// Symbol:               _ZN6glotv315TrackingManager12SpawnWorkersEv
// Demangled:            glotv3::TrackingManager::SpawnWorkers(void)
// ============================================================================
/*
// bad sp value at call has been detected, the output may be wrong!
int glotv3::TrackingManager::SpawnWorkers(glotv3::TrackingManager *this)
{
  int v1;
  int v2;
  uint8_t *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint8_t *v10;
  glotv3::TCPServer::Self *v11;
  glotv3::TCPServer::Self *v12;
  int v13;
  glotv3::TCPServer::Self *v14;
  int v15;
  unsigned int v16;
  unsigned int MaximumRequiredConcurrency;
  unsigned int MinimumRequiredConcurrency;
  int v19;
  int *v20;
  int v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  int v37;
  glotv3::Porting *v38;
  int v39;
  unsigned int v40;
  uint8_t *v41;
  int v42;
  int v43;
  int v44;
  int v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  glotv3::DNSClient::Self *v53;
  glotv3::DNSClient::Self *v54;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  unsigned int v63;
  int v64;
  int v65;
  int v66;
  unsigned int i;
  glotv3::TrackingManager *v68;
  int v69[2];
  char v70[4];
  char v71[4];
  int v72;
  char v73[4];
  uint32_t *v74;
  int v75;
  int v76;
  int v77[3];
  glotv3::TCPServer::Self *v78;
  int v79[3];
  int v80;
  int v81[3];
  int v82;
  int v83[3];
  int64_t v84;
  int v85;
  int v86[3];
  int v87;
  int v88[3];
  glotv3::TCPServer::Self *v89;
  int v90[3];
  int v91;
  int v92[3];
  int v93;
  int v94[3];
  int v95;
  int v96[3];
  int v97;
  int v98[3];
  int v99;
  int v100[3];
  int v101;
  int v102[3];
  int v103;
  int v104[3];
  int v105;
  int v106[3];
  int v107;
  int v108[3];
  int *v109;
  uint32_t *v110;
  int v111;
  int v112;
  uint32_t v113[6];
  uint32_t v114[4];
  int v115;
  uint32_t (*v116)(glotv3::SingletonMutexedProcessor *__hidden);
  int v117;
  int v118;
  int v119;
  int (**v120)(std::exception *);
  uint32_t (*v121)(glotv3::SingletonMutexedProcessor *__hidden);
  uint32_t v122[2];
  int v123;
  uint8_t v124[12];
  int (**v125)(std::exception *);
  int (**v126)(std::exception *);
  int (**v127)(std::exception *);
  int (**v128)(std::exception *);
  int (**v129)(std::exception *);
  int (**v130)(std::exception *);
  int (**v131)(std::exception *);
  int (**v132)(std::exception *);
  glotv3::Porting *v133;
  boost::thread *v134;
  int v135;

  v133 = (glotv3::Porting *)&this;
  v68 = this;
  v121 = nullptr;
  v1 = operator new(0x2Cu);
  *(uint32_t *)(v1 + 4) = 1;
  *(uint32_t *)(v1 + 8) = 1;
  *(uint32_t *)v1 = off_2093588;
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 16) = 0;
  v122[0] = v1;
  v2 = (*(int (**)(int))(*(uint32_t *)v1 + 20))(v1);
  v3 = (uint8_t *)v2;
  v4 = v2 + 4;
  if ( v2 != -4 )
    glotv3::DNSClient::DNSClient((glotv3::DNSClient::Self *)(v2 + 4), v68);
  *v3 = 1;
  v76 = v4;
  v77[0] = v122[0];
  if ( v122[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v122[0] + 4), 1);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v122);
  v5 = v76;
  v6 = 0;
  v87 = v76;
  v88[0] = v77[0];
  if ( v77[0] != 0 )
  {
    __sync_add_and_fetch((volatile int32_t *)(v77[0] + 4), 1);
    v5 = v87;
    v6 = v88[0];
  }
  v7 = *((uint32_t *)v68 + 35);
  *((uint32_t *)v68 + 35) = v5;
  v87 = v7;
  v8 = *((uint32_t *)v68 + 36);
  *((uint32_t *)v68 + 36) = v6;
  v88[0] = v8;
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v88);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v77);
  if ( glotv3::TrackingManager::s_IsSpyTcpLoggingActive != 0 )
  {
    v134 = (boost::thread *)(&stru_1F04 + 6);
    glotv3::Utils::ToString<unsigned int>(v70);
    std::string::__construct_copy(v71, &glotv3::errors::TCP_FOR_LIBSPY_WAS_OPENED);
    std::string::append_str(v71, v70);
    glotv3::Glotv3Logger::WriteLog(v71, 1);
    std::string::~string(v71);
    std::string::~string(v70);
    v121 = nullptr;
    v9 = operator new(0x50u);
    *(uint32_t *)(v9 + 4) = 1;
    *(uint32_t *)(v9 + 8) = 1;
    *(uint32_t *)v9 = off_20935A8;
    *(uint32_t *)(v9 + 12) = 0;
    *(uint8_t *)(v9 + 16) = 0;
    v122[0] = v9;
    v10 = (uint8_t *)(*(int (**)(int))(*(uint32_t *)v9 + 20))(v9);
    v11 = (glotv3::TCPServer::Self *)(v10 + 4);
    if ( v10 != (uint8_t *)-4 )
    {
      glotv3::TCPServer::TCPServer(v11, v68);
      v11 = (glotv3::TCPServer::Self *)(v10 + 4);
    }
    *v10 = 1;
    v78 = v11;
    v79[0] = v122[0];
    if ( v122[0] != 0 )
      __sync_add_and_fetch((volatile int32_t *)(v122[0] + 4), 1);
    boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v122);
    v12 = v78;
    v13 = 0;
    v89 = v78;
    v90[0] = v79[0];
    if ( v79[0] != 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v79[0] + 4), 1);
      v12 = v89;
      v13 = v90[0];
    }
    v14 = *((glotv3::TCPServer::Self **)v68 + 37);
    *((uint32_t *)v68 + 37) = v12;
    v89 = v14;
    v15 = *((uint32_t *)v68 + 38);
    *((uint32_t *)v68 + 38) = v13;
    v90[0] = v15;
    boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v90);
    boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v79);
    if ( *((uint32_t *)v68 + 37) == 0 )
    {
      glotv3::TrackingManager::s_IsSpyTcpLoggingActive = 0;
      std::string::__construct_copy(&v72, &glotv3::errors::OUT_OF_MEMORY);
      std::string::append((int)&v72, "void glotv3::TrackingManager::SpawnWorkers()", 0x2Cu);
      glotv3::Glotv3Logger::WriteLog(&v72, 3);
      std::string::~string(&v72);
    }
  }
  v16 = boost::thread::hardware_concurrency(v133);
  MaximumRequiredConcurrency = glotv3::Porting::GetMaximumRequiredConcurrency(v133);
  MinimumRequiredConcurrency = glotv3::Porting::GetMinimumRequiredConcurrency(v133);
  if ( MaximumRequiredConcurrency <= v16 )
    v16 = MaximumRequiredConcurrency;
  if ( v16 >= MinimumRequiredConcurrency )
    MinimumRequiredConcurrency = v16;
  v63 = MinimumRequiredConcurrency;
  if ( glotv3::Porting::GetPlatform(v133) == 2 )
    v63 -= (glotv3::TrackingManager::s_IsSpyTcpLoggingActive == 0) - 1;
  if ( v63 != 0 )
  {
    for ( i = 0; i != v63; ++i )
    {
      v134 = (boost::thread *)boost::asio::io_service::run;
      v135 = 0;
      boost::bind<unsigned int,boost::asio::io_service,boost::reference_wrapper<boost::asio::io_service>>(v113);
      v19 = operator new(8u);
      v64 = v113[0];
      v65 = v113[1];
      v66 = v113[2];
      v20 = (int *)v19;
      v21 = operator new(0x80u);
      *(uint32_t *)(v21 + 4) = 0;
      *(uint32_t *)(v21 + 8) = 0;
      *(uint32_t *)(v21 + 12) = 0;
      *(uint32_t *)v21 = off_20A9450;
      *(uint32_t *)(v21 + 16) = 0;
      *(uint32_t *)(v21 + 20) = 0;
      v22 = pthread_mutex_init((pthread_mutex_t *)(v21 + 24), nullptr);
      if ( v22 != 0 )
      {
        sub_1235D60(&v125, v22, "boost:: mutex constructor failed in pthread_mutex_init");
        v125 = off_2049568;
        std::terminate();
      }
      v23 = pthread_mutex_init((pthread_mutex_t *)(v21 + 28), nullptr);
      if ( v23 != 0 )
      {
        sub_1235D60(
          &v127,
          v23,
          "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
        v127 = off_2049568;
        std::terminate();
      }
      v24 = pthread_cond_init((pthread_cond_t *)(v21 + 32), nullptr);
      if ( v24 != 0 )
      {
        v62 = v24;
        v58 = pthread_mutex_destroy((pthread_mutex_t *)(v21 + 28));
        v59 = v62;
        if ( v58 != 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
            69,
            "boost::condition_variable::condition_variable()",
            "!pthread_mutex_destroy(&internal_mutex)");
          v59 = v62;
        }
        sub_1235D60(
          &v126,
          v59,
          "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
        v126 = off_2049568;
        std::terminate();
      }
      v25 = pthread_mutex_init((pthread_mutex_t *)(v21 + 36), nullptr);
      if ( v25 != 0 )
      {
        sub_1235D60(&v128, v25, "boost:: mutex constructor failed in pthread_mutex_init");
        v128 = off_2049568;
        std::terminate();
      }
      v26 = pthread_mutex_init((pthread_mutex_t *)(v21 + 40), nullptr);
      if ( v26 != 0 )
      {
        sub_1235D60(
          &v130,
          v26,
          "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
        v130 = off_2049568;
        std::terminate();
      }
      v27 = pthread_cond_init((pthread_cond_t *)(v21 + 44), nullptr);
      if ( v27 != 0 )
      {
        v61 = v27;
        v56 = pthread_mutex_destroy((pthread_mutex_t *)(v21 + 40));
        v57 = v61;
        if ( v56 != 0 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
            69,
            "boost::condition_variable::condition_variable()",
            "!pthread_mutex_destroy(&internal_mutex)");
          v57 = v61;
        }
        sub_1235D60(
          &v129,
          v57,
          "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
        v129 = off_2049568;
        std::terminate();
      }
      *(uint32_t *)(v21 + 116) = v64;
      *(uint32_t *)(v21 + 68) = v21 + 60;
      *(uint32_t *)(v21 + 72) = v21 + 60;
      *(uint32_t *)(v21 + 124) = v66;
      *(uint32_t *)v21 = off_20935C8;
      *(uint32_t *)(v21 + 120) = v65;
      *(uint8_t *)(v21 + 48) = 0;
      *(uint8_t *)(v21 + 49) = 0;
      *(uint8_t *)(v21 + 50) = 0;
      *(uint32_t *)(v21 + 52) = 0;
      *(uint32_t *)(v21 + 60) = 0;
      *(uint32_t *)(v21 + 64) = 0;
      *(uint32_t *)(v21 + 76) = 0;
      *(uint32_t *)(v21 + 80) = 0;
      *(uint32_t *)(v21 + 84) = 0;
      *(uint32_t *)(v21 + 88) = 0;
      *(uint32_t *)(v21 + 92) = 0;
      *(uint32_t *)(v21 + 96) = 0;
      *(uint32_t *)(v21 + 100) = 0;
      *(uint32_t *)(v21 + 104) = 0;
      *(uint32_t *)(v21 + 108) = 0;
      *(uint8_t *)(v21 + 112) = 1;
      *(uint8_t *)(v21 + 113) = 0;
      *v20 = v21;
      v20[1] = 0;
      v75 = 0;
      v28 = (uint32_t *)operator new(0x10u);
      v28[1] = 1;
      v28[2] = 1;
      *v28 = off_2093648;
      v28[3] = v21;
      v29 = v20[1];
      v20[1] = (int)v28;
      v75 = v29;
      boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v75);
      v30 = *(uint32_t *)(v21 + 8);
      if ( v30 == 0 || *(uint32_t *)(v30 + 4) == 0 )
      {
        v31 = v20[1];
        v111 = v21;
        v112 = v31;
        v32 = v21;
        if ( v31 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v31 + 4), 1);
          v32 = v111;
          v30 = *(uint32_t *)(v21 + 8);
        }
        *(uint32_t *)(v21 + 4) = v32;
        v33 = v112;
        if ( v30 != v112 )
        {
          if ( v112 != 0 )
          {
            __sync_add_and_fetch((volatile int32_t *)(v112 + 8), 1);
            v30 = *(uint32_t *)(v21 + 8);
          }
          if ( v30 != 0 && __sync_fetch_and_add((volatile int32_t *)(v30 + 8), 0xFFFFFFFF) == 1 )
          {
            v60 = v33;
            (*(void (**)(int))(*(uint32_t *)v30 + 12))(v30);
            v33 = v60;
          }
          *(uint32_t *)(v21 + 8) = v33;
        }
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v112);
      }
      if ( (uint8_t)boost::thread::start_thread_noexcept((boost::thread *)v20) == 0 )
      {
        sub_1235D60(&v120, 11, "boost::thread_resource_error");
        v120 = off_2049568;
        std::terminate();
      }
      v109 = v20;
      v110 = nullptr;
      v34 = (uint32_t *)operator new(0x10u);
      v34[1] = 1;
      v34[2] = 1;
      *v34 = off_20935E8;
      v34[3] = v20;
      v35 = v110;
      v110 = v34;
      v74 = v35;
      boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v74);
      std::deque<boost::shared_ptr<boost::thread>>::push_back((char *)v68 + 92, &v109);
      boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v110);
      v36 = *((uint32_t *)v68 + 29);
      v37 = *((uint32_t *)v68 + 32);
      if ( v36 == *((uint32_t *)v68 + 30) )
      {
        v36 = *(uint32_t *)(v37 - 4) + 512;
        v38 = *(glotv3::Porting **)(*(uint32_t *)(v37 - 4) + 504);
        if ( v38 != nullptr )
          goto LABEL_45;
      }
      else
      {
        v38 = *(glotv3::Porting **)(v36 - 8);
        if ( v38 != nullptr )
          goto LABEL_45;
      }
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        646,
        "typename boost::detail::sp_dereference<T>::type boost::shared_ptr<T>::operator*() const [with T = boost::thread,"
        " typename boost::detail::sp_dereference<T>::type = boost::thread&]",
        "px != 0");
      v38 = *(glotv3::Porting **)(v36 - 8);
LABEL_45:
      glotv3::Porting::SetThreadPriority(v38, v134);
      do
        v39 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
      while ( v39 == 4 );
      if ( v39 != 0 )
      {
        sub_1235D60(&v131, v39, "boost: mutex lock failed in pthread_mutex_lock");
        v131 = off_20495E0;
        std::terminate();
      }
      v40 = i;
      v41 = v124;
      v69[0] = (int)&unk_213B814;
      while ( 1 )
      {
        *(v41 - 1) = v40 % 0xA + 48;
        v40 /= 0xAu;
        if ( v40 == 0 )
          break;
        --v41;
      }
      sub_193A9B0((int)v69, 0, dword_213B808[0], v41 - 1, v124 - (v41 - 1));
      do
        v42 = pthread_mutex_unlock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
      while ( v42 == 4 );
      if ( v42 != 0 )
      {
        sub_1235D60(&v132, v42, "boost: mutex unlock failed in pthread_mutex_unlock");
        v132 = off_20495E0;
        std::terminate();
      }
      std::string::__construct_copy(v73, &glotv3::errors::STARTED_ASIO_WORKER);
      std::string::append_str(v73, v69);
      glotv3::Glotv3Logger::WriteLog(v73, 1);
      std::string::~string(v73);
      std::string::~string(v69);
    }
  }
  v43 = *((uint32_t *)v68 + 34);
  v44 = *((uint32_t *)v68 + 33);
  v80 = v44;
  v81[0] = v43;
  if ( v43 == 0 )
  {
    v93 = v44;
    v94[0] = 0;
    goto LABEL_90;
  }
  __sync_add_and_fetch((volatile int32_t *)(v43 + 4), 1);
  v44 = v80;
  v93 = v80;
  v94[0] = v81[0];
  if ( v81[0] == 0 )
  {
LABEL_90:
    v91 = v44;
    v92[0] = 0;
    goto LABEL_91;
  }
  __sync_add_and_fetch((volatile int32_t *)(v81[0] + 4), 1);
  v44 = v93;
  v91 = v93;
  v92[0] = v94[0];
  if ( v94[0] == 0 )
  {
LABEL_91:
    v95 = v44;
    v96[0] = 0;
    goto LABEL_60;
  }
  __sync_add_and_fetch((volatile int32_t *)(v94[0] + 4), 1);
  v95 = v91;
  v96[0] = v92[0];
  if ( v92[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v92[0] + 4), 1);
LABEL_60:
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v92);
  v113[4] = 0;
  v113[3] = glotv3::SingletonMutexedProcessor::AsyncWriter;
  v113[5] = v95;
  v114[0] = v96[0];
  if ( v96[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v96[0] + 4), 1);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v96);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v94);
  sub_1321DD0();
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v114);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v81);
  v45 = *((uint32_t *)v68 + 34);
  v46 = *((uint32_t *)v68 + 33);
  v82 = v46;
  v83[0] = v45;
  if ( v45 == 0 )
  {
    v99 = v46;
    v100[0] = 0;
    goto LABEL_93;
  }
  __sync_add_and_fetch((volatile int32_t *)(v45 + 4), 1);
  v46 = v82;
  v99 = v82;
  v100[0] = v83[0];
  if ( v83[0] == 0 )
  {
LABEL_93:
    v97 = v46;
    v98[0] = 0;
    goto LABEL_94;
  }
  __sync_add_and_fetch((volatile int32_t *)(v83[0] + 4), 1);
  v46 = v99;
  v97 = v99;
  v98[0] = v100[0];
  if ( v100[0] == 0 )
  {
LABEL_94:
    v101 = v46;
    v102[0] = 0;
    goto LABEL_67;
  }
  __sync_add_and_fetch((volatile int32_t *)(v100[0] + 4), 1);
  v101 = v97;
  v102[0] = v98[0];
  if ( v98[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v98[0] + 4), 1);
LABEL_67:
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v98);
  v114[2] = 0;
  v114[1] = glotv3::SingletonMutexedProcessor::AsyncNetwork;
  v114[3] = v101;
  v115 = v102[0];
  if ( v102[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v102[0] + 4), 1);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v102);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v100);
  sub_1321DD0();
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v115);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v83);
  v84 = 1000000;
  v47 = *((uint32_t *)v68 + 33);
  if ( v47 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor*]",
      "px != 0");
    v47 = *((uint32_t *)v68 + 33);
  }
  boost::asio::basic_deadline_timer<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>,boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::expires_from_now(
    v47 + 13192,
    &v84);
  v48 = *((uint32_t *)v68 + 34);
  v49 = *((uint32_t *)v68 + 33);
  v85 = v49;
  v86[0] = v48;
  if ( v48 == 0 )
  {
    v105 = v49;
    v106[0] = 0;
    goto LABEL_96;
  }
  __sync_add_and_fetch((volatile int32_t *)(v48 + 4), 1);
  v49 = v85;
  v105 = v85;
  v106[0] = v86[0];
  if ( v86[0] == 0 )
  {
LABEL_96:
    v103 = v49;
    v104[0] = 0;
    goto LABEL_97;
  }
  __sync_add_and_fetch((volatile int32_t *)(v86[0] + 4), 1);
  v49 = v105;
  v103 = v105;
  v104[0] = v106[0];
  if ( v106[0] == 0 )
  {
LABEL_97:
    v107 = v49;
    v108[0] = 0;
    goto LABEL_76;
  }
  __sync_add_and_fetch((volatile int32_t *)(v106[0] + 4), 1);
  v107 = v103;
  v108[0] = v104[0];
  if ( v104[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
LABEL_76:
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v104);
  v117 = 0;
  v116 = glotv3::SingletonMutexedProcessor::AsyncTimer;
  v118 = v107;
  v119 = v108[0];
  if ( v108[0] != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v108[0] + 4), 1);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v108);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v106);
  v50 = *((uint32_t *)v68 + 33);
  if ( v50 == 0 )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Singl"
      "etonMutexedProcessor, typename boost::detail::sp_member_access<T>::type = glotv3::SingletonMutexedProcessor*]",
      "px != 0");
    v50 = *((uint32_t *)v68 + 33);
  }
  v51 = v50 + 13196;
  v52 = *(uint32_t *)(v50 + 13192);
  v122[1] = v118;
  v121 = v116;
  v122[0] = v117;
  v123 = v119;
  if ( v119 != 0 )
    __sync_add_and_fetch((volatile int32_t *)(v119 + 4), 1);
  boost::asio::detail::deadline_timer_service<boost::asio::time_traits<boost::posix_time::ptime>>::async_wait<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<boost::shared_ptr<glotv3::SingletonMutexedProcessor>>>>>(
    v52 + 20,
    v51,
    &v121);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v123);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v119);
  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v86);
  v53 = *((glotv3::DNSClient::Self **)v68 + 35);
  if ( v53 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::DNSCl"
      "ient, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
      "px != 0");
    v53 = *((glotv3::DNSClient::Self **)v68 + 35);
  }
  glotv3::DNSClient::ResetConnectivity(v53);
  v54 = *((glotv3::DNSClient::Self **)v68 + 35);
  if ( v54 == nullptr )
  {
    __assert2(
      "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::DNSCl"
      "ient, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
      "px != 0");
    v54 = *((glotv3::DNSClient::Self **)v68 + 35);
  }
  return glotv3::DNSClient::TryToResolveDNS(v54);
}

*/

// ============================================================================
// Referencing Function: 0x13517e0 .. 0x1352280 (2720 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessorC1ERSsS1_RNS_15TrackingManagerE
// Demangled:            glotv3::SingletonMutexedProcessor::SingletonMutexedProcessor(std::string &,std::string &,glotv3::TrackingManager &)
// ============================================================================
/*
// Alternative name is '_ZN6glotv325SingletonMutexedProcessorC2ERSsS1_RNS_15TrackingManagerE'
// write access to const memory has been detected, the output may be wrong!
int glotv3::SingletonMutexedProcessor::SingletonMutexedProcessor(uint32_t *a1, int a2, int a3, int a4)
{
  int v5;
  int v6;
  uint32_t *v7;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int *v17;
  int v18;
  int v19;
  int v20;
  int v21;
  int *v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int *v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int result;
  int v39;
  int v40;
  uint32_t *v41;
  char v42[4];
  uint32_t v43[2];
  char v44[20];
  char v45[20];
  char v46[20];
  char v47[20];
  char v48[20];
  char v49[20];
  char v50[20];
  char v51[20];
  char v52[20];
  char v53[20];
  char v54[20];
  char v55[20];
  char v56[48];

  *a1 = a2;
  a1[1] = a3;
  std::string::__construct_copy(v42, &glotv3::system::QADEBUG_ANDROID_PATH_FIX);
  std::string::append_str(v42, &glotv3::system::BACKSLASH);
  std::string::__construct_copy(a1 + 2, v42);
  std::string::append_str(a1 + 2, &glotv3::system::DEBUGLOG_FILE);
  std::string::~string(v42);
  std::string::__construct_copy(a1 + 3, *a1);
  std::string::append_str(a1 + 3, &glotv3::system::PRIORITY_FILE);
  std::string::__construct_copy(a1 + 4, *a1);
  std::string::append_str(a1 + 4, &glotv3::system::STREAMED_FILE);
  std::string::__construct_copy(a1 + 5, *a1);
  std::string::append_str(a1 + 5, &glotv3::system::BATCHING_FILE);
  std::string::__construct_copy(a1 + 6, a1 + 3);
  std::string::append_str(a1 + 6, &glotv3::system::ASYNC_SUFFIX);
  std::string::__construct_copy(a1 + 7, a1 + 4);
  std::string::append_str(a1 + 7, &glotv3::system::ASYNC_SUFFIX);
  std::string::__construct_copy(a1 + 8, a1 + 5);
  std::string::append_str(a1 + 8, &glotv3::system::ASYNC_SUFFIX);
  glotv3::Writer::Writer((pthread_mutex_t *)(a1 + 9), (int)(a1 + 3));
  glotv3::Writer::Writer((pthread_mutex_t *)(a1 + 1096), (int)(a1 + 4));
  glotv3::Writer::Writer((pthread_mutex_t *)(a1 + 2183), (int)(a1 + 5));
  a1[3270] = 0;
  a1[3272] = 0;
  a1[3273] = 0;
  a1[3274] = 0;
  a1[3271] = 2048;
  v5 = operator new(1u);
  v6 = a1[3271];
  a1[3273] = v5;
  a1[3274] = v5;
  v7 = malloc(v6 + 12);
  *v7 = v6;
  v7[1] = 0;
  v7[2] = a1[3270];
  v8 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)(a1 + 3270);
  a1[3270] = v7;
  a1[3278] = 0;
  a1[3279] = a1 + 3270;
  a1[3280] = 0;
  a1[3281] = 0;
  a1[3282] = 0;
  a1[3283] = 0;
  a1[3284] = 2048;
  if ( a1 == (uint32_t *)-13080 )
  {
    v8 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)operator new(0x14u);
    *(uint32_t *)v8 = 0;
    *((uint32_t *)v8 + 1) = 2048;
    *((uint32_t *)v8 + 2) = 0;
    *((uint32_t *)v8 + 3) = 0;
    *((uint32_t *)v8 + 4) = 0;
    v39 = operator new(1u);
    v40 = *((uint32_t *)v8 + 1);
    *((uint32_t *)v8 + 3) = v39;
    *((uint32_t *)v8 + 4) = v39;
    v41 = malloc(v40 + 12);
    *v41 = v40;
    v41[1] = 0;
    v41[2] = *(uint32_t *)v8;
    *(uint32_t *)v8 = v41;
    dword_24 = (int)v8;
    word_28 = v8;
  }
  v9 = rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>::Malloc(v8, a1[3284]);
  a1[3281] = v9;
  a1[3282] = v9;
  a1[3283] = a1[3284] + v9;
  a1[3297] = a4;
  a1[3285] = 0;
  a1[3286] = 0;
  a1[3288] = 0;
  a1[3289] = 0;
  a1[3292] = 0;
  a1[3296] = 0;
  a1[3290] = a1 + 3288;
  a1[3291] = a1 + 3288;
  v10 = *(uint32_t *)(a4 + 80);
  v43[0] = 0;
  v43[1] = &boost::asio::detail::service_base<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>::id;
  a1[3298] = boost::asio::detail::service_registry::do_use_service(
               v10,
               v43,
               boost::asio::detail::service_registry::create<boost::asio::deadline_timer_service<boost::posix_time::ptime,boost::asio::time_traits<boost::posix_time::ptime>>>);
  a1[3299] = -2;
  a1[3300] = 0x7FFFFFFF;
  a1[3302] = 0;
  a1[3303] = 0;
  a1[3305] = 0;
  a1[3306] = 0;
  *((uint8_t *)a1 + 13204) = 0;
  a1[3307] = 0;
  v11 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3309), nullptr);
  if ( v11 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v44,
      v11,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v12 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3310), nullptr);
  if ( v12 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v45,
      v12,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v13 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3311), nullptr);
  if ( v13 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v47,
      v13,
      "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v14 = pthread_cond_init((pthread_cond_t *)a1 + 276, nullptr);
  if ( v14 != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)(a1 + 3311)) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v46,
      v14,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  a1[3313] = 0;
  a1[3315] = 0;
  a1[3316] = 0;
  a1[3317] = 0;
  a1[3318] = 0;
  a1[3319] = 0;
  a1[3320] = 0;
  a1[3321] = 0;
  a1[3322] = 0;
  a1[3314] = 8;
  v15 = operator new(0x20u);
  v16 = a1[3314];
  a1[3313] = v15;
  v17 = (int *)(v15 + ((2 * v16 - 2) & 0xFFFFFFFC));
  *v17 = operator new(0x200u);
  a1[3318] = v17;
  v18 = *v17;
  a1[3322] = v17;
  a1[3316] = v18;
  a1[3317] = v18 + 512;
  v19 = *v17;
  a1[3315] = v18;
  a1[3320] = v19;
  a1[3319] = v19;
  a1[3323] = 0;
  a1[3325] = 0;
  a1[3326] = 0;
  a1[3327] = 0;
  a1[3328] = 0;
  a1[3321] = v19 + 512;
  a1[3329] = 0;
  a1[3330] = 0;
  a1[3331] = 0;
  a1[3332] = 0;
  a1[3324] = 8;
  v20 = operator new(0x20u);
  v21 = a1[3324];
  a1[3323] = v20;
  v22 = (int *)(v20 + ((2 * v21 - 2) & 0xFFFFFFFC));
  *v22 = operator new(0x200u);
  a1[3328] = v22;
  v23 = *v22;
  a1[3332] = v22;
  a1[3326] = v23;
  a1[3327] = v23 + 512;
  v24 = *v22;
  a1[3325] = v23;
  a1[3330] = v24;
  a1[3329] = v24;
  *((uint8_t *)a1 + 13332) = 0;
  *((uint8_t *)a1 + 13333) = 0;
  *((uint8_t *)a1 + 13334) = 0;
  a1[3331] = v24 + 512;
  v25 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3334), nullptr);
  if ( v25 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v48,
      v25,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v26 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3335), nullptr);
  if ( v26 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v49,
      v26,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v27 = pthread_mutex_init((pthread_mutex_t *)a1 + 556, nullptr);
  if ( v27 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v51,
      v27,
      "boost::condition_variable::condition_variable() constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v28 = pthread_cond_init((pthread_cond_t *)(a1 + 3337), nullptr);
  if ( v28 != 0 )
  {
    if ( pthread_mutex_destroy((pthread_mutex_t *)a1 + 556) != 0 )
      __assert2(
        "../../../../../lib/glitch/include/boost/thread/pthread/condition_variable_fwd.hpp",
        69,
        "boost::condition_variable::condition_variable()",
        "!pthread_mutex_destroy(&internal_mutex)");
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v50,
      v28,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  a1[3338] = 0;
  a1[3340] = 0;
  a1[3341] = 0;
  a1[3342] = 0;
  a1[3343] = 0;
  a1[3344] = 0;
  a1[3345] = 0;
  a1[3346] = 0;
  a1[3347] = 0;
  a1[3339] = 8;
  v29 = operator new(0x20u);
  v30 = a1[3339];
  a1[3338] = v29;
  v31 = (int *)(v29 + ((2 * v30 - 2) & 0xFFFFFFFC));
  *v31 = operator new(0x200u);
  a1[3343] = v31;
  v32 = *v31;
  a1[3347] = v31;
  a1[3341] = v32;
  a1[3342] = v32 + 512;
  v33 = *v31;
  a1[3340] = v32;
  a1[3345] = v33;
  a1[3344] = v33;
  *((uint8_t *)a1 + 13392) = 0;
  *((uint8_t *)a1 + 13393) = 0;
  a1[3346] = v33 + 512;
  v34 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3349), nullptr);
  if ( v34 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v52,
      v34,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v35 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3350), nullptr);
  if ( v35 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v53,
      v35,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v36 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3351), nullptr);
  if ( v36 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v54,
      v36,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v37 = pthread_mutex_init((pthread_mutex_t *)(a1 + 3352), nullptr);
  if ( v37 != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v55,
      v37,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  result = pthread_mutex_init((pthread_mutex_t *)(a1 + 3353), nullptr);
  if ( result != 0 )
  {
    boost::thread_resource_error::thread_resource_error(
      (boost::thread_resource_error *)v56,
      result,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  *((uint8_t *)a1 + 13416) = 1;
  *((uint8_t *)a1 + 13417) = 1;
  *((uint8_t *)a1 + 13418) = 0;
  *((uint8_t *)a1 + 13419) = 0;
  *((uint8_t *)a1 + 13420) = 0;
  *((uint8_t *)a1 + 13421) = 0;
  *((uint8_t *)a1 + 13422) = 0;
  return result;
}

*/

// ============================================================================
// Referencing Function: 0x1352720 .. 0x1352f76 (2134 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessorD1Ev
// Demangled:            glotv3::SingletonMutexedProcessor::~SingletonMutexedProcessor()
// ============================================================================
