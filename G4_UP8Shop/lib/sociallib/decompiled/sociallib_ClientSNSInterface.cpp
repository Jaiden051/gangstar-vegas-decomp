#include "Core/Utils/DecompTypes.h"
#include "sociallib_ClientSNSInterface.h"

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getTime  (binary VA: 0x14089d0)
// Original: sociallib::ClientSNSInterface::getTime
// ----------------------------------------------------------------------------
uint64_t sociallib::ClientSNSInterface::getTime()
{
  bool v0;
  uint64_t result; // rax
  typedef struct timespec _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);

  v0 = clock_gettime(0, &v2) == -1;
  result = -1;
  if ( !v0 )
    return 1000 * (v2.tv_sec + v2.tv_nsec / 0x3B9ACA00uLL);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::isSnsSupported  (binary VA: 0x1408a70)
// Original: sociallib::ClientSNSInterface::isSnsSupported
// ----------------------------------------------------------------------------
bool sociallib::ClientSNSInterface::isSnsSupported(int a1, int a2)
{
  bool result;
  uint32_t *v3;
  uint32_t *v4;

  result = false;
  v3 = (uint32_t *)(*(uint8_t **)unk_2119838);
  if ( (*(uint8_t **)unk_2119838) != 0 )
  {
    v4 = (uint32_t *)(&unk_2119834);
    do
    {
      while ( v3[4] >= a2 )
      {
        v4 = v3;
        v3 = (uint32_t *)v3[2];
        if ( v3 == nullptr )
          goto LABEL_6;
      }
      v3 = (uint32_t *)v3[3];
    }
    while ( v3 != nullptr );
LABEL_6:
    result = false;
    if ( v4 != (uint32_t *)&unk_2119834 )
      return v4[4] <= a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::isDuplicateRequest  (binary VA: 0x1408ac0)
// Original: sociallib::ClientSNSInterface::isDuplicateRequest
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::isDuplicateRequest(int a1, int a2, int a3)
{
  int result;
  uint32_t *v4;
  int v5;

  result = 0;
  v4 = *(uint32_t **)(a1 + 28);
  if ( v4 != (uint32_t *)(a1 + 28) )
  {
    do
    {
      v5 = v4[2];
      if ( *(uint32_t *)(v5 + 16) == a2 && *(uint32_t *)(v5 + 8) == a3 )
        return 1;
      v4 = (uint32_t *)*v4;
    }
    while ( v4 != (uint32_t *)(a1 + 28) );
    return 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::setCanSendEmailMessages  (binary VA: 0x1408b10)
// Original: sociallib::ClientSNSInterface::setCanSendEmailMessages
// ----------------------------------------------------------------------------
void sociallib::ClientSNSInterface::setCanSendEmailMessages()
{
  int *v0;
  int *v1;
  void *v2;

  v0 = (int *)(*(uint8_t **)unk_2119838);
  if ( (*(uint8_t **)unk_2119838) != 0 )
  {
    v1 = (int *)&unk_2119834;
    do
    {
      while ( v0[4] > 7 )
      {
        v1 = v0;
        v0 = (int *)v0[2];
        if ( v0 == nullptr )
          goto LABEL_6;
      }
      v0 = (int *)v0[3];
    }
    while ( v0 != nullptr );
LABEL_6:
    if ( v1 != (int *)&unk_2119834 && v1[4] <= 8 )
    {
      v2 = (void *)sub_1904AE0(v1, &unk_2119834);
      opDelete(v2);
      --*(uint32_t *)unk_2119844;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getCurrentActiveRequestState  (binary VA: 0x1408b90)
// Original: sociallib::ClientSNSInterface::getCurrentActiveRequestState
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getCurrentActiveRequestState(sociallib::ClientSNSInterface::Self *self)
{
  char *v1;
  char *v2;
  char *i;
  int result;

  v1 = *((char **)self + 7);
  v2 = (char *)self + 28;
  for ( i = v1; i != v2 && *(uint8_t *)(*((uint32_t *)i + 2) + 20) != 0; i = *(char **)i )
    ;
  result = 0;
  if ( v1 != v2 && i != v2 )
    return *((uint32_t *)i + 2);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getActiveLoginRequest  (binary VA: 0x1408bd0)
// Original: sociallib::ClientSNSInterface::getActiveLoginRequest
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getActiveLoginRequest(int a1, int a2)
{
  int result;
  uint32_t *v3;

  result = 0;
  v3 = *(uint32_t **)(a1 + 28);
  if ( v3 != (uint32_t *)(a1 + 28) )
  {
    while ( 1 )
    {
      result = v3[2];
      if ( *(uint8_t *)(result + 20) == 0 && *(uint32_t *)(result + 8) == 18 && *(uint32_t *)(result + 16) == a2 )
        break;
      v3 = (uint32_t *)*v3;
      if ( v3 == (uint32_t *)(a1 + 28) )
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::GetPendingRequest  (binary VA: 0x1408c20)
// Original: sociallib::ClientSNSInterface::GetPendingRequest
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::GetPendingRequest(int a1, int a2, int a3)
{
  int result;
  uint32_t *v4;

  result = 0;
  v4 = *(uint32_t **)(a1 + 28);
  if ( v4 != (uint32_t *)(a1 + 28) )
  {
    while ( 1 )
    {
      result = v4[2];
      if ( *(uint8_t *)(result + 20) == 0 && *(uint32_t *)(result + 8) == a3 && *(uint32_t *)(result + 16) == a2 )
        break;
      v4 = (uint32_t *)*v4;
      if ( v4 == (uint32_t *)(a1 + 28) )
        return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::bypassRequestsForSNS  (binary VA: 0x1408c70)
// Original: sociallib::ClientSNSInterface::bypassRequestsForSNS
// ----------------------------------------------------------------------------
const char * sociallib::ClientSNSInterface::bypassRequestsForSNS(int a1, int a2)
{
  uint32_t *v3;
  uint32_t *v4;
  const char *result;
  uint32_t *v6;
  int v7;

  v3 = *(uint32_t **)(a1 + 28);
  v4 = (uint32_t *)(a1 + 28);
  if ( v3 != (uint32_t *)(a1 + 28) )
  {
    result = "SNS ERROR: User bypassed login with multi-tasking.\n";
    do
    {
      while ( 1 )
      {
        v6 = (uint32_t *)v3[2];
        if ( v6[4] == a2 )
          break;
        v3 = (uint32_t *)*v3;
        if ( v3 == v4 )
          return result;
      }
      v7 = a2;
      result = (const char *)g4_std_compat::string_assign((int)(uintptr_t)(v6 + 15), "SNS ERROR: User bypassed login with multi-tasking.\n", 0x33u);
      v6[3] = 1;
      v6[1] = 4;
      v3 = (uint32_t *)*v3;
      a2 = v7;
    }
    while ( v3 != v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::insertRequest  (binary VA: 0x1408d00)
// Original: sociallib::ClientSNSInterface::insertRequest
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::insertRequest(sociallib::ClientSNSInterface::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  char *v3;
  char *v4;
  int v5;
  int v6;
  int v8;

  v2 = *((uint32_t *)a2 + 52);
  if ( v2 <= 0 )
  {
    v4 = (char *)self + 28;
    goto LABEL_9;
  }
  v3 = *((char **)self + 7);
  v4 = (char *)self + 28;
  if ( v3 == (char *)self + 28 )
  {
LABEL_9:
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(a2));
    v8 = opNew(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(a2);
    return sub_1901920(v8, v4);
  }
  while ( 1 )
  {
    v5 = *((uint32_t *)v3 + 2);
    if ( *(uint32_t *)(v5 + 4) == 0 && v2 > *(uint32_t *)(v5 + 208) )
      break;
    v3 = *(char **)v3;
    if ( v4 == v3 )
      goto LABEL_9;
  }
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(a2);
  return sub_1901920(v6, v3);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::pushFrontRequest  (binary VA: 0x1408dc0)
// Original: sociallib::ClientSNSInterface::pushFrontRequest
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::pushFrontRequest(sociallib::ClientSNSInterface::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  int v3;

  sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(a2));
  v2 = *((uint32_t *)self + 7);
  v3 = opNew(0xCu);
  if ( v3 != -8 )
    *(uint32_t *)(v3 + 8) = (uint32_t)(uintptr_t)(a2);
  return sub_1901920(v3, v2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::pushSecondRequest  (binary VA: 0x1408e30)
// Original: sociallib::ClientSNSInterface::pushSecondRequest
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::pushSecondRequest(sociallib::ClientSNSInterface::Self *self, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v8;
  int v9;

  sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(a2));
  v2 = *((uint32_t **)self + 7);
  if ( v2 == (uint32_t *)((char *)self + 28) )
  {
    v8 = opNew(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(a2);
    return sub_1901920(v8, v2);
  }
  else
  {
    v9 = v2[2];
    sub_1901940(*((uint32_t *)self + 7));
    opDelete(v2);
    v3 = *((uint32_t *)self + 7);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(a2);
    sub_1901920(v4, v3);
    v5 = *((uint32_t *)self + 7);
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = v9;
    return sub_1901920(v6, v5);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::trackDefferedAppLink  (binary VA: 0x1408f10)
// Original: sociallib::ClientSNSInterface::trackDefferedAppLink
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::trackDefferedAppLink(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(&sociallib::ClientSNSInterface::facebookInstallTrackingUrl, a2));
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::checkGlotInitAndTrackFacebook  (binary VA: 0x1408f40)
// Original: sociallib::ClientSNSInterface::checkGlotInitAndTrackFacebook
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::checkGlotInitAndTrackFacebook()
{
  int result;
  glotv3::TrackingManager::Self *v1;
  volatile int32_t *v2;
  int v3;
  uint8_t *untyped_deleter;
  uint8_t *v5;
  glotv3::Event::Self *v6;
  int v7;
  volatile int32_t *v8;
  volatile int32_t *v9;
  typedef glotv3::Event::Self *_g4_t_v10;
  typedef glotv3::Event::Self *_g4_t_v11;
  typedef uint8_t _g4_t_v12;
  typedef glotv3::TrackingManager::Self *_g4_t_v13;
  typedef volatile int32_t *_g4_t_v14;
  typedef int _g4_t_v15;
  typedef volatile int32_t *_g4_t_v16;
  typedef glotv3::Event::Self *_g4_t_v17;
  typedef volatile int32_t *_g4_t_v18;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v11)) > _g4_s1 ? (12u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v18)) > _g4_s8 ? (44u + sizeof(_g4_t_v18)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 44u);

  result = sociallib::ClientSNSInterface::facebookInstallTrackingUrl;
  if ( *(uint32_t *)(sociallib::ClientSNSInterface::facebookInstallTrackingUrl - 12) != 0 )
  {
    glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v13);
    v1 = v13;
    if ( v13 == nullptr )
    {
      __assert2(
        "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
        653,
        "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::Tra"
        "ckingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
        "px != 0");
      v1 = v13;
    }
    result = glotv3::TrackingManager::IsTrackingSessionStarted(v1);
    v2 = v14;
    if ( v14 != nullptr && __sync_fetch_and_add(v14 + 1, 0xFFFFFFFF) == 1 )
    {
      v12 = result;
      G4_VCALL<void>(v2, 8);
      result = v12;
      if ( __sync_fetch_and_add(v2 + 2, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v2, 12);
        result = v12;
      }
    }
    if ( (uint8_t)result != 0 )
    {
      v3 = opNew(0xC8u);
      *(uint32_t *)(v3 + 4) = 1;
      *(uint32_t *)(v3 + 8) = 1;
      *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_2094F08);
      *(uint32_t *)(v3 + 12) = 0;
      *(uint8_t *)(v3 + 16) = 0;
      untyped_deleter = (uint8_t *)boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *,boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>>::get_untyped_deleter((boost::detail::sp_counted_impl_pd<FacebookInstallEvent::Self *, boost::detail::sp_ms_deleter<FacebookInstallEvent::Self>> *)v3);
      v5 = untyped_deleter;
      v6 = (glotv3::Event::Self *)(untyped_deleter + 4);
      if ( untyped_deleter != (uint8_t *)-4 )
      {
        v10 = (glotv3::Event::Self *)(untyped_deleter + 4);
        FacebookInstallEvent::Construct(
          (glotv3::Event::Self *)(untyped_deleter + 4),
          (int)(uintptr_t)(&sociallib::ClientSNSInterface::facebookInstallTrackingUrl));
        v6 = v10;
      }
      *v5 = 1;
      __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
      if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 4), 0xFFFFFFFF) == 1 )
      {
        v11 = v6;
        G4_VCALL<void>(v3, 8);
        v6 = v11;
        if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
        {
          G4_VCALL<void>(v3, 12);
          v6 = v11;
        }
      }
      v17 = v6;
      v18 = (volatile int32_t *)v3;
      __sync_add_and_fetch((volatile int32_t *)(v3 + 4), 1);
      glotv3::TrackingManager::getInstance((glotv3::TrackingManager::Self *)&v15);
      v7 = v15;
      if ( v15 == 0 )
      {
        __assert2(
          "../../../../../lib/glitch/include/boost/smart_ptr/shared_ptr.hpp",
          653,
          "typename boost::detail::sp_member_access<T>::type boost::shared_ptr<T>::operator->() const [with T = glotv3::T"
          "rackingManager, typename boost::detail::sp_member_access<T>::type = glotv3::TrackingManager::Self*]",
          "px != 0");
        v7 = v15;
      }
      glotv3::TrackingManager::AddEvent(v7, &v17, 0);
      v8 = v16;
      if ( v16 != nullptr && __sync_fetch_and_add(v16 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v8, 8);
        if ( __sync_fetch_and_add(v8 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v8, 12);
      }
      v9 = v18;
      if ( v18 != nullptr && __sync_fetch_and_add(v18 + 1, 0xFFFFFFFF) == 1 )
      {
        G4_VCALL<void>(v9, 8);
        if ( __sync_fetch_and_add(v9 + 2, 0xFFFFFFFF) == 1 )
          G4_VCALL<void>(v9, 12);
      }
      g4_std::string::clear(
        &sociallib::ClientSNSInterface::facebookInstallTrackingUrl,
        0,
        *(uint32_t *)(sociallib::ClientSNSInterface::facebookInstallTrackingUrl - 12),
        0);
      result = __sync_fetch_and_add((volatile int32_t *)(v3 + 4), 0xFFFFFFFF);
      if ( result == 1 )
      {
        result = G4_VCALL<int>(v3, 8);
        if ( __sync_fetch_and_add((volatile int32_t *)(v3 + 8), 0xFFFFFFFF) == 1 )
          return G4_VCALL<int>(v3, 12);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestStringData  (binary VA: 0x1409240)
// Original: sociallib::ClientSNSInterface::retrieveRequestStringData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestStringData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  if ( CurrentActiveRequestState != 0 )
    g4_std::string::construct_copy(self, CurrentActiveRequestState + 60);
  else
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestStringArrayData  (binary VA: 0x14092b0)
// Original: sociallib::ClientSNSInterface::retrieveRequestStringArrayData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestStringArrayData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  int v9;
  int i;
  int v12;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  v4 = CurrentActiveRequestState;
  if ( CurrentActiveRequestState != 0 )
  {
    v5 = *(uint32_t *)(CurrentActiveRequestState + 68) - *(uint32_t *)(CurrentActiveRequestState + 64);
    v6 = 0;
    v7 = 0;
    v8 = v5 >> 2;
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    if ( v8 != 0 )
    {
      if ( v8 > 0x3FFFFFFF )
        sub_18FFEE0(v3, v8);
      v6 = 4 * v8;
      v7 = opNew(4 * v8);
    }
    *(uint32_t *)self = v7;
    *((uint32_t *)self + 1) = v7;
    *((uint32_t *)self + 2) = v7 + v6;
    v9 = *(uint32_t *)(v4 + 68);
    for ( i = *(uint32_t *)(v4 + 64); v9 != i; v7 += 4 )
    {
      if ( v7 != 0 )
      {
        v12 = v7;
        g4_std::string::construct_copy(v7, i);
        v7 = v12;
      }
      i += 4;
    }
    *((uint32_t *)self + 1) = v7;
    return self;
  }
  else
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestBoolData  (binary VA: 0x14093a0)
// Original: sociallib::ClientSNSInterface::retrieveRequestBoolData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveRequestBoolData(sociallib::ClientSNSInterface::Self *self)
{
  int CurrentActiveRequestState;
  int v2;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(self);
  v2 = 0;
  if ( CurrentActiveRequestState != 0 )
    return *(uint8_t *)(CurrentActiveRequestState + 56);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestCharBufferData  (binary VA: 0x14093d0)
// Original: sociallib::ClientSNSInterface::retrieveRequestCharBufferData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestCharBufferData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  if ( CurrentActiveRequestState != 0 )
    sociallib::CDynamicMemoryStream::CDynamicMemoryStream(
      self,
      (const sociallib::CDynamicMemoryStream::Self *)(CurrentActiveRequestState + 180));
  else
    sociallib::CDynamicMemoryStream::CDynamicMemoryStream(self, nullptr, 0);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestLeaderboardsType  (binary VA: 0x1409440)
// Original: sociallib::ClientSNSInterface::retrieveRequestLeaderboardsType
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestLeaderboardsType(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  int v3;
  int v4;
  int v5;
  int v6;
  unsigned int v7;
  int v8;
  uint32_t *v9;
  int v10;
  size_t v11;
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v19;
  uint32_t *v20;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  v3 = CurrentActiveRequestState;
  if ( CurrentActiveRequestState == 0 )
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    return self;
  }
  v4 = *(uint32_t *)(CurrentActiveRequestState + 160);
  v5 = *(uint32_t *)(CurrentActiveRequestState + 156);
  v20 = nullptr;
  v19 = nullptr;
  v6 = (*(uint32_t *)(v3 + 160) - v5) >> 2;
  v7 = -1431655765 * v6;
  if ( -1431655765 * v6 != 0 )
  {
    if ( v7 > 0x15555555 )
LABEL_35:
      sub_18FFEE0(v6, v7);
    v19 = (uint32_t *)opNew(4 * v6);
    v4 = *(uint32_t *)(v3 + 160);
    v5 = *(uint32_t *)(v3 + 156);
    v20 = v19;
  }
  if ( v5 == v4 )
  {
    v9 = v19;
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
LABEL_27:
    v11 = 0;
    v12 = 0;
    goto LABEL_11;
  }
  v8 = v5;
  v9 = v19;
  do
  {
    if ( v9 != nullptr )
    {
      g4_std::string::construct_copy(v9, v8);
      g4_std::string::construct_copy(v9 + 1, v8 + 4);
      g4_std::string::construct_copy(v9 + 2, v8 + 8);
    }
    v8 += 12;
    v9 += 3;
  }
  while ( v4 != v8 );
  v10 = v9 - v20;
  v7 = (unsigned int)(uintptr_t)(self);
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( -1431655765 * v10 == 0 )
    goto LABEL_27;
  if ( (unsigned int)(-1431655765 * v10) > 0x15555555 )
    goto LABEL_35;
  v11 = 4 * v10;
  v12 = opNew(v11);
LABEL_11:
  *(uint32_t *)self = v12;
  *((uint32_t *)self + 1) = v12;
  *((uint32_t *)self + 2) = v12 + v11;
  if ( v19 != v9 )
  {
    v13 = v19;
    do
    {
      if ( v12 != 0 )
      {
        g4_std::string::construct_copy(v12, v13);
        g4_std::string::construct_copy(v12 + 4, v13 + 1);
        g4_std::string::construct_copy(v12 + 8, v13 + 2);
      }
      v13 += 3;
      v12 += 12;
    }
    while ( v9 != v13 );
    v14 = v19;
    *((uint32_t *)self + 1) = v12;
    do
    {
      v15 = v14[2];
      if ( (uint32_t *)(v15 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v15 - 12));
      }
      v16 = v14[1];
      if ( (uint32_t *)(v16 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((void *)(v16 - 12));
      }
      v17 = (uint32_t *)(*v14 - 12);
      if ( v17 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v17);
      v14 += 3;
    }
    while ( v9 != v14 );
  }
  if ( v19 != nullptr )
    opDelete(v19);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestIntData  (binary VA: 0x1409730)
// Original: sociallib::ClientSNSInterface::retrieveRequestIntData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveRequestIntData(sociallib::ClientSNSInterface::Self *self)
{
  int CurrentActiveRequestState;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(self);
  if ( CurrentActiveRequestState != 0 )
    return *(uint32_t *)(CurrentActiveRequestState + 200);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestNoData  (binary VA: 0x1409770)
// Original: sociallib::ClientSNSInterface::retrieveRequestNoData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveRequestNoData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::getCurrentActiveRequestState(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveLocaleData  (binary VA: 0x14097a0)
// Original: sociallib::ClientSNSInterface::retrieveLocaleData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveLocaleData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUidData  (binary VA: 0x14097e0)
// Original: sociallib::ClientSNSInterface::retrieveUidData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUidData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveFriendType  (binary VA: 0x1409820)
// Original: sociallib::ClientSNSInterface::retrieveFriendType
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveFriendType(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestIntData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveFriendData  (binary VA: 0x1409850)
// Original: sociallib::ClientSNSInterface::retrieveFriendData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveFriendData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringArrayData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveBilateralFriendData  (binary VA: 0x1409890)
// Original: sociallib::ClientSNSInterface::retrieveBilateralFriendData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveBilateralFriendData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringArrayData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveHasPermissionData  (binary VA: 0x14098d0)
// Original: sociallib::ClientSNSInterface::retrieveHasPermissionData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveHasPermissionData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestBoolData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveHasPermissionErrorMessage  (binary VA: 0x1409900)
// Original: sociallib::ClientSNSInterface::retrieveHasPermissionErrorMessage
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveHasPermissionErrorMessage(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveNameData  (binary VA: 0x1409940)
// Original: sociallib::ClientSNSInterface::retrieveNameData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveNameData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveAvatarData  (binary VA: 0x1409980)
// Original: sociallib::ClientSNSInterface::retrieveAvatarData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveAvatarData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestCharBufferData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserAvatarData  (binary VA: 0x14099c0)
// Original: sociallib::ClientSNSInterface::retrieveUserAvatarData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUserAvatarData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestCharBufferData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveAppIdData  (binary VA: 0x1409a00)
// Original: sociallib::ClientSNSInterface::retrieveAppIdData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveAppIdData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveFriendsDataType  (binary VA: 0x1409a40)
// Original: sociallib::ClientSNSInterface::retrieveFriendsDataType
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveFriendsDataType(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestIntData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveLikeApplicationData  (binary VA: 0x1409a70)
// Original: sociallib::ClientSNSInterface::retrieveLikeApplicationData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveLikeApplicationData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrievePostMessageToWallData  (binary VA: 0x1409aa0)
// Original: sociallib::ClientSNSInterface::retrievePostMessageToWallData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrievePostMessageToWallData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrievePostMessageToWallWithoutDialog  (binary VA: 0x1409ad0)
// Original: sociallib::ClientSNSInterface::retrievePostMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrievePostMessageToWallWithoutDialog(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrievePostMessageToFriendsWallData  (binary VA: 0x1409b00)
// Original: sociallib::ClientSNSInterface::retrievePostMessageToFriendsWallData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrievePostMessageToFriendsWallData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveSendGameRequestToFriendsData  (binary VA: 0x1409b30)
// Original: sociallib::ClientSNSInterface::retrieveSendGameRequestToFriendsData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveSendGameRequestToFriendsData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringArrayData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveLoginData  (binary VA: 0x1409b70)
// Original: sociallib::ClientSNSInterface::retrieveLoginData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveLoginData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveLogoutData  (binary VA: 0x1409ba0)
// Original: sociallib::ClientSNSInterface::retrieveLogoutData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveLogoutData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveLostPasswordData  (binary VA: 0x1409bd0)
// Original: sociallib::ClientSNSInterface::retrieveLostPasswordData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveLostPasswordData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUploadPhotoResponse  (binary VA: 0x1409c00)
// Original: sociallib::ClientSNSInterface::retrieveUploadPhotoResponse
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUploadPhotoResponse(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  if ( CurrentActiveRequestState != 0 )
    g4_std::string::construct_copy(self, CurrentActiveRequestState + 60);
  else
    g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v4));
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveSendMessageToData  (binary VA: 0x1409c70)
// Original: sociallib::ClientSNSInterface::retrieveSendMessageToData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveSendMessageToData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveGotAchievementData  (binary VA: 0x1409ca0)
// Original: sociallib::ClientSNSInterface::retrieveGotAchievementData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveGotAchievementData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrievePostLeaderboardScoreData  (binary VA: 0x1409cd0)
// Original: sociallib::ClientSNSInterface::retrievePostLeaderboardScoreData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrievePostLeaderboardScoreData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestNoData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserLeaderboardRankData  (binary VA: 0x1409d00)
// Original: sociallib::ClientSNSInterface::retrieveUserLeaderboardRankData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveUserLeaderboardRankData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestIntData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserLeaderboardScoreData  (binary VA: 0x1409d30)
// Original: sociallib::ClientSNSInterface::retrieveUserLeaderboardScoreData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveUserLeaderboardScoreData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestIntData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveLeaderboardsTypesData  (binary VA: 0x1409d60)
// Original: sociallib::ClientSNSInterface::retrieveLeaderboardsTypesData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveLeaderboardsTypesData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestLeaderboardsType(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveNumberOfMatchesData  (binary VA: 0x1409da0)
// Original: sociallib::ClientSNSInterface::retrieveNumberOfMatchesData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrieveNumberOfMatchesData(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::retrieveRequestIntData(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrievePermissionStatus  (binary VA: 0x1409dd0)
// Original: sociallib::ClientSNSInterface::retrievePermissionStatus
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrievePermissionStatus(sociallib::ClientSNSInterface::Self *self)
{
  int CurrentActiveRequestState;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(self);
  if ( CurrentActiveRequestState != 0 )
    return *(uint32_t *)(CurrentActiveRequestState + 128);
  else
    return -1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrievePermissionForRequest  (binary VA: 0x1409e10)
// Original: sociallib::ClientSNSInterface::retrievePermissionForRequest
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::retrievePermissionForRequest(int a1, int a2, int a3)
{
  int result;

  result = 0;
  if ( a2 == 4 && (unsigned int)(a3 - 3) <= 0x33 )
    return byte_1D106E0[a3 - 3];
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveValueFromCloud  (binary VA: 0x1409e40)
// Original: sociallib::ClientSNSInterface::retrieveValueFromCloud
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveValueFromCloud(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveErrorData  (binary VA: 0x1409e80)
// Original: sociallib::ClientSNSInterface::retrieveErrorData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveErrorData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getCurrentActiveSNSRequestType  (binary VA: 0x1409ec0)
// Original: sociallib::ClientSNSInterface::getCurrentActiveSNSRequestType
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getCurrentActiveSNSRequestType(sociallib::ClientSNSInterface::Self *self)
{
  int CurrentActiveRequestState;
  int v2;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(self);
  v2 = 0;
  if ( CurrentActiveRequestState != 0 )
    return *(uint32_t *)(CurrentActiveRequestState + 8);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getCurrentActiveRequestSocialNetwork  (binary VA: 0x1409ef0)
// Original: sociallib::ClientSNSInterface::getCurrentActiveRequestSocialNetwork
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getCurrentActiveRequestSocialNetwork(sociallib::ClientSNSInterface::Self *self)
{
  int CurrentActiveRequestState;
  int v2;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(self);
  v2 = 0;
  if ( CurrentActiveRequestState != 0 )
    return *(uint32_t *)(CurrentActiveRequestState + 16);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::isRequestQueueEmpty  (binary VA: 0x1409f20)
// Original: sociallib::ClientSNSInterface::isRequestQueueEmpty
// ----------------------------------------------------------------------------
bool sociallib::ClientSNSInterface::isRequestQueueEmpty(sociallib::ClientSNSInterface::Self *self)
{
  return sociallib::ClientSNSInterface::getCurrentActiveRequestState(self) == 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch  (binary VA: 0x1409f50)
// Original: sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch
// ----------------------------------------------------------------------------
bool sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(sociallib::ClientSNSInterface::Self *a1, int a2, int a3)
{
  int CurrentActiveRequestState;
  bool result;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a1);
  result = false;
  if ( CurrentActiveRequestState != 0 && *(uint32_t *)(CurrentActiveRequestState + 16) == a2 )
    return *(uint32_t *)(CurrentActiveRequestState + 8) == a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::isRequestTypeMatch  (binary VA: 0x1409fa0)
// Original: sociallib::ClientSNSInterface::isRequestTypeMatch
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::isRequestTypeMatch(sociallib::ClientSNSInterface::Self *a1, int a2)
{
  int CurrentActiveRequestState;
  int v3;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a1);
  v3 = 0;
  if ( CurrentActiveRequestState != 0 )
  {
    v3 = a2;
    LOBYTE(v3) = *(uint32_t *)(CurrentActiveRequestState + 8) == a2;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::addErrorRequestToQueue  (binary VA: 0x1409fe0)
// Original: sociallib::ClientSNSInterface::addErrorRequestToQueue
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::addErrorRequestToQueue(int a1, int a2, int a3, int a4)
{
  unsigned int v4;
  int v5;

  v4 = opNew(0xD4u);
  sociallib::SNSRequestState::Construct(v4, a2, sociallib::SNSWrapperBase::doNothing, 0, a3, 1, 0);
  *(uint32_t *)(v4 + 12) = 1;
  *(uint32_t *)(v4 + 4) = 4;
  g4_std::string::assign_str(v4 + 60, a4);
  sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v4);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint32_t *)(v5 + 8) = v4;
  return sub_1901920(v5, a1 + 28);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveAchievementChallengeablePlayersData  (binary VA: 0x140a0b0)
// Original: sociallib::ClientSNSInterface::retrieveAchievementChallengeablePlayersData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveAchievementChallengeablePlayersData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringArrayData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveLeaderboardChallengeablePlayersData  (binary VA: 0x140a0f0)
// Original: sociallib::ClientSNSInterface::retrieveLeaderboardChallengeablePlayersData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveLeaderboardChallengeablePlayersData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringArrayData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::initSNS  (binary VA: 0x140a130)
// Original: sociallib::ClientSNSInterface::initSNS
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::initSNS(int a1, int a2, int a3)
{
  int v4;
  typedef unsigned int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint8_t _g4_t_v12[4];
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[4];
  typedef int _g4_t_v15;
  typedef char *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint8_t _g4_t_v18[4];
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v6)) > _g4_s1 ? (0u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v7)) > _g4_s2 ? (4u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v8)) > _g4_s3 ? (12u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (29u + sizeof(_g4_t_v9)) > _g4_s4 ? (29u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v10)) > _g4_s5 ? (32u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v11)) > _g4_s6 ? (36u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v12)) > _g4_s7 ? (40u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v13)) > _g4_s8 ? (44u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v14)) > _g4_s9 ? (48u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v15)) > _g4_s10 ? (52u + sizeof(_g4_t_v15)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v16)) > _g4_s11 ? (56u + sizeof(_g4_t_v16)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v17)) > _g4_s12 ? (60u + sizeof(_g4_t_v17)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v18)) > _g4_s13 ? (64u + sizeof(_g4_t_v18)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v19)) > _g4_s14 ? (68u + sizeof(_g4_t_v19)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v20)) > _g4_s15 ? (72u + sizeof(_g4_t_v20)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v21)) > _g4_s16 ? (76u + sizeof(_g4_t_v21)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 29u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 32u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 44u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 48u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 52u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 56u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 60u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 64u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 72u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 76u);

  if ( (uint8_t)sociallib::ClientSNSInterface::isDuplicateRequest(a1, a2, 23) != 0 )
  {
    v7 = sociallib::SNSRequestState::s_snsNames + 4 * a2;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v13), " for SNS ", (int)(uintptr_t)(&v9) + 1);
    v8 = sociallib::SNSRequestState::s_snsRequestTypeNames + 92;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v11), "ERROR: Duplicate request ", (int)(uintptr_t)(&v9));
    sub_134F3A0((int)(uintptr_t)(v12), (int)(uintptr_t)(&v11), v8);
    sub_134F3A0((int)(uintptr_t)(v14), (int)(uintptr_t)(v12), (int)(uintptr_t)(&v13));
    sub_134F3A0((int)(uintptr_t)(&v16), (int)(uintptr_t)(v14), v7);
    g4_std::string::Destroy(v14);
    g4_std::string::Destroy(v12);
    g4_std::string::Destroy(&v11);
    g4_std::string::Destroy(&v13);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), v16, (int)(uintptr_t)(&v9) + 2);
    sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, a2, 23, (int)(uintptr_t)(&v15));
    g4_std::string::Destroy(&v15);
    return ((g4_std::string::Destroy(&v16)), (int)0);
  }
  else if ( sociallib::ClientSNSInterface::isSnsSupported(a1, a2) )
  {
    if ( a3 <= 1 && a2 == 4 )
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), "Please specify a version for Facebook API supported by the library\n", (int)(uintptr_t)(&v10) + 3);
      sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, 4, 23, (int)(uintptr_t)(v21));
      return ((g4_std::string::Destroy(v21)), (int)0);
    }
    else
    {
      v5 = opNew(0xD4u);
      sociallib::SNSRequestState::Construct(v5, a2, 9, 0, 23, 0, 0);
      *(uint32_t *)(v5 + 200) = a3;
      *(uint8_t *)(v5 + 56) = 0;
      sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v5);
      v4 = opNew(0xCu);
      if ( v4 != -8 )
        *(uint32_t *)(v4 + 8) = v5;
      return sub_1901920(v4, a1 + 28);
    }
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), " in snsconfig.json as being supported!\n", (int)(uintptr_t)(&v10) + 1);
    v6 = sociallib::SNSRequestState::s_snsNames + 4 * a2;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), "ERROR: You didn't mark SNS ", (int)(uintptr_t)(&v10));
    sub_134F3A0((int)(uintptr_t)(v18), (int)(uintptr_t)(&v17), v6);
    sub_134F3A0((int)(uintptr_t)(&v16), (int)(uintptr_t)(v18), (int)(uintptr_t)(&v19));
    g4_std::string::Destroy(v18);
    g4_std::string::Destroy(&v17);
    g4_std::string::Destroy(&v19);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), v16, (int)(uintptr_t)(&v10) + 2);
    sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, a2, 23, (int)(uintptr_t)(&v20));
    g4_std::string::Destroy(&v20);
    return ((g4_std::string::Destroy(&v16)), (int)0);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData  (binary VA: 0x140a4d0)
// Original: sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  char *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  typedef char *_g4_t_v12;
  typedef char *_g4_t_v13;
  typedef char *_g4_t_v14;
  typedef char *_g4_t_v15;
  typedef char *_g4_t_v16;
  typedef char *_g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef char *_g4_t_v20;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v15)) > _g4_s3 ? (16u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v16)) > _g4_s4 ? (20u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v17)) > _g4_s5 ? (24u + sizeof(_g4_t_v17)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v18)) > _g4_s6 ? (28u + sizeof(_g4_t_v18)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v19)) > _g4_s7 ? (52u + sizeof(_g4_t_v19)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v20)) > _g4_s8 ? (56u + sizeof(_g4_t_v20)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 24u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 52u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 56u);

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  if ( CurrentActiveRequestState != 0 )
  {
    g4_std::vector_sociallib_SNSLeaderboard_8ac9a4::Construct(
      (std::vector<sociallib::SNSLeaderboardRowData::Self> *)&v19,
      (const std::vector<sociallib::SNSLeaderboardRowData::Self> *)(CurrentActiveRequestState + 144));
    g4_std::vector_sociallib_SNSLeaderboard_8ac9a4::Construct(
      self,
      (const std::vector<sociallib::SNSLeaderboardRowData::Self> *)&v19);
    v13 = v20;
    v12 = v19;
    if ( v20 != v19 )
    {
      v3 = v19;
      v14 = v19 + 32;
      v18 = v19 + 28;
      v17 = v19 + 24;
      v16 = v19 + 20;
      v15 = v19 + 4;
      do
      {
        v4 = v3 - v12;
        v5 = *(uint32_t *)&v14[v3 - v12];
        if ( (uint32_t *)(v5 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v5 - 12));
        }
        v6 = *(uint32_t *)&v18[v4];
        if ( (uint32_t *)(v6 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v6 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v6 - 12));
        }
        v7 = *(uint32_t *)&v17[v4];
        if ( (uint32_t *)(v7 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v7 - 12));
        }
        v8 = *(uint32_t *)&v16[v4];
        if ( (uint32_t *)(v8 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v8 - 12));
        }
        v9 = *(uint32_t *)&v15[v4];
        if ( (uint32_t *)(v9 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v9 - 12));
        }
        v10 = (uint32_t *)(*(uint32_t *)v3 - 12);
        if ( v10 != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)v3 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
        v3 += 36;
      }
      while ( v13 != v3 );
      v12 = v19;
    }
    if ( v12 != nullptr )
      opDelete(v12);
    return self;
  }
  else
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveAppScoreData  (binary VA: 0x140a710)
// Original: sociallib::ClientSNSInterface::retrieveAppScoreData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveAppScoreData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserScoreData  (binary VA: 0x140a750)
// Original: sociallib::ClientSNSInterface::retrieveUserScoreData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUserScoreData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getLeaderboardRowData  (binary VA: 0x140a790)
// Original: sociallib::ClientSNSInterface::getLeaderboardRowData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::getLeaderboardRowData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestLikeDataArray  (binary VA: 0x140a7d0)
// Original: sociallib::ClientSNSInterface::retrieveRequestLikeDataArray
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestLikeDataArray(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  uint8_t v4[12];

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  if ( CurrentActiveRequestState != 0 )
  {
    g4_std::vector_sociallib_SNSLikeData_4d2cfa::Construct(
      (std::vector<sociallib::SNSLikeData::Self> *)v4,
      (const std::vector<sociallib::SNSLikeData::Self> *)(CurrentActiveRequestState + 168));
    g4_std::vector_sociallib_SNSLikeData_4d2cfa::Construct(self, (const std::vector<sociallib::SNSLikeData::Self> *)v4);
    g4_std::vector_sociallib_SNSLikeData_4d2cfa::Destroy((std::vector<sociallib::SNSLikeData::Self> *)v4);
  }
  else
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserLikesData  (binary VA: 0x140a860)
// Original: sociallib::ClientSNSInterface::retrieveUserLikesData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUserLikesData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestLikeDataArray(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::removeAllSNSRequestsByType  (binary VA: 0x140a8a0)
// Original: sociallib::ClientSNSInterface::removeAllSNSRequestsByType
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::removeAllSNSRequestsByType(int a1, int a2)
{
  int result;
  uint32_t *v3;
  uint32_t *v4;
  sociallib::SNSRequestState::Self *v5;
  int v6;
  int v7;
  uint32_t *v8;

  result = a2;
  v3 = *(uint32_t **)(a1 + 28);
  v4 = (uint32_t *)(a1 + 28);
  while ( v3 != v4 )
  {
    v5 = (sociallib::SNSRequestState::Self *)v3[2];
    if ( v5 != nullptr && *((uint32_t *)v5 + 2) == result )
    {
      v6 = *((uint32_t *)v5 + 1);
      if ( v6 == 2 || v6 == 0 || v6 == 4 )
      {
        v7 = result;
        v8 = (uint32_t *)*v3;
        sub_1901940(v3);
        opDelete(v3);
        sociallib::SNSRequestState::Destroy(v5);
        opDelete(v5);
        v3 = v8;
        result = v7;
        continue;
      }
      v3 = (uint32_t *)*v3;
    }
    else
    {
      v3 = (uint32_t *)*v3;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::removeCurrentSNSRequestFromQueue  (binary VA: 0x140a940)
// Original: sociallib::ClientSNSInterface::removeCurrentSNSRequestFromQueue
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::removeCurrentSNSRequestFromQueue(sociallib::ClientSNSInterface::Self *self)
{
  char *v1;
  char *v2;
  char *i;
  int result;
  sociallib::SNSRequestState::Self *v5;
  int v6;

  v1 = *((char **)self + 7);
  v2 = (char *)self + 28;
  for ( i = v1; i != v2 && *(uint8_t *)(*((uint32_t *)i + 2) + 20) != 0; i = *(char **)i )
    ;
  result = 0;
  if ( v1 != v2 && i != v2 )
  {
    v5 = *((sociallib::SNSRequestState::Self **)i + 2);
    v6 = *((uint32_t *)v5 + 1);
    if ( v6 == 4 || v6 == 2 )
    {
      sub_1901940(i);
      opDelete(i);
      sociallib::SNSRequestState::Destroy(v5);
      opDelete(v5);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::cancelAllRequests  (binary VA: 0x140a9e0)
// Original: sociallib::ClientSNSInterface::cancelAllRequests
// ----------------------------------------------------------------------------
void sociallib::ClientSNSInterface::cancelAllRequests(sociallib::ClientSNSInterface::Self *self)
{
  sociallib::ClientSNSInterface::Self *v1;
  sociallib::ClientSNSInterface::Self *i;
  unsigned int v3;
  int v4;
  sociallib::CDynamicMemoryStream::Self *v5;
  sociallib::CDynamicMemoryStream::Self *v6;
  sociallib::CDynamicMemoryStream::Self *v7;
  sociallib::CDynamicMemoryStream::Self *v8;
  sociallib::CDynamicMemoryStream::Self *v9;
  sociallib::CDynamicMemoryStream::Self *v10;
  char *v11;
  sociallib::CDynamicMemoryStream::Self *v12;
  char *v13;
  int v14;
  int v15;
  int v16;
  int v17;
  sociallib::CDynamicMemoryStream::Self *v18;
  sociallib::CDynamicMemoryStream::Self *v19;
  sociallib::CDynamicMemoryStream::Self *v20;
  sociallib::CDynamicMemoryStream::Self *v21;
  sociallib::CDynamicMemoryStream::Self *v22;
  sociallib::CDynamicMemoryStream::Self *v23;
  sociallib::CDynamicMemoryStream::Self *v24;
  sociallib::CDynamicMemoryStream::Self *v25;
  sociallib::CDynamicMemoryStream::Self *v26;
  char *v27;
  char *v28;
  char *v29;
  unsigned int v30;
  sociallib::ClientSNSInterface::Self *v31;

  v1 = *((sociallib::ClientSNSInterface::Self **)self + 7);
  v29 = (char *)self + 28;
  for ( i = v1; (sociallib::ClientSNSInterface::Self *)((char *)self + 28) != i; i = *(sociallib::ClientSNSInterface::Self **)i )
    ;
  while ( v1 != (sociallib::ClientSNSInterface::Self *)v29 )
  {
    while ( 1 )
    {
      v3 = *((uint32_t *)v1 + 2);
      if ( v3 == 0 )
        break;
      v4 = *(uint32_t *)(v3 + 4);
      if ( v4 != 2 && v4 != 0 && v4 != 4 )
        break;
      v31 = *(sociallib::ClientSNSInterface::Self **)v1;
      sub_1901940(v1);
      opDelete(v1);
      *(uint32_t *)(v3 + 4) = 4;
      sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(v3 + 180));
      v5 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 172);
      v6 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 168);
      if ( v5 != v6 )
      {
        do
        {
          g4_std::string::Destroy((char *)v6 + 36);
          g4_std::string::Destroy((char *)v6 + 32);
          g4_std::string::Destroy((char *)v6 + 28);
          g4_std::string::Destroy((char *)v6 + 24);
          g4_std::string::Destroy((char *)v6 + 16);
          g4_std::string::Destroy((char *)v6 + 12);
          g4_std::string::Destroy((char *)v6 + 8);
          g4_std::string::Destroy((char *)v6 + 4);
          v20 = v6;
          v6 = (sociallib::CDynamicMemoryStream::Self *)((char *)v6 + 52);
          g4_std::string::Destroy(v20);
        }
        while ( v5 != v6 );
        v6 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 168);
      }
      if ( v6 != nullptr )
        opDelete(v6);
      v7 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 160);
      v8 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 156);
      if ( v7 != v8 )
      {
        do
        {
          g4_std::string::Destroy((char *)v8 + 8);
          g4_std::string::Destroy((char *)v8 + 4);
          v21 = v8;
          v8 = (sociallib::CDynamicMemoryStream::Self *)((char *)v8 + 12);
          g4_std::string::Destroy(v21);
        }
        while ( v7 != v8 );
        v8 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 156);
      }
      if ( v8 != nullptr )
        opDelete(v8);
      v9 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 148);
      v10 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 144);
      if ( v9 != v10 )
      {
        do
        {
          g4_std::string::Destroy((char *)v10 + 32);
          g4_std::string::Destroy((char *)v10 + 28);
          g4_std::string::Destroy((char *)v10 + 24);
          g4_std::string::Destroy((char *)v10 + 20);
          g4_std::string::Destroy((char *)v10 + 4);
          v22 = v10;
          v10 = (sociallib::CDynamicMemoryStream::Self *)((char *)v10 + 36);
          g4_std::string::Destroy(v22);
        }
        while ( v9 != v10 );
        v10 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 144);
      }
      if ( v10 != nullptr )
        opDelete(v10);
      v11 = *(char **)(v3 + 132);
      v26 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 136);
      v25 = (sociallib::CDynamicMemoryStream::Self *)v11;
      if ( v26 != (sociallib::CDynamicMemoryStream::Self *)v11 )
      {
        v12 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 132);
        v30 = v3;
        v28 = v11 + 52;
        v27 = v11 + 44;
        v13 = v11 + 56;
        do
        {
          v14 = v12 - v25;
          v15 = *(uint32_t *)&v13[v12 - v25];
          if ( (uint32_t *)(v15 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v15 - 12));
          }
          v16 = *(uint32_t *)&v28[v14];
          if ( (uint32_t *)(v16 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v16 - 12));
          }
          g4_std::string::Destroy((char *)v12 + 48);
          v17 = *(uint32_t *)&v27[v14];
          if ( (uint32_t *)(v17 - 12) != dword_213B808
            && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
          {
            g4_std::string::Rep::M_destroy((void *)(v17 - 12));
          }
          g4_std::string::Destroy((char *)v12 + 40);
          g4_std::string::Destroy((char *)v12 + 36);
          g4_std::string::Destroy((char *)v12 + 32);
          g4_std::string::Destroy((char *)v12 + 28);
          g4_std::string::Destroy((char *)v12 + 24);
          g4_std::string::Destroy((char *)v12 + 20);
          g4_std::string::Destroy((char *)v12 + 8);
          g4_std::string::Destroy((char *)v12 + 4);
          v23 = v12;
          v12 = (sociallib::CDynamicMemoryStream::Self *)((char *)v12 + 68);
          g4_std::string::Destroy(v23);
        }
        while ( v26 != v12 );
        v3 = v30;
        v25 = *(sociallib::CDynamicMemoryStream::Self **)(v30 + 132);
      }
      if ( v25 != nullptr )
        opDelete(v25);
      g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
        v3 + 100,
        *(void **)(v3 + 108));
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        v3 + 76,
        *(void **)(v3 + 84));
      v18 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 68);
      v19 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 64);
      if ( v18 != v19 )
      {
        do
        {
          v24 = v19;
          v19 = (sociallib::CDynamicMemoryStream::Self *)((char *)v19 + 4);
          g4_std::string::Destroy(v24);
        }
        while ( v18 != v19 );
        v19 = *(sociallib::CDynamicMemoryStream::Self **)(v3 + 64);
      }
      if ( v19 != nullptr )
        opDelete(v19);
      g4_std::string::Destroy(v3 + 60);
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(v3 + 36));
      g4_std::string::Destroy(v3 + 24);
      opDelete((void *)v3);
      v1 = v31;
      if ( v31 == (sociallib::ClientSNSInterface::Self *)v29 )
        return;
    }
    v1 = *(sociallib::ClientSNSInterface::Self **)v1;
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestStringMap  (binary VA: 0x140adf0)
// Original: sociallib::ClientSNSInterface::retrieveRequestStringMap
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestStringMap(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *i;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  if ( CurrentActiveRequestState != 0 )
  {
    v3 = *(uint32_t **)(CurrentActiveRequestState + 84);
    if ( v3 != nullptr )
    {
      v4 = g4_std::Rb_tree_string_pair_string_const_cfd4c6::M_copy(
             (int)(uintptr_t)(self),
             v3,
             (int)(uintptr_t)(self) + 4);
      *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(v4);
      for ( i = v4; i[2] != 0; i = (uint32_t *)i[2] )
        ;
      *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(i);
      while ( v4[3] != 0 )
        v4 = (uint32_t *)v4[3];
      *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v4);
      *((uint32_t *)self + 5) = *(uint32_t *)(CurrentActiveRequestState + 96);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveGetApplicationDetailsData  (binary VA: 0x140ae90)
// Original: sociallib::ClientSNSInterface::retrieveGetApplicationDetailsData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveGetApplicationDetailsData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringMap(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveCountry  (binary VA: 0x140aed0)
// Original: sociallib::ClientSNSInterface::retrieveCountry
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveCountry(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringMap(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserNamesData  (binary VA: 0x140af10)
// Original: sociallib::ClientSNSInterface::retrieveUserNamesData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUserNamesData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestStringMap(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestUserDataMap  (binary VA: 0x140af50)
// Original: sociallib::ClientSNSInterface::retrieveRequestUserDataMap
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestUserDataMap(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  int v3;
  int v4;
  int i;

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 4);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 4);
  if ( CurrentActiveRequestState != 0 )
  {
    v3 = *(uint32_t *)(CurrentActiveRequestState + 108);
    if ( v3 != 0 )
    {
      v4 = g4_std::Rb_tree_string_pair_string_const_586eb0::M_copy(
             self,
             v3,
             (char *)self + 4);
      *((uint32_t *)self + 2) = v4;
      for ( i = v4; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
        ;
      *((uint32_t *)self + 3) = i;
      while ( *(uint32_t *)(v4 + 12) != 0 )
        v4 = *(uint32_t *)(v4 + 12);
      *((uint32_t *)self + 4) = v4;
      *((uint32_t *)self + 5) = *(uint32_t *)(CurrentActiveRequestState + 120);
    }
  }
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveFriendDataData  (binary VA: 0x140aff0)
// Original: sociallib::ClientSNSInterface::retrieveFriendDataData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveFriendDataData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestUserDataMap(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserDataData  (binary VA: 0x140b030)
// Original: sociallib::ClientSNSInterface::retrieveUserDataData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUserDataData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestUserDataMap(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveBilateralFriendDataData  (binary VA: 0x140b070)
// Original: sociallib::ClientSNSInterface::retrieveBilateralFriendDataData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveBilateralFriendDataData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestUserDataMap(self, a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::loadDeviceConfigFromJson  (binary VA: 0x140b0b0)
// Original: sociallib::ClientSNSInterface::loadDeviceConfigFromJson
// ----------------------------------------------------------------------------
void sociallib::ClientSNSInterface::loadDeviceConfigFromJson(int a1, Json::Value::Self *a2, int a3)
{
  const Json::Value::Self *v3;
  const Json::Value::Self *v4;
  int v5;
  uint32_t *v6;
  int v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  char v11; // di
  int v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  char *v16;
  uint32_t *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  int v21;
  uint32_t *v22;
  char v23; // di
  int v24;
  int v25;
  uint32_t *v26;
  int v27;
  uint32_t *v28;
  uint32_t *v29;
  int v30;
  uint32_t *v31;
  char v32; // di
  int v33;
  int v34;
  int v35;
  int v36;
  typedef size_t _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef uint8_t _g4_t_v40[12];
  typedef uint32_t _g4_t_v41[4];
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef int _g4_t_v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef char _g4_t_v49[4];
  typedef char _g4_t_v50[4];
  typedef char _g4_t_v51[4];
  typedef void *_g4_t_v52;
  typedef uint32_t *_g4_t_v53;
  typedef uint8_t _g4_t_v54[16];
  typedef char _g4_t_v55[16];
  typedef uint8_t _g4_t_v56[16];
  typedef uint8_t _g4_t_v57[16];
  typedef uint8_t _g4_t_v58[16];
  typedef int _g4_t_v59;
  typedef int _g4_t_v60;
  typedef void *_g4_t_v61;
  typedef int *_g4_t_v62;
  typedef int *_g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef void *_g4_t_v67;
  typedef int *_g4_t_v68;
  typedef int *_g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef void *_g4_t_v73;
  typedef int *_g4_t_v74;
  typedef int *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef void *_g4_t_v80;
  typedef int *_g4_t_v81;
  typedef int *_g4_t_v82;
  typedef int _g4_t_v83;
  typedef int _g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef void *_g4_t_v87;
  typedef int *_g4_t_v88;
  typedef int *_g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef void *_g4_t_v94;
  typedef int *_g4_t_v95;
  typedef int *_g4_t_v96;
  typedef int _g4_t_v97;
  enum : size_t {
    _g4_s0 = 480u,
    _g4_s1 = (8u + sizeof(_g4_t_v37)) > _g4_s0 ? (8u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (44u + sizeof(_g4_t_v38)) > _g4_s1 ? (44u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v39)) > _g4_s2 ? (48u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (64u + sizeof(_g4_t_v40)) > _g4_s3 ? (64u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (76u + sizeof(_g4_t_v41)) > _g4_s4 ? (76u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (96u + sizeof(_g4_t_v42)) > _g4_s5 ? (96u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (100u + sizeof(_g4_t_v43)) > _g4_s6 ? (100u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (104u + sizeof(_g4_t_v44)) > _g4_s7 ? (104u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (108u + sizeof(_g4_t_v45)) > _g4_s8 ? (108u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (112u + sizeof(_g4_t_v46)) > _g4_s9 ? (112u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (116u + sizeof(_g4_t_v47)) > _g4_s10 ? (116u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (120u + sizeof(_g4_t_v48)) > _g4_s11 ? (120u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (124u + sizeof(_g4_t_v49)) > _g4_s12 ? (124u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (128u + sizeof(_g4_t_v50)) > _g4_s13 ? (128u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (132u + sizeof(_g4_t_v51)) > _g4_s14 ? (132u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (136u + sizeof(_g4_t_v52)) > _g4_s15 ? (136u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (140u + sizeof(_g4_t_v53)) > _g4_s16 ? (140u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (148u + sizeof(_g4_t_v54)) > _g4_s17 ? (148u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (164u + sizeof(_g4_t_v55)) > _g4_s18 ? (164u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (180u + sizeof(_g4_t_v56)) > _g4_s19 ? (180u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (196u + sizeof(_g4_t_v57)) > _g4_s20 ? (196u + sizeof(_g4_t_v57)) : _g4_s20,
    _g4_s22 = (212u + sizeof(_g4_t_v58)) > _g4_s21 ? (212u + sizeof(_g4_t_v58)) : _g4_s21,
    _g4_s23 = (228u + sizeof(_g4_t_v59)) > _g4_s22 ? (228u + sizeof(_g4_t_v59)) : _g4_s22,
    _g4_s24 = (232u + sizeof(_g4_t_v60)) > _g4_s23 ? (232u + sizeof(_g4_t_v60)) : _g4_s23,
    _g4_s25 = (236u + sizeof(_g4_t_v61)) > _g4_s24 ? (236u + sizeof(_g4_t_v61)) : _g4_s24,
    _g4_s26 = (240u + sizeof(_g4_t_v62)) > _g4_s25 ? (240u + sizeof(_g4_t_v62)) : _g4_s25,
    _g4_s27 = (244u + sizeof(_g4_t_v63)) > _g4_s26 ? (244u + sizeof(_g4_t_v63)) : _g4_s26,
    _g4_s28 = (248u + sizeof(_g4_t_v64)) > _g4_s27 ? (248u + sizeof(_g4_t_v64)) : _g4_s27,
    _g4_s29 = (252u + sizeof(_g4_t_v65)) > _g4_s28 ? (252u + sizeof(_g4_t_v65)) : _g4_s28,
    _g4_s30 = (256u + sizeof(_g4_t_v66)) > _g4_s29 ? (256u + sizeof(_g4_t_v66)) : _g4_s29,
    _g4_s31 = (260u + sizeof(_g4_t_v67)) > _g4_s30 ? (260u + sizeof(_g4_t_v67)) : _g4_s30,
    _g4_s32 = (264u + sizeof(_g4_t_v68)) > _g4_s31 ? (264u + sizeof(_g4_t_v68)) : _g4_s31,
    _g4_s33 = (268u + sizeof(_g4_t_v69)) > _g4_s32 ? (268u + sizeof(_g4_t_v69)) : _g4_s32,
    _g4_s34 = (272u + sizeof(_g4_t_v70)) > _g4_s33 ? (272u + sizeof(_g4_t_v70)) : _g4_s33,
    _g4_s35 = (276u + sizeof(_g4_t_v71)) > _g4_s34 ? (276u + sizeof(_g4_t_v71)) : _g4_s34,
    _g4_s36 = (280u + sizeof(_g4_t_v72)) > _g4_s35 ? (280u + sizeof(_g4_t_v72)) : _g4_s35,
    _g4_s37 = (284u + sizeof(_g4_t_v73)) > _g4_s36 ? (284u + sizeof(_g4_t_v73)) : _g4_s36,
    _g4_s38 = (288u + sizeof(_g4_t_v74)) > _g4_s37 ? (288u + sizeof(_g4_t_v74)) : _g4_s37,
    _g4_s39 = (292u + sizeof(_g4_t_v75)) > _g4_s38 ? (292u + sizeof(_g4_t_v75)) : _g4_s38,
    _g4_s40 = (296u + sizeof(_g4_t_v76)) > _g4_s39 ? (296u + sizeof(_g4_t_v76)) : _g4_s39,
    _g4_s41 = (300u + sizeof(_g4_t_v77)) > _g4_s40 ? (300u + sizeof(_g4_t_v77)) : _g4_s40,
    _g4_s42 = (304u + sizeof(_g4_t_v78)) > _g4_s41 ? (304u + sizeof(_g4_t_v78)) : _g4_s41,
    _g4_s43 = (308u + sizeof(_g4_t_v79)) > _g4_s42 ? (308u + sizeof(_g4_t_v79)) : _g4_s42,
    _g4_s44 = (312u + sizeof(_g4_t_v80)) > _g4_s43 ? (312u + sizeof(_g4_t_v80)) : _g4_s43,
    _g4_s45 = (316u + sizeof(_g4_t_v81)) > _g4_s44 ? (316u + sizeof(_g4_t_v81)) : _g4_s44,
    _g4_s46 = (320u + sizeof(_g4_t_v82)) > _g4_s45 ? (320u + sizeof(_g4_t_v82)) : _g4_s45,
    _g4_s47 = (324u + sizeof(_g4_t_v83)) > _g4_s46 ? (324u + sizeof(_g4_t_v83)) : _g4_s46,
    _g4_s48 = (328u + sizeof(_g4_t_v84)) > _g4_s47 ? (328u + sizeof(_g4_t_v84)) : _g4_s47,
    _g4_s49 = (332u + sizeof(_g4_t_v85)) > _g4_s48 ? (332u + sizeof(_g4_t_v85)) : _g4_s48,
    _g4_s50 = (336u + sizeof(_g4_t_v86)) > _g4_s49 ? (336u + sizeof(_g4_t_v86)) : _g4_s49,
    _g4_s51 = (340u + sizeof(_g4_t_v87)) > _g4_s50 ? (340u + sizeof(_g4_t_v87)) : _g4_s50,
    _g4_s52 = (344u + sizeof(_g4_t_v88)) > _g4_s51 ? (344u + sizeof(_g4_t_v88)) : _g4_s51,
    _g4_s53 = (348u + sizeof(_g4_t_v89)) > _g4_s52 ? (348u + sizeof(_g4_t_v89)) : _g4_s52,
    _g4_s54 = (352u + sizeof(_g4_t_v90)) > _g4_s53 ? (352u + sizeof(_g4_t_v90)) : _g4_s53,
    _g4_s55 = (356u + sizeof(_g4_t_v91)) > _g4_s54 ? (356u + sizeof(_g4_t_v91)) : _g4_s54,
    _g4_s56 = (360u + sizeof(_g4_t_v92)) > _g4_s55 ? (360u + sizeof(_g4_t_v92)) : _g4_s55,
    _g4_s57 = (364u + sizeof(_g4_t_v93)) > _g4_s56 ? (364u + sizeof(_g4_t_v93)) : _g4_s56,
    _g4_s58 = (368u + sizeof(_g4_t_v94)) > _g4_s57 ? (368u + sizeof(_g4_t_v94)) : _g4_s57,
    _g4_s59 = (372u + sizeof(_g4_t_v95)) > _g4_s58 ? (372u + sizeof(_g4_t_v95)) : _g4_s58,
    _g4_s60 = (376u + sizeof(_g4_t_v96)) > _g4_s59 ? (376u + sizeof(_g4_t_v96)) : _g4_s59,
    _g4_s61 = (380u + sizeof(_g4_t_v97)) > _g4_s60 ? (380u + sizeof(_g4_t_v97)) : _g4_s60
  };
  alignas(16) uint8_t _g4_sf[_g4_s61];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 8u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 44u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 96u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 100u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 104u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 108u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 112u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 116u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 120u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 124u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 128u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 132u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 136u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 140u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 148u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 164u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 180u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 196u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 212u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 228u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 232u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 236u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 240u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 244u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 248u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 252u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 256u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 260u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 264u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 268u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 272u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 276u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 280u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 284u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 288u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 292u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 296u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 300u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 304u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 308u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 312u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 316u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 320u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 324u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 328u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 332u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 336u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 340u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 344u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 348u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 352u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 356u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 360u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 364u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 368u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 372u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 376u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 380u);

  if ( Json::Value::isMember(a2, "snsConfig") )
  {
    v3 = (const Json::Value::Self *)Json::Value::opIndex(a2, "snsConfig");
    Json::Value::Construct((Json::Value::Self *)v54, v3);
    v42 = (int)(uintptr_t)(&dword_213B814);
    switch ( a3 )
    {
      case 0:
        v37 = 5;
        v16 = "Win32";
        goto LABEL_34;
      case 1:
        v37 = 6;
        v16 = "iPhone";
        goto LABEL_34;
      case 2:
        v37 = 7;
        v16 = "Android";
        goto LABEL_34;
      case 3:
        v37 = 13;
        v16 = "WindowsPhone8";
        goto LABEL_34;
      case 4:
        v37 = 8;
        v16 = "Windows8";
LABEL_34:
        g4_std_compat::string_assign((int)(uintptr_t)(&v42), v16, v37);
        break;
      default:
        break;
    }
    if ( Json::Value::isMember((Json::Value::Self *)v54, (char **)&v42) )
    {
      v4 = (const Json::Value::Self *)Json::Value::opIndex((Json::Value::Self *)v54, (char **)&v42);
      Json::Value::Construct((Json::Value::Self *)v55, v4);
      v39 = Json::Value::size((Json::Value::Self *)v55);
      v43 = (int)(uintptr_t)(&dword_213B814);
      Json::Value::getMemberNames(v5, (Json::Value::Self *)&v52, v55);
      if ( v39 == 0 )
        goto LABEL_24;
      v38 = 0;
      while ( 1 )
      {
        g4_std::string::assign_str(&v43, (char *)v52 + 4 * v38);
        if ( g4_std::string::compare((int)(uintptr_t)(&v43), "Test") != 0 )
        {
          if ( g4_std::string::compare((int)(uintptr_t)(&v43), "Ldap") == 0 )
          {
            v45 = 3;
            v17 = (uint32_t *)(*(uint8_t **)unk_2119850);
            if ( (*(uint8_t **)unk_2119850) != 0 )
            {
              v18 = a3;
              v19 = (uint32_t *)(&unk_211984C);
              do
              {
                while ( v17[4] >= a3 )
                {
                  v19 = v17;
                  v17 = (uint32_t *)v17[2];
                  if ( v17 == nullptr )
                    goto LABEL_45;
                }
                v17 = (uint32_t *)v17[3];
              }
              while ( v17 != nullptr );
LABEL_45:
              if ( v19 == (uint32_t *)&unk_211984C || v19[4] > a3 )
              {
LABEL_47:
                v68 = &v66;
                v69 = &v66;
                v84 = v18;
                v88 = &v86;
                v89 = &v86;
                v66 = 0;
                v67 = nullptr;
                v70 = 0;
                v86 = 0;
                v87 = nullptr;
                v90 = 0;
                g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v41);
                v19 = (uint32_t *)v41[0];
                g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
                  (int)(uintptr_t)(&v85),
                  v87);
                g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
                  (int)(uintptr_t)(&v65),
                  v67);
              }
              v20 = (uint32_t *)v19[7];
              v21 = v45;
              if ( v20 == nullptr )
              {
                v20 = v19 + 6;
                goto LABEL_81;
              }
              while ( 1 )
              {
                v24 = v20[4];
                if ( v45 < v24 )
                {
                  v22 = (uint32_t *)v20[2];
                  v23 = 1;
                  if ( v22 == nullptr )
                    goto LABEL_54;
                }
                else
                {
                  v22 = (uint32_t *)v20[3];
                  v23 = 0;
                  if ( v22 == nullptr )
                  {
LABEL_54:
                    if ( v23 == 0 )
                    {
LABEL_55:
                      if ( v21 > v24 )
                        goto LABEL_56;
                      goto LABEL_23;
                    }
LABEL_81:
                    if ( (uint32_t *)v19[8] == v20 )
                      goto LABEL_56;
                    v24 = *(uint32_t *)(sub_19048F0(v20) + 16);
                    v21 = v45;
                    goto LABEL_55;
                  }
                }
                v20 = v22;
              }
            }
            v18 = a3;
            goto LABEL_47;
          }
          if ( g4_std::string::compare((int)(uintptr_t)(&v43), "Facebook") != 0 )
          {
            if ( g4_std::string::compare((int)(uintptr_t)(&v43), "GameAPI") != 0 )
            {
              if ( g4_std::string::compare((int)(uintptr_t)(&v43), "GameCenter") != 0 && g4_std::string::compare((int)(uintptr_t)(&v43), "GLLive") != 0 )
              {
                if ( g4_std::string::compare((int)(uintptr_t)(&v43), "Twitter") != 0 )
                {
                  if ( g4_std::string::compare((int)(uintptr_t)(&v43), "EmailPhonebook") != 0 )
                    g4_std::string::compare((int)(uintptr_t)(&v43), "NumberPhonebook");
                }
                else
                {
                  v48 = 7;
                  g4_std::map_sociallib_SNSInterfaceDe_2a3f71::opIndex(
                    &sociallib::ClientSNSInterface::s_supportedSNSDeviceConfigData,
                    &a3);
                  g4_std::set_sociallib_ClientSNSEnum_c5a1e1::insert(v40);
                  Json::Value::get((Json::Value::Self *)v56, v55, (const Json::Value::Self **)&v43, (Json::Value::Self *)v55);
                  v34 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v56, "apiKey"));
                  Json::Value::asString((Json::Value::Self *)v49, v34);
                  Json::Value::Destroy((Json::Value::Self *)v56);
                  Json::Value::get((Json::Value::Self *)v57, v55, (const Json::Value::Self **)&v43, (Json::Value::Self *)v55);
                  v35 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v57, "consumerKey"));
                  Json::Value::asString((Json::Value::Self *)v50, v35);
                  Json::Value::Destroy((Json::Value::Self *)v57);
                  Json::Value::get((Json::Value::Self *)v58, v55, (const Json::Value::Self **)&v43, (Json::Value::Self *)v55);
                  v36 = (int)(uintptr_t)(Json::Value::opIndex((Json::Value::Self *)v58, "consumerSecret"));
                  Json::Value::asString((Json::Value::Self *)v51, v36);
                  Json::Value::Destroy((Json::Value::Self *)v58);
                  g4_std::string::Destroy(v51);
                  g4_std::string::Destroy(v50);
                  g4_std::string::Destroy(v49);
                }
              }
            }
            else if ( a3 == 2 )
            {
              v47 = 13;
              g4_std::map_sociallib_SNSInterfaceDe_2a3f71::opIndex(
                &sociallib::ClientSNSInterface::s_supportedSNSDeviceConfigData,
                &a3);
              g4_std::set_sociallib_ClientSNSEnum_c5a1e1::insert(v40);
            }
            goto LABEL_23;
          }
          v46 = 4;
          v26 = (uint32_t *)(*(uint8_t **)unk_2119850);
          if ( (*(uint8_t **)unk_2119850) != 0 )
          {
            v27 = a3;
            v28 = (uint32_t *)(&unk_211984C);
            do
            {
              while ( a3 <= v26[4] )
              {
                v28 = v26;
                v26 = (uint32_t *)v26[2];
                if ( v26 == nullptr )
                  goto LABEL_66;
              }
              v26 = (uint32_t *)v26[3];
            }
            while ( v26 != nullptr );
LABEL_66:
            if ( v28 == (uint32_t *)&unk_211984C || a3 < v28[4] )
            {
LABEL_68:
              v74 = &v72;
              v75 = &v72;
              v91 = v27;
              v95 = &v93;
              v96 = &v93;
              v72 = 0;
              v73 = nullptr;
              v76 = 0;
              v93 = 0;
              v94 = nullptr;
              v97 = 0;
              g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v41);
              v28 = (uint32_t *)v41[0];
              g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
                (int)(uintptr_t)(&v92),
                v94);
              g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
                (int)(uintptr_t)(&v71),
                v73);
            }
            v29 = (uint32_t *)v28[7];
            v30 = v46;
            if ( v29 == nullptr )
            {
              v29 = v28 + 6;
              goto LABEL_83;
            }
            while ( 1 )
            {
              v33 = v29[4];
              if ( v46 < v33 )
              {
                v31 = (uint32_t *)v29[2];
                v32 = 1;
                if ( v31 == nullptr )
                  goto LABEL_75;
              }
              else
              {
                v31 = (uint32_t *)v29[3];
                v32 = 0;
                if ( v31 == nullptr )
                {
LABEL_75:
                  if ( v32 == 0 )
                  {
LABEL_76:
                    if ( v33 < v30 )
                      goto LABEL_56;
                    goto LABEL_23;
                  }
LABEL_83:
                  if ( (uint32_t *)v28[8] == v29 )
                    goto LABEL_56;
                  v33 = *(uint32_t *)(sub_19048F0(v29) + 16);
                  v30 = v46;
                  goto LABEL_76;
                }
              }
              v29 = v31;
            }
          }
          v27 = a3;
          goto LABEL_68;
        }
        v44 = 2;
        v6 = (uint32_t *)(*(uint8_t **)unk_2119850);
        if ( (*(uint8_t **)unk_2119850) == 0 )
          break;
        v7 = a3;
        v8 = (uint32_t *)(&unk_211984C);
        do
        {
          while ( v6[4] >= a3 )
          {
            v8 = v6;
            v6 = (uint32_t *)v6[2];
            if ( v6 == nullptr )
              goto LABEL_12;
          }
          v6 = (uint32_t *)v6[3];
        }
        while ( v6 != nullptr );
LABEL_12:
        if ( v8 == (uint32_t *)&unk_211984C || v8[4] > a3 )
          goto LABEL_14;
LABEL_15:
        v9 = (uint32_t *)v8[7];
        if ( v9 == nullptr )
        {
          v9 = v8 + 6;
LABEL_57:
          if ( (uint32_t *)v8[8] == v9 )
            goto LABEL_56;
          v25 = sub_19048F0(v9);
          if ( v44 > *(uint32_t *)(v25 + 16) )
            goto LABEL_56;
          goto LABEL_23;
        }
        while ( 1 )
        {
          v12 = v9[4];
          if ( v44 >= v12 )
            break;
          v10 = (uint32_t *)v9[2];
          v11 = 1;
          if ( v10 == nullptr )
            goto LABEL_21;
LABEL_18:
          v9 = v10;
        }
        v10 = (uint32_t *)v9[3];
        v11 = 0;
        if ( v10 != nullptr )
          goto LABEL_18;
LABEL_21:
        if ( v11 != 0 )
          goto LABEL_57;
        if ( v44 > v12 )
LABEL_56:
          g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_insert(v41);
LABEL_23:
        if ( ++v38 == v39 )
        {
LABEL_24:
          v13 = v53;
          v14 = (uint32_t *)(v52);
          if ( v53 != v52 )
          {
            do
            {
              v15 = (uint32_t *)(*v14 - 12);
              if ( v15 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
                g4_std::string::Rep::M_destroy(v15);
              ++v14;
            }
            while ( v13 != v14 );
            v14 = (uint32_t *)(v52);
          }
          if ( v14 != nullptr )
            opDelete(v14);
          g4_std::string::Destroy(&v43);
          Json::Value::Destroy((Json::Value::Self *)v55);
          goto LABEL_31;
        }
      }
      v7 = a3;
LABEL_14:
      v62 = &v60;
      v63 = &v60;
      v77 = v7;
      v81 = &v79;
      v82 = &v79;
      v60 = 0;
      v61 = nullptr;
      v64 = 0;
      v79 = 0;
      v80 = nullptr;
      v83 = 0;
      g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v41);
      v8 = (uint32_t *)v41[0];
      g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
        (int)(uintptr_t)(&v78),
        v80);
      g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
        (int)(uintptr_t)(&v59),
        v61);
      goto LABEL_15;
    }
LABEL_31:
    g4_std::string::Destroy(&v42);
    Json::Value::Destroy((Json::Value::Self *)v54);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::loadSnsConfigJson  (binary VA: 0x140bb70)
// Original: sociallib::ClientSNSInterface::loadSnsConfigJson
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::loadSnsConfigJson(sociallib::ClientSNSInterface::Self *self)
{
  char *v1;
  char *v2;
  void *v3;
  bool v4;
  int v5;
  int i;
  char *v7;
  char *v8;
  void *v9;
  int v10;
  int j;
  char *v12;
  char *v13;
  void *v14;
  int v15;
  int k;
  char *v17;
  char *v18;
  void *v19;
  int v20;
  int m;
  char *v22;
  char *v23;
  void *v24;
  void *v25;
  int v26;
  int n;
  char *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  void *v36;
  void **v37;
  unsigned int v38;
  void *v39;
  void *v40;
  void **v41;
  unsigned int v42;
  void *v43;
  int v45;
  int v46;
  typedef char *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef void *_g4_t_v49;
  typedef void *_g4_t_v50;
  typedef void *_g4_t_v51;
  typedef void *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef int _g4_t_v54;
  typedef uint8_t _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef uint32_t _g4_t_v59[4];
  typedef int _g4_t_v60;
  typedef uint8_t _g4_t_v61[16];
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef void *_g4_t_v64;
  typedef int *_g4_t_v65;
  typedef int *_g4_t_v66;
  typedef int _g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef void *_g4_t_v70;
  typedef int *_g4_t_v71;
  typedef int *_g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef void *_g4_t_v76;
  typedef int *_g4_t_v77;
  typedef int *_g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef int _g4_t_v81;
  typedef void *_g4_t_v82;
  typedef int *_g4_t_v83;
  typedef int *_g4_t_v84;
  typedef int _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef void *_g4_t_v88;
  typedef int *_g4_t_v89;
  typedef int *_g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef void *_g4_t_v94;
  typedef int *_g4_t_v95;
  typedef int *_g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef void *_g4_t_v100;
  typedef int *_g4_t_v101;
  typedef int *_g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef void *_g4_t_v106;
  typedef int *_g4_t_v107;
  typedef int *_g4_t_v108;
  typedef int _g4_t_v109;
  typedef int _g4_t_v110;
  typedef int _g4_t_v111;
  typedef void *_g4_t_v112;
  typedef int *_g4_t_v113;
  typedef int *_g4_t_v114;
  typedef int _g4_t_v115;
  typedef int _g4_t_v116;
  typedef int _g4_t_v117;
  typedef void *_g4_t_v118;
  typedef int *_g4_t_v119;
  typedef int *_g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int _g4_t_v123;
  typedef int _g4_t_v124;
  typedef void *_g4_t_v125;
  typedef int *_g4_t_v126;
  typedef int *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef void *_g4_t_v132;
  typedef int *_g4_t_v133;
  typedef int *_g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef void *_g4_t_v139;
  typedef int *_g4_t_v140;
  typedef int *_g4_t_v141;
  typedef int _g4_t_v142;
  typedef int _g4_t_v143;
  typedef int _g4_t_v144;
  typedef int _g4_t_v145;
  typedef void *_g4_t_v146;
  typedef int *_g4_t_v147;
  typedef int *_g4_t_v148;
  typedef int _g4_t_v149;
  typedef int _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef void *_g4_t_v153;
  typedef int *_g4_t_v154;
  typedef int *_g4_t_v155;
  typedef int _g4_t_v156;
  typedef void *_g4_t_v157[5];
  typedef unsigned int _g4_t_v158;
  typedef int _g4_t_v159;
  typedef void *_g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef unsigned int _g4_t_v163;
  typedef int _g4_t_v164;
  typedef int _g4_t_v165;
  typedef char *_g4_t_v166;
  typedef char _g4_t_v167[24];
  typedef char _g4_t_v168[36];
  enum : size_t {
    _g4_s0 = 656u,
    _g4_s1 = (0u + sizeof(_g4_t_v47)) > _g4_s0 ? (0u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v48)) > _g4_s1 ? (0u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v49)) > _g4_s2 ? (4u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v50)) > _g4_s3 ? (4u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v51)) > _g4_s4 ? (4u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (4u + sizeof(_g4_t_v52)) > _g4_s5 ? (4u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (4u + sizeof(_g4_t_v53)) > _g4_s6 ? (4u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (8u + sizeof(_g4_t_v54)) > _g4_s7 ? (8u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (15u + sizeof(_g4_t_v55)) > _g4_s8 ? (15u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (16u + sizeof(_g4_t_v56)) > _g4_s9 ? (16u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v57)) > _g4_s10 ? (20u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v58)) > _g4_s11 ? (24u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v59)) > _g4_s12 ? (28u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (47u + sizeof(_g4_t_v60)) > _g4_s13 ? (47u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v61)) > _g4_s14 ? (52u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (68u + sizeof(_g4_t_v62)) > _g4_s15 ? (68u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v63)) > _g4_s16 ? (72u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (76u + sizeof(_g4_t_v64)) > _g4_s17 ? (76u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (80u + sizeof(_g4_t_v65)) > _g4_s18 ? (80u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (84u + sizeof(_g4_t_v66)) > _g4_s19 ? (84u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v67)) > _g4_s20 ? (88u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (92u + sizeof(_g4_t_v68)) > _g4_s21 ? (92u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (96u + sizeof(_g4_t_v69)) > _g4_s22 ? (96u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (100u + sizeof(_g4_t_v70)) > _g4_s23 ? (100u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (104u + sizeof(_g4_t_v71)) > _g4_s24 ? (104u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (108u + sizeof(_g4_t_v72)) > _g4_s25 ? (108u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (112u + sizeof(_g4_t_v73)) > _g4_s26 ? (112u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (116u + sizeof(_g4_t_v74)) > _g4_s27 ? (116u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v75)) > _g4_s28 ? (120u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v76)) > _g4_s29 ? (124u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v77)) > _g4_s30 ? (128u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (132u + sizeof(_g4_t_v78)) > _g4_s31 ? (132u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (136u + sizeof(_g4_t_v79)) > _g4_s32 ? (136u + sizeof(_g4_t_v79)) : _g4_s32,
    _g4_s34 = (140u + sizeof(_g4_t_v80)) > _g4_s33 ? (140u + sizeof(_g4_t_v80)) : _g4_s33,
    _g4_s35 = (144u + sizeof(_g4_t_v81)) > _g4_s34 ? (144u + sizeof(_g4_t_v81)) : _g4_s34,
    _g4_s36 = (148u + sizeof(_g4_t_v82)) > _g4_s35 ? (148u + sizeof(_g4_t_v82)) : _g4_s35,
    _g4_s37 = (152u + sizeof(_g4_t_v83)) > _g4_s36 ? (152u + sizeof(_g4_t_v83)) : _g4_s36,
    _g4_s38 = (156u + sizeof(_g4_t_v84)) > _g4_s37 ? (156u + sizeof(_g4_t_v84)) : _g4_s37,
    _g4_s39 = (160u + sizeof(_g4_t_v85)) > _g4_s38 ? (160u + sizeof(_g4_t_v85)) : _g4_s38,
    _g4_s40 = (164u + sizeof(_g4_t_v86)) > _g4_s39 ? (164u + sizeof(_g4_t_v86)) : _g4_s39,
    _g4_s41 = (168u + sizeof(_g4_t_v87)) > _g4_s40 ? (168u + sizeof(_g4_t_v87)) : _g4_s40,
    _g4_s42 = (172u + sizeof(_g4_t_v88)) > _g4_s41 ? (172u + sizeof(_g4_t_v88)) : _g4_s41,
    _g4_s43 = (176u + sizeof(_g4_t_v89)) > _g4_s42 ? (176u + sizeof(_g4_t_v89)) : _g4_s42,
    _g4_s44 = (180u + sizeof(_g4_t_v90)) > _g4_s43 ? (180u + sizeof(_g4_t_v90)) : _g4_s43,
    _g4_s45 = (184u + sizeof(_g4_t_v91)) > _g4_s44 ? (184u + sizeof(_g4_t_v91)) : _g4_s44,
    _g4_s46 = (188u + sizeof(_g4_t_v92)) > _g4_s45 ? (188u + sizeof(_g4_t_v92)) : _g4_s45,
    _g4_s47 = (192u + sizeof(_g4_t_v93)) > _g4_s46 ? (192u + sizeof(_g4_t_v93)) : _g4_s46,
    _g4_s48 = (196u + sizeof(_g4_t_v94)) > _g4_s47 ? (196u + sizeof(_g4_t_v94)) : _g4_s47,
    _g4_s49 = (200u + sizeof(_g4_t_v95)) > _g4_s48 ? (200u + sizeof(_g4_t_v95)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v96)) > _g4_s49 ? (204u + sizeof(_g4_t_v96)) : _g4_s49,
    _g4_s51 = (208u + sizeof(_g4_t_v97)) > _g4_s50 ? (208u + sizeof(_g4_t_v97)) : _g4_s50,
    _g4_s52 = (212u + sizeof(_g4_t_v98)) > _g4_s51 ? (212u + sizeof(_g4_t_v98)) : _g4_s51,
    _g4_s53 = (216u + sizeof(_g4_t_v99)) > _g4_s52 ? (216u + sizeof(_g4_t_v99)) : _g4_s52,
    _g4_s54 = (220u + sizeof(_g4_t_v100)) > _g4_s53 ? (220u + sizeof(_g4_t_v100)) : _g4_s53,
    _g4_s55 = (224u + sizeof(_g4_t_v101)) > _g4_s54 ? (224u + sizeof(_g4_t_v101)) : _g4_s54,
    _g4_s56 = (228u + sizeof(_g4_t_v102)) > _g4_s55 ? (228u + sizeof(_g4_t_v102)) : _g4_s55,
    _g4_s57 = (232u + sizeof(_g4_t_v103)) > _g4_s56 ? (232u + sizeof(_g4_t_v103)) : _g4_s56,
    _g4_s58 = (236u + sizeof(_g4_t_v104)) > _g4_s57 ? (236u + sizeof(_g4_t_v104)) : _g4_s57,
    _g4_s59 = (240u + sizeof(_g4_t_v105)) > _g4_s58 ? (240u + sizeof(_g4_t_v105)) : _g4_s58,
    _g4_s60 = (244u + sizeof(_g4_t_v106)) > _g4_s59 ? (244u + sizeof(_g4_t_v106)) : _g4_s59,
    _g4_s61 = (248u + sizeof(_g4_t_v107)) > _g4_s60 ? (248u + sizeof(_g4_t_v107)) : _g4_s60,
    _g4_s62 = (252u + sizeof(_g4_t_v108)) > _g4_s61 ? (252u + sizeof(_g4_t_v108)) : _g4_s61,
    _g4_s63 = (256u + sizeof(_g4_t_v109)) > _g4_s62 ? (256u + sizeof(_g4_t_v109)) : _g4_s62,
    _g4_s64 = (260u + sizeof(_g4_t_v110)) > _g4_s63 ? (260u + sizeof(_g4_t_v110)) : _g4_s63,
    _g4_s65 = (264u + sizeof(_g4_t_v111)) > _g4_s64 ? (264u + sizeof(_g4_t_v111)) : _g4_s64,
    _g4_s66 = (268u + sizeof(_g4_t_v112)) > _g4_s65 ? (268u + sizeof(_g4_t_v112)) : _g4_s65,
    _g4_s67 = (272u + sizeof(_g4_t_v113)) > _g4_s66 ? (272u + sizeof(_g4_t_v113)) : _g4_s66,
    _g4_s68 = (276u + sizeof(_g4_t_v114)) > _g4_s67 ? (276u + sizeof(_g4_t_v114)) : _g4_s67,
    _g4_s69 = (280u + sizeof(_g4_t_v115)) > _g4_s68 ? (280u + sizeof(_g4_t_v115)) : _g4_s68,
    _g4_s70 = (284u + sizeof(_g4_t_v116)) > _g4_s69 ? (284u + sizeof(_g4_t_v116)) : _g4_s69,
    _g4_s71 = (288u + sizeof(_g4_t_v117)) > _g4_s70 ? (288u + sizeof(_g4_t_v117)) : _g4_s70,
    _g4_s72 = (292u + sizeof(_g4_t_v118)) > _g4_s71 ? (292u + sizeof(_g4_t_v118)) : _g4_s71,
    _g4_s73 = (296u + sizeof(_g4_t_v119)) > _g4_s72 ? (296u + sizeof(_g4_t_v119)) : _g4_s72,
    _g4_s74 = (300u + sizeof(_g4_t_v120)) > _g4_s73 ? (300u + sizeof(_g4_t_v120)) : _g4_s73,
    _g4_s75 = (304u + sizeof(_g4_t_v121)) > _g4_s74 ? (304u + sizeof(_g4_t_v121)) : _g4_s74,
    _g4_s76 = (308u + sizeof(_g4_t_v122)) > _g4_s75 ? (308u + sizeof(_g4_t_v122)) : _g4_s75,
    _g4_s77 = (312u + sizeof(_g4_t_v123)) > _g4_s76 ? (312u + sizeof(_g4_t_v123)) : _g4_s76,
    _g4_s78 = (316u + sizeof(_g4_t_v124)) > _g4_s77 ? (316u + sizeof(_g4_t_v124)) : _g4_s77,
    _g4_s79 = (320u + sizeof(_g4_t_v125)) > _g4_s78 ? (320u + sizeof(_g4_t_v125)) : _g4_s78,
    _g4_s80 = (324u + sizeof(_g4_t_v126)) > _g4_s79 ? (324u + sizeof(_g4_t_v126)) : _g4_s79,
    _g4_s81 = (328u + sizeof(_g4_t_v127)) > _g4_s80 ? (328u + sizeof(_g4_t_v127)) : _g4_s80,
    _g4_s82 = (332u + sizeof(_g4_t_v128)) > _g4_s81 ? (332u + sizeof(_g4_t_v128)) : _g4_s81,
    _g4_s83 = (336u + sizeof(_g4_t_v129)) > _g4_s82 ? (336u + sizeof(_g4_t_v129)) : _g4_s82,
    _g4_s84 = (340u + sizeof(_g4_t_v130)) > _g4_s83 ? (340u + sizeof(_g4_t_v130)) : _g4_s83,
    _g4_s85 = (344u + sizeof(_g4_t_v131)) > _g4_s84 ? (344u + sizeof(_g4_t_v131)) : _g4_s84,
    _g4_s86 = (348u + sizeof(_g4_t_v132)) > _g4_s85 ? (348u + sizeof(_g4_t_v132)) : _g4_s85,
    _g4_s87 = (352u + sizeof(_g4_t_v133)) > _g4_s86 ? (352u + sizeof(_g4_t_v133)) : _g4_s86,
    _g4_s88 = (356u + sizeof(_g4_t_v134)) > _g4_s87 ? (356u + sizeof(_g4_t_v134)) : _g4_s87,
    _g4_s89 = (360u + sizeof(_g4_t_v135)) > _g4_s88 ? (360u + sizeof(_g4_t_v135)) : _g4_s88,
    _g4_s90 = (364u + sizeof(_g4_t_v136)) > _g4_s89 ? (364u + sizeof(_g4_t_v136)) : _g4_s89,
    _g4_s91 = (368u + sizeof(_g4_t_v137)) > _g4_s90 ? (368u + sizeof(_g4_t_v137)) : _g4_s90,
    _g4_s92 = (372u + sizeof(_g4_t_v138)) > _g4_s91 ? (372u + sizeof(_g4_t_v138)) : _g4_s91,
    _g4_s93 = (376u + sizeof(_g4_t_v139)) > _g4_s92 ? (376u + sizeof(_g4_t_v139)) : _g4_s92,
    _g4_s94 = (380u + sizeof(_g4_t_v140)) > _g4_s93 ? (380u + sizeof(_g4_t_v140)) : _g4_s93,
    _g4_s95 = (384u + sizeof(_g4_t_v141)) > _g4_s94 ? (384u + sizeof(_g4_t_v141)) : _g4_s94,
    _g4_s96 = (388u + sizeof(_g4_t_v142)) > _g4_s95 ? (388u + sizeof(_g4_t_v142)) : _g4_s95,
    _g4_s97 = (392u + sizeof(_g4_t_v143)) > _g4_s96 ? (392u + sizeof(_g4_t_v143)) : _g4_s96,
    _g4_s98 = (396u + sizeof(_g4_t_v144)) > _g4_s97 ? (396u + sizeof(_g4_t_v144)) : _g4_s97,
    _g4_s99 = (400u + sizeof(_g4_t_v145)) > _g4_s98 ? (400u + sizeof(_g4_t_v145)) : _g4_s98,
    _g4_s100 = (404u + sizeof(_g4_t_v146)) > _g4_s99 ? (404u + sizeof(_g4_t_v146)) : _g4_s99,
    _g4_s101 = (408u + sizeof(_g4_t_v147)) > _g4_s100 ? (408u + sizeof(_g4_t_v147)) : _g4_s100,
    _g4_s102 = (412u + sizeof(_g4_t_v148)) > _g4_s101 ? (412u + sizeof(_g4_t_v148)) : _g4_s101,
    _g4_s103 = (416u + sizeof(_g4_t_v149)) > _g4_s102 ? (416u + sizeof(_g4_t_v149)) : _g4_s102,
    _g4_s104 = (420u + sizeof(_g4_t_v150)) > _g4_s103 ? (420u + sizeof(_g4_t_v150)) : _g4_s103,
    _g4_s105 = (424u + sizeof(_g4_t_v151)) > _g4_s104 ? (424u + sizeof(_g4_t_v151)) : _g4_s104,
    _g4_s106 = (428u + sizeof(_g4_t_v152)) > _g4_s105 ? (428u + sizeof(_g4_t_v152)) : _g4_s105,
    _g4_s107 = (432u + sizeof(_g4_t_v153)) > _g4_s106 ? (432u + sizeof(_g4_t_v153)) : _g4_s106,
    _g4_s108 = (436u + sizeof(_g4_t_v154)) > _g4_s107 ? (436u + sizeof(_g4_t_v154)) : _g4_s107,
    _g4_s109 = (440u + sizeof(_g4_t_v155)) > _g4_s108 ? (440u + sizeof(_g4_t_v155)) : _g4_s108,
    _g4_s110 = (444u + sizeof(_g4_t_v156)) > _g4_s109 ? (444u + sizeof(_g4_t_v156)) : _g4_s109,
    _g4_s111 = (448u + sizeof(_g4_t_v157)) > _g4_s110 ? (448u + sizeof(_g4_t_v157)) : _g4_s110,
    _g4_s112 = (468u + sizeof(_g4_t_v158)) > _g4_s111 ? (468u + sizeof(_g4_t_v158)) : _g4_s111,
    _g4_s113 = (484u + sizeof(_g4_t_v159)) > _g4_s112 ? (484u + sizeof(_g4_t_v159)) : _g4_s112,
    _g4_s114 = (488u + sizeof(_g4_t_v160)) > _g4_s113 ? (488u + sizeof(_g4_t_v160)) : _g4_s113,
    _g4_s115 = (496u + sizeof(_g4_t_v161)) > _g4_s114 ? (496u + sizeof(_g4_t_v161)) : _g4_s114,
    _g4_s116 = (504u + sizeof(_g4_t_v162)) > _g4_s115 ? (504u + sizeof(_g4_t_v162)) : _g4_s115,
    _g4_s117 = (508u + sizeof(_g4_t_v163)) > _g4_s116 ? (508u + sizeof(_g4_t_v163)) : _g4_s116,
    _g4_s118 = (512u + sizeof(_g4_t_v164)) > _g4_s117 ? (512u + sizeof(_g4_t_v164)) : _g4_s117,
    _g4_s119 = (516u + sizeof(_g4_t_v165)) > _g4_s118 ? (516u + sizeof(_g4_t_v165)) : _g4_s118,
    _g4_s120 = (524u + sizeof(_g4_t_v166)) > _g4_s119 ? (524u + sizeof(_g4_t_v166)) : _g4_s119,
    _g4_s121 = (528u + sizeof(_g4_t_v167)) > _g4_s120 ? (528u + sizeof(_g4_t_v167)) : _g4_s120,
    _g4_s122 = (552u + sizeof(_g4_t_v168)) > _g4_s121 ? (552u + sizeof(_g4_t_v168)) : _g4_s121
  };
  alignas(16) uint8_t _g4_sf[_g4_s122];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 0u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 4u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 4u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 4u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 8u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 15u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 16u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 47u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 52u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 68u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 72u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 76u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 80u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 84u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 88u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 92u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 96u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 100u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 104u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 108u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 112u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 116u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 120u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 124u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 128u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 132u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 136u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 140u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 144u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 148u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 152u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 156u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 160u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 164u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 168u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 172u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 176u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 180u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 184u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 188u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 192u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 196u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 200u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 204u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 208u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 212u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 216u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 220u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 224u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 228u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 232u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 236u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 240u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 244u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 248u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 252u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 256u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 260u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 264u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 268u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 272u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 276u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 280u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 284u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 288u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 292u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 296u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 300u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 304u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 308u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 312u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 316u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 320u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 324u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 328u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 332u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 336u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 340u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 344u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 348u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 352u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 356u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 360u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 364u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 368u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 372u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 376u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 380u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 384u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 388u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 392u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 396u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 400u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 404u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 408u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 412u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 416u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 420u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 424u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 428u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 432u);
  _g4_t_v154 &v154 = *reinterpret_cast<_g4_t_v154 *>(_g4_sf + 436u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 440u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 444u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 448u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 468u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 484u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 488u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 496u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 504u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 508u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 512u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 516u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 524u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 528u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 552u);

  v47 = (char *)(sub_B97CB0((int)(uintptr_t)("snsconfig.json")));
  Json::Value::Construct((int)(uintptr_t)(v61), nullptr);
  Json::Reader::Construct((Json::Reader::Self *)v157);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v60) + 1, v47, (int)(uintptr_t)(&v60));
  v55 = Json::Reader::parse((const char **)v157, (int)(uintptr_t)(&v60) + 1, (Json::Value::Self *)v61, 1);
  g4_std::string::Destroy((char *)&v60 + 1);
  v65 = &v63;
  v66 = &v63;
  v63 = 0;
  v64 = nullptr;
  v67 = 0;
  v1 = (char *)(*(uint8_t **)unk_2119850);
  v2 = (char *)&unk_211984C;
  if ( (*(uint8_t **)unk_2119850) == 0 )
    goto LABEL_113;
  do
  {
    while ( *((int *)v1 + 4) >= 0 )
    {
      v2 = v1;
      v1 = *((char **)v1 + 2);
      if ( v1 == nullptr )
        goto LABEL_6;
    }
    v1 = *((char **)v1 + 3);
  }
  while ( v1 != nullptr );
LABEL_6:
  if ( v2 == (char *)&unk_211984C || *((int *)v2 + 4) > 0 )
  {
LABEL_113:
    v95 = &v93;
    v96 = &v93;
    v126 = &v124;
    v127 = &v124;
    v93 = 0;
    v94 = nullptr;
    v97 = 0;
    v122 = 0;
    v124 = 0;
    v125 = nullptr;
    v128 = 0;
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v59);
    v2 = (char *)v59[0];
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v123),
      v125);
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v92),
      v94);
  }
  if ( v2 + 20 == (char *)&v62 )
  {
    v3 = v64;
  }
  else
  {
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(v2 + 20),
      *((void **)v2 + 7));
    v49 = v64;
    v3 = nullptr;
    v4 = v64 == nullptr;
    *((uint32_t *)v2 + 8) = (uint32_t)(uintptr_t)(v2 + 24);
    *((uint32_t *)v2 + 7) = 0;
    *((uint32_t *)v2 + 9) = (uint32_t)(uintptr_t)(v2 + 24);
    *((uint32_t *)v2 + 10) = 0;
    if ( !v4 )
    {
      v5 = (int)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
             v2 + 20,
             v49,
             v2 + 24));
      *((uint32_t *)v2 + 7) = v5;
      for ( i = v5; *(uint32_t *)(i + 8) != 0; i = *(uint32_t *)(i + 8) )
        ;
      *((uint32_t *)v2 + 8) = i;
      while ( *(uint32_t *)(v5 + 12) != 0 )
        v5 = *(uint32_t *)(v5 + 12);
      *((uint32_t *)v2 + 9) = v5;
      *((uint32_t *)v2 + 10) = v67;
      v3 = v64;
    }
  }
  g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
    (int)(uintptr_t)(&v62),
    v3);
  v71 = &v69;
  v72 = &v69;
  v7 = (char *)(*(uint8_t **)unk_2119850);
  v69 = 0;
  v70 = nullptr;
  v73 = 0;
  v8 = (char *)&unk_211984C;
  if ( (*(uint8_t **)unk_2119850) == 0 )
    goto LABEL_114;
  do
  {
    while ( *((int *)v7 + 4) > 0 )
    {
      v8 = v7;
      v7 = *((char **)v7 + 2);
      if ( v7 == nullptr )
        goto LABEL_22;
    }
    v7 = *((char **)v7 + 3);
  }
  while ( v7 != nullptr );
LABEL_22:
  if ( v8 == (char *)&unk_211984C || *((int *)v8 + 4) > 1 )
  {
LABEL_114:
    v101 = &v99;
    v102 = &v99;
    v133 = &v131;
    v134 = &v131;
    v99 = 0;
    v100 = nullptr;
    v103 = 0;
    v129 = 1;
    v131 = 0;
    v132 = nullptr;
    v135 = 0;
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v59);
    v8 = (char *)v59[0];
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v130),
      v132);
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v98),
      v100);
  }
  if ( v8 + 20 == (char *)&v68 )
  {
    v9 = v70;
  }
  else
  {
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(v8 + 20),
      *((void **)v8 + 7));
    v50 = v70;
    v9 = nullptr;
    v4 = v70 == nullptr;
    *((uint32_t *)v8 + 8) = (uint32_t)(uintptr_t)(v8 + 24);
    *((uint32_t *)v8 + 7) = 0;
    *((uint32_t *)v8 + 9) = (uint32_t)(uintptr_t)(v8 + 24);
    *((uint32_t *)v8 + 10) = 0;
    if ( !v4 )
    {
      v10 = (int)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
              v8 + 20,
              v50,
              v8 + 24));
      *((uint32_t *)v8 + 7) = v10;
      for ( j = v10; *(uint32_t *)(j + 8) != 0; j = *(uint32_t *)(j + 8) )
        ;
      *((uint32_t *)v8 + 8) = j;
      while ( *(uint32_t *)(v10 + 12) != 0 )
        v10 = *(uint32_t *)(v10 + 12);
      *((uint32_t *)v8 + 9) = v10;
      *((uint32_t *)v8 + 10) = v73;
      v9 = v70;
    }
  }
  g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
    (int)(uintptr_t)(&v68),
    v9);
  v77 = &v75;
  v78 = &v75;
  v12 = (char *)(*(uint8_t **)unk_2119850);
  v75 = 0;
  v76 = nullptr;
  v79 = 0;
  v13 = (char *)&unk_211984C;
  if ( (*(uint8_t **)unk_2119850) == 0 )
    goto LABEL_115;
  do
  {
    while ( *((int *)v12 + 4) > 1 )
    {
      v13 = v12;
      v12 = *((char **)v12 + 2);
      if ( v12 == nullptr )
        goto LABEL_38;
    }
    v12 = *((char **)v12 + 3);
  }
  while ( v12 != nullptr );
LABEL_38:
  if ( v13 == (char *)&unk_211984C || *((int *)v13 + 4) > 2 )
  {
LABEL_115:
    v107 = &v105;
    v108 = &v105;
    v140 = &v138;
    v141 = &v138;
    v105 = 0;
    v106 = nullptr;
    v109 = 0;
    v136 = 2;
    v138 = 0;
    v139 = nullptr;
    v142 = 0;
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v59);
    v13 = (char *)v59[0];
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v137),
      v139);
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v104),
      v106);
  }
  if ( v13 + 20 == (char *)&v74 )
  {
    v14 = v76;
  }
  else
  {
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(v13 + 20),
      *((void **)v13 + 7));
    v51 = v76;
    v14 = nullptr;
    v4 = v76 == nullptr;
    *((uint32_t *)v13 + 8) = (uint32_t)(uintptr_t)(v13 + 24);
    *((uint32_t *)v13 + 7) = 0;
    *((uint32_t *)v13 + 9) = (uint32_t)(uintptr_t)(v13 + 24);
    *((uint32_t *)v13 + 10) = 0;
    if ( !v4 )
    {
      v15 = (int)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
              v13 + 20,
              v51,
              v13 + 24));
      *((uint32_t *)v13 + 7) = v15;
      for ( k = v15; *(uint32_t *)(k + 8) != 0; k = *(uint32_t *)(k + 8) )
        ;
      *((uint32_t *)v13 + 8) = k;
      while ( *(uint32_t *)(v15 + 12) != 0 )
        v15 = *(uint32_t *)(v15 + 12);
      *((uint32_t *)v13 + 9) = v15;
      *((uint32_t *)v13 + 10) = v79;
      v14 = v76;
    }
  }
  g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
    (int)(uintptr_t)(&v74),
    v14);
  v83 = &v81;
  v84 = &v81;
  v17 = (char *)(*(uint8_t **)unk_2119850);
  v81 = 0;
  v82 = nullptr;
  v85 = 0;
  v18 = (char *)&unk_211984C;
  if ( (*(uint8_t **)unk_2119850) == 0 )
    goto LABEL_116;
  do
  {
    while ( *((int *)v17 + 4) > 2 )
    {
      v18 = v17;
      v17 = *((char **)v17 + 2);
      if ( v17 == nullptr )
        goto LABEL_54;
    }
    v17 = *((char **)v17 + 3);
  }
  while ( v17 != nullptr );
LABEL_54:
  if ( v18 == (char *)&unk_211984C || *((int *)v18 + 4) > 3 )
  {
LABEL_116:
    v113 = &v111;
    v114 = &v111;
    v147 = &v145;
    v148 = &v145;
    v111 = 0;
    v112 = nullptr;
    v115 = 0;
    v143 = 3;
    v145 = 0;
    v146 = nullptr;
    v149 = 0;
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v59);
    v18 = (char *)v59[0];
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v144),
      v146);
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v110),
      v112);
  }
  if ( v18 + 20 == (char *)&v80 )
  {
    v19 = v82;
  }
  else
  {
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(v18 + 20),
      *((void **)v18 + 7));
    v52 = v82;
    v19 = nullptr;
    v4 = v82 == nullptr;
    *((uint32_t *)v18 + 8) = (uint32_t)(uintptr_t)(v18 + 24);
    *((uint32_t *)v18 + 7) = 0;
    *((uint32_t *)v18 + 9) = (uint32_t)(uintptr_t)(v18 + 24);
    *((uint32_t *)v18 + 10) = 0;
    if ( !v4 )
    {
      v20 = (int)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
              v18 + 20,
              v52,
              v18 + 24));
      *((uint32_t *)v18 + 7) = v20;
      for ( m = v20; *(uint32_t *)(m + 8) != 0; m = *(uint32_t *)(m + 8) )
        ;
      *((uint32_t *)v18 + 8) = m;
      while ( *(uint32_t *)(v20 + 12) != 0 )
        v20 = *(uint32_t *)(v20 + 12);
      *((uint32_t *)v18 + 9) = v20;
      *((uint32_t *)v18 + 10) = v85;
      v19 = v82;
    }
  }
  g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
    (int)(uintptr_t)(&v80),
    v19);
  v89 = &v87;
  v90 = &v87;
  v22 = (char *)(*(uint8_t **)unk_2119850);
  v87 = 0;
  v88 = nullptr;
  v91 = 0;
  v23 = (char *)&unk_211984C;
  if ( (*(uint8_t **)unk_2119850) == 0 )
    goto LABEL_112;
  do
  {
    while ( *((int *)v22 + 4) > 3 )
    {
      v23 = v22;
      v22 = *((char **)v22 + 2);
      if ( v22 == nullptr )
        goto LABEL_70;
    }
    v22 = *((char **)v22 + 3);
  }
  while ( v22 != nullptr );
LABEL_70:
  if ( v23 == (char *)&unk_211984C || *((int *)v23 + 4) > 4 )
  {
LABEL_112:
    v119 = &v117;
    v120 = &v117;
    v154 = &v152;
    v155 = &v152;
    v117 = 0;
    v118 = nullptr;
    v121 = 0;
    v150 = 4;
    v152 = 0;
    v153 = nullptr;
    v156 = 0;
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v59);
    v23 = (char *)v59[0];
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v151),
      v153);
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v116),
      v118);
  }
  if ( v23 + 20 == (char *)&v86 )
  {
    v25 = v88;
  }
  else
  {
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(v23 + 20),
      *((void **)v23 + 7));
    v24 = v88;
    v25 = nullptr;
    v4 = v88 == nullptr;
    *((uint32_t *)v23 + 7) = 0;
    *((uint32_t *)v23 + 8) = (uint32_t)(uintptr_t)(v23 + 24);
    *((uint32_t *)v23 + 9) = (uint32_t)(uintptr_t)(v23 + 24);
    *((uint32_t *)v23 + 10) = 0;
    if ( !v4 )
    {
      v26 = (int)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
              v23 + 20,
              v24,
              v23 + 24));
      *((uint32_t *)v23 + 7) = v26;
      for ( n = v26; *(uint32_t *)(n + 8) != 0; n = *(uint32_t *)(n + 8) )
        ;
      *((uint32_t *)v23 + 8) = n;
      while ( *(uint32_t *)(v26 + 12) != 0 )
        v26 = *(uint32_t *)(v26 + 12);
      *((uint32_t *)v23 + 9) = v26;
      *((uint32_t *)v23 + 10) = v91;
      v25 = v88;
    }
  }
  g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
    (int)(uintptr_t)(&v86),
    v25);
  if ( v55 != 0 )
  {
    sociallib::ClientSNSInterface::loadDeviceConfigFromJson((int)(uintptr_t)(self), (Json::Value::Self *)v61, 0);
    sociallib::ClientSNSInterface::loadDeviceConfigFromJson((int)(uintptr_t)(self), (Json::Value::Self *)v61, 1);
    sociallib::ClientSNSInterface::loadDeviceConfigFromJson((int)(uintptr_t)(self), (Json::Value::Self *)v61, 2);
    sociallib::ClientSNSInterface::loadDeviceConfigFromJson((int)(uintptr_t)(self), (Json::Value::Self *)v61, 3);
    sociallib::ClientSNSInterface::loadDeviceConfigFromJson((int)(uintptr_t)(self), (Json::Value::Self *)v61, 4);
  }
  if ( v47 != nullptr )
    opDeleteArray(v47);
  g4_std::string::Destroy(v168);
  g4_std::string::Destroy(v167);
  v48 = v166;
  v54 = v164;
  v58 = v165;
  v28 = (char *)(v163 + 4);
  v56 = v161;
  v57 = v162;
  v53 = (char *)v163;
  if ( (unsigned int)(uintptr_t)(v166) > v163 + 4 )
  {
    do
    {
      v29 = *(uint32_t *)v28;
      v30 = *(uint32_t *)v28 + 500;
      do
      {
        v31 = v29 + 12;
        v29 += 20;
        g4_std::string::Destroy(v31);
      }
      while ( v29 != v30 );
      v28 += 4;
    }
    while ( v48 > v28 );
  }
  if ( v48 == v53 )
  {
    if ( v54 != v56 )
    {
      v45 = v56;
      do
      {
        v46 = v45 + 12;
        v45 += 20;
        g4_std::string::Destroy(v46);
      }
      while ( v54 != v45 );
    }
  }
  else
  {
    if ( v56 != v57 )
    {
      v32 = v56;
      do
      {
        v33 = v32 + 12;
        v32 += 20;
        g4_std::string::Destroy(v33);
      }
      while ( v57 != v32 );
    }
    if ( v54 != v58 )
    {
      v34 = v58;
      do
      {
        v35 = v34 + 12;
        v34 += 20;
        g4_std::string::Destroy(v35);
      }
      while ( v54 != v34 );
    }
  }
  v36 = v160;
  if ( v160 != nullptr )
  {
    v37 = (void **)v163;
    v38 = (unsigned int)(uintptr_t)(v166 + 4);
    if ( (unsigned int)(uintptr_t)(v166 + 4) > v163 )
    {
      do
      {
        v39 = *v37++;
        opDelete(v39);
      }
      while ( v38 > (unsigned int)(uintptr_t)(v37) );
      v36 = v160;
    }
    opDelete(v36);
  }
  v40 = v157[0];
  if ( v157[0] != nullptr )
  {
    v41 = (void **)v158;
    v42 = v159 + 4;
    if ( v159 + 4 > v158 )
    {
      do
      {
        v43 = *v41++;
        opDelete(v43);
      }
      while ( v42 > (unsigned int)(uintptr_t)(v41) );
      v40 = v157[0];
    }
    opDelete(v40);
  }
  Json::Value::Destroy((Json::Value::Self *)v61);
  return v55;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::setIsInitializedTrue  (binary VA: 0x140c850)
// Original: sociallib::ClientSNSInterface::setIsInitializedTrue
// ----------------------------------------------------------------------------
void * sociallib::ClientSNSInterface::setIsInitializedTrue(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  void *result;
  typedef uint32_t _g4_t_v5[4];
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v2 = (uint32_t *)(*(uint8_t **)unk_2119820);
  v3 = (uint32_t *)(&unk_211981C);
  if ( (*(uint8_t **)unk_2119820) == 0 )
    goto LABEL_8;
  do
  {
    while ( a2 <= v2[4] )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  result = &unk_211981C;
  if ( v3 == (uint32_t *)&unk_211981C || a2 < v3[4] )
  {
LABEL_8:
    v5[3] = a2;
    v6 = 0;
    result = (void *)g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique(v5);
    v3 = (uint32_t *)v5[0];
  }
  *((uint8_t *)v3 + 20) = 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::isSnsInitialized  (binary VA: 0x140c8e0)
// Original: sociallib::ClientSNSInterface::isSnsInitialized
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::isSnsInitialized(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  typedef uint32_t _g4_t_v5[4];
  typedef char _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v6)) > _g4_s1 ? (28u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 28u);

  v2 = (uint32_t *)(*(uint8_t **)unk_2119820);
  v3 = (uint32_t *)(&unk_211981C);
  if ( (*(uint8_t **)unk_2119820) == 0 )
    goto LABEL_8;
  do
  {
    while ( a2 <= v2[4] )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( v3 == (uint32_t *)&unk_211981C || a2 < v3[4] )
  {
LABEL_8:
    v5[3] = a2;
    v6 = 0;
    g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique(v5);
    v3 = (uint32_t *)v5[0];
  }
  return *((uint8_t *)v3 + 20);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::checkIfRequestCanBeMade  (binary VA: 0x140c970)
// Original: sociallib::ClientSNSInterface::checkIfRequestCanBeMade
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::checkIfRequestCanBeMade(int a1, int a2, int a3)
{
  int *v3;
  int result;
  char isDuplicateRequest;
  void *v6;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint8_t _g4_t_v14[5];
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint8_t _g4_t_v19[4];
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[4];
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef uint8_t _g4_t_v25[4];
  typedef int _g4_t_v26;
  typedef int _g4_t_v27[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v9)) > _g4_s1 ? (4u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v10)) > _g4_s2 ? (8u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v11)) > _g4_s3 ? (12u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (29u + sizeof(_g4_t_v12)) > _g4_s4 ? (29u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v14)) > _g4_s6 ? (36u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v15)) > _g4_s7 ? (44u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v16)) > _g4_s8 ? (48u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v17)) > _g4_s9 ? (52u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v18)) > _g4_s10 ? (56u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v19)) > _g4_s11 ? (60u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v20)) > _g4_s12 ? (64u + sizeof(_g4_t_v20)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v21)) > _g4_s13 ? (68u + sizeof(_g4_t_v21)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v22)) > _g4_s14 ? (72u + sizeof(_g4_t_v22)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v23)) > _g4_s15 ? (76u + sizeof(_g4_t_v23)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v24)) > _g4_s16 ? (80u + sizeof(_g4_t_v24)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v25)) > _g4_s17 ? (84u + sizeof(_g4_t_v25)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v26)) > _g4_s18 ? (88u + sizeof(_g4_t_v26)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v27)) > _g4_s19 ? (92u + sizeof(_g4_t_v27)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 29u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 48u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 52u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 56u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 60u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 64u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 68u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 72u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 76u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 80u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 84u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 88u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 92u);

  if ( !sociallib::ClientSNSInterface::isSnsSupported(a1, a2) )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), " in snsconfig.json as being supported!\n", (int)(uintptr_t)(&v12) + 1);
    v8 = sociallib::SNSRequestState::s_snsNames + 4 * a2;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14[4]), "ERROR: You didn't mark SNS ", (int)(uintptr_t)(&v12));
    sub_134F3A0((int)(uintptr_t)(v15), (int)(uintptr_t)(&v14[4]), v8);
    sub_134F3A0((int)(uintptr_t)(&v22), (int)(uintptr_t)(v15), (int)(uintptr_t)(&v16));
    g4_std::string::Destroy(v15);
    g4_std::string::Destroy(&v14[4]);
    v3 = &v17;
    g4_std::string::Destroy(&v16);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v17), v22, (int)(uintptr_t)(&v12) + 2);
LABEL_3:
    sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, a2, a3, (int)(uintptr_t)(v3));
    g4_std::string::Destroy(v3);
    g4_std::string::Destroy(&v22);
    return 0;
  }
  if ( (uint8_t)sociallib::ClientSNSInterface::isSnsInitialized(a1, a2) == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v20), " was never initialized using initSNS() or initialization failed function!\n", (int)(uintptr_t)(&v13) + 1);
    v9 = sociallib::SNSRequestState::s_snsNames + 4 * a2;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v18), "ERROR: SNS ", (int)(uintptr_t)(&v13));
    sub_134F3A0((int)(uintptr_t)(v19), (int)(uintptr_t)(&v18), v9);
    sub_134F3A0((int)(uintptr_t)(&v22), (int)(uintptr_t)(v19), (int)(uintptr_t)(&v20));
    g4_std::string::Destroy(v19);
    g4_std::string::Destroy(&v18);
    v3 = (int *)v21;
    g4_std::string::Destroy(&v20);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v21), v22, (int)(uintptr_t)(&v13) + 2);
    goto LABEL_3;
  }
  isDuplicateRequest = sociallib::ClientSNSInterface::isDuplicateRequest(a1, a2, a3);
  result = 1;
  if ( isDuplicateRequest != 0 )
  {
    if ( a3 == 5
      || a3 == 7
      || a3 == 26
      || a3 == 3
      || a3 == 46
      || a3 == 17
      || a3 == 45
      || a3 == 29
      || a3 == 33
      || a3 == 50
      || a3 == 34
      || a3 == 31
      || a3 == 11
      || a3 == 20 )
    {
      return 1;
    }
    else if ( a3 != 28 )
    {
      v11 = sociallib::SNSRequestState::s_snsNames + 4 * a2;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), " for SNS ", (int)(uintptr_t)(&v13) + 3);
      v10 = sociallib::SNSRequestState::s_snsRequestTypeNames + 4 * a3;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "ERROR: Duplicate request ", (int)(uintptr_t)(v14));
      sub_134F3A0((int)(uintptr_t)(v25), (int)(uintptr_t)(&v26), v10);
      sub_134F3A0((int)(uintptr_t)(&v23), (int)(uintptr_t)(v25), (int)(uintptr_t)(&v24));
      sub_134F3A0((int)(uintptr_t)(&v22), (int)(uintptr_t)(&v23), v11);
      v6 = (void *)(v23 - 12);
      if ( (uint32_t *)(v23 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v6);
      }
      g4_std::string::Destroy(v25);
      g4_std::string::Destroy(&v26);
      v7 = (void *)(v24 - 12);
      if ( (uint32_t *)(v24 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v7);
      }
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v27), v22, (int)(uintptr_t)(&v14[1]));
      sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, a2, a3, (int)(uintptr_t)(v27));
      g4_std::string::Destroy(v27);
      g4_std::string::Destroy(&v22);
      return 0;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::showMainOverlay  (binary VA: 0x140ce70)
// Original: sociallib::ClientSNSInterface::showMainOverlay
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::showMainOverlay(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 66);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 289, 0, 66, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::showSignInOverlay  (binary VA: 0x140cf50)
// Original: sociallib::ClientSNSInterface::showSignInOverlay
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::showSignInOverlay(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 65);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 285, 0, 65, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::showAllLeadearboards  (binary VA: 0x140d030)
// Original: sociallib::ClientSNSInterface::showAllLeadearboards
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::showAllLeadearboards(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 51);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 261, 0, 51, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::resetAchievement  (binary VA: 0x140d110)
// Original: sociallib::ClientSNSInterface::resetAchievement
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::resetAchievement(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 53);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 253, 0, 53, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::resetAchievements  (binary VA: 0x140d210)
// Original: sociallib::ClientSNSInterface::resetAchievements
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::resetAchievements(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 52);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 249, 0, 52, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::gotAchievement  (binary VA: 0x140d2f0)
// Original: sociallib::ClientSNSInterface::gotAchievement
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::gotAchievement(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 33);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 153, 0, 33, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::incrementAchievement  (binary VA: 0x140d3f0)
// Original: sociallib::ClientSNSInterface::incrementAchievement
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::incrementAchievement(int a1, int a2, int a3, char a4)
{
  int result;
  sociallib::SNSRequestState::Self *v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 50);
  if ( (uint8_t)result != 0 )
  {
    v5 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 245, 0, 50, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v5, 2);
    sociallib::SNSRequestState::writeStringParam(v5, a3);
    sociallib::SNSRequestState::writeIntParam(v5, a4);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v5));
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v5);
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::showLeadearboardById  (binary VA: 0x140d500)
// Original: sociallib::ClientSNSInterface::showLeadearboardById
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::showLeadearboardById(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 49);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 257, 0, 49, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::selectLeaderboardChallengeablePlayers  (binary VA: 0x140d600)
// Original: sociallib::ClientSNSInterface::selectLeaderboardChallengeablePlayers
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::selectLeaderboardChallengeablePlayers(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 35);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 161, 0, 35, 2, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::issueLeaderboardChallenge  (binary VA: 0x140d700)
// Original: sociallib::ClientSNSInterface::issueLeaderboardChallenge
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::issueLeaderboardChallenge(int a1, int a2, int a3, const std::vector<std::string> *a4, int a5)
{
  int result;
  sociallib::SNSRequestState::Self *v6;
  int v7;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 34);
  if ( (uint8_t)result != 0 )
  {
    v6 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, a2, 157, 0, 34, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v6, 3);
    sociallib::SNSRequestState::writeStringParam(v6, a3);
    sociallib::SNSRequestState::writeStringArrayParam(v6, a4);
    sociallib::SNSRequestState::writeStringParam(v6, a5);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v6));
    v7 = opNew(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v6);
    return sub_1901920(v7, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::selectAchievementChallengeablePlayers  (binary VA: 0x140d820)
// Original: sociallib::ClientSNSInterface::selectAchievementChallengeablePlayers
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::selectAchievementChallengeablePlayers(int a1, int a2, int a3, const std::vector<std::string> *a4)
{
  int result;
  sociallib::SNSRequestState::Self *v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 32);
  if ( (uint8_t)result != 0 )
  {
    v5 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 149, 0, 32, 2, 0);
    sociallib::SNSRequestState::writeParamListSize(v5, 2);
    sociallib::SNSRequestState::writeStringParam(v5, a3);
    sociallib::SNSRequestState::writeStringArrayParam(v5, a4);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v5));
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v5);
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::issueAchievementChallenge  (binary VA: 0x140d930)
// Original: sociallib::ClientSNSInterface::issueAchievementChallenge
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::issueAchievementChallenge(int a1, int a2, int a3, const std::vector<std::string> *a4, int a5)
{
  int result;
  sociallib::SNSRequestState::Self *v6;
  int v7;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 31);
  if ( (uint8_t)result != 0 )
  {
    v6 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, a2, 145, 0, 31, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v6, 3);
    sociallib::SNSRequestState::writeStringParam(v6, a3);
    sociallib::SNSRequestState::writeStringArrayParam(v6, a4);
    sociallib::SNSRequestState::writeStringParam(v6, a5);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v6));
    v7 = opNew(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v6);
    return sub_1901920(v7, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::showAchievements  (binary VA: 0x140da50)
// Original: sociallib::ClientSNSInterface::showAchievements
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::showAchievements(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 48);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 237, 0, 48, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postLeaderboardScore  (binary VA: 0x140db30)
// Original: sociallib::ClientSNSInterface::postLeaderboardScore
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postLeaderboardScore(int a1, int a2, char a3, int64_t a4, bool a5)
{
  int result;
  sociallib::SNSRequestState::Self *v6;
  int v7;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 37);
  if ( (uint8_t)result != 0 )
  {
    v6 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, a2, 169, 0, 37, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v6, 4);
    sociallib::SNSRequestState::writeUnsignedIntParam(v6, a3);
    sociallib::SNSRequestState::writeInt64Param(v6, a4);
    sociallib::SNSRequestState::writeBoolParam(v6, a5);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v6));
    v7 = opNew(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v6);
    return sub_1901920(v7, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getLeaderboardRows  (binary VA: 0x140dc60)
// Original: sociallib::ClientSNSInterface::getLeaderboardRows
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getLeaderboardRows(int a1, int a2, char a3, char a4, char a5, char a6)
{
  int result;
  sociallib::SNSRequestState::Self *v7;
  int v8;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 36);
  if ( (uint8_t)result != 0 )
  {
    v7 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v7, a2, 165, 0, 36, 8, 0);
    sociallib::SNSRequestState::writeParamListSize(v7, 4);
    sociallib::SNSRequestState::writeUnsignedIntParam(v7, a3);
    sociallib::SNSRequestState::writeUnsignedIntParam(v7, a4);
    sociallib::SNSRequestState::writeUnsignedIntParam(v7, a5);
    sociallib::SNSRequestState::writeUnsignedIntParam(v7, a6);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v7));
    v8 = opNew(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(v7);
    return sub_1901920(v8, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getAllAchievements  (binary VA: 0x140dd90)
// Original: sociallib::ClientSNSInterface::getAllAchievements
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getAllAchievements(int a1, int a2, char a3, char a4, bool a5)
{
  int result;
  sociallib::SNSRequestState::Self *v6;
  int v7;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 56);
  if ( (uint8_t)result != 0 )
  {
    v6 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, a2, 265, 0, 56, 7, 0);
    sociallib::SNSRequestState::writeParamListSize(v6, 3);
    sociallib::SNSRequestState::writeUnsignedIntParam(v6, a3);
    sociallib::SNSRequestState::writeUnsignedIntParam(v6, a4);
    sociallib::SNSRequestState::writeBoolParam(v6, a5);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v6));
    v7 = opNew(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v6);
    return sub_1901920(v7, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getApplicationDetails  (binary VA: 0x140deb0)
// Original: sociallib::ClientSNSInterface::getApplicationDetails
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getApplicationDetails(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 47);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 185, 0, 47, 3, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getValueFromCloud  (binary VA: 0x140df90)
// Original: sociallib::ClientSNSInterface::getValueFromCloud
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getValueFromCloud(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 59);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 273, 0, 59, 1, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::saveOnCloud  (binary VA: 0x140e090)
// Original: sociallib::ClientSNSInterface::saveOnCloud
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::saveOnCloud(int a1, int a2, int a3, int a4)
{
  int result;
  sociallib::SNSRequestState::Self *v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 58);
  if ( (uint8_t)result != 0 )
  {
    v5 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 269, 0, 58, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v5, 2);
    sociallib::SNSRequestState::writeStringParam(v5, a3);
    sociallib::SNSRequestState::writeStringParam(v5, a4);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v5));
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v5);
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getNumberOfMatches  (binary VA: 0x140e1a0)
// Original: sociallib::ClientSNSInterface::getNumberOfMatches
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getNumberOfMatches(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 57);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 209, 0, 57, 1, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserAchievements  (binary VA: 0x140e280)
// Original: sociallib::ClientSNSInterface::getUserAchievements
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserAchievements(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 54);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 205, 0, 54, 7, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::deleteScore  (binary VA: 0x140e380)
// Original: sociallib::ClientSNSInterface::deleteScore
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::deleteScore(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 44);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 201, 0, 44, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::updateScore  (binary VA: 0x140e460)
// Original: sociallib::ClientSNSInterface::updateScore
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::updateScore(int a1, int a2, char a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 43);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 197, 0, 43, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeIntParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getAppScores  (binary VA: 0x140e560)
// Original: sociallib::ClientSNSInterface::getAppScores
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getAppScores(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 42);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 193, 0, 42, 8, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserScore  (binary VA: 0x140e660)
// Original: sociallib::ClientSNSInterface::getUserScore
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserScore(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 41);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 189, 0, 41, 8, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getLeaderboardsTypes  (binary VA: 0x140e760)
// Original: sociallib::ClientSNSInterface::getLeaderboardsTypes
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getLeaderboardsTypes(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 40);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 181, 0, 40, 9, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserLeaderboardScore  (binary VA: 0x140e840)
// Original: sociallib::ClientSNSInterface::getUserLeaderboardScore
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserLeaderboardScore(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 39);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 177, 0, 39, 11, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserLeaderboardRank  (binary VA: 0x140e920)
// Original: sociallib::ClientSNSInterface::getUserLeaderboardRank
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserLeaderboardRank(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 38);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 173, 0, 38, 11, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postLeaderboardScore  (binary VA: 0x140ea00)
// Original: sociallib::ClientSNSInterface::postLeaderboardScore
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postLeaderboardScore(int a1, int a2, int a3, char a4, bool a5, char a6)
{
  int result;
  sociallib::SNSRequestState::Self *v7;
  int v8;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 37);
  if ( (uint8_t)result != 0 )
  {
    v7 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v7, a2, 169, 0, 37, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v7, 4);
    sociallib::SNSRequestState::writeStringParam(v7, a3);
    sociallib::SNSRequestState::writeIntParam(v7, a4);
    sociallib::SNSRequestState::writeBoolParam(v7, a5);
    sociallib::SNSRequestState::writeIntParam(v7, a6);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v7));
    v8 = opNew(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(v7);
    return sub_1901920(v8, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::gotAchievement  (binary VA: 0x140eb30)
// Original: sociallib::ClientSNSInterface::gotAchievement
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::gotAchievement(int a1, int a2, char a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 33);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 153, 0, 33, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeIntParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::sendMessageTo  (binary VA: 0x140ec30)
// Original: sociallib::ClientSNSInterface::sendMessageTo
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::sendMessageTo(sociallib::ClientSNSInterface::Self *a1, int a2, int a3, const std::vector<std::string> *a4, int a5, char a6, char a7)
{
  int result;
  sociallib::SNSRequestState::Self *v8;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade((int)(uintptr_t)(a1), a2, 29);
  if ( (uint8_t)result != 0 )
  {
    v8 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v8, a2, 141, 0, 29, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v8, 5);
    sociallib::SNSRequestState::writeStringParam(v8, a3);
    sociallib::SNSRequestState::writeStringArrayParam(v8, a4);
    sociallib::SNSRequestState::writeStringParam(v8, a5);
    sociallib::SNSRequestState::writeBoolParam(v8, a6);
    sociallib::SNSRequestState::writeIntParam(v8, a7);
    *((uint32_t *)v8 + 52) = 1;
    return sociallib::ClientSNSInterface::insertRequest(a1, v8);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::uploadPhoto  (binary VA: 0x140ed70)
// Original: sociallib::ClientSNSInterface::uploadPhoto
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::uploadPhoto(int a1, int a2, int a3, int a4)
{
  int result;
  sociallib::SNSRequestState::Self *v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 55);
  if ( (uint8_t)result != 0 )
  {
    v5 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 113, 0, 55, 1, 0);
    sociallib::SNSRequestState::writeParamListSize(v5, 2);
    sociallib::SNSRequestState::writeStringParam(v5, a3);
    sociallib::SNSRequestState::writeStringParam(v5, a4);
    *((uint32_t *)v5 + 52) = 1;
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v5));
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v5);
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::sendLostPassword  (binary VA: 0x140ee80)
// Original: sociallib::ClientSNSInterface::sendLostPassword
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::sendLostPassword(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 22);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 137, 0, 22, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::logout  (binary VA: 0x140ef60)
// Original: sociallib::ClientSNSInterface::logout
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::logout(sociallib::ClientSNSInterface::Self *a1, int a2)
{
  int result;
  sociallib::SNSRequestState::Self *v3;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade((int)(uintptr_t)(a1), a2, 19);
  if ( (uint8_t)result != 0 )
  {
    v3 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 133, 0, 19, 0, 0);
    *((uint32_t *)v3 + 52) = 2;
    return sociallib::ClientSNSInterface::insertRequest(a1, v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::login  (binary VA: 0x140f010)
// Original: sociallib::ClientSNSInterface::login
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::login(sociallib::ClientSNSInterface::Self *a1, int a2)
{
  int result;
  sociallib::SNSRequestState::Self *v3;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade((int)(uintptr_t)(a1), a2, 18);
  if ( (uint8_t)result != 0 )
  {
    v3 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 129, 0, 18, 0, 0);
    *((uint32_t *)v3 + 52) = 2;
    return sociallib::ClientSNSInterface::insertRequest(a1, v3);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::sendGameRequestToFriends  (binary VA: 0x140f0c0)
// Original: sociallib::ClientSNSInterface::sendGameRequestToFriends
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::sendGameRequestToFriends(sociallib::ClientSNSInterface::Self *a1, int a2, const std::vector<std::string> *a3, int a4, const std::vector<std::string> *a5, int a6)
{
  int result;
  sociallib::SNSRequestState::Self *v7;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade((int)(uintptr_t)(a1), a2, 45);
  if ( (uint8_t)result != 0 )
  {
    v7 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v7, a2, 125, 0, 45, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v7, 4);
    sociallib::SNSRequestState::writeStringArrayParam(v7, a3);
    sociallib::SNSRequestState::writeStringParam(v7, a4);
    sociallib::SNSRequestState::writeStringParam(v7, a6);
    sociallib::SNSRequestState::writeStringArrayParam(v7, a5);
    *((uint32_t *)v7 + 52) = 1;
    return sociallib::ClientSNSInterface::insertRequest(a1, v7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::sendGameRequestToFriends  (binary VA: 0x140f1c0)
// Original: sociallib::ClientSNSInterface::sendGameRequestToFriends
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::sendGameRequestToFriends(sociallib::ClientSNSInterface::Self *a1, int a2, const std::vector<std::string> *a3, int a4, int a5)
{
  int result;
  sociallib::SNSRequestState::Self *v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade((int)(uintptr_t)(a1), a2, 45);
  if ( (uint8_t)result != 0 )
  {
    v6 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, a2, 125, 0, 45, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v6, 3);
    sociallib::SNSRequestState::writeStringArrayParam(v6, a3);
    sociallib::SNSRequestState::writeStringParam(v6, a4);
    sociallib::SNSRequestState::writeStringParam(v6, a5);
    *((uint32_t *)v6 + 52) = 1;
    return sociallib::ClientSNSInterface::insertRequest(a1, v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::addFriend  (binary VA: 0x140f2b0)
// Original: sociallib::ClientSNSInterface::addFriend
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::addFriend(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 13);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 37, 0, 13, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::UploadVideoFile  (binary VA: 0x140f3b0)
// Original: sociallib::ClientSNSInterface::UploadVideoFile
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::UploadVideoFile(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result;
  sociallib::SNSRequestState::Self *v8;
  int v9;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 63);
  if ( (uint8_t)result != 0 )
  {
    v8 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v8, a2, 117, 0, 63, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v8, 5);
    sociallib::SNSRequestState::writeStringParam(v8, a3);
    sociallib::SNSRequestState::writeStringParam(v8, a4);
    sociallib::SNSRequestState::writeStringParam(v8, a5);
    sociallib::SNSRequestState::writeStringParam(v8, a6);
    sociallib::SNSRequestState::writeStringParam(v8, a7);
    v9 = opNew(0xCu);
    if ( v9 != -8 )
      *(uint32_t *)(v9 + 8) = (uint32_t)(uintptr_t)(v8);
    return sub_1901920(v9, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postOpenGraphAction  (binary VA: 0x140f4e0)
// Original: sociallib::ClientSNSInterface::postOpenGraphAction
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postOpenGraphAction(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result;
  sociallib::SNSRequestState::Self *v7;
  int v8;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 28);
  if ( (uint8_t)result != 0 )
  {
    v7 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v7, a2, 121, 0, 28, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v7, 4);
    sociallib::SNSRequestState::writeStringParam(v7, a3);
    sociallib::SNSRequestState::writeStringParam(v7, a4);
    sociallib::SNSRequestState::writeStringParam(v7, a5);
    sociallib::SNSRequestState::writeStringParam(v7, a6);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v7));
    v8 = opNew(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = (uint32_t)(uintptr_t)(v7);
    return sub_1901920(v8, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToFriendsWallWithoutDialog  (binary VA: 0x140f610)
// Original: sociallib::ClientSNSInterface::postMessageToFriendsWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToFriendsWallWithoutDialog(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int result;
  sociallib::SNSRequestState::Self *v9;
  int v10;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 27);
  if ( (uint8_t)result != 0 )
  {
    v9 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v9, a2, 109, 0, 27, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v9, 6);
    sociallib::SNSRequestState::writeStringParam(v9, a3);
    sociallib::SNSRequestState::writeStringParam(v9, a4);
    sociallib::SNSRequestState::writeStringParam(v9, a5);
    sociallib::SNSRequestState::writeStringParam(v9, a6);
    sociallib::SNSRequestState::writeStringParam(v9, a7);
    sociallib::SNSRequestState::writeStringParam(v9, a8);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v9));
    v10 = opNew(0xCu);
    if ( v10 != -8 )
      *(uint32_t *)(v10 + 8) = (uint32_t)(uintptr_t)(v9);
    return sub_1901920(v10, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToFriendsWall  (binary VA: 0x140f760)
// Original: sociallib::ClientSNSInterface::postMessageToFriendsWall
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToFriendsWall(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int result;
  sociallib::SNSRequestState::Self *v10;
  int v11;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 26);
  if ( (uint8_t)result != 0 )
  {
    v10 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v10, a2, 105, 0, 26, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v10, 7);
    sociallib::SNSRequestState::writeStringParam(v10, a3);
    sociallib::SNSRequestState::writeStringParam(v10, a4);
    sociallib::SNSRequestState::writeStringParam(v10, a5);
    sociallib::SNSRequestState::writeStringParam(v10, a6);
    sociallib::SNSRequestState::writeStringParam(v10, a7);
    sociallib::SNSRequestState::writeStringParam(v10, a8);
    sociallib::SNSRequestState::writeStringParam(v10, a9);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v10));
    v11 = opNew(0xCu);
    if ( v11 != -8 )
      *(uint32_t *)(v11 + 8) = (uint32_t)(uintptr_t)(v10);
    return sub_1901920(v11, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postPhotoToWallWithoutDialog  (binary VA: 0x140f8c0)
// Original: sociallib::ClientSNSInterface::postPhotoToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postPhotoToWallWithoutDialog(int a1, int a2, int a3, int a4)
{
  int result;
  sociallib::SNSRequestState::Self *v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 25);
  if ( (uint8_t)result != 0 )
  {
    v5 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 101, 0, 25, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v5, 1);
    sociallib::SNSRequestState::writeStringParam(v5, a4);
    g4_std::string::assign_str((char *)v5 + 60, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v5));
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v5);
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToWallWithoutDialog  (binary VA: 0x140f9d0)
// Original: sociallib::ClientSNSInterface::postMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToWallWithoutDialog(int a1, int *a2)
{
  int result;
  sociallib::SNSRequestState::Self *v3;
  int v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, *a2, 24);
  if ( (uint8_t)result != 0 )
  {
    v5 = *a2;
    v3 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, v5, 97, 0, 24, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v3, 8);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 1);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 2);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 3);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 4);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 5);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 6);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 7);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 8);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v3));
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v3);
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToWallWithoutDialog  (binary VA: 0x140fb40)
// Original: sociallib::ClientSNSInterface::postMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToWallWithoutDialog(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int result;
  sociallib::SNSRequestState::Self *v10;
  int v11;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 24);
  if ( (uint8_t)result != 0 )
  {
    v10 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v10, a2, 97, 0, 24, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v10, 7);
    sociallib::SNSRequestState::writeStringParam(v10, a3);
    sociallib::SNSRequestState::writeStringParam(v10, a4);
    sociallib::SNSRequestState::writeStringParam(v10, a5);
    sociallib::SNSRequestState::writeStringParam(v10, a6);
    sociallib::SNSRequestState::writeStringParam(v10, a7);
    sociallib::SNSRequestState::writeStringParam(v10, a8);
    sociallib::SNSRequestState::writeStringParam(v10, a9);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v10));
    v11 = opNew(0xCu);
    if ( v11 != -8 )
      *(uint32_t *)(v11 + 8) = (uint32_t)(uintptr_t)(v10);
    return sub_1901920(v11, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToWall  (binary VA: 0x140fca0)
// Original: sociallib::ClientSNSInterface::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToWall(int a1, int *a2)
{
  int result;
  sociallib::SNSRequestState::Self *v3;
  int v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, *a2, 17);
  if ( (uint8_t)result != 0 )
  {
    v5 = *a2;
    v3 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, v5, 93, 0, 17, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v3, 8);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 1);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 2);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 3);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 4);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 5);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 6);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 7);
    sociallib::SNSRequestState::writeStringParam(v3, a2 + 8);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v3));
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = (uint32_t)(uintptr_t)(v3);
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToFriendsWall  (binary VA: 0x140fe10)
// Original: sociallib::ClientSNSInterface::postMessageToFriendsWall
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToFriendsWall(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  sociallib::SNSRequestState::Self *v8;
  int v9;
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);

  if ( (uint8_t)sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, 13, 26) != 0 )
  {
    v8 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v8, 13, 105, 0, 26, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v8, 6);
    sociallib::SNSRequestState::writeStringParam(v8, a2);
    sociallib::SNSRequestState::writeStringParam(v8, a3);
    sociallib::SNSRequestState::writeStringParam(v8, a4);
    sociallib::SNSRequestState::writeStringParam(v8, a5);
    sociallib::SNSRequestState::writeStringParam(v8, a6);
    sociallib::SNSRequestState::writeStringParam(v8, a7);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v8));
    v9 = opNew(0xCu);
    if ( v9 != -8 )
      *(uint32_t *)(v9 + 8) = (uint32_t)(uintptr_t)(v8);
    return sub_1901920(v9, a1 + 28);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10) + 1, "Use this function (with this signature) only for Game API\n", (int)(uintptr_t)(&v10));
    sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, 13, 17, (int)(uintptr_t)(&v10) + 1);
    return ((g4_std::string::Destroy((char *)&v10 + 1)), (int)0);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToWall  (binary VA: 0x140ff90)
// Original: sociallib::ClientSNSInterface::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToWall(int a1, int a2, int a3, int a4, int a5)
{
  sociallib::SNSRequestState::Self *v6;
  int v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);

  if ( (uint8_t)sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, 13, 17) != 0 )
  {
    v6 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, 13, 93, 0, 17, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v6, 4);
    sociallib::SNSRequestState::writeStringParam(v6, a2);
    sociallib::SNSRequestState::writeStringParam(v6, a3);
    sociallib::SNSRequestState::writeStringParam(v6, a4);
    sociallib::SNSRequestState::writeStringParam(v6, a5);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v6));
    v7 = opNew(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v6);
    return sub_1901920(v7, a1 + 28);
  }
  else
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v8) + 1, "Use this function (with this signature) only for Game API\n", (int)(uintptr_t)(&v8));
    sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, 13, 17, (int)(uintptr_t)(&v8) + 1);
    return ((g4_std::string::Destroy((char *)&v8 + 1)), (int)0);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postReviewApplication  (binary VA: 0x14100f0)
// Original: sociallib::ClientSNSInterface::postReviewApplication
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postReviewApplication(int a1, int a2, char a3, int a4)
{
  int result;
  sociallib::SNSRequestState::Self *v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 30);
  if ( (uint8_t)result != 0 )
  {
    v5 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 89, 0, 30, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v5, 2);
    sociallib::SNSRequestState::writeIntParam(v5, a3);
    sociallib::SNSRequestState::writeStringParam(v5, a4);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v5));
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = (uint32_t)(uintptr_t)(v5);
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserLikes  (binary VA: 0x1410200)
// Original: sociallib::ClientSNSInterface::getUserLikes
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserLikes(int a1, int a2, uint32_t *a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;
  int v6[4];

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 16);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 85, 0, 16, 10, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    if ( *(uint32_t *)(*a3 - 12) != 0 )
    {
      sociallib::SNSRequestState::writeStringParam(v4, a3);
    }
    else
    {
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, "me", (int)(uintptr_t)(v6));
      sociallib::SNSRequestState::writeStringParam(v4, (char *)v6 + 1);
      g4_std::string::Destroy((char *)v6 + 1);
    }
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::likeApplicationObject  (binary VA: 0x1410340)
// Original: sociallib::ClientSNSInterface::likeApplicationObject
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::likeApplicationObject(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 15);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 81, 0, 15, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::likeApplication  (binary VA: 0x1410440)
// Original: sociallib::ClientSNSInterface::likeApplication
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::likeApplication(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 14);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 77, 0, 14, 0, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getFriendsData  (binary VA: 0x1410520)
// Original: sociallib::ClientSNSInterface::getFriendsData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getFriendsData(int a1, int a2, int a3, char a4, char a5, char a6)
{
  int result;
  unsigned int v7;
  int v8;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 5);
  if ( (uint8_t)result != 0 )
  {
    v7 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v7, a2, 25, 0, 5, 3, 0);
    sociallib::SNSRequestState::writeParamListSize((sociallib::SNSRequestState::Self *)v7, 3);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v7, a3);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v7, a4);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v7, a5);
    *(uint8_t *)(v7 + 56) = a6;
    *(uint32_t *)(v7 + 200) = a3;
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v7);
    v8 = opNew(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = v7;
    return sub_1901920(v8, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getAppId  (binary VA: 0x1410650)
// Original: sociallib::ClientSNSInterface::getAppId
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getAppId(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 12);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 73, 0, 12, 1, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserAvatar  (binary VA: 0x1410730)
// Original: sociallib::ClientSNSInterface::getUserAvatar
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserAvatar(int a1, int a2, int a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 11);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 69, 0, 11, 5, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getAvatar  (binary VA: 0x1410830)
// Original: sociallib::ClientSNSInterface::getAvatar
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getAvatar(int a1, int a2, int a3)
{
  int result;
  unsigned int v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 10);
  if ( (uint8_t)result != 0 )
  {
    v4 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 65, 0, 10, 5, 0);
    *(uint32_t *)(v4 + 200) = a3;
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v4);
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = v4;
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getCountry  (binary VA: 0x1410910)
// Original: sociallib::ClientSNSInterface::getCountry
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getCountry(int a1, int a2, int a3, int a4, bool a5)
{
  int result;
  sociallib::SNSRequestState::Self *v6;
  int v7;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 46);
  if ( (uint8_t)result != 0 )
  {
    v6 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, a2, 61, 0, 46, 1, 0);
    sociallib::SNSRequestState::writeParamListSize(v6, 3);
    sociallib::SNSRequestState::writeStringParam(v6, a3);
    sociallib::SNSRequestState::writeStringParam(v6, a4);
    sociallib::SNSRequestState::writeBoolParam(v6, a5);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v6));
    v7 = opNew(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = (uint32_t)(uintptr_t)(v6);
    return sub_1901920(v7, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getName  (binary VA: 0x1410a30)
// Original: sociallib::ClientSNSInterface::getName
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getName(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 9);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 57, 0, 9, 1, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserNames  (binary VA: 0x1410b10)
// Original: sociallib::ClientSNSInterface::getUserNames
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserNames(int a1, int a2, const std::vector<std::string> *a3)
{
  int result;
  sociallib::SNSRequestState::Self *v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 8);
  if ( (uint8_t)result != 0 )
  {
    v4 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 53, 0, 8, 6, 0);
    sociallib::SNSRequestState::writeParamListSize(v4, 1);
    sociallib::SNSRequestState::writeStringArrayParam(v4, a3);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v4));
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = (uint32_t)(uintptr_t)(v4);
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserData  (binary VA: 0x1410c10)
// Original: sociallib::ClientSNSInterface::getUserData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserData(int a1, int a2, const std::vector<std::string> *a3, char a4)
{
  int result;
  unsigned int v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 7);
  if ( (uint8_t)result != 0 )
  {
    v5 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 49, 0, 7, 3, 0);
    sociallib::SNSRequestState::writeParamListSize((sociallib::SNSRequestState::Self *)v5, 1);
    sociallib::SNSRequestState::writeStringArrayParam((sociallib::SNSRequestState::Self *)v5, a3);
    *(uint8_t *)(v5 + 56) = a4;
    if ( (unsigned int)(*((uint32_t *)a3 + 1) - *(uint32_t *)a3) > 0x193 )
    {
      *(uint32_t *)(v5 + 4) = 4;
      *(uint32_t *)(v5 + 12) = 1;
      g4_std_compat::string_assign(
        v5 + 60,
        "ClientSNSInterface ERROR: Because getUserData returns raw image data it is currently capped to 100 requests at a"
        " time, consider splitting the number of friends data you load at a time into smaller sizes! If you only want Use"
        "rnames then use getUserNames instead which isn't capped.",
        0x118u);
    }
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v5);
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = v5;
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::requestPermissions  (binary VA: 0x1410d60)
// Original: sociallib::ClientSNSInterface::requestPermissions
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::requestPermissions(int a1, int a2, int a3)
{
  int result;
  int v4;
  typedef unsigned int _g4_t_v5;
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (27u + sizeof(_g4_t_v6)) > _g4_s1 ? (27u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 27u);

  if ( (unsigned int)(a3 + 1) <= 1 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v6) + 1, "No Permission Required", (int)(uintptr_t)(v6));
    sociallib::ClientSNSInterface::addErrorRequestToQueue(a1, a2, 21, (int)(uintptr_t)(v6) + 1);
    return ((g4_std::string::Destroy((char *)v6 + 1)), (int)0);
  }
  else
  {
    result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 21);
    if ( (uint8_t)result != 0 )
    {
      v5 = opNew(0xD4u);
      sociallib::SNSRequestState::Construct(v5, a2, 45, 0, 21, 0, 0);
      *(uint32_t *)(v5 + 124) = a3;
      sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v5);
      v4 = opNew(0xCu);
      if ( v4 != -8 )
        *(uint32_t *)(v4 + 8) = v5;
      return sub_1901920(v4, a1 + 28);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::hasPermission  (binary VA: 0x1410e90)
// Original: sociallib::ClientSNSInterface::hasPermission
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::hasPermission(int a1, int a2, int a3)
{
  int result;
  unsigned int v4;
  int v5;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 20);
  if ( (uint8_t)result != 0 )
  {
    v4 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v4, a2, 41, 0, 20, 4, 0);
    *(uint32_t *)(v4 + 124) = a3;
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v4);
    v5 = opNew(0xCu);
    if ( v5 != -8 )
      *(uint32_t *)(v5 + 8) = v4;
    return sub_1901920(v5, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getBilateralFriendsData  (binary VA: 0x1410f70)
// Original: sociallib::ClientSNSInterface::getBilateralFriendsData
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getBilateralFriendsData(int a1, int a2, char a3, char a4, char a5, char a6)
{
  int result;
  unsigned int v7;
  int v8;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 61);
  if ( (uint8_t)result != 0 )
  {
    v7 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v7, a2, 33, 0, 61, 3, 0);
    sociallib::SNSRequestState::writeParamListSize((sociallib::SNSRequestState::Self *)v7, 3);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v7, a3);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v7, a4);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v7, a5);
    *(uint32_t *)(v7 + 200) = 2;
    *(uint8_t *)(v7 + 56) = a6;
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v7);
    v8 = opNew(0xCu);
    if ( v8 != -8 )
      *(uint32_t *)(v8 + 8) = v7;
    return sub_1901920(v8, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getBilateralFriends  (binary VA: 0x14110a0)
// Original: sociallib::ClientSNSInterface::getBilateralFriends
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getBilateralFriends(int a1, int a2, char a3, char a4, char a5)
{
  int result;
  unsigned int v6;
  int v7;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 62);
  if ( (uint8_t)result != 0 )
  {
    v6 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v6, a2, 29, 0, 62, 2, 0);
    sociallib::SNSRequestState::writeParamListSize((sociallib::SNSRequestState::Self *)v6, 3);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v6, a3);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v6, a4);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v6, a5);
    *(uint8_t *)(v6 + 56) = 0;
    *(uint32_t *)(v6 + 200) = 2;
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v6);
    v7 = opNew(0xCu);
    if ( v7 != -8 )
      *(uint32_t *)(v7 + 8) = v6;
    return sub_1901920(v7, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getFriends  (binary VA: 0x14111c0)
// Original: sociallib::ClientSNSInterface::getFriends
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getFriends(int a1, int a2, int a3, const std::vector<std::string> *a4)
{
  int result;
  unsigned int v5;
  int v6;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 3);
  if ( (uint8_t)result != 0 )
  {
    v5 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v5, a2, 21, 0, 3, 2, 0);
    sociallib::SNSRequestState::writeParamListSize((sociallib::SNSRequestState::Self *)v5, 2);
    sociallib::SNSRequestState::writeIntParam((sociallib::SNSRequestState::Self *)v5, a3);
    sociallib::SNSRequestState::writeStringArrayParam((sociallib::SNSRequestState::Self *)v5, a4);
    *(uint8_t *)(v5 + 56) = 0;
    *(uint32_t *)(v5 + 200) = a3;
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v5);
    v6 = opNew(0xCu);
    if ( v6 != -8 )
      *(uint32_t *)(v6 + 8) = v5;
    return sub_1901920(v6, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUserLocale  (binary VA: 0x14112d0)
// Original: sociallib::ClientSNSInterface::getUserLocale
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUserLocale(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 64);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 17, 0, 64, 1, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getUid  (binary VA: 0x14113b0)
// Original: sociallib::ClientSNSInterface::getUid
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::getUid(int a1, int a2)
{
  int result;
  unsigned int v3;
  int v4;

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 2);
  if ( (uint8_t)result != 0 )
  {
    v3 = opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v3, a2, 13, 0, 2, 1, 0);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
    v4 = opNew(0xCu);
    if ( v4 != -8 )
      *(uint32_t *)(v4 + 8) = v3;
    return sub_1901920(v4, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::updateAllSNSWrappers  (binary VA: 0x1411490)
// Original: sociallib::ClientSNSInterface::updateAllSNSWrappers
// ----------------------------------------------------------------------------
char sociallib::ClientSNSInterface::updateAllSNSWrappers(sociallib::ClientSNSInterface::Self *self)
{
  sociallib::GLWTManager::Self *v1;
  int v2;
  char result;
  char *v4;
  char *v5;
  typedef char *_g4_t_v6;
  typedef char *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef char *_g4_t_v9;
  typedef uint32_t _g4_t_v10[9];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v6)) > _g4_s0 ? (4u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v7)) > _g4_s1 ? (8u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v8)) > _g4_s2 ? (12u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v9)) > _g4_s3 ? (28u + sizeof(_g4_t_v9)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v10)) > _g4_s4 ? (40u + sizeof(_g4_t_v10)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 4u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 28u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 40u);

  v1 = (sociallib::GLWTManager::Self *)sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance;
  if ( sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance == 0 )
  {
    v1 = (sociallib::GLWTManager::Self *)opNew(0x58u);
    sociallib::GLWTManager::Construct(v1);
    sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance = v1;
  }
  v2 = 0;
  sociallib::GLWTManager::Update(v1);
  do
  {
    while ( 1 )
    {
      result = sociallib::ClientSNSInterface::isSnsSupported((int)(uintptr_t)(self), v2);
      if ( result != 0 )
        break;
      if ( ++v2 == 18 )
        return result;
    }
    v4 = *((char **)self + 3);
    v5 = (char *)self + 8;
    if ( v4 == nullptr )
      goto LABEL_13;
    do
    {
      while ( v2 <= *((uint32_t *)v4 + 4) )
      {
        v5 = v4;
        v4 = *((char **)v4 + 2);
        if ( v4 == nullptr )
          goto LABEL_11;
      }
      v4 = *((char **)v4 + 3);
    }
    while ( v4 != nullptr );
LABEL_11:
    if ( (char *)self + 8 == v5 || v2 < *((uint32_t *)v5 + 4) )
    {
LABEL_13:
      v7 = v5;
      v10[0] = v2;
      v10[1] = 0;
      v6 = (char *)self + 4;
      v8 = v10;
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v9);
      v5 = v9;
    }
    ++v2;
    result = (*(int (**)(uint32_t, char *, char *, uint32_t *))(**((uint32_t **)v5 + 5) + 216))(
               *((uint32_t *)v5 + 5),
               v6,
               v7,
               v8);
  }
  while ( v2 != 18 );
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::Destroy  (binary VA: 0x1411590)
// Original: sociallib::ClientSNSInterface::~ClientSNSInterface
// ----------------------------------------------------------------------------
void sociallib::ClientSNSInterface::Destroy(sociallib::ClientSNSInterface::Self *self)
{
  signed int v1;
  char *v2;
  char *v3;
  char *v4;
  char *i;
  char *v6;
  int v7;
  char *v8;
  char *v9;
  sociallib::ClientSNSInterface::Self *v10;
  int v11;
  sociallib::CDynamicMemoryStream::Self *v12;
  sociallib::CDynamicMemoryStream::Self *v13;
  sociallib::CDynamicMemoryStream::Self *v14;
  sociallib::CDynamicMemoryStream::Self *v15;
  sociallib::CDynamicMemoryStream::Self *v16;
  sociallib::CDynamicMemoryStream::Self *v17;
  uint32_t *v18;
  uint32_t *v19;
  uint32_t *v20;
  sociallib::CDynamicMemoryStream::Self *v21;
  sociallib::CDynamicMemoryStream::Self *v22;
  char *v23;
  sociallib::GLWTManager::Self *v24;
  char *v25;
  char *v26;
  typedef sociallib::CDynamicMemoryStream::Self *_g4_t_v27;
  typedef sociallib::CDynamicMemoryStream::Self *_g4_t_v28;
  typedef sociallib::CDynamicMemoryStream::Self *_g4_t_v29;
  typedef sociallib::CDynamicMemoryStream::Self *_g4_t_v30;
  typedef char *_g4_t_v31;
  typedef char *_g4_t_v32;
  typedef uint32_t *_g4_t_v33;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v34;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef uint32_t _g4_t_v37[2];
  typedef uint32_t _g4_t_v38[2];
  typedef uint32_t _g4_t_v39[2];
  typedef uint32_t _g4_t_v40[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v28)) > _g4_s1 ? (0u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v29)) > _g4_s2 ? (0u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v30)) > _g4_s3 ? (0u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (4u + sizeof(_g4_t_v31)) > _g4_s4 ? (4u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v32)) > _g4_s5 ? (8u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v33)) > _g4_s6 ? (12u + sizeof(_g4_t_v33)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v34)) > _g4_s7 ? (16u + sizeof(_g4_t_v34)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v35)) > _g4_s8 ? (20u + sizeof(_g4_t_v35)) : _g4_s8,
    _g4_s10 = (24u + sizeof(_g4_t_v36)) > _g4_s9 ? (24u + sizeof(_g4_t_v36)) : _g4_s9,
    _g4_s11 = (28u + sizeof(_g4_t_v37)) > _g4_s10 ? (28u + sizeof(_g4_t_v37)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v38)) > _g4_s11 ? (40u + sizeof(_g4_t_v38)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v39)) > _g4_s12 ? (48u + sizeof(_g4_t_v39)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v40)) > _g4_s13 ? (56u + sizeof(_g4_t_v40)) : _g4_s13
  };
  alignas(16) uint8_t _g4_sf[_g4_s14];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 0u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 0u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 20u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 24u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 28u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 48u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 56u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094EF0);
  if ( *((uint32_t *)self + 6) != 0 )
  {
    v1 = 0;
    v2 = *((char **)self + 3);
    v3 = (char *)self + 8;
    v36 = (char *)self + 4;
    do
    {
      v4 = (char *)self + 8;
      if ( v2 == nullptr )
        goto LABEL_10;
      for ( i = v2; i != nullptr; i = *((char **)i + 3) )
      {
        while ( v1 <= *((uint32_t *)i + 4) )
        {
          v4 = i;
          i = *((char **)i + 2);
          if ( i == nullptr )
            goto LABEL_8;
        }
      }
LABEL_8:
      if ( v3 == v4 || v1 < *((uint32_t *)v4 + 4) )
      {
LABEL_10:
        v32 = v4;
        v33 = v38;
        v31 = (char *)self + 4;
        v38[0] = v1;
        v38[1] = 0;
        g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(v37);
        v4 = (char *)v37[0];
        v2 = *((char **)self + 3);
      }
      if ( *((uint32_t *)v4 + 5) != 0 )
      {
        v6 = (char *)self + 8;
        if ( v2 == nullptr )
          goto LABEL_19;
        do
        {
          while ( v1 <= *((uint32_t *)v2 + 4) )
          {
            v6 = v2;
            v2 = *((char **)v2 + 2);
            if ( v2 == nullptr )
              goto LABEL_17;
          }
          v2 = *((char **)v2 + 3);
        }
        while ( v2 != nullptr );
LABEL_17:
        if ( v3 == v6 || v1 < *((uint32_t *)v6 + 4) )
        {
LABEL_19:
          v33 = v39;
          v32 = v6;
          v39[0] = v1;
          v39[1] = 0;
          v31 = (char *)self + 4;
          g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(v37);
          v6 = (char *)v37[0];
        }
        v7 = *((uint32_t *)v6 + 5);
        if ( v7 != 0 )
          G4_VCALL<void>(v7, 4, v31, v32, v33);
        v8 = *((char **)self + 3);
        v9 = (char *)self + 8;
        if ( v8 == nullptr )
          goto LABEL_29;
        do
        {
          while ( v1 <= *((uint32_t *)v8 + 4) )
          {
            v9 = v8;
            v8 = *((char **)v8 + 2);
            if ( v8 == nullptr )
              goto LABEL_27;
          }
          v8 = *((char **)v8 + 3);
        }
        while ( v8 != nullptr );
LABEL_27:
        if ( v9 == v3 || v1 < *((uint32_t *)v9 + 4) )
        {
LABEL_29:
          v33 = v40;
          v32 = v9;
          v40[0] = v1;
          v40[1] = 0;
          v31 = (char *)self + 4;
          g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(v37);
          v9 = (char *)v37[0];
        }
        *((uint32_t *)v9 + 5) = 0;
        v2 = *((char **)self + 3);
      }
      ++v1;
    }
    while ( (unsigned int)v1 < *((uint32_t *)self + 6) );
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_erase(
      (int)(uintptr_t)(v36),
      v2);
  }
  else
  {
    v3 = (char *)self + 8;
    v36 = (char *)self + 4;
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_erase(
      (int)(uintptr_t)(self) + 4,
      *((void **)self + 3));
  }
  v10 = *((sociallib::ClientSNSInterface::Self **)self + 7);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(v3);
  *((uint32_t *)self + 6) = 0;
  v35 = (sociallib::ClientSNSInterface::Self *)((char *)self + 28);
  if ( v10 != (sociallib::ClientSNSInterface::Self *)((char *)self + 28) )
  {
    v34 = v10;
    do
    {
      v11 = *((uint32_t *)v34 + 2);
      if ( v11 != 0 )
      {
        sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(v11 + 180));
        v12 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 172);
        v13 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 168);
        if ( v12 != v13 )
        {
          do
          {
            g4_std::string::Destroy((char *)v13 + 36);
            g4_std::string::Destroy((char *)v13 + 32);
            g4_std::string::Destroy((char *)v13 + 28);
            g4_std::string::Destroy((char *)v13 + 24);
            g4_std::string::Destroy((char *)v13 + 16);
            g4_std::string::Destroy((char *)v13 + 12);
            g4_std::string::Destroy((char *)v13 + 8);
            g4_std::string::Destroy((char *)v13 + 4);
            v27 = v13;
            v13 = (sociallib::CDynamicMemoryStream::Self *)((char *)v13 + 52);
            g4_std::string::Destroy(v27);
          }
          while ( v12 != v13 );
          v13 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 168);
        }
        if ( v13 != nullptr )
          opDelete(v13);
        v14 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 160);
        v15 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 156);
        if ( v14 != v15 )
        {
          do
          {
            g4_std::string::Destroy((char *)v15 + 8);
            g4_std::string::Destroy((char *)v15 + 4);
            v28 = v15;
            v15 = (sociallib::CDynamicMemoryStream::Self *)((char *)v15 + 12);
            g4_std::string::Destroy(v28);
          }
          while ( v14 != v15 );
          v15 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 156);
        }
        if ( v15 != nullptr )
          opDelete(v15);
        v16 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 148);
        v17 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 144);
        if ( v16 != v17 )
        {
          do
          {
            g4_std::string::Destroy((char *)v17 + 32);
            g4_std::string::Destroy((char *)v17 + 28);
            g4_std::string::Destroy((char *)v17 + 24);
            g4_std::string::Destroy((char *)v17 + 20);
            g4_std::string::Destroy((char *)v17 + 4);
            v29 = v17;
            v17 = (sociallib::CDynamicMemoryStream::Self *)((char *)v17 + 36);
            g4_std::string::Destroy(v29);
          }
          while ( v16 != v17 );
          v17 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 144);
        }
        if ( v17 != nullptr )
          opDelete(v17);
        v18 = *(uint32_t **)(v11 + 136);
        v19 = *(uint32_t **)(v11 + 132);
        if ( v18 != v19 )
        {
          do
          {
            g4_std::string::Destroy(v19 + 14);
            g4_std::string::Destroy(v19 + 13);
            g4_std::string::Destroy(v19 + 12);
            g4_std::string::Destroy(v19 + 11);
            g4_std::string::Destroy(v19 + 10);
            g4_std::string::Destroy(v19 + 9);
            g4_std::string::Destroy(v19 + 8);
            g4_std::string::Destroy(v19 + 7);
            g4_std::string::Destroy(v19 + 6);
            g4_std::string::Destroy(v19 + 5);
            g4_std::string::Destroy(v19 + 2);
            g4_std::string::Destroy(v19 + 1);
            v20 = (uint32_t *)(*v19 - 12);
            if ( v20 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v19 - 4), 0xFFFFFFFF) <= 0 )
              g4_std::string::Rep::M_destroy(v20);
            v19 += 17;
          }
          while ( v18 != v19 );
          v19 = *(uint32_t **)(v11 + 132);
        }
        if ( v19 != nullptr )
          opDelete(v19);
        g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
          v11 + 100,
          *(void **)(v11 + 108));
        std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
          v11 + 76,
          *(void **)(v11 + 84));
        v21 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 68);
        v22 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 64);
        if ( v21 != v22 )
        {
          do
          {
            v30 = v22;
            v22 = (sociallib::CDynamicMemoryStream::Self *)((char *)v22 + 4);
            g4_std::string::Destroy(v30);
          }
          while ( v21 != v22 );
          v22 = *(sociallib::CDynamicMemoryStream::Self **)(v11 + 64);
        }
        if ( v22 != nullptr )
          opDelete(v22);
        g4_std::string::Destroy(v11 + 60);
        sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(v11 + 36));
        g4_std::string::Destroy(v11 + 24);
        opDelete((void *)v11);
        *((uint32_t *)v34 + 2) = 0;
      }
      v34 = *(sociallib::ClientSNSInterface::Self **)v34;
    }
    while ( v34 != v35 );
    v10 = *((sociallib::ClientSNSInterface::Self **)self + 7);
  }
  if ( v35 != v10 )
  {
    while ( 1 )
    {
      v23 = *(char **)v10;
      opDelete(v10);
      if ( v23 == (char *)v35 )
        break;
      v10 = (sociallib::ClientSNSInterface::Self *)v23;
    }
  }
  v24 = (sociallib::GLWTManager::Self *)sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(v35);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)(v35);
  if ( v24 != nullptr )
  {
    sociallib::GLWTManager::Destroy(v24);
    opDelete(v24);
    sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance = 0;
    v25 = *((char **)self + 7);
    if ( v35 != (sociallib::ClientSNSInterface::Self *)v25 )
    {
      while ( 1 )
      {
        v26 = *(char **)v25;
        opDelete(v25);
        if ( v26 == (char *)v35 )
          break;
        v25 = v26;
      }
    }
  }
  g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_erase(
    (int)(uintptr_t)(v36),
    *((void **)self + 3));
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::Destroy_ea1411b10  (binary VA: 0x1411b10)
// Original: sociallib::ClientSNSInterface::~ClientSNSInterface
// ----------------------------------------------------------------------------
void sociallib::ClientSNSInterface::Destroy_ea1411b10(sociallib::ClientSNSInterface::Self *self)
{
  sociallib::ClientSNSInterface::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::Construct  (binary VA: 0x1411b50)
// Original: sociallib::ClientSNSInterface::ClientSNSInterface
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::Construct(sociallib::ClientSNSInterface::Self *self)
{
  int *v1;
  int *v2;
  int v3;
  sociallib::ClientSNSInterface::Self *result;
  int v5;
  int v6;
  uint32_t *v7;
  int v8;
  uint32_t *v9;
  int *v10;
  sociallib::SNSWrapperBase::Self *v11;
  int *v12;
  int *v13;
  int *v14;
  int *v15;
  int *v16;
  int *v17;
  int *v18;
  int *v19;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v20;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v21;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v22;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v23;
  typedef sociallib::LdapWrapper::Self *_g4_t_v24;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v25;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v26;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v27;
  typedef sociallib::SNSWrapperBase::Self *_g4_t_v28;
  typedef int *_g4_t_v29;
  typedef uint32_t _g4_t_v30[3];
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33[2];
  typedef char _g4_t_v34;
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
  typedef void *_g4_t_v53;
  typedef int *_g4_t_v54;
  typedef int *_g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef int _g4_t_v59;
  typedef void *_g4_t_v60;
  typedef int *_g4_t_v61;
  typedef int *_g4_t_v62;
  typedef int _g4_t_v63;
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v21)) > _g4_s1 ? (0u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v22)) > _g4_s2 ? (0u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v23)) > _g4_s3 ? (0u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v24)) > _g4_s4 ? (0u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (0u + sizeof(_g4_t_v25)) > _g4_s5 ? (0u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (0u + sizeof(_g4_t_v26)) > _g4_s6 ? (0u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (0u + sizeof(_g4_t_v27)) > _g4_s7 ? (0u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (0u + sizeof(_g4_t_v28)) > _g4_s8 ? (0u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (4u + sizeof(_g4_t_v29)) > _g4_s9 ? (4u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (12u + sizeof(_g4_t_v30)) > _g4_s10 ? (12u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (26u + sizeof(_g4_t_v31)) > _g4_s11 ? (26u + sizeof(_g4_t_v31)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v32)) > _g4_s12 ? (28u + sizeof(_g4_t_v32)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v33)) > _g4_s13 ? (32u + sizeof(_g4_t_v33)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v34)) > _g4_s14 ? (40u + sizeof(_g4_t_v34)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v35)) > _g4_s15 ? (44u + sizeof(_g4_t_v35)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v36)) > _g4_s16 ? (48u + sizeof(_g4_t_v36)) : _g4_s16,
    _g4_s18 = (52u + sizeof(_g4_t_v37)) > _g4_s17 ? (52u + sizeof(_g4_t_v37)) : _g4_s17,
    _g4_s19 = (56u + sizeof(_g4_t_v38)) > _g4_s18 ? (56u + sizeof(_g4_t_v38)) : _g4_s18,
    _g4_s20 = (60u + sizeof(_g4_t_v39)) > _g4_s19 ? (60u + sizeof(_g4_t_v39)) : _g4_s19,
    _g4_s21 = (64u + sizeof(_g4_t_v40)) > _g4_s20 ? (64u + sizeof(_g4_t_v40)) : _g4_s20,
    _g4_s22 = (68u + sizeof(_g4_t_v41)) > _g4_s21 ? (68u + sizeof(_g4_t_v41)) : _g4_s21,
    _g4_s23 = (72u + sizeof(_g4_t_v42)) > _g4_s22 ? (72u + sizeof(_g4_t_v42)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v43)) > _g4_s23 ? (76u + sizeof(_g4_t_v43)) : _g4_s23,
    _g4_s25 = (80u + sizeof(_g4_t_v44)) > _g4_s24 ? (80u + sizeof(_g4_t_v44)) : _g4_s24,
    _g4_s26 = (84u + sizeof(_g4_t_v45)) > _g4_s25 ? (84u + sizeof(_g4_t_v45)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v46)) > _g4_s26 ? (88u + sizeof(_g4_t_v46)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v47)) > _g4_s27 ? (92u + sizeof(_g4_t_v47)) : _g4_s27,
    _g4_s29 = (96u + sizeof(_g4_t_v48)) > _g4_s28 ? (96u + sizeof(_g4_t_v48)) : _g4_s28,
    _g4_s30 = (100u + sizeof(_g4_t_v49)) > _g4_s29 ? (100u + sizeof(_g4_t_v49)) : _g4_s29,
    _g4_s31 = (104u + sizeof(_g4_t_v50)) > _g4_s30 ? (104u + sizeof(_g4_t_v50)) : _g4_s30,
    _g4_s32 = (108u + sizeof(_g4_t_v51)) > _g4_s31 ? (108u + sizeof(_g4_t_v51)) : _g4_s31,
    _g4_s33 = (112u + sizeof(_g4_t_v52)) > _g4_s32 ? (112u + sizeof(_g4_t_v52)) : _g4_s32,
    _g4_s34 = (116u + sizeof(_g4_t_v53)) > _g4_s33 ? (116u + sizeof(_g4_t_v53)) : _g4_s33,
    _g4_s35 = (120u + sizeof(_g4_t_v54)) > _g4_s34 ? (120u + sizeof(_g4_t_v54)) : _g4_s34,
    _g4_s36 = (124u + sizeof(_g4_t_v55)) > _g4_s35 ? (124u + sizeof(_g4_t_v55)) : _g4_s35,
    _g4_s37 = (128u + sizeof(_g4_t_v56)) > _g4_s36 ? (128u + sizeof(_g4_t_v56)) : _g4_s36,
    _g4_s38 = (132u + sizeof(_g4_t_v57)) > _g4_s37 ? (132u + sizeof(_g4_t_v57)) : _g4_s37,
    _g4_s39 = (136u + sizeof(_g4_t_v58)) > _g4_s38 ? (136u + sizeof(_g4_t_v58)) : _g4_s38,
    _g4_s40 = (140u + sizeof(_g4_t_v59)) > _g4_s39 ? (140u + sizeof(_g4_t_v59)) : _g4_s39,
    _g4_s41 = (144u + sizeof(_g4_t_v60)) > _g4_s40 ? (144u + sizeof(_g4_t_v60)) : _g4_s40,
    _g4_s42 = (148u + sizeof(_g4_t_v61)) > _g4_s41 ? (148u + sizeof(_g4_t_v61)) : _g4_s41,
    _g4_s43 = (152u + sizeof(_g4_t_v62)) > _g4_s42 ? (152u + sizeof(_g4_t_v62)) : _g4_s42,
    _g4_s44 = (156u + sizeof(_g4_t_v63)) > _g4_s43 ? (156u + sizeof(_g4_t_v63)) : _g4_s43
  };
  alignas(16) uint8_t _g4_sf[_g4_s44];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 0u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 0u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 0u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 0u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 0u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 4u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 12u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 26u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 84u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 88u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 92u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 96u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 100u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 104u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 108u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 112u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 116u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 120u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 124u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 128u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 132u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 136u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 140u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 144u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 148u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 152u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 156u);

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094EF0);
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)((char *)self + 28);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 8) = (uint32_t)(uintptr_t)((char *)self + 28);
  v29 = (int *)((char *)self + 8);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), "calling loadSnsConfigJson", (int)(uintptr_t)(&v31));
  sociallib::SocialLibLog(1, 3, &v32);
  g4_std::string::Destroy(&v32);
  sociallib::ClientSNSInterface::loadSnsConfigJson(self);
  sociallib::ClientSNSInterface::s_device = 2;
  v1 = (int *)(*(uint8_t **)unk_2119850);
  v2 = (int *)&unk_211984C;
  if ( (*(uint8_t **)unk_2119850) == 0 )
    goto LABEL_97;
  do
  {
    while ( v1[4] > 1 )
    {
      v2 = v1;
      v1 = (int *)v1[2];
      if ( v1 == nullptr )
        goto LABEL_6;
    }
    v1 = (int *)v1[3];
  }
  while ( v1 != nullptr );
LABEL_6:
  if ( v2 == (int *)&unk_211984C || v2[4] > 2 )
  {
LABEL_97:
    v54 = &v52;
    v55 = &v52;
    v61 = &v59;
    v62 = &v59;
    v52 = 0;
    v53 = nullptr;
    v56 = 0;
    v57 = 2;
    v59 = 0;
    v60 = nullptr;
    v63 = 0;
    g4_std::Rb_tree_sociallib_SNSInterfaceDe_a7dff7::M_insert_unique(v30);
    v2 = (int *)v30[0];
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v58),
      v60);
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&v51),
      v53);
  }
  if ( v2 + 5 == (int *)&sociallib::ClientSNSInterface::s_supportedSNS )
  {
    v6 = (int)(uintptr_t)((*(uint32_t *)unk_211983C));
  }
  else
  {
    g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_erase(
      (int)(uintptr_t)(&sociallib::ClientSNSInterface::s_supportedSNS),
      (*(uint8_t **)unk_2119838));
    v3 = v2[7];
    result = (sociallib::ClientSNSInterface::Self *)&unk_2119834;
    *(uintptr_t *)(unk_2119838) = (uintptr_t)(0);
    *(uintptr_t *)(unk_211983C) = (uintptr_t)(&unk_2119834);
    *(uintptr_t *)(unk_2119840) = (uintptr_t)(&unk_2119834);
    *(uintptr_t *)(unk_2119844) = (uintptr_t)(0);
    if ( v3 == 0 )
      return result;
    v5 = (int)(uintptr_t)(g4_std::Rb_tree_sociallib_ClientSNSEnum_867a4c::M_copy(
           &sociallib::ClientSNSInterface::s_supportedSNS,
           v3,
           &unk_2119834));
    v6 = v5;
    *(uintptr_t *)(unk_2119838) = (uintptr_t)(v5);
    while ( *(uint32_t *)(v6 + 8) != 0 )
      v6 = *(uint32_t *)(v6 + 8);
    *(uintptr_t *)(unk_211983C) = (uintptr_t)(v6);
    while ( *(uint32_t *)(v5 + 12) != 0 )
      v5 = *(uint32_t *)(v5 + 12);
    *(uintptr_t *)(unk_2119840) = (uintptr_t)(v5);
    *(uintptr_t *)(unk_2119844) = (uintptr_t)(v2[10]);
  }
  for ( result = (sociallib::ClientSNSInterface::Self *)&unk_2119834;
        (void *)v6 != &unk_2119834;
        result = (sociallib::ClientSNSInterface::Self *)&unk_2119834 )
  {
    v7 = (uint32_t *)(*(uint8_t **)unk_2119820);
    v8 = *(uint32_t *)(v6 + 16);
    v9 = (uint32_t *)(&unk_211981C);
    if ( (*(uint8_t **)unk_2119820) == 0 )
      goto LABEL_25;
    do
    {
      while ( v8 <= v7[4] )
      {
        v9 = v7;
        v7 = (uint32_t *)v7[2];
        if ( v7 == nullptr )
          goto LABEL_23;
      }
      v7 = (uint32_t *)v7[3];
    }
    while ( v7 != nullptr );
LABEL_23:
    if ( v9 == (uint32_t *)&unk_211981C || v8 < v9[4] )
    {
LABEL_25:
      v33[1] = *(uint32_t *)(v6 + 16);
      v34 = 0;
      g4_std::Rb_tree_sociallib_ClientSNSEnum_63e07f::M_insert_unique(v30);
      v9 = (uint32_t *)v30[0];
    }
    *((uint8_t *)v9 + 20) = 0;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), "%s is a supported SNS.", (int)(uintptr_t)(&v31) + 1);
    sociallib::SocialLibLog(*(uint32_t *)(v6 + 16), 3, v33);
    g4_std::string::Destroy(v33);
    switch ( *(uint32_t *)(v6 + 16) )
    {
      case 2:
        v28 = (sociallib::SNSWrapperBase::Self *)opNew(4u);
        sociallib::SNSWrapperBase::Construct(v28);
        v11 = v28;
        *(uint32_t *)v28 = ((uint32_t)(uintptr_t)&off_20956C8);
        v19 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v19 != nullptr )
        {
          do
          {
            if ( v19[4] > 1 )
            {
              v10 = v19;
              v19 = (int *)v19[2];
            }
            else
            {
              v19 = (int *)v19[3];
            }
          }
          while ( v19 != nullptr );
          if ( v29 != v10 && v10[4] <= 2 )
            goto LABEL_31;
        }
        v43 = 2;
        v44 = 0;
        goto LABEL_30;
      case 3:
        v24 = (sociallib::LdapWrapper::Self *)opNew(8u);
        sociallib::LdapWrapper::LdapWrapper(v24);
        v11 = (sociallib::SNSWrapperBase::Self *)(v24);
        v15 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v15 != nullptr )
        {
          do
          {
            while ( v15[4] > 2 )
            {
              v10 = v15;
              v15 = (int *)v15[2];
              if ( v15 == nullptr )
                goto LABEL_63;
            }
            v15 = (int *)v15[3];
          }
          while ( v15 != nullptr );
LABEL_63:
          if ( v29 != v10 && v10[4] <= 3 )
            goto LABEL_31;
        }
        v45 = 3;
        v46 = 0;
        goto LABEL_30;
      case 4:
        v26 = (sociallib::SNSWrapperBase::Self *)opNew(0x24u);
        sociallib::SNSWrapperBase::Construct(v26);
        v11 = v26;
        *(uint32_t *)v26 = ((uint32_t)(uintptr_t)&off_20952E8);
        *((uint32_t *)v26 + 4) = 0;
        *((uint32_t *)v26 + 2) = (uint32_t)(uintptr_t)(&dword_213B814);
        *((uint32_t *)v26 + 5) = 0;
        *((uint32_t *)v26 + 8) = 0;
        *((uint32_t *)v26 + 6) = (uint32_t)(uintptr_t)((char *)v26 + 16);
        *((uint32_t *)v26 + 7) = (uint32_t)(uintptr_t)((char *)v26 + 16);
        v17 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v17 != nullptr )
        {
          do
          {
            while ( v17[4] > 3 )
            {
              v10 = v17;
              v17 = (int *)v17[2];
              if ( v17 == nullptr )
                goto LABEL_79;
            }
            v17 = (int *)v17[3];
          }
          while ( v17 != nullptr );
LABEL_79:
          if ( v10 != v29 && v10[4] <= 4 )
            goto LABEL_31;
        }
        v35 = 4;
        v36 = 0;
        goto LABEL_30;
      case 5:
        v22 = (sociallib::SNSWrapperBase::Self *)opNew(4u);
        sociallib::SNSWrapperBase::Construct(v22);
        v11 = v22;
        *(uint32_t *)v22 = ((uint32_t)(uintptr_t)&off_2095428);
        v13 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v13 != nullptr )
        {
          do
          {
            while ( v13[4] > 4 )
            {
              v10 = v13;
              v13 = (int *)v13[2];
              if ( v13 == nullptr )
                goto LABEL_47;
            }
            v13 = (int *)v13[3];
          }
          while ( v13 != nullptr );
LABEL_47:
          if ( v10 != v29 && v10[4] <= 5 )
            goto LABEL_31;
        }
        v39 = 5;
        v40 = 0;
        goto LABEL_30;
      case 7:
        v23 = (sociallib::SNSWrapperBase::Self *)opNew(4u);
        sociallib::SNSWrapperBase::Construct(v23);
        v11 = v23;
        *(uint32_t *)v23 = ((uint32_t)(uintptr_t)&off_2095808);
        v14 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v14 != nullptr )
        {
          do
          {
            while ( v14[4] > 6 )
            {
              v10 = v14;
              v14 = (int *)v14[2];
              if ( v14 == nullptr )
                goto LABEL_55;
            }
            v14 = (int *)v14[3];
          }
          while ( v14 != nullptr );
LABEL_55:
          if ( v10 != v29 && v10[4] <= 7 )
            goto LABEL_31;
        }
        v41 = 7;
        v42 = 0;
        goto LABEL_30;
      case 8:
        v25 = (sociallib::SNSWrapperBase::Self *)opNew(4u);
        sociallib::SNSWrapperBase::Construct(v25);
        v11 = v25;
        *(uint32_t *)v25 = ((uint32_t)(uintptr_t)&off_20951A8);
        v16 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v16 != nullptr )
        {
          do
          {
            while ( v16[4] > 7 )
            {
              v10 = v16;
              v16 = (int *)v16[2];
              if ( v16 == nullptr )
                goto LABEL_71;
            }
            v16 = (int *)v16[3];
          }
          while ( v16 != nullptr );
LABEL_71:
          if ( v10 != v29 && v10[4] <= 8 )
            goto LABEL_31;
        }
        v47 = 8;
        v48 = 0;
        goto LABEL_30;
      case 9:
        v21 = (sociallib::SNSWrapperBase::Self *)opNew(4u);
        sociallib::SNSWrapperBase::Construct(v21);
        v11 = v21;
        *(uint32_t *)v21 = ((uint32_t)(uintptr_t)&off_2095588);
        v12 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v12 != nullptr )
        {
          do
          {
            while ( v12[4] > 8 )
            {
              v10 = v12;
              v12 = (int *)v12[2];
              if ( v12 == nullptr )
                goto LABEL_39;
            }
            v12 = (int *)v12[3];
          }
          while ( v12 != nullptr );
LABEL_39:
          if ( v10 != v29 && v10[4] <= 9 )
            goto LABEL_31;
        }
        v49 = 9;
        v50 = 0;
        goto LABEL_30;
      case 0xD:
        v27 = (sociallib::SNSWrapperBase::Self *)opNew(4u);
        sociallib::SNSWrapperBase::Construct(v27);
        v11 = v27;
        *(uint32_t *)v27 = ((uint32_t)(uintptr_t)&off_2094F28);
        v18 = *((int **)self + 3);
        v10 = (int *)((char *)self + 8);
        if ( v18 == nullptr )
          goto LABEL_89;
        break;
      default:
        goto LABEL_32;
    }
    do
    {
      while ( v18[4] > 12 )
      {
        v10 = v18;
        v18 = (int *)v18[2];
        if ( v18 == nullptr )
          goto LABEL_87;
      }
      v18 = (int *)v18[3];
    }
    while ( v18 != nullptr );
LABEL_87:
    if ( v10 == v29 || v10[4] > 13 )
    {
LABEL_89:
      v37 = 13;
      v38 = 0;
LABEL_30:
      v20 = v11;
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(v30);
      v10 = (int *)v30[0];
      v11 = v20;
    }
LABEL_31:
    v10[5] = (int)(uintptr_t)(v11);
LABEL_32:
    v6 = sub_19048E0(v6);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::SetApiVersion  (binary VA: 0x1412330)
// Original: sociallib::ClientSNSInterface::SetApiVersion
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::SetApiVersion(int a1, int a2, int a3)
{
  uint32_t *v3;
  uint32_t *v4;
  typedef uint32_t *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef uint32_t _g4_t_v9[5];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v9)) > _g4_s3 ? (40u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  v3 = *(uint32_t **)(a1 + 12);
  v4 = (uint32_t *)(a1 + 8);
  if ( v3 == nullptr )
    goto LABEL_8;
  do
  {
    while ( a2 <= v3[4] )
    {
      v4 = v3;
      v3 = (uint32_t *)v3[2];
      if ( v3 == nullptr )
        goto LABEL_6;
    }
    v3 = (uint32_t *)v3[3];
  }
  while ( v3 != nullptr );
LABEL_6:
  if ( (uint32_t *)(a1 + 8) == v4 || a2 < v4[4] )
  {
LABEL_8:
    v9[0] = a2;
    v6 = v4;
    v9[1] = 0;
    v7 = v9;
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v8);
    v4 = v8;
  }
  return G4_VCALL<int>(v4[5], 292, a3, v6, v7);
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getFacebookAccessToken  (binary VA: 0x14123d0)
// Original: sociallib::ClientSNSInterface::getFacebookAccessToken
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::getFacebookAccessToken(sociallib::ClientSNSInterface::Self *self, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t v5[8];

  v2 = *(uint32_t **)(a2 + 12);
  v3 = (uint32_t *)(a2 + 8);
  if ( v2 == nullptr )
    goto LABEL_8;
  do
  {
    while ( (int)v2[4] > 3 )
    {
      v3 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_6;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_6:
  if ( (uint32_t *)(a2 + 8) == v3 || (int)v3[4] > 4 )
  {
LABEL_8:
    v5[3] = 4;
    v5[4] = 0;
    g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(v5);
    v3 = (uint32_t *)v5[0];
  }
  (*(void (**)(sociallib::ClientSNSInterface::Self *))(*(uint32_t *)v3[5] + 228))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::handleOpenUrl  (binary VA: 0x1412470)
// Original: sociallib::ClientSNSInterface::handleOpenUrl
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::handleOpenUrl(int a1, int a2, uint32_t *a3)
{
  int result;
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v6;
  typedef uint32_t *_g4_t_v7;
  typedef uint32_t *_g4_t_v8;
  typedef uint32_t _g4_t_v9[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v6)) > _g4_s0 ? (8u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v7)) > _g4_s1 ? (12u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v9)) > _g4_s3 ? (40u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);

  result = 0;
  if ( *(uint32_t *)(*a3 - 12) != 0 )
  {
    v4 = *(uint32_t **)(a1 + 12);
    v5 = (uint32_t *)(a1 + 8);
    if ( v4 == nullptr )
      goto LABEL_9;
    do
    {
      while ( a2 <= v4[4] )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_7;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_7:
    if ( (uint32_t *)(a1 + 8) == v5 || a2 < v5[4] )
    {
LABEL_9:
      v9[0] = a2;
      v6 = v5;
      v9[1] = 0;
      v7 = v9;
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v8);
      v5 = v8;
    }
    return G4_VCALL<int>(v5[5], 224, a3, v6, v7);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::SetLocale  (binary VA: 0x1412540)
// Original: sociallib::ClientSNSInterface::SetLocale
// ----------------------------------------------------------------------------
char sociallib::ClientSNSInterface::SetLocale(int a1, int a2, int a3)
{
  char result;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  void (*v7)(int, char *, uint32_t *, uint32_t *);
  typedef uint32_t *_g4_t_v8;
  typedef uint32_t *_g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef char _g4_t_v11[4];
  typedef uint32_t _g4_t_v12[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v8)) > _g4_s0 ? (8u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v9)) > _g4_s1 ? (12u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v10)) > _g4_s2 ? (28u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v11)) > _g4_s3 ? (36u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v12)) > _g4_s4 ? (40u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  result = sociallib::ClientSNSInterface::isSnsSupported(a1, a2);
  if ( result != 0 )
  {
    v4 = *(uint32_t **)(a1 + 12);
    v5 = (uint32_t *)(a1 + 8);
    if ( v4 == nullptr )
      goto LABEL_9;
    do
    {
      while ( a2 <= v4[4] )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
        if ( v4 == nullptr )
          goto LABEL_7;
      }
      v4 = (uint32_t *)v4[3];
    }
    while ( v4 != nullptr );
LABEL_7:
    if ( (uint32_t *)(a1 + 8) == v5 || a2 < v5[4] )
    {
LABEL_9:
      v8 = v5;
      v12[0] = a2;
      v12[1] = 0;
      v9 = v12;
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v10);
      v5 = v10;
    }
    v6 = v5[5];
    v7 = *(void (**)(int, char *, uint32_t *, uint32_t *))(*(uint32_t *)v6 + 280);
    g4_std::string::construct_copy(v11, a3);
    v7(v6, v11, v8, v9);
    return ((g4_std::string::Destroy(v11)), (char)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::postMessageToWall  (binary VA: 0x1412630)
// Original: sociallib::ClientSNSInterface::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::postMessageToWall(int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  int result;
  sociallib::SNSRequestState::Self *v10;
  int v11;
  int v12[4];

  result = sociallib::ClientSNSInterface::checkIfRequestCanBeMade(a1, a2, 17);
  if ( (uint8_t)result != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v12) + 1, "fr_FR", (int)(uintptr_t)(v12));
    sociallib::ClientSNSInterface::SetLocale(a1, a2, (int)(uintptr_t)(v12) + 1);
    g4_std::string::Destroy((char *)v12 + 1);
    v10 = (sociallib::SNSRequestState::Self *)opNew(0xD4u);
    sociallib::SNSRequestState::Construct(v10, a2, 93, 0, 17, 0, 0);
    sociallib::SNSRequestState::writeParamListSize(v10, 7);
    sociallib::SNSRequestState::writeStringParam(v10, a3);
    sociallib::SNSRequestState::writeStringParam(v10, a4);
    sociallib::SNSRequestState::writeStringParam(v10, a5);
    sociallib::SNSRequestState::writeStringParam(v10, a6);
    sociallib::SNSRequestState::writeStringParam(v10, a7);
    sociallib::SNSRequestState::writeStringParam(v10, a8);
    sociallib::SNSRequestState::writeStringParam(v10, a9);
    sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v10));
    v11 = opNew(0xCu);
    if ( v11 != -8 )
      *(uint32_t *)(v11 + 8) = (uint32_t)(uintptr_t)(v10);
    return sub_1901920(v11, a1 + 28);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::update  (binary VA: 0x14127c0)
// Original: sociallib::ClientSNSInterface::update
// ----------------------------------------------------------------------------
bool sociallib::ClientSNSInterface::update(sociallib::ClientSNSInterface::Self *self)
{
  char *v1;
  char *i;
  unsigned int v3;
  int v4;
  void *v5;
  void *v6;
  unsigned int v7;
  size_t v8;
  void *v9;
  void *v10;
  void *v11;
  unsigned int v12;
  size_t v13;
  void *v14;
  void *v15;
  void *v16;
  unsigned int v17;
  size_t v18;
  void *v19;
  void *v20;
  void *v21;
  unsigned int v22;
  size_t v23;
  void *v24;
  void *v25;
  void *v26;
  unsigned int v27;
  size_t v28;
  void *v29;
  bool result;
  uint32_t *v31;
  int v32;
  sociallib::GLWTManager::Self *v33;
  uint32_t *v34;
  int v35;
  uint32_t *v36;
  char *v37;
  int v38;
  typedef size_t _g4_t_v39;
  typedef size_t _g4_t_v40;
  typedef size_t _g4_t_v41;
  typedef size_t _g4_t_v42;
  typedef size_t _g4_t_v43;
  typedef uint32_t *_g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef char *_g4_t_v46;
  typedef sociallib::GLWTManager::Self *_g4_t_v47;
  typedef char *_g4_t_v48;
  typedef char *_g4_t_v49;
  typedef char *_g4_t_v50;
  typedef char *_g4_t_v51;
  typedef char *_g4_t_v52;
  typedef char *_g4_t_v53;
  typedef uint32_t *_g4_t_v54;
  typedef uint32_t _g4_t_v55[9];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v39)) > _g4_s0 ? (0u + sizeof(_g4_t_v39)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v40)) > _g4_s1 ? (0u + sizeof(_g4_t_v40)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v41)) > _g4_s2 ? (0u + sizeof(_g4_t_v41)) : _g4_s2,
    _g4_s4 = (0u + sizeof(_g4_t_v42)) > _g4_s3 ? (0u + sizeof(_g4_t_v42)) : _g4_s3,
    _g4_s5 = (0u + sizeof(_g4_t_v43)) > _g4_s4 ? (0u + sizeof(_g4_t_v43)) : _g4_s4,
    _g4_s6 = (8u + sizeof(_g4_t_v44)) > _g4_s5 ? (8u + sizeof(_g4_t_v44)) : _g4_s5,
    _g4_s7 = (12u + sizeof(_g4_t_v45)) > _g4_s6 ? (12u + sizeof(_g4_t_v45)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v46)) > _g4_s7 ? (28u + sizeof(_g4_t_v46)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v47)) > _g4_s8 ? (28u + sizeof(_g4_t_v47)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v48)) > _g4_s9 ? (32u + sizeof(_g4_t_v48)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v49)) > _g4_s10 ? (32u + sizeof(_g4_t_v49)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v50)) > _g4_s11 ? (32u + sizeof(_g4_t_v50)) : _g4_s11,
    _g4_s13 = (32u + sizeof(_g4_t_v51)) > _g4_s12 ? (32u + sizeof(_g4_t_v51)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v52)) > _g4_s13 ? (32u + sizeof(_g4_t_v52)) : _g4_s13,
    _g4_s15 = (36u + sizeof(_g4_t_v53)) > _g4_s14 ? (36u + sizeof(_g4_t_v53)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v54)) > _g4_s15 ? (44u + sizeof(_g4_t_v54)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v55)) > _g4_s16 ? (56u + sizeof(_g4_t_v55)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 0u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 0u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 0u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 0u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 0u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 8u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 12u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 28u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 32u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 32u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 32u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 32u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 36u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 44u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 56u);

  sociallib::ClientSNSInterface::checkGlotInitAndTrackFacebook();
  v1 = (char *)self + 28;
  sociallib::ClientSNSInterface::updateAllSNSWrappers(self);
  for ( i = *((char **)self + 7); v1 != i; i = *(char **)i )
  {
    while ( 1 )
    {
      v3 = *((uint32_t *)i + 2);
      if ( v3 == 0 )
        break;
      if ( *(uint8_t *)(v3 + 20) == 0 )
        goto LABEL_37;
      v4 = *(uint32_t *)(v3 + 4);
      if ( v4 != 2 && v4 != 0 && v4 != 4 )
        break;
      v53 = *(char **)i;
      v46 = i;
      sub_1901940(i);
      opDelete(v46);
      sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), v3);
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(v3 + 180));
      v5 = *(void **)(v3 + 172);
      v6 = *(void **)(v3 + 168);
      if ( v5 != v6 )
      {
        v7 = v3;
        v48 = v1;
        v8 = *(uint32_t *)(v3 + 168);
        v9 = v5;
        do
        {
          g4_std::string::Destroy(v8 + 36);
          g4_std::string::Destroy(v8 + 32);
          g4_std::string::Destroy(v8 + 28);
          g4_std::string::Destroy(v8 + 24);
          g4_std::string::Destroy(v8 + 16);
          g4_std::string::Destroy(v8 + 12);
          g4_std::string::Destroy(v8 + 8);
          g4_std::string::Destroy(v8 + 4);
          v39 = v8;
          v8 += 52;
          g4_std::string::Destroy(v39);
        }
        while ( v9 != (void *)v8 );
        v3 = v7;
        v1 = v48;
        v6 = *(void **)(v7 + 168);
      }
      if ( v6 != nullptr )
        opDelete(v6);
      v10 = *(void **)(v3 + 160);
      v11 = *(void **)(v3 + 156);
      if ( v10 != v11 )
      {
        v12 = v3;
        v49 = v1;
        v13 = *(uint32_t *)(v3 + 156);
        v14 = v10;
        do
        {
          g4_std::string::Destroy(v13 + 8);
          g4_std::string::Destroy(v13 + 4);
          v40 = v13;
          v13 += 12;
          g4_std::string::Destroy(v40);
        }
        while ( v14 != (void *)v13 );
        v3 = v12;
        v1 = v49;
        v11 = *(void **)(v12 + 156);
      }
      if ( v11 != nullptr )
        opDelete(v11);
      v15 = *(void **)(v3 + 148);
      v16 = *(void **)(v3 + 144);
      if ( v15 != v16 )
      {
        v17 = v3;
        v50 = v1;
        v18 = *(uint32_t *)(v3 + 144);
        v19 = v15;
        do
        {
          g4_std::string::Destroy(v18 + 32);
          g4_std::string::Destroy(v18 + 28);
          g4_std::string::Destroy(v18 + 24);
          g4_std::string::Destroy(v18 + 20);
          g4_std::string::Destroy(v18 + 4);
          v41 = v18;
          v18 += 36;
          g4_std::string::Destroy(v41);
        }
        while ( v19 != (void *)v18 );
        v3 = v17;
        v1 = v50;
        v16 = *(void **)(v17 + 144);
      }
      if ( v16 != nullptr )
        opDelete(v16);
      v20 = *(void **)(v3 + 136);
      v21 = *(void **)(v3 + 132);
      if ( v20 != v21 )
      {
        v22 = v3;
        v51 = v1;
        v23 = *(uint32_t *)(v3 + 132);
        v24 = v20;
        do
        {
          g4_std::string::Destroy(v23 + 56);
          g4_std::string::Destroy(v23 + 52);
          g4_std::string::Destroy(v23 + 48);
          g4_std::string::Destroy(v23 + 44);
          g4_std::string::Destroy(v23 + 40);
          g4_std::string::Destroy(v23 + 36);
          g4_std::string::Destroy(v23 + 32);
          g4_std::string::Destroy(v23 + 28);
          g4_std::string::Destroy(v23 + 24);
          g4_std::string::Destroy(v23 + 20);
          g4_std::string::Destroy(v23 + 8);
          g4_std::string::Destroy(v23 + 4);
          v42 = v23;
          v23 += 68;
          g4_std::string::Destroy(v42);
        }
        while ( v24 != (void *)v23 );
        v3 = v22;
        v1 = v51;
        v21 = *(void **)(v22 + 132);
      }
      if ( v21 != nullptr )
        opDelete(v21);
      g4_std::Rb_tree_string_pair_string_const_586eb0::M_erase(
        v3 + 100,
        *(void **)(v3 + 108));
      std::_Rb_tree<std::string,std::pair<std::string const,std::string>,std::_Select1st<std::pair<std::string const,std::string>>,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>>::_M_erase(
        v3 + 76,
        *(void **)(v3 + 84));
      v25 = *(void **)(v3 + 68);
      v26 = *(void **)(v3 + 64);
      if ( v25 != v26 )
      {
        v27 = v3;
        v52 = v1;
        v28 = *(uint32_t *)(v3 + 64);
        v29 = v25;
        do
        {
          v43 = v28;
          v28 += 4;
          g4_std::string::Destroy(v43);
        }
        while ( v29 != (void *)v28 );
        v3 = v27;
        v1 = v52;
        v26 = *(void **)(v27 + 64);
      }
      if ( v26 != nullptr )
        opDelete(v26);
      g4_std::string::Destroy(v3 + 60);
      sociallib::CDynamicMemoryStream::Destroy((sociallib::CDynamicMemoryStream::Self *)(v3 + 36));
      g4_std::string::Destroy(v3 + 24);
      opDelete((void *)v3);
      i = v53;
      if ( v1 == v53 )
        goto LABEL_37;
    }
  }
LABEL_37:
  result = false;
  if ( *((char **)self + 7) != v1 && v1 != i )
  {
    v31 = *((uint32_t **)i + 2);
    v32 = v31[1];
    if ( v32 == 4 || (result = v32 == 2) )
    {
      sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v31));
      return true;
    }
    else if ( v32 == 0 )
    {
      v33 = (sociallib::GLWTManager::Self *)sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance;
      if ( sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance == 0 )
      {
        v47 = (sociallib::GLWTManager::Self *)opNew(0x58u);
        sociallib::GLWTManager::Construct(v47);
        v33 = v47;
        sociallib::CSingleton<sociallib::GLWTManager::Self>::m_instance = v47;
      }
      result = false;
      if ( *((uint8_t *)v33 + 1) == 0 )
      {
        v31[1] = 1;
        sociallib::SocialLibLogRequest((sociallib::Self *)((char *)&dword_0 + 3), (unsigned int)(uintptr_t)(v31));
        v34 = *((uint32_t **)self + 3);
        v35 = v31[4];
        v36 = (uint32_t *)((char *)self + 8);
        if ( v34 == nullptr )
          goto LABEL_56;
        do
        {
          while ( v35 <= v34[4] )
          {
            v36 = v34;
            v34 = (uint32_t *)v34[2];
            if ( v34 == nullptr )
              goto LABEL_54;
          }
          v34 = (uint32_t *)v34[3];
        }
        while ( v34 != nullptr );
LABEL_54:
        if ( v36 == (uint32_t *)((char *)self + 8) || v35 < v36[4] )
        {
LABEL_56:
          v55[0] = v31[4];
          v44 = v36;
          v55[1] = 0;
          v45 = v55;
          g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v54);
          v36 = v54;
        }
        v37 = (char *)v31[7];
        v38 = v36[5];
        if ( ((uint8_t)(uintptr_t)(v37) & 1) != 0 )
          v37 = *(char **)&v37[*(uint32_t *)(v38 + v31[8]) - 1];
        ((void (*)(int, uint32_t *, uint32_t *, uint32_t *))v37)(v31[8] + v38, v31, v44, v45);
        return false;
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::isLoggedIn  (binary VA: 0x1412c90)
// Original: sociallib::ClientSNSInterface::isLoggedIn
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::isLoggedIn(int a1, int a2)
{
  sociallib::GLSocialLib_ConnectionChecker::Self *v2;
  char isInternetConnectionPresent; // bp
  char isSnsInitialized;
  int v5;
  uint32_t *v7;
  uint32_t *v8;
  typedef int _g4_t_v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef bool _g4_t_isSnsSupported;
  typedef uint32_t *_g4_t_v13;
  typedef uint32_t _g4_t_v14[5];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v9)) > _g4_s0 ? (4u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v10)) > _g4_s1 ? (8u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v11)) > _g4_s2 ? (12u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (27u + sizeof(_g4_t_isSnsSupported)) > _g4_s3 ? (27u + sizeof(_g4_t_isSnsSupported)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v13)) > _g4_s4 ? (28u + sizeof(_g4_t_v13)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v14)) > _g4_s5 ? (40u + sizeof(_g4_t_v14)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 4u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_isSnsSupported &isSnsSupported = *reinterpret_cast<_g4_t_isSnsSupported *>(_g4_sf + 27u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 40u);

  v2 = (sociallib::GLSocialLib_ConnectionChecker::Self *)dword_20D3E30;
  if ( dword_20D3E30 == 0 )
  {
    v2 = (sociallib::GLSocialLib_ConnectionChecker::Self *)opNew(1u);
    dword_20D3E30 = (int)(uintptr_t)(v2);
  }
  isInternetConnectionPresent = sociallib::GLSocialLib_ConnectionChecker::isInternetConnectionPresent(v2);
  isSnsSupported = sociallib::ClientSNSInterface::isSnsSupported(a1, a2);
  isSnsInitialized = sociallib::ClientSNSInterface::isSnsInitialized(a1, a2);
  v5 = 0;
  if ( isInternetConnectionPresent != 0 && isSnsSupported && isSnsInitialized != 0 )
  {
    v7 = *(uint32_t **)(a1 + 12);
    v8 = (uint32_t *)(a1 + 8);
    if ( v7 == nullptr )
      goto LABEL_14;
    do
    {
      while ( a2 <= v7[4] )
      {
        v8 = v7;
        v7 = (uint32_t *)v7[2];
        if ( v7 == nullptr )
          goto LABEL_12;
      }
      v7 = (uint32_t *)v7[3];
    }
    while ( v7 != nullptr );
LABEL_12:
    if ( v8 == (uint32_t *)(a1 + 8) || a2 < v8[4] )
    {
LABEL_14:
      v10 = v8;
      v14[0] = a2;
      v14[1] = 0;
      v11 = v14;
      v9 = a1 + 4;
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v13);
      v8 = v13;
    }
    return G4_VCALL<int>(v8[5], 212, v9, v10, v11);
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::GetAccessToken  (binary VA: 0x1412db0)
// Original: sociallib::ClientSNSInterface::GetAccessToken
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::GetAccessToken(int a1, int a2, int a3)
{
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v6;
  typedef uint8_t _g4_t_v7[5];
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v7)) > _g4_s1 ? (23u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 23u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  if ( (uint8_t)sociallib::ClientSNSInterface::isSnsInitialized(a2, a3) != 0
    && (uint8_t)sociallib::ClientSNSInterface::isLoggedIn(a2, a3) != 0 )
  {
    v4 = *(uint32_t **)(a2 + 12);
    v5 = (uint32_t *)(a2 + 8);
    if ( v4 == nullptr )
      goto LABEL_13;
    do
    {
      if ( a3 <= v4[4] )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
      }
      else
      {
        v4 = (uint32_t *)v4[3];
      }
    }
    while ( v4 != nullptr );
    if ( v5 == (uint32_t *)(a2 + 8) || a3 < v5[4] )
    {
LABEL_13:
      *(uint32_t *)&v7[1] = a3;
      v8 = 0;
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v6);
      v5 = v6;
    }
    (*(void (**)(int))(*(uint32_t *)v5[5] + 228))(a1);
  }
  else
  {
    g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::GetSecret  (binary VA: 0x1412eb0)
// Original: sociallib::ClientSNSInterface::GetSecret
// ----------------------------------------------------------------------------
int sociallib::ClientSNSInterface::GetSecret(int a1, int a2, int a3)
{
  uint32_t *v4;
  uint32_t *v5;
  typedef uint32_t *_g4_t_v6;
  typedef uint8_t _g4_t_v7[5];
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (23u + sizeof(_g4_t_v7)) > _g4_s1 ? (23u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 23u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);

  if ( (uint8_t)sociallib::ClientSNSInterface::isSnsInitialized(a2, a3) != 0
    && (uint8_t)sociallib::ClientSNSInterface::isLoggedIn(a2, a3) != 0 )
  {
    v4 = *(uint32_t **)(a2 + 12);
    v5 = (uint32_t *)(a2 + 8);
    if ( v4 == nullptr )
      goto LABEL_13;
    do
    {
      if ( a3 <= v4[4] )
      {
        v5 = v4;
        v4 = (uint32_t *)v4[2];
      }
      else
      {
        v4 = (uint32_t *)v4[3];
      }
    }
    while ( v4 != nullptr );
    if ( v5 == (uint32_t *)(a2 + 8) || a3 < v5[4] )
    {
LABEL_13:
      *(uint32_t *)&v7[1] = a3;
      v8 = 0;
      g4_std::Rb_tree_int_pair_int_const_socia_a5527f::M_insert_unique(&v6);
      v5 = v6;
    }
    (*(void (**)(int))(*(uint32_t *)v5[5] + 232))(a1);
  }
  else
  {
    g4_std::string::construct_from_cstr(a1, (char *)&unk_1B15112, (int)(uintptr_t)(v7));
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::getRequestStateCopy  (binary VA: 0x1412fb0)
// Original: sociallib::ClientSNSInterface::getRequestStateCopy
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::getRequestStateCopy(sociallib::ClientSNSInterface::Self *self, int a2)
{
  int *v2;
  int *v3;
  int *i;
  typedef uint8_t _g4_t_v6[60];
  typedef int _g4_t_v7[41];
  enum : size_t {
    _g4_s0 = 304u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (72u + sizeof(_g4_t_v7)) > _g4_s1 ? (72u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 72u);

  v2 = *(int **)(a2 + 28);
  v3 = (int *)(a2 + 28);
  for ( i = v2; i != v3 && *(uint8_t *)(i[2] + 20) != 0; i = (int *)*i )
    ;
  if ( v2 == v3 || i == v3 )
  {
    sociallib::SNSRequestState::Construct(v6, 1, 0, 0, 1, 1, 4);
    g4_std_compat::string_assign((int)(uintptr_t)(v7), "ClientSNSInterface ERROR: No requests to get!\n", 0x2Eu);
  }
  else
  {
    sociallib::SNSRequestState::Construct(
      (sociallib::SNSRequestState::Self *)v6,
      (const sociallib::SNSRequestState::Self *)i[2]);
  }
  sociallib::SNSRequestState::Construct(self, (const sociallib::SNSRequestState::Self *)v6);
  sociallib::SNSRequestState::Destroy((sociallib::SNSRequestState::Self *)v6);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveRequestAchievementData  (binary VA: 0x14130a0)
// Original: sociallib::ClientSNSInterface::retrieveRequestAchievementData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveRequestAchievementData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  int CurrentActiveRequestState;
  int v3;
  int v4;
  unsigned int v5;
  int v6;
  size_t v7;
  int v8;
  int v9;
  int v10;
  int v11;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef size_t _g4_t_v15;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v13)) > _g4_s0 ? (4u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v14)) > _g4_s1 ? (8u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v15)) > _g4_s2 ? (12u + sizeof(_g4_t_v15)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 8u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);

  CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(a2);
  v3 = CurrentActiveRequestState;
  if ( CurrentActiveRequestState == 0 )
  {
    *(uint32_t *)self = 0;
    *((uint32_t *)self + 1) = 0;
    *((uint32_t *)self + 2) = 0;
    return self;
  }
  v4 = *(uint32_t *)(CurrentActiveRequestState + 136);
  v5 = *(uint32_t *)(CurrentActiveRequestState + 132);
  v13 = 0;
  v14 = 0;
  v6 = (int)(v4 - v5) >> 2;
  v15 = 0;
  if ( -252645135 * v6 != 0 )
  {
    if ( (unsigned int)(-252645135 * v6) > 0x3C3C3C3 )
      goto LABEL_13;
    v7 = 4 * v6;
    v8 = opNew(v7);
    v5 = *(uint32_t *)(v3 + 132);
    v4 = *(uint32_t *)(v3 + 136);
  }
  else
  {
    v7 = 0;
    v8 = 0;
  }
  v13 = v8;
  v15 = v8 + v7;
  v14 = g4_std::uninitialized_copy_false_id_253916::uninit_copy_gnu_cxx_normal_iterator_c1e796(
          v5,
          v4,
          v8);
  v9 = (v14 - v13) >> 2;
  *(uint32_t *)self = 0;
  v5 = -252645135 * v9;
  *((uint32_t *)self + 1) = 0;
  *((uint32_t *)self + 2) = 0;
  if ( -252645135 * v9 == 0 )
  {
    v10 = 0;
    v11 = 0;
    goto LABEL_8;
  }
  if ( v5 > 0x3C3C3C3 )
LABEL_13:
    sub_18FFEE0(v4, v5);
  v10 = 4 * v9;
  v11 = opNew(4 * v9);
LABEL_8:
  *(uint32_t *)self = v11;
  *((uint32_t *)self + 1) = v11;
  *((uint32_t *)self + 2) = v11 + v10;
  *((uint32_t *)self + 1) = g4_std::uninitialized_copy_false_id_253916::uninit_copy_gnu_cxx_normal_iterator_c1e796(
                            v13,
                            v14,
                            v11);
  g4_std::vector_sociallib_SNSAchievement_e77c94::Destroy((std::vector<sociallib::SNSAchievementData::Self> *)&v13);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::ClientSNSInterface::retrieveUserAchievementsData  (binary VA: 0x1413220)
// Original: sociallib::ClientSNSInterface::retrieveUserAchievementsData
// ----------------------------------------------------------------------------
sociallib::ClientSNSInterface::Self * sociallib::ClientSNSInterface::retrieveUserAchievementsData(sociallib::ClientSNSInterface::Self *self, sociallib::ClientSNSInterface::Self *a2)
{
  sociallib::ClientSNSInterface::retrieveRequestAchievementData(self, a2);
  return self;
}


