#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia.h
// Library: gaia | Module: gaia_Gaia
// Binary Address Span: 0x1442840 .. 0x14e6f10 (60 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1442840] (16 bytes) gaia::Gaia::CanDelete(void)
// bool gaia::Gaia::CanDelete(gaia::Gaia *this);
// [0x1442850] (122 bytes) gaia::Gaia::callbackRequestCompleted(gaia::OpCodes,std::string const&,int,void *)
// int gaia::Gaia::callbackRequestCompleted(int a1, int a2, int a3, int a4);
// [0x1443900] (1419 bytes) gaia::Gaia::Gaia(void)
// gaia::Gaia *gaia::Gaia::Gaia(gaia::Gaia *this);
// [0x1443e90] (2030 bytes) gaia::Gaia::InitGLUID(void)
// int gaia::Gaia::InitGLUID(gaia::Gaia *this);
// [0x1444680] (822 bytes) gaia::Gaia::GetGameloftDeviceId(std::string &)const
// int gaia::Gaia::GetGameloftDeviceId(int a1, int a2);
// [0x14449c0] (52 bytes) gaia::Gaia::CompleteAsyncAction(gaia::AsyncRequestImpl *,std::string const&,int const&)
// int gaia::Gaia::CompleteAsyncAction(uint32_t *a1, int a2, uint32_t *a3);
// [0x1444a00] (34 bytes) gaia::Gaia::CompleteAsyncAction(gaia::GaiaRequest *)
// int gaia::Gaia::CompleteAsyncAction(gaia::Gaia *this);
// [0x1444a30] (161 bytes) gaia::Gaia::TriggerAllCallbacks(void)
// int gaia::Gaia::TriggerAllCallbacks();
// [0x1444ae0] (144 bytes) gaia::Gaia::GetInstance(void)
// int gaia::Gaia::GetInstance();
// [0x1445190] (83 bytes) gaia::Gaia::StartWorkerThread(gaia::GaiaRequest,char const*)
// int gaia::Gaia::StartWorkerThread(const gaia::GaiaRequest *a1);
// [0x14454f0] (144 bytes) gaia::Gaia::GetServiceMutex(int)
// char *gaia::Gaia::GetServiceMutex(gaia::Gaia *this, int a2);
// [0x1445580] (172 bytes) gaia::Gaia::CancelRunningRequestForUserProfile(void)
// int gaia::Gaia::CancelRunningRequestForUserProfile(gaia::Gaia *this);
// [0x1445630] (109 bytes) gaia::Gaia::DeleteThread(void)
// void gaia::Gaia::DeleteThread(gaia::Gaia *this);
// [0x14456a0] (187 bytes) gaia::Gaia::Shutdown(void)
// int gaia::Gaia::Shutdown(gaia::Gaia_GlobalDeviceID **this);
// [0x1445760] (23 bytes) gaia::Gaia::IsInitialized(void)
// int gaia::Gaia::IsInitialized();
// [0x1447260] (23 bytes) gaia::Gaia::IsInitializing(void)
// int gaia::Gaia::IsInitializing();
// [0x1447280] (81 bytes) gaia::Gaia::SetUserToPerformActionsFor(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia::SetUserToPerformActionsFor(int a1, int a2, int a3);
// [0x14472e0] (76 bytes) gaia::Gaia::ResetUserToPerformActionsFor(void)
// int gaia::Gaia::ResetUserToPerformActionsFor();
// [0x1447330] (35 bytes) gaia::Gaia::GetNumberOfRequest(void)
// int gaia::Gaia::GetNumberOfRequest();
// [0x1447360] (201 bytes) gaia::Gaia::GetGLWTInstance(void)
// glwebtools::GlWebTools *gaia::Gaia::GetGLWTInstance();
// [0x1447640] (48 bytes) gaia::Gaia::IsLoggedIn(gaia::BaseServiceManager::Credentials)
// bool gaia::Gaia::IsLoggedIn(int a1, int a2);
// [0x1447670] (86 bytes) gaia::Gaia::GetInitializationAndLoginStatus(gaia::BaseServiceManager::Credentials)
// unsigned int gaia::Gaia::GetInitializationAndLoginStatus(int a1, int a2);
// [0x1447c60] (78 bytes) gaia::Gaia::GetJanusToken(gaia::BaseServiceManager::Credentials)
// int gaia::Gaia::GetJanusToken(int a1, int a2);
// [0x1448300] (89 bytes) gaia::Gaia::GetServiceUrl(gaia::BaseServiceManager::Credentials,char const*,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::GetServiceUrl(int a1, int a2, char *a3, int a4, char a5, int a6, int a7);
// [0x1448b30] (48 bytes) gaia::Gaia::GetServiceUrl(gaia::GaiaRequest &)
// int gaia::Gaia::GetServiceUrl(gaia::Gaia_Pandora **this, gaia::GaiaRequest *a2);
// [0x1448d60] (3209 bytes) gaia::Gaia::InternalInitialize(std::string const&,std::string const&,std::string const&,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// Json::Value *gaia::Gaia::InternalInitialize( gaia::BaseServiceManager ***a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, int a5, char a6, int a7, int a8);
// [0x14499f0] (155 bytes) gaia::Gaia::Initialize(std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// Json::Value *gaia::Gaia::Initialize( gaia::BaseServiceManager ***a1, uint32_t *a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7);
// [0x144a430] (418 bytes) gaia::Gaia::InternalInitialize(std::string const&,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// Json::Value *gaia::Gaia::InternalInitialize(gaia::Gaia *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x144a5e0] (139 bytes) gaia::Gaia::Initialize(std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// Json::Value *gaia::Gaia::Initialize(gaia::Gaia *a1, uint32_t *a2, char a3, int a4, int a5);
// [0x144a770] (48 bytes) gaia::Gaia::getServerTimeStamp(gaia::GaiaRequest &)
// int gaia::Gaia::getServerTimeStamp(gaia::Gaia_Pandora **this, gaia::GaiaRequest *a2);
// [0x144a910] (81 bytes) gaia::Gaia::GetServiceUrl(char const*,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::GetServiceUrl(int a1, char *a2, int a3, char a4, int a5, int a6);
// [0x144c1f0] (97 bytes) gaia::Gaia::RefreshAccessToken(std::string &,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::RefreshAccessToken(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x144c430] (97 bytes) gaia::Gaia::EncryptToken(std::string const&,std::string const&,void **,int *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::EncryptToken(int a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, char a6, int a7, int a8);
// [0x144c640] (81 bytes) gaia::Gaia::RetrievePassword(std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::RetrievePassword(int a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x144c940] (105 bytes) gaia::Gaia::CreateAccount(std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::CreateAccount( int a1, uint32_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x144cbc0] (89 bytes) gaia::Gaia::SendAuthentificate(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::SendAuthentificate(int a1, uint32_t *a2, uint32_t *a3, int a4, char a5, int a6, int a7);
// [0x144ea60] (40 bytes) gaia::Gaia::GetJanusStatus(void)
// int gaia::Gaia::GetJanusStatus(gaia::Gaia_Janus **this);
// [0x1451800] (334 bytes) gaia::Gaia::Update(void)
// int gaia::Gaia::Update(gaia::Gaia *this);
// [0x1451950] (83 bytes) gaia::Gaia::UpdateStatic(void *,void *)
// int gaia::Gaia::UpdateStatic(gaia::Gaia *this);
// [0x1451ab0] (73 bytes) gaia::Gaia::getServerTimeStamp(long &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::getServerTimeStamp(int a1, int *a2, char a3, int a4, int a5);
// [0x1452370] (303 bytes) gaia::Gaia::CancelAllRequests(void)
// int gaia::Gaia::CancelAllRequests(gaia::Gaia *this);
// [0x14524a0] (1743 bytes) gaia::Gaia::~Gaia()
// void gaia::Gaia::~Gaia(gaia::Gaia *this);
// [0x1452b70] (164 bytes) gaia::Gaia::DestroyInstance(void)
// int gaia::Gaia::DestroyInstance();
// [0x1452e70] (48 bytes) gaia::Gaia::Logout(gaia::BaseServiceManager::Credentials)
// int gaia::Gaia::Logout(int a1, int a2);
// [0x1457650] (2005 bytes) gaia::Gaia::GetCredentialDetails(gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::CredentialDetail,std::string &)
// int gaia::Gaia::GetCredentialDetails(gaia::Gaia *a1, int a2, int a3, gaia::Gaia *a4);
// [0x145c240] (48 bytes) gaia::Gaia::Authorize(gaia::GaiaRequest)
// int gaia::Gaia::Authorize(int a1, gaia::GaiaRequest *a2);
// [0x147efd0] (89 bytes) gaia::Gaia::Login(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::Login(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7);
// [0x147fa10] (97 bytes) gaia::Gaia::AddPermission(std::string const&,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::AddPermission(int a1, uint32_t *a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8);
// [0x14800d0] (105 bytes) gaia::Gaia::AddCredential(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::AddCredential( int a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1480350] (102 bytes) gaia::Gaia::AddAlias(gaia::BaseServiceManager::Credentials,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::AddAlias(int a1, int a2, int a3, char a4, int a5, int a6);
// [0x1480640] (98 bytes) gaia::Gaia::FindUserByAlias(gaia::BaseServiceManager::Credentials,std::string &,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::FindUserByAlias(int a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x14809f0] (105 bytes) gaia::Gaia::SetDeviceInfo(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::SetDeviceInfo( int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1480a60] (56 bytes) gaia::Gaia::StartAndAuthorizeJanus(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia::StartAndAuthorizeJanus(int a1, int a2, uint32_t *a3);
// [0x1480aa0] (81 bytes) gaia::Gaia::Authorize(std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::Authorize(int a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x1496150] (97 bytes) gaia::Gaia::Login(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::Login(int a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x14967c0] (81 bytes) gaia::Gaia::GetCredentialListForAccount(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::GetCredentialListForAccount(int a1, int a2, int a3, char a4, int a5, int a6);
// [0x1499390] (5022 bytes) gaia::Gaia::PerformAsyncActionDataContainerPtr(void *,void *)
// int gaia::Gaia::PerformAsyncActionDataContainerPtr( long double a1, gaia::Gaia *this, gaia::GaiaRequest *a3);
// [0x149b5f0] (73 bytes) gaia::Gaia::GetMinimalFedAccountList(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia::GetMinimalFedAccountList(int a1, int a2, char a3, int a4, int a5);
// [0x149cf50] (32165 bytes) gaia::Gaia::PerformAsyncAction(void *,void *)
// int gaia::Gaia::PerformAsyncAction(long double a1, gaia::Gaia *this, uint32_t *a3);
// [0x14e6f10] (253 bytes) gaia::Gaia::RunInstalledAppDetection(void)
// void gaia::Gaia::RunInstalledAppDetection();
