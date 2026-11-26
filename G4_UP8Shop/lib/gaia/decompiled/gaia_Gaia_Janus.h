#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Gaia_Janus.h
// Library: gaia | Module: gaia_Gaia_Janus
// Binary Address Span: 0x1447500 .. 0x149a730 (59 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x1447500] (196 bytes) gaia::Gaia_Janus::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::Gaia_Janus::CancelRequest(glwebtools::Mutex *a1, int a2);
// [0x14475d0] (106 bytes) gaia::Gaia_Janus::IsLoggedIn(gaia::BaseServiceManager::Credentials)
// bool gaia::Gaia_Janus::IsLoggedIn(int a1, int a2);
// [0x14476d0] (275 bytes) gaia::Gaia_Janus::IsLoggedIn(gaia::BaseServiceManager::Credentials,std::string const&)
// bool gaia::Gaia_Janus::IsLoggedIn(int a1, int a2, const void **a3);
// [0x14477f0] (135 bytes) gaia::Gaia_Janus::GetJanusApprovals(gaia::BaseServiceManager::Credentials,gaia::BaseJSONServiceResponse &)
// int gaia::Gaia_Janus::GetJanusApprovals(glwebtools::Mutex *a1, int a2, Json::Value *a3);
// [0x1447880] (135 bytes) gaia::Gaia_Janus::GetJanusRefreshToken(gaia::BaseServiceManager::Credentials,std::string &)
// int gaia::Gaia_Janus::GetJanusRefreshToken(glwebtools::Mutex *a1, int a2, int a3);
// [0x1447910] (482 bytes) gaia::Gaia_Janus::GetJanusRefreshToken(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::GetJanusRefreshToken(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1447b00] (135 bytes) gaia::Gaia_Janus::GetJanusToken(gaia::BaseServiceManager::Credentials,std::string &)
// int gaia::Gaia_Janus::GetJanusToken(glwebtools::Mutex *a1, int a2, int a3);
// [0x1447b90] (196 bytes) gaia::Gaia_Janus::GetJanusToken(gaia::BaseServiceManager::Credentials)
// int gaia::Gaia_Janus::GetJanusToken(int a1, glwebtools::Mutex *a2);
// [0x1447cb0] (745 bytes) gaia::Gaia_Janus::AuthorizeExclusive(std::string &,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// char gaia::Gaia_Janus::AuthorizeExclusive( int a1, gaia::Gaia *a2, uint32_t *a3, int a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x144b040] (358 bytes) gaia::Gaia_Janus::GetJanusStatus(void)
// int gaia::Gaia_Janus::GetJanusStatus(gaia::Gaia_Janus *this);
// [0x144b1b0] (2628 bytes) gaia::Gaia_Janus::ChangePassword(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::ChangePassword(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x144bc00] (844 bytes) gaia::Gaia_Janus::ChangePassword(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::ChangePassword( gaia::Gaia_Janus *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x144bf50] (664 bytes) gaia::Gaia_Janus::RefreshAccessToken(std::string &,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::RefreshAccessToken( gaia::Gaia_Janus *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x144c260] (452 bytes) gaia::Gaia_Janus::EncryptToken(std::string const&,std::string const&,void **,int *,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::EncryptToken( gaia::Gaia *a1, uint32_t *a2, uint32_t *a3, void **a4, int *a5, char a6, int a7, int a8);
// [0x144c4a0] (408 bytes) gaia::Gaia_Janus::RetrievePassword(std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::RetrievePassword(gaia::Gaia *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x144c6a0] (664 bytes) gaia::Gaia_Janus::CreateAccount(std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::CreateAccount( gaia::Gaia *a1, uint32_t *a2, int a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x144c9b0] (518 bytes) gaia::Gaia_Janus::SendAuthentificate(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::SendAuthentificate( gaia::Gaia *a1, uint32_t *a2, uint32_t *a3, int a4, char a5, int a6, int a7);
// [0x144cc20] (1326 bytes) gaia::Gaia_Janus::RefreshAccessToken(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::RefreshAccessToken(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x144d150] (1160 bytes) gaia::Gaia_Janus::EncryptToken(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::EncryptToken(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x144d5e0] (710 bytes) gaia::Gaia_Janus::TransferCodeToken(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::TransferCodeToken(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x144d8b0] (830 bytes) gaia::Gaia_Janus::RetrievePassword(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::RetrievePassword(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x144dbf0] (1931 bytes) gaia::Gaia_Janus::CreateAccount(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::CreateAccount(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x144e380] (1141 bytes) gaia::Gaia_Janus::SendAuthentificate(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::SendAuthentificate(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x144e800] (606 bytes) gaia::Gaia_Janus::GetJanusToken(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::GetJanusToken(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1452c20] (591 bytes) gaia::Gaia_Janus::Logout(gaia::BaseServiceManager::Credentials)
// int gaia::Gaia_Janus::Logout(int a1, int a2);
// [0x1452ea0] (492 bytes) gaia::Gaia_Janus::GetJanusApprovals(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::GetJanusApprovals(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1457e30] (3077 bytes) gaia::Gaia_Janus::Authorize(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::Authorize(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1458a40] (119 bytes) gaia::Gaia_Janus::StartAndAuthorizeJanus(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::StartAndAuthorizeJanus(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1458ac0] (721 bytes) gaia::Gaia_Janus::GetAccessToken(gaia::GaiaRequest &,std::string,std::string &)
// int gaia::Gaia_Janus::GetAccessToken(gaia::Gaia *a1, gaia::GaiaRequest *a2, uint32_t *a3, int a4);
// [0x1458da0] (818 bytes) gaia::Gaia_Janus::SetApprovalStatus_Reject(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::SetApprovalStatus_Reject(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x14590e0] (403 bytes) gaia::Gaia_Janus::SetApprovalStatus_Reject(gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::SetApprovalStatus_Reject( gaia::Gaia_Janus *a1, int a2, uint32_t *a3, char a4, int a5, int a6);
// [0x1459280] (1158 bytes) gaia::Gaia_Janus::AddCredentialWithTokenRefresh(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::AddCredentialWithTokenRefresh(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1459710] (426 bytes) gaia::Gaia_Janus::AddCredentialWithTokenRefresh(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::AddCredentialWithTokenRefresh( gaia::Gaia_Janus *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9);
// [0x14598c0] (980 bytes) gaia::Gaia_Janus::AddAlias(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::AddAlias(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1459ca0] (1049 bytes) gaia::Gaia_Janus::FindUserByAlias(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::FindUserByAlias(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x145a0c0] (617 bytes) gaia::Gaia_Janus::CreateTransferCode(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::CreateTransferCode(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x145a330] (122 bytes) gaia::Gaia_Janus::TransferCodeToken(std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::TransferCodeToken(gaia::Gaia_Janus *a1, int a2, char a3, int a4, int a5);
// [0x145a3b0] (119 bytes) gaia::Gaia_Janus::CreateTransferCode(bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::CreateTransferCode(gaia::Gaia_Janus *a1, char a2, int a3, int a4);
// [0x145a430] (1801 bytes) gaia::Gaia_Janus::AddPermission(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::AddPermission(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x145ab40] (1341 bytes) gaia::Gaia_Janus::RemoveCredential(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::RemoveCredential(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x145b080] (2115 bytes) gaia::Gaia_Janus::AddCredential(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::AddCredential(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x145b8d0] (2407 bytes) gaia::Gaia_Janus::SetDeviceInfo(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::SetDeviceInfo(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x147ea60] (1377 bytes) gaia::Gaia_Janus::Login(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::Login(gaia::Gaia *a1, int a2, uint32_t *a3, uint32_t *a4, char a5, int a6, int a7);
// [0x147f030] (1609 bytes) gaia::Gaia_Janus::Authorize(std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::Authorize(gaia::Gaia_Janus *a1, uint32_t *a2, int a3, char a4, int a5, int a6);
// [0x147f680] (121 bytes) gaia::Gaia_Janus::StartAndAuthorizeJanus(gaia::BaseServiceManager::Credentials,std::string const&)
// int gaia::Gaia_Janus::StartAndAuthorizeJanus(gaia::Gaia_Janus *a1, int a2, uint32_t *a3);
// [0x147f700] (783 bytes) gaia::Gaia_Janus::AddPermission(std::string const&,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::AddPermission( gaia::Gaia_Janus *a1, uint32_t *a2, int a3, int a4, uint32_t *a5, char a6, int a7, int a8);
// [0x147fa80] (684 bytes) gaia::Gaia_Janus::RemoveCredential(gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::RemoveCredential( gaia::Gaia_Janus *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x147fd30] (923 bytes) gaia::Gaia_Janus::AddCredential(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::AddCredential( gaia::Gaia_Janus *a1, uint32_t *a2, uint32_t *a3, int a4, int a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1480140] (523 bytes) gaia::Gaia_Janus::AddAlias(gaia::BaseServiceManager::Credentials,std::string &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::AddAlias(gaia::Gaia *a1, int a2, int a3, char a4, int a5, int a6);
// [0x14803c0] (629 bytes) gaia::Gaia_Janus::FindUserByAlias(gaia::BaseServiceManager::Credentials,std::string &,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::FindUserByAlias(gaia::Gaia *a1, int a2, int a3, uint32_t *a4, char a5, int a6, int a7);
// [0x14806b0] (823 bytes) gaia::Gaia_Janus::SetDeviceInfo(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::SetDeviceInfo( gaia::Gaia *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, uint32_t *a6, char a7, int a8, int a9);
// [0x1495bc0] (1417 bytes) gaia::Gaia_Janus::Login(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::Login( gaia::Gaia *a1, int a2, uint32_t *a3, uint32_t *a4, uint32_t *a5, char a6, int a7, int a8);
// [0x14961c0] (1118 bytes) gaia::Gaia_Janus::GetCredentialListForAccount(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::GetCredentialListForAccount( gaia::Gaia_Janus *a1, int a2, const void **a3, uint32_t *a4, int a5, char a6, int a7, int a8);
// [0x1496620] (401 bytes) gaia::Gaia_Janus::GetCredentialListForAccount(gaia::BaseServiceManager::Credentials,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::GetCredentialListForAccount( gaia::Gaia_Janus *a1, int a2, int a3, char a4, int a5, int a6);
// [0x1496820] (3009 bytes) gaia::Gaia_Janus::CheckForConflictingCredentials(gaia::BaseServiceManager::Credentials,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::CheckForConflictingCredentials( gaia::Gaia_Janus *a1, int a2, int a3, const void **a4, uint32_t *a5, int a6, char a7, int a8, int a9);
// [0x14973f0] (1665 bytes) gaia::Gaia_Janus::AuthorizeExclusive(std::string &,std::string const&,gaia::BaseServiceManager::Credentials,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::AuthorizeExclusive( gaia::Gaia_Janus *a1, int a2, uint32_t *a3, int a4, char a5, int a6, int a7);
// [0x1497a80] (2813 bytes) gaia::Gaia_Janus::AuthorizeExclusive(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::AuthorizeExclusive(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x1498580] (3594 bytes) gaia::Gaia_Janus::Login(gaia::GaiaRequest &)
// int gaia::Gaia_Janus::Login(gaia::Gaia_Janus *this, gaia::GaiaRequest *a2);
// [0x149a730] (3768 bytes) gaia::Gaia_Janus::GetMinimalFedAccountList(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,bool,void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::Gaia_Janus::GetMinimalFedAccountList(gaia::Gaia *a1, int a2, char a3, int a4, int a5);
