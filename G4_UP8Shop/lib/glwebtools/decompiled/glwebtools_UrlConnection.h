#pragma once
// ============================================================================
// G4_UP8Shop/lib/glwebtools/decompiled/glwebtools_UrlConnection.h
// Library: glwebtools | Module: glwebtools_UrlConnection
// Binary Address Span: 0x13eb600 .. 0x13f37d0 (28 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x13eb600] (212 bytes) glwebtools::UrlConnection::CreationSettings::CreationSettings(void)
// struct glwebtools::UrlConnection::CreationSettings *glwebtools::UrlConnection::CreationSettings::CreationSettings( glwebtools::UrlConnection::CreationSettings *this);
// [0x13eb6e0] (231 bytes) glwebtools::UrlConnection::CreationSettings::CreationSettings(unsigned int,bool,bool,unsigned int,glwebtools::Thread::Priority,bool,char const*)
// int glwebtools::UrlConnection::CreationSettings::CreationSettings( int a1, int a2, int a3, char a4, int a5, int a6, char a7, char *a8);
// [0x13eb7d0] (221 bytes) glwebtools::UrlConnection::CreationSettings::CreationSettings(unsigned int,bool,bool,unsigned int,std::string const&,glwebtools::Thread::Priority,bool,char const*)
// int glwebtools::UrlConnection::CreationSettings::CreationSettings( int a1, int a2, int a3, char a4, int a5, int a6, int a7, char a8, char *a9);
// [0x13f1f20] (34 bytes) glwebtools::UrlConnection::UrlConnection(void)
// struct glwebtools::UrlConnection *glwebtools::UrlConnection::UrlConnection(glwebtools::UrlConnection *this);
// [0x13f1f50] (105 bytes) glwebtools::UrlConnection::UrlConnection(glwebtools::UrlConnection const&)
// glwebtools::UrlConnection *glwebtools::UrlConnection::UrlConnection( glwebtools::UrlConnection *this, const glwebtools::UrlConnection *a2);
// [0x13f1fc0] (102 bytes) glwebtools::UrlConnection::UrlConnection(unsigned int)
// glwebtools::UrlConnection *glwebtools::UrlConnection::UrlConnection( glwebtools::UrlConnection *this, unsigned int a2);
// [0x13f2030] (122 bytes) glwebtools::UrlConnection::Release(void)
// int glwebtools::UrlConnection::Release(glwebtools::UrlConnection *this);
// [0x13f20b0] (45 bytes) glwebtools::UrlConnection::~UrlConnection()
// void glwebtools::UrlConnection::~UrlConnection(glwebtools::UrlConnection *this);
// [0x13f20e0] (56 bytes) glwebtools::UrlConnection::~UrlConnection()
// void glwebtools::UrlConnection::~UrlConnection(glwebtools::UrlConnection *this);
// [0x13f2120] (128 bytes) glwebtools::UrlConnection::operator=(glwebtools::UrlConnection const&)
// glwebtools::UrlConnection *glwebtools::UrlConnection::operator=( glwebtools::UrlConnection *this, const glwebtools::UrlConnection *a2);
// [0x13f21a0] (102 bytes) glwebtools::UrlConnection::GetState(void)const
// int glwebtools::UrlConnection::GetState(glwebtools::UrlConnection *this);
// [0x13f2210] (199 bytes) glwebtools::UrlConnection::StartRequest(glwebtools::UrlRequest &)
// int glwebtools::UrlConnection::StartRequest(glwebtools::UrlConnection *this, glwebtools::UrlRequest *a2);
// [0x13f22e0] (105 bytes) glwebtools::UrlConnection::CancelRequest(void)
// int glwebtools::UrlConnection::CancelRequest(glwebtools::UrlConnection *this);
// [0x13f2350] (79 bytes) glwebtools::UrlConnection::IsHandleValid(void)const
// int glwebtools::UrlConnection::IsHandleValid(glwebtools::UrlConnection *this);
// [0x13f23a0] (40 bytes) glwebtools::UrlConnection::IsReadyToRun(void)const
// bool glwebtools::UrlConnection::IsReadyToRun(glwebtools::UrlConnection *this);
// [0x13f23d0] (74 bytes) glwebtools::UrlConnection::IsRunning(void)const
// int glwebtools::UrlConnection::IsRunning(glwebtools::UrlConnection *this);
// [0x13f2420] (73 bytes) glwebtools::UrlConnection::IsError(void)const
// int glwebtools::UrlConnection::IsError(glwebtools::UrlConnection *this);
// [0x13f2470] (101 bytes) glwebtools::UrlConnection::GetLastError(void)const
// int glwebtools::UrlConnection::GetLastError(glwebtools::UrlConnection *this);
// [0x13f24e0] (127 bytes) glwebtools::UrlConnection::GetDownloadedBytes(void)const
// int glwebtools::UrlConnection::GetDownloadedBytes(glwebtools::UrlConnection *this);
// [0x13f2560] (127 bytes) glwebtools::UrlConnection::SupportServerSideEvent(void)const
// int glwebtools::UrlConnection::SupportServerSideEvent(glwebtools::UrlConnection *this);
// [0x13f25e0] (127 bytes) glwebtools::UrlConnection::HasServerSideEvent(void)const
// int glwebtools::UrlConnection::HasServerSideEvent(glwebtools::UrlConnection *this);
// [0x13f2660] (109 bytes) glwebtools::UrlConnection::PopServerSideEvent(glwebtools::ServerSideEvent &)
// int glwebtools::UrlConnection::PopServerSideEvent( glwebtools::UrlConnection *this, glwebtools::ServerSideEvent *a2);
// [0x13f26d0] (127 bytes) glwebtools::UrlConnection::SupportDataPacketQueue(void)const
// int glwebtools::UrlConnection::SupportDataPacketQueue(glwebtools::UrlConnection *this);
// [0x13f2750] (127 bytes) glwebtools::UrlConnection::HasDataPacket(void)const
// int glwebtools::UrlConnection::HasDataPacket(glwebtools::UrlConnection *this);
// [0x13f27d0] (109 bytes) glwebtools::UrlConnection::PopDataPacket(glwebtools::MutableData &)
// int glwebtools::UrlConnection::PopDataPacket(glwebtools::UrlConnection *this, glwebtools::MutableData *a2);
// [0x13f2840] (109 bytes) glwebtools::UrlConnection::GetCreationSettings(glwebtools::UrlConnection::CreationSettings &)const
// int glwebtools::UrlConnection::GetCreationSettings( glwebtools::UrlConnection *this, glwebtools::UrlConnection::CreationSettings *a2);
// [0x13f28b0] (119 bytes) glwebtools::UrlConnection::GetOutputDebugString(std::string &)const
// int glwebtools::UrlConnection::GetOutputDebugString(glwebtools::HandleManager *a1, int a2);
// [0x13f37d0] (63 bytes) glwebtools::UrlConnection::GetUrlResponse(void)const
// glwebtools::UrlConnection *glwebtools::UrlConnection::GetUrlResponse(glwebtools::UrlConnection *this, int a2);
