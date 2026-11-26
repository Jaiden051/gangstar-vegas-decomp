#include "Core/Utils/DecompTypes.h"
#include "vox_VoxGroupsSnapshot.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_VoxGroupsSnapshot.cpp
// Library: vox | Module: vox_VoxGroupsSnapshot
// Binary Address Span: 0x105b9b0 .. 0x105e1d0 (16 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0x105b9b0 (size: 79 bytes)
// Symbol:    _ZN3vox17VoxGroupsSnapshotC2Ev
// Demangled: vox::VoxGroupsSnapshot::VoxGroupsSnapshot(void)
// ============================================================================
// Alternative name is '_ZN3vox17VoxGroupsSnapshotC1Ev'
struct vox::VoxGroupsSnapshot::Self *vox::VoxGroupsSnapshot::VoxGroupsSnapshot(vox::VoxGroupsSnapshot::Self *self)
{
  *(uint32_t *)self = (uint32_t)(uintptr_t)(byte_20E1FB4);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 1) = 0;
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 6) = -8388609;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)((char *)self + 36);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)((char *)self + 36);
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::Destroy  (binary VA: 0x105ba00)
// Original: vox::VoxGroupsSnapshot::~VoxGroupsSnapshot
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshot::Destroy(vox::VoxGroupsSnapshot::Self *self)
{
  vox::VoxGroupsSnapshot::Self **v1;
  vox::VoxGroupsSnapshot::Self *v2;
  vox::VoxGroupsSnapshot::Self *v3;
  uint32_t *v4;

  v1 = *((vox::VoxGroupsSnapshot::Self ***)self + 9);
  if ( v1 != (vox::VoxGroupsSnapshot::Self **)((char *)self + 36) )
  {
    while ( 1 )
    {
      v2 = v1[2];
      v3 = *v1;
      if ( (uint32_t *)((char *)v2 - 12) != dword_213B808
        && __sync_fetch_and_add((volatile int32_t *)v2 - 1, 0xFFFFFFFF) <= 0 )
      {
        g4_std::string::Rep::M_destroy((char *)v2 - 12);
      }
      VoxFreeInternal(v1);
      if ( v3 == (vox::VoxGroupsSnapshot::Self *)((char *)self + 36) )
        break;
      v1 = (vox::VoxGroupsSnapshot::Self **)v3;
    }
  }
  v4 = (uint32_t *)(*(uint32_t *)self - 12);
  if ( v4 != (uint32_t *)(g4_empty_string_rep)
    && __sync_fetch_and_add((volatile int32_t *)(*(uint32_t *)self - 4), 0xFFFFFFFF) <= 0 )
  {
    VoxFreeInternal(v4);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::IsActive  (binary VA: 0x105baa0)
// Original: vox::VoxGroupsSnapshot::IsActive
// ----------------------------------------------------------------------------
bool vox::VoxGroupsSnapshot::IsActive(vox::VoxGroupsSnapshot::Self *self)
{
  if ( *((uint32_t *)self + 1) != 0 )
    return *((uint32_t *)self + 8) > 0;
  else
    return (float)(*((float *)self + 4) + *((float *)self + 6)) > *((float *)self + 7);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::IsFreezeGameplayTimer  (binary VA: 0x105bad0)
// Original: vox::VoxGroupsSnapshot::IsFreezeGameplayTimer
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::IsFreezeGameplayTimer(vox::VoxGroupsSnapshot::Self *self)
{
  int result;

  if ( *((uint32_t *)self + 1) != 0 )
    return *((uint8_t *)self + 8);
  result = 0;
  if ( *((uint32_t *)self + 5) != 0 )
    return *((uint8_t *)self + 8);
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::Update  (binary VA: 0x105baf0)
// Original: vox::VoxGroupsSnapshot::Update
// ----------------------------------------------------------------------------
bool vox::VoxGroupsSnapshot::Update(vox::VoxGroupsSnapshot::Self *self, float a2, float a3)
{
  if ( *((uint32_t *)self + 5) != 1 )
    a2 = a3;
  *((float *)self + 7) = a2;
  return vox::VoxGroupsSnapshot::IsActive(self);
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::Trigger  (binary VA: 0x105bb30)
// Original: vox::VoxGroupsSnapshot::Trigger
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::Trigger(vox::VoxGroupsSnapshot::Self *self, bool a2)
{
  int result;
  int v3;

  if ( *((uint32_t *)self + 1) != 0 )
  {
    if ( a2 )
    {
      ++*((uint32_t *)self + 8);
      return 1;
    }
    else
    {
      v3 = *((uint32_t *)self + 8);
      result = 0;
      if ( v3 > 0 )
      {
        *((uint32_t *)self + 8) = v3 - 1;
        return 1;
      }
    }
  }
  else
  {
    result = 0;
    if ( a2 && (float)(*((float *)self + 7) - *((float *)self + 6)) > *((float *)self + 3) && *((float *)self + 4) > 0.0 )
    {
      *((uint32_t *)self + 6) = *((uint32_t *)self + 7);
      return 1;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::ApplySnapshot  (binary VA: 0x105bba0)
// Original: vox::VoxGroupsSnapshot::ApplySnapshot
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::ApplySnapshot(vox::VoxGroupsSnapshot::Self *self, std::vector<vox::Group::Self, vox::SAllocator<vox::Group::Self, (vox::VoxMemHint)0>> *a2, bool a3)
{
  float *v3;
  char *v4;
  int v5;
  int v7;

  v3 = *((float **)self + 9);
  v4 = (char *)self + 36;
  if ( v3 == (float *)((char *)self + 36) )
    return 1;
  if ( !a3 )
  {
    do
    {
      v5 = *((uint32_t *)v3 + 3);
      if ( v5 != -1 )
        vox::Group::SetVolume((vox::Group::Self *)(*(uint32_t *)a2 + 104 * v5), v3[4], v3[5]);
      v3 = *(float **)v3;
    }
    while ( v3 != (float *)v4 );
    return 1;
  }
  do
  {
    v7 = *((uint32_t *)v3 + 3);
    if ( v7 != -1 )
      vox::Group::SetVolume((vox::Group::Self *)(*(uint32_t *)a2 + 104 * v7), v3[4], 0.0);
    v3 = *(float **)v3;
  }
  while ( v3 != (float *)v4 );
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::ApplySnapshot  (binary VA: 0x105bc50)
// Original: vox::VoxGroupsSnapshot::ApplySnapshot
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::ApplySnapshot(vox::VoxGroupsSnapshot::Self *self, vox::Group::Self *a2)
{
  float *v2;
  int v3;

  v2 = *((float **)self + 9);
  if ( v2 != (float *)((char *)self + 36) )
  {
    while ( 1 )
    {
      v3 = *((uint32_t *)v2 + 3);
      if ( v3 == vox::Group::GetId(a2) )
        break;
      v2 = *(float **)v2;
      if ( v2 == (float *)((char *)self + 36) )
        return 1;
    }
    vox::Group::SetVolume(a2, v2[4], v2[5]);
  }
  return 1;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::GetName  (binary VA: 0x105bcc0)
// Original: vox::VoxGroupsSnapshot::GetName
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::GetName(vox::VoxGroupsSnapshot::Self *self)
{
  return *(uint32_t *)self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::IsName  (binary VA: 0x105bcd0)
// Original: vox::VoxGroupsSnapshot::IsName
// ----------------------------------------------------------------------------
bool vox::VoxGroupsSnapshot::IsName(vox::VoxGroupsSnapshot::Self *self, char *s)
{
  bool result;
  size_t v3;
  size_t v4;
  bool v5; // cc
  size_t v6;
  size_t n;
  int v8;
  int v9;
  void *s1;

  result = false;
  if ( s != nullptr )
  {
    v3 = *(uint32_t *)(*(uint32_t *)self - 12);
    s1 = *(void **)self;
    v4 = strlen(s);
    v5 = v4 <= v3;
    v6 = v4;
    n = v3;
    if ( v5 )
      n = v6;
    v8 = memcmp(s1, s, n);
    v9 = v3 - v6;
    if ( v8 == 0 )
      v8 = v9;
    return v8 == 0;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::UpdateGroupId  (binary VA: 0x105bd50)
// Original: vox::VoxGroupsSnapshot::UpdateGroupId
// ----------------------------------------------------------------------------
void vox::VoxGroupsSnapshot::UpdateGroupId(vox::VoxGroupsSnapshot::Self *self, char *a2, unsigned int a3)
{
  uint32_t *v3;

  v3 = *((uint32_t **)self + 9);
  if ( v3 != (uint32_t *)((char *)self + 36) )
  {
    while ( g4_std::string::compare((int)(uintptr_t)(v3 + 2), a2) != 0 )
    {
      v3 = (uint32_t *)*v3;
      if ( (uint32_t *)((char *)self + 36) == v3 )
        return;
    }
    v3[3] = a3;
  }
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::UpdateGroupSettings  (binary VA: 0x105bdb0)
// Original: vox::VoxGroupsSnapshot::UpdateGroupSettings
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::UpdateGroupSettings(vox::VoxGroupsSnapshot::Self *self, const vox::JsonObject::Self *a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  bool v6;
  float *v7;
  float v8; // xmm0_4
  float v9; // xmm0_4
  int v10;

  result = vox::JsonObject::opIndex(a2, "label");
  v3 = result;
  if ( result != 0 && *(uint32_t *)(result + 24) == 3 )
  {
    result = vox::JsonObject::opIndex(a2, "volume");
    v4 = result;
    if ( result != 0 )
    {
      v5 = *(uint32_t *)(result + 24);
      v6 = v5 == 4;
      result = v5 - 4;
      if ( v6 || result == 1 )
      {
        result = vox::JsonObject::opIndex(a2, "transition_time");
        v10 = result;
        if ( result != 0 )
        {
          v7 = *((float **)self + 9);
          if ( v7 != (float *)((char *)self + 36) )
          {
            while ( 1 )
            {
              result = g4_std::string::compare((int)(uintptr_t)(v7 + 2), *(char **)(v3 + 20));
              if ( result == 0 )
                break;
              v7 = *(float **)v7;
              if ( (float *)((char *)self + 36) == v7 )
                return result;
            }
            if ( *(uint32_t *)(v4 + 24) == 5 )
              v8 = *(float *)(v4 + 20);
            else
              v8 = (float)*(int *)(v4 + 20);
            result = v10;
            v7[4] = v8;
            if ( *(uint32_t *)(v10 + 24) == 5 )
              v9 = *(float *)(v10 + 20);
            else
              v9 = (float)*(int *)(v10 + 20);
            v7[5] = v9;
          }
        }
        else
        {
          return -4;
        }
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::Reset  (binary VA: 0x105bed0)
// Original: vox::VoxGroupsSnapshot::Reset
// ----------------------------------------------------------------------------
vox::VoxGroupsSnapshot::Self * vox::VoxGroupsSnapshot::Reset(vox::VoxGroupsSnapshot::Self *self)
{
  *((uint32_t *)self + 6) = -8388609;
  *((uint32_t *)self + 8) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::GroupInfo::Serialize  (binary VA: 0x105bef0)
// Original: vox::VoxGroupsSnapshot::GroupInfo::Serialize
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::GroupInfo::Serialize(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  void *v11;
  int v13;
  void *v14;
  void *v15;
  void *v16;
  float v17;
  float v18;

  v2 = *(uint32_t *)(a2 + 200);
  v3 = a2 + 192;
  v4 = a2 + 12;
  if ( v2 != a2 + 200 && *(uint8_t *)(v2 + 8) != 0 )
  {
    v13 = *(uint32_t *)(a2 + 192);
    if ( v13 == v3 )
      return 0;
    if ( *(uint8_t *)(v13 + 8) != 0 )
      *(uint8_t *)(v13 + 8) = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v14 = *(void **)(a2 + 192);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v14);
  v15 = *(void **)(a2 + 200);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 0;
  sub_1901920(v6, v15);
  g4_std_compat::ostream_write(v4, "{", 1);
  v7 = *(uint32_t *)(a2 + 192);
  if ( v7 != v3 )
  {
    if ( *(uint8_t *)(v7 + 8) != 0 )
      *(uint8_t *)(v7 + 8) = 0;
    else
      g4_std_compat::ostream_write(v4, ",", 1);
    g4_std_compat::ostream_write(v4, "\"", 1);
    g4_std_compat::ostream_write(v4, "label", 5);
    g4_std_compat::ostream_write(v4, "\":\"", 3);
    v8 = (int)(uintptr_t)(g4_std_compat::ostream_write(v4, *(uint32_t *)a1, *(uint32_t *)(*(uint32_t *)a1 - 12)));
    g4_std_compat::ostream_write(v8, "\"", 1);
    v9 = *(uint32_t *)(a2 + 192);
    if ( v3 != v9 )
    {
      if ( *(uint8_t *)(v9 + 8) != 0 )
        *(uint8_t *)(v9 + 8) = 0;
      else
        g4_std_compat::ostream_write(v4, ",", 1);
      v18 = *(float *)(a1 + 8);
      g4_std_compat::ostream_write(v4, "\"", 1);
      g4_std_compat::ostream_write(v4, "volume", 6);
      g4_std_compat::ostream_write(v4, "\":", 2);
      g4_std::ostream::op_shl_double(v4, COERCE__INT64(v18));
      v10 = *(uint32_t *)(a2 + 192);
      if ( v3 != v10 )
      {
        if ( *(uint8_t *)(v10 + 8) != 0 )
          *(uint8_t *)(v10 + 8) = 0;
        else
          g4_std_compat::ostream_write(v4, ",", 1);
        v17 = *(float *)(a1 + 12);
        g4_std_compat::ostream_write(v4, "\"", 1);
        g4_std_compat::ostream_write(v4, "transition_time", 15);
        g4_std_compat::ostream_write(v4, "\":", 2);
        g4_std::ostream::op_shl_double(v4, COERCE__INT64(v17));
        if ( v3 != *(uint32_t *)(a2 + 192) && a2 + 200 != *(uint32_t *)(a2 + 200) )
        {
          v16 = *(void **)(a2 + 192);
          sub_1901940(v16);
          opDelete(v16);
          v11 = *(void **)(a2 + 200);
          sub_1901940(v11);
          opDelete(v11);
          g4_std_compat::ostream_write(v4, "}", 1);
        }
      }
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::Serialize  (binary VA: 0x105c270)
// Original: vox::VoxGroupsSnapshot::Serialize
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::Serialize(int a1, int a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  uint8_t *v8;
  int v9;
  const char *s;
  int v11;
  size_t v12;
  char v13;
  const char *v14;
  size_t v15;
  const char *v16;
  int v17;
  size_t v18;
  uint32_t *v19;
  int v20;
  int v21;
  int v22;
  uint8_t *v23;
  void *v24;
  uint8_t *v25;
  void *v26;
  uint8_t *v28;
  int v29;
  char v30;
  uint32_t *v31;
  uint8_t *v32;
  int v33;
  float v34;
  float v35;

  v2 = *(uint32_t *)(a2 + 200);
  v33 = a2 + 200;
  v3 = a2 + 12;
  v32 = (uint8_t *)(a2 + 192);
  if ( v2 != a2 + 200 && *(uint8_t *)(v2 + 8) != 0 )
  {
    v8 = *(uint8_t **)(a2 + 192);
    if ( v8 == v32 )
      goto LABEL_11;
    if ( v8[8] != 0 )
      v8[8] = 0;
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
  if ( v8 != v32 )
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
    v8 = *(uint8_t **)(a2 + 192);
  }
LABEL_11:
  s = "event";
  if ( *(uint32_t *)(a1 + 4) != 1 )
    s = "time";
  if ( v32 != v8 )
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v11 = a2 + 12;
    }
    else
    {
      v11 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v11, "\"", 1);
    g4_std_compat::ostream_write(v11, "transition_type", 15);
    g4_std_compat::ostream_write(v11, "\":\"", 3);
    v12 = strlen(s);
    g4_std_compat::ostream_write(v11, s, v12);
    g4_std_compat::ostream_write(v11, "\"", 1);
    v13 = *(uint8_t *)(a1 + 8);
    v8 = *(uint8_t **)(a2 + 192);
    if ( v32 != v8 )
    {
      if ( v8[8] != 0 )
      {
        v8[8] = 0;
      }
      else
      {
        v30 = *(uint8_t *)(a1 + 8);
        g4_std_compat::ostream_write(v11, ",", 1);
        v13 = v30;
      }
      v14 = "true";
      if ( v13 == 0 )
        v14 = "false";
      g4_std_compat::ostream_write(v11, "\"", 1);
      g4_std_compat::ostream_write(v11, "freeze_gameplay_timer", 21);
      g4_std_compat::ostream_write(v11, "\":", 2);
      v15 = strlen(v14);
      g4_std_compat::ostream_write(v11, v14, v15);
      v8 = *(uint8_t **)(a2 + 192);
      if ( v32 != v8 )
      {
        if ( v8[8] != 0 )
          v8[8] = 0;
        else
          g4_std_compat::ostream_write(v11, ",", 1);
        v34 = *(float *)(a1 + 12);
        g4_std_compat::ostream_write(v11, "\"", 1);
        g4_std_compat::ostream_write(v11, "cooldown", 8);
        g4_std_compat::ostream_write(v11, "\":", 2);
        g4_std::ostream::op_shl_double(v11, COERCE__INT64(v34));
        v8 = *(uint8_t **)(a2 + 192);
        if ( v32 != v8 )
        {
          if ( v8[8] != 0 )
            v8[8] = 0;
          else
            g4_std_compat::ostream_write(v11, ",", 1);
          v35 = *(float *)(a1 + 16);
          g4_std_compat::ostream_write(v11, "\"", 1);
          g4_std_compat::ostream_write(v11, "duration", 8);
          g4_std_compat::ostream_write(v11, "\":", 2);
          g4_std::ostream::op_shl_double(v11, COERCE__INT64(v35));
          v8 = *(uint8_t **)(a2 + 192);
        }
      }
    }
  }
  v16 = "gameplay";
  if ( *(uint32_t *)(a1 + 20) != 0 )
    v16 = "global";
  if ( v8 == v32 )
  {
    v19 = *(uint32_t **)(a1 + 36);
    v31 = (uint32_t *)(a1 + 36);
  }
  else
  {
    if ( v8[8] != 0 )
    {
      v8[8] = 0;
      v17 = a2 + 12;
    }
    else
    {
      v17 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v17, "\"", 1);
    g4_std_compat::ostream_write(v17, "timer_type", 10);
    g4_std_compat::ostream_write(v17, "\":\"", 3);
    v18 = strlen(v16);
    g4_std_compat::ostream_write(v17, v16, v18);
    g4_std_compat::ostream_write(v17, "\"", 1);
    v19 = *(uint32_t **)(a1 + 36);
    v31 = (uint32_t *)(a1 + 36);
    v8 = *(uint8_t **)(a2 + 192);
    if ( v32 != v8 )
    {
      if ( v8[8] != 0 )
        v8[8] = 0;
      else
        g4_std_compat::ostream_write(v17, ",", 1);
      g4_std_compat::ostream_write(v17, "\"", 1);
      g4_std_compat::ostream_write(v17, "groups", 6);
      g4_std_compat::ostream_write(v17, "\":", 2);
      v8 = *(uint8_t **)(a2 + 192);
    }
  }
  v20 = *(uint32_t *)(a2 + 200);
  if ( v33 != v20 && *(uint8_t *)(v20 + 8) != 0 )
  {
    if ( v8 == v32 )
      goto LABEL_44;
    if ( v8[8] != 0 )
      v8[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    v8 = *(uint8_t **)(a2 + 192);
  }
  v28 = v8;
  v21 = opNew(0xCu);
  if ( v21 != -8 )
    *(uint8_t *)(v21 + 8) = 1;
  sub_1901920(v21, v28);
  v29 = *(uint32_t *)(a2 + 200);
  v22 = opNew(0xCu);
  if ( v22 != -8 )
    *(uint8_t *)(v22 + 8) = 1;
  sub_1901920(v22, v29);
  g4_std_compat::ostream_write(a2 + 12, "[", 1);
LABEL_44:
  while ( v31 != v19 )
  {
    vox::VoxGroupsSnapshot::GroupInfo::Serialize((int)(uintptr_t)(v19 + 2), a2);
    v19 = (uint32_t *)*v19;
  }
  v23 = *(uint8_t **)(a2 + 192);
  if ( v32 != v23 && v33 != *(uint32_t *)(a2 + 200) )
  {
    sub_1901940(*(uint32_t *)(a2 + 192));
    opDelete(v23);
    v24 = *(void **)(a2 + 200);
    sub_1901940(v24);
    opDelete(v24);
    g4_std_compat::ostream_write(a2 + 12, "]", 1);
    v25 = *(uint8_t **)(a2 + 192);
    if ( v32 != v25 && v33 != *(uint32_t *)(a2 + 200) )
    {
      sub_1901940(*(uint32_t *)(a2 + 192));
      opDelete(v25);
      v26 = *(void **)(a2 + 200);
      sub_1901940(v26);
      opDelete(v26);
      g4_std_compat::ostream_write(a2 + 12, "}", 1);
    }
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::VoxGroupsSnapshot::SetSnapshotData  (binary VA: 0x105e1d0)
// Original: vox::VoxGroupsSnapshot::SetSnapshotData
// ----------------------------------------------------------------------------
int vox::VoxGroupsSnapshot::SetSnapshotData(char **self, const vox::JsonObject::Self *a2, vox::GroupManager::Self *a3)
{
  int v3;
  char *v4;
  int v5;
  char *v6;
  int v7;
  const char *v9;
  size_t v10;
  int v11;
  const char *v12;
  int v13;
  int v14;
  int v15;
  float v16; // xmm0_4
  int v17;
  int v18;
  float v19; // xmm0_4
  int v20;
  const char *v21;
  int v22;
  vox::JsonObject::Self *v23;
  int v24;
  int v25;
  void *v26;
  size_t v27;
  int v28;
  int v29;
  float v30; // xmm0_4
  int v31;
  int v32;
  float v33; // xmm0_4
  float *v34;
  typedef char *_g4_t_v35;
  typedef char *_g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_GroupId;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (4u + sizeof(_g4_t_v35)) > _g4_s0 ? (4u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v36)) > _g4_s1 ? (12u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v37)) > _g4_s2 ? (32u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_GroupId)) > _g4_s3 ? (36u + sizeof(_g4_t_GroupId)) : _g4_s3,
    _g4_s5 = (40u + sizeof(_g4_t_v39)) > _g4_s4 ? (40u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v40)) > _g4_s5 ? (44u + sizeof(_g4_t_v40)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 4u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 12u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_GroupId &GroupId = *reinterpret_cast<_g4_t_GroupId *>(_g4_sf + 36u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 40u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 44u);

  v3 = 0;
  if ( a2 != nullptr )
  {
    vox::VoxGroupsSnapshot::Reset((vox::VoxGroupsSnapshot::Self *)self);
    v4 = *(self + 9);
    v36 = (char *)(self + 9);
    if ( v4 != (char *)(self + 9) )
    {
      while ( 1 )
      {
        v5 = *((uint32_t *)v4 + 2);
        v6 = *(char **)v4;
        if ( (uint32_t *)(v5 - 12) != dword_213B808
          && __sync_fetch_and_add((volatile int32_t *)(v5 - 4), 0xFFFFFFFF) <= 0 )
        {
          g4_std::string::Rep::M_destroy((void *)(v5 - 12));
        }
        VoxFreeInternal(v4);
        if ( v6 == v36 )
          break;
        v4 = v6;
      }
    }
    v3 = 0;
    *(self + 9) = v36;
    *(self + 10) = v36;
    v7 = vox::JsonObject::opIndex(a2, "label");
    if ( v7 != 0 && *(uint32_t *)(v7 + 24) == 3 )
    {
      v9 = *(const char **)(v7 + 20);
      if ( v9 != nullptr )
      {
        v10 = strlen(*(const char **)(v7 + 20));
        g4_std::basic_string_char_char_traits_char_vo_fb0ee3::assign(
          (void **)self,
          v9,
          v10);
        v11 = vox::JsonObject::opIndex(a2, "transition_type");
        if ( v11 != 0 && *(uint32_t *)(v11 + 24) == 3 )
        {
          v12 = *(const char **)(v11 + 20);
          if ( v12 != nullptr )
          {
            *(self + 1) = (char *)(strcmp(v12, "event") == 0);
            v13 = vox::JsonObject::opIndex(a2, "freeze_gameplay_timer");
            if ( v13 != 0 && *(uint32_t *)(v13 + 24) == 6 )
              *((uint8_t *)self + 8) = *(uint32_t *)(v13 + 20) != 0;
            if ( *(self + 1) == nullptr )
            {
              v14 = vox::JsonObject::opIndex(a2, "cooldown");
              v3 = 0;
              if ( v14 == 0 )
                return v3;
              v15 = *(uint32_t *)(v14 + 24);
              if ( (unsigned int)(v15 - 4) > 1 )
                return v3;
              v16 = v15 == 5 ? *(float *)(v14 + 20) : (float)*(int *)(v14 + 20);
              *((float *)self + 3) = v16;
              v17 = vox::JsonObject::opIndex(a2, "duration");
              v3 = 0;
              if ( v17 == 0 )
                return v3;
              v18 = *(uint32_t *)(v17 + 24);
              if ( (unsigned int)(v18 - 4) > 1 )
                return v3;
              v19 = v18 == 5 ? *(float *)(v17 + 20) : (float)*(int *)(v17 + 20);
              *((float *)self + 4) = v19;
              v20 = vox::JsonObject::opIndex(a2, "timer_type");
              v3 = 0;
              if ( v20 == 0 )
                return v3;
              if ( *(uint32_t *)(v20 + 24) != 3 )
                return v3;
              v21 = *(const char **)(v20 + 20);
              if ( v21 == nullptr )
                return v3;
              *(self + 5) = (char *)(strcmp(v21, "gameplay") != 0);
            }
            v22 = vox::JsonObject::opIndex(a2, "groups");
            v3 = 0;
            if ( v22 != 0 && *(uint32_t *)(v22 + 24) == 2 )
            {
              v23 = *(vox::JsonObject::Self **)(v22 + 8);
              v3 = 1;
              if ( v23 != nullptr )
              {
                do
                {
                  if ( *((uint32_t *)v23 + 6) == 1 )
                  {
                    v37 = (int)(uintptr_t)(&dword_213B814);
                    v24 = vox::JsonObject::opIndex(v23, "label");
                    v25 = v24;
                    if ( v24 == 0 )
                      goto LABEL_38;
                    if ( *(uint32_t *)(v24 + 24) != 3 )
                      goto LABEL_38;
                    v35 = *(char **)(v24 + 20);
                    v27 = strlen(v35);
                    g4_std_compat::string_assign((int)(uintptr_t)(&v37), v35, v27);
                    GroupId = vox::GroupManager::GetGroupId(a3, *(char **)(v25 + 20));
                    v28 = vox::JsonObject::opIndex(v23, "volume");
                    if ( v28 == 0 )
                      goto LABEL_38;
                    v29 = *(uint32_t *)(v28 + 24);
                    if ( (unsigned int)(v29 - 4) > 1 )
                      goto LABEL_38;
                    v30 = v29 == 5 ? *(float *)(v28 + 20) : (float)*(int *)(v28 + 20);
                    v39 = v30;
                    v31 = vox::JsonObject::opIndex(v23, "transition_time");
                    if ( v31 != 0 && (unsigned int)((v32 = *(uint32_t *)(v31 + 24)) - 4) <= 1 )
                    {
                      if ( v32 == 5 )
                        v33 = *(float *)(v31 + 20);
                      else
                        v33 = (float)*(int *)(v31 + 20);
                      v40 = v33;
                      v34 = (float *)VoxAllocInternal(
                                       0x18u,
                                       0,
                                       (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"),
                                       (int)(uintptr_t)("internal_new"),
                                       181);
                      if ( v34 != (float *)-8 )
                      {
                        g4_std::string::construct_copy(v34 + 2, &v37);
                        *((uint32_t *)v34 + 3) = GroupId;
                        v34[4] = v39;
                        v34[5] = v40;
                      }
                      sub_1901920(v34, v36);
                      g4_std::string::Destroy(&v37);
                    }
                    else
                    {
LABEL_38:
                      v26 = (void *)(v37 - 12);
                      if ( (uint32_t *)(v37 - 12) != dword_213B808
                        && __sync_fetch_and_add((volatile int32_t *)(v37 - 4), 0xFFFFFFFF) <= 0 )
                      {
                        g4_std::string::Rep::M_destroy(v26);
                      }
                    }
                  }
                  v23 = *((vox::JsonObject::Self **)v23 + 1);
                }
                while ( v23 != nullptr );
                return 1;
              }
            }
          }
        }
      }
    }
  }
  return v3;
}


