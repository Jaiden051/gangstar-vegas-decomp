#pragma once
// ============================================================================
// G4_UP8Shop/lib/sociallib/decompiled/sociallib_FacebookSNSWrapper.h
// Library: sociallib | Module: sociallib_FacebookSNSWrapper
// Binary Address Span: 0x1420d60 .. 0x1423e60 (50 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1420d60] (9 bytes) sociallib::FacebookSNSWrapper::handleOpenUrl(std::string const&)
// int sociallib::FacebookSNSWrapper::handleOpenUrl();
// [0x1420d70] (41 bytes) sociallib::FacebookSNSWrapper::GetSecret(void)
// sociallib::FacebookSNSWrapper *sociallib::FacebookSNSWrapper::GetSecret( sociallib::FacebookSNSWrapper *this, int a2);
// [0x1420da0] (14 bytes) sociallib::FacebookSNSWrapper::SetApiVersion(sociallib::SNSApiVersion)
// int sociallib::FacebookSNSWrapper::SetApiVersion(int a1, int a2);
// [0x1420db0] (45 bytes) sociallib::FacebookSNSWrapper::SetLocale(std::string)
// int sociallib::FacebookSNSWrapper::SetLocale(int a1, int a2);
// [0x1420de0] (27 bytes) sociallib::FacebookSNSWrapper::getApplicationDetails(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getApplicationDetails();
// [0x1420e00] (56 bytes) sociallib::FacebookSNSWrapper::GetAccessToken(void)
// sociallib::FacebookSNSWrapper *sociallib::FacebookSNSWrapper::GetAccessToken( sociallib::FacebookSNSWrapper *this);
// [0x1420e40] (32 bytes) sociallib::FacebookSNSWrapper::isLoggedIn(void)
// bool sociallib::FacebookSNSWrapper::isLoggedIn();
// [0x1420e60] (27 bytes) sociallib::FacebookSNSWrapper::logout(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::logout();
// [0x1420e80] (38 bytes) sociallib::FacebookSNSWrapper::login(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::login(sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1420eb0] (42 bytes) sociallib::FacebookSNSWrapper::postMessageToFriendsWallWithoutDialog(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::postMessageToFriendsWallWithoutDialog( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1420ee0] (42 bytes) sociallib::FacebookSNSWrapper::postMessageToFriendsWall(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::postMessageToFriendsWall( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1420f10] (42 bytes) sociallib::FacebookSNSWrapper::postReviewApplication(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::postReviewApplication( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1420f40] (42 bytes) sociallib::FacebookSNSWrapper::likeApplicationObject(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::likeApplicationObject( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1420f70] (42 bytes) sociallib::FacebookSNSWrapper::likeApplication(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::likeApplication( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1420fa0] (27 bytes) sociallib::FacebookSNSWrapper::getAppId(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getAppId();
// [0x1420fc0] (90 bytes) sociallib::FacebookSNSWrapper::getAvatar(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getAvatar( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1421020] (90 bytes) sociallib::FacebookSNSWrapper::getName(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getName(sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1421080] (90 bytes) sociallib::FacebookSNSWrapper::getUid(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getUid(sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14210e0] (90 bytes) sociallib::FacebookSNSWrapper::getUserLocale(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getUserLocale( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1421140] (218 bytes) sociallib::FacebookSNSWrapper::onResume(void)
// char sociallib::FacebookSNSWrapper::onResume();
// [0x1421220] (1256 bytes) sociallib::FacebookSNSWrapper::postMessageToWall(sociallib::SNSRequestState &)
// char *sociallib::FacebookSNSWrapper::postMessageToWall(char **this, sociallib::SNSRequestState *a2);
// [0x1421710] (596 bytes) sociallib::FacebookSNSWrapper::sendGameRequestToFriends(sociallib::SNSRequestState &)
// void sociallib::FacebookSNSWrapper::sendGameRequestToFriends( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1421970] (517 bytes) sociallib::FacebookSNSWrapper::getUserNames(sociallib::SNSRequestState &)
// void sociallib::FacebookSNSWrapper::getUserNames( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1421b80] (517 bytes) sociallib::FacebookSNSWrapper::getUserData(sociallib::SNSRequestState &)
// void sociallib::FacebookSNSWrapper::getUserData( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1421d90] (12 bytes) sociallib::FacebookSNSWrapper::GetApiVersion(void)
// int sociallib::FacebookSNSWrapper::GetApiVersion(sociallib::FacebookSNSWrapper *this);
// [0x1421da0] (119 bytes) sociallib::FacebookSNSWrapper::SetErrorForRequest(sociallib::SNSRequestState *,std::string const&)
// int sociallib::FacebookSNSWrapper::SetErrorForRequest(uint32_t *a1, int a2);
// [0x1421e20] (83 bytes) sociallib::FacebookSNSWrapper::SetPermissionError(sociallib::SNSRequestState &,sociallib::SNS_PERMISSION_STATUS,std::string const&)
// int sociallib::FacebookSNSWrapper::SetPermissionError(uint32_t *a1, int a2, int a3);
// [0x1421e80] (13 bytes) sociallib::FacebookSNSWrapper::IsReadPermission(sociallib::SNS_PERMISSION)
// bool sociallib::FacebookSNSWrapper::IsReadPermission(int a1, int a2);
// [0x1421e90] (1772 bytes) sociallib::FacebookSNSWrapper::initPermissionsMap(void)
// int sociallib::FacebookSNSWrapper::initPermissionsMap();
// [0x1422580] (154 bytes) sociallib::FacebookSNSWrapper::init(sociallib::SNSRequestState &)
// void *sociallib::FacebookSNSWrapper::init(sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422620] (335 bytes) sociallib::FacebookSNSWrapper::GetPermissionsValue(sociallib::SNS_PERMISSION)
// uint32_t *sociallib::FacebookSNSWrapper::GetPermissionsValue(int a1, int a2);
// [0x1422770] (458 bytes) sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::CheckIfRequestCanBeMade( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422940] (200 bytes) sociallib::FacebookSNSWrapper::resetAchievement(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::resetAchievement( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422a10] (200 bytes) sociallib::FacebookSNSWrapper::gotAchievement(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::gotAchievement( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422ae0] (335 bytes) sociallib::FacebookSNSWrapper::getUserAchievements(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getUserAchievements( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422c30] (103 bytes) sociallib::FacebookSNSWrapper::deleteScore(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::deleteScore( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422ca0] (150 bytes) sociallib::FacebookSNSWrapper::updateScore(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::updateScore( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422d40] (200 bytes) sociallib::FacebookSNSWrapper::getUserScore(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getUserScore( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422e10] (478 bytes) sociallib::FacebookSNSWrapper::postOpenGraphAction(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::postOpenGraphAction( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1422ff0] (207 bytes) sociallib::FacebookSNSWrapper::postPhotoToWallWithoutDialog(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::postPhotoToWallWithoutDialog( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14230c0] (1223 bytes) sociallib::FacebookSNSWrapper::postMessageToWallWithoutDialog(sociallib::SNSRequestState &)
// char *sociallib::FacebookSNSWrapper::postMessageToWallWithoutDialog( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1423590] (570 bytes) sociallib::FacebookSNSWrapper::UploadVideoFile(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::UploadVideoFile( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14237d0] (157 bytes) sociallib::FacebookSNSWrapper::getUserLikes(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getUserLikes( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1423870] (307 bytes) sociallib::FacebookSNSWrapper::getFriendsData(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getFriendsData( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x14239b0] (236 bytes) sociallib::FacebookSNSWrapper::getFriends(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getFriends( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1423aa0] (344 bytes) sociallib::FacebookSNSWrapper::getAppScores(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::getAppScores( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1423c00] (166 bytes) sociallib::FacebookSNSWrapper::requestPermissions(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::requestPermissions( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1423cb0] (174 bytes) sociallib::FacebookSNSWrapper::hasPermission(sociallib::SNSRequestState &)
// int sociallib::FacebookSNSWrapper::hasPermission( sociallib::FacebookSNSWrapper *this, sociallib::SNSRequestState *a2);
// [0x1423de0] (121 bytes) sociallib::FacebookSNSWrapper::~FacebookSNSWrapper()
// void sociallib::FacebookSNSWrapper::~FacebookSNSWrapper(void ***this);
// [0x1423e60] (129 bytes) sociallib::FacebookSNSWrapper::~FacebookSNSWrapper()
// void sociallib::FacebookSNSWrapper::~FacebookSNSWrapper(void ***this);
