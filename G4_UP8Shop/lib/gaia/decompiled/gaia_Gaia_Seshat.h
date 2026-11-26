#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia_Seshat.h
// Library: gaia | Module: gaia_Gaia_Seshat
// Binary Address Span: 0x1451be0 .. 0x1484b20 (45 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1451be0] (358 bytes) gaia::Gaia_Seshat::GetSeshatStatus(void)
// int gaia::Gaia_Seshat::GetSeshatStatus(gaia::Gaia_Seshat *this);
// [0x1451d50] (635 bytes) gaia::Gaia_Seshat::GetEtagForKey(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::GetEtagForKey(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x1451fd0] (91 bytes) gaia::Gaia_Seshat::GetEtagForKey(std::string const&,std::string &)
// int gaia::Gaia_Seshat::GetEtagForKey(gaia::Gaia *a1, int a2, int a3);
// [0x1452030] (557 bytes) gaia::Gaia_Seshat::GetData(std::string const&,std::string const&,void **,int *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// Json::Value *gaia::Gaia_Seshat::GetData( gaia::Gaia_Seshat *a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, char a6, int a7, int a8);
// [0x1452260] (27 bytes) gaia::Gaia_Seshat::GetStandardUserProfile(void)
// int gaia::Gaia_Seshat::GetStandardUserProfile();
// [0x1452280] (32 bytes) gaia::Gaia_Seshat::ReleaseStandardUserProfile(void)
// int gaia::Gaia_Seshat::ReleaseStandardUserProfile();
// [0x14522a0] (196 bytes) gaia::Gaia_Seshat::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::Gaia_Seshat::CancelRequest(glwebtools::Mutex *a1, int a2);
// [0x145c270] (151 bytes) gaia::Gaia_Seshat::StartAndAuthorizeSeshat(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::StartAndAuthorizeSeshat(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145c310] (729 bytes) gaia::Gaia_Seshat::GetAccessToken(gaia::GaiaRequest &,std::string,std::string &)
// int gaia::Gaia_Seshat::GetAccessToken(gaia::Gaia *a1, gaia::GaiaRequest *a2, uint32_t *a3, int a4);
// [0x145c5f0] (671 bytes) gaia::Gaia_Seshat::ListMatchers(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::ListMatchers(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145c890] (365 bytes) gaia::Gaia_Seshat::ListMatchers(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::ListMatchers( gaia::Gaia_Seshat *a1, int a2, std::vector<gaia::BaseJSONServiceResponse> *a3, char a4, int a5, int a6);
// [0x145ca00] (910 bytes) gaia::Gaia_Seshat::DeleteMatcher(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::DeleteMatcher(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145cd90] (1761 bytes) gaia::Gaia_Seshat::GetMatches(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::GetMatches(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145d480] (1229 bytes) gaia::Gaia_Seshat::CreateMatcher(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::CreateMatcher(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145d950] (1420 bytes) gaia::Gaia_Seshat::GetBatchProfiles(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::GetBatchProfiles(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145dee0] (693 bytes) gaia::Gaia_Seshat::GetProfileVisibility(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::GetProfileVisibility(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145e1a0] (1229 bytes) gaia::Gaia_Seshat::SetProfileVisibilitySelector(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::SetProfileVisibilitySelector(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145e670] (910 bytes) gaia::Gaia_Seshat::SetProfileVisibility(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::SetProfileVisibility(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145ea00] (940 bytes) gaia::Gaia_Seshat::SetProfileVisibilityObject(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::SetProfileVisibilityObject(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145edb0] (479 bytes) gaia::Gaia_Seshat::DeleteProfile(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::DeleteProfile(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145ef90] (1808 bytes) gaia::Gaia_Seshat::GetProfile(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::GetProfile(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x145f6a0] (2575 bytes) gaia::Gaia_Seshat::SetProfile(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::SetProfile(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x14600b0] (902 bytes) gaia::Gaia_Seshat::DeleteData(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::DeleteData(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x1460440] (1391 bytes) gaia::Gaia_Seshat::GetData(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::GetData(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x14609b0] (1620 bytes) gaia::Gaia_Seshat::GetDataCheckEtag(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::GetDataCheckEtag(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x1461010] (1801 bytes) gaia::Gaia_Seshat::PutData(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::PutData(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x1461720] (2184 bytes) gaia::Gaia_Seshat::PutDataCheckEtag(gaia::GaiaRequest &)
// int gaia::Gaia_Seshat::PutDataCheckEtag(gaia::Gaia_Seshat *this, gaia::GaiaRequest *a2);
// [0x1480b00] (112 bytes) gaia::Gaia_Seshat::StartAndAuthorizeSeshat(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia_Seshat::StartAndAuthorizeSeshat(gaia::Gaia *a1, int a2, uint32_t *a3);
// [0x1480b70] (599 bytes) gaia::Gaia_Seshat::DeleteMatcher(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::DeleteMatcher(gaia::Gaia *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x1480dd0] (918 bytes) gaia::Gaia_Seshat::GetMatches(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,unsigned int,std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::GetMatches( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, unsigned int a6, int a7, char a8, int a9, int a10);
// [0x1481170] (706 bytes) gaia::Gaia_Seshat::CreateMatcher(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::CreateMatcher(gaia::Gaia *a1, int a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7);
// [0x1481440] (814 bytes) gaia::Gaia_Seshat::GetBatchProfiles(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::GetBatchProfiles( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x1481770] (947 bytes) gaia::Gaia_Seshat::GetProfileVisibility(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::GetProfileVisibility(gaia::Gaia *a1, int a2, int a3, char a4, int a5, int a6);
// [0x1481b30] (1652 bytes) gaia::Gaia_Seshat::SetProfileVisibilitySelector(gaia::BaseServiceManager::Credentials,Json::Value const&,Json::Value const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::SetProfileVisibilitySelector( long double a1, gaia::Gaia *a2, int a3, Json::Value *a4, Json::Value *a5, char a6, int a7, int a8);
// [0x14821b0] (1500 bytes) gaia::Gaia_Seshat::SetProfileVisibility(gaia::BaseServiceManager::Credentials,Json::Value const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::SetProfileVisibility( long double a1, gaia::Gaia *a2, int a3, Json::Value *a4, char a5, int a6, int a7);
// [0x1482790] (507 bytes) gaia::Gaia_Seshat::DeleteProfile(gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::DeleteProfile(gaia::Gaia *a1, int a2, char a3, int a4, int a5);
// [0x1482990] (1181 bytes) gaia::Gaia_Seshat::GetProfile(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::GetProfile( gaia::Gaia *a1, int a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1482e30] (1953 bytes) gaia::Gaia_Seshat::SetProfile(gaia::BaseServiceManager::Credentials,Json::Value const&,gaia::Seshat::dataVisibility,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::SetProfile( long double a1, gaia::Gaia *a2, int a3, Json::Value *a4, int a5, uint32_t *a6, uint32_t *a7, uint32_t *a8, char a9, int a10, int a11);
// [0x14835e0] (599 bytes) gaia::Gaia_Seshat::DeleteData(std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::DeleteData(gaia::Gaia *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x1483840] (1056 bytes) gaia::Gaia_Seshat::DeprecatedGetData(std::string const&,void **,int *,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::DeprecatedGetData( gaia::Gaia *a1, uint32_t *a2, void **a3, int *a4, int a5, int a6, uint32_t *a7, char a8, int a9, int a10);
// [0x1483c60] (1084 bytes) gaia::Gaia_Seshat::GetDataCheckEtag(std::string const&,std::string const&,void **,int *,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Seshat::GetDataCheckEtag( gaia::Gaia *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, int a6, int a7, uint32_t *a8, char a9, int a10, int a11);
// [0x14840a0] (1176 bytes) gaia::Gaia_Seshat::PutData(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,gaia::Seshat::dataVisibility,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::PutData( gaia::Gaia *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, int a7, char a8, int a9, int a10);
// [0x1484540] (254 bytes) gaia::Gaia_Seshat::PutData(std::string const&,void const*,int,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,gaia::Seshat::dataVisibility,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::PutData( gaia::Gaia *a1, uint32_t *a2, void *a3, int a4, int a5, int a6, uint32_t *a7, int a8, char a9, int a10, int a11);
// [0x1484640] (1248 bytes) gaia::Gaia_Seshat::PutDataCheckEtag(std::string const&,std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,gaia::Seshat::dataVisibility,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::PutDataCheckEtag( gaia::Gaia *a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, int a6, uint32_t *a7, int a8, char a9, int a10, int a11);
// [0x1484b20] (247 bytes) gaia::Gaia_Seshat::PutDataCheckEtag(std::string const&,std::string const&,void *,int,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,gaia::Seshat::dataVisibility,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Seshat::PutDataCheckEtag( gaia::Gaia *a1, uint32_t *a2, uint32_t *a3, void *a4, int a5, int a6, int a7, uint32_t *a8, int a9, char a10, int a11, int a12);
