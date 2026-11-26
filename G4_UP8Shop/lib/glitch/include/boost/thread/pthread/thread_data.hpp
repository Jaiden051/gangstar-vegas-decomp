// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bdc068):
//   ../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp
// Referenced by 2 function(s) in libGangstar4.so

#pragma once

// ============================================================================
// Referencing Function: 0x135c030 .. 0x135d6d9 (5801 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor11AsyncWriterEv
// Demangled:            glotv3::SingletonMutexedProcessor::AsyncWriter(void)
// ============================================================================
/*
int glotv3::SingletonMutexedProcessor::AsyncWriter(glotv3::SingletonMutexedProcessor *this)
{
  glotv3::SingletonMutexedProcessor *v1;
  pthread_mutex_t *v2;
  int v3;
  pthread_mutex_t *current_thread_data;
  pthread_mutex_t *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  pthread_mutex_t *v10;
  int v11;
  int v12;
  int v13;
  glotv3::Event::Self *v14;
  glotv3::Event::Self *v15;
  int v16;
  int v17;
  glotv3::DNSClient::Self *v18;
  int v19;
  char v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int v25;
  int v26;
  int v28;
  glotv3::Event::Self *v29;
  glotv3::Event::Self *v30;
  char v31; // di
  glotv3::Event::Self *v32;
  int EventType;
  int v34;
  glotv3::Event::Self *v35;
  int *v36;
  int v37;
  pthread_mutex_t *v38;
  pthread_mutex_t *address;
  void **v40;
  uint8_t *v41;
  uint32_t *owner;
  pthread_mutex_t *v43;
  unsigned int nusers;
  pthread_cond_t *v45;
  pthread_mutex_t **lock;
  pthread_mutex_t *v47;
  uint32_t *kind;
  int *v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int *v62;
  int v63;
  unsigned int count;
  int v65;
  int v66;
  boost::detail *v67;
  boost::this_thread *v68;
  int v69;
  uint32_t *v70;
  pthread_mutex_t *v71;
  pthread_mutex_t *v72;
  pthread_mutex_t *v73;
  pthread_mutex_t *v74;
  pthread_mutex_t *mutex;
  char v76;
  char v77;
  char HasConnectivity;
  char v79;
  pthread_mutex_t *v80;
  char v81;
  char v82;
  pthread_mutex_t *v83;
  glotv3::SingletonMutexedProcessor *v84;
  char is_continuation;
  glotv3::SingletonMutexedProcessor *v86;
  glotv3::SingletonMutexedProcessor *v87;
  glotv3::SingletonMutexedProcessor *v88;
  glotv3::SingletonMutexedProcessor *v89;
  int v90[4];
  int v91[4];
  int v92[4];
  int v93[4];
  int v94[4];
  char v95[4];
  char v96[4];
  char v97[4];
  char v98[4];
  char v99[4];
  char v100[4];
  char v101[4];
  char v102[4];
  int v103;
  uint32_t v104[3];
  int v105;
  int v106[3];
  int v107;
  int v108[3];
  int v109;
  int v110[3];
  int v111;
  int v112[3];
  struct epoll_event event;
  uint32_t (*v114)(glotv3::SingletonMutexedProcessor *__hidden);
  int v115;
  glotv3::SingletonMutexedProcessor *v116;
  char v117[20];
  void (**v118)(boost::condition_error *__hidden);
  char v119[20];
  char v120[20];
  char v121[20];
  char v122[20];
  char v123[20];
  char v124[20];
  char v125[20];
  char v126[20];
  char v127[20];
  char v128[20];
  uint32_t v129[11];

  v129[7] = &this;
  v1 = this;
  v74 = (pthread_mutex_t *)((char *)this + 13236);
  if ( this == (glotv3::SingletonMutexedProcessor *)-13236 )
    sub_134E404();
  v2 = (pthread_mutex_t *)((char *)this + 13236);
  do
    v3 = pthread_mutex_lock(v2);
  while ( v3 == 4 );
  if ( v3 != 0 )
  {
    boost::lock_error::lock_error((boost::lock_error *)v117, v3, "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  if ( *((uint8_t *)v1 + 13334) == 0 )
  {
    mutex = (pthread_mutex_t *)((char *)v1 + 13244);
    if ( *((uint8_t *)v1 + 13332) == 0 )
    {
      do
      {
        current_thread_data = (pthread_mutex_t *)boost::detail::get_current_thread_data(v67);
        v83 = current_thread_data;
        if ( current_thread_data != nullptr && current_thread_data[4].__size[16] != 0 )
        {
          v80 = current_thread_data + 1;
          v5 = current_thread_data + 1;
          do
            v6 = pthread_mutex_lock(v5);
          while ( v6 == 4 );
          if ( v6 != 0 )
          {
            boost::lock_error::lock_error(
              (boost::lock_error *)v119,
              v6,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          v83[3].__owner = (int)mutex;
          v83[3].__kind = (int)v1 + 13248;
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              196,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          sub_1321760(v80);
          v81 = 1;
        }
        else
        {
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              200,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          v81 = 0;
        }
        sub_1321760(v74);
        do
          v7 = pthread_cond_wait((pthread_cond_t *)(&((int32_t *)(mutex))[0] + 1), mutex);
        while ( v7 == 4 );
        v8 = v7;
        if ( v81 != 0 )
        {
          if ( pthread_mutex_unlock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              207,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
          do
            v9 = pthread_mutex_lock(v83 + 1);
          while ( v9 == 4 );
          if ( v9 != 0 )
          {
            boost::lock_error::lock_error(
              (boost::lock_error *)v120,
              v9,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          v83[3].__owner = 0;
          v83[3].__kind = 0;
          sub_1321760(&v83[1]);
          v84 = v1;
          v10 = v74;
        }
        else
        {
          if ( pthread_mutex_unlock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              214,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
          v84 = v1;
          v10 = v74;
        }
        do
          v11 = pthread_mutex_lock(v10);
        while ( v11 == 4 );
        v1 = v84;
        if ( v11 != 0 )
        {
          boost::lock_error::lock_error(
            (boost::lock_error *)v121,
            v11,
            "boost: mutex lock failed in pthread_mutex_lock");
          std::terminate();
        }
        boost::this_thread::interruption_point(v68);
        if ( v8 != 0 )
        {
          v66 = sub_18F81E0();
          boost::system::system_error::system_error(
            &v118,
            v8,
            v66,
            "boost::condition_variable::wait failed in pthread_cond_wait");
          v118 = off_2093D18;
          std::terminate();
        }
        if ( *((uint8_t *)v84 + 13332) != 0 )
          break;
LABEL_27:
        v12 = *((uint32_t *)v1 + 3319);
        if ( v12 != *((uint32_t *)v1 + 3315) )
        {
          while ( 1 )
          {
            if ( *((uint32_t *)v1 + 3320) == v12 )
              v12 = *(uint32_t *)(*((uint32_t *)v1 + 3322) - 4) + 512;
            v103 = *(uint32_t *)(v12 - 8);
            v13 = *(uint32_t *)(v12 - 4);
            v104[0] = v13;
            if ( v13 != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1);
            v14 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getEventType(v14) == 6 )
              goto LABEL_67;
            v15 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getEventType(v15) == 0 )
            {
              v16 = *((uint32_t *)v1 + 3319);
              if ( v16 == *((uint32_t *)v1 + 3320) )
              {
                operator delete(*((void **)v1 + 3319));
                v49 = (int *)(*((uint32_t *)v1 + 3322) - 4);
                *((uint32_t *)v1 + 3322) = v49;
                v50 = *v49;
                *((uint32_t *)v1 + 3320) = *v49;
                *((uint32_t *)v1 + 3321) = v50 + 512;
                *((uint32_t *)v1 + 3319) = v50 + 504;
                boost::detail::shared_count::~shared_count((boost::detail::shared_count *)(v50 + 508));
              }
              else
              {
                *((uint32_t *)v1 + 3319) = v16 - 8;
                boost::detail::shared_count::~shared_count((boost::detail::shared_count *)(v16 - 4));
              }
              v77 = 1;
              if ( *((uint8_t *)v1 + 13420) != 0 )
                goto LABEL_37;
              v38 = *(pthread_mutex_t **)(*((uint32_t *)v1 + 3297) + 84);
              v114 = glotv3::SingletonMutexedProcessor::AsyncRecovery;
              v115 = 0;
              v116 = v1;
              is_continuation = boost::asio::asio_handler_is_continuation((boost::asio *)&v114);
              address = (pthread_mutex_t *)_emutls_get_address(&unk_20BABFC);
              if ( ((int32_t *)(address))[0] != 0 )
              {
                v40 = *(void ***)(((int32_t *)(address))[0] + 4);
                if ( v40 != nullptr )
                {
                  v41 = *v40;
                  if ( *v40 != nullptr )
                  {
                    *v40 = nullptr;
                    if ( *v41 > 0x17u )
                    {
                      v41[24] = *v41;
LABEL_90:
                      *(uint32_t *)v41 = 0;
                      *((uint32_t *)v41 + 1) = boost::asio::detail::completion_handler<boost::_bi::bind_t<void,boost::_mfi::mf0<void,glotv3::SingletonMutexedProcessor>,boost::_bi::list1<boost::_bi::value<glotv3::SingletonMutexedProcessor*>>>>::do_complete;
                      *((uint32_t *)v41 + 2) = 0;
                      *((uint32_t *)v41 + 3) = v114;
                      *((uint32_t *)v41 + 4) = v115;
                      *((uint32_t *)v41 + 5) = v116;
                      if ( ((uint8_t *)(v38))[20] != 0 || is_continuation != 0 )
                      {
                        lock = (pthread_mutex_t **)((int32_t *)(address))[0];
                        if ( ((int32_t *)(address))[0] != 0 )
                        {
                          while ( v38 != *lock )
                          {
                            lock = (pthread_mutex_t **)lock[2];
                            if ( lock == nullptr )
                              goto LABEL_92;
                          }
                          v47 = lock[1];
                          if ( v47 != nullptr )
                          {
                            ++((int32_t *)(v47))[3];
                            *(uint32_t *)v41 = 0;
                            kind = (uint32_t *)((int32_t *)(v47))[4];
                            if ( kind != nullptr )
                            {
                              *kind = v41;
                              v77 = 0;
                              ((int32_t *)(v47))[4] = (int)v41;
                            }
                            else
                            {
                              ((int32_t *)(v47))[4] = (int)v41;
                              ((int32_t *)(v47))[2] = (int)v41;
                              v77 = 0;
                            }
                            goto LABEL_37;
                          }
                        }
                      }
LABEL_92:
                      __sync_fetch_and_add(&v38[2].__lock, 1u);
                      v70 = v41;
                      pthread_mutex_lock(v38 + 1);
                      *v70 = 0;
                      owner = (uint32_t *)v38[2].__owner;
                      v43 = v38 + 1;
                      if ( owner != nullptr )
                      {
                        *owner = v70;
                        nusers = v38[2].__nusers;
                        v38[2].__owner = (int)v70;
                        if ( nusers != 0 )
                        {
LABEL_94:
                          v38[2].__nusers = *(uint32_t *)(nusers + 20);
                          v45 = *(pthread_cond_t **)(nusers + 4);
                          *(uint32_t *)(nusers + 20) = 0;
                          ((uint8_t *)(v45))[4] = 1;
                          pthread_mutex_unlock(v43);
                          pthread_cond_signal(v45);
                          v77 = 0;
LABEL_37:
                          __sync_fetch_and_add((volatile int32_t *)(*((uint32_t *)v1 + 3297) + 176), 1u);
                          v17 = *((uint32_t *)v1 + 3297);
                          v18 = *(glotv3::DNSClient::Self **)(v17 + 140);
                          if ( v18 == nullptr )
                          {
                            __assert2(
                              "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
                              653,
                              "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const"
                              " [with T = glotv3::DNSClient::Self, typename boost::detail::sp_member_access<T>::type = glotv3::DNSClient::Self*]",
                              "px != 0");
                            v18 = *(glotv3::DNSClient::Self **)(v17 + 140);
                          }
                          HasConnectivity = glotv3::DNSClient::HasConnectivity(v18);
                          v19 = *((uint32_t *)v1 + 3297);
                          v20 = *(uint8_t *)(v19 + 194);
                          v21 = *(uint8_t *)(v19 + 184);
                          v82 = v20 ^ 1;
                          v79 = *((uint8_t *)v1 + 13421) ^ 1;
                          v76 = v21;
                          if ( HasConnectivity != 0 && v82 != 0 && v21 != 0 && v79 != 0 && v77 != 0 )
                          {
                            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_FIRED, 1);
                            do
                              v60 = pthread_mutex_trylock((pthread_mutex_t *)((char *)v1 + 13336));
                            while ( v60 == 4 );
                            if ( v60 != 0 )
                            {
                              v61 = *((uint32_t *)v1 + 3297);
                              if ( *(uint8_t *)(v61 + 194) != 0 )
                              {
                                v73 = *(pthread_mutex_t **)(v61 + 176);
                                glotv3::Utils::ToString<unsigned int>(v95);
                                std::string::__construct_copy(v96, &glotv3::errors::TIMER_WAS_BLOCKED);
                                std::string::append_str(v96, v95);
                                glotv3::Glotv3Logger::WriteLog(v96, 2);
                                std::string::~string(v96);
                                std::string::~string(v95);
                                if ( v73 == (pthread_mutex_t *)(10 * ((unsigned int)v73 / 0xA)) )
                                  *(uint8_t *)(*((uint32_t *)v1 + 3297) + 194) = 0;
                              }
                              else
                              {
                                glotv3::Glotv3Logger::WriteLog(&glotv3::errors::ACQUIRED_NETWORK_LOCK_FAILED, 2);
                              }
                            }
                            else
                            {
                              glotv3::Glotv3Logger::WriteLog(&glotv3::errors::ACQUIRED_NETWORK_LOCK, 1);
                              if ( *((uint8_t *)v1 + 13417) == 0 )
                              {
                                if ( *((uint8_t *)v1 + 13422) != 0 )
                                  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::SENDING_IS_BLOCKED_BY_ETS_DELAY, 2);
                                else
                                  glotv3::Glotv3Logger::WriteLog(&glotv3::errors::SENDING_IS_BLOCKED, 2);
                              }
                              if ( *((uint8_t *)v1 + 13417) != 0
                                && (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 24) == 0 )
                              {
                                v87 = (glotv3::SingletonMutexedProcessor *)((char *)v1 + 12);
                                if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v1 + 12) != 0 )
                                {
                                  glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor *)((char *)v1 + 36));
                                  glotv3::Fs::RenamePath(v87, (char *)v1 + 24);
                                  glotv3::Writer::Open((char *)v1 + 36, v87);
                                }
                              }
                              if ( *((uint8_t *)v1 + 13417) != 0
                                && (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 28) == 0 )
                              {
                                v89 = (glotv3::SingletonMutexedProcessor *)((char *)v1 + 16);
                                if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v1 + 16) != 0 )
                                {
                                  glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor *)((char *)v1 + 4384));
                                  glotv3::Fs::RenamePath(v89, (char *)v1 + 28);
                                  glotv3::Writer::Open((char *)v1 + 4384, v89);
                                }
                              }
                              if ( *((uint8_t *)v1 + 13417) != 0
                                && (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 32) == 0 )
                              {
                                v88 = (glotv3::SingletonMutexedProcessor *)((char *)v1 + 20);
                                if ( (uint8_t)glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v1 + 20) != 0 )
                                {
                                  glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor *)((char *)v1 + 8732));
                                  glotv3::Fs::RenamePath(v88, (char *)v1 + 32);
                                  glotv3::Writer::Open((char *)v1 + 8732, v88);
                                }
                              }
                              *((uint8_t *)v1 + 13393) = 1;
                              boost::condition_variable::notify_one((pthread_mutex_t *)v1 + 556);
                              sub_1321760((char *)v1 + 13336);
                            }
                          }
                          else
                          {
                            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_NOT_FIRED, 2);
                            do
                              v22 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v22 == 4 );
                            if ( v22 != 0 )
                            {
                              boost::lock_error::lock_error(
                                (boost::lock_error *)v122,
                                v22,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v90[0] = (int)&unk_213B814;
                            LOBYTE(v114) = HasConnectivity + 48;
                            sub_193A9B0((int)v90, 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            std::string::__construct_copy(v97, &glotv3::errors::DETECTED_CONNECTIVITY);
                            std::string::append_str(v97, v90);
                            glotv3::Glotv3Logger::WriteLog(v97, 1);
                            std::string::~string(v97);
                            std::string::~string(v90);
                            do
                              v23 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v23 == 4 );
                            if ( v23 != 0 )
                            {
                              boost::lock_error::lock_error(
                                (boost::lock_error *)v123,
                                v23,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v91[0] = (int)&unk_213B814;
                            LOBYTE(v114) = v82 + 48;
                            sub_193A9B0((int)v91, 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            std::string::__construct_copy(v98, &glotv3::errors::DETECTED_NETWORK_OVERWHELMED);
                            std::string::append_str(v98, v91);
                            glotv3::Glotv3Logger::WriteLog(v98, 1);
                            std::string::~string(v98);
                            std::string::~string(v91);
                            do
                              v24 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v24 == 4 );
                            if ( v24 != 0 )
                            {
                              boost::lock_error::lock_error(
                                (boost::lock_error *)v124,
                                v24,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v92[0] = (int)&unk_213B814;
                            LOBYTE(v114) = v76 + 48;
                            sub_193A9B0((int)v92, 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            std::string::__construct_copy(v99, &glotv3::errors::DETECTED_ETS_RETRIEVED_FROM_GAIA);
                            std::string::append_str(v99, v92);
                            glotv3::Glotv3Logger::WriteLog(v99, 1);
                            std::string::~string(v99);
                            std::string::~string(v92);
                            do
                              v25 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v25 == 4 );
                            if ( v25 != 0 )
                            {
                              boost::lock_error::lock_error(
                                (boost::lock_error *)v125,
                                v25,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v93[0] = (int)&unk_213B814;
                            LOBYTE(v114) = v79 + 48;
                            sub_193A9B0((int)v93, 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            std::string::__construct_copy(v100, &glotv3::errors::DETECTED_NOT_RECOVERING);
                            std::string::append_str(v100, v93);
                            glotv3::Glotv3Logger::WriteLog(v100, 1);
                            std::string::~string(v100);
                            std::string::~string(v93);
                            do
                              v26 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
                            while ( v26 == 4 );
                            if ( v26 != 0 )
                            {
                              boost::lock_error::lock_error(
                                (boost::lock_error *)v126,
                                v26,
                                "boost: mutex lock failed in pthread_mutex_lock");
                              std::terminate();
                            }
                            v94[0] = (int)&unk_213B814;
                            LOBYTE(v114) = v77 + 48;
                            sub_193A9B0((int)v94, 0, dword_213B808[0], &v114, 1u);
                            sub_1321760(&glotv3::Utils::s_ToStringMutex);
                            std::string::__construct_copy(v101, &glotv3::errors::DETECTED_TIMER_FOR_RECOVERY_NOT_FIRED);
                            std::string::append_str(v101, v94);
                            glotv3::Glotv3Logger::WriteLog(v101, 1);
                            std::string::~string(v101);
                            std::string::~string(v94);
                          }
                          goto LABEL_60;
                        }
                      }
                      else
                      {
                        nusers = v38[2].__nusers;
                        v38[2].__owner = (int)v70;
                        v38[2].__count = (unsigned int)v70;
                        if ( nusers != 0 )
                          goto LABEL_94;
                      }
                      if ( v38[1].__size[20] == 0 )
                      {
                        count = v38[1].__count;
                        if ( count != 0 )
                        {
                          v38[1].__size[20] = 1;
                          event.data.u64 = count + 28;
                          v69 = *(uint32_t *)(count + 28);
                          v65 = *(uint32_t *)(count + 36);
                          event.events = 0x80000009;
                          epoll_ctl(v65, 3, v69, &event);
                          v43 = v38 + 1;
                        }
                      }
                      pthread_mutex_unlock(v43);
                      v77 = 0;
                      goto LABEL_37;
                    }
                    v71 = address;
                    operator delete(v41);
                    address = v71;
                  }
                }
              }
              v72 = address;
              v51 = operator new(0x19u);
              *(uint8_t *)(v51 + 24) = 24;
              v41 = (uint8_t *)v51;
              address = v72;
              goto LABEL_90;
            }
            v29 = (glotv3::Event::Self *)sub_134C470();
            if ( (unsigned int)(glotv3::Event::getEventType(v29) - 2) <= 3 )
              break;
            v30 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getEventType(v30) != 1 )
            {
              v31 = 1;
              v32 = (glotv3::Event::Self *)sub_134C470();
              EventType = glotv3::Event::getEventType(v32);
              if ( (uint8_t)glotv3::SingletonMutexedProcessor::IsBatched(v1, EventType) != 0 )
              {
                v31 = 0;
                v56 = sub_134C470();
                if ( (uint8_t)glotv3::Event::hasKeyPair(v56, &glotv3::Event::keyGameVersion) == 0 )
                {
                  glotv3::TrackingManager::GetGameVersionString((glotv3::TrackingManager *)v102);
                  v57 = sub_134C470();
                  glotv3::Event::addKeyPair(v57, &glotv3::Event::keyGameVersion, v102);
                  std::string::~string(v102);
                }
              }
              v34 = sub_134C470();
              if ( (uint8_t)glotv3::Event::hasKeyPair(v34, &glotv3::Event::keyPromotedBatch) != 0 )
              {
                v31 = 1;
                v58 = sub_134C470();
                glotv3::Event::setPriority(v58, 1);
              }
              v35 = (glotv3::Event::Self *)sub_134C470();
              if ( glotv3::Event::getEventType(v35) != 51885
                || (v59 = sub_134C470(),
                    glotv3::Event::getKeyPairAsUInt(v59, &glotv3::EventOfError::k_KeyErrorTrackerId) != 131765) )
              {
                if ( v31 != 0 )
                {
                  v107 = v103;
                  v108[0] = v104[0];
                  if ( v104[0] != 0 )
                    __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
                  glotv3::SingletonMutexedProcessor::SetAutomaticEventParameters(v1, (int)&v107);
                  boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v108);
                }
              }
              v109 = v103;
              v110[0] = v104[0];
              if ( v104[0] != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
              glotv3::SingletonMutexedProcessor::EncryptEncodeParameters(v1, &v109);
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v110);
              v111 = v103;
              v112[0] = v104[0];
              if ( v104[0] != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
              glotv3::SingletonMutexedProcessor::WriteToStream(v1, &v111, 0);
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v112);
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v104);
              goto LABEL_27;
            }
            v52 = *((uint32_t *)v1 + 3319);
            if ( v52 == *((uint32_t *)v1 + 3320) )
            {
              operator delete(*((void **)v1 + 3319));
              v62 = (int *)(*((uint32_t *)v1 + 3322) - 4);
              *((uint32_t *)v1 + 3322) = v62;
              v63 = *v62;
              *((uint32_t *)v1 + 3320) = *v62;
              *((uint32_t *)v1 + 3321) = v63 + 512;
              *((uint32_t *)v1 + 3319) = v63 + 504;
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)(v63 + 508));
            }
            else
            {
              *((uint32_t *)v1 + 3319) = v52 - 8;
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)(v52 - 4));
            }
            do
              v53 = pthread_mutex_lock((pthread_mutex_t *)((char *)v1 + 13336));
            while ( v53 == 4 );
            if ( v53 != 0 )
            {
              boost::lock_error::lock_error(
                (boost::lock_error *)v127,
                v53,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor *)((char *)v1 + 36));
            v86 = (glotv3::SingletonMutexedProcessor *)((char *)v1 + 12);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 12) != 0 )
              glotv3::Fs::RemovePath(v86);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 24) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 24);
            glotv3::Writer::Open((char *)v1 + 36, v86);
            sub_1321760((char *)v1 + 13336);
            do
              v54 = pthread_mutex_lock((pthread_mutex_t *)((char *)v1 + 13336));
            while ( v54 == 4 );
            if ( v54 != 0 )
            {
              boost::lock_error::lock_error(
                (boost::lock_error *)v128,
                v54,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor *)((char *)v1 + 4384));
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 16) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 16);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 28) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 28);
            glotv3::Writer::Open((char *)v1 + 4384, v86);
            sub_1321760((char *)v1 + 13336);
            do
              v55 = pthread_mutex_lock((pthread_mutex_t *)((char *)v1 + 13336));
            while ( v55 == 4 );
            if ( v55 != 0 )
            {
              boost::lock_error::lock_error(
                (boost::lock_error *)v129,
                v55,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            glotv3::Writer::Finish((glotv3::SingletonMutexedProcessor *)((char *)v1 + 8732));
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 20) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 20);
            if ( (uint8_t)glotv3::Fs::ExistsPath((char *)v1 + 32) != 0 )
              glotv3::Fs::RemovePath((char *)v1 + 32);
            glotv3::Writer::Open((char *)v1 + 8732, v86);
            sub_1321760((char *)v1 + 13336);
LABEL_60:
            boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v104);
            v12 = *((uint32_t *)v1 + 3319);
            if ( v12 == *((uint32_t *)v1 + 3315) )
              goto LABEL_61;
          }
          v105 = v103;
          v106[0] = v104[0];
          if ( v104[0] != 0 )
            __sync_add_and_fetch((volatile int32_t *)(v104[0] + 4), 1);
          glotv3::SingletonMutexedProcessor::WriteToLibSpy(v1, &v105);
          boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v106);
LABEL_67:
          v28 = *((uint32_t *)v1 + 3319);
          if ( v28 == *((uint32_t *)v1 + 3320) )
          {
            operator delete(*((void **)v1 + 3319));
            v36 = (int *)(*((uint32_t *)v1 + 3322) - 4);
            *((uint32_t *)v1 + 3322) = v36;
            v37 = *v36;
            *((uint32_t *)v1 + 3320) = *v36;
            *((uint32_t *)v1 + 3321) = v37 + 512;
            *((uint32_t *)v1 + 3319) = v37 + 504;
            boost::detail::shared_count::~shared_count((boost::detail::shared_count *)(v37 + 508));
          }
          else
          {
            *((uint32_t *)v1 + 3319) = v28 - 8;
            boost::detail::shared_count::~shared_count((boost::detail::shared_count *)(v28 - 4));
          }
          goto LABEL_60;
        }
LABEL_61:
        *((uint8_t *)v1 + 13334) = 0;
        glotv3::SingletonMutexedProcessor::PurgeBufferQueue(v1);
      }
      while ( *((uint8_t *)v1 + 13334) == 0 && *((uint8_t *)v1 + 13332) == 0 );
    }
  }
  return sub_1321760(v74);
}

*/

// ============================================================================
// Referencing Function: 0x135eba0 .. 0x1361787 (11239 bytes)
// Symbol:               _ZN6glotv325SingletonMutexedProcessor12AsyncNetworkEv
// Demangled:            glotv3::SingletonMutexedProcessor::AsyncNetwork(void)
// ============================================================================
/*
int glotv3::SingletonMutexedProcessor::AsyncNetwork(glotv3::SingletonMutexedProcessor *this)
{
  pthread_mutex_t *v1;
  int v2;
  pthread_mutex_t *current_thread_data;
  pthread_mutex_t *v4;
  int v5;
  int v6;
  int v7;
  pthread_mutex_t *v8;
  int v9;
  pthread_mutex_t *v10;
  int v11;
  char v12;
  int v13;
  int v14;
  int owner;
  int i;
  int *v17;
  int v18;
  int v19;
  int v20;
  unsigned int *v21;
  int v22;
  int spins;
  unsigned int v24;
  int v25;
  int *v26;
  uint8_t *v27;
  unsigned int v29;
  unsigned int v30;
  char v31; // si
  glotv3::Event::Self *v32;
  unsigned int EventType;
  int v34;
  uint8_t *v35;
  unsigned int v36;
  glotv3::Event::Self *v37;
  glotv3::Event::Self *v38;
  int v39;
  int v40;
  int v41;
  int v42;
  int v43;
  unsigned int KeyPairAsUInt;
  int v45;
  uint8_t *v46;
  unsigned int v47;
  int v48;
  int v49;
  int v50;
  int *v51;
  int *v52;
  int *v53;
  glotv3::Event::Self *v54;
  int v55;
  int *v56;
  int v57;
  int v58;
  bool v59;
  glotv3::Event::Self *v60;
  int SmartCount;
  glotv3::Event::Self *v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  uint32_t *v69;
  uint32_t *v70;
  int v71;
  int *v72;
  int *v73;
  int *v74;
  int v75;
  int v76;
  int v77;
  int v78;
  int v79;
  int v80;
  char *v81;
  int v82;
  void *v83;
  void **v84;
  unsigned int v85;
  void *v86;
  int v87;
  int v88;
  int v89;
  int v90;
  void *v91;
  void **v92;
  unsigned int v93;
  void *v94;
  int v95;
  int v96;
  int v97;
  int v98;
  void **v99;
  void *v100;
  int *v101;
  glotv3::Event::Self *v102;
  int v103;
  int *v104;
  int v105;
  int v106;
  int v107;
  int v108;
  glotv3::Event::Self *v109;
  glotv3::Event::Self *v110;
  int *v111;
  int *v112;
  int *v113;
  int n;
  int v115;
  char *v116;
  glotv3::Event::Self *v117;
  int v118;
  glotv3::Event::Self *v119;
  int *k;
  glotv3::Event::Self *v121;
  unsigned int *v122;
  unsigned int j;
  uint32_t *v124;
  int v125;
  int v126;
  int v127;
  int v128;
  int v129;
  int *v130;
  int v131;
  int v132;
  unsigned int v133;
  unsigned int v134;
  unsigned int v135;
  int v136;
  int v137;
  int v138;
  boost::detail *v139;
  boost::this_thread *v140;
  int v141;
  char *v142;
  int v143;
  int v144;
  int v145;
  int v146;
  int v147;
  int v148;
  int v149;
  int v150;
  int v151;
  char *v152;
  int v153;
  int v154;
  int v155;
  int *v156;
  int v157;
  int v158;
  int v159;
  int v160;
  int v161;
  int v162;
  char v163;
  pthread_mutex_t *v164;
  pthread_mutex_t *mutex;
  int v166;
  int v167;
  unsigned int v168;
  int v169;
  int *v170;
  int v171;
  int *src;
  glotv3::SingletonMutexedProcessor *v173;
  char *v174;
  int v175;
  unsigned int v176;
  int v177;
  int v178;
  char v179;
  unsigned int v180;
  char IsNotEmpty;
  int v182;
  char v183;
  int v184;
  unsigned int EventBatchSizeMaximum;
  int v186;
  int v187;
  unsigned int *p_count;
  unsigned int v189;
  char *v190;
  int v191;
  int *v192;
  unsigned int v193;
  int v194;
  int v195;
  int v196;
  char v197;
  unsigned int nusers;
  char *v199;
  void *v200;
  void *v201;
  void *v202;
  int *v203;
  int *v204;
  void *v205;
  int *v206;
  pthread_mutex_t *v207;
  unsigned int count;
  char *v209;
  void *v210;
  int v211;
  int *v212;
  int *v213;
  int *v214;
  int *m;
  int SessionId;
  int v217;
  uint32_t v218[3];
  int *v219;
  int v220[4];
  int v221[3];
  char v222[4];
  int v223;
  char v224[4];
  char v225[4];
  char v226[4];
  char v227[4];
  char v228[4];
  char v229[4];
  char v230[4];
  char v231[4];
  char v232[4];
  char v233[4];
  char v234[4];
  char v235[4];
  char v236[4];
  char v237[4];
  char v238[4];
  int v239;
  int v240[3];
  uint8_t *v241;
  int v242[3];
  int v243;
  int v244[3];
  uint8_t *v245;
  int v246[3];
  int v247;
  int v248[3];
  uint8_t *v249;
  int v250[3];
  int v251;
  int v252[3];
  int v253;
  int v254[3];
  int v255;
  int v256[3];
  int v257;
  int v258[3];
  int v259;
  int v260[4];
  int v261;
  int v262;
  int v263;
  int v264;
  int v265;
  uint32_t v266[2];
  int v267;
  int v268;
  int v269;
  int v270;
  int v271;
  int v272;
  int v273;
  char v274[4];
  int v275;
  int v276;
  char v277[4];
  int v278;
  int v279;
  char v280[4];
  int v281;
  int v282;
  int v283[4];
  uint32_t v284[4];
  int v285;
  uint32_t v286[4];
  uint8_t v287[8];
  char v288[20];
  void (**v289)(boost::condition_error *__hidden);
  char v290[20];
  char v291[20];
  char v292[20];
  char v293[20];
  char v294[20];
  char v295[20];
  char v296[20];
  char v297[20];
  char v298[20];
  char v299[20];
  char v300[20];
  int v301;
  int v302;
  void *v303;
  int *v304;
  int *v305;
  int v306;
  void *v307;
  int v308;
  int v309;
  unsigned int v310;
  int v311;
  int v312;
  int *v313;
  void *v314;
  char *v315;
  int v316;
  char *v317;
  unsigned int v318;
  int v319;
  int v320;
  int v321;
  int *v322;
  uint32_t v323[7];
  uint32_t *v324;
  int v325;
  int v326;
  int v327;
  int v328;
  int v329;
  uint32_t v330[1094];

  v330[1090] = &this;
  v173 = this;
  v164 = (pthread_mutex_t *)((char *)this + 13336);
  if ( this == (glotv3::SingletonMutexedProcessor *)-13336 )
    sub_134E404();
  v1 = (pthread_mutex_t *)((char *)this + 13336);
  do
    v2 = pthread_mutex_lock(v1);
  while ( v2 == 4 );
  if ( v2 != 0 )
  {
    boost::lock_error::lock_error((boost::lock_error *)v288, v2, "boost: mutex lock failed in pthread_mutex_lock");
    std::terminate();
  }
  if ( *((uint8_t *)v173 + 13393) == 0 )
  {
    mutex = (pthread_mutex_t *)((char *)v173 + 13344);
    if ( *((uint8_t *)v173 + 13392) == 0 )
    {
      while ( 1 )
      {
        current_thread_data = (pthread_mutex_t *)boost::detail::get_current_thread_data(v139);
        v207 = current_thread_data;
        if ( current_thread_data != nullptr && current_thread_data[4].__size[16] != 0 )
        {
          v4 = current_thread_data + 1;
          do
            v5 = pthread_mutex_lock(v4);
          while ( v5 == 4 );
          if ( v5 != 0 )
          {
            boost::lock_error::lock_error(
              (boost::lock_error *)v290,
              v5,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          v207[3].__owner = (int)mutex;
          v207[3].__kind = (int)v173 + 13348;
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              196,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          sub_1321760(v4);
          v197 = 1;
        }
        else
        {
          if ( pthread_mutex_lock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              200,
              "boost::detail::interruption_checker::interruption_checker(pthread_mutex_t*, pthread_cond_t*)",
              "!pthread_mutex_lock(m)");
          v197 = 0;
        }
        sub_1321760(v164);
        do
          v6 = pthread_cond_wait((pthread_cond_t *)((char *)v173 + 13348), (pthread_mutex_t *)v173 + 556);
        while ( v6 == 4 );
        v7 = v6;
        if ( v197 != 0 )
        {
          if ( pthread_mutex_unlock(mutex) != 0 )
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              207,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
          v8 = v207 + 1;
          do
            v9 = pthread_mutex_lock(v8);
          while ( v9 == 4 );
          if ( v9 != 0 )
          {
            boost::lock_error::lock_error(
              (boost::lock_error *)v291,
              v9,
              "boost: mutex lock failed in pthread_mutex_lock");
            std::terminate();
          }
          v207[3].__owner = 0;
          v207[3].__kind = 0;
          sub_1321760(v8);
          v10 = v164;
        }
        else
        {
          v10 = v164;
          if ( pthread_mutex_unlock(mutex) != 0 )
          {
            __assert2(
              "../../../../../lib/glitch/include/boost/thread/pthread/thread_data.hpp",
              214,
              "boost::detail::interruption_checker::~interruption_checker()",
              "!pthread_mutex_unlock(m)");
            v10 = v164;
          }
        }
        do
          v11 = pthread_mutex_lock(v10);
        while ( v11 == 4 );
        if ( v11 != 0 )
        {
          boost::lock_error::lock_error(
            (boost::lock_error *)v292,
            v11,
            "boost: mutex lock failed in pthread_mutex_lock");
          std::terminate();
        }
        boost::this_thread::interruption_point(v140);
        if ( v7 != 0 )
        {
          v138 = sub_18F81E0();
          boost::system::system_error::system_error(
            &v289,
            v7,
            v138,
            "boost::condition_variable::wait failed in pthread_cond_wait");
          v289 = off_2093D18;
          std::terminate();
        }
        if ( *((uint8_t *)v173 + 13392) != 0 )
          return sub_1321760(v164);
        IsNotEmpty = glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v173 + 24);
        v179 = glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v173 + 28);
        v162 = (int)v173 + 32;
        v12 = glotv3::Fs::ExistsPathAndIsNotEmpty((char *)v173 + 32);
        v183 = v12;
        if ( IsNotEmpty != 0 || v179 != 0 || v12 != 0 )
          break;
LABEL_92:
        *((uint8_t *)v173 + 13393) = 0;
        if ( *((uint8_t *)v173 + 13393) != 0 || *((uint8_t *)v173 + 13392) != 0 )
          return sub_1321760(v164);
      }
      sub_1358000();
      v329 = 0;
      v330[0] = 0;
      if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::get_pool(void)::f == 0 )
      {
        boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::get_pool(void)::f = 1;
        if ( &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage != nullptr )
        {
          v13 = pthread_mutex_init(
                  &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage,
                  nullptr);
          if ( v13 != 0 )
          {
            boost::thread_resource_error::thread_resource_error(
              (boost::thread_resource_error *)v293,
              v13,
              "boost:: mutex constructor failed in pthread_mutex_init");
            std::terminate();
          }
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__count = 0;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner = 0;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__kind = 0;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers = 192;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins = 16;
          unk_21185B8 = 16;
          unk_21185BC = 0;
        }
      }
      do
        v14 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage);
      while ( v14 == 4 );
      if ( v14 != 0 )
      {
        boost::lock_error::lock_error((boost::lock_error *)v294, v14, "boost: mutex lock failed in pthread_mutex_lock");
        std::terminate();
      }
      owner = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner;
      for ( i = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__kind;
            owner != 0;
            owner = *(v17 - 1) )
      {
        v17 = (int *)(owner + i - 4);
        i = *v17;
      }
      sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage);
      if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::get_pool(void)::f == 0 )
      {
        boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::get_pool(void)::f = 1;
        if ( &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage != nullptr )
        {
          v18 = pthread_mutex_init(
                  &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage,
                  nullptr);
          if ( v18 != 0 )
          {
            boost::thread_resource_error::thread_resource_error(
              (boost::thread_resource_error *)v295,
              v18,
              "boost:: mutex constructor failed in pthread_mutex_init");
            std::terminate();
          }
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__count = 0;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner = 0;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__kind = 0;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers = 192;
          boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins = 16;
          unk_21185B8 = 16;
          unk_21185BC = 0;
        }
      }
      do
        v19 = pthread_mutex_lock(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage);
      while ( v19 == 4 );
      if ( v19 != 0 )
      {
        boost::lock_error::lock_error((boost::lock_error *)v296, v19, "boost: mutex lock failed in pthread_mutex_lock");
        std::terminate();
      }
      nusers = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers;
      if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers <= 3 )
      {
        nusers = 4;
      }
      else if ( (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__size[16]
               & 3) != 0 )
      {
        nusers = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
               + 4
               - (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__size[16]
                & 3);
        v20 = nusers & 3;
        if ( nusers <= 3 )
        {
          __assert2(
            "../../../../../lib/glitch/include/boost/pool/pool.hpp",
            353,
            "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = g"
            "lotv3::event_list_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
            "s >= min_alloc_size");
          v20 = nusers;
        }
        if ( v20 != 0 )
          __assert2(
            "../../../../../lib/glitch/include/boost/pool/pool.hpp",
            354,
            "boost::pool<UserAllocator>::size_type boost::pool<UserAllocator>::alloc_size() const [with UserAllocator = g"
            "lotv3::event_list_new_delete, boost::pool<UserAllocator>::size_type = unsigned int]",
            "s % min_align == 0");
      }
      v193 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
           / nusers
           + (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
            % nusers != 0);
      if ( v193 != 0 )
      {
        count = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__count;
        p_count = &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__count;
        if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__count != 0 )
        {
          while ( 2 )
          {
            v21 = (unsigned int *)count;
            v22 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
                / nusers
                + (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
                 % nusers != 0);
            while ( --v22 != 0 )
            {
              if ( (unsigned int *)*v21 != (unsigned int *)((char *)v21 + nusers) )
              {
                count = *v21;
                p_count = v21;
                goto LABEL_58;
              }
              v21 = (unsigned int *)*v21;
            }
            if ( v21 != nullptr )
            {
              *p_count = *v21;
              goto LABEL_71;
            }
LABEL_58:
            if ( count != 0 )
              continue;
            break;
          }
        }
      }
      spins = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins;
      if ( v193 >= boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins )
        spins = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
              / nusers
              + (boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
               % nusers != 0);
      boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins = spins;
      v24 = nusers * spins + 8;
      count = operator new[](v24, (const std::nothrow_t *)&std::nothrow);
      if ( count != 0 )
        goto LABEL_62;
      if ( v193 < boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins )
      {
        v133 = (unsigned int)boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins >> 1;
        if ( v193 >= (unsigned int)boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins >> 1 )
          v133 = v193;
        boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins = v133;
        v24 = nusers * v133 + 8;
        count = operator new[](v24, (const std::nothrow_t *)&std::nothrow);
        if ( count != 0 )
        {
LABEL_62:
          v25 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins;
          if ( v193 < boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins )
          {
            sub_60EFD0(
              &boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__align
            + 1,
              count + nusers * v193,
              v24 - nusers * v193 - 8,
              nusers);
            v25 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins;
          }
          if ( unk_21185BC != 0 )
          {
            if ( unk_21185BC > v25
                             * nusers
                             / boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers )
            {
              v29 = 2 * v25;
              v30 = unk_21185BC
                  * boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__nusers
                  / nusers;
              if ( v29 <= v30 )
                v30 = v29;
              boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins = v30;
            }
          }
          else
          {
            boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__spins = 2 * v25;
          }
          if ( boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner != 0
            && count >= boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner )
          {
            v122 = (unsigned int *)(boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner
                                  + boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__kind
                                  - 4);
            for ( j = *(uint32_t *)(boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner
                                + boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__kind
                                - 8); j != 0 && count >= j; j = *(v122 - 1) )
              v122 = (unsigned int *)(j + *v122 - 4);
            v205 = (void *)*v122;
            v124 = (uint32_t *)(count + v24 - 4);
            *(v124 - 1) = j;
            *v124 = v205;
            *(v122 - 1) = count;
            *v122 = v24;
          }
          else
          {
            v26 = (uint32_t *)(count + v24 - 4);
            *(v26 - 1) = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner;
            *v26 = boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__kind;
            boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__owner = count;
            boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage.__kind = v24;
          }
        }
      }
LABEL_71:
      sub_1321760(&boost::singleton_pool<boost::pool_allocator_tag,192u,glotv3::event_list_new_delete,boost::mutex,16u,0u>::storage);
      if ( count == 0 )
        goto LABEL_394;
      v330[0] = count;
      v27 = nullptr;
      *(uint32_t *)(count + 4) = 1;
      *(uint32_t *)(count + 8) = 1;
      *(uint32_t *)(count + 12) = 0;
      *(uint8_t *)(count + 16) = 0;
      *(uint32_t *)count = off_2093CE8;
      if ( v330[0] != 0 )
        v27 = (uint8_t *)(*(int (**)(uint32_t))(*(uint32_t *)v330[0] + 20))(v330[0]);
      if ( v27 != (uint8_t *)-4 )
        glotv3::EventList::EventList((glotv3::EventList *)(v27 + 4));
      *v27 = 1;
      v241 = v27 + 4;
      v242[0] = v330[0];
      if ( v330[0] != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v330[0] + 4), 1);
      boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v330);
      if ( IsNotEmpty != 0 )
      {
        v245 = v241;
        v246[0] = v242[0];
        if ( v242[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v242[0] + 4), 1);
        v243 = v239;
        v244[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(v173, 0, &v243, &v245);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v244);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v246);
      }
      if ( v179 != 0 )
      {
        v249 = v241;
        v250[0] = v242[0];
        if ( v242[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v242[0] + 4), 1);
        v247 = v239;
        v248[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        glotv3::SingletonMutexedProcessor::ReadAndTransmitEvents(v173, 1, &v247, &v249);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v248);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v250);
      }
      if ( v183 == 0 )
      {
LABEL_91:
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v242);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v240);
        goto LABEL_92;
      }
      v304 = &v302;
      v305 = &v302;
      v302 = 0;
      v303 = nullptr;
      v306 = 0;
      glotv3::Reader::Reader((glotv3::Reader *)&v329, v162);
      v163 = 0;
      while ( 1 )
      {
        v251 = v239;
        v252[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        v31 = glotv3::Reader::ReadNext(&v329, &v251);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v252);
        if ( v31 == 0 )
        {
          for ( k = v304; k != &v302; k = (int *)sub_1904890(k) )
          {
            if ( *((uint8_t *)v173 + 13419) != 0
              || (v121 = (glotv3::Event::Self *)sub_134C470(),
                  (SessionId = glotv3::Event::getSessionId(v121)) == glotv3::TrackingManager::GetCurrentSessionIdentifier(*((glotv3::TrackingManager **)v173 + 3297))) )
            {
              v263 = k[5];
              v264 = k[6];
              if ( v264 != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v264 + 4), 1);
              glotv3::SingletonMutexedProcessor::QueueForWriting(v173, (int)&v263, 0, 1);
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v264);
            }
            else
            {
              v265 = k[5];
              v266[0] = k[6];
              if ( v266[0] != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v266[0] + 4), 1);
              glotv3::SingletonMutexedProcessor::AddCompactedEvent(v173, &v265);
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v266);
              v163 = 1;
            }
          }
          *((uint8_t *)v173 + 13419) = 1;
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
            (int)&v301,
            v303);
          v303 = nullptr;
          v304 = &v302;
          v305 = &v302;
          v306 = 0;
          if ( v163 != 0 )
          {
            glotv3::Glotv3Logger::WriteLog(&glotv3::errors::TIMER_HAS_FIRED_DUE_TO_COMPACTION, 1);
            sub_135E550();
            v285 = v266[1];
            v286[0] = v267;
            if ( v267 != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v267 + 4), 1);
            boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v267);
            v255 = v285;
            v256[0] = v286[0];
            if ( v286[0] != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v286[0] + 4), 1);
            glotv3::SingletonMutexedProcessor::QueueForWriting(v173, (int)&v255, 1, 0);
            boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v256);
            boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v286);
          }
          glotv3::Reader::~Reader((glotv3::Reader *)&v329);
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
            (int)&v301,
            v303);
          glotv3::Fs::RemovePath(v162);
          goto LABEL_91;
        }
        v32 = (glotv3::Event::Self *)sub_134C470();
        EventType = glotv3::Event::getEventType(v32);
        do
          v34 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
        while ( v34 == 4 );
        if ( v34 != 0 )
        {
          boost::lock_error::lock_error(
            (boost::lock_error *)v297,
            v34,
            "boost: mutex lock failed in pthread_mutex_lock");
LABEL_394:
          std::terminate();
        }
        v35 = v287;
        v220[0] = (int)&unk_213B814;
        while ( 1 )
        {
          v36 = EventType % 0xA + 48;
          EventType /= 0xAu;
          *(v35 - 1) = v36;
          if ( EventType == 0 )
            break;
          --v35;
        }
        sub_193A9B0((int)v220, 0, dword_213B808[0], v35 - 1, v287 - (v35 - 1));
        sub_1321760(&glotv3::Utils::s_ToStringMutex);
        std::string::__construct_copy(v222, v220);
        std::string::append_str(v222, &glotv3::system::HASHTAG);
        std::string::~string(v220);
        v170 = (int *)operator new(0x20u);
        src = v170 + 3;
        v171 = operator new(0x200u);
        v170[3] = v171;
        v169 = v171 + 512;
        v37 = (glotv3::Event::Self *)sub_134C470();
        glotv3::Event::getEventType(v37);
        glotv3::SingletonMutexedProcessor::GetEventParameters(&v307);
        v38 = (glotv3::Event::Self *)sub_134C470();
        glotv3::Event::getEventType(v38);
        glotv3::SingletonMutexedProcessor::GetEventParameters(&v314);
        v176 = v310;
        v180 = (unsigned int)(v170 + 3);
        v39 = v308;
        v184 = v309;
        v166 = v171 + 512;
        v167 = v171;
        v182 = v171;
        v168 = 8;
        while ( v311 != v39 )
        {
          while ( 1 )
          {
            v284[0] = v315;
            v284[1] = v316;
            v284[2] = v317;
            v284[3] = v318;
            v286[1] = v321;
            v40 = v319;
            v286[0] = v320;
            v286[2] = v322;
            v285 = v319;
            std::__find<std::_Deque_iterator<std::string,std::string const&,std::string const*>,std::string>(v283);
            if ( v283[0] == v40 )
            {
              if ( v182 == v166 - 4 )
              {
                if ( v168 - ((int)(v180 - (uint32_t)v170) >> 2) <= 1 )
                {
                  v127 = (int)(v180 - (uint32_t)src) >> 2;
                  v128 = v127 + 1;
                  v129 = v127 + 2;
                  v217 = v128;
                  if ( 2 * v129 >= v168 )
                  {
                    v134 = v168;
                    if ( v168 != 0 )
                    {
                      v135 = 2 * v168 + 2;
                      v168 = v135;
                      if ( v135 > 0x3FFFFFFF )
                        sub_18FFEE0(v134, v135);
                    }
                    else
                    {
                      v168 = 3;
                    }
                    v206 = (int *)operator new(4 * v168);
                    v130 = &v206[(v168 - v129) >> 1];
                    v136 = (int)(v180 + 4 - (uint32_t)src) >> 2;
                    if ( v136 != 0 )
                      memmove(v130, src, 4 * v136);
                    operator delete(v170);
                    v170 = v206;
                  }
                  else
                  {
                    v130 = &v170[(v168 - v129) >> 1];
                    v131 = v180 + 4 - (uint32_t)src;
                    if ( v130 >= src )
                    {
                      v137 = v131 >> 2;
                      if ( v137 != 0 )
                        memmove(&v130[v128 - v137], src, 4 * v137);
                    }
                    else
                    {
                      v132 = v131 >> 2;
                      if ( v132 != 0 )
                        memmove(v130, src, 4 * v132);
                    }
                  }
                  src = v130;
                  v169 = *v130 + 512;
                  v180 = (unsigned int)&v130[v217 - 1];
                }
                v125 = operator new(0x200u);
                *(uint32_t *)(v180 + 4) = v125;
                if ( v182 != 0 )
                {
                  std::string::__construct_copy(v182, v39);
                  v126 = *(uint32_t *)(v180 + 4);
                  v182 = v126;
                }
                else
                {
                  v182 = v125;
                  v126 = v125;
                }
                v180 += 4;
                v166 = v126 + 512;
                v167 = v182;
              }
              else
              {
                if ( v182 != 0 )
                  std::string::__construct_copy(v182, v39);
                v182 += 4;
              }
            }
            v39 += 4;
            if ( v184 != v39 )
              break;
            v39 = *(uint32_t *)(v176 + 4);
            v176 += 4;
            v184 = v39 + 512;
            if ( v311 == v39 )
              goto LABEL_121;
          }
        }
LABEL_121:
        v41 = v171;
        v194 = (int)src;
        v199 = (char *)v169;
LABEL_122:
        v209 = (char *)v41;
        while ( v209 != (char *)v182 )
        {
          std::string::__construct_copy(v284, v209);
          sub_134C470();
          glotv3::Event::getKeyPair(&v223);
          v42 = *(uint32_t *)(v223 - 12);
          std::string::~string(&v223);
          if ( v42 != 0 )
          {
            sub_134C470();
            glotv3::Event::getKeyPair(v228);
            do
              v49 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
            while ( v49 == 4 );
            if ( v49 != 0 )
            {
              boost::lock_error::lock_error(
                (boost::lock_error *)v299,
                v49,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            std::string::__construct_copy(v229, v228);
            sub_1321760(&glotv3::Utils::s_ToStringMutex);
            std::string::__construct_copy(v227, v284);
            std::string::append_str(v227, &glotv3::system::HASHTAG);
            std::string::__construct_copy(v230, v227);
            std::string::append_str(v230, v229);
            std::string::__construct_copy(v231, v230);
            std::string::append_str(v231, &glotv3::system::HASHTAG);
            std::string::append_str(v222, v231);
            std::string::~string(v231);
            std::string::~string(v230);
            std::string::~string(v227);
            std::string::~string(v229);
            std::string::~string(v228);
          }
          else
          {
            v43 = sub_134C470();
            KeyPairAsUInt = glotv3::Event::getKeyPairAsUInt(v43, v284);
            do
              v45 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
            while ( v45 == 4 );
            if ( v45 != 0 )
            {
              boost::lock_error::lock_error(
                (boost::lock_error *)v298,
                v45,
                "boost: mutex lock failed in pthread_mutex_lock");
              std::terminate();
            }
            v46 = v287;
            v221[0] = (int)&unk_213B814;
            while ( 1 )
            {
              v47 = KeyPairAsUInt % 0xA + 48;
              KeyPairAsUInt /= 0xAu;
              *(v46 - 1) = v47;
              if ( KeyPairAsUInt == 0 )
                break;
              --v46;
            }
            sub_193A9B0((int)v221, 0, dword_213B808[0], v46 - 1, v287 - (v46 - 1));
            sub_1321760(&glotv3::Utils::s_ToStringMutex);
            std::string::__construct_copy(v224, v284);
            std::string::append_str(v224, &glotv3::system::HASHTAG);
            std::string::__construct_copy(v225, v224);
            std::string::append_str(v225, v221);
            std::string::__construct_copy(v226, v225);
            std::string::append_str(v226, &glotv3::system::HASHTAG);
            std::string::append_str(v222, v226);
            std::string::~string(v226);
            std::string::~string(v225);
            std::string::~string(v224);
            std::string::~string(v221);
          }
          std::string::~string(v284);
          v209 += 4;
          if ( v199 == v209 )
          {
            v48 = v194;
            v194 += 4;
            v41 = *(uint32_t *)(v48 + 4);
            v199 = (char *)(v41 + 512);
            goto LABEL_122;
          }
        }
        sub_134C470();
        glotv3::Event::getGameVersion((glotv3::Event::Self *)v232);
        sub_134C470();
        glotv3::Event::getKeyPair(v234);
        do
          v50 = pthread_mutex_lock((pthread_mutex_t *)&glotv3::Utils::s_ToStringMutex);
        while ( v50 == 4 );
        if ( v50 != 0 )
        {
          boost::lock_error::lock_error(
            (boost::lock_error *)v300,
            v50,
            "boost: mutex lock failed in pthread_mutex_lock");
          std::terminate();
        }
        std::string::__construct_copy(v235, v234);
        sub_1321760(&glotv3::Utils::s_ToStringMutex);
        std::string::__construct_copy(v233, v232);
        std::string::append_str(v233, &glotv3::system::HASHTAG);
        std::string::__construct_copy(v236, v233);
        std::string::append_str(v236, v235);
        std::string::__construct_copy(v237, v236);
        std::string::append_str(v237, &glotv3::system::HASHTAG);
        std::string::append_str(v222, v237);
        std::string::~string(v237);
        std::string::~string(v236);
        std::string::~string(v233);
        std::string::~string(v235);
        std::string::~string(v234);
        glotv3::Utils::GetSHA1(v238);
        std::string::assign_str(v222, v238);
        std::string::~string(v238);
        v51 = (int *)v303;
        v210 = (void *)v319;
        v200 = v315;
        if ( v303 != nullptr )
        {
          v52 = &v302;
          do
          {
            while ( (int)std::string::compare_str(v51 + 4, v222) >= 0 )
            {
              v52 = v51;
              v51 = (int *)v51[2];
              if ( v51 == nullptr )
                goto LABEL_146;
            }
            v51 = (int *)v51[3];
          }
          while ( v51 != nullptr );
LABEL_146:
          if ( v52 != &v302 && (int)std::string::compare_str(v222, v52 + 4) >= 0 )
          {
            v53 = &v302;
            v54 = (glotv3::Event::Self *)sub_134C470();
            v55 = glotv3::Event::getEventType(v54);
            EventBatchSizeMaximum = glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum(v173, v55);
            v56 = (int *)v303;
            if ( v210 != v200 )
            {
              if ( v303 != nullptr )
              {
                do
                {
                  while ( (int)std::string::compare_str(v56 + 4, v222) >= 0 )
                  {
                    v53 = v56;
                    v56 = (int *)v56[2];
                    if ( v56 == nullptr )
                      goto LABEL_154;
                  }
                  v56 = (int *)v56[3];
                }
                while ( v56 != nullptr );
LABEL_154:
                if ( v53 != &v302 && (int)std::string::compare_str(v222, v53 + 4) >= 0 )
                  goto LABEL_168;
              }
              v268 = 0;
              v269 = 0;
              std::string::__construct_copy(v274, v222);
              v275 = v268;
              v276 = v269;
              if ( v269 != 0 )
                __sync_add_and_fetch((volatile int32_t *)(v269 + 4), 1);
              if ( v53 == &v302 )
              {
                if ( v306 != 0 && (int)std::string::compare_str(v305 + 4, v274) < 0 )
                  goto LABEL_292;
              }
              else if ( (int)std::string::compare_str(v274, v53 + 4) >= 0 )
              {
                if ( (int)std::string::compare_str(v53 + 4, v274) >= 0 )
                  goto LABEL_167;
                if ( v305 == v53 )
                  goto LABEL_292;
                v158 = sub_19048E0(v53);
                if ( (int)std::string::compare_str(v274, v158 + 16) < 0 )
                  goto LABEL_292;
              }
              else
              {
                if ( v304 == v53 )
                  goto LABEL_292;
                v154 = sub_1904940(v53);
                if ( (int)std::string::compare_str(v154 + 16, v274) < 0 )
                {
                  if ( *(uint32_t *)(v154 + 12) != 0 )
                  {
                    v57 = operator new(0x1Cu);
                    if ( v57 != -16 )
                    {
                      v155 = v57;
                      std::string::__construct_copy(v57 + 16, v274);
                      v57 = v155;
                      *(uint32_t *)(v155 + 20) = v275;
                      v58 = v276;
                      v59 = v276 == 0;
                      *(uint32_t *)(v155 + 24) = v276;
                      if ( !v59 )
                        __sync_add_and_fetch((volatile int32_t *)(v58 + 4), 1);
                    }
                    v156 = (int *)v57;
                    sub_1904970(1, v57, v53, &v302);
                    ++v306;
                    v53 = v156;
LABEL_167:
                    boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v276);
                    std::string::~string(v274);
                    boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v269);
LABEL_168:
                    v285 = v53[5];
                    v286[0] = v53[6];
                    if ( v286[0] != 0 )
                      __sync_add_and_fetch((volatile int32_t *)(v286[0] + 4), 1);
                    v60 = (glotv3::Event::Self *)sub_134C470();
                    SmartCount = glotv3::Event::getSmartCount(v60);
                    v62 = (glotv3::Event::Self *)sub_134C470();
                    glotv3::Event::setSmartCount(v62, SmartCount + 1);
                    v63 = (int)v315;
                    v201 = v317;
                    v189 = v318;
                    while ( v319 != v63 )
                    {
                      while ( 1 )
                      {
                        v64 = sub_134C470();
                        v65 = glotv3::Event::getKeyPairAsUInt(v64, v63);
                        v66 = sub_134C470();
                        v211 = v65 + glotv3::Event::getKeyPairAsUInt(v66, v63);
                        v323[2] = 3;
                        v323[6] = 0;
                        v324 = nullptr;
                        v326 = 0;
                        v327 = 0;
                        v328 = 0;
                        v325 = 2048;
                        v67 = operator new(1u);
                        v68 = v325;
                        v327 = v67;
                        v328 = v67;
                        v69 = malloc(v325 + 12);
                        v70 = v324;
                        *v69 = v68;
                        v69[2] = v70;
                        v69[1] = 0;
                        v324 = v69;
                        v323[0] = v211;
                        v71 = sub_134C470();
                        v153 = v63;
                        v63 += 4;
                        glotv3::Event::addKeyPair(v71, v153, (`glotv3::EventValue::operator rapidjson` *)v323);
                        glotv3::EventValue::~EventValue((glotv3::EventValue *)v323);
                        if ( v201 != (void *)v63 )
                          break;
                        v63 = *(uint32_t *)(v189 + 4);
                        v189 += 4;
                        v201 = (void *)(v63 + 512);
                        if ( v319 == v63 )
                          goto LABEL_174;
                      }
                    }
LABEL_174:
                    boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v286);
                    if ( glotv3::TrackingManager::s_IsSpyInstantSendingActive == 0 )
                      goto LABEL_263;
                    goto LABEL_175;
                  }
LABEL_292:
                  std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(&v219);
                  v53 = v219;
                  goto LABEL_167;
                }
              }
              std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_unique(v218);
              v53 = (int *)v218[0];
              goto LABEL_167;
            }
            if ( v303 != nullptr )
            {
              do
              {
                while ( (int)std::string::compare_str(v56 + 4, v222) >= 0 )
                {
                  v53 = v56;
                  v56 = (int *)v56[2];
                  if ( v56 == nullptr )
                    goto LABEL_298;
                }
                v56 = (int *)v56[3];
              }
              while ( v56 != nullptr );
LABEL_298:
              if ( v53 != &v302 && (int)std::string::compare_str(v222, v53 + 4) >= 0 )
                goto LABEL_308;
            }
            v270 = 0;
            v271 = 0;
            std::string::__construct_copy(v277, v222);
            v278 = v270;
            v279 = v271;
            if ( v271 != 0 )
              __sync_add_and_fetch((volatile int32_t *)(v271 + 4), 1);
            if ( v53 == &v302 )
            {
              if ( v306 == 0 || (int)std::string::compare_str(v305 + 4, v277) >= 0 )
                goto LABEL_370;
            }
            else
            {
              if ( (int)std::string::compare_str(v277, v53 + 4) < 0 )
              {
                if ( v53 == v304 )
                  goto LABEL_306;
                v159 = sub_1904940(v53);
                if ( (int)std::string::compare_str(v159 + 16, v277) < 0 )
                  goto LABEL_306;
LABEL_370:
                std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_unique(v218);
                v53 = (int *)v218[0];
LABEL_307:
                boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v279);
                std::string::~string(v277);
                boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v271);
LABEL_308:
                v285 = v53[5];
                v286[0] = v53[6];
                if ( v286[0] != 0 )
                  __sync_add_and_fetch((volatile int32_t *)(v286[0] + 4), 1);
                v117 = (glotv3::Event::Self *)sub_134C470();
                v118 = glotv3::Event::getCount(v117);
                v119 = (glotv3::Event::Self *)sub_134C470();
                glotv3::Event::setCount(v119, v118 + 1);
                goto LABEL_174;
              }
              if ( (int)std::string::compare_str(v53 + 4, v277) >= 0 )
                goto LABEL_307;
              if ( v53 != v305 )
              {
                v160 = sub_19048E0(v53);
                if ( (int)std::string::compare_str(v277, v160 + 16) >= 0 )
                  goto LABEL_370;
              }
            }
LABEL_306:
            std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(&v219);
            v53 = v219;
            goto LABEL_307;
          }
        }
        v101 = &v302;
        v102 = (glotv3::Event::Self *)sub_134C470();
        v103 = glotv3::Event::getEventType(v102);
        EventBatchSizeMaximum = glotv3::SingletonMutexedProcessor::GetEventBatchSizeMaximum(v173, v103);
        v104 = (int *)v303;
        if ( v303 == nullptr )
          break;
        do
        {
          while ( (int)std::string::compare_str(v104 + 4, v222) >= 0 )
          {
            v101 = v104;
            v104 = (int *)v104[2];
            if ( v104 == nullptr )
              goto LABEL_250;
          }
          v104 = (int *)v104[3];
        }
        while ( v104 != nullptr );
LABEL_250:
        if ( v101 == &v302 || (int)std::string::compare_str(v222, v101 + 4) < 0 )
          break;
LABEL_260:
        v105 = v239;
        v106 = 0;
        v257 = v239;
        v258[0] = v240[0];
        if ( v240[0] != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
          v105 = v257;
          v106 = v258[0];
        }
        v107 = v101[5];
        v101[5] = v105;
        v257 = v107;
        v108 = v101[6];
        v101[6] = v106;
        v258[0] = v108;
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v258);
        if ( glotv3::TrackingManager::s_IsSpyInstantSendingActive == 0 )
        {
LABEL_263:
          v109 = (glotv3::Event::Self *)sub_134C470();
          if ( glotv3::Event::getCount(v109) < EventBatchSizeMaximum )
          {
            v110 = (glotv3::Event::Self *)sub_134C470();
            if ( glotv3::Event::getSmartCount(v110) < EventBatchSizeMaximum )
              goto LABEL_190;
          }
        }
LABEL_175:
        v253 = v239;
        v254[0] = v240[0];
        if ( v240[0] != 0 )
          __sync_add_and_fetch((volatile int32_t *)(v240[0] + 4), 1);
        glotv3::SingletonMutexedProcessor::AddCompactedEvent(v173, &v253);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v254);
        v212 = &v302;
        v72 = &v302;
        v202 = v303;
        if ( v303 != nullptr )
        {
          v73 = (int *)v303;
          while ( 1 )
          {
            while ( (int)std::string::compare_str(v73 + 4, v222) < 0 )
            {
              v73 = (int *)v73[3];
              if ( v73 == nullptr )
                goto LABEL_183;
            }
            if ( (int)std::string::compare_str(v222, v73 + 4) >= 0 )
              break;
            v212 = v73;
            v73 = (int *)v73[2];
            if ( v73 == nullptr )
            {
LABEL_183:
              v72 = v212;
              goto LABEL_184;
            }
          }
          v111 = (int *)v73[2];
          if ( v73[3] != 0 )
          {
            v192 = (int *)v73[2];
            v112 = (int *)v73[3];
            do
            {
              while ( (int)std::string::compare_str(v222, v112 + 4) < 0 )
              {
                v212 = v112;
                v112 = (int *)v112[2];
                if ( v112 == nullptr )
                  goto LABEL_271;
              }
              v112 = (int *)v112[3];
            }
            while ( v112 != nullptr );
LABEL_271:
            v111 = v192;
          }
          v72 = v73;
          if ( v111 != nullptr )
          {
            v113 = v111;
            do
            {
              if ( (int)std::string::compare_str(v113 + 4, v222) >= 0 )
              {
                v72 = v113;
                v113 = (int *)v113[2];
              }
              else
              {
                v113 = (int *)v113[3];
              }
            }
            while ( v113 != nullptr );
          }
        }
LABEL_184:
        if ( v304 == v72 && v212 == &v302 )
        {
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_erase(
            (int)&v301,
            v202);
          v303 = nullptr;
          v304 = &v302;
          v305 = &v302;
          v306 = 0;
          v163 = 1;
        }
        else
        {
          if ( v72 != v212 )
          {
            while ( 1 )
            {
              v74 = (int *)sub_19048E0(v72);
              v75 = sub_1904AE0(v72, &v302);
              boost::detail::shared_count::~shared_count((boost::detail::shared_count *)(v75 + 24));
              std::string::~string(v75 + 16);
              operator delete((void *)v75);
              --v306;
              if ( v212 == v74 )
                break;
              v72 = v74;
            }
          }
          v163 = 1;
        }
LABEL_190:
        sub_1358000();
        v76 = v261;
        v77 = 0;
        v259 = v261;
        v260[0] = v262;
        if ( v262 != 0 )
        {
          __sync_add_and_fetch((volatile int32_t *)(v262 + 4), 1);
          v76 = v259;
          v77 = v260[0];
        }
        v78 = v239;
        v239 = v76;
        v259 = v78;
        v260[0] = v240[0];
        v240[0] = v77;
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)v260);
        boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v262);
        std::string::~string(v232);
        v203 = v322;
        v186 = v319;
        v177 = v320;
        v195 = v318;
        v190 = v315;
        v174 = v317;
        v213 = (int *)(v318 + 4);
        if ( (unsigned int)v322 > v318 + 4 )
        {
          do
          {
            v79 = *v213;
            v80 = *v213 + 512;
            do
            {
              v141 = v79;
              v79 += 4;
              std::string::~string(v141);
            }
            while ( v79 != v80 );
            ++v213;
          }
          while ( v203 > v213 );
        }
        if ( v203 == (int *)v195 )
        {
          if ( (char *)v186 != v190 )
          {
            v116 = v190;
            do
            {
              v152 = v116;
              v116 += 4;
              std::string::~string(v152);
            }
            while ( (char *)v186 != v116 );
          }
        }
        else
        {
          if ( v190 != v174 )
          {
            v81 = v190;
            do
            {
              v142 = v81;
              v81 += 4;
              std::string::~string(v142);
            }
            while ( v174 != v81 );
          }
          if ( v186 != v177 )
          {
            v82 = v177;
            do
            {
              v143 = v82;
              v82 += 4;
              std::string::~string(v143);
            }
            while ( v186 != v82 );
          }
        }
        v83 = v314;
        if ( v314 != nullptr )
        {
          v84 = (void **)v318;
          v85 = (unsigned int)(v322 + 1);
          if ( (unsigned int)(v322 + 1) > v318 )
          {
            do
            {
              v86 = *v84++;
              operator delete(v86);
            }
            while ( v85 > (unsigned int)v84 );
            v83 = v314;
          }
          operator delete(v83);
        }
        v204 = v313;
        v187 = v311;
        v178 = v312;
        v196 = v310;
        v191 = v308;
        v175 = v309;
        v214 = (int *)(v310 + 4);
        if ( (unsigned int)v313 > v310 + 4 )
        {
          do
          {
            v87 = *v214;
            v88 = *v214 + 512;
            do
            {
              v144 = v87;
              v87 += 4;
              std::string::~string(v144);
            }
            while ( v87 != v88 );
            ++v214;
          }
          while ( v204 > v214 );
        }
        if ( v204 == (int *)v196 )
        {
          if ( v187 != v191 )
          {
            v115 = v191;
            do
            {
              v151 = v115;
              v115 += 4;
              std::string::~string(v151);
            }
            while ( v187 != v115 );
          }
        }
        else
        {
          if ( v191 != v175 )
          {
            v89 = v191;
            do
            {
              v145 = v89;
              v89 += 4;
              std::string::~string(v145);
            }
            while ( v175 != v89 );
          }
          if ( v187 != v178 )
          {
            v90 = v178;
            do
            {
              v146 = v90;
              v90 += 4;
              std::string::~string(v146);
            }
            while ( v187 != v90 );
          }
        }
        v91 = v307;
        if ( v307 != nullptr )
        {
          v92 = (void **)v310;
          v93 = (unsigned int)(v313 + 1);
          if ( (unsigned int)(v313 + 1) > v310 )
          {
            do
            {
              v94 = *v92++;
              operator delete(v94);
            }
            while ( v93 > (unsigned int)v92 );
            v91 = v307;
          }
          operator delete(v91);
        }
        for ( m = src + 1; v180 > (unsigned int)m; ++m )
        {
          v95 = *m;
          v96 = *m + 512;
          do
          {
            v147 = v95;
            v95 += 4;
            std::string::~string(v147);
          }
          while ( v95 != v96 );
        }
        if ( (int *)v180 == src )
        {
          for ( n = v171; v182 != n; n += 4 )
          {
            v150 = n;
            std::string::~string(v150);
          }
        }
        else
        {
          if ( v169 != v171 )
          {
            v97 = v171;
            do
            {
              v148 = v97;
              v97 += 4;
              std::string::~string(v148);
            }
            while ( v169 != v97 );
          }
          if ( v167 != v182 )
          {
            v98 = v167;
            do
            {
              v149 = v98;
              v98 += 4;
              std::string::~string(v149);
            }
            while ( v182 != v98 );
          }
        }
        if ( v170 != nullptr )
        {
          if ( v180 + 4 > (unsigned int)src )
          {
            v99 = (void **)src;
            do
            {
              v100 = *v99++;
              operator delete(v100);
            }
            while ( v180 + 4 > (unsigned int)v99 );
          }
          operator delete(v170);
        }
        std::string::~string(v222);
      }
      v272 = 0;
      v273 = 0;
      std::string::__construct_copy(v280, v222);
      v281 = v272;
      v282 = v273;
      if ( v273 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v273 + 4), 1);
      if ( v101 == &v302 )
      {
        if ( v306 != 0 && (int)std::string::compare_str(v305 + 4, v280) < 0 )
          goto LABEL_258;
      }
      else if ( (int)std::string::compare_str(v280, v101 + 4) >= 0 )
      {
        if ( (int)std::string::compare_str(v101 + 4, v280) >= 0 )
          goto LABEL_259;
        if ( v101 == v305 || (v161 = sub_19048E0(v101), (int)std::string::compare_str(v280, v161 + 16) < 0) )
        {
LABEL_258:
          std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_(&v219);
          v101 = v219;
LABEL_259:
          boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v282);
          std::string::~string(v280);
          boost::detail::shared_count::~shared_count((boost::detail::shared_count *)&v273);
          goto LABEL_260;
        }
      }
      else
      {
        if ( v101 == v304 )
          goto LABEL_258;
        v157 = sub_1904940(v101);
        if ( (int)std::string::compare_str(v157 + 16, v280) < 0 )
          goto LABEL_258;
      }
      std::_Rb_tree<std::string,std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>,std::_Select1st<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>,std::less<std::string>,std::allocator<std::pair<std::string const,boost::shared_ptr<glotv3::Event::Self>>>>::_M_insert_unique(v218);
      v101 = (int *)v218[0];
      goto LABEL_259;
    }
  }
  return sub_1321760(v164);
}

*/
