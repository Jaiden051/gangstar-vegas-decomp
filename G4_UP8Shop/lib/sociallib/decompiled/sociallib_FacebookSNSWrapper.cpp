#include "Core/Utils/DecompTypes.h"
#include "sociallib_FacebookSNSWrapper.h"

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::handleOpenUrl  (binary VA: 0x1420d60)
// Original: sociallib::FacebookSNSWrapper::handleOpenUrl
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::handleOpenUrl()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::GetSecret  (binary VA: 0x1420d70)
// Original: sociallib::FacebookSNSWrapper::GetSecret
// ----------------------------------------------------------------------------
sociallib::FacebookSNSWrapper::Self * sociallib::FacebookSNSWrapper::GetSecret(sociallib::FacebookSNSWrapper::Self *self, int a2)
{
  (*(void (**)(sociallib::FacebookSNSWrapper::Self *))(*(uint32_t *)a2 + 228))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::SetApiVersion  (binary VA: 0x1420da0)
// Original: sociallib::FacebookSNSWrapper::SetApiVersion
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::SetApiVersion(int a1, int a2)
{
  *(uint32_t *)(a1 + 4) = a2;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::SetLocale  (binary VA: 0x1420db0)
// Original: sociallib::FacebookSNSWrapper::SetLocale
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::SetLocale(int a1, int a2)
{
  return (int)(uintptr_t)(g4_std::string::assign_str(a1 + 8, a2));
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getApplicationDetails  (binary VA: 0x1420de0)
// Original: sociallib::FacebookSNSWrapper::getApplicationDetails
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getApplicationDetails()
{
  return facebookAndroidGLSocialLib_getApp();
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::GetAccessToken  (binary VA: 0x1420e00)
// Original: sociallib::FacebookSNSWrapper::GetAccessToken
// ----------------------------------------------------------------------------
sociallib::FacebookSNSWrapper::Self * sociallib::FacebookSNSWrapper::GetAccessToken(sociallib::FacebookSNSWrapper::Self *self)
{
  facebookAndroidGLSocialLib_getAccessToken();
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::isLoggedIn  (binary VA: 0x1420e40)
// Original: sociallib::FacebookSNSWrapper::isLoggedIn
// ----------------------------------------------------------------------------
bool sociallib::FacebookSNSWrapper::isLoggedIn()
{
  return facebookAndroidGLSocialLib_isLoggedIn() != 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::logout  (binary VA: 0x1420e60)
// Original: sociallib::FacebookSNSWrapper::logout
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::logout()
{
  return facebookAndroidGLSocialLib_logout();
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::login  (binary VA: 0x1420e80)
// Original: sociallib::FacebookSNSWrapper::login
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::login(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  *((uint8_t *)a2 + 204) = 1;
  return facebookAndroidGLSocialLib_login();
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::postMessageToFriendsWallWithoutDialog  (binary VA: 0x1420eb0)
// Original: sociallib::FacebookSNSWrapper::postMessageToFriendsWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::postMessageToFriendsWallWithoutDialog(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::postMessageToFriendsWall  (binary VA: 0x1420ee0)
// Original: sociallib::FacebookSNSWrapper::postMessageToFriendsWall
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::postMessageToFriendsWall(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::postReviewApplication  (binary VA: 0x1420f10)
// Original: sociallib::FacebookSNSWrapper::postReviewApplication
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::postReviewApplication(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::likeApplicationObject  (binary VA: 0x1420f40)
// Original: sociallib::FacebookSNSWrapper::likeApplicationObject
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::likeApplicationObject(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::likeApplication  (binary VA: 0x1420f70)
// Original: sociallib::FacebookSNSWrapper::likeApplication
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::likeApplication(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getAppId  (binary VA: 0x1420fa0)
// Original: sociallib::FacebookSNSWrapper::getAppId
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getAppId()
{
  return facebookAndroidGLSocialLib_getAppId();
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getAvatar  (binary VA: 0x1420fc0)
// Original: sociallib::FacebookSNSWrapper::getAvatar
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getAvatar(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return facebookAndroidGLSocialLib_getPicture();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getName  (binary VA: 0x1421020)
// Original: sociallib::FacebookSNSWrapper::getName
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getName(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return facebookAndroidGLSocialLib_getMyInfo();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getUid  (binary VA: 0x1421080)
// Original: sociallib::FacebookSNSWrapper::getUid
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getUid(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return facebookAndroidGLSocialLib_getMyInfo();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getUserLocale  (binary VA: 0x14210e0)
// Original: sociallib::FacebookSNSWrapper::getUserLocale
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getUserLocale(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return facebookAndroidGLSocialLib_getUserLocale();
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::onResume  (binary VA: 0x1421140)
// Original: sociallib::FacebookSNSWrapper::onResume
// ----------------------------------------------------------------------------
char sociallib::FacebookSNSWrapper::onResume()
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
    if ( *(uint32_t *)(CurrentActiveRequestState + 4) != 2 )
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
// Function: sociallib::FacebookSNSWrapper::postMessageToWall  (binary VA: 0x1421220)
// Original: sociallib::FacebookSNSWrapper::postMessageToWall
// ----------------------------------------------------------------------------
char * sociallib::FacebookSNSWrapper::postMessageToWall(char **self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  char *v9;
  void *v10;
  char *v11;
  char *v12;
  char *v13;
  char *v14;
  char *result;
  char *v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef char *_g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef char *_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (3u + sizeof(_g4_t_v17)) > _g4_s0 ? (3u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v18)) > _g4_s1 ? (4u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v19)) > _g4_s2 ? (8u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v20)) > _g4_s3 ? (24u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v21)) > _g4_s4 ? (28u + sizeof(_g4_t_v21)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v22)) > _g4_s5 ? (32u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v24)) > _g4_s7 ? (40u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v25)) > _g4_s8 ? (44u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v26)) > _g4_s9 ? (48u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v27)) > _g4_s10 ? (52u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v28)) > _g4_s11 ? (56u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v29)) > _g4_s12 ? (60u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v30)) > _g4_s13 ? (64u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v31)) > _g4_s14 ? (68u + sizeof(_g4_t_v31)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v32)) > _g4_s15 ? (72u + sizeof(_g4_t_v32)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v33)) > _g4_s16 ? (76u + sizeof(_g4_t_v33)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 3u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 4u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 24u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 28u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 32u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 40u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 44u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 48u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 52u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 56u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 60u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 64u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 68u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 72u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 76u);

  if ( (*((uint8_t (**)(char **))*self + 53))(self) == 0 )
    return (char *)sociallib::SNSWrapperBase::notLoggedInError((sociallib::SNSWrapperBase::Self *)self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v20, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v21, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v22, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v23, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v24, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v25, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v26, (int)(uintptr_t)(a2));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), *(self + 2), (int)(uintptr_t)(&v17));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), v26, (int)(uintptr_t)(&v18));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), v24, (int)(uintptr_t)(&v18) + 1);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v30), v23, (int)(uintptr_t)(&v18) + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v31), v22, (int)(uintptr_t)(&v18) + 3);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v32), v21, (int)(uintptr_t)(&v19));
  g4_std::string::construct_from_cstr((int)(uintptr_t)(v33), v20, (int)(uintptr_t)(&v19) + 1);
  facebookAndroidGLSocialLib_postToWall(v33, &v32, &v31, &v30, &v29, &v28, &v27);
  v2 = (void *)(v33[0] - 12);
  if ( (uint32_t *)(v33[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v32 - 12);
  if ( (uint32_t *)(v32 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v31 - 12);
  if ( (uint32_t *)(v31 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v31 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v29 - 12);
  if ( (uint32_t *)(v29 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v28 - 12);
  if ( (uint32_t *)(v28 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  v9 = v26 - 12;
  if ( v26 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v26 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v9);
  v10 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = v24 - 12;
  if ( v24 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v24 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v11);
  v12 = v23 - 12;
  if ( v23 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v23 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v12);
  v13 = v22 - 12;
  if ( v22 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v13);
  v14 = v21 - 12;
  if ( v21 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v21 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v14);
  result = v20;
  v16 = v20 - 12;
  if ( v20 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v20 - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy(v16), (char *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::sendGameRequestToFriends  (binary VA: 0x1421710)
// Original: sociallib::FacebookSNSWrapper::sendGameRequestToFriends
// ----------------------------------------------------------------------------
void sociallib::FacebookSNSWrapper::sendGameRequestToFriends(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  int v3;
  void *v4;
  void *v5;
  void *v6;
  uint32_t *v7;
  uint32_t *v8;
  uint32_t *v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef void *_g4_t_v16;
  typedef uint8_t *_g4_t_v17;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v10)) > _g4_s0 ? (4u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (19u + sizeof(_g4_t_v12)) > _g4_s2 ? (19u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v13)) > _g4_s3 ? (24u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v15)) > _g4_s5 ? (32u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v16)) > _g4_s6 ? (36u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v17)) > _g4_s7 ? (40u + sizeof(_g4_t_v17)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 4u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 19u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 32u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 36u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 40u);

  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v16, (int)(uintptr_t)(a2));
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v13, (int)(uintptr_t)(a2));
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v14, (int)(uintptr_t)(a2));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v15), (char *)&unk_1B15112, (int)(uintptr_t)(&v12));
    v2 = (char *)v16;
    v10 = (v17 - (uint8_t *)v16) >> 2;
    if ( v10 != 0 )
    {
      v3 = 0;
      v11 = ((v17 - (uint8_t *)v16) >> 2) - 1;
      while ( 1 )
      {
        g4_std::string::append_str(&v15, &v2[4 * v3]);
        if ( v11 != v3 )
          g4_std::string::append((int)(uintptr_t)(&v15), ",", 1u);
        if ( v10 == ++v3 )
          break;
        v2 = (char *)v16;
      }
    }
    *((uint8_t *)a2 + 204) = 1;
    facebookAndroidGLSocialLib_sendGameRequestToFriends(&v15, &v13);
    v4 = (void *)(v15 - 12);
    if ( (uint32_t *)(v15 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v5);
    }
    v6 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v6);
    }
    v7 = (uint32_t *)(v17);
    v8 = (uint32_t *)(v16);
    if ( v17 != v16 )
    {
      do
      {
        v9 = (uint32_t *)(*v8 - 12);
        if ( v9 != dword_213B808 && __sync_fetch_and_add((volatile int32_t *)(*v8 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v9);
        ++v8;
      }
      while ( v7 != v8 );
      v8 = (uint32_t *)(v16);
    }
    if ( v8 != nullptr )
      opDelete(v8);
  }
  else
  {
    sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getUserNames  (binary VA: 0x1421970)
// Original: sociallib::FacebookSNSWrapper::getUserNames
// ----------------------------------------------------------------------------
void sociallib::FacebookSNSWrapper::getUserNames(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  void *v3;
  void *v4;
  char **v5;
  char **v6;
  char *v7;
  char **v8;
  char **i;
  char *s;
  size_t v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef char **_g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v15, (int)(uintptr_t)(a2));
    v2 = (char *)&dword_213B814;
    v13 = (int)(uintptr_t)(&dword_213B814);
    if ( ((char *)v16 - (char *)((uint8_t *)v15)) >> 2 != 0 )
    {
      sub_1939B80(&v13, (*(uint32_t *)(*(uint32_t *)v15 - 12) + 1) * (((char *)v16 - (char *)((uint8_t *)v15)) >> 2) + 1);
      v8 = (char **)v15;
      for ( i = v16; v8 != i; i = v16 )
      {
        s = *v8++;
        v11 = strlen(s);
        g4_std::string::append((int)(uintptr_t)(&v13), s, v11);
        if ( v8 == v16 )
          break;
        g4_std::string::append((int)(uintptr_t)(&v13), ",", 1u);
      }
      v2 = (char *)v13;
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), v2, (int)(uintptr_t)(&v12));
    facebookAndroidGLSocialLib_getUserNames(&v14);
    v3 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = v16;
    v6 = (char **)v15;
    if ( v16 != v15 )
    {
      do
      {
        v7 = *v6 - 12;
        if ( v7 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)*v6 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v7);
        ++v6;
      }
      while ( v5 != v6 );
      v6 = (char **)v15;
    }
    if ( v6 != nullptr )
      opDelete(v6);
  }
  else
  {
    sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getUserData  (binary VA: 0x1421b80)
// Original: sociallib::FacebookSNSWrapper::getUserData
// ----------------------------------------------------------------------------
void sociallib::FacebookSNSWrapper::getUserData(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  void *v3;
  void *v4;
  char **v5;
  char **v6;
  char *v7;
  char **v8;
  char **i;
  char *s;
  size_t v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef void *_g4_t_v15;
  typedef char **_g4_t_v16;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v14)) > _g4_s2 ? (16u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v15)) > _g4_s3 ? (20u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v16)) > _g4_s4 ? (24u + sizeof(_g4_t_v16)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 20u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 24u);

  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getStringArrayParam((sociallib::SNSRequestState::Self *)&v15, (int)(uintptr_t)(a2));
    v2 = (char *)&dword_213B814;
    v13 = (int)(uintptr_t)(&dword_213B814);
    if ( ((char *)v16 - (char *)((uint8_t *)v15)) >> 2 != 0 )
    {
      sub_1939B80(&v13, (*(uint32_t *)(*(uint32_t *)v15 - 12) + 1) * (((char *)v16 - (char *)((uint8_t *)v15)) >> 2) + 1);
      v8 = (char **)v15;
      for ( i = v16; v8 != i; i = v16 )
      {
        s = *v8++;
        v11 = strlen(s);
        g4_std::string::append((int)(uintptr_t)(&v13), s, v11);
        if ( v8 == v16 )
          break;
        g4_std::string::append((int)(uintptr_t)(&v13), ",", 1u);
      }
      v2 = (char *)v13;
    }
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), v2, (int)(uintptr_t)(&v12));
    facebookAndroidGLSocialLib_getUserData(&v14);
    v3 = (void *)(v14 - 12);
    if ( (uint32_t *)(v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v3);
    }
    v4 = (void *)(v13 - 12);
    if ( (uint32_t *)(v13 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
    v5 = v16;
    v6 = (char **)v15;
    if ( v16 != v15 )
    {
      do
      {
        v7 = *v6 - 12;
        if ( v7 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)*v6 - 1, 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v7);
        ++v6;
      }
      while ( v5 != v6 );
      v6 = (char **)v15;
    }
    if ( v6 != nullptr )
      opDelete(v6);
  }
  else
  {
    sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  }
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::GetApiVersion  (binary VA: 0x1421d90)
// Original: sociallib::FacebookSNSWrapper::GetApiVersion
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::GetApiVersion(sociallib::FacebookSNSWrapper::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::SetErrorForRequest  (binary VA: 0x1421da0)
// Original: sociallib::FacebookSNSWrapper::SetErrorForRequest
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::SetErrorForRequest(uint32_t *a1, int a2)
{
  int result;

  if ( a1 != nullptr )
  {
    g4_std::string::clear(a1 + 15, 0, *(uint32_t *)(a1[15] - 12), 0);
    result = (int)(uintptr_t)(g4_std::string::assign_str(a1 + 15, a2));
    a1[3] = 1;
    a1[1] = 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::SetPermissionError  (binary VA: 0x1421e20)
// Original: sociallib::FacebookSNSWrapper::SetPermissionError
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::SetPermissionError(uint32_t *a1, int a2, int a3)
{
  int result;

  a1[32] = a2;
  result = (int)(uintptr_t)(g4_std::string::assign_str(a1 + 15, a3));
  a1[3] = 12;
  a1[1] = 4;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::IsReadPermission  (binary VA: 0x1421e80)
// Original: sociallib::FacebookSNSWrapper::IsReadPermission
// ----------------------------------------------------------------------------
bool sociallib::FacebookSNSWrapper::IsReadPermission(int a1, int a2)
{
  return a2 != 2;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::initPermissionsMap  (binary VA: 0x1421e90)
// Original: sociallib::FacebookSNSWrapper::initPermissionsMap
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::initPermissionsMap()
{
  void *v0;
  void *v1;
  void *v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  void *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  void *v16;
  int result;
  void *v18;
  typedef uint8_t _g4_t_v19[8];
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef uint32_t _g4_t_v29[2];
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef uint32_t _g4_t_v32[2];
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef uint32_t _g4_t_v35[2];
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef uint32_t _g4_t_v38[2];
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef uint32_t _g4_t_v41[2];
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef uint32_t _g4_t_v44[2];
  typedef uint32_t _g4_t_v45[8];
  enum : size_t {
    _g4_s0 = 256u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v20)) > _g4_s1 ? (16u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v21)) > _g4_s2 ? (20u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v22)) > _g4_s3 ? (40u + sizeof(_g4_t_v22)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v23)) > _g4_s4 ? (44u + sizeof(_g4_t_v23)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v24)) > _g4_s5 ? (48u + sizeof(_g4_t_v24)) : _g4_s5,
    _g4_s7 = (52u + sizeof(_g4_t_v25)) > _g4_s6 ? (52u + sizeof(_g4_t_v25)) : _g4_s6,
    _g4_s8 = (56u + sizeof(_g4_t_v26)) > _g4_s7 ? (56u + sizeof(_g4_t_v26)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v27)) > _g4_s8 ? (60u + sizeof(_g4_t_v27)) : _g4_s8,
    _g4_s10 = (64u + sizeof(_g4_t_v28)) > _g4_s9 ? (64u + sizeof(_g4_t_v28)) : _g4_s9,
    _g4_s11 = (68u + sizeof(_g4_t_v29)) > _g4_s10 ? (68u + sizeof(_g4_t_v29)) : _g4_s10,
    _g4_s12 = (76u + sizeof(_g4_t_v30)) > _g4_s11 ? (76u + sizeof(_g4_t_v30)) : _g4_s11,
    _g4_s13 = (80u + sizeof(_g4_t_v31)) > _g4_s12 ? (80u + sizeof(_g4_t_v31)) : _g4_s12,
    _g4_s14 = (84u + sizeof(_g4_t_v32)) > _g4_s13 ? (84u + sizeof(_g4_t_v32)) : _g4_s13,
    _g4_s15 = (92u + sizeof(_g4_t_v33)) > _g4_s14 ? (92u + sizeof(_g4_t_v33)) : _g4_s14,
    _g4_s16 = (96u + sizeof(_g4_t_v34)) > _g4_s15 ? (96u + sizeof(_g4_t_v34)) : _g4_s15,
    _g4_s17 = (100u + sizeof(_g4_t_v35)) > _g4_s16 ? (100u + sizeof(_g4_t_v35)) : _g4_s16,
    _g4_s18 = (108u + sizeof(_g4_t_v36)) > _g4_s17 ? (108u + sizeof(_g4_t_v36)) : _g4_s17,
    _g4_s19 = (112u + sizeof(_g4_t_v37)) > _g4_s18 ? (112u + sizeof(_g4_t_v37)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v38)) > _g4_s19 ? (116u + sizeof(_g4_t_v38)) : _g4_s19,
    _g4_s21 = (124u + sizeof(_g4_t_v39)) > _g4_s20 ? (124u + sizeof(_g4_t_v39)) : _g4_s20,
    _g4_s22 = (128u + sizeof(_g4_t_v40)) > _g4_s21 ? (128u + sizeof(_g4_t_v40)) : _g4_s21,
    _g4_s23 = (132u + sizeof(_g4_t_v41)) > _g4_s22 ? (132u + sizeof(_g4_t_v41)) : _g4_s22,
    _g4_s24 = (140u + sizeof(_g4_t_v42)) > _g4_s23 ? (140u + sizeof(_g4_t_v42)) : _g4_s23,
    _g4_s25 = (144u + sizeof(_g4_t_v43)) > _g4_s24 ? (144u + sizeof(_g4_t_v43)) : _g4_s24,
    _g4_s26 = (148u + sizeof(_g4_t_v44)) > _g4_s25 ? (148u + sizeof(_g4_t_v44)) : _g4_s25,
    _g4_s27 = (156u + sizeof(_g4_t_v45)) > _g4_s26 ? (156u + sizeof(_g4_t_v45)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 40u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 52u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 56u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 60u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 64u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 68u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 80u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 84u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 92u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 96u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 100u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 108u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 112u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 116u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 124u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 128u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 132u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 144u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 148u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 156u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v22), "unknown_error", (int)(uintptr_t)(&v20));
  v28 = -1;
  g4_std::string::construct_copy(v29, &v22);
  v29[1] = v28;
  g4_std::string::construct_copy(&v30, v29);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(v19);
  v0 = (void *)(v30 - 12);
  if ( (uint32_t *)(v30 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v30 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v0);
  }
  v1 = (void *)(v29[0] - 12);
  if ( (uint32_t *)(v29[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v29[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v1);
  }
  v2 = (void *)(v22 - 12);
  if ( (uint32_t *)(v22 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v22 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v23), "no_permission_required", (int)(uintptr_t)(&v20) + 1);
  v31 = 0;
  g4_std::string::construct_copy(v32, &v23);
  v32[1] = v31;
  g4_std::string::construct_copy(&v33, v32);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(v19);
  v3 = (void *)(v33 - 12);
  if ( (uint32_t *)(v33 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v33 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v32[0] - 12);
  if ( (uint32_t *)(v32[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v32[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v24), "user_friends", (int)(uintptr_t)(&v20) + 2);
  v34 = 1;
  g4_std::string::construct_copy(v35, &v24);
  v35[1] = v34;
  g4_std::string::construct_copy(&v36, v35);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(v19);
  v6 = (void *)(v36 - 12);
  if ( (uint32_t *)(v36 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v36 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v35[0] - 12);
  if ( (uint32_t *)(v35[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v35[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v24 - 12);
  if ( (uint32_t *)(v24 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v24 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), "user_likes", (int)(uintptr_t)(&v20) + 3);
  v37 = 5;
  g4_std::string::construct_copy(v38, &v25);
  v38[1] = v37;
  g4_std::string::construct_copy(&v39, v38);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(v19);
  v9 = (void *)(v39 - 12);
  if ( (uint32_t *)(v39 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v39 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v9);
  }
  v10 = (void *)(v38[0] - 12);
  if ( (uint32_t *)(v38[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v38[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v10);
  }
  v11 = (void *)(v25 - 12);
  if ( (uint32_t *)(v25 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v11);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), "publish_actions", (int)(uintptr_t)(&v21));
  v40 = 2;
  g4_std::string::construct_copy(v41, &v26);
  v41[1] = v40;
  g4_std::string::construct_copy(&v42, v41);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(v19);
  v12 = (void *)(v42 - 12);
  if ( (uint32_t *)(v42 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v42 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v12);
  }
  v13 = (void *)(v41[0] - 12);
  if ( (uint32_t *)(v41[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v41[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v13);
  }
  v14 = (void *)(v26 - 12);
  if ( (uint32_t *)(v26 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v14);
  }
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), "user_games_activity", (int)(uintptr_t)(&v21) + 1);
  v43 = 7;
  g4_std::string::construct_copy(v44, &v27);
  v44[1] = v43;
  g4_std::string::construct_copy(v45, v44);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(v19);
  v15 = (void *)(v45[0] - 12);
  if ( (uint32_t *)(v45[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v45[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v15);
  }
  v16 = (void *)(v44[0] - 12);
  if ( (uint32_t *)(v44[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v44[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v16);
  }
  result = v27;
  v18 = (void *)(v27 - 12);
  if ( (uint32_t *)(v27 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v18)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::init  (binary VA: 0x1422580)
// Original: sociallib::FacebookSNSWrapper::init
// ----------------------------------------------------------------------------
void * sociallib::FacebookSNSWrapper::init(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  sociallib::ClientSNSInterface::Self *v2;
  void *result;

  sociallib::FacebookSNSWrapper::initPermissionsMap();
  *((uint32_t *)self + 1) = *((uint32_t *)a2 + 50);
  setFBWrapperAndroid(self);
  facebookAndroidGLSocialLib_init();
  v2 = (sociallib::ClientSNSInterface::Self *)dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v2 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v2);
    dword_20D2420 = (int)(uintptr_t)(v2);
  }
  result = sociallib::ClientSNSInterface::setIsInitializedTrue((int)(uintptr_t)(v2), 4);
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::GetPermissionsValue  (binary VA: 0x1422620)
// Original: sociallib::FacebookSNSWrapper::GetPermissionsValue
// ----------------------------------------------------------------------------
uint32_t * sociallib::FacebookSNSWrapper::GetPermissionsValue(int a1, int a2)
{
  uint32_t *v2;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  uint32_t *v6;
  void *v8;
  void *v9;
  typedef uint32_t *_g4_t_v10;
  typedef uint32_t *_g4_t_v11;
  typedef uint32_t *_g4_t_v12;
  typedef uint32_t _g4_t_v13[2];
  typedef int _g4_t_v14[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v11)) > _g4_s1 ? (8u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v12)) > _g4_s2 ? (12u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v13)) > _g4_s3 ? (20u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v14)) > _g4_s4 ? (28u + sizeof(_g4_t_v14)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 8u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 12u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 20u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 28u);

  v2 = *(uint32_t **)(a1 + 20);
  v3 = (uint32_t *)(a1 + 16);
  if ( v2 == nullptr )
    goto LABEL_14;
  v4 = (uint32_t *)(a1 + 16);
  v5 = *(uint32_t **)(a1 + 20);
  do
  {
    while ( a2 <= v5[4] )
    {
      v4 = v5;
      v5 = (uint32_t *)v5[2];
      if ( v5 == nullptr )
        goto LABEL_6;
    }
    v5 = (uint32_t *)v5[3];
  }
  while ( v5 != nullptr );
LABEL_6:
  v6 = (uint32_t *)(a1 + 16);
  if ( v3 != v4 && a2 >= v4[4] )
    return v4 + 5;
  do
  {
    while ( (int)v2[4] >= -1 )
    {
      v6 = v2;
      v2 = (uint32_t *)v2[2];
      if ( v2 == nullptr )
        goto LABEL_12;
    }
    v2 = (uint32_t *)v2[3];
  }
  while ( v2 != nullptr );
LABEL_12:
  if ( v3 == v6 || (int)v6[4] >= 0 )
  {
LABEL_14:
    v13[1] = -1;
    v13[0] = (uint32_t)(uintptr_t)(&dword_213B814);
    g4_std::string::construct_copy(v14, v13);
    g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_insert_unique(&v12);
    v6 = v12;
    v8 = (void *)(v14[0] - 12);
    if ( (uint32_t *)(v14[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v14[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v10 = v6;
      g4_std::string::Rep::M_destroy(v8);
      v6 = v10;
    }
    v9 = (void *)(v13[0] - 12);
    if ( (uint32_t *)(v13[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      v11 = v6;
      g4_std::string::Rep::M_destroy(v9);
      v6 = v11;
    }
  }
  return v6 + 5;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade  (binary VA: 0x1422770)
// Original: sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int PermissionForRequest;
  int v6;
  int hasPermissionInternal;
  void *v9;
  void *v10;
  char Permission;
  typedef int _g4_t_v12;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v13;
  typedef uint32_t *_g4_t_PermissionsValue;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17[4];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v12)) > _g4_s0 ? (8u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v13)) > _g4_s1 ? (24u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_PermissionsValue)) > _g4_s2 ? (28u + sizeof(_g4_t_PermissionsValue)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v16)) > _g4_s4 ? (40u + sizeof(_g4_t_v16)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v17)) > _g4_s5 ? (44u + sizeof(_g4_t_v17)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 8u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 24u);
  _g4_t_PermissionsValue &PermissionsValue = *reinterpret_cast<_g4_t_PermissionsValue *>(_g4_sf + 28u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 40u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 44u);

  v2 = dword_20D2420;
  v3 = *((uint32_t *)a2 + 2);
  if ( dword_20D2420 == 0 )
  {
    v13 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v13);
    v2 = (int)(uintptr_t)(v13);
    dword_20D2420 = (int)(uintptr_t)(v13);
  }
  v12 = v3;
  v4 = 1;
  PermissionForRequest = sociallib::ClientSNSInterface::retrievePermissionForRequest(v2, 4, v12);
  v6 = PermissionForRequest;
  if ( PermissionForRequest != 0 )
  {
    PermissionsValue = sociallib::FacebookSNSWrapper::GetPermissionsValue((int)(uintptr_t)(self), PermissionForRequest);
    hasPermissionInternal = facebookAndroidGLSocialLib_hasPermissionInternal(PermissionsValue);
    if ( hasPermissionInternal == 2 )
    {
      v4 = 0;
      Permission = sociallib::FacebookSNSWrapper::IsReadPermission((int)(uintptr_t)(self), v6);
      facebookAndroidGLSocialLib_requestPermission(PermissionsValue, Permission);
      return v4;
    }
    if ( hasPermissionInternal != 0 )
    {
      if ( hasPermissionInternal == 1 )
        return v4;
      g4_std::string::construct_from_cstr((int)(uintptr_t)(v17), "This is a developer error. THis case should not be accesed in any case", (int)(uintptr_t)(&v15) + 2);
      sociallib::FacebookSNSWrapper::SetErrorForRequest((uint32_t *)(a2), (int)(uintptr_t)(v17));
      v9 = (void *)(v17[0] - 12);
      if ( (uint32_t *)(v17[0] - 12) != dword_213B808 )
      {
        v4 = 0;
        if ( __sync_fetch_and_add((volatile int32_t *)(v17[0] - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v9);
        return v4;
      }
    }
    else
    {
      g4_std::string::construct_from_cstr(
        (int)(uintptr_t)(&v16),
        "The user has to be informed about why the game needs this permission and if he accepts a call must be made to \""
        "void ClientSNSInterface::requestPermissions(ClientSNSEnum sns,SNS_PERMISSION permission);\"",
        (int)(uintptr_t)(&v15));
      sociallib::FacebookSNSWrapper::SetPermissionError((uint32_t *)(a2), 0, (int)(uintptr_t)(&v16));
      v10 = (void *)(v16 - 12);
      if ( (uint32_t *)(v16 - 12) != dword_213B808 )
      {
        v4 = 0;
        if ( __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
          g4_std::string::Rep::M_destroy(v10);
        return v4;
      }
    }
    return 0;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::resetAchievement  (binary VA: 0x1422940)
// Original: sociallib::FacebookSNSWrapper::resetAchievement
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::resetAchievement(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  uint32_t v4[4];

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v4, (int)(uintptr_t)(a2));
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_resetAchievement(v4);
  result = v4[0];
  v3 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::gotAchievement  (binary VA: 0x1422a10)
// Original: sociallib::FacebookSNSWrapper::gotAchievement
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::gotAchievement(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  uint32_t v4[4];

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v4, (int)(uintptr_t)(a2));
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_gotAchievement(v4);
  result = v4[0];
  v3 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getUserAchievements  (binary VA: 0x1422ae0)
// Original: sociallib::FacebookSNSWrapper::getUserAchievements
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getUserAchievements(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  void *v4;
  typedef uint8_t _g4_t_v5[7];
  typedef int _g4_t_v6[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (5u + sizeof(_g4_t_v5)) > _g4_s0 ? (5u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 5u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v5[3], (int)(uintptr_t)(a2));
  if ( *(uint32_t *)(*(uint32_t *)&v5[3] - 12) == 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v6), "me", (int)(uintptr_t)(v5));
    g4_std::string::assign_str(&v5[3], v6);
    v4 = (void *)(v6[0] - 12);
    if ( (uint32_t *)(v6[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v6[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v4);
    }
  }
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_getUserAchievements(&v5[3]);
  result = *(uint32_t *)&v5[3];
  v3 = (void *)(*(uint32_t *)&v5[3] - 12);
  if ( (uint32_t *)(*(uint32_t *)&v5[3] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)&v5[3] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::deleteScore  (binary VA: 0x1422c30)
// Original: sociallib::FacebookSNSWrapper::deleteScore
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::deleteScore(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  result = sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2);
  if ( (uint8_t)result != 0 )
    return facebookAndroidGLSocialLib_deleteScore();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::updateScore  (binary VA: 0x1422ca0)
// Original: sociallib::FacebookSNSWrapper::updateScore
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::updateScore(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  unsigned int IntParam;
  int result;

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  IntParam = sociallib::SNSRequestState::getIntParam(a2);
  result = sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2);
  if ( (uint8_t)result != 0 )
    return facebookAndroidGLSocialLib_updateScore(IntParam);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getUserScore  (binary VA: 0x1422d40)
// Original: sociallib::FacebookSNSWrapper::getUserScore
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getUserScore(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  uint32_t v4[4];

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v4, (int)(uintptr_t)(a2));
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_getUserScore(v4);
  result = v4[0];
  v3 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::postOpenGraphAction  (binary VA: 0x1422e10)
// Original: sociallib::FacebookSNSWrapper::postOpenGraphAction
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::postOpenGraphAction(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  void *v3;
  void *v4;
  int result;
  void *v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v7)) > _g4_s0 ? (0u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v8)) > _g4_s1 ? (4u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v9)) > _g4_s2 ? (8u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v10)) > _g4_s3 ? (12u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 0u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v7, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v8, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v9, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v10, (int)(uintptr_t)(a2));
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_postOpenGraphAction(&v7, &v8, &v9, v10);
  v2 = (void *)(v10[0] - 12);
  if ( (uint32_t *)(v10[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v2);
  }
  v3 = (void *)(v9 - 12);
  if ( (uint32_t *)(v9 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v9 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v8 - 12);
  if ( (uint32_t *)(v8 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v8 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  result = v7;
  v6 = (void *)(v7 - 12);
  if ( (uint32_t *)(v7 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v7 - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v6)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::postPhotoToWallWithoutDialog  (binary VA: 0x1422ff0)
// Original: sociallib::FacebookSNSWrapper::postPhotoToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::postPhotoToWallWithoutDialog(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;
  void *v3;
  uint32_t v4[4];

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v4, (int)(uintptr_t)(a2));
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_postPhotoToWallWithoutDialog((char *)a2 + 60, v4);
  result = v4[0];
  v3 = (void *)(v4[0] - 12);
  if ( (uint32_t *)(v4[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v4[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v3)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::postMessageToWallWithoutDialog  (binary VA: 0x14230c0)
// Original: sociallib::FacebookSNSWrapper::postMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
char * sociallib::FacebookSNSWrapper::postMessageToWallWithoutDialog(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  char *v2;
  void *v3;
  char *v4;
  char *v5;
  char *v6;
  char *v7;
  char *result;
  char *v9;
  void *v10;
  void *v11;
  void *v12;
  void *v13;
  void *v14;
  void *v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef char *_g4_t_v18;
  typedef char *_g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef char *_g4_t_v22;
  typedef int _g4_t_v23;
  typedef char *_g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30[8];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (9u + sizeof(_g4_t_v16)) > _g4_s0 ? (9u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v17)) > _g4_s1 ? (12u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v18)) > _g4_s2 ? (28u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v19)) > _g4_s3 ? (32u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v20)) > _g4_s4 ? (36u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v21)) > _g4_s5 ? (40u + sizeof(_g4_t_v21)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v22)) > _g4_s6 ? (44u + sizeof(_g4_t_v22)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v23)) > _g4_s7 ? (48u + sizeof(_g4_t_v23)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v24)) > _g4_s8 ? (52u + sizeof(_g4_t_v24)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v25)) > _g4_s9 ? (56u + sizeof(_g4_t_v25)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v26)) > _g4_s10 ? (60u + sizeof(_g4_t_v26)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v27)) > _g4_s11 ? (64u + sizeof(_g4_t_v27)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v28)) > _g4_s12 ? (68u + sizeof(_g4_t_v28)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v29)) > _g4_s13 ? (72u + sizeof(_g4_t_v29)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v30)) > _g4_s14 ? (76u + sizeof(_g4_t_v30)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 9u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 28u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 32u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 36u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 40u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 44u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 48u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 52u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 56u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 60u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 64u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 68u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 72u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 76u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return (char *)sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v18, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v19, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v20, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v21, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v22, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v23, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v24, (int)(uintptr_t)(a2));
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v25), v24, (int)(uintptr_t)(&v16));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v26), v22, (int)(uintptr_t)(&v16) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v27), v21, (int)(uintptr_t)(&v16) + 2);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v28), v20, (int)(uintptr_t)(&v17));
    g4_std::string::construct_from_cstr((int)(uintptr_t)(&v29), v19, (int)(uintptr_t)(&v17) + 1);
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v30), v18, (int)(uintptr_t)(&v17) + 2);
    facebookAndroidGLSocialLib_postToWallWithoutDialog(v30, &v29, &v28, &v27, &v26, &v25);
    v10 = (void *)(v30[0] - 12);
    if ( (uint32_t *)(v30[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v30[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    v11 = (void *)(v29 - 12);
    if ( (uint32_t *)(v29 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v29 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v11);
    }
    v12 = (void *)(v28 - 12);
    if ( (uint32_t *)(v28 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v28 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v12);
    }
    v13 = (void *)(v27 - 12);
    if ( (uint32_t *)(v27 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v27 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v13);
    }
    v14 = (void *)(v26 - 12);
    if ( (uint32_t *)(v26 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v26 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v14);
    }
    v15 = (void *)(v25 - 12);
    if ( (uint32_t *)(v25 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v25 - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v15);
    }
  }
  v2 = v24 - 12;
  if ( v24 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v24 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v2);
  v3 = (void *)(v23 - 12);
  if ( (uint32_t *)(v23 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v23 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = v22 - 12;
  if ( v22 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v22 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v4);
  v5 = v21 - 12;
  if ( v21 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v21 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v5);
  v6 = v20 - 12;
  if ( v20 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v20 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v6);
  v7 = v19 - 12;
  if ( v19 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v19 - 1, 0xFFFFFFFF) <= 0 )
    g4_std::string::Rep::M_destroy(v7);
  result = v18;
  v9 = v18 - 12;
  if ( v18 - 12 != (char *)dword_213B808 && __sync_fetch_and_add((volatile int32_t *)v18 - 1, 0xFFFFFFFF) <= 0 )
    return (g4_std::string::Rep::M_destroy(v9), (char *)0);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::UploadVideoFile  (binary VA: 0x1423590)
// Original: sociallib::FacebookSNSWrapper::UploadVideoFile
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::UploadVideoFile(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
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
    _g4_s0 = 128u,
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

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
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
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_UploadVideoFile(&v8, &v9, &v10, &v11, v12);
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
    return ((g4_std::string::Rep::M_destroy(v7)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getUserLikes  (binary VA: 0x14237d0)
// Original: sociallib::FacebookSNSWrapper::getUserLikes
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getUserLikes(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
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

  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v4, (int)(uintptr_t)(a2));
  if ( (uint8_t)sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2) != 0 )
    facebookAndroidGLSocialLib_getUserLikes(&v4);
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
// Function: sociallib::FacebookSNSWrapper::getFriendsData  (binary VA: 0x1423870)
// Original: sociallib::FacebookSNSWrapper::getFriendsData
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getFriendsData(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  int v3;
  int v4;
  int v5;
  int result;
  typedef int _g4_t_IntParam;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint32_t _g4_t_v10[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_IntParam)) > _g4_s0 ? (12u + sizeof(_g4_t_IntParam)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (26u + sizeof(_g4_t_v9)) > _g4_s2 ? (26u + sizeof(_g4_t_v9)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v10)) > _g4_s3 ? (28u + sizeof(_g4_t_v10)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_IntParam &IntParam = *reinterpret_cast<_g4_t_IntParam *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 26u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  if ( sociallib::SNSRequestState::getIntParam(a2) != 2 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v10), "This functionality has been deprecated by Facebook - use FRIEND_ALL (default) ", (int)(uintptr_t)(&v9));
    sociallib::FacebookSNSWrapper::SetErrorForRequest((uint32_t *)(a2), (int)(uintptr_t)(v10));
    v2 = (void *)(v10[0] - 12);
    if ( (uint32_t *)(v10[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v10[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
  }
  v3 = 0;
  sociallib::SNSRequestState::getParamType(a2);
  IntParam = sociallib::SNSRequestState::getIntParam(a2);
  sociallib::SNSRequestState::getParamType(a2);
  v4 = sociallib::SNSRequestState::getIntParam(a2);
  v5 = v4 * IntParam;
  v8 = v4;
  if ( v4 != 0 )
    v3 = v5;
  result = sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2);
  if ( (uint8_t)result != 0 )
    return facebookAndroidGLSocialLib_getFriendsData(v3, v8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getFriends  (binary VA: 0x14239b0)
// Original: sociallib::FacebookSNSWrapper::getFriends
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getFriends(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  void *v2;
  int result;
  typedef int _g4_t_v4;
  typedef uint32_t _g4_t_v5[4];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (10u + sizeof(_g4_t_v4)) > _g4_s0 ? (10u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v5)) > _g4_s1 ? (12u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 10u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 12u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  if ( sociallib::SNSRequestState::getIntParam(a2) != 2 )
  {
    g4_std::string::construct_from_cstr((int)(uintptr_t)(v5), "This functionality has been deprecated by Facebook - use implicit FRIEND_ALL", (int)(uintptr_t)(&v4));
    sociallib::FacebookSNSWrapper::SetErrorForRequest((uint32_t *)(a2), (int)(uintptr_t)(v5));
    v2 = (void *)(v5[0] - 12);
    if ( (uint32_t *)(v5[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v5[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v2);
    }
  }
  result = sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(self, a2);
  if ( (uint8_t)result != 0 )
    return facebookAndroidGLSocialLib_getFriends();
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::getAppScores  (binary VA: 0x1423aa0)
// Original: sociallib::FacebookSNSWrapper::getAppScores
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::getAppScores(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  int v3;
  uint32_t *PermissionsValue;
  int result;
  void *v6;
  char Permission;
  typedef int _g4_t_PermissionForRequest;
  typedef int _g4_t_v9;
  typedef sociallib::ClientSNSInterface::Self *_g4_t_v10;
  typedef uint32_t _g4_t_v11[4];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_PermissionForRequest)) > _g4_s0 ? (8u + sizeof(_g4_t_PermissionForRequest)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v11)) > _g4_s3 ? (28u + sizeof(_g4_t_v11)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_PermissionForRequest &PermissionForRequest = *reinterpret_cast<_g4_t_PermissionForRequest *>(_g4_sf + 8u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)v11, (int)(uintptr_t)(a2));
  v2 = *((uint32_t *)a2 + 2);
  v3 = dword_20D2420;
  if ( dword_20D2420 == 0 )
  {
    v9 = *((uint32_t *)a2 + 2);
    v10 = (sociallib::ClientSNSInterface::Self *)opNew(0x24u);
    sociallib::ClientSNSInterface::Construct(v10);
    v3 = (int)(uintptr_t)(v10);
    dword_20D2420 = (int)(uintptr_t)(v10);
    v2 = v9;
  }
  PermissionForRequest = sociallib::ClientSNSInterface::retrievePermissionForRequest(v3, 4, v2);
  PermissionsValue = sociallib::FacebookSNSWrapper::GetPermissionsValue((int)(uintptr_t)(self), PermissionForRequest);
  if ( facebookAndroidGLSocialLib_hasPermissionInternal(PermissionsValue) == 2 )
  {
    Permission = sociallib::FacebookSNSWrapper::IsReadPermission((int)(uintptr_t)(self), PermissionForRequest);
    facebookAndroidGLSocialLib_requestPermission(PermissionsValue, Permission);
  }
  else
  {
    facebookAndroidGLSocialLib_getAppScores(v11);
  }
  result = v11[0];
  v6 = (void *)(v11[0] - 12);
  if ( (uint32_t *)(v11[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    return ((g4_std::string::Rep::M_destroy(v6)), (int)0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::requestPermissions  (binary VA: 0x1423c00)
// Original: sociallib::FacebookSNSWrapper::requestPermissions
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::requestPermissions(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *PermissionsValue;
  char Permission;

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getParamType(a2);
  PermissionsValue = sociallib::FacebookSNSWrapper::GetPermissionsValue((int)(uintptr_t)(self), *((uint32_t *)a2 + 31));
  Permission = sociallib::FacebookSNSWrapper::IsReadPermission((int)(uintptr_t)(self), *((uint32_t *)a2 + 31));
  return facebookAndroidGLSocialLib_requestPermission(PermissionsValue, Permission);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::hasPermission  (binary VA: 0x1423cb0)
// Original: sociallib::FacebookSNSWrapper::hasPermission
// ----------------------------------------------------------------------------
int sociallib::FacebookSNSWrapper::hasPermission(sociallib::FacebookSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  uint32_t *PermissionsValue;
  int result;

  if ( G4_VCALL<uint8_t>(self, 212) == 0 )
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
  sociallib::SNSRequestState::getParamListSize(a2);
  sociallib::SNSRequestState::getParamType(a2);
  if ( *((uint32_t *)a2 + 31) != 0 )
  {
    PermissionsValue = sociallib::FacebookSNSWrapper::GetPermissionsValue((int)(uintptr_t)(self), *((uint32_t *)a2 + 31));
    return facebookAndroidGLSocialLib_hasPermission(PermissionsValue);
  }
  else
  {
    result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, "No Permission Required for Request", 0x22u));
    *((uint8_t *)a2 + 56) = 0;
    *((uint32_t *)a2 + 1) = 4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::Destroy  (binary VA: 0x1423de0)
// Original: sociallib::FacebookSNSWrapper::~FacebookSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::FacebookSNSWrapper::Destroy(void ***self)
{
  int v1;

  *self = (void **)((uint32_t)(uintptr_t)&off_20952E8);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_erase(
    (int)(uintptr_t)(self + 3),
    *(self + 5));
  v1 = (int)(uintptr_t)(*(self + 2));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sociallib::SNSWrapperBase::Destroy((sociallib::SNSWrapperBase::Self *)self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::FacebookSNSWrapper::Destroy_ea1423e60  (binary VA: 0x1423e60)
// Original: sociallib::FacebookSNSWrapper::~FacebookSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::FacebookSNSWrapper::Destroy_ea1423e60(void ***self)
{
  int v1;

  *self = (void **)((uint32_t)(uintptr_t)&off_20952E8);
  g4_std::Rb_tree_sociallib_SNS_PERMISSION_6f95d1::M_erase(
    (int)(uintptr_t)(self + 3),
    *(self + 5));
  v1 = (int)(uintptr_t)(*(self + 2));
  if ( (uint32_t *)(v1 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy((void *)(v1 - 12));
  }
  sociallib::SNSWrapperBase::Destroy((sociallib::SNSWrapperBase::Self *)self);
  opDelete(self);
}


