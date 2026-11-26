// Reconstructed from lib/x86/libGangstar4.so via IDA Pro MCP (Hex-Rays)
// Exact embedded __FILE__ path string in .rodata (0x1bd7f10):
//   F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Report/ReportUserResponse.cpp
// Referenced by 1 function(s) in libGangstar4.so

// ============================================================================
#include "Core/Utils/DecompTypes.h"

// ----------------------------------------------------------------------------
// Function: chatv2::Responses::ReportUserResponse::Execute  (binary VA: 0x126f0a0)
// Original: chatv2::Responses::ReportUserResponse::Execute
// ----------------------------------------------------------------------------
int chatv2::Responses::ReportUserResponse::Execute(chatv2::Responses::ReportUserResponse::Self *self)
{
  chatv2::Responses::ReportUserResponse::Self *v1;
  void *v2;
  void *v3;
  int v4;
  uint8_t *untyped_deleter;
  void *v6;
  int v7;
  int v8;
  void (*v9)(int, uint8_t **);
  volatile int32_t *v10;
  chatv2::Requests::ArionRequestFactory::Self *v11;
  int ReportClient;
  volatile int32_t *v13;
  int result;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t *_g4_t_v18;
  typedef volatile int32_t *_g4_t_v19;
  typedef uint8_t *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef uint8_t *_g4_t_v27;
  typedef int _g4_t_v28;
  typedef chatv2::Requests::ArionRequestFactory::Self *_g4_t_v29;
  typedef volatile int32_t *_g4_t_v30;
  typedef uint32_t _g4_t_v31[8];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v16)) > _g4_s1 ? (0u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v17)) > _g4_s2 ? (0u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v18)) > _g4_s3 ? (32u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v19)) > _g4_s4 ? (32u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v20)) > _g4_s5 ? (40u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (53u + sizeof(_g4_t_v21)) > _g4_s6 ? (53u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v22)) > _g4_s7 ? (56u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v23)) > _g4_s8 ? (60u + sizeof(_g4_t_v23)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v24)) > _g4_s9 ? (64u + sizeof(_g4_t_v24)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v25)) > _g4_s10 ? (68u + sizeof(_g4_t_v25)) : _g4_s10,
    _g4_s12 = (72u + sizeof(_g4_t_v26)) > _g4_s11 ? (72u + sizeof(_g4_t_v26)) : _g4_s11,
    _g4_s13 = (76u + sizeof(_g4_t_v27)) > _g4_s12 ? (76u + sizeof(_g4_t_v27)) : _g4_s12,
    _g4_s14 = (80u + sizeof(_g4_t_v28)) > _g4_s13 ? (80u + sizeof(_g4_t_v28)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v29)) > _g4_s14 ? (92u + sizeof(_g4_t_v29)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v30)) > _g4_s15 ? (96u + sizeof(_g4_t_v30)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v31)) > _g4_s16 ? (100u + sizeof(_g4_t_v31)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 40u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 53u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 60u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 64u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 68u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 72u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 76u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 80u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 92u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 96u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 100u);

  v31[4] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), " Report User response execute\n", (int)(uintptr_t)(&v21) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "ChatLib", (int)(uintptr_t)(&v21));
  chatv2::Utils::Log(
    3,
    0,
    &v24,
    "F:/G4/G4_UP8Shop/lib/ChatLibv2/source/ChatLibv2/Report/ReportUserResponse.cpp",
    20,
    &v23);
  v2 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = (char *)&v22 + 1;
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    v15 = (char *)&v22 + 2;
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = opNew(0x38u);
  *(uint32_t *)(v4 + 4) = 1;
  *(uint32_t *)(v4 + 8) = 1;
  *(uint32_t *)v4 = ((uint32_t)(uintptr_t)&off_2092388);
  *(uint32_t *)(v4 + 12) = 0;
  *(uint8_t *)(v4 + 16) = 0;
  untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *,boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<chatv2::Responses::ClientResponse::Self *, boost::detail::sp_ms_deleter<chatv2::Responses::ClientResponse::Self>> *)v4);
  v20 = untyped_deleter + 4;
  if ( untyped_deleter != (uint8_t *)-4 )
  {
    v18 = untyped_deleter;
    chatv2::Responses::ClientResponse::ClientResponse(untyped_deleter + 4, 4, (char *)v1 + 8);
    untyped_deleter = v18;
  }
  *untyped_deleter = 1;
  __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
  if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
  {
    G4_VCALL<void>(v4, 8, v15);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      G4_VCALL<void>(v4, 12);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "user reported", (int)(uintptr_t)(&v21) + 1);
  if ( v20 == nullptr )
    __assert2(
      "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
      653,
      "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Respo"
      "nses::ClientResponse, typename boost::detail::sp_member_access<T>::type = chatv2::Responses::ClientResponse::Self*]",
      "px != 0");
  chatv2::Responses::ClientResponse::SetMessage(v20, &v25);
  v6 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    v16 = (char *)&v22 + 3;
    g4_std::string::Rep::M_destroy(v6);
  }
  if ( *(uint32_t *)(*((uint32_t *)v1 + 4) + 36) != 0
    && boost::function1<void,boost::shared_ptr<chatv2::Responses::ClientResponse::Self>>::dummy::nonnull != nullptr )
  {
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v7 = *((uint32_t *)v1 + 4);
    v8 = *(uint32_t *)(v7 + 36);
    if ( v8 == 0 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "call to empty boost::function", (int)(uintptr_t)(&v22));
      sub_19042E0(v31, &v26);
      g4_std::string::Destroy(&v26);
      v31[0] = ((uint32_t)(uintptr_t)&off_20495A8);
      std::terminate();
    }
    v27 = v20;
    v9 = *(void (**)(int, uint8_t **))((v8 & 0xFFFFFFFE) + 4);
    v28 = v4;
    __sync_add_and_fetch((volatile int32_t *)(v4 + 4), 1);
    v9(v7 + 40, &v27);
    v10 = (volatile int32_t *)v28;
    if ( v28 != 0 && __sync_fetch_and_add((volatile int32_t *)(v28 + 4), 0xFFFFFFFF) == 1 )
    {
      v19 = v10;
      G4_VCALL<void>(v10, 8);
      if ( __sync_fetch_and_add(v19 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v19, 12);
    }
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v4, 8);
      if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v4, 12);
    }
    v17 = *((uint32_t *)v1 + 4);
    chatv2::Core::ArionExecutor::GetRequestFactory((chatv2::Core::ArionExecutor::Self *)&v29);
    v11 = v29;
    if ( v29 == nullptr )
    {
      __assert2(
        "../../../../../lib/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = chatv2::Req"
        "uests::ArionRequestFactory, typename boost::detail::sp_member_access<T>::type = chatv2::Requests::ArionRequestFactory*]",
        "px != 0");
      v11 = v29;
    }
    ReportClient = (int)(uintptr_t)(chatv2::Requests::ArionRequestFactory::GetReportClient(v11));
    G4_VCALL<void>(ReportClient, 4, v17);
    v13 = v30;
    if ( v30 != nullptr && __sync_fetch_and_add(v30 + 1, 0xFFFFFFFF) == 1 )
    {
      G4_VCALL<void>(v13, 8);
      if ( __sync_fetch_and_add(v13 + 2, 0xFFFFFFFF) == 1 )
        G4_VCALL<void>(v13, 12);
    }
  }
  result = __sync_fetch_and_add((volatile int32_t *)(v4 + 4), 0xFFFFFFFF);
  if ( result == 1 )
  {
    result = G4_VCALL<int>(v4, 8, v16);
    if ( __sync_fetch_and_add((volatile int32_t *)(v4 + 8), 0xFFFFFFFF) == 1 )
      return G4_VCALL<int>(v4, 12);
  }
  return result;
}

