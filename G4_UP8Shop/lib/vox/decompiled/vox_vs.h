#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_vs.h
// Library: vox | Module: vox_vs
// Binary Address Span: 0xfcce90 .. 0xfcf770 (63 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xfcce90] (12 bytes) vox::vs::VSStreamCursor::Size(void)
// int vox::vs::VSStreamCursor::Size(vox::vs::VSStreamCursor *this);
// [0xfccea0] (9 bytes) vox::vs::VSFileStreamCursor::Shutdown(void)
// void vox::vs::VSFileStreamCursor::Shutdown();
// [0xfcceb0] (98 bytes) vox::vs::VSFileStreamCursor::Copy(vox::vs::VSStreamCursor *)
// int vox::vs::VSFileStreamCursor::Copy(vox::vs::VSFileStreamCursor *this, vox::vs::VSStreamCursor *a2);
// [0xfccf20] (59 bytes) vox::vs::VSStream::DestroyCursor(vox::StreamCursorInterface *)
// int vox::vs::VSStream::DestroyCursor(vox::vs::VSStream *this, vox::StreamCursorInterface *a2);
// [0xfccf60] (126 bytes) vox::vs::VSBufferStreamCursor::EndOfStream(void)
// bool vox::vs::VSBufferStreamCursor::EndOfStream(vox::vs::VSBufferStreamCursor *this);
// [0xfccfe0] (172 bytes) vox::vs::VSBufferStreamCursor::Read(unsigned char *,int)
// size_t vox::vs::VSBufferStreamCursor::Read( vox::vs::VSBufferStreamCursor *this, uint8_t *a2, signed int a3);
// [0xfcd090] (175 bytes) vox::vs::VSStream::~VSStream()
// void vox::vs::VSStream::~VSStream(vox::vs::VSStream *this);
// [0xfcd140] (56 bytes) vox::vs::VSStream::~VSStream()
// void vox::vs::VSStream::~VSStream(vox::vs::VSStream *this);
// [0xfcd180] (285 bytes) vox::vs::VSFileStreamCursor::Seek(int,int)
// int vox::vs::VSFileStreamCursor::Seek(vox::vs::VSFileStreamCursor *this, int a2, int a3);
// [0xfcd2a0] (142 bytes) vox::vs::VSFileStreamCursor::Tell(void)
// int vox::vs::VSFileStreamCursor::Tell(vox::vs::VSFileStreamCursor *this);
// [0xfcd330] (296 bytes) vox::vs::VSFileStreamCursor::Read(unsigned char *,int)
// int vox::vs::VSFileStreamCursor::Read(vox::vs::VSFileStreamCursor *this, uint8_t *a2, int a3);
// [0xfcd460] (185 bytes) vox::vs::VSFileStreamCursor::EndOfStream(void)
// bool vox::vs::VSFileStreamCursor::EndOfStream(vox::vs::VSFileStreamCursor *this);
// [0xfcd520] (192 bytes) vox::vs::VSBufferStreamCursor::Seek(int,int)
// int vox::vs::VSBufferStreamCursor::Seek(vox::vs::VSBufferStreamCursor *this, int a2, int a3);
// [0xfcd5e0] (112 bytes) vox::vs::VSBufferStreamCursor::Tell(void)
// int vox::vs::VSBufferStreamCursor::Tell(vox::vs::VSBufferStreamCursor *this);
// [0xfcd650] (22 bytes) vox::vs::VSVersions::GetVersion001Label(void)
// char *vox::vs::VSVersions::GetVersion001Label();
// [0xfcd670] (23 bytes) vox::vs::VSVersions::GetVersion002Label(void)
// char *vox::vs::VSVersions::GetVersion002Label();
// [0xfcd690] (23 bytes) vox::vs::VSVersions::GetVersion003Label(void)
// char *vox::vs::VSVersions::GetVersion003Label();
// [0xfcd6b0] (23 bytes) vox::vs::VSVersions::GetVersion004Label(void)
// char *vox::vs::VSVersions::GetVersion004Label();
// [0xfcd6d0] (143 bytes) vox::vs::VSVersions::IsAtLeastVersion(char const*,char const*)
// int vox::vs::VSVersions::IsAtLeastVersion(vox::vs::VSVersions *this, char *s1);
// [0xfcd760] (107 bytes) vox::vs::VSVersions::IsVersionValid(char const*)
// int vox::vs::VSVersions::IsVersionValid(vox::vs::VSVersions *this);
// [0xfcd7d0] (99 bytes) vox::vs::VSBufferPool::GetInstance(void)
// int vox::vs::VSBufferPool::GetInstance();
// [0xfcd840] (131 bytes) vox::vs::VSBufferPool::VSBufferPool(void)
// vox::vs::VSBufferPool *vox::vs::VSBufferPool::VSBufferPool(vox::vs::VSBufferPool *this);
// [0xfcd8d0] (173 bytes) vox::vs::VSBufferPool::CreateInstance(void)
// int vox::vs::VSBufferPool::CreateInstance();
// [0xfcd980] (1433 bytes) vox::vs::VSBufferPool::CreateBuffer(int)
// int vox::vs::VSBufferPool::CreateBuffer(vox::vs::VSBufferPool *this, size_t a2);
// [0xfcdf20] (181 bytes) vox::vs::VSBufferPool::GetBuffer(int)
// int vox::vs::VSBufferPool::GetBuffer(vox::vs::VSBufferPool *this, int a2);
// [0xfcdfe0] (246 bytes) vox::vs::VSBufferPool::ReleaseBuffer(int)
// int vox::vs::VSBufferPool::ReleaseBuffer(vox::vs::VSBufferPool *this, int a2);
// [0xfce0e0] (144 bytes) vox::vs::VSBufferStreamCursor::Copy(vox::vs::VSStreamCursor *)
// void vox::vs::VSBufferStreamCursor::Copy(vox::vs::VSBufferStreamCursor *this, vox::vs::VSStreamCursor *a2);
// [0xfce170] (131 bytes) vox::vs::VSBufferStreamCursor::Shutdown(void)
// void vox::vs::VSBufferStreamCursor::Shutdown(vox::vs::VSBufferStreamCursor *this);
// [0xfce200] (245 bytes) vox::vs::VSBufferStreamCursor::Init(void)
// int vox::vs::VSBufferStreamCursor::Init(vox::vs::VSBufferStreamCursor *this);
// [0xfce300] (154 bytes) vox::vs::VSStream::Close(void)
// void vox::vs::VSStream::Close(vox::vs::VSStream *this);
// [0xfce3a0] (12 bytes) vox::vs::VSStream::GetVersion(void)
// char *vox::vs::VSStream::GetVersion(vox::vs::VSStream *this);
// [0xfce3b0] (514 bytes) vox::vs::VSStream::ParseHeader(void)
// 0xfce3b0 vox::vs::VSStream::ParseHeader(void)
// [0xfce5c0] (324 bytes) vox::vs::VSStream::VSStream(vox::vs::VSStreamParams *)
// void vox::vs::VSStream::VSStream(vox::vs::VSStream *a1, uint32_t *a2);
// [0xfce710] (104 bytes) vox::vs::VSStreamFactory(void *)
// vox::vs::VSStream *vox::vs::VSStreamFactory(vox::vs *this);
// [0xfce780] (163 bytes) vox::vs::VSStream::Read(void *,int)
// size_t vox::vs::VSStream::Read(vox::vs::VSStream *this, void *a2, size_t n);
// [0xfce830] (144 bytes) vox::vs::VSStream::ReadByte(unsigned char &)
// int vox::vs::VSStream::ReadByte(vox::vs::VSStream *this, uint8_t *a2);
// [0xfce8c0] (154 bytes) vox::vs::VSStream::ReadFloat(float &)
// int vox::vs::VSStream::ReadFloat(vox::vs::VSStream *this, float *a2);
// [0xfce960] (179 bytes) vox::vs::VSStream::ReadInt(int &)
// int vox::vs::VSStream::ReadInt(vox::vs::VSStream *this, int *a2);
// [0xfcea20] (163 bytes) vox::vs::VSStream::ReadShort(short &)
// int vox::vs::VSStream::ReadShort(vox::vs::VSStream *this, int16_t *a2);
// [0xfcead0] (179 bytes) vox::vs::VSStream::ReadUnsignedInt(unsigned int &)
// int vox::vs::VSStream::ReadUnsignedInt(vox::vs::VSStream *this, unsigned int *a2);
// [0xfceb90] (89 bytes) vox::vs::VSStream::ReadChunkHeader(vox::vs::VSChunkHeader &)
// int vox::vs::VSStream::ReadChunkHeader(vox::vs::VSStream *a1, unsigned int *a2);
// [0xfcebf0] (179 bytes) vox::vs::VSStream::Write(void const*,int)
// int vox::vs::VSStream::Write(vox::vs::VSStream *this, const void *a2, int a3);
// [0xfcecb0] (190 bytes) vox::vs::VSStream::WriteByte(unsigned char)
// int vox::vs::VSStream::WriteByte(vox::vs::VSStream *this, uint8_t a2);
// [0xfced70] (182 bytes) vox::vs::VSStream::WriteInt(int)
// int vox::vs::VSStream::WriteInt(vox::vs::VSStream *this, ...);
// [0xfcee30] (190 bytes) vox::vs::VSStream::WriteShort(short)
// int vox::vs::VSStream::WriteShort(vox::vs::VSStream *this, int16_t a2);
// [0xfceef0] (90 bytes) vox::vs::VSStream::Seek(int,vox::VoxFileSeekOrigin)
// int vox::vs::VSStream::Seek(int a1, int a2, int a3);
// [0xfcef50] (12 bytes) vox::vs::VSStream::GetDataStartPosition(void)
// int vox::vs::VSStream::GetDataStartPosition(vox::vs::VSStream *this);
// [0xfcef60] (13 bytes) vox::vs::VSStream::IsValid(void)
// int vox::vs::VSStream::IsValid(vox::vs::VSStream *this);
// [0xfcef70] (87 bytes) vox::vs::VSStreamCursor::VSStreamCursor(vox::StreamInterface *,int,int)
// int vox::vs::VSStreamCursor::VSStreamCursor(uint32_t *a1, vox::vs::VSStream *a2, int a3, int a4);
// [0xfcefd0] (97 bytes) vox::vs::VSFileStreamCursor::VSFileStreamCursor(vox::StreamInterface *,int,int)
// void (**vox::vs::VSFileStreamCursor::VSFileStreamCursor( uint32_t *a1, vox::vs::VSStream *a2, int a3, int a4))(vox::vs::VSFileStreamCursor *__hidden this);
// [0xfcf040] (119 bytes) vox::vs::VSBufferStreamCursor::VSBufferStreamCursor(vox::StreamInterface *,int,int)
// vox::vs::VSBufferStreamCursor *vox::vs::VSBufferStreamCursor::VSBufferStreamCursor( vox::vs::VSBufferStreamCursor *this, vox::StreamInterface *a2, int a3, int a4);
// [0xfcf0c0] (238 bytes) vox::vs::VSStream::CreateNewCursor(int,int,bool)
// vox::vs::VSBufferStreamCursor *vox::vs::VSStream::CreateNewCursor( vox::vs::VSStream *this, int a2, int a3, bool a4);
// [0xfcf1b0] (614 bytes) vox::vs::VSBufferPool::~VSBufferPool()
// void vox::vs::VSBufferPool::~VSBufferPool(vox::vs::VSBufferPool *this);
// [0xfcf420] (125 bytes) vox::vs::VSBufferPool::DestroyInstance(void)
// void vox::vs::VSBufferPool::DestroyInstance();
// [0xfcf5a0] (9 bytes) vox::vs::VSStream::CreateNewCursor(void)
// int vox::vs::VSStream::CreateNewCursor();
// [0xfcf5b0] (12 bytes) vox::vs::VSStream::GetType(void)
// int vox::vs::VSStream::GetType();
// [0xfcf5c0] (27 bytes) vox::vs::VSStreamCursor::~VSStreamCursor()
// void vox::vs::VSStreamCursor::~VSStreamCursor(vox::vs::VSStreamCursor *this);
// [0xfcf5e0] (12 bytes) vox::vs::VSStreamCursor::IsSeekable(void)
// int vox::vs::VSStreamCursor::IsSeekable();
// [0xfcf5f0] (70 bytes) vox::vs::VSFileStreamCursor::~VSFileStreamCursor()
// void vox::vs::VSFileStreamCursor::~VSFileStreamCursor(vox::vs::VSFileStreamCursor *this);
// [0xfcf640] (45 bytes) vox::vs::VSStreamCursor::~VSStreamCursor()
// void vox::vs::VSStreamCursor::~VSStreamCursor(vox::vs::VSStreamCursor *this);
// [0xfcf6d0] (78 bytes) vox::vs::VSFileStreamCursor::~VSFileStreamCursor()
// void vox::vs::VSFileStreamCursor::~VSFileStreamCursor(vox::vs::VSFileStreamCursor *this);
// [0xfcf720] (70 bytes) vox::vs::VSBufferStreamCursor::~VSBufferStreamCursor()
// void vox::vs::VSBufferStreamCursor::~VSBufferStreamCursor(vox::vs::VSBufferStreamCursor *this);
// [0xfcf770] (78 bytes) vox::vs::VSBufferStreamCursor::~VSBufferStreamCursor()
// void vox::vs::VSBufferStreamCursor::~VSBufferStreamCursor(vox::vs::VSBufferStreamCursor *this);
