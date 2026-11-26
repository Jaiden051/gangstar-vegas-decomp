#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_CrmManager.h
// Library: gaia | Module: gaia_CrmManager
// Binary Address Span: 0x14ca340 .. 0x14e9420 (58 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14ca340] (138 bytes) gaia::CrmManager::AStoreItemEventCallback(void *,bool,Json::Value)
// int gaia::CrmManager::AStoreItemEventCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14cc280] (98 bytes) gaia::CrmManager::GetSaveFolderPath(std::string const&)const
// int gaia::CrmManager::GetSaveFolderPath(int a1, int a2, int a3);
// [0x14cc2f0] (48 bytes) gaia::CrmManager::LaunchOfflineWS(std::string const&)const
// int gaia::CrmManager::LaunchOfflineWS(int a1, uint32_t *a2);
// [0x14cc320] (9 bytes) gaia::CrmManager::LaunchInterstitial(std::string const&)const
// int gaia::CrmManager::LaunchInterstitial();
// [0x14cc330] (39 bytes) gaia::CrmManager::IsOfflineWSAvailable(std::string const&)const
// bool gaia::CrmManager::IsOfflineWSAvailable(int a1, uint32_t *a2);
// [0x14cc360] (110 bytes) gaia::CrmManager::IsWSOnScreen(void)const
// bool gaia::CrmManager::IsWSOnScreen();
// [0x14cc3d0] (36 bytes) gaia::CrmManager::DownloadOfflineWS(std::string const&)const
// int gaia::CrmManager::DownloadOfflineWS(int a1, uint32_t *a2);
// [0x14cc400] (36 bytes) gaia::CrmManager::DeleteOfflineWS(std::string const&)const
// int gaia::CrmManager::DeleteOfflineWS(int a1, uint32_t *a2);
// [0x14cc430] (815 bytes) gaia::CrmManager::SerializePopupList(void)const
// int gaia::CrmManager::SerializePopupList(gaia::CrmManager *this);
// [0x14cc760] (167 bytes) gaia::CrmManager::IsPointcutActionPending(void)
// int gaia::CrmManager::IsPointcutActionPending(gaia::CrmManager *this);
// [0x14cc810] (157 bytes) gaia::CrmManager::IsPopupAvailable(Json::Value const&)
// int gaia::CrmManager::IsPopupAvailable(gaia::CrmManager *this, const Json::Value *a2);
// [0x14cc8b0] (972 bytes) gaia::CrmManager::LaunchPopup(Json::Value const&)
// int gaia::CrmManager::LaunchPopup(gaia::CrmManager *this, const Json::Value *a2);
// [0x14ccc80] (582 bytes) gaia::CrmManager::LaunchXpromo(Json::Value const&)
// int gaia::CrmManager::LaunchXpromo(gaia::CrmManager *this, const Json::Value *a2);
// [0x14cced0] (553 bytes) gaia::CrmManager::LaunchInterstitialAd(Json::Value const&)
// int gaia::CrmManager::LaunchInterstitialAd(gaia::CrmManager *this, const Json::Value *a2);
// [0x14cd100] (91 bytes) gaia::CrmManager::DeletePopupList(std::vector<std::string,std::allocator<std::string>> const&)
// int gaia::CrmManager::DeletePopupList(gaia::CrmManager *this, const std::vector<std::string> *a2);
// [0x14cd160] (75 bytes) gaia::CrmManager::GetGameSpecificValues(void)const
// char *gaia::CrmManager::GetGameSpecificValues(gaia::CrmManager *this);
// [0x14cd1b0] (229 bytes) gaia::CrmManager::CheckIfTagsHaveChanged(std::string)const
// int gaia::CrmManager::CheckIfTagsHaveChanged(int a1, const void **a2);
// [0x14cd2a0] (180 bytes) gaia::CrmManager::ClearActionList(void)
// int gaia::CrmManager::ClearActionList(gaia::CrmManager *this);
// [0x14cd360] (177 bytes) gaia::CrmManager::VerifyPointcut(std::string const&,Json::Value const&)const
// int gaia::CrmManager::VerifyPointcut(int a1, const void **a2, Json::Value *a3);
// [0x14cd420] (740 bytes) gaia::CrmManager::InitPointcutList(void)
// unsigned int gaia::CrmManager::InitPointcutList(gaia::CrmManager *this);
// [0x14cd710] (82 bytes) gaia::CrmManager::popupTrackingType(Json::Value)
// int gaia::CrmManager::popupTrackingType(Json::Value *a1);
// [0x14cd770] (180 bytes) gaia::CrmManager::UpdateActionList(unsigned int)
// int gaia::CrmManager::UpdateActionList(gaia::CrmManager *this);
// [0x14cd830] (53 bytes) gaia::CrmManager::Update(unsigned int)
// uint8_t *gaia::CrmManager::Update(gaia::CrmManager *this);
// [0x14cd870] (23 bytes) gaia::CrmManager::IsInitialized(void)
// int gaia::CrmManager::IsInitialized();
// [0x14cd890] (17 bytes) gaia::CrmManager::SetOnlineStatus(bool)
// gaia::CrmManager *gaia::CrmManager::SetOnlineStatus(gaia::CrmManager *this, bool a2);
// [0x14cd8b0] (16 bytes) gaia::CrmManager::GetOnlineStatus(void)const
// int gaia::CrmManager::GetOnlineStatus(gaia::CrmManager *this);
// [0x14cde70] (1325 bytes) gaia::CrmManager::SerializeActions(void)const
// int gaia::CrmManager::SerializeActions(long double a1, gaia::CrmManager *this);
// [0x14ce3a0] (49 bytes) gaia::CrmManager::OnPause(void)
// int gaia::CrmManager::OnPause(long double a1, gaia::CrmManager *this);
// [0x14ce800] (2293 bytes) gaia::CrmManager::DeserializeActions(void)
// int gaia::CrmManager::DeserializeActions(gaia::CrmManager *this);
// [0x14d79a0] (547 bytes) gaia::CrmManager::LogEventViaGLOT(Json::Value const&,std::string)const
// int gaia::CrmManager::LogEventViaGLOT(int a1, Json::Value *a2, char **a3);
// [0x14d7bd0] (600 bytes) gaia::CrmManager::ALogEventCallback(void *,bool,Json::Value)
// int gaia::CrmManager::ALogEventCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d7e30] (326 bytes) gaia::CrmManager::AUrlEventCallback(void *,bool,Json::Value)
// int gaia::CrmManager::AUrlEventCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d7f80] (326 bytes) gaia::CrmManager::A3DPartyEventCallback(void *,bool,Json::Value)
// int gaia::CrmManager::A3DPartyEventCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d80d0] (326 bytes) gaia::CrmManager::AGLAdsIncentivizedVideoCallback(void *,bool,Json::Value)
// int gaia::CrmManager::AGLAdsIncentivizedVideoCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d8220] (326 bytes) gaia::CrmManager::AGLAdsInterstitialCallback(void *,bool,Json::Value)
// int gaia::CrmManager::AGLAdsInterstitialCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d8370] (326 bytes) gaia::CrmManager::AGLAdsBannerCallback(void *,bool,Json::Value)
// int gaia::CrmManager::AGLAdsBannerCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d84c0] (326 bytes) gaia::CrmManager::AXpromoEventCallback(void *,bool,Json::Value)
// int gaia::CrmManager::AXpromoEventCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d8610] (326 bytes) gaia::CrmManager::AGiftEventCallback(void *,bool,Json::Value)
// int gaia::CrmManager::AGiftEventCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d8760] (326 bytes) gaia::CrmManager::APopupEventCallback(void *,bool,Json::Value)
// int gaia::CrmManager::APopupEventCallback(int a1, uint8_t a2, Json::Value *a3);
// [0x14d88b0] (403 bytes) gaia::CrmManager::DownloadPopupList(std::vector<std::string,std::allocator<std::string>> const&)
// Json::Value *gaia::CrmManager::DownloadPopupList(gaia::CrmManager *this, Json::Value **a2);
// [0x14d8a50] (78 bytes) gaia::CrmManager::OnResume(void)
// int gaia::CrmManager::OnResume(Json::Value **this);
// [0x14d8c50] (5302 bytes) gaia::CrmManager::GlotWrapperCallback(void *,bool,Json::Value)
// int gaia::CrmManager::GlotWrapperCallback(int a1, int a2, Json::Value *a3);
// [0x14da6a0] (908 bytes) gaia::CrmManager::DeserializePopupList(void)
// int gaia::CrmManager::DeserializePopupList(gaia::CrmManager *this);
// [0x14dc610] (855 bytes) gaia::CrmManager::LaunchGLAdsIncentivizedVideo(Json::Value const&)
// int gaia::CrmManager::LaunchGLAdsIncentivizedVideo(gaia::CrmManager *this, const Json::Value *a2);
// [0x14dc970] (855 bytes) gaia::CrmManager::LaunchGLAdsInterstitial(Json::Value const&)
// int gaia::CrmManager::LaunchGLAdsInterstitial(gaia::CrmManager *this, const Json::Value *a2);
// [0x14dccd0] (888 bytes) gaia::CrmManager::LaunchGLAdsBanner(Json::Value const&,int,int,AD_ALIGN)
// int gaia::CrmManager::LaunchGLAdsBanner(gaia::CrmManager *a1, Json::Value *a2, int a3, int a4, int a5);
// [0x14dd050] (235 bytes) gaia::CrmManager::ResetCrmManager(void)
// int gaia::CrmManager::ResetCrmManager(long double a1, void **this);
// [0x14e1dd0] (455 bytes) gaia::CrmManager::~CrmManager()
// void gaia::CrmManager::~CrmManager(long double a1, void **this);
// [0x14e1fa0] (56 bytes) gaia::CrmManager::~CrmManager()
// void gaia::CrmManager::~CrmManager(long double a1, void **this);
// [0x14e27b0] (1301 bytes) gaia::CrmManager::ParseFatigueGroupList(Json::Value const&)
// int gaia::CrmManager::ParseFatigueGroupList(gaia::CrmManager *this, const Json::Value *a2);
// [0x14e30d0] (644 bytes) gaia::CrmManager::IsPointcutAvailable(std::string const&,Json::Value const&)
// int gaia::CrmManager::IsPointcutAvailable(gaia::CrmAction ***a1, const void **a2, Json::Value *a3);
// [0x14e3890] (516 bytes) gaia::CrmManager::Trigger(std::string const&,bool &,Json::Value const&,unsigned int)
// int gaia::CrmManager::Trigger( pthread_mutex_t ***a1, const void **a2, uint8_t *a3, Json::Value *a4, unsigned int a5);
// [0x14e3aa0] (66 bytes) gaia::CrmManager::TriggerPointCut(std::string const&,bool &,Json::Value const&)
// int gaia::CrmManager::TriggerPointCut(pthread_mutex_t ***a1, const void **a2, uint8_t *a3, Json::Value *a4);
// [0x14e3af0] (66 bytes) gaia::CrmManager::TriggerPointCut(std::string const&,Json::Value const&)
// int gaia::CrmManager::TriggerPointCut(pthread_mutex_t ***a1, const void **a2, Json::Value *a3);
// [0x14e7010] (1900 bytes) gaia::CrmManager::CrmManager(void)
// void gaia::CrmManager::CrmManager(gaia::CrmManager *this);
// [0x14e7780] (114 bytes) gaia::CrmManager::GetInstance(void)
// gaia::CrmManager *gaia::CrmManager::GetInstance();
// [0x14e8070] (4073 bytes) gaia::CrmManager::ParseActionList(Json::Value const&)
// int gaia::CrmManager::ParseActionList(Json::Value **this, const Json::Value *a2);
// [0x14e9420] (2285 bytes) gaia::CrmManager::Initialize(std::string const&)
// int gaia::CrmManager::Initialize(Json::Value **a1, int a2);
