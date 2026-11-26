#pragma once
// ============================================================================
// G4_UP8Shop/lib/sociallib/decompiled/sociallib_GameCenterSNSWrapper.h
// Library: sociallib | Module: sociallib_GameCenterSNSWrapper
// Binary Address Span: 0x1426950 .. 0x14270d0 (34 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1426950] (9 bytes) sociallib::GameCenterSNSWrapper::isLoggedIn(void)
// int sociallib::GameCenterSNSWrapper::isLoggedIn();
// [0x1426960] (41 bytes) sociallib::GameCenterSNSWrapper::GetSecret(void)
// sociallib::GameCenterSNSWrapper *sociallib::GameCenterSNSWrapper::GetSecret( sociallib::GameCenterSNSWrapper *this, int a2);
// [0x1426990] (9 bytes) sociallib::GameCenterSNSWrapper::update(void)
// void sociallib::GameCenterSNSWrapper::update();
// [0x14269a0] (70 bytes) sociallib::GameCenterSNSWrapper::GetAccessToken(void)
// sociallib::GameCenterSNSWrapper *sociallib::GameCenterSNSWrapper::GetAccessToken( sociallib::GameCenterSNSWrapper *this);
// [0x14269f0] (42 bytes) sociallib::GameCenterSNSWrapper::getNumberOfMatches(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getNumberOfMatches( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426a20] (42 bytes) sociallib::GameCenterSNSWrapper::getLeaderboardsTypes(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getLeaderboardsTypes( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426a50] (42 bytes) sociallib::GameCenterSNSWrapper::postLeaderboardScore(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::postLeaderboardScore( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426a80] (42 bytes) sociallib::GameCenterSNSWrapper::showLeadearboardWithId(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::showLeadearboardWithId( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426ab0] (42 bytes) sociallib::GameCenterSNSWrapper::selectLeaderboardChallengeablePlayers(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::selectLeaderboardChallengeablePlayers( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426ae0] (42 bytes) sociallib::GameCenterSNSWrapper::issueLeaderboardChallenge(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::issueLeaderboardChallenge( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426b10] (42 bytes) sociallib::GameCenterSNSWrapper::logout(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::logout( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426b40] (42 bytes) sociallib::GameCenterSNSWrapper::login(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::login( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426b70] (42 bytes) sociallib::GameCenterSNSWrapper::showAchievements(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::showAchievements( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426ba0] (42 bytes) sociallib::GameCenterSNSWrapper::selectAchievementChallengeablePlayers(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::selectAchievementChallengeablePlayers( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426bd0] (42 bytes) sociallib::GameCenterSNSWrapper::issueAchievementChallenge(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::issueAchievementChallenge( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426c00] (42 bytes) sociallib::GameCenterSNSWrapper::postMessageToWall(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::postMessageToWall( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426c30] (42 bytes) sociallib::GameCenterSNSWrapper::likeApplication(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::likeApplication( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426c60] (42 bytes) sociallib::GameCenterSNSWrapper::getAppId(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getAppId( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426c90] (42 bytes) sociallib::GameCenterSNSWrapper::getUserAvatar(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getUserAvatar( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426cc0] (42 bytes) sociallib::GameCenterSNSWrapper::getAvatar(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getAvatar( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426cf0] (42 bytes) sociallib::GameCenterSNSWrapper::getName(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getName( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426d20] (42 bytes) sociallib::GameCenterSNSWrapper::getUserNames(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getUserNames( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426d50] (42 bytes) sociallib::GameCenterSNSWrapper::getUserData(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getUserData( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426d80] (42 bytes) sociallib::GameCenterSNSWrapper::getFriendsData(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getFriendsData( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426db0] (42 bytes) sociallib::GameCenterSNSWrapper::getUid(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getUid( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426de0] (42 bytes) sociallib::GameCenterSNSWrapper::init(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::init( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426e10] (87 bytes) sociallib::GameCenterSNSWrapper::resetAchievements(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::resetAchievements( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426e70] (98 bytes) sociallib::GameCenterSNSWrapper::getFriends(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::getFriends( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426ee0] (196 bytes) sociallib::GameCenterSNSWrapper::incrementAchievement(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::incrementAchievement( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1426fb0] (137 bytes) sociallib::GameCenterSNSWrapper::gotAchievement(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::gotAchievement( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1427040] (9 bytes) sociallib::GameCenterSNSWrapper::connectedWithFed(void)
// void sociallib::GameCenterSNSWrapper::connectedWithFed();
// [0x1427050] (69 bytes) sociallib::GameCenterSNSWrapper::playerNotAuthenticatedError(sociallib::SNSRequestState &)
// int sociallib::GameCenterSNSWrapper::playerNotAuthenticatedError( sociallib::GameCenterSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14270a0] (45 bytes) sociallib::GameCenterSNSWrapper::~GameCenterSNSWrapper()
// void sociallib::GameCenterSNSWrapper::~GameCenterSNSWrapper(sociallib::GameCenterSNSWrapper *this);
// [0x14270d0] (67 bytes) sociallib::GameCenterSNSWrapper::~GameCenterSNSWrapper()
// void sociallib::GameCenterSNSWrapper::~GameCenterSNSWrapper(sociallib::GameCenterSNSWrapper *this);
