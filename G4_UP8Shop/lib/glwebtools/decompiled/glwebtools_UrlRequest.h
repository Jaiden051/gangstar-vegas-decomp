#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_UrlRequest.h
// Library: glwebtools | Module: glwebtools_UrlRequest
// Binary Address Span: 0x13f2930 .. 0x13f3ed0 (39 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13f2930] (34 bytes) glwebtools::UrlRequest::UrlRequest(void)
// struct glwebtools::UrlRequest *glwebtools::UrlRequest::UrlRequest(glwebtools::UrlRequest *this);
// [0x13f2960] (105 bytes) glwebtools::UrlRequest::UrlRequest(glwebtools::UrlRequest const&)
// glwebtools::UrlRequest *glwebtools::UrlRequest::UrlRequest( glwebtools::UrlRequest *this, const glwebtools::UrlRequest *a2);
// [0x13f29d0] (102 bytes) glwebtools::UrlRequest::UrlRequest(unsigned int)
// glwebtools::UrlRequest *glwebtools::UrlRequest::UrlRequest(glwebtools::UrlRequest *this, unsigned int a2);
// [0x13f2a40] (122 bytes) glwebtools::UrlRequest::Release(void)
// int glwebtools::UrlRequest::Release(glwebtools::UrlRequest *this);
// [0x13f2ac0] (45 bytes) glwebtools::UrlRequest::~UrlRequest()
// void glwebtools::UrlRequest::~UrlRequest(glwebtools::UrlRequest *this);
// [0x13f2af0] (56 bytes) glwebtools::UrlRequest::~UrlRequest()
// void glwebtools::UrlRequest::~UrlRequest(glwebtools::UrlRequest *this);
// [0x13f2b30] (128 bytes) glwebtools::UrlRequest::operator=(glwebtools::UrlRequest const&)
// glwebtools::UrlRequest *glwebtools::UrlRequest::operator=( glwebtools::UrlRequest *this, const glwebtools::UrlRequest *a2);
// [0x13f2bb0] (102 bytes) glwebtools::UrlRequest::GetMethod(void)const
// int glwebtools::UrlRequest::GetMethod(glwebtools::UrlRequest *this);
// [0x13f2c20] (102 bytes) glwebtools::UrlRequest::GetState(void)const
// int glwebtools::UrlRequest::GetState(glwebtools::UrlRequest *this);
// [0x13f2c90] (105 bytes) glwebtools::UrlRequest::Reset(void)
// int glwebtools::UrlRequest::Reset(glwebtools::UrlRequest *this);
// [0x13f2d00] (109 bytes) glwebtools::UrlRequest::AddHeaders(char const*,char const*)
// int glwebtools::UrlRequest::AddHeaders(glwebtools::UrlRequest *this, const char *a2, const char *a3);
// [0x13f2d70] (52 bytes) glwebtools::UrlRequest::AddHeaders(char const*,std::string const&)
// int glwebtools::UrlRequest::AddHeaders(glwebtools::UrlRequest *a1, char *a2, const char **a3);
// [0x13f2db0] (54 bytes) glwebtools::UrlRequest::AddHeaders(std::string const&,std::string const&)
// int glwebtools::UrlRequest::AddHeaders(glwebtools::UrlRequest *a1, const char **a2, const char **a3);
// [0x13f2df0] (109 bytes) glwebtools::UrlRequest::SetUrl(char const*,unsigned int)
// int glwebtools::UrlRequest::SetUrl(glwebtools::UrlRequest *this, const char *a2, unsigned int a3);
// [0x13f2e60] (52 bytes) glwebtools::UrlRequest::SetUrl(std::string const&,unsigned int)
// int glwebtools::UrlRequest::SetUrl(glwebtools::UrlRequest *a1, const char **a2, unsigned int a3);
// [0x13f2ea0] (125 bytes) glwebtools::UrlRequest::SetUrl(glwebtools::UrlRequest::Protocol,char const*,char const*,unsigned int)
// int glwebtools::UrlRequest::SetUrl(int a1, int a2, char *a3, char *a4, int a5);
// [0x13f2f20] (70 bytes) glwebtools::UrlRequest::SetUrl(glwebtools::UrlRequest::Protocol,std::string const&,std::string const&,unsigned int)
// int glwebtools::UrlRequest::SetUrl(int a1, int a2, char **a3, char **a4, int a5);
// [0x13f2f70] (66 bytes) glwebtools::UrlRequest::SetHTTPUrl(char const*,char const*,unsigned int)
// int glwebtools::UrlRequest::SetHTTPUrl(glwebtools::UrlRequest *this, char *a2, char *a3, unsigned int a4);
// [0x13f2fc0] (70 bytes) glwebtools::UrlRequest::SetHTTPUrl(std::string const&,std::string const&,unsigned int)
// int glwebtools::UrlRequest::SetHTTPUrl(int a1, char **a2, char **a3, int a4);
// [0x13f3010] (66 bytes) glwebtools::UrlRequest::SetHTTPSUrl(char const*,char const*,unsigned int)
// int glwebtools::UrlRequest::SetHTTPSUrl(glwebtools::UrlRequest *this, char *a2, char *a3, unsigned int a4);
// [0x13f3060] (70 bytes) glwebtools::UrlRequest::SetHTTPSUrl(std::string const&,std::string const&,unsigned int)
// int glwebtools::UrlRequest::SetHTTPSUrl(int a1, char **a2, char **a3, int a4);
// [0x13f30b0] (101 bytes) glwebtools::UrlRequest::SetHeaders(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// int glwebtools::UrlRequest::SetHeaders( glwebtools::UrlRequest *this, const std::map<std::string,std::string> *a2);
// [0x13f3120] (105 bytes) glwebtools::UrlRequest::ClearHeaders(void)
// int glwebtools::UrlRequest::ClearHeaders(glwebtools::UrlRequest *this);
// [0x13f3190] (101 bytes) glwebtools::UrlRequest::SetMethod(glwebtools::UrlRequest::Method)
// int glwebtools::UrlRequest::SetMethod(int a1, int a2);
// [0x13f3200] (101 bytes) glwebtools::UrlRequest::SetData(std::string const&)
// int glwebtools::UrlRequest::SetData(int a1, int a2);
// [0x13f3270] (101 bytes) glwebtools::UrlRequest::SetData(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// int glwebtools::UrlRequest::SetData(glwebtools::UrlRequest *this, const std::map<std::string,std::string> *a2);
// [0x13f32e0] (109 bytes) glwebtools::UrlRequest::SetData(void const*,unsigned int)
// int glwebtools::UrlRequest::SetData(glwebtools::UrlRequest *this, const void *a2, unsigned int a3);
// [0x13f3350] (101 bytes) glwebtools::UrlRequest::AddData(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest *this, const std::map<std::string,std::string> *a2);
// [0x13f33c0] (109 bytes) glwebtools::UrlRequest::AddData(char const*,char const*)
// int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest *this, const char *a2, const char *a3);
// [0x13f3430] (52 bytes) glwebtools::UrlRequest::AddData(char const*,std::string const&)
// int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest *a1, char *a2, const char **a3);
// [0x13f3470] (54 bytes) glwebtools::UrlRequest::AddData(std::string const&,std::string const&)
// int glwebtools::UrlRequest::AddData(glwebtools::UrlRequest *a1, const char **a2, const char **a3);
// [0x13f34b0] (105 bytes) glwebtools::UrlRequest::ClearData(void)
// int glwebtools::UrlRequest::ClearData(glwebtools::UrlRequest *this);
// [0x13f3520] (79 bytes) glwebtools::UrlRequest::IsHandleValid(void)const
// void *glwebtools::UrlRequest::IsHandleValid(glwebtools::UrlRequest *this);
// [0x13f3570] (40 bytes) glwebtools::UrlRequest::IsInitialState(void)const
// bool glwebtools::UrlRequest::IsInitialState(glwebtools::UrlRequest *this);
// [0x13f35a0] (40 bytes) glwebtools::UrlRequest::IsReadyToRun(void)const
// bool glwebtools::UrlRequest::IsReadyToRun(glwebtools::UrlRequest *this);
// [0x13f35d0] (40 bytes) glwebtools::UrlRequest::IsRunning(void)const
// bool glwebtools::UrlRequest::IsRunning(glwebtools::UrlRequest *this);
// [0x13f3600] (73 bytes) glwebtools::UrlRequest::IsError(void)const
// int glwebtools::UrlRequest::IsError(glwebtools::UrlRequest *this);
// [0x13f3650] (109 bytes) glwebtools::UrlRequest::GetCreationSettings(glwebtools::UrlRequest::CreationSettings &)const
// int glwebtools::UrlRequest::GetCreationSettings( glwebtools::UrlRequest *this, glwebtools::UrlRequest::CreationSettings *a2);
// [0x13f3ed0] (34 bytes) glwebtools::UrlRequest::CreationSettings::CreationSettings(void)
// struct glwebtools::UrlRequest::CreationSettings *glwebtools::UrlRequest::CreationSettings::CreationSettings( glwebtools::UrlRequest::CreationSettings *this);
