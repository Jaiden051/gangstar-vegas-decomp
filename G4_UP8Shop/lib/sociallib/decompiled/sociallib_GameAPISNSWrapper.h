#pragma once
// ============================================================================
// G4_UP8Shop/lib/sociallib/decompiled/sociallib_GameAPISNSWrapper.h
// Library: sociallib | Module: sociallib_GameAPISNSWrapper
// Binary Address Span: 0x1419500 .. 0x141b770 (36 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1419500] (56 bytes) sociallib::GameAPISNSWrapper::GetSecret(void)
// sociallib::GameAPISNSWrapper *sociallib::GameAPISNSWrapper::GetSecret(sociallib::GameAPISNSWrapper *this);
// [0x1419540] (56 bytes) sociallib::GameAPISNSWrapper::GetAccessToken(void)
// sociallib::GameAPISNSWrapper *sociallib::GameAPISNSWrapper::GetAccessToken( sociallib::GameAPISNSWrapper *this);
// [0x1419580] (93 bytes) sociallib::GameAPISNSWrapper::showAllLeadearboards(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::showAllLeadearboards( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14195e0] (93 bytes) sociallib::GameAPISNSWrapper::resetAchievements(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::resetAchievements( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419640] (93 bytes) sociallib::GameAPISNSWrapper::showAchievements(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::showAchievements( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14196a0] (42 bytes) sociallib::GameAPISNSWrapper::getApplicationDetails(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::getApplicationDetails( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14196d0] (42 bytes) sociallib::GameAPISNSWrapper::postMessageToFriendsWallWithoutDialog(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::postMessageToFriendsWallWithoutDialog( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419700] (42 bytes) sociallib::GameAPISNSWrapper::postReviewApplication(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::postReviewApplication( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419730] (42 bytes) sociallib::GameAPISNSWrapper::likeApplicationObject(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::likeApplicationObject( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419760] (42 bytes) sociallib::GameAPISNSWrapper::likeApplication(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::likeApplication( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419790] (42 bytes) sociallib::GameAPISNSWrapper::getAppId(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::getAppId(sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14197c0] (42 bytes) sociallib::GameAPISNSWrapper::getUserNames(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::getUserNames( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14197f0] (32 bytes) sociallib::GameAPISNSWrapper::isLoggedIn(void)
// bool sociallib::GameAPISNSWrapper::isLoggedIn();
// [0x1419810] (27 bytes) sociallib::GameAPISNSWrapper::logout(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::logout();
// [0x1419830] (38 bytes) sociallib::GameAPISNSWrapper::login(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::login(sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419860] (90 bytes) sociallib::GameAPISNSWrapper::getAvatar(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::getAvatar(sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14198c0] (90 bytes) sociallib::GameAPISNSWrapper::getName(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::getName(sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419920] (90 bytes) sociallib::GameAPISNSWrapper::getUid(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::getUid(sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419980] (106 bytes) sociallib::GameAPISNSWrapper::init(sociallib::SNSRequestState &)
// void *sociallib::GameAPISNSWrapper::init();
// [0x14199f0] (182 bytes) sociallib::GameAPISNSWrapper::getFriendsData(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::getFriendsData( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419ab0] (218 bytes) sociallib::GameAPISNSWrapper::onResume(void)
// char sociallib::GameAPISNSWrapper::onResume();
// [0x1419b90] (402 bytes) sociallib::GameAPISNSWrapper::getUserData(sociallib::SNSRequestState &)
// void sociallib::GameAPISNSWrapper::getUserData( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1419d30] (912 bytes) sociallib::GameAPISNSWrapper::sendGameRequestToFriends(sociallib::SNSRequestState &)
// void sociallib::GameAPISNSWrapper::sendGameRequestToFriends( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141a0c0] (418 bytes) sociallib::GameAPISNSWrapper::getFriends(sociallib::SNSRequestState &)
// void sociallib::GameAPISNSWrapper::getFriends( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141a270] (196 bytes) sociallib::GameAPISNSWrapper::postLeaderboardScore(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::postLeaderboardScore( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141a340] (172 bytes) sociallib::GameAPISNSWrapper::gotAchievement(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::gotAchievement( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141a3f0] (196 bytes) sociallib::GameAPISNSWrapper::incrementAchievement(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::incrementAchievement( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141a4c0] (172 bytes) sociallib::GameAPISNSWrapper::showLeadearboardWithId(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::showLeadearboardWithId( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141a570] (180 bytes) sociallib::GameAPISNSWrapper::postPhotoToWallWithoutDialog(sociallib::SNSRequestState &)
// int sociallib::GameAPISNSWrapper::postPhotoToWallWithoutDialog( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141a630] (1832 bytes) sociallib::GameAPISNSWrapper::postMessageToWall(sociallib::SNSRequestState &)
// char *sociallib::GameAPISNSWrapper::postMessageToWall( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141ad60] (2361 bytes) sociallib::GameAPISNSWrapper::postMessageToFriendsWall(sociallib::SNSRequestState &)
// char *sociallib::GameAPISNSWrapper::postMessageToFriendsWall( sociallib::GameAPISNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x141b6a0] (34 bytes) sociallib::GameAPISNSWrapper::showPlusOneButton(std::string const&)
// int sociallib::GameAPISNSWrapper::showPlusOneButton(int a1);
// [0x141b6d0] (66 bytes) sociallib::GameAPISNSWrapper::showPlusOneButton(std::string const&,int,int,int,int)
// int sociallib::GameAPISNSWrapper::showPlusOneButton(int a1, int a2, int a3, int a4, int a5);
// [0x141b720] (27 bytes) sociallib::GameAPISNSWrapper::hidePlusOneButton(void)
// int sociallib::GameAPISNSWrapper::hidePlusOneButton();
// [0x141b740] (45 bytes) sociallib::GameAPISNSWrapper::~GameAPISNSWrapper()
// void sociallib::GameAPISNSWrapper::~GameAPISNSWrapper(sociallib::GameAPISNSWrapper *this);
// [0x141b770] (67 bytes) sociallib::GameAPISNSWrapper::~GameAPISNSWrapper()
// void sociallib::GameAPISNSWrapper::~GameAPISNSWrapper(sociallib::GameAPISNSWrapper *this);
