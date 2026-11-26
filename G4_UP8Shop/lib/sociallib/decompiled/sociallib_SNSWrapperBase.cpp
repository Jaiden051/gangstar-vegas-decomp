#include "Core/Utils/DecompTypes.h"
#include "sociallib_SNSWrapperBase.h"

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::Destroy  (binary VA: 0x141d020)
// Original: sociallib::SNSWrapperBase::~SNSWrapperBase
// ----------------------------------------------------------------------------
void sociallib::SNSWrapperBase::Destroy(sociallib::SNSWrapperBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095068);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::SetLocale  (binary VA: 0x141d040)
// Original: sociallib::SNSWrapperBase::SetLocale
// ----------------------------------------------------------------------------
void sociallib::SNSWrapperBase::SetLocale()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::isLoggedIn  (binary VA: 0x141d050)
// Original: sociallib::SNSWrapperBase::isLoggedIn
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::isLoggedIn()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::update  (binary VA: 0x141d060)
// Original: sociallib::SNSWrapperBase::update
// ----------------------------------------------------------------------------
void sociallib::SNSWrapperBase::update()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::onResume  (binary VA: 0x141d070)
// Original: sociallib::SNSWrapperBase::onResume
// ----------------------------------------------------------------------------
void sociallib::SNSWrapperBase::onResume()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::handleOpenUrl  (binary VA: 0x141d080)
// Original: sociallib::SNSWrapperBase::handleOpenUrl
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::handleOpenUrl()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::SetApiVersion  (binary VA: 0x141d090)
// Original: sociallib::SNSWrapperBase::SetApiVersion
// ----------------------------------------------------------------------------
void sociallib::SNSWrapperBase::SetApiVersion()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::GetSecret  (binary VA: 0x141d0a0)
// Original: sociallib::SNSWrapperBase::GetSecret
// ----------------------------------------------------------------------------
sociallib::SNSWrapperBase::Self * sociallib::SNSWrapperBase::GetSecret(sociallib::SNSWrapperBase::Self *self)
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
// Function: sociallib::SNSWrapperBase::GetAccessToken  (binary VA: 0x141d0f0)
// Original: sociallib::SNSWrapperBase::GetAccessToken
// ----------------------------------------------------------------------------
sociallib::SNSWrapperBase::Self * sociallib::SNSWrapperBase::GetAccessToken(sociallib::SNSWrapperBase::Self *self)
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
// Function: sociallib::SNSWrapperBase::getName  (binary VA: 0x141d140)
// Original: sociallib::SNSWrapperBase::getName
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getName(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, &unk_1B15112, 0));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::Destroy_ea141d190  (binary VA: 0x141d190)
// Original: sociallib::SNSWrapperBase::~SNSWrapperBase
// ----------------------------------------------------------------------------
void sociallib::SNSWrapperBase::Destroy_ea141d190(sociallib::SNSWrapperBase::Self *self)
{
  sociallib::SNSWrapperBase::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getAppId  (binary VA: 0x141d220)
// Original: sociallib::SNSWrapperBase::getAppId
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getAppId(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, &unk_1B15112, 0));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserAvatar  (binary VA: 0x141d270)
// Original: sociallib::SNSWrapperBase::getUserAvatar
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserAvatar(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, &unk_1B15112, 0));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getAvatar  (binary VA: 0x141d2c0)
// Original: sociallib::SNSWrapperBase::getAvatar
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getAvatar(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, &unk_1B15112, 0));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getCountry  (binary VA: 0x141d310)
// Original: sociallib::SNSWrapperBase::getCountry
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getCountry(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int result;

  result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(a2) + 60, &unk_1B15112, 0));
  *((uint32_t *)a2 + 1) = 2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::Construct  (binary VA: 0x141d360)
// Original: sociallib::SNSWrapperBase::SNSWrapperBase
// ----------------------------------------------------------------------------
sociallib::SNSWrapperBase::Self * sociallib::SNSWrapperBase::Construct(sociallib::SNSWrapperBase::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2095068);
  return self;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::doNothing  (binary VA: 0x141d380)
// Original: sociallib::SNSWrapperBase::doNothing
// ----------------------------------------------------------------------------
void sociallib::SNSWrapperBase::doNothing()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::requestNotSupported  (binary VA: 0x141d390)
// Original: sociallib::SNSWrapperBase::requestNotSupported
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::requestNotSupported(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v12)) > _g4_s1 ? (26u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "!\n", (int)(uintptr_t)(&v13));
  v2 = sociallib::SNSRequestState::s_snsRequestTypeNames + 4 * *((uint32_t *)a2 + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), " does not support request or it hasn't been implemented yet: ", (int)(uintptr_t)(&v12) + 1);
  v11 = sociallib::SNSRequestState::s_snsNames + 4 * *((uint32_t *)a2 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "ERROR: ", (int)(uintptr_t)(&v12));
  sub_141D1D0((int)(uintptr_t)(&v15), (int)(uintptr_t)(&v14), v11);
  sub_141D1D0((int)(uintptr_t)(&v17), (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v16));
  sub_141D1D0((int)(uintptr_t)(&v18), (int)(uintptr_t)(&v17), v2);
  sub_141D1D0((int)(uintptr_t)(v20), (int)(uintptr_t)(&v18), (int)(uintptr_t)(&v19));
  g4_std::string::assign_str((char *)a2 + 60, v20);
  v3 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  result = v19;
  v10 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v10); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::ShowMainOverlay  (binary VA: 0x141d5f0)
// Original: sociallib::SNSWrapperBase::ShowMainOverlay
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::ShowMainOverlay(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::ShowSignInOverlay  (binary VA: 0x141d620)
// Original: sociallib::SNSWrapperBase::ShowSignInOverlay
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::ShowSignInOverlay(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::onNewCloudData  (binary VA: 0x141d650)
// Original: sociallib::SNSWrapperBase::onNewCloudData
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::onNewCloudData(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getValueFromCloud  (binary VA: 0x141d680)
// Original: sociallib::SNSWrapperBase::getValueFromCloud
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getValueFromCloud(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::saveOnCloud  (binary VA: 0x141d6b0)
// Original: sociallib::SNSWrapperBase::saveOnCloud
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::saveOnCloud(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getAllAchievements  (binary VA: 0x141d6e0)
// Original: sociallib::SNSWrapperBase::getAllAchievements
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getAllAchievements(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::showAllLeadearboards  (binary VA: 0x141d710)
// Original: sociallib::SNSWrapperBase::showAllLeadearboards
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::showAllLeadearboards(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::showLeadearboardWithId  (binary VA: 0x141d740)
// Original: sociallib::SNSWrapperBase::showLeadearboardWithId
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::showLeadearboardWithId(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::resetAchievement  (binary VA: 0x141d770)
// Original: sociallib::SNSWrapperBase::resetAchievement
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::resetAchievement(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::resetAchievements  (binary VA: 0x141d7a0)
// Original: sociallib::SNSWrapperBase::resetAchievements
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::resetAchievements(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::incrementAchievement  (binary VA: 0x141d7d0)
// Original: sociallib::SNSWrapperBase::incrementAchievement
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::incrementAchievement(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::unlockAchievements  (binary VA: 0x141d800)
// Original: sociallib::SNSWrapperBase::unlockAchievements
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::unlockAchievements(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::showAchievements  (binary VA: 0x141d830)
// Original: sociallib::SNSWrapperBase::showAchievements
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::showAchievements(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getNumberOfMatches  (binary VA: 0x141d860)
// Original: sociallib::SNSWrapperBase::getNumberOfMatches
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getNumberOfMatches(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserAchievements  (binary VA: 0x141d890)
// Original: sociallib::SNSWrapperBase::getUserAchievements
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserAchievements(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::deleteScore  (binary VA: 0x141d8c0)
// Original: sociallib::SNSWrapperBase::deleteScore
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::deleteScore(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::updateScore  (binary VA: 0x141d8f0)
// Original: sociallib::SNSWrapperBase::updateScore
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::updateScore(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getAppScores  (binary VA: 0x141d920)
// Original: sociallib::SNSWrapperBase::getAppScores
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getAppScores(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserScore  (binary VA: 0x141d950)
// Original: sociallib::SNSWrapperBase::getUserScore
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserScore(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getApplicationDetails  (binary VA: 0x141d980)
// Original: sociallib::SNSWrapperBase::getApplicationDetails
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getApplicationDetails(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getLeaderboardsTypes  (binary VA: 0x141d9b0)
// Original: sociallib::SNSWrapperBase::getLeaderboardsTypes
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getLeaderboardsTypes(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserLeaderboardScore  (binary VA: 0x141d9e0)
// Original: sociallib::SNSWrapperBase::getUserLeaderboardScore
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserLeaderboardScore(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserLeaderboardRank  (binary VA: 0x141da10)
// Original: sociallib::SNSWrapperBase::getUserLeaderboardRank
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserLeaderboardRank(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postLeaderboardScore  (binary VA: 0x141da40)
// Original: sociallib::SNSWrapperBase::postLeaderboardScore
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postLeaderboardScore(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getLeaderboardRows  (binary VA: 0x141da70)
// Original: sociallib::SNSWrapperBase::getLeaderboardRows
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getLeaderboardRows(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::selectLeaderboardChallengeablePlayers  (binary VA: 0x141daa0)
// Original: sociallib::SNSWrapperBase::selectLeaderboardChallengeablePlayers
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::selectLeaderboardChallengeablePlayers(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::issueLeaderboardChallenge  (binary VA: 0x141dad0)
// Original: sociallib::SNSWrapperBase::issueLeaderboardChallenge
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::issueLeaderboardChallenge(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::gotAchievement  (binary VA: 0x141db00)
// Original: sociallib::SNSWrapperBase::gotAchievement
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::gotAchievement(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::selectAchievementChallengeablePlayers  (binary VA: 0x141db30)
// Original: sociallib::SNSWrapperBase::selectAchievementChallengeablePlayers
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::selectAchievementChallengeablePlayers(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::issueAchievementChallenge  (binary VA: 0x141db60)
// Original: sociallib::SNSWrapperBase::issueAchievementChallenge
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::issueAchievementChallenge(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::sendMessageTo  (binary VA: 0x141db90)
// Original: sociallib::SNSWrapperBase::sendMessageTo
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::sendMessageTo(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::sendLostPassword  (binary VA: 0x141dbc0)
// Original: sociallib::SNSWrapperBase::sendLostPassword
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::sendLostPassword(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::sendGameRequestToFriends  (binary VA: 0x141dbf0)
// Original: sociallib::SNSWrapperBase::sendGameRequestToFriends
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::sendGameRequestToFriends(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postOpenGraphAction  (binary VA: 0x141dc20)
// Original: sociallib::SNSWrapperBase::postOpenGraphAction
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postOpenGraphAction(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::uploadPhoto  (binary VA: 0x141dc50)
// Original: sociallib::SNSWrapperBase::uploadPhoto
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::uploadPhoto(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postMessageToFriendsWallWithoutDialog  (binary VA: 0x141dc80)
// Original: sociallib::SNSWrapperBase::postMessageToFriendsWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postMessageToFriendsWallWithoutDialog(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postPhotoToWallWithoutDialog  (binary VA: 0x141dcb0)
// Original: sociallib::SNSWrapperBase::postPhotoToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postPhotoToWallWithoutDialog(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postMessageToFriendsWall  (binary VA: 0x141dce0)
// Original: sociallib::SNSWrapperBase::postMessageToFriendsWall
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postMessageToFriendsWall(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postMessageToWallWithoutDialog  (binary VA: 0x141dd10)
// Original: sociallib::SNSWrapperBase::postMessageToWallWithoutDialog
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postMessageToWallWithoutDialog(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postReviewApplication  (binary VA: 0x141dd40)
// Original: sociallib::SNSWrapperBase::postReviewApplication
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postReviewApplication(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserLikes  (binary VA: 0x141dd70)
// Original: sociallib::SNSWrapperBase::getUserLikes
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserLikes(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::likeApplicationObject  (binary VA: 0x141dda0)
// Original: sociallib::SNSWrapperBase::likeApplicationObject
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::likeApplicationObject(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::likeApplication  (binary VA: 0x141ddd0)
// Original: sociallib::SNSWrapperBase::likeApplication
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::likeApplication(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::requestPermissions  (binary VA: 0x141de00)
// Original: sociallib::SNSWrapperBase::requestPermissions
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::requestPermissions(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::hasPermission  (binary VA: 0x141de30)
// Original: sociallib::SNSWrapperBase::hasPermission
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::hasPermission(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::addFriend  (binary VA: 0x141de60)
// Original: sociallib::SNSWrapperBase::addFriend
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::addFriend(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getBilateralFriendsData  (binary VA: 0x141de90)
// Original: sociallib::SNSWrapperBase::getBilateralFriendsData
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getBilateralFriendsData(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getBilateralFriends  (binary VA: 0x141dec0)
// Original: sociallib::SNSWrapperBase::getBilateralFriends
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getBilateralFriends(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getFriendsData  (binary VA: 0x141def0)
// Original: sociallib::SNSWrapperBase::getFriendsData
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getFriendsData(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getFriends  (binary VA: 0x141df20)
// Original: sociallib::SNSWrapperBase::getFriends
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getFriends(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::logout  (binary VA: 0x141df50)
// Original: sociallib::SNSWrapperBase::logout
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::logout(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserLocale  (binary VA: 0x141df80)
// Original: sociallib::SNSWrapperBase::getUserLocale
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserLocale(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::login  (binary VA: 0x141dfb0)
// Original: sociallib::SNSWrapperBase::login
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::login(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::postMessageToWall  (binary VA: 0x141dfe0)
// Original: sociallib::SNSWrapperBase::postMessageToWall
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::postMessageToWall(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserNames  (binary VA: 0x141e010)
// Original: sociallib::SNSWrapperBase::getUserNames
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserNames(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUserData  (binary VA: 0x141e040)
// Original: sociallib::SNSWrapperBase::getUserData
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUserData(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::getUid  (binary VA: 0x141e070)
// Original: sociallib::SNSWrapperBase::getUid
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::getUid(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::init  (binary VA: 0x141e0a0)
// Original: sociallib::SNSWrapperBase::init
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::init(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::UploadVideoFile  (binary VA: 0x141e0d0)
// Original: sociallib::SNSWrapperBase::UploadVideoFile
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::UploadVideoFile(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  return sociallib::SNSWrapperBase::requestNotSupported(self, a2);
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::snsNotSupported  (binary VA: 0x141e100)
// Original: sociallib::SNSWrapperBase::snsNotSupported
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::snsNotSupported(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
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
    _g4_s1 = (10u + sizeof(_g4_t_v8)) > _g4_s0 ? (10u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 10u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);

  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  g4_std::string::construct_from_cstr(
    (int)(uintptr_t)(&v11),
    " in snsConfig.json as being supported or Device/OS Firmware doesn't currently support it!\n",
    (int)(uintptr_t)(&v8) + 1);
  v2 = sociallib::SNSRequestState::s_snsNames + 4 * *((uint32_t *)a2 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v9), "ERROR: You didn't mark SNS ", (int)(uintptr_t)(&v8));
  sub_141D1D0((int)(uintptr_t)(&v10), (int)(uintptr_t)(&v9), v2);
  sub_141D1D0((int)(uintptr_t)(v12), (int)(uintptr_t)(&v10), (int)(uintptr_t)(&v11));
  g4_std::string::assign_str((char *)a2 + 60, v12);
  v3 = (void *)(v12[0] - 12);
  if ( (uint32_t *)(v12[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v12[0] - 4), 0xFFFFFFFF) <= 0 )
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
  result = v11;
  v7 = (void *)(v11 - 12);
  if ( (uint32_t *)(v11 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v11 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v7); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::emptyUidListError  (binary VA: 0x141e280)
// Original: sociallib::SNSWrapperBase::emptyUidListError
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::emptyUidListError(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v12)) > _g4_s1 ? (26u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "!\n", (int)(uintptr_t)(&v13));
  v2 = sociallib::SNSRequestState::s_snsRequestTypeNames + 4 * *((uint32_t *)a2 + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), " SNS had an empty Uid list for request: ", (int)(uintptr_t)(&v12) + 1);
  v11 = sociallib::SNSRequestState::s_snsNames + 4 * *((uint32_t *)a2 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "ERROR: ", (int)(uintptr_t)(&v12));
  sub_141D1D0((int)(uintptr_t)(&v15), (int)(uintptr_t)(&v14), v11);
  sub_141D1D0((int)(uintptr_t)(&v17), (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v16));
  sub_141D1D0((int)(uintptr_t)(&v18), (int)(uintptr_t)(&v17), v2);
  sub_141D1D0((int)(uintptr_t)(v20), (int)(uintptr_t)(&v18), (int)(uintptr_t)(&v19));
  g4_std::string::assign_str((char *)a2 + 60, v20);
  v3 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  result = v19;
  v10 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v10); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::isHtmlUnsupportedError  (binary VA: 0x141e4e0)
// Original: sociallib::SNSWrapperBase::isHtmlUnsupportedError
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::isHtmlUnsupportedError(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v12)) > _g4_s1 ? (26u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "!\n", (int)(uintptr_t)(&v13));
  v2 = sociallib::SNSRequestState::s_snsRequestTypeNames + 4 * *((uint32_t *)a2 + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), " SNS doesn't support the isHtml flag for request: ", (int)(uintptr_t)(&v12) + 1);
  v11 = sociallib::SNSRequestState::s_snsNames + 4 * *((uint32_t *)a2 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "ERROR: ", (int)(uintptr_t)(&v12));
  sub_141D1D0((int)(uintptr_t)(&v15), (int)(uintptr_t)(&v14), v11);
  sub_141D1D0((int)(uintptr_t)(&v17), (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v16));
  sub_141D1D0((int)(uintptr_t)(&v18), (int)(uintptr_t)(&v17), v2);
  sub_141D1D0((int)(uintptr_t)(v20), (int)(uintptr_t)(&v18), (int)(uintptr_t)(&v19));
  g4_std::string::assign_str((char *)a2 + 60, v20);
  v3 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  result = v19;
  v10 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v10); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::stringParamConversionToIntError  (binary VA: 0x141e740)
// Original: sociallib::SNSWrapperBase::stringParamConversionToIntError
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::stringParamConversionToIntError(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v12)) > _g4_s1 ? (26u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "!\n", (int)(uintptr_t)(&v13));
  v2 = sociallib::SNSRequestState::s_snsRequestTypeNames + 4 * *((uint32_t *)a2 + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), " SNS parameter conversion from string to Int failed for request : ", (int)(uintptr_t)(&v12) + 1);
  v11 = sociallib::SNSRequestState::s_snsNames + 4 * *((uint32_t *)a2 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "ERROR: ", (int)(uintptr_t)(&v12));
  sub_141D1D0((int)(uintptr_t)(&v15), (int)(uintptr_t)(&v14), v11);
  sub_141D1D0((int)(uintptr_t)(&v17), (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v16));
  sub_141D1D0((int)(uintptr_t)(&v18), (int)(uintptr_t)(&v17), v2);
  sub_141D1D0((int)(uintptr_t)(v20), (int)(uintptr_t)(&v18), (int)(uintptr_t)(&v19));
  g4_std::string::assign_str((char *)a2 + 60, v20);
  v3 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  result = v19;
  v10 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v10); return 0; }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: sociallib::SNSWrapperBase::notLoggedInError  (binary VA: 0x141e9a0)
// Original: sociallib::SNSWrapperBase::notLoggedInError
// ----------------------------------------------------------------------------
int sociallib::SNSWrapperBase::notLoggedInError(sociallib::SNSWrapperBase::Self *self, sociallib::SNSRequestState::Self *a2)
{
  int v2;
  void *v3;
  void *v4;
  void *v5;
  void *v6;
  void *v7;
  void *v8;
  int result;
  void *v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[8];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (26u + sizeof(_g4_t_v12)) > _g4_s1 ? (26u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v13)) > _g4_s2 ? (28u + sizeof(_g4_t_v13)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v14)) > _g4_s3 ? (36u + sizeof(_g4_t_v14)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v15)) > _g4_s4 ? (40u + sizeof(_g4_t_v15)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v16)) > _g4_s5 ? (44u + sizeof(_g4_t_v16)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v17)) > _g4_s6 ? (48u + sizeof(_g4_t_v17)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v18)) > _g4_s7 ? (52u + sizeof(_g4_t_v18)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v19)) > _g4_s8 ? (56u + sizeof(_g4_t_v19)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v20)) > _g4_s9 ? (60u + sizeof(_g4_t_v20)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 26u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 28u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  *((uint32_t *)a2 + 1) = 4;
  *((uint32_t *)a2 + 3) = 1;
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v19), "!\n", (int)(uintptr_t)(&v13));
  v2 = sociallib::SNSRequestState::s_snsRequestTypeNames + 4 * *((uint32_t *)a2 + 2);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v16), " SNS so they can't make request : ", (int)(uintptr_t)(&v12) + 1);
  v11 = sociallib::SNSRequestState::s_snsNames + 4 * *((uint32_t *)a2 + 4);
  g4_std::string::construct_from_cstr((int)(uintptr_t)(&v14), "ERROR: User is not logged into ", (int)(uintptr_t)(&v12));
  sub_141D1D0((int)(uintptr_t)(&v15), (int)(uintptr_t)(&v14), v11);
  sub_141D1D0((int)(uintptr_t)(&v17), (int)(uintptr_t)(&v15), (int)(uintptr_t)(&v16));
  sub_141D1D0((int)(uintptr_t)(&v18), (int)(uintptr_t)(&v17), v2);
  sub_141D1D0((int)(uintptr_t)(v20), (int)(uintptr_t)(&v18), (int)(uintptr_t)(&v19));
  g4_std::string::assign_str((char *)a2 + 60, v20);
  v3 = (void *)(v20[0] - 12);
  if ( (uint32_t *)(v20[0] - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v20[0] - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v3);
  }
  v4 = (void *)(v18 - 12);
  if ( (uint32_t *)(v18 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v18 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v4);
  }
  v5 = (void *)(v17 - 12);
  if ( (uint32_t *)(v17 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v17 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v5);
  }
  v6 = (void *)(v15 - 12);
  if ( (uint32_t *)(v15 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v15 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v6);
  }
  v7 = (void *)(v14 - 12);
  if ( (uint32_t *)(v14 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v14 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v7);
  }
  v8 = (void *)(v16 - 12);
  if ( (uint32_t *)(v16 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v16 - 4), 0xFFFFFFFF) <= 0 )
  {
    g4_std::string::Rep::M_destroy(v8);
  }
  result = v19;
  v10 = (void *)(v19 - 12);
  if ( (uint32_t *)(v19 - 12) != dword_213B808
    && __sync_fetch_and_add((volatile int32_t *)(v19 - 4), 0xFFFFFFFF) <= 0 )
  {
    { g4_std::string::Rep::M_destroy(v10); return 0; }
  }
  return result;
}


