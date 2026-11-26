#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_io2.h
// Library: glf | Module: glf_io2
// Binary Address Span: 0xc71bb0 .. 0xcce020 (81 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc71bb0] (9 bytes) glf::io2::Device::Clone(bool)
// int glf::io2::Device::Clone();
// [0xc71bc0] (27 bytes) glf::io2::Device::~Device()
// void glf::io2::Device::~Device(glf::io2::Device *this);
// [0xc71be0] (66 bytes) glf::io2::Device::AtEnd(void)
// bool glf::io2::Device::AtEnd(glf::io2::Device *this);
// [0xc71c50] (45 bytes) glf::io2::Device::~Device()
// void glf::io2::Device::~Device(glf::io2::Device *this);
// [0xcbf370] (80 bytes) glf::io2::Device::ReadASync(void *,long long,void (*)(glf::io2::Device&,long long,int,void *),void *)
// int glf::io2::Device::ReadASync( glf::io2::Device *this, void *a2, int64_t a3, void (*a4)(glf::io2::Device *, int64_t, int, void *), void *a5);
// [0xcbf3c0] (80 bytes) glf::io2::Device::WriteASync(void const*,long long,void (*)(glf::io2::Device&,long long,int,void *),void *)
// int glf::io2::Device::WriteASync( glf::io2::Device *this, const void *a2, int64_t a3, void (*a4)(glf::io2::Device *, int64_t, int, void *), void *a5);
// [0xcbf410] (77 bytes) glf::io2::Device::ReadASyncWithOffset(void *,long long,long long,void (*)(glf::io2::Device&,long long,int,void *),void *)
// int glf::io2::Device::ReadASyncWithOffset( glf::io2::Device *this, void *a2, int64_t a3, int64_t a4, void (*a5)(glf::io2::Device *, int64_t, int, void *), void *a6);
// [0xcbf460] (77 bytes) glf::io2::Device::WriteASyncWithOffset(void const*,long long,long long,void (*)(glf::io2::Device&,long long,int,void *),void *)
// int glf::io2::Device::WriteASyncWithOffset( glf::io2::Device *this, const void *a2, int64_t a3, int64_t a4, void (*a5)(glf::io2::Device *, int64_t, int, void *), void *a6);
// [0xcbf4b0] (9 bytes) glf::io2::Device::CancelASync(int)
// int glf::io2::Device::CancelASync();
// [0xcbf4c0] (9 bytes) glf::io2::Device::WaitASync(int,int)
// int glf::io2::Device::WaitASync();
// [0xcbf4d0] (60 bytes) glf::io2::Device::ConvertToOpenMode(std::_Ios_Openmode)
// int glf::io2::Device::ConvertToOpenMode(int a1);
// [0xcbf510] (96 bytes) glf::io2::Device::ConvertToOpenMode(char const*)
// int glf::io2::Device::ConvertToOpenMode(glf::io2::Device *this);
// [0xcbf570] (96 bytes) glf::io2::Device::ConvertToStdIos(char const*)
// int glf::io2::Device::ConvertToStdIos(glf::io2::Device *this);
// [0xcbf5d0] (65 bytes) glf::io2::Device::ConvertToStdIos(glf::io2::Device::OpenMode)
// char glf::io2::Device::ConvertToStdIos(int a1);
// [0xcbf620] (68 bytes) glf::io2::Device::ConvertMode(std::_Ios_Openmode)
// char *glf::io2::Device::ConvertMode(int a1);
// [0xcbf670] (65 bytes) glf::io2::Device::ConvertMode(glf::io2::Device::OpenMode)
// char glf::io2::Device::ConvertMode(int a1);
// [0xcbf6c0] (11 bytes) glf::io2::Device::ConvertToSeekDir(std::_Ios_Seekdir)
// int glf::io2::Device::ConvertToSeekDir(int a1);
// [0xcbf6d0] (26 bytes) glf::io2::Device::SetError(int,glf::ErrorCategory const&,char const*)
// glf::io2::Device *glf::io2::Device::SetError( glf::io2::Device *this, int a2, const glf::ErrorCategory *a3, const char *a4);
// [0xcbf6f0] (12 bytes) glf::io2::Device::GetError(void)const
// char *glf::io2::Device::GetError(glf::io2::Device *this);
// [0xcbf810] (171 bytes) glf::io2::FileDevice::~FileDevice()
// void glf::io2::FileDevice::~FileDevice(void **this);
// [0xcbf8c0] (56 bytes) glf::io2::FileDevice::~FileDevice()
// void glf::io2::FileDevice::~FileDevice(void **this);
// [0xcbf900] (126 bytes) glf::io2::FileDevice::FileDevice(void)
// glf::io2::FileDevice *glf::io2::FileDevice::FileDevice(glf::io2::FileDevice *this);
// [0xcbf980] (160 bytes) glf::io2::FileDevice::Unmap(char *)
// int glf::io2::FileDevice::Unmap(glf::io2::FileDevice *this, char *a2);
// [0xcbfa20] (62 bytes) glf::io2::FileDevice::UnmapAll(void)
// int glf::io2::FileDevice::UnmapAll(glf::io2::FileDevice *this);
// [0xcbfa60] (34 bytes) glf::io2::FileDevice::Close(void)
// int glf::io2::FileDevice::Close(glf::io2::FileDevice *this);
// [0xcbfa90] (20 bytes) glf::io2::FileDevice::GetMapCount(void)const
// int glf::io2::FileDevice::GetMapCount(glf::io2::FileDevice *this);
// [0xcbfab0] (12 bytes) glf::io2::FileDevice::GetRawFilename(void)const
// char *glf::io2::FileDevice::GetRawFilename(glf::io2::FileDevice *this);
// [0xcbfac0] (22 bytes) glf::io2::FileDevice::GetFilename(void)const
// char *glf::io2::FileDevice::GetFilename(glf::io2::FileDevice *this);
// [0xcbfae0] (81 bytes) glf::io2::FileDevice::SetLogicFilename(glf::fs2::Path const&)
// int glf::io2::FileDevice::SetLogicFilename(glf::io2::FileDevice *this, const glf::fs2::Path *a2);
// [0xcbfb40] (621 bytes) glf::io2::FileDevice::Map(long long,long long,glf::io2::FileDevice::MapMode)
// int glf::io2::FileDevice::Map( uint32_t *a1, int a2, int a3, int64_t a4, int64_t a5, int64_t a6, int a7, int a8, int64_t a9, int64_t a10, int a11, int a12);
// [0xcbfdb0] (9 bytes) glf::io2::FileDevice::Open(glf::fs2::Path const&,glf::io2::Device::OpenMode)
// int glf::io2::FileDevice::Open();
// [0xcbfdc0] (12 bytes) glf::io2::FileDevice::GetMapOffsetAlignment(void)const
// int glf::io2::FileDevice::GetMapOffsetAlignment();
// [0xcbfdd0] (12 bytes) glf::io2::FileDevice::GetMapSizeAlignment(void)const
// int glf::io2::FileDevice::GetMapSizeAlignment();
// [0xcbfde0] (9 bytes) glf::io2::FileDevice::IsSequencial(void)const
// int glf::io2::FileDevice::IsSequencial();
// [0xcbfdf0] (92 bytes) glf::io2::FileDevice::GetAbsolutePath(void)const
// glf::io2::FileDevice *glf::io2::FileDevice::GetAbsolutePath(glf::io2::FileDevice *this, int a2);
// [0xcc00c0] (14 bytes) glf::io2::FilePosix::IsOpen(void)const
// bool glf::io2::FilePosix::IsOpen(glf::io2::FilePosix *this);
// [0xcc00d0] (14 bytes) glf::io2::FilePosix::IsClosedTemporarily(void)const
// bool glf::io2::FilePosix::IsClosedTemporarily(glf::io2::FilePosix *this);
// [0xcc00e0] (114 bytes) glf::io2::FilePosix::Peek(void *,long long)
// int64_t glf::io2::FilePosix::Peek(glf::io2::FilePosix *this, void *a2, int64_t a3);
// [0xcc0160] (22 bytes) glf::io2::FilePosix::GetMapOffsetAlignment(void)const
// int glf::io2::FilePosix::GetMapOffsetAlignment();
// [0xcc0180] (22 bytes) glf::io2::FilePosix::GetMapSizeAlignment(void)const
// int glf::io2::FilePosix::GetMapSizeAlignment();
// [0xcc01a0] (50 bytes) glf::io2::FilePosix::UnmapV(char *)
// bool glf::io2::FilePosix::UnmapV(glf::io2::FilePosix *this, char *addr);
// [0xcc01e0] (107 bytes) glf::io2::FilePosix::CloseTemporarily(void)
// int glf::io2::FilePosix::CloseTemporarily(glf::io2::FilePosix *this);
// [0xcc0260] (170 bytes) glf::io2::FilePosix::FilePosix(glf::intrusive_ptr<glf::fs2::FileSystem>)
// void (**glf::io2::FilePosix::FilePosix( glf::io2::FileDevice *a1, int *a2))(glf::io2::FilePosix *__hidden this);
// [0xcc0310] (218 bytes) glf::io2::FilePosix::FilePosix(glf::intrusive_ptr<glf::fs2::FileSystem>,glf::fs2::Path const&,int,glf::io2::Device::OpenMode)
// int glf::io2::FilePosix::FilePosix(glf::io2::FileDevice *a1, int *a2, glf::fs2::Path *a3, int a4, int a5);
// [0xcc03f0] (38 bytes) glf::io2::FilePosix::IsOpenAndUsable(void)const
// int glf::io2::FilePosix::IsOpenAndUsable(glf::io2::FilePosix *this);
// [0xcc0420] (180 bytes) glf::io2::FilePosix::MapV(long long,long long,glf::io2::FileDevice::MapMode)
// void *glf::io2::FilePosix::MapV(glf::io2::FilePosix *a1, __off_t offset, int a3, size_t len);
// [0xcc04e0] (122 bytes) glf::io2::FilePosix::GetSize(void)const
// int64_t glf::io2::FilePosix::GetSize(struct stat this);
// [0xcc0560] (133 bytes) glf::io2::FilePosix::Tell(void)
// int64_t glf::io2::FilePosix::Tell(glf::io2::FilePosix *this);
// [0xcc05f0] (148 bytes) glf::io2::FilePosix::Write(void const*,long long)
// ssize_t glf::io2::FilePosix::Write(glf::io2::FilePosix *this, void *buf, int64_t n);
// [0xcc0690] (148 bytes) glf::io2::FilePosix::Read(void *,long long)
// ssize_t glf::io2::FilePosix::Read(glf::io2::FilePosix *this, void *buf, int64_t nbytes);
// [0xcc0730] (146 bytes) glf::io2::FilePosix::Seek(long long,glf::io2::Device::SeekDir)
// int glf::io2::FilePosix::Seek(glf::io2::FilePosix *a1, __off_t offset, int a3, int a4);
// [0xcc07d0] (260 bytes) glf::io2::FilePosix::Close(void)
// int glf::io2::FilePosix::Close(glf::io2::FilePosix *this);
// [0xcc08e0] (67 bytes) glf::io2::FilePosix::~FilePosix()
// void glf::io2::FilePosix::~FilePosix(glf::io2::FilePosix *this);
// [0xcc0930] (56 bytes) glf::io2::FilePosix::~FilePosix()
// void glf::io2::FilePosix::~FilePosix(glf::io2::FilePosix *this);
// [0xcc0970] (389 bytes) glf::io2::FilePosix::OpenFileDesc(char const*,glf::io2::Device::OpenMode)
// int glf::io2::FilePosix::OpenFileDesc(int a1, char *file, char a3);
// [0xcc0b00] (112 bytes) glf::io2::FilePosix::ReopenClosedTemporarily(void)
// void glf::io2::FilePosix::ReopenClosedTemporarily(int a1, glf::io2::FilePosix *this);
// [0xcc0b70] (170 bytes) glf::io2::FilePosix::Open(char const*,glf::io2::Device::OpenMode)
// int glf::io2::FilePosix::Open(glf::io2::File *a1, char *s, int a3);
// [0xcc0c20] (78 bytes) glf::io2::FilePosix::CheckLastError(char const*,bool)
// glf::io2::Device *glf::io2::FilePosix::CheckLastError(glf::io2::FilePosix *this, char *a2);
// [0xccd8a0] (135 bytes) glf::io2::File::GetAbsolutePath(void)const
// glf::io2::File *glf::io2::File::GetAbsolutePath(glf::io2::File *this, const glf::fs2::Path **a2);
// [0xccd930] (34 bytes) glf::io2::File::Close(void)
// int glf::io2::File::Close(glf::io2::File *this);
// [0xccd960] (133 bytes) glf::io2::File::~File()
// void glf::io2::File::~File(glf::io2::File *this);
// [0xccd9f0] (56 bytes) glf::io2::File::~File()
// void glf::io2::File::~File(glf::io2::File *this);
// [0xccda30] (95 bytes) glf::io2::File::File(glf::intrusive_ptr<glf::fs2::FileSystem>)
// int glf::io2::File::File(glf::io2::FileDevice *a1, int *a2);
// [0xccda90] (43 bytes) glf::io2::File::RegisterFile(void)
// int glf::io2::File::RegisterFile(glf::io2::File *this);
// [0xccdac0] (43 bytes) glf::io2::File::UnregisterFile(void)
// int glf::io2::File::UnregisterFile(glf::io2::File *this);
// [0xccdaf0] (43 bytes) glf::io2::File::Awaken(void)const
// int glf::io2::File::Awaken(glf::io2::File *this);
// [0xccdb20] (14 bytes) glf::io2::File::PreventSleep(bool)
// glf::io2::File *glf::io2::File::PreventSleep(glf::io2::File *this, bool a2);
// [0xccdb30] (13 bytes) glf::io2::File::AllowSleep(void)const
// int glf::io2::File::AllowSleep(glf::io2::File *this);
// [0xccdb40] (88 bytes) glf::io2::FileMgr::FileMgr(void)
// pthread_mutex_t **glf::io2::FileMgr::FileMgr(pthread_mutex_t **this);
// [0xccdba0] (128 bytes) glf::io2::FileMgr::Get(void)
// void *glf::io2::FileMgr::Get();
// [0xccdc20] (12 bytes) glf::io2::FileMgr::GetMaxOpenedFiles(void)const
// int glf::io2::FileMgr::GetMaxOpenedFiles(glf::io2::FileMgr *this);
// [0xccdc30] (37 bytes) glf::io2::FileMgr::GetOpenFiles(void)const
// int glf::io2::FileMgr::GetOpenFiles(glf::io2::FileMgr *this);
// [0xccdc60] (14 bytes) glf::io2::FileMgr::SubOpenFiles(unsigned int)
// glf::io2::FileMgr *glf::io2::FileMgr::SubOpenFiles(glf::io2::FileMgr *this, unsigned int a2);
// [0xccdc70] (142 bytes) glf::io2::FileMgr::UnregisterFile(glf::io2::File *)
// int glf::io2::FileMgr::UnregisterFile(pthread_mutex_t **this, glf::io2::File *a2);
// [0xccdd00] (269 bytes) glf::io2::FileMgr::Trim(void)
// int glf::io2::FileMgr::Trim(pthread_mutex_t **this);
// [0xccde10] (41 bytes) glf::io2::FileMgr::ChangeOpenFiles(int)
// int glf::io2::FileMgr::ChangeOpenFiles(glf::io2::FileMgr *this, int a2);
// [0xccde40] (41 bytes) glf::io2::FileMgr::AddOpenFiles(unsigned int)
// int glf::io2::FileMgr::AddOpenFiles(glf::io2::FileMgr *this, unsigned int a2);
// [0xccde70] (41 bytes) glf::io2::FileMgr::SetMaxOpenFiles(unsigned int)
// int glf::io2::FileMgr::SetMaxOpenFiles(glf::io2::FileMgr *this, unsigned int a2);
// [0xccdea0] (121 bytes) glf::io2::FileMgr::~FileMgr()
// void glf::io2::FileMgr::~FileMgr(glf::io2::FileMgr *this);
// [0xccdf20] (249 bytes) glf::io2::FileMgr::Awaken(glf::io2::File *)
// int glf::io2::FileMgr::Awaken(pthread_mutex_t **this, glf::io2::File *a2);
// [0xcce020] (159 bytes) glf::io2::FileMgr::RegisterFile(glf::io2::File *)
// int glf::io2::FileMgr::RegisterFile(pthread_mutex_t **this, glf::io2::File *a2);
