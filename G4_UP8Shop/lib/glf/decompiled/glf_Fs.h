#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_fs.h
// Library: glf | Module: glf_fs
// Binary Address Span: 0xcbd0f0 .. 0xcbe6e0 (32 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xcbd0f0] (115 bytes) glf::fs::DirHandle::DirHandle(void)
// glf::fs::DirHandle *glf::fs::DirHandle::DirHandle(glf::fs::DirHandle *this);
// [0xcbd170] (635 bytes) glf::fs::DirHandle::_Filter(void)
// int glf::fs::DirHandle::_Filter(glf **this);
// [0xcbd3f0] (585 bytes) glf::fs::DirHandle::FindNext(void)
// int glf::fs::DirHandle::FindNext(glf::fs::DirHandle *this);
// [0xcbd640] (65 bytes) glf::fs::DirHandle::Close(void)
// int glf::fs::DirHandle::Close(glf::fs::DirHandle *this);
// [0xcbd690] (283 bytes) glf::fs::DirHandle::~DirHandle()
// void glf::fs::DirHandle::~DirHandle(glf::fs::DirHandle *this);
// [0xcbd7b0] (12 bytes) glf::fs::DirHandle::GetLastError(void)const
// int glf::fs::DirHandle::GetLastError(glf::fs::DirHandle *this);
// [0xcbd7c0] (13 bytes) glf::fs::DirHandle::GetFlag(void)const
// int glf::fs::DirHandle::GetFlag(glf::fs::DirHandle *this);
// [0xcbd7d0] (54 bytes) glf::fs::MkDir(char const*,glf::ios::openflag)
// int glf::fs::MkDir(char *a1, char *a2);
// [0xcbd810] (54 bytes) glf::fs::RmDir(char const*)
// int glf::fs::RmDir(glf::fs *this);
// [0xcbd850] (62 bytes) glf::fs::GetInfo(char const*,glf::fs::FileInfo &,glf::ios::openflag)
// int glf::fs::GetInfo();
// [0xcbd890] (62 bytes) glf::fs::MountDrive(char const*,char const*,glf::ios::openflag)
// int glf::fs::MountDrive(char *a1, char *a2, int a3);
// [0xcbd8d0] (70 bytes) glf::fs::ResolvePath(char const*,glf::ios::openflag,char *,unsigned int)
// unsigned int glf::fs::ResolvePath(char *s, char *a2, glf *a3, char *a4);
// [0xcbd920] (834 bytes) glf::fs::DirHandle::FindFirst(char const*,glf::ios::openflag)
// int glf::fs::DirHandle::FindFirst(int a1, char *a2, char *a3);
// [0xcbdc70] (139 bytes) glf::fs::DirHandle::DirHandle(char const*,glf::ios::openflag)
// int glf::fs::DirHandle::DirHandle(int a1, char *a2, char *a3);
// [0xcbdd00] (1141 bytes) glf::fs::DirHandle::FindFirst(glf::fs::DirHandle const&,char const*,glf::ios::openflag)
// int glf::fs::DirHandle::FindFirst(int a1, int a2, char *a3, char *a4);
// [0xcbe180] (147 bytes) glf::fs::DirHandle::DirHandle(glf::fs::DirHandle const&,char const*,glf::ios::openflag)
// int glf::fs::DirHandle::DirHandle(int a1, int a2, char *a3, char *a4);
// [0xcbe430] (46 bytes) glf::fs::UnmountDrive(char const*)
// int glf::fs::UnmountDrive(glf::fs *this);
// [0xcbe460] (46 bytes) glf::fs::GetMountedDrive(char const*)
// int glf::fs::GetMountedDrive(glf::fs *this);
// [0xcbe490] (46 bytes) glf::fs::GetHomeDir(void)
// int glf::fs::GetHomeDir();
// [0xcbe4c0] (46 bytes) glf::fs::GetTmpDir(void)
// int glf::fs::GetTmpDir();
// [0xcbe4f0] (46 bytes) glf::fs::GetCurDir(void)
// int glf::fs::GetCurDir();
// [0xcbe520] (46 bytes) glf::fs::GetCachesDir(void)
// int glf::fs::GetCachesDir();
// [0xcbe550] (46 bytes) glf::fs::RemoveFile(char const*)
// bool glf::fs::RemoveFile(glf::fs *this);
// [0xcbe580] (46 bytes) glf::fs::DoesFileExist(char const*)
// int glf::fs::DoesFileExist(glf::fs *this);
// [0xcbe5b0] (54 bytes) glf::fs::DoesFileExist(char const*,glf::ios::openflag)
// int glf::fs::DoesFileExist(char *a1, char *a2);
// [0xcbe5f0] (51 bytes) glf::fs::SetAlternateDataDir(unsigned int,char const*)
// char *glf::fs::SetAlternateDataDir(glf::fs *this, char *src);
// [0xcbe630] (25 bytes) glf::fs::GetAlternateDataDir(unsigned int)
// char *glf::fs::GetAlternateDataDir(glf::fs *this);
// [0xcbe650] (23 bytes) glf::fs::IsUsingAlternateDataDirs(void)
// int glf::fs::IsUsingAlternateDataDirs();
// [0xcbe670] (36 bytes) glf::fs::GetAlternateDataDirCount(void)
// int glf::fs::GetAlternateDataDirCount();
// [0xcbe6a0] (24 bytes) glf::fs::SetIsUsingAlternateDataDirs(bool)
// uint8_t *glf::fs::SetIsUsingAlternateDataDirs(glf::fs *this);
// [0xcbe6c0] (31 bytes) glf::fs::IsForcingLowercase(void)
// int glf::fs::IsForcingLowercase();
// [0xcbe6e0] (50 bytes) glf::fs::SetIsForcingLowercase(bool)
// int glf::fs::SetIsForcingLowercase(glf::fs *this);
