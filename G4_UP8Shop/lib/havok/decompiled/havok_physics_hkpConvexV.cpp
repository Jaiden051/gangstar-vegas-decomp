#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpConvexV.h"

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::staticClass  (binary VA: 0x1693870)
// Original: hkpConvexVerticesShape::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexVerticesShape::staticClass()
{
  return &hkpConvexVerticesShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivity::staticClass  (binary VA: 0x169eaf0)
// Original: hkpConvexVerticesConnectivity::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexVerticesConnectivity::staticClass()
{
  return &hkpConvexVerticesConnectivityClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::createGeometry  (binary VA: 0x16b7460)
// Original: hkpConvexVerticesConnectivityUtil::createGeometry
// ----------------------------------------------------------------------------
uint32_t * hkpConvexVerticesConnectivityUtil::createGeometry(hkpConvexVerticesConnectivityUtil::Self *self, const hkpConvexVerticesShape::Self *a2)
{
  int address;
  uint32_t *v3;
  uint32_t *v4;
  uint32_t *v5;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10;
  int v11;
  int v12;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  unsigned int v18;
  int v19;
  int v20;
  int v21;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v3 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   32);
  v3[1] = -65535;
  v14 = v3;
  *v3 = ((uint32_t)(uintptr_t)&off_20586B8);
  v3[2] = 0;
  v3[3] = 0;
  v3[4] = 0x80000000;
  v3[5] = 0;
  v3[6] = 0;
  v3[7] = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(self, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)(v3 + 2));
  v17 = 0;
  v20 = 0;
  v4 = v14;
  v21 = *((uint32_t *)a2 + 6);
  if ( v21 > 0 )
  {
    v5 = v14;
    do
    {
      v18 = *(uint8_t *)(*((uint32_t *)a2 + 5) + v17);
      v6 = *((uint32_t *)a2 + 2);
      v15 = *(uint16_t *)(v6 + 2 * v20);
      if ( v18 > 2 )
      {
        v7 = v5[6];
        v16 = 2 * *(uint8_t *)(*((uint32_t *)a2 + 5) + v17) - 4;
        v8 = 0;
        while ( 1 )
        {
          v10 = 2 * v20 + v8 + v6;
          v11 = *(uint16_t *)(v10 + 4);
          v12 = *(uint16_t *)(v10 + 2);
          if ( (v5[7] & 0x3FFFFFFF) == v7 )
          {
            v19 = *(uint16_t *)(v10 + 2);
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v5 + 5),
              16,
              v15);
            v7 = v5[6];
            v12 = v19;
          }
          v9 = (int *)(v5[5] + 16 * v7);
          v8 += 2;
          *v9 = v15;
          v9[1] = v12;
          v9[2] = v11;
          v9[3] = -1;
          v7 = v5[6] + 1;
          v5[6] = v7;
          if ( v8 == v16 )
            break;
          v6 = *((uint32_t *)a2 + 2);
        }
      }
      ++v17;
      v20 += v18;
    }
    while ( v17 != v21 );
    return v5;
  }
  return v4;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::createGeometry  (binary VA: 0x16b7610)
// Original: hkpConvexVerticesConnectivityUtil::createGeometry
// ----------------------------------------------------------------------------
uint32_t * hkpConvexVerticesConnectivityUtil::createGeometry(hkpConvexVerticesConnectivityUtil::Self *self, const hkpConvexVerticesShape::Self *a2, const hkpConvexVerticesConnectivity::Self *a3)
{
  int address;
  uint32_t *v4;
  uint32_t *v5;
  int i;
  float *v7;
  float v8; // xmm5_4
  float v9; // xmm4_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm6_4
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int *v18;
  int v19;
  int v20;
  int v21;
  uint32_t *v23;
  int v24;
  int v25;
  int v26;
  unsigned int v27;
  int v28;
  int v29;
  int v30;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v4 = (uint32_t *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                   *(uint32_t *)(*(uint32_t *)address + 44),
                   32);
  v4[1] = -65535;
  v23 = v4;
  *v4 = ((uint32_t)(uintptr_t)&off_20586B8);
  v4[2] = 0;
  v4[3] = 0;
  v4[4] = 0x80000000;
  v4[5] = 0;
  v4[6] = 0;
  v4[7] = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(self, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)(v4 + 2));
  v5 = v23;
  for ( i = 0; v23[3] > i; v7[3] = (float)(v12 + v13) + *((float *)a3 + 15) )
  {
    v7 = (float *)(v23[2] + 16 * i++);
    v8 = v7[1];
    v9 = v7[2];
    v10 = (float)((float)(*((float *)a3 + 1) * *v7) + (float)(*((float *)a3 + 5) * v8))
        + (float)(*((float *)a3 + 9) * v9);
    v11 = (float)((float)(*((float *)a3 + 2) * *v7) + (float)(*((float *)a3 + 6) * v8))
        + (float)(*((float *)a3 + 10) * v9);
    v12 = (float)(*((float *)a3 + 3) * *v7) + (float)(*((float *)a3 + 7) * v8);
    v13 = *((float *)a3 + 11) * v9;
    *v7 = (float)((float)((float)(*v7 * *(float *)a3) + (float)(v8 * *((float *)a3 + 4)))
                + (float)(v9 * *((float *)a3 + 8)))
        + *((float *)a3 + 12);
    v7[1] = v10 + *((float *)a3 + 13);
    v7[2] = v11 + *((float *)a3 + 14);
  }
  v26 = 0;
  v29 = 0;
  v14 = v23;
  v30 = *((uint32_t *)a2 + 6);
  if ( v30 > 0 )
  {
    do
    {
      v27 = *(uint8_t *)(*((uint32_t *)a2 + 5) + v26);
      v15 = *((uint32_t *)a2 + 2);
      v24 = *(uint16_t *)(v15 + 2 * v29);
      if ( v27 > 2 )
      {
        v16 = v14[6];
        v17 = 0;
        v25 = 2 * *(uint8_t *)(*((uint32_t *)a2 + 5) + v26) - 4;
        while ( 1 )
        {
          v19 = 2 * v29 + v17 + v15;
          v20 = *(uint16_t *)(v19 + 4);
          v21 = *(uint16_t *)(v19 + 2);
          if ( (v14[7] & 0x3FFFFFFF) == v16 )
          {
            v28 = *(uint16_t *)(v19 + 2);
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v14 + 5),
              16,
              v24);
            v16 = v14[6];
            v21 = v28;
          }
          v18 = (int *)(v14[5] + 16 * v16);
          v17 += 2;
          *v18 = v24;
          v18[1] = v21;
          v18[2] = v20;
          v18[3] = -1;
          v16 = v14[6] + 1;
          v14[6] = v16;
          if ( v17 == v25 )
            break;
          v15 = *((uint32_t *)a2 + 2);
        }
      }
      ++v26;
      v29 += v27;
    }
    while ( v26 != v30 );
    return v14;
  }
  return v5;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::findConnectivity  (binary VA: 0x16b7890)
// Original: hkpConvexVerticesConnectivityUtil::findConnectivity
// ----------------------------------------------------------------------------
uint32_t * hkpConvexVerticesConnectivityUtil::findConnectivity(hkpConvexVerticesConnectivityUtil::Self *self)
{
  uint32_t *Connectivity;
  typedef const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_PlaneEquations;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef int _g4_t_v9;
  typedef uint8_t _g4_t_v10[4];
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (8u + sizeof(_g4_t_PlaneEquations)) > _g4_s0 ? (8u + sizeof(_g4_t_PlaneEquations)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v6)) > _g4_s3 ? (24u + sizeof(_g4_t_v6)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v7)) > _g4_s4 ? (32u + sizeof(_g4_t_v7)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v8)) > _g4_s5 ? (36u + sizeof(_g4_t_v8)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v9)) > _g4_s6 ? (40u + sizeof(_g4_t_v9)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v10)) > _g4_s7 ? (48u + sizeof(_g4_t_v10)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v11)) > _g4_s8 ? (52u + sizeof(_g4_t_v11)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v12)) > _g4_s9 ? (56u + sizeof(_g4_t_v12)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v13)) > _g4_s10 ? (60u + sizeof(_g4_t_v13)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_PlaneEquations &PlaneEquations = *reinterpret_cast<_g4_t_PlaneEquations *>(_g4_sf + 8u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 32u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 36u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 40u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 48u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 52u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 56u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 60u);

  v4 = 0;
  v5 = 0;
  v6 = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(self, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v4);
  PlaneEquations = (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)hkpConvexVerticesShape::getPlaneEquations(self);
  v7 = 0;
  v8 = 0;
  v9 = 0x80000000;
  hkGeomHull::Construct((hkGeomHull::Self *)v10);
  hkGeomConvexHullBuilder::generateConvexHull(v4, v5, v10, &v7, 1);
  Connectivity = findConnectivity(
                   (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v4,
                   PlaneEquations,
                   (const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v7,
                   (hkGeomHull::Self *)v10);
  v12 = 0;
  if ( v13 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v11,
      8 * v13);
  v11 = 0;
  v13 = 0x80000000;
  v8 = 0;
  if ( v9 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v7,
      16 * v9);
  v7 = 0;
  v9 = 0x80000000;
  v5 = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v4,
      16 * v6);
  return Connectivity;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::ensureConnectivity  (binary VA: 0x16b7a10)
// Original: hkpConvexVerticesConnectivityUtil::ensureConnectivity
// ----------------------------------------------------------------------------
hkpConvexVerticesConnectivityUtil::Self * hkpConvexVerticesConnectivityUtil::ensureConnectivity(hkpConvexVerticesConnectivityUtil::Self *self, const hkpConvexVerticesShape::Self *a2)
{
  const hkpConvexVerticesConnectivity::Self *Connectivity;
  const hkpConvexVerticesConnectivity::Self *v4;
  int v5;
  int32_t v6; // kr00_4
  int32_t v7;
  int32_t v8; // ett

  if ( *((uint32_t *)a2 + 24) == 0 )
  {
    Connectivity = (const hkpConvexVerticesConnectivity::Self *)hkpConvexVerticesConnectivityUtil::findConnectivity((hkpConvexVerticesConnectivityUtil::Self *)(a2));
    v4 = Connectivity;
    if ( Connectivity == nullptr )
    {
      *(uint32_t *)self = 1;
      return self;
    }
    hkpConvexVerticesShape::setConnectivity(a2, Connectivity, true);
    if ( *((uint16_t *)v4 + 3) != 0 )
    {
      do
      {
        v6 = *((uint32_t *)v4 + 1);
        HIWORD(v5) = HIWORD(v6);
        LOWORD(v5) = 0;
        v7 = v5 | (uint16_t)(v6 - 1);
        v8 = v6;
      }
      while ( v8 != __sync_val_compare_and_swap((volatile int32_t *)v4 + 1, v8, v7) );
      if ( (uint16_t)v7 == 0 )
        G4_VCALL<void>(v4, 16);
    }
  }
  *(uint32_t *)self = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::ensureConnectivityAll  (binary VA: 0x16b7ab0)
// Original: hkpConvexVerticesConnectivityUtil::ensureConnectivityAll
// ----------------------------------------------------------------------------
hkpConvexVerticesConnectivityUtil::Self * hkpConvexVerticesConnectivityUtil::ensureConnectivityAll(hkpConvexVerticesConnectivityUtil::Self *self, const hkpShape::Self *a2)
{
  const hkpShape::Self *v2;
  char v3;
  const hkpConvexVerticesConnectivity::Self *Connectivity;
  const hkpConvexVerticesConnectivity::Self *v6;
  int v7;
  int32_t v8; // kr00_4
  int32_t v9;
  int32_t v10; // ett
  int i;
  const hkpShape::Self *v12;
  typedef hkpConvexVerticesConnectivityUtil::Self *_g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef uint32_t _g4_t_v16[134];
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);

  v16[130] = (uint32_t)(uintptr_t)(&self);
  v2 = a2;
  v13 = self;
  v3 = *((uint8_t *)a2 + 8);
  if ( v3 == 6 || v3 == 18 )
  {
    for ( i = (*(int (**)(char *))(*((uint32_t *)a2 + 4) + 12))((char *)a2 + 16);
          i != -1;
          i = (*(int (**)(int, int))(*((uint32_t *)v2 + 4) + 16))((int)(uintptr_t)(v2) + 16, v14) )
    {
      v14 = i;
      v12 = (const hkpShape::Self *)(*(int (**)(int, int, uint32_t *))(*((uint32_t *)v2 + 4) + 24))((int)(uintptr_t)(v2) + 16, i, v16);
      hkpConvexVerticesConnectivityUtil::ensureConnectivityAll((hkpConvexVerticesConnectivityUtil::Self *)&v15, v12);
      if ( v15 == 1 )
        goto LABEL_15;
    }
LABEL_4:
    *(uint32_t *)v13 = 0;
    return v13;
  }
  if ( v3 != 5 || *((uint32_t *)a2 + 24) != 0 )
    goto LABEL_4;
  Connectivity = (const hkpConvexVerticesConnectivity::Self *)hkpConvexVerticesConnectivityUtil::findConnectivity((hkpConvexVerticesConnectivityUtil::Self *)(a2));
  v6 = Connectivity;
  if ( Connectivity != nullptr )
  {
    hkpConvexVerticesShape::setConnectivity(v2, Connectivity, true);
    if ( *((uint16_t *)v6 + 3) != 0 )
    {
      do
      {
        v8 = *((uint32_t *)v6 + 1);
        HIWORD(v7) = HIWORD(v8);
        LOWORD(v7) = 0;
        v9 = v7 | (uint16_t)(v8 - 1);
        v10 = v8;
      }
      while ( v10 != __sync_val_compare_and_swap((volatile int32_t *)v6 + 1, v10, v9) );
      if ( (uint16_t)v9 == 0 )
        G4_VCALL<void>(v6, 16);
    }
    goto LABEL_4;
  }
LABEL_15:
  *(uint32_t *)v13 = 1;
  return v13;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::calculateVolume  (binary VA: 0x16b7c20)
// Original: hkpConvexVerticesConnectivityUtil::calculateVolume
// ----------------------------------------------------------------------------
long double hkpConvexVerticesConnectivityUtil::calculateVolume(hkpConvexVerticesConnectivityUtil::Self *self, const hkArrayBase<hkVector4f::Self> *a2)
{
  float v2; // xmm5_4
  int v3;
  uint16_t *v4;
  int v5;
  float *v6;
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  int v10;
  int i;
  uint16_t v12; // si
  int v13;
  int v14;
  int v16;
  uint8_t *v17;
  int v18;
  uint8_t *v19;

  v2 = 0.0;
  v3 = *((uint32_t *)a2 + 6);
  if ( v3 > 0 )
  {
    v18 = 0;
    v2 = 0.0;
    v17 = *((uint8_t **)a2 + 5);
    v19 = &v17[v3];
    do
    {
      v16 = (uint8_t)*v17;
      if ( *v17 != 0 )
      {
        v4 = (uint16_t *)(*((uint32_t *)a2 + 2) + 2 * v18);
        v6 = (float *)(*(uint32_t *)self + 16 * *v4);
        if ( (uint8_t)*v17 > 2u )
        {
          v7 = *v6;
          v8 = v6[1];
          v9 = v6[2];
          v10 = 2;
          for ( i = v4[1]; ; i = v12 )
          {
            v12 = v4[v10++];
            v5 = *(uint32_t *)self;
            v2 = v2
               + (float)((float)((float)((float)(*(float *)(v5 + 16 * i) - v7)
                                       * (float)(*(float *)(v5 + 16 * v12 + 4) - v8))
                               - (float)((float)(*(float *)(v5 + 16 * i + 4) - v8)
                                       * (float)(*(float *)(v5 + 16 * v12) - v7)))
                       * (float)((float)(*(float *)(v5 + 16 * i + 8) + v9) + *(float *)(v5 + 16 * v12 + 8)));
            if ( v10 == v16 )
              break;
          }
        }
        v18 += v16;
      }
      ++v17;
    }
    while ( v17 != v19 );
  }
  v13 = _mm_cvtsi128_si32(g4_to_m128i(0x40C00000u));
  v14 = (2130706432 - v13) & ((v13 ^ (v13 + 2139095040)) >> 31);
  return (float)((float)((float)(2.0
                               - (float)(6.0
                                       * (float)((float)(2.0
                                                       - (float)(6.0
                                                               * (float)((float)(2.0 - (float)(6.0 * *(float *)&v14))
                                                                       * *(float *)&v14)))
                                               * (float)((float)(2.0 - (float)(6.0 * *(float *)&v14)) * *(float *)&v14))))
                       * (float)((float)(2.0
                                       - (float)(6.0
                                               * (float)((float)(2.0 - (float)(6.0 * *(float *)&v14)) * *(float *)&v14)))
                               * (float)((float)(2.0 - (float)(6.0 * *(float *)&v14)) * *(float *)&v14)))
               * v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::calculateVolume  (binary VA: 0x16b7dc0)
// Original: hkpConvexVerticesConnectivityUtil::calculateVolume
// ----------------------------------------------------------------------------
long double hkpConvexVerticesConnectivityUtil::calculateVolume(hkpConvexVerticesConnectivityUtil::Self *self, const hkpConvexVerticesShape::Self *a2)
{
  long double result; // fst7
  typedef float _g4_t_v3;
  typedef int _g4_t_v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v3)) > _g4_s0 ? (12u + sizeof(_g4_t_v3)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v4)) > _g4_s1 ? (16u + sizeof(_g4_t_v4)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v5)) > _g4_s2 ? (20u + sizeof(_g4_t_v5)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v6)) > _g4_s3 ? (24u + sizeof(_g4_t_v6)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v3 &v3 = *reinterpret_cast<_g4_t_v3 *>(_g4_sf + 12u);
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 16u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 20u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 24u);

  v4 = 0;
  v5 = 0;
  v6 = 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(self, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v4);
  result = hkpConvexVerticesConnectivityUtil::calculateVolume((hkpConvexVerticesConnectivityUtil::Self *)&v4, a2);
  v5 = 0;
  if ( v6 >= 0 )
  {
    v3 = result;
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v4,
      16 * v6);
    return v3;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivityUtil::cut  (binary VA: 0x16b7e50)
// Original: hkpConvexVerticesConnectivityUtil::cut
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpConvexVerticesConnectivityUtil::cut(hkpConvexVerticesConnectivityUtil::Self *self, const hkpConvexVerticesShape::Self *a2, const hkVector4f::Self *a3, float a4)
{
  hkpConvexVerticesConnectivityUtil::Self *v4;
  int v5;
  char *v6;
  int v7;
  int v8;
  int v9;
  float *v10;
  unsigned int *v11;
  float v12; // xmm0_4
  uint32_t *v13;
  uint32_t *v14;
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  unsigned int v20;
  signed int Key;
  int v22;
  unsigned int v23;
  float v24;
  int v25;
  int v26;
  int v27;
  float *v28;
  int v29;
  int v30;
  int v31;
  int v32;
  unsigned int *v33;
  int v34;
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  int v39;
  float *v40;
  float *v41;
  float v42; // xmm2_4
  float v43; // xmm5_4
  float v44; // xmm1_4
  float v45; // xmm7_4
  float v46; // xmm4_4
  unsigned int v47;
  float v48; // xmm3_4
  float v49; // xmm2_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  float *v52;
  int v53;
  int v54;
  int i;
  int v56;
  int v57;
  int v58;
  uint32_t *v59;
  int v60;
  uint32_t *v61;
  int v62;
  char *v63;
  int v64;
  char *v65;
  int v66;
  int v67;
  char *v68;
  int v69;
  char *v70;
  int v71;
  char v72; // di
  char v73;
  int v74;
  int v75;
  int v76;
  uint32_t *v77;
  int v78;
  int32_t v79; // kr00_4
  int32_t v80;
  int32_t v81; // ett
  hkpConvexVerticesShape::Self *v82;
  int v83;
  char *v84;
  int v85;
  int v86;
  char *v88;
  char *v89;
  int v90;
  signed int v91;
  hkLifoAllocator::Self *v92;
  uint32_t *v94;
  int v95;
  uint32_t *v96;
  int v97;
  int v98;
  int v99;
  int v100;
  int v101;
  int v102;
  int v103;
  int32_t v104; // kr04_4
  int32_t v105;
  int32_t v106; // ett
  hkLifoAllocator::Self *v107;
  signed int v108;
  int v109;
  int v110;
  int32_t v111; // kr08_4
  int v112;
  int32_t v113; // kr0C_4
  int32_t v114;
  int32_t v115; // ett
  int v116;
  int32_t v117; // kr10_4
  int32_t v118;
  int32_t v119; // ett
  int savedregs;
  typedef float _g4_t_v120;
  typedef uint32_t *_g4_t_PlaneEquations;
  typedef const hkpConvexVerticesShape::Self *_g4_t_v122;
  typedef hkLifoAllocator::Self **_g4_t_v123;
  typedef int _g4_t_v124;
  typedef int _g4_t_v125;
  typedef float _g4_t_v126;
  typedef hkpConvexVerticesShape::Self *_g4_t_v127;
  typedef int _g4_t_v128;
  typedef int _g4_t_v129;
  typedef int _g4_t_v130;
  typedef int _g4_t_v131;
  typedef int _g4_t_v132;
  typedef float _g4_t_v133;
  typedef int _g4_t_v134;
  typedef int _g4_t_v135;
  typedef int _g4_t_v136;
  typedef int _g4_t_v137;
  typedef int _g4_t_v138;
  typedef int _g4_t_v139;
  typedef hkMemoryAllocator::Self *_g4_t_v140;
  typedef uint32_t *_g4_t_v141;
  typedef int _g4_t_v142;
  typedef const hkVector4f::Self *_g4_t_v143;
  typedef uint8_t _g4_t_v144;
  typedef int _g4_t_v145;
  typedef int _g4_t_v146;
  typedef int _g4_t_v147;
  typedef hkMemoryAllocator::Self *_g4_t_v148;
  typedef float *_g4_t_v149;
  typedef int16_t _g4_t_v150;
  typedef int _g4_t_v151;
  typedef int _g4_t_v152;
  typedef char _g4_t_v153;
  typedef hkLifoAllocator::Self **_g4_t_address;
  typedef int _g4_t_v155;
  typedef float _g4_t_v156;
  typedef int _g4_t_v157;
  typedef int _g4_t_v158;
  typedef float _g4_t_v159;
  typedef int _g4_t_v160;
  typedef int _g4_t_v161;
  typedef int _g4_t_v162;
  typedef char *_g4_t_v163;
  typedef float _g4_t_v164;
  typedef hkArrayBase<hkVector4f::Self> *_g4_t_v165;
  typedef float _g4_t_v166;
  typedef uint32_t *_g4_t_v167;
  typedef char _g4_t_v168;
  typedef int _g4_t_v169;
  typedef int _g4_t_v170;
  typedef int _g4_t_v171;
  typedef float _g4_t_v172;
  typedef int _g4_t_v173;
  typedef char _g4_t_v174[4];
  typedef int _g4_t_v175;
  typedef int _g4_t_v176;
  typedef int _g4_t_v177;
  typedef int _g4_t_v178;
  typedef unsigned int _g4_t_v179;
  typedef int _g4_t_v180;
  typedef uint32_t _g4_t_v181[2];
  typedef int _g4_t_v182;
  typedef uint32_t _g4_t_v183[3];
  typedef char *_g4_t_v184;
  typedef int _g4_t_v185;
  typedef signed int _g4_t_v186;
  typedef void *_g4_t_v187;
  typedef int _g4_t_v188;
  typedef int _g4_t_v189[6];
  typedef char *_g4_t_v190;
  typedef int _g4_t_v191;
  typedef int _g4_t_v192;
  typedef char _g4_t_v193;
  typedef int _g4_t_v194;
  typedef int _g4_t_v195;
  typedef int _g4_t_v196;
  typedef char _g4_t_v197;
  typedef hkpConvexVerticesConnectivityUtil::Self **_g4_t_v198;
  typedef int _g4_t_v199;
  enum : size_t {
    _g4_s0 = 1136u,
    _g4_s1 = (12u + sizeof(_g4_t_v120)) > _g4_s0 ? (12u + sizeof(_g4_t_v120)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_PlaneEquations)) > _g4_s1 ? (24u + sizeof(_g4_t_PlaneEquations)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v122)) > _g4_s2 ? (28u + sizeof(_g4_t_v122)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v123)) > _g4_s3 ? (32u + sizeof(_g4_t_v123)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v124)) > _g4_s4 ? (36u + sizeof(_g4_t_v124)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v125)) > _g4_s5 ? (40u + sizeof(_g4_t_v125)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v126)) > _g4_s6 ? (44u + sizeof(_g4_t_v126)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v127)) > _g4_s7 ? (48u + sizeof(_g4_t_v127)) : _g4_s7,
    _g4_s9 = (52u + sizeof(_g4_t_v128)) > _g4_s8 ? (52u + sizeof(_g4_t_v128)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v129)) > _g4_s9 ? (60u + sizeof(_g4_t_v129)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v130)) > _g4_s10 ? (64u + sizeof(_g4_t_v130)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v131)) > _g4_s11 ? (68u + sizeof(_g4_t_v131)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v132)) > _g4_s12 ? (72u + sizeof(_g4_t_v132)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v133)) > _g4_s13 ? (72u + sizeof(_g4_t_v133)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v134)) > _g4_s14 ? (72u + sizeof(_g4_t_v134)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v135)) > _g4_s15 ? (72u + sizeof(_g4_t_v135)) : _g4_s15,
    _g4_s17 = (72u + sizeof(_g4_t_v136)) > _g4_s16 ? (72u + sizeof(_g4_t_v136)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v137)) > _g4_s17 ? (72u + sizeof(_g4_t_v137)) : _g4_s17,
    _g4_s19 = (76u + sizeof(_g4_t_v138)) > _g4_s18 ? (76u + sizeof(_g4_t_v138)) : _g4_s18,
    _g4_s20 = (80u + sizeof(_g4_t_v139)) > _g4_s19 ? (80u + sizeof(_g4_t_v139)) : _g4_s19,
    _g4_s21 = (80u + sizeof(_g4_t_v140)) > _g4_s20 ? (80u + sizeof(_g4_t_v140)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v141)) > _g4_s21 ? (84u + sizeof(_g4_t_v141)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v142)) > _g4_s22 ? (84u + sizeof(_g4_t_v142)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v143)) > _g4_s23 ? (88u + sizeof(_g4_t_v143)) : _g4_s23,
    _g4_s25 = (88u + sizeof(_g4_t_v144)) > _g4_s24 ? (88u + sizeof(_g4_t_v144)) : _g4_s24,
    _g4_s26 = (88u + sizeof(_g4_t_v145)) > _g4_s25 ? (88u + sizeof(_g4_t_v145)) : _g4_s25,
    _g4_s27 = (88u + sizeof(_g4_t_v146)) > _g4_s26 ? (88u + sizeof(_g4_t_v146)) : _g4_s26,
    _g4_s28 = (92u + sizeof(_g4_t_v147)) > _g4_s27 ? (92u + sizeof(_g4_t_v147)) : _g4_s27,
    _g4_s29 = (92u + sizeof(_g4_t_v148)) > _g4_s28 ? (92u + sizeof(_g4_t_v148)) : _g4_s28,
    _g4_s30 = (92u + sizeof(_g4_t_v149)) > _g4_s29 ? (92u + sizeof(_g4_t_v149)) : _g4_s29,
    _g4_s31 = (92u + sizeof(_g4_t_v150)) > _g4_s30 ? (92u + sizeof(_g4_t_v150)) : _g4_s30,
    _g4_s32 = (92u + sizeof(_g4_t_v151)) > _g4_s31 ? (92u + sizeof(_g4_t_v151)) : _g4_s31,
    _g4_s33 = (92u + sizeof(_g4_t_v152)) > _g4_s32 ? (92u + sizeof(_g4_t_v152)) : _g4_s32,
    _g4_s34 = (92u + sizeof(_g4_t_v153)) > _g4_s33 ? (92u + sizeof(_g4_t_v153)) : _g4_s33,
    _g4_s35 = (92u + sizeof(_g4_t_address)) > _g4_s34 ? (92u + sizeof(_g4_t_address)) : _g4_s34,
    _g4_s36 = (92u + sizeof(_g4_t_v155)) > _g4_s35 ? (92u + sizeof(_g4_t_v155)) : _g4_s35,
    _g4_s37 = (96u + sizeof(_g4_t_v156)) > _g4_s36 ? (96u + sizeof(_g4_t_v156)) : _g4_s36,
    _g4_s38 = (96u + sizeof(_g4_t_v157)) > _g4_s37 ? (96u + sizeof(_g4_t_v157)) : _g4_s37,
    _g4_s39 = (96u + sizeof(_g4_t_v158)) > _g4_s38 ? (96u + sizeof(_g4_t_v158)) : _g4_s38,
    _g4_s40 = (100u + sizeof(_g4_t_v159)) > _g4_s39 ? (100u + sizeof(_g4_t_v159)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v160)) > _g4_s40 ? (100u + sizeof(_g4_t_v160)) : _g4_s40,
    _g4_s42 = (100u + sizeof(_g4_t_v161)) > _g4_s41 ? (100u + sizeof(_g4_t_v161)) : _g4_s41,
    _g4_s43 = (100u + sizeof(_g4_t_v162)) > _g4_s42 ? (100u + sizeof(_g4_t_v162)) : _g4_s42,
    _g4_s44 = (100u + sizeof(_g4_t_v163)) > _g4_s43 ? (100u + sizeof(_g4_t_v163)) : _g4_s43,
    _g4_s45 = (104u + sizeof(_g4_t_v164)) > _g4_s44 ? (104u + sizeof(_g4_t_v164)) : _g4_s44,
    _g4_s46 = (104u + sizeof(_g4_t_v165)) > _g4_s45 ? (104u + sizeof(_g4_t_v165)) : _g4_s45,
    _g4_s47 = (108u + sizeof(_g4_t_v166)) > _g4_s46 ? (108u + sizeof(_g4_t_v166)) : _g4_s46,
    _g4_s48 = (108u + sizeof(_g4_t_v167)) > _g4_s47 ? (108u + sizeof(_g4_t_v167)) : _g4_s47,
    _g4_s49 = (108u + sizeof(_g4_t_v168)) > _g4_s48 ? (108u + sizeof(_g4_t_v168)) : _g4_s48,
    _g4_s50 = (108u + sizeof(_g4_t_v169)) > _g4_s49 ? (108u + sizeof(_g4_t_v169)) : _g4_s49,
    _g4_s51 = (108u + sizeof(_g4_t_v170)) > _g4_s50 ? (108u + sizeof(_g4_t_v170)) : _g4_s50,
    _g4_s52 = (108u + sizeof(_g4_t_v171)) > _g4_s51 ? (108u + sizeof(_g4_t_v171)) : _g4_s51,
    _g4_s53 = (108u + sizeof(_g4_t_v172)) > _g4_s52 ? (108u + sizeof(_g4_t_v172)) : _g4_s52,
    _g4_s54 = (108u + sizeof(_g4_t_v173)) > _g4_s53 ? (108u + sizeof(_g4_t_v173)) : _g4_s53,
    _g4_s55 = (112u + sizeof(_g4_t_v174)) > _g4_s54 ? (112u + sizeof(_g4_t_v174)) : _g4_s54,
    _g4_s56 = (116u + sizeof(_g4_t_v175)) > _g4_s55 ? (116u + sizeof(_g4_t_v175)) : _g4_s55,
    _g4_s57 = (120u + sizeof(_g4_t_v176)) > _g4_s56 ? (120u + sizeof(_g4_t_v176)) : _g4_s56,
    _g4_s58 = (124u + sizeof(_g4_t_v177)) > _g4_s57 ? (124u + sizeof(_g4_t_v177)) : _g4_s57,
    _g4_s59 = (132u + sizeof(_g4_t_v178)) > _g4_s58 ? (132u + sizeof(_g4_t_v178)) : _g4_s58,
    _g4_s60 = (136u + sizeof(_g4_t_v179)) > _g4_s59 ? (136u + sizeof(_g4_t_v179)) : _g4_s59,
    _g4_s61 = (140u + sizeof(_g4_t_v180)) > _g4_s60 ? (140u + sizeof(_g4_t_v180)) : _g4_s60,
    _g4_s62 = (148u + sizeof(_g4_t_v181)) > _g4_s61 ? (148u + sizeof(_g4_t_v181)) : _g4_s61,
    _g4_s63 = (156u + sizeof(_g4_t_v182)) > _g4_s62 ? (156u + sizeof(_g4_t_v182)) : _g4_s62,
    _g4_s64 = (168u + sizeof(_g4_t_v183)) > _g4_s63 ? (168u + sizeof(_g4_t_v183)) : _g4_s63,
    _g4_s65 = (180u + sizeof(_g4_t_v184)) > _g4_s64 ? (180u + sizeof(_g4_t_v184)) : _g4_s64,
    _g4_s66 = (184u + sizeof(_g4_t_v185)) > _g4_s65 ? (184u + sizeof(_g4_t_v185)) : _g4_s65,
    _g4_s67 = (188u + sizeof(_g4_t_v186)) > _g4_s66 ? (188u + sizeof(_g4_t_v186)) : _g4_s66,
    _g4_s68 = (192u + sizeof(_g4_t_v187)) > _g4_s67 ? (192u + sizeof(_g4_t_v187)) : _g4_s67,
    _g4_s69 = (196u + sizeof(_g4_t_v188)) > _g4_s68 ? (196u + sizeof(_g4_t_v188)) : _g4_s68,
    _g4_s70 = (204u + sizeof(_g4_t_v189)) > _g4_s69 ? (204u + sizeof(_g4_t_v189)) : _g4_s69,
    _g4_s71 = (228u + sizeof(_g4_t_v190)) > _g4_s70 ? (228u + sizeof(_g4_t_v190)) : _g4_s70,
    _g4_s72 = (232u + sizeof(_g4_t_v191)) > _g4_s71 ? (232u + sizeof(_g4_t_v191)) : _g4_s71,
    _g4_s73 = (236u + sizeof(_g4_t_v192)) > _g4_s72 ? (236u + sizeof(_g4_t_v192)) : _g4_s72,
    _g4_s74 = (240u + sizeof(_g4_t_v193)) > _g4_s73 ? (240u + sizeof(_g4_t_v193)) : _g4_s73,
    _g4_s75 = (500u + sizeof(_g4_t_v194)) > _g4_s74 ? (500u + sizeof(_g4_t_v194)) : _g4_s74,
    _g4_s76 = (504u + sizeof(_g4_t_v195)) > _g4_s75 ? (504u + sizeof(_g4_t_v195)) : _g4_s75,
    _g4_s77 = (508u + sizeof(_g4_t_v196)) > _g4_s76 ? (508u + sizeof(_g4_t_v196)) : _g4_s76,
    _g4_s78 = (516u + sizeof(_g4_t_v197)) > _g4_s77 ? (516u + sizeof(_g4_t_v197)) : _g4_s77,
    _g4_s79 = (1036u + sizeof(_g4_t_v198)) > _g4_s78 ? (1036u + sizeof(_g4_t_v198)) : _g4_s78,
    _g4_s80 = (1048u + sizeof(_g4_t_v199)) > _g4_s79 ? (1048u + sizeof(_g4_t_v199)) : _g4_s79
  };
  alignas(16) uint8_t _g4_sf[_g4_s80];
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 12u);
  _g4_t_PlaneEquations &PlaneEquations = *reinterpret_cast<_g4_t_PlaneEquations *>(_g4_sf + 24u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 28u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 32u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 36u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 40u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 44u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 48u);
  _g4_t_v128 &v128 = *reinterpret_cast<_g4_t_v128 *>(_g4_sf + 52u);
  _g4_t_v129 &v129 = *reinterpret_cast<_g4_t_v129 *>(_g4_sf + 60u);
  _g4_t_v130 &v130 = *reinterpret_cast<_g4_t_v130 *>(_g4_sf + 64u);
  _g4_t_v131 &v131 = *reinterpret_cast<_g4_t_v131 *>(_g4_sf + 68u);
  _g4_t_v132 &v132 = *reinterpret_cast<_g4_t_v132 *>(_g4_sf + 72u);
  _g4_t_v133 &v133 = *reinterpret_cast<_g4_t_v133 *>(_g4_sf + 72u);
  _g4_t_v134 &v134 = *reinterpret_cast<_g4_t_v134 *>(_g4_sf + 72u);
  _g4_t_v135 &v135 = *reinterpret_cast<_g4_t_v135 *>(_g4_sf + 72u);
  _g4_t_v136 &v136 = *reinterpret_cast<_g4_t_v136 *>(_g4_sf + 72u);
  _g4_t_v137 &v137 = *reinterpret_cast<_g4_t_v137 *>(_g4_sf + 72u);
  _g4_t_v138 &v138 = *reinterpret_cast<_g4_t_v138 *>(_g4_sf + 76u);
  _g4_t_v139 &v139 = *reinterpret_cast<_g4_t_v139 *>(_g4_sf + 80u);
  _g4_t_v140 &v140 = *reinterpret_cast<_g4_t_v140 *>(_g4_sf + 80u);
  _g4_t_v141 &v141 = *reinterpret_cast<_g4_t_v141 *>(_g4_sf + 84u);
  _g4_t_v142 &v142 = *reinterpret_cast<_g4_t_v142 *>(_g4_sf + 84u);
  _g4_t_v143 &v143 = *reinterpret_cast<_g4_t_v143 *>(_g4_sf + 88u);
  _g4_t_v144 &v144 = *reinterpret_cast<_g4_t_v144 *>(_g4_sf + 88u);
  _g4_t_v145 &v145 = *reinterpret_cast<_g4_t_v145 *>(_g4_sf + 88u);
  _g4_t_v146 &v146 = *reinterpret_cast<_g4_t_v146 *>(_g4_sf + 88u);
  _g4_t_v147 &v147 = *reinterpret_cast<_g4_t_v147 *>(_g4_sf + 92u);
  _g4_t_v148 &v148 = *reinterpret_cast<_g4_t_v148 *>(_g4_sf + 92u);
  _g4_t_v149 &v149 = *reinterpret_cast<_g4_t_v149 *>(_g4_sf + 92u);
  _g4_t_v150 &v150 = *reinterpret_cast<_g4_t_v150 *>(_g4_sf + 92u);
  _g4_t_v151 &v151 = *reinterpret_cast<_g4_t_v151 *>(_g4_sf + 92u);
  _g4_t_v152 &v152 = *reinterpret_cast<_g4_t_v152 *>(_g4_sf + 92u);
  _g4_t_v153 &v153 = *reinterpret_cast<_g4_t_v153 *>(_g4_sf + 92u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 92u);
  _g4_t_v155 &v155 = *reinterpret_cast<_g4_t_v155 *>(_g4_sf + 92u);
  _g4_t_v156 &v156 = *reinterpret_cast<_g4_t_v156 *>(_g4_sf + 96u);
  _g4_t_v157 &v157 = *reinterpret_cast<_g4_t_v157 *>(_g4_sf + 96u);
  _g4_t_v158 &v158 = *reinterpret_cast<_g4_t_v158 *>(_g4_sf + 96u);
  _g4_t_v159 &v159 = *reinterpret_cast<_g4_t_v159 *>(_g4_sf + 100u);
  _g4_t_v160 &v160 = *reinterpret_cast<_g4_t_v160 *>(_g4_sf + 100u);
  _g4_t_v161 &v161 = *reinterpret_cast<_g4_t_v161 *>(_g4_sf + 100u);
  _g4_t_v162 &v162 = *reinterpret_cast<_g4_t_v162 *>(_g4_sf + 100u);
  _g4_t_v163 &v163 = *reinterpret_cast<_g4_t_v163 *>(_g4_sf + 100u);
  _g4_t_v164 &v164 = *reinterpret_cast<_g4_t_v164 *>(_g4_sf + 104u);
  _g4_t_v165 &v165 = *reinterpret_cast<_g4_t_v165 *>(_g4_sf + 104u);
  _g4_t_v166 &v166 = *reinterpret_cast<_g4_t_v166 *>(_g4_sf + 108u);
  _g4_t_v167 &v167 = *reinterpret_cast<_g4_t_v167 *>(_g4_sf + 108u);
  _g4_t_v168 &v168 = *reinterpret_cast<_g4_t_v168 *>(_g4_sf + 108u);
  _g4_t_v169 &v169 = *reinterpret_cast<_g4_t_v169 *>(_g4_sf + 108u);
  _g4_t_v170 &v170 = *reinterpret_cast<_g4_t_v170 *>(_g4_sf + 108u);
  _g4_t_v171 &v171 = *reinterpret_cast<_g4_t_v171 *>(_g4_sf + 108u);
  _g4_t_v172 &v172 = *reinterpret_cast<_g4_t_v172 *>(_g4_sf + 108u);
  _g4_t_v173 &v173 = *reinterpret_cast<_g4_t_v173 *>(_g4_sf + 108u);
  _g4_t_v174 &v174 = *reinterpret_cast<_g4_t_v174 *>(_g4_sf + 112u);
  _g4_t_v175 &v175 = *reinterpret_cast<_g4_t_v175 *>(_g4_sf + 116u);
  _g4_t_v176 &v176 = *reinterpret_cast<_g4_t_v176 *>(_g4_sf + 120u);
  _g4_t_v177 &v177 = *reinterpret_cast<_g4_t_v177 *>(_g4_sf + 124u);
  _g4_t_v178 &v178 = *reinterpret_cast<_g4_t_v178 *>(_g4_sf + 132u);
  _g4_t_v179 &v179 = *reinterpret_cast<_g4_t_v179 *>(_g4_sf + 136u);
  _g4_t_v180 &v180 = *reinterpret_cast<_g4_t_v180 *>(_g4_sf + 140u);
  _g4_t_v181 &v181 = *reinterpret_cast<_g4_t_v181 *>(_g4_sf + 148u);
  _g4_t_v182 &v182 = *reinterpret_cast<_g4_t_v182 *>(_g4_sf + 156u);
  _g4_t_v183 &v183 = *reinterpret_cast<_g4_t_v183 *>(_g4_sf + 168u);
  _g4_t_v184 &v184 = *reinterpret_cast<_g4_t_v184 *>(_g4_sf + 180u);
  _g4_t_v185 &v185 = *reinterpret_cast<_g4_t_v185 *>(_g4_sf + 184u);
  _g4_t_v186 &v186 = *reinterpret_cast<_g4_t_v186 *>(_g4_sf + 188u);
  _g4_t_v187 &v187 = *reinterpret_cast<_g4_t_v187 *>(_g4_sf + 192u);
  _g4_t_v188 &v188 = *reinterpret_cast<_g4_t_v188 *>(_g4_sf + 196u);
  _g4_t_v189 &v189 = *reinterpret_cast<_g4_t_v189 *>(_g4_sf + 204u);
  _g4_t_v190 &v190 = *reinterpret_cast<_g4_t_v190 *>(_g4_sf + 228u);
  _g4_t_v191 &v191 = *reinterpret_cast<_g4_t_v191 *>(_g4_sf + 232u);
  _g4_t_v192 &v192 = *reinterpret_cast<_g4_t_v192 *>(_g4_sf + 236u);
  _g4_t_v193 &v193 = *reinterpret_cast<_g4_t_v193 *>(_g4_sf + 240u);
  _g4_t_v194 &v194 = *reinterpret_cast<_g4_t_v194 *>(_g4_sf + 500u);
  _g4_t_v195 &v195 = *reinterpret_cast<_g4_t_v195 *>(_g4_sf + 504u);
  _g4_t_v196 &v196 = *reinterpret_cast<_g4_t_v196 *>(_g4_sf + 508u);
  _g4_t_v197 &v197 = *reinterpret_cast<_g4_t_v197 *>(_g4_sf + 516u);
  _g4_t_v198 &v198 = *reinterpret_cast<_g4_t_v198 *>(_g4_sf + 1036u);
  _g4_t_v199 &v199 = *reinterpret_cast<_g4_t_v199 *>(_g4_sf + 1048u);

  v198 = &self;
  v143 = a3;
  v122 = a2;
  v127 = (hkpConvexVerticesShape::Self *)(self);
  v120 = a4;
  v159 = *(float *)a2;
  v164 = *((float *)a2 + 1);
  v4 = self;
  v156 = *((float *)a2 + 2);
  v166 = *((float *)a2 + 3);
  hkpConvexVerticesConnectivityUtil::ensureConnectivity((hkpConvexVerticesConnectivityUtil::Self *)v174, (const hkpConvexVerticesShape::Self *)(self));
  v141 = *((uint32_t **)v4 + 24);
  v5 = G4_VCALL<int>(v4, 52);
  v188 = v5;
  v184 = nullptr;
  v185 = 0;
  v186 = 0x80000000;
  v198 = (hkpConvexVerticesConnectivityUtil::Self **)&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE;
  if ( v5 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(v198);
    v107 = *address;
    v108 = (16 * v5 + 127) & 0xFFFFFF80;
    v6 = *((char **)*address + 3);
    if ( v108 <= *((uint32_t *)*address + 2) && (unsigned int)(uintptr_t)(&v6[v108]) <= *((uint32_t *)v107 + 4) )
      *((uint32_t *)v107 + 3) = (uint32_t)(uintptr_t)(&v6[v108]);
    else
      v6 = (char *)hkLifoAllocator::allocateFromNewSlab(v107, (16 * v5 + 127) & 0xFFFFFF80);
    v123 = address;
  }
  else
  {
    v123 = (hkLifoAllocator::Self **)_emutls_get_address(v198);
    v6 = nullptr;
  }
  v186 = v5 | 0x80000000;
  v184 = v6;
  v187 = v6;
  hkpConvexVerticesShape::getOriginalVertices(v127, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v184);
  v7 = v185;
  v175 = 0;
  v176 = 0;
  v177 = 0x80000000;
  if ( v185 <= 0 )
  {
    v176 = v185;
    v82 = nullptr;
    hkpConvexVerticesShape::getPlaneEquations(v127);
    v178 = 0;
    v180 = 0x80000000;
    goto LABEL_102;
  }
  hkArrayUtil::reserve((hkArrayUtil::Self *)v174, (hkMemoryAllocator::Self *)hkContainerTempAllocator::s_alloc, &v175, v185, 12);
  v176 = v7;
  PlaneEquations = (uint32_t *)hkpConvexVerticesShape::getPlaneEquations(v127);
  v178 = 0;
  v179 = 0;
  v180 = 0x80000000;
  hkArrayUtil::reserve((hkArrayUtil::Self *)v174, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, &v178, v7, 16);
  v8 = 0;
  v9 = 0;
  do
  {
    while ( 1 )
    {
      v10 = (float *)&v184[16 * v9];
      v11 = (unsigned int *)(v8 + v175);
      v12 = (float)((float)((float)(*v10 * v159) + (float)(v10[1] * v164)) + (float)(v10[2] * v156))
          + (float)(*(float *)&v143 + v166);
      *(float *)(v8 + v175 + 8) = v12;
      if ( v12 <= 0.0 )
        break;
      ++v9;
      v8 += 12;
      v11[1] = 1;
      if ( v9 == v7 )
        goto LABEL_8;
    }
    v11[1] = 0;
    *v11 = v179;
    v13 = (uint32_t *)(v178 + 16 * v179);
    ++v9;
    v8 += 12;
    *v13 = *(uint32_t *)v10;
    v13[1] = *((uint32_t *)v10 + 1);
    v13[2] = *((uint32_t *)v10 + 2);
    ++v179;
    v13[3] = *((uint32_t *)v10 + 3);
  }
  while ( v9 != v7 );
LABEL_8:
  if ( v179 == 0 )
  {
    v82 = nullptr;
    goto LABEL_102;
  }
  if ( v185 == v179 )
  {
    if ( *((uint16_t *)v127 + 3) != 0 )
    {
      do
      {
        v111 = *((uint32_t *)v127 + 1);
        HIWORD(v110) = HIWORD(v111);
        LOWORD(v110) = 0;
      }
      while ( v111 != __sync_val_compare_and_swap(
                        (volatile int32_t *)v127 + 1,
                        v111,
                        v110 | (uint16_t)(v111 + 1)) );
    }
    v82 = v127;
    goto LABEL_102;
  }
  v14 = (uint32_t *)(*(int (**)(uint32_t, int))(**((uint32_t **)*v123 + 11) + 8))(*((uint32_t *)*v123 + 11), 32);
  v14[1] = -65535;
  v165 = (hkArrayBase<hkVector4f::Self> *)v14;
  *v14 = ((uint32_t)(uintptr_t)&off_209B888);
  v194 = (int)(uintptr_t)(&v197);
  v14[2] = 0;
  v14[3] = 0;
  v14[4] = 0x80000000;
  v14[5] = 0;
  v14[6] = 0;
  v14[7] = 0x80000000;
  v195 = 0;
  v196 = -2147483616;
  v181[0] = 0;
  v181[1] = 0;
  v182 = -1;
  hkMapBase_unsigned_long_unsigned_l_393416::reserve(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v181,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
    2 * v9);
  v190 = &v193;
  v191 = 0;
  v192 = -2147483616;
  v124 = v141[6];
  if ( v124 > 0 )
  {
    v131 = 0;
    v128 = 0;
    v138 = 0;
    while ( 1 )
    {
      v144 = *(uint8_t *)(v141[5] + v131);
      v160 = v144;
      if ( v144 <= 2u )
      {
        --v128;
        goto LABEL_13;
      }
      v125 = v14[3];
      v15 = 0;
      v147 = v141[2];
      v16 = -1;
      v17 = 0;
      do
      {
        if ( *(uint32_t *)(v175 + 12 * *(uint16_t *)(2 * v138 + v147 + 2 * v17) + 4) == 0 )
        {
          v16 = v17;
          ++v15;
        }
        ++v17;
      }
      while ( v144 > v17 );
      v157 = v16;
      v18 = v175;
      if ( v15 == v144 )
      {
        v161 = v15;
        v169 = 0;
        v53 = v14[3];
        v54 = 2 * v138;
        for ( i = v141[2]; ; i = v141[2] )
        {
          v56 = *(uint32_t *)(v18 + 12 * *(uint16_t *)(i + v54));
          if ( (v14[4] & 0x3FFFFFFF) == v53 )
          {
            v150 = v56;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v14 + 2),
              2,
              v199);
            v53 = v14[3];
            LOWORD(v56) = v150;
          }
          ++v169;
          v54 += 2;
          *(uint16_t *)(v14[2] + 2 * v53) = v56;
          v53 = v14[3] + 1;
          v14[3] = v53;
          if ( v169 >= v161 )
            break;
          v18 = v175;
        }
        v57 = v14[6];
        if ( v57 == (v14[7] & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v14 + 5),
            1,
            v199);
          v57 = v14[6];
        }
        *(uint8_t *)(v14[5] + v57) = v144;
        v58 = v196;
        ++v14[6];
        v59 = (uint32_t *)(*PlaneEquations + 16 * v128);
        v60 = v195;
        if ( v195 == (v58 & 0x3FFFFFFF) )
        {
          v173 = *PlaneEquations + 16 * v128;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v194,
            16,
            v199);
          v60 = v195;
          v59 = (uint32_t *)v173;
        }
        v61 = (uint32_t *)(v194 + 16 * v60);
        v138 += v161;
        *v61 = *v59;
        v61[1] = v59[1];
        v61[2] = v59[2];
        v61[3] = v59[3];
        ++v195;
        goto LABEL_13;
      }
      if ( v157 == -1 )
        goto LABEL_50;
      v139 = 0;
      v129 = -1;
      v167 = v14;
      v19 = *(uint16_t *)(v147 + 2 * (v138 + v157));
      v145 = v144 - 1;
      while ( 1 )
      {
        v27 = 0;
        if ( v157 != v145 )
          v27 = v157 + 1;
        v157 = v27;
        v22 = *(uint16_t *)(v147 + 2 * (v27 + v138));
        v28 = (float *)(v18 + 12 * v19);
        v149 = v28;
        v29 = *((uint32_t *)v28 + 1);
        v130 = v18 + 12 * v22;
        if ( v29 != *(uint32_t *)(v130 + 4) )
          break;
        if ( v29 == 0 )
        {
          v37 = *(uint32_t *)v28;
          v38 = v167;
          v39 = v167[3];
          if ( v39 == (v167[4] & 0x3FFFFFFF) )
          {
            v155 = v22;
            hkArrayUtil::reserveMore(
              (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
              (hkMemoryAllocator::Self *)(v167 + 2),
              2,
              v199);
            v39 = v167[3];
            v22 = v155;
            v38 = v167;
          }
          *(uint16_t *)(v38[2] + 2 * v39) = v37;
          ++v38[3];
        }
LABEL_31:
        if ( v139 == v145 )
          goto LABEL_43;
LABEL_32:
        v18 = v175;
        ++v139;
        v19 = v22;
        v147 = v141[2];
      }
      v20 = v22 > v19 ? v22 | (v19 << 16) : v19 | (v22 << 16);
      v132 = v22;
      Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
              (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v181,
              v20);
      v22 = v132;
      if ( Key > v182 )
      {
        v40 = (float *)&v184[16 * v19];
        v23 = v179;
        v41 = (float *)&v184[16 * v132];
        v42 = v41[1] - v40[1];
        v133 = v40[1];
        v43 = *v40;
        v44 = v41[2] - v40[2];
        v126 = v40[2];
        v45 = v40[3];
        v46 = v149[2] / (float)(v149[2] - *(float *)(v130 + 8));
        v47 = v179;
        v48 = (float)((float)(*v41 - v43) * v46) + v43;
        v49 = (float)(v42 * v46) + v133;
        v50 = (float)(v44 * v46) + v126;
        v51 = (float)((float)(v41[3] - v45) * v46) + v45;
        if ( v179 == (v180 & 0x3FFFFFFF) )
        {
          v137 = v22;
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v178,
            16,
            v199);
          v47 = v179;
          v22 = v137;
        }
        v134 = v22;
        v52 = (float *)(v178 + 16 * v47);
        *v52 = v48;
        v52[1] = v49;
        ++v179;
        v52[2] = v50;
        v52[3] = v51;
        hkMapBase_unsigned_long_unsigned_l_393416::insert(
          (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v181,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v20,
          v23);
        v22 = v134;
      }
      else
      {
        v23 = *(uint32_t *)(v181[0] + 8 * Key + 4);
      }
      if ( *((uint32_t *)v149 + 1) == 0 )
        break;
      v30 = v167[3];
      if ( v30 == (v167[4] & 0x3FFFFFFF) )
      {
        v152 = v22;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)(v167 + 2),
          2,
          v199);
        v22 = v152;
        v30 = v167[3];
      }
      *(uint16_t *)(v167[2] + 2 * v30) = v23;
      v31 = v191;
      ++v167[3];
      if ( v31 == (v192 & 0x3FFFFFFF) )
      {
        v151 = v22;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v190,
          8,
          v199);
        v31 = v191;
        v22 = v151;
      }
      v32 = v129;
      v129 = -1;
      v33 = (unsigned int *)&v190[8 * v31];
      *v33 = v23;
      v33[1] = v32;
      ++v191;
      if ( v139 != v145 )
        goto LABEL_32;
LABEL_43:
      v14 = v167;
      v34 = v167[3] - v125;
      v168 = *((uint8_t *)v167 + 12) - v125;
      if ( v34 == 0 )
        goto LABEL_50;
      if ( v34 > 2 )
      {
        v94 = (uint32_t *)(*PlaneEquations + 16 * v128);
        v95 = v195;
        if ( v195 == (v196 & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v194,
            16,
            v199);
          v95 = v195;
        }
        v96 = (uint32_t *)(v194 + 16 * v95);
        *v96 = *v94;
        v96[1] = v94[1];
        v96[2] = v94[2];
        v96[3] = v94[3];
        v97 = v14[6];
        v98 = v14[7] & 0x3FFFFFFF;
        ++v195;
        if ( v97 == v98 )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)(v14 + 5),
            1,
            v199);
          v97 = v14[6];
        }
        *(uint8_t *)(v14[5] + v97) = v168;
        ++v14[6];
        v138 += v160;
      }
      else
      {
        v35 = v14[4] & 0x3FFFFFFF;
        if ( v125 > v35 )
        {
          v36 = 2 * v35;
          savedregs = 2;
          if ( v36 < v125 )
            v36 = v125;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v174,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v14 + 2,
            v36,
            savedregs);
        }
        v14[3] = v125;
LABEL_50:
        v138 += v160;
      }
LABEL_13:
      ++v128;
      if ( ++v131 == v124 )
      {
        v142 = v191;
        v62 = v191;
        goto LABEL_69;
      }
    }
    v24 = *v149;
    v148 = (hkMemoryAllocator::Self *)(v167 + 2);
    v25 = v167[3];
    if ( v25 == (v167[4] & 0x3FFFFFFF) )
    {
      v136 = v22;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v148, 2, v199);
      v22 = v136;
      v25 = v167[3];
    }
    *(uint16_t *)(v167[2] + 2 * v25) = LOWORD(v24);
    v26 = v167[3] + 1;
    v167[3] = v26;
    if ( v26 == (v167[4] & 0x3FFFFFFF) )
    {
      v135 = v22;
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v148, 2, v199);
      v22 = v135;
      v26 = v167[3];
    }
    v129 = v23;
    *(uint16_t *)(v167[2] + 2 * v26) = v23;
    ++v167[3];
    goto LABEL_31;
  }
  v142 = 0;
  v62 = 0;
LABEL_69:
  v153 = 0;
  v140 = (hkMemoryAllocator::Self *)((hkArrayBase<hkVector4f::Self> *)((char *)v165 + 8));
LABEL_70:
  if ( v62 > 2 )
  {
    while ( 1 )
    {
      v146 = *((uint32_t *)v165 + 3);
      v63 = v190;
      v158 = *(uint32_t *)v190;
      v64 = *((uint32_t *)v190 + 1);
      v191 = v62 - 1;
      v65 = &v190[8 * v62 - 8];
      v170 = v64;
      *(uint32_t *)v190 = *(uint32_t *)v65;
      *((uint32_t *)v63 + 1) = *((uint32_t *)v65 + 1);
      v66 = *((uint32_t *)v165 + 3);
      if ( v66 == (*((uint32_t *)v165 + 4) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v140, 2, v199);
        v66 = *((uint32_t *)v165 + 3);
      }
      v67 = v170;
      *(uint16_t *)(*((uint32_t *)v165 + 2) + 2 * v66) = v158;
      v162 = *((uint32_t *)v165 + 3) + 1;
      *((uint32_t *)v165 + 3) = v162;
      if ( v158 != v170 )
        break;
LABEL_82:
      v72 = v153;
      v73 = v162 - v146;
      if ( v162 - v146 == v142 )
        v72 = 1;
      v153 = v72;
      v74 = *((uint32_t *)v165 + 6);
      if ( v74 == (*((uint32_t *)v165 + 7) & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkArrayBase<hkVector4f::Self> *)((char *)v165 + 20),
          1,
          v199);
        v74 = *((uint32_t *)v165 + 6);
        v73 = v162 - v146;
      }
      *(uint8_t *)(*((uint32_t *)v165 + 5) + v74) = v73;
      v75 = v195;
      v76 = v196 & 0x3FFFFFFF;
      ++*((uint32_t *)v165 + 6);
      if ( v75 == v76 )
      {
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkMemoryAllocator::Self *)&v194,
          16,
          v199);
        v75 = v195;
      }
      v77 = (uint32_t *)(v194 + 16 * v75);
      *v77 = *(uint32_t *)v122;
      v77[1] = *((uint32_t *)v122 + 1);
      v77[2] = *((uint32_t *)v122 + 2);
      v77[3] = *((uint32_t *)v122 + 3);
      v62 = v191;
      ++v195;
      if ( v191 <= 2 )
        goto LABEL_89;
    }
    while ( 1 )
    {
      if ( v191 > 0 )
      {
        if ( *(uint32_t *)v190 == v67 )
        {
          v70 = v190;
          v171 = 0;
          v69 = 0;
LABEL_96:
          v83 = v162;
          if ( (*((uint32_t *)v165 + 4) & 0x3FFFFFFF) == v162 )
          {
            v163 = v70;
            hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v140, 2, v199);
            v70 = v163;
            v83 = *((uint32_t *)v165 + 3);
          }
          *(uint16_t *)(*((uint32_t *)v165 + 2) + 2 * v83) = v67;
          v84 = v190;
          v85 = *((uint32_t *)v165 + 3) + 1;
          *((uint32_t *)v165 + 3) = v85;
          v162 = v85;
          v67 = *((uint32_t *)v70 + 1);
          v86 = v191 - 1;
          if ( v69 != --v191 )
          {
            v88 = &v84[8 * v86];
            v89 = &v84[v171];
            *(uint32_t *)v89 = *(uint32_t *)v88;
            *((uint32_t *)v89 + 1) = *((uint32_t *)v88 + 1);
            v162 = *((uint32_t *)v165 + 3);
          }
          goto LABEL_81;
        }
        v68 = v190 + 8;
        v69 = 0;
        while ( ++v69 != v191 )
        {
          v171 = 8 * v69;
          v70 = v68;
          v68 += 8;
          if ( *((uint32_t *)v68 - 2) == v67 )
            goto LABEL_96;
        }
      }
      v71 = v162;
      if ( v162 == 0 )
      {
        v62 = v191;
        goto LABEL_70;
      }
      --v162;
      v67 = *(uint16_t *)(*((uint32_t *)v165 + 2) + 2 * v71 - 2);
      *((uint32_t *)v165 + 3) = v162;
LABEL_81:
      if ( v158 == v67 )
        goto LABEL_82;
    }
  }
LABEL_89:
  if ( v153 != 0 )
  {
    v172 = hkpConvexVerticesConnectivityUtil::calculateVolume((hkpConvexVerticesConnectivityUtil::Self *)&v178, v165);
    if ( v120 > v172 )
    {
      if ( *((uint16_t *)v165 + 3) == 0 )
        goto LABEL_94;
      do
      {
        v79 = *((uint32_t *)v165 + 1);
        HIWORD(v78) = HIWORD(v79);
        LOWORD(v78) = 0;
        v80 = v78 | (uint16_t)(v79 - 1);
        v81 = v79;
      }
      while ( v81 != __sync_val_compare_and_swap((volatile int32_t *)v165 + 1, v81, v80) );
      if ( (uint16_t)v80 != 0 )
        goto LABEL_94;
LABEL_154:
      v82 = nullptr;
      G4_VCALL<void>(v165, 16);
      goto LABEL_128;
    }
    if ( *((uint32_t *)v165 + 6) < (*((uint32_t *)v165 + 7) & 0x3FFFFFFF) )
      hkArrayUtil::reduce(&hkContainerHeapAllocator::s_alloc, (int *)v165 + 5, 1, 0, *((uint32_t *)v165 + 6));
    v189[2] = 16;
    v189[0] = v178;
    v189[1] = v179;
    v109 = *((uint32_t *)v127 + 4);
    v99 = (*(int (**)(uint32_t, int))(**((uint32_t **)*v123 + 11) + 8))(*((uint32_t *)*v123 + 11), 112);
    hkpConvexVerticesShape::Construct((hkpConvexVerticesShape::Self *)v99, (int)(uintptr_t)(v189), (int)(uintptr_t)(&v194), v109);
    hkpConvexVerticesShape::setConnectivity((hkpConvexVerticesShape::Self *)v99, v165, false);
LABEL_122:
    if ( *((uint16_t *)v165 + 3) != 0 )
    {
      do
      {
        v104 = *((uint32_t *)v165 + 1);
        HIWORD(v103) = HIWORD(v104);
        LOWORD(v103) = 0;
        v105 = v103 | (uint16_t)(v104 - 1);
        v106 = v104;
      }
      while ( v106 != __sync_val_compare_and_swap((volatile int32_t *)v165 + 1, v106, v105) );
      if ( (uint16_t)v105 == 0 )
        G4_VCALL<void>(v165, 16);
    }
    v82 = nullptr;
    if ( v99 != 0 )
    {
      v82 = (hkpConvexVerticesShape::Self *)v99;
      *(uint32_t *)(v99 + 12) = *((uint32_t *)v127 + 3);
    }
    goto LABEL_128;
  }
  hkpConvexVerticesShape::BuildConfig::Construct((hkpConvexVerticesShape::BuildConfig::Self *)v189);
  LOWORD(v189[0]) = 1;
  v183[0] = v178;
  v183[1] = v179;
  v189[3] = 0;
  v189[4] = 0;
  v183[2] = 16;
  v99 = (*(int (**)(uint32_t, int))(**((uint32_t **)*v123 + 11) + 8))(*((uint32_t *)*v123 + 11), 112);
  hkpConvexVerticesShape::Construct(
    (hkpConvexVerticesConnectivity::Self *)v99,
    (hkpConvexVerticesConnectivity::Self *)v183,
    (int)(uintptr_t)(v189));
  if ( *(int *)(v99 + 76) > 2 )
  {
    v100 = *(uint32_t *)(v99 + 88);
    v101 = 0;
    *(uint32_t *)(v99 + 16) = *((uint32_t *)v127 + 4);
    if ( v100 > 0 )
    {
      do
      {
        v102 = v101++;
        *(float *)(*(uint32_t *)(v99 + 84) + 16 * v102 + 12) = *(float *)(*(uint32_t *)(v99 + 84) + 16 * v102 + 12)
                                                           - *((float *)v127 + 4);
      }
      while ( *(uint32_t *)(v99 + 88) > v101 );
    }
    goto LABEL_122;
  }
  if ( *(uint16_t *)(v99 + 6) != 0 )
  {
    do
    {
      v113 = *(uint32_t *)(v99 + 4);
      HIWORD(v112) = HIWORD(v113);
      LOWORD(v112) = 0;
      v114 = v112 | (uint16_t)(v113 - 1);
      v115 = v113;
    }
    while ( v115 != __sync_val_compare_and_swap((volatile int32_t *)(v99 + 4), v115, v114) );
    if ( (uint16_t)v114 == 0 )
      G4_VCALL<void>(v99, 16);
  }
  if ( *((uint16_t *)v165 + 3) != 0 )
  {
    do
    {
      v117 = *((uint32_t *)v165 + 1);
      HIWORD(v116) = HIWORD(v117);
      LOWORD(v116) = 0;
      v118 = v116 | (uint16_t)(v117 - 1);
      v119 = v117;
    }
    while ( v119 != __sync_val_compare_and_swap((volatile int32_t *)v165 + 1, v119, v118) );
    if ( (uint16_t)v118 == 0 )
      goto LABEL_154;
  }
LABEL_94:
  v82 = nullptr;
LABEL_128:
  v191 = 0;
  if ( v192 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v190,
      8 * v192);
  v190 = nullptr;
  v192 = 0x80000000;
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v181,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  v198 = (hkpConvexVerticesConnectivityUtil::Self **)v181;
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  v195 = 0;
  if ( v196 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v194,
      16 * v196);
  v194 = 0;
  v196 = 0x80000000;
LABEL_102:
  v179 = 0;
  if ( v180 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v178,
      16 * v180);
  v178 = 0;
  v180 = 0x80000000;
  v176 = 0;
  if ( v177 >= 0 )
    (*(void (**)(uint32_t *, int, int))(hkContainerTempAllocator::s_alloc[0] + 20))(
      (uint32_t *)(hkContainerTempAllocator::s_alloc),
      v175,
      12 * v177);
  v90 = 0;
  if ( v184 != v187 )
    v90 = v185;
  v185 = v90;
  v177 = 0x80000000;
  v175 = 0;
  v91 = (16 * v188 + 127) & 0xFFFFFF80;
  v92 = *v123;
  if ( v91 > *((uint32_t *)*v123 + 2) || *((void **)v92 + 3) != (char *)v187 + v91 || v187 == *((void **)v92 + 5) )
    hkLifoAllocator::slowBlockFree(v92, (char *)v187, (16 * v188 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v92 + 3) = (uint32_t)(uintptr_t)(v187);
  v185 = 0;
  if ( v186 >= 0 )
    (*(void (**)(uint32_t *, char *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v184,
      16 * v186);
  return v82;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getSize  (binary VA: 0x16d2440)
// Original: hkpConvexVerticesShape::getSize
// ----------------------------------------------------------------------------
int hkpConvexVerticesShape::getSize()
{
  return 112;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::calcSizeForSpu  (binary VA: 0x16d2450)
// Original: hkpConvexVerticesShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpConvexVerticesShape::calcSizeForSpu()
{
  return 112;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getNumCollisionSpheres  (binary VA: 0x16d2460)
// Original: hkpConvexVerticesShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpConvexVerticesShape::getNumCollisionSpheres(hkpConvexVerticesShape::Self *self)
{
  return *((uint32_t *)self + 19);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getFirstVertex  (binary VA: 0x16d2470)
// Original: hkpConvexVerticesShape::getFirstVertex
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpConvexVerticesShape::getFirstVertex(hkpConvexVerticesShape::Self *self, hkVector4f::Self *a2)
{
  int *v3;
  int v4; // xmm1_4
  int v5; // xmm2_4
  int v6; // xmm0_4

  v3 = *((int **)self + 16);
  v4 = v3[8];
  v5 = v3[4];
  v6 = *v3;
  *((uint32_t *)a2 + 3) = 0;
  *(uint32_t *)a2 = v6;
  *((uint32_t *)a2 + 1) = v5;
  *((uint32_t *)a2 + 2) = v4;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getAabb  (binary VA: 0x16d24a0)
// Original: hkpConvexVerticesShape::getAabb
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpConvexVerticesShape::getAabb(hkpConvexVerticesShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  float v5; // xmm5_4
  float v6; // xmm4_4
  float v7; // xmm0_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm6_4
  float v18;
  float v19;
  float v20;

  v5 = *((float *)self + 8);
  v6 = *((float *)self + 9);
  v7 = *((float *)self + 10);
  v18 = (float)(fabs(*(float *)a2 * v5) + fabs(*((float *)a2 + 4) * v6))
      + (float)((float)(a3 + *((float *)self + 4)) + fabs(*((float *)a2 + 8) * v7));
  v20 = (float)(fabs(*((float *)a2 + 1) * v5) + fabs(*((float *)a2 + 5) * v6))
      + (float)((float)(a3 + *((float *)self + 4)) + fabs(*((float *)a2 + 9) * v7));
  v8 = fabs(*((float *)a2 + 2) * v5) + fabs(*((float *)a2 + 6) * v6);
  v9 = *((float *)self + 12);
  v10 = fabs(v5 * *((float *)a2 + 3)) + fabs(v6 * *((float *)a2 + 7));
  v11 = *((float *)self + 14);
  v12 = (float)((float)(a3 + *((float *)self + 4)) + fabs(*((float *)a2 + 10) * v7)) + v8;
  v19 = (float)((float)(a3 + *((float *)self + 4)) + fabs(v7 * *((float *)a2 + 11))) + v10;
  v13 = *((float *)self + 13);
  v14 = (float)((float)((float)(*(float *)a2 * v9) + (float)(*((float *)a2 + 4) * v13))
              + (float)(*((float *)a2 + 8) * v11))
      + *((float *)a2 + 12);
  v15 = (float)((float)((float)(*((float *)a2 + 1) * v9) + (float)(*((float *)a2 + 5) * v13))
              + (float)(*((float *)a2 + 9) * v11))
      + *((float *)a2 + 13);
  v16 = (float)((float)((float)(*((float *)a2 + 2) * v9) + (float)(*((float *)a2 + 6) * v13))
              + (float)(*((float *)a2 + 10) * v11))
      + *((float *)a2 + 14);
  v17 = (float)((float)((float)(v9 * *((float *)a2 + 3)) + (float)(v13 * *((float *)a2 + 7)))
              + (float)(v11 * *((float *)a2 + 11)))
      + *((float *)a2 + 15);
  *((float *)a4 + 4) = v18 + v14;
  *(float *)a4 = v14 - v18;
  *((float *)a4 + 5) = v20 + v15;
  *((float *)a4 + 6) = v12 + v16;
  *((float *)a4 + 1) = v15 - v20;
  *((float *)a4 + 2) = v16 - v12;
  *((float *)a4 + 7) = v19 + v17;
  *((float *)a4 + 3) = v17 - v19;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::convertVertexIdsToVertices  (binary VA: 0x16d26c0)
// Original: hkpConvexVerticesShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
int hkpConvexVerticesShape::convertVertexIdsToVertices(int a1, uint16_t *a2, int a3, int a4)
{
  uint16_t *v4;
  int result;
  int v6;
  int v7;
  int v8;
  int *v9;
  int v10; // xmm1_4
  int v11; // xmm2_4
  int v12; // xmm0_4

  v4 = a2;
  result = a4;
  if ( a3 > 0 )
  {
    do
    {
      result += 16;
      v6 = *v4 & 3;
      v7 = (uint16_t)*v4;
      v8 = v7 | 0x3F000000;
      ++v4;
      v9 = (int *)(*(uint32_t *)(a1 + 64) + 48 * (v7 >> 2) + 4 * v6);
      v10 = v9[8];
      v11 = v9[4];
      v12 = *v9;
      *(uint32_t *)(result - 4) = v8;
      *(uint32_t *)(result - 16) = v12;
      *(uint32_t *)(result - 12) = v11;
      *(uint32_t *)(result - 8) = v10;
    }
    while ( v4 != &a2[a3] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getCentre  (binary VA: 0x16d2750)
// Original: hkpConvexVerticesShape::getCentre
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpConvexVerticesShape::getCentre(hkpConvexVerticesShape::Self *self, hkVector4f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 15);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getCollisionSpheres  (binary VA: 0x16d2770)
// Original: hkpConvexVerticesShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpConvexVerticesShape::getCollisionSpheres(hkpConvexVerticesShape::Self *self, hkSphere::Self *a2)
{
  int v2; // xmm4_4
  int *v3;
  int v4;
  char *v5;
  char *v6;
  int v7;
  int v8; // xmm1_4
  int v9; // xmm7_4
  int v10; // xmm2_4
  int v11; // xmm0_4
  int v12; // xmm3_4
  int v13; // xmm5_4
  int v14; // xmm6_4
  int v15;
  hkSphere::Self *v16;
  unsigned int v17;
  int v18;
  hkSphere::Self *v19;
  int v20;
  int v21; // xmm3_4
  int v22; // xmm1_4
  int v23;
  int v24; // xmm6_4
  int v25; // xmm0_4
  int v26; // xmm2_4
  int v28;
  uint32_t *v29;
  uint32_t *v30;
  int *v31;
  int v32;
  int v33;
  hkSphere::Self *v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int v39;

  v2 = *((uint32_t *)self + 4);
  v3 = *((int **)self + 16);
  v31 = v3;
  v28 = *((uint32_t *)self + 19);
  v33 = v28 - 1;
  if ( v28 - 1 <= 2 )
  {
    v19 = a2;
    v20 = *((uint32_t *)self + 19) - 1;
  }
  else
  {
    v4 = *((uint32_t *)self + 16);
    v30 = (uint32_t *)(v3 + 8);
    v34 = a2;
    v29 = (uint32_t *)(v3 + 4);
    v5 = (char *)a2 + 32;
    v6 = (char *)a2 + 16;
    do
    {
      v7 = v4 - (uint32_t)(uintptr_t)(v31);
      v4 += 48;
      v8 = *(uint32_t *)(v4 - 40);
      v9 = *(uint32_t *)(v4 - 36);
      v39 = *(uint32_t *)((char *)v30 + v7 + 8);
      v37 = *(uint32_t *)((char *)v29 + v7 + 4);
      v10 = *(uint32_t *)(v4 - 12);
      v11 = *(uint32_t *)(v4 - 4);
      v12 = *(uint32_t *)(v4 - 44);
      v36 = *(uint32_t *)(v4 - 32);
      v32 = *(uint32_t *)(v4 - 24);
      v13 = *(uint32_t *)(v4 - 16);
      v14 = *(uint32_t *)(v4 - 20);
      *(uint32_t *)v34 = *(uint32_t *)(v4 - 48);
      *((uint32_t *)v34 + 1) = v36;
      *((uint32_t *)v34 + 2) = v13;
      *((uint32_t *)v34 + 3) = v2;
      v15 = v34 - a2;
      v33 -= 4;
      *(uint32_t *)&v6[v15 + 4] = v37;
      *(uint32_t *)&v6[v15] = v12;
      *(uint32_t *)&v6[v15 + 8] = v10;
      *(uint32_t *)&v6[v15 + 12] = v2;
      *(uint32_t *)&v5[v15] = v8;
      *(uint32_t *)&v5[v15 + 4] = v32;
      *(uint32_t *)&v5[v15 + 8] = v39;
      *(uint32_t *)&v5[v15 + 12] = v2;
      v16 = v34;
      *((uint32_t *)v34 + 12) = v9;
      v34 = (hkSphere::Self *)((char *)v34 + 64);
      *((uint32_t *)v16 + 13) = v14;
      *((uint32_t *)v16 + 14) = v11;
      *((uint32_t *)v16 + 15) = v2;
    }
    while ( v33 > 2 );
    v17 = (unsigned int)(v28 - 4) >> 2;
    v18 = -4 * v17++;
    v19 = (hkSphere::Self *)((char *)a2 + 64 * v17);
    v20 = v28 + v18 - 5;
    v31 += 12 * v17;
  }
  if ( v20 >= 0 )
  {
    v21 = v31[1];
    v22 = v31[4];
    v35 = *v31;
    v38 = v31[5];
    v23 = v31[10];
    v24 = v31[6];
    v25 = v31[8];
    v26 = v31[9];
    if ( v20 != 1 )
    {
      if ( v20 != 2 )
      {
LABEL_10:
        *(uint32_t *)v19 = v35;
        *((uint32_t *)v19 + 1) = v22;
        *((uint32_t *)v19 + 2) = v25;
        *((uint32_t *)v19 + 3) = v2;
        return a2;
      }
      *((uint32_t *)v19 + 8) = v31[2];
      *((uint32_t *)v19 + 10) = v23;
      *((uint32_t *)v19 + 9) = v24;
      *((uint32_t *)v19 + 11) = v2;
    }
    *((uint32_t *)v19 + 4) = v21;
    *((uint32_t *)v19 + 5) = v38;
    *((uint32_t *)v19 + 6) = v26;
    *((uint32_t *)v19 + 7) = v2;
    goto LABEL_10;
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getSupportingVertex  (binary VA: 0x16d2a50)
// Original: hkpConvexVerticesShape::getSupportingVertex
// ----------------------------------------------------------------------------
uint32_t * hkpConvexVerticesShape::getSupportingVertex(int a1, float *a2, uint32_t *a3)
{
  int v3;
  int v4;
  float v5; // xmm4_4
  float *v6;
  float *v7;
  float v8; // xmm5_4
  float v9; // xmm7_4
  float *v10;
  float v11; // xmm2_4
  float v12; // xmm3_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  int v15;
  int v16;
  int v17;
  int v18;
  int v19;
  int v20;
  int *v21;
  int v22; // xmm1_4
  int v23; // xmm2_4
  int v24; // xmm0_4
  int v26;
  float v27;
  float v28;
  float v29;
  float v30;
  int v31;
  unsigned int v32;

  v29 = -3.40282e38f;
  v3 = *(uint32_t *)(a1 + 64);
  v30 = -3.40282e38f;
  v4 = 4 * *(uint32_t *)(a1 + 68);
  v28 = -3.40282e38f;
  v27 = -3.40282e38f;
  if ( v4 <= 0 )
  {
    v19 = 1056964608;
    v20 = 0;
    v18 = 0;
    goto LABEL_17;
  }
  v5 = *a2;
  v6 = (float *)(v3 + 32);
  v7 = *(float **)(a1 + 64);
  v8 = a2[2];
  v31 = v4 + 3;
  v9 = a2[1];
  v26 = 3;
  v32 = 0;
  v10 = (float *)(v3 + 20);
  do
  {
    v11 = (float)((float)(*v7 * v5) + (float)(*(v10 - 1) * v9)) + (float)(*v6 * v8);
    v12 = (float)((float)(v7[1] * v5) + (float)(*v10 * v9)) + (float)(v6[1] * v8);
    v13 = (float)((float)(v7[2] * v5) + (float)(v10[1] * v9)) + (float)(v6[2] * v8);
    v14 = (float)((float)(v7[3] * v5) + (float)(v10[2] * v9)) + (float)(v6[3] * v8);
    v15 = 4 * (v13 > v28);
    if ( v14 > v27 )
      v15 = 4 * (v13 > v28) + 8;
    v16 = (v11 > v29) | (2 * (v12 > v30)) | v15;
    if ( v16 != 0 )
    {
      switch ( v16 )
      {
        case 1:
          goto LABEL_13;
        case 2:
          v27 = (float)((float)(v7[1] * v5) + (float)(*v10 * v9)) + (float)(v6[1] * v8);
          v32 = v26 - 2;
          goto LABEL_14;
        case 4:
          v12 = (float)((float)(v7[2] * v5) + (float)(v10[1] * v9)) + (float)(v6[2] * v8);
          v27 = v12;
          v32 = v26 - 1;
          goto LABEL_14;
        case 8:
          goto LABEL_18;
        case 13:
          goto LABEL_11;
        case 14:
          goto LABEL_8;
        default:
          if ( v11 <= v12 )
          {
LABEL_8:
            v17 = v26;
            if ( v12 > v13 )
            {
              if ( v12 > v14 )
              {
                v27 = (float)((float)(v7[1] * v5) + (float)(*v10 * v9)) + (float)(v6[1] * v8);
                v32 = v26 - 2;
                goto LABEL_14;
              }
LABEL_22:
              v32 = v17;
              v12 = (float)((float)(v7[3] * v5) + (float)(v10[2] * v9)) + (float)(v6[3] * v8);
              v27 = v12;
              goto LABEL_14;
            }
            if ( v13 <= v14 )
              goto LABEL_22;
            goto LABEL_24;
          }
LABEL_11:
          if ( v11 <= v13 )
          {
            v17 = v26;
            if ( v13 <= v14 )
              goto LABEL_22;
LABEL_24:
            v12 = (float)((float)(v7[2] * v5) + (float)(v10[1] * v9)) + (float)(v6[2] * v8);
            v27 = v12;
            v32 = v17 - 1;
            goto LABEL_14;
          }
          if ( v11 <= v14 )
          {
LABEL_18:
            v12 = (float)((float)(v7[3] * v5) + (float)(v10[2] * v9)) + (float)(v6[3] * v8);
            v27 = v12;
            v32 = v26;
          }
          else
          {
LABEL_13:
            v12 = (float)((float)(*v7 * v5) + (float)(*(v10 - 1) * v9)) + (float)(*v6 * v8);
            v27 = v12;
            v32 = v26 - 3;
          }
LABEL_14:
          v28 = v12;
          v30 = v12;
          v29 = v12;
          break;
      }
    }
    v7 += 12;
    v10 += 12;
    v6 += 12;
    v26 += 4;
  }
  while ( v26 != v31 );
  v18 = v32 & 3;
  v19 = v32 | 0x3F000000;
  v20 = 48 * (v32 >> 2);
LABEL_17:
  v21 = (int *)(*(uint32_t *)(a1 + 64) + v20 + 4 * v18);
  v22 = v21[8];
  v23 = v21[4];
  v24 = *v21;
  *a3 = v24;
  a3[1] = v23;
  a3[2] = v22;
  a3[3] = v19;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::Destroy  (binary VA: 0x16d2d40)
// Original: hkpConvexVerticesShape::~hkpConvexVerticesShape
// ----------------------------------------------------------------------------
void hkpConvexVerticesShape::Destroy(hkpConvexVerticesShape::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  v1 = *((uint32_t *)self + 24);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B068);
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
  v6 = *((uint32_t *)self + 23);
  *((uint32_t *)self + 22) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 21),
      16 * v6);
  v7 = *((uint32_t *)self + 18);
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  *((uint32_t *)self + 17) = 0;
  if ( v7 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      48 * v7);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::Destroy_ea16d2e30  (binary VA: 0x16d2e30)
// Original: hkpConvexVerticesShape::~hkpConvexVerticesShape
// ----------------------------------------------------------------------------
void hkpConvexVerticesShape::Destroy_ea16d2e30(hkpConvexVerticesShape::Self *self)
{
  int v1;
  int v2;

  hkpConvexVerticesShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 112;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::castRay  (binary VA: 0x16d3cc0)
// Original: hkpConvexVerticesShape::castRay
// ----------------------------------------------------------------------------
bool * hkpConvexVerticesShape::castRay(bool *a1, int a2, int a3, uint32_t *a4)
{
  int v4;
  int v5;
  int *address;
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v10;
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm1_4
  int v14;
  int v15;
  float v16; // xmm1_4
  float v17; // xmm1_4
  char v18;
  int v19;
  int v20;
  uint32_t *v21;
  uint64_t v22; // rax
  int *v24;
  int v25;
  uint32_t *v26;
  uint64_t v27; // rax
  __m128i v28;
  bool v29;
  float *v30;
  __m128i v31;
  __m128i v32;
  bool v33;
  char v34; // si
  char v35;
  char v36;
  char v37;
  int v38;
  int v39;
  float v40; // xmm6_4
  int v41;
  int v42; // xmm0_4
  int v43;
  int v44;
  int v45;
  uint32_t *v46;
  uint64_t v47; // rax
  int v48;
  int v49;
  float v50; // xmm7_4
  int v51;
  int v52;
  float v53; // xmm7_4
  int v54;
  int v55;
  typedef bool _g4_t_v56;
  typedef int *_g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef int *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef int _g4_t_v64;
  typedef int _g4_t_v65;
  typedef float _g4_t_v66;
  typedef uint32_t *_g4_t_v67;
  typedef bool *_g4_t_v68;
  typedef int _g4_t_v69[3];
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef float _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef int _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef int _g4_t_v85;
  typedef float _g4_t_v86;
  typedef float _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef int _g4_t_v92;
  typedef int _g4_t_v93;
  typedef int _g4_t_v94;
  typedef int _g4_t_v95;
  typedef int _g4_t_v96;
  typedef int _g4_t_v97;
  typedef int _g4_t_v98;
  typedef int _g4_t_v99;
  typedef int _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef bool **_g4_t_v105;
  enum : size_t {
    _g4_s0 = 288u,
    _g4_s1 = (0u + sizeof(_g4_t_v56)) > _g4_s0 ? (0u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v57)) > _g4_s1 ? (4u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v58)) > _g4_s2 ? (8u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v59)) > _g4_s3 ? (12u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v60)) > _g4_s4 ? (16u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v61)) > _g4_s5 ? (16u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v62)) > _g4_s6 ? (16u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v63)) > _g4_s7 ? (16u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v64)) > _g4_s8 ? (20u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v65)) > _g4_s9 ? (20u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v66)) > _g4_s10 ? (20u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v67)) > _g4_s11 ? (24u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v68)) > _g4_s12 ? (28u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (32u + sizeof(_g4_t_v69)) > _g4_s13 ? (32u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v70)) > _g4_s14 ? (44u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (48u + sizeof(_g4_t_v71)) > _g4_s15 ? (48u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (52u + sizeof(_g4_t_v72)) > _g4_s16 ? (52u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (56u + sizeof(_g4_t_v73)) > _g4_s17 ? (56u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (60u + sizeof(_g4_t_v74)) > _g4_s18 ? (60u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (64u + sizeof(_g4_t_v75)) > _g4_s19 ? (64u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (68u + sizeof(_g4_t_v76)) > _g4_s20 ? (68u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (84u + sizeof(_g4_t_v77)) > _g4_s21 ? (84u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (88u + sizeof(_g4_t_v78)) > _g4_s22 ? (88u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v79)) > _g4_s23 ? (92u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v80)) > _g4_s24 ? (96u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (100u + sizeof(_g4_t_v81)) > _g4_s25 ? (100u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (104u + sizeof(_g4_t_v82)) > _g4_s26 ? (104u + sizeof(_g4_t_v82)) : _g4_s26,
    _g4_s28 = (108u + sizeof(_g4_t_v83)) > _g4_s27 ? (108u + sizeof(_g4_t_v83)) : _g4_s27,
    _g4_s29 = (112u + sizeof(_g4_t_v84)) > _g4_s28 ? (112u + sizeof(_g4_t_v84)) : _g4_s28,
    _g4_s30 = (116u + sizeof(_g4_t_v85)) > _g4_s29 ? (116u + sizeof(_g4_t_v85)) : _g4_s29,
    _g4_s31 = (120u + sizeof(_g4_t_v86)) > _g4_s30 ? (120u + sizeof(_g4_t_v86)) : _g4_s30,
    _g4_s32 = (124u + sizeof(_g4_t_v87)) > _g4_s31 ? (124u + sizeof(_g4_t_v87)) : _g4_s31,
    _g4_s33 = (128u + sizeof(_g4_t_v88)) > _g4_s32 ? (128u + sizeof(_g4_t_v88)) : _g4_s32,
    _g4_s34 = (132u + sizeof(_g4_t_v89)) > _g4_s33 ? (132u + sizeof(_g4_t_v89)) : _g4_s33,
    _g4_s35 = (136u + sizeof(_g4_t_v90)) > _g4_s34 ? (136u + sizeof(_g4_t_v90)) : _g4_s34,
    _g4_s36 = (140u + sizeof(_g4_t_v91)) > _g4_s35 ? (140u + sizeof(_g4_t_v91)) : _g4_s35,
    _g4_s37 = (144u + sizeof(_g4_t_v92)) > _g4_s36 ? (144u + sizeof(_g4_t_v92)) : _g4_s36,
    _g4_s38 = (148u + sizeof(_g4_t_v93)) > _g4_s37 ? (148u + sizeof(_g4_t_v93)) : _g4_s37,
    _g4_s39 = (152u + sizeof(_g4_t_v94)) > _g4_s38 ? (152u + sizeof(_g4_t_v94)) : _g4_s38,
    _g4_s40 = (156u + sizeof(_g4_t_v95)) > _g4_s39 ? (156u + sizeof(_g4_t_v95)) : _g4_s39,
    _g4_s41 = (160u + sizeof(_g4_t_v96)) > _g4_s40 ? (160u + sizeof(_g4_t_v96)) : _g4_s40,
    _g4_s42 = (164u + sizeof(_g4_t_v97)) > _g4_s41 ? (164u + sizeof(_g4_t_v97)) : _g4_s41,
    _g4_s43 = (168u + sizeof(_g4_t_v98)) > _g4_s42 ? (168u + sizeof(_g4_t_v98)) : _g4_s42,
    _g4_s44 = (172u + sizeof(_g4_t_v99)) > _g4_s43 ? (172u + sizeof(_g4_t_v99)) : _g4_s43,
    _g4_s45 = (176u + sizeof(_g4_t_v100)) > _g4_s44 ? (176u + sizeof(_g4_t_v100)) : _g4_s44,
    _g4_s46 = (180u + sizeof(_g4_t_v101)) > _g4_s45 ? (180u + sizeof(_g4_t_v101)) : _g4_s45,
    _g4_s47 = (184u + sizeof(_g4_t_v102)) > _g4_s46 ? (184u + sizeof(_g4_t_v102)) : _g4_s46,
    _g4_s48 = (188u + sizeof(_g4_t_v103)) > _g4_s47 ? (188u + sizeof(_g4_t_v103)) : _g4_s47,
    _g4_s49 = (192u + sizeof(_g4_t_v104)) > _g4_s48 ? (192u + sizeof(_g4_t_v104)) : _g4_s48,
    _g4_s50 = (204u + sizeof(_g4_t_v105)) > _g4_s49 ? (204u + sizeof(_g4_t_v105)) : _g4_s49
  };
  alignas(16) uint8_t _g4_sf[_g4_s50];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 0u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 4u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 8u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 12u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 16u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 16u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 16u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 16u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 20u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 20u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 20u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 24u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 28u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 32u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 44u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 48u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 52u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 56u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 60u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 64u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 68u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 84u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 88u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 96u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 100u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 104u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 108u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 112u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 116u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 120u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 124u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 128u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 132u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 136u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 140u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 144u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 148u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 152u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 156u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 160u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 164u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 168u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 172u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 176u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 180u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 184u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 188u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 192u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 204u);

  v105 = &a1;
  v4 = a2;
  v5 = a3;
  v68 = a1;
  v67 = a4;
  if ( *(uint32_t *)(a2 + 88) == 0 )
  {
    address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
    v7 = *address;
    v60 = address;
    v8 = *(uint32_t **)(*address + 4);
    v64 = *(uint32_t *)(v7 + 4);
    if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v7 + 12) )
    {
      *v8 = (uint32_t)(uintptr_t)("TtconvexVertCastRayGSK");
      v9 = __rdtsc();
      *(uint32_t *)(v64 + 4) = v9;
      *(uint32_t *)(v7 + 4) = v64 + 12;
    }
    v10 = *(uint32_t *)(v4 + 64);
    v11 = *(float *)(v4 + 16) + 0.0;
    v103 = 0;
    v104 = 0;
    v85 = 1065353216;
    v97 = 0;
    v86 = 0.0;
    v87 = 0.0;
    v101 = v11;
    v88 = 0;
    v89 = 0;
    v90 = 1065353216;
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v102 = (float)(v11 + 0.001f) * (float)(v11 + 0.001f);
    v94 = 0;
    v95 = 1065353216;
    v96 = 0;
    v98 = 0;
    v12 = *(float *)(v5 + 16);
    v77 = *(float *)v5;
    v13 = v12 - *(float *)v5;
    v99 = 0;
    v14 = *(uint32_t *)(v5 + 4);
    v100 = 0;
    v78 = v14;
    v72 = 0;
    v15 = *(uint32_t *)(v5 + 8);
    v73 = 0;
    v79 = v15;
    v81 = v13;
    v16 = *(float *)(v5 + 20);
    v80 = *(uint32_t *)(v5 + 12);
    v17 = v16 - *(float *)(v5 + 4);
    v74 = 0;
    v75 = 0;
    v82 = v17;
    v83 = *(float *)(v5 + 24) - *(float *)(v5 + 8);
    v84 = *(float *)(v5 + 28) - *(float *)(v5 + 12);
    v76 = v67[4];
    v18 = hkcdGsk::rayCast(v10, *(uint32_t *)(v4 + 76), &v77, &v72);
    if ( v18 != 0 )
    {
      v19 = v72;
      v67[4] = v76;
      *v67 = v19;
      v67[1] = v73;
      v67[2] = v74;
      v67[3] = v75;
      v67[v67[16] + 8] = -1;
    }
    v20 = *v60;
    v21 = *(uint32_t **)(*v60 + 4);
    if ( (unsigned int)(uintptr_t)(v21) < *(uint32_t *)(*v60 + 12) )
    {
      *v21 = (uint32_t)(uintptr_t)("Et");
      v22 = __rdtsc();
      v21[1] = v22;
      *(uint32_t *)(v20 + 4) = (uint32_t)(uintptr_t)(v21 + 3);
    }
    *v68 = v18;
    return v68;
  }
  v61 = *(uint32_t *)(a2 + 88);
  v24 = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v25 = *v24;
  v57 = v24;
  v58 = v61;
  v26 = *(uint32_t **)(*v24 + 4);
  v65 = *(uint32_t *)(v25 + 4);
  if ( (unsigned int)(uintptr_t)(v26) < *(uint32_t *)(v25 + 12) )
  {
    *v26 = (uint32_t)(uintptr_t)("TtconvexVertCastRayPlaneEq");
    v27 = __rdtsc();
    *(uint32_t *)(v65 + 4) = v27;
    *(uint32_t *)(v25 + 4) = v65 + 12;
    v58 = *(uint32_t *)(v4 + 88);
  }
g4_m128_raw(v28) = *(unsigned int *)(v5 + 16);
  *(float *)g4_m128_ptr<int32_t>(v28) = *(float *)g4_m128_ptr<int32_t>(v28) - *(float *)v5;
  v29 = false;
g4_m128_raw(v31) = *(unsigned int *)(v5 + 20);
  v30 = *(float **)(v4 + 84);
  *(float *)g4_m128_ptr<int32_t>(v31) = *(float *)g4_m128_ptr<int32_t>(v31) - *(float *)(v5 + 4);
g4_m128_raw(v32) = *(unsigned int *)(v5 + 24);
  v66 = 1.0;
  if ( *(float *)g4_m128_ptr<int32_t>(v28) == 0.0 )
    v29 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v28));
  *(float *)g4_m128_ptr<int32_t>(v32) = *(float *)g4_m128_ptr<int32_t>(v32) - *(float *)(v5 + 8);
  if ( *(float *)g4_m128_ptr<int32_t>(v31) == 0.0 )
  {
    v33 = *(float *)g4_m128_ptr<int32_t>(v32) == 0.0;
    v34 = v29 | 2;
    if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v32)) )
      goto LABEL_47;
  }
  else
  {
    v33 = *(float *)g4_m128_ptr<int32_t>(v32) == 0.0;
    v34 = v29;
    if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v32)) )
    {
LABEL_47:
      v35 = 8;
      v36 = 0;
      goto LABEL_17;
    }
  }
  if ( !v33 )
    goto LABEL_47;
  v35 = 12;
  v36 = 4;
LABEL_17:
  if ( 0.0 != 1.0 )
    v35 = v36;
  v37 = v34 | v35;
  if ( (v37 & 1) != 0 )
  {
    v56 = true;
    v62 = 0;
g4_m128_raw(v28) = 0;
  }
  else
  {
    v62 = _mm_cvtsi128_si32(v28);
    v56 = *(float *)g4_m128_ptr<int32_t>(v28) >= 0.0;
  }
  v38 = _mm_cvtsi128_si32(v31);
  if ( (v37 & 2) != 0 )
  {
    v38 = 0;
g4_m128_raw(v31) = 0;
  }
  v39 = _mm_cvtsi128_si32(v32);
  if ( (v37 & 4) != 0 )
  {
    v39 = 0;
g4_m128_raw(v32) = 0;
  }
  if ( (v37 & 8) != 0 )
    v66 = 0.0;
  v40 = 3.40282e38f;
  if ( v62 < 0 )
    v40 = -3.40282e38f;
  v63 = 3.40282e38f;
  if ( v38 < 0 )
    v63 = -3.40282e38f;
  v59 = 3.40282e38f;
  if ( v39 < 0 )
    v59 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v28) != 0.0 )
  {
    v54 = _mm_cvtsi128_si32(v28);
    v55 = (2130706432 - v54) & ((v54 ^ (v54 + 2139095040)) >> 31);
    v40 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v28)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v28)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)&v55))
                                                        * *(float *)&v55)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)&v55))
                                        * *(float *)&v55))))
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v28)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)&v55))
                                        * *(float *)&v55)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v28) * *(float *)&v55)) * *(float *)&v55));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v31) != 0.0 )
  {
    v51 = _mm_cvtsi128_si32(v31);
    v52 = (2130706432 - v51) & ((v51 ^ (v51 + 2139095040)) >> 31);
    v53 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v31) * *(float *)&v52)) * *(float *)&v52)
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v31)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v31) * *(float *)&v52)) * *(float *)&v52)));
    v63 = v53 * (float)(2.0 - (float)(v53 * *(float *)g4_m128_ptr<int32_t>(v31)));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v32) != 0.0 )
  {
    v48 = _mm_cvtsi128_si32(v32);
    v49 = (2130706432 - v48) & ((v48 ^ (v48 + 2139095040)) >> 31);
    v50 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)&v49)) * *(float *)&v49)
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v32)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v32) * *(float *)&v49)) * *(float *)&v49)));
    v59 = v50 * (float)(2.0 - (float)(v50 * *(float *)g4_m128_ptr<int32_t>(v32)));
  }
  v82 = *(float *)g4_m128_ptr<int32_t>(v31);
  v86 = v63;
  v81 = *(float *)g4_m128_ptr<int32_t>(v28);
  v83 = *(float *)g4_m128_ptr<int32_t>(v32);
  v84 = v66;
  v85 = LODWORD(v40);
  v87 = v59;
  LOBYTE(v41) = *(float *)g4_m128_ptr<int32_t>(v32) >= 0.0 ? 4 : 0;
  if ( v66 >= 0.0 )
    v41 = *(float *)g4_m128_ptr<int32_t>(v32) < 0.0 ? 8 : 12;
  v77 = *(float *)v5;
  v78 = *(uint32_t *)(v5 + 4);
  v79 = *(uint32_t *)(v5 + 8);
  v80 = *(uint32_t *)(v5 + 12);
  v42 = v67[4];
  v88 = v41 & 7 | v56 & 7 | (*(float *)g4_m128_ptr<int32_t>(v31) >= 0.0 ? 2 : 0) | 0x3F000000;
  v70 = v42;
  v71 = 0;
  hkcdRayCastConvex(v69, &v77, v30, v58, (float *)&v71, (float *)&v70, &v72, 0);
  v43 = v69[0];
  if ( v69[0] != 0 )
  {
    v44 = v72;
    v67[4] = v70;
    *v67 = v44;
    v67[1] = v73;
    v67[2] = v74;
    v67[3] = v75;
    v67[v67[16] + 8] = -1;
  }
  v45 = *v57;
  v46 = *(uint32_t **)(*v57 + 4);
  if ( (unsigned int)(uintptr_t)(v46) < *(uint32_t *)(*v57 + 12) )
  {
    *v46 = (uint32_t)(uintptr_t)("Et");
    v47 = __rdtsc();
    v46[1] = v47;
    *(uint32_t *)(v45 + 4) = (uint32_t)(uintptr_t)(v46 + 3);
  }
  *v68 = v43 != 0;
  return v68;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::Construct  (binary VA: 0x16d4450)
// Original: hkpConvexVerticesShape::hkpConvexVerticesShape
// ----------------------------------------------------------------------------
void hkpConvexVerticesShape::Construct(hkpConvexVerticesShape::Self *self, float a2)
{
  *((float *)self + 4) = a2;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 5;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B068);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint8_t *)self + 80) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0x80000000;
  *((uint32_t *)self + 24) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::Construct  (binary VA: 0x16d44d0)
// Original: hkpConvexVerticesShape::hkpConvexVerticesShape
// ----------------------------------------------------------------------------
void hkpConvexVerticesShape::Construct(hkpConvexVerticesShape::Self *self, hkFourTransposedPointsf::Self *a2, int a3, hkVector4f::Self *a4, int a5, const hkAabb::Self *a6, float a7)
{
  int v8;
  float v9; // xmm4_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm2_4
  float v16; // xmm1_4

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B068);
  *((uint32_t *)self + 22) = a5;
  v8 = (a3 + 3) >> 2;
  *((uint32_t *)self + 16) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 17) = v8;
  *((uint32_t *)self + 18) = v8 | 0x80000000;
  *((float *)self + 4) = a7;
  *((uint32_t *)self + 19) = a3;
  *((uint32_t *)self + 21) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 23) = a5 | 0x80000000;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 5;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *((uint8_t *)self + 80) = 0;
  *((uint32_t *)self + 24) = 0;
  v9 = *((float *)a6 + 4) - *(float *)a6;
  *((float *)self + 8) = v9;
  v10 = *((float *)a6 + 5) - *((float *)a6 + 1);
  *((float *)self + 9) = v10;
  v11 = *((float *)a6 + 6) - *((float *)a6 + 2);
  *((float *)self + 10) = v11;
  v12 = *((float *)a6 + 7) - *((float *)a6 + 3);
  *((float *)self + 8) = v9 * 0.5;
  *((float *)self + 9) = v10 * 0.5;
  *((float *)self + 10) = v11 * 0.5;
  *((float *)self + 11) = v12 * 0.5;
  v13 = *(float *)a6 + *((float *)a6 + 4);
  *((float *)self + 12) = v13;
  v14 = *((float *)a6 + 1) + *((float *)a6 + 5);
  *((float *)self + 13) = v14;
  v15 = *((float *)a6 + 2) + *((float *)a6 + 6);
  *((float *)self + 14) = v15;
  v16 = *((float *)a6 + 3) + *((float *)a6 + 7);
  *((float *)self + 12) = v13 * 0.5;
  *((float *)self + 13) = v14 * 0.5;
  *((float *)self + 14) = v15 * 0.5;
  *((float *)self + 15) = v16 * 0.5;
}



// ============================================================================
// Address:   0x16d4630 (size: 65 bytes)
// Symbol:    _ZN22hkpConvexVerticesShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpConvexVerticesShape::hkpConvexVerticesShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN22hkpConvexVerticesShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpConvexVerticesShape::Construct(
        int a1,
        int a2))(hkpConvexVerticesShape::Self * self)
{
  void (**result)(hkpConvexVerticesShape::Self *);

  hkpConvexShape::hkpConvexShape(a1, a2);
  result = (void (**)(hkpConvexVerticesShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209B068));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B068);
  if ( a2 != 0 )
    *(uint8_t *)(a1 + 8) = 5;
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getOriginalVertices  (binary VA: 0x16d4680)
// Original: hkpConvexVerticesShape::getOriginalVertices
// ----------------------------------------------------------------------------
hkArrayUtil::Self * hkpConvexVerticesShape::getOriginalVertices(hkpConvexVerticesShape::Self *self, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a2)
{
  hkpConvexVerticesShape::Self *v2;
  int *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  hkArrayUtil::Self *result;
  int v10;
  typedef int _g4_t_v11;
  typedef uint32_t _g4_t_v12[7];
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v11)) > _g4_s0 ? (0u + sizeof(_g4_t_v11)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v12)) > _g4_s1 ? (4u + sizeof(_g4_t_v12)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 0u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);

  v12[3] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = (int *)a2;
  v4 = 4 * *((uint32_t *)self + 17);
  v5 = *((uint32_t *)a2 + 2) & 0x3FFFFFFF;
  if ( v4 > v5 )
  {
    v6 = 2 * v5;
    if ( v4 >= v6 )
      v6 = 4 * *((uint32_t *)self + 17);
    v11 = 4 * *((uint32_t *)self + 17);
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v12,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)a2,
      v6,
      16);
    v4 = v11;
  }
  v7 = *v3;
  v3[1] = v4;
  hkFourTransposedPointsf::getOriginalVertices(*((uint32_t *)v2 + 16), *((uint32_t *)v2 + 19), v7);
  v8 = *((uint32_t *)v2 + 19);
  result = (hkArrayUtil::Self *)(v3[2] & 0x3FFFFFFF);
  if ( v8 > (int)(uintptr_t)(result) )
  {
    v10 = 2 * (uint32_t)(uintptr_t)(result);
    if ( v10 < v8 )
      v10 = v8;
    result = hkArrayUtil::reserve(
               (hkArrayUtil::Self *)v12,
               (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
               v3,
               v10,
               16);
  }
  v3[1] = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::copyVertexData  (binary VA: 0x16d4760)
// Original: hkpConvexVerticesShape::copyVertexData
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpConvexVerticesShape::copyVertexData(hkpConvexVerticesShape::Self *self, hkAabbUtil::Self *a2, int a3, float *a4)
{
  hkpConvexVerticesShape::Self *v4;
  int v5;
  int v6;
  signed int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int *v12;
  hkAabbUtil::Self *v13;
  int v14;
  int v15; // xmm5_4
  int v16; // xmm2_4
  int v17; // xmm4_4
  int v18; // xmm1_4
  int v19; // xmm0_4
  int v20; // xmm7_4
  int v21; // xmm6_4
  int v22; // xmm3_4
  uint32_t *v23;
  int v24;
  int *v25;
  int v26;
  int *v27;
  int v28; // xmm0_4
  int *v29;
  int v30; // xmm2_4
  int v31; // xmm1_4
  int v32; // xmm0_4
  int *v33;
  float v34;
  float v35; // xmm5_4
  float v36; // xmm2_4
  int v37;
  float v38; // xmm1_4
  int v39;
  int v40; // xmm4_4
  int v41; // xmm3_4
  int v42; // xmm0_4
  int v43; // xmm6_4
  float v44;
  int v45;
  float v46; // xmm5_4
  float v48; // xmm4_4
  float v49; // xmm3_4
  float v50; // xmm1_4
  float v51; // xmm6_4
  float v52; // xmm2_4
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  typedef hkAabb::Self *_g4_t_v56;
  typedef hkAabbUtil::Self *_g4_t_v57;
  typedef const float *_g4_t_v58;
  typedef int _g4_t_v59;
  typedef hkpConvexVerticesShape::Self *_g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63;
  typedef int _g4_t_v64;
  typedef hkAabbUtil::Self *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef char _g4_t_v68[8];
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef float _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef float _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80;
  typedef float _g4_t_v81;
  typedef float _g4_t_v82;
  typedef float _g4_t_v83;
  typedef float _g4_t_v84;
  typedef float _g4_t_v85;
  typedef int _g4_t_v86;
  typedef int _g4_t_v87;
  typedef int _g4_t_v88;
  typedef int _g4_t_v89;
  typedef int _g4_t_v90;
  typedef int _g4_t_v91;
  typedef hkpConvexVerticesShape::Self **_g4_t_v92;
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (12u + sizeof(_g4_t_v56)) > _g4_s0 ? (12u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v57)) > _g4_s1 ? (16u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v58)) > _g4_s2 ? (20u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v59)) > _g4_s3 ? (24u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v60)) > _g4_s4 ? (28u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v61)) > _g4_s5 ? (36u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v62)) > _g4_s6 ? (40u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v63)) > _g4_s7 ? (44u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v64)) > _g4_s8 ? (48u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v65)) > _g4_s9 ? (48u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (52u + sizeof(_g4_t_v66)) > _g4_s10 ? (52u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v67)) > _g4_s11 ? (52u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v68)) > _g4_s12 ? (56u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v69)) > _g4_s13 ? (64u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (68u + sizeof(_g4_t_v70)) > _g4_s14 ? (68u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v71)) > _g4_s15 ? (72u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v72)) > _g4_s16 ? (76u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v73)) > _g4_s17 ? (84u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v74)) > _g4_s18 ? (88u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (92u + sizeof(_g4_t_v75)) > _g4_s19 ? (92u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v76)) > _g4_s20 ? (96u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (104u + sizeof(_g4_t_v77)) > _g4_s21 ? (104u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (108u + sizeof(_g4_t_v78)) > _g4_s22 ? (108u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (112u + sizeof(_g4_t_v79)) > _g4_s23 ? (112u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (116u + sizeof(_g4_t_v80)) > _g4_s24 ? (116u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (120u + sizeof(_g4_t_v81)) > _g4_s25 ? (120u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (124u + sizeof(_g4_t_v82)) > _g4_s26 ? (124u + sizeof(_g4_t_v82)) : _g4_s26,
    _g4_s28 = (128u + sizeof(_g4_t_v83)) > _g4_s27 ? (128u + sizeof(_g4_t_v83)) : _g4_s27,
    _g4_s29 = (132u + sizeof(_g4_t_v84)) > _g4_s28 ? (132u + sizeof(_g4_t_v84)) : _g4_s28,
    _g4_s30 = (136u + sizeof(_g4_t_v85)) > _g4_s29 ? (136u + sizeof(_g4_t_v85)) : _g4_s29,
    _g4_s31 = (140u + sizeof(_g4_t_v86)) > _g4_s30 ? (140u + sizeof(_g4_t_v86)) : _g4_s30,
    _g4_s32 = (144u + sizeof(_g4_t_v87)) > _g4_s31 ? (144u + sizeof(_g4_t_v87)) : _g4_s31,
    _g4_s33 = (148u + sizeof(_g4_t_v88)) > _g4_s32 ? (148u + sizeof(_g4_t_v88)) : _g4_s32,
    _g4_s34 = (156u + sizeof(_g4_t_v89)) > _g4_s33 ? (156u + sizeof(_g4_t_v89)) : _g4_s33,
    _g4_s35 = (160u + sizeof(_g4_t_v90)) > _g4_s34 ? (160u + sizeof(_g4_t_v90)) : _g4_s34,
    _g4_s36 = (164u + sizeof(_g4_t_v91)) > _g4_s35 ? (164u + sizeof(_g4_t_v91)) : _g4_s35,
    _g4_s37 = (180u + sizeof(_g4_t_v92)) > _g4_s36 ? (180u + sizeof(_g4_t_v92)) : _g4_s36
  };
  alignas(16) uint8_t _g4_sf[_g4_s37];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 12u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 28u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 36u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 40u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 44u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 48u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 48u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 52u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 52u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 56u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 64u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 68u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 72u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 76u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 88u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 92u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 96u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 104u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 108u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 112u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 116u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 120u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 124u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 128u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 132u);
  _g4_t_v85 &v85 = *reinterpret_cast<_g4_t_v85 *>(_g4_sf + 136u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 140u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 144u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 148u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 156u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 160u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 164u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 180u);

  v92 = &self;
  v4 = self;
  v60 = self;
  v57 = a2;
  v5 = a3;
  v6 = (int)(uintptr_t)(a4);
  v58 = a4;
  *((uint32_t *)self + 19) = (uint32_t)(uintptr_t)(a4);
  v7 = ((v6 + 3) & 0xFFFFFFFC) + 3;
  if ( v6 + 3 >= 0 )
    v7 = (v6 + 3) & 0xFFFFFFFC;
  v8 = v7 >> 2;
  v9 = *((uint32_t *)v4 + 18) & 0x3FFFFFFF;
  if ( v8 > v9 )
  {
    v10 = 2 * v9;
    v66 = v5;
    if ( v10 < v8 )
      v10 = v8;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v68,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v4 + 16,
      v10,
      (int)(uintptr_t)(&word_30));
    v5 = v66;
  }
  *((uint32_t *)v60 + 17) = v8;
  v59 = (int)(uintptr_t)(v58) >> 2;
  if ( (int)(uintptr_t)(v58) >> 2 <= 0 )
  {
    v65 = v57;
  }
  else
  {
    v67 = 4 * v5;
    v11 = 0;
    v12 = (int *)((char *)v57 + 2 * v5);
    v13 = v57;
    do
    {
      v14 = 3 * v11++;
      v64 = *((uint32_t *)v13 + 1);
      v63 = *((uint32_t *)v13 + 2);
      v62 = *(uint32_t *)((char *)v13 + v5 + 8);
      v15 = *v12;
      v16 = v12[1];
      v61 = v12[2];
      v17 = *(int *)((char *)v12 + v5);
      v18 = *(int *)((char *)v12 + v5 + 4);
      v19 = *(int *)((char *)v12 + v5 + 8);
      v20 = *(uint32_t *)v13;
      v21 = *(uint32_t *)((char *)v13 + v5);
      v22 = *(uint32_t *)((char *)v13 + v5 + 4);
      v13 = (hkAabbUtil::Self *)((char *)v13 + v67);
      v23 = (uint32_t *)(*((uint32_t *)v60 + 16) + 16 * v14);
      *v23 = v20;
      v23[2] = v15;
      v23[3] = v17;
      v23[7] = v18;
      v23[1] = v21;
      v23[4] = v64;
      v23[5] = v22;
      v23[6] = v16;
      v23[8] = v63;
      v23[9] = v62;
      v23[10] = v61;
      v23[11] = v19;
      v12 = (int *)((char *)v12 + v67);
    }
    while ( v11 != v59 );
    v65 = (hkAabbUtil::Self *)((char *)v57 + v67 * (v59 - 1) + v67);
  }
  v24 = (int)(uintptr_t)(&v58[-v59]);
  if ( v58 != (const float *)(4 * v59) )
  {
    if ( (int)(uintptr_t)(&v58[-v59]) <= 0 )
    {
      v29 = (int *)((char *)v65 - v5);
    }
    else
    {
      v25 = &v78;
      v26 = 0;
      v27 = (int *)v65;
      do
      {
        ++v26;
        *v25 = *v27;
        v25 += 4;
        *(v25 - 3) = v27[1];
        v28 = v27[2];
        v27 = (int *)((char *)v27 + v5);
        *(v25 - 2) = v28;
      }
      while ( v26 != v24 );
      v29 = (int *)((char *)v65 + v5 * (v24 - 1));
      if ( v24 > 3 )
        goto LABEL_18;
    }
    v30 = *v29;
    v31 = v29[1];
    v32 = v29[2];
    v33 = &v78 + 4 * v24;
    do
    {
      ++v24;
      v33 += 4;
      *(v33 - 4) = v30;
      *(v33 - 3) = v31;
      *(v33 - 2) = v32;
    }
    while ( v24 != 4 );
LABEL_18:
    v69 = v82;
    v34 = v83;
    v35 = v79;
    v36 = v80;
    v37 = *((uint32_t *)v60 + 16) + 48 * v59;
    v38 = v84;
    v39 = v88;
    v40 = v87;
    v41 = v90;
    v42 = v91;
    v70 = v86;
    v43 = v89;
    *(float *)v37 = *(float *)&v78;
    v44 = v69;
    *(float *)(v37 + 20) = v34;
    v71 = v43;
    *(float *)(v37 + 4) = v44;
    v73 = v40;
    *(uint32_t *)(v37 + 8) = v70;
    v45 = v71;
    *(uint32_t *)(v37 + 24) = v73;
    v72 = v35;
    *(uint32_t *)(v37 + 12) = v45;
    v74 = v41;
    *(float *)(v37 + 16) = v72;
    *(uint32_t *)(v37 + 28) = v41;
    *(uint32_t *)(v37 + 40) = v39;
    v75 = v36;
    v76 = v38;
    *(float *)(v37 + 32) = v36;
    v77 = v42;
    *(float *)(v37 + 36) = v76;
    *(uint32_t *)(v37 + 44) = v77;
  }
  hkAabbUtil::calcAabb(v57, v58, v5, (int)(uintptr_t)(&v78), v56);
  v46 = v83;
  v48 = v79;
  v49 = v84;
  v50 = v85;
  v51 = (float)(*(float *)&v78 + v82) * 0.5;
  *((float *)v60 + 8) = (float)(v82 - *(float *)&v78) * 0.5;
  *((float *)v60 + 12) = v51;
  *((float *)v60 + 9) = (float)(v46 - v48) * 0.5;
  v52 = v49 - v80;
  v53 = v49 + v80;
  *((float *)v60 + 13) = (float)(v48 + v46) * 0.5;
  *((float *)v60 + 10) = v52 * 0.5;
  v54 = v50 - v81;
  v55 = (float)(v50 + v81) * 0.5;
  *((float *)v60 + 11) = v54 * 0.5;
  *((float *)v60 + 15) = v55;
  *((float *)v60 + 14) = v53 * 0.5;
  return v60;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::Construct  (binary VA: 0x16d4be0)
// Original: hkpConvexVerticesShape::hkpConvexVerticesShape
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpConvexVerticesShape::Construct(hkpConvexVerticesShape::Self *a1, int a2, int *a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);

  *((uint32_t *)a1 + 4) = a4;
  *((uint32_t *)a1 + 1) = -65535;
  *((uint8_t *)a1 + 8) = 5;
  *((uint8_t *)a1 + 9) = 4;
  *((uint8_t *)a1 + 10) = 0;
  *((uint8_t *)a1 + 11) = 0;
  *((uint32_t *)a1 + 3) = 0;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B068);
  *((uint32_t *)a1 + 16) = 0;
  *((uint32_t *)a1 + 17) = 0;
  *((uint32_t *)a1 + 18) = 0x80000000;
  *((uint8_t *)a1 + 80) = 0;
  *((uint32_t *)a1 + 21) = 0;
  *((uint32_t *)a1 + 22) = 0;
  *((uint32_t *)a1 + 23) = 0x80000000;
  *((uint32_t *)a1 + 24) = 0;
  v4 = a3[1];
  if ( v4 <= 0 )
  {
    *((uint32_t *)a1 + 22) = v4;
  }
  else
  {
    v12 = 16 * v4;
    v5 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           &v12);
    v6 = v12;
    *((uint32_t *)a1 + 21) = v5;
    *((uint32_t *)a1 + 23) = v6 / 16;
    v7 = a3[1];
    *((uint32_t *)a1 + 22) = v7;
    v8 = *a3;
    if ( v7 > 0 )
    {
      v9 = 16 * v7;
      v10 = 0;
      do
      {
        *(uint32_t *)(v5 + v10) = *(uint32_t *)(v8 + v10);
        *(uint32_t *)(v5 + v10 + 4) = *(uint32_t *)(v8 + v10 + 4);
        *(uint32_t *)(v5 + v10 + 8) = *(uint32_t *)(v8 + v10 + 8);
        *(uint32_t *)(v5 + v10 + 12) = *(uint32_t *)(v8 + v10 + 12);
        v10 += 16;
      }
      while ( v10 != v9 );
    }
  }
  return hkpConvexVerticesShape::copyVertexData(a1, *(hkAabbUtil::Self **)a2, *(uint32_t *)(a2 + 8), *(float **)(a2 + 4));
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::getPlaneEquations  (binary VA: 0x16d4d20)
// Original: hkpConvexVerticesShape::getPlaneEquations
// ----------------------------------------------------------------------------
char * hkpConvexVerticesShape::getPlaneEquations(hkpConvexVerticesShape::Self *self)
{
  return (char *)self + 84;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::transformVerticesAndPlaneEquations  (binary VA: 0x16d4d30)
// Original: hkpConvexVerticesShape::transformVerticesAndPlaneEquations
// ----------------------------------------------------------------------------
int hkpConvexVerticesShape::transformVerticesAndPlaneEquations(hkpConvexVerticesShape::Self *self, const hkTransformf::Self *a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, hkAabbUtil::Self *a16, float *a17, signed int a18, char *a19, int a20)
{
  int v21;
  hkAabbUtil::Self *v22;
  char *v23;
  float *v24;
  float v25; // xmm6_4
  float v26; // xmm5_4
  float v27; // xmm4_4
  float v28; // xmm3_4
  float v29; // xmm2_4
  float v30; // xmm1_4
  float *v31;
  int v32;
  float v33; // xmm5_4
  float v34; // xmm1_4
  float v35; // xmm2_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm3_4
  float v39; // xmm4_4
  float v40; // xmm2_4
  float *v41;
  int v42;
  signed int v43;
  int result;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53;
  int v54;
  int v55;
  int v56;
  int v57;
  int v58;
  int v59;
  int v60;
  int v61;
  int v62;
  int v63;
  int v64;
  int v65;
  int v66;
  int v67;
  int v68;
  int v69;
  int v70;
  int v71;
  int v72;
  int v73;
  const hkTransformf::Self *v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  float v83;
  float v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  const hkTransformf::Self *v92;
  float v93;
  float v94;
  int v95;
  int v96;
  float v97;
  float v98;
  int v99;
  int v100;
  float v101;
  float v102;
  signed int v103;

  a20 = G4_VCALL<int>(self, 52, v47, v48, v49, v50, v51, v52, v53, v54, v55, v56, v57, v58, v59, v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, v71, v72, v73);
  v100 = a20;
  a16 = nullptr;
  a17 = nullptr;
  a18 = 0x80000000;
  if ( a20 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v46 = *address;
    v21 = v100;
    v92 = (const hkTransformf::Self *)address;
    v103 = (16 * v100 + 127) & 0xFFFFFF80;
    v95 = *((uint32_t *)*address + 3);
    v99 = v95;
    if ( v103 <= *((uint32_t *)*address + 2) && (unsigned int)(v103 + v95) <= *((uint32_t *)v46 + 4) )
    {
      *((uint32_t *)v46 + 3) = v103 + v95;
    }
    else
    {
      v96 = v21;
      v99 = hkLifoAllocator::allocateFromNewSlab(v46, v103);
      v21 = v96;
    }
    v74 = v92;
    v22 = (hkAabbUtil::Self *)v99;
  }
  else
  {
    v74 = (const hkTransformf::Self *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v21 = 0;
    v22 = nullptr;
  }
  a16 = v22;
  a19 = (char *)v22;
  a18 = v21 | 0x80000000;
  hkpConvexVerticesShape::getOriginalVertices(self, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&a16);
  v75 = *(float *)a2;
  v23 = (char *)a17 - 1;
  v101 = *((float *)a2 + 1);
  v97 = *((float *)a2 + 2);
  v93 = *((float *)a2 + 3);
  v90 = *((float *)a2 + 4);
  v88 = *((float *)a2 + 5);
  v86 = *((float *)a2 + 6);
  v84 = *((float *)a2 + 7);
  v82 = *((float *)a2 + 8);
  v80 = *((float *)a2 + 9);
  v78 = *((float *)a2 + 10);
  v77 = *((float *)a2 + 11);
  v76 = *((float *)a2 + 12);
  v24 = (float *)((char *)a16 + 16 * ((uint32_t)(uintptr_t)(a17) - 1));
  v25 = *((float *)a2 + 13);
  v26 = *((float *)a2 + 14);
  v27 = *((float *)a2 + 15);
  do
  {
    v28 = *v24;
    --v23;
    v29 = v24[1];
    v24 -= 4;
    v30 = v24[6];
    v24[4] = (float)((float)((float)(v75 * v28) + (float)(v90 * v29)) + (float)(v82 * v30)) + v76;
    v24[5] = (float)((float)((float)(v101 * v28) + (float)(v88 * v29)) + (float)(v80 * v30)) + v25;
    v24[6] = (float)((float)((float)(v97 * v28) + (float)(v86 * v29)) + (float)(v78 * v30)) + v26;
    v24[7] = (float)((float)((float)(v28 * v93) + (float)(v29 * v84)) + (float)(v30 * v77)) + v27;
  }
  while ( (int)(uintptr_t)(v23) >= 0 );
  hkpConvexVerticesShape::copyVertexData(self, a16, 16, a17);
  v31 = *((float **)self + 21);
  v87 = *((float *)a2 + 1);
  v32 = *((uint32_t *)self + 22) - 1;
  v85 = *((float *)a2 + 2);
  v79 = *((float *)a2 + 4);
  v102 = *((float *)a2 + 5);
  v98 = *((float *)a2 + 6);
  v94 = *((float *)a2 + 8);
  v91 = *((float *)a2 + 9);
  v89 = *((float *)a2 + 10);
  v33 = -*((float *)a2 + 12);
  v34 = -*((float *)a2 + 13);
  v35 = -*((float *)a2 + 14);
  v81 = *(float *)a2;
  v83 = (float)((float)(v87 * v34) + (float)(*(float *)a2 * v33)) + (float)(v85 * v35);
  v36 = (float)((float)(v79 * v33) + (float)(v102 * v34)) + (float)(v98 * v35);
  v37 = (float)((float)(v33 * v94) + (float)(v34 * v91)) + (float)(v89 * v35);
  do
  {
    v38 = v31[1];
    --v32;
    v39 = *v31;
    v31 += 4;
    v40 = *(v31 - 2);
    *(v31 - 1) = (float)((float)((float)(v83 * v39) + (float)(v38 * v36)) + (float)(v40 * v37)) + *(v31 - 1);
    *(v31 - 4) = (float)((float)(v81 * v39) + (float)(v79 * v38)) + (float)(v94 * v40);
    *(v31 - 3) = (float)((float)(v87 * v39) + (float)(v102 * v38)) + (float)(v91 * v40);
    *(v31 - 2) = (float)((float)(v39 * v85) + (float)(v38 * v98)) + (float)(v40 * v89);
  }
  while ( v32 >= 0 );
  v41 = nullptr;
  if ( a16 != (hkAabbUtil::Self *)a19 )
    v41 = a17;
  v42 = *(uint32_t *)v74;
  a17 = v41;
  v43 = (16 * a20 + 127) & 0xFFFFFF80;
  if ( v43 > *(uint32_t *)(v42 + 8) || *(char **)(v42 + 12) != &a19[v43] || a19 == *(char **)(v42 + 20) )
    hkLifoAllocator::slowBlockFree((hkLifoAllocator::Self *)v42, a19, (16 * a20 + 127) & 0xFFFFFF80);
  else
    *(uint32_t *)(v42 + 12) = (uint32_t)(uintptr_t)(a19);
  result = a18;
  a17 = nullptr;
  if ( a18 >= 0 )
    return (*(int (**)(uint32_t *, hkAabbUtil::Self *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             a16,
             16 * a18);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::sortPlanes  (binary VA: 0x16d5220)
// Original: hkpConvexVerticesShape::sortPlanes
// ----------------------------------------------------------------------------
int hkpConvexVerticesShape::sortPlanes(hkpConvexVerticesShape::Self *self)
{
  int v1;
  float *v2;
  int v3;
  int v4;
  int v5;
  unsigned int v6;
  int v7;
  void *v8;
  uint32_t *v9;
  int v10;
  unsigned int v11;
  int v12;
  int v13;
  float *v14;
  float v15; // xmm2_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  int v18;
  float *v19;
  float v20; // xmm5_4
  float v21; // xmm0_4
  __m128i v22;
  float v23; // xmm4_4
  float v24; // xmm2_4
  float v25; // xmm6_4
  __m128i v26;
  float v27; // xmm4_4
  float v28; // xmm5_4
  __m128i v29;
  uint32_t *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  signed int v38;
  hkLifoAllocator::Self *v39;
  int result;
  float v41; // xmm2_4
  int v42;
  int v43;
  float v44; // xmm1_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  float v47; // xmm3_4
  float *v48;
  float v49; // xmm4_4
  float v50; // xmm5_4
  float v51; // xmm1_4
  int v52;
  int v53;
  float v54; // xmm0_4
  float v55; // xmm0_4
  bool v56; // cc
  float v57; // xmm0_4
  int v58;
  uint32_t *v59;
  float *v60;
  int v61;
  int v62;
  hkLifoAllocator::Self **address;
  hkLifoAllocator::Self *v64;
  signed int v65;
  int v66;
  int v67;
  typedef hkLifoAllocator::Self **_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef hkLifoAllocator::Self **_g4_t_v71;
  typedef int _g4_t_v72;
  typedef hkpConvexVerticesShape::Self *_g4_t_v73;
  typedef hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_v74;
  typedef hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *_g4_t_v75;
  typedef int _g4_t_v76;
  typedef char _g4_t_v77[4];
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  typedef signed int _g4_t_v80;
  typedef void *_g4_t_v81;
  typedef int _g4_t_v82;
  typedef hkpConvexVerticesShape::Self **_g4_t_v83;
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v68)) > _g4_s0 ? (0u + sizeof(_g4_t_v68)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v69)) > _g4_s1 ? (4u + sizeof(_g4_t_v69)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v70)) > _g4_s2 ? (8u + sizeof(_g4_t_v70)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v71)) > _g4_s3 ? (8u + sizeof(_g4_t_v71)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v72)) > _g4_s4 ? (12u + sizeof(_g4_t_v72)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v73)) > _g4_s5 ? (16u + sizeof(_g4_t_v73)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v74)) > _g4_s6 ? (20u + sizeof(_g4_t_v74)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v75)) > _g4_s7 ? (20u + sizeof(_g4_t_v75)) : _g4_s7,
    _g4_s9 = (24u + sizeof(_g4_t_v76)) > _g4_s8 ? (24u + sizeof(_g4_t_v76)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v77)) > _g4_s9 ? (28u + sizeof(_g4_t_v77)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v78)) > _g4_s10 ? (32u + sizeof(_g4_t_v78)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v79)) > _g4_s11 ? (36u + sizeof(_g4_t_v79)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v80)) > _g4_s12 ? (40u + sizeof(_g4_t_v80)) : _g4_s12,
    _g4_s14 = (44u + sizeof(_g4_t_v81)) > _g4_s13 ? (44u + sizeof(_g4_t_v81)) : _g4_s13,
    _g4_s15 = (48u + sizeof(_g4_t_v82)) > _g4_s14 ? (48u + sizeof(_g4_t_v82)) : _g4_s14,
    _g4_s16 = (72u + sizeof(_g4_t_v83)) > _g4_s15 ? (72u + sizeof(_g4_t_v83)) : _g4_s15
  };
  alignas(16) uint8_t _g4_sf[_g4_s16];
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 0u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 4u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 8u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 8u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 12u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 16u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 20u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 20u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 24u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 28u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 32u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 36u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 40u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 44u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 48u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 72u);

  v83 = &self;
  v73 = self;
  v1 = *((uint32_t *)self + 22);
  v76 = v1;
  if ( v1 <= 0 )
  {
    v2 = nullptr;
    v69 = 0x80000000;
  }
  else
  {
    v78 = 16 * v1;
    v2 = (float *)(*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
                    (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                    &v78);
    v3 = *((uint32_t *)v73 + 22);
    v76 = v3;
    v69 = v78 / 16;
    v4 = *((uint32_t *)v73 + 21);
    if ( v3 > 0 )
    {
      v5 = 16 * v3;
      v6 = 0;
      do
      {
        v2[v6 / 4] = *(float *)(v4 + v6);
        v2[v6 / 4 + 1] = *(float *)(v4 + v6 + 4);
        v2[v6 / 4 + 2] = *(float *)(v4 + v6 + 8);
        v2[v6 / 4 + 3] = *(float *)(v4 + v6 + 12);
        v6 += 16;
      }
      while ( v6 != v5 );
    }
  }
  v78 = 0;
  v79 = 0;
  v80 = 0x80000000;
  v7 = *((uint32_t *)v73 + 19);
  *((uint32_t *)v73 + 22) = 0;
  v82 = v7;
  if ( v7 != 0 )
  {
    address = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v64 = *address;
    v71 = address;
    v65 = (16 * v7 + 127) & 0xFFFFFF80;
    v72 = *((uint32_t *)v64 + 3);
    if ( v65 <= *((uint32_t *)v64 + 2) && (unsigned int)(v66 = v65 + *((uint32_t *)v64 + 3)) <= *((uint32_t *)v64 + 4) )
      *((uint32_t *)v64 + 3) = v66;
    else
      v72 = hkLifoAllocator::allocateFromNewSlab(v64, (16 * v7 + 127) & 0xFFFFFF80);
    v68 = v71;
    v8 = (void *)v72;
  }
  else
  {
    v68 = (hkLifoAllocator::Self **)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE);
    v8 = nullptr;
  }
  v78 = (int)(uintptr_t)(v8);
  v80 = v7 | 0x80000000;
  v81 = v8;
  hkpConvexVerticesShape::getOriginalVertices(v73, (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v78);
  v9 = *((uint32_t **)v73 + 24);
  if ( (int)v9[6] <= 0 )
  {
LABEL_15:
    if ( v76 > 0 )
    {
      v31 = *((uint32_t *)v73 + 22);
      v32 = v31 + v76;
      v33 = *((uint32_t *)v73 + 23) & 0x3FFFFFFF;
      if ( v31 + v76 > v33 )
      {
        v67 = 2 * v33;
        if ( v32 >= v67 )
          v67 = v31 + v76;
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v77,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          (int *)v73 + 21,
          v67,
          16);
        v32 = v31 + v76;
      }
      v74 = (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)v32;
      v34 = 16 * v31;
      hkMemUtil::memMove((hkMemUtil::Self *)(16 * v32 + *((uint32_t *)v73 + 21)), (char *)(v34 + *((uint32_t *)v73 + 21)), 0);
      v35 = *((uint32_t *)v73 + 21) + v34;
      v36 = 0;
      do
      {
        *(float *)(v35 + v36 * 4) = v2[v36];
        *(float *)(v35 + v36 * 4 + 4) = v2[v36 + 1];
        *(float *)(v35 + v36 * 4 + 8) = v2[v36 + 2];
        *(float *)(v35 + v36 * 4 + 12) = v2[v36 + 3];
        v36 += 4;
      }
      while ( v36 != 4 * v76 );
      *((uint32_t *)v73 + 22) = (uint32_t)(uintptr_t)(v74);
    }
  }
  else if ( v76 != 0 )
  {
    v10 = 0;
    v70 = 0;
    while ( 1 )
    {
      v11 = *(uint8_t *)(v9[5] + v10);
      if ( v11 <= 2 )
        goto LABEL_10;
      v12 = v9[2];
      v13 = 2 * v70;
      v70 += v11;
      v14 = (float *)(v78 + 16 * *(uint16_t *)(v12 + v13));
      v15 = *v14;
      v16 = v14[1];
      v17 = v14[2];
      v18 = v78 + 16 * *(uint16_t *)(v12 + v13 + 2);
      v19 = (float *)(v78 + 16 * *(uint16_t *)(v12 + v13 + 4));
      v20 = *(float *)v18 - v15;
      v21 = *v19 - v15;
g4_m128_raw(v22) = *(unsigned int *)(v18 + 4);
      *(float *)g4_m128_ptr<int32_t>(v22) = *(float *)g4_m128_ptr<int32_t>(v22) - v16;
      v23 = *(float *)(v18 + 8) - v17;
      v24 = v19[1] - v16;
      v25 = v19[2] - v17;
      v26 = v22;
      *(float *)g4_m128_ptr<int32_t>(v26) = (float)(*(float *)g4_m128_ptr<int32_t>(v22) * v25) - (float)(v23 * v24);
      v27 = (float)(v23 * v21) - (float)(v25 * v20);
      v28 = (float)(v20 * v24) - (float)(v21 * *(float *)g4_m128_ptr<int32_t>(v22));
      v29 = v26;
      *(float *)g4_m128_ptr<int32_t>(v29) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v26) * *(float *)g4_m128_ptr<int32_t>(v26)) + (float)(v27 * v27))
                              + (float)(v28 * v28);
      if ( *(float *)g4_m128_ptr<int32_t>(v29) > 0.0 )
        break;
      ++v10;
      v30 = (uint32_t *)(*((uint32_t *)v73 + 21) + 16 * *((uint32_t *)v73 + 22));
      *v30 = *(uint32_t *)v2;
      v30[1] = *((uint32_t *)v2 + 1);
      v30[2] = *((uint32_t *)v2 + 2);
      v30[3] = *((uint32_t *)v2 + 3);
      v9 = *((uint32_t **)v73 + 24);
      ++*((uint32_t *)v73 + 22);
      if ( v10 >= v9[6] )
        goto LABEL_15;
LABEL_11:
      if ( v76 == 0 )
        goto LABEL_20;
    }
    v41 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v29);
    v42 = _mm_cvtsi128_si32(v29) >> 1;
    v43 = (_mm_cvtsi128_si32(v29) + 2139095040) >> 31;
    v44 = (float)(1.5 * COERCE_FLOAT(v43 & (1597463174 - v42)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * COERCE_FLOAT(v43 & (1597463174 - v42)))
                * (float)(COERCE_FLOAT(v43 & (1597463174 - v42)) * COERCE_FLOAT(v43 & (1597463174 - v42))));
    v45 = (float)(1.5 * v44) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v29)) * v44) * (float)(v44 * v44));
    v46 = (float)(1.5 * v45) - (float)((float)(v41 * v45) * (float)(v45 * v45));
    v47 = *(float *)g4_m128_ptr<int32_t>(v26) * v46;
    v48 = v2;
    v49 = v27 * v46;
    v50 = v28 * v46;
    v51 = (float)((float)(*v2 * v47) + (float)(v2[1] * v49)) + (float)(v2[2] * v50);
    if ( v76 <= 1 )
    {
      v58 = 0;
      v53 = 0;
    }
    else
    {
      v52 = 1;
      v53 = 0;
      do
      {
        v54 = v48[4];
        v48 += 4;
        v55 = (float)((float)(v54 * v47) + (float)(v48[1] * v49)) + (float)(v48[2] * v50);
        v56 = v55 <= v51;
        v57 = fmaxf(v55, v51);
        if ( !v56 )
          v53 = v52;
        ++v52;
        v51 = v57;
      }
      while ( v52 != v76 );
      v58 = 4 * v53;
    }
    v75 = (hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *)&v2[v58];
    --v76;
    v59 = (uint32_t *)(*((uint32_t *)v73 + 21) + 16 * *((uint32_t *)v73 + 22));
    *v59 = LODWORD(v2[v58]);
    v59[1] = LODWORD(v2[v58 + 1]);
    v59[2] = LODWORD(v2[v58 + 2]);
    v59[3] = LODWORD(v2[v58 + 3]);
    ++*((uint32_t *)v73 + 22);
    if ( v53 != v76 )
    {
      v60 = &v2[4 * v76];
      v61 = *(uint32_t *)v60;
      *((float *)v75 + 1) = v60[1];
      *(uint32_t *)v75 = v61;
      v62 = *((uint32_t *)v60 + 3);
      *((float *)v75 + 2) = v60[2];
      *((uint32_t *)v75 + 3) = v62;
    }
    v9 = *((uint32_t **)v73 + 24);
LABEL_10:
    if ( ++v10 >= v9[6] )
      goto LABEL_15;
    goto LABEL_11;
  }
LABEL_20:
  v37 = 0;
  if ( (void *)v78 != v81 )
    v37 = v79;
  v79 = v37;
  v38 = (16 * v82 + 127) & 0xFFFFFF80;
  v39 = *v68;
  if ( v38 > *((uint32_t *)*v68 + 2) || *((void **)v39 + 3) != (char *)v81 + v38 || v81 == *((void **)v39 + 5) )
    hkLifoAllocator::slowBlockFree(v39, (char *)v81, (16 * v82 + 127) & 0xFFFFFF80);
  else
    *((uint32_t *)v39 + 3) = (uint32_t)(uintptr_t)(v81);
  result = v80;
  v79 = 0;
  if ( v80 >= 0 )
    result = (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v78,
               16 * v80);
  v78 = 0;
  v80 = 0x80000000;
  if ( v69 >= 0 )
    return (*(int (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v2,
             16 * v69);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::setConnectivity  (binary VA: 0x16d5820)
// Original: hkpConvexVerticesShape::setConnectivity
// ----------------------------------------------------------------------------
int hkpConvexVerticesShape::setConnectivity(hkpConvexVerticesShape::Self *self, const hkpConvexVerticesConnectivity::Self *a2, int a3)
{
  const hkpConvexVerticesConnectivity::Self *v3;
  int v4;
  int v5;
  int32_t v6; // kr00_4
  int v7;
  int v8;
  int32_t v9; // kr04_4
  int32_t v10;
  int32_t v11; // ett
  int result;

  v3 = a2;
  v4 = a3;
  if ( a2 != nullptr && *((uint16_t *)a2 + 3) != 0 )
  {
    do
    {
      v6 = *((uint32_t *)a2 + 1);
      HIWORD(v5) = HIWORD(v6);
      LOWORD(v5) = 0;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)a2 + 1, v6, v5 | (uint16_t)(v6 + 1)) );
    v4 = a3;
  }
  v7 = *((uint32_t *)self + 24);
  if ( v7 != 0 && *(uint16_t *)(v7 + 6) != 0 )
  {
    do
    {
      v9 = *(uint32_t *)(v7 + 4);
      HIWORD(v8) = HIWORD(v9);
      LOWORD(v8) = 0;
      v10 = v8 | (uint16_t)(v9 - 1);
      v11 = v9;
    }
    while ( v11 != __sync_val_compare_and_swap((volatile int32_t *)(v7 + 4), v11, v10) );
    v3 = a2;
    if ( (uint16_t)v10 == 0 )
      G4_VCALL<void>(v7, 16);
  }
  result = v4;
  *((uint32_t *)self + 24) = (uint32_t)(uintptr_t)(v3);
  if ( (uint8_t)v4 != 0 && v3 != nullptr )
    return hkpConvexVerticesShape::sortPlanes(self);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::setPlaneEquations  (binary VA: 0x16d58e0)
// Original: hkpConvexVerticesShape::setPlaneEquations
// ----------------------------------------------------------------------------
hkpConvexVerticesShape::Self * hkpConvexVerticesShape::setPlaneEquations(hkpConvexVerticesShape::Self *self, const hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  hkpConvexVerticesShape::Self *result;
  int v9; // kr00_4
  typedef int _g4_t_v10;
  enum : size_t {
    _g4_s0 = 96u,
    _g4_s1 = (0u + sizeof(_g4_t_v10)) > _g4_s0 ? (0u + sizeof(_g4_t_v10)) : _g4_s0
  };
  alignas(16) uint8_t _g4_sf[_g4_s1];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 0u);

  v2 = *((uint32_t *)a2 + 1);
  if ( (*((uint32_t *)self + 23) & 0x3FFFFFFF) < v2 )
  {
    if ( *((int *)self + 23) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *((uint32_t *)self + 21),
        16 * *((uint32_t *)self + 23));
      v2 = *((uint32_t *)a2 + 1);
    }
    v10 = 16 * v2;
    v4 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           &v10);
    v9 = v10;
    *((uint32_t *)self + 21) = v4;
    *((uint32_t *)self + 23) = v9 / 16;
    v3 = *((uint32_t *)a2 + 1);
  }
  else
  {
    v3 = *((uint32_t *)a2 + 1);
    v4 = *((uint32_t *)self + 21);
  }
  v5 = v3;
  *((uint32_t *)self + 22) = v3;
  v6 = *(uint32_t *)a2;
  v7 = 0;
  if ( v5 > 0 )
  {
    do
    {
      *(uint32_t *)(v4 + v7) = *(uint32_t *)(v6 + v7);
      *(uint32_t *)(v4 + v7 + 4) = *(uint32_t *)(v6 + v7 + 4);
      *(uint32_t *)(v4 + v7 + 8) = *(uint32_t *)(v6 + v7 + 8);
      *(uint32_t *)(v4 + v7 + 12) = *(uint32_t *)(v6 + v7 + 12);
      v7 += 16;
    }
    while ( v7 != 16 * v5 );
  }
  result = self;
  if ( *((uint32_t *)self + 24) != 0 )
    return (hkpConvexVerticesShape::Self *)hkpConvexVerticesShape::sortPlanes(self);
  return result;
}



// ============================================================================
// Address:   0x16e89c0 (size: 70 bytes)
// Symbol:    _ZN22hkpConvexVerticesShape11BuildConfigC1Ev
// Demangled: hkpConvexVerticesShape::BuildConfig::BuildConfig(void)
// ============================================================================
// Alternative name is '_ZN22hkpConvexVerticesShape11BuildConfigC2Ev'
hkpConvexVerticesShape::BuildConfig::Self *hkpConvexVerticesShape::BuildConfig::Construct(
        hkpConvexVerticesShape::BuildConfig::Self *self)
{
  int v2; // xmm0_4

  *(uint8_t *)self = 0;
  *((uint8_t *)self + 1) = 1;
  *((uint8_t *)self + 2) = 0;
  *((uint32_t *)self + 2) = 0;
  v2 = hkConvexShapeDefaultRadius;
  *((uint32_t *)self + 3) = 1028443341;
  *((uint32_t *)self + 1) = v2;
  *((uint32_t *)self + 4) = 1032805417;
  *((uint32_t *)self + 5) = -1110651699;
  return self;
}
// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesShape::Construct  (binary VA: 0x16e8a10)
// Original: hkpConvexVerticesShape::hkpConvexVerticesShape
// ----------------------------------------------------------------------------
void hkpConvexVerticesShape::Construct(hkpConvexVerticesConnectivity::Self *a1, hkpConvexVerticesConnectivity::Self *a2, int a3)
{
  hkpConvexVerticesConnectivity::Self *v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int address;
  hkpConvexVerticesConnectivity::Self *v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  hkpConvexVerticesConnectivity::Self *v16;
  int v17;
  int32_t v18; // kr00_4
  int32_t v19;
  int32_t v20; // ett
  int v21;
  hkErrStream::Self *v22;
  int v23;
  int v24;
  int v25; // xmm0_4
  int v26; // xmm1_4
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int32_t v35; // kr04_4
  int32_t v36;
  int32_t v37; // ett
  float *ProjectionPlane;
  float v39; // xmm4_4
  float v40; // xmm3_4
  float v41; // xmm2_4
  float v42; // xmm7_4
  float v43; // xmm1_4
  int v44;
  float v45; // xmm7_4
  int v46;
  int v47;
  int v48;
  float *v49;
  typedef uint8_t *_g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef int _g4_t_v54;
  typedef char _g4_t_v55;
  typedef hkpConvexVerticesConnectivity::Self *_g4_t_v56;
  typedef hkpConvexVerticesConnectivity::Self *_g4_t_v57;
  typedef hkpConvexVerticesConnectivity::Self *_g4_t_v58;
  typedef hkpConvexVerticesConnectivity::Self *_g4_t_v59;
  typedef hkpConvexVerticesConnectivity::Self *_g4_t_v60;
  typedef bool _g4_t_v61;
  typedef hkMemoryAllocator::Self *_g4_t_v62;
  typedef char _g4_t_v63;
  typedef hkErrStream::Self *_g4_t_v64;
  typedef char _g4_t_v65;
  typedef char _g4_t_v66[4];
  typedef float *_g4_t_v67;
  typedef int _g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef int _g4_t_v71;
  typedef int _g4_t_v72;
  typedef uint8_t _g4_t_v73[16];
  typedef uint8_t _g4_t_v74[20];
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef hkpConvexVerticesConnectivity::Self **_g4_t_v79;
  enum : size_t {
    _g4_s0 = 752u,
    _g4_s1 = (4u + sizeof(_g4_t_v50)) > _g4_s0 ? (4u + sizeof(_g4_t_v50)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v51)) > _g4_s1 ? (8u + sizeof(_g4_t_v51)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v52)) > _g4_s2 ? (12u + sizeof(_g4_t_v52)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v53)) > _g4_s3 ? (12u + sizeof(_g4_t_v53)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v54)) > _g4_s4 ? (16u + sizeof(_g4_t_v54)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v55)) > _g4_s5 ? (20u + sizeof(_g4_t_v55)) : _g4_s5,
    _g4_s7 = (56u + sizeof(_g4_t_v56)) > _g4_s6 ? (56u + sizeof(_g4_t_v56)) : _g4_s6,
    _g4_s8 = (60u + sizeof(_g4_t_v57)) > _g4_s7 ? (60u + sizeof(_g4_t_v57)) : _g4_s7,
    _g4_s9 = (60u + sizeof(_g4_t_v58)) > _g4_s8 ? (60u + sizeof(_g4_t_v58)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v59)) > _g4_s9 ? (60u + sizeof(_g4_t_v59)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v60)) > _g4_s10 ? (60u + sizeof(_g4_t_v60)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v61)) > _g4_s11 ? (60u + sizeof(_g4_t_v61)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v62)) > _g4_s12 ? (64u + sizeof(_g4_t_v62)) : _g4_s12,
    _g4_s14 = (64u + sizeof(_g4_t_v63)) > _g4_s13 ? (64u + sizeof(_g4_t_v63)) : _g4_s13,
    _g4_s15 = (64u + sizeof(_g4_t_v64)) > _g4_s14 ? (64u + sizeof(_g4_t_v64)) : _g4_s14,
    _g4_s16 = (75u + sizeof(_g4_t_v65)) > _g4_s15 ? (75u + sizeof(_g4_t_v65)) : _g4_s15,
    _g4_s17 = (76u + sizeof(_g4_t_v66)) > _g4_s16 ? (76u + sizeof(_g4_t_v66)) : _g4_s16,
    _g4_s18 = (80u + sizeof(_g4_t_v67)) > _g4_s17 ? (80u + sizeof(_g4_t_v67)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v68)) > _g4_s18 ? (84u + sizeof(_g4_t_v68)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v69)) > _g4_s19 ? (88u + sizeof(_g4_t_v69)) : _g4_s19,
    _g4_s21 = (96u + sizeof(_g4_t_v70)) > _g4_s20 ? (96u + sizeof(_g4_t_v70)) : _g4_s20,
    _g4_s22 = (100u + sizeof(_g4_t_v71)) > _g4_s21 ? (100u + sizeof(_g4_t_v71)) : _g4_s21,
    _g4_s23 = (104u + sizeof(_g4_t_v72)) > _g4_s22 ? (104u + sizeof(_g4_t_v72)) : _g4_s22,
    _g4_s24 = (108u + sizeof(_g4_t_v73)) > _g4_s23 ? (108u + sizeof(_g4_t_v73)) : _g4_s23,
    _g4_s25 = (124u + sizeof(_g4_t_v74)) > _g4_s24 ? (124u + sizeof(_g4_t_v74)) : _g4_s24,
    _g4_s26 = (144u + sizeof(_g4_t_v75)) > _g4_s25 ? (144u + sizeof(_g4_t_v75)) : _g4_s25,
    _g4_s27 = (148u + sizeof(_g4_t_v76)) > _g4_s26 ? (148u + sizeof(_g4_t_v76)) : _g4_s26,
    _g4_s28 = (152u + sizeof(_g4_t_v77)) > _g4_s27 ? (152u + sizeof(_g4_t_v77)) : _g4_s27,
    _g4_s29 = (156u + sizeof(_g4_t_v78)) > _g4_s28 ? (156u + sizeof(_g4_t_v78)) : _g4_s28,
    _g4_s30 = (664u + sizeof(_g4_t_v79)) > _g4_s29 ? (664u + sizeof(_g4_t_v79)) : _g4_s29
  };
  alignas(16) uint8_t _g4_sf[_g4_s30];
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 4u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 12u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 56u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 60u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 60u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 60u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 60u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 60u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 64u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 64u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 75u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 76u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 80u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 84u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 88u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 96u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 100u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 104u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 108u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 124u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 144u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 148u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 152u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 156u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 664u);

  v79 = &a1;
  v3 = a1;
  v4 = a3;
  v57 = a2;
  *((uint32_t *)a1 + 4) = *(uint32_t *)(a3 + 4);
  *(uint32_t *)v3 = ((uint32_t)(uintptr_t)&off_209B068);
  *((uint32_t *)v3 + 1) = -65535;
  *((uint8_t *)v3 + 8) = 5;
  *((uint8_t *)v3 + 9) = 4;
  *((uint8_t *)v3 + 10) = 0;
  *((uint8_t *)v3 + 11) = 0;
  *((uint32_t *)v3 + 3) = 0;
  *((uint32_t *)v3 + 16) = 0;
  *((uint32_t *)v3 + 17) = 0;
  *((uint32_t *)v3 + 18) = 0x80000000;
  *((uint8_t *)v3 + 80) = 0;
  *((uint32_t *)v3 + 21) = 0;
  *((uint32_t *)v3 + 22) = 0;
  *((uint32_t *)v3 + 23) = 0x80000000;
  *((uint32_t *)v3 + 24) = 0;
  hkgpConvexHull::Construct((hkgpConvexHull::Self *)v74);
  hkgpConvexHull::BuildConfig::Construct((hkgpConvexHull::BuildConfig::Self *)v73);
  v73[0] = 1;
  v73[14] = 1;
  v73[13] = 1;
  hkgpConvexHull::build(v74, v57, v73);
  if ( hkgpConvexHull::getDimensions((hkgpConvexHull::Self *)v74) == -1 )
  {
    hkErrStream::Construct((hkErrStream::Self *)&v70, (hkString::Self *)&v75, 512);
    hkOstream::opShl((int)(uintptr_t)(&v70), (hkString::Self *)"Cannot create convex hull");
    if ( hkError::messageError(
           (hkError::Self *)0xC28C58E7,
           (int)(uintptr_t)(&v75),
           "Shape/Convex/ConvexVertices/hkpConvexVerticesShapeConstructor.cpp",
           (const char *)&dword_34 + 2,
           v54) != 0 )
      __builtin_debugtrap();
    hkErrStream::Destroy((hkErrStream::Self *)&v70);
  }
  if ( *(int *)(v4 + 8) > 3 && hkgpConvexHull::getDimensions((hkgpConvexHull::Self *)v74) == 3 )
  {
    LOBYTE(v52) = 1;
    hkgpConvexHull::decimateVertices(&v65);
  }
  hkgpConvexHull::buildIndices(v74, 1065353048, 0);
  v67 = nullptr;
  v68 = 0;
  v69 = 0x80000000;
  hkgpConvexHull::fetchPositions(v74, 1, &v67);
  v62 = (hkMemoryAllocator::Self *)((hkpConvexVerticesConnectivity::Self *)((char *)v3 + 84));
  hkgpConvexHull::fetchPlanes((hkgpConvexHull::Self *)v74, (hkpConvexVerticesConnectivity::Self *)((char *)v3 + 84));
  hkgpConvexHull::fetchBevelPlanes(
    (hkgpConvexHull::Self *)v74,
    *(float *)(v4 + 20),
    (hkpConvexVerticesConnectivity::Self *)((char *)v3 + 84));
  if ( hkgpConvexHull::getDimensions((hkgpConvexHull::Self *)v74) == 2 )
  {
    ProjectionPlane = (float *)hkgpConvexHull::getProjectionPlane((hkgpConvexHull::Self *)v74);
    v39 = *ProjectionPlane;
    v40 = ProjectionPlane[1];
    v41 = ProjectionPlane[2];
    v42 = *ProjectionPlane;
    v43 = ProjectionPlane[3];
    v44 = *((uint32_t *)v3 + 22);
    v45 = -v42;
    if ( v44 == (*((uint32_t *)v3 + 23) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v62, &word_10, v52);
      v44 = *((uint32_t *)v3 + 22);
    }
    v46 = *((uint32_t *)v3 + 21) + 16 * v44;
    *(float *)v46 = v39;
    *(float *)(v46 + 4) = v40;
    *(float *)(v46 + 8) = v41;
    *(float *)(v46 + 12) = v43;
    v47 = *((uint32_t *)v3 + 22) + 1;
    v48 = *((uint32_t *)v3 + 23) & 0x3FFFFFFF;
    *((uint32_t *)v3 + 22) = v47;
    if ( v47 == v48 )
    {
      hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, v62, &word_10, v52);
      v47 = *((uint32_t *)v3 + 22);
    }
    v49 = (float *)(*((uint32_t *)v3 + 21) + 16 * v47);
    *v49 = v45;
    v49[1] = -v40;
    v49[2] = -v41;
    v49[3] = -v43;
    v5 = *((uint32_t *)v3 + 22) + 1;
    *((uint32_t *)v3 + 22) = v5;
  }
  else
  {
    v5 = *((uint32_t *)v3 + 22);
  }
  if ( v5 > 0 )
  {
    v6 = 0;
    do
    {
      v7 = v6++;
      *(float *)(*((uint32_t *)v3 + 21) + 16 * v7 + 12) = *(float *)(*((uint32_t *)v3 + 21) + 16 * v7 + 12)
                                                      + 0.00000011920929f;
    }
    while ( *((uint32_t *)v3 + 22) > v6 );
  }
  hkpConvexVerticesShape::copyVertexData((hkpConvexVerticesShape::Self *)(v3), (hkAabbUtil::Self *)(v67), 16, (float *)(uintptr_t)(v68));
  if ( *(uint8_t *)(v4 + 1) != 0 )
  {
    v63 = 1;
    if ( *(float *)(v4 + 4) > 0.0 )
    {
LABEL_11:
      v70 = 0;
      v71 = 0;
      v72 = 0x80000000;
      v75 = 0;
      v76 = 0;
      v77 = 0x80000000;
      address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
      v9 = (hkpConvexVerticesConnectivity::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                              *(uint32_t *)(*(uint32_t *)address + 44),
                                              32);
      *((uint32_t *)v9 + 1) = -65535;
      v58 = v9;
      *(uint32_t *)v9 = ((uint32_t)(uintptr_t)&off_209B888);
      *((uint32_t *)v9 + 2) = 0;
      *((uint32_t *)v9 + 3) = 0;
      *((uint32_t *)v9 + 4) = 0x80000000;
      *((uint32_t *)v9 + 5) = 0;
      *((uint32_t *)v9 + 6) = 0;
      *((uint32_t *)v9 + 7) = 0x80000000;
      hkgpConvexHull::generateIndexedFaces(v74, 1, &v70, &v75, 1);
      v10 = *((uint32_t *)v58 + 5);
      *((uint32_t *)v58 + 5) = v70;
      v70 = v10;
      v11 = *((uint32_t *)v58 + 6);
      *((uint32_t *)v58 + 6) = v71;
      v71 = v11;
      v12 = *((uint32_t *)v58 + 7);
      *((uint32_t *)v58 + 7) = v72;
      v72 = v12;
      v13 = *((uint32_t *)v58 + 2);
      *((uint32_t *)v58 + 2) = v75;
      v75 = v13;
      v14 = *((uint32_t *)v58 + 3);
      *((uint32_t *)v58 + 3) = v76;
      v76 = v14;
      v15 = *((uint32_t *)v58 + 4);
      *((uint32_t *)v58 + 4) = v77;
      v77 = v15;
      hkpConvexVerticesShape::setConnectivity(v3, v58, false);
      v16 = v58;
      v59 = (hkpConvexVerticesConnectivity::Self *)((char *)v58 + 4);
      if ( *((uint16_t *)v16 + 3) != 0 )
      {
        v56 = v3;
        do
        {
          v18 = *((uint32_t *)v16 + 1);
          HIWORD(v17) = HIWORD(v18);
          LOWORD(v17) = 0;
          v19 = v17 | (uint16_t)(v18 - 1);
          v20 = v18;
        }
        while ( v20 != __sync_val_compare_and_swap((volatile int32_t *)v59, v20, v19) );
        v3 = v56;
        if ( (uint16_t)v19 == 0 )
          G4_VCALL<void>(v16, 16);
      }
      v76 = 0;
      if ( v77 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v75,
          2 * (v77 & 0x3FFFFFFF));
      v75 = 0;
      v77 = 0x80000000;
      v71 = 0;
      if ( v72 >= 0 )
        (*(void (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
          (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
          v70,
          v72 & 0x3FFFFFFF);
      if ( v63 != 0 )
      {
        v55 = *(uint8_t *)(v4 + 2);
        v53 = *(uint32_t *)(v4 + 16);
        v51 = *(uint32_t *)(v4 + 12);
        v50 = *(uint8_t **)(v4 + 4);
        v22 = (hkErrStream::Self *)hkpShapeShrinker::shrinkConvexVerticesShape((char)(uintptr_t)(v3));
        if ( v22 == (hkErrStream::Self *)(uintptr_t)(v3) || v22 == nullptr )
        {
          v61 = v22 != nullptr;
          v50 = v74;
          v64 = v22;
          hkgpConvexHull::buildMassProperties((hkgpConvexHull::Self *)v66);
          v22 = v64;
          if ( !v61 )
            goto LABEL_21;
        }
        else
        {
          v75 = *((uint32_t *)v22 + 12);
          v76 = *((uint32_t *)v22 + 13);
          v77 = *((uint32_t *)v22 + 14);
          v78 = *((uint32_t *)v22 + 15);
          *((uint32_t *)v22 + 12) = *((uint32_t *)v3 + 12);
          *((uint32_t *)v22 + 13) = *((uint32_t *)v3 + 13);
          *((uint32_t *)v22 + 14) = *((uint32_t *)v3 + 14);
          *((uint32_t *)v22 + 15) = *((uint32_t *)v3 + 15);
          *((uint32_t *)v3 + 12) = v75;
          *((uint32_t *)v3 + 13) = v76;
          *((uint32_t *)v3 + 14) = v77;
          *((uint32_t *)v3 + 15) = v78;
          v75 = *((uint32_t *)v22 + 8);
          v76 = *((uint32_t *)v22 + 9);
          v77 = *((uint32_t *)v22 + 10);
          v78 = *((uint32_t *)v22 + 11);
          *((uint32_t *)v22 + 8) = *((uint32_t *)v3 + 8);
          *((uint32_t *)v22 + 9) = *((uint32_t *)v3 + 9);
          *((uint32_t *)v22 + 10) = *((uint32_t *)v3 + 10);
          *((uint32_t *)v22 + 11) = *((uint32_t *)v3 + 11);
          *((uint32_t *)v3 + 8) = v75;
          *((uint32_t *)v3 + 9) = v76;
          *((uint32_t *)v3 + 10) = v77;
          *((uint32_t *)v3 + 11) = v78;
          v23 = *((uint32_t *)v22 + 19);
          *((uint32_t *)v22 + 19) = *((uint32_t *)v3 + 19);
          *((uint32_t *)v3 + 19) = v23;
          v24 = *((uint32_t *)v22 + 24);
          *((uint32_t *)v22 + 24) = *((uint32_t *)v3 + 24);
          v25 = *((uint32_t *)v3 + 4);
          *((uint32_t *)v3 + 24) = v24;
          v26 = *((uint32_t *)v22 + 4);
          *((uint32_t *)v22 + 4) = v25;
          v27 = *((uint32_t *)v3 + 16);
          *((uint32_t *)v3 + 4) = v26;
          v28 = *((uint32_t *)v22 + 16);
          *((uint32_t *)v22 + 16) = v27;
          *((uint32_t *)v3 + 16) = v28;
          v29 = *((uint32_t *)v22 + 17);
          *((uint32_t *)v22 + 17) = *((uint32_t *)v3 + 17);
          *((uint32_t *)v3 + 17) = v29;
          v30 = *((uint32_t *)v22 + 18);
          *((uint32_t *)v22 + 18) = *((uint32_t *)v3 + 18);
          *((uint32_t *)v3 + 18) = v30;
          v31 = *((uint32_t *)v22 + 21);
          *((uint32_t *)v22 + 21) = *((uint32_t *)v3 + 21);
          *((uint32_t *)v3 + 21) = v31;
          v32 = *((uint32_t *)v22 + 22);
          *((uint32_t *)v22 + 22) = *((uint32_t *)v3 + 22);
          *((uint32_t *)v3 + 22) = v32;
          v33 = *((uint32_t *)v22 + 23);
          *((uint32_t *)v22 + 23) = *((uint32_t *)v3 + 23);
          *((uint32_t *)v3 + 23) = v33;
        }
        if ( *((uint16_t *)v22 + 3) != 0 )
        {
          v60 = v3;
          do
          {
            v35 = *((uint32_t *)v22 + 1);
            HIWORD(v34) = HIWORD(v35);
            LOWORD(v34) = 0;
            v36 = v34 | (uint16_t)(v35 - 1);
            v37 = v35;
          }
          while ( v37 != __sync_val_compare_and_swap((volatile int32_t *)v22 + 1, v37, v36) );
          v3 = v60;
          if ( (uint16_t)v36 == 0 )
            G4_VCALL<void>(v22, 16, v50, v51, v53, 0, v55);
        }
      }
LABEL_21:
      if ( *(uint8_t *)v4 != 0 )
        goto LABEL_22;
      goto LABEL_27;
    }
  }
  if ( *(uint8_t *)v4 != 0 )
  {
    v63 = 0;
    goto LABEL_11;
  }
LABEL_27:
  v21 = *((uint32_t *)v3 + 24);
  if ( v21 != 0 )
  {
    (*(void (**)(uint32_t))(*(uint32_t *)v21 + 4))(*((uint32_t *)v3 + 24));
    *((uint32_t *)v3 + 24) = 0;
  }
LABEL_22:
  v68 = 0;
  if ( v69 >= 0 )
    (*(void (**)(uint32_t *, float *, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      v67,
      16 * v69);
  v67 = nullptr;
  v69 = 0x80000000;
  hkgpConvexHull::Destroy((hkgpConvexHull::Self *)v74);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivity::clear  (binary VA: 0x16ec6d0)
// Original: hkpConvexVerticesConnectivity::clear
// ----------------------------------------------------------------------------
hkpConvexVerticesConnectivity::Self * hkpConvexVerticesConnectivity::clear(hkpConvexVerticesConnectivity::Self *self)
{
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 6) = 0;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivity::Destroy  (binary VA: 0x16ec6f0)
// Original: hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity
// ----------------------------------------------------------------------------
void hkpConvexVerticesConnectivity::Destroy(hkpConvexVerticesConnectivity::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B888);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      2 * (v2 & 0x3FFFFFFF));
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivity::Destroy_ea16ec7a0  (binary VA: 0x16ec7a0)
// Original: hkpConvexVerticesConnectivity::~hkpConvexVerticesConnectivity
// ----------------------------------------------------------------------------
void hkpConvexVerticesConnectivity::Destroy_ea16ec7a0(hkpConvexVerticesConnectivity::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B888);
  v1 = *((uint32_t *)self + 7);
  *((uint32_t *)self + 6) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 4);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
  *((uint32_t *)self + 3) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 2),
      2 * (v2 & 0x3FFFFFFF));
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivity::addFace  (binary VA: 0x16ec890)
// Original: hkpConvexVerticesConnectivity::addFace
// ----------------------------------------------------------------------------
int hkpConvexVerticesConnectivity::addFace(hkpConvexVerticesConnectivity::Self *self, int *a2, int a3)
{
  int *v3;
  int v4;
  int result;
  int v6;
  int *v7;
  int v8;
  int v9;
  int *v10;

  v3 = a2;
  v4 = *((uint32_t *)self + 6);
  if ( v4 == (*((uint32_t *)self + 7) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpConvexVerticesConnectivity::Self *)((char *)self + 20),
      1,
      v9);
    v4 = *((uint32_t *)self + 6);
    v3 = a2;
  }
  *(uint8_t *)(*((uint32_t *)self + 5) + v4) = a3;
  result = a3;
  ++*((uint32_t *)self + 6);
  if ( a3 > 0 )
  {
    v6 = 0;
    v7 = v3;
    result = *((uint32_t *)self + 3);
    do
    {
      v8 = v7[v6];
      if ( result == (*((uint32_t *)self + 4) & 0x3FFFFFFF) )
      {
        v10 = v7;
        hkArrayUtil::reserveMore(
          (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
          (hkpConvexVerticesConnectivity::Self *)((char *)self + 8),
          2,
          v9);
        result = *((uint32_t *)self + 3);
        v7 = v10;
      }
      ++v6;
      *(uint16_t *)(*((uint32_t *)self + 2) + 2 * result) = v8;
      result = *((uint32_t *)self + 3) + 1;
      *((uint32_t *)self + 3) = result;
    }
    while ( v6 != a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexVerticesConnectivity::isClosed  (binary VA: 0x16ec980)
// Original: hkpConvexVerticesConnectivity::isClosed
// ----------------------------------------------------------------------------
hkpConvexVerticesConnectivity::Self * hkpConvexVerticesConnectivity::isClosed(hkpConvexVerticesConnectivity::Self *self, uint32_t *a2)
{
  int v2;
  int v3;
  int v4;
  unsigned int v5;
  signed int Key;
  int v7;
  int v8;
  int v9;
  int v10;
  int v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef int _g4_t_v15;
  typedef int _g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef unsigned int _g4_t_v19;
  typedef unsigned int _g4_t_v20;
  typedef uint32_t _g4_t_v21[2];
  typedef int _g4_t_v22;
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v13)) > _g4_s0 ? (8u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v14)) > _g4_s1 ? (12u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v15)) > _g4_s2 ? (16u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v16)) > _g4_s3 ? (20u + sizeof(_g4_t_v16)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v17)) > _g4_s4 ? (28u + sizeof(_g4_t_v17)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v18)) > _g4_s5 ? (32u + sizeof(_g4_t_v18)) : _g4_s5,
    _g4_s7 = (40u + sizeof(_g4_t_v19)) > _g4_s6 ? (40u + sizeof(_g4_t_v19)) : _g4_s6,
    _g4_s8 = (44u + sizeof(_g4_t_v20)) > _g4_s7 ? (44u + sizeof(_g4_t_v20)) : _g4_s7,
    _g4_s9 = (48u + sizeof(_g4_t_v21)) > _g4_s8 ? (48u + sizeof(_g4_t_v21)) : _g4_s8,
    _g4_s10 = (56u + sizeof(_g4_t_v22)) > _g4_s9 ? (56u + sizeof(_g4_t_v22)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 16u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 20u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 28u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 32u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 40u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 44u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 48u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 56u);

  v21[0] = 0;
  v21[1] = 0;
  v22 = -1;
  v13 = a2[6];
  if ( v13 <= 0 )
    goto LABEL_19;
  v16 = 0;
  v15 = 0;
  do
  {
    v14 = *(uint8_t *)(a2[5] + v16);
    v18 = v15 + v15 + a2[2];
    v2 = *(uint16_t *)(v18 + 2 * v14 - 2);
    v17 = 2 * v14;
    v3 = 0;
    if ( *(uint8_t *)(a2[5] + v16) != 0 )
    {
      while ( 1 )
      {
        v9 = *(uint16_t *)(v18 + v3);
        if ( v9 > v2 )
        {
          v4 = 2;
          v5 = (v9 | (v2 << 16)) + 1;
        }
        else
        {
          v4 = 1;
          v5 = (v2 | (v9 << 16)) + 1;
        }
        v19 = v4;
        v20 = v5;
        Key = hkMapBase_unsigned_long_unsigned_l_393416::findKey(
                (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v21,
                v5);
        if ( Key > v22 )
        {
          hkMapBase_unsigned_long_unsigned_l_393416::insert(
            (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v21,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v20,
            v19);
          v3 += 2;
          if ( v3 == v17 )
            break;
        }
        else
        {
          v7 = v21[0] + 8 * Key;
          v8 = *(uint32_t *)(v7 + 4);
          if ( (v8 & v19) != 0 )
            goto LABEL_21;
          v3 += 2;
          *(uint32_t *)(v7 + 4) = v8 | v19;
          if ( v3 == v17 )
            break;
        }
        v2 = v9;
      }
    }
    ++v16;
    v15 += v14;
  }
  while ( v16 != v13 );
  if ( v22 < 0 )
    goto LABEL_19;
  if ( *(uint32_t *)v21[0] == -1 )
  {
    v10 = 0;
    while ( ++v10 <= v22 )
    {
      if ( *(uint32_t *)(v21[0] + 8 * v10) != -1 )
      {
        v12 = 8 * v10;
        goto LABEL_24;
      }
    }
LABEL_19:
    *(uint8_t *)self = 1;
    goto LABEL_22;
  }
  v12 = 0;
  v10 = 0;
LABEL_24:
  if ( *(uint32_t *)(v21[0] + v12 + 4) == 3 )
  {
    while ( ++v10 <= v22 )
    {
      if ( *(uint32_t *)(v21[0] + 8 * v10) != -1 && *(uint32_t *)(v21[0] + 8 * v10 + 4) != 3 )
        goto LABEL_21;
    }
    *(uint8_t *)self = 1;
  }
  else
  {
LABEL_21:
    *(uint8_t *)self = 0;
  }
LABEL_22:
  hkMapBase_unsigned_long_unsigned_l_393416::clearAndDeallocate(
    (hkMapBase<unsigned long, unsigned long, hkMapOperations<unsigned long>> *)v21,
    (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc);
  hkMapBase_unsigned_long_unsigned_l_393416::Destroy();
  return self;
}


