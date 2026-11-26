#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_service.h
// Library: gaia | Module: gaia_service
// Binary Address Span: 0x14d3b20 .. 0x14eaf30 (19 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14d3b20] (67 bytes) gaia::ComparePriorities(gaia::ThreadManagerRequest *,gaia::ThreadManagerRequest *)
// bool gaia::ComparePriorities(gaia *this, gaia::ThreadManagerRequest *a2);
// [0x14d60e0] (9 bytes) gaia::iOSIsAppInstalled(std::string const&)
// int gaia::iOSIsAppInstalled();
// [0x14d60f0] (34 bytes) gaia::IsAppInstalled(std::string const&)
// bool gaia::IsAppInstalled(uint32_t *a1);
// [0x14dd480] (876 bytes) gaia::GetPrivateDocumentsPath(void)
// gaia *gaia::GetPrivateDocumentsPath(gaia *this);
// [0x14dd7f0] (100 bytes) gaia::MakeFullFilePath(std::string const&)
// int gaia::MakeFullFilePath(int a1, int a2);
// [0x14dd860] (856 bytes) gaia::DownloadApplistEtag(void)
// int gaia::DownloadApplistEtag();
// [0x14ddbc0] (714 bytes) gaia::GetCurrentApplistEtag(void)
// gaia *gaia::GetCurrentApplistEtag(gaia *this);
// [0x14dde90] (217 bytes) gaia::ShouldRedownloadApplist(void)
// int gaia::ShouldRedownloadApplist();
// [0x14ddf70] (1337 bytes) gaia::ParseApplistJsonFile(void)
// gaia *gaia::ParseApplistJsonFile(gaia *this);
// [0x14de4b0] (604 bytes) gaia::SaveApplistJsonFile(char *,int)
// int gaia::SaveApplistJsonFile(gaia *this, char *a2);
// [0x14de710] (274 bytes) gaia::DownloadApplistJson(void)
// int gaia::DownloadApplistJson();
// [0x14de830] (114 bytes) gaia::GetApplist(void)
// gaia *gaia::GetApplist(gaia *this);
// [0x14de8b0] (706 bytes) gaia::SaveCurrentTimestamp(void)
// int gaia::SaveCurrentTimestamp();
// [0x14deb80] (626 bytes) gaia::GetLastCheckTimestamp(void)
// char *gaia::GetLastCheckTimestamp();
// [0x14dee00] (224 bytes) gaia::ShouldDetectInstalledApps(Json::Value const&)
// int gaia::ShouldDetectInstalledApps(const char **this);
// [0x14e1120] (2037 bytes) gaia::ReportInstalledApps(std::list<int,std::allocator<int>> const&)
// int gaia::ReportInstalledApps(uint32_t **a1);
// [0x14e6ce0] (496 bytes) gaia::JsonToBundleMap(Json::Value const&)
// gaia *gaia::JsonToBundleMap(gaia *this, const Json::Value *a2);
// [0x14e6ed0] (64 bytes) gaia::GetAppsToCheckFor(Json::Value const&)
// gaia *gaia::GetAppsToCheckFor(gaia *this, const Json::Value *a2);
// [0x14eaf30] (194 bytes) gaia::CrmActionPointerCompare(boost::shared_ptr<gaia::CrmAction const>,boost::shared_ptr<gaia::CrmAction const>)
// bool gaia::CrmActionPointerCompare(gaia::CrmAction **a1, gaia::CrmAction **a2);
