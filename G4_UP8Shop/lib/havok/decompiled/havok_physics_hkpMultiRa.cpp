#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMultiRa.h"

// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::Ray::staticClass  (binary VA: 0x169acc0)
// Original: hkpMultiRayShape::Ray::staticClass
// ----------------------------------------------------------------------------
void * hkpMultiRayShape::Ray::staticClass()
{
  return &hkpMultiRayShapeRayClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::staticClass  (binary VA: 0x169ace0)
// Original: hkpMultiRayShape::staticClass
// ----------------------------------------------------------------------------
void * hkpMultiRayShape::staticClass()
{
  return &hkpMultiRayShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::castRayWithCollector  (binary VA: 0x16d65a0)
// Original: hkpMultiRayShape::castRayWithCollector
// ----------------------------------------------------------------------------
void hkpMultiRayShape::castRayWithCollector()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::castRay  (binary VA: 0x16d65b0)
// Original: hkpMultiRayShape::castRay
// ----------------------------------------------------------------------------
uint8_t * hkpMultiRayShape::castRay(uint8_t *a1)
{
  *a1 = 0;
  return a1;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::getAabb  (binary VA: 0x16d65c0)
// Original: hkpMultiRayShape::getAabb
// ----------------------------------------------------------------------------
int hkpMultiRayShape::getAabb(hkpMultiRayShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  uint32_t *v4;
  hkpMultiRayShape::Self *v5;
  const hkTransformf::Self *v6;
  int v7;
  int v8;
  int v9;
  float v10; // xmm5_4
  int v11;
  float v12; // xmm6_4
  float v13; // xmm6_4
  float v14; // xmm5_4
  float v15; // xmm4_4
  float *v16;
  float *v17;
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  int v21;
  __m128 v22;
  __m128 v23;
  __m128 v24;
  __m128 v25;
  __m128 v26;
  __m128 v27;
  __m128 v28;
  int v29;
  __m128 v30;
  int v31;
  float *v32;
  __m128i v33;
  int v34;
  g4_int128_t v35;
  int result;
  typedef hkAabb::Self *_g4_t_v37;
  typedef float _g4_t_v38;
  typedef float _g4_t_v39;
  typedef float _g4_t_v40;
  typedef float _g4_t_v41;
  typedef float _g4_t_v42;
  typedef float _g4_t_v43;
  typedef float _g4_t_v44;
  typedef float _g4_t_v45;
  typedef float _g4_t_v46;
  typedef float _g4_t_v47;
  typedef float _g4_t_v48;
  typedef float _g4_t_v49;
  typedef hkpMultiRayShape::Self *_g4_t_v50;
  typedef float _g4_t_v51;
  typedef int _g4_t_v52;
  typedef uint8_t _g4_t_v53[4];
  typedef uint32_t *_g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef uint32_t _g4_t_v57[134];
  enum : size_t {
    _g4_s0 = 688u,
    _g4_s1 = (0u + sizeof(_g4_t_v37)) > _g4_s0 ? (0u + sizeof(_g4_t_v37)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v38)) > _g4_s1 ? (4u + sizeof(_g4_t_v38)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v39)) > _g4_s2 ? (8u + sizeof(_g4_t_v39)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v40)) > _g4_s3 ? (12u + sizeof(_g4_t_v40)) : _g4_s3,
    _g4_s5 = (16u + sizeof(_g4_t_v41)) > _g4_s4 ? (16u + sizeof(_g4_t_v41)) : _g4_s4,
    _g4_s6 = (20u + sizeof(_g4_t_v42)) > _g4_s5 ? (20u + sizeof(_g4_t_v42)) : _g4_s5,
    _g4_s7 = (24u + sizeof(_g4_t_v43)) > _g4_s6 ? (24u + sizeof(_g4_t_v43)) : _g4_s6,
    _g4_s8 = (28u + sizeof(_g4_t_v44)) > _g4_s7 ? (28u + sizeof(_g4_t_v44)) : _g4_s7,
    _g4_s9 = (32u + sizeof(_g4_t_v45)) > _g4_s8 ? (32u + sizeof(_g4_t_v45)) : _g4_s8,
    _g4_s10 = (36u + sizeof(_g4_t_v46)) > _g4_s9 ? (36u + sizeof(_g4_t_v46)) : _g4_s9,
    _g4_s11 = (40u + sizeof(_g4_t_v47)) > _g4_s10 ? (40u + sizeof(_g4_t_v47)) : _g4_s10,
    _g4_s12 = (44u + sizeof(_g4_t_v48)) > _g4_s11 ? (44u + sizeof(_g4_t_v48)) : _g4_s11,
    _g4_s13 = (48u + sizeof(_g4_t_v49)) > _g4_s12 ? (48u + sizeof(_g4_t_v49)) : _g4_s12,
    _g4_s14 = (52u + sizeof(_g4_t_v50)) > _g4_s13 ? (52u + sizeof(_g4_t_v50)) : _g4_s13,
    _g4_s15 = (52u + sizeof(_g4_t_v51)) > _g4_s14 ? (52u + sizeof(_g4_t_v51)) : _g4_s14,
    _g4_s16 = (52u + sizeof(_g4_t_v52)) > _g4_s15 ? (52u + sizeof(_g4_t_v52)) : _g4_s15,
    _g4_s17 = (56u + sizeof(_g4_t_v53)) > _g4_s16 ? (56u + sizeof(_g4_t_v53)) : _g4_s16,
    _g4_s18 = (60u + sizeof(_g4_t_v54)) > _g4_s17 ? (60u + sizeof(_g4_t_v54)) : _g4_s17,
    _g4_s19 = (64u + sizeof(_g4_t_v55)) > _g4_s18 ? (64u + sizeof(_g4_t_v55)) : _g4_s18,
    _g4_s20 = (68u + sizeof(_g4_t_v56)) > _g4_s19 ? (68u + sizeof(_g4_t_v56)) : _g4_s19,
    _g4_s21 = (76u + sizeof(_g4_t_v57)) > _g4_s20 ? (76u + sizeof(_g4_t_v57)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v37 &v37 = *reinterpret_cast<_g4_t_v37 *>(_g4_sf + 0u);
  _g4_t_v38 &v38 = *reinterpret_cast<_g4_t_v38 *>(_g4_sf + 4u);
  _g4_t_v39 &v39 = *reinterpret_cast<_g4_t_v39 *>(_g4_sf + 8u);
  _g4_t_v40 &v40 = *reinterpret_cast<_g4_t_v40 *>(_g4_sf + 12u);
  _g4_t_v41 &v41 = *reinterpret_cast<_g4_t_v41 *>(_g4_sf + 16u);
  _g4_t_v42 &v42 = *reinterpret_cast<_g4_t_v42 *>(_g4_sf + 20u);
  _g4_t_v43 &v43 = *reinterpret_cast<_g4_t_v43 *>(_g4_sf + 24u);
  _g4_t_v44 &v44 = *reinterpret_cast<_g4_t_v44 *>(_g4_sf + 28u);
  _g4_t_v45 &v45 = *reinterpret_cast<_g4_t_v45 *>(_g4_sf + 32u);
  _g4_t_v46 &v46 = *reinterpret_cast<_g4_t_v46 *>(_g4_sf + 36u);
  _g4_t_v47 &v47 = *reinterpret_cast<_g4_t_v47 *>(_g4_sf + 40u);
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 44u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 48u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 52u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 52u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 52u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 56u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 60u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 64u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 68u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 76u);

  v4 = v57;
  v57[130] = (uint32_t)(uintptr_t)(&self);
  v5 = self;
  v6 = a2;
  v37 = a4;
  v54 = v57;
  v55 = 0;
  v56 = -2147483632;
  v7 = *((uint32_t *)self + 5);
  v8 = v7;
  if ( v7 > 16 )
  {
    v9 = 32;
    if ( v7 > 31 )
      v9 = *((uint32_t *)self + 5);
    v50 = self;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v53,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)&v54,
      v9,
      32);
    v5 = v50;
    v4 = v54;
    v8 = *((uint32_t *)v50 + 5);
  }
  v10 = *(float *)v6;
  v11 = 2 * v8 - 1;
  v12 = *((float *)v6 + 1);
  v55 = v7;
  v38 = v10;
  v45 = v12;
  v44 = *((float *)v6 + 2);
  v43 = *((float *)v6 + 3);
  v42 = *((float *)v6 + 4);
  v41 = *((float *)v6 + 5);
  v40 = *((float *)v6 + 6);
  v47 = *((float *)v6 + 7);
  v46 = *((float *)v6 + 8);
  v48 = *((float *)v6 + 9);
  v49 = *((float *)v6 + 10);
  v51 = *((float *)v6 + 11);
  v39 = *((float *)v6 + 12);
  v13 = *((float *)v6 + 13);
  v14 = *((float *)v6 + 14);
  v15 = *((float *)v6 + 15);
  v16 = (float *)&v4[4 * v11];
  v17 = (float *)(16 * v11 + *((uint32_t *)v5 + 4) + 4);
  do
  {
    v18 = *(v17 - 1);
    v16 -= 4;
    v19 = *v17;
    v17 -= 4;
    v20 = v17[5];
    v16[4] = (float)((float)((float)(v38 * v18) + (float)(v42 * v19)) + (float)(v46 * v20)) + v39;
    v16[5] = (float)((float)((float)(v45 * v18) + (float)(v41 * v19)) + (float)(v48 * v20)) + v13;
    v16[6] = (float)((float)((float)(v44 * v18) + (float)(v40 * v19)) + (float)(v49 * v20)) + v14;
    v16[7] = (float)((float)((float)(v18 * v43) + (float)(v19 * v47)) + (float)(v20 * v51)) + v15;
    --v11;
  }
  while ( v11 >= 0 );
  v21 = (int)(uintptr_t)(v54);
g4_m128_raw(v22) = 0x7F7FFFEEu;
g4_m128_raw(v23) = 0x7F7FFFEEu;
g4_m128_raw(v24) = 0x7F7FFFEEu;
g4_m128_raw(v25) = 0xFF7FFFEE;
g4_m128_raw(v26) = 0xFF7FFFEE;
g4_m128_raw(v27) = 0xFF7FFFEE;
  if ( v55 <= 0 )
  {
g4_m128_raw(v28) = 0;
    v52 = 0;
  }
  else
  {
g4_m128_raw(v28) = 0;
    v29 = (int)(uintptr_t)(v54);
g4_m128_raw(v30) = 0xFF7FFFEE;
    v31 = 0;
    v32 = (float *)(v54 + 4);
g4_m128_raw(v33) = 0;
    do
    {
      ++v31;
      v29 += 32;
g4_m128_lane<float>(v22, 0) = fminf(fminf(g4_m128_lane<float>(v22, 0), *v32), *(float *)(v29 - 32));
g4_m128_lane<float>(v23, 0) = fminf(fminf(g4_m128_lane<float>(v23, 0), v32[1]), *(float *)(v29 - 28));
g4_m128_lane<float>(v24, 0) = fminf(fminf(g4_m128_lane<float>(v24, 0), v32[2]), *(float *)(v29 - 24));
g4_m128_lane<float>(v28, 0) = fminf(fminf(g4_m128_lane<float>(v28, 0), v32[3]), *(float *)(v29 - 20));
g4_m128_lane<float>(v25, 0) = fmaxf(fmaxf(g4_m128_lane<float>(v25, 0), *v32), *(float *)(v29 - 32));
g4_m128_lane<float>(v26, 0) = fmaxf(fmaxf(g4_m128_lane<float>(v26, 0), v32[1]), *(float *)(v29 - 28));
g4_m128_lane<float>(v30, 0) = fmaxf(fmaxf(g4_m128_lane<float>(v30, 0), v32[2]), *(float *)(v29 - 24));
      *(float *)g4_m128_ptr<int32_t>(v33) = fmaxf(fmaxf(*(float *)g4_m128_ptr<int32_t>(v33), v32[3]), *(float *)(v29 - 20));
      v32 += 8;
    }
    while ( v31 != v55 );
    v34 = _mm_cvtsi128_si32(v33);
    v21 = (int)(uintptr_t)(v54);
    v27 = v30;
    v52 = v34;
  }
  v55 = 0;
  *(uint64_t *)&v35 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v22, v23), 0);
  *((uint64_t *)&v35 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v24, v28), 0);
  *(g4_int128_t *)v37 = v35;
  *(uint64_t *)&v35 =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v25, v26), 0);
  *((uint64_t *)&v35 + 1) =g4_m128_lane<uint64_t>(_mm_unpacklo_ps(v27, g4_to_m128((unsigned int)v52)), 0);
  *((g4_int128_t *)v37 + 1) = v35;
  result = v56;
  if ( v56 >= 0 )
    return (*(int (**)(uint32_t *, int, int))(hkContainerHeapAllocator::s_alloc + 20))(
             (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
             v21,
             32 * v56);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::Destroy  (binary VA: 0x16d6990)
// Original: hkpMultiRayShape::~hkpMultiRayShape
// ----------------------------------------------------------------------------
void hkpMultiRayShape::Destroy(hkpMultiRayShape::Self *self)
{
  int v1;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B1E8);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      32 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::Destroy_ea16d6a00  (binary VA: 0x16d6a00)
// Original: hkpMultiRayShape::~hkpMultiRayShape
// ----------------------------------------------------------------------------
void hkpMultiRayShape::Destroy_ea16d6a00(hkpMultiRayShape::Self *self)
{
  int v1;
  int v2;
  int v3;

  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B1E8);
  v1 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 5) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 4),
      32 * v1);
  *((uint32_t *)self + 4) = 0;
  *((uint32_t *)self + 6) = 0x80000000;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v2 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v3 = 32;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v3 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v2, 12, self, v3);
}



// ============================================================================
// Address:   0x16d6ab0 (size: 59 bytes)
// Symbol:    _ZN16hkpMultiRayShapeC1E24hkFinishLoadedObjectFlag
// Demangled: hkpMultiRayShape::hkpMultiRayShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN16hkpMultiRayShapeC2E24hkFinishLoadedObjectFlag'
void (**hkpMultiRayShape::Construct(int a1, int a2))(hkpMultiRayShape::Self * self)
{
  hkpShape::hkpShape(a1, a2);
  *(uint8_t *)(a1 + 8) = 33;
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_209B1E8);
  return (void (**)(hkpMultiRayShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_209B1E8));
}
// ----------------------------------------------------------------------------
// Function: hkpMultiRayShape::Construct  (binary VA: 0x16d6af0)
// Original: hkpMultiRayShape::hkpMultiRayShape
// ----------------------------------------------------------------------------
void hkpMultiRayShape::Construct(hkpMultiRayShape::Self *self, const hkpMultiRayShape::Ray::Self *a2, int a3, float a4)
{
  hkpMultiRayShape::Self *v4;
  hkpMultiRayShape::Self *v5;
  float v6; // xmm0_4
  int v7;
  int v8;
  int v9;
  int v10;
  int v11; // xmm1_4
  float v12; // xmm2_4
  float v13; // xmm1_4
  float v14; // xmm7_4
  __m128 v15;
  float v16; // xmm0_4
  float v17; // xmm1_4
  int v18;
  __m128 v19;
  float v20; // xmm6_4
  __m128 v21;
  float v22; // xmm4_4
  float v23; // xmm5_4
  __m128 v24;
  typedef const hkpMultiRayShape::Ray::Self *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef hkpMultiRayShape::Self *_g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29;
  typedef float _g4_t_v30;
  typedef float _g4_t_v31;
  typedef const hkpMultiRayShape::Ray::Self *_g4_t_v32;
  typedef int _g4_t_v33;
  typedef uint32_t _g4_t_v34[7];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (4u + sizeof(_g4_t_v25)) > _g4_s0 ? (4u + sizeof(_g4_t_v25)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v26)) > _g4_s1 ? (8u + sizeof(_g4_t_v26)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v27)) > _g4_s2 ? (12u + sizeof(_g4_t_v27)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v28)) > _g4_s3 ? (20u + sizeof(_g4_t_v28)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v29)) > _g4_s4 ? (24u + sizeof(_g4_t_v29)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v30)) > _g4_s5 ? (28u + sizeof(_g4_t_v30)) : _g4_s5,
    _g4_s7 = (36u + sizeof(_g4_t_v31)) > _g4_s6 ? (36u + sizeof(_g4_t_v31)) : _g4_s6,
    _g4_s8 = (40u + sizeof(_g4_t_v32)) > _g4_s7 ? (40u + sizeof(_g4_t_v32)) : _g4_s7,
    _g4_s9 = (44u + sizeof(_g4_t_v33)) > _g4_s8 ? (44u + sizeof(_g4_t_v33)) : _g4_s8,
    _g4_s10 = (52u + sizeof(_g4_t_v34)) > _g4_s9 ? (52u + sizeof(_g4_t_v34)) : _g4_s9
  };
  alignas(16) uint8_t _g4_sf[_g4_s10];
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 4u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 8u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 20u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 24u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 28u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 36u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 40u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 44u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 52u);

  v34[3] = (uint32_t)(uintptr_t)(&self);
  v4 = self;
  v27 = self;
  v25 = a2;
  v5 = self;
  v6 = a4;
  v7 = a3;
  *((uint32_t *)self + 1) = -65535;
  *((uint8_t *)v4 + 8) = 33;
  *((uint8_t *)v4 + 9) = 4;
  *((uint8_t *)v4 + 10) = 0;
  *((uint8_t *)v4 + 11) = 0;
  *((uint32_t *)v4 + 3) = 0;
  *((uint32_t *)v5 + 4) = 0;
  *(uint32_t *)v5 = ((uint32_t)(uintptr_t)&off_209B1E8);
  *((uint32_t *)v5 + 5) = 0;
  *((float *)v5 + 7) = v6;
  *((uint32_t *)v5 + 6) = 0x80000000;
  if ( v7 <= 0 )
  {
    v26 = 0;
    v8 = 0;
  }
  else
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v34,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v5 + 4,
      v7,
      32);
    v8 = *((uint32_t *)v5 + 5);
    v26 = *((uint32_t *)v5 + 4);
  }
  v33 = v7 - 1;
  *((uint32_t *)v27 + 5) = v7 + v8;
  if ( v7 - 1 >= 0 )
  {
    v9 = v26;
    v32 = v25;
    v10 = v26 + 16;
    do
    {
      *(uint32_t *)v9 = *(uint32_t *)v32;
      *(uint32_t *)(v9 + 4) = *((uint32_t *)v32 + 1);
      *(uint32_t *)(v9 + 8) = *((uint32_t *)v32 + 2);
      *(uint32_t *)(v9 + 12) = *((uint32_t *)v32 + 3);
      v18 = v9 - v26;
      *(uint32_t *)(v18 + v10) = *((uint32_t *)v32 + 4);
g4_m128_raw(v19) = *(unsigned int *)(v9 + 16);
      *(uint32_t *)(v18 + v10 + 4) = *((uint32_t *)v32 + 5);
      v21 = v19;
      v20 = *(float *)(v9 + 20);
      *(uint32_t *)(v18 + v10 + 8) = *((uint32_t *)v32 + 6);
      *(uint32_t *)(v18 + v10 + 12) = *((uint32_t *)v32 + 7);
      v30 = *(float *)(v9 + 24);
g4_m128_lane<float>(v21, 0) =g4_m128_lane<float>(v19, 0) - *(float *)v9;
      v22 = v20 - *(float *)(v9 + 4);
      v23 = v30 - *(float *)(v9 + 8);
      v24 = v21;
      v31 =g4_m128_lane<float>(v19, 0);
      v29 = *(float *)(v9 + 28);
      v28 = v29 - *(float *)(v9 + 12);
g4_m128_lane<float>(v24, 0) = (float)((float)(g4_m128_lane<float>(v21, 0) *g4_m128_lane<float>(v21, 0)) + (float)(v22 * v22)) + (float)(v23 * v23);
      if (g4_m128_lane<float>(v24, 0) > 0.0 )
      {
        v11 = ((_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v24))) + 2139095040) >> 31)
            & (1597463174 - (_mm_cvtsi128_si32(g4_m128_raw(G4_BITCAST<__m128i>(v24))) >> 1));
        v12 = (float)(1.5 * *(float *)&v11)
            - (float)((float)((float)(0.5 *g4_m128_lane<float>(v24, 0)) * *(float *)&v11) * (float)(*(float *)&v11 * *(float *)&v11));
        v13 = 1.5 * v12;
        v14 = (float)((float)(0.5 *g4_m128_lane<float>(v24, 0)) * v12) * (float)(v12 * v12);
g4_m128_raw(v15) = 0x3FC00000u;
g4_m128_lane<float>(v15, 0) = (float)(1.5 * (float)(v13 - v14))
                        - (float)((float)((float)(0.5 *g4_m128_lane<float>(v24, 0)) * (float)(v13 - v14))
                                * (float)((float)(v13 - v14) * (float)(v13 - v14)));
        v16 =g4_m128_lane<float>(_mm_andnot_ps(_mm_cmple_ss(v24, g4_m128_from<__m128>(0LL)), v15), 0);
        *(float *)(v9 + 12) = (float)((float)((float)(g4_m128_lane<float>(v21, 0) *g4_m128_lane<float>(v21, 0)) + (float)(v22 * v22))
                                    + (float)(v23 * v23))
                            *g4_m128_lane<float>(v15, 0);
      }
      else
      {
        v16 = 0.0;
        *(uint32_t *)(v9 + 12) = 0;
      }
      v9 += 32;
      v32 = (const hkpMultiRayShape::Ray::Self *)((char *)v32 + 32);
      --v33;
      v17 = *((float *)v27 + 7);
      *(float *)(v18 + v10) = (float)((float)(g4_m128_lane<float>(v21, 0) * v16) * v17) + v31;
      *(float *)(v18 + v10 + 4) = (float)((float)(v22 * v16) * v17) + v20;
      *(float *)(v18 + v10 + 8) = (float)((float)(v23 * v16) * v17) + v30;
      *(float *)(v18 + v10 + 12) = (float)((float)(v16 * v28) * v17) + v29;
    }
    while ( v33 != -1 );
  }
}


