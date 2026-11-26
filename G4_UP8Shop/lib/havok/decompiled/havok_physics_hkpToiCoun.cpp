#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpToiCoun.h"

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::getProcessTag  (binary VA: 0x1834f80)
// Original: hkpToiCountViewer::getProcessTag
// ----------------------------------------------------------------------------
int hkpToiCountViewer::getProcessTag()
{
  return hkpToiCountViewer::s_tag;
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::init  (binary VA: 0x1834fb0)
// Original: hkpToiCountViewer::init
// ----------------------------------------------------------------------------
int hkpToiCountViewer::init(hkpToiCountViewer::Self *self)
{
  int result;
  int v2;
  int v3;

  result = *((uint32_t *)self + 9);
  if ( result != 0 && *(int *)(result + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(uint32_t *)(*(uint32_t *)(result + 108) + 4 * v2++);
      G4_VCALL<void>(self, 36, v3);
      result = *((uint32_t *)self + 9);
    }
    while ( result != 0 && v2 < *(uint32_t *)(result + 112) );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::entityRemovedCallback  (binary VA: 0x1835010)
// Original: hkpToiCountViewer::entityRemovedCallback
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkpToiCountViewer::entityRemovedCallback(hkpToiCountViewer::Self *self, hkpEntity::Self *a2)
{
  uint8_t v3[28];

  hkpEntity::removeEntityListener((int)(uintptr_t)(a2), (int)(uintptr_t)(self) + 48);
  return hkMapBase_unsigned_long_unsigned_l_393416::remove(
           (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v3,
           (hkpToiCountViewer::Self *)((char *)self + 52),
           (unsigned int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::entityDeletedCallback  (binary VA: 0x1835070)
// Original: hkpToiCountViewer::entityDeletedCallback
// ----------------------------------------------------------------------------
hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> * hkpToiCountViewer::entityDeletedCallback(hkpToiCountViewer::Self *self, hkpEntity::Self *a2)
{
  uint8_t v3[28];

  hkpEntity::removeEntityListener((int)(uintptr_t)(a2), (int)(uintptr_t)(self) + 48);
  return hkMapBase_unsigned_long_unsigned_l_393416::remove(
           (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v3,
           (hkpToiCountViewer::Self *)((char *)self + 52),
           (unsigned int)(uintptr_t)(a2));
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::worldAddedCallback  (binary VA: 0x18350d0)
// Original: hkpToiCountViewer::worldAddedCallback
// ----------------------------------------------------------------------------
int hkpToiCountViewer::worldAddedCallback(hkpToiCountViewer::Self *self, hkpWorld::Self *a2)
{
  hkpWorld::addWorldPostSimulationListener(a2, (hkpToiCountViewer::Self *)((char *)self + 44));
  return hkpWorld::addContactListener(a2, (int)(uintptr_t)(self) + 40);
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::worldRemovedCallback  (binary VA: 0x1835130)
// Original: hkpToiCountViewer::worldRemovedCallback
// ----------------------------------------------------------------------------
hkpWorld::Self * hkpToiCountViewer::worldRemovedCallback(hkpToiCountViewer::Self *self, hkpWorld::Self *a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v6;
  int i;
  int *v8;
  int v9;
  typedef int _g4_t_v10;
  typedef hkpToiCountViewer::Self *_g4_t_v11;
  typedef hkpWorld::Self *_g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef uint8_t _g4_t_v15[4];
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef hkpToiCountViewer::Self **_g4_t_v19;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v10)) > _g4_s0 ? (8u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v12)) > _g4_s2 ? (28u + sizeof(_g4_t_v12)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v13)) > _g4_s3 ? (32u + sizeof(_g4_t_v13)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v14)) > _g4_s4 ? (36u + sizeof(_g4_t_v14)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v15)) > _g4_s5 ? (40u + sizeof(_g4_t_v15)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v16)) > _g4_s6 ? (44u + sizeof(_g4_t_v16)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v17)) > _g4_s7 ? (48u + sizeof(_g4_t_v17)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v18)) > _g4_s8 ? (52u + sizeof(_g4_t_v18)) : _g4_s8,
    _g4_s10 = (68u + sizeof(_g4_t_v19)) > _g4_s9 ? (68u + sizeof(_g4_t_v19)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 8u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 40u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 68u);

  v19 = &self;
  v11 = self;
  v12 = a2;
  v16 = 0;
  v17 = 0;
  v18 = 0x80000000;
  v2 = *((uint32_t **)self + 13);
  v3 = *((uint32_t *)self + 15);
  if ( v3 >= 0 )
  {
    v4 = 0;
    if ( *v2 == -1 )
    {
      while ( v3 >= ++v4 )
      {
        if ( v2[2 * v4] != -1 )
        {
          v9 = v4;
          goto LABEL_10;
        }
      }
    }
    else
    {
      v9 = 0;
LABEL_10:
      v6 = v2[2 * v9];
      v13 = 0;
      v14 = 0;
      if ( *(hkpWorld::Self **)(v6 + 8) == a2 )
      {
LABEL_19:
        if ( (v18 & 0x3FFFFFFF) == v13 )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v16,
            4,
            v10);
          v13 = v17;
        }
        *(uint32_t *)(v16 + 4 * v13) = v6;
        ++v17;
        v2 = *((uint32_t **)v11 + 13);
        v3 = *((uint32_t *)v11 + 15);
        v14 = v17;
      }
      while ( ++v4 <= v3 )
      {
        if ( v2[2 * v4] != -1 )
        {
          v13 = v14;
          v6 = v2[2 * v4];
          if ( *(hkpWorld::Self **)(v6 + 8) == v12 )
            goto LABEL_19;
        }
      }
      if ( v14 > 0 )
      {
        for ( i = 0; i != v14; ++i )
        {
          v8 = (int *)(v16 + 4 * i);
          hkpEntity::removeEntityListener(*v8, (int)(uintptr_t)(v11) + 48);
          hkMapBase_unsigned_long_unsigned_l_393416::remove(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v15,
            (hkpToiCountViewer::Self *)((char *)v11 + 52),
            *v8);
        }
      }
    }
  }
  v17 = 0;
  if ( v18 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v16,
      4 * v18);
  hkpWorld::removeContactListener(v12, (int)(uintptr_t)(v11) + 40);
  return hkpWorld::removeWorldPostSimulationListener(v12, (hkpToiCountViewer::Self *)((char *)v11 + 44));
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::Destroy  (binary VA: 0x1835320)
// Original: hkpToiCountViewer::~hkpToiCountViewer
// ----------------------------------------------------------------------------
void hkpToiCountViewer::Destroy(hkpToiCountViewer::Self *self)
{
  int v1;
  int v2;
  hkMemoryAllocator::Self *v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A25A8);
  *((uint32_t *)self + 2) = ((uint32_t)(uintptr_t)&off_20A25F0);
  *((uint32_t *)self + 8) = ((uint32_t)(uintptr_t)&off_20A261C);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_20A2634);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_20A265C);
  *((uint32_t *)self + 12) = ((uint32_t)(uintptr_t)&off_20A2674);
  v1 = *((uint32_t *)self + 9);
  if ( v1 != 0 && *(int *)(v1 + 112) > 0 )
  {
    v2 = 0;
    do
    {
      v3 = *(hkMemoryAllocator::Self **)(*(uint32_t *)(v1 + 108) + 4 * v2++);
      hkpToiCountViewer::worldRemovedCallback(self, (hkpWorld::Self *)(v3));
      v1 = *((uint32_t *)self + 9);
    }
    while ( v1 != 0 && v2 < *(uint32_t *)(v1 + 112) );
  }
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkpToiCountViewer::Self *)((char *)self + 52),
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  *((uint32_t *)self + 12) = (uint32_t)(uintptr_t)(&off_2054DE8);
  *((uint32_t *)self + 11) = ((uint32_t)(uintptr_t)&off_209E868);
  *((uint32_t *)self + 10) = (uint32_t)(uintptr_t)(&off_2054FC8);
  hkpWorldViewerBase::Destroy(self);
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::contactPointCallback  (binary VA: 0x1835450)
// Original: hkpToiCountViewer::contactPointCallback
// ----------------------------------------------------------------------------
int hkpToiCountViewer::contactPointCallback(int a1, int a2)
{
  int v2;
  int result;
  unsigned int v4;
  signed int Key;
  int v6;
  int v7;
  hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *v8;

  v2 = 0;
  v8 = (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 52);
  result = *(uint32_t *)(a2 + 16);
  if ( result <= 0 )
  {
    do
    {
      v4 = *(uint32_t *)(a2 + 4 * v2 + 4);
      Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(v8, v4);
      if ( Key > *(uint32_t *)(a1 + 60) )
      {
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          v8,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v4,
          (unsigned int)(uintptr_t)(((uint8_t *)(uintptr_t)0x1000001u)));
        result = hkpEntity::addEntityListener(v4, a1 + 48);
      }
      else
      {
        v6 = *(uint32_t *)(a1 + 52) + 8 * Key;
        result = -16777216;
        v7 = 0xFFFFFF;
        if ( (unsigned int)(HIBYTE(*(uint32_t *)(v6 + 4)) + 1) <= 0xFE )
          result = (HIBYTE(*(uint32_t *)(v6 + 4)) + 1) << 24;
        if ( (*(uint32_t *)(v6 + 4) & 0xFFFFFFu) + 1 < 0xFFFFFF )
          v7 = (*(uint32_t *)(v6 + 4) & 0xFFFFFF) + 1;
        *(uint32_t *)(v6 + 4) = result | v7;
      }
      ++v2;
    }
    while ( v2 != 2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::Destroy_ea1835540  (binary VA: 0x1835540)
// Original: hkpToiCountViewer::~hkpToiCountViewer
// ----------------------------------------------------------------------------
void hkpToiCountViewer::Destroy_ea1835540(hkpToiCountViewer::Self *self)
{
  int v1;
  int v2;

  hkpToiCountViewer::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}



// ============================================================================
// Address:   0x18355f0 (size: 116 bytes)
// Symbol:    _ZN17hkpToiCountViewerC2ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE
// Demangled: hkpToiCountViewer::hkpToiCountViewer(hkArray<hkProcessContext *,hkContainerHeapAllocator> const&)
// ============================================================================
// Alternative name is '_ZN17hkpToiCountViewerC1ERK7hkArrayIP16hkProcessContext24hkContainerHeapAllocatorE'
void (**hkpToiCountViewer::hkpToiCountViewer(uint32_t *a1, int a2))(hkpToiCountViewer::Self * self)
{
  hkpWorldViewerBase::Construct(a1, a2);
  a1[13] = 0;
  a1[14] = 0;
  *a1 = ((uint32_t)(uintptr_t)&off_20A25A8);
  a1[15] = -1;
  a1[2] = ((uint32_t)(uintptr_t)&off_20A25F0);
  a1[8] = ((uint32_t)(uintptr_t)&off_20A261C);
  a1[10] = (uint32_t)(uintptr_t)(&off_20A2634);
  a1[11] = ((uint32_t)(uintptr_t)&off_20A265C);
  a1[12] = ((uint32_t)(uintptr_t)&off_20A2674);
  return (void (**)(hkpToiCountViewer::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A2674));
}
// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::create  (binary VA: 0x1835670)
// Original: hkpToiCountViewer::create
// ----------------------------------------------------------------------------
uint32_t * hkpToiCountViewer::create(int a1)
{
  int address;
  uint32_t *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   64);
  hkpToiCountViewer::hkpToiCountViewer(v2, a1);
  if ( v2 != nullptr )
    return v2 + 2;
  else
    return nullptr;
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::registerViewer  (binary VA: 0x18356d0)
// Original: hkpToiCountViewer::registerViewer
// ----------------------------------------------------------------------------
int hkpToiCountViewer::registerViewer()
{
  int result;

  result = hkProcessFactory::registerProcess(
             hkSingleton<hkProcessFactory::Self>::s_instance,
             "TOI counter",
             hkpToiCountViewer::create);
  hkpToiCountViewer::s_tag = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::reset  (binary VA: 0x1835720)
// Original: hkpToiCountViewer::reset
// ----------------------------------------------------------------------------
int hkpToiCountViewer::reset(hkpToiCountViewer::Self *self)
{
  int v1;
  uint32_t *v2;
  int v3;
  int v5;

  v1 = *((uint32_t *)self + 15);
  v2 = *((uint32_t **)self + 13);
  if ( v1 >= 0 )
  {
    v3 = 0;
    if ( *v2 == -1 )
    {
      while ( v1 >= ++v3 )
      {
        if ( v2[2 * v3] != -1 )
        {
          v5 = v3;
          goto LABEL_8;
        }
      }
    }
    else
    {
      v5 = 0;
LABEL_8:
      hkpEntity::removeEntityListener(v2[2 * v5], (int)(uintptr_t)(self) + 48);
      v2 = *((uint32_t **)self + 13);
      while ( *((uint32_t *)self + 15) >= ++v3 )
      {
        if ( v2[2 * v3] != -1 )
        {
          v5 = v3;
          goto LABEL_8;
        }
      }
    }
  }
  return hkMapBase_unsigned_long_unsigned_l_393416::clear((hkpToiCountViewer::Self *)((char *)self + 52));
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::getDisplayPositionFromGravityVector  (binary VA: 0x18357c0)
// Original: hkpToiCountViewer::getDisplayPositionFromGravityVector
// ----------------------------------------------------------------------------
int hkpToiCountViewer::getDisplayPositionFromGravityVector(hkpToiCountViewer::Self *self)
{
  __m128 v1;
  __m128 v2;
  float v3; // xmm3_4
  __m128 v4;
  __m128 v5;
  int v6;
  bool v7;
  __m128 v8;
  int v9;
  int32_t v10; // xmm3_4
  float v11; // xmm1_4

g4_m128_raw(v1) = *((unsigned int *)self + 1);
  v2 = _mm_and_ps(g4_m128_u32(*(unsigned int *)self), g4_m128_u32(0x7FFFFFFFu));
  v3 = *((float *)self + 2);
  v4 = _mm_and_ps(v1, g4_m128_u32(0x7FFFFFFFu));
g4_m128_lane<int32_t>(v5, 0) = fabs(v3);
  v6 = 1;
  if (g4_m128_lane<float>(v4, 0) <g4_m128_lane<float>(v2, 0) )
  {
g4_m128_raw(v1) = *(unsigned int *)self;
    v4 = v2;
    v6 = 0;
  }
  v7 =g4_m128_lane<float>(v5, 0) <g4_m128_lane<float>(v4, 0);
  v8 = _mm_cmple_ss(v4, v5);
  v9 = 2;
  v10 = LODWORD(v3) &g4_m128_lane<int32_t>(v8, 0);
  v11 =g4_m128_lane<float>(_mm_andnot_ps(v8, v1), 0);
  if ( v7 )
    v9 = v6;
  return v9 + 3 * (COERCE_FLOAT(LODWORD(v11) | v10) > 0.0);
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::displayTextAtBody  (binary VA: 0x1835840)
// Original: hkpToiCountViewer::displayTextAtBody
// ----------------------------------------------------------------------------
int hkpToiCountViewer::displayTextAtBody(int a1, int a2, int a3, int a4, int a5, int a6, int a7, char a8)
{
  int v8;
  int v9;
  float v10; // xmm2_4
  float v11; // xmm3_4
  float v12; // xmm5_4
  float v13; // xmm0_4
  float *v14;
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm0_4
  int v18;
  int result;
  int v20;
  void *savedregs;
  void *retaddr;
  typedef int _g4_t_v21;
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef char _g4_t_v25;
  typedef float _g4_t_v26;
  typedef int _g4_t_v27;
  typedef void *_g4_t_v28;
  typedef int _g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef float _g4_t_v32;
  typedef int _g4_t_v33;
  typedef float _g4_t_v34;
  typedef int _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44[4];
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef int *_g4_t_v49;
  typedef uint32_t *_g4_t_v50;
  typedef float *_g4_t_v51;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (0u + sizeof(_g4_t_v21)) > _g4_s0 ? (0u + sizeof(_g4_t_v21)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v22)) > _g4_s1 ? (4u + sizeof(_g4_t_v22)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v23)) > _g4_s2 ? (8u + sizeof(_g4_t_v23)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v24)) > _g4_s3 ? (12u + sizeof(_g4_t_v24)) : _g4_s3,
    _g4_s5 = (15u + sizeof(_g4_t_v25)) > _g4_s4 ? (15u + sizeof(_g4_t_v25)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v26)) > _g4_s5 ? (16u + sizeof(_g4_t_v26)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v27)) > _g4_s6 ? (20u + sizeof(_g4_t_v27)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v28)) > _g4_s7 ? (24u + sizeof(_g4_t_v28)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v29)) > _g4_s8 ? (28u + sizeof(_g4_t_v29)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v30)) > _g4_s9 ? (32u + sizeof(_g4_t_v30)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v31)) > _g4_s10 ? (36u + sizeof(_g4_t_v31)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v32)) > _g4_s11 ? (36u + sizeof(_g4_t_v32)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v33)) > _g4_s12 ? (40u + sizeof(_g4_t_v33)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v34)) > _g4_s13 ? (40u + sizeof(_g4_t_v34)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v35)) > _g4_s14 ? (44u + sizeof(_g4_t_v35)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v36)) > _g4_s15 ? (48u + sizeof(_g4_t_v36)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v37)) > _g4_s16 ? (52u + sizeof(_g4_t_v37)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v38)) > _g4_s17 ? (56u + sizeof(_g4_t_v38)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v39)) > _g4_s18 ? (60u + sizeof(_g4_t_v39)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v40)) > _g4_s19 ? (64u + sizeof(_g4_t_v40)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v41)) > _g4_s20 ? (68u + sizeof(_g4_t_v41)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v42)) > _g4_s21 ? (72u + sizeof(_g4_t_v42)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v43)) > _g4_s22 ? (76u + sizeof(_g4_t_v43)) : _g4_s22,
    _g4_s24 = (80u + sizeof(_g4_t_v44)) > _g4_s23 ? (80u + sizeof(_g4_t_v44)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v45)) > _g4_s24 ? (96u + sizeof(_g4_t_v45)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v46)) > _g4_s25 ? (100u + sizeof(_g4_t_v46)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v47)) > _g4_s26 ? (104u + sizeof(_g4_t_v47)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v48)) > _g4_s27 ? (108u + sizeof(_g4_t_v48)) : _g4_s27,
    _g4_s29 = (120u + sizeof(_g4_t_v49)) > _g4_s28 ? (120u + sizeof(_g4_t_v49)) : _g4_s28,
    _g4_s30 = (124u + sizeof(_g4_t_v50)) > _g4_s29 ? (124u + sizeof(_g4_t_v50)) : _g4_s29,
    _g4_s31 = (128u + sizeof(_g4_t_v51)) > _g4_s30 ? (128u + sizeof(_g4_t_v51)) : _g4_s30
  };
  alignas(16) uint8_t _g4_sf[_g4_s31];
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 0u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 15u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 28u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 32u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 36u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 40u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 40u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 44u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 48u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 52u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 56u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 60u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 64u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 68u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 72u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 76u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 80u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 96u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 100u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 104u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 108u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 120u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 124u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 128u);

  v49 = &a1;
  v8 = a3;
  HIBYTE(v24) = a8;
  v9 = a4;
  (*(void (**)(uint32_t, int, uint32_t, float *, int, int, int, int, int, int, int, int, int, int, int, int, float, float, float, float, float, float, float, float))(**(uint32_t **)(a3 + 16) + 24))(
    *(uint32_t *)(a3 + 16),
    a3 + 240,
    0,
    v44,
    v21,
    v22,
    v23,
    v24,
    a7,
    a5,
    a6,
    a2,
    a1,
    v31,
    v33,
    v35,
    COERCE_FLOAT(LODWORD(v36)),
    COERCE_FLOAT(LODWORD(v37)),
    COERCE_FLOAT(LODWORD(v38)),
    COERCE_FLOAT(LODWORD(v39)),
    COERCE_FLOAT(LODWORD(v40)),
    COERCE_FLOAT(LODWORD(v41)),
    COERCE_FLOAT(LODWORD(v42)),
    COERCE_FLOAT(LODWORD(v43)));
  v10 = (float)(v44[1] + v46) * 0.5;
  v11 = (float)(v45 + v44[0]) * 0.5;
  v12 = (float)(v47 + v44[2]) * 0.5;
  v13 = 1.0 - (float)((float)(v9 / 3) + (float)(v9 / 3));
  v14 = (float *)((char *)&g_vectorfConstants + 16 * (v9 % 3) + 464);
  v15 = *v14 * v13;
  v34 = v14[1] * v13;
  v16 = v14[2] * v13;
  v32 = v13 * v14[3];
  v17 = fabs(
          (float)((float)((float)(v45 - v11) * v15) + (float)((float)(v46 - v10) * v34))
        + (float)((float)(v47 - v12) * v16));
  v40 = (float)(v15 * v17) + v11;
  v41 = (float)(v34 * v17) + v10;
  v42 = (float)(v16 * v17) + v12;
  v43 = (float)((float)(v48 + v44[3]) * 0.5) + (float)(v17 * v32);
  v37 = v41 + (float)(v34 * v26);
  v36 = v40 + (float)(v15 * v26);
  v38 = v42 + (float)(v16 * v26);
  v39 = v43 + (float)(v32 * v26);
  v18 = *v30;
  a1 = v8 + 16;
  a2 = v29;
  retaddr = v28;
  (*(void (**)(int *, uint32_t *, int, float *))(v18 + 84))(&v35, v30, v27, &v36);
  result = v8 + 16;
  if ( v25 != 0 )
  {
    v20 = *v30;
    retaddr = (void *)(v8 + 16);
    a1 = v29;
    savedregs = v28;
    v51 = &v40;
    v50 = v30;
    return (*(int (**)(int *))(v20 + 72))(&v35);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::displayCountForBody  (binary VA: 0x1835ab0)
// Original: hkpToiCountViewer::displayCountForBody
// ----------------------------------------------------------------------------
signed int hkpToiCountViewer::displayCountForBody(int *a1, unsigned int a2, int a3)
{
  signed int result;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef uint32_t *_g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef uint32_t _g4_t_v20[36];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v8)) > _g4_s0 ? (12u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v9)) > _g4_s1 ? (16u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v10)) > _g4_s2 ? (20u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v11)) > _g4_s3 ? (24u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v12)) > _g4_s4 ? (28u + sizeof(_g4_t_v12)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v13)) > _g4_s5 ? (32u + sizeof(_g4_t_v13)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v14)) > _g4_s6 ? (36u + sizeof(_g4_t_v14)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v15)) > _g4_s7 ? (44u + sizeof(_g4_t_v15)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v16)) > _g4_s8 ? (44u + sizeof(_g4_t_v16)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v17)) > _g4_s9 ? (48u + sizeof(_g4_t_v17)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v18)) > _g4_s10 ? (52u + sizeof(_g4_t_v18)) : _g4_s10,
    _g4_s12 = (56u + sizeof(_g4_t_v19)) > _g4_s11 ? (56u + sizeof(_g4_t_v19)) : _g4_s11,
    _g4_s13 = (60u + sizeof(_g4_t_v20)) > _g4_s12 ? (60u + sizeof(_g4_t_v20)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 20u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 24u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 28u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 32u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 36u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 44u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 44u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 48u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 52u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 56u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 60u);

  result = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
             (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)(a1 + 13),
             a2);
  if ( result <= a1[15] )
  {
    v4 = 8 * result;
    v5 = a1[13];
    v17 = v20;
    v6 = *(uint32_t *)(v5 + v4 + 4);
    v19 = -2147483520;
    v18 = 1;
    LOBYTE(v20[0]) = 0;
    if ( HIBYTE(v6) != 0 )
    {
      v14 = v6 & 0xFFFFFF;
      hkStringBuf::printf((hkStringBuf::Self *)&v17, "%d(%d)", v6 & 0xFFFFFF, HIBYTE(v6));
    }
    else
    {
      v15 = v6;
      hkStringBuf::printf((hkStringBuf::Self *)&v17, "%d", v6);
      v14 = v15;
    }
    v16 = (int)(uintptr_t)(v17);
    v7 = G4_VCALL<int>(a1, 44);
    hkpToiCountViewer::displayTextAtBody(a1[6], v7, a2, a3, v16, -8388608, 1036831949, 1);
    *(uint32_t *)(a1[13] + v4 + 4) = v14;
    result = v19;
    v18 = 0;
    if ( v19 >= 0 )
      return (*(int (**)(uint32_t *, uint32_t *, int, int, int, int, int, int, int, int, int, int, uint32_t *, int, int, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t, uint32_t))(hkContainerTempAllocator::s_alloc[0] + 20))(
               (uint32_t *)(hkContainerTempAllocator::s_alloc),
               v17,
               v19 & 0x3FFFFFFF,
               v8,
               v9,
               v10,
               v11,
               v12,
               v13,
               v14,
               -8388608,
               v16,
               v17,
               v18,
               v19,
               v20[0],
               v20[1],
               v20[2],
               v20[3],
               v20[4],
               v20[5],
               v20[6],
               v20[7],
               v20[8],
               v20[9],
               v20[10],
               v20[11],
               v20[12],
               v20[13],
               v20[14],
               v20[15],
               v20[16],
               v20[17],
               v20[18],
               v20[19],
               v20[20],
               v20[21],
               v20[22],
               v20[23],
               v20[24],
               v20[25],
               v20[26],
               v20[27],
               v20[28],
               v20[29],
               v20[30],
               v20[31],
               v20[32]);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpToiCountViewer::postSimulationCallback  (binary VA: 0x1835c10)
// Original: hkpToiCountViewer::postSimulationCallback
// ----------------------------------------------------------------------------
signed int hkpToiCountViewer::postSimulationCallback(hkpToiCountViewer::Self *self, hkpWorld::Self *a2)
{
  int DisplayPositionFromGravityVector;
  int v3;
  int v4;
  int v5;
  int v6;
  signed int result;
  signed int v8;
  unsigned int v9;
  unsigned int v10;
  int v11;

  DisplayPositionFromGravityVector = hkpToiCountViewer::getDisplayPositionFromGravityVector((hkpWorld::Self *)((char *)a2 + 16));
  v11 = 0;
  v3 = *((uint32_t *)a2 + 11);
  if ( v3 > 0 )
  {
    do
    {
      v4 = *(uint32_t *)(*((uint32_t *)a2 + 10) + 4 * v11);
      if ( *(int *)(v4 + 80) > 0 )
      {
        v5 = 0;
        do
        {
          v9 = *(uint32_t *)(*(uint32_t *)(v4 + 76) + 4 * v5++);
          hkpToiCountViewer::displayCountForBody((int *)self, v9, DisplayPositionFromGravityVector);
        }
        while ( *(uint32_t *)(v4 + 80) > v5 );
        v3 = *((uint32_t *)a2 + 11);
      }
      ++v11;
    }
    while ( v11 < v3 );
  }
  v6 = 0;
  result = *((uint32_t *)a2 + 8);
  v8 = result;
  if ( *(int *)(result + 80) > 0 )
  {
    do
    {
      v10 = *(uint32_t *)(*(uint32_t *)(v8 + 76) + 4 * v6++);
      result = hkpToiCountViewer::displayCountForBody((int *)self, v10, DisplayPositionFromGravityVector);
    }
    while ( *(uint32_t *)(v8 + 80) > v6 );
  }
  return result;
}


