#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpMeshSha.h"

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::Subpart::staticClass  (binary VA: 0x1aeb550)
// Original: hkpMeshShape::Subpart::staticClass
// ----------------------------------------------------------------------------
void * hkpMeshShape::Subpart::staticClass()
{
  return &hkpMeshShapeSubpartClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::staticClass  (binary VA: 0x1aeb570)
// Original: hkpMeshShape::staticClass
// ----------------------------------------------------------------------------
void * hkpMeshShape::staticClass()
{
  return &hkpMeshShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::setWeldingInfo  (binary VA: 0x1aeb750)
// Original: hkpMeshShape::setWeldingInfo
// ----------------------------------------------------------------------------
unsigned int hkpMeshShape::setWeldingInfo(hkpMeshShape::Self *self, unsigned int a2, int16_t a3)
{
  unsigned int result;

  result = *(uint32_t *)(*((uint32_t *)self + 13) + 56 * (a2 >> (32 - *((uint32_t *)self + 12))) + 52)
         + (a2 & (0xFFFFFFFF >> *((uint32_t *)self + 12)));
  *(uint16_t *)(*((uint32_t *)self + 16) + 2 * result) = a3;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::getChildShape  (binary VA: 0x1aeb790)
// Original: hkpMeshShape::getChildShape
// ----------------------------------------------------------------------------
int hkpMeshShape::getChildShape(int a1, unsigned int a2, int a3)
{
  int result;
  int v4;
  int v5;
  uint16_t *v6;
  float *v7;
  int v8;
  float *v9;
  float v10; // xmm4_4
  float *v11;
  float v12; // xmm3_4
  float v13; // xmm5_4
  float v14; // xmm2_4
  float v15; // xmm1_4
  int16_t v16; // si
  float v17; // xmm1_4
  float v18; // xmm7_4
  float v19; // xmm6_4
  float v20; // xmm5_4
  float v21; // xmm4_4
  float v22; // xmm3_4
  float v23; // xmm2_4
  float v24; // xmm0_4
  char v25;
  uint32_t *v26;
  unsigned int v27;
  float *v28;
  float v29;
  int v30;
  float v31;

  result = a3;
  v4 = *(uint32_t *)(a1 + 48);
  v27 = a2 & (0xFFFFFFFF >> v4);
  v5 = *(uint32_t *)(a1 + 52) + 56 * (a2 >> (32 - v4));
  v30 = *(uint32_t *)(v5 + 24) & v27;
  if ( *(uint8_t *)(v5 + 16) == 1 )
  {
    v6 = (uint16_t *)(*(uint32_t *)(v5 + 20) * v27 + *(uint32_t *)(v5 + 12));
    v28 = (float *)(*(uint32_t *)v5 + *(uint32_t *)(v5 + 4) * *v6);
    v7 = (float *)(*(uint32_t *)v5 + *(uint32_t *)(v5 + 4) * v6[v30 + 1]);
    v8 = *(uint32_t *)v5 + *(uint32_t *)(v5 + 4) * v6[(v30 ^ 1) + 1];
  }
  else
  {
    v26 = (uint32_t *)(*(uint32_t *)(v5 + 12) + *(uint32_t *)(v5 + 20) * v27);
    v28 = (float *)(*(uint32_t *)v5 + *v26 * *(uint32_t *)(v5 + 4));
    v7 = (float *)(v26[v30 + 1] * *(uint32_t *)(v5 + 4) + *(uint32_t *)v5);
    v8 = v26[(v30 ^ 1) + 1] * *(uint32_t *)(v5 + 4) + *(uint32_t *)v5;
    result = a3;
  }
  v9 = (float *)v8;
  v10 = *(float *)(a1 + 32);
  v11 = v28;
  v12 = *(float *)(a1 + 36);
  v13 = v28[1] * v12;
  v14 = *(float *)(a1 + 40);
  v29 = *v28 * v10;
  v15 = v11[2];
  v16 = 0;
  v17 = v15 * v14;
  v31 = v13;
  v18 = *v7 * v10;
  v19 = v7[1] * v12;
  v20 = v7[2] * v14;
  v21 = v10 * *v9;
  v22 = v12 * v9[1];
  v23 = v14 * v9[2];
  v24 = 0.0 * *(float *)(a1 + 44);
  if ( *(uint32_t *)(a1 + 68) != 0 )
    v16 = *(uint16_t *)(*(uint32_t *)(a1 + 64) + 2 * (*(uint32_t *)(v5 + 52) + v27));
  v25 = *(uint8_t *)(a1 + 76);
  *(uint32_t *)(result + 16) = *(uint32_t *)(a1 + 80);
  *(uint16_t *)(result + 20) = v16;
  *(float *)(result + 32) = v29;
  *(uint32_t *)(result + 4) = -65535;
  *(uint8_t *)(result + 8) = 2;
  *(float *)(result + 36) = v31;
  *(uint8_t *)(result + 9) = 4;
  *(uint8_t *)(result + 10) = 0;
  *(uint8_t *)(result + 11) = 0;
  *(uint32_t *)(result + 12) = 0;
  *(uint32_t *)result = ((uint32_t)(uintptr_t)&off_209A8C8);
  *(uint8_t *)(result + 22) = v25;
  *(uint32_t *)(result + 80) = 0;
  *(uint32_t *)(result + 84) = 0;
  *(uint32_t *)(result + 88) = 0;
  *(uint32_t *)(result + 92) = 0;
  *(float *)(result + 40) = v17;
  *(uint8_t *)(result + 23) = 0;
  *(float *)(result + 44) = v24;
  *(float *)(result + 48) = v18;
  *(float *)(result + 52) = v19;
  *(float *)(result + 56) = v20;
  *(float *)(result + 60) = v24;
  *(float *)(result + 64) = v21;
  *(float *)(result + 68) = v22;
  *(float *)(result + 72) = v23;
  *(float *)(result + 76) = v24;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::getCollisionFilterInfo  (binary VA: 0x1aeb9c0)
// Original: hkpMeshShape::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpMeshShape::getCollisionFilterInfo(hkpMeshShape::Self *self, unsigned int a2)
{
  int v2;
  unsigned int v3;
  int v4;
  uint8_t *v5;
  int v6;
  int v7;

  v2 = *((uint32_t *)self + 12);
  v3 = *((uint32_t *)self + 13) + 56 * (a2 >> (32 - v2));
  v4 = *(uint32_t *)(v3 + 32);
  if ( v4 != 0
    && ((v5 = (uint8_t *)(v4 + *(uint32_t *)(v3 + 36) * (a2 & (0xFFFFFFFF >> v2))), *(uint8_t *)(v3 + 17) == 1)
      ? (v6 = *v5)
      : (v6 = *(uint16_t *)v5),
        (v7 = *(uint32_t *)(v3 + 40) + *(uint32_t *)(v3 + 44) * v6) != 0) )
  {
    return *(uint32_t *)v7;
  }
  else
  {
    return 0;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::initWeldingInfo  (binary VA: 0x1aeba30)
// Original: hkpMeshShape::initWeldingInfo
// ----------------------------------------------------------------------------
int hkpMeshShape::initWeldingInfo(int a1, int a2)
{
  uint32_t *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int result;
  int v9;
  int v10;
  uint32_t v11[7];

  v11[3] = (uint32_t)(uintptr_t)(&a1);
  v2 = (uint32_t *)a1;
  v3 = a2;
  *(uint8_t *)(a1 + 76) = a2;
  if ( v3 == 6 )
  {
    result = v2[18];
    v2[17] = 0;
    if ( result >= 0 )
      result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v2[16],
                 2 * (result & 0x3FFFFFFF));
    v2[16] = 0;
    v2[18] = 0x80000000;
  }
  else
  {
    if ( (int)v2[14] <= 0 )
    {
      v7 = 0;
    }
    else
    {
      v4 = v2[13];
      v5 = 0;
      v6 = 0;
      v7 = 0;
      do
      {
        *(uint32_t *)(v4 + v5 + 52) = v7;
        v4 = v2[13];
        ++v6;
        v7 += *(uint32_t *)(v4 + v5 + 28);
        v5 += 56;
      }
      while ( v2[14] > v6 );
      if ( v7 > (v2[18] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v11,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v2 + 16,
          v7,
          2);
        v9 = v2[18] & 0x3FFFFFFF;
        if ( v7 > v9 )
        {
          v10 = 2 * v9;
          if ( v7 >= v10 )
            v10 = v7;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v11,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v2 + 16,
            v10,
            2);
        }
      }
    }
    result = v2[17];
    if ( v7 - result > 0 )
      result = (int)(uintptr_t)(memset((void *)(v2[16] + 2 * result), 0, 2 * (v7 - result)));
    v2[17] = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::getNextKey  (binary VA: 0x1aebbb0)
// Original: hkpMeshShape::getNextKey
// ----------------------------------------------------------------------------
int hkpMeshShape::getNextKey(hkpMeshShape::Self *self, unsigned int a2)
{
  unsigned int v2;
  unsigned int v3;
  signed int v4;
  signed int v5;
  float *v6;
  bool isDegenerate;
  typedef unsigned int _g4_t_v9;
  typedef int _g4_t_v10;
  typedef float _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (8u + sizeof(_g4_t_v9)) > _g4_s0 ? (8u + sizeof(_g4_t_v9)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v10)) > _g4_s1 ? (12u + sizeof(_g4_t_v10)) : _g4_s1,
    _g4_s3 = (28u + sizeof(_g4_t_v11)) > _g4_s2 ? (28u + sizeof(_g4_t_v11)) : _g4_s2,
    _g4_s4 = (32u + sizeof(_g4_t_v12)) > _g4_s3 ? (32u + sizeof(_g4_t_v12)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 28u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  v2 = a2 >> (32 - *((uint8_t *)self + 48));
  v3 = a2 & (0xFFFFFFFF >> *((uint8_t *)self + 48));
  while ( 1 )
  {
    v5 = v3 + 1;
    if ( v5 < *(uint32_t *)(*((uint32_t *)self + 13) + 56 * v2 + 28) )
    {
      v4 = v5;
      goto LABEL_4;
    }
    if ( ++v2 >= *((uint32_t *)self + 14) )
      return -1;
    v4 = 0;
    v5 = 0;
LABEL_4:
    v9 = v5;
    v10 = v4 | (v2 << (32 - *((uint8_t *)self + 48)));
    v6 = (float *)G4_VCALL<int>(self, 100, v10, &v12);
    LODWORD(v11) = hkDefaultTriangleDegeneracyTolerance;
    isDegenerate = hkcdTriangleUtil::isDegenerate(v6 + 8, v6 + 12, v6 + 16, &v11);
    v3 = v9;
    if ( !isDegenerate )
      return v10;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::addSubpart  (binary VA: 0x1aebcc0)
// Original: hkpMeshShape::addSubpart
// ----------------------------------------------------------------------------
uint32_t * hkpMeshShape::addSubpart(hkpMeshShape::Self *self, const hkpMeshShape::Subpart::Self *a2)
{
  int v2;
  int v3;
  int v4;
  uint32_t *result;
  int v6;

  v2 = *((uint32_t *)self + 14);
  if ( v2 == (*((uint32_t *)self + 15) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserveMore(
      (hkArrayUtil::Self *)&hkContainerHeapAllocator::s_alloc,
      (hkpMeshShape::Self *)((char *)self + 52),
      56,
      v6);
    v2 = *((uint32_t *)self + 14);
  }
  v3 = *((uint32_t *)self + 13) + 56 * v2;
  *(uint8_t *)(v3 + 17) = 1;
  *(uint32_t *)(v3 + 36) = 0;
  *(uint32_t *)(v3 + 32) = 0;
  *(uint32_t *)(v3 + 24) = 0;
  *(uint32_t *)(v3 + 44) = 0;
  *(uint32_t *)(v3 + 48) = 1;
  *(uint32_t *)(v3 + 40) = 0;
  *(uint32_t *)(v3 + 52) = -1;
  v4 = *((uint32_t *)self + 14);
  result = (uint32_t *)(56 * v4 + *((uint32_t *)self + 13));
  *((uint32_t *)self + 14) = v4 + 1;
  *result = *(uint32_t *)a2;
  result[1] = *((uint32_t *)a2 + 1);
  result[2] = *((uint32_t *)a2 + 2);
  result[3] = *((uint32_t *)a2 + 3);
  result[4] = *((uint32_t *)a2 + 4);
  result[5] = *((uint32_t *)a2 + 5);
  result[6] = *((uint32_t *)a2 + 6);
  result[7] = *((uint32_t *)a2 + 7);
  result[8] = *((uint32_t *)a2 + 8);
  result[9] = *((uint32_t *)a2 + 9);
  result[10] = *((uint32_t *)a2 + 10);
  result[11] = *((uint32_t *)a2 + 11);
  result[12] = *((uint32_t *)a2 + 12);
  result[13] = *((uint32_t *)a2 + 13);
  if ( result[8] == 0 )
  {
    result[12] = 1;
    result[10] = flt_1D12E20;
    result[8] = flt_1D12E20;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::getFirstKey  (binary VA: 0x1aebdf0)
// Original: hkpMeshShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpMeshShape::getFirstKey(hkpMeshShape::Self *self)
{
  int result;
  float *v2;
  bool isDegenerate;
  typedef float _g4_t_v4;
  typedef int _g4_t_v5;
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (12u + sizeof(_g4_t_v4)) > _g4_s0 ? (12u + sizeof(_g4_t_v4)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v5)) > _g4_s1 ? (16u + sizeof(_g4_t_v5)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v4 &v4 = *reinterpret_cast<_g4_t_v4 *>(_g4_sf + 12u);
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 16u);

  result = -1;
  if ( *((uint32_t *)self + 14) != 0 )
  {
    v2 = (float *)G4_VCALL<int>(self, 100, 0, &v5);
    LODWORD(v4) = hkDefaultTriangleDegeneracyTolerance;
    isDegenerate = hkcdTriangleUtil::isDegenerate(v2 + 8, v2 + 12, v2 + 16, &v4);
    result = 0;
    if ( isDegenerate )
      return G4_VCALL<int>(self, 96, 0);
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::Destroy  (binary VA: 0x1aebea0)
// Original: hkpMeshShape::~hkpMeshShape
// ----------------------------------------------------------------------------
void hkpMeshShape::Destroy(hkpMeshShape::Self *self)
{
  int v1;
  int v2;

  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1E1C);
  v1 = *((uint32_t *)self + 18);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1DA8);
  *((uint32_t *)self + 17) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 14) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      56 * (v2 & 0x3FFFFFFF));
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::Destroy_ea1aebf70  (binary VA: 0x1aebf70)
// Original: hkpMeshShape::~hkpMeshShape
// ----------------------------------------------------------------------------
void hkpMeshShape::Destroy_ea1aebf70(hkpMeshShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;

  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1E1C);
  v1 = *((uint32_t *)self + 18);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1DA8);
  *((uint32_t *)self + 17) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 16),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 15);
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((uint32_t *)self + 14) = 0;
  if ( v2 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 13),
      56 * (v2 & 0x3FFFFFFF));
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
  v3 = *(uint32_t *)(*_emutls_get_address(g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v4 = 96;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v4 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v3, 12, self, v4);
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::getAabb  (binary VA: 0x1aec080)
// Original: hkpMeshShape::getAabb
// ----------------------------------------------------------------------------
int hkpMeshShape::getAabb(hkpMeshShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  hkpMeshShape::Self *v4;
  float v5; // xmm6_4
  float v6; // xmm6_4
  float v7; // xmm6_4
  float v8; // xmm6_4
  int result;
  float v10; // xmm5_4
  hkpMeshShape::Self *v11;
  int v12;
  uint16_t *v13;
  float *v14;
  float v15; // xmm0_4
  float v16; // xmm6_4
  float v17; // xmm4_4
  float v18; // xmm3_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  __m128i v22;
  float v23; // xmm2_4
  float v24; // xmm1_4
  float v25; // xmm0_4
  float v26; // xmm5_4
  float v27; // xmm7_4
  float v28; // xmm7_4
  float v29; // xmm7_4
  float v30; // xmm0_4
  float v31; // xmm5_4
  float v32; // xmm3_4
  float v33; // xmm2_4
  float v34; // xmm1_4
  float v35; // xmm0_4
  __m128i v36;
  float v37; // xmm7_4
  float v38;
  float v39; // xmm3_4
  float v40; // xmm2_4
  float v41; // xmm2_4
  float v42; // xmm7_4
  float v43; // xmm3_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  float v47; // xmm4_4
  float v48; // xmm0_4
  float v49; // xmm1_4
  float v50; // xmm7_4
  float v51; // xmm0_4
  __m128i v52;
  float v53; // xmm3_4
  float v54; // xmm2_4
  float v55; // xmm1_4
  int v56;
  uint32_t *v57;
  float v58; // xmm0_4
  int v59;
  float v60;
  float v61;
  float v62;
  float v63;
  float v64;
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
  float *v80;
  float *v81;
  int i;
  hkpMeshShape::Self *thisa;

  v4 = self;
  *(uint32_t *)a4 = 2139095022;
  v5 = *(float *)a4;
  *((uint32_t *)a4 + 1) = 2139095022;
  v77 = v5;
  v6 = *((float *)a4 + 1);
  *((uint32_t *)a4 + 2) = 2139095022;
  v75 = v6;
  v7 = *((float *)a4 + 2);
  *((uint32_t *)a4 + 3) = 2139095022;
  v72 = v7;
  v8 = *((float *)a4 + 3);
  *((uint32_t *)a4 + 4) = -8388626;
  *((uint32_t *)a4 + 5) = -8388626;
  *((uint32_t *)a4 + 6) = -8388626;
  *((uint32_t *)a4 + 7) = -8388626;
  result = *((uint32_t *)self + 14);
  v69 = v8;
  v66 = *((float *)a4 + 4);
  v63 = *((float *)a4 + 5);
  v60 = *((float *)a4 + 6);
  v10 = *((float *)a4 + 7);
  if ( result > 0 )
  {
    v11 = self;
    for ( i = 0; i < result; ++i )
    {
      if ( *(int *)(*((uint32_t *)v11 + 13) + 56 * i + 28) > 0 )
      {
        thisa = v11;
        v59 = 0;
        v12 = *((uint32_t *)v11 + 13) + 56 * i;
        while ( 1 )
        {
          if ( *(uint8_t *)(v12 + 16) == 1 )
          {
            v13 = (uint16_t *)(*(uint32_t *)(v12 + 12) + *(uint32_t *)(v12 + 20) * v59);
            v80 = (float *)(*(uint32_t *)v12 + *(uint32_t *)(v12 + 4) * *v13);
            v81 = (float *)(*(uint32_t *)v12 + *(uint32_t *)(v12 + 4) * v13[1]);
            v14 = (float *)(*(uint32_t *)v12 + v13[2] * *(uint32_t *)(v12 + 4));
          }
          else
          {
            v56 = *(uint32_t *)(v12 + 4);
            v57 = (uint32_t *)(*(uint32_t *)(v12 + 12) + *(uint32_t *)(v12 + 20) * v59);
            v80 = (float *)(*(uint32_t *)v12 + v56 * *v57);
            v81 = (float *)(*(uint32_t *)v12 + v56 * v57[1]);
            v14 = (float *)(*(uint32_t *)v12 + v57[2] * v56);
          }
          v15 = *v80 * *((float *)thisa + 8);
          v16 = v80[1] * *((float *)thisa + 9);
          v17 = v80[2] * *((float *)thisa + 10);
          v18 = (float)((float)((float)(*(float *)a2 * v15) + (float)(*((float *)a2 + 4) * v16))
                      + (float)(*((float *)a2 + 8) * v17))
              + *((float *)a2 + 12);
          v19 = (float)((float)(*((float *)a2 + 1) * v15) + (float)(*((float *)a2 + 5) * v16))
              + (float)(*((float *)a2 + 9) * v17);
          v20 = (float)((float)(*((float *)a2 + 2) * v15) + (float)(*((float *)a2 + 6) * v16))
              + (float)(*((float *)a2 + 10) * v17);
          v21 = (float)((float)(v15 * *((float *)a2 + 3)) + (float)(v16 * *((float *)a2 + 7)))
              + (float)(v17 * *((float *)a2 + 11));
g4_m128_raw(v22) = LODWORD(v69);
          v23 = v19 + *((float *)a2 + 13);
          v78 = fminf(v77, v18);
          v24 = v20 + *((float *)a2 + 14);
          v25 = v21 + *((float *)a2 + 15);
          *(float *)a4 = v78;
          *(float *)g4_m128_ptr<int32_t>(v22) = fminf(v69, v25);
          v76 = fminf(v75, v23);
          v26 = fmaxf(v10, v25);
          *((float *)a4 + 1) = v76;
          v73 = fminf(v72, v24);
          *((float *)a4 + 2) = v73;
          v52 = v22;
          *((uint32_t *)a4 + 3) =g4_m128_lane<int32_t>(v22, 0);
          v27 = fmaxf(v66, v18);
          *((float *)a4 + 7) = v26;
          v70 = v26;
          *((float *)a4 + 4) = v27;
          v67 = v27;
          v28 = fmaxf(v63, v23);
          *((float *)a4 + 5) = v28;
          v64 = v28;
          v29 = fmaxf(v60, v24);
          *((float *)a4 + 6) = v29;
          v30 = *v81 * *((float *)thisa + 8);
          v61 = v29;
          v31 = v81[1] * *((float *)thisa + 9);
          *(float *)g4_m128_ptr<int32_t>(v22) = v81[2] * *((float *)thisa + 10);
          v32 = (float)((float)((float)(*(float *)a2 * v30) + (float)(*((float *)a2 + 4) * v31))
                      + (float)(*((float *)a2 + 8) * *(float *)g4_m128_ptr<int32_t>(v22)))
              + *((float *)a2 + 12);
          v33 = (float)((float)((float)(*((float *)a2 + 1) * v30) + (float)(*((float *)a2 + 5) * v31))
                      + (float)(*((float *)a2 + 9) * *(float *)g4_m128_ptr<int32_t>(v22)))
              + *((float *)a2 + 13);
          v34 = (float)((float)((float)(*((float *)a2 + 2) * v30) + (float)(*((float *)a2 + 6) * v31))
                      + (float)(*((float *)a2 + 10) * *(float *)g4_m128_ptr<int32_t>(v22)))
              + *((float *)a2 + 14);
          v35 = (float)((float)((float)(v30 * *((float *)a2 + 3)) + (float)(v31 * *((float *)a2 + 7)))
                      + (float)(*(float *)g4_m128_ptr<int32_t>(v22) * *((float *)a2 + 11)))
              + *((float *)a2 + 15);
          v79 = fminf(v78, v32);
g4_m128_raw(v36) = LODWORD(v76);
          *(float *)g4_m128_ptr<int32_t>(v36) = fminf(v76, v33);
          v37 = fminf(v73, v34);
          *(float *)a4 = v79;
          *(float *)g4_m128_ptr<int32_t>(v52) = fminf(*(float *)g4_m128_ptr<int32_t>(v52), v35);
          *((uint32_t *)a4 + 1) =g4_m128_lane<int32_t>(v36, 0);
          v38 = COERCE_FLOAT(_mm_cvtsi128_si32(v36));
          *(float *)g4_m128_ptr<int32_t>(v36) = fmaxf(v67, v32);
          v39 = fmaxf(v64, v33);
          v40 = fmaxf(v61, v34);
          *((uint32_t *)a4 + 3) =g4_m128_lane<int32_t>(v52, 0);
          *((float *)a4 + 2) = v37;
          v74 = v37;
          *((uint32_t *)a4 + 4) =g4_m128_lane<int32_t>(v36, 0);
          *((float *)a4 + 5) = v39;
          *((float *)a4 + 6) = v40;
          v62 = v40;
          v41 = fmaxf(v70, v35);
          v65 = v39;
          v68 = *(float *)g4_m128_ptr<int32_t>(v36);
          *((float *)a4 + 7) = v41;
          *(float *)g4_m128_ptr<int32_t>(v22) = *v14 * *((float *)thisa + 8);
          v42 = v14[1] * *((float *)thisa + 9);
          *(float *)g4_m128_ptr<int32_t>(v36) = v14[2] * *((float *)thisa + 10);
          v71 = v41;
          v43 = (float)((float)((float)(*(float *)a2 * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(*((float *)a2 + 4) * v42))
                      + (float)(*((float *)a2 + 8) * *(float *)g4_m128_ptr<int32_t>(v36)))
              + *((float *)a2 + 12);
          v44 = (float)((float)((float)(*((float *)a2 + 1) * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(*((float *)a2 + 5) * v42))
                      + (float)(*((float *)a2 + 9) * *(float *)g4_m128_ptr<int32_t>(v36)))
              + *((float *)a2 + 13);
          v45 = (float)((float)(*((float *)a2 + 2) * *(float *)g4_m128_ptr<int32_t>(v22)) + (float)(*((float *)a2 + 6) * v42))
              + (float)(*((float *)a2 + 10) * *(float *)g4_m128_ptr<int32_t>(v36));
          v46 = *((float *)a2 + 3) * *(float *)g4_m128_ptr<int32_t>(v22);
          v47 = fminf(v79, v43);
          v48 = v46 + (float)(v42 * *((float *)a2 + 7));
          v49 = v45 + *((float *)a2 + 14);
          v50 = fminf(v38, v44);
          v51 = (float)(v48 + (float)(*(float *)g4_m128_ptr<int32_t>(v36) * *((float *)a2 + 11))) + *((float *)a2 + 15);
          *(float *)a4 = v47;
          ++v59;
          *(float *)g4_m128_ptr<int32_t>(v36) = fminf(v74, v49);
          *((float *)a4 + 1) = v50;
          *(float *)g4_m128_ptr<int32_t>(v52) = fminf(*(float *)g4_m128_ptr<int32_t>(v52), v51);
          *((uint32_t *)a4 + 2) =g4_m128_lane<int32_t>(v36, 0);
          v72 = *(float *)g4_m128_ptr<int32_t>(v36);
          *(float *)g4_m128_ptr<int32_t>(v36) = fmaxf(v68, v43);
          *((uint32_t *)a4 + 3) =g4_m128_lane<int32_t>(v52, 0);
          *((uint32_t *)a4 + 4) =g4_m128_lane<int32_t>(v36, 0);
          v53 = *(float *)g4_m128_ptr<int32_t>(v36);
          *(float *)g4_m128_ptr<int32_t>(v36) = fmaxf(v65, v44);
          *((uint32_t *)a4 + 5) =g4_m128_lane<int32_t>(v36, 0);
          v54 = *(float *)g4_m128_ptr<int32_t>(v36);
          *(float *)g4_m128_ptr<int32_t>(v36) = fmaxf(v62, v49);
          *((uint32_t *)a4 + 6) =g4_m128_lane<int32_t>(v36, 0);
          v55 = *(float *)g4_m128_ptr<int32_t>(v36);
          v10 = fmaxf(v71, v51);
          *((float *)a4 + 7) = v10;
          if ( *(uint32_t *)(v12 + 28) <= v59 )
            break;
          v77 = v47;
          v75 = v50;
          v69 = *(float *)g4_m128_ptr<int32_t>(v52);
          v66 = v53;
          v63 = v54;
          v60 = v55;
        }
        v11 = thisa;
        result = *((uint32_t *)thisa + 14);
        v69 = COERCE_FLOAT(_mm_cvtsi128_si32(v52));
        v60 = v55;
        v63 = v54;
        v66 = v53;
        v75 = v50;
        v77 = v47;
      }
    }
    v4 = v11;
  }
  v58 = a3 + *((float *)v4 + 20);
  *((float *)a4 + 3) = v69 - v58;
  *(float *)a4 = v77 - v58;
  *((float *)a4 + 1) = v75 - v58;
  *((float *)a4 + 2) = v72 - v58;
  *((float *)a4 + 4) = v58 + v66;
  *((float *)a4 + 5) = v63 + v58;
  *((float *)a4 + 6) = v60 + v58;
  *((float *)a4 + 7) = v10 + v58;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::Construct  (binary VA: 0x1aec6e0)
// Original: hkpMeshShape::hkpMeshShape
// ----------------------------------------------------------------------------
void hkpMeshShape::Construct(hkpMeshShape::Self *self, float a2, int a3)
{
  hkpShapeCollection::Construct((int)(uintptr_t)(self), 27, 5);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20B1E1C);
  *((uint32_t *)self + 8) = 1065353216;
  *((uint32_t *)self + 9) = 1065353216;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20B1DA8);
  *((uint32_t *)self + 10) = 1065353216;
  *((uint32_t *)self + 13) = 0;
  *((uint32_t *)self + 14) = 0;
  *((uint32_t *)self + 15) = 0x80000000;
  *((uint32_t *)self + 16) = 0;
  *((uint32_t *)self + 17) = 0;
  *((uint32_t *)self + 18) = 0x80000000;
  *((float *)self + 20) = a2;
  *((uint8_t *)self + 76) = 6;
  *((uint32_t *)self + 12) = a3;
}



// ============================================================================
// Address:   0x1aec780 (size: 125 bytes)
// Symbol:    _ZN12hkpMeshShapeC2E24hkFinishLoadedObjectFlag
// Demangled: hkpMeshShape::hkpMeshShape(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN12hkpMeshShapeC1E24hkFinishLoadedObjectFlag'
void (**hkpMeshShape::Construct(int a1, int a2))(hkpMeshShape::Self * self)
{
  void (**result)(hkpMeshShape::Self *);
  int v3;
  int v4;
  int v5;

  hkpShapeCollection::Construct(a1, a2);
  result = (void (**)(hkpMeshShape::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20B1E1C));
  *(uint32_t *)a1 = ((uint32_t)(uintptr_t)&off_20B1DA8);
  *(uint32_t *)(a1 + 16) = ((uint32_t)(uintptr_t)&off_20B1E1C);
  if ( a2 != 0 )
  {
    v3 = *(uint32_t *)(a1 + 56);
    v4 = 0;
    for ( result = nullptr; (int)(uintptr_t)(result) < v3; v4 += 56 )
    {
      v5 = *(uint32_t *)(a1 + 52) + v4;
      if ( *(uint8_t *)(v5 + 17) == 0 )
      {
        *(uint8_t *)(v5 + 17) = 1;
        v3 = *(uint32_t *)(a1 + 56);
      }
      result = (void (**)(hkpMeshShape::Self *))((char *)result + 1);
    }
    *(uint8_t *)(a1 + 8) = 27;
    *(uint8_t *)(a1 + 21) = 5;
  }
  return result;
}
// ----------------------------------------------------------------------------
// Function: hkpMeshShape::setScaling  (binary VA: 0x1aec800)
// Original: hkpMeshShape::setScaling
// ----------------------------------------------------------------------------
hkpMeshShape::Self * hkpMeshShape::setScaling(hkpMeshShape::Self *self, const hkVector4f::Self *a2)
{
  *((uint32_t *)self + 8) = *(uint32_t *)a2;
  *((uint32_t *)self + 9) = *((uint32_t *)a2 + 1);
  *((uint32_t *)self + 10) = *((uint32_t *)a2 + 2);
  *((uint32_t *)self + 11) = *((uint32_t *)a2 + 3);
  return self;
}

// ----------------------------------------------------------------------------
// Function: hkpMeshShape::assertSubpartValidity  (binary VA: 0x1aec820)
// Original: hkpMeshShape::assertSubpartValidity
// ----------------------------------------------------------------------------
void hkpMeshShape::assertSubpartValidity()
{
  ;
}


