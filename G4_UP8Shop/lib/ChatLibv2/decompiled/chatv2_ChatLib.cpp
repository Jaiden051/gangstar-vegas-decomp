#include "Core/Utils/DecompTypes.h"
#include "chatv2_ChatLib.h"

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::Construct  (binary VA: 0x1229640)
// Original: chatv2::ChatLib::ChatLib
// ----------------------------------------------------------------------------
chatv2::ChatLib::Self * chatv2::ChatLib::Construct(chatv2::ChatLib::Self *self)
{
  int v1;
  int untyped_deleter;
  int v3;
  int v4;
  int v5;
  volatile int32_t *v6;
  chatv2::ChatLib::Self *result;
  bool v8;
  volatile int32_t *v9;
  int v10;
  int v11;
  int v12;

  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  v1 = opNew(0x110u);
  *(uint32_t *)(v1 + 4) = 1;
  *(uint32_t *)(v1 + 8) = 1;
  *(uint32_t *)v1 = ((uint32_t)(uintptr_t)&off_20920C8);
  *(uint32_t *)(v1 + 12) = 0;
  *(uint8_t *)(v1 + 16) = 0;
  untyped_deleter = (int)(uintptr_t)(boost::detail::sp_counted_impl_pd_chatv2_Core_ChatLibEngin_b4a62c::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Core::ChatLibEngine::Self *, boost::detail::sp_ms_deleter<chatv2::Core::ChatLibEngine::Self>> *)v1));
  v3 = untyped_deleter;
  v4 = untyped_deleter + 4;
  if ( untyped_deleter == -4 )
  {
    LOBYTE(G4_MEM<uintptr_t>(0xFFFFFFFC)) = 1;
  }
  else
  {
    v10 = untyped_deleter + 4;
    chatv2::Core::ChatLibEngine::Construct((chatv2::Core::ChatLibEngine::Self *)(untyped_deleter + 4));
    v5 = *(uint32_t *)(v3 + 8);
    *(uint8_t *)v3 = 1;
    v4 = v10;
    if ( v5 == 0 || *(uint32_t *)(v5 + 4) == 0 )
    {
      __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
      v8 = v1 == *(uint32_t *)(v3 + 8);
      *(uint32_t *)(v3 + 4) = v10;
      if ( !v8 )
      {
        __sync_add_and_fetch((volatile int32_t *)(v1 + 8), 1);
        v9 = *(volatile int32_t **)(v3 + 8);
        if ( v9 != nullptr && __sync_fetch_and_add(v9 + 2, 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v9, 12);
          v4 = v10;
        }
        *(uint32_t *)(v3 + 8) = v1;
      }
      if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
      {
        v11 = v4;
        G4_VCALL<void>(v1, 8);
        v4 = v11;
        if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v1, 12);
          v4 = v11;
        }
      }
    }
  }
  __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF) == 1 )
  {
    v12 = v4;
    G4_VCALL<void>(v1, 8);
    v4 = v12;
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v1, 12);
      v4 = v12;
    }
  }
  __sync_add_and_fetch((volatile int32_t *)(v1 + 4), 1);
  v6 = *((volatile int32_t **)self + 1);
  *(uint32_t *)self = v4;
  *((uint32_t *)self + 1) = v1;
  if ( v6 != nullptr && __sync_fetch_and_add(v6 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v6, 8);
    if ( __sync_fetch_and_add(v6 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v6, 12);
  }
  result = (chatv2::ChatLib::Self *)__sync_fetch_and_add((volatile int32_t *)(v1 + 4), 0xFFFFFFFF);
  if ( result == (chatv2::ChatLib::Self *)((char *)&dword_0 + 1) )
  {
    result = (chatv2::ChatLib::Self *)G4_VCALL<int>(v1, 8);
    if ( __sync_fetch_and_add((volatile int32_t *)(v1 + 8), 0xFFFFFFFF) == 1 )
      return (chatv2::ChatLib::Self *)G4_VCALL<int>(v1, 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::Destroy  (binary VA: 0x1229860)
// Original: chatv2::ChatLib::~ChatLib
// ----------------------------------------------------------------------------
void chatv2::ChatLib::Destroy(chatv2::ChatLib::Self *self)
{
  volatile int32_t *v1;

  v1 = *((volatile int32_t **)self + 1);
  if ( v1 != nullptr && __sync_fetch_and_add(v1 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v1, 8);
    if ( __sync_fetch_and_add(v1 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v1, 12);
  }
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::Initialize  (binary VA: 0x12298c0)
// Original: chatv2::ChatLib::Initialize
// ----------------------------------------------------------------------------
int chatv2::ChatLib::Initialize(int *a1, int a2, int a3)
{
  Json::Value::Self *v3;
  void *v4;
  Json::Value::Self *v5;
  void *v6;
  int Instance;
  int v8;
  void *v10;
  void *v11;
  int v12;
  typedef gaia::Gaia::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16[3];
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint8_t _g4_t_v20[16];
  typedef uint8_t _g4_t_v21[16];
  typedef uint8_t _g4_t_v22[68];
  typedef uint8_t _g4_t_v23[80];
  enum : size_t {
    _g4_s0 = 352u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v14)) > _g4_s1 ? (52u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v15)) > _g4_s2 ? (64u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (72u + sizeof(_g4_t_v16)) > _g4_s3 ? (72u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (84u + sizeof(_g4_t_v17)) > _g4_s4 ? (84u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (88u + sizeof(_g4_t_v18)) > _g4_s5 ? (88u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (92u + sizeof(_g4_t_v19)) > _g4_s6 ? (92u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (96u + sizeof(_g4_t_v20)) > _g4_s7 ? (96u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (112u + sizeof(_g4_t_v21)) > _g4_s8 ? (112u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (128u + sizeof(_g4_t_v22)) > _g4_s9 ? (128u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (196u + sizeof(_g4_t_v23)) > _g4_s10 ? (196u + sizeof(_g4_t_v23)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 52u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 72u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 84u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 88u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 92u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 96u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 112u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 128u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 196u);

  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v22);
  Json::Value::Construct((Json::Value::Self *)v20, 19);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "accountType", (int)(uintptr_t)(&v15));
  v3 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v22, &v17);
  Json::Value::opAssign(v3, (const Json::Value::Self *)v20);
  v4 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  Json::Value::Destroy((Json::Value::Self *)v20);
  Json::Value::Construct((Json::Value::Self *)v21, "chat");
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "scope", (int)(uintptr_t)(&v15) + 1);
  v5 = (Json::Value::Self *)gaia::GaiaRequest::opIndex(v22, &v18);
  Json::Value::opAssign(v5, (const Json::Value::Self *)v21);
  v6 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  Json::Value::Destroy((Json::Value::Self *)v21);
  gaia::GaiaRequest::Construct((gaia::GaiaRequest::Self *)v23, (const gaia::GaiaRequest::Self *)v22);
  Instance = gaia::Gaia::GetInstance(v13);
  v14 = gaia::Gaia::Authorize(Instance, (gaia::GaiaRequest::Self *)v23);
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v23);
  v8 = 0;
  if ( v14 == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v16), " ChatLib initialize\n", (int)(uintptr_t)(&v15) + 3);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "ChatLib", (int)(uintptr_t)(&v15) + 2);
    chatv2::Utils::Log(3, 0, &v19, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/ChatLib.cpp", 30, v16);
    v10 = (void *)(v19 - 12);
    if ( (uint32_t *)(v19 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v16[0] - 12);
    if ( (uint32_t *)(v16[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v16[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = *a1;
    if ( *a1 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
      v12 = *a1;
    }
    v8 = 1;
    chatv2::Core::ChatLibEngine::Initialize(v12, a2, a3);
  }
  gaia::GaiaRequest::Destroy((gaia::GaiaRequest::Self *)v22);
  return v8;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::ChangeNickname  (binary VA: 0x1229ba0)
// Original: chatv2::ChatLib::ChangeNickname
// ----------------------------------------------------------------------------
int chatv2::ChatLib::ChangeNickname(int *a1, uint32_t *a2)
{
  int result;
  int *v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  typedef int _g4_t_v9;
  typedef volatile int32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef int **_g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  result = -14;
  v15 = &a1;
  v3 = a1;
  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    if ( *a1 == 0 )
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
    chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v13);
    v4 = v13;
    if ( v13 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
        "px != 0");
      v4 = v13;
    }
    (*(void (**)(int *))(*(uint32_t *)v4 + 12))(&v9);
    v5 = v14;
    if ( v14 != nullptr && __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 8);
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v5, 12);
    }
    v11 = v9;
    v12 = v10;
    if ( v10 != nullptr )
      __sync_add_and_fetch(v10 + 1, 1);
    v6 = *v3;
    if ( *v3 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
      v6 = *v3;
    }
    chatv2::Core::ChatLibEngine::AddRequest(v6, &v11);
    v7 = v12;
    if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
    v8 = v10;
    result = 0;
    if ( v10 != nullptr && __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v8, 8);
      result = 0;
      if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 12);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::Mute  (binary VA: 0x1229dc0)
// Original: chatv2::ChatLib::Mute
// ----------------------------------------------------------------------------
int chatv2::ChatLib::Mute(int *a1, uint32_t *a2)
{
  int v2;

  v2 = *a1;
  if ( *a1 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
    v2 = *a1;
  }
  return chatv2::Core::ChatLibEngine::Mute(v2, a2);
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::UnMute  (binary VA: 0x1229e30)
// Original: chatv2::ChatLib::UnMute
// ----------------------------------------------------------------------------
int chatv2::ChatLib::UnMute(chatv2::Core::ChatLibEngine::Self **self)
{
  chatv2::Core::ChatLibEngine::Self *v1;

  v1 = *self;
  if ( *self == nullptr )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
    v1 = *self;
  }
  return chatv2::Core::ChatLibEngine::UnMute(v1);
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::GetResponse  (binary VA: 0x1229ea0)
// Original: chatv2::ChatLib::GetResponse
// ----------------------------------------------------------------------------
chatv2::ChatLib::Self * chatv2::ChatLib::GetResponse(chatv2::ChatLib::Self *self, uint32_t *a2)
{
  if ( *a2 == 0 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
  chatv2::Core::ChatLibEngine::GetResponse(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::LeaveChatRoom  (binary VA: 0x1229f20)
// Original: chatv2::ChatLib::LeaveChatRoom
// ----------------------------------------------------------------------------
int chatv2::ChatLib::LeaveChatRoom(int *a1, uint32_t *a2)
{
  int result;
  int *v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  typedef int _g4_t_v9;
  typedef volatile int32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef int **_g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  result = -12;
  v15 = &a1;
  v3 = a1;
  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    if ( *a1 == 0 )
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
    chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v13);
    v4 = v13;
    if ( v13 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
        "px != 0");
      v4 = v13;
    }
    (*(void (**)(int *))(*(uint32_t *)v4 + 16))(&v9);
    v5 = v14;
    if ( v14 != nullptr && __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 8);
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v5, 12);
    }
    v11 = v9;
    v12 = v10;
    if ( v10 != nullptr )
      __sync_add_and_fetch(v10 + 1, 1);
    v6 = *v3;
    if ( *v3 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
      v6 = *v3;
    }
    chatv2::Core::ChatLibEngine::AddRequest(v6, &v11);
    v7 = v12;
    if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
    v8 = v10;
    result = 0;
    if ( v10 != nullptr && __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v8, 8);
      result = 0;
      if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 12);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::LeaveChannel  (binary VA: 0x122a140)
// Original: chatv2::ChatLib::LeaveChannel
// ----------------------------------------------------------------------------
int chatv2::ChatLib::LeaveChannel(int *a1, uint32_t *a2)
{
  int result;
  int *v3;
  int v4;
  volatile int32_t *v5;
  int v6;
  volatile int32_t *v7;
  volatile int32_t *v8;
  typedef int _g4_t_v9;
  typedef volatile int32_t *_g4_t_v10;
  typedef int _g4_t_v11;
  typedef volatile int32_t *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef int **_g4_t_v15;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v11)) > _g4_s2 ? (20u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v12)) > _g4_s3 ? (24u + sizeof(_g4_t_v12)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v14)) > _g4_s5 ? (32u + sizeof(_g4_t_v14)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v15)) > _g4_s6 ? (44u + sizeof(_g4_t_v15)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 20u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 24u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);

  result = -11;
  v15 = &a1;
  v3 = a1;
  if ( *(uint32_t *)(*a2 - 12) != 0 )
  {
    if ( *a1 == 0 )
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
    chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v13);
    v4 = v13;
    if ( v13 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
        "px != 0");
      v4 = v13;
    }
    (*(void (**)(int *))(*(uint32_t *)v4 + 16))(&v9);
    v5 = v14;
    if ( v14 != nullptr && __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v5, 8);
      if ( __sync_fetch_and_add(v5 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v5, 12);
    }
    v11 = v9;
    v12 = v10;
    if ( v10 != nullptr )
      __sync_add_and_fetch(v10 + 1, 1);
    v6 = *v3;
    if ( *v3 == 0 )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Cor"
        "e::ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
        "px != 0");
      v6 = *v3;
    }
    chatv2::Core::ChatLibEngine::AddRequest(v6, &v11);
    v7 = v12;
    if ( v12 != nullptr && __sync_fetch_and_add(v12 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v7, 8);
      if ( __sync_fetch_and_add(v7 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v7, 12);
    }
    v8 = v10;
    result = 0;
    if ( v10 != nullptr && __sync_fetch_and_add(v10 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v8, 8);
      result = 0;
      if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 12);
        return 0;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::SendInvitation  (binary VA: 0x122a360)
// Original: chatv2::ChatLib::SendInvitation
// ----------------------------------------------------------------------------
int chatv2::ChatLib::SendInvitation(int *a1, uint32_t *a2, uint32_t *a3)
{
  int result;
  size_t v4;
  char v5;
  const char *v6;
  int v7;
  size_t v8;
  const char *v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  uint32_t *v16;
  int v17;
  size_t v18;
  char v19;
  void *v20;
  void *v21;
  void *v22;
  int v23;
  volatile int32_t *v24;
  int v25;
  volatile int32_t *v26;
  volatile int32_t *v27;
  int v28;
  uint32_t *v29;
  int v30;
  size_t v31;
  char v32;
  int v33;
  int v34;
  typedef size_t _g4_t_v35;
  typedef uint32_t *_g4_t_v36;
  typedef uint32_t *_g4_t_v37;
  typedef char _g4_t_v38;
  typedef char _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t *_g4_t_v41;
  typedef int *_g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef size_t _g4_t_v44;
  typedef size_t _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef size_t _g4_t_v48;
  typedef const char *_g4_t_v49;
  typedef size_t _g4_t_v50;
  typedef int _g4_t_v51;
  typedef uint32_t _g4_t_v52[4];
  typedef int _g4_t_v53[3];
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef volatile int32_t *_g4_t_v56;
  typedef int _g4_t_v57;
  typedef volatile int32_t *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef volatile int32_t *_g4_t_v60;
  typedef int **_g4_t_v61;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v36)) > _g4_s1 ? (0u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v37)) > _g4_s2 ? (0u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v38)) > _g4_s3 ? (4u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v39)) > _g4_s4 ? (4u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v40)) > _g4_s5 ? (8u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v41)) > _g4_s6 ? (12u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v42)) > _g4_s7 ? (16u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v43)) > _g4_s8 ? (20u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v44)) > _g4_s9 ? (24u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (24u + sizeof(_g4_t_v45)) > _g4_s10 ? (24u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (28u + sizeof(_g4_t_v46)) > _g4_s11 ? (28u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v47)) > _g4_s12 ? (28u + sizeof(_g4_t_v47)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v48)) > _g4_s13 ? (28u + sizeof(_g4_t_v48)) : _g4_s13,
    _g4_s15 = (32u + sizeof(_g4_t_v49)) > _g4_s14 ? (32u + sizeof(_g4_t_v49)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v50)) > _g4_s15 ? (32u + sizeof(_g4_t_v50)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v51)) > _g4_s16 ? (48u + sizeof(_g4_t_v51)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v52)) > _g4_s17 ? (52u + sizeof(_g4_t_v52)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v53)) > _g4_s18 ? (68u + sizeof(_g4_t_v53)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v54)) > _g4_s19 ? (80u + sizeof(_g4_t_v54)) : _g4_s19,
    _g4_s21 = (84u + sizeof(_g4_t_v55)) > _g4_s20 ? (84u + sizeof(_g4_t_v55)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v56)) > _g4_s21 ? (88u + sizeof(_g4_t_v56)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v57)) > _g4_s22 ? (100u + sizeof(_g4_t_v57)) : _g4_s22,
    _g4_s24 = (104u + sizeof(_g4_t_v58)) > _g4_s23 ? (104u + sizeof(_g4_t_v58)) : _g4_s23,
    _g4_s25 = (108u + sizeof(_g4_t_v59)) > _g4_s24 ? (108u + sizeof(_g4_t_v59)) : _g4_s24,
    _g4_s26 = (112u + sizeof(_g4_t_v60)) > _g4_s25 ? (112u + sizeof(_g4_t_v60)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v61)) > _g4_s26 ? (124u + sizeof(_g4_t_v61)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 0u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 4u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 8u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 12u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 16u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 20u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 48u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 68u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 80u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 84u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 88u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 100u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 104u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 108u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 112u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 124u);

  v61 = &a1;
  v43 = a2;
  v42 = a1;
  v41 = a3;
  result = -12;
  if ( *(uint32_t *)(*a2 - 12) == 0 )
    return result;
  v4 = 0;
  v53[0] = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(v53), 0x80u, 0);
  v40 = 0;
  v5 = aChatlibSendInv /* " ChatLib send Invite to  user: {0}, on room: ..." */[0];
  v49 = " ChatLib send Invite to  user: {0}, on room: {1}\n";
  v6 = " ChatLib send Invite to  user: {0}, on room: {1}\n";
  while ( 1 )
  {
    v9 = v6 + 1;
    if ( v5 != 123 )
    {
      v7 = v53[0];
      v8 = v4 + 1;
      if ( v4 + 1 > *(uint32_t *)(v53[0] - 12) )
      {
        v38 = v5;
        sub_1939D80((int)(uintptr_t)(v53), v4 + 65, 0);
        v7 = v53[0];
        v8 = v4 + 1;
        v5 = v38;
      }
      if ( *(int *)(v7 - 4) >= 0 )
      {
        v39 = v5;
        v35 = v8;
        sub_19397C0(v53);
        v7 = v53[0];
        v8 = v35;
        v5 = v39;
      }
      *(uint8_t *)(v7 + v4) = v5;
      v49 = v9;
      v4 = v8;
      goto LABEL_8;
    }
    v10 = v49[1];
    if ( v10 == 123 )
    {
      v33 = v53[0];
      if ( v4 + 2 > *(uint32_t *)(v53[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v53), v4 + 66, 0);
        v33 = v53[0];
      }
      v48 = v4 + 1;
      if ( *(int *)(v33 - 4) >= 0 )
      {
        sub_19397C0(v53);
        v33 = v53[0];
      }
      *(uint8_t *)(v33 + v4) = 123;
      v34 = v53[0];
      if ( *(int *)(v53[0] - 4) >= 0 )
      {
        sub_19397C0(v53);
        v34 = v53[0];
      }
      v49 += 2;
      v4 += 2;
      *(uint8_t *)(v34 + v48) = 123;
      goto LABEL_8;
    }
    if ( v10 == 0 )
      goto LABEL_47;
    v50 = v4;
    v11 = 1;
    v12 = 0;
    while ( 1 )
    {
      v10 = *v9;
      if ( (uint8_t)(*v9 - 48) > 9u )
        break;
      v13 = v11 * v12;
      ++v9;
      v11 *= 10;
      v12 = v13 + v10 - 48;
      if ( *v9 == 0 )
      {
        v14 = v12;
        v10 = 0;
        v4 = v50;
        goto LABEL_16;
      }
    }
    v14 = v12;
    v4 = v50;
    if ( v11 == 1 )
LABEL_47:
      v14 = v40++;
    if ( v10 == 58 )
    {
      v10 = v9[1];
      if ( v10 == 120 || v10 == 88 )
      {
        v10 = v9[2];
        v49 = v9 + 3;
      }
      else
      {
        v49 = v9 + 2;
      }
    }
    else
    {
LABEL_16:
      v49 = v9 + 1;
    }
    if ( v10 != 125 )
      break;
    if ( v14 != 0 )
    {
      if ( v14 == 1 )
      {
        v47 = *(uint32_t *)(*v43 - 12);
        if ( v4 + v47 > *(uint32_t *)(v53[0] - 12) )
        {
          sub_1939D80((int)(uintptr_t)(v53), v4 + v47 + 64, 0);
          v47 = *(uint32_t *)(*v43 - 12);
        }
        if ( v47 != 0 )
        {
          v28 = 0;
          v45 = v4;
          v29 = v43;
          do
          {
            v30 = v53[0];
            v31 = v28 + v45;
            if ( *(int *)(v53[0] - 4) >= 0 )
            {
              v37 = v29;
              sub_19397C0(v53);
              v30 = v53[0];
              v29 = v37;
            }
            v32 = *(uint8_t *)(*v29 + v28++);
            *(uint8_t *)(v30 + v31) = v32;
          }
          while ( v28 != v47 );
          v4 = v28 + v45;
          goto LABEL_27;
        }
      }
      else
      {
        sub_1939D80((int)(uintptr_t)(v53), v4, 0);
      }
LABEL_8:
      v6 = v49;
      v5 = *v49;
      if ( *v49 == 0 )
        goto LABEL_28;
    }
    else
    {
      v46 = *(uint32_t *)(*v41 - 12);
      if ( v4 + v46 > *(uint32_t *)(v53[0] - 12) )
      {
        sub_1939D80((int)(uintptr_t)(v53), v4 + v46 + 64, 0);
        v46 = *(uint32_t *)(*v41 - 12);
      }
      if ( v46 == 0 )
        goto LABEL_8;
      v15 = 0;
      v44 = v4;
      v16 = v41;
      do
      {
        v17 = v53[0];
        v18 = v15 + v44;
        if ( *(int *)(v53[0] - 4) >= 0 )
        {
          v36 = v16;
          sub_19397C0(v53);
          v17 = v53[0];
          v16 = v36;
        }
        v19 = *(uint8_t *)(*v16 + v15++);
        *(uint8_t *)(v17 + v18) = v19;
      }
      while ( v15 != v46 );
      v4 = v15 + v44;
LABEL_27:
      v6 = v49;
      v5 = *v49;
      if ( *v49 == 0 )
        goto LABEL_28;
    }
  }
  sub_1939D80((int)(uintptr_t)(v53), v4, 0);
LABEL_28:
  sub_1939D80((int)(uintptr_t)(v53), v4, 0);
  g4_std::string::construct_copy(v52, v53);
  v20 = (void *)(v53[0] - 12);
  if ( (uint32_t *)(v53[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v54), "ChatLib", (int)(uintptr_t)(&v51));
  chatv2::Utils::Log(3, 0, &v54, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/ChatLib.cpp", 146, v52);
  v21 = (void *)(v54 - 12);
  if ( (uint32_t *)(v54 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v54 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  v22 = (void *)(v52[0] - 12);
  if ( (uint32_t *)(v52[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v52[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  if ( *v42 == 0 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
  chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v59);
  v23 = v59;
  if ( v59 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
      "px != 0");
    v23 = v59;
  }
  (*(void (**)(int *))(*(uint32_t *)v23 + 20))(&v55);
  v24 = v60;
  if ( v60 != nullptr && __sync_fetch_and_add(v60 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v24, 8);
    if ( __sync_fetch_and_add(v24 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v24, 12);
  }
  v57 = v55;
  v58 = v56;
  if ( v56 != nullptr )
    __sync_add_and_fetch(v56 + 1, 1);
  v25 = *v42;
  if ( *v42 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
    v25 = *v42;
  }
  chatv2::Core::ChatLibEngine::AddRequest(v25, &v57);
  v26 = v58;
  if ( v58 != nullptr && __sync_fetch_and_add(v58 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v26, 8);
    if ( __sync_fetch_and_add(v26 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v26, 12);
  }
  v27 = v56;
  result = 0;
  if ( v56 != nullptr && __sync_fetch_and_add(v56 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v27, 8);
    result = 0;
    if ( __sync_fetch_and_add(v27 + 2, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v27, 12);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::JoinChatRoom  (binary VA: 0x122aa90)
// Original: chatv2::ChatLib::JoinChatRoom
// ----------------------------------------------------------------------------
int chatv2::ChatLib::JoinChatRoom(int *a1, uint32_t *a2)
{
  int *v2;
  int result;
  void *v4;
  void *v5;
  int v6;
  void *v7;
  void *v8;
  volatile int32_t *v9;
  int v10;
  volatile int32_t *v11;
  volatile int32_t *v12;
  typedef void (*_g4_t_v13)(int *);
  typedef int _g4_t_v14;
  typedef uint32_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef volatile int32_t *_g4_t_v24;
  typedef int **_g4_t_v25;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v13)) > _g4_s0 ? (12u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (25u + sizeof(_g4_t_v14)) > _g4_s1 ? (25u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v15)) > _g4_s2 ? (32u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v16)) > _g4_s3 ? (48u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (56u + sizeof(_g4_t_v17)) > _g4_s4 ? (56u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (60u + sizeof(_g4_t_v18)) > _g4_s5 ? (60u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (64u + sizeof(_g4_t_v19)) > _g4_s6 ? (64u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (68u + sizeof(_g4_t_v20)) > _g4_s7 ? (68u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (80u + sizeof(_g4_t_v21)) > _g4_s8 ? (80u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (84u + sizeof(_g4_t_v22)) > _g4_s9 ? (84u + sizeof(_g4_t_v22)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v23)) > _g4_s10 ? (96u + sizeof(_g4_t_v23)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v24)) > _g4_s11 ? (100u + sizeof(_g4_t_v24)) : _g4_s11,
    _g4_s13 = (120u + sizeof(_g4_t_v25)) > _g4_s12 ? (120u + sizeof(_g4_t_v25)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 25u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 56u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 60u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 84u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 96u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 100u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 120u);

  v25 = &a1;
  v2 = a1;
  if ( *(uint32_t *)(*a2 - 12) == 0 )
    return -12;
  jcore::Format_string_char_25_string_481dfd(v15);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "ChatLib", (int)(uintptr_t)(&v14));
  chatv2::Utils::Log(3, 0, &v17, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/ChatLib.cpp", 68, v15);
  v4 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v15[0] - 12);
  if ( (uint32_t *)(v15[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( *v2 == 0 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
  chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v21);
  v6 = v21;
  if ( v21 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
      "px != 0");
    v6 = v21;
  }
  v13 = *(void (**)(int *))(*(uint32_t *)v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), (char *)&unk_1B15112, (int)(uintptr_t)(&v14) + 1);
  v13(&v19);
  v7 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = v22;
  if ( v22 != nullptr && __sync_fetch_and_add(v22 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v9, 8);
    if ( __sync_fetch_and_add(v9 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v9, 12);
  }
  v23 = v19;
  v24 = v20;
  if ( v20 != nullptr )
    __sync_add_and_fetch(v20 + 1, 1);
  v10 = *v2;
  if ( *v2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
    v10 = *v2;
  }
  chatv2::Core::ChatLibEngine::AddRequest(v10, &v23);
  v11 = v24;
  if ( v24 != nullptr )
  {
    result = __sync_fetch_and_add(v24 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v11, 8);
      if ( __sync_fetch_and_add(v11 + 2, 0xFFFFFFFF) == 1 )
        result = G4_VCALL<int>(v11, 12);
    }
  }
  v12 = v20;
  if ( v20 != nullptr )
  {
    result = __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v12, 8);
      if ( __sync_fetch_and_add(v12 + 2, 0xFFFFFFFF) == 1 )
        return G4_VCALL<int>(v12, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::JoinChannel  (binary VA: 0x122ae70)
// Original: chatv2::ChatLib::JoinChannel
// ----------------------------------------------------------------------------
int chatv2::ChatLib::JoinChannel(int *a1, uint32_t *a2)
{
  int *v2;
  int result;
  void *v4;
  void *v5;
  int v6;
  void *v7;
  volatile int32_t *v8;
  int v9;
  volatile int32_t *v10;
  volatile int32_t *v11;
  typedef void (*_g4_t_v12)(int *);
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[2];
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  typedef int _g4_t_v19;
  typedef volatile int32_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef volatile int32_t *_g4_t_v22;
  typedef int **_g4_t_v23;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v13)) > _g4_s1 ? (27u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v15)) > _g4_s3 ? (40u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v16)) > _g4_s4 ? (44u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v17)) > _g4_s5 ? (48u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v18)) > _g4_s6 ? (52u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v19)) > _g4_s7 ? (64u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v20)) > _g4_s8 ? (68u + sizeof(_g4_t_v20)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v21)) > _g4_s9 ? (80u + sizeof(_g4_t_v21)) : _g4_s9,
    _g4_s11 = (84u + sizeof(_g4_t_v22)) > _g4_s10 ? (84u + sizeof(_g4_t_v22)) : _g4_s10,
    _g4_s12 = (104u + sizeof(_g4_t_v23)) > _g4_s11 ? (104u + sizeof(_g4_t_v23)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 27u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 64u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 68u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 80u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 84u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 104u);

  v23 = &a1;
  v2 = a1;
  if ( *(uint32_t *)(*a2 - 12) == 0 )
    return -11;
  jcore::Format_string_char_28_string_bf9237(v14);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), "ChatLib", (int)(uintptr_t)(&v13));
  chatv2::Utils::Log(3, 0, &v15, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/ChatLib.cpp", 92, v14);
  v4 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v14[0] - 12);
  if ( (uint32_t *)(v14[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  if ( *v2 == 0 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
  chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v19);
  v6 = v19;
  if ( v19 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
      "px != 0");
    v6 = v19;
  }
  v12 = *(void (**)(int *))(*(uint32_t *)v6 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), (char *)&unk_1B15112, (int)(uintptr_t)(&v13) + 1);
  v12(&v17);
  v7 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = v20;
  if ( v20 != nullptr && __sync_fetch_and_add(v20 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v8, 8);
    if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v8, 12);
  }
  v21 = v17;
  v22 = v18;
  if ( v18 != nullptr )
    __sync_add_and_fetch(v18 + 1, 1);
  v9 = *v2;
  if ( *v2 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
    v9 = *v2;
  }
  chatv2::Core::ChatLibEngine::AddRequest(v9, &v21);
  v10 = v22;
  if ( v22 != nullptr )
  {
    result = __sync_fetch_and_add(v22 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v10, 8);
      if ( __sync_fetch_and_add(v10 + 2, 0xFFFFFFFF) == 1 )
        result = G4_VCALL<int>(v10, 12);
    }
  }
  v11 = v18;
  if ( v18 != nullptr )
  {
    result = __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v11, 8);
      if ( __sync_fetch_and_add(v11 + 2, 0xFFFFFFFF) == 1 )
        return G4_VCALL<int>(v11, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::SendChatMessage  (binary VA: 0x122b1f0)
// Original: chatv2::ChatLib::SendChatMessage
// ----------------------------------------------------------------------------
int chatv2::ChatLib::SendChatMessage(uint32_t *a1, uint32_t *a2, int a3, uint32_t *a4)
{
  const char *v4;
  char v5;
  size_t v6;
  int v7;
  size_t v8;
  const char *v9;
  char v10;
  int v11;
  int v12;
  int v13;
  int v14;
  size_t v15;
  int v16;
  uint32_t *v17;
  size_t v18;
  int v19;
  char v20;
  void *v21;
  void *v22;
  void *v23;
  int v24;
  volatile int32_t *v25;
  int v26;
  int result;
  volatile int32_t *v28;
  volatile int32_t *v29;
  size_t v30;
  int v31;
  uint32_t *v32;
  size_t v33;
  int v34;
  char v35;
  size_t v36;
  int v37;
  size_t v38;
  int v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef uint32_t *_g4_t_v43;
  typedef const char *_g4_t_v44;
  typedef int _g4_t_v45;
  typedef uint32_t *_g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef uint32_t *_g4_t_v48;
  typedef int *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef int _g4_t_v55;
  typedef uint32_t _g4_t_v56[4];
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef size_t _g4_t_v59;
  typedef int _g4_t_v60;
  typedef int _g4_t_v61;
  typedef volatile int32_t *_g4_t_v62;
  typedef int _g4_t_v63;
  typedef volatile int32_t *_g4_t_v64;
  typedef int _g4_t_v65;
  typedef volatile int32_t *_g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v40)) > _g4_s0 ? (4u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v41)) > _g4_s1 ? (8u + sizeof(_g4_t_v41)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v42)) > _g4_s2 ? (12u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v43)) > _g4_s3 ? (16u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v44)) > _g4_s4 ? (20u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v45)) > _g4_s5 ? (24u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v46)) > _g4_s6 ? (28u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v47)) > _g4_s7 ? (32u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v48)) > _g4_s8 ? (36u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v49)) > _g4_s9 ? (36u + sizeof(_g4_t_v49)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v50)) > _g4_s10 ? (40u + sizeof(_g4_t_v50)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v51)) > _g4_s11 ? (44u + sizeof(_g4_t_v51)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v52)) > _g4_s12 ? (48u + sizeof(_g4_t_v52)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v53)) > _g4_s13 ? (52u + sizeof(_g4_t_v53)) : _g4_s13,
    _g4_s15 = (56u + sizeof(_g4_t_v54)) > _g4_s14 ? (56u + sizeof(_g4_t_v54)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v55)) > _g4_s15 ? (60u + sizeof(_g4_t_v55)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v56)) > _g4_s16 ? (64u + sizeof(_g4_t_v56)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v57)) > _g4_s17 ? (80u + sizeof(_g4_t_v57)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v58)) > _g4_s18 ? (84u + sizeof(_g4_t_v58)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v59)) > _g4_s19 ? (88u + sizeof(_g4_t_v59)) : _g4_s19,
    _g4_s21 = (92u + sizeof(_g4_t_v60)) > _g4_s20 ? (92u + sizeof(_g4_t_v60)) : _g4_s20,
    _g4_s22 = (96u + sizeof(_g4_t_v61)) > _g4_s21 ? (96u + sizeof(_g4_t_v61)) : _g4_s21,
    _g4_s23 = (100u + sizeof(_g4_t_v62)) > _g4_s22 ? (100u + sizeof(_g4_t_v62)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v63)) > _g4_s23 ? (112u + sizeof(_g4_t_v63)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v64)) > _g4_s24 ? (116u + sizeof(_g4_t_v64)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v65)) > _g4_s25 ? (120u + sizeof(_g4_t_v65)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v66)) > _g4_s26 ? (124u + sizeof(_g4_t_v66)) : _g4_s26,
    _g4_s28 = (136u + sizeof(_g4_t_v67)) > _g4_s27 ? (136u + sizeof(_g4_t_v67)) : _g4_s27
  };
  alignas(16) uint8_t _g4_sf[_g4_s28];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 4u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 24u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 32u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 36u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 36u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 40u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 44u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 48u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 52u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 56u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 60u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 64u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 80u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 84u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 88u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 92u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 96u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 100u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 112u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 116u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 120u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 124u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 136u);

  v67 = (uint32_t *)(&a1);
  v4 = " ChatLib sendMessage: channel: {0}, channel type: {1}, message: {2}\n";
  v47 = a2;
  v48 = a1;
  v45 = a3;
  v46 = a4;
  v57 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v57), 0x80u, 0);
  v59 = 0;
  v50 = 0;
  v5 = aChatlibSendmes /* " ChatLib sendMessage: channel: {0}, channel t..." */[0];
  while ( 1 )
  {
    v9 = v4 + 1;
    if ( v5 != 123 )
    {
      v6 = v59;
      v7 = v57;
      v8 = v59 + 1;
      if ( v59 + 1 > *(uint32_t *)(v57 - 12) )
      {
        LOBYTE(v43) = v5;
        sub_1939D80((int)(uintptr_t)(&v57), v59 + 65, 0);
        v6 = v59;
        v7 = v57;
        v5 = (char)(uintptr_t)(v43);
        v8 = v59 + 1;
      }
      v59 = v8;
      if ( *(int *)(v7 - 4) >= 0 )
      {
        LOBYTE(v43) = v5;
        sub_19397C0(&v57);
        v7 = v57;
        v5 = (char)(uintptr_t)(v43);
      }
      *(uint8_t *)(v7 + v6) = v5;
      v4 = v9;
      goto LABEL_7;
    }
    v10 = v4[1];
    if ( v10 == 123 )
    {
      v36 = v59;
      v37 = v57;
      if ( v59 + 2 > *(uint32_t *)(v57 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v57), v59 + 66, 0);
        v36 = v59;
        v37 = v57;
        ++v59;
        if ( *(int *)(v57 - 4) < 0 )
          goto LABEL_66;
      }
      else
      {
        ++v59;
        if ( *(int *)(v57 - 4) < 0 )
        {
LABEL_66:
          *(uint8_t *)(v37 + v36) = 123;
          v38 = v59++;
          v39 = v57;
          if ( *(int *)(v57 - 4) >= 0 )
          {
            sub_19397C0(&v57);
            v39 = v57;
          }
          *(uint8_t *)(v39 + v38) = 123;
          v4 += 2;
          goto LABEL_7;
        }
      }
      sub_19397C0(&v57);
      v37 = v57;
      goto LABEL_66;
    }
    v60 = 538181632;
    if ( v10 == 0 )
      goto LABEL_47;
    v11 = 1;
    v12 = 0;
    while ( 1 )
    {
      v10 = *v9;
      if ( (uint8_t)(*v9 - 48) > 9u )
        break;
      v13 = v11 * v12;
      ++v9;
      v11 *= 10;
      v12 = v13 + v10 - 48;
      if ( *v9 == 0 )
      {
        v14 = v12;
        v10 = 0;
        goto LABEL_15;
      }
    }
    v14 = v12;
    if ( v11 == 1 )
LABEL_47:
      v14 = v50++;
    if ( v10 == 58 )
    {
      v10 = v9[1];
      if ( v10 == 120 )
      {
        v4 = v9 + 3;
        BYTE2(v60) = BYTE2(v60) & 1 | 0x20;
        v10 = v9[2];
      }
      else
      {
        v4 = v9 + 2;
        if ( v10 == 88 )
        {
          BYTE2(v60) = 33;
          v4 = v9 + 3;
          v10 = v9[2];
        }
      }
    }
    else
    {
LABEL_15:
      v4 = v9 + 1;
    }
    if ( v10 != 125 )
      break;
    if ( v14 == 1 )
    {
      jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315(&v57, &v59, &v60, v45);
      goto LABEL_7;
    }
    if ( v14 != 0 )
    {
      if ( v14 == 2 )
      {
        v30 = *(uint32_t *)(*v46 - 12) + v59;
        v51 = *(uint32_t *)(*v46 - 12);
        if ( v30 > *(uint32_t *)(v57 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v57), v30 + 64, 0);
          v51 = *(uint32_t *)(*v46 - 12);
        }
        if ( v51 != 0 )
        {
          v31 = 0;
          v44 = v4;
          v32 = v46;
          do
          {
            v33 = v59++;
            v34 = v57;
            if ( *(int *)(v57 - 4) >= 0 )
            {
              v43 = v32;
              sub_19397C0(&v57);
              v34 = v57;
              v32 = v43;
            }
            v35 = *(uint8_t *)(*v32 + v31++);
            *(uint8_t *)(v34 + v33) = v35;
          }
          while ( v31 != v51 );
          v4 = v44;
          goto LABEL_27;
        }
      }
      else
      {
        sub_1939D80((int)(uintptr_t)(&v57), v59, 0);
      }
LABEL_7:
      v5 = *v4;
      if ( *v4 == 0 )
        goto LABEL_28;
    }
    else
    {
      v15 = *(uint32_t *)(*v47 - 12) + v59;
      v51 = *(uint32_t *)(*v47 - 12);
      if ( v15 > *(uint32_t *)(v57 - 12) )
      {
        sub_1939D80((int)(uintptr_t)(&v57), v15 + 64, 0);
        v51 = *(uint32_t *)(*v47 - 12);
      }
      if ( v51 == 0 )
        goto LABEL_7;
      v16 = 0;
      v44 = v4;
      v17 = v47;
      do
      {
        v18 = v59++;
        v19 = v57;
        if ( *(int *)(v57 - 4) >= 0 )
        {
          v43 = v17;
          sub_19397C0(&v57);
          v19 = v57;
          v17 = v43;
        }
        v20 = *(uint8_t *)(*v17 + v16++);
        *(uint8_t *)(v19 + v18) = v20;
      }
      while ( v16 != v51 );
      v4 = v44;
LABEL_27:
      v5 = *v4;
      if ( *v4 == 0 )
        goto LABEL_28;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v57), v59, 0);
LABEL_28:
  sub_1939D80((int)(uintptr_t)(&v57), v59, 0);
  g4_std::string::construct_copy(v56, &v57);
  v21 = (void *)(v57 - 12);
  if ( (uint32_t *)(v57 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v57 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v21);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v58), "ChatLib", (int)(uintptr_t)(&v55));
  chatv2::Utils::Log(3, 0, &v58, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/ChatLib.cpp", 133, v56);
  v22 = (void *)(v58 - 12);
  if ( (uint32_t *)(v58 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v58 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v22);
  }
  v23 = (void *)(v56[0] - 12);
  if ( (uint32_t *)(v56[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v56[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v23);
  }
  if ( *v48 == 0 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
  chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v65);
  v24 = v65;
  if ( v65 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
      "px != 0");
    v24 = v65;
  }
  (*(void (**)(int *, int, uint32_t *, int, uint32_t *, int, int, int, uint32_t *, const char *, int, uint32_t *, uint32_t *, uint32_t *, int, int, int, int, int, int, uint32_t, uint32_t, uint32_t, uint32_t, int, int, size_t, int))(*(uint32_t *)v24 + 8))(
    &v61,
    v24,
    v47,
    v45,
    v46,
    v40,
    v41,
    v42,
    v43,
    v44,
    v45,
    v46,
    v47,
    v48,
    v50,
    v51,
    v52,
    v53,
    v54,
    v55,
    v56[0],
    v56[1],
    v56[2],
    v56[3],
    v57,
    v58,
    v59,
    v60);
  v25 = v66;
  if ( v66 != nullptr && __sync_fetch_and_add(v66 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v25, 8);
    if ( __sync_fetch_and_add(v25 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v25, 12);
  }
  v63 = v61;
  v64 = v62;
  if ( v62 != nullptr )
    __sync_add_and_fetch(v62 + 1, 1);
  v26 = *v49;
  if ( *v49 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
    v26 = *v49;
  }
  chatv2::Core::ChatLibEngine::AddRequest(v26, &v63);
  v28 = v64;
  if ( v64 != nullptr )
  {
    result = __sync_fetch_and_add(v64 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v28, 8);
      if ( __sync_fetch_and_add(v28 + 2, 0xFFFFFFFF) == 1 )
        result = G4_VCALL<int>(v28, 12);
    }
  }
  v29 = v62;
  if ( v62 != nullptr )
  {
    result = __sync_fetch_and_add(v62 + 1, 0xFFFFFFFF);
    if ( result == 1 )
    {
      result = G4_VCALL<int>(v29, 8);
      if ( __sync_fetch_and_add(v29 + 2, 0xFFFFFFFF) == 1 )
        return G4_VCALL<int>(v29, 12);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::SendChatChannelMessage  (binary VA: 0x122b950)
// Original: chatv2::ChatLib::SendChatChannelMessage
// ----------------------------------------------------------------------------
int chatv2::ChatLib::SendChatChannelMessage(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  return chatv2::ChatLib::SendChatMessage(a1, a2, 1, a3);
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::SendChatRoomMessage  (binary VA: 0x122b990)
// Original: chatv2::ChatLib::SendChatRoomMessage
// ----------------------------------------------------------------------------
int chatv2::ChatLib::SendChatRoomMessage(uint32_t *a1, uint32_t *a2, uint32_t *a3)
{
  return chatv2::ChatLib::SendChatMessage(a1, a2, 0, a3);
}

// ----------------------------------------------------------------------------
// Function: chatv2::ChatLib::ReportUser  (binary VA: 0x122b9d0)
// Original: chatv2::ChatLib::ReportUser
// ----------------------------------------------------------------------------
int chatv2::ChatLib::ReportUser(int *a1, uint32_t *a2, int a3, chatv2::Core::ArionUser::Self *a4, int a5, uint32_t *a6)
{
  int v6;
  const char *v7;
  char v8;
  size_t v9;
  int v10;
  size_t v11;
  const char *v12;
  char v13;
  int v14;
  int v15;
  int v16;
  int v17;
  void *v18;
  void *v19;
  void *v20;
  int v21;
  volatile int32_t *v22;
  int v23;
  volatile int32_t *v24;
  volatile int32_t *v25;
  size_t v27;
  int v28;
  size_t v29;
  int v30;
  int v31;
  uint32_t *v32;
  size_t v33;
  int v34;
  char v35;
  int v36;
  uint32_t *v37;
  size_t v38;
  int v39;
  char v40;
  int v41;
  int v42;
  uint32_t *v43;
  size_t v44;
  int v45;
  char v46;
  int v47;
  uint32_t *v48;
  size_t v49;
  int v50;
  char v51;
  typedef char _g4_t_v52;
  typedef char _g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t *_g4_t_v55;
  typedef uint32_t *_g4_t_v56;
  typedef uint32_t *_g4_t_v57;
  typedef uint32_t *_g4_t_Nickname;
  typedef uint32_t *_g4_t_Credential;
  typedef const char *_g4_t_v60;
  typedef const char *_g4_t_v61;
  typedef const char *_g4_t_v62;
  typedef const char *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef uint32_t *_g4_t_v66;
  typedef int *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef uint32_t *_g4_t_v69;
  typedef chatv2::Core::ArionUser::Self *_g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef uint32_t _g4_t_v76[4];
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef size_t _g4_t_v79;
  typedef uint8_t _g4_t_v80[2];
  typedef char _g4_t_v81;
  typedef char _g4_t_v82;
  typedef int _g4_t_v83;
  typedef volatile int32_t *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef volatile int32_t *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef volatile int32_t *_g4_t_v88;
  typedef int **_g4_t_v89;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (0u + sizeof(_g4_t_v52)) > _g4_s0 ? (0u + sizeof(_g4_t_v52)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v53)) > _g4_s1 ? (0u + sizeof(_g4_t_v53)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v54)) > _g4_s2 ? (0u + sizeof(_g4_t_v54)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v55)) > _g4_s3 ? (0u + sizeof(_g4_t_v55)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v56)) > _g4_s4 ? (0u + sizeof(_g4_t_v56)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v57)) > _g4_s5 ? (0u + sizeof(_g4_t_v57)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_Nickname)) > _g4_s6 ? (4u + sizeof(_g4_t_Nickname)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_Credential)) > _g4_s7 ? (8u + sizeof(_g4_t_Credential)) : _g4_s7,
    _g4_s9 = (12u + sizeof(_g4_t_v60)) > _g4_s8 ? (12u + sizeof(_g4_t_v60)) : _g4_s8,
    _g4_s10 = (12u + sizeof(_g4_t_v61)) > _g4_s9 ? (12u + sizeof(_g4_t_v61)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v62)) > _g4_s10 ? (12u + sizeof(_g4_t_v62)) : _g4_s10,
    _g4_s12 = (12u + sizeof(_g4_t_v63)) > _g4_s11 ? (12u + sizeof(_g4_t_v63)) : _g4_s11,
    _g4_s13 = (20u + sizeof(_g4_t_v64)) > _g4_s12 ? (20u + sizeof(_g4_t_v64)) : _g4_s12,
    _g4_s14 = (24u + sizeof(_g4_t_v65)) > _g4_s13 ? (24u + sizeof(_g4_t_v65)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v66)) > _g4_s14 ? (28u + sizeof(_g4_t_v66)) : _g4_s14,
    _g4_s16 = (32u + sizeof(_g4_t_v67)) > _g4_s15 ? (32u + sizeof(_g4_t_v67)) : _g4_s15,
    _g4_s17 = (36u + sizeof(_g4_t_v68)) > _g4_s16 ? (36u + sizeof(_g4_t_v68)) : _g4_s16,
    _g4_s18 = (40u + sizeof(_g4_t_v69)) > _g4_s17 ? (40u + sizeof(_g4_t_v69)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v70)) > _g4_s18 ? (44u + sizeof(_g4_t_v70)) : _g4_s18,
    _g4_s20 = (48u + sizeof(_g4_t_v71)) > _g4_s19 ? (48u + sizeof(_g4_t_v71)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v72)) > _g4_s20 ? (48u + sizeof(_g4_t_v72)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v73)) > _g4_s21 ? (48u + sizeof(_g4_t_v73)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v74)) > _g4_s22 ? (48u + sizeof(_g4_t_v74)) : _g4_s22,
    _g4_s24 = (64u + sizeof(_g4_t_v75)) > _g4_s23 ? (64u + sizeof(_g4_t_v75)) : _g4_s23,
    _g4_s25 = (68u + sizeof(_g4_t_v76)) > _g4_s24 ? (68u + sizeof(_g4_t_v76)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v77)) > _g4_s25 ? (84u + sizeof(_g4_t_v77)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v78)) > _g4_s26 ? (88u + sizeof(_g4_t_v78)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v79)) > _g4_s27 ? (92u + sizeof(_g4_t_v79)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v80)) > _g4_s28 ? (96u + sizeof(_g4_t_v80)) : _g4_s28,
    _g4_s30 = (98u + sizeof(_g4_t_v81)) > _g4_s29 ? (98u + sizeof(_g4_t_v81)) : _g4_s29,
    _g4_s31 = (99u + sizeof(_g4_t_v82)) > _g4_s30 ? (99u + sizeof(_g4_t_v82)) : _g4_s30,
    _g4_s32 = (100u + sizeof(_g4_t_v83)) > _g4_s31 ? (100u + sizeof(_g4_t_v83)) : _g4_s31,
    _g4_s33 = (104u + sizeof(_g4_t_v84)) > _g4_s32 ? (104u + sizeof(_g4_t_v84)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v85)) > _g4_s33 ? (116u + sizeof(_g4_t_v85)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v86)) > _g4_s34 ? (120u + sizeof(_g4_t_v86)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v87)) > _g4_s35 ? (124u + sizeof(_g4_t_v87)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v88)) > _g4_s36 ? (128u + sizeof(_g4_t_v88)) : _g4_s36,
    _g4_s38 = (140u + sizeof(_g4_t_v89)) > _g4_s37 ? (140u + sizeof(_g4_t_v89)) : _g4_s37
  };
  alignas(16) uint8_t _g4_sf[_g4_s38];
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 0u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 0u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 0u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 0u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 0u);
  _g4_t_Nickname &Nickname = *reinterpret_cast<_g4_t_Nickname *>(_g4_sf + 4u);
  _g4_t_Credential &Credential = *reinterpret_cast<_g4_t_Credential *>(_g4_sf + 8u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 12u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 12u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 12u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 12u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 24u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 28u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 32u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 36u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 40u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 48u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 48u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 48u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 84u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 96u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 98u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 99u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 100u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 104u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 120u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 124u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 128u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 140u);

  v89 = &a1;
  v67 = a1;
  v65 = a3;
  v69 = a2;
  v64 = a5;
  v70 = a4;
  v66 = a6;
  v6 = -11;
  if ( *(uint32_t *)(*a2 - 12) == 0 )
    return v6;
  v6 = -13;
  if ( (uint8_t)chatv2::Core::ArionUser::IsSet(a4) == 0 )
    return v6;
  v7 = " ChatLib report: channel: {0}, channel type: {1}, user nickname: {2}, user credential: {3}, report type: {4}, rep"
       "ort message: {5}\n";
  Credential = (uint32_t *)chatv2::Core::ArionUser::GetCredential(v70);
  Nickname = (uint32_t *)chatv2::Core::ArionUser::GetNickname(v70);
  v78 = (int)(uintptr_t)(&dword_213B814);
  sub_1939D80((int)(uintptr_t)(&v78), 0x80u, 0);
  v79 = 0;
  v68 = 0;
  v8 = aChatlibReportC /* " ChatLib report: channel: {0}, channel type: ..." */[0];
  while ( 1 )
  {
LABEL_10:
    v12 = v7 + 1;
    if ( v8 != 123 )
    {
      v9 = v79;
      v10 = v78;
      v11 = v79 + 1;
      if ( v79 + 1 > *(uint32_t *)(v78 - 12) )
      {
        v52 = v8;
        sub_1939D80((int)(uintptr_t)(&v78), v79 + 65, 0);
        v9 = v79;
        v10 = v78;
        v8 = v52;
        v11 = v79 + 1;
      }
      v79 = v11;
      if ( *(int *)(v10 - 4) >= 0 )
      {
        v53 = v8;
        sub_19397C0(&v78);
        v10 = v78;
        v8 = v53;
      }
      *(uint8_t *)(v10 + v9) = v8;
      v7 = v12;
      goto LABEL_9;
    }
    v13 = v7[1];
    if ( v13 != 123 )
      break;
    v27 = v79;
    v28 = v78;
    if ( v79 + 2 > *(uint32_t *)(v78 - 12) )
    {
      sub_1939D80((int)(uintptr_t)(&v78), v79 + 66, 0);
      v27 = v79;
      v28 = v78;
    }
    v79 = v27 + 1;
    if ( *(int *)(v28 - 4) >= 0 )
    {
      sub_19397C0(&v78);
      v28 = v78;
    }
    *(uint8_t *)(v28 + v27) = 123;
    v29 = v79++;
    v30 = v78;
    if ( *(int *)(v78 - 4) >= 0 )
    {
      sub_19397C0(&v78);
      v30 = v78;
    }
    *(uint8_t *)(v30 + v29) = 123;
    v7 += 2;
LABEL_9:
    v8 = *v7;
    if ( *v7 == 0 )
      goto LABEL_21;
  }
  v80[0] = 0;
  v80[1] = 0;
  v81 = 20;
  v82 = 32;
  if ( v13 == 0 )
    goto LABEL_40;
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
      goto LABEL_17;
    }
  }
  v17 = v15;
  if ( v14 == 1 )
LABEL_40:
    v17 = v68++;
  if ( v13 == 58 )
  {
    v13 = v12[1];
    if ( v13 == 120 )
    {
      v7 = v12 + 3;
      v81 = v81 & 1 | 0x20;
      v13 = v12[2];
    }
    else
    {
      v7 = v12 + 2;
      if ( v13 == 88 )
      {
        v81 = 33;
        v7 = v12 + 3;
        v13 = v12[2];
      }
    }
  }
  else
  {
LABEL_17:
    v7 = v12 + 1;
  }
  if ( v13 == 125 )
  {
    switch ( v17 )
    {
      case 0:
        v72 = *(uint32_t *)(*v69 - 12);
        if ( v79 + v72 > *(uint32_t *)(v78 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v78), v79 + v72 + 64, 0);
          v72 = *(uint32_t *)(*v69 - 12);
        }
        if ( v72 != 0 )
        {
          v36 = 0;
          v61 = v7;
          v37 = v69;
          do
          {
            v38 = v79++;
            v39 = v78;
            if ( *(int *)(v78 - 4) >= 0 )
            {
              v55 = v37;
              sub_19397C0(&v78);
              v39 = v78;
              v37 = v55;
            }
            v40 = *(uint8_t *)(*v37 + v36++);
            *(uint8_t *)(v39 + v38) = v40;
          }
          while ( v36 != v72 );
          v7 = v61;
        }
        goto LABEL_9;
      case 1:
        v41 = v65;
        goto LABEL_72;
      case 2:
        v73 = *(uint32_t *)(*Nickname - 12);
        if ( v79 + v73 > *(uint32_t *)(v78 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v78), v79 + v73 + 64, 0);
          v73 = *(uint32_t *)(*Nickname - 12);
        }
        if ( v73 != 0 )
        {
          v42 = 0;
          v43 = Nickname;
          v62 = v7;
          do
          {
            v44 = v79++;
            v45 = v78;
            if ( *(int *)(v78 - 4) >= 0 )
            {
              v56 = v43;
              sub_19397C0(&v78);
              v45 = v78;
              v43 = v56;
            }
            v46 = *(uint8_t *)(*v43 + v42++);
            *(uint8_t *)(v45 + v44) = v46;
          }
          while ( v42 != v73 );
          v7 = v62;
        }
        goto LABEL_9;
      case 3:
        v74 = *(uint32_t *)(*Credential - 12);
        if ( v79 + v74 > *(uint32_t *)(v78 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v78), v79 + v74 + 64, 0);
          v74 = *(uint32_t *)(*Credential - 12);
        }
        if ( v74 != 0 )
        {
          v47 = 0;
          v48 = Credential;
          v63 = v7;
          do
          {
            v49 = v79++;
            v50 = v78;
            if ( *(int *)(v78 - 4) >= 0 )
            {
              v57 = v48;
              sub_19397C0(&v78);
              v50 = v78;
              v48 = v57;
            }
            v51 = *(uint8_t *)(*v48 + v47++);
            *(uint8_t *)(v50 + v49) = v51;
          }
          while ( v47 != v74 );
          v7 = v63;
        }
        goto LABEL_9;
      case 4:
        v41 = v64;
LABEL_72:
        jcore::parsing::FormatToString_string_jcore_parsing_Pla_57f315(&v78, &v79, v80, v41);
        goto LABEL_9;
      case 5:
        v71 = *(uint32_t *)(*v66 - 12);
        if ( v79 + v71 > *(uint32_t *)(v78 - 12) )
        {
          sub_1939D80((int)(uintptr_t)(&v78), v79 + v71 + 64, 0);
          v71 = *(uint32_t *)(*v66 - 12);
        }
        if ( v71 != 0 )
        {
          v31 = 0;
          v60 = v7;
          v32 = v66;
          do
          {
            v33 = v79++;
            v34 = v78;
            if ( *(int *)(v78 - 4) >= 0 )
            {
              v54 = v32;
              sub_19397C0(&v78);
              v34 = v78;
              v32 = v54;
            }
            v35 = *(uint8_t *)(*v32 + v31++);
            *(uint8_t *)(v34 + v33) = v35;
          }
          while ( v31 != v71 );
          v7 = v60;
        }
        goto LABEL_9;
      default:
        sub_1939D80((int)(uintptr_t)(&v78), v79, 0);
        v8 = *v7;
        if ( *v7 != 0 )
          goto LABEL_10;
        goto LABEL_21;
    }
  }
  sub_1939D80((int)(uintptr_t)(&v78), v79, 0);
LABEL_21:
  sub_1939D80((int)(uintptr_t)(&v78), v79, 0);
  g4_std::string::construct_copy(v76, &v78);
  v18 = (void *)(v78 - 12);
  if ( (uint32_t *)(v78 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v78 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v77), "ChatLib", (int)(uintptr_t)(&v75));
  chatv2::Utils::Log(3, 0, &v77, "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/ChatLib.cpp", 124, v76);
  v19 = (void *)(v77 - 12);
  if ( (uint32_t *)(v77 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v77 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v19);
  }
  v20 = (void *)(v76[0] - 12);
  if ( (uint32_t *)(v76[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v76[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v20);
  }
  if ( *v67 == 0 )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
  chatv2::Core::ChatLibEngine::GetRequestFactory((chatv2::Core::ChatLibEngine::Self *)&v87);
  v21 = v87;
  if ( v87 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Reque"
      "sts::IRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::IRequestFactory*]",
      "px != 0");
    v21 = v87;
  }
  (*(void (**)(int *))(*(uint32_t *)v21 + 24))(&v83);
  v22 = v88;
  if ( v88 != nullptr && __sync_fetch_and_add(v88 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v22, 8);
    if ( __sync_fetch_and_add(v22 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v22, 12);
  }
  v85 = v83;
  v86 = v84;
  if ( v84 != nullptr )
    __sync_add_and_fetch(v84 + 1, 1);
  v23 = *v67;
  if ( *v67 == 0 )
  {
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Core:"
      ":ChatLibEngine, typename boost::detail::sp_member_access<T>::type = chatv2::Core::ChatLibEngine::Self*]",
      "px != 0");
    v23 = *v67;
  }
  chatv2::Core::ChatLibEngine::AddRequest(v23, &v85);
  v24 = v86;
  if ( v86 != nullptr && __sync_fetch_and_add(v86 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v24, 8);
    if ( __sync_fetch_and_add(v24 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v24, 12);
  }
  v25 = v84;
  v6 = 0;
  if ( v84 != nullptr && __sync_fetch_and_add(v84 + 1, 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v25, 8);
    if ( __sync_fetch_and_add(v25 + 2, 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v25, 12);
  }
  return v6;
}


