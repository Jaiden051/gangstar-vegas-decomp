#pragma once
// ============================================================================
// G4_UP8Shop/lib/sociallib/decompiled/sociallib_ClientSNSInterface.h
// Library: sociallib | Module: sociallib_ClientSNSInterface
// Binary Address Span: 0x14089d0 .. 0x1413220 (166 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14089d0] (150 bytes) sociallib::ClientSNSInterface::getTime(void)
// uint64_t sociallib::ClientSNSInterface::getTime();
// [0x1408a70] (80 bytes) sociallib::ClientSNSInterface::isSnsSupported(sociallib::ClientSNSEnum)
// bool sociallib::ClientSNSInterface::isSnsSupported(int a1, int a2);
// [0x1408ac0] (69 bytes) sociallib::ClientSNSInterface::isDuplicateRequest(sociallib::ClientSNSEnum,sociallib::SNSRequestTypeEnum)
// int sociallib::ClientSNSInterface::isDuplicateRequest(int a1, int a2, int a3);
// [0x1408b10] (119 bytes) sociallib::ClientSNSInterface::setCanSendEmailMessages(void)
// void sociallib::ClientSNSInterface::setCanSendEmailMessages();
// [0x1408b90] (62 bytes) sociallib::ClientSNSInterface::getCurrentActiveRequestState(void)
// int sociallib::ClientSNSInterface::getCurrentActiveRequestState(sociallib::ClientSNSInterface *this);
// [0x1408bd0] (65 bytes) sociallib::ClientSNSInterface::getActiveLoginRequest(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getActiveLoginRequest(int a1, int a2);
// [0x1408c20] (69 bytes) sociallib::ClientSNSInterface::GetPendingRequest(sociallib::ClientSNSEnum,sociallib::SNSRequestTypeEnum)
// int sociallib::ClientSNSInterface::GetPendingRequest(int a1, int a2, int a3);
// [0x1408c70] (137 bytes) sociallib::ClientSNSInterface::bypassRequestsForSNS(sociallib::ClientSNSEnum)
// const char *sociallib::ClientSNSInterface::bypassRequestsForSNS(int a1, int a2);
// [0x1408d00] (189 bytes) sociallib::ClientSNSInterface::insertRequest(sociallib::SNSRequestState *)
// int sociallib::ClientSNSInterface::insertRequest( sociallib::ClientSNSInterface *this, sociallib::SNSRequestState *a2);
// [0x1408dc0] (103 bytes) sociallib::ClientSNSInterface::pushFrontRequest(sociallib::SNSRequestState *)
// int sociallib::ClientSNSInterface::pushFrontRequest( sociallib::ClientSNSInterface *this, sociallib::SNSRequestState *a2);
// [0x1408e30] (218 bytes) sociallib::ClientSNSInterface::pushSecondRequest(sociallib::SNSRequestState *)
// int sociallib::ClientSNSInterface::pushSecondRequest( sociallib::ClientSNSInterface *this, sociallib::SNSRequestState *a2);
// [0x1408f10] (44 bytes) sociallib::ClientSNSInterface::trackDefferedAppLink(std::string const&)
// int sociallib::ClientSNSInterface::trackDefferedAppLink(int a1, int a2);
// [0x1408f40] (763 bytes) sociallib::ClientSNSInterface::checkGlotInitAndTrackFacebook(void)
// int sociallib::ClientSNSInterface::checkGlotInitAndTrackFacebook();
// [0x1409240] (108 bytes) sociallib::ClientSNSInterface::retrieveRequestStringData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestStringData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x14092b0] (230 bytes) sociallib::ClientSNSInterface::retrieveRequestStringArrayData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestStringArrayData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x14093a0] (46 bytes) sociallib::ClientSNSInterface::retrieveRequestBoolData(void)
// int sociallib::ClientSNSInterface::retrieveRequestBoolData(sociallib::ClientSNSInterface *this);
// [0x14093d0] (106 bytes) sociallib::ClientSNSInterface::retrieveRequestCharBufferData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestCharBufferData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409440] (737 bytes) sociallib::ClientSNSInterface::retrieveRequestLeaderboardsType(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestLeaderboardsType( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409730] (51 bytes) sociallib::ClientSNSInterface::retrieveRequestIntData(void)
// int sociallib::ClientSNSInterface::retrieveRequestIntData(sociallib::ClientSNSInterface *this);
// [0x1409770] (34 bytes) sociallib::ClientSNSInterface::retrieveRequestNoData(void)
// int sociallib::ClientSNSInterface::retrieveRequestNoData(sociallib::ClientSNSInterface *this);
// [0x14097a0] (64 bytes) sociallib::ClientSNSInterface::retrieveLocaleData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveLocaleData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x14097e0] (64 bytes) sociallib::ClientSNSInterface::retrieveUidData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUidData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409820] (34 bytes) sociallib::ClientSNSInterface::retrieveFriendType(void)
// int sociallib::ClientSNSInterface::retrieveFriendType(sociallib::ClientSNSInterface *this);
// [0x1409850] (64 bytes) sociallib::ClientSNSInterface::retrieveFriendData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveFriendData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409890] (64 bytes) sociallib::ClientSNSInterface::retrieveBilateralFriendData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveBilateralFriendData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x14098d0] (34 bytes) sociallib::ClientSNSInterface::retrieveHasPermissionData(void)
// int sociallib::ClientSNSInterface::retrieveHasPermissionData(sociallib::ClientSNSInterface *this);
// [0x1409900] (64 bytes) sociallib::ClientSNSInterface::retrieveHasPermissionErrorMessage(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveHasPermissionErrorMessage( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409940] (64 bytes) sociallib::ClientSNSInterface::retrieveNameData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveNameData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409980] (64 bytes) sociallib::ClientSNSInterface::retrieveAvatarData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveAvatarData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x14099c0] (64 bytes) sociallib::ClientSNSInterface::retrieveUserAvatarData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUserAvatarData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409a00] (64 bytes) sociallib::ClientSNSInterface::retrieveAppIdData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveAppIdData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409a40] (34 bytes) sociallib::ClientSNSInterface::retrieveFriendsDataType(void)
// int sociallib::ClientSNSInterface::retrieveFriendsDataType(sociallib::ClientSNSInterface *this);
// [0x1409a70] (34 bytes) sociallib::ClientSNSInterface::retrieveLikeApplicationData(void)
// int sociallib::ClientSNSInterface::retrieveLikeApplicationData(sociallib::ClientSNSInterface *this);
// [0x1409aa0] (34 bytes) sociallib::ClientSNSInterface::retrievePostMessageToWallData(void)
// int sociallib::ClientSNSInterface::retrievePostMessageToWallData(sociallib::ClientSNSInterface *this);
// [0x1409ad0] (34 bytes) sociallib::ClientSNSInterface::retrievePostMessageToWallWithoutDialog(void)
// int sociallib::ClientSNSInterface::retrievePostMessageToWallWithoutDialog(sociallib::ClientSNSInterface *this);
// [0x1409b00] (34 bytes) sociallib::ClientSNSInterface::retrievePostMessageToFriendsWallData(void)
// int sociallib::ClientSNSInterface::retrievePostMessageToFriendsWallData(sociallib::ClientSNSInterface *this);
// [0x1409b30] (64 bytes) sociallib::ClientSNSInterface::retrieveSendGameRequestToFriendsData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveSendGameRequestToFriendsData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409b70] (34 bytes) sociallib::ClientSNSInterface::retrieveLoginData(void)
// int sociallib::ClientSNSInterface::retrieveLoginData(sociallib::ClientSNSInterface *this);
// [0x1409ba0] (34 bytes) sociallib::ClientSNSInterface::retrieveLogoutData(void)
// int sociallib::ClientSNSInterface::retrieveLogoutData(sociallib::ClientSNSInterface *this);
// [0x1409bd0] (34 bytes) sociallib::ClientSNSInterface::retrieveLostPasswordData(void)
// int sociallib::ClientSNSInterface::retrieveLostPasswordData(sociallib::ClientSNSInterface *this);
// [0x1409c00] (108 bytes) sociallib::ClientSNSInterface::retrieveUploadPhotoResponse(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUploadPhotoResponse( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409c70] (34 bytes) sociallib::ClientSNSInterface::retrieveSendMessageToData(void)
// int sociallib::ClientSNSInterface::retrieveSendMessageToData(sociallib::ClientSNSInterface *this);
// [0x1409ca0] (34 bytes) sociallib::ClientSNSInterface::retrieveGotAchievementData(void)
// int sociallib::ClientSNSInterface::retrieveGotAchievementData(sociallib::ClientSNSInterface *this);
// [0x1409cd0] (34 bytes) sociallib::ClientSNSInterface::retrievePostLeaderboardScoreData(void)
// int sociallib::ClientSNSInterface::retrievePostLeaderboardScoreData(sociallib::ClientSNSInterface *this);
// [0x1409d00] (34 bytes) sociallib::ClientSNSInterface::retrieveUserLeaderboardRankData(void)
// int sociallib::ClientSNSInterface::retrieveUserLeaderboardRankData(sociallib::ClientSNSInterface *this);
// [0x1409d30] (34 bytes) sociallib::ClientSNSInterface::retrieveUserLeaderboardScoreData(void)
// int sociallib::ClientSNSInterface::retrieveUserLeaderboardScoreData(sociallib::ClientSNSInterface *this);
// [0x1409d60] (64 bytes) sociallib::ClientSNSInterface::retrieveLeaderboardsTypesData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveLeaderboardsTypesData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409da0] (34 bytes) sociallib::ClientSNSInterface::retrieveNumberOfMatchesData(void)
// int sociallib::ClientSNSInterface::retrieveNumberOfMatchesData(sociallib::ClientSNSInterface *this);
// [0x1409dd0] (51 bytes) sociallib::ClientSNSInterface::retrievePermissionStatus(void)
// int sociallib::ClientSNSInterface::retrievePermissionStatus(sociallib::ClientSNSInterface *this);
// [0x1409e10] (45 bytes) sociallib::ClientSNSInterface::retrievePermissionForRequest(sociallib::ClientSNSEnum,sociallib::SNSRequestTypeEnum)
// int sociallib::ClientSNSInterface::retrievePermissionForRequest(int a1, int a2, int a3);
// [0x1409e40] (64 bytes) sociallib::ClientSNSInterface::retrieveValueFromCloud(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveValueFromCloud( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409e80] (64 bytes) sociallib::ClientSNSInterface::retrieveErrorData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveErrorData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1409ec0] (45 bytes) sociallib::ClientSNSInterface::getCurrentActiveSNSRequestType(void)
// int sociallib::ClientSNSInterface::getCurrentActiveSNSRequestType(sociallib::ClientSNSInterface *this);
// [0x1409ef0] (45 bytes) sociallib::ClientSNSInterface::getCurrentActiveRequestSocialNetwork(void)
// int sociallib::ClientSNSInterface::getCurrentActiveRequestSocialNetwork(sociallib::ClientSNSInterface *this);
// [0x1409f20] (39 bytes) sociallib::ClientSNSInterface::isRequestQueueEmpty(void)
// bool sociallib::ClientSNSInterface::isRequestQueueEmpty(sociallib::ClientSNSInterface *this);
// [0x1409f50] (72 bytes) sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch(sociallib::ClientSNSEnum,sociallib::SNSRequestTypeEnum)
// bool sociallib::ClientSNSInterface::isCurrentActiveSnsAndRequestTypeMatch( sociallib::ClientSNSInterface *a1, int a2, int a3);
// [0x1409fa0] (52 bytes) sociallib::ClientSNSInterface::isRequestTypeMatch(sociallib::SNSRequestTypeEnum)
// int sociallib::ClientSNSInterface::isRequestTypeMatch(sociallib::ClientSNSInterface *a1, int a2);
// [0x1409fe0] (204 bytes) sociallib::ClientSNSInterface::addErrorRequestToQueue(sociallib::ClientSNSEnum,sociallib::SNSRequestTypeEnum,std::string const&)
// int sociallib::ClientSNSInterface::addErrorRequestToQueue(int a1, int a2, int a3, int a4);
// [0x140a0b0] (64 bytes) sociallib::ClientSNSInterface::retrieveAchievementChallengeablePlayersData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveAchievementChallengeablePlayersData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a0f0] (64 bytes) sociallib::ClientSNSInterface::retrieveLeaderboardChallengeablePlayersData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveLeaderboardChallengeablePlayersData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a130] (916 bytes) sociallib::ClientSNSInterface::initSNS(sociallib::ClientSNSEnum,sociallib::SNSApiVersion)
// int sociallib::ClientSNSInterface::initSNS(int a1, int a2, int a3);
// [0x140a4d0] (573 bytes) sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestLeaderboardRowData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a710] (64 bytes) sociallib::ClientSNSInterface::retrieveAppScoreData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveAppScoreData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a750] (64 bytes) sociallib::ClientSNSInterface::retrieveUserScoreData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUserScoreData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a790] (64 bytes) sociallib::ClientSNSInterface::getLeaderboardRowData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::getLeaderboardRowData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a7d0] (134 bytes) sociallib::ClientSNSInterface::retrieveRequestLikeDataArray(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestLikeDataArray( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a860] (64 bytes) sociallib::ClientSNSInterface::retrieveUserLikesData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUserLikesData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140a8a0] (149 bytes) sociallib::ClientSNSInterface::removeAllSNSRequestsByType(sociallib::SNSRequestTypeEnum)
// int sociallib::ClientSNSInterface::removeAllSNSRequestsByType(int a1, int a2);
// [0x140a940] (149 bytes) sociallib::ClientSNSInterface::removeCurrentSNSRequestFromQueue(void)
// int sociallib::ClientSNSInterface::removeCurrentSNSRequestFromQueue(sociallib::ClientSNSInterface *this);
// [0x140a9e0] (1037 bytes) sociallib::ClientSNSInterface::cancelAllRequests(void)
// void sociallib::ClientSNSInterface::cancelAllRequests(sociallib::ClientSNSInterface *this);
// [0x140adf0] (150 bytes) sociallib::ClientSNSInterface::retrieveRequestStringMap(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestStringMap( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140ae90] (64 bytes) sociallib::ClientSNSInterface::retrieveGetApplicationDetailsData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveGetApplicationDetailsData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140aed0] (64 bytes) sociallib::ClientSNSInterface::retrieveCountry(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveCountry( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140af10] (64 bytes) sociallib::ClientSNSInterface::retrieveUserNamesData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUserNamesData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140af50] (150 bytes) sociallib::ClientSNSInterface::retrieveRequestUserDataMap(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestUserDataMap( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140aff0] (64 bytes) sociallib::ClientSNSInterface::retrieveFriendDataData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveFriendDataData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140b030] (64 bytes) sociallib::ClientSNSInterface::retrieveUserDataData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUserDataData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140b070] (64 bytes) sociallib::ClientSNSInterface::retrieveBilateralFriendDataData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveBilateralFriendDataData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x140b0b0] (2739 bytes) sociallib::ClientSNSInterface::loadDeviceConfigFromJson(Json::Value &,sociallib::SNSInterfaceDeviceEnum)
// void sociallib::ClientSNSInterface::loadDeviceConfigFromJson(int a1, Json::Value *a2, int a3);
// [0x140bb70] (3295 bytes) sociallib::ClientSNSInterface::loadSnsConfigJson(void)
// int sociallib::ClientSNSInterface::loadSnsConfigJson(sociallib::ClientSNSInterface *this);
// [0x140c850] (129 bytes) sociallib::ClientSNSInterface::setIsInitializedTrue(sociallib::ClientSNSEnum)
// void *sociallib::ClientSNSInterface::setIsInitializedTrue(int a1, int a2);
// [0x140c8e0] (129 bytes) sociallib::ClientSNSInterface::isSnsInitialized(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::isSnsInitialized(int a1, int a2);
// [0x140c970] (1268 bytes) sociallib::ClientSNSInterface::checkIfRequestCanBeMade(sociallib::ClientSNSEnum,sociallib::SNSRequestTypeEnum)
// int sociallib::ClientSNSInterface::checkIfRequestCanBeMade(int a1, int a2, int a3);
// [0x140ce70] (210 bytes) sociallib::ClientSNSInterface::showMainOverlay(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::showMainOverlay(int a1, int a2);
// [0x140cf50] (210 bytes) sociallib::ClientSNSInterface::showSignInOverlay(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::showSignInOverlay(int a1, int a2);
// [0x140d030] (210 bytes) sociallib::ClientSNSInterface::showAllLeadearboards(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::showAllLeadearboards(int a1, int a2);
// [0x140d110] (242 bytes) sociallib::ClientSNSInterface::resetAchievement(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::resetAchievement(int a1, int a2, int a3);
// [0x140d210] (210 bytes) sociallib::ClientSNSInterface::resetAchievements(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::resetAchievements(int a1, int a2);
// [0x140d2f0] (242 bytes) sociallib::ClientSNSInterface::gotAchievement(sociallib::ClientSNSEnum,std::string)
// int sociallib::ClientSNSInterface::gotAchievement(int a1, int a2, int a3);
// [0x140d3f0] (258 bytes) sociallib::ClientSNSInterface::incrementAchievement(sociallib::ClientSNSEnum,std::string,int)
// int sociallib::ClientSNSInterface::incrementAchievement(int a1, int a2, int a3, char a4);
// [0x140d500] (242 bytes) sociallib::ClientSNSInterface::showLeadearboardById(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::showLeadearboardById(int a1, int a2, int a3);
// [0x140d600] (242 bytes) sociallib::ClientSNSInterface::selectLeaderboardChallengeablePlayers(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::selectLeaderboardChallengeablePlayers(int a1, int a2, int a3);
// [0x140d700] (274 bytes) sociallib::ClientSNSInterface::issueLeaderboardChallenge(sociallib::ClientSNSEnum,std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&)
// int sociallib::ClientSNSInterface::issueLeaderboardChallenge( int a1, int a2, int a3, const std::vector<std::string> *a4, int a5);
// [0x140d820] (258 bytes) sociallib::ClientSNSInterface::selectAchievementChallengeablePlayers(sociallib::ClientSNSEnum,std::string,std::vector<std::string,std::allocator<std::string>>)
// int sociallib::ClientSNSInterface::selectAchievementChallengeablePlayers( int a1, int a2, int a3, const std::vector<std::string> *a4);
// [0x140d930] (274 bytes) sociallib::ClientSNSInterface::issueAchievementChallenge(sociallib::ClientSNSEnum,std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&)
// int sociallib::ClientSNSInterface::issueAchievementChallenge( int a1, int a2, int a3, const std::vector<std::string> *a4, int a5);
// [0x140da50] (210 bytes) sociallib::ClientSNSInterface::showAchievements(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::showAchievements(int a1, int a2);
// [0x140db30] (299 bytes) sociallib::ClientSNSInterface::postLeaderboardScore(sociallib::ClientSNSEnum,unsigned int,long long,bool)
// int sociallib::ClientSNSInterface::postLeaderboardScore(int a1, int a2, char a3, int64_t a4, bool a5);
// [0x140dc60] (290 bytes) sociallib::ClientSNSInterface::getLeaderboardRows(sociallib::ClientSNSEnum,unsigned int,unsigned int,unsigned int,unsigned int)
// int sociallib::ClientSNSInterface::getLeaderboardRows(int a1, int a2, char a3, char a4, char a5, char a6);
// [0x140dd90] (283 bytes) sociallib::ClientSNSInterface::getAllAchievements(sociallib::ClientSNSEnum,unsigned int,unsigned int,bool)
// int sociallib::ClientSNSInterface::getAllAchievements(int a1, int a2, char a3, char a4, bool a5);
// [0x140deb0] (210 bytes) sociallib::ClientSNSInterface::getApplicationDetails(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getApplicationDetails(int a1, int a2);
// [0x140df90] (242 bytes) sociallib::ClientSNSInterface::getValueFromCloud(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::getValueFromCloud(int a1, int a2, int a3);
// [0x140e090] (258 bytes) sociallib::ClientSNSInterface::saveOnCloud(sociallib::ClientSNSEnum,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::saveOnCloud(int a1, int a2, int a3, int a4);
// [0x140e1a0] (210 bytes) sociallib::ClientSNSInterface::getNumberOfMatches(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getNumberOfMatches(int a1, int a2);
// [0x140e280] (242 bytes) sociallib::ClientSNSInterface::getUserAchievements(sociallib::ClientSNSEnum,std::string)
// int sociallib::ClientSNSInterface::getUserAchievements(int a1, int a2, int a3);
// [0x140e380] (210 bytes) sociallib::ClientSNSInterface::deleteScore(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::deleteScore(int a1, int a2);
// [0x140e460] (242 bytes) sociallib::ClientSNSInterface::updateScore(sociallib::ClientSNSEnum,unsigned int)
// int sociallib::ClientSNSInterface::updateScore(int a1, int a2, char a3);
// [0x140e560] (242 bytes) sociallib::ClientSNSInterface::getAppScores(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::getAppScores(int a1, int a2, int a3);
// [0x140e660] (242 bytes) sociallib::ClientSNSInterface::getUserScore(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::getUserScore(int a1, int a2, int a3);
// [0x140e760] (210 bytes) sociallib::ClientSNSInterface::getLeaderboardsTypes(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getLeaderboardsTypes(int a1, int a2);
// [0x140e840] (210 bytes) sociallib::ClientSNSInterface::getUserLeaderboardScore(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getUserLeaderboardScore(int a1, int a2);
// [0x140e920] (210 bytes) sociallib::ClientSNSInterface::getUserLeaderboardRank(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getUserLeaderboardRank(int a1, int a2);
// [0x140ea00] (299 bytes) sociallib::ClientSNSInterface::postLeaderboardScore(sociallib::ClientSNSEnum,std::string const&,int,bool,unsigned int)
// int sociallib::ClientSNSInterface::postLeaderboardScore(int a1, int a2, int a3, char a4, bool a5, char a6);
// [0x140eb30] (242 bytes) sociallib::ClientSNSInterface::gotAchievement(sociallib::ClientSNSEnum,int)
// int sociallib::ClientSNSInterface::gotAchievement(int a1, int a2, char a3);
// [0x140ec30] (309 bytes) sociallib::ClientSNSInterface::sendMessageTo(sociallib::ClientSNSEnum,std::string const&,std::vector<std::string,std::allocator<std::string>>,std::string const&,bool,sociallib::SNSMessageTypeEnum)
// int sociallib::ClientSNSInterface::sendMessageTo( sociallib::ClientSNSInterface *a1, int a2, int a3, const std::vector<std::string> *a4, int a5, char a6, char a7);
// [0x140ed70] (268 bytes) sociallib::ClientSNSInterface::uploadPhoto(sociallib::ClientSNSEnum,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::uploadPhoto(int a1, int a2, int a3, int a4);
// [0x140ee80] (210 bytes) sociallib::ClientSNSInterface::sendLostPassword(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::sendLostPassword(int a1, int a2);
// [0x140ef60] (172 bytes) sociallib::ClientSNSInterface::logout(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::logout(sociallib::ClientSNSInterface *a1, int a2);
// [0x140f010] (172 bytes) sociallib::ClientSNSInterface::login(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::login(sociallib::ClientSNSInterface *a1, int a2);
// [0x140f0c0] (256 bytes) sociallib::ClientSNSInterface::sendGameRequestToFriends(sociallib::ClientSNSEnum,std::vector<std::string,std::allocator<std::string>> const&,std::string const&,std::vector<std::string,std::allocator<std::string>> const&,std::string const&)
// int sociallib::ClientSNSInterface::sendGameRequestToFriends( sociallib::ClientSNSInterface *a1, int a2, const std::vector<std::string> *a3, int a4, const std::vector<std::string> *a5, int a6);
// [0x140f1c0] (240 bytes) sociallib::ClientSNSInterface::sendGameRequestToFriends(sociallib::ClientSNSEnum,std::vector<std::string,std::allocator<std::string>> const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::sendGameRequestToFriends( sociallib::ClientSNSInterface *a1, int a2, const std::vector<std::string> *a3, int a4, int a5);
// [0x140f2b0] (242 bytes) sociallib::ClientSNSInterface::addFriend(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::addFriend(int a1, int a2, int a3);
// [0x140f3b0] (290 bytes) sociallib::ClientSNSInterface::UploadVideoFile(sociallib::ClientSNSEnum,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::UploadVideoFile(int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x140f4e0] (290 bytes) sociallib::ClientSNSInterface::postOpenGraphAction(sociallib::ClientSNSEnum,std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postOpenGraphAction(int a1, int a2, int a3, int a4, int a5, int a6);
// [0x140f610] (322 bytes) sociallib::ClientSNSInterface::postMessageToFriendsWallWithoutDialog(sociallib::ClientSNSEnum,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postMessageToFriendsWallWithoutDialog( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8);
// [0x140f760] (338 bytes) sociallib::ClientSNSInterface::postMessageToFriendsWall(sociallib::ClientSNSEnum,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postMessageToFriendsWall( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x140f8c0] (261 bytes) sociallib::ClientSNSInterface::postPhotoToWallWithoutDialog(sociallib::ClientSNSEnum,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postPhotoToWallWithoutDialog(int a1, int a2, int a3, int a4);
// [0x140f9d0] (356 bytes) sociallib::ClientSNSInterface::postMessageToWallWithoutDialog(sociallib::SNSFeedBuilder const&)
// int sociallib::ClientSNSInterface::postMessageToWallWithoutDialog(int a1, int *a2);
// [0x140fb40] (338 bytes) sociallib::ClientSNSInterface::postMessageToWallWithoutDialog(sociallib::ClientSNSEnum,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postMessageToWallWithoutDialog( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x140fca0] (356 bytes) sociallib::ClientSNSInterface::postMessageToWall(sociallib::SNSFeedBuilder const&)
// int sociallib::ClientSNSInterface::postMessageToWall(int a1, int *a2);
// [0x140fe10] (382 bytes) sociallib::ClientSNSInterface::postMessageToFriendsWall(std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postMessageToFriendsWall( int a1, int a2, int a3, int a4, int a5, int a6, int a7);
// [0x140ff90] (350 bytes) sociallib::ClientSNSInterface::postMessageToWall(std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postMessageToWall(int a1, int a2, int a3, int a4, int a5);
// [0x14100f0] (258 bytes) sociallib::ClientSNSInterface::postReviewApplication(sociallib::ClientSNSEnum,int,std::string const&)
// int sociallib::ClientSNSInterface::postReviewApplication(int a1, int a2, char a3, int a4);
// [0x1410200] (308 bytes) sociallib::ClientSNSInterface::getUserLikes(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::getUserLikes(int a1, int a2, uint32_t *a3);
// [0x1410340] (242 bytes) sociallib::ClientSNSInterface::likeApplicationObject(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::likeApplicationObject(int a1, int a2, int a3);
// [0x1410440] (210 bytes) sociallib::ClientSNSInterface::likeApplication(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::likeApplication(int a1, int a2);
// [0x1410520] (300 bytes) sociallib::ClientSNSInterface::getFriendsData(sociallib::ClientSNSEnum,sociallib::FriendTypeEnum,int,int,bool)
// int sociallib::ClientSNSInterface::getFriendsData(int a1, int a2, int a3, char a4, char a5, char a6);
// [0x1410650] (210 bytes) sociallib::ClientSNSInterface::getAppId(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getAppId(int a1, int a2);
// [0x1410730] (242 bytes) sociallib::ClientSNSInterface::getUserAvatar(sociallib::ClientSNSEnum,std::string)
// int sociallib::ClientSNSInterface::getUserAvatar(int a1, int a2, int a3);
// [0x1410830] (220 bytes) sociallib::ClientSNSInterface::getAvatar(sociallib::ClientSNSEnum,sociallib::SNSAvatarSizeEnum)
// int sociallib::ClientSNSInterface::getAvatar(int a1, int a2, int a3);
// [0x1410910] (283 bytes) sociallib::ClientSNSInterface::getCountry(sociallib::ClientSNSEnum,std::string,std::string,bool)
// int sociallib::ClientSNSInterface::getCountry(int a1, int a2, int a3, int a4, bool a5);
// [0x1410a30] (210 bytes) sociallib::ClientSNSInterface::getName(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getName(int a1, int a2);
// [0x1410b10] (242 bytes) sociallib::ClientSNSInterface::getUserNames(sociallib::ClientSNSEnum,std::vector<std::string,std::allocator<std::string>> const&)
// int sociallib::ClientSNSInterface::getUserNames(int a1, int a2, const std::vector<std::string> *a3);
// [0x1410c10] (325 bytes) sociallib::ClientSNSInterface::getUserData(sociallib::ClientSNSEnum,std::vector<std::string,std::allocator<std::string>> const&,bool)
// int sociallib::ClientSNSInterface::getUserData(int a1, int a2, const std::vector<std::string> *a3, char a4);
// [0x1410d60] (304 bytes) sociallib::ClientSNSInterface::requestPermissions(sociallib::ClientSNSEnum,sociallib::SNS_PERMISSION)
// int sociallib::ClientSNSInterface::requestPermissions(int a1, int a2, int a3);
// [0x1410e90] (217 bytes) sociallib::ClientSNSInterface::hasPermission(sociallib::ClientSNSEnum,sociallib::SNS_PERMISSION)
// int sociallib::ClientSNSInterface::hasPermission(int a1, int a2, int a3);
// [0x1410f70] (300 bytes) sociallib::ClientSNSInterface::getBilateralFriendsData(sociallib::ClientSNSEnum,int,int,int,bool)
// int sociallib::ClientSNSInterface::getBilateralFriendsData(int a1, int a2, char a3, char a4, char a5, char a6);
// [0x14110a0] (288 bytes) sociallib::ClientSNSInterface::getBilateralFriends(sociallib::ClientSNSEnum,int,int,int)
// int sociallib::ClientSNSInterface::getBilateralFriends(int a1, int a2, char a3, char a4, char a5);
// [0x14111c0] (272 bytes) sociallib::ClientSNSInterface::getFriends(sociallib::ClientSNSEnum,sociallib::FriendTypeEnum,std::vector<std::string,std::allocator<std::string>>)
// int sociallib::ClientSNSInterface::getFriends(int a1, int a2, int a3, const std::vector<std::string> *a4);
// [0x14112d0] (210 bytes) sociallib::ClientSNSInterface::getUserLocale(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getUserLocale(int a1, int a2);
// [0x14113b0] (210 bytes) sociallib::ClientSNSInterface::getUid(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::getUid(int a1, int a2);
// [0x1411490] (241 bytes) sociallib::ClientSNSInterface::updateAllSNSWrappers(void)
// char sociallib::ClientSNSInterface::updateAllSNSWrappers(sociallib::ClientSNSInterface *this);
// [0x1411590] (1403 bytes) sociallib::ClientSNSInterface::~ClientSNSInterface()
// void sociallib::ClientSNSInterface::~ClientSNSInterface(sociallib::ClientSNSInterface *this);
// [0x1411b10] (56 bytes) sociallib::ClientSNSInterface::~ClientSNSInterface()
// void sociallib::ClientSNSInterface::~ClientSNSInterface(sociallib::ClientSNSInterface *this);
// [0x1411b50] (2002 bytes) sociallib::ClientSNSInterface::ClientSNSInterface(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::ClientSNSInterface( sociallib::ClientSNSInterface *this);
// [0x1412330] (151 bytes) sociallib::ClientSNSInterface::SetApiVersion(sociallib::ClientSNSEnum,sociallib::SNSApiVersion)
// int sociallib::ClientSNSInterface::SetApiVersion(int a1, int a2, int a3);
// [0x14123d0] (160 bytes) sociallib::ClientSNSInterface::getFacebookAccessToken(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::getFacebookAccessToken( sociallib::ClientSNSInterface *this, int a2);
// [0x1412470] (200 bytes) sociallib::ClientSNSInterface::handleOpenUrl(sociallib::ClientSNSEnum,std::string const&)
// int sociallib::ClientSNSInterface::handleOpenUrl(int a1, int a2, uint32_t *a3);
// [0x1412540] (230 bytes) sociallib::ClientSNSInterface::SetLocale(sociallib::ClientSNSEnum,std::string)
// char sociallib::ClientSNSInterface::SetLocale(int a1, int a2, int a3);
// [0x1412630] (392 bytes) sociallib::ClientSNSInterface::postMessageToWall(sociallib::ClientSNSEnum,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int sociallib::ClientSNSInterface::postMessageToWall( int a1, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9);
// [0x14127c0] (1225 bytes) sociallib::ClientSNSInterface::update(void)
// bool sociallib::ClientSNSInterface::update(sociallib::ClientSNSInterface *this);
// [0x1412c90] (276 bytes) sociallib::ClientSNSInterface::isLoggedIn(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::isLoggedIn(int a1, int a2);
// [0x1412db0] (255 bytes) sociallib::ClientSNSInterface::GetAccessToken(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::GetAccessToken(int a1, int a2, int a3);
// [0x1412eb0] (255 bytes) sociallib::ClientSNSInterface::GetSecret(sociallib::ClientSNSEnum)
// int sociallib::ClientSNSInterface::GetSecret(int a1, int a2, int a3);
// [0x1412fb0] (239 bytes) sociallib::ClientSNSInterface::getRequestStateCopy(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::getRequestStateCopy( sociallib::ClientSNSInterface *this, int a2);
// [0x14130a0] (379 bytes) sociallib::ClientSNSInterface::retrieveRequestAchievementData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveRequestAchievementData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
// [0x1413220] (64 bytes) sociallib::ClientSNSInterface::retrieveUserAchievementsData(void)
// sociallib::ClientSNSInterface *sociallib::ClientSNSInterface::retrieveUserAchievementsData( sociallib::ClientSNSInterface *this, sociallib::ClientSNSInterface *a2);
