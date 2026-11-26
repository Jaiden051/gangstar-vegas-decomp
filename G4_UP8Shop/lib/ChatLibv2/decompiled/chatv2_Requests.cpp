#include "Core/Utils/DecompTypes.h"
#include "chatv2_Requests.h"

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequest::CheckFailure  (binary VA: 0x123a500)
// Original: chatv2::Requests::IRequest::CheckFailure
// ----------------------------------------------------------------------------
bool chatv2::Requests::IRequest::CheckFailure(chatv2::Requests::IRequest::Self *self)
{
  return *((uint32_t *)self + 3) > 5u;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequest::Destroy  (binary VA: 0x123a520)
// Original: chatv2::Requests::IRequest::~IRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::IRequest::Destroy(chatv2::Requests::IRequest::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092248);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequest::Destroy_ea123a540  (binary VA: 0x123a540)
// Original: chatv2::Requests::IRequest::~IRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::IRequest::Destroy_ea123a540(chatv2::Requests::IRequest::Self *self)
{
  chatv2::Requests::IRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequest::CanExecute  (binary VA: 0x123a580)
// Original: chatv2::Requests::IRequest::CanExecute
// ----------------------------------------------------------------------------
bool chatv2::Requests::IRequest::CanExecute(chatv2::Requests::IRequest::Self *self)
{
  typedef struct timespec _g4_t_tp;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_tp)) > _g4_s0 ? (0u + sizeof(_g4_t_tp)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 0u);

  if ( clock_gettime(1, &tp) != 0 )
    __assert2(
      "../../../../../lib/boost/chrono/detail/inlined/posix/chrono.hpp",
      79,
      "static boost::chrono::steady_clock::time_point boost::chrono::steady_clock::now()",
      "0 && \"Boost::Chrono - Internal Error\"");
  return *(uint64_t *)((char *)self + 4) < tp.tv_nsec + 1000000000LL * tp.tv_sec;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequest::Construct  (binary VA: 0x123a630)
// Original: chatv2::Requests::IRequest::IRequest
// ----------------------------------------------------------------------------
chatv2::Requests::IRequest::Self * chatv2::Requests::IRequest::Construct(chatv2::Requests::IRequest::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092248);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequest::SetNextExecutionTime  (binary VA: 0x123a660)
// Original: chatv2::Requests::IRequest::SetNextExecutionTime
// ----------------------------------------------------------------------------
int chatv2::Requests::IRequest::SetNextExecutionTime(chatv2::Requests::IRequest::Self *self)
{
  unsigned int v1;
  int64_t v2; // rax
  typedef unsigned int _g4_t_v4;
  typedef struct timespec _g4_t_tp;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_tp)) > _g4_s1 ? (16u + sizeof(_g4_t_tp)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v6)) > _g4_s2 ? (24u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_tp &tp = *reinterpret_cast<_g4_t_tp *>(_g4_sf + 16u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);

  v1 = *((uint32_t *)self + 3) + 1;
  *((uint32_t *)self + 3) = v1;
  if ( v1 > 3 )
    v1 = 3;
  v4 = chatv2::Utils::RetryConfiguration::BACKOFFS[v1 - 1];
  if ( clock_gettime(1, &tp) != 0 )
    __assert2(
      "../../../../../lib/boost/chrono/detail/inlined/posix/chrono.hpp",
      79,
      "static boost::chrono::steady_clock::time_point boost::chrono::steady_clock::now()",
      "0 && \"Boost::Chrono - Internal Error\"");
  LODWORD(v2) = (uint32_t)(uintptr_t)((char *)self + 4);
  if ( &v6 != (int *)((char *)self + 4) )
  {
    v2 = 1000000000LL * v4 + tp.tv_nsec + 1000000000LL * tp.tv_sec;
    *(uint64_t *)((char *)self + 4) = v2;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::GetChatServiceName  (binary VA: 0x123a810)
// Original: chatv2::Requests::ArionRequestFactory::GetChatServiceName
// ----------------------------------------------------------------------------
chatv2::Requests::ArionRequestFactory::Self * chatv2::Requests::ArionRequestFactory::GetChatServiceName(chatv2::Requests::ArionRequestFactory::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), "groupchat", (int)(uintptr_t)(&v2));
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed  (binary VA: 0x123aaf0)
// Original: chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed(int a1, chatv2::Core::ArionChannel::Self **a2, uint32_t *a3)
{
  chatv2::Core::ArionChannel::Self *v3;
  chatv2::Core::ArionChannel::Self *v4;

  if ( *a2 != nullptr && (sub_18F81E0() != (int *)(intptr_t)(a3[1]) || *a3 != 125) )
  {
    v3 = *a2;
    if ( *a2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v3 = *a2;
    }
    chatv2::Core::ArionChannel::StopListenClient(v3);
    v4 = *a2;
    if ( *a2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v4 = *a2;
    }
    chatv2::Core::ArionChannel::StartListenClient(v4);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed  (binary VA: 0x123af90)
// Original: chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed(int a1, chatv2::Core::ArionChannel::Self **a2, uint32_t *a3)
{
  void *v3;
  void *v4;
  chatv2::Core::ArionChannel::Self *v5;
  chatv2::Core::ArionChannel::Self *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8[3];
  typedef int _g4_t_v9;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  if ( *a2 != nullptr && (sub_18F81E0() != (int *)(intptr_t)(a3[1]) || *a3 != 125) )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), "Comand client failed read/write\n", (int)(uintptr_t)(&v7) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "ChatLib", (int)(uintptr_t)(&v7));
    chatv2::Utils::Log(
      3,
      0,
      &v9,
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
      154,
      v8);
    v3 = (void *)(v9 - 12);
    if ( (uint32_t *)(v9 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v8[0] - 12);
    if ( (uint32_t *)(v8[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = *a2;
    if ( *a2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v5 = *a2;
    }
    chatv2::Core::ArionChannel::StopCommandClient(v5);
    v6 = *a2;
    if ( *a2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v6 = *a2;
    }
    chatv2::Core::ArionChannel::StartCommandClient(v6);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::CreateChangeNicknameRequest  (binary VA: 0x123b280)
// Original: chatv2::Requests::ArionRequestFactory::CreateChangeNicknameRequest
// ----------------------------------------------------------------------------
chatv2::Requests::IRequest::Self ** chatv2::Requests::ArionRequestFactory::CreateChangeNicknameRequest(chatv2::Requests::IRequest::Self **a1, int a2, int a3, int a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9)
{
  int v9;
  int v10;
  uint8_t *v11;
  chatv2::Requests::IRequest::Self *v12;
  volatile int32_t *v13;
  bool v14;
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
  chatv2::Requests::IRequest::Self *v29;

  v9 = opNew(0x30u);
  *(uint32_t *)(v9 + 4) = 1;
  *(uint32_t *)(v9 + 8) = 1;
  *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2092428);
  v10 = *(uint32_t *)v9;
  *(uint32_t *)(v9 + 12) = 0;
  *(uint8_t *)(v9 + 16) = 0;
  v11 = (uint8_t *)(*(int (**)(int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, int, int, int))(v10 + 20))(
                   v9,
                   v16,
                   v17,
                   v18,
                   v19,
                   v20,
                   v21,
                   v22,
                   v23,
                   v24,
                   v25,
                   v26,
                   0,
                   v9,
                   v27,
                   v28);
  v12 = (chatv2::Requests::IRequest::Self *)(v11 + 4);
  if ( v11 != (uint8_t *)-4 )
  {
    chatv2::Requests::ChangeNicknameRequest::Construct(v12, *(uint32_t *)(a2 + 84), a3);
    v12 = (chatv2::Requests::IRequest::Self *)(v11 + 4);
  }
  *v11 = 1;
  v29 = v12;
  a5 = a9;
  if ( a9 != nullptr )
    __sync_add_and_fetch(a9 + 1, 1);
  boost::detail::shared_count::Destroy(&a9);
  *a1 = v29;
  v13 = a5;
  v14 = a5 == nullptr;
  a1[1] = (chatv2::Requests::IRequest::Self *)a5;
  if ( !v14 )
    __sync_add_and_fetch(v13 + 1, 1);
  boost::detail::shared_count::Destroy(&a5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::CreateLeaveChannelRequest  (binary VA: 0x123b360)
// Original: chatv2::Requests::ArionRequestFactory::CreateLeaveChannelRequest
// ----------------------------------------------------------------------------
int * chatv2::Requests::ArionRequestFactory::CreateLeaveChannelRequest(int *a1, int a2, int a3, int a4, volatile int32_t *a5, int a6, int a7, int a8, volatile int32_t *a9)
{
  int v9;
  int v10;
  uint8_t *v11;
  chatv2::Requests::IRequest::Self *v12;
  volatile int32_t *v13;
  bool v14;
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

  v9 = opNew(0x38u);
  *(uint32_t *)(v9 + 4) = 1;
  *(uint32_t *)(v9 + 8) = 1;
  *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2092448);
  v10 = *(uint32_t *)v9;
  *(uint32_t *)(v9 + 12) = 0;
  *(uint8_t *)(v9 + 16) = 0;
  v11 = (uint8_t *)(*(int (**)(int, int, int, int, int, int, int, int, int, int, int, int, uint32_t, int, int, int))(v10 + 20))(
                   v9,
                   v16,
                   v17,
                   v18,
                   v19,
                   v20,
                   v21,
                   v22,
                   v23,
                   v24,
                   v25,
                   v26,
                   0,
                   v9,
                   v27,
                   v28);
  v12 = (chatv2::Requests::IRequest::Self *)(v11 + 4);
  if ( v11 != (uint8_t *)-4 )
  {
    chatv2::Requests::LeaveChannelRequest::Construct(v12, *(uint32_t *)(a2 + 84), a3, a4);
    v12 = (chatv2::Requests::IRequest::Self *)(v11 + 4);
  }
  *v11 = 1;
  v29 = (int)(uintptr_t)(v12);
  a5 = a9;
  if ( a9 != nullptr )
    __sync_add_and_fetch(a9 + 1, 1);
  boost::detail::shared_count::Destroy(&a9);
  *a1 = v29;
  v13 = a5;
  v14 = a5 == nullptr;
  a1[1] = (int)(uintptr_t)(a5);
  if ( !v14 )
    __sync_add_and_fetch(v13 + 1, 1);
  boost::detail::shared_count::Destroy(&a5);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed  (binary VA: 0x123b450)
// Original: chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed(uint32_t *a1, chatv2::Core::ArionChannel::Self **a2, uint32_t *a3)
{
  chatv2::Core::ArionChannel::Self **v3;
  uint32_t *v4;
  chatv2::Core::ArionChannel::Self *v5;
  chatv2::Core::ArionChannel::Self *v6;
  chatv2::Core::ArionChannel::Self *v7;
  chatv2::Core::ArionChannel::Self *v8;
  int v9;
  int v10;
  void (*v11)(int, int *);
  uint32_t *v12;
  void (*v13)(int *);
  int v14;
  volatile int32_t *v15;
  int v16;
  volatile int32_t *v17;
  int v18;
  volatile int32_t *v19;
  uint8_t v20[16];
  uint32_t *v21;

  v21 = (uint32_t *)(&a1);
  v3 = a2;
  v4 = a1;
  if ( *a2 != nullptr )
  {
    v12 = a3;
    if ( sub_18F81E0() != (int *)(intptr_t)(v12[1]) || *v12 != 125 )
    {
      v13 = *(void (**)(int *))(*v4 + 4);
      v5 = *v3;
      if ( *v3 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "ore::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
          "px != 0");
        v5 = *v3;
      }
      chatv2::Core::ArionChannel::GetType(v5);
      v6 = *v3;
      if ( *v3 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "ore::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
          "px != 0");
        v6 = *v3;
      }
      chatv2::Core::ArionChannel::GetLanguage(v6);
      v7 = *v3;
      if ( *v3 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "ore::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
          "px != 0");
        v7 = *v3;
      }
      chatv2::Core::ArionChannel::GetReconnectKey(v7);
      v8 = *v3;
      if ( *v3 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "ore::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
          "px != 0");
        v8 = *v3;
      }
      chatv2::Core::ArionChannel::GetName(v8);
      v13(&v14);
      v9 = v4[21];
      if ( *(uint32_t *)(v9 + 4) != 0
        && boost::function1<void,boost::shared_ptr<chatv2::Requests::IRequest::Self>>::dummy::nonnull != nullptr )
      {
        v16 = v14;
        v17 = v15;
        if ( v15 != nullptr )
        {
          __sync_add_and_fetch(v15 + 1, 1);
          v9 = v4[21];
        }
        v10 = *(uint32_t *)(v9 + 4);
        if ( v10 == 0 )
        {
          sub_1243080(v20);
          std::terminate();
        }
        v11 = *(void (**)(int, int *))((v10 & 0xFFFFFFFE) + 4);
        v18 = v16;
        v19 = v17;
        if ( v17 != nullptr )
          __sync_add_and_fetch(v17 + 1, 1);
        v11(v9 + 8, &v18);
        boost::detail::shared_count::Destroy(&v19);
        boost::detail::shared_count::Destroy(&v17);
      }
      boost::detail::shared_count::Destroy(&v15);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::Destroy  (binary VA: 0x123bce0)
// Original: chatv2::Requests::ArionRequestFactory::~ArionRequestFactory
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::Destroy(chatv2::Requests::ArionRequestFactory::Self *self)
{
  pthread_mutex_t *v1;
  unsigned int nusers;
  pthread_cond_t *v3;
  unsigned int count;
  int v5;
  volatile int32_t *v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint32_t *v11;
  uint32_t *v12;
  uint32_t *v13;
  uint32_t *v14;
  char *v15;
  int v16;
  int v17;
  void *j;
  uint32_t *v19;
  int v20;
  void *i;
  uint32_t *v22;
  int fd;
  char *v24;
  int *v25;
  struct epoll_event event;
  char v27[48];

  v1 = *((pthread_mutex_t **)self + 14);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092268);
  pthread_mutex_lock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (1))));
  nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (2))));
  for ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (2))))[12] = 1; nusers != 0; nusers = G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (2)))) )
  {
    G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (2)))) = *(uint32_t *)(nusers + 20);
    *(uint32_t *)(nusers + 20) = 0;
    v3 = *(pthread_cond_t **)(nusers + 4);
    ((uint8_t *)(v3))[4] = 1;
    pthread_cond_signal(v3);
  }
  if ( G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (1))))[20] == 0 )
  {
    count = G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (1))));
    if ( count != 0 )
    {
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (1))))[20] = 1;
      event.data.u64 = count + 28;
      fd = *(uint32_t *)(count + 28);
      v5 = *(uint32_t *)(count + 36);
      event.events = 0x80000009;
      epoll_ctl(v5, 3, fd, &event);
    }
  }
  pthread_mutex_unlock(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v1) + (24 * (1))));
  if ( (uint8_t)boost::thread::joinable((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 76)) != 0 )
  {
    v16 = boost::thread::native_handle((boost::thread::Self *)((char *)self + 76));
    if ( v16 == pthread_self() )
    {
      boost::thread_resource_error::Construct(
        (boost::thread_resource_error *)v27,
        35,
        "boost thread: trying joining itself");
      std::terminate();
    }
    boost::thread::join_noexcept((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 76));
  }
  chatv2::Connectivity::HTTPSClient::Destroy((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 952));
  chatv2::Connectivity::HTTPSClient::Destroy((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 520));
  chatv2::Connectivity::HTTPSClient::Destroy((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 88));
  boost::thread::detach((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 76));
  boost::detail::shared_count::Destroy((volatile int32_t **)self + 20);
  v6 = *((volatile int32_t **)self + 18);
  if ( __sync_fetch_and_add(v6 + 12, 0xFFFFFFFF) == 1 )
    boost::asio::detail::task_io_service::stop((boost::asio::detail::task_io_service *)v6);
  v7 = *((uint32_t *)self + 15);
  if ( v7 != 0 )
  {
    v8 = *(uint32_t *)(v7 + 112);
    if ( v8 != 0 )
    {
      G4_VCALL<void>(v8, 4);
      *(uint32_t *)(*((uint32_t *)self + 15) + 112) = 0;
      v7 = *((uint32_t *)self + 15);
    }
    if ( SSL_CTX_get_ex_data(v7, 0) != 0 )
    {
      v9 = SSL_CTX_get_ex_data(*((uint32_t *)self + 15), 0);
      if ( v9 != 0 )
        G4_VCALL<void>(v9, 4);
      SSL_CTX_set_ex_data(*((uint32_t *)self + 15), 0, 0);
    }
    SSL_CTX_free(*((void **)self + 15));
  }
  boost::detail::shared_count::Destroy((volatile int32_t **)self + 17);
  v10 = *((uint32_t *)self + 13);
  if ( v10 != 0 )
  {
    v11 = *(uint32_t **)(v10 + 12);
    if ( v11 != nullptr )
    {
      do
      {
        G4_VCALL<void>(v11, 8);
        v11 = (uint32_t *)v11[4];
      }
      while ( v11 != nullptr );
      v12 = *(uint32_t **)(v10 + 12);
      if ( v12 != nullptr )
      {
        while ( 1 )
        {
          v13 = (uint32_t *)v12[4];
          G4_VCALL<void>(v12, 4);
          *(uint32_t *)(v10 + 12) = (uint32_t)(uintptr_t)(v13);
          if ( v13 == nullptr )
            break;
          v12 = v13;
        }
      }
    }
    pthread_mutex_destroy((pthread_mutex_t *)(v10 + 4));
    opDelete((void *)v10);
  }
  v14 = *((uint32_t **)self + 12);
  if ( v14 != nullptr )
  {
    if ( *((uint32_t *)self + 9) != 0 )
    {
      v20 = v14[*((uint32_t *)self + 8)];
      v25 = (int *)(&v14[*((uint32_t *)self + 8)]);
      if ( v20 != 0 )
        goto LABEL_45;
      __assert2(
        "../../../../../lib/boost/unordered/detail/table.hpp",
        529,
        "std::size_t boost::unordered::detail::table<Types>::delete_nodes(boost::unordered::detail::table<Types>::link_po"
        "inter, boost::unordered::detail::table<Types>::link_pointer) [with Types = boost::unordered::detail::map<std::al"
        "locator<std::pair<const std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_s"
        "tring<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::basic_string<char> >, std::equal_to"
        "<std::basic_string<char> > >, std::size_t = unsigned int, boost::unordered::detail::table<Types>::link_pointer ="
        " boost::unordered::detail::ptr_bucket*]",
        "prev->next_ != end");
      v20 = *v25;
      if ( *v25 != 0 )
        goto LABEL_45;
      for ( i = nullptr; ; i = (void *)(v20 - 12) )
      {
        *v25 = *((uint32_t *)i + 3);
        boost::detail::shared_count::Destroy((volatile int32_t **)i + 2);
        v22 = (uint32_t *)(*(uint32_t *)i - 12);
        if ( v22 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)i - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v22);
        }
        opDelete(i);
        --*((uint32_t *)self + 9);
        v20 = *v25;
        if ( *v25 == 0 )
          break;
LABEL_45:
        ;
      }
      v14 = *((uint32_t **)self + 12);
      if ( v14 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/unordered/detail/table.hpp",
          234,
          "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std:"
          ":size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<ch"
          "ar>, boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Cor"
          "e::ArionChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::uno"
          "rdered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
          "buckets_");
        v14 = *((uint32_t **)self + 12);
      }
    }
    opDelete(v14);
    *((uint32_t *)self + 12) = 0;
    *((uint32_t *)self + 11) = 0;
  }
  if ( *((uint32_t *)self + 9) != 0 )
    __assert2(
      "../../../../../lib/boost/unordered/detail/table.hpp",
      559,
      "void boost::unordered::detail::table<Types>::delete_buckets() [with Types = boost::unordered::detail::map<std::all"
      "ocator<std::pair<const std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_stri"
      "ng<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::basic_string<char> >, std::equal_to<std:"
      ":basic_string<char> > >]",
      "!size_");
  v15 = *((char **)self + 6);
  if ( v15 != nullptr )
  {
    if ( *((uint32_t *)self + 3) != 0 )
    {
      v24 = &v15[4 * *((uint32_t *)self + 2)];
      v17 = *(uint32_t *)v24;
      if ( *(uint32_t *)v24 != 0 )
        goto LABEL_39;
      __assert2(
        "../../../../../lib/boost/unordered/detail/table.hpp",
        529,
        "std::size_t boost::unordered::detail::table<Types>::delete_nodes(boost::unordered::detail::table<Types>::link_po"
        "inter, boost::unordered::detail::table<Types>::link_pointer) [with Types = boost::unordered::detail::map<std::al"
        "locator<std::pair<const std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_s"
        "tring<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::basic_string<char> >, std::equal_to"
        "<std::basic_string<char> > >, std::size_t = unsigned int, boost::unordered::detail::table<Types>::link_pointer ="
        " boost::unordered::detail::ptr_bucket*]",
        "prev->next_ != end");
      v17 = *(uint32_t *)v24;
      if ( *(uint32_t *)v24 != 0 )
        goto LABEL_39;
      for ( j = nullptr; ; j = (void *)(v17 - 12) )
      {
        *(uint32_t *)v24 = *((uint32_t *)j + 3);
        boost::detail::shared_count::Destroy((volatile int32_t **)j + 2);
        v19 = (uint32_t *)(*(uint32_t *)j - 12);
        if ( v19 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)j - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v19);
        }
        opDelete(j);
        --*((uint32_t *)self + 3);
        v17 = *(uint32_t *)v24;
        if ( *(uint32_t *)v24 == 0 )
          break;
LABEL_39:
        ;
      }
      v15 = *((char **)self + 6);
      if ( v15 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/unordered/detail/table.hpp",
          234,
          "boost::unordered::detail::table<Types>::bucket_pointer boost::unordered::detail::table<Types>::get_bucket(std:"
          ":size_t) const [with Types = boost::unordered::detail::map<std::allocator<std::pair<const std::basic_string<ch"
          "ar>, boost::shared_ptr<chatv2::Core::ArionChannel> > >, std::basic_string<char>, boost::shared_ptr<chatv2::Cor"
          "e::ArionChannel>, boost::hash<std::basic_string<char> >, std::equal_to<std::basic_string<char> > >, boost::uno"
          "rdered::detail::table<Types>::bucket_pointer = boost::unordered::detail::ptr_bucket*, std::size_t = unsigned int]",
          "buckets_");
        v15 = *((char **)self + 6);
      }
    }
    opDelete(v15);
    *((uint32_t *)self + 6) = 0;
    *((uint32_t *)self + 5) = 0;
  }
  if ( *((uint32_t *)self + 3) != 0 )
    __assert2(
      "../../../../../lib/boost/unordered/detail/table.hpp",
      559,
      "void boost::unordered::detail::table<Types>::delete_buckets() [with Types = boost::unordered::detail::map<std::all"
      "ocator<std::pair<const std::basic_string<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self> > >, std::basic_stri"
      "ng<char>, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::basic_string<char> >, std::equal_to<std:"
      ":basic_string<char> > >]",
      "!size_");
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20922A8);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::Destroy_ea123ca00  (binary VA: 0x123ca00)
// Original: chatv2::Requests::ArionRequestFactory::~ArionRequestFactory
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::Destroy_ea123ca00(chatv2::Requests::ArionRequestFactory::Self *self)
{
  chatv2::Requests::ArionRequestFactory::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::StartSubscribeClient  (binary VA: 0x123ccf0)
// Original: chatv2::Requests::ArionRequestFactory::StartSubscribeClient
// ----------------------------------------------------------------------------
int chatv2::Requests::ArionRequestFactory::StartSubscribeClient(chatv2::Requests::ArionRequestFactory::Self *self)
{
  char *v1;
  int Instance;
  size_t v3;
  char v4;
  int v5;
  size_t v6;
  uint8_t *v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  size_t v15;
  char v16;
  void *v17;
  void *v18;
  void *v19;
  int result;
  void *v21;
  int v22;
  int v23;
  typedef gaia::Gaia::Self *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char _g4_t_v26;
  typedef char _g4_t_v27;
  typedef size_t _g4_t_v28;
  typedef int _g4_t_v29;
  typedef size_t _g4_t_v30;
  typedef int _g4_t_v31;
  typedef size_t _g4_t_v32;
  typedef const char *_g4_t_v33;
  typedef size_t _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36[4];
  typedef uint32_t _g4_t_v37[2];
  typedef int _g4_t_v38;
  typedef int _g4_t_v39[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v26)) > _g4_s2 ? (44u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v27)) > _g4_s3 ? (44u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (48u + sizeof(_g4_t_v28)) > _g4_s4 ? (48u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (52u + sizeof(_g4_t_v29)) > _g4_s5 ? (52u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v30)) > _g4_s6 ? (56u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v31)) > _g4_s7 ? (60u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v32)) > _g4_s8 ? (60u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v33)) > _g4_s9 ? (64u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v34)) > _g4_s10 ? (64u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (79u + sizeof(_g4_t_v35)) > _g4_s11 ? (79u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v36)) > _g4_s12 ? (84u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (100u + sizeof(_g4_t_v37)) > _g4_s13 ? (100u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (108u + sizeof(_g4_t_v38)) > _g4_s14 ? (108u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (112u + sizeof(_g4_t_v39)) > _g4_s15 ? (112u + sizeof(_g4_t_v39)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 48u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 52u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 56u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 60u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 60u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 64u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 79u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 84u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 100u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 108u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 112u);

  v36[0] = (int)(uintptr_t)(&dword_213B814);
  v1 = (char *)chatv2::Requests::SERVICE_NAME;
  Instance = gaia::Gaia::GetInstance(v24);
  v25 = v1;
  v3 = 0;
  gaia::Gaia::GetServiceUrl(Instance, v25, (int)(uintptr_t)(v36), 0, 0, 0);
  v39[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v39), 0x80u, 0);
  v29 = 0;
  v4 = aStartSubscribe /* "Start subscribe client, address: {0}\n" */[0];
  v33 = "Start subscribe client, address: {0}\n";
  while ( 1 )
  {
    v7 = (uint8_t *)(v33 + 1);
    if ( v4 != 123 )
    {
      v5 = v39[0];
      v6 = v3 + 1;
      if ( v3 + 1 > *(uint32_t *)(v39[0] - 12) )
      {
        v26 = v4;
        sub_1939D80((int)(uintptr_t)(v39), v3 + 65, 0);
        v5 = v39[0];
        v6 = v3 + 1;
        v4 = v26;
      }
      if ( *(int *)(v5 - 4) >= 0 )
      {
        v27 = v4;
        v28 = v6;
        sub_19397C0(v39);
        v5 = v39[0];
        v6 = v28;
        v4 = v27;
      }
      *(uint8_t *)(v5 + v3) = v4;
      ++v33;
      v3 = v6;
      goto LABEL_7;
    }
    v8 = v33[1];
    if ( v8 == 123 )
    {
      v22 = v39[0];
      if ( v3 + 2 > *(uint32_t *)(v39[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v39), v3 + 66, 0);
        v22 = v39[0];
        v32 = v3 + 1;
        if ( *(int *)(v39[0] - 4) < 0 )
          goto LABEL_41;
      }
      else
      {
        v32 = v3 + 1;
        if ( *(int *)(v39[0] - 4) < 0 )
        {
LABEL_41:
          *(uint8_t *)(v22 + v3) = 123;
          v23 = v39[0];
          if ( *(int *)(v39[0] - 4) >= 0 )
          {
            sub_19397C0(v39);
            v23 = v39[0];
          }
          v33 += 2;
          v3 += 2;
          *(uint8_t *)(v23 + v32) = 123;
          goto LABEL_7;
        }
      }
      sub_19397C0(v39);
      v22 = v39[0];
      goto LABEL_41;
    }
    if ( v8 == 0 )
      goto LABEL_32;
    v34 = v3;
    v9 = 1;
    v10 = 0;
    while ( 1 )
    {
      v8 = *v7;
      if ( (uint8_t)(*v7 - 48) > 9u )
        break;
      v11 = v9 * v10;
      ++v7;
      v9 *= 10;
      v10 = v11 + v8 - 48;
      if ( *v7 == 0 )
      {
        v12 = v10;
        v8 = 0;
        v3 = v34;
        goto LABEL_15;
      }
    }
    v12 = v10;
    v3 = v34;
    if ( v9 == 1 )
LABEL_32:
      v12 = v29++;
    if ( v8 == 58 )
    {
      v8 = v7[1];
      if ( v8 == 120 || v8 == 88 )
      {
        v8 = v7[2];
        v33 = (const char *)(v7 + 3);
      }
      else
      {
        v33 = (const char *)(v7 + 2);
      }
    }
    else
    {
LABEL_15:
      v33 = (const char *)(v7 + 1);
    }
    if ( v8 != 125 )
      break;
    if ( v12 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v39), v3, 0);
LABEL_7:
      v4 = *v33;
      if ( *v33 == 0 )
        goto LABEL_26;
    }
    else
    {
      v31 = *(uint32_t *)(v36[0] - 12);
      if ( v3 + v31 > *(uint32_t *)(v39[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v39), v3 + v31 + 64, 0);
        v31 = *(uint32_t *)(v36[0] - 12);
      }
      if ( v31 == 0 )
        goto LABEL_7;
      v13 = 0;
      v30 = v3;
      do
      {
        v14 = v39[0];
        v15 = v13 + v30;
        if ( *(int *)(v39[0] - 4) >= 0 )
        {
          sub_19397C0(v39);
          v14 = v39[0];
        }
        v16 = *(uint8_t *)(v36[0] + v13++);
        *(uint8_t *)(v14 + v15) = v16;
      }
      while ( v13 != v31 );
      v3 = v13 + v30;
      v4 = *v33;
      if ( *v33 == 0 )
        goto LABEL_26;
    }
  }
  sub_1939D80((int)(uintptr_t)(v39), v3, 0);
LABEL_26:
  sub_1939D80((int)(uintptr_t)(v39), v3, 0);
  g4_std::string::construct_copy(v37, v39);
  v17 = (void *)(v39[0] - 12);
  if ( (uint32_t *)(v39[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v38), "ChatLib", (int)(uintptr_t)(&v35));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v38),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
    56,
    (int)(uintptr_t)(v37));
  v18 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v37[0] - 12);
  if ( (uint32_t *)(v37[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  chatv2::Connectivity::TCPClient::Start((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 88), (int)(uintptr_t)(v36));
  result = v36[0];
  v21 = (void *)(v36[0] - 12);
  if ( (uint32_t *)(v36[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v21)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::ChannelClientRestart  (binary VA: 0x123d1e0)
// Original: chatv2::Requests::ArionRequestFactory::ChannelClientRestart
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::ChannelClientRestart(uint32_t *a1, chatv2::Core::ArionChannel::Self **a2)
{
  chatv2::Core::ArionChannel::Self **v2;
  uint32_t *v3;
  void *v4;
  void *v5;
  chatv2::Core::ArionChannel::Self *v6;
  chatv2::Core::ArionChannel::Self *v7;
  chatv2::Core::ArionChannel::Self *v8;
  chatv2::Core::ArionChannel::Self *v9;
  chatv2::Core::ArionChannel::Self *v10;
  int v11;
  int v12;
  void (*v13)(int, int *);
  void (*v14)(int *);
  int v15;
  int v16[3];
  int v17;
  int v18;
  volatile int32_t *v19;
  int v20;
  volatile int32_t *v21;
  int v22;
  volatile int32_t *v23;
  uint32_t v24[8];

  v24[4] = (uint32_t)(uintptr_t)(&a1);
  v2 = a2;
  v3 = a1;
  if ( *a2 != nullptr )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), " Channel client restart\n", (int)(uintptr_t)(&v15) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "ChatLib", (int)(uintptr_t)(&v15));
    chatv2::Utils::Log(
      3u,
      0,
      (int)(uintptr_t)(&v17),
      "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
      277,
      (int)(uintptr_t)(v16));
    v4 = (void *)(v17 - 12);
    if ( (uint32_t *)(v17 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v16[0] - 12);
    if ( (uint32_t *)(v16[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = *v2;
    if ( *v2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v6 = *v2;
    }
    chatv2::Core::ArionChannel::Disconnect(v6);
    v14 = *(void (**)(int *))(*v3 + 4);
    v7 = *v2;
    if ( *v2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v7 = *v2;
    }
    chatv2::Core::ArionChannel::GetType(v7);
    v8 = *v2;
    if ( *v2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v8 = *v2;
    }
    chatv2::Core::ArionChannel::GetLanguage(v8);
    v9 = *v2;
    if ( *v2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v9 = *v2;
    }
    chatv2::Core::ArionChannel::GetReconnectKey(v9);
    v10 = *v2;
    if ( *v2 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v10 = *v2;
    }
    chatv2::Core::ArionChannel::GetName(v10);
    v14(&v18);
    v11 = v3[21];
    if ( *(uint32_t *)(v11 + 4) != 0
      && boost::function1<void,boost::shared_ptr<chatv2::Requests::IRequest::Self>>::dummy::nonnull != nullptr )
    {
      v20 = v18;
      v21 = v19;
      if ( v19 != nullptr )
      {
        __sync_add_and_fetch(v19 + 1, 1);
        v11 = v3[21];
      }
      v12 = *(uint32_t *)(v11 + 4);
      if ( v12 == 0 )
      {
        sub_1243080(v24);
        std::terminate();
      }
      v13 = *(void (**)(int, int *))((v12 & 0xFFFFFFFE) + 4);
      v22 = v20;
      v23 = v21;
      if ( v21 != nullptr )
        __sync_add_and_fetch(v21 + 1, 1);
      v13(v11 + 8, &v22);
      boost::detail::shared_count::Destroy(&v23);
      boost::detail::shared_count::Destroy(&v21);
    }
    boost::detail::shared_count::Destroy(&v19);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::GetSubscribeClient  (binary VA: 0x123da10)
// Original: chatv2::Requests::ArionRequestFactory::GetSubscribeClient
// ----------------------------------------------------------------------------
char * chatv2::Requests::ArionRequestFactory::GetSubscribeClient(chatv2::Requests::ArionRequestFactory::Self *self)
{
  return (char *)self + 88;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::GetReportClient  (binary VA: 0x123da20)
// Original: chatv2::Requests::ArionRequestFactory::GetReportClient
// ----------------------------------------------------------------------------
char * chatv2::Requests::ArionRequestFactory::GetReportClient(chatv2::Requests::ArionRequestFactory::Self *self)
{
  return (char *)self + 520;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::GetInviteClient  (binary VA: 0x123da30)
// Original: chatv2::Requests::ArionRequestFactory::GetInviteClient
// ----------------------------------------------------------------------------
char * chatv2::Requests::ArionRequestFactory::GetInviteClient(chatv2::Requests::ArionRequestFactory::Self *self)
{
  return (char *)self + 952;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::SetArionExecutor  (binary VA: 0x123da40)
// Original: chatv2::Requests::ArionRequestFactory::SetArionExecutor
// ----------------------------------------------------------------------------
chatv2::Requests::ArionRequestFactory::Self * chatv2::Requests::ArionRequestFactory::SetArionExecutor(chatv2::Requests::ArionRequestFactory::Self *self, chatv2::Core::ArionExecutor::Self *a2)
{
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::GetChannel  (binary VA: 0x123da50)
// Original: chatv2::Requests::ArionRequestFactory::GetChannel
// ----------------------------------------------------------------------------
uint32_t * chatv2::Requests::ArionRequestFactory::GetChannel(uint32_t *a1, int a2, const void **a3, int a4)
{
  char *v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  volatile int32_t *v9;
  char *v11;
  int v12;
  int v13;
  bool v14;
  typedef uint32_t *_g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);

  v17 = 0;
  v18 = nullptr;
  if ( a4 != 0 )
  {
    if ( a4 != 1 )
    {
      v8 = 0;
      goto LABEL_5;
    }
    v15 = (uint32_t *)(a2 + 4);
    v11 = (char *)*a3;
    v5 = 0;
    v12 = (int)(uintptr_t)(*a3) + *((uint32_t *)*a3 - 3);
    if ( *a3 != (const void *)v12 )
    {
      do
      {
        v13 = *v11++;
        v5 ^= (v5 << 6) + (v5 >> 2) - 1640531527 + v13;
      }
      while ( v11 != (char *)v12 );
    }
  }
  else
  {
    v15 = (uint32_t *)(a2 + 28);
    v4 = (char *)*a3;
    v5 = 0;
    v6 = (int)(uintptr_t)(*a3) + *((uint32_t *)*a3 - 3);
    if ( *a3 != (const void *)v6 )
    {
      do
      {
        v7 = *v4++;
        v5 ^= (v5 << 6) + (v5 >> 2) - 1640531527 + v7;
      }
      while ( v4 != (char *)v6 );
    }
  }
  sub_123A9F0(&v16, v15, v5, a3);
  v8 = v16;
  if ( v16 == 0 )
  {
    *a1 = v17;
    v9 = v18;
    v14 = v18 == nullptr;
    a1[1] = (uint32_t)(uintptr_t)(v18);
    if ( v14 )
      goto LABEL_7;
    goto LABEL_6;
  }
LABEL_5:
  *a1 = *(uint32_t *)(v8 + 4);
  v9 = *(volatile int32_t **)(v8 + 8);
  a1[1] = (uint32_t)(uintptr_t)(v9);
  if ( v9 != nullptr )
LABEL_6:
    __sync_add_and_fetch(v9 + 1, 1);
LABEL_7:
  boost::detail::shared_count::Destroy(&v18);
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::StartInviteClient  (binary VA: 0x123db90)
// Original: chatv2::Requests::ArionRequestFactory::StartInviteClient
// ----------------------------------------------------------------------------
int chatv2::Requests::ArionRequestFactory::StartInviteClient(int a1, int a2)
{
  int v2;
  int v3;
  void *v4;
  void *v5;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[3];
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (13u + sizeof(_g4_t_v7)) > _g4_s0 ? (13u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v9)) > _g4_s2 ? (28u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 13u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);

  v9[3] = (int)(uintptr_t)(&a1);
  v2 = a2;
  v3 = a1;
  jcore::Format_std_string_char_35_std_s_ed755c(v8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), "ChatLib", (int)(uintptr_t)(&v7));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(v9),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
    71,
    (int)(uintptr_t)(v8));
  v4 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  return ((chatv2::Connectivity::TCPClient::Start((chatv2::Connectivity::IClient::Self *)(v3 + 952), v2)), (int)0);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::CreateSendInviteRequest  (binary VA: 0x123dcb0)
// Original: chatv2::Requests::ArionRequestFactory::CreateSendInviteRequest
// ----------------------------------------------------------------------------
int chatv2::Requests::ArionRequestFactory::CreateSendInviteRequest(int a1, int a2, const void **a3, int a4, int a5)
{
  int v5;
  int v6;
  chatv2::Core::ArionChannel::Self *v7;
  volatile int32_t *v8;
  int CommandHost;
  int v10;
  volatile int32_t v11;
  int v12;
  int v13;
  int v14;
  volatile int32_t *v15;
  volatile int32_t *v16;
  bool v17;
  volatile int32_t *v19;
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
  typedef const void **_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v42;
  typedef volatile int32_t *_g4_t_v43[3];
  typedef int _g4_t_v44;
  typedef volatile int32_t *_g4_t_v45[3];
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v46;
  typedef volatile int32_t *_g4_t_v47[3];
  typedef int _g4_t_v48;
  typedef volatile int32_t *_g4_t_v49[3];
  typedef int _g4_t_v50;
  typedef volatile int32_t *_g4_t_v51;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v52;
  typedef volatile int32_t *_g4_t_v53[7];
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v22)) > _g4_s2 ? (16u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v23)) > _g4_s3 ? (20u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v24)) > _g4_s4 ? (24u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v27)) > _g4_s7 ? (36u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v28)) > _g4_s8 ? (40u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v29)) > _g4_s9 ? (44u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v30)) > _g4_s10 ? (48u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v31)) > _g4_s11 ? (48u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v32)) > _g4_s12 ? (48u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v33)) > _g4_s13 ? (52u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v34)) > _g4_s14 ? (52u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (56u + sizeof(_g4_t_v35)) > _g4_s15 ? (56u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v36)) > _g4_s16 ? (56u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v37)) > _g4_s17 ? (60u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v38)) > _g4_s18 ? (60u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v39)) > _g4_s19 ? (60u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v40)) > _g4_s20 ? (64u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (64u + sizeof(_g4_t_v41)) > _g4_s21 ? (64u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (68u + sizeof(_g4_t_v42)) > _g4_s22 ? (68u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (72u + sizeof(_g4_t_v43)) > _g4_s23 ? (72u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (84u + sizeof(_g4_t_v44)) > _g4_s24 ? (84u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v45)) > _g4_s25 ? (88u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v46)) > _g4_s26 ? (100u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v47)) > _g4_s27 ? (104u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (116u + sizeof(_g4_t_v48)) > _g4_s28 ? (116u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (120u + sizeof(_g4_t_v49)) > _g4_s29 ? (120u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (132u + sizeof(_g4_t_v50)) > _g4_s30 ? (132u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (136u + sizeof(_g4_t_v51)) > _g4_s31 ? (136u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (140u + sizeof(_g4_t_v52)) > _g4_s32 ? (140u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (144u + sizeof(_g4_t_v53)) > _g4_s33 ? (144u + sizeof(_g4_t_v53)) : _g4_s33
  };
  alignas(16) uint8_t _g4_sf[_g4_s34];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 20u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 48u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 52u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 60u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 64u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 68u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 72u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 84u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 104u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 116u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 132u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 136u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 140u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 144u);

  v53[3] = &a1;
  v5 = a2;
  v6 = a4;
  v40 = a1;
  v37 = a3;
  v35 = a5;
  v43[0] = nullptr;
  chatv2::Requests::ArionRequestFactory::GetChannel((uint32_t *)(&v52), a2, a3, a4);
  v7 = v52;
  v8 = nullptr;
  v46 = v52;
  v47[0] = v53[0];
  if ( v53[0] != nullptr )
  {
    __sync_add_and_fetch(v53[0] + 1, 1);
    v7 = v46;
    v8 = v47[0];
  }
  v42 = v7;
  v46 = nullptr;
  v47[0] = v43[0];
  v43[0] = v8;
  boost::detail::shared_count::Destroy(v47);
  boost::detail::shared_count::Destroy(v53);
  if ( v42 != nullptr )
  {
    CommandHost = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetCommandHost(v42));
    chatv2::Requests::ArionRequestFactory::StartInviteClient(v5, CommandHost);
  }
  v48 = 0;
  v49[0] = nullptr;
  v10 = opNew(0x5Cu);
  *(uint32_t *)(v10 + 4) = 1;
  *(uint32_t *)(v10 + 8) = 1;
  *(uint32_t *)v10 = ((uint32_t)(uintptr_t)&off_2092488);
  v49[0] = (volatile int32_t *)v10;
  v11 = *(uint32_t *)v10;
  *(uint32_t *)(v10 + 12) = 0;
  *(uint8_t *)(v10 + 16) = 0;
  v12 = (*(int (**)(int, int, int, int, int, int, int, int, int, int, int, int, int, int, const void **, int, chatv2::Core::ArionChannel::Self *, volatile int32_t *, volatile int32_t *, volatile int32_t *, int, volatile int32_t *, volatile int32_t *, volatile int32_t *, chatv2::Core::ArionChannel::Self *, volatile int32_t *, volatile int32_t *, volatile int32_t *, int, volatile int32_t *, volatile int32_t *, volatile int32_t *, int, volatile int32_t *, chatv2::Core::ArionChannel::Self *, volatile int32_t *, volatile int32_t *, volatile int32_t *))(v11 + 20))(
          v10,
          v20,
          v21,
          v22,
          v23,
          v24,
          v25,
          v26,
          v27,
          v28,
          v29,
          v30,
          v33,
          v35,
          v37,
          v40,
          v42,
          v43[0],
          v43[1],
          v43[2],
          v44,
          v45[0],
          v45[1],
          v45[2],
          v46,
          v47[0],
          v47[1],
          v47[2],
          v48,
          v49[0],
          v49[1],
          v49[2],
          v50,
          v51,
          v52,
          v53[0],
          v53[1],
          v53[2]);
  v13 = v12 + 4;
  if ( v12 == -4 )
  {
    LOBYTE(G4_MEM<uintptr_t>(0xFFFFFFFC)) = 1;
  }
  else
  {
    v34 = v12;
    v31 = v12 + 4;
    chatv2::Requests::SendInviteRequest::Construct(
      (chatv2::Requests::IRequest::Self *)(v12 + 4),
      *(uint32_t *)(v5 + 84),
      v38,
      v6,
      v36);
    v14 = v34;
    v15 = *(volatile int32_t **)(v34 + 28);
    *(uint8_t *)v34 = 1;
    v13 = v31;
    if ( v15 == nullptr || *((uint32_t *)v15 + 1) == 0 )
    {
      v19 = nullptr;
      v50 = v31;
      v51 = v49[0];
      v39 = v31;
      if ( v49[0] != nullptr )
      {
        __sync_add_and_fetch(v49[0] + 1, 1);
        v19 = v51;
        v39 = v50;
        v15 = *(volatile int32_t **)(v34 + 28);
      }
      *(uint32_t *)(v34 + 24) = v39;
      if ( v15 != v19 )
      {
        if ( v19 != nullptr )
        {
          __sync_add_and_fetch(v19 + 2, 1);
          v15 = *(volatile int32_t **)(v34 + 28);
        }
        if ( v15 != nullptr && __sync_fetch_and_add(v15 + 2, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v15, 12);
          v13 = v31;
          v14 = v34;
        }
        *(uint32_t *)(v14 + 28) = (uint32_t)(uintptr_t)(v19);
      }
      v32 = v13;
      boost::detail::shared_count::Destroy(&v51);
      v13 = v32;
    }
  }
  v44 = v13;
  v45[0] = v49[0];
  if ( v49[0] != nullptr )
    __sync_add_and_fetch(v49[0] + 1, 1);
  boost::detail::shared_count::Destroy(v49);
  *(uint32_t *)v41 = v44;
  v16 = v45[0];
  v17 = v45[0] == nullptr;
  *(volatile int32_t **)(v41 + 4) = v45[0];
  if ( !v17 )
    __sync_add_and_fetch(v16 + 1, 1);
  boost::detail::shared_count::Destroy(v45);
  boost::detail::shared_count::Destroy(v43);
  return v41;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::StartReportClient  (binary VA: 0x123def0)
// Original: chatv2::Requests::ArionRequestFactory::StartReportClient
// ----------------------------------------------------------------------------
int chatv2::Requests::ArionRequestFactory::StartReportClient(chatv2::Requests::ArionRequestFactory::Self *self)
{
  void *v1;
  void *v2;
  int result;
  void *v4;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v5;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[2];
  typedef int _g4_t_v8;
  typedef int _g4_t_v9[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v7)) > _g4_s2 ? (32u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v8)) > _g4_s3 ? (40u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v9)) > _g4_s4 ? (44u + sizeof(_g4_t_v9)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 40u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 44u);

  v9[3] = (int)(uintptr_t)(&self);
  v5 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "cmt.gameloft.com:443", (int)(uintptr_t)(&v6));
  jcore::Format_std_string_char_35_std_s_ed755c(v7);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v9), "ChatLib", (int)(uintptr_t)(&v6) + 1);
  chatv2::Utils::Log(
    3,
    0,
    v9,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
    65,
    v7);
  v1 = (void *)(v9[0] - 12);
  if ( (uint32_t *)(v9[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  chatv2::Connectivity::TCPClient::Start((chatv2::Requests::ArionRequestFactory::Self *)((char *)v5 + 520), (int)(uintptr_t)(&v8));
  result = v8;
  v4 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v4)), (int)0);
  }
  return result;
}



// ============================================================================
// Address:   0x123e050 (size: 597 bytes)
// Symbol:    _ZN6chatv28Requests19ArionRequestFactory19CreateReportRequestERKSsNS_4Core11ChannelTypeERKNS4_9ArionUserENS4_10ReportTypeES3_RKSt6vectorIN5boost10shared_ptrINS_9Responses14ClientResponseEEESaISF_EE
// Demangled: chatv2::Requests::ArionRequestFactory::CreateReportRequest(std::string const&,chatv2::Core::ChannelType,chatv2::Core::ArionUser const&,chatv2::Core::ReportType,std::string const&,std::vector<boost::shared_ptr<chatv2::Responses::ClientResponse>,std::allocator<boost::shared_ptr<chatv2::Responses::ClientResponse>>> const&)
// ============================================================================


// ============================================================================
// Address:   0x123e2b0 (size: 2501 bytes)
// Symbol:    _ZN6chatv28Requests19ArionRequestFactory11SetHandlersEv
// Demangled: chatv2::Requests::ArionRequestFactory::SetHandlers(void)
// ============================================================================
int (*chatv2::Requests::ArionRequestFactory::SetHandlers(
        chatv2::Requests::ArionRequestFactory::Self **self))(uint32_t *, uint32_t *, int)
{
  char v1;
  unsigned int v2;
  int v3;
  unsigned int v4;
  char v5;
  unsigned int v6;
  int v7;
  unsigned int v8;
  int (*result)(uint32_t *, uint32_t *, int);
  void (*v10)(uint32_t *, uint32_t *, int);
  void (*v11)(uint32_t *, uint32_t *, int);
  void (*v12)(uint32_t *, uint32_t *, int);
  void (*v13)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int);
  void (*v14)(uint32_t *, uint32_t *, int);
  void (*v15)(uint32_t *, uint32_t *, int);
  void (*v16)(uint32_t *, uint32_t *, int);
  void (*v17)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int);
  int v18;
  unsigned int v19;
  void (*v20)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int);
  int v21;
  unsigned int v22;
  void (*v23)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int);
  void (*v24)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int);
  void (*v25)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int);
  typedef char **_g4_t_v26;
  typedef char **_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v29;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v30;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v31;
  typedef unsigned int _g4_t_v32;
  typedef uint32_t _g4_t_v33[3];
  typedef unsigned int _g4_t_v34;
  typedef uint32_t _g4_t_v35[3];
  typedef unsigned int _g4_t_v36;
  typedef uint32_t _g4_t_v37[3];
  typedef char *_g4_t_v38;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v39;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v40;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v41;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v42;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v43;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v44;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v45;
  typedef unsigned int _g4_t_v46;
  typedef uint32_t _g4_t_v47[3];
  typedef unsigned int _g4_t_v48;
  typedef uint32_t _g4_t_v49[3];
  typedef unsigned int _g4_t_v50;
  typedef uint32_t _g4_t_v51[3];
  typedef unsigned int _g4_t_v52;
  typedef uint32_t _g4_t_v53[6];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (12u + sizeof(_g4_t_v26)) > _g4_s0 ? (12u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v27)) > _g4_s1 ? (12u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v28)) > _g4_s2 ? (16u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v29)) > _g4_s3 ? (20u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v30)) > _g4_s4 ? (24u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v31)) > _g4_s5 ? (28u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v32)) > _g4_s6 ? (32u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v33)) > _g4_s7 ? (36u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v34)) > _g4_s8 ? (48u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v35)) > _g4_s9 ? (52u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v36)) > _g4_s10 ? (64u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v37)) > _g4_s11 ? (68u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v38)) > _g4_s12 ? (80u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v39)) > _g4_s13 ? (84u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v40)) > _g4_s14 ? (88u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (92u + sizeof(_g4_t_v41)) > _g4_s15 ? (92u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v42)) > _g4_s16 ? (96u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (100u + sizeof(_g4_t_v43)) > _g4_s17 ? (100u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v44)) > _g4_s18 ? (104u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v45)) > _g4_s19 ? (108u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (112u + sizeof(_g4_t_v46)) > _g4_s20 ? (112u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (116u + sizeof(_g4_t_v47)) > _g4_s21 ? (116u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (128u + sizeof(_g4_t_v48)) > _g4_s22 ? (128u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (132u + sizeof(_g4_t_v49)) > _g4_s23 ? (132u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v50)) > _g4_s24 ? (144u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v51)) > _g4_s25 ? (148u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (160u + sizeof(_g4_t_v52)) > _g4_s26 ? (160u + sizeof(_g4_t_v52)) : _g4_s26,
    _g4_s28 = (164u + sizeof(_g4_t_v53)) > _g4_s27 ? (164u + sizeof(_g4_t_v53)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 64u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 68u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 128u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 132u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 144u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 148u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 160u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 164u);

  v28 = nullptr;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  v26 = (char **)(self + 39);
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed;
  v1 = sub_59D630();
  v2 = 0;
  if ( v1 == 0 )
  {
    v2 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
       + 1;
    v29 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed;
    v30 = nullptr;
    v31 = (chatv2::Requests::ArionRequestFactory::Self *)self;
    v28 = (char *)&g4_fnstatic_6787f5077d
        + 1;
  }
  if ( v26 != &v28 )
  {
    v42 = nullptr;
    if ( v2 != 0 )
    {
      v42 = (chatv2::Requests::ArionRequestFactory::Self *)v2;
      if ( (v2 & 1) != 0 )
      {
        v43 = v29;
        v44 = v30;
        v45 = v31;
      }
      else
      {
        (*(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v2 & 0xFFFFFFFE))(
          &v29,
          &v43,
          1);
      }
      v28 = nullptr;
    }
    v3 = (int)(uintptr_t)(*(self + 39));
    if ( v3 != 0 )
    {
      v28 = (char *)*(self + 39);
      if ( (v3 & 1) != 0 )
      {
        v29 = *(self + 40);
        v30 = *(self + 41);
        v31 = *(self + 42);
      }
      else
      {
        (*(void (**)(char *, chatv2::Requests::ArionRequestFactory::Self **, int))(v3 & 0xFFFFFFFE))(
          (char *)self + 160,
          &v29,
          1);
      }
      *(self + 39) = nullptr;
    }
    if ( v26 == (char **)&v42 )
    {
      v19 = (unsigned int)(uintptr_t)(*(self + 39));
    }
    else
    {
      v4 = (unsigned int)(uintptr_t)(v42);
      if ( v42 != nullptr )
      {
        *(self + 39) = v42;
        if ( (v4 & 1) != 0 )
        {
          *(self + 40) = v43;
          *(self + 41) = v44;
          *(self + 42) = v45;
        }
        else
        {
          (*(void (**)(chatv2::Requests::ArionRequestFactory::Self **, char *, int))(v4 & 0xFFFFFFFE))(
            &v43,
            (char *)self + 160,
            1);
        }
        v42 = nullptr;
        v2 = (unsigned int)(uintptr_t)(v28);
        goto LABEL_17;
      }
      v18 = (int)(uintptr_t)(*(self + 39));
      if ( v18 == 0 )
      {
LABEL_97:
        v2 = (unsigned int)(uintptr_t)(v28);
        goto LABEL_17;
      }
      v19 = 0;
      if ( (v18 & 1) == 0 )
      {
        v25 = *(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v18 & 0xFFFFFFFE);
        if ( v25 != nullptr )
        {
          v25(self + 40, self + 40, 2);
          v19 = (unsigned int)(uintptr_t)(v42);
        }
      }
      *(self + 39) = nullptr;
    }
    if ( v19 != 0 && (v19 & 1) == 0 )
    {
      v20 = *(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v19 & 0xFFFFFFFE);
      if ( v20 != nullptr )
        v20(&v43, &v43, 2);
    }
    goto LABEL_97;
  }
LABEL_17:
  if ( v2 != 0 && (v2 & 1) == 0 )
  {
    v13 = *(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v2 & 0xFFFFFFFE);
    if ( v13 != nullptr )
      v13(&v29, &v29, 2);
  }
  v32 = 0;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v33[1] = 0;
    v33[0] = chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed;
    v33[2] = (uint32_t)(uintptr_t)(self);
    v32 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
        + 1;
  }
  boost::function1<void,boost::system::error_code::Self const&>::swap(
    (boost::function1<void, boost::system::error_code::Self const&> *)&v32,
    (boost::function1<void, boost::system::error_code::Self const&> *)(self + 43));
  if ( v32 != 0 && (v32 & 1) == 0 )
  {
    v12 = *(void (**)(uint32_t *, uint32_t *, int))(v32 & 0xFFFFFFFE);
    if ( v12 != nullptr )
      v12(v33, v33, 2);
  }
  v34 = 0;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v35[1] = 0;
    v35[0] = chatv2::Requests::ArionRequestFactory::OnSubscribeClientFailed;
    v35[2] = (uint32_t)(uintptr_t)(self);
    v34 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
        + 1;
  }
  boost::function1<void,boost::system::error_code::Self const&>::swap(
    (boost::function1<void, boost::system::error_code::Self const&> *)&v34,
    (boost::function1<void, boost::system::error_code::Self const&> *)(self + 47));
  if ( v34 != 0 && (v34 & 1) == 0 )
  {
    v11 = *(void (**)(uint32_t *, uint32_t *, int))(v34 & 0xFFFFFFFE);
    if ( v11 != nullptr )
      v11(v35, v35, 2);
  }
  v36 = 0;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnReportClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v37[1] = 0;
    v37[0] = chatv2::Requests::ArionRequestFactory::OnReportClientFailed;
    v37[2] = (uint32_t)(uintptr_t)(self);
    v36 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
        + 1;
  }
  boost::function1<void,boost::system::error_code::Self const&>::swap(
    (boost::function1<void, boost::system::error_code::Self const&> *)&v36,
    (boost::function1<void, boost::system::error_code::Self const&> *)(self + 147));
  if ( v36 != 0 && (v36 & 1) == 0 )
  {
    v10 = *(void (**)(uint32_t *, uint32_t *, int))(v36 & 0xFFFFFFFE);
    if ( v10 != nullptr )
      v10(v37, v37, 2);
  }
  v27 = (char **)(self + 151);
  v38 = nullptr;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnReportClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  v5 = sub_59D630();
  v6 = 0;
  if ( v5 == 0 )
  {
    v6 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
       + 1;
    v39 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnReportClientFailed;
    v40 = nullptr;
    v41 = (chatv2::Requests::ArionRequestFactory::Self *)self;
    v38 = (char *)&g4_fnstatic_6787f5077d
        + 1;
  }
  if ( v27 != &v38 )
  {
    v42 = nullptr;
    if ( v6 != 0 )
    {
      v42 = (chatv2::Requests::ArionRequestFactory::Self *)v6;
      if ( (v6 & 1) != 0 )
      {
        v43 = v39;
        v44 = v40;
        v45 = v41;
      }
      else
      {
        (*(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v6 & 0xFFFFFFFE))(
          &v39,
          &v43,
          1);
      }
      v38 = nullptr;
    }
    v7 = (int)(uintptr_t)(*(self + 151));
    if ( v7 != 0 )
    {
      v38 = (char *)*(self + 151);
      if ( (v7 & 1) != 0 )
      {
        v39 = *(self + 152);
        v40 = *(self + 153);
        v41 = *(self + 154);
      }
      else
      {
        (*(void (**)(char *, chatv2::Requests::ArionRequestFactory::Self **, int))(v7 & 0xFFFFFFFE))(
          (char *)self + 608,
          &v39,
          1);
      }
      *(self + 151) = nullptr;
    }
    if ( v27 == (char **)&v42 )
    {
      v22 = (unsigned int)(uintptr_t)(*(self + 151));
    }
    else
    {
      v8 = (unsigned int)(uintptr_t)(v42);
      if ( v42 != nullptr )
      {
        *(self + 151) = v42;
        if ( (v8 & 1) != 0 )
        {
          *(self + 152) = v43;
          *(self + 153) = v44;
          *(self + 154) = v45;
        }
        else
        {
          (*(void (**)(chatv2::Requests::ArionRequestFactory::Self **, char *, int))(v8 & 0xFFFFFFFE))(
            &v43,
            (char *)self + 608,
            1);
        }
        v42 = nullptr;
        v6 = (unsigned int)(uintptr_t)(v38);
        goto LABEL_47;
      }
      v21 = (int)(uintptr_t)(*(self + 151));
      if ( v21 == 0 )
      {
LABEL_105:
        v6 = (unsigned int)(uintptr_t)(v38);
        goto LABEL_47;
      }
      v22 = 0;
      if ( (v21 & 1) == 0 )
      {
        v24 = *(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v21 & 0xFFFFFFFE);
        if ( v24 != nullptr )
        {
          v24(self + 152, self + 152, 2);
          v22 = (unsigned int)(uintptr_t)(v42);
        }
      }
      *(self + 151) = nullptr;
    }
    if ( v22 != 0 && (v22 & 1) == 0 )
    {
      v23 = *(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v22 & 0xFFFFFFFE);
      if ( v23 != nullptr )
        v23(&v43, &v43, 2);
    }
    goto LABEL_105;
  }
LABEL_47:
  if ( v6 != 0 && (v6 & 1) == 0 )
  {
    v17 = *(void (**)(chatv2::Requests::ArionRequestFactory::Self **, chatv2::Requests::ArionRequestFactory::Self **, int))(v6 & 0xFFFFFFFE);
    if ( v17 != nullptr )
      v17(&v39, &v39, 2);
  }
  v46 = 0;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnReportClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v47[1] = 0;
    v47[0] = chatv2::Requests::ArionRequestFactory::OnReportClientFailed;
    v47[2] = (uint32_t)(uintptr_t)(self);
    v46 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
        + 1;
  }
  boost::function1<void,boost::system::error_code::Self const&>::swap(
    (boost::function1<void, boost::system::error_code::Self const&> *)&v46,
    (boost::function1<void, boost::system::error_code::Self const&> *)(self + 155));
  if ( v46 != 0 && (v46 & 1) == 0 )
  {
    v16 = *(void (**)(uint32_t *, uint32_t *, int))(v46 & 0xFFFFFFFE);
    if ( v16 != nullptr )
      v16(v47, v47, 2);
  }
  v48 = 0;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnInviteClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v49[1] = 0;
    v49[0] = chatv2::Requests::ArionRequestFactory::OnInviteClientFailed;
    v49[2] = (uint32_t)(uintptr_t)(self);
    v48 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
        + 1;
  }
  boost::function1<void,boost::system::error_code::Self const&>::swap(
    (boost::function1<void, boost::system::error_code::Self const&> *)&v48,
    (boost::function1<void, boost::system::error_code::Self const&> *)(self + 255));
  if ( v48 != 0 && (v48 & 1) == 0 )
  {
    v15 = *(void (**)(uint32_t *, uint32_t *, int))(v48 & 0xFFFFFFFE);
    if ( v15 != nullptr )
      v15(v49, v49, 2);
  }
  v50 = 0;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnInviteClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v51[1] = 0;
    v51[0] = chatv2::Requests::ArionRequestFactory::OnInviteClientFailed;
    v51[2] = (uint32_t)(uintptr_t)(self);
    v50 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
        + 1;
  }
  boost::function1<void,boost::system::error_code::Self const&>::swap(
    (boost::function1<void, boost::system::error_code::Self const&> *)&v50,
    (boost::function1<void, boost::system::error_code::Self const&> *)(self + 259));
  if ( v50 != 0 && (v50 & 1) == 0 )
  {
    v14 = *(void (**)(uint32_t *, uint32_t *, int))(v50 & 0xFFFFFFFE);
    if ( v14 != nullptr )
      v14(v51, v51, 2);
  }
  v52 = 0;
  v42 = (chatv2::Requests::ArionRequestFactory::Self *)chatv2::Requests::ArionRequestFactory::OnInviteClientFailed;
  v43 = nullptr;
  v44 = (chatv2::Requests::ArionRequestFactory::Self *)self;
  if ( (uint8_t)sub_59D630() == 0 )
  {
    v53[1] = 0;
    v53[0] = chatv2::Requests::ArionRequestFactory::OnInviteClientFailed;
    v53[2] = (uint32_t)(uintptr_t)(self);
    v52 = (unsigned int)(uintptr_t)(&g4_fnstatic_6787f5077d)
        + 1;
  }
  boost::function1<void,boost::system::error_code::Self const&>::swap(
    (boost::function1<void, boost::system::error_code::Self const&> *)&v52,
    (boost::function1<void, boost::system::error_code::Self const&> *)(self + 263));
  result = (int (*)(uint32_t *, uint32_t *, int))v52;
  if ( v52 != 0 && (v52 & 1) == 0 )
  {
    result = *(int (**)(uint32_t *, uint32_t *, int))(v52 & 0xFFFFFFFE);
    if ( result != nullptr )
      return (int (*)(uint32_t *, uint32_t *, int))result(v53, v53, 2);
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::Start  (binary VA: 0x123ec80)
// Original: chatv2::Requests::ArionRequestFactory::Start
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::Start(chatv2::Requests::ArionRequestFactory::Self *self)
{
  chatv2::Requests::ArionRequestFactory::Self *v1;
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
  typedef uint32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef uint32_t *_g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[4];
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t _g4_t_v45[3];
  typedef uint32_t _g4_t_v46[5];
  typedef char _g4_t_v47[20];
  typedef char _g4_t_v48[20];
  typedef char _g4_t_v49[20];
  typedef char _g4_t_v50[20];
  typedef char _g4_t_v51[20];
  typedef uint32_t _g4_t_v52[11];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (0u + sizeof(_g4_t_v26)) > _g4_s0 ? (0u + sizeof(_g4_t_v26)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v27)) > _g4_s1 ? (0u + sizeof(_g4_t_v27)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v28)) > _g4_s2 ? (0u + sizeof(_g4_t_v28)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v29)) > _g4_s3 ? (4u + sizeof(_g4_t_v29)) : _g4_s3,
    _g4_s5 = (8u + sizeof(_g4_t_v30)) > _g4_s4 ? (8u + sizeof(_g4_t_v30)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v31)) > _g4_s5 ? (12u + sizeof(_g4_t_v31)) : _g4_s5,
    _g4_s7 = (31u + sizeof(_g4_t_v32)) > _g4_s6 ? (31u + sizeof(_g4_t_v32)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v33)) > _g4_s7 ? (32u + sizeof(_g4_t_v33)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v34)) > _g4_s8 ? (36u + sizeof(_g4_t_v34)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v35)) > _g4_s9 ? (40u + sizeof(_g4_t_v35)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v36)) > _g4_s10 ? (44u + sizeof(_g4_t_v36)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v37)) > _g4_s11 ? (48u + sizeof(_g4_t_v37)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v38)) > _g4_s12 ? (52u + sizeof(_g4_t_v38)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v39)) > _g4_s13 ? (56u + sizeof(_g4_t_v39)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v40)) > _g4_s14 ? (68u + sizeof(_g4_t_v40)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v41)) > _g4_s15 ? (72u + sizeof(_g4_t_v41)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v42)) > _g4_s16 ? (84u + sizeof(_g4_t_v42)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v43)) > _g4_s17 ? (88u + sizeof(_g4_t_v43)) : _g4_s17,
    _g4_s19 = (104u + sizeof(_g4_t_v44)) > _g4_s18 ? (104u + sizeof(_g4_t_v44)) : _g4_s18,
    _g4_s20 = (108u + sizeof(_g4_t_v45)) > _g4_s19 ? (108u + sizeof(_g4_t_v45)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v46)) > _g4_s20 ? (120u + sizeof(_g4_t_v46)) : _g4_s20,
    _g4_s22 = (140u + sizeof(_g4_t_v47)) > _g4_s21 ? (140u + sizeof(_g4_t_v47)) : _g4_s21,
    _g4_s23 = (160u + sizeof(_g4_t_v48)) > _g4_s22 ? (160u + sizeof(_g4_t_v48)) : _g4_s22,
    _g4_s24 = (180u + sizeof(_g4_t_v49)) > _g4_s23 ? (180u + sizeof(_g4_t_v49)) : _g4_s23,
    _g4_s25 = (200u + sizeof(_g4_t_v50)) > _g4_s24 ? (200u + sizeof(_g4_t_v50)) : _g4_s24,
    _g4_s26 = (220u + sizeof(_g4_t_v51)) > _g4_s25 ? (220u + sizeof(_g4_t_v51)) : _g4_s25,
    _g4_s27 = (240u + sizeof(_g4_t_v52)) > _g4_s26 ? (240u + sizeof(_g4_t_v52)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 8u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 31u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 36u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 40u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 56u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 72u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 84u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 88u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 120u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 140u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 160u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 180u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 200u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 220u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 240u);

  v52[7] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v34), " ArionRequestFactory start\n", (int)(uintptr_t)(&v33));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "ChatLib", (int)(uintptr_t)(&v32));
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
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  chatv2::Requests::ArionRequestFactory::SetHandlers((chatv2::Requests::ArionRequestFactory::Self **)(v1));
  chatv2::Requests::ArionRequestFactory::StartSubscribeClient(v1);
  boost::bind<unsigned int,boost::asio::io_service,boost::asio::io_service*>(v45);
  v30 = v45[0];
  v31 = v45[1];
  v29 = v45[2];
  v4 = opNew(0x80u);
  *(uint32_t *)(v4 + 4) = 0;
  *(uint32_t *)(v4 + 8) = 0;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_20A9450);
  *(uint32_t *)(v4 + 12) = 0;
  *(uint32_t *)(v4 + 16) = 0;
  *(uint32_t *)(v4 + 20) = 0;
  v5 = pthread_mutex_init((pthread_mutex_t *)(v4 + 24), nullptr);
  if ( v5 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v47,
      v5,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v6 = pthread_mutex_init((pthread_mutex_t *)(v4 + 28), nullptr);
  if ( v6 != 0 )
  {
    boost::thread_resource_error::Construct(
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
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v48,
      v25,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  v8 = pthread_mutex_init((pthread_mutex_t *)(v4 + 36), nullptr);
  if ( v8 != 0 )
  {
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v50,
      v8,
      "boost:: mutex constructor failed in pthread_mutex_init");
    std::terminate();
  }
  v9 = pthread_mutex_init((pthread_mutex_t *)(v4 + 40), nullptr);
  if ( v9 != 0 )
  {
    boost::thread_resource_error::Construct(
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
    boost::thread_resource_error::Construct(
      (boost::thread_resource_error *)v51,
      v23,
      "boost::condition_variable::condition_variable() constructor failed in pthread_cond_init");
    std::terminate();
  }
  *(uint32_t *)(v4 + 68) = v4 + 60;
  *(uint32_t *)(v4 + 72) = v4 + 60;
  *(uint32_t *)(v4 + 116) = v30;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2092320);
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
  v11 = (uint32_t *)opNew(0x10u);
  v11[1] = 1;
  v11[2] = 1;
  *v11 = ((uint32_t)(uintptr_t)&off_2092348);
  v11[3] = v4;
  v12 = v39;
  v39 = v11;
  v37 = v12;
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v37);
  v13 = *(uint32_t *)(v4 + 8);
  if ( v13 == 0 || *(uint32_t *)(v13 + 4) == 0 )
  {
    v42 = v4;
    v43[0] = (uint32_t)(uintptr_t)(v39);
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
        G4_VCALL<void>(v13, 12);
        v15 = v26;
      }
      *(uint32_t *)(v4 + 8) = v15;
    }
    boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)v43);
  }
  if ( (uint8_t)boost::thread::start_thread_noexcept((boost::thread::Self *)&v38) == 0 )
  {
    v21 = (int)(uintptr_t)(sub_18F81E0());
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v36), "boost::thread_resource_error", (int)(uintptr_t)(&v33) + 1);
    sub_19042E0(v46, &v36);
    g4_std::string::Destroy(&v36);
    v46[2] = 11;
    v46[3] = v21;
    v46[4] = (uint32_t)(uintptr_t)(&dword_213B814);
    v46[0] = ((uint32_t)(uintptr_t)&off_2049568);
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
  *((uint32_t *)v1 + 20) = (uint32_t)(uintptr_t)(v17);
  v41 = v19;
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v41);
  v20 = v38;
  v38 = 0;
  v43[3] = v20;
  v44 = v39;
  v39 = nullptr;
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v44);
  boost::thread::detach((boost::thread::Self *)&v38);
  boost::detail::shared_count::Destroy((boost::detail::shared_count::Self *)&v39);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::StopChannel  (binary VA: 0x123f310)
// Original: chatv2::Requests::ArionRequestFactory::StopChannel
// ----------------------------------------------------------------------------
void chatv2::Requests::ArionRequestFactory::StopChannel(int a1, const void **a2, int a3)
{
  const char *v3;
  char v4;
  size_t v5;
  int v6;
  size_t v7;
  const char *v8;
  char v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  const void **v15;
  size_t v16;
  int v17;
  char v18;
  void *v19;
  void *v20;
  void *v21;
  chatv2::Core::ArionChannel::Self *v22;
  volatile int32_t *v23;
  chatv2::Core::ArionChannel::Self *v24;
  chatv2::Core::ArionChannel::Self *v25;
  int v26;
  uint8_t *v27;
  uint32_t *v28;
  int v29;
  int v30;
  int v31;
  void (*v32)(int, uint32_t **);
  void *v33;
  size_t v34;
  int v35;
  size_t v36;
  int v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef const char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef const void **_g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t _g4_t_v59[4];
  typedef uint32_t _g4_t_v60[4];
  typedef int _g4_t_v61[2];
  typedef int _g4_t_v62;
  typedef size_t _g4_t_v63;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v64;
  typedef volatile int32_t *_g4_t_v65[3];
  typedef uint32_t *_g4_t_v66;
  typedef volatile int32_t *_g4_t_v67[3];
  typedef uint32_t *_g4_t_v68;
  typedef volatile int32_t *_g4_t_v69[3];
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v70;
  typedef volatile int32_t *_g4_t_v71[3];
  typedef int _g4_t_v72;
  typedef volatile int32_t *_g4_t_v73[3];
  typedef uint32_t *_g4_t_v74;
  typedef volatile int32_t *_g4_t_v75[3];
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v76;
  typedef volatile int32_t *_g4_t_v77;
  typedef uint32_t _g4_t_v78[8];
  enum : size_t {
    _g4_s0 = 336u,
    _g4_s1 = (0u + sizeof(_g4_t_v38)) > _g4_s0 ? (0u + sizeof(_g4_t_v38)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v39)) > _g4_s1 ? (4u + sizeof(_g4_t_v39)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v40)) > _g4_s2 ? (8u + sizeof(_g4_t_v40)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v41)) > _g4_s3 ? (12u + sizeof(_g4_t_v41)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v42)) > _g4_s4 ? (16u + sizeof(_g4_t_v42)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v43)) > _g4_s5 ? (20u + sizeof(_g4_t_v43)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v44)) > _g4_s6 ? (24u + sizeof(_g4_t_v44)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v45)) > _g4_s7 ? (28u + sizeof(_g4_t_v45)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v46)) > _g4_s8 ? (32u + sizeof(_g4_t_v46)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v47)) > _g4_s9 ? (36u + sizeof(_g4_t_v47)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v48)) > _g4_s10 ? (40u + sizeof(_g4_t_v48)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v49)) > _g4_s11 ? (44u + sizeof(_g4_t_v49)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v50)) > _g4_s12 ? (48u + sizeof(_g4_t_v50)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v51)) > _g4_s13 ? (48u + sizeof(_g4_t_v51)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v52)) > _g4_s14 ? (52u + sizeof(_g4_t_v52)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v53)) > _g4_s15 ? (52u + sizeof(_g4_t_v53)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v54)) > _g4_s16 ? (56u + sizeof(_g4_t_v54)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v55)) > _g4_s17 ? (60u + sizeof(_g4_t_v55)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v56)) > _g4_s18 ? (64u + sizeof(_g4_t_v56)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v57)) > _g4_s19 ? (68u + sizeof(_g4_t_v57)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v58)) > _g4_s20 ? (72u + sizeof(_g4_t_v58)) : _g4_s20,
    _g4_s22 = (76u + sizeof(_g4_t_v59)) > _g4_s21 ? (76u + sizeof(_g4_t_v59)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v60)) > _g4_s22 ? (92u + sizeof(_g4_t_v60)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v61)) > _g4_s23 ? (108u + sizeof(_g4_t_v61)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v62)) > _g4_s24 ? (116u + sizeof(_g4_t_v62)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v63)) > _g4_s25 ? (120u + sizeof(_g4_t_v63)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v64)) > _g4_s26 ? (124u + sizeof(_g4_t_v64)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v65)) > _g4_s27 ? (128u + sizeof(_g4_t_v65)) : _g4_s27,
    _g4_s29 = (140u + sizeof(_g4_t_v66)) > _g4_s28 ? (140u + sizeof(_g4_t_v66)) : _g4_s28,
    _g4_s30 = (144u + sizeof(_g4_t_v67)) > _g4_s29 ? (144u + sizeof(_g4_t_v67)) : _g4_s29,
    _g4_s31 = (156u + sizeof(_g4_t_v68)) > _g4_s30 ? (156u + sizeof(_g4_t_v68)) : _g4_s30,
    _g4_s32 = (160u + sizeof(_g4_t_v69)) > _g4_s31 ? (160u + sizeof(_g4_t_v69)) : _g4_s31,
    _g4_s33 = (172u + sizeof(_g4_t_v70)) > _g4_s32 ? (172u + sizeof(_g4_t_v70)) : _g4_s32,
    _g4_s34 = (176u + sizeof(_g4_t_v71)) > _g4_s33 ? (176u + sizeof(_g4_t_v71)) : _g4_s33,
    _g4_s35 = (188u + sizeof(_g4_t_v72)) > _g4_s34 ? (188u + sizeof(_g4_t_v72)) : _g4_s34,
    _g4_s36 = (192u + sizeof(_g4_t_v73)) > _g4_s35 ? (192u + sizeof(_g4_t_v73)) : _g4_s35,
    _g4_s37 = (204u + sizeof(_g4_t_v74)) > _g4_s36 ? (204u + sizeof(_g4_t_v74)) : _g4_s36,
    _g4_s38 = (208u + sizeof(_g4_t_v75)) > _g4_s37 ? (208u + sizeof(_g4_t_v75)) : _g4_s37,
    _g4_s39 = (220u + sizeof(_g4_t_v76)) > _g4_s38 ? (220u + sizeof(_g4_t_v76)) : _g4_s38,
    _g4_s40 = (224u + sizeof(_g4_t_v77)) > _g4_s39 ? (224u + sizeof(_g4_t_v77)) : _g4_s39,
    _g4_s41 = (228u + sizeof(_g4_t_v78)) > _g4_s40 ? (228u + sizeof(_g4_t_v78)) : _g4_s40
  };
  alignas(16) uint8_t _g4_sf[_g4_s41];
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 0u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 36u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 40u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 44u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 68u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 72u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 76u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 108u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 116u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 120u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 124u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 128u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 140u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 144u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 156u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 160u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 172u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 176u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 188u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 192u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 204u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 208u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 220u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 224u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 228u);

  v78[4] = (uint32_t)(uintptr_t)(&a1);
  v50 = a1;
  v52 = a2;
  v49 = a3;
  v64 = nullptr;
  v65[0] = nullptr;
  v61[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v61), 0x80u, 0);
  v63 = 0;
  v3 = "Stop channel, name: {0}, type: {1}\n";
  v4 = aStopChannelNam /* "Stop channel, name: {0}, type: {1}\n" */[0];
  v48 = 0;
  while ( 1 )
  {
    v8 = v3 + 1;
    if ( v4 != 123 )
    {
      v5 = v63;
      v6 = v61[0];
      v7 = v63 + 1;
      if ( v63 + 1 > *(uint32_t *)(v61[0] - 12) )
      {
        LOBYTE(v46) = v4;
        sub_1939D80((int)(uintptr_t)(v61), v63 + 65, 0);
        v5 = v63;
        v6 = v61[0];
        v4 = (char)(uintptr_t)(v46);
        v7 = v63 + 1;
      }
      v63 = v7;
      if ( *(int *)(v6 - 4) >= 0 )
      {
        LOBYTE(v46) = v4;
        sub_19397C0(v61);
        v6 = v61[0];
        v4 = (char)(uintptr_t)(v46);
      }
      *(uint8_t *)(v6 + v5) = v4;
      v3 = v8;
      goto LABEL_7;
    }
    v9 = v3[1];
    if ( v9 == 123 )
    {
      v34 = v63;
      v35 = v61[0];
      if ( v63 + 2 > *(uint32_t *)(v61[0] - 12) )
      {
        v46 = v3;
        sub_1939D80((int)(uintptr_t)(v61), v63 + 66, 0);
        v34 = v63;
        v35 = v61[0];
        v3 = v46;
        ++v63;
        if ( *(int *)(v61[0] - 4) < 0 )
          goto LABEL_66;
      }
      else
      {
        ++v63;
        if ( *(int *)(v61[0] - 4) < 0 )
        {
LABEL_66:
          *(uint8_t *)(v35 + v34) = 123;
          v36 = v63++;
          v37 = v61[0];
          if ( *(int *)(v61[0] - 4) >= 0 )
          {
            v46 = v3;
            sub_19397C0(v61);
            v37 = v61[0];
            v3 = v46;
          }
          *(uint8_t *)(v37 + v36) = 123;
          v3 += 2;
          goto LABEL_7;
        }
      }
      v46 = v3;
      sub_19397C0(v61);
      v35 = v61[0];
      v3 = v46;
      goto LABEL_66;
    }
    v72 = 538181632;
    if ( v9 == 0 )
      goto LABEL_50;
    v10 = 1;
    v11 = 0;
    while ( 1 )
    {
      v9 = *v8;
      if ( (uint8_t)(*v8 - 48) > 9u )
        break;
      v12 = v10 * v11;
      ++v8;
      v10 *= 10;
      v11 = v12 + v9 - 48;
      if ( *v8 == 0 )
      {
        v13 = v11;
        v9 = 0;
        goto LABEL_15;
      }
    }
    v13 = v11;
    if ( v10 == 1 )
LABEL_50:
      v13 = v48++;
    if ( v9 == 58 )
    {
      v9 = v8[1];
      if ( v9 == 120 )
      {
        v3 = v8 + 3;
        BYTE2(v72) = BYTE2(v72) & 1 | 0x20;
        v9 = v8[2];
      }
      else
      {
        v3 = v8 + 2;
        if ( v9 == 88 )
        {
          BYTE2(v72) = 33;
          v3 = v8 + 3;
          v9 = v8[2];
        }
      }
    }
    else
    {
LABEL_15:
      v3 = v8 + 1;
    }
    if ( v9 != 125 )
      break;
    if ( v13 != 0 )
    {
      v46 = v3;
      if ( v13 == 1 )
        jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315(v61, &v63, (uint8_t *)&v72, v49);
      else
        sub_1939D80((int)(uintptr_t)(v61), v63, 0);
      v3 = v46;
      goto LABEL_7;
    }
    v54 = *((uint32_t *)*v52 - 3);
    if ( v63 + v54 > *(uint32_t *)(v61[0] - 12) )
    {
      v46 = v3;
      sub_1939D80((int)(uintptr_t)(v61), v63 + v54 + 64, 0);
      v3 = v46;
      v54 = *((uint32_t *)*v52 - 3);
      if ( v54 == 0 )
        goto LABEL_7;
LABEL_20:
      v14 = 0;
      v47 = (char *)v3;
      v15 = v52;
      do
      {
        v16 = v63++;
        v17 = v61[0];
        if ( *(int *)(v61[0] - 4) >= 0 )
        {
          v46 = (const char *)v15;
          sub_19397C0(v61);
          v17 = v61[0];
          v15 = (const void **)v46;
        }
        v18 = *((uint8_t *)*v15 + v14++);
        *(uint8_t *)(v17 + v16) = v18;
      }
      while ( v14 != v54 );
      v3 = v47;
      v4 = *v47;
      if ( *v47 == 0 )
        goto LABEL_25;
    }
    else
    {
      if ( v54 != 0 )
        goto LABEL_20;
LABEL_7:
      v4 = *v3;
      if ( *v3 == 0 )
        goto LABEL_25;
    }
  }
  sub_1939D80((int)(uintptr_t)(v61), v63, 0);
LABEL_25:
  sub_1939D80((int)(uintptr_t)(v61), v63, 0);
  g4_std::string::construct_copy(v59, v61);
  v19 = (void *)(v61[0] - 12);
  if ( (uint32_t *)(v61[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v61[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v62), "ChatLib", (int)(uintptr_t)(&v57) + 2);
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v62),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
    236,
    (int)(uintptr_t)(v59));
  v20 = (void *)(v62 - 12);
  if ( (uint32_t *)(v62 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v62 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  v21 = (void *)(v59[0] - 12);
  if ( (uint32_t *)(v59[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v59[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  chatv2::Requests::ArionRequestFactory::GetChannel((uint32_t *)(&v76), v50, v52, v49);
  v22 = v76;
  v23 = nullptr;
  v70 = v76;
  v71[0] = v77;
  if ( v77 != nullptr )
  {
    __sync_add_and_fetch(v77 + 1, 1);
    v22 = v70;
    v23 = v71[0];
  }
  v24 = v64;
  v64 = v22;
  v70 = v24;
  v71[0] = v65[0];
  v65[0] = v23;
  boost::detail::shared_count::Destroy(v71);
  boost::detail::shared_count::Destroy(&v77);
  v25 = v64;
  if ( v64 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
      "px != 0");
    v25 = v64;
  }
  chatv2::Core::ArionChannel::Disconnect(v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v60), "You left ", (int)(uintptr_t)(&v57) + 3);
  if ( v49 != 0 )
  {
    if ( v49 == 1 )
    {
      boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,boost::hash<std::string>,std::equal_to<std::string>>>::erase_key(
        v50 + 4,
        v52);
      g4_std::string::append((int)(uintptr_t)(v60), "channel: ", 9u);
    }
  }
  else
  {
    boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,boost::hash<std::string>,std::equal_to<std::string>>>::erase_key(
      v50 + 28,
      v52);
    g4_std::string::append((int)(uintptr_t)(v60), "room: ", 6u);
  }
  v72 = 0;
  v73[0] = nullptr;
  v26 = opNew(0x38u);
  *(uint32_t *)(v26 + 4) = 1;
  *(uint32_t *)(v26 + 8) = 1;
  *(uint32_t *)v26 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v26 + 12) = 0;
  *(uint8_t *)(v26 + 16) = 0;
  v27 = (uint8_t *)G4_VCALL<int>(v26, 20, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49, v50, v52, v54, v55, v56, v57, v58, v59[0], v59[1], v59[2], v59[3], v60[0], v60[1], v60[2], v60[3], v61[0], v61[1], v62, v63, v64, v65[0], v65[1], v65[2], v66, v67[0], v67[1], v67[2], v68, v69[0], v69[1], v69[2], v70, v71[0], v71[1], v71[2], v72, v26, v73[1], v73[2], v74, v75[0], v75[1], v75[2], v76, v77, v78[0], v78[1], v78[2], v78[3]);
  v28 = (uint32_t *)(v27 + 4);
  if ( v27 != (uint8_t *)-4 )
  {
    chatv2::Responses::ClientResponse::ClientResponse(v28, 12, v53);
    v28 = (uint32_t *)(v27 + 4);
  }
  *v27 = 1;
  v66 = v28;
  v67[0] = v73[0];
  if ( v73[0] != nullptr )
    __sync_add_and_fetch(v73[0] + 1, 1);
  boost::detail::shared_count::Destroy(v73);
  g4_std::string::append_str(v60, v53);
  v29 = (int)(uintptr_t)(v66);
  if ( v66 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    v29 = (int)(uintptr_t)(v66);
  }
  chatv2::Responses::ClientResponse::SetMessage(v29, (int)(uintptr_t)(v60));
  v30 = *(uint32_t *)(v51 + 84);
  v31 = *(uint32_t *)(v30 + 36);
  if ( v31 != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    v68 = v66;
    v69[0] = v67[0];
    if ( v67[0] != nullptr )
    {
      __sync_add_and_fetch(v67[0] + 1, 1);
      v30 = *(uint32_t *)(v51 + 84);
      v31 = *(uint32_t *)(v30 + 36);
      if ( v31 == 0 )
      {
        sub_1243080(v78);
        std::terminate();
      }
    }
    v32 = *(void (**)(int, uint32_t **))((v31 & 0xFFFFFFFE) + 4);
    v74 = v68;
    v75[0] = v69[0];
    if ( v69[0] != nullptr )
      __sync_add_and_fetch(v69[0] + 1, 1);
    v32(v30 + 40, &v74);
    boost::detail::shared_count::Destroy(v75);
    boost::detail::shared_count::Destroy(v69);
  }
  boost::detail::shared_count::Destroy(v67);
  v33 = (void *)(v60[0] - 12);
  if ( (uint32_t *)(v60[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v60[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v78[5] = (uint32_t)(uintptr_t)((char *)&v58 + 3);
    g4_std::string::Rep::M_destroy(v33);
  }
  boost::detail::shared_count::Destroy(v65);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::Construct  (binary VA: 0x123fc50)
// Original: chatv2::Requests::ArionRequestFactory::ArionRequestFactory
// ----------------------------------------------------------------------------
chatv2::Requests::ArionRequestFactory::Self * chatv2::Requests::ArionRequestFactory::Construct(chatv2::Requests::ArionRequestFactory::Self *self)
{
  int v1;
  void **v2;
  int v3;
  void **v4;
  int v5;
  void *v6;
  void **v7;
  int v8;
  void **v9;
  void *v10;
  int v11;
  pthread_mutex_t *v12;
  int v13;
  int v14;
  int v15;
  int v16;
  void *v17;
  void *v18;
  chatv2::Requests::ArionRequestFactory::Self *result;
  void *v20;
  int v21;
  int v22;
  uint32_t *v23;
  volatile int32_t *v24;
  typedef int _g4_t_v25;
  typedef boost::asio::ssl::detail::openssl_init_base::do_init *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef volatile int32_t *_g4_t_v33;
  typedef int _g4_t_error;
  typedef uint32_t *_g4_t_v35;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v25)) > _g4_s0 ? (8u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (18u + sizeof(_g4_t_v28)) > _g4_s3 ? (18u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v29)) > _g4_s4 ? (20u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v30)) > _g4_s5 ? (24u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v31)) > _g4_s6 ? (28u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v32)) > _g4_s7 ? (32u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v33)) > _g4_s8 ? (36u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_error)) > _g4_s9 ? (40u + sizeof(_g4_t_error)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v35)) > _g4_s10 ? (44u + sizeof(_g4_t_v35)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 18u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 20u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 24u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_error &error = *reinterpret_cast<_g4_t_error *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);

  v1 = 38;
  v2 = (void **)&unk_1C81A60;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(&off_2092268);
  *((uint8_t *)self + 4) = 0;
  while ( 1 )
  {
    v3 = v1 >> 1;
    v4 = &v2[v1 >> 1];
    if ( (unsigned int)(uintptr_t)(*v4) > 0xA )
      break;
    v21 = v1 >> 1;
    v3 = v1;
LABEL_29:
    v2 = v4 + 1;
    v1 = v3 - v21 - 1;
    if ( v1 <= 0 )
      goto LABEL_7;
  }
  while ( v3 > 0 )
  {
    v21 = v3 >> 1;
    v4 = &v2[v3 >> 1];
    if ( (unsigned int)(uintptr_t)(*v4) <= 0xA )
      goto LABEL_29;
    v3 >>= 1;
  }
LABEL_7:
  v5 = 38;
  if ( v2 == (void **)jpt_628CA1 )
    v2 = (void **)&unk_1C81AF4;
  v6 = *v2;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v6);
  *((uint32_t *)self + 4) = 1065353216;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint8_t *)self + 28) = 0;
  v7 = (void **)&unk_1C81A60;
  while ( 1 )
  {
    v8 = v5 >> 1;
    v9 = &v7[v5 >> 1];
    if ( (unsigned int)(uintptr_t)(*v9) > 0xA )
      break;
    v22 = v5 >> 1;
    v8 = v5;
LABEL_31:
    v7 = v9 + 1;
    v5 = v8 - v22 - 1;
    if ( v5 <= 0 )
      goto LABEL_15;
  }
  while ( v8 > 0 )
  {
    v22 = v8 >> 1;
    v9 = &v7[v8 >> 1];
    if ( (unsigned int)(uintptr_t)(*v9) <= 0xA )
      goto LABEL_31;
    v8 >>= 1;
  }
LABEL_15:
  if ( v7 == (void **)jpt_628CA1 )
    v7 = (void **)&unk_1C81AF4;
  v10 = *v7;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v10);
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 12) = 0;
  v11 = opNew(0x10u);
  error = pthread_mutex_init((pthread_mutex_t *)(v11 + 4), nullptr);
  v35 = (uint32_t *)sub_18F81E0();
  if ( error == 0 || boost::system::error_code::unspecified_bool_true == nullptr )
  {
    *(uint32_t *)(v11 + 8) = (uint32_t)(uintptr_t)((char *)self + 52);
    v27 = (char *)self + 52;
    v12 = (pthread_mutex_t *)opNew(0x44u);
    ((int32_t *)(v12))[3] = (int)(uintptr_t)(self) + 52;
    ((int32_t *)(v12))[1] = 0;
    ((int32_t *)(v12))[2] = 0;
    ((int32_t *)(v12))[4] = 0;
    ((uint8_t *)(v12))[20] = 0;
    ((int32_t *)(v12))[0] = (int)((uint32_t)(uintptr_t)&off_2092308);
    v25 = pthread_mutex_init(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (1))), nullptr);
    v35 = (uint32_t *)sub_18F81E0();
    error = v25;
    if ( v25 == 0 || boost::system::error_code::unspecified_bool_true == nullptr )
    {
      G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (1)))) = 0;
      G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (1)))) = 0;
      G4_MUTEX_KIND(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (1)))) = 0;
      G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (1)))) = 0;
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (1))))[20] = 1;
      G4_MUTEX_LOCK(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (2)))) = 0;
      G4_MUTEX_COUNT(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (2)))) = 0;
      G4_MUTEX_OWNER(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (2)))) = 0;
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (2))))[12] = 0;
      G4_MUTEX_SIZE(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (2))))[13] = 0;
      G4_MUTEX_NUSERS(reinterpret_cast<pthread_mutex_t *>((uintptr_t)(v12) + (24 * (2)))) = 0;
      *(uint32_t *)(v11 + 12) = (uint32_t)(uintptr_t)(v12);
      ((int32_t *)(v12))[1] = 0;
      ((int32_t *)(v12))[2] = (int)(uintptr_t)(&unk_20D3FB8);
      *(uint32_t *)(*(uint32_t *)(v11 + 12) + 16) = 0;
      *((uint32_t *)self + 13) = v11;
      *((uint32_t *)self + 14) = *(uint32_t *)(v11 + 12);
      *((uint32_t *)self + 15) = 0;
      if ( LOBYTE(g4_guard_c9624529fa[0]) == 0
        && _cxa_guard_acquire(g4_guard_c9624529fa) != 0 )
      {
        v26 = (boost::asio::ssl::detail::openssl_init_base::do_init *)opNew(0x10u);
        boost::asio::ssl::detail::openssl_init_base::do_init::Construct(v26);
        g4_fnstatic_5faf494a27[1] = 0;
        g4_fnstatic_5faf494a27[0] = (uintptr_t)(uintptr_t)(v26);
        v33 = nullptr;
        v23 = (uint32_t *)opNew(0x10u);
        v23[1] = 1;
        v23[2] = 1;
        *v23 = ((uint32_t)(uintptr_t)&off_2092128);
        v24 = (volatile int32_t *)g4_fnstatic_5faf494a27[1];
        v23[3] = (uint32_t)(uintptr_t)(v26);
        g4_fnstatic_5faf494a27[1] = (uintptr_t)(uintptr_t)(v23);
        v33 = v24;
        boost::detail::shared_count::Destroy(&v33);
        _cxa_guard_release(g4_guard_c9624529fa);
        __cxa_atexit(
          (void (*)(void *))g4_dtor_thunk<boost::shared_ptr<boost::asio::ssl::detail::openssl_init_base::do_init>>,
          g4_fnstatic_5faf494a27,
          &unk_20D1280);
      }
      *((uint32_t *)self + 16) = g4_fnstatic_5faf494a27[0];
      v13 = g4_fnstatic_5faf494a27[1];
      *((uint32_t *)self + 17) = v13;
      if ( v13 != 0 )
        __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1);
      v14 = (int)(uintptr_t)(SSLv23_method());
      v15 = SSL_CTX_new(v14);
      *((uint32_t *)self + 15) = v15;
      if ( v15 == 0 )
      {
        if ( LOBYTE(g4_guard_ffc2a7f298[0]) == 0
          && _cxa_guard_acquire(g4_guard_ffc2a7f298) != 0 )
        {
          g4_fnstatic_5010b9ba22[0] = ((uint32_t)(uintptr_t)&off_20920E8);
          _cxa_guard_release(g4_guard_ffc2a7f298);
          __cxa_atexit(
            (void (*)(void *))boost::asio::error::detail::ssl_category::Destroy,
            g4_fnstatic_5010b9ba22,
            &unk_20D1280);
        }
        error = ERR_get_error();
        v35 = (uint32_t *)(g4_fnstatic_5010b9ba22);
        if ( error != 0 && boost::system::error_code::unspecified_bool_true != nullptr )
          sub_124259D(boost::system::error_code::unspecified_bool_true, "context");
      }
      sub_18F81E0();
      SSL_CTX_ctrl(*((uint32_t *)self + 15), 32, 0x20000, 0);
      sub_18F81E0();
      v16 = *((uint32_t *)self + 14);
      *((uint32_t *)self + 18) = v16;
      __sync_fetch_and_add((volatile int32_t *)(v16 + 48), 1u);
      boost::thread::Construct((chatv2::Requests::ArionRequestFactory::Self *)((char *)self + 76));
      *((uint32_t *)self + 21) = 0;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), "request factory subscribe client", (int)(uintptr_t)(&v28));
      chatv2::Connectivity::HTTPSClient::HTTPSClient((char *)self + 88, &v30, v27, (char *)self + 60, 0);
      v17 = (void *)(v30 - 12);
      if ( (uint32_t *)(v30 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v17);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), "request factory report client", (int)(uintptr_t)(&v28) + 1);
      chatv2::Connectivity::HTTPSClient::HTTPSClient((char *)self + 520, &v31, v27, (char *)self + 60, 0);
      v18 = (void *)(v31 - 12);
      if ( (uint32_t *)(v31 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v18);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "request factory invite user", (int)(uintptr_t)(&v29));
      chatv2::Connectivity::HTTPSClient::HTTPSClient((char *)self + 952, &v32, v27, (char *)self + 60, 0);
      result = (chatv2::Requests::ArionRequestFactory::Self *)v32;
      v20 = (void *)(v32 - 12);
      if ( (uint32_t *)(v32 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
      {
        return (g4_std::string::Rep::M_destroy(v20), (chatv2::Requests::ArionRequestFactory::Self *)0);
      }
      return result;
    }
  }

  ((void ( *)(void))sub_124259D)();
}
// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ArionRequestFactory::StartChannel  (binary VA: 0x1240230)
// Original: chatv2::Requests::ArionRequestFactory::StartChannel
// ----------------------------------------------------------------------------
chatv2::Core::ArionChannel::Self ** chatv2::Requests::ArionRequestFactory::StartChannel(chatv2::Core::ArionChannel::Self **a1, uint32_t *a2, const void **a3, int a4, int a5, uint32_t *a6, boost::detail::shared_count::Self *a7)
{
  chatv2::Core::ArionChannel::Self **v7;
  uint32_t *v8;
  boost::detail::shared_count::Self *v9;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  char v15;
  const char *v16;
  size_t v17;
  int v18;
  size_t v19;
  const char *v20;
  char v21;
  int v22;
  int v23;
  int v24;
  int v25;
  size_t v26;
  int v27;
  const void **v28;
  size_t v29;
  int v30;
  char v31;
  void *v32;
  void *v33;
  void *v34;
  chatv2::Core::ArionChannel::Self *v35;
  volatile int32_t *v36;
  chatv2::Core::ArionChannel::Self *v37;
  volatile int32_t *v38;
  chatv2::Core::ArionChannel::Self *v39;
  chatv2::Core::ArionChannel::Self *v40;
  chatv2::Core::ArionChannel::Self *v41;
  chatv2::Core::ArionChannel::Self *v42;
  uint32_t *v43;
  volatile int32_t *v44;
  chatv2::Core::ArionChannel::Self *v45;
  chatv2::Core::ArionChannel::Self *v46;
  volatile int32_t *v47;
  chatv2::Core::ArionChannel::Self *v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  void (*v55)(int, int *);
  void *v56;
  void *v57;
  void *v58;
  void *v59;
  void *v60;
  uint32_t *v61;
  volatile int32_t *v62;
  chatv2::Core::ArionChannel::Self *v63;
  chatv2::Core::ArionChannel::Self *v64;
  volatile int32_t *v65;
  size_t v66;
  int v67;
  boost::detail::shared_count::Self *v68;
  size_t v69;
  int v70;
  char v71;
  size_t v72;
  int v73;
  uint32_t *v74;
  size_t v75;
  int v76;
  char v77;
  size_t v78;
  int v79;
  size_t v80;
  int v81;
  int v82;
  uint8_t *v83;
  chatv2::Core::ArionChannel::Self *v84;
  chatv2::Core::ArionChannel::Self *v85;
  volatile int32_t *v86;
  chatv2::Core::ArionChannel::Self *v87;
  volatile int32_t *v88;
  chatv2::Core::ArionChannel::Self *v89;
  chatv2::Core::ArionChannel::Self *v90;
  chatv2::Core::ArionChannel::Self *v91;
  chatv2::Core::ArionChannel::Self *v92;
  chatv2::Core::ArionChannel::Self *v93;
  chatv2::Core::ArionChannel::Self *v94;
  chatv2::Core::ArionChannel::Self *v95;
  int ListenClient;
  void *v97;
  void *v98;
  chatv2::Core::ArionChannel::Self *v99;
  int v100;
  chatv2::Core::ArionChannel::Self *v101;
  int v102;
  chatv2::Core::ArionChannel::Self *v103;
  int v104;
  chatv2::Core::ArionChannel::Self *v105;
  int CommandClient;
  chatv2::Core::ArionChannel::Self *v107;
  int v108;
  chatv2::Core::ArionChannel::Self *v109;
  int v110;
  typedef char _g4_t_v111;
  typedef char _g4_t_v112;
  typedef int _g4_t_v113;
  typedef const void **_g4_t_v114;
  typedef int _g4_t_v115;
  typedef boost::detail::shared_count::Self *_g4_t_v116;
  typedef uint32_t *_g4_t_v117;
  typedef chatv2::Core::ArionChannel::Self **_g4_t_v118;
  typedef const char *_g4_t_v119;
  typedef const char *_g4_t_v120;
  typedef const char *_g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef uint32_t *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef boost::detail::shared_count::Self *_g4_t_v126;
  typedef uint32_t *_g4_t_v127;
  typedef const void **_g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef uint32_t _g4_t_v133[4];
  typedef uint32_t _g4_t_v134[4];
  typedef uint32_t _g4_t_v135[4];
  typedef uint32_t _g4_t_v136[4];
  typedef uint32_t _g4_t_v137[4];
  typedef int _g4_t_v138[4];
  typedef int _g4_t_v139[4];
  typedef int _g4_t_v140[2];
  typedef int _g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef size_t _g4_t_v146;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v147;
  typedef volatile int32_t *_g4_t_v148;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v149;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v150;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v151;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v152;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v153;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v154;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v155;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v156;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v157;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v158;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v159;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v160;
  typedef int _g4_t_v161;
  typedef volatile int32_t *_g4_t_v162;
  typedef int _g4_t_v163;
  typedef volatile int32_t *_g4_t_v164;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v165;
  typedef volatile int32_t *_g4_t_v166;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v167;
  typedef volatile int32_t *_g4_t_v168;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v169;
  typedef volatile int32_t *_g4_t_v170;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v171;
  typedef volatile int32_t *_g4_t_v172;
  typedef int _g4_t_v173;
  typedef volatile int32_t *_g4_t_v174[3];
  typedef int _g4_t_v175;
  typedef volatile int32_t *_g4_t_v176;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v177;
  typedef volatile int32_t *_g4_t_v178[2];
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v179;
  typedef char _g4_t_v180[8];
  typedef int _g4_t_v181[4];
  typedef volatile int32_t *_g4_t_v182;
  typedef int _g4_t_v183[4];
  typedef volatile int32_t *_g4_t_v184;
  typedef int _g4_t_v185[4];
  typedef volatile int32_t *_g4_t_v186;
  typedef int _g4_t_v187[4];
  typedef volatile int32_t *_g4_t_v188;
  typedef int _g4_t_v189[4];
  typedef volatile int32_t *_g4_t_v190;
  typedef int _g4_t_v191[4];
  typedef volatile int32_t *_g4_t_v192;
  typedef uint8_t _g4_t_v193[16];
  typedef volatile int32_t *_g4_t_v194;
  typedef int _g4_t_v195;
  typedef chatv2::Core::ArionChannel::Self ***_g4_t_v196;
  enum : size_t {
    _g4_s0 = 720u,
    _g4_s1 = (0u + sizeof(_g4_t_v111)) > _g4_s0 ? (0u + sizeof(_g4_t_v111)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v112)) > _g4_s1 ? (0u + sizeof(_g4_t_v112)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v113)) > _g4_s2 ? (0u + sizeof(_g4_t_v113)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v114)) > _g4_s3 ? (4u + sizeof(_g4_t_v114)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v115)) > _g4_s4 ? (4u + sizeof(_g4_t_v115)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v116)) > _g4_s5 ? (4u + sizeof(_g4_t_v116)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v117)) > _g4_s6 ? (4u + sizeof(_g4_t_v117)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v118)) > _g4_s7 ? (8u + sizeof(_g4_t_v118)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v119)) > _g4_s8 ? (12u + sizeof(_g4_t_v119)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v120)) > _g4_s9 ? (12u + sizeof(_g4_t_v120)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v121)) > _g4_s10 ? (12u + sizeof(_g4_t_v121)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v122)) > _g4_s11 ? (16u + sizeof(_g4_t_v122)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v123)) > _g4_s12 ? (20u + sizeof(_g4_t_v123)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v124)) > _g4_s13 ? (24u + sizeof(_g4_t_v124)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v125)) > _g4_s14 ? (28u + sizeof(_g4_t_v125)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v126)) > _g4_s15 ? (32u + sizeof(_g4_t_v126)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v127)) > _g4_s16 ? (36u + sizeof(_g4_t_v127)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v128)) > _g4_s17 ? (40u + sizeof(_g4_t_v128)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v129)) > _g4_s18 ? (44u + sizeof(_g4_t_v129)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v130)) > _g4_s19 ? (44u + sizeof(_g4_t_v130)) : _g4_s19,
    _g4_s21 = (44u + sizeof(_g4_t_v131)) > _g4_s20 ? (44u + sizeof(_g4_t_v131)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v132)) > _g4_s21 ? (48u + sizeof(_g4_t_v132)) : _g4_s21,
    _g4_s23 = (64u + sizeof(_g4_t_v133)) > _g4_s22 ? (64u + sizeof(_g4_t_v133)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v134)) > _g4_s23 ? (80u + sizeof(_g4_t_v134)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v135)) > _g4_s24 ? (96u + sizeof(_g4_t_v135)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v136)) > _g4_s25 ? (112u + sizeof(_g4_t_v136)) : _g4_s25,
    _g4_s27 = (128u + sizeof(_g4_t_v137)) > _g4_s26 ? (128u + sizeof(_g4_t_v137)) : _g4_s26,
    _g4_s28 = (144u + sizeof(_g4_t_v138)) > _g4_s27 ? (144u + sizeof(_g4_t_v138)) : _g4_s27,
    _g4_s29 = (160u + sizeof(_g4_t_v139)) > _g4_s28 ? (160u + sizeof(_g4_t_v139)) : _g4_s28,
    _g4_s30 = (176u + sizeof(_g4_t_v140)) > _g4_s29 ? (176u + sizeof(_g4_t_v140)) : _g4_s29,
    _g4_s31 = (184u + sizeof(_g4_t_v141)) > _g4_s30 ? (184u + sizeof(_g4_t_v141)) : _g4_s30,
    _g4_s32 = (188u + sizeof(_g4_t_v142)) > _g4_s31 ? (188u + sizeof(_g4_t_v142)) : _g4_s31,
    _g4_s33 = (192u + sizeof(_g4_t_v143)) > _g4_s32 ? (192u + sizeof(_g4_t_v143)) : _g4_s32,
    _g4_s34 = (196u + sizeof(_g4_t_v144)) > _g4_s33 ? (196u + sizeof(_g4_t_v144)) : _g4_s33,
    _g4_s35 = (200u + sizeof(_g4_t_v145)) > _g4_s34 ? (200u + sizeof(_g4_t_v145)) : _g4_s34,
    _g4_s36 = (204u + sizeof(_g4_t_v146)) > _g4_s35 ? (204u + sizeof(_g4_t_v146)) : _g4_s35,
    _g4_s37 = (208u + sizeof(_g4_t_v147)) > _g4_s36 ? (208u + sizeof(_g4_t_v147)) : _g4_s36,
    _g4_s38 = (212u + sizeof(_g4_t_v148)) > _g4_s37 ? (212u + sizeof(_g4_t_v148)) : _g4_s37,
    _g4_s39 = (224u + sizeof(_g4_t_v149)) > _g4_s38 ? (224u + sizeof(_g4_t_v149)) : _g4_s38,
    _g4_s40 = (228u + sizeof(_g4_t_v150)) > _g4_s39 ? (228u + sizeof(_g4_t_v150)) : _g4_s39,
    _g4_s41 = (240u + sizeof(_g4_t_v151)) > _g4_s40 ? (240u + sizeof(_g4_t_v151)) : _g4_s40,
    _g4_s42 = (244u + sizeof(_g4_t_v152)) > _g4_s41 ? (244u + sizeof(_g4_t_v152)) : _g4_s41,
    _g4_s43 = (256u + sizeof(_g4_t_v153)) > _g4_s42 ? (256u + sizeof(_g4_t_v153)) : _g4_s42,
    _g4_s44 = (260u + sizeof(_g4_t_v154)) > _g4_s43 ? (260u + sizeof(_g4_t_v154)) : _g4_s43,
    _g4_s45 = (272u + sizeof(_g4_t_v155)) > _g4_s44 ? (272u + sizeof(_g4_t_v155)) : _g4_s44,
    _g4_s46 = (276u + sizeof(_g4_t_v156)) > _g4_s45 ? (276u + sizeof(_g4_t_v156)) : _g4_s45,
    _g4_s47 = (288u + sizeof(_g4_t_v157)) > _g4_s46 ? (288u + sizeof(_g4_t_v157)) : _g4_s46,
    _g4_s48 = (292u + sizeof(_g4_t_v158)) > _g4_s47 ? (292u + sizeof(_g4_t_v158)) : _g4_s47,
    _g4_s49 = (304u + sizeof(_g4_t_v159)) > _g4_s48 ? (304u + sizeof(_g4_t_v159)) : _g4_s48,
    _g4_s50 = (308u + sizeof(_g4_t_v160)) > _g4_s49 ? (308u + sizeof(_g4_t_v160)) : _g4_s49,
    _g4_s51 = (320u + sizeof(_g4_t_v161)) > _g4_s50 ? (320u + sizeof(_g4_t_v161)) : _g4_s50,
    _g4_s52 = (324u + sizeof(_g4_t_v162)) > _g4_s51 ? (324u + sizeof(_g4_t_v162)) : _g4_s51,
    _g4_s53 = (336u + sizeof(_g4_t_v163)) > _g4_s52 ? (336u + sizeof(_g4_t_v163)) : _g4_s52,
    _g4_s54 = (340u + sizeof(_g4_t_v164)) > _g4_s53 ? (340u + sizeof(_g4_t_v164)) : _g4_s53,
    _g4_s55 = (352u + sizeof(_g4_t_v165)) > _g4_s54 ? (352u + sizeof(_g4_t_v165)) : _g4_s54,
    _g4_s56 = (356u + sizeof(_g4_t_v166)) > _g4_s55 ? (356u + sizeof(_g4_t_v166)) : _g4_s55,
    _g4_s57 = (368u + sizeof(_g4_t_v167)) > _g4_s56 ? (368u + sizeof(_g4_t_v167)) : _g4_s56,
    _g4_s58 = (372u + sizeof(_g4_t_v168)) > _g4_s57 ? (372u + sizeof(_g4_t_v168)) : _g4_s57,
    _g4_s59 = (384u + sizeof(_g4_t_v169)) > _g4_s58 ? (384u + sizeof(_g4_t_v169)) : _g4_s58,
    _g4_s60 = (388u + sizeof(_g4_t_v170)) > _g4_s59 ? (388u + sizeof(_g4_t_v170)) : _g4_s59,
    _g4_s61 = (400u + sizeof(_g4_t_v171)) > _g4_s60 ? (400u + sizeof(_g4_t_v171)) : _g4_s60,
    _g4_s62 = (404u + sizeof(_g4_t_v172)) > _g4_s61 ? (404u + sizeof(_g4_t_v172)) : _g4_s61,
    _g4_s63 = (416u + sizeof(_g4_t_v173)) > _g4_s62 ? (416u + sizeof(_g4_t_v173)) : _g4_s62,
    _g4_s64 = (420u + sizeof(_g4_t_v174)) > _g4_s63 ? (420u + sizeof(_g4_t_v174)) : _g4_s63,
    _g4_s65 = (432u + sizeof(_g4_t_v175)) > _g4_s64 ? (432u + sizeof(_g4_t_v175)) : _g4_s64,
    _g4_s66 = (436u + sizeof(_g4_t_v176)) > _g4_s65 ? (436u + sizeof(_g4_t_v176)) : _g4_s65,
    _g4_s67 = (452u + sizeof(_g4_t_v177)) > _g4_s66 ? (452u + sizeof(_g4_t_v177)) : _g4_s66,
    _g4_s68 = (456u + sizeof(_g4_t_v178)) > _g4_s67 ? (456u + sizeof(_g4_t_v178)) : _g4_s67,
    _g4_s69 = (464u + sizeof(_g4_t_v179)) > _g4_s68 ? (464u + sizeof(_g4_t_v179)) : _g4_s68,
    _g4_s70 = (468u + sizeof(_g4_t_v180)) > _g4_s69 ? (468u + sizeof(_g4_t_v180)) : _g4_s69,
    _g4_s71 = (476u + sizeof(_g4_t_v181)) > _g4_s70 ? (476u + sizeof(_g4_t_v181)) : _g4_s70,
    _g4_s72 = (492u + sizeof(_g4_t_v182)) > _g4_s71 ? (492u + sizeof(_g4_t_v182)) : _g4_s71,
    _g4_s73 = (496u + sizeof(_g4_t_v183)) > _g4_s72 ? (496u + sizeof(_g4_t_v183)) : _g4_s72,
    _g4_s74 = (512u + sizeof(_g4_t_v184)) > _g4_s73 ? (512u + sizeof(_g4_t_v184)) : _g4_s73,
    _g4_s75 = (516u + sizeof(_g4_t_v185)) > _g4_s74 ? (516u + sizeof(_g4_t_v185)) : _g4_s74,
    _g4_s76 = (532u + sizeof(_g4_t_v186)) > _g4_s75 ? (532u + sizeof(_g4_t_v186)) : _g4_s75,
    _g4_s77 = (536u + sizeof(_g4_t_v187)) > _g4_s76 ? (536u + sizeof(_g4_t_v187)) : _g4_s76,
    _g4_s78 = (552u + sizeof(_g4_t_v188)) > _g4_s77 ? (552u + sizeof(_g4_t_v188)) : _g4_s77,
    _g4_s79 = (556u + sizeof(_g4_t_v189)) > _g4_s78 ? (556u + sizeof(_g4_t_v189)) : _g4_s78,
    _g4_s80 = (572u + sizeof(_g4_t_v190)) > _g4_s79 ? (572u + sizeof(_g4_t_v190)) : _g4_s79,
    _g4_s81 = (576u + sizeof(_g4_t_v191)) > _g4_s80 ? (576u + sizeof(_g4_t_v191)) : _g4_s80,
    _g4_s82 = (592u + sizeof(_g4_t_v192)) > _g4_s81 ? (592u + sizeof(_g4_t_v192)) : _g4_s81,
    _g4_s83 = (596u + sizeof(_g4_t_v193)) > _g4_s82 ? (596u + sizeof(_g4_t_v193)) : _g4_s82,
    _g4_s84 = (612u + sizeof(_g4_t_v194)) > _g4_s83 ? (612u + sizeof(_g4_t_v194)) : _g4_s83,
    _g4_s85 = (616u + sizeof(_g4_t_v195)) > _g4_s84 ? (616u + sizeof(_g4_t_v195)) : _g4_s84,
    _g4_s86 = (632u + sizeof(_g4_t_v196)) > _g4_s85 ? (632u + sizeof(_g4_t_v196)) : _g4_s85
  };
  alignas(16) uint8_t _g4_sf[_g4_s86];
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 0u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 0u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 0u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 4u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 4u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 4u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 4u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 8u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 12u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 12u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 12u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 16u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 20u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 24u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 28u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 32u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 36u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 40u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 44u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 44u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 44u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 48u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 64u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 80u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 96u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 112u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 128u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 144u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 160u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 176u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 184u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 188u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 192u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 196u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 200u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 204u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 208u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 212u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 224u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 228u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 240u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 244u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 256u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 260u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 272u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 276u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 288u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 292u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 304u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 308u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 320u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 324u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 336u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 340u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 352u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 356u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 368u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 372u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 384u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 388u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 400u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 404u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 416u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 420u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 432u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 436u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 452u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 456u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 464u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 468u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 476u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 492u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 496u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 512u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 516u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 532u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 536u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 552u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 556u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 572u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 576u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 592u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 596u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 612u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 616u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 632u);

  v196 = &a1;
  v7 = a1;
  v127 = a2;
  v128 = a3;
  v122 = a4;
  v125 = a5;
  v8 = a6;
  v9 = a7;
  *a1 = nullptr;
  v7[1] = nullptr;
  v126 = v9;
  v124 = v8;
  if ( g4_std::string::compare((int)(uintptr_t)(v128), (char *)&unk_1B15112) == 0
    || g4_std::string::compare((int)(uintptr_t)(v124), (char *)&unk_1B15112) == 0
    || g4_std::string::compare((int)(uintptr_t)(v126), (char *)&unk_1B15112) == 0 )
  {
    return v7;
  }
  g4_std::string::construct_copy(&v141, v124);
  chatv2::Utils::Helper::GetHost((int)(uintptr_t)(v133), &v141);
  v11 = (void *)(v141 - 12);
  if ( (uint32_t *)(v141 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v141 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::construct_copy(&v142, v124);
  chatv2::Utils::Helper::GetUrl((int)(uintptr_t)(v134), &v142);
  v12 = (void *)(v142 - 12);
  if ( (uint32_t *)(v142 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v142 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  g4_std::string::construct_copy(&v143, v126);
  chatv2::Utils::Helper::GetHost((int)(uintptr_t)(v135), &v143);
  v13 = (void *)(v143 - 12);
  if ( (uint32_t *)(v143 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v143 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  g4_std::string::construct_copy(&v144, v126);
  chatv2::Utils::Helper::GetUrl((int)(uintptr_t)(v136), &v144);
  v14 = (void *)(v144 - 12);
  if ( (uint32_t *)(v144 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v144 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  v140[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v140), 0x80u, 0);
  v118 = v7;
  v146 = 0;
  v123 = 0;
  v15 = aStartChannelNa /* "Start channel, name: {0}, type: {1}, command ..." */[0];
  v16 = "Start channel, name: {0}, type: {1}, command URL: {2}, listen URL: {3}\n";
  while ( 1 )
  {
    v20 = v16 + 1;
    if ( v15 != 123 )
    {
      v17 = v146;
      v18 = v140[0];
      v19 = v146 + 1;
      if ( v146 + 1 > *(uint32_t *)(v140[0] - 12) )
      {
        v111 = v15;
        sub_1939D80((int)(uintptr_t)(v140), v146 + 65, 0);
        v17 = v146;
        v18 = v140[0];
        v15 = v111;
        v19 = v146 + 1;
      }
      v146 = v19;
      if ( *(int *)(v18 - 4) >= 0 )
      {
        v112 = v15;
        sub_19397C0(v140);
        v18 = v140[0];
        v15 = v112;
      }
      *(uint8_t *)(v18 + v17) = v15;
      v16 = v20;
      goto LABEL_15;
    }
    v21 = v16[1];
    if ( v21 == 123 )
    {
      v78 = v146;
      v79 = v140[0];
      if ( v146 + 2 > *(uint32_t *)(v140[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v140), v146 + 66, 0);
        v78 = v146;
        v79 = v140[0];
      }
      v146 = v78 + 1;
      if ( *(int *)(v79 - 4) >= 0 )
      {
        sub_19397C0(v140);
        v79 = v140[0];
      }
      *(uint8_t *)(v79 + v78) = 123;
      v80 = v146++;
      v81 = v140[0];
      if ( *(int *)(v140[0] - 4) >= 0 )
      {
        sub_19397C0(v140);
        v81 = v140[0];
      }
      *(uint8_t *)(v81 + v80) = 123;
      v16 += 2;
      goto LABEL_15;
    }
    v173 = 538181632;
    if ( v21 == 0 )
      goto LABEL_79;
    v22 = 1;
    v23 = 0;
    while ( 1 )
    {
      v21 = *v20;
      if ( (uint8_t)(*v20 - 48) > 9u )
        break;
      v24 = v22 * v23;
      ++v20;
      v22 *= 10;
      v23 = v24 + v21 - 48;
      if ( *v20 == 0 )
      {
        v25 = v23;
        v21 = 0;
        goto LABEL_23;
      }
    }
    v25 = v23;
    if ( v22 == 1 )
LABEL_79:
      v25 = v123++;
    if ( v21 == 58 )
    {
      v21 = v20[1];
      if ( v21 == 120 )
      {
        v16 = v20 + 3;
        BYTE2(v173) = BYTE2(v173) & 1 | 0x20;
        v21 = v20[2];
      }
      else
      {
        v16 = v20 + 2;
        if ( v21 == 88 )
        {
          BYTE2(v173) = 33;
          v16 = v20 + 3;
          v21 = v20[2];
        }
      }
    }
    else
    {
LABEL_23:
      v16 = v20 + 1;
    }
    if ( v21 != 125 )
      break;
    if ( v25 == 1 )
    {
      jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315(
        v140,
        &v146,
        (uint8_t *)&v173,
        v125);
      goto LABEL_15;
    }
    if ( v25 != 0 )
    {
      if ( v25 == 2 )
      {
        v72 = *(uint32_t *)(*v124 - 12) + v146;
        v131 = *(uint32_t *)(*v124 - 12);
        if ( v72 > *(uint32_t *)(v140[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v140), v72 + 64, 0);
          v131 = *(uint32_t *)(*v124 - 12);
        }
        if ( v131 != 0 )
        {
          v73 = 0;
          v121 = v16;
          v74 = v124;
          do
          {
            v75 = v146++;
            v76 = v140[0];
            if ( *(int *)(v140[0] - 4) >= 0 )
            {
              v117 = v74;
              sub_19397C0(v140);
              v76 = v140[0];
              v74 = v117;
            }
            v77 = *(uint8_t *)(*v74 + v73++);
            *(uint8_t *)(v76 + v75) = v77;
          }
          while ( v73 != v131 );
          v16 = v121;
          goto LABEL_35;
        }
      }
      else if ( v25 == 3 )
      {
        v66 = *(uint32_t *)(*(uint32_t *)v126 - 12) + v146;
        v130 = *(uint32_t *)(*(uint32_t *)v126 - 12);
        if ( v66 > *(uint32_t *)(v140[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v140), v66 + 64, 0);
          v130 = *(uint32_t *)(*(uint32_t *)v126 - 12);
        }
        if ( v130 != 0 )
        {
          v67 = 0;
          v120 = v16;
          v68 = v126;
          do
          {
            v69 = v146++;
            v70 = v140[0];
            if ( *(int *)(v140[0] - 4) >= 0 )
            {
              v116 = v68;
              sub_19397C0(v140);
              v70 = v140[0];
              v68 = v116;
            }
            v71 = *(uint8_t *)(*(uint32_t *)v68 + v67++);
            *(uint8_t *)(v70 + v69) = v71;
          }
          while ( v67 != v130 );
          v16 = v120;
          goto LABEL_35;
        }
      }
      else
      {
        sub_1939D80((int)(uintptr_t)(v140), v146, 0);
      }
LABEL_15:
      v15 = *v16;
      if ( *v16 == 0 )
        goto LABEL_36;
    }
    else
    {
      v26 = *((uint32_t *)*v128 - 3) + v146;
      v129 = *((uint32_t *)*v128 - 3);
      if ( v26 > *(uint32_t *)(v140[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v140), v26 + 64, 0);
        v129 = *((uint32_t *)*v128 - 3);
      }
      if ( v129 == 0 )
        goto LABEL_15;
      v27 = 0;
      v119 = v16;
      v28 = v128;
      do
      {
        v29 = v146++;
        v30 = v140[0];
        if ( *(int *)(v140[0] - 4) >= 0 )
        {
          v114 = v28;
          sub_19397C0(v140);
          v30 = v140[0];
          v28 = v114;
        }
        v31 = *((uint8_t *)*v28 + v27++);
        *(uint8_t *)(v30 + v29) = v31;
      }
      while ( v27 != v129 );
      v16 = v119;
LABEL_35:
      v15 = *v16;
      if ( *v16 == 0 )
      {
LABEL_36:
        v7 = v118;
        goto LABEL_37;
      }
    }
  }
  v7 = v118;
  sub_1939D80((int)(uintptr_t)(v140), v146, 0);
LABEL_37:
  sub_1939D80((int)(uintptr_t)(v140), v146, 0);
  g4_std::string::construct_copy(v137, v140);
  v32 = (void *)(v140[0] - 12);
  if ( (uint32_t *)(v140[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v140[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v32);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v145), "ChatLib", (int)(uintptr_t)(&v132));
  chatv2::Utils::Log(
    3u,
    0,
    (int)(uintptr_t)(&v145),
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/ArionRequestFactory.cpp",
    172,
    (int)(uintptr_t)(v137));
  v33 = (void *)(v145 - 12);
  if ( (uint32_t *)(v145 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v145 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v33);
  }
  v34 = (void *)(v137[0] - 12);
  if ( (uint32_t *)(v137[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v137[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v34);
  }
  chatv2::Requests::ArionRequestFactory::GetChannel((uint32_t *)(&v177), (int)(uintptr_t)(v127), v128, v125);
  v35 = v177;
  v36 = nullptr;
  v165 = v177;
  v166 = v178[0];
  if ( v178[0] != nullptr )
  {
    __sync_add_and_fetch(v178[0] + 1, 1);
    v35 = v165;
    v36 = v166;
  }
  v37 = *v7;
  *v7 = v35;
  v165 = v37;
  v38 = (volatile int32_t *)v7[1];
  v7[1] = (chatv2::Core::ArionChannel::Self *)v36;
  v166 = v38;
  boost::detail::shared_count::Destroy(&v166);
  boost::detail::shared_count::Destroy(v178);
  if ( *v7 != nullptr )
  {
    chatv2::Core::ArionChannel::Disconnect(*v7);
    v39 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v39 = *v7;
    }
    chatv2::Core::ArionChannel::SetCommandHost(v39, v133);
    v40 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v40 = *v7;
    }
    chatv2::Core::ArionChannel::SetCommandPath(v40, v134);
    v41 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v41 = *v7;
    }
    chatv2::Core::ArionChannel::SetListenHost(v41, v135);
    v42 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v42 = *v7;
    }
    chatv2::Core::ArionChannel::SetListenPath(v42, v136);
  }
  else
  {
    v173 = 0;
    v174[0] = nullptr;
    v82 = opNew(0x3C8u);
    *(uint32_t *)(v82 + 4) = 1;
    *(uint32_t *)(v82 + 8) = 1;
    *(uint32_t *)v82 = ((uint32_t)(uintptr_t)&off_20923A8);
    *(uint32_t *)(v82 + 12) = 0;
    *(uint8_t *)(v82 + 16) = 0;
    v174[0] = (volatile int32_t *)v82;
    v83 = (uint8_t *)G4_VCALL<int>(v82, 20);
    v84 = (chatv2::Core::ArionChannel::Self *)(v83 + 4);
    if ( v83 != (uint8_t *)-4 )
    {
      chatv2::Core::ArionChannel::Construct(v84, v127 + 13, v127 + 15, v128);
      v84 = (chatv2::Core::ArionChannel::Self *)(v83 + 4);
    }
    *v83 = 1;
    v147 = v84;
    v148 = v174[0];
    if ( v174[0] != nullptr )
      __sync_add_and_fetch(v174[0] + 1, 1);
    boost::detail::shared_count::Destroy(v174);
    v85 = v147;
    v86 = nullptr;
    v167 = v147;
    v168 = v148;
    if ( v148 != nullptr )
    {
      __sync_add_and_fetch(v148 + 1, 1);
      v85 = v167;
      v86 = v168;
    }
    v87 = *v7;
    *v7 = v85;
    v167 = v87;
    v88 = (volatile int32_t *)v7[1];
    v7[1] = (chatv2::Core::ArionChannel::Self *)v86;
    v168 = v88;
    boost::detail::shared_count::Destroy(&v168);
    boost::detail::shared_count::Destroy(&v148);
    v89 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v89 = *v7;
    }
    chatv2::Core::ArionChannel::SetCommandHost(v89, v133);
    v90 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v90 = *v7;
    }
    chatv2::Core::ArionChannel::SetCommandPath(v90, v134);
    v91 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v91 = *v7;
    }
    chatv2::Core::ArionChannel::SetListenHost(v91, v135);
    v92 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v92 = *v7;
    }
    chatv2::Core::ArionChannel::SetListenPath(v92, v136);
    v93 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v93 = *v7;
    }
    chatv2::Core::ArionChannel::SetLanguage(v93, v122);
    v94 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v94 = *v7;
    }
    chatv2::Core::ArionChannel::SetType(v94, v125);
    g4_std::string::construct_copy(v138, v128);
    v178[1] = (volatile int32_t *)*v7;
    v179 = v7[1];
    if ( v179 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v179 + 1, 1);
    boost::bind<void,chatv2::Requests::ArionRequestFactory::Self,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,std::string const&,chatv2::Core::ChannelType,chatv2::Requests::ArionRequestFactory::Self*,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,std::string,chatv2::Core::ChannelType>(v193);
    v95 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v95 = *v7;
    }
    ListenClient = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetListenClient(v95));
    g4_std_compat::op_assign(
      ListenClient + 20,
      v193);
    v97 = (void *)(v195 - 12);
    if ( (uint32_t *)(v195 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v195 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v97);
    }
    boost::detail::shared_count::Destroy(&v194);
    boost::detail::shared_count::Destroy((volatile int32_t **)&v179);
    v98 = (void *)(v138[0] - 12);
    if ( (uint32_t *)(v138[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v138[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v98);
    }
    v149 = *v7;
    v150 = v7[1];
    if ( v150 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v150 + 1, 1);
    sub_123B150(
      v181,
      (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed),
      0,
      (int)(uintptr_t)(v127),
      (volatile int32_t **)&v149);
    v99 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v99 = *v7;
    }
    v100 = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetListenClient(v99));
    g4_std_compat::op_assign(
      (boost::function1<void, boost::system::error_code::Self const&> *)(v100 + 68),
      (int)(uintptr_t)(v181));
    boost::detail::shared_count::Destroy(&v182);
    boost::detail::shared_count::Destroy((volatile int32_t **)&v150);
    v151 = *v7;
    v152 = v7[1];
    if ( v152 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v152 + 1, 1);
    sub_123B150(
      v183,
      (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed),
      0,
      (int)(uintptr_t)(v127),
      (volatile int32_t **)&v151);
    v101 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v101 = *v7;
    }
    v102 = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetListenClient(v101));
    g4_std_compat::op_assign(
      (boost::function1<void, boost::system::error_code::Self const&> *)(v102 + 84),
      (int)(uintptr_t)(v183));
    boost::detail::shared_count::Destroy(&v184);
    boost::detail::shared_count::Destroy((volatile int32_t **)&v152);
    v153 = *v7;
    v154 = v7[1];
    if ( v154 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v154 + 1, 1);
    sub_123B150(
      v185,
      (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::OnChannelListenClientReadWriteFailed),
      0,
      (int)(uintptr_t)(v127),
      (volatile int32_t **)&v153);
    v103 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v103 = *v7;
    }
    v104 = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetListenClient(v103));
    g4_std_compat::op_assign(
      (boost::function1<void, boost::system::error_code::Self const&> *)(v104 + 100),
      (int)(uintptr_t)(v185));
    boost::detail::shared_count::Destroy(&v186);
    boost::detail::shared_count::Destroy((volatile int32_t **)&v154);
    v155 = *v7;
    v156 = v7[1];
    if ( v156 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v156 + 1, 1);
    sub_123B150(
      v187,
      (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::OnChannelClientStartupFailed),
      0,
      (int)(uintptr_t)(v127),
      (volatile int32_t **)&v155);
    v105 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v105 = *v7;
    }
    CommandClient = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetCommandClient(v105));
    g4_std_compat::op_assign(
      (boost::function1<void, boost::system::error_code::Self const&> *)(CommandClient + 68),
      (int)(uintptr_t)(v187));
    boost::detail::shared_count::Destroy(&v188);
    boost::detail::shared_count::Destroy((volatile int32_t **)&v156);
    v157 = *v7;
    v158 = v7[1];
    if ( v158 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v158 + 1, 1);
    sub_123B150(
      v189,
      (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed),
      0,
      (int)(uintptr_t)(v127),
      (volatile int32_t **)&v157);
    v107 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v107 = *v7;
    }
    v108 = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetCommandClient(v107));
    g4_std_compat::op_assign(
      (boost::function1<void, boost::system::error_code::Self const&> *)(v108 + 84),
      (int)(uintptr_t)(v189));
    boost::detail::shared_count::Destroy(&v190);
    boost::detail::shared_count::Destroy((volatile int32_t **)&v158);
    v159 = *v7;
    v160 = v7[1];
    if ( v160 != nullptr )
      __sync_add_and_fetch((volatile int32_t *)v160 + 1, 1);
    sub_123B150(
      v191,
      (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::OnChannelCommandClientReadWriteFailed),
      0,
      (int)(uintptr_t)(v127),
      (volatile int32_t **)&v159);
    v109 = *v7;
    if ( *v7 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
        "px != 0");
      v109 = *v7;
    }
    v110 = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetCommandClient(v109));
    g4_std_compat::op_assign(
      (boost::function1<void, boost::system::error_code::Self const&> *)(v110 + 100),
      (int)(uintptr_t)(v191));
    boost::detail::shared_count::Destroy(&v192);
    boost::detail::shared_count::Destroy((volatile int32_t **)&v160);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v139), "You joined ", (int)(uintptr_t)(&v132) + 1);
  if ( v125 != 0 )
  {
    if ( v125 == 1 )
    {
      v61 = (uint32_t *)(uintptr_t)(boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,boost::hash<std::string>,std::equal_to<std::string>>>::opIndex(
              (boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>, std::string, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::string>, std::equal_to<std::string>>> *)(v127 + 1),
              v128));
      v62 = (volatile int32_t *)v7[1];
      v63 = *v7;
      v171 = *v7;
      v172 = v62;
      if ( v62 != nullptr )
      {
        __sync_add_and_fetch(v62 + 1, 1);
        v63 = v171;
      }
      v64 = (chatv2::Core::ArionChannel::Self *)v61[1];
      v61[1] = (uint32_t)(uintptr_t)(v63);
      v171 = v64;
      v65 = (volatile int32_t *)v61[2];
      v61[2] = (uint32_t)(uintptr_t)(v172);
      v172 = v65;
      boost::detail::shared_count::Destroy(&v172);
      g4_std::string::append((int)(uintptr_t)(v139), "channel: ", 9u);
    }
  }
  else
  {
    v43 = (uint32_t *)(uintptr_t)(boost::unordered::detail::table_impl<boost::unordered::detail::map<std::allocator<std::pair<std::string const,boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>,std::string,boost::shared_ptr<chatv2::Core::ArionChannel::Self>,boost::hash<std::string>,std::equal_to<std::string>>>::opIndex(
            (boost::unordered::detail::table<boost::unordered::detail::map<std::allocator<std::pair<std::string const, boost::shared_ptr<chatv2::Core::ArionChannel::Self>>>, std::string, boost::shared_ptr<chatv2::Core::ArionChannel::Self>, boost::hash<std::string>, std::equal_to<std::string>>> *)(v127 + 7),
            v128));
    v44 = (volatile int32_t *)v7[1];
    v45 = *v7;
    v169 = *v7;
    v170 = v44;
    if ( v44 != nullptr )
    {
      __sync_add_and_fetch(v44 + 1, 1);
      v45 = v169;
    }
    v46 = (chatv2::Core::ArionChannel::Self *)v43[1];
    v43[1] = (uint32_t)(uintptr_t)(v45);
    v169 = v46;
    v47 = (volatile int32_t *)v43[2];
    v43[2] = (uint32_t)(uintptr_t)(v170);
    v170 = v47;
    boost::detail::shared_count::Destroy(&v170);
    g4_std::string::append((int)(uintptr_t)(v139), "room: ", 6u);
  }
  v48 = *v7;
  if ( *v7 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
      "px != 0");
    v48 = *v7;
  }
  chatv2::Core::ArionChannel::Start(v48);
  v173 = 0;
  v174[0] = nullptr;
  v49 = opNew(0x38u);
  *(uint32_t *)(v49 + 4) = 1;
  *(uint32_t *)(v49 + 8) = 1;
  *(uint32_t *)v49 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v49 + 12) = 0;
  *(uint8_t *)(v49 + 16) = 0;
  v174[0] = (volatile int32_t *)v49;
  v50 = G4_VCALL<int>(v49, 20);
  v51 = v50 + 4;
  if ( v50 != -4 )
  {
    v113 = v50;
    v115 = v50 + 4;
    chatv2::Responses::ClientResponse::ClientResponse((uint32_t *)(v50 + 4), 13, (int)(uintptr_t)(v128));
    v51 = v115;
    v50 = v113;
  }
  *(uint8_t *)v50 = 1;
  v161 = v51;
  v162 = v174[0];
  if ( v174[0] != nullptr )
    __sync_add_and_fetch(v174[0] + 1, 1);
  boost::detail::shared_count::Destroy(v174);
  g4_std::string::append_str(v139, v128);
  v52 = v161;
  if ( v161 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
    v52 = v161;
  }
  chatv2::Responses::ClientResponse::SetMessage(v52, (int)(uintptr_t)(v139));
  v53 = v127[21];
  v54 = *(uint32_t *)(v53 + 36);
  if ( v54 != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    v163 = v161;
    v164 = v162;
    if ( v162 != nullptr )
    {
      __sync_add_and_fetch(v162 + 1, 1);
      v53 = v127[21];
      v54 = *(uint32_t *)(v53 + 36);
      if ( v54 == 0 )
      {
        sub_1243080(v180);
        std::terminate();
      }
    }
    v55 = *(void (**)(int, int *))((v54 & 0xFFFFFFFE) + 4);
    v175 = v163;
    v176 = v164;
    if ( v164 != nullptr )
      __sync_add_and_fetch(v164 + 1, 1);
    v55(v53 + 40, &v175);
    boost::detail::shared_count::Destroy(&v176);
    boost::detail::shared_count::Destroy(&v164);
  }
  boost::detail::shared_count::Destroy(&v162);
  v56 = (void *)(v139[0] - 12);
  if ( (uint32_t *)(v139[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v139[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v56);
  }
  v57 = (void *)(v136[0] - 12);
  if ( (uint32_t *)(v136[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v136[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v57);
  }
  v58 = (void *)(v135[0] - 12);
  if ( (uint32_t *)(v135[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v135[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v58);
  }
  v59 = (void *)(v134[0] - 12);
  if ( (uint32_t *)(v134[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v134[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v59);
  }
  v60 = (void *)(v133[0] - 12);
  if ( (uint32_t *)(v133[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v133[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v60);
  }
  return v7;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequestFactory::Destroy  (binary VA: 0x1241ac0)
// Original: chatv2::Requests::IRequestFactory::~IRequestFactory
// ----------------------------------------------------------------------------
void chatv2::Requests::IRequestFactory::Destroy(chatv2::Requests::IRequestFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20922A8);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IRequestFactory::Destroy_ea1242110  (binary VA: 0x1242110)
// Original: chatv2::Requests::IRequestFactory::~IRequestFactory
// ----------------------------------------------------------------------------
void chatv2::Requests::IRequestFactory::Destroy_ea1242110(chatv2::Requests::IRequestFactory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20922A8);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::LeaveChannelRequest::Destroy  (binary VA: 0x1245ab0)
// Original: chatv2::Requests::LeaveChannelRequest::~LeaveChannelRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::LeaveChannelRequest::Destroy(chatv2::Requests::LeaveChannelRequest::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20924C8);
  v1 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  chatv2::Requests::IRequest::Destroy((chatv2::Requests::IRequest::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::LeaveChannelRequest::Destroy_ea1245b20  (binary VA: 0x1245b20)
// Original: chatv2::Requests::LeaveChannelRequest::~LeaveChannelRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::LeaveChannelRequest::Destroy_ea1245b20(chatv2::Requests::LeaveChannelRequest::Self *self)
{
  chatv2::Requests::LeaveChannelRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::LeaveChannelRequest::SendFailureMessage  (binary VA: 0x1245b60)
// Original: chatv2::Requests::LeaveChannelRequest::SendFailureMessage
// ----------------------------------------------------------------------------
void chatv2::Requests::LeaveChannelRequest::SendFailureMessage(chatv2::Requests::LeaveChannelRequest::Self *self)
{
  int v1;
  char *untyped_deleter;
  int v3;
  int v4;
  int v5;
  void (*v6)(int, int *);
  volatile int32_t *v7;
  void *v8;
  typedef char *_g4_t_v9;
  typedef char *_g4_t_v10;
  typedef char *_g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[3];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef volatile int32_t *_g4_t_v17;
  typedef int (**_g4_t_v18)(std::exception *);
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v12)) > _g4_s3 ? (28u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (46u + sizeof(_g4_t_v13)) > _g4_s4 ? (46u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v14)) > _g4_s5 ? (48u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v15)) > _g4_s6 ? (60u + sizeof(_g4_t_v15)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v16)) > _g4_s7 ? (64u + sizeof(_g4_t_v16)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v17)) > _g4_s8 ? (68u + sizeof(_g4_t_v17)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v18)) > _g4_s9 ? (72u + sizeof(_g4_t_v18)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 46u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 60u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 64u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 68u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 72u);

  if ( *((uint32_t *)self + 8) == 1 )
  {
    v11 = (char *)self + 24;
    v1 = opNew(0x38u);
    *(uint32_t *)(v1 + 4) = 1;
    *(uint32_t *)(v1 + 8) = 1;
    *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2092388);
    *(uint32_t *)(v1 + 12) = 0;
    *(uint8_t *)(v1 + 16) = 0;
    untyped_deleter = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v1));
    v12 = (int)(uintptr_t)(untyped_deleter + 4);
    if ( untyped_deleter != (char *)-4 )
    {
      v10 = untyped_deleter;
      chatv2::Responses::ClientResponse::ClientResponse((uint32_t *)untyped_deleter + 1, 9, (int)(uintptr_t)(v11));
      untyped_deleter = v10;
    }
    *untyped_deleter = 1;
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v1, 12);
    }
    v14[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    v3 = *((uint32_t *)self + 7);
    if ( v3 == 1 )
    {
      g4_std::string::append((int)(uintptr_t)(v14), "Channel : ", 0xAu);
      v3 = *((uint32_t *)self + 7);
    }
    if ( v3 == 0 )
      g4_std::string::append((int)(uintptr_t)(v14), "Room : ", 7u);
    g4_std::string::append_str(v14, v11);
    g4_std::string::append((int)(uintptr_t)(v14), " is invalid", 0xBu);
    if ( v12 == 0 )
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Res"
        "ponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
        "px != 0");
    chatv2::Responses::ClientResponse::SetMessage(v12, (int)(uintptr_t)(v14));
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
    v4 = *((uint32_t *)self + 5);
    v5 = *(uint32_t *)(v4 + 36);
    if ( v5 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "call to empty boost::function", (int)(uintptr_t)(&v13));
      sub_19042E0(&v18, &v15);
      g4_std::string::Destroy(&v15);
      v18 = (int (**)(std::exception *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20495A8));
      std::terminate();
    }
    v16 = v12;
    v6 = *(void (**)(int, int *))((v5 & 0xFFFFFFFE) + 4);
    v17 = (volatile int32_t *)v1;
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
    v6(v4 + 40, &v16);
    v7 = v17;
    if ( v17 != nullptr && __sync_fetch_and_add(v17 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v1, 12);
    }
    v8 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v9 = (char *)&v13 + 1;
      g4_std::string::Rep::M_destroy(v8);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8, v9);
      if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v1, 12);
    }
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::LeaveChannelRequest::Construct  (binary VA: 0x1245ec0)
// Original: chatv2::Requests::LeaveChannelRequest::LeaveChannelRequest
// ----------------------------------------------------------------------------
int chatv2::Requests::LeaveChannelRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3, int a4)
{
  chatv2::Requests::IRequest::Construct(a1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20924C8);
  *((uint32_t *)a1 + 5) = a2;
  g4_std::string::construct_copy((char *)a1 + 24, a3);
  *((uint32_t *)a1 + 7) = a4;
  return a4;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::LeaveChannelRequest::CheckFailure  (binary VA: 0x1245f20)
// Original: chatv2::Requests::LeaveChannelRequest::CheckFailure
// ----------------------------------------------------------------------------
int chatv2::Requests::LeaveChannelRequest::CheckFailure(chatv2::Requests::LeaveChannelRequest::Self *self)
{
  chatv2::Requests::LeaveChannelRequest::Self *v1;
  int v2;
  int v4;
  int v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  void *v8;
  void *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef uint32_t _g4_t_v13[3];
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef chatv2::Requests::LeaveChannelRequest::Self **_g4_t_v19;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (61u + sizeof(_g4_t_v12)) > _g4_s2 ? (61u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v13)) > _g4_s3 ? (64u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v14)) > _g4_s4 ? (76u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (80u + sizeof(_g4_t_v15)) > _g4_s5 ? (80u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (84u + sizeof(_g4_t_v16)) > _g4_s6 ? (84u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (88u + sizeof(_g4_t_v17)) > _g4_s7 ? (88u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (92u + sizeof(_g4_t_v18)) > _g4_s8 ? (92u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (104u + sizeof(_g4_t_v19)) > _g4_s9 ? (104u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 61u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 64u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 76u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 80u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 84u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 88u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 92u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 104u);

  v19 = &self;
  v1 = self;
  v2 = 1;
  if ( (uint8_t)chatv2::Requests::IRequest::CheckFailure((chatv2::Requests::IRequest::Self *)(self)) == 0 )
  {
    v4 = *((uint32_t *)v1 + 7);
    chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v17);
    v5 = v17;
    if ( v17 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
        "px != 0");
      v5 = v17;
    }
    v11 = v4;
    v10 = v5;
    chatv2::Requests::ArionRequestFactory::GetChannel(&v15);
    v6 = v18;
    if ( v18 != nullptr && __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v6, 8, v10, (int)(uintptr_t)(v1) + 24, v11);
      if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v6, 12);
    }
    v2 = 0;
    if ( v15 == 0 )
    {
      jcore::Format_std_string_char_68_std_s_80b2fb(v13);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "ChatLib", (int)(uintptr_t)(&v12));
      chatv2::Utils::Log(
        3,
        0,
        &v14,
        "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/LeaveChannelRequest.cpp",
        27,
        v13);
      v8 = (void *)(v14 - 12);
      if ( (uint32_t *)(v14 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v8);
      }
      v9 = (void *)(v13[0] - 12);
      if ( (uint32_t *)(v13[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      *((uint32_t *)v1 + 8) = 1;
      v2 = 1;
    }
    v7 = v16;
    if ( v16 != nullptr && __sync_fetch_and_add(v16 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::LeaveChannelRequest::Execute  (binary VA: 0x1246160)
// Original: chatv2::Requests::LeaveChannelRequest::Execute
// ----------------------------------------------------------------------------
int chatv2::Requests::LeaveChannelRequest::Execute(chatv2::Requests::LeaveChannelRequest::Self *self)
{
  const char *v1;
  char v2;
  size_t v3;
  int v4;
  size_t v5;
  const char *v6;
  char v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v13;
  size_t v14;
  int v15;
  char v16;
  void *v17;
  void *v18;
  void *v19;
  int v20;
  int v21;
  int result;
  volatile int32_t *v23;
  size_t v24;
  int v25;
  size_t v26;
  int v27;
  typedef char _g4_t_v28;
  typedef char _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef const char *_g4_t_v31;
  typedef const char *_g4_t_v32;
  typedef const char *_g4_t_v33;
  typedef const char *_g4_t_v34;
  typedef const char *_g4_t_v35;
  typedef const char *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef uint32_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef chatv2::Requests::LeaveChannelRequest::Self *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t _g4_t_v43[4];
  typedef int _g4_t_v44[3];
  typedef int _g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef uint8_t _g4_t_v47[2];
  typedef char _g4_t_v48;
  typedef char _g4_t_v49;
  typedef int _g4_t_v50;
  typedef volatile int32_t *_g4_t_v51;
  typedef chatv2::Requests::LeaveChannelRequest::Self **_g4_t_v52;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (0u + sizeof(_g4_t_v28)) > _g4_s0 ? (0u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v29)) > _g4_s1 ? (0u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v30)) > _g4_s2 ? (0u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v31)) > _g4_s3 ? (0u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v32)) > _g4_s4 ? (0u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v33)) > _g4_s5 ? (0u + sizeof(_g4_t_v33)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v34)) > _g4_s6 ? (0u + sizeof(_g4_t_v34)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v35)) > _g4_s7 ? (0u + sizeof(_g4_t_v35)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v36)) > _g4_s8 ? (4u + sizeof(_g4_t_v36)) : _g4_s8,
    _g4_s10 = (8u + sizeof(_g4_t_v37)) > _g4_s9 ? (8u + sizeof(_g4_t_v37)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v38)) > _g4_s10 ? (12u + sizeof(_g4_t_v38)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v39)) > _g4_s11 ? (16u + sizeof(_g4_t_v39)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v40)) > _g4_s12 ? (20u + sizeof(_g4_t_v40)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v41)) > _g4_s13 ? (24u + sizeof(_g4_t_v41)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v42)) > _g4_s14 ? (40u + sizeof(_g4_t_v42)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v43)) > _g4_s15 ? (44u + sizeof(_g4_t_v43)) : _g4_s15,
    _g4_s17 = (60u + sizeof(_g4_t_v44)) > _g4_s16 ? (60u + sizeof(_g4_t_v44)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v45)) > _g4_s17 ? (72u + sizeof(_g4_t_v45)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v46)) > _g4_s18 ? (76u + sizeof(_g4_t_v46)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v47)) > _g4_s19 ? (80u + sizeof(_g4_t_v47)) : _g4_s19,
    _g4_s21 = (82u + sizeof(_g4_t_v48)) > _g4_s20 ? (82u + sizeof(_g4_t_v48)) : _g4_s20,
    _g4_s22 = (83u + sizeof(_g4_t_v49)) > _g4_s21 ? (83u + sizeof(_g4_t_v49)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v50)) > _g4_s22 ? (84u + sizeof(_g4_t_v50)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v51)) > _g4_s23 ? (88u + sizeof(_g4_t_v51)) : _g4_s23,
    _g4_s25 = (100u + sizeof(_g4_t_v52)) > _g4_s24 ? (100u + sizeof(_g4_t_v52)) : _g4_s24
  };
  alignas(16) uint8_t _g4_sf[_g4_s25];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 0u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 0u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 0u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 0u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 20u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 24u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 44u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 60u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 72u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 76u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 80u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 82u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 83u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 84u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 88u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 100u);

  v52 = &self;
  v40 = self;
  v37 = (uint32_t *)((char *)self + 28);
  v38 = (uint32_t *)((char *)self + 24);
  v44[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v44), 0x80u, 0);
  v46 = 0;
  v1 = " channel name: {0}, channel type: {1}\n";
  v2 = aChannelName0Ch /* " channel name: {0}, channel type: {1}\n" */[0];
  v39 = 0;
  while ( 1 )
  {
    v6 = v1 + 1;
    if ( v2 != 123 )
    {
      v3 = v46;
      v4 = v44[0];
      v5 = v46 + 1;
      if ( v46 + 1 > *(uint32_t *)(v44[0] - 12) )
      {
        v28 = v2;
        sub_1939D80((int)(uintptr_t)(v44), v46 + 65, 0);
        v3 = v46;
        v4 = v44[0];
        v2 = v28;
        v5 = v46 + 1;
      }
      v46 = v5;
      if ( *(int *)(v4 - 4) >= 0 )
      {
        v29 = v2;
        sub_19397C0(v44);
        v4 = v44[0];
        v2 = v29;
      }
      *(uint8_t *)(v4 + v3) = v2;
      v1 = v6;
      goto LABEL_7;
    }
    v7 = v1[1];
    if ( v7 == 123 )
    {
      v24 = v46;
      v25 = v44[0];
      if ( v46 + 2 > *(uint32_t *)(v44[0] - 12) )
      {
        v35 = v1;
        sub_1939D80((int)(uintptr_t)(v44), v46 + 66, 0);
        v24 = v46;
        v25 = v44[0];
        v1 = v35;
        ++v46;
        if ( *(int *)(v44[0] - 4) < 0 )
          goto LABEL_48;
      }
      else
      {
        ++v46;
        if ( *(int *)(v44[0] - 4) < 0 )
        {
LABEL_48:
          *(uint8_t *)(v25 + v24) = 123;
          v26 = v46++;
          v27 = v44[0];
          if ( *(int *)(v44[0] - 4) >= 0 )
          {
            v34 = v1;
            sub_19397C0(v44);
            v27 = v44[0];
            v1 = v34;
          }
          *(uint8_t *)(v27 + v26) = 123;
          v1 += 2;
          goto LABEL_7;
        }
      }
      v33 = v1;
      sub_19397C0(v44);
      v25 = v44[0];
      v1 = v33;
      goto LABEL_48;
    }
    v47[0] = 0;
    v47[1] = 0;
    v48 = 20;
    v49 = 32;
    if ( v7 == 0 )
      goto LABEL_34;
    v8 = 1;
    v9 = 0;
    while ( 1 )
    {
      v7 = *v6;
      if ( (uint8_t)(*v6 - 48) > 9u )
        break;
      v10 = v8 * v9;
      ++v6;
      v8 *= 10;
      v9 = v10 + v7 - 48;
      if ( *v6 == 0 )
      {
        v11 = v9;
        v7 = 0;
        goto LABEL_15;
      }
    }
    v11 = v9;
    if ( v8 == 1 )
LABEL_34:
      v11 = v39++;
    if ( v7 == 58 )
    {
      v7 = v6[1];
      if ( v7 == 120 )
      {
        v1 = v6 + 3;
        v48 = v48 & 1 | 0x20;
        v7 = v6[2];
      }
      else
      {
        v1 = v6 + 2;
        if ( v7 == 88 )
        {
          v48 = 33;
          v1 = v6 + 3;
          v7 = v6[2];
        }
      }
    }
    else
    {
LABEL_15:
      v1 = v6 + 1;
    }
    if ( v7 != 125 )
      break;
    if ( v11 != 0 )
    {
      v31 = v1;
      if ( v11 == 1 )
        jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315(v44, &v46, v47, *v37);
      else
        sub_1939D80((int)(uintptr_t)(v44), v46, 0);
      v1 = v31;
      goto LABEL_7;
    }
    v41 = *(uint32_t *)(*v38 - 12);
    if ( v46 + v41 > *(uint32_t *)(v44[0] - 12) )
    {
      v32 = v1;
      sub_1939D80((int)(uintptr_t)(v44), v46 + v41 + 64, 0);
      v1 = v32;
      v41 = *(uint32_t *)(*((uint32_t *)v40 + 6) - 12);
      if ( v41 == 0 )
        goto LABEL_7;
LABEL_20:
      v12 = 0;
      v13 = v38;
      v36 = v1;
      do
      {
        v14 = v46++;
        v15 = v44[0];
        if ( *(int *)(v44[0] - 4) >= 0 )
        {
          v30 = v13;
          sub_19397C0(v44);
          v15 = v44[0];
          v13 = v30;
        }
        v16 = *(uint8_t *)(*v13 + v12++);
        *(uint8_t *)(v15 + v14) = v16;
      }
      while ( v12 != v41 );
      v1 = v36;
      v2 = *v36;
      if ( *v36 == 0 )
        goto LABEL_25;
    }
    else
    {
      if ( v41 != 0 )
        goto LABEL_20;
LABEL_7:
      v2 = *v1;
      if ( *v1 == 0 )
        goto LABEL_25;
    }
  }
  sub_1939D80((int)(uintptr_t)(v44), v46, 0);
LABEL_25:
  sub_1939D80((int)(uintptr_t)(v44), v46, 0);
  g4_std::string::construct_copy(v43, v44);
  v17 = (void *)(v44[0] - 12);
  if ( (uint32_t *)(v44[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v45), "ChatLib", (int)(uintptr_t)(&v42));
  chatv2::Utils::Log(
    3,
    0,
    &v45,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/LeaveChannelRequest.cpp",
    36,
    v43);
  v18 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v43[0] - 12);
  if ( (uint32_t *)(v43[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v43[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = *((uint32_t *)v40 + 7);
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v50);
  v21 = v50;
  if ( v50 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v21 = v50;
  }
  chatv2::Requests::ArionRequestFactory::StopChannel(v21, (const void **)(v38), v20);
  v23 = v51;
  if ( v51 != nullptr )
  {
    result = __sync_fetch_and_add(v51 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v23, 8);
      if ( __sync_fetch_and_add(v23 + 2, 0xFFFFFFFF) == 1 )
        return G4_VCALL<int>(v23, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ListenArionRequest::GetClient  (binary VA: 0x1246f80)
// Original: chatv2::Requests::ListenArionRequest::GetClient
// ----------------------------------------------------------------------------
int chatv2::Requests::ListenArionRequest::GetClient(chatv2::Requests::ListenArionRequest::Self *self)
{
  return *((uint32_t *)self + 13);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ListenArionRequest::CheckFailure  (binary VA: 0x1246f90)
// Original: chatv2::Requests::ListenArionRequest::CheckFailure
// ----------------------------------------------------------------------------
int chatv2::Requests::ListenArionRequest::CheckFailure(chatv2::Requests::ListenArionRequest::Self *self)
{
  return chatv2::Requests::IArionServerRequest::CheckFailure(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ListenArionRequest::CanExecute  (binary VA: 0x1246fc0)
// Original: chatv2::Requests::ListenArionRequest::CanExecute
// ----------------------------------------------------------------------------
int chatv2::Requests::ListenArionRequest::CanExecute(chatv2::Requests::ListenArionRequest::Self *self)
{
  bool CanExecute;
  int v2;
  chatv2::Connectivity::IClient::Self *v3;

  CanExecute = chatv2::Requests::IRequest::CanExecute((chatv2::Requests::IRequest::Self *)(self));
  v2 = 0;
  if ( CanExecute )
  {
    v3 = (chatv2::Connectivity::IClient::Self *)G4_VCALL<int>(self, 24);
    return chatv2::Connectivity::IClient::IsStarted(v3);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ListenArionRequest::Destroy  (binary VA: 0x1247010)
// Original: chatv2::Requests::ListenArionRequest::~ListenArionRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::ListenArionRequest::Destroy(chatv2::Requests::ListenArionRequest::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20924E8);
  v1 = *((uint32_t *)self + 14);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  chatv2::Requests::IArionServerRequest::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ListenArionRequest::Destroy_ea1247080  (binary VA: 0x1247080)
// Original: chatv2::Requests::ListenArionRequest::~ListenArionRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::ListenArionRequest::Destroy_ea1247080(chatv2::Requests::ListenArionRequest::Self *self)
{
  chatv2::Requests::ListenArionRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ListenArionRequest::ToHTTPRequest  (binary VA: 0x12470c0)
// Original: chatv2::Requests::ListenArionRequest::ToHTTPRequest
// ----------------------------------------------------------------------------
chatv2::Requests::ListenArionRequest::Self * chatv2::Requests::ListenArionRequest::ToHTTPRequest(chatv2::Requests::ListenArionRequest::Self *self, int a2)
{
  int v2;
  uint8_t *v3;
  volatile int32_t *v4;
  typedef uint8_t *_g4_t_v6;
  typedef volatile int32_t *_g4_t_v7;
  typedef uint8_t *_g4_t_untyped_deleter;
  typedef int _g4_t_v9;
  typedef volatile int32_t *_g4_t_v10;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_untyped_deleter)) > _g4_s2 ? (12u + sizeof(_g4_t_untyped_deleter)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v9)) > _g4_s3 ? (16u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v10)) > _g4_s4 ? (20u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_untyped_deleter &untyped_deleter = *reinterpret_cast<_g4_t_untyped_deleter *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);

  v2 = opNew(0xF0u);
  *(uint32_t *)(v2 + 4) = 1;
  *(uint32_t *)(v2 + 8) = 1;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2092528);
  *(uint32_t *)(v2 + 12) = 0;
  *(uint8_t *)(v2 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>> *)v2);
  v3 = untyped_deleter + 4;
  v9 = chatv2::Utils::ChatLibHeaderOptions::GetHeaderOptions;
  v10 = (volatile int32_t *)(*(uint8_t **)unk_2116578);
  if ( (*(uint8_t **)unk_2116578) != 0 )
    __sync_add_and_fetch((volatile int32_t *)((*(uint8_t **)unk_2116578) + 4), 1);
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPRequest::Construct(v3, a2 + 56, &v9);
    v3 = untyped_deleter + 4;
  }
  v4 = v10;
  if ( v10 != nullptr && __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
  {
    v7 = v4;
    v6 = v3;
    G4_VCALL<void>(v4, 8);
    v3 = v6;
    if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (**)(uint8_t *, volatile int32_t *))(*v7 + 12))(v6, v7);
      v3 = v6;
    }
  }
  *untyped_deleter = 1;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 1) = v2;
  __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v2, 12);
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ListenArionRequest::Construct  (binary VA: 0x1247210)
// Original: chatv2::Requests::ListenArionRequest::ListenArionRequest
// ----------------------------------------------------------------------------
int chatv2::Requests::ListenArionRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3, int a4, int a5, int a6)
{
  void *v6;
  uint16_t v8[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v8));
  chatv2::Requests::IArionServerRequest::Construct(a1, a2, a3, (int)(uintptr_t)(&v8[1]), a4, 1);
  v6 = (void *)(*(uint32_t *)&v8[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v8[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v8[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20924E8);
  *((uint32_t *)a1 + 13) = a5;
  return (int)(uintptr_t)(g4_std::string::construct_copy((char *)a1 + 56, a6));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::CanExecute  (binary VA: 0x1247870)
// Original: chatv2::Requests::SendInviteRequest::CanExecute
// ----------------------------------------------------------------------------
int chatv2::Requests::SendInviteRequest::CanExecute(chatv2::Requests::SendInviteRequest::Self *self)
{
  bool CanExecute;
  int v2;
  chatv2::Connectivity::IClient::Self *v3;

  CanExecute = chatv2::Requests::IRequest::CanExecute((chatv2::Requests::IRequest::Self *)(self));
  v2 = 0;
  if ( CanExecute )
  {
    v3 = (chatv2::Connectivity::IClient::Self *)G4_VCALL<int>(self, 24);
    return chatv2::Connectivity::IClient::IsStarted(v3);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::Destroy  (binary VA: 0x12478c0)
// Original: chatv2::Requests::SendInviteRequest::~SendInviteRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::SendInviteRequest::Destroy(chatv2::Requests::SendInviteRequest::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092548);
  v1 = *((uint32_t *)self + 16);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 15);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 14);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  chatv2::Requests::IArionServerRequest::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::Destroy_ea1247990  (binary VA: 0x1247990)
// Original: chatv2::Requests::SendInviteRequest::~SendInviteRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::SendInviteRequest::Destroy_ea1247990(chatv2::Requests::SendInviteRequest::Self *self)
{
  chatv2::Requests::SendInviteRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::GetClient  (binary VA: 0x12479d0)
// Original: chatv2::Requests::SendInviteRequest::GetClient
// ----------------------------------------------------------------------------
char * chatv2::Requests::SendInviteRequest::GetClient(chatv2::Requests::SendInviteRequest::Self *self)
{
  chatv2::Requests::ArionRequestFactory::Self *v1;
  char *result;
  volatile int32_t *v3;
  typedef char *_g4_t_v4;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v5;
  typedef volatile int32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v5, *((uint32_t *)self + 13));
  v1 = v5;
  if ( v5 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v1 = v5;
  }
  result = chatv2::Requests::ArionRequestFactory::GetInviteClient(v1);
  v3 = v6;
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
  {
    v4 = result;
    G4_VCALL<void>(v3, 8);
    result = v4;
    if ( __sync_fetch_and_add(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 12);
      return v4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::ToHTTPRequest  (binary VA: 0x1247aa0)
// Original: chatv2::Requests::SendInviteRequest::ToHTTPRequest
// ----------------------------------------------------------------------------
chatv2::Requests::SendInviteRequest::Self * chatv2::Requests::SendInviteRequest::ToHTTPRequest(chatv2::Requests::SendInviteRequest::Self *self, int a2)
{
  int v2;
  int v3;
  volatile int32_t *v4;
  chatv2::Core::ArionChannel::Self *v5;
  int CommandPath;
  int v7;
  char *v8;
  volatile int32_t *v9;
  int v10;
  uint8_t *v11;
  int v12;
  volatile int32_t *v13;
  int v14;
  uint8_t *v15;
  int v16;
  volatile int32_t *v17;
  void *v18;
  void *v19;
  void *v20;
  void *v21;
  volatile int32_t *v22;
  typedef gaia::Gaia::Self *_g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef volatile int32_t *_g4_t_v29;
  typedef uint8_t *_g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef void *_g4_t_v32;
  typedef void *_g4_t_v33;
  typedef chatv2::Requests::SendInviteRequest::Self *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef char *_g4_t_untyped_deleter;
  typedef uint8_t *_g4_t_v37;
  typedef uint8_t *_g4_t_v38;
  typedef int _g4_t_v39;
  typedef char _g4_t_v40;
  typedef char _g4_t_v41;
  typedef char _g4_t_v42;
  typedef char _g4_t_v43;
  typedef int _g4_t_v44[4];
  typedef uint32_t _g4_t_v45[4];
  typedef uint32_t _g4_t_v46[4];
  typedef uint32_t _g4_t_v47[4];
  typedef int _g4_t_v48[4];
  typedef int _g4_t_v49[4];
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v50;
  typedef volatile int32_t *_g4_t_v51;
  typedef uint8_t *_g4_t_v52;
  typedef volatile int32_t *_g4_t_v53;
  typedef uint8_t *_g4_t_v54;
  typedef volatile int32_t *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef volatile int32_t *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
  typedef chatv2::Requests::SendInviteRequest::Self **_g4_t_v60;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v24)) > _g4_s0 ? (8u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v25)) > _g4_s1 ? (12u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v27)) > _g4_s3 ? (12u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v28)) > _g4_s4 ? (36u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v29)) > _g4_s5 ? (40u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v30)) > _g4_s6 ? (40u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v31)) > _g4_s7 ? (40u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v32)) > _g4_s8 ? (44u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v33)) > _g4_s9 ? (44u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v34)) > _g4_s10 ? (48u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v35)) > _g4_s11 ? (52u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_untyped_deleter)) > _g4_s12 ? (52u + sizeof(_g4_t_untyped_deleter)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v37)) > _g4_s13 ? (52u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v38)) > _g4_s14 ? (52u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v39)) > _g4_s15 ? (64u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v40)) > _g4_s16 ? (68u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (69u + sizeof(_g4_t_v41)) > _g4_s17 ? (69u + sizeof(_g4_t_v41)) : _g4_s17,
    _g4_s19 = (70u + sizeof(_g4_t_v42)) > _g4_s18 ? (70u + sizeof(_g4_t_v42)) : _g4_s18,
    _g4_s20 = (71u + sizeof(_g4_t_v43)) > _g4_s19 ? (71u + sizeof(_g4_t_v43)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v44)) > _g4_s20 ? (72u + sizeof(_g4_t_v44)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v45)) > _g4_s21 ? (88u + sizeof(_g4_t_v45)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v46)) > _g4_s22 ? (104u + sizeof(_g4_t_v46)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v47)) > _g4_s23 ? (120u + sizeof(_g4_t_v47)) : _g4_s23,
    _g4_s25 = (136u + sizeof(_g4_t_v48)) > _g4_s24 ? (136u + sizeof(_g4_t_v48)) : _g4_s24,
    _g4_s26 = (152u + sizeof(_g4_t_v49)) > _g4_s25 ? (152u + sizeof(_g4_t_v49)) : _g4_s25,
    _g4_s27 = (168u + sizeof(_g4_t_v50)) > _g4_s26 ? (168u + sizeof(_g4_t_v50)) : _g4_s26,
    _g4_s28 = (172u + sizeof(_g4_t_v51)) > _g4_s27 ? (172u + sizeof(_g4_t_v51)) : _g4_s27,
    _g4_s29 = (184u + sizeof(_g4_t_v52)) > _g4_s28 ? (184u + sizeof(_g4_t_v52)) : _g4_s28,
    _g4_s30 = (188u + sizeof(_g4_t_v53)) > _g4_s29 ? (188u + sizeof(_g4_t_v53)) : _g4_s29,
    _g4_s31 = (200u + sizeof(_g4_t_v54)) > _g4_s30 ? (200u + sizeof(_g4_t_v54)) : _g4_s30,
    _g4_s32 = (204u + sizeof(_g4_t_v55)) > _g4_s31 ? (204u + sizeof(_g4_t_v55)) : _g4_s31,
    _g4_s33 = (216u + sizeof(_g4_t_v56)) > _g4_s32 ? (216u + sizeof(_g4_t_v56)) : _g4_s32,
    _g4_s34 = (220u + sizeof(_g4_t_v57)) > _g4_s33 ? (220u + sizeof(_g4_t_v57)) : _g4_s33,
    _g4_s35 = (224u + sizeof(_g4_t_v58)) > _g4_s34 ? (224u + sizeof(_g4_t_v58)) : _g4_s34,
    _g4_s36 = (228u + sizeof(_g4_t_v59)) > _g4_s35 ? (228u + sizeof(_g4_t_v59)) : _g4_s35,
    _g4_s37 = (240u + sizeof(_g4_t_v60)) > _g4_s36 ? (240u + sizeof(_g4_t_v60)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 36u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 40u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 44u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_untyped_deleter &untyped_deleter = *reinterpret_cast<_g4_t_untyped_deleter *>(_g4_sf + 52u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 52u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 64u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 68u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 69u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 70u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 71u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 88u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 104u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 120u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 136u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 152u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 168u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 172u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 184u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 188u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 200u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 204u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 216u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 220u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 224u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 228u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 240u);

  v60 = &self;
  v2 = a2;
  v34 = self;
  v35 = *(uint32_t *)(a2 + 68);
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v58, *(uint32_t *)(a2 + 52));
  v3 = v58;
  if ( v58 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v3 = v58;
  }
  chatv2::Requests::ArionRequestFactory::GetChannel((uint32_t *)(&v50), v3, (const void **)(v2 + 56), v35);
  v4 = v59;
  if ( v59 != nullptr && __sync_fetch_and_add(v59 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  v5 = v50;
  if ( v50 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
      "px != 0");
    v5 = v50;
  }
  CommandPath = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetCommandPath(v5));
  g4_std::string::assign_str(v2 + 64, CommandPath);
  g4_std::string::construct_copy(v44, v2 + 64);
  g4_std::string::append((int)(uintptr_t)(v44), "/invite", 7u);
  v7 = opNew(0xF0u);
  *(uint32_t *)(v7 + 4) = 1;
  *(uint32_t *)(v7 + 8) = 1;
  *(uint32_t *)v7 = ((uint32_t)(uintptr_t)&off_2092528);
  *(uint32_t *)(v7 + 12) = 0;
  *(uint8_t *)(v7 + 16) = 0;
  untyped_deleter = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>> *)v7));
  v8 = untyped_deleter + 4;
  v56 = chatv2::Utils::ChatLibHeaderOptions::PostHeaderOptions;
  v57 = (volatile int32_t *)(*(uint8_t **)unk_2116580);
  if ( (*(uint8_t **)unk_2116580) != 0 )
    __sync_add_and_fetch((volatile int32_t *)((*(uint8_t **)unk_2116580) + 4), 1);
  if ( untyped_deleter != (char *)-4 )
  {
    chatv2::Connectivity::HTTPRequest::Construct(v8, v44, &v56);
    v8 = untyped_deleter + 4;
  }
  v9 = v57;
  if ( v57 != nullptr && __sync_fetch_and_add(v57 + 1, 0xFFFFFFFF) == 1 )
  {
    v29 = v9;
    v28 = v8;
    G4_VCALL<void>(v9, 8);
    v8 = v28;
    if ( __sync_fetch_and_add(v29 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v29, 12);
      v8 = v28;
    }
  }
  *untyped_deleter = 1;
  *(uint32_t *)v34 = (uint32_t)(uintptr_t)(v8);
  *((uint32_t *)v34 + 1) = v7;
  __sync_add_and_fetch((volatile int32_t *)(v7 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v7 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v7, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v7 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v7, 12);
  }
  v45[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v2 + 60, v45);
  v10 = opNew(0x1Cu);
  *(uint32_t *)(v10 + 4) = 1;
  *(uint32_t *)(v10 + 8) = 1;
  *(uint32_t *)(v10 + 12) = 0;
  *(uint32_t *)v10 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v10 + 16) = 0;
  v37 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v10);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v48), "recipient", (int)(uintptr_t)(&v39));
  v11 = v37 + 4;
  if ( v37 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v37 + 4, v48, v45);
    v11 = v37 + 4;
  }
  v32 = (void *)(v48[0] - 12);
  if ( (uint32_t *)(v48[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v25 = (char *)&v39 + 2;
    v30 = v11;
    g4_std::string::Rep::M_destroy(v32);
    v11 = v30;
  }
  *v37 = 1;
  v52 = v11;
  v53 = (volatile int32_t *)v10;
  __sync_add_and_fetch((volatile int32_t *)(v10 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v10 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v10, 8, v25);
    if ( __sync_fetch_and_add((volatile int32_t *)(v10 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v10, 12);
  }
  v12 = *(uint32_t *)v34;
  if ( *(uint32_t *)v34 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v12 = *(uint32_t *)v34;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v12, &v52);
  v13 = v53;
  if ( v53 != nullptr && __sync_fetch_and_add(v53 + 1, 0xFFFFFFFF) == 1 )
  {
    v24 = (gaia::Gaia::Self *)v13;
    (*(void (**)(void))(*v13 + 8))();
    if ( __sync_fetch_and_add(v13 + 2, 0xFFFFFFFF) == 1 )
    {
      v24 = (gaia::Gaia::Self *)v13;
      (*(void (**)(void))(*v13 + 12))();
    }
  }
  gaia::Gaia::GetInstance(v24);
  gaia::Gaia::GetJanusToken(v46);
  v47[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v46, v47);
  v14 = opNew(0x1Cu);
  *(uint32_t *)(v14 + 4) = 1;
  *(uint32_t *)(v14 + 8) = 1;
  *(uint32_t *)(v14 + 12) = 0;
  *(uint32_t *)v14 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v14 + 16) = 0;
  v38 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v49), "access_token", (int)(uintptr_t)(&v39) + 1);
  v15 = v38 + 4;
  if ( v38 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v38 + 4, v49, v47);
    v15 = v38 + 4;
  }
  v33 = (void *)(v49[0] - 12);
  if ( (uint32_t *)(v49[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v26 = (char *)&v39 + 3;
    v31 = v15;
    g4_std::string::Rep::M_destroy(v33);
    v15 = v31;
  }
  *v38 = 1;
  v54 = v15;
  v55 = (volatile int32_t *)v14;
  __sync_add_and_fetch((volatile int32_t *)(v14 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v14 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v14, 8, v26);
    if ( __sync_fetch_and_add((volatile int32_t *)(v14 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v14, 12);
  }
  v16 = *(uint32_t *)v34;
  if ( *(uint32_t *)v34 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v16 = *(uint32_t *)v34;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v16, &v54);
  v17 = v55;
  if ( v55 != nullptr && __sync_fetch_and_add(v55 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v17, 8);
    if ( __sync_fetch_and_add(v17 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v17, 12);
  }
  v18 = (void *)(v47[0] - 12);
  if ( (uint32_t *)(v47[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v27 = &v40;
    g4_std::string::Rep::M_destroy(v18);
  }
  v19 = (void *)(v46[0] - 12);
  if ( (uint32_t *)(v46[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v27 = &v41;
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = (void *)(v45[0] - 12);
  if ( (uint32_t *)(v45[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v27 = &v42;
    g4_std::string::Rep::M_destroy(v20);
  }
  v21 = (void *)(v44[0] - 12);
  if ( (uint32_t *)(v44[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v27 = &v43;
    g4_std::string::Rep::M_destroy(v21);
  }
  v22 = v51;
  if ( v51 != nullptr && __sync_fetch_and_add(v51 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v22, 8, v27);
    if ( __sync_fetch_and_add(v22 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v22, 12);
  }
  return v34;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::CheckFailure  (binary VA: 0x12482e0)
// Original: chatv2::Requests::SendInviteRequest::CheckFailure
// ----------------------------------------------------------------------------
int chatv2::Requests::SendInviteRequest::CheckFailure(chatv2::Requests::SendInviteRequest::Self *self)
{
  chatv2::Requests::SendInviteRequest::Self *v1;
  int v2;
  int v4;
  int v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  size_t v8;
  char v9;
  int v10;
  size_t v11;
  uint8_t *v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  size_t v20;
  chatv2::Requests::SendInviteRequest::Self *v21;
  void *v22;
  void *v23;
  void *v24;
  int v25;
  uint32_t *v26;
  int v27;
  size_t v28;
  char v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef char _g4_t_v32;
  typedef char _g4_t_v33;
  typedef uint32_t *_g4_t_v34;
  typedef size_t _g4_t_v35;
  typedef chatv2::Requests::SendInviteRequest::Self *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef size_t _g4_t_v38;
  typedef size_t _g4_t_v39;
  typedef int _g4_t_v40;
  typedef const char *_g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t _g4_t_v45[4];
  typedef int _g4_t_v46[3];
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef volatile int32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef volatile int32_t *_g4_t_v51;
  typedef chatv2::Requests::SendInviteRequest::Self **_g4_t_v52;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v30)) > _g4_s0 ? (4u + sizeof(_g4_t_v30)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v31)) > _g4_s1 ? (12u + sizeof(_g4_t_v31)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v32)) > _g4_s2 ? (32u + sizeof(_g4_t_v32)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v33)) > _g4_s3 ? (32u + sizeof(_g4_t_v33)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v34)) > _g4_s4 ? (32u + sizeof(_g4_t_v34)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v35)) > _g4_s5 ? (36u + sizeof(_g4_t_v35)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v36)) > _g4_s6 ? (40u + sizeof(_g4_t_v36)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v37)) > _g4_s7 ? (44u + sizeof(_g4_t_v37)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v38)) > _g4_s8 ? (48u + sizeof(_g4_t_v38)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v39)) > _g4_s9 ? (52u + sizeof(_g4_t_v39)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v40)) > _g4_s10 ? (52u + sizeof(_g4_t_v40)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v41)) > _g4_s11 ? (56u + sizeof(_g4_t_v41)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v42)) > _g4_s12 ? (56u + sizeof(_g4_t_v42)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v43)) > _g4_s13 ? (60u + sizeof(_g4_t_v43)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v44)) > _g4_s14 ? (76u + sizeof(_g4_t_v44)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v45)) > _g4_s15 ? (80u + sizeof(_g4_t_v45)) : _g4_s15,
    _g4_s17 = (96u + sizeof(_g4_t_v46)) > _g4_s16 ? (96u + sizeof(_g4_t_v46)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v47)) > _g4_s17 ? (108u + sizeof(_g4_t_v47)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v48)) > _g4_s18 ? (112u + sizeof(_g4_t_v48)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v49)) > _g4_s19 ? (116u + sizeof(_g4_t_v49)) : _g4_s19,
    _g4_s21 = (120u + sizeof(_g4_t_v50)) > _g4_s20 ? (120u + sizeof(_g4_t_v50)) : _g4_s20,
    _g4_s22 = (124u + sizeof(_g4_t_v51)) > _g4_s21 ? (124u + sizeof(_g4_t_v51)) : _g4_s21,
    _g4_s23 = (136u + sizeof(_g4_t_v52)) > _g4_s22 ? (136u + sizeof(_g4_t_v52)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 4u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 12u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 32u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 36u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 40u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 44u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 52u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 56u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 56u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 60u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 76u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 80u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 108u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 112u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 116u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 120u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 124u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);

  v52 = &self;
  v1 = self;
  v2 = 1;
  if ( (uint8_t)chatv2::Requests::IArionServerRequest::CheckFailure(self) != 0 )
    return v2;
  v4 = *((uint32_t *)v1 + 17);
  v43 = (uint32_t *)((char *)v1 + 56);
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v50);
  v5 = v50;
  if ( v50 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v5 = v50;
  }
  v31 = v4;
  v30 = v5;
  chatv2::Requests::ArionRequestFactory::GetChannel(&v48);
  v6 = v51;
  if ( v51 != nullptr && __sync_fetch_and_add(v51 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v6, 8, v30, v43, v31);
    if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v6, 12);
  }
  v2 = 0;
  if ( v48 != 0 )
    goto LABEL_8;
  v46[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v46), 0x80u, 0);
  v8 = 0;
  v41 = "Invite to room failed, room is not joined - name: {0}\n";
  v37 = 0;
  v9 = aInviteToRoomFa_0 /* "Invite to room failed, room is not joined - n..." */[0];
  v36 = v1;
  while ( 1 )
  {
    v12 = (uint8_t *)(v41 + 1);
    if ( v9 != 123 )
    {
      v10 = v46[0];
      v11 = v8 + 1;
      if ( v8 + 1 > *(uint32_t *)(v46[0] - 12) )
      {
        v33 = v9;
        sub_1939D80((int)(uintptr_t)(v46), v8 + 65, 0);
        v10 = v46[0];
        v11 = v8 + 1;
        v9 = v33;
      }
      if ( *(int *)(v10 - 4) >= 0 )
      {
        v35 = v11;
        v32 = v9;
        sub_19397C0(v46);
        v10 = v46[0];
        v11 = v35;
        v9 = v32;
      }
      *(uint8_t *)(v10 + v8) = v9;
      ++v41;
      v8 = v11;
      goto LABEL_20;
    }
    v13 = v41[1];
    if ( v13 == 123 )
    {
      v18 = v46[0];
      if ( v8 + 2 > *(uint32_t *)(v46[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v46), v8 + 66, 0);
        v18 = v46[0];
      }
      v39 = v8 + 1;
      if ( *(int *)(v18 - 4) >= 0 )
      {
        sub_19397C0(v46);
        v18 = v46[0];
      }
      *(uint8_t *)(v18 + v8) = 123;
      v19 = v46[0];
      if ( *(int *)(v46[0] - 4) >= 0 )
      {
        sub_19397C0(v46);
        v19 = v46[0];
      }
      v41 += 2;
      v8 += 2;
      *(uint8_t *)(v19 + v39) = 123;
      goto LABEL_20;
    }
    if ( v13 == 0 )
      goto LABEL_53;
    v42 = v8;
    v14 = 1;
    v15 = 0;
    while ( 1 )
    {
      v13 = *v12;
      if ( (uint8_t)(*v12 - 48) > 9u )
        break;
      v16 = v14 * v15;
      ++v12;
      v14 *= 10;
      v15 = v16 + v13 - 48;
      if ( *v12 == 0 )
      {
        v17 = v15;
        v13 = 0;
        v8 = v42;
        goto LABEL_28;
      }
    }
    v17 = v15;
    v8 = v42;
    if ( v14 == 1 )
LABEL_53:
      v17 = v37++;
    if ( v13 == 58 )
    {
      v13 = v12[1];
      if ( v13 == 120 || v13 == 88 )
      {
        v13 = v12[2];
        v41 = (const char *)(v12 + 3);
      }
      else
      {
        v41 = (const char *)(v12 + 2);
      }
    }
    else
    {
LABEL_28:
      v41 = (const char *)(v12 + 1);
    }
    if ( v13 != 125 )
      break;
    if ( v17 != 0 )
    {
      sub_1939D80((int)(uintptr_t)(v46), v8, 0);
    }
    else
    {
      v40 = *(uint32_t *)(*v43 - 12);
      if ( v8 + v40 > *(uint32_t *)(v46[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v46), v8 + v40 + 64, 0);
        v40 = *(uint32_t *)(*((uint32_t *)v36 + 14) - 12);
      }
      if ( v40 != 0 )
      {
        v25 = 0;
        v26 = v43;
        v38 = v8;
        do
        {
          v27 = v46[0];
          v28 = v25 + v38;
          if ( *(int *)(v46[0] - 4) >= 0 )
          {
            v34 = v26;
            sub_19397C0(v46);
            v27 = v46[0];
            v26 = v34;
          }
          v29 = *(uint8_t *)(*v26 + v25++);
          *(uint8_t *)(v27 + v28) = v29;
        }
        while ( v25 != v40 );
        v8 = v25 + v38;
      }
    }
LABEL_20:
    v9 = *v41;
    if ( *v41 == 0 )
    {
      v20 = v8;
      v21 = v36;
      goto LABEL_40;
    }
  }
  v21 = v36;
  sub_1939D80((int)(uintptr_t)(v46), v8, 0);
  v20 = v8;
LABEL_40:
  sub_1939D80((int)(uintptr_t)(v46), v20, 0);
  g4_std::string::construct_copy(v45, v46);
  v22 = (void *)(v46[0] - 12);
  if ( (uint32_t *)(v46[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v47), "ChatLib", (int)(uintptr_t)(&v44));
  chatv2::Utils::Log(
    3,
    0,
    &v47,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/SendInviteRequest.cpp",
    30,
    v45);
  v23 = (void *)(v47 - 12);
  if ( (uint32_t *)(v47 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  v24 = (void *)(v45[0] - 12);
  if ( (uint32_t *)(v45[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v24);
  }
  *((uint32_t *)v21 + 12) = 2;
  v2 = 1;
LABEL_8:
  v7 = v49;
  if ( v49 != nullptr && __sync_fetch_and_add(v49 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v7, 8);
    if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v7, 12);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::Construct  (binary VA: 0x1248850)
// Original: chatv2::Requests::SendInviteRequest::SendInviteRequest
// ----------------------------------------------------------------------------
uint32_t * chatv2::Requests::SendInviteRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3, int a4, int a5)
{
  void *v5;
  typedef int _g4_t_v7;
  typedef uint32_t _g4_t_v8[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v7)) > _g4_s0 ? (10u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 10u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v8), (char *)&unk_1B15112, (int)(uintptr_t)(&v7));
  chatv2::Requests::IArionServerRequest::Construct(a1, a2, a3, (int)(uintptr_t)(v8), a4, 4);
  v5 = (void *)(v8[0] - 12);
  if ( (uint32_t *)(v8[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  *((uint32_t *)a1 + 13) = a2;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2092548);
  g4_std::string::construct_copy((char *)a1 + 56, a3);
  g4_std::string::construct_copy((char *)a1 + 60, a5);
  *((uint32_t *)a1 + 17) = a4;
  *((uint32_t *)a1 + 16) = (uint32_t)(uintptr_t)(&dword_213B814);
  return &dword_213B814;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendInviteRequest::SetCommandPath  (binary VA: 0x1248950)
// Original: chatv2::Requests::SendInviteRequest::SetCommandPath
// ----------------------------------------------------------------------------
int chatv2::Requests::SendInviteRequest::SetCommandPath(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 64, a2));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendMessageArionRequest::CheckFailure  (binary VA: 0x1248fd0)
// Original: chatv2::Requests::SendMessageArionRequest::CheckFailure
// ----------------------------------------------------------------------------
int chatv2::Requests::SendMessageArionRequest::CheckFailure(chatv2::Core::ArionExecutor::Self **self)
{
  char v1;
  int v2;
  char IsMuted;

  v1 = chatv2::Requests::IArionServerRequest::CheckFailure((chatv2::Requests::IArionServerRequest::Self *)self);
  v2 = 1;
  if ( v1 != 0 )
    return v2;
  IsMuted = chatv2::Core::ArionExecutor::IsMuted(*(self + 7));
  v2 = 0;
  if ( IsMuted == 0 )
    return v2;
  *(self + 12) = (chatv2::Core::ArionExecutor::Self *)&loc_6;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendMessageArionRequest::Destroy  (binary VA: 0x1249040)
// Original: chatv2::Requests::SendMessageArionRequest::~SendMessageArionRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::SendMessageArionRequest::Destroy(chatv2::Requests::SendMessageArionRequest::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20925A8);
  v1 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  chatv2::Requests::IArionServerRequest::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendMessageArionRequest::Destroy_ea12490b0  (binary VA: 0x12490b0)
// Original: chatv2::Requests::SendMessageArionRequest::~SendMessageArionRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::SendMessageArionRequest::Destroy_ea12490b0(chatv2::Requests::SendMessageArionRequest::Self *self)
{
  chatv2::Requests::SendMessageArionRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendMessageArionRequest::GetClient  (binary VA: 0x12490f0)
// Original: chatv2::Requests::SendMessageArionRequest::GetClient
// ----------------------------------------------------------------------------
int chatv2::Requests::SendMessageArionRequest::GetClient(chatv2::Requests::SendMessageArionRequest::Self *self)
{
  const void **v1;
  int v2;
  int v3;
  volatile int32_t *v4;
  int result;
  volatile int32_t *v6;
  typedef int _g4_t_v7;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v8;
  typedef volatile int32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef chatv2::Requests::SendMessageArionRequest::Self **_g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  v12 = &self;
  v1 = (const void **)((char *)self + 32);
  v2 = *((uint32_t *)self + 10);
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v10, *((uint32_t *)self + 7));
  v3 = v10;
  if ( v10 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v3 = v10;
  }
  chatv2::Requests::ArionRequestFactory::GetChannel((uint32_t *)(&v8), v3, v1, v2);
  v4 = v11;
  if ( v11 != nullptr && __sync_fetch_and_add(v11 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    if ( __sync_fetch_and_add(v4 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  result = 0;
  if ( v8 != nullptr )
    result = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetCommandClient(v8));
  v6 = v9;
  if ( v9 != nullptr && __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
  {
    v7 = result;
    G4_VCALL<void>(v6, 8);
    result = v7;
    if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v6, 12);
      return v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendMessageArionRequest::CanExecute  (binary VA: 0x1249230)
// Original: chatv2::Requests::SendMessageArionRequest::CanExecute
// ----------------------------------------------------------------------------
int chatv2::Requests::SendMessageArionRequest::CanExecute(chatv2::Requests::SendMessageArionRequest::Self *self)
{
  chatv2::Requests::SendMessageArionRequest::Self *v1;
  int v2;
  int v4;
  volatile int32_t *v5;
  volatile int32_t *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef volatile int32_t *_g4_t_v9;
  typedef int _g4_t_v10;
  typedef volatile int32_t *_g4_t_v11;
  typedef chatv2::Requests::SendMessageArionRequest::Self **_g4_t_v12;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v9)) > _g4_s2 ? (20u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v10)) > _g4_s3 ? (24u + sizeof(_g4_t_v10)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v11)) > _g4_s4 ? (28u + sizeof(_g4_t_v11)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v12)) > _g4_s5 ? (40u + sizeof(_g4_t_v12)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 20u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 24u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  v12 = &self;
  v1 = self;
  v2 = 0;
  if ( chatv2::Requests::IRequest::CanExecute((chatv2::Requests::IRequest::Self *)(self)) )
  {
    v7 = *((uint32_t *)v1 + 10);
    chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v10, *((uint32_t *)v1 + 7));
    v4 = v10;
    if ( v10 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
        "px != 0");
      v4 = v10;
    }
    chatv2::Requests::ArionRequestFactory::GetChannel((uint32_t *)(&v8), v4, (const void **)v1 + 8, v7);
    v5 = v11;
    if ( v11 != nullptr && __sync_fetch_and_add(v11 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 8);
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v5, 12);
    }
    v6 = v9;
    v2 = 1;
    if ( v9 != nullptr && __sync_fetch_and_add(v9 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v6, 8);
      if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v6, 12);
    }
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendMessageArionRequest::Construct  (binary VA: 0x1249390)
// Original: chatv2::Requests::SendMessageArionRequest::SendMessageArionRequest
// ----------------------------------------------------------------------------
int chatv2::Requests::SendMessageArionRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3, int a4, int a5)
{
  void *v5;
  uint16_t v7[3];

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v7[1]), (char *)&unk_1B15112, (int)(uintptr_t)(v7));
  chatv2::Requests::IArionServerRequest::Construct(a1, a2, a3, (int)(uintptr_t)(&v7[1]), a4, 2);
  v5 = (void *)(*(uint32_t *)&v7[1] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v7[1] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v7[1] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20925A8);
  return (int)(uintptr_t)(g4_std::string::construct_copy((char *)a1 + 52, a5));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SendMessageArionRequest::ToHTTPRequest  (binary VA: 0x1249460)
// Original: chatv2::Requests::SendMessageArionRequest::ToHTTPRequest
// ----------------------------------------------------------------------------
chatv2::Requests::SendMessageArionRequest::Self * chatv2::Requests::SendMessageArionRequest::ToHTTPRequest(chatv2::Requests::SendMessageArionRequest::Self *self, int a2)
{
  chatv2::Requests::SendMessageArionRequest::Self *v2;
  int v3;
  int v4;
  uint8_t *v5;
  volatile int32_t *v6;
  volatile int32_t *v7;
  void *v8;
  void *v9;
  void *v10;
  int v11;
  int v12;
  void (*v13)(int, uint8_t **);
  volatile int32_t *v14;
  volatile int32_t *v15;
  int v17;
  int v18;
  volatile int32_t *v19;
  chatv2::Connectivity::IClient::Self *CommandClient;
  chatv2::Core::ArionChannel::Self *v21;
  chatv2::Core::ArionChannel::Self *v22;
  chatv2::Connectivity::IClient::Self *v23;
  void *v24;
  void *v25;
  size_t *v26;
  int v27;
  uint8_t *v28;
  void *v29;
  int v30;
  int v31;
  void (*v32)(int, void **);
  volatile int32_t *v33;
  chatv2::Core::ArionChannel::Self *v34;
  chatv2::Core::ArionChannel::Self *v35;
  uint8_t *v36;
  void *v37;
  int v38;
  int v39;
  void (*v40)(int, void **);
  chatv2::Core::ArionChannel::Self *v41;
  int CommandPath;
  int v43;
  uint8_t *untyped_deleter;
  volatile int32_t *v45;
  volatile int32_t *v46;
  int v47;
  uint8_t *v48;
  int v49;
  volatile int32_t *v50;
  int v51;
  uint8_t *v52;
  int v53;
  volatile int32_t *v54;
  gaia::Gaia::Self *Instance;
  int User;
  int v57;
  uint8_t *v58;
  int v59;
  volatile int32_t *v60;
  void *v61;
  void *v62;
  void *v63;
  void *v64;
  void *v65;
  void *v66;
  void *v67;
  void *v68;
  typedef gaia::Gaia::Self *_g4_t_v69;
  typedef gaia::Gaia::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef char *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef char *_g4_t_v74;
  typedef char *_g4_t_v75;
  typedef volatile int32_t *_g4_t_v76;
  typedef volatile int32_t *_g4_t_v77;
  typedef uint8_t *_g4_t_src;
  typedef size_t *_g4_t_srcb;
  typedef uint8_t *_g4_t_srcc;
  typedef uint8_t *_g4_t_srca;
  typedef uint8_t *_g4_t_srcd;
  typedef uint8_t *_g4_t_srce;
  typedef volatile int32_t *_g4_t_v84;
  typedef uint8_t *_g4_t_v85;
  typedef volatile int32_t *_g4_t_v86;
  typedef uint8_t *_g4_t_v87;
  typedef volatile int32_t *_g4_t_v88;
  typedef uint8_t *_g4_t_v89;
  typedef size_t _g4_t_v90;
  typedef size_t _g4_t_v91;
  typedef size_t _g4_t_n;
  typedef uint8_t *_g4_t_na;
  typedef void *_g4_t_nb;
  typedef void *_g4_t_nc;
  typedef void *_g4_t_v96;
  typedef void *_g4_t_v97;
  typedef void *_g4_t_v98;
  typedef void *_g4_t_v99;
  typedef uint8_t *_g4_t_v100;
  typedef uint8_t *_g4_t_v101;
  typedef void *_g4_t_v102;
  typedef chatv2::Requests::SendMessageArionRequest::Self *_g4_t_v103;
  typedef int _g4_t_v104;
  typedef uint8_t *_g4_t_v105;
  typedef uint8_t _g4_t_v106[3];
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef char _g4_t_v110;
  typedef char _g4_t_v111;
  typedef char _g4_t_v112;
  typedef char _g4_t_v113;
  typedef char _g4_t_v114;
  typedef uint32_t _g4_t_v115[4];
  typedef int _g4_t_v116[4];
  typedef uint32_t _g4_t_v117[4];
  typedef uint32_t _g4_t_v118[4];
  typedef uint32_t _g4_t_v119[4];
  typedef uint32_t _g4_t_v120[4];
  typedef uint32_t _g4_t_v121[4];
  typedef uint32_t _g4_t_v122[4];
  typedef uint32_t _g4_t_v123[4];
  typedef uint32_t _g4_t_v124[4];
  typedef int _g4_t_v125[4];
  typedef int _g4_t_v126[4];
  typedef int _g4_t_v127[4];
  typedef int _g4_t_v128;
  typedef int _g4_t_v129[2];
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef volatile int32_t *_g4_t_v133;
  typedef volatile int32_t *_g4_t_v134;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v135;
  typedef int _g4_t_v136;
  typedef uint8_t *_g4_t_v137;
  typedef volatile int32_t *_g4_t_v138;
  typedef uint8_t *_g4_t_v139;
  typedef volatile int32_t *_g4_t_v140;
  typedef uint8_t *_g4_t_v141;
  typedef volatile int32_t *_g4_t_v142;
  typedef int _g4_t_v143;
  typedef volatile int32_t *_g4_t_v144;
  typedef uint8_t *_g4_t_v145;
  typedef int _g4_t_v146;
  typedef void *_g4_t_v147;
  typedef volatile int32_t *_g4_t_v148;
  typedef void *_g4_t_v149;
  typedef volatile int32_t *_g4_t_v150;
  typedef int _g4_t_v151;
  typedef volatile int32_t *_g4_t_v152;
  typedef int (**_g4_t_v153)(int);
  typedef uint32_t _g4_t_v154[3];
  typedef uint8_t *_g4_t_v155;
  typedef uint8_t *_g4_t_v156;
  typedef uint8_t *_g4_t_v157;
  typedef int _g4_t_v158;
  typedef char _g4_t_v159[4];
  typedef int _g4_t_v160;
  typedef volatile int32_t *_g4_t_v161;
  typedef uint32_t _g4_t_v162[29];
  typedef char _g4_t_v163;
  typedef char _g4_t_v164;
  typedef int _g4_t_v165;
  typedef int _g4_t_v166;
  typedef int _g4_t_v167;
  typedef int _g4_t_v168;
  typedef chatv2::Requests::SendMessageArionRequest::Self **_g4_t_v169;
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (0u + sizeof(_g4_t_v69)) > _g4_s0 ? (0u + sizeof(_g4_t_v69)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v70)) > _g4_s1 ? (0u + sizeof(_g4_t_v70)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v71)) > _g4_s2 ? (4u + sizeof(_g4_t_v71)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v72)) > _g4_s3 ? (4u + sizeof(_g4_t_v72)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v73)) > _g4_s4 ? (4u + sizeof(_g4_t_v73)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v74)) > _g4_s5 ? (4u + sizeof(_g4_t_v74)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v75)) > _g4_s6 ? (4u + sizeof(_g4_t_v75)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v76)) > _g4_s7 ? (32u + sizeof(_g4_t_v76)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v77)) > _g4_s8 ? (32u + sizeof(_g4_t_v77)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_src)) > _g4_s9 ? (36u + sizeof(_g4_t_src)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_srcb)) > _g4_s10 ? (36u + sizeof(_g4_t_srcb)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_srcc)) > _g4_s11 ? (36u + sizeof(_g4_t_srcc)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_srca)) > _g4_s12 ? (36u + sizeof(_g4_t_srca)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_srcd)) > _g4_s13 ? (36u + sizeof(_g4_t_srcd)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_srce)) > _g4_s14 ? (36u + sizeof(_g4_t_srce)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v84)) > _g4_s15 ? (40u + sizeof(_g4_t_v84)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v85)) > _g4_s16 ? (40u + sizeof(_g4_t_v85)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v86)) > _g4_s17 ? (40u + sizeof(_g4_t_v86)) : _g4_s17,
    _g4_s19 = (40u + sizeof(_g4_t_v87)) > _g4_s18 ? (40u + sizeof(_g4_t_v87)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v88)) > _g4_s19 ? (40u + sizeof(_g4_t_v88)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v89)) > _g4_s20 ? (40u + sizeof(_g4_t_v89)) : _g4_s20,
    _g4_s22 = (44u + sizeof(_g4_t_v90)) > _g4_s21 ? (44u + sizeof(_g4_t_v90)) : _g4_s21,
    _g4_s23 = (44u + sizeof(_g4_t_v91)) > _g4_s22 ? (44u + sizeof(_g4_t_v91)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_n)) > _g4_s23 ? (48u + sizeof(_g4_t_n)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_na)) > _g4_s24 ? (48u + sizeof(_g4_t_na)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_nb)) > _g4_s25 ? (48u + sizeof(_g4_t_nb)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_nc)) > _g4_s26 ? (48u + sizeof(_g4_t_nc)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v96)) > _g4_s27 ? (52u + sizeof(_g4_t_v96)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v97)) > _g4_s28 ? (52u + sizeof(_g4_t_v97)) : _g4_s28,
    _g4_s30 = (52u + sizeof(_g4_t_v98)) > _g4_s29 ? (52u + sizeof(_g4_t_v98)) : _g4_s29,
    _g4_s31 = (52u + sizeof(_g4_t_v99)) > _g4_s30 ? (52u + sizeof(_g4_t_v99)) : _g4_s30,
    _g4_s32 = (52u + sizeof(_g4_t_v100)) > _g4_s31 ? (52u + sizeof(_g4_t_v100)) : _g4_s31,
    _g4_s33 = (52u + sizeof(_g4_t_v101)) > _g4_s32 ? (52u + sizeof(_g4_t_v101)) : _g4_s32,
    _g4_s34 = (52u + sizeof(_g4_t_v102)) > _g4_s33 ? (52u + sizeof(_g4_t_v102)) : _g4_s33,
    _g4_s35 = (56u + sizeof(_g4_t_v103)) > _g4_s34 ? (56u + sizeof(_g4_t_v103)) : _g4_s34,
    _g4_s36 = (60u + sizeof(_g4_t_v104)) > _g4_s35 ? (60u + sizeof(_g4_t_v104)) : _g4_s35,
    _g4_s37 = (60u + sizeof(_g4_t_v105)) > _g4_s36 ? (60u + sizeof(_g4_t_v105)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v106)) > _g4_s37 ? (64u + sizeof(_g4_t_v106)) : _g4_s37,
    _g4_s39 = (67u + sizeof(_g4_t_v107)) > _g4_s38 ? (67u + sizeof(_g4_t_v107)) : _g4_s38,
    _g4_s40 = (68u + sizeof(_g4_t_v108)) > _g4_s39 ? (68u + sizeof(_g4_t_v108)) : _g4_s39,
    _g4_s41 = (72u + sizeof(_g4_t_v109)) > _g4_s40 ? (72u + sizeof(_g4_t_v109)) : _g4_s40,
    _g4_s42 = (81u + sizeof(_g4_t_v110)) > _g4_s41 ? (81u + sizeof(_g4_t_v110)) : _g4_s41,
    _g4_s43 = (84u + sizeof(_g4_t_v111)) > _g4_s42 ? (84u + sizeof(_g4_t_v111)) : _g4_s42,
    _g4_s44 = (85u + sizeof(_g4_t_v112)) > _g4_s43 ? (85u + sizeof(_g4_t_v112)) : _g4_s43,
    _g4_s45 = (86u + sizeof(_g4_t_v113)) > _g4_s44 ? (86u + sizeof(_g4_t_v113)) : _g4_s44,
    _g4_s46 = (87u + sizeof(_g4_t_v114)) > _g4_s45 ? (87u + sizeof(_g4_t_v114)) : _g4_s45,
    _g4_s47 = (96u + sizeof(_g4_t_v115)) > _g4_s46 ? (96u + sizeof(_g4_t_v115)) : _g4_s46,
    _g4_s48 = (112u + sizeof(_g4_t_v116)) > _g4_s47 ? (112u + sizeof(_g4_t_v116)) : _g4_s47,
    _g4_s49 = (128u + sizeof(_g4_t_v117)) > _g4_s48 ? (128u + sizeof(_g4_t_v117)) : _g4_s48,
    _g4_s50 = (144u + sizeof(_g4_t_v118)) > _g4_s49 ? (144u + sizeof(_g4_t_v118)) : _g4_s49,
    _g4_s51 = (160u + sizeof(_g4_t_v119)) > _g4_s50 ? (160u + sizeof(_g4_t_v119)) : _g4_s50,
    _g4_s52 = (176u + sizeof(_g4_t_v120)) > _g4_s51 ? (176u + sizeof(_g4_t_v120)) : _g4_s51,
    _g4_s53 = (192u + sizeof(_g4_t_v121)) > _g4_s52 ? (192u + sizeof(_g4_t_v121)) : _g4_s52,
    _g4_s54 = (208u + sizeof(_g4_t_v122)) > _g4_s53 ? (208u + sizeof(_g4_t_v122)) : _g4_s53,
    _g4_s55 = (224u + sizeof(_g4_t_v123)) > _g4_s54 ? (224u + sizeof(_g4_t_v123)) : _g4_s54,
    _g4_s56 = (240u + sizeof(_g4_t_v124)) > _g4_s55 ? (240u + sizeof(_g4_t_v124)) : _g4_s55,
    _g4_s57 = (256u + sizeof(_g4_t_v125)) > _g4_s56 ? (256u + sizeof(_g4_t_v125)) : _g4_s56,
    _g4_s58 = (272u + sizeof(_g4_t_v126)) > _g4_s57 ? (272u + sizeof(_g4_t_v126)) : _g4_s57,
    _g4_s59 = (288u + sizeof(_g4_t_v127)) > _g4_s58 ? (288u + sizeof(_g4_t_v127)) : _g4_s58,
    _g4_s60 = (304u + sizeof(_g4_t_v128)) > _g4_s59 ? (304u + sizeof(_g4_t_v128)) : _g4_s59,
    _g4_s61 = (308u + sizeof(_g4_t_v129)) > _g4_s60 ? (308u + sizeof(_g4_t_v129)) : _g4_s60,
    _g4_s62 = (316u + sizeof(_g4_t_v130)) > _g4_s61 ? (316u + sizeof(_g4_t_v130)) : _g4_s61,
    _g4_s63 = (320u + sizeof(_g4_t_v131)) > _g4_s62 ? (320u + sizeof(_g4_t_v131)) : _g4_s62,
    _g4_s64 = (324u + sizeof(_g4_t_v132)) > _g4_s63 ? (324u + sizeof(_g4_t_v132)) : _g4_s63,
    _g4_s65 = (328u + sizeof(_g4_t_v133)) > _g4_s64 ? (328u + sizeof(_g4_t_v133)) : _g4_s64,
    _g4_s66 = (332u + sizeof(_g4_t_v134)) > _g4_s65 ? (332u + sizeof(_g4_t_v134)) : _g4_s65,
    _g4_s67 = (336u + sizeof(_g4_t_v135)) > _g4_s66 ? (336u + sizeof(_g4_t_v135)) : _g4_s66,
    _g4_s68 = (340u + sizeof(_g4_t_v136)) > _g4_s67 ? (340u + sizeof(_g4_t_v136)) : _g4_s67,
    _g4_s69 = (352u + sizeof(_g4_t_v137)) > _g4_s68 ? (352u + sizeof(_g4_t_v137)) : _g4_s68,
    _g4_s70 = (356u + sizeof(_g4_t_v138)) > _g4_s69 ? (356u + sizeof(_g4_t_v138)) : _g4_s69,
    _g4_s71 = (368u + sizeof(_g4_t_v139)) > _g4_s70 ? (368u + sizeof(_g4_t_v139)) : _g4_s70,
    _g4_s72 = (372u + sizeof(_g4_t_v140)) > _g4_s71 ? (372u + sizeof(_g4_t_v140)) : _g4_s71,
    _g4_s73 = (384u + sizeof(_g4_t_v141)) > _g4_s72 ? (384u + sizeof(_g4_t_v141)) : _g4_s72,
    _g4_s74 = (388u + sizeof(_g4_t_v142)) > _g4_s73 ? (388u + sizeof(_g4_t_v142)) : _g4_s73,
    _g4_s75 = (400u + sizeof(_g4_t_v143)) > _g4_s74 ? (400u + sizeof(_g4_t_v143)) : _g4_s74,
    _g4_s76 = (404u + sizeof(_g4_t_v144)) > _g4_s75 ? (404u + sizeof(_g4_t_v144)) : _g4_s75,
    _g4_s77 = (416u + sizeof(_g4_t_v145)) > _g4_s76 ? (416u + sizeof(_g4_t_v145)) : _g4_s76,
    _g4_s78 = (420u + sizeof(_g4_t_v146)) > _g4_s77 ? (420u + sizeof(_g4_t_v146)) : _g4_s77,
    _g4_s79 = (432u + sizeof(_g4_t_v147)) > _g4_s78 ? (432u + sizeof(_g4_t_v147)) : _g4_s78,
    _g4_s80 = (436u + sizeof(_g4_t_v148)) > _g4_s79 ? (436u + sizeof(_g4_t_v148)) : _g4_s79,
    _g4_s81 = (448u + sizeof(_g4_t_v149)) > _g4_s80 ? (448u + sizeof(_g4_t_v149)) : _g4_s80,
    _g4_s82 = (452u + sizeof(_g4_t_v150)) > _g4_s81 ? (452u + sizeof(_g4_t_v150)) : _g4_s81,
    _g4_s83 = (456u + sizeof(_g4_t_v151)) > _g4_s82 ? (456u + sizeof(_g4_t_v151)) : _g4_s82,
    _g4_s84 = (460u + sizeof(_g4_t_v152)) > _g4_s83 ? (460u + sizeof(_g4_t_v152)) : _g4_s83,
    _g4_s85 = (464u + sizeof(_g4_t_v153)) > _g4_s84 ? (464u + sizeof(_g4_t_v153)) : _g4_s84,
    _g4_s86 = (468u + sizeof(_g4_t_v154)) > _g4_s85 ? (468u + sizeof(_g4_t_v154)) : _g4_s85,
    _g4_s87 = (480u + sizeof(_g4_t_v155)) > _g4_s86 ? (480u + sizeof(_g4_t_v155)) : _g4_s86,
    _g4_s88 = (484u + sizeof(_g4_t_v156)) > _g4_s87 ? (484u + sizeof(_g4_t_v156)) : _g4_s87,
    _g4_s89 = (488u + sizeof(_g4_t_v157)) > _g4_s88 ? (488u + sizeof(_g4_t_v157)) : _g4_s88,
    _g4_s90 = (492u + sizeof(_g4_t_v158)) > _g4_s89 ? (492u + sizeof(_g4_t_v158)) : _g4_s89,
    _g4_s91 = (496u + sizeof(_g4_t_v159)) > _g4_s90 ? (496u + sizeof(_g4_t_v159)) : _g4_s90,
    _g4_s92 = (500u + sizeof(_g4_t_v160)) > _g4_s91 ? (500u + sizeof(_g4_t_v160)) : _g4_s91,
    _g4_s93 = (504u + sizeof(_g4_t_v161)) > _g4_s92 ? (504u + sizeof(_g4_t_v161)) : _g4_s92,
    _g4_s94 = (508u + sizeof(_g4_t_v162)) > _g4_s93 ? (508u + sizeof(_g4_t_v162)) : _g4_s93,
    _g4_s95 = (624u + sizeof(_g4_t_v163)) > _g4_s94 ? (624u + sizeof(_g4_t_v163)) : _g4_s94,
    _g4_s96 = (625u + sizeof(_g4_t_v164)) > _g4_s95 ? (625u + sizeof(_g4_t_v164)) : _g4_s95,
    _g4_s97 = (628u + sizeof(_g4_t_v165)) > _g4_s96 ? (628u + sizeof(_g4_t_v165)) : _g4_s96,
    _g4_s98 = (632u + sizeof(_g4_t_v166)) > _g4_s97 ? (632u + sizeof(_g4_t_v166)) : _g4_s97,
    _g4_s99 = (636u + sizeof(_g4_t_v167)) > _g4_s98 ? (636u + sizeof(_g4_t_v167)) : _g4_s98,
    _g4_s100 = (640u + sizeof(_g4_t_v168)) > _g4_s99 ? (640u + sizeof(_g4_t_v168)) : _g4_s99,
    _g4_s101 = (664u + sizeof(_g4_t_v169)) > _g4_s100 ? (664u + sizeof(_g4_t_v169)) : _g4_s100
  };
  alignas(16) uint8_t _g4_sf[_g4_s101];
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 0u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 0u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 4u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 4u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 4u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 4u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 4u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 32u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 32u);
  _g4_t_src &src = *reinterpret_cast<_g4_t_src *>(_g4_sf + 36u);
  _g4_t_srcb &srcb = *reinterpret_cast<_g4_t_srcb *>(_g4_sf + 36u);
  _g4_t_srcc &srcc = *reinterpret_cast<_g4_t_srcc *>(_g4_sf + 36u);
  _g4_t_srca &srca = *reinterpret_cast<_g4_t_srca *>(_g4_sf + 36u);
  _g4_t_srcd &srcd = *reinterpret_cast<_g4_t_srcd *>(_g4_sf + 36u);
  _g4_t_srce &srce = *reinterpret_cast<_g4_t_srce *>(_g4_sf + 36u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 40u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 40u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 40u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 40u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 40u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 40u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 44u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 44u);
  _g4_t_n &n = *reinterpret_cast<_g4_t_n *>(_g4_sf + 48u);
  _g4_t_na &na = *reinterpret_cast<_g4_t_na *>(_g4_sf + 48u);
  _g4_t_nb &nb = *reinterpret_cast<_g4_t_nb *>(_g4_sf + 48u);
  _g4_t_nc &nc = *reinterpret_cast<_g4_t_nc *>(_g4_sf + 48u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 52u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 52u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 52u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 52u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 52u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 52u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 56u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 60u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 60u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 64u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 67u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 68u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 72u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 81u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 84u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 85u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 86u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 87u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 96u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 112u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 128u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 144u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 160u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 176u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 192u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 208u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 224u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 240u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 256u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 272u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 288u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 304u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 308u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 316u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 320u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 324u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 328u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 332u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 336u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 340u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 352u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 356u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 368u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 372u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 384u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 388u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 400u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 404u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 416u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 420u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 432u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 436u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 448u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 452u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 456u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 460u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 464u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 468u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 480u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 484u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 488u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 492u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 496u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 500u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 504u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 508u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 624u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 625u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 628u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 632u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 636u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 640u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 664u);

  v169 = &self;
  v2 = self;
  v3 = a2;
  v103 = self;
  v104 = a2;
  *(uint32_t *)self = 0;
  *((uint32_t *)v2 + 1) = 0;
  if ( *(uint32_t *)(*(uint32_t *)(v3 + 52) - 12) <= 0x400u )
  {
    v17 = v104 + 32;
    v96 = *(void **)(v104 + 40);
    chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v151);
    v18 = v151;
    if ( v151 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
        "px != 0");
      v18 = v151;
    }
    v71 = v18;
    chatv2::Requests::ArionRequestFactory::GetChannel(&v135);
    v19 = v152;
    if ( v152 != nullptr && __sync_fetch_and_add(v152 + 1, 0xFFFFFFFF) == 1 )
    {
      v84 = v19;
      G4_VCALL<void>(v19, 8, v71, v17, v96);
      if ( __sync_fetch_and_add(v84 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v84, 12);
    }
    if ( v135 != nullptr )
    {
      CommandClient = (chatv2::Connectivity::IClient::Self *)chatv2::Core::ArionChannel::GetCommandClient(v135);
      if ( chatv2::Connectivity::IClient::GetState(CommandClient) != 1 )
        goto LABEL_35;
      v34 = v135;
      if ( v135 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "ore::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
          "px != 0");
        v34 = v135;
      }
      if ( (uint8_t)chatv2::Core::ArionChannel::GetReceivingMessages(v34) == 0 )
      {
LABEL_35:
        v21 = v135;
        if ( v135 == nullptr )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Core::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
            "px != 0");
          v21 = v135;
        }
        v106[2] = chatv2::Core::ArionChannel::GetReceivingMessages(v21);
        v22 = v135;
        if ( v135 == nullptr )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Core::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
            "px != 0");
          v22 = v135;
        }
        v23 = (chatv2::Connectivity::IClient::Self *)chatv2::Core::ArionChannel::GetCommandClient(v22);
        v129[1] = chatv2::Connectivity::IClient::GetState(v23);
        v106[1] = 0;
        jcore::Format_std_string_char_95_bool_54c903(v117);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v130), "ChatLib", (int)(uintptr_t)(&v107));
        chatv2::Utils::Log(
          3,
          0,
          &v130,
          "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/SendMessageArionRequest.cpp",
          85,
          v117);
        v24 = (void *)(v130 - 12);
        if ( (uint32_t *)(v130 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v130 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v24);
        }
        v25 = (void *)(v117[0] - 12);
        if ( (uint32_t *)(v117[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v117[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v25);
        }
        goto LABEL_67;
      }
      v35 = v135;
      if ( v135 == nullptr )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "ore::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
          "px != 0");
        v35 = v135;
      }
      if ( (uint8_t)chatv2::Core::ArionChannel::CalculateIfMessageCanBeSent(v35) != 0 )
      {
        gaia::Gaia::GetInstance(v69);
        gaia::Gaia::GetJanusToken(v118);
        v119[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        glwebtools::Codec::EncodeUrlRFC3986(v118, v119);
        v41 = v135;
        if ( v135 == nullptr )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Core::ArionChannel, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ArionChannel*]",
            "px != 0");
          v41 = v135;
        }
        CommandPath = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetCommandPath(v41));
        g4_std::string::construct_copy(v120, CommandPath);
        v43 = opNew(0xF0u);
        *(uint32_t *)(v43 + 4) = 1;
        *(uint32_t *)(v43 + 8) = 1;
        *(uint32_t *)v43 = ((uint32_t)(uintptr_t)&off_2092528);
        *(uint32_t *)(v43 + 12) = 0;
        *(uint8_t *)(v43 + 16) = 0;
        untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>> *)v43);
        v99 = untyped_deleter + 4;
        v143 = chatv2::Utils::ChatLibHeaderOptions::PostHeaderOptions;
        v144 = (volatile int32_t *)(*(uint8_t **)unk_2116580);
        if ( (*(uint8_t **)unk_2116580) != 0 )
          __sync_add_and_fetch((volatile int32_t *)((*(uint8_t **)unk_2116580) + 4), 1);
        if ( untyped_deleter != (uint8_t *)-4 )
        {
          srcc = untyped_deleter;
          chatv2::Connectivity::HTTPRequest::Construct(v99, v120, &v143);
          untyped_deleter = srcc;
        }
        v45 = v144;
        if ( v144 != nullptr && __sync_fetch_and_add(v144 + 1, 0xFFFFFFFF) == 1 )
        {
          v88 = v45;
          srca = untyped_deleter;
          G4_VCALL<void>(v45, 8);
          untyped_deleter = srca;
          if ( __sync_fetch_and_add(v88 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (**)(uint8_t *, volatile int32_t *))(*v88 + 12))(srca, v88);
            untyped_deleter = srca;
          }
        }
        *untyped_deleter = 1;
        __sync_add_and_fetch((volatile int32_t *)(v43 + 4), 1);
        if ( __sync_fetch_and_add((volatile int32_t *)(v43 + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v43, 8);
          if ( __sync_fetch_and_add((volatile int32_t *)(v43 + 8), 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v43, 12);
        }
        __sync_add_and_fetch((volatile int32_t *)(v43 + 4), 1);
        *(uint32_t *)v103 = (uint32_t)(uintptr_t)(v99);
        v46 = *((volatile int32_t **)v103 + 1);
        *((uint32_t *)v103 + 1) = v43;
        if ( v46 != nullptr && __sync_fetch_and_add(v46 + 1, 0xFFFFFFFF) == 1 )
        {
          v77 = v46;
          G4_VCALL<void>(v46, 8);
          if ( __sync_fetch_and_add(v77 + 2, 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v77, 12);
        }
        if ( __sync_fetch_and_add((volatile int32_t *)(v43 + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v43, 8);
          if ( __sync_fetch_and_add((volatile int32_t *)(v43 + 8), 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v43, 12);
        }
        v47 = opNew(0x1Cu);
        *(uint32_t *)(v47 + 4) = 1;
        *(uint32_t *)(v47 + 8) = 1;
        *(uint32_t *)(v47 + 12) = 0;
        *(uint32_t *)v47 = ((uint32_t)(uintptr_t)&off_2092588);
        *(uint8_t *)(v47 + 16) = 0;
        v100 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v47);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v125), "access_token", (int)(uintptr_t)(&v108) + 2);
        v48 = v100 + 4;
        if ( v100 != (uint8_t *)-4 )
        {
          chatv2::Connectivity::HTTPParameter::Construct(v100 + 4, v125, v119);
          v48 = v100 + 4;
        }
        nb = (void *)(v125[0] - 12);
        if ( (uint32_t *)(v125[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v125[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v73 = &v112;
          srcd = v48;
          g4_std::string::Rep::M_destroy(nb);
          v48 = srcd;
        }
        *v100 = 1;
        v137 = v48;
        v138 = (volatile int32_t *)v47;
        __sync_add_and_fetch((volatile int32_t *)(v47 + 4), 1);
        if ( __sync_fetch_and_add((volatile int32_t *)(v47 + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v47, 8, v73);
          if ( __sync_fetch_and_add((volatile int32_t *)(v47 + 8), 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v47, 12);
        }
        v49 = *(uint32_t *)v103;
        if ( *(uint32_t *)v103 == 0 )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Connectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
            "px != 0");
          v49 = *(uint32_t *)v103;
        }
        chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v49, &v137);
        v50 = v138;
        if ( v138 != nullptr && __sync_fetch_and_add(v138 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v50, 8);
          if ( __sync_fetch_and_add(v50 + 2, 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v50, 12);
        }
        v121[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        glwebtools::Codec::EncodeUrlRFC3986(v104 + 52, v121);
        v51 = opNew(0x1Cu);
        *(uint32_t *)(v51 + 4) = 1;
        *(uint32_t *)(v51 + 8) = 1;
        *(uint32_t *)(v51 + 12) = 0;
        *(uint32_t *)v51 = ((uint32_t)(uintptr_t)&off_2092588);
        *(uint8_t *)(v51 + 16) = 0;
        v101 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v51);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v126), "msg", (int)(uintptr_t)(&v108) + 3);
        v52 = v101 + 4;
        if ( v101 != (uint8_t *)-4 )
        {
          chatv2::Connectivity::HTTPParameter::Construct(v101 + 4, v126, v121);
          v52 = v101 + 4;
        }
        nc = (void *)(v126[0] - 12);
        if ( (uint32_t *)(v126[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v126[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v74 = &v113;
          srce = v52;
          g4_std::string::Rep::M_destroy(nc);
          v52 = srce;
        }
        *v101 = 1;
        v139 = v52;
        v140 = (volatile int32_t *)v51;
        __sync_add_and_fetch((volatile int32_t *)(v51 + 4), 1);
        if ( __sync_fetch_and_add((volatile int32_t *)(v51 + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v51, 8, v74);
          if ( __sync_fetch_and_add((volatile int32_t *)(v51 + 8), 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v51, 12);
        }
        v53 = *(uint32_t *)v103;
        if ( *(uint32_t *)v103 == 0 )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Connectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
            "px != 0");
          v53 = *(uint32_t *)v103;
        }
        chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v53, &v139);
        v54 = v140;
        if ( v140 != nullptr && __sync_fetch_and_add(v140 + 1, 0xFFFFFFFF) == 1 )
        {
          v70 = (gaia::Gaia::Self *)v54;
          (*(void (**)(void))(*v54 + 8))();
          if ( __sync_fetch_and_add(v54 + 2, 0xFFFFFFFF) == 1 )
          {
            v70 = (gaia::Gaia::Self *)v54;
            (*(void (**)(void))(*v54 + 12))();
          }
        }
        v122[0] = (uint32_t)(uintptr_t)(&dword_213B814);
        Instance = (gaia::Gaia::Self *)gaia::Gaia::GetInstance(v70);
        gaia::Gaia::GetCredentialDetails(Instance, 19, 2, (gaia::Gaia::Self *)v122);
        User = (int)(uintptr_t)(chatv2::Core::ArionExecutor::GetUser(*(chatv2::Core::ArionExecutor::Self **)(v104 + 28)));
        chatv2::Core::ArionUser::SetCredential(User, v122);
        chatv2::Core::ArionExecutor::GetUser(*(chatv2::Core::ArionExecutor::Self **)(v104 + 28));
        chatv2::Core::ArionUser::ToJsonStr((chatv2::Core::ArionUser::Self *)v123);
        v57 = opNew(0x1Cu);
        *(uint32_t *)(v57 + 4) = 1;
        *(uint32_t *)(v57 + 8) = 1;
        *(uint32_t *)(v57 + 12) = 0;
        *(uint32_t *)v57 = ((uint32_t)(uintptr_t)&off_2092588);
        *(uint8_t *)(v57 + 16) = 0;
        v105 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v57);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(v127), "user", (int)(uintptr_t)(&v109));
        v58 = v105 + 4;
        if ( v105 != (uint8_t *)-4 )
        {
          chatv2::Connectivity::HTTPParameter::Construct(v105 + 4, v127, v123);
          v58 = v105 + 4;
        }
        v102 = (void *)(v127[0] - 12);
        if ( (uint32_t *)(v127[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v127[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          v75 = &v114;
          v89 = v58;
          g4_std::string::Rep::M_destroy(v102);
          v58 = v89;
        }
        *v105 = 1;
        v141 = v58;
        v142 = (volatile int32_t *)v57;
        __sync_add_and_fetch((volatile int32_t *)(v57 + 4), 1);
        if ( __sync_fetch_and_add((volatile int32_t *)(v57 + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v57, 8, v75);
          if ( __sync_fetch_and_add((volatile int32_t *)(v57 + 8), 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v57, 12);
        }
        v59 = *(uint32_t *)v103;
        if ( *(uint32_t *)v103 == 0 )
        {
          __assert2(
            "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
            653,
            "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2:"
            ":Connectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
            "px != 0");
          v59 = *(uint32_t *)v103;
        }
        chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v59, &v141);
        v60 = v142;
        if ( v142 != nullptr && __sync_fetch_and_add(v142 + 1, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v60, 8);
          if ( __sync_fetch_and_add(v60 + 2, 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v60, 12);
        }
        jcore::Format_std_string_char_99_std_s_0fead3(v124);
        g4_std::string::construct_from_cstr((int)(uintptr_t)(&v132), "ChatLib", (int)(uintptr_t)(&v108) + 1);
        chatv2::Utils::Log(
          3,
          0,
          &v132,
          "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/SendMessageArionRequest.cpp",
          120,
          v124);
        v61 = (void *)(v132 - 12);
        if ( (uint32_t *)(v132 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v132 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v61);
        }
        v62 = (void *)(v124[0] - 12);
        if ( (uint32_t *)(v124[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v124[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v62);
        }
        v63 = (void *)(v123[0] - 12);
        if ( (uint32_t *)(v123[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v123[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v63);
        }
        v64 = (void *)(v122[0] - 12);
        if ( (uint32_t *)(v122[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v122[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v64);
        }
        v65 = (void *)(v121[0] - 12);
        if ( (uint32_t *)(v121[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v121[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v65);
        }
        v66 = (void *)(v120[0] - 12);
        if ( (uint32_t *)(v120[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v120[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v66);
        }
        v67 = (void *)(v119[0] - 12);
        if ( (uint32_t *)(v119[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v119[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v67);
        }
        v68 = (void *)(v118[0] - 12);
        if ( (uint32_t *)(v118[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v118[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v68);
        }
LABEL_67:
        v4 = v136;
        if ( v136 == 0 )
          return v103;
        goto LABEL_27;
      }
      v27 = opNew(0x38u);
      *(uint32_t *)(v27 + 4) = 1;
      *(uint32_t *)(v27 + 8) = 1;
      *(uint32_t *)v27 = ((uint32_t)(uintptr_t)&off_2092388);
      *(uint32_t *)(v27 + 12) = 0;
      *(uint8_t *)(v27 + 16) = 0;
      v36 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v27);
      v98 = v36 + 4;
      if ( v36 != (uint8_t *)-4 )
      {
        v87 = v36;
        chatv2::Responses::ClientResponse::ClientResponse(v36 + 4, 16, v17);
        v36 = v87;
      }
      *v36 = 1;
      __sync_add_and_fetch((volatile int32_t *)(v27 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v27, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v27, 12);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v131), "Too many messages were sent. Try again later.", (int)(uintptr_t)(&v108));
      if ( v98 == nullptr )
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
          "px != 0");
      chatv2::Responses::ClientResponse::SetMessage(v98, &v131);
      v37 = (void *)(v131 - 12);
      if ( (uint32_t *)(v131 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v131 - 4), 0xFFFFFFFF) <= 0 )
      {
        v72 = &v111;
        g4_std::string::Rep::M_destroy(v37);
      }
      if ( *(uint32_t *)(*(uint32_t *)(v104 + 28) + 36) == 0
        || boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull == nullptr )
      {
LABEL_66:
        if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v27, 8, v72);
          if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 8), 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v27, 12);
        }
        goto LABEL_67;
      }
      __sync_add_and_fetch((volatile int32_t *)(v27 + 4), 1);
      v38 = *(uint32_t *)(v104 + 28);
      v39 = *(uint32_t *)(v38 + 36);
      if ( v39 == 0 )
        goto LABEL_178;
      v149 = v98;
      v40 = *(void (**)(int, void **))((v39 & 0xFFFFFFFE) + 4);
      v150 = (volatile int32_t *)v27;
      __sync_add_and_fetch((volatile int32_t *)(v27 + 4), 1);
      v40(v38 + 40, &v149);
      v33 = v150;
      if ( v150 == nullptr )
      {
LABEL_65:
        if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 4), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v27, 8);
          if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 8), 0xFFFFFFFF) == 1 )
            G4_VCALL<void>(v27, 12);
        }
        goto LABEL_66;
      }
    }
    else
    {
      v27 = opNew(0x38u);
      *(uint32_t *)(v27 + 4) = 1;
      *(uint32_t *)(v27 + 8) = 1;
      *(uint32_t *)v27 = ((uint32_t)(uintptr_t)&off_2092388);
      *(uint32_t *)(v27 + 12) = 0;
      *(uint8_t *)(v27 + 16) = 0;
      v28 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v27);
      v97 = v28 + 4;
      if ( v28 != (uint8_t *)-4 )
      {
        v85 = v28;
        chatv2::Responses::ClientResponse::ClientResponse(v28 + 4, 9, v17);
        v28 = v85;
      }
      *v28 = 1;
      __sync_add_and_fetch((volatile int32_t *)(v27 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v27, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v27 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v27, 12);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v129), "Room is invalid", (int)(uintptr_t)(v106));
      if ( v97 == nullptr )
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
          "px != 0");
      chatv2::Responses::ClientResponse::SetMessage(v97, v129);
      v29 = (void *)(v129[0] - 12);
      if ( (uint32_t *)(v129[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v129[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v72 = &v110;
        g4_std::string::Rep::M_destroy(v29);
      }
      if ( *(uint32_t *)(*(uint32_t *)(v104 + 28) + 36) == 0
        || boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull == nullptr )
      {
        goto LABEL_66;
      }
      __sync_add_and_fetch((volatile int32_t *)(v27 + 4), 1);
      v30 = *(uint32_t *)(v104 + 28);
      v31 = *(uint32_t *)(v30 + 36);
      if ( v31 == 0 )
        goto LABEL_178;
      v147 = v97;
      v32 = *(void (**)(int, void **))((v31 & 0xFFFFFFFE) + 4);
      v148 = (volatile int32_t *)v27;
      __sync_add_and_fetch((volatile int32_t *)(v27 + 4), 1);
      v32(v30 + 40, &v147);
      v33 = v148;
      if ( v148 == nullptr )
        goto LABEL_65;
    }
    if ( __sync_fetch_and_add(v33 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v33, 8);
      if ( __sync_fetch_and_add(v33 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v33, 12);
    }
    goto LABEL_65;
  }
  v4 = opNew(0x38u);
  *(uint32_t *)(v4 + 4) = 1;
  *(uint32_t *)(v4 + 8) = 1;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v4 + 12) = 0;
  *(uint8_t *)(v4 + 16) = 0;
  v5 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v4);
  if ( v5 != (uint8_t *)-4 )
    chatv2::Responses::ClientResponse::ClientResponse(v5 + 4, 14, v104 + 32);
  *v5 = 1;
  __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  sub_1900810(v162);
  v162[28] = 0;
  v163 = 0;
  v164 = 0;
  v165 = 0;
  v166 = 0;
  v167 = 0;
  v162[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v168 = 0;
  v153 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v154[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v154[-1] + (uint32_t)(uintptr_t)(*(v153 - 3)), 0);
  v154[1] = 0;
  v154[2] = 0;
  v155 = nullptr;
  v156 = nullptr;
  v157 = nullptr;
  v158 = 0;
  v153 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v162[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v154[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v159);
  v160 = 16;
  v154[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v161 = (volatile int32_t *)&dword_213B814;
  sub_19119D0(v162, v154);
  sub_192D8B0(&v153, 1024);
  v6 = (volatile int32_t *)&dword_213B814;
  v115[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v157 == nullptr )
  {
    g4_std::string::assign_str(v115, &v161);
    goto LABEL_14;
  }
  if ( v157 <= v155 )
  {
    na = v156;
    if ( v155 == v156 )
      goto LABEL_49;
    if ( v156 != nullptr )
    {
      v91 = v155 - v156;
      v26 = (size_t *)sub_1938930(v155 - v156, 0);
      v6 = (volatile int32_t *)(v26 + 3);
      if ( v91 == 1 )
      {
        *((uint8_t *)v26 + 12) = *na;
LABEL_47:
        if ( v26 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v26[2] = 0;
          *v26 = v91;
          *((uint8_t *)v6 + v91) = 0;
        }
LABEL_49:
        v133 = v6;
        g4_std::string::assign_str(v115, &v133);
        v7 = v133 - 3;
        if ( v133 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v133 - 1, 0xFFFFFFFF) <= 0 )
          goto LABEL_51;
        goto LABEL_14;
      }
    }
    else
    {
      if ( v155 != nullptr )
        goto LABEL_144;
      v26 = (size_t *)sub_1938930(0, 0);
      v6 = (volatile int32_t *)(v26 + 3);
      v91 = 0;
    }
    v76 = v6;
    srcb = v26;
    memcpy((void *)v6, na, v91);
    v26 = srcb;
    v6 = v76;
    goto LABEL_47;
  }
  if ( v157 == v156 )
    goto LABEL_13;
  if ( v156 == nullptr )
LABEL_144:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  src = v156;
  n = v157 - v156;
  v90 = sub_1938930(v157 - v156, 0);
  v6 = (volatile int32_t *)(v90 + 12);
  if ( n == 1 )
  {
    *(uint8_t *)(v90 + 12) = *src;
  }
  else
  {
    memcpy((void *)v6, src, n);
    v6 = (volatile int32_t *)(v90 + 12);
  }
  if ( (uint32_t *)v90 != dword_213B808 )
  {
    *(uint32_t *)(v90 + 8) = 0;
    *(uint32_t *)v90 = n;
    *(uint8_t *)(v90 + n + 12) = 0;
  }
LABEL_13:
  v134 = v6;
  g4_std::string::assign_str(v115, &v134);
  v7 = v134 - 3;
  if ( v134 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v134 - 1, 0xFFFFFFFF) <= 0 )
LABEL_51:
    g4_std::string::Rep::M_destroy((void *)v7);
LABEL_14:
  v116[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(v116, *(uint32_t *)(v115[0] - 12) + 33);
  g4_std::string::append((int)(uintptr_t)(v116), "The message should be lower than ", 0x21u);
  g4_std::string::append_str(v116, v115);
  g4_std::string::construct_copy(&v128, v116);
  g4_std::string::append((int)(uintptr_t)(&v128), " characters.", 0xCu);
  if ( v5 == (uint8_t *)-4 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  chatv2::Responses::ClientResponse::SetMessage(v5 + 4, &v128);
  v8 = (void *)(v128 - 12);
  if ( (uint32_t *)(v128 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v128 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = (void *)(v116[0] - 12);
  if ( (uint32_t *)(v116[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v116[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v115[0] - 12);
  if ( (uint32_t *)(v115[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v115[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  if ( *(uint32_t *)(*(uint32_t *)(v104 + 28) + 36) == 0
    || boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull == nullptr )
  {
    goto LABEL_25;
  }
  __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
  v11 = *(uint32_t *)(v104 + 28);
  v12 = *(uint32_t *)(v11 + 36);
  if ( v12 == 0 )
LABEL_178:
    sub_124B068();
  v145 = v5 + 4;
  v13 = *(void (**)(int, uint8_t **))((v12 & 0xFFFFFFFE) + 4);
  v146 = v4;
  __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
  v13(v11 + 40, &v145);
  v14 = (volatile int32_t *)v146;
  if ( v146 != 0 && __sync_fetch_and_add((volatile int32_t *)(v146 + 4), 0xFFFFFFFF) == 1 )
  {
    v86 = v14;
    G4_VCALL<void>(v14, 8);
    if ( __sync_fetch_and_add(v86 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v86, 12);
  }
  if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
LABEL_25:
  v153 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v162[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v154[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v15 = v161 - 3;
  if ( v161 - 3 != (volatile int32_t *)(uintptr_t)(dword_213B808) && __sync_fetch_and_add(v161 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy((void *)v15);
  v154[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v159);
  v153 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v154[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v162[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v162);
LABEL_27:
  if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  return v103;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SubscribeArionRequest::CheckFailure  (binary VA: 0x124c3f0)
// Original: chatv2::Requests::SubscribeArionRequest::CheckFailure
// ----------------------------------------------------------------------------
int chatv2::Requests::SubscribeArionRequest::CheckFailure(chatv2::Requests::SubscribeArionRequest::Self *self)
{
  return chatv2::Requests::IArionServerRequest::CheckFailure(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SubscribeArionRequest::CanExecute  (binary VA: 0x124c420)
// Original: chatv2::Requests::SubscribeArionRequest::CanExecute
// ----------------------------------------------------------------------------
int chatv2::Requests::SubscribeArionRequest::CanExecute(chatv2::Requests::SubscribeArionRequest::Self *self)
{
  bool CanExecute;
  int v2;
  chatv2::Connectivity::IClient::Self *v3;

  CanExecute = chatv2::Requests::IRequest::CanExecute((chatv2::Requests::IRequest::Self *)(self));
  v2 = 0;
  if ( CanExecute )
  {
    v3 = (chatv2::Connectivity::IClient::Self *)G4_VCALL<int>(self, 24);
    return chatv2::Connectivity::IClient::IsStarted(v3);
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SubscribeArionRequest::GetClient  (binary VA: 0x124c470)
// Original: chatv2::Requests::SubscribeArionRequest::GetClient
// ----------------------------------------------------------------------------
char * chatv2::Requests::SubscribeArionRequest::GetClient(chatv2::Requests::SubscribeArionRequest::Self *self)
{
  chatv2::Requests::ArionRequestFactory::Self *v1;
  char *result;
  volatile int32_t *v3;
  typedef char *_g4_t_v4;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v5;
  typedef volatile int32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v5, *((uint32_t *)self + 7));
  v1 = v5;
  if ( v5 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v1 = v5;
  }
  result = chatv2::Requests::ArionRequestFactory::GetSubscribeClient(v1);
  v3 = v6;
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
  {
    v4 = result;
    G4_VCALL<void>(v3, 8);
    result = v4;
    if ( __sync_fetch_and_add(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 12);
      return v4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SubscribeArionRequest::Destroy  (binary VA: 0x124c540)
// Original: chatv2::Requests::SubscribeArionRequest::~SubscribeArionRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::SubscribeArionRequest::Destroy(chatv2::Requests::SubscribeArionRequest::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20925E8);
  v1 = *((uint32_t *)self + 14);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 13);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  chatv2::Requests::IArionServerRequest::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SubscribeArionRequest::Destroy_ea124c5e0  (binary VA: 0x124c5e0)
// Original: chatv2::Requests::SubscribeArionRequest::~SubscribeArionRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::SubscribeArionRequest::Destroy_ea124c5e0(chatv2::Requests::SubscribeArionRequest::Self *self)
{
  chatv2::Requests::SubscribeArionRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SubscribeArionRequest::Construct  (binary VA: 0x124c620)
// Original: chatv2::Requests::SubscribeArionRequest::SubscribeArionRequest
// ----------------------------------------------------------------------------
int chatv2::Requests::SubscribeArionRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3, int a4, int a5, int a6)
{
  int result;

  chatv2::Requests::IArionServerRequest::Construct(a1, a2, a3, a6, a4, 0);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20925E8);
  g4_std::string::construct_copy((char *)a1 + 52, a6);
  result = (int)(uintptr_t)(g4_std::string::construct_copy((char *)a1 + 56, a5));
  *((uint32_t *)a1 + 15) = a4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::SubscribeArionRequest::ToHTTPRequest  (binary VA: 0x124c6c0)
// Original: chatv2::Requests::SubscribeArionRequest::ToHTTPRequest
// ----------------------------------------------------------------------------
chatv2::Requests::SubscribeArionRequest::Self * chatv2::Requests::SubscribeArionRequest::ToHTTPRequest(chatv2::Requests::SubscribeArionRequest::Self *self, uint32_t *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  int v6;
  uint8_t *v7;
  volatile int32_t *v8;
  int v9;
  uint8_t *v10;
  uint8_t *v11;
  int v12;
  volatile int32_t *v13;
  const char *v14;
  char v15;
  size_t v16;
  int v17;
  size_t v18;
  const char *v19;
  char v20;
  int v21;
  int v22;
  int v23;
  int v24;
  void *v25;
  void *v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  void *v31;
  char *v33;
  uint32_t *v34;
  size_t v35;
  int v36;
  char v37;
  char *v38;
  size_t v39;
  int v40;
  char v41;
  char *v42;
  size_t v43;
  int v44;
  char v45;
  char *v46;
  uint32_t *v47;
  size_t v48;
  int v49;
  char v50;
  int v51;
  void *v52;
  int v53;
  volatile int32_t *v54;
  int v55;
  uint8_t *v56;
  void *v57;
  int v58;
  volatile int32_t *v59;
  size_t v60;
  int v61;
  size_t v62;
  int v63;
  typedef gaia::Gaia::Self *_g4_t_v64;
  typedef char *_g4_t_v65;
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef char *_g4_t_v68;
  typedef uint8_t *_g4_t_v69;
  typedef uint8_t *_g4_t_v70;
  typedef uint32_t *_g4_t_v71;
  typedef uint32_t *_g4_t_v72;
  typedef uint8_t *_g4_t_v73;
  typedef uint8_t *_g4_t_v74;
  typedef char _g4_t_v75;
  typedef char _g4_t_v76;
  typedef uint8_t *_g4_t_v77;
  typedef uint32_t *_g4_t_v78;
  typedef uint32_t *_g4_t_v79;
  typedef const char *_g4_t_v80;
  typedef const char *_g4_t_v81;
  typedef const char *_g4_t_v82;
  typedef const char *_g4_t_v83;
  typedef int _g4_t_v84;
  typedef chatv2::Requests::SubscribeArionRequest::Self *_g4_t_v85;
  typedef uint32_t *_g4_t_v86;
  typedef uint8_t *_g4_t_untyped_deleter;
  typedef void *_g4_t_v88;
  typedef char *_g4_t_v89;
  typedef char *_g4_t_v90;
  typedef char *_g4_t_v91;
  typedef char *_g4_t_v92;
  typedef uint8_t *_g4_t_v93;
  typedef uint8_t *_g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef char _g4_t_v97;
  typedef char _g4_t_v98;
  typedef char _g4_t_v99;
  typedef char _g4_t_v100;
  typedef char _g4_t_v101;
  typedef uint32_t _g4_t_v102[4];
  typedef int _g4_t_v103[4];
  typedef int _g4_t_v104[4];
  typedef int _g4_t_v105[4];
  typedef int _g4_t_v106[4];
  typedef uint32_t _g4_t_v107[4];
  typedef uint32_t _g4_t_v108[4];
  typedef int _g4_t_v109[4];
  typedef int _g4_t_v110[4];
  typedef int _g4_t_v111[4];
  typedef int _g4_t_v112[4];
  typedef int _g4_t_v113;
  typedef int _g4_t_v114;
  typedef size_t _g4_t_v115;
  typedef uint8_t _g4_t_v116[2];
  typedef char _g4_t_v117;
  typedef char _g4_t_v118;
  typedef uint8_t *_g4_t_v119;
  typedef volatile int32_t *_g4_t_v120;
  typedef uint8_t *_g4_t_v121;
  typedef volatile int32_t *_g4_t_v122;
  typedef uint8_t *_g4_t_v123;
  typedef volatile int32_t *_g4_t_v124;
  typedef int _g4_t_v125;
  typedef volatile int32_t *_g4_t_v126;
  typedef chatv2::Requests::SubscribeArionRequest::Self **_g4_t_v127;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (12u + sizeof(_g4_t_v64)) > _g4_s0 ? (12u + sizeof(_g4_t_v64)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v65)) > _g4_s1 ? (16u + sizeof(_g4_t_v65)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v66)) > _g4_s2 ? (16u + sizeof(_g4_t_v66)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v67)) > _g4_s3 ? (16u + sizeof(_g4_t_v67)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v68)) > _g4_s4 ? (16u + sizeof(_g4_t_v68)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v69)) > _g4_s5 ? (48u + sizeof(_g4_t_v69)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v70)) > _g4_s6 ? (48u + sizeof(_g4_t_v70)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v71)) > _g4_s7 ? (52u + sizeof(_g4_t_v71)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v72)) > _g4_s8 ? (52u + sizeof(_g4_t_v72)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v73)) > _g4_s9 ? (52u + sizeof(_g4_t_v73)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v74)) > _g4_s10 ? (56u + sizeof(_g4_t_v74)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v75)) > _g4_s11 ? (56u + sizeof(_g4_t_v75)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v76)) > _g4_s12 ? (56u + sizeof(_g4_t_v76)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v77)) > _g4_s13 ? (56u + sizeof(_g4_t_v77)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v78)) > _g4_s14 ? (64u + sizeof(_g4_t_v78)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v79)) > _g4_s15 ? (68u + sizeof(_g4_t_v79)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v80)) > _g4_s16 ? (72u + sizeof(_g4_t_v80)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v81)) > _g4_s17 ? (72u + sizeof(_g4_t_v81)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v82)) > _g4_s18 ? (72u + sizeof(_g4_t_v82)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v83)) > _g4_s19 ? (72u + sizeof(_g4_t_v83)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v84)) > _g4_s20 ? (76u + sizeof(_g4_t_v84)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v85)) > _g4_s21 ? (80u + sizeof(_g4_t_v85)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v86)) > _g4_s22 ? (84u + sizeof(_g4_t_v86)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_untyped_deleter)) > _g4_s23 ? (88u + sizeof(_g4_t_untyped_deleter)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v88)) > _g4_s24 ? (88u + sizeof(_g4_t_v88)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v89)) > _g4_s25 ? (88u + sizeof(_g4_t_v89)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v90)) > _g4_s26 ? (88u + sizeof(_g4_t_v90)) : _g4_s26,
    _g4_s28 = (88u + sizeof(_g4_t_v91)) > _g4_s27 ? (88u + sizeof(_g4_t_v91)) : _g4_s27,
    _g4_s29 = (88u + sizeof(_g4_t_v92)) > _g4_s28 ? (88u + sizeof(_g4_t_v92)) : _g4_s28,
    _g4_s30 = (88u + sizeof(_g4_t_v93)) > _g4_s29 ? (88u + sizeof(_g4_t_v93)) : _g4_s29,
    _g4_s31 = (88u + sizeof(_g4_t_v94)) > _g4_s30 ? (88u + sizeof(_g4_t_v94)) : _g4_s30,
    _g4_s32 = (107u + sizeof(_g4_t_v95)) > _g4_s31 ? (107u + sizeof(_g4_t_v95)) : _g4_s31,
    _g4_s33 = (108u + sizeof(_g4_t_v96)) > _g4_s32 ? (108u + sizeof(_g4_t_v96)) : _g4_s32,
    _g4_s34 = (112u + sizeof(_g4_t_v97)) > _g4_s33 ? (112u + sizeof(_g4_t_v97)) : _g4_s33,
    _g4_s35 = (113u + sizeof(_g4_t_v98)) > _g4_s34 ? (113u + sizeof(_g4_t_v98)) : _g4_s34,
    _g4_s36 = (114u + sizeof(_g4_t_v99)) > _g4_s35 ? (114u + sizeof(_g4_t_v99)) : _g4_s35,
    _g4_s37 = (115u + sizeof(_g4_t_v100)) > _g4_s36 ? (115u + sizeof(_g4_t_v100)) : _g4_s36,
    _g4_s38 = (116u + sizeof(_g4_t_v101)) > _g4_s37 ? (116u + sizeof(_g4_t_v101)) : _g4_s37,
    _g4_s39 = (124u + sizeof(_g4_t_v102)) > _g4_s38 ? (124u + sizeof(_g4_t_v102)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v103)) > _g4_s39 ? (140u + sizeof(_g4_t_v103)) : _g4_s39,
    _g4_s41 = (156u + sizeof(_g4_t_v104)) > _g4_s40 ? (156u + sizeof(_g4_t_v104)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v105)) > _g4_s41 ? (172u + sizeof(_g4_t_v105)) : _g4_s41,
    _g4_s43 = (188u + sizeof(_g4_t_v106)) > _g4_s42 ? (188u + sizeof(_g4_t_v106)) : _g4_s42,
    _g4_s44 = (204u + sizeof(_g4_t_v107)) > _g4_s43 ? (204u + sizeof(_g4_t_v107)) : _g4_s43,
    _g4_s45 = (220u + sizeof(_g4_t_v108)) > _g4_s44 ? (220u + sizeof(_g4_t_v108)) : _g4_s44,
    _g4_s46 = (236u + sizeof(_g4_t_v109)) > _g4_s45 ? (236u + sizeof(_g4_t_v109)) : _g4_s45,
    _g4_s47 = (252u + sizeof(_g4_t_v110)) > _g4_s46 ? (252u + sizeof(_g4_t_v110)) : _g4_s46,
    _g4_s48 = (268u + sizeof(_g4_t_v111)) > _g4_s47 ? (268u + sizeof(_g4_t_v111)) : _g4_s47,
    _g4_s49 = (284u + sizeof(_g4_t_v112)) > _g4_s48 ? (284u + sizeof(_g4_t_v112)) : _g4_s48,
    _g4_s50 = (300u + sizeof(_g4_t_v113)) > _g4_s49 ? (300u + sizeof(_g4_t_v113)) : _g4_s49,
    _g4_s51 = (304u + sizeof(_g4_t_v114)) > _g4_s50 ? (304u + sizeof(_g4_t_v114)) : _g4_s50,
    _g4_s52 = (308u + sizeof(_g4_t_v115)) > _g4_s51 ? (308u + sizeof(_g4_t_v115)) : _g4_s51,
    _g4_s53 = (312u + sizeof(_g4_t_v116)) > _g4_s52 ? (312u + sizeof(_g4_t_v116)) : _g4_s52,
    _g4_s54 = (314u + sizeof(_g4_t_v117)) > _g4_s53 ? (314u + sizeof(_g4_t_v117)) : _g4_s53,
    _g4_s55 = (315u + sizeof(_g4_t_v118)) > _g4_s54 ? (315u + sizeof(_g4_t_v118)) : _g4_s54,
    _g4_s56 = (316u + sizeof(_g4_t_v119)) > _g4_s55 ? (316u + sizeof(_g4_t_v119)) : _g4_s55,
    _g4_s57 = (320u + sizeof(_g4_t_v120)) > _g4_s56 ? (320u + sizeof(_g4_t_v120)) : _g4_s56,
    _g4_s58 = (332u + sizeof(_g4_t_v121)) > _g4_s57 ? (332u + sizeof(_g4_t_v121)) : _g4_s57,
    _g4_s59 = (336u + sizeof(_g4_t_v122)) > _g4_s58 ? (336u + sizeof(_g4_t_v122)) : _g4_s58,
    _g4_s60 = (348u + sizeof(_g4_t_v123)) > _g4_s59 ? (348u + sizeof(_g4_t_v123)) : _g4_s59,
    _g4_s61 = (352u + sizeof(_g4_t_v124)) > _g4_s60 ? (352u + sizeof(_g4_t_v124)) : _g4_s60,
    _g4_s62 = (364u + sizeof(_g4_t_v125)) > _g4_s61 ? (364u + sizeof(_g4_t_v125)) : _g4_s61,
    _g4_s63 = (368u + sizeof(_g4_t_v126)) > _g4_s62 ? (368u + sizeof(_g4_t_v126)) : _g4_s62,
    _g4_s64 = (388u + sizeof(_g4_t_v127)) > _g4_s63 ? (388u + sizeof(_g4_t_v127)) : _g4_s63
  };
  alignas(16) uint8_t _g4_sf[_g4_s64];
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 12u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 16u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 48u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 48u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 52u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 52u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 56u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 56u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 56u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 56u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 64u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 68u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 72u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 72u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 72u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 76u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 80u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 84u);
  _g4_t_untyped_deleter &untyped_deleter = *reinterpret_cast<_g4_t_untyped_deleter *>(_g4_sf + 88u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 88u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 88u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 88u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 88u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 88u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 88u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 88u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 107u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 108u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 112u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 113u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 114u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 115u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 116u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 124u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 140u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 156u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 172u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 188u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 204u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 220u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 236u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 252u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 268u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 284u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 300u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 304u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 308u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 312u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 314u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 315u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 316u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 320u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 332u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 336u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 348u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 352u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 364u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 368u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 388u);

  v127 = &self;
  v85 = self;
  v86 = a2;
  gaia::Gaia::GetInstance(v64);
  gaia::Gaia::GetJanusToken(v102);
  v103[0] = (int)(uintptr_t)(&dword_213B814);
  v2 = v86[15];
  if ( v2 != 0 )
  {
    if ( v2 != 1 )
      goto LABEL_3;
  }
  else
  {
    g4_std_compat::string_assign((int)(uintptr_t)(v103), "rooms", 5u);
    if ( v86[15] != 1 )
      goto LABEL_3;
  }
  g4_std_compat::string_assign((int)(uintptr_t)(v103), "channels", 8u);
LABEL_3:
  v105[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(v105, *(uint32_t *)(v103[0] - 12) + 6);
  g4_std::string::append((int)(uintptr_t)(v105), "/chat/", 6u);
  g4_std::string::append_str(v105, v103);
  g4_std::string::construct_copy(v106, v105);
  g4_std::string::append((int)(uintptr_t)(v106), "/", 1u);
  g4_std::string::construct_copy(&v113, v106);
  g4_std::string::append_str(&v113, v86 + 8);
  g4_std::string::construct_copy(v104, &v113);
  g4_std::string::append((int)(uintptr_t)(v104), "/subscribe", 0xAu);
  v3 = (void *)(v113 - 12);
  if ( (uint32_t *)(v113 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v113 - 4), 0xFFFFFFFF) <= 0 )
  {
    v65 = (char *)&v96 + 3;
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v106[0] - 12);
  if ( (uint32_t *)(v106[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v106[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v65 = &v97;
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v105[0] - 12);
  if ( (uint32_t *)(v105[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v105[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v65 = &v98;
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = opNew(0xF0u);
  *(uint32_t *)(v6 + 4) = 1;
  *(uint32_t *)(v6 + 8) = 1;
  *(uint32_t *)v6 = ((uint32_t)(uintptr_t)&off_2092528);
  *(uint32_t *)(v6 + 12) = 0;
  *(uint8_t *)(v6 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>> *)v6);
  v7 = untyped_deleter + 4;
  v125 = chatv2::Utils::ChatLibHeaderOptions::PostHeaderOptions;
  v126 = (volatile int32_t *)(*(uint8_t **)unk_2116580);
  if ( (*(uint8_t **)unk_2116580) != 0 )
    __sync_add_and_fetch((volatile int32_t *)((*(uint8_t **)unk_2116580) + 4), 1);
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPRequest::Construct(v7, v104, &v125);
    v7 = untyped_deleter + 4;
  }
  v8 = v126;
  if ( v126 != nullptr && __sync_fetch_and_add(v126 + 1, 0xFFFFFFFF) == 1 )
  {
    v69 = v7;
    G4_VCALL<void>(v8, 8, v65);
    v7 = v69;
    if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v8, 12);
      v7 = v69;
    }
  }
  *untyped_deleter = 1;
  *(uint32_t *)v85 = (uint32_t)(uintptr_t)(v7);
  *((uint32_t *)v85 + 1) = v6;
  __sync_add_and_fetch((volatile int32_t *)(v6 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v6 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v6, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v6 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v6, 12);
  }
  v107[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v102, v107);
  v9 = opNew(0x1Cu);
  *(uint32_t *)(v9 + 4) = 1;
  *(uint32_t *)(v9 + 8) = 1;
  *(uint32_t *)(v9 + 12) = 0;
  *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v9 + 16) = 0;
  v74 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v9);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v109), "access_token", (int)(uintptr_t)(&v96));
  v10 = v74 + 4;
  v11 = v74;
  if ( v74 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v74 + 4, v109, v107);
    v10 = v74 + 4;
    v11 = v74;
  }
  v88 = (void *)(v109[0] - 12);
  if ( (uint32_t *)(v109[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v109[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v66 = &v99;
    v77 = v11;
    v70 = v10;
    g4_std::string::Rep::M_destroy(v88);
    v10 = v70;
    v11 = v77;
  }
  *v11 = 1;
  v119 = v10;
  v120 = (volatile int32_t *)v9;
  __sync_add_and_fetch((volatile int32_t *)(v9 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v9 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v9, 8, v66);
    if ( __sync_fetch_and_add((volatile int32_t *)(v9 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v9, 12);
  }
  v12 = *(uint32_t *)v85;
  if ( *(uint32_t *)v85 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v12 = *(uint32_t *)v85;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v12, &v119);
  v13 = v120;
  if ( v120 != nullptr && __sync_fetch_and_add(v120 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v13, 8);
    if ( __sync_fetch_and_add(v13 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v13, 12);
  }
  v78 = v86 + 13;
  if ( v86[15] == 1 && *(uint32_t *)(v86[13] - 12) != 0 )
  {
    v55 = opNew(0x1Cu);
    *(uint32_t *)(v55 + 4) = 1;
    *(uint32_t *)(v55 + 8) = 1;
    *(uint32_t *)(v55 + 12) = 0;
    *(uint32_t *)v55 = ((uint32_t)(uintptr_t)&off_2092588);
    *(uint8_t *)(v55 + 16) = 0;
    v94 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v55);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v110), "language", (int)(uintptr_t)(&v96) + 1);
    v56 = v94 + 4;
    if ( v94 != (uint8_t *)-4 )
    {
      chatv2::Connectivity::HTTPParameter::Construct(v94 + 4, v110, v78);
      v56 = v94 + 4;
    }
    v57 = (void *)(v110[0] - 12);
    if ( (uint32_t *)(v110[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v110[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v73 = v56;
      v68 = &v100;
      g4_std::string::Rep::M_destroy(v57);
      v56 = v73;
    }
    *v94 = 1;
    v121 = v56;
    v122 = (volatile int32_t *)v55;
    __sync_add_and_fetch((volatile int32_t *)(v55 + 4), 1);
    if ( __sync_fetch_and_add((volatile int32_t *)(v55 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v55, 8, v68);
      if ( __sync_fetch_and_add((volatile int32_t *)(v55 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v55, 12);
    }
    v58 = *(uint32_t *)v85;
    if ( *(uint32_t *)v85 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
        "px != 0");
      v58 = *(uint32_t *)v85;
    }
    chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v58, &v121);
    v59 = v122;
    if ( v122 != nullptr && __sync_fetch_and_add(v122 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v59, 8);
      if ( __sync_fetch_and_add(v59 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v59, 12);
    }
  }
  v79 = v86 + 14;
  if ( *(uint32_t *)(v86[14] - 12) != 0 )
  {
    v51 = opNew(0x1Cu);
    *(uint32_t *)(v51 + 4) = 1;
    *(uint32_t *)(v51 + 8) = 1;
    *(uint32_t *)(v51 + 12) = 0;
    *(uint32_t *)v51 = ((uint32_t)(uintptr_t)&off_2092588);
    *(uint8_t *)(v51 + 16) = 0;
    v93 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v51);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v111), "reconnect_key", (int)(uintptr_t)(&v96) + 2);
    if ( v93 != (uint8_t *)-4 )
      chatv2::Connectivity::HTTPParameter::Construct(v93 + 4, v111, v79);
    v52 = (void *)(v111[0] - 12);
    if ( (uint32_t *)(v111[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v111[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v67 = &v101;
      g4_std::string::Rep::M_destroy(v52);
    }
    *v93 = 1;
    v123 = v93 + 4;
    v124 = (volatile int32_t *)v51;
    __sync_add_and_fetch((volatile int32_t *)(v51 + 4), 1);
    if ( __sync_fetch_and_add((volatile int32_t *)(v51 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v51, 8, v67);
      if ( __sync_fetch_and_add((volatile int32_t *)(v51 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v51, 12);
    }
    v53 = *(uint32_t *)v85;
    if ( *(uint32_t *)v85 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
        "px != 0");
      v53 = *(uint32_t *)v85;
    }
    chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v53, &v123);
    v54 = v124;
    if ( v124 != nullptr && __sync_fetch_and_add(v124 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v54, 8);
      if ( __sync_fetch_and_add(v54 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v54, 12);
    }
  }
  v14 = " Subscribe Arion Request to HTTPRequest, address: {0}, access_token: {1}, language: {2}, type: {3}, reconnect_key: {4}\n";
  v112[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v112), 0x80u, 0);
  v115 = 0;
  v84 = 0;
  v15 = aSubscribeArion /* " Subscribe Arion Request to HTTPRequest, addr..." */[0];
  while ( 1 )
  {
LABEL_30:
    v19 = v14 + 1;
    if ( v15 != 123 )
    {
      v16 = v115;
      v17 = v112[0];
      v18 = v115 + 1;
      if ( v115 + 1 > *(uint32_t *)(v112[0] - 12) )
      {
        v75 = v15;
        sub_1939D80((int)(uintptr_t)(v112), v115 + 65, 0);
        v16 = v115;
        v17 = v112[0];
        v15 = v75;
        v18 = v115 + 1;
      }
      v115 = v18;
      if ( *(int *)(v17 - 4) >= 0 )
      {
        v76 = v15;
        sub_19397C0(v112);
        v17 = v112[0];
        v15 = v76;
      }
      *(uint8_t *)(v17 + v16) = v15;
      v14 = v19;
      goto LABEL_29;
    }
    v20 = v14[1];
    if ( v20 != 123 )
      break;
    v60 = v115;
    v61 = v112[0];
    if ( v115 + 2 > *(uint32_t *)(v112[0] - 12) )
    {
      sub_1939D80((int)(uintptr_t)(v112), v115 + 66, 0);
      v60 = v115;
      v61 = v112[0];
      ++v115;
      if ( *(int *)(v112[0] - 4) < 0 )
        goto LABEL_115;
LABEL_114:
      sub_19397C0(v112);
      v61 = v112[0];
      goto LABEL_115;
    }
    ++v115;
    if ( *(int *)(v112[0] - 4) >= 0 )
      goto LABEL_114;
LABEL_115:
    *(uint8_t *)(v61 + v60) = 123;
    v62 = v115++;
    v63 = v112[0];
    if ( *(int *)(v112[0] - 4) >= 0 )
    {
      sub_19397C0(v112);
      v63 = v112[0];
    }
    *(uint8_t *)(v63 + v62) = 123;
    v14 += 2;
LABEL_29:
    v15 = *v14;
    if ( *v14 == 0 )
      goto LABEL_41;
  }
  v116[0] = 0;
  v116[1] = 0;
  v117 = 20;
  v118 = 32;
  if ( v20 == 0 )
    goto LABEL_50;
  v21 = 1;
  v22 = 0;
  while ( 1 )
  {
    v20 = *v19;
    if ( (uint8_t)(*v19 - 48) > 9u )
      break;
    v23 = v21 * v22;
    ++v19;
    v21 *= 10;
    v22 = v23 + v20 - 48;
    if ( *v19 == 0 )
    {
      v24 = v22;
      v20 = 0;
      goto LABEL_37;
    }
  }
  v24 = v22;
  if ( v21 == 1 )
LABEL_50:
    v24 = v84++;
  if ( v20 == 58 )
  {
    v20 = v19[1];
    if ( v20 == 120 )
    {
      v14 = v19 + 3;
      v117 = v117 & 1 | 0x20;
      v20 = v19[2];
    }
    else
    {
      v14 = v19 + 2;
      if ( v20 == 88 )
      {
        v117 = 33;
        v14 = v19 + 3;
        v20 = v19[2];
      }
    }
  }
  else
  {
LABEL_37:
    v14 = v19 + 1;
  }
  if ( v20 == 125 )
  {
    switch ( v24 )
    {
      case 0:
        v91 = *(char **)(v104[0] - 12);
        if ( (unsigned int)(uintptr_t)(&v91[v115]) > *(uint32_t *)(v112[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v112), (size_t)&v91[v115 + 64], 0);
          v91 = *(char **)(v104[0] - 12);
        }
        if ( v91 != nullptr )
        {
          v42 = nullptr;
          v82 = v14;
          do
          {
            v43 = v115++;
            v44 = v112[0];
            if ( *(int *)(v112[0] - 4) >= 0 )
            {
              sub_19397C0(v112);
              v44 = v112[0];
            }
            v45 = (v42++)[v104[0]];
            *(uint8_t *)(v44 + v43) = v45;
          }
          while ( v42 != v91 );
          v14 = v82;
        }
        goto LABEL_29;
      case 1:
        v90 = *(char **)(v107[0] - 12);
        if ( (unsigned int)(uintptr_t)(&v90[v115]) > *(uint32_t *)(v112[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v112), (size_t)&v90[v115 + 64], 0);
          v90 = *(char **)(v107[0] - 12);
        }
        if ( v90 != nullptr )
        {
          v38 = nullptr;
          v81 = v14;
          do
          {
            v39 = v115++;
            v40 = v112[0];
            if ( *(int *)(v112[0] - 4) >= 0 )
            {
              sub_19397C0(v112);
              v40 = v112[0];
            }
            v41 = (v38++)[v107[0]];
            *(uint8_t *)(v40 + v39) = v41;
          }
          while ( v38 != v90 );
          v14 = v81;
        }
        goto LABEL_29;
      case 2:
        v89 = *(char **)(*v78 - 12);
        if ( (unsigned int)(uintptr_t)(&v89[v115]) > *(uint32_t *)(v112[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v112), (size_t)&v89[v115 + 64], 0);
          v89 = *(char **)(v86[13] - 12);
        }
        if ( v89 != nullptr )
        {
          v33 = nullptr;
          v80 = v14;
          v34 = v86 + 13;
          do
          {
            v35 = v115++;
            v36 = v112[0];
            if ( *(int *)(v112[0] - 4) >= 0 )
            {
              v71 = v34;
              sub_19397C0(v112);
              v36 = v112[0];
              v34 = v71;
            }
            v37 = (v33++)[*v34];
            *(uint8_t *)(v36 + v35) = v37;
          }
          while ( v33 != v89 );
          v14 = v80;
        }
        goto LABEL_29;
      case 3:
        jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315(v112, &v115, v116, v86[15]);
        goto LABEL_29;
      case 4:
        v92 = *(char **)(*v79 - 12);
        if ( (unsigned int)(uintptr_t)(&v92[v115]) > *(uint32_t *)(v112[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v112), (size_t)&v92[v115 + 64], 0);
          v92 = *(char **)(v86[14] - 12);
        }
        if ( v92 != nullptr )
        {
          v46 = nullptr;
          v83 = v14;
          v47 = v86 + 14;
          do
          {
            v48 = v115++;
            v49 = v112[0];
            if ( *(int *)(v112[0] - 4) >= 0 )
            {
              v72 = v47;
              sub_19397C0(v112);
              v49 = v112[0];
              v47 = v72;
            }
            v50 = (v46++)[*v47];
            *(uint8_t *)(v49 + v48) = v50;
          }
          while ( v46 != v92 );
          v14 = v83;
        }
        goto LABEL_29;
      default:
        sub_1939D80((int)(uintptr_t)(v112), v115, 0);
        v15 = *v14;
        if ( *v14 != 0 )
          goto LABEL_30;
        break;
    }
  }
  else
  {
    sub_1939D80((int)(uintptr_t)(v112), v115, 0);
  }
LABEL_41:
  sub_1939D80((int)(uintptr_t)(v112), v115, 0);
  g4_std::string::construct_copy(v108, v112);
  v25 = (void *)(v112[0] - 12);
  if ( (uint32_t *)(v112[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v112[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v25);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v114), "ChatLib", (int)(uintptr_t)(&v95));
  chatv2::Utils::Log(
    3,
    0,
    &v114,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/SubscribeArionRequest.cpp",
    77,
    v108);
  v26 = (void *)(v114 - 12);
  if ( (uint32_t *)(v114 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v114 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v26);
  }
  v27 = (void *)(v108[0] - 12);
  if ( (uint32_t *)(v108[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v108[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v27);
  }
  v28 = (void *)(v107[0] - 12);
  if ( (uint32_t *)(v107[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v107[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v28);
  }
  v29 = (void *)(v104[0] - 12);
  if ( (uint32_t *)(v104[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v104[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v29);
  }
  v30 = (void *)(v103[0] - 12);
  if ( (uint32_t *)(v103[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v103[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v30);
  }
  v31 = (void *)(v102[0] - 12);
  if ( (uint32_t *)(v102[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v102[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v31);
  }
  return v85;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::CanExecute  (binary VA: 0x126a0a0)
// Original: chatv2::Requests::ReportUserRequest::CanExecute
// ----------------------------------------------------------------------------
int chatv2::Requests::ReportUserRequest::CanExecute(chatv2::Requests::ReportUserRequest::Self *self)
{
  bool CanExecute;
  int v2;
  chatv2::Connectivity::IClient::Self *v3;

  CanExecute = chatv2::Requests::IRequest::CanExecute((chatv2::Requests::IRequest::Self *)(self));
  v2 = 0;
  if ( CanExecute )
  {
    v3 = (chatv2::Connectivity::IClient::Self *)G4_VCALL<int>(self, 24);
    LOBYTE(v2) = chatv2::Connectivity::IClient::GetState(v3) == 1;
  }
  return v2;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::Destroy  (binary VA: 0x126a1a0)
// Original: chatv2::Requests::ReportUserRequest::~ReportUserRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::ReportUserRequest::Destroy(chatv2::Requests::ReportUserRequest::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2092968);
  v1 = *((uint32_t *)self + 17);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 16);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((uint32_t *)self + 15);
  if ( (uint32_t *)(v3 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v3 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v3 - 12));
  }
  v4 = *((uint32_t *)self + 14);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v4 - 12));
  }
  chatv2::Requests::IArionServerRequest::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::Destroy_ea126a2a0  (binary VA: 0x126a2a0)
// Original: chatv2::Requests::ReportUserRequest::~ReportUserRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::ReportUserRequest::Destroy_ea126a2a0(chatv2::Requests::ReportUserRequest::Self *self)
{
  chatv2::Requests::ReportUserRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::GetClient  (binary VA: 0x126a2e0)
// Original: chatv2::Requests::ReportUserRequest::GetClient
// ----------------------------------------------------------------------------
char * chatv2::Requests::ReportUserRequest::GetClient(chatv2::Requests::ReportUserRequest::Self *self)
{
  chatv2::Requests::ArionRequestFactory::Self *v1;
  char *result;
  volatile int32_t *v3;
  typedef char *_g4_t_v4;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v5;
  typedef volatile int32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v5)) > _g4_s1 ? (24u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v6)) > _g4_s2 ? (28u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 24u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v5, *((uint32_t *)self + 13));
  v1 = v5;
  if ( v5 == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v1 = v5;
  }
  result = chatv2::Requests::ArionRequestFactory::GetReportClient(v1);
  v3 = v6;
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
  {
    v4 = result;
    G4_VCALL<void>(v3, 8);
    result = v4;
    if ( __sync_fetch_and_add(v3 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v3, 12);
      return v4;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::Construct  (binary VA: 0x126a9e0)
// Original: chatv2::Requests::ReportUserRequest::ReportUserRequest
// ----------------------------------------------------------------------------
uint32_t * chatv2::Requests::ReportUserRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3, int a4, chatv2::Core::ArionUser::Self *a5, int a6)
{
  void *v6;
  char *Nickname;
  chatv2::Core::ArionUser::Self *Credential;
  typedef int _g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v10)) > _g4_s0 ? (10u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 10u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(v11), (char *)&unk_1B15112, (int)(uintptr_t)(&v10));
  chatv2::Requests::IArionServerRequest::Construct(a1, a2, a3, (int)(uintptr_t)(v11), a4, 3);
  v6 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  *((uint32_t *)a1 + 13) = a2;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2092968);
  Nickname = chatv2::Core::ArionUser::GetNickname(a5);
  g4_std::string::construct_copy((char *)a1 + 56, Nickname);
  Credential = chatv2::Core::ArionUser::GetCredential(a5);
  g4_std::string::construct_copy((char *)a1 + 60, Credential);
  g4_std::string::construct_copy((char *)a1 + 64, a6);
  *((uint32_t *)a1 + 17) = (uint32_t)(uintptr_t)(&dword_213B814);
  return &dword_213B814;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::SetReportType  (binary VA: 0x126ab00)
// Original: chatv2::Requests::ReportUserRequest::SetReportType
// ----------------------------------------------------------------------------
int chatv2::Requests::ReportUserRequest::SetReportType(int a1, int a2)
{
  *(uint32_t *)(a1 + 72) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::ToHTTPRequest  (binary VA: 0x126ae80)
// Original: chatv2::Requests::ReportUserRequest::ToHTTPRequest
// ----------------------------------------------------------------------------
chatv2::Requests::ReportUserRequest::Self * chatv2::Requests::ReportUserRequest::ToHTTPRequest(chatv2::Requests::ReportUserRequest::Self *self, int a2)
{
  int v2;
  uint8_t *untyped_deleter;
  uint8_t *v4;
  volatile int32_t *v5;
  int v6;
  int v7;
  volatile int32_t *v8;
  int Language;
  chatv2::Core::ArionUser::Self *User;
  int Nickname;
  chatv2::Core::ArionUser::Self *v12;
  int Credential;
  int ClientID;
  int v15;
  uint8_t *v16;
  uint8_t *v17;
  int v18;
  volatile int32_t *v19;
  int v20;
  uint8_t *v21;
  uint8_t *v22;
  int v23;
  volatile int32_t *v24;
  int v25;
  uint8_t *v26;
  uint8_t *v27;
  int v28;
  volatile int32_t *v29;
  int v30;
  uint8_t *v31;
  uint8_t *v32;
  int v33;
  volatile int32_t *v34;
  int v35;
  uint8_t *v36;
  uint8_t *v37;
  int v38;
  volatile int32_t *v39;
  int v40;
  void *v41;
  void *v42;
  int v43;
  volatile int32_t *v44;
  const char *v45;
  char v46;
  size_t v47;
  int v48;
  size_t v49;
  const char *v50;
  char v51;
  int v52;
  int v53;
  int v54;
  char *v55;
  void *v56;
  void *v57;
  void *v58;
  void *v59;
  void *v60;
  void *v61;
  void *v62;
  void *v63;
  void *v64;
  void *v65;
  void *v66;
  void *v67;
  volatile int32_t *v68;
  void *v69;
  int v71;
  volatile int32_t *v72;
  int v73;
  volatile int32_t *v74;
  int v75;
  void *v76;
  int v77;
  volatile int32_t *v78;
  size_t v79;
  int v80;
  size_t v81;
  int v82;
  int v83;
  uint32_t *v84;
  size_t v85;
  int v86;
  char v87;
  int v88;
  size_t v89;
  int v90;
  char v91;
  int v92;
  size_t v93;
  int v94;
  char v95;
  typedef int _g4_t_v96;
  typedef char *_g4_t_v97;
  typedef int *_g4_t_v98;
  typedef char *_g4_t_v99;
  typedef char *_g4_t_v100;
  typedef char *_g4_t_v101;
  typedef char *_g4_t_v102;
  typedef char *_g4_t_v103;
  typedef char *_g4_t_v104;
  typedef uint8_t *_g4_t_v105;
  typedef uint8_t *_g4_t_v106;
  typedef uint8_t *_g4_t_v107;
  typedef uint8_t *_g4_t_v108;
  typedef uint8_t *_g4_t_v109;
  typedef uint8_t *_g4_t_v110;
  typedef char _g4_t_v111;
  typedef char _g4_t_v112;
  typedef uint8_t *_g4_t_v113;
  typedef uint8_t *_g4_t_v114;
  typedef uint8_t *_g4_t_v115;
  typedef uint8_t *_g4_t_v116;
  typedef uint8_t *_g4_t_v117;
  typedef uint8_t *_g4_t_v118;
  typedef uint8_t *_g4_t_v119;
  typedef uint8_t *_g4_t_v120;
  typedef uint8_t *_g4_t_v121;
  typedef uint8_t *_g4_t_v122;
  typedef uint8_t *_g4_t_v123;
  typedef uint8_t *_g4_t_v124;
  typedef uint8_t *_g4_t_v125;
  typedef uint32_t *_g4_t_v126;
  typedef const char *_g4_t_v127;
  typedef const char *_g4_t_v128;
  typedef const char *_g4_t_v129;
  typedef uint32_t *_g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef int _g4_t_v133;
  typedef chatv2::Requests::ReportUserRequest::Self *_g4_t_v134;
  typedef int _g4_t_v135;
  typedef void *_g4_t_v136;
  typedef void *_g4_t_v137;
  typedef void *_g4_t_v138;
  typedef void *_g4_t_v139;
  typedef void *_g4_t_v140;
  typedef uint8_t *_g4_t_v141;
  typedef char *_g4_t_v142;
  typedef uint8_t *_g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef char _g4_t_v148;
  typedef char _g4_t_v149;
  typedef char _g4_t_v150;
  typedef char _g4_t_v151;
  typedef char _g4_t_v152;
  typedef char _g4_t_v153;
  typedef char _g4_t_v154;
  typedef char _g4_t_v155;
  typedef char _g4_t_v156;
  typedef char _g4_t_v157;
  typedef char _g4_t_v158;
  typedef char _g4_t_v159;
  typedef char _g4_t_v160;
  typedef char _g4_t_v161;
  typedef uint32_t _g4_t_v162[4];
  typedef uint32_t _g4_t_v163[4];
  typedef uint32_t _g4_t_v164[4];
  typedef uint32_t _g4_t_v165[4];
  typedef uint32_t _g4_t_v166[4];
  typedef uint32_t _g4_t_v167[4];
  typedef uint32_t _g4_t_v168[4];
  typedef uint32_t _g4_t_v169[4];
  typedef uint32_t _g4_t_v170[4];
  typedef uint32_t _g4_t_v171[4];
  typedef uint32_t _g4_t_v172[4];
  typedef int _g4_t_v173[4];
  typedef int _g4_t_v174[4];
  typedef int _g4_t_v175[4];
  typedef int _g4_t_v176[4];
  typedef int _g4_t_v177[4];
  typedef int _g4_t_v178[4];
  typedef int _g4_t_v179[4];
  typedef int _g4_t_v180[4];
  typedef int _g4_t_v181;
  typedef int _g4_t_v182;
  typedef size_t _g4_t_v183;
  typedef uint8_t _g4_t_v184[2];
  typedef char _g4_t_v185;
  typedef char _g4_t_v186;
  typedef chatv2::Core::ArionChannel::Self *_g4_t_v187;
  typedef volatile int32_t *_g4_t_v188;
  typedef uint8_t *_g4_t_v189;
  typedef volatile int32_t *_g4_t_v190;
  typedef uint8_t *_g4_t_v191;
  typedef volatile int32_t *_g4_t_v192;
  typedef uint8_t *_g4_t_v193;
  typedef volatile int32_t *_g4_t_v194;
  typedef uint8_t *_g4_t_v195;
  typedef volatile int32_t *_g4_t_v196;
  typedef uint8_t *_g4_t_v197;
  typedef volatile int32_t *_g4_t_v198;
  typedef uint8_t *_g4_t_v199;
  typedef volatile int32_t *_g4_t_v200;
  typedef uint8_t *_g4_t_v201;
  typedef volatile int32_t *_g4_t_v202;
  typedef int _g4_t_v203;
  typedef volatile int32_t *_g4_t_v204;
  typedef int _g4_t_v205;
  typedef volatile int32_t *_g4_t_v206;
  typedef char _g4_t_v207[4];
  typedef volatile int32_t *_g4_t_v208;
  typedef char _g4_t_v209[4];
  typedef volatile int32_t *_g4_t_v210;
  typedef chatv2::Requests::ReportUserRequest::Self **_g4_t_v211;
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (4u + sizeof(_g4_t_v96)) > _g4_s0 ? (4u + sizeof(_g4_t_v96)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v97)) > _g4_s1 ? (4u + sizeof(_g4_t_v97)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v98)) > _g4_s2 ? (4u + sizeof(_g4_t_v98)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v99)) > _g4_s3 ? (4u + sizeof(_g4_t_v99)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v100)) > _g4_s4 ? (4u + sizeof(_g4_t_v100)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v101)) > _g4_s5 ? (4u + sizeof(_g4_t_v101)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v102)) > _g4_s6 ? (4u + sizeof(_g4_t_v102)) : _g4_s6,
    _g4_s8 = (4u + sizeof(_g4_t_v103)) > _g4_s7 ? (4u + sizeof(_g4_t_v103)) : _g4_s7,
    _g4_s9 = (4u + sizeof(_g4_t_v104)) > _g4_s8 ? (4u + sizeof(_g4_t_v104)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v105)) > _g4_s9 ? (32u + sizeof(_g4_t_v105)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v106)) > _g4_s10 ? (32u + sizeof(_g4_t_v106)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v107)) > _g4_s11 ? (32u + sizeof(_g4_t_v107)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v108)) > _g4_s12 ? (32u + sizeof(_g4_t_v108)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v109)) > _g4_s13 ? (32u + sizeof(_g4_t_v109)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v110)) > _g4_s14 ? (32u + sizeof(_g4_t_v110)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v111)) > _g4_s15 ? (32u + sizeof(_g4_t_v111)) : _g4_s15,
    _g4_s17 = (32u + sizeof(_g4_t_v112)) > _g4_s16 ? (32u + sizeof(_g4_t_v112)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v113)) > _g4_s17 ? (32u + sizeof(_g4_t_v113)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v114)) > _g4_s18 ? (32u + sizeof(_g4_t_v114)) : _g4_s18,
    _g4_s20 = (32u + sizeof(_g4_t_v115)) > _g4_s19 ? (32u + sizeof(_g4_t_v115)) : _g4_s19,
    _g4_s21 = (32u + sizeof(_g4_t_v116)) > _g4_s20 ? (32u + sizeof(_g4_t_v116)) : _g4_s20,
    _g4_s22 = (32u + sizeof(_g4_t_v117)) > _g4_s21 ? (32u + sizeof(_g4_t_v117)) : _g4_s21,
    _g4_s23 = (32u + sizeof(_g4_t_v118)) > _g4_s22 ? (32u + sizeof(_g4_t_v118)) : _g4_s22,
    _g4_s24 = (36u + sizeof(_g4_t_v119)) > _g4_s23 ? (36u + sizeof(_g4_t_v119)) : _g4_s23,
    _g4_s25 = (36u + sizeof(_g4_t_v120)) > _g4_s24 ? (36u + sizeof(_g4_t_v120)) : _g4_s24,
    _g4_s26 = (36u + sizeof(_g4_t_v121)) > _g4_s25 ? (36u + sizeof(_g4_t_v121)) : _g4_s25,
    _g4_s27 = (36u + sizeof(_g4_t_v122)) > _g4_s26 ? (36u + sizeof(_g4_t_v122)) : _g4_s26,
    _g4_s28 = (36u + sizeof(_g4_t_v123)) > _g4_s27 ? (36u + sizeof(_g4_t_v123)) : _g4_s27,
    _g4_s29 = (36u + sizeof(_g4_t_v124)) > _g4_s28 ? (36u + sizeof(_g4_t_v124)) : _g4_s28,
    _g4_s30 = (36u + sizeof(_g4_t_v125)) > _g4_s29 ? (36u + sizeof(_g4_t_v125)) : _g4_s29,
    _g4_s31 = (40u + sizeof(_g4_t_v126)) > _g4_s30 ? (40u + sizeof(_g4_t_v126)) : _g4_s30,
    _g4_s32 = (44u + sizeof(_g4_t_v127)) > _g4_s31 ? (44u + sizeof(_g4_t_v127)) : _g4_s31,
    _g4_s33 = (44u + sizeof(_g4_t_v128)) > _g4_s32 ? (44u + sizeof(_g4_t_v128)) : _g4_s32,
    _g4_s34 = (44u + sizeof(_g4_t_v129)) > _g4_s33 ? (44u + sizeof(_g4_t_v129)) : _g4_s33,
    _g4_s35 = (52u + sizeof(_g4_t_v130)) > _g4_s34 ? (52u + sizeof(_g4_t_v130)) : _g4_s34,
    _g4_s36 = (64u + sizeof(_g4_t_v131)) > _g4_s35 ? (64u + sizeof(_g4_t_v131)) : _g4_s35,
    _g4_s37 = (64u + sizeof(_g4_t_v132)) > _g4_s36 ? (64u + sizeof(_g4_t_v132)) : _g4_s36,
    _g4_s38 = (64u + sizeof(_g4_t_v133)) > _g4_s37 ? (64u + sizeof(_g4_t_v133)) : _g4_s37,
    _g4_s39 = (68u + sizeof(_g4_t_v134)) > _g4_s38 ? (68u + sizeof(_g4_t_v134)) : _g4_s38,
    _g4_s40 = (72u + sizeof(_g4_t_v135)) > _g4_s39 ? (72u + sizeof(_g4_t_v135)) : _g4_s39,
    _g4_s41 = (76u + sizeof(_g4_t_v136)) > _g4_s40 ? (76u + sizeof(_g4_t_v136)) : _g4_s40,
    _g4_s42 = (76u + sizeof(_g4_t_v137)) > _g4_s41 ? (76u + sizeof(_g4_t_v137)) : _g4_s41,
    _g4_s43 = (76u + sizeof(_g4_t_v138)) > _g4_s42 ? (76u + sizeof(_g4_t_v138)) : _g4_s42,
    _g4_s44 = (76u + sizeof(_g4_t_v139)) > _g4_s43 ? (76u + sizeof(_g4_t_v139)) : _g4_s43,
    _g4_s45 = (76u + sizeof(_g4_t_v140)) > _g4_s44 ? (76u + sizeof(_g4_t_v140)) : _g4_s44,
    _g4_s46 = (76u + sizeof(_g4_t_v141)) > _g4_s45 ? (76u + sizeof(_g4_t_v141)) : _g4_s45,
    _g4_s47 = (76u + sizeof(_g4_t_v142)) > _g4_s46 ? (76u + sizeof(_g4_t_v142)) : _g4_s46,
    _g4_s48 = (76u + sizeof(_g4_t_v143)) > _g4_s47 ? (76u + sizeof(_g4_t_v143)) : _g4_s47,
    _g4_s49 = (81u + sizeof(_g4_t_v144)) > _g4_s48 ? (81u + sizeof(_g4_t_v144)) : _g4_s48,
    _g4_s50 = (84u + sizeof(_g4_t_v145)) > _g4_s49 ? (84u + sizeof(_g4_t_v145)) : _g4_s49,
    _g4_s51 = (88u + sizeof(_g4_t_v146)) > _g4_s50 ? (88u + sizeof(_g4_t_v146)) : _g4_s50,
    _g4_s52 = (92u + sizeof(_g4_t_v147)) > _g4_s51 ? (92u + sizeof(_g4_t_v147)) : _g4_s51,
    _g4_s53 = (96u + sizeof(_g4_t_v148)) > _g4_s52 ? (96u + sizeof(_g4_t_v148)) : _g4_s52,
    _g4_s54 = (97u + sizeof(_g4_t_v149)) > _g4_s53 ? (97u + sizeof(_g4_t_v149)) : _g4_s53,
    _g4_s55 = (98u + sizeof(_g4_t_v150)) > _g4_s54 ? (98u + sizeof(_g4_t_v150)) : _g4_s54,
    _g4_s56 = (100u + sizeof(_g4_t_v151)) > _g4_s55 ? (100u + sizeof(_g4_t_v151)) : _g4_s55,
    _g4_s57 = (101u + sizeof(_g4_t_v152)) > _g4_s56 ? (101u + sizeof(_g4_t_v152)) : _g4_s56,
    _g4_s58 = (102u + sizeof(_g4_t_v153)) > _g4_s57 ? (102u + sizeof(_g4_t_v153)) : _g4_s57,
    _g4_s59 = (103u + sizeof(_g4_t_v154)) > _g4_s58 ? (103u + sizeof(_g4_t_v154)) : _g4_s58,
    _g4_s60 = (104u + sizeof(_g4_t_v155)) > _g4_s59 ? (104u + sizeof(_g4_t_v155)) : _g4_s59,
    _g4_s61 = (105u + sizeof(_g4_t_v156)) > _g4_s60 ? (105u + sizeof(_g4_t_v156)) : _g4_s60,
    _g4_s62 = (106u + sizeof(_g4_t_v157)) > _g4_s61 ? (106u + sizeof(_g4_t_v157)) : _g4_s61,
    _g4_s63 = (107u + sizeof(_g4_t_v158)) > _g4_s62 ? (107u + sizeof(_g4_t_v158)) : _g4_s62,
    _g4_s64 = (108u + sizeof(_g4_t_v159)) > _g4_s63 ? (108u + sizeof(_g4_t_v159)) : _g4_s63,
    _g4_s65 = (109u + sizeof(_g4_t_v160)) > _g4_s64 ? (109u + sizeof(_g4_t_v160)) : _g4_s64,
    _g4_s66 = (110u + sizeof(_g4_t_v161)) > _g4_s65 ? (110u + sizeof(_g4_t_v161)) : _g4_s65,
    _g4_s67 = (112u + sizeof(_g4_t_v162)) > _g4_s66 ? (112u + sizeof(_g4_t_v162)) : _g4_s66,
    _g4_s68 = (128u + sizeof(_g4_t_v163)) > _g4_s67 ? (128u + sizeof(_g4_t_v163)) : _g4_s67,
    _g4_s69 = (144u + sizeof(_g4_t_v164)) > _g4_s68 ? (144u + sizeof(_g4_t_v164)) : _g4_s68,
    _g4_s70 = (160u + sizeof(_g4_t_v165)) > _g4_s69 ? (160u + sizeof(_g4_t_v165)) : _g4_s69,
    _g4_s71 = (176u + sizeof(_g4_t_v166)) > _g4_s70 ? (176u + sizeof(_g4_t_v166)) : _g4_s70,
    _g4_s72 = (192u + sizeof(_g4_t_v167)) > _g4_s71 ? (192u + sizeof(_g4_t_v167)) : _g4_s71,
    _g4_s73 = (208u + sizeof(_g4_t_v168)) > _g4_s72 ? (208u + sizeof(_g4_t_v168)) : _g4_s72,
    _g4_s74 = (224u + sizeof(_g4_t_v169)) > _g4_s73 ? (224u + sizeof(_g4_t_v169)) : _g4_s73,
    _g4_s75 = (240u + sizeof(_g4_t_v170)) > _g4_s74 ? (240u + sizeof(_g4_t_v170)) : _g4_s74,
    _g4_s76 = (256u + sizeof(_g4_t_v171)) > _g4_s75 ? (256u + sizeof(_g4_t_v171)) : _g4_s75,
    _g4_s77 = (272u + sizeof(_g4_t_v172)) > _g4_s76 ? (272u + sizeof(_g4_t_v172)) : _g4_s76,
    _g4_s78 = (288u + sizeof(_g4_t_v173)) > _g4_s77 ? (288u + sizeof(_g4_t_v173)) : _g4_s77,
    _g4_s79 = (304u + sizeof(_g4_t_v174)) > _g4_s78 ? (304u + sizeof(_g4_t_v174)) : _g4_s78,
    _g4_s80 = (320u + sizeof(_g4_t_v175)) > _g4_s79 ? (320u + sizeof(_g4_t_v175)) : _g4_s79,
    _g4_s81 = (336u + sizeof(_g4_t_v176)) > _g4_s80 ? (336u + sizeof(_g4_t_v176)) : _g4_s80,
    _g4_s82 = (352u + sizeof(_g4_t_v177)) > _g4_s81 ? (352u + sizeof(_g4_t_v177)) : _g4_s81,
    _g4_s83 = (368u + sizeof(_g4_t_v178)) > _g4_s82 ? (368u + sizeof(_g4_t_v178)) : _g4_s82,
    _g4_s84 = (384u + sizeof(_g4_t_v179)) > _g4_s83 ? (384u + sizeof(_g4_t_v179)) : _g4_s83,
    _g4_s85 = (400u + sizeof(_g4_t_v180)) > _g4_s84 ? (400u + sizeof(_g4_t_v180)) : _g4_s84,
    _g4_s86 = (416u + sizeof(_g4_t_v181)) > _g4_s85 ? (416u + sizeof(_g4_t_v181)) : _g4_s85,
    _g4_s87 = (420u + sizeof(_g4_t_v182)) > _g4_s86 ? (420u + sizeof(_g4_t_v182)) : _g4_s86,
    _g4_s88 = (424u + sizeof(_g4_t_v183)) > _g4_s87 ? (424u + sizeof(_g4_t_v183)) : _g4_s87,
    _g4_s89 = (428u + sizeof(_g4_t_v184)) > _g4_s88 ? (428u + sizeof(_g4_t_v184)) : _g4_s88,
    _g4_s90 = (430u + sizeof(_g4_t_v185)) > _g4_s89 ? (430u + sizeof(_g4_t_v185)) : _g4_s89,
    _g4_s91 = (431u + sizeof(_g4_t_v186)) > _g4_s90 ? (431u + sizeof(_g4_t_v186)) : _g4_s90,
    _g4_s92 = (432u + sizeof(_g4_t_v187)) > _g4_s91 ? (432u + sizeof(_g4_t_v187)) : _g4_s91,
    _g4_s93 = (436u + sizeof(_g4_t_v188)) > _g4_s92 ? (436u + sizeof(_g4_t_v188)) : _g4_s92,
    _g4_s94 = (448u + sizeof(_g4_t_v189)) > _g4_s93 ? (448u + sizeof(_g4_t_v189)) : _g4_s93,
    _g4_s95 = (452u + sizeof(_g4_t_v190)) > _g4_s94 ? (452u + sizeof(_g4_t_v190)) : _g4_s94,
    _g4_s96 = (464u + sizeof(_g4_t_v191)) > _g4_s95 ? (464u + sizeof(_g4_t_v191)) : _g4_s95,
    _g4_s97 = (468u + sizeof(_g4_t_v192)) > _g4_s96 ? (468u + sizeof(_g4_t_v192)) : _g4_s96,
    _g4_s98 = (480u + sizeof(_g4_t_v193)) > _g4_s97 ? (480u + sizeof(_g4_t_v193)) : _g4_s97,
    _g4_s99 = (484u + sizeof(_g4_t_v194)) > _g4_s98 ? (484u + sizeof(_g4_t_v194)) : _g4_s98,
    _g4_s100 = (496u + sizeof(_g4_t_v195)) > _g4_s99 ? (496u + sizeof(_g4_t_v195)) : _g4_s99,
    _g4_s101 = (500u + sizeof(_g4_t_v196)) > _g4_s100 ? (500u + sizeof(_g4_t_v196)) : _g4_s100,
    _g4_s102 = (512u + sizeof(_g4_t_v197)) > _g4_s101 ? (512u + sizeof(_g4_t_v197)) : _g4_s101,
    _g4_s103 = (516u + sizeof(_g4_t_v198)) > _g4_s102 ? (516u + sizeof(_g4_t_v198)) : _g4_s102,
    _g4_s104 = (528u + sizeof(_g4_t_v199)) > _g4_s103 ? (528u + sizeof(_g4_t_v199)) : _g4_s103,
    _g4_s105 = (532u + sizeof(_g4_t_v200)) > _g4_s104 ? (532u + sizeof(_g4_t_v200)) : _g4_s104,
    _g4_s106 = (544u + sizeof(_g4_t_v201)) > _g4_s105 ? (544u + sizeof(_g4_t_v201)) : _g4_s105,
    _g4_s107 = (548u + sizeof(_g4_t_v202)) > _g4_s106 ? (548u + sizeof(_g4_t_v202)) : _g4_s106,
    _g4_s108 = (560u + sizeof(_g4_t_v203)) > _g4_s107 ? (560u + sizeof(_g4_t_v203)) : _g4_s107,
    _g4_s109 = (564u + sizeof(_g4_t_v204)) > _g4_s108 ? (564u + sizeof(_g4_t_v204)) : _g4_s108,
    _g4_s110 = (568u + sizeof(_g4_t_v205)) > _g4_s109 ? (568u + sizeof(_g4_t_v205)) : _g4_s109,
    _g4_s111 = (572u + sizeof(_g4_t_v206)) > _g4_s110 ? (572u + sizeof(_g4_t_v206)) : _g4_s110,
    _g4_s112 = (576u + sizeof(_g4_t_v207)) > _g4_s111 ? (576u + sizeof(_g4_t_v207)) : _g4_s111,
    _g4_s113 = (580u + sizeof(_g4_t_v208)) > _g4_s112 ? (580u + sizeof(_g4_t_v208)) : _g4_s112,
    _g4_s114 = (584u + sizeof(_g4_t_v209)) > _g4_s113 ? (584u + sizeof(_g4_t_v209)) : _g4_s113,
    _g4_s115 = (588u + sizeof(_g4_t_v210)) > _g4_s114 ? (588u + sizeof(_g4_t_v210)) : _g4_s114,
    _g4_s116 = (600u + sizeof(_g4_t_v211)) > _g4_s115 ? (600u + sizeof(_g4_t_v211)) : _g4_s115
  };
  alignas(16) uint8_t _g4_sf[_g4_s116];
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 4u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 4u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 4u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 4u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 4u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 4u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 4u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 4u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 4u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 32u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 32u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 32u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 32u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 32u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 32u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 32u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 32u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 32u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 32u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 32u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 32u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 32u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 36u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 36u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 36u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 36u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 36u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 36u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 36u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 40u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 44u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 44u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 44u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 52u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 64u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 64u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 64u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 68u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 72u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 76u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 76u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 76u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 76u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 76u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 76u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 76u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 76u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 81u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 84u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 88u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 92u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 96u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 97u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 98u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 100u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 101u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 102u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 103u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 104u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 105u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 106u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 107u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 108u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 109u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 110u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 112u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 128u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 144u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 160u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 176u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 192u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 208u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 224u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 240u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 256u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 272u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 288u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 304u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 320u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 336u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 352u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 368u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 384u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 400u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 416u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 420u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 424u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 428u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 430u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 431u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 432u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 436u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 448u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 452u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 464u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 468u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 480u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 484u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 496u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 500u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 512u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 516u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 528u);
  _g4_t_v200 &v200 = *reinterpret_cast<_g4_t_v200 *>(_g4_sf + 532u);
  _g4_t_v201 &v201 = *reinterpret_cast<_g4_t_v201 *>(_g4_sf + 544u);
  _g4_t_v202 &v202 = *reinterpret_cast<_g4_t_v202 *>(_g4_sf + 548u);
  _g4_t_v203 &v203 = *reinterpret_cast<_g4_t_v203 *>(_g4_sf + 560u);
  _g4_t_v204 &v204 = *reinterpret_cast<_g4_t_v204 *>(_g4_sf + 564u);
  _g4_t_v205 &v205 = *reinterpret_cast<_g4_t_v205 *>(_g4_sf + 568u);
  _g4_t_v206 &v206 = *reinterpret_cast<_g4_t_v206 *>(_g4_sf + 572u);
  _g4_t_v207 &v207 = *reinterpret_cast<_g4_t_v207 *>(_g4_sf + 576u);
  _g4_t_v208 &v208 = *reinterpret_cast<_g4_t_v208 *>(_g4_sf + 580u);
  _g4_t_v209 &v209 = *reinterpret_cast<_g4_t_v209 *>(_g4_sf + 584u);
  _g4_t_v210 &v210 = *reinterpret_cast<_g4_t_v210 *>(_g4_sf + 588u);
  _g4_t_v211 &v211 = *reinterpret_cast<_g4_t_v211 *>(_g4_sf + 600u);

  v211 = &self;
  v134 = self;
  v135 = a2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v162), "/api/index.php", (int)(uintptr_t)(&v144));
  v2 = opNew(0xF0u);
  *(uint32_t *)(v2 + 4) = 1;
  *(uint32_t *)(v2 + 8) = 1;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_2092528);
  *(uint32_t *)(v2 + 12) = 0;
  *(uint8_t *)(v2 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPRequest::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPRequest::Self>> *)v2);
  v4 = untyped_deleter + 4;
  v203 = chatv2::Utils::ChatLibHeaderOptions::PostHeaderOptions;
  v204 = (volatile int32_t *)(*(uint8_t **)unk_2116580);
  if ( (*(uint8_t **)unk_2116580) != 0 )
    __sync_add_and_fetch((volatile int32_t *)((*(uint8_t **)unk_2116580) + 4), 1);
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v105 = untyped_deleter;
    v119 = untyped_deleter + 4;
    chatv2::Connectivity::HTTPRequest::Construct(untyped_deleter + 4, v162, &v203);
    v4 = v119;
    untyped_deleter = v105;
  }
  v5 = v204;
  if ( v204 != nullptr && __sync_fetch_and_add(v204 + 1, 0xFFFFFFFF) == 1 )
  {
    v113 = untyped_deleter;
    v120 = v4;
    G4_VCALL<void>(v5, 8);
    untyped_deleter = v113;
    v4 = v120;
    if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 12);
      v4 = v120;
      untyped_deleter = v113;
    }
  }
  *untyped_deleter = 1;
  *(uint32_t *)v134 = (uint32_t)(uintptr_t)(v4);
  *((uint32_t *)v134 + 1) = v2;
  __sync_add_and_fetch((volatile int32_t *)(v2 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v2, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v2 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v2, 12);
  }
  v6 = *(uint32_t *)(v135 + 40);
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v205);
  v7 = v205;
  if ( v205 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v7 = v205;
  }
  v96 = v7;
  chatv2::Requests::ArionRequestFactory::GetChannel(&v187);
  v8 = v206;
  if ( v206 != nullptr && __sync_fetch_and_add(v206 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v8, 8, v96, v135 + 32, v6);
    if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v8, 12);
  }
  v163[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v187 != nullptr )
  {
    Language = (int)(uintptr_t)(chatv2::Core::ArionChannel::GetLanguage(v187));
    g4_std::string::assign_str(v163, Language);
  }
  User = (chatv2::Core::ArionUser::Self *)chatv2::Core::ArionExecutor::GetUser(*(chatv2::Core::ArionExecutor::Self **)(v135 + 52));
  Nickname = (int)(uintptr_t)(chatv2::Core::ArionUser::GetNickname(User));
  g4_std::string::construct_copy(v164, Nickname);
  v12 = (chatv2::Core::ArionUser::Self *)chatv2::Core::ArionExecutor::GetUser(*(chatv2::Core::ArionExecutor::Self **)(v135 + 52));
  Credential = (int)(uintptr_t)(chatv2::Core::ArionUser::GetCredential(v12));
  g4_std::string::construct_copy(v165, Credential);
  ClientID = (int)(uintptr_t)(chatv2::Core::ArionExecutor::GetClientID(*(chatv2::Core::ArionExecutor::Self **)(v135 + 52)));
  g4_std::string::construct_copy(v166, ClientID);
  v167[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v166, v167);
  v15 = opNew(0x1Cu);
  *(uint32_t *)(v15 + 4) = 1;
  *(uint32_t *)(v15 + 8) = 1;
  *(uint32_t *)(v15 + 12) = 0;
  *(uint32_t *)v15 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v15 + 16) = 0;
  v106 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v173), "client_id", (int)(uintptr_t)(&v144) + 2);
  v16 = v106 + 4;
  v17 = v106;
  if ( v106 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v106 + 4, v173, v167);
    v16 = v106 + 4;
    v17 = v106;
  }
  v136 = (void *)(v173[0] - 12);
  if ( (uint32_t *)(v173[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v173[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v97 = (char *)&v146 + 3;
    v114 = v17;
    v121 = v16;
    g4_std::string::Rep::M_destroy(v136);
    v16 = v121;
    v17 = v114;
  }
  *v17 = 1;
  v189 = v16;
  v190 = (volatile int32_t *)v15;
  __sync_add_and_fetch((volatile int32_t *)(v15 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v15 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v15, 8, v97);
    if ( __sync_fetch_and_add((volatile int32_t *)(v15 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v15, 12);
  }
  v18 = *(uint32_t *)v134;
  if ( *(uint32_t *)v134 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v18 = *(uint32_t *)v134;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v18, &v189);
  v19 = v190;
  if ( v190 != nullptr && __sync_fetch_and_add(v190 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v19, 8);
    if ( __sync_fetch_and_add(v19 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v19, 12);
  }
  if ( *(uint32_t *)(v163[0] - 12) != 0 )
  {
    boost::make_shared_4cbbee(v207);
    v71 = *(uint32_t *)v134;
    if ( *(uint32_t *)v134 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
        "px != 0");
      v71 = *(uint32_t *)v134;
    }
    chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v71, v207);
    v72 = v208;
    if ( v208 != nullptr && __sync_fetch_and_add(v208 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v72, 8);
      if ( __sync_fetch_and_add(v72 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v72, 12);
    }
  }
  v168[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v135 + 56, v168);
  v20 = opNew(0x1Cu);
  *(uint32_t *)(v20 + 4) = 1;
  *(uint32_t *)(v20 + 8) = 1;
  *(uint32_t *)(v20 + 12) = 0;
  *(uint32_t *)v20 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v20 + 16) = 0;
  v107 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v20);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v174), "reported_user_nickname", (int)(uintptr_t)(&v145));
  v21 = v107 + 4;
  v22 = v107;
  if ( v107 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v107 + 4, v174, v168);
    v21 = v107 + 4;
    v22 = v107;
  }
  v137 = (void *)(v174[0] - 12);
  if ( (uint32_t *)(v174[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v174[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v98 = &v147;
    v118 = v22;
    v125 = v21;
    g4_std::string::Rep::M_destroy(v137);
    v21 = v125;
    v22 = v118;
  }
  *v22 = 1;
  v191 = v21;
  v192 = (volatile int32_t *)v20;
  __sync_add_and_fetch((volatile int32_t *)(v20 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v20 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v20, 8, v98);
    if ( __sync_fetch_and_add((volatile int32_t *)(v20 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v20, 12);
  }
  v23 = *(uint32_t *)v134;
  if ( *(uint32_t *)v134 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v23 = *(uint32_t *)v134;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v23, &v191);
  v24 = v192;
  if ( v192 != nullptr && __sync_fetch_and_add(v192 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v24, 8);
    if ( __sync_fetch_and_add(v24 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v24, 12);
  }
  v169[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v135 + 60, v169);
  v25 = opNew(0x1Cu);
  *(uint32_t *)(v25 + 4) = 1;
  *(uint32_t *)(v25 + 8) = 1;
  *(uint32_t *)(v25 + 12) = 0;
  *(uint32_t *)v25 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v25 + 16) = 0;
  v108 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v25);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v175), "reported_user_credential", (int)(uintptr_t)(&v145) + 1);
  v26 = v108 + 4;
  v27 = v108;
  if ( v108 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v108 + 4, v175, v169);
    v26 = v108 + 4;
    v27 = v108;
  }
  v138 = (void *)(v175[0] - 12);
  if ( (uint32_t *)(v175[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v175[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v99 = (char *)&v147 + 1;
    v115 = v27;
    v122 = v26;
    g4_std::string::Rep::M_destroy(v138);
    v26 = v122;
    v27 = v115;
  }
  *v27 = 1;
  v193 = v26;
  v194 = (volatile int32_t *)v25;
  __sync_add_and_fetch((volatile int32_t *)(v25 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v25 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v25, 8, v99);
    if ( __sync_fetch_and_add((volatile int32_t *)(v25 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v25, 12);
  }
  v28 = *(uint32_t *)v134;
  if ( *(uint32_t *)v134 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v28 = *(uint32_t *)v134;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v28, &v193);
  v29 = v194;
  if ( v194 != nullptr && __sync_fetch_and_add(v194 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v29, 8);
    if ( __sync_fetch_and_add(v29 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v29, 12);
  }
  v170[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v164, v170);
  v30 = opNew(0x1Cu);
  *(uint32_t *)(v30 + 4) = 1;
  *(uint32_t *)(v30 + 8) = 1;
  *(uint32_t *)(v30 + 12) = 0;
  *(uint32_t *)v30 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v30 + 16) = 0;
  v109 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v30);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v176), "complainer_nickname", (int)(uintptr_t)(&v145) + 2);
  v31 = v109 + 4;
  v32 = v109;
  if ( v109 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v109 + 4, v176, v170);
    v31 = v109 + 4;
    v32 = v109;
  }
  v139 = (void *)(v176[0] - 12);
  if ( (uint32_t *)(v176[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v176[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v100 = (char *)&v147 + 2;
    v116 = v32;
    v123 = v31;
    g4_std::string::Rep::M_destroy(v139);
    v31 = v123;
    v32 = v116;
  }
  *v32 = 1;
  v195 = v31;
  v196 = (volatile int32_t *)v30;
  __sync_add_and_fetch((volatile int32_t *)(v30 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v30 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v30, 8, v100);
    if ( __sync_fetch_and_add((volatile int32_t *)(v30 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v30, 12);
  }
  v33 = *(uint32_t *)v134;
  if ( *(uint32_t *)v134 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v33 = *(uint32_t *)v134;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v33, &v195);
  v34 = v196;
  if ( v196 != nullptr && __sync_fetch_and_add(v196 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v34, 8);
    if ( __sync_fetch_and_add(v34 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v34, 12);
  }
  v171[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  glwebtools::Codec::EncodeUrlRFC3986(v165, v171);
  v35 = opNew(0x1Cu);
  *(uint32_t *)(v35 + 4) = 1;
  *(uint32_t *)(v35 + 8) = 1;
  *(uint32_t *)(v35 + 12) = 0;
  *(uint32_t *)v35 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v35 + 16) = 0;
  v110 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v35);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v177), "complainer_credential", (int)(uintptr_t)(&v145) + 3);
  v36 = v110 + 4;
  v37 = v110;
  if ( v110 != (uint8_t *)-4 )
  {
    chatv2::Connectivity::HTTPParameter::Construct(v110 + 4, v177, v171);
    v36 = v110 + 4;
    v37 = v110;
  }
  v140 = (void *)(v177[0] - 12);
  if ( (uint32_t *)(v177[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v177[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v101 = (char *)&v147 + 3;
    v117 = v37;
    v124 = v36;
    g4_std::string::Rep::M_destroy(v140);
    v36 = v124;
    v37 = v117;
  }
  *v37 = 1;
  v197 = v36;
  v198 = (volatile int32_t *)v35;
  __sync_add_and_fetch((volatile int32_t *)(v35 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v35 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v35, 8, v101);
    if ( __sync_fetch_and_add((volatile int32_t *)(v35 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v35, 12);
  }
  v38 = *(uint32_t *)v134;
  if ( *(uint32_t *)v134 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v38 = *(uint32_t *)v134;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v38, &v197);
  v39 = v198;
  if ( v198 != nullptr && __sync_fetch_and_add(v198 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v39, 8);
    if ( __sync_fetch_and_add(v39 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v39, 12);
  }
  v40 = opNew(0x1Cu);
  *(uint32_t *)(v40 + 4) = 1;
  *(uint32_t *)(v40 + 8) = 1;
  *(uint32_t *)(v40 + 12) = 0;
  *(uint32_t *)v40 = ((uint32_t)(uintptr_t)&off_2092588);
  *(uint8_t *)(v40 + 16) = 0;
  v141 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v40);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v179), "report_type", (int)(uintptr_t)(&v146) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v178), "3", (int)(uintptr_t)(&v146));
  if ( v141 != (uint8_t *)-4 )
    chatv2::Connectivity::HTTPParameter::Construct(v141 + 4, v179, v178);
  v41 = (void *)(v178[0] - 12);
  if ( (uint32_t *)(v178[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v178[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v102 = &v148;
    g4_std::string::Rep::M_destroy(v41);
  }
  v42 = (void *)(v179[0] - 12);
  if ( (uint32_t *)(v179[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v179[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v102 = &v149;
    g4_std::string::Rep::M_destroy(v42);
  }
  *v141 = 1;
  v199 = v141 + 4;
  v200 = (volatile int32_t *)v40;
  __sync_add_and_fetch((volatile int32_t *)(v40 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v40 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v40, 8, v102);
    if ( __sync_fetch_and_add((volatile int32_t *)(v40 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v40, 12);
  }
  v43 = *(uint32_t *)v134;
  if ( *(uint32_t *)v134 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Conne"
      "ctivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
      "px != 0");
    v43 = *(uint32_t *)v134;
  }
  chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v43, &v199);
  v44 = v200;
  if ( v200 != nullptr && __sync_fetch_and_add(v200 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v44, 8);
    if ( __sync_fetch_and_add(v44 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v44, 12);
  }
  v130 = (uint32_t *)(v135 + 64);
  if ( *(uint32_t *)(*(uint32_t *)(v135 + 64) - 12) != 0 )
  {
    v75 = opNew(0x1Cu);
    *(uint32_t *)(v75 + 4) = 1;
    *(uint32_t *)(v75 + 8) = 1;
    *(uint32_t *)(v75 + 12) = 0;
    *(uint32_t *)v75 = ((uint32_t)(uintptr_t)&off_2092588);
    *(uint8_t *)(v75 + 16) = 0;
    v143 = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *,boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Connectivity::HTTPParameter::Self *, boost::detail::sp_ms_deleter<chatv2::Connectivity::HTTPParameter::Self>> *)v75);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v180), "report_description", (int)(uintptr_t)(&v146) + 2);
    if ( v143 != (uint8_t *)-4 )
      chatv2::Connectivity::HTTPParameter::Construct(v143 + 4, v180, v130);
    v76 = (void *)(v180[0] - 12);
    if ( (uint32_t *)(v180[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v180[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v104 = &v150;
      g4_std::string::Rep::M_destroy(v76);
    }
    *v143 = 1;
    v201 = v143 + 4;
    v202 = (volatile int32_t *)v75;
    __sync_add_and_fetch((volatile int32_t *)(v75 + 4), 1);
    if ( __sync_fetch_and_add((volatile int32_t *)(v75 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v75, 8, v104);
      if ( __sync_fetch_and_add((volatile int32_t *)(v75 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v75, 12);
    }
    v77 = *(uint32_t *)v134;
    if ( *(uint32_t *)v134 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
        "px != 0");
      v77 = *(uint32_t *)v134;
    }
    chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v77, &v201);
    v78 = v202;
    if ( v202 != nullptr && __sync_fetch_and_add(v202 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v78, 8);
      if ( __sync_fetch_and_add(v78 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v78, 12);
    }
  }
  if ( *(uint32_t *)(*(uint32_t *)(v135 + 68) - 12) != 0 )
  {
    boost::make_shared_4cbbee(v209);
    v73 = *(uint32_t *)v134;
    if ( *(uint32_t *)v134 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Con"
        "nectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
        "px != 0");
      v73 = *(uint32_t *)v134;
    }
    chatv2::Connectivity::HTTPRequest::AddHTTPParameter(v73, v209);
    v74 = v210;
    if ( v210 != nullptr && __sync_fetch_and_add(v210 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v74, 8);
      if ( __sync_fetch_and_add(v74 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v74, 12);
    }
  }
  v45 = " Subscribe Arion Request to HTTPRequest, clientID: {0}, language: {1}, reported_user_nickname: {2}, reported_use"
        "r_credential: {3},complainer_nickname: {4}, complainer_credential: {5}, report_type: {6}, report_description: {7}\n";
  v181 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v181), 0x80u, 0);
  v183 = 0;
  v142 = nullptr;
  v46 = aSubscribeArion_1 /* " Subscribe Arion Request to HTTPRequest, clie..." */[0];
  while ( 1 )
  {
LABEL_73:
    v50 = v45 + 1;
    if ( v46 != 123 )
    {
      v47 = v183;
      v48 = v181;
      v49 = v183 + 1;
      if ( v183 + 1 > *(uint32_t *)(v181 - 12) )
      {
        v111 = v46;
        sub_1939D80((int)(uintptr_t)(&v181), v183 + 65, 0);
        v47 = v183;
        v48 = v181;
        v46 = v111;
        v49 = v183 + 1;
      }
      v183 = v49;
      if ( *(int *)(v48 - 4) >= 0 )
      {
        v112 = v46;
        sub_19397C0(&v181);
        v48 = v181;
        v46 = v112;
      }
      *(uint8_t *)(v48 + v47) = v46;
      v45 = v50;
      goto LABEL_72;
    }
    v51 = v45[1];
    if ( v51 != 123 )
      break;
    v79 = v183;
    v80 = v181;
    if ( v183 + 2 > *(uint32_t *)(v181 - 12) )
    {
      sub_1939D80((int)(uintptr_t)(&v181), v183 + 66, 0);
      v79 = v183;
      v80 = v181;
      ++v183;
      if ( *(int *)(v181 - 4) < 0 )
        goto LABEL_132;
LABEL_131:
      sub_19397C0(&v181);
      v80 = v181;
      goto LABEL_132;
    }
    ++v183;
    if ( *(int *)(v181 - 4) >= 0 )
      goto LABEL_131;
LABEL_132:
    *(uint8_t *)(v80 + v79) = 123;
    v81 = v183++;
    v82 = v181;
    if ( *(int *)(v181 - 4) >= 0 )
    {
      sub_19397C0(&v181);
      v82 = v181;
    }
    *(uint8_t *)(v82 + v81) = 123;
    v45 += 2;
LABEL_72:
    v46 = *v45;
    if ( *v45 == 0 )
      goto LABEL_84;
  }
  v184[0] = 0;
  v184[1] = 0;
  v185 = 20;
  v186 = 32;
  if ( v51 == 0 )
    goto LABEL_101;
  v52 = 1;
  v53 = 0;
  while ( 1 )
  {
    v51 = *v50;
    if ( (uint8_t)(*v50 - 48) > 9u )
      break;
    v54 = v52 * v53;
    ++v50;
    v52 *= 10;
    v53 = v54 + v51 - 48;
    if ( *v50 == 0 )
    {
      v55 = (char *)v53;
      v51 = 0;
      goto LABEL_80;
    }
  }
  v55 = (char *)v53;
  if ( v52 == 1 )
LABEL_101:
    v55 = v142++;
  if ( v51 == 58 )
  {
    v51 = v50[1];
    if ( v51 == 120 )
    {
      v45 = v50 + 3;
      v185 = v185 & 1 | 0x20;
      v51 = v50[2];
    }
    else
    {
      v45 = v50 + 2;
      if ( v51 == 88 )
      {
        v185 = 33;
        v45 = v50 + 3;
        v51 = v50[2];
      }
    }
  }
  else
  {
LABEL_80:
    v45 = v50 + 1;
  }
  if ( v51 == 125 )
  {
    switch ( (unsigned int)(uintptr_t)(v55) )
    {
      case 0u:
        v132 = *(uint32_t *)(v166[0] - 12);
        if ( v183 + v132 > *(uint32_t *)(v181 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v181), v183 + v132 + 64, 0);
          v132 = *(uint32_t *)(v166[0] - 12);
        }
        if ( v132 != 0 )
        {
          v88 = 0;
          v128 = v45;
          do
          {
            v89 = v183++;
            v90 = v181;
            if ( *(int *)(v181 - 4) >= 0 )
            {
              sub_19397C0(&v181);
              v90 = v181;
            }
            v91 = *(uint8_t *)(v166[0] + v88++);
            *(uint8_t *)(v90 + v89) = v91;
          }
          while ( v88 != v132 );
          v45 = v128;
        }
        goto LABEL_72;
      case 1u:
        sub_126A0F0(v163);
        goto LABEL_72;
      case 2u:
        sub_126A0F0(v135 + 56);
        goto LABEL_72;
      case 3u:
        sub_126A0F0(v135 + 60);
        goto LABEL_72;
      case 4u:
        sub_126A0F0(v164);
        goto LABEL_72;
      case 5u:
        v133 = *(uint32_t *)(v165[0] - 12);
        if ( v183 + v133 > *(uint32_t *)(v181 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v181), v183 + v133 + 64, 0);
          v133 = *(uint32_t *)(v165[0] - 12);
        }
        if ( v133 != 0 )
        {
          v92 = 0;
          v129 = v45;
          do
          {
            v93 = v183++;
            v94 = v181;
            if ( *(int *)(v181 - 4) >= 0 )
            {
              sub_19397C0(&v181);
              v94 = v181;
            }
            v95 = *(uint8_t *)(v165[0] + v92++);
            *(uint8_t *)(v94 + v93) = v95;
          }
          while ( v92 != v133 );
          v45 = v129;
        }
        goto LABEL_72;
      case 6u:
        jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315(
          &v181,
          &v183,
          v184,
          *(uint32_t *)(v135 + 72));
        goto LABEL_72;
      case 7u:
        v131 = *(uint32_t *)(*v130 - 12);
        if ( v183 + v131 > *(uint32_t *)(v181 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v181), v183 + v131 + 64, 0);
          v131 = *(uint32_t *)(*(uint32_t *)(v135 + 64) - 12);
        }
        if ( v131 != 0 )
        {
          v83 = 0;
          v127 = v45;
          v84 = (uint32_t *)(v135 + 64);
          do
          {
            v85 = v183++;
            v86 = v181;
            if ( *(int *)(v181 - 4) >= 0 )
            {
              v126 = v84;
              sub_19397C0(&v181);
              v86 = v181;
              v84 = v126;
            }
            v87 = *(uint8_t *)(*v84 + v83++);
            *(uint8_t *)(v86 + v85) = v87;
          }
          while ( v83 != v131 );
          v45 = v127;
        }
        goto LABEL_72;
      default:
        sub_1939D80((int)(uintptr_t)(&v181), v183, 0);
        v46 = *v45;
        if ( *v45 != 0 )
          goto LABEL_73;
        break;
    }
  }
  else
  {
    sub_1939D80((int)(uintptr_t)(&v181), v183, 0);
  }
LABEL_84:
  sub_1939D80((int)(uintptr_t)(&v181), v183, 0);
  g4_std::string::construct_copy(v172, &v181);
  v56 = (void *)(v181 - 12);
  if ( (uint32_t *)(v181 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v181 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v56);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v182), "ChatLib", (int)(uintptr_t)(&v144) + 1);
  chatv2::Utils::Log(
    3,
    0,
    &v182,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Report/ReportUserRequest.cpp",
    130,
    v172);
  v57 = (void *)(v182 - 12);
  if ( (uint32_t *)(v182 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v182 - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v151;
    g4_std::string::Rep::M_destroy(v57);
  }
  v58 = (void *)(v172[0] - 12);
  if ( (uint32_t *)(v172[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v172[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v152;
    g4_std::string::Rep::M_destroy(v58);
  }
  v59 = (void *)(v171[0] - 12);
  if ( (uint32_t *)(v171[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v171[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v153;
    g4_std::string::Rep::M_destroy(v59);
  }
  v60 = (void *)(v170[0] - 12);
  if ( (uint32_t *)(v170[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v170[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v154;
    g4_std::string::Rep::M_destroy(v60);
  }
  v61 = (void *)(v169[0] - 12);
  if ( (uint32_t *)(v169[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v169[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v155;
    g4_std::string::Rep::M_destroy(v61);
  }
  v62 = (void *)(v168[0] - 12);
  if ( (uint32_t *)(v168[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v168[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v156;
    g4_std::string::Rep::M_destroy(v62);
  }
  v63 = (void *)(v167[0] - 12);
  if ( (uint32_t *)(v167[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v167[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v157;
    g4_std::string::Rep::M_destroy(v63);
  }
  v64 = (void *)(v166[0] - 12);
  if ( (uint32_t *)(v166[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v166[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v158;
    g4_std::string::Rep::M_destroy(v64);
  }
  v65 = (void *)(v165[0] - 12);
  if ( (uint32_t *)(v165[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v165[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v159;
    g4_std::string::Rep::M_destroy(v65);
  }
  v66 = (void *)(v164[0] - 12);
  if ( (uint32_t *)(v164[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v164[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v160;
    g4_std::string::Rep::M_destroy(v66);
  }
  v67 = (void *)(v163[0] - 12);
  if ( (uint32_t *)(v163[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v163[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v103 = &v161;
    g4_std::string::Rep::M_destroy(v67);
  }
  v68 = v188;
  if ( v188 != nullptr && __sync_fetch_and_add(v188 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v68, 8, v103);
    if ( __sync_fetch_and_add(v68 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v68, 12);
  }
  v69 = (void *)(v162[0] - 12);
  if ( (uint32_t *)(v162[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v162[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v69);
  }
  return v134;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ReportUserRequest::CreateChatHistory  (binary VA: 0x126cbc0)
// Original: chatv2::Requests::ReportUserRequest::CreateChatHistory
// ----------------------------------------------------------------------------
void chatv2::Requests::ReportUserRequest::CreateChatHistory(int a1, int a2)
{
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v2;
  int v3;
  int v4;
  uint32_t *v5;
  uint32_t *v6;
  unsigned int v7;
  int v8;
  unsigned int v9;
  int v10;
  chatv2::Responses::ClientResponse::Self **v11;
  bool v12;
  char *v13;
  unsigned int v14;
  char *v15;
  char *ChannelName;
  char *MessageStr;
  char *User;
  char *Nickname;
  char *v20;
  chatv2::Core::ArionUser::Self *Credential;
  char *Time;
  char *MessageID;
  unsigned int v24;
  int v25;
  unsigned int v26;
  unsigned int v27;
  unsigned int *v28;
  void *v29;
  size_t v30;
  uint32_t *v31;
  int v32;
  int v33;
  uint32_t *v34;
  uint32_t *v35;
  int v36;
  unsigned int v37;
  int v38;
  char *v39;
  char *v40;
  int v41;
  size_t v42;
  char *v43;
  char *v44;
  char *v45;
  size_t v46;
  void *v47;
  uint32_t *v48;
  uint32_t *v49;
  rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *v50;
  uint32_t *v51;
  uint32_t *v52;
  typedef unsigned int _g4_t_v53;
  typedef unsigned int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v56;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v57;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v58;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v59;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v60;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v61;
  typedef char *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef unsigned int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef char *_g4_t_v66;
  typedef char *_g4_t_v67;
  typedef char *_g4_t_v68;
  typedef unsigned int _g4_t_v69;
  typedef unsigned int _g4_t_v70;
  typedef size_t _g4_t_v71;
  typedef unsigned int _g4_t_v72;
  typedef unsigned int _g4_t_v73;
  typedef unsigned int _g4_t_v74;
  typedef unsigned int _g4_t_v75;
  typedef char *_g4_t_v76;
  typedef unsigned int _g4_t_v77;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v78;
  typedef unsigned int *_g4_t_v79;
  typedef unsigned int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef void *_g4_t_v85;
  typedef void *_g4_t_v86;
  typedef char *_g4_t_v87;
  typedef char *_g4_t_v88;
  typedef char *_g4_t_v89;
  typedef size_t _g4_t_v90;
  typedef uint32_t _g4_t_v91[2];
  typedef uint32_t **_g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef char *_g4_t_v97;
  typedef unsigned int _g4_t_v98;
  typedef unsigned int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v101;
  typedef rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef int _g4_t_v106;
  typedef int _g4_t_v107;
  typedef int _g4_t_v108;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v53)) > _g4_s0 ? (0u + sizeof(_g4_t_v53)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v54)) > _g4_s1 ? (16u + sizeof(_g4_t_v54)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v55)) > _g4_s2 ? (16u + sizeof(_g4_t_v55)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v56)) > _g4_s3 ? (16u + sizeof(_g4_t_v56)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v57)) > _g4_s4 ? (16u + sizeof(_g4_t_v57)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v58)) > _g4_s5 ? (16u + sizeof(_g4_t_v58)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v59)) > _g4_s6 ? (16u + sizeof(_g4_t_v59)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v60)) > _g4_s7 ? (16u + sizeof(_g4_t_v60)) : _g4_s7,
    _g4_s9 = (16u + sizeof(_g4_t_v61)) > _g4_s8 ? (16u + sizeof(_g4_t_v61)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v62)) > _g4_s9 ? (16u + sizeof(_g4_t_v62)) : _g4_s9,
    _g4_s11 = (16u + sizeof(_g4_t_v63)) > _g4_s10 ? (16u + sizeof(_g4_t_v63)) : _g4_s10,
    _g4_s12 = (16u + sizeof(_g4_t_v64)) > _g4_s11 ? (16u + sizeof(_g4_t_v64)) : _g4_s11,
    _g4_s13 = (16u + sizeof(_g4_t_v65)) > _g4_s12 ? (16u + sizeof(_g4_t_v65)) : _g4_s12,
    _g4_s14 = (16u + sizeof(_g4_t_v66)) > _g4_s13 ? (16u + sizeof(_g4_t_v66)) : _g4_s13,
    _g4_s15 = (16u + sizeof(_g4_t_v67)) > _g4_s14 ? (16u + sizeof(_g4_t_v67)) : _g4_s14,
    _g4_s16 = (16u + sizeof(_g4_t_v68)) > _g4_s15 ? (16u + sizeof(_g4_t_v68)) : _g4_s15,
    _g4_s17 = (24u + sizeof(_g4_t_v69)) > _g4_s16 ? (24u + sizeof(_g4_t_v69)) : _g4_s16,
    _g4_s18 = (28u + sizeof(_g4_t_v70)) > _g4_s17 ? (28u + sizeof(_g4_t_v70)) : _g4_s17,
    _g4_s19 = (36u + sizeof(_g4_t_v71)) > _g4_s18 ? (36u + sizeof(_g4_t_v71)) : _g4_s18,
    _g4_s20 = (40u + sizeof(_g4_t_v72)) > _g4_s19 ? (40u + sizeof(_g4_t_v72)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v73)) > _g4_s20 ? (40u + sizeof(_g4_t_v73)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v74)) > _g4_s21 ? (48u + sizeof(_g4_t_v74)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v75)) > _g4_s22 ? (48u + sizeof(_g4_t_v75)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v76)) > _g4_s23 ? (48u + sizeof(_g4_t_v76)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v77)) > _g4_s24 ? (48u + sizeof(_g4_t_v77)) : _g4_s24,
    _g4_s26 = (52u + sizeof(_g4_t_v78)) > _g4_s25 ? (52u + sizeof(_g4_t_v78)) : _g4_s25,
    _g4_s27 = (56u + sizeof(_g4_t_v79)) > _g4_s26 ? (56u + sizeof(_g4_t_v79)) : _g4_s26,
    _g4_s28 = (56u + sizeof(_g4_t_v80)) > _g4_s27 ? (56u + sizeof(_g4_t_v80)) : _g4_s27,
    _g4_s29 = (72u + sizeof(_g4_t_v81)) > _g4_s28 ? (72u + sizeof(_g4_t_v81)) : _g4_s28,
    _g4_s30 = (76u + sizeof(_g4_t_v82)) > _g4_s29 ? (76u + sizeof(_g4_t_v82)) : _g4_s29,
    _g4_s31 = (80u + sizeof(_g4_t_v83)) > _g4_s30 ? (80u + sizeof(_g4_t_v83)) : _g4_s30,
    _g4_s32 = (84u + sizeof(_g4_t_v84)) > _g4_s31 ? (84u + sizeof(_g4_t_v84)) : _g4_s31,
    _g4_s33 = (88u + sizeof(_g4_t_v85)) > _g4_s32 ? (88u + sizeof(_g4_t_v85)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v86)) > _g4_s33 ? (92u + sizeof(_g4_t_v86)) : _g4_s33,
    _g4_s35 = (96u + sizeof(_g4_t_v87)) > _g4_s34 ? (96u + sizeof(_g4_t_v87)) : _g4_s34,
    _g4_s36 = (100u + sizeof(_g4_t_v88)) > _g4_s35 ? (100u + sizeof(_g4_t_v88)) : _g4_s35,
    _g4_s37 = (104u + sizeof(_g4_t_v89)) > _g4_s36 ? (104u + sizeof(_g4_t_v89)) : _g4_s36,
    _g4_s38 = (108u + sizeof(_g4_t_v90)) > _g4_s37 ? (108u + sizeof(_g4_t_v90)) : _g4_s37,
    _g4_s39 = (112u + sizeof(_g4_t_v91)) > _g4_s38 ? (112u + sizeof(_g4_t_v91)) : _g4_s38,
    _g4_s40 = (120u + sizeof(_g4_t_v92)) > _g4_s39 ? (120u + sizeof(_g4_t_v92)) : _g4_s39,
    _g4_s41 = (124u + sizeof(_g4_t_v93)) > _g4_s40 ? (124u + sizeof(_g4_t_v93)) : _g4_s40,
    _g4_s42 = (128u + sizeof(_g4_t_v94)) > _g4_s41 ? (128u + sizeof(_g4_t_v94)) : _g4_s41,
    _g4_s43 = (132u + sizeof(_g4_t_v95)) > _g4_s42 ? (132u + sizeof(_g4_t_v95)) : _g4_s42,
    _g4_s44 = (136u + sizeof(_g4_t_v96)) > _g4_s43 ? (136u + sizeof(_g4_t_v96)) : _g4_s43,
    _g4_s45 = (140u + sizeof(_g4_t_v97)) > _g4_s44 ? (140u + sizeof(_g4_t_v97)) : _g4_s44,
    _g4_s46 = (144u + sizeof(_g4_t_v98)) > _g4_s45 ? (144u + sizeof(_g4_t_v98)) : _g4_s45,
    _g4_s47 = (148u + sizeof(_g4_t_v99)) > _g4_s46 ? (148u + sizeof(_g4_t_v99)) : _g4_s46,
    _g4_s48 = (152u + sizeof(_g4_t_v100)) > _g4_s47 ? (152u + sizeof(_g4_t_v100)) : _g4_s47,
    _g4_s49 = (156u + sizeof(_g4_t_v101)) > _g4_s48 ? (156u + sizeof(_g4_t_v101)) : _g4_s48,
    _g4_s50 = (160u + sizeof(_g4_t_v102)) > _g4_s49 ? (160u + sizeof(_g4_t_v102)) : _g4_s49,
    _g4_s51 = (164u + sizeof(_g4_t_v103)) > _g4_s50 ? (164u + sizeof(_g4_t_v103)) : _g4_s50,
    _g4_s52 = (168u + sizeof(_g4_t_v104)) > _g4_s51 ? (168u + sizeof(_g4_t_v104)) : _g4_s51,
    _g4_s53 = (172u + sizeof(_g4_t_v105)) > _g4_s52 ? (172u + sizeof(_g4_t_v105)) : _g4_s52,
    _g4_s54 = (176u + sizeof(_g4_t_v106)) > _g4_s53 ? (176u + sizeof(_g4_t_v106)) : _g4_s53,
    _g4_s55 = (180u + sizeof(_g4_t_v107)) > _g4_s54 ? (180u + sizeof(_g4_t_v107)) : _g4_s54,
    _g4_s56 = (184u + sizeof(_g4_t_v108)) > _g4_s55 ? (184u + sizeof(_g4_t_v108)) : _g4_s55
  };
  alignas(16) uint8_t _g4_sf[_g4_s56];
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 16u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 16u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 16u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 16u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 16u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 16u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 16u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 16u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 24u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 28u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 36u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 40u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 40u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 48u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 48u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 48u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 52u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 56u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 56u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 72u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 76u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 80u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 84u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 88u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 92u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 96u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 100u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 104u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 108u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 112u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 120u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 124u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 128u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 132u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 136u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 140u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 144u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 148u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 152u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 156u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 160u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 164u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 168u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 172u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 176u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 180u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 184u);

  v100 = 0;
  v101 = nullptr;
  v102 = nullptr;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v106 = 1024;
  v2 = (rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator> *)opNew(0x14u);
  *(uint32_t *)v2 = 0;
  *((uint32_t *)v2 + 1) = 2048;
  *((uint32_t *)v2 + 2) = 0;
  *((uint32_t *)v2 + 3) = 0;
  *((uint32_t *)v2 + 4) = 0;
  v3 = opNew(1u);
  v4 = *((uint32_t *)v2 + 1);
  *((uint32_t *)v2 + 3) = v3;
  *((uint32_t *)v2 + 4) = v3;
  v5 = (uint32_t *)(malloc(v4 + 12));
  *v5 = v4;
  v5[1] = 0;
  v5[2] = *(uint32_t *)v2;
  *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v5);
  v101 = v2;
  v102 = v2;
  v6 = *(uint32_t **)v2;
  v7 = (v106 + 3) & 0xFFFFFFFC;
  v8 = *(uint32_t *)(*(uint32_t *)v2 + 4);
  if ( v7 + v8 > **(uint32_t **)v2 )
  {
    v9 = *((uint32_t *)v2 + 1);
    if ( v7 >= v9 )
      v9 = (v106 + 3) & 0xFFFFFFFC;
    v54 = v9;
    v6 = (uint32_t *)(malloc(v9 + 12));
    v6[1] = 0;
    *v6 = v54;
    v6[2] = *(uint32_t *)v2;
    *(uint32_t *)v2 = (uint32_t)(uintptr_t)(v6);
    v8 = v6[1];
  }
  v10 = (int)(uintptr_t)(v6) + v8 + 12;
  if ( (v10 & 3) != 0 )
  {
    v55 = (int)(uintptr_t)(v6) + v8 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v6 = *(uint32_t **)v2;
    v10 = v55;
    v8 = *(uint32_t *)(*(uint32_t *)v2 + 4);
  }
  v6[1] = v8 + v7;
  v103 = v10;
  v104 = v10;
  v105 = v106 + v10;
  v107 = 0;
  v11 = *(chatv2::Responses::ClientResponse::Self ***)a2;
  v12 = *(uint32_t *)a2 == *(uint32_t *)(a2 + 4);
  v108 = 0;
  v100 = 4;
  v97 = nullptr;
  v98 = 0;
  v99 = 0;
  if ( !v12 )
  {
    while ( 1 )
    {
      v84 = 3;
      v81 = 0;
      v82 = 0;
      v83 = 0;
      v56 = v101;
      ChannelName = chatv2::Responses::ClientResponse::GetChannelName(*v11);
      sub_126AB10(&v81, "channel", *(uint8_t **)ChannelName, v56);
      v57 = v101;
      MessageStr = chatv2::Responses::ClientResponse::GetMessageStr(*v11);
      sub_126AB10(&v81, "message", *(uint8_t **)MessageStr, v57);
      v58 = v101;
      User = chatv2::Responses::ClientResponse::GetUser(*v11);
      Nickname = chatv2::Core::ArionUser::GetNickname((chatv2::Core::ArionUser::Self *)User);
      sub_126AB10(&v81, "nickname", *(uint8_t **)Nickname, v58);
      v59 = v101;
      v20 = chatv2::Responses::ClientResponse::GetUser(*v11);
      Credential = chatv2::Core::ArionUser::GetCredential((chatv2::Core::ArionUser::Self *)v20);
      sub_126AB10(&v81, "credential", *(uint8_t **)Credential, v59);
      v60 = v101;
      Time = chatv2::Responses::ClientResponse::GetTime(*v11);
      sub_126AB10(&v81, "timestamp", *(uint8_t **)Time, v60);
      v61 = v101;
      MessageID = chatv2::Responses::ClientResponse::GetMessageID(*v11);
      sub_126AB10(&v81, "messageId", *(uint8_t **)MessageID, v61);
      v78 = v101;
      if ( v100 != 4 )
        __assert2(
          "../../../../../lib/rapidjson/document.h",
          647,
          "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::PushBack(rapidjson"
          "::GenericValue<Encoding, Allocator>&, Allocator&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::M"
          "emoryPoolAllocator<>, rapidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >]",
          "IsArray ()");
      v14 = v98;
      v24 = v99;
      v13 = v97;
      if ( v98 >= v99 )
      {
        v25 = 2 * v99;
        if ( v99 == 0 )
          v25 = 16;
        v53 = v25;
        if ( v100 != 4 )
        {
          __assert2(
            "../../../../../lib/rapidjson/document.h",
            622,
            "rapidjson::GenericValue<Encoding, Allocator>& rapidjson::GenericValue<Encoding, Allocator>::Reserve(rapidjso"
            "n::SizeType, Allocator&) [with Encoding = rapidjson::UTF8<>, Allocator = rapidjson::MemoryPoolAllocator<>, r"
            "apidjson::GenericValue<Encoding, Allocator> = rapidjson::GenericValue<rapidjson::UTF8<> >, rapidjson::SizeTy"
            "pe = unsigned int]",
            "IsArray ()");
          v24 = v99;
        }
        if ( v53 > v24 )
          break;
        v13 = v97;
        v14 = v98;
      }
LABEL_10:
      v98 = v14 + 1;
      v11 += 2;
      v15 = &v13[16 * v14];
      *(uint32_t *)v15 = v81;
      *((uint32_t *)v15 + 1) = v82;
      *((uint32_t *)v15 + 2) = v83;
      *((uint32_t *)v15 + 3) = v84;
      v84 = 0;
      if ( *(chatv2::Responses::ClientResponse::Self ***)(a2 + 4) == v11 )
        goto LABEL_33;
    }
    v74 = 16 * v53;
    v13 = v97;
    if ( v97 != nullptr )
    {
      v71 = 16 * v24;
      if ( v74 > 16 * v24 )
      {
        v79 = *(unsigned int **)v78;
        v26 = *(uint32_t *)(*(uint32_t *)v78 + 4);
        v70 = v26 + 12;
        if ( v97 == (char *)(*(uint32_t *)v78 + v26 + 12 - v71) )
        {
          v72 = v74 + 3;
          v77 = v26 + v74 - v71;
          v69 = *v79;
          if ( v77 <= *v79 )
          {
            v79[1] = v77;
            if ( ((uint8_t)(uintptr_t)(v13) & 3) != 0 )
            {
              v67 = v13;
              __assert2(
                "../../../../../lib/rapidjson/rapidjson.h",
                294,
                "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator "
                "= rapidjson::CrtAllocator, size_t = unsigned int]",
                "((uintptr_t) originalPtr & 3) == 0");
              v13 = v67;
            }
            goto LABEL_32;
          }
        }
        else
        {
          v69 = *v79;
          v72 = v74 + 3;
        }
        v73 = v72 & 0xFFFFFFFC;
        if ( v26 + v73 > v69 )
        {
          v27 = *((uint32_t *)v78 + 1);
          if ( v73 >= v27 )
            v27 = v73;
          v62 = v97;
          v75 = v27;
          v28 = (unsigned int *)malloc(v27 + 12);
          v28[1] = 0;
          *v28 = v75;
          v79 = v28;
          v28[2] = *(uint32_t *)v78;
          *(uint32_t *)v78 = (uint32_t)(uintptr_t)(v28);
          v26 = v28[1];
          v13 = v62;
          v70 = v26 + 12;
        }
        v76 = (char *)v79 + v70;
        if ( (((uint8_t)(uintptr_t)(v79) + (uint8_t)v70) & 3) != 0 )
        {
          v66 = v13;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            267,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllo"
            "cator, size_t = unsigned int]",
            "((uintptr_t) buffer & 3) == 0");
          v13 = v66;
          v79 = *(unsigned int **)v78;
          v26 = *(uint32_t *)(*(uint32_t *)v78 + 4);
        }
        v79[1] = v73 + v26;
        if ( v76 == nullptr )
        {
          v68 = v13;
          __assert2(
            "../../../../../lib/rapidjson/rapidjson.h",
            301,
            "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Realloc(void*, size_t, size_t) [with BaseAllocator = ra"
            "pidjson::CrtAllocator, size_t = unsigned int]",
            "newBuffer != 0");
          v13 = v68;
        }
        v13 = (char *)memcpy(v76, v13, v71);
      }
    }
    else
    {
      v13 = (char *)(void *)(uintptr_t)rapidjson_decompiled::MemoryPoolAllocator_Malloc(v78, v74);
    }
LABEL_32:
    v97 = v13;
    v99 = v53;
    v14 = v98;
    goto LABEL_10;
  }
LABEL_33:
  v85 = nullptr;
  v86 = nullptr;
  v87 = nullptr;
  v88 = nullptr;
  v89 = nullptr;
  v90 = 256;
  v29 = (void *)opNew(1u);
  v30 = v90;
  v85 = v29;
  v86 = v29;
  v87 = (char *)malloc(v90);
  v88 = v87;
  v89 = &v87[v30];
  v91[1] = 0;
  v91[0] = (uint32_t)(uintptr_t)(&v85);
  v92 = nullptr;
  v93 = 0;
  v94 = 0;
  v95 = 0;
  v96 = 256;
  v31 = (uint32_t *)opNew(0x14u);
  *v31 = 0;
  v31[1] = 2048;
  v31[2] = 0;
  v31[3] = 0;
  v31[4] = 0;
  v32 = opNew(1u);
  v33 = v31[1];
  v31[3] = v32;
  v31[4] = v32;
  v63 = v33;
  v34 = (uint32_t *)(malloc(v33 + 12));
  v34[1] = 0;
  *v34 = v63;
  v34[2] = *v31;
  *v31 = (uint32_t)(uintptr_t)(v34);
  v91[1] = (uint32_t)(uintptr_t)(v31);
  v92 = (uint32_t **)v31;
  v35 = (uint32_t *)*v31;
  v80 = (v96 + 3) & 0xFFFFFFFC;
  v36 = *(uint32_t *)(*v31 + 4);
  if ( v36 + v80 > *(uint32_t *)*v31 )
  {
    v37 = v31[1];
    if ( v80 >= v37 )
      v37 = (v96 + 3) & 0xFFFFFFFC;
    v64 = v37;
    v35 = (uint32_t *)(malloc(v37 + 12));
    v35[1] = 0;
    *v35 = v64;
    v35[2] = *v31;
    *v31 = (uint32_t)(uintptr_t)(v35);
    v36 = v35[1];
  }
  v38 = (int)(uintptr_t)(v35) + v36 + 12;
  if ( (v38 & 3) != 0 )
  {
    v65 = (int)(uintptr_t)(v35) + v36 + 12;
    __assert2(
      "../../../../../lib/rapidjson/rapidjson.h",
      267,
      "void* rapidjson::MemoryPoolAllocator<BaseAllocator>::Malloc(size_t) [with BaseAllocator = rapidjson::CrtAllocator,"
      " size_t = unsigned int]",
      "((uintptr_t) buffer & 3) == 0");
    v35 = (uint32_t *)*v31;
    v38 = v65;
    v36 = *(uint32_t *)(*v31 + 4);
  }
  v35[1] = v80 + v36;
  v93 = v38;
  v94 = v38;
  v95 = v96 + v38;
  rapidjson::GenericValue<rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>::Accept<rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>,rapidjson::CrtAllocator>,rapidjson::UTF8<char>,rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>>>(
    (rapidjson::GenericValue<rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)&v97,
    (rapidjson::Writer<rapidjson::GenericStringBuffer<rapidjson::UTF8<char>, rapidjson::CrtAllocator>, rapidjson::UTF8<char>, rapidjson::MemoryPoolAllocator<rapidjson::CrtAllocator>> *)v91);
  v39 = v88;
  v40 = v88 + 1;
  if ( v88 + 1 >= v89 )
  {
    v41 = v88 - v87;
    v42 = v88 - v87 + 1;
    if ( v42 < 2 * v90 )
      v42 = 2 * v90;
    v43 = (char *)realloc(v87, v42);
    v39 = &v43[v41];
    v87 = v43;
    v90 = v42;
    v89 = &v43[v42];
    v40 = v39 + 1;
  }
  v88 = v40;
  *v39 = 0;
  v44 = v87;
  v45 = v88;
  if ( v87 == v88 )
  {
    __assert2(
      "../../../../../lib/rapidjson/internal/stack.h",
      83,
      "T* rapidjson::internal::Stack<Allocator>::Pop(size_t) [with T = char, Allocator = rapidjson::CrtAllocator, size_t = unsigned int]",
      "GetSize () >= count * sizeof (T)");
    v45 = v88;
    v44 = v87;
  }
  v88 = v45 - 1;
  v46 = strlen(v44);
  g4_std_compat::string_assign(a1 + 68, v44, v46);
  v47 = v92;
  if ( v92 != nullptr )
  {
    v48 = *v92;
    if ( *v92 != nullptr && v48 != v92[2] )
    {
      while ( 1 )
      {
        v49 = (uint32_t *)v48[2];
        free(v48);
        *(uint32_t *)v47 = (uint32_t)(uintptr_t)(v49);
        if ( v49 == nullptr || v49 == *((uint32_t **)v47 + 2) )
          break;
        v48 = v49;
      }
    }
    opDelete(*((void **)v47 + 4));
    opDelete(v47);
  }
  free(v87);
  opDelete(v86);
  v50 = v102;
  if ( v102 != nullptr )
  {
    v51 = *(uint32_t **)v102;
    if ( *(uint32_t *)v102 != 0 && v51 != *((uint32_t **)v102 + 2) )
    {
      while ( 1 )
      {
        v52 = (uint32_t *)v51[2];
        free(v51);
        *(uint32_t *)v50 = (uint32_t)(uintptr_t)(v52);
        if ( v52 == nullptr || v52 == *((uint32_t **)v50 + 2) )
          break;
        v51 = v52;
      }
    }
    opDelete(*((void **)v50 + 4));
    opDelete(v50);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ChangeNicknameRequest::Destroy  (binary VA: 0x126fa90)
// Original: chatv2::Requests::ChangeNicknameRequest::~ChangeNicknameRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::ChangeNicknameRequest::Destroy(chatv2::Requests::ChangeNicknameRequest::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20929A8);
  v1 = *((uint32_t *)self + 6);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  chatv2::Requests::IRequest::Destroy((chatv2::Requests::IRequest::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ChangeNicknameRequest::Destroy_ea126fb00  (binary VA: 0x126fb00)
// Original: chatv2::Requests::ChangeNicknameRequest::~ChangeNicknameRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::ChangeNicknameRequest::Destroy_ea126fb00(chatv2::Requests::ChangeNicknameRequest::Self *self)
{
  chatv2::Requests::ChangeNicknameRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ChangeNicknameRequest::CheckFailure  (binary VA: 0x126fb40)
// Original: chatv2::Requests::ChangeNicknameRequest::CheckFailure
// ----------------------------------------------------------------------------
int chatv2::Requests::ChangeNicknameRequest::CheckFailure(chatv2::Requests::ChangeNicknameRequest::Self *self)
{
  char v1;
  int v2;
  void *v4;
  void *v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7[3];
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v7)) > _g4_s1 ? (4u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v8)) > _g4_s2 ? (16u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);

  v1 = chatv2::Requests::IRequest::CheckFailure((chatv2::Requests::IRequest::Self *)(self));
  v2 = 1;
  if ( v1 != 0 )
    return v2;
  v2 = 0;
  if ( *(uint32_t *)(*((uint32_t *)self + 6) - 12) <= 0x40u )
    return v2;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v7), "Change nickname failed, nickname too long\n", (int)(uintptr_t)(&v6) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8), "ChatLib", (int)(uintptr_t)(&v6));
  chatv2::Utils::Log(
    3,
    0,
    &v8,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/ChangeNicknameRequest.cpp",
    25,
    v7);
  v4 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v7[0] - 12);
  if ( (uint32_t *)(v7[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  *((uint32_t *)self + 4) = 3;
  return 1;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ChangeNicknameRequest::Execute  (binary VA: 0x126fc80)
// Original: chatv2::Requests::ChangeNicknameRequest::Execute
// ----------------------------------------------------------------------------
int chatv2::Requests::ChangeNicknameRequest::Execute(chatv2::Core::ArionExecutor::Self **self)
{
  size_t v1;
  int User;
  char v3;
  const char *v4;
  int v5;
  size_t v6;
  const char *v7;
  char v8;
  int v9;
  void *v10;
  void *v11;
  void *v12;
  int v13;
  uint8_t *v14;
  void *v15;
  int v16;
  int v17;
  void (*v18)(int, uint8_t **);
  volatile int32_t *v19;
  void *v20;
  int result;
  int v22;
  int v23;
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  size_t v28;
  char v29;
  int v30;
  int v31;
  typedef uint8_t *_g4_t_v32;
  typedef uint8_t *_g4_t_v33;
  typedef char _g4_t_v34;
  typedef char _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef size_t _g4_t_v37;
  typedef const char *_g4_t_v38;
  typedef const char *_g4_t_v39;
  typedef const char *_g4_t_v40;
  typedef const char *_g4_t_v41;
  typedef const char *_g4_t_v42;
  typedef const char *_g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef size_t _g4_t_v46;
  typedef uint8_t *_g4_t_untyped_deleter;
  typedef size_t _g4_t_v48;
  typedef int _g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint32_t _g4_t_v53[4];
  typedef int _g4_t_v54[4];
  typedef int _g4_t_v55[2];
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef uint8_t *_g4_t_v58;
  typedef volatile int32_t *_g4_t_v59;
  enum : size_t {
    _g4_s0 = 240u,
    _g4_s1 = (12u + sizeof(_g4_t_v32)) > _g4_s0 ? (12u + sizeof(_g4_t_v32)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v33)) > _g4_s1 ? (12u + sizeof(_g4_t_v33)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v34)) > _g4_s2 ? (44u + sizeof(_g4_t_v34)) : _g4_s2,
    _g4_s4 = (44u + sizeof(_g4_t_v35)) > _g4_s3 ? (44u + sizeof(_g4_t_v35)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v36)) > _g4_s4 ? (44u + sizeof(_g4_t_v36)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v37)) > _g4_s5 ? (48u + sizeof(_g4_t_v37)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v38)) > _g4_s6 ? (48u + sizeof(_g4_t_v38)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v39)) > _g4_s7 ? (48u + sizeof(_g4_t_v39)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v40)) > _g4_s8 ? (48u + sizeof(_g4_t_v40)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v41)) > _g4_s9 ? (48u + sizeof(_g4_t_v41)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v42)) > _g4_s10 ? (48u + sizeof(_g4_t_v42)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v43)) > _g4_s11 ? (52u + sizeof(_g4_t_v43)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v44)) > _g4_s12 ? (56u + sizeof(_g4_t_v44)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v45)) > _g4_s13 ? (60u + sizeof(_g4_t_v45)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v46)) > _g4_s14 ? (64u + sizeof(_g4_t_v46)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_untyped_deleter)) > _g4_s15 ? (68u + sizeof(_g4_t_untyped_deleter)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v48)) > _g4_s16 ? (68u + sizeof(_g4_t_v48)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v49)) > _g4_s17 ? (68u + sizeof(_g4_t_v49)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v50)) > _g4_s18 ? (68u + sizeof(_g4_t_v50)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v51)) > _g4_s19 ? (80u + sizeof(_g4_t_v51)) : _g4_s19,
    _g4_s21 = (85u + sizeof(_g4_t_v52)) > _g4_s20 ? (85u + sizeof(_g4_t_v52)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v53)) > _g4_s21 ? (88u + sizeof(_g4_t_v53)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v54)) > _g4_s22 ? (104u + sizeof(_g4_t_v54)) : _g4_s22,
    _g4_s24 = (120u + sizeof(_g4_t_v55)) > _g4_s23 ? (120u + sizeof(_g4_t_v55)) : _g4_s23,
    _g4_s25 = (128u + sizeof(_g4_t_v56)) > _g4_s24 ? (128u + sizeof(_g4_t_v56)) : _g4_s24,
    _g4_s26 = (132u + sizeof(_g4_t_v57)) > _g4_s25 ? (132u + sizeof(_g4_t_v57)) : _g4_s25,
    _g4_s27 = (136u + sizeof(_g4_t_v58)) > _g4_s26 ? (136u + sizeof(_g4_t_v58)) : _g4_s26,
    _g4_s28 = (140u + sizeof(_g4_t_v59)) > _g4_s27 ? (140u + sizeof(_g4_t_v59)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 12u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 44u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 44u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 48u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 48u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 48u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 48u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 48u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 52u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 56u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 60u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 64u);
  _g4_t_untyped_deleter &untyped_deleter = *reinterpret_cast<_g4_t_untyped_deleter *>(_g4_sf + 68u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 68u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 68u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 80u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 85u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 88u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 104u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 120u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 128u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 132u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 136u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 140u);

  v1 = 0;
  v45 = (uint32_t *)(self + 6);
  User = (int)(uintptr_t)(chatv2::Core::ArionExecutor::GetUser(*(self + 5)));
  chatv2::Core::ArionUser::SetNickname(User, self + 6);
  v57 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v57), 0x80u, 0);
  v3 = aNicknameChange /* " Nickname changed: {0}\n" */[0];
  v4 = " Nickname changed: {0}\n";
  v44 = 0;
  while ( 1 )
  {
    v7 = v4 + 1;
    if ( v3 != 123 )
    {
      v5 = v57;
      v6 = v1 + 1;
      if ( v1 + 1 > *(uint32_t *)(v57 - 12) )
      {
        v35 = v3;
        sub_1939D80((int)(uintptr_t)(&v57), v1 + 65, 0);
        v5 = v57;
        v6 = v1 + 1;
        v3 = v35;
      }
      if ( *(int *)(v5 - 4) >= 0 )
      {
        v37 = v6;
        v34 = v3;
        sub_19397C0(&v57);
        v5 = v57;
        v6 = v37;
        v3 = v34;
      }
      *(uint8_t *)(v5 + v1) = v3;
      v4 = v7;
      v1 = v6;
      goto LABEL_7;
    }
    v8 = v4[1];
    if ( v8 == 123 )
    {
      v30 = v57;
      if ( v1 + 2 > *(uint32_t *)(v57 - 12) )
      {
        v42 = v4;
        sub_1939D80((int)(uintptr_t)(&v57), v1 + 66, 0);
        v30 = v57;
        v4 = v42;
      }
      v50 = v1 + 1;
      if ( *(int *)(v30 - 4) >= 0 )
      {
        v39 = v4;
        sub_19397C0(&v57);
        v30 = v57;
        v4 = v39;
      }
      *(uint8_t *)(v30 + v1) = 123;
      v31 = v57;
      if ( *(int *)(v57 - 4) >= 0 )
      {
        v40 = v4;
        sub_19397C0(&v57);
        v31 = v57;
        v4 = v40;
      }
      v4 += 2;
      v1 += 2;
      *(uint8_t *)(v31 + v50) = 123;
      goto LABEL_7;
    }
    if ( v8 == 0 )
      goto LABEL_11;
    v48 = v1;
    v22 = 1;
    v23 = 0;
    while ( 1 )
    {
      v8 = *v7;
      if ( (uint8_t)(*v7 - 48) > 9u )
        break;
      v24 = v22 * v23;
      ++v7;
      v22 *= 10;
      v23 = v24 + v8 - 48;
      if ( *v7 == 0 )
      {
        v9 = v23;
        v8 = 0;
        v1 = v48;
        goto LABEL_13;
      }
    }
    v9 = v23;
    v1 = v48;
    if ( v22 == 1 )
LABEL_11:
      v9 = v44++;
    if ( v8 == 58 )
    {
      v8 = v7[1];
      if ( v8 == 120 || (v4 = v7 + 2, v8 == 88) )
      {
        v8 = v7[2];
        v4 = v7 + 3;
      }
    }
    else
    {
LABEL_13:
      v4 = v7 + 1;
    }
    if ( v8 != 125 )
      break;
    if ( v9 != 0 )
    {
      v38 = v4;
      sub_1939D80((int)(uintptr_t)(&v57), v1, 0);
      v4 = v38;
      v3 = *v38;
      if ( *v38 == 0 )
        goto LABEL_17;
    }
    else
    {
      v49 = *(uint32_t *)(*v45 - 12);
      if ( v1 + v49 > *(uint32_t *)(v57 - 12) )
      {
        v41 = v4;
        sub_1939D80((int)(uintptr_t)(&v57), v1 + v49 + 64, 0);
        v4 = v41;
        v49 = *((uint32_t *)*(self + 6) - 3);
      }
      if ( v49 != 0 )
      {
        v25 = 0;
        v26 = (uint32_t *)(self + 6);
        v43 = v4;
        v46 = v1;
        do
        {
          v27 = v57;
          v28 = v25 + v46;
          if ( *(int *)(v57 - 4) >= 0 )
          {
            v36 = v26;
            sub_19397C0(&v57);
            v27 = v57;
            v26 = v36;
          }
          v29 = *(uint8_t *)(*v26 + v25++);
          *(uint8_t *)(v27 + v28) = v29;
        }
        while ( v25 != v49 );
        v4 = v43;
        v1 = v25 + v46;
      }
LABEL_7:
      v3 = *v4;
      if ( *v4 == 0 )
        goto LABEL_17;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v57), v1, 0);
LABEL_17:
  sub_1939D80((int)(uintptr_t)(&v57), v1, 0);
  g4_std::string::construct_copy(v53, &v57);
  v10 = (void *)(v57 - 12);
  if ( (uint32_t *)(v57 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v56), "ChatLib", (int)(uintptr_t)(&v51));
  chatv2::Utils::Log(
    3,
    0,
    &v56,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/ChangeNicknameRequest.cpp",
    51,
    v53);
  v11 = (void *)(v56 - 12);
  if ( (uint32_t *)(v56 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  v12 = (void *)(v53[0] - 12);
  if ( (uint32_t *)(v53[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = opNew(0x38u);
  *(uint32_t *)(v13 + 4) = 1;
  *(uint32_t *)(v13 + 8) = 1;
  *(uint32_t *)v13 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v13 + 12) = 0;
  *(uint8_t *)(v13 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v13);
  v14 = untyped_deleter + 4;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v55), (char *)&unk_1B15112, (int)(uintptr_t)(&v52));
  if ( untyped_deleter != (uint8_t *)-4 )
    chatv2::Responses::ClientResponse::ClientResponse(v14, 6, v55);
  v15 = (void *)(v55[0] - 12);
  if ( (uint32_t *)(v55[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v55[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v32 = (uint8_t *)((char *)&v52 + 1);
    g4_std::string::Rep::M_destroy(v15);
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v13 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v13, 8, v32);
    if ( __sync_fetch_and_add((volatile int32_t *)(v13 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v13, 12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v54), "nickname changed in: ", (int)(uintptr_t)(&v51) + 1);
  g4_std::string::append_str(v54, v45);
  if ( untyped_deleter == (uint8_t *)-4 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  chatv2::Responses::ClientResponse::SetMessage(v14, v54);
  if ( *((uint32_t *)*(self + 5) + 9) != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1);
    v16 = (int)(uintptr_t)(*(self + 5));
    v17 = *(uint32_t *)(v16 + 36);
    if ( v17 == 0 )
      sub_1270D06();
    v58 = untyped_deleter + 4;
    v18 = *(void (**)(int, uint8_t **))((v17 & 0xFFFFFFFE) + 4);
    v59 = (volatile int32_t *)v13;
    __sync_add_and_fetch((volatile int32_t *)(v13 + 4), 1);
    v18(v16 + 40, &v58);
    v19 = v59;
    if ( v59 != nullptr && __sync_fetch_and_add(v59 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v19, 8);
      if ( __sync_fetch_and_add(v19 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v19, 12);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v13 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v13, 8);
      if ( __sync_fetch_and_add((volatile int32_t *)(v13 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v13, 12);
    }
  }
  v20 = (void *)(v54[0] - 12);
  if ( (uint32_t *)(v54[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v54[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v33 = (uint8_t *)((char *)&v52 + 2);
    g4_std::string::Rep::M_destroy(v20);
  }
  result = __sync_fetch_and_add((volatile int32_t *)(v13 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = G4_VCALL<int>(v13, 8, v33);
    if ( __sync_fetch_and_add((volatile int32_t *)(v13 + 8), 0xFFFFFFFF) == 1 )
      return G4_VCALL<int>(v13, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ChangeNicknameRequest::SendFailureMessage  (binary VA: 0x1270410)
// Original: chatv2::Requests::ChangeNicknameRequest::SendFailureMessage
// ----------------------------------------------------------------------------
void chatv2::Requests::ChangeNicknameRequest::SendFailureMessage(chatv2::Requests::ChangeNicknameRequest::Self *self)
{
  int v1;
  char *untyped_deleter;
  void *v3;
  uint32_t *v4;
  uint32_t *v5;
  void *v6;
  void *v7;
  void *v8;
  int v9;
  int v10;
  void (*v11)(int, char **);
  volatile int32_t *v12;
  uint32_t *v13;
  size_t *v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef uint8_t *_g4_t_v19;
  typedef size_t *_g4_t_v20;
  typedef size_t *_g4_t_v21;
  typedef size_t _g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef size_t _g4_t_v24;
  typedef uint8_t *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28[4];
  typedef uint32_t _g4_t_v29[4];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef int _g4_t_v35;
  typedef int (**_g4_t_v36)(int);
  typedef uint32_t _g4_t_v37[3];
  typedef uint8_t *_g4_t_v38;
  typedef uint8_t *_g4_t_v39;
  typedef uint8_t *_g4_t_v40;
  typedef int _g4_t_v41;
  typedef uint32_t _g4_t_v42[2];
  typedef uint32_t *_g4_t_v43;
  typedef uint32_t _g4_t_v44[29];
  typedef int16_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  enum : size_t {
    _g4_s0 = 416u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v16)) > _g4_s1 ? (12u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v17)) > _g4_s2 ? (36u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v18)) > _g4_s3 ? (36u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v19)) > _g4_s4 ? (40u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v20)) > _g4_s5 ? (40u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v21)) > _g4_s6 ? (44u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v22)) > _g4_s7 ? (44u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v23)) > _g4_s8 ? (48u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v24)) > _g4_s9 ? (52u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v25)) > _g4_s10 ? (52u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (62u + sizeof(_g4_t_v26)) > _g4_s11 ? (62u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v27)) > _g4_s12 ? (68u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v28)) > _g4_s13 ? (72u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (88u + sizeof(_g4_t_v29)) > _g4_s14 ? (88u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (104u + sizeof(_g4_t_v30)) > _g4_s15 ? (104u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (108u + sizeof(_g4_t_v31)) > _g4_s16 ? (108u + sizeof(_g4_t_v31)) : _g4_s16,
    _g4_s18 = (112u + sizeof(_g4_t_v32)) > _g4_s17 ? (112u + sizeof(_g4_t_v32)) : _g4_s17,
    _g4_s19 = (116u + sizeof(_g4_t_v33)) > _g4_s18 ? (116u + sizeof(_g4_t_v33)) : _g4_s18,
    _g4_s20 = (120u + sizeof(_g4_t_v34)) > _g4_s19 ? (120u + sizeof(_g4_t_v34)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v35)) > _g4_s20 ? (124u + sizeof(_g4_t_v35)) : _g4_s20,
    _g4_s22 = (136u + sizeof(_g4_t_v36)) > _g4_s21 ? (136u + sizeof(_g4_t_v36)) : _g4_s21,
    _g4_s23 = (140u + sizeof(_g4_t_v37)) > _g4_s22 ? (140u + sizeof(_g4_t_v37)) : _g4_s22,
    _g4_s24 = (152u + sizeof(_g4_t_v38)) > _g4_s23 ? (152u + sizeof(_g4_t_v38)) : _g4_s23,
    _g4_s25 = (156u + sizeof(_g4_t_v39)) > _g4_s24 ? (156u + sizeof(_g4_t_v39)) : _g4_s24,
    _g4_s26 = (160u + sizeof(_g4_t_v40)) > _g4_s25 ? (160u + sizeof(_g4_t_v40)) : _g4_s25,
    _g4_s27 = (164u + sizeof(_g4_t_v41)) > _g4_s26 ? (164u + sizeof(_g4_t_v41)) : _g4_s26,
    _g4_s28 = (168u + sizeof(_g4_t_v42)) > _g4_s27 ? (168u + sizeof(_g4_t_v42)) : _g4_s27,
    _g4_s29 = (176u + sizeof(_g4_t_v43)) > _g4_s28 ? (176u + sizeof(_g4_t_v43)) : _g4_s28,
    _g4_s30 = (180u + sizeof(_g4_t_v44)) > _g4_s29 ? (180u + sizeof(_g4_t_v44)) : _g4_s29,
    _g4_s31 = (296u + sizeof(_g4_t_v45)) > _g4_s30 ? (296u + sizeof(_g4_t_v45)) : _g4_s30,
    _g4_s32 = (300u + sizeof(_g4_t_v46)) > _g4_s31 ? (300u + sizeof(_g4_t_v46)) : _g4_s31,
    _g4_s33 = (304u + sizeof(_g4_t_v47)) > _g4_s32 ? (304u + sizeof(_g4_t_v47)) : _g4_s32,
    _g4_s34 = (308u + sizeof(_g4_t_v48)) > _g4_s33 ? (308u + sizeof(_g4_t_v48)) : _g4_s33,
    _g4_s35 = (312u + sizeof(_g4_t_v49)) > _g4_s34 ? (312u + sizeof(_g4_t_v49)) : _g4_s34
  };
  alignas(16) uint8_t _g4_sf[_g4_s35];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 12u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 36u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 44u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 62u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 68u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 72u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 88u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 104u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 108u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 112u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 116u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 120u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 124u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 136u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 140u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 152u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 156u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 160u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 164u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 168u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 176u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 180u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 296u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 300u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 304u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 308u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 312u);

  if ( *((uint32_t *)self + 4) != 3 )
    return;
  v1 = opNew(0x38u);
  *(uint32_t *)(v1 + 4) = 1;
  *(uint32_t *)(v1 + 8) = 1;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 16) = 0;
  untyped_deleter = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v1));
  v23 = (uint32_t *)(untyped_deleter + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), (char *)&unk_1B15112, (int)(uintptr_t)(&v26));
  if ( untyped_deleter != (char *)-4 )
    chatv2::Responses::ClientResponse::ClientResponse(v23, 15, (int)(uintptr_t)(&v30));
  v3 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = (char *)&v26 + 1;
    g4_std::string::Rep::M_destroy(v3);
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8, v15);
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v1, 12);
  }
  sub_1900810(v44);
  v44[28] = 0;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  v49 = 0;
  v36 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v37[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  sub_19119D0((char *)&v37[-1] + (uint32_t)(uintptr_t)(*(v36 - 3)), 0);
  v37[1] = 0;
  v37[2] = 0;
  v38 = nullptr;
  v39 = nullptr;
  v40 = nullptr;
  v41 = 0;
  v36 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v44[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v37[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1903A70(v42);
  v42[1] = 16;
  v37[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v43 = &dword_213B814;
  sub_19119D0(v44, v37);
  sub_192D8B0(&v36, 64);
  v4 = &dword_213B814;
  v29[0] = (uint32_t)(uintptr_t)(&dword_213B814);
  if ( v40 == nullptr )
  {
    g4_std::string::assign_str(v29, &v43);
    goto LABEL_16;
  }
  if ( v40 > v38 )
  {
    if ( v40 == v39 )
      goto LABEL_15;
    if ( v39 != nullptr )
    {
      v19 = v39;
      v24 = v40 - v39;
      v21 = (size_t *)sub_1938930(v40 - v39, 0);
      v4 = (uint32_t *)(v21 + 3);
      if ( v24 == 1 )
      {
        *((uint8_t *)v21 + 12) = *v19;
      }
      else
      {
        memcpy(v4, v19, v24);
        v4 = (uint32_t *)(v21 + 3);
      }
      if ( v21 != (size_t *)(uintptr_t)(dword_213B808) )
      {
        v21[2] = 0;
        *v21 = v24;
        *((uint8_t *)v21 + v24 + 12) = 0;
      }
LABEL_15:
      v33 = v4;
      g4_std::string::assign_str(v29, &v33);
      v5 = v33 - 3;
      if ( v33 - 3 == dword_213B808 || __sync_fetch_and_add(v33 - 1, 0xFFFFFFFF) > 0 )
        goto LABEL_16;
      goto LABEL_39;
    }
LABEL_40:
    sub_18FFFD0("basic_string::_S_construct null not valid");
  }
  v25 = v39;
  if ( v38 != v39 )
  {
    if ( v39 != nullptr )
    {
      v22 = v38 - v39;
      v14 = (size_t *)sub_1938930(v38 - v39, 0);
      v4 = (uint32_t *)(v14 + 3);
      if ( v22 == 1 )
      {
        *((uint8_t *)v14 + 12) = *v25;
LABEL_35:
        if ( v14 != (size_t *)(uintptr_t)(dword_213B808) )
        {
          v14[2] = 0;
          *v14 = v22;
          *((uint8_t *)v4 + v22) = 0;
        }
        goto LABEL_37;
      }
    }
    else
    {
      if ( v38 != nullptr )
        goto LABEL_40;
      v14 = (size_t *)sub_1938930(0, 0);
      v4 = (uint32_t *)(v14 + 3);
      v22 = 0;
    }
    v17 = v4;
    v20 = v14;
    memcpy(v4, v25, v22);
    v14 = v20;
    v4 = v17;
    goto LABEL_35;
  }
LABEL_37:
  v32 = v4;
  g4_std::string::assign_str(v29, &v32);
  v5 = v32 - 3;
  if ( v32 - 3 != dword_213B808 && __sync_fetch_and_add(v32 - 1, 0xFFFFFFFF) <= 0 )
LABEL_39:
    g4_std::string::Rep::M_destroy(v5);
LABEL_16:
  v28[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939B80(v28, *(uint32_t *)(v29[0] - 12) + 49);
  g4_std::string::append((int)(uintptr_t)(v28), "The nickname is too long. It should be less than ", 0x31u);
  g4_std::string::append_str(v28, v29);
  g4_std::string::construct_copy(&v31, v28);
  g4_std::string::append((int)(uintptr_t)(&v31), ".", 1u);
  if ( untyped_deleter == (char *)-4 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  chatv2::Responses::ClientResponse::SetMessage((int)(uintptr_t)(v23), (int)(uintptr_t)(&v31));
  v6 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v27;
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v28[0] - 12);
  if ( (uint32_t *)(v28[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v27 + 1;
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v29[0] - 12);
  if ( (uint32_t *)(v29[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v27 + 2;
    g4_std::string::Rep::M_destroy(v8);
  }
  if ( *(uint32_t *)(*((uint32_t *)self + 5) + 36) != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
    v9 = *((uint32_t *)self + 5);
    v10 = *(uint32_t *)(v9 + 36);
    if ( v10 == 0 )
      sub_1270D06();
    v34 = untyped_deleter + 4;
    v11 = *(void (**)(int, char **))((v10 & 0xFFFFFFFE) + 4);
    v35 = v1;
    __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
    v11(v9 + 40, &v34);
    v12 = (volatile int32_t *)v35;
    if ( v35 != 0 && __sync_fetch_and_add((volatile int32_t *)(v35 + 4), 0xFFFFFFFF) == 1 )
    {
      v18 = v12;
      G4_VCALL<void>(v12, 8);
      if ( __sync_fetch_and_add(v18 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v18, 12);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 8);
      if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v1, 12);
    }
  }
  v36 = (int (**)(int))(uintptr_t)(&off_20AAEAC);
  v44[0] = (uint32_t)(uintptr_t)(&off_20AAEC0);
  v37[0] = (uint32_t)(uintptr_t)(&off_20AADA8);
  v13 = v43 - 3;
  if ( v43 - 3 != dword_213B808 && __sync_fetch_and_add(v43 - 1, 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v27 + 3;
    g4_std::string::Rep::M_destroy(v13);
  }
  v37[0] = (uint32_t)(uintptr_t)(&off_20AB2C8);
  sub_1902180(v42);
  v36 = (int (**)(int))(uintptr_t)(&off_20AAE6C);
  *(uint32_t *)((char *)&v37[-1] + (uint32_t)*(&off_20AAE6C - 3)) = (uint32_t)(uintptr_t)(&off_20AAE80);
  v44[0] = (uint32_t)(uintptr_t)(&off_20AA2C0);
  sub_1900B90(v44);
  if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8, v16);
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v1, 12);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::ChangeNicknameRequest::Construct  (binary VA: 0x1270cb0)
// Original: chatv2::Requests::ChangeNicknameRequest::ChangeNicknameRequest
// ----------------------------------------------------------------------------
int chatv2::Requests::ChangeNicknameRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3)
{
  chatv2::Requests::IRequest::Construct(a1);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20929A8);
  *((uint32_t *)a1 + 5) = a2;
  return (int)(uintptr_t)(g4_std::string::construct_copy((char *)a1 + 24, a3));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::CheckFailure  (binary VA: 0x12711a0)
// Original: chatv2::Requests::IArionServerRequest::CheckFailure
// ----------------------------------------------------------------------------
int chatv2::Requests::IArionServerRequest::CheckFailure(chatv2::Requests::IArionServerRequest::Self *self)
{
  int result;
  int v2;

  if ( chatv2::Requests::IRequest::CheckFailure((chatv2::Requests::IRequest::Self *)(self)) )
  {
    *((uint32_t *)self + 12) = 5;
    return 1;
  }
  else
  {
    v2 = G4_VCALL<int>(self, 24);
    result = 0;
    if ( v2 == 0 )
    {
      *((uint32_t *)self + 12) = 4;
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::Destroy  (binary VA: 0x1271200)
// Original: chatv2::Requests::IArionServerRequest::~IArionServerRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::IArionServerRequest::Destroy(chatv2::Requests::IArionServerRequest::Self *self)
{
  int v1;
  int v2;
  volatile int32_t *v3;
  typedef char *_g4_t_v4;
  typedef char _g4_t_v5;
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v4)) > _g4_s0 ? (4u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (30u + sizeof(_g4_t_v5)) > _g4_s1 ? (30u + sizeof(_g4_t_v5)) : _g4_s1,
    _g4_s3 = (31u + sizeof(_g4_t_v6)) > _g4_s2 ? (31u + sizeof(_g4_t_v6)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 4u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 30u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 31u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20929C8);
  v1 = *((uint32_t *)self + 9);
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    v4 = &v5;
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  v2 = *((uint32_t *)self + 8);
  if ( (uint32_t *)(v2 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v2 - 4), 0xFFFFFFFF) <= 0 )
  {
    v4 = &v6;
    g4_std::string::Rep::M_destroy((void *)(v2 - 12));
  }
  v3 = *((volatile int32_t **)self + 6);
  if ( v3 != nullptr && __sync_fetch_and_add(v3 + 2, 0xFFFFFFFF) == 1 )
    G4_VCALL<void>(v3, 12, v4);
  chatv2::Requests::IRequest::Destroy((chatv2::Requests::IRequest::Self *)(self));
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::Destroy_ea12712c0  (binary VA: 0x12712c0)
// Original: chatv2::Requests::IArionServerRequest::~IArionServerRequest
// ----------------------------------------------------------------------------
void chatv2::Requests::IArionServerRequest::Destroy_ea12712c0(chatv2::Requests::IArionServerRequest::Self *self)
{
  chatv2::Requests::IArionServerRequest::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::SendFailureMessage  (binary VA: 0x1271300)
// Original: chatv2::Requests::IArionServerRequest::SendFailureMessage
// ----------------------------------------------------------------------------
char * chatv2::Requests::IArionServerRequest::SendFailureMessage(chatv2::Requests::IArionServerRequest::Self *self)
{
  chatv2::Requests::IArionServerRequest::Self *v1;
  int v2;
  int v3;
  char *Channel;
  volatile int32_t *v5;
  char *v6; // kr00_4
  char *result;
  int v8;
  void *v9;
  char *MuteMessage;
  int v11;
  int v12;
  void (*v13)(int, char **);
  volatile int32_t *v14;
  volatile int32_t *v15;
  char *untyped_deleter;
  int v17;
  int v18;
  int v19;
  void (*v20)(int, int *);
  volatile int32_t *v21;
  void *v22;
  char *v23;
  int v24;
  int v25;
  void (*v26)(int, int *);
  volatile int32_t *v27;
  void *v28;
  void *v29;
  int v30;
  int v31;
  void (*v32)(int, char **);
  volatile int32_t *v33;
  void *v34;
  void *v35;
  chatv2::Connectivity::IClient::Self *v36;
  char *Id;
  int v38;
  int v39;
  void (*v40)(int, char **);
  volatile int32_t *v41;
  void *v42;
  typedef char *_g4_t_v43;
  typedef char *_g4_t_v44;
  typedef int *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef char *_g4_t_v54;
  typedef const void **_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef uint32_t _g4_t_v63[4];
  typedef int _g4_t_v64[4];
  typedef int _g4_t_v65[4];
  typedef int _g4_t_v66[4];
  typedef int _g4_t_v67;
  typedef volatile int32_t *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef volatile int32_t *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef volatile int32_t *_g4_t_v72;
  typedef char *_g4_t_v73;
  typedef volatile int32_t *_g4_t_v74;
  typedef char *_g4_t_v75;
  typedef volatile int32_t *_g4_t_v76;
  typedef char *_g4_t_v77;
  typedef volatile int32_t *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef volatile int32_t *_g4_t_v80;
  typedef chatv2::Requests::IArionServerRequest::Self **_g4_t_v81;
  enum : size_t {
    _g4_s0 = 320u,
    _g4_s1 = (8u + sizeof(_g4_t_v43)) > _g4_s0 ? (8u + sizeof(_g4_t_v43)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v44)) > _g4_s1 ? (8u + sizeof(_g4_t_v44)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v45)) > _g4_s2 ? (8u + sizeof(_g4_t_v45)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v46)) > _g4_s3 ? (8u + sizeof(_g4_t_v46)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v47)) > _g4_s4 ? (32u + sizeof(_g4_t_v47)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v48)) > _g4_s5 ? (32u + sizeof(_g4_t_v48)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v49)) > _g4_s6 ? (32u + sizeof(_g4_t_v49)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v50)) > _g4_s7 ? (36u + sizeof(_g4_t_v50)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v51)) > _g4_s8 ? (40u + sizeof(_g4_t_v51)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v52)) > _g4_s9 ? (44u + sizeof(_g4_t_v52)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v53)) > _g4_s10 ? (44u + sizeof(_g4_t_v53)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v54)) > _g4_s11 ? (44u + sizeof(_g4_t_v54)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v55)) > _g4_s12 ? (48u + sizeof(_g4_t_v55)) : _g4_s12,
    _g4_s14 = (48u + sizeof(_g4_t_v56)) > _g4_s13 ? (48u + sizeof(_g4_t_v56)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v57)) > _g4_s14 ? (48u + sizeof(_g4_t_v57)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v58)) > _g4_s15 ? (48u + sizeof(_g4_t_v58)) : _g4_s15,
    _g4_s17 = (55u + sizeof(_g4_t_v59)) > _g4_s16 ? (55u + sizeof(_g4_t_v59)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v60)) > _g4_s17 ? (56u + sizeof(_g4_t_v60)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v61)) > _g4_s18 ? (60u + sizeof(_g4_t_v61)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v62)) > _g4_s19 ? (64u + sizeof(_g4_t_v62)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v63)) > _g4_s20 ? (68u + sizeof(_g4_t_v63)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v64)) > _g4_s21 ? (84u + sizeof(_g4_t_v64)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v65)) > _g4_s22 ? (100u + sizeof(_g4_t_v65)) : _g4_s22,
    _g4_s24 = (116u + sizeof(_g4_t_v66)) > _g4_s23 ? (116u + sizeof(_g4_t_v66)) : _g4_s23,
    _g4_s25 = (132u + sizeof(_g4_t_v67)) > _g4_s24 ? (132u + sizeof(_g4_t_v67)) : _g4_s24,
    _g4_s26 = (136u + sizeof(_g4_t_v68)) > _g4_s25 ? (136u + sizeof(_g4_t_v68)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v69)) > _g4_s26 ? (148u + sizeof(_g4_t_v69)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v70)) > _g4_s27 ? (152u + sizeof(_g4_t_v70)) : _g4_s27,
    _g4_s29 = (164u + sizeof(_g4_t_v71)) > _g4_s28 ? (164u + sizeof(_g4_t_v71)) : _g4_s28,
    _g4_s30 = (168u + sizeof(_g4_t_v72)) > _g4_s29 ? (168u + sizeof(_g4_t_v72)) : _g4_s29,
    _g4_s31 = (180u + sizeof(_g4_t_v73)) > _g4_s30 ? (180u + sizeof(_g4_t_v73)) : _g4_s30,
    _g4_s32 = (184u + sizeof(_g4_t_v74)) > _g4_s31 ? (184u + sizeof(_g4_t_v74)) : _g4_s31,
    _g4_s33 = (196u + sizeof(_g4_t_v75)) > _g4_s32 ? (196u + sizeof(_g4_t_v75)) : _g4_s32,
    _g4_s34 = (200u + sizeof(_g4_t_v76)) > _g4_s33 ? (200u + sizeof(_g4_t_v76)) : _g4_s33,
    _g4_s35 = (212u + sizeof(_g4_t_v77)) > _g4_s34 ? (212u + sizeof(_g4_t_v77)) : _g4_s34,
    _g4_s36 = (216u + sizeof(_g4_t_v78)) > _g4_s35 ? (216u + sizeof(_g4_t_v78)) : _g4_s35,
    _g4_s37 = (220u + sizeof(_g4_t_v79)) > _g4_s36 ? (220u + sizeof(_g4_t_v79)) : _g4_s36,
    _g4_s38 = (224u + sizeof(_g4_t_v80)) > _g4_s37 ? (224u + sizeof(_g4_t_v80)) : _g4_s37,
    _g4_s39 = (236u + sizeof(_g4_t_v81)) > _g4_s38 ? (236u + sizeof(_g4_t_v81)) : _g4_s38
  };
  alignas(16) uint8_t _g4_sf[_g4_s39];
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 8u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 8u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 8u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 36u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 40u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 44u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 44u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 48u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 48u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 48u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 48u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 55u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 56u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 68u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 84u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 100u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 116u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 132u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 136u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 148u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 152u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 164u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 168u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 180u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 184u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 196u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 200u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 212u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 216u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 220u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 224u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 236u);

  v81 = &self;
  v1 = self;
  v55 = (const void **)((char *)self + 32);
  v2 = *((uint32_t *)self + 10);
  chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v79, *((uint32_t *)self + 7));
  v3 = v79;
  if ( v79 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
      "px != 0");
    v3 = v79;
  }
  Channel = (char *)chatv2::Requests::ArionRequestFactory::GetChannel((uint32_t *)(&v67), v3, v55, v2);
  v5 = v80;
  if ( v80 != nullptr )
  {
    Channel = (char *)__sync_fetch_and_add(v80 + 1, 0xFFFFFFFF);
    if ( Channel == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
    {
      Channel = (char *)G4_VCALL<int>(v5, 8);
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
        Channel = (char *)G4_VCALL<int>(v5, 12);
    }
  }
  v6 = Channel;
  result = (char *)dword_20B9FF4 + (uint32_t)jpt_12713A3[*((uint32_t *)v1 + 12)];
  switch ( *((uint32_t *)v1 + 12) )
  {
    case 0:
    case 3:
      goto LABEL_20;
    case 1:
      v8 = opNew(0x38u);
      *(uint32_t *)(v8 + 4) = 1;
      *(uint32_t *)(v8 + 8) = 1;
      *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2092388);
      *(uint32_t *)(v8 + 12) = 0;
      *(uint8_t *)(v8 + 16) = 0;
      untyped_deleter = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v8));
      v50 = (int)(uintptr_t)(untyped_deleter + 4);
      if ( untyped_deleter != (char *)-4 )
      {
        v47 = untyped_deleter;
        chatv2::Responses::ClientResponse::ClientResponse((uint32_t *)untyped_deleter + 1, 9, (int)(uintptr_t)(v55));
        untyped_deleter = v47;
      }
      *untyped_deleter = 1;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      v63[0] = (uint32_t)(uintptr_t)(&dword_213B814);
      v17 = *((uint32_t *)v1 + 10);
      if ( v17 == 1 )
      {
        g4_std::string::append((int)(uintptr_t)(v63), "Channel : ", 0xAu);
        v17 = *((uint32_t *)v1 + 10);
      }
      if ( v17 == 0 )
        g4_std::string::append((int)(uintptr_t)(v63), "Room : ", 7u);
      g4_std::string::append_str(v63, v55);
      g4_std::string::append((int)(uintptr_t)(v63), " is invalid", 0xBu);
      if ( v50 == 0 )
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
          "px != 0");
      chatv2::Responses::ClientResponse::SetMessage(v50, (int)(uintptr_t)(v63));
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v18 = *((uint32_t *)v1 + 7);
      v19 = *(uint32_t *)(v18 + 36);
      if ( v19 == 0 )
        goto LABEL_112;
      v71 = v50;
      v20 = *(void (**)(int, int *))((v19 & 0xFFFFFFFE) + 4);
      v72 = (volatile int32_t *)v8;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v20(v18 + 40, &v71);
      v21 = v72;
      if ( v72 != nullptr && __sync_fetch_and_add(v72 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v21, 8);
        if ( __sync_fetch_and_add(v21 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v21, 12);
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      v22 = (void *)(v63[0] - 12);
      if ( (uint32_t *)(v63[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v44 = (char *)&v60 + 3;
        g4_std::string::Rep::M_destroy(v22);
      }
      break;
    case 2:
      if ( v67 != 0 )
        goto LABEL_20;
      v8 = opNew(0x38u);
      *(uint32_t *)(v8 + 4) = 1;
      *(uint32_t *)(v8 + 8) = 1;
      *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2092388);
      *(uint32_t *)(v8 + 12) = 0;
      *(uint8_t *)(v8 + 16) = 0;
      v23 = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v8));
      v51 = (int)(uintptr_t)(v23 + 4);
      if ( v23 != (char *)-4 )
      {
        v48 = v23;
        chatv2::Responses::ClientResponse::ClientResponse((uint32_t *)v23 + 1, 10, (int)(uintptr_t)(v55));
        v23 = v48;
      }
      *v23 = 1;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v63), "InvitedRoom: ", (int)(uintptr_t)(&v59));
      g4_std::string::append_str(v63, v55);
      g4_std::string::append((int)(uintptr_t)(v63), " is invalid", 0xBu);
      if ( v51 == 0 )
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
          "px != 0");
      chatv2::Responses::ClientResponse::SetMessage(v51, (int)(uintptr_t)(v63));
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v24 = *((uint32_t *)v1 + 7);
      v25 = *(uint32_t *)(v24 + 36);
      if ( v25 == 0 )
LABEL_112:
        sub_12726CA();
      v69 = v51;
      v26 = *(void (**)(int, int *))((v25 & 0xFFFFFFFE) + 4);
      v70 = (volatile int32_t *)v8;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v26(v24 + 40, &v69);
      v27 = v70;
      if ( v70 != nullptr && __sync_fetch_and_add(v70 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v27, 8);
        if ( __sync_fetch_and_add(v27 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v27, 12);
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      v28 = (void *)(v63[0] - 12);
      if ( (uint32_t *)(v63[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v44 = (char *)&v60 + 2;
        g4_std::string::Rep::M_destroy(v28);
      }
      break;
    case 4:
      v8 = opNew(0x38u);
      *(uint32_t *)(v8 + 4) = 1;
      *(uint32_t *)(v8 + 8) = 1;
      *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2092388);
      *(uint32_t *)(v8 + 12) = 0;
      *(uint8_t *)(v8 + 16) = 0;
      v53 = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v8));
      v57 = (uint32_t *)(v53 + 4);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v65), (char *)&unk_1B15112, (int)(uintptr_t)(&v61) + 3);
      if ( v53 != (char *)-4 )
        chatv2::Responses::ClientResponse::ClientResponse(v57, 11, (int)(uintptr_t)(v65));
      v29 = (void *)(v65[0] - 12);
      if ( (uint32_t *)(v65[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v65[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v45 = &v62;
        g4_std::string::Rep::M_destroy(v29);
      }
      *v53 = 1;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8, v45);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v63), "Client invalid", (int)(uintptr_t)(&v60) + 1);
      if ( v53 == (char *)-4 )
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
          "px != 0");
      chatv2::Responses::ClientResponse::SetMessage((int)(uintptr_t)(v57), (int)(uintptr_t)(v63));
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v30 = *((uint32_t *)v1 + 7);
      v31 = *(uint32_t *)(v30 + 36);
      if ( v31 == 0 )
        goto LABEL_112;
      v75 = v53 + 4;
      v32 = *(void (**)(int, char **))((v31 & 0xFFFFFFFE) + 4);
      v76 = (volatile int32_t *)v8;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v32(v30 + 40, &v75);
      v33 = v76;
      if ( v76 != nullptr && __sync_fetch_and_add(v76 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v33, 8);
        if ( __sync_fetch_and_add(v33 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v33, 12);
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      v34 = (void *)(v63[0] - 12);
      if ( (uint32_t *)(v63[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v44 = (char *)&v62 + 1;
        g4_std::string::Rep::M_destroy(v34);
      }
      break;
    case 5:
      v8 = opNew(0x38u);
      *(uint32_t *)(v8 + 4) = 1;
      *(uint32_t *)(v8 + 8) = 1;
      *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2092388);
      *(uint32_t *)(v8 + 12) = 0;
      *(uint8_t *)(v8 + 16) = 0;
      v54 = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v8));
      v58 = (uint32_t *)(v54 + 4);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v64), (char *)&unk_1B15112, (int)(uintptr_t)(&v61));
      if ( v54 != (char *)-4 )
        chatv2::Responses::ClientResponse::ClientResponse(v58, 11, (int)(uintptr_t)(v64));
      v35 = (void *)(v64[0] - 12);
      if ( (uint32_t *)(v64[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v64[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v46 = (char *)&v61 + 1;
        g4_std::string::Rep::M_destroy(v35);
      }
      *v54 = 1;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8, v46);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v63), "Client not started : ", (int)(uintptr_t)(&v60));
      v36 = (chatv2::Connectivity::IClient::Self *)G4_VCALL<int>(v1, 24);
      Id = chatv2::Connectivity::IClient::GetId(v36);
      g4_std::string::append_str(v63, Id);
      if ( v54 == (char *)-4 )
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
          "px != 0");
      chatv2::Responses::ClientResponse::SetMessage((int)(uintptr_t)(v58), (int)(uintptr_t)(v63));
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v38 = *((uint32_t *)v1 + 7);
      v39 = *(uint32_t *)(v38 + 36);
      if ( v39 == 0 )
        goto LABEL_112;
      v73 = v54 + 4;
      v40 = *(void (**)(int, char **))((v39 & 0xFFFFFFFE) + 4);
      v74 = (volatile int32_t *)v8;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v40(v38 + 40, &v73);
      v41 = v74;
      if ( v74 != nullptr && __sync_fetch_and_add(v74 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v41, 8);
        if ( __sync_fetch_and_add(v41 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v41, 12);
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      v42 = (void *)(v63[0] - 12);
      if ( (uint32_t *)(v63[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v63[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v44 = (char *)&v61 + 2;
        g4_std::string::Rep::M_destroy(v42);
      }
      break;
    case 6:
      v8 = opNew(0x38u);
      *(uint32_t *)(v8 + 4) = 1;
      *(uint32_t *)(v8 + 8) = 1;
      *(uint32_t *)v8 = ((uint32_t)(uintptr_t)&off_2092388);
      *(uint32_t *)(v8 + 12) = 0;
      *(uint8_t *)(v8 + 16) = 0;
      v52 = (char *)(boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v8));
      v56 = (uint32_t *)(v52 + 4);
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v66), (char *)&unk_1B15112, (int)(uintptr_t)(&v62) + 2);
      if ( v52 != (char *)-4 )
        chatv2::Responses::ClientResponse::ClientResponse(v56, 7, (int)(uintptr_t)(v66));
      v9 = (void *)(v66[0] - 12);
      if ( (uint32_t *)(v66[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v66[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        v43 = (char *)&v62 + 3;
        g4_std::string::Rep::M_destroy(v9);
      }
      *v52 = 1;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8, v43);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      MuteMessage = chatv2::Core::ArionExecutor::GetMuteMessage(*((chatv2::Core::ArionExecutor::Self **)v1 + 7));
      if ( v52 == (char *)-4 )
      {
        v49 = MuteMessage;
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::R"
          "esponses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
          "px != 0");
        MuteMessage = v49;
      }
      chatv2::Responses::ClientResponse::SetMessage((int)(uintptr_t)(v56), (int)(uintptr_t)(MuteMessage));
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v11 = *((uint32_t *)v1 + 7);
      v12 = *(uint32_t *)(v11 + 36);
      if ( v12 == 0 )
        goto LABEL_112;
      v77 = v52 + 4;
      v13 = *(void (**)(int, char **))((v12 & 0xFFFFFFFE) + 4);
      v78 = (volatile int32_t *)v8;
      __sync_add_and_fetch((volatile int32_t *)(v8 + 4), 1);
      v13(v11 + 40, &v77);
      v14 = v78;
      if ( v78 != nullptr && __sync_fetch_and_add(v78 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v14, 8);
        if ( __sync_fetch_and_add(v14 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v14, 12);
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      break;
    default:
      result = v6;
      goto LABEL_20;
  }
  result = (char *)__sync_fetch_and_add((volatile int32_t *)(v8 + 4), 0xFFFFFFFF);
  if ( result == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
  {
    result = (char *)G4_VCALL<int>(v8, 8, v44);
    if ( __sync_fetch_and_add((volatile int32_t *)(v8 + 8), 0xFFFFFFFF) == 1 )
      result = (char *)G4_VCALL<int>(v8, 12);
  }
LABEL_20:
  v15 = v68;
  if ( v68 != nullptr )
  {
    result = (char *)__sync_fetch_and_add(v68 + 1, 0xFFFFFFFF);
    if ( result == (char *)(uintptr_t)((uint8_t *)&dword_0 + 1) )
    {
      result = (char *)G4_VCALL<int>(v15, 8);
      if ( __sync_fetch_and_add(v15 + 2, 0xFFFFFFFF) == 1 )
        return (char *)G4_VCALL<int>(v15, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::Construct  (binary VA: 0x12721b0)
// Original: chatv2::Requests::IArionServerRequest::IArionServerRequest
// ----------------------------------------------------------------------------
int chatv2::Requests::IArionServerRequest::Construct(chatv2::Requests::IRequest::Self *a1, int a2, int a3, int a4, int a5, int a6)
{
  chatv2::Requests::IRequest::Construct(a1);
  *((uint32_t *)a1 + 5) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20929C8);
  *((uint32_t *)a1 + 7) = a2;
  *((uint32_t *)a1 + 6) = 0;
  g4_std::string::construct_copy((char *)a1 + 32, a3);
  g4_std::string::construct_copy((char *)a1 + 36, a4);
  *((uint32_t *)a1 + 10) = a5;
  *((uint32_t *)a1 + 11) = a6;
  return a6;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::GetChannelName  (binary VA: 0x1272230)
// Original: chatv2::Requests::IArionServerRequest::GetChannelName
// ----------------------------------------------------------------------------
char * chatv2::Requests::IArionServerRequest::GetChannelName(chatv2::Requests::IArionServerRequest::Self *self)
{
  return (char *)self + 32;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::GetChannelLanguage  (binary VA: 0x1272240)
// Original: chatv2::Requests::IArionServerRequest::GetChannelLanguage
// ----------------------------------------------------------------------------
char * chatv2::Requests::IArionServerRequest::GetChannelLanguage(chatv2::Requests::IArionServerRequest::Self *self)
{
  return (char *)self + 36;
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::GetChannelType  (binary VA: 0x1272250)
// Original: chatv2::Requests::IArionServerRequest::GetChannelType
// ----------------------------------------------------------------------------
int chatv2::Requests::IArionServerRequest::GetChannelType(chatv2::Requests::IArionServerRequest::Self *self)
{
  return *((uint32_t *)self + 10);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::GetType  (binary VA: 0x1272260)
// Original: chatv2::Requests::IArionServerRequest::GetType
// ----------------------------------------------------------------------------
int chatv2::Requests::IArionServerRequest::GetType(chatv2::Requests::IArionServerRequest::Self *self)
{
  return *((uint32_t *)self + 11);
}

// ----------------------------------------------------------------------------
// Function: chatv2::Requests::IArionServerRequest::Execute  (binary VA: 0x1272270)
// Original: chatv2::Requests::IArionServerRequest::Execute
// ----------------------------------------------------------------------------
int chatv2::Requests::IArionServerRequest::Execute(chatv2::Requests::IArionServerRequest::Self *self)
{
  chatv2::Requests::IArionServerRequest::Self *v1;
  void *v2;
  void *v3;
  int result;
  int v5;
  volatile int32_t *v6;
  int32_t v7;
  int32_t v8; // ett
  chatv2::Requests::IArionServerRequest::Self *v9;
  int v10;
  int v11;
  volatile int32_t *v12;
  int (*v13)(int, int *);
  volatile int32_t *v14;
  volatile int32_t *v15;
  typedef char *_g4_t_v16;
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
  typedef uint32_t _g4_t_v34[3];
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef volatile int32_t *_g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef volatile int32_t *_g4_t_v42;
  typedef int (*_g4_t_v43)(int, int, int);
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef volatile int32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef int _g4_t_v49;
  typedef chatv2::Requests::IArionServerRequest::Self **_g4_t_v50;
  typedef chatv2::Requests::IArionServerRequest::Self *_g4_t_v51;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v19)) > _g4_s3 ? (12u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v21)) > _g4_s5 ? (20u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v22)) > _g4_s6 ? (24u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v23)) > _g4_s7 ? (28u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v24)) > _g4_s8 ? (32u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v25)) > _g4_s9 ? (32u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v26)) > _g4_s10 ? (36u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v27)) > _g4_s11 ? (36u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v28)) > _g4_s12 ? (40u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v29)) > _g4_s13 ? (40u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v30)) > _g4_s14 ? (44u + sizeof(_g4_t_v30)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v31)) > _g4_s15 ? (48u + sizeof(_g4_t_v31)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v32)) > _g4_s16 ? (52u + sizeof(_g4_t_v32)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v33)) > _g4_s17 ? (56u + sizeof(_g4_t_v33)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v34)) > _g4_s18 ? (60u + sizeof(_g4_t_v34)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v35)) > _g4_s19 ? (72u + sizeof(_g4_t_v35)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v36)) > _g4_s20 ? (76u + sizeof(_g4_t_v36)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v37)) > _g4_s21 ? (80u + sizeof(_g4_t_v37)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v38)) > _g4_s22 ? (84u + sizeof(_g4_t_v38)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v39)) > _g4_s23 ? (88u + sizeof(_g4_t_v39)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v40)) > _g4_s24 ? (92u + sizeof(_g4_t_v40)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v41)) > _g4_s25 ? (96u + sizeof(_g4_t_v41)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v42)) > _g4_s26 ? (100u + sizeof(_g4_t_v42)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v43)) > _g4_s27 ? (104u + sizeof(_g4_t_v43)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v44)) > _g4_s28 ? (108u + sizeof(_g4_t_v44)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v45)) > _g4_s29 ? (112u + sizeof(_g4_t_v45)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v46)) > _g4_s30 ? (116u + sizeof(_g4_t_v46)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v47)) > _g4_s31 ? (120u + sizeof(_g4_t_v47)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v48)) > _g4_s32 ? (124u + sizeof(_g4_t_v48)) : _g4_s32,
    _g4_s34 = (128u + sizeof(_g4_t_v49)) > _g4_s33 ? (128u + sizeof(_g4_t_v49)) : _g4_s33,
    _g4_s35 = (132u + sizeof(_g4_t_v50)) > _g4_s34 ? (132u + sizeof(_g4_t_v50)) : _g4_s34,
    _g4_s36 = (136u + sizeof(_g4_t_v51)) > _g4_s35 ? (136u + sizeof(_g4_t_v51)) : _g4_s35
  };
  alignas(16) uint8_t _g4_sf[_g4_s36];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 32u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 36u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 40u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 44u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 48u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 52u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 56u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 60u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 72u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 76u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 80u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 84u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 88u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 92u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 96u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 100u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 104u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 108u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 112u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 116u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 120u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 124u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 128u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 132u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 136u);

  v50 = &self;
  v1 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v34), " IArionServerRequest execute\n", (int)(uintptr_t)(&v33) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v35), "ChatLib", (int)(uintptr_t)(&v33));
  chatv2::Utils::Log(
    3,
    0,
    &v35,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Requests/Arion/IArionServerRequest.cpp",
    59,
    v34);
  v2 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v33 + 2;
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v34[0] - 12);
  if ( (uint32_t *)(v34[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v33 + 3;
    g4_std::string::Rep::M_destroy(v3);
  }
  result = G4_VCALL<int>(v1, 24, v16, v17, v18, v19, v20, v21, v22, v23, v34, v26, v28, v30, v31, v32, v33, v34[0], v34[1], v34[2], v35, v36, v37, v38, v39, v40, v41, v42, v43, v44, v45, v46, v47, v48, v49);
  v29 = result;
  if ( result != 0 )
  {
    v5 = *(uint32_t *)v1;
    v51 = v1;
    result = (*(int (**)(int *))(v5 + 28))(&v36);
    if ( v36 != 0 )
    {
      v6 = *((volatile int32_t **)v1 + 6);
      if ( v6 == nullptr )
        goto LABEL_30;
      v7 = *((uint32_t *)v6 + 1);
      do
      {
        if ( v7 == 0 )
          break;
        v8 = v7;
        v7 = __sync_val_compare_and_swap(v6 + 1, v7, v7 + 1);
      }
      while ( v8 != v7 );
      if ( v7 == 0 )
LABEL_30:
        std::terminate();
      v9 = nullptr;
      v27 = *((uint32_t *)v1 + 5);
      if ( v27 != 0 )
        v9 = (chatv2::Requests::IArionServerRequest::Self *)(v27 + 20);
      if ( v9 != (chatv2::Requests::IArionServerRequest::Self *)((char *)v1 + 20) )
        __assert2(
          "../../../../../lib/boost/smart_ptr/enable_shared_from_this.hpp",
          50,
          "boost::shared_ptr<T> boost::enable_shared_from_this<T>::shared_from_this() [with T = chatv2::Requests::IArionServerRequest]",
          "p.get() == this");
      v10 = *((uint32_t *)v1 + 7);
      __sync_add_and_fetch(v6 + 1, 1);
      __sync_add_and_fetch(v6 + 1, 1);
      __sync_add_and_fetch(v6 + 1, 1);
      __sync_add_and_fetch(v6 + 1, 1);
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        v24 = v10;
        G4_VCALL<void>(v6, 8);
        v10 = v24;
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v6, 12);
          v10 = v24;
        }
      }
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        v25 = v10;
        G4_VCALL<void>(v6, 8);
        v10 = v25;
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v6, 12);
          v10 = v25;
        }
      }
      v43 = (int (*)(int, int, int))(uintptr_t)(chatv2::Core::ArionExecutor::OnHTTPResponseReceived);
      v46 = v27;
      v44 = 0;
      v45 = v10;
      v47 = v6;
      __sync_add_and_fetch(v6 + 1, 1);
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v6, 8);
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v6, 12);
      }
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v6, 8);
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v6, 12);
      }
      v11 = v36;
      if ( v36 == 0 )
      {
        __assert2(
          "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::C"
          "onnectivity::HTTPRequest, typename boost::detail::sp_member_access<T>::type = chatv2::Connectivity::HTTPRequest::Self*]",
          "px != 0");
        v11 = v36;
      }
      g4_std_compat::op_assign(
        v11 + 204,
        &v43);
      v12 = v47;
      if ( v47 != nullptr && __sync_fetch_and_add(v47 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v12, 8);
        if ( __sync_fetch_and_add(v12 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v12, 12);
      }
      if ( __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v6, 8);
        if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v6, 12);
      }
      v13 = *(int (**)(int, int *))(*(uint32_t *)v29 + 32);
      v41 = v36;
      v42 = v37;
      if ( v37 != nullptr )
        __sync_add_and_fetch(v37 + 1, 1);
      result = v13(v29, &v41);
      v14 = v42;
      if ( v42 != nullptr )
      {
        result = __sync_fetch_and_add(v42 + 1, 0xFFFFFFFF);
        if ( result == 1 )
        {
          result = G4_VCALL<int>(v14, 8);
          if ( __sync_fetch_and_add(v14 + 2, 0xFFFFFFFF) == 1 )
            result = G4_VCALL<int>(v14, 12);
        }
      }
    }
    v15 = v37;
    if ( v37 != nullptr )
    {
      result = __sync_fetch_and_add(v37 + 1, 0xFFFFFFFF);
      if ( result == 1 )
      {
        result = G4_VCALL<int>(v15, 8);
        if ( __sync_fetch_and_add(v15 + 2, 0xFFFFFFFF) == 1 )
          return G4_VCALL<int>(v15, 12);
      }
    }
  }
  return result;
}


