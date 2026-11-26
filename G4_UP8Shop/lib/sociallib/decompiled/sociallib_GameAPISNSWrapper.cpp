#include "Core/Utils/DecompTypes.h"
#include "sociallib_GameAPISNSWrapper.h"

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::GetSecret  (binary VA: 0x1419500)
// Original: sociallib::GameAPISNSWrapper::GetSecret
// ----------------------------------------------------------------------------
sociallib::GameAPISNSWrapper::Self * sociallib::GameAPISNSWrapper::GetSecret(sociallib::GameAPISNSWrapper::Self *self)
{
  GameAPIAndroidGLSocialLib_GetAccessToken();
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::GetAccessToken  (binary VA: 0x1419540)
// Original: sociallib::GameAPISNSWrapper::GetAccessToken
// ----------------------------------------------------------------------------
sociallib::GameAPISNSWrapper::Self * sociallib::GameAPISNSWrapper::GetAccessToken(sociallib::GameAPISNSWrapper::Self *self)
{
  GameAPIAndroidGLSocialLib_GetAccessToken();
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::showAllLeadearboards  (binary VA: 0x1419580)
// Original: sociallib::GameAPISNSWrapper::showAllLeadearboards
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::showAllLeadearboards(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return GameAPIAndroidGLSocialLib_showAllLeadearBoards();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::resetAchievements  (binary VA: 0x14195e0)
// Original: sociallib::GameAPISNSWrapper::resetAchievements
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::resetAchievements(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return GameAPIAndroidGLSocialLib_resetAchievements();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::showAchievements  (binary VA: 0x1419640)
// Original: sociallib::GameAPISNSWrapper::showAchievements
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::showAchievements(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return GameAPIAndroidGLSocialLib_showAchievements();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getApplicationDetails  (binary VA: 0x14196a0)
// Original: sociallib::GameAPISNSWrapper::getApplicationDetails
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::getApplicationDetails(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::postMessageToFriendsWallWithoutDialog  (binary VA: 0x14196d0)
// Original: sociallib::GameAPISNSWrapper::postMessageToFriendsWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::postMessageToFriendsWallWithoutDialog(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::postReviewApplication  (binary VA: 0x1419700)
// Original: sociallib::GameAPISNSWrapper::postReviewApplication
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::postReviewApplication(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::likeApplicationObject  (binary VA: 0x1419730)
// Original: sociallib::GameAPISNSWrapper::likeApplicationObject
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::likeApplicationObject(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::likeApplication  (binary VA: 0x1419760)
// Original: sociallib::GameAPISNSWrapper::likeApplication
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::likeApplication(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getAppId  (binary VA: 0x1419790)
// Original: sociallib::GameAPISNSWrapper::getAppId
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::getAppId(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getUserNames  (binary VA: 0x14197c0)
// Original: sociallib::GameAPISNSWrapper::getUserNames
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::getUserNames(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::isLoggedIn  (binary VA: 0x14197f0)
// Original: sociallib::GameAPISNSWrapper::isLoggedIn
// ----------------------------------------------------------------------------
bool sociallib::GameAPISNSWrapper::isLoggedIn()
{
  return GameAPIAndroidGLSocialLib_isLoggedIn() != 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::logout  (binary VA: 0x1419810)
// Original: sociallib::GameAPISNSWrapper::logout
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::logout()
{
  return GameAPIAndroidGLSocialLib_logout();
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::login  (binary VA: 0x1419830)
// Original: sociallib::GameAPISNSWrapper::login
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::login(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  *((uint8_t *)a2 + 204) = 1;
  return GameAPIAndroidGLSocialLib_login();
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getAvatar  (binary VA: 0x1419860)
// Original: sociallib::GameAPISNSWrapper::getAvatar
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::getAvatar(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return GameAPIAndroidGLSocialLib_GetPlayerAvatar();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getName  (binary VA: 0x14198c0)
// Original: sociallib::GameAPISNSWrapper::getName
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::getName(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return GameAPIAndroidGLSocialLib_GetPlayerInfo();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getUid  (binary VA: 0x1419920)
// Original: sociallib::GameAPISNSWrapper::getUid
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::getUid(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return GameAPIAndroidGLSocialLib_GetPlayerID();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::init  (binary VA: 0x1419980)
// Original: sociallib::GameAPISNSWrapper::init
// ----------------------------------------------------------------------------
void * sociallib::GameAPISNSWrapper::init()
{
  sociallib::ClientSNSInterface::Self *v0;

  GameAPIAndroidGLSocialLib_init();
  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)(v0);
  }
  return sociallib::ClientSNSInterface::setIsInitializedTrue((int)(uintptr_t)(v0), 13);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getFriendsData  (binary VA: 0x14199f0)
// Original: sociallib::GameAPISNSWrapper::getFriendsData
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::getFriendsData(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int IntParam;
  int v3;
  int v4;
  int v5;
  int v6;

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  IntParam = sociallib::SNSRequestState::getIntParam(a2);
  sociallib::SNSRequestState::getParamType(a2);
  v3 = sociallib::SNSRequestState::getIntParam(a2);
  sociallib::SNSRequestState::getParamType(a2);
  v4 = sociallib::SNSRequestState::getIntParam(a2);
  v5 = v4 * v3;
  v6 = 0;
  if ( v4 != 0 )
    v6 = v5;
  return GameAPIAndroidGLSocialLib_getFriendsData(IntParam, v6, v4);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::onResume  (binary VA: 0x1419ab0)
// Original: sociallib::GameAPISNSWrapper::onResume
// ----------------------------------------------------------------------------
char sociallib::GameAPISNSWrapper::onResume()
{
  sociallib::ClientSNSInterface::Self *v0;
  int CurrentActiveRequestState;
  sociallib::ClientSNSInterface::Self *v2;
  int v3;

  v0 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v0 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v0);
    dword_20D2420 = (int)(uintptr_t)(v0);
  }
  LOBYTE(CurrentActiveRequestState) = sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(v0, 4, 18);
  if ( (uint8_t)CurrentActiveRequestState != 0 )
  {
    v2 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
    if ( dword_20D2420 == 0 )
    {
      v2 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
      sociallib::ClientSNSInterface::Construct(v2);
      dword_20D2420 = (int)(uintptr_t)(v2);
    }
    CurrentActiveRequestState = sociallib::ClientSNSInterface::getCurrentActiveRequestState(v2);
    v3 = CurrentActiveRequestState;
    if ( CurrentActiveRequestState != 0 && *(uint32_t *)(CurrentActiveRequestState + 4) != 2 )
    {
      LOBYTE(CurrentActiveRequestState) = (uint8_t)(uintptr_t)(g4_std_compat::string_assign(
                                            CurrentActiveRequestState + 60,
                                            "Facebook iOS SNS ERROR: User bypassed login with multi-tasking.\n",
                                            0x40u));
      *(uint32_t *)(v3 + 12) = 1;
      *(uint32_t *)(v3 + 4) = 4;
    }
  }
  return CurrentActiveRequestState;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getUserData  (binary VA: 0x1419b90)
// Original: sociallib::GameAPISNSWrapper::getUserData
// ----------------------------------------------------------------------------
void sociallib::GameAPISNSWrapper::getUserData(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  unsigned int v3;
  unsigned int v4;
  void *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef uint8_t _g4_t_v9[7];
  typedef void *_g4_t_v10;
  typedef uint8_t *_g4_t_v11;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (13u + sizeof(_g4_t_v9)) > _g4_s0 ? (13u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (20u + sizeof(_g4_t_v10)) > _g4_s1 ? (20u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v11)) > _g4_s2 ? (24u + sizeof(_g4_t_v11)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 13u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);

  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v10);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9[3]), (char *)&unk_1B15112, (int)(uintptr_t)(v9));
    v2 = (char *)v10;
    if ( (unsigned int)(v11 - (uint8_t *)v10) >> 2 != 0 )
    {
      v3 = 0;
      do
      {
        g4_std::string::append_str(&v9[3], &v2[4 * v3]);
        v2 = (char *)v10;
        v4 = (v11 - (uint8_t *)v10) >> 2;
        if ( v3 != v4 - 1 )
        {
          g4_std::string::append((int)(uintptr_t)(&v9[3]), ",", 1u);
          v2 = (char *)v10;
          v4 = (v11 - (uint8_t *)v10) >> 2;
        }
        ++v3;
      }
      while ( v3 < v4 );
    }
    GameAPIAndroidGLSocialLib_getUserData(*(const char **)&v9[3]);
    v5 = (void *)(*(uint32_t *)&v9[3] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v9[3] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v9[3] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (uint32_t *)(v11);
    v7 = (uint32_t *)(v10);
    if ( v11 != v10 )
    {
      do
      {
        v8 = (uint32_t *)(*v7 - 12);
        if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v7 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v8);
        ++v7;
      }
      while ( v6 != v7 );
      v7 = (uint32_t *)(v10);
    }
    if ( v7 != nullptr )
      opDelete(v7);
  }
  else
  {
    sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::sendGameRequestToFriends  (binary VA: 0x1419d30)
// Original: sociallib::GameAPISNSWrapper::sendGameRequestToFriends
// ----------------------------------------------------------------------------
void sociallib::GameAPISNSWrapper::sendGameRequestToFriends(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  int v3;
  char *v4;
  int v5;
  void *v6;
  void *v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;
  void *v11;
  void *v12;
  uint32_t *v13;
  uint32_t *v14;
  uint32_t *v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef void *_g4_t_v25;
  typedef uint8_t *_g4_t_v26;
  typedef void *_g4_t_v27;
  typedef uint8_t *_g4_t_v28;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v17)) > _g4_s1 ? (0u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v18)) > _g4_s2 ? (4u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (4u + sizeof(_g4_t_v19)) > _g4_s3 ? (4u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v20)) > _g4_s4 ? (16u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v22)) > _g4_s6 ? (28u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (32u + sizeof(_g4_t_v23)) > _g4_s7 ? (32u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (36u + sizeof(_g4_t_v24)) > _g4_s8 ? (36u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (40u + sizeof(_g4_t_v25)) > _g4_s9 ? (40u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v26)) > _g4_s10 ? (44u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v27)) > _g4_s11 ? (52u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v28)) > _g4_s12 ? (56u + sizeof(_g4_t_v28)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 4u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 36u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 40u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 44u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);

  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v25);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v21);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v22);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v27);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), (char *)&unk_1B15112, (int)(uintptr_t)(&v20));
    v2 = (char *)v25;
    v16 = (v26 - (uint8_t *)v25) >> 2;
    if ( v16 != 0 )
    {
      v3 = 0;
      v18 = ((v26 - (uint8_t *)v25) >> 2) - 1;
      while ( 1 )
      {
        g4_std::string::append_str(&v23, &v2[4 * v3]);
        if ( v3 != v18 )
          g4_std::string::append((int)(uintptr_t)(&v23), ",", 1u);
        if ( v16 == ++v3 )
          break;
        v2 = (char *)v25;
      }
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), (char *)&unk_1B15112, (int)(uintptr_t)(&v20) + 1);
    v4 = (char *)v27;
    v17 = (v28 - (uint8_t *)v27) >> 2;
    if ( v17 != 0 )
    {
      v5 = 0;
      v19 = ((v28 - (uint8_t *)v27) >> 2) - 1;
      while ( 1 )
      {
        g4_std::string::append_str(&v24, &v4[4 * v5]);
        if ( v5 != v19 )
          g4_std::string::append((int)(uintptr_t)(&v24), ",", 1u);
        if ( v17 == ++v5 )
          break;
        v4 = (char *)v27;
      }
    }
    *((uint8_t *)a2 + 204) = 1;
    GameAPIAndroidGLSocialLib_sendGameRequestToFriends(&v23, &v21, &v24);
    v6 = (void *)(v24 - 12);
    if ( (uint32_t *)(v24 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (void *)(v23 - 12);
    if ( (uint32_t *)(v23 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v7);
    }
    v8 = (uint32_t *)(v28);
    v9 = (uint32_t *)(v27);
    if ( v28 != v27 )
    {
      do
      {
        v10 = (uint32_t *)(*v9 - 12);
        if ( v10 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v9 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v10);
        ++v9;
      }
      while ( v8 != v9 );
      v9 = (uint32_t *)(v27);
    }
    if ( v9 != nullptr )
      opDelete(v9);
    v11 = (void *)(v22 - 12);
    if ( (uint32_t *)(v22 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v21 - 12);
    if ( (uint32_t *)(v21 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v21 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (uint32_t *)(v26);
    v14 = (uint32_t *)(v25);
    if ( v26 != v25 )
    {
      do
      {
        v15 = (uint32_t *)(*v14 - 12);
        if ( v15 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v14 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v15);
        ++v14;
      }
      while ( v13 != v14 );
      v14 = (uint32_t *)(v25);
    }
    if ( v14 != nullptr )
      opDelete(v14);
  }
  else
  {
    sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::getFriends  (binary VA: 0x141a0c0)
// Original: sociallib::GameAPISNSWrapper::getFriends
// ----------------------------------------------------------------------------
void sociallib::GameAPISNSWrapper::getFriends(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  unsigned int v3;
  unsigned int v4;
  void *v5;
  uint32_t *v6;
  uint32_t *v7;
  uint32_t *v8;
  typedef int _g4_t_IntParam;
  typedef uint8_t _g4_t_v10[7];
  typedef void *_g4_t_v11;
  typedef uint8_t *_g4_t_v12;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_IntParam)) > _g4_s0 ? (12u + sizeof(_g4_t_IntParam)) : _g4_s0,
    _g4_s2 = (29u + sizeof(_g4_t_v10)) > _g4_s1 ? (29u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v11)) > _g4_s2 ? (36u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v12)) > _g4_s3 ? (40u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_IntParam &IntParam = *reinterpret_cast<_g4_t_IntParam *>(_g4_sf + 12u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 29u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 36u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 40u);

  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    IntParam = sociallib::SNSRequestState::getIntParam(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v11);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v10[3]), (char *)&unk_1B15112, (int)(uintptr_t)(v10));
    v2 = (char *)v11;
    if ( (unsigned int)(v12 - (uint8_t *)v11) >> 2 != 0 )
    {
      v3 = 0;
      do
      {
        g4_std::string::append_str(&v10[3], &v2[4 * v3]);
        v2 = (char *)v11;
        v4 = (v12 - (uint8_t *)v11) >> 2;
        if ( v3 != v4 - 1 )
        {
          g4_std::string::append((int)(uintptr_t)(&v10[3]), ",", 1u);
          v2 = (char *)v11;
          v4 = (v12 - (uint8_t *)v11) >> 2;
        }
        ++v3;
      }
      while ( v3 < v4 );
    }
    GameAPIAndroidGLSocialLib_getFriends(IntParam);
    v5 = (void *)(*(uint32_t *)&v10[3] - 12);
    if ( (uint32_t *)(*(uint32_t *)&v10[3] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v10[3] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (uint32_t *)(v12);
    v7 = (uint32_t *)(v11);
    if ( v12 != v11 )
    {
      do
      {
        v8 = (uint32_t *)(*v7 - 12);
        if ( v8 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v7 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v8);
        ++v7;
      }
      while ( v6 != v7 );
      v7 = (uint32_t *)(v11);
    }
    if ( v7 != nullptr )
      opDelete(v7);
  }
  else
  {
    sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::postLeaderboardScore  (binary VA: 0x141a270)
// Original: sociallib::GameAPISNSWrapper::postLeaderboardScore
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::postLeaderboardScore(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int IntParam;
  int result;
  void *v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v5);
  sociallib::SNSRequestState::getParamType(a2);
  IntParam = sociallib::SNSRequestState::getIntParam(a2);
  GameAPIAndroidGLSocialLib_submitLeaderBoardScore(&v5, IntParam);
  result = v5;
  v4 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v4)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::gotAchievement  (binary VA: 0x141a340)
// Original: sociallib::GameAPISNSWrapper::gotAchievement
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::gotAchievement(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v4);
  GameAPIAndroidGLSocialLib_unlockAchievement(&v4);
  result = v4;
  v3 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::incrementAchievement  (binary VA: 0x141a3f0)
// Original: sociallib::GameAPISNSWrapper::incrementAchievement
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::incrementAchievement(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int IntParam;
  int result;
  void *v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v5)) > _g4_s0 ? (12u + sizeof(_g4_t_v5)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v5);
  sociallib::SNSRequestState::getParamType(a2);
  IntParam = sociallib::SNSRequestState::getIntParam(a2);
  GameAPIAndroidGLSocialLib_incrementAchievement(&v5, IntParam);
  result = v5;
  v4 = (void *)(v5 - 12);
  if ( (uint32_t *)(v5 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v4)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::showLeadearboardWithId  (binary VA: 0x141a4c0)
// Original: sociallib::GameAPISNSWrapper::showLeadearboardWithId
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::showLeadearboardWithId(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v4);
  GameAPIAndroidGLSocialLib_showLeadearBoard(&v4);
  result = v4;
  v3 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::postPhotoToWallWithoutDialog  (binary VA: 0x141a570)
// Original: sociallib::GameAPISNSWrapper::postPhotoToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::postPhotoToWallWithoutDialog(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  typedef int _g4_t_v4;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v4);
  GameAPIAndroidGLSocialLib_postPhotoToWall((char *)a2 + 60, &v4);
  result = v4;
  v3 = (void *)(v4 - 12);
  if ( (uint32_t *)(v4 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::postMessageToWall  (binary VA: 0x141a630)
// Original: sociallib::GameAPISNSWrapper::postMessageToWall
// ----------------------------------------------------------------------------
char * sociallib::GameAPISNSWrapper::postMessageToWall(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int ParamListSize;
  void *v3;
  char *v4;
  char *v5;
  char *v6;
  char *result;
  char *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  char *v17;
  char *v18;
  char *v19;
  char *v20;
  void *v21;
  void *v22;
  void *v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef char *_g4_t_v26;
  typedef char *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41[4];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (6u + sizeof(_g4_t_v24)) > _g4_s0 ? (6u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v25)) > _g4_s1 ? (28u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v26)) > _g4_s2 ? (32u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v27)) > _g4_s3 ? (36u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v28)) > _g4_s4 ? (40u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v29)) > _g4_s5 ? (44u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v30)) > _g4_s6 ? (48u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v31)) > _g4_s7 ? (52u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v32)) > _g4_s8 ? (56u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v33)) > _g4_s9 ? (60u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v34)) > _g4_s10 ? (64u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v35)) > _g4_s11 ? (68u + sizeof(_g4_t_v35)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v36)) > _g4_s12 ? (72u + sizeof(_g4_t_v36)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v37)) > _g4_s13 ? (76u + sizeof(_g4_t_v37)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v38)) > _g4_s14 ? (80u + sizeof(_g4_t_v38)) : _g4_s14,
    _g4_s16 = (84u + sizeof(_g4_t_v39)) > _g4_s15 ? (84u + sizeof(_g4_t_v39)) : _g4_s15,
    _g4_s17 = (88u + sizeof(_g4_t_v40)) > _g4_s16 ? (88u + sizeof(_g4_t_v40)) : _g4_s16,
    _g4_s18 = (92u + sizeof(_g4_t_v41)) > _g4_s17 ? (92u + sizeof(_g4_t_v41)) : _g4_s17
  };
  alignas(16) uint8_t _g4_sf[_g4_s18];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 6u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 36u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 40u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 44u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 48u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 52u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 56u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 60u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 64u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 68u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 72u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 76u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 80u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 84u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 88u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 92u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return (char *)sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  ParamListSize = sociallib::SNSRequestState::getParamListSize(a2);
  v25 = (char *)&dword_213B814;
  v26 = (char *)&dword_213B814;
  v27 = (char *)&dword_213B814;
  v28 = (char *)&dword_213B814;
  if ( ParamListSize == 4 )
  {
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v29);
    g4_std::string::assign_str(&v25, &v29);
    v21 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v21);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v30);
    g4_std::string::assign_str(&v26, &v30);
    v22 = (void *)(v30 - 12);
    if ( (uint32_t *)(v30 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v22);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v31);
    g4_std::string::assign_str(&v27, &v31);
    v23 = (void *)(v31 - 12);
    if ( (uint32_t *)(v31 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v23);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v32);
    g4_std::string::assign_str(&v28, &v32);
    v16 = (void *)(v32 - 12);
    if ( (uint32_t *)(v32 - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) > 0 )
    {
      goto LABEL_19;
    }
    goto LABEL_30;
  }
  if ( ParamListSize != 8 )
  {
    *((uint32_t *)a2 + 1) = 4;
    *((uint32_t *)a2 + 3) = 1;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v41), "ERROR: Call the function with the appropriate parameters for Game API\n", (int)(uintptr_t)(&v24));
    g4_std::string::assign_str((char *)a2 + 60, v41);
    v3 = (void *)(v41[0] - 12);
    if ( (uint32_t *)(v41[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = v28 - 12;
    if ( v28 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v28 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v4);
    v5 = v27 - 12;
    if ( v27 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v27 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v6 = v26 - 12;
    if ( v26 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v26 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v6);
    result = v25;
    v8 = v25 - 12;
    if ( v25 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v25 - 1, 0xFFFFFFFF) <= 0 )
      return (g4_std::string::Rep::M_destroy(v8), (char *)0);
    return result;
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v33);
  g4_std::string::assign_str(&v25, &v33);
  v9 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v34);
  g4_std::string::assign_str(&v26, &v34);
  v10 = (void *)(v34 - 12);
  if ( (uint32_t *)(v34 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v34 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v35);
  v11 = (void *)(v35 - 12);
  if ( (uint32_t *)(v35 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v36);
  v12 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v37);
  v13 = (void *)(v37 - 12);
  if ( (uint32_t *)(v37 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v38);
  g4_std::string::assign_str(&v27, &v38);
  v14 = (void *)(v38 - 12);
  if ( (uint32_t *)(v38 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v39);
  v15 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v40);
  g4_std::string::assign_str(&v28, &v40);
  v16 = (void *)(v40 - 12);
  if ( (uint32_t *)(v40 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_30:
    g4_std::string::Rep::M_destroy(v16);
  }
LABEL_19:
  GameAPIAndroidGLSocialLib_postToWall(v25, v26, v27, v28);
  v17 = v28 - 12;
  if ( v28 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v28 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v17);
  v18 = v27 - 12;
  if ( v27 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v27 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v18);
  v19 = v26 - 12;
  if ( v26 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v26 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v19);
  result = v25;
  v20 = v25 - 12;
  if ( v25 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v25 - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy(v20), (char *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::postMessageToFriendsWall  (binary VA: 0x141ad60)
// Original: sociallib::GameAPISNSWrapper::postMessageToFriendsWall
// ----------------------------------------------------------------------------
char * sociallib::GameAPISNSWrapper::postMessageToFriendsWall(sociallib::GameAPISNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int ParamListSize;
  void *v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *v8;
  char *result;
  char *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  void *v17;
  void *v18;
  void *v19;
  char *v20;
  char *v21;
  char *v22;
  char *v23;
  char *v24;
  char *v25;
  void *v26;
  void *v27;
  void *v28;
  void *v29;
  void *v30;
  typedef int _g4_t_v31;
  typedef char *_g4_t_v32;
  typedef char *_g4_t_v33;
  typedef char *_g4_t_v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef char *_g4_t_v37;
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
  typedef int _g4_t_v53[8];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (11u + sizeof(_g4_t_v31)) > _g4_s0 ? (11u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (40u + sizeof(_g4_t_v32)) > _g4_s1 ? (40u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (44u + sizeof(_g4_t_v33)) > _g4_s2 ? (44u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (48u + sizeof(_g4_t_v34)) > _g4_s3 ? (48u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (52u + sizeof(_g4_t_v35)) > _g4_s4 ? (52u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (56u + sizeof(_g4_t_v36)) > _g4_s5 ? (56u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (60u + sizeof(_g4_t_v37)) > _g4_s6 ? (60u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (64u + sizeof(_g4_t_v38)) > _g4_s7 ? (64u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (68u + sizeof(_g4_t_v39)) > _g4_s8 ? (68u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (72u + sizeof(_g4_t_v40)) > _g4_s9 ? (72u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (76u + sizeof(_g4_t_v41)) > _g4_s10 ? (76u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (80u + sizeof(_g4_t_v42)) > _g4_s11 ? (80u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (84u + sizeof(_g4_t_v43)) > _g4_s12 ? (84u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (88u + sizeof(_g4_t_v44)) > _g4_s13 ? (88u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v45)) > _g4_s14 ? (92u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v46)) > _g4_s15 ? (96u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v47)) > _g4_s16 ? (100u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (104u + sizeof(_g4_t_v48)) > _g4_s17 ? (104u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (108u + sizeof(_g4_t_v49)) > _g4_s18 ? (108u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (112u + sizeof(_g4_t_v50)) > _g4_s19 ? (112u + sizeof(_g4_t_v50)) : _g4_s19,
    _g4_s21 = (116u + sizeof(_g4_t_v51)) > _g4_s20 ? (116u + sizeof(_g4_t_v51)) : _g4_s20,
    _g4_s22 = (120u + sizeof(_g4_t_v52)) > _g4_s21 ? (120u + sizeof(_g4_t_v52)) : _g4_s21,
    _g4_s23 = (124u + sizeof(_g4_t_v53)) > _g4_s22 ? (124u + sizeof(_g4_t_v53)) : _g4_s22
  };
  alignas(16) uint8_t _g4_sf[_g4_s23];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 11u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 48u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 56u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 60u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 64u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 68u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 72u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 76u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 80u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 84u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 88u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 92u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 96u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 100u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 104u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 108u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 112u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 116u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 120u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 124u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return (char *)sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  ParamListSize = sociallib::SNSRequestState::getParamListSize(a2);
  v32 = (char *)&dword_213B814;
  v33 = (char *)&dword_213B814;
  v34 = (char *)&dword_213B814;
  v35 = (char *)&dword_213B814;
  v36 = (char *)&dword_213B814;
  v37 = (char *)&dword_213B814;
  if ( ParamListSize == 6 )
  {
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v38);
    g4_std::string::assign_str(&v32, &v38);
    v26 = (void *)(v38 - 12);
    if ( (uint32_t *)(v38 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v38 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v26);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v39);
    g4_std::string::assign_str(&v33, &v39);
    v27 = (void *)(v39 - 12);
    if ( (uint32_t *)(v39 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v27);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v40);
    g4_std::string::assign_str(&v34, &v40);
    v28 = (void *)(v40 - 12);
    if ( (uint32_t *)(v40 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v40 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v28);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v41);
    g4_std::string::assign_str(&v35, &v41);
    v29 = (void *)(v41 - 12);
    if ( (uint32_t *)(v41 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v41 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v29);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v42);
    g4_std::string::assign_str(&v36, &v42);
    v30 = (void *)(v42 - 12);
    if ( (uint32_t *)(v42 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v30);
    }
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v43);
    g4_std::string::assign_str(&v37, &v43);
    v19 = (void *)(v43 - 12);
    if ( (uint32_t *)(v43 - 12) == dword_213B808
      || __sync_fetch_and_add((volatile int32_t *)(v43 - 4), 0xFFFFFFFF) > 0 )
    {
      goto LABEL_22;
    }
    goto LABEL_37;
  }
  if ( ParamListSize != 8 )
  {
    *((uint32_t *)a2 + 1) = 4;
    *((uint32_t *)a2 + 3) = 1;
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v53), "ERROR: Call the function with the appropriate parameters for Game API\n", (int)(uintptr_t)(&v31));
    g4_std::string::assign_str((char *)a2 + 60, v53);
    v3 = (void *)(v53[0] - 12);
    if ( (uint32_t *)(v53[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v53[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = v37 - 12;
    if ( v37 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v37 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v4);
    v5 = v36 - 12;
    if ( v36 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v36 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v5);
    v6 = v35 - 12;
    if ( v35 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v35 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v6);
    v7 = v34 - 12;
    if ( v34 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v34 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v7);
    v8 = v33 - 12;
    if ( v33 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v33 - 1, 0xFFFFFFFF) <= 0 )
      g4_std::string::Rep::M_destroy(v8);
    result = v32;
    v10 = v32 - 12;
    if ( v32 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v32 - 1, 0xFFFFFFFF) <= 0 )
      return (g4_std::string::Rep::M_destroy(v10), (char *)0);
    return result;
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v44);
  g4_std::string::assign_str(&v32, &v44);
  v11 = (void *)(v44 - 12);
  if ( (uint32_t *)(v44 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v45);
  g4_std::string::assign_str(&v33, &v45);
  v12 = (void *)(v45 - 12);
  if ( (uint32_t *)(v45 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v46);
  g4_std::string::assign_str(&v34, &v46);
  v13 = (void *)(v46 - 12);
  if ( (uint32_t *)(v46 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v46 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v47);
  v14 = (void *)(v47 - 12);
  if ( (uint32_t *)(v47 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v47 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v48);
  v15 = (void *)(v48 - 12);
  if ( (uint32_t *)(v48 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v48 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v49);
  v16 = (void *)(v49 - 12);
  if ( (uint32_t *)(v49 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v49 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v50);
  g4_std::string::assign_str(&v35, &v50);
  v17 = (void *)(v50 - 12);
  if ( (uint32_t *)(v50 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v50 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v17);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v51);
  v18 = (void *)(v51 - 12);
  if ( (uint32_t *)(v51 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v51 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v18);
  }
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v52);
  g4_std::string::assign_str(&v36, &v52);
  v19 = (void *)(v52 - 12);
  if ( (uint32_t *)(v52 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v52 - 4), 0xFFFFFFFF) <= 0 )
  {
LABEL_37:
    g4_std::string::Rep::M_destroy(v19);
  }
LABEL_22:
  GameAPIAndroidGLSocialLib_postToFriendsWall(v32, v33, v34, v35, v36, v37);
  v20 = v37 - 12;
  if ( v37 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v37 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v20);
  v21 = v36 - 12;
  if ( v36 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v36 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v21);
  v22 = v35 - 12;
  if ( v35 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v35 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v22);
  v23 = v34 - 12;
  if ( v34 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v34 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v23);
  v24 = v33 - 12;
  if ( v33 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v33 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v24);
  result = v32;
  v25 = v32 - 12;
  if ( v32 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v32 - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy(v25), (char *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::showPlusOneButton  (binary VA: 0x141b6a0)
// Original: sociallib::GameAPISNSWrapper::showPlusOneButton
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::showPlusOneButton(int a1)
{
  return GameAPIAndroidGLSocialLib_showPlusOneButton(a1);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::showPlusOneButton  (binary VA: 0x141b6d0)
// Original: sociallib::GameAPISNSWrapper::showPlusOneButton
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::showPlusOneButton(int a1, int a2, int a3, int a4, int a5)
{
  return GameAPIAndroidGLSocialLib_showPlusOneButtonWithParams(a1, a2, a3, a4, a5);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::hidePlusOneButton  (binary VA: 0x141b720)
// Original: sociallib::GameAPISNSWrapper::hidePlusOneButton
// ----------------------------------------------------------------------------
int sociallib::GameAPISNSWrapper::hidePlusOneButton()
{
  return GameAPIAndroidGLSocialLib_hidePlusOneButton();
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::Destroy  (binary VA: 0x141b740)
// Original: sociallib::GameAPISNSWrapper::~GameAPISNSWrapper
// ----------------------------------------------------------------------------
void sociallib::GameAPISNSWrapper::Destroy(sociallib::GameAPISNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094F28);
  sociallib::SNSWrapperBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameAPISNSWrapper::Destroy_ea141b770  (binary VA: 0x141b770)
// Original: sociallib::GameAPISNSWrapper::~GameAPISNSWrapper
// ----------------------------------------------------------------------------
void sociallib::GameAPISNSWrapper::Destroy_ea141b770(sociallib::GameAPISNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2094F28);
  sociallib::SNSWrapperBase::Destroy(self);
  opDelete(self);
}


