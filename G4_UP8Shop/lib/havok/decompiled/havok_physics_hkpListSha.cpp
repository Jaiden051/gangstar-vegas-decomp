#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpListSha.h"

// ----------------------------------------------------------------------------
// Function: hkpListShape::ChildInfo::staticClass  (binary VA: 0x1690860)
// Original: hkpListShape::ChildInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpListShape::ChildInfo::staticClass()
{
  return &hkpListShapeChildInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::staticClass  (binary VA: 0x1690880)
// Original: hkpListShape::staticClass
// ----------------------------------------------------------------------------
void * hkpListShape::staticClass()
{
  return &hkpListShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::getNumChildShapes  (binary VA: 0x16a39c0)
// Original: hkpListShape::getNumChildShapes
// ----------------------------------------------------------------------------
int hkpListShape::getNumChildShapes(hkpListShape::Self *self)
{
  return *((uint32_t *)self + 7) - *((uint16_t *)self + 19);
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::getChildShape  (binary VA: 0x16a39e0)
// Original: hkpListShape::getChildShape
// ----------------------------------------------------------------------------
int hkpListShape::getChildShape(int a1, int a2)
{
  return *(uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * a2);
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::getCollisionFilterInfo  (binary VA: 0x16a3a10)
// Original: hkpListShape::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpListShape::getCollisionFilterInfo(hkpListShape::Self *self, unsigned int a2)
{
  return *(uint32_t *)(*((uint32_t *)self + 6) + 16 * a2 + 4);
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::calcSizeForSpu  (binary VA: 0x16a3a40)
// Original: hkpListShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpListShape::calcSizeForSpu(int a1, uint8_t *a2)
{
  int v2;
  int v3;
  int v4;

  if ( *a2 == 0 || a2[1] != 0 )
  {
    v2 = *(uint32_t *)(a1 + 28);
    if ( v2 <= 2046 )
      goto LABEL_4;
    return -1;
  }
  v2 = *(uint32_t *)(a1 + 28);
  if ( v2 > 252 )
    return -1;
LABEL_4:
  if ( v2 > 0 )
  {
    v3 = *(uint32_t *)(a1 + 24);
    v4 = 0;
    while ( 1 )
    {
      *(uint16_t *)(v3 + 16 * v4 + 10) = (*(int (**)(uint32_t, uint8_t *, int))(**(uint32_t **)(v3 + 16 * v4) + 72))(
                                        *(uint32_t *)(v3 + 16 * v4),
                                        a2,
                                        256);
      *(uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * v4 + 12) = *(uint32_t *)(a1 + 28);
      v3 = *(uint32_t *)(a1 + 24);
      if ( *(uint16_t *)(v3 + 16 * v4 + 10) == 0xFFFF )
        break;
      if ( *(uint32_t *)(a1 + 28) <= ++v4 )
        return 112;
    }
    return -1;
  }
  return 112;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::getNextKey  (binary VA: 0x16a3af0)
// Original: hkpListShape::getNextKey
// ----------------------------------------------------------------------------
unsigned int hkpListShape::getNextKey(hkpListShape::Self *self, unsigned int a2)
{
  unsigned int result;
  unsigned int v3;
  signed int v4;

  result = a2 + 1;
  v3 = a2 + 1;
  v4 = *((uint32_t *)self + 7);
  if ( (int)(a2 + 1) >= v4 )
    return -1;
  if ( result <= 0xFF && ((1 << v3) & *((uint32_t *)self + (result >> 5) + 20)) == 0 )
  {
    while ( (int)++v3 < v4 )
    {
      if ( v3 == 256 )
        return 256;
      if ( ((1 << v3) & *((uint32_t *)self + (v3 >> 5) + 20)) != 0 )
        return v3;
    }
    return -1;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::castRay  (binary VA: 0x16a3b70)
// Original: hkpListShape::castRay
// ----------------------------------------------------------------------------
char * hkpListShape::castRay(char *a1, int a2, int a3, uint32_t *a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  int v8;
  unsigned int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  char v14; // di
  int v15;
  uint32_t *v16;
  uint64_t v17; // rax
  unsigned int v19;
  int v20;
  int v21;
  int v22;
  int v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int *_g4_t_v27;
  typedef char *_g4_t_v28;
  typedef uint32_t *_g4_t_v29;
  typedef int _g4_t_v30;
  typedef int _g4_t_v31;
  typedef signed int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef char _g4_t_v34;
  typedef uint32_t _g4_t_v35[26];
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v24)) > _g4_s0 ? (4u + sizeof(_g4_t_v24)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v25)) > _g4_s1 ? (8u + sizeof(_g4_t_v25)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v26)) > _g4_s2 ? (12u + sizeof(_g4_t_v26)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v27)) > _g4_s3 ? (16u + sizeof(_g4_t_v27)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v28)) > _g4_s4 ? (20u + sizeof(_g4_t_v28)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v29)) > _g4_s5 ? (28u + sizeof(_g4_t_v29)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v30)) > _g4_s6 ? (32u + sizeof(_g4_t_v30)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v31)) > _g4_s7 ? (36u + sizeof(_g4_t_v31)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v32)) > _g4_s8 ? (40u + sizeof(_g4_t_v32)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v33)) > _g4_s9 ? (44u + sizeof(_g4_t_v33)) : _g4_s9,
    _g4_s11 = (51u + sizeof(_g4_t_v34)) > _g4_s10 ? (51u + sizeof(_g4_t_v34)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v35)) > _g4_s11 ? (52u + sizeof(_g4_t_v35)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 4u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 8u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 16u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 51u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 52u);

  v35[22] = (uint32_t)(uintptr_t)(&a1);
  v28 = a1;
  v33 = a2;
  v30 = a3;
  v29 = a4;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v27 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcList");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  std::memcpy(v35, v29, 80);
  v24 = v29[4];
  v25 = v29[5];
  v26 = v29[16];
  if ( *(uint32_t *)(v30 + 36) != 0 )
  {
    v8 = *(uint32_t *)(v33 + 28);
    v9 = 0;
    v31 = -1;
    if ( v8 > 0 )
    {
      do
      {
        while ( v9 <= 0xFF && ((1 << v9) & *(uint32_t *)(v33 + 4 * (v9 >> 5) + 80)) == 0 )
        {
          if ( (int)++v9 >= v8 )
            goto LABEL_14;
        }
        (***(void (****)(char *))(v30 + 36))(&v34);
        if ( v34 != 0 )
        {
          v10 = v29[16];
          v11 = *(uint32_t *)(*(uint32_t *)(v33 + 24) + 16 * v9);
          v29[v10 + 8] = v9;
          v29[16] = v10 + 1;
          (*(void (**)(char *))(*(uint32_t *)v11 + 28))(&v34);
          v12 = v31;
          if ( v34 != 0 )
            v12 = v9;
          v31 = v12;
          --v29[16];
          v8 = *(uint32_t *)(v33 + 28);
        }
        else
        {
          v8 = *(uint32_t *)(v33 + 28);
        }
        ++v9;
      }
      while ( (int)v9 < v8 );
LABEL_14:
      v13 = v29[16];
LABEL_15:
      v29[v13 + 8] = v31;
      v14 = 1;
      if ( v31 != -1 )
        goto LABEL_16;
      goto LABEL_30;
    }
  }
  else if ( *(int *)(v33 + 28) > 0 )
  {
    v13 = v29[16];
    v19 = 0;
    v31 = -1;
    v32 = *(uint32_t *)(v33 + 28);
    do
    {
      if ( v19 > 0xFF || ((1 << v19) & *(uint32_t *)(v33 + 4 * (v19 >> 5) + 80)) != 0 )
      {
        v20 = *(uint32_t *)(*(uint32_t *)(v33 + 24) + 16 * v19);
        v29[v13 + 8] = v19;
        ++v29[16];
        (*(void (**)(char *))(*(uint32_t *)v20 + 28))(&v34);
        v21 = v31;
        if ( v34 != 0 )
          v21 = v19;
        v31 = v21;
        v13 = v29[16] - 1;
        v29[16] = v13;
        v32 = *(uint32_t *)(v33 + 28);
      }
      ++v19;
    }
    while ( (int)v19 < v32 );
    goto LABEL_15;
  }
  v29[v26 + 8] = -1;
LABEL_30:
  v22 = v35[0];
  v23 = v35[7];
  v29[4] = v24;
  *v29 = v22;
  v29[1] = v35[1];
  v29[2] = v35[2];
  v29[3] = v35[3];
  v29[5] = v25;
  v29[6] = v35[6];
  v29[8] = v35[8];
  v29[9] = v35[9];
  v29[10] = v35[10];
  v29[11] = v35[11];
  v29[12] = v35[12];
  v29[13] = v35[13];
  v29[14] = v35[14];
  v29[15] = v35[15];
  v29[7] = v23;
  v29[16] = v26;
  v14 = 0;
LABEL_16:
  v15 = *v27;
  v16 = *(uint32_t **)(*v27 + 4);
  if ( (unsigned int)(uintptr_t)(v16) < *(uint32_t *)(*v27 + 12) )
  {
    *v16 = (uint32_t)(uintptr_t)("Et");
    v17 = __rdtsc();
    v16[1] = v17;
    *(uint32_t *)(v15 + 4) = (uint32_t)(uintptr_t)(v16 + 3);
  }
  *v28 = v14;
  return v28;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::castRayWithCollector  (binary VA: 0x16a3ed0)
// Original: hkpListShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpListShape::castRayWithCollector(int a1, int a2, int a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  signed int v8;
  unsigned int i;
  int v10;
  int v11;
  uint64_t v12; // rax
  int v13;
  uint32_t *v14;
  signed int v15;
  unsigned int v16;
  int v17;
  int v18;
  typedef int *_g4_t_v20;
  typedef char _g4_t_v21;
  typedef int _g4_t_v22;
  typedef unsigned int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v20)) > _g4_s0 ? (0u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v21)) > _g4_s1 ? (11u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v22)) > _g4_s2 ? (12u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v23)) > _g4_s3 ? (16u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v24)) > _g4_s4 ? (20u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v25)) > _g4_s5 ? (24u + sizeof(_g4_t_v25)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 0u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 11u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 12u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 16u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 20u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 24u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v20 = address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcList");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v5 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
  if ( *(uint32_t *)(a2 + 36) != 0 )
  {
    v8 = *(uint32_t *)(a1 + 28);
    for ( i = 0; (int)i < v8; ++i )
    {
      while ( i <= 0xFF && ((1 << i) & *(uint32_t *)(a1 + 4 * (i >> 5) + 80)) == 0 )
      {
        if ( (int)++i >= v8 )
          goto LABEL_12;
      }
      (***(void (****)(char *))(a2 + 36))(&v21);
      if ( v21 != 0 )
      {
        v10 = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * i);
        v25 = a3;
        v11 = *(uint32_t *)(a3 + 8);
        v22 = v10;
        v24 = v11;
        v23 = i;
        G4_VCALL<void>(v10, 32, a2, &v22, a4);
      }
      v8 = *(uint32_t *)(a1 + 28);
    }
  }
  else if ( *(int *)(a1 + 28) > 0 )
  {
    v15 = *(uint32_t *)(a1 + 28);
    v16 = 0;
    do
    {
      if ( v16 > 0xFF || ((1 << v16) & *(uint32_t *)(a1 + 4 * (v16 >> 5) + 80)) != 0 )
      {
        v17 = *(uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * v16);
        v25 = a3;
        v18 = *(uint32_t *)(a3 + 8);
        v22 = v17;
        v24 = v18;
        v23 = v16;
        G4_VCALL<void>(v17, 32, a2, &v22, a4);
        v15 = *(uint32_t *)(a1 + 28);
      }
      ++v16;
    }
    while ( (int)v16 < v15 );
  }
LABEL_12:
  LODWORD(v12) = (uint32_t)(uintptr_t)(v20);
  v13 = *v20;
  v14 = *(uint32_t **)(*v20 + 4);
  if ( (unsigned int)(uintptr_t)(v14) < *(uint32_t *)(*v20 + 12) )
  {
    *v14 = (uint32_t)(uintptr_t)("Et");
    v12 = __rdtsc();
    v14[1] = v12;
    *(uint32_t *)(v13 + 4) = (uint32_t)(uintptr_t)(v14 + 3);
  }
  return v12;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::getFirstKey  (binary VA: 0x16a4080)
// Original: hkpListShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpListShape::getFirstKey(hkpListShape::Self *self)
{
  int v1;
  unsigned int v2;

  v1 = *((uint32_t *)self + 7);
  if ( v1 <= 0 )
    return -1;
  if ( (*((uint8_t *)self + 80) & 1) == 0 )
  {
    v2 = 0;
    while ( ++v2 != v1 )
    {
      if ( v2 == 256 )
        return 256;
      if ( ((1 << v2) & *((uint32_t *)self + (v2 >> 5) + 20)) != 0 )
        return v2;
    }
    return -1;
  }
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::Destroy  (binary VA: 0x16a40f0)
// Original: hkpListShape::~hkpListShape
// ----------------------------------------------------------------------------
void hkpListShape::Destroy(hkpListShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  volatile int32_t *v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett
  int v9;
  int v10;

  v1 = 0;
  v2 = *((uint32_t *)self + 7);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099F88);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_2099FFC);
  if ( v2 > 0 )
  {
    do
    {
      v3 = *((uint32_t *)self + 6) + 16 * v1;
      v4 = *(volatile int32_t **)v3;
      if ( *(uint16_t *)(*(uint32_t *)v3 + 6) != 0 )
      {
        v10 = v1;
        do
        {
          v6 = *((uint32_t *)v4 + 1);
          HIWORD(v5) = HIWORD(v6);
          LOWORD(v5) = 0;
          v7 = v5 | (uint16_t)(v6 - 1);
          v8 = v6;
        }
        while ( v8 != __sync_val_compare_and_swap(v4 + 1, v8, v7) );
        v1 = v10;
        if ( (uint16_t)v7 == 0 )
          G4_VCALL<void>(v4, 16);
        v2 = *((uint32_t *)self + 7);
      }
      ++v1;
    }
    while ( v1 < v2 );
  }
  v9 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 7) = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 6),
      16 * v9);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::Destroy_ea16a41f0  (binary VA: 0x16a41f0)
// Original: hkpListShape::~hkpListShape
// ----------------------------------------------------------------------------
void hkpListShape::Destroy_ea16a41f0(hkpListShape::Self *self)
{
  int v1;
  int v2;

  hkpListShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x16a4260 (size: 77 bytes)
// Symbol:    _ZN12hkpListShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpListShape::hkpListShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN12hkpListShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpListShape::Construct(int a1, int a2))(hkpListShape::Self * self)
{
  void (**result)(hkpListShape::Self *);

  hkpShapeCollection::Construct(a1, a2);
  result = (void (**)(hkpListShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_2099FFC));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099F88);
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_2099FFC);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 8) = 8;
    *(uint8_t *)(a1 + 21) = 0;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpListShape::disableChild  (binary VA: 0x16a42b0)
// Original: hkpListShape::disableChild
// ----------------------------------------------------------------------------
int hkpListShape::disableChild(hkpListShape::Self *self, unsigned int a2)
{
  char *v2;
  int v3;
  int result;

  v2 = (char *)self + 4 * (a2 >> 5);
  v3 = *((uint32_t *)v2 + 20);
  result = v3 & ~(1 << a2);
  if ( v3 != result )
  {
    *((uint32_t *)v2 + 20) = result;
    ++*((uint16_t *)self + 19);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::enableChild  (binary VA: 0x16a42e0)
// Original: hkpListShape::enableChild
// ----------------------------------------------------------------------------
int hkpListShape::enableChild(hkpListShape::Self *self, unsigned int a2)
{
  char *v2;
  int v3;
  int result;

  v2 = (char *)self + 4 * (a2 >> 5);
  v3 = *((uint32_t *)v2 + 20);
  result = v3 | (1 << a2);
  if ( v3 != result )
  {
    *((uint32_t *)v2 + 20) = result;
    --*((uint16_t *)self + 19);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::setEnabledChildren  (binary VA: 0x16a4310)
// Original: hkpListShape::setEnabledChildren
// ----------------------------------------------------------------------------
int hkpListShape::setEnabledChildren(hkpListShape::Self *self, const hkBitField::Self *a2)
{
  int v2;
  int v3;
  int i;
  int v5;
  int v6;
  int v7;
  unsigned int v8;
  unsigned int v9;
  int result;

  v2 = *((uint32_t *)a2 + 1);
  v3 = *(uint32_t *)a2;
  if ( v2 > 0 )
  {
    for ( i = 0; i < v2; ++i )
    {
      *((uint32_t *)self + i + 20) = *(uint32_t *)(v3 + 4 * i);
      v2 = *((uint32_t *)a2 + 1);
    }
    v3 = *(uint32_t *)a2;
  }
  v5 = 2 * ~(-1 << (*((uint8_t *)a2 + 12) - 1)) + 1;
  v6 = v2 - 1;
  if ( v6 < 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 0;
    while ( 1 )
    {
      v8 = *(uint32_t *)(v3 + 4 * v6--) & v5;
      v9 = ((v8 - ((v8 >> 1) & 0x55555555)) & 0x33333333) + (((v8 - ((v8 >> 1) & 0x55555555)) >> 2) & 0x33333333);
      v7 += (16843009 * (((v9 >> 4) + v9) & 0xF0F0F0F)) >> 24;
      if ( v6 == -1 )
        break;
      v5 = -1;
    }
  }
  result = (uint16_t)*((uint32_t *)self + 7) - v7;
  *((uint16_t *)self + 19) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::recalcAabbExtents  (binary VA: 0x16a43d0)
// Original: hkpListShape::recalcAabbExtents
// ----------------------------------------------------------------------------
int * hkpListShape::recalcAabbExtents(hkpListShape::Self *self, hkAabb::Self *a2, int a3, float a4, float a5, float a6, float a7, float a8, float a9, float a10, float a11)
{
  int *result;
  int v12;
  uint32_t *v13;
  float v14; // xmm7_4
  float v15; // xmm5_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm4_4
  float v20; // xmm2_4
  float v21; // xmm0_4
  float v22; // xmm2_4
  float v23; // xmm1_4
  float v24; // xmm4_4
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int *retaddr;
  int *v37;
  float v38;

  (*(void (**)(uint32_t, void *, uint32_t, hkAabb::Self *, hkpListShape::Self *, int, int, void *, int, int, int, int, int, int, int, int))(***((uint32_t ***)self + 6) + 24))(
    **((uint32_t **)self + 6),
    &unk_1D12FD0,
    0,
    a2,
    self,
    v25,
    v26,
    &unk_1D12FD0,
    v27,
    v28,
    v29,
    v30,
    v31,
    v32,
    v33,
    v34);
  result = retaddr;
  v12 = 1;
  if ( retaddr[7] <= 1 )
  {
    v14 = *(float *)a2;
    v18 = *((float *)a2 + 4);
    v15 = *((float *)a2 + 1);
    v19 = *((float *)a2 + 5);
    v16 = *((float *)a2 + 2);
    v20 = *((float *)a2 + 6);
    v17 = *((float *)a2 + 3);
    v38 = *((float *)a2 + 7);
  }
  else
  {
    do
    {
      v37 = result;
      v13 = (uint32_t *)(result[6] + 16 * v12++);
      G4_VCALL<void>(*v13, 24, a3, 0, &a4);
      result = v37;
      v14 = fminf(*(float *)a2, a4);
      v15 = fminf(*((float *)a2 + 1), a5);
      v16 = fminf(*((float *)a2 + 2), a6);
      v17 = fminf(*((float *)a2 + 3), a7);
      v18 = fmaxf(*((float *)a2 + 4), a8);
      v19 = fmaxf(*((float *)a2 + 5), a9);
      v20 = fmaxf(*((float *)a2 + 6), a10);
      v21 = fmaxf(*((float *)a2 + 7), a11);
      *(float *)a2 = v14;
      *((float *)a2 + 1) = v15;
      *((float *)a2 + 2) = v16;
      *((float *)a2 + 3) = v17;
      *((float *)a2 + 4) = v18;
      *((float *)a2 + 5) = v19;
      *((float *)a2 + 6) = v20;
      *((float *)a2 + 7) = v21;
    }
    while ( v37[7] > v12 );
    v38 = v21;
  }
  *((float *)result + 18) = (float)(v20 + v16) * 0.5;
  *((float *)result + 19) = (float)(v17 + v38) * 0.5;
  *((float *)result + 16) = (float)(v18 + v14) * 0.5;
  *((float *)result + 17) = (float)(v19 + v15) * 0.5;
  v22 = (float)(*((float *)a2 + 6) - *((float *)a2 + 2)) * 0.5;
  v23 = (float)(*((float *)a2 + 7) - *((float *)a2 + 3)) * 0.5;
  v24 = (float)(*((float *)a2 + 4) - *(float *)a2) * 0.5;
  *((float *)result + 13) = (float)(*((float *)a2 + 5) - *((float *)a2 + 1)) * 0.5;
  *((float *)result + 14) = v22;
  *((float *)result + 15) = v23;
  *((float *)result + 12) = v24;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::recalcAabbExtents  (binary VA: 0x16a45e0)
// Original: hkpListShape::recalcAabbExtents
// ----------------------------------------------------------------------------
int * hkpListShape::recalcAabbExtents(hkpListShape::Self *self)
{
  typedef int _g4_t_v2;
  typedef float _g4_t_v3;
  typedef float _g4_t_v4[8];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (8u + sizeof(_g4_t_v2)) > _g4_s0 ? (8u + sizeof(_g4_t_v2)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v3)) > _g4_s1 ? (12u + sizeof(_g4_t_v3)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v4)) > _g4_s2 ? (16u + sizeof(_g4_t_v4)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v2 &v2 = *reinterpret_cast<_g4_t_v2 *>(_g4_sf + 8u);
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);

  return hkpListShape::recalcAabbExtents(self, (hkAabb::Self *)v4, v2, v3, v4[0], v4[1], v4[2], v4[3], v4[4], v4[5], v4[6]);
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::getAabb  (binary VA: 0x16a4610)
// Original: hkpListShape::getAabb
// ----------------------------------------------------------------------------
float * hkpListShape::getAabb(hkpListShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  hkpListShape::Self *v4;
  int v5;
  int v6;
  float *result;
  float v8; // xmm0_4
  uint32_t *v9;
  typedef hkpListShape::Self *_g4_t_v10;
  typedef float _g4_t_v11[12];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v4 = self;
  v5 = *((float *)self + 13) <= 0.0 ? 2 : 0;
  if ( *((float *)self + 14) <= 0.0 )
    v5 = *((float *)self + 13) > 0.0 ? 4 : 6;
  if ( *((float *)self + 15) <= 0.0 && (v5 | (*((float *)self + 12) <= 0.0) | 8) == 0xF )
  {
    hkpListShape::recalcAabbExtents(self);
    v4 = self;
  }
  v6 = 0;
  result = v11;
  *(float *)a4 = 0.5 * 3.40282e38f;
  *((float *)a4 + 1) = 0.5 * 3.40282e38f;
  *((float *)a4 + 2) = 0.5 * 3.40282e38f;
  *((float *)a4 + 3) = 0.5 * 3.40282e38f;
  v8 = -(float)(0.5 * 3.40282e38f);
  *((float *)a4 + 4) = v8;
  *((float *)a4 + 5) = v8;
  *((float *)a4 + 6) = v8;
  *((float *)a4 + 7) = v8;
  if ( *((int *)v4 + 7) > 0 )
  {
    do
    {
      v10 = v4;
      v9 = (uint32_t *)(*((uint32_t *)v4 + 6) + 16 * v6++);
      result = (float *)G4_VCALL<int>(*v9, 24, a2, LODWORD(a3), v11);
      v4 = v10;
      *(float *)a4 = fminf(*(float *)a4, v11[0]);
      *((float *)a4 + 1) = fminf(*((float *)a4 + 1), v11[1]);
      *((float *)a4 + 2) = fminf(*((float *)a4 + 2), v11[2]);
      *((float *)a4 + 3) = fminf(*((float *)a4 + 3), v11[3]);
      *((float *)a4 + 4) = fmaxf(*((float *)a4 + 4), v11[4]);
      *((float *)a4 + 5) = fmaxf(*((float *)a4 + 5), v11[5]);
      *((float *)a4 + 6) = fmaxf(*((float *)a4 + 6), v11[6]);
      *((float *)a4 + 7) = fmaxf(*((float *)a4 + 7), v11[7]);
    }
    while ( *((uint32_t *)v10 + 7) > v6 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::setShapes  (binary VA: 0x16a47c0)
// Original: hkpListShape::setShapes
// ----------------------------------------------------------------------------
int * hkpListShape::setShapes(int *a1, int a2, int a3, int a4, int a5)
{
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v13;
  int v14;
  int v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef uint32_t _g4_t_v19[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v16)) > _g4_s0 ? (0u + sizeof(_g4_t_v16)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v17)) > _g4_s1 ? (4u + sizeof(_g4_t_v17)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v18)) > _g4_s2 ? (8u + sizeof(_g4_t_v18)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v19)) > _g4_s3 ? (16u + sizeof(_g4_t_v19)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 0u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 4u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);

  v19[3] = (uint32_t)(uintptr_t)(&a1);
  v5 = a1;
  v6 = a3;
  v18 = a2;
  v17 = a4;
  v16 = a5;
  v7 = a1[8] & 0x3FFFFFFF;
  if ( a3 <= v7 )
  {
    a1[7] = a3;
    if ( v6 <= 0 )
      goto LABEL_8;
    v9 = 0;
    if ( v17 != 0 )
    {
      do
      {
LABEL_5:
        v10 = *(uint32_t *)(v18 + 4 * v9);
        if ( v10 != 0 )
        {
          v11 = 16 * v9;
          *(uint32_t *)(v5[6] + v11) = v10;
          *(uint32_t *)(v5[6] + v11 + 4) = *(uint32_t *)(v17 + 4 * v9);
          *(uint32_t *)(v5[6] + v11 + 12) = v6;
          *(uint16_t *)(v5[6] + v11 + 10) = 0;
          *(uint16_t *)(v5[6] + v11 + 8) = 0;
        }
        ++v9;
      }
      while ( v9 != v6 );
LABEL_8:
      if ( v16 != 1 )
        return hkpListShape::recalcAabbExtents((hkpListShape::Self *)v5);
LABEL_17:
      hkReferencedObject::addReferences((hkReferencedObject::Self *)v5[6], (const hkReferencedObject::Self *const *)v5[7], 16);
      return hkpListShape::recalcAabbExtents((hkpListShape::Self *)v5);
    }
  }
  else
  {
    v8 = 2 * v7;
    if ( v8 < a3 )
      v8 = a3;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v19, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a1 + 6, v8, 16);
    v9 = 0;
    v5[7] = v6;
    if ( v17 != 0 )
      goto LABEL_5;
  }
  v13 = 0;
  do
  {
    v14 = *(uint32_t *)(v18 + 4 * v13);
    if ( v14 != 0 )
    {
      v15 = 16 * v13;
      *(uint32_t *)(v5[6] + v15) = v14;
      *(uint32_t *)(v5[6] + v15 + 4) = 0;
      *(uint32_t *)(v5[6] + v15 + 12) = v6;
      *(uint16_t *)(v5[6] + v15 + 10) = 0;
      *(uint16_t *)(v5[6] + v15 + 8) = 0;
    }
    ++v13;
  }
  while ( v13 != v6 );
  if ( v16 == 1 )
    goto LABEL_17;
  return hkpListShape::recalcAabbExtents((hkpListShape::Self *)v5);
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::Construct  (binary VA: 0x16a4940)
// Original: hkpListShape::hkpListShape
// ----------------------------------------------------------------------------
int * hkpListShape::Construct(int a1, int a2, int a3, int a4)
{
  int *result;
  uint8_t v5[12];

  hkpShapeCollection::Construct(a1, 8, 0);
  *(uint32_t *)(a1 + 24) = 0;
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_2099FFC);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099F88);
  *(uint32_t *)(a1 + 28) = 0;
  *(uint32_t *)(a1 + 32) = 0x80000000;
  hkArrayUtil::reserve(
    (hkArrayUtil::Self *)v5,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    (int *)(a1 + 24),
    4,
    16);
  result = hkpListShape::setShapes((int *)a1, a2, a3, 0, a4);
  *(uint32_t *)(a1 + 80) = -1;
  *(uint32_t *)(a1 + 84) = -1;
  *(uint32_t *)(a1 + 88) = -1;
  *(uint32_t *)(a1 + 92) = -1;
  *(uint32_t *)(a1 + 96) = -1;
  *(uint32_t *)(a1 + 100) = -1;
  *(uint32_t *)(a1 + 104) = -1;
  *(uint32_t *)(a1 + 108) = -1;
  *(uint16_t *)(a1 + 38) = 0;
  *(uint16_t *)(a1 + 36) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShape::setCollisionFilterInfo  (binary VA: 0x16a4a40)
// Original: hkpListShape::setCollisionFilterInfo
// ----------------------------------------------------------------------------
unsigned int hkpListShape::setCollisionFilterInfo(hkpListShape::Self *self, unsigned int a2, unsigned int a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 6) + 16 * a2;
  *(uint32_t *)(result + 4) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::staticClass  (binary VA: 0x17686f0)
// Original: hkpListShapeBreakableMaterial::staticClass
// ----------------------------------------------------------------------------
void * hkpListShapeBreakableMaterial::staticClass()
{
  return &hkpListShapeBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::getClassType  (binary VA: 0x1784120)
// Original: hkpListShapeBreakableMaterial::getClassType
// ----------------------------------------------------------------------------
void * hkpListShapeBreakableMaterial::getClassType()
{
  return &hkpListShapeBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::setDefaultMapping  (binary VA: 0x1784140)
// Original: hkpListShapeBreakableMaterial::setDefaultMapping
// ----------------------------------------------------------------------------
int hkpListShapeBreakableMaterial::setDefaultMapping(hkpListShapeBreakableMaterial::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 3);
  LOBYTE(v1) = v1 & 0xF;
  result = v1 | 0x30;
  *((uint32_t *)self + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::getSubShapeMaterialIndex  (binary VA: 0x1784150)
// Original: hkpListShapeBreakableMaterial::getSubShapeMaterialIndex
// ----------------------------------------------------------------------------
int hkpListShapeBreakableMaterial::getSubShapeMaterialIndex(hkpListShapeBreakableMaterial::Self *self, const hkcdShape::Self **a2, unsigned int a3)
{
  const hkcdShape::Self *v3;

  v3 = (const hkcdShape::Self *)a2;
  if ( *((uint8_t *)a2 + 8) == 9 )
    v3 = a2[13];
  return *(uint16_t *)(*((uint32_t *)v3 + 6) + 16 * a3 + 8);
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::getShapeKeyMaterial  (binary VA: 0x1784170)
// Original: hkpListShapeBreakableMaterial::getShapeKeyMaterial
// ----------------------------------------------------------------------------
int hkpListShapeBreakableMaterial::getShapeKeyMaterial(hkpListShapeBreakableMaterial::Self *self, const hkcdShape::Self **a2, unsigned int a3)
{
  const hkcdShape::Self *v3;

  v3 = (const hkcdShape::Self *)a2;
  if ( *((uint8_t *)a2 + 8) == 9 )
    v3 = a2[13];
  return *(uint32_t *)(*((uint32_t *)self + 5) + 4 * *(int16_t *)(*((uint32_t *)v3 + 6) + 16 * a3 + 8));
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::getShapeKeysForSubShapes  (binary VA: 0x17841a0)
// Original: hkpListShapeBreakableMaterial::getShapeKeysForSubShapes
// ----------------------------------------------------------------------------
int hkpListShapeBreakableMaterial::getShapeKeysForSubShapes(hkpListShapeBreakableMaterial::Self *self, const hkcdShape::Self *a2, const unsigned int *a3, int a4, hkpBreakableMaterial::ShapeKeyCollector::Self *a5)
{
  return G4_VCALL<int>(a5, 12, a3, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::disableSubShapes  (binary VA: 0x17841d0)
// Original: hkpListShapeBreakableMaterial::disableSubShapes
// ----------------------------------------------------------------------------
int hkpListShapeBreakableMaterial::disableSubShapes(hkpListShapeBreakableMaterial::Self *self, hkpListShape::Self **a2, const int16_t *a3, int a4)
{
  hkpListShape::Self *v4;
  int result;
  int v6;
  uint16_t *v7;
  int v8;
  int v9;
  int v10;
  unsigned int v11;
  int v12;

  v4 = (hkpListShape::Self *)a2;
  if ( *((uint8_t *)a2 + 8) == 9 )
    v4 = a2[13];
  result = a4 - 1;
  v12 = a4 - 1;
  if ( a4 - 1 >= 0 )
  {
    do
    {
      v6 = *((uint32_t *)self + 8);
      v7 = (uint16_t *)(*(uint32_t *)(v6 + 8) + 4 * a3[v12]);
      v8 = *v7;
      result = v7[1];
      v9 = result - 1;
      v10 = *(uint32_t *)(v6 + 20) + 4 * v8;
      if ( result != 0 )
      {
        do
        {
          v11 = *(uint32_t *)(v10 + 4 * v9--);
          result = hkpListShape::disableChild(v4, v11);
        }
        while ( v9 != -1 );
      }
      --v12;
    }
    while ( v12 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::getSubShapeMaterialIndices  (binary VA: 0x1784280)
// Original: hkpListShapeBreakableMaterial::getSubShapeMaterialIndices
// ----------------------------------------------------------------------------
int hkpListShapeBreakableMaterial::getSubShapeMaterialIndices(int a1, int a2, uint32_t *a3, int *a4)
{
  uint32_t *v4;
  int *v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int result;
  int v11;
  int v12;
  int v13;
  int v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef uint32_t _g4_t_v18[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v15)) > _g4_s0 ? (0u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v16)) > _g4_s1 ? (4u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v17)) > _g4_s2 ? (8u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v18)) > _g4_s3 ? (12u + sizeof(_g4_t_v18)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 0u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 4u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 8u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);

  v18[3] = (uint32_t)(uintptr_t)(&a1);
  v17 = a2;
  v4 = a3;
  v5 = a4;
  if ( *(uint8_t *)(a2 + 8) == 9 )
    v17 = *(uint32_t *)(a2 + 52);
  v6 = a3[1];
  v16 = a4[1];
  v7 = a4[2] & 0x3FFFFFFF;
  v8 = v6 + v16;
  if ( v6 + v16 > v7 )
  {
    v9 = 2 * v7;
    v15 = a3[1];
    if ( v9 >= v8 )
      v8 = v9;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v18, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v8, 2);
    v6 = v15;
    v8 = v15 + v5[1];
  }
  v5[1] = v8;
  result = *v5;
  v11 = v6 - 1;
  v12 = 4 * (v6 - 1);
  v13 = *v5 + 2 * v16;
  if ( v11 >= 0 )
  {
    do
    {
      v14 = *(uint32_t *)(*v4 + v12);
      v12 -= 4;
      result = *(uint16_t *)(*(uint32_t *)(v17 + 24) + 16 * v14 + 8);
      *(uint16_t *)(v13 + 2 * v11--) = result;
    }
    while ( v11 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::Destroy  (binary VA: 0x1784370)
// Original: hkpListShapeBreakableMaterial::~hkpListShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpListShapeBreakableMaterial::Destroy(hkpListShapeBreakableMaterial::Self *self)
{
  hkpListShapeBreakableMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int v17;
  int v18;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v18 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v18;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
  v16 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v17 = 36;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v17 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v16, 12, v1, v17);
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::Destroy_ea17844d0  (binary VA: 0x17844d0)
// Original: hkpListShapeBreakableMaterial::~hkpListShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpListShapeBreakableMaterial::Destroy_ea17844d0(hkpListShapeBreakableMaterial::Self *self)
{
  hkpListShapeBreakableMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v16 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v16;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::Construct  (binary VA: 0x17845f0)
// Original: hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial
// ----------------------------------------------------------------------------
int hkpListShapeBreakableMaterial::Construct(uint32_t *a1, uint32_t *a2, int a3)
{
  int v3;
  int result;

  hkpBreakableMultiMaterial::Construct(a1, a2, a3);
  *a1 = ((uint32_t)(uintptr_t)&off_20A0AE8);
  v3 = a1[3];
  LOBYTE(v3) = v3 & 0xF;
  result = v3 | 0x30;
  a1[3] = result;
  return result;
}



// ============================================================================
// Address:   0x1784640 (size: 55 bytes)
// Symbol:    _ZN29hkpListShapeBreakableMaterialC1E24hkFinishLoadedObjectFlag
// Demangled: hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN29hkpListShapeBreakableMaterialC2E24hkFinishLoadedObjectFlag'
void (**hkpListShapeBreakableMaterial::Construct(
        uint32_t *a1))(hkpListShapeBreakableMaterial::Self * self)
{
  hkpBreakableMultiMaterial::Construct(a1);
  *a1 = ((uint32_t)(uintptr_t)&off_20A0AE8);
  return (void (**)(hkpListShapeBreakableMaterial::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A0AE8));
}
// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::Construct  (binary VA: 0x1784680)
// Original: hkpListShapeBreakableMaterial::hkpListShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpListShapeBreakableMaterial::Construct(hkpListShapeBreakableMaterial::Self *self, const hkpListShapeBreakableMaterial::Self *a2)
{
  hkpBreakableMultiMaterial::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0AE8);
}

// ----------------------------------------------------------------------------
// Function: hkpListShapeBreakableMaterial::duplicate  (binary VA: 0x17846c0)
// Original: hkpListShapeBreakableMaterial::duplicate
// ----------------------------------------------------------------------------
hkpListShapeBreakableMaterial::Self * hkpListShapeBreakableMaterial::duplicate(hkpListShapeBreakableMaterial::Self *self)
{
  int address;
  hkpListShapeBreakableMaterial::Self *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpListShapeBreakableMaterial::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                          *(uint32_t *)(*(uint32_t *)address + 44),
                                          36);
  hkpListShapeBreakableMaterial::Construct(v2, self);
  return v2;
}


