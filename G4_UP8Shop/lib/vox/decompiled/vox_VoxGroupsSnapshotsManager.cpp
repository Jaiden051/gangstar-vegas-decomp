#include "Core/Utils/DecompTypes.h"
#include "vox_VoxGroupsSnapshotsManager.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxGroupsSnapshotsManager.cpp
// Library: vox | Module: vox_VoxGroupsSnapshotsManager
// Binary Address Span: 0x105ca70 .. 0x105ea50 (29 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x105ca70 (size: 57 bytes)
// Symbol:    _ZN3vox25VoxGroupsSnapshotsManagerC1Ev
// Demangled: vox::VoxGroupsSnapshotsManager::VoxGroupsSnapshotsManager(void)
// ============================================================================
// Alternative name is '_ZN3vox25VoxGroupsSnapshotsManagerC2Ev'
struct vox::VoxGroupsSnapshotsManager::Self *vox::VoxGroupsSnapshotsManager::VoxGroupsSnapshotsManager(
        vox::VoxGroupsSnapshotsManager::Self *self)
{
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 8);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = 0;
  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = (uint32_t)(uintptr_t)(byte_20E1FB4);
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::Destroy  (binary VA: 0x105cab0)
// Original: vox::VoxGroupsSnapshotsManager::~VoxGroupsSnapshotsManager
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::Destroy(vox::VoxGroupsSnapshotsManager::Self *self)
{
  int v1;
  vox::VoxGroupsSnapshotsManager::Self **v2;
  vox::VoxGroupsSnapshotsManager::Self *v3;
  vox::VoxGroupsSnapshotsManager::Self *v4;
  vox::VoxGroupsSnapshotsManager::Self *v5;
  vox::VoxGroupsSnapshotsManager::Self *v6;
  vox::VoxGroupsSnapshotsManager::Self *v7;

  v1 = *((uint32_t *)self + 7);
  if ( (uint32_t *)(v1 - 12) != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(v1 - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal((void *)(v1 - 12));
  }
  v2 = *((vox::VoxGroupsSnapshotsManager::Self ***)self + 2);
  if ( v2 != (vox::VoxGroupsSnapshotsManager::Self **)((char *)self + 8) )
  {
    while ( 1 )
    {
      v3 = v2[3];
      v4 = *v2;
      if ( (uint32_t *)((char *)v3 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v3 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v3 - 12);
      }
      v5 = v2[2];
      if ( (uint32_t *)((char *)v5 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v5 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v5 - 12);
      }
      VoxFreeInternal(v2);
      if ( v4 == (vox::VoxGroupsSnapshotsManager::Self *)((char *)self + 8) )
        break;
      v2 = (vox::VoxGroupsSnapshotsManager::Self **)v4;
    }
  }
  v6 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
  if ( *(vox::VoxGroupsSnapshotsManager::Self **)self != self )
  {
    while ( 1 )
    {
      v7 = *(vox::VoxGroupsSnapshotsManager::Self **)v6;
      vox::VoxGroupsSnapshot::Destroy((vox::VoxGroupsSnapshotsManager::Self *)((char *)v6 + 8));
      VoxFreeInternal(v6);
      if ( v7 == self )
        break;
      v6 = v7;
    }
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::Clear  (binary VA: 0x105cbc0)
// Original: vox::VoxGroupsSnapshotsManager::Clear
// ----------------------------------------------------------------------------
char * vox::VoxGroupsSnapshotsManager::Clear(vox::VoxGroupsSnapshotsManager::Self *self)
{
  vox::VoxGroupsSnapshotsManager::Self *v1;
  vox::VoxGroupsSnapshotsManager::Self **v2;
  vox::VoxGroupsSnapshotsManager::Self *v3;
  char *result;
  vox::VoxGroupsSnapshotsManager::Self **v5;
  vox::VoxGroupsSnapshotsManager::Self *v6;
  vox::VoxGroupsSnapshotsManager::Self *v7;
  vox::VoxGroupsSnapshotsManager::Self *v8;

  v1 = self;
  v2 = *(vox::VoxGroupsSnapshotsManager::Self ***)self;
  *((uint32_t *)self + 4) = 0;
  if ( v2 != (vox::VoxGroupsSnapshotsManager::Self **)self )
  {
    while ( 1 )
    {
      v3 = *v2;
      vox::VoxGroupsSnapshot::Destroy((vox::VoxGroupsSnapshot::Self *)(v2 + 2));
      VoxFreeInternal(v2);
      if ( v3 == self )
        break;
      v2 = (vox::VoxGroupsSnapshotsManager::Self **)v3;
    }
  }
  result = (char *)self + 8;
  v5 = *((vox::VoxGroupsSnapshotsManager::Self ***)self + 2);
  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  if ( v5 != (vox::VoxGroupsSnapshotsManager::Self **)((char *)self + 8) )
  {
    while ( 1 )
    {
      v6 = v5[3];
      v7 = *v5;
      if ( (uint32_t *)((char *)v6 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v6 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v6 - 12);
      }
      v8 = v5[2];
      if ( (uint32_t *)((char *)v8 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v8 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v8 - 12);
      }
      VoxFreeInternal(v5);
      if ( v7 == (vox::VoxGroupsSnapshotsManager::Self *)((char *)self + 8) )
        break;
      v5 = (vox::VoxGroupsSnapshotsManager::Self **)v7;
    }
    v1 = self;
    result = (char *)self + 8;
  }
  *((uint32_t *)v1 + 2) = (uint32_t)(uintptr_t)(result);
  *((uint32_t *)v1 + 3) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::PushGroupSnapshot  (binary VA: 0x105ccb0)
// Original: vox::VoxGroupsSnapshotsManager::PushGroupSnapshot
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::PushGroupSnapshot(uint32_t *a1, char *a2, std::vector<vox::Group::Self, vox::SAllocator<vox::Group::Self, (vox::VoxMemHint)0>> *a3)
{
  int result;
  uint32_t *v4;
  char v5; // bp
  char v6;

  result = 0;
  if ( a2 != nullptr )
  {
    v4 = (uint32_t *)*a1;
    if ( (uint32_t *)*a1 != a1 )
    {
      v5 = 1;
      while ( 1 )
      {
        if ( vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshot::Self *)(v4 + 2)) )
          v5 = 0;
        if ( vox::VoxGroupsSnapshot::IsName((vox::VoxGroupsSnapshot::Self *)(v4 + 2), a2) )
          break;
        v4 = (uint32_t *)*v4;
        if ( a1 == v4 )
          return 0;
      }
      v6 = vox::VoxGroupsSnapshot::Trigger((vox::VoxGroupsSnapshot::Self *)(v4 + 2), true);
      result = 0;
      if ( v6 != 0 )
      {
        if ( (uint8_t)vox::VoxGroupsSnapshot::IsFreezeGameplayTimer((vox::VoxGroupsSnapshot::Self *)(v4 + 2)) != 0 )
          ++a1[4];
        result = 1;
        if ( v5 != 0 && *(uint32_t *)(a1[7] - 12) == 0 )
          return vox::VoxGroupsSnapshot::ApplySnapshot((vox::VoxGroupsSnapshot::Self *)(v4 + 2), a3, false);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::PopGroupSnapshot  (binary VA: 0x105cd90)
// Original: vox::VoxGroupsSnapshotsManager::PopGroupSnapshot
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::PopGroupSnapshot(uint32_t *a1, char *a2, std::vector<vox::Group::Self, vox::SAllocator<vox::Group::Self, (vox::VoxMemHint)0>> *a3)
{
  int v3;
  uint32_t *v4;
  char v5; // bp
  bool IsActive;
  char v7;
  bool v9;
  uint32_t *v10;

  v3 = 0;
  if ( a2 != nullptr )
  {
    v4 = (uint32_t *)*a1;
    if ( (uint32_t *)*a1 != a1 )
    {
      v5 = 1;
      while ( !vox::VoxGroupsSnapshot::IsName((vox::VoxGroupsSnapshot::Self *)(v4 + 2), a2)
           || !vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshot::Self *)(v4 + 2)) )
      {
        IsActive = vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshot::Self *)(v4 + 2));
        v4 = (uint32_t *)*v4;
        if ( IsActive )
          v5 = 0;
        if ( a1 == v4 )
          return 0;
      }
      v7 = vox::VoxGroupsSnapshot::Trigger((vox::VoxGroupsSnapshot::Self *)(v4 + 2), false);
      v3 = 0;
      if ( v7 != 0 )
      {
        if ( (uint8_t)vox::VoxGroupsSnapshot::IsFreezeGameplayTimer((vox::VoxGroupsSnapshot::Self *)(v4 + 2)) != 0 )
          --a1[4];
        v3 = 1;
        if ( *(uint32_t *)(a1[7] - 12) == 0 && v5 != 0 )
        {
          v9 = vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshot::Self *)(v4 + 2));
          v3 = 1;
          if ( !v9 )
          {
            v10 = (uint32_t *)*v4;
            if ( a1 == v10 )
            {
              return vox::VoxGroupsSnapshot::ApplySnapshot((vox::VoxGroupsSnapshot::Self *)(a1[1] + 8), a3, false);
            }
            else
            {
              while ( !vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshot::Self *)(v10 + 2)) )
              {
                v10 = (uint32_t *)*v10;
                if ( a1 == v10 )
                  return vox::VoxGroupsSnapshot::ApplySnapshot((vox::VoxGroupsSnapshot::Self *)(a1[1] + 8), a3, false);
              }
              return vox::VoxGroupsSnapshot::ApplySnapshot((vox::VoxGroupsSnapshot::Self *)(v10 + 2), a3, false);
            }
          }
        }
      }
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::ForceSnapshot  (binary VA: 0x105cee0)
// Original: vox::VoxGroupsSnapshotsManager::ForceSnapshot
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::ForceSnapshot()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::UpdateGroupSettings  (binary VA: 0x105cef0)
// Original: vox::VoxGroupsSnapshotsManager::UpdateGroupSettings
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::UpdateGroupSettings()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::UpdateSnapshot  (binary VA: 0x105cf00)
// Original: vox::VoxGroupsSnapshotsManager::UpdateSnapshot
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::UpdateSnapshot()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::AddSnapshot  (binary VA: 0x105cf10)
// Original: vox::VoxGroupsSnapshotsManager::AddSnapshot
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::AddSnapshot()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::RemoveSnapshot  (binary VA: 0x105cf20)
// Original: vox::VoxGroupsSnapshotsManager::RemoveSnapshot
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::RemoveSnapshot()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::ReorderSnapshot  (binary VA: 0x105cf30)
// Original: vox::VoxGroupsSnapshotsManager::ReorderSnapshot
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::ReorderSnapshot()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::GetSnapshot  (binary VA: 0x105cf40)
// Original: vox::VoxGroupsSnapshotsManager::GetSnapshot
// ----------------------------------------------------------------------------
char * vox::VoxGroupsSnapshotsManager::GetSnapshot(vox::VoxGroupsSnapshotsManager::Self *self, char *a2)
{
  vox::VoxGroupsSnapshotsManager::Self *v2;
  char *v3;

  if ( a2 == nullptr )
    return nullptr;
  v2 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
  v3 = nullptr;
  if ( *(vox::VoxGroupsSnapshotsManager::Self **)self != self )
  {
    while ( 1 )
    {
      v3 = (char *)v2 + 8;
      if ( vox::VoxGroupsSnapshot::IsName((vox::VoxGroupsSnapshotsManager::Self *)((char *)v2 + 8), a2) )
        break;
      v2 = *(vox::VoxGroupsSnapshotsManager::Self **)v2;
      if ( self == v2 )
        return nullptr;
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::UpdateDebuggerModule  (binary VA: 0x105cfb0)
// Original: vox::VoxGroupsSnapshotsManager::UpdateDebuggerModule
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::UpdateDebuggerModule()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::Update  (binary VA: 0x105cfc0)
// Original: vox::VoxGroupsSnapshotsManager::Update
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::Update(vox::VoxGroupsSnapshotsManager::Self *self, float a2, vox::GroupManager::Self *a3)
{
  int v3;
  vox::VoxGroupsSnapshotsManager::Self *v4;
  bool IsActive;
  int result;
  vox::VoxGroupsSnapshotsManager::Self *v7;
  vox::VoxGroupsSnapshotsManager::Self *v8;
  vox::GroupManager::Self *v9;
  vox::GroupManager::Self *v10;
  float v11;
  char v12;
  char v13;
  vox::GroupManager::Self *GroupArray;

  vox::VoxGroupsSnapshotsManager::UpdateDebuggerModule();
  GroupArray = vox::GroupManager::GetGroupArray(a3);
  v3 = *((uint32_t *)self + 4);
  *((float *)self + 5) = a2 + *((float *)self + 5);
  if ( v3 == 0 )
    *((float *)self + 6) = a2 + *((float *)self + 6);
  v4 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
  v13 = 0;
  if ( *(vox::VoxGroupsSnapshotsManager::Self **)self != self )
  {
    v12 = 1;
    while ( 1 )
    {
      while ( 1 )
      {
        IsActive = vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshotsManager::Self *)((char *)v4 + 8));
        v11 = *((float *)self + 6);
        v10 = *((vox::GroupManager::Self **)self + 5);
        v9 = (vox::GroupManager::Self *)((vox::VoxGroupsSnapshotsManager::Self *)((char *)v4 + 8));
        if ( IsActive )
          break;
        vox::VoxGroupsSnapshot::Update(v9, *(float *)&v10, v11);
        v4 = *(vox::VoxGroupsSnapshotsManager::Self **)v4;
        if ( self == v4 )
          goto LABEL_12;
      }
      if ( vox::VoxGroupsSnapshot::Update(v9, *(float *)&v10, v11) )
        goto LABEL_8;
      if ( v12 != 0 )
        break;
LABEL_9:
      v4 = *(vox::VoxGroupsSnapshotsManager::Self **)v4;
      if ( self == v4 )
        goto LABEL_12;
    }
    v13 = 1;
LABEL_8:
    v12 = 0;
    goto LABEL_9;
  }
LABEL_12:
  result = *(uint32_t *)(*((uint32_t *)self + 7) - 12);
  if ( result == 0 && v13 != 0 )
  {
    v7 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
    if ( self != *(vox::VoxGroupsSnapshotsManager::Self **)self )
    {
      v8 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
      do
        v8 = *(vox::VoxGroupsSnapshotsManager::Self **)v8;
      while ( self != v8 );
      if ( self == v7 )
      {
        return vox::VoxGroupsSnapshot::ApplySnapshot(
                 (vox::VoxGroupsSnapshot::Self *)(*((uint32_t *)self + 1) + 8),
                 GroupArray,
                 false);
      }
      else
      {
        while ( !vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshotsManager::Self *)((char *)v7 + 8)) )
        {
          v7 = *(vox::VoxGroupsSnapshotsManager::Self **)v7;
          if ( self == v7 )
            return vox::VoxGroupsSnapshot::ApplySnapshot(
                     (vox::VoxGroupsSnapshot::Self *)(*((uint32_t *)self + 1) + 8),
                     GroupArray,
                     false);
        }
        return vox::VoxGroupsSnapshot::ApplySnapshot(
                 (vox::VoxGroupsSnapshotsManager::Self *)((char *)v7 + 8),
                 GroupArray,
                 false);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::SendSnapshotList  (binary VA: 0x105d110)
// Original: vox::VoxGroupsSnapshotsManager::SendSnapshotList
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::SendSnapshotList()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::ProcessRequest  (binary VA: 0x105d120)
// Original: vox::VoxGroupsSnapshotsManager::ProcessRequest
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshotsManager::ProcessRequest()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::GetCurrentSnapshot  (binary VA: 0x105d130)
// Original: vox::VoxGroupsSnapshotsManager::GetCurrentSnapshot
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::GetCurrentSnapshot(vox::VoxGroupsSnapshotsManager::Self *self)
{
  vox::VoxGroupsSnapshotsManager::Self *v1;
  char *v2;
  int *v4;

  v1 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
  if ( *(vox::VoxGroupsSnapshotsManager::Self **)self == self )
  {
    return 0;
  }
  else
  {
    do
    {
      v2 = *((char **)self + 7);
      v4 = (int *)((char *)v1 + 8);
      if ( *((uint32_t *)v2 - 3) != 0 )
      {
        if ( vox::VoxGroupsSnapshot::IsName((vox::VoxGroupsSnapshotsManager::Self *)((char *)v1 + 8), v2) )
          return (int)(uintptr_t)(v4);
      }
      else if ( vox::VoxGroupsSnapshot::IsActive((vox::VoxGroupsSnapshotsManager::Self *)((char *)v1 + 8)) )
      {
        return (int)(uintptr_t)(v4);
      }
      v1 = *(vox::VoxGroupsSnapshotsManager::Self **)v1;
    }
    while ( self != v1 );
    return *((uint32_t *)self + 1) + 8;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::Reset  (binary VA: 0x105d1b0)
// Original: vox::VoxGroupsSnapshotsManager::Reset
// ----------------------------------------------------------------------------
vox::VoxGroupsSnapshot::Self * vox::VoxGroupsSnapshotsManager::Reset(vox::VoxGroupsSnapshotsManager::Self *self, std::vector<vox::Group::Self, vox::SAllocator<vox::Group::Self, (vox::VoxMemHint)0>> *a2)
{
  vox::VoxGroupsSnapshotsManager::Self *v2;
  vox::VoxGroupsSnapshot::Self *result;

  v2 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
  if ( *(vox::VoxGroupsSnapshotsManager::Self **)self != self )
  {
    do
    {
      result = vox::VoxGroupsSnapshot::Reset((vox::VoxGroupsSnapshotsManager::Self *)((char *)v2 + 8));
      v2 = *(vox::VoxGroupsSnapshotsManager::Self **)v2;
    }
    while ( self != v2 );
    if ( *(vox::VoxGroupsSnapshotsManager::Self **)self != self )
    {
      result = *((vox::VoxGroupsSnapshot::Self **)self + 7);
      if ( *((uint32_t *)result - 3) == 0 )
        result = (vox::VoxGroupsSnapshot::Self *)vox::VoxGroupsSnapshot::ApplySnapshot(
                                             (vox::VoxGroupsSnapshot::Self *)(*((uint32_t *)self + 1) + 8),
                                             a2,
                                             false);
    }
  }
  *((uint32_t *)self + 4) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::ExportPresetsConfiguration  (binary VA: 0x105d220)
// Original: vox::VoxGroupsSnapshotsManager::ExportPresetsConfiguration
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::ExportPresetsConfiguration(uint32_t **a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *v7;
  uint8_t *v8;
  void *v9;
  uint8_t *v11;
  int v12;
  int v13;
  int v14;
  uint8_t *v15;

  v2 = a2;
  v3 = *(uint32_t *)(a2 + 200);
  v4 = a2 + 200;
  v15 = (uint8_t *)(a2 + 192);
  v14 = a2 + 12;
  if ( v3 != a2 + 200 && *(uint8_t *)(v3 + 8) != 0 )
  {
    v11 = *(uint8_t **)(a2 + 192);
    if ( v11 == v15 )
      goto LABEL_8;
    if ( v11[8] != 0 )
      v11[8] = 0;
    else
      g4_std_compat::ostream_write(v14, ",", 1);
  }
  v12 = *(uint32_t *)(a2 + 192);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v12);
  v13 = *(uint32_t *)(a2 + 200);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v13);
  g4_std_compat::ostream_write(v14, "[", 1);
LABEL_8:
  if ( *a1 != (uint32_t *)(a1) )
  {
    v7 = *a1;
    do
    {
      vox::VoxGroupsSnapshot::Serialize((int)(uintptr_t)(v7 + 2), a2);
      v7 = (uint32_t *)*v7;
    }
    while ( a1 != (uint32_t **)(v7) );
    v2 = a2;
    v4 = a2 + 200;
  }
  v8 = *(uint8_t **)(v2 + 192);
  if ( v8 != v15 && v4 != *(uint32_t *)(v2 + 200) )
  {
    sub_1901940(*(uint32_t *)(v2 + 192));
    opDelete(v8);
    v9 = *(void **)(v2 + 200);
    sub_1901940(v9);
    opDelete(v9);
    g4_std_compat::ostream_write(v2 + 12, "]", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::GroupConfig::Construct  (binary VA: 0x105d3c0)
// Original: vox::VoxGroupsSnapshotsManager::GroupConfig::GroupConfig
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::GroupConfig::Construct(vox::VoxGroupsSnapshotsManager::GroupConfig::Self *self, char *s, char *a3, bool a4, struct vox::VoxGroupsSnapshotsManager::GroupConfig::Self *a5)
{
  int result;
  size_t v6;
  size_t v7;

  *(uint32_t *)self = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(&dword_213B814);
  *((uint8_t *)self + 8) = a4;
  result = (int)(uintptr_t)(a5);
  *((float *)self + 3) = *(float *)&a5;
  if ( s != nullptr )
  {
    v6 = strlen(s);
    result = (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self), s, v6));
  }
  if ( a3 != nullptr )
  {
    v7 = strlen(a3);
    return (int)(uintptr_t)(g4_std_compat::string_assign((int)(uintptr_t)(self) + 4, a3, v7));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::AddGroup  (binary VA: 0x105d460)
// Original: vox::VoxGroupsSnapshotsManager::AddGroup
// ----------------------------------------------------------------------------
vox::VoxGroupsSnapshotsManager::Self * vox::VoxGroupsSnapshotsManager::AddGroup(char **self, char *a2, char *s, char a4)
{
  vox::VoxGroupsSnapshotsManager::Self *result;
  char *v5;
  size_t v6;
  char *v7;
  int v8;
  void *v9;
  char *v10;
  typedef char *_g4_t_v11;
  typedef vox::VoxGroupsSnapshotsManager::Self *_g4_t_v12;
  typedef uint32_t _g4_t_v13[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v11)) > _g4_s0 ? (12u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v12)) > _g4_s1 ? (32u + sizeof(_g4_t_v12)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v13)) > _g4_s2 ? (36u + sizeof(_g4_t_v13)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 12u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 36u);

  result = (vox::VoxGroupsSnapshotsManager::Self *)self;
  if ( a2 != nullptr )
  {
    v5 = *(self + 2);
    v11 = (char *)(self + 2);
    if ( v5 == (char *)(self + 2) )
    {
LABEL_10:
      vox::VoxGroupsSnapshotsManager::GroupConfig::Construct(
        (vox::VoxGroupsSnapshotsManager::GroupConfig::Self *)&v12,
        a2,
        s,
        a4,
        nullptr);
      v8 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v8 != -8 )
      {
        g4_std::string::construct_copy(v8 + 8, &v12);
        g4_std::string::construct_copy(v8 + 12, v13);
        *(uint8_t *)(v8 + 16) = v13[1];
        *(uint32_t *)(v8 + 20) = v13[2];
      }
      sub_1901920(v8, v11);
      v9 = (void *)(v13[0] - 12);
      if ( (uint32_t *)(v13[0] - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)(v13[0] - 4), 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy(v9);
      }
      result = v12;
      v10 = (char *)v12 - 12;
      if ( (uint32_t *)((char *)v12 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v12 - 1, 0xFFFFFFFF) <= 0 )
      {
        return (g4_std::string::Rep::M_destroy(v10), (vox::VoxGroupsSnapshotsManager::Self *)0);
      }
    }
    else
    {
      while ( g4_std::string::compare((int)(uintptr_t)(v5 + 8), a2) != 0 )
      {
        v5 = *(char **)v5;
        if ( v11 == v5 )
          goto LABEL_10;
      }
      v5[16] = a4;
      if ( s != nullptr )
      {
        v6 = strlen(s);
        v7 = s;
      }
      else
      {
        v7 = (char *)&unk_1B15112;
        v6 = 0;
      }
      return (vox::VoxGroupsSnapshotsManager::Self *)g4_std_compat::string_assign((int)(uintptr_t)(v5 + 12), v7, v6);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::LoadGroupsConfiguration  (binary VA: 0x105d610)
// Original: vox::VoxGroupsSnapshotsManager::LoadGroupsConfiguration
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::LoadGroupsConfiguration(char **self, const vox::JsonArray::Self *a2, vox::GroupManager::Self *a3)
{
  vox::GroupManager::Self *GroupArray;
  int v4;
  vox::GroupManager::Self *v5;
  unsigned int v6;
  vox::Group::Self *v7;
  vox::JsonObject::Self *i;
  int v9;
  int v10;
  int v11;
  bool IsGroupValid;
  int Parent;
  unsigned int v14;
  char v15; // bp
  char *s;
  vox::GroupManager::Self *v18;
  int GroupId;
  unsigned int v20;

  GroupArray = vox::GroupManager::GetGroupArray(a3);
  v4 = *(uint32_t *)GroupArray;
  v5 = GroupArray;
  if ( -991146299 * ((*((uint32_t *)GroupArray + 1) - *(uint32_t *)GroupArray) >> 3) != 0 )
  {
    v6 = 0;
    do
    {
      v7 = (vox::Group::Self *)(104 * v6++ + v4);
      vox::Group::SetSnapshotControlled(v7, false);
      v4 = *(uint32_t *)v5;
    }
    while ( v6 < -991146299 * ((*((uint32_t *)v5 + 1) - *(uint32_t *)v5) >> 3) );
  }
  for ( i = *((vox::JsonObject::Self **)a2 + 2); i != nullptr; i = *((vox::JsonObject::Self **)i + 1) )
  {
    if ( *((uint32_t *)i + 6) == 1 )
    {
      v9 = vox::JsonObject::opIndex(i, "label");
      v10 = vox::JsonObject::opIndex(i, "enabled");
      v11 = v10;
      if ( v9 != 0 && v10 != 0 && *(uint32_t *)(v9 + 24) == 3 && *(uint32_t *)(v10 + 24) == 6 )
      {
        GroupId = vox::GroupManager::GetGroupId(a3, *(char **)(v9 + 20));
        IsGroupValid = vox::GroupManager::IsGroupValid(a3, GroupId);
        Parent = -1;
        v14 = GroupId;
        if ( IsGroupValid )
        {
          v18 = vox::GroupManager::GetGroupArray(a3);
          Parent = vox::Group::GetParent((vox::Group::Self *)(*(uint32_t *)v18 + 104 * GroupId));
          v14 = GroupId;
        }
        v20 = Parent;
        vox::GroupManager::SetSnapshotControlled(a3, v14, *(uint32_t *)(v11 + 20) != 0);
        v15 = *(uint32_t *)(v11 + 20) != 0;
        s = vox::GroupManager::GetGroupName(a3, v20);
        vox::VoxGroupsSnapshotsManager::AddGroup(self, *(char **)(v9 + 20), s, v15);
      }
    }
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::AddGroup  (binary VA: 0x105d7b0)
// Original: vox::VoxGroupsSnapshotsManager::AddGroup
// ----------------------------------------------------------------------------
vox::Group::Self * vox::VoxGroupsSnapshotsManager::AddGroup(vox::VoxGroupsSnapshotsManager::Self *self, vox::Group::Self *a2, vox::Group::Self *a3)
{
  char *v3;
  char *v4;
  vox::VoxGroupsSnapshot::Self *CurrentSnapshot;
  vox::Group::Self *result;
  char *Name;
  char *v8;
  int v9;
  void *v10;
  char *v11;
  typedef float _g4_t_Volume;
  typedef char *_g4_t_v13;
  typedef vox::Group::Self *_g4_t_v14;
  typedef uint32_t _g4_t_v15[6];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_Volume)) > _g4_s0 ? (0u + sizeof(_g4_t_Volume)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v13)) > _g4_s1 ? (12u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v14)) > _g4_s2 ? (32u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v15)) > _g4_s3 ? (36u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_Volume &Volume = *reinterpret_cast<_g4_t_Volume *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 12u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 32u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 36u);

  v3 = *((char **)self + 2);
  v13 = (char *)self + 8;
  if ( v3 == (char *)self + 8 )
  {
LABEL_8:
    Volume = vox::Group::GetVolume(a2);
    Name = vox::Group::GetName(a3);
    v8 = vox::Group::GetName(a2);
    vox::VoxGroupsSnapshotsManager::GroupConfig::Construct(
      (vox::VoxGroupsSnapshotsManager::GroupConfig::Self *)&v14,
      v8,
      Name,
      false,
      (struct vox::VoxGroupsSnapshotsManager::GroupConfig::Self *)LODWORD(Volume));
    v9 = VoxAllocInternal(0x18u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    if ( v9 != -8 )
    {
      g4_std::string::construct_copy(v9 + 8, &v14);
      g4_std::string::construct_copy(v9 + 12, v15);
      *(uint8_t *)(v9 + 16) = v15[1];
      *(uint32_t *)(v9 + 20) = v15[2];
    }
    sub_1901920(v9, v13);
    v10 = (void *)(v15[0] - 12);
    if ( (uint32_t *)(v15[0] - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)(v15[0] - 4), 0xFFFFFFFF) <= 0 )
    {
      g4_std::string::Rep::M_destroy(v10);
    }
    result = v14;
    v11 = (char *)v14 - 12;
    if ( (uint32_t *)((char *)v14 - 12) != dword_213B808
      && __sync_fetch_and_add((volatile int32_t *)v14 - 1, 0xFFFFFFFF) <= 0 )
    {
      return (g4_std::string::Rep::M_destroy(v11), (vox::Group::Self *)0);
    }
  }
  else
  {
    while ( 1 )
    {
      v4 = vox::Group::GetName(a2);
      if ( g4_std::string::compare((int)(uintptr_t)(v3 + 8), v4) == 0 )
        break;
      v3 = *(char **)v3;
      if ( v13 == v3 )
        goto LABEL_8;
    }
    CurrentSnapshot = (vox::VoxGroupsSnapshot::Self *)vox::VoxGroupsSnapshotsManager::GetCurrentSnapshot(self);
    if ( CurrentSnapshot != nullptr )
      vox::VoxGroupsSnapshot::ApplySnapshot(CurrentSnapshot, a2);
    *((float *)v3 + 5) = vox::Group::GetVolume(a2);
    return vox::Group::SetSnapshotControlled(a2, v3[16]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::GroupConfig::Serialize  (binary VA: 0x105d970)
// Original: vox::VoxGroupsSnapshotsManager::GroupConfig::Serialize
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::GroupConfig::Serialize(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  int v11;
  uint8_t *v12;
  char v13;
  const char *v14;
  size_t v15;
  uint8_t *v16;
  uint8_t *v17;
  void *v18;
  int v20;
  char *s;
  char v22;
  float v23;
  uint8_t *v24;

  v2 = *(uint32_t *)(a2 + 200);
  v3 = a2 + 12;
  v24 = (uint8_t *)(a2 + 192);
  if ( v2 != a2 + 200 && *(uint8_t *)(v2 + 8) != 0 )
  {
    v20 = *(uint32_t *)(a2 + 192);
    if ( v20 == a2 + 192 )
      return 0;
    if ( *(uint8_t *)(v20 + 8) != 0 )
      *(uint8_t *)(v20 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v4 = *(uint32_t *)(a2 + 192);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v4);
  v6 = *(uint32_t *)(a2 + 200);
  v7 = opNew(0xCu);
  if ( v7 != -8 )
    *(uint8_t *)(v7 + 8) = 0;
  sub_1901920(v7, v6);
  g4_std_compat::ostream_write(v3, "{", 1);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v8 != v24 )
  {
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(v3, ",", 1);
    g4_std_compat::ostream_write(v3, "\"", 1);
    g4_std_compat::ostream_write(v3, "label", 5);
    g4_std_compat::ostream_write(v3, "\":\"", 3);
    v9 = (int)(uintptr_t)(g4_std_compat::ostream_write(v3, *(uint32_t *)a1, *(uint32_t *)(*(uint32_t *)a1 - 12)));
    g4_std_compat::ostream_write(v9, "\"", 1);
    v10 = *(uint8_t **)(a2 + 192);
    if ( v24 != v10 )
    {
      if ( v10[8] != 0 )
        v10[8] = 0;
      else
        g4_std_compat::ostream_write(v3, ",", 1);
      g4_std_compat::ostream_write(v3, "\"", 1);
      g4_std_compat::ostream_write(v3, "parent", 6);
      g4_std_compat::ostream_write(v3, "\":\"", 3);
      v11 = (int)(uintptr_t)(g4_std_compat::ostream_write(v3, *(uint32_t *)(a1 + 4), *(uint32_t *)(*(uint32_t *)(a1 + 4) - 12)));
      g4_std_compat::ostream_write(v11, "\"", 1);
      v12 = *(uint8_t **)(a2 + 192);
      v13 = *(uint8_t *)(a1 + 8);
      if ( v24 != v12 )
      {
        if ( v12[8] != 0 )
        {
          v12[8] = 0;
        }
        else
        {
          v22 = *(uint8_t *)(a1 + 8);
          g4_std_compat::ostream_write(v3, ",", 1);
          v13 = v22;
        }
        v14 = "true";
        if ( v13 == 0 )
          v14 = "false";
        s = (char *)v14;
        g4_std_compat::ostream_write(v3, "\"", 1);
        g4_std_compat::ostream_write(v3, "enabled", 7);
        g4_std_compat::ostream_write(v3, "\":", 2);
        v15 = strlen(s);
        g4_std_compat::ostream_write(v3, s, v15);
        v16 = *(uint8_t **)(a2 + 192);
        if ( v24 != v16 )
        {
          if ( v16[8] != 0 )
            v16[8] = 0;
          else
            g4_std_compat::ostream_write(v3, ",", 1);
          v23 = *(float *)(a1 + 12);
          g4_std_compat::ostream_write(v3, "\"", 1);
          g4_std_compat::ostream_write(v3, "volume", 6);
          g4_std_compat::ostream_write(v3, "\":", 2);
          g4_std::ostream::op_shl_double(v3, COERCE__INT64(v23));
          v17 = *(uint8_t **)(a2 + 192);
          if ( v24 != v17 && a2 + 200 != *(uint32_t *)(a2 + 200) )
          {
            sub_1901940(*(uint32_t *)(a2 + 192));
            opDelete(v17);
            v18 = *(void **)(a2 + 200);
            sub_1901940(v18);
            opDelete(v18);
            g4_std_compat::ostream_write(v3, "}", 1);
          }
        }
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::ExportGroupsConfiguration  (binary VA: 0x105ddb0)
// Original: vox::VoxGroupsSnapshotsManager::ExportGroupsConfiguration
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::ExportGroupsConfiguration(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint32_t *i;
  void *v8;
  void *v9;
  int v11;

  v2 = *(uint32_t *)(a2 + 200);
  if ( v2 != a2 + 200 && *(uint8_t *)(v2 + 8) != 0 )
  {
    v11 = *(uint32_t *)(a2 + 192);
    if ( v11 == a2 + 192 )
      goto LABEL_8;
    if ( *(uint8_t *)(v11 + 8) != 0 )
      *(uint8_t *)(v11 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v3 = *(uint32_t *)(a2 + 192);
  v4 = opNew(0xCu);
  if ( v4 != -8 )
    *(uint8_t *)(v4 + 8) = 1;
  sub_1901920(v4, v3);
  v5 = *(uint32_t *)(a2 + 200);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 1;
  sub_1901920(v6, v5);
  g4_std_compat::ostream_write(a2 + 12, "[", 1);
LABEL_8:
  for ( i = *(uint32_t **)(a1 + 8); (uint32_t *)(a1 + 8) != i; i = (uint32_t *)*i )
    vox::VoxGroupsSnapshotsManager::GroupConfig::Serialize((int)(uintptr_t)(i + 2), a2);
  v8 = *(void **)(a2 + 192);
  if ( v8 != (void *)(a2 + 192) && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(*(uint32_t *)(a2 + 192));
    opDelete(v8);
    v9 = *(void **)(a2 + 200);
    sub_1901940(v9);
    opDelete(v9);
    g4_std_compat::ostream_write(a2 + 12, "]", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::Serialize  (binary VA: 0x105df30)
// Original: vox::VoxGroupsSnapshotsManager::Serialize
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::Serialize(uint32_t **a1, int a2)
{
  int v2;
  uint8_t *v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  uint8_t *v8;
  int v9;
  uint8_t *v10;
  void *v11;
  uint8_t *v13;
  int v14;
  int v15;

  v2 = *(uint32_t *)(a2 + 200);
  v3 = (uint8_t *)(a2 + 192);
  v4 = a2 + 12;
  if ( v2 != a2 + 200 && *(uint8_t *)(v2 + 8) != 0 )
  {
    v13 = *(uint8_t **)(a2 + 192);
    if ( v13 == v3 )
      goto LABEL_11;
    if ( v13[8] != 0 )
      v13[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v14 = *(uint32_t *)(a2 + 192);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v14);
  v15 = *(uint32_t *)(a2 + 200);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 0;
  sub_1901920(v6, v15);
  g4_std_compat::ostream_write(v4, "{", 1);
  v7 = *(uint8_t **)(a2 + 192);
  if ( v7 != v3 )
  {
    if ( v7[8] != 0 )
      v7[8] = 0;
    else
      g4_std_compat::ostream_write(v4, ",", 1);
    g4_std_compat::ostream_write(v4, "\"", 1);
    g4_std_compat::ostream_write(v4, "presets", 7);
    g4_std_compat::ostream_write(v4, "\":", 2);
  }
LABEL_11:
  vox::VoxGroupsSnapshotsManager::ExportPresetsConfiguration(a1, a2);
  v8 = *(uint8_t **)(a2 + 192);
  if ( v3 != v8 )
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v9 = a2 + 12;
    }
    else
    {
      v9 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v9, "\"", 1);
    g4_std_compat::ostream_write(v9, "groups", 6);
    g4_std_compat::ostream_write(v9, "\":", 2);
  }
  vox::VoxGroupsSnapshotsManager::ExportGroupsConfiguration((int)(uintptr_t)(a1), a2);
  v10 = *(uint8_t **)(a2 + 192);
  if ( v3 != v10 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(*(uint32_t *)(a2 + 192));
    opDelete(v10);
    v11 = *(void **)(a2 + 200);
    sub_1901940(v11);
    opDelete(v11);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::LoadPresetsConfiguration  (binary VA: 0x105e620)
// Original: vox::VoxGroupsSnapshotsManager::LoadPresetsConfiguration
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::LoadPresetsConfiguration(vox::VoxGroupsSnapshotsManager::Self *self, const vox::JsonArray::Self *a2, vox::GroupManager::Self *a3)
{
  vox::VoxGroupsSnapshotsManager::Self *v3;
  vox::VoxGroupsSnapshotsManager::Self *v4;
  const vox::JsonObject::Self *i;
  int v7;
  uint8_t *src;
  uint32_t *v9;
  int v10;
  unsigned int v11;
  unsigned int v12;
  unsigned int v13;
  int v14;
  size_t n;
  int *v16;
  typedef uint32_t *_g4_t_v17;
  typedef unsigned int _g4_t_v18;
  typedef int *_g4_t_v19;
  typedef int _g4_t_v20;
  typedef void *_g4_t_dest;
  typedef int _g4_t_v22;
  typedef void *_g4_t_v23[2];
  typedef char _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint32_t _g4_t_v31[9];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (0u + sizeof(_g4_t_v17)) > _g4_s0 ? (0u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (0u + sizeof(_g4_t_v18)) > _g4_s1 ? (0u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (0u + sizeof(_g4_t_v19)) > _g4_s2 ? (0u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v20)) > _g4_s3 ? (8u + sizeof(_g4_t_v20)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_dest)) > _g4_s4 ? (12u + sizeof(_g4_t_dest)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v22)) > _g4_s5 ? (16u + sizeof(_g4_t_v22)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v23)) > _g4_s6 ? (36u + sizeof(_g4_t_v23)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v24)) > _g4_s7 ? (44u + sizeof(_g4_t_v24)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v25)) > _g4_s8 ? (48u + sizeof(_g4_t_v25)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v26)) > _g4_s9 ? (52u + sizeof(_g4_t_v26)) : _g4_s9,
    _g4_s11 = (56u + sizeof(_g4_t_v27)) > _g4_s10 ? (56u + sizeof(_g4_t_v27)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v28)) > _g4_s11 ? (60u + sizeof(_g4_t_v28)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v29)) > _g4_s12 ? (64u + sizeof(_g4_t_v29)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v30)) > _g4_s13 ? (68u + sizeof(_g4_t_v30)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v31)) > _g4_s14 ? (72u + sizeof(_g4_t_v31)) : _g4_s14
  };
  alignas(16) uint8_t _g4_sf[_g4_s15];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 0u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 0u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 0u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_dest &dest = *reinterpret_cast<_g4_t_dest *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 36u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 44u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 48u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 52u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 56u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 60u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 64u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 68u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 72u);

  v3 = *(vox::VoxGroupsSnapshotsManager::Self **)self;
  if ( *(vox::VoxGroupsSnapshotsManager::Self **)self != self )
  {
    while ( 1 )
    {
      v4 = *(vox::VoxGroupsSnapshotsManager::Self **)v3;
      vox::VoxGroupsSnapshot::Destroy((vox::VoxGroupsSnapshotsManager::Self *)((char *)v3 + 8));
      VoxFreeInternal(v3);
      if ( v4 == self )
        break;
      v3 = v4;
    }
  }
  *(uint32_t *)self = (uint32_t)(uintptr_t)(self);
  *((uint32_t *)self + 1) = (uint32_t)(uintptr_t)(self);
  for ( i = *((const vox::JsonObject::Self **)a2 + 2); i != nullptr; i = *((const vox::JsonObject::Self **)i + 1) )
  {
    while ( *((uint32_t *)i + 6) != 1 )
    {
      i = *((const vox::JsonObject::Self **)i + 1);
      if ( i == nullptr )
        return 1;
    }
    vox::VoxGroupsSnapshot::VoxGroupsSnapshot((vox::VoxGroupsSnapshot::Self *)v23);
    if ( (uint8_t)vox::VoxGroupsSnapshot::SetSnapshotData((char **)v23, i, a3) != 0 )
    {
      v7 = VoxAllocInternal(0x34u, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      v20 = v7;
      if ( v7 != -8 )
      {
        src = (uint8_t *)(v23[0]);
        if ( *((int *)v23[0] - 1) < 0 )
        {
          v11 = *((uint32_t *)v23[0] - 3);
          v12 = *((uint32_t *)v23[0] - 2);
          if ( v11 > 0x3FFFFFFC )
            sub_1900180("basic_string::_S_create");
          if ( v11 > v12 && v11 < 2 * v12 )
            v11 = 2 * v12;
          if ( v11 + 29 > 0x1000 && v12 < v11 )
          {
            v13 = v11 + 4096 - (((uint16_t)v11 + 29) & 0xFFF);
            v11 = 1073741820;
            if ( v13 <= 0x3FFFFFFC )
              v11 = v13;
          }
          v18 = v11;
          v14 = VoxAllocInternal(
                  v11 + 13,
                  0,
                  (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                  (int)(uintptr_t)("internal_new"),
                  181);
          *(uint32_t *)(v14 + 8) = 0;
          *(uint32_t *)(v14 + 4) = v18;
          n = *((uint32_t *)src - 3);
          v16 = (int *)v14;
          v22 = 0;
          dest = (void *)(v14 + 12);
          if ( n != 0 )
          {
            if ( n == 1 )
            {
              *(uint8_t *)(v14 + 12) = *src;
            }
            else
            {
              v19 = (int *)v14;
              memcpy(dest, src, n);
              v16 = v19;
            }
            v22 = *((uint32_t *)src - 3);
          }
          if ( v16 != (int *)(uintptr_t)(g4_empty_string_rep) )
          {
            v16[2] = 0;
            *v16 = v22;
            *((uint8_t *)v16 + v22 + 12) = 0;
          }
          src = (uint8_t *)(dest);
        }
        else if ( (char *)v23[0] - 12 != (char *)g4_empty_string_rep )
        {
          __sync_add_and_fetch((volatile int32_t *)v23[0] - 1, 1u);
        }
        *(uint32_t *)(v20 + 8) = (uint32_t)(uintptr_t)(src);
        *(void **)(v20 + 12) = v23[1];
        *(uint8_t *)(v20 + 16) = v24;
        *(uint32_t *)(v20 + 20) = v25;
        *(uint32_t *)(v20 + 24) = v26;
        *(uint32_t *)(v20 + 28) = v27;
        *(uint32_t *)(v20 + 32) = v28;
        *(uint32_t *)(v20 + 36) = v29;
        *(uint32_t *)(v20 + 40) = v30;
        v7 = v20;
        v9 = (uint32_t *)v31[0];
        *(uint32_t *)(v20 + 44) = v20 + 44;
        *(uint32_t *)(v20 + 48) = v20 + 44;
        if ( v9 != v31 )
        {
          do
          {
            v10 = VoxAllocInternal(
                    0x18u,
                    0,
                    (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                    (int)(uintptr_t)("internal_new"),
                    181);
            if ( v10 != -8 )
            {
              v17 = (uint32_t *)v10;
              g4_std::string::construct_copy(v10 + 8, v9 + 2);
              v10 = (int)(uintptr_t)(v17);
              v17[3] = v9[3];
              v17[4] = v9[4];
              v17[5] = v9[5];
            }
            sub_1901920(v10, v20 + 44);
            v9 = (uint32_t *)*v9;
          }
          while ( v9 != v31 );
          v7 = v20;
        }
      }
      sub_1901920(v7, self);
    }
    vox::VoxGroupsSnapshot::Destroy((vox::VoxGroupsSnapshot::Self *)v23);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration  (binary VA: 0x105e960)
// Original: vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration(vox::VoxGroupsSnapshotsManager::Self *self, const vox::JsonObject::Self *a2, vox::GroupManager::Self *a3)
{
  int v3;
  const vox::JsonArray::Self *v4;
  const vox::JsonArray::Self *v6;
  vox::VoxGroupsSnapshot::Self *CurrentSnapshot;
  vox::GroupManager::Self *GroupArray;

  v3 = 0;
  v4 = (const vox::JsonArray::Self *)vox::JsonObject::opIndex(a2, "groups");
  if ( v4 != nullptr
    && *((uint32_t *)v4 + 6) == 2
    && (uint8_t)vox::VoxGroupsSnapshotsManager::LoadGroupsConfiguration((char **)self, v4, a3) != 0 )
  {
    v6 = (const vox::JsonArray::Self *)vox::JsonObject::opIndex(a2, "presets");
    if ( v6 != nullptr
      && *((uint32_t *)v6 + 6) == 2
      && (uint8_t)vox::VoxGroupsSnapshotsManager::LoadPresetsConfiguration(self, v6, a3) != 0 )
    {
      CurrentSnapshot = (vox::VoxGroupsSnapshot::Self *)vox::VoxGroupsSnapshotsManager::GetCurrentSnapshot(self);
      if ( CurrentSnapshot != nullptr )
      {
        GroupArray = vox::GroupManager::GetGroupArray(a3);
        vox::VoxGroupsSnapshot::ApplySnapshot(CurrentSnapshot, GroupArray, false);
      }
      v3 = 1;
      vox::VoxGroupsSnapshotsManager::SendSnapshotList();
    }
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration  (binary VA: 0x105ea50)
// Original: vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration(vox::VoxGroupsSnapshotsManager::Self *self, const char *a2, vox::GroupManager::Self *a3)
{
  vox::FileSystemStdio::Self *Instance;
  vox::FileSystemStdio::Self *v4;
  int v5;
  int v6;
  int (*v7)(int, int, int, int);
  int v8;
  int v9;
  void *v10;
  vox::Self *v12;
  const vox::JsonObject::Self *v13;
  typedef int (*_g4_t_v14)(int, int, int, int);
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint8_t _g4_t_v17;
  typedef int _g4_t_v18[3];
  typedef int _g4_t_v19;
  typedef char *_g4_t_v20;
  typedef char *_g4_t_v21;
  typedef uint8_t _g4_t_v22[20];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v14)) > _g4_s0 ? (0u + sizeof(_g4_t_v14)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v15)) > _g4_s1 ? (4u + sizeof(_g4_t_v15)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v16)) > _g4_s2 ? (8u + sizeof(_g4_t_v16)) : _g4_s2,
    _g4_s4 = (15u + sizeof(_g4_t_v17)) > _g4_s3 ? (15u + sizeof(_g4_t_v17)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v18)) > _g4_s4 ? (32u + sizeof(_g4_t_v18)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v19)) > _g4_s5 ? (44u + sizeof(_g4_t_v19)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v20)) > _g4_s6 ? (48u + sizeof(_g4_t_v20)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v21)) > _g4_s7 ? (52u + sizeof(_g4_t_v21)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v22)) > _g4_s8 ? (56u + sizeof(_g4_t_v22)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 0u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 15u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 48u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 52u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);

  v17 = 0;
  if ( a2 != nullptr && a3 != nullptr )
  {
    Instance = vox::FileSystemInterface::GetInstance();
    v4 = Instance;
    if ( Instance != nullptr )
    {
      v5 = G4_VCALL<int>(Instance, 8, a2, 6);
      v6 = v5;
      if ( v5 != 0 )
      {
        G4_VCALL<void>(v5, 12, 0, 2);
        v16 = G4_VCALL<int>(v6, 16);
        v18[0] = (int)(uintptr_t)(&dword_213B814);
        sub_1939D80((int)(uintptr_t)(v18), v16 + 1, 0);
        G4_VCALL<void>(v6, 12, 0, 0);
        v7 = *(int (**)(int, int, int, int))(*(uint32_t *)v6 + 8);
        v8 = v18[0];
        if ( *(int *)(v18[0] - 4) >= 0 )
        {
          v14 = *(int (**)(int, int, int, int))(*(uint32_t *)v6 + 8);
          sub_19397C0(v18);
          v8 = v18[0];
          v7 = v14;
        }
        v15 = v7(v6, v8, 1, v16);
        G4_VCALL<void>(v4, 12, v6);
        v9 = v18[0];
        if ( *(int *)(v18[0] - 4) >= 0 )
        {
          sub_19397C0(v18);
          v9 = v18[0];
        }
        v17 = 0;
        *(uint8_t *)(v9 + v16) = 0;
        if ( v15 == v16 )
        {
          v19 = 0;
          v20 = nullptr;
          v21 = nullptr;
          vox::block_allocator::block_allocator((vox::block_allocator::Self *)v22, 0x400u);
          v12 = (vox::Self *)v18[0];
          if ( *(int *)(v18[0] - 4) >= 0 )
          {
            sub_19397C0(v18);
            v12 = (vox::Self *)v18[0];
          }
          v13 = (const vox::JsonObject::Self *)vox::json_parse(v12, (char *)&v19, &v20, &v21, (vox::Self *)v22);
          v17 = 0;
          if ( v13 != nullptr && *((uint32_t *)v13 + 6) == 1 )
          {
            v17 = 1;
            if ( (uint8_t)vox::VoxGroupsSnapshotsManager::LoadSnapshotConfiguration(self, v13, a3) == 0 )
            {
              vox::VoxGroupsSnapshotsManager::Clear(self);
              v17 = 0;
            }
          }
          vox::block_allocator::Destroy((vox::block_allocator::Self *)v22);
        }
        v10 = (void *)(v18[0] - 12);
        if ( (uint32_t *)(v18[0] - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v18[0] - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy(v10);
        }
      }
    }
  }
  return v17;
}


