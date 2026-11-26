#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpSimpleM.h"

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::setWeldingInfo  (binary VA: 0x1aec830)
// Original: hkpSimpleMeshShape::setWeldingInfo
// ----------------------------------------------------------------------------
unsigned int hkpSimpleMeshShape::setWeldingInfo(hkpSimpleMeshShape::Self *self, unsigned int a2, int16_t a3)
{
  unsigned int result;

  result = *((uint32_t *)self + 9) + 16 * a2;
  *(uint16_t *)(result + 12) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::initWeldingInfo  (binary VA: 0x1aec850)
// Original: hkpSimpleMeshShape::initWeldingInfo
// ----------------------------------------------------------------------------
int hkpSimpleMeshShape::initWeldingInfo(int a1, char a2)
{
  int v2;
  int result;
  int v4;

  v2 = *(uint32_t *)(a1 + 40);
  *(uint8_t *)(a1 + 64) = a2;
  result = 0;
  if ( v2 > 0 )
  {
    do
    {
      v4 = result++;
      *(uint16_t *)(*(uint32_t *)(a1 + 36) + 16 * v4 + 12) = 0;
    }
    while ( *(uint32_t *)(a1 + 40) > result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::getAabb  (binary VA: 0x1aec890)
// Original: hkpSimpleMeshShape::getAabb
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpSimpleMeshShape::getAabb(hkpSimpleMeshShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  const hkTransformf::Self *result;
  int v5;
  unsigned int v6;
  float v7; // xmm7_4
  float *v8;
  float v9; // xmm5_4
  float v10; // xmm4_4
  float v11; // xmm3_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  __m128i v17;
  float v18; // xmm1_4
  float v19; // xmm0_4
  int v20;
  __m128i v21;
  float v22; // xmm6_4
  float v23; // xmm3_4
  float v24; // xmm2_4
  float v25; // xmm1_4
  float v26; // xmm4_4
  float v27; // xmm4_4
  float v28; // xmm0_4
  float v29; // xmm7_4
  float v30; // xmm1_4
  float v31;
  float v32;
  float v33;
  float v34;
  float v35;
  float i;
  float v37;

  result = a2;
  *(uint32_t *)a4 = 2139095022;
  *((uint32_t *)a4 + 1) = 2139095022;
  *((uint32_t *)a4 + 2) = 2139095022;
  *((uint32_t *)a4 + 3) = 2139095022;
  *((uint32_t *)a4 + 4) = -8388626;
  *((uint32_t *)a4 + 5) = -8388626;
  *((uint32_t *)a4 + 6) = -8388626;
  *((uint32_t *)a4 + 7) = -8388626;
  if ( *((int *)self + 7) <= 0 )
  {
    v27 = *(float *)a4;
    v29 = *((float *)a4 + 1);
g4_m128_lane<int32_t>(v21, 0) = *((uint32_t *)a4 + 2);
    v22 = *((float *)a4 + 3);
    v23 = *((float *)a4 + 4);
    v24 = *((float *)a4 + 5);
    v28 = *((float *)a4 + 6);
    v32 = *((float *)a4 + 7);
  }
  else
  {
    v5 = 0;
    v6 = _mm_cvtsi128_si32(g4_to_m128i(*((unsigned int *)a4 + 2)));
    v31 = *((float *)a4 + 3);
    v33 = *((float *)a4 + 4);
    v34 = *((float *)a4 + 5);
    v37 = *((float *)a4 + 1);
    v7 = *(float *)a4;
    v35 = *((float *)a4 + 6);
    for ( i = *((float *)a4 + 7); ; i = v26 )
    {
      v8 = (float *)(*((uint32_t *)self + 6) + 16 * v5++);
      v9 = v8[1];
      v10 = v8[2];
      v11 = (float)((float)((float)(*(float *)a2 * *v8) + (float)(*((float *)a2 + 4) * v9))
                  + (float)(*((float *)a2 + 8) * v10))
          + *((float *)a2 + 12);
      v7 = fminf(v7, v11);
      v12 = (float)(*((float *)a2 + 2) * *v8) + (float)(*((float *)a2 + 6) * v9);
      v13 = (float)(*v8 * *((float *)a2 + 3)) + (float)(v9 * *((float *)a2 + 7));
      v14 = (float)((float)((float)(*((float *)a2 + 1) * *v8) + (float)(*((float *)a2 + 5) * v9))
                  + (float)(*((float *)a2 + 9) * v10))
          + *((float *)a2 + 13);
      v21 = _mm_cvtsi32_si128(v6);
      v15 = v12 + (float)(*((float *)a2 + 10) * v10);
      v16 = v13 + (float)(v10 * *((float *)a2 + 11));
g4_m128_raw(v17) = LODWORD(v37);
      *(float *)g4_m128_ptr<int32_t>(v17) = fminf(v37, v14);
      v18 = v15 + *((float *)a2 + 14);
      v19 = v16 + *((float *)a2 + 15);
      *((uint32_t *)a4 + 1) =g4_m128_lane<int32_t>(v17, 0);
      *(float *)&v20 = COERCE_FLOAT(_mm_cvtsi128_si32(v17));
      *(float *)g4_m128_ptr<int32_t>(v17) = fmaxf(v33, v11);
      *(float *)a4 = v7;
      *(float *)g4_m128_ptr<int32_t>(v21) = fminf(*(float *)g4_m128_ptr<int32_t>(v21), v18);
      v22 = fminf(v31, v19);
      *((uint32_t *)a4 + 4) =g4_m128_lane<int32_t>(v17, 0);
      v23 = *(float *)g4_m128_ptr<int32_t>(v17);
      *(float *)g4_m128_ptr<int32_t>(v17) = fmaxf(v34, v14);
      *((uint32_t *)a4 + 2) =g4_m128_lane<int32_t>(v21, 0);
      *((float *)a4 + 3) = v22;
      *((uint32_t *)a4 + 5) =g4_m128_lane<int32_t>(v17, 0);
      v24 = *(float *)g4_m128_ptr<int32_t>(v17);
      *(float *)g4_m128_ptr<int32_t>(v17) = fmaxf(v35, v18);
      *((uint32_t *)a4 + 6) =g4_m128_lane<int32_t>(v17, 0);
      v25 = *(float *)g4_m128_ptr<int32_t>(v17);
      v26 = fmaxf(i, v19);
      *((float *)a4 + 7) = v26;
      if ( *((uint32_t *)self + 7) <= v5 )
        break;
      v37 = *(float *)&v20;
      v6 = _mm_cvtsi128_si32(v21);
      v31 = v22;
      v33 = v23;
      v34 = v24;
      v35 = v25;
    }
    v32 = v26;
    v27 = v7;
    v28 = v25;
    v29 = *(float *)&v20;
  }
  v30 = a3 + *((float *)self + 15);
  *((float *)a4 + 5) = v30 + v24;
  *(float *)a4 = v27 - v30;
  *((float *)a4 + 1) = v29 - v30;
  *((float *)a4 + 2) = *(float *)g4_m128_ptr<int32_t>(v21) - v30;
  *((float *)a4 + 3) = v22 - v30;
  *((float *)a4 + 4) = v23 + v30;
  *((float *)a4 + 6) = v28 + v30;
  *((float *)a4 + 7) = v32 + v30;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::getChildShape  (binary VA: 0x1aecb60)
// Original: hkpSimpleMeshShape::getChildShape
// ----------------------------------------------------------------------------
int hkpSimpleMeshShape::getChildShape(int a1, int a2, int a3)
{
  int v5; // xmm0_4
  int16_t v6; // di
  char v7;
  uint32_t *v8;
  uint32_t *v9;
  uint32_t *v10;

  v5 = *(uint32_t *)(a1 + 60);
  v6 = *(uint16_t *)(*(uint32_t *)(a1 + 36) + 16 * a2 + 12);
  v7 = *(uint8_t *)(a1 + 64);
  *(uint32_t *)a3 = ((uint32_t)(uintptr_t)&off_209A8C8);
  *(uint32_t *)(a3 + 16) = v5;
  *(uint32_t *)(a3 + 4) = -65535;
  *(uint8_t *)(a3 + 8) = 2;
  *(uint8_t *)(a3 + 9) = 4;
  *(uint8_t *)(a3 + 10) = 0;
  *(uint8_t *)(a3 + 11) = 0;
  *(uint32_t *)(a3 + 12) = 0;
  *(uint16_t *)(a3 + 20) = v6;
  *(uint8_t *)(a3 + 22) = v7;
  *(uint32_t *)(a3 + 80) = 0;
  *(uint8_t *)(a3 + 23) = 0;
  *(uint32_t *)(a3 + 84) = 0;
  *(uint32_t *)(a3 + 88) = 0;
  *(uint32_t *)(a3 + 92) = 0;
  v8 = (uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * *(uint32_t *)(*(uint32_t *)(a1 + 36) + 16 * a2));
  *(uint32_t *)(a3 + 32) = *v8;
  *(uint32_t *)(a3 + 36) = v8[1];
  *(uint32_t *)(a3 + 40) = v8[2];
  *(uint32_t *)(a3 + 44) = v8[3];
  v9 = (uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * *(uint32_t *)(*(uint32_t *)(a1 + 36) + 16 * a2 + 4));
  *(uint32_t *)(a3 + 48) = *v9;
  *(uint32_t *)(a3 + 52) = v9[1];
  *(uint32_t *)(a3 + 56) = v9[2];
  *(uint32_t *)(a3 + 60) = v9[3];
  v10 = (uint32_t *)(*(uint32_t *)(a1 + 24) + 16 * *(uint32_t *)(*(uint32_t *)(a1 + 36) + 16 * a2 + 8));
  *(uint32_t *)(a3 + 64) = *v10;
  *(uint32_t *)(a3 + 68) = v10[1];
  *(uint32_t *)(a3 + 72) = v10[2];
  *(uint32_t *)(a3 + 76) = v10[3];
  return a3;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::Destroy  (binary VA: 0x1aecc60)
// Original: hkpSimpleMeshShape::~hkpSimpleMeshShape
// ----------------------------------------------------------------------------
void hkpSimpleMeshShape::Destroy(hkpSimpleMeshShape::Self *self)
{
  int v1;
  int v2;
  int v3;

  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1ED4);
  v1 = *((uint32_t *)self + 14);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1E68);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 10) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 9),
      16 * v2);
  v3 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 6),
      16 * v3);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::getFirstKey  (binary VA: 0x1aecd60)
// Original: hkpSimpleMeshShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpSimpleMeshShape::getFirstKey(hkpSimpleMeshShape::Self *self)
{
  int v1;
  uint32_t *v2;
  int v3;
  float *v4;
  typedef float *_g4_t_v6;
  typedef float _g4_t_v7;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v7)) > _g4_s1 ? (16u + sizeof(_g4_t_v7)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);

  if ( *((int *)self + 10) <= 0 )
    return -1;
  v1 = 0;
  while ( 1 )
  {
    v2 = (uint32_t *)(*((uint32_t *)self + 9) + 16 * v1);
    v6 = (float *)(*((uint32_t *)self + 6) + 16 * *v2);
    v3 = 16 * v2[1];
    v4 = (float *)(*((uint32_t *)self + 6) + 16 * v2[2]);
    LODWORD(v7) = hkDefaultTriangleDegeneracyTolerance;
    if ( !hkcdTriangleUtil::isDegenerate(v6, (float *)(*((uint32_t *)self + 6) + v3), v4, &v7) )
      break;
    if ( *((uint32_t *)self + 10) <= ++v1 )
      return -1;
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::getNextKey  (binary VA: 0x1aece20)
// Original: hkpSimpleMeshShape::getNextKey
// ----------------------------------------------------------------------------
int hkpSimpleMeshShape::getNextKey(hkpSimpleMeshShape::Self *self, unsigned int a2)
{
  unsigned int i;
  uint32_t *v3;
  int v4;
  float *v5;
  typedef float *_g4_t_v7;
  typedef int _g4_t_v8;
  typedef float _g4_t_v9;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (8u + sizeof(_g4_t_v7)) > _g4_s0 ? (8u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v8)) > _g4_s1 ? (12u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v9)) > _g4_s2 ? (16u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 8u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 12u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 16u);

  v8 = a2 + 1;
  if ( (signed int)(a2 + 1) >= *((uint32_t *)self + 10) )
    return -1;
  for ( i = 16 * (a2 + 1); ; i += 16 )
  {
    v3 = (uint32_t *)(*((uint32_t *)self + 9) + i);
    v7 = (float *)(*((uint32_t *)self + 6) + 16 * *v3);
    v4 = 16 * v3[1];
    v5 = (float *)(*((uint32_t *)self + 6) + 16 * v3[2]);
    LODWORD(v9) = hkDefaultTriangleDegeneracyTolerance;
    if ( !hkcdTriangleUtil::isDegenerate(v7, (float *)(*((uint32_t *)self + 6) + v4), v5, &v9) )
      break;
    if ( *((uint32_t *)self + 10) <= ++v8 )
      return -1;
  }
  return v8;
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::Destroy_ea1aecf00  (binary VA: 0x1aecf00)
// Original: hkpSimpleMeshShape::~hkpSimpleMeshShape
// ----------------------------------------------------------------------------
void hkpSimpleMeshShape::Destroy_ea1aecf00(hkpSimpleMeshShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;

  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1ED4);
  v1 = *((uint32_t *)self + 14);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1E68);
  *((uint32_t *)self + 13) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 12),
      v1 & 0x3FFFFFFF);
  v2 = *((uint32_t *)self + 11);
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((uint32_t *)self + 10) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 9),
      16 * v2);
  v3 = *((uint32_t *)self + 8);
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 7) = 0;
  if ( v3 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 6),
      16 * v3);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v4 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v5 = 68;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v5 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v4, 12, self, v5);
}

// ----------------------------------------------------------------------------
// Function: hkpSimpleMeshShape::Construct  (binary VA: 0x1aed040)
// Original: hkpSimpleMeshShape::hkpSimpleMeshShape
// ----------------------------------------------------------------------------
void hkpSimpleMeshShape::Construct(hkpSimpleMeshShape::Self *self, float a2)
{
  hkpShapeCollection::Construct((int)(uintptr_t)(self), 27, 4);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1ED4);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1E68);
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
  *((uint32_t *)self + 8) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 11) = 0x80000000;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0x80000000;
  *((float *)self + 15) = a2;
  *((uint8_t *)self + 64) = 6;
}



// ============================================================================
// Address:   0x1aed0e0 (size: 77 bytes)
// Symbol:    _ZN18hkpSimpleMeshShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpSimpleMeshShape::hkpSimpleMeshShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN18hkpSimpleMeshShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpSimpleMeshShape::Construct(int a1, int a2))(hkpSimpleMeshShape::Self * self)
{
  void (**result)(hkpSimpleMeshShape::Self *);

  hkpShapeCollection::Construct(a1, a2);
  result = (void (**)(hkpSimpleMeshShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B1ED4));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B1E68);
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_20B1ED4);
  if ( a2 != 0 )
  {
    *(uint8_t *)(a1 + 8) = 27;
    *(uint8_t *)(a1 + 21) = 4;
  }
  return result;
}

