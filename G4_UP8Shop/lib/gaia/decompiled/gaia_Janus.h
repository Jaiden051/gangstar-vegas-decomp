#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_Janus.h
// Library: gaia | Module: gaia_Janus
// Binary Address Span: 0x14abaf0 .. 0x14c87a0 (31 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14abaf0] (924 bytes) gaia::Janus::ConstructJanusAuthScopesLog(void)
// gaia::Janus *gaia::Janus::ConstructJanusAuthScopesLog(gaia::Janus *this, gaia::BaseServiceManager *a2);
// [0x14ac420] (383 bytes) gaia::Janus::FlushTokensLoggedAccount(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&)
// int gaia::Janus::FlushTokensLoggedAccount(uint32_t *a1, int a2, const void **a3, const void **a4);
// [0x14ac5a0] (132 bytes) gaia::Janus::FlushTokens(void)
// int gaia::Janus::FlushTokens(void **this);
// [0x14ac630] (111 bytes) gaia::Janus::~Janus()
// void gaia::Janus::~Janus(void **this);
// [0x14ac6a0] (56 bytes) gaia::Janus::~Janus()
// void gaia::Janus::~Janus(void **this);
// [0x14ac6e0] (284 bytes) gaia::Janus::FlushTokens(gaia::BaseServiceManager::Credentials)
// int gaia::Janus::FlushTokens(uint32_t *a1, int a2);
// [0x14b22f0] (508 bytes) gaia::Janus::SetApprovalStatus_Reject(std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::SetApprovalStatus_Reject( gaia::BaseServiceManager *a1, char **a2, char **a3, gaia::GaiaRequest *a4);
// [0x14b24f0] (594 bytes) gaia::Janus::AddPermission(std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::AddPermission( gaia::BaseServiceManager *a1, char **a2, int a3, char **a4, char **a5, gaia::GaiaRequest *a6);
// [0x14b2750] (545 bytes) gaia::Janus::RemoveCredential(gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::RemoveCredential( gaia::BaseServiceManager *a1, int a2, int a3, char **a4, gaia::GaiaRequest *a5);
// [0x14b2980] (727 bytes) gaia::Janus::AddCredential(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::AddCredential( gaia::BaseServiceManager *a1, int a2, char **a3, int a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b2c60] (375 bytes) gaia::Janus::RetrievePassword(std::string const&,gaia::BaseServiceManager::Credentials,gaia::GaiaRequest *)
// int gaia::Janus::RetrievePassword(gaia::BaseServiceManager *a1, char **a2, int a3, gaia::GaiaRequest *a4);
// [0x14b2de0] (625 bytes) gaia::Janus::CreateAccount(std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::CreateAccount( gaia::BaseServiceManager *a1, char **a2, int a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b3060] (631 bytes) gaia::Janus::SetDeviceInfo(std::string const&,std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::SetDeviceInfo( gaia::BaseServiceManager *a1, char **a2, char **a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b32e0] (590 bytes) gaia::Janus::sendAuthentificate(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,gaia::GaiaRequest *)
// int gaia::Janus::sendAuthentificate(char **a1, char **a2, char **a3, int a4, gaia::GaiaRequest *a5);
// [0x14b3530] (733 bytes) gaia::Janus::ChangePassword(std::string &,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::ChangePassword( gaia::BaseServiceManager *a1, char **a2, int a3, int a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b6c70] (589 bytes) gaia::Janus::TransferCodeToken(std::string &,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::TransferCodeToken(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14b6ec0] (296 bytes) gaia::Janus::CreateTransferCode(std::string &,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::CreateTransferCode(int a1, int a2, char **a3, gaia::GaiaRequest *a4);
// [0x14b6ff0] (522 bytes) gaia::Janus::RefreshAccessToken(std::string &,std::string const&,std::string const&,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::RefreshAccessToken( int a1, int a2, int a3, char **a4, char **a5, char **a6, gaia::GaiaRequest *a7);
// [0x14b7200] (326 bytes) gaia::Janus::AddAlias(std::string &,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::AddAlias(int a1, int a2, char **a3, gaia::GaiaRequest *a4);
// [0x14b7350] (372 bytes) gaia::Janus::FindUserByAlias(std::string &,std::string const&,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::FindUserByAlias(int a1, int a2, char **a3, char **a4, gaia::GaiaRequest *a5);
// [0x14b74d0] (1191 bytes) gaia::Janus::AuthorizeExclusive(std::string &,std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,std::string const&,gaia::BaseServiceManager::Credentials,gaia::GaiaRequest *)
// int gaia::Janus::AuthorizeExclusive( int a1, int a2, int a3, char **a4, int a5, char **a6, char **a7, char a8, char **a9, int a10, gaia::GaiaRequest *a11);
// [0x14b9e20] (412 bytes) gaia::Janus::EncryptToken(std::string const&,std::string const&,void *&,int *,gaia::GaiaRequest *)
// int gaia::Janus::EncryptToken( gaia::BaseServiceManager *a1, char **a2, char **a3, void **a4, int *a5, gaia::GaiaRequest *a6);
// [0x14b9fc0] (327 bytes) gaia::Janus::GetCredentialListForAccount(void *&,int *,std::string const&,gaia::GaiaRequest *)
// int gaia::Janus::GetCredentialListForAccount( gaia::BaseServiceManager *a1, void **a2, int *a3, char **a4, gaia::GaiaRequest *a5);
// [0x14c0e20] (238 bytes) gaia::Janus::Janus(std::string const&,std::string const&)
// int gaia::Janus::Janus(gaia::BaseServiceManager *a1, int a2, int a3);
// [0x14c0fc0] (122 bytes) gaia::Janus::UpdateTokens(void)
// int gaia::Janus::UpdateTokens(gaia::Janus *this);
// [0x14c1040] (195 bytes) gaia::Janus::GetJanusToken(gaia::BaseServiceManager::Credentials,std::string &)
// int gaia::Janus::GetJanusToken(gaia::Janus *a1, int a2, uint32_t *a3);
// [0x14c1110] (210 bytes) gaia::Janus::GetJanusRefreshToken(gaia::BaseServiceManager::Credentials,std::string &)
// int gaia::Janus::GetJanusRefreshToken(gaia::Janus *a1, int a2, int a3);
// [0x14c11f0] (274 bytes) gaia::Janus::GetJanusToken(gaia::BaseServiceManager::Credentials)
// int gaia::Janus::GetJanusToken(int a1, gaia::Janus *a2, int a3);
// [0x14c1310] (381 bytes) gaia::Janus::GetJanusApprovals(gaia::BaseServiceManager::Credentials,gaia::BaseJSONServiceResponse &)
// int gaia::Janus::GetJanusApprovals(uint32_t *a1, int a2, Json::Value *a3);
// [0x14c1490] (8890 bytes) gaia::Janus::Authorize(std::string const&,std::string const&,gaia::BaseServiceManager::Credentials,std::string const&,std::string const&,bool,std::string const&,gaia::BaseServiceManager::Credentials,gaia::GaiaRequest *)
// int gaia::Janus::Authorize( char **a1, int a2, char **a3, int a4, uint32_t *a5, char **a6, int a7, char **a8, int a9, gaia::GaiaRequest *a10);
// [0x14c87a0] (2545 bytes) gaia::Janus::JanusToken::UpdateScopeList(long)
// void gaia::Janus::JanusToken::UpdateScopeList(gaia::Janus::JanusToken *this, int a2);
