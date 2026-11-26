#include "Core/Utils/DecompTypes.h"
#include "sociallib_GameCenterSNSWrapper.h"

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::isLoggedIn  (binary VA: 0x1426950)
// Original: sociallib::GameCenterSNSWrapper::isLoggedIn
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::isLoggedIn()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::GetSecret  (binary VA: 0x1426960)
// Original: sociallib::GameCenterSNSWrapper::GetSecret
// ----------------------------------------------------------------------------
sociallib::GameCenterSNSWrapper::Self * sociallib::GameCenterSNSWrapper::GetSecret(sociallib::GameCenterSNSWrapper::Self *self, int a2)
{
  (*(void (**)(sociallib::GameCenterSNSWrapper::Self *))(*(uint32_t *)a2 + 228))(self);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::update  (binary VA: 0x1426990)
// Original: sociallib::GameCenterSNSWrapper::update
// ----------------------------------------------------------------------------
void sociallib::GameCenterSNSWrapper::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::GetAccessToken  (binary VA: 0x14269a0)
// Original: sociallib::GameCenterSNSWrapper::GetAccessToken
// ----------------------------------------------------------------------------
sociallib::GameCenterSNSWrapper::Self * sociallib::GameCenterSNSWrapper::GetAccessToken(sociallib::GameCenterSNSWrapper::Self *self)
{
  typedef int _g4_t_v2;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (12u + sizeof(_g4_t_v2)) > _g4_s0 ? (12u + sizeof(_g4_t_v2)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 12u);

  g4_std::string::construct_from_cstr((int)(uintptr_t)(self), (char *)&unk_1B15112, (int)(uintptr_t)(&v2));
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getNumberOfMatches  (binary VA: 0x14269f0)
// Original: sociallib::GameCenterSNSWrapper::getNumberOfMatches
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getNumberOfMatches(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getLeaderboardsTypes  (binary VA: 0x1426a20)
// Original: sociallib::GameCenterSNSWrapper::getLeaderboardsTypes
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getLeaderboardsTypes(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::postLeaderboardScore  (binary VA: 0x1426a50)
// Original: sociallib::GameCenterSNSWrapper::postLeaderboardScore
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::postLeaderboardScore(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::showLeadearboardWithId  (binary VA: 0x1426a80)
// Original: sociallib::GameCenterSNSWrapper::showLeadearboardWithId
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::showLeadearboardWithId(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::selectLeaderboardChallengeablePlayers  (binary VA: 0x1426ab0)
// Original: sociallib::GameCenterSNSWrapper::selectLeaderboardChallengeablePlayers
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::selectLeaderboardChallengeablePlayers(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::issueLeaderboardChallenge  (binary VA: 0x1426ae0)
// Original: sociallib::GameCenterSNSWrapper::issueLeaderboardChallenge
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::issueLeaderboardChallenge(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::logout  (binary VA: 0x1426b10)
// Original: sociallib::GameCenterSNSWrapper::logout
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::logout(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::login  (binary VA: 0x1426b40)
// Original: sociallib::GameCenterSNSWrapper::login
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::login(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::showAchievements  (binary VA: 0x1426b70)
// Original: sociallib::GameCenterSNSWrapper::showAchievements
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::showAchievements(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::selectAchievementChallengeablePlayers  (binary VA: 0x1426ba0)
// Original: sociallib::GameCenterSNSWrapper::selectAchievementChallengeablePlayers
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::selectAchievementChallengeablePlayers(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::issueAchievementChallenge  (binary VA: 0x1426bd0)
// Original: sociallib::GameCenterSNSWrapper::issueAchievementChallenge
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::issueAchievementChallenge(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::postMessageToWall  (binary VA: 0x1426c00)
// Original: sociallib::GameCenterSNSWrapper::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::postMessageToWall(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::likeApplication  (binary VA: 0x1426c30)
// Original: sociallib::GameCenterSNSWrapper::likeApplication
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::likeApplication(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getAppId  (binary VA: 0x1426c60)
// Original: sociallib::GameCenterSNSWrapper::getAppId
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getAppId(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getUserAvatar  (binary VA: 0x1426c90)
// Original: sociallib::GameCenterSNSWrapper::getUserAvatar
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getUserAvatar(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getAvatar  (binary VA: 0x1426cc0)
// Original: sociallib::GameCenterSNSWrapper::getAvatar
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getAvatar(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getName  (binary VA: 0x1426cf0)
// Original: sociallib::GameCenterSNSWrapper::getName
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getName(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getUserNames  (binary VA: 0x1426d20)
// Original: sociallib::GameCenterSNSWrapper::getUserNames
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getUserNames(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getUserData  (binary VA: 0x1426d50)
// Original: sociallib::GameCenterSNSWrapper::getUserData
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getUserData(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getFriendsData  (binary VA: 0x1426d80)
// Original: sociallib::GameCenterSNSWrapper::getFriendsData
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getFriendsData(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getUid  (binary VA: 0x1426db0)
// Original: sociallib::GameCenterSNSWrapper::getUid
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getUid(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::init  (binary VA: 0x1426de0)
// Original: sociallib::GameCenterSNSWrapper::init
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::init(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::resetAchievements  (binary VA: 0x1426e10)
// Original: sociallib::GameCenterSNSWrapper::resetAchievements
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::resetAchievements(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  if ( G4_VCALL<uint8_t>(self, 212) != 0 )
    return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
  else
    return sociallib::SNSWrapperBase::notLoggedInError(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::getFriends  (binary VA: 0x1426e70)
// Original: sociallib::GameCenterSNSWrapper::getFriends
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::getFriends(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;

  v2 = *((uint32_t *)a2 + 2);
  if ( v2 == 3 || v2 == 5 )
  {
    sociallib::SNSRequestState::getParamListSize(a2);
    sociallib::SNSRequestState::getParamType(a2);
    sociallib::SNSRequestState::getIntParam(a2);
  }
  return sociallib::SNSWrapperBase::snsNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::incrementAchievement  (binary VA: 0x1426ee0)
// Original: sociallib::GameCenterSNSWrapper::incrementAchievement
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::incrementAchievement(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
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
  sociallib::SNSRequestState::getStringParam((sociallib::SNSRequestState::Self *)&v4, (int)(uintptr_t)(a2));
  sociallib::SNSRequestState::getParamType(a2);
  sociallib::SNSRequestState::getIntParam(a2);
  sociallib::SNSWrapperBase::requestNotSupported(self, a2);
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
// Function: sociallib::GameCenterSNSWrapper::gotAchievement  (binary VA: 0x1426fb0)
// Original: sociallib::GameCenterSNSWrapper::gotAchievement
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::gotAchievement(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
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
  sociallib::SNSWrapperBase::snsNotSupported(self, a2);
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
// Function: sociallib::GameCenterSNSWrapper::connectedWithFed  (binary VA: 0x1427040)
// Original: sociallib::GameCenterSNSWrapper::connectedWithFed
// ----------------------------------------------------------------------------
void sociallib::GameCenterSNSWrapper::connectedWithFed()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::playerNotAuthenticatedError  (binary VA: 0x1427050)
// Original: sociallib::GameCenterSNSWrapper::playerNotAuthenticatedError
// ----------------------------------------------------------------------------
int sociallib::GameCenterSNSWrapper::playerNotAuthenticatedError(sociallib::GameCenterSNSWrapper::Self *self, sociallib::SNSRequestState::Self *a2)
{
  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, "GameCenterSNSWrapper ERROR: Player is not authenticated!\n", 0x39u));
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::Destroy  (binary VA: 0x14270a0)
// Original: sociallib::GameCenterSNSWrapper::~GameCenterSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::GameCenterSNSWrapper::Destroy(sociallib::GameCenterSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095428);
  sociallib::SNSWrapperBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::GameCenterSNSWrapper::Destroy_ea14270d0  (binary VA: 0x14270d0)
// Original: sociallib::GameCenterSNSWrapper::~GameCenterSNSWrapper
// ----------------------------------------------------------------------------
void sociallib::GameCenterSNSWrapper::Destroy_ea14270d0(sociallib::GameCenterSNSWrapper::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095428);
  sociallib::SNSWrapperBase::Destroy(self);
  opDelete(self);
}


