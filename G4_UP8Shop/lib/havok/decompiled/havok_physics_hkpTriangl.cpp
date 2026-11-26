#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpTriangl.h"

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::staticClass  (binary VA: 0x1692b70)
// Original: hkpTriangleShape::staticClass
// ----------------------------------------------------------------------------
void * hkpTriangleShape::staticClass()
{
  return &hkpTriangleShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::getSize  (binary VA: 0x16c5780)
// Original: hkpTriangleShape::getSize
// ----------------------------------------------------------------------------
int hkpTriangleShape::getSize()
{
  return 96;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::calcSizeForSpu  (binary VA: 0x16c5790)
// Original: hkpTriangleShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpTriangleShape::calcSizeForSpu()
{
  return 96;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::getNumCollisionSpheres  (binary VA: 0x16c57a0)
// Original: hkpTriangleShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpTriangleShape::getNumCollisionSpheres(hkpTriangleShape::Self *self)
{
  return 3 * *((uint8_t *)self + 23) + 3;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::getFirstVertex  (binary VA: 0x16c57b0)
// Original: hkpTriangleShape::getFirstVertex
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpTriangleShape::getFirstVertex(hkpTriangleShape::Self *self, hkVector4f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::convertVertexIdsToVertices  (binary VA: 0x16c57d0)
// Original: hkpTriangleShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
int hkpTriangleShape::convertVertexIdsToVertices(float *a1, uint16_t *a2, int a3, int a4)
{
  uint16_t *v4;
  int result;
  int v6;
  float *v7;
  float v8; // xmm0_4

  v4 = a2;
  result = a4;
  if ( a3 > 0 )
  {
    do
    {
      v6 = *v4;
      result += 16;
      ++v4;
      v7 = &a1[4 * dword_2125290[v6] + 8];
      *(float *)(result - 16) = *v7;
      *(float *)(result - 12) = v7[1];
      *(float *)(result - 8) = v7[2];
      *(float *)(result - 4) = v7[3];
      v8 = flt_1D16580[*(v4 - 1)];
      *(float *)(result - 16) = (float)(a1[20] * v8) + *(float *)(result - 16);
      *(float *)(result - 12) = (float)(a1[21] * v8) + *(float *)(result - 12);
      *(float *)(result - 8) = (float)(a1[22] * v8) + *(float *)(result - 8);
      *(float *)(result - 4) = (float)(v8 * a1[23]) + *(float *)(result - 4);
      *(uint32_t *)(result - 4) = *(v4 - 1) | 0x3F000000;
    }
    while ( v4 != &a2[a3] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::getCentre  (binary VA: 0x16c58c0)
// Original: hkpTriangleShape::getCentre
// ----------------------------------------------------------------------------
void * hkpTriangleShape::getCentre(hkpTriangleShape::Self *self, hkVector4f::Self *a2)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v11; // xmm4_4

  v3 = *((float *)self + 8) + *((float *)self + 12);
  *(float *)a2 = v3;
  v4 = *((float *)self + 9) + *((float *)self + 13);
  *((float *)a2 + 1) = v4;
  v5 = *((float *)self + 10) + *((float *)self + 14);
  *((float *)a2 + 2) = v5;
  v6 = *((float *)self + 11) + *((float *)self + 15);
  *((float *)a2 + 3) = v6;
  v7 = v3 + *((float *)self + 16);
  *(float *)a2 = v7;
  v8 = v4 + *((float *)self + 17);
  *((float *)a2 + 1) = v8;
  v9 = v5 + *((float *)self + 18);
  *((float *)a2 + 2) = v9;
  v11 = *((float *)self + 19) + v6;
  *(float *)a2 = v7 * 0.33333334f;
  *((float *)a2 + 1) = v8 * 0.33333334f;
  *((float *)a2 + 2) = v9 * 0.33333334f;
  *((float *)a2 + 3) = v11 * 0.33333334f;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::getCollisionSpheres  (binary VA: 0x16c5970)
// Original: hkpTriangleShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpTriangleShape::getCollisionSpheres(hkpTriangleShape::Self *self, hkSphere::Self *a2)
{
  hkSphere::Self *result;
  int v3; // xmm0_4
  float v4; // xmm1_4
  float v5; // xmm1_4
  float v6; // xmm1_4

  result = a2;
  v3 = *((uint32_t *)self + 4);
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = v3;
  *((uint32_t *)a2 + 4) = *((uint32_t *)self + 12);
  *((uint32_t *)a2 + 5) = *((uint32_t *)self + 13);
  *((uint32_t *)a2 + 6) = *((uint32_t *)self + 14);
  *((uint32_t *)a2 + 7) = v3;
  *((uint32_t *)a2 + 8) = *((uint32_t *)self + 16);
  *((uint32_t *)a2 + 9) = *((uint32_t *)self + 17);
  *((uint32_t *)a2 + 10) = *((uint32_t *)self + 18);
  *((uint32_t *)a2 + 11) = v3;
  if ( *((uint8_t *)self + 23) != 0 )
  {
    *((float *)a2 + 12) = *((float *)self + 8) + *((float *)self + 20);
    *((float *)a2 + 13) = *((float *)self + 9) + *((float *)self + 21);
    v4 = *((float *)self + 10) + *((float *)self + 22);
    *((uint32_t *)a2 + 15) = v3;
    *((float *)a2 + 14) = v4;
    *((float *)a2 + 16) = *((float *)self + 12) + *((float *)self + 20);
    *((float *)a2 + 17) = *((float *)self + 13) + *((float *)self + 21);
    v5 = *((float *)self + 14) + *((float *)self + 22);
    *((uint32_t *)a2 + 19) = v3;
    *((float *)a2 + 18) = v5;
    *((float *)a2 + 20) = *((float *)self + 16) + *((float *)self + 20);
    *((float *)a2 + 21) = *((float *)self + 17) + *((float *)self + 21);
    v6 = *((float *)self + 18) + *((float *)self + 22);
    *((uint32_t *)a2 + 23) = v3;
    *((float *)a2 + 22) = v6;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::Destroy  (binary VA: 0x16c5a90)
// Original: hkpTriangleShape::~hkpTriangleShape
// ----------------------------------------------------------------------------
void hkpTriangleShape::Destroy(hkpTriangleShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::getAabb  (binary VA: 0x16c5ab0)
// Original: hkpTriangleShape::getAabb
// ----------------------------------------------------------------------------
int hkpTriangleShape::getAabb(hkpTriangleShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  __m128i v4;
  __m128i v5;
  unsigned int v6;
  __m128i v7;
  __m128i v8;
  float v9; // xmm1_4
  float v10; // xmm6_4
  float v11; // xmm4_4
  float v12; // xmm7_4
  float v13; // xmm5_4
  unsigned int v14;
  float v15;
  __m128i v16;
  float v17; // xmm1_4
  int result;
  float v19;
  float v20; // xmm6_4
  float v21; // xmm5_4
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef unsigned int _g4_t_v25[4];
  typedef float _g4_t_v26[4];
  typedef float _g4_t_v27[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v23)) > _g4_s1 ? (8u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v24)) > _g4_s2 ? (12u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v26)) > _g4_s4 ? (32u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (48u + sizeof(_g4_t_v27)) > _g4_s5 ? (48u + sizeof(_g4_t_v27)) : _g4_s5
  };
  alignas(16) uint8_t _g4_sf[_g4_s6];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 8u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 12u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 32u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 48u);

  v22 = a3 + *((float *)self + 4);
  hkVector4f::setTransformedPos((hkVector4f::Self *)v25, a2, (hkpTriangleShape::Self *)((char *)self + 32));
  hkVector4f::setTransformedPos((hkVector4f::Self *)v26, a2, (hkpTriangleShape::Self *)((char *)self + 48));
  hkVector4f::setTransformedPos((hkVector4f::Self *)v27, a2, (hkpTriangleShape::Self *)((char *)self + 64));
g4_m128_raw(v4) = v25[0];
  *(float *)g4_m128_ptr<int32_t>(v4) = fminf(*(float *)v25, v26[0]);
g4_m128_raw(v5) = v25[1];
  v6 = _mm_cvtsi128_si32(v4);
g4_m128_raw(v7) = v25[2];
  v8 = _mm_cvtsi32_si128(v6);
  *(float *)g4_m128_ptr<int32_t>(v5) = fminf(fminf(*(float *)&v25[1], v26[1]), v27[1]);
  *(float *)g4_m128_ptr<int32_t>(v8) = fminf(*(float *)g4_m128_ptr<int32_t>(v8), v27[0]);
  *(float *)g4_m128_ptr<int32_t>(v7) = fminf(fminf(*(float *)&v25[2], v26[2]), v27[2]);
  v9 = fminf(fminf(*(float *)&v25[3], v26[3]), v27[3]);
  v10 = fmaxf(fmaxf(*(float *)v25, v26[0]), v27[0]);
  v11 = fmaxf(fmaxf(*(float *)&v25[1], v26[1]), v27[1]);
  v12 = fmaxf(fmaxf(*(float *)&v25[2], v26[2]), v27[2]);
  v13 = fmaxf(fmaxf(*(float *)&v25[3], v26[3]), v27[3]);
  *((uint32_t *)a4 + 2) =g4_m128_lane<int32_t>(v7, 0);
  v14 = _mm_cvtsi128_si32(v8);
  *((float *)a4 + 3) = v9;
  v15 = COERCE_FLOAT(_mm_cvtsi128_si32(v5));
  *((float *)a4 + 4) = v10;
  *((float *)a4 + 5) = v11;
  *((float *)a4 + 6) = v12;
  *((float *)a4 + 7) = v13;
  *(uint32_t *)a4 =g4_m128_lane<int32_t>(v8, 0);
  *((uint32_t *)a4 + 1) =g4_m128_lane<int32_t>(v5, 0);
  v24 = *(float *)g4_m128_ptr<int32_t>(v8) + *((float *)self + 20);
  *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v5) + *((float *)self + 21);
  v16 = _mm_cvtsi32_si128(v14);
  *(float *)g4_m128_ptr<int32_t>(v16) = fminf(*(float *)g4_m128_ptr<int32_t>(v16), v24);
  *(float *)g4_m128_ptr<int32_t>(v7) = fminf(*(float *)g4_m128_ptr<int32_t>(v7), *((float *)self + 22) + *(float *)g4_m128_ptr<int32_t>(v7));
  v17 = fminf(v9, *((float *)self + 23) + v9);
  *(uint32_t *)a4 =g4_m128_lane<int32_t>(v16, 0);
  *(float *)&result = COERCE_FLOAT(_mm_cvtsi128_si32(v16));
  v19 = COERCE_FLOAT(_mm_cvtsi128_si32(v7));
  *(float *)g4_m128_ptr<int32_t>(v16) = fminf(v15, *(float *)g4_m128_ptr<int32_t>(v8));
  *((uint32_t *)a4 + 2) =g4_m128_lane<int32_t>(v7, 0);
  *((float *)a4 + 3) = v17;
  *((uint32_t *)a4 + 1) =g4_m128_lane<int32_t>(v16, 0);
  v20 = fmaxf(v10, *((float *)self + 20) + v10) + v22;
  v23 = *((float *)self + 21) + v11;
  v21 = fmaxf(v13, *((float *)self + 23) + v13) + v22;
  *(float *)g4_m128_ptr<int32_t>(v7) = *((float *)self + 22) + v12;
  *((float *)a4 + 1) = *(float *)g4_m128_ptr<int32_t>(v16) - v22;
  *((float *)a4 + 3) = v17 - v22;
  *((float *)a4 + 4) = v20;
  *((float *)a4 + 7) = v21;
  *((float *)a4 + 5) = fmaxf(v11, v23) + v22;
  *(float *)a4 = *(float *)&result - v22;
  *((float *)a4 + 6) = fmaxf(v12, *(float *)g4_m128_ptr<int32_t>(v7)) + v22;
  *((float *)a4 + 2) = v19 - v22;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::Destroy_ea16c5d00  (binary VA: 0x16c5d00)
// Original: hkpTriangleShape::~hkpTriangleShape
// ----------------------------------------------------------------------------
void hkpTriangleShape::Destroy_ea16c5d00(hkpTriangleShape::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::castRayBundle  (binary VA: 0x16c5d60)
// Original: hkpTriangleShape::castRayBundle
// ----------------------------------------------------------------------------
int * hkpTriangleShape::castRayBundle(int *a1, int a2, int a3, uint32_t *a4)
{
  int *address;
  uint32_t *v5;
  uint64_t v6; // rax
  int v7;
  uint32_t *v8;
  uint64_t v9; // rax
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v11 = *address;
  v5 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v5) < *(uint32_t *)(*address + 12) )
  {
    *v5 = (uint32_t)(uintptr_t)("TtrayBundleTriangle");
    v6 = __rdtsc();
    v5[1] = v6;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v5 + 3);
  }
  v12 = a4[4];
  v14 = a4[44];
  v15 = a4[64];
  v13 = a4[24];
  hkcdRayCastTriangle::hkcdSegmentBundleTriangleIntersect(a1);
  v7 = *a1;
  if ( (*a1 & 1) != 0 )
  {
    *a4 = 0;
    a4[4] = v12;
    a4[1] = 0;
    a4[2] = 0;
    a4[3] = 0;
    a4[a4[16] + 8] = -1;
  }
  if ( (v7 & 2) != 0 )
  {
    a4[24] = v13;
    a4[20] = 0;
    a4[21] = 0;
    a4[22] = 0;
    a4[23] = 0;
    a4[a4[36] + 28] = -1;
  }
  if ( (v7 & 4) != 0 )
  {
    a4[44] = v14;
    a4[40] = 0;
    a4[41] = 0;
    a4[42] = 0;
    a4[43] = 0;
    a4[a4[56] + 48] = -1;
  }
  if ( (v7 & 8) != 0 )
  {
    a4[64] = v15;
    a4[60] = 0;
    a4[61] = 0;
    a4[62] = 0;
    a4[63] = 0;
    a4[a4[76] + 68] = -1;
  }
  v8 = *(uint32_t **)(v11 + 4);
  if ( (unsigned int)(uintptr_t)(v8) < *(uint32_t *)(v11 + 12) )
  {
    *v8 = (uint32_t)(uintptr_t)("Et");
    v9 = __rdtsc();
    v8[1] = v9;
    *(uint32_t *)(v11 + 4) = (uint32_t)(uintptr_t)(v8 + 3);
  }
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::getSupportingVertex  (binary VA: 0x16c6240)
// Original: hkpTriangleShape::getSupportingVertex
// ----------------------------------------------------------------------------
int hkpTriangleShape::getSupportingVertex(float *a1, float *a2, float *a3)
{
  float v3; // xmm4_4
  float *v4;
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  int v8;
  int v9;
  float v10; // xmm2_4
  float v11; // xmm0_4
  int v13;
  int v14;

  v3 = a2[1];
  v4 = a1 + 8;
  v5 = a2[2];
  v6 = (float)((float)(a1[12] * *a2) + (float)(a1[13] * v3)) + (float)(a1[14] * v5);
  v7 = (float)((float)(*a2 * a1[16]) + (float)(v3 * a1[17])) + (float)(v5 * a1[18]);
  if ( v6 >= (float)((float)((float)(a1[8] * *a2) + (float)(a1[9] * v3)) + (float)(a1[10] * v5)) )
  {
    v8 = 4;
    v13 = 1;
  }
  else
  {
    v6 = (float)((float)(a1[8] * *a2) + (float)(a1[9] * v3)) + (float)(a1[10] * v5);
    v8 = 0;
    v13 = 0;
  }
  HIWORD(v9) = 0;
  if ( v7 >= v6 )
    v8 = 8;
  LOWORD(v9) = 2;
  if ( v7 < v6 )
    v9 = v13;
  v14 = v9;
  *a3 = a1[v8 + 8];
  a3[1] = v4[v8 + 1];
  a3[2] = v4[v8 + 2];
  a3[3] = v4[v8 + 3];
  v10 = a1[20];
  if ( (float)((float)((float)(*a2 * v10) + (float)(a2[1] * a1[21])) + (float)(a2[2] * a1[22])) > 0.0 )
  {
    v11 = a3[1];
    v14 = v9 + 3;
    *a3 = v10 + *a3;
    a3[1] = v11 + a1[21];
    a3[2] = a3[2] + a1[22];
    a3[3] = a3[3] + a1[23];
  }
  *((uint32_t *)a3 + 3) = v14 | 0x3F000000;
  return v14 | 0x3F000000;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::castRay  (binary VA: 0x16c63b0)
// Original: hkpTriangleShape::castRay
// ----------------------------------------------------------------------------
char * hkpTriangleShape::castRay(char *a1, float *a2, float *a3, int a4)
{
  int *address;
  int v5;
  uint32_t *v6;
  uint64_t v7; // rax
  float v8; // xmm7_4
  bool v9;
  char v10;
  uint8_t v11;
  char v12;
  char v13;
  char v14;
  float v15; // xmm0_4
  float v16; // xmm4_4
  float v17; // xmm5_4
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v20; // xmm3_4
  __m128i v21;
  __m128i v22;
  __m128i v23;
  int v24;
  int v25; // xmm3_4
  float v26;
  float v27; // xmm0_4
  int v28;
  char v29; // di
  float v30;
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm4_4
  float v35; // xmm5_4
  float v36; // xmm7_4
  float v37; // xmm1_4
  int v38;
  int v39;
  float v40; // xmm3_4
  float v41; // xmm2_4
  __m128i v42;
  float v43; // xmm5_4
  int v44;
  float v45; // xmm2_4
  float v46; // xmm4_4
  float v47; // xmm3_4
  float v48; // xmm5_4
  int v49;
  char v50; // si
  int v51;
  uint32_t *v52;
  uint64_t v53; // rax
  float v55;
  float v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  int *v64;
  float v65;
  float v66;
  float v67;
  float v68;
  float v69;
  float v70;
  float v71;
  float v72;
  float v73;
  float v74;
  float v75;
  float v76;
  float v77;
  float v78;
  float v79;
  float v80;
  float v81;
  float v82;
  int v83;
  float v84;

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v5 = *address;
  v64 = address;
  v6 = *(uint32_t **)(*address + 4);
  v83 = *(uint32_t *)(v5 + 4);
  if ( (unsigned int)(uintptr_t)(v6) < *(uint32_t *)(v5 + 12) )
  {
    *v6 = (uint32_t)(uintptr_t)("TtrcTriangle");
    v7 = __rdtsc();
    *(uint32_t *)(v83 + 4) = v7;
    *(uint32_t *)(v5 + 4) = v83 + 12;
  }
  v68 = *a3;
  v8 = a3[4] - *a3;
  v66 = a3[1];
  v9 = false;
  v70 = a3[5] - v66;
  v65 = a3[2];
  v72 = a3[6] - v65;
  if ( v8 == 0.0 )
    v9 = !__builtin_isnan(v8);
  if ( __builtin_isnan(v70) || (v10 = 2, v70 != 0.0) )
    v10 = 0;
  v11 = v9 | v10;
  if ( v72 == 0.0 )
  {
    v12 = 12;
    v13 = 4;
  }
  else
  {
    v12 = 8;
    v13 = 0;
  }
  if ( 0.0 != 1.0 )
    v12 = v13;
  v14 = v11 | v12;
  if ( ((v11 | (uint8_t)v12) & 1) != 0 )
    v8 = 0.0;
  if ( (v14 & 2) != 0 )
    v70 = 0.0;
  if ( (v14 & 4) != 0 )
    v72 = 0.0;
  v15 = a2[9];
  v62 = a2[13];
  v63 = a2[12];
  v61 = a2[14];
  v16 = a2[8];
  v17 = v61 - a2[10];
  v78 = v62 - v15;
  v60 = a2[16];
  v81 = v16;
  v76 = v15;
  v59 = a2[17];
  v18 = v59 - v15;
  v19 = a2[18];
  v74 = a2[10];
  v58 = v19;
  v20 = (float)(v63 - v16) * v18;
g4_m128_raw(v22) = LODWORD(v68);
  v84 = (float)(v78 * (float)(v19 - v74)) - (float)(v17 * v18);
g4_m128_raw(v21) = LODWORD(v84);
  v80 = (float)(v17 * (float)(v60 - v16)) - (float)((float)(v19 - v74) * (float)(v63 - v16));
  v79 = v20 - (float)((float)(v60 - v16) * v78);
  *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)((float)(v68 - v16) * v84) + (float)((float)(v66 - v76) * v80))
                          + (float)((float)(v65 - v74) * v79);
  v23 = v22;
  *(float *)g4_m128_ptr<int32_t>(v21) = (float)((float)(v84 * v8) + (float)(v70 * v80)) + (float)(v72 * v79);
  v24 = _mm_cvtsi128_si32(v21);
  *(float *)g4_m128_ptr<int32_t>(v23) = *(float *)g4_m128_ptr<int32_t>(v22) + *(float *)g4_m128_ptr<int32_t>(v21);
  v25 = (2130706432 - v24) & ((v24 ^ (v24 + 2139095040)) >> 31);
  v26 = COERCE_FLOAT(_mm_cvtsi128_si32(v23));
  v27 = -(float)((float)((float)(2.0
                               - (float)(*(float *)g4_m128_ptr<int32_t>(v21)
                                       * (float)((float)(2.0
                                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v21)
                                                               * (float)((float)(2.0
                                                                               - (float)(*(float *)g4_m128_ptr<int32_t>(v21)
                                                                                       * *(float *)&v25))
                                                                       * *(float *)&v25)))
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)&v25))
                                                       * *(float *)&v25))))
                       * (float)((float)(2.0
                                       - (float)(*(float *)g4_m128_ptr<int32_t>(v21)
                                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)&v25))
                                                       * *(float *)&v25)))
                               * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v21) * *(float *)&v25))
                                       * *(float *)&v25)))
               * *(float *)g4_m128_ptr<int32_t>(v22));
  if ( __builtin_isnan(v26) || (v28 = 15, v26 != 0.0) )
    v28 = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(v22) != 0.0 )
    v28 = 15;
  if ( (float)(v26 * *(float *)g4_m128_ptr<int32_t>(v22)) < 0.0 )
    v28 = 0;
  if ( *(float *)(a4 + 16) <= v27 )
    goto LABEL_36;
  v29 = ~(uint8_t)v28;
  if ( (~v28 & 0xF) == 0 )
    goto LABEL_36;
  if ( _mm_cvtsi128_si32(v22) < 0 )
  {
    v30 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_m128_from<__m128i>(_mm_xor_ps(g4_m128_from<__m128>(LODWORD(v84)), *(__m128 *)&dword_1C7C1B0))));
    v57 = -v79;
    v56 = -v80;
    v55 = -0.0;
  }
  else
  {
    v30 = v84;
    v57 = v79;
    v56 = v80;
    v55 = 0.0;
  }
  v31 = (float)(v72 * v27) + v65;
  v32 = v68 + (float)(v8 * v27);
  v33 = (float)(v70 * v27) + v66;
  v73 = v74 - v31;
  v69 = v81 - v32;
  v71 = v62 - v33;
  v75 = v63 - v32;
  v67 = v76 - v33;
  v34 = v60 - v32;
  v35 = v59 - v33;
  v77 = (float)((float)(v80 * v80) + (float)(v84 * v84)) + (float)(v79 * v79);
  v82 = (float)((float)((float)((float)(v69 * (float)(v58 - v31)) - (float)(v73 * v34)) * v80)
              + (float)((float)((float)(v73 * v35) - (float)(v67 * (float)(v58 - v31))) * v84))
      + (float)((float)((float)(v67 * v34) - (float)(v69 * v35)) * v79);
  v36 = (float)((float)((float)((float)(v71 * (float)(v58 - v31)) - (float)((float)(v61 - v31) * v35)) * v84)
              + (float)((float)((float)((float)(v61 - v31) * v34) - (float)((float)(v58 - v31) * v75)) * v80))
      + (float)((float)((float)(v35 * v75) - (float)(v34 * v71)) * v79);
  v37 = (float)((float)((float)((float)(v67 * (float)(v61 - v31)) - (float)(v71 * v73)) * v84)
              + (float)((float)((float)(v73 * v75) - (float)((float)(v61 - v31) * v69)) * v80))
      + (float)((float)((float)(v71 * v69) - (float)(v75 * v67)) * v79);
  if ( v77 <= 0.0 )
  {
    v44 = LODWORD(v55);
    v43 = 0.0;
  }
  else
  {
    v38 = _mm_cvtsi128_si32(g4_m128_from<__m128i>(LODWORD(v77)));
    v39 = ((v38 + 2139095040) >> 31) & (1597463174 - (v38 >> 1));
    v40 = (float)(*(float *)&v39 * 1.5)
        - (float)((float)((float)(v77 * 0.5) * *(float *)&v39) * (float)(*(float *)&v39 * *(float *)&v39));
    v41 = (float)(v40 * 1.5) - (float)((float)((float)(v77 * 0.5) * v40) * (float)(v40 * v40));
g4_m128_raw(v42) = LODWORD(v55);
    v43 = (float)(1.5 * v41) - (float)((float)((float)(v77 * 0.5) * v41) * (float)(v41 * v41));
    *(float *)g4_m128_ptr<int32_t>(v42) = v55 * v43;
    v44 = _mm_cvtsi128_si32(v42);
  }
  v45 = (float)-v77 * 0.0001f;
  v46 = v30 * v43;
  v47 = v56 * v43;
  v48 = v43 * v57;
  v49 = v82 >= v45 ? 4 : 0;
  if ( v77 >= v45 )
    v49 = v82 < v45 ? 8 : 12;
  if ( ((v49 | (v37 >= v45) | (v36 < v45 ? 0 : 2)) & v29 & 7) == 7 )
  {
    *(float *)a4 = v46;
    *(float *)(a4 + 4) = v47;
    *(float *)(a4 + 8) = v48;
    *(float *)(a4 + 16) = v27;
    *(uint32_t *)(a4 + 12) = v44;
    *(uint32_t *)(a4 + 4 * *(uint32_t *)(a4 + 64) + 32) = -1;
    v50 = 1;
  }
  else
  {
LABEL_36:
    v50 = 0;
  }
  v51 = *v64;
  v52 = *(uint32_t **)(*v64 + 4);
  if ( (unsigned int)(uintptr_t)(v52) < *(uint32_t *)(*v64 + 12) )
  {
    *v52 = (uint32_t)(uintptr_t)("Et");
    v53 = __rdtsc();
    v52[1] = v53;
    *(uint32_t *)(v51 + 4) = (uint32_t)(uintptr_t)(v52 + 3);
  }
  *a1 = v50;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpTriangleShape::weldContactPoint  (binary VA: 0x16c6b30)
// Original: hkpTriangleShape::weldContactPoint
// ----------------------------------------------------------------------------
int hkpTriangleShape::weldContactPoint(hkpTriangleShape::Self *self, uint16_t *a2, uint8_t *a3, hkVector4f::Self *a4, const hkTransformf::Self *a5, const hkpConvexShape::Self *a6, const hkTransformf::Self *a7, hkVector4f::Self *a8)
{
  int v8;
  int v9;
  int v10;
  int v11;
  __m128i v12;
  float v13; // xmm1_4
  float v14; // xmm0_4
  __m128i v15;
  float v16; // xmm3_4
  float v17; // xmm7_4
  float v18; // xmm0_4
  float v19; // xmm6_4
  float v20; // xmm1_4
  float v21; // xmm7_4
  float v22; // xmm0_4
  float v23; // xmm6_4
  __m128i v24;
  float v25; // xmm1_4
  __m128i v26;
  float v27; // xmm5_4
  int v28;
  float v29; // xmm4_4
  float v30; // xmm3_4
  float *v31;
  float *v32;
  float v33; // xmm1_4
  float v34; // xmm0_4
  __m128i v35;
  __m128i v36;
  float v37; // xmm5_4
  int v38;
  int v39;
  float v40; // xmm4_4
  float v41; // xmm3_4
  float v42; // xmm6_4
  float v43; // xmm7_4
  int v44;
  __m128i v45;
  float v46; // xmm6_4
  float *v47;
  float v49; // xmm0_4
  float v50; // xmm5_4
  float v51; // xmm6_4
  float v52; // xmm4_4
  float v53; // xmm5_4
  float v54; // xmm3_4
  float v55; // xmm0_4
  __m128i v56;
  float v57; // xmm4_4
  int v58; // xmm2_4
  float v59; // xmm2_4
  float v60; // xmm1_4
  float v61; // xmm2_4
  float v62; // xmm3_4
  float v63; // xmm5_4
  __m128 v64;
  __m128 v65;
  __m128 v66;
  int result;
  g4_int128_t v68;
  float *v69;
  float v70; // xmm0_4
  char v71;
  uint64_t v72; // rax
  char v73;
  int v74;
  int v75;
  float v76; // xmm0_4
  float v77; // xmm0_4
  __m128i v78;
  float v79; // xmm3_4
  float v80; // xmm1_4
  __m128i v81;
  int v82;
  int v83;
  float v84; // xmm0_4
  float v85; // xmm1_4
  float v86; // xmm0_4
  float v87; // xmm1_4
  float v88; // xmm3_4
  float v89; // xmm2_4
  float v90; // xmm0_4
  float v91; // xmm5_4
  float v92; // xmm1_4
  float v93; // xmm3_4
  __m128i v94;
  float v95; // xmm4_4
  int v96;
  float v97; // xmm2_4
  float v98; // xmm0_4
  float v99; // xmm1_4
  float v100; // xmm5_4
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
  typedef float _g4_t_v113;
  typedef char *_g4_t_v114;
  typedef float _g4_t_v115;
  typedef float _g4_t_v116;
  typedef float _g4_t_v117;
  typedef float _g4_t_v118;
  typedef int _g4_t_v119;
  typedef float _g4_t_v120;
  typedef float _g4_t_v121;
  typedef float _g4_t_v122;
  typedef int _g4_t_v123;
  typedef float _g4_t_v124;
  typedef float _g4_t_v125;
  typedef float _g4_t_v126;
  typedef float _g4_t_v127[7];
  enum : size_t {
    _g4_s0 = 176u,
    _g4_s1 = (8u + sizeof(_g4_t_v101)) > _g4_s0 ? (8u + sizeof(_g4_t_v101)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v102)) > _g4_s1 ? (12u + sizeof(_g4_t_v102)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v103)) > _g4_s2 ? (16u + sizeof(_g4_t_v103)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v104)) > _g4_s3 ? (20u + sizeof(_g4_t_v104)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v105)) > _g4_s4 ? (24u + sizeof(_g4_t_v105)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v106)) > _g4_s5 ? (28u + sizeof(_g4_t_v106)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v107)) > _g4_s6 ? (32u + sizeof(_g4_t_v107)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v108)) > _g4_s7 ? (36u + sizeof(_g4_t_v108)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v109)) > _g4_s8 ? (40u + sizeof(_g4_t_v109)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v110)) > _g4_s9 ? (44u + sizeof(_g4_t_v110)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v111)) > _g4_s10 ? (48u + sizeof(_g4_t_v111)) : _g4_s10,
    _g4_s12 = (52u + sizeof(_g4_t_v112)) > _g4_s11 ? (52u + sizeof(_g4_t_v112)) : _g4_s11,
    _g4_s13 = (56u + sizeof(_g4_t_v113)) > _g4_s12 ? (56u + sizeof(_g4_t_v113)) : _g4_s12,
    _g4_s14 = (60u + sizeof(_g4_t_v114)) > _g4_s13 ? (60u + sizeof(_g4_t_v114)) : _g4_s13,
    _g4_s15 = (60u + sizeof(_g4_t_v115)) > _g4_s14 ? (60u + sizeof(_g4_t_v115)) : _g4_s14,
    _g4_s16 = (60u + sizeof(_g4_t_v116)) > _g4_s15 ? (60u + sizeof(_g4_t_v116)) : _g4_s15,
    _g4_s17 = (64u + sizeof(_g4_t_v117)) > _g4_s16 ? (64u + sizeof(_g4_t_v117)) : _g4_s16,
    _g4_s18 = (68u + sizeof(_g4_t_v118)) > _g4_s17 ? (68u + sizeof(_g4_t_v118)) : _g4_s17,
    _g4_s19 = (72u + sizeof(_g4_t_v119)) > _g4_s18 ? (72u + sizeof(_g4_t_v119)) : _g4_s18,
    _g4_s20 = (72u + sizeof(_g4_t_v120)) > _g4_s19 ? (72u + sizeof(_g4_t_v120)) : _g4_s19,
    _g4_s21 = (72u + sizeof(_g4_t_v121)) > _g4_s20 ? (72u + sizeof(_g4_t_v121)) : _g4_s20,
    _g4_s22 = (72u + sizeof(_g4_t_v122)) > _g4_s21 ? (72u + sizeof(_g4_t_v122)) : _g4_s21,
    _g4_s23 = (76u + sizeof(_g4_t_v123)) > _g4_s22 ? (76u + sizeof(_g4_t_v123)) : _g4_s22,
    _g4_s24 = (76u + sizeof(_g4_t_v124)) > _g4_s23 ? (76u + sizeof(_g4_t_v124)) : _g4_s23,
    _g4_s25 = (76u + sizeof(_g4_t_v125)) > _g4_s24 ? (76u + sizeof(_g4_t_v125)) : _g4_s24,
    _g4_s26 = (76u + sizeof(_g4_t_v126)) > _g4_s25 ? (76u + sizeof(_g4_t_v126)) : _g4_s25,
    _g4_s27 = (80u + sizeof(_g4_t_v127)) > _g4_s26 ? (80u + sizeof(_g4_t_v127)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v101 &v101 = *reinterpret_cast<_g4_t_v101 *>(_g4_sf + 8u);
  _g4_t_v102 &v102 = *reinterpret_cast<_g4_t_v102 *>(_g4_sf + 12u);
  _g4_t_v103 &v103 = *reinterpret_cast<_g4_t_v103 *>(_g4_sf + 16u);
  _g4_t_v104 &v104 = *reinterpret_cast<_g4_t_v104 *>(_g4_sf + 20u);
  _g4_t_v105 &v105 = *reinterpret_cast<_g4_t_v105 *>(_g4_sf + 24u);
  _g4_t_v106 &v106 = *reinterpret_cast<_g4_t_v106 *>(_g4_sf + 28u);
  _g4_t_v107 &v107 = *reinterpret_cast<_g4_t_v107 *>(_g4_sf + 32u);
  _g4_t_v108 &v108 = *reinterpret_cast<_g4_t_v108 *>(_g4_sf + 36u);
  _g4_t_v109 &v109 = *reinterpret_cast<_g4_t_v109 *>(_g4_sf + 40u);
  _g4_t_v110 &v110 = *reinterpret_cast<_g4_t_v110 *>(_g4_sf + 44u);
  _g4_t_v111 &v111 = *reinterpret_cast<_g4_t_v111 *>(_g4_sf + 48u);
  _g4_t_v112 &v112 = *reinterpret_cast<_g4_t_v112 *>(_g4_sf + 52u);
  _g4_t_v113 &v113 = *reinterpret_cast<_g4_t_v113 *>(_g4_sf + 56u);
  _g4_t_v114 &v114 = *reinterpret_cast<_g4_t_v114 *>(_g4_sf + 60u);
  _g4_t_v115 &v115 = *reinterpret_cast<_g4_t_v115 *>(_g4_sf + 60u);
  _g4_t_v116 &v116 = *reinterpret_cast<_g4_t_v116 *>(_g4_sf + 60u);
  _g4_t_v117 &v117 = *reinterpret_cast<_g4_t_v117 *>(_g4_sf + 64u);
  _g4_t_v118 &v118 = *reinterpret_cast<_g4_t_v118 *>(_g4_sf + 68u);
  _g4_t_v119 &v119 = *reinterpret_cast<_g4_t_v119 *>(_g4_sf + 72u);
  _g4_t_v120 &v120 = *reinterpret_cast<_g4_t_v120 *>(_g4_sf + 72u);
  _g4_t_v121 &v121 = *reinterpret_cast<_g4_t_v121 *>(_g4_sf + 72u);
  _g4_t_v122 &v122 = *reinterpret_cast<_g4_t_v122 *>(_g4_sf + 72u);
  _g4_t_v123 &v123 = *reinterpret_cast<_g4_t_v123 *>(_g4_sf + 76u);
  _g4_t_v124 &v124 = *reinterpret_cast<_g4_t_v124 *>(_g4_sf + 76u);
  _g4_t_v125 &v125 = *reinterpret_cast<_g4_t_v125 *>(_g4_sf + 76u);
  _g4_t_v126 &v126 = *reinterpret_cast<_g4_t_v126 *>(_g4_sf + 76u);
  _g4_t_v127 &v127 = *reinterpret_cast<_g4_t_v127 *>(_g4_sf + 80u);

  v123 = *((uint8_t *)self + 22);
  if ( v123 == 6 )
    return 2;
  v8 = *a2;
  v9 = dword_2125290[v8];
  if ( *a3 <= 1u )
  {
    v11 = dword_2125294[v9];
  }
  else
  {
    v119 = a2[1];
    v10 = dword_2125290[v119];
    if ( *a3 == 3 )
    {
      v75 = a2[2];
      if ( v75 + v119 + v8 == 3 )
        return 2;
      if ( v9 == v10 )
        v10 = dword_2125290[v75];
      *a3 = 2;
      *a2 = v9;
      a2[1] = v10;
    }
    v11 = v10;
    if ( v10 != dword_2125294[v9] )
    {
      v11 = dword_2125294[v10];
      v9 = v10;
    }
  }
g4_m128_raw(v12) = *((unsigned int *)self + 13);
  v13 = *((float *)a8 + 1);
  v14 = *((float *)a8 + 2);
  v109 = *(float *)a5;
  v108 = *((float *)a5 + 1);
  v107 = *((float *)a5 + 2);
  v106 = *((float *)a5 + 4);
  v104 = *((float *)a5 + 6);
  v105 = *((float *)a5 + 5);
  v117 = (float)((float)(v108 * v13) + (float)(*(float *)a5 * *(float *)a8)) + (float)(v107 * v14);
  v102 = *((float *)a5 + 9);
  v103 = *((float *)a5 + 8);
  v101 = *((float *)a5 + 10);
  v15 = v12;
  *(float *)g4_m128_ptr<int32_t>(v15) = *(float *)g4_m128_ptr<int32_t>(v12) - *((float *)self + 9);
  v120 = (float)((float)(v105 * v13) + (float)(v106 * *(float *)a8)) + (float)(v104 * v14);
  v114 = (char *)self + 32;
  v118 = (float)((float)(v13 * v102) + (float)(*(float *)a8 * v103)) + (float)(v14 * v101);
  v16 = *((float *)self + 16) - *((float *)self + 12);
  v17 = *((float *)self + 14) - *((float *)self + 10);
  v18 = *((float *)self + 17) - *(float *)g4_m128_ptr<int32_t>(v12);
  v19 = *((float *)self + 12) - *((float *)self + 8);
  *(float *)g4_m128_ptr<int32_t>(v12) = *((float *)self + 18) - *((float *)self + 14);
  v24 = v15;
  v20 = v17 * v16;
  v21 = v17 * v18;
  *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v15) * *(float *)g4_m128_ptr<int32_t>(v12);
  *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) * v19;
  v22 = (float)(v18 * v19) - (float)(v16 * *(float *)g4_m128_ptr<int32_t>(v15));
  v23 = 0.0;
  *(float *)g4_m128_ptr<int32_t>(v24) = *(float *)g4_m128_ptr<int32_t>(v24) - v21;
  v25 = v20 - *(float *)g4_m128_ptr<int32_t>(v12);
  v26 = v24;
  *(float *)g4_m128_ptr<int32_t>(v26) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v24) * *(float *)g4_m128_ptr<int32_t>(v24)) + (float)(v25 * v25))
                          + (float)(v22 * v22);
  if ( *(float *)g4_m128_ptr<int32_t>(v26) > 0.0 )
  {
    v27 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v26);
    v28 = ((_mm_cvtsi128_si32(v26) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v26) >> 1));
    v29 = (float)(*(float *)&v28 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v26)) * *(float *)&v28)
                * (float)(*(float *)&v28 * *(float *)&v28));
    v30 = (float)(v29 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v26)) * v29) * (float)(v29 * v29));
    v23 = (float)(1.5 * v30) - (float)((float)(v27 * v30) * (float)(v30 * v30));
  }
  v111 = v25 * v23;
  v110 = v22 * v23;
  v31 = (float *)&v114[16 * v11];
  v112 = *(float *)g4_m128_ptr<int32_t>(v24) * v23;
  v32 = (float *)&v114[16 * v9];
  v33 = (float)((float)(v117 * (float)(*(float *)g4_m128_ptr<int32_t>(v24) * v23)) + (float)(v120 * (float)(v25 * v23)))
      + (float)(v118 * (float)(v22 * v23));
  v115 = v31[2] - v32[2];
  v34 = v31[1] - v32[1];
  v113 = *((float *)a8 + 3) * fabs(v33);
g4_m128_raw(v35) = *(unsigned int *)v31;
  *(float *)g4_m128_ptr<int32_t>(v35) = *(float *)g4_m128_ptr<int32_t>(v35) - *v32;
  v36 = v35;
  *(float *)g4_m128_ptr<int32_t>(v36) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v35) * *(float *)g4_m128_ptr<int32_t>(v35)) + (float)(v34 * v34))
                          + (float)(v115 * v115);
  if ( *(float *)g4_m128_ptr<int32_t>(v36) <= 0.0 )
  {
    v42 = 0.0;
  }
  else
  {
    v37 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v36);
    v38 = _mm_cvtsi128_si32(v36) >> 1;
    v39 = (_mm_cvtsi128_si32(v36) + 2139095040) >> 31;
    v40 = (float)(COERCE_FLOAT(v39 & (1597463174 - v38)) * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v36)) * COERCE_FLOAT(v39 & (1597463174 - v38)))
                * (float)(COERCE_FLOAT(v39 & (1597463174 - v38)) * COERCE_FLOAT(v39 & (1597463174 - v38))));
    v41 = (float)(v40 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v36)) * v40) * (float)(v40 * v40));
    v42 = (float)(1.5 * v41) - (float)((float)(v37 * v41) * (float)(v41 * v41));
  }
  *(float *)g4_m128_ptr<int32_t>(v35) = *(float *)g4_m128_ptr<int32_t>(v35) * v42;
  v43 = v34 * v42;
  v44 = ((int)*((uint16_t *)self + 10) >> (5 * v9)) & 0x1F;
  v45 = v35;
  v46 = v42 * v115;
  if ( v123 == 5 )
  {
    v69 = (float *)((char *)&hkpWeldingUtility::m_sinCosTable + 24 * v44);
    v70 = v69[2];
    LOBYTE(v44) = v33 >= v70 ? 4 : 0;
    if ( v33 >= *v69 )
      v44 = v33 < v70 ? 8 : 12;
    v71 = 4 * (v44 | (v33 >= v69[4]) | (v33 >= v69[3] ? 2 : 0));
    v72 = 0x1111111100002243uLL >> (v71 & 0x1F);
    if ( (v71 & 0x20) != 0 )
      LOBYTE(v72) = 0x1111111100002243uLL >> (v71 & 0x1F) >> 32;
    v73 = v72;
    result = 0;
    v74 = v73 & 0xF;
    if ( v74 == 2 )
      return result;
    if ( v74 == 4 || v74 == 0 )
    {
      result = 0;
      if ( *a3 != 1 )
      {
        v124 = v69[v74 + 1];
        v77 = v69[v74];
g4_m128_raw(v78) = LODWORD(v112);
        *(float *)g4_m128_ptr<int32_t>(v78) = (float)(v112 * v77)
                                + (float)((float)((float)(v110 * v43) - (float)(v111 * v46)) * v124);
        v79 = (float)(v111 * v77)
            + (float)((float)((float)(v112 * v46) - (float)(v110 * *(float *)g4_m128_ptr<int32_t>(v35))) * v124);
        v80 = (float)((float)((float)(v111 * *(float *)g4_m128_ptr<int32_t>(v35)) - (float)(v112 * v43)) * v124)
            + (float)(v77 * v110);
        v81 = v78;
        v116 = v80;
        *(float *)g4_m128_ptr<int32_t>(v81) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v78) * *(float *)g4_m128_ptr<int32_t>(v78)) + (float)(v79 * v79))
                                + (float)(v80 * v80);
        if ( *(float *)g4_m128_ptr<int32_t>(v81) <= 0.0 )
        {
          v86 = 0.0;
        }
        else
        {
          v82 = _mm_cvtsi128_si32(v81) >> 1;
          v83 = (_mm_cvtsi128_si32(v81) + 2139095040) >> 31;
          v125 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v81);
          v84 = (float)(1.5 * COERCE_FLOAT(v83 & (1597463174 - v82)))
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v81)) * COERCE_FLOAT(v83 & (1597463174 - v82)))
                      * (float)(COERCE_FLOAT(v83 & (1597463174 - v82)) * COERCE_FLOAT(v83 & (1597463174 - v82))));
          v85 = (float)(1.5 * v84) - (float)((float)(v125 * v84) * (float)(v84 * v84));
          v86 = (float)(1.5 * v85) - (float)((float)(v125 * v85) * (float)(v85 * v85));
        }
        v87 = v79 * v86;
        v126 = v86 * v116;
        v88 = (float)((float)(v117 * (float)(*(float *)g4_m128_ptr<int32_t>(v78) * v86)) + (float)(v120 * (float)(v79 * v86)))
            + (float)(v118 * (float)(v86 * v116));
        v89 = (float)(*(float *)g4_m128_ptr<int32_t>(v78) * v86) * v88;
        v90 = (float)((float)(v117 * *(float *)g4_m128_ptr<int32_t>(v45)) + (float)(v120 * v43)) + (float)(v118 * v46);
        v91 = 0.0;
        *(float *)g4_m128_ptr<int32_t>(v45) = (float)(*(float *)g4_m128_ptr<int32_t>(v45) * v90) + v89;
        v92 = (float)(v87 * v88) + (float)(v43 * v90);
        v93 = (float)(v88 * v126) + (float)(v46 * v90);
        v122 = *(float *)g4_m128_ptr<int32_t>(v45);
        v94 = v45;
        *(float *)g4_m128_ptr<int32_t>(v94) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v45) * *(float *)g4_m128_ptr<int32_t>(v45)) + (float)(v92 * v92))
                                + (float)(v93 * v93);
        if ( *(float *)g4_m128_ptr<int32_t>(v94) > 0.0 )
        {
          v95 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v94);
          v96 = ((_mm_cvtsi128_si32(v94) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v94) >> 1));
          v97 = (float)(*(float *)&v96 * 1.5)
              - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v94)) * *(float *)&v96)
                      * (float)(*(float *)&v96 * *(float *)&v96));
          v98 = (float)(v97 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v94)) * v97) * (float)(v97 * v97));
          v91 = (float)(1.5 * v98) - (float)((float)(v95 * v98) * (float)(v98 * v98));
        }
g4_m128_raw(v66) = LODWORD(v122);
g4_m128_lane<float>(v66, 0) = v122 * v91;
        v99 = v92 * v91;
g4_m128_raw(v64) = LODWORD(v109);
g4_m128_lane<float>(v64, 0) = v109 * (float)(v122 * v91);
        v100 = v91 * v93;
g4_m128_raw(v65) = LODWORD(v108);
g4_m128_lane<float>(v64, 0) = (float)(g4_m128_lane<float>(v64, 0) + (float)(v106 * v99)) + (float)(v103 * v100);
g4_m128_lane<float>(v65, 0) = (float)((float)(v108 *g4_m128_lane<float>(v66, 0)) + (float)(v105 * v99)) + (float)(v102 * v100);
g4_m128_lane<float>(v66, 0) = (float)((float)(g4_m128_lane<float>(v66, 0) * v107) + (float)(v99 * v104)) + (float)(v100 * v101);
        goto LABEL_19;
      }
      return result;
    }
    return 2;
  }
  if ( v44 == 31 )
    return 2;
  v47 = (float *)((char *)&hkpWeldingUtility::m_sinCosTable + 24 * v44);
  if ( !(v123 != 0 ? v33 > v47[v123] : *v47 > v33) )
    return 2;
  v49 = v47[v123];
  v50 = v47[v123 + 1];
  v121 = (float)((float)((float)(v110 * v43) - (float)(v111 * v46)) * v50) + (float)(v112 * v49);
g4_m128_raw(v56) = LODWORD(v121);
  v51 = (float)((float)(v46 * v112) - (float)(v110 * *(float *)g4_m128_ptr<int32_t>(v35))) * v50;
  v52 = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v35) * v111) - (float)(v43 * v112)) * v50;
  v53 = 0.0;
  v54 = (float)(v111 * v49) + v51;
  v55 = (float)(v49 * v110) + v52;
  *(float *)g4_m128_ptr<int32_t>(v56) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v56) * *(float *)g4_m128_ptr<int32_t>(v56)) + (float)(v54 * v54))
                          + (float)(v55 * v55);
  if ( *(float *)g4_m128_ptr<int32_t>(v56) > 0.0 )
  {
    v57 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v56);
    v58 = ((_mm_cvtsi128_si32(v56) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v56) >> 1));
    v59 = (float)(*(float *)&v58 * 1.5)
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v56)) * *(float *)&v58)
                * (float)(*(float *)&v58 * *(float *)&v58));
    v60 = (float)(v59 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v56)) * v59) * (float)(v59 * v59));
    v53 = (float)(1.5 * v60) - (float)((float)(v57 * v60) * (float)(v60 * v60));
  }
  v61 = v121 * v53;
  v62 = v54 * v53;
  v63 = v53 * v55;
g4_m128_lane<float>(v64, 0) = (float)((float)(v109 * v61) + (float)(v106 * v62)) + (float)(v103 * v63);
g4_m128_lane<float>(v65, 0) = (float)((float)(v108 * v61) + (float)(v105 * v62)) + (float)(v102 * v63);
g4_m128_lane<float>(v66, 0) = (float)((float)(v61 * v107) + (float)(v62 * v104)) + (float)(v63 * v101);
  if ( *((uint8_t *)self + 23) != 0 )
  {
    v76 = dword_1D1656C[v123];
    hkVector4f::setTransformedInversePos((hkVector4f::Self *)v127, a5, a4);
g4_m128_raw(v66) =g4_m128_lane<uint32_t>(v66, 0);
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(v65, 0);
g4_m128_raw(v64) =g4_m128_lane<uint32_t>(v64, 0);
    v113 = fminf(
             (float)((float)((float)(v127[0] - *((float *)self + 8)) * (float)(v112 * v76))
                   + (float)((float)(v127[1] - *((float *)self + 9)) * (float)(v111 * v76)))
           + (float)((float)(v127[2] - *((float *)self + 10)) * (float)(v76 * v110)),
             v113);
    goto LABEL_19;
  }
  G4_VCALL<void>(a6, 48, v127);
  hkVector4f::setTransformedPos((hkVector4f::Self *)v127, a7, (const hkVector4f::Self *)v127);
g4_m128_raw(v64) =g4_m128_lane<uint32_t>(v64, 0);
g4_m128_raw(v65) =g4_m128_lane<uint32_t>(v65, 0);
g4_m128_raw(v66) =g4_m128_lane<uint32_t>(v66, 0);
  result = 0;
  if ( (float)((float)((float)((float)(*(float *)a4 - v127[0]) *g4_m128_lane<float>(v64, 0))
                     + (float)((float)(*((float *)a4 + 1) - v127[1]) *g4_m128_lane<float>(v65, 0)))
             + (float)((float)(*((float *)a4 + 2) - v127[2]) *g4_m128_lane<float>(v66, 0))) < 0.0 )
  {
LABEL_19:
    *(uint64_t *)&v68 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v64, v65), 0);
    *((uint64_t *)&v68 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v66, g4_m128_from<__m128>(LODWORD(v113))), 0);
    *(g4_int128_t *)a8 = v68;
    return 1;
  }
  return result;
}



// ============================================================================
// Address:   0x16c76b0 (size: 59 bytes)
// Symbol:    _ZN16hkpTriangleShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpTriangleShape::hkpTriangleShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN16hkpTriangleShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpTriangleShape::hkpTriangleShape(int a1, int a2))(hkpTriangleShape::Self * self)
{
  hkpConvexShape::hkpConvexShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 2;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209A8C8);
  return (void (**)(hkpTriangleShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209A8C8));
}

