#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpBoxShap.h"

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::staticClass  (binary VA: 0x1696a90)
// Original: hkpBoxShape::staticClass
// ----------------------------------------------------------------------------
void * hkpBoxShape::staticClass()
{
  return &hkpBoxShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::getSize  (binary VA: 0x16da310)
// Original: hkpBoxShape::getSize
// ----------------------------------------------------------------------------
int hkpBoxShape::getSize()
{
  return 48;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::calcSizeForSpu  (binary VA: 0x16da320)
// Original: hkpBoxShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpBoxShape::calcSizeForSpu()
{
  return 48;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::getNumCollisionSpheres  (binary VA: 0x16da330)
// Original: hkpBoxShape::getNumCollisionSpheres
// ----------------------------------------------------------------------------
int hkpBoxShape::getNumCollisionSpheres()
{
  return 8;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::Destroy  (binary VA: 0x16da340)
// Original: hkpBoxShape::~hkpBoxShape
// ----------------------------------------------------------------------------
void hkpBoxShape::Destroy(hkpBoxShape::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::getFirstVertex  (binary VA: 0x16da360)
// Original: hkpBoxShape::getFirstVertex
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpBoxShape::getFirstVertex(hkpBoxShape::Self *self, hkVector4f::Self *a2)
{
  *(uint32_t *)a2 = *((uint32_t *)self + 8);
  *((uint32_t *)a2 + 1) = *((uint32_t *)self + 9);
  *((uint32_t *)a2 + 2) = *((uint32_t *)self + 10);
  *((uint32_t *)a2 + 3) = *((uint32_t *)self + 11);
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::getAabb  (binary VA: 0x16da380)
// Original: hkpBoxShape::getAabb
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpBoxShape::getAabb(hkpBoxShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  float v5; // xmm7_4
  float v6;
  float v7; // xmm4_4
  float v8; // xmm3_4
  float v9; // xmm2_4
  float v10; // xmm6_4
  float v11; // xmm5_4
  float v12; // xmm7_4
  float v13; // xmm1_4
  float v14; // xmm5_4
  float v15;

  v5 = *((float *)self + 9);
  v6 = *((float *)self + 10);
  v7 = (float)(fabs(*(float *)a2 * *((float *)self + 8)) + fabs(*((float *)a2 + 4) * v5))
     + (float)((float)(a3 + *((float *)self + 4)) + fabs(v6 * *((float *)a2 + 8)));
  v8 = (float)((float)(a3 + *((float *)self + 4)) + fabs(v6 * *((float *)a2 + 9)))
     + (float)(fabs(*((float *)a2 + 1) * *((float *)self + 8)) + fabs(*((float *)a2 + 5) * v5));
  v9 = (float)((float)(a3 + *((float *)self + 4)) + fabs(v6 * *((float *)a2 + 10)))
     + (float)(fabs(*((float *)a2 + 2) * *((float *)self + 8)) + fabs(*((float *)a2 + 6) * v5));
  v10 = *((float *)a2 + 13);
  v11 = fabs(*((float *)self + 8) * *((float *)a2 + 3)) + fabs(v5 * *((float *)a2 + 7));
  v15 = *((float *)a2 + 15);
  v12 = *((float *)a2 + 12);
  v13 = (float)((float)(a3 + *((float *)self + 4)) + fabs(v6 * *((float *)a2 + 11))) + v11;
  v14 = *((float *)a2 + 14);
  *((float *)a4 + 4) = v7 + v12;
  *((float *)a4 + 5) = v8 + v10;
  *((float *)a4 + 6) = v9 + v14;
  *(float *)a4 = v12 - v7;
  *((float *)a4 + 1) = v10 - v8;
  *((float *)a4 + 2) = v14 - v9;
  *((float *)a4 + 7) = v15 + v13;
  *((float *)a4 + 3) = v15 - v13;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::getSupportingVertex  (binary VA: 0x16da500)
// Original: hkpBoxShape::getSupportingVertex
// ----------------------------------------------------------------------------
int hkpBoxShape::getSupportingVertex(float *a1, int *a2, int a3)
{
  float v3; // xmm3_4
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm4_4
  char v7;
  int result;

  v3 = a1[8];
  if ( *a2 < 0 )
  {
    v3 = -v3;
    v4 = a1[9];
    if ( a2[1] >= 0 )
    {
LABEL_3:
      v5 = a1[10];
      if ( a2[2] >= 0 )
        goto LABEL_4;
LABEL_10:
      v5 = -v5;
      v6 = a1[11];
      if ( a2[3] >= 0 )
        goto LABEL_5;
      goto LABEL_11;
    }
  }
  else
  {
    v4 = a1[9];
    if ( a2[1] >= 0 )
      goto LABEL_3;
  }
  v4 = -v4;
  v5 = a1[10];
  if ( a2[2] < 0 )
    goto LABEL_10;
LABEL_4:
  v6 = a1[11];
  if ( a2[3] < 0 )
LABEL_11:
    v6 = -v6;
LABEL_5:
  *(float *)a3 = v3;
  *(float *)(a3 + 4) = v4;
  *(float *)(a3 + 8) = v5;
  v7 = 4 * (v5 < 0.0);
  if ( v6 < 0.0 )
    v7 = 4 * (v5 < 0.0) + 8;
  result = v7 & 7 | (uint8_t)((v3 < 0.0) | (2 * (v4 < 0.0))) | 0x3F000000;
  *(uint32_t *)(a3 + 12) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::getCentre  (binary VA: 0x16da620)
// Original: hkpBoxShape::getCentre
// ----------------------------------------------------------------------------
hkVector4f::Self * hkpBoxShape::getCentre(hkpBoxShape::Self *self, hkVector4f::Self *a2)
{
  *(g4_int128_t *)a2 = 0;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::Destroy_ea16da630  (binary VA: 0x16da630)
// Original: hkpBoxShape::~hkpBoxShape
// ----------------------------------------------------------------------------
void hkpBoxShape::Destroy_ea16da630(hkpBoxShape::Self *self)
{
  int v1;
  int v2;

  hkpBoxShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 48;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::convertVertexIdsToVertices  (binary VA: 0x16da690)
// Original: hkpBoxShape::convertVertexIdsToVertices
// ----------------------------------------------------------------------------
float * hkpBoxShape::convertVertexIdsToVertices(float *a1, uint16_t *a2, int a3, float *a4)
{
  uint16_t *v4;
  float *result;
  float v6; // xmm0_4
  uint16_t v7;
  int v8;
  float v9; // xmm0_4
  float v10; // xmm0_4

  v4 = a2;
  result = a4;
  if ( a3 > 0 )
  {
    do
    {
      v6 = a1[8];
      v7 = *v4;
      v8 = *v4;
      if ( (*v4 & 1) != 0 )
        v6 = -v6;
      *result = v6;
      v9 = a1[9];
      if ( (v7 & 2) != 0 )
        v9 = -v9;
      result[1] = v9;
      v10 = a1[10];
      if ( (v7 & 4) != 0 )
        v10 = -v10;
      result += 4;
      *(result - 2) = v10;
      *((uint32_t *)result - 1) = v8 | 0x3F000000;
      ++v4;
    }
    while ( v4 != &a2[a3] );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::getCollisionSpheres  (binary VA: 0x16da730)
// Original: hkpBoxShape::getCollisionSpheres
// ----------------------------------------------------------------------------
hkSphere::Self * hkpBoxShape::getCollisionSpheres(hkpBoxShape::Self *self, __m128 *a2)
{
  __m128 v2;
  __m128 v4;
  __m128 v5;
  __m128 v6;
  unsigned int v7;
  __m128 v8;
  uint64_t v9; // xmm1_8
  g4_int128_t v10;
  unsigned int v11;
  __m128 v12;
g4_m128_raw(v2) = *((unsigned int *)self + 8);
g4_m128_raw(v4) = *((unsigned int *)self + 9);
g4_m128_raw(v5) = *((unsigned int *)self + 4);
g4_m128_lane<uint64_t>(v6, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v2, v4), 0);
  v7 = *((uint32_t *)self + 10);
  v8 = _mm_xor_ps(v2, g4_m128_from<__m128>(0x80000000));
  v9 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v7)), v5), 0);
  *(uint64_t *)&v10 =g4_m128_lane<uint64_t>(v6, 0);
  *((uint64_t *)&v10 + 1) = v9;
  v11 = _mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v8)));
g4_m128_lane<uint64_t>(v8, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v8, v4), 0);
  v12 = _mm_xor_ps(v4, g4_m128_from<__m128>(0x80000000));
g4_m128_raw(*(a2)) = v10;
  *(uint64_t *)&v10 =g4_m128_lane<uint64_t>(v8, 0);
  *((uint64_t *)&v10 + 1) = v9;
g4_m128_lane<uint64_t>(v2, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v2, v12), 0);
g4_m128_raw(a2[1]) = v10;
  *(uint64_t *)&v10 =g4_m128_lane<uint64_t>(v2, 0);
  *((uint64_t *)&v10 + 1) = v9;
g4_m128_raw(a2[2]) = v10;
  *(uint64_t *)&v10 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v11)), v12), 0);
g4_m128_lane<uint64_t>(v12, 0) = (unsigned long long)(uintptr_t)(v10);
  *((uint64_t *)&v10 + 1) = v9;
g4_m128_raw(a2[3]) = v10;
g4_m128_lane<uint64_t>(v6, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(_mm_xor_ps(g4_m128_from<__m128>(_mm_cvtsi32_si128(v7)), g4_m128_from<__m128>(0x80000000)), v5), 0);
g4_m128_lane<uint64_t>(v8, 1) =g4_m128_lane<uint64_t>(v6, 1);
g4_m128_lane<uint64_t>(v2, 1) =g4_m128_lane<uint64_t>(v6, 1);
g4_m128_lane<uint64_t>(v12, 1) =g4_m128_lane<uint64_t>(v6, 1);
  a2[4] = v6;
  a2[5] = v8;
  a2[6] = v2;
  a2[7] = v12;
  return (hkSphere::Self *)a2;
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::castRay  (binary VA: 0x16dafa0)
// Original: hkpBoxShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpBoxShape::castRay(uint8_t *a1, float *a2, int a3, int a4)
{
  uint32_t *v4;
  uint64_t v5; // rax
  float v6; // xmm0_4
  bool v7;
  __m128i v8;
  __m128i v9;
  float v10; // xmm1_4
  float v11; // xmm0_4
  __m128i v12;
  char v13;
  char v14; // si
  char v15;
  char v16;
  char v17;
  int v18;
  int v19;
  int v20;
  float v21; // xmm6_4
  int v22;
  float v23; // xmm0_4
  float v24;
  int v25;
  uint32_t *v26;
  uint64_t v27; // rax
  int v29;
  int v30;
  float v31; // xmm7_4
  int v32;
  int v33;
  float v34; // xmm7_4
  int v35;
  int v36;
  int v37;
  uint32_t *v38;
  uint64_t v39; // rax
  typedef bool _g4_t_v40;
  typedef int *_g4_t_address;
  typedef float _g4_t_v42;
  typedef int _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47[4];
  typedef float _g4_t_v48[4];
  typedef uint32_t _g4_t_v49[15];
  enum : size_t {
    _g4_s0 = 208u,
    _g4_s1 = (12u + sizeof(_g4_t_v40)) > _g4_s0 ? (12u + sizeof(_g4_t_v40)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_address)) > _g4_s1 ? (16u + sizeof(_g4_t_address)) : _g4_s1,
    _g4_s3 = (20u + sizeof(_g4_t_v42)) > _g4_s2 ? (20u + sizeof(_g4_t_v42)) : _g4_s2,
    _g4_s4 = (24u + sizeof(_g4_t_v43)) > _g4_s3 ? (24u + sizeof(_g4_t_v43)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v44)) > _g4_s4 ? (24u + sizeof(_g4_t_v44)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v45)) > _g4_s5 ? (28u + sizeof(_g4_t_v45)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v46)) > _g4_s6 ? (44u + sizeof(_g4_t_v46)) : _g4_s6,
    _g4_s8 = (48u + sizeof(_g4_t_v47)) > _g4_s7 ? (48u + sizeof(_g4_t_v47)) : _g4_s7,
    _g4_s9 = (64u + sizeof(_g4_t_v48)) > _g4_s8 ? (64u + sizeof(_g4_t_v48)) : _g4_s8,
    _g4_s10 = (80u + sizeof(_g4_t_v49)) > _g4_s9 ? (80u + sizeof(_g4_t_v49)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_address &address = *reinterpret_cast<_g4_t_address *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 24u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 28u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 44u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 48u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 64u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 80u);

  address = (int *)_emutls_get_address(&g4_emutls_v_hkMonitorStream__m_instance);
  v43 = *address;
  v4 = *(uint32_t **)(*address + 4);
  if ( (unsigned int)(uintptr_t)(v4) < *(uint32_t *)(*address + 12) )
  {
    *v4 = (uint32_t)(uintptr_t)("TtrcBox");
    v5 = __rdtsc();
    v4[1] = v5;
    *(uint32_t *)(v43 + 4) = (uint32_t)(uintptr_t)(v4 + 3);
  }
  v6 = a2[4];
  v7 = false;
g4_m128_raw(v8) = *(unsigned int *)(a3 + 16);
  *(float *)g4_m128_ptr<int32_t>(v8) = *(float *)g4_m128_ptr<int32_t>(v8) - *(float *)a3;
g4_m128_raw(v9) = *(unsigned int *)(a3 + 20);
  *(float *)g4_m128_ptr<int32_t>(v9) = *(float *)g4_m128_ptr<int32_t>(v9) - *(float *)(a3 + 4);
  v47[0] = a2[8] + v6;
  v45 = 1.0;
  v47[1] = a2[9] + v6;
  v10 = a2[10] + v6;
  v11 = v6 + a2[11];
  v47[2] = v10;
  v47[3] = v11;
g4_m128_raw(v12) = *(unsigned int *)(a3 + 24);
  if ( *(float *)g4_m128_ptr<int32_t>(v8) == 0.0 )
    v7 = !__builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v8));
  *(float *)g4_m128_ptr<int32_t>(v12) = *(float *)g4_m128_ptr<int32_t>(v12) - *(float *)(a3 + 8);
  if ( __builtin_isnan(*(float *)g4_m128_ptr<int32_t>(v9)) || (v13 = 2, *(float *)g4_m128_ptr<int32_t>(v9) != 0.0) )
    v13 = 0;
  v14 = v7 | v13;
  if ( *(float *)g4_m128_ptr<int32_t>(v12) == 0.0 )
  {
    v15 = 12;
    v16 = 4;
  }
  else
  {
    v15 = 8;
    v16 = 0;
  }
  if ( 0.0 != 1.0 )
    v15 = v16;
  v17 = v14 | v15;
  if ( (v17 & 1) != 0 )
  {
    v40 = true;
    v18 = 0;
g4_m128_raw(v8) = 0;
  }
  else
  {
    v18 = _mm_cvtsi128_si32(v8);
    v40 = *(float *)g4_m128_ptr<int32_t>(v8) >= 0.0;
  }
  v19 = _mm_cvtsi128_si32(v9);
  if ( (v17 & 2) != 0 )
  {
    v19 = 0;
g4_m128_raw(v9) = 0;
  }
  v20 = _mm_cvtsi128_si32(v12);
  if ( (v17 & 4) != 0 )
  {
    v20 = 0;
g4_m128_raw(v12) = 0;
  }
  if ( (v17 & 8) != 0 )
    v45 = 0.0;
  v21 = 3.40282e38f;
  if ( v18 < 0 )
    v21 = -3.40282e38f;
  v44 = 3.40282e38f;
  if ( v19 < 0 )
    v44 = -3.40282e38f;
  v42 = 3.40282e38f;
  if ( v20 < 0 )
    v42 = -3.40282e38f;
  if ( *(float *)g4_m128_ptr<int32_t>(v8) != 0.0 )
  {
    v35 = _mm_cvtsi128_si32(v8);
    v36 = (2130706432 - v35) & ((v35 ^ (v35 + 2139095040)) >> 31);
    v21 = (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                        * (float)((float)(2.0
                                        - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v36))
                                                        * *(float *)&v36)))
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v36))
                                        * *(float *)&v36))))
        * (float)((float)(2.0
                        - (float)(*(float *)g4_m128_ptr<int32_t>(v8)
                                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v36))
                                        * *(float *)&v36)))
                * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v8) * *(float *)&v36)) * *(float *)&v36));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v9) != 0.0 )
  {
    v32 = _mm_cvtsi128_si32(v9);
    v33 = (2130706432 - v32) & ((v32 ^ (v32 + 2139095040)) >> 31);
    v34 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&v33)) * *(float *)&v33)
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v9)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v9) * *(float *)&v33)) * *(float *)&v33)));
    v44 = v34 * (float)(2.0 - (float)(v34 * *(float *)g4_m128_ptr<int32_t>(v9)));
  }
  if ( *(float *)g4_m128_ptr<int32_t>(v12) != 0.0 )
  {
    v29 = _mm_cvtsi128_si32(v12);
    v30 = (2130706432 - v29) & ((v29 ^ (v29 + 2139095040)) >> 31);
    v31 = (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v30)) * *(float *)&v30)
        * (float)(2.0
                - (float)(*(float *)g4_m128_ptr<int32_t>(v12)
                        * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v12) * *(float *)&v30)) * *(float *)&v30)));
    v42 = v31 * (float)(2.0 - (float)(v31 * *(float *)g4_m128_ptr<int32_t>(v12)));
  }
  v49[4] =g4_m128_lane<int32_t>(v8, 0);
  v49[5] =g4_m128_lane<int32_t>(v9, 0);
  v49[6] =g4_m128_lane<int32_t>(v12, 0);
  *(float *)&v49[7] = v45;
  *(float *)&v49[8] = v21;
  *(float *)&v49[9] = v44;
  *(float *)&v49[10] = v42;
  LOBYTE(v22) = *(float *)g4_m128_ptr<int32_t>(v12) >= 0.0 ? 4 : 0;
  if ( v45 >= 0.0 )
    v22 = *(float *)g4_m128_ptr<int32_t>(v12) < 0.0 ? 8 : 12;
  v49[0] = *(uint32_t *)a3;
  v49[1] = *(uint32_t *)(a3 + 4);
  v49[2] = *(uint32_t *)(a3 + 8);
  v49[3] = *(uint32_t *)(a3 + 12);
  v23 = *(float *)(a4 + 16);
  v49[11] = v22 & 7 | v40 & 7 | (*(float *)g4_m128_ptr<int32_t>(v9) >= 0.0 ? 2 : 0) | 0x3F000000;
  v46 = v23;
  if ( hkcdRayCastBox((int)(uintptr_t)(v49), v47, &v46, v48) != 0 )
  {
    v24 = v48[0];
    *(float *)(a4 + 16) = v46;
    *(float *)a4 = v24;
    *(float *)(a4 + 4) = v48[1];
    *(float *)(a4 + 8) = v48[2];
    *(float *)(a4 + 12) = v48[3];
    *(uint32_t *)(a4 + 4 * *(uint32_t *)(a4 + 64) + 32) = -1;
    v25 = *address;
    v26 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v26) < *(uint32_t *)(*address + 12) )
    {
      *v26 = (uint32_t)(uintptr_t)("Et");
      v27 = __rdtsc();
      v26[1] = v27;
      *(uint32_t *)(v25 + 4) = (uint32_t)(uintptr_t)(v26 + 3);
    }
    *a1 = 1;
    return a1;
  }
  else
  {
    v37 = *address;
    v38 = *(uint32_t **)(*address + 4);
    if ( (unsigned int)(uintptr_t)(v38) < *(uint32_t *)(*address + 12) )
    {
      *v38 = (uint32_t)(uintptr_t)("Et");
      v39 = __rdtsc();
      v38[1] = v39;
      *(uint32_t *)(v37 + 4) = (uint32_t)(uintptr_t)(v38 + 3);
    }
    *a1 = 0;
    return a1;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpBoxShape::Construct  (binary VA: 0x16db4b0)
// Original: hkpBoxShape::hkpBoxShape
// ----------------------------------------------------------------------------
void hkpBoxShape::Construct(hkpBoxShape::Self *self, const hkVector4f::Self *a2, float a3)
{
  float v3; // xmm0_4
  float v4; // xmm0_4

  *((float *)self + 4) = a3;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)self + 8) = 3;
  *((uint8_t *)self + 9) = 4;
  *((uint8_t *)self + 10) = 0;
  *((uint8_t *)self + 11) = 0;
  *((uint32_t *)self + 3) = 0;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B328);
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  v3 = *((float *)self + 8);
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  v4 = fminf(v3, *((float *)self + 9));
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((float *)self + 11) = fminf(v4, *((float *)self + 10));
}



// ============================================================================
// Address:   0x16db520 (size: 59 bytes)
// Symbol:    _ZN11hkpBoxShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpBoxShape::hkpBoxShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN11hkpBoxShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpBoxShape::Construct(int a1, int a2))(hkpBoxShape::Self * self)
{
  hkpConvexShape::hkpConvexShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 3;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B328);
  return (void (**)(hkpBoxShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209B328));
}
// ----------------------------------------------------------------------------
// Function: hkpBoxShape::setHalfExtents  (binary VA: 0x16db560)
// Original: hkpBoxShape::setHalfExtents
// ----------------------------------------------------------------------------
const hkVector4f::Self * hkpBoxShape::setHalfExtents(hkpBoxShape::Self *self, const hkVector4f::Self *a2)
{
  float v3; // xmm0_4

  v3 = fminf(fminf(*(float *)a2, *((float *)a2 + 1)), *((float *)a2 + 2));
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((float *)self + 11) = v3;
  return a2;
}


