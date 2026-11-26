#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_UrlRequestCore.h
// Library: glwebtools | Module: glwebtools_UrlRequestCore
// Binary Address Span: 0x13f3c80 .. 0x13f4ee0 (29 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13f3c80] (90 bytes) glwebtools::UrlRequestCore::Drop(void)
// int glwebtools::UrlRequestCore::Drop(glwebtools::UrlRequestCore *this);
// [0x13f3ce0] (86 bytes) glwebtools::UrlRequestCore::Grab(void)
// int glwebtools::UrlRequestCore::Grab(glwebtools::UrlRequestCore *this);
// [0x13f3d40] (79 bytes) glwebtools::UrlRequestCore::CanDelete(void)const
// int glwebtools::UrlRequestCore::CanDelete(glwebtools::UrlRequestCore *this);
// [0x13f3d90] (242 bytes) glwebtools::UrlRequestCore::~UrlRequestCore()
// void glwebtools::UrlRequestCore::~UrlRequestCore(glwebtools::UrlRequestCore *this);
// [0x13f3e90] (56 bytes) glwebtools::UrlRequestCore::~UrlRequestCore()
// void glwebtools::UrlRequestCore::~UrlRequestCore(glwebtools::UrlRequestCore *this);
// [0x13f3f00] (12 bytes) glwebtools::UrlRequestCore::GetMethod(void)const
// int glwebtools::UrlRequestCore::GetMethod(glwebtools::UrlRequestCore *this);
// [0x13f3f10] (12 bytes) glwebtools::UrlRequestCore::GetState(void)const
// int glwebtools::UrlRequestCore::GetState(glwebtools::UrlRequestCore *this);
// [0x13f3f20] (210 bytes) glwebtools::UrlRequestCore::Reset(void)
// int glwebtools::UrlRequestCore::Reset(glwebtools::UrlRequestCore *this);
// [0x13f4000] (151 bytes) glwebtools::UrlRequestCore::SetUrl(char const*,unsigned int)
// int glwebtools::UrlRequestCore::SetUrl(glwebtools::UrlRequestCore *this, char *s, unsigned int a3);
// [0x13f40a0] (359 bytes) glwebtools::UrlRequestCore::SetUrl(glwebtools::UrlRequest::Protocol,char const*,char const*,unsigned int)
// int glwebtools::UrlRequestCore::SetUrl(uint32_t *a1, int a2, char *s, char *a4, int a5);
// [0x13f4210] (255 bytes) glwebtools::UrlRequestCore::_AddHeaders(char const*,char const*)
// int glwebtools::UrlRequestCore::_AddHeaders(glwebtools::UrlRequestCore *this, char *a2, char *s);
// [0x13f4310] (95 bytes) glwebtools::UrlRequestCore::AddHeaders(char const*,char const*)
// int glwebtools::UrlRequestCore::AddHeaders(glwebtools::UrlRequestCore *this, char *a2, char *a3);
// [0x13f4370] (163 bytes) glwebtools::UrlRequestCore::AddHeaders(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// int glwebtools::UrlRequestCore::AddHeaders( glwebtools::UrlRequestCore *this, const std::map<std::string,std::string> *a2);
// [0x13f4420] (283 bytes) glwebtools::UrlRequestCore::SetHeaders(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// int glwebtools::UrlRequestCore::SetHeaders( glwebtools::UrlRequestCore *this, const std::map<std::string,std::string> *a2);
// [0x13f4540] (119 bytes) glwebtools::UrlRequestCore::ClearHeaders(void)
// int glwebtools::UrlRequestCore::ClearHeaders(glwebtools::UrlRequestCore *this);
// [0x13f45c0] (95 bytes) glwebtools::UrlRequestCore::SetMethod(glwebtools::UrlRequest::Method)
// int glwebtools::UrlRequestCore::SetMethod(uint32_t *a1, int a2);
// [0x13f4620] (123 bytes) glwebtools::UrlRequestCore::SetData(std::string const&)
// int glwebtools::UrlRequestCore::SetData(int a1, const char **a2);
// [0x13f46a0] (324 bytes) glwebtools::UrlRequestCore::SetData(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// int glwebtools::UrlRequestCore::SetData( glwebtools::UrlRequestCore *this, const std::map<std::string,std::string> *a2);
// [0x13f47f0] (215 bytes) glwebtools::UrlRequestCore::SetData(void const*,unsigned int)
// int glwebtools::UrlRequestCore::SetData(glwebtools::UrlRequestCore *this, void *a2, unsigned int a3);
// [0x13f48d0] (231 bytes) glwebtools::UrlRequestCore::_AddData(char const*,char const*)
// int glwebtools::UrlRequestCore::_AddData(glwebtools::UrlRequestCore *this, char *s, char *a3);
// [0x13f49c0] (95 bytes) glwebtools::UrlRequestCore::AddData(char const*,char const*)
// int glwebtools::UrlRequestCore::AddData(glwebtools::UrlRequestCore *this, char *a2, char *a3);
// [0x13f4a20] (148 bytes) glwebtools::UrlRequestCore::AddData(std::map<std::string,std::string,std::less<std::string>,std::allocator<std::pair<std::string const,std::string>>> const&)
// glwebtools *glwebtools::UrlRequestCore::AddData( glwebtools::UrlRequestCore *this, const std::map<std::string,std::string> *a2);
// [0x13f4ac0] (127 bytes) glwebtools::UrlRequestCore::ClearData(void)
// int glwebtools::UrlRequestCore::ClearData(glwebtools::UrlRequestCore *this);
// [0x13f4b40] (196 bytes) glwebtools::UrlRequestCore::UrlRequestCore(glwebtools::UrlRequest::CreationSettings const&)
// glwebtools::UrlRequestCore *glwebtools::UrlRequestCore::UrlRequestCore( glwebtools::UrlRequestCore *this, const glwebtools::UrlRequest::CreationSettings *a2);
// [0x13f4c10] (12 bytes) glwebtools::UrlRequestCore::GetToken(void)
// int glwebtools::UrlRequestCore::GetToken(glwebtools::UrlRequestCore *this);
// [0x13f4c20] (14 bytes) glwebtools::UrlRequestCore::SetToken(unsigned int)
// glwebtools::UrlRequestCore *glwebtools::UrlRequestCore::SetToken( glwebtools::UrlRequestCore *this, unsigned int a2);
// [0x13f4c30] (17 bytes) glwebtools::UrlRequestCore::SetState(glwebtools::UrlRequest::State)
// int glwebtools::UrlRequestCore::SetState(int a1, int a2);
// [0x13f4c50] (641 bytes) glwebtools::UrlRequestCore::SetupHandler(void *)
// int glwebtools::UrlRequestCore::SetupHandler(glwebtools::UrlRequestCore *this, void *a2);
// [0x13f4ee0] (75 bytes) glwebtools::UrlRequestCore::GetCreationSettings(glwebtools::UrlRequest::CreationSettings &)const
// int glwebtools::UrlRequestCore::GetCreationSettings( glwebtools::UrlRequestCore *this, glwebtools::UrlRequest::CreationSettings *a2);
