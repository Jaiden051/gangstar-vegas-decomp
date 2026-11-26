#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxGroupsSnapshotsManager.h
// Library: vox | Module: vox_VoxGroupsSnapshotsManager
// Binary Address Span: 0x105ca70 .. 0x105ea50 (29 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x105ca70] (57 bytes) vox::VoxGroupsSnapshotsManager::VoxGroupsSnapshotsManager(void)
// struct vox::VoxGroupsSnapshotsManager *vox::VoxGroupsSnapshotsManager::VoxGroupsSnapshotsManager( vox::VoxGroupsSnapshotsManager *this);
// [0x105cab0] (262 bytes) vox::VoxGroupsSnapshotsManager::~VoxGroupsSnapshotsManager()
// void vox::VoxGroupsSnapshotsManager::~VoxGroupsSnapshotsManager(vox::VoxGroupsSnapshotsManager *this);
// [0x105cbc0] (227 bytes) vox::VoxGroupsSnapshotsManager::Clear(void)
// char *vox::VoxGroupsSnapshotsManager::Clear(vox::VoxGroupsSnapshotsManager *this);
// [0x105ccb0] (223 bytes) vox::VoxGroupsSnapshotsManager::PushGroupSnapshot(char const*,std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>> &)
// int vox::VoxGroupsSnapshotsManager::PushGroupSnapshot( uint32_t *a1, char *a2, std::vector<vox::Group, vox::SAllocator<vox::Group, (vox::VoxMemHint)0>> *a3);
// [0x105cd90] (333 bytes) vox::VoxGroupsSnapshotsManager::PopGroupSnapshot(char const*,std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>> &)
// int vox::VoxGroupsSnapshotsManager::PopGroupSnapshot( uint32_t *a1, char *a2, std::vector<vox::Group, vox::SAllocator<vox::Group, (vox::VoxMemHint)0>> *a3);
// [0x105cee0] (9 bytes) vox::VoxGroupsSnapshotsManager::ForceSnapshot(char const*,std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>> &)
// void vox::VoxGroupsSnapshotsManager::ForceSnapshot();
// [0x105cef0] (9 bytes) vox::VoxGroupsSnapshotsManager::UpdateGroupSettings(vox::JsonObject const*,std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>> &)
// void vox::VoxGroupsSnapshotsManager::UpdateGroupSettings();
// [0x105cf00] (9 bytes) vox::VoxGroupsSnapshotsManager::UpdateSnapshot(vox::JsonObject const*,vox::GroupManager *)
// void vox::VoxGroupsSnapshotsManager::UpdateSnapshot();
// [0x105cf10] (9 bytes) vox::VoxGroupsSnapshotsManager::AddSnapshot(vox::JsonObject const*,vox::GroupManager *)
// void vox::VoxGroupsSnapshotsManager::AddSnapshot();
// [0x105cf20] (9 bytes) vox::VoxGroupsSnapshotsManager::RemoveSnapshot(vox::JsonObject const*,vox::GroupManager *)
// void vox::VoxGroupsSnapshotsManager::RemoveSnapshot();
// [0x105cf30] (9 bytes) vox::VoxGroupsSnapshotsManager::ReorderSnapshot(vox::JsonObject const*,vox::GroupManager *)
// void vox::VoxGroupsSnapshotsManager::ReorderSnapshot();
// [0x105cf40] (101 bytes) vox::VoxGroupsSnapshotsManager::GetSnapshot(char const*)const
// char *vox::VoxGroupsSnapshotsManager::GetSnapshot(vox::VoxGroupsSnapshotsManager *this, char *a2);
// [0x105cfb0] (9 bytes) vox::VoxGroupsSnapshotsManager::UpdateDebuggerModule(vox::GroupManager *)
// void vox::VoxGroupsSnapshotsManager::UpdateDebuggerModule();
// [0x105cfc0] (326 bytes) vox::VoxGroupsSnapshotsManager::Update(float,vox::GroupManager *)
// int vox::VoxGroupsSnapshotsManager::Update( vox::VoxGroupsSnapshotsManager *this, float a2, vox::GroupManager *a3);
// [0x105d110] (9 bytes) vox::VoxGroupsSnapshotsManager::SendSnapshotList(void)const
// void vox::VoxGroupsSnapshotsManager::SendSnapshotList();
// [0x105d120] (9 bytes) vox::VoxGroupsSnapshotsManager::ProcessRequest(vox::JsonObject const*,vox::GroupManager *,vox::GroupsSnapshotsModule *)
// void vox::VoxGroupsSnapshotsManager::ProcessRequest();
// [0x105d130] (117 bytes) vox::VoxGroupsSnapshotsManager::GetCurrentSnapshot(void)const
// int vox::VoxGroupsSnapshotsManager::GetCurrentSnapshot(vox::VoxGroupsSnapshotsManager *this);
// [0x105d1b0] (108 bytes) vox::VoxGroupsSnapshotsManager::Reset(std::vector<vox::Group,vox::SAllocator<vox::Group,(vox::VoxMemHint)0>> &)
// vox::VoxGroupsSnapshot *vox::VoxGroupsSnapshotsManager::Reset( vox::VoxGroupsSnapshotsManager *this, std::vector<vox::Group, vox::SAllocator<vox::Group, (vox::VoxMemHint)0>> *a2);
// [0x105d220] (411 bytes) vox::VoxGroupsSnapshotsManager::ExportPresetsConfiguration(vox::VoxJsonLinearSerializer &)const
// int vox::VoxGroupsSnapshotsManager::ExportPresetsConfiguration(uint32_t **a1, int a2);
// [0x105d3c0] (151 bytes) vox::VoxGroupsSnapshotsManager::GroupConfig::GroupConfig(char const*,char const*,bool,float)
// int vox::VoxGroupsSnapshotsManager::GroupConfig::GroupConfig( vox::VoxGroupsSnapshotsManager::GroupConfig *this, char *s, char *a3, bool a4, struct vox::VoxGroupsSnapshotsManager::GroupConfig *a5);
// [0x105d460] (432 bytes) vox::VoxGroupsSnapshotsManager::AddGroup(char const*,char const*,bool)
// vox::VoxGroupsSnapshotsManager *vox::VoxGroupsSnapshotsManager::AddGroup( char **this, char *a2, char *s, char a4);
// [0x105d610] (414 bytes) vox::VoxGroupsSnapshotsManager::LoadGroupsConfiguration(vox::JsonArray const*,vox::GroupManager *)
// int vox::VoxGroupsSnapshotsManager::LoadGroupsConfiguration( char **this, const vox::JsonArray *a2, vox::GroupManager *a3);
// [0x105d7b0] (438 bytes) vox::VoxGroupsSnapshotsManager::AddGroup(vox::Group &,vox::Group &)
// vox::Group *vox::VoxGroupsSnapshotsManager::AddGroup( vox::VoxGroupsSnapshotsManager *this, vox::Group *a2, vox::Group *a3);
// [0x105d970] (1079 bytes) vox::VoxGroupsSnapshotsManager::GroupConfig::Serialize(vox::VoxJsonLinearSerializer &)const
// int vox::VoxGroupsSnapshotsManager::GroupConfig::Serialize(int a1, int a2);
// [0x105ddb0] (383 bytes) vox::VoxGroupsSnapshotsManager::ExportGroupsConfiguration(vox::VoxJsonLinearSerializer &)const
// int vox::VoxGroupsSnapshotsManager::ExportGroupsConfiguration(int a1, int a2);
// [0x105df30] (663 bytes) vox::VoxGroupsSnapshotsManager::Serialize(vox::VoxJsonLinearSerializer &)const
// int vox::VoxGroupsSnapshotsManager::Serialize(uint32_t **a1, int a2);
// [0x105e620] (826 bytes) vox::VoxGroupsSnapshotsManager::LoadPresetsConfiguration(vox::JsonArray const*,vox::GroupManager *)
// int vox::VoxGroupsSnapshotsManager::LoadPresetsConfiguration( vox::VoxGroupsSnapshotsManager *this, const vox::JsonArray *a2, vox::GroupManager *a3);
// [0x105e960] (236 bytes) vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration(vox::JsonObject const*,vox::GroupManager *)
// int vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration( vox::VoxGroupsSnapshotsManager *this, const vox::JsonObject *a2, vox::GroupManager *a3);
// [0x105ea50] (581 bytes) vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration(char const*,vox::GroupManager *)
// int vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration( vox::VoxGroupsSnapshotsManager *this, const char *a2, vox::GroupManager *a3);
