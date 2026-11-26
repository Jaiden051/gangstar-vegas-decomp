#pragma once
// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_GroupManager.h
// Library: vox | Module: vox_GroupManager
// Binary Address Span: 0x10588c0 .. 0x10599c0 (26 functions)
// ============================================================================

#include "Core/Utils/DecompTypes.h"

// [0x10588c0] (731 bytes) vox::GroupManager::GroupManager(void)
// void vox::GroupManager::GroupManager(vox::GroupManager *this);
// [0x1058ba0] (110 bytes) vox::GroupManager::~GroupManager()
// void vox::GroupManager::~GroupManager(vox::VoxGroupsSnapshotsManager **this);
// [0x1058c10] (167 bytes) vox::GroupManager::GetGroupId(char const*)const
// int vox::GroupManager::GetGroupId(vox::GroupManager *this, char *s1);
// [0x1058cc0] (180 bytes) vox::GroupManager::GetGroupName(unsigned int,char *,int)const
// int vox::GroupManager::GetGroupName(vox::GroupManager *this, unsigned int a2, char *dest, size_t n);
// [0x1058d80] (167 bytes) vox::GroupManager::IsChild(unsigned int,unsigned int)const
// int vox::GroupManager::IsChild(vox::GroupManager *this, unsigned int a2, unsigned int a3);
// [0x1058e30] (85 bytes) vox::GroupManager::IsGroupValid(unsigned int)const
// bool vox::GroupManager::IsGroupValid(vox::GroupManager *this, unsigned int a2);
// [0x1058e90] (393 bytes) vox::GroupManager::ReconfigureGroup(unsigned int,vox::group::CreationSettings &)
// int vox::GroupManager::ReconfigureGroup(vox::GroupManager *a1, unsigned int a2, int a3);
// [0x1059020] (120 bytes) vox::GroupManager::GetEnable(unsigned int)const
// int vox::GroupManager::GetEnable(vox::GroupManager *this, unsigned int a2);
// [0x10590a0] (157 bytes) vox::GroupManager::SetEnable(unsigned int,bool,float)
// int vox::GroupManager::SetEnable(vox::GroupManager *this, unsigned int a2, bool a3, float a4);
// [0x1059140] (120 bytes) vox::GroupManager::GetVolume(unsigned int)const
// long double vox::GroupManager::GetVolume(vox::GroupManager *this, unsigned int a2);
// [0x10591c0] (155 bytes) vox::GroupManager::SetVolume(unsigned int,float,float)
// int vox::GroupManager::SetVolume(vox::GroupManager *this, unsigned int a2, float a3, float a4);
// [0x1059260] (120 bytes) vox::GroupManager::GetPitch(unsigned int)const
// long double vox::GroupManager::GetPitch(vox::GroupManager *this, unsigned int a2);
// [0x10592e0] (139 bytes) vox::GroupManager::SetPitch(unsigned int,float,float)
// int vox::GroupManager::SetPitch(vox::GroupManager *this, unsigned int a2, float a3, float a4);
// [0x1059370] (180 bytes) vox::GroupManager::GetEffectiveVolume(unsigned int)const
// long double vox::GroupManager::GetEffectiveVolume(vox::GroupManager *this, unsigned int a2);
// [0x1059430] (180 bytes) vox::GroupManager::GetEffectivePitch(unsigned int)const
// long double vox::GroupManager::GetEffectivePitch(vox::GroupManager *this, unsigned int a2);
// [0x10594f0] (246 bytes) vox::GroupManager::Update(float)
// int vox::GroupManager::Update(vox::GroupManager *this, float a2);
// [0x10595f0] (451 bytes) vox::GroupManager::Serialize(vox::VoxJsonLinearSerializer &,unsigned long long)
// int vox::GroupManager::Serialize(int *a1, int a2, char a3);
// [0x10597c0] (79 bytes) vox::GroupManager::GetGroupName(unsigned int)const
// char *vox::GroupManager::GetGroupName(vox::GroupManager *this, unsigned int a2);
// [0x1059810] (55 bytes) vox::GroupManager::LoadSnapshotConfiguration(char const*)
// int vox::GroupManager::LoadSnapshotConfiguration(vox::GroupManager *this, const char *a2);
// [0x1059850] (55 bytes) vox::GroupManager::PushGroupSnapshot(char const*)
// int vox::GroupManager::PushGroupSnapshot(vox::GroupManager *this, char *a2);
// [0x1059890] (55 bytes) vox::GroupManager::PopGroupSnapshot(char const*)
// int vox::GroupManager::PopGroupSnapshot(vox::GroupManager *this, char *a2);
// [0x10598d0] (45 bytes) vox::GroupManager::ResetGroupSnapshot(void)
// vox::VoxGroupsSnapshotsManager *vox::GroupManager::ResetGroupSnapshot(vox::GroupManager *this);
// [0x1059900] (92 bytes) vox::GroupManager::SetSnapshotControlled(unsigned int,bool)
// unsigned int vox::GroupManager::SetSnapshotControlled(vox::GroupManager *this, unsigned int a2, bool a3);
// [0x1059960] (79 bytes) vox::GroupManager::IsSnapshotControlled(unsigned int)const
// int vox::GroupManager::IsSnapshotControlled(vox::GroupManager *this, unsigned int a2);
// [0x10599b0] (11 bytes) vox::GroupManager::GetGroupArray(void)
// vox::GroupManager *vox::GroupManager::GetGroupArray(vox::GroupManager *this);
// [0x10599c0] (978 bytes) vox::GroupManager::AddGroup(vox::group::CreationSettings &)
// int vox::GroupManager::AddGroup(uint32_t *a1, uint32_t *a2);
