#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpPairCol.h"

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::MapPairFilterKeyOverrideType::staticClass  (binary VA: 0x172b780)
// Original: hkpPairCollisionFilter::MapPairFilterKeyOverrideType::staticClass
// ----------------------------------------------------------------------------
void * hkpPairCollisionFilter::MapPairFilterKeyOverrideType::staticClass()
{
  return &hkpPairCollisionFilterMapPairFilterKeyOverrideTypeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::staticClass  (binary VA: 0x172b7a0)
// Original: hkpPairCollisionFilter::staticClass
// ----------------------------------------------------------------------------
void * hkpPairCollisionFilter::staticClass()
{
  return &hkpPairCollisionFilterClass;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::isCollisionEnabled  (binary VA: 0x1761330)
// Original: hkpPairCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpPairCollisionFilter::isCollisionEnabled(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 60);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 28))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::isCollisionEnabled_ea17613b0  (binary VA: 0x17613b0)
// Original: hkpPairCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpPairCollisionFilter::isCollisionEnabled_ea17613b0(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 60);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 32))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::isCollisionEnabled_ea1761440  (binary VA: 0x1761440)
// Original: hkpPairCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpPairCollisionFilter::isCollisionEnabled_ea1761440(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 60);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 40))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::isCollisionEnabled_ea17614b0  (binary VA: 0x17614b0)
// Original: hkpPairCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
bool * hkpPairCollisionFilter::isCollisionEnabled_ea17614b0(bool *a1, int a2)
{
  bool *result;
  int v3;
  uint8_t v4[5];

  result = a1;
  v3 = *(uint32_t *)(a2 + 60);
  if ( v3 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v3 + 44))(v4);
    *a1 = v4[0] != 0;
    return a1;
  }
  else
  {
    *a1 = true;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::Destroy  (binary VA: 0x1761520)
// Original: hkpPairCollisionFilter::~hkpPairCollisionFilter
// ----------------------------------------------------------------------------
void hkpPairCollisionFilter::Destroy(hkpPairCollisionFilter::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;
  int v8;
  uint32_t *v9;
  bool v10;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FDE8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_209FE20);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_209FE34);
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_209FE50);
  v1 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_209FE64);
  if ( v1 != 0 && *(uint16_t *)(v1 + 6) != 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4);
      HIWORD(v2) = HIWORD(v3);
      LOWORD(v2) = 0;
      v4 = v2 | (uint16_t)(v3 - 1);
      v5 = v3;
    }
    while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)(v1 + 4), v5, v4) );
    if ( (uint16_t)v4 == 0 )
      G4_VCALL<void>(v1, 16);
  }
  v6 = 0;
  v7 = *((uint32_t *)self + 14) + 1;
  if ( *((int *)self + 14) >= 0 )
  {
    do
    {
      v8 = v6++;
      v9 = (uint32_t *)(*((uint32_t *)self + 12) + 16 * v8);
      *v9 = 0;
      v9[1] = 0;
    }
    while ( v6 != v7 );
  }
  v10 = *((int *)self + 13) < 0;
  *((uint32_t *)self + 13) &= 0x80000000;
  if ( !v10 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 12))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      16 * (*((uint32_t *)self + 14) + 1));
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 5) = (uint32_t)(uintptr_t)(&off_2054D80);
  *((uint32_t *)self + 14) = -1;
  *((uint32_t *)self + 4) = (uint32_t)(uintptr_t)(&off_2054D98);
  *((uint32_t *)self + 3) = ((uint32_t)(uintptr_t)&off_2054DB0);
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(&off_2054DD0);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::Destroy_ea1761690  (binary VA: 0x1761690)
// Original: hkpPairCollisionFilter::~hkpPairCollisionFilter
// ----------------------------------------------------------------------------
void hkpPairCollisionFilter::Destroy_ea1761690(hkpPairCollisionFilter::Self *self)
{
  int v1;
  int v2;

  hkpPairCollisionFilter::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::isCollisionEnabled  (binary VA: 0x1761730)
// Original: hkpPairCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpPairCollisionFilter::Self * hkpPairCollisionFilter::isCollisionEnabled(hkpPairCollisionFilter::Self *self, const hkpEntity::Self *a2, const hkpEntity::Self *a3, const hkpEntity::Self *a4)
{
  const hkpEntity::Self *v4;
  int v5;
  unsigned int i;
  int v7;
  const hkpEntity::Self **v8;
  const hkpEntity::Self *v9;
  const hkpEntity::Self *v10;

  v4 = a4;
  if ( a3 == nullptr || a4 == nullptr )
    goto LABEL_14;
  if ( a3 < a4 )
  {
    v4 = a3;
    a3 = a4;
  }
  v5 = *((uint32_t *)a2 + 14);
  if ( v5 > 0 )
  {
    for ( i = -1640531535 * ((unsigned int)((unsigned int)(uintptr_t)(a3) + 0x10000000 * (uint64_t)(unsigned int)(uintptr_t)(v4)) >> 4);
          ;
          i = v7 + 1 )
    {
      v7 = v5 & i;
      v8 = (const hkpEntity::Self **)(16 * v7 + *((uint32_t *)a2 + 12));
      v9 = *v8;
      v10 = v8[1];
      if ( v9 == nullptr || v10 == nullptr )
        break;
      if ( v4 == v9 && a3 == v10 )
        goto LABEL_12;
    }
  }
  v7 = v5 + 1;
LABEL_12:
  if ( v7 <= v5 )
  {
    *(uint8_t *)self = 0;
    return self;
  }
  else
  {
LABEL_14:
    *(uint8_t *)self = 1;
    return self;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::isCollisionEnabled  (binary VA: 0x1761800)
// Original: hkpPairCollisionFilter::isCollisionEnabled
// ----------------------------------------------------------------------------
hkpPairCollisionFilter::Self * hkpPairCollisionFilter::isCollisionEnabled(hkpPairCollisionFilter::Self *self, const hkpCollidable::Self *a2, const hkpCollidable::Self *a3, int a4)
{
  int v4;
  const hkpEntity::Self *v6;
  int v7;
  const hkpEntity::Self *v8;
  uint8_t v9[25];

  v4 = *((uint32_t *)a2 + 15);
  if ( v4 != 0 )
  {
    (*(void (**)(uint8_t *))(*(uint32_t *)v4 + 24))(v9);
    if ( v9[0] == 0 )
    {
      *(uint8_t *)self = 0;
      return self;
    }
  }
  v6 = nullptr;
  if ( *((uint8_t *)a3 + 24) == 1 )
  {
    v8 = nullptr;
    v6 = (const hkpEntity::Self *)((const hkpCollidable::Self *)((char *)a3 + *((char *)a3 + 16)));
    v7 = a4;
    if ( *(uint8_t *)(a4 + 24) != 1 )
      goto LABEL_6;
    goto LABEL_7;
  }
  v7 = a4;
  v8 = nullptr;
  if ( *(uint8_t *)(a4 + 24) == 1 )
LABEL_7:
    v8 = (const hkpEntity::Self *)(v7 + *(char *)(v7 + 16));
LABEL_6:
  hkpPairCollisionFilter::isCollisionEnabled(self, a2, v6, v8);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::clearAll  (binary VA: 0x17618d0)
// Original: hkpPairCollisionFilter::clearAll
// ----------------------------------------------------------------------------
int hkpPairCollisionFilter::clearAll(hkpPairCollisionFilter::Self *self)
{
  int64_t v1; // rax
  int v2;

  v1 = *((unsigned int *)self + 14);
  v2 = *((uint32_t *)self + 14) + 1;
  if ( (int)v1 >= 0 )
  {
    do
    {
      LODWORD(v1) = HIDWORD(v1)++;
      LODWORD(v1) = *((uint32_t *)self + 12) + 16 * v1;
      *(uint32_t *)v1 = 0;
      *(uint32_t *)(v1 + 4) = 0;
    }
    while ( HIDWORD(v1) != v2 );
  }
  *((uint32_t *)self + 13) &= 0x80000000;
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::enableCollisionsBetween  (binary VA: 0x1761d10)
// Original: hkpPairCollisionFilter::enableCollisionsBetween
// ----------------------------------------------------------------------------
int hkpPairCollisionFilter::enableCollisionsBetween(hkpPairCollisionFilter::Self *self, const hkpEntity::Self *a2, const hkpEntity::Self *a3)
{
  const hkpEntity::Self *v3;
  int result;
  const hkpEntity::Self *v5;
  const hkpEntity::Self *v6;
  int v7;
  int v8;
  const hkpEntity::Self *v9;
  int64_t v10; // rax
  bool v11;
  const hkpEntity::Self *v12;
  int v13;
  const hkpEntity::Self **v14;
  int v15;
  int v16;
  signed int v17;
  const hkpEntity::Self *v18;
  const hkpEntity::Self **v19;
  typedef unsigned int _g4_t_v20;
  typedef int64_t _g4_t_v21 __attribute__((aligned(1)));
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef const hkpEntity::Self **_g4_t_v25;
  typedef const hkpEntity::Self **_g4_t_v26;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef uint8_t _g4_t_v31[28];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v21)) > _g4_s1 ? (4u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v24)) > _g4_s4 ? (16u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v26)) > _g4_s6 ? (24u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v27)) > _g4_s7 ? (28u + sizeof(_g4_t_v27)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v28)) > _g4_s8 ? (32u + sizeof(_g4_t_v28)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v29)) > _g4_s9 ? (36u + sizeof(_g4_t_v29)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v30)) > _g4_s10 ? (36u + sizeof(_g4_t_v30)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v31)) > _g4_s11 ? (40u + sizeof(_g4_t_v31)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 4u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 16u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 24u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 28u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 32u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 36u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 36u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 40u);

  if ( a2 < a3 )
  {
    v3 = a2;
    a2 = a3;
    a3 = v3;
  }
  result = 0;
  v29 = *((uint32_t *)self + 14);
  if ( v29 > 0 )
  {
    v27 = *((uint32_t *)self + 14);
    v20 = -1640531535 * ((unsigned int)((unsigned int)(uintptr_t)(a2) + 0x10000000 * (uint64_t)(unsigned int)(uintptr_t)(a3)) >> 4);
    v22 = v29 & v20;
    v28 = *((uint32_t *)self + 12);
    v23 = 16 * (v29 & v20);
    v25 = (const hkpEntity::Self **)(v28 + v23);
    if ( *(uint32_t *)(v28 + v23) != 0 && v25[1] != nullptr )
    {
      v6 = *v25;
      v5 = *v25;
      v7 = v29 & v20;
      v8 = v28 + 16 * (v29 & v20);
      v9 = v25[1];
      while ( a3 != v6 || a2 != v9 )
      {
        v7 = v29 & (v7 + 1);
        v8 = 16 * v7 + v28;
        v6 = *(const hkpEntity::Self **)v8;
        v9 = *(const hkpEntity::Self **)(v8 + 4);
        if ( *(uint32_t *)v8 == 0 || v9 == nullptr )
          return 0;
      }
      v10 = *(uint64_t *)(v8 + 8);
      if ( v10 == 0 )
        return 0;
      v11 = (uint32_t)v10 != 0;
      LODWORD(v10) = v10 - 1;
      HIDWORD(v10) = v11 + HIDWORD(v10) - 1;
      v21 = v10;
      if ( v10 == 0 )
      {
        v17 = v29 & v20;
        v18 = v25[1];
        while ( a3 != v5 || a2 != v18 )
        {
          v17 = v29 & (v17 + 1);
          v19 = (const hkpEntity::Self **)(16 * v17 + v28);
          v5 = *v19;
          v18 = v19[1];
          if ( v5 == nullptr || v18 == nullptr )
          {
            v17 = v29 + 1;
            break;
          }
        }
        if ( v17 <= v29 )
          hkMapBase_hkpPairCollisionFilter_P_4a3daf::remove(
            (int *)self + 12,
            v17);
        return v21;
      }
      if ( v29 < 2 * *((uint32_t *)self + 13) )
      {
        hkMapBase_hkpPairCollisionFilter_P_4a3daf::resizeTable(
          (hkMapBase<hkpPairCollisionFilter::PairFilterKey, unsigned long long, hkpPairCollisionFilter::PairFilterPointerMapOperations> *)v31,
          (hkpPairCollisionFilter::Self *)((char *)self + 48),
          (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
          v29 + v29 + 2);
        v13 = *((uint32_t *)self + 14) & v20;
        v27 = *((uint32_t *)self + 14);
        v24 = 16 * v13;
        v16 = *((uint32_t *)self + 13);
        v28 = *((uint32_t *)self + 12);
        v26 = (const hkpEntity::Self **)(v28 + 16 * v13);
        v5 = *v26;
        v12 = v26[1];
        if ( *v26 == nullptr )
        {
LABEL_21:
          v12 = (const hkpEntity::Self *)(&dword_0 + 1);
LABEL_22:
          *((uint32_t *)self + 13) = (uint32_t)(uintptr_t)((char *)v12 + v16);
          *v26 = a3;
          v26[1] = a2;
          *(uint64_t *)(*((uint32_t *)self + 12) + v24 + 8) = v21;
          return v21;
        }
        if ( v12 != nullptr )
        {
          v30 = *((uint32_t *)self + 13);
          v14 = (const hkpEntity::Self **)(v28 + 16 * v13);
          v15 = 16 * v13;
          goto LABEL_18;
        }
      }
      else
      {
        v30 = *((uint32_t *)self + 13);
        v12 = v25[1];
        v13 = v22;
        v14 = (const hkpEntity::Self **)(v28 + v23);
        v15 = v23;
        do
        {
LABEL_18:
          if ( a3 == v5 && a2 == v12 )
          {
            v24 = v15;
            v26 = v14;
            v16 = v30;
            v12 = nullptr;
            goto LABEL_22;
          }
          v13 = v27 & (v13 + 1);
          v15 = 16 * v13;
          v14 = (const hkpEntity::Self **)(v28 + 16 * v13);
          v5 = *v14;
          v12 = v14[1];
          if ( *v14 == nullptr )
          {
            v24 = 16 * v13;
            v26 = (const hkpEntity::Self **)(v28 + 16 * v13);
            v16 = v30;
            goto LABEL_21;
          }
        }
        while ( v12 != nullptr );
        v24 = 16 * v13;
        v26 = (const hkpEntity::Self **)(v28 + 16 * v13);
        v16 = v30;
      }
      LOBYTE(v12) = 1;
      goto LABEL_22;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpPairCollisionFilter::disableCollisionsBetween  (binary VA: 0x1761fb0)
// Original: hkpPairCollisionFilter::disableCollisionsBetween
// ----------------------------------------------------------------------------
int hkpPairCollisionFilter::disableCollisionsBetween(hkpPairCollisionFilter::Self *self, const hkpEntity::Self *a2, const hkpEntity::Self *a3)
{
  const hkpEntity::Self *v3;
  int i;
  int v5;
  const hkpEntity::Self *v6;
  int v7;
  int v8;
  int v9;
  uint32_t *v10;
  const hkpEntity::Self *v11;
  const hkpEntity::Self *v12;
  int v13;
  int64_t v15; // rax
  typedef int _g4_t_v16;
  typedef int64_t _g4_t_v17 __attribute__((aligned(1)));
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef int _g4_t_v20;
  typedef uint8_t _g4_t_v21[28];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v18)) > _g4_s2 ? (12u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v20)) > _g4_s4 ? (20u + sizeof(_g4_t_v20)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v21)) > _g4_s5 ? (24u + sizeof(_g4_t_v21)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);

  if ( a2 < a3 )
  {
    v3 = a2;
    a2 = a3;
    a3 = v3;
  }
  v20 = *((uint32_t *)self + 14);
  if ( v20 <= 0 )
  {
    v18 = 1;
    v17 = 1;
    v19 = -1640531535 * ((unsigned int)((unsigned int)(uintptr_t)(a2) + 0x10000000 * (uint64_t)(unsigned int)(uintptr_t)(a3)) >> 4);
LABEL_10:
    v16 = *((uint32_t *)self + 13);
    if ( v20 < 2 * v16 )
    {
LABEL_22:
      hkMapBase_hkpPairCollisionFilter_P_4a3daf::resizeTable(
        (hkMapBase<hkpPairCollisionFilter::PairFilterKey, unsigned long long, hkpPairCollisionFilter::PairFilterPointerMapOperations> *)v21,
        (hkpPairCollisionFilter::Self *)((char *)self + 48),
        (int)(uintptr_t)(&hkContainerHeapAllocator::s_alloc),
        v20 + v20 + 2);
      v20 = *((uint32_t *)self + 14);
      v16 = *((uint32_t *)self + 13);
    }
  }
  else
  {
    v19 = -1640531535 * ((unsigned int)((unsigned int)(uintptr_t)(a2) + 0x10000000 * (uint64_t)(unsigned int)(uintptr_t)(a3)) >> 4);
    for ( i = v20 & v19; ; i = v20 & (i + 1) )
    {
      v5 = 16 * i + *((uint32_t *)self + 12);
      v6 = *(const hkpEntity::Self **)(v5 + 4);
      if ( *(uint32_t *)v5 == 0 || v6 == nullptr )
      {
        v18 = 1;
        v17 = 1;
        goto LABEL_10;
      }
      if ( a3 == *(const hkpEntity::Self **)v5 && a2 == v6 )
        break;
    }
    v15 = *(uint64_t *)(v5 + 8);
    v18 = v15 + 1;
    v17 = v15 + 1;
    v16 = *((uint32_t *)self + 13);
    if ( v20 < 2 * v16 )
      goto LABEL_22;
  }
  v7 = v20 & v19;
  v8 = 16 * (v20 & v19);
  v9 = *((uint32_t *)self + 12);
  while ( 1 )
  {
    v10 = (uint32_t *)(v9 + v8);
    v11 = *(const hkpEntity::Self **)(v9 + v8);
    v12 = *(const hkpEntity::Self **)(v9 + v8 + 4);
    if ( v11 == nullptr || v12 == nullptr )
    {
      v13 = 1;
      goto LABEL_17;
    }
    if ( a3 == v11 && a2 == v12 )
      break;
    v7 = v20 & (v7 + 1);
    v9 = *((uint32_t *)self + 12);
    v8 = 16 * v7;
  }
  v13 = 0;
LABEL_17:
  *((uint32_t *)self + 13) = v16 + v13;
  *v10 = (uint32_t)(uintptr_t)(a3);
  v10[1] = (uint32_t)(uintptr_t)(a2);
  *(uint64_t *)(*((uint32_t *)self + 12) + v8 + 8) = v17;
  return v18;
}


