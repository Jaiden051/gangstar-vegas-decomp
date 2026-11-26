#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_FileSystemInterface.h
// Library: vox | Module: vox_FileSystemInterface
// Binary Address Span: 0x10086a0 .. 0x100c960 (27 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10086a0] (29 bytes) vox::FileSystemInterface::_CloseArchiveFile(vox::FileInterface *)
// int vox::FileSystemInterface::_CloseArchiveFile(vox::FileSystemInterface *this, vox::FileInterface *a2);
// [0x10086c0] (17 bytes) vox::FileSystemInterface::GetArchiveCount(void)
// int vox::FileSystemInterface::GetArchiveCount(vox::FileSystemInterface *this);
// [0x10087a0] (95 bytes) vox::FileSystemInterface::_CloseFile(vox::FileInterface *)
// int vox::FileSystemInterface::_CloseFile(vox::FileSystemInterface *this, vox::FileInterface *a2);
// [0x10088b0] (296 bytes) vox::FileSystemInterface::_RemoveArchive(char const*)
// int vox::FileSystemInterface::_RemoveArchive(vox::FileSystemInterface *this, char *s1);
// [0x10089e0] (264 bytes) vox::FileSystemInterface::~FileSystemInterface()
// void vox::FileSystemInterface::~FileSystemInterface(vox::FileSystemInterface *this);
// [0x1008af0] (56 bytes) vox::FileSystemInterface::~FileSystemInterface()
// void vox::FileSystemInterface::~FileSystemInterface(vox::FileSystemInterface *this);
// [0x1009050] (224 bytes) vox::FileSystemInterface::AddFolderArchive(char const*,int,char const**,bool,bool)
// int vox::FileSystemInterface::AddFolderArchive( vox::FileSystemInterface *this, const char *a2, int a3, const char **a4, bool a5, bool a6);
// [0x1009130] (159 bytes) vox::FileSystemInterface::RemoveArchive(char const*)
// int vox::FileSystemInterface::RemoveArchive(vox::FileSystemInterface *this, const char *a2);
// [0x10091d0] (140 bytes) vox::FileSystemInterface::CloseFile(vox::FileInterface *)
// int vox::FileSystemInterface::CloseFile(vox::FileSystemInterface *this, vox::FileInterface *a2);
// [0x1009260] (148 bytes) vox::FileSystemInterface::OpenFile(char const*,vox::VoxFileAccessMode)
// int vox::FileSystemInterface::OpenFile(int a1, int a2, int a3);
// [0x1009300] (185 bytes) vox::FileSystemInterface::GetArchiveVoxpackInfo(int,vox::FileArchive::VoxpackInfo &)
// int vox::FileSystemInterface::GetArchiveVoxpackInfo( vox::FileSystemInterface *this, int a2, vox::FileArchive::VoxpackInfo *a3);
// [0x10093c0] (244 bytes) vox::FileSystemInterface::GetArchiveVoxpackInfo(char const*,vox::FileArchive::VoxpackInfo &)
// int vox::FileSystemInterface::GetArchiveVoxpackInfo( vox::FileSystemInterface *this, char *a2, vox::FileArchive::VoxpackInfo *a3);
// [0x10094c0] (219 bytes) vox::FileSystemInterface::PopDirectory(void)
// int vox::FileSystemInterface::PopDirectory(vox::FileSystemInterface *this);
// [0x10095a0] (1260 bytes) vox::FileSystemInterface::_AddArchive(char const*,bool,bool,bool,vox::FileArchive::FileRange,char const*)
// int vox::FileSystemInterface::_AddArchive( int a1, vox::FileInterface *a2, char a3, char a4, char a5, char a6, int a7, int a8, char *a9);
// [0x1009a90] (1903 bytes) vox::FileSystemInterface::PushDirectory(char const*)
// int vox::FileSystemInterface::PushDirectory(vox::FileSystemInterface *this, char *src);
// [0x100a200] (2355 bytes) vox::FileSystemInterface::_AddFolderArchive(char const*,int,char const**,bool,bool,char const*)
// int vox::FileSystemInterface::_AddFolderArchive( vox::FileSystemInterface *this, char *s, int a3, const char **a4, bool a5, bool a6, const char *a7);
// [0x100ab40] (1625 bytes) vox::FileSystemInterface::IsDirectory(char const*,bool &)
// int vox::FileSystemInterface::IsDirectory(vox::FileSystemInterface *this, char *s, bool *a3);
// [0x100b1a0] (131 bytes) vox::FileSystemInterface::FileSystemInterface(void)
// vox::FileSystemInterface *vox::FileSystemInterface::FileSystemInterface(vox::FileSystemInterface *this);
// [0x100b230] (68 bytes) vox::FileSystemInterface::GetInstance(void)
// vox::FileSystemStdio *vox::FileSystemInterface::GetInstance();
// [0x100b280] (71 bytes) vox::FileSystemInterface::DestroyInstance(void)
// int vox::FileSystemInterface::DestroyInstance();
// [0x100b2d0] (271 bytes) vox::FileSystemInterface::GetDirectory(char *,int,char const*)
// int vox::FileSystemInterface::GetDirectory(vox::FileSystemInterface *this, char *a2, char *a3);
// [0x100b3e0] (103 bytes) vox::FileSystemInterface::SetPathSeparator(char)
// void vox::FileSystemInterface::SetPathSeparator(vox::FileSystemInterface *this);
// [0x100b900] (1663 bytes) vox::FileSystemInterface::_OpenArchiveFile(char const*,vox::FileArchive::FileRange &,vox::VoxFileAccessMode)
// vox::FileLimited *vox::FileSystemInterface::_OpenArchiveFile(int a1, char *s, int a3, int a4);
// [0x100c580] (327 bytes) vox::FileSystemInterface::AddFileSegmentArchive(char const*,int,int,bool,bool,bool,char const*)
// int vox::FileSystemInterface::AddFileSegmentArchive( vox::FileSystemInterface *this, const char *a2, int a3, int a4, bool a5, bool a6, bool a7, const char *a8);
// [0x100c6d0] (279 bytes) vox::FileSystemInterface::AddArchive(char const*,bool,bool,bool)
// int vox::FileSystemInterface::AddArchive( vox::FileSystemInterface *this, const char *a2, bool a3, bool a4, bool a5);
// [0x100c7f0] (362 bytes) vox::FileSystemInterface::SetArchive(char const*,bool,bool,bool)
// int vox::FileSystemInterface::SetArchive( vox::FileSystemInterface *this, const char *a2, bool a3, bool a4, bool a5);
// [0x100c960] (2750 bytes) vox::FileSystemInterface::_OpenFile(char const*,vox::VoxFileAccessMode)
// vox::FileLimited *vox::FileSystemInterface::_OpenFile(int a1, char *s, int a3);
