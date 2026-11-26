#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpLinearP.h"

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::staticClass  (binary VA: 0x17122f0)
// Original: hkpLinearParametricCurve::staticClass
// ----------------------------------------------------------------------------
void * hkpLinearParametricCurve::staticClass()
{
  return &hkpLinearParametricCurveClass;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::isClosedLoop  (binary VA: 0x17176e0)
// Original: hkpLinearParametricCurve::isClosedLoop
// ----------------------------------------------------------------------------
hkpLinearParametricCurve::Self * hkpLinearParametricCurve::isClosedLoop(hkpLinearParametricCurve::Self *self, int a2)
{
  *(uint8_t *)self = *(uint8_t *)(a2 + 12);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getStart  (binary VA: 0x1717700)
// Original: hkpLinearParametricCurve::getStart
// ----------------------------------------------------------------------------
long double hkpLinearParametricCurve::getStart()
{
  return 0.0;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getEnd  (binary VA: 0x1717710)
// Original: hkpLinearParametricCurve::getEnd
// ----------------------------------------------------------------------------
long double hkpLinearParametricCurve::getEnd(hkpLinearParametricCurve::Self *self)
{
  return (float)(*((uint32_t *)self + 9) - 1);
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::transformPoints  (binary VA: 0x1717730)
// Original: hkpLinearParametricCurve::transformPoints
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpLinearParametricCurve::transformPoints(hkpLinearParametricCurve::Self *self, const hkTransformf::Self *a2)
{
  int v2;
  const hkTransformf::Self *result;
  int v4;
  float *v5;
  float v6; // xmm5_4
  float v7; // xmm4_4
  float v8; // xmm2_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm6_4

  v2 = 0;
  result = a2;
  v4 = *((uint32_t *)self + 9);
  if ( v4 > 0 )
  {
    do
    {
      v5 = (float *)(*((uint32_t *)self + 8) + 16 * v2++);
      v6 = v5[1];
      v7 = v5[2];
      v8 = (float)((float)(*((float *)a2 + 1) * *v5) + (float)(*((float *)a2 + 5) * v6))
         + (float)(*((float *)a2 + 9) * v7);
      v9 = (float)((float)(*((float *)a2 + 2) * *v5) + (float)(*((float *)a2 + 6) * v6))
         + (float)(*((float *)a2 + 10) * v7);
      v10 = (float)(*((float *)a2 + 3) * *v5) + (float)(*((float *)a2 + 7) * v6);
      v11 = *((float *)a2 + 11) * v7;
      *v5 = (float)((float)((float)(*v5 * *(float *)a2) + (float)(v6 * *((float *)a2 + 4)))
                  + (float)(v7 * *((float *)a2 + 8)))
          + *((float *)a2 + 12);
      v5[1] = v8 + *((float *)a2 + 13);
      v5[2] = v9 + *((float *)a2 + 14);
      v5[3] = (float)(v10 + v11) + *((float *)a2 + 15);
    }
    while ( v2 != v4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getPointsToDraw  (binary VA: 0x1717820)
// Original: hkpLinearParametricCurve::getPointsToDraw
// ----------------------------------------------------------------------------
int hkpLinearParametricCurve::getPointsToDraw(hkpLinearParametricCurve::Self *self, hkArray<hkVector4f::Self, hkContainerHeapAllocator::Self> *a2)
{
  hkpLinearParametricCurve::Self *v2;
  int v3;
  int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  typedef int *_g4_t_v10;
  typedef int _g4_t_v11;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v10)) > _g4_s0 ? (12u + sizeof(_g4_t_v10)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v11)) > _g4_s1 ? (16u + sizeof(_g4_t_v11)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);

  v2 = self;
  v3 = *((uint32_t *)self + 9);
  if ( (*((uint32_t *)a2 + 2) & 0x3FFFFFFF) < v3 )
  {
    if ( *((int *)a2 + 2) >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)a2,
        16 * *((uint32_t *)a2 + 2));
      v2 = self;
    }
    v11 = 16 * *((uint32_t *)self + 9);
    v10 = (int *)v2;
    result = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
               (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
               &v11);
    v7 = v11;
    v2 = (hkpLinearParametricCurve::Self *)v10;
    v8 = v11;
    *(uint32_t *)a2 = result;
    v9 = v8 + 15;
    if ( v7 < 0 )
      v7 = v9;
    *((uint32_t *)a2 + 2) = v7 >> 4;
    v3 = v10[9];
  }
  else
  {
    result = *(uint32_t *)a2;
  }
  *((uint32_t *)a2 + 1) = v3;
  v5 = *((uint32_t *)v2 + 8);
  v6 = 0;
  if ( v3 > 0 )
  {
    do
    {
      *(uint32_t *)(result + v6) = *(uint32_t *)(v5 + v6);
      *(uint32_t *)(result + v6 + 4) = *(uint32_t *)(v5 + v6 + 4);
      *(uint32_t *)(result + v6 + 8) = *(uint32_t *)(v5 + v6 + 8);
      *(uint32_t *)(result + v6 + 12) = *(uint32_t *)(v5 + v6 + 12);
      v6 += 16;
    }
    while ( v6 != 16 * v3 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::Destroy  (binary VA: 0x1717920)
// Original: hkpLinearParametricCurve::~hkpLinearParametricCurve
// ----------------------------------------------------------------------------
void hkpLinearParametricCurve::Destroy(hkpLinearParametricCurve::Self *self)
{
  int v1;
  int v2;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209CD68);
  v1 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v1);
  v2 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      16 * v2);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::Destroy_ea17179d0  (binary VA: 0x17179d0)
// Original: hkpLinearParametricCurve::~hkpLinearParametricCurve
// ----------------------------------------------------------------------------
void hkpLinearParametricCurve::Destroy_ea17179d0(hkpLinearParametricCurve::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209CD68);
  v1 = *((uint32_t *)self + 13);
  *((uint32_t *)self + 12) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 11),
      4 * v1);
  v2 = *((uint32_t *)self + 10);
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 9) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 8),
      16 * v2);
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 64;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getPoint  (binary VA: 0x1717ab0)
// Original: hkpLinearParametricCurve::getPoint
// ----------------------------------------------------------------------------
float * hkpLinearParametricCurve::getPoint(hkpLinearParametricCurve::Self *self, float a2, hkVector4f::Self *a3)
{
  unsigned int v3;
  char v4; // bp
  int v5;
  char v6; // si
  int v7;
  int v8;
  uint32_t *v9;
  float *result;
  float v11; // xmm4_4
  float *v12;
  float v13; // xmm3_4
  float v14; // xmm2_4
  float v15; // xmm0_4

  v3 = (LODWORD(a2) & 0x7F800000u) >> 23;
  v4 = v3 + 106;
  v5 = (int)(v3 - 151) >> 31;
  v6 = v5 & (23 - (((LODWORD(a2) & 0x7F800000u) >> 23) - 127));
  v7 = (LODWORD(a2) & ~(((LODWORD(a2) & 0x7FFFFFFF) - 1) >> 31) & 0x7FFFFF | 0x800000)
     & (~v5 | (-8388608 >> ((v5 & 0x17) - v6)));
  v8 = (~((int)(((LODWORD(a2) & 0x7F800000u) >> 23) - 127) >> 31)
      & ((((LODWORD(a2) & ~(((LODWORD(a2) & 0x7FFFFFFF) - 1) >> 31)) >> 31) | (v7 + v7 - 1)) - v7 + 1)) >> v6 << (~(uint8_t)v5 & v4);
  if ( v8 < 0 )
    v8 = 0;
  if ( v8 + 1 < *((uint32_t *)self + 9) )
  {
    v11 = a2 - (float)v8;
    v12 = (float *)(*((uint32_t *)self + 8) + 16 * (v8 + 1));
    v13 = (float)(v12[1] - *(v12 - 3)) * v11;
    v14 = (float)(v12[2] - *(v12 - 2)) * v11;
    v15 = (float)(v12[3] - *(v12 - 1)) * v11;
    *(float *)a3 = (float)((float)(*v12 - *(v12 - 4)) * v11) + *(v12 - 4);
    *((float *)a3 + 1) = v13 + *(v12 - 3);
    *((float *)a3 + 2) = v14 + *(v12 - 2);
    *((float *)a3 + 3) = v15 + *(v12 - 1);
    return v12 - 4;
  }
  else
  {
    v9 = (uint32_t *)(*((uint32_t *)self + 8) + 16 * v8);
    *(uint32_t *)a3 = *v9;
    *((uint32_t *)a3 + 1) = v9[1];
    *((uint32_t *)a3 + 2) = v9[2];
    result = (float *)v9[3];
    *((uint32_t *)a3 + 3) = (uint32_t)(uintptr_t)(result);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getLengthFromStart  (binary VA: 0x1717c20)
// Original: hkpLinearParametricCurve::getLengthFromStart
// ----------------------------------------------------------------------------
long double hkpLinearParametricCurve::getLengthFromStart(hkpLinearParametricCurve::Self *self, float a2)
{
  unsigned int v2;
  int v3;
  char v4; // di
  int v5;
  char v6; // si
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  float v12; // xmm2_4
  float v13; // xmm1_4
  int v15;

  v2 = (LODWORD(a2) & 0x7F800000u) >> 23;
  v3 = v2 - 127;
  v4 = v2 + 106;
  v5 = (int)(v2 - 151) >> 31;
  v6 = v5 & (23 - v3);
  v7 = (LODWORD(a2) & ~(((LODWORD(a2) & 0x7FFFFFFF) - 1) >> 31) & 0x7FFFFF | 0x800000)
     & (~v5 | (-8388608 >> ((v5 & 0x17) - v6)));
  v8 = (~(v3 >> 31) & ((((LODWORD(a2) & ~(((LODWORD(a2) & 0x7FFFFFFF) - 1) >> 31)) >> 31) | (v7 + v7 - 1)) - v7 + 1)) >> v6 << (~(uint8_t)v5 & v4);
  v9 = *((uint32_t *)self + 9);
  if ( v8 < 0 )
    v8 = 0;
  v10 = v9 - 1;
  if ( v8 >= v9 - 1 )
  {
    v15 = *((uint32_t *)self + 11);
    v12 = *(float *)(v15 + 4 * v10);
    v13 = v12 - *(float *)(v15 + 4 * v10 - 4);
    v8 = v9 - 1;
  }
  else
  {
    v11 = *((uint32_t *)self + 11);
    v12 = *(float *)(v11 + 4 * (v8 + 1) - 4);
    v13 = *(float *)(v11 + 4 * (v8 + 1)) - v12;
  }
  return (float)((float)((float)(a2 - (float)v8) * v13) + v12);
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getBinormal  (binary VA: 0x1717d30)
// Original: hkpLinearParametricCurve::getBinormal
// ----------------------------------------------------------------------------
int * hkpLinearParametricCurve::getBinormal(hkpLinearParametricCurve::Self *self, unsigned int a2, hkVector4f::Self *a3)
{
  hkpLinearParametricCurve::Self *v3; // xmm1_4
  int *result;
  __m128 v5;
  float v6; // xmm7_4
  __m128 v7;
  __m128 v8;
  float v9; // xmm0_4
  int v10;
  __m128 v11;
  __m128 v12;
  __m128 v13;
  __m128 v14;
  __m128 v15;
  __m128i m128_i128;
  float v17; // xmm5_4
  int v18;
  int v19;
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm7_4
  __m128 v23;
  __m128 v24;
  float v25; // xmm6_4
  float v26; // xmm0_4
  float retaddr;
  typedef int _g4_t_v27;
  typedef int _g4_t_v28;
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (12u + sizeof(_g4_t_v27)) > _g4_s0 ? (12u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v28)) > _g4_s1 ? (16u + sizeof(_g4_t_v28)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);

  G4_VCALL<void>(self, 28, a2, &v28, v27);
  *(float *)&v3 = retaddr;
  result = (int *)&g_vectorfConstants;
g4_m128_raw(v5) = a2;
  if ( (float)((float)((float)(0.0 * retaddr) + (float)(1.0 * *(float *)&self)) + (float)(0.0 * *(float *)&a2)) < 0.98f )
  {
    v25 = *((float *)self + 6);
g4_m128_raw(v14) = (unsigned int)(uintptr_t)(self);
g4_m128_raw(v15) = *((unsigned int *)self + 5);
g4_m128_lane<float>(v14, 0) = (float)(*(float *)&self * v25) - (float)(*(float *)&a2 *g4_m128_lane<float>(v15, 0));
    v26 = *((float *)self + 4);
g4_m128_lane<float>(v15, 0) = (float)(g4_m128_lane<float>(v15, 0) * retaddr) - (float)(*(float *)&self * v26);
g4_m128_raw(v12) = 0;
g4_m128_lane<float>(v5, 0) = (float)(*(float *)&a2 * v26) - (float)(v25 * retaddr);
    *(uint32_t *)a3 =g4_m128_lane<int32_t>(v14, 0);
    *((uint32_t *)a3 + 3) = 0;
g4_m128_raw(v13) = 0;
    *((uint32_t *)a3 + 2) =g4_m128_lane<int32_t>(v15, 0);
    *((uint32_t *)a3 + 1) =g4_m128_lane<int32_t>(v5, 0);
  }
  else
  {
    v6 = fabs(retaddr);
g4_m128_lane<int32_t>(v7, 0) = fabs(*(float *)&self);
    v8 = _mm_and_ps(g4_m128_u32(0x7FFFFFFFu), G4_BITCAST<__m128>(a2));
    if ( v6 >g4_m128_lane<float>(v7, 0) )
    {
      v9 = *(float *)&self;
      v10 = 0;
      result = (int *)(&dword_0 + 1);
    }
    else
    {
      v9 = retaddr;
g4_m128_lane<float>(v7, 0) = v6;
      v3 = self;
      v10 = 1;
      result = nullptr;
    }
    v11 = _mm_cmplt_ss(v8, v7);
    *(uint32_t *)a3 = 0;
    *((uint32_t *)a3 + 1) = 0;
    *((uint32_t *)a3 + 2) = 0;
    *((uint32_t *)a3 + 3) = 0;
    *((uint32_t *)a3 + v10) =g4_m128_lane<uint32_t>(_mm_andnot_ps(v11, G4_BITCAST<__m128>(a2)), 0) | LODWORD(v9) &g4_m128_lane<int32_t>(v11, 0);
    if (g4_m128_lane<float>(v7, 0) <=g4_m128_lane<float>(v8, 0) )
      result = (int *)(&dword_0 + 2);
g4_m128_raw(v12) = 0;
    *((float *)a3 + (uint32_t)(uintptr_t)(result)) = -*(float *)&v3;
g4_m128_raw(v13) = *((unsigned int *)a3 + 3);
g4_m128_raw(v14) = *(unsigned int *)a3;
g4_m128_raw(v5) = *((unsigned int *)a3 + 1);
g4_m128_raw(v15) = *((unsigned int *)a3 + 2);
  }
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v14));
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v14, 0) *g4_m128_lane<float>(v14, 0))
                                        + (float)(g4_m128_lane<float>(v5, 0) *g4_m128_lane<float>(v5, 0)))
                                + (float)(g4_m128_lane<float>(v15, 0) *g4_m128_lane<float>(v15, 0));
  if (g4_m128_lane<float>(v12, 0) >= *(float *)g4_m128_ptr<int32_t>(m128_i128) )
  {
    v23 = v12;
  }
  else
  {
    v17 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    v18 = _mm_cvtsi128_si32(m128_i128) >> 1;
    v19 = (_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31;
    result = (int *)(&dword_1C7B664);
    v20 = (float)(1.5 * COERCE_FLOAT(v19 & (1597463174 - v18)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * COERCE_FLOAT(v19 & (1597463174 - v18)))
                * (float)(COERCE_FLOAT(v19 & (1597463174 - v18)) * COERCE_FLOAT(v19 & (1597463174 - v18))));
    v21 = 1.5 * v20;
    v22 = (float)(v17 * v20) * (float)(v20 * v20);
g4_m128_raw(v23) = 0x3FC00000u;
g4_m128_lane<float>(v23, 0) = (float)(1.5 * (float)(v21 - v22))
                    - (float)((float)(v17 * (float)(v21 - v22)) * (float)((float)(v21 - v22) * (float)(v21 - v22)));
  }
g4_m128_lane<uint64_t>(v24, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v14, v5), 0);
g4_m128_lane<uint64_t>(v24, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v15, v13), 0);
  *(__m128 *)a3 = _mm_mul_ps(_mm_shuffle_ps(v23, v23, 0), v24);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getTangent  (binary VA: 0x1717fa0)
// Original: hkpLinearParametricCurve::getTangent
// ----------------------------------------------------------------------------
signed int hkpLinearParametricCurve::getTangent(hkpLinearParametricCurve::Self *self, int a2, hkVector4f::Self *a3)
{
  float v3;
  int v4; // xmm0_4
  signed int v5;
  int v6;
  int v7;
  signed int result;
  int v9;
  hkpLinearParametricCurve::Self *v10;
  int v11;
  int v12;
  float *v13;
  unsigned int *v14;
  __m128 v15;
  __m128 v16;
  __m128 v17;
  __m128 v18;
  __m128i m128_i128;
  __m128 v20;
  float v21; // xmm6_4
  int v22;
  int v23;
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm7_4
  __m128 v27;
  float v28; // xmm7_4
  __m128 v29;
  float v30; // xmm0_4
  float *v31;
  float *v32;
  __m128i v33;
  __m128 v34;
  __m128i v35;
  int v36;
  int v37;
  float v38; // xmm4_4
  float v39; // xmm3_4
  __m128 v40;
  float v41; // xmm3_4
  float v42; // xmm3_4
  __m128 v43;
  __m128 v44;
  float v45; // xmm2_4
  __m128i v46;
  float v47; // xmm5_4
  int v48;
  float v49; // xmm4_4
  float v50; // xmm3_4
  uint64_t v51; // xmm4_8
  __m128 v52;
  float v53; // xmm2_4
  float v54; // xmm1_4
  __m128 v55;
  float v56; // xmm0_4
  float v57; // xmm3_4
  int v58;
  float *v59;
  float *v60;
  __m128i v61;
  __m128i v62;
  float v63; // xmm7_4
  int v64;
  float v65; // xmm5_4
  float v66; // xmm4_4
  __m128 v67;
  float v68; // xmm3_4
  __m128 m128i_i128;
  __m128 v70;
  __m128 v71;
  float v72; // xmm2_4
  __m128i v73;
  int v74; // xmm4_4
  float v75; // xmm3_4
  __m128 v76;
  __m128 v77;
  float v78;
  float v79;
  float v80;
  int v81;
  float v82;
  float v83;
  int v84;
  float v85;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;

  v3 = COERCE_FLOAT(_mm_cvtsi128_si32(g4_to_m128i(*((unsigned int *)self + 2))));
  v4 = (2130706432 - LODWORD(v3)) & ((LODWORD(v3) ^ (LODWORD(v3) + 2139095040)) >> 31);
  v93 = *((float *)self + 2);
  v5 = ((a2 & 0x7F800000u) >> 23) - 127;
  v88 = (float)((float)(2.0 - (float)(v93 * (float)((float)(2.0 - (float)(v93 * *(float *)&v4)) * *(float *)&v4)))
              * (float)((float)(2.0 - (float)(v93 * *(float *)&v4)) * *(float *)&v4))
      * (float)(2.0
              - (float)(v3
                      * (float)((float)(2.0
                                      - (float)(v93
                                              * (float)((float)(2.0 - (float)(v93 * *(float *)&v4)) * *(float *)&v4)))
                              * (float)((float)(2.0 - (float)(v93 * *(float *)&v4)) * *(float *)&v4))));
  if ( v5 < 0 )
  {
    v9 = 1;
    result = 0;
  }
  else
  {
    v6 = a2 & 0x7FFFFF | 0x800000;
    if ( v5 > 23 )
      v7 = v6 << (((a2 & 0x7F800000u) >> 23) + 106);
    else
      v7 = v6 >> (23 - v5);
    result = (((a2 >> 31) | 1) * v7) & 0x7FFFFFFF | a2 & 0x80000000;
    if ( result < 0 )
      result = 0;
    v9 = result + 1;
  }
  v10 = self;
  v11 = *((uint32_t *)self + 9);
  if ( v11 <= v9 )
  {
    result = v11 - 2;
    v9 = v11 - 1;
    v10 = self;
  }
  v12 = *((uint32_t *)v10 + 8);
  v84 = 16 * result;
  v13 = (float *)(v12 + 16 * result);
  v81 = 16 * v9;
  v14 = (unsigned int *)(v12 + 16 * v9);
g4_m128_raw(v15) = *v14;
g4_m128_lane<float>(v15, 0) =g4_m128_lane<float>(v15, 0) - *v13;
  *(uint32_t *)a3 =g4_m128_lane<int32_t>(v15, 0);
  m128_i128 =g4_m128_raw(G4_BITCAST<__m128i>(v15));
g4_m128_raw(v16) = v14[1];
g4_m128_lane<float>(v16, 0) =g4_m128_lane<float>(v16, 0) - v13[1];
  *((uint32_t *)a3 + 1) =g4_m128_lane<int32_t>(v16, 0);
g4_m128_raw(v17) = v14[2];
g4_m128_lane<float>(v17, 0) =g4_m128_lane<float>(v17, 0) - v13[2];
  *((uint32_t *)a3 + 2) =g4_m128_lane<int32_t>(v17, 0);
g4_m128_raw(v18) = v14[3];
g4_m128_lane<float>(v18, 0) =g4_m128_lane<float>(v18, 0) - v13[3];
  *(float *)g4_m128_ptr<int32_t>(m128_i128) = (float)((float)(g4_m128_lane<float>(v15, 0) *g4_m128_lane<float>(v15, 0))
                                        + (float)(g4_m128_lane<float>(v16, 0) *g4_m128_lane<float>(v16, 0)))
                                + (float)(g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v17, 0));
g4_m128_raw(v20) = 0;
  if ( *(float *)g4_m128_ptr<int32_t>(m128_i128) > 0.0 )
  {
    v21 = 0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128);
    v22 = _mm_cvtsi128_si32(m128_i128) >> 1;
    v23 = (_mm_cvtsi128_si32(m128_i128) + 2139095040) >> 31;
    v24 = (float)(1.5 * COERCE_FLOAT(v23 & (1597463174 - v22)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(m128_i128)) * COERCE_FLOAT(v23 & (1597463174 - v22)))
                * (float)(COERCE_FLOAT(v23 & (1597463174 - v22)) * COERCE_FLOAT(v23 & (1597463174 - v22))));
    v25 = 1.5 * v24;
    v26 = (float)(v21 * v24) * (float)(v24 * v24);
g4_m128_raw(v20) = 0x3FC00000u;
g4_m128_lane<float>(v20, 0) = (float)(1.5 * (float)(v25 - v26))
                    - (float)((float)(v21 * (float)(v25 - v26)) * (float)((float)(v25 - v26) * (float)(v25 - v26)));
  }
  v27 = v15;
g4_m128_lane<float>(v27, 0) =g4_m128_lane<float>(v15, 0) *g4_m128_lane<float>(v20, 0);
  v28 =g4_m128_lane<float>(v16, 0) *g4_m128_lane<float>(v20, 0);
  v91 =g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v20, 0);
g4_m128_lane<uint64_t>(v29, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v15, v16), 0);
g4_m128_lane<uint64_t>(v29, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v17, v18), 0);
  v89 =g4_m128_lane<float>(v18, 0) *g4_m128_lane<float>(v20, 0);
  *(__m128 *)a3 = _mm_mul_ps(v29, _mm_shuffle_ps(v20, v20, 0));
  v30 = *(float *)&a2 - (float)result;
  if ( v93 <= v30 || result <= 0 )
  {
    v87 =g4_m128_lane<float>(v18, 0) *g4_m128_lane<float>(v20, 0);
    v90 =g4_m128_lane<float>(v17, 0) *g4_m128_lane<float>(v20, 0);
    v92 = v28;
  }
  else
  {
    --result;
    --v9;
    v31 = (float *)(v84 + *((uint32_t *)self + 8) - 16);
    v32 = (float *)(*((uint32_t *)self + 8) + v81 - 16);
g4_m128_raw(v33) = *(unsigned int *)v32;
g4_m128_raw(v34) = *((unsigned int *)v32 + 1);
    *(float *)g4_m128_ptr<int32_t>(v33) = *(float *)g4_m128_ptr<int32_t>(v33) - *v31;
g4_m128_lane<float>(v34, 0) =g4_m128_lane<float>(v34, 0) - v31[1];
    v82 = v32[2] - v31[2];
    v79 = v32[3] - v31[3];
    v35 = v33;
    *(float *)g4_m128_ptr<int32_t>(v35) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v33) * *(float *)g4_m128_ptr<int32_t>(v33))
                                    + (float)(g4_m128_lane<float>(v34, 0) *g4_m128_lane<float>(v34, 0)))
                            + (float)(v82 * v82);
    if ( *(float *)g4_m128_ptr<int32_t>(v35) <= 0.0 )
    {
g4_m128_raw(v40) = 0;
    }
    else
    {
      v36 = _mm_cvtsi128_si32(v35) >> 1;
      v37 = (_mm_cvtsi128_si32(v35) + 2139095040) >> 31;
      v85 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v35);
      v38 = (float)(1.5 * COERCE_FLOAT(v37 & (1597463174 - v36)))
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * COERCE_FLOAT(v37 & (1597463174 - v36)))
                  * (float)(COERCE_FLOAT(v37 & (1597463174 - v36)) * COERCE_FLOAT(v37 & (1597463174 - v36))));
      v39 = (float)(1.5 * v38) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v35)) * v38) * (float)(v38 * v38));
g4_m128_raw(v40) = 0x3FC00000u;
g4_m128_lane<float>(v40, 0) = (float)(1.5 * v39) - (float)((float)(v85 * v39) * (float)(v39 * v39));
    }
g4_m128_lane<float>(v34, 0) =g4_m128_lane<float>(v34, 0) *g4_m128_lane<float>(v40, 0);
    v41 = (float)(v93 - v30) * 0.5;
    v43 = v34;
    v42 = v41 * v88;
g4_m128_lane<float>(v27, 0) =g4_m128_lane<float>(v27, 0)
                    + (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v33) *g4_m128_lane<float>(v40, 0)) -g4_m128_lane<float>(v27, 0)) * v42);
g4_m128_raw(v44) = LODWORD(v82);
g4_m128_lane<float>(v43, 0) = (float)((float)(g4_m128_lane<float>(v34, 0) - v28) * v42) + v28;
    v86 =g4_m128_lane<float>(v27, 0);
g4_m128_lane<float>(v44, 0) = (float)((float)((float)(v82 *g4_m128_lane<float>(v40, 0)) - v91) * v42) + v91;
    v45 = (float)((float)(g4_m128_lane<float>(v40, 0) * v79) - v89) * v42;
    v46 =g4_m128_raw(G4_BITCAST<__m128i>(v27));
g4_m128_lane<float>(v40, 0) = v45 + v89;
    *(float *)g4_m128_ptr<int32_t>(v46) = (float)((float)(g4_m128_lane<float>(v27, 0) *g4_m128_lane<float>(v27, 0))
                                    + (float)(g4_m128_lane<float>(v43, 0) *g4_m128_lane<float>(v43, 0)))
                            + (float)(g4_m128_lane<float>(v44, 0) *g4_m128_lane<float>(v44, 0));
    if ( *(float *)g4_m128_ptr<int32_t>(v46) <= 0.0 )
    {
g4_m128_raw(v27) = 0;
    }
    else
    {
      v47 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v46);
      v48 = ((_mm_cvtsi128_si32(v46) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v46) >> 1));
g4_m128_raw(v27) = 0x3FC00000u;
      v49 = (float)(*(float *)&v48 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v46)) * *(float *)&v48)
                  * (float)(*(float *)&v48 * *(float *)&v48));
      v50 = (float)(v49 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v46)) * v49) * (float)(v49 * v49));
g4_m128_lane<float>(v27, 0) = (float)(1.5 * v50) - (float)((float)(v47 * v50) * (float)(v50 * v50));
    }
    v51 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v44, v40), 0);
g4_m128_lane<uint64_t>(v52, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(g4_m128_from<__m128>(LODWORD(v86)), v43), 0);
    v53 =g4_m128_lane<float>(v40, 0) *g4_m128_lane<float>(v27, 0);
g4_m128_lane<uint64_t>(v52, 1) = v51;
    v54 =g4_m128_lane<float>(v44, 0) *g4_m128_lane<float>(v27, 0);
    v55 = _mm_mul_ps(v52, _mm_shuffle_ps(v27, v27, 0));
    v56 =g4_m128_lane<float>(v43, 0) *g4_m128_lane<float>(v27, 0);
g4_m128_lane<float>(v27, 0) =g4_m128_lane<float>(v27, 0) * v86;
    v87 = v53;
    v90 = v54;
    *(__m128 *)a3 = v55;
    v92 = v56;
  }
  v57 = (float)v9 - *(float *)&a2;
  if ( v93 > v57 && *((uint32_t *)self + 9) - 1 > v9 )
  {
    v58 = *((uint32_t *)self + 8);
    v59 = (float *)(v58 + 16 * (result + 1));
    v60 = (float *)(v58 + 16 * (v9 + 1));
g4_m128_raw(v61) = *(unsigned int *)v60;
    *(float *)g4_m128_ptr<int32_t>(v61) = *(float *)g4_m128_ptr<int32_t>(v61) - *v59;
    v83 = v60[1] - v59[1];
    v80 = v60[2] - v59[2];
    v78 = v60[3] - v59[3];
    v62 = v61;
    *(float *)g4_m128_ptr<int32_t>(v62) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v61) * *(float *)g4_m128_ptr<int32_t>(v61)) + (float)(v83 * v83))
                            + (float)(v80 * v80);
    if ( *(float *)g4_m128_ptr<int32_t>(v62) <= 0.0 )
    {
g4_m128_raw(v67) = 0;
    }
    else
    {
      v63 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v62);
      v64 = ((_mm_cvtsi128_si32(v62) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v62) >> 1));
g4_m128_raw(v67) = 0x3FC00000u;
      v65 = (float)(*(float *)&v64 * 1.5)
          - (float)((float)(v63 * *(float *)&v64) * (float)(*(float *)&v64 * *(float *)&v64));
      v66 = (float)(v65 * 1.5) - (float)((float)(v63 * v65) * (float)(v65 * v65));
g4_m128_lane<float>(v67, 0) = (float)(1.5 * v66) - (float)((float)(v63 * v66) * (float)(v66 * v66));
    }
g4_m128_raw(v71) = LODWORD(v80);
    m128i_i128 =g4_m128_raw(G4_BITCAST<__m128>(v61));
g4_m128_lane<float>(m128i_i128, 0) = *(float *)g4_m128_ptr<int32_t>(v61) *g4_m128_lane<float>(v67, 0);
g4_m128_raw(v70) = LODWORD(v83);
    v68 = (float)((float)(v93 - v57) * 0.5) * v88;
g4_m128_lane<float>(m128i_i128, 0) = (float)((float)(g4_m128_lane<float>(m128i_i128, 0) -g4_m128_lane<float>(v27, 0)) * v68) +g4_m128_lane<float>(v27, 0);
g4_m128_lane<float>(v70, 0) = (float)((float)((float)(v83 *g4_m128_lane<float>(v67, 0)) - v92) * v68) + v92;
g4_m128_lane<float>(v71, 0) = (float)((float)((float)(v80 *g4_m128_lane<float>(v67, 0)) - v90) * v68) + v90;
    v72 = (float)((float)(g4_m128_lane<float>(v67, 0) * v78) - v87) * v68;
    v73 =g4_m128_raw(G4_BITCAST<__m128i>(m128i_i128));
g4_m128_lane<float>(v67, 0) = v72 + v87;
    *(float *)g4_m128_ptr<int32_t>(v73) = (float)((float)(g4_m128_lane<float>(m128i_i128, 0) *g4_m128_lane<float>(m128i_i128, 0))
                                    + (float)(g4_m128_lane<float>(v70, 0) *g4_m128_lane<float>(v70, 0)))
                            + (float)(g4_m128_lane<float>(v71, 0) *g4_m128_lane<float>(v71, 0));
    if ( *(float *)g4_m128_ptr<int32_t>(v73) <= 0.0 )
    {
g4_m128_raw(v76) = 0;
    }
    else
    {
      v74 = ((_mm_cvtsi128_si32(v73) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v73) >> 1));
      v94 = 0.5 * *(float *)g4_m128_ptr<int32_t>(v73);
g4_m128_raw(v76) = 0x3FC00000u;
      v75 = (float)(*(float *)&v74 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v73)) * *(float *)&v74)
                  * (float)(*(float *)&v74 * *(float *)&v74));
g4_m128_lane<float>(v76, 0) = (float)(1.5 * (float)((float)(v75 * 1.5) - (float)((float)(v94 * v75) * (float)(v75 * v75))))
                      - (float)((float)(v94
                                      * (float)((float)(v75 * 1.5) - (float)((float)(v94 * v75) * (float)(v75 * v75))))
                              * (float)((float)((float)(v75 * 1.5) - (float)((float)(v94 * v75) * (float)(v75 * v75)))
                                      * (float)((float)(v75 * 1.5) - (float)((float)(v94 * v75) * (float)(v75 * v75)))));
    }
    result = (signed int)(uintptr_t)(a3);
g4_m128_lane<uint64_t>(v77, 0) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(m128i_i128, v70), 0);
g4_m128_lane<uint64_t>(v77, 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v71, v67), 0);
    *(__m128 *)a3 = _mm_mul_ps(v77, _mm_shuffle_ps(v76, v76, 0));
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getNearestPoint  (binary VA: 0x1718770)
// Original: hkpLinearParametricCurve::getNearestPoint
// ----------------------------------------------------------------------------
long double hkpLinearParametricCurve::getNearestPoint(hkpLinearParametricCurve::Self *self, float a2, const hkVector4f::Self *a3, hkVector4f::Self *a4)
{
  unsigned int v4;
  int v5;
  char v6;
  int v7;
  char v8;
  int v9;
  int v10;
  int v11;
  int v12;
  float *v13;
  __m128i v14;
  float v15; // xmm0_4
  float v16; // xmm5_4
  float *v17;
  int v18;
  float *v19;
  float v20; // xmm1_4
  float v21; // xmm3_4
  __m128i v22;
  int v23;
  float v24; // xmm2_4
  float v25; // xmm0_4
  float *v26;
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm4_4
  float *v30;
  float v31; // xmm2_4
  float v32; // xmm7_4
  float *v33;
  float v34; // xmm1_4
  float v35; // xmm4_4
  float v36; // xmm7_4
  float v37; // xmm4_4
  float v38; // xmm1_4
  float v39; // xmm3_4
  float v40; // xmm0_4
  float v41; // xmm2_4
  float v43; // xmm1_4
  bool v44;
  float v45; // xmm2_4
  float v46; // xmm2_4
  float v47; // xmm0_4
  __m128i v48;
  int v49;
  int v50;
  float v51; // xmm1_4
  float v52; // xmm0_4
  float v54;
  int v55;
  float *v56;
  float v57;
  float v58;
  float v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
  float v65;
  float *v66;
  int v67;
  int v68;
  int v69;
  float v70;
  float v71;
  char v72;
  float v73;
  float v74;
  float v75;

  v4 = (LODWORD(a2) & 0x7F800000u) >> 23;
  v5 = v4 - 127;
  v6 = v4 + 106;
  v7 = (int)(v4 - 151) >> 31;
  v72 = v6;
  v8 = v7 & (23 - v5);
  v9 = (LODWORD(a2) & ~(((LODWORD(a2) & 0x7FFFFFFF) - 1) >> 31) & 0x7FFFFF | 0x800000)
     & (~v7 | (-8388608 >> ((v7 & 0x17) - v8)));
  v67 = (~(v5 >> 31) & ((((LODWORD(a2) & ~(((LODWORD(a2) & 0x7FFFFFFF) - 1) >> 31)) >> 31) | (v9 + v9 - 1)) - v9 + 1)) >> v8;
  v10 = 0;
  v68 = v67 << (~(uint8_t)v7 & v72);
  if ( v68 >= 0 )
    v10 = v68;
  v69 = v10;
  v11 = v10 + 1;
  v12 = *((uint32_t *)self + 9);
  if ( v11 >= v12 )
  {
    v11 = v12 - 1;
    v69 = v12 - 2;
  }
  v66 = *((float **)self + 8);
  v62 = *(float *)a3;
  v60 = *((float *)a3 + 1);
  v59 = *((float *)a3 + 2);
  v13 = &v66[4 * v11];
g4_m128_raw(v14) = *(unsigned int *)v13;
  v15 = v13[2];
  v16 = v13[1];
  v17 = v66;
  v70 = v15;
  while ( 1 )
  {
    while ( 1 )
    {
      v22 = v14;
      v18 = 4 * v11;
      v19 = &v17[4 * v69];
      v20 = v19[1];
      v56 = &v17[4 * v11];
      v65 = *(float *)g4_m128_ptr<int32_t>(v14) - *v19;
      v64 = v16 - v20;
      v21 = v19[2];
      v74 = v15 - v21;
      *(float *)g4_m128_ptr<int32_t>(v22) = (float)((float)(v65 * v65) + (float)((float)(v16 - v20) * (float)(v16 - v20)))
                              + (float)(v74 * v74);
      v23 = _mm_cvtsi128_si32(v22);
      v55 = v23 + 2139095040;
      v24 = (float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * COERCE_FLOAT((2130706432 - v23) & ((v23 ^ v55) >> 31))))
          * COERCE_FLOAT((2130706432 - v23) & ((v23 ^ v55) >> 31));
      v25 = (float)((float)((float)((float)(v62 - *v19) * v65) + (float)((float)(v60 - v20) * (float)(v16 - v20)))
                  + (float)((float)(v15 - v21) * (float)(v59 - v21)))
          * (float)((float)(2.0
                          - (float)(*(float *)g4_m128_ptr<int32_t>(v22)
                                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * v24)) * v24)))
                  * (float)((float)(2.0 - (float)(*(float *)g4_m128_ptr<int32_t>(v22) * v24)) * v24));
      if ( v25 >= 0.0 )
        break;
      if ( v69 == 0 )
      {
        v26 = &v17[4 * v11];
        v34 = *v66;
        v33 = *((float **)self + 8);
        v31 = 0.0;
        v32 = v70 - v66[2];
        v35 = *(float *)g4_m128_ptr<int32_t>(v14) - *v66;
        v64 = v16 - v66[1];
        goto LABEL_14;
      }
      --v69;
      --v11;
      v30 = &v66[v18 - 4];
g4_m128_raw(v14) = *(unsigned int *)v30;
      v15 = v30[2];
      v16 = v30[1];
      v17 = *((float **)self + 8);
      v70 = v15;
    }
    v73 = v60 - v16;
    v58 = v62 - *(float *)g4_m128_ptr<int32_t>(v14);
    v57 = v59 - v70;
    if ( (float)((float)((float)(v65 * (float)(v62 - *(float *)g4_m128_ptr<int32_t>(v14))) + (float)(v64 * (float)(v60 - v16)))
               + (float)(v74 * (float)(v59 - v70))) <= 0.0
      || (++v11, *((uint32_t *)self + 9) <= v11) )
    {
      v31 = (float)v69;
      v32 = v74;
      v33 = &v17[4 * v69];
      v34 = *v19;
      v26 = v56;
      v35 = *(float *)g4_m128_ptr<int32_t>(v14) - *v19;
      goto LABEL_14;
    }
    v26 = &v66[v18 + 4];
    v27 = *v26 - *(float *)g4_m128_ptr<int32_t>(v14);
    v28 = v26[1] - v16;
    v29 = v26[2] - v70;
    v54 = v27;
    if ( (float)((float)((float)(v58 * v27) + (float)(v28 * v73)) + (float)(v57 * v29)) <= 0.0 )
      break;
    v70 = v26[2];
    ++v69;
    v16 = v26[1];
g4_m128_raw(v14) = *(unsigned int *)v26;
    v15 = v70;
    v17 = *((float **)self + 8);
  }
  v43 = (float)((float)(v65 * v65) + (float)((float)(v16 - v20) * (float)(v16 - v20))) + (float)(v74 * v74);
  v44 = *(float *)g4_m128_ptr<int32_t>(v22) > 0.0;
  v32 = v74;
  v45 = 0.0;
  if ( v44 )
  {
    v46 = (float)(1.5 * COERCE_FLOAT((v55 >> 31) & (1597463174 - (v23 >> 1))))
        - (float)((float)((float)(v43 * 0.5) * COERCE_FLOAT((v55 >> 31) & (1597463174 - (v23 >> 1))))
                * (float)(COERCE_FLOAT((v55 >> 31) & (1597463174 - (v23 >> 1)))
                        * COERCE_FLOAT((v55 >> 31) & (1597463174 - (v23 >> 1)))));
    v47 = (float)(1.5 * v46) - (float)((float)((float)(v43 * 0.5) * v46) * (float)(v46 * v46));
    v45 = (float)(1.5 * v47) - (float)((float)((float)(v43 * 0.5) * v47) * (float)(v47 * v47));
  }
  v71 = v65 * v45;
  v63 = v64 * v45;
  v61 = v45 * v74;
g4_m128_raw(v48) = LODWORD(v54);
  *(float *)g4_m128_ptr<int32_t>(v48) = (float)((float)(*(float *)g4_m128_ptr<int32_t>(v48) * *(float *)g4_m128_ptr<int32_t>(v48)) + (float)(v28 * v28))
                          + (float)(v29 * v29);
  if ( *(float *)g4_m128_ptr<int32_t>(v48) <= 0.0 )
  {
    v75 = 0.0;
  }
  else
  {
    v49 = _mm_cvtsi128_si32(v48) >> 1;
    v50 = (_mm_cvtsi128_si32(v48) + 2139095040) >> 31;
    v51 = (float)(1.5 * COERCE_FLOAT(v50 & (1597463174 - v49)))
        - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v48)) * COERCE_FLOAT(v50 & (1597463174 - v49)))
                * (float)(COERCE_FLOAT(v50 & (1597463174 - v49)) * COERCE_FLOAT(v50 & (1597463174 - v49))));
    v52 = (float)(1.5 * v51) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v48)) * v51) * (float)(v51 * v51));
    v75 = (float)(1.5 * v52) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v48)) * v52) * (float)(v52 * v52));
  }
  if ( (float)-(float)((float)((float)((float)(v54 * v75) * v58) + (float)((float)(v28 * v75) * v73))
                     + (float)((float)(v29 * v75) * v57)) <= (float)((float)((float)(v71 * v58) + (float)(v63 * v73))
                                                                   + (float)(v61 * v57)) )
  {
    v25 = 0.01f;
    v31 = (float)(v69 + 1);
    v33 = &v66[4 * v69 + 4];
    v34 = *v33;
    v35 = *v26 - *v33;
    v64 = v26[1] - v33[1];
    v32 = v26[2] - v33[2];
  }
  else
  {
    v31 = (float)v69;
    v34 = *v19;
    v33 = &v17[4 * v69];
    v25 = 0.99f;
    v26 = v56;
    v35 = v65;
  }
LABEL_14:
  v36 = v32 * v25;
  v37 = (float)(v35 * v25) + v34;
  v38 = v64 * v25;
  v39 = (float)(v26[3] - v33[3]) * v25;
  v40 = v25 + v31;
  *(float *)a4 = v37;
  *((float *)a4 + 1) = v38 + v33[1];
  *((float *)a4 + 2) = v33[2] + v36;
  *((float *)a4 + 3) = v39 + v33[3];
  if ( *((uint8_t *)self + 12) != 0 )
  {
    v41 = (float)(*((uint32_t *)self + 9) - 1);
    if ( v40 < 0.25 )
    {
      return (float)((long double (*)(hkpLinearParametricCurve::Self *, uint32_t, const hkVector4f::Self *, hkVector4f::Self *))*(uint32_t *)(*(uint32_t *)self + 24))(
                      self,
                      v41 - (float)(1.0 - v40),
                      a3,
                      a4);
    }
    else
    {
      if ( v40 <= (float)(v41 - 0.25) )
        return v40;
      return (float)((long double (*)(hkpLinearParametricCurve::Self *, uint32_t, const hkVector4f::Self *, hkVector4f::Self *))*(uint32_t *)(*(uint32_t *)self + 24))(
                      self,
                      1.0 - (float)(v41 - v40),
                      a3,
                      a4);
    }
  }
  return v40;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::Construct  (binary VA: 0x1718f30)
// Original: hkpLinearParametricCurve::hkpLinearParametricCurve
// ----------------------------------------------------------------------------
void hkpLinearParametricCurve::Construct(hkpLinearParametricCurve::Self *self)
{
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209CD68);
  *((uint32_t *)self + 1) = -65535;
  *((uint32_t *)self + 2) = 1008981770;
  *((uint8_t *)self + 12) = 0;
  *((uint32_t *)self + 8) = 0;
  *((uint32_t *)self + 9) = 0;
  *((uint32_t *)self + 10) = 0x80000000;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 5) = 1065353216;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 13) = 0x80000000;
  *((uint32_t *)self + 6) = 0;
  *((uint32_t *)self + 7) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::setClosedLoop  (binary VA: 0x1718fc0)
// Original: hkpLinearParametricCurve::setClosedLoop
// ----------------------------------------------------------------------------
int hkpLinearParametricCurve::setClosedLoop(int a1, uint8_t a2)
{
  *(uint8_t *)(a1 + 12) = a2;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::addPoint  (binary VA: 0x1718fd0)
// Original: hkpLinearParametricCurve::addPoint
// ----------------------------------------------------------------------------
int hkpLinearParametricCurve::addPoint(hkpLinearParametricCurve::Self *self, const hkVector4f::Self *a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  float *v6;
  int v7;
  float v8; // xmm2_4
  __m128i v9;
  int v10; // xmm2_4
  float v11; // xmm2_4
  float v12; // xmm1_4
  float v13; // xmm2_4
  int result;
  int v15;
  int v16;
  float v17;

  v2 = *((uint32_t *)self + 9);
  if ( v2 == (*((uint32_t *)self + 10) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpLinearParametricCurve::Self *)((char *)self + 32),
      16,
      v16);
    v2 = *((uint32_t *)self + 9);
  }
  v3 = (uint32_t *)(*((uint32_t *)self + 8) + 16 * v2);
  *v3 = *(uint32_t *)a2;
  v3[1] = *((uint32_t *)a2 + 1);
  v3[2] = *((uint32_t *)a2 + 2);
  v3[3] = *((uint32_t *)a2 + 3);
  v4 = *((uint32_t *)self + 9);
  *((uint32_t *)self + 9) = v4 + 1;
  if ( v4 != 0 )
  {
    v5 = *((uint32_t *)self + 12);
    v6 = (float *)(*((uint32_t *)self + 8) + 16 * (v4 - 1));
g4_m128_raw(v9) = *(unsigned int *)a2;
    v7 = *((uint32_t *)self + 11);
    v8 = 0.0;
    *(float *)g4_m128_ptr<int32_t>(v9) = (float)((float)((float)(*(float *)g4_m128_ptr<int32_t>(v9) - *v6)
                                           * (float)(*(float *)g4_m128_ptr<int32_t>(v9) - *v6))
                                   + (float)((float)(*((float *)a2 + 1) - v6[1]) * (float)(*((float *)a2 + 1) - v6[1])))
                           + (float)((float)(*((float *)a2 + 2) - v6[2]) * (float)(*((float *)a2 + 2) - v6[2]));
    if ( *(float *)g4_m128_ptr<int32_t>(v9) > 0.0 )
    {
      v10 = ((_mm_cvtsi128_si32(v9) + 2139095040) >> 31) & (1597463174 - (_mm_cvtsi128_si32(v9) >> 1));
      v11 = (float)(*(float *)&v10 * 1.5)
          - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * *(float *)&v10)
                  * (float)(*(float *)&v10 * *(float *)&v10));
      v12 = (float)(v11 * 1.5) - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v11) * (float)(v11 * v11));
      v8 = (float)((float)(1.5 * v12)
                 - (float)((float)((float)(0.5 * *(float *)g4_m128_ptr<int32_t>(v9)) * v12) * (float)(v12 * v12)))
         * *(float *)g4_m128_ptr<int32_t>(v9);
    }
    v13 = v8 + *(float *)(v7 + 4 * v5 - 4);
    result = *((uint32_t *)self + 13) & 0x3FFFFFFF;
    if ( v5 == result )
    {
      result = hkArrayUtil::reserveMore(
                 (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
                 (hkpLinearParametricCurve::Self *)((char *)self + 44),
                 4,
                 SLODWORD(v13));
      v7 = *((uint32_t *)self + 11);
      v5 = *((uint32_t *)self + 12);
      v13 = v17;
    }
    *(float *)(v7 + 4 * v5) = v13;
    ++*((uint32_t *)self + 12);
  }
  else
  {
    v15 = *((uint32_t *)self + 12);
    if ( v15 == (*((uint32_t *)self + 13) & 0x3FFFFFFF) )
    {
      hkArrayUtil::reserveMore(
        (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
        (hkpLinearParametricCurve::Self *)((char *)self + 44),
        4,
        v16);
      v15 = *((uint32_t *)self + 12);
    }
    result = *((uint32_t *)self + 11);
    *(uint32_t *)(result + 4 * v15) = 0;
    ++*((uint32_t *)self + 12);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::clone  (binary VA: 0x17191e0)
// Original: hkpLinearParametricCurve::clone
// ----------------------------------------------------------------------------
int hkpLinearParametricCurve::clone(hkpLinearParametricCurve::Self *self, int a2, int a3, int a4, int a5, int a6, int a7, int a8)
{
  int address;
  int v9;
  int i;
  int v11;
  int v12; // xmm0_4
  int v13;
  int v14;
  int v15;
  int v16;
  int v17;
  __m128 v18;
  int v20;
  int v21;
  int v22;
  int v23;
  int v24;
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
  int v35;
  int v36;
  unsigned int v37;
  int v38;
  unsigned int v39;
  hkpLinearParametricCurve::Self *v40;
  unsigned int v41;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v9 = (*(int (**)(uint32_t, int, int, int, int, int, int, int, int, int, int, int, int, int, int, int))(**(uint32_t **)(*(uint32_t *)address + 44) + 8))(
         *(uint32_t *)(*(uint32_t *)address + 44),
         64,
         v21,
         v22,
         v23,
         v24,
         v25,
         v26,
         v27,
         v28,
         v29,
         v30,
         v31,
         v32,
         v33,
         v34);
  hkpLinearParametricCurve::Construct((hkpLinearParametricCurve::Self *)v9);
  v38 = *((uint32_t *)self + 9);
  if ( v38 > 0 )
  {
    v40 = (hkpLinearParametricCurve::Self *)v9;
    for ( i = 0; i != v38; ++i )
      hkpLinearParametricCurve::addPoint(v40, (const hkVector4f::Self *)(*((uint32_t *)self + 8) + 16 * i));
    v9 = (int)(uintptr_t)(v40);
  }
  v11 = *(uint32_t *)(v9 + 52);
  *(uint8_t *)(v9 + 12) = *((uint8_t *)self + 12);
  *(uint32_t *)(v9 + 16) = *((uint32_t *)self + 4);
  *(uint32_t *)(v9 + 20) = *((uint32_t *)self + 5);
  v12 = *((uint32_t *)self + 6);
  *(uint32_t *)(v9 + 28) = 0;
  *(uint32_t *)(v9 + 24) = v12;
  v13 = *((uint32_t *)self + 12);
  if ( (v11 & 0x3FFFFFFF) >= v13 )
  {
    v39 = *((uint32_t *)self + 12);
    v41 = *(uint32_t *)(v9 + 44);
  }
  else
  {
    if ( v11 >= 0 )
    {
      (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
        (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
        *(uint32_t *)(v9 + 44),
        4 * v11);
      v13 = *((uint32_t *)self + 12);
    }
    a8 = 4 * v13;
    v14 = (*(int (**)(uint32_t *, int *))(hkContainerHeapAllocator::s_alloc + 16))(
            (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
            &a8);
    v15 = a8;
    *(uint32_t *)(v9 + 44) = v14;
    v41 = v14;
    *(uint32_t *)(v9 + 52) = v15 / 4;
    v39 = *((uint32_t *)self + 12);
    v13 = v39;
  }
  *(uint32_t *)(v9 + 48) = v13;
  if ( v13 > 0 )
  {
    if ( (v41 >= *((uint32_t *)self + 11) + 16 || *((uint32_t *)self + 11) >= v41 + 16) && v39 > 0xB )
    {
      v16 = 0;
      v37 = 0;
      v35 = 4 * (v39 >> 2);
      v17 = *((uint32_t *)self + 11);
      do
      {
        ++v37;
        v18 = _mm_loadh_ps((const double *)(v17 + v16 + 8));
        _mm_storel_ps((double *)(v41 + v16), v18);
        _mm_storeh_ps((double *)(v41 + v16 + 8), v18);
        v16 += 16;
      }
      while ( v39 >> 2 > v37 );
      if ( v39 != v35 )
      {
        *(uint32_t *)(v41 + 16 * (v39 >> 2)) = *(uint32_t *)(v17 + 16 * (v39 >> 2));
        if ( v35 + 1 < (int)v39 )
        {
          *(uint32_t *)(v41 + 4 * (v35 + 1)) = *(uint32_t *)(v17 + 4 * (v35 + 1));
          if ( (int)v39 > v35 + 2 )
            *(uint32_t *)(v41 + 4 * (v35 + 2)) = *(uint32_t *)(v17 + 4 * (v35 + 2));
        }
      }
    }
    else
    {
      v20 = 0;
      v36 = *((uint32_t *)self + 11);
      do
      {
        *(uint32_t *)(v41 + 4 * v20) = *(uint32_t *)(v36 + 4 * v20);
        ++v20;
      }
      while ( v20 != v39 );
    }
  }
  *(uint32_t *)(v9 + 8) = *((uint32_t *)self + 2);
  return v9;
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::getSmoothingFactor  (binary VA: 0x1719450)
// Original: hkpLinearParametricCurve::getSmoothingFactor
// ----------------------------------------------------------------------------
long double hkpLinearParametricCurve::getSmoothingFactor(hkpLinearParametricCurve::Self *self)
{
  return *((float *)self + 2);
}

// ----------------------------------------------------------------------------
// Function: hkpLinearParametricCurve::setSmoothingFactor  (binary VA: 0x1719470)
// Original: hkpLinearParametricCurve::setSmoothingFactor
// ----------------------------------------------------------------------------
hkpLinearParametricCurve::Self * hkpLinearParametricCurve::setSmoothingFactor(hkpLinearParametricCurve::Self *self, float a2)
{
  *((float *)self + 2) = a2;
  return self;
}


