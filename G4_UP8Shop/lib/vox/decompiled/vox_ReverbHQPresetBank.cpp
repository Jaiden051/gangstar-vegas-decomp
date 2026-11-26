#include "Core/Utils/DecompTypes.h"
#include "vox_ReverbHQPresetBank.h"

// ============================================================================
// G4_UP8Shop/lib/vox/decompiled/vox_ReverbHQPresetBank.cpp
// Library: vox | Module: vox_ReverbHQPresetBank
// Binary Address Span: 0xfc8b50 .. 0xfc9140 (5 functions)
// Decompiled via IDA Pro 9.5 MCP (Hex-Rays)
// ============================================================================

// ============================================================================
// Address:   0xfc8b50 (size: 20 bytes)
// Symbol:    _ZN3vox18ReverbHQPresetBankC2Ev
// Demangled: vox::ReverbHQPresetBank::ReverbHQPresetBank(void)
// ============================================================================
// Alternative name is '_ZN3vox18ReverbHQPresetBankC1Ev'
struct vox::ReverbHQPresetBank::Self *vox::ReverbHQPresetBank::ReverbHQPresetBank(vox::ReverbHQPresetBank::Self *self)
{
  *(uint32_t *)self = 0;
  *((uint32_t *)self + 1) = 0;
  return self;
}
// ----------------------------------------------------------------------------
// Function: vox::ReverbHQPresetBank::Destroy  (binary VA: 0xfc8b70)
// Original: vox::ReverbHQPresetBank::~ReverbHQPresetBank
// ----------------------------------------------------------------------------
void vox::ReverbHQPresetBank::Destroy(void **self)
{
  if ( *(self + 1) != nullptr )
    VoxFreeInternal(*(self + 1));
}

// [Deduplicated EA block removed; canonical definition kept in dedicated module]

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQPresetBank::getPreset  (binary VA: 0xfc8f60)
// Original: vox::ReverbHQPresetBank::getPreset
// ----------------------------------------------------------------------------
int vox::ReverbHQPresetBank::getPreset(vox::ReverbHQPresetBank::Self *self, int a2, vox::ReverbHQParameters::Self *a3)
{
  int v3;
  vox::ReverbHQParameters::Self *v4;
  char *v5;
  unsigned int v6;
  int v7;
  uint16_t *v8;
  char *v9;
  char *v11;
  unsigned int v12;
  int v13;
  uint16_t *v14;
  char *v15;
  char v16;
  typedef char _g4_t_v17;
  typedef char _g4_t_v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v17)) > _g4_s0 ? (8u + sizeof(_g4_t_v17)) : _g4_s0,
    _g4_s2 = (9u + sizeof(_g4_t_v18)) > _g4_s1 ? (9u + sizeof(_g4_t_v18)) : _g4_s1,
    _g4_s3 = (100u + sizeof(_g4_t_v19)) > _g4_s2 ? (100u + sizeof(_g4_t_v19)) : _g4_s2,
    _g4_s4 = (101u + sizeof(_g4_t_v20)) > _g4_s3 ? (101u + sizeof(_g4_t_v20)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 9u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 100u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 101u);

  v3 = *((uint32_t *)self + 1);
  v4 = a3;
  if ( v3 != 0 )
  {
    if ( a2 >= 0 && *(uint32_t *)self > a2 )
    {
      v5 = (char *)(v3 + 92 * a2);
      v6 = 89;
      if ( ((uint8_t)(uintptr_t)a3 & 1) != 0 )
      {
        v16 = *v5++;
        *(uint8_t *)a3 = v16;
        v4 = (vox::ReverbHQParameters::Self *)((char *)a3 + 1);
        v6 = 88;
      }
      if ( ((uint8_t)(uintptr_t)v4 & 2) != 0 )
      {
        v6 -= 2;
        *(uint16_t *)v4 = *(uint16_t *)v5;
        v5 += 2;
        v4 = (vox::ReverbHQParameters::Self *)((char *)v4 + 2);
      }
      v7 = 0;
      std::memcpy(v4, v5, 4 * (v6 >> 2));
      v9 = &v5[4 * (v6 >> 2)];
      v8 = (uint16_t *)((char *)v4 + 4 * (v6 >> 2));
      if ( (v6 & 2) != 0 )
      {
        *v8 = *(uint16_t *)v9;
        v7 = 1;
        if ( (v6 & 1) == 0 )
          return 1;
      }
      else if ( (v6 & 1) == 0 )
      {
        return 1;
      }
      LOBYTE(v8[v7]) = v9[v7 * 2];
      return 1;
    }
    vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)&v19);
    v11 = &v19;
    v12 = 89;
    if ( ((uint8_t)(uintptr_t)a3 & 1) != 0 )
    {
      v11 = &v20;
      *(uint8_t *)a3 = v19;
      v4 = (vox::ReverbHQParameters::Self *)((char *)a3 + 1);
      v12 = 88;
    }
  }
  else
  {
    vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)&v17);
    v11 = &v17;
    v12 = 89;
    if ( ((uint8_t)(uintptr_t)a3 & 1) != 0 )
    {
      v11 = &v18;
      *(uint8_t *)a3 = v17;
      v4 = (vox::ReverbHQParameters::Self *)((char *)a3 + 1);
      v12 = 88;
    }
  }
  if ( ((uint8_t)(uintptr_t)v4 & 2) != 0 )
  {
    v12 -= 2;
    *(uint16_t *)v4 = *(uint16_t *)v11;
    v11 += 2;
    v4 = (vox::ReverbHQParameters::Self *)((char *)v4 + 2);
  }
  v13 = 0;
  std::memcpy(v4, v11, 4 * (v12 >> 2));
  v15 = &v11[4 * (v12 >> 2)];
  v14 = (uint16_t *)((char *)v4 + 4 * (v12 >> 2));
  if ( (v12 & 2) != 0 )
  {
    *v14 = *(uint16_t *)v15;
    v13 = 1;
  }
  if ( (v12 & 1) != 0 )
    LOBYTE(v14[v13]) = v15[v13 * 2];
  vox::ReverbHQParameters::Destroy();
  return 0;
}

// ----------------------------------------------------------------------------
// Function: vox::ReverbHQPresetBank::getPresetByName  (binary VA: 0xfc9140)
// Original: vox::ReverbHQPresetBank::getPresetByName
// ----------------------------------------------------------------------------
int vox::ReverbHQPresetBank::getPresetByName(vox::ReverbHQPresetBank::Self *self, char *s1, vox::ReverbHQParameters::Self *a3)
{
  char *v3;
  int v4;
  int v5;
  vox::ReverbHQParameters::Self *v6;
  unsigned int v7;
  int v8;
  uint16_t *v9;
  char *v10;
  vox::ReverbHQParameters::Self *v12;
  char *v13;
  unsigned int v14;
  int v15;
  uint16_t *v16;
  char *v17;
  char v18;
  typedef char _g4_t_v19;
  typedef char _g4_t_v20;
  typedef char _g4_t_v21;
  typedef char _g4_t_v22;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (8u + sizeof(_g4_t_v19)) > _g4_s0 ? (8u + sizeof(_g4_t_v19)) : _g4_s0,
    _g4_s2 = (9u + sizeof(_g4_t_v20)) > _g4_s1 ? (9u + sizeof(_g4_t_v20)) : _g4_s1,
    _g4_s3 = (100u + sizeof(_g4_t_v21)) > _g4_s2 ? (100u + sizeof(_g4_t_v21)) : _g4_s2,
    _g4_s4 = (101u + sizeof(_g4_t_v22)) > _g4_s3 ? (101u + sizeof(_g4_t_v22)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 8u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 9u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 100u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 101u);

  v3 = *((char **)self + 1);
  if ( v3 == nullptr )
  {
    vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)&v19);
    v12 = a3;
    v13 = &v19;
    v14 = 89;
    if ( ((uint8_t)(uintptr_t)a3 & 1) != 0 )
    {
      v13 = &v20;
      *(uint8_t *)a3 = v19;
      v12 = (vox::ReverbHQParameters::Self *)((char *)a3 + 1);
      v14 = 88;
    }
    goto LABEL_17;
  }
  v4 = *(uint32_t *)self;
  v5 = 0;
  if ( *(int *)self <= 0 )
  {
LABEL_15:
    vox::ReverbHQParameters::ReverbHQParameters((vox::ReverbHQParameters::Self *)&v21);
    v12 = a3;
    v13 = &v21;
    v14 = 89;
    if ( ((uint8_t)(uintptr_t)a3 & 1) != 0 )
    {
      v13 = &v22;
      *(uint8_t *)a3 = v21;
      v12 = (vox::ReverbHQParameters::Self *)((char *)a3 + 1);
      v14 = 88;
    }
LABEL_17:
    if ( ((uint8_t)(uintptr_t)v12 & 2) != 0 )
    {
      v14 -= 2;
      *(uint16_t *)v12 = *(uint16_t *)v13;
      v13 += 2;
      v12 = (vox::ReverbHQParameters::Self *)((char *)v12 + 2);
    }
    v15 = 0;
    std::memcpy(v12, v13, 4 * (v14 >> 2));
    v17 = &v13[4 * (v14 >> 2)];
    v16 = (uint16_t *)((char *)v12 + 4 * (v14 >> 2));
    if ( (v14 & 2) != 0 )
    {
      *v16 = *(uint16_t *)v17;
      v15 = 1;
    }
    if ( (v14 & 1) != 0 )
      LOBYTE(v16[v15]) = v17[v15 * 2];
    vox::ReverbHQParameters::Destroy();
    return 0;
  }
  while ( strcasecmp(s1, v3 + 60) != 0 )
  {
    ++v5;
    v3 += 92;
    if ( v5 == v4 )
      goto LABEL_15;
  }
  v6 = a3;
  v7 = 89;
  if ( ((uint8_t)(uintptr_t)a3 & 1) != 0 )
  {
    v18 = *v3++;
    *(uint8_t *)a3 = v18;
    v6 = (vox::ReverbHQParameters::Self *)((char *)a3 + 1);
    v7 = 88;
  }
  if ( ((uint8_t)(uintptr_t)v6 & 2) != 0 )
  {
    v7 -= 2;
    *(uint16_t *)v6 = *(uint16_t *)v3;
    v3 += 2;
    v6 = (vox::ReverbHQParameters::Self *)((char *)v6 + 2);
  }
  v8 = 0;
  std::memcpy(v6, v3, 4 * (v7 >> 2));
  v10 = &v3[4 * (v7 >> 2)];
  v9 = (uint16_t *)((char *)v6 + 4 * (v7 >> 2));
  if ( (v7 & 2) != 0 )
  {
    *v9 = *(uint16_t *)v10;
    v8 = 1;
  }
  if ( (v7 & 1) != 0 )
    LOBYTE(v9[v8]) = v10[v8 * 2];
  return 1;
}


