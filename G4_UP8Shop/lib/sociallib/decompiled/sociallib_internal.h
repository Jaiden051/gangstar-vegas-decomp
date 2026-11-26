#pragma once
// ============================================================================
// G4_UP8Shop/lib/sociallib/decompiled/sociallib_internal.h
// Library: sociallib | Module: sociallib_internal
// Binary Address Span: 0x142e980 .. 0x1449a90 (98 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x142e980] (220 bytes) sub_142E980
// int sub_142E980();
// [0x142ea60] (1657 bytes) sub_142EA60
// void sub_142EA60();
// [0x142f0e0] (52 bytes) Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeInit
// int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeInit(int a1, int a2);
// [0x142f120] (106 bytes) Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogSetCancel
// int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogSetCancel();
// [0x142f190] (380 bytes) Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeTrackDeferredAppLink
// int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeTrackDeferredAppLink( int a1, int a2, int a3);
// [0x142f310] (119 bytes) setErrorForRequest(sociallib::SNSRequestState *,std::string const&)
// int setErrorForRequest(uint32_t *a1, int a2);
// [0x142f390] (318 bytes) facebookAndroidGLSocialLib_init(void)
// int facebookAndroidGLSocialLib_init();
// [0x142f4d0] (181 bytes) facebookAndroidGLSocialLib_login(void)
// int facebookAndroidGLSocialLib_login();
// [0x142f590] (181 bytes) facebookAndroidGLSocialLib_logout(void)
// int facebookAndroidGLSocialLib_logout();
// [0x142f650] (197 bytes) facebookAndroidGLSocialLib_isLoggedIn(void)
// bool facebookAndroidGLSocialLib_isLoggedIn();
// [0x142f720] (181 bytes) facebookAndroidGLSocialLib_getMyInfo(void)
// int facebookAndroidGLSocialLib_getMyInfo();
// [0x142f7e0] (181 bytes) facebookAndroidGLSocialLib_getUserLocale(void)
// int facebookAndroidGLSocialLib_getUserLocale();
// [0x142f8a0] (181 bytes) facebookAndroidGLSocialLib_getFriends(void)
// int facebookAndroidGLSocialLib_getFriends();
// [0x142f960] (197 bytes) facebookAndroidGLSocialLib_getFriendsData(int,int)
// int facebookAndroidGLSocialLib_getFriendsData(int a1, int a2);
// [0x142fa30] (287 bytes) facebookAndroidGLSocialLib_sendGameRequestToFriends(std::string const&,std::string const&)
// int facebookAndroidGLSocialLib_sendGameRequestToFriends(uint32_t *a1, uint32_t *a2);
// [0x142fb50] (576 bytes) facebookAndroidGLSocialLib_postToWall(std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int facebookAndroidGLSocialLib_postToWall( uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, uint32_t *a7);
// [0x142fd90] (384 bytes) facebookAndroidGLSocialLib_postOpenGraphAction(std::string const&,std::string const&,std::string const&,std::string const&)
// int facebookAndroidGLSocialLib_postOpenGraphAction(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4);
// [0x142ff10] (440 bytes) facebookAndroidGLSocialLib_UploadVideoFile(std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int facebookAndroidGLSocialLib_UploadVideoFile(uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5);
// [0x14300d0] (512 bytes) facebookAndroidGLSocialLib_postToWallWithoutDialog(std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,std::string const&)
// int facebookAndroidGLSocialLib_postToWallWithoutDialog( uint32_t *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6);
// [0x14302d0] (517 bytes) facebookAndroidGLSocialLib_postPhotoToWallWithoutDialog(std::string const&,std::string const&)
// int facebookAndroidGLSocialLib_postPhotoToWallWithoutDialog(uint32_t *a1, uint32_t *a2);
// [0x14304e0] (240 bytes) facebookAndroidGLSocialLib_getUserData(std::string const&)
// int facebookAndroidGLSocialLib_getUserData(uint32_t *a1);
// [0x14305d0] (240 bytes) facebookAndroidGLSocialLib_getUserNames(std::string const&)
// int facebookAndroidGLSocialLib_getUserNames(uint32_t *a1);
// [0x14306c0] (181 bytes) facebookAndroidGLSocialLib_getPicture(void)
// int facebookAndroidGLSocialLib_getPicture();
// [0x1430780] (181 bytes) facebookAndroidGLSocialLib_getApp(void)
// int facebookAndroidGLSocialLib_getApp();
// [0x1430840] (412 bytes) facebookAndroidGLSocialLib_getAccessToken(void)
// int facebookAndroidGLSocialLib_getAccessToken(int a1);
// [0x14309e0] (240 bytes) facebookAndroidGLSocialLib_getUserScore(std::string const&)
// int facebookAndroidGLSocialLib_getUserScore(uint32_t *a1);
// [0x1430ad0] (280 bytes) facebookAndroidGLSocialLib_getAppScores(std::string const&)
// int facebookAndroidGLSocialLib_getAppScores(uint32_t *a1);
// [0x1430bf0] (189 bytes) facebookAndroidGLSocialLib_updateScore(unsigned int)
// int facebookAndroidGLSocialLib_updateScore(unsigned int a1);
// [0x1430cb0] (181 bytes) facebookAndroidGLSocialLib_deleteScore(void)
// int facebookAndroidGLSocialLib_deleteScore();
// [0x1430d70] (260 bytes) facebookAndroidGLSocialLib_hasPermissionInternal(std::string const&)
// int facebookAndroidGLSocialLib_hasPermissionInternal(uint32_t *a1);
// [0x1430e80] (264 bytes) facebookAndroidGLSocialLib_requestPermission(std::string const&,bool)
// int facebookAndroidGLSocialLib_requestPermission(uint32_t *a1, uint8_t a2);
// [0x1430f90] (208 bytes) facebookAndroidGLSocialLib_refreshPermissions(std::string const&)
// int facebookAndroidGLSocialLib_refreshPermissions(uint32_t *a1);
// [0x1431060] (34 bytes) facebookAndroidGLSocialLib_hasPermission(std::string const&)
// int facebookAndroidGLSocialLib_hasPermission(uint32_t *a1);
// [0x1431090] (240 bytes) facebookAndroidGLSocialLib_getUserAchievements(std::string const&)
// int facebookAndroidGLSocialLib_getUserAchievements(uint32_t *a1);
// [0x1431180] (240 bytes) facebookAndroidGLSocialLib_gotAchievement(std::string const&)
// int facebookAndroidGLSocialLib_gotAchievement(uint32_t *a1);
// [0x1431270] (240 bytes) facebookAndroidGLSocialLib_resetAchievement(std::string const&)
// int facebookAndroidGLSocialLib_resetAchievement(uint32_t *a1);
// [0x1431360] (240 bytes) facebookAndroidGLSocialLib_getUserLikes(std::string const&)
// int facebookAndroidGLSocialLib_getUserLikes(uint32_t *a1);
// [0x1431450] (261 bytes) facebookAndroidGLSocialLib_getAppId(void)
// char facebookAndroidGLSocialLib_getAppId();
// [0x1431560] (181 bytes) appGLSocialLib_OnFBDialogDidComplete(void)
// uint32_t *appGLSocialLib_OnFBDialogDidComplete();
// [0x1431620] (27 bytes) Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidComplete
// int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidComplete();
// [0x1431640] (114 bytes) appGLSocialLib_OnFBFailWithError(std::string const&)
// uint32_t *appGLSocialLib_OnFBFailWithError(int a1);
// [0x14316c0] (305 bytes) Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBFailWithError
// int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBFailWithError( int a1, int a2, int a3);
// [0x1431800] (898 bytes) appGLSocialLib_OnFBDialogDidNotComplete(void)
// int appGLSocialLib_OnFBDialogDidNotComplete();
// [0x1431b90] (27 bytes) Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidNotComplete
// int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDialogDidNotComplete();
// [0x1431bb0] (24 bytes) setFBWrapperAndroid(sociallib::FacebookSNSWrapper *)
// uint32_t *setFBWrapperAndroid(sociallib::FacebookSNSWrapper *a1);
// [0x1431bd0] (288 bytes) splitString(std::string const&,char)
// int *splitString(int *a1, uint32_t *a2, char a3);
// [0x1431cf0] (25434 bytes) appGLSocialLib_OnFBDataLoad(std::string const&)
// void appGLSocialLib_OnFBDataLoad(int *a1);
// [0x1438050] (305 bytes) Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDataLoad
// int Java_com_gameloft_GLSocialLib_facebook_FacebookAndroidGLSocialLib_nativeOnFBDataLoad( int a1, int a2, int a3);
// [0x1438770] (120 bytes) std::pair<std::string const,sociallib::SNSUserData>::~pair()
// void std::pair<std::string const,sociallib::SNSUserData>::~pair(void **this);
// [0x14387f0] (120 bytes) std::pair<std::string,sociallib::SNSUserData>::~pair()
// void std::pair<std::string,sociallib::SNSUserData>::~pair(void **this);
// [0x1438920] (2260 bytes) std::vector<sociallib::SNSLeaderboardRowData,std::allocator<sociallib::SNSLeaderboardRowData>>::_M_insert_aux(__gnu_cxx::__normal_iterator<sociallib::SNSLeaderboardRowData*,std::vector<sociallib::SNSLeaderboardRowData,std::allocator<sociallib::SNSLeaderboardRowData>>>,sociallib::SNSLeaderboardRowData const&)
// int std::vector<sociallib::SNSLeaderboardRowData>::_M_insert_aux(char **a1, char *a2, uint32_t *a3);
// [0x1439330] (4278 bytes) std::vector<sociallib::SNSAchievementData,std::allocator<sociallib::SNSAchievementData>>::_M_insert_aux(__gnu_cxx::__normal_iterator<sociallib::SNSAchievementData*,std::vector<sociallib::SNSAchievementData,std::allocator<sociallib::SNSAchievementData>>>,sociallib::SNSAchievementData const&)
// int std::vector<sociallib::SNSAchievementData>::_M_insert_aux(int *a1, int a2, int a3);
// [0x143a4d0] (3114 bytes) std::vector<sociallib::SNSLikeData,std::allocator<sociallib::SNSLikeData>>::_M_insert_aux(__gnu_cxx::__normal_iterator<sociallib::SNSLikeData*,std::vector<sociallib::SNSLikeData,std::allocator<sociallib::SNSLikeData>>>,sociallib::SNSLikeData const&)
// int std::vector<sociallib::SNSLikeData>::_M_insert_aux(int *a1, int a2, int a3);
// [0x143b1a0] (171 bytes) std::pair<std::string const,sociallib::SNSUserData>::pair<std::string,sociallib::SNSUserData>(std::pair<std::string,sociallib::SNSUserData> const&)
// void (**std::pair<std::string const,sociallib::SNSUserData>::pair<std::string,sociallib::SNSUserData>( std::pair<std::string const, sociallib::SNSUserData> *this, const std::pair<std::string, sociallib::SNSUserData> *a2))(sociallib::CDynamicMemoryStream *__hidden this);
// [0x143b250] (401 bytes) std::map<std::string,sociallib::SNSUserData,std::less<std::string>,std::allocator<std::pair<std::string const,sociallib::SNSUserData>>>::insert(std::pair<std::string const,sociallib::SNSUserData> const&)
// std::map<std::string,sociallib::SNSUserData> *std::map<std::string,sociallib::SNSUserData>::insert( std::map<std::string,sociallib::SNSUserData> *this, const std::pair<std::string const, sociallib::SNSUserData> *a2, void **a3);
// [0x143b3f0] (66 bytes) sub_143B3F0
// int sub_143B3F0();
// [0x143b440] (221 bytes) sub_143B440
// void sub_143B440();
// [0x143b520] (58 bytes) Java_com_gameloft_GLSocialLib_PlatformAndroid_nativeInit
// int Java_com_gameloft_GLSocialLib_PlatformAndroid_nativeInit(int a1, int a2);
// [0x143bba0] (66 bytes) sub_143BBA0
// int sub_143BBA0();
// [0x143bbf0] (1377 bytes) sub_143BBF0
// void sub_143BBF0();
// [0x143c160] (48 bytes) Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeInit
// int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeInit(int a1, int a2);
// [0x143c190] (146 bytes) Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIComplete
// uint32_t *Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIComplete();
// [0x143c230] (453 bytes) Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidNotComplete
// int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidNotComplete( int a1, int a2, int a3);
// [0x143c400] (106 bytes) Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPISetCanceled
// int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPISetCanceled();
// [0x143c470] (186 bytes) Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidPlusOneButton
// int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPIDidPlusOneButton();
// [0x143c530] (725 bytes) Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPINotifyAuthChanges
// int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPINotifyAuthChanges( int a1, int a2, char a3, int a4);
// [0x143c810] (119 bytes) GameAPIAndroidGLSocialLib_setErrorForRequest(sociallib::SNSRequestState *,std::string)
// int GameAPIAndroidGLSocialLib_setErrorForRequest(uint32_t *a1, int a2);
// [0x143c890] (205 bytes) GameAPIAndroidGLSocialLib_init(void)
// int GameAPIAndroidGLSocialLib_init();
// [0x143c960] (181 bytes) GameAPIAndroidGLSocialLib_GetPlayerAvatar(void)
// int GameAPIAndroidGLSocialLib_GetPlayerAvatar();
// [0x143ca20] (181 bytes) GameAPIAndroidGLSocialLib_login(void)
// int GameAPIAndroidGLSocialLib_login();
// [0x143cae0] (181 bytes) GameAPIAndroidGLSocialLib_logout(void)
// int GameAPIAndroidGLSocialLib_logout();
// [0x143cba0] (181 bytes) GameAPIAndroidGLSocialLib_GetPlayerInfo(void)
// int GameAPIAndroidGLSocialLib_GetPlayerInfo();
// [0x143cc60] (181 bytes) GameAPIAndroidGLSocialLib_GetPlayerID(void)
// int GameAPIAndroidGLSocialLib_GetPlayerID();
// [0x143cd20] (440 bytes) GameAPIAndroidGLSocialLib_GetAccessToken(void)
// int GameAPIAndroidGLSocialLib_GetAccessToken(int a1);
// [0x143cee0] (197 bytes) GameAPIAndroidGLSocialLib_isLoggedIn(void)
// bool GameAPIAndroidGLSocialLib_isLoggedIn();
// [0x143cfb0] (240 bytes) GameAPIAndroidGLSocialLib_showLeadearBoard(std::string const&)
// int GameAPIAndroidGLSocialLib_showLeadearBoard(uint32_t *a1);
// [0x143d0a0] (181 bytes) GameAPIAndroidGLSocialLib_showAllLeadearBoards(void)
// int GameAPIAndroidGLSocialLib_showAllLeadearBoards();
// [0x143d160] (248 bytes) GameAPIAndroidGLSocialLib_submitLeaderBoardScore(std::string const&,int)
// int GameAPIAndroidGLSocialLib_submitLeaderBoardScore(uint32_t *a1, int a2);
// [0x143d260] (181 bytes) GameAPIAndroidGLSocialLib_showAchievements(void)
// int GameAPIAndroidGLSocialLib_showAchievements();
// [0x143d320] (181 bytes) GameAPIAndroidGLSocialLib_resetAchievements(void)
// int GameAPIAndroidGLSocialLib_resetAchievements();
// [0x143d3e0] (240 bytes) GameAPIAndroidGLSocialLib_unlockAchievement(std::string &)
// int GameAPIAndroidGLSocialLib_unlockAchievement(uint32_t *a1);
// [0x143d4d0] (248 bytes) GameAPIAndroidGLSocialLib_incrementAchievement(std::string &,int)
// int GameAPIAndroidGLSocialLib_incrementAchievement(uint32_t *a1, int a2);
// [0x143d5d0] (595 bytes) GameAPIAndroidGLSocialLib_getFriends(int)
// int GameAPIAndroidGLSocialLib_getFriends(int a1);
// [0x143d830] (240 bytes) GameAPIAndroidGLSocialLib_getUserData(char const*)
// int GameAPIAndroidGLSocialLib_getUserData(const char *a1);
// [0x143d920] (619 bytes) GameAPIAndroidGLSocialLib_getFriendsData(int,int,int)
// int GameAPIAndroidGLSocialLib_getFriendsData(int a1, int a2, int a3);
// [0x143db90] (376 bytes) GameAPIAndroidGLSocialLib_postToWall(char const*,char const*,char const*,char const*)
// int GameAPIAndroidGLSocialLib_postToWall(const char *a1, const char *a2, const char *a3, const char *a4);
// [0x143dd10] (504 bytes) GameAPIAndroidGLSocialLib_postToFriendsWall(char const*,char const*,char const*,char const*,char const*,char const*)
// int GameAPIAndroidGLSocialLib_postToFriendsWall( const char *a1, const char *a2, const char *a3, const char *a4, const char *a5, const char *a6);
// [0x143df10] (287 bytes) GameAPIAndroidGLSocialLib_postPhotoToWall(std::string const&,std::string const&)
// int GameAPIAndroidGLSocialLib_postPhotoToWall(uint32_t *a1, uint32_t *a2);
// [0x143e030] (328 bytes) GameAPIAndroidGLSocialLib_sendGameRequestToFriends(std::string const&,std::string const&,std::string const&)
// int GameAPIAndroidGLSocialLib_sendGameRequestToFriends(uint32_t *a1, uint32_t *a2, uint32_t *a3);
// [0x143e180] (240 bytes) GameAPIAndroidGLSocialLib_showPlusOneButton(std::string const&)
// int GameAPIAndroidGLSocialLib_showPlusOneButton(uint32_t *a1);
// [0x143e270] (272 bytes) GameAPIAndroidGLSocialLib_showPlusOneButtonWithParams(std::string const&,int,int,int,int)
// int GameAPIAndroidGLSocialLib_showPlusOneButtonWithParams(uint32_t *a1, int a2, int a3, int a4, int a5);
// [0x143e380] (181 bytes) GameAPIAndroidGLSocialLib_hidePlusOneButton(void)
// int GameAPIAndroidGLSocialLib_hidePlusOneButton();
// [0x143e440] (13590 bytes) GLSocialLib_OnGameAPIDataLoad(char const*)
// int GLSocialLib_OnGameAPIDataLoad(char *a1);
// [0x1441960] (361 bytes) Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPICompleteWithData
// int Java_com_gameloft_GLSocialLib_GameAPI_GameAPIAndroidGLSocialLib_nativeGameAPICompleteWithData( int a1, int a2, int a3, char a4, int a5);
// [0x1441ad0] (66 bytes) sub_1441AD0
// int sub_1441AD0();
// [0x1442780] (184 bytes) sub_1442780
// int sub_1442780();
// [0x14428d0] (263 bytes) sub_14428D0
// int sub_14428D0(Json::Value *a1, int a2);
// [0x1449a90] (2453 bytes) sub_1449A90
// int sub_1449A90(int a1, int a2, int a3);
