#pragma once
// ============================================================================
// G4_UP8Shop/lib/sociallib/decompiled/sociallib_SNSWrapperBase.h
// Library: sociallib | Module: sociallib_SNSWrapperBase
// Binary Address Span: 0x141d020 .. 0x141e9a0 (82 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x141d020] (27 bytes) sociallib::SNSWrapperBase::~SNSWrapperBase()
// void sociallib::SNSWrapperBase::~SNSWrapperBase(sociallib::SNSWrapperBase *this);
// [0x141d040] (9 bytes) sociallib::SNSWrapperBase::SetLocale(std::string)
// void sociallib::SNSWrapperBase::SetLocale();
// [0x141d050] (9 bytes) sociallib::SNSWrapperBase::isLoggedIn(void)
// int sociallib::SNSWrapperBase::isLoggedIn();
// [0x141d060] (9 bytes) sociallib::SNSWrapperBase::update(void)
// void sociallib::SNSWrapperBase::update();
// [0x141d070] (9 bytes) sociallib::SNSWrapperBase::onResume(void)
// void sociallib::SNSWrapperBase::onResume();
// [0x141d080] (9 bytes) sociallib::SNSWrapperBase::handleOpenUrl(std::string const&)
// int sociallib::SNSWrapperBase::handleOpenUrl();
// [0x141d090] (9 bytes) sociallib::SNSWrapperBase::SetApiVersion(sociallib::SNSApiVersion)
// void sociallib::SNSWrapperBase::SetApiVersion();
// [0x141d0a0] (70 bytes) sociallib::SNSWrapperBase::GetSecret(void)
// sociallib::SNSWrapperBase *sociallib::SNSWrapperBase::GetSecret(sociallib::SNSWrapperBase *this);
// [0x141d0f0] (70 bytes) sociallib::SNSWrapperBase::GetAccessToken(void)
// sociallib::SNSWrapperBase *sociallib::SNSWrapperBase::GetAccessToken(sociallib::SNSWrapperBase *this);
// [0x141d140] (76 bytes) sociallib::SNSWrapperBase::getName(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getName(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d190] (56 bytes) sociallib::SNSWrapperBase::~SNSWrapperBase()
// void sociallib::SNSWrapperBase::~SNSWrapperBase(sociallib::SNSWrapperBase *this);
// [0x141d220] (76 bytes) sociallib::SNSWrapperBase::getAppId(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getAppId(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d270] (76 bytes) sociallib::SNSWrapperBase::getUserAvatar(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserAvatar(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d2c0] (76 bytes) sociallib::SNSWrapperBase::getAvatar(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getAvatar(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d310] (76 bytes) sociallib::SNSWrapperBase::getCountry(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getCountry(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d360] (27 bytes) sociallib::SNSWrapperBase::SNSWrapperBase(void)
// sociallib::SNSWrapperBase *sociallib::SNSWrapperBase::SNSWrapperBase(sociallib::SNSWrapperBase *this);
// [0x141d380] (9 bytes) sociallib::SNSWrapperBase::doNothing(sociallib::SNSRequestState &)
// void sociallib::SNSWrapperBase::doNothing();
// [0x141d390] (598 bytes) sociallib::SNSWrapperBase::requestNotSupported(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::requestNotSupported( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d5f0] (42 bytes) sociallib::SNSWrapperBase::ShowMainOverlay(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::ShowMainOverlay(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d620] (42 bytes) sociallib::SNSWrapperBase::ShowSignInOverlay(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::ShowSignInOverlay( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d650] (42 bytes) sociallib::SNSWrapperBase::onNewCloudData(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::onNewCloudData(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d680] (42 bytes) sociallib::SNSWrapperBase::getValueFromCloud(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getValueFromCloud( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d6b0] (42 bytes) sociallib::SNSWrapperBase::saveOnCloud(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::saveOnCloud(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d6e0] (42 bytes) sociallib::SNSWrapperBase::getAllAchievements(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getAllAchievements( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d710] (42 bytes) sociallib::SNSWrapperBase::showAllLeadearboards(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::showAllLeadearboards( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d740] (42 bytes) sociallib::SNSWrapperBase::showLeadearboardWithId(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::showLeadearboardWithId( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d770] (42 bytes) sociallib::SNSWrapperBase::resetAchievement(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::resetAchievement( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d7a0] (42 bytes) sociallib::SNSWrapperBase::resetAchievements(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::resetAchievements( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d7d0] (42 bytes) sociallib::SNSWrapperBase::incrementAchievement(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::incrementAchievement( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d800] (42 bytes) sociallib::SNSWrapperBase::unlockAchievements(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::unlockAchievements( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d830] (42 bytes) sociallib::SNSWrapperBase::showAchievements(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::showAchievements( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d860] (42 bytes) sociallib::SNSWrapperBase::getNumberOfMatches(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getNumberOfMatches( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d890] (42 bytes) sociallib::SNSWrapperBase::getUserAchievements(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserAchievements( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d8c0] (42 bytes) sociallib::SNSWrapperBase::deleteScore(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::deleteScore(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d8f0] (42 bytes) sociallib::SNSWrapperBase::updateScore(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::updateScore(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d920] (42 bytes) sociallib::SNSWrapperBase::getAppScores(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getAppScores(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d950] (42 bytes) sociallib::SNSWrapperBase::getUserScore(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserScore(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d980] (42 bytes) sociallib::SNSWrapperBase::getApplicationDetails(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getApplicationDetails( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d9b0] (42 bytes) sociallib::SNSWrapperBase::getLeaderboardsTypes(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getLeaderboardsTypes( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141d9e0] (42 bytes) sociallib::SNSWrapperBase::getUserLeaderboardScore(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserLeaderboardScore( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141da10] (42 bytes) sociallib::SNSWrapperBase::getUserLeaderboardRank(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserLeaderboardRank( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141da40] (42 bytes) sociallib::SNSWrapperBase::postLeaderboardScore(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postLeaderboardScore( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141da70] (42 bytes) sociallib::SNSWrapperBase::getLeaderboardRows(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getLeaderboardRows( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141daa0] (42 bytes) sociallib::SNSWrapperBase::selectLeaderboardChallengeablePlayers(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::selectLeaderboardChallengeablePlayers( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dad0] (42 bytes) sociallib::SNSWrapperBase::issueLeaderboardChallenge(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::issueLeaderboardChallenge( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141db00] (42 bytes) sociallib::SNSWrapperBase::gotAchievement(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::gotAchievement(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141db30] (42 bytes) sociallib::SNSWrapperBase::selectAchievementChallengeablePlayers(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::selectAchievementChallengeablePlayers( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141db60] (42 bytes) sociallib::SNSWrapperBase::issueAchievementChallenge(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::issueAchievementChallenge( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141db90] (42 bytes) sociallib::SNSWrapperBase::sendMessageTo(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::sendMessageTo(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dbc0] (42 bytes) sociallib::SNSWrapperBase::sendLostPassword(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::sendLostPassword( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dbf0] (42 bytes) sociallib::SNSWrapperBase::sendGameRequestToFriends(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::sendGameRequestToFriends( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dc20] (42 bytes) sociallib::SNSWrapperBase::postOpenGraphAction(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postOpenGraphAction( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dc50] (42 bytes) sociallib::SNSWrapperBase::uploadPhoto(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::uploadPhoto(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dc80] (42 bytes) sociallib::SNSWrapperBase::postMessageToFriendsWallWithoutDialog(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postMessageToFriendsWallWithoutDialog( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dcb0] (42 bytes) sociallib::SNSWrapperBase::postPhotoToWallWithoutDialog(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postPhotoToWallWithoutDialog( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dce0] (42 bytes) sociallib::SNSWrapperBase::postMessageToFriendsWall(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postMessageToFriendsWall( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dd10] (42 bytes) sociallib::SNSWrapperBase::postMessageToWallWithoutDialog(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postMessageToWallWithoutDialog( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dd40] (42 bytes) sociallib::SNSWrapperBase::postReviewApplication(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postReviewApplication( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dd70] (42 bytes) sociallib::SNSWrapperBase::getUserLikes(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserLikes(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dda0] (42 bytes) sociallib::SNSWrapperBase::likeApplicationObject(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::likeApplicationObject( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141ddd0] (42 bytes) sociallib::SNSWrapperBase::likeApplication(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::likeApplication(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141de00] (42 bytes) sociallib::SNSWrapperBase::requestPermissions(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::requestPermissions( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141de30] (42 bytes) sociallib::SNSWrapperBase::hasPermission(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::hasPermission(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141de60] (42 bytes) sociallib::SNSWrapperBase::addFriend(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::addFriend(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141de90] (42 bytes) sociallib::SNSWrapperBase::getBilateralFriendsData(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getBilateralFriendsData( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dec0] (42 bytes) sociallib::SNSWrapperBase::getBilateralFriends(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getBilateralFriends( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141def0] (42 bytes) sociallib::SNSWrapperBase::getFriendsData(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getFriendsData(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141df20] (42 bytes) sociallib::SNSWrapperBase::getFriends(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getFriends(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141df50] (42 bytes) sociallib::SNSWrapperBase::logout(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::logout(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141df80] (42 bytes) sociallib::SNSWrapperBase::getUserLocale(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserLocale(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dfb0] (42 bytes) sociallib::SNSWrapperBase::login(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::login(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141dfe0] (42 bytes) sociallib::SNSWrapperBase::postMessageToWall(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::postMessageToWall( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e010] (42 bytes) sociallib::SNSWrapperBase::getUserNames(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserNames(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e040] (42 bytes) sociallib::SNSWrapperBase::getUserData(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUserData(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e070] (42 bytes) sociallib::SNSWrapperBase::getUid(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::getUid(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e0a0] (42 bytes) sociallib::SNSWrapperBase::init(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::init(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e0d0] (42 bytes) sociallib::SNSWrapperBase::UploadVideoFile(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::UploadVideoFile(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e100] (378 bytes) sociallib::SNSWrapperBase::snsNotSupported(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::snsNotSupported(sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e280] (598 bytes) sociallib::SNSWrapperBase::emptyUidListError(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::emptyUidListError( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e4e0] (598 bytes) sociallib::SNSWrapperBase::isHtmlUnsupportedError(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::isHtmlUnsupportedError( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e740] (598 bytes) sociallib::SNSWrapperBase::stringParamConversionToIntError(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::stringParamConversionToIntError( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
// [0x141e9a0] (598 bytes) sociallib::SNSWrapperBase::notLoggedInError(sociallib::SNSRequestState &)
// int sociallib::SNSWrapperBase::notLoggedInError( sociallib::SNSWrapperBase *this, sociallib::SNSRequestState *a2);
