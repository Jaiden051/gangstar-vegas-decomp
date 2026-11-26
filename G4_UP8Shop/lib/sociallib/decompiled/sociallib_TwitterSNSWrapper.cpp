#include "Core/Utils/DecompTypes.h"
#include "sociallib_TwitterSNSWrapper.h"

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::isLoggedIn  (binary VA: 0x142b6a0)
// Original: sociallib::TwitterSNSWrapper::isLoggedIn
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::isLoggedIn()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::logout  (binary VA: 0x142b6b0)
// Original: sociallib::TwitterSNSWrapper::logout
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::logout(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::login  (binary VA: 0x142b6e0)
// Original: sociallib::TwitterSNSWrapper::login
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::login(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::likeApplication  (binary VA: 0x142b710)
// Original: sociallib::TwitterSNSWrapper::likeApplication
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::likeApplication(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::getAppId  (binary VA: 0x142b740)
// Original: sociallib::TwitterSNSWrapper::getAppId
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::getAppId(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::getAvatar  (binary VA: 0x142b770)
// Original: sociallib::TwitterSNSWrapper::getAvatar
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::getAvatar(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::getName  (binary VA: 0x142b7a0)
// Original: sociallib::TwitterSNSWrapper::getName
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::getName(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::getUid  (binary VA: 0x142b7d0)
// Original: sociallib::TwitterSNSWrapper::getUid
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::getUid(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::init  (binary VA: 0x142b800)
// Original: sociallib::TwitterSNSWrapper::init
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::init(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::getFriends  (binary VA: 0x142b830)
// Original: sociallib::TwitterSNSWrapper::getFriends
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::getFriends(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( *((uint32_t *)a2 + 2) == 3 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getIntParam(a2);
  }
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::postMessageToWallWithoutDialog  (binary VA: 0x142b890)
// Original: sociallib::TwitterSNSWrapper::postMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::postMessageToWallWithoutDialog(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int result;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v8, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v9, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v10, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v11, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v12, (int)(uintptr_t)(a2));
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  result = v8;
  v7 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v7); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::postMessageToWall  (binary VA: 0x142ba40)
// Original: sociallib::TwitterSNSWrapper::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::TwitterSNSWrapper::postMessageToWall(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  int result;
  void *v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v8, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v9, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v10, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v11, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v12, (int)(uintptr_t)(a2));
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v10 - 12);
  if ( (uint32_t *)(v10 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  result = v8;
  v7 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v7); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::getUserNames  (binary VA: 0x142bbf0)
// Original: sociallib::TwitterSNSWrapper::getUserNames
// ----------------------------------------------------------------------------
void sociallib::TwitterSNSWrapper::getUserNames(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  typedef void *_g4_t_v7;
  typedef uint8_t *_g4_t_v8;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v7)) > _g4_s0 ? (4u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v8)) > _g4_s1 ? (8u + sizeof(_g4_t_v8)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 4u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 8u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v7, (int)(uintptr_t)(a2));
  if ( (unsigned int)(v8 - (uint8_t *)v7) <= 0x193 )
  {
    sociallib::SNSWrapperBase::requestNotSupported(self, a2);
    v2 = (uint32_t *)(v8);
    v3 = (uint32_t *)(v7);
    if ( v8 == v7 )
      goto LABEL_6;
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    goto LABEL_5;
  }
  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  g4_std_compat::string_assign(
    (int)(uintptr_t)(a2) + 60,
    "TwitterSNSWrapper ERROR: All user data requests on Twitter are capped to 100, so even for getUserNames you will have"
    " to handle this.",
    0x84u);
  v5 = (uint32_t *)(v8);
  v3 = (uint32_t *)(v7);
  if ( v8 != v7 )
  {
    do
    {
      v6 = (uint32_t *)(*v3 - 12);
      if ( v6 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v6);
      ++v3;
    }
    while ( v5 != v3 );
LABEL_5:
    v3 = (uint32_t *)(v7);
  }
LABEL_6:
  if ( v3 != nullptr )
    opDelete(v3);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::getUserData  (binary VA: 0x142bd30)
// Original: sociallib::TwitterSNSWrapper::getUserData
// ----------------------------------------------------------------------------
void sociallib::TwitterSNSWrapper::getUserData(sociallib::TwitterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  typedef void *_g4_t_v5;
  typedef uint32_t *_g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v6)) > _g4_s1 ? (8u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 8u);

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v5, (int)(uintptr_t)(a2));
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
  v2 = v6;
  v3 = (uint32_t *)(v5);
  if ( v6 != v5 )
  {
    do
    {
      v4 = (uint32_t *)(*v3 - 12);
      if ( v4 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v3 - 4), 0xFFFFFFFF) <= 0 )
        g4_std::string::Rep::M_destroy(v4);
      ++v3;
    }
    while ( v2 != v3 );
    v3 = (uint32_t *)(v5);
  }
  if ( v3 != nullptr )
    opDelete(v3);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::Destroy  (binary VA: 0x142bde0)
// Original: sociallib::TwitterSNSWrapper::~TwitterSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::TwitterSNSWrapper::Destroy(sociallib::TwitterSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095808);
  sociallib::SNSWrapperBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::TwitterSNSWrapper::Destroy_ea142be10  (binary VA: 0x142be10)
// Original: sociallib::TwitterSNSWrapper::~TwitterSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::TwitterSNSWrapper::Destroy_ea142be10(sociallib::TwitterSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095808);
  sociallib::SNSWrapperBase::Destroy(self);
  opDelete(self);
}


