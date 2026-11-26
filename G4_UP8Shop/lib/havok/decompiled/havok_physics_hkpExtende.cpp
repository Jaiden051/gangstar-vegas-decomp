#include "Core/Utils/DecompTypes.h"
#include "havok_physics_hkpExtende.h"

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::Subpart::staticClass  (binary VA: 0x169b3a0)
// Original: hkpExtendedMeshShape::Subpart::staticClass
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShape::Subpart::staticClass()
{
  return &hkpExtendedMeshShapeSubpartClass;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::TrianglesSubpart::staticClass  (binary VA: 0x169b3c0)
// Original: hkpExtendedMeshShape::TrianglesSubpart::staticClass
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShape::TrianglesSubpart::staticClass()
{
  return &hkpExtendedMeshShapeTrianglesSubpartClass;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::ShapesSubpart::staticClass  (binary VA: 0x169b3e0)
// Original: hkpExtendedMeshShape::ShapesSubpart::staticClass
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShape::ShapesSubpart::staticClass()
{
  return &hkpExtendedMeshShapeShapesSubpartClass;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::staticClass  (binary VA: 0x169b400)
// Original: hkpExtendedMeshShape::staticClass
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShape::staticClass()
{
  return &hkpExtendedMeshShapeClass;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getAabb  (binary VA: 0x16e4b90)
// Original: hkpExtendedMeshShape::getAabb
// ----------------------------------------------------------------------------
const hkTransformf::Self * hkpExtendedMeshShape::getAabb(hkpExtendedMeshShape::Self *self, const hkTransformf::Self *a2, float a3, hkAabb::Self *a4)
{
  float v5; // xmm4_4
  float v6; // xmm3_4
  float v7; // xmm0_4
  float v8; // xmm6_4
  float v9; // xmm7_4
  float v10; // xmm5_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  float v15; // xmm6_4
  float v16;
  float v17;
  float v18;

  v5 = *((float *)self + 36);
  v6 = *((float *)self + 37);
  v7 = *((float *)self + 38);
  v16 = (float)(fabs(*(float *)a2 * v5) + fabs(*((float *)a2 + 4) * v6)) + (float)(fabs(*((float *)a2 + 8) * v7) + a3);
  v18 = (float)(fabs(*((float *)a2 + 1) * v5) + fabs(*((float *)a2 + 5) * v6))
      + (float)(fabs(*((float *)a2 + 9) * v7) + a3);
  v8 = *((float *)self + 40);
  v9 = (float)(fabs(*((float *)a2 + 10) * v7) + a3)
     + (float)(fabs(*((float *)a2 + 2) * v5) + fabs(*((float *)a2 + 6) * v6));
  v10 = *((float *)self + 41);
  v17 = (float)(a3 + fabs(v7 * *((float *)a2 + 11)))
      + (float)(fabs(v5 * *((float *)a2 + 3)) + fabs(v6 * *((float *)a2 + 7)));
  v11 = *((float *)self + 42);
  v12 = (float)((float)((float)(*(float *)a2 * v8) + (float)(*((float *)a2 + 4) * v10))
              + (float)(*((float *)a2 + 8) * v11))
      + *((float *)a2 + 12);
  v13 = (float)((float)((float)(*((float *)a2 + 1) * v8) + (float)(*((float *)a2 + 5) * v10))
              + (float)(*((float *)a2 + 9) * v11))
      + *((float *)a2 + 13);
  v14 = (float)((float)((float)(*((float *)a2 + 2) * v8) + (float)(*((float *)a2 + 6) * v10))
              + (float)(*((float *)a2 + 10) * v11))
      + *((float *)a2 + 14);
  v15 = (float)((float)((float)(v8 * *((float *)a2 + 3)) + (float)(v10 * *((float *)a2 + 7)))
              + (float)(v11 * *((float *)a2 + 11)))
      + *((float *)a2 + 15);
  *((float *)a4 + 4) = v16 + v12;
  *(float *)a4 = v12 - v16;
  *((float *)a4 + 5) = v18 + v13;
  *((float *)a4 + 6) = v9 + v14;
  *((float *)a4 + 1) = v13 - v18;
  *((float *)a4 + 2) = v14 - v9;
  *((float *)a4 + 7) = v17 + v15;
  *((float *)a4 + 3) = v15 - v17;
  return a2;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::calcSizeForSpu  (binary VA: 0x16e4db0)
// Original: hkpExtendedMeshShape::calcSizeForSpu
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::calcSizeForSpu(int a1, int a2)
{
  int v2;
  uint32_t *v3;
  int v4;
  int v5;
  int v6;
  int v8;

  v8 = 0;
  v2 = *(uint32_t *)(a1 + 200);
  if ( v2 > 0 )
  {
    do
    {
      v3 = (uint32_t *)(*(uint32_t *)(a1 + 196) + (v8 << 6));
      if ( (int)v3[6] > 0 )
      {
        v4 = 0;
        do
        {
          v5 = (*(int (**)(uint32_t, int, int))(**(uint32_t **)(v3[5] + 4 * v4) + 72))(
                 *(uint32_t *)(v3[5] + 4 * v4),
                 a2,
                 256);
          v6 = 512;
          if ( (v3[15] & 0xC0FFFFFF) != 0 )
          {
            LOWORD(v6) = 464;
            if ( (v3[15] & 0xC0FFFFFF) != 1 )
              v6 = 416;
          }
          if ( v5 < 0 || v6 < v5 )
            return -1;
          ++v4;
        }
        while ( v3[6] > v4 );
        v2 = *(uint32_t *)(a1 + 200);
      }
      ++v8;
    }
    while ( v8 < v2 );
  }
  return 240;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getNumChildShapes  (binary VA: 0x16e4e70)
// Original: hkpExtendedMeshShape::getNumChildShapes
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::getNumChildShapes(hkpExtendedMeshShape::Self *self)
{
  int result;

  result = *((uint32_t *)self + 57);
  if ( result < 0 )
  {
    result = hkpShapeContainer::getNumChildShapes((hkpExtendedMeshShape::Self *)((char *)self + 16));
    *((uint32_t *)self + 57) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getFirstKey  (binary VA: 0x16e4ec0)
// Original: hkpExtendedMeshShape::getFirstKey
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::getFirstKey(hkpExtendedMeshShape::Self *self)
{
  unsigned int v1;
  int v2;
  int v4;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  enum : size_t {
    _g4_s0 = 608u,
    _g4_s1 = (0u + sizeof(_g4_t_v5)) > _g4_s0 ? (0u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v6)) > _g4_s1 ? (16u + sizeof(_g4_t_v6)) : _g4_s1
  };
  alignas(16) uint8_t _g4_sf[_g4_s2];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 0u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 16u);

  v1 = 0xFFFFFFFF;
  v2 = *((uint32_t *)self + 47);
  if ( v2 + *((uint32_t *)self + 50) != 0 )
  {
    v1 = v2 == 0 ? 0x80000000 : 0;
    v4 = G4_VCALL<int>(self, 108, v1, &v6);
    if ( *(uint8_t *)(v4 + 8) == 2 )
    {
      v5 = hkDefaultTriangleDegeneracyTolerance;
      if ( hkcdTriangleUtil::isDegenerate(v4 + 32, v4 + 48, v4 + 64, &v5) != 0 )
        return G4_VCALL<int>(self, 104, v1);
    }
  }
  return v1;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getNextKey  (binary VA: 0x16e4f80)
// Original: hkpExtendedMeshShape::getNextKey
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::getNextKey(hkpExtendedMeshShape::Self *self, unsigned int a2)
{
  int v2;
  signed int v3;
  signed int v4;
  int v5;
  int v6;
  typedef unsigned int _g4_t_v8;
  typedef signed int _g4_t_v9;
  typedef unsigned int _g4_t_v10;
  typedef int _g4_t_v11;
  typedef int _g4_t_v12;
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (4u + sizeof(_g4_t_v8)) > _g4_s0 ? (4u + sizeof(_g4_t_v8)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v9)) > _g4_s1 ? (8u + sizeof(_g4_t_v9)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v10)) > _g4_s2 ? (12u + sizeof(_g4_t_v10)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v11)) > _g4_s3 ? (16u + sizeof(_g4_t_v11)) : _g4_s3,
    _g4_s5 = (32u + sizeof(_g4_t_v12)) > _g4_s4 ? (32u + sizeof(_g4_t_v12)) : _g4_s4
  };
  alignas(16) uint8_t _g4_sf[_g4_s5];
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 4u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 8u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 12u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 16u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 32u);

  v2 = *((uint32_t *)self + 45);
  v10 = (a2 & 0x7FFFFFFF) >> (32 - v2);
  v9 = a2 & (0xFFFFFFFF >> v2);
  v8 = a2 & 0x80000000;
  while ( 1 )
  {
    if ( v8 == 0 )
    {
      v3 = ++v9;
      if ( v9 < *(uint32_t *)(*((uint32_t *)self + 46) + 112 * v10 + 20) )
        goto LABEL_12;
      if ( ++v10 < *((uint32_t *)self + 47) )
        goto LABEL_7;
      if ( *((uint32_t *)self + 50) == 0 )
        return -1;
      v8 = 0x80000000;
      v9 = -1;
      v10 = 0;
    }
    v3 = ++v9;
    if ( v9 >= *(uint32_t *)(*((uint32_t *)self + 49) + (v10 << 6) + 24) )
      break;
LABEL_12:
    v4 = v3;
LABEL_8:
    v5 = (v10 << (32 - *((uint8_t *)self + 180))) | v8 | v4;
    v6 = G4_VCALL<int>(self, 108, v5, &v12);
    if ( *(uint8_t *)(v6 + 8) == 2 )
    {
      v11 = hkDefaultTriangleDegeneracyTolerance;
      if ( hkcdTriangleUtil::isDegenerate(v6 + 32, v6 + 48, v6 + 64, &v11) != 0 )
        continue;
    }
    return v5;
  }
  if ( ++v10 < *((uint32_t *)self + 50) )
  {
LABEL_7:
    v4 = 0;
    v9 = 0;
    goto LABEL_8;
  }
  return -1;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::setWeldingInfo  (binary VA: 0x16e5120)
// Original: hkpExtendedMeshShape::setWeldingInfo
// ----------------------------------------------------------------------------
unsigned int hkpExtendedMeshShape::setWeldingInfo(hkpExtendedMeshShape::Self *self, int a2, unsigned int a3)
{
  hkpExtendedMeshShape::Self *v3;
  unsigned int result;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int *v10;
  int v11;
  typedef int16_t _g4_t_v12;
  typedef int _g4_t_v13;
  typedef uint32_t _g4_t_v14[7];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (4u + sizeof(_g4_t_v12)) > _g4_s0 ? (4u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (8u + sizeof(_g4_t_v13)) > _g4_s1 ? (8u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (12u + sizeof(_g4_t_v14)) > _g4_s2 ? (12u + sizeof(_g4_t_v14)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 4u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 8u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 12u);

  v14[3] = (uint32_t)(uintptr_t)(&self);
  v3 = self;
  v13 = a2;
  result = a3;
  v12 = a3;
  if ( *((uint32_t *)self + 53) != 0 )
    goto LABEL_9;
  if ( *((int *)self + 47) <= 0 )
  {
    v10 = (int *)((char *)self + 208);
    v9 = *((uint32_t *)self + 54) & 0x3FFFFFFF;
    v8 = 0;
LABEL_13:
    if ( v8 > v9 )
    {
      v11 = 2 * v9;
      if ( v11 < v8 )
        v11 = v8;
      hkArrayUtil::reserve((hkArrayUtil::Self *)v14, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, v10, v11, 2);
    }
    goto LABEL_6;
  }
  v5 = *((uint32_t *)self + 46);
  v6 = 0;
  v7 = 0;
  v8 = 0;
  do
  {
    *(uint32_t *)(v5 + v6 + 40) = v8;
    v5 = *((uint32_t *)v3 + 46);
    ++v7;
    v8 += *(uint32_t *)(v5 + v6 + 20);
    v6 += 112;
  }
  while ( *((uint32_t *)v3 + 47) > v7 );
  if ( v8 > (*((uint32_t *)v3 + 54) & 0x3FFFFFFF) )
  {
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v14,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v3 + 52,
      v8,
      2);
    v9 = *((uint32_t *)v3 + 54) & 0x3FFFFFFF;
    v10 = (int *)((char *)v3 + 208);
    goto LABEL_13;
  }
LABEL_6:
  result = *((uint32_t *)v3 + 53);
  if ( (int)(v8 - result) > 0 )
    result = (unsigned int)(uintptr_t)(memset((void *)(*((uint32_t *)v3 + 52) + 2 * result), 0, 2 * (v8 - result)));
  *((uint32_t *)v3 + 53) = v8;
LABEL_9:
  if ( v13 >= 0 )
  {
    result = *(uint32_t *)(*((uint32_t *)v3 + 46) + 112 * ((unsigned int)v13 >> (32 - *((uint32_t *)v3 + 45))) + 40)
           + (v13 & (0xFFFFFFFF >> *((uint32_t *)v3 + 45)));
    *(uint16_t *)(*((uint32_t *)v3 + 52) + 2 * result) = v12;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::initWeldingInfo  (binary VA: 0x16e52c0)
// Original: hkpExtendedMeshShape::initWeldingInfo
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::initWeldingInfo(int a1, int a2)
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
  *(uint8_t *)(a1 + 220) = a2;
  if ( v3 == 6 )
  {
    result = v2[54];
    v2[53] = 0;
    if ( result >= 0 )
      result = (*(int (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
                 v2[52],
                 2 * (result & 0x3FFFFFFF));
    v2[52] = 0;
    v2[54] = 0x80000000;
  }
  else
  {
    if ( (int)v2[47] <= 0 )
    {
      v7 = 0;
    }
    else
    {
      v4 = v2[46];
      v5 = 0;
      v6 = 0;
      v7 = 0;
      do
      {
        *(uint32_t *)(v4 + v5 + 40) = v7;
        v4 = v2[46];
        ++v6;
        v7 += *(uint32_t *)(v4 + v5 + 20);
        v5 += 112;
      }
      while ( v2[47] > v6 );
      if ( v7 > (v2[54] & 0x3FFFFFFF) )
      {
        hkArrayUtil::reserve(
          (hkArrayUtil::Self *)v11,
          (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
          v2 + 52,
          v7,
          2);
        v9 = v2[54] & 0x3FFFFFFF;
        if ( v7 > v9 )
        {
          v10 = 2 * v9;
          if ( v7 >= v10 )
            v10 = v7;
          hkArrayUtil::reserve(
            (hkArrayUtil::Self *)v11,
            (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
            v2 + 52,
            v10,
            2);
        }
      }
    }
    result = v2[53];
    if ( v7 - result > 0 )
      result = (int)(uintptr_t)(memset((void *)(v2[52] + 2 * result), 0, 2 * (v7 - result)));
    v2[53] = v7;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getChildShape  (binary VA: 0x16e5470)
// Original: hkpExtendedMeshShape::getChildShape
// ----------------------------------------------------------------------------
int32_t hkpExtendedMeshShape::getChildShape(int a1, int a2, int32_t a3)
{
  unsigned int v3;
  unsigned int v4;
  __m128i *v5;
  uint16_t *v6;
  char v7;
  int v8;
  int v9;
  int16_t v10;
  float *v11;
  float *v12;
  float *v13;
  float v14; // xmm6_4
  float v15;
  float v16; // xmm2_4
  float v17; // xmm0_4
  float v18; // xmm1_4
  float v19; // xmm5_4
  float v20; // xmm2_4
  int32_t result;
  float v22; // xmm3_4
  float v23; // xmm3_4
  float v24; // xmm3_4
  float v25; // xmm3_4
  float v26; // xmm3_4
  float v27; // xmm3_4
  float v28; // xmm3_4
  uint32_t *v29;
  int *v30;
  int v31;
  int v32;
  int v33;
  int v34;
  int v35;
  int v36;
  int v37;
  int v38;
  int32_t v39;
  int32_t v40;
  int32_t v41;
  int v42;
  int v43;
  int32_t v44;
  int32_t v45;
  int v46;
  int v47;
  int v48;
  int v49;
  int v50;
  int v51;
  int v52;
  int v53; // xmm2_4
  int v54; // xmm1_4
  int v55; // xmm0_4
  typedef float _g4_t_v56;
  typedef float _g4_t_v57;
  typedef float _g4_t_v58;
  typedef float _g4_t_v59;
  typedef float _g4_t_v60;
  typedef float _g4_t_v61;
  typedef float _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef float _g4_t_v65;
  typedef float _g4_t_v66;
  typedef float _g4_t_v67;
  typedef float _g4_t_v68;
  typedef float _g4_t_v69;
  typedef int _g4_t_v70;
  typedef float _g4_t_v71;
  typedef int _g4_t_v72;
  typedef float _g4_t_v73;
  typedef int16_t _g4_t_v74;
  typedef int _g4_t_v75;
  typedef float _g4_t_v76;
  typedef int _g4_t_v77;
  typedef unsigned int _g4_t_v78;
  typedef float _g4_t_v79;
  typedef float _g4_t_v80[31];
  typedef uint8_t _g4_t_v81[48];
  typedef uint8_t _g4_t_v82[125];
  enum : size_t {
    _g4_s0 = 464u,
    _g4_s1 = (8u + sizeof(_g4_t_v56)) > _g4_s0 ? (8u + sizeof(_g4_t_v56)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v57)) > _g4_s1 ? (16u + sizeof(_g4_t_v57)) : _g4_s1,
    _g4_s3 = (24u + sizeof(_g4_t_v58)) > _g4_s2 ? (24u + sizeof(_g4_t_v58)) : _g4_s2,
    _g4_s4 = (28u + sizeof(_g4_t_v59)) > _g4_s3 ? (28u + sizeof(_g4_t_v59)) : _g4_s3,
    _g4_s5 = (36u + sizeof(_g4_t_v60)) > _g4_s4 ? (36u + sizeof(_g4_t_v60)) : _g4_s4,
    _g4_s6 = (40u + sizeof(_g4_t_v61)) > _g4_s5 ? (40u + sizeof(_g4_t_v61)) : _g4_s5,
    _g4_s7 = (44u + sizeof(_g4_t_v62)) > _g4_s6 ? (44u + sizeof(_g4_t_v62)) : _g4_s6,
    _g4_s8 = (52u + sizeof(_g4_t_v63)) > _g4_s7 ? (52u + sizeof(_g4_t_v63)) : _g4_s7,
    _g4_s9 = (56u + sizeof(_g4_t_v64)) > _g4_s8 ? (56u + sizeof(_g4_t_v64)) : _g4_s8,
    _g4_s10 = (60u + sizeof(_g4_t_v65)) > _g4_s9 ? (60u + sizeof(_g4_t_v65)) : _g4_s9,
    _g4_s11 = (64u + sizeof(_g4_t_v66)) > _g4_s10 ? (64u + sizeof(_g4_t_v66)) : _g4_s10,
    _g4_s12 = (68u + sizeof(_g4_t_v67)) > _g4_s11 ? (68u + sizeof(_g4_t_v67)) : _g4_s11,
    _g4_s13 = (72u + sizeof(_g4_t_v68)) > _g4_s12 ? (72u + sizeof(_g4_t_v68)) : _g4_s12,
    _g4_s14 = (76u + sizeof(_g4_t_v69)) > _g4_s13 ? (76u + sizeof(_g4_t_v69)) : _g4_s13,
    _g4_s15 = (80u + sizeof(_g4_t_v70)) > _g4_s14 ? (80u + sizeof(_g4_t_v70)) : _g4_s14,
    _g4_s16 = (80u + sizeof(_g4_t_v71)) > _g4_s15 ? (80u + sizeof(_g4_t_v71)) : _g4_s15,
    _g4_s17 = (84u + sizeof(_g4_t_v72)) > _g4_s16 ? (84u + sizeof(_g4_t_v72)) : _g4_s16,
    _g4_s18 = (84u + sizeof(_g4_t_v73)) > _g4_s17 ? (84u + sizeof(_g4_t_v73)) : _g4_s17,
    _g4_s19 = (88u + sizeof(_g4_t_v74)) > _g4_s18 ? (88u + sizeof(_g4_t_v74)) : _g4_s18,
    _g4_s20 = (88u + sizeof(_g4_t_v75)) > _g4_s19 ? (88u + sizeof(_g4_t_v75)) : _g4_s19,
    _g4_s21 = (88u + sizeof(_g4_t_v76)) > _g4_s20 ? (88u + sizeof(_g4_t_v76)) : _g4_s20,
    _g4_s22 = (88u + sizeof(_g4_t_v77)) > _g4_s21 ? (88u + sizeof(_g4_t_v77)) : _g4_s21,
    _g4_s23 = (92u + sizeof(_g4_t_v78)) > _g4_s22 ? (92u + sizeof(_g4_t_v78)) : _g4_s22,
    _g4_s24 = (92u + sizeof(_g4_t_v79)) > _g4_s23 ? (92u + sizeof(_g4_t_v79)) : _g4_s23,
    _g4_s25 = (96u + sizeof(_g4_t_v80)) > _g4_s24 ? (96u + sizeof(_g4_t_v80)) : _g4_s24,
    _g4_s26 = (223u + sizeof(_g4_t_v81)) > _g4_s25 ? (223u + sizeof(_g4_t_v81)) : _g4_s25,
    _g4_s27 = (271u + sizeof(_g4_t_v82)) > _g4_s26 ? (271u + sizeof(_g4_t_v82)) : _g4_s26
  };
  alignas(16) uint8_t _g4_sf[_g4_s27];
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 8u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 16u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 24u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 28u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 36u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 40u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 44u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 52u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 56u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 60u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 64u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 68u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 72u);
  _g4_t_v69 &v69 = *reinterpret_cast<_g4_t_v69 *>(_g4_sf + 76u);
  _g4_t_v70 &v70 = *reinterpret_cast<_g4_t_v70 *>(_g4_sf + 80u);
  _g4_t_v71 &v71 = *reinterpret_cast<_g4_t_v71 *>(_g4_sf + 80u);
  _g4_t_v72 &v72 = *reinterpret_cast<_g4_t_v72 *>(_g4_sf + 84u);
  _g4_t_v73 &v73 = *reinterpret_cast<_g4_t_v73 *>(_g4_sf + 84u);
  _g4_t_v74 &v74 = *reinterpret_cast<_g4_t_v74 *>(_g4_sf + 88u);
  _g4_t_v75 &v75 = *reinterpret_cast<_g4_t_v75 *>(_g4_sf + 88u);
  _g4_t_v76 &v76 = *reinterpret_cast<_g4_t_v76 *>(_g4_sf + 88u);
  _g4_t_v77 &v77 = *reinterpret_cast<_g4_t_v77 *>(_g4_sf + 88u);
  _g4_t_v78 &v78 = *reinterpret_cast<_g4_t_v78 *>(_g4_sf + 92u);
  _g4_t_v79 &v79 = *reinterpret_cast<_g4_t_v79 *>(_g4_sf + 92u);
  _g4_t_v80 &v80 = *reinterpret_cast<_g4_t_v80 *>(_g4_sf + 96u);
  _g4_t_v81 &v81 = *reinterpret_cast<_g4_t_v81 *>(_g4_sf + 223u);
  _g4_t_v82 &v82 = *reinterpret_cast<_g4_t_v82 *>(_g4_sf + 271u);

  v3 = (a2 & 0x7FFFFFFFu) >> (32 - *(uint32_t *)(a1 + 180));
  v78 = a2 & (0xFFFFFFFF >> *(uint32_t *)(a1 + 180));
  if ( a2 < 0 )
  {
    v29 = (uint32_t *)((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0);
    v30 = (int *)(*(uint32_t *)(a1 + 196) + (v3 << 6));
    v31 = *v30;
    v29[1] = v30[1];
    *v29 = v31;
    v32 = v30[2];
    v29[3] = v30[3];
    v29[2] = v32;
    v33 = v30[4];
    v29[5] = v30[5];
    v29[4] = v33;
    v34 = v30[6];
    v29[7] = v30[7];
    v29[6] = v34;
    v35 = v30[8];
    v29[9] = v30[9];
    v29[8] = v35;
    v36 = v30[10];
    v29[11] = v30[11];
    v29[10] = v36;
    v37 = v30[12];
    v29[13] = v30[13];
    v29[12] = v37;
    v38 = v30[15];
    v29[14] = v30[14];
    v29[15] = v38;
    result = *(uint32_t *)(*(int *)((char *)&dword_14 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0)) + 4 * v78);
    if ( (*(unsigned int *)((char *)off_3C + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0)) & 0xC0FFFFFF) != 0 )
    {
      if ( (*(unsigned int *)((char *)off_3C + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0)) & 0xC0FFFFFF) == 1 )
      {
        hkpConvexTransformShapeBase::Construct(
          a3,
          10,
          *(uint32_t *)(result + 16),
          *(uint32_t *)(*(int *)((char *)&dword_14 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0)) + 4 * v78),
          0);
        *(uint32_t *)a3 = ((uint32_t)(uintptr_t)&off_209A948);
        v53 = *(uint32_t *)((char *)&word_30 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0));
        v54 = *(int *)((char *)&dword_34 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0));
        v55 = *(int *)((char *)&dword_38 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0));
        *(uint32_t *)(a3 + 44) = 0;
        *(uint32_t *)(a3 + 32) = v53;
        *(uint32_t *)(a3 + 28) = 0;
        *(uint32_t *)(a3 + 36) = v54;
        *(uint32_t *)(a3 + 40) = v55;
      }
      else
      {
        v77 = *(uint32_t *)(*(int *)((char *)&dword_14 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0)) + 4 * v78);
        hkRotationf::set((hkRotationf::Self *)v80, (const hkQuaternionf::Self *)(v29 + 8));
        v80[12] = *(float *)((char *)&word_30 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0));
        LODWORD(v80[13]) = *(int *)((char *)&dword_34 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0));
        LODWORD(v80[14]) = *(int *)((char *)&dword_38 + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0));
        LODWORD(v80[15]) = (uint32_t)(uintptr_t)(*(int **)((char *)off_3C + ((unsigned int)(uintptr_t)(v81) & 0xFFFFFFC0)));
        hkpConvexTransformShape::Construct((uint32_t *)a3, v77, (hkTransformf::Self *)v80, 0);
      }
      return a3;
    }
  }
  else
  {
    v4 = a1 + 32;
    if ( *(uint32_t *)(a1 + 188) != 1 )
    {
      v5 = (__m128i *)(*(uint32_t *)(a1 + 184) + 112 * v3);
      v4 = (unsigned int)(uintptr_t)(v82) & 0xFFFFFF90;
      if ( ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90) >= (unsigned int)(uintptr_t)(&v5[1]) || (unsigned int)(uintptr_t)(v5) >= v4 + 16 )
      {
        *(__m128i *)v4 = *v5;
        *(__m128i *)((char *)&word_10 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v5[1];
        *(__m128i *)((char *)&dword_20 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v5[2];
        *(__m128i *)((char *)&word_30 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v5[3];
        *(__m128i *)((char *)&dword_40 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v5[4];
        *(__m128i *)((char *)&dword_50 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v5[5];
        *(__m128i *)((char *)&dword_60 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v5[6];
      }
      else
      {
        v39 =g4_m128_lane<int32_t>(*(v5), 0);
        *(uint32_t *)((char *)&loc_4 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(*(v5), 1);
        *(uint32_t *)v4 = v39;
        v40 =g4_m128_lane<int32_t>(*(v5), 2);
        *(uint32_t *)&byte_9[((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90) + 3] =g4_m128_lane<int32_t>(*(v5), 3);
        *(uint32_t *)&(&byte_8)[(unsigned int)(uintptr_t)(v82) & 0xFFFFFF90] = v40;
        v41 =g4_m128_lane<int32_t>(v5[1], 0);
        *(int *)((char *)&dword_14 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[1], 1);
        *(uint32_t *)((char *)&word_10 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v41;
        v42 =g4_m128_lane<int32_t>(v5[1], 2);
        *(int *)((char *)&dword_1C + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[1], 3);
        *(int *)((char *)&dword_18 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v42;
        v43 =g4_m128_lane<int32_t>(v5[2], 0);
        *(int *)((char *)dword_24 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[2], 1);
        *(int *)((char *)&dword_20 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v43;
        v44 =g4_m128_lane<int32_t>(v5[2], 2);
        *(uint32_t *)((char *)&word_2C + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[2], 3);
        *(uint32_t *)((char *)&word_28 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v44;
        v45 =g4_m128_lane<int32_t>(v5[3], 0);
        *(int *)((char *)&dword_34 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[3], 1);
        *(uint32_t *)((char *)&word_30 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v45;
        v46 =g4_m128_lane<int32_t>(v5[3], 2);
        *(int **)((char *)off_3C + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = (int *)g4_m128_lane<int32_t>(v5[3], 3);
        *(int *)((char *)&dword_38 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v46;
        v47 =g4_m128_lane<int32_t>(v5[4], 1);
        *(int *)((char *)&dword_40 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[4], 0);
        *(int *)((char *)&dword_44 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v47;
        v48 =g4_m128_lane<int32_t>(v5[4], 2);
        *(int *)((char *)&dword_4C + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[4], 3);
        *(int *)((char *)&dword_48 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v48;
        v49 =g4_m128_lane<int32_t>(v5[5], 0);
        *(int *)((char *)&dword_54 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[5], 1);
        *(int *)((char *)&dword_50 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v49;
        v50 =g4_m128_lane<int32_t>(v5[5], 2);
        *(int *)((char *)&dword_5C + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[5], 3);
        *(int *)((char *)&dword_58 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v50;
        v51 =g4_m128_lane<int32_t>(v5[6], 0);
        *(int *)((char *)&dword_64 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) =g4_m128_lane<int32_t>(v5[6], 1);
        *(int *)((char *)&dword_60 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v51;
        v52 =g4_m128_lane<int32_t>(v5[6], 2);
        *(uint32_t *)&dword_6C[(unsigned int)(uintptr_t)(v82) & 0xFFFFFF90] =g4_m128_lane<int32_t>(v5[6], 3);
        *(int *)((char *)&dword_68 + ((unsigned int)(uintptr_t)(v82) & 0xFFFFFF90)) = v52;
      }
    }
    v74 = v78 & *(char *)(v4 + 47);
    v6 = (uint16_t *)(*(uint32_t *)(v4 + 32) + v78 * *(uint16_t *)(v4 + 44));
    v7 = *(uint8_t *)(v4 + 46);
    switch ( v7 )
    {
      case 2:
        v72 = *v6;
        v8 = v6[(int16_t)(v74 + 1)];
        v70 = v6[(int16_t)((v74 ^ 1) + 1)];
        break;
      case 3:
        v72 = *(uint32_t *)v6;
        v8 = *(uint32_t *)&v6[2 * (int16_t)(v74 + 1)];
        v70 = *(uint32_t *)&v6[2 * (int16_t)((v74 ^ 1) + 1)];
        break;
      case 1:
        v72 = *(uint8_t *)v6;
        v8 = *((uint8_t *)v6 + (int16_t)(v74 + 1));
        v70 = *((uint8_t *)v6 + (int16_t)((v74 ^ 1) + 1));
        break;
      default:
        v70 = 0;
        v8 = 0;
        v72 = 0;
        break;
    }
    v75 = *(uint32_t *)(v4 + 24);
    v9 = *(uint16_t *)(v4 + 36);
    *(uint32_t *)(a3 + 16) = hkConvexShapeDefaultRadius;
    *(uint32_t *)(a3 + 12) = 0;
    *(uint8_t *)(a3 + 22) = 6;
    *(uint32_t *)(a3 + 4) = -65535;
    *(uint8_t *)(a3 + 8) = 2;
    *(uint8_t *)(a3 + 9) = 4;
    *(uint8_t *)(a3 + 10) = 0;
    *(uint8_t *)(a3 + 11) = 0;
    *(uint32_t *)a3 = ((uint32_t)(uintptr_t)&off_209A8C8);
    *(uint16_t *)(a3 + 20) = 0;
    *(uint8_t *)(a3 + 23) = 0;
    *(uint32_t *)(a3 + 80) = 0;
    *(uint32_t *)(a3 + 84) = 0;
    *(uint32_t *)(a3 + 88) = 0;
    *(uint32_t *)(a3 + 92) = 0;
    *(uint32_t *)(a3 + 12) = *(uint32_t *)(v4 + 16);
    *(uint32_t *)(a3 + 16) = *(uint32_t *)(a1 + 232);
    *(uint8_t *)(a3 + 22) = *(uint8_t *)(a1 + 220);
    *(uint8_t *)(a3 + 23) = (float)((float)((float)(*(float *)(v4 + 48) * *(float *)(v4 + 48))
                                        + (float)(*(float *)(v4 + 52) * *(float *)(v4 + 52)))
                                + (float)(*(float *)(v4 + 56) * *(float *)(v4 + 56))) > 0.0;
    *(uint32_t *)(a3 + 80) = *(uint32_t *)(v4 + 48);
    *(uint32_t *)(a3 + 84) = *(uint32_t *)(v4 + 52);
    *(uint32_t *)(a3 + 88) = *(uint32_t *)(v4 + 56);
    *(uint32_t *)(a3 + 92) = *(uint32_t *)(v4 + 60);
    v10 = 0;
    if ( *(uint32_t *)(a1 + 212) != 0 )
      v10 = *(uint16_t *)(*(uint32_t *)(a1 + 208) + 2 * (*(uint32_t *)(v4 + 40) + v78));
    *(uint16_t *)(a3 + 20) = v10;
    v11 = (float *)(v75 + v9 * v72);
    v12 = (float *)(v75 + v9 * v8);
    v13 = (float *)(v75 + v70 * v9);
    v14 = *(float *)(v4 + 96);
    v15 = *(float *)(v4 + 104);
    v16 = *(float *)(v4 + 100);
    v69 = v15 * v11[2];
    v17 = *(float *)(v4 + 92);
    v58 = *v11 * v14;
    v61 = v11[1] * v16;
    v66 = *(float *)(v4 + 64);
    v76 = (float)(v17 * v17) - 0.5;
    v79 = *(float *)(v4 + 80);
    v65 = *(float *)(v4 + 68);
    v18 = *(float *)(v4 + 88);
    v64 = *(float *)(v4 + 72);
    v63 = *(float *)(v4 + 76);
    v19 = (float)((float)(v61 * *(float *)(v4 + 84)) + (float)(v58 * v79)) + (float)(v69 * v18);
    v20 = v16 * v12[1];
    v73 = *(float *)(v4 + 84);
    v71 = (float)(*(float *)(v4 + 108) * v80[3]) * v76;
    v60 = *v12 * v14;
    v57 = v15 * v12[2];
    v56 = v14 * *v13;
    v67 = *(float *)(v4 + 100) * v13[1];
    v68 = (float)((float)(v60 * v79) + (float)(v73 * v20)) + (float)(v57 * v18);
    v59 = v15 * v13[2];
    v62 = (float)((float)(v73 * v67) + (float)(v56 * v79)) + (float)(v59 * v18);
    result = a3;
    v22 = (float)((float)(v76 * v58) + (float)(v79 * v19))
        + (float)((float)((float)(v69 * v73) - (float)(v61 * v18)) * v17);
    *(float *)(a3 + 32) = (float)(v22 + v22) + v66;
    v23 = (float)((float)(v76 * v61) + (float)(v19 * v73))
        + (float)((float)((float)(v58 * v18) - (float)(v69 * v79)) * v17);
    *(float *)(a3 + 36) = (float)(v23 + v23) + v65;
    *(float *)(a3 + 44) = (float)((float)((float)(v71 + (float)(v19 * v17)) + (float)(0.0 * v17))
                                + (float)((float)(v71 + (float)(v19 * v17)) + (float)(0.0 * v17)))
                        + v63;
    v24 = (float)((float)(v69 * v76) + (float)(v19 * v18))
        + (float)((float)((float)(v61 * v79) - (float)(v58 * v73)) * v17);
    *(float *)(a3 + 40) = (float)(v24 + v24) + v64;
    v25 = (float)((float)(v60 * v76) + (float)(v68 * v79))
        + (float)((float)((float)(v73 * v57) - (float)(v20 * v18)) * v17);
    *(float *)(a3 + 48) = (float)(v25 + v25) + v66;
    *(float *)(a3 + 60) = (float)((float)((float)((float)(v68 * v17) + v71) + (float)(0.0 * v17))
                                + (float)((float)((float)(v68 * v17) + v71) + (float)(0.0 * v17)))
                        + v63;
    v26 = (float)((float)(v76 * v20) + (float)(v73 * v68))
        + (float)((float)((float)(v60 * v18) - (float)(v79 * v57)) * v17);
    *(float *)(a3 + 52) = (float)(v26 + v26) + v65;
    v27 = (float)((float)(v76 * v57) + (float)(v68 * v18))
        + (float)((float)((float)(v79 * v20) - (float)(v60 * v73)) * v17);
    *(float *)(a3 + 56) = (float)(v27 + v27) + v64;
    v28 = (float)((float)(v76 * v56) + (float)(v62 * v79))
        + (float)((float)((float)(v59 * v73) - (float)(v67 * v18)) * v17);
    *(float *)(a3 + 64) = (float)(v28 + v28) + v66;
    *(float *)(a3 + 68) = (float)((float)((float)((float)(v67 * v76) + (float)(v62 * v73))
                                        + (float)((float)((float)(v56 * v18) - (float)(v79 * v59)) * v17))
                                + (float)((float)((float)(v67 * v76) + (float)(v62 * v73))
                                        + (float)((float)((float)(v56 * v18) - (float)(v79 * v59)) * v17)))
                        + v65;
    *(float *)(a3 + 72) = (float)((float)((float)((float)(v76 * v59) + (float)(v18 * v62))
                                        + (float)((float)((float)(v79 * v67) - (float)(v73 * v56)) * v17))
                                + (float)((float)((float)(v76 * v59) + (float)(v18 * v62))
                                        + (float)((float)((float)(v79 * v67) - (float)(v73 * v56)) * v17)))
                        + v64;
    *(float *)(a3 + 76) = (float)((float)((float)(v71 + (float)(v62 * v17)) + (float)(0.0 * v17))
                                + (float)((float)(v71 + (float)(v62 * v17)) + (float)(0.0 * v17)))
                        + v63;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::Construct  (binary VA: 0x16e5e80)
// Original: hkpExtendedMeshShape::hkpExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::Construct(hkpExtendedMeshShape::Self *self, float a2, int a3)
{
  hkpShapeCollection::Construct(self, 13, 1);
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209B604);
  *((uint16_t *)self + 16) = 10;
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B588);
  *((uint16_t *)self + 19) = 0;
  *((uint16_t *)self + 18) = 0;
  *((uint32_t *)self + 11) = 0;
  *((uint32_t *)self + 10) = 0;
  *((uint32_t *)self + 28) = 0;
  *((uint32_t *)self + 29) = 0;
  *((uint32_t *)self + 30) = 0;
  *((uint32_t *)self + 31) = 1065353216;
  *((uint32_t *)self + 32) = 1065353216;
  *((uint32_t *)self + 33) = 1065353216;
  *((uint16_t *)self + 17) = 0;
  *((uint32_t *)self + 12) = 0;
  *((uint32_t *)self + 20) = 0;
  *((uint8_t *)self + 79) = 0;
  *((uint32_t *)self + 21) = 0;
  *((uint32_t *)self + 22) = 0;
  *((uint32_t *)self + 23) = 0;
  *((uint32_t *)self + 24) = 0;
  *((uint32_t *)self + 25) = 0;
  *((uint32_t *)self + 26) = 0;
  *((uint32_t *)self + 27) = 0;
  *((uint32_t *)self + 34) = 1065353216;
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 35) = 1065353216;
  *((uint32_t *)self + 45) = a3;
  *((uint32_t *)self + 36) = -8388626;
  *((uint32_t *)self + 37) = -8388626;
  *((uint32_t *)self + 47) = 0;
  *((uint32_t *)self + 48) = 0x80000000;
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 50) = 0;
  *((uint32_t *)self + 51) = 0x80000000;
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 53) = 0;
  *((uint32_t *)self + 54) = 0x80000000;
  *((float *)self + 58) = a2;
  *((uint32_t *)self + 56) = 0;
  *((uint8_t *)self + 220) = 6;
  *((uint32_t *)self + 38) = -8388626;
  *((uint32_t *)self + 39) = -8388626;
  *((uint32_t *)self + 57) = 0;
  *((uint32_t *)self + 40) = 0;
  *((uint32_t *)self + 44) = 0;
  *((uint32_t *)self + 41) = 0;
  *((uint32_t *)self + 42) = 0;
  *((uint32_t *)self + 43) = 0;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getNumChildShapesInTrianglesSubpart  (binary VA: 0x16e6060)
// Original: hkpExtendedMeshShape::_getNumChildShapesInTrianglesSubpart
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::getNumChildShapesInTrianglesSubpart(hkpExtendedMeshShape::Self *self, const hkpExtendedMeshShape::TrianglesSubpart::Self *a2, int a3)
{
  int v3;
  int32_t ChildShape;
  typedef int _g4_t_v6;
  typedef int _g4_t_v7;
  typedef int _g4_t_v8;
  enum : size_t {
    _g4_s0 = 624u,
    _g4_s1 = (12u + sizeof(_g4_t_v6)) > _g4_s0 ? (12u + sizeof(_g4_t_v6)) : _g4_s0,
    _g4_s2 = (28u + sizeof(_g4_t_v7)) > _g4_s1 ? (28u + sizeof(_g4_t_v7)) : _g4_s1,
    _g4_s3 = (32u + sizeof(_g4_t_v8)) > _g4_s2 ? (32u + sizeof(_g4_t_v8)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 28u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 32u);

  if ( *((int *)a2 + 5) <= 0 )
    return 0;
  v3 = 0;
  v6 = 0;
  do
  {
    ChildShape = hkpExtendedMeshShape::getChildShape(
                   (int)(uintptr_t)(self),
                   v3 | (a3 << (32 - *((uint8_t *)self + 180))),
                   (int32_t)(uintptr_t)(&v8));
    v7 = hkDefaultTriangleDegeneracyTolerance;
    v6 += hkcdTriangleUtil::isDegenerate(ChildShape + 32, ChildShape + 48, ChildShape + 64, &v7) == 0;
    ++v3;
  }
  while ( *((uint32_t *)a2 + 5) > v3 );
  return v6;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getNumChildShapesInShapesSubpart  (binary VA: 0x16e6140)
// Original: hkpExtendedMeshShape::_getNumChildShapesInShapesSubpart
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::getNumChildShapesInShapesSubpart(hkpExtendedMeshShape::Self *self, const hkpExtendedMeshShape::ShapesSubpart::Self *a2)
{
  return *((uint32_t *)a2 + 6);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getMeshMaterial  (binary VA: 0x16e6150)
// Original: hkpExtendedMeshShape::getMeshMaterial
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::getMeshMaterial(hkpExtendedMeshShape::Self *self, signed int a2)
{
  unsigned int v2;
  char *v3;
  int v4;
  unsigned int v5;
  int v6;
  int v7;
  int v8;
  unsigned int v9;
  uint8_t *v10;
  int v11;

  v2 = (a2 & 0x7FFFFFFFu) >> (32 - *((uint32_t *)self + 45));
  if ( a2 < 0 )
  {
    v3 = (char *)(*((uint32_t *)self + 49) + (v2 << 6));
  }
  else
  {
    v3 = (char *)self + 32;
    if ( *((uint32_t *)self + 47) != 1 )
      v3 = (char *)(*((uint32_t *)self + 46) + 112 * v2);
  }
  v4 = *((uint32_t *)v3 + 2);
  v5 = *(uint16_t *)v3 & 6;
  v6 = *((uint32_t *)v3 + 3);
  v7 = *((uint16_t *)v3 + 3);
  v8 = *((int16_t *)v3 + 2);
  v9 = v5 >> 1;
  if ( v8 <= 0 || v4 == 0 )
    return 0;
  v10 = (uint8_t *)(v7 * (a2 & (0xFFFFFFFF >> *((uint32_t *)self + 45))) + v4);
  if ( v9 == 1 )
    v11 = *v10;
  else
    v11 = *(uint16_t *)v10;
  return v6 + v8 * v11;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::getCollisionFilterInfo  (binary VA: 0x16e61f0)
// Original: hkpExtendedMeshShape::getCollisionFilterInfo
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::getCollisionFilterInfo(hkpExtendedMeshShape::Self *self, unsigned int a2)
{
  int MeshMaterial;

  MeshMaterial = hkpExtendedMeshShape::getMeshMaterial(self, a2);
  if ( MeshMaterial != 0 )
    return *(uint32_t *)MeshMaterial;
  else
    return *((uint32_t *)self + 56);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::calcAabbExtents  (binary VA: 0x16e6250)
// Original: hkpExtendedMeshShape::calcAabbExtents
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShape::calcAabbExtents(hkpExtendedMeshShape::Self *self, hkpExtendedMeshShape::TrianglesSubpart::Self *a2)
{
  void *result;
  int v3;
  int v4;
  int v5;
  int v6;
  float v7; // xmm3_4
  float v8; // xmm4_4
  float v9; // xmm5_4
  float v10; // xmm1_4
  float v11; // xmm7_4
  float v12; // xmm0_4
  float v13; // xmm4_4
  float v14; // xmm7_4
  float v15; // xmm0_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm5_4
  __m128i v21;
  float v22; // xmm1_4
  unsigned int v23;
  __m128i v24;
  unsigned int v25;
  float v26; // xmm7_4
  float v27; // xmm5_4
  float v28; // xmm3_4
  float v29; // xmm4_4
  float v30; // xmm5_4
  float v31; // xmm2_4
  float v32; // xmm1_4
  float v33; // xmm7_4
  float v34; // xmm0_4
  float v35; // xmm7_4
  float v36; // xmm5_4
  float v37; // xmm4_4
  __m128i v38;
  float v39; // xmm0_4
  float v40; // xmm3_4
  float v41; // xmm5_4
  float v42; // xmm3_4
  float v43;
  __m128i v44;
  float v45; // xmm5_4
  float v46;
  __m128i v47;
  float v48; // xmm7_4
  float v49;
  float v50; // xmm3_4
  float v51; // xmm4_4
  float v52; // xmm5_4
  float v53; // xmm2_4
  float v54; // xmm7_4
  float v55; // xmm7_4
  float v56; // xmm0_4
  float v57; // xmm3_4
  float v58; // xmm5_4
  float v59; // xmm0_4
  float v60; // xmm2_4
  float v61; // xmm3_4
  float v62; // xmm5_4
  float v63; // xmm4_4
  float v64; // xmm3_4
  float v65; // xmm6_4
  float v66; // xmm7_4
  float v67; // xmm0_4
  float v68; // xmm5_4
  float v69; // xmm1_4
  char v70;
  uint16_t *v71;
  int v72;
  float *v73;
  float *v74;
  float *v75;
  uint8_t *v76;
  int v77;
  float v78;
  float v79;
  float v80;
  int v81;
  float v82;
  float v83;
  float v84;
  float i;
  float v86;
  float v87;
  float v88;
  float v89;
  float v90;
  float v91;
  float v92;
  float v93;
  float v94;
  float v95;
  float v96;
  float v97;
  float v98;
  float v99;

  result = &g_vectorfConstants;
  *(uint32_t *)a2 = 2139095022;
  *((uint32_t *)a2 + 1) = 2139095022;
  *((uint32_t *)a2 + 2) = 2139095022;
  *((uint32_t *)a2 + 3) = 2139095022;
  *((uint32_t *)a2 + 4) = -8388626;
  *((uint32_t *)a2 + 5) = -8388626;
  *((uint32_t *)a2 + 6) = -8388626;
  *((uint32_t *)a2 + 7) = -8388626;
  if ( *((int *)self + 5) > 0 )
  {
    v81 = 0;
    v82 = *(float *)a2;
    v99 = *((float *)a2 + 1);
    v98 = *((float *)a2 + 2);
    v96 = *((float *)a2 + 3);
    v94 = *((float *)a2 + 4);
    v91 = *((float *)a2 + 5);
    v88 = *((float *)a2 + 6);
    for ( i = *((float *)a2 + 7); ; i = v69 )
    {
      v70 = *((uint8_t *)self + 46);
      if ( v70 == 1 )
      {
        v76 = (uint8_t *)(*((uint32_t *)self + 8) + v81 * *((uint16_t *)self + 22));
        v77 = *((uint16_t *)self + 18);
        v73 = (float *)(*((uint32_t *)self + 6) + v77 * *v76);
        v74 = (float *)(*((uint32_t *)self + 6) + v77 * v76[1]);
        v75 = (float *)(*((uint32_t *)self + 6) + v76[2] * v77);
      }
      else
      {
        v71 = (uint16_t *)(*((uint32_t *)self + 8) + v81 * *((uint16_t *)self + 22));
        if ( v70 == 2 )
        {
          v3 = *((uint16_t *)self + 18);
          v4 = v3 * *v71;
          v5 = v3 * v71[1];
          v6 = v71[2] * v3;
        }
        else
        {
          v72 = *((uint16_t *)self + 18);
          v4 = v72 * *(uint32_t *)v71;
          v5 = v72 * *((uint32_t *)v71 + 1);
          v6 = *((uint32_t *)v71 + 2) * v72;
        }
        v73 = (float *)(*((uint32_t *)self + 6) + v4);
        v74 = (float *)(*((uint32_t *)self + 6) + v5);
        v75 = (float *)(*((uint32_t *)self + 6) + v6);
      }
      v7 = *v73 * *((float *)self + 24);
      v8 = v73[1] * *((float *)self + 25);
      v9 = v73[2] * *((float *)self + 26);
      v10 = (float)((float)(*((float *)self + 20) * v7) + (float)(*((float *)self + 21) * v8))
          + (float)(*((float *)self + 22) * v9);
      v78 = (float)(*((float *)self + 23) * *((float *)self + 23)) - 0.5;
      v11 = (float)((float)(v78 * v7) + (float)(*((float *)self + 20) * v10))
          + (float)((float)((float)(*((float *)self + 21) * v9) - (float)(*((float *)self + 22) * v8))
                  * *((float *)self + 23));
      v12 = v78 * v8;
      v13 = (float)(v8 * *((float *)self + 20)) - (float)(v7 * *((float *)self + 21));
      v14 = (float)(v11 + v11) + *((float *)self + 16);
      v15 = (float)(v12 + (float)(*((float *)self + 21) * v10))
          + (float)(*((float *)self + 23)
                  * (float)((float)(*((float *)self + 22) * v7) - (float)(*((float *)self + 20) * v9)));
      v16 = (float)((float)((float)(0.0 * *((float *)self + 27)) * v78) + (float)(*((float *)self + 23) * v10))
          + (float)(0.0 * *((float *)self + 23));
      v17 = (float)((float)(v9 * v78) + (float)(*((float *)self + 22) * v10)) + (float)(v13 * *((float *)self + 23));
      v18 = (float)(v15 + v15) + *((float *)self + 17);
      v19 = (float)(v16 + v16) + *((float *)self + 19);
      v20 = (float)(v17 + v17) + *((float *)self + 18);
      v79 = fminf(v82, v14);
g4_m128_raw(v21) = LODWORD(v98);
      v22 = fminf(v99, v18);
      *(float *)a2 = v79;
      *(float *)g4_m128_ptr<int32_t>(v21) = fminf(v98, v20);
      *((float *)a2 + 1) = v22;
      *((uint32_t *)a2 + 2) =g4_m128_lane<int32_t>(v21, 0);
      v23 = _mm_cvtsi128_si32(v21);
g4_m128_raw(v24) = LODWORD(v96);
      *(float *)g4_m128_ptr<int32_t>(v24) = fminf(v96, v19);
      v83 = v22;
      *((uint32_t *)a2 + 3) =g4_m128_lane<int32_t>(v24, 0);
      v25 = _mm_cvtsi128_si32(v24);
      *(float *)g4_m128_ptr<int32_t>(v24) = fmaxf(v94, v14);
      v26 = fmaxf(v91, v18);
      *((uint32_t *)a2 + 4) =g4_m128_lane<int32_t>(v24, 0);
      v95 = *(float *)g4_m128_ptr<int32_t>(v24);
      *(float *)g4_m128_ptr<int32_t>(v24) = fmaxf(v88, v20);
      v27 = fmaxf(i, v19);
      *((float *)a2 + 5) = v26;
      v92 = v26;
      *((uint32_t *)a2 + 6) =g4_m128_lane<int32_t>(v24, 0);
      *((float *)a2 + 7) = v27;
      v28 = *v74 * *((float *)self + 24);
      v29 = v74[1] * *((float *)self + 25);
      v86 = v27;
      v30 = v74[2] * *((float *)self + 26);
      v31 = (float)(*((float *)self + 23) * *((float *)self + 23)) - 0.5;
      v89 = *(float *)g4_m128_ptr<int32_t>(v24);
      v32 = (float)((float)(*((float *)self + 20) * v28) + (float)(*((float *)self + 21) * v29))
          + (float)(*((float *)self + 22) * v30);
      v33 = (float)((float)(v28 * v31) + (float)(*((float *)self + 20) * v32))
          + (float)((float)((float)(*((float *)self + 21) * v30) - (float)(*((float *)self + 22) * v29))
                  * *((float *)self + 23));
      v34 = (float)(v29 * v31) + (float)(*((float *)self + 21) * v32);
      v35 = (float)(v33 + v33) + *((float *)self + 16);
      *(float *)g4_m128_ptr<int32_t>(v24) = (float)(*((float *)self + 22) * v28) - (float)(*((float *)self + 20) * v30);
      v36 = (float)((float)(v30 * v31) + (float)(*((float *)self + 22) * v32))
          + (float)((float)((float)(v29 * *((float *)self + 20)) - (float)(v28 * *((float *)self + 21)))
                  * *((float *)self + 23));
      v37 = *((float *)self + 23) * v32;
      v38 = _mm_cvtsi32_si128(v23);
      v39 = (float)((float)(v34 + (float)(*(float *)g4_m128_ptr<int32_t>(v24) * *((float *)self + 23)))
                  + (float)(v34 + (float)(*(float *)g4_m128_ptr<int32_t>(v24) * *((float *)self + 23))))
          + *((float *)self + 17);
      v80 = fminf(v79, v35);
      v40 = (float)((float)((float)(0.0 * *((float *)self + 27)) * v31) + v37) + (float)(0.0 * *((float *)self + 23));
      v41 = (float)(v36 + v36) + *((float *)self + 18);
      *(float *)g4_m128_ptr<int32_t>(v38) = fminf(*(float *)g4_m128_ptr<int32_t>(v38), v41);
      *(float *)g4_m128_ptr<int32_t>(v24) = fmaxf(v89, v41);
      v97 = fminf(v83, v39);
      v42 = (float)(v40 + v40) + *((float *)self + 19);
      *((uint32_t *)a2 + 2) =g4_m128_lane<int32_t>(v38, 0);
      v43 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
      *(float *)a2 = v80;
      v44 = _mm_cvtsi32_si128(v25);
      *((float *)a2 + 1) = v97;
      *((uint32_t *)a2 + 6) =g4_m128_lane<int32_t>(v24, 0);
      *(float *)g4_m128_ptr<int32_t>(v44) = fminf(*(float *)g4_m128_ptr<int32_t>(v44), v42);
      v90 = *(float *)g4_m128_ptr<int32_t>(v24);
      v45 = fmaxf(v86, v42);
      *((uint32_t *)a2 + 3) =g4_m128_lane<int32_t>(v44, 0);
      v46 = COERCE_FLOAT(_mm_cvtsi128_si32(v44));
g4_m128_raw(v47) = LODWORD(v95);
      *(float *)g4_m128_ptr<int32_t>(v47) = fmaxf(v95, v35);
      v48 = fmaxf(v92, v39);
      *((float *)a2 + 7) = v45;
      v87 = v45;
      *((uint32_t *)a2 + 4) =g4_m128_lane<int32_t>(v47, 0);
      v49 = COERCE_FLOAT(_mm_cvtsi128_si32(v47));
      *((float *)a2 + 5) = v48;
      v50 = *v75 * *((float *)self + 24);
      v51 = v75[1] * *((float *)self + 25);
      v52 = v75[2] * *((float *)self + 26);
      v53 = (float)(*((float *)self + 23) * *((float *)self + 23)) - 0.5;
      v93 = v48;
      *(float *)g4_m128_ptr<int32_t>(v47) = (float)((float)(*((float *)self + 20) * v50) + (float)(*((float *)self + 21) * v51))
                              + (float)(*((float *)self + 22) * v52);
      v54 = (float)((float)(v50 * v53) + (float)(*((float *)self + 20) * *(float *)g4_m128_ptr<int32_t>(v47)))
          + (float)((float)((float)(*((float *)self + 21) * v52) - (float)(*((float *)self + 22) * v51))
                  * *((float *)self + 23));
      v55 = (float)(v54 + v54) + *((float *)self + 16);
      v84 = v50;
      result = (void *)++v81;
      v56 = (float)((float)(v51 * v53) + (float)(*((float *)self + 21) * *(float *)g4_m128_ptr<int32_t>(v47)))
          + (float)((float)((float)(*((float *)self + 22) * v50) - (float)(*((float *)self + 20) * v52))
                  * *((float *)self + 23));
      v57 = (float)(0.0 * *((float *)self + 27)) * v53;
      v58 = (float)((float)(v52 * v53) + (float)(*((float *)self + 22) * *(float *)g4_m128_ptr<int32_t>(v47)))
          + (float)((float)((float)(v51 * *((float *)self + 20)) - (float)(v84 * *((float *)self + 21)))
                  * *((float *)self + 23));
      v59 = (float)(v56 + v56) + *((float *)self + 17);
      v82 = fminf(v80, v55);
      v60 = fminf(v97, v59);
      v61 = (float)(v57 + (float)(*((float *)self + 23) * *(float *)g4_m128_ptr<int32_t>(v47)))
          + (float)(0.0 * *((float *)self + 23));
      v62 = (float)(v58 + v58) + *((float *)self + 18);
      v63 = fminf(v43, v62);
      v64 = (float)(v61 + v61) + *((float *)self + 19);
      *(float *)a2 = v82;
      *(float *)g4_m128_ptr<int32_t>(v47) = fmaxf(v49, v55);
      *((float *)a2 + 1) = v60;
      *((float *)a2 + 2) = v63;
      v65 = fminf(v46, v64);
      *((uint32_t *)a2 + 4) =g4_m128_lane<int32_t>(v47, 0);
      v66 = *(float *)g4_m128_ptr<int32_t>(v47);
      *(float *)g4_m128_ptr<int32_t>(v47) = fmaxf(v93, v59);
      *((float *)a2 + 3) = v65;
      *((uint32_t *)a2 + 5) =g4_m128_lane<int32_t>(v47, 0);
      v67 = *(float *)g4_m128_ptr<int32_t>(v47);
      *(float *)g4_m128_ptr<int32_t>(v47) = fmaxf(v90, v62);
      *((uint32_t *)a2 + 6) =g4_m128_lane<int32_t>(v47, 0);
      v68 = *(float *)g4_m128_ptr<int32_t>(v47);
      v69 = fmaxf(v87, v64);
      *((float *)a2 + 7) = v69;
      if ( *((uint32_t *)self + 5) <= v81 )
        break;
      v99 = v60;
      v98 = v63;
      v96 = v65;
      v94 = v66;
      v91 = v67;
      v88 = v68;
    }
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::calcAabbExtents  (binary VA: 0x16e69a0)
// Original: hkpExtendedMeshShape::calcAabbExtents
// ----------------------------------------------------------------------------
float * hkpExtendedMeshShape::calcAabbExtents(hkpExtendedMeshShape::Self *self, const hkpExtendedMeshShape::ShapesSubpart::Self *a2)
{
  int v2;
  hkpExtendedMeshShape::Self *v3;
  int v4;
  float *result;
  int v6;
  typedef hkpExtendedMeshShape::Self *_g4_t_v7;
  typedef float _g4_t_v8[8];
  typedef uint32_t _g4_t_v9[19];
  enum : size_t {
    _g4_s0 = 192u,
    _g4_s1 = (12u + sizeof(_g4_t_v7)) > _g4_s0 ? (12u + sizeof(_g4_t_v7)) : _g4_s0,
    _g4_s2 = (16u + sizeof(_g4_t_v8)) > _g4_s1 ? (16u + sizeof(_g4_t_v8)) : _g4_s1,
    _g4_s3 = (48u + sizeof(_g4_t_v9)) > _g4_s2 ? (48u + sizeof(_g4_t_v9)) : _g4_s2
  };
  alignas(16) uint8_t _g4_sf[_g4_s3];
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 12u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 16u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 48u);

  v2 = 0;
  *(uint32_t *)a2 = 2139095022;
  *((uint32_t *)a2 + 1) = 2139095022;
  *((uint32_t *)a2 + 2) = 2139095022;
  *((uint32_t *)a2 + 3) = 2139095022;
  *((uint32_t *)a2 + 4) = -8388626;
  *((uint32_t *)a2 + 5) = -8388626;
  *((uint32_t *)a2 + 6) = -8388626;
  *((uint32_t *)a2 + 7) = -8388626;
  hkRotationf::set((hkRotationf::Self *)v9, (hkpExtendedMeshShape::Self *)((char *)self + 32));
  v3 = self;
  v4 = *((uint32_t *)self + 6);
  v9[12] = *((uint32_t *)self + 12);
  v9[13] = *((uint32_t *)self + 13);
  v9[14] = *((uint32_t *)self + 14);
  v9[15] = *((uint32_t *)self + 15);
  result = v8;
  if ( v4 > 0 )
  {
    do
    {
      v7 = v3;
      v6 = *(uint32_t *)(*((uint32_t *)v3 + 5) + 4 * v2++);
      result = (float *)G4_VCALL<int>(v6, 24, v9, 0, v8);
      v3 = v7;
      *(float *)a2 = fminf(*(float *)a2, v8[0]);
      *((float *)a2 + 1) = fminf(*((float *)a2 + 1), v8[1]);
      *((float *)a2 + 2) = fminf(*((float *)a2 + 2), v8[2]);
      *((float *)a2 + 3) = fminf(*((float *)a2 + 3), v8[3]);
      *((float *)a2 + 4) = fmaxf(*((float *)a2 + 4), v8[4]);
      *((float *)a2 + 5) = fmaxf(*((float *)a2 + 5), v8[5]);
      *((float *)a2 + 6) = fmaxf(*((float *)a2 + 6), v8[6]);
      *((float *)a2 + 7) = fmaxf(*((float *)a2 + 7), v8[7]);
    }
    while ( *((uint32_t *)v7 + 6) > v2 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::recalcAabbExtents  (binary VA: 0x16e6b20)
// Original: hkpExtendedMeshShape::recalcAabbExtents
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShape::recalcAabbExtents(hkpExtendedMeshShape::Self *self)
{
  float v1; // xmm4_4
  int v2;
  int v3;
  typedef int _g4_t_v5;
  typedef int _g4_t_v6;
  typedef float _g4_t_v7;
  typedef float _g4_t_v8;
  typedef float _g4_t_v9;
  typedef float _g4_t_v10;
  typedef float _g4_t_v11;
  typedef float _g4_t_v12;
  typedef float _g4_t_v13;
  typedef float _g4_t_v14;
  typedef float _g4_t_v15[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (4u + sizeof(_g4_t_v5)) > _g4_s0 ? (4u + sizeof(_g4_t_v5)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v6)) > _g4_s1 ? (12u + sizeof(_g4_t_v6)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v7)) > _g4_s2 ? (16u + sizeof(_g4_t_v7)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v8)) > _g4_s3 ? (20u + sizeof(_g4_t_v8)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v9)) > _g4_s4 ? (24u + sizeof(_g4_t_v9)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v10)) > _g4_s5 ? (28u + sizeof(_g4_t_v10)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v11)) > _g4_s6 ? (32u + sizeof(_g4_t_v11)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v12)) > _g4_s7 ? (36u + sizeof(_g4_t_v12)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v13)) > _g4_s8 ? (40u + sizeof(_g4_t_v13)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v14)) > _g4_s9 ? (44u + sizeof(_g4_t_v14)) : _g4_s9,
    _g4_s11 = (48u + sizeof(_g4_t_v15)) > _g4_s10 ? (48u + sizeof(_g4_t_v15)) : _g4_s10
  };
  alignas(16) uint8_t _g4_sf[_g4_s11];
  _g4_t_v5 &v5 = *reinterpret_cast<_g4_t_v5 *>(_g4_sf + 4u);
  _g4_t_v6 &v6 = *reinterpret_cast<_g4_t_v6 *>(_g4_sf + 12u);
  _g4_t_v7 &v7 = *reinterpret_cast<_g4_t_v7 *>(_g4_sf + 16u);
  _g4_t_v8 &v8 = *reinterpret_cast<_g4_t_v8 *>(_g4_sf + 20u);
  _g4_t_v9 &v9 = *reinterpret_cast<_g4_t_v9 *>(_g4_sf + 24u);
  _g4_t_v10 &v10 = *reinterpret_cast<_g4_t_v10 *>(_g4_sf + 28u);
  _g4_t_v11 &v11 = *reinterpret_cast<_g4_t_v11 *>(_g4_sf + 32u);
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 36u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 40u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 44u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 48u);

  v13 = 3.40282e38f;
  v9 = 3.40282e38f;
  v8 = 3.40282e38f;
  v7 = 3.40282e38f;
  v11 = -3.40282e38f;
  v12 = -3.40282e38f;
  v10 = -3.40282e38f;
  v14 = -3.40282e38f;
  v1 = *((float *)self + 58);
  if ( *((int *)self + 47) > 0 )
  {
    v2 = 0;
    do
    {
      v5 = v2;
      hkpExtendedMeshShape::calcAabbExtents(
        (hkpExtendedMeshShape::Self *)(*((uint32_t *)self + 46) + 112 * v2),
        (hkpExtendedMeshShape::TrianglesSubpart::Self *)v15);
      v2 = v5 + 1;
      v9 = fminf(v9, v15[1] - v1);
      v8 = fminf(v8, v15[2] - v1);
      v13 = fminf(v13, v15[0] - v1);
      v7 = fminf(v7, v15[3] - v1);
      v11 = fmaxf(v11, v15[4] + v1);
      v12 = fmaxf(v12, v15[5] + v1);
      v10 = fmaxf(v10, v15[6] + v1);
      v14 = fmaxf(v14, v15[7] + v1);
    }
    while ( *((uint32_t *)self + 47) > v5 + 1 );
  }
  if ( *((int *)self + 50) > 0 )
  {
    v3 = 0;
    do
    {
      v6 = v3;
      hkpExtendedMeshShape::calcAabbExtents(
        (hkpExtendedMeshShape::Self *)(*((uint32_t *)self + 49) + (v3 << 6)),
        (const hkpExtendedMeshShape::ShapesSubpart::Self *)v15);
      v3 = v6 + 1;
      v13 = fminf(v13, v15[0]);
      v9 = fminf(v9, v15[1]);
      v8 = fminf(v8, v15[2]);
      v7 = fminf(v7, v15[3]);
      v11 = fmaxf(v11, v15[4]);
      v12 = fmaxf(v12, v15[5]);
      v10 = fmaxf(v10, v15[6]);
      v14 = fmaxf(v14, v15[7]);
    }
    while ( *((uint32_t *)self + 50) > v6 + 1 );
  }
  *((float *)self + 40) = (float)(v13 + v11) * 0.5;
  *((float *)self + 41) = (float)(v9 + v12) * 0.5;
  *((float *)self + 42) = (float)(v8 + v10) * 0.5;
  *((float *)self + 43) = (float)(v14 + v7) * 0.5;
  *((float *)self + 36) = (float)(v11 - v13) * 0.5;
  *((float *)self + 37) = (float)(v12 - v9) * 0.5;
  *((float *)self + 38) = (float)(v10 - v8) * 0.5;
  *((float *)self + 39) = (float)(v14 - v7) * 0.5;
  return &g_vectorfConstants;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::Construct  (binary VA: 0x16e6ea0)
// Original: hkpExtendedMeshShape::hkpExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::Construct(hkpExtendedMeshShape::Self *self, const hkpMeshShape::Self *a2)
{
  hkpExtendedMeshShape::Self *v2;
  const hkpMeshShape::Self *v3;
  int v4;
  unsigned int v5;
  int v6;
  unsigned int v7;
  int v8;
  int v9;
  unsigned int v10;
  int v11;
  int v12;
  uint32_t *v13;
  int v14;
  int v15;
  int v16;
  uint32_t *v17;
  uint32_t *v18;
  int v19;
  int v20;
  int v21;
  typedef const hkpMeshShape::Self *_g4_t_v22;
  typedef uint32_t *_g4_t_v23;
  typedef int _g4_t_v24;
  typedef int _g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef unsigned int _g4_t_v28;
  typedef int _g4_t_v29;
  typedef int _g4_t_v30;
  typedef const hkpMeshShape::Self *_g4_t_v31;
  typedef int _g4_t_v32;
  typedef char _g4_t_v33[4];
  typedef uint32_t _g4_t_v34[10];
  enum : size_t {
    _g4_s0 = 144u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (12u + sizeof(_g4_t_v25)) > _g4_s3 ? (12u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v26)) > _g4_s4 ? (12u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (12u + sizeof(_g4_t_v27)) > _g4_s5 ? (12u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v28)) > _g4_s6 ? (16u + sizeof(_g4_t_v28)) : _g4_s6,
    _g4_s8 = (16u + sizeof(_g4_t_v29)) > _g4_s7 ? (16u + sizeof(_g4_t_v29)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v30)) > _g4_s8 ? (20u + sizeof(_g4_t_v30)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v31)) > _g4_s9 ? (20u + sizeof(_g4_t_v31)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v32)) > _g4_s10 ? (20u + sizeof(_g4_t_v32)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v33)) > _g4_s11 ? (24u + sizeof(_g4_t_v33)) : _g4_s11,
    _g4_s13 = (28u + sizeof(_g4_t_v34)) > _g4_s12 ? (28u + sizeof(_g4_t_v34)) : _g4_s12
  };
  alignas(16) uint8_t _g4_sf[_g4_s13];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 12u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 12u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 12u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 16u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 16u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 20u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 20u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 24u);
  _g4_t_v34 &v34 = *reinterpret_cast<_g4_t_v34 *>(_g4_sf + 28u);

  v34[6] = (uint32_t)(uintptr_t)(&self);
  v2 = self;
  v3 = a2;
  hkpShapeCollection::Construct(self, 13, 1);
  *((uint16_t *)v2 + 16) = 10;
  *((uint32_t *)v2 + 4) = ((uint32_t)(uintptr_t)&off_209B604);
  *((uint16_t *)v2 + 19) = 0;
  *(uint32_t *)v2 = ((uint32_t)(uintptr_t)&off_209B588);
  *((uint16_t *)v2 + 18) = 0;
  *((uint32_t *)v2 + 11) = 0;
  *((uint32_t *)v2 + 10) = 0;
  *((uint16_t *)v2 + 17) = 0;
  *((uint32_t *)v2 + 28) = 0;
  *((uint32_t *)v2 + 29) = 0;
  *((uint32_t *)v2 + 30) = 0;
  *((uint32_t *)v2 + 31) = 1065353216;
  *((uint32_t *)v2 + 32) = 1065353216;
  *((uint32_t *)v2 + 33) = 1065353216;
  *((uint32_t *)v2 + 12) = 0;
  *((uint8_t *)v2 + 79) = 0;
  *((uint32_t *)v2 + 20) = 0;
  *((uint32_t *)v2 + 21) = 0;
  *((uint32_t *)v2 + 22) = 0;
  *((uint32_t *)v2 + 23) = 0;
  *((uint32_t *)v2 + 24) = 0;
  *((uint32_t *)v2 + 25) = 0;
  *((uint32_t *)v2 + 26) = 0;
  *((uint32_t *)v2 + 27) = 0;
  *((uint32_t *)v2 + 34) = 1065353216;
  *((uint32_t *)v2 + 35) = 1065353216;
  *((uint32_t *)v2 + 46) = 0;
  *((uint32_t *)v2 + 47) = 0;
  *((uint32_t *)v2 + 48) = 0x80000000;
  *((uint32_t *)v2 + 49) = 0;
  *((uint32_t *)v2 + 50) = 0;
  *((uint32_t *)v2 + 51) = 0x80000000;
  *((uint32_t *)v2 + 52) = 0;
  *((uint32_t *)v2 + 53) = 0;
  *((uint32_t *)v2 + 54) = 0x80000000;
  *((uint32_t *)v2 + 58) = *((uint32_t *)v3 + 20);
  *((uint32_t *)v2 + 45) = *((uint32_t *)v3 + 12);
  *((uint8_t *)v2 + 220) = *((uint8_t *)v3 + 76);
  v4 = *((uint32_t *)v3 + 17);
  if ( v4 > 0 )
  {
    v34[0] = 2 * v4;
    v5 = (*(int (**)(uint32_t *, uint32_t *))(hkContainerHeapAllocator::s_alloc + 16))(
           (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
           v34);
    v6 = v34[0];
    v7 = v34[0];
    *((uint32_t *)v2 + 52) = v5;
    *((uint32_t *)v2 + 54) = (int)((v7 >> 31) + v6) >> 1;
    v8 = *((uint32_t *)v3 + 17);
    *((uint32_t *)v2 + 53) = v8;
    v30 = v8;
    v28 = *((uint32_t *)v3 + 16);
    if ( v8 > 0 )
    {
      if ( (v5 >= v28 + 16 || v28 >= v5 + 16) && (unsigned int)v8 > 0xA )
      {
        v22 = v3;
        v9 = 0;
        v25 = 8 * ((unsigned int)v8 >> 3);
        v10 = 0;
        do
        {
          ++v10;
          *(__m128i *)(v5 + v9) = *(__m128i *)(v28 + v9);
          v9 += 16;
        }
        while ( (unsigned int)v8 >> 3 > v10 );
        v3 = v22;
        if ( v8 != v25 )
        {
          *(uint16_t *)(v5 + 16 * ((unsigned int)v8 >> 3)) = *(uint16_t *)(v28 + 16 * ((unsigned int)v8 >> 3));
          if ( v8 > v25 + 1 )
          {
            *(uint16_t *)(v5 + 2 * (v25 + 1)) = *(uint16_t *)(v28 + 2 * (v25 + 1));
            if ( v8 > v25 + 2 )
            {
              *(uint16_t *)(v5 + 2 * (v25 + 2)) = *(uint16_t *)(v28 + 2 * (v25 + 2));
              if ( v8 > v25 + 3 )
              {
                *(uint16_t *)(v5 + 2 * (v25 + 3)) = *(uint16_t *)(v28 + 2 * (v25 + 3));
                if ( v8 > v25 + 4 )
                {
                  *(uint16_t *)(v5 + 2 * (v25 + 4)) = *(uint16_t *)(v28 + 2 * (v25 + 4));
                  if ( v8 > v25 + 5 )
                  {
                    *(uint16_t *)(v5 + 2 * (v25 + 5)) = *(uint16_t *)(v28 + 2 * (v25 + 5));
                    if ( v8 > v25 + 6 )
                      *(uint16_t *)(v5 + 2 * (v25 + 6)) = *(uint16_t *)(v28 + 2 * (v25 + 6));
                  }
                }
              }
            }
          }
        }
      }
      else
      {
        v20 = *((uint32_t *)v3 + 16);
        v21 = 0;
        do
        {
          *(uint16_t *)(v5 + 2 * v21) = *(uint16_t *)(v20 + 2 * v21);
          ++v21;
        }
        while ( v21 != v30 );
      }
    }
    v11 = *((uint32_t *)v3 + 14);
    if ( v11 != 1 )
      goto LABEL_16;
LABEL_23:
    *((uint32_t *)v2 + 47) = 1;
    *((uint32_t *)v2 + 46) = (uint32_t)(uintptr_t)((char *)v2 + 32);
    *((uint32_t *)v2 + 48) = -2147483647;
    goto LABEL_18;
  }
  *((uint32_t *)v2 + 53) = v4;
  v11 = *((uint32_t *)v3 + 14);
  if ( v11 == 1 )
    goto LABEL_23;
LABEL_16:
  v12 = *((uint32_t *)v2 + 48) & 0x3FFFFFFF;
  if ( v11 > v12 )
  {
    v19 = 2 * v12;
    v32 = v11;
    if ( v19 < v11 )
      v19 = v11;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v33,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v2 + 46,
      v19,
      112);
    v11 = v32;
  }
  *((uint32_t *)v2 + 47) = v11;
LABEL_18:
  *((uint32_t *)v2 + 56) = 0;
  if ( *((int *)v3 + 14) > 0 )
  {
    v29 = 0;
    v24 = 0;
    v13 = &hkQsTransformf_identityStorage;
    v31 = v3;
    do
    {
      v23 = v13;
      v14 = 2 * v29;
      *(uint32_t *)(*((uint32_t *)v2 + 46) + v14 + 20) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 28);
      *(uint32_t *)(*((uint32_t *)v2 + 46) + v14 + 8) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 32);
      v26 = 2 * v29;
      *(uint16_t *)(*((uint32_t *)v2 + 46) + v26 + 6) = *(uint8_t *)(*((uint32_t *)v31 + 13) + v29 + 36);
      *(uint16_t *)(*((uint32_t *)v2 + 46) + v26) = (2 * *(uint8_t *)(*((uint32_t *)v31 + 13) + v29 + 17)) & 6
                                             | *(uint16_t *)(*((uint32_t *)v2 + 46) + v26) & 0xFFF9;
      *(uint32_t *)(*((uint32_t *)v2 + 46) + v26 + 12) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 40);
      v27 = 2 * v29;
      *(uint16_t *)(*((uint32_t *)v2 + 46) + v27 + 4) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 44);
      *(uint16_t *)(*((uint32_t *)v2 + 46) + v27) = (8 * *(uint16_t *)(*((uint32_t *)v31 + 13) + v29 + 48))
                                             | *(uint16_t *)(*((uint32_t *)v2 + 46) + v27) & 7;
      v15 = 2 * v29;
      *(uint32_t *)(*((uint32_t *)v2 + 46) + v27 + 24) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29);
      *(uint16_t *)(*((uint32_t *)v2 + 46) + v15 + 36) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 4);
      *(uint32_t *)(*((uint32_t *)v2 + 46) + v15 + 28) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 8);
      *(uint32_t *)(*((uint32_t *)v2 + 46) + v15 + 32) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 12);
      *(uint8_t *)(*((uint32_t *)v2 + 46) + v15 + 46) = *(uint8_t *)(*((uint32_t *)v31 + 13) + v29 + 16);
      v16 = 2 * v29;
      *(uint16_t *)(*((uint32_t *)v2 + 46) + v15 + 44) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 20);
      *(uint32_t *)(*((uint32_t *)v2 + 46) + v16 + 40) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 52);
      v17 = (uint32_t *)(*((uint32_t *)v2 + 46) + 2 * v29);
      v17[12] = 0;
      v17[13] = 0;
      v17[14] = 0;
      v17[15] = 0;
      *(uint8_t *)(*((uint32_t *)v2 + 46) + v16 + 47) = *(uint32_t *)(*((uint32_t *)v31 + 13) + v29 + 24);
      v18 = (uint32_t *)(2 * v29 + *((uint32_t *)v2 + 46));
      v13 = v23;
      v18[16] = *v23;
      v18[17] = v23[1];
      v18[18] = v23[2];
      v18[19] = v23[3];
      v18[20] = v23[4];
      v18[21] = v23[5];
      v18[22] = v23[6];
      v18[23] = v23[7];
      v18[24] = v23[8];
      v18[25] = v23[9];
      v18[26] = v23[10];
      v18[27] = v23[11];
      ++v24;
      v29 += 56;
    }
    while ( v24 < *((uint32_t *)v31 + 14) );
  }
  hkpExtendedMeshShape::recalcAabbExtents(v2);
  *((uint32_t *)v2 + 57) = hkpShapeContainer::getNumChildShapes((hkpExtendedMeshShape::Self *)((char *)v2 + 16));
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::assertTrianglesSubpartValidity  (binary VA: 0x16e74d0)
// Original: hkpExtendedMeshShape::assertTrianglesSubpartValidity
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::assertTrianglesSubpartValidity()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::assertShapesSubpartValidity  (binary VA: 0x16e74e0)
// Original: hkpExtendedMeshShape::assertShapesSubpartValidity
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::assertShapesSubpartValidity()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::ShapesSubpart::Construct  (binary VA: 0x16e74f0)
// Original: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::ShapesSubpart::Construct(float *a1, int a2)
{
  int result;
  float *v3;
  float v4; // xmm1_4
  int v5;
  bool v6;
  float v7[7];

  LODWORD(v7[3]) = (uint32_t)(uintptr_t)(&a1);
  result = a2;
  v3 = a1;
  if ( a2 != 0 )
  {
    v4 = fabs(a1[14]);
    LOBYTE(v5) = v4 <= 0.001f ? 4 : 0;
    if ( fabs(a1[15]) <= 0.001f )
      v5 = v4 > 0.001f ? 8 : 12;
    v6 = (v5 & 7 | (fabs(a1[12]) <= 0.001f) | (fabs(a1[13]) <= 0.001f ? 2 : 0)) != 7;
    hkQuaternionf::getAngleSr((hkQuaternionf::Self *)v7, (int)(uintptr_t)(a1 + 8));
    result = (2 * (v7[0] >= 0.001f)) | v6 | 0x3F000000;
    *((uint32_t *)v3 + 15) = result;
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::Construct  (binary VA: 0x16e75d0)
// Original: hkpExtendedMeshShape::hkpExtendedMeshShape
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::Construct(__m128i *a1, int a2)
{
  int result;
  int v3;
  int v4;
  int v5;
  uint16_t *v6;
  int32_t v7;
  uint16_t *v8;
  __m128i *v9;
  bool v10;
  int32_t v11;
  int32_t v12;
  int32_t v13;
  int32_t v14;
  int32_t v15;
  int32_t v16;
  int32_t v17;
  int32_t v18;
  int32_t v19;
  int32_t v20;
  int32_t v21;
  int32_t v22;
  int32_t v23;
  int32_t v24;
  int v25;

  hkpShapeCollection::Construct((int)(uintptr_t)(a1), a2);
g4_m128_lane<int32_t>(a1[1], 0) = (int32_t)((uint32_t)(uintptr_t)&off_209B604);
  result = a2;
g4_m128_lane<int32_t>(*(a1), 0) = (int32_t)((uint32_t)(uintptr_t)&off_209B588);
  if ( a2 == 0 )
    goto LABEL_15;
  v3 =g4_m128_lane<int32_t>(a1[11], 3);
g4_m128_lane<int8_t>(a1[1], 5) = 1;
  v25 = v3;
  if ( v3 > 0 )
  {
    v4 = 0;
    v5 = 0;
    do
    {
      v6 = (uint16_t *)(g4_m128_lane<int32_t>(a1[11], 2) + v4);
      if ( (*v6 & 6) == 0 )
      {
        *v6 = *v6 & 0xFFF9 | 2;
        v25 =g4_m128_lane<int32_t>(a1[11], 3);
      }
      ++v5;
      v4 += 112;
    }
    while ( v5 < v25 );
  }
  result =g4_m128_lane<int32_t>(a1[12], 2);
  if ( result > 0 )
  {
    v7 = 0;
    do
    {
      hkpExtendedMeshShape::ShapesSubpart::Construct((float *)(g4_m128_lane<int32_t>(a1[12], 1) + (v7 << 6)), a2);
      v8 = (uint16_t *)(g4_m128_lane<int32_t>(a1[12], 1) + (v7 << 6));
      if ( (*v8 & 6) == 0 )
        *v8 = *v8 & 0xFFF9 | 2;
      ++v7;
    }
    while (g4_m128_lane<int32_t>(a1[12], 2) > v7 );
    result =g4_m128_lane<int32_t>(a1[11], 3);
    v25 = result;
  }
  if ( v25 == 1 )
  {
    v9 = (__m128i *)g4_m128_lane<int32_t>(a1[11], 2);
    if ( &v9[1] <= &a1[2] || v9 >= &a1[3] )
    {
      a1[2] = *v9;
      a1[3] = v9[1];
      a1[4] = v9[2];
      a1[5] = v9[3];
      a1[6] = v9[4];
      a1[7] = v9[5];
      a1[8] = v9[6];
    }
    else
    {
      v11 =g4_m128_lane<int32_t>(*(v9), 0);
g4_m128_lane<int32_t>(a1[2], 1) =g4_m128_lane<int32_t>(*(v9), 1);
g4_m128_lane<int32_t>(a1[2], 0) = v11;
      v12 =g4_m128_lane<int32_t>(*(v9), 2);
g4_m128_lane<int32_t>(a1[2], 3) =g4_m128_lane<int32_t>(*(v9), 3);
g4_m128_lane<int32_t>(a1[2], 2) = v12;
      v13 =g4_m128_lane<int32_t>(v9[1], 0);
g4_m128_lane<int32_t>(a1[3], 1) =g4_m128_lane<int32_t>(v9[1], 1);
g4_m128_lane<int32_t>(a1[3], 0) = v13;
      v14 =g4_m128_lane<int32_t>(v9[1], 2);
g4_m128_lane<int32_t>(a1[3], 3) =g4_m128_lane<int32_t>(v9[1], 3);
g4_m128_lane<int32_t>(a1[3], 2) = v14;
      v15 =g4_m128_lane<int32_t>(v9[2], 0);
g4_m128_lane<int32_t>(a1[4], 1) =g4_m128_lane<int32_t>(v9[2], 1);
g4_m128_lane<int32_t>(a1[4], 0) = v15;
      v16 =g4_m128_lane<int32_t>(v9[2], 2);
g4_m128_lane<int32_t>(a1[4], 3) =g4_m128_lane<int32_t>(v9[2], 3);
g4_m128_lane<int32_t>(a1[4], 2) = v16;
      v17 =g4_m128_lane<int32_t>(v9[3], 0);
g4_m128_lane<int32_t>(a1[5], 1) =g4_m128_lane<int32_t>(v9[3], 1);
g4_m128_lane<int32_t>(a1[5], 0) = v17;
      v18 =g4_m128_lane<int32_t>(v9[3], 2);
g4_m128_lane<int32_t>(a1[5], 3) =g4_m128_lane<int32_t>(v9[3], 3);
g4_m128_lane<int32_t>(a1[5], 2) = v18;
      v19 =g4_m128_lane<int32_t>(v9[4], 1);
g4_m128_lane<int32_t>(a1[6], 0) =g4_m128_lane<int32_t>(v9[4], 0);
g4_m128_lane<int32_t>(a1[6], 1) = v19;
      v20 =g4_m128_lane<int32_t>(v9[4], 2);
g4_m128_lane<int32_t>(a1[6], 3) =g4_m128_lane<int32_t>(v9[4], 3);
g4_m128_lane<int32_t>(a1[6], 2) = v20;
      v21 =g4_m128_lane<int32_t>(v9[5], 0);
g4_m128_lane<int32_t>(a1[7], 1) =g4_m128_lane<int32_t>(v9[5], 1);
g4_m128_lane<int32_t>(a1[7], 0) = v21;
      v22 =g4_m128_lane<int32_t>(v9[5], 2);
g4_m128_lane<int32_t>(a1[7], 3) =g4_m128_lane<int32_t>(v9[5], 3);
g4_m128_lane<int32_t>(a1[7], 2) = v22;
      v23 =g4_m128_lane<int32_t>(v9[6], 0);
g4_m128_lane<int32_t>(a1[8], 1) =g4_m128_lane<int32_t>(v9[6], 1);
g4_m128_lane<int32_t>(a1[8], 0) = v23;
      v24 =g4_m128_lane<int32_t>(v9[6], 2);
g4_m128_lane<int32_t>(a1[8], 3) =g4_m128_lane<int32_t>(v9[6], 3);
g4_m128_lane<int32_t>(a1[8], 2) = v24;
    }
    result =g4_m128_lane<int32_t>(a1[12], 0);
g4_m128_lane<int32_t>(a1[11], 3) = 0;
    if ( result >= 0 )
      result = (*(int (**)(uint32_t *, int32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
                 (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
g4_m128_lane<int32_t>(a1[11], 2),
                 112 * (result & 0x3FFFFFFF));
    v10 =g4_m128_lane<int32_t>(a1[14], 1) == -1;
g4_m128_lane<int32_t>(a1[11], 2) = (int32_t)(uintptr_t)(g4_m128_ptr<int32_t>(a1[2]));
g4_m128_lane<int32_t>(a1[11], 3) = 1;
g4_m128_lane<int32_t>(a1[12], 0) = -2147483647;
    if ( !v10 )
      goto LABEL_15;
  }
  else if (g4_m128_lane<int32_t>(a1[14], 1) != -1 )
  {
LABEL_15:
g4_m128_lane<int8_t>(*(a1), 8) = 13;
    return result;
  }
g4_m128_lane<int32_t>(a1[14], 1) = 0x80000000;
g4_m128_lane<int8_t>(*(a1), 8) = 13;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::ShapesSubpart::Construct  (binary VA: 0x16e7890)
// Original: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart
// ----------------------------------------------------------------------------
hkpExtendedMeshShape::ShapesSubpart::Self * hkpExtendedMeshShape::ShapesSubpart::Construct(hkpExtendedMeshShape::ShapesSubpart::Self *self, const hkpConvexShape::Self *const *a2, int a3, const hkVector4f::Self *a4)
{
  const hkVector4f::Self *v4;
  int v5;
  hkpExtendedMeshShape::ShapesSubpart::Self *v6;
  int v7;
  hkpExtendedMeshShape::ShapesSubpart::Self *v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int32_t v13; // kr00_4
  int32_t v14;
  int32_t v15; // ett
  const hkpConvexShape::Self *v16;
  int v17;
  int32_t v18; // kr04_4
  float v19; // xmm1_4
  int v20;
  hkpExtendedMeshShape::ShapesSubpart::Self *result;
  typedef float *_g4_t_v22;
  typedef hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v23;
  typedef const hkpConvexShape::Self *_g4_t_v24;
  typedef const hkpConvexShape::Self *const *_g4_t_v25;
  typedef int _g4_t_v26;
  typedef int _g4_t_v27;
  typedef uint32_t _g4_t_v28[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v22)) > _g4_s0 ? (0u + sizeof(_g4_t_v22)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v23)) > _g4_s1 ? (4u + sizeof(_g4_t_v23)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v24)) > _g4_s2 ? (8u + sizeof(_g4_t_v24)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v25)) > _g4_s3 ? (16u + sizeof(_g4_t_v25)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v26)) > _g4_s4 ? (20u + sizeof(_g4_t_v26)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v27)) > _g4_s5 ? (24u + sizeof(_g4_t_v27)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v28)) > _g4_s6 ? (28u + sizeof(_g4_t_v28)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 0u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 4u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 8u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 16u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 20u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 24u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 28u);

  v28[3] = (uint32_t)(uintptr_t)(&self);
  v4 = a4;
  v25 = a2;
  v5 = a3;
  v6 = self;
  v23 = self;
  *(uint16_t *)self = 11;
  *((uint16_t *)v6 + 3) = 0;
  *((uint16_t *)v6 + 2) = 0;
  *((uint32_t *)v6 + 3) = 0;
  *((uint32_t *)v6 + 2) = 0;
  *((uint16_t *)v6 + 1) = 0;
  *((uint32_t *)v6 + 4) = 0;
  *((uint32_t *)v6 + 5) = 0;
  *((uint32_t *)v6 + 6) = 0;
  *((uint32_t *)v6 + 7) = 0x80000000;
  *((uint32_t *)v6 + 12) = *(uint32_t *)v4;
  *((uint32_t *)v6 + 13) = *((uint32_t *)v4 + 1);
  *((uint32_t *)v6 + 14) = *((uint32_t *)v4 + 2);
  v26 = v5;
  v22 = (float *)v4;
  *((uint32_t *)v6 + 15) = *((uint32_t *)v4 + 3);
  if ( v5 <= 0 )
  {
    *((uint32_t *)v23 + 6) = v5;
  }
  else
  {
    v7 = v5;
    v8 = v6;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v28,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v6 + 5,
      v5,
      4);
    memset((void *)(*((uint32_t *)v8 + 5) + 4 * *((uint32_t *)v8 + 6)), 0, 4 * v7);
    v9 = *((uint32_t *)v8 + 5);
    *((uint32_t *)v8 + 6) += v7;
    v27 = v9;
    v10 = 0;
    do
    {
      v16 = v25[v10];
      if ( v16 != nullptr && *((uint16_t *)v16 + 3) != 0 )
      {
        do
        {
          v18 = *((uint32_t *)v16 + 1);
          HIWORD(v17) = HIWORD(v18);
          LOWORD(v17) = 0;
        }
        while ( v18 != __sync_val_compare_and_swap(
                         (volatile int32_t *)v16 + 1,
                         v18,
                         v17 | (uint16_t)(v18 + 1)) );
      }
      v11 = *(uint32_t *)(v27 + 4 * v10);
      if ( v11 != 0 && *(uint16_t *)(v11 + 6) != 0 )
      {
        v24 = v16;
        do
        {
          v13 = *(uint32_t *)(v11 + 4);
          HIWORD(v12) = HIWORD(v13);
          LOWORD(v12) = 0;
          v14 = v12 | (uint16_t)(v13 - 1);
          v15 = v13;
        }
        while ( v15 != __sync_val_compare_and_swap((volatile int32_t *)(v11 + 4), v15, v14) );
        v16 = v24;
        if ( (uint16_t)v14 == 0 )
          G4_VCALL<void>(v11, 16);
      }
      *(uint32_t *)(v27 + 4 * v10++) = (uint32_t)(uintptr_t)(v16);
    }
    while ( v10 != v26 );
  }
  *((uint32_t *)v23 + 8) = 0;
  *((uint32_t *)v23 + 9) = 0;
  *((uint32_t *)v23 + 10) = 0;
  *((uint32_t *)v23 + 11) = 1065353216;
  v19 = fabs(v22[2]);
  LOBYTE(v20) = v19 <= 0.001f ? 4 : 0;
  if ( fabs(v22[3]) <= 0.001f )
    v20 = v19 > 0.001f ? 8 : 12;
  result = (hkpExtendedMeshShape::ShapesSubpart::Self *)(((v20 & 7 | (fabs(*v22) <= 0.001f) | (fabs(v22[1]) <= 0.001f ? 2 : 0)) != 7)
                                                 | 0x3F000000);
  *((uint32_t *)v23 + 15) = (uint32_t)(uintptr_t)(result);
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::ShapesSubpart::Construct  (binary VA: 0x16e7ae0)
// Original: hkpExtendedMeshShape::ShapesSubpart::ShapesSubpart
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::ShapesSubpart::Construct(hkpExtendedMeshShape::ShapesSubpart::Self *self, const hkpConvexShape::Self *const *a2, int a3, const hkTransformf::Self *a4)
{
  const hkTransformf::Self *v4;
  hkpExtendedMeshShape::ShapesSubpart::Self *v5;
  int v6;
  hkpExtendedMeshShape::ShapesSubpart::Self *v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int v12;
  int v13;
  int v14;
  int v15;
  int v16;
  int32_t v17; // kr00_4
  int32_t v18;
  int32_t v19; // ett
  const hkpConvexShape::Self *v20;
  int v21;
  int32_t v22; // kr04_4
  float v23; // xmm1_4
  int v24;
  bool v25;
  int result;
  typedef hkMatrix3f::Self *_g4_t_v27;
  typedef hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v28;
  typedef const hkpConvexShape::Self *_g4_t_v29;
  typedef const hkpConvexShape::Self *const *_g4_t_v30;
  typedef int _g4_t_v31;
  typedef int _g4_t_v32;
  typedef uint32_t _g4_t_v33[7];
  enum : size_t {
    _g4_s0 = 128u,
    _g4_s1 = (0u + sizeof(_g4_t_v27)) > _g4_s0 ? (0u + sizeof(_g4_t_v27)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v28)) > _g4_s1 ? (4u + sizeof(_g4_t_v28)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v29)) > _g4_s2 ? (8u + sizeof(_g4_t_v29)) : _g4_s2,
    _g4_s4 = (16u + sizeof(_g4_t_v30)) > _g4_s3 ? (16u + sizeof(_g4_t_v30)) : _g4_s3,
    _g4_s5 = (20u + sizeof(_g4_t_v31)) > _g4_s4 ? (20u + sizeof(_g4_t_v31)) : _g4_s4,
    _g4_s6 = (24u + sizeof(_g4_t_v32)) > _g4_s5 ? (24u + sizeof(_g4_t_v32)) : _g4_s5,
    _g4_s7 = (28u + sizeof(_g4_t_v33)) > _g4_s6 ? (28u + sizeof(_g4_t_v33)) : _g4_s6
  };
  alignas(16) uint8_t _g4_sf[_g4_s7];
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 0u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 4u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 8u);
  _g4_t_v30 &v30 = *reinterpret_cast<_g4_t_v30 *>(_g4_sf + 16u);
  _g4_t_v31 &v31 = *reinterpret_cast<_g4_t_v31 *>(_g4_sf + 20u);
  _g4_t_v32 &v32 = *reinterpret_cast<_g4_t_v32 *>(_g4_sf + 24u);
  _g4_t_v33 &v33 = *reinterpret_cast<_g4_t_v33 *>(_g4_sf + 28u);

  v33[3] = (uint32_t)(uintptr_t)(&self);
  v4 = a4;
  v5 = self;
  v28 = self;
  v30 = a2;
  v6 = a3;
  *(uint16_t *)self = 11;
  *((uint16_t *)v5 + 3) = 0;
  *((uint16_t *)v5 + 2) = 0;
  *((uint32_t *)v5 + 3) = 0;
  *((uint32_t *)v5 + 2) = 0;
  *((uint16_t *)v5 + 1) = 0;
  *((uint32_t *)v5 + 4) = 0;
  *((uint32_t *)v5 + 5) = 0;
  *((uint32_t *)v5 + 6) = 0;
  *((uint32_t *)v5 + 7) = 0x80000000;
  v31 = v6;
  *((uint32_t *)v5 + 12) = *((uint32_t *)v4 + 12);
  *((uint32_t *)v5 + 13) = *((uint32_t *)v4 + 13);
  *((uint32_t *)v5 + 14) = *((uint32_t *)v4 + 14);
  v27 = (hkMatrix3f::Self *)(v4);
  *((uint32_t *)v5 + 15) = *((uint32_t *)v4 + 15);
  hkQuaternionf::set((hkpExtendedMeshShape::ShapesSubpart::Self *)((char *)v5 + 32), v4);
  v7 = v5;
  v8 = *((uint32_t *)v5 + 6);
  v9 = *((uint32_t *)v7 + 7);
  v10 = v8;
  v11 = v9 & 0x3FFFFFFF;
  if ( v8 + v31 > v11 )
  {
    v12 = 2 * v11;
    if ( v12 < v8 + v31 )
      v12 = v8 + v31;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v33,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v28 + 5,
      v12,
      4);
    v10 = *((uint32_t *)v28 + 6);
  }
  if ( v31 <= 0 )
  {
    *((uint32_t *)v28 + 6) = v31 + v10;
  }
  else
  {
    memset((void *)(*((uint32_t *)v28 + 5) + 4 * v10), 0, 4 * v31);
    v13 = *((uint32_t *)v28 + 5);
    *((uint32_t *)v28 + 6) += v31;
    v14 = 0;
    v32 = v13 + 4 * v8;
    do
    {
      v20 = v30[v14];
      if ( v20 != nullptr && *((uint16_t *)v20 + 3) != 0 )
      {
        do
        {
          v22 = *((uint32_t *)v20 + 1);
          HIWORD(v21) = HIWORD(v22);
          LOWORD(v21) = 0;
        }
        while ( v22 != __sync_val_compare_and_swap(
                         (volatile int32_t *)v20 + 1,
                         v22,
                         v21 | (uint16_t)(v22 + 1)) );
      }
      v15 = *(uint32_t *)(v32 + 4 * v14);
      if ( v15 != 0 && *(uint16_t *)(v15 + 6) != 0 )
      {
        v29 = v20;
        do
        {
          v17 = *(uint32_t *)(v15 + 4);
          HIWORD(v16) = HIWORD(v17);
          LOWORD(v16) = 0;
          v18 = v16 | (uint16_t)(v17 - 1);
          v19 = v17;
        }
        while ( v19 != __sync_val_compare_and_swap((volatile int32_t *)(v15 + 4), v19, v18) );
        v20 = v29;
        if ( (uint16_t)v18 == 0 )
          G4_VCALL<void>(v15, 16);
      }
      *(uint32_t *)(v32 + 4 * v14++) = (uint32_t)(uintptr_t)(v20);
    }
    while ( v14 != v31 );
  }
  v23 = fabs(*((float *)v28 + 14));
  LOBYTE(v24) = v23 <= 0.001f ? 4 : 0;
  if ( fabs(*((float *)v28 + 15)) <= 0.001f )
    v24 = v23 > 0.001f ? 8 : 12;
  v25 = (v24 & 7 | (fabs(*((float *)v28 + 12)) <= 0.001f) | (fabs(*((float *)v28 + 13)) <= 0.001f ? 2 : 0)) != 7;
  result = !hkMatrix3f::isApproximatelyEqual(v27, (const hkMatrix3f::Self *)&unk_1D12FD0, 0.001f) ? 2 : 0;
  *((uint32_t *)v28 + 15) = result | v25 | 0x3F000000;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::ShapesSubpart::Destroy  (binary VA: 0x16e7d60)
// Original: hkpExtendedMeshShape::ShapesSubpart::~ShapesSubpart
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::ShapesSubpart::Destroy(hkpExtendedMeshShape::ShapesSubpart::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int32_t v5; // kr00_4
  int32_t v6;
  int32_t v7; // ett
  int v8;
  int v9;

  v1 = *((uint32_t *)self + 5);
  v2 = *((uint32_t *)self + 6) - 1;
  if ( v2 >= 0 )
  {
    do
    {
      v3 = *(uint32_t *)(v1 + 4 * v2);
      if ( v3 != 0 && *(uint16_t *)(v3 + 6) != 0 )
      {
        v9 = v2;
        do
        {
          v5 = *(uint32_t *)(v3 + 4);
          HIWORD(v4) = HIWORD(v5);
          LOWORD(v4) = 0;
          v6 = v4 | (uint16_t)(v5 - 1);
          v7 = v5;
        }
        while ( v7 != __sync_val_compare_and_swap((volatile int32_t *)(v3 + 4), v7, v6) );
        v2 = v9;
        if ( (uint16_t)v6 == 0 )
          G4_VCALL<void>(v3, 16);
      }
      *(uint32_t *)(v1 + 4 * v2--) = 0;
    }
    while ( v2 != -1 );
  }
  *((uint32_t *)self + 6) = 0;
  v8 = *((uint32_t *)self + 7);
  if ( v8 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 5),
      4 * v8);
  *((uint32_t *)self + 5) = 0;
  *((uint32_t *)self + 7) = 0x80000000;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::Destroy  (binary VA: 0x16e7e30)
// Original: hkpExtendedMeshShape::~hkpExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::Destroy(hkpExtendedMeshShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  hkpExtendedMeshShape::ShapesSubpart::Self *v4;
  int v5;
  int v6;

  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_209B604);
  v1 = *((uint32_t *)self + 54);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209B588);
  *((uint32_t *)self + 53) = 0;
  if ( v1 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 52),
      2 * (v1 & 0x3FFFFFFF));
  v2 = *((uint32_t *)self + 50);
  *((uint32_t *)self + 52) = 0;
  *((uint32_t *)self + 54) = 0x80000000;
  v3 = v2 - 1;
  v4 = (hkpExtendedMeshShape::ShapesSubpart::Self *)(*((uint32_t *)self + 49) + ((v2 - 1) << 6));
  if ( v2 - 1 >= 0 )
  {
    do
    {
      --v3;
      hkpExtendedMeshShape::ShapesSubpart::Destroy(v4);
      v4 = (hkpExtendedMeshShape::ShapesSubpart::Self *)((char *)v4 - 64);
    }
    while ( v3 != -1 );
  }
  v5 = *((uint32_t *)self + 51);
  *((uint32_t *)self + 50) = 0;
  if ( v5 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 49),
      v5 << 6);
  v6 = *((uint32_t *)self + 48);
  *((uint32_t *)self + 49) = 0;
  *((uint32_t *)self + 51) = 0x80000000;
  *((uint32_t *)self + 47) = 0;
  if ( v6 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)self + 46),
      112 * (v6 & 0x3FFFFFFF));
  *((uint32_t *)self + 46) = 0;
  *((uint32_t *)self + 48) = 0x80000000;
  *((uint32_t *)self + 4) = ((uint32_t)(uintptr_t)&off_20994A8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_2054CB8);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::Destroy_ea16e7fb0  (binary VA: 0x16e7fb0)
// Original: hkpExtendedMeshShape::~hkpExtendedMeshShape
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::Destroy_ea16e7fb0(hkpExtendedMeshShape::Self *self)
{
  int v1;
  int v2;

  hkpExtendedMeshShape::Destroy(self);
  v1 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v2 = 240;
  if ( *((uint16_t *)self + 3) != 0xFFFF )
    v2 = *((uint16_t *)self + 3);
  G4_VCALL<void>(v1, 12, self, v2);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::expandOneTriangleSubparts  (binary VA: 0x16e8020)
// Original: hkpExtendedMeshShape::expandOneTriangleSubparts
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::expandOneTriangleSubparts(hkpExtendedMeshShape::Self *self)
{
  hkpExtendedMeshShape::Self *v1;
  int v2;
  int v4;
  int v5;
  int v6;
  uint32_t v7[7];

  v7[3] = (uint32_t)(uintptr_t)(&self);
  v1 = self;
  v2 = *((uint32_t *)self + 47);
  if ( v2 != 0 )
  {
    v4 = v2 + 1;
    v5 = *((uint32_t *)self + 48) & 0x3FFFFFFF;
    if ( v2 + 1 > v5 )
    {
      v6 = 2 * v5;
      if ( v6 < v4 )
        v6 = v2 + 1;
      hkArrayUtil::reserve(
        (hkArrayUtil::Self *)v7,
        (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
        (int *)self + 46,
        v6,
        112);
      v4 = *((uint32_t *)v1 + 47) + 1;
    }
    *((uint32_t *)v1 + 47) = v4;
    return *((uint32_t *)v1 + 46) + 112 * v2;
  }
  else
  {
    *((uint32_t *)self + 47) = 1;
    *((uint32_t *)v1 + 48) = -2147483647;
    *((uint32_t *)v1 + 46) = (uint32_t)(uintptr_t)((char *)v1 + 32);
    return (int)(uintptr_t)(v1) + 32;
  }
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::addTrianglesSubpart  (binary VA: 0x16e80f0)
// Original: hkpExtendedMeshShape::addTrianglesSubpart
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::addTrianglesSubpart(hkpExtendedMeshShape::Self *self, const hkpExtendedMeshShape::TrianglesSubpart::Self *a2)
{
  int v2;
  float v3; // xmm6_4
  float v4; // xmm4_4
  float v5; // xmm3_4
  float v6; // xmm0_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm3_4
  float v10; // xmm6_4
  float v11; // xmm4_4
  float v12; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm5_4
  float v15; // xmm3_4
  float v16; // xmm1_4
  int result;
  typedef float _g4_t_v18;
  typedef float _g4_t_v19;
  typedef float _g4_t_v20;
  typedef float _g4_t_v21;
  typedef float _g4_t_v22;
  typedef float _g4_t_v23;
  typedef float _g4_t_v24;
  typedef float _g4_t_v25;
  typedef float _g4_t_v26;
  typedef float _g4_t_v27;
  typedef float _g4_t_v28;
  typedef float _g4_t_v29[11];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (8u + sizeof(_g4_t_v18)) > _g4_s0 ? (8u + sizeof(_g4_t_v18)) : _g4_s0,
    _g4_s2 = (12u + sizeof(_g4_t_v19)) > _g4_s1 ? (12u + sizeof(_g4_t_v19)) : _g4_s1,
    _g4_s3 = (16u + sizeof(_g4_t_v20)) > _g4_s2 ? (16u + sizeof(_g4_t_v20)) : _g4_s2,
    _g4_s4 = (20u + sizeof(_g4_t_v21)) > _g4_s3 ? (20u + sizeof(_g4_t_v21)) : _g4_s3,
    _g4_s5 = (24u + sizeof(_g4_t_v22)) > _g4_s4 ? (24u + sizeof(_g4_t_v22)) : _g4_s4,
    _g4_s6 = (28u + sizeof(_g4_t_v23)) > _g4_s5 ? (28u + sizeof(_g4_t_v23)) : _g4_s5,
    _g4_s7 = (32u + sizeof(_g4_t_v24)) > _g4_s6 ? (32u + sizeof(_g4_t_v24)) : _g4_s6,
    _g4_s8 = (36u + sizeof(_g4_t_v25)) > _g4_s7 ? (36u + sizeof(_g4_t_v25)) : _g4_s7,
    _g4_s9 = (40u + sizeof(_g4_t_v26)) > _g4_s8 ? (40u + sizeof(_g4_t_v26)) : _g4_s8,
    _g4_s10 = (44u + sizeof(_g4_t_v27)) > _g4_s9 ? (44u + sizeof(_g4_t_v27)) : _g4_s9,
    _g4_s11 = (44u + sizeof(_g4_t_v28)) > _g4_s10 ? (44u + sizeof(_g4_t_v28)) : _g4_s10,
    _g4_s12 = (48u + sizeof(_g4_t_v29)) > _g4_s11 ? (48u + sizeof(_g4_t_v29)) : _g4_s11
  };
  alignas(16) uint8_t _g4_sf[_g4_s12];
  _g4_t_v18 &v18 = *reinterpret_cast<_g4_t_v18 *>(_g4_sf + 8u);
  _g4_t_v19 &v19 = *reinterpret_cast<_g4_t_v19 *>(_g4_sf + 12u);
  _g4_t_v20 &v20 = *reinterpret_cast<_g4_t_v20 *>(_g4_sf + 16u);
  _g4_t_v21 &v21 = *reinterpret_cast<_g4_t_v21 *>(_g4_sf + 20u);
  _g4_t_v22 &v22 = *reinterpret_cast<_g4_t_v22 *>(_g4_sf + 24u);
  _g4_t_v23 &v23 = *reinterpret_cast<_g4_t_v23 *>(_g4_sf + 28u);
  _g4_t_v24 &v24 = *reinterpret_cast<_g4_t_v24 *>(_g4_sf + 32u);
  _g4_t_v25 &v25 = *reinterpret_cast<_g4_t_v25 *>(_g4_sf + 36u);
  _g4_t_v26 &v26 = *reinterpret_cast<_g4_t_v26 *>(_g4_sf + 40u);
  _g4_t_v27 &v27 = *reinterpret_cast<_g4_t_v27 *>(_g4_sf + 44u);
  _g4_t_v28 &v28 = *reinterpret_cast<_g4_t_v28 *>(_g4_sf + 44u);
  _g4_t_v29 &v29 = *reinterpret_cast<_g4_t_v29 *>(_g4_sf + 48u);

  v2 = hkpExtendedMeshShape::expandOneTriangleSubparts(self);
  *(uint32_t *)v2 = *(uint32_t *)a2;
  *(uint32_t *)(v2 + 4) = *((uint32_t *)a2 + 1);
  *(uint32_t *)(v2 + 8) = *((uint32_t *)a2 + 2);
  *(uint32_t *)(v2 + 12) = *((uint32_t *)a2 + 3);
  *(uint32_t *)(v2 + 16) = *((uint32_t *)a2 + 4);
  *(uint32_t *)(v2 + 20) = *((uint32_t *)a2 + 5);
  *(uint32_t *)(v2 + 24) = *((uint32_t *)a2 + 6);
  *(uint32_t *)(v2 + 28) = *((uint32_t *)a2 + 7);
  *(uint32_t *)(v2 + 32) = *((uint32_t *)a2 + 8);
  *(uint16_t *)(v2 + 36) = *((uint16_t *)a2 + 18);
  *(uint32_t *)(v2 + 40) = *((uint32_t *)a2 + 10);
  *(uint16_t *)(v2 + 44) = *((uint16_t *)a2 + 22);
  *(uint8_t *)(v2 + 46) = *((uint8_t *)a2 + 46);
  *(uint8_t *)(v2 + 47) = *((uint8_t *)a2 + 47);
  *(uint32_t *)(v2 + 48) = *((uint32_t *)a2 + 12);
  *(uint32_t *)(v2 + 52) = *((uint32_t *)a2 + 13);
  *(uint32_t *)(v2 + 56) = *((uint32_t *)a2 + 14);
  *(uint32_t *)(v2 + 60) = *((uint32_t *)a2 + 15);
  *(uint32_t *)(v2 + 64) = *((uint32_t *)a2 + 16);
  *(uint32_t *)(v2 + 68) = *((uint32_t *)a2 + 17);
  *(uint32_t *)(v2 + 72) = *((uint32_t *)a2 + 18);
  *(uint32_t *)(v2 + 76) = *((uint32_t *)a2 + 19);
  *(uint32_t *)(v2 + 80) = *((uint32_t *)a2 + 20);
  *(uint32_t *)(v2 + 84) = *((uint32_t *)a2 + 21);
  *(uint32_t *)(v2 + 88) = *((uint32_t *)a2 + 22);
  *(uint32_t *)(v2 + 92) = *((uint32_t *)a2 + 23);
  *(uint32_t *)(v2 + 96) = *((uint32_t *)a2 + 24);
  *(uint32_t *)(v2 + 100) = *((uint32_t *)a2 + 25);
  *(uint32_t *)(v2 + 104) = *((uint32_t *)a2 + 26);
  *(uint32_t *)(v2 + 108) = *((uint32_t *)a2 + 27);
  v3 = *((float *)self + 36);
  v26 = *((float *)self + 40) - v3;
  v4 = *((float *)self + 37);
  v25 = *((float *)self + 41) - v4;
  v5 = *((float *)self + 42);
  v27 = *((float *)self + 38);
  v6 = *((float *)self + 39);
  v22 = *((float *)self + 40) + v3;
  v21 = *((float *)self + 41) + v4;
  v24 = v5 - v27;
  v7 = *((float *)self + 43);
  v20 = v27 + v5;
  v23 = v7 - v6;
  v19 = v7 + v6;
  hkpExtendedMeshShape::calcAabbExtents((hkpExtendedMeshShape::Self *)v2, (hkpExtendedMeshShape::TrianglesSubpart::Self *)v29);
  v8 = *((float *)self + 58);
  v9 = v29[6] + v8;
  v18 = v8 + v29[7];
  v10 = fminf(v26, v29[0] - v8);
  v11 = fminf(v25, v29[1] - v8);
  v12 = fminf(v23, v29[3] - v8);
  v28 = fminf(v24, v29[2] - v8);
  v13 = fmaxf(v22, v29[4] + v8);
  v14 = fmaxf(v21, v29[5] + v8);
  *((float *)self + 40) = (float)(v10 + v13) * 0.5;
  *((float *)self + 36) = (float)(v13 - v10) * 0.5;
  v15 = fmaxf(v20, v9);
  v16 = fmaxf(v19, v18);
  *((float *)self + 41) = (float)(v11 + v14) * 0.5;
  *((float *)self + 37) = (float)(v14 - v11) * 0.5;
  *((float *)self + 42) = (float)(v28 + v15) * 0.5;
  *((float *)self + 38) = (float)(v15 - v28) * 0.5;
  *((float *)self + 43) = (float)(v12 + v16) * 0.5;
  *((float *)self + 39) = (float)(v16 - v12) * 0.5;
  result = hkpExtendedMeshShape::getNumChildShapesInTrianglesSubpart(self, a2, *((uint32_t *)self + 47) - 1);
  *((uint32_t *)self + 57) += result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::expandOneShapesSubparts  (binary VA: 0x16e8420)
// Original: hkpExtendedMeshShape::expandOneShapesSubparts
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::expandOneShapesSubparts(hkpExtendedMeshShape::Self *self)
{
  int v1;
  int v2;
  int v3;
  int v4;
  int v5;
  uint8_t v7[28];

  v1 = *((uint32_t *)self + 50);
  v2 = *((uint32_t *)self + 51) & 0x3FFFFFFF;
  v3 = v1;
  if ( v1 + 1 > v2 )
  {
    v4 = 2 * v2;
    if ( v4 < v1 + 1 )
      v4 = *((uint32_t *)self + 50) + 1;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v7,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)self + 49,
      v4,
      64);
    v3 = *((uint32_t *)self + 50);
  }
  v5 = *((uint32_t *)self + 49) + (v3 << 6);
  *(uint16_t *)v5 = 11;
  *(uint16_t *)(v5 + 6) = 0;
  *(uint16_t *)(v5 + 4) = 0;
  *(uint32_t *)(v5 + 12) = 0;
  *(uint32_t *)(v5 + 8) = 0;
  *(uint16_t *)(v5 + 2) = 0;
  *(uint32_t *)(v5 + 16) = 0;
  *(uint32_t *)(v5 + 20) = 0;
  *(uint32_t *)(v5 + 24) = 0;
  *(uint32_t *)(v5 + 28) = 0x80000000;
  ++*((uint32_t *)self + 50);
  return *((uint32_t *)self + 49) + (v1 << 6);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::addShapesSubpart  (binary VA: 0x16e8500)
// Original: hkpExtendedMeshShape::addShapesSubpart
// ----------------------------------------------------------------------------
int hkpExtendedMeshShape::addShapesSubpart(hkpExtendedMeshShape::Self *self, const hkpExtendedMeshShape::ShapesSubpart::Self *a2)
{
  const hkpExtendedMeshShape::ShapesSubpart::Self *v2;
  int v3;
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr00_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int i;
  int v17;
  int v18;
  int32_t v19; // kr04_4
  int32_t v20;
  int32_t v21; // ett
  int v22;
  int j;
  int32_t v24;
  int v25;
  int v26;
  int v27;
  int v28;
  int v29;
  bool v30; // cc
  int v31;
  int v32;
  int v33;
  int v34;
  int32_t v35; // kr08_4
  hkpExtendedMeshShape::Self *v36;
  float v37; // xmm6_4
  __m128i v38;
  __m128i v39;
  float v40;
  float v41; // xmm0_4
  float v42; // xmm6_4
  float v43; // xmm7_4
  float v44; // xmm0_4
  float v45; // xmm5_4
  float v46; // xmm3_4
  typedef float _g4_t_v48;
  typedef hkpExtendedMeshShape::Self *_g4_t_v49;
  typedef int _g4_t_v50;
  typedef float _g4_t_v51;
  typedef hkpExtendedMeshShape::ShapesSubpart::Self *_g4_t_v52;
  typedef hkpExtendedMeshShape::Self *_g4_t_v53;
  typedef float _g4_t_v54;
  typedef int _g4_t_v55;
  typedef int _g4_t_v56;
  typedef int _g4_t_v57;
  typedef float _g4_t_v58;
  typedef int _g4_t_v59;
  typedef float _g4_t_v60;
  typedef int _g4_t_v61;
  typedef int _g4_t_v62;
  typedef float _g4_t_v63;
  typedef float _g4_t_v64;
  typedef int _g4_t_v65;
  typedef int _g4_t_v66;
  typedef char _g4_t_v67[4];
  typedef float _g4_t_v68[14];
  enum : size_t {
    _g4_s0 = 160u,
    _g4_s1 = (0u + sizeof(_g4_t_v48)) > _g4_s0 ? (0u + sizeof(_g4_t_v48)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v49)) > _g4_s1 ? (4u + sizeof(_g4_t_v49)) : _g4_s1,
    _g4_s3 = (8u + sizeof(_g4_t_v50)) > _g4_s2 ? (8u + sizeof(_g4_t_v50)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v51)) > _g4_s3 ? (8u + sizeof(_g4_t_v51)) : _g4_s3,
    _g4_s5 = (12u + sizeof(_g4_t_v52)) > _g4_s4 ? (12u + sizeof(_g4_t_v52)) : _g4_s4,
    _g4_s6 = (16u + sizeof(_g4_t_v53)) > _g4_s5 ? (16u + sizeof(_g4_t_v53)) : _g4_s5,
    _g4_s7 = (16u + sizeof(_g4_t_v54)) > _g4_s6 ? (16u + sizeof(_g4_t_v54)) : _g4_s6,
    _g4_s8 = (20u + sizeof(_g4_t_v55)) > _g4_s7 ? (20u + sizeof(_g4_t_v55)) : _g4_s7,
    _g4_s9 = (20u + sizeof(_g4_t_v56)) > _g4_s8 ? (20u + sizeof(_g4_t_v56)) : _g4_s8,
    _g4_s10 = (20u + sizeof(_g4_t_v57)) > _g4_s9 ? (20u + sizeof(_g4_t_v57)) : _g4_s9,
    _g4_s11 = (20u + sizeof(_g4_t_v58)) > _g4_s10 ? (20u + sizeof(_g4_t_v58)) : _g4_s10,
    _g4_s12 = (24u + sizeof(_g4_t_v59)) > _g4_s11 ? (24u + sizeof(_g4_t_v59)) : _g4_s11,
    _g4_s13 = (24u + sizeof(_g4_t_v60)) > _g4_s12 ? (24u + sizeof(_g4_t_v60)) : _g4_s12,
    _g4_s14 = (28u + sizeof(_g4_t_v61)) > _g4_s13 ? (28u + sizeof(_g4_t_v61)) : _g4_s13,
    _g4_s15 = (28u + sizeof(_g4_t_v62)) > _g4_s14 ? (28u + sizeof(_g4_t_v62)) : _g4_s14,
    _g4_s16 = (28u + sizeof(_g4_t_v63)) > _g4_s15 ? (28u + sizeof(_g4_t_v63)) : _g4_s15,
    _g4_s17 = (28u + sizeof(_g4_t_v64)) > _g4_s16 ? (28u + sizeof(_g4_t_v64)) : _g4_s16,
    _g4_s18 = (32u + sizeof(_g4_t_v65)) > _g4_s17 ? (32u + sizeof(_g4_t_v65)) : _g4_s17,
    _g4_s19 = (32u + sizeof(_g4_t_v66)) > _g4_s18 ? (32u + sizeof(_g4_t_v66)) : _g4_s18,
    _g4_s20 = (36u + sizeof(_g4_t_v67)) > _g4_s19 ? (36u + sizeof(_g4_t_v67)) : _g4_s19,
    _g4_s21 = (40u + sizeof(_g4_t_v68)) > _g4_s20 ? (40u + sizeof(_g4_t_v68)) : _g4_s20
  };
  alignas(16) uint8_t _g4_sf[_g4_s21];
  _g4_t_v48 &v48 = *reinterpret_cast<_g4_t_v48 *>(_g4_sf + 0u);
  _g4_t_v49 &v49 = *reinterpret_cast<_g4_t_v49 *>(_g4_sf + 4u);
  _g4_t_v50 &v50 = *reinterpret_cast<_g4_t_v50 *>(_g4_sf + 8u);
  _g4_t_v51 &v51 = *reinterpret_cast<_g4_t_v51 *>(_g4_sf + 8u);
  _g4_t_v52 &v52 = *reinterpret_cast<_g4_t_v52 *>(_g4_sf + 12u);
  _g4_t_v53 &v53 = *reinterpret_cast<_g4_t_v53 *>(_g4_sf + 16u);
  _g4_t_v54 &v54 = *reinterpret_cast<_g4_t_v54 *>(_g4_sf + 16u);
  _g4_t_v55 &v55 = *reinterpret_cast<_g4_t_v55 *>(_g4_sf + 20u);
  _g4_t_v56 &v56 = *reinterpret_cast<_g4_t_v56 *>(_g4_sf + 20u);
  _g4_t_v57 &v57 = *reinterpret_cast<_g4_t_v57 *>(_g4_sf + 20u);
  _g4_t_v58 &v58 = *reinterpret_cast<_g4_t_v58 *>(_g4_sf + 20u);
  _g4_t_v59 &v59 = *reinterpret_cast<_g4_t_v59 *>(_g4_sf + 24u);
  _g4_t_v60 &v60 = *reinterpret_cast<_g4_t_v60 *>(_g4_sf + 24u);
  _g4_t_v61 &v61 = *reinterpret_cast<_g4_t_v61 *>(_g4_sf + 28u);
  _g4_t_v62 &v62 = *reinterpret_cast<_g4_t_v62 *>(_g4_sf + 28u);
  _g4_t_v63 &v63 = *reinterpret_cast<_g4_t_v63 *>(_g4_sf + 28u);
  _g4_t_v64 &v64 = *reinterpret_cast<_g4_t_v64 *>(_g4_sf + 28u);
  _g4_t_v65 &v65 = *reinterpret_cast<_g4_t_v65 *>(_g4_sf + 32u);
  _g4_t_v66 &v66 = *reinterpret_cast<_g4_t_v66 *>(_g4_sf + 32u);
  _g4_t_v67 &v67 = *reinterpret_cast<_g4_t_v67 *>(_g4_sf + 36u);
  _g4_t_v68 &v68 = *reinterpret_cast<_g4_t_v68 *>(_g4_sf + 40u);

  LODWORD(v68[10]) = (uint32_t)(uintptr_t)(&self);
  v49 = self;
  v2 = a2;
  v52 = (hkpExtendedMeshShape::ShapesSubpart::Self *)(a2);
  v53 = (hkpExtendedMeshShape::Self *)hkpExtendedMeshShape::expandOneShapesSubparts(self);
  *(uint32_t *)v53 = *(uint32_t *)v2;
  *((uint32_t *)v53 + 1) = *((uint32_t *)v2 + 1);
  *((uint32_t *)v53 + 2) = *((uint32_t *)v2 + 2);
  *((uint32_t *)v53 + 3) = *((uint32_t *)v2 + 3);
  *((uint32_t *)v53 + 4) = *((uint32_t *)v2 + 4);
  v4 = *((uint32_t *)v53 + 6);
  v5 = *((uint32_t *)v2 + 6);
  v3 = v5;
  v50 = v5;
  if ( v5 > v4 )
    v5 = *((uint32_t *)v53 + 6);
  v6 = *((uint32_t *)v53 + 7) & 0x3FFFFFFF;
  v61 = v5;
  if ( v3 > v6 )
  {
    v7 = 2 * v6;
    if ( v7 < v3 )
      v7 = v3;
    hkArrayUtil::reserve(
      (hkArrayUtil::Self *)v67,
      (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc,
      (int *)v53 + 5,
      v7,
      4);
  }
  v8 = *((uint32_t *)v53 + 5) + 4 * v50;
  v65 = *((uint32_t *)v53 + 5);
  v9 = v4 - v50 - 1;
  if ( v9 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v8 + 4 * v9);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v59 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v59;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v8 + 4 * v9--) = 0;
    }
    while ( v9 != -1 );
    v65 = *((uint32_t *)v53 + 5);
  }
  v15 = *((uint32_t *)v52 + 5);
  if ( v61 <= 0 )
  {
    v26 = *((uint32_t *)v52 + 5);
  }
  else
  {
    for ( i = 0; i != v61; ++i )
    {
      v22 = *(uint32_t *)(v15 + 4 * i);
      if ( v22 != 0 && *(uint16_t *)(v22 + 6) != 0 )
      {
        v56 = *(uint32_t *)(v15 + 4 * i);
        for ( j = v56; ; j = v56 )
        {
          v24 = *(uint32_t *)(j + 4);
          HIWORD(v25) = HIWORD(v24);
          LOWORD(v25) = 0;
          if ( v24 == __sync_val_compare_and_swap(
                        (volatile int32_t *)(v22 + 4),
                        v24,
                        v25 | (uint16_t)(v24 + 1)) )
            break;
        }
      }
      v17 = *(uint32_t *)(v65 + 4 * i);
      if ( v17 != 0 && *(uint16_t *)(v17 + 6) != 0 )
      {
        v55 = v15;
        do
        {
          v19 = *(uint32_t *)(v17 + 4);
          HIWORD(v18) = HIWORD(v19);
          LOWORD(v18) = 0;
          v20 = v18 | (uint16_t)(v19 - 1);
          v21 = v19;
        }
        while ( v21 != __sync_val_compare_and_swap((volatile int32_t *)(v17 + 4), v21, v20) );
        v15 = v55;
        if ( (uint16_t)v20 == 0 )
          G4_VCALL<void>(v17, 16);
      }
      *(uint32_t *)(v65 + 4 * i) = *(uint32_t *)(v15 + 4 * i);
    }
    v26 = *((uint32_t *)v52 + 5);
    v65 = *((uint32_t *)v53 + 5);
  }
  v27 = v65 + 4 * v61;
  v28 = 4 * v61 + v26;
  v29 = 0;
  v30 = v50 - v61 <= 0;
  v62 = v50 - v61;
  v66 = v27;
  if ( !v30 )
  {
    v31 = v28;
    while ( 1 )
    {
      v32 = *(uint32_t *)(v31 + 4 * v29);
      if ( v32 == 0 )
        break;
      v33 = *(uint32_t *)(v31 + 4 * v29);
      if ( *(uint16_t *)(v32 + 6) != 0 )
      {
        v57 = *(uint32_t *)(v31 + 4 * v29);
        do
        {
          v35 = *(uint32_t *)(v57 + 4);
          HIWORD(v34) = HIWORD(v35);
          LOWORD(v34) = 0;
        }
        while ( v35 != __sync_val_compare_and_swap(
                         (volatile int32_t *)(v32 + 4),
                         v35,
                         v34 | (uint16_t)(v35 + 1)) );
        *(uint32_t *)(v66 + 4 * v29) = *(uint32_t *)(v31 + 4 * v29);
        if ( ++v29 == v62 )
          goto LABEL_39;
      }
      else
      {
LABEL_33:
        *(uint32_t *)(v66 + 4 * v29++) = v33;
        if ( v29 == v62 )
          goto LABEL_39;
      }
    }
    v33 = 0;
    goto LABEL_33;
  }
LABEL_39:
  v36 = v53;
  *((uint32_t *)v53 + 6) = v50;
  *((uint32_t *)v53 + 8) = *((uint32_t *)v52 + 8);
  *((uint32_t *)v53 + 9) = *((uint32_t *)v52 + 9);
  *((uint32_t *)v53 + 10) = *((uint32_t *)v52 + 10);
  *((uint32_t *)v53 + 11) = *((uint32_t *)v52 + 11);
  *((uint32_t *)v53 + 12) = *((uint32_t *)v52 + 12);
  *((uint32_t *)v53 + 13) = *((uint32_t *)v52 + 13);
  *((uint32_t *)v53 + 14) = *((uint32_t *)v52 + 14);
  *((uint32_t *)v53 + 15) = *((uint32_t *)v52 + 15);
  v37 = *((float *)v49 + 36);
g4_m128_raw(v38) = *((unsigned int *)v49 + 40);
  *(float *)g4_m128_ptr<int32_t>(v38) = *(float *)g4_m128_ptr<int32_t>(v38) - v37;
g4_m128_raw(v39) = *((unsigned int *)v49 + 41);
  v40 = COERCE_FLOAT(_mm_cvtsi128_si32(v38));
g4_m128_lane<int32_t>(v38, 0) = *((uint32_t *)v49 + 37);
  *(float *)g4_m128_ptr<int32_t>(v39) = *(float *)g4_m128_ptr<int32_t>(v39) - *(float *)g4_m128_ptr<int32_t>(v38);
  v48 = *((float *)v49 + 40) + v37;
  v63 = *((float *)v49 + 42) - *((float *)v49 + 38);
  v41 = *((float *)v49 + 39);
  v60 = *((float *)v49 + 43) - v41;
  v51 = *((float *)v49 + 41) + *(float *)g4_m128_ptr<int32_t>(v38);
  v58 = *((float *)v49 + 43) + v41;
  v54 = *((float *)v49 + 42) + *((float *)v49 + 38);
  hkpExtendedMeshShape::calcAabbExtents(v36, (const hkpExtendedMeshShape::ShapesSubpart::Self *)v68);
  v42 = fminf(v40, v68[0]);
  v43 = fmaxf(v48, v68[4]);
  v44 = fminf(v63, v68[2]);
  v64 = fminf(v60, v68[3]);
  *(float *)g4_m128_ptr<int32_t>(v38) = fminf(COERCE_FLOAT(_mm_cvtsi128_si32(v39)), v68[1]);
  v45 = fmaxf(v51, v68[5]);
  v46 = fmaxf(v54, v68[6]);
  *(float *)g4_m128_ptr<int32_t>(v39) = fmaxf(v58, v68[7]);
  *((float *)v49 + 40) = (float)(v42 + v43) * 0.5;
  *((float *)v49 + 36) = (float)(v43 - v42) * 0.5;
  *((float *)v49 + 41) = (float)(*(float *)g4_m128_ptr<int32_t>(v38) + v45) * 0.5;
  *((float *)v49 + 37) = (float)(v45 - *(float *)g4_m128_ptr<int32_t>(v38)) * 0.5;
  *((float *)v49 + 42) = (float)(v44 + v46) * 0.5;
  *((float *)v49 + 38) = (float)(v46 - v44) * 0.5;
  *((float *)v49 + 43) = (float)(v64 + *(float *)g4_m128_ptr<int32_t>(v39)) * 0.5;
  *((float *)v49 + 39) = (float)(*(float *)g4_m128_ptr<int32_t>(v39) - v64) * 0.5;
  *((uint32_t *)v49 + 57) += hkpExtendedMeshShape::getNumChildShapesInShapesSubpart(v49, v52);
  return *((uint32_t *)v49 + 50) - 1;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::freeTriangleSubparts  (binary VA: 0x16e89a0)
// Original: hkpExtendedMeshShape::freeTriangleSubparts
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::freeTriangleSubparts()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShape::freeShapesSubparts  (binary VA: 0x16e89b0)
// Original: hkpExtendedMeshShape::freeShapesSubparts
// ----------------------------------------------------------------------------
void hkpExtendedMeshShape::freeShapesSubparts()
{
  ;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::staticClass  (binary VA: 0x1763770)
// Original: hkpExtendedMeshShapeBreakableMaterial::staticClass
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShapeBreakableMaterial::staticClass()
{
  return &hkpExtendedMeshShapeBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::getClassType  (binary VA: 0x17753f0)
// Original: hkpExtendedMeshShapeBreakableMaterial::getClassType
// ----------------------------------------------------------------------------
void * hkpExtendedMeshShapeBreakableMaterial::getClassType()
{
  return &hkpExtendedMeshShapeBreakableMaterialClass;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::setDefaultMapping  (binary VA: 0x1775410)
// Original: hkpExtendedMeshShapeBreakableMaterial::setDefaultMapping
// ----------------------------------------------------------------------------
int hkpExtendedMeshShapeBreakableMaterial::setDefaultMapping(hkpExtendedMeshShapeBreakableMaterial::Self *self)
{
  int v1;
  int result;

  v1 = *((uint32_t *)self + 3);
  LOBYTE(v1) = v1 & 0xF;
  result = v1 | 0x40;
  *((uint32_t *)self + 3) = result;
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndex  (binary VA: 0x1775420)
// Original: hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndex
// ----------------------------------------------------------------------------
int hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndex(hkpExtendedMeshShapeBreakableMaterial::Self *self, const hkcdShape::Self **a2, signed int a3)
{
  const hkcdShape::Self *v3;
  unsigned int v4;
  int v5;

  v3 = (const hkcdShape::Self *)a2;
  if ( *((uint8_t *)a2 + 8) == 9 )
    v3 = a2[13];
  v4 = (a3 & 0x7FFFFFFFu) >> (32 - *((uint8_t *)v3 + 180));
  if ( a3 < 0 )
    v5 = *((uint32_t *)v3 + 49) + (v4 << 6);
  else
    v5 = *((uint32_t *)v3 + 46) + 112 * v4;
  return *(uint16_t *)(v5 + 2);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::getShapeKeyMaterial  (binary VA: 0x1775470)
// Original: hkpExtendedMeshShapeBreakableMaterial::getShapeKeyMaterial
// ----------------------------------------------------------------------------
int hkpExtendedMeshShapeBreakableMaterial::getShapeKeyMaterial(hkpExtendedMeshShapeBreakableMaterial::Self *self, const hkcdShape::Self **a2, signed int a3)
{
  const hkcdShape::Self *v3;
  unsigned int v4;
  int v5;

  v3 = (const hkcdShape::Self *)a2;
  if ( *((uint8_t *)a2 + 8) == 9 )
    v3 = a2[13];
  v4 = (a3 & 0x7FFFFFFFu) >> (32 - *((uint8_t *)v3 + 180));
  if ( a3 < 0 )
    v5 = *(int16_t *)(*((uint32_t *)v3 + 49) + (v4 << 6) + 2);
  else
    v5 = *(int16_t *)(*((uint32_t *)v3 + 46) + 112 * v4 + 2);
  return *(uint32_t *)(*((uint32_t *)self + 5) + 4 * v5);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::convertShapeKeyToSubShapeId  (binary VA: 0x17754e0)
// Original: hkpExtendedMeshShapeBreakableMaterial::convertShapeKeyToSubShapeId
// ----------------------------------------------------------------------------
unsigned int hkpExtendedMeshShapeBreakableMaterial::convertShapeKeyToSubShapeId(hkpExtendedMeshShapeBreakableMaterial::Self *self, unsigned int a2)
{
  return a2 & (-1 << *((uint8_t *)self + 13));
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::convertShapeKeysToSubShapeIds  (binary VA: 0x1775500)
// Original: hkpExtendedMeshShapeBreakableMaterial::convertShapeKeysToSubShapeIds
// ----------------------------------------------------------------------------
int hkpExtendedMeshShapeBreakableMaterial::convertShapeKeysToSubShapeIds(hkpExtendedMeshShapeBreakableMaterial::Self *self, hkArray<unsigned int, hkContainerHeapAllocator::Self> *a2)
{
  int result;
  int v3;
  int v4;
  uint32_t *v5;

  result = *((uint32_t *)a2 + 1) - 1;
  v3 = -1 << *((uint8_t *)self + 13);
  v4 = 4 * result;
  if ( result >= 0 )
  {
    do
    {
      --result;
      v5 = (uint32_t *)(*(uint32_t *)a2 + v4);
      v4 -= 4;
      *v5 &= v3;
    }
    while ( result != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::getShapeKeysForSubShapes  (binary VA: 0x1775550)
// Original: hkpExtendedMeshShapeBreakableMaterial::getShapeKeysForSubShapes
// ----------------------------------------------------------------------------
int hkpExtendedMeshShapeBreakableMaterial::getShapeKeysForSubShapes(hkpExtendedMeshShapeBreakableMaterial::Self *self, const hkcdShape::Self *a2, const unsigned int *a3, int a4, hkpBreakableMaterial::ShapeKeyCollector::Self *a5)
{
  int v5;
  int result;
  unsigned int v7;
  int v8;

  v5 = 0;
  v8 = -1 << *((uint8_t *)self + 13);
  result = a4;
  if ( a4 > 0 )
  {
    do
    {
      v7 = a3[v5++];
      result = G4_VCALL<int>(a5, 16, v8 & v7, (v7 & ~v8) + 1);
    }
    while ( v5 != a4 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::createInverseMapping  (binary VA: 0x17755d0)
// Original: hkpExtendedMeshShapeBreakableMaterial::createInverseMapping
// ----------------------------------------------------------------------------
int hkpExtendedMeshShapeBreakableMaterial::createInverseMapping(hkpExtendedMeshShapeBreakableMaterial::Self *self, const hkcdShape::Self **a2)
{
  const hkcdShape::Self *v2;
  int result;
  int *v4;
  int v5;
  unsigned int v6;
  int v7;
  uint16_t *v8;
  int v9;
  int v10;
  int v11;
  uint32_t *v12;

  v2 = (const hkcdShape::Self *)a2;
  hkpBreakableMultiMaterial::createInverseMapping(self, (const hkcdShape::Self *)a2);
  if ( *((uint8_t *)a2 + 8) == 9 )
    v2 = a2[13];
  v12 = *((uint32_t **)self + 8);
  result = v12[3] - 1;
  v9 = v12[5];
  v10 = result;
  v11 = 4 * result;
  if ( result >= 0 )
  {
    do
    {
      v8 = (uint16_t *)(v12[2] + v11);
      result = v8[1] - 1;
      if ( v8[1] != 0 )
      {
        do
        {
          while ( 1 )
          {
            v4 = (int *)(v9 + 4 * (result + *v8));
            v5 = *v4;
            v6 = (*v4 & 0x7FFFFFFFu) >> (32 - *((uint8_t *)v2 + 180));
            v7 = *v4 < 0 ? *((uint32_t *)v2 + 49) + (v6 << 6) : *((uint32_t *)v2 + 46) + 112 * v6;
            if ( (*(uint8_t *)v7 & 1) != 0 )
              break;
            --result;
            *v4 = v5 | (*(uint32_t *)(v7 + 20) - 1);
            if ( result == -1 )
              goto LABEL_11;
          }
          --result;
          *v4 = v5 | (*(uint32_t *)(v7 + 24) - 1);
        }
        while ( result != -1 );
      }
LABEL_11:
      --v10;
      v11 -= 4;
    }
    while ( v10 != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndices  (binary VA: 0x17756f0)
// Original: hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndices
// ----------------------------------------------------------------------------
int hkpExtendedMeshShapeBreakableMaterial::getSubShapeMaterialIndices(int a1, int a2, uint32_t *a3, int *a4)
{
  int v4;
  int v5;
  int v6;
  int v7;
  int v8;
  int result;
  int v10;
  unsigned int v11;
  typedef int _g4_t_v12;
  typedef int _g4_t_v13;
  typedef int _g4_t_v14;
  typedef char _g4_t_v15[28];
  enum : size_t {
    _g4_s0 = 112u,
    _g4_s1 = (0u + sizeof(_g4_t_v12)) > _g4_s0 ? (0u + sizeof(_g4_t_v12)) : _g4_s0,
    _g4_s2 = (4u + sizeof(_g4_t_v13)) > _g4_s1 ? (4u + sizeof(_g4_t_v13)) : _g4_s1,
    _g4_s3 = (4u + sizeof(_g4_t_v14)) > _g4_s2 ? (4u + sizeof(_g4_t_v14)) : _g4_s2,
    _g4_s4 = (8u + sizeof(_g4_t_v15)) > _g4_s3 ? (8u + sizeof(_g4_t_v15)) : _g4_s3
  };
  alignas(16) uint8_t _g4_sf[_g4_s4];
  _g4_t_v12 &v12 = *reinterpret_cast<_g4_t_v12 *>(_g4_sf + 0u);
  _g4_t_v13 &v13 = *reinterpret_cast<_g4_t_v13 *>(_g4_sf + 4u);
  _g4_t_v14 &v14 = *reinterpret_cast<_g4_t_v14 *>(_g4_sf + 4u);
  _g4_t_v15 &v15 = *reinterpret_cast<_g4_t_v15 *>(_g4_sf + 8u);

  v4 = a3[1];
  v5 = a4[1];
  v6 = a4[2] & 0x3FFFFFFF;
  v7 = v5 + v4;
  if ( v5 + v4 > v6 )
  {
    v8 = 2 * v6;
    v13 = a4[1];
    if ( v7 < v8 )
      v7 = v8;
    hkArrayUtil::reserve((hkArrayUtil::Self *)v15, (hkMemoryAllocator::Self *)&hkContainerHeapAllocator::s_alloc, a4, v7, 2);
    v7 = v4 + a4[1];
    v5 = v13;
  }
  a4[1] = v7;
  v12 = v5 + v5 + *a4;
  if ( *(uint8_t *)(a2 + 8) == 9 )
    a2 = *(uint32_t *)(a2 + 52);
  result = v4 - 1;
  if ( v4 - 1 >= 0 )
  {
    v14 = 4 * (v4 - 1);
    do
    {
      v11 = (*(uint32_t *)(*a3 + v14) & 0x7FFFFFFFu) >> (32 - *(uint8_t *)(a2 + 180));
      if ( *(int *)(*a3 + v14) >= 0 )
        v10 = *(uint32_t *)(a2 + 184) + 112 * v11;
      else
        v10 = *(uint32_t *)(a2 + 196) + (v11 << 6);
      v14 -= 4;
      *(uint16_t *)(v12 + 2 * result--) = *(uint16_t *)(v10 + 2);
    }
    while ( result != -1 );
  }
  return result;
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::Destroy  (binary VA: 0x17757f0)
// Original: hkpExtendedMeshShapeBreakableMaterial::~hkpExtendedMeshShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpExtendedMeshShapeBreakableMaterial::Destroy(hkpExtendedMeshShapeBreakableMaterial::Self *self)
{
  hkpExtendedMeshShapeBreakableMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;
  int v17;
  int v18;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v18 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v18;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
  v16 = *(uint32_t *)(*(uint32_t *)_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE) + 44);
  v17 = 36;
  if ( *((uint16_t *)v1 + 3) != 0xFFFF )
    v17 = *((uint16_t *)v1 + 3);
  G4_VCALL<void>(v16, 12, v1, v17);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::Destroy_ea1775950  (binary VA: 0x1775950)
// Original: hkpExtendedMeshShapeBreakableMaterial::~hkpExtendedMeshShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpExtendedMeshShapeBreakableMaterial::Destroy_ea1775950(hkpExtendedMeshShapeBreakableMaterial::Self *self)
{
  hkpExtendedMeshShapeBreakableMaterial::Self *v1;
  int v2;
  int v3;
  int32_t v4; // kr00_4
  int32_t v5;
  int32_t v6; // ett
  int v7;
  int v8;
  int v9;
  int v10;
  int v11;
  int32_t v12; // kr04_4
  int32_t v13;
  int32_t v14; // ett
  int v15;
  int v16;

  v1 = self;
  v2 = *((uint32_t *)self + 8);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_209EBA8);
  if ( v2 != 0 && *(uint16_t *)(v2 + 6) != 0 )
  {
    do
    {
      v4 = *(uint32_t *)(v2 + 4);
      HIWORD(v3) = HIWORD(v4);
      LOWORD(v3) = 0;
      v5 = v3 | (uint16_t)(v4 - 1);
      v6 = v4;
    }
    while ( v6 != __sync_val_compare_and_swap((volatile int32_t *)(v2 + 4), v6, v5) );
    if ( (uint16_t)v5 == 0 )
      G4_VCALL<void>(v2, 16);
  }
  v7 = *((uint32_t *)self + 6);
  *((uint32_t *)self + 8) = 0;
  v8 = v7 - 1;
  v9 = *((uint32_t *)self + 5);
  if ( v8 >= 0 )
  {
    do
    {
      v10 = *(uint32_t *)(v9 + 4 * v8);
      if ( v10 != 0 && *(uint16_t *)(v10 + 6) != 0 )
      {
        v16 = v8;
        do
        {
          v12 = *(uint32_t *)(v10 + 4);
          HIWORD(v11) = HIWORD(v12);
          LOWORD(v11) = 0;
          v13 = v11 | (uint16_t)(v12 - 1);
          v14 = v12;
        }
        while ( v14 != __sync_val_compare_and_swap((volatile int32_t *)(v10 + 4), v14, v13) );
        v8 = v16;
        if ( (uint16_t)v13 == 0 )
          G4_VCALL<void>(v10, 16);
      }
      *(uint32_t *)(v9 + 4 * v8--) = 0;
    }
    while ( v8 != -1 );
    v1 = self;
  }
  v15 = *((uint32_t *)v1 + 7);
  *((uint32_t *)v1 + 6) = 0;
  if ( v15 >= 0 )
    (*(void (**)(uint32_t *, uint32_t, int))(hkContainerHeapAllocator::s_alloc + 20))(
      (uint32_t *)(&hkContainerHeapAllocator::s_alloc),
      *((uint32_t *)v1 + 5),
      4 * v15);
  *((uint32_t *)v1 + 5) = 0;
  *((uint32_t *)v1 + 7) = 0x80000000;
  hkpBreakableMaterial::Destroy(v1);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::Construct  (binary VA: 0x1775a70)
// Original: hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial
// ----------------------------------------------------------------------------
unsigned int hkpExtendedMeshShapeBreakableMaterial::Construct(uint32_t *a1, uint32_t *a2, char a3, int a4)
{
  unsigned int result;

  hkpBreakableMultiMaterial::Construct(a1, a2, a4);
  *a1 = ((uint32_t)(uintptr_t)&off_20A0648);
  result = ((uint8_t)(32 - a3) << 8) | a1[3] & 0xFFFF000F | 0x40;
  a1[3] = result;
  return result;
}



// ============================================================================
// Address:   0x1775ae0 (size: 55 bytes)
// Symbol:    _ZN37hkpExtendedMeshShapeBreakableMaterialC1E24hkFinishLoadedObjectFlag
// Demangled: hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial(hkFinishLoadedObjectFlag)
// ============================================================================
// Alternative name is '_ZN37hkpExtendedMeshShapeBreakableMaterialC2E24hkFinishLoadedObjectFlag'
void (**hkpExtendedMeshShapeBreakableMaterial::Construct(
        uint32_t *a1))(hkpExtendedMeshShapeBreakableMaterial::Self * self)
{
  hkpBreakableMultiMaterial::Construct(a1);
  *a1 = ((uint32_t)(uintptr_t)&off_20A0648);
  return (void (**)(hkpExtendedMeshShapeBreakableMaterial::Self *))(uintptr_t)(((uint32_t)(uintptr_t)&off_20A0648));
}
// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::Construct  (binary VA: 0x1775b20)
// Original: hkpExtendedMeshShapeBreakableMaterial::hkpExtendedMeshShapeBreakableMaterial
// ----------------------------------------------------------------------------
void hkpExtendedMeshShapeBreakableMaterial::Construct(hkpExtendedMeshShapeBreakableMaterial::Self *self, const hkpExtendedMeshShapeBreakableMaterial::Self *a2)
{
  hkpBreakableMultiMaterial::Construct(self, a2);
  *(uint32_t *)self = ((uint32_t)(uintptr_t)&off_20A0648);
}

// ----------------------------------------------------------------------------
// Function: hkpExtendedMeshShapeBreakableMaterial::duplicate  (binary VA: 0x1775b60)
// Original: hkpExtendedMeshShapeBreakableMaterial::duplicate
// ----------------------------------------------------------------------------
hkpExtendedMeshShapeBreakableMaterial::Self * hkpExtendedMeshShapeBreakableMaterial::duplicate(hkpExtendedMeshShapeBreakableMaterial::Self *self)
{
  int address;
  hkpExtendedMeshShapeBreakableMaterial::Self *v2;

  address = (int)(uintptr_t)(_emutls_get_address(&g4_emutls_v__ZN14hkMemoryRouter14s_memoryRouterE));
  v2 = (hkpExtendedMeshShapeBreakableMaterial::Self *)(*(int (**)(uint32_t, int))(**(uint32_t **)(*(uint32_t *)address + 44)
                                                                                + 8))(
                                                  *(uint32_t *)(*(uint32_t *)address + 44),
                                                  36);
  hkpExtendedMeshShapeBreakableMaterial::Construct(v2, self);
  return v2;
}


