#pragma once
// ============================================================================
// G4_UP8Shop/lib/gaia/decompiled/gaia_GaiaRequest.h
// Library: gaia | Module: gaia_GaiaRequest
// Binary Address Span: 0x14cf6f0 .. 0x14e1b40 (55 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x14cf6f0] (159 bytes) gaia::GaiaRequest::GaiaRequest(gaia::GaiaRequest const&)
// int gaia::GaiaRequest::GaiaRequest(gaia::GaiaRequest *this, glwebtools::Mutex **a2);
// [0x14cf790] (73 bytes) gaia::GaiaRequest::Grab(void)
// int gaia::GaiaRequest::Grab(gaia::GaiaRequest *this);
// [0x14cf7e0] (81 bytes) gaia::GaiaRequest::Drop(void)
// int gaia::GaiaRequest::Drop(gaia::GaiaRequest *this);
// [0x14cf840] (29 bytes) gaia::GaiaRequest::SetRunAsynchronous(void (*)(gaia::GaiaRequest),void *)
// int gaia::GaiaRequest::SetRunAsynchronous( gaia::GaiaRequest *this, void (__high *a2)(gaia::GaiaRequest), void *a3);
// [0x14cf860] (13 bytes) gaia::GaiaRequest::GetCaller(void)
// int gaia::GaiaRequest::GetCaller(gaia::GaiaRequest *this);
// [0x14cf8d0] (15 bytes) gaia::GaiaRequest::SetUserData(void *)
// int gaia::GaiaRequest::SetUserData(gaia::GaiaRequest *this, void *a2);
// [0x14cf8e0] (17 bytes) gaia::GaiaRequest::GetUserData(void *&)
// void **gaia::GaiaRequest::GetUserData(gaia::GaiaRequest *this, void **a2);
// [0x14cf900] (48 bytes) gaia::GaiaRequest::SetAccessToken(std::string const&)
// int gaia::GaiaRequest::SetAccessToken(int a1, int a2);
// [0x14cf930] (45 bytes) gaia::GaiaRequest::operator[](std::string const&)
// int gaia::GaiaRequest::operator[](int a1, char **a2);
// [0x14cf960] (14 bytes) gaia::GaiaRequest::SetKairosCallback(void *)
// gaia::GaiaRequest *gaia::GaiaRequest::SetKairosCallback(gaia::GaiaRequest *this, void *a2);
// [0x14cf970] (12 bytes) gaia::GaiaRequest::GetResponseType(void)
// int gaia::GaiaRequest::GetResponseType(gaia::GaiaRequest *this);
// [0x14cf980] (13 bytes) gaia::GaiaRequest::isValid(void)
// int gaia::GaiaRequest::isValid(gaia::GaiaRequest *this);
// [0x14cf990] (44 bytes) gaia::GaiaRequest::GetResponse(void *&,int &)
// int gaia::GaiaRequest::GetResponse(gaia::GaiaRequest *this, void **a2, int *a3);
// [0x14cf9c0] (158 bytes) gaia::GaiaRequest::GetResponse(std::string &)
// int gaia::GaiaRequest::GetResponse(int a1, int a2);
// [0x14cfa60] (32 bytes) gaia::GaiaRequest::GetResponse(long &)
// int gaia::GaiaRequest::GetResponse(gaia::GaiaRequest *this, int *a2);
// [0x14cfa80] (13 bytes) gaia::GaiaRequest::GetResponseCode(void)
// int gaia::GaiaRequest::GetResponseCode(gaia::GaiaRequest *this);
// [0x14cfa90] (13 bytes) gaia::GaiaRequest::GetEtag(void)const
// int gaia::GaiaRequest::GetEtag(gaia::GaiaRequest *this);
// [0x14cfaa0] (48 bytes) gaia::GaiaRequest::SetEtag(std::string const&)
// int gaia::GaiaRequest::SetEtag(int a1, int a2);
// [0x14cfad0] (15 bytes) gaia::GaiaRequest::SetAsyncOperation(bool)
// int gaia::GaiaRequest::SetAsyncOperation(gaia::GaiaRequest *this, bool a2);
// [0x14cfae0] (79 bytes) gaia::GaiaRequest::GetInputValue(char const*)
// gaia::GaiaRequest *gaia::GaiaRequest::GetInputValue(gaia::GaiaRequest *this, Json::Value **a2, char *a3);
// [0x14cfb30] (79 bytes) gaia::GaiaRequest::GetInputValue(std::string)
// Json::Value *gaia::GaiaRequest::GetInputValue(Json::Value *a1, int a2, char **a3);
// [0x14cfb80] (15 bytes) gaia::GaiaRequest::SetResponseCode(int)
// int gaia::GaiaRequest::SetResponseCode(gaia::GaiaRequest *this, int a2);
// [0x14cfb90] (15 bytes) gaia::GaiaRequest::SetOperationCode(gaia::OpCodes)
// int gaia::GaiaRequest::SetOperationCode(int a1, int a2);
// [0x14cfba0] (13 bytes) gaia::GaiaRequest::GetOperationCode(void)
// int gaia::GaiaRequest::GetOperationCode(gaia::GaiaRequest *this);
// [0x14cfbb0] (29 bytes) gaia::GaiaRequest::SetRunAsynchronous(void (*)(gaia::OpCodes,std::string const&,int,void *),void *)
// int gaia::GaiaRequest::SetRunAsynchronous(int a1, int a2, int a3);
// [0x14cfbd0] (66 bytes) gaia::GaiaRequest::GetAccessToken(void)
// gaia::GaiaRequest *gaia::GaiaRequest::GetAccessToken(gaia::GaiaRequest *this, int a2);
// [0x14cfc20] (13 bytes) gaia::GaiaRequest::GetHermesBaseMessage(void)
// int gaia::GaiaRequest::GetHermesBaseMessage(gaia::GaiaRequest *this);
// [0x14cfc30] (14 bytes) gaia::GaiaRequest::SetParamsForOutput(long &)
// gaia::GaiaRequest *gaia::GaiaRequest::SetParamsForOutput(gaia::GaiaRequest *this, int *a2);
// [0x14cfc40] (19 bytes) gaia::GaiaRequest::SetParamsForOutput(void *&,int &)
// gaia::GaiaRequest *gaia::GaiaRequest::SetParamsForOutput(gaia::GaiaRequest *this, void **a2, int *a3);
// [0x14cfc60] (14 bytes) gaia::GaiaRequest::SetParamsForOutput(std::string &)
// int gaia::GaiaRequest::SetParamsForOutput(int a1, int a2);
// [0x14cfc70] (14 bytes) gaia::GaiaRequest::SetParamsForOutput(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &)
// gaia::GaiaRequest *gaia::GaiaRequest::SetParamsForOutput( gaia::GaiaRequest *this, std::vector<gaia::BaseJSONServiceResponse> *a2);
// [0x14cfc80] (14 bytes) gaia::GaiaRequest::isAsyncOperation(void)
// int gaia::GaiaRequest::isAsyncOperation(gaia::GaiaRequest *this);
// [0x14cfc90] (141 bytes) gaia::GaiaRequest::ValidateMandatoryParam(std::string const&,Json::ValueType)
// int gaia::GaiaRequest::ValidateMandatoryParam(Json::Value **a1, char **a2, int a3);
// [0x14cfd20] (154 bytes) gaia::GaiaRequest::ValidateOptionalParam(std::string const&,Json::ValueType)
// int gaia::GaiaRequest::ValidateOptionalParam(Json::Value **a1, char **a2, int a3);
// [0x14cfdc0] (13 bytes) gaia::GaiaRequest::GetID(void)
// int64_t gaia::GaiaRequest::GetID(gaia::GaiaRequest *this);
// [0x14cfdd0] (62 bytes) gaia::GaiaRequest::Cancel(void)
// uint8_t *gaia::GaiaRequest::Cancel(gaia::GaiaRequest *this);
// [0x14cfe10] (13 bytes) gaia::GaiaRequest::IsCanceled(void)
// int gaia::GaiaRequest::IsCanceled(gaia::GaiaRequest *this);
// [0x14cfe20] (96 bytes) gaia::GaiaRequest::MakeID(void)
// uint64_t gaia::GaiaRequest::MakeID();
// [0x14cfe80] (12 bytes) gaia::GaiaRequest::GetPriority(void)
// int gaia::GaiaRequest::GetPriority(gaia::GaiaRequest *this);
// [0x14cfe90] (14 bytes) gaia::GaiaRequest::SetPriority(gaia::GaiaRequest::ePriority)
// uint32_t *gaia::GaiaRequest::SetPriority(int a1, int a2);
// [0x14d1f90] (295 bytes) gaia::GaiaRequest::GaiaRequest(void)
// gaia::GaiaRequest *gaia::GaiaRequest::GaiaRequest(gaia::GaiaRequest *this);
// [0x14d21b0] (67 bytes) gaia::GaiaRequest::SetResponse(long)
// gaia::InputOutputDataContainer *gaia::GaiaRequest::SetResponse(gaia::GaiaRequest *this, int a2);
// [0x14d2270] (149 bytes) gaia::GaiaRequest::SetResponse(void *,int &)
// void *gaia::GaiaRequest::SetResponse(gaia::GaiaRequest *this, void *src, int *a3);
// [0x14d2340] (95 bytes) gaia::GaiaRequest::SetResponse(std::string &)
// int gaia::GaiaRequest::SetResponse(int a1, int a2);
// [0x14d2bb0] (1262 bytes) gaia::GaiaRequest::Serialize(void)
// gaia::GaiaRequest *gaia::GaiaRequest::Serialize(gaia::GaiaRequest *this, int a2);
// [0x14da140] (95 bytes) gaia::GaiaRequest::SetResponse(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> const&)
// std::vector<gaia::BaseJSONServiceResponse> *gaia::GaiaRequest::SetResponse( gaia::GaiaRequest *this, const std::vector<gaia::BaseJSONServiceResponse> *a2);
// [0x14da1a0] (63 bytes) gaia::GaiaRequest::GetResponse(std::vector<gaia::BaseJSONServiceResponse,std::allocator<gaia::BaseJSONServiceResponse>> &)
// int gaia::GaiaRequest::GetResponse(gaia::GaiaRequest *this, std::vector<gaia::BaseJSONServiceResponse> *a2);
// [0x14daec0] (298 bytes) gaia::GaiaRequest::DeleteReferences(void)
// void gaia::GaiaRequest::DeleteReferences(gaia::GaiaRequest *this);
// [0x14daff0] (229 bytes) gaia::GaiaRequest::operator=(gaia::GaiaRequest const&)
// gaia::GaiaRequest *gaia::GaiaRequest::operator=(gaia::GaiaRequest *this, const gaia::GaiaRequest *a2);
// [0x14db0e0] (65 bytes) gaia::GaiaRequest::~GaiaRequest()
// void gaia::GaiaRequest::~GaiaRequest(gaia::GaiaRequest *this);
// [0x14dbb00] (263 bytes) gaia::GaiaRequest::TriggerCallback(void)
// int gaia::GaiaRequest::TriggerCallback(gaia::GaiaRequest *this);
// [0x14df310] (895 bytes) gaia::GaiaRequest::GetLogRequestID(void)
// gaia::GaiaRequest *gaia::GaiaRequest::GetLogRequestID(gaia::GaiaRequest *this, int a2);
// [0x14e1920] (381 bytes) gaia::GaiaRequest::SetHermesBaseMessage(gaia::HermesBaseMessage const*)
// int gaia::GaiaRequest::SetHermesBaseMessage(int a1, int a2);
// [0x14e1aa0] (155 bytes) gaia::GaiaRequest::SetCustomParams(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// gaia::GaiaRequest *gaia::GaiaRequest::SetCustomParams( gaia::GaiaRequest *this, const std::map<std::string,std::string> *a2);
// [0x14e1b40] (146 bytes) gaia::GaiaRequest::GetInputValue(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> &)
// char *gaia::GaiaRequest::GetInputValue(gaia::GaiaRequest *this, std::map<std::string,std::string> *a2);
