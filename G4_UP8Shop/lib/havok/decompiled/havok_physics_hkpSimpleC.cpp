#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSimpleC.h"

// ----------------------------------------------------------------------------
// Function: hkpSimpleClosestContactCollector::reset  (binary VA: 0x17052c0)
// Original: hkpSimpleClosestContactCollector::reset
// ----------------------------------------------------------------------------
hkpSimpleClosestContactCollector::Self * hkpSimpleClosestContactCollector::reset(hkpSimpleClosestContactCollector::Self *self)
{
  *((uint32_t *)self + 11) = 2139095022;
  *((uint8_t *)self + 8) = 0;
  *((uint32_t *)self + 1) = 2139095022;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleClosestContactCollector::Destroy  (binary VA: 0x17052f0)
// Original: hkpSimpleClosestContactCollector::~hkpSimpleClosestContactCollector
// ----------------------------------------------------------------------------
void hkpSimpleClosestContactCollector::Destroy(hkpSimpleClosestContactCollector::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleClosestContactCollector::addCdPoint  (binary VA: 0x1705310)
// Original: hkpSimpleClosestContactCollector::addCdPoint
// ----------------------------------------------------------------------------
int hkpSimpleClosestContactCollector::addCdPoint(int a1, int a2)
{
  int result;
  float v3; // xmm0_4
  int v4;

  result = a1;
  v3 = *(float *)(a2 + 28);
  if ( *(uint8_t *)(a1 + 8) == 0 || *(float *)(a1 + 44) > v3 )
  {
    *(uint8_t *)(a1 + 8) = 1;
    *(uint32_t *)(a1 + 16) = *(uint32_t *)a2;
    *(uint32_t *)(a1 + 20) = *(uint32_t *)(a2 + 4);
    *(uint32_t *)(a1 + 24) = *(uint32_t *)(a2 + 8);
    *(uint32_t *)(a1 + 28) = *(uint32_t *)(a2 + 12);
    *(uint32_t *)(a1 + 32) = *(uint32_t *)(a2 + 16);
    *(uint32_t *)(a1 + 36) = *(uint32_t *)(a2 + 20);
    *(uint32_t *)(a1 + 40) = *(uint32_t *)(a2 + 24);
    v4 = *(uint32_t *)(a2 + 28);
    *(float *)(a1 + 4) = v3;
    *(uint32_t *)(a1 + 44) = v4;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleClosestContactCollector::Destroy_ea1705370  (binary VA: 0x1705370)
// Original: hkpSimpleClosestContactCollector::~hkpSimpleClosestContactCollector
// ----------------------------------------------------------------------------
void hkpSimpleClosestContactCollector::Destroy_ea1705370(hkpSimpleClosestContactCollector::Self *self)
{
  int address;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2055250);
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  (*(void (**)(uint32_t, hkpSimpleClosestContactCollector::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    48);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintAtom::staticClass  (binary VA: 0x172b490)
// Original: hkpSimpleContactConstraintAtom::staticClass
// ----------------------------------------------------------------------------
void * hkpSimpleContactConstraintAtom::staticClass()
{
  return &hkpSimpleContactConstraintAtomClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintAtom::Construct  (binary VA: 0x17306d0)
// Original: hkpSimpleContactConstraintAtom::hkpSimpleContactConstraintAtom
// ----------------------------------------------------------------------------
uint8_t * hkpSimpleContactConstraintAtom::Construct(uint8_t *a1, int a2)
{
  uint8_t *result;

  result = a1;
  if ( a2 != 0 )
    a1[10] = 4 * (a1[8] + a1[9]) + 20;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::getConstraintInfo  (binary VA: 0x1765550)
// Original: hkpSimpleContactConstraintData::getConstraintInfo
// ----------------------------------------------------------------------------
__m128i * hkpSimpleContactConstraintData::getConstraintInfo(int a1, __m128i *a2)
{
  __m128i *result;
  int32_t v3;
  unsigned int v4;
  int v5;
  unsigned int v6;
  unsigned int v7;
  unsigned int v8;
  unsigned int v9;
  __m128i v10;
  int v11;
  unsigned int v12;

  result = a2;
g4_m128_lane<int32_t>(a2[1], 0) = *(uint32_t *)(a1 + 40);
  v3 = *(uint16_t *)(*(uint32_t *)(a1 + 40) + 2);
g4_m128_lane<int32_t>(*(a2), 0) = 0;
g4_m128_lane<int32_t>(*(a2), 1) = 0;
g4_m128_lane<int32_t>(*(a2), 2) = 0;
g4_m128_lane<int32_t>(*(a2), 3) = 0;
g4_m128_lane<int32_t>(a2[1], 1) = v3;
  v11 = *(uint32_t *)(a1 + 40);
  LOWORD(v3) = *(uint16_t *)(v11 + 4);
  v4 = (uint16_t)v3;
  v5 = 48 * (v3 & 1) + 112 * ((int)(uint16_t)v3 >> 1);
  v6 = (uint16_t)v3 + 3;
  v7 = v5 + 16;
g4_m128_lane<int32_t>(*(a2), 3) = v6;
g4_m128_lane<int32_t>(*(a2), 1) = v7 + 112;
  v12 = v7 + 144;
g4_m128_lane<int32_t>(*(a2), 0) = v7 + 144;
  v8 = v4 + 2;
g4_m128_lane<int32_t>(*(a2), 2) = v4 + 2;
  if ( v4 <= 1 )
  {
    v9 = v6;
    v6 = v8;
    v12 = v7 + 112;
  }
  else
  {
    v9 = v4 + 4;
g4_m128_lane<int32_t>(*(a2), 1) = v12;
g4_m128_lane<int32_t>(*(a2), 2) = v6;
g4_m128_lane<int32_t>(*(a2), 3) = v9;
  }
  if ( COERCE_FLOAT(*(int16_t *)(v11 + 20) << 16) != 0.0 )
  {
g4_m128_lane<int64_t>(v10, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v7), _mm_cvtsi32_si128(v12)), 0);
g4_m128_lane<int64_t>(v10, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_epi32(_mm_cvtsi32_si128(v6), _mm_cvtsi32_si128(v9)), 0);
    *a2 = _mm_add_epi32(v10, G4_BITCAST<__m128i>(xmmword_1C7CCB0));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::getRuntimeInfo  (binary VA: 0x1765670)
// Original: hkpSimpleContactConstraintData::getRuntimeInfo
// ----------------------------------------------------------------------------
uint32_t * hkpSimpleContactConstraintData::getRuntimeInfo(int a1, int a2, uint32_t *a3)
{
  *a3 = 0;
  a3[1] = 0;
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::getSolverResults  (binary VA: 0x1765690)
// Original: hkpSimpleContactConstraintData::getSolverResults
// ----------------------------------------------------------------------------
int hkpSimpleContactConstraintData::getSolverResults()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::isValid  (binary VA: 0x17656a0)
// Original: hkpSimpleContactConstraintData::isValid
// ----------------------------------------------------------------------------
hkpSimpleContactConstraintData::Self * hkpSimpleContactConstraintData::isValid(hkpSimpleContactConstraintData::Self *self)
{
  *(uint8_t *)self = 1;
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::getType  (binary VA: 0x17656b0)
// Original: hkpSimpleContactConstraintData::getType
// ----------------------------------------------------------------------------
int hkpSimpleContactConstraintData::getType()
{
  return 11;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::collisionResponseBeginCallback  (binary VA: 0x17656c0)
// Original: hkpSimpleContactConstraintData::collisionResponseBeginCallback
// ----------------------------------------------------------------------------
int hkpSimpleContactConstraintData::collisionResponseBeginCallback(int a1, int a2, int a3, int a4, int a5, int a6)
{
  int result;
  uint16_t *v7;

  result = *(uint32_t *)(a1 + 36);
  v7 = *(uint16_t **)(result + 16);
  if ( v7 != nullptr )
  {
    while ( 1 )
    {
      result = *v7;
      if ( (uint16_t)result <= 0x1Du )
        break;
      if ( (uint16_t)result == 31 )
      {
        hkpMassChangerModifierConstraintAtom::collisionResponseBeginCallback(v7, a2, a3, a4, a5);
      }
      else if ( (uint16_t)result > 0x1Fu )
      {
        if ( (uint16_t)result == 33 )
        {
          hkpMovingSurfaceModifierConstraintAtom::collisionResponseBeginCallback(v7, a2, a3, a4, a5, a6);
        }
        else if ( (uint16_t)result == 35 )
        {
          hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseBeginCallback(v7, a2, a3, a4, a5, a6);
        }
      }
      else if ( (uint16_t)result == 30 )
      {
        hkpSoftContactModifierConstraintAtom::collisionResponseBeginCallback(v7, a2, a3, a4, a5, a6);
      }
      v7 = *((uint16_t **)v7 + 5);
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::collisionResponseEndCallback  (binary VA: 0x17657e0)
// Original: hkpSimpleContactConstraintData::collisionResponseEndCallback
// ----------------------------------------------------------------------------
int hkpSimpleContactConstraintData::collisionResponseEndCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int result;
  uint16_t *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  uint16_t v14;
  typedef int _g4_t_v15;
  typedef int *_g4_t_v16;
  typedef int _g4_t_v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v15)) > _g4_s0 ? (12u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (32u + sizeof(_g4_t_v16)) > _g4_s1 ? (32u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (36u + sizeof(_g4_t_v17)) > _g4_s2 ? (36u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (40u + sizeof(_g4_t_v18)) > _g4_s3 ? (40u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (44u + sizeof(_g4_t_v19)) > _g4_s4 ? (44u + sizeof(_g4_t_v19)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 12u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 32u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 36u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 40u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 44u);

  result = *(uint32_t *)(a1 + 36);
  v8 = *(uint16_t **)(result + 16);
  if ( v8 != nullptr )
  {
    v17 = 0;
    v16 = &v19;
    v18 = -2147483632;
    if ( *v8 > 0x1Du )
    {
      v9 = -2147483632;
      v10 = 0;
      while ( 1 )
      {
        if ( (v9 & 0x3FFFFFFF) == v10 )
        {
          hkArrayUtil::reserveMore(
            (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
            (hkMemoryAllocator::Self *)&v16,
            4,
            v15);
          v10 = v17;
        }
        v16[v10] = (int)(uintptr_t)(v8);
        v8 = *((uint16_t **)v8 + 5);
        v11 = v17;
        v10 = ++v17;
        if ( *v8 <= 0x1Du )
          break;
        v9 = v18;
      }
      v12 = v11;
      if ( v11 >= 0 )
      {
        v13 = v11;
        do
        {
          v14 = *(uint16_t *)v16[v13];
          if ( v14 == 31 )
          {
            hkpMassChangerModifierConstraintAtom::collisionResponseEndCallback(v16[v13], a2, a3, a4, a5, a6, a7);
          }
          else if ( v14 > 0x1Fu )
          {
            if ( v14 == 33 )
            {
              hkpMovingSurfaceModifierConstraintAtom::collisionResponseEndCallback(v16[v13], a2, a3, a4, a5, a6, a7);
            }
            else if ( v14 == 35 )
            {
              hkpCenterOfMassChangerModifierConstraintAtom::collisionResponseEndCallback(
                v16[v13],
                a2,
                a3,
                a4,
                a5,
                a6,
                a7);
            }
          }
          else if ( v14 == 30 )
          {
            hkpSoftContactModifierConstraintAtom::collisionResponseEndCallback(v16[v13], a2, a3, a4, a5, a6, a7);
          }
          --v12;
          --v13;
        }
        while ( v12 != -1 );
      }
    }
    result = v18;
    v17 = 0;
    if ( v18 >= 0 )
      return (*(int (**)(uint32_t *, int *, int))(hkContainerHeapAllocator::s_alloc + 20))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               v16,
               4 * v18);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::Destroy  (binary VA: 0x1765a00)
// Original: hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData
// ----------------------------------------------------------------------------
void hkpSimpleContactConstraintData::Destroy(hkpSimpleContactConstraintData::Self *self)
{
  int v1;
  int v2;
  int address;
  int v4;

  v1 = *((uint32_t *)self + 10);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FFE8);
  if ( v1 != 0 )
  {
    v2 = atomSizeRoundUp(*(uint16_t *)(v1 + 2));
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      v2);
  }
  v4 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      v4 & 0x3FFFFFFF);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::Destroy_ea1765ab0  (binary VA: 0x1765ab0)
// Original: hkpSimpleContactConstraintData::~hkpSimpleContactConstraintData
// ----------------------------------------------------------------------------
void hkpSimpleContactConstraintData::Destroy_ea1765ab0(hkpSimpleContactConstraintData::Self *self)
{
  int v1;
  int address;
  int v3;
  int v4;
  int v5;
  int v6;

  v1 = *((uint32_t *)self + 10);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FFE8);
  if ( v1 != 0 )
  {
    v6 = atomSizeRoundUp(*(uint16_t *)(v1 + 2));
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      v6);
  }
  else
  {
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  }
  v3 = *((uint32_t *)self + 5);
  *((uint32_t *)self + 4) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 3),
      v3 & 0x3FFFFFFF);
  *((uint32_t *)self + 3) = 0;
  *((uint32_t *)self + 5) = 0x80000000;
  v4 = *((uint16_t *)self + 3);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v5 = 48;
  if ( v4 != 0xFFFF )
    v5 = v4;
  (*(void (**)(uint32_t, hkpSimpleContactConstraintData::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
    *(uint32_t *)(*(uint32_t *)address + 44),
    self,
    v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::allocateContactPoint  (binary VA: 0x1765bb0)
// Original: hkpSimpleContactConstraintData::allocateContactPoint
// ----------------------------------------------------------------------------
int hkpSimpleContactConstraintData::allocateContactPoint(int a1, uint32_t *a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  uint16_t *v11;
  int16_t v12;
  int v13;
  int v14;
  int result;
  int v16;
  uint8_t *v17;
  typedef int _g4_t_v18;
  typedef int _g4_t_v19;
  typedef hkpSimpleContactConstraintAtom::Self *_g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint16_t _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (12u + sizeof(_g4_t_v18)) > _g4_s0 ? (12u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v19)) > _g4_s1 ? (28u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v20)) > _g4_s2 ? (32u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (36u + sizeof(_g4_t_v21)) > _g4_s3 ? (36u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (42u + sizeof(_g4_t_v22)) > _g4_s4 ? (42u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (44u + sizeof(_g4_t_v23)) > _g4_s5 ? (44u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (48u + sizeof(_g4_t_v24)) > _g4_s6 ? (48u + sizeof(_g4_t_v24)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 12u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 28u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 32u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 36u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 42u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 44u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 48u);

  LOBYTE(v24[0]) = 0;
  v4 = *(uint32_t *)(a1 + 40);
  *(uint16_t *)(v4 + 16) |= 4u;
  v22 = *(uint16_t *)(v4 + 4);
  v20 = *(hkpSimpleContactConstraintAtom::Self **)(a1 + 40);
  v19 = (int)(uintptr_t)(hkpSimpleContactConstraintAtomUtil::expandOne(v20, (int)(uintptr_t)(v24)));
  *(uint32_t *)(a1 + 40) = v19;
  v5 = *(uint8_t *)(v19 + 10);
  v6 = v19 + 48 + 32 * *(uint16_t *)(v19 + 6) + v5 * v22;
  *(uint32_t *)v6 = 0;
  *(uint32_t *)(v6 + 4) = 0;
  *(uint8_t *)(v6 + 15) = 1;
  if ( v22 != 0 )
  {
    if ( (*(uint8_t *)(v6 - v5 + 15) & 2) == 0 && *(uint8_t *)(v6 - v5 + 14) == 0 )
      *(uint8_t *)(v6 + 15) = 3;
    *a3 = v19 + 48 + 32 * v22;
    *a4 = v6;
    v7 = 96;
    v21 = 48 * (((uint8_t)v22 + 1) & 1) + 112 * ((v22 + 1) >> 1) + 160;
    v8 = 64;
    if ( v22 == 1 )
      v8 = 96;
    LOBYTE(v7) = 48;
    if ( v22 == 1 )
      v7 = 80;
    v9 = (v22 == 1) + 1;
    if ( (((uint8_t)v22 + 1) & 1) != 0 )
      v8 = v7;
  }
  else
  {
    v9 = 1;
    v21 = 208;
    *a3 = v19 + 48;
    *a4 = v6;
    v8 = 48;
  }
  v23 = *(uint32_t *)(a1 + 36);
  if ( *(uint32_t *)(v23 + 48) != 0 )
  {
    v10 = a2[2];
    if ( v21 >= v10 )
      v10 = v21;
    if ( v10 < v8 )
      v10 = v8;
    a2[3] += v8;
    a2[2] = v10;
    a2[4] += v9;
    a2[5] += v9;
    v11 = *(uint16_t **)(v23 + 48);
    v12 = v11[12];
    v11[11] += v9;
    v11[10] += v8;
    v11[12] = v9 + v12;
    v13 = a2[2];
    if ( *(uint16_t *)(*(uint32_t *)(v23 + 48) + 20) >= v13 )
      v13 = *(uint16_t *)(*(uint32_t *)(v23 + 48) + 20);
    a2[2] = v13;
  }
  if ( LOBYTE(v24[0]) != 0 )
  {
    hkpWorldConstraintUtil::updateFatherOfMovedAtom(
      *(hkpWorldConstraintUtil::Self **)(a1 + 36),
      v20,
      *(const hkpConstraintAtom::Self **)(a1 + 40),
      (const hkpConstraintAtom::Self *)*(uint16_t *)(v19 + 2));
    *(uint32_t *)(a1 + 44) = *(uint16_t *)(v19 + 2);
  }
  v14 = *(uint32_t *)(a1 + 16);
  result = v14 - 1;
  if ( v14 - 1 >= 0 )
  {
    v16 = *(uint32_t *)(a1 + 12);
    v17 = (uint8_t *)(v16 + result);
    if ( *(uint8_t *)(v16 + result) == 0xFF )
    {
LABEL_29:
      *v17 = v22;
      return result;
    }
    while ( --result != -1 )
    {
      v17 = (uint8_t *)(result + v16);
      if ( *(uint8_t *)(v16 + result) == 0xFF )
        goto LABEL_29;
    }
  }
  if ( v14 == (*(uint32_t *)(a1 + 20) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, (hkMemoryAllocator::Self *)(a1 + 12), 1, v18);
    v14 = *(uint32_t *)(a1 + 16);
  }
  *(uint8_t *)(*(uint32_t *)(a1 + 12) + v14) = v22;
  result = *(uint32_t *)(a1 + 16);
  *(uint32_t *)(a1 + 16) = result + 1;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::Construct  (binary VA: 0x1765e50)
// Original: hkpSimpleContactConstraintData::hkpSimpleContactConstraintData
// ----------------------------------------------------------------------------
void hkpSimpleContactConstraintData::Construct(hkpSimpleContactConstraintData::Self *self, hkpConstraintInstance::Self *a2, hkpRigidBody::Self *a3, hkpRigidBody::Self *a4)
{
  int Atom;
  int v5;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209FFE8);
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)((char *)self + 24);
  *((uint32_t *)self + 9) = (uint32_t)(uintptr_t)(a2);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = -2147483640;
  Atom = hkpSimpleContactConstraintAtomUtil::allocateAtom(
           (hkpSimpleContactConstraintAtomUtil::Self *)((char *)&dword_0 + 1),
           *((uint8_t *)a3 + 205),
           *((uint8_t *)a4 + 205),
           13312 / (4 * (*((uint8_t *)a4 + 205) + *((uint8_t *)a3 + 205)) + 52),
           v5);
  *((uint32_t *)self + 10) = Atom;
  *(uint16_t *)(Atom + 16) = 0;
  *(uint16_t *)(Atom + 18) = 3;
  *(uint32_t *)(Atom + 28) = 0;
  *(uint16_t *)(Atom + 22) = 0;
  *(uint16_t *)(Atom + 24) = 0;
  *(uint16_t *)(Atom + 26) = 0;
  *(uint32_t *)(Atom + 32) = 0;
  *(uint16_t *)(Atom + 20) = 0;
  *(uint32_t *)(Atom + 36) = 0;
  *(uint32_t *)(Atom + 40) = 0;
  *(uint32_t *)(Atom + 44) = 0;
  *((uint32_t *)self + 11) = *(uint16_t *)(*((uint32_t *)self + 10) + 2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::getSimpleConstraintContactMgr  (binary VA: 0x1765f40)
// Original: hkpSimpleContactConstraintData::getSimpleConstraintContactMgr
// ----------------------------------------------------------------------------
char * hkpSimpleContactConstraintData::getSimpleConstraintContactMgr(hkpSimpleContactConstraintData::Self *self)
{
  return (char *)self - 20;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::cleanup  (binary VA: 0x1776140)
// Original: hkpSimpleConstraintContactMgr::cleanup
// ----------------------------------------------------------------------------
hkpSimpleConstraintContactMgr::Self * hkpSimpleConstraintContactMgr::cleanup(hkpSimpleConstraintContactMgr::Self *self)
{
  hkpSimpleConstraintContactMgr::Self *result;

  result = self;
  if ( self != nullptr )
    return (hkpSimpleConstraintContactMgr::Self *)G4_VCALL<int>(self, 4);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::getType  (binary VA: 0x1776160)
// Original: hkpSimpleConstraintContactMgr::getType
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::getType()
{
  return 0;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::getClassType  (binary VA: 0x1776170)
// Original: hkpSimpleConstraintContactMgr::getClassType
// ----------------------------------------------------------------------------
void * hkpSimpleConstraintContactMgr::getClassType()
{
  return &hkpSimpleConstraintContactMgrClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::getConstraintInstance  (binary VA: 0x1776190)
// Original: hkpSimpleConstraintContactMgr::getConstraintInstance
// ----------------------------------------------------------------------------
char * hkpSimpleConstraintContactMgr::getConstraintInstance(hkpSimpleConstraintContactMgr::Self *self)
{
  return (char *)self + 68;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::getConstraintInstance_ea17761a0  (binary VA: 0x17761a0)
// Original: hkpSimpleConstraintContactMgr::getConstraintInstance
// ----------------------------------------------------------------------------
char * hkpSimpleConstraintContactMgr::getConstraintInstance_ea17761a0(hkpSimpleConstraintContactMgr::Self *self)
{
  return (char *)self + 68;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::reserveContactPointsImpl  (binary VA: 0x17761b0)
// Original: hkpSimpleConstraintContactMgr::reserveContactPointsImpl
// ----------------------------------------------------------------------------
hkpSimpleConstraintContactMgr::Self * hkpSimpleConstraintContactMgr::reserveContactPointsImpl(hkpSimpleConstraintContactMgr::Self *self, int a2, int a3)
{
  hkpSimpleConstraintContactMgr::Self *result;
  int v4;
  uint16_t v5; // si
  int v6;
  int v7;
  int v8;

  result = self;
  v4 = *(uint32_t *)(a2 + 60);
  v5 = *(uint16_t *)(a2 + 16);
  v6 = *(uint16_t *)(v4 + 12) - 1;
  v7 = v5 + a3 + *(uint16_t *)(v4 + 4);
  v8 = 1;
  if ( v6 > v7 )
  {
    v8 = 0;
    *(uint16_t *)(a2 + 16) = (uint8_t)(a3 + v5);
  }
  *(uint32_t *)self = v8;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::getContactPoint  (binary VA: 0x1776200)
// Original: hkpSimpleConstraintContactMgr::getContactPoint
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::getContactPoint(hkpSimpleConstraintContactMgr::Self *self, uint16_t a2)
{
  return *((uint32_t *)self + 15) + 32 * *(uint8_t *)(*((uint32_t *)self + 8) + a2) + 48;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::getContactPointProperties  (binary VA: 0x1776220)
// Original: hkpSimpleConstraintContactMgr::getContactPointProperties
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::getContactPointProperties(hkpSimpleConstraintContactMgr::Self *self, uint16_t a2)
{
  int v2;

  v2 = *(uint8_t *)(*((uint32_t *)self + 8) + a2);
  if ( v2 == 255 )
    return 0;
  else
    return *(uint8_t *)(*((uint32_t *)self + 15) + 10) * v2
         + 32 * *(uint16_t *)(*((uint32_t *)self + 15) + 6)
         + *((uint32_t *)self + 15)
         + 48;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::Factory::Destroy  (binary VA: 0x1776260)
// Original: hkpSimpleConstraintContactMgr::Factory::~Factory
// ----------------------------------------------------------------------------
void hkpSimpleConstraintContactMgr::Factory::Destroy(hkpSimpleConstraintContactMgr::Factory::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::fireCallbacksForEarliestToi  (binary VA: 0x1776280)
// Original: hkpSimpleConstraintContactMgr::fireCallbacksForEarliestToi
// ----------------------------------------------------------------------------
uint8_t * hkpSimpleConstraintContactMgr::fireCallbacksForEarliestToi(uint8_t *a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  uint16_t *v8;
  char v9;
  uint32_t v11[19];

  v11[4] = 0;
  v11[3] = a2;
  LOWORD(v11[7]) = 0;
  BYTE2(v11[7]) = 0;
  v4 = *(uint32_t *)(a3 + 12);
  v11[2] = *(uint32_t *)(a3 + 16);
  v11[5] = a3 + 80;
  v11[6] = a3 + 24;
  v11[8] = a3 + 4;
  v11[9] = a4;
  v11[1] = v4;
  v11[11] = 0;
  v11[10] = a3 + 44;
  v11[12] = 0;
  v5 = *(uint32_t *)(v4 + 8);
  v11[0] = 2;
  hkpWorldCallbackUtil::fireContactPointCallback(v5, (int)(uintptr_t)(v11));
  v6 = *(uint32_t *)(a3 + 12);
  v11[0] = 0;
  if ( *(uint16_t *)(v6 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointCallbackInternal(v6, v11);
  v7 = *(uint32_t *)(a3 + 16);
  v11[0] = 1;
  if ( *(uint16_t *)(v7 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointCallbackInternal(v7, v11);
  v8 = *(uint16_t **)(a2 + 84);
  if ( v8 == nullptr || (v9 = 0, *v8 != 34) )
    v9 = ((*(uint8_t *)(a3 + 39) >> 3) ^ 1) & 1;
  *a1 = v9;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::confirmToi  (binary VA: 0x1776390)
// Original: hkpSimpleConstraintContactMgr::confirmToi
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::confirmToi(int a1, int a2, int64_t a3)
{
  int result;
  int v4;

  result = a2;
  v4 = *(uint32_t *)(a2 + 12);
  if ( (*(uint8_t *)(a2 + 39) & 8) == 0
    && ((uint8_t)(*(uint8_t *)(v4 + 232) - 4) > 1u
     || (uint8_t)(*(uint8_t *)(*(uint32_t *)(a2 + 16) + 232) - 4) > 1u) )
  {
    return hkLs_doSimpleCollisionResponse(*(uint32_t *)(v4 + 8), a2, a3, (uint32_t *)HIDWORD(a3));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::getAllContactPointIds  (binary VA: 0x1776410)
// Original: hkpSimpleConstraintContactMgr::getAllContactPointIds
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::getAllContactPointIds(hkpSimpleConstraintContactMgr::Self *self, hkArray<unsigned short, hkContainerHeapAllocator::Self> *a2)
{
  int v2;
  int v3;
  int result;
  int v5;
  int16_t v6;
  int16_t v7;

  v2 = 0;
  v3 = *((uint32_t *)self + 9);
  if ( v3 > 0 )
  {
    do
    {
      result = *((uint32_t *)self + 8);
      if ( *(uint8_t *)(result + v2) != 0xFF )
      {
        v5 = *((uint32_t *)a2 + 1);
        v6 = v2;
        if ( v5 == (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) )
        {
          hkArrayUtil::reserveMore((hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc, a2, 2, v2);
          v5 = *((uint32_t *)a2 + 1);
          v6 = v7;
        }
        result = *(uint32_t *)a2;
        *(uint16_t *)(*(uint32_t *)a2 + 2 * v5) = v6;
        ++*((uint32_t *)a2 + 1);
        v3 = *((uint32_t *)self + 9);
      }
      ++v2;
    }
    while ( v2 < v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::toiCollisionResponseBeginCallback  (binary VA: 0x17764a0)
// Original: hkpSimpleConstraintContactMgr::toiCollisionResponseBeginCallback
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::toiCollisionResponseBeginCallback(int a1, int a2, int a3, int a4, int a5, int a6)
{
  return hkpSimpleContactConstraintData::collisionResponseBeginCallback(a1 + 20, a2, a3, a4, a5, a6);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::toiCollisionResponseEndCallback  (binary VA: 0x17764f0)
// Original: hkpSimpleConstraintContactMgr::toiCollisionResponseEndCallback
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::toiCollisionResponseEndCallback(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  return hkpSimpleContactConstraintData::collisionResponseEndCallback(a1 + 20, a2, a3, a4, a5, a6, a7);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::processContactImpl  (binary VA: 0x1776550)
// Original: hkpSimpleConstraintContactMgr::processContactImpl
// ----------------------------------------------------------------------------
int * hkpSimpleConstraintContactMgr::processContactImpl(int a1, int a2, int a3, int a4, int a5)
{
  int v5;
  int *result;
  uint32_t *v7;
  int v8;
  int v9; // xmm0_4
  uint32_t *v10;
  int v11;
  int v12;
  uint16_t v13;
  uint16_t v14; // si
  uint32_t *v15;
  unsigned int v16;
  int v17;
  int v18;
  int v19;
  typedef int _g4_t_v20;
  typedef int _g4_t_v21;
  typedef uint16_t _g4_t_v22;
  typedef int _g4_t_v23;
  typedef unsigned int _g4_t_v24;
  typedef unsigned int _g4_t_v25;
  typedef uint32_t _g4_t_v26[4];
  typedef uint32_t _g4_t_v27[263];
  enum : size_t {
    _g4_s0 = 1168u,
    _g4_s1 = (8u + sizeof(_g4_t_v20)) > _g4_s0 ? (8u + sizeof(_g4_t_v20)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v21)) > _g4_s1 ? (12u + sizeof(_g4_t_v21)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v22)) > _g4_s2 ? (20u + sizeof(_g4_t_v22)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v23)) > _g4_s3 ? (24u + sizeof(_g4_t_v23)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v24)) > _g4_s4 ? (28u + sizeof(_g4_t_v24)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v25)) > _g4_s5 ? (28u + sizeof(_g4_t_v25)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v26)) > _g4_s6 ? (32u + sizeof(_g4_t_v26)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v27)) > _g4_s7 ? (48u + sizeof(_g4_t_v27)) : _g4_s7
  };
  alignas(16) uint8_t _g4_sf[_g4_s8];
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 8u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 12u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 20u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 24u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 28u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 28u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);

  v5 = a1;
  if ( *(uint16_t *)(a1 + 18) != 0 )
  {
    v22 = *(uint16_t *)(a1 + 18) - 1;
    result = (int *)(a5 + 16);
    goto LABEL_3;
  }
  v11 = *(char *)(a2 + 16) + a2;
  v26[1] = a3;
  v12 = *(char *)(a3 + 16);
  v20 = v11;
  v26[0] = a2;
  v27[256] = a1;
  v21 = a3 + v12;
  v13 = *(uint16_t *)(a3 + v12 + 166);
  v14 = *(uint16_t *)(v11 + 166);
  if ( v14 <= v13 )
    v13 = v14;
  v26[3] = a5;
  v22 = v13;
  v25 = *(uint32_t *)a5;
  if ( (unsigned int)(a5 + 16) < *(uint32_t *)a5 )
  {
    v15 = v27;
    v23 = *(uint32_t *)(a1 + 32);
    v16 = a5 + 16;
    do
    {
      ++v15;
      v17 = 0;
      v18 = *(uint8_t *)(v23 + *(uint32_t *)(v16 + 32));
      if ( v18 != 255 )
        v17 = *(uint8_t *)(*(uint32_t *)(a1 + 60) + 10) * v18
            + *(uint32_t *)(a1 + 60)
            + 32 * *(uint16_t *)(*(uint32_t *)(a1 + 60) + 6)
            + 48;
      v16 += 48;
      *(v15 - 1) = v17;
    }
    while ( v16 < v25 );
    v5 = a1;
  }
  hkpWorldCallbackUtil::fireContactProcess(*(uint32_t *)(v5 + 12), (int)(uintptr_t)(v26));
  if ( *(uint16_t *)(v20 + 516) != 0 )
  {
    hkpEntityCallbackUtil::fireContactProcessInternal(v20, v26);
    v19 = v21;
    if ( *(uint16_t *)(v21 + 516) == 0 )
      goto LABEL_17;
    goto LABEL_18;
  }
  v19 = v21;
  if ( *(uint16_t *)(v21 + 516) != 0 )
LABEL_18:
    hkpEntityCallbackUtil::fireContactProcessInternal(v19, v26);
LABEL_17:
  (*(void (**)(uint32_t, uint32_t, int))(**(uint32_t **)(a5 + 4) + 28))(*(uint32_t *)(a5 + 4), *(uint32_t *)(v5 + 56), 8);
  result = (int *)(a5 + 16);
LABEL_3:
  *(uint16_t *)(v5 + 18) = v22;
  v7 = (uint32_t *)(result + 4);
  if ( *(uint32_t *)a5 > (unsigned int)(uintptr_t)(result) )
  {
    v24 = *(uint32_t *)a5;
    do
    {
      v8 = result[8];
      v9 = *result;
      v7 += 12;
      result += 12;
      v10 = (uint32_t *)(*(uint32_t *)(v5 + 60) + 32 * *(uint8_t *)(*(uint32_t *)(v5 + 32) + v8) + 48);
      *v10 = v9;
      v10[1] = *(result - 11);
      v10[2] = *(result - 10);
      v10[3] = *(result - 9);
      v10[4] = *(v7 - 12);
      v10[5] = *(v7 - 11);
      v10[6] = *(v7 - 10);
      v10[7] = *(v7 - 9);
    }
    while ( (unsigned int)(uintptr_t)(result) < v24 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::Factory::Destroy_ea1776770  (binary VA: 0x1776770)
// Original: hkpSimpleConstraintContactMgr::Factory::~Factory
// ----------------------------------------------------------------------------
void hkpSimpleConstraintContactMgr::Factory::Destroy_ea1776770(hkpSimpleConstraintContactMgr::Factory::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 12;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::removeToiImpl  (binary VA: 0x1776830)
// Original: hkpSimpleConstraintContactMgr::removeToiImpl
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::removeToiImpl(uint32_t *a1, int a2, int a3)
{
  int v3;
  int v4;
  int result;
  typedef int _g4_t_v6;
  typedef uint32_t _g4_t_v7[11];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  v7[5] = (uint32_t)(uintptr_t)(a1);
  v7[1] = a3;
  v7[6] = a2;
  v3 = a1[22];
  v4 = a1[23];
  v6 = a1[3];
  LOWORD(v7[0]) = -1;
  v7[2] = v3;
  v7[3] = v4;
  result = hkpWorldCallbackUtil::fireContactPointRemoved(v6, (int)(uintptr_t)(v7));
  if ( *(uint16_t *)(v3 + 516) != 0 )
    result = hkpEntityCallbackUtil::fireContactPointRemovedInternal(v3, v7);
  if ( *(uint16_t *)(v4 + 516) != 0 )
    return hkpEntityCallbackUtil::fireContactPointRemovedInternal(v4, v7);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::addContactPointImpl  (binary VA: 0x17768d0)
// Original: hkpSimpleConstraintContactMgr::addContactPointImpl
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::addContactPointImpl(__m128i a1, int a2, uint32_t *a3, uint32_t *a4, int a5, int a6, int a7, float *a8)
{
  int v8;
  int v9;
  int v10;
  int result;
  uint32_t *v12;
  uint8_t *v13;
  float v14; // xmm1_4
  float v15; // xmm1_4
  int v16;
  unsigned int v17;
  int v18;
  int v19;
  int v20;
  char v21;
  uint32_t *i;
  int v23;
  int v24;
  uint32_t *v25;
  bool v26;
  uint32_t *v27;
  int v28;
  int v29;
  int v30;
  int v31;
  float v32; // xmm6_4
  float v33; // xmm3_4
  float v34; // xmm5_4
  float v35; // xmm7_4
  float v36; // xmm4_4
  float v37; // xmm0_4
  float v38; // xmm4_4
  int v39;
  float v40; // xmm0_4
  int v41;
  int16_t v42;
  __m128i v43;
  int v44;
  int v45;
  int v46;
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef float _g4_t_v49;
  typedef int _g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef int _g4_t_v53;
  typedef float _g4_t_v54;
  typedef float _g4_t_v55;
  typedef float _g4_t_v56;
  typedef int _g4_t_v57;
  typedef int _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef int _g4_t_v63[4];
  typedef uint32_t *_g4_t_v64;
  typedef uint32_t *_g4_t_v65;
  typedef int _g4_t_v66;
  typedef int _g4_t_v67;
  typedef float *_g4_t_v68;
  typedef int _g4_t_v69;
  typedef int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef int _g4_t_v72;
  typedef int _g4_t_v73;
  typedef int _g4_t_v74;
  typedef int _g4_t_v75;
  typedef int _g4_t_v76;
  typedef int _g4_t_v77;
  typedef int _g4_t_v78;
  typedef int _g4_t_v79;
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v47)) > _g4_s0 ? (12u + sizeof(_g4_t_v47)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v48)) > _g4_s1 ? (16u + sizeof(_g4_t_v48)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v49)) > _g4_s2 ? (20u + sizeof(_g4_t_v49)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v50)) > _g4_s3 ? (24u + sizeof(_g4_t_v50)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v51)) > _g4_s4 ? (24u + sizeof(_g4_t_v51)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v52)) > _g4_s5 ? (28u + sizeof(_g4_t_v52)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v53)) > _g4_s6 ? (28u + sizeof(_g4_t_v53)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v54)) > _g4_s7 ? (28u + sizeof(_g4_t_v54)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v55)) > _g4_s8 ? (28u + sizeof(_g4_t_v55)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v56)) > _g4_s9 ? (28u + sizeof(_g4_t_v56)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v57)) > _g4_s10 ? (32u + sizeof(_g4_t_v57)) : _g4_s10,
    _g4_s12 = (40u + sizeof(_g4_t_v58)) > _g4_s11 ? (40u + sizeof(_g4_t_v58)) : _g4_s11,
    _g4_s13 = (40u + sizeof(_g4_t_v59)) > _g4_s12 ? (40u + sizeof(_g4_t_v59)) : _g4_s12,
    _g4_s14 = (40u + sizeof(_g4_t_v60)) > _g4_s13 ? (40u + sizeof(_g4_t_v60)) : _g4_s13,
    _g4_s15 = (44u + sizeof(_g4_t_v61)) > _g4_s14 ? (44u + sizeof(_g4_t_v61)) : _g4_s14,
    _g4_s16 = (44u + sizeof(_g4_t_v62)) > _g4_s15 ? (44u + sizeof(_g4_t_v62)) : _g4_s15,
    _g4_s17 = (48u + sizeof(_g4_t_v63)) > _g4_s16 ? (48u + sizeof(_g4_t_v63)) : _g4_s16,
    _g4_s18 = (64u + sizeof(_g4_t_v64)) > _g4_s17 ? (64u + sizeof(_g4_t_v64)) : _g4_s17,
    _g4_s19 = (68u + sizeof(_g4_t_v65)) > _g4_s18 ? (68u + sizeof(_g4_t_v65)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v66)) > _g4_s19 ? (72u + sizeof(_g4_t_v66)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v67)) > _g4_s20 ? (76u + sizeof(_g4_t_v67)) : _g4_s20,
    _g4_s22 = (80u + sizeof(_g4_t_v68)) > _g4_s21 ? (80u + sizeof(_g4_t_v68)) : _g4_s21,
    _g4_s23 = (84u + sizeof(_g4_t_v69)) > _g4_s22 ? (84u + sizeof(_g4_t_v69)) : _g4_s22,
    _g4_s24 = (88u + sizeof(_g4_t_v70)) > _g4_s23 ? (88u + sizeof(_g4_t_v70)) : _g4_s23,
    _g4_s25 = (92u + sizeof(_g4_t_v71)) > _g4_s24 ? (92u + sizeof(_g4_t_v71)) : _g4_s24,
    _g4_s26 = (96u + sizeof(_g4_t_v72)) > _g4_s25 ? (96u + sizeof(_g4_t_v72)) : _g4_s25,
    _g4_s27 = (100u + sizeof(_g4_t_v73)) > _g4_s26 ? (100u + sizeof(_g4_t_v73)) : _g4_s26,
    _g4_s28 = (104u + sizeof(_g4_t_v74)) > _g4_s27 ? (104u + sizeof(_g4_t_v74)) : _g4_s27,
    _g4_s29 = (108u + sizeof(_g4_t_v75)) > _g4_s28 ? (108u + sizeof(_g4_t_v75)) : _g4_s28,
    _g4_s30 = (112u + sizeof(_g4_t_v76)) > _g4_s29 ? (112u + sizeof(_g4_t_v76)) : _g4_s29,
    _g4_s31 = (116u + sizeof(_g4_t_v77)) > _g4_s30 ? (116u + sizeof(_g4_t_v77)) : _g4_s30,
    _g4_s32 = (120u + sizeof(_g4_t_v78)) > _g4_s31 ? (120u + sizeof(_g4_t_v78)) : _g4_s31,
    _g4_s33 = (124u + sizeof(_g4_t_v79)) > _g4_s32 ? (124u + sizeof(_g4_t_v79)) : _g4_s32
  };
  alignas(16) uint8_t _g4_sf[_g4_s33];
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 12u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 16u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 20u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 24u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 24u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 28u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 28u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 28u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 28u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 28u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 32u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 40u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 40u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 40u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 44u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 48u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 64u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 68u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 72u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 76u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 80u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 84u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 88u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 92u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 96u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 100u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 104u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 108u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 112u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 116u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 120u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 124u);

  v8 = *(uint32_t *)(a2 + 60);
  v9 = *(uint16_t *)(v8 + 4);
  v10 = *(uint16_t *)(v8 + 12) - 1;
  result = -1;
  if ( v10 > v9 + *(uint16_t *)(a2 + 16) )
  {
    if ( v9 == 0 )
      (*(void (**)(uint32_t, int))(**(uint32_t **)(a6 + 4) + 20))(*(uint32_t *)(a6 + 4), a2 + 68);
    HIWORD(v57) = hkpSimpleContactConstraintData::allocateContactPoint(a2 + 20, *(uint32_t **)(a6 + 4), &v64, v63);
    v12 = v64;
    *v64 = *(uint32_t *)a8;
    v12[1] = *((uint32_t *)a8 + 1);
    v12[2] = *((uint32_t *)a8 + 2);
    v12[3] = *((uint32_t *)a8 + 3);
    v12[4] = *((uint32_t *)a8 + 4);
    v12[5] = *((uint32_t *)a8 + 5);
    v12[6] = *((uint32_t *)a8 + 6);
    v12[7] = *((uint32_t *)a8 + 7);
    v13 = (uint8_t *)v63[0];
    v61 = *(uint32_t *)(a2 + 92);
    v14 = *(float *)(v61 + 140) * *(float *)(*(uint32_t *)(a2 + 88) + 140);
    v58 = *(uint32_t *)(a2 + 88);
    *(float *)g4_m128_ptr<int32_t>(a1) = fsqrt(v14);
    if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(a1)) )
    {
      v56 = sqrtf(v14);
g4_m128_raw(a1) = LODWORD(v56);
    }
    v64 = (uint32_t *)g4_m128_lane<int32_t>(a1, 0);
    hkUFloat8::opAssign((hkUFloat8::Self *)(v13 + 12), (const float *)&v64);
    v15 = *(float *)(v61 + 144) * *(float *)(v58 + 144);
    *(float *)g4_m128_ptr<int32_t>(a1) = fsqrt(v15);
    if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(a1)) )
    {
      v55 = sqrtf(v15);
g4_m128_raw(a1) = LODWORD(v55);
    }
    *(float *)g4_m128_ptr<int32_t>(a1) = *(float *)g4_m128_ptr<int32_t>(a1) * 128.0;
    v16 = _mm_cvtsi128_si32(a1);
    v17 = (v16 & 0x7F800000u) >> 23;
    v52 = v17 - 127;
    if ( v17 < 0x7F )
    {
      v21 = 0;
    }
    else
    {
      v18 = (v16 >> 31) | 1;
      v19 = _mm_cvtsi128_si32(a1) & 0x7FFFFF | 0x800000;
      if ( v52 > 23 )
        v20 = v19 << (v17 + 106);
      else
        v20 = v19 >> (23 - v52);
      v21 = v18 * v20;
    }
    v13[13] = v21;
    v13[14] = 0;
    for ( i = a3; i[3] != 0; i = (uint32_t *)i[3] )
      ;
    v23 = (int)(uintptr_t)(i) + *((char *)i + 16);
    v24 = *(uint32_t *)(a2 + 60);
    v53 = *(uint8_t *)(v24 + 8);
    v50 = *(uint8_t *)(v24 + 9);
    if ( v53 + v50 != 0 )
    {
      v25 = a4;
      v26 = v58 == v23;
      if ( v58 != v23 )
        v25 = a3;
      v27 = a3;
      if ( v58 != v23 )
        v27 = a4;
      v28 = v58;
      if ( !v26 )
        v28 = v61;
      v62 = v28;
      if ( v27[1] == -1 && v27[3] != 0 )
        v27 = (uint32_t *)v27[3];
      v29 = 0;
      if ( v53 > 0 )
      {
        do
        {
          *(uint32_t *)&v13[4 * v29++ + 20] = v27[1];
          v27 = (uint32_t *)v27[3];
        }
        while ( v53 > v29 && v27 != nullptr );
      }
      if ( v25[1] == -1 && v25[3] != 0 )
        v25 = (uint32_t *)v25[3];
      if ( v50 > 0 )
      {
        v30 = 0;
        do
        {
          *(uint32_t *)&v13[4 * v53 + 20 + 4 * v30++] = v25[1];
          v25 = (uint32_t *)v25[3];
        }
        while ( v50 > v30 && v25 != nullptr );
      }
    }
    else
    {
      v62 = (int)(uintptr_t)(i) + *((char *)i + 16);
    }
    v31 = v62 ^ *(uint32_t *)(a2 + 88) ^ *(uint32_t *)(a2 + 92);
    v54 = *(float *)(v62 + 452);
    v32 = a8[2] - *(float *)(v62 + 328);
    v33 = a8[1] - *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_144)->st_name + v31);
    v34 = a8[2] - *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_144)->st_value + v31);
    v59 = a8[1] - *(float *)(v62 + 324);
    v51 = *(float *)(v62 + 456);
    v49 = *a8 - *(float *)&stru_134[v31 + 12];
    v35 = *a8 - *(float *)(v62 + 320);
    v36 = *(float *)(v62 + 448);
    v37 = (float)((float)((float)((float)((float)(v54 * v32) - (float)(v51 * v59)) + *(float *)(v62 + 432))
                        - (float)((float)((float)(*(float *)(v31 + 452) * v34) - (float)(*(float *)(v31 + 456) * v33))
                                + *(float *)(&reinterpret_cast<G4Elf32Sym *>(stru_1A4)->st_info + v31)))
                * a8[4])
        + (float)((float)((float)((float)((float)(v51 * v35) - (float)(v32 * v36)) + *(float *)(v62 + 436))
                        - (float)((float)((float)(*(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_1C4)->st_value + v31) * v49)
                                        - (float)(v34 * *(float *)(&reinterpret_cast<G4Elf32Sym *>(stru_1B4)->st_info + v31)))
                                + *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_1B4)->st_name + v31)))
                * a8[5]);
    v38 = (float)((float)((float)((float)(v36 * v59) - (float)(v54 * v35)) + *(float *)(v62 + 440))
                - (float)((float)((float)(v33 * *(float *)(v31 + 448))
                                - (float)(v49 * *(float *)((char *)&reinterpret_cast<G4Elf32Sym *>(stru_1C4)->st_name + v31)))
                        + *(float *)(v31 + 440)))
        * a8[6];
    *(uint32_t *)v63[0] = 0;
    v39 = v63[0];
    v40 = v37 + v38;
    *(uint32_t *)(v63[0] + 8) = 0;
    v68 = a8;
    v70 = v39;
    v69 = a7;
    v73 = a2;
    v74 = a5;
    v75 = a6;
    v41 = *(uint32_t *)(a2 + 8);
    v64 = a3;
    LOWORD(v76) = HIWORD(v57);
    v42 = 0;
    v65 = a4;
    v66 = 1;
    v71 = v40;
    v72 = 0;
    if ( v41 == 0 )
      v42 = *(uint16_t *)(a2 + 18);
    v60 = v40;
    HIWORD(v76) = v42;
    hkpWorldCallbackUtil::fireContactPointAdded(*(uint32_t *)(a2 + 12), (int)(uintptr_t)(&v64));
    if ( *(uint16_t *)(v62 + 516) != 0 )
      hkpEntityCallbackUtil::fireContactPointAddedInternal(v62, &v64);
    if ( *(uint16_t *)(v31 + 516) != 0 )
    {
      v60 = v40;
      hkpEntityCallbackUtil::fireContactPointAddedInternal(v31, &v64);
    }
    if ( v72 == 1 )
    {
      G4_VCALL<void>(a2, 28, HIWORD(v57), *(uint32_t *)(a6 + 4));
      return -1;
    }
    else
    {
      *(uint16_t *)(a2 + 18) = HIWORD(v76);
      if ( *(uint8_t *)(a5 + 109) == 0
        || (float)((float)*(uint8_t *)(v63[0] + 13) * 0.0078125) != 0.0
        || *(uint16_t *)(v62 + 516) != 0
        || *(uint16_t *)(v31 + 516) != 0 )
      {
        (*(void (**)(uint32_t, uint32_t, int, int, int, float, float, float, int, uint32_t **, float, int, int, int, int, int, uint32_t *, uint32_t *, int, int, float *, int, int, float, int, int, int, int, int, int, int, int))(**(uint32_t **)(a6 + 4) + 28))(
          *(uint32_t *)(a6 + 4),
          *(uint32_t *)(a2 + 56),
          1,
          v47,
          v48,
          COERCE_FLOAT(LODWORD(v49)),
          COERCE_FLOAT(LODWORD(v51)),
          COERCE_FLOAT(LODWORD(v54)),
          v57,
          &v64,
          COERCE_FLOAT(LODWORD(v60)),
          v62,
          v63[0],
          v63[1],
          v63[2],
          v63[3],
          v64,
          v65,
          v66,
          v67,
          v68,
          v69,
          v70,
          COERCE_FLOAT(LODWORD(v71)),
          v72,
          v73,
          v74,
          v75,
          v76,
          v77,
          v78,
          v79);
        return HIWORD(a5);
      }
      else
      {
g4_m128_raw(v43) = *(unsigned int *)(v31 + 428);
        *(float *)g4_m128_ptr<int32_t>(v43) = (float)(*(float *)g4_m128_ptr<int32_t>(v43) + *(float *)(v62 + 428)) + 1.0e-10f;
        v44 = _mm_cvtsi128_si32(v43);
        v45 = (2130706432 - v44) & ((v44 ^ (v44 + 2139095040)) >> 31);
        *(float *)v63[0] = (float)((float)((float)(2.0
                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v43)
                                                         * (float)((float)(2.0
                                                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v43)
                                                                                 * (float)((float)(2.0
                                                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v43) * *(float *)&v45))
                                                                                         * *(float *)&v45)))
                                                                 * (float)((float)(2.0
                                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v43)
                                                                                         * *(float *)&v45))
                                                                         * *(float *)&v45))))
                                         * (float)((float)(2.0
                                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v43)
                                                                 * (float)((float)(2.0
                                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v43)
                                                                                         * *(float *)&v45))
                                                                         * *(float *)&v45)))
                                                 * (float)((float)(2.0
                                                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v43) * *(float *)&v45))
                                                         * *(float *)&v45)))
                                 * -0.2f)
                         * v40;
        v46 = v63[0];
        *(uint32_t *)(v63[0] + 4) = 0;
        *(uint32_t *)(v46 + 16) = 0;
        return HIWORD(v57);
      }
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::addToiImpl  (binary VA: 0x1776f90)
// Original: hkpSimpleConstraintContactMgr::addToiImpl
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::addToiImpl(__m128i a1, uint32_t *a2, float a3, float a4, int a5, int a6, int a7, float a8, float a9, int *a10, uint8_t *a11)
{
  float v11; // xmm1_4
  float v12; // xmm1_4
  int v13;
  unsigned int v14;
  int v15;
  int v16;
  int v17;
  int v18;
  char v19;
  float i;
  int v21;
  int v22;
  int v23;
  float v24;
  bool v25;
  float v26;
  int v27;
  int v28;
  int v29;
  int v30;
  int v31;
  int v32; // xmm0_4
  int v33;
  int v34;
  int result;
  typedef int _g4_t_v36;
  typedef bool _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef int _g4_t_v42;
  typedef bool _g4_t_v43;
  typedef int _g4_t_v44;
  typedef int _g4_t_v45;
  typedef float _g4_t_v46[7];
  typedef int _g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef int _g4_t_v51;
  typedef int _g4_t_v52;
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v36)) > _g4_s0 ? (4u + sizeof(_g4_t_v36)) : _g4_s0,
    _g4_s2 = (11u + sizeof(_g4_t_v37)) > _g4_s1 ? (11u + sizeof(_g4_t_v37)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v38)) > _g4_s2 ? (12u + sizeof(_g4_t_v38)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v39)) > _g4_s3 ? (16u + sizeof(_g4_t_v39)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v40)) > _g4_s4 ? (16u + sizeof(_g4_t_v40)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v41)) > _g4_s5 ? (20u + sizeof(_g4_t_v41)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v42)) > _g4_s6 ? (24u + sizeof(_g4_t_v42)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v43)) > _g4_s7 ? (24u + sizeof(_g4_t_v43)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v44)) > _g4_s8 ? (28u + sizeof(_g4_t_v44)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v45)) > _g4_s9 ? (28u + sizeof(_g4_t_v45)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v46)) > _g4_s10 ? (32u + sizeof(_g4_t_v46)) : _g4_s10,
    _g4_s12 = (60u + sizeof(_g4_t_v47)) > _g4_s11 ? (60u + sizeof(_g4_t_v47)) : _g4_s11,
    _g4_s13 = (64u + sizeof(_g4_t_v48)) > _g4_s12 ? (64u + sizeof(_g4_t_v48)) : _g4_s12,
    _g4_s14 = (68u + sizeof(_g4_t_v49)) > _g4_s13 ? (68u + sizeof(_g4_t_v49)) : _g4_s13,
    _g4_s15 = (72u + sizeof(_g4_t_v50)) > _g4_s14 ? (72u + sizeof(_g4_t_v50)) : _g4_s14,
    _g4_s16 = (76u + sizeof(_g4_t_v51)) > _g4_s15 ? (76u + sizeof(_g4_t_v51)) : _g4_s15,
    _g4_s17 = (80u + sizeof(_g4_t_v52)) > _g4_s16 ? (80u + sizeof(_g4_t_v52)) : _g4_s16
  };
  alignas(16) uint8_t _g4_sf[_g4_s17];
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 4u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 11u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 12u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 16u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 16u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 20u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 24u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 32u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 60u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 68u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 72u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 76u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 80u);

  v44 = a2[23];
  v42 = a2[22];
  v11 = *(float *)(v44 + 140) * *(float *)(v42 + 140);
  *(float *)g4_m128_ptr<int32_t>(a1) = fsqrt(v11);
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(a1)) )
  {
    v41 = sqrtf(v11);
g4_m128_raw(a1) = LODWORD(v41);
  }
  v46[0] = *(float *)g4_m128_ptr<int32_t>(a1);
  hkUFloat8::opAssign((hkUFloat8::Self *)(a11 + 12), v46);
  v12 = *(float *)(v44 + 144) * *(float *)(v42 + 144);
  *(float *)g4_m128_ptr<int32_t>(a1) = fsqrt(v12);
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(a1)) )
  {
    v40 = sqrtf(v12);
g4_m128_raw(a1) = LODWORD(v40);
  }
  *(float *)g4_m128_ptr<int32_t>(a1) = *(float *)g4_m128_ptr<int32_t>(a1) * 128.0;
  v13 = _mm_cvtsi128_si32(a1);
  v14 = (v13 & 0x7F800000u) >> 23;
  v15 = v14 - 127;
  if ( v14 < 0x7F )
  {
    v19 = 0;
  }
  else
  {
    v16 = (v13 >> 31) | 1;
    v17 = _mm_cvtsi128_si32(a1) & 0x7FFFFF | 0x800000;
    if ( v15 > 23 )
      v18 = v17 << (v14 + 106);
    else
      v18 = v17 >> (23 - v15);
    v19 = v16 * v18;
  }
  a11[13] = v19;
  a11[14] = 0;
  for ( i = a3; *(uint32_t *)(LODWORD(i) + 12) != 0; i = *(float *)(LODWORD(i) + 12) )
    ;
  v21 = LODWORD(i) + *(char *)(LODWORD(i) + 16);
  v22 = a2[15];
  v23 = *(uint8_t *)(v22 + 8);
  v39 = *(uint8_t *)(v22 + 9);
  if ( v23 + v39 == 0 )
  {
    v45 = LODWORD(i) + *(char *)(LODWORD(i) + 16);
    goto LABEL_32;
  }
  v24 = a4;
  v25 = v42 == v21;
  if ( v42 != v21 )
    v24 = a3;
  v26 = a3;
  if ( v42 != v21 )
    v26 = a4;
  v27 = v42;
  if ( !v25 )
    v27 = v44;
  v45 = v27;
  if ( v23 <= 6 )
  {
    v36 = v23;
    v28 = 7 - v23;
    if ( 7 - v23 > v39 )
      v28 = v39;
    v38 = v28;
    v37 = v28 > 0;
    v43 = v23 > 0;
    v29 = (int)(uintptr_t)(&a11[4 * v23 + 20]);
    if ( *(uint32_t *)(LODWORD(v26) + 4) != -1 )
      goto LABEL_23;
    goto LABEL_41;
  }
  v43 = true;
  v37 = false;
  v36 = 7;
  v38 = 0;
  v29 = (int)(uintptr_t)(a11 + 48);
  if ( *(uint32_t *)(LODWORD(v26) + 4) == -1 )
  {
LABEL_41:
    if ( *(uint32_t *)(LODWORD(v26) + 12) != 0 )
      v26 = *(float *)(LODWORD(v26) + 12);
  }
LABEL_23:
  v30 = 0;
  if ( v43 )
  {
    do
    {
      *(uint32_t *)&a11[4 * v30++ + 20] = *(uint32_t *)(LODWORD(v26) + 4);
      v26 = *(float *)(LODWORD(v26) + 12);
    }
    while ( v30 < v36 && v26 != 0.0 );
  }
  if ( *(uint32_t *)(LODWORD(v24) + 4) == -1 && *(uint32_t *)(LODWORD(v24) + 12) != 0 )
    v24 = *(float *)(LODWORD(v24) + 12);
  if ( v37 )
  {
    v31 = 0;
    do
    {
      *(uint32_t *)(v29 + 4 * v31++) = *(uint32_t *)(LODWORD(v24) + 4);
      v24 = *(float *)(LODWORD(v24) + 12);
    }
    while ( v31 < v38 && v24 != 0.0 );
  }
LABEL_32:
  v32 = *a10;
  v46[0] = a3;
  v46[1] = a4;
  v49 = a2;
  v51 = a6;
  v33 = v45 ^ a2[22] ^ a2[23];
  v46[4] = a8;
  v46[5] = a9;
  v50 = a5;
  v34 = a2[3];
  v47 = v32;
  v46[2] = 0.0;
  LODWORD(v46[6]) = (uint32_t)(uintptr_t)(a11);
  v48 = 0;
  v52 = a7;
  hkpWorldCallbackUtil::fireContactPointAdded(v34, (int)(uintptr_t)(v46));
  if ( *(uint16_t *)(v45 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointAddedInternal(v45, v46);
  if ( *(uint16_t *)(v33 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointAddedInternal(v33, v46);
  result = v48;
  if ( v48 == 1 )
  {
    G4_VCALL<void>(a2, 40, *(uint32_t *)(a6 + 4), a11);
    return v48;
  }
  else
  {
    *a10 = v47;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::Construct  (binary VA: 0x1777340)
// Original: hkpSimpleConstraintContactMgr::hkpSimpleConstraintContactMgr
// ----------------------------------------------------------------------------
void hkpSimpleConstraintContactMgr::Construct(hkpSimpleConstraintContactMgr::Self *self, hkpWorld::Self *a2, hkpRigidBody::Self *a3, hkpRigidBody::Self *a4)
{
  int32_t v4; // ett
  int32_t v5; // ett
  __m128i v6;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0828);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 0;
  hkpSimpleContactConstraintData::Construct(
    (hkpSimpleContactConstraintData::Self *)((hkpSimpleConstraintContactMgr::Self *)((char *)self + 20)),
    (hkpConstraintInstance::Self *)((hkpSimpleConstraintContactMgr::Self *)((char *)self + 68)),
    a3,
    a4);
  hkpConstraintInstance::Construct((int)(uintptr_t)(self) + 68, 1);
  *((uint32_t *)self + 22) = (uint32_t)(uintptr_t)(a3);
  *((uint32_t *)self + 20) = (uint32_t)(uintptr_t)((char *)self + 20);
  *((uint32_t *)self + 23) = (uint32_t)(uintptr_t)(a4);
  *((uint32_t *)self + 30) = -1;
  *((uint32_t *)self + 3) = (uint32_t)(uintptr_t)(a2);
  *((uint16_t *)self + 9) = 0;
  *((uint16_t *)self + 8) = 0;
  do
    v4 = *((uint32_t *)self + 6);
  while ( v4 != __sync_val_compare_and_swap((volatile int32_t *)self + 6, v4, (uint16_t)v4) );
  do
    v5 = *((uint32_t *)self + 18);
  while ( v5 != __sync_val_compare_and_swap((volatile int32_t *)self + 18, v5, (uint16_t)v5) );
  hkpConstraintInstance::setPriority(
    (int)(uintptr_t)(self) + 68,
    *(uint16_t *)(*((uint32_t *)a2 + 30)
             + (*(char *)(*((char *)a4 + 42) + *((uint32_t *)a2 + 30) + 10 * *((char *)a3 + 42) + 7776) << 6)
             + 7948));
  v6 = _mm_cvtsi32_si128(*((int16_t *)a3 + 69) << 16);
  *(float *)g4_m128_ptr<int32_t>(v6) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v6), COERCE_FLOAT(*((int16_t *)a4 + 69) << 16)) * 1.0039062f;
  *(uint16_t *)(*((uint32_t *)self + 15) + 20) = (unsigned int)_mm_cvtsi128_si32(v6) >> 16;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::Factory::createContactMgr  (binary VA: 0x1777470)
// Original: hkpSimpleConstraintContactMgr::Factory::createContactMgr
// ----------------------------------------------------------------------------
hkpSimpleConstraintContactMgr::Self * hkpSimpleConstraintContactMgr::Factory::createContactMgr(int a1, int a2, int a3)
{
  hkpRigidBody::Self *v3;
  hkpRigidBody::Self *v4;
  int address;
  hkpSimpleConstraintContactMgr::Self *v6;

  v3 = (hkpRigidBody::Self *)(a3 + *(char *)(a3 + 16));
  v4 = (hkpRigidBody::Self *)(a2 + *(char *)(a2 + 16));
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v6 = (hkpSimpleConstraintContactMgr::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
                                          *(uint32_t *)(*(uint32_t *)address + 44),
                                          128);
  hkpSimpleConstraintContactMgr::Construct(v6, *(hkpWorld::Self **)(a1 + 8), v4, v3);
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintData::freeContactPoint  (binary VA: 0x17774f0)
// Original: hkpSimpleContactConstraintData::freeContactPoint
// ----------------------------------------------------------------------------
int hkpSimpleContactConstraintData::freeContactPoint(hkpSimpleContactConstraintData::Self *self, hkpConstraintOwner::Self *a2, uint16_t a3)
{
  int v3;
  uint8_t *v4;
  int v5;
  uint16_t v6; // si
  int v7;
  int v8;
  int v9;
  bool v10;
  int v11;
  int v12;
  int v13;
  uint32_t *v14;
  int v15;
  int v16;
  unsigned int v17;
  uint32_t *v18;
  uint32_t *v19;
  char *v20;
  int i;
  int v22;
  int v23;
  uint8_t *v24;
  uint8_t v25;
  int v26;
  uint16_t *v27;
  int16_t v28;
  int16_t v29;
  typedef hkpConstraintInstance::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef int _g4_t_v33;
  typedef int _g4_t_v34;
  typedef int _g4_t_v35;
  typedef int _g4_t_v36;
  typedef int _g4_t_v37;
  typedef int _g4_t_v38;
  typedef unsigned int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int _g4_t_v42;
  typedef int _g4_t_v43;
  typedef int _g4_t_v44;
  typedef uint32_t *_g4_t_v45;
  typedef int _g4_t_v46;
  typedef uint32_t *_g4_t_v47;
  typedef int _g4_t_v48;
  typedef uint32_t *_g4_t_v49;
  typedef int _g4_t_v50[7];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (4u + sizeof(_g4_t_v31)) > _g4_s0 ? (4u + sizeof(_g4_t_v31)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v32)) > _g4_s1 ? (8u + sizeof(_g4_t_v32)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v33)) > _g4_s2 ? (12u + sizeof(_g4_t_v33)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v34)) > _g4_s3 ? (16u + sizeof(_g4_t_v34)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v35)) > _g4_s4 ? (28u + sizeof(_g4_t_v35)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v36)) > _g4_s5 ? (28u + sizeof(_g4_t_v36)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v37)) > _g4_s6 ? (32u + sizeof(_g4_t_v37)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v38)) > _g4_s7 ? (40u + sizeof(_g4_t_v38)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v39)) > _g4_s8 ? (44u + sizeof(_g4_t_v39)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v40)) > _g4_s9 ? (52u + sizeof(_g4_t_v40)) : _g4_s9,
    _g4_s11 = (60u + sizeof(_g4_t_v41)) > _g4_s10 ? (60u + sizeof(_g4_t_v41)) : _g4_s10,
    _g4_s12 = (64u + sizeof(_g4_t_v42)) > _g4_s11 ? (64u + sizeof(_g4_t_v42)) : _g4_s11,
    _g4_s13 = (68u + sizeof(_g4_t_v43)) > _g4_s12 ? (68u + sizeof(_g4_t_v43)) : _g4_s12,
    _g4_s14 = (72u + sizeof(_g4_t_v44)) > _g4_s13 ? (72u + sizeof(_g4_t_v44)) : _g4_s13,
    _g4_s15 = (76u + sizeof(_g4_t_v45)) > _g4_s14 ? (76u + sizeof(_g4_t_v45)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v46)) > _g4_s15 ? (80u + sizeof(_g4_t_v46)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v47)) > _g4_s16 ? (84u + sizeof(_g4_t_v47)) : _g4_s16,
    _g4_s18 = (88u + sizeof(_g4_t_v48)) > _g4_s17 ? (88u + sizeof(_g4_t_v48)) : _g4_s17,
    _g4_s19 = (92u + sizeof(_g4_t_v49)) > _g4_s18 ? (92u + sizeof(_g4_t_v49)) : _g4_s18,
    _g4_s20 = (96u + sizeof(_g4_t_v50)) > _g4_s19 ? (96u + sizeof(_g4_t_v50)) : _g4_s19
  };
  alignas(16) uint8_t _g4_sf[_g4_s20];
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 4u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 8u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 12u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 16u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 28u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 28u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 32u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 40u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 44u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 52u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 60u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 64u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 68u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 72u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 76u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 80u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 84u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 88u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 92u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 96u);

  v3 = 64;
  v4 = (uint8_t *)(*((uint32_t *)self + 3) + a3);
  v33 = *((uint32_t *)self + 10);
  v5 = (uint8_t)*v4;
  *v4 = -1;
  v6 = *(uint16_t *)(v33 + 4);
  v7 = 96;
  v38 = v5;
  LOBYTE(v50[0]) = 0;
  v31 = *((hkpConstraintInstance::Self **)self + 10);
  v8 = v6;
  if ( v6 == 2 )
    v3 = 96;
  LOBYTE(v7) = 48;
  v35 = v3;
  v9 = 80;
  if ( v6 != 2 )
    v9 = v7;
  v32 = (v6 == 2) + 1;
  v10 = (v6 & 1) == 0;
  v11 = v9;
  if ( v10 )
    v11 = v35;
  v36 = v11;
  v34 = v8 - 1;
  *(uint16_t *)(v33 + 4) = v8 - 1;
  v43 = v33 + 48 + 32 * v5;
  v12 = *(uint8_t *)(v33 + 10);
  v13 = v12 * v5 + v33 + 48 + 32 * *(uint16_t *)(v33 + 6);
  if ( v5 < v8 - 1 )
  {
    v41 = v34 - v5;
    v14 = (uint32_t *)(v13 + v12);
    v48 = v12 >> 2;
    v47 = (uint32_t *)(v33 + 48 + 32 * v5);
    v46 = 0;
    v39 = (unsigned int)(v12 >> 2) >> 2;
    v44 = 4 * v39;
    v40 = v43 + 16;
    v37 = 4 * v39;
    v49 = (uint32_t *)(v12 * v5 + v33 + 48 + 32 * *(uint16_t *)(v33 + 6));
    v15 = v43 + 48;
    while ( 1 )
    {
      *v47 = v47[8];
      v47[1] = v47[9];
      v47[2] = v47[10];
      v20 = (char *)v47 - v43;
      v47[3] = v47[11];
      *(uint32_t *)&v20[v40] = *(uint32_t *)&v20[v15];
      *(uint32_t *)&v20[v40 + 4] = *(uint32_t *)&v20[v15 + 4];
      *(uint32_t *)&v20[v40 + 8] = *(uint32_t *)&v20[v15 + 8];
      *(uint32_t *)&v20[v40 + 12] = *(uint32_t *)&v20[v15 + 12];
      if ( v48 != 0 )
      {
        if ( (v14 >= v49 + 4 || v49 >= v14 + 4) && (unsigned int)v48 > 0xB )
        {
          if ( v44 == 0 )
          {
            v19 = v14 + 1;
            v42 = 1;
            v45 = v49 + 1;
            *v49 = *v14;
LABEL_13:
            *v45 = *v19;
            if ( v42 + 1 < v48 )
              v45[1] = v19[1];
            goto LABEL_15;
          }
          v16 = 0;
          v17 = 0;
          do
          {
            ++v17;
            *(__m128i *)&v49[v16] = *(__m128i *)&v14[v16];
            v16 += 4;
          }
          while ( v39 > v17 );
          v18 = &v14[v37];
          if ( v48 != v44 )
          {
            v45 = &v49[v37 + 1];
            v19 = v18 + 1;
            v49[v37] = *v18;
            v42 = 4 * v39 + 1;
            if ( v42 < v48 )
              goto LABEL_13;
          }
        }
        else
        {
          for ( i = 0; i != v48; ++i )
            v49[i] = v14[i];
        }
      }
LABEL_15:
      v47 += 8;
      v49 = (uint32_t *)((char *)v49 + v12);
      v14 = (uint32_t *)((char *)v14 + v12);
      if ( ++v46 == v41 )
      {
        v13 = v38 * *(uint8_t *)(v33 + 10) + v33 + 48 + 32 * *(uint16_t *)(v33 + 6);
        break;
      }
    }
  }
  *(uint8_t *)(v13 + 15) &= ~2u;
  v22 = (int)(uintptr_t)(hkpSimpleContactConstraintAtomUtil::optimizeCapacity(
          *((hkpSimpleContactConstraintAtom::Self **)self + 10),
          1,
          (int)(uintptr_t)(v50)));
  *((uint32_t *)self + 10) = v22;
  v23 = *((uint32_t *)self + 4) - 1;
  if ( v23 >= 0 )
  {
    do
    {
      v24 = (uint8_t *)(*((uint32_t *)self + 3) + v23);
      v25 = *v24;
      if ( *v24 != 0xFF && v38 < v25 )
        *v24 = v25 - 1;
      --v23;
    }
    while ( v23 != -1 );
  }
  v26 = *((uint32_t *)self + 9);
  if ( *(uint32_t *)(v26 + 48) != 0 )
  {
    *((uint32_t *)a2 + 3) -= v36;
    *((uint32_t *)a2 + 4) -= v32;
    *((uint32_t *)a2 + 5) -= v32;
    v27 = *(uint16_t **)(v26 + 48);
    v28 = v27[12];
    v27[11] -= v32;
    v29 = v27[10] - v36;
    v27[12] = v28 - v32;
    v27[10] = v29;
  }
  if ( LOBYTE(v50[0]) != 0 )
  {
    hkpWorldConstraintUtil::updateFatherOfMovedAtom(
      *((hkpWorldConstraintUtil::Self **)self + 9),
      v31,
      *((const hkpConstraintAtom::Self **)self + 10),
      (const hkpConstraintAtom::Self *)*(uint16_t *)(*((uint32_t *)self + 10) + 2));
    *((uint32_t *)self + 11) = *(uint16_t *)(*((uint32_t *)self + 10) + 2);
  }
  *(uint16_t *)(v22 + 16) |= 5u;
  return v34;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::removeContactPointImpl  (binary VA: 0x17778e0)
// Original: hkpSimpleConstraintContactMgr::removeContactPointImpl
// ----------------------------------------------------------------------------
int hkpSimpleConstraintContactMgr::removeContactPointImpl(hkpSimpleConstraintContactMgr::Self *self, uint16_t a2, hkpConstraintOwner::Self *a3)
{
  int v3;
  int v4;
  int result;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  typedef uint32_t _g4_t_v9[11];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v6)) > _g4_s0 ? (0u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (24u + sizeof(_g4_t_v7)) > _g4_s1 ? (24u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v8)) > _g4_s2 ? (28u + sizeof(_g4_t_v8)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v9)) > _g4_s3 ? (32u + sizeof(_g4_t_v9)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 0u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 24u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 28u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 32u);

  v7 = *((uint32_t *)self + 22);
  v8 = *((uint32_t *)self + 23);
  v3 = *(uint8_t *)(*((uint32_t *)self + 8) + a2);
  v4 = 0;
  if ( v3 != 255 )
    v4 = *(uint8_t *)(*((uint32_t *)self + 15) + 10) * v3
       + *((uint32_t *)self + 15)
       + 32 * *(uint16_t *)(*((uint32_t *)self + 15) + 6)
       + 48;
  LOWORD(v9[0]) = a2;
  v9[1] = v4;
  v9[3] = v8;
  v9[6] = (uint32_t)(uintptr_t)(a3);
  v6 = *((uint32_t *)self + 3);
  v9[2] = v7;
  v9[5] = (uint32_t)(uintptr_t)(self);
  hkpWorldCallbackUtil::fireContactPointRemoved(v6, (int)(uintptr_t)(v9));
  if ( *(uint16_t *)(v7 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointRemovedInternal(v7, v9);
  if ( *(uint16_t *)(v8 + 516) != 0 )
    hkpEntityCallbackUtil::fireContactPointRemovedInternal(v8, v9);
  result = hkpSimpleContactConstraintData::freeContactPoint(
             (hkpSimpleContactConstraintData::Self *)((hkpSimpleConstraintContactMgr::Self *)((char *)self + 20)),
             a3,
             a2);
  if ( result == 0 )
    return G4_VCALL<int>(a3, 24, (char *)self + 68);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::Factory::Construct  (binary VA: 0x1777a00)
// Original: hkpSimpleConstraintContactMgr::Factory::Factory
// ----------------------------------------------------------------------------
hkpSimpleConstraintContactMgr::Factory::Self * hkpSimpleConstraintContactMgr::Factory::Construct(hkpSimpleConstraintContactMgr::Factory::Self *self, hkpWorld::Self *a2)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0888);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = (uint32_t)(uintptr_t)(a2);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::Destroy  (binary VA: 0x1777ac0)
// Original: hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr
// ----------------------------------------------------------------------------
void hkpSimpleConstraintContactMgr::Destroy(hkpWorldCallbackUtil::Self **self)
{
  int v1;
  int v2;
  int address;
  int v4;

  *self = (hkpWorldCallbackUtil::Self *)((uint32_t)(uintptr_t)&off_20A0828);
  if ( *((uint16_t *)*(self + 15) + 2) != 0 )
    hkpWorldOperationUtil::removeConstraintImmediately(*(self + 3), (hkpWorldConstraintUtil::Self *)(self + 17), 1);
  *(self + 22) = nullptr;
  *(self + 23) = nullptr;
  *(self + 20) = nullptr;
  hkpConstraintInstance::Destroy((hkpConstraintInstance::Self *)(self + 17));
  v1 = (int)(uintptr_t)(*(self + 15));
  *(self + 5) = (hkpWorldCallbackUtil::Self *)((uint32_t)(uintptr_t)&off_209FFE8);
  if ( v1 != 0 )
  {
    v2 = atomSizeRoundUp(*(uint16_t *)(v1 + 2));
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      v1,
      v2);
  }
  v4 = (int)(uintptr_t)(*(self + 10));
  *(self + 9) = nullptr;
  if ( v4 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      (uint32_t)(uintptr_t)(*(self + 8)),
      v4 & 0x3FFFFFFF);
  *(self + 8) = nullptr;
  *(self + 10) = (hkpWorldCallbackUtil::Self *)0x80000000;
  *(self + 5) = (hkpWorldCallbackUtil::Self *)((uint32_t)(uintptr_t)&off_2054CB8);
  *self = (hkpWorldCallbackUtil::Self *)((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintContactMgr::Destroy_ea1777bc0  (binary VA: 0x1777bc0)
// Original: hkpSimpleConstraintContactMgr::~hkpSimpleConstraintContactMgr
// ----------------------------------------------------------------------------
void hkpSimpleConstraintContactMgr::Destroy_ea1777bc0(hkpWorldCallbackUtil::Self **self)
{
  int v1;
  int v2;

  hkpSimpleConstraintContactMgr::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 128;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintAtomUtil::allocateAtom  (binary VA: 0x177b460)
// Original: hkpSimpleContactConstraintAtomUtil::allocateAtom
// ----------------------------------------------------------------------------
int hkpSimpleContactConstraintAtomUtil::allocateAtom(hkpSimpleContactConstraintAtomUtil::Self *self, int a2, int a3, int16_t a4)
{
  int v4;
  int v5;
  int address;
  int result;

  LOBYTE(v4) = atomSizeRoundUp(((uint32_t)(uintptr_t)(self) * (4 * (a3 + a2) + 52) + 63) & 0xFFFFFFF0);
  v5 = v4;
  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  result = (*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
             *(uint32_t *)(*(uint32_t *)address + 44),
             v5);
  *(uint8_t *)(result + 8) = a2;
  *(uint16_t *)(result + 2) = ((uint16_t)(uintptr_t)(self) * (4 * (a3 + a2) + 52) + 63) & 0xFFF0;
  *(uint8_t *)(result + 9) = a3;
  *(uint16_t *)(result + 6) = (uint16_t)(uintptr_t)(self);
  *(uint16_t *)(result + 12) = a4;
  *(uint8_t *)(result + 10) = 4 * (a3 + a2) + 20;
  *(uint16_t *)(result + 16) = 0;
  *(uint16_t *)(result + 18) = 3;
  *(uint32_t *)(result + 28) = 0;
  *(uint16_t *)(result + 22) = 0;
  *(uint16_t *)(result + 24) = 0;
  *(uint16_t *)(result + 26) = 0;
  *(uint16_t *)(result + 20) = 0;
  *(uint16_t *)result = 29;
  *(uint32_t *)(result + 32) = 0;
  *(uint16_t *)(result + 4) = 0;
  *(uint32_t *)(result + 36) = 0;
  *(uint32_t *)(result + 40) = 0;
  *(uint32_t *)(result + 44) = 0;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintAtomUtil::copyContents  (binary VA: 0x177b540)
// Original: hkpSimpleContactConstraintAtomUtil::copyContents
// ----------------------------------------------------------------------------
hkpSimpleContactConstraintAtom::Self * hkpSimpleContactConstraintAtomUtil::copyContents(hkpSimpleContactConstraintAtomUtil::Self *self, hkpSimpleContactConstraintAtom::Self *a2)
{
  int v2;
  uint32_t *v3;
  hkpSimpleContactConstraintAtom::Self *result;
  int v5;
  unsigned int v6;
  uint32_t *v7;
  uint32_t *v8;
  int v9;
  int v10;
  int v11;
  int i;
  int v13;
  unsigned int v14;
  char *v15;
  hkpSimpleContactConstraintAtom::Self *v16;
  int v17;
  uint32_t *v18;
  uint32_t *v19;
  int v20;
  char *v21;
  int v22;
  uint32_t *v23;
  char *v24;

  *((uint16_t *)self + 8) = *((uint16_t *)a2 + 8);
  *((uint16_t *)self + 9) = *((uint16_t *)a2 + 9);
  *((uint16_t *)self + 10) = *((uint16_t *)a2 + 10);
  *((uint16_t *)self + 11) = *((uint16_t *)a2 + 11);
  *((uint16_t *)self + 12) = *((uint16_t *)a2 + 12);
  *((uint16_t *)self + 13) = *((uint16_t *)a2 + 13);
  *((uint32_t *)self + 7) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 8) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 11);
  *((uint16_t *)self + 2) = *((uint16_t *)a2 + 2);
  v2 = *((uint8_t *)a2 + 10);
  v23 = (uint32_t *)((char *)self + 32 * *((uint16_t *)self + 3) + 48);
  v16 = (hkpSimpleContactConstraintAtom::Self *)((char *)a2 + 48);
  v3 = (uint32_t *)((char *)a2 + 32 * *((uint16_t *)a2 + 3) + 48);
  result = a2;
  if ( *((uint16_t *)a2 + 2) != 0 )
  {
    v21 = (char *)self + 48;
    v22 = v2 >> 2;
    v20 = 0;
    v14 = (unsigned int)(v2 >> 2) >> 2;
    v17 = 4 * v14;
    v13 = 4 * v14;
    v15 = (char *)self + 64;
    result = (hkpSimpleContactConstraintAtom::Self *)((char *)a2 + 48);
    v24 = (char *)a2 + 64;
    do
    {
      v21 += 32;
      v10 = *(uint32_t *)result;
      result = (hkpSimpleContactConstraintAtom::Self *)((char *)result + 32);
      *((uint32_t *)v21 - 8) = v10;
      *((uint32_t *)v21 - 7) = *((uint32_t *)result - 7);
      *((uint32_t *)v21 - 6) = *((uint32_t *)result - 6);
      *((uint32_t *)v21 - 5) = *((uint32_t *)result - 5);
      v11 = v21 - ((char *)self + 48);
      *(uint32_t *)&v15[v11 - 32] = *(uint32_t *)&v24[result - v16 - 32];
      *(uint32_t *)&v15[v11 - 28] = *(uint32_t *)&v24[result - v16 - 28];
      *(uint32_t *)&v15[v11 - 24] = *(uint32_t *)&v24[result - v16 - 24];
      *(uint32_t *)&v15[v11 - 20] = *(uint32_t *)&v24[result - v16 - 20];
      if ( v22 != 0 )
      {
        if ( v3 < v23 + 4 && v23 < v3 + 4 || (unsigned int)v22 <= 0xB )
        {
          for ( i = 0; i != v22; ++i )
            v23[i] = v3[i];
          goto LABEL_9;
        }
        if ( v17 != 0 )
        {
          v5 = 0;
          v6 = 0;
          do
          {
            ++v6;
            *(__m128i *)&v23[v5] = *(__m128i *)&v3[v5];
            v5 += 4;
          }
          while ( v14 > v6 );
          v7 = &v23[v13];
          v8 = &v3[v13];
          if ( v17 == v22 )
            goto LABEL_9;
          v19 = v7 + 1;
          v18 = v8 + 1;
          *v7 = *v8;
          v9 = 4 * v14 + 1;
          if ( v9 >= v22 )
            goto LABEL_9;
        }
        else
        {
          v18 = v3 + 1;
          v19 = v23 + 1;
          *v23 = *v3;
          v9 = 1;
        }
        *v19 = *v18;
        if ( v22 > v9 + 1 )
          v19[1] = v18[1];
      }
LABEL_9:
      v23 = (uint32_t *)((char *)v23 + v2);
      v3 = (uint32_t *)((char *)v3 + v2);
      ++v20;
    }
    while ( *((uint16_t *)a2 + 2) > v20 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintAtomUtil::expandOne  (binary VA: 0x177b810)
// Original: hkpSimpleContactConstraintAtomUtil::expandOne
// ----------------------------------------------------------------------------
hkpSimpleContactConstraintAtom::Self * hkpSimpleContactConstraintAtomUtil::expandOne(hkpSimpleContactConstraintAtom::Self *a1, uint8_t *a2)
{
  hkpSimpleContactConstraintAtom::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  uint16_t *Atom;
  int v8;
  int address;
  int v10;
  char *s;
  int v12;
  int v14;

  v2 = a1;
  v3 = *((int16_t *)a1 + 2);
  v4 = *((uint16_t *)a1 + 3);
  if ( (uint16_t)v4 <= (uint16_t)v3 )
  {
    v5 = 2;
    if ( (uint16_t)v3 >= 2u )
      v5 = (uint16_t)v3;
    v6 = 2 * v5;
    if ( v6 > *((uint16_t *)a1 + 6) )
      v6 = *((uint16_t *)a1 + 6);
    Atom = (uint16_t *)hkpSimpleContactConstraintAtomUtil::allocateAtom(
                                 (hkpSimpleContactConstraintAtomUtil::Self *)v6,
                                 *((uint8_t *)a1 + 8),
                                 *((uint8_t *)a1 + 9),
                                 *((uint16_t *)a1 + 6));
    hkpSimpleContactConstraintAtomUtil::copyContents((hkpSimpleContactConstraintAtomUtil::Self *)Atom, a1);
    LOBYTE(v8) = atomSizeRoundUp(*((uint16_t *)a1 + 1));
    v14 = v8;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkpSimpleContactConstraintAtom::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      v14);
    v2 = (hkpSimpleContactConstraintAtom::Self *)Atom;
    *a2 = 1;
    v4 = Atom[3];
  }
  *((uint16_t *)v2 + 2) = v3 + 1;
  v10 = *((uint8_t *)v2 + 10);
  s = (char *)v2 + 32 * v4 + v10 * v3 + 48;
  v12 = v10 >> 2;
  if ( v12 != 0 )
    memset(s, 0, 4 * v12);
  return v2;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintAtomUtil::optimizeCapacity  (binary VA: 0x177b900)
// Original: hkpSimpleContactConstraintAtomUtil::optimizeCapacity
// ----------------------------------------------------------------------------
hkpSimpleContactConstraintAtom::Self * hkpSimpleContactConstraintAtomUtil::optimizeCapacity(hkpSimpleContactConstraintAtom::Self *a1, int a2, uint8_t *a3)
{
  hkpSimpleContactConstraintAtom::Self *v3;
  int v4;
  hkpSimpleContactConstraintAtomUtil::Self *Atom;
  int v6;
  int v7;
  int address;

  v3 = a1;
  v4 = *((uint16_t *)a1 + 3);
  if ( 2 * (a2 + *((uint16_t *)a1 + 2)) <= v4 )
  {
    Atom = (hkpSimpleContactConstraintAtomUtil::Self *)hkpSimpleContactConstraintAtomUtil::allocateAtom(
                                                   (hkpSimpleContactConstraintAtomUtil::Self *)(v4 >> 1),
                                                   *((uint8_t *)a1 + 8),
                                                   *((uint8_t *)a1 + 9),
                                                   *((uint16_t *)a1 + 6));
    hkpSimpleContactConstraintAtomUtil::copyContents(Atom, a1);
    LOBYTE(v6) = atomSizeRoundUp(*((uint16_t *)a1 + 1));
    v7 = v6;
    address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
    (*(void (**)(uint32_t, hkpSimpleContactConstraintAtom::Self *, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 12))(
      *(uint32_t *)(*(uint32_t *)address + 44),
      a1,
      v7);
    v3 = (hkpSimpleContactConstraintAtom::Self *)(Atom);
    *a3 = 1;
  }
  return v3;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleCollisionResponse::solveSingleContact  (binary VA: 0x177b9a0)
// Original: hkpSimpleCollisionResponse::solveSingleContact
// ----------------------------------------------------------------------------
int hkpSimpleCollisionResponse::solveSingleContact(int a1, float a2, int a3, int a4, float *a5, int a6, int a7, int a8, int a9, int a10, int a11, int a12, int a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, int a32, int a33, int a34, int a35, float a36, float a37, float a38, float a39, float a40, float a41, float a42, float a43, float a44, float a45, float a46, float a47, float a48, float a49, float a50, float a51, int a52, int a53, int a54, int a55, unsigned int a56, unsigned int a57, unsigned int a58, unsigned int a59, float a60, float a61, float a62, int a63, int a64)
{
  uint8_t STACK[540] = {0};
  float v65; // xmm4_4
  float v66; // xmm0_4
  float v67; // xmm1_4
  float v68; // xmm5_4
  float v69; // xmm2_4
  float v70; // xmm6_4
  float v71; // xmm3_4
  float v72;
  float v73; // xmm1_4
  float v74; // xmm0_4
  unsigned int v75; // xmm2_4
  unsigned int v76; // xmm1_4
  float v77; // xmm1_4
  float v78; // xmm1_4
  float v79; // xmm3_4
  float v80; // xmm1_4
  float v81; // xmm3_4
  float v82; // xmm0_4
  float v83; // xmm2_4
  float v84; // xmm2_4
  float v85; // xmm4_4
  float v87; // xmm4_4
  float v88; // xmm3_4
  float v89; // xmm1_4
  float v90; // xmm2_4
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm3_4
  float v94; // xmm1_4
  float v95; // xmm0_4
  float v96; // xmm4_4
  float v97; // xmm3_4
  float v98; // xmm2_4
  float v99; // xmm7_4
  float v100; // xmm1_4
  __m128 v101;
  float v102; // xmm1_4
  float v103; // xmm0_4
  __m128 v104;
  __m128 v105;
  float v106; // xmm0_4
  float v107; // xmm6_4
  int v108;
  __m128 v109;
  float v110; // xmm1_4
  __m128i v111;
  __m128i v112;
  float v113; // xmm6_4
  int v114; // xmm0_4
  float v115; // xmm1_4
  unsigned int v116; // xmm0_4
  unsigned int v117; // xmm5_4
  unsigned int v118; // xmm6_4
  unsigned int v119; // xmm1_4
  int v120;
  int result;
  int v125;
  float v126;
  float v127;
  int v128;
  float v129;
  typedef uint32_t _g4_t_v122[144];
  typedef int *_g4_t_v123;
  typedef unsigned int *_g4_t_v124;
  enum : size_t {
    _g4_s0 = 672u,
    _g4_s1 = (0u + sizeof(_g4_t_v122)) > _g4_s0 ? (0u + sizeof(_g4_t_v122)) : _g4_s0,
    _g4_s2 = (576u + sizeof(_g4_t_v123)) > _g4_s1 ? (576u + sizeof(_g4_t_v123)) : _g4_s1,
    _g4_s3 = (580u + sizeof(_g4_t_v124)) > _g4_s2 ? (580u + sizeof(_g4_t_v124)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 0u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 576u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 580u);

  v122[12] = *(uint32_t *)(a4 + 192);
  v122[13] = *(uint32_t *)(a4 + 196);
  v122[14] = *(uint32_t *)(a4 + 200);
  v122[15] = *(uint32_t *)(a4 + 204);
  G4_VCALL<void>(a4, 56, v122);
  v65 = a5[23];
  v66 = a5[21];
  v67 = a5[25];
  STACK[0x160] = a4 + 16;
  v68 = a5[27];
  v69 = a5[22];
  v70 = a5[20];
  STACK[0x1B0] = *((uint32_t *)a5 + 48);
  v71 = (float)(a2 - v65) * v68;
  STACK[0x1B4] = *((uint32_t *)a5 + 49);
  STACK[0x1B8] = *((uint32_t *)a5 + 50);
  STACK[0x1BC] = *((uint32_t *)a5 + 51);
  v72 = *a5;
  v73 = (float)((float)(v67 - v66) * v71) + v66;
  v74 = (float)((float)(a5[26] - v69) * v71) + v69;
  *(float *)&v75 = *(float *)(a11 + 4) - v73;
  *(float *)&v76 = *(float *)(a11 + 8) - v74;
  *(float *)&STACK[0x170] = *(float *)a11 - (float)((float)((float)(a5[24] - v70) * v71) + v70);
  STACK[0x174] = v75;
  STACK[0x178] = v76;
  v77 = *(float *)(a11 + 12);
  v124 = (unsigned int *)(&STACK[0x180]);
  v123 = (int *)a5;
  *(float *)&STACK[0x17C] = v77 - (float)((float)((float)(v68 - v65) * v71) + v65);
  (*(void (**)(int *, unsigned int *))(LODWORD(v72) + 56))(v123, v124);
  v78 = *(float *)(a4 + 104);
  v79 = *(float *)(a4 + 96);
  STACK[0x1C0] = (unsigned int)(uintptr_t)(a5 + 4);
  a20 = *(uint32_t *)(a4 + 208);
  a21 = *(uint32_t *)(a4 + 212);
  a22 = *(uint32_t *)(a4 + 216);
  a23 = *(uint32_t *)(a4 + 220);
  a24 = *(uint32_t *)(a4 + 224);
  a25 = *(uint32_t *)(a4 + 228);
  a26 = *(uint32_t *)(a4 + 232);
  v80 = v78 - *(float *)(a4 + 88);
  v81 = v79 - *(float *)(a4 + 80);
  v82 = *(float *)(a4 + 108);
  a27 = *(uint32_t *)(a4 + 236);
  v83 = *(float *)(a4 + 100);
  a28 = *((uint32_t *)a5 + 52);
  a29 = *((uint32_t *)a5 + 53);
  a30 = *((uint32_t *)a5 + 54);
  a31 = *((uint32_t *)a5 + 55);
  a32 = *((uint32_t *)a5 + 56);
  a33 = *((uint32_t *)a5 + 57);
  a34 = *((uint32_t *)a5 + 58);
  v84 = v83 - *(float *)(a4 + 84);
  v85 = v82 - *(float *)(a4 + 92);
  a35 = *((uint32_t *)a5 + 59);
  a36 = v81 * v82;
  a38 = v80 * v82;
  v87 = v85 * v82;
  v88 = a5[24];
  a40 = *(float *)(a4 + 160) * v82;
  v89 = *(float *)(a4 + 164) * v82;
  a37 = v84 * v82;
  v90 = a5[25] - a5[21];
  a41 = v89;
  v91 = *(float *)(a4 + 168) * v82;
  v92 = v82 * *(float *)(a4 + 172);
  v93 = v88 - a5[20];
  a39 = v87;
  a42 = v91;
  v94 = a5[26] - a5[22];
  a43 = v92;
  v95 = a5[27];
  v96 = a5[27] - a5[23];
  a44 = v93 * v95;
  a45 = v90 * v95;
  a46 = v94 * v95;
  v97 = *(float *)(a11 + 16);
  v98 = *(float *)(a11 + 20);
  v99 = fabs(v97);
  a48 = a5[40] * v95;
  v100 = a5[41] * v95;
  a47 = v96 * v95;
g4_m128_raw(v101) = *(unsigned int *)(a11 + 24);
  a49 = v100;
  v102 = a5[42] * v95;
  v103 = v95 * a5[43];
  a50 = v102;
  a51 = v103;
g4_m128_lane<int32_t>(v104, 0) = fabs(v98);
  v105 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v101);
  if ( v99 >g4_m128_lane<float>(v104, 0) )
  {
    v106 = v98;
    v107 = v97;
    v128 = 0;
    v108 = 1;
  }
  else
  {
    v106 = v97;
    v107 = v98;
g4_m128_lane<float>(v104, 0) = v99;
    v128 = 1;
    v108 = 0;
  }
  v109 = _mm_cmplt_ss(v105, v104);
  if (g4_m128_lane<float>(v104, 0) <=g4_m128_lane<float>(v105, 0) )
    v108 = 2;
  v110 = 0.0;
  STACK[0x1D0] = 0;
  STACK[0x1D4] = 0;
  STACK[0x1D8] = 0;
  STACK[0x1DC] = 0;
  *(&STACK[0x1D0] + v128) = COERCE_UNSIGNED_INT(g4_m128_lane<float>(_mm_andnot_ps(v109, v101), 0))
                          | LODWORD(v106) &g4_m128_lane<int32_t>(v109, 0);
  *((float *)&STACK[0x1D0] + v108) = -v107;
g4_m128_raw(v111) = STACK[0x1D0];
  v112 = v111;
  v129 = *(float *)&STACK[0x1D4];
  v127 = *(float *)&STACK[0x1D8];
  *(float *)g4_m128_ptr<int32_t>(v112) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v111) * *(float *)g4_m128_ptr<int32_t>(v111))
                                   + (float)(*(float *)&STACK[0x1D4] * *(float *)&STACK[0x1D4]))
                           + (float)(*(float *)&STACK[0x1D8] * *(float *)&STACK[0x1D8]);
  if ( *(float *)g4_m128_ptr<int32_t>(v112) > 0.0 )
  {
    v113 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v112);
    v114 = ((_mm_cvtsi128_si32(v112) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v112) >> 1));
    v115 = (float)(1.5 * *(float *)&v114)
         - (float)((float)(v113 * *(float *)&v114) * (float)(*(float *)&v114 * *(float *)&v114));
    v110 = (float)(1.5 * (float)((float)(1.5 * v115) - (float)((float)(v113 * v115) * (float)(v115 * v115))))
         - (float)((float)(v113 * (float)((float)(1.5 * v115) - (float)((float)(v113 * v115) * (float)(v115 * v115))))
                 * (float)((float)((float)(1.5 * v115) - (float)((float)(v113 * v115) * (float)(v115 * v115)))
                         * (float)((float)(1.5 * v115) - (float)((float)(v113 * v115) * (float)(v115 * v115)))));
  }
  a52 = *(uint32_t *)(a11 + 16);
  *(float *)&v116 = v129 * v110;
  *(float *)&v117 = *(float *)g4_m128_ptr<int32_t>(v111) * v110;
  a53 = *(uint32_t *)(a11 + 20);
  *(float *)&v118 = v127 * v110;
  *(float *)&v119 = v110 * *(float *)&STACK[0x1DC];
  a54 = *(uint32_t *)(a11 + 24);
  STACK[0x1D0] = v117;
  v120 = *(uint32_t *)(a11 + 28);
  STACK[0x1D8] = v118;
  a55 = v120;
  STACK[0x1DC] = v119;
  a56 = STACK[0x1D0];
  STACK[0x1D4] = v116;
  a57 = STACK[0x1D4];
  a58 = STACK[0x1D8];
  a59 = STACK[0x1DC];
  a60 = (float)(v98 * *(float *)&v118) - (float)(g4_m128_lane<float>(v101, 0) * *(float *)&v116);
  a63 = 0;
  a61 = (float)(g4_m128_lane<float>(v101, 0) * *(float *)&v117) - (float)(*(float *)&v118 * v97);
  a62 = (float)(v97 * *(float *)&v116) - (float)(*(float *)&v117 * v98);
  v125 = a11;
  G4_VCALL<void>(a6, 64, a11, &a64, &a20);
  hkSimpleConstraintUtil_InitInfo((int)(uintptr_t)(&a64), (int)(uintptr_t)(&STACK[0x170]), (int)(uintptr_t)(&a52), (hkMatrix3f::Self *)&STACK[0x1D0]);
  v126 = hkSimpleConstraintUtil_Collide(&STACK[0x1D0], a3, &a20, &a28);
  *(float *)LODWORD(v126) = v126;
  (*(void (**)(int *, int, float, int *))(a64 + 68))(&a64, v125, COERCE_FLOAT(LODWORD(v126)), &a64);
  hkSimpleConstraintUtil_getPointVelocity(&STACK[0x1D0], &a36, &a28, &a12);
  hkSimpleConstraintUtil_getPointVelocity(&STACK[0x1D0], &a20, &a44, &a16);
  result = LODWORD(v126);
  *(uint32_t *)(LODWORD(v126) + 4) = a12;
  *(uint32_t *)(LODWORD(v126) + 8) = a16;
  if ( *(uint8_t *)(a4 + 8) != 5 )
  {
    G4_VCALL<void>(a4, 80, &a20);
    result = G4_VCALL<int>(a4, 84, &a24);
  }
  if ( *((uint8_t *)a5 + 8) != 5 )
  {
    G4_VCALL<void>(a5, 80, &a28);
    return G4_VCALL<int>(a5, 84, &a32);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleCollisionResponse::solveSingleContact2  (binary VA: 0x177c240)
// Original: hkpSimpleCollisionResponse::solveSingleContact2
// ----------------------------------------------------------------------------
int hkpSimpleCollisionResponse::solveSingleContact2(int *a1, int a2, int a3, int a4, int a5, int a6, int a7, float *a8, int a9, int a10, int a11, int a12, hkMatrix3f::Self *a13, int a14, int a15, int a16, int a17, int a18, int a19, int a20, int a21, int a22, int a23, int a24, int a25, int a26, int a27, int a28, int a29, int a30, int a31, float a32, float a33, float a34, int a35, int a36, int a37, int a38, int a39, float a40, float a41, float a42, int a43)
{
  float *v44;
  float *v45;
  int v46;
  int v47;
  int v48;
  float *v49;
  int v50;
  int v51;
  float v52; // xmm0_4
  int v53;
  float v54; // xmm0_4
  float v55; // xmm4_4
  float v56; // xmm3_4
  float v57; // xmm2_4
  float v58; // xmm1_4
  float v59; // xmm5_4
  float v60; // xmm0_4
  float v61; // xmm0_4
  float v62; // xmm0_4
  float v63; // xmm0_4
  __m128i v64;
  __m128i v65;
  float v66; // xmm7_4
  __m128 v67;
  __m128 v68;
  __m128 v69;
  int v70; // xmm0_4
  int v71;
  int v72;
  int v73;
  __m128 v74;
  int32_t v75; // xmm6_4
  float v76; // xmm7_4
  __m128i v77;
  int v78;
  int v79;
  float v80; // xmm0_4
  float v81; // xmm1_4
  float v82; // xmm0_4
  float v83; // xmm7_4
  int v84;
  float v85; // xmm2_4
  float v86; // xmm1_4
  float v87; // xmm0_4
  float v88; // xmm0_4
  float v90; // xmm2_4
  float v91; // xmm6_4
  float v92; // xmm1_4
  float v93; // xmm0_4
  float v94; // xmm0_4
  float v125;
  typedef hkMatrix3f::Self *_g4_t_v95;
  typedef int _g4_t_v96;
  typedef float *_g4_t_v97;
  typedef float _g4_t_v98;
  typedef int _g4_t_v99;
  typedef float _g4_t_v100;
  typedef float _g4_t_v101;
  typedef float _g4_t_v102;
  typedef float _g4_t_v103;
  typedef float _g4_t_v104;
  typedef float _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef float _g4_t_v108;
  typedef float _g4_t_v109;
  typedef float _g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef uint8_t _g4_t_v113[16];
  typedef uint8_t _g4_t_v114[16];
  typedef uint8_t _g4_t_v115[32];
  typedef uint8_t _g4_t_v116[16];
  typedef uint8_t _g4_t_v117[80];
  typedef int _g4_t_v118[24];
  typedef float _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef float _g4_t_v123[99];
  enum : size_t {
    _g4_s0 = 864u,
    _g4_s1 = (0u + sizeof(_g4_t_v95)) > _g4_s0 ? (0u + sizeof(_g4_t_v95)) : _g4_s0,
    _g4_s2 = (52u + sizeof(_g4_t_v96)) > _g4_s1 ? (52u + sizeof(_g4_t_v96)) : _g4_s1,
    _g4_s3 = (56u + sizeof(_g4_t_v97)) > _g4_s2 ? (56u + sizeof(_g4_t_v97)) : _g4_s2,
    _g4_s4 = (56u + sizeof(_g4_t_v98)) > _g4_s3 ? (56u + sizeof(_g4_t_v98)) : _g4_s3,
    _g4_s5 = (64u + sizeof(_g4_t_v99)) > _g4_s4 ? (64u + sizeof(_g4_t_v99)) : _g4_s4,
    _g4_s6 = (64u + sizeof(_g4_t_v100)) > _g4_s5 ? (64u + sizeof(_g4_t_v100)) : _g4_s5,
    _g4_s7 = (80u + sizeof(_g4_t_v101)) > _g4_s6 ? (80u + sizeof(_g4_t_v101)) : _g4_s6,
    _g4_s8 = (84u + sizeof(_g4_t_v102)) > _g4_s7 ? (84u + sizeof(_g4_t_v102)) : _g4_s7,
    _g4_s9 = (88u + sizeof(_g4_t_v103)) > _g4_s8 ? (88u + sizeof(_g4_t_v103)) : _g4_s8,
    _g4_s10 = (92u + sizeof(_g4_t_v104)) > _g4_s9 ? (92u + sizeof(_g4_t_v104)) : _g4_s9,
    _g4_s11 = (96u + sizeof(_g4_t_v105)) > _g4_s10 ? (96u + sizeof(_g4_t_v105)) : _g4_s10,
    _g4_s12 = (100u + sizeof(_g4_t_v106)) > _g4_s11 ? (100u + sizeof(_g4_t_v106)) : _g4_s11,
    _g4_s13 = (104u + sizeof(_g4_t_v107)) > _g4_s12 ? (104u + sizeof(_g4_t_v107)) : _g4_s12,
    _g4_s14 = (108u + sizeof(_g4_t_v108)) > _g4_s13 ? (108u + sizeof(_g4_t_v108)) : _g4_s13,
    _g4_s15 = (112u + sizeof(_g4_t_v109)) > _g4_s14 ? (112u + sizeof(_g4_t_v109)) : _g4_s14,
    _g4_s16 = (116u + sizeof(_g4_t_v110)) > _g4_s15 ? (116u + sizeof(_g4_t_v110)) : _g4_s15,
    _g4_s17 = (120u + sizeof(_g4_t_v111)) > _g4_s16 ? (120u + sizeof(_g4_t_v111)) : _g4_s16,
    _g4_s18 = (124u + sizeof(_g4_t_v112)) > _g4_s17 ? (124u + sizeof(_g4_t_v112)) : _g4_s17,
    _g4_s19 = (128u + sizeof(_g4_t_v113)) > _g4_s18 ? (128u + sizeof(_g4_t_v113)) : _g4_s18,
    _g4_s20 = (144u + sizeof(_g4_t_v114)) > _g4_s19 ? (144u + sizeof(_g4_t_v114)) : _g4_s19,
    _g4_s21 = (160u + sizeof(_g4_t_v115)) > _g4_s20 ? (160u + sizeof(_g4_t_v115)) : _g4_s20,
    _g4_s22 = (192u + sizeof(_g4_t_v116)) > _g4_s21 ? (192u + sizeof(_g4_t_v116)) : _g4_s21,
    _g4_s23 = (208u + sizeof(_g4_t_v117)) > _g4_s22 ? (208u + sizeof(_g4_t_v117)) : _g4_s22,
    _g4_s24 = (288u + sizeof(_g4_t_v118)) > _g4_s23 ? (288u + sizeof(_g4_t_v118)) : _g4_s23,
    _g4_s25 = (384u + sizeof(_g4_t_v119)) > _g4_s24 ? (384u + sizeof(_g4_t_v119)) : _g4_s24,
    _g4_s26 = (388u + sizeof(_g4_t_v120)) > _g4_s25 ? (388u + sizeof(_g4_t_v120)) : _g4_s25,
    _g4_s27 = (392u + sizeof(_g4_t_v121)) > _g4_s26 ? (392u + sizeof(_g4_t_v121)) : _g4_s26,
    _g4_s28 = (396u + sizeof(_g4_t_v122)) > _g4_s27 ? (396u + sizeof(_g4_t_v122)) : _g4_s27,
    _g4_s29 = (400u + sizeof(_g4_t_v123)) > _g4_s28 ? (400u + sizeof(_g4_t_v123)) : _g4_s28
  };
  alignas(16) uint8_t _g4_sf[_g4_s29];
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 0u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 52u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 56u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 56u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 64u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 64u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 80u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 84u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 88u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 92u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 96u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 100u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 104u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 108u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 112u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 116u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 120u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 124u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 128u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 144u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 160u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 192u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 208u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 288u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 384u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 388u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 392u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 396u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 400u);

  v44 = (float *)v114;
  v99 = a4;
  v45 = (float *)v117;
  v46 = a6;
  while ( 1 )
  {
    v97 = v44;
    v47 = (char *)v45 - (char *)(v116);
    v96 = a2;
    v48 = *(uint32_t *)(v46 + 48);
    v49 = (float *)(v46 + 64);
    *(uint32_t *)&v117[v47 + 32] = v48;
    *(float *)&v117[v47 + 36] = *(v49 - 3);
    *(float *)&v117[v47 + 40] = *(v49 - 2);
    *(float *)&v117[v47 + 44] = *(v49 - 1);
    v50 = (char *)v44 - (char *)(v114);
    v51 = *((uint32_t *)v49 - 12);
    *(v45 - 4) = *(float *)v96 - v49[12];
    *(v45 - 3) = *(float *)(v96 + 4) - v49[13];
    *(v45 - 2) = *(float *)(v96 + 8) - v49[14];
    v52 = *(float *)(v96 + 12) - v49[15];
    *(uint32_t *)&v113[v50] = v51;
    *(float *)&v113[v50 + 4] = *(v49 - 11);
    v53 = *((uint32_t *)v49 - 10);
    *(v45 - 1) = v52;
    *(uint32_t *)&v113[v50 + 8] = v53;
    v54 = *(v49 - 8);
    v55 = *(v49 - 7);
    *(float *)&v113[v50 + 12] = *(v49 - 9);
    v56 = *(v49 - 6);
    v101 = *v49;
    v102 = v49[1];
    v103 = v49[2];
    v104 = v49[3];
    v105 = v49[4];
    v106 = v49[5];
    v107 = v49[6];
    v108 = v49[7];
    v109 = v49[8];
    v110 = v49[9];
    v57 = (float)(v101 * v54) + (float)(v102 * v55);
    v111 = v49[10];
    v112 = v49[11];
    v58 = (float)(v105 * v54) + (float)(v106 * v55);
    v59 = v107 * v56;
    v60 = (float)((float)(v54 * v109) + (float)(v55 * v110)) + (float)(v111 * v56);
    *v97 = v57 + (float)(v56 * v103);
    v97[1] = v58 + v59;
    v97[2] = v60;
    v97[3] = v60;
    hkMatrix3f::transpose((hkMatrix3f::Self *)&v101);
    v61 = *(v49 - 4);
    v119 = v101 * v61;
    v120 = v102 * v61;
    v121 = v103 * v61;
    v122 = v61 * v104;
    v62 = *(v49 - 3);
    v123[0] = v105 * v62;
    v123[1] = v106 * v62;
    v123[2] = v107 * v62;
    v123[3] = v62 * v108;
    v63 = *(v49 - 2);
    v95 = (hkMatrix3f::Self *)v45;
    v45 += 24;
    v123[4] = v109 * v63;
    v123[5] = v110 * v63;
    v123[6] = v111 * v63;
    v123[7] = v63 * v112;
    hkMatrix3f::setMul(v95, (const hkMatrix3f::Self *)&v119, (const hkMatrix3f::Self *)v49);
    v44 = v97 + 8;
    *((uint32_t *)v45 - 8) = v99 + 240;
    a2 = v96;
    if ( v45 == v123 )
      break;
    v46 = a7;
    v99 = a5;
  }
g4_m128_raw(v64) = *(unsigned int *)(v96 + 16);
g4_m128_raw(v65) = *(unsigned int *)(v96 + 20);
  v66 = fabs(*(float *)(v96 + 16));
g4_m128_raw(v67) = *(unsigned int *)(v96 + 24);
g4_m128_lane<int32_t>(v68, 0) = fabs(*(float *)(v96 + 20));
  v69 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), v67);
  if ( v66 >g4_m128_lane<float>(v68, 0) )
  {
    v70 = *(uint32_t *)(v96 + 20);
    v71 = _mm_cvtsi128_si32(v64);
    v72 = 0;
    v73 = 1;
  }
  else
  {
    v70 = *(uint32_t *)(v96 + 16);
    v71 = _mm_cvtsi128_si32(v65);
g4_m128_lane<float>(v68, 0) = v66;
    v72 = 1;
    v73 = 0;
  }
  v74 = _mm_cmplt_ss(v69, v68);
  v75 = v70 &g4_m128_lane<int32_t>(v74, 0);
  v76 =g4_m128_lane<float>(_mm_andnot_ps(v74, v67), 0);
  if (g4_m128_lane<float>(v68, 0) <=g4_m128_lane<float>(v69, 0) )
    v73 = 2;
  v119 = 0.0;
  v120 = 0.0;
  v121 = 0.0;
  v122 = 0.0;
  *((uint32_t *)&v119 + v72) = LODWORD(v76) | v75;
  *((uint32_t *)&v119 + v73) = v71 ^ 0x80000000;
g4_m128_raw(v77) = LODWORD(v119);
  v100 = v121;
  *(float *)g4_m128_ptr<int32_t>(v77) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v77) * *(float *)g4_m128_ptr<int32_t>(v77)) + (float)(v120 * v120))
                          + (float)(v100 * v100);
  if ( *(float *)g4_m128_ptr<int32_t>(v77) <= 0.0 )
  {
    v82 = 0.0;
  }
  else
  {
    v78 = _mm_cvtsi128_si32(v77) >> 1;
    v79 = (_mm_cvtsi128_si32(v77) + 2139095040) >> 31;
    v98 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v77);
    v80 = (float)(1.5 * COERCE_FLOAT(v79 & (1597463174 - v78)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v77)) * COERCE_FLOAT(v79 & (1597463174 - v78)))
                * (float)(COERCE_FLOAT(v79 & (1597463174 - v78)) * COERCE_FLOAT(v79 & (1597463174 - v78))));
    v81 = (float)(1.5 * v80) - (float)((float)(v98 * v80) * (float)(v80 * v80));
    v82 = (float)(1.5 * v81) - (float)((float)(v98 * v81) * (float)(v81 * v81));
  }
  v101 = *(float *)(v96 + 16);
  v102 = *(float *)(v96 + 20);
  v103 = *(float *)(v96 + 24);
  v83 =g4_m128_lane<float>(v67, 0) * (float)(v120 * v82);
  v104 = *(float *)(v96 + 28);
  v122 = v82 * v122;
  v119 = v119 * v82;
  v120 = v120 * v82;
  v105 = v119;
  v121 = v121 * v82;
  v106 = v120;
  v107 = v100 * v82;
  v108 = v122;
  v112 = 0.0;
  v84 = *a1;
  v109 = (float)(*(float *)g4_m128_ptr<int32_t>(v65) * (float)(v100 * v82)) - v83;
  v110 = (float)(g4_m128_lane<float>(v67, 0) * v119) - (float)((float)(v100 * v82) * *(float *)g4_m128_ptr<int32_t>(v64));
  v111 = (float)(v120 * *(float *)g4_m128_ptr<int32_t>(v64)) - (float)(v119 * *(float *)g4_m128_ptr<int32_t>(v65));
  (*(void (**)(int *, int, uint8_t *, uint8_t *, int *, uint8_t *))(v84 + 100))(a1, v96, v116, v113, v118, v115);
  hkSimpleConstraintUtil_InitInfo(a14, (int)(uintptr_t)(v118), a11, a13);
  v125 = hkSimpleConstraintUtil_Collide(a13, a3, a15, v115);
  *a8 = v125;
  G4_VCALL<void>(a1, 104, a12, LODWORD(v125), a14);
  *(uint32_t *)(a6 + 16) = a28;
  *(uint32_t *)(a6 + 20) = a29;
  *(uint32_t *)(a6 + 24) = a30;
  *(uint32_t *)(a6 + 28) = a31;
  if ( *(uint8_t *)(a4 + 232) != 5 )
  {
    *(uint32_t *)(a4 + 444) = a31;
    *(float *)(a4 + 448) = a32;
    *(float *)(a4 + 452) = a33;
    *(float *)(a4 + 456) = a34;
    *(uint32_t *)(a4 + 432) = a28;
    *(uint32_t *)(a4 + 436) = a29;
    *(uint32_t *)(a4 + 440) = a30;
    *(uint32_t *)(a4 + 460) = a35;
  }
  *(uint32_t *)(a7 + 16) = a36;
  *(uint32_t *)(a7 + 20) = a37;
  *(uint32_t *)(a7 + 24) = a38;
  *(uint32_t *)(a7 + 28) = a39;
  if ( *(uint8_t *)(a5 + 232) != 5 )
  {
    *(uint32_t *)(a5 + 444) = a39;
    *(float *)(a5 + 448) = a40;
    *(float *)(a5 + 452) = a41;
    *(float *)(a5 + 456) = a42;
    *(uint32_t *)(a5 + 432) = a36;
    *(uint32_t *)(a5 + 436) = a37;
    *(uint32_t *)(a5 + 440) = a38;
    *(uint32_t *)(a5 + 460) = a43;
  }
  v85 = (float)(*(float *)(a6 + 68) * a32) + (float)(*(float *)(a6 + 84) * a33);
  v86 = (float)(*(float *)(a6 + 72) * a32) + (float)(*(float *)(a6 + 88) * a33);
  v87 = (float)(*(float *)(a6 + 76) * a32) + (float)(*(float *)(a6 + 92) * a33);
  *(float *)(a6 + 32) = (float)((float)(a32 * *(float *)(a6 + 64)) + (float)(a33 * *(float *)(a6 + 80)))
                      + (float)(*(float *)(a6 + 96) * a34);
  *(float *)(a6 + 36) = v85 + (float)(*(float *)(a6 + 100) * a34);
  v88 = v87 + (float)(a34 * *(float *)(a6 + 108));
  *(float *)(a6 + 40) = v86 + (float)(*(float *)(a6 + 104) * a34);
  *(float *)(a6 + 44) = v88;
  v90 = (float)(*(float *)(a7 + 68) * a40) + (float)(*(float *)(a7 + 84) * a41);
  v91 = *(float *)(a7 + 92) * a41;
  v92 = (float)(*(float *)(a7 + 72) * a40) + (float)(*(float *)(a7 + 88) * a41);
  v93 = *(float *)(a7 + 76);
  *(float *)(a7 + 32) = (float)((float)(a40 * *(float *)(a7 + 64)) + (float)(a41 * *(float *)(a7 + 80)))
                      + (float)(*(float *)(a7 + 96) * a42);
  *(float *)(a7 + 36) = v90 + (float)(*(float *)(a7 + 100) * a42);
  v94 = (float)((float)(v93 * a40) + v91) + (float)(a42 * *(float *)(a7 + 108));
  *(float *)(a7 + 40) = v92 + (float)(*(float *)(a7 + 104) * a42);
  *(float *)(a7 + 44) = v94;
  return a7;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintUtil::calculateSeparatingVelocity  (binary VA: 0x1781a10)
// Original: hkpSimpleContactConstraintUtil::calculateSeparatingVelocity
// ----------------------------------------------------------------------------
hkpSimpleContactConstraintUtil::Self * hkpSimpleContactConstraintUtil::calculateSeparatingVelocity(hkpSimpleContactConstraintUtil::Self *self, const hkpRigidBody::Self *a2, const hkpRigidBody::Self *a3, const hkVector4f::Self *a4, const hkVector4f::Self *a5, const hkContactPoint::Self *a6)
{
  float v6; // xmm4_4
  float v7; // xmm6_4
  float v9; // xmm3_4
  float v10; // xmm5_4
  float v11; // xmm7_4
  float v12;

  v6 = *((float *)a6 + 1) - *((float *)a4 + 1);
  v7 = *((float *)a6 + 2) - *((float *)a4 + 2);
  v9 = *((float *)a6 + 1) - *((float *)a5 + 1);
  v10 = *((float *)a6 + 2) - *((float *)a5 + 2);
  v12 = *(float *)a6 - *(float *)a5;
  v11 = *(float *)a6 - *(float *)a4;
  *(float *)self = (float)((float)((float)((float)((float)((float)(*((float *)a2 + 113) * v7)
                                                         - (float)(*((float *)a2 + 114) * v6))
                                                 + *((float *)a2 + 108))
                                         - (float)((float)((float)(*((float *)a3 + 113) * v10)
                                                         - (float)(*((float *)a3 + 114) * v9))
                                                 + *((float *)a3 + 108)))
                                 * *((float *)a6 + 4))
                         + (float)((float)((float)((float)((float)(*((float *)a2 + 114) * v11)
                                                         - (float)(v7 * *((float *)a2 + 112)))
                                                 + *((float *)a2 + 109))
                                         - (float)((float)((float)(*((float *)a3 + 114) * v12)
                                                         - (float)(v10 * *((float *)a3 + 112)))
                                                 + *((float *)a3 + 109)))
                                 * *((float *)a6 + 5)))
                 + (float)((float)((float)((float)((float)(v6 * *((float *)a2 + 112))
                                                 - (float)(v11 * *((float *)a2 + 113)))
                                         + *((float *)a2 + 110))
                                 - (float)((float)((float)(v9 * *((float *)a3 + 112))
                                                 - (float)(v12 * *((float *)a3 + 113)))
                                         + *((float *)a3 + 110)))
                         * *((float *)a6 + 6));
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleContactConstraintDataInfo::staticClass  (binary VA: 0x178c2c0)
// Original: hkpSimpleContactConstraintDataInfo::staticClass
// ----------------------------------------------------------------------------
void * hkpSimpleContactConstraintDataInfo::staticClass()
{
  return &hkpSimpleContactConstraintDataInfoClass;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleConstraintInfo::BodyInfo::getEnergy  (binary VA: 0x17ce580)
// Original: hkpSimpleConstraintInfo::BodyInfo::getEnergy
// ----------------------------------------------------------------------------
long double hkpSimpleConstraintInfo::BodyInfo::getEnergy(unsigned int *a1, float *a2)
{
  float v2; // xmm0_4
  float v3; // xmm2_4
  __m128i v4;
  float *v5;
  float v6; // xmm7_4
  float v7; // xmm1_4
  float v8; // xmm3_4
  __m128i v9;
  float v10; // xmm2_4
  __m128i v11;
  float v12; // xmm7_4
  __m128i v13;
  int v14;
  int v15;
  float v16;
  int v17;
  int v18;
  int v19;
  float v20; // xmm6_4
  int v21;
  int v22;
  int v23;
  float v24; // xmm6_4
  float v25; // xmm1_4
  float v27;
  float v28;
  float v29;
  float v30;

  v2 = a2[4];
  v3 = a2[5];
g4_m128_raw(v4) = a1[25];
  v5 = (float *)a1[29];
  v6 = (float)(*v5 * v2) + (float)(v5[1] * v3);
  v7 = a2[6];
  v8 = (float)(v5[5] * v3) + (float)(v5[4] * v2);
g4_m128_raw(v9) = a1[24];
  v10 = (float)(v3 * v5[9]) + (float)(v2 * v5[8]);
  v11 = _mm_cvtsi32_si128(a1[27]);
  v12 = (float)(v6 + (float)(v5[2] * v7)) * (float)(v6 + (float)(v5[2] * v7));
  *(float *)g4_m128_ptr<int32_t>(v9) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v9), 0.00000011920929f);
  *(float *)g4_m128_ptr<int32_t>(v4) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v4), 0.00000011920929f);
  *(float *)g4_m128_ptr<int32_t>(v11) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v11), 0.00000011920929f);
  v30 = (float)(v5[6] * v7) + v8;
g4_m128_raw(v13) = a1[26];
  v14 = _mm_cvtsi128_si32(v9);
  *(float *)g4_m128_ptr<int32_t>(v13) = fmaxf(*(float *)g4_m128_ptr<int32_t>(v13), 0.00000011920929f);
  v15 = 2130706432 - v14;
  v16 = COERCE_FLOAT(_mm_cvtsi128_si32(v11));
  v27 = (float)(v7 * v5[10]) + v10;
  v17 = (v14 ^ (v14 + 2139095040)) >> 31;
  v18 = _mm_cvtsi128_si32(v4);
  v19 = v15 & v17;
  v20 = *(float *)&v19 * *(float *)g4_m128_ptr<int32_t>(v9);
g4_m128_lane<int32_t>(v11, 0) = v19;
  v21 = 2130706432 - v18;
  v22 = v18 ^ (v18 + 2139095040);
  v23 = _mm_cvtsi128_si32(v13);
  v24 = (float)((float)(2.0 - v20) * *(float *)g4_m128_ptr<int32_t>(v11))
      * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * (float)((float)(2.0 - v20) * *(float *)g4_m128_ptr<int32_t>(v11))));
  *(float *)g4_m128_ptr<int32_t>(v11) = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * v24);
  *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v4) * COERCE_FLOAT(v21 & (v22 >> 31))))
                                 * COERCE_FLOAT(v21 & (v22 >> 31)))
                         * (float)(2.0
                                 - (float)(*(float *)g4_m128_ptr<int32_t>(v4)
                                         * (float)((float)(2.0
                                                         - (float)(*(float *)g4_m128_ptr<int32_t>(v4)
                                                                 * COERCE_FLOAT(v21 & (v22 >> 31))))
                                                 * COERCE_FLOAT(v21 & (v22 >> 31)))));
  *(float *)g4_m128_ptr<int32_t>(v4) = *(float *)g4_m128_ptr<int32_t>(v4) * *(float *)g4_m128_ptr<int32_t>(v9);
  v28 = *(float *)g4_m128_ptr<int32_t>(v9);
g4_m128_lane<int32_t>(v9, 0) = (2130706432 - v23) & ((v23 ^ (v23 + 2139095040)) >> 31);
  v29 = 2.0 - *(float *)g4_m128_ptr<int32_t>(v4);
  *(float *)g4_m128_ptr<int32_t>(v4) = (float)(2.0
                                 - (float)(v16
                                         * COERCE_FLOAT(
                                             (2130706432 - LODWORD(v16))
                                           & ((LODWORD(v16) ^ (LODWORD(v16) + 2139095040)) >> 31))))
                         * COERCE_FLOAT((2130706432 - LODWORD(v16)) & ((LODWORD(v16) ^ (LODWORD(v16) + 2139095040)) >> 31));
  v25 = (float)(2.0
              - (float)(v16 * (float)((float)(2.0 - (float)(v16 * *(float *)g4_m128_ptr<int32_t>(v4))) * *(float *)g4_m128_ptr<int32_t>(v4))))
      * (float)((float)(2.0 - (float)(v16 * *(float *)g4_m128_ptr<int32_t>(v4))) * *(float *)g4_m128_ptr<int32_t>(v4));
  return (float)((float)((float)((float)(v12 * (float)(v24 * *(float *)g4_m128_ptr<int32_t>(v11)))
                               + (float)((float)(*a2 * *a2) * v25))
                       + (float)((float)((float)(a2[1] * a2[1]) * v25) + (float)((float)(v30 * v30) * (float)(v28 * v29))))
               + (float)((float)((float)(a2[2] * a2[2]) * v25)
                       + (float)((float)((float)((float)(2.0
                                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v13)
                                                               * (float)((float)(2.0
                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v13)
                                                                                       * *(float *)g4_m128_ptr<int32_t>(v9)))
                                                                       * *(float *)g4_m128_ptr<int32_t>(v9))))
                                               * (float)((float)(2.0
                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v9)))
                                                       * *(float *)g4_m128_ptr<int32_t>(v9)))
                                       * (float)(2.0
                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v13)
                                                       * (float)((float)(2.0
                                                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v13)
                                                                               * (float)((float)(2.0
                                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v13) * *(float *)g4_m128_ptr<int32_t>(v9)))
                                                                                       * *(float *)g4_m128_ptr<int32_t>(v9))))
                                                               * (float)((float)(2.0
                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v13)
                                                                                       * *(float *)g4_m128_ptr<int32_t>(v9)))
                                                                       * *(float *)g4_m128_ptr<int32_t>(v9))))))
                               * (float)(v27 * v27))));
}


