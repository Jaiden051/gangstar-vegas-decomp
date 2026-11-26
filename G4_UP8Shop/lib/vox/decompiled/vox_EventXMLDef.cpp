#include "Core/Utils/DecompTypes.h"
#include "vox_EventXMLDef.h"

// ----------------------------------------------------------------------------
// Function: vox::EventXMLDef::opAssign  (binary VA: 0x1020dd0)
// Original: vox::EventXMLDef::operator=
// ----------------------------------------------------------------------------
vox::EventXMLDef::Self * vox::EventXMLDef::opAssign(vox::EventXMLDef::Self *self, const vox::EventXMLDef::Self *a2)
{
  const vox::EventXMLDef::Self *v2;
  vox::EventXMLDef::Self *v3;
  char *v4;
  char *v5;
  char *v6;
  uint32_t *v7;
  uint32_t *v8;
  char *v9;
  unsigned int v10;
  int v11;
  vox::EventXMLDef::Self *v12;
  uint32_t *v14;
  int v15;
  uint32_t *v16;
  void *v17;
  int v18;
  uint32_t *v19;
  uint32_t *v20;
  typedef int _g4_t_v21;
  typedef char *_g4_t_v22;
  typedef uint8_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef char *_g4_t_v25;
  typedef unsigned int _g4_t_v26;
  typedef uint32_t _g4_t_v27[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v21)) > _g4_s0 ? (12u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v22)) > _g4_s1 ? (16u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v23)) > _g4_s2 ? (24u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v24)) > _g4_s3 ? (24u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v25)) > _g4_s4 ? (28u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v26)) > _g4_s5 ? (28u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v27)) > _g4_s6 ? (32u + sizeof(_g4_t_v27)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 16u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 24u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 28u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 32u);

  v2 = a2;
  v3 = self;
  *(uint32_t *)self = *(uint32_t *)a2;
  if ( a2 == self )
    goto LABEL_15;
  v4 = *((char **)self + 1);
  v5 = *((char **)a2 + 1);
  v22 = (char *)self + 4;
  v25 = (char *)a2 + 4;
  if ( v4 != (char *)self + 4 )
  {
    if ( v5 == (char *)a2 + 4 )
      goto LABEL_6;
    while ( 1 )
    {
      *((uint32_t *)v4 + 2) = *((uint32_t *)v5 + 2);
      v4 = *(char **)v4;
      v5 = *(char **)v5;
      if ( v22 == v4 )
        break;
      if ( v25 == v5 )
        goto LABEL_6;
    }
  }
  if ( v25 != v5 )
  {
    v27[0] = (uint32_t)(uintptr_t)(v27);
    v27[1] = (uint32_t)(uintptr_t)(v27);
    do
    {
      v18 = VoxAllocInternal(0xCu, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
      if ( v18 != -8 )
        *(uint32_t *)(v18 + 8) = *((uint32_t *)v5 + 2);
      sub_1901920(v18, v27);
      v5 = *(char **)v5;
    }
    while ( v25 != v5 );
    if ( (uint32_t *)v27[0] != v27 )
    {
      sub_19018A0(v22, v27[0], v27);
      v19 = (uint32_t *)v27[0];
      if ( (uint32_t *)v27[0] != v27 )
      {
        while ( 1 )
        {
          v20 = (uint32_t *)*v19;
          VoxFreeInternal(v19);
          if ( v20 == v27 )
            break;
          v19 = v20;
        }
      }
    }
    goto LABEL_10;
  }
LABEL_6:
  if ( v22 != v4 )
  {
    while ( 1 )
    {
      v6 = *(char **)v4;
      sub_1901940(v4);
      VoxFreeInternal(v4);
      if ( v22 == v6 )
        break;
      v4 = v6;
    }
  }
LABEL_10:
  v7 = *((uint32_t **)a2 + 3);
  v8 = *((uint32_t **)a2 + 4);
  v23 = *((uint8_t **)self + 3);
  v26 = v8 - v7;
  if ( v26 > (*((uint32_t *)self + 5) - (int)(uintptr_t)(v23)) >> 2 )
  {
    v15 = 0;
    v24 = 0;
    if ( v26 != 0 )
    {
      v24 = 4 * v26;
      v15 = VoxAllocInternal(4 * v26, 0, (int)(uintptr_t)("../../../../../lib/vox/include/vox_memory.h"), (int)(uintptr_t)("internal_new"), 181);
    }
    if ( v7 != v8 )
    {
      v16 = (uint32_t *)v15;
      do
      {
        if ( v16 != nullptr )
          *v16 = *v7;
        ++v7;
        ++v16;
      }
      while ( v8 != v7 );
    }
    v17 = *((void **)self + 3);
    if ( v17 != nullptr )
    {
      v21 = v15;
      VoxFreeInternal(v17);
      v15 = v21;
    }
    v12 = self;
    *((uint32_t *)self + 3) = v15;
    v11 = v24 + v15;
    *((uint32_t *)self + 5) = v11;
  }
  else
  {
    v9 = *((char **)self + 4);
    v10 = (v9 - (char *)(v23)) >> 2;
    if ( v26 > v10 )
    {
      v14 = &v7[v10];
      if ( v10 != 0 )
      {
        memmove(v23, v7, 4 * v10);
        v9 = *((char **)self + 4);
        v8 = *((uint32_t **)a2 + 4);
        v23 = *((uint8_t **)self + 3);
        v14 = (uint32_t *)(*((uint32_t *)a2 + 3) + ((v9 - (char *)(v23)) & 0xFFFFFFFC));
      }
      if ( v8 == v14 )
      {
        v11 = (int)(uintptr_t)(&v23[4 * v26]);
        v12 = self;
      }
      else
      {
        do
        {
          if ( v9 != nullptr )
            *(uint32_t *)v9 = *v14;
          ++v14;
          v9 += 4;
        }
        while ( v14 != v8 );
        v12 = self;
        v11 = *((uint32_t *)self + 3) + 4 * v26;
      }
    }
    else if ( v26 != 0 )
    {
      memmove(v23, v7, 4 * v26);
      v12 = self;
      v11 = *((uint32_t *)self + 3) + 4 * v26;
    }
    else
    {
      v11 = *((uint32_t *)self + 3);
      v12 = self;
    }
  }
  *((uint32_t *)v12 + 4) = v11;
  v2 = a2;
  v3 = v12;
LABEL_15:
  *((uint16_t *)v3 + 12) = *((uint16_t *)v2 + 12);
  *((uint16_t *)v3 + 13) = *((uint16_t *)v2 + 13);
  *((uint16_t *)v3 + 14) = *((uint16_t *)v2 + 14);
  *((uint16_t *)v3 + 15) = *((uint16_t *)v2 + 15);
  *((uint32_t *)v3 + 8) = *((uint32_t *)v2 + 8);
  *((uint32_t *)v3 + 9) = *((uint32_t *)v2 + 9);
  *((uint64_t *)v3 + 5) = *((uint64_t *)v2 + 5);
  *((uint32_t *)v3 + 12) = *((uint32_t *)v2 + 12);
  *((uint32_t *)v3 + 13) = *((uint32_t *)v2 + 13);
  return v3;
}


