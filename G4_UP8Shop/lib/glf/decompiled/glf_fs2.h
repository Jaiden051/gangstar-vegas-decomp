#pragma once
// ============================================================================
// G4_UP8Shop/lib/glf/decompiled/glf_fs2.h
// Library: glf | Module: glf_fs2
// Binary Address Span: 0xc96e50 .. 0xccb100 (307 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0xc96e50] (77 bytes) glf::fs2::LockedSearchPaths::~LockedSearchPaths()
// void glf::fs2::LockedSearchPaths::~LockedSearchPaths(pthread_mutex_t ***this);
// [0xc96ea0] (56 bytes) glf::fs2::LockedSearchPaths::~LockedSearchPaths()
// void glf::fs2::LockedSearchPaths::~LockedSearchPaths(pthread_mutex_t ***this);
// [0xc97b80] (849 bytes) glf::fs2::FileSystem::~FileSystem()
// void glf::fs2::FileSystem::~FileSystem(glf::fs2::FileSystem *this);
// [0xc97ee0] (56 bytes) glf::fs2::FileSystem::~FileSystem()
// void glf::fs2::FileSystem::~FileSystem(glf::fs2::FileSystem *this);
// [0xc97fc0] (248 bytes) glf::fs2::GetFsFromName(std::string const&)
// uint32_t *glf::fs2::GetFsFromName(uint32_t *a1, const void **a2);
// [0xc980c0] (24 bytes) glf::fs2::SetDebugFlag(int)
// uint32_t *glf::fs2::SetDebugFlag(glf::fs2 *this);
// [0xc980e0] (24 bytes) glf::fs2::AddDebugFlags(int)
// uint32_t *glf::fs2::AddDebugFlags(glf::fs2 *this);
// [0xc98100] (26 bytes) glf::fs2::ClearDebugFlag(int)
// unsigned int glf::fs2::ClearDebugFlag(glf::fs2 *this);
// [0xc98120] (22 bytes) glf::fs2::GetDebugFlags(void)
// int glf::fs2::GetDebugFlags();
// [0xc98140] (27 bytes) glf::fs2::TestAnyDebugFlags(int)
// bool glf::fs2::TestAnyDebugFlags(glf::fs2 *this);
// [0xc98160] (31 bytes) glf::fs2::TestDebugFlags(int)
// bool glf::fs2::TestDebugFlags(glf::fs2 *this);
// [0xc98180] (88 bytes) glf::fs2::android::SetPaths(glf::fs2::Path const&,glf::fs2::Path const&,glf::fs2::Path const&)
// int glf::fs2::android::SetPaths(glf::fs2::android *this, const glf::fs2::Path *a2, const glf::fs2::Path *a3);
// [0xc981e0] (52 bytes) glf::fs2::other::GetCurrentWorkingDirectory(void)
// glf::fs2::other *glf::fs2::other::GetCurrentWorkingDirectory(glf::fs2::other *this);
// [0xc98220] (52 bytes) glf::fs2::other::GetExecutableDirectory(void)
// glf::fs2::other *glf::fs2::other::GetExecutableDirectory(glf::fs2::other *this);
// [0xc98260] (52 bytes) glf::fs2::other::GetExecutable(void)
// glf::fs2::other *glf::fs2::other::GetExecutable(glf::fs2::other *this);
// [0xc982a0] (52 bytes) glf::fs2::other::GetTempDirectory(void)
// glf::fs2::other *glf::fs2::other::GetTempDirectory(glf::fs2::other *this);
// [0xc982e0] (9 bytes) glf::fs2::other::Init(glf::fs2::Path const&)
// void glf::fs2::other::Init();
// [0xc982f0] (41 bytes) glf::fs2::MountPoint::NextId(void)
// int glf::fs2::MountPoint::NextId();
// [0xc98320] (12 bytes) glf::fs2::MountPoint::GetId(void)const
// int glf::fs2::MountPoint::GetId(glf::fs2::MountPoint *this);
// [0xc98330] (85 bytes) glf::fs2::MountPoint::MountPoint(glf::intrusive_ptr<glf::fs2::FileSystem>)
// int glf::fs2::MountPoint::MountPoint(glf::fs2::Path *a1, int *a2);
// [0xc98390] (103 bytes) glf::fs2::MountPoint::MountPoint(glf::fs2::MountPoint const&)
// glf::fs2::MountPoint *glf::fs2::MountPoint::MountPoint( glf::fs2::MountPoint *this, const glf::fs2::MountPoint *a2);
// [0xc98400] (124 bytes) glf::fs2::MountPoint::operator=(glf::fs2::MountPoint const&)
// glf::fs2::MountPoint *glf::fs2::MountPoint::operator=(glf **this, glf **a2);
// [0xc98480] (105 bytes) glf::fs2::MountPoint::operator==(glf::fs2::MountPoint const&)const
// int glf::fs2::MountPoint::operator==(glf::fs2::MountPoint *this, const glf::fs2::MountPoint *a2);
// [0xc984f0] (13 bytes) glf::fs2::MountPoint::IsValid(void)const
// bool glf::fs2::MountPoint::IsValid(glf::fs2::MountPoint *this);
// [0xc98500] (24 bytes) glf::fs2::Metrics::Reset(void)
// int glf::fs2::Metrics::Reset(glf::fs2::Metrics *this);
// [0xc98520] (34 bytes) glf::fs2::Metrics::Metrics(void)
// glf::fs2::Metrics *glf::fs2::Metrics::Metrics(glf::fs2::Metrics *this);
// [0xc98550] (114 bytes) glf::fs2::Metrics::operator-(glf::fs2::Metrics const&)const
// glf::fs2::Metrics *glf::fs2::Metrics::operator-(glf::fs2::Metrics *this, const glf::fs2::Metrics *a2, int a3);
// [0xc985d0] (130 bytes) glf::fs2::GetNativeFs(void)
// int *glf::fs2::GetNativeFs();
// [0xc98660] (213 bytes) glf::fs2::FileSystem::UnlinkSelf(void)
// int glf::fs2::FileSystem::UnlinkSelf(glf::fs2::FileSystem *this);
// [0xc98740] (14 bytes) glf::fs2::FileSystem::GetRoot(void)const
// char *glf::fs2::FileSystem::GetRoot(glf::fs2::FileSystem *this);
// [0xc98750] (34 bytes) glf::fs2::IsInit(void)
// bool glf::fs2::IsInit();
// [0xc98780] (141 bytes) glf::fs2::FileSystem::Get(void)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Get(glf::fs2::FileSystem *this);
// [0xc98810] (155 bytes) glf::fs2::FileSystem::GetName(void)const
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetName(glf::fs2::FileSystem *this, int a2);
// [0xc988b0] (99 bytes) glf::fs2::Deinit(void)
// glf::fs2::FileSystem *glf::fs2::Deinit();
// [0xc98920] (657 bytes) glf::fs2::FileSystem::MakeAbsolute(glf::fs2::Path const&,glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::MakeAbsolute( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, const glf::fs2::Path *a3);
// [0xc98bc0] (77 bytes) glf::fs2::FileSystem::Absolute(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Absolute( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xc98c10] (542 bytes) glf::fs2::FileSystem::ResolveFromIndex(glf::fs2::Path const&,glf::fs2::FileSystem::ResolveInfo &)const
// int glf::fs2::FileSystem::ResolveFromIndex(int a1, glf::fs2::Path *a2, glf::fs2::IndexData **a3);
// [0xc98e30] (815 bytes) glf::fs2::FileSystem::GatherAllSearchPaths(std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>> &,bool)
// int glf::fs2::FileSystem::GatherAllSearchPaths( pthread_mutex_t **this, std::list<glf::fs2::MountPoint, glf::allocator<glf::fs2::MountPoint>> *a2, bool a3);
// [0xc99160] (159 bytes) glf::fs2::RandomString(int)
// glf::fs2 *glf::fs2::RandomString(glf::fs2 *this, size_t a2);
// [0xc99200] (651 bytes) glf::fs2::FileSystem::ResolveMount(glf::fs2::Path const&,glf::fs2::Path&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::ResolveMount( glf::fs2::FileSystem *this, pthread_mutex_t **a2, glf::fs2::Path *a3, glf::fs2::Path *a4);
// [0xc99490] (244 bytes) glf::fs2::FileSystem::Unmount(glf::fs2::Path const&)
// int glf::fs2::FileSystem::Unmount(pthread_mutex_t **this, const glf::fs2::Path *a2);
// [0xc99590] (12 bytes) glf::fs2::FileSystem::GetMounts(void)const
// char *glf::fs2::FileSystem::GetMounts(glf::fs2::FileSystem *this);
// [0xc995a0] (477 bytes) glf::fs2::FileSystem::Recurse(glf::fs2::IndexData &,int,glf::fs2::PathInfo const*,unsigned short,bool)
// unsigned int glf::fs2::FileSystem::Recurse( glf::fs2::FileSystem *this, glf::fs2::IndexData *a2, int a3, const glf::fs2::PathInfo *a4, char a5);
// [0xc99780] (385 bytes) glf::fs2::SortChildren(glf::fs2::PathInfo *)
// unsigned int glf::fs2::SortChildren(glf::fs2 *this);
// [0xc99910] (325 bytes) glf::fs2::FileSystem::ClearIndex(glf::intrusive_ptr<glf::fs2::IndexData>)
// int glf::fs2::FileSystem::ClearIndex(int a1, uint32_t *a2);
// [0xc99a60] (45 bytes) glf::fs2::FileSystem::GetError(void)const
// void *glf::fs2::FileSystem::GetError(glf::fs2::FileSystem *this);
// [0xc99a90] (65 bytes) glf::fs2::FileSystem::SetError(int,glf::ErrorCategory const&,char const*)
// uint32_t *glf::fs2::FileSystem::SetError( glf::fs2::FileSystem *this, int a2, const glf::ErrorCategory *a3, const char *a4);
// [0xc99ae0] (63 bytes) glf::fs2::FileSystem::Copy(glf::fs2::Path const&,glf::fs2::Path const&,bool)
// int glf::fs2::FileSystem::Copy(glf::fs2::FileSystem *this);
// [0xc99b20] (63 bytes) glf::fs2::FileSystem::Remove(glf::fs2::Path const&,bool)
// int glf::fs2::FileSystem::Remove(glf::fs2::FileSystem *this);
// [0xc99b60] (63 bytes) glf::fs2::FileSystem::Move(glf::fs2::Path const&,glf::fs2::Path const&,bool)
// int glf::fs2::FileSystem::Move(glf::fs2::FileSystem *this);
// [0xc99ba0] (63 bytes) glf::fs2::FileSystem::Mkdir(glf::fs2::Path const&)
// int glf::fs2::FileSystem::Mkdir(glf::fs2::FileSystem *this);
// [0xc99be0] (63 bytes) glf::fs2::FileSystem::OpenV(glf::fs2::Path const&,glf::io2::Device::OpenMode)
// int glf::fs2::FileSystem::OpenV(glf::fs2::FileSystem *a1);
// [0xc99c20] (172 bytes) glf::fs2::FileSystem::GetStatusV(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetStatusV(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc99cd0] (89 bytes) glf::fs2::FileSystem::OpenDirV(glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// uint32_t *glf::fs2::FileSystem::OpenDirV(uint32_t *a1, glf::fs2::FileSystem *a2);
// [0xc99d30] (120 bytes) glf::fs2::FileSystem::LoadIndex(glf::fs2::Path const&,glf::intrusive_ptr<glf::fs2::FileSystem>)
// int *glf::fs2::FileSystem::LoadIndex(int *a1, int a2, int a3, volatile int32_t **a4);
// [0xc99db0] (266 bytes) glf::fs2::FileSystem::RemoveIndex(glf::intrusive_ptr<glf::fs2::IndexData>)
// int glf::fs2::FileSystem::RemoveIndex(int a1, volatile int32_t **a2);
// [0xc99ec0] (17 bytes) glf::fs2::FileSystem::ForceLowerCase(bool)
// glf::fs2::FileSystem *glf::fs2::FileSystem::ForceLowerCase(glf::fs2::FileSystem *this, bool a2);
// [0xc99ee0] (16 bytes) glf::fs2::FileSystem::IsForcingLowerCase(void)const
// int glf::fs2::FileSystem::IsForcingLowerCase(glf::fs2::FileSystem *this);
// [0xc99ef0] (12 bytes) glf::fs2::FileSystem::GetMetrics(void)const
// char *glf::fs2::FileSystem::GetMetrics(glf::fs2::FileSystem *this);
// [0xc99f00] (12 bytes) glf::fs2::FileSystem::GetMetrics(void)
// char *glf::fs2::FileSystem::GetMetrics(glf::fs2::FileSystem *this);
// [0xc99f10] (37 bytes) glf::fs2::FileSystem::ResetMetrics(void)
// int glf::fs2::FileSystem::ResetMetrics(glf::fs2::FileSystem *this);
// [0xc99f40] (70 bytes) glf::fs2::LockedSearchPaths::LockedSearchPaths(std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>> &,glf::Mutex *)
// uint32_t *glf::fs2::LockedSearchPaths::LockedSearchPaths(uint32_t *a1, int a2, pthread_mutex_t **a3);
// [0xc99f90] (130 bytes) glf::fs2::FileSystem::GetThreadSearchPaths(void)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetThreadSearchPaths(glf::fs2::FileSystem *this, int a2);
// [0xc9a020] (111 bytes) glf::fs2::FileSystem::GetSearchPaths(void)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetSearchPaths(glf::fs2::FileSystem *this, int a2);
// [0xc9a090] (12 bytes) glf::fs2::LockedSearchPaths::get(void)
// int glf::fs2::LockedSearchPaths::get(glf::fs2::LockedSearchPaths *this);
// [0xc9a0a0] (12 bytes) glf::fs2::LockedSearchPaths::get(void)const
// int glf::fs2::LockedSearchPaths::get(glf::fs2::LockedSearchPaths *this);
// [0xc9a0b0] (132 bytes) glf::fs2::LockedSearchPaths::push_back(glf::fs2::MountPoint const&)
// bool glf::fs2::LockedSearchPaths::push_back(glf::fs2::LockedSearchPaths *this, const glf::fs2::MountPoint *a2);
// [0xc9a140] (134 bytes) glf::fs2::LockedSearchPaths::push_front(glf::fs2::MountPoint const&)
// bool glf::fs2::LockedSearchPaths::push_front(glf::fs2::LockedSearchPaths *this, const glf::fs2::MountPoint *a2);
// [0xc9a1d0] (99 bytes) glf::fs2::LockedSearchPaths::pop_back(void)
// void glf::fs2::LockedSearchPaths::pop_back(glf::fs2::LockedSearchPaths *this);
// [0xc9a240] (98 bytes) glf::fs2::LockedSearchPaths::pop_front(void)
// void glf::fs2::LockedSearchPaths::pop_front(glf::fs2::LockedSearchPaths *this);
// [0xc9a2b0] (250 bytes) glf::fs2::LockedSearchPaths::remove(glf::fs2::Path const&,bool)
// int glf::fs2::LockedSearchPaths::remove(glf::fs2::LockedSearchPaths *this, const glf::fs2::Path *a2, bool a3);
// [0xc9a3b0] (234 bytes) glf::fs2::LockedSearchPaths::remove(int,bool)
// int glf::fs2::LockedSearchPaths::remove(glf::fs2::LockedSearchPaths *this, int a2, bool a3);
// [0xc9a4a0] (54 bytes) glf::fs2::LockedSearchPaths::remove(glf::fs2::MountPoint const&,bool)
// int glf::fs2::LockedSearchPaths::remove( glf::fs2::LockedSearchPaths *this, const glf::fs2::MountPoint *a2, bool a3);
// [0xc9a4e0] (26 bytes) glf::fs2::LockedSearchPaths::size(void)const
// int glf::fs2::LockedSearchPaths::size(glf::fs2::LockedSearchPaths *this);
// [0xc9a500] (170 bytes) glf::fs2::LockedSearchPaths::clear(void)
// uint32_t *glf::fs2::LockedSearchPaths::clear(glf::fs2::LockedSearchPaths *this);
// [0xc9a5b0] (17 bytes) glf::fs2::FileSystem::SetModifyPathFunction(void (*)(glf::fs2::Path &))
// void (*glf::fs2::FileSystem::SetModifyPathFunction( glf::fs2::FileSystem *this, void (*a2)(glf::fs2::Path *)))(glf::fs2::Path *);
// [0xc9a5d0] (15 bytes) glf::fs2::FileSystem::GetModifyPathFunction(void)const
// int glf::fs2::FileSystem::GetModifyPathFunction(glf::fs2::FileSystem *this);
// [0xc9a5e0] (104 bytes) glf::fs2::FileSystem::FixPath(glf::fs2::Path const&)const
// glf::fs2::FileSystem *glf::fs2::FileSystem::FixPath( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xc9a650] (1197 bytes) glf::fs2::FileSystem::OpenDirNoSearchPaths(glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// uint32_t *glf::fs2::FileSystem::OpenDirNoSearchPaths( uint32_t *a1, glf::fs2::Path *a2, glf::fs2::Path *a3, int a4, int a5);
// [0xc9ab00] (722 bytes) glf::fs2::FileSystem::OpenDir(glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// glf **glf::fs2::FileSystem::OpenDir( glf **a1, pthread_mutex_t **a2, glf::fs2::Path *a3, int a4, int a5);
// [0xc9ade0] (841 bytes) glf::fs2::FileSystem::Walk(glf::fs2::Path const&,glf::fs2::IndexData &,int,unsigned short,glf::fs2::Path const&,bool)
// unsigned int glf::fs2::FileSystem::Walk( pthread_mutex_t **this, const glf::fs2::Path *a2, glf::fs2::IndexData *a3, int a4, uint16_t a5, const glf::fs2::Path *a6, bool a7);
// [0xc9b130] (528 bytes) glf::fs2::FileSystem::CreateIndex(glf::fs2::Path const&,int)
// glf::fs2::FileSystem *glf::fs2::FileSystem::CreateIndex( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::RefCounted *a3, int a4);
// [0xc9b340] (1698 bytes) glf::fs2::FileSystem::OpenNoSearchPaths(glf::fs2::Path const&,glf::io2::Device::OpenMode)
// glf::RefCounted *glf::fs2::FileSystem::OpenNoSearchPaths(const glf::fs2::Path *a1, glf::fs2::Path *a2, int a3);
// [0xc9b9f0] (491 bytes) glf::fs2::FileSystem::Open(glf::fs2::Path const&,glf::io2::Device::OpenMode)
// glf::RefCounted *glf::fs2::FileSystem::Open(glf::fs2::FileSystem *a1, glf::fs2::Path *a2, int a3);
// [0xc9bbe0] (2402 bytes) glf::fs2::FileSystem::GetStatusNoSearchPaths(glf::fs2::Path const&,glf::fs2::Status &)
// glf **glf::fs2::FileSystem::GetStatusNoSearchPaths( glf **a1, const glf::fs2::Path *a2, glf::fs2::Path *a3, uint32_t *a4);
// [0xc9c550] (185 bytes) glf::fs2::FileSystem::GetStatusNoSearchPaths(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetStatusNoSearchPaths( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xc9c610] (922 bytes) glf::fs2::FileSystem::GetStatus(glf::fs2::Path const&,glf::fs2::Status &)
// glf **glf::fs2::FileSystem::GetStatus( glf **a1, glf::fs2::FileSystem *a2, glf::fs2::Path *a3, uint32_t *a4);
// [0xc9c9b0] (185 bytes) glf::fs2::FileSystem::GetStatus(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetStatus( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xc9ca70] (108 bytes) glf::fs2::FileSystem::Exists(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Exists(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc9cae0] (168 bytes) glf::fs2::MountPoint::MountPoint(glf::fs2::Path const&,glf::intrusive_ptr<glf::fs2::FileSystem>,glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::MountPoint::MountPoint( glf::fs2::Path *a1, glf::RefCounted *a2, glf::fs2::FileSystem **a3, glf::fs2::Path *a4);
// [0xc9cb90] (160 bytes) glf::fs2::MountPoint::MountPoint(glf::fs2::Path const&,glf::intrusive_ptr<glf::fs2::FileSystem>)
// glf::fs2::FileSystem *glf::fs2::MountPoint::MountPoint( glf::fs2::Path *a1, glf::RefCounted *a2, glf::fs2::FileSystem **a3);
// [0xc9cc30] (108 bytes) glf::fs2::FileSystem::IsDirectory(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::IsDirectory(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc9cca0] (108 bytes) glf::fs2::FileSystem::IsFile(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::IsFile(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc9cd10] (116 bytes) glf::fs2::FileSystem::FileSize(glf::fs2::Path const&)
// int glf::fs2::FileSystem::FileSize(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc9cd90] (102 bytes) glf::fs2::FileSystem::GetFileType(glf::fs2::Path const&)
// int glf::fs2::FileSystem::GetFileType(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc9ce00] (102 bytes) glf::fs2::FileSystem::GetPermissions(glf::fs2::Path const&)
// int glf::fs2::FileSystem::GetPermissions(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc9ce70] (478 bytes) glf::fs2::MountPoint::MountPoint(glf::fs2::Path const&)
// glf::fs2::MountPoint *glf::fs2::MountPoint::MountPoint(glf::fs2::MountPoint *this, const glf::fs2::Path *a2);
// [0xc9d050] (986 bytes) glf::fs2::FileSystem::OpenTemp(glf::io2::Device::OpenMode,bool,char const*,char const*)
// glf::RefCounted *glf::fs2::FileSystem::OpenTemp(glf::fs2::Path *a1, int a2, char a3, char *a4, char *a5);
// [0xc9d430] (773 bytes) glf::fs2::FileSystem::GetAbsolute(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetAbsolute( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xc9d740] (1474 bytes) glf::fs2::FileSystem::ResolveFromSearchPaths(glf::fs2::Path const&,glf::fs2::Path&,bool)
// glf::fs2::FileSystem *glf::fs2::FileSystem::ResolveFromSearchPaths( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3, glf::fs2::Path *a4, bool a5);
// [0xc9dd10] (184 bytes) glf::fs2::BaseStatus::ConvertTime(long long,glf::fs2::TimeUnit::E,glf::fs2::TimeUnit::E)
// int glf::fs2::BaseStatus::ConvertTime(int64_t a1, int a2, int a3);
// [0xc9e290] (1718 bytes) glf::fs2::FileSystem::Combine(glf::intrusive_ptr<glf::fs2::IndexData>,glf::intrusive_ptr<glf::fs2::IndexData>)
// volatile int32_t **glf::fs2::FileSystem::Combine( volatile int32_t **a1, glf::RefCounted **a2, glf::RefCounted **a3);
// [0xc9e950] (2066 bytes) glf::fs2::FileSystem::CreateIndex(std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>> const&,int)
// glf::fs2::FileSystem *glf::fs2::FileSystem::CreateIndex( glf::fs2::FileSystem *this, const std::list<glf::fs2::MountPoint, glf::allocator<glf::fs2::MountPoint>> *a2, uint32_t *a3, glf::fs2::IndexData *a4);
// [0xc9f170] (358 bytes) glf::fs2::FileSystem::FileSystem(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::FileSystem(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xc9f2e0] (350 bytes) glf::fs2::FileSystem::FileSystem(void)
// glf::fs2::FileSystem *glf::fs2::FileSystem::FileSystem(glf::fs2::FileSystem *this);
// [0xc9f440] (264 bytes) glf::fs2::TokenizeAbsolutePath(glf::fs2::Path const&,std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>> &)
// int glf::fs2::TokenizeAbsolutePath(glf::fs2 *this, const glf::fs2::Path *a2);
// [0xc9f550] (309 bytes) glf::fs2::ResolveTokens(std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>> const&,std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>>&,unsigned int)
// uint32_t *glf::fs2::ResolveTokens( glf::fs2 *this, const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *a2, unsigned int a3);
// [0xc9f690] (1766 bytes) glf::fs2::FileSystem::ResolveMount2(glf::fs2::Path const&,glf::fs2::IndexData const*,glf::fs2::Path&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::ResolveMount2( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, const glf::fs2::IndexData *a3, glf::fs2::Path *a4, glf::fs2::Path *a5);
// [0xc9fd80] (494 bytes) glf::fs2::TokenizeCanonicalPath(glf::fs2::Path const&,std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>> &)
// int glf::fs2::TokenizeCanonicalPath(glf::fs2 *this, const glf::fs2::Path *a2);
// [0xc9ff70] (132 bytes) glf::fs2::FileSystem::GetNormalized(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetNormalized( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2 *a3);
// [0xca0000] (176 bytes) glf::fs2::FileSystem::MakeCanonical(glf::fs2::Path const&,glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::MakeCanonical( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, const glf::fs2::Path *a3);
// [0xca00b0] (874 bytes) glf::fs2::FileSystem::MakeRelative(glf::fs2::Path const&,glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::MakeRelative( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, const glf::fs2::Path *a3);
// [0xca0420] (277 bytes) glf::fs2::FileSystem::Relative(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Relative( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xca0540] (176 bytes) glf::fs2::FileSystem::GetRelative(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::GetRelative( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xca05f0] (77 bytes) glf::fs2::FileSystem::Canonical(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Canonical( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xca0640] (132 bytes) glf::fs2::FileSystem::Normalized(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Normalized( glf::fs2::FileSystem *this, const glf::fs2::Path *a2, glf::fs2 *a3);
// [0xca06d0] (316 bytes) glf::fs2::FileSystem::Mount(glf::fs2::Path const&,glf::intrusive_ptr<glf::fs2::FileSystem>,glf::fs2::Path const&)
// int glf::fs2::FileSystem::Mount(int a1, glf::fs2::Path *a2, int *a3, glf::RefCounted *a4);
// [0xca0810] (192 bytes) glf::fs2::FileSystem::Index(std::list<glf::fs2::MountPoint,glf::allocator<glf::fs2::MountPoint>> const&,int)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Index( glf::fs2::FileSystem *this, pthread_mutex_t **a2, uint32_t *a3, glf::fs2::IndexData *a4);
// [0xca08d0] (813 bytes) glf::fs2::FileSystem::IndexAll(int)
// glf::fs2::FileSystem *glf::fs2::FileSystem::IndexAll( glf::fs2::FileSystem *this, pthread_mutex_t **a2, glf::fs2::IndexData *a3);
// [0xca0c00] (160 bytes) glf::fs2::FileSystem::AddIndex(glf::intrusive_ptr<glf::fs2::IndexData>)
// int glf::fs2::FileSystem::AddIndex(int a1, int *a2);
// [0xca0ca0] (192 bytes) glf::fs2::FileSystem::Index(glf::fs2::Path const&,int)
// glf::fs2::FileSystem *glf::fs2::FileSystem::Index(glf::fs2::FileSystem *this, pthread_mutex_t **a2, int a3);
// [0xca0d60] (1363 bytes) glf::fs2::FileSystem::ListDir(glf::fs2::Path const&,glf::fs2::Dir::Filter,std::vector<glf::fs2::FileEntry,glf::allocator<glf::fs2::FileEntry>> &,std::vector<glf::fs2::FileEntry,glf::allocator<glf::fs2::FileEntry>> &)
// int glf::fs2::FileSystem::ListDir(pthread_mutex_t **a1, glf::fs2::Path *a2, int a3, int a4, int a5);
// [0xca1310] (97 bytes) glf::fs2::PathInfo::LesserThan(glf::fs2::PathInfo const*,glf::fs2::PathInfo const*)
// unsigned int glf::fs2::PathInfo::LesserThan(glf::fs2::PathInfo *this, const glf::fs2::PathInfo *a2);
// [0xca2f00] (45 bytes) glf::fs2::FileSystemPosix::~FileSystemPosix()
// void glf::fs2::FileSystemPosix::~FileSystemPosix(glf::fs2::FileSystemPosix *this);
// [0xca2f30] (56 bytes) glf::fs2::FileSystemPosix::~FileSystemPosix()
// void glf::fs2::FileSystemPosix::~FileSystemPosix(glf::fs2::FileSystemPosix *this);
// [0xca2f70] (135 bytes) glf::fs2::GetPosixErrorCategory(void)
// int *glf::fs2::GetPosixErrorCategory();
// [0xca3000] (62 bytes) glf::fs2::android::GetDataDirectory(void)
// glf::fs2::android *glf::fs2::android::GetDataDirectory(glf::fs2::android *this);
// [0xca3040] (134 bytes) glf::fs2::android::GetCurrentWorkingDirectory(void)
// glf::fs2::android *glf::fs2::android::GetCurrentWorkingDirectory(glf::fs2::android *this);
// [0xca30d0] (62 bytes) glf::fs2::android::GetExecutableDirectory(void)
// glf::fs2::android *glf::fs2::android::GetExecutableDirectory(glf::fs2::android *this);
// [0xca3110] (62 bytes) glf::fs2::android::GetExecutable(void)
// glf::fs2::android *glf::fs2::android::GetExecutable(glf::fs2::android *this);
// [0xca3150] (62 bytes) glf::fs2::android::GetTempDirectory(void)
// glf::fs2::android *glf::fs2::android::GetTempDirectory(glf::fs2::android *this);
// [0xca3190] (207 bytes) glf::fs2::InitStartingWorkingDirectory(glf::fs2::Path const&)
// glf::fs2 *glf::fs2::InitStartingWorkingDirectory(glf::fs2 *this, const glf::fs2::Path *a2);
// [0xca3260] (67 bytes) glf::fs2::FileSystemPosix::FileSystemPosix(glf::fs2::Path const&)
// void (**glf::fs2::FileSystemPosix::FileSystemPosix( glf::fs2::FileSystemPosix *this, const glf::fs2::Path *a2))(glf::fs2::FileSystemPosix *__hidden this);
// [0xca32b0] (93 bytes) glf::fs2::FileSystem::NewNative(glf::fs2::Path const&)
// glf::fs2::FileSystem *glf::fs2::FileSystem::NewNative(glf::fs2::FileSystem *this, const glf::fs2::Path *a2);
// [0xca3310] (251 bytes) glf::fs2::NativeInit(glf::fs2::Path const&)
// void glf::fs2::NativeInit(glf::fs2 *this);
// [0xca3410] (34 bytes) glf::fs2::android::Init(glf::fs2::Path const&)
// void glf::fs2::android::Init(glf::fs2::android *this);
// [0xca3440] (99 bytes) glf::fs2::FileSystemPosix::CheckLastError(char const*,bool,glf::fs2::Path const&,glf::fs2::Path const&)
// uint32_t *glf::fs2::FileSystemPosix::CheckLastError(glf::fs2::FileSystemPosix *this, char *a2, bool a3);
// [0xca34b0] (245 bytes) glf::fs2::FileSystemPosix::Move(glf::fs2::Path const&,glf::fs2::Path const&,bool)
// bool glf::fs2::FileSystemPosix::Move( glf::fs2::FileSystemPosix *this, const glf::fs2::Path *a2, const glf::fs2::Path *a3, bool a4);
// [0xca35b0] (354 bytes) glf::fs2::FileSystemPosix::Mkdir(glf::fs2::Path const&)
// int glf::fs2::FileSystemPosix::Mkdir(glf::fs2::FileSystemPosix *this, const glf::fs2::Path *a2);
// [0xca3720] (367 bytes) glf::fs2::FileSystemPosix::OpenDirV(glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// uint32_t *glf::fs2::FileSystemPosix::OpenDirV( uint32_t *a1, glf::fs2::FileSystem *a2, glf::fs2::Path *a3, int a4, int a5);
// [0xca3890] (298 bytes) glf::fs2::FileSystemPosix::OpenV(glf::fs2::Path const&,glf::io2::Device::OpenMode)
// glf::io2::FileDevice *glf::fs2::FileSystemPosix::OpenV( glf::fs2::FileSystemPosix *a1, glf::fs2::Path *a2, int a3, int a4, int a5, int a6);
// [0xca39c0] (370 bytes) glf::fs2::FileSystemPosix::Remove(glf::fs2::Path const&)
// bool glf::fs2::FileSystemPosix::Remove(glf::fs2::FileSystemPosix *this, const glf::fs2::Path *a2);
// [0xca3b40] (1140 bytes) glf::fs2::FileSystemPosix::Copy(glf::fs2::Path const&,glf::fs2::Path const&,bool)
// bool glf::fs2::FileSystemPosix::Copy( pthread_mutex_t **this, const glf::fs2::Path *a2, const glf::fs2::Path *a3, bool a4);
// [0xca3fc0] (840 bytes) glf::fs2::FileSystemPosix::Remove(glf::fs2::Path const&,bool)
// int glf::fs2::FileSystemPosix::Remove(pthread_mutex_t **this, const glf::fs2::Path *a2, bool a3);
// [0xca4310] (837 bytes) glf::fs2::FileSystemPosix::GetStatusV(glf::fs2::Path const&)
// glf::fs2::FileSystemPosix *glf::fs2::FileSystemPosix::GetStatusV( glf::fs2::FileSystemPosix *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xca4660] (85 bytes) glf::fs2::apple::GetSandboxDirectory(void)
// glf::fs2::apple *glf::fs2::apple::GetSandboxDirectory(glf::fs2::apple *this);
// [0xca46c0] (85 bytes) glf::fs2::apple::GetDocumentsDirectory(void)
// glf::fs2::apple *glf::fs2::apple::GetDocumentsDirectory(glf::fs2::apple *this);
// [0xca4720] (85 bytes) glf::fs2::apple::GetLibraryDirectory(void)
// glf::fs2::apple *glf::fs2::apple::GetLibraryDirectory(glf::fs2::apple *this);
// [0xca4780] (85 bytes) glf::fs2::apple::GetLibraryCachesDirectory(void)
// glf::fs2::apple *glf::fs2::apple::GetLibraryCachesDirectory(glf::fs2::apple *this);
// [0xca47e0] (56 bytes) glf::fs2::apple::GetCurrentWorkingDirectory(void)
// glf::fs2::apple *glf::fs2::apple::GetCurrentWorkingDirectory(glf::fs2::apple *this);
// [0xca4820] (56 bytes) glf::fs2::apple::GetExecutableDirectory(void)
// glf::fs2::apple *glf::fs2::apple::GetExecutableDirectory(glf::fs2::apple *this);
// [0xca4860] (56 bytes) glf::fs2::apple::GetExecutable(void)
// glf::fs2::apple *glf::fs2::apple::GetExecutable(glf::fs2::apple *this);
// [0xca48a0] (85 bytes) glf::fs2::apple::GetTempDirectory(void)
// glf::fs2::apple *glf::fs2::apple::GetTempDirectory(glf::fs2::apple *this);
// [0xca4900] (290 bytes) glf::fs2::apple::InitDirectories(void)
// void glf::fs2::apple::InitDirectories();
// [0xca4a60] (16 bytes) glf::fs2::DirectoryPosix::IsValid(void)const
// bool glf::fs2::DirectoryPosix::IsValid(glf::fs2::DirectoryPosix *this);
// [0xca4a70] (22 bytes) glf::fs2::SystemErrorCategoryPosix::GetName(void)const
// const char *glf::fs2::SystemErrorCategoryPosix::GetName();
// [0xca4a90] (27 bytes) glf::fs2::SystemErrorCategoryPosix::~SystemErrorCategoryPosix()
// void glf::fs2::SystemErrorCategoryPosix::~SystemErrorCategoryPosix(glf::fs2::SystemErrorCategoryPosix *this);
// [0xca4ab0] (45 bytes) glf::fs2::SystemErrorCategoryPosix::~SystemErrorCategoryPosix()
// void glf::fs2::SystemErrorCategoryPosix::~SystemErrorCategoryPosix(glf::fs2::SystemErrorCategoryPosix *this);
// [0xca4b10] (64 bytes) glf::fs2::DirectoryPosix::FindNext(void)
// struct dirent *glf::fs2::DirectoryPosix::FindNext(glf::fs2::DirectoryPosix *this);
// [0xca4b50] (77 bytes) glf::fs2::DirectoryPosix::~DirectoryPosix()
// void glf::fs2::DirectoryPosix::~DirectoryPosix(DIR **this);
// [0xca4ba0] (151 bytes) glf::fs2::SystemErrorCategoryPosix::GetMsg(int,char const*)const
// glf::fs2::SystemErrorCategoryPosix *glf::fs2::SystemErrorCategoryPosix::GetMsg( glf::fs2::SystemErrorCategoryPosix *this, int a2, const char *errnum, int a4);
// [0xca4c40] (34 bytes) glf::fs2::SystemErrorCategoryPosix::GetSystemError(int)const
// int glf::fs2::SystemErrorCategoryPosix::GetSystemError(glf::fs2::SystemErrorCategoryPosix *this, glf *a2);
// [0xca4c70] (85 bytes) glf::fs2::DirectoryPosix::~DirectoryPosix()
// void glf::fs2::DirectoryPosix::~DirectoryPosix(DIR **this);
// [0xca4cd0] (651 bytes) glf::fs2::DirectoryPosix::FillData(void)
// void glf::fs2::DirectoryPosix::FillData(glf::fs2::DirectoryPosix *this);
// [0xca4f60] (386 bytes) glf::fs2::IndexData::~IndexData()
// void glf::fs2::IndexData::~IndexData(glf **this);
// [0xca50f0] (56 bytes) glf::fs2::IndexData::~IndexData()
// void glf::fs2::IndexData::~IndexData(glf **this);
// [0xca5800] (178 bytes) glf::fs2::IndexData::GetName(void)const
// glf::fs2::IndexData *glf::fs2::IndexData::GetName(glf::fs2::IndexData *this, int a2);
// [0xca5d00] (128 bytes) glf::fs2::IndexData::GetRoot(void)
// void *glf::fs2::IndexData::GetRoot();
// [0xca5d80] (445 bytes) glf::fs2::IndexData::FindFsIdx(glf::fs2::FileSystem *)
// unsigned int glf::fs2::IndexData::FindFsIdx(glf::fs2::IndexData *this, glf::fs2::FileSystem *a2);
// [0xca5f40] (557 bytes) glf::fs2::IndexData::FindFsRootIdx(glf::fs2::Path const&)
// unsigned int glf::fs2::IndexData::FindFsRootIdx(glf::fs2::Path **this, const glf::fs2::Path *a2);
// [0xca6170] (9 bytes) glf::fs2::IndexData::ResolveOffsets(bool)
// int glf::fs2::IndexData::ResolveOffsets();
// [0xca6180] (568 bytes) glf::fs2::IndexData::IndexData(void)
// glf::fs2::IndexData *glf::fs2::IndexData::IndexData(glf::fs2::IndexData *this);
// [0xca63c0] (568 bytes) glf::fs2::IndexData::IndexData(int,glf::intrusive_ptr<glf::fs2::FileSystem>)
// struct glf::fs2::Path *glf::fs2::IndexData::IndexData(glf::fs2::FileSystem *a1);
// [0xca6600] (85 bytes) glf::fs2::IndexData::Combine(glf::intrusive_ptr<glf::fs2::IndexData>,glf::intrusive_ptr<glf::fs2::IndexData>)
// volatile int32_t **glf::fs2::IndexData::Combine(volatile int32_t **a1);
// [0xca6660] (47 bytes) glf::fs2::IndexData::GetFileSystem(unsigned int)const
// glf::fs2::IndexData *glf::fs2::IndexData::GetFileSystem(glf::fs2::IndexData *this, unsigned int a2, int a3);
// [0xca6690] (28 bytes) glf::fs2::IndexData::GetAltPath(unsigned int)const
// int glf::fs2::IndexData::GetAltPath(glf::fs2::IndexData *this, unsigned int a2);
// [0xca66b0] (12 bytes) glf::fs2::IndexData::GetFolderIdx(unsigned int)const
// int glf::fs2::IndexData::GetFolderIdx(glf::fs2::IndexData *this, uint16_t a2);
// [0xca66c0] (2746 bytes) glf::fs2::IndexData::Reserve(int,unsigned int,unsigned short)
// unsigned int glf::fs2::IndexData::Reserve(glf **this, int a2, size_t a3, uint16_t a4);
// [0xca7180] (271 bytes) glf::fs2::IndexData::ComputeSize(void)const
// unsigned int glf::fs2::IndexData::ComputeSize(glf::fs2::IndexData *this);
// [0xca7290] (22 bytes) glf::fs2::IndexData::IsIndexed(int)const
// bool glf::fs2::IndexData::IsIndexed(glf::fs2::IndexData *this, int a2);
// [0xca72b0] (761 bytes) glf::fs2::IndexData::Clear(int)
// int glf::fs2::IndexData::Clear(glf::fs2::IndexData *this, int a2);
// [0xca75b0] (18 bytes) glf::fs2::IndexData::IsAnyIndexed(int)const
// bool glf::fs2::IndexData::IsAnyIndexed(glf::fs2::IndexData *this, int a2);
// [0xca75d0] (3291 bytes) glf::fs2::IndexData::Save(glf::fs2::Path const&,glf::intrusive_ptr<glf::fs2::FileSystem>)
// int glf::fs2::IndexData::Save(char *a1, glf::fs2::Path *a2, volatile int32_t **a3);
// [0xca82b0] (85 bytes) glf::fs2::IsRangeUnique(__gnu_cxx::__normal_iterator<glf::fs2::IndexData::Hash const*,std::vector<glf::fs2::IndexData::Hash,glf::allocator<glf::fs2::IndexData::Hash>>>,__gnu_cxx::__normal_iterator<glf::fs2::IndexData::Hash const*,std::vector<glf::fs2::IndexData::Hash,glf::allocator<glf::fs2::IndexData::Hash>>>)
// int glf::fs2::IsRangeUnique(int a1, int a2);
// [0xca8310] (47 bytes) glf::fs2::DoesPathMatch(glf::fs2::Path const&,glf::fs2::Path const&)
// bool glf::fs2::DoesPathMatch(glf::fs2 *this, const glf::fs2::Path *a2);
// [0xca8340] (33 bytes) glf::fs2::IndexData::IsDir(unsigned int)const
// bool glf::fs2::IndexData::IsDir(glf::fs2::IndexData *this, unsigned int a2);
// [0xca8370] (50 bytes) glf::fs2::IndexData::GetFolderName(unsigned short)const
// int glf::fs2::IndexData::GetFolderName(glf::fs2::IndexData *this, uint16_t a2);
// [0xca83b0] (50 bytes) glf::fs2::IndexData::GetFileName(unsigned int)const
// int glf::fs2::IndexData::GetFileName(glf::fs2::IndexData *this, unsigned int a2);
// [0xca83f0] (540 bytes) glf::fs2::IndexData::GetSubFileIdx(unsigned short,unsigned int,unsigned int,glf::LimitString const&,bool)const
// unsigned int glf::fs2::IndexData::GetSubFileIdx( glf::fs2::IndexData *a1, int16_t a2, size_t a3, int a4, const void **a5, char a6);
// [0xca8610] (594 bytes) glf::fs2::IndexData::GetSubFileIdx(unsigned short,glf::LimitString const&)const
// unsigned int glf::fs2::IndexData::GetSubFileIdx(glf::fs2::IndexData *a1, uint16_t a2, const void **a3);
// [0xca8870] (37 bytes) glf::fs2::IndexData::GetSubFolder(unsigned short,unsigned short)const
// int glf::fs2::IndexData::GetSubFolder(glf::fs2::IndexData *this, uint16_t a2, uint16_t a3);
// [0xca88a0] (31 bytes) glf::fs2::IndexData::GetSubFolderIdx(unsigned short,unsigned short)const
// int16_t glf::fs2::IndexData::GetSubFolderIdx( glf::fs2::IndexData *this, uint16_t a2, uint16_t a3);
// [0xca88c0] (81 bytes) glf::fs2::IndexData::GetSubFolderName(unsigned short,unsigned short)const
// int glf::fs2::IndexData::GetSubFolderName(glf::fs2::IndexData *this, uint16_t a2, uint16_t a3);
// [0xca8920] (523 bytes) glf::fs2::IndexData::IsSorted(unsigned short)const
// int glf::fs2::IndexData::IsSorted(glf::fs2::IndexData *this, uint16_t a2);
// [0xca8b30] (328 bytes) glf::fs2::IndexData::GetSubFolderIdx(unsigned short,unsigned short,unsigned short,glf::LimitString const&)const
// int glf::fs2::IndexData::GetSubFolderIdx( glf::fs2::IndexData *a1, int16_t a2, uint16_t a3, uint16_t a4, int a5);
// [0xca8c80] (491 bytes) glf::fs2::IndexData::Print(unsigned short,int,__sFILE *)const
// void glf::fs2::IndexData::Print(glf::fs2::IndexData *a1, uint16_t a2, char *a3, FILE *stream);
// [0xca8e70] (502 bytes) glf::fs2::IndexData::GetSubFolderIdx(unsigned short,glf::LimitString const&)const
// int glf::fs2::IndexData::GetSubFolderIdx(glf::fs2::IndexData *a1, uint16_t a2, const void **a3);
// [0xca9070] (85 bytes) glf::fs2::IndexData::GetSubFolderIdx(unsigned short,char const*)const
// int glf::fs2::IndexData::GetSubFolderIdx(glf::fs2::IndexData *this, uint16_t a2, const char *s);
// [0xca90d0] (2646 bytes) glf::fs2::IndexData::GetEntryIdx(glf::fs2::Path const&)const
// unsigned int glf::fs2::IndexData::GetEntryIdx(glf::fs2::IndexData *this, const glf::fs2::Path *a2);
// [0xca9b30] (147 bytes) glf::fs2::IndexData::GetFolderIdx(std::string const&)const
// unsigned int glf::fs2::IndexData::GetFolderIdx(glf::fs2::IndexData *a1, int a2);
// [0xca9bd0] (306 bytes) glf::fs2::IndexData::OpenDirV(glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// int *glf::fs2::IndexData::OpenDirV( int *a1, glf::fs2::IndexData *a2, glf::fs2::Path *a3, int a4, int a5);
// [0xca9d10] (1021 bytes) glf::fs2::IndexData::GetStatusV(glf::fs2::Path const&)
// glf::fs2::IndexData *glf::fs2::IndexData::GetStatusV( glf::fs2::IndexData *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xcaa110] (20 bytes) glf::fs2::IndexData::GetParentIdx(unsigned short)const
// int glf::fs2::IndexData::GetParentIdx(glf::fs2::IndexData *this, uint16_t a2);
// [0xcaa130] (19 bytes) glf::fs2::IndexData::GetParentIdx(unsigned int)const
// int glf::fs2::IndexData::GetParentIdx(glf::fs2::IndexData *this, unsigned int a2);
// [0xcaa150] (263 bytes) glf::fs2::IndexData::GetFullpath(unsigned int)const
// glf::fs2::IndexData *glf::fs2::IndexData::GetFullpath( glf::fs2::IndexData *this, glf::fs2::IndexData *a2, unsigned int a3);
// [0xcaa260] (338 bytes) glf::fs2::IndexData::OpenV(glf::fs2::Path const&,glf::io2::Device::OpenMode)
// int glf::fs2::IndexData::OpenV(glf::fs2::IndexData *a1, glf::fs2::Path *a2, int a3);
// [0xcaa3c0] (61 bytes) glf::fs2::IndexData::GetFileType(unsigned int)const
// int glf::fs2::IndexData::GetFileType(glf::fs2::IndexData *this, unsigned int a2);
// [0xcaa400] (46 bytes) glf::fs2::IndexData::GetPermissions(unsigned int)const
// int glf::fs2::IndexData::GetPermissions(glf::fs2::IndexData *this, unsigned int a2);
// [0xcaa430] (85 bytes) glf::fs2::IndexData::GetFileSize(unsigned int)const
// int64_t glf::fs2::IndexData::GetFileSize(glf::fs2::IndexData *this, unsigned int a2);
// [0xcaa490] (2524 bytes) glf::fs2::IndexData::SortEntries(unsigned short)
// int glf::fs2::IndexData::SortEntries(glf::fs2::IndexData *this, uint16_t a2);
// [0xcaae70] (1279 bytes) glf::fs2::IndexData::Lock(int,bool)
// int glf::fs2::IndexData::Lock(glf::fs2::IndexData *this, int a2, bool a3);
// [0xcab370] (4498 bytes) glf::fs2::IndexData::NewEntry(int,unsigned short,char const*,glf::fs2::FileSystem *,glf::fs2::Path const&)
// unsigned int glf::fs2::IndexData::NewEntry( glf::fs2::IndexData *this, int a2, uint16_t a3, char *a4, glf::fs2::FileSystem *a5, const glf::fs2::Path *a6);
// [0xcac510] (157 bytes) glf::fs2::IndexData::NewFile(int,unsigned short,char const*,glf::fs2::FileSystem *,glf::fs2::Path const&)
// unsigned int glf::fs2::IndexData::NewFile( glf::fs2::IndexData *this, int a2, uint16_t a3, char *a4, glf::fs2::FileSystem *a5, const glf::fs2::Path *a6);
// [0xcac5b0] (327 bytes) glf::fs2::IndexData::NewDir(int,unsigned short,char const*,glf::fs2::FileSystem *,glf::fs2::Path const&)
// int glf::fs2::IndexData::NewDir( glf::fs2::IndexData *this, int a2, uint16_t a3, char *a4, glf::fs2::FileSystem *a5, const glf::fs2::Path *a6);
// [0xcac700] (664 bytes) glf::fs2::IndexData::IndexData(glf::fs2::Path const&,int,glf::intrusive_ptr<glf::fs2::FileSystem>)
// int glf::fs2::IndexData::IndexData( glf::fs2::FileSystem *a1, glf::fs2::Path *a2, int a3, glf::fs2::FileSystem **a4);
// [0xcac9a0] (5856 bytes) glf::fs2::IndexData::Load(glf::fs2::Path const&,glf::intrusive_ptr<glf::fs2::FileSystem>)
// int glf::fs2::IndexData::Load(glf::fs2::IndexData *a1, glf::fs2::Path *a2, volatile int32_t **a3);
// [0xcae080] (346 bytes) glf::fs2::IndexData::FromFile(glf::fs2::Path const&,glf::intrusive_ptr<glf::fs2::FileSystem>)
// glf::fs2::FileSystem *glf::fs2::IndexData::FromFile(glf::fs2::Path *a1, volatile int32_t **a2);
// [0xcb0620] (69 bytes) glf::fs2::Path::~Path()
// void glf::fs2::Path::~Path(glf::fs2::Path *this);
// [0xcb0670] (34 bytes) glf::fs2::Path::Path(void)
// struct glf::fs2::Path *glf::fs2::Path::Path(glf::fs2::Path *this);
// [0xcb06a0] (491 bytes) glf::fs2::Path::m_parent_path_end(void)const
// int glf::fs2::Path::m_parent_path_end(glf::fs2::Path *this);
// [0xcb0890] (231 bytes) glf::fs2::Path::AppendSeparatorIfNeeded(void)
// int glf::fs2::Path::AppendSeparatorIfNeeded(glf::fs2::Path *this);
// [0xcb0980] (72 bytes) glf::fs2::Path::operator=(glf::fs2::Path const&)
// glf::fs2::Path *glf::fs2::Path::operator=(glf::fs2::Path *this, const glf::fs2::Path *a2);
// [0xcb09d0] (80 bytes) glf::fs2::Path::Clear(void)
// int glf::fs2::Path::Clear(glf::fs2::Path *this);
// [0xcb0a20] (99 bytes) glf::fs2::Path::RemoveFilename(void)
// glf::fs2::Path *glf::fs2::Path::RemoveFilename(glf::fs2::Path *this);
// [0xcb0a90] (42 bytes) glf::fs2::Path::Swap(glf::fs2::Path&)
// int glf::fs2::Path::Swap(glf::fs2::Path *this, glf::fs2::Path *a2);
// [0xcb0ac0] (11 bytes) glf::fs2::Path::c_str(void)const
// int glf::fs2::Path::c_str(glf::fs2::Path *this);
// [0xcb0ad0] (11 bytes) glf::fs2::Path::String(void)const
// glf::fs2::Path *glf::fs2::Path::String(glf::fs2::Path *this);
// [0xcb0ae0] (15 bytes) glf::fs2::Path::Empty(void)const
// bool glf::fs2::Path::Empty(glf::fs2::Path *this);
// [0xcb0af0] (15 bytes) glf::fs2::Path::HasFilename(void)const
// bool glf::fs2::Path::HasFilename(glf::fs2::Path *this);
// [0xcb0b00] (320 bytes) glf::fs2::Path::begin(void)const
// glf::fs2::Path *glf::fs2::Path::begin(glf::fs2::Path *this, uint32_t *a2);
// [0xcb0c40] (50 bytes) glf::fs2::Path::end(void)const
// glf::fs2::Path *glf::fs2::Path::end(glf::fs2::Path *this, uint32_t *a2);
// [0xcb0c80] (421 bytes) glf::fs2::Path::iterator::increment(void)
// const char *glf::fs2::Path::iterator::increment(glf::fs2::Path::iterator *this);
// [0xcb0e30] (484 bytes) glf::fs2::Path::Compare(glf::fs2::Path const&)const
// int glf::fs2::Path::Compare(glf::fs2::Path *this, const glf::fs2::Path *a2);
// [0xcb1020] (810 bytes) glf::fs2::Path::iterator::decrement(void)
// const char *glf::fs2::Path::iterator::decrement(glf::fs2::Path::iterator *this);
// [0xcb1350] (16 bytes) glf::fs2::fix_slash(int)
// glf::fs2 *glf::fs2::fix_slash(glf::fs2 *this);
// [0xcb1360] (16 bytes) glf::fs2::fix_backslash(int)
// glf::fs2 *glf::fs2::fix_backslash(glf::fs2 *this);
// [0xcb1370] (13 bytes) glf::fs2::Path::BackslashesToSlashes(void)
// glf::fs2::Path *glf::fs2::Path::BackslashesToSlashes(glf::fs2::Path *this);
// [0xcb1380] (9 bytes) glf::fs2::Path::BackslashesToSlashes(std::string &)
// void glf::fs2::Path::BackslashesToSlashes();
// [0xcb1390] (13 bytes) glf::fs2::Path::SlashesToBackslashes(void)
// glf::fs2::Path *glf::fs2::Path::SlashesToBackslashes(glf::fs2::Path *this);
// [0xcb13a0] (9 bytes) glf::fs2::Path::SlashesToBackslashes(std::string &)
// void glf::fs2::Path::SlashesToBackslashes();
// [0xcb13b0] (112 bytes) glf::fs2::Path::TrimTrailingSlashes(void)
// int glf::fs2::Path::TrimTrailingSlashes(glf::fs2::Path *this);
// [0xcb1420] (72 bytes) glf::fs2::Path::Canonical(glf::fs2::Path const&)const
// glf::fs2::Path *glf::fs2::Path::Canonical( glf::fs2::Path *this, const glf::fs2::Path *a2, const glf::fs2::Path *a3);
// [0xcb1470] (98 bytes) glf::fs2::Path::MakeCanonical(glf::fs2::Path const&)
// glf::fs2::Path *glf::fs2::Path::MakeCanonical(glf::fs2::Path *this, const glf::fs2::Path *a2);
// [0xcb14e0] (103 bytes) glf::fs2::MyFind(std::string const&,unsigned int,char const*)
// int glf::fs2::MyFind(int a1, int a2, char *s);
// [0xcb1550] (185 bytes) glf::fs2::SetAppFolderName(std::string const&)
// int glf::fs2::SetAppFolderName(int a1);
// [0xcb1610] (41 bytes) glf::fs2::GetAppFolderName(bool)
// int glf::fs2::GetAppFolderName(glf::fs2 *this);
// [0xcb1640] (34 bytes) glf::fs2::Path::Init(void)
// glf::fs2::Path *glf::fs2::Path::Init(glf::fs2::Path *this);
// [0xcb1670] (78 bytes) glf::fs2::Path::Path(glf::fs2::Path const&)
// glf::fs2::Path *glf::fs2::Path::Path(glf::fs2::Path *this, const glf::fs2::Path *a2);
// [0xcb16c0] (178 bytes) glf::fs2::Path::operator/=(glf::fs2::Path const&)
// glf::fs2::Path *glf::fs2::Path::operator/=(glf::fs2::Path *this, const glf::fs2::Path *a2);
// [0xcb1780] (88 bytes) glf::fs2::Path::Path(glf::LimitString const&)
// glf::fs2::Path *glf::fs2::Path::Path(glf::fs2::Path *a1, int a2);
// [0xcb17e0] (161 bytes) glf::fs2::Path::RootName(void)const
// glf::fs2::Path *glf::fs2::Path::RootName(glf::fs2::Path *this, uint32_t *a2);
// [0xcb1890] (91 bytes) glf::fs2::Path::HasRootName(void)const
// int glf::fs2::Path::HasRootName(glf::fs2::Path *this);
// [0xcb18f0] (483 bytes) glf::fs2::Path::Path(std::vector<glf::LimitString,glf::EphemeralAllocator<glf::LimitString>> const&,unsigned int)
// glf::fs2::Path *glf::fs2::Path::Path( glf::fs2::Path *this, const std::vector<glf::LimitString, glf::EphemeralAllocator<glf::LimitString>> *a2, unsigned int a3);
// [0xcb1ae0] (492 bytes) glf::fs2::Path::RemovePrefix(glf::fs2::Path const&)const
// glf::fs2::Path *glf::fs2::Path::RemovePrefix( glf::fs2::Path *this, const glf::fs2::Path *a2, glf::fs2::Path *a3);
// [0xcb1cd0] (372 bytes) glf::fs2::Path::Filename(void)const
// glf::fs2::Path *glf::fs2::Path::Filename(glf::fs2::Path *this, uint32_t *a2);
// [0xcb1e50] (266 bytes) glf::fs2::Path::Stem(void)const
// glf::fs2::Path *glf::fs2::Path::Stem(glf::fs2::Path *this, uint32_t *a2);
// [0xcb1f60] (91 bytes) glf::fs2::Path::HasStem(void)const
// int glf::fs2::Path::HasStem(glf::fs2::Path *this);
// [0xcb1fc0] (172 bytes) glf::fs2::Path::RelativePath(void)const
// glf::fs2::Path *glf::fs2::Path::RelativePath(glf::fs2::Path *this, int *a2);
// [0xcb2070] (91 bytes) glf::fs2::Path::IsRelative(void)const
// int glf::fs2::Path::IsRelative(glf::fs2::Path *this);
// [0xcb20d0] (91 bytes) glf::fs2::Path::HasRelativePath(void)const
// int glf::fs2::Path::HasRelativePath(glf::fs2::Path *this);
// [0xcb2130] (212 bytes) glf::fs2::Path::Extension(void)const
// glf::fs2::Path *glf::fs2::Path::Extension(glf::fs2::Path *this, uint32_t *a2);
// [0xcb2210] (91 bytes) glf::fs2::Path::HasExtension(void)const
// int glf::fs2::Path::HasExtension(glf::fs2::Path *this);
// [0xcb2270] (264 bytes) glf::fs2::Path::ReplaceExtension(glf::fs2::Path const&)
// glf::fs2::Path *glf::fs2::Path::ReplaceExtension(glf::fs2::Path *this, const glf::fs2::Path *a2);
// [0xcb2380] (209 bytes) glf::fs2::Path::operator/=(char const*)
// glf::fs2::Path *glf::fs2::Path::operator/=(glf::fs2::Path *this, char *s);
// [0xcb2460] (146 bytes) glf::fs2::Path::ParentPath(void)const
// glf::fs2::Path *glf::fs2::Path::ParentPath(glf::fs2::Path *this, glf::fs2::Path *a2);
// [0xcb2500] (91 bytes) glf::fs2::Path::HasParentPath(void)const
// int glf::fs2::Path::HasParentPath(glf::fs2::Path *this);
// [0xcb2560] (296 bytes) glf::fs2::Path::RootDirectory(void)const
// glf::fs2::Path *glf::fs2::Path::RootDirectory(glf::fs2::Path *this, uint32_t *a2);
// [0xcb2690] (91 bytes) glf::fs2::Path::HasRootDirectory(void)const
// int glf::fs2::Path::HasRootDirectory(glf::fs2::Path *this);
// [0xcb26f0] (752 bytes) glf::fs2::Path::MakeLower(void)
// glf::fs2::Path *glf::fs2::Path::MakeLower(glf::fs2::Path *this);
// [0xcb29e0] (34 bytes) glf::fs2::Path::IsAbsolute(void)const
// int glf::fs2::Path::IsAbsolute(glf::fs2::Path *this);
// [0xcb2a10] (69 bytes) glf::fs2::Path::HasRootPath(void)const
// int glf::fs2::Path::HasRootPath(glf::fs2::Path *this);
// [0xcb2a60] (191 bytes) glf::fs2::Path::RootPath(void)const
// glf::fs2::Path *glf::fs2::Path::RootPath(glf::fs2::Path *this, uint32_t *a2);
// [0xcc9690] (12 bytes) glf::fs2::Dir::Entry(void)const
// char *glf::fs2::Dir::Entry(glf::fs2::Dir *this);
// [0xcc96a0] (12 bytes) glf::fs2::Dir::GetRoot(void)const
// char *glf::fs2::Dir::GetRoot(glf::fs2::Dir *this);
// [0xcc96b0] (12 bytes) glf::fs2::Dir::GetFs(void)
// int glf::fs2::Dir::GetFs(glf::fs2::Dir *this);
// [0xcc96c0] (30 bytes) glf::fs2::RecursiveDir::Entry(void)const
// int glf::fs2::RecursiveDir::Entry(glf::fs2::RecursiveDir *this);
// [0xcc96e0] (40 bytes) glf::fs2::RecursiveDir::IsValid(void)const
// int glf::fs2::RecursiveDir::IsValid(glf::fs2::RecursiveDir *this);
// [0xcc9710] (30 bytes) glf::fs2::RecursiveDir::FillData(void)
// int glf::fs2::RecursiveDir::FillData(glf::fs2::RecursiveDir *this);
// [0xcc9730] (30 bytes) glf::fs2::RecursiveDir::GetRoot(void)const
// int glf::fs2::RecursiveDir::GetRoot(glf::fs2::RecursiveDir *this);
// [0xcc9750] (30 bytes) glf::fs2::RecursiveDir::GetFs(void)
// int glf::fs2::RecursiveDir::GetFs(glf::fs2::RecursiveDir *this);
// [0xcc9770] (16 bytes) glf::fs2::DirectoryIndexed::FindNext(void)
// glf::fs2::DirectoryIndexed *glf::fs2::DirectoryIndexed::FindNext(glf::fs2::DirectoryIndexed *this);
// [0xcc9780] (26 bytes) glf::fs2::DirectoryIndexed::IsValid(void)const
// bool glf::fs2::DirectoryIndexed::IsValid(glf::fs2::DirectoryIndexed *this);
// [0xcc97a0] (33 bytes) glf::fs2::DirWithSearchPaths::IsValid(void)const
// int glf::fs2::DirWithSearchPaths::IsValid(glf::fs2::DirWithSearchPaths *this);
// [0xcc97d0] (27 bytes) glf::fs2::DirWithSearchPaths::FillData(void)
// int glf::fs2::DirWithSearchPaths::FillData(glf::fs2::DirWithSearchPaths *this);
// [0xcc97f0] (27 bytes) glf::fs2::DirWithSearchPaths::GetRoot(void)const
// int glf::fs2::DirWithSearchPaths::GetRoot(glf::fs2::DirWithSearchPaths *this);
// [0xcc9810] (16 bytes) glf::fs2::DirWithSearchPaths::GetFs(void)
// int glf::fs2::DirWithSearchPaths::GetFs(glf::fs2::DirWithSearchPaths *this);
// [0xcc9820] (170 bytes) glf::fs2::Dir::~Dir()
// void glf::fs2::Dir::~Dir(glf::fs2::Dir *this);
// [0xcc98d0] (56 bytes) glf::fs2::Dir::~Dir()
// void glf::fs2::Dir::~Dir(glf::fs2::Dir *this);
// [0xcc9910] (260 bytes) glf::fs2::DirWithSearchPaths::~DirWithSearchPaths()
// void glf::fs2::DirWithSearchPaths::~DirWithSearchPaths(glf::fs2::DirWithSearchPaths *this);
// [0xcc9a20] (56 bytes) glf::fs2::DirWithSearchPaths::~DirWithSearchPaths()
// void glf::fs2::DirWithSearchPaths::~DirWithSearchPaths(glf::fs2::DirWithSearchPaths *this);
// [0xcc9a60] (178 bytes) glf::fs2::RecursiveDir::~RecursiveDir()
// void glf::fs2::RecursiveDir::~RecursiveDir(glf::fs2::RecursiveDir *this);
// [0xcc9b20] (56 bytes) glf::fs2::RecursiveDir::~RecursiveDir()
// void glf::fs2::RecursiveDir::~RecursiveDir(glf::fs2::RecursiveDir *this);
// [0xcc9ec0] (685 bytes) glf::fs2::RecursiveDir::FindNext(void)
// int glf::fs2::RecursiveDir::FindNext(glf::fs2::RecursiveDir *this);
// [0xcca170] (509 bytes) glf::fs2::DirWithSearchPaths::Entry(void)const
// char *glf::fs2::DirWithSearchPaths::Entry(glf::fs2::DirWithSearchPaths *this);
// [0xcca370] (510 bytes) glf::fs2::FileEntry::Clear(void)
// void glf::fs2::FileEntry::Clear(glf::fs2::FileEntry *this);
// [0xcca570] (419 bytes) glf::fs2::DirectoryIndexed::FillData(void)
// char glf::fs2::DirectoryIndexed::FillData(glf::fs2::DirectoryIndexed *this);
// [0xcca720] (182 bytes) glf::fs2::FileEntry::FileEntry(void)
// void glf::fs2::FileEntry::FileEntry(glf::fs2::FileEntry *this);
// [0xcca7e0] (109 bytes) glf::fs2::Dir::Dir(glf::fs2::FileSystem &,glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// void glf::fs2::Dir::Dir(uint32_t *a1, int a2, glf::fs2::Path *a3, int a4, int a5);
// [0xcca850] (170 bytes) glf::fs2::Dir::Validate(void)
// int glf::fs2::Dir::Validate(glf::fs2::Dir *this);
// [0xcca900] (56 bytes) glf::fs2::Dir::MoveNext(void)
// int glf::fs2::Dir::MoveNext(glf::fs2::Dir *this);
// [0xcca940] (362 bytes) glf::fs2::RecursiveDir::RecursiveDir(glf::fs2::FileSystem &,glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// glf *glf::fs2::RecursiveDir::RecursiveDir(void **a1, pthread_mutex_t **a2, glf::fs2::Path *a3, int a4, int a5);
// [0xccaab0] (174 bytes) glf::fs2::DirectoryIndexed::DirectoryIndexed(glf::fs2::FileSystem &,glf::fs2::IndexData &,unsigned short,glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// int glf::fs2::DirectoryIndexed::DirectoryIndexed( glf::fs2::Dir *a1, int a2, int a3, uint16_t a4, glf::fs2::Path *a5, int a6, int a7);
// [0xccab60] (708 bytes) glf::fs2::DirWithSearchPaths::FindNextDir(bool)
// glf::fs2::DirWithSearchPaths *glf::fs2::DirWithSearchPaths::FindNextDir( glf::fs2::DirWithSearchPaths *this, int a2, char a3);
// [0xccae30] (306 bytes) glf::fs2::DirWithSearchPaths::FindNext(void)
// int glf::fs2::DirWithSearchPaths::FindNext(glf::fs2::Dir **this);
// [0xccaf70] (346 bytes) glf::fs2::DirWithSearchPaths::DirWithSearchPaths(glf::fs2::FileSystem &,glf::fs2::Path const&,glf::fs2::Dir::Filter,glf::fs2::Dir::ScanDirection)
// int glf::fs2::DirWithSearchPaths::DirWithSearchPaths( uint32_t *a1, pthread_mutex_t **a2, glf::fs2::Path *a3, int a4, int a5);
// [0xccb0d0] (45 bytes) glf::fs2::DirectoryIndexed::~DirectoryIndexed()
// void glf::fs2::DirectoryIndexed::~DirectoryIndexed(glf::fs2::DirectoryIndexed *this);
// [0xccb100] (67 bytes) glf::fs2::DirectoryIndexed::~DirectoryIndexed()
// void glf::fs2::DirectoryIndexed::~DirectoryIndexed(glf::fs2::DirectoryIndexed *this);
