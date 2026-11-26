#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_UrlConnectionCore.h
// Library: glwebtools | Module: glwebtools_UrlConnectionCore
// Binary Address Span: 0x13eb4a0 .. 0x13ef5b0 (33 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13eb4a0] (90 bytes) glwebtools::UrlConnectionCore::Drop(void)
// int glwebtools::UrlConnectionCore::Drop(glwebtools::UrlConnectionCore *this);
// [0x13eb500] (86 bytes) glwebtools::UrlConnectionCore::Grab(void)
// int glwebtools::UrlConnectionCore::Grab(glwebtools::UrlConnectionCore *this);
// [0x13eb560] (109 bytes) glwebtools::UrlConnectionCore::CanDelete(void)const
// int glwebtools::UrlConnectionCore::CanDelete(glwebtools::UrlConnectionCore *this);
// [0x13eb8b0] (12 bytes) glwebtools::UrlConnectionCore::GetState(void)const
// int glwebtools::UrlConnectionCore::GetState(glwebtools::UrlConnectionCore *this);
// [0x13eb8c0] (183 bytes) glwebtools::UrlConnectionCore::AttachRequest(glwebtools::UrlRequestCore *)
// int glwebtools::UrlConnectionCore::AttachRequest( glwebtools::UrlConnectionCore *this, glwebtools::UrlRequestCore *a2);
// [0x13eb980] (90 bytes) glwebtools::UrlConnectionCore::GetUrlResponse(void)const
// int glwebtools::UrlConnectionCore::GetUrlResponse(glwebtools::UrlConnectionCore *this);
// [0x13eb9e0] (484 bytes) glwebtools::UrlConnectionCore::UrlConnectionCore(glwebtools::TaskGroup &)
// glwebtools::UrlConnectionCore *glwebtools::UrlConnectionCore::UrlConnectionCore( glwebtools::UrlConnectionCore *this, glwebtools::TaskGroup *a2);
// [0x13ebbd0] (290 bytes) glwebtools::UrlConnectionCore::UrlConnectionCore(glwebtools::UrlConnection::CreationSettings const&,glwebtools::TaskGroup &)
// glwebtools::UrlConnectionCore *glwebtools::UrlConnectionCore::UrlConnectionCore( glwebtools::UrlConnectionCore *this, const glwebtools::UrlConnection::CreationSettings *a2, glwebtools::TaskGroup *a3);
// [0x13ebd00] (12 bytes) glwebtools::UrlConnectionCore::GetToken(void)
// int glwebtools::UrlConnectionCore::GetToken(glwebtools::UrlConnectionCore *this);
// [0x13ebd10] (14 bytes) glwebtools::UrlConnectionCore::SetToken(unsigned int)
// glwebtools::UrlConnectionCore *glwebtools::UrlConnectionCore::SetToken( glwebtools::UrlConnectionCore *this, unsigned int a2);
// [0x13ebd20] (14 bytes) glwebtools::UrlConnectionCore::SetLastError(int)
// glwebtools::UrlConnectionCore *glwebtools::UrlConnectionCore::SetLastError( glwebtools::UrlConnectionCore *this, int a2);
// [0x13ebd30] (284 bytes) glwebtools::UrlConnectionCore::CancelRequest(void)
// int glwebtools::UrlConnectionCore::CancelRequest(glwebtools::UrlConnectionCore *this);
// [0x13ebe50] (12 bytes) glwebtools::UrlConnectionCore::GetLastError(void)const
// int glwebtools::UrlConnectionCore::GetLastError(glwebtools::UrlConnectionCore *this);
// [0x13ebe60] (9 bytes) glwebtools::UrlConnectionCore::InvalidateRequest(void)
// int glwebtools::UrlConnectionCore::InvalidateRequest();
// [0x13ebe70] (9 bytes) glwebtools::UrlConnectionCore::InvalidateConnection(void)
// int glwebtools::UrlConnectionCore::InvalidateConnection();
// [0x13ebe80] (47 bytes) glwebtools::UrlConnectionCore::SetIntanceName(std::string const&)
// int glwebtools::UrlConnectionCore::SetIntanceName(int a1, int a2);
// [0x13ebeb0] (24 bytes) glwebtools::UrlConnectionCore::GetDownloadedBytes(void)const
// int glwebtools::UrlConnectionCore::GetDownloadedBytes(glwebtools::UrlConnectionCore *this);
// [0x13ebed0] (72 bytes) glwebtools::UrlConnectionCore::DestroyImplData(void)
// int glwebtools::UrlConnectionCore::DestroyImplData(glwebtools::UrlConnectionCore *this);
// [0x13ebf20] (383 bytes) glwebtools::UrlConnectionCore::~UrlConnectionCore()
// void glwebtools::UrlConnectionCore::~UrlConnectionCore(glwebtools::UrlResponseCore **this);
// [0x13ec0a0] (56 bytes) glwebtools::UrlConnectionCore::~UrlConnectionCore()
// void glwebtools::UrlConnectionCore::~UrlConnectionCore(glwebtools::UrlResponseCore **this);
// [0x13ec0e0] (13 bytes) glwebtools::UrlConnectionCore::SupportServerSideEvent(void)const
// int glwebtools::UrlConnectionCore::SupportServerSideEvent(glwebtools::UrlConnectionCore *this);
// [0x13ec0f0] (234 bytes) glwebtools::UrlConnectionCore::CreateImplData(void)
// int glwebtools::UrlConnectionCore::CreateImplData(glwebtools::UrlConnectionCore *this);
// [0x13ec1e0] (93 bytes) glwebtools::UrlConnectionCore::HasServerSideEvent(void)const
// int glwebtools::UrlConnectionCore::HasServerSideEvent(glwebtools::UrlConnectionCore *this);
// [0x13ec240] (86 bytes) glwebtools::UrlConnectionCore::PopServerSideEvent(glwebtools::ServerSideEvent &)
// int glwebtools::UrlConnectionCore::PopServerSideEvent( glwebtools::UrlConnectionCore *this, glwebtools::ServerSideEvent *a2);
// [0x13ec2a0] (13 bytes) glwebtools::UrlConnectionCore::SupportDataPacketQueue(void)const
// int glwebtools::UrlConnectionCore::SupportDataPacketQueue(glwebtools::UrlConnectionCore *this);
// [0x13ec2b0] (116 bytes) glwebtools::UrlConnectionCore::HasDataPacket(void)const
// int glwebtools::UrlConnectionCore::HasDataPacket(glwebtools::UrlConnectionCore *this);
// [0x13ec330] (181 bytes) glwebtools::UrlConnectionCore::PopDataPacket(glwebtools::MutableData &)
// int glwebtools::UrlConnectionCore::PopDataPacket( glwebtools::UrlConnectionCore *this, glwebtools::MutableData *a2);
// [0x13ec3f0] (172 bytes) glwebtools::UrlConnectionCore::GetCreationSettings(glwebtools::UrlConnection::CreationSettings &)const
// int glwebtools::UrlConnectionCore::GetCreationSettings( glwebtools::UrlConnectionCore *this, glwebtools::UrlConnection::CreationSettings *a2);
// [0x13ec4a0] (379 bytes) glwebtools::UrlConnectionCore::Update(unsigned long long)
// int glwebtools::UrlConnectionCore::Update(glwebtools::UrlConnectionCore *this, uint64_t a2);
// [0x13ec620] (12 bytes) glwebtools::UrlConnectionCore::GetOutputDebugString(void)const
// char *glwebtools::UrlConnectionCore::GetOutputDebugString(glwebtools::UrlConnectionCore *this);
// [0x13ec630] (1498 bytes) glwebtools::UrlConnectionCore::StartRequest(void)
// int glwebtools::UrlConnectionCore::StartRequest(glwebtools::UrlConnectionCore *this);
// [0x13ecc10] (10646 bytes) glwebtools::UrlConnectionCore::RunRequest(void)
// int glwebtools::UrlConnectionCore::RunRequest(int a1, glwebtools::UrlConnectionCore *this);
// [0x13ef5b0] (38 bytes) glwebtools::UrlConnectionCore::RunRequestStatic(void *,void *)
// glwebtools::UrlConnectionCore *glwebtools::UrlConnectionCore::RunRequestStatic( int a1, glwebtools::UrlConnectionCore *this);
