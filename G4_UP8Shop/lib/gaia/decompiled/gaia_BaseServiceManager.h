#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_BaseServiceManager.h
// Library: gaia | Module: gaia_BaseServiceManager
// Binary Address Span: 0x14a9f00 .. 0x14c7140 (31 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14a9f00] (9 bytes) gaia::BaseServiceManager::setServerDate(std::string const&)
// void gaia::BaseServiceManager::setServerDate();
// [0x14a9f10] (9 bytes) gaia::BaseServiceManager::setFinalServicesUrls(char *,gaia::ServiceRequest *)
// void gaia::BaseServiceManager::setFinalServicesUrls();
// [0x14a9f20] (9 bytes) gaia::BaseServiceManager::ProcessServerSideEvent(glwebtools::UrlConnection &)
// void gaia::BaseServiceManager::ProcessServerSideEvent();
// [0x14a9f40] (70 bytes) gaia::BaseServiceManager::getServerDate(void)
// gaia::BaseServiceManager *gaia::BaseServiceManager::getServerDate(gaia::BaseServiceManager *this);
// [0x14a9f90] (103 bytes) gaia::BaseServiceManager::GetState(glwebtools::UrlConnection &)
// int gaia::BaseServiceManager::GetState(gaia::BaseServiceManager *this, glwebtools::UrlConnection *a2);
// [0x14aa0a0] (765 bytes) gaia::BaseServiceManager::StartRequest(glwebtools::UrlConnection &,gaia::ServiceRequest *)
// int gaia::BaseServiceManager::StartRequest( glwebtools::GlWebToolsCore ***this, glwebtools::UrlConnection *a2, gaia::ServiceRequest *a3);
// [0x14aa470] (878 bytes) gaia::BaseServiceManager::~BaseServiceManager()
// void gaia::BaseServiceManager::~BaseServiceManager(gaia::BaseServiceManager *this);
// [0x14aa9a0] (56 bytes) gaia::BaseServiceManager::~BaseServiceManager()
// void gaia::BaseServiceManager::~BaseServiceManager(gaia::BaseServiceManager *this);
// [0x14aae70] (116 bytes) gaia::BaseServiceManager::GetCredentialString(gaia::BaseServiceManager::Credentials const&)
// int gaia::BaseServiceManager::GetCredentialString(int a1, uint32_t *a2);
// [0x14aaef0] (82 bytes) gaia::BaseServiceManager::GetCredentialFromString(std::string const&)
// int gaia::BaseServiceManager::GetCredentialFromString(int a1);
// [0x14aaf50] (364 bytes) gaia::BaseServiceManager::CancelRequest(gaia::BaseServiceManager::CancelRequestType)
// int gaia::BaseServiceManager::CancelRequest(int a1, unsigned int a2);
// [0x14ab0c0] (632 bytes) gaia::BaseServiceManager::UpdateRunningRequests(void)
// gaia::ServiceRequest *gaia::BaseServiceManager::UpdateRunningRequests(gaia::BaseServiceManager *this);
// [0x14ab340] (301 bytes) gaia::BaseServiceManager::GetNextRequest(void)
// gaia::ServiceRequest *gaia::BaseServiceManager::GetNextRequest(gaia::BaseServiceManager *this);
// [0x14ab470] (1006 bytes) gaia::BaseServiceManager::StartNewRequests(void)
// gaia::ServiceRequest *gaia::BaseServiceManager::StartNewRequests(gaia::BaseServiceManager *this);
// [0x14ab860] (259 bytes) gaia::BaseServiceManager::DeleteUnusedConnections(void)
// void gaia::BaseServiceManager::DeleteUnusedConnections(gaia::BaseServiceManager *this);
// [0x14ab970] (172 bytes) gaia::BaseServiceManager::appendEncodedParams(std::string &,std::string const&,std::string const&)
// uint32_t *gaia::BaseServiceManager::appendEncodedParams(int a1, int a2, uint32_t *a3, char **a4);
// [0x14aba20] (13 bytes) gaia::BaseServiceManager::ForceRefreshLink(void)
// gaia::BaseServiceManager *gaia::BaseServiceManager::ForceRefreshLink(gaia::BaseServiceManager *this);
// [0x14aba30] (46 bytes) gaia::BaseServiceManager::GetTimeStamp(void)
// __time_t gaia::BaseServiceManager::GetTimeStamp();
// [0x14aba60] (62 bytes) gaia::BaseServiceManager::ResetUsageCount(void)
// __time_t gaia::BaseServiceManager::ResetUsageCount(gaia::BaseServiceManager *this);
// [0x14abaa0] (67 bytes) gaia::BaseServiceManager::UpdateServiceUrl(std::string const&)
// __time_t gaia::BaseServiceManager::UpdateServiceUrl(gaia::BaseServiceManager *a1, int a2);
// [0x14abe90] (129 bytes) gaia::BaseServiceManager::Update(void)
// int gaia::BaseServiceManager::Update(gaia::BaseServiceManager *this);
// [0x14acf80] (182 bytes) gaia::BaseServiceManager::SendCompleteRequest(gaia::ServiceRequest *)
// int gaia::BaseServiceManager::SendCompleteRequest(gaia::BaseServiceManager *this, gaia::ServiceRequest *a2);
// [0x14b3810] (217 bytes) gaia::BaseServiceManager::SendCompleteRequest(gaia::ServiceRequest *,std::string &)
// int gaia::BaseServiceManager::SendCompleteRequest(int a1, gaia::ServiceRequest *a2, int a3);
// [0x14b7b00] (256 bytes) gaia::BaseServiceManager::SendCompleteRequest(gaia::ServiceRequest *,void *&,int *)
// int gaia::BaseServiceManager::SendCompleteRequest( gaia::BaseServiceManager *this, gaia::ServiceRequest *a2, void **a3, int *a4);
// [0x14ba110] (1316 bytes) gaia::BaseServiceManager::ParseMessages(void const*,int,std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &,gaia::BaseJSONServiceResponse::JSONServiceResponseType)
// int gaia::BaseServiceManager::ParseMessages(char *a1, int a2, Json::ValueIterator **a3, int a4);
// [0x14ba640] (1108 bytes) gaia::BaseServiceManager::appendEncodedParams(std::string &,std::string const&,unsigned int const&,bool)
// uint32_t *gaia::BaseServiceManager::appendEncodedParams(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5);
// [0x14bd4b0] (1116 bytes) gaia::BaseServiceManager::appendEncodedParams(std::string &,std::string const&,int const&,bool)
// uint32_t *gaia::BaseServiceManager::appendEncodedParams(int a1, int a2, uint32_t *a3, uint32_t *a4, char a5);
// [0x14bff20] (1215 bytes) gaia::BaseServiceManager::CancelRequest(gaia::OpCodes)
// int gaia::BaseServiceManager::CancelRequest(char *a1, int a2);
// [0x14c03e0] (1004 bytes) gaia::BaseServiceManager::BaseServiceManager(std::string const&,std::string const&,int)
// int gaia::BaseServiceManager::BaseServiceManager(gaia::BaseServiceManager *a1, int a2, int a3, int a4);
// [0x14c3750] (1529 bytes) gaia::BaseServiceManager::CompleteRequest(glwebtools::UrlConnection &,gaia::ServiceRequest *)
// int gaia::BaseServiceManager::CompleteRequest( gaia::BaseServiceManager *this, glwebtools::UrlConnection *a2, const char ***a3);
// [0x14c7140] (13 bytes) gaia::BaseServiceManager::NeedsLinkRefreshing(void)
// int gaia::BaseServiceManager::NeedsLinkRefreshing(gaia::BaseServiceManager *this);
