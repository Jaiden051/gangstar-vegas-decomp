#include "Core/Utils/DecompTypes.h"
#include "vox_Group.h"

// ----------------------------------------------------------------------------
// Function: vox::Group::Destroy  (binary VA: 0x10578c0)
// Original: vox::Group::~Group
// ----------------------------------------------------------------------------
void vox::Group::Destroy(vox::Group::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DC40);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::Destroy_ea10578e0  (binary VA: 0x10578e0)
// Original: vox::Group::~Group
// ----------------------------------------------------------------------------
void vox::Group::Destroy_ea10578e0(vox::Group::Self *self)
{
  vox::Group::Destroy(self);
  opDelete(self);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::Construct  (binary VA: 0x1057920)
// Original: vox::Group::Group
// ----------------------------------------------------------------------------
vox::Group::Self * vox::Group::Construct(vox::Group::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DC40);
  *((uint32_t *)self + 1) = -1;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 3) = -1;
  *((uint8_t *)self + 48) = 1;
  *((uint8_t *)self + 49) = 0;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint8_t *)self + 68) = 0;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 1065353216;
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint8_t *)self + 92) = 0;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 1065353216;
  *((uint8_t *)self + 16) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::Group::Construct  (binary VA: 0x1057990)
// Original: vox::Group::Group
// ----------------------------------------------------------------------------
vox::Group::Self * vox::Group::Construct(vox::Group::Self *self, unsigned int a2, char *src, unsigned int a4)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_208DC40);
  *((uint32_t *)self + 1) = a2;
  *((uint32_t *)self + 3) = a4;
  *((uint32_t *)self + 2) = 1065353216;
  *((uint32_t *)self + 13) = 1065353216;
  *((uint32_t *)self + 14) = 1065353216;
  *((uint32_t *)self + 18) = 1065353216;
  *((uint32_t *)self + 19) = 1065353216;
  *((uint32_t *)self + 20) = 1065353216;
  *((uint32_t *)self + 24) = 1065353216;
  *((uint32_t *)self + 25) = 1065353216;
  *((uint8_t *)self + 48) = 1;
  *((uint8_t *)self + 49) = 0;
  *((uint32_t *)self + 15) = 0;
  *((uint32_t *)self + 16) = 0;
  *((uint8_t *)self + 68) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint8_t *)self + 92) = 0;
  return (vox::Group::Self *)strncpy((char *)self + 16, src, 0x1Fu);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::Update  (binary VA: 0x1057a20)
// Original: vox::Group::Update
// ----------------------------------------------------------------------------
vox::Group::Self * vox::Group::Update(vox::Group::Self *self, float a2)
{
  vox::Group::Self *result;
  float v3; // xmm0_4
  float v4; // xmm0_4

  result = self;
  v3 = *((float *)self + 15);
  if ( v3 >= *((float *)self + 16) )
  {
    v4 = *((float *)self + 21);
    *((uint8_t *)self + 68) = 1;
    if ( v4 >= *((float *)self + 22) )
      goto LABEL_3;
  }
  else
  {
    *((float *)self + 15) = v3 + a2;
    v4 = *((float *)self + 21);
    if ( v4 >= *((float *)self + 22) )
    {
LABEL_3:
      *((uint8_t *)self + 92) = 1;
      return result;
    }
  }
  *((float *)self + 21) = v4 + a2;
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetId  (binary VA: 0x1057a70)
// Original: vox::Group::GetId
// ----------------------------------------------------------------------------
int vox::Group::GetId(vox::Group::Self *self)
{
  return *((uint32_t *)self + 1);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetName  (binary VA: 0x1057a80)
// Original: vox::Group::GetName
// ----------------------------------------------------------------------------
char * vox::Group::GetName(vox::Group::Self *self)
{
  return (char *)self + 16;
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetParent  (binary VA: 0x1057a90)
// Original: vox::Group::GetParent
// ----------------------------------------------------------------------------
int vox::Group::GetParent(vox::Group::Self *self)
{
  return *((uint32_t *)self + 3);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetVolume  (binary VA: 0x1057aa0)
// Original: vox::Group::GetVolume
// ----------------------------------------------------------------------------
long double vox::Group::GetVolume(vox::Group::Self *self)
{
  return *((float *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetFaderVolume  (binary VA: 0x1057ab0)
// Original: vox::Group::GetFaderVolume
// ----------------------------------------------------------------------------
long double vox::Group::GetFaderVolume(vox::Group::Self *self)
{
  float v1; // xmm2_4
  float v2; // xmm1_4

  v1 = *((float *)self + 15);
  v2 = *((float *)self + 16);
  if ( v2 <= v1 )
    return *((float *)self + 14);
  if ( v2 <= 0.0 )
    return *((float *)self + 13);
  return (float)((float)((float)((float)(*((float *)self + 14) - *((float *)self + 13)) * v1) / v2)
               + *((float *)self + 13));
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetEnable  (binary VA: 0x1057b40)
// Original: vox::Group::GetEnable
// ----------------------------------------------------------------------------
int vox::Group::GetEnable(vox::Group::Self *self)
{
  return *((uint8_t *)self + 48);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetPitch  (binary VA: 0x1057b50)
// Original: vox::Group::GetPitch
// ----------------------------------------------------------------------------
long double vox::Group::GetPitch(vox::Group::Self *self)
{
  return *((float *)self + 18);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::GetFaderPitch  (binary VA: 0x1057b60)
// Original: vox::Group::GetFaderPitch
// ----------------------------------------------------------------------------
long double vox::Group::GetFaderPitch(vox::Group::Self *self)
{
  float v1; // xmm2_4
  float v2; // xmm1_4

  v1 = *((float *)self + 21);
  v2 = *((float *)self + 22);
  if ( v2 <= v1 )
    return *((float *)self + 20);
  if ( v2 <= 0.0 )
    return *((float *)self + 19);
  return (float)((float)((float)((float)(*((float *)self + 20) - *((float *)self + 19)) * v1) / v2)
               + *((float *)self + 19));
}

// ----------------------------------------------------------------------------
// Function: vox::Group::SetEnable  (binary VA: 0x1057bf0)
// Original: vox::Group::SetEnable
// ----------------------------------------------------------------------------
vox::Group::Self * vox::Group::SetEnable(vox::Group::Self *self, bool a2, float a3)
{
  vox::Group::Self *result;
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9; // xmm0_4
  int v10;

  result = self;
  if ( *((uint8_t *)self + 48) != 0 )
  {
    if ( a2 )
      goto LABEL_3;
    v4 = *((float *)self + 15);
    v5 = *((float *)self + 16);
    if ( v5 <= v4 )
    {
      v6 = *((float *)self + 14);
    }
    else if ( v5 <= 0.0 )
    {
      v6 = *((float *)self + 13);
    }
    else
    {
      v6 = (float)((float)((float)(*((float *)self + 14) - *((float *)self + 13)) * v4) / v5) + *((float *)self + 13);
    }
    *((float *)self + 13) = v6;
    *((uint32_t *)self + 14) = 0;
    *((uint32_t *)self + 15) = 0;
    *((float *)self + 16) = a3;
    *((uint8_t *)self + 68) = 0;
    *((uint8_t *)self + 48) = 0;
  }
  else
  {
    if ( !a2 )
    {
LABEL_3:
      *((uint8_t *)self + 48) = a2;
      return result;
    }
    v7 = *((float *)self + 15);
    v8 = *((float *)self + 16);
    if ( v8 <= v7 )
    {
      v9 = *((float *)self + 14);
    }
    else if ( v8 <= 0.0 )
    {
      v9 = *((float *)self + 13);
    }
    else
    {
      v9 = (float)((float)((float)(*((float *)self + 14) - *((float *)self + 13)) * v7) / v8) + *((float *)self + 13);
    }
    v10 = *((uint32_t *)self + 2);
    *((float *)self + 13) = v9;
    *((uint32_t *)self + 14) = v10;
    *((uint32_t *)self + 15) = 0;
    *((float *)self + 16) = a3;
    *((uint8_t *)self + 68) = 0;
    *((uint8_t *)self + 48) = a2;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: vox::Group::SetVolume  (binary VA: 0x1057d60)
// Original: vox::Group::SetVolume
// ----------------------------------------------------------------------------
int vox::Group::SetVolume(vox::Group::Self *self, float a2, float a3)
{
  float v3; // xmm3_4
  bool v4;
  float v5; // xmm2_4
  float v6; // xmm0_4
  float v7; // xmm0_4
  float v9; // xmm1_4

  v3 = *((float *)self + 15);
  v4 = *((uint8_t *)self + 48) == 0;
  v5 = *((float *)self + 16);
  v6 = fmaxf(fminf(a2, 2.0), 0.0);
  *((float *)self + 2) = v6;
  if ( v4 )
  {
    if ( v5 > v3 )
    {
      if ( v5 <= 0.0 )
        v7 = *((float *)self + 13);
      else
        v7 = (float)((float)((float)(*((float *)self + 14) - *((float *)self + 13)) * v3) / v5) + *((float *)self + 13);
    }
    else
    {
      v7 = *((float *)self + 14);
    }
    *((float *)self + 13) = v7;
    *((uint32_t *)self + 14) = 0;
    *((uint32_t *)self + 15) = 0;
    *((float *)self + 16) = a3;
    *((uint8_t *)self + 68) = 0;
    return LODWORD(a3);
  }
  else
  {
    if ( v5 <= v3 )
    {
      v9 = *((float *)self + 14);
    }
    else if ( v5 <= 0.0 )
    {
      v9 = *((float *)self + 13);
    }
    else
    {
      v9 = (float)((float)((float)(*((float *)self + 14) - *((float *)self + 13)) * v3) / v5) + *((float *)self + 13);
    }
    *((float *)self + 13) = v9;
    *((uint32_t *)self + 15) = 0;
    *((float *)self + 14) = v6;
    *((float *)self + 16) = a3;
    *((uint8_t *)self + 68) = 0;
    return LODWORD(a3);
  }
}

// ----------------------------------------------------------------------------
// Function: vox::Group::SetName  (binary VA: 0x1057e90)
// Original: vox::Group::SetName
// ----------------------------------------------------------------------------
char * vox::Group::SetName(vox::Group::Self *self, char *src)
{
  return strncpy((char *)self + 16, src, 0x1Fu);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::SetPitch  (binary VA: 0x1057ed0)
// Original: vox::Group::SetPitch
// ----------------------------------------------------------------------------
int vox::Group::SetPitch(vox::Group::Self *self, float a2, float a3)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm1_4

  v3 = *((float *)self + 21);
  v4 = *((float *)self + 22);
  v5 = fmaxf(fminf(a2, 2.0), 0.0);
  *((float *)self + 18) = v5;
  if ( v4 <= v3 )
  {
    v6 = *((float *)self + 20);
  }
  else if ( v4 <= 0.0 )
  {
    v6 = *((float *)self + 19);
  }
  else
  {
    v6 = (float)((float)((float)(*((float *)self + 20) - *((float *)self + 19)) * v3) / v4) + *((float *)self + 19);
  }
  *((float *)self + 19) = v6;
  *((uint32_t *)self + 21) = 0;
  *((float *)self + 20) = v5;
  *((float *)self + 22) = a3;
  *((uint8_t *)self + 92) = 0;
  return LODWORD(a3);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::SetParent  (binary VA: 0x1057f80)
// Original: vox::Group::SetParent
// ----------------------------------------------------------------------------
vox::Group::Self * vox::Group::SetParent(vox::Group::Self *self, unsigned int a2)
{
  *((uint32_t *)self + 3) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::Group::SetSnapshotControlled  (binary VA: 0x1057f90)
// Original: vox::Group::SetSnapshotControlled
// ----------------------------------------------------------------------------
vox::Group::Self * vox::Group::SetSnapshotControlled(vox::Group::Self *self, bool a2)
{
  *((uint8_t *)self + 49) = a2;
  return self;
}

// ----------------------------------------------------------------------------
// Function: vox::Group::IsSnapshotControlled  (binary VA: 0x1057fa0)
// Original: vox::Group::IsSnapshotControlled
// ----------------------------------------------------------------------------
int vox::Group::IsSnapshotControlled(vox::Group::Self *self)
{
  return *((uint8_t *)self + 49);
}

// ----------------------------------------------------------------------------
// Function: vox::Group::Serialize  (binary VA: 0x1057fb0)
// Original: vox::Group::Serialize
// ----------------------------------------------------------------------------
int vox::Group::Serialize(int a1, int a2, char a3)
{
  int v3;
  int v4;
  int v5;
  int v6;
  uint8_t *v7;
  size_t v8;
  void *v9;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  int v15;
  int v16;
  int v17;
  float v18; // xmm2_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  int v21;
  int v22;
  void *v23;
  void *v24;
  void *v25;
  void *v26;
  void *v27;
  float v28;
  uint8_t *v29;
  float v30;
  float v31;
  float v32;

  v3 = *(uint32_t *)(a2 + 200);
  v4 = a2 + 12;
  v29 = (uint8_t *)(a2 + 192);
  if ( v3 != a2 + 200 && *(uint8_t *)(v3 + 8) != 0 )
  {
    v7 = *(uint8_t **)(a2 + 192);
    if ( v7 == (uint8_t *)(a2 + 192) )
      goto LABEL_17;
    if ( v7[8] != 0 )
      v7[8] = 0;
    else
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
  }
  v23 = *(void **)(a2 + 192);
  v5 = opNew(0xCu);
  if ( v5 != -8 )
    *(uint8_t *)(v5 + 8) = 1;
  sub_1901920(v5, v23);
  v24 = *(void **)(a2 + 200);
  v6 = opNew(0xCu);
  if ( v6 != -8 )
    *(uint8_t *)(v6 + 8) = 0;
  sub_1901920(v6, v24);
  g4_std_compat::ostream_write(v4, "{", 1);
  v7 = *(uint8_t **)(a2 + 192);
  if ( v7 != v29 )
  {
    if ( v7[8] != 0 )
      v7[8] = 0;
    else
      g4_std_compat::ostream_write(v4, ",", 1);
    v25 = *(void **)(a1 + 4);
    g4_std_compat::ostream_write(v4, "\"", 1);
    g4_std_compat::ostream_write(v4, "id", 2);
    g4_std_compat::ostream_write(v4, "\":", 2);
    sub_192D8B0(v4, v25);
    v7 = *(uint8_t **)(a2 + 192);
    if ( v29 != v7 )
    {
      if ( v7[8] != 0 )
        v7[8] = 0;
      else
        g4_std_compat::ostream_write(v4, ",", 1);
      g4_std_compat::ostream_write(v4, "\"", 1);
      g4_std_compat::ostream_write(v4, "name", 4);
      g4_std_compat::ostream_write(v4, "\":\"", 3);
      v8 = strlen((const char *)(a1 + 16));
      g4_std_compat::ostream_write(v4, a1 + 16, v8);
      g4_std_compat::ostream_write(v4, "\"", 1);
      v7 = *(uint8_t **)(a2 + 192);
      if ( v29 != v7 )
      {
        if ( v7[8] != 0 )
          v7[8] = 0;
        else
          g4_std_compat::ostream_write(v4, ",", 1);
        v26 = *(void **)(a1 + 12);
        g4_std_compat::ostream_write(v4, "\"", 1);
        g4_std_compat::ostream_write(v4, "parent_id", 9);
        g4_std_compat::ostream_write(v4, "\":", 2);
        sub_192D8B0(v4, v26);
        v7 = *(uint8_t **)(a2 + 192);
      }
    }
  }
LABEL_17:
  if ( (a3 & 1) == 0
    || ((v12 = *(float *)(a1 + 60), (v13 = *(float *)(a1 + 64)) > v12)
      ? (v13 <= 0.0
       ? (v14 = *(float *)(a1 + 52))
       : (v14 = (float)((float)((float)(*(float *)(a1 + 56) - *(float *)(a1 + 52)) * v12) / v13) + *(float *)(a1 + 52)))
      : (v14 = *(float *)(a1 + 56)),
        v7 == v29) )
  {
    if ( (a3 & 2) == 0 )
      goto LABEL_19;
  }
  else
  {
    if ( v7[8] != 0 )
    {
      v7[8] = 0;
      v15 = a2 + 12;
    }
    else
    {
      v15 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v15, "\"", 1);
    g4_std_compat::ostream_write(v15, "gain_current", 12);
    g4_std_compat::ostream_write(v15, "\":", 2);
    g4_std::ostream::op_shl_double(v15, COERCE__INT64(v14));
    v7 = *(uint8_t **)(a2 + 192);
    if ( (a3 & 2) == 0 )
      goto LABEL_19;
  }
  v30 = *(float *)(a1 + 56);
  if ( v29 != v7 )
  {
    if ( v7[8] != 0 )
    {
      v7[8] = 0;
      v16 = a2 + 12;
    }
    else
    {
      v16 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v16, "\"", 1);
    g4_std_compat::ostream_write(v16, "gain_target", 11);
    g4_std_compat::ostream_write(v16, "\":", 2);
    g4_std::ostream::op_shl_double(v16, COERCE__INT64(v30));
    v7 = *(uint8_t **)(a2 + 192);
    if ( (a3 & 4) == 0 )
      goto LABEL_20;
    goto LABEL_47;
  }
LABEL_19:
  if ( (a3 & 4) == 0 )
    goto LABEL_20;
LABEL_47:
  if ( v29 != v7 )
  {
    if ( v7[8] != 0 )
    {
      v7[8] = 0;
      v17 = a2 + 12;
    }
    else
    {
      v17 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v31 = *(float *)(a1 + 96);
    g4_std_compat::ostream_write(v17, "\"", 1);
    g4_std_compat::ostream_write(v17, "gain_effective", 14);
    g4_std_compat::ostream_write(v17, "\":", 2);
    g4_std::ostream::op_shl_double(v17, COERCE__INT64(v31));
    v7 = *(uint8_t **)(a2 + 192);
    if ( (a3 & 8) == 0 )
      goto LABEL_21;
    goto LABEL_51;
  }
LABEL_20:
  if ( (a3 & 8) == 0 )
    goto LABEL_21;
LABEL_51:
  v18 = *(float *)(a1 + 84);
  v19 = *(float *)(a1 + 88);
  if ( v19 > v18 )
  {
    if ( v19 <= 0.0 )
      v20 = *(float *)(a1 + 76);
    else
      v20 = (float)((float)((float)(*(float *)(a1 + 80) - *(float *)(a1 + 76)) * v18) / v19) + *(float *)(a1 + 76);
  }
  else
  {
    v20 = *(float *)(a1 + 80);
  }
  if ( v29 != v7 )
  {
    if ( v7[8] != 0 )
    {
      v7[8] = 0;
      v21 = a2 + 12;
    }
    else
    {
      v21 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    g4_std_compat::ostream_write(v21, "\"", 1);
    g4_std_compat::ostream_write(v21, "pitch_current", 13);
    g4_std_compat::ostream_write(v21, "\":", 2);
    g4_std::ostream::op_shl_double(v21, COERCE__INT64(v20));
    v7 = *(uint8_t **)(a2 + 192);
    if ( (a3 & 0x10) == 0 )
      goto LABEL_22;
    goto LABEL_57;
  }
LABEL_21:
  if ( (a3 & 0x10) != 0 )
  {
LABEL_57:
    v32 = *(float *)(a1 + 80);
    if ( v29 != v7 )
    {
      if ( v7[8] != 0 )
      {
        v7[8] = 0;
        v22 = a2 + 12;
      }
      else
      {
        v22 = a2 + 12;
        g4_std_compat::ostream_write(a2 + 12, ",", 1);
      }
      g4_std_compat::ostream_write(v22, "\"", 1);
      g4_std_compat::ostream_write(v22, "pitch_target", 12);
      g4_std_compat::ostream_write(v22, "\":", 2);
      g4_std::ostream::op_shl_double(v22, COERCE__INT64(v32));
      v7 = *(uint8_t **)(a2 + 192);
    }
  }
LABEL_22:
  if ( (a3 & 0x20) != 0 )
  {
    if ( v7 == v29 )
      return 0;
    if ( v7[8] != 0 )
    {
      v7[8] = 0;
      v11 = a2 + 12;
    }
    else
    {
      v11 = a2 + 12;
      g4_std_compat::ostream_write(a2 + 12, ",", 1);
    }
    v28 = *(float *)(a1 + 100);
    g4_std_compat::ostream_write(v11, "\"", 1);
    g4_std_compat::ostream_write(v11, "pitch_effective", 15);
    g4_std_compat::ostream_write(v11, "\":", 2);
    g4_std::ostream::op_shl_double(v11, COERCE__INT64(v28));
    v7 = *(uint8_t **)(a2 + 192);
  }
  if ( v29 != v7 && a2 + 200 != *(uint32_t *)(a2 + 200) )
  {
    v27 = v7;
    sub_1901940(v7);
    opDelete(v27);
    v9 = *(void **)(a2 + 200);
    sub_1901940(v9);
    opDelete(v9);
    g4_std_compat::ostream_write(a2 + 12, "}", 1);
  }
  return 0;
}


