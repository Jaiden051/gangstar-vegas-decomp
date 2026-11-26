#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia_Hestia.h
// Library: gaia | Module: gaia_Gaia_Hestia
// Binary Address Span: 0x1442db0 .. 0x149bd10 (35 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1442db0] (14 bytes) gaia::Gaia_Hestia::SetSaveConfigFlag(bool)
// gaia::Gaia_Hestia *gaia::Gaia_Hestia::SetSaveConfigFlag(gaia::Gaia_Hestia *this, bool a2);
// [0x1442dc0] (13 bytes) gaia::Gaia_Hestia::GetSaveConfigFlag(void)
// int gaia::Gaia_Hestia::GetSaveConfigFlag(gaia::Gaia_Hestia *this);
// [0x1442dd0] (434 bytes) gaia::Gaia_Hestia::DecryptConfig(std::vector<char,std::allocator<char>> const&,std::string &)
// char *gaia::Gaia_Hestia::DecryptConfig(int a1, int *a2, int a3);
// [0x1442f90] (248 bytes) gaia::Gaia_Hestia::SaveConfig(std::vector<char,std::allocator<char>> const&,std::string const&)
// int gaia::Gaia_Hestia::SaveConfig(int a1, int a2, int a3);
// [0x1443090] (169 bytes) gaia::Gaia_Hestia::ConvertTimeStringToSec(std::string const&)
// int gaia::Gaia_Hestia::ConvertTimeStringToSec(int a1, int *a2);
// [0x1443140] (599 bytes) gaia::Gaia_Hestia::GetTimeString(unsigned long,std::string &)
// int gaia::Gaia_Hestia::GetTimeString(int a1, int a2, int a3);
// [0x14433a0] (14 bytes) gaia::Gaia_Hestia::SetAccountToUse(gaia::BaseServiceManager::Credentials)
// int gaia::Gaia_Hestia::SetAccountToUse(int a1, int a2);
// [0x14433b0] (45 bytes) gaia::Gaia_Hestia::UpdateCRMLanguage(std::string const&)
// int gaia::Gaia_Hestia::UpdateCRMLanguage(int a1, int a2);
// [0x1443450] (439 bytes) gaia::Gaia_Hestia::Gaia_Hestia(void)
// gaia::Gaia_Hestia *gaia::Gaia_Hestia::Gaia_Hestia(gaia::Gaia_Hestia *this);
// [0x1444b70] (973 bytes) gaia::Gaia_Hestia::IAPRefreshCB(bool)
// int gaia::Gaia_Hestia::IAPRefreshCB(gaia::Gaia_Hestia *this);
// [0x1444f40] (544 bytes) gaia::Gaia_Hestia::DispatchDefaultConfig(void (*)(gaia::CRMDispatchOperation const&),bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hestia::DispatchDefaultConfig(int a1, int a2, char a3, int a4, int a5);
// [0x1445160] (46 bytes) gaia::Gaia_Hestia::GetFeedEtag(std::string &)
// int gaia::Gaia_Hestia::GetFeedEtag(int a1, int a2);
// [0x1445780] (196 bytes) gaia::Gaia_Hestia::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::Gaia_Hestia::CancelRequest(int a1, int a2);
// [0x1451540] (333 bytes) gaia::Gaia_Hestia::GetHestiaStatus(void)
// int gaia::Gaia_Hestia::GetHestiaStatus(gaia::Gaia_Hestia *this);
// [0x1453090] (312 bytes) gaia::Gaia_Hestia::~Gaia_Hestia()
// void gaia::Gaia_Hestia::~Gaia_Hestia(gaia::Gaia_Hestia *this);
// [0x14531d0] (56 bytes) gaia::Gaia_Hestia::~Gaia_Hestia()
// void gaia::Gaia_Hestia::~Gaia_Hestia(gaia::Gaia_Hestia *this);
// [0x1453210] (604 bytes) gaia::Gaia_Hestia::GetCurrentConfig(std::string &)
// int gaia::Gaia_Hestia::GetCurrentConfig(int a1, int a2);
// [0x1453470] (374 bytes) gaia::Gaia_Hestia::EncryptConfig(std::string const&,std::vector<char,std::allocator<char>> &)
// unsigned int gaia::Gaia_Hestia::EncryptConfig(int a1, const void **a2, glwebtools::Codec **a3);
// [0x14535f0] (1705 bytes) gaia::Gaia_Hestia::SaveConfigTable(void)
// unsigned int gaia::Gaia_Hestia::SaveConfigTable(long double a1, gaia::Gaia_Hestia *this);
// [0x1453ca0] (452 bytes) gaia::Gaia_Hestia::InvalidateConfigsStartingFrom(int)
// unsigned int gaia::Gaia_Hestia::InvalidateConfigsStartingFrom( long double a1, gaia::Gaia_Hestia *this, int a3);
// [0x1453e70] (42 bytes) gaia::Gaia_Hestia::InvalidateAllCRMConfigs(void)
// unsigned int gaia::Gaia_Hestia::InvalidateAllCRMConfigs(long double a1, gaia::Gaia_Hestia *this);
// [0x1453ea0] (327 bytes) gaia::Gaia_Hestia::DeleteExpiredConfigs(void)
// int gaia::Gaia_Hestia::DeleteExpiredConfigs(long double a1, gaia::Gaia_Hestia *this);
// [0x1453ff0] (1707 bytes) gaia::Gaia_Hestia::storeNewConfig(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&)
// int gaia::Gaia_Hestia::storeNewConfig(long double a1, gaia::Gaia_Hestia *a2, int a3, int a4);
// [0x14546a0] (2271 bytes) gaia::Gaia_Hestia::LoadConfigTable(void)
// int gaia::Gaia_Hestia::LoadConfigTable(gaia::Gaia_Hestia *this);
// [0x1454f80] (77 bytes) gaia::Gaia_Hestia::InitializeLocalData(void)
// unsigned int gaia::Gaia_Hestia::InitializeLocalData(gaia::Gaia_Hestia *this);
// [0x1454fd0] (70 bytes) gaia::Gaia_Hestia::GetNumberOfStoredConfigs(void)
// int gaia::Gaia_Hestia::GetNumberOfStoredConfigs(gaia::Gaia_Hestia *this);
// [0x1455020] (98 bytes) gaia::Gaia_Hestia::GetCurrentExpiryDate(std::string &)
// int gaia::Gaia_Hestia::GetCurrentExpiryDate(gaia::Gaia_Hestia *a1, int a2);
// [0x1491900] (91 bytes) gaia::Gaia_Hestia::StartAndAuthorizeHestia(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia_Hestia::StartAndAuthorizeHestia(gaia::Gaia *a1, int a2, uint32_t *a3);
// [0x1491960] (870 bytes) gaia::Gaia_Hestia::GetClustersByUser(gaia::BaseServiceManager::Credentials,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hestia::GetClustersByUser(gaia::Gaia *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7);
// [0x1491cd0] (774 bytes) gaia::Gaia_Hestia::GetClusters(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hestia::GetClusters(gaia::Gaia *a1, int a2, int a3, char a4, int a5, int a6);
// [0x1491fe0] (1845 bytes) gaia::Gaia_Hestia::GetClientConfig(gaia::GaiaRequest &)
// Json::Value *gaia::Gaia_Hestia::GetClientConfig(gaia::Gaia_Hestia *this, gaia::GaiaRequest *a2);
// [0x1492720] (1094 bytes) gaia::Gaia_Hestia::GetClientConfig(gaia::BaseServiceManager::Credentials,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hestia::GetClientConfig( gaia::Gaia *a1, int a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, char a9, int a10, int a11);
// [0x1492b70] (2115 bytes) gaia::Gaia_Hestia::RefreshConfigs(int,void (*)(gaia::CRMRefreshOperation const&),bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hestia::RefreshConfigs( long double a1, gaia::Gaia_Hestia *a2, int a3, int a4, char a5, int a6, int a7);
// [0x149b640] (1736 bytes) gaia::Gaia_Hestia::DispatchCurrentConfig(void (*)(gaia::CRMDispatchOperation const&),bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hestia::DispatchCurrentConfig(gaia::Gaia_Hestia *a1, int a2, char a3, int a4, int a5);
// [0x149bd10] (4657 bytes) gaia::Gaia_Hestia::InitializeCRM(gaia::CRMSettings const&,void (*)(gaia::CRMInitOperation const&),bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Hestia::InitializeCRM( long double a1, gaia::Gaia *a2, int a3, int a4, char a5, int a6, int a7);
