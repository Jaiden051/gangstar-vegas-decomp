#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpConvexT.h"

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShapeBase::staticClass  (binary VA: 0x169a050)
// Original: hkpConvexTransformShapeBase::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexTransformShapeBase::staticClass()
{
  return &hkpConvexTransformShapeBaseClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShapeBase::Destroy  (binary VA: 0x169ff50)
// Original: hkpConvexTransformShapeBase::~hkpConvexTransformShapeBase
// ----------------------------------------------------------------------------
void hkpConvexTransformShapeBase::Destroy(hkpConvexTransformShapeBase::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D88);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShapeBase::Destroy_ea169ffe0  (binary VA: 0x169ffe0)
// Original: hkpConvexTransformShapeBase::~hkpConvexTransformShapeBase
// ----------------------------------------------------------------------------
void hkpConvexTransformShapeBase::Destroy_ea169ffe0(hkpConvexTransformShapeBase::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D88);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShapeBase::Construct  (binary VA: 0x16a00f0)
// Original: hkpConvexTransformShapeBase::hkpConvexTransformShapeBase
// ----------------------------------------------------------------------------
int32_t hkpConvexTransformShapeBase::Construct(int32_t a1, char a2, int a3, int a4, int a5)
{
  int32_t result;
  int v6;
  int32_t v7; // ett

  result = a1;
  *(uint32_t *)(a1 + 16) = a3;
  *(uint8_t *)(a1 + 8) = a2;
  *(uint32_t *)(a1 + 4) = -65535;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_2099D88);
  *(uint8_t *)(a1 + 9) = 4;
  *(uint8_t *)(a1 + 10) = 0;
  *(uint8_t *)(a1 + 11) = 0;
  *(uint32_t *)(a1 + 12) = 0;
  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_20994E8);
  *(uint32_t *)(a1 + 24) = a4;
  if ( a5 == 1 && *(uint16_t *)(a4 + 6) != 0 )
  {
    do
    {
      HIWORD(v6) = HIWORD(*(uint32_t *)(a4 + 4));
      LOWORD(v6) = 0;
      v7 = *(uint32_t *)(a4 + 4);
      result = __sync_val_compare_and_swap((volatile int32_t *)(a4 + 4), v7, v6 | (uint16_t)(v7 + 1));
    }
    while ( v7 != result );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::staticClass  (binary VA: 0x16a38a0)
// Original: hkpConvexTranslateShape::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexTranslateShape::staticClass()
{
  return &hkpConvexTranslateShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::staticClass  (binary VA: 0x16b4ab0)
// Original: hkpConvexTransformShape::staticClass
// ----------------------------------------------------------------------------
void * hkpConvexTransformShape::staticClass()
{
  return &hkpConvexTransformShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getNumCollisionSpheres  (binary VA: 0x16c7740)
// Original: hkpConvexTranslateShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::getNumCollisionSpheres(hkpConvexTranslateShape::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 6) + 52))(*((uint32_t *)self + 6));
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getAabb  (binary VA: 0x16c7760)
// Original: hkpConvexTranslateShape::getAabb
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::getAabb(hkpConvexTranslateShape::Self *self, const hkTransformf::Self *a2, int64_t a3)
{
  int result;
  float v5; // xmm0_4
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm1_4
  float v11; // xmm0_4
  float v12; // xmm4_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  float v15; // xmm2_4
  float v16; // xmm4_4
  float v17; // xmm1_4
  float v18; // xmm4_4
  float v19; // xmm0_4

  result = (*(int (**)(uint32_t, const hkTransformf::Self *, uint32_t, uint32_t))(**((uint32_t **)self + 6) + 24))(
             *((uint32_t *)self + 6),
             a2,
             a3,
             HIDWORD(a3));
  v5 = *((float *)self + 8);
  v6 = *((float *)self + 9);
  v7 = *((float *)self + 10);
  v8 = (float)((float)(*(float *)a2 * v5) + (float)(*((float *)a2 + 4) * v6)) + (float)(*((float *)a2 + 8) * v7);
  v9 = (float)((float)(*((float *)a2 + 1) * v5) + (float)(*((float *)a2 + 5) * v6)) + (float)(*((float *)a2 + 9) * v7);
  v10 = (float)((float)(*((float *)a2 + 2) * v5) + (float)(*((float *)a2 + 6) * v6)) + (float)(*((float *)a2 + 10) * v7);
  v11 = (float)((float)(v5 * *((float *)a2 + 3)) + (float)(v6 * *((float *)a2 + 7))) + (float)(v7 * *((float *)a2 + 11));
  v12 = *(float *)HIDWORD(a3) + v8;
  v13 = v8 + *(float *)(HIDWORD(a3) + 16);
  *(float *)HIDWORD(a3) = v12;
  v14 = *(float *)(HIDWORD(a3) + 4) + v9;
  *(float *)(HIDWORD(a3) + 16) = v13;
  v15 = v9 + *(float *)(HIDWORD(a3) + 20);
  *(float *)(HIDWORD(a3) + 4) = v14;
  v16 = *(float *)(HIDWORD(a3) + 8) + v10;
  *(float *)(HIDWORD(a3) + 20) = v15;
  v17 = v10 + *(float *)(HIDWORD(a3) + 24);
  *(float *)(HIDWORD(a3) + 8) = v16;
  v18 = *(float *)(HIDWORD(a3) + 12) + v11;
  *(float *)(HIDWORD(a3) + 24) = v17;
  v19 = v11 + *(float *)(HIDWORD(a3) + 28);
  *(float *)(HIDWORD(a3) + 12) = v18;
  *(float *)(HIDWORD(a3) + 28) = v19;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getMaximumProjection  (binary VA: 0x16c7890)
// Original: hkpConvexTranslateShape::getMaximumProjection
// ----------------------------------------------------------------------------
long double hkpConvexTranslateShape::getMaximumProjection(hkpConvexTranslateShape::Self *self, const hkVector4f::Self *a2)
{
  float v3;

  v3 = ((long double (*)(uint32_t, const hkVector4f::Self *))*(uint32_t *)(**((uint32_t **)self + 6) + 68))(
         *((uint32_t *)self + 6),
         a2);
  return (float)((float)((float)((float)(*(float *)a2 * *((float *)self + 8))
                               + (float)(*((float *)a2 + 1) * *((float *)self + 9)))
                       + (float)(*((float *)a2 + 2) * *((float *)self + 10)))
               + v3);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::calcSizeForSpu  (binary VA: 0x16c7900)
// Original: hkpConvexTranslateShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::calcSizeForSpu(int a1, int a2, int a3)
{
  int v3;

  v3 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 24) + 72))(*(uint32_t *)(a1 + 24), a2, a3 - 48);
  if ( v3 < 0 || a3 - 48 < v3 )
    return -1;
  if ( *(uint32_t *)(a1 + 24) == a1 + 48 )
  {
    *(uint32_t *)(a1 + 28) = 0;
    return v3 + 48;
  }
  else
  {
    *(uint32_t *)(a1 + 28) = v3;
    return 48;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getSupportingVertex  (binary VA: 0x16c7970)
// Original: hkpConvexTranslateShape::getSupportingVertex
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::getSupportingVertex(int a1, int a2, float *a3)
{
  int result;

  result = (*(int (**)(uint32_t, int, float *))(**(uint32_t **)(a1 + 24) + 40))(*(uint32_t *)(a1 + 24), a2, a3);
  *a3 = *a3 + *(float *)(a1 + 32);
  a3[1] = a3[1] + *(float *)(a1 + 36);
  a3[2] = a3[2] + *(float *)(a1 + 40);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::convertVertexIdsToVertices  (binary VA: 0x16c79d0)
// Original: hkpConvexTranslateShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::convertVertexIdsToVertices(int a1, int a2, int a3, int a4)
{
  int result;
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm2_4

  (*(void (**)(uint32_t, int, int, int))(**(uint32_t **)(a1 + 24) + 44))(*(uint32_t *)(a1 + 24), a2, a3, a4);
  result = a4;
  if ( a3 > 0 )
  {
    do
    {
      v5 = *(float *)(result + 4);
      result += 16;
      v6 = *(float *)(result - 8) + *(float *)(a1 + 40);
      v7 = *(float *)(result - 16) + *(float *)(a1 + 32);
      *(float *)(result - 12) = v5 + *(float *)(a1 + 36);
      *(float *)(result - 8) = v6;
      *(float *)(result - 16) = v7;
    }
    while ( result != a4 + 16 * a3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getCentre  (binary VA: 0x16c7a50)
// Original: hkpConvexTranslateShape::getCentre
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::getCentre(hkpConvexTranslateShape::Self *self, hkVector4f::Self *a2)
{
  int result;

  result = (*(int (**)(uint32_t, hkVector4f::Self *))(**((uint32_t **)self + 6) + 48))(*((uint32_t *)self + 6), a2);
  *(float *)a2 = *(float *)a2 + *((float *)self + 8);
  *((float *)a2 + 1) = *((float *)a2 + 1) + *((float *)self + 9);
  *((float *)a2 + 2) = *((float *)a2 + 2) + *((float *)self + 10);
  *((float *)a2 + 3) = *((float *)a2 + 3) + *((float *)self + 11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getFirstVertex  (binary VA: 0x16c7ab0)
// Original: hkpConvexTranslateShape::getFirstVertex
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::getFirstVertex(hkpConvexTranslateShape::Self *self, hkVector4f::Self *a2)
{
  int result;

  result = (*(int (**)(uint32_t, hkVector4f::Self *))(**((uint32_t **)self + 6) + 76))(*((uint32_t *)self + 6), a2);
  *(float *)a2 = *(float *)a2 + *((float *)self + 8);
  *((float *)a2 + 1) = *((float *)a2 + 1) + *((float *)self + 9);
  *((float *)a2 + 2) = *((float *)a2 + 2) + *((float *)self + 10);
  *((float *)a2 + 3) = *((float *)a2 + 3) + *((float *)self + 11);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getCollisionSpheres  (binary VA: 0x16c7b10)
// Original: hkpConvexTranslateShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpConvexTranslateShape::getCollisionSpheres(hkpConvexTranslateShape::Self *self, hkSphere::Self *a2)
{
  float *v2;
  int v3;
  int v4;
  __m128 *v5;
  unsigned int v6;
  hkSphere::Self *v7;
  __m128 v8;
  __m128 v9;
  __m128 v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128 v19;
  __m128 v20;
  float *v21;
  float *v22;
  hkSphere::Self *v24;
  int v25;
  float v26; // xmm0_4
  int v27;
  unsigned int v28;

  v2 = (float *)(*(int (**)(uint32_t, hkSphere::Self *))(**((uint32_t **)self + 6) + 56))(*((uint32_t *)self + 6), a2);
  v3 = (*(int (**)(uint32_t))(**((uint32_t **)self + 6) + 52))(*((uint32_t *)self + 6));
  v4 = v3;
  if ( v3 <= 0 )
    return a2;
  v28 = v3;
  if ( (a2 >= (hkSphere::Self *)((hkpConvexTranslateShape::Self *)((char *)self + 36)) || (char *)a2 + 16 * v3 <= (char *)self + 32)
    && (a2 >= (hkSphere::Self *)((hkpConvexTranslateShape::Self *)((char *)self + 40)) || (char *)a2 + 16 * v3 <= (char *)self + 36)
    && (unsigned int)v3 > 3
    && (v2 >= (float *)a2 + 16 || a2 >= (hkSphere::Self *)(v2 + 16))
    && (a2 >= (hkSphere::Self *)((hkpConvexTranslateShape::Self *)((char *)self + 44)) || (char *)a2 + 16 * v3 <= (char *)self + 40)
    && (a2 >= (hkSphere::Self *)((hkpConvexTranslateShape::Self *)((char *)self + 48)) || (char *)a2 + 16 * v3 <= (char *)self + 44) )
  {
    v5 = (__m128 *)v2;
    v6 = 0;
    v27 = 4 * ((unsigned int)v3 >> 2);
    v7 = a2;
    do
    {
      ++v6;
      v8 = _mm_shuffle_ps(*v5, v5[1], 136);
      v9 = _mm_shuffle_ps(v5[2], v5[3], 136);
      v10 = _mm_shuffle_ps(*v5, v5[1], 221);
      v11 = _mm_shuffle_ps(v5[2], v5[3], 221);
      v12 = _mm_add_ps(
              _mm_shuffle_ps(v8, v9, 136),
              _mm_shuffle_ps(g4_m128_u32(*((unsigned int *)self + 8)), g4_m128_u32(*((unsigned int *)self + 8)), 0));
      v13 = _mm_shuffle_ps(v10, v11, 136);
      v7 = (hkSphere::Self *)((char *)v7 + 64);
      v5 += 4;
      v14 = _mm_add_ps(
              _mm_shuffle_ps(v8, v9, 221),
              _mm_shuffle_ps(g4_m128_u32(*((unsigned int *)self + 10)), g4_m128_u32(*((unsigned int *)self + 10)), 0));
      v15 = _mm_add_ps(
              _mm_shuffle_ps(v10, v11, 221),
              _mm_shuffle_ps(g4_m128_u32(*((unsigned int *)self + 11)), g4_m128_u32(*((unsigned int *)self + 11)), 0));
      v16 = _mm_unpacklo_ps(v12, v14);
      v17 = _mm_unpackhi_ps(v12, v14);
      v18 = _mm_add_ps(v13, _mm_shuffle_ps(g4_m128_u32(*((unsigned int *)self + 9)), g4_m128_u32(*((unsigned int *)self + 9)), 0));
      v19 = _mm_unpackhi_ps(v18, v15);
      v20 = _mm_unpacklo_ps(v18, v15);
      *((__m128 *)v7 - 4) = _mm_unpacklo_ps(v16, v20);
      *((__m128 *)v7 - 3) = _mm_unpackhi_ps(v16, v20);
      *((__m128 *)v7 - 2) = _mm_unpacklo_ps(v17, v19);
      *((__m128 *)v7 - 1) = _mm_unpackhi_ps(v17, v19);
    }
    while ( v28 >> 2 > v6 );
    v21 = &v2[16 * (v28 >> 2)];
    v22 = (float *)((char *)a2 + 64 * (v28 >> 2));
    if ( v28 != v27 )
    {
      *v22 = *v21 + *((float *)self + 8);
      v22[1] = v21[1] + *((float *)self + 9);
      v22[2] = v21[2] + *((float *)self + 10);
      v22[3] = v21[3] + *((float *)self + 11);
      if ( (int)v28 > v27 + 1 )
      {
        v22[4] = v21[4] + *((float *)self + 8);
        v22[5] = v21[5] + *((float *)self + 9);
        v22[6] = v21[6] + *((float *)self + 10);
        v22[7] = v21[7] + *((float *)self + 11);
        if ( (int)v28 > v27 + 2 )
        {
          v22[8] = v21[8] + *((float *)self + 8);
          v22[9] = v21[9] + *((float *)self + 9);
          v22[10] = v21[10] + *((float *)self + 10);
          v22[11] = v21[11] + *((float *)self + 11);
        }
      }
    }
    return a2;
  }
  v24 = a2;
  v25 = 0;
  do
  {
    ++v25;
    v26 = *v2 + *((float *)self + 8);
    v2 += 4;
    v24 = (hkSphere::Self *)((char *)v24 + 16);
    *((float *)v24 - 4) = v26;
    *((float *)v24 - 3) = *(v2 - 3) + *((float *)self + 9);
    *((float *)v24 - 2) = *(v2 - 2) + *((float *)self + 10);
    *((float *)v24 - 1) = *(v2 - 1) + *((float *)self + 11);
  }
  while ( v25 != v4 );
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::getContainer  (binary VA: 0x16c7e20)
// Original: hkpConvexTranslateShape::getContainer
// ----------------------------------------------------------------------------
char * hkpConvexTranslateShape::getContainer(hkpConvexTranslateShape::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::castRayWithCollector  (binary VA: 0x16c7e30)
// Original: hkpConvexTranslateShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::castRayWithCollector(int a1, float *a2, int a3, int a4)
{
  float v4; // xmm4_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm2_4
  float v8; // xmm1_4
  float v9;
  float v10; // xmm0_4
  float v11; // xmm0_4
  typedef uint32_t _g4_t_v13[4];
  typedef float _g4_t_v14[12];
  typedef uint32_t _g4_t_v15[16];
  typedef uint8_t _g4_t_v16[76];
  enum : size_t {
    _g4_s0 = 272u,
    _g4_s1 = (0u + sizeof(_g4_t_v13)) > _g4_s0 ? (0u + sizeof(_g4_t_v13)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v14)) > _g4_s1 ? (16u + sizeof(_g4_t_v14)) : _g4_s1,
    _g4_s3 = (64u + sizeof(_g4_t_v15)) > _g4_s2 ? (64u + sizeof(_g4_t_v15)) : _g4_s2,
    _g4_s4 = (128u + sizeof(_g4_t_v16)) > _g4_s3 ? (128u + sizeof(_g4_t_v16)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 0u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 16u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 64u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 128u);

  v4 = *(float *)(a1 + 32);
  v5 = *a2 - v4;
  v6 = *(float *)(a1 + 36);
  v7 = *(float *)(a1 + 40);
  v8 = *(float *)(a1 + 44);
  v14[8] = a2[8];
  v14[9] = a2[9];
  v9 = a2[10];
  v14[0] = v5;
  v14[10] = v9;
  v10 = a2[1] - v6;
  v14[11] = a2[11];
  v14[1] = v10;
  v14[2] = a2[2] - v7;
  v14[3] = a2[3] - v8;
  v14[4] = a2[4] - v4;
  v14[5] = a2[5] - v6;
  v14[6] = a2[6] - v7;
  v11 = a2[7] - v8;
  v15[0] = 1065353216;
  v14[7] = v11;
  memset(&v15[1], 0, 16);
  v15[5] = 1065353216;
  memset(&v15[6], 0, 16);
  v15[10] = 1065353216;
  v15[11] = 0;
  v15[12] = *(uint32_t *)(a1 + 32);
  v15[13] = *(uint32_t *)(a1 + 36);
  v15[14] = *(uint32_t *)(a1 + 40);
  v15[15] = *(uint32_t *)(a1 + 44);
  hkTransformf::setMul((hkTransformf::Self *)v16, *(const hkTransformf::Self **)(a3 + 8), (const hkTransformf::Self *)v15);
  v13[3] = a3;
  v13[2] = (uint32_t)(uintptr_t)(v16);
  v13[0] = *(uint32_t *)(a1 + 24);
  v13[1] = 0;
  return G4_VCALL<int>(v13[0], 32, v14, v13, a4);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::castRay  (binary VA: 0x16c8020)
// Original: hkpConvexTranslateShape::castRay
// ----------------------------------------------------------------------------
int hkpConvexTranslateShape::castRay(uint8_t *a1, int a2, float *a3, int a4)
{
  float *v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float v8; // xmm4_4
  float v9; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13;
  float v14; // xmm0_4
  int v15;
  uint8_t *v16;
  int v17;
  bool v18;
  int v19;
  uint32_t *v20;
  uint64_t v21; // rax
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef int *_g4_t_address;
  typedef int *_g4_t_v29;
  typedef uint32_t *_g4_t_v30;
  typedef uint8_t *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef float _g4_t_v33[18];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v23)) > _g4_s0 ? (4u + sizeof(_g4_t_v23)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v24)) > _g4_s1 ? (8u + sizeof(_g4_t_v24)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v25)) > _g4_s2 ? (12u + sizeof(_g4_t_v25)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v26)) > _g4_s3 ? (16u + sizeof(_g4_t_v26)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v27)) > _g4_s4 ? (20u + sizeof(_g4_t_v27)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_address)) > _g4_s5 ? (24u + sizeof(_g4_t_address)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v29)) > _g4_s6 ? (24u + sizeof(_g4_t_v29)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v30)) > _g4_s7 ? (28u + sizeof(_g4_t_v30)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v31)) > _g4_s8 ? (32u + sizeof(_g4_t_v31)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v32)) > _g4_s9 ? (32u + sizeof(_g4_t_v32)) : _g4_s9,
    _g4_s11 = (36u + sizeof(_g4_t_v33)) > _g4_s10 ? (36u + sizeof(_g4_t_v33)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 24u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 32u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);

  LODWORD(v33[14]) = (uint32_t)(uintptr_t)(&a1);
  v31 = a1;
  v4 = a3;
  v5 = a4;
  v27 = a2;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v26 = *address;
  v6 = *(uint32_t **)(*address + 4);
  v30 = v6;
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcConvTransl");
    v7 = __rdtsc();
    v30[1] = v7;
    *(uint32_t *)(v26 + 4) = (uint32_t)(uintptr_t)(v30 + 3);
  }
  v8 = *(float *)(v27 + 32);
  v9 = *v4;
  v33[8] = v4[8];
  v10 = *(float *)(v27 + 36);
  v11 = *(float *)(v27 + 40);
  v12 = *(float *)(v27 + 44);
  v33[9] = v4[9];
  v33[10] = v4[10];
  v13 = v4[11];
  v33[0] = v9 - v8;
  v33[11] = v13;
  v33[1] = v4[1] - v10;
  v33[2] = v4[2] - v11;
  v33[3] = v4[3] - v12;
  v33[4] = v4[4] - v8;
  v33[5] = v4[5] - v10;
  v33[6] = v4[6] - v11;
  v14 = v4[7];
  ++*(uint32_t *)(v5 + 64);
  v15 = *(uint32_t *)(v27 + 24);
  v33[7] = v14 - v12;
  v16 = v31;
  (*(void (**)(uint8_t *, int, float *, int, int, int, int, int, int, int *, uint32_t *, uint8_t *))(*(uint32_t *)v15 + 28))(
    v31,
    v15,
    v33,
    v5,
    v23,
    v24,
    v25,
    v26,
    v27,
    address,
    v30,
    v31);
  v17 = *(uint32_t *)(v5 + 64);
  v18 = *v16 == 0;
  *(uint32_t *)(v5 + 64) = v17 - 1;
  if ( !v18 )
    *(uint32_t *)(v5 + 4 * v17 + 28) = 0;
  v19 = *v29;
  v20 = *(uint32_t **)(*v29 + 4);
  if ( (unsigned int)(uintptr_t)(v20) < *(uint32_t *)(*v29 + 12) )
  {
    *v20 = (uint32_t)(uintptr_t)("Et");
    v21 = __rdtsc();
    v20[1] = v21;
    *(uint32_t *)(v19 + 4) = (uint32_t)(uintptr_t)(v20 + 3);
  }
  return v32;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::Destroy  (binary VA: 0x16c81a0)
// Original: hkpConvexTranslateShape::~hkpConvexTranslateShape
// ----------------------------------------------------------------------------
void hkpConvexTranslateShape::Destroy(hkpConvexTranslateShape::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D88);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTranslateShape::Destroy_ea16c8230  (binary VA: 0x16c8230)
// Original: hkpConvexTranslateShape::~hkpConvexTranslateShape
// ----------------------------------------------------------------------------
void hkpConvexTranslateShape::Destroy_ea16c8230(hkpConvexTranslateShape::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D88);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}



// ============================================================================
// Address:   0x16c8300 (size: 71 bytes)
// Symbol:    _ZN23hkpConvexTranslateShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpConvexTranslateShape::hkpConvexTranslateShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN23hkpConvexTranslateShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpConvexTranslateShape::hkpConvexTranslateShape(
        int a1,
        int a2))(hkpConvexTranslateShape::Self * self)
{
  hkpConvexShape::hkpConvexShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 10;
  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_20994E8);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209A948);
  return (void (**)(hkpConvexTranslateShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209A948));
}
// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::getNumCollisionSpheres  (binary VA: 0x16d79d0)
// Original: hkpConvexTransformShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpConvexTransformShape::getNumCollisionSpheres(hkpConvexTransformShape::Self *self)
{
  return (*(int (**)(uint32_t))(**((uint32_t **)self + 6) + 52))(*((uint32_t *)self + 6));
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::getContainer  (binary VA: 0x16d79f0)
// Original: hkpConvexTransformShape::getContainer
// ----------------------------------------------------------------------------
char * hkpConvexTransformShape::getContainer(hkpConvexTransformShape::Self *self)
{
  return (char *)self + 20;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::calcSizeForSpu  (binary VA: 0x16d7a00)
// Original: hkpConvexTransformShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpConvexTransformShape::calcSizeForSpu(int a1, int a2, int a3)
{
  int v3;

  v3 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(a1 + 24) + 72))(*(uint32_t *)(a1 + 24), a2, a3 - 96);
  if ( v3 < 0 || a3 - 96 < v3 )
    return -1;
  if ( *(uint32_t *)(a1 + 24) == a1 + 96 )
  {
    *(uint32_t *)(a1 + 28) = 0;
    return v3 + 96;
  }
  else
  {
    *(uint32_t *)(a1 + 28) = v3;
    return 96;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::castRayWithCollector  (binary VA: 0x16d7a70)
// Original: hkpConvexTransformShape::castRayWithCollector
// ----------------------------------------------------------------------------
int hkpConvexTransformShape::castRayWithCollector(int *a1, int a2, int a3, int a4)
{
  int *v4;
  int *address;
  int v6;
  uint32_t *v7;
  uint64_t v8; // rax
  int v9;
  uint64_t v10; // rax
  int v11;
  uint32_t *v12;
  float *v13;
  float v14; // xmm0_4
  float v15; // xmm2_4
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v18; // xmm2_4
  float v19; // xmm5_4
  void (**v20)(uint32_t, uint32_t *, float *);
  typedef int _g4_t_v22;
  typedef int _g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef void (***_g4_t_v26)(uint32_t, uint32_t *, float *);
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int *_g4_t_v30;
  typedef int *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[4];
  typedef float _g4_t_v34;
  typedef float _g4_t_v35;
  typedef float _g4_t_v36;
  typedef float _g4_t_v37;
  typedef int _g4_t_v38;
  typedef int _g4_t_v39;
  typedef int _g4_t_v40;
  typedef int _g4_t_v41;
  typedef int **_g4_t_v42;
  enum : size_t {
    _g4_s0 = 224u,
    _g4_s1 = (4u + sizeof(_g4_t_v22)) > _g4_s0 ? (4u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v26)) > _g4_s4 ? (16u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v27)) > _g4_s5 ? (20u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (20u + sizeof(_g4_t_v28)) > _g4_s6 ? (20u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (24u + sizeof(_g4_t_v29)) > _g4_s7 ? (24u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v30)) > _g4_s8 ? (28u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (28u + sizeof(_g4_t_v31)) > _g4_s9 ? (28u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v32)) > _g4_s10 ? (32u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (36u + sizeof(_g4_t_v33)) > _g4_s11 ? (36u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (52u + sizeof(_g4_t_v34)) > _g4_s12 ? (52u + sizeof(_g4_t_v34)) : _g4_s12,
    _g4_s14 = (56u + sizeof(_g4_t_v35)) > _g4_s13 ? (56u + sizeof(_g4_t_v35)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v36)) > _g4_s14 ? (60u + sizeof(_g4_t_v36)) : _g4_s14,
    _g4_s16 = (64u + sizeof(_g4_t_v37)) > _g4_s15 ? (64u + sizeof(_g4_t_v37)) : _g4_s15,
    _g4_s17 = (68u + sizeof(_g4_t_v38)) > _g4_s16 ? (68u + sizeof(_g4_t_v38)) : _g4_s16,
    _g4_s18 = (72u + sizeof(_g4_t_v39)) > _g4_s17 ? (72u + sizeof(_g4_t_v39)) : _g4_s17,
    _g4_s19 = (84u + sizeof(_g4_t_v40)) > _g4_s18 ? (84u + sizeof(_g4_t_v40)) : _g4_s18,
    _g4_s20 = (116u + sizeof(_g4_t_v41)) > _g4_s19 ? (116u + sizeof(_g4_t_v41)) : _g4_s19,
    _g4_s21 = (140u + sizeof(_g4_t_v42)) > _g4_s20 ? (140u + sizeof(_g4_t_v42)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 4u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 16u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 20u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 28u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 32u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 36u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 56u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 60u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 64u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 68u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 72u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 84u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 116u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 140u);

  v42 = &a1;
  v29 = a2;
  v27 = a3;
  v25 = a4;
  v4 = a1;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v6 = *address;
  v30 = address;
  v7 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v7) < *(uint32_t *)(*address + 12) )
  {
    *v7 = (uint32_t)(uintptr_t)("TtrcCxTransform");
    v8 = __rdtsc();
    v7[1] = v8;
    *(uint32_t *)(v6 + 4) = (uint32_t)(uintptr_t)(v7 + 3);
  }
  v9 = *v4;
  v38 = 1065353216;
  v39 = -1;
  v41 = 0;
  v40 = -1;
  (*(void (**)(char *, int *, int, float *, int, int, int, int, int, int, int *, int))(v9 + 28))(
    (char *)&v32 + 3,
    v4,
    v29,
    &v34,
    v22,
    v23,
    v24,
    v25,
    v27,
    v29,
    v30,
    v32);
  if ( HIBYTE(v32) != 0 )
  {
    v33[1] = 0;
    v33[3] = v28;
    v33[0] = v4[6];
    v13 = *(float **)(v28 + 8);
    v14 = v13[5];
    v33[2] = (uint32_t)(uintptr_t)(v13);
    v15 = (float)(v13[1] * v34) + (float)(v14 * v35);
    v16 = (float)(v13[2] * v34) + (float)(v13[6] * v35);
    v17 = (float)(v13[3] * v34) + (float)(v13[7] * v35);
    v34 = (float)((float)(v34 * *v13) + (float)(v35 * v13[4])) + (float)(v13[8] * v36);
    v35 = v15 + (float)(v13[9] * v36);
    v18 = v13[10] * v36;
    v19 = v36 * v13[11];
    v20 = *v26;
    v36 = v16 + v18;
    v37 = v17 + v19;
    (*v20)((uint32_t)(uintptr_t)(v26), v33, &v34);
  }
  LODWORD(v10) = (uint32_t)(uintptr_t)(v31);
  v11 = *v31;
  v12 = *(uint32_t **)(*v31 + 4);
  if ( (unsigned int)(uintptr_t)(v12) < *(uint32_t *)(*v31 + 12) )
  {
    *v12 = (uint32_t)(uintptr_t)("Et");
    v10 = __rdtsc();
    v12[1] = v10;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v12 + 3);
  }
  return v10;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::Destroy  (binary VA: 0x16d7c30)
// Original: hkpConvexTransformShape::~hkpConvexTransformShape
// ----------------------------------------------------------------------------
void hkpConvexTransformShape::Destroy(hkpConvexTransformShape::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D88);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::getAabb  (binary VA: 0x16d7cc0)
// Original: hkpConvexTransformShape::getAabb
// ----------------------------------------------------------------------------
hkTransformf::Self * hkpConvexTransformShape::getAabb(hkpConvexTransformShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  float v4; // xmm5_4
  float v5; // xmm2_4
  hkTransformf::Self *result;
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm5_4
  float v10; // xmm2_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4
  float v14; // xmm4_4
  typedef float _g4_t_v15;
  typedef float _g4_t_v16;
  typedef float _g4_t_v17;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23[19];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (4u + sizeof(_g4_t_v15)) > _g4_s0 ? (4u + sizeof(_g4_t_v15)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v16)) > _g4_s1 ? (8u + sizeof(_g4_t_v16)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v17)) > _g4_s2 ? (12u + sizeof(_g4_t_v17)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v18)) > _g4_s3 ? (16u + sizeof(_g4_t_v18)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v19)) > _g4_s4 ? (16u + sizeof(_g4_t_v19)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v20)) > _g4_s5 ? (20u + sizeof(_g4_t_v20)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v21)) > _g4_s6 ? (24u + sizeof(_g4_t_v21)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v22)) > _g4_s7 ? (28u + sizeof(_g4_t_v22)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v23)) > _g4_s8 ? (32u + sizeof(_g4_t_v23)) : _g4_s8
  };
  alignas(16) uint8_t _g4_sf[_g4_s9];
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 4u);
  _g4_t_v16 &v16 = *reinterpret_cast<_g4_t_v16 *>(_g4_sf + 8u);
  _g4_t_v17 &v17 = *reinterpret_cast<_g4_t_v17 *>(_g4_sf + 12u);
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 16u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 16u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 20u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 24u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 28u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 32u);

  (*(void (**)(uint32_t, void *, uint32_t, float *))(**((uint32_t **)self + 6) + 24))(
    *((uint32_t *)self + 6),
    &unk_1D12FD0,
    0,
    v23);
  v4 = *((float *)self + 16);
  v20 = (float)((float)(v23[0] + v23[4]) * 0.5) * v4;
  v5 = *((float *)self + 17);
  v22 = (float)((float)(v23[1] + v23[5]) * 0.5) * v5;
  v16 = (float)((float)(v23[4] - v23[0]) * 0.5) * v4;
  v17 = (float)((float)(v23[5] - v23[1]) * 0.5) * v5;
  v15 = (float)((float)(v23[2] + v23[6]) * 0.5) * *((float *)self + 18);
  v18 = (float)((float)(v23[6] - v23[2]) * 0.5) * *((float *)self + 18);
  hkQsTransformf::copyToTransformNoScale((hkpConvexTransformShape::Self *)((char *)self + 32), (hkTransformf::Self *)v23);
  result = hkTransformf::setMul((hkTransformf::Self *)v23, a2, (const hkTransformf::Self *)v23);
  v7 = v18;
  v8 = fabs(v23[9] * v18) + a3;
  v19 = (float)(fabs(v23[8] * v18) + a3) + (float)(fabs(v23[0] * v16) + fabs(v23[4] * v17));
  v21 = (float)(fabs(v23[1] * v16) + fabs(v23[5] * v17)) + v8;
  v9 = (float)(fabs(v23[10] * v7) + a3) + (float)(fabs(v23[2] * v16) + fabs(v23[6] * v17));
  v10 = (float)(fabs(v7 * v23[11]) + a3) + (float)(fabs(v16 * v23[3]) + fabs(v17 * v23[7]));
  v11 = (float)((float)((float)(v23[1] * v20) + (float)(v23[5] * v22)) + (float)(v23[9] * v15)) + v23[13];
  v12 = (float)((float)((float)(v23[2] * v20) + (float)(v22 * v23[6])) + (float)(v23[10] * v15)) + v23[14];
  v13 = (float)((float)((float)((float)(v23[0] * v20) + (float)(v23[4] * v22)) + (float)(v23[8] * v15)) + v23[12]) - v19;
  v14 = (float)((float)((float)(v23[3] * v20) + (float)(v22 * v23[7])) + (float)(v15 * v23[11])) + v23[15];
  *((float *)a4 + 4) = (float)((float)((float)((float)(v23[0] * v20) + (float)(v23[4] * v22)) + (float)(v23[8] * v15))
                             + v23[12])
                     + v19;
  *(float *)a4 = v13;
  *((float *)a4 + 5) = v21 + v11;
  *((float *)a4 + 1) = v11 - v21;
  *((float *)a4 + 6) = v9 + v12;
  *((float *)a4 + 2) = v12 - v9;
  *((float *)a4 + 7) = v10 + v14;
  *((float *)a4 + 3) = v14 - v10;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::Destroy_ea16d8000  (binary VA: 0x16d8000)
// Original: hkpConvexTransformShape::~hkpConvexTransformShape
// ----------------------------------------------------------------------------
void hkpConvexTransformShape::Destroy_ea16d8000(hkpConvexTransformShape::Self *self)
{
  int v1;
  int v2;
  int32_t v3; // kr00_4
  int32_t v4;
  int32_t v5; // ett
  int v6;
  int v7;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2099D88);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994E8);
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
  *((uint32_t *)self + 5) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v6 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v7 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v7 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v6, 12, self, v7);
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::getSupportingVertex  (binary VA: 0x16d80d0)
// Original: hkpConvexTransformShape::getSupportingVertex
// ----------------------------------------------------------------------------
void * hkpConvexTransformShape::getSupportingVertex(int a1, float *a2, float *a3)
{
  float v3; // xmm2_4
  float v4; // xmm3_4
  float v5; // xmm6_4
  float v6; // xmm1_4
  float v7; // xmm7_4
  float v8; // xmm5_4
  float v9; // xmm0_4
  float v10; // xmm4_4
  float v11; // xmm0_4
  float v12; // xmm4_4
  int v13;
  float v14; // xmm1_4
  float v15; // xmm5_4
  float v17; // xmm4_4
  float v18; // xmm5_4
  float v19; // xmm3_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm2_4
  float v25; // xmm4_4
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm1_4
  float v30; // xmm2_4
  float v31; // xmm0_4
  float v32; // xmm4_4
  float v33; // xmm7_4
  float v34; // xmm7_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm2_4
  float v38; // xmm6_4
  float v39; // xmm2_4
  float v40; // xmm2_4
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49[4];
  typedef float _g4_t_v50[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (8u + sizeof(_g4_t_v41)) > _g4_s0 ? (8u + sizeof(_g4_t_v41)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v42)) > _g4_s1 ? (12u + sizeof(_g4_t_v42)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v43)) > _g4_s2 ? (16u + sizeof(_g4_t_v43)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v44)) > _g4_s3 ? (20u + sizeof(_g4_t_v44)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v45)) > _g4_s4 ? (20u + sizeof(_g4_t_v45)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v46)) > _g4_s5 ? (24u + sizeof(_g4_t_v46)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v47)) > _g4_s6 ? (28u + sizeof(_g4_t_v47)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v48)) > _g4_s7 ? (28u + sizeof(_g4_t_v48)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v49)) > _g4_s8 ? (32u + sizeof(_g4_t_v49)) : _g4_s8,
    _g4_s10 = (48u + sizeof(_g4_t_v50)) > _g4_s9 ? (48u + sizeof(_g4_t_v50)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 8u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 12u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 16u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 20u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 20u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 24u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 28u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 28u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 32u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 48u);

  v3 = *(float *)(a1 + 60);
  v4 = (float)(v3 * v3) - 0.5;
  v5 = a2[2];
  v47 = *a2;
  v44 = a2[1];
  v6 = (float)((float)(*(float *)(a1 + 48) * *a2) + (float)(*(float *)(a1 + 52) * v44))
     + (float)(*(float *)(a1 + 56) * v5);
  v7 = (float)((float)((float)(a2[3] * v4) + (float)(v3 * v6)) + (float)(0.0 * v3))
     + (float)((float)((float)(a2[3] * v4) + (float)(v3 * v6)) + (float)(0.0 * v3));
  v8 = *a2 * *(float *)(a1 + 56);
  v9 = (float)((float)(*a2 * v4) + (float)(*(float *)(a1 + 48) * v6))
     + (float)((float)((float)(*(float *)(a1 + 56) * v44) - (float)(*(float *)(a1 + 52) * v5)) * v3);
  v10 = *(float *)(a1 + 52) * v6;
  v49[0] = (float)(v9 + v9) * *(float *)(a1 + 64);
  v11 = (float)(v44 * v4) + v10;
  v12 = (float)((float)(*(float *)(a1 + 48) * v5) - v8) * v3;
  v49[1] = (float)((float)(v11 + v12) + (float)(v11 + v12)) * *(float *)(a1 + 68);
  v13 = *(uint32_t *)(a1 + 24);
  v14 = v6 * *(float *)(a1 + 56);
  v15 = (float)(v47 * *(float *)(a1 + 52)) - (float)(v44 * *(float *)(a1 + 48));
  v49[3] = v7 * *(float *)(a1 + 76);
  v49[2] = (float)((float)((float)((float)(v4 * v5) + v14) + (float)(v15 * v3))
                 + (float)((float)((float)(v4 * v5) + v14) + (float)(v15 * v3)))
         * *(float *)(a1 + 72);
  G4_VCALL<void>(v13, 40, v49, v50);
  v17 = v50[1];
  v18 = v50[0] * *(float *)(a1 + 64);
  v19 = v50[2];
  v20 = v50[1] - *(float *)(a1 + 76);
  v21 = v50[3];
  v22 = v50[3];
  v23 = v50[0] - *(float *)(a1 + 44);
  v24 = v50[2] - *(float *)(a1 + 92);
  *a3 = v18;
  v25 = v17 * *(float *)(a1 + 68);
  a3[1] = v25;
  v26 = v19 * *(float *)(a1 + 72);
  a3[2] = v26;
  v27 = v21 * *(float *)(a1 + 76);
  a3[3] = v27;
  v28 = (float)(v23 * *(float *)(a1 + 80)) + v18;
  *a3 = v28;
  v29 = (float)(v20 * *(float *)(a1 + 84)) + v25;
  a3[1] = v29;
  v30 = (float)(v24 * *(float *)(a1 + 88)) + v26;
  a3[2] = v30;
  v31 = v27 + (float)((float)(v22 - 0.0) * *(float *)(a1 + 92));
  a3[3] = v31;
  v41 = v31;
  v48 = *(float *)(a1 + 60);
  v32 = (float)(v48 * v48) - 0.5;
  v46 = *(float *)(a1 + 48);
  v45 = *(float *)(a1 + 56);
  v42 = *(float *)(a1 + 52);
  v43 = (float)((float)(v42 * v29) + (float)(v46 * v28)) + (float)(v45 * v30);
  v33 = (float)((float)(v28 * v32) + (float)(v43 * v46))
      + (float)((float)((float)(v42 * v30) - (float)(v45 * v29)) * v48);
  v34 = v33 + v33;
  *a3 = v34;
  v35 = (float)((float)(v29 * v32) + (float)(v42 * v43))
      + (float)((float)((float)(v45 * v28) - (float)(v46 * v30)) * v48);
  v36 = v35 + v35;
  a3[1] = v36;
  v37 = (float)((float)(v30 * v32) + (float)(v45 * v43))
      + (float)((float)((float)(v29 * v46) - (float)(v42 * v28)) * v48);
  v38 = v50[3];
  v39 = v37 + v37;
  a3[2] = v39;
  a3[3] = (float)((float)((float)(v32 * v41) + (float)(v43 * v48)) + (float)(v48 * 0.0))
        + (float)((float)((float)(v32 * v41) + (float)(v43 * v48)) + (float)(v48 * 0.0));
  *a3 = *(float *)(a1 + 32) + v34;
  a3[1] = v36 + *(float *)(a1 + 36);
  v40 = v39 + *(float *)(a1 + 40);
  a3[3] = v38;
  a3[2] = v40;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::castRay  (binary VA: 0x16d84a0)
// Original: hkpConvexTransformShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpConvexTransformShape::castRay(int a1, int a2, int a3, int a4)
{
  int v4;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  __m128i v8;
  int v9;
  float v10; // xmm0_4
  float v11; // xmm4_4
  __m128i v12;
  int v13;
  float v14; // xmm0_4
  float v15; // xmm7_4
  __m128i v16;
  int v17;
  float v18; // xmm0_4
  float v19; // xmm6_4
  __m128i v20;
  int v21;
  float v22; // xmm4_4
  float v23; // xmm6_4
  int v24; // xmm0_4
  float v25; // xmm0_4
  float v26; // xmm4_4
  float v27; // xmm3_4
  float v28; // xmm1_4
  float v29; // xmm0_4
  float v30; // xmm7_4
  float v31; // xmm1_4
  float v32; // xmm0_4
  float v33; // xmm6_4
  float v34; // xmm1_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm6_4
  float v38; // xmm1_4
  float v39; // xmm5_4
  float v40; // xmm7_4
  float v41; // xmm3_4
  float v42; // xmm1_4
  float v43; // xmm5_4
  float v44; // xmm7_4
  float v45; // xmm4_4
  float v46; // xmm1_4
  float v47; // xmm7_4
  float v48; // xmm1_4
  int v49;
  float v50; // xmm6_4
  float v51; // xmm3_4
  float v52; // xmm4_4
  float v53; // xmm6_4
  float v54; // xmm1_4
  float v55; // xmm6_4
  float v56; // xmm1_4
  float v57; // xmm6_4
  float v58; // xmm4_4
  int v59;
  int v60;
  int v61;
  uint32_t *v62;
  uint64_t v63; // rax
  float v65; // xmm3_4
  float v66; // xmm5_4
  float v67; // xmm6_4
  float v68; // xmm4_4
  float v69; // xmm5_4
  __m128 v70;
  __m128 v71;
  __m128 v72;
  __m128i v73;
  __m128 v74;
  __m128 v75;
  __m128i v76;
  float v77; // xmm5_4
  int v78;
  float v79; // xmm4_4
  float v80; // xmm3_4
  __m128 v81;
  typedef int _g4_t_v82;
  typedef int _g4_t_v83;
  typedef float _g4_t_v84;
  typedef int *_g4_t_address;
  typedef int *_g4_t_v86;
  typedef int _g4_t_v87;
  typedef float *_g4_t_v88;
  typedef float _g4_t_v89;
  typedef float _g4_t_v90;
  typedef float _g4_t_v91;
  typedef float _g4_t_v92;
  typedef float _g4_t_v93;
  typedef float _g4_t_v94;
  typedef float _g4_t_v95;
  typedef float _g4_t_v96;
  typedef float _g4_t_v97;
  typedef float _g4_t_v98;
  typedef float _g4_t_v99;
  typedef float _g4_t_v100;
  typedef unsigned int _g4_t_v101;
  typedef int _g4_t_v102;
  typedef int _g4_t_v103;
  typedef int _g4_t_v104;
  typedef int _g4_t_v105;
  typedef float _g4_t_v106;
  typedef float _g4_t_v107;
  typedef unsigned int _g4_t_v108;
  typedef int _g4_t_v109;
  typedef uint8_t *_g4_t_v110;
  typedef float _g4_t_v111;
  typedef float _g4_t_v112;
  typedef float _g4_t_v113;
  typedef float _g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef int _g4_t_v119;
  typedef int _g4_t_v120;
  typedef int _g4_t_v121;
  typedef int _g4_t_v122;
  typedef int *_g4_t_v123;
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (8u + sizeof(_g4_t_v82)) > _g4_s0 ? (8u + sizeof(_g4_t_v82)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v83)) > _g4_s1 ? (12u + sizeof(_g4_t_v83)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v84)) > _g4_s2 ? (16u + sizeof(_g4_t_v84)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_address)) > _g4_s3 ? (20u + sizeof(_g4_t_address)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v86)) > _g4_s4 ? (20u + sizeof(_g4_t_v86)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v87)) > _g4_s5 ? (24u + sizeof(_g4_t_v87)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v88)) > _g4_s6 ? (24u + sizeof(_g4_t_v88)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v89)) > _g4_s7 ? (28u + sizeof(_g4_t_v89)) : _g4_s7,
    _g4_s9 = (28u + sizeof(_g4_t_v90)) > _g4_s8 ? (28u + sizeof(_g4_t_v90)) : _g4_s8,
    _g4_s10 = (32u + sizeof(_g4_t_v91)) > _g4_s9 ? (32u + sizeof(_g4_t_v91)) : _g4_s9,
    _g4_s11 = (32u + sizeof(_g4_t_v92)) > _g4_s10 ? (32u + sizeof(_g4_t_v92)) : _g4_s10,
    _g4_s12 = (32u + sizeof(_g4_t_v93)) > _g4_s11 ? (32u + sizeof(_g4_t_v93)) : _g4_s11,
    _g4_s13 = (36u + sizeof(_g4_t_v94)) > _g4_s12 ? (36u + sizeof(_g4_t_v94)) : _g4_s12,
    _g4_s14 = (36u + sizeof(_g4_t_v95)) > _g4_s13 ? (36u + sizeof(_g4_t_v95)) : _g4_s13,
    _g4_s15 = (40u + sizeof(_g4_t_v96)) > _g4_s14 ? (40u + sizeof(_g4_t_v96)) : _g4_s14,
    _g4_s16 = (40u + sizeof(_g4_t_v97)) > _g4_s15 ? (40u + sizeof(_g4_t_v97)) : _g4_s15,
    _g4_s17 = (40u + sizeof(_g4_t_v98)) > _g4_s16 ? (40u + sizeof(_g4_t_v98)) : _g4_s16,
    _g4_s18 = (44u + sizeof(_g4_t_v99)) > _g4_s17 ? (44u + sizeof(_g4_t_v99)) : _g4_s17,
    _g4_s19 = (44u + sizeof(_g4_t_v100)) > _g4_s18 ? (44u + sizeof(_g4_t_v100)) : _g4_s18,
    _g4_s20 = (44u + sizeof(_g4_t_v101)) > _g4_s19 ? (44u + sizeof(_g4_t_v101)) : _g4_s19,
    _g4_s21 = (48u + sizeof(_g4_t_v102)) > _g4_s20 ? (48u + sizeof(_g4_t_v102)) : _g4_s20,
    _g4_s22 = (48u + sizeof(_g4_t_v103)) > _g4_s21 ? (48u + sizeof(_g4_t_v103)) : _g4_s21,
    _g4_s23 = (48u + sizeof(_g4_t_v104)) > _g4_s22 ? (48u + sizeof(_g4_t_v104)) : _g4_s22,
    _g4_s24 = (48u + sizeof(_g4_t_v105)) > _g4_s23 ? (48u + sizeof(_g4_t_v105)) : _g4_s23,
    _g4_s25 = (48u + sizeof(_g4_t_v106)) > _g4_s24 ? (48u + sizeof(_g4_t_v106)) : _g4_s24,
    _g4_s26 = (48u + sizeof(_g4_t_v107)) > _g4_s25 ? (48u + sizeof(_g4_t_v107)) : _g4_s25,
    _g4_s27 = (48u + sizeof(_g4_t_v108)) > _g4_s26 ? (48u + sizeof(_g4_t_v108)) : _g4_s26,
    _g4_s28 = (52u + sizeof(_g4_t_v109)) > _g4_s27 ? (52u + sizeof(_g4_t_v109)) : _g4_s27,
    _g4_s29 = (52u + sizeof(_g4_t_v110)) > _g4_s28 ? (52u + sizeof(_g4_t_v110)) : _g4_s28,
    _g4_s30 = (56u + sizeof(_g4_t_v111)) > _g4_s29 ? (56u + sizeof(_g4_t_v111)) : _g4_s29,
    _g4_s31 = (60u + sizeof(_g4_t_v112)) > _g4_s30 ? (60u + sizeof(_g4_t_v112)) : _g4_s30,
    _g4_s32 = (64u + sizeof(_g4_t_v113)) > _g4_s31 ? (64u + sizeof(_g4_t_v113)) : _g4_s31,
    _g4_s33 = (68u + sizeof(_g4_t_v114)) > _g4_s32 ? (68u + sizeof(_g4_t_v114)) : _g4_s32,
    _g4_s34 = (72u + sizeof(_g4_t_v115)) > _g4_s33 ? (72u + sizeof(_g4_t_v115)) : _g4_s33,
    _g4_s35 = (76u + sizeof(_g4_t_v116)) > _g4_s34 ? (76u + sizeof(_g4_t_v116)) : _g4_s34,
    _g4_s36 = (80u + sizeof(_g4_t_v117)) > _g4_s35 ? (80u + sizeof(_g4_t_v117)) : _g4_s35,
    _g4_s37 = (84u + sizeof(_g4_t_v118)) > _g4_s36 ? (84u + sizeof(_g4_t_v118)) : _g4_s36,
    _g4_s38 = (88u + sizeof(_g4_t_v119)) > _g4_s37 ? (88u + sizeof(_g4_t_v119)) : _g4_s37,
    _g4_s39 = (92u + sizeof(_g4_t_v120)) > _g4_s38 ? (92u + sizeof(_g4_t_v120)) : _g4_s38,
    _g4_s40 = (96u + sizeof(_g4_t_v121)) > _g4_s39 ? (96u + sizeof(_g4_t_v121)) : _g4_s39,
    _g4_s41 = (100u + sizeof(_g4_t_v122)) > _g4_s40 ? (100u + sizeof(_g4_t_v122)) : _g4_s40,
    _g4_s42 = (112u + sizeof(_g4_t_v123)) > _g4_s41 ? (112u + sizeof(_g4_t_v123)) : _g4_s41
  };
  alignas(16) uint8_t _g4_sf[_g4_s42];
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 8u);
  _g4_t_v83 &v83 = *reinterpret_cast<_g4_t_v83 *>(_g4_sf + 12u);
  _g4_t_v84 &v84 = *reinterpret_cast<_g4_t_v84 *>(_g4_sf + 16u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 20u);
  _g4_t_v86 &v86 = *reinterpret_cast<_g4_t_v86 *>(_g4_sf + 20u);
  _g4_t_v87 &v87 = *reinterpret_cast<_g4_t_v87 *>(_g4_sf + 24u);
  _g4_t_v88 &v88 = *reinterpret_cast<_g4_t_v88 *>(_g4_sf + 24u);
  _g4_t_v89 &v89 = *reinterpret_cast<_g4_t_v89 *>(_g4_sf + 28u);
  _g4_t_v90 &v90 = *reinterpret_cast<_g4_t_v90 *>(_g4_sf + 28u);
  _g4_t_v91 &v91 = *reinterpret_cast<_g4_t_v91 *>(_g4_sf + 32u);
  _g4_t_v92 &v92 = *reinterpret_cast<_g4_t_v92 *>(_g4_sf + 32u);
  _g4_t_v93 &v93 = *reinterpret_cast<_g4_t_v93 *>(_g4_sf + 32u);
  _g4_t_v94 &v94 = *reinterpret_cast<_g4_t_v94 *>(_g4_sf + 36u);
  _g4_t_v95 &v95 = *reinterpret_cast<_g4_t_v95 *>(_g4_sf + 36u);
  _g4_t_v96 &v96 = *reinterpret_cast<_g4_t_v96 *>(_g4_sf + 40u);
  _g4_t_v97 &v97 = *reinterpret_cast<_g4_t_v97 *>(_g4_sf + 40u);
  _g4_t_v98 &v98 = *reinterpret_cast<_g4_t_v98 *>(_g4_sf + 40u);
  _g4_t_v99 &v99 = *reinterpret_cast<_g4_t_v99 *>(_g4_sf + 44u);
  _g4_t_v100 &v100 = *reinterpret_cast<_g4_t_v100 *>(_g4_sf + 44u);
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 44u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 48u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 48u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 48u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 48u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 48u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 48u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 48u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 52u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 52u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 56u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 60u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 64u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 68u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 72u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 76u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 80u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 84u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 88u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 92u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 96u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 100u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 112u);

  v123 = &a1;
  v109 = a1;
  v87 = a4;
  v4 = a2;
  v5 = a3;
  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v102 = *address;
  v6 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(*address + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcCxTransform");
    v7 = __rdtsc();
    v6[1] = v7;
    *(uint32_t *)(v102 + 4) = (uint32_t)(uintptr_t)(v6 + 3);
  }
g4_m128_raw(v8) = *(unsigned int *)(v4 + 64);
  v9 = _mm_cvtsi128_si32(v8);
  v103 = (2130706432 - v9) & ((v9 ^ (v9 + 2139095040)) >> 31);
  v10 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                      * (float)((float)(2.0 - (float)(*(float *)(v4 + 64) * *(float *)&v103)) * *(float *)&v103)))
      * (float)((float)(2.0 - (float)(*(float *)(v4 + 64) * *(float *)&v103)) * *(float *)&v103);
  v11 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * v10);
g4_m128_raw(v12) = *(unsigned int *)(v4 + 68);
  v13 = _mm_cvtsi128_si32(v12);
  v104 = (2130706432 - v13) & ((v13 ^ (v13 + 2139095040)) >> 31);
  v99 = v10 * v11;
  v14 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                      * (float)((float)(2.0 - (float)(*(float *)(v4 + 68) * *(float *)&v104)) * *(float *)&v104)))
      * (float)((float)(2.0 - (float)(*(float *)(v4 + 68) * *(float *)&v104)) * *(float *)&v104);
  v15 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * v14);
g4_m128_raw(v16) = *(unsigned int *)(v4 + 72);
  v17 = _mm_cvtsi128_si32(v16);
  v105 = (2130706432 - v17) & ((v17 ^ (v17 + 2139095040)) >> 31);
  v96 = v14 * v15;
  v18 = (float)(2.0
              - (float)(*(float *)g4_m128_ptr<int32_t>(v16)
                      * (float)((float)(2.0 - (float)(*(float *)(v4 + 72) * *(float *)&v105)) * *(float *)&v105)))
      * (float)((float)(2.0 - (float)(*(float *)(v4 + 72) * *(float *)&v105)) * *(float *)&v105);
  v19 = 2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v16) * v18);
g4_m128_raw(v20) = *(unsigned int *)(v4 + 76);
  v21 = _mm_cvtsi128_si32(v20);
  v22 = v19;
  v23 = v18;
  v24 = (2130706432 - v21) & ((v21 ^ (v21 + 2139095040)) >> 31);
  v106 = v23 * v22;
  v25 = (float)(2.0
              - (float)(*(float *)(v4 + 76)
                      * (float)((float)(2.0 - (float)(*(float *)(v4 + 76) * *(float *)&v24)) * *(float *)&v24)))
      * (float)((float)(2.0 - (float)(*(float *)(v4 + 76) * *(float *)&v24)) * *(float *)&v24);
  v94 = v25 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v25));
  v111 = *(float *)v5;
g4_m128_lane<int32_t>(v20, 0) = *(uint32_t *)(v4 + 60);
  v112 = *(float *)(v5 + 4);
  v26 = v111 - *(float *)(v4 + 32);
  v27 = v112 - *(float *)(v4 + 36);
  v113 = *(float *)(v5 + 8);
  v28 = *(float *)(v4 + 52);
  v114 = *(float *)(v5 + 12);
  v29 = *(float *)g4_m128_ptr<int32_t>(v20) * *(float *)g4_m128_ptr<int32_t>(v20);
  v115 = *(float *)(v5 + 16);
g4_m128_lane<int32_t>(v20, 0) = *(uint32_t *)(v4 + 48);
  v30 = v113 - *(float *)(v4 + 40);
  v116 = *(float *)(v5 + 20);
  v117 = *(float *)(v5 + 24);
  v118 = *(float *)(v5 + 28);
  v119 = *(uint32_t *)(v5 + 32);
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v26) + (float)(v28 * v27);
  v31 = *(float *)(v4 + 56) * v30;
  v120 = *(uint32_t *)(v5 + 36);
  v121 = *(uint32_t *)(v5 + 40);
  v122 = *(uint32_t *)(v5 + 44);
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) + v31;
  v32 = v29 - 0.5;
  v89 = 0.0 * *(float *)(v4 + 60);
  v33 = (float)((float)(v114 - *(float *)(v4 + 44)) * v32) + (float)(*(float *)(v4 + 60) * *(float *)g4_m128_ptr<int32_t>(v20));
  v91 = v27;
  v34 = (float)(v26 * v32) + (float)(*(float *)(v4 + 48) * *(float *)g4_m128_ptr<int32_t>(v20));
  v35 = (float)(*(float *)(v4 + 56) * v27) - (float)(*(float *)(v4 + 52) * v30);
  v36 = *(float *)(v4 + 52) * *(float *)g4_m128_ptr<int32_t>(v20);
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) * *(float *)(v4 + 56);
  v114 = (float)((float)(v33 + v89) + (float)(v33 + v89)) * v94;
  v37 = *(float *)(v4 + 48);
  v111 = (float)((float)(v34 + (float)(v35 * *(float *)(v4 + 60))) + (float)(v34 + (float)(v35 * *(float *)(v4 + 60))))
       * v99;
  v38 = (float)(v91 * v32) + v36;
  v39 = *(float *)(v4 + 48) * v30;
  v40 = (float)(v30 * v32) + *(float *)g4_m128_ptr<int32_t>(v20);
g4_m128_lane<int32_t>(v20, 0) = *(uint32_t *)(v4 + 48);
  v41 = v116 - *(float *)(v4 + 36);
  v42 = v38 + (float)((float)(v39 - (float)(*(float *)(v4 + 56) * v26)) * *(float *)(v4 + 60));
  v43 = v117 - *(float *)(v4 + 40);
  v44 = v40
      + (float)((float)((float)(v26 * *(float *)(v4 + 52)) - (float)(v91 * *(float *)g4_m128_ptr<int32_t>(v20)))
              * *(float *)(v4 + 60));
  v45 = v115 - *(float *)(v4 + 32);
  v112 = (float)(v42 + v42) * v96;
  *(float *)g4_m128_ptr<int32_t>(v20) = (float)(*(float *)g4_m128_ptr<int32_t>(v20) * v45) + (float)(*(float *)(v4 + 52) * v41);
  v46 = *(float *)(v4 + 56) * v43;
  v113 = (float)(v44 + v44) * v106;
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) + v46;
  v47 = (float)((float)((float)(v118 - *(float *)(v4 + 44)) * v32)
              + (float)(*(float *)(v4 + 60) * *(float *)g4_m128_ptr<int32_t>(v20)))
      + v89;
  v48 = (float)(v45 * v32) + (float)(v37 * *(float *)g4_m128_ptr<int32_t>(v20));
  v92 = v41;
  v49 = v87;
  v50 = (float)(*(float *)(v4 + 56) * v41) - (float)(*(float *)(v4 + 52) * v43);
  v51 = *(float *)(v4 + 56) * v45;
  v52 = v45 * *(float *)(v4 + 52);
  v53 = v50 * *(float *)(v4 + 60);
  v118 = (float)(v47 + v47) * v94;
  v54 = v48 + v53;
  v55 = *(float *)(v4 + 52) * *(float *)g4_m128_ptr<int32_t>(v20);
  *(float *)g4_m128_ptr<int32_t>(v20) = *(float *)g4_m128_ptr<int32_t>(v20) * *(float *)(v4 + 56);
  v115 = (float)(v54 + v54) * v99;
  v56 = (float)(v92 * v32) + v55;
  v57 = (float)((float)(*(float *)(v4 + 48) * v43) - v51) * *(float *)(v4 + 60);
  v58 = (float)(v52 - (float)(v92 * *(float *)(v4 + 48))) * *(float *)(v4 + 60);
  ++*(uint32_t *)(v87 + 64);
  v59 = *(uint32_t *)(v4 + 24);
  v116 = (float)((float)(v56 + v57) + (float)(v56 + v57)) * v96;
  v117 = (float)((float)((float)((float)(v43 * v32) + *(float *)g4_m128_ptr<int32_t>(v20)) + v58)
               + (float)((float)((float)(v43 * v32) + *(float *)g4_m128_ptr<int32_t>(v20)) + v58))
       * v106;
  (*(void (**)(int, int, float *, int, int, int, int, int *, int, uint32_t, float, uint32_t, uint32_t, uint32_t, uint32_t, int))(*(uint32_t *)v59 + 28))(
    v109,
    v59,
    &v111,
    v87,
    v82,
    v83,
    1056964608,
    address,
    v87,
    LODWORD(v89),
    COERCE_FLOAT(LODWORD(v92)),
    LODWORD(v94),
    LODWORD(v96),
    LODWORD(v99),
    LODWORD(v106),
    v109);
  v60 = *(uint32_t *)(v49 + 64) - 1;
  *(uint32_t *)(v49 + 64) = v60;
  if ( *v110 != 0 )
  {
    v65 = *(float *)(v4 + 60);
g4_m128_raw(v74) = LODWORD(v107);
g4_m128_lane<float>(v74, 0) = v107 * v88[2];
    v66 = (float)(v100 * *v88) * *(float *)(v4 + 48);
    v93 = v100 * *v88;
    *(float *)&v101 = v97 * v88[1];
    v98 = *(float *)(v4 + 52);
    v67 = *(float *)(v4 + 56);
    v68 = (float)(v65 * v65) - v84;
    v90 = *(float *)(v4 + 48);
    v69 = (float)(v66 + (float)(*(float *)&v101 * v98)) + (float)(g4_m128_lane<float>(v74, 0) * v67);
g4_m128_raw(v70) = v101;
g4_m128_lane<float>(v70, 0) = *(float *)&v101 * v68;
    *(float *)&v108 = (float)((float)(v90 * v69) + (float)(v93 * v68))
                    + (float)((float)((float)(v98 *g4_m128_lane<float>(v74, 0)) - (float)(*(float *)&v101 * v67)) * v65);
    v72 = v70;
g4_m128_lane<float>(v70, 0) = (float)(v93 * v67) - (float)(v90 *g4_m128_lane<float>(v74, 0));
g4_m128_lane<float>(v74, 0) = (float)(g4_m128_lane<float>(v74, 0) * v68) + (float)(v67 * v69);
g4_m128_raw(v71) = 0;
g4_m128_lane<float>(v72, 0) = (float)((float)(*(float *)&v101 * v68) + (float)(v98 * v69)) + (float)(g4_m128_lane<float>(v70, 0) * v65);
g4_m128_raw(v75) = LODWORD(v95);
g4_m128_lane<float>(v72, 0) =g4_m128_lane<float>(v72, 0) +g4_m128_lane<float>(v72, 0);
g4_m128_lane<float>(v74, 0) =g4_m128_lane<float>(v74, 0) + (float)((float)((float)(*(float *)&v101 * v90) - (float)(v93 * v98)) * v65);
g4_m128_raw(v73) = v108;
    *(float *)g4_m128_ptr<int32_t>(v73) = *(float *)g4_m128_ptr<int32_t>(v73) + *(float *)g4_m128_ptr<int32_t>(v73);
g4_m128_lane<float>(v74, 0) =g4_m128_lane<float>(v74, 0) +g4_m128_lane<float>(v74, 0);
g4_m128_lane<float>(v75, 0) = (float)((float)((float)(v95 * v88[3]) * v68) + (float)(v69 * v65)) + (float)(v65 * 0.0);
    v76 = v73;
g4_m128_lane<float>(v75, 0) =g4_m128_lane<float>(v75, 0) +g4_m128_lane<float>(v75, 0);
    *(float *)g4_m128_ptr<int32_t>(v76) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v73) * *(float *)g4_m128_ptr<int32_t>(v73))
                                    + (float)(g4_m128_lane<float>(v72, 0) *g4_m128_lane<float>(v72, 0)))
                            + (float)(g4_m128_lane<float>(v74, 0) *g4_m128_lane<float>(v74, 0));
    if ( *(float *)g4_m128_ptr<int32_t>(v76) > 0.0 )
    {
      v77 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v76);
      v78 = ((_mm_cvtsi128_si32(v76) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v76) >> 1));
g4_m128_raw(v71) = 0x3FC00000u;
      v79 = (float)(*(float *)&v78 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v76)) * *(float *)&v78)
                  * (float)(*(float *)&v78 * *(float *)&v78));
      v80 = (float)(v79 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v76)) * v79) * (float)(v79 * v79));
g4_m128_lane<float>(v71, 0) = (float)(1.5 * v80) - (float)((float)(v77 * v80) * (float)(v80 * v80));
    }
g4_m128_lane<uint64_t>(v81, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_lane<uint32_t>(G4_BITCAST<__m128>(v73), 0), v72), 0);
g4_m128_lane<uint64_t>(v81, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v74, v75), 0);
    *(__m128 *)v88 = _mm_mul_ps(v81, _mm_shuffle_ps(v71, v71, 0));
    v88[v60 + 8] = 0.0;
  }
  v61 = *v86;
  v62 = *(uint32_t **)(*v86 + 4);
  if ( (unsigned int)(uintptr_t)(v62) < *(uint32_t *)(*v86 + 12) )
  {
    *v62 = (uint32_t)(uintptr_t)("Et");
    v63 = __rdtsc();
    v62[1] = v63;
    *(uint32_t *)(v61 + 4) = (uint32_t)(uintptr_t)(v62 + 3);
  }
  return v110;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::getCentre  (binary VA: 0x16d8c30)
// Original: hkpConvexTransformShape::getCentre
// ----------------------------------------------------------------------------
void * hkpConvexTransformShape::getCentre(hkpConvexTransformShape::Self *self, hkVector4f::Self *a2)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v30)) > _g4_s2 ? (20u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v31)) > _g4_s3 ? (24u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v32)) > _g4_s4 ? (28u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v33)) > _g4_s5 ? (32u + sizeof(_g4_t_v33)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);

  (*(void (**)(uint32_t, float *))(**((uint32_t **)self + 6) + 48))(*((uint32_t *)self + 6), v33);
  v3 = v33[1];
  v4 = v33[0] * *((float *)self + 16);
  v5 = v33[2];
  v6 = v33[0] - *((float *)self + 11);
  v7 = v33[1] - *((float *)self + 19);
  v8 = v33[2] - *((float *)self + 23);
  *(float *)a2 = v4;
  v9 = v3 * *((float *)self + 17);
  v10 = v33[3];
  v11 = v33[3] - 0.0;
  *((float *)a2 + 1) = v9;
  v12 = v5 * *((float *)self + 18);
  *((float *)a2 + 2) = v12;
  v13 = v10 * *((float *)self + 19);
  *((float *)a2 + 3) = v13;
  v14 = (float)(v6 * *((float *)self + 20)) + v4;
  *(float *)a2 = v14;
  v15 = (float)(v7 * *((float *)self + 21)) + v9;
  *((float *)a2 + 1) = v15;
  v16 = (float)(v8 * *((float *)self + 22)) + v12;
  *((float *)a2 + 2) = v16;
  v17 = v13 + (float)(*((float *)self + 23) * v11);
  *((float *)a2 + 3) = v17;
  v28 = v17;
  v18 = *((float *)self + 12);
  v32 = *((float *)self + 15);
  v31 = *((float *)self + 13);
  v30 = *((float *)self + 14);
  v29 = (float)(v32 * v32) - 0.5;
  v19 = (float)((float)(v18 * v14) + (float)(v31 * v15)) + (float)(v30 * v16);
  v20 = v18 * v16;
  v21 = (float)((float)(v29 * v14) + (float)(v18 * v19))
      + (float)((float)((float)(v31 * v16) - (float)(v30 * v15)) * v32);
  v22 = (float)(v29 * v15) + (float)(v31 * v19);
  v23 = v21 + v21;
  v24 = (float)(v15 * *((float *)self + 12)) - (float)(v14 * v31);
  *(float *)a2 = v23;
  v25 = (float)(v22 + (float)((float)((float)(v30 * v14) - v20) * v32))
      + (float)(v22 + (float)((float)((float)(v30 * v14) - v20) * v32));
  *((float *)a2 + 1) = v25;
  v26 = (float)((float)((float)(v16 * v29) + (float)(v30 * v19)) + (float)(v24 * v32))
      + (float)((float)((float)(v16 * v29) + (float)(v30 * v19)) + (float)(v24 * v32));
  v27 = (float)((float)((float)(v29 * v28) + (float)(v19 * v32)) + (float)(0.0 * v32))
      + (float)((float)((float)(v29 * v28) + (float)(v19 * v32)) + (float)(0.0 * v32));
  *((float *)a2 + 2) = v26;
  *((float *)a2 + 3) = v27;
  *(float *)a2 = *((float *)self + 8) + v23;
  *((float *)a2 + 1) = v25 + *((float *)self + 9);
  *((float *)a2 + 2) = v26 + *((float *)self + 10);
  *((float *)a2 + 3) = v27 + *((float *)self + 11);
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::getFirstVertex  (binary VA: 0x16d8e80)
// Original: hkpConvexTransformShape::getFirstVertex
// ----------------------------------------------------------------------------
void * hkpConvexTransformShape::getFirstVertex(hkpConvexTransformShape::Self *self, hkVector4f::Self *a2)
{
  float v3; // xmm6_4
  float v4; // xmm7_4
  float v5; // xmm4_4
  float v6; // xmm1_4
  float v7; // xmm2_4
  float v8; // xmm3_4
  float v9; // xmm6_4
  float v10; // xmm0_4
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm0_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm0_4
  float v18; // xmm0_4
  float v19; // xmm4_4
  float v20; // xmm5_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef float _g4_t_v32;
  typedef float _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (12u + sizeof(_g4_t_v28)) > _g4_s0 ? (12u + sizeof(_g4_t_v28)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v29)) > _g4_s1 ? (16u + sizeof(_g4_t_v29)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v30)) > _g4_s2 ? (20u + sizeof(_g4_t_v30)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v31)) > _g4_s3 ? (24u + sizeof(_g4_t_v31)) : _g4_s3,
    _g4_s5 = (28u + sizeof(_g4_t_v32)) > _g4_s4 ? (28u + sizeof(_g4_t_v32)) : _g4_s4,
    _g4_s6 = (32u + sizeof(_g4_t_v33)) > _g4_s5 ? (32u + sizeof(_g4_t_v33)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 12u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 24u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 28u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 32u);

  (*(void (**)(uint32_t, float *))(**((uint32_t **)self + 6) + 76))(*((uint32_t *)self + 6), v33);
  v3 = v33[1];
  v4 = v33[0] * *((float *)self + 16);
  v5 = v33[2];
  v6 = v33[0] - *((float *)self + 11);
  v7 = v33[1] - *((float *)self + 19);
  v8 = v33[2] - *((float *)self + 23);
  *(float *)a2 = v4;
  v9 = v3 * *((float *)self + 17);
  v10 = v33[3];
  v11 = v33[3] - 0.0;
  *((float *)a2 + 1) = v9;
  v12 = v5 * *((float *)self + 18);
  *((float *)a2 + 2) = v12;
  v13 = v10 * *((float *)self + 19);
  *((float *)a2 + 3) = v13;
  v14 = (float)(v6 * *((float *)self + 20)) + v4;
  *(float *)a2 = v14;
  v15 = (float)(v7 * *((float *)self + 21)) + v9;
  *((float *)a2 + 1) = v15;
  v16 = (float)(v8 * *((float *)self + 22)) + v12;
  *((float *)a2 + 2) = v16;
  v17 = v13 + (float)(*((float *)self + 23) * v11);
  *((float *)a2 + 3) = v17;
  v28 = v17;
  v18 = *((float *)self + 12);
  v32 = *((float *)self + 15);
  v31 = *((float *)self + 13);
  v30 = *((float *)self + 14);
  v29 = (float)(v32 * v32) - 0.5;
  v19 = (float)((float)(v18 * v14) + (float)(v31 * v15)) + (float)(v30 * v16);
  v20 = v18 * v16;
  v21 = (float)((float)(v29 * v14) + (float)(v18 * v19))
      + (float)((float)((float)(v31 * v16) - (float)(v30 * v15)) * v32);
  v22 = (float)(v29 * v15) + (float)(v31 * v19);
  v23 = v21 + v21;
  v24 = (float)(v15 * *((float *)self + 12)) - (float)(v14 * v31);
  *(float *)a2 = v23;
  v25 = (float)(v22 + (float)((float)((float)(v30 * v14) - v20) * v32))
      + (float)(v22 + (float)((float)((float)(v30 * v14) - v20) * v32));
  *((float *)a2 + 1) = v25;
  v26 = (float)((float)((float)(v16 * v29) + (float)(v30 * v19)) + (float)(v24 * v32))
      + (float)((float)((float)(v16 * v29) + (float)(v30 * v19)) + (float)(v24 * v32));
  v27 = (float)((float)((float)(v29 * v28) + (float)(v19 * v32)) + (float)(0.0 * v32))
      + (float)((float)((float)(v29 * v28) + (float)(v19 * v32)) + (float)(0.0 * v32));
  *((float *)a2 + 2) = v26;
  *((float *)a2 + 3) = v27;
  *(float *)a2 = *((float *)self + 8) + v23;
  *((float *)a2 + 1) = v25 + *((float *)self + 9);
  *((float *)a2 + 2) = v26 + *((float *)self + 10);
  *((float *)a2 + 3) = v27 + *((float *)self + 11);
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::convertVertexIdsToVertices  (binary VA: 0x16d90d0)
// Original: hkpConvexTransformShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
float * hkpConvexTransformShape::convertVertexIdsToVertices(int a1, int a2, int a3, float *a4)
{
  float *result;
  float v5; // xmm2_4
  float v6; // xmm4_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm7_4
  float v11; // xmm0_4
  float v12; // xmm7_4
  float v13; // xmm3_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  float v16;

  result = (float *)(*(int (**)(uint32_t, int, int, float *))(**(uint32_t **)(a1 + 24) + 44))(
                      *(uint32_t *)(a1 + 24),
                      a2,
                      a3,
                      a4);
  if ( a3 > 0 )
  {
    result = a4;
    do
    {
      v5 = *result;
      result += 4;
      v6 = (float)(*(float *)(a1 + 64) * v5) + (float)((float)(v5 - *(float *)(a1 + 44)) * *(float *)(a1 + 80));
      v7 = (float)(*(float *)(a1 + 72) * *(result - 2))
         + (float)((float)(*(result - 2) - *(float *)(a1 + 92)) * *(float *)(a1 + 88));
      v16 = (float)(*(float *)(a1 + 60) * *(float *)(a1 + 60)) - 0.5;
      v8 = (float)(*(float *)(a1 + 68) * *(result - 3))
         + (float)((float)(*(result - 3) - *(float *)(a1 + 76)) * *(float *)(a1 + 84));
      v9 = (float)((float)(*(float *)(a1 + 48) * v6) + (float)(*(float *)(a1 + 52) * v8))
         + (float)(*(float *)(a1 + 56) * v7);
      v10 = (float)((float)(v16 * v8) + (float)(*(float *)(a1 + 52) * v9))
          + (float)((float)((float)(*(float *)(a1 + 56) * v6) - (float)(*(float *)(a1 + 48) * v7)) * *(float *)(a1 + 60));
      v11 = (float)(v16 * v7) + (float)(*(float *)(a1 + 56) * v9);
      v12 = (float)(v10 + v10) + *(float *)(a1 + 36);
      v13 = (float)((float)(v7 * *(float *)(a1 + 52)) - (float)(v8 * *(float *)(a1 + 56))) * *(float *)(a1 + 60);
      v14 = *(float *)(a1 + 60) * (float)((float)(*(float *)(a1 + 48) * v8) - (float)(*(float *)(a1 + 52) * v6));
      v15 = (float)((float)(v11 + v14) + (float)(v11 + v14)) + *(float *)(a1 + 40);
      *(result - 4) = (float)((float)((float)((float)(v6 * v16) + (float)(v9 * *(float *)(a1 + 48))) + v13)
                            + (float)((float)((float)(v6 * v16) + (float)(v9 * *(float *)(a1 + 48))) + v13))
                    + *(float *)(a1 + 32);
      *(result - 3) = v12;
      *(result - 2) = v15;
    }
    while ( result != &a4[4 * a3] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::getCollisionSpheres  (binary VA: 0x16d92a0)
// Original: hkpConvexTransformShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpConvexTransformShape::getCollisionSpheres(hkpConvexTransformShape::Self *self, hkSphere::Self *a2)
{
  int v2;
  int v3;
  int v4;
  int v5;
  int v6;
  float *v7;
  float *v8;
  float v9; // xmm2_4
  float v10; // xmm4_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm0_4
  float v17; // xmm7_4
  float v18; // xmm3_4
  float v19; // xmm6_4
  float v20; // xmm0_4
  float v22;

  v2 = (*(int (**)(uint32_t, hkSphere::Self *))(**((uint32_t **)self + 6) + 56))(*((uint32_t *)self + 6), a2);
  v3 = (*(int (**)(uint32_t))(**((uint32_t **)self + 6) + 52))(*((uint32_t *)self + 6)) - 1;
  v4 = *((uint32_t *)self + 4);
  if ( v3 >= 0 )
  {
    v5 = v3;
    v6 = 16 * v3;
    v7 = (float *)(v6 + v2);
    v8 = (float *)((char *)a2 + v6);
    do
    {
      v9 = *v7;
      --v5;
      v8 -= 4;
      v10 = *((float *)self + 16) * *v7;
      v7 -= 4;
      v11 = v10 + (float)((float)(v9 - *((float *)self + 11)) * *((float *)self + 20));
      v12 = (float)(*((float *)self + 18) * v7[6])
          + (float)((float)(v7[6] - *((float *)self + 23)) * *((float *)self + 22));
      v22 = (float)(*((float *)self + 15) * *((float *)self + 15)) - 0.5;
      v13 = (float)(*((float *)self + 17) * v7[5])
          + (float)((float)(v7[5] - *((float *)self + 19)) * *((float *)self + 21));
      v14 = (float)((float)(*((float *)self + 12) * v11) + (float)(*((float *)self + 13) * v13))
          + (float)(*((float *)self + 14) * v12);
      v15 = (float)((float)(v22 * v13) + (float)(*((float *)self + 13) * v14))
          + (float)((float)((float)(*((float *)self + 14) * v11) - (float)(*((float *)self + 12) * v12))
                  * *((float *)self + 15));
      v16 = (float)(v22 * v12) + (float)(*((float *)self + 14) * v14);
      v17 = (float)(v15 + v15) + *((float *)self + 9);
      v18 = (float)((float)(v12 * *((float *)self + 13)) - (float)(v13 * *((float *)self + 14))) * *((float *)self + 15);
      v19 = *((float *)self + 15) * (float)((float)(*((float *)self + 12) * v13) - (float)(*((float *)self + 13) * v11));
      v20 = (float)((float)(v16 + v19) + (float)(v16 + v19)) + *((float *)self + 10);
      v8[4] = (float)((float)((float)((float)(v11 * v22) + (float)(v14 * *((float *)self + 12))) + v18)
                    + (float)((float)((float)(v11 * v22) + (float)(v14 * *((float *)self + 12))) + v18))
            + *((float *)self + 8);
      *((uint32_t *)v8 + 7) = v4;
      v8[5] = v17;
      v8[6] = v20;
    }
    while ( v5 != -1 );
  }
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::Construct  (binary VA: 0x16d9490)
// Original: hkpConvexTransformShape::hkpConvexTransformShape
// ----------------------------------------------------------------------------
int hkpConvexTransformShape::Construct(uint32_t *a1, int a2, hkTransformf::Self *a3, int a4)
{
  int result;

  hkpConvexTransformShapeBase::Construct((int32_t)(uintptr_t)(a1), 11, *(uint32_t *)(a2 + 16), a2, a4);
  *a1 = ((uint32_t)(uintptr_t)&off_209B2A8);
  hkQsTransformf::setFromTransformNoScale((hkQsTransformf::Self *)(a1 + 8), a3);
  a1[20] = 0;
  a1[21] = 0;
  a1[22] = 0;
  a1[23] = 0;
  result = *(uint32_t *)(a2 + 12);
  a1[3] = result;
  return result;
}



// ============================================================================
// Address:   0x16d9520 (size: 71 bytes)
// Symbol:    _ZN23hkpConvexTransformShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpConvexTransformShape::hkpConvexTransformShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN23hkpConvexTransformShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpConvexTransformShape::Construct(
        int a1,
        int a2))(hkpConvexTransformShape::Self * self)
{
  hkpConvexShape::hkpConvexShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 11;
  *(uint32_t *)(a1 + 20) = ((uint32_t)(uintptr_t)&off_20994E8);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B2A8);
  return (void (**)(hkpConvexTransformShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209B2A8));
}
// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::setTransform  (binary VA: 0x16d9570)
// Original: hkpConvexTransformShape::setTransform
// ----------------------------------------------------------------------------
int hkpConvexTransformShape::setTransform(hkpConvexTransformShape::Self *self, const hkQsTransformf::Self *a2)
{
  float v2; // xmm7_4
  float v3; // xmm6_4
  float v4; // xmm2_4
  uint8_t v5;
  int result;
  float v7; // xmm0_4
  float v8; // xmm0_4
  __m128i v9;
  __m128i v10;
  __m128i v11;
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm2_4
  float v15; // xmm4_4
  char v16;
  float v17; // xmm2_4
  float v18; // xmm4_4
  int v19;
  int v20;
  float v21; // xmm5_4
  int v22;
  int v23;
  float v24; // xmm0_4
  float v25; // xmm5_4
  int v26;
  int v27;
  float v28; // xmm2_4
  float v29; // xmm0_4
  int v30;
  int v31;
  float v32; // xmm1_4
  float v33; // xmm1_4
  float v34; // xmm7_4
  typedef float _g4_t_v35;
  typedef int _g4_t_v36;
  typedef float _g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float *_g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v35)) > _g4_s0 ? (0u + sizeof(_g4_t_v35)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v36)) > _g4_s1 ? (8u + sizeof(_g4_t_v36)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v37)) > _g4_s2 ? (12u + sizeof(_g4_t_v37)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v38)) > _g4_s3 ? (16u + sizeof(_g4_t_v38)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v39)) > _g4_s4 ? (32u + sizeof(_g4_t_v39)) : _g4_s4,
    _g4_s6 = (36u + sizeof(_g4_t_v40)) > _g4_s5 ? (36u + sizeof(_g4_t_v40)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v41)) > _g4_s6 ? (36u + sizeof(_g4_t_v41)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v42)) > _g4_s7 ? (40u + sizeof(_g4_t_v42)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v43)) > _g4_s8 ? (40u + sizeof(_g4_t_v43)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v44)) > _g4_s9 ? (44u + sizeof(_g4_t_v44)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v45)) > _g4_s10 ? (44u + sizeof(_g4_t_v45)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v46)) > _g4_s11 ? (44u + sizeof(_g4_t_v46)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v47)) > _g4_s12 ? (48u + sizeof(_g4_t_v47)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v35 &v35 = *reinterpret_cast<_g4_t_v35 *>(_g4_sf + 0u);
  _g4_t_v36 &v36 = *reinterpret_cast<_g4_t_v36 *>(_g4_sf + 8u);
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 12u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 16u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 32u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 36u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 36u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 40u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 40u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 44u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 44u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);

  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 3);
  *((uint32_t *)self + 12) = *((uint32_t *)a2 + 4);
  *((uint32_t *)self + 13) = *((uint32_t *)a2 + 5);
  *((uint32_t *)self + 14) = *((uint32_t *)a2 + 6);
  *((uint32_t *)self + 15) = *((uint32_t *)a2 + 7);
  *((uint32_t *)self + 16) = *((uint32_t *)a2 + 8);
  *((uint32_t *)self + 17) = *((uint32_t *)a2 + 9);
  *((uint32_t *)self + 18) = *((uint32_t *)a2 + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 19) = 0;
  v2 = *((float *)a2 + 9);
  v3 = *((float *)a2 + 10);
  v44 = *((float *)a2 + 11);
  v4 = fabs(v3 - 1.0);
  v5 = (fabs(*((float *)a2 + 8) - 1.0) <= 0.00000011920929f) | (fabs(v2 - 1.0) <= 0.00000011920929f ? 2 : 0);
  result = v4 <= 0.00000011920929f ? 4 : 0;
  if ( fabs(v44 - 1.0) <= 0.00000011920929f )
    result = v4 > 0.00000011920929f ? 8 : 12;
  if ( (((uint8_t)result | v5) & 7) == 7 )
  {
    *((g4_int128_t *)self + 5) = 0;
  }
  else
  {
    v40 = *((float **)self + 6);
    v42 = fabs(*((float *)a2 + 8));
    result = G4_VCALL<int>(v40, 52);
    if ( result > 2 )
    {
      *(float *)&v36 = fabs(v2);
      v37 = fabs(v44);
      G4_VCALL<void>(v40, 24, &unk_1D12FD0, 0, v47);
      v8 = v40[4];
g4_m128_raw(v9) = LODWORD(v47[4]);
      *(float *)g4_m128_ptr<int32_t>(v9) = v47[4] - v8;
      v10 = v9;
      *(float *)g4_m128_ptr<int32_t>(v10) = (float)((float)(v47[4] - v8) - (float)(v47[0] + v8)) * 0.5;
      v45 = (float)((float)(v47[5] - v8) - (float)(v47[1] + v8)) * 0.5;
      v38 = (float)((float)(v47[0] + v8) + (float)(v47[4] - v8)) * 0.5;
      v35 = (float)((float)(v47[5] - v8) + (float)(v47[1] + v8)) * 0.5;
      v41 = (float)((float)(v47[6] - v8) - (float)(v47[2] + v8)) * 0.5;
g4_m128_raw(v11) = LODWORD(v47[7]);
      *(float *)g4_m128_ptr<int32_t>(v11) = (float)((float)(v47[7] - v8) - (float)(v8 + v47[3])) * 0.5;
      v39 = 0.5 * (float)((float)(v47[2] + v8) + (float)(v47[6] - v8));
      v12 = *((float *)self + 4);
      v13 = (float)(v45 + v12) * *(float *)&v36;
      v14 = (float)(v12 + *(float *)g4_m128_ptr<int32_t>(v10)) * v42;
      v15 = (float)(v41 + v12) * fabs(v3);
      v16 = 4 * (v15 > v12);
      if ( (float)(v37 * (float)(v12 + *(float *)g4_m128_ptr<int32_t>(v11))) > v12 )
        v16 = 4 * (v15 > v12) + 8;
      if ( (v16 & 7 | (uint8_t)((v14 > v12) | (2 * (v13 > v12)))) == 7 )
      {
        v18 = *((float *)self + 4);
      }
      else
      {
        v17 = fminf(fminf(v14, v13), v15);
        *((float *)self + 4) = v17;
        v18 = v17;
      }
      if ( *(float *)g4_m128_ptr<int32_t>(v10) == 0.0 )
      {
        v43 = 0.0;
        v21 = 0.0;
      }
      else
      {
        v19 = _mm_cvtsi128_si32(v10);
        v20 = (2130706432 - v19) & ((v19 ^ (v19 + 2139095040)) >> 31);
        v21 = (float)((float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(v10)
                                    * (float)((float)(*(float *)&v20
                                                    * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)&v20)))
                                            * (float)(2.0
                                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v10)
                                                            * (float)(*(float *)&v20
                                                                    * (float)(2.0
                                                                            - (float)(*(float *)g4_m128_ptr<int32_t>(v10)
                                                                                    * *(float *)&v20))))))))
                    * (float)((float)(*(float *)&v20 * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)&v20)))
                            * (float)(2.0
                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v10)
                                            * (float)(*(float *)&v20
                                                    * (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v10) * *(float *)&v20)))))))
            * (float)((float)(v42 * v12) - v18);
        v43 = v21;
      }
      *((float *)self + 20) = v21;
      if ( v45 == 0.0 )
      {
        v46 = 0.0;
        v25 = 0.0;
      }
      else
      {
        v22 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v45)));
        v23 = (2130706432 - v22) & ((v22 ^ (v22 + 2139095040)) >> 31);
        v24 = (float)(2.0 - (float)(v45 * (float)((float)(2.0 - (float)(v45 * *(float *)&v23)) * *(float *)&v23)))
            * (float)((float)(2.0 - (float)(v45 * *(float *)&v23)) * *(float *)&v23);
        v46 = (float)((float)(2.0 - (float)(v45 * v24)) * v24) * (float)((float)(*(float *)&v36 * v12) - v18);
        v25 = v46;
      }
      *((float *)self + 21) = v25;
      if ( v41 == 0.0 )
      {
        v29 = 0.0;
      }
      else
      {
        v26 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v41)));
        v27 = (2130706432 - v26) & ((v26 ^ (v26 + 2139095040)) >> 31);
        v28 = (float)(2.0 - (float)(v41 * (float)((float)(2.0 - (float)(v41 * *(float *)&v27)) * *(float *)&v27)))
            * (float)((float)(2.0 - (float)(v41 * *(float *)&v27)) * *(float *)&v27);
        v29 = (float)((float)(fabs(v3) * v12) - v18) * (float)((float)(2.0 - (float)(v41 * v28)) * v28);
      }
      *((float *)self + 22) = v29;
      if ( *(float *)g4_m128_ptr<int32_t>(v11) == 0.0 )
      {
        v32 = 0.0;
      }
      else
      {
        v30 = _mm_cvtsi128_si32(v11);
        v31 = (2130706432 - v30) & ((v30 ^ (v30 + 2139095040)) >> 31);
        v32 = (float)((float)(v12 * v37) - v18)
            * (float)((float)(2.0
                            - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                                    * (float)((float)(2.0
                                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                                                            * (float)((float)(2.0
                                                                            - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                                                                                    * *(float *)&v31))
                                                                    * *(float *)&v31)))
                                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v31))
                                                    * *(float *)&v31))))
                    * (float)((float)(2.0
                                    - (float)(*(float *)g4_m128_ptr<int32_t>(v11)
                                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v31))
                                                    * *(float *)&v31)))
                            * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v11) * *(float *)&v31)) * *(float *)&v31)));
      }
      *((float *)self + 23) = v32;
      result = *((uint32_t *)a2 + 8);
      v33 = v43;
      if ( result < 0 )
        v33 = -v43;
      *((float *)self + 20) = v33;
      v34 = v46;
      if ( *((int *)a2 + 9) < 0 )
        v34 = -v46;
      *((float *)self + 21) = v34;
      if ( *((int *)a2 + 10) < 0 )
        v29 = -v29;
      *((float *)self + 11) = v38;
      *((float *)self + 19) = v35;
      *((float *)self + 22) = v29;
      *((float *)self + 23) = v39;
    }
    else
    {
      v7 = v42 * v40[4];
      *((uint32_t *)self + 20) = 0;
      *((uint32_t *)self + 21) = 0;
      *((uint32_t *)self + 22) = 0;
      *((uint32_t *)self + 23) = 0;
      *((float *)self + 4) = v7;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpConvexTransformShape::Construct  (binary VA: 0x16d9bd0)
// Original: hkpConvexTransformShape::hkpConvexTransformShape
// ----------------------------------------------------------------------------
int hkpConvexTransformShape::Construct(hkpConvexTransformShape::Self *a1, int a2, hkQsTransformf::Self *a3, int a4)
{
  int result;

  hkpConvexTransformShapeBase::Construct((int32_t)(uintptr_t)(a1), 11, *(uint32_t *)(a2 + 16), a2, a4);
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B2A8);
  hkpConvexTransformShape::setTransform(a1, a3);
  result = *(uint32_t *)(a2 + 12);
  *((uint32_t *)a1 + 3) = result;
  return result;
}


